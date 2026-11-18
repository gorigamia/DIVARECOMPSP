#include "psprecomp/runtime.hpp"
#include "generated_units.hpp"
#include <bit>
#include <cmath>
#include <cstdint>
#include <limits>

namespace psprecomp {
static const std::uint16_t kEntryIds_recomp_unit_0058[4096] = {
    1, 0, 0, 2, 0, 0, 3, 0, 4, 0, 0, 0, 0, 0, 5, 0, 0, 0, 0, 0, 6, 0, 0, 0, 0, 7, 0, 8, 0, 0, 0, 0,
    0, 9, 0, 0, 0, 0, 10, 0, 0, 0, 0, 11, 0, 0, 0, 0, 0, 0, 12, 0, 0, 0, 0, 0, 13, 0, 0, 0, 14, 0, 0, 0,
    15, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 16, 0, 0, 0, 17, 0, 0, 0, 18, 0, 0,
    0, 19, 0, 0, 0, 0, 0, 20, 0, 0, 0, 0, 21, 0, 0, 0, 0, 22, 0, 0, 0, 0, 0, 23, 0, 0, 0, 0, 24, 0, 25, 0,
    0, 0, 0, 0, 26, 0, 0, 0, 0, 0, 27, 0, 0, 0, 0, 0, 0, 0, 0, 28, 0, 0, 0, 0, 0, 0, 0, 0, 29, 0, 30, 0,
    0, 31, 0, 32, 0, 0, 33, 0, 34, 0, 0, 0, 35, 0, 0, 36, 0, 37, 0, 38, 0, 0, 0, 39, 0, 0, 0, 0, 0, 40, 0, 0,
    0, 0, 0, 41, 0, 0, 0, 42, 0, 0, 0, 43, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 44, 0, 0, 0, 45, 0, 0, 0, 46, 0, 0, 0, 47, 0, 0, 0, 0, 0, 0, 0, 0, 0, 48, 0, 0, 0, 0, 0, 0, 49,
    0, 0, 0, 50, 0, 0, 0, 0, 51, 0, 0, 0, 52, 0, 0, 53, 0, 0, 0, 0, 0, 0, 54, 0, 0, 55, 0, 0, 0, 0, 0, 0,
    56, 0, 0, 57, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 58, 0, 0, 0, 0, 0, 0, 59, 0, 0, 0, 0, 0, 60, 0, 0,
    0, 0, 61, 0, 62, 0, 0, 0, 0, 0, 63, 0, 0, 0, 0, 0, 64, 0, 0, 0, 0, 0, 0, 65, 0, 0, 0, 0, 0, 0, 0, 0,
    66, 0, 67, 0, 0, 0, 0, 0, 0, 68, 0, 0, 0, 0, 0, 69, 0, 0, 0, 0, 0, 70, 0, 0, 0, 71, 0, 0, 0, 72, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 73, 0, 0, 0, 74, 0, 0, 0, 75, 0, 0, 0,
    76, 0, 0, 0, 0, 0, 0, 0, 0, 0, 77, 0, 0, 0, 0, 0, 0, 78, 0, 0, 0, 79, 0, 0, 80, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 81, 0, 0, 0, 0, 0, 0, 82, 0, 0, 0, 0, 0, 83, 0, 0, 0, 0, 84, 0, 0, 0, 0, 85, 0, 0, 0,
    0, 0, 86, 0, 87, 0, 0, 88, 0, 0, 89, 0, 90, 0, 0, 0, 0, 0, 91, 0, 0, 0, 0, 0, 92, 0, 0, 0, 0, 93, 0, 94,
    0, 0, 0, 0, 0, 95, 0, 0, 0, 0, 0, 96, 0, 0, 0, 0, 0, 0, 97, 0, 0, 0, 0, 0, 0, 0, 0, 98, 0, 99, 0, 0,
    100, 0, 101, 0, 0, 0, 0, 0, 102, 0, 0, 0, 0, 0, 103, 0, 0, 0, 104, 0, 0, 0, 105, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 106, 0, 0, 0, 107, 0, 0, 0, 108, 0, 0, 0, 109, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 110, 0, 0, 0, 0, 0, 0, 111, 0, 0, 0, 112, 0, 0, 113, 0, 0, 0, 0, 0, 0, 114, 0, 0, 115, 0, 0, 0, 0,
    0, 0, 116, 0, 0, 0, 117, 0, 0, 0, 0, 0, 0, 0, 0, 0, 118, 0, 0, 0, 0, 0, 0, 119, 0, 0, 0, 0, 0, 120, 0, 0,
    0, 0, 121, 0, 0, 0, 0, 122, 0, 0, 0, 0, 0, 123, 0, 124, 0, 0, 125, 0, 0, 126, 0, 127, 0, 0, 0, 0, 0, 128, 0, 0,
    0, 0, 0, 129, 0, 0, 0, 0, 130, 0, 131, 0, 0, 0, 0, 0, 132, 0, 0, 0, 0, 133, 0, 0, 0, 0, 134, 0, 0, 0, 0, 0,
    0, 135, 0, 0, 0, 0, 0, 136, 0, 0, 0, 137, 0, 0, 0, 138, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 139, 0, 0, 0, 140, 0, 0, 0, 141, 0, 0, 0, 142, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 143, 0, 0, 0,
    0, 144, 0, 0, 0, 0, 0, 0, 145, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 146, 0, 0, 0, 0, 0, 0, 147, 0, 0, 148, 0, 0,
    0, 0, 149, 0, 0, 0, 0, 150, 0, 0, 0, 0, 0, 0, 151, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 152, 0, 0, 0, 0, 0, 0,
    153, 0, 0, 154, 0, 0, 0, 0, 155, 0, 0, 0, 0, 156, 0, 0, 0, 0, 0, 0, 157, 0, 0, 158, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 159, 0, 0, 0, 0, 0, 0, 160, 0, 0, 161, 0, 0, 0, 0, 0, 0, 162, 0, 0, 0, 0, 0, 163, 0, 0, 0, 0, 164,
    0, 0, 0, 0, 165, 0, 0, 0, 0, 0, 166, 0, 0, 0, 0, 167, 0, 168, 0, 0, 0, 0, 0, 169, 0, 0, 0, 0, 0, 170, 0, 0,
    0, 0, 0, 0, 0, 171, 0, 0, 0, 0, 0, 0, 0, 0, 0, 172, 0, 0, 173, 0, 174, 0, 175, 0, 0, 0, 176, 0, 0, 177, 0, 178,
    0, 0, 0, 0, 0, 0, 179, 0, 0, 0, 0, 0, 180, 0, 0, 0, 0, 0, 181, 0, 0, 0, 182, 0, 0, 0, 183, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 184, 0, 0, 0, 185, 0, 0, 0, 186, 0, 0, 0, 187, 0, 0,
    0, 188, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 189, 0, 0, 0, 0, 0, 0, 190, 0, 0, 0, 191, 0, 0, 192, 0, 0, 0, 0, 0,
    193, 0, 0, 0, 0, 0, 194, 0, 0, 0, 0, 0, 0, 195, 0, 0, 0, 0, 196, 0, 0, 0, 0, 0, 0, 197, 0, 0, 0, 198, 0, 0,
    199, 0, 0, 200, 0, 0, 201, 0, 0, 0, 0, 0, 0, 0, 0, 0, 202, 0, 0, 0, 0, 0, 0, 203, 0, 0, 0, 0, 0, 0, 0, 0,
    204, 0, 0, 0, 0, 0, 0, 205, 0, 0, 206, 0, 0, 0, 207, 0, 0, 0, 208, 0, 0, 0, 209, 0, 0, 0, 210, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 211, 0, 0, 0, 0, 0, 0, 0, 212, 0, 0, 0, 0, 0, 213, 0, 0, 0, 0, 214, 0, 215, 0, 0, 0, 0, 0, 216,
    0, 0, 0, 0, 217, 0, 0, 0, 0, 218, 0, 0, 0, 0, 0, 0, 219, 0, 0, 0, 0, 0, 220, 0, 0, 0, 221, 0, 0, 0, 222, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 223, 0, 0, 0, 224, 0, 0, 0, 225, 0, 0, 0, 226,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 227, 0, 0, 0, 0, 228, 0, 0, 0, 0, 0, 0, 229, 0, 0, 230, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 231, 0, 0, 0, 0, 0, 0, 232, 0, 0, 233, 0, 0, 0, 0, 0, 0, 234, 0, 0, 0, 0, 0, 235, 0, 0, 0,
    0, 236, 0, 237, 0, 0, 0, 0, 0, 238, 0, 0, 0, 0, 0, 239, 0, 0, 0, 0, 0, 0, 240, 0, 0, 0, 0, 0, 0, 0, 0, 241,
    0, 242, 0, 0, 0, 0, 0, 0, 243, 0, 0, 0, 0, 0, 244, 0, 0, 0, 0, 0, 245, 0, 0, 0, 246, 0, 0, 0, 247, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 248, 0, 0, 0, 249, 0, 0, 0, 250, 0, 0, 0, 251,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 252, 0, 0, 0, 0, 0, 0, 253, 0, 0, 0, 254, 0, 0, 255, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 256, 0, 0, 0, 0, 0, 0, 257, 0, 0, 0, 0, 0, 258, 0, 0, 0, 0, 259, 0, 0, 0, 0, 260, 0, 0, 0, 0,
    0, 261, 0, 0, 0, 0, 262, 0, 263, 0, 0, 0, 0, 0, 264, 0, 0, 0, 0, 0, 265, 0, 0, 0, 0, 0, 266, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 267, 0, 0, 268, 0, 269, 0, 270, 0, 0, 0, 271, 0, 0, 0, 0, 0, 272, 0, 0, 0, 0, 0, 273, 0, 0, 0, 274,
    0, 0, 0, 275, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 276, 0, 0, 0, 277, 0, 0, 0,
    278, 0, 0, 0, 279, 0, 0, 0, 0, 0, 0, 0, 0, 280, 0, 0, 0, 0, 0, 0, 281, 0, 0, 0, 282, 0, 0, 0, 283, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 284, 0, 0, 0, 0, 0, 285, 0, 0, 0, 0, 0, 286, 0, 287, 0, 0, 288, 0, 0, 289, 0, 290, 0, 0, 0,
    0, 0, 291, 0, 0, 0, 0, 0, 292, 0, 0, 0, 0, 293, 0, 294, 0, 0, 0, 0, 0, 295, 0, 0, 0, 0, 296, 0, 0, 0, 0, 297,
    0, 0, 0, 0, 0, 0, 298, 0, 0, 0, 0, 0, 299, 0, 0, 0, 300, 0, 0, 0, 301, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 302, 0, 0, 0, 303, 0, 0, 0, 304, 0, 0, 0, 305, 0, 0, 0, 0, 0, 306, 0, 0, 0, 0,
    307, 0, 0, 0, 0, 308, 0, 0, 0, 0, 0, 309, 0, 0, 0, 0, 310, 0, 311, 0, 0, 0, 0, 0, 312, 0, 0, 0, 0, 0, 313, 0,
    0, 0, 0, 0, 0, 0, 314, 0, 0, 0, 0, 0, 0, 0, 0, 315, 0, 316, 0, 0, 317, 0, 318, 0, 0, 0, 319, 0, 0, 320, 0, 321,
    0, 322, 0, 0, 0, 323, 0, 0, 0, 0, 0, 324, 0, 0, 0, 0, 0, 325, 0, 0, 0, 326, 0, 0, 0, 327, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 328, 0, 0, 0, 329, 0, 0, 0, 330, 0, 0, 0, 331, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 332, 0, 0, 0, 0, 0, 0, 333, 0, 0, 0, 334, 0, 0, 335, 0, 0, 0, 0, 336, 0, 0, 337, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 338, 0, 0, 0, 0, 0, 0, 339, 0, 0, 0, 0, 0, 340, 0, 0, 0, 0, 341, 0, 342, 0, 0, 0, 0,
    0, 343, 0, 0, 0, 0, 0, 344, 0, 0, 0, 0, 0, 345, 0, 0, 0, 0, 0, 0, 0, 0, 0, 346, 0, 0, 0, 0, 0, 347, 0, 0,
    0, 0, 0, 348, 0, 0, 0, 349, 0, 0, 0, 350, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    351, 0, 0, 0, 352, 0, 0, 0, 353, 0, 0, 0, 354, 0, 0, 0, 0, 0, 0, 0, 0, 355, 0, 0, 0, 0, 0, 0, 356, 0, 0, 0,
    357, 0, 0, 0, 358, 0, 0, 0, 359, 0, 0, 0, 360, 0, 0, 0, 361, 0, 0, 0, 362, 0, 0, 0, 0, 0, 0, 0, 0, 0, 363, 0,
    0, 0, 0, 0, 364, 0, 0, 0, 0, 0, 365, 0, 0, 0, 0, 366, 0, 367, 0, 0, 0, 0, 0, 368, 0, 0, 0, 0, 369, 0, 0, 0,
    0, 370, 0, 0, 0, 0, 0, 0, 371, 0, 0, 0, 0, 0, 372, 0, 0, 0, 373, 0, 0, 0, 374, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 375, 0, 0, 0, 376, 0, 0, 0, 377, 0, 0, 0, 378, 0, 0, 0, 0, 0, 379, 0, 0,
    0, 0, 380, 0, 0, 0, 0, 381, 0, 0, 0, 0, 0, 382, 0, 0, 0, 0, 383, 0, 384, 0, 0, 0, 0, 0, 385, 0, 0, 0, 0, 0,
    386, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 387, 0, 0, 0, 0, 0, 0, 0, 0, 0, 388, 0, 0, 389,
    0, 390, 0, 391, 0, 0, 0, 392, 0, 0, 0, 393, 0, 0, 394, 0, 395, 0, 396, 0, 0, 0, 397, 0, 0, 0, 398, 0, 0, 399, 0, 400,
    0, 401, 0, 0, 0, 402, 0, 0, 0, 403, 0, 0, 404, 0, 405, 0, 406, 0, 0, 0, 407, 0, 0, 0, 408, 0, 0, 409, 0, 410, 0, 411,
    0, 0, 0, 412, 0, 0, 0, 413, 0, 0, 414, 0, 415, 0, 416, 0, 0, 0, 417, 0, 0, 0, 418, 0, 0, 419, 0, 420, 0, 421, 0, 0,
    0, 422, 0, 0, 0, 423, 0, 0, 424, 0, 425, 0, 426, 0, 0, 0, 427, 0, 0, 0, 428, 0, 0, 429, 0, 430, 0, 431, 0, 0, 0, 432,
    0, 0, 0, 433, 0, 0, 434, 0, 435, 0, 436, 0, 0, 0, 437, 0, 0, 0, 438, 0, 0, 439, 0, 440, 0, 441, 0, 0, 0, 442, 0, 0,
    0, 443, 0, 0, 444, 0, 445, 0, 446, 0, 0, 0, 447, 0, 0, 0, 0, 0, 0, 448, 0, 0, 0, 0, 0, 449, 0, 0, 0, 0, 0, 450,
    0, 0, 0, 451, 0, 0, 0, 452, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 453, 0, 0, 0,
    454, 0, 0, 0, 455, 0, 0, 0, 456, 0, 0, 0, 0, 0, 0, 0, 0, 457, 0, 0, 0, 0, 0, 0, 458, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 459, 0, 0, 0, 0, 0, 460, 0, 0, 0, 0, 0, 461, 0, 462, 0, 0, 463, 0, 0, 464, 0, 465, 0, 0, 0, 0, 0, 466, 0,
    0, 0, 0, 0, 467, 0, 0, 0, 0, 468, 0, 469, 0, 0, 0, 0, 0, 470, 0, 0, 0, 0, 471, 0, 0, 0, 0, 472, 0, 0, 0, 0,
    0, 0, 473, 0, 0, 0, 0, 0, 474, 0, 0, 0, 475, 0, 0, 0, 476, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 477, 0, 0, 0, 478, 0, 0, 0, 479, 0, 0, 0, 480, 0, 0, 0, 0, 0, 481, 0, 0, 0, 0, 482, 0, 0, 0,
    0, 483, 0, 0, 0, 0, 0, 484, 0, 485, 0, 0, 486, 0, 0, 487, 0, 488, 0, 0, 0, 0, 0, 489, 0, 0, 0, 0, 0, 490, 0, 0,
    0, 0, 491, 0, 492, 0, 0, 0, 0, 0, 493, 0, 0, 0, 0, 0, 494, 0, 0, 0, 0, 0, 0, 495, 0, 0, 0, 0, 0, 0, 0, 0,
    496, 0, 497, 0, 0, 0, 0, 0, 0, 498, 0, 0, 0, 0, 0, 499, 0, 0, 0, 0, 0, 500, 0, 0, 0, 501, 0, 0, 0, 502, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 503, 0, 0, 0, 504, 0, 0, 0, 505, 0, 0, 0,
    506, 0, 0, 0, 0, 0, 0, 0, 0, 0, 507, 0, 0, 0, 0, 0, 0, 508, 0, 0, 0, 509, 0, 0, 510, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 511, 0, 0, 0, 0, 0, 0, 512, 0, 0, 0, 0, 0, 513, 0, 0, 0, 0, 514, 0, 0, 0, 0, 515, 0, 0, 0,
    0, 0, 516, 0, 517, 0, 0, 518, 0, 0, 519, 0, 520, 0, 0, 0, 0, 0, 521, 0, 0, 0, 0, 0, 522, 0, 0, 0, 0, 523, 0, 524,
    0, 0, 0, 0, 0, 525, 0, 0, 0, 0, 0, 526, 0, 527, 0, 0, 0, 0, 0, 0, 528, 0, 0, 0, 0, 0, 529, 0, 0, 0, 0, 0,
    530, 0, 0, 0, 531, 0, 0, 0, 532, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 533,
    0, 0, 0, 534, 0, 0, 0, 535, 0, 0, 0, 536, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 537, 0, 0, 0, 0, 538, 0, 0, 0, 0,
    0, 0, 539, 0, 0, 0, 540, 0, 0, 0, 0, 0, 541, 0, 0, 0, 0, 542, 0, 0, 0, 0, 543, 0, 0, 0, 0, 544, 0, 0, 545, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 546, 0, 0, 0, 0, 0, 0, 547, 0, 0, 0, 0, 0, 548, 0, 0, 0, 0, 549, 0, 0,
    0, 0, 550, 0, 0, 0, 0, 0, 551, 0, 0, 0, 0, 552, 0, 553, 0, 0, 0, 0, 0, 554, 0, 0, 0, 0, 0, 555, 0, 0, 0, 0,
    0, 556, 0, 0, 0, 0, 0, 0, 0, 0, 557, 0, 0, 0, 0, 0, 558, 0, 0, 0, 0, 0, 559, 0, 0, 0, 560, 0, 0, 0, 561, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 562, 0, 0, 0, 563, 0, 0, 0, 564, 0, 0, 0, 565,
    0, 0, 0, 0, 0, 0, 0, 0, 566, 0, 0, 0, 0, 0, 0, 567, 0, 0, 0, 0, 0, 0, 0, 0, 0, 568, 0, 0, 0, 0, 0, 569,
    0, 0, 0, 0, 0, 570, 0, 0, 0, 0, 571, 0, 0, 0, 0, 572, 0, 0, 0, 0, 0, 573, 0, 0, 0, 0, 574, 0, 575, 0, 0, 0,
    0, 0, 576, 0, 0, 0, 0, 577, 0, 0, 0, 0, 578, 0, 0, 0, 0, 0, 0, 579, 0, 0, 0, 0, 0, 580, 0, 0, 0, 581, 0, 0,
    0, 582, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 583, 0, 0, 0, 584, 0, 0, 0, 585, 0,
    0, 0, 586, 0, 0, 0, 0, 0, 587, 0, 0, 0, 0, 588, 0, 0, 0, 0, 589, 0, 0, 0, 0, 0, 590, 0, 0, 0, 0, 591, 0, 592,
    0, 0, 0, 0, 0, 593, 0, 0, 0, 0, 0, 594, 0, 0, 0, 0, 0, 0, 0, 595, 0, 0, 0, 0, 0, 0, 0, 0, 596, 0, 0, 597,
    0, 0, 0, 0, 0, 0, 598, 0, 0, 0, 0, 0, 599, 0, 0, 0, 0, 0, 600, 0, 0, 0, 601, 0, 0, 0, 602, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 603, 0, 0, 0, 604, 0, 0, 0, 605, 0, 0, 0, 606, 0, 0,
    0, 607, 0, 0, 0, 0, 0, 0, 0, 0, 608, 0, 0, 0, 0, 0, 0, 609, 0, 0, 0, 0, 0, 0, 0, 0, 0, 610, 0, 0, 0, 0,
    0, 0, 0, 0, 611, 0, 0, 0, 0, 0, 612, 0, 0, 0, 613, 0, 0, 0, 614, 0, 0, 0, 615, 0, 0, 0, 616, 0, 0, 0, 617, 0,
    0, 0, 618, 0, 0, 0, 0, 0, 619, 0, 0, 0, 0, 620, 0, 0, 0, 0, 621, 0, 0, 0, 0, 0, 622, 0, 0, 0, 0, 623, 0, 624,
    0, 0, 0, 0, 0, 625, 0, 0, 0, 0, 0, 626, 0, 0, 0, 0, 0, 627, 0, 0, 0, 0, 0, 0, 0, 0, 0, 628, 0, 0, 0, 0,
    0, 629, 0, 0, 0, 0, 0, 630, 0, 0, 0, 631, 0, 0, 0, 632, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 633, 0, 0, 0, 634, 0, 0, 0, 635, 0, 0, 0, 636, 0, 0, 0, 0, 0, 0, 0, 0, 0, 637, 0, 0, 0,
    0, 0, 0, 638, 0, 0, 0, 639, 0, 0, 0, 0, 640, 0, 0, 0, 0, 641, 0, 0, 642, 0, 0, 643, 0, 0, 0, 644, 0, 0, 0, 0,
    0, 645, 0, 0, 0, 646, 0, 0, 0, 647, 0, 0, 0, 648, 0, 0, 0, 649, 0, 0, 0, 650, 0, 0, 0, 651, 0, 0, 0, 652, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 653, 0, 0, 0, 0, 0, 0, 654, 0, 0, 0, 0, 0, 655, 0, 0, 0, 0, 656, 0, 0, 0, 0, 657, 0,
    0, 0, 0, 0, 658, 0, 0, 0, 0, 659, 0, 660, 0, 0, 0, 0, 0, 661, 0, 0, 0, 0, 0, 662, 0, 0, 0, 0, 0, 663, 0, 0,
    0, 0, 0, 0, 0, 0, 664, 0, 665, 0, 0, 0, 0, 0, 666, 0, 0, 0, 0, 0, 667, 0, 0, 0, 668, 0, 0, 0, 669, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 670, 0, 0, 0, 671, 0, 0, 0, 672, 0, 0, 0, 673,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 674, 0, 0, 0, 0, 0, 0, 675, 0, 0, 0, 676, 0, 0, 677, 0, 0, 0, 0, 0, 0, 678, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 679, 0, 0, 0, 0, 0, 0, 680, 0, 0, 0, 0, 0, 681, 0, 0, 0, 0, 682, 0, 683, 0, 0,
    0, 0, 0, 684, 0, 0, 0, 0, 0, 685, 0, 0, 0, 0, 0, 0, 0, 0, 686, 0, 0, 0, 0, 0, 0, 0, 0, 687, 0, 688, 0, 0,
    0, 0, 0, 689, 0, 0, 690, 0, 0, 0, 0, 0, 0, 691, 0, 0, 0, 0, 0, 692, 0, 0, 0, 0, 0, 693, 0, 0, 0, 694, 0, 0,
    0, 695, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 696, 0, 0, 0, 697, 0, 0, 0,
    698, 0, 0, 0, 699, 0, 0, 0, 0, 0, 0, 0, 0, 0, 700, 0, 0, 0, 0, 0, 0, 701, 0, 0, 0, 702, 0, 0, 703, 0, 0, 0,
    0, 704, 0, 0, 705, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 706, 0, 0, 0, 0, 0, 0, 707, 0, 0, 0, 0, 0, 708, 0, 709, 0,
    0, 710, 0, 0, 711, 0, 712, 0, 0, 0, 0, 0, 713, 0, 0, 0, 0, 0, 714, 0, 0, 0, 0, 715, 0, 716, 0, 0, 0, 0, 0, 717,
    0, 0, 0, 0, 0, 718, 0, 0, 0, 719, 0, 0, 0, 720, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 721, 0, 0, 0, 722, 0, 0, 0, 723, 0, 0, 0, 724, 0, 0, 0, 0, 0, 725, 0, 0, 0, 726, 0, 0, 0, 727, 0, 0,
    0, 728, 0, 0, 0, 729, 0, 0, 0, 730, 0, 0, 0, 0, 0, 731, 0, 0, 0, 0, 732, 0, 0, 0, 0, 733, 0, 0, 0, 0, 0, 734,
};
void recomp_unit_0058_entry(Runtime &rt, AllegrexContext &ctx, std::uint16_t direct_entry_id, GuestMemory::AotFastView &aot_mem) {
    std::uint32_t jump_target = 0u;
    std::uint32_t local_transfers = 0u;
    std::uint32_t local_pc = ctx.pc;
    std::uint32_t entry_id = direct_entry_id;
LOCAL_DISPATCH:
    {
    if (entry_id == 0u) {
        const std::uint32_t entry_delta = local_pc - 0x088EC000u;
        entry_id = (entry_delta < 16384u && (entry_delta & 3u) == 0u) ? kEntryIds_recomp_unit_0058[entry_delta >> 2u] : 0u;
    }
    switch (entry_id) {
    case 1u: goto L_088EC000;
    case 2u: goto L_088EC00C;
    case 3u: goto L_088EC018;
    case 4u: goto L_088EC020;
    case 5u: goto L_088EC038;
    case 6u: goto L_088EC050;
    case 7u: goto L_088EC064;
    case 8u: goto L_088EC06C;
    case 9u: goto L_088EC084;
    case 10u: goto L_088EC098;
    case 11u: goto L_088EC0AC;
    case 12u: goto L_088EC0C8;
    case 13u: goto L_088EC0E0;
    case 14u: goto L_088EC0F0;
    case 15u: goto L_088EC100;
    case 16u: goto L_088EC154;
    case 17u: goto L_088EC164;
    case 18u: goto L_088EC174;
    case 19u: goto L_088EC184;
    case 20u: goto L_088EC19C;
    case 21u: goto L_088EC1B0;
    case 22u: goto L_088EC1C4;
    case 23u: goto L_088EC1DC;
    case 24u: goto L_088EC1F0;
    case 25u: goto L_088EC1F8;
    case 26u: goto L_088EC210;
    case 27u: goto L_088EC228;
    case 28u: goto L_088EC24C;
    case 29u: goto L_088EC270;
    case 30u: goto L_088EC278;
    case 31u: goto L_088EC284;
    case 32u: goto L_088EC28C;
    case 33u: goto L_088EC298;
    case 34u: goto L_088EC2A0;
    case 35u: goto L_088EC2B0;
    case 36u: goto L_088EC2BC;
    case 37u: goto L_088EC2C4;
    case 38u: goto L_088EC2CC;
    case 39u: goto L_088EC2DC;
    case 40u: goto L_088EC2F4;
    case 41u: goto L_088EC30C;
    case 42u: goto L_088EC31C;
    case 43u: goto L_088EC32C;
    case 44u: goto L_088EC388;
    case 45u: goto L_088EC398;
    case 46u: goto L_088EC3A8;
    case 47u: goto L_088EC3B8;
    case 48u: goto L_088EC3E0;
    case 49u: goto L_088EC3FC;
    case 50u: goto L_088EC40C;
    case 51u: goto L_088EC420;
    case 52u: goto L_088EC430;
    case 53u: goto L_088EC43C;
    case 54u: goto L_088EC458;
    case 55u: goto L_088EC464;
    case 56u: goto L_088EC480;
    case 57u: goto L_088EC48C;
    case 58u: goto L_088EC4C0;
    case 59u: goto L_088EC4DC;
    case 60u: goto L_088EC4F4;
    case 61u: goto L_088EC508;
    case 62u: goto L_088EC510;
    case 63u: goto L_088EC528;
    case 64u: goto L_088EC540;
    case 65u: goto L_088EC55C;
    case 66u: goto L_088EC580;
    case 67u: goto L_088EC588;
    case 68u: goto L_088EC5A4;
    case 69u: goto L_088EC5BC;
    case 70u: goto L_088EC5D4;
    case 71u: goto L_088EC5E4;
    case 72u: goto L_088EC5F4;
    case 73u: goto L_088EC650;
    case 74u: goto L_088EC660;
    case 75u: goto L_088EC670;
    case 76u: goto L_088EC680;
    case 77u: goto L_088EC6A8;
    case 78u: goto L_088EC6C4;
    case 79u: goto L_088EC6D4;
    case 80u: goto L_088EC6E0;
    case 81u: goto L_088EC714;
    case 82u: goto L_088EC730;
    case 83u: goto L_088EC748;
    case 84u: goto L_088EC75C;
    case 85u: goto L_088EC770;
    case 86u: goto L_088EC788;
    case 87u: goto L_088EC790;
    case 88u: goto L_088EC79C;
    case 89u: goto L_088EC7A8;
    case 90u: goto L_088EC7B0;
    case 91u: goto L_088EC7C8;
    case 92u: goto L_088EC7E0;
    case 93u: goto L_088EC7F4;
    case 94u: goto L_088EC7FC;
    case 95u: goto L_088EC814;
    case 96u: goto L_088EC82C;
    case 97u: goto L_088EC848;
    case 98u: goto L_088EC86C;
    case 99u: goto L_088EC874;
    case 100u: goto L_088EC880;
    case 101u: goto L_088EC888;
    case 102u: goto L_088EC8A0;
    case 103u: goto L_088EC8B8;
    case 104u: goto L_088EC8C8;
    case 105u: goto L_088EC8D8;
    case 106u: goto L_088EC934;
    case 107u: goto L_088EC944;
    case 108u: goto L_088EC954;
    case 109u: goto L_088EC964;
    case 110u: goto L_088EC98C;
    case 111u: goto L_088EC9A8;
    case 112u: goto L_088EC9B8;
    case 113u: goto L_088EC9C4;
    case 114u: goto L_088EC9E0;
    case 115u: goto L_088EC9EC;
    case 116u: goto L_088ECA08;
    case 117u: goto L_088ECA18;
    case 118u: goto L_088ECA40;
    case 119u: goto L_088ECA5C;
    case 120u: goto L_088ECA74;
    case 121u: goto L_088ECA88;
    case 122u: goto L_088ECA9C;
    case 123u: goto L_088ECAB4;
    case 124u: goto L_088ECABC;
    case 125u: goto L_088ECAC8;
    case 126u: goto L_088ECAD4;
    case 127u: goto L_088ECADC;
    case 128u: goto L_088ECAF4;
    case 129u: goto L_088ECB0C;
    case 130u: goto L_088ECB20;
    case 131u: goto L_088ECB28;
    case 132u: goto L_088ECB40;
    case 133u: goto L_088ECB54;
    case 134u: goto L_088ECB68;
    case 135u: goto L_088ECB84;
    case 136u: goto L_088ECB9C;
    case 137u: goto L_088ECBAC;
    case 138u: goto L_088ECBBC;
    case 139u: goto L_088ECC10;
    case 140u: goto L_088ECC20;
    case 141u: goto L_088ECC30;
    case 142u: goto L_088ECC40;
    case 143u: goto L_088ECC70;
    case 144u: goto L_088ECC84;
    case 145u: goto L_088ECCA0;
    case 146u: goto L_088ECCCC;
    case 147u: goto L_088ECCE8;
    case 148u: goto L_088ECCF4;
    case 149u: goto L_088ECD08;
    case 150u: goto L_088ECD1C;
    case 151u: goto L_088ECD38;
    case 152u: goto L_088ECD64;
    case 153u: goto L_088ECD80;
    case 154u: goto L_088ECD8C;
    case 155u: goto L_088ECDA0;
    case 156u: goto L_088ECDB4;
    case 157u: goto L_088ECDD0;
    case 158u: goto L_088ECDDC;
    case 159u: goto L_088ECE0C;
    case 160u: goto L_088ECE28;
    case 161u: goto L_088ECE34;
    case 162u: goto L_088ECE50;
    case 163u: goto L_088ECE68;
    case 164u: goto L_088ECE7C;
    case 165u: goto L_088ECE90;
    case 166u: goto L_088ECEA8;
    case 167u: goto L_088ECEBC;
    case 168u: goto L_088ECEC4;
    case 169u: goto L_088ECEDC;
    case 170u: goto L_088ECEF4;
    case 171u: goto L_088ECF14;
    case 172u: goto L_088ECF3C;
    case 173u: goto L_088ECF48;
    case 174u: goto L_088ECF50;
    case 175u: goto L_088ECF58;
    case 176u: goto L_088ECF68;
    case 177u: goto L_088ECF74;
    case 178u: goto L_088ECF7C;
    case 179u: goto L_088ECF98;
    case 180u: goto L_088ECFB0;
    case 181u: goto L_088ECFC8;
    case 182u: goto L_088ECFD8;
    case 183u: goto L_088ECFE8;
    case 184u: goto L_088ED044;
    case 185u: goto L_088ED054;
    case 186u: goto L_088ED064;
    case 187u: goto L_088ED074;
    case 188u: goto L_088ED084;
    case 189u: goto L_088ED0B0;
    case 190u: goto L_088ED0CC;
    case 191u: goto L_088ED0DC;
    case 192u: goto L_088ED0E8;
    case 193u: goto L_088ED100;
    case 194u: goto L_088ED118;
    case 195u: goto L_088ED134;
    case 196u: goto L_088ED148;
    case 197u: goto L_088ED164;
    case 198u: goto L_088ED174;
    case 199u: goto L_088ED180;
    case 200u: goto L_088ED18C;
    case 201u: goto L_088ED198;
    case 202u: goto L_088ED1C0;
    case 203u: goto L_088ED1DC;
    case 204u: goto L_088ED200;
    case 205u: goto L_088ED21C;
    case 206u: goto L_088ED228;
    case 207u: goto L_088ED238;
    case 208u: goto L_088ED248;
    case 209u: goto L_088ED258;
    case 210u: goto L_088ED268;
    case 211u: goto L_088ED290;
    case 212u: goto L_088ED2B0;
    case 213u: goto L_088ED2C8;
    case 214u: goto L_088ED2DC;
    case 215u: goto L_088ED2E4;
    case 216u: goto L_088ED2FC;
    case 217u: goto L_088ED310;
    case 218u: goto L_088ED324;
    case 219u: goto L_088ED340;
    case 220u: goto L_088ED358;
    case 221u: goto L_088ED368;
    case 222u: goto L_088ED378;
    case 223u: goto L_088ED3CC;
    case 224u: goto L_088ED3DC;
    case 225u: goto L_088ED3EC;
    case 226u: goto L_088ED3FC;
    case 227u: goto L_088ED42C;
    case 228u: goto L_088ED440;
    case 229u: goto L_088ED45C;
    case 230u: goto L_088ED468;
    case 231u: goto L_088ED494;
    case 232u: goto L_088ED4B0;
    case 233u: goto L_088ED4BC;
    case 234u: goto L_088ED4D8;
    case 235u: goto L_088ED4F0;
    case 236u: goto L_088ED504;
    case 237u: goto L_088ED50C;
    case 238u: goto L_088ED524;
    case 239u: goto L_088ED53C;
    case 240u: goto L_088ED558;
    case 241u: goto L_088ED57C;
    case 242u: goto L_088ED584;
    case 243u: goto L_088ED5A0;
    case 244u: goto L_088ED5B8;
    case 245u: goto L_088ED5D0;
    case 246u: goto L_088ED5E0;
    case 247u: goto L_088ED5F0;
    case 248u: goto L_088ED64C;
    case 249u: goto L_088ED65C;
    case 250u: goto L_088ED66C;
    case 251u: goto L_088ED67C;
    case 252u: goto L_088ED6A4;
    case 253u: goto L_088ED6C0;
    case 254u: goto L_088ED6D0;
    case 255u: goto L_088ED6DC;
    case 256u: goto L_088ED710;
    case 257u: goto L_088ED72C;
    case 258u: goto L_088ED744;
    case 259u: goto L_088ED758;
    case 260u: goto L_088ED76C;
    case 261u: goto L_088ED784;
    case 262u: goto L_088ED798;
    case 263u: goto L_088ED7A0;
    case 264u: goto L_088ED7B8;
    case 265u: goto L_088ED7D0;
    case 266u: goto L_088ED7E8;
    case 267u: goto L_088ED810;
    case 268u: goto L_088ED81C;
    case 269u: goto L_088ED824;
    case 270u: goto L_088ED82C;
    case 271u: goto L_088ED83C;
    case 272u: goto L_088ED854;
    case 273u: goto L_088ED86C;
    case 274u: goto L_088ED87C;
    case 275u: goto L_088ED88C;
    case 276u: goto L_088ED8E0;
    case 277u: goto L_088ED8F0;
    case 278u: goto L_088ED900;
    case 279u: goto L_088ED910;
    case 280u: goto L_088ED934;
    case 281u: goto L_088ED950;
    case 282u: goto L_088ED960;
    case 283u: goto L_088ED970;
    case 284u: goto L_088ED998;
    case 285u: goto L_088ED9B0;
    case 286u: goto L_088ED9C8;
    case 287u: goto L_088ED9D0;
    case 288u: goto L_088ED9DC;
    case 289u: goto L_088ED9E8;
    case 290u: goto L_088ED9F0;
    case 291u: goto L_088EDA08;
    case 292u: goto L_088EDA20;
    case 293u: goto L_088EDA34;
    case 294u: goto L_088EDA3C;
    case 295u: goto L_088EDA54;
    case 296u: goto L_088EDA68;
    case 297u: goto L_088EDA7C;
    case 298u: goto L_088EDA98;
    case 299u: goto L_088EDAB0;
    case 300u: goto L_088EDAC0;
    case 301u: goto L_088EDAD0;
    case 302u: goto L_088EDB24;
    case 303u: goto L_088EDB34;
    case 304u: goto L_088EDB44;
    case 305u: goto L_088EDB54;
    case 306u: goto L_088EDB6C;
    case 307u: goto L_088EDB80;
    case 308u: goto L_088EDB94;
    case 309u: goto L_088EDBAC;
    case 310u: goto L_088EDBC0;
    case 311u: goto L_088EDBC8;
    case 312u: goto L_088EDBE0;
    case 313u: goto L_088EDBF8;
    case 314u: goto L_088EDC18;
    case 315u: goto L_088EDC3C;
    case 316u: goto L_088EDC44;
    case 317u: goto L_088EDC50;
    case 318u: goto L_088EDC58;
    case 319u: goto L_088EDC68;
    case 320u: goto L_088EDC74;
    case 321u: goto L_088EDC7C;
    case 322u: goto L_088EDC84;
    case 323u: goto L_088EDC94;
    case 324u: goto L_088EDCAC;
    case 325u: goto L_088EDCC4;
    case 326u: goto L_088EDCD4;
    case 327u: goto L_088EDCE4;
    case 328u: goto L_088EDD40;
    case 329u: goto L_088EDD50;
    case 330u: goto L_088EDD60;
    case 331u: goto L_088EDD70;
    case 332u: goto L_088EDD98;
    case 333u: goto L_088EDDB4;
    case 334u: goto L_088EDDC4;
    case 335u: goto L_088EDDD0;
    case 336u: goto L_088EDDE4;
    case 337u: goto L_088EDDF0;
    case 338u: goto L_088EDE1C;
    case 339u: goto L_088EDE38;
    case 340u: goto L_088EDE50;
    case 341u: goto L_088EDE64;
    case 342u: goto L_088EDE6C;
    case 343u: goto L_088EDE84;
    case 344u: goto L_088EDE9C;
    case 345u: goto L_088EDEB4;
    case 346u: goto L_088EDEDC;
    case 347u: goto L_088EDEF4;
    case 348u: goto L_088EDF0C;
    case 349u: goto L_088EDF1C;
    case 350u: goto L_088EDF2C;
    case 351u: goto L_088EDF80;
    case 352u: goto L_088EDF90;
    case 353u: goto L_088EDFA0;
    case 354u: goto L_088EDFB0;
    case 355u: goto L_088EDFD4;
    case 356u: goto L_088EDFF0;
    case 357u: goto L_088EE000;
    case 358u: goto L_088EE010;
    case 359u: goto L_088EE020;
    case 360u: goto L_088EE030;
    case 361u: goto L_088EE040;
    case 362u: goto L_088EE050;
    case 363u: goto L_088EE078;
    case 364u: goto L_088EE090;
    case 365u: goto L_088EE0A8;
    case 366u: goto L_088EE0BC;
    case 367u: goto L_088EE0C4;
    case 368u: goto L_088EE0DC;
    case 369u: goto L_088EE0F0;
    case 370u: goto L_088EE104;
    case 371u: goto L_088EE120;
    case 372u: goto L_088EE138;
    case 373u: goto L_088EE148;
    case 374u: goto L_088EE158;
    case 375u: goto L_088EE1AC;
    case 376u: goto L_088EE1BC;
    case 377u: goto L_088EE1CC;
    case 378u: goto L_088EE1DC;
    case 379u: goto L_088EE1F4;
    case 380u: goto L_088EE208;
    case 381u: goto L_088EE21C;
    case 382u: goto L_088EE234;
    case 383u: goto L_088EE248;
    case 384u: goto L_088EE250;
    case 385u: goto L_088EE268;
    case 386u: goto L_088EE280;
    case 387u: goto L_088EE2C8;
    case 388u: goto L_088EE2F0;
    case 389u: goto L_088EE2FC;
    case 390u: goto L_088EE304;
    case 391u: goto L_088EE30C;
    case 392u: goto L_088EE31C;
    case 393u: goto L_088EE32C;
    case 394u: goto L_088EE338;
    case 395u: goto L_088EE340;
    case 396u: goto L_088EE348;
    case 397u: goto L_088EE358;
    case 398u: goto L_088EE368;
    case 399u: goto L_088EE374;
    case 400u: goto L_088EE37C;
    case 401u: goto L_088EE384;
    case 402u: goto L_088EE394;
    case 403u: goto L_088EE3A4;
    case 404u: goto L_088EE3B0;
    case 405u: goto L_088EE3B8;
    case 406u: goto L_088EE3C0;
    case 407u: goto L_088EE3D0;
    case 408u: goto L_088EE3E0;
    case 409u: goto L_088EE3EC;
    case 410u: goto L_088EE3F4;
    case 411u: goto L_088EE3FC;
    case 412u: goto L_088EE40C;
    case 413u: goto L_088EE41C;
    case 414u: goto L_088EE428;
    case 415u: goto L_088EE430;
    case 416u: goto L_088EE438;
    case 417u: goto L_088EE448;
    case 418u: goto L_088EE458;
    case 419u: goto L_088EE464;
    case 420u: goto L_088EE46C;
    case 421u: goto L_088EE474;
    case 422u: goto L_088EE484;
    case 423u: goto L_088EE494;
    case 424u: goto L_088EE4A0;
    case 425u: goto L_088EE4A8;
    case 426u: goto L_088EE4B0;
    case 427u: goto L_088EE4C0;
    case 428u: goto L_088EE4D0;
    case 429u: goto L_088EE4DC;
    case 430u: goto L_088EE4E4;
    case 431u: goto L_088EE4EC;
    case 432u: goto L_088EE4FC;
    case 433u: goto L_088EE50C;
    case 434u: goto L_088EE518;
    case 435u: goto L_088EE520;
    case 436u: goto L_088EE528;
    case 437u: goto L_088EE538;
    case 438u: goto L_088EE548;
    case 439u: goto L_088EE554;
    case 440u: goto L_088EE55C;
    case 441u: goto L_088EE564;
    case 442u: goto L_088EE574;
    case 443u: goto L_088EE584;
    case 444u: goto L_088EE590;
    case 445u: goto L_088EE598;
    case 446u: goto L_088EE5A0;
    case 447u: goto L_088EE5B0;
    case 448u: goto L_088EE5CC;
    case 449u: goto L_088EE5E4;
    case 450u: goto L_088EE5FC;
    case 451u: goto L_088EE60C;
    case 452u: goto L_088EE61C;
    case 453u: goto L_088EE670;
    case 454u: goto L_088EE680;
    case 455u: goto L_088EE690;
    case 456u: goto L_088EE6A0;
    case 457u: goto L_088EE6C4;
    case 458u: goto L_088EE6E0;
    case 459u: goto L_088EE708;
    case 460u: goto L_088EE720;
    case 461u: goto L_088EE738;
    case 462u: goto L_088EE740;
    case 463u: goto L_088EE74C;
    case 464u: goto L_088EE758;
    case 465u: goto L_088EE760;
    case 466u: goto L_088EE778;
    case 467u: goto L_088EE790;
    case 468u: goto L_088EE7A4;
    case 469u: goto L_088EE7AC;
    case 470u: goto L_088EE7C4;
    case 471u: goto L_088EE7D8;
    case 472u: goto L_088EE7EC;
    case 473u: goto L_088EE808;
    case 474u: goto L_088EE820;
    case 475u: goto L_088EE830;
    case 476u: goto L_088EE840;
    case 477u: goto L_088EE894;
    case 478u: goto L_088EE8A4;
    case 479u: goto L_088EE8B4;
    case 480u: goto L_088EE8C4;
    case 481u: goto L_088EE8DC;
    case 482u: goto L_088EE8F0;
    case 483u: goto L_088EE904;
    case 484u: goto L_088EE91C;
    case 485u: goto L_088EE924;
    case 486u: goto L_088EE930;
    case 487u: goto L_088EE93C;
    case 488u: goto L_088EE944;
    case 489u: goto L_088EE95C;
    case 490u: goto L_088EE974;
    case 491u: goto L_088EE988;
    case 492u: goto L_088EE990;
    case 493u: goto L_088EE9A8;
    case 494u: goto L_088EE9C0;
    case 495u: goto L_088EE9DC;
    case 496u: goto L_088EEA00;
    case 497u: goto L_088EEA08;
    case 498u: goto L_088EEA24;
    case 499u: goto L_088EEA3C;
    case 500u: goto L_088EEA54;
    case 501u: goto L_088EEA64;
    case 502u: goto L_088EEA74;
    case 503u: goto L_088EEAD0;
    case 504u: goto L_088EEAE0;
    case 505u: goto L_088EEAF0;
    case 506u: goto L_088EEB00;
    case 507u: goto L_088EEB28;
    case 508u: goto L_088EEB44;
    case 509u: goto L_088EEB54;
    case 510u: goto L_088EEB60;
    case 511u: goto L_088EEB94;
    case 512u: goto L_088EEBB0;
    case 513u: goto L_088EEBC8;
    case 514u: goto L_088EEBDC;
    case 515u: goto L_088EEBF0;
    case 516u: goto L_088EEC08;
    case 517u: goto L_088EEC10;
    case 518u: goto L_088EEC1C;
    case 519u: goto L_088EEC28;
    case 520u: goto L_088EEC30;
    case 521u: goto L_088EEC48;
    case 522u: goto L_088EEC60;
    case 523u: goto L_088EEC74;
    case 524u: goto L_088EEC7C;
    case 525u: goto L_088EEC94;
    case 526u: goto L_088EECAC;
    case 527u: goto L_088EECB4;
    case 528u: goto L_088EECD0;
    case 529u: goto L_088EECE8;
    case 530u: goto L_088EED00;
    case 531u: goto L_088EED10;
    case 532u: goto L_088EED20;
    case 533u: goto L_088EED7C;
    case 534u: goto L_088EED8C;
    case 535u: goto L_088EED9C;
    case 536u: goto L_088EEDAC;
    case 537u: goto L_088EEDD8;
    case 538u: goto L_088EEDEC;
    case 539u: goto L_088EEE08;
    case 540u: goto L_088EEE18;
    case 541u: goto L_088EEE30;
    case 542u: goto L_088EEE44;
    case 543u: goto L_088EEE58;
    case 544u: goto L_088EEE6C;
    case 545u: goto L_088EEE78;
    case 546u: goto L_088EEEAC;
    case 547u: goto L_088EEEC8;
    case 548u: goto L_088EEEE0;
    case 549u: goto L_088EEEF4;
    case 550u: goto L_088EEF08;
    case 551u: goto L_088EEF20;
    case 552u: goto L_088EEF34;
    case 553u: goto L_088EEF3C;
    case 554u: goto L_088EEF54;
    case 555u: goto L_088EEF6C;
    case 556u: goto L_088EEF84;
    case 557u: goto L_088EEFA8;
    case 558u: goto L_088EEFC0;
    case 559u: goto L_088EEFD8;
    case 560u: goto L_088EEFE8;
    case 561u: goto L_088EEFF8;
    case 562u: goto L_088EF04C;
    case 563u: goto L_088EF05C;
    case 564u: goto L_088EF06C;
    case 565u: goto L_088EF07C;
    case 566u: goto L_088EF0A0;
    case 567u: goto L_088EF0BC;
    case 568u: goto L_088EF0E4;
    case 569u: goto L_088EF0FC;
    case 570u: goto L_088EF114;
    case 571u: goto L_088EF128;
    case 572u: goto L_088EF13C;
    case 573u: goto L_088EF154;
    case 574u: goto L_088EF168;
    case 575u: goto L_088EF170;
    case 576u: goto L_088EF188;
    case 577u: goto L_088EF19C;
    case 578u: goto L_088EF1B0;
    case 579u: goto L_088EF1CC;
    case 580u: goto L_088EF1E4;
    case 581u: goto L_088EF1F4;
    case 582u: goto L_088EF204;
    case 583u: goto L_088EF258;
    case 584u: goto L_088EF268;
    case 585u: goto L_088EF278;
    case 586u: goto L_088EF288;
    case 587u: goto L_088EF2A0;
    case 588u: goto L_088EF2B4;
    case 589u: goto L_088EF2C8;
    case 590u: goto L_088EF2E0;
    case 591u: goto L_088EF2F4;
    case 592u: goto L_088EF2FC;
    case 593u: goto L_088EF314;
    case 594u: goto L_088EF32C;
    case 595u: goto L_088EF34C;
    case 596u: goto L_088EF370;
    case 597u: goto L_088EF37C;
    case 598u: goto L_088EF398;
    case 599u: goto L_088EF3B0;
    case 600u: goto L_088EF3C8;
    case 601u: goto L_088EF3D8;
    case 602u: goto L_088EF3E8;
    case 603u: goto L_088EF444;
    case 604u: goto L_088EF454;
    case 605u: goto L_088EF464;
    case 606u: goto L_088EF474;
    case 607u: goto L_088EF484;
    case 608u: goto L_088EF4A8;
    case 609u: goto L_088EF4C4;
    case 610u: goto L_088EF4EC;
    case 611u: goto L_088EF510;
    case 612u: goto L_088EF528;
    case 613u: goto L_088EF538;
    case 614u: goto L_088EF548;
    case 615u: goto L_088EF558;
    case 616u: goto L_088EF568;
    case 617u: goto L_088EF578;
    case 618u: goto L_088EF588;
    case 619u: goto L_088EF5A0;
    case 620u: goto L_088EF5B4;
    case 621u: goto L_088EF5C8;
    case 622u: goto L_088EF5E0;
    case 623u: goto L_088EF5F4;
    case 624u: goto L_088EF5FC;
    case 625u: goto L_088EF614;
    case 626u: goto L_088EF62C;
    case 627u: goto L_088EF644;
    case 628u: goto L_088EF66C;
    case 629u: goto L_088EF684;
    case 630u: goto L_088EF69C;
    case 631u: goto L_088EF6AC;
    case 632u: goto L_088EF6BC;
    case 633u: goto L_088EF718;
    case 634u: goto L_088EF728;
    case 635u: goto L_088EF738;
    case 636u: goto L_088EF748;
    case 637u: goto L_088EF770;
    case 638u: goto L_088EF78C;
    case 639u: goto L_088EF79C;
    case 640u: goto L_088EF7B0;
    case 641u: goto L_088EF7C4;
    case 642u: goto L_088EF7D0;
    case 643u: goto L_088EF7DC;
    case 644u: goto L_088EF7EC;
    case 645u: goto L_088EF804;
    case 646u: goto L_088EF814;
    case 647u: goto L_088EF824;
    case 648u: goto L_088EF834;
    case 649u: goto L_088EF844;
    case 650u: goto L_088EF854;
    case 651u: goto L_088EF864;
    case 652u: goto L_088EF874;
    case 653u: goto L_088EF89C;
    case 654u: goto L_088EF8B8;
    case 655u: goto L_088EF8D0;
    case 656u: goto L_088EF8E4;
    case 657u: goto L_088EF8F8;
    case 658u: goto L_088EF910;
    case 659u: goto L_088EF924;
    case 660u: goto L_088EF92C;
    case 661u: goto L_088EF944;
    case 662u: goto L_088EF95C;
    case 663u: goto L_088EF974;
    case 664u: goto L_088EF998;
    case 665u: goto L_088EF9A0;
    case 666u: goto L_088EF9B8;
    case 667u: goto L_088EF9D0;
    case 668u: goto L_088EF9E0;
    case 669u: goto L_088EF9F0;
    case 670u: goto L_088EFA4C;
    case 671u: goto L_088EFA5C;
    case 672u: goto L_088EFA6C;
    case 673u: goto L_088EFA7C;
    case 674u: goto L_088EFAA4;
    case 675u: goto L_088EFAC0;
    case 676u: goto L_088EFAD0;
    case 677u: goto L_088EFADC;
    case 678u: goto L_088EFAF8;
    case 679u: goto L_088EFB24;
    case 680u: goto L_088EFB40;
    case 681u: goto L_088EFB58;
    case 682u: goto L_088EFB6C;
    case 683u: goto L_088EFB74;
    case 684u: goto L_088EFB8C;
    case 685u: goto L_088EFBA4;
    case 686u: goto L_088EFBC8;
    case 687u: goto L_088EFBEC;
    case 688u: goto L_088EFBF4;
    case 689u: goto L_088EFC0C;
    case 690u: goto L_088EFC18;
    case 691u: goto L_088EFC34;
    case 692u: goto L_088EFC4C;
    case 693u: goto L_088EFC64;
    case 694u: goto L_088EFC74;
    case 695u: goto L_088EFC84;
    case 696u: goto L_088EFCE0;
    case 697u: goto L_088EFCF0;
    case 698u: goto L_088EFD00;
    case 699u: goto L_088EFD10;
    case 700u: goto L_088EFD38;
    case 701u: goto L_088EFD54;
    case 702u: goto L_088EFD64;
    case 703u: goto L_088EFD70;
    case 704u: goto L_088EFD84;
    case 705u: goto L_088EFD90;
    case 706u: goto L_088EFDBC;
    case 707u: goto L_088EFDD8;
    case 708u: goto L_088EFDF0;
    case 709u: goto L_088EFDF8;
    case 710u: goto L_088EFE04;
    case 711u: goto L_088EFE10;
    case 712u: goto L_088EFE18;
    case 713u: goto L_088EFE30;
    case 714u: goto L_088EFE48;
    case 715u: goto L_088EFE5C;
    case 716u: goto L_088EFE64;
    case 717u: goto L_088EFE7C;
    case 718u: goto L_088EFE94;
    case 719u: goto L_088EFEA4;
    case 720u: goto L_088EFEB4;
    case 721u: goto L_088EFF0C;
    case 722u: goto L_088EFF1C;
    case 723u: goto L_088EFF2C;
    case 724u: goto L_088EFF3C;
    case 725u: goto L_088EFF54;
    case 726u: goto L_088EFF64;
    case 727u: goto L_088EFF74;
    case 728u: goto L_088EFF84;
    case 729u: goto L_088EFF94;
    case 730u: goto L_088EFFA4;
    case 731u: goto L_088EFFBC;
    case 732u: goto L_088EFFD0;
    case 733u: goto L_088EFFE4;
    case 734u: goto L_088EFFFC;
    default:
        if (local_transfers == 0u) rt.unsupported(ctx.pc, 0u, "invalid internal function entry");
        else ctx.pc = local_pc;
        return;
    }
    }
L_088EC000:
    ctx.set_gpr(4, rt.memory().aot_load32(ctx.gpr[2] + static_cast<std::uint32_t>(0)));
    ctx.set_gpr(31, 0x088EC00Cu);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0078_entry, 78u, 199u, 0x0893CC68u>(ctx, &aot_mem) && ctx.pc == 0x088EC00Cu) goto L_088EC00C;
    return;
L_088EC00C:
    ctx.set_gpr(4, ctx.gpr[2] + 0u);
    ctx.set_gpr(31, 0x088EC018u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0052_entry, 52u, 732u, 0x088D6FE8u>(ctx, &aot_mem) && ctx.pc == 0x088EC018u) goto L_088EC018;
    return;
L_088EC018:
    ctx.set_gpr(3, 2245u << 16u);
    rt.memory().aot_store32(ctx.gpr[3] + static_cast<std::uint32_t>(28776), ctx.gpr[2]);
    goto L_088EC020;
L_088EC020:
    ctx.set_gpr(2, 2245u << 16u);
    ctx.set_gpr(2, rt.memory().aot_load32(ctx.gpr[2] + static_cast<std::uint32_t>(28776)));
    ctx.set_gpr(31, rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(12)));
    ctx.set_gpr(29, ctx.gpr[29] + static_cast<std::uint32_t>(16));
    jump_target = ctx.gpr[31];
    // nop
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_088EC038:
    ctx.set_gpr(29, ctx.gpr[29] + static_cast<std::uint32_t>(-16));
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(12), ctx.gpr[31]);
    ctx.set_gpr(2, 2245u << 16u);
    ctx.set_gpr(2, rt.memory().aot_load32(ctx.gpr[2] + static_cast<std::uint32_t>(28776)));
    { const bool branch_taken = ctx.gpr[2] == 0u;
    // nop
      if (branch_taken) {
          goto L_088EC064;
      }
      goto L_088EC050;
    }
L_088EC050:
    ctx.set_gpr(2, rt.memory().aot_load32(ctx.gpr[2] + static_cast<std::uint32_t>(36)));
    ctx.set_gpr(2, ctx.gpr[2] & 4u);
    ctx.set_gpr(2, 0u < ctx.gpr[2] ? 1u : 0u);
    { const bool branch_taken = ctx.gpr[2] != 0u;
    // nop
      if (branch_taken) {
          goto L_088EC06C;
      }
      goto L_088EC064;
    }
L_088EC064:
    ctx.set_gpr(31, 0x088EC06Cu);
    // nop
    goto L_088EC0C8;
L_088EC06C:
    ctx.set_gpr(2, 2245u << 16u);
    ctx.set_gpr(2, rt.memory().aot_load32(ctx.gpr[2] + static_cast<std::uint32_t>(28776)));
    ctx.set_gpr(31, rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(12)));
    ctx.set_gpr(29, ctx.gpr[29] + static_cast<std::uint32_t>(16));
    jump_target = ctx.gpr[31];
    // nop
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_088EC084:
    ctx.set_gpr(29, ctx.gpr[29] + static_cast<std::uint32_t>(-48));
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(12), ctx.gpr[31]);
    ctx.set_gpr(4, ctx.gpr[29] + static_cast<std::uint32_t>(28));
    ctx.set_gpr(31, 0x088EC098u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0042_entry, 42u, 574u, 0x088ADBE0u>(ctx, &aot_mem) && ctx.pc == 0x088EC098u) goto L_088EC098;
    return;
L_088EC098:
    ctx.set_gpr(2, 2232u << 16u);
    ctx.set_gpr(2, ctx.gpr[2] + static_cast<std::uint32_t>(11036));
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(28), ctx.gpr[2]);
    ctx.set_gpr(31, 0x088EC0ACu);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0064_entry, 64u, 444u, 0x08905FF0u>(ctx, &aot_mem) && ctx.pc == 0x088EC0ACu) goto L_088EC0AC;
    return;
L_088EC0AC:
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
L_088EC0C8:
    ctx.set_gpr(29, ctx.gpr[29] + static_cast<std::uint32_t>(-16));
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(12), ctx.gpr[31]);
    ctx.set_gpr(4, 2191u << 16u);
    ctx.set_gpr(4, ctx.gpr[4] + static_cast<std::uint32_t>(-16144));
    ctx.set_gpr(31, 0x088EC0E0u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0080_entry, 80u, 286u, 0x08945508u>(ctx, &aot_mem) && ctx.pc == 0x088EC0E0u) goto L_088EC0E0;
    return;
L_088EC0E0:
    ctx.set_gpr(31, rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(12)));
    ctx.set_gpr(29, ctx.gpr[29] + static_cast<std::uint32_t>(16));
    jump_target = ctx.gpr[31];
    // nop
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_088EC0F0:
    ctx.set_gpr(29, ctx.gpr[29] + static_cast<std::uint32_t>(-32));
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(28), ctx.gpr[31]);
    ctx.set_gpr(31, 0x088EC100u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0052_entry, 52u, 154u, 0x088D49C4u>(ctx, &aot_mem) && ctx.pc == 0x088EC100u) goto L_088EC100;
    return;
L_088EC100:
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(0), 0u);
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(4), 0u);
    ctx.set_gpr(2, 2228u << 16u);
    ctx.set_gpr(2, ctx.gpr[2] + static_cast<std::uint32_t>(-27472));
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(8), ctx.gpr[2]);
    ctx.set_gpr(4, 0u + 0u);
    ctx.set_gpr(5, 2245u << 16u);
    ctx.set_gpr(5, ctx.gpr[5] + static_cast<std::uint32_t>(28776));
    ctx.set_gpr(6, 2191u << 16u);
    ctx.set_gpr(6, ctx.gpr[6] + static_cast<std::uint32_t>(-13396));
    ctx.set_gpr(7, 2187u << 16u);
    ctx.set_gpr(7, ctx.gpr[7] + static_cast<std::uint32_t>(-9000));
    ctx.set_gpr(8, 2191u << 16u);
    ctx.set_gpr(8, ctx.gpr[8] + static_cast<std::uint32_t>(-16028));
    ctx.set_gpr(9, 2228u << 16u);
    ctx.set_gpr(9, ctx.gpr[9] + static_cast<std::uint32_t>(-27464));
    ctx.set_gpr(10, 0u + static_cast<std::uint32_t>(20));
    ctx.set_gpr(11, 2191u << 16u);
    ctx.set_gpr(11, ctx.gpr[11] + static_cast<std::uint32_t>(-16252));
    ctx.set_gpr(31, 0x088EC154u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0080_entry, 80u, 294u, 0x08945594u>(ctx, &aot_mem) && ctx.pc == 0x088EC154u) goto L_088EC154;
    return;
L_088EC154:
    ctx.set_gpr(31, rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(28)));
    ctx.set_gpr(29, ctx.gpr[29] + static_cast<std::uint32_t>(32));
    jump_target = ctx.gpr[31];
    // nop
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_088EC164:
    ctx.set_gpr(29, ctx.gpr[29] + static_cast<std::uint32_t>(-16));
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(12), ctx.gpr[31]);
    ctx.set_gpr(31, 0x088EC174u);
    // nop
    goto L_088EC038;
L_088EC174:
    ctx.set_gpr(31, rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(12)));
    ctx.set_gpr(29, ctx.gpr[29] + static_cast<std::uint32_t>(16));
    jump_target = ctx.gpr[31];
    // nop
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_088EC184:
    ctx.set_gpr(29, ctx.gpr[29] + static_cast<std::uint32_t>(-16));
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(12), ctx.gpr[31]);
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(8), ctx.gpr[16]);
    ctx.set_gpr(16, ctx.gpr[4] + 0u);
    ctx.set_gpr(31, 0x088EC19Cu);
    // nop
    goto L_088EC2F4;
L_088EC19C:
    ctx.set_gpr(2, 2245u << 16u);
    ctx.set_gpr(4, rt.memory().aot_load32(ctx.gpr[2] + static_cast<std::uint32_t>(28780)));
    ctx.set_gpr(5, ctx.gpr[16] + 0u);
    ctx.set_gpr(31, 0x088EC1B0u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0080_entry, 80u, 50u, 0x089443D4u>(ctx, &aot_mem) && ctx.pc == 0x088EC1B0u) goto L_088EC1B0;
    return;
L_088EC1B0:
    ctx.set_gpr(31, rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(12)));
    ctx.set_gpr(16, rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(8)));
    ctx.set_gpr(29, ctx.gpr[29] + static_cast<std::uint32_t>(16));
    jump_target = ctx.gpr[31];
    // nop
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_088EC1C4:
    ctx.set_gpr(29, ctx.gpr[29] + static_cast<std::uint32_t>(-16));
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(12), ctx.gpr[31]);
    ctx.set_gpr(2, 2245u << 16u);
    ctx.set_gpr(2, rt.memory().aot_load32(ctx.gpr[2] + static_cast<std::uint32_t>(28780)));
    { const bool branch_taken = ctx.gpr[2] == 0u;
    // nop
      if (branch_taken) {
          goto L_088EC1F0;
      }
      goto L_088EC1DC;
    }
L_088EC1DC:
    ctx.set_gpr(2, rt.memory().aot_load32(ctx.gpr[2] + static_cast<std::uint32_t>(36)));
    ctx.set_gpr(2, ctx.gpr[2] & 4u);
    ctx.set_gpr(2, 0u < ctx.gpr[2] ? 1u : 0u);
    { const bool branch_taken = ctx.gpr[2] != 0u;
    // nop
      if (branch_taken) {
          goto L_088EC1F8;
      }
      goto L_088EC1F0;
    }
L_088EC1F0:
    ctx.set_gpr(31, 0x088EC1F8u);
    // nop
    goto L_088EC2F4;
L_088EC1F8:
    ctx.set_gpr(2, 2245u << 16u);
    ctx.set_gpr(2, rt.memory().aot_load32(ctx.gpr[2] + static_cast<std::uint32_t>(28780)));
    ctx.set_gpr(31, rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(12)));
    ctx.set_gpr(29, ctx.gpr[29] + static_cast<std::uint32_t>(16));
    jump_target = ctx.gpr[31];
    // nop
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_088EC210:
    ctx.set_gpr(29, ctx.gpr[29] + static_cast<std::uint32_t>(-48));
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(12), ctx.gpr[31]);
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(8), ctx.gpr[16]);
    ctx.set_gpr(4, ctx.gpr[29] + static_cast<std::uint32_t>(24));
    ctx.set_gpr(31, 0x088EC228u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0080_entry, 80u, 398u, 0x08945BF8u>(ctx, &aot_mem) && ctx.pc == 0x088EC228u) goto L_088EC228;
    return;
L_088EC228:
    ctx.set_gpr(2, 2232u << 16u);
    ctx.set_gpr(2, ctx.gpr[2] + static_cast<std::uint32_t>(-6636));
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(24), ctx.gpr[2]);
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(32), 0u);
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(36), 0u);
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(40), 0u);
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(44), 0u);
    ctx.set_gpr(31, 0x088EC24Cu);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0064_entry, 64u, 444u, 0x08905FF0u>(ctx, &aot_mem) && ctx.pc == 0x088EC24Cu) goto L_088EC24C;
    return;
L_088EC24C:
    ctx.set_gpr(2, rt.memory().aot_load32(ctx.gpr[2] + static_cast<std::uint32_t>(932)));
    ctx.set_gpr(2, ctx.gpr[2] + ctx.gpr[29]);
    ctx.set_gpr(16, rt.memory().aot_load32(ctx.gpr[2] + static_cast<std::uint32_t>(24)));
    ctx.set_gpr(2, 2232u << 16u);
    ctx.set_gpr(2, ctx.gpr[2] + static_cast<std::uint32_t>(-6636));
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(24), ctx.gpr[2]);
    ctx.set_gpr(4, rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(44)));
    { const bool branch_taken = ctx.gpr[4] == 0u;
    // nop
      if (branch_taken) {
          goto L_088EC278;
      }
      goto L_088EC270;
    }
L_088EC270:
    ctx.set_gpr(31, 0x088EC278u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0014_entry, 14u, 257u, 0x0883D454u>(ctx, &aot_mem) && ctx.pc == 0x088EC278u) goto L_088EC278;
    return;
L_088EC278:
    ctx.set_gpr(4, rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(40)));
    { const bool branch_taken = ctx.gpr[4] == 0u;
    // nop
      if (branch_taken) {
          goto L_088EC28C;
      }
      goto L_088EC284;
    }
L_088EC284:
    ctx.set_gpr(31, 0x088EC28Cu);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0014_entry, 14u, 257u, 0x0883D454u>(ctx, &aot_mem) && ctx.pc == 0x088EC28Cu) goto L_088EC28C;
    return;
L_088EC28C:
    ctx.set_gpr(4, rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(36)));
    { const bool branch_taken = ctx.gpr[4] == 0u;
    // nop
      if (branch_taken) {
          goto L_088EC2A0;
      }
      goto L_088EC298;
    }
L_088EC298:
    ctx.set_gpr(31, 0x088EC2A0u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0014_entry, 14u, 257u, 0x0883D454u>(ctx, &aot_mem) && ctx.pc == 0x088EC2A0u) goto L_088EC2A0;
    return;
L_088EC2A0:
    ctx.set_gpr(2, rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(32)));
    ctx.set_gpr(2, 0u < ctx.gpr[2] ? 1u : 0u);
    { const bool branch_taken = ctx.gpr[2] == 0u;
    // nop
      if (branch_taken) {
          goto L_088EC2C4;
      }
      goto L_088EC2B0;
    }
L_088EC2B0:
    ctx.set_gpr(4, ctx.gpr[29] + static_cast<std::uint32_t>(32));
    ctx.set_gpr(31, 0x088EC2BCu);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0019_entry, 19u, 781u, 0x0885315Cu>(ctx, &aot_mem) && ctx.pc == 0x088EC2BCu) goto L_088EC2BC;
    return;
L_088EC2BC:
    ctx.set_gpr(2, 0u < ctx.gpr[2] ? 1u : 0u);
    ctx.set_gpr(2, ctx.gpr[2] ^ 1u);
    goto L_088EC2C4;
L_088EC2C4:
    { const bool branch_taken = ctx.gpr[2] == 0u;
    // nop
      if (branch_taken) {
          goto L_088EC2DC;
      }
      goto L_088EC2CC;
    }
L_088EC2CC:
    ctx.set_gpr(2, rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(32)));
    ctx.set_gpr(4, ctx.gpr[2] + static_cast<std::uint32_t>(-8));
    ctx.set_gpr(31, 0x088EC2DCu);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0019_entry, 19u, 770u, 0x088530D0u>(ctx, &aot_mem) && ctx.pc == 0x088EC2DCu) goto L_088EC2DC;
    return;
L_088EC2DC:
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
L_088EC2F4:
    ctx.set_gpr(29, ctx.gpr[29] + static_cast<std::uint32_t>(-16));
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(12), ctx.gpr[31]);
    ctx.set_gpr(4, 2191u << 16u);
    ctx.set_gpr(4, ctx.gpr[4] + static_cast<std::uint32_t>(-15588));
    ctx.set_gpr(31, 0x088EC30Cu);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0080_entry, 80u, 286u, 0x08945508u>(ctx, &aot_mem) && ctx.pc == 0x088EC30Cu) goto L_088EC30C;
    return;
L_088EC30C:
    ctx.set_gpr(31, rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(12)));
    ctx.set_gpr(29, ctx.gpr[29] + static_cast<std::uint32_t>(16));
    jump_target = ctx.gpr[31];
    // nop
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_088EC31C:
    ctx.set_gpr(29, ctx.gpr[29] + static_cast<std::uint32_t>(-32));
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(28), ctx.gpr[31]);
    ctx.set_gpr(31, 0x088EC32Cu);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0052_entry, 52u, 154u, 0x088D49C4u>(ctx, &aot_mem) && ctx.pc == 0x088EC32Cu) goto L_088EC32C;
    return;
L_088EC32C:
    ctx.set_gpr(2, 2191u << 16u);
    ctx.set_gpr(2, ctx.gpr[2] + static_cast<std::uint32_t>(-15432));
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(0), ctx.gpr[2]);
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(4), 0u);
    ctx.set_gpr(2, 2228u << 16u);
    ctx.set_gpr(2, ctx.gpr[2] + static_cast<std::uint32_t>(-27440));
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(8), ctx.gpr[2]);
    ctx.set_gpr(4, 0u + 0u);
    ctx.set_gpr(5, 2245u << 16u);
    ctx.set_gpr(5, ctx.gpr[5] + static_cast<std::uint32_t>(28780));
    ctx.set_gpr(6, 2196u << 16u);
    ctx.set_gpr(6, ctx.gpr[6] + static_cast<std::uint32_t>(25520));
    ctx.set_gpr(7, 2188u << 16u);
    ctx.set_gpr(7, ctx.gpr[7] + static_cast<std::uint32_t>(-27092));
    ctx.set_gpr(8, 2191u << 16u);
    ctx.set_gpr(8, ctx.gpr[8] + static_cast<std::uint32_t>(-15464));
    ctx.set_gpr(9, 2228u << 16u);
    ctx.set_gpr(9, ctx.gpr[9] + static_cast<std::uint32_t>(-27424));
    ctx.set_gpr(10, 0u + static_cast<std::uint32_t>(24));
    ctx.set_gpr(11, 2191u << 16u);
    ctx.set_gpr(11, ctx.gpr[11] + static_cast<std::uint32_t>(-15856));
    ctx.set_gpr(31, 0x088EC388u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0080_entry, 80u, 294u, 0x08945594u>(ctx, &aot_mem) && ctx.pc == 0x088EC388u) goto L_088EC388;
    return;
L_088EC388:
    ctx.set_gpr(31, rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(28)));
    ctx.set_gpr(29, ctx.gpr[29] + static_cast<std::uint32_t>(32));
    jump_target = ctx.gpr[31];
    // nop
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_088EC398:
    ctx.set_gpr(29, ctx.gpr[29] + static_cast<std::uint32_t>(-16));
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(12), ctx.gpr[31]);
    ctx.set_gpr(31, 0x088EC3A8u);
    // nop
    goto L_088EC1C4;
L_088EC3A8:
    ctx.set_gpr(31, rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(12)));
    ctx.set_gpr(29, ctx.gpr[29] + static_cast<std::uint32_t>(16));
    jump_target = ctx.gpr[31];
    // nop
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_088EC3B8:
    ctx.set_gpr(29, ctx.gpr[29] + static_cast<std::uint32_t>(-16));
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(12), ctx.gpr[31]);
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(8), ctx.gpr[18]);
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(4), ctx.gpr[17]);
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(0), ctx.gpr[16]);
    ctx.set_gpr(2, 2245u << 16u);
    ctx.set_gpr(16, rt.memory().aot_load32(ctx.gpr[2] + static_cast<std::uint32_t>(28780)));
    ctx.set_gpr(4, ctx.gpr[16] + 0u);
    ctx.set_gpr(31, 0x088EC3E0u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0080_entry, 80u, 236u, 0x089451A8u>(ctx, &aot_mem) && ctx.pc == 0x088EC3E0u) goto L_088EC3E0;
    return;
L_088EC3E0:
    ctx.set_gpr(17, ctx.gpr[2] + 0u);
    ctx.set_gpr(4, ctx.gpr[16] + 0u);
    ctx.set_gpr(5, 2228u << 16u);
    ctx.set_gpr(5, ctx.gpr[5] + static_cast<std::uint32_t>(-27408));
    ctx.set_gpr(6, 0u + static_cast<std::uint32_t>(4));
    ctx.set_gpr(31, 0x088EC3FCu);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0080_entry, 80u, 151u, 0x08944B98u>(ctx, &aot_mem) && ctx.pc == 0x088EC3FCu) goto L_088EC3FC;
    return;
L_088EC3FC:
    ctx.set_gpr(4, ctx.gpr[16] + 0u);
    ctx.set_gpr(5, ctx.gpr[17] + 0u);
    ctx.set_gpr(31, 0x088EC40Cu);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0080_entry, 80u, 148u, 0x08944B4Cu>(ctx, &aot_mem) && ctx.pc == 0x088EC40Cu) goto L_088EC40C;
    return;
L_088EC40C:
    ctx.set_gpr(4, ctx.gpr[2] + 0u);
    ctx.set_gpr(5, 2228u << 16u);
    ctx.set_gpr(5, ctx.gpr[5] + static_cast<std::uint32_t>(-27276));
    ctx.set_gpr(31, 0x088EC420u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0085_entry, 85u, 280u, 0x08959444u>(ctx, &aot_mem) && ctx.pc == 0x088EC420u) goto L_088EC420;
    return;
L_088EC420:
    ctx.set_gpr(5, ctx.gpr[17] + static_cast<std::uint32_t>(1));
    ctx.set_gpr(4, ctx.gpr[16] + 0u);
    ctx.set_gpr(31, 0x088EC430u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0080_entry, 80u, 148u, 0x08944B4Cu>(ctx, &aot_mem) && ctx.pc == 0x088EC430u) goto L_088EC430;
    return;
L_088EC430:
    ctx.set_gpr(18, ctx.gpr[2] + 0u);
    ctx.set_gpr(31, 0x088EC43Cu);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0057_entry, 57u, 829u, 0x088EBFE0u>(ctx, &aot_mem) && ctx.pc == 0x088EC43Cu) goto L_088EC43C;
    return;
L_088EC43C:
    rt.memory().aot_store32(ctx.gpr[18] + static_cast<std::uint32_t>(52), ctx.gpr[2]);
    ctx.set_gpr(2, 0u + static_cast<std::uint32_t>(1));
    rt.memory().aot_store8(ctx.gpr[18] + static_cast<std::uint32_t>(48), static_cast<std::uint8_t>(ctx.gpr[2]));
    ctx.set_gpr(5, ctx.gpr[17] + static_cast<std::uint32_t>(2));
    ctx.set_gpr(4, ctx.gpr[16] + 0u);
    ctx.set_gpr(31, 0x088EC458u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0080_entry, 80u, 148u, 0x08944B4Cu>(ctx, &aot_mem) && ctx.pc == 0x088EC458u) goto L_088EC458;
    return;
L_088EC458:
    ctx.set_gpr(18, ctx.gpr[2] + 0u);
    ctx.set_gpr(31, 0x088EC464u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0059_entry, 59u, 75u, 0x088F0684u>(ctx, &aot_mem) && ctx.pc == 0x088EC464u) goto L_088EC464;
    return;
L_088EC464:
    rt.memory().aot_store32(ctx.gpr[18] + static_cast<std::uint32_t>(52), ctx.gpr[2]);
    ctx.set_gpr(2, 0u + static_cast<std::uint32_t>(1));
    rt.memory().aot_store8(ctx.gpr[18] + static_cast<std::uint32_t>(48), static_cast<std::uint8_t>(ctx.gpr[2]));
    ctx.set_gpr(5, ctx.gpr[17] + static_cast<std::uint32_t>(3));
    ctx.set_gpr(4, ctx.gpr[16] + 0u);
    ctx.set_gpr(31, 0x088EC480u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0080_entry, 80u, 148u, 0x08944B4Cu>(ctx, &aot_mem) && ctx.pc == 0x088EC480u) goto L_088EC480;
    return;
L_088EC480:
    ctx.set_gpr(18, ctx.gpr[2] + 0u);
    ctx.set_gpr(31, 0x088EC48Cu);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0059_entry, 59u, 107u, 0x088F095Cu>(ctx, &aot_mem) && ctx.pc == 0x088EC48Cu) goto L_088EC48C;
    return;
L_088EC48C:
    rt.memory().aot_store32(ctx.gpr[18] + static_cast<std::uint32_t>(52), ctx.gpr[2]);
    ctx.set_gpr(2, 0u + static_cast<std::uint32_t>(1));
    rt.memory().aot_store8(ctx.gpr[18] + static_cast<std::uint32_t>(48), static_cast<std::uint8_t>(ctx.gpr[2]));
    ctx.set_gpr(4, ctx.gpr[16] + 0u);
    ctx.set_gpr(5, 2228u << 16u);
    ctx.set_gpr(5, ctx.gpr[5] + static_cast<std::uint32_t>(-27324));
    ctx.set_gpr(6, 2228u << 16u);
    ctx.set_gpr(6, ctx.gpr[6] + static_cast<std::uint32_t>(-27308));
    ctx.set_gpr(7, 2228u << 16u);
    ctx.set_gpr(7, ctx.gpr[7] + static_cast<std::uint32_t>(-27292));
    ctx.set_gpr(8, ctx.gpr[17] + 0u);
    ctx.set_gpr(31, 0x088EC4C0u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0080_entry, 80u, 162u, 0x08944C7Cu>(ctx, &aot_mem) && ctx.pc == 0x088EC4C0u) goto L_088EC4C0;
    return;
L_088EC4C0:
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
L_088EC4DC:
    ctx.set_gpr(29, ctx.gpr[29] + static_cast<std::uint32_t>(-16));
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(12), ctx.gpr[31]);
    ctx.set_gpr(2, 2245u << 16u);
    ctx.set_gpr(2, rt.memory().aot_load32(ctx.gpr[2] + static_cast<std::uint32_t>(28800)));
    { const bool branch_taken = ctx.gpr[2] == 0u;
    // nop
      if (branch_taken) {
          goto L_088EC508;
      }
      goto L_088EC4F4;
    }
L_088EC4F4:
    ctx.set_gpr(2, rt.memory().aot_load32(ctx.gpr[2] + static_cast<std::uint32_t>(36)));
    ctx.set_gpr(2, ctx.gpr[2] & 4u);
    ctx.set_gpr(2, 0u < ctx.gpr[2] ? 1u : 0u);
    { const bool branch_taken = ctx.gpr[2] != 0u;
    // nop
      if (branch_taken) {
          goto L_088EC510;
      }
      goto L_088EC508;
    }
L_088EC508:
    ctx.set_gpr(31, 0x088EC510u);
    // nop
    goto L_088EC5BC;
L_088EC510:
    ctx.set_gpr(2, 2245u << 16u);
    ctx.set_gpr(2, rt.memory().aot_load32(ctx.gpr[2] + static_cast<std::uint32_t>(28800)));
    ctx.set_gpr(31, rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(12)));
    ctx.set_gpr(29, ctx.gpr[29] + static_cast<std::uint32_t>(16));
    jump_target = ctx.gpr[31];
    // nop
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_088EC528:
    ctx.set_gpr(29, ctx.gpr[29] + static_cast<std::uint32_t>(-48));
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(12), ctx.gpr[31]);
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(8), ctx.gpr[16]);
    ctx.set_gpr(4, ctx.gpr[29] + static_cast<std::uint32_t>(24));
    ctx.set_gpr(31, 0x088EC540u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0080_entry, 80u, 398u, 0x08945BF8u>(ctx, &aot_mem) && ctx.pc == 0x088EC540u) goto L_088EC540;
    return;
L_088EC540:
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(32), 0u);
    ctx.set_gpr(2, 2232u << 16u);
    ctx.set_gpr(2, ctx.gpr[2] + static_cast<std::uint32_t>(10932));
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(24), ctx.gpr[2]);
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(44), 0u);
    ctx.set_gpr(31, 0x088EC55Cu);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0064_entry, 64u, 444u, 0x08905FF0u>(ctx, &aot_mem) && ctx.pc == 0x088EC55Cu) goto L_088EC55C;
    return;
L_088EC55C:
    ctx.set_gpr(2, rt.memory().aot_load32(ctx.gpr[2] + static_cast<std::uint32_t>(932)));
    ctx.set_gpr(2, ctx.gpr[2] + ctx.gpr[29]);
    ctx.set_gpr(16, rt.memory().aot_load32(ctx.gpr[2] + static_cast<std::uint32_t>(24)));
    ctx.set_gpr(2, 2232u << 16u);
    ctx.set_gpr(2, ctx.gpr[2] + static_cast<std::uint32_t>(10932));
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(24), ctx.gpr[2]);
    ctx.set_gpr(4, rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(44)));
    { const bool branch_taken = ctx.gpr[4] == 0u;
    // nop
      if (branch_taken) {
          goto L_088EC588;
      }
      goto L_088EC580;
    }
L_088EC580:
    ctx.set_gpr(31, 0x088EC588u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0014_entry, 14u, 257u, 0x0883D454u>(ctx, &aot_mem) && ctx.pc == 0x088EC588u) goto L_088EC588;
    return;
L_088EC588:
    ctx.set_gpr(2, 2232u << 16u);
    ctx.set_gpr(2, ctx.gpr[2] + static_cast<std::uint32_t>(-15576));
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(24), ctx.gpr[2]);
    ctx.set_gpr(4, ctx.gpr[29] + static_cast<std::uint32_t>(32));
    ctx.set_gpr(5, 0u + static_cast<std::uint32_t>(-1));
    ctx.set_gpr(31, 0x088EC5A4u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0020_entry, 20u, 288u, 0x088555D0u>(ctx, &aot_mem) && ctx.pc == 0x088EC5A4u) goto L_088EC5A4;
    return;
L_088EC5A4:
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
L_088EC5BC:
    ctx.set_gpr(29, ctx.gpr[29] + static_cast<std::uint32_t>(-16));
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(12), ctx.gpr[31]);
    ctx.set_gpr(4, 2191u << 16u);
    ctx.set_gpr(4, ctx.gpr[4] + static_cast<std::uint32_t>(-14876));
    ctx.set_gpr(31, 0x088EC5D4u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0080_entry, 80u, 286u, 0x08945508u>(ctx, &aot_mem) && ctx.pc == 0x088EC5D4u) goto L_088EC5D4;
    return;
L_088EC5D4:
    ctx.set_gpr(31, rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(12)));
    ctx.set_gpr(29, ctx.gpr[29] + static_cast<std::uint32_t>(16));
    jump_target = ctx.gpr[31];
    // nop
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_088EC5E4:
    ctx.set_gpr(29, ctx.gpr[29] + static_cast<std::uint32_t>(-32));
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(28), ctx.gpr[31]);
    ctx.set_gpr(31, 0x088EC5F4u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0052_entry, 52u, 154u, 0x088D49C4u>(ctx, &aot_mem) && ctx.pc == 0x088EC5F4u) goto L_088EC5F4;
    return;
L_088EC5F4:
    ctx.set_gpr(2, 2191u << 16u);
    ctx.set_gpr(2, ctx.gpr[2] + static_cast<std::uint32_t>(-14720));
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(0), ctx.gpr[2]);
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(4), 0u);
    ctx.set_gpr(2, 2228u << 16u);
    ctx.set_gpr(2, ctx.gpr[2] + static_cast<std::uint32_t>(-27272));
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(8), ctx.gpr[2]);
    ctx.set_gpr(4, 0u + 0u);
    ctx.set_gpr(5, 2245u << 16u);
    ctx.set_gpr(5, ctx.gpr[5] + static_cast<std::uint32_t>(28800));
    ctx.set_gpr(6, 2191u << 16u);
    ctx.set_gpr(6, ctx.gpr[6] + static_cast<std::uint32_t>(4924));
    ctx.set_gpr(7, 2187u << 16u);
    ctx.set_gpr(7, ctx.gpr[7] + static_cast<std::uint32_t>(-6348));
    ctx.set_gpr(8, 2191u << 16u);
    ctx.set_gpr(8, ctx.gpr[8] + static_cast<std::uint32_t>(-14752));
    ctx.set_gpr(9, 2228u << 16u);
    ctx.set_gpr(9, ctx.gpr[9] + static_cast<std::uint32_t>(-27264));
    ctx.set_gpr(10, 0u + static_cast<std::uint32_t>(24));
    ctx.set_gpr(11, 2191u << 16u);
    ctx.set_gpr(11, ctx.gpr[11] + static_cast<std::uint32_t>(-15064));
    ctx.set_gpr(31, 0x088EC650u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0080_entry, 80u, 294u, 0x08945594u>(ctx, &aot_mem) && ctx.pc == 0x088EC650u) goto L_088EC650;
    return;
L_088EC650:
    ctx.set_gpr(31, rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(28)));
    ctx.set_gpr(29, ctx.gpr[29] + static_cast<std::uint32_t>(32));
    jump_target = ctx.gpr[31];
    // nop
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_088EC660:
    ctx.set_gpr(29, ctx.gpr[29] + static_cast<std::uint32_t>(-16));
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(12), ctx.gpr[31]);
    ctx.set_gpr(31, 0x088EC670u);
    // nop
    goto L_088EC4DC;
L_088EC670:
    ctx.set_gpr(31, rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(12)));
    ctx.set_gpr(29, ctx.gpr[29] + static_cast<std::uint32_t>(16));
    jump_target = ctx.gpr[31];
    // nop
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_088EC680:
    ctx.set_gpr(29, ctx.gpr[29] + static_cast<std::uint32_t>(-16));
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(12), ctx.gpr[31]);
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(8), ctx.gpr[18]);
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(4), ctx.gpr[17]);
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(0), ctx.gpr[16]);
    ctx.set_gpr(2, 2245u << 16u);
    ctx.set_gpr(17, rt.memory().aot_load32(ctx.gpr[2] + static_cast<std::uint32_t>(28800)));
    ctx.set_gpr(4, ctx.gpr[17] + 0u);
    ctx.set_gpr(31, 0x088EC6A8u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0080_entry, 80u, 236u, 0x089451A8u>(ctx, &aot_mem) && ctx.pc == 0x088EC6A8u) goto L_088EC6A8;
    return;
L_088EC6A8:
    ctx.set_gpr(18, ctx.gpr[2] + 0u);
    ctx.set_gpr(4, ctx.gpr[17] + 0u);
    ctx.set_gpr(5, 2228u << 16u);
    ctx.set_gpr(5, ctx.gpr[5] + static_cast<std::uint32_t>(-27240));
    ctx.set_gpr(6, 0u + static_cast<std::uint32_t>(1));
    ctx.set_gpr(31, 0x088EC6C4u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0080_entry, 80u, 151u, 0x08944B98u>(ctx, &aot_mem) && ctx.pc == 0x088EC6C4u) goto L_088EC6C4;
    return;
L_088EC6C4:
    ctx.set_gpr(4, ctx.gpr[17] + 0u);
    ctx.set_gpr(5, ctx.gpr[18] + 0u);
    ctx.set_gpr(31, 0x088EC6D4u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0080_entry, 80u, 148u, 0x08944B4Cu>(ctx, &aot_mem) && ctx.pc == 0x088EC6D4u) goto L_088EC6D4;
    return;
L_088EC6D4:
    ctx.set_gpr(16, ctx.gpr[2] + 0u);
    ctx.set_gpr(31, 0x088EC6E0u);
    // nop
    goto L_088EC770;
L_088EC6E0:
    rt.memory().aot_store32(ctx.gpr[16] + static_cast<std::uint32_t>(52), ctx.gpr[2]);
    ctx.set_gpr(2, 0u + static_cast<std::uint32_t>(1));
    rt.memory().aot_store8(ctx.gpr[16] + static_cast<std::uint32_t>(48), static_cast<std::uint8_t>(ctx.gpr[2]));
    ctx.set_gpr(4, ctx.gpr[17] + 0u);
    ctx.set_gpr(5, 2228u << 16u);
    ctx.set_gpr(5, ctx.gpr[5] + static_cast<std::uint32_t>(-27216));
    ctx.set_gpr(6, 2228u << 16u);
    ctx.set_gpr(6, ctx.gpr[6] + static_cast<std::uint32_t>(-27212));
    ctx.set_gpr(7, 2228u << 16u);
    ctx.set_gpr(7, ctx.gpr[7] + static_cast<std::uint32_t>(-27208));
    ctx.set_gpr(8, ctx.gpr[18] + 0u);
    ctx.set_gpr(31, 0x088EC714u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0080_entry, 80u, 162u, 0x08944C7Cu>(ctx, &aot_mem) && ctx.pc == 0x088EC714u) goto L_088EC714;
    return;
L_088EC714:
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
L_088EC730:
    ctx.set_gpr(29, ctx.gpr[29] + static_cast<std::uint32_t>(-16));
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(12), ctx.gpr[31]);
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(8), ctx.gpr[16]);
    ctx.set_gpr(16, ctx.gpr[4] + 0u);
    ctx.set_gpr(31, 0x088EC748u);
    // nop
    goto L_088EC8A0;
L_088EC748:
    ctx.set_gpr(2, 2245u << 16u);
    ctx.set_gpr(4, rt.memory().aot_load32(ctx.gpr[2] + static_cast<std::uint32_t>(28808)));
    ctx.set_gpr(5, ctx.gpr[16] + 0u);
    ctx.set_gpr(31, 0x088EC75Cu);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0080_entry, 80u, 50u, 0x089443D4u>(ctx, &aot_mem) && ctx.pc == 0x088EC75Cu) goto L_088EC75C;
    return;
L_088EC75C:
    ctx.set_gpr(31, rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(12)));
    ctx.set_gpr(16, rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(8)));
    ctx.set_gpr(29, ctx.gpr[29] + static_cast<std::uint32_t>(16));
    jump_target = ctx.gpr[31];
    // nop
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_088EC770:
    ctx.set_gpr(29, ctx.gpr[29] + static_cast<std::uint32_t>(-16));
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(12), ctx.gpr[31]);
    ctx.set_gpr(2, 2245u << 16u);
    ctx.set_gpr(2, rt.memory().aot_load32(ctx.gpr[2] + static_cast<std::uint32_t>(28808)));
    { const bool branch_taken = ctx.gpr[2] != 0u;
    // nop
      if (branch_taken) {
          goto L_088EC7B0;
      }
      goto L_088EC788;
    }
L_088EC788:
    ctx.set_gpr(31, 0x088EC790u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0078_entry, 78u, 217u, 0x0893CDECu>(ctx, &aot_mem) && ctx.pc == 0x088EC790u) goto L_088EC790;
    return;
L_088EC790:
    ctx.set_gpr(4, rt.memory().aot_load32(ctx.gpr[2] + static_cast<std::uint32_t>(0)));
    ctx.set_gpr(31, 0x088EC79Cu);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0078_entry, 78u, 199u, 0x0893CC68u>(ctx, &aot_mem) && ctx.pc == 0x088EC79Cu) goto L_088EC79C;
    return;
L_088EC79C:
    ctx.set_gpr(4, ctx.gpr[2] + 0u);
    ctx.set_gpr(31, 0x088EC7A8u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0052_entry, 52u, 732u, 0x088D6FE8u>(ctx, &aot_mem) && ctx.pc == 0x088EC7A8u) goto L_088EC7A8;
    return;
L_088EC7A8:
    ctx.set_gpr(3, 2245u << 16u);
    rt.memory().aot_store32(ctx.gpr[3] + static_cast<std::uint32_t>(28808), ctx.gpr[2]);
    goto L_088EC7B0;
L_088EC7B0:
    ctx.set_gpr(2, 2245u << 16u);
    ctx.set_gpr(2, rt.memory().aot_load32(ctx.gpr[2] + static_cast<std::uint32_t>(28808)));
    ctx.set_gpr(31, rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(12)));
    ctx.set_gpr(29, ctx.gpr[29] + static_cast<std::uint32_t>(16));
    jump_target = ctx.gpr[31];
    // nop
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_088EC7C8:
    ctx.set_gpr(29, ctx.gpr[29] + static_cast<std::uint32_t>(-16));
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(12), ctx.gpr[31]);
    ctx.set_gpr(2, 2245u << 16u);
    ctx.set_gpr(2, rt.memory().aot_load32(ctx.gpr[2] + static_cast<std::uint32_t>(28808)));
    { const bool branch_taken = ctx.gpr[2] == 0u;
    // nop
      if (branch_taken) {
          goto L_088EC7F4;
      }
      goto L_088EC7E0;
    }
L_088EC7E0:
    ctx.set_gpr(2, rt.memory().aot_load32(ctx.gpr[2] + static_cast<std::uint32_t>(36)));
    ctx.set_gpr(2, ctx.gpr[2] & 4u);
    ctx.set_gpr(2, 0u < ctx.gpr[2] ? 1u : 0u);
    { const bool branch_taken = ctx.gpr[2] != 0u;
    // nop
      if (branch_taken) {
          goto L_088EC7FC;
      }
      goto L_088EC7F4;
    }
L_088EC7F4:
    ctx.set_gpr(31, 0x088EC7FCu);
    // nop
    goto L_088EC8A0;
L_088EC7FC:
    ctx.set_gpr(2, 2245u << 16u);
    ctx.set_gpr(2, rt.memory().aot_load32(ctx.gpr[2] + static_cast<std::uint32_t>(28808)));
    ctx.set_gpr(31, rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(12)));
    ctx.set_gpr(29, ctx.gpr[29] + static_cast<std::uint32_t>(16));
    jump_target = ctx.gpr[31];
    // nop
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_088EC814:
    ctx.set_gpr(29, ctx.gpr[29] + static_cast<std::uint32_t>(-48));
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(12), ctx.gpr[31]);
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(8), ctx.gpr[16]);
    ctx.set_gpr(4, ctx.gpr[29] + static_cast<std::uint32_t>(28));
    ctx.set_gpr(31, 0x088EC82Cu);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0080_entry, 80u, 398u, 0x08945BF8u>(ctx, &aot_mem) && ctx.pc == 0x088EC82Cu) goto L_088EC82C;
    return;
L_088EC82C:
    ctx.set_gpr(2, 2232u << 16u);
    ctx.set_gpr(2, ctx.gpr[2] + static_cast<std::uint32_t>(10840));
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(28), ctx.gpr[2]);
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(36), 0u);
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(40), 0u);
    ctx.set_gpr(31, 0x088EC848u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0064_entry, 64u, 444u, 0x08905FF0u>(ctx, &aot_mem) && ctx.pc == 0x088EC848u) goto L_088EC848;
    return;
L_088EC848:
    ctx.set_gpr(2, rt.memory().aot_load32(ctx.gpr[2] + static_cast<std::uint32_t>(932)));
    ctx.set_gpr(2, ctx.gpr[2] + ctx.gpr[29]);
    ctx.set_gpr(16, rt.memory().aot_load32(ctx.gpr[2] + static_cast<std::uint32_t>(28)));
    ctx.set_gpr(2, 2232u << 16u);
    ctx.set_gpr(2, ctx.gpr[2] + static_cast<std::uint32_t>(10840));
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(28), ctx.gpr[2]);
    ctx.set_gpr(4, rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(40)));
    { const bool branch_taken = ctx.gpr[4] == 0u;
    // nop
      if (branch_taken) {
          goto L_088EC874;
      }
      goto L_088EC86C;
    }
L_088EC86C:
    ctx.set_gpr(31, 0x088EC874u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0014_entry, 14u, 257u, 0x0883D454u>(ctx, &aot_mem) && ctx.pc == 0x088EC874u) goto L_088EC874;
    return;
L_088EC874:
    ctx.set_gpr(4, rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(36)));
    { const bool branch_taken = ctx.gpr[4] == 0u;
    // nop
      if (branch_taken) {
          goto L_088EC888;
      }
      goto L_088EC880;
    }
L_088EC880:
    ctx.set_gpr(31, 0x088EC888u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0014_entry, 14u, 257u, 0x0883D454u>(ctx, &aot_mem) && ctx.pc == 0x088EC888u) goto L_088EC888;
    return;
L_088EC888:
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
L_088EC8A0:
    ctx.set_gpr(29, ctx.gpr[29] + static_cast<std::uint32_t>(-16));
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(12), ctx.gpr[31]);
    ctx.set_gpr(4, 2191u << 16u);
    ctx.set_gpr(4, ctx.gpr[4] + static_cast<std::uint32_t>(-14136));
    ctx.set_gpr(31, 0x088EC8B8u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0080_entry, 80u, 286u, 0x08945508u>(ctx, &aot_mem) && ctx.pc == 0x088EC8B8u) goto L_088EC8B8;
    return;
L_088EC8B8:
    ctx.set_gpr(31, rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(12)));
    ctx.set_gpr(29, ctx.gpr[29] + static_cast<std::uint32_t>(16));
    jump_target = ctx.gpr[31];
    // nop
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_088EC8C8:
    ctx.set_gpr(29, ctx.gpr[29] + static_cast<std::uint32_t>(-32));
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(28), ctx.gpr[31]);
    ctx.set_gpr(31, 0x088EC8D8u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0052_entry, 52u, 154u, 0x088D49C4u>(ctx, &aot_mem) && ctx.pc == 0x088EC8D8u) goto L_088EC8D8;
    return;
L_088EC8D8:
    ctx.set_gpr(2, 2191u << 16u);
    ctx.set_gpr(2, ctx.gpr[2] + static_cast<std::uint32_t>(-13980));
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(0), ctx.gpr[2]);
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(4), 0u);
    ctx.set_gpr(2, 2228u << 16u);
    ctx.set_gpr(2, ctx.gpr[2] + static_cast<std::uint32_t>(-27204));
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(8), ctx.gpr[2]);
    ctx.set_gpr(4, 0u + 0u);
    ctx.set_gpr(5, 2245u << 16u);
    ctx.set_gpr(5, ctx.gpr[5] + static_cast<std::uint32_t>(28808));
    ctx.set_gpr(6, 2196u << 16u);
    ctx.set_gpr(6, ctx.gpr[6] + static_cast<std::uint32_t>(25520));
    ctx.set_gpr(7, 2188u << 16u);
    ctx.set_gpr(7, ctx.gpr[7] + static_cast<std::uint32_t>(-27092));
    ctx.set_gpr(8, 2191u << 16u);
    ctx.set_gpr(8, ctx.gpr[8] + static_cast<std::uint32_t>(-14012));
    ctx.set_gpr(9, 2228u << 16u);
    ctx.set_gpr(9, ctx.gpr[9] + static_cast<std::uint32_t>(-27192));
    ctx.set_gpr(10, 0u + static_cast<std::uint32_t>(20));
    ctx.set_gpr(11, 2191u << 16u);
    ctx.set_gpr(11, ctx.gpr[11] + static_cast<std::uint32_t>(-14316));
    ctx.set_gpr(31, 0x088EC934u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0080_entry, 80u, 294u, 0x08945594u>(ctx, &aot_mem) && ctx.pc == 0x088EC934u) goto L_088EC934;
    return;
L_088EC934:
    ctx.set_gpr(31, rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(28)));
    ctx.set_gpr(29, ctx.gpr[29] + static_cast<std::uint32_t>(32));
    jump_target = ctx.gpr[31];
    // nop
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_088EC944:
    ctx.set_gpr(29, ctx.gpr[29] + static_cast<std::uint32_t>(-16));
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(12), ctx.gpr[31]);
    ctx.set_gpr(31, 0x088EC954u);
    // nop
    goto L_088EC7C8;
L_088EC954:
    ctx.set_gpr(31, rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(12)));
    ctx.set_gpr(29, ctx.gpr[29] + static_cast<std::uint32_t>(16));
    jump_target = ctx.gpr[31];
    // nop
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_088EC964:
    ctx.set_gpr(29, ctx.gpr[29] + static_cast<std::uint32_t>(-16));
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(12), ctx.gpr[31]);
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(8), ctx.gpr[18]);
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(4), ctx.gpr[17]);
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(0), ctx.gpr[16]);
    ctx.set_gpr(2, 2245u << 16u);
    ctx.set_gpr(17, rt.memory().aot_load32(ctx.gpr[2] + static_cast<std::uint32_t>(28808)));
    ctx.set_gpr(4, ctx.gpr[17] + 0u);
    ctx.set_gpr(31, 0x088EC98Cu);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0080_entry, 80u, 236u, 0x089451A8u>(ctx, &aot_mem) && ctx.pc == 0x088EC98Cu) goto L_088EC98C;
    return;
L_088EC98C:
    ctx.set_gpr(18, ctx.gpr[2] + 0u);
    ctx.set_gpr(4, ctx.gpr[17] + 0u);
    ctx.set_gpr(5, 2228u << 16u);
    ctx.set_gpr(5, ctx.gpr[5] + static_cast<std::uint32_t>(-27172));
    ctx.set_gpr(6, 0u + static_cast<std::uint32_t>(3));
    ctx.set_gpr(31, 0x088EC9A8u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0080_entry, 80u, 151u, 0x08944B98u>(ctx, &aot_mem) && ctx.pc == 0x088EC9A8u) goto L_088EC9A8;
    return;
L_088EC9A8:
    ctx.set_gpr(4, ctx.gpr[17] + 0u);
    ctx.set_gpr(5, ctx.gpr[18] + 0u);
    ctx.set_gpr(31, 0x088EC9B8u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0080_entry, 80u, 148u, 0x08944B4Cu>(ctx, &aot_mem) && ctx.pc == 0x088EC9B8u) goto L_088EC9B8;
    return;
L_088EC9B8:
    ctx.set_gpr(16, ctx.gpr[2] + 0u);
    ctx.set_gpr(31, 0x088EC9C4u);
    // nop
    goto L_088ED9B0;
L_088EC9C4:
    rt.memory().aot_store32(ctx.gpr[16] + static_cast<std::uint32_t>(52), ctx.gpr[2]);
    ctx.set_gpr(2, 0u + static_cast<std::uint32_t>(1));
    rt.memory().aot_store8(ctx.gpr[16] + static_cast<std::uint32_t>(48), static_cast<std::uint8_t>(ctx.gpr[2]));
    ctx.set_gpr(5, ctx.gpr[18] + static_cast<std::uint32_t>(1));
    ctx.set_gpr(4, ctx.gpr[17] + 0u);
    ctx.set_gpr(31, 0x088EC9E0u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0080_entry, 80u, 148u, 0x08944B4Cu>(ctx, &aot_mem) && ctx.pc == 0x088EC9E0u) goto L_088EC9E0;
    return;
L_088EC9E0:
    ctx.set_gpr(16, ctx.gpr[2] + 0u);
    ctx.set_gpr(31, 0x088EC9ECu);
    // nop
    goto L_088ECA9C;
L_088EC9EC:
    rt.memory().aot_store32(ctx.gpr[16] + static_cast<std::uint32_t>(52), ctx.gpr[2]);
    ctx.set_gpr(2, 0u + static_cast<std::uint32_t>(1));
    rt.memory().aot_store8(ctx.gpr[16] + static_cast<std::uint32_t>(48), static_cast<std::uint8_t>(ctx.gpr[2]));
    ctx.set_gpr(5, ctx.gpr[18] + static_cast<std::uint32_t>(2));
    ctx.set_gpr(4, ctx.gpr[17] + 0u);
    ctx.set_gpr(31, 0x088ECA08u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0080_entry, 80u, 148u, 0x08944B4Cu>(ctx, &aot_mem) && ctx.pc == 0x088ECA08u) goto L_088ECA08;
    return;
L_088ECA08:
    ctx.set_gpr(4, ctx.gpr[2] + 0u);
    ctx.set_gpr(5, 0u + static_cast<std::uint32_t>(1));
    ctx.set_gpr(31, 0x088ECA18u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0065_entry, 65u, 745u, 0x0890B3DCu>(ctx, &aot_mem) && ctx.pc == 0x088ECA18u) goto L_088ECA18;
    return;
L_088ECA18:
    ctx.set_gpr(4, ctx.gpr[17] + 0u);
    ctx.set_gpr(5, 2228u << 16u);
    ctx.set_gpr(5, ctx.gpr[5] + static_cast<std::uint32_t>(-27152));
    ctx.set_gpr(6, 2228u << 16u);
    ctx.set_gpr(6, ctx.gpr[6] + static_cast<std::uint32_t>(-27140));
    ctx.set_gpr(7, 2228u << 16u);
    ctx.set_gpr(7, ctx.gpr[7] + static_cast<std::uint32_t>(-27128));
    ctx.set_gpr(8, ctx.gpr[18] + 0u);
    ctx.set_gpr(31, 0x088ECA40u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0080_entry, 80u, 162u, 0x08944C7Cu>(ctx, &aot_mem) && ctx.pc == 0x088ECA40u) goto L_088ECA40;
    return;
L_088ECA40:
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
L_088ECA5C:
    ctx.set_gpr(29, ctx.gpr[29] + static_cast<std::uint32_t>(-16));
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(12), ctx.gpr[31]);
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(8), ctx.gpr[16]);
    ctx.set_gpr(16, ctx.gpr[4] + 0u);
    ctx.set_gpr(31, 0x088ECA74u);
    // nop
    goto L_088ECB84;
L_088ECA74:
    ctx.set_gpr(2, 2245u << 16u);
    ctx.set_gpr(4, rt.memory().aot_load32(ctx.gpr[2] + static_cast<std::uint32_t>(28824)));
    ctx.set_gpr(5, ctx.gpr[16] + 0u);
    ctx.set_gpr(31, 0x088ECA88u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0080_entry, 80u, 50u, 0x089443D4u>(ctx, &aot_mem) && ctx.pc == 0x088ECA88u) goto L_088ECA88;
    return;
L_088ECA88:
    ctx.set_gpr(31, rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(12)));
    ctx.set_gpr(16, rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(8)));
    ctx.set_gpr(29, ctx.gpr[29] + static_cast<std::uint32_t>(16));
    jump_target = ctx.gpr[31];
    // nop
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_088ECA9C:
    ctx.set_gpr(29, ctx.gpr[29] + static_cast<std::uint32_t>(-16));
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(12), ctx.gpr[31]);
    ctx.set_gpr(2, 2245u << 16u);
    ctx.set_gpr(2, rt.memory().aot_load32(ctx.gpr[2] + static_cast<std::uint32_t>(28824)));
    { const bool branch_taken = ctx.gpr[2] != 0u;
    // nop
      if (branch_taken) {
          goto L_088ECADC;
      }
      goto L_088ECAB4;
    }
L_088ECAB4:
    ctx.set_gpr(31, 0x088ECABCu);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0078_entry, 78u, 217u, 0x0893CDECu>(ctx, &aot_mem) && ctx.pc == 0x088ECABCu) goto L_088ECABC;
    return;
L_088ECABC:
    ctx.set_gpr(4, rt.memory().aot_load32(ctx.gpr[2] + static_cast<std::uint32_t>(0)));
    ctx.set_gpr(31, 0x088ECAC8u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0078_entry, 78u, 199u, 0x0893CC68u>(ctx, &aot_mem) && ctx.pc == 0x088ECAC8u) goto L_088ECAC8;
    return;
L_088ECAC8:
    ctx.set_gpr(4, ctx.gpr[2] + 0u);
    ctx.set_gpr(31, 0x088ECAD4u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0052_entry, 52u, 732u, 0x088D6FE8u>(ctx, &aot_mem) && ctx.pc == 0x088ECAD4u) goto L_088ECAD4;
    return;
L_088ECAD4:
    ctx.set_gpr(3, 2245u << 16u);
    rt.memory().aot_store32(ctx.gpr[3] + static_cast<std::uint32_t>(28824), ctx.gpr[2]);
    goto L_088ECADC;
L_088ECADC:
    ctx.set_gpr(2, 2245u << 16u);
    ctx.set_gpr(2, rt.memory().aot_load32(ctx.gpr[2] + static_cast<std::uint32_t>(28824)));
    ctx.set_gpr(31, rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(12)));
    ctx.set_gpr(29, ctx.gpr[29] + static_cast<std::uint32_t>(16));
    jump_target = ctx.gpr[31];
    // nop
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_088ECAF4:
    ctx.set_gpr(29, ctx.gpr[29] + static_cast<std::uint32_t>(-16));
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(12), ctx.gpr[31]);
    ctx.set_gpr(2, 2245u << 16u);
    ctx.set_gpr(2, rt.memory().aot_load32(ctx.gpr[2] + static_cast<std::uint32_t>(28824)));
    { const bool branch_taken = ctx.gpr[2] == 0u;
    // nop
      if (branch_taken) {
          goto L_088ECB20;
      }
      goto L_088ECB0C;
    }
L_088ECB0C:
    ctx.set_gpr(2, rt.memory().aot_load32(ctx.gpr[2] + static_cast<std::uint32_t>(36)));
    ctx.set_gpr(2, ctx.gpr[2] & 4u);
    ctx.set_gpr(2, 0u < ctx.gpr[2] ? 1u : 0u);
    { const bool branch_taken = ctx.gpr[2] != 0u;
    // nop
      if (branch_taken) {
          goto L_088ECB28;
      }
      goto L_088ECB20;
    }
L_088ECB20:
    ctx.set_gpr(31, 0x088ECB28u);
    // nop
    goto L_088ECB84;
L_088ECB28:
    ctx.set_gpr(2, 2245u << 16u);
    ctx.set_gpr(2, rt.memory().aot_load32(ctx.gpr[2] + static_cast<std::uint32_t>(28824)));
    ctx.set_gpr(31, rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(12)));
    ctx.set_gpr(29, ctx.gpr[29] + static_cast<std::uint32_t>(16));
    jump_target = ctx.gpr[31];
    // nop
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_088ECB40:
    ctx.set_gpr(29, ctx.gpr[29] + static_cast<std::uint32_t>(-48));
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(12), ctx.gpr[31]);
    ctx.set_gpr(4, ctx.gpr[29] + static_cast<std::uint32_t>(28));
    ctx.set_gpr(31, 0x088ECB54u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0080_entry, 80u, 398u, 0x08945BF8u>(ctx, &aot_mem) && ctx.pc == 0x088ECB54u) goto L_088ECB54;
    return;
L_088ECB54:
    ctx.set_gpr(2, 2232u << 16u);
    ctx.set_gpr(2, ctx.gpr[2] + static_cast<std::uint32_t>(-6088));
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(28), ctx.gpr[2]);
    ctx.set_gpr(31, 0x088ECB68u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0064_entry, 64u, 444u, 0x08905FF0u>(ctx, &aot_mem) && ctx.pc == 0x088ECB68u) goto L_088ECB68;
    return;
L_088ECB68:
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
L_088ECB84:
    ctx.set_gpr(29, ctx.gpr[29] + static_cast<std::uint32_t>(-16));
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(12), ctx.gpr[31]);
    ctx.set_gpr(4, 2191u << 16u);
    ctx.set_gpr(4, ctx.gpr[4] + static_cast<std::uint32_t>(-13396));
    ctx.set_gpr(31, 0x088ECB9Cu);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0080_entry, 80u, 286u, 0x08945508u>(ctx, &aot_mem) && ctx.pc == 0x088ECB9Cu) goto L_088ECB9C;
    return;
L_088ECB9C:
    ctx.set_gpr(31, rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(12)));
    ctx.set_gpr(29, ctx.gpr[29] + static_cast<std::uint32_t>(16));
    jump_target = ctx.gpr[31];
    // nop
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_088ECBAC:
    ctx.set_gpr(29, ctx.gpr[29] + static_cast<std::uint32_t>(-32));
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(28), ctx.gpr[31]);
    ctx.set_gpr(31, 0x088ECBBCu);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0052_entry, 52u, 154u, 0x088D49C4u>(ctx, &aot_mem) && ctx.pc == 0x088ECBBCu) goto L_088ECBBC;
    return;
L_088ECBBC:
    ctx.set_gpr(2, 2191u << 16u);
    ctx.set_gpr(2, ctx.gpr[2] + static_cast<std::uint32_t>(-13248));
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(0), ctx.gpr[2]);
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(4), 0u);
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(8), 0u);
    ctx.set_gpr(4, 0u + 0u);
    ctx.set_gpr(5, 2245u << 16u);
    ctx.set_gpr(5, ctx.gpr[5] + static_cast<std::uint32_t>(28824));
    ctx.set_gpr(6, 2191u << 16u);
    ctx.set_gpr(6, ctx.gpr[6] + static_cast<std::uint32_t>(24296));
    ctx.set_gpr(7, 2189u << 16u);
    ctx.set_gpr(7, ctx.gpr[7] + static_cast<std::uint32_t>(23152));
    ctx.set_gpr(8, 2191u << 16u);
    ctx.set_gpr(8, ctx.gpr[8] + static_cast<std::uint32_t>(-13280));
    ctx.set_gpr(9, 2228u << 16u);
    ctx.set_gpr(9, ctx.gpr[9] + static_cast<std::uint32_t>(-27116));
    ctx.set_gpr(10, 0u + static_cast<std::uint32_t>(20));
    ctx.set_gpr(11, 2191u << 16u);
    ctx.set_gpr(11, ctx.gpr[11] + static_cast<std::uint32_t>(-13504));
    ctx.set_gpr(31, 0x088ECC10u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0080_entry, 80u, 294u, 0x08945594u>(ctx, &aot_mem) && ctx.pc == 0x088ECC10u) goto L_088ECC10;
    return;
L_088ECC10:
    ctx.set_gpr(31, rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(28)));
    ctx.set_gpr(29, ctx.gpr[29] + static_cast<std::uint32_t>(32));
    jump_target = ctx.gpr[31];
    // nop
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_088ECC20:
    ctx.set_gpr(29, ctx.gpr[29] + static_cast<std::uint32_t>(-16));
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(12), ctx.gpr[31]);
    ctx.set_gpr(31, 0x088ECC30u);
    // nop
    goto L_088ECAF4;
L_088ECC30:
    ctx.set_gpr(31, rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(12)));
    ctx.set_gpr(29, ctx.gpr[29] + static_cast<std::uint32_t>(16));
    jump_target = ctx.gpr[31];
    // nop
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_088ECC40:
    ctx.set_gpr(29, ctx.gpr[29] + static_cast<std::uint32_t>(-16));
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(12), ctx.gpr[31]);
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(8), ctx.gpr[18]);
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(4), ctx.gpr[17]);
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(0), ctx.gpr[16]);
    ctx.set_gpr(2, 2245u << 16u);
    ctx.set_gpr(16, rt.memory().aot_load32(ctx.gpr[2] + static_cast<std::uint32_t>(28824)));
    ctx.set_gpr(4, ctx.gpr[16] + 0u);
    ctx.set_gpr(5, 2227u << 16u);
    ctx.set_gpr(5, ctx.gpr[5] + static_cast<std::uint32_t>(29648));
    ctx.set_gpr(31, 0x088ECC70u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0080_entry, 80u, 149u, 0x08944B68u>(ctx, &aot_mem) && ctx.pc == 0x088ECC70u) goto L_088ECC70;
    return;
L_088ECC70:
    ctx.set_gpr(17, ctx.gpr[2] + 0u);
    ctx.set_gpr(4, rt.memory().aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(40)));
    ctx.set_gpr(5, ctx.gpr[17] + 0u);
    ctx.set_gpr(31, 0x088ECC84u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0072_entry, 72u, 700u, 0x08927138u>(ctx, &aot_mem) && ctx.pc == 0x088ECC84u) goto L_088ECC84;
    return;
L_088ECC84:
    ctx.set_gpr(18, ctx.gpr[2] + 0u);
    ctx.set_gpr(4, ctx.gpr[17] + 0u);
    ctx.set_gpr(5, 0u + static_cast<std::uint32_t>(1));
    ctx.set_gpr(25, rt.memory().aot_load32(ctx.gpr[17] + static_cast<std::uint32_t>(0)));
    ctx.set_gpr(25, rt.memory().aot_load32(ctx.gpr[25] + static_cast<std::uint32_t>(84)));
    jump_target = ctx.gpr[25];
    ctx.set_gpr(31, 0x088ECCA0u);
    // nop
    ctx.pc = jump_target;
    if (rt.invoke_chained_call(ctx, &aot_mem) && ctx.pc == 0x088ECCA0u) goto L_088ECCA0;
    return;
L_088ECCA0:
    ctx.set_gpr(17, ctx.gpr[2] + 0u);
    ctx.set_gpr(3, 0u + static_cast<std::uint32_t>(3));
    rt.memory().aot_store8(ctx.gpr[2] + static_cast<std::uint32_t>(36), static_cast<std::uint8_t>(ctx.gpr[3]));
    ctx.set_gpr(3, 2245u << 16u);
    ctx.set_gpr(3, ctx.gpr[3] + static_cast<std::uint32_t>(28828));
    rt.memory().aot_store32(ctx.gpr[2] + static_cast<std::uint32_t>(28), ctx.gpr[3]);
    ctx.set_gpr(4, ctx.gpr[16] + 0u);
    ctx.set_gpr(5, ctx.gpr[18] + 0u);
    ctx.set_gpr(6, ctx.gpr[17] + 0u);
    ctx.set_gpr(31, 0x088ECCCCu);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0080_entry, 80u, 145u, 0x08944AF0u>(ctx, &aot_mem) && ctx.pc == 0x088ECCCCu) goto L_088ECCCC;
    return;
L_088ECCCC:
    ctx.set_gpr(2, rt.memory().aot_load32(ctx.gpr[17] + static_cast<std::uint32_t>(4)));
    ctx.set_gpr(2, ctx.gpr[2] + static_cast<std::uint32_t>(-1));
    rt.memory().aot_store32(ctx.gpr[17] + static_cast<std::uint32_t>(4), ctx.gpr[2]);
    ctx.set_gpr(2, ctx.gpr[2] << 10u);
    ctx.set_gpr(2, ctx.gpr[2] >> 10u);
    { const bool branch_taken = ctx.gpr[2] != 0u;
    // nop
      if (branch_taken) {
          goto L_088ECCF4;
      }
      goto L_088ECCE8;
    }
L_088ECCE8:
    ctx.set_gpr(4, ctx.gpr[17] + 0u);
    ctx.set_gpr(31, 0x088ECCF4u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0080_entry, 80u, 556u, 0x089467C8u>(ctx, &aot_mem) && ctx.pc == 0x088ECCF4u) goto L_088ECCF4;
    return;
L_088ECCF4:
    ctx.set_gpr(4, ctx.gpr[16] + 0u);
    ctx.set_gpr(5, 2227u << 16u);
    ctx.set_gpr(5, ctx.gpr[5] + static_cast<std::uint32_t>(29656));
    ctx.set_gpr(31, 0x088ECD08u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0080_entry, 80u, 149u, 0x08944B68u>(ctx, &aot_mem) && ctx.pc == 0x088ECD08u) goto L_088ECD08;
    return;
L_088ECD08:
    ctx.set_gpr(17, ctx.gpr[2] + 0u);
    ctx.set_gpr(4, rt.memory().aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(40)));
    ctx.set_gpr(5, ctx.gpr[17] + 0u);
    ctx.set_gpr(31, 0x088ECD1Cu);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0072_entry, 72u, 700u, 0x08927138u>(ctx, &aot_mem) && ctx.pc == 0x088ECD1Cu) goto L_088ECD1C;
    return;
L_088ECD1C:
    ctx.set_gpr(18, ctx.gpr[2] + 0u);
    ctx.set_gpr(4, ctx.gpr[17] + 0u);
    ctx.set_gpr(5, 0u + static_cast<std::uint32_t>(1));
    ctx.set_gpr(25, rt.memory().aot_load32(ctx.gpr[17] + static_cast<std::uint32_t>(0)));
    ctx.set_gpr(25, rt.memory().aot_load32(ctx.gpr[25] + static_cast<std::uint32_t>(84)));
    jump_target = ctx.gpr[25];
    ctx.set_gpr(31, 0x088ECD38u);
    // nop
    ctx.pc = jump_target;
    if (rt.invoke_chained_call(ctx, &aot_mem) && ctx.pc == 0x088ECD38u) goto L_088ECD38;
    return;
L_088ECD38:
    ctx.set_gpr(17, ctx.gpr[2] + 0u);
    ctx.set_gpr(3, 0u + static_cast<std::uint32_t>(3));
    rt.memory().aot_store8(ctx.gpr[2] + static_cast<std::uint32_t>(36), static_cast<std::uint8_t>(ctx.gpr[3]));
    ctx.set_gpr(3, 2245u << 16u);
    ctx.set_gpr(3, ctx.gpr[3] + static_cast<std::uint32_t>(28832));
    rt.memory().aot_store32(ctx.gpr[2] + static_cast<std::uint32_t>(28), ctx.gpr[3]);
    ctx.set_gpr(4, ctx.gpr[16] + 0u);
    ctx.set_gpr(5, ctx.gpr[18] + 0u);
    ctx.set_gpr(6, ctx.gpr[17] + 0u);
    ctx.set_gpr(31, 0x088ECD64u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0080_entry, 80u, 145u, 0x08944AF0u>(ctx, &aot_mem) && ctx.pc == 0x088ECD64u) goto L_088ECD64;
    return;
L_088ECD64:
    ctx.set_gpr(2, rt.memory().aot_load32(ctx.gpr[17] + static_cast<std::uint32_t>(4)));
    ctx.set_gpr(2, ctx.gpr[2] + static_cast<std::uint32_t>(-1));
    rt.memory().aot_store32(ctx.gpr[17] + static_cast<std::uint32_t>(4), ctx.gpr[2]);
    ctx.set_gpr(2, ctx.gpr[2] << 10u);
    ctx.set_gpr(2, ctx.gpr[2] >> 10u);
    { const bool branch_taken = ctx.gpr[2] != 0u;
    // nop
      if (branch_taken) {
          goto L_088ECD8C;
      }
      goto L_088ECD80;
    }
L_088ECD80:
    ctx.set_gpr(4, ctx.gpr[17] + 0u);
    ctx.set_gpr(31, 0x088ECD8Cu);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0080_entry, 80u, 556u, 0x089467C8u>(ctx, &aot_mem) && ctx.pc == 0x088ECD8Cu) goto L_088ECD8C;
    return;
L_088ECD8C:
    ctx.set_gpr(4, ctx.gpr[16] + 0u);
    ctx.set_gpr(5, 2227u << 16u);
    ctx.set_gpr(5, ctx.gpr[5] + static_cast<std::uint32_t>(27040));
    ctx.set_gpr(31, 0x088ECDA0u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0080_entry, 80u, 149u, 0x08944B68u>(ctx, &aot_mem) && ctx.pc == 0x088ECDA0u) goto L_088ECDA0;
    return;
L_088ECDA0:
    ctx.set_gpr(17, ctx.gpr[2] + 0u);
    ctx.set_gpr(4, rt.memory().aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(40)));
    ctx.set_gpr(5, ctx.gpr[17] + 0u);
    ctx.set_gpr(31, 0x088ECDB4u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0072_entry, 72u, 700u, 0x08927138u>(ctx, &aot_mem) && ctx.pc == 0x088ECDB4u) goto L_088ECDB4;
    return;
L_088ECDB4:
    ctx.set_gpr(18, ctx.gpr[2] + 0u);
    ctx.set_gpr(4, ctx.gpr[17] + 0u);
    ctx.set_gpr(5, 0u + static_cast<std::uint32_t>(1));
    ctx.set_gpr(25, rt.memory().aot_load32(ctx.gpr[17] + static_cast<std::uint32_t>(0)));
    ctx.set_gpr(25, rt.memory().aot_load32(ctx.gpr[25] + static_cast<std::uint32_t>(84)));
    jump_target = ctx.gpr[25];
    ctx.set_gpr(31, 0x088ECDD0u);
    // nop
    ctx.pc = jump_target;
    if (rt.invoke_chained_call(ctx, &aot_mem) && ctx.pc == 0x088ECDD0u) goto L_088ECDD0;
    return;
L_088ECDD0:
    ctx.set_gpr(17, ctx.gpr[2] + 0u);
    ctx.set_gpr(31, 0x088ECDDCu);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0053_entry, 53u, 771u, 0x088DBFC4u>(ctx, &aot_mem) && ctx.pc == 0x088ECDDCu) goto L_088ECDDC;
    return;
L_088ECDDC:
    rt.memory().aot_store32(ctx.gpr[17] + static_cast<std::uint32_t>(56), ctx.gpr[2]);
    rt.memory().aot_store32(ctx.gpr[17] + static_cast<std::uint32_t>(52), 0u);
    ctx.set_gpr(2, 0u + static_cast<std::uint32_t>(3));
    rt.memory().aot_store8(ctx.gpr[17] + static_cast<std::uint32_t>(36), static_cast<std::uint8_t>(ctx.gpr[2]));
    ctx.set_gpr(2, 2245u << 16u);
    ctx.set_gpr(2, ctx.gpr[2] + static_cast<std::uint32_t>(28836));
    rt.memory().aot_store32(ctx.gpr[17] + static_cast<std::uint32_t>(28), ctx.gpr[2]);
    ctx.set_gpr(4, ctx.gpr[16] + 0u);
    ctx.set_gpr(5, ctx.gpr[18] + 0u);
    ctx.set_gpr(6, ctx.gpr[17] + 0u);
    ctx.set_gpr(31, 0x088ECE0Cu);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0080_entry, 80u, 145u, 0x08944AF0u>(ctx, &aot_mem) && ctx.pc == 0x088ECE0Cu) goto L_088ECE0C;
    return;
L_088ECE0C:
    ctx.set_gpr(3, rt.memory().aot_load32(ctx.gpr[17] + static_cast<std::uint32_t>(4)));
    ctx.set_gpr(3, ctx.gpr[3] + static_cast<std::uint32_t>(-1));
    rt.memory().aot_store32(ctx.gpr[17] + static_cast<std::uint32_t>(4), ctx.gpr[3]);
    ctx.set_gpr(3, ctx.gpr[3] << 10u);
    ctx.set_gpr(3, ctx.gpr[3] >> 10u);
    { const bool branch_taken = ctx.gpr[3] != 0u;
    // nop
      if (branch_taken) {
          goto L_088ECE34;
      }
      goto L_088ECE28;
    }
L_088ECE28:
    ctx.set_gpr(4, ctx.gpr[17] + 0u);
    ctx.set_gpr(31, 0x088ECE34u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0080_entry, 80u, 556u, 0x089467C8u>(ctx, &aot_mem) && ctx.pc == 0x088ECE34u) goto L_088ECE34;
    return;
L_088ECE34:
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
L_088ECE50:
    ctx.set_gpr(29, ctx.gpr[29] + static_cast<std::uint32_t>(-16));
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(12), ctx.gpr[31]);
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(8), ctx.gpr[16]);
    ctx.set_gpr(16, ctx.gpr[4] + 0u);
    ctx.set_gpr(31, 0x088ECE68u);
    // nop
    goto L_088ECFB0;
L_088ECE68:
    ctx.set_gpr(2, 2245u << 16u);
    ctx.set_gpr(4, rt.memory().aot_load32(ctx.gpr[2] + static_cast<std::uint32_t>(28840)));
    ctx.set_gpr(5, ctx.gpr[16] + 0u);
    ctx.set_gpr(31, 0x088ECE7Cu);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0080_entry, 80u, 50u, 0x089443D4u>(ctx, &aot_mem) && ctx.pc == 0x088ECE7Cu) goto L_088ECE7C;
    return;
L_088ECE7C:
    ctx.set_gpr(31, rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(12)));
    ctx.set_gpr(16, rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(8)));
    ctx.set_gpr(29, ctx.gpr[29] + static_cast<std::uint32_t>(16));
    jump_target = ctx.gpr[31];
    // nop
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_088ECE90:
    ctx.set_gpr(29, ctx.gpr[29] + static_cast<std::uint32_t>(-16));
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(12), ctx.gpr[31]);
    ctx.set_gpr(2, 2245u << 16u);
    ctx.set_gpr(2, rt.memory().aot_load32(ctx.gpr[2] + static_cast<std::uint32_t>(28840)));
    { const bool branch_taken = ctx.gpr[2] == 0u;
    // nop
      if (branch_taken) {
          goto L_088ECEBC;
      }
      goto L_088ECEA8;
    }
L_088ECEA8:
    ctx.set_gpr(2, rt.memory().aot_load32(ctx.gpr[2] + static_cast<std::uint32_t>(36)));
    ctx.set_gpr(2, ctx.gpr[2] & 4u);
    ctx.set_gpr(2, 0u < ctx.gpr[2] ? 1u : 0u);
    { const bool branch_taken = ctx.gpr[2] != 0u;
    // nop
      if (branch_taken) {
          goto L_088ECEC4;
      }
      goto L_088ECEBC;
    }
L_088ECEBC:
    ctx.set_gpr(31, 0x088ECEC4u);
    // nop
    goto L_088ECFB0;
L_088ECEC4:
    ctx.set_gpr(2, 2245u << 16u);
    ctx.set_gpr(2, rt.memory().aot_load32(ctx.gpr[2] + static_cast<std::uint32_t>(28840)));
    ctx.set_gpr(31, rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(12)));
    ctx.set_gpr(29, ctx.gpr[29] + static_cast<std::uint32_t>(16));
    jump_target = ctx.gpr[31];
    // nop
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_088ECEDC:
    ctx.set_gpr(29, ctx.gpr[29] + static_cast<std::uint32_t>(-80));
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(12), ctx.gpr[31]);
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(8), ctx.gpr[16]);
    ctx.set_gpr(4, ctx.gpr[29] + static_cast<std::uint32_t>(28));
    ctx.set_gpr(31, 0x088ECEF4u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0080_entry, 80u, 398u, 0x08945BF8u>(ctx, &aot_mem) && ctx.pc == 0x088ECEF4u) goto L_088ECEF4;
    return;
L_088ECEF4:
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(36), 0u);
    ctx.set_gpr(2, 2232u << 16u);
    ctx.set_gpr(2, ctx.gpr[2] + static_cast<std::uint32_t>(-5984));
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(28), ctx.gpr[2]);
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(56), 0u);
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(60), 0u);
    ctx.set_gpr(31, 0x088ECF14u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0064_entry, 64u, 444u, 0x08905FF0u>(ctx, &aot_mem) && ctx.pc == 0x088ECF14u) goto L_088ECF14;
    return;
L_088ECF14:
    ctx.set_gpr(2, rt.memory().aot_load32(ctx.gpr[2] + static_cast<std::uint32_t>(932)));
    ctx.set_gpr(2, ctx.gpr[2] + ctx.gpr[29]);
    ctx.set_gpr(16, rt.memory().aot_load32(ctx.gpr[2] + static_cast<std::uint32_t>(28)));
    ctx.set_gpr(2, 2232u << 16u);
    ctx.set_gpr(2, ctx.gpr[2] + static_cast<std::uint32_t>(-5984));
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(28), ctx.gpr[2]);
    ctx.set_gpr(2, rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(60)));
    ctx.set_gpr(2, 0u < ctx.gpr[2] ? 1u : 0u);
    { const bool branch_taken = ctx.gpr[2] == 0u;
    // nop
      if (branch_taken) {
          goto L_088ECF50;
      }
      goto L_088ECF3C;
    }
L_088ECF3C:
    ctx.set_gpr(4, ctx.gpr[29] + static_cast<std::uint32_t>(60));
    ctx.set_gpr(31, 0x088ECF48u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0019_entry, 19u, 781u, 0x0885315Cu>(ctx, &aot_mem) && ctx.pc == 0x088ECF48u) goto L_088ECF48;
    return;
L_088ECF48:
    ctx.set_gpr(2, 0u < ctx.gpr[2] ? 1u : 0u);
    ctx.set_gpr(2, ctx.gpr[2] ^ 1u);
    goto L_088ECF50;
L_088ECF50:
    { const bool branch_taken = ctx.gpr[2] == 0u;
    // nop
      if (branch_taken) {
          goto L_088ECF68;
      }
      goto L_088ECF58;
    }
L_088ECF58:
    ctx.set_gpr(2, rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(60)));
    ctx.set_gpr(4, ctx.gpr[2] + static_cast<std::uint32_t>(-8));
    ctx.set_gpr(31, 0x088ECF68u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0019_entry, 19u, 770u, 0x088530D0u>(ctx, &aot_mem) && ctx.pc == 0x088ECF68u) goto L_088ECF68;
    return;
L_088ECF68:
    ctx.set_gpr(4, rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(56)));
    { const bool branch_taken = ctx.gpr[4] == 0u;
    // nop
      if (branch_taken) {
          goto L_088ECF7C;
      }
      goto L_088ECF74;
    }
L_088ECF74:
    ctx.set_gpr(31, 0x088ECF7Cu);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0014_entry, 14u, 257u, 0x0883D454u>(ctx, &aot_mem) && ctx.pc == 0x088ECF7Cu) goto L_088ECF7C;
    return;
L_088ECF7C:
    ctx.set_gpr(2, 2232u << 16u);
    ctx.set_gpr(2, ctx.gpr[2] + static_cast<std::uint32_t>(-15576));
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(28), ctx.gpr[2]);
    ctx.set_gpr(4, ctx.gpr[29] + static_cast<std::uint32_t>(36));
    ctx.set_gpr(5, 0u + static_cast<std::uint32_t>(-1));
    ctx.set_gpr(31, 0x088ECF98u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0020_entry, 20u, 288u, 0x088555D0u>(ctx, &aot_mem) && ctx.pc == 0x088ECF98u) goto L_088ECF98;
    return;
L_088ECF98:
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
L_088ECFB0:
    ctx.set_gpr(29, ctx.gpr[29] + static_cast<std::uint32_t>(-16));
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(12), ctx.gpr[31]);
    ctx.set_gpr(4, 2191u << 16u);
    ctx.set_gpr(4, ctx.gpr[4] + static_cast<std::uint32_t>(-12328));
    ctx.set_gpr(31, 0x088ECFC8u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0080_entry, 80u, 286u, 0x08945508u>(ctx, &aot_mem) && ctx.pc == 0x088ECFC8u) goto L_088ECFC8;
    return;
L_088ECFC8:
    ctx.set_gpr(31, rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(12)));
    ctx.set_gpr(29, ctx.gpr[29] + static_cast<std::uint32_t>(16));
    jump_target = ctx.gpr[31];
    // nop
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_088ECFD8:
    ctx.set_gpr(29, ctx.gpr[29] + static_cast<std::uint32_t>(-32));
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(28), ctx.gpr[31]);
    ctx.set_gpr(31, 0x088ECFE8u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0052_entry, 52u, 154u, 0x088D49C4u>(ctx, &aot_mem) && ctx.pc == 0x088ECFE8u) goto L_088ECFE8;
    return;
L_088ECFE8:
    ctx.set_gpr(2, 2191u << 16u);
    ctx.set_gpr(2, ctx.gpr[2] + static_cast<std::uint32_t>(-12156));
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(0), ctx.gpr[2]);
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(4), 0u);
    ctx.set_gpr(2, 2228u << 16u);
    ctx.set_gpr(2, ctx.gpr[2] + static_cast<std::uint32_t>(-27100));
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(8), ctx.gpr[2]);
    ctx.set_gpr(4, 0u + 0u);
    ctx.set_gpr(5, 2245u << 16u);
    ctx.set_gpr(5, ctx.gpr[5] + static_cast<std::uint32_t>(28840));
    ctx.set_gpr(6, 2191u << 16u);
    ctx.set_gpr(6, ctx.gpr[6] + static_cast<std::uint32_t>(20572));
    ctx.set_gpr(7, 2191u << 16u);
    ctx.set_gpr(7, ctx.gpr[7] + static_cast<std::uint32_t>(-12172));
    ctx.set_gpr(8, 2191u << 16u);
    ctx.set_gpr(8, ctx.gpr[8] + static_cast<std::uint32_t>(-12204));
    ctx.set_gpr(9, 2228u << 16u);
    ctx.set_gpr(9, ctx.gpr[9] + static_cast<std::uint32_t>(-27088));
    ctx.set_gpr(10, 0u + static_cast<std::uint32_t>(52));
    ctx.set_gpr(11, 2191u << 16u);
    ctx.set_gpr(11, ctx.gpr[11] + static_cast<std::uint32_t>(-12580));
    ctx.set_gpr(31, 0x088ED044u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0080_entry, 80u, 294u, 0x08945594u>(ctx, &aot_mem) && ctx.pc == 0x088ED044u) goto L_088ED044;
    return;
L_088ED044:
    ctx.set_gpr(31, rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(28)));
    ctx.set_gpr(29, ctx.gpr[29] + static_cast<std::uint32_t>(32));
    jump_target = ctx.gpr[31];
    // nop
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_088ED054:
    ctx.set_gpr(29, ctx.gpr[29] + static_cast<std::uint32_t>(-16));
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(12), ctx.gpr[31]);
    ctx.set_gpr(31, 0x088ED064u);
    // nop
    goto L_088ECE90;
L_088ED064:
    ctx.set_gpr(31, rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(12)));
    ctx.set_gpr(29, ctx.gpr[29] + static_cast<std::uint32_t>(16));
    jump_target = ctx.gpr[31];
    // nop
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_088ED074:
    ctx.set_gpr(2, 2245u << 16u);
    ctx.set_gpr(2, rt.memory().aot_load32(ctx.gpr[2] + static_cast<std::uint32_t>(29856)));
    jump_target = ctx.gpr[31];
    // nop
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_088ED084:
    ctx.set_gpr(29, ctx.gpr[29] + static_cast<std::uint32_t>(-32));
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(28), ctx.gpr[31]);
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(24), ctx.gpr[19]);
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(20), ctx.gpr[18]);
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(16), ctx.gpr[17]);
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(12), ctx.gpr[16]);
    ctx.set_gpr(2, 2245u << 16u);
    ctx.set_gpr(16, rt.memory().aot_load32(ctx.gpr[2] + static_cast<std::uint32_t>(28840)));
    ctx.set_gpr(4, ctx.gpr[16] + 0u);
    ctx.set_gpr(31, 0x088ED0B0u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0080_entry, 80u, 236u, 0x089451A8u>(ctx, &aot_mem) && ctx.pc == 0x088ED0B0u) goto L_088ED0B0;
    return;
L_088ED0B0:
    ctx.set_gpr(19, ctx.gpr[2] + 0u);
    ctx.set_gpr(4, ctx.gpr[16] + 0u);
    ctx.set_gpr(5, 2228u << 16u);
    ctx.set_gpr(5, ctx.gpr[5] + static_cast<std::uint32_t>(-27068));
    ctx.set_gpr(6, 0u + static_cast<std::uint32_t>(6));
    ctx.set_gpr(31, 0x088ED0CCu);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0080_entry, 80u, 151u, 0x08944B98u>(ctx, &aot_mem) && ctx.pc == 0x088ED0CCu) goto L_088ED0CC;
    return;
L_088ED0CC:
    ctx.set_gpr(4, ctx.gpr[16] + 0u);
    ctx.set_gpr(5, ctx.gpr[19] + 0u);
    ctx.set_gpr(31, 0x088ED0DCu);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0080_entry, 80u, 148u, 0x08944B4Cu>(ctx, &aot_mem) && ctx.pc == 0x088ED0DCu) goto L_088ED0DC;
    return;
L_088ED0DC:
    ctx.set_gpr(17, ctx.gpr[2] + 0u);
    ctx.set_gpr(31, 0x088ED0E8u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0052_entry, 52u, 753u, 0x088D7138u>(ctx, &aot_mem) && ctx.pc == 0x088ED0E8u) goto L_088ED0E8;
    return;
L_088ED0E8:
    rt.memory().aot_store32(ctx.gpr[17] + static_cast<std::uint32_t>(52), ctx.gpr[2]);
    rt.memory().aot_store8(ctx.gpr[17] + static_cast<std::uint32_t>(38), static_cast<std::uint8_t>(0u));
    ctx.set_gpr(5, ctx.gpr[19] + static_cast<std::uint32_t>(1));
    ctx.set_gpr(4, ctx.gpr[16] + 0u);
    ctx.set_gpr(31, 0x088ED100u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0080_entry, 80u, 148u, 0x08944B4Cu>(ctx, &aot_mem) && ctx.pc == 0x088ED100u) goto L_088ED100;
    return;
L_088ED100:
    ctx.set_gpr(17, ctx.gpr[2] + 0u);
    ctx.set_gpr(4, ctx.gpr[17] + 0u);
    ctx.set_gpr(5, 2228u << 16u);
    ctx.set_gpr(5, ctx.gpr[5] + static_cast<std::uint32_t>(-26908));
    ctx.set_gpr(31, 0x088ED118u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0085_entry, 85u, 280u, 0x08959444u>(ctx, &aot_mem) && ctx.pc == 0x088ED118u) goto L_088ED118;
    return;
L_088ED118:
    ctx.set_gpr(2, 0u + static_cast<std::uint32_t>(1));
    rt.memory().aot_store8(ctx.gpr[17] + static_cast<std::uint32_t>(49), static_cast<std::uint8_t>(ctx.gpr[2]));
    rt.memory().aot_store8(ctx.gpr[17] + static_cast<std::uint32_t>(38), static_cast<std::uint8_t>(0u));
    ctx.set_gpr(5, ctx.gpr[19] + static_cast<std::uint32_t>(2));
    ctx.set_gpr(4, ctx.gpr[16] + 0u);
    ctx.set_gpr(31, 0x088ED134u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0080_entry, 80u, 148u, 0x08944B4Cu>(ctx, &aot_mem) && ctx.pc == 0x088ED134u) goto L_088ED134;
    return;
L_088ED134:
    rt.memory().aot_store8(ctx.gpr[2] + static_cast<std::uint32_t>(38), static_cast<std::uint8_t>(0u));
    ctx.set_gpr(5, ctx.gpr[19] + static_cast<std::uint32_t>(3));
    ctx.set_gpr(4, ctx.gpr[16] + 0u);
    ctx.set_gpr(31, 0x088ED148u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0080_entry, 80u, 148u, 0x08944B4Cu>(ctx, &aot_mem) && ctx.pc == 0x088ED148u) goto L_088ED148;
    return;
L_088ED148:
    rt.memory().aot_store8(ctx.gpr[2] + static_cast<std::uint32_t>(38), static_cast<std::uint8_t>(0u));
    ctx.set_gpr(17, rt.memory().aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(40)));
    ctx.set_gpr(4, ctx.gpr[16] + 0u);
    ctx.set_gpr(5, 2228u << 16u);
    ctx.set_gpr(5, ctx.gpr[5] + static_cast<std::uint32_t>(-26900));
    ctx.set_gpr(31, 0x088ED164u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0080_entry, 80u, 149u, 0x08944B68u>(ctx, &aot_mem) && ctx.pc == 0x088ED164u) goto L_088ED164;
    return;
L_088ED164:
    ctx.set_gpr(4, ctx.gpr[17] + 0u);
    ctx.set_gpr(5, ctx.gpr[2] + 0u);
    ctx.set_gpr(31, 0x088ED174u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0072_entry, 72u, 700u, 0x08927138u>(ctx, &aot_mem) && ctx.pc == 0x088ED174u) goto L_088ED174;
    return;
L_088ED174:
    ctx.set_gpr(18, ctx.gpr[2] + 0u);
    ctx.set_gpr(31, 0x088ED180u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0078_entry, 78u, 217u, 0x0893CDECu>(ctx, &aot_mem) && ctx.pc == 0x088ED180u) goto L_088ED180;
    return;
L_088ED180:
    ctx.set_gpr(4, rt.memory().aot_load32(ctx.gpr[2] + static_cast<std::uint32_t>(0)));
    ctx.set_gpr(31, 0x088ED18Cu);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0078_entry, 78u, 199u, 0x0893CC68u>(ctx, &aot_mem) && ctx.pc == 0x088ED18Cu) goto L_088ED18C;
    return;
L_088ED18C:
    ctx.set_gpr(4, ctx.gpr[2] + 0u);
    ctx.set_gpr(31, 0x088ED198u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0053_entry, 53u, 711u, 0x088DBB10u>(ctx, &aot_mem) && ctx.pc == 0x088ED198u) goto L_088ED198;
    return;
L_088ED198:
    ctx.set_gpr(17, ctx.gpr[2] + 0u);
    ctx.set_gpr(4, ctx.gpr[17] + 0u);
    ctx.set_gpr(5, 2228u << 16u);
    ctx.set_gpr(5, ctx.gpr[5] + static_cast<std::uint32_t>(-26900));
    ctx.set_gpr(6, 2245u << 16u);
    ctx.set_gpr(6, ctx.gpr[6] + static_cast<std::uint32_t>(28860));
    ctx.set_gpr(7, 0u + static_cast<std::uint32_t>(24));
    ctx.set_gpr(8, ctx.gpr[16] + 0u);
    ctx.set_gpr(31, 0x088ED1C0u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0079_entry, 79u, 547u, 0x0894265Cu>(ctx, &aot_mem) && ctx.pc == 0x088ED1C0u) goto L_088ED1C0;
    return;
L_088ED1C0:
    ctx.set_gpr(2, 2245u << 16u);
    ctx.set_gpr(2, rt.memory().aot_load32(ctx.gpr[2] + static_cast<std::uint32_t>(31368)));
    rt.memory().aot_store32(ctx.gpr[17] + static_cast<std::uint32_t>(52), ctx.gpr[2]);
    ctx.set_gpr(4, ctx.gpr[17] + 0u);
    ctx.set_gpr(5, 0u + 0u);
    ctx.set_gpr(31, 0x088ED1DCu);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0081_entry, 81u, 626u, 0x0894AD9Cu>(ctx, &aot_mem) && ctx.pc == 0x088ED1DCu) goto L_088ED1DC;
    return;
L_088ED1DC:
    rt.memory().aot_store8(ctx.gpr[17] + static_cast<std::uint32_t>(38), static_cast<std::uint8_t>(0u));
    ctx.set_gpr(2, 2245u << 16u);
    ctx.set_gpr(2, ctx.gpr[2] + static_cast<std::uint32_t>(28860));
    rt.memory().aot_store32(ctx.gpr[17] + static_cast<std::uint32_t>(28), ctx.gpr[2]);
    ctx.set_gpr(4, ctx.gpr[16] + 0u);
    ctx.set_gpr(5, ctx.gpr[18] + 0u);
    ctx.set_gpr(6, ctx.gpr[17] + 0u);
    ctx.set_gpr(31, 0x088ED200u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0080_entry, 80u, 145u, 0x08944AF0u>(ctx, &aot_mem) && ctx.pc == 0x088ED200u) goto L_088ED200;
    return;
L_088ED200:
    ctx.set_gpr(2, rt.memory().aot_load32(ctx.gpr[17] + static_cast<std::uint32_t>(4)));
    ctx.set_gpr(2, ctx.gpr[2] + static_cast<std::uint32_t>(-1));
    rt.memory().aot_store32(ctx.gpr[17] + static_cast<std::uint32_t>(4), ctx.gpr[2]);
    ctx.set_gpr(2, ctx.gpr[2] << 10u);
    ctx.set_gpr(2, ctx.gpr[2] >> 10u);
    { const bool branch_taken = ctx.gpr[2] != 0u;
    // nop
      if (branch_taken) {
          goto L_088ED228;
      }
      goto L_088ED21C;
    }
L_088ED21C:
    ctx.set_gpr(4, ctx.gpr[17] + 0u);
    ctx.set_gpr(31, 0x088ED228u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0080_entry, 80u, 556u, 0x089467C8u>(ctx, &aot_mem) && ctx.pc == 0x088ED228u) goto L_088ED228;
    return;
L_088ED228:
    ctx.set_gpr(5, ctx.gpr[19] + static_cast<std::uint32_t>(4));
    ctx.set_gpr(4, ctx.gpr[16] + 0u);
    ctx.set_gpr(31, 0x088ED238u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0080_entry, 80u, 148u, 0x08944B4Cu>(ctx, &aot_mem) && ctx.pc == 0x088ED238u) goto L_088ED238;
    return;
L_088ED238:
    ctx.set_gpr(4, ctx.gpr[2] + 0u);
    ctx.set_gpr(5, 0u + static_cast<std::uint32_t>(-1));
    ctx.set_gpr(31, 0x088ED248u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0072_entry, 72u, 648u, 0x08926D64u>(ctx, &aot_mem) && ctx.pc == 0x088ED248u) goto L_088ED248;
    return;
L_088ED248:
    ctx.set_gpr(5, ctx.gpr[19] + static_cast<std::uint32_t>(5));
    ctx.set_gpr(4, ctx.gpr[16] + 0u);
    ctx.set_gpr(31, 0x088ED258u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0080_entry, 80u, 148u, 0x08944B4Cu>(ctx, &aot_mem) && ctx.pc == 0x088ED258u) goto L_088ED258;
    return;
L_088ED258:
    ctx.set_gpr(4, ctx.gpr[2] + 0u);
    ctx.set_gpr(5, 0u + static_cast<std::uint32_t>(-1));
    ctx.set_gpr(31, 0x088ED268u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0072_entry, 72u, 648u, 0x08926D64u>(ctx, &aot_mem) && ctx.pc == 0x088ED268u) goto L_088ED268;
    return;
L_088ED268:
    ctx.set_gpr(4, ctx.gpr[16] + 0u);
    ctx.set_gpr(5, 2228u << 16u);
    ctx.set_gpr(5, ctx.gpr[5] + static_cast<std::uint32_t>(-26980));
    ctx.set_gpr(6, 2228u << 16u);
    ctx.set_gpr(6, ctx.gpr[6] + static_cast<std::uint32_t>(-26956));
    ctx.set_gpr(7, 2228u << 16u);
    ctx.set_gpr(7, ctx.gpr[7] + static_cast<std::uint32_t>(-26932));
    ctx.set_gpr(8, ctx.gpr[19] + 0u);
    ctx.set_gpr(31, 0x088ED290u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0080_entry, 80u, 162u, 0x08944C7Cu>(ctx, &aot_mem) && ctx.pc == 0x088ED290u) goto L_088ED290;
    return;
L_088ED290:
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
L_088ED2B0:
    ctx.set_gpr(29, ctx.gpr[29] + static_cast<std::uint32_t>(-16));
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(12), ctx.gpr[31]);
    ctx.set_gpr(2, 2245u << 16u);
    ctx.set_gpr(2, rt.memory().aot_load32(ctx.gpr[2] + static_cast<std::uint32_t>(28872)));
    { const bool branch_taken = ctx.gpr[2] == 0u;
    // nop
      if (branch_taken) {
          goto L_088ED2DC;
      }
      goto L_088ED2C8;
    }
L_088ED2C8:
    ctx.set_gpr(2, rt.memory().aot_load32(ctx.gpr[2] + static_cast<std::uint32_t>(36)));
    ctx.set_gpr(2, ctx.gpr[2] & 4u);
    ctx.set_gpr(2, 0u < ctx.gpr[2] ? 1u : 0u);
    { const bool branch_taken = ctx.gpr[2] != 0u;
    // nop
      if (branch_taken) {
          goto L_088ED2E4;
      }
      goto L_088ED2DC;
    }
L_088ED2DC:
    ctx.set_gpr(31, 0x088ED2E4u);
    // nop
    goto L_088ED340;
L_088ED2E4:
    ctx.set_gpr(2, 2245u << 16u);
    ctx.set_gpr(2, rt.memory().aot_load32(ctx.gpr[2] + static_cast<std::uint32_t>(28872)));
    ctx.set_gpr(31, rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(12)));
    ctx.set_gpr(29, ctx.gpr[29] + static_cast<std::uint32_t>(16));
    jump_target = ctx.gpr[31];
    // nop
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_088ED2FC:
    ctx.set_gpr(29, ctx.gpr[29] + static_cast<std::uint32_t>(-48));
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(12), ctx.gpr[31]);
    ctx.set_gpr(4, ctx.gpr[29] + static_cast<std::uint32_t>(28));
    ctx.set_gpr(31, 0x088ED310u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0080_entry, 80u, 398u, 0x08945BF8u>(ctx, &aot_mem) && ctx.pc == 0x088ED310u) goto L_088ED310;
    return;
L_088ED310:
    ctx.set_gpr(2, 2232u << 16u);
    ctx.set_gpr(2, ctx.gpr[2] + static_cast<std::uint32_t>(-17856));
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(28), ctx.gpr[2]);
    ctx.set_gpr(31, 0x088ED324u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0064_entry, 64u, 444u, 0x08905FF0u>(ctx, &aot_mem) && ctx.pc == 0x088ED324u) goto L_088ED324;
    return;
L_088ED324:
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
L_088ED340:
    ctx.set_gpr(29, ctx.gpr[29] + static_cast<std::uint32_t>(-16));
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(12), ctx.gpr[31]);
    ctx.set_gpr(4, 2191u << 16u);
    ctx.set_gpr(4, ctx.gpr[4] + static_cast<std::uint32_t>(-11416));
    ctx.set_gpr(31, 0x088ED358u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0080_entry, 80u, 286u, 0x08945508u>(ctx, &aot_mem) && ctx.pc == 0x088ED358u) goto L_088ED358;
    return;
L_088ED358:
    ctx.set_gpr(31, rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(12)));
    ctx.set_gpr(29, ctx.gpr[29] + static_cast<std::uint32_t>(16));
    jump_target = ctx.gpr[31];
    // nop
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_088ED368:
    ctx.set_gpr(29, ctx.gpr[29] + static_cast<std::uint32_t>(-32));
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(28), ctx.gpr[31]);
    ctx.set_gpr(31, 0x088ED378u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0052_entry, 52u, 154u, 0x088D49C4u>(ctx, &aot_mem) && ctx.pc == 0x088ED378u) goto L_088ED378;
    return;
L_088ED378:
    ctx.set_gpr(2, 2191u << 16u);
    ctx.set_gpr(2, ctx.gpr[2] + static_cast<std::uint32_t>(-11268));
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(0), ctx.gpr[2]);
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(4), 0u);
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(8), 0u);
    ctx.set_gpr(4, 0u + 0u);
    ctx.set_gpr(5, 2245u << 16u);
    ctx.set_gpr(5, ctx.gpr[5] + static_cast<std::uint32_t>(28872));
    ctx.set_gpr(6, 2191u << 16u);
    ctx.set_gpr(6, ctx.gpr[6] + static_cast<std::uint32_t>(24296));
    ctx.set_gpr(7, 2189u << 16u);
    ctx.set_gpr(7, ctx.gpr[7] + static_cast<std::uint32_t>(23152));
    ctx.set_gpr(8, 2191u << 16u);
    ctx.set_gpr(8, ctx.gpr[8] + static_cast<std::uint32_t>(-11300));
    ctx.set_gpr(9, 2228u << 16u);
    ctx.set_gpr(9, ctx.gpr[9] + static_cast<std::uint32_t>(-26892));
    ctx.set_gpr(10, 0u + static_cast<std::uint32_t>(20));
    ctx.set_gpr(11, 2191u << 16u);
    ctx.set_gpr(11, ctx.gpr[11] + static_cast<std::uint32_t>(-11524));
    ctx.set_gpr(31, 0x088ED3CCu);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0080_entry, 80u, 294u, 0x08945594u>(ctx, &aot_mem) && ctx.pc == 0x088ED3CCu) goto L_088ED3CC;
    return;
L_088ED3CC:
    ctx.set_gpr(31, rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(28)));
    ctx.set_gpr(29, ctx.gpr[29] + static_cast<std::uint32_t>(32));
    jump_target = ctx.gpr[31];
    // nop
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_088ED3DC:
    ctx.set_gpr(29, ctx.gpr[29] + static_cast<std::uint32_t>(-16));
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(12), ctx.gpr[31]);
    ctx.set_gpr(31, 0x088ED3ECu);
    // nop
    goto L_088ED2B0;
L_088ED3EC:
    ctx.set_gpr(31, rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(12)));
    ctx.set_gpr(29, ctx.gpr[29] + static_cast<std::uint32_t>(16));
    jump_target = ctx.gpr[31];
    // nop
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_088ED3FC:
    ctx.set_gpr(29, ctx.gpr[29] + static_cast<std::uint32_t>(-16));
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(12), ctx.gpr[31]);
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(8), ctx.gpr[18]);
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(4), ctx.gpr[17]);
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(0), ctx.gpr[16]);
    ctx.set_gpr(2, 2245u << 16u);
    ctx.set_gpr(17, rt.memory().aot_load32(ctx.gpr[2] + static_cast<std::uint32_t>(28872)));
    ctx.set_gpr(4, ctx.gpr[17] + 0u);
    ctx.set_gpr(5, 2227u << 16u);
    ctx.set_gpr(5, ctx.gpr[5] + static_cast<std::uint32_t>(27040));
    ctx.set_gpr(31, 0x088ED42Cu);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0080_entry, 80u, 149u, 0x08944B68u>(ctx, &aot_mem) && ctx.pc == 0x088ED42Cu) goto L_088ED42C;
    return;
L_088ED42C:
    ctx.set_gpr(16, ctx.gpr[2] + 0u);
    ctx.set_gpr(4, rt.memory().aot_load32(ctx.gpr[17] + static_cast<std::uint32_t>(40)));
    ctx.set_gpr(5, ctx.gpr[16] + 0u);
    ctx.set_gpr(31, 0x088ED440u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0072_entry, 72u, 700u, 0x08927138u>(ctx, &aot_mem) && ctx.pc == 0x088ED440u) goto L_088ED440;
    return;
L_088ED440:
    ctx.set_gpr(18, ctx.gpr[2] + 0u);
    ctx.set_gpr(4, ctx.gpr[16] + 0u);
    ctx.set_gpr(5, 0u + static_cast<std::uint32_t>(1));
    ctx.set_gpr(25, rt.memory().aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(0)));
    ctx.set_gpr(25, rt.memory().aot_load32(ctx.gpr[25] + static_cast<std::uint32_t>(84)));
    jump_target = ctx.gpr[25];
    ctx.set_gpr(31, 0x088ED45Cu);
    // nop
    ctx.pc = jump_target;
    if (rt.invoke_chained_call(ctx, &aot_mem) && ctx.pc == 0x088ED45Cu) goto L_088ED45C;
    return;
L_088ED45C:
    ctx.set_gpr(16, ctx.gpr[2] + 0u);
    ctx.set_gpr(31, 0x088ED468u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0053_entry, 53u, 771u, 0x088DBFC4u>(ctx, &aot_mem) && ctx.pc == 0x088ED468u) goto L_088ED468;
    return;
L_088ED468:
    rt.memory().aot_store32(ctx.gpr[16] + static_cast<std::uint32_t>(56), ctx.gpr[2]);
    rt.memory().aot_store32(ctx.gpr[16] + static_cast<std::uint32_t>(52), 0u);
    rt.memory().aot_store8(ctx.gpr[16] + static_cast<std::uint32_t>(62), static_cast<std::uint8_t>(0u));
    ctx.set_gpr(2, 2245u << 16u);
    ctx.set_gpr(2, ctx.gpr[2] + static_cast<std::uint32_t>(28876));
    rt.memory().aot_store32(ctx.gpr[16] + static_cast<std::uint32_t>(28), ctx.gpr[2]);
    ctx.set_gpr(4, ctx.gpr[17] + 0u);
    ctx.set_gpr(5, ctx.gpr[18] + 0u);
    ctx.set_gpr(6, ctx.gpr[16] + 0u);
    ctx.set_gpr(31, 0x088ED494u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0080_entry, 80u, 145u, 0x08944AF0u>(ctx, &aot_mem) && ctx.pc == 0x088ED494u) goto L_088ED494;
    return;
L_088ED494:
    ctx.set_gpr(3, rt.memory().aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(4)));
    ctx.set_gpr(3, ctx.gpr[3] + static_cast<std::uint32_t>(-1));
    rt.memory().aot_store32(ctx.gpr[16] + static_cast<std::uint32_t>(4), ctx.gpr[3]);
    ctx.set_gpr(3, ctx.gpr[3] << 10u);
    ctx.set_gpr(3, ctx.gpr[3] >> 10u);
    { const bool branch_taken = ctx.gpr[3] != 0u;
    // nop
      if (branch_taken) {
          goto L_088ED4BC;
      }
      goto L_088ED4B0;
    }
L_088ED4B0:
    ctx.set_gpr(4, ctx.gpr[16] + 0u);
    ctx.set_gpr(31, 0x088ED4BCu);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0080_entry, 80u, 556u, 0x089467C8u>(ctx, &aot_mem) && ctx.pc == 0x088ED4BCu) goto L_088ED4BC;
    return;
L_088ED4BC:
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
L_088ED4D8:
    ctx.set_gpr(29, ctx.gpr[29] + static_cast<std::uint32_t>(-16));
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(12), ctx.gpr[31]);
    ctx.set_gpr(2, 2245u << 16u);
    ctx.set_gpr(2, rt.memory().aot_load32(ctx.gpr[2] + static_cast<std::uint32_t>(28880)));
    { const bool branch_taken = ctx.gpr[2] == 0u;
    // nop
      if (branch_taken) {
          goto L_088ED504;
      }
      goto L_088ED4F0;
    }
L_088ED4F0:
    ctx.set_gpr(2, rt.memory().aot_load32(ctx.gpr[2] + static_cast<std::uint32_t>(36)));
    ctx.set_gpr(2, ctx.gpr[2] & 4u);
    ctx.set_gpr(2, 0u < ctx.gpr[2] ? 1u : 0u);
    { const bool branch_taken = ctx.gpr[2] != 0u;
    // nop
      if (branch_taken) {
          goto L_088ED50C;
      }
      goto L_088ED504;
    }
L_088ED504:
    ctx.set_gpr(31, 0x088ED50Cu);
    // nop
    goto L_088ED5B8;
L_088ED50C:
    ctx.set_gpr(2, 2245u << 16u);
    ctx.set_gpr(2, rt.memory().aot_load32(ctx.gpr[2] + static_cast<std::uint32_t>(28880)));
    ctx.set_gpr(31, rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(12)));
    ctx.set_gpr(29, ctx.gpr[29] + static_cast<std::uint32_t>(16));
    jump_target = ctx.gpr[31];
    // nop
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_088ED524:
    ctx.set_gpr(29, ctx.gpr[29] + static_cast<std::uint32_t>(-48));
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(12), ctx.gpr[31]);
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(8), ctx.gpr[16]);
    ctx.set_gpr(4, ctx.gpr[29] + static_cast<std::uint32_t>(24));
    ctx.set_gpr(31, 0x088ED53Cu);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0080_entry, 80u, 398u, 0x08945BF8u>(ctx, &aot_mem) && ctx.pc == 0x088ED53Cu) goto L_088ED53C;
    return;
L_088ED53C:
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(32), 0u);
    ctx.set_gpr(2, 2232u << 16u);
    ctx.set_gpr(2, ctx.gpr[2] + static_cast<std::uint32_t>(-5700));
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(24), ctx.gpr[2]);
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(44), 0u);
    ctx.set_gpr(31, 0x088ED558u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0064_entry, 64u, 444u, 0x08905FF0u>(ctx, &aot_mem) && ctx.pc == 0x088ED558u) goto L_088ED558;
    return;
L_088ED558:
    ctx.set_gpr(2, rt.memory().aot_load32(ctx.gpr[2] + static_cast<std::uint32_t>(932)));
    ctx.set_gpr(2, ctx.gpr[2] + ctx.gpr[29]);
    ctx.set_gpr(16, rt.memory().aot_load32(ctx.gpr[2] + static_cast<std::uint32_t>(24)));
    ctx.set_gpr(2, 2232u << 16u);
    ctx.set_gpr(2, ctx.gpr[2] + static_cast<std::uint32_t>(-5700));
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(24), ctx.gpr[2]);
    ctx.set_gpr(4, rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(44)));
    { const bool branch_taken = ctx.gpr[4] == 0u;
    // nop
      if (branch_taken) {
          goto L_088ED584;
      }
      goto L_088ED57C;
    }
L_088ED57C:
    ctx.set_gpr(31, 0x088ED584u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0014_entry, 14u, 257u, 0x0883D454u>(ctx, &aot_mem) && ctx.pc == 0x088ED584u) goto L_088ED584;
    return;
L_088ED584:
    ctx.set_gpr(2, 2232u << 16u);
    ctx.set_gpr(2, ctx.gpr[2] + static_cast<std::uint32_t>(-15576));
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(24), ctx.gpr[2]);
    ctx.set_gpr(4, ctx.gpr[29] + static_cast<std::uint32_t>(32));
    ctx.set_gpr(5, 0u + static_cast<std::uint32_t>(-1));
    ctx.set_gpr(31, 0x088ED5A0u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0020_entry, 20u, 288u, 0x088555D0u>(ctx, &aot_mem) && ctx.pc == 0x088ED5A0u) goto L_088ED5A0;
    return;
L_088ED5A0:
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
L_088ED5B8:
    ctx.set_gpr(29, ctx.gpr[29] + static_cast<std::uint32_t>(-16));
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(12), ctx.gpr[31]);
    ctx.set_gpr(4, 2191u << 16u);
    ctx.set_gpr(4, ctx.gpr[4] + static_cast<std::uint32_t>(-10784));
    ctx.set_gpr(31, 0x088ED5D0u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0080_entry, 80u, 286u, 0x08945508u>(ctx, &aot_mem) && ctx.pc == 0x088ED5D0u) goto L_088ED5D0;
    return;
L_088ED5D0:
    ctx.set_gpr(31, rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(12)));
    ctx.set_gpr(29, ctx.gpr[29] + static_cast<std::uint32_t>(16));
    jump_target = ctx.gpr[31];
    // nop
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_088ED5E0:
    ctx.set_gpr(29, ctx.gpr[29] + static_cast<std::uint32_t>(-32));
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(28), ctx.gpr[31]);
    ctx.set_gpr(31, 0x088ED5F0u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0052_entry, 52u, 154u, 0x088D49C4u>(ctx, &aot_mem) && ctx.pc == 0x088ED5F0u) goto L_088ED5F0;
    return;
L_088ED5F0:
    ctx.set_gpr(2, 2191u << 16u);
    ctx.set_gpr(2, ctx.gpr[2] + static_cast<std::uint32_t>(-10628));
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(0), ctx.gpr[2]);
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(4), 0u);
    ctx.set_gpr(2, 2228u << 16u);
    ctx.set_gpr(2, ctx.gpr[2] + static_cast<std::uint32_t>(-26864));
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(8), ctx.gpr[2]);
    ctx.set_gpr(4, 0u + 0u);
    ctx.set_gpr(5, 2245u << 16u);
    ctx.set_gpr(5, ctx.gpr[5] + static_cast<std::uint32_t>(28880));
    ctx.set_gpr(6, 2191u << 16u);
    ctx.set_gpr(6, ctx.gpr[6] + static_cast<std::uint32_t>(4924));
    ctx.set_gpr(7, 2187u << 16u);
    ctx.set_gpr(7, ctx.gpr[7] + static_cast<std::uint32_t>(-6348));
    ctx.set_gpr(8, 2191u << 16u);
    ctx.set_gpr(8, ctx.gpr[8] + static_cast<std::uint32_t>(-10660));
    ctx.set_gpr(9, 2228u << 16u);
    ctx.set_gpr(9, ctx.gpr[9] + static_cast<std::uint32_t>(-26856));
    ctx.set_gpr(10, 0u + static_cast<std::uint32_t>(24));
    ctx.set_gpr(11, 2191u << 16u);
    ctx.set_gpr(11, ctx.gpr[11] + static_cast<std::uint32_t>(-10972));
    ctx.set_gpr(31, 0x088ED64Cu);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0080_entry, 80u, 294u, 0x08945594u>(ctx, &aot_mem) && ctx.pc == 0x088ED64Cu) goto L_088ED64C;
    return;
L_088ED64C:
    ctx.set_gpr(31, rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(28)));
    ctx.set_gpr(29, ctx.gpr[29] + static_cast<std::uint32_t>(32));
    jump_target = ctx.gpr[31];
    // nop
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_088ED65C:
    ctx.set_gpr(29, ctx.gpr[29] + static_cast<std::uint32_t>(-16));
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(12), ctx.gpr[31]);
    ctx.set_gpr(31, 0x088ED66Cu);
    // nop
    goto L_088ED4D8;
L_088ED66C:
    ctx.set_gpr(31, rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(12)));
    ctx.set_gpr(29, ctx.gpr[29] + static_cast<std::uint32_t>(16));
    jump_target = ctx.gpr[31];
    // nop
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_088ED67C:
    ctx.set_gpr(29, ctx.gpr[29] + static_cast<std::uint32_t>(-16));
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(12), ctx.gpr[31]);
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(8), ctx.gpr[18]);
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(4), ctx.gpr[17]);
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(0), ctx.gpr[16]);
    ctx.set_gpr(2, 2245u << 16u);
    ctx.set_gpr(17, rt.memory().aot_load32(ctx.gpr[2] + static_cast<std::uint32_t>(28880)));
    ctx.set_gpr(4, ctx.gpr[17] + 0u);
    ctx.set_gpr(31, 0x088ED6A4u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0080_entry, 80u, 236u, 0x089451A8u>(ctx, &aot_mem) && ctx.pc == 0x088ED6A4u) goto L_088ED6A4;
    return;
L_088ED6A4:
    ctx.set_gpr(18, ctx.gpr[2] + 0u);
    ctx.set_gpr(4, ctx.gpr[17] + 0u);
    ctx.set_gpr(5, 2228u << 16u);
    ctx.set_gpr(5, ctx.gpr[5] + static_cast<std::uint32_t>(-26836));
    ctx.set_gpr(6, 0u + static_cast<std::uint32_t>(1));
    ctx.set_gpr(31, 0x088ED6C0u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0080_entry, 80u, 151u, 0x08944B98u>(ctx, &aot_mem) && ctx.pc == 0x088ED6C0u) goto L_088ED6C0;
    return;
L_088ED6C0:
    ctx.set_gpr(4, ctx.gpr[17] + 0u);
    ctx.set_gpr(5, ctx.gpr[18] + 0u);
    ctx.set_gpr(31, 0x088ED6D0u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0080_entry, 80u, 148u, 0x08944B4Cu>(ctx, &aot_mem) && ctx.pc == 0x088ED6D0u) goto L_088ED6D0;
    return;
L_088ED6D0:
    ctx.set_gpr(16, ctx.gpr[2] + 0u);
    ctx.set_gpr(31, 0x088ED6DCu);
    // nop
    goto L_088ED9B0;
L_088ED6DC:
    rt.memory().aot_store32(ctx.gpr[16] + static_cast<std::uint32_t>(52), ctx.gpr[2]);
    ctx.set_gpr(2, 0u + static_cast<std::uint32_t>(1));
    rt.memory().aot_store8(ctx.gpr[16] + static_cast<std::uint32_t>(48), static_cast<std::uint8_t>(ctx.gpr[2]));
    ctx.set_gpr(4, ctx.gpr[17] + 0u);
    ctx.set_gpr(5, 2228u << 16u);
    ctx.set_gpr(5, ctx.gpr[5] + static_cast<std::uint32_t>(-26820));
    ctx.set_gpr(6, 2228u << 16u);
    ctx.set_gpr(6, ctx.gpr[6] + static_cast<std::uint32_t>(-26816));
    ctx.set_gpr(7, 2228u << 16u);
    ctx.set_gpr(7, ctx.gpr[7] + static_cast<std::uint32_t>(-26812));
    ctx.set_gpr(8, ctx.gpr[18] + 0u);
    ctx.set_gpr(31, 0x088ED710u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0080_entry, 80u, 162u, 0x08944C7Cu>(ctx, &aot_mem) && ctx.pc == 0x088ED710u) goto L_088ED710;
    return;
L_088ED710:
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
L_088ED72C:
    ctx.set_gpr(29, ctx.gpr[29] + static_cast<std::uint32_t>(-16));
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(12), ctx.gpr[31]);
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(8), ctx.gpr[16]);
    ctx.set_gpr(16, ctx.gpr[4] + 0u);
    ctx.set_gpr(31, 0x088ED744u);
    // nop
    goto L_088ED854;
L_088ED744:
    ctx.set_gpr(2, 2245u << 16u);
    ctx.set_gpr(4, rt.memory().aot_load32(ctx.gpr[2] + static_cast<std::uint32_t>(28888)));
    ctx.set_gpr(5, ctx.gpr[16] + 0u);
    ctx.set_gpr(31, 0x088ED758u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0080_entry, 80u, 50u, 0x089443D4u>(ctx, &aot_mem) && ctx.pc == 0x088ED758u) goto L_088ED758;
    return;
L_088ED758:
    ctx.set_gpr(31, rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(12)));
    ctx.set_gpr(16, rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(8)));
    ctx.set_gpr(29, ctx.gpr[29] + static_cast<std::uint32_t>(16));
    jump_target = ctx.gpr[31];
    // nop
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_088ED76C:
    ctx.set_gpr(29, ctx.gpr[29] + static_cast<std::uint32_t>(-16));
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(12), ctx.gpr[31]);
    ctx.set_gpr(2, 2245u << 16u);
    ctx.set_gpr(2, rt.memory().aot_load32(ctx.gpr[2] + static_cast<std::uint32_t>(28888)));
    { const bool branch_taken = ctx.gpr[2] == 0u;
    // nop
      if (branch_taken) {
          goto L_088ED798;
      }
      goto L_088ED784;
    }
L_088ED784:
    ctx.set_gpr(2, rt.memory().aot_load32(ctx.gpr[2] + static_cast<std::uint32_t>(36)));
    ctx.set_gpr(2, ctx.gpr[2] & 4u);
    ctx.set_gpr(2, 0u < ctx.gpr[2] ? 1u : 0u);
    { const bool branch_taken = ctx.gpr[2] != 0u;
    // nop
      if (branch_taken) {
          goto L_088ED7A0;
      }
      goto L_088ED798;
    }
L_088ED798:
    ctx.set_gpr(31, 0x088ED7A0u);
    // nop
    goto L_088ED854;
L_088ED7A0:
    ctx.set_gpr(2, 2245u << 16u);
    ctx.set_gpr(2, rt.memory().aot_load32(ctx.gpr[2] + static_cast<std::uint32_t>(28888)));
    ctx.set_gpr(31, rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(12)));
    ctx.set_gpr(29, ctx.gpr[29] + static_cast<std::uint32_t>(16));
    jump_target = ctx.gpr[31];
    // nop
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_088ED7B8:
    ctx.set_gpr(29, ctx.gpr[29] + static_cast<std::uint32_t>(-32));
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(12), ctx.gpr[31]);
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(8), ctx.gpr[16]);
    ctx.set_gpr(4, ctx.gpr[29] + static_cast<std::uint32_t>(20));
    ctx.set_gpr(31, 0x088ED7D0u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0080_entry, 80u, 398u, 0x08945BF8u>(ctx, &aot_mem) && ctx.pc == 0x088ED7D0u) goto L_088ED7D0;
    return;
L_088ED7D0:
    ctx.set_gpr(2, 2232u << 16u);
    ctx.set_gpr(2, ctx.gpr[2] + static_cast<std::uint32_t>(-15576));
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(20), ctx.gpr[2]);
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(28), 0u);
    ctx.set_gpr(31, 0x088ED7E8u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0064_entry, 64u, 444u, 0x08905FF0u>(ctx, &aot_mem) && ctx.pc == 0x088ED7E8u) goto L_088ED7E8;
    return;
L_088ED7E8:
    ctx.set_gpr(2, rt.memory().aot_load32(ctx.gpr[2] + static_cast<std::uint32_t>(932)));
    ctx.set_gpr(2, ctx.gpr[2] + ctx.gpr[29]);
    ctx.set_gpr(16, rt.memory().aot_load32(ctx.gpr[2] + static_cast<std::uint32_t>(20)));
    ctx.set_gpr(2, 2232u << 16u);
    ctx.set_gpr(2, ctx.gpr[2] + static_cast<std::uint32_t>(-15576));
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(20), ctx.gpr[2]);
    ctx.set_gpr(2, rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(28)));
    ctx.set_gpr(2, 0u < ctx.gpr[2] ? 1u : 0u);
    { const bool branch_taken = ctx.gpr[2] == 0u;
    // nop
      if (branch_taken) {
          goto L_088ED824;
      }
      goto L_088ED810;
    }
L_088ED810:
    ctx.set_gpr(4, ctx.gpr[29] + static_cast<std::uint32_t>(28));
    ctx.set_gpr(31, 0x088ED81Cu);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0019_entry, 19u, 781u, 0x0885315Cu>(ctx, &aot_mem) && ctx.pc == 0x088ED81Cu) goto L_088ED81C;
    return;
L_088ED81C:
    ctx.set_gpr(2, 0u < ctx.gpr[2] ? 1u : 0u);
    ctx.set_gpr(2, ctx.gpr[2] ^ 1u);
    goto L_088ED824;
L_088ED824:
    { const bool branch_taken = ctx.gpr[2] == 0u;
    // nop
      if (branch_taken) {
          goto L_088ED83C;
      }
      goto L_088ED82C;
    }
L_088ED82C:
    ctx.set_gpr(2, rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(28)));
    ctx.set_gpr(4, ctx.gpr[2] + static_cast<std::uint32_t>(-8));
    ctx.set_gpr(31, 0x088ED83Cu);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0019_entry, 19u, 770u, 0x088530D0u>(ctx, &aot_mem) && ctx.pc == 0x088ED83Cu) goto L_088ED83C;
    return;
L_088ED83C:
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
L_088ED854:
    ctx.set_gpr(29, ctx.gpr[29] + static_cast<std::uint32_t>(-16));
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(12), ctx.gpr[31]);
    ctx.set_gpr(4, 2191u << 16u);
    ctx.set_gpr(4, ctx.gpr[4] + static_cast<std::uint32_t>(-10116));
    ctx.set_gpr(31, 0x088ED86Cu);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0080_entry, 80u, 286u, 0x08945508u>(ctx, &aot_mem) && ctx.pc == 0x088ED86Cu) goto L_088ED86C;
    return;
L_088ED86C:
    ctx.set_gpr(31, rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(12)));
    ctx.set_gpr(29, ctx.gpr[29] + static_cast<std::uint32_t>(16));
    jump_target = ctx.gpr[31];
    // nop
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_088ED87C:
    ctx.set_gpr(29, ctx.gpr[29] + static_cast<std::uint32_t>(-32));
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(28), ctx.gpr[31]);
    ctx.set_gpr(31, 0x088ED88Cu);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0052_entry, 52u, 154u, 0x088D49C4u>(ctx, &aot_mem) && ctx.pc == 0x088ED88Cu) goto L_088ED88C;
    return;
L_088ED88C:
    ctx.set_gpr(2, 2191u << 16u);
    ctx.set_gpr(2, ctx.gpr[2] + static_cast<std::uint32_t>(-9968));
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(0), ctx.gpr[2]);
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(4), 0u);
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(8), 0u);
    ctx.set_gpr(4, 0u + 0u);
    ctx.set_gpr(5, 2245u << 16u);
    ctx.set_gpr(5, ctx.gpr[5] + static_cast<std::uint32_t>(28888));
    ctx.set_gpr(6, 2196u << 16u);
    ctx.set_gpr(6, ctx.gpr[6] + static_cast<std::uint32_t>(25520));
    ctx.set_gpr(7, 2188u << 16u);
    ctx.set_gpr(7, ctx.gpr[7] + static_cast<std::uint32_t>(-27092));
    ctx.set_gpr(8, 2191u << 16u);
    ctx.set_gpr(8, ctx.gpr[8] + static_cast<std::uint32_t>(-10000));
    ctx.set_gpr(9, 2228u << 16u);
    ctx.set_gpr(9, ctx.gpr[9] + static_cast<std::uint32_t>(-26808));
    ctx.set_gpr(10, 0u + static_cast<std::uint32_t>(12));
    ctx.set_gpr(11, 2191u << 16u);
    ctx.set_gpr(11, ctx.gpr[11] + static_cast<std::uint32_t>(-10312));
    ctx.set_gpr(31, 0x088ED8E0u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0080_entry, 80u, 294u, 0x08945594u>(ctx, &aot_mem) && ctx.pc == 0x088ED8E0u) goto L_088ED8E0;
    return;
L_088ED8E0:
    ctx.set_gpr(31, rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(28)));
    ctx.set_gpr(29, ctx.gpr[29] + static_cast<std::uint32_t>(32));
    jump_target = ctx.gpr[31];
    // nop
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_088ED8F0:
    ctx.set_gpr(29, ctx.gpr[29] + static_cast<std::uint32_t>(-16));
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(12), ctx.gpr[31]);
    ctx.set_gpr(31, 0x088ED900u);
    // nop
    goto L_088ED76C;
L_088ED900:
    ctx.set_gpr(31, rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(12)));
    ctx.set_gpr(29, ctx.gpr[29] + static_cast<std::uint32_t>(16));
    jump_target = ctx.gpr[31];
    // nop
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_088ED910:
    ctx.set_gpr(29, ctx.gpr[29] + static_cast<std::uint32_t>(-16));
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(12), ctx.gpr[31]);
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(8), ctx.gpr[17]);
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(4), ctx.gpr[16]);
    ctx.set_gpr(2, 2245u << 16u);
    ctx.set_gpr(16, rt.memory().aot_load32(ctx.gpr[2] + static_cast<std::uint32_t>(28888)));
    ctx.set_gpr(4, ctx.gpr[16] + 0u);
    ctx.set_gpr(31, 0x088ED934u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0080_entry, 80u, 236u, 0x089451A8u>(ctx, &aot_mem) && ctx.pc == 0x088ED934u) goto L_088ED934;
    return;
L_088ED934:
    ctx.set_gpr(17, ctx.gpr[2] + 0u);
    ctx.set_gpr(4, ctx.gpr[16] + 0u);
    ctx.set_gpr(5, 2228u << 16u);
    ctx.set_gpr(5, ctx.gpr[5] + static_cast<std::uint32_t>(-26792));
    ctx.set_gpr(6, 0u + static_cast<std::uint32_t>(1));
    ctx.set_gpr(31, 0x088ED950u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0080_entry, 80u, 151u, 0x08944B98u>(ctx, &aot_mem) && ctx.pc == 0x088ED950u) goto L_088ED950;
    return;
L_088ED950:
    ctx.set_gpr(4, ctx.gpr[16] + 0u);
    ctx.set_gpr(5, ctx.gpr[17] + 0u);
    ctx.set_gpr(31, 0x088ED960u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0080_entry, 80u, 148u, 0x08944B4Cu>(ctx, &aot_mem) && ctx.pc == 0x088ED960u) goto L_088ED960;
    return;
L_088ED960:
    ctx.set_gpr(4, ctx.gpr[2] + 0u);
    ctx.set_gpr(5, 0u + 0u);
    ctx.set_gpr(31, 0x088ED970u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0085_entry, 85u, 280u, 0x08959444u>(ctx, &aot_mem) && ctx.pc == 0x088ED970u) goto L_088ED970;
    return;
L_088ED970:
    ctx.set_gpr(4, ctx.gpr[16] + 0u);
    ctx.set_gpr(5, 2228u << 16u);
    ctx.set_gpr(5, ctx.gpr[5] + static_cast<std::uint32_t>(-26788));
    ctx.set_gpr(6, 2228u << 16u);
    ctx.set_gpr(6, ctx.gpr[6] + static_cast<std::uint32_t>(-26784));
    ctx.set_gpr(7, 2228u << 16u);
    ctx.set_gpr(7, ctx.gpr[7] + static_cast<std::uint32_t>(-26780));
    ctx.set_gpr(8, ctx.gpr[17] + 0u);
    ctx.set_gpr(31, 0x088ED998u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0080_entry, 80u, 162u, 0x08944C7Cu>(ctx, &aot_mem) && ctx.pc == 0x088ED998u) goto L_088ED998;
    return;
L_088ED998:
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
L_088ED9B0:
    ctx.set_gpr(29, ctx.gpr[29] + static_cast<std::uint32_t>(-16));
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(12), ctx.gpr[31]);
    ctx.set_gpr(2, 2245u << 16u);
    ctx.set_gpr(2, rt.memory().aot_load32(ctx.gpr[2] + static_cast<std::uint32_t>(28896)));
    { const bool branch_taken = ctx.gpr[2] != 0u;
    // nop
      if (branch_taken) {
          goto L_088ED9F0;
      }
      goto L_088ED9C8;
    }
L_088ED9C8:
    ctx.set_gpr(31, 0x088ED9D0u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0078_entry, 78u, 217u, 0x0893CDECu>(ctx, &aot_mem) && ctx.pc == 0x088ED9D0u) goto L_088ED9D0;
    return;
L_088ED9D0:
    ctx.set_gpr(4, rt.memory().aot_load32(ctx.gpr[2] + static_cast<std::uint32_t>(0)));
    ctx.set_gpr(31, 0x088ED9DCu);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0078_entry, 78u, 199u, 0x0893CC68u>(ctx, &aot_mem) && ctx.pc == 0x088ED9DCu) goto L_088ED9DC;
    return;
L_088ED9DC:
    ctx.set_gpr(4, ctx.gpr[2] + 0u);
    ctx.set_gpr(31, 0x088ED9E8u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0052_entry, 52u, 732u, 0x088D6FE8u>(ctx, &aot_mem) && ctx.pc == 0x088ED9E8u) goto L_088ED9E8;
    return;
L_088ED9E8:
    ctx.set_gpr(3, 2245u << 16u);
    rt.memory().aot_store32(ctx.gpr[3] + static_cast<std::uint32_t>(28896), ctx.gpr[2]);
    goto L_088ED9F0;
L_088ED9F0:
    ctx.set_gpr(2, 2245u << 16u);
    ctx.set_gpr(2, rt.memory().aot_load32(ctx.gpr[2] + static_cast<std::uint32_t>(28896)));
    ctx.set_gpr(31, rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(12)));
    ctx.set_gpr(29, ctx.gpr[29] + static_cast<std::uint32_t>(16));
    jump_target = ctx.gpr[31];
    // nop
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_088EDA08:
    ctx.set_gpr(29, ctx.gpr[29] + static_cast<std::uint32_t>(-16));
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(12), ctx.gpr[31]);
    ctx.set_gpr(2, 2245u << 16u);
    ctx.set_gpr(2, rt.memory().aot_load32(ctx.gpr[2] + static_cast<std::uint32_t>(28896)));
    { const bool branch_taken = ctx.gpr[2] == 0u;
    // nop
      if (branch_taken) {
          goto L_088EDA34;
      }
      goto L_088EDA20;
    }
L_088EDA20:
    ctx.set_gpr(2, rt.memory().aot_load32(ctx.gpr[2] + static_cast<std::uint32_t>(36)));
    ctx.set_gpr(2, ctx.gpr[2] & 4u);
    ctx.set_gpr(2, 0u < ctx.gpr[2] ? 1u : 0u);
    { const bool branch_taken = ctx.gpr[2] != 0u;
    // nop
      if (branch_taken) {
          goto L_088EDA3C;
      }
      goto L_088EDA34;
    }
L_088EDA34:
    ctx.set_gpr(31, 0x088EDA3Cu);
    // nop
    goto L_088EDA98;
L_088EDA3C:
    ctx.set_gpr(2, 2245u << 16u);
    ctx.set_gpr(2, rt.memory().aot_load32(ctx.gpr[2] + static_cast<std::uint32_t>(28896)));
    ctx.set_gpr(31, rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(12)));
    ctx.set_gpr(29, ctx.gpr[29] + static_cast<std::uint32_t>(16));
    jump_target = ctx.gpr[31];
    // nop
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_088EDA54:
    ctx.set_gpr(29, ctx.gpr[29] + static_cast<std::uint32_t>(-48));
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(12), ctx.gpr[31]);
    ctx.set_gpr(4, ctx.gpr[29] + static_cast<std::uint32_t>(28));
    ctx.set_gpr(31, 0x088EDA68u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0042_entry, 42u, 574u, 0x088ADBE0u>(ctx, &aot_mem) && ctx.pc == 0x088EDA68u) goto L_088EDA68;
    return;
L_088EDA68:
    ctx.set_gpr(2, 2232u << 16u);
    ctx.set_gpr(2, ctx.gpr[2] + static_cast<std::uint32_t>(10736));
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(28), ctx.gpr[2]);
    ctx.set_gpr(31, 0x088EDA7Cu);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0064_entry, 64u, 444u, 0x08905FF0u>(ctx, &aot_mem) && ctx.pc == 0x088EDA7Cu) goto L_088EDA7C;
    return;
L_088EDA7C:
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
L_088EDA98:
    ctx.set_gpr(29, ctx.gpr[29] + static_cast<std::uint32_t>(-16));
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(12), ctx.gpr[31]);
    ctx.set_gpr(4, 2191u << 16u);
    ctx.set_gpr(4, ctx.gpr[4] + static_cast<std::uint32_t>(-9536));
    ctx.set_gpr(31, 0x088EDAB0u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0080_entry, 80u, 286u, 0x08945508u>(ctx, &aot_mem) && ctx.pc == 0x088EDAB0u) goto L_088EDAB0;
    return;
L_088EDAB0:
    ctx.set_gpr(31, rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(12)));
    ctx.set_gpr(29, ctx.gpr[29] + static_cast<std::uint32_t>(16));
    jump_target = ctx.gpr[31];
    // nop
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_088EDAC0:
    ctx.set_gpr(29, ctx.gpr[29] + static_cast<std::uint32_t>(-32));
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(28), ctx.gpr[31]);
    ctx.set_gpr(31, 0x088EDAD0u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0052_entry, 52u, 154u, 0x088D49C4u>(ctx, &aot_mem) && ctx.pc == 0x088EDAD0u) goto L_088EDAD0;
    return;
L_088EDAD0:
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(0), 0u);
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(4), 0u);
    ctx.set_gpr(2, 2228u << 16u);
    ctx.set_gpr(2, ctx.gpr[2] + static_cast<std::uint32_t>(-26776));
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(8), ctx.gpr[2]);
    ctx.set_gpr(4, 0u + 0u);
    ctx.set_gpr(5, 2245u << 16u);
    ctx.set_gpr(5, ctx.gpr[5] + static_cast<std::uint32_t>(28896));
    ctx.set_gpr(6, 2191u << 16u);
    ctx.set_gpr(6, ctx.gpr[6] + static_cast<std::uint32_t>(-13396));
    ctx.set_gpr(7, 2187u << 16u);
    ctx.set_gpr(7, ctx.gpr[7] + static_cast<std::uint32_t>(-9000));
    ctx.set_gpr(8, 2191u << 16u);
    ctx.set_gpr(8, ctx.gpr[8] + static_cast<std::uint32_t>(-9420));
    ctx.set_gpr(9, 2228u << 16u);
    ctx.set_gpr(9, ctx.gpr[9] + static_cast<std::uint32_t>(-26768));
    ctx.set_gpr(10, 0u + static_cast<std::uint32_t>(20));
    ctx.set_gpr(11, 2191u << 16u);
    ctx.set_gpr(11, ctx.gpr[11] + static_cast<std::uint32_t>(-9644));
    ctx.set_gpr(31, 0x088EDB24u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0080_entry, 80u, 294u, 0x08945594u>(ctx, &aot_mem) && ctx.pc == 0x088EDB24u) goto L_088EDB24;
    return;
L_088EDB24:
    ctx.set_gpr(31, rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(28)));
    ctx.set_gpr(29, ctx.gpr[29] + static_cast<std::uint32_t>(32));
    jump_target = ctx.gpr[31];
    // nop
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_088EDB34:
    ctx.set_gpr(29, ctx.gpr[29] + static_cast<std::uint32_t>(-16));
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(12), ctx.gpr[31]);
    ctx.set_gpr(31, 0x088EDB44u);
    // nop
    goto L_088EDA08;
L_088EDB44:
    ctx.set_gpr(31, rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(12)));
    ctx.set_gpr(29, ctx.gpr[29] + static_cast<std::uint32_t>(16));
    jump_target = ctx.gpr[31];
    // nop
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_088EDB54:
    ctx.set_gpr(29, ctx.gpr[29] + static_cast<std::uint32_t>(-16));
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(12), ctx.gpr[31]);
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(8), ctx.gpr[16]);
    ctx.set_gpr(16, ctx.gpr[4] + 0u);
    ctx.set_gpr(31, 0x088EDB6Cu);
    // nop
    goto L_088EDCAC;
L_088EDB6C:
    ctx.set_gpr(2, 2245u << 16u);
    ctx.set_gpr(4, rt.memory().aot_load32(ctx.gpr[2] + static_cast<std::uint32_t>(28900)));
    ctx.set_gpr(5, ctx.gpr[16] + 0u);
    ctx.set_gpr(31, 0x088EDB80u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0080_entry, 80u, 50u, 0x089443D4u>(ctx, &aot_mem) && ctx.pc == 0x088EDB80u) goto L_088EDB80;
    return;
L_088EDB80:
    ctx.set_gpr(31, rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(12)));
    ctx.set_gpr(16, rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(8)));
    ctx.set_gpr(29, ctx.gpr[29] + static_cast<std::uint32_t>(16));
    jump_target = ctx.gpr[31];
    // nop
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_088EDB94:
    ctx.set_gpr(29, ctx.gpr[29] + static_cast<std::uint32_t>(-16));
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(12), ctx.gpr[31]);
    ctx.set_gpr(2, 2245u << 16u);
    ctx.set_gpr(2, rt.memory().aot_load32(ctx.gpr[2] + static_cast<std::uint32_t>(28900)));
    { const bool branch_taken = ctx.gpr[2] == 0u;
    // nop
      if (branch_taken) {
          goto L_088EDBC0;
      }
      goto L_088EDBAC;
    }
L_088EDBAC:
    ctx.set_gpr(2, rt.memory().aot_load32(ctx.gpr[2] + static_cast<std::uint32_t>(36)));
    ctx.set_gpr(2, ctx.gpr[2] & 4u);
    ctx.set_gpr(2, 0u < ctx.gpr[2] ? 1u : 0u);
    { const bool branch_taken = ctx.gpr[2] != 0u;
    // nop
      if (branch_taken) {
          goto L_088EDBC8;
      }
      goto L_088EDBC0;
    }
L_088EDBC0:
    ctx.set_gpr(31, 0x088EDBC8u);
    // nop
    goto L_088EDCAC;
L_088EDBC8:
    ctx.set_gpr(2, 2245u << 16u);
    ctx.set_gpr(2, rt.memory().aot_load32(ctx.gpr[2] + static_cast<std::uint32_t>(28900)));
    ctx.set_gpr(31, rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(12)));
    ctx.set_gpr(29, ctx.gpr[29] + static_cast<std::uint32_t>(16));
    jump_target = ctx.gpr[31];
    // nop
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_088EDBE0:
    ctx.set_gpr(29, ctx.gpr[29] + static_cast<std::uint32_t>(-48));
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(12), ctx.gpr[31]);
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(8), ctx.gpr[16]);
    ctx.set_gpr(4, ctx.gpr[29] + static_cast<std::uint32_t>(28));
    ctx.set_gpr(31, 0x088EDBF8u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0080_entry, 80u, 398u, 0x08945BF8u>(ctx, &aot_mem) && ctx.pc == 0x088EDBF8u) goto L_088EDBF8;
    return;
L_088EDBF8:
    ctx.set_gpr(2, 2232u << 16u);
    ctx.set_gpr(2, ctx.gpr[2] + static_cast<std::uint32_t>(10644));
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(28), ctx.gpr[2]);
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(36), 0u);
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(40), 0u);
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(44), 0u);
    ctx.set_gpr(31, 0x088EDC18u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0064_entry, 64u, 444u, 0x08905FF0u>(ctx, &aot_mem) && ctx.pc == 0x088EDC18u) goto L_088EDC18;
    return;
L_088EDC18:
    ctx.set_gpr(2, rt.memory().aot_load32(ctx.gpr[2] + static_cast<std::uint32_t>(932)));
    ctx.set_gpr(2, ctx.gpr[2] + ctx.gpr[29]);
    ctx.set_gpr(16, rt.memory().aot_load32(ctx.gpr[2] + static_cast<std::uint32_t>(28)));
    ctx.set_gpr(2, 2232u << 16u);
    ctx.set_gpr(2, ctx.gpr[2] + static_cast<std::uint32_t>(10644));
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(28), ctx.gpr[2]);
    ctx.set_gpr(4, rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(44)));
    { const bool branch_taken = ctx.gpr[4] == 0u;
    // nop
      if (branch_taken) {
          goto L_088EDC44;
      }
      goto L_088EDC3C;
    }
L_088EDC3C:
    ctx.set_gpr(31, 0x088EDC44u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0014_entry, 14u, 257u, 0x0883D454u>(ctx, &aot_mem) && ctx.pc == 0x088EDC44u) goto L_088EDC44;
    return;
L_088EDC44:
    ctx.set_gpr(4, rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(40)));
    { const bool branch_taken = ctx.gpr[4] == 0u;
    // nop
      if (branch_taken) {
          goto L_088EDC58;
      }
      goto L_088EDC50;
    }
L_088EDC50:
    ctx.set_gpr(31, 0x088EDC58u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0014_entry, 14u, 257u, 0x0883D454u>(ctx, &aot_mem) && ctx.pc == 0x088EDC58u) goto L_088EDC58;
    return;
L_088EDC58:
    ctx.set_gpr(2, rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(36)));
    ctx.set_gpr(2, 0u < ctx.gpr[2] ? 1u : 0u);
    { const bool branch_taken = ctx.gpr[2] == 0u;
    // nop
      if (branch_taken) {
          goto L_088EDC7C;
      }
      goto L_088EDC68;
    }
L_088EDC68:
    ctx.set_gpr(4, ctx.gpr[29] + static_cast<std::uint32_t>(36));
    ctx.set_gpr(31, 0x088EDC74u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0019_entry, 19u, 781u, 0x0885315Cu>(ctx, &aot_mem) && ctx.pc == 0x088EDC74u) goto L_088EDC74;
    return;
L_088EDC74:
    ctx.set_gpr(2, 0u < ctx.gpr[2] ? 1u : 0u);
    ctx.set_gpr(2, ctx.gpr[2] ^ 1u);
    goto L_088EDC7C;
L_088EDC7C:
    { const bool branch_taken = ctx.gpr[2] == 0u;
    // nop
      if (branch_taken) {
          goto L_088EDC94;
      }
      goto L_088EDC84;
    }
L_088EDC84:
    ctx.set_gpr(2, rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(36)));
    ctx.set_gpr(4, ctx.gpr[2] + static_cast<std::uint32_t>(-8));
    ctx.set_gpr(31, 0x088EDC94u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0019_entry, 19u, 770u, 0x088530D0u>(ctx, &aot_mem) && ctx.pc == 0x088EDC94u) goto L_088EDC94;
    return;
L_088EDC94:
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
L_088EDCAC:
    ctx.set_gpr(29, ctx.gpr[29] + static_cast<std::uint32_t>(-16));
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(12), ctx.gpr[31]);
    ctx.set_gpr(4, 2191u << 16u);
    ctx.set_gpr(4, ctx.gpr[4] + static_cast<std::uint32_t>(-9004));
    ctx.set_gpr(31, 0x088EDCC4u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0080_entry, 80u, 286u, 0x08945508u>(ctx, &aot_mem) && ctx.pc == 0x088EDCC4u) goto L_088EDCC4;
    return;
L_088EDCC4:
    ctx.set_gpr(31, rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(12)));
    ctx.set_gpr(29, ctx.gpr[29] + static_cast<std::uint32_t>(16));
    jump_target = ctx.gpr[31];
    // nop
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_088EDCD4:
    ctx.set_gpr(29, ctx.gpr[29] + static_cast<std::uint32_t>(-32));
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(28), ctx.gpr[31]);
    ctx.set_gpr(31, 0x088EDCE4u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0052_entry, 52u, 154u, 0x088D49C4u>(ctx, &aot_mem) && ctx.pc == 0x088EDCE4u) goto L_088EDCE4;
    return;
L_088EDCE4:
    ctx.set_gpr(2, 2191u << 16u);
    ctx.set_gpr(2, ctx.gpr[2] + static_cast<std::uint32_t>(-8848));
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(0), ctx.gpr[2]);
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(4), 0u);
    ctx.set_gpr(2, 2228u << 16u);
    ctx.set_gpr(2, ctx.gpr[2] + static_cast<std::uint32_t>(-26748));
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(8), ctx.gpr[2]);
    ctx.set_gpr(4, 0u + 0u);
    ctx.set_gpr(5, 2245u << 16u);
    ctx.set_gpr(5, ctx.gpr[5] + static_cast<std::uint32_t>(28900));
    ctx.set_gpr(6, 2196u << 16u);
    ctx.set_gpr(6, ctx.gpr[6] + static_cast<std::uint32_t>(25520));
    ctx.set_gpr(7, 2188u << 16u);
    ctx.set_gpr(7, ctx.gpr[7] + static_cast<std::uint32_t>(-27092));
    ctx.set_gpr(8, 2191u << 16u);
    ctx.set_gpr(8, ctx.gpr[8] + static_cast<std::uint32_t>(-8880));
    ctx.set_gpr(9, 2228u << 16u);
    ctx.set_gpr(9, ctx.gpr[9] + static_cast<std::uint32_t>(-26736));
    ctx.set_gpr(10, 0u + static_cast<std::uint32_t>(20));
    ctx.set_gpr(11, 2191u << 16u);
    ctx.set_gpr(11, ctx.gpr[11] + static_cast<std::uint32_t>(-9248));
    ctx.set_gpr(31, 0x088EDD40u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0080_entry, 80u, 294u, 0x08945594u>(ctx, &aot_mem) && ctx.pc == 0x088EDD40u) goto L_088EDD40;
    return;
L_088EDD40:
    ctx.set_gpr(31, rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(28)));
    ctx.set_gpr(29, ctx.gpr[29] + static_cast<std::uint32_t>(32));
    jump_target = ctx.gpr[31];
    // nop
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_088EDD50:
    ctx.set_gpr(29, ctx.gpr[29] + static_cast<std::uint32_t>(-16));
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(12), ctx.gpr[31]);
    ctx.set_gpr(31, 0x088EDD60u);
    // nop
    goto L_088EDB94;
L_088EDD60:
    ctx.set_gpr(31, rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(12)));
    ctx.set_gpr(29, ctx.gpr[29] + static_cast<std::uint32_t>(16));
    jump_target = ctx.gpr[31];
    // nop
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_088EDD70:
    ctx.set_gpr(29, ctx.gpr[29] + static_cast<std::uint32_t>(-16));
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(12), ctx.gpr[31]);
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(8), ctx.gpr[18]);
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(4), ctx.gpr[17]);
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(0), ctx.gpr[16]);
    ctx.set_gpr(2, 2245u << 16u);
    ctx.set_gpr(17, rt.memory().aot_load32(ctx.gpr[2] + static_cast<std::uint32_t>(28900)));
    ctx.set_gpr(4, ctx.gpr[17] + 0u);
    ctx.set_gpr(31, 0x088EDD98u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0080_entry, 80u, 236u, 0x089451A8u>(ctx, &aot_mem) && ctx.pc == 0x088EDD98u) goto L_088EDD98;
    return;
L_088EDD98:
    ctx.set_gpr(18, ctx.gpr[2] + 0u);
    ctx.set_gpr(4, ctx.gpr[17] + 0u);
    ctx.set_gpr(5, 2228u << 16u);
    ctx.set_gpr(5, ctx.gpr[5] + static_cast<std::uint32_t>(-26724));
    ctx.set_gpr(6, 0u + static_cast<std::uint32_t>(3));
    ctx.set_gpr(31, 0x088EDDB4u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0080_entry, 80u, 151u, 0x08944B98u>(ctx, &aot_mem) && ctx.pc == 0x088EDDB4u) goto L_088EDDB4;
    return;
L_088EDDB4:
    ctx.set_gpr(5, ctx.gpr[18] + static_cast<std::uint32_t>(1));
    ctx.set_gpr(4, ctx.gpr[17] + 0u);
    ctx.set_gpr(31, 0x088EDDC4u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0080_entry, 80u, 148u, 0x08944B4Cu>(ctx, &aot_mem) && ctx.pc == 0x088EDDC4u) goto L_088EDDC4;
    return;
L_088EDDC4:
    ctx.set_gpr(16, ctx.gpr[2] + 0u);
    ctx.set_gpr(31, 0x088EDDD0u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0056_entry, 56u, 713u, 0x088E7C14u>(ctx, &aot_mem) && ctx.pc == 0x088EDDD0u) goto L_088EDDD0;
    return;
L_088EDDD0:
    rt.memory().aot_store32(ctx.gpr[16] + static_cast<std::uint32_t>(52), ctx.gpr[2]);
    ctx.set_gpr(5, ctx.gpr[18] + static_cast<std::uint32_t>(2));
    ctx.set_gpr(4, ctx.gpr[17] + 0u);
    ctx.set_gpr(31, 0x088EDDE4u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0080_entry, 80u, 148u, 0x08944B4Cu>(ctx, &aot_mem) && ctx.pc == 0x088EDDE4u) goto L_088EDDE4;
    return;
L_088EDDE4:
    ctx.set_gpr(16, ctx.gpr[2] + 0u);
    ctx.set_gpr(31, 0x088EDDF0u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0060_entry, 60u, 488u, 0x088F68E4u>(ctx, &aot_mem) && ctx.pc == 0x088EDDF0u) goto L_088EDDF0;
    return;
L_088EDDF0:
    rt.memory().aot_store32(ctx.gpr[16] + static_cast<std::uint32_t>(52), ctx.gpr[2]);
    ctx.set_gpr(4, ctx.gpr[17] + 0u);
    ctx.set_gpr(5, 2228u << 16u);
    ctx.set_gpr(5, ctx.gpr[5] + static_cast<std::uint32_t>(-26704));
    ctx.set_gpr(6, 2228u << 16u);
    ctx.set_gpr(6, ctx.gpr[6] + static_cast<std::uint32_t>(-26692));
    ctx.set_gpr(7, 2228u << 16u);
    ctx.set_gpr(7, ctx.gpr[7] + static_cast<std::uint32_t>(-26680));
    ctx.set_gpr(8, ctx.gpr[18] + 0u);
    ctx.set_gpr(31, 0x088EDE1Cu);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0080_entry, 80u, 162u, 0x08944C7Cu>(ctx, &aot_mem) && ctx.pc == 0x088EDE1Cu) goto L_088EDE1C;
    return;
L_088EDE1C:
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
L_088EDE38:
    ctx.set_gpr(29, ctx.gpr[29] + static_cast<std::uint32_t>(-16));
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(12), ctx.gpr[31]);
    ctx.set_gpr(2, 2245u << 16u);
    ctx.set_gpr(2, rt.memory().aot_load32(ctx.gpr[2] + static_cast<std::uint32_t>(28916)));
    { const bool branch_taken = ctx.gpr[2] == 0u;
    // nop
      if (branch_taken) {
          goto L_088EDE64;
      }
      goto L_088EDE50;
    }
L_088EDE50:
    ctx.set_gpr(2, rt.memory().aot_load32(ctx.gpr[2] + static_cast<std::uint32_t>(36)));
    ctx.set_gpr(2, ctx.gpr[2] & 4u);
    ctx.set_gpr(2, 0u < ctx.gpr[2] ? 1u : 0u);
    { const bool branch_taken = ctx.gpr[2] != 0u;
    // nop
      if (branch_taken) {
          goto L_088EDE6C;
      }
      goto L_088EDE64;
    }
L_088EDE64:
    ctx.set_gpr(31, 0x088EDE6Cu);
    // nop
    goto L_088EDEF4;
L_088EDE6C:
    ctx.set_gpr(2, 2245u << 16u);
    ctx.set_gpr(2, rt.memory().aot_load32(ctx.gpr[2] + static_cast<std::uint32_t>(28916)));
    ctx.set_gpr(31, rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(12)));
    ctx.set_gpr(29, ctx.gpr[29] + static_cast<std::uint32_t>(16));
    jump_target = ctx.gpr[31];
    // nop
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_088EDE84:
    ctx.set_gpr(29, ctx.gpr[29] + static_cast<std::uint32_t>(-128));
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(12), ctx.gpr[31]);
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(8), ctx.gpr[16]);
    ctx.set_gpr(4, ctx.gpr[29] + static_cast<std::uint32_t>(28));
    ctx.set_gpr(31, 0x088EDE9Cu);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0080_entry, 80u, 398u, 0x08945BF8u>(ctx, &aot_mem) && ctx.pc == 0x088EDE9Cu) goto L_088EDE9C;
    return;
L_088EDE9C:
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(36), 0u);
    ctx.set_gpr(2, 2232u << 16u);
    ctx.set_gpr(2, ctx.gpr[2] + static_cast<std::uint32_t>(-4972));
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(28), ctx.gpr[2]);
    ctx.set_gpr(31, 0x088EDEB4u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0064_entry, 64u, 444u, 0x08905FF0u>(ctx, &aot_mem) && ctx.pc == 0x088EDEB4u) goto L_088EDEB4;
    return;
L_088EDEB4:
    ctx.set_gpr(2, rt.memory().aot_load32(ctx.gpr[2] + static_cast<std::uint32_t>(932)));
    ctx.set_gpr(2, ctx.gpr[2] + ctx.gpr[29]);
    ctx.set_gpr(16, rt.memory().aot_load32(ctx.gpr[2] + static_cast<std::uint32_t>(28)));
    ctx.set_gpr(2, 2232u << 16u);
    ctx.set_gpr(2, ctx.gpr[2] + static_cast<std::uint32_t>(-15576));
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(28), ctx.gpr[2]);
    ctx.set_gpr(4, ctx.gpr[29] + static_cast<std::uint32_t>(36));
    ctx.set_gpr(5, 0u + static_cast<std::uint32_t>(-1));
    ctx.set_gpr(31, 0x088EDEDCu);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0020_entry, 20u, 288u, 0x088555D0u>(ctx, &aot_mem) && ctx.pc == 0x088EDEDCu) goto L_088EDEDC;
    return;
L_088EDEDC:
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
L_088EDEF4:
    ctx.set_gpr(29, ctx.gpr[29] + static_cast<std::uint32_t>(-16));
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(12), ctx.gpr[31]);
    ctx.set_gpr(4, 2191u << 16u);
    ctx.set_gpr(4, ctx.gpr[4] + static_cast<std::uint32_t>(-8420));
    ctx.set_gpr(31, 0x088EDF0Cu);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0080_entry, 80u, 286u, 0x08945508u>(ctx, &aot_mem) && ctx.pc == 0x088EDF0Cu) goto L_088EDF0C;
    return;
L_088EDF0C:
    ctx.set_gpr(31, rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(12)));
    ctx.set_gpr(29, ctx.gpr[29] + static_cast<std::uint32_t>(16));
    jump_target = ctx.gpr[31];
    // nop
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_088EDF1C:
    ctx.set_gpr(29, ctx.gpr[29] + static_cast<std::uint32_t>(-32));
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(28), ctx.gpr[31]);
    ctx.set_gpr(31, 0x088EDF2Cu);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0052_entry, 52u, 154u, 0x088D49C4u>(ctx, &aot_mem) && ctx.pc == 0x088EDF2Cu) goto L_088EDF2C;
    return;
L_088EDF2C:
    ctx.set_gpr(2, 2191u << 16u);
    ctx.set_gpr(2, ctx.gpr[2] + static_cast<std::uint32_t>(-8272));
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(0), ctx.gpr[2]);
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(4), 0u);
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(8), 0u);
    ctx.set_gpr(4, 0u + 0u);
    ctx.set_gpr(5, 2245u << 16u);
    ctx.set_gpr(5, ctx.gpr[5] + static_cast<std::uint32_t>(28916));
    ctx.set_gpr(6, 2191u << 16u);
    ctx.set_gpr(6, ctx.gpr[6] + static_cast<std::uint32_t>(4924));
    ctx.set_gpr(7, 2187u << 16u);
    ctx.set_gpr(7, ctx.gpr[7] + static_cast<std::uint32_t>(-6348));
    ctx.set_gpr(8, 2191u << 16u);
    ctx.set_gpr(8, ctx.gpr[8] + static_cast<std::uint32_t>(-8304));
    ctx.set_gpr(9, 2228u << 16u);
    ctx.set_gpr(9, ctx.gpr[9] + static_cast<std::uint32_t>(-26668));
    ctx.set_gpr(10, 0u + static_cast<std::uint32_t>(100));
    ctx.set_gpr(11, 2191u << 16u);
    ctx.set_gpr(11, ctx.gpr[11] + static_cast<std::uint32_t>(-8572));
    ctx.set_gpr(31, 0x088EDF80u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0080_entry, 80u, 294u, 0x08945594u>(ctx, &aot_mem) && ctx.pc == 0x088EDF80u) goto L_088EDF80;
    return;
L_088EDF80:
    ctx.set_gpr(31, rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(28)));
    ctx.set_gpr(29, ctx.gpr[29] + static_cast<std::uint32_t>(32));
    jump_target = ctx.gpr[31];
    // nop
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_088EDF90:
    ctx.set_gpr(29, ctx.gpr[29] + static_cast<std::uint32_t>(-16));
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(12), ctx.gpr[31]);
    ctx.set_gpr(31, 0x088EDFA0u);
    // nop
    goto L_088EDE38;
L_088EDFA0:
    ctx.set_gpr(31, rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(12)));
    ctx.set_gpr(29, ctx.gpr[29] + static_cast<std::uint32_t>(16));
    jump_target = ctx.gpr[31];
    // nop
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_088EDFB0:
    ctx.set_gpr(29, ctx.gpr[29] + static_cast<std::uint32_t>(-16));
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(12), ctx.gpr[31]);
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(8), ctx.gpr[17]);
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(4), ctx.gpr[16]);
    ctx.set_gpr(2, 2245u << 16u);
    ctx.set_gpr(16, rt.memory().aot_load32(ctx.gpr[2] + static_cast<std::uint32_t>(28916)));
    ctx.set_gpr(4, ctx.gpr[16] + 0u);
    ctx.set_gpr(31, 0x088EDFD4u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0080_entry, 80u, 236u, 0x089451A8u>(ctx, &aot_mem) && ctx.pc == 0x088EDFD4u) goto L_088EDFD4;
    return;
L_088EDFD4:
    ctx.set_gpr(17, ctx.gpr[2] + 0u);
    ctx.set_gpr(4, ctx.gpr[16] + 0u);
    ctx.set_gpr(5, 2228u << 16u);
    ctx.set_gpr(5, ctx.gpr[5] + static_cast<std::uint32_t>(-26640));
    ctx.set_gpr(6, 0u + static_cast<std::uint32_t>(20));
    ctx.set_gpr(31, 0x088EDFF0u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0080_entry, 80u, 151u, 0x08944B98u>(ctx, &aot_mem) && ctx.pc == 0x088EDFF0u) goto L_088EDFF0;
    return;
L_088EDFF0:
    ctx.set_gpr(5, ctx.gpr[17] + static_cast<std::uint32_t>(17));
    ctx.set_gpr(4, ctx.gpr[16] + 0u);
    ctx.set_gpr(31, 0x088EE000u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0080_entry, 80u, 148u, 0x08944B4Cu>(ctx, &aot_mem) && ctx.pc == 0x088EE000u) goto L_088EE000;
    return;
L_088EE000:
    ctx.set_gpr(4, ctx.gpr[2] + 0u);
    ctx.set_gpr(5, 0u + 0u);
    ctx.set_gpr(31, 0x088EE010u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0086_entry, 86u, 783u, 0x0895F488u>(ctx, &aot_mem) && ctx.pc == 0x088EE010u) goto L_088EE010;
    return;
L_088EE010:
    ctx.set_gpr(5, ctx.gpr[17] + static_cast<std::uint32_t>(18));
    ctx.set_gpr(4, ctx.gpr[16] + 0u);
    ctx.set_gpr(31, 0x088EE020u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0080_entry, 80u, 148u, 0x08944B4Cu>(ctx, &aot_mem) && ctx.pc == 0x088EE020u) goto L_088EE020;
    return;
L_088EE020:
    ctx.set_gpr(4, ctx.gpr[2] + 0u);
    ctx.set_gpr(5, 0u + 0u);
    ctx.set_gpr(31, 0x088EE030u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0086_entry, 86u, 783u, 0x0895F488u>(ctx, &aot_mem) && ctx.pc == 0x088EE030u) goto L_088EE030;
    return;
L_088EE030:
    ctx.set_gpr(5, ctx.gpr[17] + static_cast<std::uint32_t>(19));
    ctx.set_gpr(4, ctx.gpr[16] + 0u);
    ctx.set_gpr(31, 0x088EE040u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0080_entry, 80u, 148u, 0x08944B4Cu>(ctx, &aot_mem) && ctx.pc == 0x088EE040u) goto L_088EE040;
    return;
L_088EE040:
    ctx.set_gpr(4, ctx.gpr[2] + 0u);
    ctx.set_gpr(5, 0u + static_cast<std::uint32_t>(1));
    ctx.set_gpr(31, 0x088EE050u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0065_entry, 65u, 745u, 0x0890B3DCu>(ctx, &aot_mem) && ctx.pc == 0x088EE050u) goto L_088EE050;
    return;
L_088EE050:
    ctx.set_gpr(4, ctx.gpr[16] + 0u);
    ctx.set_gpr(5, 2228u << 16u);
    ctx.set_gpr(5, ctx.gpr[5] + static_cast<std::uint32_t>(-26324));
    ctx.set_gpr(6, 2228u << 16u);
    ctx.set_gpr(6, ctx.gpr[6] + static_cast<std::uint32_t>(-26244));
    ctx.set_gpr(7, 2228u << 16u);
    ctx.set_gpr(7, ctx.gpr[7] + static_cast<std::uint32_t>(-26164));
    ctx.set_gpr(8, ctx.gpr[17] + 0u);
    ctx.set_gpr(31, 0x088EE078u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0080_entry, 80u, 162u, 0x08944C7Cu>(ctx, &aot_mem) && ctx.pc == 0x088EE078u) goto L_088EE078;
    return;
L_088EE078:
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
L_088EE090:
    ctx.set_gpr(29, ctx.gpr[29] + static_cast<std::uint32_t>(-16));
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(12), ctx.gpr[31]);
    ctx.set_gpr(2, 2245u << 16u);
    ctx.set_gpr(2, rt.memory().aot_load32(ctx.gpr[2] + static_cast<std::uint32_t>(29000)));
    { const bool branch_taken = ctx.gpr[2] == 0u;
    // nop
      if (branch_taken) {
          goto L_088EE0BC;
      }
      goto L_088EE0A8;
    }
L_088EE0A8:
    ctx.set_gpr(2, rt.memory().aot_load32(ctx.gpr[2] + static_cast<std::uint32_t>(36)));
    ctx.set_gpr(2, ctx.gpr[2] & 4u);
    ctx.set_gpr(2, 0u < ctx.gpr[2] ? 1u : 0u);
    { const bool branch_taken = ctx.gpr[2] != 0u;
    // nop
      if (branch_taken) {
          goto L_088EE0C4;
      }
      goto L_088EE0BC;
    }
L_088EE0BC:
    ctx.set_gpr(31, 0x088EE0C4u);
    // nop
    goto L_088EE120;
L_088EE0C4:
    ctx.set_gpr(2, 2245u << 16u);
    ctx.set_gpr(2, rt.memory().aot_load32(ctx.gpr[2] + static_cast<std::uint32_t>(29000)));
    ctx.set_gpr(31, rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(12)));
    ctx.set_gpr(29, ctx.gpr[29] + static_cast<std::uint32_t>(16));
    jump_target = ctx.gpr[31];
    // nop
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_088EE0DC:
    ctx.set_gpr(29, ctx.gpr[29] + static_cast<std::uint32_t>(-48));
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(12), ctx.gpr[31]);
    ctx.set_gpr(4, ctx.gpr[29] + static_cast<std::uint32_t>(28));
    ctx.set_gpr(31, 0x088EE0F0u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0042_entry, 42u, 574u, 0x088ADBE0u>(ctx, &aot_mem) && ctx.pc == 0x088EE0F0u) goto L_088EE0F0;
    return;
L_088EE0F0:
    ctx.set_gpr(2, 2232u << 16u);
    ctx.set_gpr(2, ctx.gpr[2] + static_cast<std::uint32_t>(10540));
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(28), ctx.gpr[2]);
    ctx.set_gpr(31, 0x088EE104u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0064_entry, 64u, 444u, 0x08905FF0u>(ctx, &aot_mem) && ctx.pc == 0x088EE104u) goto L_088EE104;
    return;
L_088EE104:
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
L_088EE120:
    ctx.set_gpr(29, ctx.gpr[29] + static_cast<std::uint32_t>(-16));
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(12), ctx.gpr[31]);
    ctx.set_gpr(4, 2191u << 16u);
    ctx.set_gpr(4, ctx.gpr[4] + static_cast<std::uint32_t>(-7864));
    ctx.set_gpr(31, 0x088EE138u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0080_entry, 80u, 286u, 0x08945508u>(ctx, &aot_mem) && ctx.pc == 0x088EE138u) goto L_088EE138;
    return;
L_088EE138:
    ctx.set_gpr(31, rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(12)));
    ctx.set_gpr(29, ctx.gpr[29] + static_cast<std::uint32_t>(16));
    jump_target = ctx.gpr[31];
    // nop
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_088EE148:
    ctx.set_gpr(29, ctx.gpr[29] + static_cast<std::uint32_t>(-32));
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(28), ctx.gpr[31]);
    ctx.set_gpr(31, 0x088EE158u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0052_entry, 52u, 154u, 0x088D49C4u>(ctx, &aot_mem) && ctx.pc == 0x088EE158u) goto L_088EE158;
    return;
L_088EE158:
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(0), 0u);
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(4), 0u);
    ctx.set_gpr(2, 2228u << 16u);
    ctx.set_gpr(2, ctx.gpr[2] + static_cast<std::uint32_t>(-26084));
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(8), ctx.gpr[2]);
    ctx.set_gpr(4, 0u + 0u);
    ctx.set_gpr(5, 2245u << 16u);
    ctx.set_gpr(5, ctx.gpr[5] + static_cast<std::uint32_t>(29000));
    ctx.set_gpr(6, 2191u << 16u);
    ctx.set_gpr(6, ctx.gpr[6] + static_cast<std::uint32_t>(-13396));
    ctx.set_gpr(7, 2187u << 16u);
    ctx.set_gpr(7, ctx.gpr[7] + static_cast<std::uint32_t>(-9000));
    ctx.set_gpr(8, 2191u << 16u);
    ctx.set_gpr(8, ctx.gpr[8] + static_cast<std::uint32_t>(-7748));
    ctx.set_gpr(9, 2228u << 16u);
    ctx.set_gpr(9, ctx.gpr[9] + static_cast<std::uint32_t>(-26076));
    ctx.set_gpr(10, 0u + static_cast<std::uint32_t>(20));
    ctx.set_gpr(11, 2191u << 16u);
    ctx.set_gpr(11, ctx.gpr[11] + static_cast<std::uint32_t>(-7972));
    ctx.set_gpr(31, 0x088EE1ACu);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0080_entry, 80u, 294u, 0x08945594u>(ctx, &aot_mem) && ctx.pc == 0x088EE1ACu) goto L_088EE1AC;
    return;
L_088EE1AC:
    ctx.set_gpr(31, rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(28)));
    ctx.set_gpr(29, ctx.gpr[29] + static_cast<std::uint32_t>(32));
    jump_target = ctx.gpr[31];
    // nop
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_088EE1BC:
    ctx.set_gpr(29, ctx.gpr[29] + static_cast<std::uint32_t>(-16));
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(12), ctx.gpr[31]);
    ctx.set_gpr(31, 0x088EE1CCu);
    // nop
    goto L_088EE090;
L_088EE1CC:
    ctx.set_gpr(31, rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(12)));
    ctx.set_gpr(29, ctx.gpr[29] + static_cast<std::uint32_t>(16));
    jump_target = ctx.gpr[31];
    // nop
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_088EE1DC:
    ctx.set_gpr(29, ctx.gpr[29] + static_cast<std::uint32_t>(-16));
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(12), ctx.gpr[31]);
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(8), ctx.gpr[16]);
    ctx.set_gpr(16, ctx.gpr[4] + 0u);
    ctx.set_gpr(31, 0x088EE1F4u);
    // nop
    goto L_088EE5E4;
L_088EE1F4:
    ctx.set_gpr(2, 2245u << 16u);
    ctx.set_gpr(4, rt.memory().aot_load32(ctx.gpr[2] + static_cast<std::uint32_t>(29004)));
    ctx.set_gpr(5, ctx.gpr[16] + 0u);
    ctx.set_gpr(31, 0x088EE208u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0080_entry, 80u, 50u, 0x089443D4u>(ctx, &aot_mem) && ctx.pc == 0x088EE208u) goto L_088EE208;
    return;
L_088EE208:
    ctx.set_gpr(31, rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(12)));
    ctx.set_gpr(16, rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(8)));
    ctx.set_gpr(29, ctx.gpr[29] + static_cast<std::uint32_t>(16));
    jump_target = ctx.gpr[31];
    // nop
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_088EE21C:
    ctx.set_gpr(29, ctx.gpr[29] + static_cast<std::uint32_t>(-16));
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(12), ctx.gpr[31]);
    ctx.set_gpr(2, 2245u << 16u);
    ctx.set_gpr(2, rt.memory().aot_load32(ctx.gpr[2] + static_cast<std::uint32_t>(29004)));
    { const bool branch_taken = ctx.gpr[2] == 0u;
    // nop
      if (branch_taken) {
          goto L_088EE248;
      }
      goto L_088EE234;
    }
L_088EE234:
    ctx.set_gpr(2, rt.memory().aot_load32(ctx.gpr[2] + static_cast<std::uint32_t>(36)));
    ctx.set_gpr(2, ctx.gpr[2] & 4u);
    ctx.set_gpr(2, 0u < ctx.gpr[2] ? 1u : 0u);
    { const bool branch_taken = ctx.gpr[2] != 0u;
    // nop
      if (branch_taken) {
          goto L_088EE250;
      }
      goto L_088EE248;
    }
L_088EE248:
    ctx.set_gpr(31, 0x088EE250u);
    // nop
    goto L_088EE5E4;
L_088EE250:
    ctx.set_gpr(2, 2245u << 16u);
    ctx.set_gpr(2, rt.memory().aot_load32(ctx.gpr[2] + static_cast<std::uint32_t>(29004)));
    ctx.set_gpr(31, rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(12)));
    ctx.set_gpr(29, ctx.gpr[29] + static_cast<std::uint32_t>(16));
    jump_target = ctx.gpr[31];
    // nop
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_088EE268:
    ctx.set_gpr(29, ctx.gpr[29] + static_cast<std::uint32_t>(-112));
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(12), ctx.gpr[31]);
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(8), ctx.gpr[16]);
    ctx.set_gpr(4, ctx.gpr[29] + static_cast<std::uint32_t>(20));
    ctx.set_gpr(31, 0x088EE280u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0080_entry, 80u, 398u, 0x08945BF8u>(ctx, &aot_mem) && ctx.pc == 0x088EE280u) goto L_088EE280;
    return;
L_088EE280:
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(28), 0u);
    ctx.set_gpr(2, 2232u << 16u);
    ctx.set_gpr(2, ctx.gpr[2] + static_cast<std::uint32_t>(-4864));
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(20), ctx.gpr[2]);
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(40), 0u);
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(44), 0u);
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
    ctx.set_gpr(31, 0x088EE2C8u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0064_entry, 64u, 444u, 0x08905FF0u>(ctx, &aot_mem) && ctx.pc == 0x088EE2C8u) goto L_088EE2C8;
    return;
L_088EE2C8:
    ctx.set_gpr(2, rt.memory().aot_load32(ctx.gpr[2] + static_cast<std::uint32_t>(932)));
    ctx.set_gpr(2, ctx.gpr[2] + ctx.gpr[29]);
    ctx.set_gpr(16, rt.memory().aot_load32(ctx.gpr[2] + static_cast<std::uint32_t>(20)));
    ctx.set_gpr(2, 2232u << 16u);
    ctx.set_gpr(2, ctx.gpr[2] + static_cast<std::uint32_t>(-4864));
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(20), ctx.gpr[2]);
    ctx.set_gpr(2, rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(104)));
    ctx.set_gpr(2, 0u < ctx.gpr[2] ? 1u : 0u);
    { const bool branch_taken = ctx.gpr[2] == 0u;
    // nop
      if (branch_taken) {
          goto L_088EE304;
      }
      goto L_088EE2F0;
    }
L_088EE2F0:
    ctx.set_gpr(4, ctx.gpr[29] + static_cast<std::uint32_t>(104));
    ctx.set_gpr(31, 0x088EE2FCu);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0019_entry, 19u, 781u, 0x0885315Cu>(ctx, &aot_mem) && ctx.pc == 0x088EE2FCu) goto L_088EE2FC;
    return;
L_088EE2FC:
    ctx.set_gpr(2, 0u < ctx.gpr[2] ? 1u : 0u);
    ctx.set_gpr(2, ctx.gpr[2] ^ 1u);
    goto L_088EE304;
L_088EE304:
    { const bool branch_taken = ctx.gpr[2] == 0u;
    // nop
      if (branch_taken) {
          goto L_088EE31C;
      }
      goto L_088EE30C;
    }
L_088EE30C:
    ctx.set_gpr(2, rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(104)));
    ctx.set_gpr(4, ctx.gpr[2] + static_cast<std::uint32_t>(-8));
    ctx.set_gpr(31, 0x088EE31Cu);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0019_entry, 19u, 770u, 0x088530D0u>(ctx, &aot_mem) && ctx.pc == 0x088EE31Cu) goto L_088EE31C;
    return;
L_088EE31C:
    ctx.set_gpr(2, rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(100)));
    ctx.set_gpr(2, 0u < ctx.gpr[2] ? 1u : 0u);
    { const bool branch_taken = ctx.gpr[2] == 0u;
    // nop
      if (branch_taken) {
          goto L_088EE340;
      }
      goto L_088EE32C;
    }
L_088EE32C:
    ctx.set_gpr(4, ctx.gpr[29] + static_cast<std::uint32_t>(100));
    ctx.set_gpr(31, 0x088EE338u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0019_entry, 19u, 781u, 0x0885315Cu>(ctx, &aot_mem) && ctx.pc == 0x088EE338u) goto L_088EE338;
    return;
L_088EE338:
    ctx.set_gpr(2, 0u < ctx.gpr[2] ? 1u : 0u);
    ctx.set_gpr(2, ctx.gpr[2] ^ 1u);
    goto L_088EE340;
L_088EE340:
    { const bool branch_taken = ctx.gpr[2] == 0u;
    // nop
      if (branch_taken) {
          goto L_088EE358;
      }
      goto L_088EE348;
    }
L_088EE348:
    ctx.set_gpr(2, rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(100)));
    ctx.set_gpr(4, ctx.gpr[2] + static_cast<std::uint32_t>(-8));
    ctx.set_gpr(31, 0x088EE358u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0019_entry, 19u, 770u, 0x088530D0u>(ctx, &aot_mem) && ctx.pc == 0x088EE358u) goto L_088EE358;
    return;
L_088EE358:
    ctx.set_gpr(2, rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(96)));
    ctx.set_gpr(2, 0u < ctx.gpr[2] ? 1u : 0u);
    { const bool branch_taken = ctx.gpr[2] == 0u;
    // nop
      if (branch_taken) {
          goto L_088EE37C;
      }
      goto L_088EE368;
    }
L_088EE368:
    ctx.set_gpr(4, ctx.gpr[29] + static_cast<std::uint32_t>(96));
    ctx.set_gpr(31, 0x088EE374u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0019_entry, 19u, 781u, 0x0885315Cu>(ctx, &aot_mem) && ctx.pc == 0x088EE374u) goto L_088EE374;
    return;
L_088EE374:
    ctx.set_gpr(2, 0u < ctx.gpr[2] ? 1u : 0u);
    ctx.set_gpr(2, ctx.gpr[2] ^ 1u);
    goto L_088EE37C;
L_088EE37C:
    { const bool branch_taken = ctx.gpr[2] == 0u;
    // nop
      if (branch_taken) {
          goto L_088EE394;
      }
      goto L_088EE384;
    }
L_088EE384:
    ctx.set_gpr(2, rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(96)));
    ctx.set_gpr(4, ctx.gpr[2] + static_cast<std::uint32_t>(-8));
    ctx.set_gpr(31, 0x088EE394u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0019_entry, 19u, 770u, 0x088530D0u>(ctx, &aot_mem) && ctx.pc == 0x088EE394u) goto L_088EE394;
    return;
L_088EE394:
    ctx.set_gpr(2, rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(92)));
    ctx.set_gpr(2, 0u < ctx.gpr[2] ? 1u : 0u);
    { const bool branch_taken = ctx.gpr[2] == 0u;
    // nop
      if (branch_taken) {
          goto L_088EE3B8;
      }
      goto L_088EE3A4;
    }
L_088EE3A4:
    ctx.set_gpr(4, ctx.gpr[29] + static_cast<std::uint32_t>(92));
    ctx.set_gpr(31, 0x088EE3B0u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0019_entry, 19u, 781u, 0x0885315Cu>(ctx, &aot_mem) && ctx.pc == 0x088EE3B0u) goto L_088EE3B0;
    return;
L_088EE3B0:
    ctx.set_gpr(2, 0u < ctx.gpr[2] ? 1u : 0u);
    ctx.set_gpr(2, ctx.gpr[2] ^ 1u);
    goto L_088EE3B8;
L_088EE3B8:
    { const bool branch_taken = ctx.gpr[2] == 0u;
    // nop
      if (branch_taken) {
          goto L_088EE3D0;
      }
      goto L_088EE3C0;
    }
L_088EE3C0:
    ctx.set_gpr(2, rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(92)));
    ctx.set_gpr(4, ctx.gpr[2] + static_cast<std::uint32_t>(-8));
    ctx.set_gpr(31, 0x088EE3D0u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0019_entry, 19u, 770u, 0x088530D0u>(ctx, &aot_mem) && ctx.pc == 0x088EE3D0u) goto L_088EE3D0;
    return;
L_088EE3D0:
    ctx.set_gpr(2, rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(88)));
    ctx.set_gpr(2, 0u < ctx.gpr[2] ? 1u : 0u);
    { const bool branch_taken = ctx.gpr[2] == 0u;
    // nop
      if (branch_taken) {
          goto L_088EE3F4;
      }
      goto L_088EE3E0;
    }
L_088EE3E0:
    ctx.set_gpr(4, ctx.gpr[29] + static_cast<std::uint32_t>(88));
    ctx.set_gpr(31, 0x088EE3ECu);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0019_entry, 19u, 781u, 0x0885315Cu>(ctx, &aot_mem) && ctx.pc == 0x088EE3ECu) goto L_088EE3EC;
    return;
L_088EE3EC:
    ctx.set_gpr(2, 0u < ctx.gpr[2] ? 1u : 0u);
    ctx.set_gpr(2, ctx.gpr[2] ^ 1u);
    goto L_088EE3F4;
L_088EE3F4:
    { const bool branch_taken = ctx.gpr[2] == 0u;
    // nop
      if (branch_taken) {
          goto L_088EE40C;
      }
      goto L_088EE3FC;
    }
L_088EE3FC:
    ctx.set_gpr(2, rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(88)));
    ctx.set_gpr(4, ctx.gpr[2] + static_cast<std::uint32_t>(-8));
    ctx.set_gpr(31, 0x088EE40Cu);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0019_entry, 19u, 770u, 0x088530D0u>(ctx, &aot_mem) && ctx.pc == 0x088EE40Cu) goto L_088EE40C;
    return;
L_088EE40C:
    ctx.set_gpr(2, rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(84)));
    ctx.set_gpr(2, 0u < ctx.gpr[2] ? 1u : 0u);
    { const bool branch_taken = ctx.gpr[2] == 0u;
    // nop
      if (branch_taken) {
          goto L_088EE430;
      }
      goto L_088EE41C;
    }
L_088EE41C:
    ctx.set_gpr(4, ctx.gpr[29] + static_cast<std::uint32_t>(84));
    ctx.set_gpr(31, 0x088EE428u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0019_entry, 19u, 781u, 0x0885315Cu>(ctx, &aot_mem) && ctx.pc == 0x088EE428u) goto L_088EE428;
    return;
L_088EE428:
    ctx.set_gpr(2, 0u < ctx.gpr[2] ? 1u : 0u);
    ctx.set_gpr(2, ctx.gpr[2] ^ 1u);
    goto L_088EE430;
L_088EE430:
    { const bool branch_taken = ctx.gpr[2] == 0u;
    // nop
      if (branch_taken) {
          goto L_088EE448;
      }
      goto L_088EE438;
    }
L_088EE438:
    ctx.set_gpr(2, rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(84)));
    ctx.set_gpr(4, ctx.gpr[2] + static_cast<std::uint32_t>(-8));
    ctx.set_gpr(31, 0x088EE448u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0019_entry, 19u, 770u, 0x088530D0u>(ctx, &aot_mem) && ctx.pc == 0x088EE448u) goto L_088EE448;
    return;
L_088EE448:
    ctx.set_gpr(2, rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(80)));
    ctx.set_gpr(2, 0u < ctx.gpr[2] ? 1u : 0u);
    { const bool branch_taken = ctx.gpr[2] == 0u;
    // nop
      if (branch_taken) {
          goto L_088EE46C;
      }
      goto L_088EE458;
    }
L_088EE458:
    ctx.set_gpr(4, ctx.gpr[29] + static_cast<std::uint32_t>(80));
    ctx.set_gpr(31, 0x088EE464u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0019_entry, 19u, 781u, 0x0885315Cu>(ctx, &aot_mem) && ctx.pc == 0x088EE464u) goto L_088EE464;
    return;
L_088EE464:
    ctx.set_gpr(2, 0u < ctx.gpr[2] ? 1u : 0u);
    ctx.set_gpr(2, ctx.gpr[2] ^ 1u);
    goto L_088EE46C;
L_088EE46C:
    { const bool branch_taken = ctx.gpr[2] == 0u;
    // nop
      if (branch_taken) {
          goto L_088EE484;
      }
      goto L_088EE474;
    }
L_088EE474:
    ctx.set_gpr(2, rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(80)));
    ctx.set_gpr(4, ctx.gpr[2] + static_cast<std::uint32_t>(-8));
    ctx.set_gpr(31, 0x088EE484u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0019_entry, 19u, 770u, 0x088530D0u>(ctx, &aot_mem) && ctx.pc == 0x088EE484u) goto L_088EE484;
    return;
L_088EE484:
    ctx.set_gpr(2, rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(76)));
    ctx.set_gpr(2, 0u < ctx.gpr[2] ? 1u : 0u);
    { const bool branch_taken = ctx.gpr[2] == 0u;
    // nop
      if (branch_taken) {
          goto L_088EE4A8;
      }
      goto L_088EE494;
    }
L_088EE494:
    ctx.set_gpr(4, ctx.gpr[29] + static_cast<std::uint32_t>(76));
    ctx.set_gpr(31, 0x088EE4A0u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0019_entry, 19u, 781u, 0x0885315Cu>(ctx, &aot_mem) && ctx.pc == 0x088EE4A0u) goto L_088EE4A0;
    return;
L_088EE4A0:
    ctx.set_gpr(2, 0u < ctx.gpr[2] ? 1u : 0u);
    ctx.set_gpr(2, ctx.gpr[2] ^ 1u);
    goto L_088EE4A8;
L_088EE4A8:
    { const bool branch_taken = ctx.gpr[2] == 0u;
    // nop
      if (branch_taken) {
          goto L_088EE4C0;
      }
      goto L_088EE4B0;
    }
L_088EE4B0:
    ctx.set_gpr(2, rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(76)));
    ctx.set_gpr(4, ctx.gpr[2] + static_cast<std::uint32_t>(-8));
    ctx.set_gpr(31, 0x088EE4C0u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0019_entry, 19u, 770u, 0x088530D0u>(ctx, &aot_mem) && ctx.pc == 0x088EE4C0u) goto L_088EE4C0;
    return;
L_088EE4C0:
    ctx.set_gpr(2, rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(72)));
    ctx.set_gpr(2, 0u < ctx.gpr[2] ? 1u : 0u);
    { const bool branch_taken = ctx.gpr[2] == 0u;
    // nop
      if (branch_taken) {
          goto L_088EE4E4;
      }
      goto L_088EE4D0;
    }
L_088EE4D0:
    ctx.set_gpr(4, ctx.gpr[29] + static_cast<std::uint32_t>(72));
    ctx.set_gpr(31, 0x088EE4DCu);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0019_entry, 19u, 781u, 0x0885315Cu>(ctx, &aot_mem) && ctx.pc == 0x088EE4DCu) goto L_088EE4DC;
    return;
L_088EE4DC:
    ctx.set_gpr(2, 0u < ctx.gpr[2] ? 1u : 0u);
    ctx.set_gpr(2, ctx.gpr[2] ^ 1u);
    goto L_088EE4E4;
L_088EE4E4:
    { const bool branch_taken = ctx.gpr[2] == 0u;
    // nop
      if (branch_taken) {
          goto L_088EE4FC;
      }
      goto L_088EE4EC;
    }
L_088EE4EC:
    ctx.set_gpr(2, rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(72)));
    ctx.set_gpr(4, ctx.gpr[2] + static_cast<std::uint32_t>(-8));
    ctx.set_gpr(31, 0x088EE4FCu);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0019_entry, 19u, 770u, 0x088530D0u>(ctx, &aot_mem) && ctx.pc == 0x088EE4FCu) goto L_088EE4FC;
    return;
L_088EE4FC:
    ctx.set_gpr(2, rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(68)));
    ctx.set_gpr(2, 0u < ctx.gpr[2] ? 1u : 0u);
    { const bool branch_taken = ctx.gpr[2] == 0u;
    // nop
      if (branch_taken) {
          goto L_088EE520;
      }
      goto L_088EE50C;
    }
L_088EE50C:
    ctx.set_gpr(4, ctx.gpr[29] + static_cast<std::uint32_t>(68));
    ctx.set_gpr(31, 0x088EE518u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0019_entry, 19u, 781u, 0x0885315Cu>(ctx, &aot_mem) && ctx.pc == 0x088EE518u) goto L_088EE518;
    return;
L_088EE518:
    ctx.set_gpr(2, 0u < ctx.gpr[2] ? 1u : 0u);
    ctx.set_gpr(2, ctx.gpr[2] ^ 1u);
    goto L_088EE520;
L_088EE520:
    { const bool branch_taken = ctx.gpr[2] == 0u;
    // nop
      if (branch_taken) {
          goto L_088EE538;
      }
      goto L_088EE528;
    }
L_088EE528:
    ctx.set_gpr(2, rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(68)));
    ctx.set_gpr(4, ctx.gpr[2] + static_cast<std::uint32_t>(-8));
    ctx.set_gpr(31, 0x088EE538u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0019_entry, 19u, 770u, 0x088530D0u>(ctx, &aot_mem) && ctx.pc == 0x088EE538u) goto L_088EE538;
    return;
L_088EE538:
    ctx.set_gpr(2, rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(44)));
    ctx.set_gpr(2, 0u < ctx.gpr[2] ? 1u : 0u);
    { const bool branch_taken = ctx.gpr[2] == 0u;
    // nop
      if (branch_taken) {
          goto L_088EE55C;
      }
      goto L_088EE548;
    }
L_088EE548:
    ctx.set_gpr(4, ctx.gpr[29] + static_cast<std::uint32_t>(44));
    ctx.set_gpr(31, 0x088EE554u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0019_entry, 19u, 781u, 0x0885315Cu>(ctx, &aot_mem) && ctx.pc == 0x088EE554u) goto L_088EE554;
    return;
L_088EE554:
    ctx.set_gpr(2, 0u < ctx.gpr[2] ? 1u : 0u);
    ctx.set_gpr(2, ctx.gpr[2] ^ 1u);
    goto L_088EE55C;
L_088EE55C:
    { const bool branch_taken = ctx.gpr[2] == 0u;
    // nop
      if (branch_taken) {
          goto L_088EE574;
      }
      goto L_088EE564;
    }
L_088EE564:
    ctx.set_gpr(2, rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(44)));
    ctx.set_gpr(4, ctx.gpr[2] + static_cast<std::uint32_t>(-8));
    ctx.set_gpr(31, 0x088EE574u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0019_entry, 19u, 770u, 0x088530D0u>(ctx, &aot_mem) && ctx.pc == 0x088EE574u) goto L_088EE574;
    return;
L_088EE574:
    ctx.set_gpr(2, rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(40)));
    ctx.set_gpr(2, 0u < ctx.gpr[2] ? 1u : 0u);
    { const bool branch_taken = ctx.gpr[2] == 0u;
    // nop
      if (branch_taken) {
          goto L_088EE598;
      }
      goto L_088EE584;
    }
L_088EE584:
    ctx.set_gpr(4, ctx.gpr[29] + static_cast<std::uint32_t>(40));
    ctx.set_gpr(31, 0x088EE590u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0019_entry, 19u, 781u, 0x0885315Cu>(ctx, &aot_mem) && ctx.pc == 0x088EE590u) goto L_088EE590;
    return;
L_088EE590:
    ctx.set_gpr(2, 0u < ctx.gpr[2] ? 1u : 0u);
    ctx.set_gpr(2, ctx.gpr[2] ^ 1u);
    goto L_088EE598;
L_088EE598:
    { const bool branch_taken = ctx.gpr[2] == 0u;
    // nop
      if (branch_taken) {
          goto L_088EE5B0;
      }
      goto L_088EE5A0;
    }
L_088EE5A0:
    ctx.set_gpr(2, rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(40)));
    ctx.set_gpr(4, ctx.gpr[2] + static_cast<std::uint32_t>(-8));
    ctx.set_gpr(31, 0x088EE5B0u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0019_entry, 19u, 770u, 0x088530D0u>(ctx, &aot_mem) && ctx.pc == 0x088EE5B0u) goto L_088EE5B0;
    return;
L_088EE5B0:
    ctx.set_gpr(2, 2232u << 16u);
    ctx.set_gpr(2, ctx.gpr[2] + static_cast<std::uint32_t>(-15576));
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(20), ctx.gpr[2]);
    ctx.set_gpr(4, ctx.gpr[29] + static_cast<std::uint32_t>(28));
    ctx.set_gpr(5, 0u + static_cast<std::uint32_t>(-1));
    ctx.set_gpr(31, 0x088EE5CCu);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0020_entry, 20u, 288u, 0x088555D0u>(ctx, &aot_mem) && ctx.pc == 0x088EE5CCu) goto L_088EE5CC;
    return;
L_088EE5CC:
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
L_088EE5E4:
    ctx.set_gpr(29, ctx.gpr[29] + static_cast<std::uint32_t>(-16));
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(12), ctx.gpr[31]);
    ctx.set_gpr(4, 2191u << 16u);
    ctx.set_gpr(4, ctx.gpr[4] + static_cast<std::uint32_t>(-6644));
    ctx.set_gpr(31, 0x088EE5FCu);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0080_entry, 80u, 286u, 0x08945508u>(ctx, &aot_mem) && ctx.pc == 0x088EE5FCu) goto L_088EE5FC;
    return;
L_088EE5FC:
    ctx.set_gpr(31, rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(12)));
    ctx.set_gpr(29, ctx.gpr[29] + static_cast<std::uint32_t>(16));
    jump_target = ctx.gpr[31];
    // nop
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_088EE60C:
    ctx.set_gpr(29, ctx.gpr[29] + static_cast<std::uint32_t>(-32));
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(28), ctx.gpr[31]);
    ctx.set_gpr(31, 0x088EE61Cu);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0052_entry, 52u, 154u, 0x088D49C4u>(ctx, &aot_mem) && ctx.pc == 0x088EE61Cu) goto L_088EE61C;
    return;
L_088EE61C:
    ctx.set_gpr(2, 2191u << 16u);
    ctx.set_gpr(2, ctx.gpr[2] + static_cast<std::uint32_t>(-6496));
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(0), ctx.gpr[2]);
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(4), 0u);
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(8), 0u);
    ctx.set_gpr(4, 0u + 0u);
    ctx.set_gpr(5, 2245u << 16u);
    ctx.set_gpr(5, ctx.gpr[5] + static_cast<std::uint32_t>(29004));
    ctx.set_gpr(6, 2191u << 16u);
    ctx.set_gpr(6, ctx.gpr[6] + static_cast<std::uint32_t>(4924));
    ctx.set_gpr(7, 2187u << 16u);
    ctx.set_gpr(7, ctx.gpr[7] + static_cast<std::uint32_t>(-6348));
    ctx.set_gpr(8, 2191u << 16u);
    ctx.set_gpr(8, ctx.gpr[8] + static_cast<std::uint32_t>(-6528));
    ctx.set_gpr(9, 2228u << 16u);
    ctx.set_gpr(9, ctx.gpr[9] + static_cast<std::uint32_t>(-26044));
    ctx.set_gpr(10, 0u + static_cast<std::uint32_t>(92));
    ctx.set_gpr(11, 2191u << 16u);
    ctx.set_gpr(11, ctx.gpr[11] + static_cast<std::uint32_t>(-7576));
    ctx.set_gpr(31, 0x088EE670u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0080_entry, 80u, 294u, 0x08945594u>(ctx, &aot_mem) && ctx.pc == 0x088EE670u) goto L_088EE670;
    return;
L_088EE670:
    ctx.set_gpr(31, rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(28)));
    ctx.set_gpr(29, ctx.gpr[29] + static_cast<std::uint32_t>(32));
    jump_target = ctx.gpr[31];
    // nop
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_088EE680:
    ctx.set_gpr(29, ctx.gpr[29] + static_cast<std::uint32_t>(-16));
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(12), ctx.gpr[31]);
    ctx.set_gpr(31, 0x088EE690u);
    // nop
    goto L_088EE21C;
L_088EE690:
    ctx.set_gpr(31, rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(12)));
    ctx.set_gpr(29, ctx.gpr[29] + static_cast<std::uint32_t>(16));
    jump_target = ctx.gpr[31];
    // nop
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_088EE6A0:
    ctx.set_gpr(29, ctx.gpr[29] + static_cast<std::uint32_t>(-16));
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(12), ctx.gpr[31]);
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(8), ctx.gpr[17]);
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(4), ctx.gpr[16]);
    ctx.set_gpr(2, 2245u << 16u);
    ctx.set_gpr(16, rt.memory().aot_load32(ctx.gpr[2] + static_cast<std::uint32_t>(29004)));
    ctx.set_gpr(4, ctx.gpr[16] + 0u);
    ctx.set_gpr(31, 0x088EE6C4u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0080_entry, 80u, 236u, 0x089451A8u>(ctx, &aot_mem) && ctx.pc == 0x088EE6C4u) goto L_088EE6C4;
    return;
L_088EE6C4:
    ctx.set_gpr(17, ctx.gpr[2] + 0u);
    ctx.set_gpr(4, ctx.gpr[16] + 0u);
    ctx.set_gpr(5, 2228u << 16u);
    ctx.set_gpr(5, ctx.gpr[5] + static_cast<std::uint32_t>(-26024));
    ctx.set_gpr(6, 0u + static_cast<std::uint32_t>(18));
    ctx.set_gpr(31, 0x088EE6E0u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0080_entry, 80u, 151u, 0x08944B98u>(ctx, &aot_mem) && ctx.pc == 0x088EE6E0u) goto L_088EE6E0;
    return;
L_088EE6E0:
    ctx.set_gpr(4, ctx.gpr[16] + 0u);
    ctx.set_gpr(5, 2228u << 16u);
    ctx.set_gpr(5, ctx.gpr[5] + static_cast<std::uint32_t>(-25744));
    ctx.set_gpr(6, 2228u << 16u);
    ctx.set_gpr(6, ctx.gpr[6] + static_cast<std::uint32_t>(-25672));
    ctx.set_gpr(7, 2228u << 16u);
    ctx.set_gpr(7, ctx.gpr[7] + static_cast<std::uint32_t>(-25600));
    ctx.set_gpr(8, ctx.gpr[17] + 0u);
    ctx.set_gpr(31, 0x088EE708u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0080_entry, 80u, 162u, 0x08944C7Cu>(ctx, &aot_mem) && ctx.pc == 0x088EE708u) goto L_088EE708;
    return;
L_088EE708:
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
L_088EE720:
    ctx.set_gpr(29, ctx.gpr[29] + static_cast<std::uint32_t>(-16));
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(12), ctx.gpr[31]);
    ctx.set_gpr(2, 2245u << 16u);
    ctx.set_gpr(2, rt.memory().aot_load32(ctx.gpr[2] + static_cast<std::uint32_t>(29080)));
    { const bool branch_taken = ctx.gpr[2] != 0u;
    // nop
      if (branch_taken) {
          goto L_088EE760;
      }
      goto L_088EE738;
    }
L_088EE738:
    ctx.set_gpr(31, 0x088EE740u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0078_entry, 78u, 217u, 0x0893CDECu>(ctx, &aot_mem) && ctx.pc == 0x088EE740u) goto L_088EE740;
    return;
L_088EE740:
    ctx.set_gpr(4, rt.memory().aot_load32(ctx.gpr[2] + static_cast<std::uint32_t>(0)));
    ctx.set_gpr(31, 0x088EE74Cu);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0078_entry, 78u, 199u, 0x0893CC68u>(ctx, &aot_mem) && ctx.pc == 0x088EE74Cu) goto L_088EE74C;
    return;
L_088EE74C:
    ctx.set_gpr(4, ctx.gpr[2] + 0u);
    ctx.set_gpr(31, 0x088EE758u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0052_entry, 52u, 732u, 0x088D6FE8u>(ctx, &aot_mem) && ctx.pc == 0x088EE758u) goto L_088EE758;
    return;
L_088EE758:
    ctx.set_gpr(3, 2245u << 16u);
    rt.memory().aot_store32(ctx.gpr[3] + static_cast<std::uint32_t>(29080), ctx.gpr[2]);
    goto L_088EE760;
L_088EE760:
    ctx.set_gpr(2, 2245u << 16u);
    ctx.set_gpr(2, rt.memory().aot_load32(ctx.gpr[2] + static_cast<std::uint32_t>(29080)));
    ctx.set_gpr(31, rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(12)));
    ctx.set_gpr(29, ctx.gpr[29] + static_cast<std::uint32_t>(16));
    jump_target = ctx.gpr[31];
    // nop
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_088EE778:
    ctx.set_gpr(29, ctx.gpr[29] + static_cast<std::uint32_t>(-16));
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(12), ctx.gpr[31]);
    ctx.set_gpr(2, 2245u << 16u);
    ctx.set_gpr(2, rt.memory().aot_load32(ctx.gpr[2] + static_cast<std::uint32_t>(29080)));
    { const bool branch_taken = ctx.gpr[2] == 0u;
    // nop
      if (branch_taken) {
          goto L_088EE7A4;
      }
      goto L_088EE790;
    }
L_088EE790:
    ctx.set_gpr(2, rt.memory().aot_load32(ctx.gpr[2] + static_cast<std::uint32_t>(36)));
    ctx.set_gpr(2, ctx.gpr[2] & 4u);
    ctx.set_gpr(2, 0u < ctx.gpr[2] ? 1u : 0u);
    { const bool branch_taken = ctx.gpr[2] != 0u;
    // nop
      if (branch_taken) {
          goto L_088EE7AC;
      }
      goto L_088EE7A4;
    }
L_088EE7A4:
    ctx.set_gpr(31, 0x088EE7ACu);
    // nop
    goto L_088EE808;
L_088EE7AC:
    ctx.set_gpr(2, 2245u << 16u);
    ctx.set_gpr(2, rt.memory().aot_load32(ctx.gpr[2] + static_cast<std::uint32_t>(29080)));
    ctx.set_gpr(31, rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(12)));
    ctx.set_gpr(29, ctx.gpr[29] + static_cast<std::uint32_t>(16));
    jump_target = ctx.gpr[31];
    // nop
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_088EE7C4:
    ctx.set_gpr(29, ctx.gpr[29] + static_cast<std::uint32_t>(-48));
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(12), ctx.gpr[31]);
    ctx.set_gpr(4, ctx.gpr[29] + static_cast<std::uint32_t>(28));
    ctx.set_gpr(31, 0x088EE7D8u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0042_entry, 42u, 574u, 0x088ADBE0u>(ctx, &aot_mem) && ctx.pc == 0x088EE7D8u) goto L_088EE7D8;
    return;
L_088EE7D8:
    ctx.set_gpr(2, 2232u << 16u);
    ctx.set_gpr(2, ctx.gpr[2] + static_cast<std::uint32_t>(10436));
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(28), ctx.gpr[2]);
    ctx.set_gpr(31, 0x088EE7ECu);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0064_entry, 64u, 444u, 0x08905FF0u>(ctx, &aot_mem) && ctx.pc == 0x088EE7ECu) goto L_088EE7EC;
    return;
L_088EE7EC:
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
L_088EE808:
    ctx.set_gpr(29, ctx.gpr[29] + static_cast<std::uint32_t>(-16));
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(12), ctx.gpr[31]);
    ctx.set_gpr(4, 2191u << 16u);
    ctx.set_gpr(4, ctx.gpr[4] + static_cast<std::uint32_t>(-6096));
    ctx.set_gpr(31, 0x088EE820u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0080_entry, 80u, 286u, 0x08945508u>(ctx, &aot_mem) && ctx.pc == 0x088EE820u) goto L_088EE820;
    return;
L_088EE820:
    ctx.set_gpr(31, rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(12)));
    ctx.set_gpr(29, ctx.gpr[29] + static_cast<std::uint32_t>(16));
    jump_target = ctx.gpr[31];
    // nop
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_088EE830:
    ctx.set_gpr(29, ctx.gpr[29] + static_cast<std::uint32_t>(-32));
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(28), ctx.gpr[31]);
    ctx.set_gpr(31, 0x088EE840u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0052_entry, 52u, 154u, 0x088D49C4u>(ctx, &aot_mem) && ctx.pc == 0x088EE840u) goto L_088EE840;
    return;
L_088EE840:
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(0), 0u);
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(4), 0u);
    ctx.set_gpr(2, 2228u << 16u);
    ctx.set_gpr(2, ctx.gpr[2] + static_cast<std::uint32_t>(-25528));
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(8), ctx.gpr[2]);
    ctx.set_gpr(4, 0u + 0u);
    ctx.set_gpr(5, 2245u << 16u);
    ctx.set_gpr(5, ctx.gpr[5] + static_cast<std::uint32_t>(29080));
    ctx.set_gpr(6, 2191u << 16u);
    ctx.set_gpr(6, ctx.gpr[6] + static_cast<std::uint32_t>(-13396));
    ctx.set_gpr(7, 2187u << 16u);
    ctx.set_gpr(7, ctx.gpr[7] + static_cast<std::uint32_t>(-9000));
    ctx.set_gpr(8, 2191u << 16u);
    ctx.set_gpr(8, ctx.gpr[8] + static_cast<std::uint32_t>(-5980));
    ctx.set_gpr(9, 2228u << 16u);
    ctx.set_gpr(9, ctx.gpr[9] + static_cast<std::uint32_t>(-25520));
    ctx.set_gpr(10, 0u + static_cast<std::uint32_t>(20));
    ctx.set_gpr(11, 2191u << 16u);
    ctx.set_gpr(11, ctx.gpr[11] + static_cast<std::uint32_t>(-6204));
    ctx.set_gpr(31, 0x088EE894u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0080_entry, 80u, 294u, 0x08945594u>(ctx, &aot_mem) && ctx.pc == 0x088EE894u) goto L_088EE894;
    return;
L_088EE894:
    ctx.set_gpr(31, rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(28)));
    ctx.set_gpr(29, ctx.gpr[29] + static_cast<std::uint32_t>(32));
    jump_target = ctx.gpr[31];
    // nop
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_088EE8A4:
    ctx.set_gpr(29, ctx.gpr[29] + static_cast<std::uint32_t>(-16));
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(12), ctx.gpr[31]);
    ctx.set_gpr(31, 0x088EE8B4u);
    // nop
    goto L_088EE778;
L_088EE8B4:
    ctx.set_gpr(31, rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(12)));
    ctx.set_gpr(29, ctx.gpr[29] + static_cast<std::uint32_t>(16));
    jump_target = ctx.gpr[31];
    // nop
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_088EE8C4:
    ctx.set_gpr(29, ctx.gpr[29] + static_cast<std::uint32_t>(-16));
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(12), ctx.gpr[31]);
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(8), ctx.gpr[16]);
    ctx.set_gpr(16, ctx.gpr[4] + 0u);
    ctx.set_gpr(31, 0x088EE8DCu);
    // nop
    goto L_088EEA3C;
L_088EE8DC:
    ctx.set_gpr(2, 2245u << 16u);
    ctx.set_gpr(4, rt.memory().aot_load32(ctx.gpr[2] + static_cast<std::uint32_t>(29084)));
    ctx.set_gpr(5, ctx.gpr[16] + 0u);
    ctx.set_gpr(31, 0x088EE8F0u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0080_entry, 80u, 50u, 0x089443D4u>(ctx, &aot_mem) && ctx.pc == 0x088EE8F0u) goto L_088EE8F0;
    return;
L_088EE8F0:
    ctx.set_gpr(31, rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(12)));
    ctx.set_gpr(16, rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(8)));
    ctx.set_gpr(29, ctx.gpr[29] + static_cast<std::uint32_t>(16));
    jump_target = ctx.gpr[31];
    // nop
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_088EE904:
    ctx.set_gpr(29, ctx.gpr[29] + static_cast<std::uint32_t>(-16));
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(12), ctx.gpr[31]);
    ctx.set_gpr(2, 2245u << 16u);
    ctx.set_gpr(2, rt.memory().aot_load32(ctx.gpr[2] + static_cast<std::uint32_t>(29084)));
    { const bool branch_taken = ctx.gpr[2] != 0u;
    // nop
      if (branch_taken) {
          goto L_088EE944;
      }
      goto L_088EE91C;
    }
L_088EE91C:
    ctx.set_gpr(31, 0x088EE924u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0078_entry, 78u, 217u, 0x0893CDECu>(ctx, &aot_mem) && ctx.pc == 0x088EE924u) goto L_088EE924;
    return;
L_088EE924:
    ctx.set_gpr(4, rt.memory().aot_load32(ctx.gpr[2] + static_cast<std::uint32_t>(0)));
    ctx.set_gpr(31, 0x088EE930u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0078_entry, 78u, 199u, 0x0893CC68u>(ctx, &aot_mem) && ctx.pc == 0x088EE930u) goto L_088EE930;
    return;
L_088EE930:
    ctx.set_gpr(4, ctx.gpr[2] + 0u);
    ctx.set_gpr(31, 0x088EE93Cu);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0052_entry, 52u, 732u, 0x088D6FE8u>(ctx, &aot_mem) && ctx.pc == 0x088EE93Cu) goto L_088EE93C;
    return;
L_088EE93C:
    ctx.set_gpr(3, 2245u << 16u);
    rt.memory().aot_store32(ctx.gpr[3] + static_cast<std::uint32_t>(29084), ctx.gpr[2]);
    goto L_088EE944;
L_088EE944:
    ctx.set_gpr(2, 2245u << 16u);
    ctx.set_gpr(2, rt.memory().aot_load32(ctx.gpr[2] + static_cast<std::uint32_t>(29084)));
    ctx.set_gpr(31, rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(12)));
    ctx.set_gpr(29, ctx.gpr[29] + static_cast<std::uint32_t>(16));
    jump_target = ctx.gpr[31];
    // nop
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_088EE95C:
    ctx.set_gpr(29, ctx.gpr[29] + static_cast<std::uint32_t>(-16));
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(12), ctx.gpr[31]);
    ctx.set_gpr(2, 2245u << 16u);
    ctx.set_gpr(2, rt.memory().aot_load32(ctx.gpr[2] + static_cast<std::uint32_t>(29084)));
    { const bool branch_taken = ctx.gpr[2] == 0u;
    // nop
      if (branch_taken) {
          goto L_088EE988;
      }
      goto L_088EE974;
    }
L_088EE974:
    ctx.set_gpr(2, rt.memory().aot_load32(ctx.gpr[2] + static_cast<std::uint32_t>(36)));
    ctx.set_gpr(2, ctx.gpr[2] & 4u);
    ctx.set_gpr(2, 0u < ctx.gpr[2] ? 1u : 0u);
    { const bool branch_taken = ctx.gpr[2] != 0u;
    // nop
      if (branch_taken) {
          goto L_088EE990;
      }
      goto L_088EE988;
    }
L_088EE988:
    ctx.set_gpr(31, 0x088EE990u);
    // nop
    goto L_088EEA3C;
L_088EE990:
    ctx.set_gpr(2, 2245u << 16u);
    ctx.set_gpr(2, rt.memory().aot_load32(ctx.gpr[2] + static_cast<std::uint32_t>(29084)));
    ctx.set_gpr(31, rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(12)));
    ctx.set_gpr(29, ctx.gpr[29] + static_cast<std::uint32_t>(16));
    jump_target = ctx.gpr[31];
    // nop
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_088EE9A8:
    ctx.set_gpr(29, ctx.gpr[29] + static_cast<std::uint32_t>(-48));
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(12), ctx.gpr[31]);
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(8), ctx.gpr[16]);
    ctx.set_gpr(4, ctx.gpr[29] + static_cast<std::uint32_t>(24));
    ctx.set_gpr(31, 0x088EE9C0u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0080_entry, 80u, 398u, 0x08945BF8u>(ctx, &aot_mem) && ctx.pc == 0x088EE9C0u) goto L_088EE9C0;
    return;
L_088EE9C0:
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(32), 0u);
    ctx.set_gpr(2, 2232u << 16u);
    ctx.set_gpr(2, ctx.gpr[2] + static_cast<std::uint32_t>(-4748));
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(24), ctx.gpr[2]);
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(44), 0u);
    ctx.set_gpr(31, 0x088EE9DCu);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0064_entry, 64u, 444u, 0x08905FF0u>(ctx, &aot_mem) && ctx.pc == 0x088EE9DCu) goto L_088EE9DC;
    return;
L_088EE9DC:
    ctx.set_gpr(2, rt.memory().aot_load32(ctx.gpr[2] + static_cast<std::uint32_t>(932)));
    ctx.set_gpr(2, ctx.gpr[2] + ctx.gpr[29]);
    ctx.set_gpr(16, rt.memory().aot_load32(ctx.gpr[2] + static_cast<std::uint32_t>(24)));
    ctx.set_gpr(2, 2232u << 16u);
    ctx.set_gpr(2, ctx.gpr[2] + static_cast<std::uint32_t>(-4748));
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(24), ctx.gpr[2]);
    ctx.set_gpr(4, rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(44)));
    { const bool branch_taken = ctx.gpr[4] == 0u;
    // nop
      if (branch_taken) {
          goto L_088EEA08;
      }
      goto L_088EEA00;
    }
L_088EEA00:
    ctx.set_gpr(31, 0x088EEA08u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0014_entry, 14u, 257u, 0x0883D454u>(ctx, &aot_mem) && ctx.pc == 0x088EEA08u) goto L_088EEA08;
    return;
L_088EEA08:
    ctx.set_gpr(2, 2232u << 16u);
    ctx.set_gpr(2, ctx.gpr[2] + static_cast<std::uint32_t>(-15576));
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(24), ctx.gpr[2]);
    ctx.set_gpr(4, ctx.gpr[29] + static_cast<std::uint32_t>(32));
    ctx.set_gpr(5, 0u + static_cast<std::uint32_t>(-1));
    ctx.set_gpr(31, 0x088EEA24u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0020_entry, 20u, 288u, 0x088555D0u>(ctx, &aot_mem) && ctx.pc == 0x088EEA24u) goto L_088EEA24;
    return;
L_088EEA24:
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
L_088EEA3C:
    ctx.set_gpr(29, ctx.gpr[29] + static_cast<std::uint32_t>(-16));
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(12), ctx.gpr[31]);
    ctx.set_gpr(4, 2191u << 16u);
    ctx.set_gpr(4, ctx.gpr[4] + static_cast<std::uint32_t>(-5532));
    ctx.set_gpr(31, 0x088EEA54u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0080_entry, 80u, 286u, 0x08945508u>(ctx, &aot_mem) && ctx.pc == 0x088EEA54u) goto L_088EEA54;
    return;
L_088EEA54:
    ctx.set_gpr(31, rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(12)));
    ctx.set_gpr(29, ctx.gpr[29] + static_cast<std::uint32_t>(16));
    jump_target = ctx.gpr[31];
    // nop
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_088EEA64:
    ctx.set_gpr(29, ctx.gpr[29] + static_cast<std::uint32_t>(-32));
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(28), ctx.gpr[31]);
    ctx.set_gpr(31, 0x088EEA74u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0052_entry, 52u, 154u, 0x088D49C4u>(ctx, &aot_mem) && ctx.pc == 0x088EEA74u) goto L_088EEA74;
    return;
L_088EEA74:
    ctx.set_gpr(2, 2191u << 16u);
    ctx.set_gpr(2, ctx.gpr[2] + static_cast<std::uint32_t>(-5376));
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(0), ctx.gpr[2]);
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(4), 0u);
    ctx.set_gpr(2, 2228u << 16u);
    ctx.set_gpr(2, ctx.gpr[2] + static_cast<std::uint32_t>(-25496));
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(8), ctx.gpr[2]);
    ctx.set_gpr(4, 0u + 0u);
    ctx.set_gpr(5, 2245u << 16u);
    ctx.set_gpr(5, ctx.gpr[5] + static_cast<std::uint32_t>(29084));
    ctx.set_gpr(6, 2191u << 16u);
    ctx.set_gpr(6, ctx.gpr[6] + static_cast<std::uint32_t>(4924));
    ctx.set_gpr(7, 2187u << 16u);
    ctx.set_gpr(7, ctx.gpr[7] + static_cast<std::uint32_t>(-6348));
    ctx.set_gpr(8, 2191u << 16u);
    ctx.set_gpr(8, ctx.gpr[8] + static_cast<std::uint32_t>(-5408));
    ctx.set_gpr(9, 2228u << 16u);
    ctx.set_gpr(9, ctx.gpr[9] + static_cast<std::uint32_t>(-25488));
    ctx.set_gpr(10, 0u + static_cast<std::uint32_t>(24));
    ctx.set_gpr(11, 2191u << 16u);
    ctx.set_gpr(11, ctx.gpr[11] + static_cast<std::uint32_t>(-5720));
    ctx.set_gpr(31, 0x088EEAD0u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0080_entry, 80u, 294u, 0x08945594u>(ctx, &aot_mem) && ctx.pc == 0x088EEAD0u) goto L_088EEAD0;
    return;
L_088EEAD0:
    ctx.set_gpr(31, rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(28)));
    ctx.set_gpr(29, ctx.gpr[29] + static_cast<std::uint32_t>(32));
    jump_target = ctx.gpr[31];
    // nop
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_088EEAE0:
    ctx.set_gpr(29, ctx.gpr[29] + static_cast<std::uint32_t>(-16));
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(12), ctx.gpr[31]);
    ctx.set_gpr(31, 0x088EEAF0u);
    // nop
    goto L_088EE95C;
L_088EEAF0:
    ctx.set_gpr(31, rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(12)));
    ctx.set_gpr(29, ctx.gpr[29] + static_cast<std::uint32_t>(16));
    jump_target = ctx.gpr[31];
    // nop
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_088EEB00:
    ctx.set_gpr(29, ctx.gpr[29] + static_cast<std::uint32_t>(-16));
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(12), ctx.gpr[31]);
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(8), ctx.gpr[18]);
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(4), ctx.gpr[17]);
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(0), ctx.gpr[16]);
    ctx.set_gpr(2, 2245u << 16u);
    ctx.set_gpr(17, rt.memory().aot_load32(ctx.gpr[2] + static_cast<std::uint32_t>(29084)));
    ctx.set_gpr(4, ctx.gpr[17] + 0u);
    ctx.set_gpr(31, 0x088EEB28u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0080_entry, 80u, 236u, 0x089451A8u>(ctx, &aot_mem) && ctx.pc == 0x088EEB28u) goto L_088EEB28;
    return;
L_088EEB28:
    ctx.set_gpr(18, ctx.gpr[2] + 0u);
    ctx.set_gpr(4, ctx.gpr[17] + 0u);
    ctx.set_gpr(5, 2228u << 16u);
    ctx.set_gpr(5, ctx.gpr[5] + static_cast<std::uint32_t>(-25464));
    ctx.set_gpr(6, 0u + static_cast<std::uint32_t>(1));
    ctx.set_gpr(31, 0x088EEB44u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0080_entry, 80u, 151u, 0x08944B98u>(ctx, &aot_mem) && ctx.pc == 0x088EEB44u) goto L_088EEB44;
    return;
L_088EEB44:
    ctx.set_gpr(4, ctx.gpr[17] + 0u);
    ctx.set_gpr(5, ctx.gpr[18] + 0u);
    ctx.set_gpr(31, 0x088EEB54u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0080_entry, 80u, 148u, 0x08944B4Cu>(ctx, &aot_mem) && ctx.pc == 0x088EEB54u) goto L_088EEB54;
    return;
L_088EEB54:
    ctx.set_gpr(16, ctx.gpr[2] + 0u);
    ctx.set_gpr(31, 0x088EEB60u);
    // nop
    goto L_088EE720;
L_088EEB60:
    rt.memory().aot_store32(ctx.gpr[16] + static_cast<std::uint32_t>(52), ctx.gpr[2]);
    ctx.set_gpr(2, 0u + static_cast<std::uint32_t>(1));
    rt.memory().aot_store8(ctx.gpr[16] + static_cast<std::uint32_t>(48), static_cast<std::uint8_t>(ctx.gpr[2]));
    ctx.set_gpr(4, ctx.gpr[17] + 0u);
    ctx.set_gpr(5, 2228u << 16u);
    ctx.set_gpr(5, ctx.gpr[5] + static_cast<std::uint32_t>(-25440));
    ctx.set_gpr(6, 2228u << 16u);
    ctx.set_gpr(6, ctx.gpr[6] + static_cast<std::uint32_t>(-25436));
    ctx.set_gpr(7, 2228u << 16u);
    ctx.set_gpr(7, ctx.gpr[7] + static_cast<std::uint32_t>(-25432));
    ctx.set_gpr(8, ctx.gpr[18] + 0u);
    ctx.set_gpr(31, 0x088EEB94u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0080_entry, 80u, 162u, 0x08944C7Cu>(ctx, &aot_mem) && ctx.pc == 0x088EEB94u) goto L_088EEB94;
    return;
L_088EEB94:
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
L_088EEBB0:
    ctx.set_gpr(29, ctx.gpr[29] + static_cast<std::uint32_t>(-16));
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(12), ctx.gpr[31]);
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(8), ctx.gpr[16]);
    ctx.set_gpr(16, ctx.gpr[4] + 0u);
    ctx.set_gpr(31, 0x088EEBC8u);
    // nop
    goto L_088EECE8;
L_088EEBC8:
    ctx.set_gpr(2, 2245u << 16u);
    ctx.set_gpr(4, rt.memory().aot_load32(ctx.gpr[2] + static_cast<std::uint32_t>(29092)));
    ctx.set_gpr(5, ctx.gpr[16] + 0u);
    ctx.set_gpr(31, 0x088EEBDCu);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0080_entry, 80u, 50u, 0x089443D4u>(ctx, &aot_mem) && ctx.pc == 0x088EEBDCu) goto L_088EEBDC;
    return;
L_088EEBDC:
    ctx.set_gpr(31, rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(12)));
    ctx.set_gpr(16, rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(8)));
    ctx.set_gpr(29, ctx.gpr[29] + static_cast<std::uint32_t>(16));
    jump_target = ctx.gpr[31];
    // nop
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_088EEBF0:
    ctx.set_gpr(29, ctx.gpr[29] + static_cast<std::uint32_t>(-16));
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(12), ctx.gpr[31]);
    ctx.set_gpr(2, 2245u << 16u);
    ctx.set_gpr(2, rt.memory().aot_load32(ctx.gpr[2] + static_cast<std::uint32_t>(29092)));
    { const bool branch_taken = ctx.gpr[2] != 0u;
    // nop
      if (branch_taken) {
          goto L_088EEC30;
      }
      goto L_088EEC08;
    }
L_088EEC08:
    ctx.set_gpr(31, 0x088EEC10u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0078_entry, 78u, 217u, 0x0893CDECu>(ctx, &aot_mem) && ctx.pc == 0x088EEC10u) goto L_088EEC10;
    return;
L_088EEC10:
    ctx.set_gpr(4, rt.memory().aot_load32(ctx.gpr[2] + static_cast<std::uint32_t>(0)));
    ctx.set_gpr(31, 0x088EEC1Cu);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0078_entry, 78u, 199u, 0x0893CC68u>(ctx, &aot_mem) && ctx.pc == 0x088EEC1Cu) goto L_088EEC1C;
    return;
L_088EEC1C:
    ctx.set_gpr(4, ctx.gpr[2] + 0u);
    ctx.set_gpr(31, 0x088EEC28u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0052_entry, 52u, 732u, 0x088D6FE8u>(ctx, &aot_mem) && ctx.pc == 0x088EEC28u) goto L_088EEC28;
    return;
L_088EEC28:
    ctx.set_gpr(3, 2245u << 16u);
    rt.memory().aot_store32(ctx.gpr[3] + static_cast<std::uint32_t>(29092), ctx.gpr[2]);
    goto L_088EEC30;
L_088EEC30:
    ctx.set_gpr(2, 2245u << 16u);
    ctx.set_gpr(2, rt.memory().aot_load32(ctx.gpr[2] + static_cast<std::uint32_t>(29092)));
    ctx.set_gpr(31, rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(12)));
    ctx.set_gpr(29, ctx.gpr[29] + static_cast<std::uint32_t>(16));
    jump_target = ctx.gpr[31];
    // nop
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_088EEC48:
    ctx.set_gpr(29, ctx.gpr[29] + static_cast<std::uint32_t>(-16));
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(12), ctx.gpr[31]);
    ctx.set_gpr(2, 2245u << 16u);
    ctx.set_gpr(2, rt.memory().aot_load32(ctx.gpr[2] + static_cast<std::uint32_t>(29092)));
    { const bool branch_taken = ctx.gpr[2] == 0u;
    // nop
      if (branch_taken) {
          goto L_088EEC74;
      }
      goto L_088EEC60;
    }
L_088EEC60:
    ctx.set_gpr(2, rt.memory().aot_load32(ctx.gpr[2] + static_cast<std::uint32_t>(36)));
    ctx.set_gpr(2, ctx.gpr[2] & 4u);
    ctx.set_gpr(2, 0u < ctx.gpr[2] ? 1u : 0u);
    { const bool branch_taken = ctx.gpr[2] != 0u;
    // nop
      if (branch_taken) {
          goto L_088EEC7C;
      }
      goto L_088EEC74;
    }
L_088EEC74:
    ctx.set_gpr(31, 0x088EEC7Cu);
    // nop
    goto L_088EECE8;
L_088EEC7C:
    ctx.set_gpr(2, 2245u << 16u);
    ctx.set_gpr(2, rt.memory().aot_load32(ctx.gpr[2] + static_cast<std::uint32_t>(29092)));
    ctx.set_gpr(31, rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(12)));
    ctx.set_gpr(29, ctx.gpr[29] + static_cast<std::uint32_t>(16));
    jump_target = ctx.gpr[31];
    // nop
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_088EEC94:
    ctx.set_gpr(29, ctx.gpr[29] + static_cast<std::uint32_t>(-4000));
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(12), ctx.gpr[31]);
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(8), ctx.gpr[16]);
    ctx.set_gpr(4, ctx.gpr[29] + static_cast<std::uint32_t>(16));
    ctx.set_gpr(31, 0x088EECACu);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0075_entry, 75u, 348u, 0x08932560u>(ctx, &aot_mem) && ctx.pc == 0x088EECACu) goto L_088EECAC;
    return;
L_088EECAC:
    ctx.set_gpr(31, 0x088EECB4u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0064_entry, 64u, 444u, 0x08905FF0u>(ctx, &aot_mem) && ctx.pc == 0x088EECB4u) goto L_088EECB4;
    return;
L_088EECB4:
    ctx.set_gpr(2, rt.memory().aot_load32(ctx.gpr[2] + static_cast<std::uint32_t>(932)));
    ctx.set_gpr(2, ctx.gpr[2] + ctx.gpr[29]);
    ctx.set_gpr(16, rt.memory().aot_load32(ctx.gpr[2] + static_cast<std::uint32_t>(16)));
    ctx.set_gpr(4, ctx.gpr[29] + static_cast<std::uint32_t>(16));
    ctx.set_gpr(5, 0u + static_cast<std::uint32_t>(-1));
    ctx.set_gpr(31, 0x088EECD0u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0075_entry, 75u, 357u, 0x0893264Cu>(ctx, &aot_mem) && ctx.pc == 0x088EECD0u) goto L_088EECD0;
    return;
L_088EECD0:
    ctx.set_gpr(2, ctx.gpr[16] + 0u);
    ctx.set_gpr(31, rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(12)));
    ctx.set_gpr(16, rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(8)));
    ctx.set_gpr(29, ctx.gpr[29] + static_cast<std::uint32_t>(4000));
    jump_target = ctx.gpr[31];
    // nop
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_088EECE8:
    ctx.set_gpr(29, ctx.gpr[29] + static_cast<std::uint32_t>(-16));
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(12), ctx.gpr[31]);
    ctx.set_gpr(4, 2191u << 16u);
    ctx.set_gpr(4, ctx.gpr[4] + static_cast<std::uint32_t>(-4848));
    ctx.set_gpr(31, 0x088EED00u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0080_entry, 80u, 286u, 0x08945508u>(ctx, &aot_mem) && ctx.pc == 0x088EED00u) goto L_088EED00;
    return;
L_088EED00:
    ctx.set_gpr(31, rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(12)));
    ctx.set_gpr(29, ctx.gpr[29] + static_cast<std::uint32_t>(16));
    jump_target = ctx.gpr[31];
    // nop
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_088EED10:
    ctx.set_gpr(29, ctx.gpr[29] + static_cast<std::uint32_t>(-32));
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(28), ctx.gpr[31]);
    ctx.set_gpr(31, 0x088EED20u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0052_entry, 52u, 154u, 0x088D49C4u>(ctx, &aot_mem) && ctx.pc == 0x088EED20u) goto L_088EED20;
    return;
L_088EED20:
    ctx.set_gpr(2, 2191u << 16u);
    ctx.set_gpr(2, ctx.gpr[2] + static_cast<std::uint32_t>(-4692));
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(0), ctx.gpr[2]);
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(4), 0u);
    ctx.set_gpr(2, 2228u << 16u);
    ctx.set_gpr(2, ctx.gpr[2] + static_cast<std::uint32_t>(-25428));
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(8), ctx.gpr[2]);
    ctx.set_gpr(4, 0u + 0u);
    ctx.set_gpr(5, 2245u << 16u);
    ctx.set_gpr(5, ctx.gpr[5] + static_cast<std::uint32_t>(29092));
    ctx.set_gpr(6, 2196u << 16u);
    ctx.set_gpr(6, ctx.gpr[6] + static_cast<std::uint32_t>(25520));
    ctx.set_gpr(7, 2188u << 16u);
    ctx.set_gpr(7, ctx.gpr[7] + static_cast<std::uint32_t>(-27092));
    ctx.set_gpr(8, 2191u << 16u);
    ctx.set_gpr(8, ctx.gpr[8] + static_cast<std::uint32_t>(-4724));
    ctx.set_gpr(9, 2228u << 16u);
    ctx.set_gpr(9, ctx.gpr[9] + static_cast<std::uint32_t>(-25420));
    ctx.set_gpr(10, 0u + static_cast<std::uint32_t>(3984));
    ctx.set_gpr(11, 2191u << 16u);
    ctx.set_gpr(11, ctx.gpr[11] + static_cast<std::uint32_t>(-4972));
    ctx.set_gpr(31, 0x088EED7Cu);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0080_entry, 80u, 294u, 0x08945594u>(ctx, &aot_mem) && ctx.pc == 0x088EED7Cu) goto L_088EED7C;
    return;
L_088EED7C:
    ctx.set_gpr(31, rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(28)));
    ctx.set_gpr(29, ctx.gpr[29] + static_cast<std::uint32_t>(32));
    jump_target = ctx.gpr[31];
    // nop
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_088EED8C:
    ctx.set_gpr(29, ctx.gpr[29] + static_cast<std::uint32_t>(-16));
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(12), ctx.gpr[31]);
    ctx.set_gpr(31, 0x088EED9Cu);
    // nop
    goto L_088EEC48;
L_088EED9C:
    ctx.set_gpr(31, rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(12)));
    ctx.set_gpr(29, ctx.gpr[29] + static_cast<std::uint32_t>(16));
    jump_target = ctx.gpr[31];
    // nop
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_088EEDAC:
    ctx.set_gpr(29, ctx.gpr[29] + static_cast<std::uint32_t>(-16));
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(12), ctx.gpr[31]);
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(8), ctx.gpr[18]);
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(4), ctx.gpr[17]);
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(0), ctx.gpr[16]);
    ctx.set_gpr(2, 2245u << 16u);
    ctx.set_gpr(4, rt.memory().aot_load32(ctx.gpr[2] + static_cast<std::uint32_t>(29092)));
    ctx.set_gpr(5, 2228u << 16u);
    ctx.set_gpr(5, ctx.gpr[5] + static_cast<std::uint32_t>(-25272));
    ctx.set_gpr(31, 0x088EEDD8u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0080_entry, 80u, 272u, 0x08945418u>(ctx, &aot_mem) && ctx.pc == 0x088EEDD8u) goto L_088EEDD8;
    return;
L_088EEDD8:
    ctx.set_gpr(2, 2245u << 16u);
    ctx.set_gpr(17, rt.memory().aot_load32(ctx.gpr[2] + static_cast<std::uint32_t>(29092)));
    ctx.set_gpr(4, ctx.gpr[17] + 0u);
    ctx.set_gpr(31, 0x088EEDECu);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0080_entry, 80u, 236u, 0x089451A8u>(ctx, &aot_mem) && ctx.pc == 0x088EEDECu) goto L_088EEDEC;
    return;
L_088EEDEC:
    ctx.set_gpr(18, ctx.gpr[2] + 0u);
    ctx.set_gpr(4, ctx.gpr[17] + 0u);
    ctx.set_gpr(5, 2228u << 16u);
    ctx.set_gpr(5, ctx.gpr[5] + static_cast<std::uint32_t>(-25400));
    ctx.set_gpr(6, 0u + static_cast<std::uint32_t>(4));
    ctx.set_gpr(31, 0x088EEE08u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0080_entry, 80u, 151u, 0x08944B98u>(ctx, &aot_mem) && ctx.pc == 0x088EEE08u) goto L_088EEE08;
    return;
L_088EEE08:
    ctx.set_gpr(4, ctx.gpr[17] + 0u);
    ctx.set_gpr(5, ctx.gpr[18] + 0u);
    ctx.set_gpr(31, 0x088EEE18u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0080_entry, 80u, 148u, 0x08944B4Cu>(ctx, &aot_mem) && ctx.pc == 0x088EEE18u) goto L_088EEE18;
    return;
L_088EEE18:
    ctx.set_gpr(3, 0u + static_cast<std::uint32_t>(64));
    rt.memory().aot_store32(ctx.gpr[2] + static_cast<std::uint32_t>(48), ctx.gpr[3]);
    ctx.set_gpr(5, ctx.gpr[18] + static_cast<std::uint32_t>(1));
    ctx.set_gpr(4, ctx.gpr[17] + 0u);
    ctx.set_gpr(31, 0x088EEE30u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0080_entry, 80u, 148u, 0x08944B4Cu>(ctx, &aot_mem) && ctx.pc == 0x088EEE30u) goto L_088EEE30;
    return;
L_088EEE30:
    ctx.set_gpr(16, ctx.gpr[2] + 0u);
    ctx.set_gpr(4, ctx.gpr[16] + 0u);
    ctx.set_gpr(5, 0u + static_cast<std::uint32_t>(42));
    ctx.set_gpr(31, 0x088EEE44u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0072_entry, 72u, 648u, 0x08926D64u>(ctx, &aot_mem) && ctx.pc == 0x088EEE44u) goto L_088EEE44;
    return;
L_088EEE44:
    rt.memory().aot_store8(ctx.gpr[16] + static_cast<std::uint32_t>(38), static_cast<std::uint8_t>(0u));
    ctx.set_gpr(5, ctx.gpr[18] + static_cast<std::uint32_t>(2));
    ctx.set_gpr(4, ctx.gpr[17] + 0u);
    ctx.set_gpr(31, 0x088EEE58u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0080_entry, 80u, 148u, 0x08944B4Cu>(ctx, &aot_mem) && ctx.pc == 0x088EEE58u) goto L_088EEE58;
    return;
L_088EEE58:
    rt.memory().aot_store8(ctx.gpr[2] + static_cast<std::uint32_t>(38), static_cast<std::uint8_t>(0u));
    ctx.set_gpr(5, ctx.gpr[18] + static_cast<std::uint32_t>(3));
    ctx.set_gpr(4, ctx.gpr[17] + 0u);
    ctx.set_gpr(31, 0x088EEE6Cu);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0080_entry, 80u, 148u, 0x08944B4Cu>(ctx, &aot_mem) && ctx.pc == 0x088EEE6Cu) goto L_088EEE6C;
    return;
L_088EEE6C:
    ctx.set_gpr(16, ctx.gpr[2] + 0u);
    ctx.set_gpr(31, 0x088EEE78u);
    // nop
    goto L_088EE904;
L_088EEE78:
    rt.memory().aot_store32(ctx.gpr[16] + static_cast<std::uint32_t>(52), ctx.gpr[2]);
    rt.memory().aot_store8(ctx.gpr[16] + static_cast<std::uint32_t>(48), static_cast<std::uint8_t>(0u));
    rt.memory().aot_store8(ctx.gpr[16] + static_cast<std::uint32_t>(38), static_cast<std::uint8_t>(0u));
    ctx.set_gpr(4, ctx.gpr[17] + 0u);
    ctx.set_gpr(5, 2228u << 16u);
    ctx.set_gpr(5, ctx.gpr[5] + static_cast<std::uint32_t>(-25320));
    ctx.set_gpr(6, 2228u << 16u);
    ctx.set_gpr(6, ctx.gpr[6] + static_cast<std::uint32_t>(-25304));
    ctx.set_gpr(7, 2228u << 16u);
    ctx.set_gpr(7, ctx.gpr[7] + static_cast<std::uint32_t>(-25288));
    ctx.set_gpr(8, ctx.gpr[18] + 0u);
    ctx.set_gpr(31, 0x088EEEACu);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0080_entry, 80u, 162u, 0x08944C7Cu>(ctx, &aot_mem) && ctx.pc == 0x088EEEACu) goto L_088EEEAC;
    return;
L_088EEEAC:
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
L_088EEEC8:
    ctx.set_gpr(29, ctx.gpr[29] + static_cast<std::uint32_t>(-16));
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(12), ctx.gpr[31]);
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(8), ctx.gpr[16]);
    ctx.set_gpr(16, ctx.gpr[4] + 0u);
    ctx.set_gpr(31, 0x088EEEE0u);
    // nop
    goto L_088EEFC0;
L_088EEEE0:
    ctx.set_gpr(2, 2245u << 16u);
    ctx.set_gpr(4, rt.memory().aot_load32(ctx.gpr[2] + static_cast<std::uint32_t>(29112)));
    ctx.set_gpr(5, ctx.gpr[16] + 0u);
    ctx.set_gpr(31, 0x088EEEF4u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0080_entry, 80u, 50u, 0x089443D4u>(ctx, &aot_mem) && ctx.pc == 0x088EEEF4u) goto L_088EEEF4;
    return;
L_088EEEF4:
    ctx.set_gpr(31, rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(12)));
    ctx.set_gpr(16, rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(8)));
    ctx.set_gpr(29, ctx.gpr[29] + static_cast<std::uint32_t>(16));
    jump_target = ctx.gpr[31];
    // nop
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_088EEF08:
    ctx.set_gpr(29, ctx.gpr[29] + static_cast<std::uint32_t>(-16));
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(12), ctx.gpr[31]);
    ctx.set_gpr(2, 2245u << 16u);
    ctx.set_gpr(2, rt.memory().aot_load32(ctx.gpr[2] + static_cast<std::uint32_t>(29112)));
    { const bool branch_taken = ctx.gpr[2] == 0u;
    // nop
      if (branch_taken) {
          goto L_088EEF34;
      }
      goto L_088EEF20;
    }
L_088EEF20:
    ctx.set_gpr(2, rt.memory().aot_load32(ctx.gpr[2] + static_cast<std::uint32_t>(36)));
    ctx.set_gpr(2, ctx.gpr[2] & 4u);
    ctx.set_gpr(2, 0u < ctx.gpr[2] ? 1u : 0u);
    { const bool branch_taken = ctx.gpr[2] != 0u;
    // nop
      if (branch_taken) {
          goto L_088EEF3C;
      }
      goto L_088EEF34;
    }
L_088EEF34:
    ctx.set_gpr(31, 0x088EEF3Cu);
    // nop
    goto L_088EEFC0;
L_088EEF3C:
    ctx.set_gpr(2, 2245u << 16u);
    ctx.set_gpr(2, rt.memory().aot_load32(ctx.gpr[2] + static_cast<std::uint32_t>(29112)));
    ctx.set_gpr(31, rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(12)));
    ctx.set_gpr(29, ctx.gpr[29] + static_cast<std::uint32_t>(16));
    jump_target = ctx.gpr[31];
    // nop
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_088EEF54:
    ctx.set_gpr(29, ctx.gpr[29] + static_cast<std::uint32_t>(-48));
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(12), ctx.gpr[31]);
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(8), ctx.gpr[16]);
    ctx.set_gpr(4, ctx.gpr[29] + static_cast<std::uint32_t>(28));
    ctx.set_gpr(31, 0x088EEF6Cu);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0080_entry, 80u, 398u, 0x08945BF8u>(ctx, &aot_mem) && ctx.pc == 0x088EEF6Cu) goto L_088EEF6C;
    return;
L_088EEF6C:
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(36), 0u);
    ctx.set_gpr(2, 2232u << 16u);
    ctx.set_gpr(2, ctx.gpr[2] + static_cast<std::uint32_t>(10344));
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(28), ctx.gpr[2]);
    ctx.set_gpr(31, 0x088EEF84u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0064_entry, 64u, 444u, 0x08905FF0u>(ctx, &aot_mem) && ctx.pc == 0x088EEF84u) goto L_088EEF84;
    return;
L_088EEF84:
    ctx.set_gpr(2, rt.memory().aot_load32(ctx.gpr[2] + static_cast<std::uint32_t>(932)));
    ctx.set_gpr(2, ctx.gpr[2] + ctx.gpr[29]);
    ctx.set_gpr(16, rt.memory().aot_load32(ctx.gpr[2] + static_cast<std::uint32_t>(28)));
    ctx.set_gpr(2, 2232u << 16u);
    ctx.set_gpr(2, ctx.gpr[2] + static_cast<std::uint32_t>(-15576));
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(28), ctx.gpr[2]);
    ctx.set_gpr(4, ctx.gpr[29] + static_cast<std::uint32_t>(36));
    ctx.set_gpr(31, 0x088EEFA8u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0019_entry, 19u, 764u, 0x08853094u>(ctx, &aot_mem) && ctx.pc == 0x088EEFA8u) goto L_088EEFA8;
    return;
L_088EEFA8:
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
L_088EEFC0:
    ctx.set_gpr(29, ctx.gpr[29] + static_cast<std::uint32_t>(-16));
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(12), ctx.gpr[31]);
    ctx.set_gpr(4, 2191u << 16u);
    ctx.set_gpr(4, ctx.gpr[4] + static_cast<std::uint32_t>(-4120));
    ctx.set_gpr(31, 0x088EEFD8u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0080_entry, 80u, 286u, 0x08945508u>(ctx, &aot_mem) && ctx.pc == 0x088EEFD8u) goto L_088EEFD8;
    return;
L_088EEFD8:
    ctx.set_gpr(31, rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(12)));
    ctx.set_gpr(29, ctx.gpr[29] + static_cast<std::uint32_t>(16));
    jump_target = ctx.gpr[31];
    // nop
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_088EEFE8:
    ctx.set_gpr(29, ctx.gpr[29] + static_cast<std::uint32_t>(-32));
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(28), ctx.gpr[31]);
    ctx.set_gpr(31, 0x088EEFF8u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0052_entry, 52u, 154u, 0x088D49C4u>(ctx, &aot_mem) && ctx.pc == 0x088EEFF8u) goto L_088EEFF8;
    return;
L_088EEFF8:
    ctx.set_gpr(2, 2191u << 16u);
    ctx.set_gpr(2, ctx.gpr[2] + static_cast<std::uint32_t>(-3972));
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(0), ctx.gpr[2]);
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(4), 0u);
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(8), 0u);
    ctx.set_gpr(4, 0u + 0u);
    ctx.set_gpr(5, 2245u << 16u);
    ctx.set_gpr(5, ctx.gpr[5] + static_cast<std::uint32_t>(29112));
    ctx.set_gpr(6, 2191u << 16u);
    ctx.set_gpr(6, ctx.gpr[6] + static_cast<std::uint32_t>(-10116));
    ctx.set_gpr(7, 2187u << 16u);
    ctx.set_gpr(7, ctx.gpr[7] + static_cast<std::uint32_t>(16508));
    ctx.set_gpr(8, 2191u << 16u);
    ctx.set_gpr(8, ctx.gpr[8] + static_cast<std::uint32_t>(-4004));
    ctx.set_gpr(9, 2228u << 16u);
    ctx.set_gpr(9, ctx.gpr[9] + static_cast<std::uint32_t>(-25260));
    ctx.set_gpr(10, 0u + static_cast<std::uint32_t>(20));
    ctx.set_gpr(11, 2191u << 16u);
    ctx.set_gpr(11, ctx.gpr[11] + static_cast<std::uint32_t>(-4268));
    ctx.set_gpr(31, 0x088EF04Cu);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0080_entry, 80u, 294u, 0x08945594u>(ctx, &aot_mem) && ctx.pc == 0x088EF04Cu) goto L_088EF04C;
    return;
L_088EF04C:
    ctx.set_gpr(31, rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(28)));
    ctx.set_gpr(29, ctx.gpr[29] + static_cast<std::uint32_t>(32));
    jump_target = ctx.gpr[31];
    // nop
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_088EF05C:
    ctx.set_gpr(29, ctx.gpr[29] + static_cast<std::uint32_t>(-16));
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(12), ctx.gpr[31]);
    ctx.set_gpr(31, 0x088EF06Cu);
    // nop
    goto L_088EEF08;
L_088EF06C:
    ctx.set_gpr(31, rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(12)));
    ctx.set_gpr(29, ctx.gpr[29] + static_cast<std::uint32_t>(16));
    jump_target = ctx.gpr[31];
    // nop
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_088EF07C:
    ctx.set_gpr(29, ctx.gpr[29] + static_cast<std::uint32_t>(-16));
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(12), ctx.gpr[31]);
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(8), ctx.gpr[17]);
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(4), ctx.gpr[16]);
    ctx.set_gpr(2, 2245u << 16u);
    ctx.set_gpr(16, rt.memory().aot_load32(ctx.gpr[2] + static_cast<std::uint32_t>(29112)));
    ctx.set_gpr(4, ctx.gpr[16] + 0u);
    ctx.set_gpr(31, 0x088EF0A0u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0080_entry, 80u, 236u, 0x089451A8u>(ctx, &aot_mem) && ctx.pc == 0x088EF0A0u) goto L_088EF0A0;
    return;
L_088EF0A0:
    ctx.set_gpr(17, ctx.gpr[2] + 0u);
    ctx.set_gpr(4, ctx.gpr[16] + 0u);
    ctx.set_gpr(5, 2228u << 16u);
    ctx.set_gpr(5, ctx.gpr[5] + static_cast<std::uint32_t>(-25240));
    ctx.set_gpr(6, 0u + static_cast<std::uint32_t>(2));
    ctx.set_gpr(31, 0x088EF0BCu);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0080_entry, 80u, 151u, 0x08944B98u>(ctx, &aot_mem) && ctx.pc == 0x088EF0BCu) goto L_088EF0BC;
    return;
L_088EF0BC:
    ctx.set_gpr(4, ctx.gpr[16] + 0u);
    ctx.set_gpr(5, 2228u << 16u);
    ctx.set_gpr(5, ctx.gpr[5] + static_cast<std::uint32_t>(-25232));
    ctx.set_gpr(6, 2228u << 16u);
    ctx.set_gpr(6, ctx.gpr[6] + static_cast<std::uint32_t>(-25224));
    ctx.set_gpr(7, 2228u << 16u);
    ctx.set_gpr(7, ctx.gpr[7] + static_cast<std::uint32_t>(-25216));
    ctx.set_gpr(8, ctx.gpr[17] + 0u);
    ctx.set_gpr(31, 0x088EF0E4u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0080_entry, 80u, 162u, 0x08944C7Cu>(ctx, &aot_mem) && ctx.pc == 0x088EF0E4u) goto L_088EF0E4;
    return;
L_088EF0E4:
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
L_088EF0FC:
    ctx.set_gpr(29, ctx.gpr[29] + static_cast<std::uint32_t>(-16));
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(12), ctx.gpr[31]);
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(8), ctx.gpr[16]);
    ctx.set_gpr(16, ctx.gpr[4] + 0u);
    ctx.set_gpr(31, 0x088EF114u);
    // nop
    goto L_088EF1CC;
L_088EF114:
    ctx.set_gpr(2, 2245u << 16u);
    ctx.set_gpr(4, rt.memory().aot_load32(ctx.gpr[2] + static_cast<std::uint32_t>(29124)));
    ctx.set_gpr(5, ctx.gpr[16] + 0u);
    ctx.set_gpr(31, 0x088EF128u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0080_entry, 80u, 50u, 0x089443D4u>(ctx, &aot_mem) && ctx.pc == 0x088EF128u) goto L_088EF128;
    return;
L_088EF128:
    ctx.set_gpr(31, rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(12)));
    ctx.set_gpr(16, rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(8)));
    ctx.set_gpr(29, ctx.gpr[29] + static_cast<std::uint32_t>(16));
    jump_target = ctx.gpr[31];
    // nop
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_088EF13C:
    ctx.set_gpr(29, ctx.gpr[29] + static_cast<std::uint32_t>(-16));
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(12), ctx.gpr[31]);
    ctx.set_gpr(2, 2245u << 16u);
    ctx.set_gpr(2, rt.memory().aot_load32(ctx.gpr[2] + static_cast<std::uint32_t>(29124)));
    { const bool branch_taken = ctx.gpr[2] == 0u;
    // nop
      if (branch_taken) {
          goto L_088EF168;
      }
      goto L_088EF154;
    }
L_088EF154:
    ctx.set_gpr(2, rt.memory().aot_load32(ctx.gpr[2] + static_cast<std::uint32_t>(36)));
    ctx.set_gpr(2, ctx.gpr[2] & 4u);
    ctx.set_gpr(2, 0u < ctx.gpr[2] ? 1u : 0u);
    { const bool branch_taken = ctx.gpr[2] != 0u;
    // nop
      if (branch_taken) {
          goto L_088EF170;
      }
      goto L_088EF168;
    }
L_088EF168:
    ctx.set_gpr(31, 0x088EF170u);
    // nop
    goto L_088EF1CC;
L_088EF170:
    ctx.set_gpr(2, 2245u << 16u);
    ctx.set_gpr(2, rt.memory().aot_load32(ctx.gpr[2] + static_cast<std::uint32_t>(29124)));
    ctx.set_gpr(31, rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(12)));
    ctx.set_gpr(29, ctx.gpr[29] + static_cast<std::uint32_t>(16));
    jump_target = ctx.gpr[31];
    // nop
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_088EF188:
    ctx.set_gpr(29, ctx.gpr[29] + static_cast<std::uint32_t>(-48));
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(12), ctx.gpr[31]);
    ctx.set_gpr(4, ctx.gpr[29] + static_cast<std::uint32_t>(28));
    ctx.set_gpr(31, 0x088EF19Cu);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0042_entry, 42u, 574u, 0x088ADBE0u>(ctx, &aot_mem) && ctx.pc == 0x088EF19Cu) goto L_088EF19C;
    return;
L_088EF19C:
    ctx.set_gpr(2, 2232u << 16u);
    ctx.set_gpr(2, ctx.gpr[2] + static_cast<std::uint32_t>(10240));
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(28), ctx.gpr[2]);
    ctx.set_gpr(31, 0x088EF1B0u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0064_entry, 64u, 444u, 0x08905FF0u>(ctx, &aot_mem) && ctx.pc == 0x088EF1B0u) goto L_088EF1B0;
    return;
L_088EF1B0:
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
L_088EF1CC:
    ctx.set_gpr(29, ctx.gpr[29] + static_cast<std::uint32_t>(-16));
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(12), ctx.gpr[31]);
    ctx.set_gpr(4, 2191u << 16u);
    ctx.set_gpr(4, ctx.gpr[4] + static_cast<std::uint32_t>(-3596));
    ctx.set_gpr(31, 0x088EF1E4u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0080_entry, 80u, 286u, 0x08945508u>(ctx, &aot_mem) && ctx.pc == 0x088EF1E4u) goto L_088EF1E4;
    return;
L_088EF1E4:
    ctx.set_gpr(31, rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(12)));
    ctx.set_gpr(29, ctx.gpr[29] + static_cast<std::uint32_t>(16));
    jump_target = ctx.gpr[31];
    // nop
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_088EF1F4:
    ctx.set_gpr(29, ctx.gpr[29] + static_cast<std::uint32_t>(-32));
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(28), ctx.gpr[31]);
    ctx.set_gpr(31, 0x088EF204u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0052_entry, 52u, 154u, 0x088D49C4u>(ctx, &aot_mem) && ctx.pc == 0x088EF204u) goto L_088EF204;
    return;
L_088EF204:
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(0), 0u);
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(4), 0u);
    ctx.set_gpr(2, 2228u << 16u);
    ctx.set_gpr(2, ctx.gpr[2] + static_cast<std::uint32_t>(-25208));
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(8), ctx.gpr[2]);
    ctx.set_gpr(4, 0u + 0u);
    ctx.set_gpr(5, 2245u << 16u);
    ctx.set_gpr(5, ctx.gpr[5] + static_cast<std::uint32_t>(29124));
    ctx.set_gpr(6, 2191u << 16u);
    ctx.set_gpr(6, ctx.gpr[6] + static_cast<std::uint32_t>(-13396));
    ctx.set_gpr(7, 2187u << 16u);
    ctx.set_gpr(7, ctx.gpr[7] + static_cast<std::uint32_t>(-9000));
    ctx.set_gpr(8, 2191u << 16u);
    ctx.set_gpr(8, ctx.gpr[8] + static_cast<std::uint32_t>(-3480));
    ctx.set_gpr(9, 2228u << 16u);
    ctx.set_gpr(9, ctx.gpr[9] + static_cast<std::uint32_t>(-25200));
    ctx.set_gpr(10, 0u + static_cast<std::uint32_t>(20));
    ctx.set_gpr(11, 2191u << 16u);
    ctx.set_gpr(11, ctx.gpr[11] + static_cast<std::uint32_t>(-3704));
    ctx.set_gpr(31, 0x088EF258u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0080_entry, 80u, 294u, 0x08945594u>(ctx, &aot_mem) && ctx.pc == 0x088EF258u) goto L_088EF258;
    return;
L_088EF258:
    ctx.set_gpr(31, rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(28)));
    ctx.set_gpr(29, ctx.gpr[29] + static_cast<std::uint32_t>(32));
    jump_target = ctx.gpr[31];
    // nop
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_088EF268:
    ctx.set_gpr(29, ctx.gpr[29] + static_cast<std::uint32_t>(-16));
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(12), ctx.gpr[31]);
    ctx.set_gpr(31, 0x088EF278u);
    // nop
    goto L_088EF13C;
L_088EF278:
    ctx.set_gpr(31, rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(12)));
    ctx.set_gpr(29, ctx.gpr[29] + static_cast<std::uint32_t>(16));
    jump_target = ctx.gpr[31];
    // nop
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_088EF288:
    ctx.set_gpr(29, ctx.gpr[29] + static_cast<std::uint32_t>(-16));
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(12), ctx.gpr[31]);
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(8), ctx.gpr[16]);
    ctx.set_gpr(16, ctx.gpr[4] + 0u);
    ctx.set_gpr(31, 0x088EF2A0u);
    // nop
    goto L_088EF3B0;
L_088EF2A0:
    ctx.set_gpr(2, 2245u << 16u);
    ctx.set_gpr(4, rt.memory().aot_load32(ctx.gpr[2] + static_cast<std::uint32_t>(29128)));
    ctx.set_gpr(5, ctx.gpr[16] + 0u);
    ctx.set_gpr(31, 0x088EF2B4u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0080_entry, 80u, 50u, 0x089443D4u>(ctx, &aot_mem) && ctx.pc == 0x088EF2B4u) goto L_088EF2B4;
    return;
L_088EF2B4:
    ctx.set_gpr(31, rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(12)));
    ctx.set_gpr(16, rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(8)));
    ctx.set_gpr(29, ctx.gpr[29] + static_cast<std::uint32_t>(16));
    jump_target = ctx.gpr[31];
    // nop
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_088EF2C8:
    ctx.set_gpr(29, ctx.gpr[29] + static_cast<std::uint32_t>(-16));
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(12), ctx.gpr[31]);
    ctx.set_gpr(2, 2245u << 16u);
    ctx.set_gpr(2, rt.memory().aot_load32(ctx.gpr[2] + static_cast<std::uint32_t>(29128)));
    { const bool branch_taken = ctx.gpr[2] == 0u;
    // nop
      if (branch_taken) {
          goto L_088EF2F4;
      }
      goto L_088EF2E0;
    }
L_088EF2E0:
    ctx.set_gpr(2, rt.memory().aot_load32(ctx.gpr[2] + static_cast<std::uint32_t>(36)));
    ctx.set_gpr(2, ctx.gpr[2] & 4u);
    ctx.set_gpr(2, 0u < ctx.gpr[2] ? 1u : 0u);
    { const bool branch_taken = ctx.gpr[2] != 0u;
    // nop
      if (branch_taken) {
          goto L_088EF2FC;
      }
      goto L_088EF2F4;
    }
L_088EF2F4:
    ctx.set_gpr(31, 0x088EF2FCu);
    // nop
    goto L_088EF3B0;
L_088EF2FC:
    ctx.set_gpr(2, 2245u << 16u);
    ctx.set_gpr(2, rt.memory().aot_load32(ctx.gpr[2] + static_cast<std::uint32_t>(29128)));
    ctx.set_gpr(31, rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(12)));
    ctx.set_gpr(29, ctx.gpr[29] + static_cast<std::uint32_t>(16));
    jump_target = ctx.gpr[31];
    // nop
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_088EF314:
    ctx.set_gpr(29, ctx.gpr[29] + static_cast<std::uint32_t>(-80));
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(12), ctx.gpr[31]);
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(8), ctx.gpr[16]);
    ctx.set_gpr(4, ctx.gpr[29] + static_cast<std::uint32_t>(20));
    ctx.set_gpr(31, 0x088EF32Cu);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0080_entry, 80u, 398u, 0x08945BF8u>(ctx, &aot_mem) && ctx.pc == 0x088EF32Cu) goto L_088EF32C;
    return;
L_088EF32C:
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(28), 0u);
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(32), 0u);
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(60), 0u);
    ctx.set_gpr(2, 2232u << 16u);
    ctx.set_gpr(2, ctx.gpr[2] + static_cast<std::uint32_t>(-3788));
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(20), ctx.gpr[2]);
    ctx.set_gpr(31, 0x088EF34Cu);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0064_entry, 64u, 444u, 0x08905FF0u>(ctx, &aot_mem) && ctx.pc == 0x088EF34Cu) goto L_088EF34C;
    return;
L_088EF34C:
    ctx.set_gpr(2, rt.memory().aot_load32(ctx.gpr[2] + static_cast<std::uint32_t>(932)));
    ctx.set_gpr(2, ctx.gpr[2] + ctx.gpr[29]);
    ctx.set_gpr(16, rt.memory().aot_load32(ctx.gpr[2] + static_cast<std::uint32_t>(20)));
    ctx.set_gpr(2, 2232u << 16u);
    ctx.set_gpr(2, ctx.gpr[2] + static_cast<std::uint32_t>(-1036));
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(20), ctx.gpr[2]);
    ctx.set_gpr(4, ctx.gpr[29] + static_cast<std::uint32_t>(60));
    ctx.set_gpr(31, 0x088EF370u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0019_entry, 19u, 764u, 0x08853094u>(ctx, &aot_mem) && ctx.pc == 0x088EF370u) goto L_088EF370;
    return;
L_088EF370:
    ctx.set_gpr(4, ctx.gpr[29] + static_cast<std::uint32_t>(32));
    ctx.set_gpr(31, 0x088EF37Cu);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0019_entry, 19u, 764u, 0x08853094u>(ctx, &aot_mem) && ctx.pc == 0x088EF37Cu) goto L_088EF37C;
    return;
L_088EF37C:
    ctx.set_gpr(2, 2232u << 16u);
    ctx.set_gpr(2, ctx.gpr[2] + static_cast<std::uint32_t>(-15576));
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(20), ctx.gpr[2]);
    ctx.set_gpr(4, ctx.gpr[29] + static_cast<std::uint32_t>(28));
    ctx.set_gpr(5, 0u + static_cast<std::uint32_t>(-1));
    ctx.set_gpr(31, 0x088EF398u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0020_entry, 20u, 288u, 0x088555D0u>(ctx, &aot_mem) && ctx.pc == 0x088EF398u) goto L_088EF398;
    return;
L_088EF398:
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
L_088EF3B0:
    ctx.set_gpr(29, ctx.gpr[29] + static_cast<std::uint32_t>(-16));
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(12), ctx.gpr[31]);
    ctx.set_gpr(4, 2191u << 16u);
    ctx.set_gpr(4, ctx.gpr[4] + static_cast<std::uint32_t>(-3112));
    ctx.set_gpr(31, 0x088EF3C8u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0080_entry, 80u, 286u, 0x08945508u>(ctx, &aot_mem) && ctx.pc == 0x088EF3C8u) goto L_088EF3C8;
    return;
L_088EF3C8:
    ctx.set_gpr(31, rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(12)));
    ctx.set_gpr(29, ctx.gpr[29] + static_cast<std::uint32_t>(16));
    jump_target = ctx.gpr[31];
    // nop
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_088EF3D8:
    ctx.set_gpr(29, ctx.gpr[29] + static_cast<std::uint32_t>(-32));
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(28), ctx.gpr[31]);
    ctx.set_gpr(31, 0x088EF3E8u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0052_entry, 52u, 154u, 0x088D49C4u>(ctx, &aot_mem) && ctx.pc == 0x088EF3E8u) goto L_088EF3E8;
    return;
L_088EF3E8:
    ctx.set_gpr(2, 2191u << 16u);
    ctx.set_gpr(2, ctx.gpr[2] + static_cast<std::uint32_t>(-2940));
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(0), ctx.gpr[2]);
    ctx.set_gpr(2, 2191u << 16u);
    ctx.set_gpr(2, ctx.gpr[2] + static_cast<std::uint32_t>(-2744));
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(4), ctx.gpr[2]);
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(8), 0u);
    ctx.set_gpr(4, 0u + 0u);
    ctx.set_gpr(5, 2245u << 16u);
    ctx.set_gpr(5, ctx.gpr[5] + static_cast<std::uint32_t>(29128));
    ctx.set_gpr(6, 2191u << 16u);
    ctx.set_gpr(6, ctx.gpr[6] + static_cast<std::uint32_t>(6704));
    ctx.set_gpr(7, 2191u << 16u);
    ctx.set_gpr(7, ctx.gpr[7] + static_cast<std::uint32_t>(-2956));
    ctx.set_gpr(8, 2191u << 16u);
    ctx.set_gpr(8, ctx.gpr[8] + static_cast<std::uint32_t>(-2988));
    ctx.set_gpr(9, 2228u << 16u);
    ctx.set_gpr(9, ctx.gpr[9] + static_cast<std::uint32_t>(-25176));
    ctx.set_gpr(10, 0u + static_cast<std::uint32_t>(60));
    ctx.set_gpr(11, 2191u << 16u);
    ctx.set_gpr(11, ctx.gpr[11] + static_cast<std::uint32_t>(-3308));
    ctx.set_gpr(31, 0x088EF444u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0080_entry, 80u, 294u, 0x08945594u>(ctx, &aot_mem) && ctx.pc == 0x088EF444u) goto L_088EF444;
    return;
L_088EF444:
    ctx.set_gpr(31, rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(28)));
    ctx.set_gpr(29, ctx.gpr[29] + static_cast<std::uint32_t>(32));
    jump_target = ctx.gpr[31];
    // nop
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_088EF454:
    ctx.set_gpr(29, ctx.gpr[29] + static_cast<std::uint32_t>(-16));
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(12), ctx.gpr[31]);
    ctx.set_gpr(31, 0x088EF464u);
    // nop
    goto L_088EF2C8;
L_088EF464:
    ctx.set_gpr(31, rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(12)));
    ctx.set_gpr(29, ctx.gpr[29] + static_cast<std::uint32_t>(16));
    jump_target = ctx.gpr[31];
    // nop
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_088EF474:
    ctx.set_gpr(2, 2245u << 16u);
    ctx.set_gpr(2, rt.memory().aot_load32(ctx.gpr[2] + static_cast<std::uint32_t>(29356)));
    jump_target = ctx.gpr[31];
    // nop
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_088EF484:
    ctx.set_gpr(29, ctx.gpr[29] + static_cast<std::uint32_t>(-16));
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(12), ctx.gpr[31]);
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(8), ctx.gpr[17]);
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(4), ctx.gpr[16]);
    ctx.set_gpr(2, 2245u << 16u);
    ctx.set_gpr(16, rt.memory().aot_load32(ctx.gpr[2] + static_cast<std::uint32_t>(29128)));
    ctx.set_gpr(4, ctx.gpr[16] + 0u);
    ctx.set_gpr(31, 0x088EF4A8u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0080_entry, 80u, 236u, 0x089451A8u>(ctx, &aot_mem) && ctx.pc == 0x088EF4A8u) goto L_088EF4A8;
    return;
L_088EF4A8:
    ctx.set_gpr(17, ctx.gpr[2] + 0u);
    ctx.set_gpr(4, ctx.gpr[16] + 0u);
    ctx.set_gpr(5, 2228u << 16u);
    ctx.set_gpr(5, ctx.gpr[5] + static_cast<std::uint32_t>(-25160));
    ctx.set_gpr(6, 0u + static_cast<std::uint32_t>(4));
    ctx.set_gpr(31, 0x088EF4C4u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0080_entry, 80u, 151u, 0x08944B98u>(ctx, &aot_mem) && ctx.pc == 0x088EF4C4u) goto L_088EF4C4;
    return;
L_088EF4C4:
    ctx.set_gpr(4, ctx.gpr[16] + 0u);
    ctx.set_gpr(5, 2228u << 16u);
    ctx.set_gpr(5, ctx.gpr[5] + static_cast<std::uint32_t>(-25100));
    ctx.set_gpr(6, 2228u << 16u);
    ctx.set_gpr(6, ctx.gpr[6] + static_cast<std::uint32_t>(-25084));
    ctx.set_gpr(7, 2228u << 16u);
    ctx.set_gpr(7, ctx.gpr[7] + static_cast<std::uint32_t>(-25068));
    ctx.set_gpr(8, ctx.gpr[17] + 0u);
    ctx.set_gpr(31, 0x088EF4ECu);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0080_entry, 80u, 162u, 0x08944C7Cu>(ctx, &aot_mem) && ctx.pc == 0x088EF4ECu) goto L_088EF4EC;
    return;
L_088EF4EC:
    ctx.set_gpr(3, 2191u << 16u);
    ctx.set_gpr(3, ctx.gpr[3] + static_cast<std::uint32_t>(-2776));
    ctx.set_gpr(2, 2245u << 16u);
    ctx.set_gpr(2, rt.memory().aot_load32(ctx.gpr[2] + static_cast<std::uint32_t>(29128)));
    rt.memory().aot_store32(ctx.gpr[2] + static_cast<std::uint32_t>(64), ctx.gpr[3]);
    ctx.set_gpr(4, 2191u << 16u);
    ctx.set_gpr(4, ctx.gpr[4] + static_cast<std::uint32_t>(-2712));
    ctx.set_gpr(31, 0x088EF510u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0080_entry, 80u, 237u, 0x089451B8u>(ctx, &aot_mem) && ctx.pc == 0x088EF510u) goto L_088EF510;
    return;
L_088EF510:
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
L_088EF528:
    ctx.set_gpr(29, ctx.gpr[29] + static_cast<std::uint32_t>(-16));
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(12), ctx.gpr[31]);
    ctx.set_gpr(31, 0x088EF538u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0059_entry, 59u, 304u, 0x088F19BCu>(ctx, &aot_mem) && ctx.pc == 0x088EF538u) goto L_088EF538;
    return;
L_088EF538:
    ctx.set_gpr(31, rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(12)));
    ctx.set_gpr(29, ctx.gpr[29] + static_cast<std::uint32_t>(16));
    jump_target = ctx.gpr[31];
    // nop
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_088EF548:
    ctx.set_gpr(29, ctx.gpr[29] + static_cast<std::uint32_t>(-16));
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(12), ctx.gpr[31]);
    ctx.set_gpr(31, 0x088EF558u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0074_entry, 74u, 110u, 0x0892C7DCu>(ctx, &aot_mem) && ctx.pc == 0x088EF558u) goto L_088EF558;
    return;
L_088EF558:
    ctx.set_gpr(31, rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(12)));
    ctx.set_gpr(29, ctx.gpr[29] + static_cast<std::uint32_t>(16));
    jump_target = ctx.gpr[31];
    // nop
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_088EF568:
    ctx.set_gpr(29, ctx.gpr[29] + static_cast<std::uint32_t>(-16));
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(12), ctx.gpr[31]);
    ctx.set_gpr(31, 0x088EF578u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0074_entry, 74u, 114u, 0x0892C81Cu>(ctx, &aot_mem) && ctx.pc == 0x088EF578u) goto L_088EF578;
    return;
L_088EF578:
    ctx.set_gpr(31, rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(12)));
    ctx.set_gpr(29, ctx.gpr[29] + static_cast<std::uint32_t>(16));
    jump_target = ctx.gpr[31];
    // nop
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_088EF588:
    ctx.set_gpr(29, ctx.gpr[29] + static_cast<std::uint32_t>(-16));
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(12), ctx.gpr[31]);
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(8), ctx.gpr[16]);
    ctx.set_gpr(16, ctx.gpr[4] + 0u);
    ctx.set_gpr(31, 0x088EF5A0u);
    // nop
    goto L_088EF684;
L_088EF5A0:
    ctx.set_gpr(2, 2245u << 16u);
    ctx.set_gpr(4, rt.memory().aot_load32(ctx.gpr[2] + static_cast<std::uint32_t>(29148)));
    ctx.set_gpr(5, ctx.gpr[16] + 0u);
    ctx.set_gpr(31, 0x088EF5B4u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0080_entry, 80u, 50u, 0x089443D4u>(ctx, &aot_mem) && ctx.pc == 0x088EF5B4u) goto L_088EF5B4;
    return;
L_088EF5B4:
    ctx.set_gpr(31, rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(12)));
    ctx.set_gpr(16, rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(8)));
    ctx.set_gpr(29, ctx.gpr[29] + static_cast<std::uint32_t>(16));
    jump_target = ctx.gpr[31];
    // nop
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_088EF5C8:
    ctx.set_gpr(29, ctx.gpr[29] + static_cast<std::uint32_t>(-16));
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(12), ctx.gpr[31]);
    ctx.set_gpr(2, 2245u << 16u);
    ctx.set_gpr(2, rt.memory().aot_load32(ctx.gpr[2] + static_cast<std::uint32_t>(29148)));
    { const bool branch_taken = ctx.gpr[2] == 0u;
    // nop
      if (branch_taken) {
          goto L_088EF5F4;
      }
      goto L_088EF5E0;
    }
L_088EF5E0:
    ctx.set_gpr(2, rt.memory().aot_load32(ctx.gpr[2] + static_cast<std::uint32_t>(36)));
    ctx.set_gpr(2, ctx.gpr[2] & 4u);
    ctx.set_gpr(2, 0u < ctx.gpr[2] ? 1u : 0u);
    { const bool branch_taken = ctx.gpr[2] != 0u;
    // nop
      if (branch_taken) {
          goto L_088EF5FC;
      }
      goto L_088EF5F4;
    }
L_088EF5F4:
    ctx.set_gpr(31, 0x088EF5FCu);
    // nop
    goto L_088EF684;
L_088EF5FC:
    ctx.set_gpr(2, 2245u << 16u);
    ctx.set_gpr(2, rt.memory().aot_load32(ctx.gpr[2] + static_cast<std::uint32_t>(29148)));
    ctx.set_gpr(31, rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(12)));
    ctx.set_gpr(29, ctx.gpr[29] + static_cast<std::uint32_t>(16));
    jump_target = ctx.gpr[31];
    // nop
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_088EF614:
    ctx.set_gpr(29, ctx.gpr[29] + static_cast<std::uint32_t>(-80));
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(12), ctx.gpr[31]);
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(8), ctx.gpr[16]);
    ctx.set_gpr(4, ctx.gpr[29] + static_cast<std::uint32_t>(24));
    ctx.set_gpr(31, 0x088EF62Cu);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0080_entry, 80u, 398u, 0x08945BF8u>(ctx, &aot_mem) && ctx.pc == 0x088EF62Cu) goto L_088EF62C;
    return;
L_088EF62C:
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(32), 0u);
    ctx.set_gpr(2, 2232u << 16u);
    ctx.set_gpr(2, ctx.gpr[2] + static_cast<std::uint32_t>(-3616));
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(24), ctx.gpr[2]);
    ctx.set_gpr(31, 0x088EF644u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0064_entry, 64u, 444u, 0x08905FF0u>(ctx, &aot_mem) && ctx.pc == 0x088EF644u) goto L_088EF644;
    return;
L_088EF644:
    ctx.set_gpr(2, rt.memory().aot_load32(ctx.gpr[2] + static_cast<std::uint32_t>(932)));
    ctx.set_gpr(2, ctx.gpr[2] + ctx.gpr[29]);
    ctx.set_gpr(16, rt.memory().aot_load32(ctx.gpr[2] + static_cast<std::uint32_t>(24)));
    ctx.set_gpr(2, 2232u << 16u);
    ctx.set_gpr(2, ctx.gpr[2] + static_cast<std::uint32_t>(-15576));
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(24), ctx.gpr[2]);
    ctx.set_gpr(4, ctx.gpr[29] + static_cast<std::uint32_t>(32));
    ctx.set_gpr(5, 0u + static_cast<std::uint32_t>(-1));
    ctx.set_gpr(31, 0x088EF66Cu);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0020_entry, 20u, 288u, 0x088555D0u>(ctx, &aot_mem) && ctx.pc == 0x088EF66Cu) goto L_088EF66C;
    return;
L_088EF66C:
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
L_088EF684:
    ctx.set_gpr(29, ctx.gpr[29] + static_cast<std::uint32_t>(-16));
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(12), ctx.gpr[31]);
    ctx.set_gpr(4, 2191u << 16u);
    ctx.set_gpr(4, ctx.gpr[4] + static_cast<std::uint32_t>(-2388));
    ctx.set_gpr(31, 0x088EF69Cu);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0080_entry, 80u, 286u, 0x08945508u>(ctx, &aot_mem) && ctx.pc == 0x088EF69Cu) goto L_088EF69C;
    return;
L_088EF69C:
    ctx.set_gpr(31, rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(12)));
    ctx.set_gpr(29, ctx.gpr[29] + static_cast<std::uint32_t>(16));
    jump_target = ctx.gpr[31];
    // nop
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_088EF6AC:
    ctx.set_gpr(29, ctx.gpr[29] + static_cast<std::uint32_t>(-32));
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(28), ctx.gpr[31]);
    ctx.set_gpr(31, 0x088EF6BCu);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0052_entry, 52u, 154u, 0x088D49C4u>(ctx, &aot_mem) && ctx.pc == 0x088EF6BCu) goto L_088EF6BC;
    return;
L_088EF6BC:
    ctx.set_gpr(2, 2191u << 16u);
    ctx.set_gpr(2, ctx.gpr[2] + static_cast<std::uint32_t>(-2232));
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(0), ctx.gpr[2]);
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(4), 0u);
    ctx.set_gpr(2, 2228u << 16u);
    ctx.set_gpr(2, ctx.gpr[2] + static_cast<std::uint32_t>(-25052));
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(8), ctx.gpr[2]);
    ctx.set_gpr(4, 0u + 0u);
    ctx.set_gpr(5, 2245u << 16u);
    ctx.set_gpr(5, ctx.gpr[5] + static_cast<std::uint32_t>(29148));
    ctx.set_gpr(6, 2191u << 16u);
    ctx.set_gpr(6, ctx.gpr[6] + static_cast<std::uint32_t>(20572));
    ctx.set_gpr(7, 2191u << 16u);
    ctx.set_gpr(7, ctx.gpr[7] + static_cast<std::uint32_t>(-12172));
    ctx.set_gpr(8, 2191u << 16u);
    ctx.set_gpr(8, ctx.gpr[8] + static_cast<std::uint32_t>(-2264));
    ctx.set_gpr(9, 2228u << 16u);
    ctx.set_gpr(9, ctx.gpr[9] + static_cast<std::uint32_t>(-25044));
    ctx.set_gpr(10, 0u + static_cast<std::uint32_t>(56));
    ctx.set_gpr(11, 2191u << 16u);
    ctx.set_gpr(11, ctx.gpr[11] + static_cast<std::uint32_t>(-2540));
    ctx.set_gpr(31, 0x088EF718u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0080_entry, 80u, 294u, 0x08945594u>(ctx, &aot_mem) && ctx.pc == 0x088EF718u) goto L_088EF718;
    return;
L_088EF718:
    ctx.set_gpr(31, rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(28)));
    ctx.set_gpr(29, ctx.gpr[29] + static_cast<std::uint32_t>(32));
    jump_target = ctx.gpr[31];
    // nop
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_088EF728:
    ctx.set_gpr(29, ctx.gpr[29] + static_cast<std::uint32_t>(-16));
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(12), ctx.gpr[31]);
    ctx.set_gpr(31, 0x088EF738u);
    // nop
    goto L_088EF5C8;
L_088EF738:
    ctx.set_gpr(31, rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(12)));
    ctx.set_gpr(29, ctx.gpr[29] + static_cast<std::uint32_t>(16));
    jump_target = ctx.gpr[31];
    // nop
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_088EF748:
    ctx.set_gpr(29, ctx.gpr[29] + static_cast<std::uint32_t>(-16));
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(12), ctx.gpr[31]);
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(8), ctx.gpr[18]);
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(4), ctx.gpr[17]);
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(0), ctx.gpr[16]);
    ctx.set_gpr(2, 2245u << 16u);
    ctx.set_gpr(16, rt.memory().aot_load32(ctx.gpr[2] + static_cast<std::uint32_t>(29148)));
    ctx.set_gpr(4, ctx.gpr[16] + 0u);
    ctx.set_gpr(31, 0x088EF770u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0080_entry, 80u, 236u, 0x089451A8u>(ctx, &aot_mem) && ctx.pc == 0x088EF770u) goto L_088EF770;
    return;
L_088EF770:
    ctx.set_gpr(18, ctx.gpr[2] + 0u);
    ctx.set_gpr(4, ctx.gpr[16] + 0u);
    ctx.set_gpr(5, 2228u << 16u);
    ctx.set_gpr(5, ctx.gpr[5] + static_cast<std::uint32_t>(-25024));
    ctx.set_gpr(6, 0u + static_cast<std::uint32_t>(7));
    ctx.set_gpr(31, 0x088EF78Cu);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0080_entry, 80u, 151u, 0x08944B98u>(ctx, &aot_mem) && ctx.pc == 0x088EF78Cu) goto L_088EF78C;
    return;
L_088EF78C:
    ctx.set_gpr(5, ctx.gpr[18] + static_cast<std::uint32_t>(1));
    ctx.set_gpr(4, ctx.gpr[16] + 0u);
    ctx.set_gpr(31, 0x088EF79Cu);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0080_entry, 80u, 148u, 0x08944B4Cu>(ctx, &aot_mem) && ctx.pc == 0x088EF79Cu) goto L_088EF79C;
    return;
L_088EF79C:
    ctx.set_gpr(17, ctx.gpr[2] + 0u);
    ctx.set_gpr(4, ctx.gpr[17] + 0u);
    ctx.set_gpr(5, 0u + static_cast<std::uint32_t>(-1));
    ctx.set_gpr(31, 0x088EF7B0u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0072_entry, 72u, 648u, 0x08926D64u>(ctx, &aot_mem) && ctx.pc == 0x088EF7B0u) goto L_088EF7B0;
    return;
L_088EF7B0:
    rt.memory().aot_store8(ctx.gpr[17] + static_cast<std::uint32_t>(38), static_cast<std::uint8_t>(0u));
    ctx.set_gpr(5, ctx.gpr[18] + static_cast<std::uint32_t>(2));
    ctx.set_gpr(4, ctx.gpr[16] + 0u);
    ctx.set_gpr(31, 0x088EF7C4u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0080_entry, 80u, 148u, 0x08944B4Cu>(ctx, &aot_mem) && ctx.pc == 0x088EF7C4u) goto L_088EF7C4;
    return;
L_088EF7C4:
    ctx.set_gpr(17, ctx.gpr[2] + 0u);
    ctx.set_gpr(31, 0x088EF7D0u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0053_entry, 53u, 610u, 0x088DB23Cu>(ctx, &aot_mem) && ctx.pc == 0x088EF7D0u) goto L_088EF7D0;
    return;
L_088EF7D0:
    rt.memory().aot_store32(ctx.gpr[17] + static_cast<std::uint32_t>(52), ctx.gpr[2]);
    ctx.set_gpr(31, 0x088EF7DCu);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0053_entry, 53u, 58u, 0x088D8444u>(ctx, &aot_mem) && ctx.pc == 0x088EF7DCu) goto L_088EF7DC;
    return;
L_088EF7DC:
    ctx.set_gpr(4, ctx.gpr[17] + 0u);
    ctx.set_gpr(5, ctx.gpr[2] + 0u);
    ctx.set_gpr(31, 0x088EF7ECu);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0081_entry, 81u, 626u, 0x0894AD9Cu>(ctx, &aot_mem) && ctx.pc == 0x088EF7ECu) goto L_088EF7EC;
    return;
L_088EF7EC:
    rt.memory().aot_store8(ctx.gpr[17] + static_cast<std::uint32_t>(56), static_cast<std::uint8_t>(0u));
    rt.memory().aot_store8(ctx.gpr[17] + static_cast<std::uint32_t>(38), static_cast<std::uint8_t>(0u));
    ctx.set_gpr(5, ctx.gpr[18] + static_cast<std::uint32_t>(3));
    ctx.set_gpr(4, ctx.gpr[16] + 0u);
    ctx.set_gpr(31, 0x088EF804u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0080_entry, 80u, 148u, 0x08944B4Cu>(ctx, &aot_mem) && ctx.pc == 0x088EF804u) goto L_088EF804;
    return;
L_088EF804:
    ctx.set_gpr(4, ctx.gpr[2] + 0u);
    ctx.set_gpr(5, 0u + static_cast<std::uint32_t>(-1));
    ctx.set_gpr(31, 0x088EF814u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0072_entry, 72u, 648u, 0x08926D64u>(ctx, &aot_mem) && ctx.pc == 0x088EF814u) goto L_088EF814;
    return;
L_088EF814:
    ctx.set_gpr(5, ctx.gpr[18] + static_cast<std::uint32_t>(4));
    ctx.set_gpr(4, ctx.gpr[16] + 0u);
    ctx.set_gpr(31, 0x088EF824u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0080_entry, 80u, 148u, 0x08944B4Cu>(ctx, &aot_mem) && ctx.pc == 0x088EF824u) goto L_088EF824;
    return;
L_088EF824:
    ctx.set_gpr(4, ctx.gpr[2] + 0u);
    ctx.set_gpr(5, 0u + static_cast<std::uint32_t>(1));
    ctx.set_gpr(31, 0x088EF834u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0065_entry, 65u, 745u, 0x0890B3DCu>(ctx, &aot_mem) && ctx.pc == 0x088EF834u) goto L_088EF834;
    return;
L_088EF834:
    ctx.set_gpr(5, ctx.gpr[18] + static_cast<std::uint32_t>(5));
    ctx.set_gpr(4, ctx.gpr[16] + 0u);
    ctx.set_gpr(31, 0x088EF844u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0080_entry, 80u, 148u, 0x08944B4Cu>(ctx, &aot_mem) && ctx.pc == 0x088EF844u) goto L_088EF844;
    return;
L_088EF844:
    ctx.set_gpr(4, ctx.gpr[2] + 0u);
    ctx.set_gpr(5, 0u + static_cast<std::uint32_t>(-1));
    ctx.set_gpr(31, 0x088EF854u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0072_entry, 72u, 648u, 0x08926D64u>(ctx, &aot_mem) && ctx.pc == 0x088EF854u) goto L_088EF854;
    return;
L_088EF854:
    ctx.set_gpr(5, ctx.gpr[18] + static_cast<std::uint32_t>(6));
    ctx.set_gpr(4, ctx.gpr[16] + 0u);
    ctx.set_gpr(31, 0x088EF864u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0080_entry, 80u, 148u, 0x08944B4Cu>(ctx, &aot_mem) && ctx.pc == 0x088EF864u) goto L_088EF864;
    return;
L_088EF864:
    ctx.set_gpr(4, ctx.gpr[2] + 0u);
    ctx.set_gpr(5, 0u + static_cast<std::uint32_t>(-1));
    ctx.set_gpr(31, 0x088EF874u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0072_entry, 72u, 648u, 0x08926D64u>(ctx, &aot_mem) && ctx.pc == 0x088EF874u) goto L_088EF874;
    return;
L_088EF874:
    ctx.set_gpr(4, ctx.gpr[16] + 0u);
    ctx.set_gpr(5, 2228u << 16u);
    ctx.set_gpr(5, ctx.gpr[5] + static_cast<std::uint32_t>(-24944));
    ctx.set_gpr(6, 2228u << 16u);
    ctx.set_gpr(6, ctx.gpr[6] + static_cast<std::uint32_t>(-24916));
    ctx.set_gpr(7, 2228u << 16u);
    ctx.set_gpr(7, ctx.gpr[7] + static_cast<std::uint32_t>(-24888));
    ctx.set_gpr(8, ctx.gpr[18] + 0u);
    ctx.set_gpr(31, 0x088EF89Cu);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0080_entry, 80u, 162u, 0x08944C7Cu>(ctx, &aot_mem) && ctx.pc == 0x088EF89Cu) goto L_088EF89C;
    return;
L_088EF89C:
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
L_088EF8B8:
    ctx.set_gpr(29, ctx.gpr[29] + static_cast<std::uint32_t>(-16));
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(12), ctx.gpr[31]);
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(8), ctx.gpr[16]);
    ctx.set_gpr(16, ctx.gpr[4] + 0u);
    ctx.set_gpr(31, 0x088EF8D0u);
    // nop
    goto L_088EF9B8;
L_088EF8D0:
    ctx.set_gpr(2, 2245u << 16u);
    ctx.set_gpr(4, rt.memory().aot_load32(ctx.gpr[2] + static_cast<std::uint32_t>(29180)));
    ctx.set_gpr(5, ctx.gpr[16] + 0u);
    ctx.set_gpr(31, 0x088EF8E4u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0080_entry, 80u, 50u, 0x089443D4u>(ctx, &aot_mem) && ctx.pc == 0x088EF8E4u) goto L_088EF8E4;
    return;
L_088EF8E4:
    ctx.set_gpr(31, rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(12)));
    ctx.set_gpr(16, rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(8)));
    ctx.set_gpr(29, ctx.gpr[29] + static_cast<std::uint32_t>(16));
    jump_target = ctx.gpr[31];
    // nop
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_088EF8F8:
    ctx.set_gpr(29, ctx.gpr[29] + static_cast<std::uint32_t>(-16));
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(12), ctx.gpr[31]);
    ctx.set_gpr(2, 2245u << 16u);
    ctx.set_gpr(2, rt.memory().aot_load32(ctx.gpr[2] + static_cast<std::uint32_t>(29180)));
    { const bool branch_taken = ctx.gpr[2] == 0u;
    // nop
      if (branch_taken) {
          goto L_088EF924;
      }
      goto L_088EF910;
    }
L_088EF910:
    ctx.set_gpr(2, rt.memory().aot_load32(ctx.gpr[2] + static_cast<std::uint32_t>(36)));
    ctx.set_gpr(2, ctx.gpr[2] & 4u);
    ctx.set_gpr(2, 0u < ctx.gpr[2] ? 1u : 0u);
    { const bool branch_taken = ctx.gpr[2] != 0u;
    // nop
      if (branch_taken) {
          goto L_088EF92C;
      }
      goto L_088EF924;
    }
L_088EF924:
    ctx.set_gpr(31, 0x088EF92Cu);
    // nop
    goto L_088EF9B8;
L_088EF92C:
    ctx.set_gpr(2, 2245u << 16u);
    ctx.set_gpr(2, rt.memory().aot_load32(ctx.gpr[2] + static_cast<std::uint32_t>(29180)));
    ctx.set_gpr(31, rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(12)));
    ctx.set_gpr(29, ctx.gpr[29] + static_cast<std::uint32_t>(16));
    jump_target = ctx.gpr[31];
    // nop
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_088EF944:
    ctx.set_gpr(29, ctx.gpr[29] + static_cast<std::uint32_t>(-48));
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(12), ctx.gpr[31]);
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(8), ctx.gpr[16]);
    ctx.set_gpr(4, ctx.gpr[29] + static_cast<std::uint32_t>(24));
    ctx.set_gpr(31, 0x088EF95Cu);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0080_entry, 80u, 398u, 0x08945BF8u>(ctx, &aot_mem) && ctx.pc == 0x088EF95Cu) goto L_088EF95C;
    return;
L_088EF95C:
    ctx.set_gpr(2, 2232u << 16u);
    ctx.set_gpr(2, ctx.gpr[2] + static_cast<std::uint32_t>(-3424));
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(24), ctx.gpr[2]);
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(40), 0u);
    ctx.set_gpr(31, 0x088EF974u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0064_entry, 64u, 444u, 0x08905FF0u>(ctx, &aot_mem) && ctx.pc == 0x088EF974u) goto L_088EF974;
    return;
L_088EF974:
    ctx.set_gpr(2, rt.memory().aot_load32(ctx.gpr[2] + static_cast<std::uint32_t>(932)));
    ctx.set_gpr(2, ctx.gpr[2] + ctx.gpr[29]);
    ctx.set_gpr(16, rt.memory().aot_load32(ctx.gpr[2] + static_cast<std::uint32_t>(24)));
    ctx.set_gpr(2, 2232u << 16u);
    ctx.set_gpr(2, ctx.gpr[2] + static_cast<std::uint32_t>(-3424));
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(24), ctx.gpr[2]);
    ctx.set_gpr(4, rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(40)));
    { const bool branch_taken = ctx.gpr[4] == 0u;
    // nop
      if (branch_taken) {
          goto L_088EF9A0;
      }
      goto L_088EF998;
    }
L_088EF998:
    ctx.set_gpr(31, 0x088EF9A0u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0014_entry, 14u, 257u, 0x0883D454u>(ctx, &aot_mem) && ctx.pc == 0x088EF9A0u) goto L_088EF9A0;
    return;
L_088EF9A0:
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
L_088EF9B8:
    ctx.set_gpr(29, ctx.gpr[29] + static_cast<std::uint32_t>(-16));
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(12), ctx.gpr[31]);
    ctx.set_gpr(4, 2191u << 16u);
    ctx.set_gpr(4, ctx.gpr[4] + static_cast<std::uint32_t>(-1568));
    ctx.set_gpr(31, 0x088EF9D0u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0080_entry, 80u, 286u, 0x08945508u>(ctx, &aot_mem) && ctx.pc == 0x088EF9D0u) goto L_088EF9D0;
    return;
L_088EF9D0:
    ctx.set_gpr(31, rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(12)));
    ctx.set_gpr(29, ctx.gpr[29] + static_cast<std::uint32_t>(16));
    jump_target = ctx.gpr[31];
    // nop
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_088EF9E0:
    ctx.set_gpr(29, ctx.gpr[29] + static_cast<std::uint32_t>(-32));
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(28), ctx.gpr[31]);
    ctx.set_gpr(31, 0x088EF9F0u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0052_entry, 52u, 154u, 0x088D49C4u>(ctx, &aot_mem) && ctx.pc == 0x088EF9F0u) goto L_088EF9F0;
    return;
L_088EF9F0:
    ctx.set_gpr(2, 2191u << 16u);
    ctx.set_gpr(2, ctx.gpr[2] + static_cast<std::uint32_t>(-1412));
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(0), ctx.gpr[2]);
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(4), 0u);
    ctx.set_gpr(2, 2228u << 16u);
    ctx.set_gpr(2, ctx.gpr[2] + static_cast<std::uint32_t>(-24860));
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(8), ctx.gpr[2]);
    ctx.set_gpr(4, 0u + 0u);
    ctx.set_gpr(5, 2245u << 16u);
    ctx.set_gpr(5, ctx.gpr[5] + static_cast<std::uint32_t>(29180));
    ctx.set_gpr(6, 2196u << 16u);
    ctx.set_gpr(6, ctx.gpr[6] + static_cast<std::uint32_t>(25520));
    ctx.set_gpr(7, 2188u << 16u);
    ctx.set_gpr(7, ctx.gpr[7] + static_cast<std::uint32_t>(-27092));
    ctx.set_gpr(8, 2191u << 16u);
    ctx.set_gpr(8, ctx.gpr[8] + static_cast<std::uint32_t>(-1444));
    ctx.set_gpr(9, 2228u << 16u);
    ctx.set_gpr(9, ctx.gpr[9] + static_cast<std::uint32_t>(-24852));
    ctx.set_gpr(10, 0u + static_cast<std::uint32_t>(24));
    ctx.set_gpr(11, 2191u << 16u);
    ctx.set_gpr(11, ctx.gpr[11] + static_cast<std::uint32_t>(-1724));
    ctx.set_gpr(31, 0x088EFA4Cu);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0080_entry, 80u, 294u, 0x08945594u>(ctx, &aot_mem) && ctx.pc == 0x088EFA4Cu) goto L_088EFA4C;
    return;
L_088EFA4C:
    ctx.set_gpr(31, rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(28)));
    ctx.set_gpr(29, ctx.gpr[29] + static_cast<std::uint32_t>(32));
    jump_target = ctx.gpr[31];
    // nop
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_088EFA5C:
    ctx.set_gpr(29, ctx.gpr[29] + static_cast<std::uint32_t>(-16));
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(12), ctx.gpr[31]);
    ctx.set_gpr(31, 0x088EFA6Cu);
    // nop
    goto L_088EF8F8;
L_088EFA6C:
    ctx.set_gpr(31, rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(12)));
    ctx.set_gpr(29, ctx.gpr[29] + static_cast<std::uint32_t>(16));
    jump_target = ctx.gpr[31];
    // nop
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_088EFA7C:
    ctx.set_gpr(29, ctx.gpr[29] + static_cast<std::uint32_t>(-16));
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(12), ctx.gpr[31]);
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(8), ctx.gpr[18]);
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(4), ctx.gpr[17]);
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(0), ctx.gpr[16]);
    ctx.set_gpr(2, 2245u << 16u);
    ctx.set_gpr(17, rt.memory().aot_load32(ctx.gpr[2] + static_cast<std::uint32_t>(29180)));
    ctx.set_gpr(4, ctx.gpr[17] + 0u);
    ctx.set_gpr(31, 0x088EFAA4u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0080_entry, 80u, 236u, 0x089451A8u>(ctx, &aot_mem) && ctx.pc == 0x088EFAA4u) goto L_088EFAA4;
    return;
L_088EFAA4:
    ctx.set_gpr(18, ctx.gpr[2] + 0u);
    ctx.set_gpr(4, ctx.gpr[17] + 0u);
    ctx.set_gpr(5, 2228u << 16u);
    ctx.set_gpr(5, ctx.gpr[5] + static_cast<std::uint32_t>(-24832));
    ctx.set_gpr(6, 0u + static_cast<std::uint32_t>(4));
    ctx.set_gpr(31, 0x088EFAC0u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0080_entry, 80u, 151u, 0x08944B98u>(ctx, &aot_mem) && ctx.pc == 0x088EFAC0u) goto L_088EFAC0;
    return;
L_088EFAC0:
    ctx.set_gpr(5, ctx.gpr[18] + static_cast<std::uint32_t>(2));
    ctx.set_gpr(4, ctx.gpr[17] + 0u);
    ctx.set_gpr(31, 0x088EFAD0u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0080_entry, 80u, 148u, 0x08944B4Cu>(ctx, &aot_mem) && ctx.pc == 0x088EFAD0u) goto L_088EFAD0;
    return;
L_088EFAD0:
    ctx.set_gpr(16, ctx.gpr[2] + 0u);
    ctx.set_gpr(31, 0x088EFADCu);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0060_entry, 60u, 633u, 0x088F7580u>(ctx, &aot_mem) && ctx.pc == 0x088EFADCu) goto L_088EFADC;
    return;
L_088EFADC:
    rt.memory().aot_store32(ctx.gpr[16] + static_cast<std::uint32_t>(52), ctx.gpr[2]);
    ctx.set_gpr(2, 0u + static_cast<std::uint32_t>(1));
    rt.memory().aot_store8(ctx.gpr[16] + static_cast<std::uint32_t>(48), static_cast<std::uint8_t>(ctx.gpr[2]));
    ctx.set_gpr(5, ctx.gpr[18] + static_cast<std::uint32_t>(3));
    ctx.set_gpr(4, ctx.gpr[17] + 0u);
    ctx.set_gpr(31, 0x088EFAF8u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0080_entry, 80u, 148u, 0x08944B4Cu>(ctx, &aot_mem) && ctx.pc == 0x088EFAF8u) goto L_088EFAF8;
    return;
L_088EFAF8:
    rt.memory().aot_store8(ctx.gpr[2] + static_cast<std::uint32_t>(38), static_cast<std::uint8_t>(0u));
    ctx.set_gpr(4, ctx.gpr[17] + 0u);
    ctx.set_gpr(5, 2228u << 16u);
    ctx.set_gpr(5, ctx.gpr[5] + static_cast<std::uint32_t>(-24784));
    ctx.set_gpr(6, 2228u << 16u);
    ctx.set_gpr(6, ctx.gpr[6] + static_cast<std::uint32_t>(-24768));
    ctx.set_gpr(7, 2228u << 16u);
    ctx.set_gpr(7, ctx.gpr[7] + static_cast<std::uint32_t>(-24752));
    ctx.set_gpr(8, ctx.gpr[18] + 0u);
    ctx.set_gpr(31, 0x088EFB24u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0080_entry, 80u, 162u, 0x08944C7Cu>(ctx, &aot_mem) && ctx.pc == 0x088EFB24u) goto L_088EFB24;
    return;
L_088EFB24:
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
L_088EFB40:
    ctx.set_gpr(29, ctx.gpr[29] + static_cast<std::uint32_t>(-16));
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(12), ctx.gpr[31]);
    ctx.set_gpr(2, 2245u << 16u);
    ctx.set_gpr(2, rt.memory().aot_load32(ctx.gpr[2] + static_cast<std::uint32_t>(29200)));
    { const bool branch_taken = ctx.gpr[2] == 0u;
    // nop
      if (branch_taken) {
          goto L_088EFB6C;
      }
      goto L_088EFB58;
    }
L_088EFB58:
    ctx.set_gpr(2, rt.memory().aot_load32(ctx.gpr[2] + static_cast<std::uint32_t>(36)));
    ctx.set_gpr(2, ctx.gpr[2] & 4u);
    ctx.set_gpr(2, 0u < ctx.gpr[2] ? 1u : 0u);
    { const bool branch_taken = ctx.gpr[2] != 0u;
    // nop
      if (branch_taken) {
          goto L_088EFB74;
      }
      goto L_088EFB6C;
    }
L_088EFB6C:
    ctx.set_gpr(31, 0x088EFB74u);
    // nop
    goto L_088EFC4C;
L_088EFB74:
    ctx.set_gpr(2, 2245u << 16u);
    ctx.set_gpr(2, rt.memory().aot_load32(ctx.gpr[2] + static_cast<std::uint32_t>(29200)));
    ctx.set_gpr(31, rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(12)));
    ctx.set_gpr(29, ctx.gpr[29] + static_cast<std::uint32_t>(16));
    jump_target = ctx.gpr[31];
    // nop
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_088EFB8C:
    ctx.set_gpr(29, ctx.gpr[29] + static_cast<std::uint32_t>(-96));
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(12), ctx.gpr[31]);
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(8), ctx.gpr[16]);
    ctx.set_gpr(4, ctx.gpr[29] + static_cast<std::uint32_t>(28));
    ctx.set_gpr(31, 0x088EFBA4u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0080_entry, 80u, 398u, 0x08945BF8u>(ctx, &aot_mem) && ctx.pc == 0x088EFBA4u) goto L_088EFBA4;
    return;
L_088EFBA4:
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(36), 0u);
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(40), 0u);
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(68), 0u);
    ctx.set_gpr(2, 2232u << 16u);
    ctx.set_gpr(2, ctx.gpr[2] + static_cast<std::uint32_t>(-3284));
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(28), ctx.gpr[2]);
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(92), 0u);
    ctx.set_gpr(31, 0x088EFBC8u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0064_entry, 64u, 444u, 0x08905FF0u>(ctx, &aot_mem) && ctx.pc == 0x088EFBC8u) goto L_088EFBC8;
    return;
L_088EFBC8:
    ctx.set_gpr(2, rt.memory().aot_load32(ctx.gpr[2] + static_cast<std::uint32_t>(932)));
    ctx.set_gpr(2, ctx.gpr[2] + ctx.gpr[29]);
    ctx.set_gpr(16, rt.memory().aot_load32(ctx.gpr[2] + static_cast<std::uint32_t>(28)));
    ctx.set_gpr(2, 2232u << 16u);
    ctx.set_gpr(2, ctx.gpr[2] + static_cast<std::uint32_t>(-3284));
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(28), ctx.gpr[2]);
    ctx.set_gpr(4, rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(92)));
    { const bool branch_taken = ctx.gpr[4] == 0u;
    // nop
      if (branch_taken) {
          goto L_088EFBF4;
      }
      goto L_088EFBEC;
    }
L_088EFBEC:
    ctx.set_gpr(31, 0x088EFBF4u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0014_entry, 14u, 257u, 0x0883D454u>(ctx, &aot_mem) && ctx.pc == 0x088EFBF4u) goto L_088EFBF4;
    return;
L_088EFBF4:
    ctx.set_gpr(2, 2232u << 16u);
    ctx.set_gpr(2, ctx.gpr[2] + static_cast<std::uint32_t>(-1036));
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(28), ctx.gpr[2]);
    ctx.set_gpr(4, ctx.gpr[29] + static_cast<std::uint32_t>(68));
    ctx.set_gpr(31, 0x088EFC0Cu);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0019_entry, 19u, 764u, 0x08853094u>(ctx, &aot_mem) && ctx.pc == 0x088EFC0Cu) goto L_088EFC0C;
    return;
L_088EFC0C:
    ctx.set_gpr(4, ctx.gpr[29] + static_cast<std::uint32_t>(40));
    ctx.set_gpr(31, 0x088EFC18u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0019_entry, 19u, 764u, 0x08853094u>(ctx, &aot_mem) && ctx.pc == 0x088EFC18u) goto L_088EFC18;
    return;
L_088EFC18:
    ctx.set_gpr(2, 2232u << 16u);
    ctx.set_gpr(2, ctx.gpr[2] + static_cast<std::uint32_t>(-15576));
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(28), ctx.gpr[2]);
    ctx.set_gpr(4, ctx.gpr[29] + static_cast<std::uint32_t>(36));
    ctx.set_gpr(5, 0u + static_cast<std::uint32_t>(-1));
    ctx.set_gpr(31, 0x088EFC34u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0020_entry, 20u, 288u, 0x088555D0u>(ctx, &aot_mem) && ctx.pc == 0x088EFC34u) goto L_088EFC34;
    return;
L_088EFC34:
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
L_088EFC4C:
    ctx.set_gpr(29, ctx.gpr[29] + static_cast<std::uint32_t>(-16));
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(12), ctx.gpr[31]);
    ctx.set_gpr(4, 2191u << 16u);
    ctx.set_gpr(4, ctx.gpr[4] + static_cast<std::uint32_t>(-908));
    ctx.set_gpr(31, 0x088EFC64u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0080_entry, 80u, 286u, 0x08945508u>(ctx, &aot_mem) && ctx.pc == 0x088EFC64u) goto L_088EFC64;
    return;
L_088EFC64:
    ctx.set_gpr(31, rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(12)));
    ctx.set_gpr(29, ctx.gpr[29] + static_cast<std::uint32_t>(16));
    jump_target = ctx.gpr[31];
    // nop
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_088EFC74:
    ctx.set_gpr(29, ctx.gpr[29] + static_cast<std::uint32_t>(-32));
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(28), ctx.gpr[31]);
    ctx.set_gpr(31, 0x088EFC84u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0052_entry, 52u, 154u, 0x088D49C4u>(ctx, &aot_mem) && ctx.pc == 0x088EFC84u) goto L_088EFC84;
    return;
L_088EFC84:
    ctx.set_gpr(2, 2191u << 16u);
    ctx.set_gpr(2, ctx.gpr[2] + static_cast<std::uint32_t>(-752));
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(0), ctx.gpr[2]);
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(4), 0u);
    ctx.set_gpr(2, 2228u << 16u);
    ctx.set_gpr(2, ctx.gpr[2] + static_cast<std::uint32_t>(-24736));
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(8), ctx.gpr[2]);
    ctx.set_gpr(4, 0u + 0u);
    ctx.set_gpr(5, 2245u << 16u);
    ctx.set_gpr(5, ctx.gpr[5] + static_cast<std::uint32_t>(29200));
    ctx.set_gpr(6, 2191u << 16u);
    ctx.set_gpr(6, ctx.gpr[6] + static_cast<std::uint32_t>(6704));
    ctx.set_gpr(7, 2191u << 16u);
    ctx.set_gpr(7, ctx.gpr[7] + static_cast<std::uint32_t>(-2956));
    ctx.set_gpr(8, 2191u << 16u);
    ctx.set_gpr(8, ctx.gpr[8] + static_cast<std::uint32_t>(-784));
    ctx.set_gpr(9, 2228u << 16u);
    ctx.set_gpr(9, ctx.gpr[9] + static_cast<std::uint32_t>(-24728));
    ctx.set_gpr(10, 0u + static_cast<std::uint32_t>(68));
    ctx.set_gpr(11, 2191u << 16u);
    ctx.set_gpr(11, ctx.gpr[11] + static_cast<std::uint32_t>(-1140));
    ctx.set_gpr(31, 0x088EFCE0u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0080_entry, 80u, 294u, 0x08945594u>(ctx, &aot_mem) && ctx.pc == 0x088EFCE0u) goto L_088EFCE0;
    return;
L_088EFCE0:
    ctx.set_gpr(31, rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(28)));
    ctx.set_gpr(29, ctx.gpr[29] + static_cast<std::uint32_t>(32));
    jump_target = ctx.gpr[31];
    // nop
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_088EFCF0:
    ctx.set_gpr(29, ctx.gpr[29] + static_cast<std::uint32_t>(-16));
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(12), ctx.gpr[31]);
    ctx.set_gpr(31, 0x088EFD00u);
    // nop
    goto L_088EFB40;
L_088EFD00:
    ctx.set_gpr(31, rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(12)));
    ctx.set_gpr(29, ctx.gpr[29] + static_cast<std::uint32_t>(16));
    jump_target = ctx.gpr[31];
    // nop
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_088EFD10:
    ctx.set_gpr(29, ctx.gpr[29] + static_cast<std::uint32_t>(-16));
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(12), ctx.gpr[31]);
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(8), ctx.gpr[18]);
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(4), ctx.gpr[17]);
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(0), ctx.gpr[16]);
    ctx.set_gpr(2, 2245u << 16u);
    ctx.set_gpr(17, rt.memory().aot_load32(ctx.gpr[2] + static_cast<std::uint32_t>(29200)));
    ctx.set_gpr(4, ctx.gpr[17] + 0u);
    ctx.set_gpr(31, 0x088EFD38u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0080_entry, 80u, 236u, 0x089451A8u>(ctx, &aot_mem) && ctx.pc == 0x088EFD38u) goto L_088EFD38;
    return;
L_088EFD38:
    ctx.set_gpr(18, ctx.gpr[2] + 0u);
    ctx.set_gpr(4, ctx.gpr[17] + 0u);
    ctx.set_gpr(5, 2228u << 16u);
    ctx.set_gpr(5, ctx.gpr[5] + static_cast<std::uint32_t>(-24716));
    ctx.set_gpr(6, 0u + static_cast<std::uint32_t>(9));
    ctx.set_gpr(31, 0x088EFD54u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0080_entry, 80u, 151u, 0x08944B98u>(ctx, &aot_mem) && ctx.pc == 0x088EFD54u) goto L_088EFD54;
    return;
L_088EFD54:
    ctx.set_gpr(5, ctx.gpr[18] + static_cast<std::uint32_t>(7));
    ctx.set_gpr(4, ctx.gpr[17] + 0u);
    ctx.set_gpr(31, 0x088EFD64u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0080_entry, 80u, 148u, 0x08944B4Cu>(ctx, &aot_mem) && ctx.pc == 0x088EFD64u) goto L_088EFD64;
    return;
L_088EFD64:
    ctx.set_gpr(16, ctx.gpr[2] + 0u);
    ctx.set_gpr(31, 0x088EFD70u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0054_entry, 54u, 416u, 0x088DE2D0u>(ctx, &aot_mem) && ctx.pc == 0x088EFD70u) goto L_088EFD70;
    return;
L_088EFD70:
    rt.memory().aot_store32(ctx.gpr[16] + static_cast<std::uint32_t>(56), ctx.gpr[2]);
    ctx.set_gpr(5, ctx.gpr[18] + static_cast<std::uint32_t>(8));
    ctx.set_gpr(4, ctx.gpr[17] + 0u);
    ctx.set_gpr(31, 0x088EFD84u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0080_entry, 80u, 148u, 0x08944B4Cu>(ctx, &aot_mem) && ctx.pc == 0x088EFD84u) goto L_088EFD84;
    return;
L_088EFD84:
    ctx.set_gpr(16, ctx.gpr[2] + 0u);
    ctx.set_gpr(31, 0x088EFD90u);
    // nop
    goto L_088EFDD8;
L_088EFD90:
    rt.memory().aot_store32(ctx.gpr[16] + static_cast<std::uint32_t>(52), ctx.gpr[2]);
    ctx.set_gpr(4, ctx.gpr[17] + 0u);
    ctx.set_gpr(5, 2228u << 16u);
    ctx.set_gpr(5, ctx.gpr[5] + static_cast<std::uint32_t>(-24608));
    ctx.set_gpr(6, 2228u << 16u);
    ctx.set_gpr(6, ctx.gpr[6] + static_cast<std::uint32_t>(-24572));
    ctx.set_gpr(7, 2228u << 16u);
    ctx.set_gpr(7, ctx.gpr[7] + static_cast<std::uint32_t>(-24536));
    ctx.set_gpr(8, ctx.gpr[18] + 0u);
    ctx.set_gpr(31, 0x088EFDBCu);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0080_entry, 80u, 162u, 0x08944C7Cu>(ctx, &aot_mem) && ctx.pc == 0x088EFDBCu) goto L_088EFDBC;
    return;
L_088EFDBC:
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
L_088EFDD8:
    ctx.set_gpr(29, ctx.gpr[29] + static_cast<std::uint32_t>(-16));
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(12), ctx.gpr[31]);
    ctx.set_gpr(2, 2245u << 16u);
    ctx.set_gpr(2, rt.memory().aot_load32(ctx.gpr[2] + static_cast<std::uint32_t>(29240)));
    { const bool branch_taken = ctx.gpr[2] != 0u;
    // nop
      if (branch_taken) {
          goto L_088EFE18;
      }
      goto L_088EFDF0;
    }
L_088EFDF0:
    ctx.set_gpr(31, 0x088EFDF8u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0078_entry, 78u, 217u, 0x0893CDECu>(ctx, &aot_mem) && ctx.pc == 0x088EFDF8u) goto L_088EFDF8;
    return;
L_088EFDF8:
    ctx.set_gpr(4, rt.memory().aot_load32(ctx.gpr[2] + static_cast<std::uint32_t>(0)));
    ctx.set_gpr(31, 0x088EFE04u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0078_entry, 78u, 199u, 0x0893CC68u>(ctx, &aot_mem) && ctx.pc == 0x088EFE04u) goto L_088EFE04;
    return;
L_088EFE04:
    ctx.set_gpr(4, ctx.gpr[2] + 0u);
    ctx.set_gpr(31, 0x088EFE10u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0052_entry, 52u, 732u, 0x088D6FE8u>(ctx, &aot_mem) && ctx.pc == 0x088EFE10u) goto L_088EFE10;
    return;
L_088EFE10:
    ctx.set_gpr(3, 2245u << 16u);
    rt.memory().aot_store32(ctx.gpr[3] + static_cast<std::uint32_t>(29240), ctx.gpr[2]);
    goto L_088EFE18;
L_088EFE18:
    ctx.set_gpr(2, 2245u << 16u);
    ctx.set_gpr(2, rt.memory().aot_load32(ctx.gpr[2] + static_cast<std::uint32_t>(29240)));
    ctx.set_gpr(31, rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(12)));
    ctx.set_gpr(29, ctx.gpr[29] + static_cast<std::uint32_t>(16));
    jump_target = ctx.gpr[31];
    // nop
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_088EFE30:
    ctx.set_gpr(29, ctx.gpr[29] + static_cast<std::uint32_t>(-16));
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(12), ctx.gpr[31]);
    ctx.set_gpr(2, 2245u << 16u);
    ctx.set_gpr(2, rt.memory().aot_load32(ctx.gpr[2] + static_cast<std::uint32_t>(29240)));
    { const bool branch_taken = ctx.gpr[2] == 0u;
    // nop
      if (branch_taken) {
          goto L_088EFE5C;
      }
      goto L_088EFE48;
    }
L_088EFE48:
    ctx.set_gpr(2, rt.memory().aot_load32(ctx.gpr[2] + static_cast<std::uint32_t>(36)));
    ctx.set_gpr(2, ctx.gpr[2] & 4u);
    ctx.set_gpr(2, 0u < ctx.gpr[2] ? 1u : 0u);
    { const bool branch_taken = ctx.gpr[2] != 0u;
    // nop
      if (branch_taken) {
          goto L_088EFE64;
      }
      goto L_088EFE5C;
    }
L_088EFE5C:
    ctx.set_gpr(31, 0x088EFE64u);
    // nop
    goto L_088EFE7C;
L_088EFE64:
    ctx.set_gpr(2, 2245u << 16u);
    ctx.set_gpr(2, rt.memory().aot_load32(ctx.gpr[2] + static_cast<std::uint32_t>(29240)));
    ctx.set_gpr(31, rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(12)));
    ctx.set_gpr(29, ctx.gpr[29] + static_cast<std::uint32_t>(16));
    jump_target = ctx.gpr[31];
    // nop
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_088EFE7C:
    ctx.set_gpr(29, ctx.gpr[29] + static_cast<std::uint32_t>(-16));
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(12), ctx.gpr[31]);
    ctx.set_gpr(4, 2191u << 16u);
    ctx.set_gpr(4, ctx.gpr[4] + static_cast<std::uint32_t>(-348));
    ctx.set_gpr(31, 0x088EFE94u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0080_entry, 80u, 286u, 0x08945508u>(ctx, &aot_mem) && ctx.pc == 0x088EFE94u) goto L_088EFE94;
    return;
L_088EFE94:
    ctx.set_gpr(31, rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(12)));
    ctx.set_gpr(29, ctx.gpr[29] + static_cast<std::uint32_t>(16));
    jump_target = ctx.gpr[31];
    // nop
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_088EFEA4:
    ctx.set_gpr(29, ctx.gpr[29] + static_cast<std::uint32_t>(-32));
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(28), ctx.gpr[31]);
    ctx.set_gpr(31, 0x088EFEB4u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0052_entry, 52u, 154u, 0x088D49C4u>(ctx, &aot_mem) && ctx.pc == 0x088EFEB4u) goto L_088EFEB4;
    return;
L_088EFEB4:
    ctx.set_gpr(2, 2191u << 16u);
    ctx.set_gpr(2, ctx.gpr[2] + static_cast<std::uint32_t>(-196));
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(0), ctx.gpr[2]);
    ctx.set_gpr(2, 2191u << 16u);
    ctx.set_gpr(2, ctx.gpr[2] + static_cast<std::uint32_t>(-156));
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(4), ctx.gpr[2]);
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(8), 0u);
    ctx.set_gpr(4, 0u + static_cast<std::uint32_t>(1));
    ctx.set_gpr(5, 2245u << 16u);
    ctx.set_gpr(5, ctx.gpr[5] + static_cast<std::uint32_t>(29240));
    ctx.set_gpr(6, 2196u << 16u);
    ctx.set_gpr(6, ctx.gpr[6] + static_cast<std::uint32_t>(25520));
    ctx.set_gpr(7, 2188u << 16u);
    ctx.set_gpr(7, ctx.gpr[7] + static_cast<std::uint32_t>(-27092));
    ctx.set_gpr(8, 2191u << 16u);
    ctx.set_gpr(8, ctx.gpr[8] + static_cast<std::uint32_t>(-228));
    ctx.set_gpr(9, 2228u << 16u);
    ctx.set_gpr(9, ctx.gpr[9] + static_cast<std::uint32_t>(-24500));
    ctx.set_gpr(10, 0u + static_cast<std::uint32_t>(8));
    ctx.set_gpr(11, 0u + 0u);
    ctx.set_gpr(31, 0x088EFF0Cu);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0080_entry, 80u, 294u, 0x08945594u>(ctx, &aot_mem) && ctx.pc == 0x088EFF0Cu) goto L_088EFF0C;
    return;
L_088EFF0C:
    ctx.set_gpr(31, rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(28)));
    ctx.set_gpr(29, ctx.gpr[29] + static_cast<std::uint32_t>(32));
    jump_target = ctx.gpr[31];
    // nop
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_088EFF1C:
    ctx.set_gpr(29, ctx.gpr[29] + static_cast<std::uint32_t>(-16));
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(12), ctx.gpr[31]);
    ctx.set_gpr(31, 0x088EFF2Cu);
    // nop
    goto L_088EFE30;
L_088EFF2C:
    ctx.set_gpr(31, rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(12)));
    ctx.set_gpr(29, ctx.gpr[29] + static_cast<std::uint32_t>(16));
    jump_target = ctx.gpr[31];
    // nop
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_088EFF3C:
    ctx.set_gpr(29, ctx.gpr[29] + static_cast<std::uint32_t>(-16));
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(12), ctx.gpr[31]);
    ctx.set_gpr(4, 2191u << 16u);
    ctx.set_gpr(4, ctx.gpr[4] + static_cast<std::uint32_t>(-124));
    ctx.set_gpr(31, 0x088EFF54u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0080_entry, 80u, 237u, 0x089451B8u>(ctx, &aot_mem) && ctx.pc == 0x088EFF54u) goto L_088EFF54;
    return;
L_088EFF54:
    ctx.set_gpr(31, rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(12)));
    ctx.set_gpr(29, ctx.gpr[29] + static_cast<std::uint32_t>(16));
    jump_target = ctx.gpr[31];
    // nop
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_088EFF64:
    ctx.set_gpr(29, ctx.gpr[29] + static_cast<std::uint32_t>(-16));
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(12), ctx.gpr[31]);
    ctx.set_gpr(31, 0x088EFF74u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0073_entry, 73u, 76u, 0x089285A8u>(ctx, &aot_mem) && ctx.pc == 0x088EFF74u) goto L_088EFF74;
    return;
L_088EFF74:
    ctx.set_gpr(31, rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(12)));
    ctx.set_gpr(29, ctx.gpr[29] + static_cast<std::uint32_t>(16));
    jump_target = ctx.gpr[31];
    // nop
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_088EFF84:
    ctx.set_gpr(29, ctx.gpr[29] + static_cast<std::uint32_t>(-16));
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(12), ctx.gpr[31]);
    ctx.set_gpr(31, 0x088EFF94u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0073_entry, 73u, 81u, 0x089285F4u>(ctx, &aot_mem) && ctx.pc == 0x088EFF94u) goto L_088EFF94;
    return;
L_088EFF94:
    ctx.set_gpr(31, rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(12)));
    ctx.set_gpr(29, ctx.gpr[29] + static_cast<std::uint32_t>(16));
    jump_target = ctx.gpr[31];
    // nop
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_088EFFA4:
    ctx.set_gpr(29, ctx.gpr[29] + static_cast<std::uint32_t>(-16));
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(12), ctx.gpr[31]);
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(8), ctx.gpr[16]);
    ctx.set_gpr(16, ctx.gpr[4] + 0u);
    ctx.set_gpr(31, 0x088EFFBCu);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0059_entry, 59u, 7u, 0x088F0074u>(ctx, &aot_mem) && ctx.pc == 0x088EFFBCu) goto L_088EFFBC;
    return;
L_088EFFBC:
    ctx.set_gpr(2, 2245u << 16u);
    ctx.set_gpr(4, rt.memory().aot_load32(ctx.gpr[2] + static_cast<std::uint32_t>(29244)));
    ctx.set_gpr(5, ctx.gpr[16] + 0u);
    ctx.set_gpr(31, 0x088EFFD0u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0080_entry, 80u, 50u, 0x089443D4u>(ctx, &aot_mem) && ctx.pc == 0x088EFFD0u) goto L_088EFFD0;
    return;
L_088EFFD0:
    ctx.set_gpr(31, rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(12)));
    ctx.set_gpr(16, rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(8)));
    ctx.set_gpr(29, ctx.gpr[29] + static_cast<std::uint32_t>(16));
    jump_target = ctx.gpr[31];
    // nop
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_088EFFE4:
    ctx.set_gpr(29, ctx.gpr[29] + static_cast<std::uint32_t>(-16));
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(12), ctx.gpr[31]);
    ctx.set_gpr(2, 2245u << 16u);
    ctx.set_gpr(2, rt.memory().aot_load32(ctx.gpr[2] + static_cast<std::uint32_t>(29244)));
    { const bool branch_taken = ctx.gpr[2] == 0u;
    // nop
      if (branch_taken) {
          (void)rt.invoke_chained_direct<&recomp_unit_0059_entry, 59u, 2u, 0x088F0010u>(ctx, &aot_mem); return;
      }
      goto L_088EFFFC;
    }
L_088EFFFC:
    ctx.set_gpr(2, rt.memory().aot_load32(ctx.gpr[2] + static_cast<std::uint32_t>(36)));
    ctx.pc = 0x088F0000u; return;
}

void recomp_unit_0058(Runtime &rt, AllegrexContext &ctx) {
    auto aot_mem = rt.memory().aot_fast_view();
    recomp_unit_0058_entry(rt, ctx, 0u, aot_mem);
}

void register_generated_unit_58(Runtime &runtime) {
    runtime.register_generated_unit(58u, 0x088EC000u, 16384u, &recomp_unit_0058, &recomp_unit_0058_entry);
    runtime.register_function(0x088EC000u, &recomp_unit_0058, "recomp_unit_0058");
    runtime.register_function(0x088EC00Cu, &recomp_unit_0058, "recomp_unit_0058");
    runtime.register_function(0x088EC018u, &recomp_unit_0058, "recomp_unit_0058");
    runtime.register_function(0x088EC020u, &recomp_unit_0058, "recomp_unit_0058");
    runtime.register_function(0x088EC038u, &recomp_unit_0058, "recomp_unit_0058");
    runtime.register_function(0x088EC050u, &recomp_unit_0058, "recomp_unit_0058");
    runtime.register_function(0x088EC064u, &recomp_unit_0058, "recomp_unit_0058");
    runtime.register_function(0x088EC06Cu, &recomp_unit_0058, "recomp_unit_0058");
    runtime.register_function(0x088EC084u, &recomp_unit_0058, "recomp_unit_0058");
    runtime.register_function(0x088EC098u, &recomp_unit_0058, "recomp_unit_0058");
    runtime.register_function(0x088EC0ACu, &recomp_unit_0058, "recomp_unit_0058");
    runtime.register_function(0x088EC0C8u, &recomp_unit_0058, "recomp_unit_0058");
    runtime.register_function(0x088EC0E0u, &recomp_unit_0058, "recomp_unit_0058");
    runtime.register_function(0x088EC0F0u, &recomp_unit_0058, "recomp_unit_0058");
    runtime.register_function(0x088EC100u, &recomp_unit_0058, "recomp_unit_0058");
    runtime.register_function(0x088EC154u, &recomp_unit_0058, "recomp_unit_0058");
    runtime.register_function(0x088EC164u, &recomp_unit_0058, "recomp_unit_0058");
    runtime.register_function(0x088EC174u, &recomp_unit_0058, "recomp_unit_0058");
    runtime.register_function(0x088EC184u, &recomp_unit_0058, "recomp_unit_0058");
    runtime.register_function(0x088EC19Cu, &recomp_unit_0058, "recomp_unit_0058");
    runtime.register_function(0x088EC1B0u, &recomp_unit_0058, "recomp_unit_0058");
    runtime.register_function(0x088EC1C4u, &recomp_unit_0058, "recomp_unit_0058");
    runtime.register_function(0x088EC1DCu, &recomp_unit_0058, "recomp_unit_0058");
    runtime.register_function(0x088EC1F0u, &recomp_unit_0058, "recomp_unit_0058");
    runtime.register_function(0x088EC1F8u, &recomp_unit_0058, "recomp_unit_0058");
    runtime.register_function(0x088EC210u, &recomp_unit_0058, "recomp_unit_0058");
    runtime.register_function(0x088EC228u, &recomp_unit_0058, "recomp_unit_0058");
    runtime.register_function(0x088EC24Cu, &recomp_unit_0058, "recomp_unit_0058");
    runtime.register_function(0x088EC270u, &recomp_unit_0058, "recomp_unit_0058");
    runtime.register_function(0x088EC278u, &recomp_unit_0058, "recomp_unit_0058");
    runtime.register_function(0x088EC284u, &recomp_unit_0058, "recomp_unit_0058");
    runtime.register_function(0x088EC28Cu, &recomp_unit_0058, "recomp_unit_0058");
    runtime.register_function(0x088EC298u, &recomp_unit_0058, "recomp_unit_0058");
    runtime.register_function(0x088EC2A0u, &recomp_unit_0058, "recomp_unit_0058");
    runtime.register_function(0x088EC2B0u, &recomp_unit_0058, "recomp_unit_0058");
    runtime.register_function(0x088EC2BCu, &recomp_unit_0058, "recomp_unit_0058");
    runtime.register_function(0x088EC2C4u, &recomp_unit_0058, "recomp_unit_0058");
    runtime.register_function(0x088EC2CCu, &recomp_unit_0058, "recomp_unit_0058");
    runtime.register_function(0x088EC2DCu, &recomp_unit_0058, "recomp_unit_0058");
    runtime.register_function(0x088EC2F4u, &recomp_unit_0058, "recomp_unit_0058");
    runtime.register_function(0x088EC30Cu, &recomp_unit_0058, "recomp_unit_0058");
    runtime.register_function(0x088EC31Cu, &recomp_unit_0058, "recomp_unit_0058");
    runtime.register_function(0x088EC32Cu, &recomp_unit_0058, "recomp_unit_0058");
    runtime.register_function(0x088EC388u, &recomp_unit_0058, "recomp_unit_0058");
    runtime.register_function(0x088EC398u, &recomp_unit_0058, "recomp_unit_0058");
    runtime.register_function(0x088EC3A8u, &recomp_unit_0058, "recomp_unit_0058");
    runtime.register_function(0x088EC3B8u, &recomp_unit_0058, "recomp_unit_0058");
    runtime.register_function(0x088EC3E0u, &recomp_unit_0058, "recomp_unit_0058");
    runtime.register_function(0x088EC3FCu, &recomp_unit_0058, "recomp_unit_0058");
    runtime.register_function(0x088EC40Cu, &recomp_unit_0058, "recomp_unit_0058");
    runtime.register_function(0x088EC420u, &recomp_unit_0058, "recomp_unit_0058");
    runtime.register_function(0x088EC430u, &recomp_unit_0058, "recomp_unit_0058");
    runtime.register_function(0x088EC43Cu, &recomp_unit_0058, "recomp_unit_0058");
    runtime.register_function(0x088EC458u, &recomp_unit_0058, "recomp_unit_0058");
    runtime.register_function(0x088EC464u, &recomp_unit_0058, "recomp_unit_0058");
    runtime.register_function(0x088EC480u, &recomp_unit_0058, "recomp_unit_0058");
    runtime.register_function(0x088EC48Cu, &recomp_unit_0058, "recomp_unit_0058");
    runtime.register_function(0x088EC4C0u, &recomp_unit_0058, "recomp_unit_0058");
    runtime.register_function(0x088EC4DCu, &recomp_unit_0058, "recomp_unit_0058");
    runtime.register_function(0x088EC4F4u, &recomp_unit_0058, "recomp_unit_0058");
    runtime.register_function(0x088EC508u, &recomp_unit_0058, "recomp_unit_0058");
    runtime.register_function(0x088EC510u, &recomp_unit_0058, "recomp_unit_0058");
    runtime.register_function(0x088EC528u, &recomp_unit_0058, "recomp_unit_0058");
    runtime.register_function(0x088EC540u, &recomp_unit_0058, "recomp_unit_0058");
    runtime.register_function(0x088EC55Cu, &recomp_unit_0058, "recomp_unit_0058");
    runtime.register_function(0x088EC580u, &recomp_unit_0058, "recomp_unit_0058");
    runtime.register_function(0x088EC588u, &recomp_unit_0058, "recomp_unit_0058");
    runtime.register_function(0x088EC5A4u, &recomp_unit_0058, "recomp_unit_0058");
    runtime.register_function(0x088EC5BCu, &recomp_unit_0058, "recomp_unit_0058");
    runtime.register_function(0x088EC5D4u, &recomp_unit_0058, "recomp_unit_0058");
    runtime.register_function(0x088EC5E4u, &recomp_unit_0058, "recomp_unit_0058");
    runtime.register_function(0x088EC5F4u, &recomp_unit_0058, "recomp_unit_0058");
    runtime.register_function(0x088EC650u, &recomp_unit_0058, "recomp_unit_0058");
    runtime.register_function(0x088EC660u, &recomp_unit_0058, "recomp_unit_0058");
    runtime.register_function(0x088EC670u, &recomp_unit_0058, "recomp_unit_0058");
    runtime.register_function(0x088EC680u, &recomp_unit_0058, "recomp_unit_0058");
    runtime.register_function(0x088EC6A8u, &recomp_unit_0058, "recomp_unit_0058");
    runtime.register_function(0x088EC6C4u, &recomp_unit_0058, "recomp_unit_0058");
    runtime.register_function(0x088EC6D4u, &recomp_unit_0058, "recomp_unit_0058");
    runtime.register_function(0x088EC6E0u, &recomp_unit_0058, "recomp_unit_0058");
    runtime.register_function(0x088EC714u, &recomp_unit_0058, "recomp_unit_0058");
    runtime.register_function(0x088EC730u, &recomp_unit_0058, "recomp_unit_0058");
    runtime.register_function(0x088EC748u, &recomp_unit_0058, "recomp_unit_0058");
    runtime.register_function(0x088EC75Cu, &recomp_unit_0058, "recomp_unit_0058");
    runtime.register_function(0x088EC770u, &recomp_unit_0058, "recomp_unit_0058");
    runtime.register_function(0x088EC788u, &recomp_unit_0058, "recomp_unit_0058");
    runtime.register_function(0x088EC790u, &recomp_unit_0058, "recomp_unit_0058");
    runtime.register_function(0x088EC79Cu, &recomp_unit_0058, "recomp_unit_0058");
    runtime.register_function(0x088EC7A8u, &recomp_unit_0058, "recomp_unit_0058");
    runtime.register_function(0x088EC7B0u, &recomp_unit_0058, "recomp_unit_0058");
    runtime.register_function(0x088EC7C8u, &recomp_unit_0058, "recomp_unit_0058");
    runtime.register_function(0x088EC7E0u, &recomp_unit_0058, "recomp_unit_0058");
    runtime.register_function(0x088EC7F4u, &recomp_unit_0058, "recomp_unit_0058");
    runtime.register_function(0x088EC7FCu, &recomp_unit_0058, "recomp_unit_0058");
    runtime.register_function(0x088EC814u, &recomp_unit_0058, "recomp_unit_0058");
    runtime.register_function(0x088EC82Cu, &recomp_unit_0058, "recomp_unit_0058");
    runtime.register_function(0x088EC848u, &recomp_unit_0058, "recomp_unit_0058");
    runtime.register_function(0x088EC86Cu, &recomp_unit_0058, "recomp_unit_0058");
    runtime.register_function(0x088EC874u, &recomp_unit_0058, "recomp_unit_0058");
    runtime.register_function(0x088EC880u, &recomp_unit_0058, "recomp_unit_0058");
    runtime.register_function(0x088EC888u, &recomp_unit_0058, "recomp_unit_0058");
    runtime.register_function(0x088EC8A0u, &recomp_unit_0058, "recomp_unit_0058");
    runtime.register_function(0x088EC8B8u, &recomp_unit_0058, "recomp_unit_0058");
    runtime.register_function(0x088EC8C8u, &recomp_unit_0058, "recomp_unit_0058");
    runtime.register_function(0x088EC8D8u, &recomp_unit_0058, "recomp_unit_0058");
    runtime.register_function(0x088EC934u, &recomp_unit_0058, "recomp_unit_0058");
    runtime.register_function(0x088EC944u, &recomp_unit_0058, "recomp_unit_0058");
    runtime.register_function(0x088EC954u, &recomp_unit_0058, "recomp_unit_0058");
    runtime.register_function(0x088EC964u, &recomp_unit_0058, "recomp_unit_0058");
    runtime.register_function(0x088EC98Cu, &recomp_unit_0058, "recomp_unit_0058");
    runtime.register_function(0x088EC9A8u, &recomp_unit_0058, "recomp_unit_0058");
    runtime.register_function(0x088EC9B8u, &recomp_unit_0058, "recomp_unit_0058");
    runtime.register_function(0x088EC9C4u, &recomp_unit_0058, "recomp_unit_0058");
    runtime.register_function(0x088EC9E0u, &recomp_unit_0058, "recomp_unit_0058");
    runtime.register_function(0x088EC9ECu, &recomp_unit_0058, "recomp_unit_0058");
    runtime.register_function(0x088ECA08u, &recomp_unit_0058, "recomp_unit_0058");
    runtime.register_function(0x088ECA18u, &recomp_unit_0058, "recomp_unit_0058");
    runtime.register_function(0x088ECA40u, &recomp_unit_0058, "recomp_unit_0058");
    runtime.register_function(0x088ECA5Cu, &recomp_unit_0058, "recomp_unit_0058");
    runtime.register_function(0x088ECA74u, &recomp_unit_0058, "recomp_unit_0058");
    runtime.register_function(0x088ECA88u, &recomp_unit_0058, "recomp_unit_0058");
    runtime.register_function(0x088ECA9Cu, &recomp_unit_0058, "recomp_unit_0058");
    runtime.register_function(0x088ECAB4u, &recomp_unit_0058, "recomp_unit_0058");
    runtime.register_function(0x088ECABCu, &recomp_unit_0058, "recomp_unit_0058");
    runtime.register_function(0x088ECAC8u, &recomp_unit_0058, "recomp_unit_0058");
    runtime.register_function(0x088ECAD4u, &recomp_unit_0058, "recomp_unit_0058");
    runtime.register_function(0x088ECADCu, &recomp_unit_0058, "recomp_unit_0058");
    runtime.register_function(0x088ECAF4u, &recomp_unit_0058, "recomp_unit_0058");
    runtime.register_function(0x088ECB0Cu, &recomp_unit_0058, "recomp_unit_0058");
    runtime.register_function(0x088ECB20u, &recomp_unit_0058, "recomp_unit_0058");
    runtime.register_function(0x088ECB28u, &recomp_unit_0058, "recomp_unit_0058");
    runtime.register_function(0x088ECB40u, &recomp_unit_0058, "recomp_unit_0058");
    runtime.register_function(0x088ECB54u, &recomp_unit_0058, "recomp_unit_0058");
    runtime.register_function(0x088ECB68u, &recomp_unit_0058, "recomp_unit_0058");
    runtime.register_function(0x088ECB84u, &recomp_unit_0058, "recomp_unit_0058");
    runtime.register_function(0x088ECB9Cu, &recomp_unit_0058, "recomp_unit_0058");
    runtime.register_function(0x088ECBACu, &recomp_unit_0058, "recomp_unit_0058");
    runtime.register_function(0x088ECBBCu, &recomp_unit_0058, "recomp_unit_0058");
    runtime.register_function(0x088ECC10u, &recomp_unit_0058, "recomp_unit_0058");
    runtime.register_function(0x088ECC20u, &recomp_unit_0058, "recomp_unit_0058");
    runtime.register_function(0x088ECC30u, &recomp_unit_0058, "recomp_unit_0058");
    runtime.register_function(0x088ECC40u, &recomp_unit_0058, "recomp_unit_0058");
    runtime.register_function(0x088ECC70u, &recomp_unit_0058, "recomp_unit_0058");
    runtime.register_function(0x088ECC84u, &recomp_unit_0058, "recomp_unit_0058");
    runtime.register_function(0x088ECCA0u, &recomp_unit_0058, "recomp_unit_0058");
    runtime.register_function(0x088ECCCCu, &recomp_unit_0058, "recomp_unit_0058");
    runtime.register_function(0x088ECCE8u, &recomp_unit_0058, "recomp_unit_0058");
    runtime.register_function(0x088ECCF4u, &recomp_unit_0058, "recomp_unit_0058");
    runtime.register_function(0x088ECD08u, &recomp_unit_0058, "recomp_unit_0058");
    runtime.register_function(0x088ECD1Cu, &recomp_unit_0058, "recomp_unit_0058");
    runtime.register_function(0x088ECD38u, &recomp_unit_0058, "recomp_unit_0058");
    runtime.register_function(0x088ECD64u, &recomp_unit_0058, "recomp_unit_0058");
    runtime.register_function(0x088ECD80u, &recomp_unit_0058, "recomp_unit_0058");
    runtime.register_function(0x088ECD8Cu, &recomp_unit_0058, "recomp_unit_0058");
    runtime.register_function(0x088ECDA0u, &recomp_unit_0058, "recomp_unit_0058");
    runtime.register_function(0x088ECDB4u, &recomp_unit_0058, "recomp_unit_0058");
    runtime.register_function(0x088ECDD0u, &recomp_unit_0058, "recomp_unit_0058");
    runtime.register_function(0x088ECDDCu, &recomp_unit_0058, "recomp_unit_0058");
    runtime.register_function(0x088ECE0Cu, &recomp_unit_0058, "recomp_unit_0058");
    runtime.register_function(0x088ECE28u, &recomp_unit_0058, "recomp_unit_0058");
    runtime.register_function(0x088ECE34u, &recomp_unit_0058, "recomp_unit_0058");
    runtime.register_function(0x088ECE50u, &recomp_unit_0058, "recomp_unit_0058");
    runtime.register_function(0x088ECE68u, &recomp_unit_0058, "recomp_unit_0058");
    runtime.register_function(0x088ECE7Cu, &recomp_unit_0058, "recomp_unit_0058");
    runtime.register_function(0x088ECE90u, &recomp_unit_0058, "recomp_unit_0058");
    runtime.register_function(0x088ECEA8u, &recomp_unit_0058, "recomp_unit_0058");
    runtime.register_function(0x088ECEBCu, &recomp_unit_0058, "recomp_unit_0058");
    runtime.register_function(0x088ECEC4u, &recomp_unit_0058, "recomp_unit_0058");
    runtime.register_function(0x088ECEDCu, &recomp_unit_0058, "recomp_unit_0058");
    runtime.register_function(0x088ECEF4u, &recomp_unit_0058, "recomp_unit_0058");
    runtime.register_function(0x088ECF14u, &recomp_unit_0058, "recomp_unit_0058");
    runtime.register_function(0x088ECF3Cu, &recomp_unit_0058, "recomp_unit_0058");
    runtime.register_function(0x088ECF48u, &recomp_unit_0058, "recomp_unit_0058");
    runtime.register_function(0x088ECF50u, &recomp_unit_0058, "recomp_unit_0058");
    runtime.register_function(0x088ECF58u, &recomp_unit_0058, "recomp_unit_0058");
    runtime.register_function(0x088ECF68u, &recomp_unit_0058, "recomp_unit_0058");
    runtime.register_function(0x088ECF74u, &recomp_unit_0058, "recomp_unit_0058");
    runtime.register_function(0x088ECF7Cu, &recomp_unit_0058, "recomp_unit_0058");
    runtime.register_function(0x088ECF98u, &recomp_unit_0058, "recomp_unit_0058");
    runtime.register_function(0x088ECFB0u, &recomp_unit_0058, "recomp_unit_0058");
    runtime.register_function(0x088ECFC8u, &recomp_unit_0058, "recomp_unit_0058");
    runtime.register_function(0x088ECFD8u, &recomp_unit_0058, "recomp_unit_0058");
    runtime.register_function(0x088ECFE8u, &recomp_unit_0058, "recomp_unit_0058");
    runtime.register_function(0x088ED044u, &recomp_unit_0058, "recomp_unit_0058");
    runtime.register_function(0x088ED054u, &recomp_unit_0058, "recomp_unit_0058");
    runtime.register_function(0x088ED064u, &recomp_unit_0058, "recomp_unit_0058");
    runtime.register_function(0x088ED074u, &recomp_unit_0058, "recomp_unit_0058");
    runtime.register_function(0x088ED084u, &recomp_unit_0058, "recomp_unit_0058");
    runtime.register_function(0x088ED0B0u, &recomp_unit_0058, "recomp_unit_0058");
    runtime.register_function(0x088ED0CCu, &recomp_unit_0058, "recomp_unit_0058");
    runtime.register_function(0x088ED0DCu, &recomp_unit_0058, "recomp_unit_0058");
    runtime.register_function(0x088ED0E8u, &recomp_unit_0058, "recomp_unit_0058");
    runtime.register_function(0x088ED100u, &recomp_unit_0058, "recomp_unit_0058");
    runtime.register_function(0x088ED118u, &recomp_unit_0058, "recomp_unit_0058");
    runtime.register_function(0x088ED134u, &recomp_unit_0058, "recomp_unit_0058");
    runtime.register_function(0x088ED148u, &recomp_unit_0058, "recomp_unit_0058");
    runtime.register_function(0x088ED164u, &recomp_unit_0058, "recomp_unit_0058");
    runtime.register_function(0x088ED174u, &recomp_unit_0058, "recomp_unit_0058");
    runtime.register_function(0x088ED180u, &recomp_unit_0058, "recomp_unit_0058");
    runtime.register_function(0x088ED18Cu, &recomp_unit_0058, "recomp_unit_0058");
    runtime.register_function(0x088ED198u, &recomp_unit_0058, "recomp_unit_0058");
    runtime.register_function(0x088ED1C0u, &recomp_unit_0058, "recomp_unit_0058");
    runtime.register_function(0x088ED1DCu, &recomp_unit_0058, "recomp_unit_0058");
    runtime.register_function(0x088ED200u, &recomp_unit_0058, "recomp_unit_0058");
    runtime.register_function(0x088ED21Cu, &recomp_unit_0058, "recomp_unit_0058");
    runtime.register_function(0x088ED228u, &recomp_unit_0058, "recomp_unit_0058");
    runtime.register_function(0x088ED238u, &recomp_unit_0058, "recomp_unit_0058");
    runtime.register_function(0x088ED248u, &recomp_unit_0058, "recomp_unit_0058");
    runtime.register_function(0x088ED258u, &recomp_unit_0058, "recomp_unit_0058");
    runtime.register_function(0x088ED268u, &recomp_unit_0058, "recomp_unit_0058");
    runtime.register_function(0x088ED290u, &recomp_unit_0058, "recomp_unit_0058");
    runtime.register_function(0x088ED2B0u, &recomp_unit_0058, "recomp_unit_0058");
    runtime.register_function(0x088ED2C8u, &recomp_unit_0058, "recomp_unit_0058");
    runtime.register_function(0x088ED2DCu, &recomp_unit_0058, "recomp_unit_0058");
    runtime.register_function(0x088ED2E4u, &recomp_unit_0058, "recomp_unit_0058");
    runtime.register_function(0x088ED2FCu, &recomp_unit_0058, "recomp_unit_0058");
    runtime.register_function(0x088ED310u, &recomp_unit_0058, "recomp_unit_0058");
    runtime.register_function(0x088ED324u, &recomp_unit_0058, "recomp_unit_0058");
    runtime.register_function(0x088ED340u, &recomp_unit_0058, "recomp_unit_0058");
    runtime.register_function(0x088ED358u, &recomp_unit_0058, "recomp_unit_0058");
    runtime.register_function(0x088ED368u, &recomp_unit_0058, "recomp_unit_0058");
    runtime.register_function(0x088ED378u, &recomp_unit_0058, "recomp_unit_0058");
    runtime.register_function(0x088ED3CCu, &recomp_unit_0058, "recomp_unit_0058");
    runtime.register_function(0x088ED3DCu, &recomp_unit_0058, "recomp_unit_0058");
    runtime.register_function(0x088ED3ECu, &recomp_unit_0058, "recomp_unit_0058");
    runtime.register_function(0x088ED3FCu, &recomp_unit_0058, "recomp_unit_0058");
    runtime.register_function(0x088ED42Cu, &recomp_unit_0058, "recomp_unit_0058");
    runtime.register_function(0x088ED440u, &recomp_unit_0058, "recomp_unit_0058");
    runtime.register_function(0x088ED45Cu, &recomp_unit_0058, "recomp_unit_0058");
    runtime.register_function(0x088ED468u, &recomp_unit_0058, "recomp_unit_0058");
    runtime.register_function(0x088ED494u, &recomp_unit_0058, "recomp_unit_0058");
    runtime.register_function(0x088ED4B0u, &recomp_unit_0058, "recomp_unit_0058");
    runtime.register_function(0x088ED4BCu, &recomp_unit_0058, "recomp_unit_0058");
    runtime.register_function(0x088ED4D8u, &recomp_unit_0058, "recomp_unit_0058");
    runtime.register_function(0x088ED4F0u, &recomp_unit_0058, "recomp_unit_0058");
    runtime.register_function(0x088ED504u, &recomp_unit_0058, "recomp_unit_0058");
    runtime.register_function(0x088ED50Cu, &recomp_unit_0058, "recomp_unit_0058");
    runtime.register_function(0x088ED524u, &recomp_unit_0058, "recomp_unit_0058");
    runtime.register_function(0x088ED53Cu, &recomp_unit_0058, "recomp_unit_0058");
    runtime.register_function(0x088ED558u, &recomp_unit_0058, "recomp_unit_0058");
    runtime.register_function(0x088ED57Cu, &recomp_unit_0058, "recomp_unit_0058");
    runtime.register_function(0x088ED584u, &recomp_unit_0058, "recomp_unit_0058");
    runtime.register_function(0x088ED5A0u, &recomp_unit_0058, "recomp_unit_0058");
    runtime.register_function(0x088ED5B8u, &recomp_unit_0058, "recomp_unit_0058");
    runtime.register_function(0x088ED5D0u, &recomp_unit_0058, "recomp_unit_0058");
    runtime.register_function(0x088ED5E0u, &recomp_unit_0058, "recomp_unit_0058");
    runtime.register_function(0x088ED5F0u, &recomp_unit_0058, "recomp_unit_0058");
    runtime.register_function(0x088ED64Cu, &recomp_unit_0058, "recomp_unit_0058");
    runtime.register_function(0x088ED65Cu, &recomp_unit_0058, "recomp_unit_0058");
    runtime.register_function(0x088ED66Cu, &recomp_unit_0058, "recomp_unit_0058");
    runtime.register_function(0x088ED67Cu, &recomp_unit_0058, "recomp_unit_0058");
    runtime.register_function(0x088ED6A4u, &recomp_unit_0058, "recomp_unit_0058");
    runtime.register_function(0x088ED6C0u, &recomp_unit_0058, "recomp_unit_0058");
    runtime.register_function(0x088ED6D0u, &recomp_unit_0058, "recomp_unit_0058");
    runtime.register_function(0x088ED6DCu, &recomp_unit_0058, "recomp_unit_0058");
    runtime.register_function(0x088ED710u, &recomp_unit_0058, "recomp_unit_0058");
    runtime.register_function(0x088ED72Cu, &recomp_unit_0058, "recomp_unit_0058");
    runtime.register_function(0x088ED744u, &recomp_unit_0058, "recomp_unit_0058");
    runtime.register_function(0x088ED758u, &recomp_unit_0058, "recomp_unit_0058");
    runtime.register_function(0x088ED76Cu, &recomp_unit_0058, "recomp_unit_0058");
    runtime.register_function(0x088ED784u, &recomp_unit_0058, "recomp_unit_0058");
    runtime.register_function(0x088ED798u, &recomp_unit_0058, "recomp_unit_0058");
    runtime.register_function(0x088ED7A0u, &recomp_unit_0058, "recomp_unit_0058");
    runtime.register_function(0x088ED7B8u, &recomp_unit_0058, "recomp_unit_0058");
    runtime.register_function(0x088ED7D0u, &recomp_unit_0058, "recomp_unit_0058");
    runtime.register_function(0x088ED7E8u, &recomp_unit_0058, "recomp_unit_0058");
    runtime.register_function(0x088ED810u, &recomp_unit_0058, "recomp_unit_0058");
    runtime.register_function(0x088ED81Cu, &recomp_unit_0058, "recomp_unit_0058");
    runtime.register_function(0x088ED824u, &recomp_unit_0058, "recomp_unit_0058");
    runtime.register_function(0x088ED82Cu, &recomp_unit_0058, "recomp_unit_0058");
    runtime.register_function(0x088ED83Cu, &recomp_unit_0058, "recomp_unit_0058");
    runtime.register_function(0x088ED854u, &recomp_unit_0058, "recomp_unit_0058");
    runtime.register_function(0x088ED86Cu, &recomp_unit_0058, "recomp_unit_0058");
    runtime.register_function(0x088ED87Cu, &recomp_unit_0058, "recomp_unit_0058");
    runtime.register_function(0x088ED88Cu, &recomp_unit_0058, "recomp_unit_0058");
    runtime.register_function(0x088ED8E0u, &recomp_unit_0058, "recomp_unit_0058");
    runtime.register_function(0x088ED8F0u, &recomp_unit_0058, "recomp_unit_0058");
    runtime.register_function(0x088ED900u, &recomp_unit_0058, "recomp_unit_0058");
    runtime.register_function(0x088ED910u, &recomp_unit_0058, "recomp_unit_0058");
    runtime.register_function(0x088ED934u, &recomp_unit_0058, "recomp_unit_0058");
    runtime.register_function(0x088ED950u, &recomp_unit_0058, "recomp_unit_0058");
    runtime.register_function(0x088ED960u, &recomp_unit_0058, "recomp_unit_0058");
    runtime.register_function(0x088ED970u, &recomp_unit_0058, "recomp_unit_0058");
    runtime.register_function(0x088ED998u, &recomp_unit_0058, "recomp_unit_0058");
    runtime.register_function(0x088ED9B0u, &recomp_unit_0058, "recomp_unit_0058");
    runtime.register_function(0x088ED9C8u, &recomp_unit_0058, "recomp_unit_0058");
    runtime.register_function(0x088ED9D0u, &recomp_unit_0058, "recomp_unit_0058");
    runtime.register_function(0x088ED9DCu, &recomp_unit_0058, "recomp_unit_0058");
    runtime.register_function(0x088ED9E8u, &recomp_unit_0058, "recomp_unit_0058");
    runtime.register_function(0x088ED9F0u, &recomp_unit_0058, "recomp_unit_0058");
    runtime.register_function(0x088EDA08u, &recomp_unit_0058, "recomp_unit_0058");
    runtime.register_function(0x088EDA20u, &recomp_unit_0058, "recomp_unit_0058");
    runtime.register_function(0x088EDA34u, &recomp_unit_0058, "recomp_unit_0058");
    runtime.register_function(0x088EDA3Cu, &recomp_unit_0058, "recomp_unit_0058");
    runtime.register_function(0x088EDA54u, &recomp_unit_0058, "recomp_unit_0058");
    runtime.register_function(0x088EDA68u, &recomp_unit_0058, "recomp_unit_0058");
    runtime.register_function(0x088EDA7Cu, &recomp_unit_0058, "recomp_unit_0058");
    runtime.register_function(0x088EDA98u, &recomp_unit_0058, "recomp_unit_0058");
    runtime.register_function(0x088EDAB0u, &recomp_unit_0058, "recomp_unit_0058");
    runtime.register_function(0x088EDAC0u, &recomp_unit_0058, "recomp_unit_0058");
    runtime.register_function(0x088EDAD0u, &recomp_unit_0058, "recomp_unit_0058");
    runtime.register_function(0x088EDB24u, &recomp_unit_0058, "recomp_unit_0058");
    runtime.register_function(0x088EDB34u, &recomp_unit_0058, "recomp_unit_0058");
    runtime.register_function(0x088EDB44u, &recomp_unit_0058, "recomp_unit_0058");
    runtime.register_function(0x088EDB54u, &recomp_unit_0058, "recomp_unit_0058");
    runtime.register_function(0x088EDB6Cu, &recomp_unit_0058, "recomp_unit_0058");
    runtime.register_function(0x088EDB80u, &recomp_unit_0058, "recomp_unit_0058");
    runtime.register_function(0x088EDB94u, &recomp_unit_0058, "recomp_unit_0058");
    runtime.register_function(0x088EDBACu, &recomp_unit_0058, "recomp_unit_0058");
    runtime.register_function(0x088EDBC0u, &recomp_unit_0058, "recomp_unit_0058");
    runtime.register_function(0x088EDBC8u, &recomp_unit_0058, "recomp_unit_0058");
    runtime.register_function(0x088EDBE0u, &recomp_unit_0058, "recomp_unit_0058");
    runtime.register_function(0x088EDBF8u, &recomp_unit_0058, "recomp_unit_0058");
    runtime.register_function(0x088EDC18u, &recomp_unit_0058, "recomp_unit_0058");
    runtime.register_function(0x088EDC3Cu, &recomp_unit_0058, "recomp_unit_0058");
    runtime.register_function(0x088EDC44u, &recomp_unit_0058, "recomp_unit_0058");
    runtime.register_function(0x088EDC50u, &recomp_unit_0058, "recomp_unit_0058");
    runtime.register_function(0x088EDC58u, &recomp_unit_0058, "recomp_unit_0058");
    runtime.register_function(0x088EDC68u, &recomp_unit_0058, "recomp_unit_0058");
    runtime.register_function(0x088EDC74u, &recomp_unit_0058, "recomp_unit_0058");
    runtime.register_function(0x088EDC7Cu, &recomp_unit_0058, "recomp_unit_0058");
    runtime.register_function(0x088EDC84u, &recomp_unit_0058, "recomp_unit_0058");
    runtime.register_function(0x088EDC94u, &recomp_unit_0058, "recomp_unit_0058");
    runtime.register_function(0x088EDCACu, &recomp_unit_0058, "recomp_unit_0058");
    runtime.register_function(0x088EDCC4u, &recomp_unit_0058, "recomp_unit_0058");
    runtime.register_function(0x088EDCD4u, &recomp_unit_0058, "recomp_unit_0058");
    runtime.register_function(0x088EDCE4u, &recomp_unit_0058, "recomp_unit_0058");
    runtime.register_function(0x088EDD40u, &recomp_unit_0058, "recomp_unit_0058");
    runtime.register_function(0x088EDD50u, &recomp_unit_0058, "recomp_unit_0058");
    runtime.register_function(0x088EDD60u, &recomp_unit_0058, "recomp_unit_0058");
    runtime.register_function(0x088EDD70u, &recomp_unit_0058, "recomp_unit_0058");
    runtime.register_function(0x088EDD98u, &recomp_unit_0058, "recomp_unit_0058");
    runtime.register_function(0x088EDDB4u, &recomp_unit_0058, "recomp_unit_0058");
    runtime.register_function(0x088EDDC4u, &recomp_unit_0058, "recomp_unit_0058");
    runtime.register_function(0x088EDDD0u, &recomp_unit_0058, "recomp_unit_0058");
    runtime.register_function(0x088EDDE4u, &recomp_unit_0058, "recomp_unit_0058");
    runtime.register_function(0x088EDDF0u, &recomp_unit_0058, "recomp_unit_0058");
    runtime.register_function(0x088EDE1Cu, &recomp_unit_0058, "recomp_unit_0058");
    runtime.register_function(0x088EDE38u, &recomp_unit_0058, "recomp_unit_0058");
    runtime.register_function(0x088EDE50u, &recomp_unit_0058, "recomp_unit_0058");
    runtime.register_function(0x088EDE64u, &recomp_unit_0058, "recomp_unit_0058");
    runtime.register_function(0x088EDE6Cu, &recomp_unit_0058, "recomp_unit_0058");
    runtime.register_function(0x088EDE84u, &recomp_unit_0058, "recomp_unit_0058");
    runtime.register_function(0x088EDE9Cu, &recomp_unit_0058, "recomp_unit_0058");
    runtime.register_function(0x088EDEB4u, &recomp_unit_0058, "recomp_unit_0058");
    runtime.register_function(0x088EDEDCu, &recomp_unit_0058, "recomp_unit_0058");
    runtime.register_function(0x088EDEF4u, &recomp_unit_0058, "recomp_unit_0058");
    runtime.register_function(0x088EDF0Cu, &recomp_unit_0058, "recomp_unit_0058");
    runtime.register_function(0x088EDF1Cu, &recomp_unit_0058, "recomp_unit_0058");
    runtime.register_function(0x088EDF2Cu, &recomp_unit_0058, "recomp_unit_0058");
    runtime.register_function(0x088EDF80u, &recomp_unit_0058, "recomp_unit_0058");
    runtime.register_function(0x088EDF90u, &recomp_unit_0058, "recomp_unit_0058");
    runtime.register_function(0x088EDFA0u, &recomp_unit_0058, "recomp_unit_0058");
    runtime.register_function(0x088EDFB0u, &recomp_unit_0058, "recomp_unit_0058");
    runtime.register_function(0x088EDFD4u, &recomp_unit_0058, "recomp_unit_0058");
    runtime.register_function(0x088EDFF0u, &recomp_unit_0058, "recomp_unit_0058");
    runtime.register_function(0x088EE000u, &recomp_unit_0058, "recomp_unit_0058");
    runtime.register_function(0x088EE010u, &recomp_unit_0058, "recomp_unit_0058");
    runtime.register_function(0x088EE020u, &recomp_unit_0058, "recomp_unit_0058");
    runtime.register_function(0x088EE030u, &recomp_unit_0058, "recomp_unit_0058");
    runtime.register_function(0x088EE040u, &recomp_unit_0058, "recomp_unit_0058");
    runtime.register_function(0x088EE050u, &recomp_unit_0058, "recomp_unit_0058");
    runtime.register_function(0x088EE078u, &recomp_unit_0058, "recomp_unit_0058");
    runtime.register_function(0x088EE090u, &recomp_unit_0058, "recomp_unit_0058");
    runtime.register_function(0x088EE0A8u, &recomp_unit_0058, "recomp_unit_0058");
    runtime.register_function(0x088EE0BCu, &recomp_unit_0058, "recomp_unit_0058");
    runtime.register_function(0x088EE0C4u, &recomp_unit_0058, "recomp_unit_0058");
    runtime.register_function(0x088EE0DCu, &recomp_unit_0058, "recomp_unit_0058");
    runtime.register_function(0x088EE0F0u, &recomp_unit_0058, "recomp_unit_0058");
    runtime.register_function(0x088EE104u, &recomp_unit_0058, "recomp_unit_0058");
    runtime.register_function(0x088EE120u, &recomp_unit_0058, "recomp_unit_0058");
    runtime.register_function(0x088EE138u, &recomp_unit_0058, "recomp_unit_0058");
    runtime.register_function(0x088EE148u, &recomp_unit_0058, "recomp_unit_0058");
    runtime.register_function(0x088EE158u, &recomp_unit_0058, "recomp_unit_0058");
    runtime.register_function(0x088EE1ACu, &recomp_unit_0058, "recomp_unit_0058");
    runtime.register_function(0x088EE1BCu, &recomp_unit_0058, "recomp_unit_0058");
    runtime.register_function(0x088EE1CCu, &recomp_unit_0058, "recomp_unit_0058");
    runtime.register_function(0x088EE1DCu, &recomp_unit_0058, "recomp_unit_0058");
    runtime.register_function(0x088EE1F4u, &recomp_unit_0058, "recomp_unit_0058");
    runtime.register_function(0x088EE208u, &recomp_unit_0058, "recomp_unit_0058");
    runtime.register_function(0x088EE21Cu, &recomp_unit_0058, "recomp_unit_0058");
    runtime.register_function(0x088EE234u, &recomp_unit_0058, "recomp_unit_0058");
    runtime.register_function(0x088EE248u, &recomp_unit_0058, "recomp_unit_0058");
    runtime.register_function(0x088EE250u, &recomp_unit_0058, "recomp_unit_0058");
    runtime.register_function(0x088EE268u, &recomp_unit_0058, "recomp_unit_0058");
    runtime.register_function(0x088EE280u, &recomp_unit_0058, "recomp_unit_0058");
    runtime.register_function(0x088EE2C8u, &recomp_unit_0058, "recomp_unit_0058");
    runtime.register_function(0x088EE2F0u, &recomp_unit_0058, "recomp_unit_0058");
    runtime.register_function(0x088EE2FCu, &recomp_unit_0058, "recomp_unit_0058");
    runtime.register_function(0x088EE304u, &recomp_unit_0058, "recomp_unit_0058");
    runtime.register_function(0x088EE30Cu, &recomp_unit_0058, "recomp_unit_0058");
    runtime.register_function(0x088EE31Cu, &recomp_unit_0058, "recomp_unit_0058");
    runtime.register_function(0x088EE32Cu, &recomp_unit_0058, "recomp_unit_0058");
    runtime.register_function(0x088EE338u, &recomp_unit_0058, "recomp_unit_0058");
    runtime.register_function(0x088EE340u, &recomp_unit_0058, "recomp_unit_0058");
    runtime.register_function(0x088EE348u, &recomp_unit_0058, "recomp_unit_0058");
    runtime.register_function(0x088EE358u, &recomp_unit_0058, "recomp_unit_0058");
    runtime.register_function(0x088EE368u, &recomp_unit_0058, "recomp_unit_0058");
    runtime.register_function(0x088EE374u, &recomp_unit_0058, "recomp_unit_0058");
    runtime.register_function(0x088EE37Cu, &recomp_unit_0058, "recomp_unit_0058");
    runtime.register_function(0x088EE384u, &recomp_unit_0058, "recomp_unit_0058");
    runtime.register_function(0x088EE394u, &recomp_unit_0058, "recomp_unit_0058");
    runtime.register_function(0x088EE3A4u, &recomp_unit_0058, "recomp_unit_0058");
    runtime.register_function(0x088EE3B0u, &recomp_unit_0058, "recomp_unit_0058");
    runtime.register_function(0x088EE3B8u, &recomp_unit_0058, "recomp_unit_0058");
    runtime.register_function(0x088EE3C0u, &recomp_unit_0058, "recomp_unit_0058");
    runtime.register_function(0x088EE3D0u, &recomp_unit_0058, "recomp_unit_0058");
    runtime.register_function(0x088EE3E0u, &recomp_unit_0058, "recomp_unit_0058");
    runtime.register_function(0x088EE3ECu, &recomp_unit_0058, "recomp_unit_0058");
    runtime.register_function(0x088EE3F4u, &recomp_unit_0058, "recomp_unit_0058");
    runtime.register_function(0x088EE3FCu, &recomp_unit_0058, "recomp_unit_0058");
    runtime.register_function(0x088EE40Cu, &recomp_unit_0058, "recomp_unit_0058");
    runtime.register_function(0x088EE41Cu, &recomp_unit_0058, "recomp_unit_0058");
    runtime.register_function(0x088EE428u, &recomp_unit_0058, "recomp_unit_0058");
    runtime.register_function(0x088EE430u, &recomp_unit_0058, "recomp_unit_0058");
    runtime.register_function(0x088EE438u, &recomp_unit_0058, "recomp_unit_0058");
    runtime.register_function(0x088EE448u, &recomp_unit_0058, "recomp_unit_0058");
    runtime.register_function(0x088EE458u, &recomp_unit_0058, "recomp_unit_0058");
    runtime.register_function(0x088EE464u, &recomp_unit_0058, "recomp_unit_0058");
    runtime.register_function(0x088EE46Cu, &recomp_unit_0058, "recomp_unit_0058");
    runtime.register_function(0x088EE474u, &recomp_unit_0058, "recomp_unit_0058");
    runtime.register_function(0x088EE484u, &recomp_unit_0058, "recomp_unit_0058");
    runtime.register_function(0x088EE494u, &recomp_unit_0058, "recomp_unit_0058");
    runtime.register_function(0x088EE4A0u, &recomp_unit_0058, "recomp_unit_0058");
    runtime.register_function(0x088EE4A8u, &recomp_unit_0058, "recomp_unit_0058");
    runtime.register_function(0x088EE4B0u, &recomp_unit_0058, "recomp_unit_0058");
    runtime.register_function(0x088EE4C0u, &recomp_unit_0058, "recomp_unit_0058");
    runtime.register_function(0x088EE4D0u, &recomp_unit_0058, "recomp_unit_0058");
    runtime.register_function(0x088EE4DCu, &recomp_unit_0058, "recomp_unit_0058");
    runtime.register_function(0x088EE4E4u, &recomp_unit_0058, "recomp_unit_0058");
    runtime.register_function(0x088EE4ECu, &recomp_unit_0058, "recomp_unit_0058");
    runtime.register_function(0x088EE4FCu, &recomp_unit_0058, "recomp_unit_0058");
    runtime.register_function(0x088EE50Cu, &recomp_unit_0058, "recomp_unit_0058");
    runtime.register_function(0x088EE518u, &recomp_unit_0058, "recomp_unit_0058");
    runtime.register_function(0x088EE520u, &recomp_unit_0058, "recomp_unit_0058");
    runtime.register_function(0x088EE528u, &recomp_unit_0058, "recomp_unit_0058");
    runtime.register_function(0x088EE538u, &recomp_unit_0058, "recomp_unit_0058");
    runtime.register_function(0x088EE548u, &recomp_unit_0058, "recomp_unit_0058");
    runtime.register_function(0x088EE554u, &recomp_unit_0058, "recomp_unit_0058");
    runtime.register_function(0x088EE55Cu, &recomp_unit_0058, "recomp_unit_0058");
    runtime.register_function(0x088EE564u, &recomp_unit_0058, "recomp_unit_0058");
    runtime.register_function(0x088EE574u, &recomp_unit_0058, "recomp_unit_0058");
    runtime.register_function(0x088EE584u, &recomp_unit_0058, "recomp_unit_0058");
    runtime.register_function(0x088EE590u, &recomp_unit_0058, "recomp_unit_0058");
    runtime.register_function(0x088EE598u, &recomp_unit_0058, "recomp_unit_0058");
    runtime.register_function(0x088EE5A0u, &recomp_unit_0058, "recomp_unit_0058");
    runtime.register_function(0x088EE5B0u, &recomp_unit_0058, "recomp_unit_0058");
    runtime.register_function(0x088EE5CCu, &recomp_unit_0058, "recomp_unit_0058");
    runtime.register_function(0x088EE5E4u, &recomp_unit_0058, "recomp_unit_0058");
    runtime.register_function(0x088EE5FCu, &recomp_unit_0058, "recomp_unit_0058");
    runtime.register_function(0x088EE60Cu, &recomp_unit_0058, "recomp_unit_0058");
    runtime.register_function(0x088EE61Cu, &recomp_unit_0058, "recomp_unit_0058");
    runtime.register_function(0x088EE670u, &recomp_unit_0058, "recomp_unit_0058");
    runtime.register_function(0x088EE680u, &recomp_unit_0058, "recomp_unit_0058");
    runtime.register_function(0x088EE690u, &recomp_unit_0058, "recomp_unit_0058");
    runtime.register_function(0x088EE6A0u, &recomp_unit_0058, "recomp_unit_0058");
    runtime.register_function(0x088EE6C4u, &recomp_unit_0058, "recomp_unit_0058");
    runtime.register_function(0x088EE6E0u, &recomp_unit_0058, "recomp_unit_0058");
    runtime.register_function(0x088EE708u, &recomp_unit_0058, "recomp_unit_0058");
    runtime.register_function(0x088EE720u, &recomp_unit_0058, "recomp_unit_0058");
    runtime.register_function(0x088EE738u, &recomp_unit_0058, "recomp_unit_0058");
    runtime.register_function(0x088EE740u, &recomp_unit_0058, "recomp_unit_0058");
    runtime.register_function(0x088EE74Cu, &recomp_unit_0058, "recomp_unit_0058");
    runtime.register_function(0x088EE758u, &recomp_unit_0058, "recomp_unit_0058");
    runtime.register_function(0x088EE760u, &recomp_unit_0058, "recomp_unit_0058");
    runtime.register_function(0x088EE778u, &recomp_unit_0058, "recomp_unit_0058");
    runtime.register_function(0x088EE790u, &recomp_unit_0058, "recomp_unit_0058");
    runtime.register_function(0x088EE7A4u, &recomp_unit_0058, "recomp_unit_0058");
    runtime.register_function(0x088EE7ACu, &recomp_unit_0058, "recomp_unit_0058");
    runtime.register_function(0x088EE7C4u, &recomp_unit_0058, "recomp_unit_0058");
    runtime.register_function(0x088EE7D8u, &recomp_unit_0058, "recomp_unit_0058");
    runtime.register_function(0x088EE7ECu, &recomp_unit_0058, "recomp_unit_0058");
    runtime.register_function(0x088EE808u, &recomp_unit_0058, "recomp_unit_0058");
    runtime.register_function(0x088EE820u, &recomp_unit_0058, "recomp_unit_0058");
    runtime.register_function(0x088EE830u, &recomp_unit_0058, "recomp_unit_0058");
    runtime.register_function(0x088EE840u, &recomp_unit_0058, "recomp_unit_0058");
    runtime.register_function(0x088EE894u, &recomp_unit_0058, "recomp_unit_0058");
    runtime.register_function(0x088EE8A4u, &recomp_unit_0058, "recomp_unit_0058");
    runtime.register_function(0x088EE8B4u, &recomp_unit_0058, "recomp_unit_0058");
    runtime.register_function(0x088EE8C4u, &recomp_unit_0058, "recomp_unit_0058");
    runtime.register_function(0x088EE8DCu, &recomp_unit_0058, "recomp_unit_0058");
    runtime.register_function(0x088EE8F0u, &recomp_unit_0058, "recomp_unit_0058");
    runtime.register_function(0x088EE904u, &recomp_unit_0058, "recomp_unit_0058");
    runtime.register_function(0x088EE91Cu, &recomp_unit_0058, "recomp_unit_0058");
    runtime.register_function(0x088EE924u, &recomp_unit_0058, "recomp_unit_0058");
    runtime.register_function(0x088EE930u, &recomp_unit_0058, "recomp_unit_0058");
    runtime.register_function(0x088EE93Cu, &recomp_unit_0058, "recomp_unit_0058");
    runtime.register_function(0x088EE944u, &recomp_unit_0058, "recomp_unit_0058");
    runtime.register_function(0x088EE95Cu, &recomp_unit_0058, "recomp_unit_0058");
    runtime.register_function(0x088EE974u, &recomp_unit_0058, "recomp_unit_0058");
    runtime.register_function(0x088EE988u, &recomp_unit_0058, "recomp_unit_0058");
    runtime.register_function(0x088EE990u, &recomp_unit_0058, "recomp_unit_0058");
    runtime.register_function(0x088EE9A8u, &recomp_unit_0058, "recomp_unit_0058");
    runtime.register_function(0x088EE9C0u, &recomp_unit_0058, "recomp_unit_0058");
    runtime.register_function(0x088EE9DCu, &recomp_unit_0058, "recomp_unit_0058");
    runtime.register_function(0x088EEA00u, &recomp_unit_0058, "recomp_unit_0058");
    runtime.register_function(0x088EEA08u, &recomp_unit_0058, "recomp_unit_0058");
    runtime.register_function(0x088EEA24u, &recomp_unit_0058, "recomp_unit_0058");
    runtime.register_function(0x088EEA3Cu, &recomp_unit_0058, "recomp_unit_0058");
    runtime.register_function(0x088EEA54u, &recomp_unit_0058, "recomp_unit_0058");
    runtime.register_function(0x088EEA64u, &recomp_unit_0058, "recomp_unit_0058");
    runtime.register_function(0x088EEA74u, &recomp_unit_0058, "recomp_unit_0058");
    runtime.register_function(0x088EEAD0u, &recomp_unit_0058, "recomp_unit_0058");
    runtime.register_function(0x088EEAE0u, &recomp_unit_0058, "recomp_unit_0058");
    runtime.register_function(0x088EEAF0u, &recomp_unit_0058, "recomp_unit_0058");
    runtime.register_function(0x088EEB00u, &recomp_unit_0058, "recomp_unit_0058");
    runtime.register_function(0x088EEB28u, &recomp_unit_0058, "recomp_unit_0058");
    runtime.register_function(0x088EEB44u, &recomp_unit_0058, "recomp_unit_0058");
    runtime.register_function(0x088EEB54u, &recomp_unit_0058, "recomp_unit_0058");
    runtime.register_function(0x088EEB60u, &recomp_unit_0058, "recomp_unit_0058");
    runtime.register_function(0x088EEB94u, &recomp_unit_0058, "recomp_unit_0058");
    runtime.register_function(0x088EEBB0u, &recomp_unit_0058, "recomp_unit_0058");
    runtime.register_function(0x088EEBC8u, &recomp_unit_0058, "recomp_unit_0058");
    runtime.register_function(0x088EEBDCu, &recomp_unit_0058, "recomp_unit_0058");
    runtime.register_function(0x088EEBF0u, &recomp_unit_0058, "recomp_unit_0058");
    runtime.register_function(0x088EEC08u, &recomp_unit_0058, "recomp_unit_0058");
    runtime.register_function(0x088EEC10u, &recomp_unit_0058, "recomp_unit_0058");
    runtime.register_function(0x088EEC1Cu, &recomp_unit_0058, "recomp_unit_0058");
    runtime.register_function(0x088EEC28u, &recomp_unit_0058, "recomp_unit_0058");
    runtime.register_function(0x088EEC30u, &recomp_unit_0058, "recomp_unit_0058");
    runtime.register_function(0x088EEC48u, &recomp_unit_0058, "recomp_unit_0058");
    runtime.register_function(0x088EEC60u, &recomp_unit_0058, "recomp_unit_0058");
    runtime.register_function(0x088EEC74u, &recomp_unit_0058, "recomp_unit_0058");
    runtime.register_function(0x088EEC7Cu, &recomp_unit_0058, "recomp_unit_0058");
    runtime.register_function(0x088EEC94u, &recomp_unit_0058, "recomp_unit_0058");
    runtime.register_function(0x088EECACu, &recomp_unit_0058, "recomp_unit_0058");
    runtime.register_function(0x088EECB4u, &recomp_unit_0058, "recomp_unit_0058");
    runtime.register_function(0x088EECD0u, &recomp_unit_0058, "recomp_unit_0058");
    runtime.register_function(0x088EECE8u, &recomp_unit_0058, "recomp_unit_0058");
    runtime.register_function(0x088EED00u, &recomp_unit_0058, "recomp_unit_0058");
    runtime.register_function(0x088EED10u, &recomp_unit_0058, "recomp_unit_0058");
    runtime.register_function(0x088EED20u, &recomp_unit_0058, "recomp_unit_0058");
    runtime.register_function(0x088EED7Cu, &recomp_unit_0058, "recomp_unit_0058");
    runtime.register_function(0x088EED8Cu, &recomp_unit_0058, "recomp_unit_0058");
    runtime.register_function(0x088EED9Cu, &recomp_unit_0058, "recomp_unit_0058");
    runtime.register_function(0x088EEDACu, &recomp_unit_0058, "recomp_unit_0058");
    runtime.register_function(0x088EEDD8u, &recomp_unit_0058, "recomp_unit_0058");
    runtime.register_function(0x088EEDECu, &recomp_unit_0058, "recomp_unit_0058");
    runtime.register_function(0x088EEE08u, &recomp_unit_0058, "recomp_unit_0058");
    runtime.register_function(0x088EEE18u, &recomp_unit_0058, "recomp_unit_0058");
    runtime.register_function(0x088EEE30u, &recomp_unit_0058, "recomp_unit_0058");
    runtime.register_function(0x088EEE44u, &recomp_unit_0058, "recomp_unit_0058");
    runtime.register_function(0x088EEE58u, &recomp_unit_0058, "recomp_unit_0058");
    runtime.register_function(0x088EEE6Cu, &recomp_unit_0058, "recomp_unit_0058");
    runtime.register_function(0x088EEE78u, &recomp_unit_0058, "recomp_unit_0058");
    runtime.register_function(0x088EEEACu, &recomp_unit_0058, "recomp_unit_0058");
    runtime.register_function(0x088EEEC8u, &recomp_unit_0058, "recomp_unit_0058");
    runtime.register_function(0x088EEEE0u, &recomp_unit_0058, "recomp_unit_0058");
    runtime.register_function(0x088EEEF4u, &recomp_unit_0058, "recomp_unit_0058");
    runtime.register_function(0x088EEF08u, &recomp_unit_0058, "recomp_unit_0058");
    runtime.register_function(0x088EEF20u, &recomp_unit_0058, "recomp_unit_0058");
    runtime.register_function(0x088EEF34u, &recomp_unit_0058, "recomp_unit_0058");
    runtime.register_function(0x088EEF3Cu, &recomp_unit_0058, "recomp_unit_0058");
    runtime.register_function(0x088EEF54u, &recomp_unit_0058, "recomp_unit_0058");
    runtime.register_function(0x088EEF6Cu, &recomp_unit_0058, "recomp_unit_0058");
    runtime.register_function(0x088EEF84u, &recomp_unit_0058, "recomp_unit_0058");
    runtime.register_function(0x088EEFA8u, &recomp_unit_0058, "recomp_unit_0058");
    runtime.register_function(0x088EEFC0u, &recomp_unit_0058, "recomp_unit_0058");
    runtime.register_function(0x088EEFD8u, &recomp_unit_0058, "recomp_unit_0058");
    runtime.register_function(0x088EEFE8u, &recomp_unit_0058, "recomp_unit_0058");
    runtime.register_function(0x088EEFF8u, &recomp_unit_0058, "recomp_unit_0058");
    runtime.register_function(0x088EF04Cu, &recomp_unit_0058, "recomp_unit_0058");
    runtime.register_function(0x088EF05Cu, &recomp_unit_0058, "recomp_unit_0058");
    runtime.register_function(0x088EF06Cu, &recomp_unit_0058, "recomp_unit_0058");
    runtime.register_function(0x088EF07Cu, &recomp_unit_0058, "recomp_unit_0058");
    runtime.register_function(0x088EF0A0u, &recomp_unit_0058, "recomp_unit_0058");
    runtime.register_function(0x088EF0BCu, &recomp_unit_0058, "recomp_unit_0058");
    runtime.register_function(0x088EF0E4u, &recomp_unit_0058, "recomp_unit_0058");
    runtime.register_function(0x088EF0FCu, &recomp_unit_0058, "recomp_unit_0058");
    runtime.register_function(0x088EF114u, &recomp_unit_0058, "recomp_unit_0058");
    runtime.register_function(0x088EF128u, &recomp_unit_0058, "recomp_unit_0058");
    runtime.register_function(0x088EF13Cu, &recomp_unit_0058, "recomp_unit_0058");
    runtime.register_function(0x088EF154u, &recomp_unit_0058, "recomp_unit_0058");
    runtime.register_function(0x088EF168u, &recomp_unit_0058, "recomp_unit_0058");
    runtime.register_function(0x088EF170u, &recomp_unit_0058, "recomp_unit_0058");
    runtime.register_function(0x088EF188u, &recomp_unit_0058, "recomp_unit_0058");
    runtime.register_function(0x088EF19Cu, &recomp_unit_0058, "recomp_unit_0058");
    runtime.register_function(0x088EF1B0u, &recomp_unit_0058, "recomp_unit_0058");
    runtime.register_function(0x088EF1CCu, &recomp_unit_0058, "recomp_unit_0058");
    runtime.register_function(0x088EF1E4u, &recomp_unit_0058, "recomp_unit_0058");
    runtime.register_function(0x088EF1F4u, &recomp_unit_0058, "recomp_unit_0058");
    runtime.register_function(0x088EF204u, &recomp_unit_0058, "recomp_unit_0058");
    runtime.register_function(0x088EF258u, &recomp_unit_0058, "recomp_unit_0058");
    runtime.register_function(0x088EF268u, &recomp_unit_0058, "recomp_unit_0058");
    runtime.register_function(0x088EF278u, &recomp_unit_0058, "recomp_unit_0058");
    runtime.register_function(0x088EF288u, &recomp_unit_0058, "recomp_unit_0058");
    runtime.register_function(0x088EF2A0u, &recomp_unit_0058, "recomp_unit_0058");
    runtime.register_function(0x088EF2B4u, &recomp_unit_0058, "recomp_unit_0058");
    runtime.register_function(0x088EF2C8u, &recomp_unit_0058, "recomp_unit_0058");
    runtime.register_function(0x088EF2E0u, &recomp_unit_0058, "recomp_unit_0058");
    runtime.register_function(0x088EF2F4u, &recomp_unit_0058, "recomp_unit_0058");
    runtime.register_function(0x088EF2FCu, &recomp_unit_0058, "recomp_unit_0058");
    runtime.register_function(0x088EF314u, &recomp_unit_0058, "recomp_unit_0058");
    runtime.register_function(0x088EF32Cu, &recomp_unit_0058, "recomp_unit_0058");
    runtime.register_function(0x088EF34Cu, &recomp_unit_0058, "recomp_unit_0058");
    runtime.register_function(0x088EF370u, &recomp_unit_0058, "recomp_unit_0058");
    runtime.register_function(0x088EF37Cu, &recomp_unit_0058, "recomp_unit_0058");
    runtime.register_function(0x088EF398u, &recomp_unit_0058, "recomp_unit_0058");
    runtime.register_function(0x088EF3B0u, &recomp_unit_0058, "recomp_unit_0058");
    runtime.register_function(0x088EF3C8u, &recomp_unit_0058, "recomp_unit_0058");
    runtime.register_function(0x088EF3D8u, &recomp_unit_0058, "recomp_unit_0058");
    runtime.register_function(0x088EF3E8u, &recomp_unit_0058, "recomp_unit_0058");
    runtime.register_function(0x088EF444u, &recomp_unit_0058, "recomp_unit_0058");
    runtime.register_function(0x088EF454u, &recomp_unit_0058, "recomp_unit_0058");
    runtime.register_function(0x088EF464u, &recomp_unit_0058, "recomp_unit_0058");
    runtime.register_function(0x088EF474u, &recomp_unit_0058, "recomp_unit_0058");
    runtime.register_function(0x088EF484u, &recomp_unit_0058, "recomp_unit_0058");
    runtime.register_function(0x088EF4A8u, &recomp_unit_0058, "recomp_unit_0058");
    runtime.register_function(0x088EF4C4u, &recomp_unit_0058, "recomp_unit_0058");
    runtime.register_function(0x088EF4ECu, &recomp_unit_0058, "recomp_unit_0058");
    runtime.register_function(0x088EF510u, &recomp_unit_0058, "recomp_unit_0058");
    runtime.register_function(0x088EF528u, &recomp_unit_0058, "recomp_unit_0058");
    runtime.register_function(0x088EF538u, &recomp_unit_0058, "recomp_unit_0058");
    runtime.register_function(0x088EF548u, &recomp_unit_0058, "recomp_unit_0058");
    runtime.register_function(0x088EF558u, &recomp_unit_0058, "recomp_unit_0058");
    runtime.register_function(0x088EF568u, &recomp_unit_0058, "recomp_unit_0058");
    runtime.register_function(0x088EF578u, &recomp_unit_0058, "recomp_unit_0058");
    runtime.register_function(0x088EF588u, &recomp_unit_0058, "recomp_unit_0058");
    runtime.register_function(0x088EF5A0u, &recomp_unit_0058, "recomp_unit_0058");
    runtime.register_function(0x088EF5B4u, &recomp_unit_0058, "recomp_unit_0058");
    runtime.register_function(0x088EF5C8u, &recomp_unit_0058, "recomp_unit_0058");
    runtime.register_function(0x088EF5E0u, &recomp_unit_0058, "recomp_unit_0058");
    runtime.register_function(0x088EF5F4u, &recomp_unit_0058, "recomp_unit_0058");
    runtime.register_function(0x088EF5FCu, &recomp_unit_0058, "recomp_unit_0058");
    runtime.register_function(0x088EF614u, &recomp_unit_0058, "recomp_unit_0058");
    runtime.register_function(0x088EF62Cu, &recomp_unit_0058, "recomp_unit_0058");
    runtime.register_function(0x088EF644u, &recomp_unit_0058, "recomp_unit_0058");
    runtime.register_function(0x088EF66Cu, &recomp_unit_0058, "recomp_unit_0058");
    runtime.register_function(0x088EF684u, &recomp_unit_0058, "recomp_unit_0058");
    runtime.register_function(0x088EF69Cu, &recomp_unit_0058, "recomp_unit_0058");
    runtime.register_function(0x088EF6ACu, &recomp_unit_0058, "recomp_unit_0058");
    runtime.register_function(0x088EF6BCu, &recomp_unit_0058, "recomp_unit_0058");
    runtime.register_function(0x088EF718u, &recomp_unit_0058, "recomp_unit_0058");
    runtime.register_function(0x088EF728u, &recomp_unit_0058, "recomp_unit_0058");
    runtime.register_function(0x088EF738u, &recomp_unit_0058, "recomp_unit_0058");
    runtime.register_function(0x088EF748u, &recomp_unit_0058, "recomp_unit_0058");
    runtime.register_function(0x088EF770u, &recomp_unit_0058, "recomp_unit_0058");
    runtime.register_function(0x088EF78Cu, &recomp_unit_0058, "recomp_unit_0058");
    runtime.register_function(0x088EF79Cu, &recomp_unit_0058, "recomp_unit_0058");
    runtime.register_function(0x088EF7B0u, &recomp_unit_0058, "recomp_unit_0058");
    runtime.register_function(0x088EF7C4u, &recomp_unit_0058, "recomp_unit_0058");
    runtime.register_function(0x088EF7D0u, &recomp_unit_0058, "recomp_unit_0058");
    runtime.register_function(0x088EF7DCu, &recomp_unit_0058, "recomp_unit_0058");
    runtime.register_function(0x088EF7ECu, &recomp_unit_0058, "recomp_unit_0058");
    runtime.register_function(0x088EF804u, &recomp_unit_0058, "recomp_unit_0058");
    runtime.register_function(0x088EF814u, &recomp_unit_0058, "recomp_unit_0058");
    runtime.register_function(0x088EF824u, &recomp_unit_0058, "recomp_unit_0058");
    runtime.register_function(0x088EF834u, &recomp_unit_0058, "recomp_unit_0058");
    runtime.register_function(0x088EF844u, &recomp_unit_0058, "recomp_unit_0058");
    runtime.register_function(0x088EF854u, &recomp_unit_0058, "recomp_unit_0058");
    runtime.register_function(0x088EF864u, &recomp_unit_0058, "recomp_unit_0058");
    runtime.register_function(0x088EF874u, &recomp_unit_0058, "recomp_unit_0058");
    runtime.register_function(0x088EF89Cu, &recomp_unit_0058, "recomp_unit_0058");
    runtime.register_function(0x088EF8B8u, &recomp_unit_0058, "recomp_unit_0058");
    runtime.register_function(0x088EF8D0u, &recomp_unit_0058, "recomp_unit_0058");
    runtime.register_function(0x088EF8E4u, &recomp_unit_0058, "recomp_unit_0058");
    runtime.register_function(0x088EF8F8u, &recomp_unit_0058, "recomp_unit_0058");
    runtime.register_function(0x088EF910u, &recomp_unit_0058, "recomp_unit_0058");
    runtime.register_function(0x088EF924u, &recomp_unit_0058, "recomp_unit_0058");
    runtime.register_function(0x088EF92Cu, &recomp_unit_0058, "recomp_unit_0058");
    runtime.register_function(0x088EF944u, &recomp_unit_0058, "recomp_unit_0058");
    runtime.register_function(0x088EF95Cu, &recomp_unit_0058, "recomp_unit_0058");
    runtime.register_function(0x088EF974u, &recomp_unit_0058, "recomp_unit_0058");
    runtime.register_function(0x088EF998u, &recomp_unit_0058, "recomp_unit_0058");
    runtime.register_function(0x088EF9A0u, &recomp_unit_0058, "recomp_unit_0058");
    runtime.register_function(0x088EF9B8u, &recomp_unit_0058, "recomp_unit_0058");
    runtime.register_function(0x088EF9D0u, &recomp_unit_0058, "recomp_unit_0058");
    runtime.register_function(0x088EF9E0u, &recomp_unit_0058, "recomp_unit_0058");
    runtime.register_function(0x088EF9F0u, &recomp_unit_0058, "recomp_unit_0058");
    runtime.register_function(0x088EFA4Cu, &recomp_unit_0058, "recomp_unit_0058");
    runtime.register_function(0x088EFA5Cu, &recomp_unit_0058, "recomp_unit_0058");
    runtime.register_function(0x088EFA6Cu, &recomp_unit_0058, "recomp_unit_0058");
    runtime.register_function(0x088EFA7Cu, &recomp_unit_0058, "recomp_unit_0058");
    runtime.register_function(0x088EFAA4u, &recomp_unit_0058, "recomp_unit_0058");
    runtime.register_function(0x088EFAC0u, &recomp_unit_0058, "recomp_unit_0058");
    runtime.register_function(0x088EFAD0u, &recomp_unit_0058, "recomp_unit_0058");
    runtime.register_function(0x088EFADCu, &recomp_unit_0058, "recomp_unit_0058");
    runtime.register_function(0x088EFAF8u, &recomp_unit_0058, "recomp_unit_0058");
    runtime.register_function(0x088EFB24u, &recomp_unit_0058, "recomp_unit_0058");
    runtime.register_function(0x088EFB40u, &recomp_unit_0058, "recomp_unit_0058");
    runtime.register_function(0x088EFB58u, &recomp_unit_0058, "recomp_unit_0058");
    runtime.register_function(0x088EFB6Cu, &recomp_unit_0058, "recomp_unit_0058");
    runtime.register_function(0x088EFB74u, &recomp_unit_0058, "recomp_unit_0058");
    runtime.register_function(0x088EFB8Cu, &recomp_unit_0058, "recomp_unit_0058");
    runtime.register_function(0x088EFBA4u, &recomp_unit_0058, "recomp_unit_0058");
    runtime.register_function(0x088EFBC8u, &recomp_unit_0058, "recomp_unit_0058");
    runtime.register_function(0x088EFBECu, &recomp_unit_0058, "recomp_unit_0058");
    runtime.register_function(0x088EFBF4u, &recomp_unit_0058, "recomp_unit_0058");
    runtime.register_function(0x088EFC0Cu, &recomp_unit_0058, "recomp_unit_0058");
    runtime.register_function(0x088EFC18u, &recomp_unit_0058, "recomp_unit_0058");
    runtime.register_function(0x088EFC34u, &recomp_unit_0058, "recomp_unit_0058");
    runtime.register_function(0x088EFC4Cu, &recomp_unit_0058, "recomp_unit_0058");
    runtime.register_function(0x088EFC64u, &recomp_unit_0058, "recomp_unit_0058");
    runtime.register_function(0x088EFC74u, &recomp_unit_0058, "recomp_unit_0058");
    runtime.register_function(0x088EFC84u, &recomp_unit_0058, "recomp_unit_0058");
    runtime.register_function(0x088EFCE0u, &recomp_unit_0058, "recomp_unit_0058");
    runtime.register_function(0x088EFCF0u, &recomp_unit_0058, "recomp_unit_0058");
    runtime.register_function(0x088EFD00u, &recomp_unit_0058, "recomp_unit_0058");
    runtime.register_function(0x088EFD10u, &recomp_unit_0058, "recomp_unit_0058");
    runtime.register_function(0x088EFD38u, &recomp_unit_0058, "recomp_unit_0058");
    runtime.register_function(0x088EFD54u, &recomp_unit_0058, "recomp_unit_0058");
    runtime.register_function(0x088EFD64u, &recomp_unit_0058, "recomp_unit_0058");
    runtime.register_function(0x088EFD70u, &recomp_unit_0058, "recomp_unit_0058");
    runtime.register_function(0x088EFD84u, &recomp_unit_0058, "recomp_unit_0058");
    runtime.register_function(0x088EFD90u, &recomp_unit_0058, "recomp_unit_0058");
    runtime.register_function(0x088EFDBCu, &recomp_unit_0058, "recomp_unit_0058");
    runtime.register_function(0x088EFDD8u, &recomp_unit_0058, "recomp_unit_0058");
    runtime.register_function(0x088EFDF0u, &recomp_unit_0058, "recomp_unit_0058");
    runtime.register_function(0x088EFDF8u, &recomp_unit_0058, "recomp_unit_0058");
    runtime.register_function(0x088EFE04u, &recomp_unit_0058, "recomp_unit_0058");
    runtime.register_function(0x088EFE10u, &recomp_unit_0058, "recomp_unit_0058");
    runtime.register_function(0x088EFE18u, &recomp_unit_0058, "recomp_unit_0058");
    runtime.register_function(0x088EFE30u, &recomp_unit_0058, "recomp_unit_0058");
    runtime.register_function(0x088EFE48u, &recomp_unit_0058, "recomp_unit_0058");
    runtime.register_function(0x088EFE5Cu, &recomp_unit_0058, "recomp_unit_0058");
    runtime.register_function(0x088EFE64u, &recomp_unit_0058, "recomp_unit_0058");
    runtime.register_function(0x088EFE7Cu, &recomp_unit_0058, "recomp_unit_0058");
    runtime.register_function(0x088EFE94u, &recomp_unit_0058, "recomp_unit_0058");
    runtime.register_function(0x088EFEA4u, &recomp_unit_0058, "recomp_unit_0058");
    runtime.register_function(0x088EFEB4u, &recomp_unit_0058, "recomp_unit_0058");
    runtime.register_function(0x088EFF0Cu, &recomp_unit_0058, "recomp_unit_0058");
    runtime.register_function(0x088EFF1Cu, &recomp_unit_0058, "recomp_unit_0058");
    runtime.register_function(0x088EFF2Cu, &recomp_unit_0058, "recomp_unit_0058");
    runtime.register_function(0x088EFF3Cu, &recomp_unit_0058, "recomp_unit_0058");
    runtime.register_function(0x088EFF54u, &recomp_unit_0058, "recomp_unit_0058");
    runtime.register_function(0x088EFF64u, &recomp_unit_0058, "recomp_unit_0058");
    runtime.register_function(0x088EFF74u, &recomp_unit_0058, "recomp_unit_0058");
    runtime.register_function(0x088EFF84u, &recomp_unit_0058, "recomp_unit_0058");
    runtime.register_function(0x088EFF94u, &recomp_unit_0058, "recomp_unit_0058");
    runtime.register_function(0x088EFFA4u, &recomp_unit_0058, "recomp_unit_0058");
    runtime.register_function(0x088EFFBCu, &recomp_unit_0058, "recomp_unit_0058");
    runtime.register_function(0x088EFFD0u, &recomp_unit_0058, "recomp_unit_0058");
    runtime.register_function(0x088EFFE4u, &recomp_unit_0058, "recomp_unit_0058");
    runtime.register_function(0x088EFFFCu, &recomp_unit_0058, "recomp_unit_0058");
}
} // namespace psprecomp
