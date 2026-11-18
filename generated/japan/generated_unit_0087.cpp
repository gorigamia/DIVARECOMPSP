#include "psprecomp/runtime.hpp"
#include "generated_units.hpp"
#include <bit>
#include <cmath>
#include <cstdint>
#include <limits>

namespace psprecomp {
static const std::uint16_t kEntryIds_recomp_unit_0087[4091] = {
    1, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 2,
    3, 0, 0, 0, 0, 0, 0, 0, 0, 4, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 5, 0, 6, 0, 0, 0,
    0, 0, 7, 0, 0, 0, 0, 0, 0, 0, 0, 8, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    9, 0, 0, 0, 10, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 11, 0, 0, 0, 12, 13, 0, 14, 0, 0, 15, 0, 0, 0, 16, 0,
    0, 17, 0, 0, 18, 0, 0, 0, 19, 0, 20, 0, 0, 0, 0, 0, 21, 0, 0, 22, 0, 0, 0, 23, 0, 0, 0, 0, 0, 24, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 25, 0, 0, 26, 0, 0, 0, 0, 27, 0, 28, 0, 0, 0, 0, 0, 29, 0, 0, 30, 0, 0, 0, 31,
    0, 0, 0, 0, 0, 32, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 33, 0, 34, 0, 0, 35, 0, 0, 0, 0, 0, 0, 36, 0, 37, 0,
    0, 0, 0, 0, 38, 0, 0, 39, 0, 0, 0, 40, 0, 0, 0, 0, 0, 41, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 42,
    0, 0, 43, 0, 0, 0, 44, 0, 45, 0, 0, 0, 0, 0, 46, 0, 0, 47, 0, 0, 0, 48, 0, 0, 0, 0, 0, 49, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 50, 0, 51, 0, 0, 52, 0, 0, 53, 0, 0, 0, 54, 55, 0, 56, 0, 57, 0, 0, 0, 0, 0, 58, 0, 0, 59,
    0, 0, 0, 60, 0, 0, 0, 0, 0, 61, 0, 0, 0, 0, 0, 0, 0, 0, 0, 62, 0, 0, 0, 0, 0, 0, 0, 0, 0, 63, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 64, 0, 0, 0, 65, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 66, 0, 0, 0, 0, 0, 0, 0, 0, 0, 67, 0, 0, 68, 0, 0, 0, 69, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 70, 0, 71, 0, 0, 0, 0, 0, 72, 0, 0, 73, 0, 0, 0, 74, 0, 0, 0, 0, 0, 75, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 76, 0, 0, 77, 0, 0, 0, 0, 0, 78, 0, 0, 0, 79, 80, 0, 81, 0, 82, 0, 0, 0, 0, 0, 83, 0, 0, 84, 0, 0,
    0, 85, 0, 0, 0, 0, 0, 86, 0, 0, 0, 0, 0, 0, 0, 0, 0, 87, 0, 0, 0, 0, 0, 0, 88, 0, 0, 89, 0, 0, 90, 0,
    91, 0, 0, 0, 0, 0, 92, 0, 0, 93, 0, 0, 0, 94, 0, 0, 0, 0, 0, 95, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 96, 0,
    0, 97, 0, 0, 0, 0, 98, 0, 0, 99, 100, 0, 0, 0, 101, 0, 102, 0, 0, 0, 0, 0, 103, 0, 0, 104, 0, 0, 0, 105, 0, 0,
    0, 0, 0, 106, 0, 0, 0, 0, 0, 0, 0, 0, 0, 107, 0, 0, 108, 0, 0, 109, 0, 110, 0, 0, 0, 0, 0, 111, 0, 0, 112, 0,
    0, 0, 113, 0, 0, 0, 0, 0, 114, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 115, 0, 0, 116, 0, 0, 0, 117, 0, 118, 0, 0, 0,
    0, 0, 119, 0, 0, 120, 0, 0, 0, 121, 0, 0, 0, 0, 0, 122, 0, 0, 0, 0, 0, 0, 0, 0, 0, 123, 0, 0, 124, 0, 0, 125,
    0, 0, 0, 0, 0, 0, 0, 0, 126, 0, 0, 0, 127, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 128, 0, 129, 0, 0, 0,
    0, 0, 130, 0, 0, 131, 0, 0, 0, 132, 0, 0, 0, 0, 0, 133, 0, 0, 0, 0, 0, 0, 0, 0, 0, 134, 0, 0, 135, 0, 0, 0,
    0, 0, 136, 0, 0, 137, 138, 0, 0, 0, 139, 0, 140, 0, 0, 141, 142, 0, 0, 0, 0, 0, 0, 143, 0, 0, 144, 145, 0, 0, 0, 146,
    0, 147, 0, 0, 0, 0, 0, 148, 0, 0, 149, 0, 0, 0, 150, 0, 0, 0, 0, 0, 151, 0, 0, 0, 0, 0, 0, 0, 0, 0, 152, 0,
    0, 153, 0, 0, 0, 0, 0, 154, 0, 0, 155, 156, 0, 0, 0, 157, 0, 158, 0, 0, 159, 160, 0, 0, 0, 0, 0, 0, 161, 0, 0, 162,
    163, 0, 0, 0, 164, 0, 165, 0, 0, 0, 0, 0, 166, 0, 0, 167, 0, 0, 0, 168, 0, 0, 0, 0, 0, 169, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 170, 0, 171, 0, 0, 172, 0, 0, 173, 0, 174, 0, 0, 0, 0, 0, 175, 0, 0, 176, 0, 0, 0, 177, 0, 0, 0, 0, 0,
    178, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 179, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 180, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 181, 0, 0, 0, 0, 0, 0, 182, 0, 0, 0, 183, 184, 0, 185, 0, 0, 186, 0, 0, 0, 0, 0, 187, 0, 0, 0, 188,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 189, 0, 190, 0, 0, 0, 0, 0, 191, 0, 0, 192, 0, 0, 0, 193, 0, 0, 0,
    0, 0, 194, 0, 0, 0, 0, 0, 0, 0, 0, 0, 195, 0, 0, 0, 0, 0, 0, 0, 0, 196, 0, 0, 0, 197, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 198, 0, 0, 0, 0, 199, 0, 0, 0, 0, 0, 0, 0, 0, 200, 0, 0, 0, 201, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 202, 0, 203, 0, 0, 0, 0, 0, 204, 0, 0, 205, 0, 0, 0, 206, 0, 0, 0, 0, 0, 207, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 208, 0, 0, 0, 209, 0, 0, 210, 0, 0, 211, 0, 0, 0, 212, 0, 213, 0, 0, 0, 0, 0, 214, 0, 0, 215, 0, 0, 0,
    216, 0, 0, 0, 0, 0, 217, 0, 0, 0, 0, 0, 0, 0, 0, 0, 218, 0, 0, 219, 0, 0, 0, 0, 0, 0, 0, 0, 220, 0, 0, 0,
    221, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 222, 0, 223, 0, 0, 0, 0, 0, 224, 0, 0, 0, 0, 0, 0, 0,
    0, 225, 0, 0, 0, 226, 0, 0, 0, 0, 0, 227, 0, 0, 0, 228, 0, 0, 0, 0, 0, 229, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 230, 0, 231, 0, 0, 0, 0, 0, 0, 0, 0, 232, 0, 0, 0, 233, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 234, 0, 0, 0, 235, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 236, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 237, 0, 0, 0, 238, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 239, 0, 0, 0, 240, 241,
    0, 242, 0, 0, 243, 0, 0, 0, 244, 0, 0, 245, 0, 0, 246, 0, 0, 0, 247, 0, 248, 0, 0, 0, 0, 0, 249, 0, 0, 250, 0, 0,
    0, 251, 0, 0, 0, 0, 0, 252, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 253, 0, 0, 254, 0, 0, 0, 0, 255, 0, 256, 0, 0, 0,
    0, 0, 257, 0, 0, 258, 0, 0, 0, 259, 0, 0, 0, 0, 0, 260, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 261, 0, 262, 0, 0, 263,
    0, 0, 0, 0, 0, 0, 264, 0, 265, 0, 0, 0, 0, 0, 266, 0, 0, 267, 0, 0, 0, 268, 0, 0, 0, 0, 0, 269, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 270, 0, 0, 271, 0, 0, 0, 272, 0, 273, 0, 0, 0, 0, 0, 274, 0, 0, 275, 0, 0, 0, 276,
    0, 0, 0, 0, 0, 277, 0, 0, 0, 0, 0, 0, 0, 0, 0, 278, 0, 279, 0, 0, 280, 0, 0, 281, 0, 0, 0, 282, 283, 0, 284, 0,
    285, 0, 0, 0, 0, 0, 286, 0, 0, 287, 0, 0, 0, 288, 0, 0, 0, 0, 0, 289, 0, 0, 0, 0, 0, 0, 0, 0, 0, 290, 0, 0,
    291, 0, 0, 0, 0, 0, 0, 292, 0, 293, 0, 0, 0, 0, 0, 294, 0, 0, 295, 0, 0, 0, 296, 0, 0, 0, 0, 0, 297, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 298, 0, 0, 299, 0, 0, 0, 0, 300, 0, 0, 301, 302, 0, 0, 0, 303, 0, 304, 0, 0, 0, 0, 0, 305,
    0, 0, 306, 0, 0, 0, 307, 0, 0, 0, 0, 0, 308, 0, 0, 0, 0, 0, 0, 0, 0, 0, 309, 0, 0, 310, 0, 0, 311, 0, 312, 0,
    0, 0, 0, 0, 313, 0, 0, 314, 0, 0, 0, 315, 0, 0, 0, 0, 0, 316, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 317, 0, 0, 318,
    0, 0, 0, 0, 0, 0, 0, 319, 0, 320, 0, 0, 0, 0, 0, 321, 0, 0, 322, 0, 0, 0, 323, 0, 0, 0, 0, 0, 324, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 325, 0, 0, 0, 0, 0, 0, 0, 0, 0, 326, 0, 0, 0, 0, 0, 0, 0, 0, 0, 327, 0, 0, 328, 0,
    0, 0, 329, 0, 330, 0, 0, 0, 0, 0, 331, 0, 0, 332, 0, 0, 0, 333, 0, 0, 0, 0, 0, 334, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 335, 0, 0, 0, 0, 0, 0, 0, 336, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 337, 0, 0, 338, 0,
    339, 0, 340, 0, 0, 0, 0, 341, 0, 342, 0, 0, 0, 0, 343, 0, 0, 344, 0, 0, 0, 0, 0, 345, 0, 0, 0, 0, 0, 346, 0, 0,
    0, 0, 0, 0, 0, 0, 347, 0, 0, 348, 0, 0, 0, 0, 0, 0, 349, 0, 350, 351, 0, 0, 352, 0, 353, 0, 0, 0, 0, 0, 354, 0,
    0, 355, 0, 0, 0, 0, 0, 356, 0, 0, 0, 0, 0, 357, 0, 0, 0, 0, 0, 0, 0, 0, 358, 0, 0, 0, 0, 0, 359, 0, 0, 0,
    0, 0, 360, 0, 0, 361, 0, 362, 0, 363, 0, 0, 0, 0, 0, 364, 0, 0, 365, 0, 0, 0, 0, 0, 366, 0, 0, 0, 0, 0, 367, 0,
    0, 0, 0, 0, 0, 0, 0, 368, 0, 369, 0, 0, 370, 0, 0, 371, 0, 0, 0, 372, 0, 0, 373, 0, 0, 0, 0, 0, 0, 374, 0, 0,
    0, 0, 375, 0, 0, 0, 0, 0, 0, 0, 376, 0, 377, 0, 378, 0, 0, 0, 0, 0, 379, 0, 0, 0, 0, 0, 0, 380, 0, 0, 0, 381,
    0, 382, 0, 383, 0, 0, 0, 384, 0, 0, 0, 385, 0, 386, 0, 0, 0, 0, 0, 387, 0, 0, 388, 0, 0, 0, 0, 0, 389, 0, 0, 0,
    0, 0, 390, 0, 0, 0, 0, 0, 0, 0, 0, 0, 391, 0, 392, 0, 0, 0, 393, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 394, 0, 0,
    0, 395, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 396, 0, 0, 397, 0, 0, 0, 398, 0, 0, 0, 0, 0, 0, 0, 399, 0,
    400, 0, 0, 0, 0, 0, 401, 0, 0, 402, 0, 0, 0, 403, 0, 0, 0, 0, 0, 404, 0, 0, 0, 0, 0, 0, 0, 0, 0, 405, 0, 0,
    0, 0, 406, 0, 0, 407, 408, 0, 0, 0, 409, 0, 0, 410, 0, 0, 411, 0, 0, 0, 412, 0, 0, 413, 0, 0, 0, 0, 0, 0, 414, 0,
    0, 0, 0, 415, 0, 0, 0, 0, 0, 0, 0, 416, 0, 417, 0, 418, 0, 0, 0, 0, 0, 419, 0, 0, 0, 0, 0, 0, 420, 0, 0, 0,
    421, 0, 422, 0, 423, 0, 0, 0, 424, 0, 0, 0, 425, 0, 426, 0, 0, 0, 0, 0, 427, 0, 0, 428, 0, 0, 0, 429, 0, 0, 0, 0,
    0, 430, 0, 0, 0, 0, 0, 0, 0, 0, 0, 431, 432, 0, 433, 434, 0, 0, 435, 0, 436, 0, 0, 437, 0, 0, 0, 438, 0, 439, 0, 0,
    0, 0, 0, 440, 0, 0, 441, 0, 0, 0, 0, 0, 442, 0, 0, 0, 0, 0, 443, 0, 0, 0, 0, 0, 0, 0, 0, 444, 0, 445, 0, 0,
    0, 446, 0, 0, 447, 0, 448, 0, 449, 0, 0, 0, 0, 0, 450, 0, 0, 451, 0, 0, 0, 0, 0, 452, 0, 0, 0, 0, 0, 453, 0, 0,
    0, 0, 0, 0, 0, 0, 454, 0, 0, 455, 0, 0, 0, 0, 0, 0, 0, 456, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 457, 0,
    0, 458, 459, 0, 0, 0, 0, 0, 460, 0, 0, 461, 0, 462, 0, 463, 0, 0, 0, 0, 0, 464, 0, 0, 465, 0, 0, 0, 0, 0, 466, 0,
    0, 0, 0, 0, 467, 0, 0, 0, 0, 0, 0, 0, 0, 468, 0, 469, 0, 470, 0, 0, 471, 0, 472, 0, 473, 0, 0, 0, 0, 0, 474, 0,
    0, 475, 0, 0, 0, 0, 0, 476, 0, 0, 0, 0, 0, 477, 0, 0, 0, 0, 0, 0, 0, 0, 478, 0, 0, 0, 0, 479, 0, 0, 480, 481,
    0, 0, 0, 482, 0, 0, 0, 483, 0, 0, 0, 0, 0, 0, 0, 0, 484, 0, 0, 0, 485, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 486, 0, 0, 487, 0, 0, 488, 0, 0, 0, 0, 489, 0, 0, 490, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 491, 0, 0, 492, 0, 493, 0, 494, 0, 0, 0, 0, 0, 495, 0, 0, 496, 0, 0, 0, 497, 0,
    0, 0, 0, 0, 498, 0, 0, 0, 0, 0, 0, 0, 0, 0, 499, 0, 0, 500, 0, 0, 501, 0, 0, 0, 0, 0, 502, 0, 0, 503, 504, 0,
    0, 0, 505, 0, 506, 0, 0, 507, 508, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 509, 0, 0, 0, 510, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 511, 0, 0, 0, 512, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 513, 0, 514, 0, 0, 0, 0, 0, 515, 0,
    0, 516, 0, 0, 0, 517, 0, 0, 0, 0, 0, 518, 0, 0, 0, 0, 0, 0, 0, 0, 0, 519, 0, 0, 0, 0, 0, 0, 0, 0, 520, 0,
    0, 0, 521, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 522, 0, 0, 0, 523, 0, 0, 0, 0, 0, 0, 0, 0, 524, 0, 0, 0, 525,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 526, 0, 0, 527, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 528, 0, 0, 0, 529, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 530, 0, 0, 531, 0, 0, 0, 532, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 533, 0, 0, 0,
    0, 534, 0, 0, 535, 536, 0, 537, 0, 538, 539, 0, 0, 540, 0, 0, 541, 0, 0, 0, 542, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 543, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 544, 0, 0, 545, 546, 0, 0, 0, 547, 0, 0, 0, 0,
    0, 0, 548, 0, 0, 0, 0, 0, 549, 0, 550, 0, 0, 0, 551, 0, 0, 0, 552, 0, 553, 0, 554, 0, 555, 0, 0, 0, 0, 556, 0, 0,
    0, 0, 0, 557, 0, 0, 0, 0, 558, 0, 559, 0, 0, 560, 561, 0, 0, 0, 0, 562, 0, 563, 564, 0, 565, 0, 566, 0, 567, 0, 0, 0,
    0, 568, 0, 0, 569, 570, 0, 0, 0, 0, 0, 0, 0, 571, 0, 572, 0, 0, 0, 573, 0, 0, 574, 0, 0, 0, 0, 0, 575, 0, 0, 0,
    576, 0, 577, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 578, 0, 579, 0, 0, 0, 580, 581, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 582, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 583, 0, 0, 0, 0, 584, 0, 0, 585, 0, 0, 586, 0,
    0, 587, 0, 588, 0, 589, 0, 0, 590, 0, 0, 591, 0, 0, 592, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 593, 0, 594, 595, 596, 0, 0,
    0, 597, 0, 598, 0, 0, 599, 0, 0, 600, 0, 0, 0, 0, 0, 0, 601, 0, 602, 603, 0, 0, 0, 0, 604, 605, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 606, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 607, 0, 0, 0, 608, 0, 0, 609, 0, 0, 610, 0,
    0, 611, 0, 0, 612, 0, 0, 613, 0, 0, 614, 0, 0, 0, 615, 0, 0, 616, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 617, 0, 0, 0,
    618, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 619, 0, 0, 0, 620, 0, 0, 621, 0, 0, 0, 0, 622, 0, 0, 0, 0, 623,
    0, 0, 0, 0, 0, 0, 624, 0, 0, 625, 0, 0, 0, 0, 626, 0, 0, 627, 0, 0, 628, 0, 0, 629, 0, 630, 0, 631, 0, 0, 632, 633,
    0, 0, 0, 0, 0, 0, 634, 0, 635, 0, 0, 0, 636, 0, 0, 0, 637, 0, 638, 0, 0, 639, 640, 0, 0, 641, 0, 642, 0, 643, 0, 0,
    644, 645, 0, 0, 0, 0, 0, 0, 0, 0, 0, 646, 0, 0, 0, 0, 0, 647, 0, 0, 0, 0, 0, 0, 0, 648, 0, 0, 649, 0, 650, 0,
    0, 0, 0, 651, 0, 0, 0, 0, 0, 652, 0, 0, 0, 0, 0, 653, 0, 654, 0, 0, 0, 0, 655, 0, 0, 0, 0, 0, 0, 0, 0, 656,
    0, 0, 0, 0, 0, 0, 0, 657, 0, 0, 0, 0, 0, 0, 658, 0, 659, 0, 0, 0, 0, 660, 0, 0, 0, 0, 0, 661, 0, 0, 0, 0,
    0, 0, 662, 0, 0, 0, 0, 663, 0, 0, 0, 0, 0, 664, 0, 665, 0, 0, 0, 0, 666, 0, 0, 0, 0, 0, 0, 667, 0, 0, 0, 0,
    668, 0, 0, 0, 0, 0, 669, 0, 0, 0, 0, 0, 670, 0, 671, 0, 0, 0, 0, 0, 672, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    673, 0, 674, 0, 0, 675, 0, 0, 676, 0, 0, 0, 0, 677, 0, 0, 0, 0, 0, 678, 0, 0, 679, 0, 680, 0, 0, 0, 0, 681, 0, 682,
    0, 0, 0, 0, 0, 683, 0, 0, 684, 0, 685, 0, 0, 686, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 687, 0,
    0, 0, 688, 0, 0, 0, 0, 0, 0, 689, 0, 0, 0, 0, 0, 690, 691, 0, 0, 0, 692, 0, 0, 0, 0, 0, 0, 0, 0, 693, 0, 0,
    0, 0, 0, 0, 0, 0, 694, 0, 0, 0, 0, 695, 0, 0, 0, 0, 0, 696, 0, 0, 0, 0, 0, 0, 697, 0, 0, 0, 0, 0, 0, 0,
    0, 698, 0, 0, 699, 0, 700, 0, 701, 702, 0, 0, 703, 0, 704, 705, 0, 0, 706, 707, 0, 0, 0, 0, 0, 708, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 709, 0, 0, 710, 0, 0, 711, 0, 0, 712, 0, 0, 713, 0, 0, 0, 0, 0, 714, 0, 0, 0, 715, 716, 0, 0, 717,
    0, 0, 718, 0, 0, 719, 0, 0, 0, 720, 0, 0, 0, 721, 0, 0, 722, 0, 0, 723, 0, 0, 0, 0, 0, 0, 0, 0, 724, 0, 0, 725,
    0, 0, 726, 727, 0, 0, 0, 728, 729, 0, 0, 0, 0, 0, 0, 0, 730, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 731, 0, 0, 0, 732, 0, 0, 733, 0, 0, 0, 0, 0, 734, 0, 0, 0, 0, 0, 0, 0, 735, 0, 0, 736, 0, 0, 737, 0,
    0, 738, 0, 0, 739, 0, 0, 0, 0, 0, 740, 0, 0, 0, 0, 0, 0, 0, 741, 0, 0, 742, 0, 0, 743, 0, 0, 744, 0, 0, 0, 0,
    745, 0, 0, 0, 0, 0, 0, 746, 0, 0, 747, 0, 0, 0, 748, 0, 0, 749, 0, 0, 0, 0, 750, 0, 0, 0, 0, 751, 0, 0, 752, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 753, 0, 0, 0, 754, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 755, 0, 0, 0, 756, 0,
    0, 757, 0, 0, 0, 0, 758, 0, 0, 0, 0, 759, 0, 0, 0, 0, 0, 0, 760, 0, 0, 761, 0, 0, 0, 0, 762, 0, 0, 763, 0, 0,
    764, 0, 0, 765, 0, 766, 0, 0, 767, 0, 768, 0, 769, 0, 0, 770, 0, 0, 0, 0, 0, 771, 0, 0, 0, 0, 0, 0, 0, 772, 0, 0,
    773, 774, 0, 0, 0, 0, 0, 0, 0, 0, 0, 775, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 776, 0, 0, 0, 777, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    778, 0, 0, 779, 0, 0, 780, 0, 0, 781, 0, 0, 0, 782, 0, 0, 783, 0, 0, 784, 0, 0, 0, 0, 785, 0, 0, 0, 0, 0, 0, 0,
    786, 0, 787, 0, 788, 0, 0, 789, 0, 0, 0, 790, 0, 0, 0, 791, 0, 792, 0, 793, 0, 0, 0, 794, 0, 0, 0, 795, 0, 796, 0, 0,
    0, 0, 0, 797, 0, 0, 798, 0, 0, 0, 0, 0, 799, 0, 0, 0, 0, 0, 800, 0, 0, 0, 0, 0, 0, 0, 0, 0, 801, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 802, 0, 0, 0, 0, 0, 0, 0, 803, 0, 0, 0, 0, 0, 804, 0, 0, 0,
    0, 0, 805, 0, 0, 806, 0, 0, 0, 807, 0, 0, 0, 0, 0, 0, 0, 0, 808, 809, 0, 0, 0, 0, 0, 810, 0, 0, 811, 0, 0, 0,
    0, 812, 0, 0, 0, 0, 813, 0, 0, 0, 0, 0, 0, 0, 814, 0, 815, 0, 0, 816, 0, 817, 0, 0, 0, 0, 0, 818, 0, 0, 0, 0,
    0, 0, 0, 0, 819, 0, 0, 0, 0, 0, 820, 0, 0, 0, 0, 0, 0, 0, 0, 821, 0, 822, 0, 0, 0, 0, 823,
};
void recomp_unit_0087_entry(Runtime &rt, AllegrexContext &ctx, std::uint16_t direct_entry_id, GuestMemory::AotFastView &aot_mem) {
    std::uint32_t jump_target = 0u;
    std::uint32_t local_transfers = 0u;
    std::uint32_t local_pc = ctx.pc;
    std::uint32_t entry_id = direct_entry_id;
LOCAL_DISPATCH:
    {
    if (entry_id == 0u) {
        const std::uint32_t entry_delta = local_pc - 0x08960000u;
        entry_id = (entry_delta < 16364u && (entry_delta & 3u) == 0u) ? kEntryIds_recomp_unit_0087[entry_delta >> 2u] : 0u;
    }
    switch (entry_id) {
    case 1u: goto L_08960000;
    case 2u: goto L_0896007C;
    case 3u: goto L_08960080;
    case 4u: goto L_089600A4;
    case 5u: goto L_089600E8;
    case 6u: goto L_089600F0;
    case 7u: goto L_08960108;
    case 8u: goto L_0896012C;
    case 9u: goto L_08960180;
    case 10u: goto L_08960190;
    case 11u: goto L_089601C0;
    case 12u: goto L_089601D0;
    case 13u: goto L_089601D4;
    case 14u: goto L_089601DC;
    case 15u: goto L_089601E8;
    case 16u: goto L_089601F8;
    case 17u: goto L_08960204;
    case 18u: goto L_08960210;
    case 19u: goto L_08960220;
    case 20u: goto L_08960228;
    case 21u: goto L_08960240;
    case 22u: goto L_0896024C;
    case 23u: goto L_0896025C;
    case 24u: goto L_08960274;
    case 25u: goto L_089602A0;
    case 26u: goto L_089602AC;
    case 27u: goto L_089602C0;
    case 28u: goto L_089602C8;
    case 29u: goto L_089602E0;
    case 30u: goto L_089602EC;
    case 31u: goto L_089602FC;
    case 32u: goto L_08960314;
    case 33u: goto L_08960340;
    case 34u: goto L_08960348;
    case 35u: goto L_08960354;
    case 36u: goto L_08960370;
    case 37u: goto L_08960378;
    case 38u: goto L_08960390;
    case 39u: goto L_0896039C;
    case 40u: goto L_089603AC;
    case 41u: goto L_089603C4;
    case 42u: goto L_089603FC;
    case 43u: goto L_08960408;
    case 44u: goto L_08960418;
    case 45u: goto L_08960420;
    case 46u: goto L_08960438;
    case 47u: goto L_08960444;
    case 48u: goto L_08960454;
    case 49u: goto L_0896046C;
    case 50u: goto L_08960494;
    case 51u: goto L_0896049C;
    case 52u: goto L_089604A8;
    case 53u: goto L_089604B4;
    case 54u: goto L_089604C4;
    case 55u: goto L_089604C8;
    case 56u: goto L_089604D0;
    case 57u: goto L_089604D8;
    case 58u: goto L_089604F0;
    case 59u: goto L_089604FC;
    case 60u: goto L_0896050C;
    case 61u: goto L_08960524;
    case 62u: goto L_0896054C;
    case 63u: goto L_08960574;
    case 64u: goto L_089605C8;
    case 65u: goto L_089605D8;
    case 66u: goto L_08960610;
    case 67u: goto L_08960638;
    case 68u: goto L_08960644;
    case 69u: goto L_08960654;
    case 70u: goto L_0896068C;
    case 71u: goto L_08960694;
    case 72u: goto L_089606AC;
    case 73u: goto L_089606B8;
    case 74u: goto L_089606C8;
    case 75u: goto L_089606E0;
    case 76u: goto L_08960708;
    case 77u: goto L_08960714;
    case 78u: goto L_0896072C;
    case 79u: goto L_0896073C;
    case 80u: goto L_08960740;
    case 81u: goto L_08960748;
    case 82u: goto L_08960750;
    case 83u: goto L_08960768;
    case 84u: goto L_08960774;
    case 85u: goto L_08960784;
    case 86u: goto L_0896079C;
    case 87u: goto L_089607C4;
    case 88u: goto L_089607E0;
    case 89u: goto L_089607EC;
    case 90u: goto L_089607F8;
    case 91u: goto L_08960800;
    case 92u: goto L_08960818;
    case 93u: goto L_08960824;
    case 94u: goto L_08960834;
    case 95u: goto L_0896084C;
    case 96u: goto L_08960878;
    case 97u: goto L_08960884;
    case 98u: goto L_08960898;
    case 99u: goto L_089608A4;
    case 100u: goto L_089608A8;
    case 101u: goto L_089608B8;
    case 102u: goto L_089608C0;
    case 103u: goto L_089608D8;
    case 104u: goto L_089608E4;
    case 105u: goto L_089608F4;
    case 106u: goto L_0896090C;
    case 107u: goto L_08960934;
    case 108u: goto L_08960940;
    case 109u: goto L_0896094C;
    case 110u: goto L_08960954;
    case 111u: goto L_0896096C;
    case 112u: goto L_08960978;
    case 113u: goto L_08960988;
    case 114u: goto L_089609A0;
    case 115u: goto L_089609CC;
    case 116u: goto L_089609D8;
    case 117u: goto L_089609E8;
    case 118u: goto L_089609F0;
    case 119u: goto L_08960A08;
    case 120u: goto L_08960A14;
    case 121u: goto L_08960A24;
    case 122u: goto L_08960A3C;
    case 123u: goto L_08960A64;
    case 124u: goto L_08960A70;
    case 125u: goto L_08960A7C;
    case 126u: goto L_08960AA0;
    case 127u: goto L_08960AB0;
    case 128u: goto L_08960AE8;
    case 129u: goto L_08960AF0;
    case 130u: goto L_08960B08;
    case 131u: goto L_08960B14;
    case 132u: goto L_08960B24;
    case 133u: goto L_08960B3C;
    case 134u: goto L_08960B64;
    case 135u: goto L_08960B70;
    case 136u: goto L_08960B88;
    case 137u: goto L_08960B94;
    case 138u: goto L_08960B98;
    case 139u: goto L_08960BA8;
    case 140u: goto L_08960BB0;
    case 141u: goto L_08960BBC;
    case 142u: goto L_08960BC0;
    case 143u: goto L_08960BDC;
    case 144u: goto L_08960BE8;
    case 145u: goto L_08960BEC;
    case 146u: goto L_08960BFC;
    case 147u: goto L_08960C04;
    case 148u: goto L_08960C1C;
    case 149u: goto L_08960C28;
    case 150u: goto L_08960C38;
    case 151u: goto L_08960C50;
    case 152u: goto L_08960C78;
    case 153u: goto L_08960C84;
    case 154u: goto L_08960C9C;
    case 155u: goto L_08960CA8;
    case 156u: goto L_08960CAC;
    case 157u: goto L_08960CBC;
    case 158u: goto L_08960CC4;
    case 159u: goto L_08960CD0;
    case 160u: goto L_08960CD4;
    case 161u: goto L_08960CF0;
    case 162u: goto L_08960CFC;
    case 163u: goto L_08960D00;
    case 164u: goto L_08960D10;
    case 165u: goto L_08960D18;
    case 166u: goto L_08960D30;
    case 167u: goto L_08960D3C;
    case 168u: goto L_08960D4C;
    case 169u: goto L_08960D64;
    case 170u: goto L_08960D8C;
    case 171u: goto L_08960D94;
    case 172u: goto L_08960DA0;
    case 173u: goto L_08960DAC;
    case 174u: goto L_08960DB4;
    case 175u: goto L_08960DCC;
    case 176u: goto L_08960DD8;
    case 177u: goto L_08960DE8;
    case 178u: goto L_08960E00;
    case 179u: goto L_08960E2C;
    case 180u: goto L_08960E58;
    case 181u: goto L_08960E90;
    case 182u: goto L_08960EAC;
    case 183u: goto L_08960EBC;
    case 184u: goto L_08960EC0;
    case 185u: goto L_08960EC8;
    case 186u: goto L_08960ED4;
    case 187u: goto L_08960EEC;
    case 188u: goto L_08960EFC;
    case 189u: goto L_08960F34;
    case 190u: goto L_08960F3C;
    case 191u: goto L_08960F54;
    case 192u: goto L_08960F60;
    case 193u: goto L_08960F70;
    case 194u: goto L_08960F88;
    case 195u: goto L_08960FB0;
    case 196u: goto L_08960FD4;
    case 197u: goto L_08960FE4;
    case 198u: goto L_08961018;
    case 199u: goto L_0896102C;
    case 200u: goto L_08961050;
    case 201u: goto L_08961060;
    case 202u: goto L_08961090;
    case 203u: goto L_08961098;
    case 204u: goto L_089610B0;
    case 205u: goto L_089610BC;
    case 206u: goto L_089610CC;
    case 207u: goto L_089610E4;
    case 208u: goto L_0896110C;
    case 209u: goto L_0896111C;
    case 210u: goto L_08961128;
    case 211u: goto L_08961134;
    case 212u: goto L_08961144;
    case 213u: goto L_0896114C;
    case 214u: goto L_08961164;
    case 215u: goto L_08961170;
    case 216u: goto L_08961180;
    case 217u: goto L_08961198;
    case 218u: goto L_089611C0;
    case 219u: goto L_089611CC;
    case 220u: goto L_089611F0;
    case 221u: goto L_08961200;
    case 222u: goto L_08961240;
    case 223u: goto L_08961248;
    case 224u: goto L_08961260;
    case 225u: goto L_08961284;
    case 226u: goto L_08961294;
    case 227u: goto L_089612AC;
    case 228u: goto L_089612BC;
    case 229u: goto L_089612D4;
    case 230u: goto L_08961314;
    case 231u: goto L_0896131C;
    case 232u: goto L_08961340;
    case 233u: goto L_08961350;
    case 234u: goto L_08961388;
    case 235u: goto L_08961398;
    case 236u: goto L_089613C4;
    case 237u: goto L_0896141C;
    case 238u: goto L_0896142C;
    case 239u: goto L_08961468;
    case 240u: goto L_08961478;
    case 241u: goto L_0896147C;
    case 242u: goto L_08961484;
    case 243u: goto L_08961490;
    case 244u: goto L_089614A0;
    case 245u: goto L_089614AC;
    case 246u: goto L_089614B8;
    case 247u: goto L_089614C8;
    case 248u: goto L_089614D0;
    case 249u: goto L_089614E8;
    case 250u: goto L_089614F4;
    case 251u: goto L_08961504;
    case 252u: goto L_0896151C;
    case 253u: goto L_08961548;
    case 254u: goto L_08961554;
    case 255u: goto L_08961568;
    case 256u: goto L_08961570;
    case 257u: goto L_08961588;
    case 258u: goto L_08961594;
    case 259u: goto L_089615A4;
    case 260u: goto L_089615BC;
    case 261u: goto L_089615E8;
    case 262u: goto L_089615F0;
    case 263u: goto L_089615FC;
    case 264u: goto L_08961618;
    case 265u: goto L_08961620;
    case 266u: goto L_08961638;
    case 267u: goto L_08961644;
    case 268u: goto L_08961654;
    case 269u: goto L_0896166C;
    case 270u: goto L_089616A4;
    case 271u: goto L_089616B0;
    case 272u: goto L_089616C0;
    case 273u: goto L_089616C8;
    case 274u: goto L_089616E0;
    case 275u: goto L_089616EC;
    case 276u: goto L_089616FC;
    case 277u: goto L_08961714;
    case 278u: goto L_0896173C;
    case 279u: goto L_08961744;
    case 280u: goto L_08961750;
    case 281u: goto L_0896175C;
    case 282u: goto L_0896176C;
    case 283u: goto L_08961770;
    case 284u: goto L_08961778;
    case 285u: goto L_08961780;
    case 286u: goto L_08961798;
    case 287u: goto L_089617A4;
    case 288u: goto L_089617B4;
    case 289u: goto L_089617CC;
    case 290u: goto L_089617F4;
    case 291u: goto L_08961800;
    case 292u: goto L_0896181C;
    case 293u: goto L_08961824;
    case 294u: goto L_0896183C;
    case 295u: goto L_08961848;
    case 296u: goto L_08961858;
    case 297u: goto L_08961870;
    case 298u: goto L_0896189C;
    case 299u: goto L_089618A8;
    case 300u: goto L_089618BC;
    case 301u: goto L_089618C8;
    case 302u: goto L_089618CC;
    case 303u: goto L_089618DC;
    case 304u: goto L_089618E4;
    case 305u: goto L_089618FC;
    case 306u: goto L_08961908;
    case 307u: goto L_08961918;
    case 308u: goto L_08961930;
    case 309u: goto L_08961958;
    case 310u: goto L_08961964;
    case 311u: goto L_08961970;
    case 312u: goto L_08961978;
    case 313u: goto L_08961990;
    case 314u: goto L_0896199C;
    case 315u: goto L_089619AC;
    case 316u: goto L_089619C4;
    case 317u: goto L_089619F0;
    case 318u: goto L_089619FC;
    case 319u: goto L_08961A1C;
    case 320u: goto L_08961A24;
    case 321u: goto L_08961A3C;
    case 322u: goto L_08961A48;
    case 323u: goto L_08961A58;
    case 324u: goto L_08961A70;
    case 325u: goto L_08961A9C;
    case 326u: goto L_08961AC4;
    case 327u: goto L_08961AEC;
    case 328u: goto L_08961AF8;
    case 329u: goto L_08961B08;
    case 330u: goto L_08961B10;
    case 331u: goto L_08961B28;
    case 332u: goto L_08961B34;
    case 333u: goto L_08961B44;
    case 334u: goto L_08961B5C;
    case 335u: goto L_08961B84;
    case 336u: goto L_08961BA4;
    case 337u: goto L_08961BEC;
    case 338u: goto L_08961BF8;
    case 339u: goto L_08961C00;
    case 340u: goto L_08961C08;
    case 341u: goto L_08961C1C;
    case 342u: goto L_08961C24;
    case 343u: goto L_08961C38;
    case 344u: goto L_08961C44;
    case 345u: goto L_08961C5C;
    case 346u: goto L_08961C74;
    case 347u: goto L_08961C98;
    case 348u: goto L_08961CA4;
    case 349u: goto L_08961CC0;
    case 350u: goto L_08961CC8;
    case 351u: goto L_08961CCC;
    case 352u: goto L_08961CD8;
    case 353u: goto L_08961CE0;
    case 354u: goto L_08961CF8;
    case 355u: goto L_08961D04;
    case 356u: goto L_08961D1C;
    case 357u: goto L_08961D34;
    case 358u: goto L_08961D58;
    case 359u: goto L_08961D70;
    case 360u: goto L_08961D88;
    case 361u: goto L_08961D94;
    case 362u: goto L_08961D9C;
    case 363u: goto L_08961DA4;
    case 364u: goto L_08961DBC;
    case 365u: goto L_08961DC8;
    case 366u: goto L_08961DE0;
    case 367u: goto L_08961DF8;
    case 368u: goto L_08961E1C;
    case 369u: goto L_08961E24;
    case 370u: goto L_08961E30;
    case 371u: goto L_08961E3C;
    case 372u: goto L_08961E4C;
    case 373u: goto L_08961E58;
    case 374u: goto L_08961E74;
    case 375u: goto L_08961E88;
    case 376u: goto L_08961EA8;
    case 377u: goto L_08961EB0;
    case 378u: goto L_08961EB8;
    case 379u: goto L_08961ED0;
    case 380u: goto L_08961EEC;
    case 381u: goto L_08961EFC;
    case 382u: goto L_08961F04;
    case 383u: goto L_08961F0C;
    case 384u: goto L_08961F1C;
    case 385u: goto L_08961F2C;
    case 386u: goto L_08961F34;
    case 387u: goto L_08961F4C;
    case 388u: goto L_08961F58;
    case 389u: goto L_08961F70;
    case 390u: goto L_08961F88;
    case 391u: goto L_08961FB0;
    case 392u: goto L_08961FB8;
    case 393u: goto L_08961FC8;
    case 394u: goto L_08961FF4;
    case 395u: goto L_08962004;
    case 396u: goto L_0896203C;
    case 397u: goto L_08962048;
    case 398u: goto L_08962058;
    case 399u: goto L_08962078;
    case 400u: goto L_08962080;
    case 401u: goto L_08962098;
    case 402u: goto L_089620A4;
    case 403u: goto L_089620B4;
    case 404u: goto L_089620CC;
    case 405u: goto L_089620F4;
    case 406u: goto L_08962108;
    case 407u: goto L_08962114;
    case 408u: goto L_08962118;
    case 409u: goto L_08962128;
    case 410u: goto L_08962134;
    case 411u: goto L_08962140;
    case 412u: goto L_08962150;
    case 413u: goto L_0896215C;
    case 414u: goto L_08962178;
    case 415u: goto L_0896218C;
    case 416u: goto L_089621AC;
    case 417u: goto L_089621B4;
    case 418u: goto L_089621BC;
    case 419u: goto L_089621D4;
    case 420u: goto L_089621F0;
    case 421u: goto L_08962200;
    case 422u: goto L_08962208;
    case 423u: goto L_08962210;
    case 424u: goto L_08962220;
    case 425u: goto L_08962230;
    case 426u: goto L_08962238;
    case 427u: goto L_08962250;
    case 428u: goto L_0896225C;
    case 429u: goto L_0896226C;
    case 430u: goto L_08962284;
    case 431u: goto L_089622AC;
    case 432u: goto L_089622B0;
    case 433u: goto L_089622B8;
    case 434u: goto L_089622BC;
    case 435u: goto L_089622C8;
    case 436u: goto L_089622D0;
    case 437u: goto L_089622DC;
    case 438u: goto L_089622EC;
    case 439u: goto L_089622F4;
    case 440u: goto L_0896230C;
    case 441u: goto L_08962318;
    case 442u: goto L_08962330;
    case 443u: goto L_08962348;
    case 444u: goto L_0896236C;
    case 445u: goto L_08962374;
    case 446u: goto L_08962384;
    case 447u: goto L_08962390;
    case 448u: goto L_08962398;
    case 449u: goto L_089623A0;
    case 450u: goto L_089623B8;
    case 451u: goto L_089623C4;
    case 452u: goto L_089623DC;
    case 453u: goto L_089623F4;
    case 454u: goto L_08962418;
    case 455u: goto L_08962424;
    case 456u: goto L_08962444;
    case 457u: goto L_08962478;
    case 458u: goto L_08962484;
    case 459u: goto L_08962488;
    case 460u: goto L_089624A0;
    case 461u: goto L_089624AC;
    case 462u: goto L_089624B4;
    case 463u: goto L_089624BC;
    case 464u: goto L_089624D4;
    case 465u: goto L_089624E0;
    case 466u: goto L_089624F8;
    case 467u: goto L_08962510;
    case 468u: goto L_08962534;
    case 469u: goto L_0896253C;
    case 470u: goto L_08962544;
    case 471u: goto L_08962550;
    case 472u: goto L_08962558;
    case 473u: goto L_08962560;
    case 474u: goto L_08962578;
    case 475u: goto L_08962584;
    case 476u: goto L_0896259C;
    case 477u: goto L_089625B4;
    case 478u: goto L_089625D8;
    case 479u: goto L_089625EC;
    case 480u: goto L_089625F8;
    case 481u: goto L_089625FC;
    case 482u: goto L_0896260C;
    case 483u: goto L_0896261C;
    case 484u: goto L_08962640;
    case 485u: goto L_08962650;
    case 486u: goto L_08962684;
    case 487u: goto L_08962690;
    case 488u: goto L_0896269C;
    case 489u: goto L_089626B0;
    case 490u: goto L_089626BC;
    case 491u: goto L_08962728;
    case 492u: goto L_08962734;
    case 493u: goto L_0896273C;
    case 494u: goto L_08962744;
    case 495u: goto L_0896275C;
    case 496u: goto L_08962768;
    case 497u: goto L_08962778;
    case 498u: goto L_08962790;
    case 499u: goto L_089627B8;
    case 500u: goto L_089627C4;
    case 501u: goto L_089627D0;
    case 502u: goto L_089627E8;
    case 503u: goto L_089627F4;
    case 504u: goto L_089627F8;
    case 505u: goto L_08962808;
    case 506u: goto L_08962810;
    case 507u: goto L_0896281C;
    case 508u: goto L_08962820;
    case 509u: goto L_0896284C;
    case 510u: goto L_0896285C;
    case 511u: goto L_08962898;
    case 512u: goto L_089628A8;
    case 513u: goto L_089628D8;
    case 514u: goto L_089628E0;
    case 515u: goto L_089628F8;
    case 516u: goto L_08962904;
    case 517u: goto L_08962914;
    case 518u: goto L_0896292C;
    case 519u: goto L_08962954;
    case 520u: goto L_08962978;
    case 521u: goto L_08962988;
    case 522u: goto L_089629B8;
    case 523u: goto L_089629C8;
    case 524u: goto L_089629EC;
    case 525u: goto L_089629FC;
    case 526u: goto L_08962A24;
    case 527u: goto L_08962A30;
    case 528u: goto L_08962A5C;
    case 529u: goto L_08962A6C;
    case 530u: goto L_08962AA8;
    case 531u: goto L_08962AB4;
    case 532u: goto L_08962AC4;
    case 533u: goto L_08962AF0;
    case 534u: goto L_08962B04;
    case 535u: goto L_08962B10;
    case 536u: goto L_08962B14;
    case 537u: goto L_08962B1C;
    case 538u: goto L_08962B24;
    case 539u: goto L_08962B28;
    case 540u: goto L_08962B34;
    case 541u: goto L_08962B40;
    case 542u: goto L_08962B50;
    case 543u: goto L_08962B84;
    case 544u: goto L_08962BCC;
    case 545u: goto L_08962BD8;
    case 546u: goto L_08962BDC;
    case 547u: goto L_08962BEC;
    case 548u: goto L_08962C08;
    case 549u: goto L_08962C20;
    case 550u: goto L_08962C28;
    case 551u: goto L_08962C38;
    case 552u: goto L_08962C48;
    case 553u: goto L_08962C50;
    case 554u: goto L_08962C58;
    case 555u: goto L_08962C60;
    case 556u: goto L_08962C74;
    case 557u: goto L_08962C8C;
    case 558u: goto L_08962CA0;
    case 559u: goto L_08962CA8;
    case 560u: goto L_08962CB4;
    case 561u: goto L_08962CB8;
    case 562u: goto L_08962CCC;
    case 563u: goto L_08962CD4;
    case 564u: goto L_08962CD8;
    case 565u: goto L_08962CE0;
    case 566u: goto L_08962CE8;
    case 567u: goto L_08962CF0;
    case 568u: goto L_08962D04;
    case 569u: goto L_08962D10;
    case 570u: goto L_08962D14;
    case 571u: goto L_08962D34;
    case 572u: goto L_08962D3C;
    case 573u: goto L_08962D4C;
    case 574u: goto L_08962D58;
    case 575u: goto L_08962D70;
    case 576u: goto L_08962D80;
    case 577u: goto L_08962D88;
    case 578u: goto L_08962DCC;
    case 579u: goto L_08962DD4;
    case 580u: goto L_08962DE4;
    case 581u: goto L_08962DE8;
    case 582u: goto L_08962E10;
    case 583u: goto L_08962E4C;
    case 584u: goto L_08962E60;
    case 585u: goto L_08962E6C;
    case 586u: goto L_08962E78;
    case 587u: goto L_08962E84;
    case 588u: goto L_08962E8C;
    case 589u: goto L_08962E94;
    case 590u: goto L_08962EA0;
    case 591u: goto L_08962EAC;
    case 592u: goto L_08962EB8;
    case 593u: goto L_08962EE4;
    case 594u: goto L_08962EEC;
    case 595u: goto L_08962EF0;
    case 596u: goto L_08962EF4;
    case 597u: goto L_08962F04;
    case 598u: goto L_08962F0C;
    case 599u: goto L_08962F18;
    case 600u: goto L_08962F24;
    case 601u: goto L_08962F40;
    case 602u: goto L_08962F48;
    case 603u: goto L_08962F4C;
    case 604u: goto L_08962F60;
    case 605u: goto L_08962F64;
    case 606u: goto L_08962F8C;
    case 607u: goto L_08962FD0;
    case 608u: goto L_08962FE0;
    case 609u: goto L_08962FEC;
    case 610u: goto L_08962FF8;
    case 611u: goto L_08963004;
    case 612u: goto L_08963010;
    case 613u: goto L_0896301C;
    case 614u: goto L_08963028;
    case 615u: goto L_08963038;
    case 616u: goto L_08963044;
    case 617u: goto L_08963070;
    case 618u: goto L_08963080;
    case 619u: goto L_089630B8;
    case 620u: goto L_089630C8;
    case 621u: goto L_089630D4;
    case 622u: goto L_089630E8;
    case 623u: goto L_089630FC;
    case 624u: goto L_08963118;
    case 625u: goto L_08963124;
    case 626u: goto L_08963138;
    case 627u: goto L_08963144;
    case 628u: goto L_08963150;
    case 629u: goto L_0896315C;
    case 630u: goto L_08963164;
    case 631u: goto L_0896316C;
    case 632u: goto L_08963178;
    case 633u: goto L_0896317C;
    case 634u: goto L_08963198;
    case 635u: goto L_089631A0;
    case 636u: goto L_089631B0;
    case 637u: goto L_089631C0;
    case 638u: goto L_089631C8;
    case 639u: goto L_089631D4;
    case 640u: goto L_089631D8;
    case 641u: goto L_089631E4;
    case 642u: goto L_089631EC;
    case 643u: goto L_089631F4;
    case 644u: goto L_08963200;
    case 645u: goto L_08963204;
    case 646u: goto L_0896322C;
    case 647u: goto L_08963244;
    case 648u: goto L_08963264;
    case 649u: goto L_08963270;
    case 650u: goto L_08963278;
    case 651u: goto L_0896328C;
    case 652u: goto L_089632A4;
    case 653u: goto L_089632BC;
    case 654u: goto L_089632C4;
    case 655u: goto L_089632D8;
    case 656u: goto L_089632FC;
    case 657u: goto L_0896331C;
    case 658u: goto L_08963338;
    case 659u: goto L_08963340;
    case 660u: goto L_08963354;
    case 661u: goto L_0896336C;
    case 662u: goto L_08963388;
    case 663u: goto L_0896339C;
    case 664u: goto L_089633B4;
    case 665u: goto L_089633BC;
    case 666u: goto L_089633D0;
    case 667u: goto L_089633EC;
    case 668u: goto L_08963400;
    case 669u: goto L_08963418;
    case 670u: goto L_08963430;
    case 671u: goto L_08963438;
    case 672u: goto L_08963450;
    case 673u: goto L_08963480;
    case 674u: goto L_08963488;
    case 675u: goto L_08963494;
    case 676u: goto L_089634A0;
    case 677u: goto L_089634B4;
    case 678u: goto L_089634CC;
    case 679u: goto L_089634D8;
    case 680u: goto L_089634E0;
    case 681u: goto L_089634F4;
    case 682u: goto L_089634FC;
    case 683u: goto L_08963514;
    case 684u: goto L_08963520;
    case 685u: goto L_08963528;
    case 686u: goto L_08963534;
    case 687u: goto L_08963578;
    case 688u: goto L_08963588;
    case 689u: goto L_089635A4;
    case 690u: goto L_089635BC;
    case 691u: goto L_089635C0;
    case 692u: goto L_089635D0;
    case 693u: goto L_089635F4;
    case 694u: goto L_08963618;
    case 695u: goto L_0896362C;
    case 696u: goto L_08963644;
    case 697u: goto L_08963660;
    case 698u: goto L_08963684;
    case 699u: goto L_08963690;
    case 700u: goto L_08963698;
    case 701u: goto L_089636A0;
    case 702u: goto L_089636A4;
    case 703u: goto L_089636B0;
    case 704u: goto L_089636B8;
    case 705u: goto L_089636BC;
    case 706u: goto L_089636C8;
    case 707u: goto L_089636CC;
    case 708u: goto L_089636E4;
    case 709u: goto L_08963714;
    case 710u: goto L_08963720;
    case 711u: goto L_0896372C;
    case 712u: goto L_08963738;
    case 713u: goto L_08963744;
    case 714u: goto L_0896375C;
    case 715u: goto L_0896376C;
    case 716u: goto L_08963770;
    case 717u: goto L_0896377C;
    case 718u: goto L_08963788;
    case 719u: goto L_08963794;
    case 720u: goto L_089637A4;
    case 721u: goto L_089637B4;
    case 722u: goto L_089637C0;
    case 723u: goto L_089637CC;
    case 724u: goto L_089637F0;
    case 725u: goto L_089637FC;
    case 726u: goto L_08963808;
    case 727u: goto L_0896380C;
    case 728u: goto L_0896381C;
    case 729u: goto L_08963820;
    case 730u: goto L_08963840;
    case 731u: goto L_0896388C;
    case 732u: goto L_0896389C;
    case 733u: goto L_089638A8;
    case 734u: goto L_089638C0;
    case 735u: goto L_089638E0;
    case 736u: goto L_089638EC;
    case 737u: goto L_089638F8;
    case 738u: goto L_08963904;
    case 739u: goto L_08963910;
    case 740u: goto L_08963928;
    case 741u: goto L_08963948;
    case 742u: goto L_08963954;
    case 743u: goto L_08963960;
    case 744u: goto L_0896396C;
    case 745u: goto L_08963980;
    case 746u: goto L_0896399C;
    case 747u: goto L_089639A8;
    case 748u: goto L_089639B8;
    case 749u: goto L_089639C4;
    case 750u: goto L_089639D8;
    case 751u: goto L_089639EC;
    case 752u: goto L_089639F8;
    case 753u: goto L_08963A20;
    case 754u: goto L_08963A30;
    case 755u: goto L_08963A68;
    case 756u: goto L_08963A78;
    case 757u: goto L_08963A84;
    case 758u: goto L_08963A98;
    case 759u: goto L_08963AAC;
    case 760u: goto L_08963AC8;
    case 761u: goto L_08963AD4;
    case 762u: goto L_08963AE8;
    case 763u: goto L_08963AF4;
    case 764u: goto L_08963B00;
    case 765u: goto L_08963B0C;
    case 766u: goto L_08963B14;
    case 767u: goto L_08963B20;
    case 768u: goto L_08963B28;
    case 769u: goto L_08963B30;
    case 770u: goto L_08963B3C;
    case 771u: goto L_08963B54;
    case 772u: goto L_08963B74;
    case 773u: goto L_08963B80;
    case 774u: goto L_08963B84;
    case 775u: goto L_08963BAC;
    case 776u: goto L_08963C40;
    case 777u: goto L_08963C50;
    case 778u: goto L_08963C80;
    case 779u: goto L_08963C8C;
    case 780u: goto L_08963C98;
    case 781u: goto L_08963CA4;
    case 782u: goto L_08963CB4;
    case 783u: goto L_08963CC0;
    case 784u: goto L_08963CCC;
    case 785u: goto L_08963CE0;
    case 786u: goto L_08963D00;
    case 787u: goto L_08963D08;
    case 788u: goto L_08963D10;
    case 789u: goto L_08963D1C;
    case 790u: goto L_08963D2C;
    case 791u: goto L_08963D3C;
    case 792u: goto L_08963D44;
    case 793u: goto L_08963D4C;
    case 794u: goto L_08963D5C;
    case 795u: goto L_08963D6C;
    case 796u: goto L_08963D74;
    case 797u: goto L_08963D8C;
    case 798u: goto L_08963D98;
    case 799u: goto L_08963DB0;
    case 800u: goto L_08963DC8;
    case 801u: goto L_08963DF0;
    case 802u: goto L_08963E38;
    case 803u: goto L_08963E58;
    case 804u: goto L_08963E70;
    case 805u: goto L_08963E88;
    case 806u: goto L_08963E94;
    case 807u: goto L_08963EA4;
    case 808u: goto L_08963EC8;
    case 809u: goto L_08963ECC;
    case 810u: goto L_08963EE4;
    case 811u: goto L_08963EF0;
    case 812u: goto L_08963F04;
    case 813u: goto L_08963F18;
    case 814u: goto L_08963F38;
    case 815u: goto L_08963F40;
    case 816u: goto L_08963F4C;
    case 817u: goto L_08963F54;
    case 818u: goto L_08963F6C;
    case 819u: goto L_08963F90;
    case 820u: goto L_08963FA8;
    case 821u: goto L_08963FCC;
    case 822u: goto L_08963FD4;
    case 823u: goto L_08963FE8;
    default:
        if (local_transfers == 0u) rt.unsupported(ctx.pc, 0u, "invalid internal function entry");
        else ctx.pc = local_pc;
        return;
    }
    }
L_08960000:
    ctx.set_gpr(4, ctx.gpr[4] | ctx.gpr[6]);
    rt.memory().aot_store32(ctx.gpr[16] + static_cast<std::uint32_t>(8), ctx.gpr[4]);
    ctx.set_gpr(4, rt.memory().aot_load8(ctx.gpr[16] + static_cast<std::uint32_t>(3)));
    ctx.set_gpr(7, 0u + static_cast<std::uint32_t>(128));
    ctx.set_gpr(6, 0u + static_cast<std::uint32_t>(-129));
    ctx.set_gpr(4, ctx.gpr[4] & ctx.gpr[6]);
    ctx.set_gpr(4, ctx.gpr[4] | ctx.gpr[7]);
    rt.memory().aot_store8(ctx.gpr[16] + static_cast<std::uint32_t>(3), static_cast<std::uint8_t>(ctx.gpr[4]));
    ctx.set_gpr(4, rt.memory().aot_load8(ctx.gpr[16] + static_cast<std::uint32_t>(11)));
    ctx.set_gpr(4, ctx.gpr[4] & ctx.gpr[6]);
    ctx.set_gpr(4, ctx.gpr[4] | ctx.gpr[7]);
    rt.memory().aot_store8(ctx.gpr[16] + static_cast<std::uint32_t>(11), static_cast<std::uint8_t>(ctx.gpr[4]));
    ctx.set_gpr(4, rt.memory().aot_load8(ctx.gpr[16] + static_cast<std::uint32_t>(11)));
    ctx.set_gpr(2, ctx.gpr[4] & ctx.gpr[2]);
    ctx.set_gpr(2, ctx.gpr[2] | ctx.gpr[3]);
    rt.memory().aot_store8(ctx.gpr[16] + static_cast<std::uint32_t>(11), static_cast<std::uint8_t>(ctx.gpr[2]));
    ctx.set_gpr(4, rt.memory().aot_load8(ctx.gpr[16] + static_cast<std::uint32_t>(11)));
    ctx.set_gpr(3, ctx.gpr[3] << 1u);
    ctx.set_gpr(2, 0u + static_cast<std::uint32_t>(-3));
    ctx.set_gpr(2, ctx.gpr[4] & ctx.gpr[2]);
    ctx.set_gpr(2, ctx.gpr[2] | ctx.gpr[3]);
    rt.memory().aot_store8(ctx.gpr[16] + static_cast<std::uint32_t>(11), static_cast<std::uint8_t>(ctx.gpr[2]));
    ctx.set_gpr(4, rt.memory().aot_load8(ctx.gpr[16] + static_cast<std::uint32_t>(11)));
    ctx.set_gpr(2, 0u & 31u);
    ctx.set_gpr(3, ctx.gpr[2] << 2u);
    ctx.set_gpr(2, 0u + static_cast<std::uint32_t>(-125));
    ctx.set_gpr(2, ctx.gpr[4] & ctx.gpr[2]);
    ctx.set_gpr(2, ctx.gpr[2] | ctx.gpr[3]);
    rt.memory().aot_store8(ctx.gpr[16] + static_cast<std::uint32_t>(11), static_cast<std::uint8_t>(ctx.gpr[2]));
    { const bool branch_taken = ctx.gpr[17] != 0u;
    // nop
      if (branch_taken) {
          goto L_08960080;
      }
      goto L_0896007C;
    }
L_0896007C:
    ctx.set_gpr(17, 0u + static_cast<std::uint32_t>(12));
    goto L_08960080;
L_08960080:
    ctx.set_gpr(2, ctx.gpr[17] >> 2u);
    ctx.set_gpr(2, ctx.gpr[2] + static_cast<std::uint32_t>(-1));
    ctx.set_gpr(4, rt.memory().aot_load8(ctx.gpr[16] + static_cast<std::uint32_t>(0)));
    ctx.set_gpr(2, ctx.gpr[2] & 15u);
    ctx.set_gpr(3, ctx.gpr[2] << 1u);
    ctx.set_gpr(2, 0u + static_cast<std::uint32_t>(-31));
    ctx.set_gpr(2, ctx.gpr[4] & ctx.gpr[2]);
    ctx.set_gpr(2, ctx.gpr[2] | ctx.gpr[3]);
    rt.memory().aot_store8(ctx.gpr[16] + static_cast<std::uint32_t>(0), static_cast<std::uint8_t>(ctx.gpr[2]));
    goto L_089600A4;
L_089600A4:
    ctx.set_gpr(4, rt.memory().aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(0)));
    ctx.set_gpr(2, ctx.gpr[5] & 65535u);
    ctx.set_gpr(3, ctx.gpr[2] << 5u);
    ctx.set_gpr(2, 65504u << 16u);
    ctx.set_gpr(2, ctx.gpr[2] | 31u);
    ctx.set_gpr(2, ctx.gpr[4] & ctx.gpr[2]);
    ctx.set_gpr(2, ctx.gpr[2] | ctx.gpr[3]);
    rt.memory().aot_store32(ctx.gpr[16] + static_cast<std::uint32_t>(0), ctx.gpr[2]);
    ctx.set_gpr(5, rt.memory().aot_load32(ctx.gpr[18] + static_cast<std::uint32_t>(44)));
    ctx.set_gpr(4, rt.memory().aot_load8(ctx.gpr[5] + static_cast<std::uint32_t>(0)));
    ctx.set_gpr(3, 0u + static_cast<std::uint32_t>(1));
    ctx.set_gpr(2, 0u + static_cast<std::uint32_t>(-2));
    ctx.set_gpr(2, ctx.gpr[4] & ctx.gpr[2]);
    ctx.set_gpr(2, ctx.gpr[2] | ctx.gpr[3]);
    rt.memory().aot_store8(ctx.gpr[5] + static_cast<std::uint32_t>(0), static_cast<std::uint8_t>(ctx.gpr[2]));
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_089600F0;
      }
      goto L_089600E8;
    }
L_089600E8:
    ctx.set_gpr(2, ctx.gpr[18] + static_cast<std::uint32_t>(72));
    rt.memory().aot_store32(ctx.gpr[18] + static_cast<std::uint32_t>(44), ctx.gpr[2]);
    goto L_089600F0;
L_089600F0:
    ctx.set_gpr(2, 2245u << 16u);
    ctx.set_gpr(4, rt.memory().aot_load32(ctx.gpr[2] + static_cast<std::uint32_t>(31440)));
    ctx.set_gpr(25, rt.memory().aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(0)));
    ctx.set_gpr(25, rt.memory().aot_load32(ctx.gpr[25] + static_cast<std::uint32_t>(104)));
    jump_target = ctx.gpr[25];
    ctx.set_gpr(31, 0x08960108u);
    // nop
    ctx.pc = jump_target;
    if (rt.invoke_chained_call(ctx, &aot_mem) && ctx.pc == 0x08960108u) goto L_08960108;
    return;
L_08960108:
    rt.memory().aot_store32(ctx.gpr[18] + static_cast<std::uint32_t>(2012), ctx.gpr[2]);
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
L_0896012C:
    ctx.set_gpr(29, ctx.gpr[29] + static_cast<std::uint32_t>(-32));
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(28), ctx.gpr[31]);
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(24), ctx.gpr[21]);
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(20), ctx.gpr[20]);
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(16), ctx.gpr[19]);
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(12), ctx.gpr[18]);
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(8), ctx.gpr[17]);
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(4), ctx.gpr[16]);
    ctx.set_gpr(17, ctx.gpr[4] + 0u);
    ctx.set_gpr(16, ctx.gpr[5] + 0u);
    ctx.set_gpr(21, rt.memory().aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(212)));
    ctx.set_gpr(3, rt.memory().aot_load32(ctx.gpr[5] + static_cast<std::uint32_t>(0)));
    ctx.set_gpr(3, ctx.gpr[3] << 11u);
    ctx.set_gpr(4, ctx.gpr[3] >> 16u);
    ctx.set_gpr(3, rt.memory().aot_load8(ctx.gpr[5] + static_cast<std::uint32_t>(3)));
    ctx.set_gpr(3, ctx.gpr[3] << 24u);
    ctx.set_gpr(3, ctx.gpr[3] >> 31u);
    ctx.set_gpr(5, ctx.gpr[3] & 255u);
    ctx.set_gpr(3, 0u + static_cast<std::uint32_t>(1));
    { const bool branch_taken = ctx.gpr[5] != ctx.gpr[3];
    // nop
      if (branch_taken) {
          goto L_08960190;
      }
      goto L_08960180;
    }
L_08960180:
    ctx.set_gpr(3, rt.memory().aot_load16(ctx.gpr[16] + static_cast<std::uint32_t>(8)));
    ctx.set_gpr(3, ctx.gpr[3] & 32767u);
    ctx.set_gpr(3, ctx.gpr[3] << 16u);
    ctx.set_gpr(4, ctx.gpr[4] + ctx.gpr[3]);
    goto L_08960190;
L_08960190:
    ctx.set_gpr(4, ctx.gpr[4] + static_cast<std::uint32_t>(3));
    ctx.set_gpr(3, 0u + static_cast<std::uint32_t>(-4));
    ctx.set_gpr(4, ctx.gpr[4] & ctx.gpr[3]);
    ctx.set_gpr(3, rt.memory().aot_load8(ctx.gpr[16] + static_cast<std::uint32_t>(0)));
    ctx.set_gpr(3, ctx.gpr[3] << 27u);
    ctx.set_gpr(3, ctx.gpr[3] >> 28u);
    ctx.set_gpr(3, ctx.gpr[3] + static_cast<std::uint32_t>(1));
    ctx.set_gpr(3, ctx.gpr[3] << 2u);
    ctx.set_gpr(20, ctx.gpr[4] + ctx.gpr[3]);
    ctx.set_gpr(3, 0u + static_cast<std::uint32_t>(1));
    { const bool branch_taken = ctx.gpr[5] != ctx.gpr[3];
    // nop
      if (branch_taken) {
          goto L_089601D0;
      }
      goto L_089601C0;
    }
L_089601C0:
    ctx.set_gpr(3, rt.memory().aot_load8(ctx.gpr[16] + static_cast<std::uint32_t>(11)));
    ctx.set_gpr(3, ctx.gpr[3] & 1u);
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_089601D4;
      }
      goto L_089601D0;
    }
L_089601D0:
    ctx.set_gpr(3, 0u + 0u);
    goto L_089601D4;
L_089601D4:
    { const bool branch_taken = ctx.gpr[3] != 0u;
    // nop
      if (branch_taken) {
          goto L_0896049C;
      }
      goto L_089601DC;
    }
L_089601DC:
    ctx.set_gpr(3, rt.memory().aot_load32(ctx.gpr[21] + static_cast<std::uint32_t>(44)));
    { const bool branch_taken = ctx.gpr[16] == ctx.gpr[3];
    // nop
      if (branch_taken) {
          goto L_08960348;
      }
      goto L_089601E8;
    }
L_089601E8:
    ctx.set_gpr(3, rt.memory().aot_load32(ctx.gpr[21] + static_cast<std::uint32_t>(2016)));
    ctx.set_gpr(3, ctx.gpr[3] & 1u);
    { const bool branch_taken = ctx.gpr[3] == 0u;
    // nop
      if (branch_taken) {
          goto L_0896054C;
      }
      goto L_089601F8;
    }
L_089601F8:
    ctx.set_gpr(3, rt.memory().aot_load32(ctx.gpr[17] + static_cast<std::uint32_t>(132)));
    { const bool branch_taken = ctx.gpr[3] == 0u;
    // nop
      if (branch_taken) {
          goto L_0896054C;
      }
      goto L_08960204;
    }
L_08960204:
    ctx.set_gpr(4, rt.memory().aot_load32(ctx.gpr[17] + static_cast<std::uint32_t>(144)));
    { const bool branch_taken = static_cast<std::int32_t>(ctx.gpr[4]) <= 0;
    // nop
      if (branch_taken) {
          goto L_089602A0;
      }
      goto L_08960210;
    }
L_08960210:
    ctx.set_gpr(3, rt.memory().aot_load32(ctx.gpr[17] + static_cast<std::uint32_t>(128)));
    ctx.set_gpr(1, ctx.gpr[16] < ctx.gpr[3] ? 1u : 0u);
    { const bool branch_taken = ctx.gpr[1] == 0u;
    // nop
      if (branch_taken) {
          goto L_089602A0;
      }
      goto L_08960220;
    }
L_08960220:
    { const bool branch_taken = static_cast<std::int32_t>(ctx.gpr[4]) <= 0;
    // nop
      if (branch_taken) {
          goto L_089602A0;
      }
      goto L_08960228;
    }
L_08960228:
    ctx.set_gpr(4, ctx.gpr[17] + 0u);
    ctx.set_gpr(5, 0u + 0u);
    ctx.set_gpr(25, rt.memory().aot_load32(ctx.gpr[17] + static_cast<std::uint32_t>(0)));
    ctx.set_gpr(25, rt.memory().aot_load32(ctx.gpr[25] + static_cast<std::uint32_t>(412)));
    jump_target = ctx.gpr[25];
    ctx.set_gpr(31, 0x08960240u);
    // nop
    ctx.pc = jump_target;
    if (rt.invoke_chained_call(ctx, &aot_mem) && ctx.pc == 0x08960240u) goto L_08960240;
    return;
L_08960240:
    ctx.set_gpr(4, ctx.gpr[17] + 0u);
    ctx.set_gpr(31, 0x0896024Cu);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0081_entry, 81u, 30u, 0x089482C8u>(ctx, &aot_mem) && ctx.pc == 0x0896024Cu) goto L_0896024C;
    return;
L_0896024C:
    ctx.set_gpr(19, ctx.gpr[2] + 0u);
    ctx.set_gpr(4, ctx.gpr[17] + 0u);
    ctx.set_gpr(31, 0x0896025Cu);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0081_entry, 81u, 30u, 0x089482C8u>(ctx, &aot_mem) && ctx.pc == 0x0896025Cu) goto L_0896025C;
    return;
L_0896025C:
    ctx.set_gpr(18, ctx.gpr[2] + 0u);
    ctx.set_gpr(4, ctx.gpr[17] + 0u);
    ctx.set_gpr(25, rt.memory().aot_load32(ctx.gpr[17] + static_cast<std::uint32_t>(0)));
    ctx.set_gpr(25, rt.memory().aot_load32(ctx.gpr[25] + static_cast<std::uint32_t>(456)));
    jump_target = ctx.gpr[25];
    ctx.set_gpr(31, 0x08960274u);
    // nop
    ctx.pc = jump_target;
    if (rt.invoke_chained_call(ctx, &aot_mem) && ctx.pc == 0x08960274u) goto L_08960274;
    return;
L_08960274:
    ctx.set_gpr(3, 2228u << 16u);
    ctx.set_gpr(4, rt.memory().aot_load32(ctx.gpr[3] + static_cast<std::uint32_t>(-11080)));
    ctx.set_gpr(5, ctx.gpr[19] + 0u);
    ctx.set_gpr(6, ctx.gpr[18] + 0u);
    ctx.set_gpr(7, ctx.gpr[2] + 0u);
    ctx.set_gpr(8, ctx.gpr[16] + 0u);
    ctx.set_gpr(9, 2228u << 16u);
    ctx.set_gpr(9, ctx.gpr[9] + static_cast<std::uint32_t>(-884));
    ctx.set_gpr(10, rt.memory().aot_load32(ctx.gpr[17] + static_cast<std::uint32_t>(128)));
    ctx.set_gpr(31, 0x089602A0u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0084_entry, 84u, 456u, 0x08955F2Cu>(ctx, &aot_mem) && ctx.pc == 0x089602A0u) goto L_089602A0;
    return;
L_089602A0:
    ctx.set_gpr(5, rt.memory().aot_load32(ctx.gpr[17] + static_cast<std::uint32_t>(144)));
    { const bool branch_taken = static_cast<std::int32_t>(ctx.gpr[5]) <= 0;
    // nop
      if (branch_taken) {
          goto L_0896054C;
      }
      goto L_089602AC;
    }
L_089602AC:
    ctx.set_gpr(4, ctx.gpr[16] + ctx.gpr[20]);
    ctx.set_gpr(3, rt.memory().aot_load32(ctx.gpr[17] + static_cast<std::uint32_t>(132)));
    ctx.set_gpr(1, ctx.gpr[3] < ctx.gpr[4] ? 1u : 0u);
    { const bool branch_taken = ctx.gpr[1] == 0u;
    // nop
      if (branch_taken) {
          goto L_0896054C;
      }
      goto L_089602C0;
    }
L_089602C0:
    { const bool branch_taken = static_cast<std::int32_t>(ctx.gpr[5]) <= 0;
    // nop
      if (branch_taken) {
          goto L_0896054C;
      }
      goto L_089602C8;
    }
L_089602C8:
    ctx.set_gpr(4, ctx.gpr[17] + 0u);
    ctx.set_gpr(5, 0u + 0u);
    ctx.set_gpr(25, rt.memory().aot_load32(ctx.gpr[17] + static_cast<std::uint32_t>(0)));
    ctx.set_gpr(25, rt.memory().aot_load32(ctx.gpr[25] + static_cast<std::uint32_t>(412)));
    jump_target = ctx.gpr[25];
    ctx.set_gpr(31, 0x089602E0u);
    // nop
    ctx.pc = jump_target;
    if (rt.invoke_chained_call(ctx, &aot_mem) && ctx.pc == 0x089602E0u) goto L_089602E0;
    return;
L_089602E0:
    ctx.set_gpr(4, ctx.gpr[17] + 0u);
    ctx.set_gpr(31, 0x089602ECu);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0081_entry, 81u, 30u, 0x089482C8u>(ctx, &aot_mem) && ctx.pc == 0x089602ECu) goto L_089602EC;
    return;
L_089602EC:
    ctx.set_gpr(19, ctx.gpr[2] + 0u);
    ctx.set_gpr(4, ctx.gpr[17] + 0u);
    ctx.set_gpr(31, 0x089602FCu);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0081_entry, 81u, 30u, 0x089482C8u>(ctx, &aot_mem) && ctx.pc == 0x089602FCu) goto L_089602FC;
    return;
L_089602FC:
    ctx.set_gpr(18, ctx.gpr[2] + 0u);
    ctx.set_gpr(4, ctx.gpr[17] + 0u);
    ctx.set_gpr(25, rt.memory().aot_load32(ctx.gpr[17] + static_cast<std::uint32_t>(0)));
    ctx.set_gpr(25, rt.memory().aot_load32(ctx.gpr[25] + static_cast<std::uint32_t>(456)));
    jump_target = ctx.gpr[25];
    ctx.set_gpr(31, 0x08960314u);
    // nop
    ctx.pc = jump_target;
    if (rt.invoke_chained_call(ctx, &aot_mem) && ctx.pc == 0x08960314u) goto L_08960314;
    return;
L_08960314:
    ctx.set_gpr(3, 2228u << 16u);
    ctx.set_gpr(4, rt.memory().aot_load32(ctx.gpr[3] + static_cast<std::uint32_t>(-11080)));
    ctx.set_gpr(5, ctx.gpr[19] + 0u);
    ctx.set_gpr(6, ctx.gpr[18] + 0u);
    ctx.set_gpr(7, ctx.gpr[2] + 0u);
    ctx.set_gpr(8, ctx.gpr[16] + 0u);
    ctx.set_gpr(9, 2228u << 16u);
    ctx.set_gpr(9, ctx.gpr[9] + static_cast<std::uint32_t>(-852));
    ctx.set_gpr(10, rt.memory().aot_load32(ctx.gpr[21] + static_cast<std::uint32_t>(44)));
    ctx.set_gpr(31, 0x08960340u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0084_entry, 84u, 456u, 0x08955F2Cu>(ctx, &aot_mem) && ctx.pc == 0x08960340u) goto L_08960340;
    return;
L_08960340:
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_0896054C;
      }
      goto L_08960348;
    }
L_08960348:
    ctx.set_gpr(5, rt.memory().aot_load32(ctx.gpr[17] + static_cast<std::uint32_t>(144)));
    { const bool branch_taken = static_cast<std::int32_t>(ctx.gpr[5]) <= 0;
    // nop
      if (branch_taken) {
          goto L_089603FC;
      }
      goto L_08960354;
    }
L_08960354:
    ctx.set_gpr(3, rt.memory().aot_load32(ctx.gpr[17] + static_cast<std::uint32_t>(216)));
    ctx.set_gpr(4, ctx.gpr[3] + static_cast<std::uint32_t>(7));
    ctx.set_gpr(3, 0u + static_cast<std::uint32_t>(-8));
    ctx.set_gpr(3, ctx.gpr[4] & ctx.gpr[3]);
    ctx.set_gpr(1, ctx.gpr[20] < ctx.gpr[3] ? 1u : 0u);
    { const bool branch_taken = ctx.gpr[1] == 0u;
    // nop
      if (branch_taken) {
          goto L_089603FC;
      }
      goto L_08960370;
    }
L_08960370:
    { const bool branch_taken = static_cast<std::int32_t>(ctx.gpr[5]) <= 0;
    // nop
      if (branch_taken) {
          goto L_089603FC;
      }
      goto L_08960378;
    }
L_08960378:
    ctx.set_gpr(4, ctx.gpr[17] + 0u);
    ctx.set_gpr(5, 0u + 0u);
    ctx.set_gpr(25, rt.memory().aot_load32(ctx.gpr[17] + static_cast<std::uint32_t>(0)));
    ctx.set_gpr(25, rt.memory().aot_load32(ctx.gpr[25] + static_cast<std::uint32_t>(412)));
    jump_target = ctx.gpr[25];
    ctx.set_gpr(31, 0x08960390u);
    // nop
    ctx.pc = jump_target;
    if (rt.invoke_chained_call(ctx, &aot_mem) && ctx.pc == 0x08960390u) goto L_08960390;
    return;
L_08960390:
    ctx.set_gpr(4, ctx.gpr[17] + 0u);
    ctx.set_gpr(31, 0x0896039Cu);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0081_entry, 81u, 30u, 0x089482C8u>(ctx, &aot_mem) && ctx.pc == 0x0896039Cu) goto L_0896039C;
    return;
L_0896039C:
    ctx.set_gpr(19, ctx.gpr[2] + 0u);
    ctx.set_gpr(4, ctx.gpr[17] + 0u);
    ctx.set_gpr(31, 0x089603ACu);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0081_entry, 81u, 30u, 0x089482C8u>(ctx, &aot_mem) && ctx.pc == 0x089603ACu) goto L_089603AC;
    return;
L_089603AC:
    ctx.set_gpr(18, ctx.gpr[2] + 0u);
    ctx.set_gpr(4, ctx.gpr[17] + 0u);
    ctx.set_gpr(25, rt.memory().aot_load32(ctx.gpr[17] + static_cast<std::uint32_t>(0)));
    ctx.set_gpr(25, rt.memory().aot_load32(ctx.gpr[25] + static_cast<std::uint32_t>(456)));
    jump_target = ctx.gpr[25];
    ctx.set_gpr(31, 0x089603C4u);
    // nop
    ctx.pc = jump_target;
    if (rt.invoke_chained_call(ctx, &aot_mem) && ctx.pc == 0x089603C4u) goto L_089603C4;
    return;
L_089603C4:
    ctx.set_gpr(3, rt.memory().aot_load32(ctx.gpr[17] + static_cast<std::uint32_t>(216)));
    ctx.set_gpr(4, ctx.gpr[3] + static_cast<std::uint32_t>(7));
    ctx.set_gpr(3, 0u + static_cast<std::uint32_t>(-8));
    ctx.set_gpr(10, ctx.gpr[4] & ctx.gpr[3]);
    ctx.set_gpr(3, 2228u << 16u);
    ctx.set_gpr(4, rt.memory().aot_load32(ctx.gpr[3] + static_cast<std::uint32_t>(-11080)));
    ctx.set_gpr(5, ctx.gpr[19] + 0u);
    ctx.set_gpr(6, ctx.gpr[18] + 0u);
    ctx.set_gpr(7, ctx.gpr[2] + 0u);
    ctx.set_gpr(8, ctx.gpr[16] + 0u);
    ctx.set_gpr(9, 2228u << 16u);
    ctx.set_gpr(9, ctx.gpr[9] + static_cast<std::uint32_t>(-820));
    ctx.set_gpr(31, 0x089603FCu);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0084_entry, 84u, 456u, 0x08955F2Cu>(ctx, &aot_mem) && ctx.pc == 0x089603FCu) goto L_089603FC;
    return;
L_089603FC:
    ctx.set_gpr(4, rt.memory().aot_load32(ctx.gpr[17] + static_cast<std::uint32_t>(144)));
    { const bool branch_taken = static_cast<std::int32_t>(ctx.gpr[4]) <= 0;
    // nop
      if (branch_taken) {
          goto L_0896054C;
      }
      goto L_08960408;
    }
L_08960408:
    ctx.set_gpr(3, rt.memory().aot_load8(ctx.gpr[16] + static_cast<std::uint32_t>(0)));
    ctx.set_gpr(3, ctx.gpr[3] & 1u);
    { const bool branch_taken = ctx.gpr[3] != 0u;
    // nop
      if (branch_taken) {
          goto L_0896054C;
      }
      goto L_08960418;
    }
L_08960418:
    { const bool branch_taken = static_cast<std::int32_t>(ctx.gpr[4]) <= 0;
    // nop
      if (branch_taken) {
          goto L_0896054C;
      }
      goto L_08960420;
    }
L_08960420:
    ctx.set_gpr(4, ctx.gpr[17] + 0u);
    ctx.set_gpr(5, 0u + 0u);
    ctx.set_gpr(25, rt.memory().aot_load32(ctx.gpr[17] + static_cast<std::uint32_t>(0)));
    ctx.set_gpr(25, rt.memory().aot_load32(ctx.gpr[25] + static_cast<std::uint32_t>(412)));
    jump_target = ctx.gpr[25];
    ctx.set_gpr(31, 0x08960438u);
    // nop
    ctx.pc = jump_target;
    if (rt.invoke_chained_call(ctx, &aot_mem) && ctx.pc == 0x08960438u) goto L_08960438;
    return;
L_08960438:
    ctx.set_gpr(4, ctx.gpr[17] + 0u);
    ctx.set_gpr(31, 0x08960444u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0081_entry, 81u, 30u, 0x089482C8u>(ctx, &aot_mem) && ctx.pc == 0x08960444u) goto L_08960444;
    return;
L_08960444:
    ctx.set_gpr(19, ctx.gpr[2] + 0u);
    ctx.set_gpr(4, ctx.gpr[17] + 0u);
    ctx.set_gpr(31, 0x08960454u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0081_entry, 81u, 30u, 0x089482C8u>(ctx, &aot_mem) && ctx.pc == 0x08960454u) goto L_08960454;
    return;
L_08960454:
    ctx.set_gpr(18, ctx.gpr[2] + 0u);
    ctx.set_gpr(4, ctx.gpr[17] + 0u);
    ctx.set_gpr(25, rt.memory().aot_load32(ctx.gpr[17] + static_cast<std::uint32_t>(0)));
    ctx.set_gpr(25, rt.memory().aot_load32(ctx.gpr[25] + static_cast<std::uint32_t>(456)));
    jump_target = ctx.gpr[25];
    ctx.set_gpr(31, 0x0896046Cu);
    // nop
    ctx.pc = jump_target;
    if (rt.invoke_chained_call(ctx, &aot_mem) && ctx.pc == 0x0896046Cu) goto L_0896046C;
    return;
L_0896046C:
    ctx.set_gpr(3, 2228u << 16u);
    ctx.set_gpr(4, rt.memory().aot_load32(ctx.gpr[3] + static_cast<std::uint32_t>(-11152)));
    ctx.set_gpr(5, ctx.gpr[19] + 0u);
    ctx.set_gpr(6, ctx.gpr[18] + 0u);
    ctx.set_gpr(7, ctx.gpr[2] + 0u);
    ctx.set_gpr(8, ctx.gpr[16] + 0u);
    ctx.set_gpr(9, 2228u << 16u);
    ctx.set_gpr(9, ctx.gpr[9] + static_cast<std::uint32_t>(-792));
    ctx.set_gpr(31, 0x08960494u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0084_entry, 84u, 456u, 0x08955F2Cu>(ctx, &aot_mem) && ctx.pc == 0x08960494u) goto L_08960494;
    return;
L_08960494:
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_0896054C;
      }
      goto L_0896049C;
    }
L_0896049C:
    ctx.set_gpr(4, rt.memory().aot_load32(ctx.gpr[17] + static_cast<std::uint32_t>(144)));
    { const bool branch_taken = static_cast<std::int32_t>(ctx.gpr[4]) <= 0;
    // nop
      if (branch_taken) {
          goto L_0896054C;
      }
      goto L_089604A8;
    }
L_089604A8:
    ctx.set_gpr(3, 0u + static_cast<std::uint32_t>(1));
    { const bool branch_taken = ctx.gpr[5] != ctx.gpr[3];
    // nop
      if (branch_taken) {
          goto L_089604C4;
      }
      goto L_089604B4;
    }
L_089604B4:
    ctx.set_gpr(3, rt.memory().aot_load8(ctx.gpr[16] + static_cast<std::uint32_t>(11)));
    ctx.set_gpr(3, ctx.gpr[3] & 1u);
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_089604C8;
      }
      goto L_089604C4;
    }
L_089604C4:
    ctx.set_gpr(3, 0u + 0u);
    goto L_089604C8;
L_089604C8:
    { const bool branch_taken = ctx.gpr[3] == 0u;
    // nop
      if (branch_taken) {
          goto L_0896054C;
      }
      goto L_089604D0;
    }
L_089604D0:
    { const bool branch_taken = static_cast<std::int32_t>(ctx.gpr[4]) <= 0;
    // nop
      if (branch_taken) {
          goto L_0896054C;
      }
      goto L_089604D8;
    }
L_089604D8:
    ctx.set_gpr(4, ctx.gpr[17] + 0u);
    ctx.set_gpr(5, 0u + 0u);
    ctx.set_gpr(25, rt.memory().aot_load32(ctx.gpr[17] + static_cast<std::uint32_t>(0)));
    ctx.set_gpr(25, rt.memory().aot_load32(ctx.gpr[25] + static_cast<std::uint32_t>(412)));
    jump_target = ctx.gpr[25];
    ctx.set_gpr(31, 0x089604F0u);
    // nop
    ctx.pc = jump_target;
    if (rt.invoke_chained_call(ctx, &aot_mem) && ctx.pc == 0x089604F0u) goto L_089604F0;
    return;
L_089604F0:
    ctx.set_gpr(4, ctx.gpr[17] + 0u);
    ctx.set_gpr(31, 0x089604FCu);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0081_entry, 81u, 30u, 0x089482C8u>(ctx, &aot_mem) && ctx.pc == 0x089604FCu) goto L_089604FC;
    return;
L_089604FC:
    ctx.set_gpr(19, ctx.gpr[2] + 0u);
    ctx.set_gpr(4, ctx.gpr[17] + 0u);
    ctx.set_gpr(31, 0x0896050Cu);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0081_entry, 81u, 30u, 0x089482C8u>(ctx, &aot_mem) && ctx.pc == 0x0896050Cu) goto L_0896050C;
    return;
L_0896050C:
    ctx.set_gpr(18, ctx.gpr[2] + 0u);
    ctx.set_gpr(4, ctx.gpr[17] + 0u);
    ctx.set_gpr(25, rt.memory().aot_load32(ctx.gpr[17] + static_cast<std::uint32_t>(0)));
    ctx.set_gpr(25, rt.memory().aot_load32(ctx.gpr[25] + static_cast<std::uint32_t>(456)));
    jump_target = ctx.gpr[25];
    ctx.set_gpr(31, 0x08960524u);
    // nop
    ctx.pc = jump_target;
    if (rt.invoke_chained_call(ctx, &aot_mem) && ctx.pc == 0x08960524u) goto L_08960524;
    return;
L_08960524:
    ctx.set_gpr(3, 2228u << 16u);
    ctx.set_gpr(4, rt.memory().aot_load32(ctx.gpr[3] + static_cast<std::uint32_t>(-11152)));
    ctx.set_gpr(5, ctx.gpr[19] + 0u);
    ctx.set_gpr(6, ctx.gpr[18] + 0u);
    ctx.set_gpr(7, ctx.gpr[2] + 0u);
    ctx.set_gpr(8, ctx.gpr[16] + 0u);
    ctx.set_gpr(9, 2228u << 16u);
    ctx.set_gpr(9, ctx.gpr[9] + static_cast<std::uint32_t>(-768));
    ctx.set_gpr(31, 0x0896054Cu);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0084_entry, 84u, 456u, 0x08955F2Cu>(ctx, &aot_mem) && ctx.pc == 0x0896054Cu) goto L_0896054C;
    return;
L_0896054C:
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
L_08960574:
    ctx.set_gpr(29, ctx.gpr[29] + static_cast<std::uint32_t>(-32));
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(28), ctx.gpr[31]);
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(24), ctx.gpr[22]);
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(20), ctx.gpr[21]);
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(16), ctx.gpr[20]);
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(12), ctx.gpr[19]);
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(8), ctx.gpr[18]);
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(4), ctx.gpr[17]);
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(0), ctx.gpr[16]);
    ctx.set_gpr(19, ctx.gpr[4] + 0u);
    ctx.set_gpr(18, ctx.gpr[5] + 0u);
    ctx.set_gpr(22, rt.memory().aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(212)));
    ctx.set_gpr(2, rt.memory().aot_load32(ctx.gpr[5] + static_cast<std::uint32_t>(0)));
    ctx.set_gpr(2, ctx.gpr[2] << 11u);
    ctx.set_gpr(4, ctx.gpr[2] >> 16u);
    ctx.set_gpr(2, rt.memory().aot_load8(ctx.gpr[5] + static_cast<std::uint32_t>(3)));
    ctx.set_gpr(2, ctx.gpr[2] << 24u);
    ctx.set_gpr(3, ctx.gpr[2] >> 31u);
    ctx.set_gpr(2, 0u + static_cast<std::uint32_t>(1));
    { const bool branch_taken = ctx.gpr[3] != ctx.gpr[2];
    // nop
      if (branch_taken) {
          goto L_089605D8;
      }
      goto L_089605C8;
    }
L_089605C8:
    ctx.set_gpr(2, rt.memory().aot_load16(ctx.gpr[18] + static_cast<std::uint32_t>(8)));
    ctx.set_gpr(2, ctx.gpr[2] & 32767u);
    ctx.set_gpr(2, ctx.gpr[2] << 16u);
    ctx.set_gpr(4, ctx.gpr[4] + ctx.gpr[2]);
    goto L_089605D8;
L_089605D8:
    ctx.set_gpr(3, ctx.gpr[4] + static_cast<std::uint32_t>(3));
    ctx.set_gpr(2, 0u + static_cast<std::uint32_t>(-4));
    ctx.set_gpr(3, ctx.gpr[3] & ctx.gpr[2]);
    ctx.set_gpr(2, rt.memory().aot_load8(ctx.gpr[18] + static_cast<std::uint32_t>(0)));
    ctx.set_gpr(2, ctx.gpr[2] << 27u);
    ctx.set_gpr(2, ctx.gpr[2] >> 28u);
    ctx.set_gpr(2, ctx.gpr[2] + static_cast<std::uint32_t>(1));
    ctx.set_gpr(2, ctx.gpr[2] << 2u);
    ctx.set_gpr(17, ctx.gpr[3] + ctx.gpr[2]);
    ctx.set_gpr(16, ctx.gpr[18] + ctx.gpr[17]);
    ctx.set_gpr(4, ctx.gpr[19] + 0u);
    ctx.set_gpr(5, ctx.gpr[18] + 0u);
    ctx.set_gpr(31, 0x08960610u);
    // nop
    goto L_0896012C;
L_08960610:
    ctx.set_gpr(3, rt.memory().aot_load32(ctx.gpr[18] + static_cast<std::uint32_t>(0)));
    ctx.set_gpr(3, ctx.gpr[3] << 11u);
    ctx.set_gpr(6, ctx.gpr[3] >> 16u);
    ctx.set_gpr(3, rt.memory().aot_load8(ctx.gpr[18] + static_cast<std::uint32_t>(3)));
    ctx.set_gpr(3, ctx.gpr[3] << 24u);
    ctx.set_gpr(3, ctx.gpr[3] >> 31u);
    ctx.set_gpr(4, ctx.gpr[3] & 255u);
    ctx.set_gpr(5, rt.memory().aot_load32(ctx.gpr[19] + static_cast<std::uint32_t>(144)));
    { const bool branch_taken = static_cast<std::int32_t>(ctx.gpr[5]) <= 0;
    // nop
      if (branch_taken) {
          goto L_08960708;
      }
      goto L_08960638;
    }
L_08960638:
    ctx.set_gpr(3, 0u + static_cast<std::uint32_t>(1));
    { const bool branch_taken = ctx.gpr[4] != ctx.gpr[3];
    // nop
      if (branch_taken) {
          goto L_08960654;
      }
      goto L_08960644;
    }
L_08960644:
    ctx.set_gpr(3, rt.memory().aot_load16(ctx.gpr[18] + static_cast<std::uint32_t>(8)));
    ctx.set_gpr(3, ctx.gpr[3] & 32767u);
    ctx.set_gpr(3, ctx.gpr[3] << 16u);
    ctx.set_gpr(6, ctx.gpr[6] + ctx.gpr[3]);
    goto L_08960654;
L_08960654:
    ctx.set_gpr(4, ctx.gpr[6] + static_cast<std::uint32_t>(3));
    ctx.set_gpr(3, 0u + static_cast<std::uint32_t>(-4));
    ctx.set_gpr(4, ctx.gpr[4] & ctx.gpr[3]);
    ctx.set_gpr(3, rt.memory().aot_load8(ctx.gpr[18] + static_cast<std::uint32_t>(0)));
    ctx.set_gpr(3, ctx.gpr[3] << 27u);
    ctx.set_gpr(3, ctx.gpr[3] >> 28u);
    ctx.set_gpr(3, ctx.gpr[3] + static_cast<std::uint32_t>(1));
    ctx.set_gpr(3, ctx.gpr[3] << 2u);
    ctx.set_gpr(3, ctx.gpr[4] + ctx.gpr[3]);
    ctx.set_gpr(3, ctx.gpr[18] + ctx.gpr[3]);
    ctx.set_gpr(3, rt.memory().aot_load8(ctx.gpr[3] + static_cast<std::uint32_t>(0)));
    ctx.set_gpr(3, ctx.gpr[3] & 1u);
    { const bool branch_taken = ctx.gpr[3] == 0u;
    // nop
      if (branch_taken) {
          goto L_08960708;
      }
      goto L_0896068C;
    }
L_0896068C:
    { const bool branch_taken = static_cast<std::int32_t>(ctx.gpr[5]) <= 0;
    // nop
      if (branch_taken) {
          goto L_08960708;
      }
      goto L_08960694;
    }
L_08960694:
    ctx.set_gpr(4, ctx.gpr[19] + 0u);
    ctx.set_gpr(5, 0u + 0u);
    ctx.set_gpr(25, rt.memory().aot_load32(ctx.gpr[19] + static_cast<std::uint32_t>(0)));
    ctx.set_gpr(25, rt.memory().aot_load32(ctx.gpr[25] + static_cast<std::uint32_t>(412)));
    jump_target = ctx.gpr[25];
    ctx.set_gpr(31, 0x089606ACu);
    // nop
    ctx.pc = jump_target;
    if (rt.invoke_chained_call(ctx, &aot_mem) && ctx.pc == 0x089606ACu) goto L_089606AC;
    return;
L_089606AC:
    ctx.set_gpr(4, ctx.gpr[19] + 0u);
    ctx.set_gpr(31, 0x089606B8u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0081_entry, 81u, 30u, 0x089482C8u>(ctx, &aot_mem) && ctx.pc == 0x089606B8u) goto L_089606B8;
    return;
L_089606B8:
    ctx.set_gpr(21, ctx.gpr[2] + 0u);
    ctx.set_gpr(4, ctx.gpr[19] + 0u);
    ctx.set_gpr(31, 0x089606C8u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0081_entry, 81u, 30u, 0x089482C8u>(ctx, &aot_mem) && ctx.pc == 0x089606C8u) goto L_089606C8;
    return;
L_089606C8:
    ctx.set_gpr(20, ctx.gpr[2] + 0u);
    ctx.set_gpr(4, ctx.gpr[19] + 0u);
    ctx.set_gpr(25, rt.memory().aot_load32(ctx.gpr[19] + static_cast<std::uint32_t>(0)));
    ctx.set_gpr(25, rt.memory().aot_load32(ctx.gpr[25] + static_cast<std::uint32_t>(456)));
    jump_target = ctx.gpr[25];
    ctx.set_gpr(31, 0x089606E0u);
    // nop
    ctx.pc = jump_target;
    if (rt.invoke_chained_call(ctx, &aot_mem) && ctx.pc == 0x089606E0u) goto L_089606E0;
    return;
L_089606E0:
    ctx.set_gpr(3, 2228u << 16u);
    ctx.set_gpr(4, rt.memory().aot_load32(ctx.gpr[3] + static_cast<std::uint32_t>(-11152)));
    ctx.set_gpr(5, ctx.gpr[21] + 0u);
    ctx.set_gpr(6, ctx.gpr[20] + 0u);
    ctx.set_gpr(7, ctx.gpr[2] + 0u);
    ctx.set_gpr(8, ctx.gpr[18] + 0u);
    ctx.set_gpr(9, 2228u << 16u);
    ctx.set_gpr(9, ctx.gpr[9] + static_cast<std::uint32_t>(-744));
    ctx.set_gpr(31, 0x08960708u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0084_entry, 84u, 456u, 0x08955F2Cu>(ctx, &aot_mem) && ctx.pc == 0x08960708u) goto L_08960708;
    return;
L_08960708:
    ctx.set_gpr(5, rt.memory().aot_load32(ctx.gpr[19] + static_cast<std::uint32_t>(144)));
    { const bool branch_taken = static_cast<std::int32_t>(ctx.gpr[5]) <= 0;
    // nop
      if (branch_taken) {
          goto L_089607C4;
      }
      goto L_08960714;
    }
L_08960714:
    ctx.set_gpr(3, rt.memory().aot_load8(ctx.gpr[18] + static_cast<std::uint32_t>(3)));
    ctx.set_gpr(3, ctx.gpr[3] << 24u);
    ctx.set_gpr(4, ctx.gpr[3] >> 31u);
    ctx.set_gpr(3, 0u + static_cast<std::uint32_t>(1));
    { const bool branch_taken = ctx.gpr[4] != ctx.gpr[3];
    // nop
      if (branch_taken) {
          goto L_0896073C;
      }
      goto L_0896072C;
    }
L_0896072C:
    ctx.set_gpr(3, rt.memory().aot_load8(ctx.gpr[18] + static_cast<std::uint32_t>(11)));
    ctx.set_gpr(3, ctx.gpr[3] & 1u);
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_08960740;
      }
      goto L_0896073C;
    }
L_0896073C:
    ctx.set_gpr(3, 0u + 0u);
    goto L_08960740;
L_08960740:
    { const bool branch_taken = ctx.gpr[3] == 0u;
    // nop
      if (branch_taken) {
          goto L_089607C4;
      }
      goto L_08960748;
    }
L_08960748:
    { const bool branch_taken = static_cast<std::int32_t>(ctx.gpr[5]) <= 0;
    // nop
      if (branch_taken) {
          goto L_089607C4;
      }
      goto L_08960750;
    }
L_08960750:
    ctx.set_gpr(4, ctx.gpr[19] + 0u);
    ctx.set_gpr(5, 0u + 0u);
    ctx.set_gpr(25, rt.memory().aot_load32(ctx.gpr[19] + static_cast<std::uint32_t>(0)));
    ctx.set_gpr(25, rt.memory().aot_load32(ctx.gpr[25] + static_cast<std::uint32_t>(412)));
    jump_target = ctx.gpr[25];
    ctx.set_gpr(31, 0x08960768u);
    // nop
    ctx.pc = jump_target;
    if (rt.invoke_chained_call(ctx, &aot_mem) && ctx.pc == 0x08960768u) goto L_08960768;
    return;
L_08960768:
    ctx.set_gpr(4, ctx.gpr[19] + 0u);
    ctx.set_gpr(31, 0x08960774u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0081_entry, 81u, 30u, 0x089482C8u>(ctx, &aot_mem) && ctx.pc == 0x08960774u) goto L_08960774;
    return;
L_08960774:
    ctx.set_gpr(21, ctx.gpr[2] + 0u);
    ctx.set_gpr(4, ctx.gpr[19] + 0u);
    ctx.set_gpr(31, 0x08960784u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0081_entry, 81u, 30u, 0x089482C8u>(ctx, &aot_mem) && ctx.pc == 0x08960784u) goto L_08960784;
    return;
L_08960784:
    ctx.set_gpr(20, ctx.gpr[2] + 0u);
    ctx.set_gpr(4, ctx.gpr[19] + 0u);
    ctx.set_gpr(25, rt.memory().aot_load32(ctx.gpr[19] + static_cast<std::uint32_t>(0)));
    ctx.set_gpr(25, rt.memory().aot_load32(ctx.gpr[25] + static_cast<std::uint32_t>(456)));
    jump_target = ctx.gpr[25];
    ctx.set_gpr(31, 0x0896079Cu);
    // nop
    ctx.pc = jump_target;
    if (rt.invoke_chained_call(ctx, &aot_mem) && ctx.pc == 0x0896079Cu) goto L_0896079C;
    return;
L_0896079C:
    ctx.set_gpr(3, 2228u << 16u);
    ctx.set_gpr(4, rt.memory().aot_load32(ctx.gpr[3] + static_cast<std::uint32_t>(-11152)));
    ctx.set_gpr(5, ctx.gpr[21] + 0u);
    ctx.set_gpr(6, ctx.gpr[20] + 0u);
    ctx.set_gpr(7, ctx.gpr[2] + 0u);
    ctx.set_gpr(8, ctx.gpr[18] + 0u);
    ctx.set_gpr(9, 2228u << 16u);
    ctx.set_gpr(9, ctx.gpr[9] + static_cast<std::uint32_t>(-688));
    ctx.set_gpr(31, 0x089607C4u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0084_entry, 84u, 456u, 0x08955F2Cu>(ctx, &aot_mem) && ctx.pc == 0x089607C4u) goto L_089607C4;
    return;
L_089607C4:
    ctx.set_gpr(3, rt.memory().aot_load32(ctx.gpr[19] + static_cast<std::uint32_t>(216)));
    ctx.set_gpr(4, ctx.gpr[3] + static_cast<std::uint32_t>(7));
    ctx.set_gpr(3, 0u + static_cast<std::uint32_t>(-8));
    ctx.set_gpr(3, ctx.gpr[4] & ctx.gpr[3]);
    ctx.set_gpr(3, ctx.gpr[17] < ctx.gpr[3] ? 1u : 0u);
    { const bool branch_taken = ctx.gpr[3] != 0u;
    // nop
      if (branch_taken) {
          goto L_08960D94;
      }
      goto L_089607E0;
    }
L_089607E0:
    ctx.set_gpr(4, rt.memory().aot_load32(ctx.gpr[19] + static_cast<std::uint32_t>(144)));
    { const bool branch_taken = static_cast<std::int32_t>(ctx.gpr[4]) <= 0;
    // nop
      if (branch_taken) {
          goto L_08960878;
      }
      goto L_089607EC;
    }
L_089607EC:
    ctx.set_gpr(3, ctx.gpr[17] & 7u);
    { const bool branch_taken = ctx.gpr[3] == 0u;
    // nop
      if (branch_taken) {
          goto L_08960878;
      }
      goto L_089607F8;
    }
L_089607F8:
    { const bool branch_taken = static_cast<std::int32_t>(ctx.gpr[4]) <= 0;
    // nop
      if (branch_taken) {
          goto L_08960878;
      }
      goto L_08960800;
    }
L_08960800:
    ctx.set_gpr(4, ctx.gpr[19] + 0u);
    ctx.set_gpr(5, 0u + 0u);
    ctx.set_gpr(25, rt.memory().aot_load32(ctx.gpr[19] + static_cast<std::uint32_t>(0)));
    ctx.set_gpr(25, rt.memory().aot_load32(ctx.gpr[25] + static_cast<std::uint32_t>(412)));
    jump_target = ctx.gpr[25];
    ctx.set_gpr(31, 0x08960818u);
    // nop
    ctx.pc = jump_target;
    if (rt.invoke_chained_call(ctx, &aot_mem) && ctx.pc == 0x08960818u) goto L_08960818;
    return;
L_08960818:
    ctx.set_gpr(4, ctx.gpr[19] + 0u);
    ctx.set_gpr(31, 0x08960824u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0081_entry, 81u, 30u, 0x089482C8u>(ctx, &aot_mem) && ctx.pc == 0x08960824u) goto L_08960824;
    return;
L_08960824:
    ctx.set_gpr(21, ctx.gpr[2] + 0u);
    ctx.set_gpr(4, ctx.gpr[19] + 0u);
    ctx.set_gpr(31, 0x08960834u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0081_entry, 81u, 30u, 0x089482C8u>(ctx, &aot_mem) && ctx.pc == 0x08960834u) goto L_08960834;
    return;
L_08960834:
    ctx.set_gpr(20, ctx.gpr[2] + 0u);
    ctx.set_gpr(4, ctx.gpr[19] + 0u);
    ctx.set_gpr(25, rt.memory().aot_load32(ctx.gpr[19] + static_cast<std::uint32_t>(0)));
    ctx.set_gpr(25, rt.memory().aot_load32(ctx.gpr[25] + static_cast<std::uint32_t>(456)));
    jump_target = ctx.gpr[25];
    ctx.set_gpr(31, 0x0896084Cu);
    // nop
    ctx.pc = jump_target;
    if (rt.invoke_chained_call(ctx, &aot_mem) && ctx.pc == 0x0896084Cu) goto L_0896084C;
    return;
L_0896084C:
    ctx.set_gpr(3, 2228u << 16u);
    ctx.set_gpr(4, rt.memory().aot_load32(ctx.gpr[3] + static_cast<std::uint32_t>(-11080)));
    ctx.set_gpr(5, ctx.gpr[21] + 0u);
    ctx.set_gpr(6, ctx.gpr[20] + 0u);
    ctx.set_gpr(7, ctx.gpr[2] + 0u);
    ctx.set_gpr(8, ctx.gpr[18] + 0u);
    ctx.set_gpr(9, 2228u << 16u);
    ctx.set_gpr(9, ctx.gpr[9] + static_cast<std::uint32_t>(-664));
    ctx.set_gpr(10, ctx.gpr[17] + 0u);
    ctx.set_gpr(31, 0x08960878u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0084_entry, 84u, 456u, 0x08955F2Cu>(ctx, &aot_mem) && ctx.pc == 0x08960878u) goto L_08960878;
    return;
L_08960878:
    ctx.set_gpr(4, rt.memory().aot_load32(ctx.gpr[19] + static_cast<std::uint32_t>(144)));
    { const bool branch_taken = static_cast<std::int32_t>(ctx.gpr[4]) <= 0;
    // nop
      if (branch_taken) {
          goto L_08960934;
      }
      goto L_08960884;
    }
L_08960884:
    ctx.set_gpr(3, rt.memory().aot_load8(ctx.gpr[18] + static_cast<std::uint32_t>(3)));
    ctx.set_gpr(3, ctx.gpr[3] << 24u);
    ctx.set_gpr(3, ctx.gpr[3] >> 31u);
    { const bool branch_taken = ctx.gpr[3] != 0u;
    // nop
      if (branch_taken) {
          goto L_089608A4;
      }
      goto L_08960898;
    }
L_08960898:
    ctx.set_gpr(3, 0u + static_cast<std::uint32_t>(4));
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_089608A8;
      }
      goto L_089608A4;
    }
L_089608A4:
    ctx.set_gpr(3, 0u + static_cast<std::uint32_t>(12));
    goto L_089608A8;
L_089608A8:
    ctx.set_gpr(3, ctx.gpr[18] + ctx.gpr[3]);
    ctx.set_gpr(3, ctx.gpr[3] & 7u);
    { const bool branch_taken = ctx.gpr[3] == 0u;
    // nop
      if (branch_taken) {
          goto L_08960934;
      }
      goto L_089608B8;
    }
L_089608B8:
    { const bool branch_taken = static_cast<std::int32_t>(ctx.gpr[4]) <= 0;
    // nop
      if (branch_taken) {
          goto L_08960934;
      }
      goto L_089608C0;
    }
L_089608C0:
    ctx.set_gpr(4, ctx.gpr[19] + 0u);
    ctx.set_gpr(5, 0u + 0u);
    ctx.set_gpr(25, rt.memory().aot_load32(ctx.gpr[19] + static_cast<std::uint32_t>(0)));
    ctx.set_gpr(25, rt.memory().aot_load32(ctx.gpr[25] + static_cast<std::uint32_t>(412)));
    jump_target = ctx.gpr[25];
    ctx.set_gpr(31, 0x089608D8u);
    // nop
    ctx.pc = jump_target;
    if (rt.invoke_chained_call(ctx, &aot_mem) && ctx.pc == 0x089608D8u) goto L_089608D8;
    return;
L_089608D8:
    ctx.set_gpr(4, ctx.gpr[19] + 0u);
    ctx.set_gpr(31, 0x089608E4u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0081_entry, 81u, 30u, 0x089482C8u>(ctx, &aot_mem) && ctx.pc == 0x089608E4u) goto L_089608E4;
    return;
L_089608E4:
    ctx.set_gpr(21, ctx.gpr[2] + 0u);
    ctx.set_gpr(4, ctx.gpr[19] + 0u);
    ctx.set_gpr(31, 0x089608F4u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0081_entry, 81u, 30u, 0x089482C8u>(ctx, &aot_mem) && ctx.pc == 0x089608F4u) goto L_089608F4;
    return;
L_089608F4:
    ctx.set_gpr(20, ctx.gpr[2] + 0u);
    ctx.set_gpr(4, ctx.gpr[19] + 0u);
    ctx.set_gpr(25, rt.memory().aot_load32(ctx.gpr[19] + static_cast<std::uint32_t>(0)));
    ctx.set_gpr(25, rt.memory().aot_load32(ctx.gpr[25] + static_cast<std::uint32_t>(456)));
    jump_target = ctx.gpr[25];
    ctx.set_gpr(31, 0x0896090Cu);
    // nop
    ctx.pc = jump_target;
    if (rt.invoke_chained_call(ctx, &aot_mem) && ctx.pc == 0x0896090Cu) goto L_0896090C;
    return;
L_0896090C:
    ctx.set_gpr(3, 2228u << 16u);
    ctx.set_gpr(4, rt.memory().aot_load32(ctx.gpr[3] + static_cast<std::uint32_t>(-11152)));
    ctx.set_gpr(5, ctx.gpr[21] + 0u);
    ctx.set_gpr(6, ctx.gpr[20] + 0u);
    ctx.set_gpr(7, ctx.gpr[2] + 0u);
    ctx.set_gpr(8, ctx.gpr[18] + 0u);
    ctx.set_gpr(9, 2228u << 16u);
    ctx.set_gpr(9, ctx.gpr[9] + static_cast<std::uint32_t>(-632));
    ctx.set_gpr(31, 0x08960934u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0084_entry, 84u, 456u, 0x08955F2Cu>(ctx, &aot_mem) && ctx.pc == 0x08960934u) goto L_08960934;
    return;
L_08960934:
    ctx.set_gpr(4, rt.memory().aot_load32(ctx.gpr[19] + static_cast<std::uint32_t>(144)));
    { const bool branch_taken = static_cast<std::int32_t>(ctx.gpr[4]) <= 0;
    // nop
      if (branch_taken) {
          goto L_089609CC;
      }
      goto L_08960940;
    }
L_08960940:
    ctx.set_gpr(3, rt.memory().aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(-4)));
    { const bool branch_taken = ctx.gpr[17] == ctx.gpr[3];
    // nop
      if (branch_taken) {
          goto L_089609CC;
      }
      goto L_0896094C;
    }
L_0896094C:
    { const bool branch_taken = static_cast<std::int32_t>(ctx.gpr[4]) <= 0;
    // nop
      if (branch_taken) {
          goto L_089609CC;
      }
      goto L_08960954;
    }
L_08960954:
    ctx.set_gpr(4, ctx.gpr[19] + 0u);
    ctx.set_gpr(5, 0u + 0u);
    ctx.set_gpr(25, rt.memory().aot_load32(ctx.gpr[19] + static_cast<std::uint32_t>(0)));
    ctx.set_gpr(25, rt.memory().aot_load32(ctx.gpr[25] + static_cast<std::uint32_t>(412)));
    jump_target = ctx.gpr[25];
    ctx.set_gpr(31, 0x0896096Cu);
    // nop
    ctx.pc = jump_target;
    if (rt.invoke_chained_call(ctx, &aot_mem) && ctx.pc == 0x0896096Cu) goto L_0896096C;
    return;
L_0896096C:
    ctx.set_gpr(4, ctx.gpr[19] + 0u);
    ctx.set_gpr(31, 0x08960978u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0081_entry, 81u, 30u, 0x089482C8u>(ctx, &aot_mem) && ctx.pc == 0x08960978u) goto L_08960978;
    return;
L_08960978:
    ctx.set_gpr(21, ctx.gpr[2] + 0u);
    ctx.set_gpr(4, ctx.gpr[19] + 0u);
    ctx.set_gpr(31, 0x08960988u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0081_entry, 81u, 30u, 0x089482C8u>(ctx, &aot_mem) && ctx.pc == 0x08960988u) goto L_08960988;
    return;
L_08960988:
    ctx.set_gpr(20, ctx.gpr[2] + 0u);
    ctx.set_gpr(4, ctx.gpr[19] + 0u);
    ctx.set_gpr(25, rt.memory().aot_load32(ctx.gpr[19] + static_cast<std::uint32_t>(0)));
    ctx.set_gpr(25, rt.memory().aot_load32(ctx.gpr[25] + static_cast<std::uint32_t>(456)));
    jump_target = ctx.gpr[25];
    ctx.set_gpr(31, 0x089609A0u);
    // nop
    ctx.pc = jump_target;
    if (rt.invoke_chained_call(ctx, &aot_mem) && ctx.pc == 0x089609A0u) goto L_089609A0;
    return;
L_089609A0:
    ctx.set_gpr(3, 2228u << 16u);
    ctx.set_gpr(4, rt.memory().aot_load32(ctx.gpr[3] + static_cast<std::uint32_t>(-11080)));
    ctx.set_gpr(5, ctx.gpr[21] + 0u);
    ctx.set_gpr(6, ctx.gpr[20] + 0u);
    ctx.set_gpr(7, ctx.gpr[2] + 0u);
    ctx.set_gpr(8, ctx.gpr[18] + 0u);
    ctx.set_gpr(9, 2228u << 16u);
    ctx.set_gpr(9, ctx.gpr[9] + static_cast<std::uint32_t>(-584));
    ctx.set_gpr(10, ctx.gpr[17] + 0u);
    ctx.set_gpr(31, 0x089609CCu);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0084_entry, 84u, 456u, 0x08955F2Cu>(ctx, &aot_mem) && ctx.pc == 0x089609CCu) goto L_089609CC;
    return;
L_089609CC:
    ctx.set_gpr(4, rt.memory().aot_load32(ctx.gpr[19] + static_cast<std::uint32_t>(144)));
    { const bool branch_taken = static_cast<std::int32_t>(ctx.gpr[4]) <= 0;
    // nop
      if (branch_taken) {
          goto L_08960A64;
      }
      goto L_089609D8;
    }
L_089609D8:
    ctx.set_gpr(3, rt.memory().aot_load8(ctx.gpr[18] + static_cast<std::uint32_t>(0)));
    ctx.set_gpr(3, ctx.gpr[3] & 1u);
    { const bool branch_taken = ctx.gpr[3] != 0u;
    // nop
      if (branch_taken) {
          goto L_08960A64;
      }
      goto L_089609E8;
    }
L_089609E8:
    { const bool branch_taken = static_cast<std::int32_t>(ctx.gpr[4]) <= 0;
    // nop
      if (branch_taken) {
          goto L_08960A64;
      }
      goto L_089609F0;
    }
L_089609F0:
    ctx.set_gpr(4, ctx.gpr[19] + 0u);
    ctx.set_gpr(5, 0u + 0u);
    ctx.set_gpr(25, rt.memory().aot_load32(ctx.gpr[19] + static_cast<std::uint32_t>(0)));
    ctx.set_gpr(25, rt.memory().aot_load32(ctx.gpr[25] + static_cast<std::uint32_t>(412)));
    jump_target = ctx.gpr[25];
    ctx.set_gpr(31, 0x08960A08u);
    // nop
    ctx.pc = jump_target;
    if (rt.invoke_chained_call(ctx, &aot_mem) && ctx.pc == 0x08960A08u) goto L_08960A08;
    return;
L_08960A08:
    ctx.set_gpr(4, ctx.gpr[19] + 0u);
    ctx.set_gpr(31, 0x08960A14u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0081_entry, 81u, 30u, 0x089482C8u>(ctx, &aot_mem) && ctx.pc == 0x08960A14u) goto L_08960A14;
    return;
L_08960A14:
    ctx.set_gpr(20, ctx.gpr[2] + 0u);
    ctx.set_gpr(4, ctx.gpr[19] + 0u);
    ctx.set_gpr(31, 0x08960A24u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0081_entry, 81u, 30u, 0x089482C8u>(ctx, &aot_mem) && ctx.pc == 0x08960A24u) goto L_08960A24;
    return;
L_08960A24:
    ctx.set_gpr(17, ctx.gpr[2] + 0u);
    ctx.set_gpr(4, ctx.gpr[19] + 0u);
    ctx.set_gpr(25, rt.memory().aot_load32(ctx.gpr[19] + static_cast<std::uint32_t>(0)));
    ctx.set_gpr(25, rt.memory().aot_load32(ctx.gpr[25] + static_cast<std::uint32_t>(456)));
    jump_target = ctx.gpr[25];
    ctx.set_gpr(31, 0x08960A3Cu);
    // nop
    ctx.pc = jump_target;
    if (rt.invoke_chained_call(ctx, &aot_mem) && ctx.pc == 0x08960A3Cu) goto L_08960A3C;
    return;
L_08960A3C:
    ctx.set_gpr(3, 2228u << 16u);
    ctx.set_gpr(4, rt.memory().aot_load32(ctx.gpr[3] + static_cast<std::uint32_t>(-11152)));
    ctx.set_gpr(5, ctx.gpr[20] + 0u);
    ctx.set_gpr(6, ctx.gpr[17] + 0u);
    ctx.set_gpr(7, ctx.gpr[2] + 0u);
    ctx.set_gpr(8, ctx.gpr[18] + 0u);
    ctx.set_gpr(9, 2228u << 16u);
    ctx.set_gpr(9, ctx.gpr[9] + static_cast<std::uint32_t>(-528));
    ctx.set_gpr(31, 0x08960A64u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0084_entry, 84u, 456u, 0x08955F2Cu>(ctx, &aot_mem) && ctx.pc == 0x08960A64u) goto L_08960A64;
    return;
L_08960A64:
    ctx.set_gpr(3, rt.memory().aot_load32(ctx.gpr[19] + static_cast<std::uint32_t>(144)));
    { const bool branch_taken = static_cast<std::int32_t>(ctx.gpr[3]) <= 0;
    // nop
      if (branch_taken) {
          goto L_08960B64;
      }
      goto L_08960A70;
    }
L_08960A70:
    ctx.set_gpr(4, rt.memory().aot_load32(ctx.gpr[22] + static_cast<std::uint32_t>(44)));
    { const bool branch_taken = ctx.gpr[16] == ctx.gpr[4];
    // nop
      if (branch_taken) {
          goto L_08960B64;
      }
      goto L_08960A7C;
    }
L_08960A7C:
    ctx.set_gpr(4, rt.memory().aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(0)));
    ctx.set_gpr(4, ctx.gpr[4] << 11u);
    ctx.set_gpr(6, ctx.gpr[4] >> 16u);
    ctx.set_gpr(4, rt.memory().aot_load8(ctx.gpr[16] + static_cast<std::uint32_t>(3)));
    ctx.set_gpr(4, ctx.gpr[4] << 24u);
    ctx.set_gpr(5, ctx.gpr[4] >> 31u);
    ctx.set_gpr(4, 0u + static_cast<std::uint32_t>(1));
    { const bool branch_taken = ctx.gpr[5] != ctx.gpr[4];
    // nop
      if (branch_taken) {
          goto L_08960AB0;
      }
      goto L_08960AA0;
    }
L_08960AA0:
    ctx.set_gpr(4, rt.memory().aot_load16(ctx.gpr[16] + static_cast<std::uint32_t>(8)));
    ctx.set_gpr(4, ctx.gpr[4] & 32767u);
    ctx.set_gpr(4, ctx.gpr[4] << 16u);
    ctx.set_gpr(6, ctx.gpr[6] + ctx.gpr[4]);
    goto L_08960AB0;
L_08960AB0:
    ctx.set_gpr(5, ctx.gpr[6] + static_cast<std::uint32_t>(3));
    ctx.set_gpr(4, 0u + static_cast<std::uint32_t>(-4));
    ctx.set_gpr(5, ctx.gpr[5] & ctx.gpr[4]);
    ctx.set_gpr(4, rt.memory().aot_load8(ctx.gpr[16] + static_cast<std::uint32_t>(0)));
    ctx.set_gpr(4, ctx.gpr[4] << 27u);
    ctx.set_gpr(4, ctx.gpr[4] >> 28u);
    ctx.set_gpr(4, ctx.gpr[4] + static_cast<std::uint32_t>(1));
    ctx.set_gpr(4, ctx.gpr[4] << 2u);
    ctx.set_gpr(4, ctx.gpr[5] + ctx.gpr[4]);
    ctx.set_gpr(4, ctx.gpr[16] + ctx.gpr[4]);
    ctx.set_gpr(4, rt.memory().aot_load8(ctx.gpr[4] + static_cast<std::uint32_t>(0)));
    ctx.set_gpr(4, ctx.gpr[4] & 1u);
    { const bool branch_taken = ctx.gpr[4] != 0u;
    // nop
      if (branch_taken) {
          goto L_08960B64;
      }
      goto L_08960AE8;
    }
L_08960AE8:
    { const bool branch_taken = static_cast<std::int32_t>(ctx.gpr[3]) <= 0;
    // nop
      if (branch_taken) {
          goto L_08960B64;
      }
      goto L_08960AF0;
    }
L_08960AF0:
    ctx.set_gpr(4, ctx.gpr[19] + 0u);
    ctx.set_gpr(5, 0u + 0u);
    ctx.set_gpr(25, rt.memory().aot_load32(ctx.gpr[19] + static_cast<std::uint32_t>(0)));
    ctx.set_gpr(25, rt.memory().aot_load32(ctx.gpr[25] + static_cast<std::uint32_t>(412)));
    jump_target = ctx.gpr[25];
    ctx.set_gpr(31, 0x08960B08u);
    // nop
    ctx.pc = jump_target;
    if (rt.invoke_chained_call(ctx, &aot_mem) && ctx.pc == 0x08960B08u) goto L_08960B08;
    return;
L_08960B08:
    ctx.set_gpr(4, ctx.gpr[19] + 0u);
    ctx.set_gpr(31, 0x08960B14u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0081_entry, 81u, 30u, 0x089482C8u>(ctx, &aot_mem) && ctx.pc == 0x08960B14u) goto L_08960B14;
    return;
L_08960B14:
    ctx.set_gpr(17, ctx.gpr[2] + 0u);
    ctx.set_gpr(4, ctx.gpr[19] + 0u);
    ctx.set_gpr(31, 0x08960B24u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0081_entry, 81u, 30u, 0x089482C8u>(ctx, &aot_mem) && ctx.pc == 0x08960B24u) goto L_08960B24;
    return;
L_08960B24:
    ctx.set_gpr(16, ctx.gpr[2] + 0u);
    ctx.set_gpr(4, ctx.gpr[19] + 0u);
    ctx.set_gpr(25, rt.memory().aot_load32(ctx.gpr[19] + static_cast<std::uint32_t>(0)));
    ctx.set_gpr(25, rt.memory().aot_load32(ctx.gpr[25] + static_cast<std::uint32_t>(456)));
    jump_target = ctx.gpr[25];
    ctx.set_gpr(31, 0x08960B3Cu);
    // nop
    ctx.pc = jump_target;
    if (rt.invoke_chained_call(ctx, &aot_mem) && ctx.pc == 0x08960B3Cu) goto L_08960B3C;
    return;
L_08960B3C:
    ctx.set_gpr(3, 2228u << 16u);
    ctx.set_gpr(4, rt.memory().aot_load32(ctx.gpr[3] + static_cast<std::uint32_t>(-11152)));
    ctx.set_gpr(5, ctx.gpr[17] + 0u);
    ctx.set_gpr(6, ctx.gpr[16] + 0u);
    ctx.set_gpr(7, ctx.gpr[2] + 0u);
    ctx.set_gpr(8, ctx.gpr[18] + 0u);
    ctx.set_gpr(9, 2228u << 16u);
    ctx.set_gpr(9, ctx.gpr[9] + static_cast<std::uint32_t>(-476));
    ctx.set_gpr(31, 0x08960B64u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0084_entry, 84u, 456u, 0x08955F2Cu>(ctx, &aot_mem) && ctx.pc == 0x08960B64u) goto L_08960B64;
    return;
L_08960B64:
    ctx.set_gpr(5, rt.memory().aot_load32(ctx.gpr[19] + static_cast<std::uint32_t>(144)));
    { const bool branch_taken = static_cast<std::int32_t>(ctx.gpr[5]) <= 0;
    // nop
      if (branch_taken) {
          goto L_08960C78;
      }
      goto L_08960B70;
    }
L_08960B70:
    ctx.set_gpr(3, rt.memory().aot_load8(ctx.gpr[18] + static_cast<std::uint32_t>(3)));
    ctx.set_gpr(3, ctx.gpr[3] << 24u);
    ctx.set_gpr(3, ctx.gpr[3] >> 31u);
    ctx.set_gpr(4, ctx.gpr[3] & 255u);
    { const bool branch_taken = ctx.gpr[4] != 0u;
    // nop
      if (branch_taken) {
          goto L_08960B94;
      }
      goto L_08960B88;
    }
L_08960B88:
    ctx.set_gpr(3, 0u + static_cast<std::uint32_t>(4));
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_08960B98;
      }
      goto L_08960B94;
    }
L_08960B94:
    ctx.set_gpr(3, 0u + static_cast<std::uint32_t>(12));
    goto L_08960B98;
L_08960B98:
    ctx.set_gpr(3, ctx.gpr[18] + ctx.gpr[3]);
    ctx.set_gpr(3, rt.memory().aot_load32(ctx.gpr[3] + static_cast<std::uint32_t>(0)));
    { const bool branch_taken = ctx.gpr[3] == 0u;
    // nop
      if (branch_taken) {
          goto L_08960BFC;
      }
      goto L_08960BA8;
    }
L_08960BA8:
    { const bool branch_taken = ctx.gpr[4] != 0u;
    // nop
      if (branch_taken) {
          goto L_08960BBC;
      }
      goto L_08960BB0;
    }
L_08960BB0:
    ctx.set_gpr(3, 0u + static_cast<std::uint32_t>(4));
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_08960BC0;
      }
      goto L_08960BBC;
    }
L_08960BBC:
    ctx.set_gpr(3, 0u + static_cast<std::uint32_t>(12));
    goto L_08960BC0;
L_08960BC0:
    ctx.set_gpr(3, ctx.gpr[18] + ctx.gpr[3]);
    ctx.set_gpr(4, rt.memory().aot_load32(ctx.gpr[3] + static_cast<std::uint32_t>(0)));
    ctx.set_gpr(3, rt.memory().aot_load8(ctx.gpr[4] + static_cast<std::uint32_t>(3)));
    ctx.set_gpr(3, ctx.gpr[3] << 24u);
    ctx.set_gpr(3, ctx.gpr[3] >> 31u);
    { const bool branch_taken = ctx.gpr[3] != 0u;
    // nop
      if (branch_taken) {
          goto L_08960BE8;
      }
      goto L_08960BDC;
    }
L_08960BDC:
    ctx.set_gpr(3, 0u + static_cast<std::uint32_t>(4));
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_08960BEC;
      }
      goto L_08960BE8;
    }
L_08960BE8:
    ctx.set_gpr(3, 0u + static_cast<std::uint32_t>(12));
    goto L_08960BEC;
L_08960BEC:
    ctx.set_gpr(3, ctx.gpr[4] + ctx.gpr[3]);
    ctx.set_gpr(3, rt.memory().aot_load32(ctx.gpr[3] + static_cast<std::uint32_t>(4)));
    { const bool branch_taken = ctx.gpr[3] == ctx.gpr[18];
    // nop
      if (branch_taken) {
          goto L_08960C78;
      }
      goto L_08960BFC;
    }
L_08960BFC:
    { const bool branch_taken = static_cast<std::int32_t>(ctx.gpr[5]) <= 0;
    // nop
      if (branch_taken) {
          goto L_08960C78;
      }
      goto L_08960C04;
    }
L_08960C04:
    ctx.set_gpr(4, ctx.gpr[19] + 0u);
    ctx.set_gpr(5, 0u + 0u);
    ctx.set_gpr(25, rt.memory().aot_load32(ctx.gpr[19] + static_cast<std::uint32_t>(0)));
    ctx.set_gpr(25, rt.memory().aot_load32(ctx.gpr[25] + static_cast<std::uint32_t>(412)));
    jump_target = ctx.gpr[25];
    ctx.set_gpr(31, 0x08960C1Cu);
    // nop
    ctx.pc = jump_target;
    if (rt.invoke_chained_call(ctx, &aot_mem) && ctx.pc == 0x08960C1Cu) goto L_08960C1C;
    return;
L_08960C1C:
    ctx.set_gpr(4, ctx.gpr[19] + 0u);
    ctx.set_gpr(31, 0x08960C28u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0081_entry, 81u, 30u, 0x089482C8u>(ctx, &aot_mem) && ctx.pc == 0x08960C28u) goto L_08960C28;
    return;
L_08960C28:
    ctx.set_gpr(17, ctx.gpr[2] + 0u);
    ctx.set_gpr(4, ctx.gpr[19] + 0u);
    ctx.set_gpr(31, 0x08960C38u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0081_entry, 81u, 30u, 0x089482C8u>(ctx, &aot_mem) && ctx.pc == 0x08960C38u) goto L_08960C38;
    return;
L_08960C38:
    ctx.set_gpr(16, ctx.gpr[2] + 0u);
    ctx.set_gpr(4, ctx.gpr[19] + 0u);
    ctx.set_gpr(25, rt.memory().aot_load32(ctx.gpr[19] + static_cast<std::uint32_t>(0)));
    ctx.set_gpr(25, rt.memory().aot_load32(ctx.gpr[25] + static_cast<std::uint32_t>(456)));
    jump_target = ctx.gpr[25];
    ctx.set_gpr(31, 0x08960C50u);
    // nop
    ctx.pc = jump_target;
    if (rt.invoke_chained_call(ctx, &aot_mem) && ctx.pc == 0x08960C50u) goto L_08960C50;
    return;
L_08960C50:
    ctx.set_gpr(3, 2228u << 16u);
    ctx.set_gpr(4, rt.memory().aot_load32(ctx.gpr[3] + static_cast<std::uint32_t>(-11152)));
    ctx.set_gpr(5, ctx.gpr[17] + 0u);
    ctx.set_gpr(6, ctx.gpr[16] + 0u);
    ctx.set_gpr(7, ctx.gpr[2] + 0u);
    ctx.set_gpr(8, ctx.gpr[18] + 0u);
    ctx.set_gpr(9, 2228u << 16u);
    ctx.set_gpr(9, ctx.gpr[9] + static_cast<std::uint32_t>(-416));
    ctx.set_gpr(31, 0x08960C78u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0084_entry, 84u, 456u, 0x08955F2Cu>(ctx, &aot_mem) && ctx.pc == 0x08960C78u) goto L_08960C78;
    return;
L_08960C78:
    ctx.set_gpr(5, rt.memory().aot_load32(ctx.gpr[19] + static_cast<std::uint32_t>(144)));
    { const bool branch_taken = static_cast<std::int32_t>(ctx.gpr[5]) <= 0;
    // nop
      if (branch_taken) {
          goto L_08960E2C;
      }
      goto L_08960C84;
    }
L_08960C84:
    ctx.set_gpr(3, rt.memory().aot_load8(ctx.gpr[18] + static_cast<std::uint32_t>(3)));
    ctx.set_gpr(3, ctx.gpr[3] << 24u);
    ctx.set_gpr(3, ctx.gpr[3] >> 31u);
    ctx.set_gpr(4, ctx.gpr[3] & 255u);
    { const bool branch_taken = ctx.gpr[4] != 0u;
    // nop
      if (branch_taken) {
          goto L_08960CA8;
      }
      goto L_08960C9C;
    }
L_08960C9C:
    ctx.set_gpr(3, 0u + static_cast<std::uint32_t>(4));
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_08960CAC;
      }
      goto L_08960CA8;
    }
L_08960CA8:
    ctx.set_gpr(3, 0u + static_cast<std::uint32_t>(12));
    goto L_08960CAC;
L_08960CAC:
    ctx.set_gpr(3, ctx.gpr[18] + ctx.gpr[3]);
    ctx.set_gpr(3, rt.memory().aot_load32(ctx.gpr[3] + static_cast<std::uint32_t>(4)));
    { const bool branch_taken = ctx.gpr[3] == 0u;
    // nop
      if (branch_taken) {
          goto L_08960D10;
      }
      goto L_08960CBC;
    }
L_08960CBC:
    { const bool branch_taken = ctx.gpr[4] != 0u;
    // nop
      if (branch_taken) {
          goto L_08960CD0;
      }
      goto L_08960CC4;
    }
L_08960CC4:
    ctx.set_gpr(3, 0u + static_cast<std::uint32_t>(4));
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_08960CD4;
      }
      goto L_08960CD0;
    }
L_08960CD0:
    ctx.set_gpr(3, 0u + static_cast<std::uint32_t>(12));
    goto L_08960CD4;
L_08960CD4:
    ctx.set_gpr(3, ctx.gpr[18] + ctx.gpr[3]);
    ctx.set_gpr(4, rt.memory().aot_load32(ctx.gpr[3] + static_cast<std::uint32_t>(4)));
    ctx.set_gpr(3, rt.memory().aot_load8(ctx.gpr[4] + static_cast<std::uint32_t>(3)));
    ctx.set_gpr(3, ctx.gpr[3] << 24u);
    ctx.set_gpr(3, ctx.gpr[3] >> 31u);
    { const bool branch_taken = ctx.gpr[3] != 0u;
    // nop
      if (branch_taken) {
          goto L_08960CFC;
      }
      goto L_08960CF0;
    }
L_08960CF0:
    ctx.set_gpr(3, 0u + static_cast<std::uint32_t>(4));
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_08960D00;
      }
      goto L_08960CFC;
    }
L_08960CFC:
    ctx.set_gpr(3, 0u + static_cast<std::uint32_t>(12));
    goto L_08960D00;
L_08960D00:
    ctx.set_gpr(3, ctx.gpr[4] + ctx.gpr[3]);
    ctx.set_gpr(3, rt.memory().aot_load32(ctx.gpr[3] + static_cast<std::uint32_t>(0)));
    { const bool branch_taken = ctx.gpr[3] == ctx.gpr[18];
    // nop
      if (branch_taken) {
          goto L_08960E2C;
      }
      goto L_08960D10;
    }
L_08960D10:
    { const bool branch_taken = static_cast<std::int32_t>(ctx.gpr[5]) <= 0;
    // nop
      if (branch_taken) {
          goto L_08960E2C;
      }
      goto L_08960D18;
    }
L_08960D18:
    ctx.set_gpr(4, ctx.gpr[19] + 0u);
    ctx.set_gpr(5, 0u + 0u);
    ctx.set_gpr(25, rt.memory().aot_load32(ctx.gpr[19] + static_cast<std::uint32_t>(0)));
    ctx.set_gpr(25, rt.memory().aot_load32(ctx.gpr[25] + static_cast<std::uint32_t>(412)));
    jump_target = ctx.gpr[25];
    ctx.set_gpr(31, 0x08960D30u);
    // nop
    ctx.pc = jump_target;
    if (rt.invoke_chained_call(ctx, &aot_mem) && ctx.pc == 0x08960D30u) goto L_08960D30;
    return;
L_08960D30:
    ctx.set_gpr(4, ctx.gpr[19] + 0u);
    ctx.set_gpr(31, 0x08960D3Cu);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0081_entry, 81u, 30u, 0x089482C8u>(ctx, &aot_mem) && ctx.pc == 0x08960D3Cu) goto L_08960D3C;
    return;
L_08960D3C:
    ctx.set_gpr(17, ctx.gpr[2] + 0u);
    ctx.set_gpr(4, ctx.gpr[19] + 0u);
    ctx.set_gpr(31, 0x08960D4Cu);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0081_entry, 81u, 30u, 0x089482C8u>(ctx, &aot_mem) && ctx.pc == 0x08960D4Cu) goto L_08960D4C;
    return;
L_08960D4C:
    ctx.set_gpr(16, ctx.gpr[2] + 0u);
    ctx.set_gpr(4, ctx.gpr[19] + 0u);
    ctx.set_gpr(25, rt.memory().aot_load32(ctx.gpr[19] + static_cast<std::uint32_t>(0)));
    ctx.set_gpr(25, rt.memory().aot_load32(ctx.gpr[25] + static_cast<std::uint32_t>(456)));
    jump_target = ctx.gpr[25];
    ctx.set_gpr(31, 0x08960D64u);
    // nop
    ctx.pc = jump_target;
    if (rt.invoke_chained_call(ctx, &aot_mem) && ctx.pc == 0x08960D64u) goto L_08960D64;
    return;
L_08960D64:
    ctx.set_gpr(3, 2228u << 16u);
    ctx.set_gpr(4, rt.memory().aot_load32(ctx.gpr[3] + static_cast<std::uint32_t>(-11152)));
    ctx.set_gpr(5, ctx.gpr[17] + 0u);
    ctx.set_gpr(6, ctx.gpr[16] + 0u);
    ctx.set_gpr(7, ctx.gpr[2] + 0u);
    ctx.set_gpr(8, ctx.gpr[18] + 0u);
    ctx.set_gpr(9, 2228u << 16u);
    ctx.set_gpr(9, ctx.gpr[9] + static_cast<std::uint32_t>(-376));
    ctx.set_gpr(31, 0x08960D8Cu);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0084_entry, 84u, 456u, 0x08955F2Cu>(ctx, &aot_mem) && ctx.pc == 0x08960D8Cu) goto L_08960D8C;
    return;
L_08960D8C:
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_08960E2C;
      }
      goto L_08960D94;
    }
L_08960D94:
    ctx.set_gpr(4, rt.memory().aot_load32(ctx.gpr[19] + static_cast<std::uint32_t>(144)));
    { const bool branch_taken = static_cast<std::int32_t>(ctx.gpr[4]) <= 0;
    // nop
      if (branch_taken) {
          goto L_08960E2C;
      }
      goto L_08960DA0;
    }
L_08960DA0:
    ctx.set_gpr(3, 0u + static_cast<std::uint32_t>(4));
    { const bool branch_taken = ctx.gpr[17] == ctx.gpr[3];
    // nop
      if (branch_taken) {
          goto L_08960E2C;
      }
      goto L_08960DAC;
    }
L_08960DAC:
    { const bool branch_taken = static_cast<std::int32_t>(ctx.gpr[4]) <= 0;
    // nop
      if (branch_taken) {
          goto L_08960E2C;
      }
      goto L_08960DB4;
    }
L_08960DB4:
    ctx.set_gpr(4, ctx.gpr[19] + 0u);
    ctx.set_gpr(5, 0u + 0u);
    ctx.set_gpr(25, rt.memory().aot_load32(ctx.gpr[19] + static_cast<std::uint32_t>(0)));
    ctx.set_gpr(25, rt.memory().aot_load32(ctx.gpr[25] + static_cast<std::uint32_t>(412)));
    jump_target = ctx.gpr[25];
    ctx.set_gpr(31, 0x08960DCCu);
    // nop
    ctx.pc = jump_target;
    if (rt.invoke_chained_call(ctx, &aot_mem) && ctx.pc == 0x08960DCCu) goto L_08960DCC;
    return;
L_08960DCC:
    ctx.set_gpr(4, ctx.gpr[19] + 0u);
    ctx.set_gpr(31, 0x08960DD8u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0081_entry, 81u, 30u, 0x089482C8u>(ctx, &aot_mem) && ctx.pc == 0x08960DD8u) goto L_08960DD8;
    return;
L_08960DD8:
    ctx.set_gpr(20, ctx.gpr[2] + 0u);
    ctx.set_gpr(4, ctx.gpr[19] + 0u);
    ctx.set_gpr(31, 0x08960DE8u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0081_entry, 81u, 30u, 0x089482C8u>(ctx, &aot_mem) && ctx.pc == 0x08960DE8u) goto L_08960DE8;
    return;
L_08960DE8:
    ctx.set_gpr(16, ctx.gpr[2] + 0u);
    ctx.set_gpr(4, ctx.gpr[19] + 0u);
    ctx.set_gpr(25, rt.memory().aot_load32(ctx.gpr[19] + static_cast<std::uint32_t>(0)));
    ctx.set_gpr(25, rt.memory().aot_load32(ctx.gpr[25] + static_cast<std::uint32_t>(456)));
    jump_target = ctx.gpr[25];
    ctx.set_gpr(31, 0x08960E00u);
    // nop
    ctx.pc = jump_target;
    if (rt.invoke_chained_call(ctx, &aot_mem) && ctx.pc == 0x08960E00u) goto L_08960E00;
    return;
L_08960E00:
    ctx.set_gpr(3, 2228u << 16u);
    ctx.set_gpr(4, rt.memory().aot_load32(ctx.gpr[3] + static_cast<std::uint32_t>(-11080)));
    ctx.set_gpr(5, ctx.gpr[20] + 0u);
    ctx.set_gpr(6, ctx.gpr[16] + 0u);
    ctx.set_gpr(7, ctx.gpr[2] + 0u);
    ctx.set_gpr(8, ctx.gpr[18] + 0u);
    ctx.set_gpr(9, 2228u << 16u);
    ctx.set_gpr(9, ctx.gpr[9] + static_cast<std::uint32_t>(-336));
    ctx.set_gpr(10, ctx.gpr[17] + 0u);
    ctx.set_gpr(31, 0x08960E2Cu);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0084_entry, 84u, 456u, 0x08955F2Cu>(ctx, &aot_mem) && ctx.pc == 0x08960E2Cu) goto L_08960E2C;
    return;
L_08960E2C:
    ctx.set_gpr(31, rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(28)));
    ctx.set_gpr(22, rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(24)));
    ctx.set_gpr(21, rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(20)));
    ctx.set_gpr(20, rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(16)));
    ctx.set_gpr(19, rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(12)));
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
L_08960E58:
    ctx.set_gpr(29, ctx.gpr[29] + static_cast<std::uint32_t>(-32));
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(28), ctx.gpr[31]);
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(24), ctx.gpr[22]);
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(20), ctx.gpr[21]);
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(16), ctx.gpr[20]);
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(12), ctx.gpr[19]);
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(8), ctx.gpr[18]);
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(4), ctx.gpr[17]);
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(0), ctx.gpr[16]);
    ctx.set_gpr(21, ctx.gpr[4] + 0u);
    ctx.set_gpr(20, ctx.gpr[5] + 0u);
    ctx.set_gpr(17, rt.memory().aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(212)));
    ctx.set_gpr(31, 0x08960E90u);
    // nop
    goto L_0896012C;
L_08960E90:
    ctx.set_gpr(3, rt.memory().aot_load8(ctx.gpr[20] + static_cast<std::uint32_t>(3)));
    ctx.set_gpr(3, ctx.gpr[3] << 24u);
    ctx.set_gpr(3, ctx.gpr[3] >> 31u);
    ctx.set_gpr(4, ctx.gpr[3] & 255u);
    ctx.set_gpr(3, 0u + static_cast<std::uint32_t>(1));
    { const bool branch_taken = ctx.gpr[4] != ctx.gpr[3];
    // nop
      if (branch_taken) {
          goto L_08960EBC;
      }
      goto L_08960EAC;
    }
L_08960EAC:
    ctx.set_gpr(3, rt.memory().aot_load8(ctx.gpr[20] + static_cast<std::uint32_t>(11)));
    ctx.set_gpr(3, ctx.gpr[3] & 1u);
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_08960EC0;
      }
      goto L_08960EBC;
    }
L_08960EBC:
    ctx.set_gpr(3, 0u + 0u);
    goto L_08960EC0;
L_08960EC0:
    { const bool branch_taken = ctx.gpr[3] != 0u;
    // nop
      if (branch_taken) {
          goto L_08961398;
      }
      goto L_08960EC8;
    }
L_08960EC8:
    ctx.set_gpr(5, rt.memory().aot_load32(ctx.gpr[21] + static_cast<std::uint32_t>(144)));
    { const bool branch_taken = static_cast<std::int32_t>(ctx.gpr[5]) <= 0;
    // nop
      if (branch_taken) {
          goto L_08960FB0;
      }
      goto L_08960ED4;
    }
L_08960ED4:
    ctx.set_gpr(3, rt.memory().aot_load32(ctx.gpr[20] + static_cast<std::uint32_t>(0)));
    ctx.set_gpr(3, ctx.gpr[3] << 11u);
    ctx.set_gpr(6, ctx.gpr[3] >> 16u);
    ctx.set_gpr(3, 0u + static_cast<std::uint32_t>(1));
    { const bool branch_taken = ctx.gpr[4] != ctx.gpr[3];
    // nop
      if (branch_taken) {
          goto L_08960EFC;
      }
      goto L_08960EEC;
    }
L_08960EEC:
    ctx.set_gpr(3, rt.memory().aot_load16(ctx.gpr[20] + static_cast<std::uint32_t>(8)));
    ctx.set_gpr(3, ctx.gpr[3] & 32767u);
    ctx.set_gpr(3, ctx.gpr[3] << 16u);
    ctx.set_gpr(6, ctx.gpr[6] + ctx.gpr[3]);
    goto L_08960EFC;
L_08960EFC:
    ctx.set_gpr(4, ctx.gpr[6] + static_cast<std::uint32_t>(3));
    ctx.set_gpr(3, 0u + static_cast<std::uint32_t>(-4));
    ctx.set_gpr(4, ctx.gpr[4] & ctx.gpr[3]);
    ctx.set_gpr(3, rt.memory().aot_load8(ctx.gpr[20] + static_cast<std::uint32_t>(0)));
    ctx.set_gpr(3, ctx.gpr[3] << 27u);
    ctx.set_gpr(3, ctx.gpr[3] >> 28u);
    ctx.set_gpr(3, ctx.gpr[3] + static_cast<std::uint32_t>(1));
    ctx.set_gpr(3, ctx.gpr[3] << 2u);
    ctx.set_gpr(3, ctx.gpr[4] + ctx.gpr[3]);
    ctx.set_gpr(3, ctx.gpr[20] + ctx.gpr[3]);
    ctx.set_gpr(3, rt.memory().aot_load8(ctx.gpr[3] + static_cast<std::uint32_t>(0)));
    ctx.set_gpr(3, ctx.gpr[3] & 1u);
    { const bool branch_taken = ctx.gpr[3] != 0u;
    // nop
      if (branch_taken) {
          goto L_08960FB0;
      }
      goto L_08960F34;
    }
L_08960F34:
    { const bool branch_taken = static_cast<std::int32_t>(ctx.gpr[5]) <= 0;
    // nop
      if (branch_taken) {
          goto L_08960FB0;
      }
      goto L_08960F3C;
    }
L_08960F3C:
    ctx.set_gpr(4, ctx.gpr[21] + 0u);
    ctx.set_gpr(5, 0u + 0u);
    ctx.set_gpr(25, rt.memory().aot_load32(ctx.gpr[21] + static_cast<std::uint32_t>(0)));
    ctx.set_gpr(25, rt.memory().aot_load32(ctx.gpr[25] + static_cast<std::uint32_t>(412)));
    jump_target = ctx.gpr[25];
    ctx.set_gpr(31, 0x08960F54u);
    // nop
    ctx.pc = jump_target;
    if (rt.invoke_chained_call(ctx, &aot_mem) && ctx.pc == 0x08960F54u) goto L_08960F54;
    return;
L_08960F54:
    ctx.set_gpr(4, ctx.gpr[21] + 0u);
    ctx.set_gpr(31, 0x08960F60u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0081_entry, 81u, 30u, 0x089482C8u>(ctx, &aot_mem) && ctx.pc == 0x08960F60u) goto L_08960F60;
    return;
L_08960F60:
    ctx.set_gpr(18, ctx.gpr[2] + 0u);
    ctx.set_gpr(4, ctx.gpr[21] + 0u);
    ctx.set_gpr(31, 0x08960F70u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0081_entry, 81u, 30u, 0x089482C8u>(ctx, &aot_mem) && ctx.pc == 0x08960F70u) goto L_08960F70;
    return;
L_08960F70:
    ctx.set_gpr(16, ctx.gpr[2] + 0u);
    ctx.set_gpr(4, ctx.gpr[21] + 0u);
    ctx.set_gpr(25, rt.memory().aot_load32(ctx.gpr[21] + static_cast<std::uint32_t>(0)));
    ctx.set_gpr(25, rt.memory().aot_load32(ctx.gpr[25] + static_cast<std::uint32_t>(456)));
    jump_target = ctx.gpr[25];
    ctx.set_gpr(31, 0x08960F88u);
    // nop
    ctx.pc = jump_target;
    if (rt.invoke_chained_call(ctx, &aot_mem) && ctx.pc == 0x08960F88u) goto L_08960F88;
    return;
L_08960F88:
    ctx.set_gpr(3, 2228u << 16u);
    ctx.set_gpr(4, rt.memory().aot_load32(ctx.gpr[3] + static_cast<std::uint32_t>(-11152)));
    ctx.set_gpr(5, ctx.gpr[18] + 0u);
    ctx.set_gpr(6, ctx.gpr[16] + 0u);
    ctx.set_gpr(7, ctx.gpr[2] + 0u);
    ctx.set_gpr(8, ctx.gpr[20] + 0u);
    ctx.set_gpr(9, 2228u << 16u);
    ctx.set_gpr(9, ctx.gpr[9] + static_cast<std::uint32_t>(-288));
    ctx.set_gpr(31, 0x08960FB0u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0084_entry, 84u, 456u, 0x08955F2Cu>(ctx, &aot_mem) && ctx.pc == 0x08960FB0u) goto L_08960FB0;
    return;
L_08960FB0:
    ctx.set_gpr(3, rt.memory().aot_load32(ctx.gpr[20] + static_cast<std::uint32_t>(0)));
    ctx.set_gpr(3, ctx.gpr[3] << 11u);
    ctx.set_gpr(5, ctx.gpr[3] >> 16u);
    ctx.set_gpr(3, rt.memory().aot_load8(ctx.gpr[20] + static_cast<std::uint32_t>(3)));
    ctx.set_gpr(3, ctx.gpr[3] << 24u);
    ctx.set_gpr(4, ctx.gpr[3] >> 31u);
    ctx.set_gpr(3, 0u + static_cast<std::uint32_t>(1));
    { const bool branch_taken = ctx.gpr[4] != ctx.gpr[3];
    // nop
      if (branch_taken) {
          goto L_08960FE4;
      }
      goto L_08960FD4;
    }
L_08960FD4:
    ctx.set_gpr(3, rt.memory().aot_load16(ctx.gpr[20] + static_cast<std::uint32_t>(8)));
    ctx.set_gpr(3, ctx.gpr[3] & 32767u);
    ctx.set_gpr(3, ctx.gpr[3] << 16u);
    ctx.set_gpr(5, ctx.gpr[5] + ctx.gpr[3]);
    goto L_08960FE4;
L_08960FE4:
    ctx.set_gpr(4, ctx.gpr[5] + static_cast<std::uint32_t>(3));
    ctx.set_gpr(3, 0u + static_cast<std::uint32_t>(-4));
    ctx.set_gpr(5, ctx.gpr[4] & ctx.gpr[3]);
    ctx.set_gpr(4, rt.memory().aot_load8(ctx.gpr[20] + static_cast<std::uint32_t>(0)));
    ctx.set_gpr(3, ctx.gpr[4] << 27u);
    ctx.set_gpr(3, ctx.gpr[3] >> 28u);
    ctx.set_gpr(3, ctx.gpr[3] + static_cast<std::uint32_t>(1));
    ctx.set_gpr(3, ctx.gpr[3] << 2u);
    ctx.set_gpr(3, ctx.gpr[5] + ctx.gpr[3]);
    ctx.set_gpr(19, ctx.gpr[20] + ctx.gpr[3]);
    ctx.set_gpr(3, ctx.gpr[4] & 1u);
    { const bool branch_taken = ctx.gpr[3] != 0u;
    // nop
      if (branch_taken) {
          goto L_0896111C;
      }
      goto L_08961018;
    }
L_08961018:
    ctx.set_gpr(2, rt.memory().aot_load32(ctx.gpr[20] + static_cast<std::uint32_t>(-4)));
    ctx.set_gpr(18, ctx.gpr[20] - ctx.gpr[2]);
    ctx.set_gpr(2, rt.memory().aot_load32(ctx.gpr[21] + static_cast<std::uint32_t>(144)));
    { const bool branch_taken = static_cast<std::int32_t>(ctx.gpr[2]) <= 0;
    // nop
      if (branch_taken) {
          goto L_0896110C;
      }
      goto L_0896102C;
    }
L_0896102C:
    ctx.set_gpr(3, rt.memory().aot_load32(ctx.gpr[18] + static_cast<std::uint32_t>(0)));
    ctx.set_gpr(3, ctx.gpr[3] << 11u);
    ctx.set_gpr(5, ctx.gpr[3] >> 16u);
    ctx.set_gpr(3, rt.memory().aot_load8(ctx.gpr[18] + static_cast<std::uint32_t>(3)));
    ctx.set_gpr(3, ctx.gpr[3] << 24u);
    ctx.set_gpr(4, ctx.gpr[3] >> 31u);
    ctx.set_gpr(3, 0u + static_cast<std::uint32_t>(1));
    { const bool branch_taken = ctx.gpr[4] != ctx.gpr[3];
    // nop
      if (branch_taken) {
          goto L_08961060;
      }
      goto L_08961050;
    }
L_08961050:
    ctx.set_gpr(3, rt.memory().aot_load16(ctx.gpr[18] + static_cast<std::uint32_t>(8)));
    ctx.set_gpr(3, ctx.gpr[3] & 32767u);
    ctx.set_gpr(3, ctx.gpr[3] << 16u);
    ctx.set_gpr(5, ctx.gpr[5] + ctx.gpr[3]);
    goto L_08961060;
L_08961060:
    ctx.set_gpr(4, ctx.gpr[5] + static_cast<std::uint32_t>(3));
    ctx.set_gpr(3, 0u + static_cast<std::uint32_t>(-4));
    ctx.set_gpr(4, ctx.gpr[4] & ctx.gpr[3]);
    ctx.set_gpr(3, rt.memory().aot_load8(ctx.gpr[18] + static_cast<std::uint32_t>(0)));
    ctx.set_gpr(3, ctx.gpr[3] << 27u);
    ctx.set_gpr(3, ctx.gpr[3] >> 28u);
    ctx.set_gpr(3, ctx.gpr[3] + static_cast<std::uint32_t>(1));
    ctx.set_gpr(3, ctx.gpr[3] << 2u);
    ctx.set_gpr(3, ctx.gpr[4] + ctx.gpr[3]);
    ctx.set_gpr(3, ctx.gpr[18] + ctx.gpr[3]);
    { const bool branch_taken = ctx.gpr[3] == ctx.gpr[20];
    // nop
      if (branch_taken) {
          goto L_0896110C;
      }
      goto L_08961090;
    }
L_08961090:
    { const bool branch_taken = static_cast<std::int32_t>(ctx.gpr[2]) <= 0;
    // nop
      if (branch_taken) {
          goto L_0896110C;
      }
      goto L_08961098;
    }
L_08961098:
    ctx.set_gpr(4, ctx.gpr[21] + 0u);
    ctx.set_gpr(5, 0u + 0u);
    ctx.set_gpr(25, rt.memory().aot_load32(ctx.gpr[21] + static_cast<std::uint32_t>(0)));
    ctx.set_gpr(25, rt.memory().aot_load32(ctx.gpr[25] + static_cast<std::uint32_t>(412)));
    jump_target = ctx.gpr[25];
    ctx.set_gpr(31, 0x089610B0u);
    // nop
    ctx.pc = jump_target;
    if (rt.invoke_chained_call(ctx, &aot_mem) && ctx.pc == 0x089610B0u) goto L_089610B0;
    return;
L_089610B0:
    ctx.set_gpr(4, ctx.gpr[21] + 0u);
    ctx.set_gpr(31, 0x089610BCu);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0081_entry, 81u, 30u, 0x089482C8u>(ctx, &aot_mem) && ctx.pc == 0x089610BCu) goto L_089610BC;
    return;
L_089610BC:
    ctx.set_gpr(16, ctx.gpr[2] + 0u);
    ctx.set_gpr(4, ctx.gpr[21] + 0u);
    ctx.set_gpr(31, 0x089610CCu);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0081_entry, 81u, 30u, 0x089482C8u>(ctx, &aot_mem) && ctx.pc == 0x089610CCu) goto L_089610CC;
    return;
L_089610CC:
    ctx.set_gpr(22, ctx.gpr[2] + 0u);
    ctx.set_gpr(4, ctx.gpr[21] + 0u);
    ctx.set_gpr(25, rt.memory().aot_load32(ctx.gpr[21] + static_cast<std::uint32_t>(0)));
    ctx.set_gpr(25, rt.memory().aot_load32(ctx.gpr[25] + static_cast<std::uint32_t>(456)));
    jump_target = ctx.gpr[25];
    ctx.set_gpr(31, 0x089610E4u);
    // nop
    ctx.pc = jump_target;
    if (rt.invoke_chained_call(ctx, &aot_mem) && ctx.pc == 0x089610E4u) goto L_089610E4;
    return;
L_089610E4:
    ctx.set_gpr(3, 2228u << 16u);
    ctx.set_gpr(4, rt.memory().aot_load32(ctx.gpr[3] + static_cast<std::uint32_t>(-11152)));
    ctx.set_gpr(5, ctx.gpr[16] + 0u);
    ctx.set_gpr(6, ctx.gpr[22] + 0u);
    ctx.set_gpr(7, ctx.gpr[2] + 0u);
    ctx.set_gpr(8, ctx.gpr[20] + 0u);
    ctx.set_gpr(9, 2228u << 16u);
    ctx.set_gpr(9, ctx.gpr[9] + static_cast<std::uint32_t>(-228));
    ctx.set_gpr(31, 0x0896110Cu);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0084_entry, 84u, 456u, 0x08955F2Cu>(ctx, &aot_mem) && ctx.pc == 0x0896110Cu) goto L_0896110C;
    return;
L_0896110C:
    ctx.set_gpr(4, ctx.gpr[21] + 0u);
    ctx.set_gpr(5, ctx.gpr[18] + 0u);
    ctx.set_gpr(31, 0x0896111Cu);
    // nop
    goto L_08960574;
L_0896111C:
    ctx.set_gpr(3, rt.memory().aot_load32(ctx.gpr[17] + static_cast<std::uint32_t>(44)));
    { const bool branch_taken = ctx.gpr[19] != ctx.gpr[3];
    // nop
      if (branch_taken) {
          goto L_0896131C;
      }
      goto L_08961128;
    }
L_08961128:
    ctx.set_gpr(4, rt.memory().aot_load32(ctx.gpr[21] + static_cast<std::uint32_t>(144)));
    { const bool branch_taken = static_cast<std::int32_t>(ctx.gpr[4]) <= 0;
    // nop
      if (branch_taken) {
          goto L_089611C0;
      }
      goto L_08961134;
    }
L_08961134:
    ctx.set_gpr(3, rt.memory().aot_load8(ctx.gpr[19] + static_cast<std::uint32_t>(0)));
    ctx.set_gpr(3, ctx.gpr[3] & 1u);
    { const bool branch_taken = ctx.gpr[3] != 0u;
    // nop
      if (branch_taken) {
          goto L_089611C0;
      }
      goto L_08961144;
    }
L_08961144:
    { const bool branch_taken = static_cast<std::int32_t>(ctx.gpr[4]) <= 0;
    // nop
      if (branch_taken) {
          goto L_089611C0;
      }
      goto L_0896114C;
    }
L_0896114C:
    ctx.set_gpr(4, ctx.gpr[21] + 0u);
    ctx.set_gpr(5, 0u + 0u);
    ctx.set_gpr(25, rt.memory().aot_load32(ctx.gpr[21] + static_cast<std::uint32_t>(0)));
    ctx.set_gpr(25, rt.memory().aot_load32(ctx.gpr[25] + static_cast<std::uint32_t>(412)));
    jump_target = ctx.gpr[25];
    ctx.set_gpr(31, 0x08961164u);
    // nop
    ctx.pc = jump_target;
    if (rt.invoke_chained_call(ctx, &aot_mem) && ctx.pc == 0x08961164u) goto L_08961164;
    return;
L_08961164:
    ctx.set_gpr(4, ctx.gpr[21] + 0u);
    ctx.set_gpr(31, 0x08961170u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0081_entry, 81u, 30u, 0x089482C8u>(ctx, &aot_mem) && ctx.pc == 0x08961170u) goto L_08961170;
    return;
L_08961170:
    ctx.set_gpr(17, ctx.gpr[2] + 0u);
    ctx.set_gpr(4, ctx.gpr[21] + 0u);
    ctx.set_gpr(31, 0x08961180u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0081_entry, 81u, 30u, 0x089482C8u>(ctx, &aot_mem) && ctx.pc == 0x08961180u) goto L_08961180;
    return;
L_08961180:
    ctx.set_gpr(16, ctx.gpr[2] + 0u);
    ctx.set_gpr(4, ctx.gpr[21] + 0u);
    ctx.set_gpr(25, rt.memory().aot_load32(ctx.gpr[21] + static_cast<std::uint32_t>(0)));
    ctx.set_gpr(25, rt.memory().aot_load32(ctx.gpr[25] + static_cast<std::uint32_t>(456)));
    jump_target = ctx.gpr[25];
    ctx.set_gpr(31, 0x08961198u);
    // nop
    ctx.pc = jump_target;
    if (rt.invoke_chained_call(ctx, &aot_mem) && ctx.pc == 0x08961198u) goto L_08961198;
    return;
L_08961198:
    ctx.set_gpr(3, 2228u << 16u);
    ctx.set_gpr(4, rt.memory().aot_load32(ctx.gpr[3] + static_cast<std::uint32_t>(-11152)));
    ctx.set_gpr(5, ctx.gpr[17] + 0u);
    ctx.set_gpr(6, ctx.gpr[16] + 0u);
    ctx.set_gpr(7, ctx.gpr[2] + 0u);
    ctx.set_gpr(8, ctx.gpr[20] + 0u);
    ctx.set_gpr(9, 2228u << 16u);
    ctx.set_gpr(9, ctx.gpr[9] + static_cast<std::uint32_t>(-200));
    ctx.set_gpr(31, 0x089611C0u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0084_entry, 84u, 456u, 0x08955F2Cu>(ctx, &aot_mem) && ctx.pc == 0x089611C0u) goto L_089611C0;
    return;
L_089611C0:
    ctx.set_gpr(3, rt.memory().aot_load32(ctx.gpr[21] + static_cast<std::uint32_t>(144)));
    { const bool branch_taken = static_cast<std::int32_t>(ctx.gpr[3]) <= 0;
    // nop
      if (branch_taken) {
          goto L_08961398;
      }
      goto L_089611CC;
    }
L_089611CC:
    ctx.set_gpr(4, rt.memory().aot_load32(ctx.gpr[19] + static_cast<std::uint32_t>(0)));
    ctx.set_gpr(4, ctx.gpr[4] << 11u);
    ctx.set_gpr(6, ctx.gpr[4] >> 16u);
    ctx.set_gpr(4, rt.memory().aot_load8(ctx.gpr[19] + static_cast<std::uint32_t>(3)));
    ctx.set_gpr(4, ctx.gpr[4] << 24u);
    ctx.set_gpr(5, ctx.gpr[4] >> 31u);
    ctx.set_gpr(4, 0u + static_cast<std::uint32_t>(1));
    { const bool branch_taken = ctx.gpr[5] != ctx.gpr[4];
    // nop
      if (branch_taken) {
          goto L_08961200;
      }
      goto L_089611F0;
    }
L_089611F0:
    ctx.set_gpr(4, rt.memory().aot_load16(ctx.gpr[19] + static_cast<std::uint32_t>(8)));
    ctx.set_gpr(4, ctx.gpr[4] & 32767u);
    ctx.set_gpr(4, ctx.gpr[4] << 16u);
    ctx.set_gpr(6, ctx.gpr[6] + ctx.gpr[4]);
    goto L_08961200;
L_08961200:
    ctx.set_gpr(5, ctx.gpr[6] + static_cast<std::uint32_t>(3));
    ctx.set_gpr(4, 0u + static_cast<std::uint32_t>(-4));
    ctx.set_gpr(5, ctx.gpr[5] & ctx.gpr[4]);
    ctx.set_gpr(4, rt.memory().aot_load8(ctx.gpr[19] + static_cast<std::uint32_t>(0)));
    ctx.set_gpr(4, ctx.gpr[4] << 27u);
    ctx.set_gpr(4, ctx.gpr[4] >> 28u);
    ctx.set_gpr(4, ctx.gpr[4] + static_cast<std::uint32_t>(1));
    ctx.set_gpr(4, ctx.gpr[4] << 2u);
    ctx.set_gpr(6, ctx.gpr[5] + ctx.gpr[4]);
    ctx.set_gpr(4, rt.memory().aot_load32(ctx.gpr[21] + static_cast<std::uint32_t>(216)));
    ctx.set_gpr(5, ctx.gpr[4] + static_cast<std::uint32_t>(7));
    ctx.set_gpr(4, 0u + static_cast<std::uint32_t>(-8));
    ctx.set_gpr(4, ctx.gpr[5] & ctx.gpr[4]);
    ctx.set_gpr(1, ctx.gpr[6] < ctx.gpr[4] ? 1u : 0u);
    { const bool branch_taken = ctx.gpr[1] == 0u;
    // nop
      if (branch_taken) {
          goto L_08961398;
      }
      goto L_08961240;
    }
L_08961240:
    { const bool branch_taken = static_cast<std::int32_t>(ctx.gpr[3]) <= 0;
    // nop
      if (branch_taken) {
          goto L_08961398;
      }
      goto L_08961248;
    }
L_08961248:
    ctx.set_gpr(4, ctx.gpr[21] + 0u);
    ctx.set_gpr(5, 0u + 0u);
    ctx.set_gpr(25, rt.memory().aot_load32(ctx.gpr[21] + static_cast<std::uint32_t>(0)));
    ctx.set_gpr(25, rt.memory().aot_load32(ctx.gpr[25] + static_cast<std::uint32_t>(412)));
    jump_target = ctx.gpr[25];
    ctx.set_gpr(31, 0x08961260u);
    // nop
    ctx.pc = jump_target;
    if (rt.invoke_chained_call(ctx, &aot_mem) && ctx.pc == 0x08961260u) goto L_08961260;
    return;
L_08961260:
    ctx.set_gpr(2, rt.memory().aot_load32(ctx.gpr[19] + static_cast<std::uint32_t>(0)));
    ctx.set_gpr(2, ctx.gpr[2] << 11u);
    ctx.set_gpr(4, ctx.gpr[2] >> 16u);
    ctx.set_gpr(2, rt.memory().aot_load8(ctx.gpr[19] + static_cast<std::uint32_t>(3)));
    ctx.set_gpr(2, ctx.gpr[2] << 24u);
    ctx.set_gpr(3, ctx.gpr[2] >> 31u);
    ctx.set_gpr(2, 0u + static_cast<std::uint32_t>(1));
    { const bool branch_taken = ctx.gpr[3] != ctx.gpr[2];
    // nop
      if (branch_taken) {
          goto L_08961294;
      }
      goto L_08961284;
    }
L_08961284:
    ctx.set_gpr(2, rt.memory().aot_load16(ctx.gpr[19] + static_cast<std::uint32_t>(8)));
    ctx.set_gpr(2, ctx.gpr[2] & 32767u);
    ctx.set_gpr(2, ctx.gpr[2] << 16u);
    ctx.set_gpr(4, ctx.gpr[4] + ctx.gpr[2]);
    goto L_08961294;
L_08961294:
    ctx.set_gpr(3, ctx.gpr[4] + static_cast<std::uint32_t>(3));
    ctx.set_gpr(2, 0u + static_cast<std::uint32_t>(-4));
    ctx.set_gpr(18, ctx.gpr[3] & ctx.gpr[2]);
    ctx.set_gpr(4, ctx.gpr[21] + 0u);
    ctx.set_gpr(31, 0x089612ACu);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0081_entry, 81u, 30u, 0x089482C8u>(ctx, &aot_mem) && ctx.pc == 0x089612ACu) goto L_089612AC;
    return;
L_089612AC:
    ctx.set_gpr(17, ctx.gpr[2] + 0u);
    ctx.set_gpr(4, ctx.gpr[21] + 0u);
    ctx.set_gpr(31, 0x089612BCu);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0081_entry, 81u, 30u, 0x089482C8u>(ctx, &aot_mem) && ctx.pc == 0x089612BCu) goto L_089612BC;
    return;
L_089612BC:
    ctx.set_gpr(16, ctx.gpr[2] + 0u);
    ctx.set_gpr(4, ctx.gpr[21] + 0u);
    ctx.set_gpr(25, rt.memory().aot_load32(ctx.gpr[21] + static_cast<std::uint32_t>(0)));
    ctx.set_gpr(25, rt.memory().aot_load32(ctx.gpr[25] + static_cast<std::uint32_t>(456)));
    jump_target = ctx.gpr[25];
    ctx.set_gpr(31, 0x089612D4u);
    // nop
    ctx.pc = jump_target;
    if (rt.invoke_chained_call(ctx, &aot_mem) && ctx.pc == 0x089612D4u) goto L_089612D4;
    return;
L_089612D4:
    ctx.set_gpr(3, rt.memory().aot_load8(ctx.gpr[19] + static_cast<std::uint32_t>(0)));
    ctx.set_gpr(3, ctx.gpr[3] << 27u);
    ctx.set_gpr(3, ctx.gpr[3] >> 28u);
    ctx.set_gpr(3, ctx.gpr[3] + static_cast<std::uint32_t>(1));
    ctx.set_gpr(3, ctx.gpr[3] << 2u);
    ctx.set_gpr(10, ctx.gpr[18] + ctx.gpr[3]);
    ctx.set_gpr(3, 2228u << 16u);
    ctx.set_gpr(4, rt.memory().aot_load32(ctx.gpr[3] + static_cast<std::uint32_t>(-11080)));
    ctx.set_gpr(5, ctx.gpr[17] + 0u);
    ctx.set_gpr(6, ctx.gpr[16] + 0u);
    ctx.set_gpr(7, ctx.gpr[2] + 0u);
    ctx.set_gpr(8, ctx.gpr[20] + 0u);
    ctx.set_gpr(9, 2228u << 16u);
    ctx.set_gpr(9, ctx.gpr[9] + static_cast<std::uint32_t>(-140));
    ctx.set_gpr(31, 0x08961314u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0084_entry, 84u, 456u, 0x08955F2Cu>(ctx, &aot_mem) && ctx.pc == 0x08961314u) goto L_08961314;
    return;
L_08961314:
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_08961398;
      }
      goto L_0896131C;
    }
L_0896131C:
    ctx.set_gpr(3, rt.memory().aot_load32(ctx.gpr[19] + static_cast<std::uint32_t>(0)));
    ctx.set_gpr(3, ctx.gpr[3] << 11u);
    ctx.set_gpr(5, ctx.gpr[3] >> 16u);
    ctx.set_gpr(3, rt.memory().aot_load8(ctx.gpr[19] + static_cast<std::uint32_t>(3)));
    ctx.set_gpr(3, ctx.gpr[3] << 24u);
    ctx.set_gpr(4, ctx.gpr[3] >> 31u);
    ctx.set_gpr(3, 0u + static_cast<std::uint32_t>(1));
    { const bool branch_taken = ctx.gpr[4] != ctx.gpr[3];
    // nop
      if (branch_taken) {
          goto L_08961350;
      }
      goto L_08961340;
    }
L_08961340:
    ctx.set_gpr(3, rt.memory().aot_load16(ctx.gpr[19] + static_cast<std::uint32_t>(8)));
    ctx.set_gpr(3, ctx.gpr[3] & 32767u);
    ctx.set_gpr(3, ctx.gpr[3] << 16u);
    ctx.set_gpr(5, ctx.gpr[5] + ctx.gpr[3]);
    goto L_08961350;
L_08961350:
    ctx.set_gpr(4, ctx.gpr[5] + static_cast<std::uint32_t>(3));
    ctx.set_gpr(3, 0u + static_cast<std::uint32_t>(-4));
    ctx.set_gpr(4, ctx.gpr[4] & ctx.gpr[3]);
    ctx.set_gpr(3, rt.memory().aot_load8(ctx.gpr[19] + static_cast<std::uint32_t>(0)));
    ctx.set_gpr(3, ctx.gpr[3] << 27u);
    ctx.set_gpr(3, ctx.gpr[3] >> 28u);
    ctx.set_gpr(3, ctx.gpr[3] + static_cast<std::uint32_t>(1));
    ctx.set_gpr(3, ctx.gpr[3] << 2u);
    ctx.set_gpr(3, ctx.gpr[4] + ctx.gpr[3]);
    ctx.set_gpr(3, ctx.gpr[19] + ctx.gpr[3]);
    ctx.set_gpr(3, rt.memory().aot_load8(ctx.gpr[3] + static_cast<std::uint32_t>(0)));
    ctx.set_gpr(3, ctx.gpr[3] & 1u);
    { const bool branch_taken = ctx.gpr[3] != 0u;
    // nop
      if (branch_taken) {
          goto L_08961398;
      }
      goto L_08961388;
    }
L_08961388:
    ctx.set_gpr(4, ctx.gpr[21] + 0u);
    ctx.set_gpr(5, ctx.gpr[19] + 0u);
    ctx.set_gpr(31, 0x08961398u);
    // nop
    goto L_08960574;
L_08961398:
    ctx.set_gpr(31, rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(28)));
    ctx.set_gpr(22, rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(24)));
    ctx.set_gpr(21, rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(20)));
    ctx.set_gpr(20, rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(16)));
    ctx.set_gpr(19, rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(12)));
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
L_089613C4:
    ctx.set_gpr(29, ctx.gpr[29] + static_cast<std::uint32_t>(-32));
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(28), ctx.gpr[31]);
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(24), ctx.gpr[21]);
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(20), ctx.gpr[20]);
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(16), ctx.gpr[19]);
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(12), ctx.gpr[18]);
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(8), ctx.gpr[17]);
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(4), ctx.gpr[16]);
    ctx.set_gpr(19, ctx.gpr[4] + 0u);
    ctx.set_gpr(18, ctx.gpr[5] + 0u);
    ctx.set_gpr(17, ctx.gpr[6] + 0u);
    ctx.set_gpr(4, rt.memory().aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(212)));
    ctx.set_gpr(3, rt.memory().aot_load32(ctx.gpr[5] + static_cast<std::uint32_t>(0)));
    ctx.set_gpr(3, ctx.gpr[3] << 11u);
    ctx.set_gpr(6, ctx.gpr[3] >> 16u);
    ctx.set_gpr(3, rt.memory().aot_load8(ctx.gpr[5] + static_cast<std::uint32_t>(3)));
    ctx.set_gpr(3, ctx.gpr[3] << 24u);
    ctx.set_gpr(3, ctx.gpr[3] >> 31u);
    ctx.set_gpr(3, ctx.gpr[3] & 255u);
    ctx.set_gpr(5, 0u + static_cast<std::uint32_t>(1));
    { const bool branch_taken = ctx.gpr[3] != ctx.gpr[5];
    // nop
      if (branch_taken) {
          goto L_0896142C;
      }
      goto L_0896141C;
    }
L_0896141C:
    ctx.set_gpr(5, rt.memory().aot_load16(ctx.gpr[18] + static_cast<std::uint32_t>(8)));
    ctx.set_gpr(5, ctx.gpr[5] & 32767u);
    ctx.set_gpr(5, ctx.gpr[5] << 16u);
    ctx.set_gpr(6, ctx.gpr[6] + ctx.gpr[5]);
    goto L_0896142C;
L_0896142C:
    ctx.set_gpr(6, ctx.gpr[6] + static_cast<std::uint32_t>(3));
    ctx.set_gpr(5, 0u + static_cast<std::uint32_t>(-4));
    ctx.set_gpr(6, ctx.gpr[6] & ctx.gpr[5]);
    ctx.set_gpr(5, rt.memory().aot_load8(ctx.gpr[18] + static_cast<std::uint32_t>(0)));
    ctx.set_gpr(5, ctx.gpr[5] << 27u);
    ctx.set_gpr(5, ctx.gpr[5] >> 28u);
    ctx.set_gpr(5, ctx.gpr[5] + static_cast<std::uint32_t>(1));
    ctx.set_gpr(5, ctx.gpr[5] << 2u);
    ctx.set_gpr(16, ctx.gpr[6] + ctx.gpr[5]);
    ctx.set_gpr(5, rt.memory().aot_load8(ctx.gpr[18] + static_cast<std::uint32_t>(3)));
    ctx.set_gpr(5, ctx.gpr[5] << 24u);
    ctx.set_gpr(6, ctx.gpr[5] >> 31u);
    ctx.set_gpr(5, 0u + static_cast<std::uint32_t>(1));
    { const bool branch_taken = ctx.gpr[6] != ctx.gpr[5];
    // nop
      if (branch_taken) {
          goto L_08961478;
      }
      goto L_08961468;
    }
L_08961468:
    ctx.set_gpr(5, rt.memory().aot_load8(ctx.gpr[18] + static_cast<std::uint32_t>(11)));
    ctx.set_gpr(5, ctx.gpr[5] & 1u);
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_0896147C;
      }
      goto L_08961478;
    }
L_08961478:
    ctx.set_gpr(5, 0u + 0u);
    goto L_0896147C;
L_0896147C:
    { const bool branch_taken = ctx.gpr[5] != 0u;
    // nop
      if (branch_taken) {
          goto L_08961744;
      }
      goto L_08961484;
    }
L_08961484:
    ctx.set_gpr(3, rt.memory().aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(44)));
    { const bool branch_taken = ctx.gpr[18] == ctx.gpr[3];
    // nop
      if (branch_taken) {
          goto L_089615F0;
      }
      goto L_08961490;
    }
L_08961490:
    ctx.set_gpr(3, rt.memory().aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(2016)));
    ctx.set_gpr(3, ctx.gpr[3] & 1u);
    { const bool branch_taken = ctx.gpr[3] == 0u;
    // nop
      if (branch_taken) {
          goto L_089617F4;
      }
      goto L_089614A0;
    }
L_089614A0:
    ctx.set_gpr(3, rt.memory().aot_load32(ctx.gpr[19] + static_cast<std::uint32_t>(132)));
    { const bool branch_taken = ctx.gpr[3] == 0u;
    // nop
      if (branch_taken) {
          goto L_089617F4;
      }
      goto L_089614AC;
    }
L_089614AC:
    ctx.set_gpr(4, rt.memory().aot_load32(ctx.gpr[19] + static_cast<std::uint32_t>(144)));
    { const bool branch_taken = static_cast<std::int32_t>(ctx.gpr[4]) <= 0;
    // nop
      if (branch_taken) {
          goto L_08961548;
      }
      goto L_089614B8;
    }
L_089614B8:
    ctx.set_gpr(3, rt.memory().aot_load32(ctx.gpr[19] + static_cast<std::uint32_t>(128)));
    ctx.set_gpr(1, ctx.gpr[18] < ctx.gpr[3] ? 1u : 0u);
    { const bool branch_taken = ctx.gpr[1] == 0u;
    // nop
      if (branch_taken) {
          goto L_08961548;
      }
      goto L_089614C8;
    }
L_089614C8:
    { const bool branch_taken = static_cast<std::int32_t>(ctx.gpr[4]) <= 0;
    // nop
      if (branch_taken) {
          goto L_08961548;
      }
      goto L_089614D0;
    }
L_089614D0:
    ctx.set_gpr(4, ctx.gpr[19] + 0u);
    ctx.set_gpr(5, 0u + 0u);
    ctx.set_gpr(25, rt.memory().aot_load32(ctx.gpr[19] + static_cast<std::uint32_t>(0)));
    ctx.set_gpr(25, rt.memory().aot_load32(ctx.gpr[25] + static_cast<std::uint32_t>(412)));
    jump_target = ctx.gpr[25];
    ctx.set_gpr(31, 0x089614E8u);
    // nop
    ctx.pc = jump_target;
    if (rt.invoke_chained_call(ctx, &aot_mem) && ctx.pc == 0x089614E8u) goto L_089614E8;
    return;
L_089614E8:
    ctx.set_gpr(4, ctx.gpr[19] + 0u);
    ctx.set_gpr(31, 0x089614F4u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0081_entry, 81u, 30u, 0x089482C8u>(ctx, &aot_mem) && ctx.pc == 0x089614F4u) goto L_089614F4;
    return;
L_089614F4:
    ctx.set_gpr(21, ctx.gpr[2] + 0u);
    ctx.set_gpr(4, ctx.gpr[19] + 0u);
    ctx.set_gpr(31, 0x08961504u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0081_entry, 81u, 30u, 0x089482C8u>(ctx, &aot_mem) && ctx.pc == 0x08961504u) goto L_08961504;
    return;
L_08961504:
    ctx.set_gpr(20, ctx.gpr[2] + 0u);
    ctx.set_gpr(4, ctx.gpr[19] + 0u);
    ctx.set_gpr(25, rt.memory().aot_load32(ctx.gpr[19] + static_cast<std::uint32_t>(0)));
    ctx.set_gpr(25, rt.memory().aot_load32(ctx.gpr[25] + static_cast<std::uint32_t>(456)));
    jump_target = ctx.gpr[25];
    ctx.set_gpr(31, 0x0896151Cu);
    // nop
    ctx.pc = jump_target;
    if (rt.invoke_chained_call(ctx, &aot_mem) && ctx.pc == 0x0896151Cu) goto L_0896151C;
    return;
L_0896151C:
    ctx.set_gpr(3, 2228u << 16u);
    ctx.set_gpr(4, rt.memory().aot_load32(ctx.gpr[3] + static_cast<std::uint32_t>(-11080)));
    ctx.set_gpr(5, ctx.gpr[21] + 0u);
    ctx.set_gpr(6, ctx.gpr[20] + 0u);
    ctx.set_gpr(7, ctx.gpr[2] + 0u);
    ctx.set_gpr(8, ctx.gpr[18] + 0u);
    ctx.set_gpr(9, 2228u << 16u);
    ctx.set_gpr(9, ctx.gpr[9] + static_cast<std::uint32_t>(-92));
    ctx.set_gpr(10, rt.memory().aot_load32(ctx.gpr[19] + static_cast<std::uint32_t>(128)));
    ctx.set_gpr(31, 0x08961548u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0084_entry, 84u, 456u, 0x08955F2Cu>(ctx, &aot_mem) && ctx.pc == 0x08961548u) goto L_08961548;
    return;
L_08961548:
    ctx.set_gpr(5, rt.memory().aot_load32(ctx.gpr[19] + static_cast<std::uint32_t>(144)));
    { const bool branch_taken = static_cast<std::int32_t>(ctx.gpr[5]) <= 0;
    // nop
      if (branch_taken) {
          goto L_089617F4;
      }
      goto L_08961554;
    }
L_08961554:
    ctx.set_gpr(4, ctx.gpr[18] + ctx.gpr[16]);
    ctx.set_gpr(3, rt.memory().aot_load32(ctx.gpr[19] + static_cast<std::uint32_t>(132)));
    ctx.set_gpr(1, ctx.gpr[3] < ctx.gpr[4] ? 1u : 0u);
    { const bool branch_taken = ctx.gpr[1] == 0u;
    // nop
      if (branch_taken) {
          goto L_089617F4;
      }
      goto L_08961568;
    }
L_08961568:
    { const bool branch_taken = static_cast<std::int32_t>(ctx.gpr[5]) <= 0;
    // nop
      if (branch_taken) {
          goto L_089617F4;
      }
      goto L_08961570;
    }
L_08961570:
    ctx.set_gpr(4, ctx.gpr[19] + 0u);
    ctx.set_gpr(5, 0u + 0u);
    ctx.set_gpr(25, rt.memory().aot_load32(ctx.gpr[19] + static_cast<std::uint32_t>(0)));
    ctx.set_gpr(25, rt.memory().aot_load32(ctx.gpr[25] + static_cast<std::uint32_t>(412)));
    jump_target = ctx.gpr[25];
    ctx.set_gpr(31, 0x08961588u);
    // nop
    ctx.pc = jump_target;
    if (rt.invoke_chained_call(ctx, &aot_mem) && ctx.pc == 0x08961588u) goto L_08961588;
    return;
L_08961588:
    ctx.set_gpr(4, ctx.gpr[19] + 0u);
    ctx.set_gpr(31, 0x08961594u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0081_entry, 81u, 30u, 0x089482C8u>(ctx, &aot_mem) && ctx.pc == 0x08961594u) goto L_08961594;
    return;
L_08961594:
    ctx.set_gpr(21, ctx.gpr[2] + 0u);
    ctx.set_gpr(4, ctx.gpr[19] + 0u);
    ctx.set_gpr(31, 0x089615A4u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0081_entry, 81u, 30u, 0x089482C8u>(ctx, &aot_mem) && ctx.pc == 0x089615A4u) goto L_089615A4;
    return;
L_089615A4:
    ctx.set_gpr(20, ctx.gpr[2] + 0u);
    ctx.set_gpr(4, ctx.gpr[19] + 0u);
    ctx.set_gpr(25, rt.memory().aot_load32(ctx.gpr[19] + static_cast<std::uint32_t>(0)));
    ctx.set_gpr(25, rt.memory().aot_load32(ctx.gpr[25] + static_cast<std::uint32_t>(456)));
    jump_target = ctx.gpr[25];
    ctx.set_gpr(31, 0x089615BCu);
    // nop
    ctx.pc = jump_target;
    if (rt.invoke_chained_call(ctx, &aot_mem) && ctx.pc == 0x089615BCu) goto L_089615BC;
    return;
L_089615BC:
    ctx.set_gpr(3, 2228u << 16u);
    ctx.set_gpr(4, rt.memory().aot_load32(ctx.gpr[3] + static_cast<std::uint32_t>(-11080)));
    ctx.set_gpr(5, ctx.gpr[21] + 0u);
    ctx.set_gpr(6, ctx.gpr[20] + 0u);
    ctx.set_gpr(7, ctx.gpr[2] + 0u);
    ctx.set_gpr(8, ctx.gpr[18] + 0u);
    ctx.set_gpr(9, 2228u << 16u);
    ctx.set_gpr(9, ctx.gpr[9] + static_cast<std::uint32_t>(-60));
    ctx.set_gpr(10, rt.memory().aot_load32(ctx.gpr[19] + static_cast<std::uint32_t>(132)));
    ctx.set_gpr(31, 0x089615E8u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0084_entry, 84u, 456u, 0x08955F2Cu>(ctx, &aot_mem) && ctx.pc == 0x089615E8u) goto L_089615E8;
    return;
L_089615E8:
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_089617F4;
      }
      goto L_089615F0;
    }
L_089615F0:
    ctx.set_gpr(5, rt.memory().aot_load32(ctx.gpr[19] + static_cast<std::uint32_t>(144)));
    { const bool branch_taken = static_cast<std::int32_t>(ctx.gpr[5]) <= 0;
    // nop
      if (branch_taken) {
          goto L_089616A4;
      }
      goto L_089615FC;
    }
L_089615FC:
    ctx.set_gpr(3, rt.memory().aot_load32(ctx.gpr[19] + static_cast<std::uint32_t>(216)));
    ctx.set_gpr(4, ctx.gpr[3] + static_cast<std::uint32_t>(7));
    ctx.set_gpr(3, 0u + static_cast<std::uint32_t>(-8));
    ctx.set_gpr(3, ctx.gpr[4] & ctx.gpr[3]);
    ctx.set_gpr(1, ctx.gpr[16] < ctx.gpr[3] ? 1u : 0u);
    { const bool branch_taken = ctx.gpr[1] == 0u;
    // nop
      if (branch_taken) {
          goto L_089616A4;
      }
      goto L_08961618;
    }
L_08961618:
    { const bool branch_taken = static_cast<std::int32_t>(ctx.gpr[5]) <= 0;
    // nop
      if (branch_taken) {
          goto L_089616A4;
      }
      goto L_08961620;
    }
L_08961620:
    ctx.set_gpr(4, ctx.gpr[19] + 0u);
    ctx.set_gpr(5, 0u + 0u);
    ctx.set_gpr(25, rt.memory().aot_load32(ctx.gpr[19] + static_cast<std::uint32_t>(0)));
    ctx.set_gpr(25, rt.memory().aot_load32(ctx.gpr[25] + static_cast<std::uint32_t>(412)));
    jump_target = ctx.gpr[25];
    ctx.set_gpr(31, 0x08961638u);
    // nop
    ctx.pc = jump_target;
    if (rt.invoke_chained_call(ctx, &aot_mem) && ctx.pc == 0x08961638u) goto L_08961638;
    return;
L_08961638:
    ctx.set_gpr(4, ctx.gpr[19] + 0u);
    ctx.set_gpr(31, 0x08961644u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0081_entry, 81u, 30u, 0x089482C8u>(ctx, &aot_mem) && ctx.pc == 0x08961644u) goto L_08961644;
    return;
L_08961644:
    ctx.set_gpr(21, ctx.gpr[2] + 0u);
    ctx.set_gpr(4, ctx.gpr[19] + 0u);
    ctx.set_gpr(31, 0x08961654u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0081_entry, 81u, 30u, 0x089482C8u>(ctx, &aot_mem) && ctx.pc == 0x08961654u) goto L_08961654;
    return;
L_08961654:
    ctx.set_gpr(20, ctx.gpr[2] + 0u);
    ctx.set_gpr(4, ctx.gpr[19] + 0u);
    ctx.set_gpr(25, rt.memory().aot_load32(ctx.gpr[19] + static_cast<std::uint32_t>(0)));
    ctx.set_gpr(25, rt.memory().aot_load32(ctx.gpr[25] + static_cast<std::uint32_t>(456)));
    jump_target = ctx.gpr[25];
    ctx.set_gpr(31, 0x0896166Cu);
    // nop
    ctx.pc = jump_target;
    if (rt.invoke_chained_call(ctx, &aot_mem) && ctx.pc == 0x0896166Cu) goto L_0896166C;
    return;
L_0896166C:
    ctx.set_gpr(3, rt.memory().aot_load32(ctx.gpr[19] + static_cast<std::uint32_t>(216)));
    ctx.set_gpr(4, ctx.gpr[3] + static_cast<std::uint32_t>(7));
    ctx.set_gpr(3, 0u + static_cast<std::uint32_t>(-8));
    ctx.set_gpr(10, ctx.gpr[4] & ctx.gpr[3]);
    ctx.set_gpr(3, 2228u << 16u);
    ctx.set_gpr(4, rt.memory().aot_load32(ctx.gpr[3] + static_cast<std::uint32_t>(-11080)));
    ctx.set_gpr(5, ctx.gpr[21] + 0u);
    ctx.set_gpr(6, ctx.gpr[20] + 0u);
    ctx.set_gpr(7, ctx.gpr[2] + 0u);
    ctx.set_gpr(8, ctx.gpr[18] + 0u);
    ctx.set_gpr(9, 2228u << 16u);
    ctx.set_gpr(9, ctx.gpr[9] + static_cast<std::uint32_t>(-28));
    ctx.set_gpr(31, 0x089616A4u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0084_entry, 84u, 456u, 0x08955F2Cu>(ctx, &aot_mem) && ctx.pc == 0x089616A4u) goto L_089616A4;
    return;
L_089616A4:
    ctx.set_gpr(4, rt.memory().aot_load32(ctx.gpr[19] + static_cast<std::uint32_t>(144)));
    { const bool branch_taken = static_cast<std::int32_t>(ctx.gpr[4]) <= 0;
    // nop
      if (branch_taken) {
          goto L_089617F4;
      }
      goto L_089616B0;
    }
L_089616B0:
    ctx.set_gpr(3, rt.memory().aot_load8(ctx.gpr[18] + static_cast<std::uint32_t>(0)));
    ctx.set_gpr(3, ctx.gpr[3] & 1u);
    { const bool branch_taken = ctx.gpr[3] != 0u;
    // nop
      if (branch_taken) {
          goto L_089617F4;
      }
      goto L_089616C0;
    }
L_089616C0:
    { const bool branch_taken = static_cast<std::int32_t>(ctx.gpr[4]) <= 0;
    // nop
      if (branch_taken) {
          goto L_089617F4;
      }
      goto L_089616C8;
    }
L_089616C8:
    ctx.set_gpr(4, ctx.gpr[19] + 0u);
    ctx.set_gpr(5, 0u + 0u);
    ctx.set_gpr(25, rt.memory().aot_load32(ctx.gpr[19] + static_cast<std::uint32_t>(0)));
    ctx.set_gpr(25, rt.memory().aot_load32(ctx.gpr[25] + static_cast<std::uint32_t>(412)));
    jump_target = ctx.gpr[25];
    ctx.set_gpr(31, 0x089616E0u);
    // nop
    ctx.pc = jump_target;
    if (rt.invoke_chained_call(ctx, &aot_mem) && ctx.pc == 0x089616E0u) goto L_089616E0;
    return;
L_089616E0:
    ctx.set_gpr(4, ctx.gpr[19] + 0u);
    ctx.set_gpr(31, 0x089616ECu);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0081_entry, 81u, 30u, 0x089482C8u>(ctx, &aot_mem) && ctx.pc == 0x089616ECu) goto L_089616EC;
    return;
L_089616EC:
    ctx.set_gpr(21, ctx.gpr[2] + 0u);
    ctx.set_gpr(4, ctx.gpr[19] + 0u);
    ctx.set_gpr(31, 0x089616FCu);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0081_entry, 81u, 30u, 0x089482C8u>(ctx, &aot_mem) && ctx.pc == 0x089616FCu) goto L_089616FC;
    return;
L_089616FC:
    ctx.set_gpr(20, ctx.gpr[2] + 0u);
    ctx.set_gpr(4, ctx.gpr[19] + 0u);
    ctx.set_gpr(25, rt.memory().aot_load32(ctx.gpr[19] + static_cast<std::uint32_t>(0)));
    ctx.set_gpr(25, rt.memory().aot_load32(ctx.gpr[25] + static_cast<std::uint32_t>(456)));
    jump_target = ctx.gpr[25];
    ctx.set_gpr(31, 0x08961714u);
    // nop
    ctx.pc = jump_target;
    if (rt.invoke_chained_call(ctx, &aot_mem) && ctx.pc == 0x08961714u) goto L_08961714;
    return;
L_08961714:
    ctx.set_gpr(3, 2228u << 16u);
    ctx.set_gpr(4, rt.memory().aot_load32(ctx.gpr[3] + static_cast<std::uint32_t>(-11152)));
    ctx.set_gpr(5, ctx.gpr[21] + 0u);
    ctx.set_gpr(6, ctx.gpr[20] + 0u);
    ctx.set_gpr(7, ctx.gpr[2] + 0u);
    ctx.set_gpr(8, ctx.gpr[18] + 0u);
    ctx.set_gpr(9, 2228u << 16u);
    ctx.set_gpr(9, ctx.gpr[9] + static_cast<std::uint32_t>(0));
    ctx.set_gpr(31, 0x0896173Cu);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0084_entry, 84u, 456u, 0x08955F2Cu>(ctx, &aot_mem) && ctx.pc == 0x0896173Cu) goto L_0896173C;
    return;
L_0896173C:
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_089617F4;
      }
      goto L_08961744;
    }
L_08961744:
    ctx.set_gpr(5, rt.memory().aot_load32(ctx.gpr[19] + static_cast<std::uint32_t>(144)));
    { const bool branch_taken = static_cast<std::int32_t>(ctx.gpr[5]) <= 0;
    // nop
      if (branch_taken) {
          goto L_089617F4;
      }
      goto L_08961750;
    }
L_08961750:
    ctx.set_gpr(4, 0u + static_cast<std::uint32_t>(1));
    { const bool branch_taken = ctx.gpr[3] != ctx.gpr[4];
    // nop
      if (branch_taken) {
          goto L_0896176C;
      }
      goto L_0896175C;
    }
L_0896175C:
    ctx.set_gpr(3, rt.memory().aot_load8(ctx.gpr[18] + static_cast<std::uint32_t>(11)));
    ctx.set_gpr(3, ctx.gpr[3] & 1u);
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_08961770;
      }
      goto L_0896176C;
    }
L_0896176C:
    ctx.set_gpr(3, 0u + 0u);
    goto L_08961770;
L_08961770:
    { const bool branch_taken = ctx.gpr[3] == 0u;
    // nop
      if (branch_taken) {
          goto L_089617F4;
      }
      goto L_08961778;
    }
L_08961778:
    { const bool branch_taken = static_cast<std::int32_t>(ctx.gpr[5]) <= 0;
    // nop
      if (branch_taken) {
          goto L_089617F4;
      }
      goto L_08961780;
    }
L_08961780:
    ctx.set_gpr(4, ctx.gpr[19] + 0u);
    ctx.set_gpr(5, 0u + 0u);
    ctx.set_gpr(25, rt.memory().aot_load32(ctx.gpr[19] + static_cast<std::uint32_t>(0)));
    ctx.set_gpr(25, rt.memory().aot_load32(ctx.gpr[25] + static_cast<std::uint32_t>(412)));
    jump_target = ctx.gpr[25];
    ctx.set_gpr(31, 0x08961798u);
    // nop
    ctx.pc = jump_target;
    if (rt.invoke_chained_call(ctx, &aot_mem) && ctx.pc == 0x08961798u) goto L_08961798;
    return;
L_08961798:
    ctx.set_gpr(4, ctx.gpr[19] + 0u);
    ctx.set_gpr(31, 0x089617A4u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0081_entry, 81u, 30u, 0x089482C8u>(ctx, &aot_mem) && ctx.pc == 0x089617A4u) goto L_089617A4;
    return;
L_089617A4:
    ctx.set_gpr(21, ctx.gpr[2] + 0u);
    ctx.set_gpr(4, ctx.gpr[19] + 0u);
    ctx.set_gpr(31, 0x089617B4u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0081_entry, 81u, 30u, 0x089482C8u>(ctx, &aot_mem) && ctx.pc == 0x089617B4u) goto L_089617B4;
    return;
L_089617B4:
    ctx.set_gpr(20, ctx.gpr[2] + 0u);
    ctx.set_gpr(4, ctx.gpr[19] + 0u);
    ctx.set_gpr(25, rt.memory().aot_load32(ctx.gpr[19] + static_cast<std::uint32_t>(0)));
    ctx.set_gpr(25, rt.memory().aot_load32(ctx.gpr[25] + static_cast<std::uint32_t>(456)));
    jump_target = ctx.gpr[25];
    ctx.set_gpr(31, 0x089617CCu);
    // nop
    ctx.pc = jump_target;
    if (rt.invoke_chained_call(ctx, &aot_mem) && ctx.pc == 0x089617CCu) goto L_089617CC;
    return;
L_089617CC:
    ctx.set_gpr(3, 2228u << 16u);
    ctx.set_gpr(4, rt.memory().aot_load32(ctx.gpr[3] + static_cast<std::uint32_t>(-11152)));
    ctx.set_gpr(5, ctx.gpr[21] + 0u);
    ctx.set_gpr(6, ctx.gpr[20] + 0u);
    ctx.set_gpr(7, ctx.gpr[2] + 0u);
    ctx.set_gpr(8, ctx.gpr[18] + 0u);
    ctx.set_gpr(9, 2228u << 16u);
    ctx.set_gpr(9, ctx.gpr[9] + static_cast<std::uint32_t>(24));
    ctx.set_gpr(31, 0x089617F4u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0084_entry, 84u, 456u, 0x08955F2Cu>(ctx, &aot_mem) && ctx.pc == 0x089617F4u) goto L_089617F4;
    return;
L_089617F4:
    ctx.set_gpr(5, rt.memory().aot_load32(ctx.gpr[19] + static_cast<std::uint32_t>(144)));
    { const bool branch_taken = static_cast<std::int32_t>(ctx.gpr[5]) <= 0;
    // nop
      if (branch_taken) {
          goto L_0896189C;
      }
      goto L_08961800;
    }
L_08961800:
    ctx.set_gpr(3, rt.memory().aot_load32(ctx.gpr[19] + static_cast<std::uint32_t>(216)));
    ctx.set_gpr(4, ctx.gpr[3] + static_cast<std::uint32_t>(7));
    ctx.set_gpr(3, 0u + static_cast<std::uint32_t>(-8));
    ctx.set_gpr(3, ctx.gpr[4] & ctx.gpr[3]);
    ctx.set_gpr(1, ctx.gpr[16] < ctx.gpr[3] ? 1u : 0u);
    { const bool branch_taken = ctx.gpr[1] == 0u;
    // nop
      if (branch_taken) {
          goto L_0896189C;
      }
      goto L_0896181C;
    }
L_0896181C:
    { const bool branch_taken = static_cast<std::int32_t>(ctx.gpr[5]) <= 0;
    // nop
      if (branch_taken) {
          goto L_0896189C;
      }
      goto L_08961824;
    }
L_08961824:
    ctx.set_gpr(4, ctx.gpr[19] + 0u);
    ctx.set_gpr(5, 0u + 0u);
    ctx.set_gpr(25, rt.memory().aot_load32(ctx.gpr[19] + static_cast<std::uint32_t>(0)));
    ctx.set_gpr(25, rt.memory().aot_load32(ctx.gpr[25] + static_cast<std::uint32_t>(412)));
    jump_target = ctx.gpr[25];
    ctx.set_gpr(31, 0x0896183Cu);
    // nop
    ctx.pc = jump_target;
    if (rt.invoke_chained_call(ctx, &aot_mem) && ctx.pc == 0x0896183Cu) goto L_0896183C;
    return;
L_0896183C:
    ctx.set_gpr(4, ctx.gpr[19] + 0u);
    ctx.set_gpr(31, 0x08961848u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0081_entry, 81u, 30u, 0x089482C8u>(ctx, &aot_mem) && ctx.pc == 0x08961848u) goto L_08961848;
    return;
L_08961848:
    ctx.set_gpr(21, ctx.gpr[2] + 0u);
    ctx.set_gpr(4, ctx.gpr[19] + 0u);
    ctx.set_gpr(31, 0x08961858u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0081_entry, 81u, 30u, 0x089482C8u>(ctx, &aot_mem) && ctx.pc == 0x08961858u) goto L_08961858;
    return;
L_08961858:
    ctx.set_gpr(20, ctx.gpr[2] + 0u);
    ctx.set_gpr(4, ctx.gpr[19] + 0u);
    ctx.set_gpr(25, rt.memory().aot_load32(ctx.gpr[19] + static_cast<std::uint32_t>(0)));
    ctx.set_gpr(25, rt.memory().aot_load32(ctx.gpr[25] + static_cast<std::uint32_t>(456)));
    jump_target = ctx.gpr[25];
    ctx.set_gpr(31, 0x08961870u);
    // nop
    ctx.pc = jump_target;
    if (rt.invoke_chained_call(ctx, &aot_mem) && ctx.pc == 0x08961870u) goto L_08961870;
    return;
L_08961870:
    ctx.set_gpr(3, 2228u << 16u);
    ctx.set_gpr(4, rt.memory().aot_load32(ctx.gpr[3] + static_cast<std::uint32_t>(-11080)));
    ctx.set_gpr(5, ctx.gpr[21] + 0u);
    ctx.set_gpr(6, ctx.gpr[20] + 0u);
    ctx.set_gpr(7, ctx.gpr[2] + 0u);
    ctx.set_gpr(8, ctx.gpr[18] + 0u);
    ctx.set_gpr(9, 2228u << 16u);
    ctx.set_gpr(9, ctx.gpr[9] + static_cast<std::uint32_t>(48));
    ctx.set_gpr(10, ctx.gpr[16] + 0u);
    ctx.set_gpr(31, 0x0896189Cu);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0084_entry, 84u, 456u, 0x08955F2Cu>(ctx, &aot_mem) && ctx.pc == 0x0896189Cu) goto L_0896189C;
    return;
L_0896189C:
    ctx.set_gpr(4, rt.memory().aot_load32(ctx.gpr[19] + static_cast<std::uint32_t>(144)));
    { const bool branch_taken = static_cast<std::int32_t>(ctx.gpr[4]) <= 0;
    // nop
      if (branch_taken) {
          goto L_08961958;
      }
      goto L_089618A8;
    }
L_089618A8:
    ctx.set_gpr(3, rt.memory().aot_load8(ctx.gpr[18] + static_cast<std::uint32_t>(3)));
    ctx.set_gpr(3, ctx.gpr[3] << 24u);
    ctx.set_gpr(3, ctx.gpr[3] >> 31u);
    { const bool branch_taken = ctx.gpr[3] != 0u;
    // nop
      if (branch_taken) {
          goto L_089618C8;
      }
      goto L_089618BC;
    }
L_089618BC:
    ctx.set_gpr(3, 0u + static_cast<std::uint32_t>(4));
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_089618CC;
      }
      goto L_089618C8;
    }
L_089618C8:
    ctx.set_gpr(3, 0u + static_cast<std::uint32_t>(12));
    goto L_089618CC;
L_089618CC:
    ctx.set_gpr(3, ctx.gpr[18] + ctx.gpr[3]);
    ctx.set_gpr(3, ctx.gpr[3] & 7u);
    { const bool branch_taken = ctx.gpr[3] == 0u;
    // nop
      if (branch_taken) {
          goto L_08961958;
      }
      goto L_089618DC;
    }
L_089618DC:
    { const bool branch_taken = static_cast<std::int32_t>(ctx.gpr[4]) <= 0;
    // nop
      if (branch_taken) {
          goto L_08961958;
      }
      goto L_089618E4;
    }
L_089618E4:
    ctx.set_gpr(4, ctx.gpr[19] + 0u);
    ctx.set_gpr(5, 0u + 0u);
    ctx.set_gpr(25, rt.memory().aot_load32(ctx.gpr[19] + static_cast<std::uint32_t>(0)));
    ctx.set_gpr(25, rt.memory().aot_load32(ctx.gpr[25] + static_cast<std::uint32_t>(412)));
    jump_target = ctx.gpr[25];
    ctx.set_gpr(31, 0x089618FCu);
    // nop
    ctx.pc = jump_target;
    if (rt.invoke_chained_call(ctx, &aot_mem) && ctx.pc == 0x089618FCu) goto L_089618FC;
    return;
L_089618FC:
    ctx.set_gpr(4, ctx.gpr[19] + 0u);
    ctx.set_gpr(31, 0x08961908u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0081_entry, 81u, 30u, 0x089482C8u>(ctx, &aot_mem) && ctx.pc == 0x08961908u) goto L_08961908;
    return;
L_08961908:
    ctx.set_gpr(21, ctx.gpr[2] + 0u);
    ctx.set_gpr(4, ctx.gpr[19] + 0u);
    ctx.set_gpr(31, 0x08961918u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0081_entry, 81u, 30u, 0x089482C8u>(ctx, &aot_mem) && ctx.pc == 0x08961918u) goto L_08961918;
    return;
L_08961918:
    ctx.set_gpr(20, ctx.gpr[2] + 0u);
    ctx.set_gpr(4, ctx.gpr[19] + 0u);
    ctx.set_gpr(25, rt.memory().aot_load32(ctx.gpr[19] + static_cast<std::uint32_t>(0)));
    ctx.set_gpr(25, rt.memory().aot_load32(ctx.gpr[25] + static_cast<std::uint32_t>(456)));
    jump_target = ctx.gpr[25];
    ctx.set_gpr(31, 0x08961930u);
    // nop
    ctx.pc = jump_target;
    if (rt.invoke_chained_call(ctx, &aot_mem) && ctx.pc == 0x08961930u) goto L_08961930;
    return;
L_08961930:
    ctx.set_gpr(3, 2228u << 16u);
    ctx.set_gpr(4, rt.memory().aot_load32(ctx.gpr[3] + static_cast<std::uint32_t>(-11152)));
    ctx.set_gpr(5, ctx.gpr[21] + 0u);
    ctx.set_gpr(6, ctx.gpr[20] + 0u);
    ctx.set_gpr(7, ctx.gpr[2] + 0u);
    ctx.set_gpr(8, ctx.gpr[18] + 0u);
    ctx.set_gpr(9, 2228u << 16u);
    ctx.set_gpr(9, ctx.gpr[9] + static_cast<std::uint32_t>(100));
    ctx.set_gpr(31, 0x08961958u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0084_entry, 84u, 456u, 0x08955F2Cu>(ctx, &aot_mem) && ctx.pc == 0x08961958u) goto L_08961958;
    return;
L_08961958:
    ctx.set_gpr(4, rt.memory().aot_load32(ctx.gpr[19] + static_cast<std::uint32_t>(144)));
    { const bool branch_taken = static_cast<std::int32_t>(ctx.gpr[4]) <= 0;
    // nop
      if (branch_taken) {
          goto L_089619F0;
      }
      goto L_08961964;
    }
L_08961964:
    ctx.set_gpr(3, ctx.gpr[16] - ctx.gpr[17]);
    { const bool branch_taken = static_cast<std::int32_t>(ctx.gpr[3]) >= 0;
    // nop
      if (branch_taken) {
          goto L_089619F0;
      }
      goto L_08961970;
    }
L_08961970:
    { const bool branch_taken = static_cast<std::int32_t>(ctx.gpr[4]) <= 0;
    // nop
      if (branch_taken) {
          goto L_089619F0;
      }
      goto L_08961978;
    }
L_08961978:
    ctx.set_gpr(4, ctx.gpr[19] + 0u);
    ctx.set_gpr(5, 0u + 0u);
    ctx.set_gpr(25, rt.memory().aot_load32(ctx.gpr[19] + static_cast<std::uint32_t>(0)));
    ctx.set_gpr(25, rt.memory().aot_load32(ctx.gpr[25] + static_cast<std::uint32_t>(412)));
    jump_target = ctx.gpr[25];
    ctx.set_gpr(31, 0x08961990u);
    // nop
    ctx.pc = jump_target;
    if (rt.invoke_chained_call(ctx, &aot_mem) && ctx.pc == 0x08961990u) goto L_08961990;
    return;
L_08961990:
    ctx.set_gpr(4, ctx.gpr[19] + 0u);
    ctx.set_gpr(31, 0x0896199Cu);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0081_entry, 81u, 30u, 0x089482C8u>(ctx, &aot_mem) && ctx.pc == 0x0896199Cu) goto L_0896199C;
    return;
L_0896199C:
    ctx.set_gpr(21, ctx.gpr[2] + 0u);
    ctx.set_gpr(4, ctx.gpr[19] + 0u);
    ctx.set_gpr(31, 0x089619ACu);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0081_entry, 81u, 30u, 0x089482C8u>(ctx, &aot_mem) && ctx.pc == 0x089619ACu) goto L_089619AC;
    return;
L_089619AC:
    ctx.set_gpr(20, ctx.gpr[2] + 0u);
    ctx.set_gpr(4, ctx.gpr[19] + 0u);
    ctx.set_gpr(25, rt.memory().aot_load32(ctx.gpr[19] + static_cast<std::uint32_t>(0)));
    ctx.set_gpr(25, rt.memory().aot_load32(ctx.gpr[25] + static_cast<std::uint32_t>(456)));
    jump_target = ctx.gpr[25];
    ctx.set_gpr(31, 0x089619C4u);
    // nop
    ctx.pc = jump_target;
    if (rt.invoke_chained_call(ctx, &aot_mem) && ctx.pc == 0x089619C4u) goto L_089619C4;
    return;
L_089619C4:
    ctx.set_gpr(3, 2228u << 16u);
    ctx.set_gpr(4, rt.memory().aot_load32(ctx.gpr[3] + static_cast<std::uint32_t>(-11080)));
    ctx.set_gpr(5, ctx.gpr[21] + 0u);
    ctx.set_gpr(6, ctx.gpr[20] + 0u);
    ctx.set_gpr(7, ctx.gpr[2] + 0u);
    ctx.set_gpr(8, ctx.gpr[18] + 0u);
    ctx.set_gpr(9, 2228u << 16u);
    ctx.set_gpr(9, ctx.gpr[9] + static_cast<std::uint32_t>(136));
    ctx.set_gpr(10, ctx.gpr[16] + 0u);
    ctx.set_gpr(31, 0x089619F0u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0084_entry, 84u, 456u, 0x08955F2Cu>(ctx, &aot_mem) && ctx.pc == 0x089619F0u) goto L_089619F0;
    return;
L_089619F0:
    ctx.set_gpr(5, rt.memory().aot_load32(ctx.gpr[19] + static_cast<std::uint32_t>(144)));
    { const bool branch_taken = static_cast<std::int32_t>(ctx.gpr[5]) <= 0;
    // nop
      if (branch_taken) {
          goto L_08961A9C;
      }
      goto L_089619FC;
    }
L_089619FC:
    ctx.set_gpr(3, rt.memory().aot_load32(ctx.gpr[19] + static_cast<std::uint32_t>(216)));
    ctx.set_gpr(4, ctx.gpr[3] + static_cast<std::uint32_t>(7));
    ctx.set_gpr(3, 0u + static_cast<std::uint32_t>(-8));
    ctx.set_gpr(3, ctx.gpr[4] & ctx.gpr[3]);
    ctx.set_gpr(3, ctx.gpr[17] + ctx.gpr[3]);
    ctx.set_gpr(3, ctx.gpr[16] - ctx.gpr[3]);
    { const bool branch_taken = static_cast<std::int32_t>(ctx.gpr[3]) < 0;
    // nop
      if (branch_taken) {
          goto L_08961A9C;
      }
      goto L_08961A1C;
    }
L_08961A1C:
    { const bool branch_taken = static_cast<std::int32_t>(ctx.gpr[5]) <= 0;
    // nop
      if (branch_taken) {
          goto L_08961A9C;
      }
      goto L_08961A24;
    }
L_08961A24:
    ctx.set_gpr(4, ctx.gpr[19] + 0u);
    ctx.set_gpr(5, 0u + 0u);
    ctx.set_gpr(25, rt.memory().aot_load32(ctx.gpr[19] + static_cast<std::uint32_t>(0)));
    ctx.set_gpr(25, rt.memory().aot_load32(ctx.gpr[25] + static_cast<std::uint32_t>(412)));
    jump_target = ctx.gpr[25];
    ctx.set_gpr(31, 0x08961A3Cu);
    // nop
    ctx.pc = jump_target;
    if (rt.invoke_chained_call(ctx, &aot_mem) && ctx.pc == 0x08961A3Cu) goto L_08961A3C;
    return;
L_08961A3C:
    ctx.set_gpr(4, ctx.gpr[19] + 0u);
    ctx.set_gpr(31, 0x08961A48u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0081_entry, 81u, 30u, 0x089482C8u>(ctx, &aot_mem) && ctx.pc == 0x08961A48u) goto L_08961A48;
    return;
L_08961A48:
    ctx.set_gpr(20, ctx.gpr[2] + 0u);
    ctx.set_gpr(4, ctx.gpr[19] + 0u);
    ctx.set_gpr(31, 0x08961A58u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0081_entry, 81u, 30u, 0x089482C8u>(ctx, &aot_mem) && ctx.pc == 0x08961A58u) goto L_08961A58;
    return;
L_08961A58:
    ctx.set_gpr(17, ctx.gpr[2] + 0u);
    ctx.set_gpr(4, ctx.gpr[19] + 0u);
    ctx.set_gpr(25, rt.memory().aot_load32(ctx.gpr[19] + static_cast<std::uint32_t>(0)));
    ctx.set_gpr(25, rt.memory().aot_load32(ctx.gpr[25] + static_cast<std::uint32_t>(456)));
    jump_target = ctx.gpr[25];
    ctx.set_gpr(31, 0x08961A70u);
    // nop
    ctx.pc = jump_target;
    if (rt.invoke_chained_call(ctx, &aot_mem) && ctx.pc == 0x08961A70u) goto L_08961A70;
    return;
L_08961A70:
    ctx.set_gpr(3, 2228u << 16u);
    ctx.set_gpr(4, rt.memory().aot_load32(ctx.gpr[3] + static_cast<std::uint32_t>(-11080)));
    ctx.set_gpr(5, ctx.gpr[20] + 0u);
    ctx.set_gpr(6, ctx.gpr[17] + 0u);
    ctx.set_gpr(7, ctx.gpr[2] + 0u);
    ctx.set_gpr(8, ctx.gpr[18] + 0u);
    ctx.set_gpr(9, 2228u << 16u);
    ctx.set_gpr(9, ctx.gpr[9] + static_cast<std::uint32_t>(180));
    ctx.set_gpr(10, ctx.gpr[16] + 0u);
    ctx.set_gpr(31, 0x08961A9Cu);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0084_entry, 84u, 456u, 0x08955F2Cu>(ctx, &aot_mem) && ctx.pc == 0x08961A9Cu) goto L_08961A9C;
    return;
L_08961A9C:
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
L_08961AC4:
    ctx.set_gpr(29, ctx.gpr[29] + static_cast<std::uint32_t>(-32));
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(28), ctx.gpr[31]);
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(24), ctx.gpr[19]);
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(20), ctx.gpr[18]);
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(16), ctx.gpr[17]);
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(12), ctx.gpr[16]);
    ctx.set_gpr(17, ctx.gpr[4] + 0u);
    ctx.set_gpr(16, ctx.gpr[5] + 0u);
    ctx.set_gpr(31, 0x08961AECu);
    // nop
    goto L_089613C4;
L_08961AEC:
    ctx.set_gpr(4, rt.memory().aot_load32(ctx.gpr[17] + static_cast<std::uint32_t>(144)));
    { const bool branch_taken = static_cast<std::int32_t>(ctx.gpr[4]) <= 0;
    // nop
      if (branch_taken) {
          goto L_08961B84;
      }
      goto L_08961AF8;
    }
L_08961AF8:
    ctx.set_gpr(3, rt.memory().aot_load8(ctx.gpr[16] + static_cast<std::uint32_t>(0)));
    ctx.set_gpr(3, ctx.gpr[3] & 1u);
    { const bool branch_taken = ctx.gpr[3] != 0u;
    // nop
      if (branch_taken) {
          goto L_08961B84;
      }
      goto L_08961B08;
    }
L_08961B08:
    { const bool branch_taken = static_cast<std::int32_t>(ctx.gpr[4]) <= 0;
    // nop
      if (branch_taken) {
          goto L_08961B84;
      }
      goto L_08961B10;
    }
L_08961B10:
    ctx.set_gpr(4, ctx.gpr[17] + 0u);
    ctx.set_gpr(5, 0u + 0u);
    ctx.set_gpr(25, rt.memory().aot_load32(ctx.gpr[17] + static_cast<std::uint32_t>(0)));
    ctx.set_gpr(25, rt.memory().aot_load32(ctx.gpr[25] + static_cast<std::uint32_t>(412)));
    jump_target = ctx.gpr[25];
    ctx.set_gpr(31, 0x08961B28u);
    // nop
    ctx.pc = jump_target;
    if (rt.invoke_chained_call(ctx, &aot_mem) && ctx.pc == 0x08961B28u) goto L_08961B28;
    return;
L_08961B28:
    ctx.set_gpr(4, ctx.gpr[17] + 0u);
    ctx.set_gpr(31, 0x08961B34u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0081_entry, 81u, 30u, 0x089482C8u>(ctx, &aot_mem) && ctx.pc == 0x08961B34u) goto L_08961B34;
    return;
L_08961B34:
    ctx.set_gpr(19, ctx.gpr[2] + 0u);
    ctx.set_gpr(4, ctx.gpr[17] + 0u);
    ctx.set_gpr(31, 0x08961B44u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0081_entry, 81u, 30u, 0x089482C8u>(ctx, &aot_mem) && ctx.pc == 0x08961B44u) goto L_08961B44;
    return;
L_08961B44:
    ctx.set_gpr(18, ctx.gpr[2] + 0u);
    ctx.set_gpr(4, ctx.gpr[17] + 0u);
    ctx.set_gpr(25, rt.memory().aot_load32(ctx.gpr[17] + static_cast<std::uint32_t>(0)));
    ctx.set_gpr(25, rt.memory().aot_load32(ctx.gpr[25] + static_cast<std::uint32_t>(456)));
    jump_target = ctx.gpr[25];
    ctx.set_gpr(31, 0x08961B5Cu);
    // nop
    ctx.pc = jump_target;
    if (rt.invoke_chained_call(ctx, &aot_mem) && ctx.pc == 0x08961B5Cu) goto L_08961B5C;
    return;
L_08961B5C:
    ctx.set_gpr(3, 2228u << 16u);
    ctx.set_gpr(4, rt.memory().aot_load32(ctx.gpr[3] + static_cast<std::uint32_t>(-11152)));
    ctx.set_gpr(5, ctx.gpr[19] + 0u);
    ctx.set_gpr(6, ctx.gpr[18] + 0u);
    ctx.set_gpr(7, ctx.gpr[2] + 0u);
    ctx.set_gpr(8, ctx.gpr[16] + 0u);
    ctx.set_gpr(9, 2228u << 16u);
    ctx.set_gpr(9, ctx.gpr[9] + static_cast<std::uint32_t>(224));
    ctx.set_gpr(31, 0x08961B84u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0084_entry, 84u, 456u, 0x08955F2Cu>(ctx, &aot_mem) && ctx.pc == 0x08961B84u) goto L_08961B84;
    return;
L_08961B84:
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
L_08961BA4:
    ctx.set_gpr(29, ctx.gpr[29] + static_cast<std::uint32_t>(-48));
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
    ctx.set_gpr(18, ctx.gpr[4] + 0u);
    ctx.set_gpr(22, 0u + 0u);
    ctx.set_gpr(21, rt.memory().aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(212)));
    ctx.set_gpr(6, rt.memory().aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(144)));
    ctx.set_gpr(5, rt.memory().aot_load32(ctx.gpr[21] + static_cast<std::uint32_t>(44)));
    { const bool branch_taken = ctx.gpr[5] == 0u;
    // nop
      if (branch_taken) {
          goto L_08961BF8;
      }
      goto L_08961BEC;
    }
L_08961BEC:
    ctx.set_gpr(3, ctx.gpr[21] + static_cast<std::uint32_t>(72));
    { const bool branch_taken = ctx.gpr[5] != ctx.gpr[3];
    // nop
      if (branch_taken) {
          goto L_08961C00;
      }
      goto L_08961BF8;
    }
L_08961BF8:
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_08962B50;
      }
      goto L_08961C00;
    }
L_08961C00:
    { const bool branch_taken = static_cast<std::int32_t>(ctx.gpr[6]) <= 0;
    // nop
      if (branch_taken) {
          goto L_08961C98;
      }
      goto L_08961C08;
    }
L_08961C08:
    ctx.set_gpr(5, rt.memory().aot_load32(ctx.gpr[21] + static_cast<std::uint32_t>(2012)));
    ctx.set_gpr(3, ctx.gpr[5] + static_cast<std::uint32_t>(-1));
    ctx.set_gpr(3, ctx.gpr[5] & ctx.gpr[3]);
    { const bool branch_taken = ctx.gpr[3] == 0u;
    // nop
      if (branch_taken) {
          goto L_08961C98;
      }
      goto L_08961C1C;
    }
L_08961C1C:
    { const bool branch_taken = static_cast<std::int32_t>(ctx.gpr[6]) <= 0;
    // nop
      if (branch_taken) {
          goto L_08961C98;
      }
      goto L_08961C24;
    }
L_08961C24:
    ctx.set_gpr(5, 0u + 0u);
    ctx.set_gpr(25, rt.memory().aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(0)));
    ctx.set_gpr(25, rt.memory().aot_load32(ctx.gpr[25] + static_cast<std::uint32_t>(412)));
    jump_target = ctx.gpr[25];
    ctx.set_gpr(31, 0x08961C38u);
    // nop
    ctx.pc = jump_target;
    if (rt.invoke_chained_call(ctx, &aot_mem) && ctx.pc == 0x08961C38u) goto L_08961C38;
    return;
L_08961C38:
    ctx.set_gpr(4, ctx.gpr[18] + 0u);
    ctx.set_gpr(31, 0x08961C44u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0081_entry, 81u, 30u, 0x089482C8u>(ctx, &aot_mem) && ctx.pc == 0x08961C44u) goto L_08961C44;
    return;
L_08961C44:
    ctx.set_gpr(17, ctx.gpr[2] + 0u);
    ctx.set_gpr(4, ctx.gpr[18] + 0u);
    ctx.set_gpr(25, rt.memory().aot_load32(ctx.gpr[18] + static_cast<std::uint32_t>(0)));
    ctx.set_gpr(25, rt.memory().aot_load32(ctx.gpr[25] + static_cast<std::uint32_t>(464)));
    jump_target = ctx.gpr[25];
    ctx.set_gpr(31, 0x08961C5Cu);
    // nop
    ctx.pc = jump_target;
    if (rt.invoke_chained_call(ctx, &aot_mem) && ctx.pc == 0x08961C5Cu) goto L_08961C5C;
    return;
L_08961C5C:
    ctx.set_gpr(16, ctx.gpr[2] + 0u);
    ctx.set_gpr(4, ctx.gpr[18] + 0u);
    ctx.set_gpr(25, rt.memory().aot_load32(ctx.gpr[18] + static_cast<std::uint32_t>(0)));
    ctx.set_gpr(25, rt.memory().aot_load32(ctx.gpr[25] + static_cast<std::uint32_t>(456)));
    jump_target = ctx.gpr[25];
    ctx.set_gpr(31, 0x08961C74u);
    // nop
    ctx.pc = jump_target;
    if (rt.invoke_chained_call(ctx, &aot_mem) && ctx.pc == 0x08961C74u) goto L_08961C74;
    return;
L_08961C74:
    ctx.set_gpr(3, 2228u << 16u);
    ctx.set_gpr(4, rt.memory().aot_load32(ctx.gpr[3] + static_cast<std::uint32_t>(-11220)));
    ctx.set_gpr(5, ctx.gpr[17] + 0u);
    ctx.set_gpr(6, ctx.gpr[16] + 0u);
    ctx.set_gpr(7, ctx.gpr[2] + 0u);
    ctx.set_gpr(8, 2228u << 16u);
    ctx.set_gpr(8, ctx.gpr[8] + static_cast<std::uint32_t>(248));
    ctx.set_gpr(31, 0x08961C98u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0084_entry, 84u, 456u, 0x08955F2Cu>(ctx, &aot_mem) && ctx.pc == 0x08961C98u) goto L_08961C98;
    return;
L_08961C98:
    ctx.set_gpr(6, rt.memory().aot_load32(ctx.gpr[18] + static_cast<std::uint32_t>(144)));
    { const bool branch_taken = static_cast<std::int32_t>(ctx.gpr[6]) <= 0;
    // nop
      if (branch_taken) {
          goto L_08961D58;
      }
      goto L_08961CA4;
    }
L_08961CA4:
    ctx.set_gpr(5, rt.memory().aot_load32(ctx.gpr[18] + static_cast<std::uint32_t>(216)));
    ctx.set_gpr(4, rt.memory().aot_load32(ctx.gpr[21] + static_cast<std::uint32_t>(0)));
    ctx.set_gpr(3, 0u + static_cast<std::uint32_t>(-4));
    ctx.set_gpr(3, ctx.gpr[4] & ctx.gpr[3]);
    ctx.set_gpr(1, ctx.gpr[5] < static_cast<std::uint32_t>(92) ? 1u : 0u);
    { const bool branch_taken = ctx.gpr[1] != 0u;
    // nop
      if (branch_taken) {
          goto L_08961CC8;
      }
      goto L_08961CC0;
    }
L_08961CC0:
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_08961CCC;
      }
      goto L_08961CC8;
    }
L_08961CC8:
    ctx.set_gpr(5, 0u + static_cast<std::uint32_t>(88));
    goto L_08961CCC;
L_08961CCC:
    ctx.set_gpr(1, ctx.gpr[5] < ctx.gpr[3] ? 1u : 0u);
    { const bool branch_taken = ctx.gpr[1] == 0u;
    // nop
      if (branch_taken) {
          goto L_08961D58;
      }
      goto L_08961CD8;
    }
L_08961CD8:
    { const bool branch_taken = static_cast<std::int32_t>(ctx.gpr[6]) <= 0;
    // nop
      if (branch_taken) {
          goto L_08961D58;
      }
      goto L_08961CE0;
    }
L_08961CE0:
    ctx.set_gpr(4, ctx.gpr[18] + 0u);
    ctx.set_gpr(5, 0u + 0u);
    ctx.set_gpr(25, rt.memory().aot_load32(ctx.gpr[18] + static_cast<std::uint32_t>(0)));
    ctx.set_gpr(25, rt.memory().aot_load32(ctx.gpr[25] + static_cast<std::uint32_t>(412)));
    jump_target = ctx.gpr[25];
    ctx.set_gpr(31, 0x08961CF8u);
    // nop
    ctx.pc = jump_target;
    if (rt.invoke_chained_call(ctx, &aot_mem) && ctx.pc == 0x08961CF8u) goto L_08961CF8;
    return;
L_08961CF8:
    ctx.set_gpr(4, ctx.gpr[18] + 0u);
    ctx.set_gpr(31, 0x08961D04u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0081_entry, 81u, 30u, 0x089482C8u>(ctx, &aot_mem) && ctx.pc == 0x08961D04u) goto L_08961D04;
    return;
L_08961D04:
    ctx.set_gpr(17, ctx.gpr[2] + 0u);
    ctx.set_gpr(4, ctx.gpr[18] + 0u);
    ctx.set_gpr(25, rt.memory().aot_load32(ctx.gpr[18] + static_cast<std::uint32_t>(0)));
    ctx.set_gpr(25, rt.memory().aot_load32(ctx.gpr[25] + static_cast<std::uint32_t>(464)));
    jump_target = ctx.gpr[25];
    ctx.set_gpr(31, 0x08961D1Cu);
    // nop
    ctx.pc = jump_target;
    if (rt.invoke_chained_call(ctx, &aot_mem) && ctx.pc == 0x08961D1Cu) goto L_08961D1C;
    return;
L_08961D1C:
    ctx.set_gpr(16, ctx.gpr[2] + 0u);
    ctx.set_gpr(4, ctx.gpr[18] + 0u);
    ctx.set_gpr(25, rt.memory().aot_load32(ctx.gpr[18] + static_cast<std::uint32_t>(0)));
    ctx.set_gpr(25, rt.memory().aot_load32(ctx.gpr[25] + static_cast<std::uint32_t>(456)));
    jump_target = ctx.gpr[25];
    ctx.set_gpr(31, 0x08961D34u);
    // nop
    ctx.pc = jump_target;
    if (rt.invoke_chained_call(ctx, &aot_mem) && ctx.pc == 0x08961D34u) goto L_08961D34;
    return;
L_08961D34:
    ctx.set_gpr(3, 2228u << 16u);
    ctx.set_gpr(4, rt.memory().aot_load32(ctx.gpr[3] + static_cast<std::uint32_t>(-11220)));
    ctx.set_gpr(5, ctx.gpr[17] + 0u);
    ctx.set_gpr(6, ctx.gpr[16] + 0u);
    ctx.set_gpr(7, ctx.gpr[2] + 0u);
    ctx.set_gpr(8, 2228u << 16u);
    ctx.set_gpr(8, ctx.gpr[8] + static_cast<std::uint32_t>(300));
    ctx.set_gpr(31, 0x08961D58u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0084_entry, 84u, 456u, 0x08955F2Cu>(ctx, &aot_mem) && ctx.pc == 0x08961D58u) goto L_08961D58;
    return;
L_08961D58:
    ctx.set_gpr(3, rt.memory().aot_load32(ctx.gpr[21] + static_cast<std::uint32_t>(0)));
    ctx.set_gpr(3, ctx.gpr[3] >> 3u);
    ctx.set_gpr(30, ctx.gpr[3] + static_cast<std::uint32_t>(-2));
    ctx.set_gpr(17, 0u + 0u);
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_089622BC;
      }
      goto L_08961D70;
    }
L_08961D70:
    ctx.set_gpr(3, ctx.gpr[17] << 2u);
    ctx.set_gpr(3, ctx.gpr[3] + ctx.gpr[21]);
    ctx.set_gpr(16, rt.memory().aot_load32(ctx.gpr[3] + static_cast<std::uint32_t>(4)));
    ctx.set_gpr(1, ctx.gpr[30] < ctx.gpr[17] ? 1u : 0u);
    { const bool branch_taken = ctx.gpr[1] == 0u;
    // nop
      if (branch_taken) {
          goto L_08961E1C;
      }
      goto L_08961D88;
    }
L_08961D88:
    ctx.set_gpr(3, rt.memory().aot_load32(ctx.gpr[18] + static_cast<std::uint32_t>(144)));
    { const bool branch_taken = static_cast<std::int32_t>(ctx.gpr[3]) <= 0;
    // nop
      if (branch_taken) {
          goto L_08961E1C;
      }
      goto L_08961D94;
    }
L_08961D94:
    { const bool branch_taken = ctx.gpr[16] == 0u;
    // nop
      if (branch_taken) {
          goto L_08961E1C;
      }
      goto L_08961D9C;
    }
L_08961D9C:
    { const bool branch_taken = static_cast<std::int32_t>(ctx.gpr[3]) <= 0;
    // nop
      if (branch_taken) {
          goto L_08961E1C;
      }
      goto L_08961DA4;
    }
L_08961DA4:
    ctx.set_gpr(4, ctx.gpr[18] + 0u);
    ctx.set_gpr(5, 0u + 0u);
    ctx.set_gpr(25, rt.memory().aot_load32(ctx.gpr[18] + static_cast<std::uint32_t>(0)));
    ctx.set_gpr(25, rt.memory().aot_load32(ctx.gpr[25] + static_cast<std::uint32_t>(412)));
    jump_target = ctx.gpr[25];
    ctx.set_gpr(31, 0x08961DBCu);
    // nop
    ctx.pc = jump_target;
    if (rt.invoke_chained_call(ctx, &aot_mem) && ctx.pc == 0x08961DBCu) goto L_08961DBC;
    return;
L_08961DBC:
    ctx.set_gpr(4, ctx.gpr[18] + 0u);
    ctx.set_gpr(31, 0x08961DC8u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0081_entry, 81u, 30u, 0x089482C8u>(ctx, &aot_mem) && ctx.pc == 0x08961DC8u) goto L_08961DC8;
    return;
L_08961DC8:
    ctx.set_gpr(19, ctx.gpr[2] + 0u);
    ctx.set_gpr(4, ctx.gpr[18] + 0u);
    ctx.set_gpr(25, rt.memory().aot_load32(ctx.gpr[18] + static_cast<std::uint32_t>(0)));
    ctx.set_gpr(25, rt.memory().aot_load32(ctx.gpr[25] + static_cast<std::uint32_t>(464)));
    jump_target = ctx.gpr[25];
    ctx.set_gpr(31, 0x08961DE0u);
    // nop
    ctx.pc = jump_target;
    if (rt.invoke_chained_call(ctx, &aot_mem) && ctx.pc == 0x08961DE0u) goto L_08961DE0;
    return;
L_08961DE0:
    ctx.set_gpr(20, ctx.gpr[2] + 0u);
    ctx.set_gpr(4, ctx.gpr[18] + 0u);
    ctx.set_gpr(25, rt.memory().aot_load32(ctx.gpr[18] + static_cast<std::uint32_t>(0)));
    ctx.set_gpr(25, rt.memory().aot_load32(ctx.gpr[25] + static_cast<std::uint32_t>(456)));
    jump_target = ctx.gpr[25];
    ctx.set_gpr(31, 0x08961DF8u);
    // nop
    ctx.pc = jump_target;
    if (rt.invoke_chained_call(ctx, &aot_mem) && ctx.pc == 0x08961DF8u) goto L_08961DF8;
    return;
L_08961DF8:
    ctx.set_gpr(3, 2228u << 16u);
    ctx.set_gpr(4, rt.memory().aot_load32(ctx.gpr[3] + static_cast<std::uint32_t>(-11220)));
    ctx.set_gpr(5, ctx.gpr[19] + 0u);
    ctx.set_gpr(6, ctx.gpr[20] + 0u);
    ctx.set_gpr(7, ctx.gpr[2] + 0u);
    ctx.set_gpr(8, 2228u << 16u);
    ctx.set_gpr(8, ctx.gpr[8] + static_cast<std::uint32_t>(360));
    ctx.set_gpr(31, 0x08961E1Cu);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0084_entry, 84u, 456u, 0x08955F2Cu>(ctx, &aot_mem) && ctx.pc == 0x08961E1Cu) goto L_08961E1C;
    return;
L_08961E1C:
    { const bool branch_taken = ctx.gpr[16] == 0u;
    // nop
      if (branch_taken) {
          goto L_089622B0;
      }
      goto L_08961E24;
    }
L_08961E24:
    ctx.set_gpr(5, rt.memory().aot_load32(ctx.gpr[18] + static_cast<std::uint32_t>(144)));
    { const bool branch_taken = static_cast<std::int32_t>(ctx.gpr[5]) <= 0;
    // nop
      if (branch_taken) {
          goto L_089622B0;
      }
      goto L_08961E30;
    }
L_08961E30:
    ctx.set_gpr(4, rt.memory().aot_load32(ctx.gpr[18] + static_cast<std::uint32_t>(132)));
    { const bool branch_taken = ctx.gpr[4] == 0u;
    // nop
      if (branch_taken) {
          goto L_089622B0;
      }
      goto L_08961E3C;
    }
L_08961E3C:
    ctx.set_gpr(3, rt.memory().aot_load32(ctx.gpr[18] + static_cast<std::uint32_t>(128)));
    ctx.set_gpr(3, ctx.gpr[16] < ctx.gpr[3] ? 1u : 0u);
    { const bool branch_taken = ctx.gpr[3] != 0u;
    // nop
      if (branch_taken) {
          goto L_08961F2C;
      }
      goto L_08961E4C;
    }
L_08961E4C:
    ctx.set_gpr(1, ctx.gpr[16] < ctx.gpr[4] ? 1u : 0u);
    { const bool branch_taken = ctx.gpr[1] == 0u;
    // nop
      if (branch_taken) {
          goto L_08961F2C;
      }
      goto L_08961E58;
    }
L_08961E58:
    ctx.set_gpr(3, rt.memory().aot_load8(ctx.gpr[16] + static_cast<std::uint32_t>(3)));
    ctx.set_gpr(3, ctx.gpr[3] << 24u);
    ctx.set_gpr(3, ctx.gpr[3] >> 31u);
    ctx.set_gpr(3, ctx.gpr[3] & 255u);
    ctx.set_gpr(8, rt.memory().aot_load32(ctx.gpr[18] + static_cast<std::uint32_t>(72)));
    { const bool branch_taken = ctx.gpr[3] != 0u;
    // nop
      if (branch_taken) {
          goto L_08961E88;
      }
      goto L_08961E74;
    }
L_08961E74:
    ctx.set_gpr(6, rt.memory().aot_load16(ctx.gpr[16] + static_cast<std::uint32_t>(2)));
    ctx.set_gpr(6, ctx.gpr[6] << 19u);
    ctx.set_gpr(6, ctx.gpr[6] >> 24u);
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_08961EA8;
      }
      goto L_08961E88;
    }
L_08961E88:
    ctx.set_gpr(6, rt.memory().aot_load16(ctx.gpr[16] + static_cast<std::uint32_t>(2)));
    ctx.set_gpr(6, ctx.gpr[6] << 19u);
    ctx.set_gpr(7, ctx.gpr[6] >> 24u);
    ctx.set_gpr(6, rt.memory().aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(8)));
    ctx.set_gpr(6, ctx.gpr[6] << 8u);
    ctx.set_gpr(6, ctx.gpr[6] >> 23u);
    ctx.set_gpr(6, ctx.gpr[6] << 8u);
    ctx.set_gpr(6, ctx.gpr[7] + ctx.gpr[6]);
    goto L_08961EA8;
L_08961EA8:
    { const bool branch_taken = ctx.gpr[8] != ctx.gpr[6];
    // nop
      if (branch_taken) {
          goto L_08961F2C;
      }
      goto L_08961EB0;
    }
L_08961EB0:
    { const bool branch_taken = ctx.gpr[3] != 0u;
    // nop
      if (branch_taken) {
          goto L_08961ED0;
      }
      goto L_08961EB8;
    }
L_08961EB8:
    ctx.set_gpr(6, rt.memory().aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(0)));
    ctx.set_gpr(6, ctx.gpr[6] << 11u);
    ctx.set_gpr(7, ctx.gpr[6] >> 16u);
    ctx.set_gpr(6, ctx.gpr[7] + 0u);
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_08961EEC;
      }
      goto L_08961ED0;
    }
L_08961ED0:
    ctx.set_gpr(6, rt.memory().aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(0)));
    ctx.set_gpr(6, ctx.gpr[6] << 11u);
    ctx.set_gpr(7, ctx.gpr[6] >> 16u);
    ctx.set_gpr(6, rt.memory().aot_load16(ctx.gpr[16] + static_cast<std::uint32_t>(8)));
    ctx.set_gpr(6, ctx.gpr[6] & 32767u);
    ctx.set_gpr(6, ctx.gpr[6] << 16u);
    ctx.set_gpr(6, ctx.gpr[7] + ctx.gpr[6]);
    goto L_08961EEC;
L_08961EEC:
    ctx.set_gpr(1, 8192u << 16u);
    ctx.set_gpr(1, ctx.gpr[6] < ctx.gpr[1] ? 1u : 0u);
    { const bool branch_taken = ctx.gpr[1] == 0u;
    // nop
      if (branch_taken) {
          goto L_08961F2C;
      }
      goto L_08961EFC;
    }
L_08961EFC:
    { const bool branch_taken = ctx.gpr[3] != 0u;
    // nop
      if (branch_taken) {
          goto L_08961F0C;
      }
      goto L_08961F04;
    }
L_08961F04:
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_08961F1C;
      }
      goto L_08961F0C;
    }
L_08961F0C:
    ctx.set_gpr(3, rt.memory().aot_load16(ctx.gpr[16] + static_cast<std::uint32_t>(8)));
    ctx.set_gpr(3, ctx.gpr[3] & 32767u);
    ctx.set_gpr(3, ctx.gpr[3] << 16u);
    ctx.set_gpr(7, ctx.gpr[7] + ctx.gpr[3]);
    goto L_08961F1C;
L_08961F1C:
    ctx.set_gpr(3, ctx.gpr[16] + ctx.gpr[7]);
    ctx.set_gpr(1, ctx.gpr[4] < ctx.gpr[3] ? 1u : 0u);
    { const bool branch_taken = ctx.gpr[1] == 0u;
    // nop
      if (branch_taken) {
          goto L_089622B0;
      }
      goto L_08961F2C;
    }
L_08961F2C:
    { const bool branch_taken = static_cast<std::int32_t>(ctx.gpr[5]) <= 0;
    // nop
      if (branch_taken) {
          goto L_089622B0;
      }
      goto L_08961F34;
    }
L_08961F34:
    ctx.set_gpr(4, ctx.gpr[18] + 0u);
    ctx.set_gpr(5, 0u + 0u);
    ctx.set_gpr(25, rt.memory().aot_load32(ctx.gpr[18] + static_cast<std::uint32_t>(0)));
    ctx.set_gpr(25, rt.memory().aot_load32(ctx.gpr[25] + static_cast<std::uint32_t>(412)));
    jump_target = ctx.gpr[25];
    ctx.set_gpr(31, 0x08961F4Cu);
    // nop
    ctx.pc = jump_target;
    if (rt.invoke_chained_call(ctx, &aot_mem) && ctx.pc == 0x08961F4Cu) goto L_08961F4C;
    return;
L_08961F4C:
    ctx.set_gpr(4, ctx.gpr[18] + 0u);
    ctx.set_gpr(31, 0x08961F58u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0081_entry, 81u, 30u, 0x089482C8u>(ctx, &aot_mem) && ctx.pc == 0x08961F58u) goto L_08961F58;
    return;
L_08961F58:
    ctx.set_gpr(19, ctx.gpr[2] + 0u);
    ctx.set_gpr(4, ctx.gpr[18] + 0u);
    ctx.set_gpr(25, rt.memory().aot_load32(ctx.gpr[18] + static_cast<std::uint32_t>(0)));
    ctx.set_gpr(25, rt.memory().aot_load32(ctx.gpr[25] + static_cast<std::uint32_t>(464)));
    jump_target = ctx.gpr[25];
    ctx.set_gpr(31, 0x08961F70u);
    // nop
    ctx.pc = jump_target;
    if (rt.invoke_chained_call(ctx, &aot_mem) && ctx.pc == 0x08961F70u) goto L_08961F70;
    return;
L_08961F70:
    ctx.set_gpr(20, ctx.gpr[2] + 0u);
    ctx.set_gpr(4, ctx.gpr[18] + 0u);
    ctx.set_gpr(25, rt.memory().aot_load32(ctx.gpr[18] + static_cast<std::uint32_t>(0)));
    ctx.set_gpr(25, rt.memory().aot_load32(ctx.gpr[25] + static_cast<std::uint32_t>(456)));
    jump_target = ctx.gpr[25];
    ctx.set_gpr(31, 0x08961F88u);
    // nop
    ctx.pc = jump_target;
    if (rt.invoke_chained_call(ctx, &aot_mem) && ctx.pc == 0x08961F88u) goto L_08961F88;
    return;
L_08961F88:
    ctx.set_gpr(3, 2228u << 16u);
    ctx.set_gpr(4, rt.memory().aot_load32(ctx.gpr[3] + static_cast<std::uint32_t>(-11252)));
    ctx.set_gpr(5, ctx.gpr[19] + 0u);
    ctx.set_gpr(6, ctx.gpr[20] + 0u);
    ctx.set_gpr(7, ctx.gpr[2] + 0u);
    ctx.set_gpr(8, 2228u << 16u);
    ctx.set_gpr(8, ctx.gpr[8] + static_cast<std::uint32_t>(444));
    ctx.set_gpr(9, ctx.gpr[16] + 0u);
    ctx.set_gpr(31, 0x08961FB0u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0084_entry, 84u, 456u, 0x08955F2Cu>(ctx, &aot_mem) && ctx.pc == 0x08961FB0u) goto L_08961FB0;
    return;
L_08961FB0:
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_089622B0;
      }
      goto L_08961FB8;
    }
L_08961FB8:
    ctx.set_gpr(4, ctx.gpr[18] + 0u);
    ctx.set_gpr(5, ctx.gpr[16] + 0u);
    ctx.set_gpr(31, 0x08961FC8u);
    // nop
    goto L_08960E58;
L_08961FC8:
    ctx.set_gpr(3, rt.memory().aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(0)));
    ctx.set_gpr(3, ctx.gpr[3] << 11u);
    ctx.set_gpr(4, ctx.gpr[3] >> 16u);
    ctx.set_gpr(6, ctx.gpr[4] + 0u);
    ctx.set_gpr(3, rt.memory().aot_load8(ctx.gpr[16] + static_cast<std::uint32_t>(3)));
    ctx.set_gpr(3, ctx.gpr[3] << 24u);
    ctx.set_gpr(3, ctx.gpr[3] >> 31u);
    ctx.set_gpr(3, ctx.gpr[3] & 255u);
    ctx.set_gpr(5, 0u + static_cast<std::uint32_t>(1));
    { const bool branch_taken = ctx.gpr[3] != ctx.gpr[5];
    // nop
      if (branch_taken) {
          goto L_08962004;
      }
      goto L_08961FF4;
    }
L_08961FF4:
    ctx.set_gpr(5, rt.memory().aot_load16(ctx.gpr[16] + static_cast<std::uint32_t>(8)));
    ctx.set_gpr(5, ctx.gpr[5] & 32767u);
    ctx.set_gpr(5, ctx.gpr[5] << 16u);
    ctx.set_gpr(6, ctx.gpr[4] + ctx.gpr[5]);
    goto L_08962004;
L_08962004:
    ctx.set_gpr(6, ctx.gpr[6] + static_cast<std::uint32_t>(3));
    ctx.set_gpr(5, 0u + static_cast<std::uint32_t>(-4));
    ctx.set_gpr(6, ctx.gpr[6] & ctx.gpr[5]);
    ctx.set_gpr(5, rt.memory().aot_load8(ctx.gpr[16] + static_cast<std::uint32_t>(0)));
    ctx.set_gpr(5, ctx.gpr[5] << 27u);
    ctx.set_gpr(5, ctx.gpr[5] >> 28u);
    ctx.set_gpr(5, ctx.gpr[5] & 255u);
    ctx.set_gpr(5, ctx.gpr[5] + static_cast<std::uint32_t>(1));
    ctx.set_gpr(7, ctx.gpr[5] << 2u);
    ctx.set_gpr(5, ctx.gpr[6] + ctx.gpr[7]);
    ctx.set_gpr(22, ctx.gpr[22] + ctx.gpr[5]);
    ctx.set_gpr(6, rt.memory().aot_load32(ctx.gpr[18] + static_cast<std::uint32_t>(144)));
    { const bool branch_taken = static_cast<std::int32_t>(ctx.gpr[6]) <= 0;
    // nop
      if (branch_taken) {
          goto L_089620F4;
      }
      goto L_0896203C;
    }
L_0896203C:
    ctx.set_gpr(5, 0u + static_cast<std::uint32_t>(1));
    { const bool branch_taken = ctx.gpr[3] != ctx.gpr[5];
    // nop
      if (branch_taken) {
          goto L_08962058;
      }
      goto L_08962048;
    }
L_08962048:
    ctx.set_gpr(3, rt.memory().aot_load16(ctx.gpr[16] + static_cast<std::uint32_t>(8)));
    ctx.set_gpr(3, ctx.gpr[3] & 32767u);
    ctx.set_gpr(3, ctx.gpr[3] << 16u);
    ctx.set_gpr(4, ctx.gpr[4] + ctx.gpr[3]);
    goto L_08962058;
L_08962058:
    ctx.set_gpr(4, ctx.gpr[4] + static_cast<std::uint32_t>(3));
    ctx.set_gpr(3, 0u + static_cast<std::uint32_t>(-4));
    ctx.set_gpr(3, ctx.gpr[4] & ctx.gpr[3]);
    ctx.set_gpr(3, ctx.gpr[3] + ctx.gpr[7]);
    ctx.set_gpr(3, ctx.gpr[3] >> 3u);
    ctx.set_gpr(3, ctx.gpr[3] + static_cast<std::uint32_t>(-2));
    { const bool branch_taken = ctx.gpr[17] == ctx.gpr[3];
    // nop
      if (branch_taken) {
          goto L_089620F4;
      }
      goto L_08962078;
    }
L_08962078:
    { const bool branch_taken = static_cast<std::int32_t>(ctx.gpr[6]) <= 0;
    // nop
      if (branch_taken) {
          goto L_089620F4;
      }
      goto L_08962080;
    }
L_08962080:
    ctx.set_gpr(4, ctx.gpr[18] + 0u);
    ctx.set_gpr(5, 0u + 0u);
    ctx.set_gpr(25, rt.memory().aot_load32(ctx.gpr[18] + static_cast<std::uint32_t>(0)));
    ctx.set_gpr(25, rt.memory().aot_load32(ctx.gpr[25] + static_cast<std::uint32_t>(412)));
    jump_target = ctx.gpr[25];
    ctx.set_gpr(31, 0x08962098u);
    // nop
    ctx.pc = jump_target;
    if (rt.invoke_chained_call(ctx, &aot_mem) && ctx.pc == 0x08962098u) goto L_08962098;
    return;
L_08962098:
    ctx.set_gpr(4, ctx.gpr[18] + 0u);
    ctx.set_gpr(31, 0x089620A4u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0081_entry, 81u, 30u, 0x089482C8u>(ctx, &aot_mem) && ctx.pc == 0x089620A4u) goto L_089620A4;
    return;
L_089620A4:
    ctx.set_gpr(19, ctx.gpr[2] + 0u);
    ctx.set_gpr(4, ctx.gpr[18] + 0u);
    ctx.set_gpr(31, 0x089620B4u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0081_entry, 81u, 30u, 0x089482C8u>(ctx, &aot_mem) && ctx.pc == 0x089620B4u) goto L_089620B4;
    return;
L_089620B4:
    ctx.set_gpr(20, ctx.gpr[2] + 0u);
    ctx.set_gpr(4, ctx.gpr[18] + 0u);
    ctx.set_gpr(25, rt.memory().aot_load32(ctx.gpr[18] + static_cast<std::uint32_t>(0)));
    ctx.set_gpr(25, rt.memory().aot_load32(ctx.gpr[25] + static_cast<std::uint32_t>(456)));
    jump_target = ctx.gpr[25];
    ctx.set_gpr(31, 0x089620CCu);
    // nop
    ctx.pc = jump_target;
    if (rt.invoke_chained_call(ctx, &aot_mem) && ctx.pc == 0x089620CCu) goto L_089620CC;
    return;
L_089620CC:
    ctx.set_gpr(3, 2228u << 16u);
    ctx.set_gpr(4, rt.memory().aot_load32(ctx.gpr[3] + static_cast<std::uint32_t>(-11152)));
    ctx.set_gpr(5, ctx.gpr[19] + 0u);
    ctx.set_gpr(6, ctx.gpr[20] + 0u);
    ctx.set_gpr(7, ctx.gpr[2] + 0u);
    ctx.set_gpr(8, ctx.gpr[16] + 0u);
    ctx.set_gpr(9, 2228u << 16u);
    ctx.set_gpr(9, ctx.gpr[9] + static_cast<std::uint32_t>(476));
    ctx.set_gpr(31, 0x089620F4u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0084_entry, 84u, 456u, 0x08955F2Cu>(ctx, &aot_mem) && ctx.pc == 0x089620F4u) goto L_089620F4;
    return;
L_089620F4:
    ctx.set_gpr(3, rt.memory().aot_load8(ctx.gpr[16] + static_cast<std::uint32_t>(3)));
    ctx.set_gpr(3, ctx.gpr[3] << 24u);
    ctx.set_gpr(3, ctx.gpr[3] >> 31u);
    { const bool branch_taken = ctx.gpr[3] != 0u;
    // nop
      if (branch_taken) {
          goto L_08962114;
      }
      goto L_08962108;
    }
L_08962108:
    ctx.set_gpr(3, 0u + static_cast<std::uint32_t>(4));
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_08962118;
      }
      goto L_08962114;
    }
L_08962114:
    ctx.set_gpr(3, 0u + static_cast<std::uint32_t>(12));
    goto L_08962118;
L_08962118:
    ctx.set_gpr(3, ctx.gpr[16] + ctx.gpr[3]);
    ctx.set_gpr(19, rt.memory().aot_load32(ctx.gpr[3] + static_cast<std::uint32_t>(0)));
    { const bool branch_taken = ctx.gpr[19] == 0u;
    // nop
      if (branch_taken) {
          goto L_089622AC;
      }
      goto L_08962128;
    }
L_08962128:
    ctx.set_gpr(5, rt.memory().aot_load32(ctx.gpr[18] + static_cast<std::uint32_t>(144)));
    { const bool branch_taken = static_cast<std::int32_t>(ctx.gpr[5]) <= 0;
    // nop
      if (branch_taken) {
          goto L_089622AC;
      }
      goto L_08962134;
    }
L_08962134:
    ctx.set_gpr(4, rt.memory().aot_load32(ctx.gpr[18] + static_cast<std::uint32_t>(132)));
    { const bool branch_taken = ctx.gpr[4] == 0u;
    // nop
      if (branch_taken) {
          goto L_089622AC;
      }
      goto L_08962140;
    }
L_08962140:
    ctx.set_gpr(3, rt.memory().aot_load32(ctx.gpr[18] + static_cast<std::uint32_t>(128)));
    ctx.set_gpr(3, ctx.gpr[19] < ctx.gpr[3] ? 1u : 0u);
    { const bool branch_taken = ctx.gpr[3] != 0u;
    // nop
      if (branch_taken) {
          goto L_08962230;
      }
      goto L_08962150;
    }
L_08962150:
    ctx.set_gpr(1, ctx.gpr[19] < ctx.gpr[4] ? 1u : 0u);
    { const bool branch_taken = ctx.gpr[1] == 0u;
    // nop
      if (branch_taken) {
          goto L_08962230;
      }
      goto L_0896215C;
    }
L_0896215C:
    ctx.set_gpr(3, rt.memory().aot_load8(ctx.gpr[19] + static_cast<std::uint32_t>(3)));
    ctx.set_gpr(3, ctx.gpr[3] << 24u);
    ctx.set_gpr(3, ctx.gpr[3] >> 31u);
    ctx.set_gpr(3, ctx.gpr[3] & 255u);
    ctx.set_gpr(8, rt.memory().aot_load32(ctx.gpr[18] + static_cast<std::uint32_t>(72)));
    { const bool branch_taken = ctx.gpr[3] != 0u;
    // nop
      if (branch_taken) {
          goto L_0896218C;
      }
      goto L_08962178;
    }
L_08962178:
    ctx.set_gpr(6, rt.memory().aot_load16(ctx.gpr[19] + static_cast<std::uint32_t>(2)));
    ctx.set_gpr(6, ctx.gpr[6] << 19u);
    ctx.set_gpr(6, ctx.gpr[6] >> 24u);
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_089621AC;
      }
      goto L_0896218C;
    }
L_0896218C:
    ctx.set_gpr(6, rt.memory().aot_load16(ctx.gpr[19] + static_cast<std::uint32_t>(2)));
    ctx.set_gpr(6, ctx.gpr[6] << 19u);
    ctx.set_gpr(7, ctx.gpr[6] >> 24u);
    ctx.set_gpr(6, rt.memory().aot_load32(ctx.gpr[19] + static_cast<std::uint32_t>(8)));
    ctx.set_gpr(6, ctx.gpr[6] << 8u);
    ctx.set_gpr(6, ctx.gpr[6] >> 23u);
    ctx.set_gpr(6, ctx.gpr[6] << 8u);
    ctx.set_gpr(6, ctx.gpr[7] + ctx.gpr[6]);
    goto L_089621AC;
L_089621AC:
    { const bool branch_taken = ctx.gpr[8] != ctx.gpr[6];
    // nop
      if (branch_taken) {
          goto L_08962230;
      }
      goto L_089621B4;
    }
L_089621B4:
    { const bool branch_taken = ctx.gpr[3] != 0u;
    // nop
      if (branch_taken) {
          goto L_089621D4;
      }
      goto L_089621BC;
    }
L_089621BC:
    ctx.set_gpr(6, rt.memory().aot_load32(ctx.gpr[19] + static_cast<std::uint32_t>(0)));
    ctx.set_gpr(6, ctx.gpr[6] << 11u);
    ctx.set_gpr(7, ctx.gpr[6] >> 16u);
    ctx.set_gpr(6, ctx.gpr[7] + 0u);
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_089621F0;
      }
      goto L_089621D4;
    }
L_089621D4:
    ctx.set_gpr(6, rt.memory().aot_load32(ctx.gpr[19] + static_cast<std::uint32_t>(0)));
    ctx.set_gpr(6, ctx.gpr[6] << 11u);
    ctx.set_gpr(7, ctx.gpr[6] >> 16u);
    ctx.set_gpr(6, rt.memory().aot_load16(ctx.gpr[19] + static_cast<std::uint32_t>(8)));
    ctx.set_gpr(6, ctx.gpr[6] & 32767u);
    ctx.set_gpr(6, ctx.gpr[6] << 16u);
    ctx.set_gpr(6, ctx.gpr[7] + ctx.gpr[6]);
    goto L_089621F0;
L_089621F0:
    ctx.set_gpr(1, 8192u << 16u);
    ctx.set_gpr(1, ctx.gpr[6] < ctx.gpr[1] ? 1u : 0u);
    { const bool branch_taken = ctx.gpr[1] == 0u;
    // nop
      if (branch_taken) {
          goto L_08962230;
      }
      goto L_08962200;
    }
L_08962200:
    { const bool branch_taken = ctx.gpr[3] != 0u;
    // nop
      if (branch_taken) {
          goto L_08962210;
      }
      goto L_08962208;
    }
L_08962208:
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_08962220;
      }
      goto L_08962210;
    }
L_08962210:
    ctx.set_gpr(3, rt.memory().aot_load16(ctx.gpr[19] + static_cast<std::uint32_t>(8)));
    ctx.set_gpr(3, ctx.gpr[3] & 32767u);
    ctx.set_gpr(3, ctx.gpr[3] << 16u);
    ctx.set_gpr(7, ctx.gpr[7] + ctx.gpr[3]);
    goto L_08962220;
L_08962220:
    ctx.set_gpr(3, ctx.gpr[19] + ctx.gpr[7]);
    ctx.set_gpr(1, ctx.gpr[4] < ctx.gpr[3] ? 1u : 0u);
    { const bool branch_taken = ctx.gpr[1] == 0u;
    // nop
      if (branch_taken) {
          goto L_089622AC;
      }
      goto L_08962230;
    }
L_08962230:
    { const bool branch_taken = static_cast<std::int32_t>(ctx.gpr[5]) <= 0;
    // nop
      if (branch_taken) {
          goto L_089622AC;
      }
      goto L_08962238;
    }
L_08962238:
    ctx.set_gpr(4, ctx.gpr[18] + 0u);
    ctx.set_gpr(5, 0u + 0u);
    ctx.set_gpr(25, rt.memory().aot_load32(ctx.gpr[18] + static_cast<std::uint32_t>(0)));
    ctx.set_gpr(25, rt.memory().aot_load32(ctx.gpr[25] + static_cast<std::uint32_t>(412)));
    jump_target = ctx.gpr[25];
    ctx.set_gpr(31, 0x08962250u);
    // nop
    ctx.pc = jump_target;
    if (rt.invoke_chained_call(ctx, &aot_mem) && ctx.pc == 0x08962250u) goto L_08962250;
    return;
L_08962250:
    ctx.set_gpr(4, ctx.gpr[18] + 0u);
    ctx.set_gpr(31, 0x0896225Cu);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0081_entry, 81u, 30u, 0x089482C8u>(ctx, &aot_mem) && ctx.pc == 0x0896225Cu) goto L_0896225C;
    return;
L_0896225C:
    ctx.set_gpr(20, ctx.gpr[2] + 0u);
    ctx.set_gpr(4, ctx.gpr[18] + 0u);
    ctx.set_gpr(31, 0x0896226Cu);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0081_entry, 81u, 30u, 0x089482C8u>(ctx, &aot_mem) && ctx.pc == 0x0896226Cu) goto L_0896226C;
    return;
L_0896226C:
    ctx.set_gpr(23, ctx.gpr[2] + 0u);
    ctx.set_gpr(4, ctx.gpr[18] + 0u);
    ctx.set_gpr(25, rt.memory().aot_load32(ctx.gpr[18] + static_cast<std::uint32_t>(0)));
    ctx.set_gpr(25, rt.memory().aot_load32(ctx.gpr[25] + static_cast<std::uint32_t>(456)));
    jump_target = ctx.gpr[25];
    ctx.set_gpr(31, 0x08962284u);
    // nop
    ctx.pc = jump_target;
    if (rt.invoke_chained_call(ctx, &aot_mem) && ctx.pc == 0x08962284u) goto L_08962284;
    return;
L_08962284:
    ctx.set_gpr(3, 2228u << 16u);
    ctx.set_gpr(4, rt.memory().aot_load32(ctx.gpr[3] + static_cast<std::uint32_t>(-11152)));
    ctx.set_gpr(5, ctx.gpr[20] + 0u);
    ctx.set_gpr(6, ctx.gpr[23] + 0u);
    ctx.set_gpr(7, ctx.gpr[2] + 0u);
    ctx.set_gpr(8, ctx.gpr[16] + 0u);
    ctx.set_gpr(9, 2228u << 16u);
    ctx.set_gpr(9, ctx.gpr[9] + static_cast<std::uint32_t>(548));
    ctx.set_gpr(31, 0x089622ACu);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0084_entry, 84u, 456u, 0x08955F2Cu>(ctx, &aot_mem) && ctx.pc == 0x089622ACu) goto L_089622AC;
    return;
L_089622AC:
    ctx.set_gpr(16, ctx.gpr[19] + 0u);
    goto L_089622B0;
L_089622B0:
    { const bool branch_taken = ctx.gpr[16] != 0u;
    // nop
      if (branch_taken) {
          goto L_08961FB8;
      }
      goto L_089622B8;
    }
L_089622B8:
    ctx.set_gpr(17, ctx.gpr[17] + static_cast<std::uint32_t>(1));
    goto L_089622BC;
L_089622BC:
    ctx.set_gpr(3, ctx.gpr[17] < static_cast<std::uint32_t>(10) ? 1u : 0u);
    { const bool branch_taken = ctx.gpr[3] != 0u;
    // nop
      if (branch_taken) {
          goto L_08961D70;
      }
      goto L_089622C8;
    }
L_089622C8:
    { const bool branch_taken = ctx.gpr[22] == 0u;
    // nop
      if (branch_taken) {
          goto L_08962374;
      }
      goto L_089622D0;
    }
L_089622D0:
    ctx.set_gpr(4, rt.memory().aot_load32(ctx.gpr[18] + static_cast<std::uint32_t>(144)));
    { const bool branch_taken = static_cast<std::int32_t>(ctx.gpr[4]) <= 0;
    // nop
      if (branch_taken) {
          goto L_08962418;
      }
      goto L_089622DC;
    }
L_089622DC:
    ctx.set_gpr(3, rt.memory().aot_load32(ctx.gpr[21] + static_cast<std::uint32_t>(0)));
    ctx.set_gpr(3, ctx.gpr[3] & 2u);
    { const bool branch_taken = ctx.gpr[3] != 0u;
    // nop
      if (branch_taken) {
          goto L_08962418;
      }
      goto L_089622EC;
    }
L_089622EC:
    { const bool branch_taken = static_cast<std::int32_t>(ctx.gpr[4]) <= 0;
    // nop
      if (branch_taken) {
          goto L_08962418;
      }
      goto L_089622F4;
    }
L_089622F4:
    ctx.set_gpr(4, ctx.gpr[18] + 0u);
    ctx.set_gpr(5, 0u + 0u);
    ctx.set_gpr(25, rt.memory().aot_load32(ctx.gpr[18] + static_cast<std::uint32_t>(0)));
    ctx.set_gpr(25, rt.memory().aot_load32(ctx.gpr[25] + static_cast<std::uint32_t>(412)));
    jump_target = ctx.gpr[25];
    ctx.set_gpr(31, 0x0896230Cu);
    // nop
    ctx.pc = jump_target;
    if (rt.invoke_chained_call(ctx, &aot_mem) && ctx.pc == 0x0896230Cu) goto L_0896230C;
    return;
L_0896230C:
    ctx.set_gpr(4, ctx.gpr[18] + 0u);
    ctx.set_gpr(31, 0x08962318u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0081_entry, 81u, 30u, 0x089482C8u>(ctx, &aot_mem) && ctx.pc == 0x08962318u) goto L_08962318;
    return;
L_08962318:
    ctx.set_gpr(17, ctx.gpr[2] + 0u);
    ctx.set_gpr(4, ctx.gpr[18] + 0u);
    ctx.set_gpr(25, rt.memory().aot_load32(ctx.gpr[18] + static_cast<std::uint32_t>(0)));
    ctx.set_gpr(25, rt.memory().aot_load32(ctx.gpr[25] + static_cast<std::uint32_t>(464)));
    jump_target = ctx.gpr[25];
    ctx.set_gpr(31, 0x08962330u);
    // nop
    ctx.pc = jump_target;
    if (rt.invoke_chained_call(ctx, &aot_mem) && ctx.pc == 0x08962330u) goto L_08962330;
    return;
L_08962330:
    ctx.set_gpr(16, ctx.gpr[2] + 0u);
    ctx.set_gpr(4, ctx.gpr[18] + 0u);
    ctx.set_gpr(25, rt.memory().aot_load32(ctx.gpr[18] + static_cast<std::uint32_t>(0)));
    ctx.set_gpr(25, rt.memory().aot_load32(ctx.gpr[25] + static_cast<std::uint32_t>(456)));
    jump_target = ctx.gpr[25];
    ctx.set_gpr(31, 0x08962348u);
    // nop
    ctx.pc = jump_target;
    if (rt.invoke_chained_call(ctx, &aot_mem) && ctx.pc == 0x08962348u) goto L_08962348;
    return;
L_08962348:
    ctx.set_gpr(3, 2228u << 16u);
    ctx.set_gpr(4, rt.memory().aot_load32(ctx.gpr[3] + static_cast<std::uint32_t>(-11220)));
    ctx.set_gpr(5, ctx.gpr[17] + 0u);
    ctx.set_gpr(6, ctx.gpr[16] + 0u);
    ctx.set_gpr(7, ctx.gpr[2] + 0u);
    ctx.set_gpr(8, 2228u << 16u);
    ctx.set_gpr(8, ctx.gpr[8] + static_cast<std::uint32_t>(592));
    ctx.set_gpr(31, 0x0896236Cu);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0084_entry, 84u, 456u, 0x08955F2Cu>(ctx, &aot_mem) && ctx.pc == 0x0896236Cu) goto L_0896236C;
    return;
L_0896236C:
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_08962418;
      }
      goto L_08962374;
    }
L_08962374:
    ctx.set_gpr(3, rt.memory().aot_load32(ctx.gpr[21] + static_cast<std::uint32_t>(0)));
    ctx.set_gpr(3, ctx.gpr[3] & 2u);
    { const bool branch_taken = ctx.gpr[3] != 0u;
    // nop
      if (branch_taken) {
          goto L_08962418;
      }
      goto L_08962384;
    }
L_08962384:
    ctx.set_gpr(3, rt.memory().aot_load32(ctx.gpr[18] + static_cast<std::uint32_t>(144)));
    { const bool branch_taken = static_cast<std::int32_t>(ctx.gpr[3]) <= 0;
    // nop
      if (branch_taken) {
          goto L_08962418;
      }
      goto L_08962390;
    }
L_08962390:
    { const bool branch_taken = ctx.gpr[22] == 0u;
    // nop
      if (branch_taken) {
          goto L_08962418;
      }
      goto L_08962398;
    }
L_08962398:
    { const bool branch_taken = static_cast<std::int32_t>(ctx.gpr[3]) <= 0;
    // nop
      if (branch_taken) {
          goto L_08962418;
      }
      goto L_089623A0;
    }
L_089623A0:
    ctx.set_gpr(4, ctx.gpr[18] + 0u);
    ctx.set_gpr(5, 0u + 0u);
    ctx.set_gpr(25, rt.memory().aot_load32(ctx.gpr[18] + static_cast<std::uint32_t>(0)));
    ctx.set_gpr(25, rt.memory().aot_load32(ctx.gpr[25] + static_cast<std::uint32_t>(412)));
    jump_target = ctx.gpr[25];
    ctx.set_gpr(31, 0x089623B8u);
    // nop
    ctx.pc = jump_target;
    if (rt.invoke_chained_call(ctx, &aot_mem) && ctx.pc == 0x089623B8u) goto L_089623B8;
    return;
L_089623B8:
    ctx.set_gpr(4, ctx.gpr[18] + 0u);
    ctx.set_gpr(31, 0x089623C4u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0081_entry, 81u, 30u, 0x089482C8u>(ctx, &aot_mem) && ctx.pc == 0x089623C4u) goto L_089623C4;
    return;
L_089623C4:
    ctx.set_gpr(17, ctx.gpr[2] + 0u);
    ctx.set_gpr(4, ctx.gpr[18] + 0u);
    ctx.set_gpr(25, rt.memory().aot_load32(ctx.gpr[18] + static_cast<std::uint32_t>(0)));
    ctx.set_gpr(25, rt.memory().aot_load32(ctx.gpr[25] + static_cast<std::uint32_t>(464)));
    jump_target = ctx.gpr[25];
    ctx.set_gpr(31, 0x089623DCu);
    // nop
    ctx.pc = jump_target;
    if (rt.invoke_chained_call(ctx, &aot_mem) && ctx.pc == 0x089623DCu) goto L_089623DC;
    return;
L_089623DC:
    ctx.set_gpr(16, ctx.gpr[2] + 0u);
    ctx.set_gpr(4, ctx.gpr[18] + 0u);
    ctx.set_gpr(25, rt.memory().aot_load32(ctx.gpr[18] + static_cast<std::uint32_t>(0)));
    ctx.set_gpr(25, rt.memory().aot_load32(ctx.gpr[25] + static_cast<std::uint32_t>(456)));
    jump_target = ctx.gpr[25];
    ctx.set_gpr(31, 0x089623F4u);
    // nop
    ctx.pc = jump_target;
    if (rt.invoke_chained_call(ctx, &aot_mem) && ctx.pc == 0x089623F4u) goto L_089623F4;
    return;
L_089623F4:
    ctx.set_gpr(3, 2228u << 16u);
    ctx.set_gpr(4, rt.memory().aot_load32(ctx.gpr[3] + static_cast<std::uint32_t>(-11220)));
    ctx.set_gpr(5, ctx.gpr[17] + 0u);
    ctx.set_gpr(6, ctx.gpr[16] + 0u);
    ctx.set_gpr(7, ctx.gpr[2] + 0u);
    ctx.set_gpr(8, 2228u << 16u);
    ctx.set_gpr(8, ctx.gpr[8] + static_cast<std::uint32_t>(656));
    ctx.set_gpr(31, 0x08962418u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0084_entry, 84u, 456u, 0x08955F2Cu>(ctx, &aot_mem) && ctx.pc == 0x08962418u) goto L_08962418;
    return;
L_08962418:
    ctx.set_gpr(17, 0u + static_cast<std::uint32_t>(1));
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_08962B28;
      }
      goto L_08962424;
    }
L_08962424:
    ctx.set_gpr(3, ctx.gpr[17] << 2u);
    ctx.set_gpr(3, ctx.gpr[3] + ctx.gpr[17]);
    ctx.set_gpr(3, ctx.gpr[3] << 2u);
    ctx.set_gpr(3, ctx.gpr[21] + ctx.gpr[3]);
    ctx.set_gpr(20, ctx.gpr[3] + static_cast<std::uint32_t>(52));
    ctx.set_gpr(3, ctx.gpr[17] < static_cast<std::uint32_t>(2) ? 1u : 0u);
    { const bool branch_taken = ctx.gpr[3] != 0u;
    // nop
      if (branch_taken) {
          goto L_089625D8;
      }
      goto L_08962444;
    }
L_08962444:
    ctx.set_gpr(3, ctx.gpr[17] >> 5u);
    ctx.set_gpr(3, ctx.gpr[3] << 2u);
    ctx.set_gpr(5, ctx.gpr[3] + ctx.gpr[21]);
    ctx.set_gpr(4, ctx.gpr[17] & 31u);
    ctx.set_gpr(3, 0u + static_cast<std::uint32_t>(1));
    ctx.set_gpr(4, ctx.gpr[3] << (ctx.gpr[4] & 31u));
    ctx.set_gpr(3, rt.memory().aot_load32(ctx.gpr[5] + static_cast<std::uint32_t>(1972)));
    ctx.set_gpr(5, ctx.gpr[3] & ctx.gpr[4]);
    ctx.set_gpr(3, rt.memory().aot_load8(ctx.gpr[20] + static_cast<std::uint32_t>(3)));
    ctx.set_gpr(3, ctx.gpr[3] << 24u);
    ctx.set_gpr(3, ctx.gpr[3] >> 31u);
    { const bool branch_taken = ctx.gpr[3] != 0u;
    // nop
      if (branch_taken) {
          goto L_08962484;
      }
      goto L_08962478;
    }
L_08962478:
    ctx.set_gpr(3, 0u + static_cast<std::uint32_t>(4));
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_08962488;
      }
      goto L_08962484;
    }
L_08962484:
    ctx.set_gpr(3, 0u + static_cast<std::uint32_t>(12));
    goto L_08962488;
L_08962488:
    ctx.set_gpr(3, ctx.gpr[20] + ctx.gpr[3]);
    ctx.set_gpr(3, rt.memory().aot_load32(ctx.gpr[3] + static_cast<std::uint32_t>(4)));
    ctx.set_gpr(4, ctx.gpr[3] ^ ctx.gpr[20]);
    ctx.set_gpr(4, ctx.gpr[4] < static_cast<std::uint32_t>(1) ? 1u : 0u);
    { const bool branch_taken = ctx.gpr[5] != 0u;
    // nop
      if (branch_taken) {
          goto L_0896253C;
      }
      goto L_089624A0;
    }
L_089624A0:
    ctx.set_gpr(3, rt.memory().aot_load32(ctx.gpr[18] + static_cast<std::uint32_t>(144)));
    { const bool branch_taken = static_cast<std::int32_t>(ctx.gpr[3]) <= 0;
    // nop
      if (branch_taken) {
          goto L_089625D8;
      }
      goto L_089624AC;
    }
L_089624AC:
    { const bool branch_taken = ctx.gpr[4] != 0u;
    // nop
      if (branch_taken) {
          goto L_089625D8;
      }
      goto L_089624B4;
    }
L_089624B4:
    { const bool branch_taken = static_cast<std::int32_t>(ctx.gpr[3]) <= 0;
    // nop
      if (branch_taken) {
          goto L_089625D8;
      }
      goto L_089624BC;
    }
L_089624BC:
    ctx.set_gpr(4, ctx.gpr[18] + 0u);
    ctx.set_gpr(5, 0u + 0u);
    ctx.set_gpr(25, rt.memory().aot_load32(ctx.gpr[18] + static_cast<std::uint32_t>(0)));
    ctx.set_gpr(25, rt.memory().aot_load32(ctx.gpr[25] + static_cast<std::uint32_t>(412)));
    jump_target = ctx.gpr[25];
    ctx.set_gpr(31, 0x089624D4u);
    // nop
    ctx.pc = jump_target;
    if (rt.invoke_chained_call(ctx, &aot_mem) && ctx.pc == 0x089624D4u) goto L_089624D4;
    return;
L_089624D4:
    ctx.set_gpr(4, ctx.gpr[18] + 0u);
    ctx.set_gpr(31, 0x089624E0u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0081_entry, 81u, 30u, 0x089482C8u>(ctx, &aot_mem) && ctx.pc == 0x089624E0u) goto L_089624E0;
    return;
L_089624E0:
    ctx.set_gpr(16, ctx.gpr[2] + 0u);
    ctx.set_gpr(4, ctx.gpr[18] + 0u);
    ctx.set_gpr(25, rt.memory().aot_load32(ctx.gpr[18] + static_cast<std::uint32_t>(0)));
    ctx.set_gpr(25, rt.memory().aot_load32(ctx.gpr[25] + static_cast<std::uint32_t>(464)));
    jump_target = ctx.gpr[25];
    ctx.set_gpr(31, 0x089624F8u);
    // nop
    ctx.pc = jump_target;
    if (rt.invoke_chained_call(ctx, &aot_mem) && ctx.pc == 0x089624F8u) goto L_089624F8;
    return;
L_089624F8:
    ctx.set_gpr(19, ctx.gpr[2] + 0u);
    ctx.set_gpr(4, ctx.gpr[18] + 0u);
    ctx.set_gpr(25, rt.memory().aot_load32(ctx.gpr[18] + static_cast<std::uint32_t>(0)));
    ctx.set_gpr(25, rt.memory().aot_load32(ctx.gpr[25] + static_cast<std::uint32_t>(456)));
    jump_target = ctx.gpr[25];
    ctx.set_gpr(31, 0x08962510u);
    // nop
    ctx.pc = jump_target;
    if (rt.invoke_chained_call(ctx, &aot_mem) && ctx.pc == 0x08962510u) goto L_08962510;
    return;
L_08962510:
    ctx.set_gpr(3, 2228u << 16u);
    ctx.set_gpr(4, rt.memory().aot_load32(ctx.gpr[3] + static_cast<std::uint32_t>(-11220)));
    ctx.set_gpr(5, ctx.gpr[16] + 0u);
    ctx.set_gpr(6, ctx.gpr[19] + 0u);
    ctx.set_gpr(7, ctx.gpr[2] + 0u);
    ctx.set_gpr(8, 2228u << 16u);
    ctx.set_gpr(8, ctx.gpr[8] + static_cast<std::uint32_t>(724));
    ctx.set_gpr(31, 0x08962534u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0084_entry, 84u, 456u, 0x08955F2Cu>(ctx, &aot_mem) && ctx.pc == 0x08962534u) goto L_08962534;
    return;
L_08962534:
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_089625D8;
      }
      goto L_0896253C;
    }
L_0896253C:
    { const bool branch_taken = ctx.gpr[4] != 0u;
    // nop
      if (branch_taken) {
          goto L_089625D8;
      }
      goto L_08962544;
    }
L_08962544:
    ctx.set_gpr(3, rt.memory().aot_load32(ctx.gpr[18] + static_cast<std::uint32_t>(144)));
    { const bool branch_taken = static_cast<std::int32_t>(ctx.gpr[3]) <= 0;
    // nop
      if (branch_taken) {
          goto L_089625D8;
      }
      goto L_08962550;
    }
L_08962550:
    { const bool branch_taken = ctx.gpr[5] != 0u;
    // nop
      if (branch_taken) {
          goto L_089625D8;
      }
      goto L_08962558;
    }
L_08962558:
    { const bool branch_taken = static_cast<std::int32_t>(ctx.gpr[3]) <= 0;
    // nop
      if (branch_taken) {
          goto L_089625D8;
      }
      goto L_08962560;
    }
L_08962560:
    ctx.set_gpr(4, ctx.gpr[18] + 0u);
    ctx.set_gpr(5, 0u + 0u);
    ctx.set_gpr(25, rt.memory().aot_load32(ctx.gpr[18] + static_cast<std::uint32_t>(0)));
    ctx.set_gpr(25, rt.memory().aot_load32(ctx.gpr[25] + static_cast<std::uint32_t>(412)));
    jump_target = ctx.gpr[25];
    ctx.set_gpr(31, 0x08962578u);
    // nop
    ctx.pc = jump_target;
    if (rt.invoke_chained_call(ctx, &aot_mem) && ctx.pc == 0x08962578u) goto L_08962578;
    return;
L_08962578:
    ctx.set_gpr(4, ctx.gpr[18] + 0u);
    ctx.set_gpr(31, 0x08962584u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0081_entry, 81u, 30u, 0x089482C8u>(ctx, &aot_mem) && ctx.pc == 0x08962584u) goto L_08962584;
    return;
L_08962584:
    ctx.set_gpr(16, ctx.gpr[2] + 0u);
    ctx.set_gpr(4, ctx.gpr[18] + 0u);
    ctx.set_gpr(25, rt.memory().aot_load32(ctx.gpr[18] + static_cast<std::uint32_t>(0)));
    ctx.set_gpr(25, rt.memory().aot_load32(ctx.gpr[25] + static_cast<std::uint32_t>(464)));
    jump_target = ctx.gpr[25];
    ctx.set_gpr(31, 0x0896259Cu);
    // nop
    ctx.pc = jump_target;
    if (rt.invoke_chained_call(ctx, &aot_mem) && ctx.pc == 0x0896259Cu) goto L_0896259C;
    return;
L_0896259C:
    ctx.set_gpr(19, ctx.gpr[2] + 0u);
    ctx.set_gpr(4, ctx.gpr[18] + 0u);
    ctx.set_gpr(25, rt.memory().aot_load32(ctx.gpr[18] + static_cast<std::uint32_t>(0)));
    ctx.set_gpr(25, rt.memory().aot_load32(ctx.gpr[25] + static_cast<std::uint32_t>(456)));
    jump_target = ctx.gpr[25];
    ctx.set_gpr(31, 0x089625B4u);
    // nop
    ctx.pc = jump_target;
    if (rt.invoke_chained_call(ctx, &aot_mem) && ctx.pc == 0x089625B4u) goto L_089625B4;
    return;
L_089625B4:
    ctx.set_gpr(3, 2228u << 16u);
    ctx.set_gpr(4, rt.memory().aot_load32(ctx.gpr[3] + static_cast<std::uint32_t>(-11220)));
    ctx.set_gpr(5, ctx.gpr[16] + 0u);
    ctx.set_gpr(6, ctx.gpr[19] + 0u);
    ctx.set_gpr(7, ctx.gpr[2] + 0u);
    ctx.set_gpr(8, 2228u << 16u);
    ctx.set_gpr(8, ctx.gpr[8] + static_cast<std::uint32_t>(788));
    ctx.set_gpr(31, 0x089625D8u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0084_entry, 84u, 456u, 0x08955F2Cu>(ctx, &aot_mem) && ctx.pc == 0x089625D8u) goto L_089625D8;
    return;
L_089625D8:
    ctx.set_gpr(3, rt.memory().aot_load8(ctx.gpr[20] + static_cast<std::uint32_t>(3)));
    ctx.set_gpr(3, ctx.gpr[3] << 24u);
    ctx.set_gpr(3, ctx.gpr[3] >> 31u);
    { const bool branch_taken = ctx.gpr[3] != 0u;
    // nop
      if (branch_taken) {
          goto L_089625F8;
      }
      goto L_089625EC;
    }
L_089625EC:
    ctx.set_gpr(3, 0u + static_cast<std::uint32_t>(4));
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_089625FC;
      }
      goto L_089625F8;
    }
L_089625F8:
    ctx.set_gpr(3, 0u + static_cast<std::uint32_t>(12));
    goto L_089625FC;
L_089625FC:
    ctx.set_gpr(3, ctx.gpr[20] + ctx.gpr[3]);
    ctx.set_gpr(16, rt.memory().aot_load32(ctx.gpr[3] + static_cast<std::uint32_t>(4)));
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_08962B1C;
      }
      goto L_0896260C;
    }
L_0896260C:
    ctx.set_gpr(4, ctx.gpr[18] + 0u);
    ctx.set_gpr(5, ctx.gpr[16] + 0u);
    ctx.set_gpr(31, 0x0896261Cu);
    // nop
    goto L_08960574;
L_0896261C:
    ctx.set_gpr(3, rt.memory().aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(0)));
    ctx.set_gpr(3, ctx.gpr[3] << 11u);
    ctx.set_gpr(5, ctx.gpr[3] >> 16u);
    ctx.set_gpr(3, rt.memory().aot_load8(ctx.gpr[16] + static_cast<std::uint32_t>(3)));
    ctx.set_gpr(3, ctx.gpr[3] << 24u);
    ctx.set_gpr(4, ctx.gpr[3] >> 31u);
    ctx.set_gpr(3, 0u + static_cast<std::uint32_t>(1));
    { const bool branch_taken = ctx.gpr[4] != ctx.gpr[3];
    // nop
      if (branch_taken) {
          goto L_08962650;
      }
      goto L_08962640;
    }
L_08962640:
    ctx.set_gpr(3, rt.memory().aot_load16(ctx.gpr[16] + static_cast<std::uint32_t>(8)));
    ctx.set_gpr(3, ctx.gpr[3] & 32767u);
    ctx.set_gpr(3, ctx.gpr[3] << 16u);
    ctx.set_gpr(5, ctx.gpr[5] + ctx.gpr[3]);
    goto L_08962650;
L_08962650:
    ctx.set_gpr(4, ctx.gpr[5] + static_cast<std::uint32_t>(3));
    ctx.set_gpr(3, 0u + static_cast<std::uint32_t>(-4));
    ctx.set_gpr(4, ctx.gpr[4] & ctx.gpr[3]);
    ctx.set_gpr(3, rt.memory().aot_load8(ctx.gpr[16] + static_cast<std::uint32_t>(0)));
    ctx.set_gpr(3, ctx.gpr[3] << 27u);
    ctx.set_gpr(3, ctx.gpr[3] >> 28u);
    ctx.set_gpr(3, ctx.gpr[3] + static_cast<std::uint32_t>(1));
    ctx.set_gpr(3, ctx.gpr[3] << 2u);
    ctx.set_gpr(19, ctx.gpr[4] + ctx.gpr[3]);
    ctx.set_gpr(22, ctx.gpr[22] + ctx.gpr[19]);
    ctx.set_gpr(3, ctx.gpr[17] < static_cast<std::uint32_t>(2) ? 1u : 0u);
    { const bool branch_taken = ctx.gpr[3] != 0u;
    // nop
      if (branch_taken) {
          goto L_08962954;
      }
      goto L_08962684;
    }
L_08962684:
    ctx.set_gpr(1, ctx.gpr[19] < static_cast<std::uint32_t>(256) ? 1u : 0u);
    { const bool branch_taken = ctx.gpr[1] == 0u;
    // nop
      if (branch_taken) {
          goto L_0896269C;
      }
      goto L_08962690;
    }
L_08962690:
    ctx.set_gpr(4, ctx.gpr[19] >> 3u);
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_08962728;
      }
      goto L_0896269C;
    }
L_0896269C:
    ctx.set_gpr(4, ctx.gpr[19] >> 8u);
    ctx.set_gpr(3, 1u << 16u);
    ctx.set_gpr(3, ctx.gpr[4] < ctx.gpr[3] ? 1u : 0u);
    { const bool branch_taken = ctx.gpr[3] != 0u;
    // nop
      if (branch_taken) {
          goto L_089626BC;
      }
      goto L_089626B0;
    }
L_089626B0:
    ctx.set_gpr(4, 0u + static_cast<std::uint32_t>(95));
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_08962728;
      }
      goto L_089626BC;
    }
L_089626BC:
    ctx.set_gpr(3, ctx.gpr[4] + static_cast<std::uint32_t>(-256));
    ctx.set_gpr(3, ctx.gpr[3] >> 16u);
    ctx.set_gpr(5, ctx.gpr[3] & 8u);
    ctx.set_gpr(4, ctx.gpr[4] << (ctx.gpr[5] & 31u));
    ctx.set_gpr(3, ctx.gpr[4] + static_cast<std::uint32_t>(-4096));
    ctx.set_gpr(3, ctx.gpr[3] >> 16u);
    ctx.set_gpr(3, ctx.gpr[3] & 4u);
    ctx.set_gpr(5, ctx.gpr[5] + ctx.gpr[3]);
    ctx.set_gpr(4, ctx.gpr[4] << (ctx.gpr[3] & 31u));
    ctx.set_gpr(3, ctx.gpr[4] + static_cast<std::uint32_t>(-16384));
    ctx.set_gpr(3, ctx.gpr[3] >> 16u);
    ctx.set_gpr(3, ctx.gpr[3] & 2u);
    ctx.set_gpr(5, ctx.gpr[5] + ctx.gpr[3]);
    ctx.set_gpr(3, ctx.gpr[4] << (ctx.gpr[3] & 31u));
    ctx.set_gpr(4, ctx.gpr[3] >> 14u);
    ctx.set_gpr(3, ctx.gpr[4] >> 1u);
    ctx.set_gpr(3, ~(ctx.gpr[3] | 0u));
    ctx.set_gpr(4, ctx.gpr[4] & ctx.gpr[3]);
    ctx.set_gpr(3, 0u + static_cast<std::uint32_t>(13));
    ctx.set_gpr(3, ctx.gpr[3] - ctx.gpr[5]);
    ctx.set_gpr(5, ctx.gpr[3] + ctx.gpr[4]);
    ctx.set_gpr(3, ctx.gpr[5] << 2u);
    ctx.set_gpr(4, ctx.gpr[3] + static_cast<std::uint32_t>(32));
    ctx.set_gpr(3, ctx.gpr[5] + static_cast<std::uint32_t>(6));
    ctx.set_gpr(3, ctx.gpr[19] >> (ctx.gpr[3] & 31u));
    ctx.set_gpr(3, ctx.gpr[3] & 3u);
    ctx.set_gpr(4, ctx.gpr[4] + ctx.gpr[3]);
    goto L_08962728;
L_08962728:
    ctx.set_gpr(3, rt.memory().aot_load32(ctx.gpr[18] + static_cast<std::uint32_t>(144)));
    { const bool branch_taken = static_cast<std::int32_t>(ctx.gpr[3]) <= 0;
    // nop
      if (branch_taken) {
          goto L_089627B8;
      }
      goto L_08962734;
    }
L_08962734:
    { const bool branch_taken = ctx.gpr[4] == ctx.gpr[17];
    // nop
      if (branch_taken) {
          goto L_089627B8;
      }
      goto L_0896273C;
    }
L_0896273C:
    { const bool branch_taken = static_cast<std::int32_t>(ctx.gpr[3]) <= 0;
    // nop
      if (branch_taken) {
          goto L_089627B8;
      }
      goto L_08962744;
    }
L_08962744:
    ctx.set_gpr(4, ctx.gpr[18] + 0u);
    ctx.set_gpr(5, 0u + 0u);
    ctx.set_gpr(25, rt.memory().aot_load32(ctx.gpr[18] + static_cast<std::uint32_t>(0)));
    ctx.set_gpr(25, rt.memory().aot_load32(ctx.gpr[25] + static_cast<std::uint32_t>(412)));
    jump_target = ctx.gpr[25];
    ctx.set_gpr(31, 0x0896275Cu);
    // nop
    ctx.pc = jump_target;
    if (rt.invoke_chained_call(ctx, &aot_mem) && ctx.pc == 0x0896275Cu) goto L_0896275C;
    return;
L_0896275C:
    ctx.set_gpr(4, ctx.gpr[18] + 0u);
    ctx.set_gpr(31, 0x08962768u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0081_entry, 81u, 30u, 0x089482C8u>(ctx, &aot_mem) && ctx.pc == 0x08962768u) goto L_08962768;
    return;
L_08962768:
    ctx.set_gpr(23, ctx.gpr[2] + 0u);
    ctx.set_gpr(4, ctx.gpr[18] + 0u);
    ctx.set_gpr(31, 0x08962778u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0081_entry, 81u, 30u, 0x089482C8u>(ctx, &aot_mem) && ctx.pc == 0x08962778u) goto L_08962778;
    return;
L_08962778:
    ctx.set_gpr(30, ctx.gpr[2] + 0u);
    ctx.set_gpr(4, ctx.gpr[18] + 0u);
    ctx.set_gpr(25, rt.memory().aot_load32(ctx.gpr[18] + static_cast<std::uint32_t>(0)));
    ctx.set_gpr(25, rt.memory().aot_load32(ctx.gpr[25] + static_cast<std::uint32_t>(456)));
    jump_target = ctx.gpr[25];
    ctx.set_gpr(31, 0x08962790u);
    // nop
    ctx.pc = jump_target;
    if (rt.invoke_chained_call(ctx, &aot_mem) && ctx.pc == 0x08962790u) goto L_08962790;
    return;
L_08962790:
    ctx.set_gpr(3, 2228u << 16u);
    ctx.set_gpr(4, rt.memory().aot_load32(ctx.gpr[3] + static_cast<std::uint32_t>(-11152)));
    ctx.set_gpr(5, ctx.gpr[23] + 0u);
    ctx.set_gpr(6, ctx.gpr[30] + 0u);
    ctx.set_gpr(7, ctx.gpr[2] + 0u);
    ctx.set_gpr(8, ctx.gpr[16] + 0u);
    ctx.set_gpr(9, 2228u << 16u);
    ctx.set_gpr(9, ctx.gpr[9] + static_cast<std::uint32_t>(860));
    ctx.set_gpr(31, 0x089627B8u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0084_entry, 84u, 456u, 0x08955F2Cu>(ctx, &aot_mem) && ctx.pc == 0x089627B8u) goto L_089627B8;
    return;
L_089627B8:
    ctx.set_gpr(3, ctx.gpr[19] < static_cast<std::uint32_t>(256) ? 1u : 0u);
    { const bool branch_taken = ctx.gpr[3] != 0u;
    // nop
      if (branch_taken) {
          goto L_08962954;
      }
      goto L_089627C4;
    }
L_089627C4:
    ctx.set_gpr(5, rt.memory().aot_load32(ctx.gpr[18] + static_cast<std::uint32_t>(144)));
    { const bool branch_taken = static_cast<std::int32_t>(ctx.gpr[5]) <= 0;
    // nop
      if (branch_taken) {
          goto L_08962954;
      }
      goto L_089627D0;
    }
L_089627D0:
    ctx.set_gpr(3, rt.memory().aot_load8(ctx.gpr[16] + static_cast<std::uint32_t>(3)));
    ctx.set_gpr(3, ctx.gpr[3] << 24u);
    ctx.set_gpr(3, ctx.gpr[3] >> 31u);
    ctx.set_gpr(4, ctx.gpr[3] & 255u);
    { const bool branch_taken = ctx.gpr[4] != 0u;
    // nop
      if (branch_taken) {
          goto L_089627F4;
      }
      goto L_089627E8;
    }
L_089627E8:
    ctx.set_gpr(3, 0u + static_cast<std::uint32_t>(4));
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_089627F8;
      }
      goto L_089627F4;
    }
L_089627F4:
    ctx.set_gpr(3, 0u + static_cast<std::uint32_t>(12));
    goto L_089627F8;
L_089627F8:
    ctx.set_gpr(3, ctx.gpr[16] + ctx.gpr[3]);
    ctx.set_gpr(3, rt.memory().aot_load32(ctx.gpr[3] + static_cast<std::uint32_t>(4)));
    { const bool branch_taken = ctx.gpr[3] == ctx.gpr[20];
    // nop
      if (branch_taken) {
          goto L_08962954;
      }
      goto L_08962808;
    }
L_08962808:
    { const bool branch_taken = ctx.gpr[4] != 0u;
    // nop
      if (branch_taken) {
          goto L_0896281C;
      }
      goto L_08962810;
    }
L_08962810:
    ctx.set_gpr(3, 0u + static_cast<std::uint32_t>(4));
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_08962820;
      }
      goto L_0896281C;
    }
L_0896281C:
    ctx.set_gpr(3, 0u + static_cast<std::uint32_t>(12));
    goto L_08962820;
L_08962820:
    ctx.set_gpr(3, ctx.gpr[16] + ctx.gpr[3]);
    ctx.set_gpr(7, rt.memory().aot_load32(ctx.gpr[3] + static_cast<std::uint32_t>(4)));
    ctx.set_gpr(3, rt.memory().aot_load32(ctx.gpr[7] + static_cast<std::uint32_t>(0)));
    ctx.set_gpr(3, ctx.gpr[3] << 11u);
    ctx.set_gpr(8, ctx.gpr[3] >> 16u);
    ctx.set_gpr(3, rt.memory().aot_load8(ctx.gpr[7] + static_cast<std::uint32_t>(3)));
    ctx.set_gpr(3, ctx.gpr[3] << 24u);
    ctx.set_gpr(6, ctx.gpr[3] >> 31u);
    ctx.set_gpr(3, 0u + static_cast<std::uint32_t>(1));
    { const bool branch_taken = ctx.gpr[6] != ctx.gpr[3];
    // nop
      if (branch_taken) {
          goto L_0896285C;
      }
      goto L_0896284C;
    }
L_0896284C:
    ctx.set_gpr(3, rt.memory().aot_load16(ctx.gpr[7] + static_cast<std::uint32_t>(8)));
    ctx.set_gpr(3, ctx.gpr[3] & 32767u);
    ctx.set_gpr(3, ctx.gpr[3] << 16u);
    ctx.set_gpr(8, ctx.gpr[8] + ctx.gpr[3]);
    goto L_0896285C;
L_0896285C:
    ctx.set_gpr(6, ctx.gpr[8] + static_cast<std::uint32_t>(3));
    ctx.set_gpr(3, 0u + static_cast<std::uint32_t>(-4));
    ctx.set_gpr(6, ctx.gpr[6] & ctx.gpr[3]);
    ctx.set_gpr(3, rt.memory().aot_load8(ctx.gpr[7] + static_cast<std::uint32_t>(0)));
    ctx.set_gpr(3, ctx.gpr[3] << 27u);
    ctx.set_gpr(3, ctx.gpr[3] >> 28u);
    ctx.set_gpr(3, ctx.gpr[3] + static_cast<std::uint32_t>(1));
    ctx.set_gpr(3, ctx.gpr[3] << 2u);
    ctx.set_gpr(3, ctx.gpr[6] + ctx.gpr[3]);
    ctx.set_gpr(6, rt.memory().aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(0)));
    ctx.set_gpr(6, ctx.gpr[6] << 11u);
    ctx.set_gpr(7, ctx.gpr[6] >> 16u);
    ctx.set_gpr(6, 0u + static_cast<std::uint32_t>(1));
    { const bool branch_taken = ctx.gpr[4] != ctx.gpr[6];
    // nop
      if (branch_taken) {
          goto L_089628A8;
      }
      goto L_08962898;
    }
L_08962898:
    ctx.set_gpr(4, rt.memory().aot_load16(ctx.gpr[16] + static_cast<std::uint32_t>(8)));
    ctx.set_gpr(4, ctx.gpr[4] & 32767u);
    ctx.set_gpr(4, ctx.gpr[4] << 16u);
    ctx.set_gpr(7, ctx.gpr[7] + ctx.gpr[4]);
    goto L_089628A8;
L_089628A8:
    ctx.set_gpr(6, ctx.gpr[7] + static_cast<std::uint32_t>(3));
    ctx.set_gpr(4, 0u + static_cast<std::uint32_t>(-4));
    ctx.set_gpr(6, ctx.gpr[6] & ctx.gpr[4]);
    ctx.set_gpr(4, rt.memory().aot_load8(ctx.gpr[16] + static_cast<std::uint32_t>(0)));
    ctx.set_gpr(4, ctx.gpr[4] << 27u);
    ctx.set_gpr(4, ctx.gpr[4] >> 28u);
    ctx.set_gpr(4, ctx.gpr[4] + static_cast<std::uint32_t>(1));
    ctx.set_gpr(4, ctx.gpr[4] << 2u);
    ctx.set_gpr(4, ctx.gpr[6] + ctx.gpr[4]);
    ctx.set_gpr(1, ctx.gpr[3] < ctx.gpr[4] ? 1u : 0u);
    { const bool branch_taken = ctx.gpr[1] == 0u;
    // nop
      if (branch_taken) {
          goto L_08962954;
      }
      goto L_089628D8;
    }
L_089628D8:
    { const bool branch_taken = static_cast<std::int32_t>(ctx.gpr[5]) <= 0;
    // nop
      if (branch_taken) {
          goto L_08962954;
      }
      goto L_089628E0;
    }
L_089628E0:
    ctx.set_gpr(4, ctx.gpr[18] + 0u);
    ctx.set_gpr(5, 0u + 0u);
    ctx.set_gpr(25, rt.memory().aot_load32(ctx.gpr[18] + static_cast<std::uint32_t>(0)));
    ctx.set_gpr(25, rt.memory().aot_load32(ctx.gpr[25] + static_cast<std::uint32_t>(412)));
    jump_target = ctx.gpr[25];
    ctx.set_gpr(31, 0x089628F8u);
    // nop
    ctx.pc = jump_target;
    if (rt.invoke_chained_call(ctx, &aot_mem) && ctx.pc == 0x089628F8u) goto L_089628F8;
    return;
L_089628F8:
    ctx.set_gpr(4, ctx.gpr[18] + 0u);
    ctx.set_gpr(31, 0x08962904u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0081_entry, 81u, 30u, 0x089482C8u>(ctx, &aot_mem) && ctx.pc == 0x08962904u) goto L_08962904;
    return;
L_08962904:
    ctx.set_gpr(19, ctx.gpr[2] + 0u);
    ctx.set_gpr(4, ctx.gpr[18] + 0u);
    ctx.set_gpr(31, 0x08962914u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0081_entry, 81u, 30u, 0x089482C8u>(ctx, &aot_mem) && ctx.pc == 0x08962914u) goto L_08962914;
    return;
L_08962914:
    ctx.set_gpr(23, ctx.gpr[2] + 0u);
    ctx.set_gpr(4, ctx.gpr[18] + 0u);
    ctx.set_gpr(25, rt.memory().aot_load32(ctx.gpr[18] + static_cast<std::uint32_t>(0)));
    ctx.set_gpr(25, rt.memory().aot_load32(ctx.gpr[25] + static_cast<std::uint32_t>(456)));
    jump_target = ctx.gpr[25];
    ctx.set_gpr(31, 0x0896292Cu);
    // nop
    ctx.pc = jump_target;
    if (rt.invoke_chained_call(ctx, &aot_mem) && ctx.pc == 0x0896292Cu) goto L_0896292C;
    return;
L_0896292C:
    ctx.set_gpr(3, 2228u << 16u);
    ctx.set_gpr(4, rt.memory().aot_load32(ctx.gpr[3] + static_cast<std::uint32_t>(-11152)));
    ctx.set_gpr(5, ctx.gpr[19] + 0u);
    ctx.set_gpr(6, ctx.gpr[23] + 0u);
    ctx.set_gpr(7, ctx.gpr[2] + 0u);
    ctx.set_gpr(8, ctx.gpr[16] + 0u);
    ctx.set_gpr(9, 2228u << 16u);
    ctx.set_gpr(9, ctx.gpr[9] + static_cast<std::uint32_t>(928));
    ctx.set_gpr(31, 0x08962954u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0084_entry, 84u, 456u, 0x08955F2Cu>(ctx, &aot_mem) && ctx.pc == 0x08962954u) goto L_08962954;
    return;
L_08962954:
    ctx.set_gpr(3, rt.memory().aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(0)));
    ctx.set_gpr(3, ctx.gpr[3] << 11u);
    ctx.set_gpr(5, ctx.gpr[3] >> 16u);
    ctx.set_gpr(3, rt.memory().aot_load8(ctx.gpr[16] + static_cast<std::uint32_t>(3)));
    ctx.set_gpr(3, ctx.gpr[3] << 24u);
    ctx.set_gpr(4, ctx.gpr[3] >> 31u);
    ctx.set_gpr(3, 0u + static_cast<std::uint32_t>(1));
    { const bool branch_taken = ctx.gpr[4] != ctx.gpr[3];
    // nop
      if (branch_taken) {
          goto L_08962988;
      }
      goto L_08962978;
    }
L_08962978:
    ctx.set_gpr(3, rt.memory().aot_load16(ctx.gpr[16] + static_cast<std::uint32_t>(8)));
    ctx.set_gpr(3, ctx.gpr[3] & 32767u);
    ctx.set_gpr(3, ctx.gpr[3] << 16u);
    ctx.set_gpr(5, ctx.gpr[5] + ctx.gpr[3]);
    goto L_08962988;
L_08962988:
    ctx.set_gpr(4, ctx.gpr[5] + static_cast<std::uint32_t>(3));
    ctx.set_gpr(3, 0u + static_cast<std::uint32_t>(-4));
    ctx.set_gpr(4, ctx.gpr[4] & ctx.gpr[3]);
    ctx.set_gpr(3, rt.memory().aot_load8(ctx.gpr[16] + static_cast<std::uint32_t>(0)));
    ctx.set_gpr(3, ctx.gpr[3] << 27u);
    ctx.set_gpr(3, ctx.gpr[3] >> 28u);
    ctx.set_gpr(3, ctx.gpr[3] + static_cast<std::uint32_t>(1));
    ctx.set_gpr(3, ctx.gpr[3] << 2u);
    ctx.set_gpr(3, ctx.gpr[4] + ctx.gpr[3]);
    ctx.set_gpr(19, ctx.gpr[16] + ctx.gpr[3]);
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_08962A24;
      }
      goto L_089629B8;
    }
L_089629B8:
    ctx.set_gpr(4, ctx.gpr[18] + 0u);
    ctx.set_gpr(5, ctx.gpr[19] + 0u);
    ctx.set_gpr(31, 0x089629C8u);
    // nop
    goto L_08960E58;
L_089629C8:
    ctx.set_gpr(3, rt.memory().aot_load32(ctx.gpr[19] + static_cast<std::uint32_t>(0)));
    ctx.set_gpr(3, ctx.gpr[3] << 11u);
    ctx.set_gpr(5, ctx.gpr[3] >> 16u);
    ctx.set_gpr(3, rt.memory().aot_load8(ctx.gpr[19] + static_cast<std::uint32_t>(3)));
    ctx.set_gpr(3, ctx.gpr[3] << 24u);
    ctx.set_gpr(4, ctx.gpr[3] >> 31u);
    ctx.set_gpr(3, 0u + static_cast<std::uint32_t>(1));
    { const bool branch_taken = ctx.gpr[4] != ctx.gpr[3];
    // nop
      if (branch_taken) {
          goto L_089629FC;
      }
      goto L_089629EC;
    }
L_089629EC:
    ctx.set_gpr(3, rt.memory().aot_load16(ctx.gpr[19] + static_cast<std::uint32_t>(8)));
    ctx.set_gpr(3, ctx.gpr[3] & 32767u);
    ctx.set_gpr(3, ctx.gpr[3] << 16u);
    ctx.set_gpr(5, ctx.gpr[5] + ctx.gpr[3]);
    goto L_089629FC;
L_089629FC:
    ctx.set_gpr(4, ctx.gpr[5] + static_cast<std::uint32_t>(3));
    ctx.set_gpr(3, 0u + static_cast<std::uint32_t>(-4));
    ctx.set_gpr(4, ctx.gpr[4] & ctx.gpr[3]);
    ctx.set_gpr(3, rt.memory().aot_load8(ctx.gpr[19] + static_cast<std::uint32_t>(0)));
    ctx.set_gpr(3, ctx.gpr[3] << 27u);
    ctx.set_gpr(3, ctx.gpr[3] >> 28u);
    ctx.set_gpr(3, ctx.gpr[3] + static_cast<std::uint32_t>(1));
    ctx.set_gpr(3, ctx.gpr[3] << 2u);
    ctx.set_gpr(3, ctx.gpr[4] + ctx.gpr[3]);
    ctx.set_gpr(19, ctx.gpr[19] + ctx.gpr[3]);
    goto L_08962A24;
L_08962A24:
    ctx.set_gpr(3, rt.memory().aot_load32(ctx.gpr[21] + static_cast<std::uint32_t>(44)));
    { const bool branch_taken = ctx.gpr[19] == ctx.gpr[3];
    // nop
      if (branch_taken) {
          goto L_08962AF0;
      }
      goto L_08962A30;
    }
L_08962A30:
    ctx.set_gpr(3, rt.memory().aot_load32(ctx.gpr[19] + static_cast<std::uint32_t>(0)));
    ctx.set_gpr(3, ctx.gpr[3] << 11u);
    ctx.set_gpr(4, ctx.gpr[3] >> 16u);
    ctx.set_gpr(6, ctx.gpr[4] + 0u);
    ctx.set_gpr(3, rt.memory().aot_load8(ctx.gpr[19] + static_cast<std::uint32_t>(3)));
    ctx.set_gpr(3, ctx.gpr[3] << 24u);
    ctx.set_gpr(3, ctx.gpr[3] >> 31u);
    ctx.set_gpr(3, ctx.gpr[3] & 255u);
    ctx.set_gpr(5, 0u + static_cast<std::uint32_t>(1));
    { const bool branch_taken = ctx.gpr[3] != ctx.gpr[5];
    // nop
      if (branch_taken) {
          goto L_08962A6C;
      }
      goto L_08962A5C;
    }
L_08962A5C:
    ctx.set_gpr(5, rt.memory().aot_load16(ctx.gpr[19] + static_cast<std::uint32_t>(8)));
    ctx.set_gpr(5, ctx.gpr[5] & 32767u);
    ctx.set_gpr(5, ctx.gpr[5] << 16u);
    ctx.set_gpr(6, ctx.gpr[4] + ctx.gpr[5]);
    goto L_08962A6C;
L_08962A6C:
    ctx.set_gpr(6, ctx.gpr[6] + static_cast<std::uint32_t>(3));
    ctx.set_gpr(5, 0u + static_cast<std::uint32_t>(-4));
    ctx.set_gpr(7, ctx.gpr[6] & ctx.gpr[5]);
    ctx.set_gpr(5, rt.memory().aot_load8(ctx.gpr[19] + static_cast<std::uint32_t>(0)));
    ctx.set_gpr(5, ctx.gpr[5] << 27u);
    ctx.set_gpr(5, ctx.gpr[5] >> 28u);
    ctx.set_gpr(5, ctx.gpr[5] & 255u);
    ctx.set_gpr(5, ctx.gpr[5] + static_cast<std::uint32_t>(1));
    ctx.set_gpr(6, ctx.gpr[5] << 2u);
    ctx.set_gpr(5, ctx.gpr[7] + ctx.gpr[6]);
    ctx.set_gpr(5, ctx.gpr[19] + ctx.gpr[5]);
    ctx.set_gpr(5, rt.memory().aot_load8(ctx.gpr[5] + static_cast<std::uint32_t>(0)));
    ctx.set_gpr(5, ctx.gpr[5] & 1u);
    { const bool branch_taken = ctx.gpr[5] == 0u;
    // nop
      if (branch_taken) {
          goto L_08962AF0;
      }
      goto L_08962AA8;
    }
L_08962AA8:
    ctx.set_gpr(5, 0u + static_cast<std::uint32_t>(1));
    { const bool branch_taken = ctx.gpr[3] != ctx.gpr[5];
    // nop
      if (branch_taken) {
          goto L_08962AC4;
      }
      goto L_08962AB4;
    }
L_08962AB4:
    ctx.set_gpr(3, rt.memory().aot_load16(ctx.gpr[19] + static_cast<std::uint32_t>(8)));
    ctx.set_gpr(3, ctx.gpr[3] & 32767u);
    ctx.set_gpr(3, ctx.gpr[3] << 16u);
    ctx.set_gpr(4, ctx.gpr[4] + ctx.gpr[3]);
    goto L_08962AC4;
L_08962AC4:
    ctx.set_gpr(4, ctx.gpr[4] + static_cast<std::uint32_t>(3));
    ctx.set_gpr(3, 0u + static_cast<std::uint32_t>(-4));
    ctx.set_gpr(3, ctx.gpr[4] & ctx.gpr[3]);
    ctx.set_gpr(5, ctx.gpr[3] + ctx.gpr[6]);
    ctx.set_gpr(3, rt.memory().aot_load32(ctx.gpr[18] + static_cast<std::uint32_t>(216)));
    ctx.set_gpr(4, ctx.gpr[3] + static_cast<std::uint32_t>(7));
    ctx.set_gpr(3, 0u + static_cast<std::uint32_t>(-8));
    ctx.set_gpr(3, ctx.gpr[4] & ctx.gpr[3]);
    ctx.set_gpr(1, ctx.gpr[5] < ctx.gpr[3] ? 1u : 0u);
    { const bool branch_taken = ctx.gpr[1] == 0u;
    // nop
      if (branch_taken) {
          goto L_089629B8;
      }
      goto L_08962AF0;
    }
L_08962AF0:
    ctx.set_gpr(3, rt.memory().aot_load8(ctx.gpr[16] + static_cast<std::uint32_t>(3)));
    ctx.set_gpr(3, ctx.gpr[3] << 24u);
    ctx.set_gpr(3, ctx.gpr[3] >> 31u);
    { const bool branch_taken = ctx.gpr[3] != 0u;
    // nop
      if (branch_taken) {
          goto L_08962B10;
      }
      goto L_08962B04;
    }
L_08962B04:
    ctx.set_gpr(3, 0u + static_cast<std::uint32_t>(4));
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_08962B14;
      }
      goto L_08962B10;
    }
L_08962B10:
    ctx.set_gpr(3, 0u + static_cast<std::uint32_t>(12));
    goto L_08962B14;
L_08962B14:
    ctx.set_gpr(3, ctx.gpr[16] + ctx.gpr[3]);
    ctx.set_gpr(16, rt.memory().aot_load32(ctx.gpr[3] + static_cast<std::uint32_t>(4)));
    goto L_08962B1C;
L_08962B1C:
    { const bool branch_taken = ctx.gpr[16] != ctx.gpr[20];
    // nop
      if (branch_taken) {
          goto L_0896260C;
      }
      goto L_08962B24;
    }
L_08962B24:
    ctx.set_gpr(17, ctx.gpr[17] + static_cast<std::uint32_t>(1));
    goto L_08962B28;
L_08962B28:
    ctx.set_gpr(3, ctx.gpr[17] < static_cast<std::uint32_t>(96) ? 1u : 0u);
    { const bool branch_taken = ctx.gpr[3] != 0u;
    // nop
      if (branch_taken) {
          goto L_08962424;
      }
      goto L_08962B34;
    }
L_08962B34:
    ctx.set_gpr(3, rt.memory().aot_load32(ctx.gpr[18] + static_cast<std::uint32_t>(148)));
    { const bool branch_taken = static_cast<std::int32_t>(ctx.gpr[3]) <= 0;
    // nop
      if (branch_taken) {
          goto L_08962B50;
      }
      goto L_08962B40;
    }
L_08962B40:
    ctx.set_gpr(4, ctx.gpr[18] + 0u);
    ctx.set_gpr(5, rt.memory().aot_load32(ctx.gpr[21] + static_cast<std::uint32_t>(44)));
    ctx.set_gpr(31, 0x08962B50u);
    // nop
    goto L_0896012C;
L_08962B50:
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
    ctx.set_gpr(29, ctx.gpr[29] + static_cast<std::uint32_t>(48));
    jump_target = ctx.gpr[31];
    // nop
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_08962B84:
    ctx.set_gpr(29, ctx.gpr[29] + static_cast<std::uint32_t>(-32));
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
    ctx.set_gpr(17, rt.memory().aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(212)));
    ctx.set_gpr(8, 0u + 0u);
    ctx.set_gpr(3, rt.memory().aot_load32(ctx.gpr[17] + static_cast<std::uint32_t>(2056)));
    ctx.set_gpr(3, ctx.gpr[3] + ctx.gpr[19]);
    rt.memory().aot_store32(ctx.gpr[17] + static_cast<std::uint32_t>(2056), ctx.gpr[3]);
    { const bool branch_taken = static_cast<std::int32_t>(ctx.gpr[19]) >= 0;
    // nop
      if (branch_taken) {
          goto L_08962BD8;
      }
      goto L_08962BCC;
    }
L_08962BCC:
    ctx.set_gpr(16, ctx.gpr[20] + 0u);
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_08962BDC;
      }
      goto L_08962BD8;
    }
L_08962BD8:
    ctx.set_gpr(16, ctx.gpr[20] + ctx.gpr[19]);
    goto L_08962BDC;
L_08962BDC:
    ctx.set_gpr(3, rt.memory().aot_load32(ctx.gpr[17] + static_cast<std::uint32_t>(2028)));
    ctx.set_gpr(18, ctx.gpr[3] + static_cast<std::uint32_t>(-2));
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_08962CD8;
      }
      goto L_08962BEC;
    }
L_08962BEC:
    ctx.set_gpr(5, ctx.gpr[18] << 2u);
    ctx.set_gpr(7, rt.memory().aot_load32(ctx.gpr[17] + static_cast<std::uint32_t>(2020)));
    ctx.set_gpr(4, ctx.gpr[7] + ctx.gpr[5]);
    ctx.set_gpr(6, rt.memory().aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(0)));
    ctx.set_gpr(3, ctx.gpr[20] < ctx.gpr[6] ? 1u : 0u);
    { const bool branch_taken = ctx.gpr[3] != 0u;
    // nop
      if (branch_taken) {
          goto L_08962CCC;
      }
      goto L_08962C08;
    }
L_08962C08:
    ctx.set_gpr(3, ctx.gpr[7] + static_cast<std::uint32_t>(4));
    ctx.set_gpr(5, ctx.gpr[3] + ctx.gpr[5]);
    ctx.set_gpr(3, rt.memory().aot_load32(ctx.gpr[5] + static_cast<std::uint32_t>(0)));
    ctx.set_gpr(1, ctx.gpr[3] < ctx.gpr[20] ? 1u : 0u);
    { const bool branch_taken = ctx.gpr[1] != 0u;
    // nop
      if (branch_taken) {
          goto L_08962CCC;
      }
      goto L_08962C20;
    }
L_08962C20:
    { const bool branch_taken = ctx.gpr[8] == 0u;
    // nop
      if (branch_taken) {
          goto L_08962C50;
      }
      goto L_08962C28;
    }
L_08962C28:
    ctx.set_gpr(3, rt.memory().aot_load32(ctx.gpr[21] + static_cast<std::uint32_t>(144)));
    ctx.set_gpr(3, static_cast<std::int32_t>(ctx.gpr[3]) < 2 ? 1u : 0u);
    { const bool branch_taken = ctx.gpr[3] != 0u;
    // nop
      if (branch_taken) {
          goto L_08962C48;
      }
      goto L_08962C38;
    }
L_08962C38:
    ctx.set_gpr(4, 2228u << 16u);
    ctx.set_gpr(4, ctx.gpr[4] + static_cast<std::uint32_t>(996));
    ctx.set_gpr(31, 0x08962C48u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0084_entry, 84u, 461u, 0x08955FA4u>(ctx, &aot_mem) && ctx.pc == 0x08962C48u) goto L_08962C48;
    return;
L_08962C48:
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_08962DE8;
      }
      goto L_08962C50;
    }
L_08962C50:
    { const bool branch_taken = static_cast<std::int32_t>(ctx.gpr[19]) >= 0;
    // nop
      if (branch_taken) {
          goto L_08962CA0;
      }
      goto L_08962C58;
    }
L_08962C58:
    { const bool branch_taken = ctx.gpr[6] != ctx.gpr[16];
    // nop
      if (branch_taken) {
          goto L_08962CA0;
      }
      goto L_08962C60;
    }
L_08962C60:
    ctx.set_gpr(6, rt.memory().aot_load32(ctx.gpr[17] + static_cast<std::uint32_t>(2028)));
    ctx.set_gpr(3, ctx.gpr[18] + static_cast<std::uint32_t>(2));
    ctx.set_gpr(1, static_cast<std::int32_t>(ctx.gpr[3]) < static_cast<std::int32_t>(ctx.gpr[6]) ? 1u : 0u);
    { const bool branch_taken = ctx.gpr[1] == 0u;
    // nop
      if (branch_taken) {
          goto L_08962C8C;
      }
      goto L_08962C74;
    }
L_08962C74:
    ctx.set_gpr(2, ctx.gpr[3] << 2u);
    ctx.set_gpr(5, ctx.gpr[7] + ctx.gpr[2]);
    ctx.set_gpr(2, ctx.gpr[6] - ctx.gpr[3]);
    ctx.set_gpr(6, ctx.gpr[2] << 2u);
    ctx.set_gpr(31, 0x08962C8Cu);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0003_entry, 3u, 662u, 0x08812B08u>(ctx, &aot_mem) && ctx.pc == 0x08962C8Cu) goto L_08962C8C;
    return;
L_08962C8C:
    ctx.set_gpr(3, rt.memory().aot_load32(ctx.gpr[17] + static_cast<std::uint32_t>(2028)));
    ctx.set_gpr(3, ctx.gpr[3] + static_cast<std::uint32_t>(-2));
    rt.memory().aot_store32(ctx.gpr[17] + static_cast<std::uint32_t>(2028), ctx.gpr[3]);
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_08962CB8;
      }
      goto L_08962CA0;
    }
L_08962CA0:
    { const bool branch_taken = static_cast<std::int32_t>(ctx.gpr[19]) < 0;
    // nop
      if (branch_taken) {
          goto L_08962CB4;
      }
      goto L_08962CA8;
    }
L_08962CA8:
    ctx.set_gpr(1, ctx.gpr[3] < ctx.gpr[16] ? 1u : 0u);
    { const bool branch_taken = ctx.gpr[1] == 0u;
    // nop
      if (branch_taken) {
          goto L_08962CB8;
      }
      goto L_08962CB4;
    }
L_08962CB4:
    rt.memory().aot_store32(ctx.gpr[5] + static_cast<std::uint32_t>(0), ctx.gpr[16]);
    goto L_08962CB8;
L_08962CB8:
    ctx.set_gpr(8, 0u + static_cast<std::uint32_t>(1));
    ctx.set_gpr(3, rt.memory().aot_load32(ctx.gpr[21] + static_cast<std::uint32_t>(148)));
    ctx.set_gpr(3, static_cast<std::int32_t>(ctx.gpr[3]) < 2 ? 1u : 0u);
    { const bool branch_taken = ctx.gpr[3] != 0u;
    // nop
      if (branch_taken) {
          goto L_08962CE0;
      }
      goto L_08962CCC;
    }
L_08962CCC:
    { const bool branch_taken = static_cast<std::int32_t>(ctx.gpr[19]) > 0;
    // nop
      if (branch_taken) {
          goto L_08962CE0;
      }
      goto L_08962CD4;
    }
L_08962CD4:
    ctx.set_gpr(18, ctx.gpr[18] + static_cast<std::uint32_t>(-2));
    goto L_08962CD8;
L_08962CD8:
    { const bool branch_taken = static_cast<std::int32_t>(ctx.gpr[18]) >= 0;
    // nop
      if (branch_taken) {
          goto L_08962BEC;
      }
      goto L_08962CE0;
    }
L_08962CE0:
    { const bool branch_taken = ctx.gpr[8] != 0u;
    // nop
      if (branch_taken) {
          goto L_08962DE8;
      }
      goto L_08962CE8;
    }
L_08962CE8:
    { const bool branch_taken = static_cast<std::int32_t>(ctx.gpr[19]) < 0;
    // nop
      if (branch_taken) {
          goto L_08962DE8;
      }
      goto L_08962CF0;
    }
L_08962CF0:
    ctx.set_gpr(4, rt.memory().aot_load32(ctx.gpr[17] + static_cast<std::uint32_t>(2024)));
    ctx.set_gpr(3, rt.memory().aot_load32(ctx.gpr[17] + static_cast<std::uint32_t>(2028)));
    ctx.set_gpr(3, static_cast<std::int32_t>(ctx.gpr[3]) < static_cast<std::int32_t>(ctx.gpr[4]) ? 1u : 0u);
    { const bool branch_taken = ctx.gpr[3] != 0u;
    // nop
      if (branch_taken) {
          goto L_08962D88;
      }
      goto L_08962D04;
    }
L_08962D04:
    ctx.set_gpr(16, ctx.gpr[4] + static_cast<std::uint32_t>(2));
    { const bool branch_taken = ctx.gpr[16] != 0u;
    // nop
      if (branch_taken) {
          goto L_08962D14;
      }
      goto L_08962D10;
    }
L_08962D10:
    ctx.set_gpr(16, 0u + static_cast<std::uint32_t>(16));
    goto L_08962D14;
L_08962D14:
    ctx.set_gpr(6, ctx.gpr[16] << 2u);
    ctx.set_gpr(2, 2245u << 16u);
    ctx.set_gpr(4, rt.memory().aot_load32(ctx.gpr[2] + static_cast<std::uint32_t>(31440)));
    ctx.set_gpr(5, rt.memory().aot_load32(ctx.gpr[17] + static_cast<std::uint32_t>(2020)));
    ctx.set_gpr(25, rt.memory().aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(0)));
    ctx.set_gpr(25, rt.memory().aot_load32(ctx.gpr[25] + static_cast<std::uint32_t>(28)));
    jump_target = ctx.gpr[25];
    ctx.set_gpr(31, 0x08962D34u);
    // nop
    ctx.pc = jump_target;
    if (rt.invoke_chained_call(ctx, &aot_mem) && ctx.pc == 0x08962D34u) goto L_08962D34;
    return;
L_08962D34:
    { const bool branch_taken = ctx.gpr[2] == 0u;
    // nop
      if (branch_taken) {
          goto L_08962D4C;
      }
      goto L_08962D3C;
    }
L_08962D3C:
    rt.memory().aot_store32(ctx.gpr[17] + static_cast<std::uint32_t>(2020), ctx.gpr[2]);
    rt.memory().aot_store32(ctx.gpr[17] + static_cast<std::uint32_t>(2024), ctx.gpr[16]);
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_08962D88;
      }
      goto L_08962D4C;
    }
L_08962D4C:
    ctx.set_gpr(3, rt.memory().aot_load32(ctx.gpr[21] + static_cast<std::uint32_t>(144)));
    { const bool branch_taken = static_cast<std::int32_t>(ctx.gpr[3]) <= 0;
    // nop
      if (branch_taken) {
          goto L_08962D80;
      }
      goto L_08962D58;
    }
L_08962D58:
    ctx.set_gpr(4, ctx.gpr[21] + 0u);
    ctx.set_gpr(5, 0u + 0u);
    ctx.set_gpr(25, rt.memory().aot_load32(ctx.gpr[21] + static_cast<std::uint32_t>(0)));
    ctx.set_gpr(25, rt.memory().aot_load32(ctx.gpr[25] + static_cast<std::uint32_t>(412)));
    jump_target = ctx.gpr[25];
    ctx.set_gpr(31, 0x08962D70u);
    // nop
    ctx.pc = jump_target;
    if (rt.invoke_chained_call(ctx, &aot_mem) && ctx.pc == 0x08962D70u) goto L_08962D70;
    return;
L_08962D70:
    ctx.set_gpr(4, 2228u << 16u);
    ctx.set_gpr(4, ctx.gpr[4] + static_cast<std::uint32_t>(1044));
    ctx.set_gpr(31, 0x08962D80u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0084_entry, 84u, 456u, 0x08955F2Cu>(ctx, &aot_mem) && ctx.pc == 0x08962D80u) goto L_08962D80;
    return;
L_08962D80:
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_08962DE8;
      }
      goto L_08962D88;
    }
L_08962D88:
    ctx.set_gpr(3, rt.memory().aot_load32(ctx.gpr[17] + static_cast<std::uint32_t>(2028)));
    ctx.set_gpr(4, ctx.gpr[3] << 2u);
    ctx.set_gpr(3, rt.memory().aot_load32(ctx.gpr[17] + static_cast<std::uint32_t>(2020)));
    ctx.set_gpr(3, ctx.gpr[3] + ctx.gpr[4]);
    rt.memory().aot_store32(ctx.gpr[3] + static_cast<std::uint32_t>(0), ctx.gpr[20]);
    ctx.set_gpr(5, ctx.gpr[20] + ctx.gpr[19]);
    ctx.set_gpr(4, rt.memory().aot_load32(ctx.gpr[17] + static_cast<std::uint32_t>(2020)));
    ctx.set_gpr(3, rt.memory().aot_load32(ctx.gpr[17] + static_cast<std::uint32_t>(2028)));
    ctx.set_gpr(3, ctx.gpr[3] << 2u);
    ctx.set_gpr(3, ctx.gpr[3] + ctx.gpr[4]);
    rt.memory().aot_store32(ctx.gpr[3] + static_cast<std::uint32_t>(4), ctx.gpr[5]);
    ctx.set_gpr(3, rt.memory().aot_load32(ctx.gpr[17] + static_cast<std::uint32_t>(2028)));
    ctx.set_gpr(3, ctx.gpr[3] + static_cast<std::uint32_t>(2));
    rt.memory().aot_store32(ctx.gpr[17] + static_cast<std::uint32_t>(2028), ctx.gpr[3]);
    ctx.set_gpr(4, static_cast<std::uint32_t>(static_cast<std::int32_t>(ctx.gpr[3]) >> 1u));
    { const bool branch_taken = static_cast<std::int32_t>(ctx.gpr[3]) >= 0;
    // nop
      if (branch_taken) {
          goto L_08962DD4;
      }
      goto L_08962DCC;
    }
L_08962DCC:
    ctx.set_gpr(3, ctx.gpr[3] + static_cast<std::uint32_t>(1));
    ctx.set_gpr(4, static_cast<std::uint32_t>(static_cast<std::int32_t>(ctx.gpr[3]) >> 1u));
    goto L_08962DD4;
L_08962DD4:
    ctx.set_gpr(3, rt.memory().aot_load32(ctx.gpr[17] + static_cast<std::uint32_t>(2032)));
    ctx.set_gpr(1, static_cast<std::int32_t>(ctx.gpr[3]) < static_cast<std::int32_t>(ctx.gpr[4]) ? 1u : 0u);
    { const bool branch_taken = ctx.gpr[1] == 0u;
    // nop
      if (branch_taken) {
          goto L_08962DE8;
      }
      goto L_08962DE4;
    }
L_08962DE4:
    rt.memory().aot_store32(ctx.gpr[17] + static_cast<std::uint32_t>(2032), ctx.gpr[4]);
    goto L_08962DE8;
L_08962DE8:
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
L_08962E10:
    ctx.set_gpr(29, ctx.gpr[29] + static_cast<std::uint32_t>(-32));
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
    ctx.set_gpr(25, rt.memory().aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(0)));
    ctx.set_gpr(25, rt.memory().aot_load32(ctx.gpr[25] + static_cast<std::uint32_t>(280)));
    jump_target = ctx.gpr[25];
    ctx.set_gpr(31, 0x08962E4Cu);
    // nop
    ctx.pc = jump_target;
    if (rt.invoke_chained_call(ctx, &aot_mem) && ctx.pc == 0x08962E4Cu) goto L_08962E4C;
    return;
L_08962E4C:
    ctx.set_gpr(16, rt.memory().aot_load32(ctx.gpr[21] + static_cast<std::uint32_t>(212)));
    ctx.set_gpr(17, 0u + 0u);
    ctx.set_gpr(3, rt.memory().aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(2028)));
    { const bool branch_taken = ctx.gpr[3] == 0u;
    // nop
      if (branch_taken) {
          goto L_08962F0C;
      }
      goto L_08962E60;
    }
L_08962E60:
    ctx.set_gpr(2, rt.memory().aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(2020)));
    { const bool branch_taken = ctx.gpr[2] == 0u;
    // nop
      if (branch_taken) {
          goto L_08962E78;
      }
      goto L_08962E6C;
    }
L_08962E6C:
    ctx.set_gpr(2, rt.memory().aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(2024)));
    { const bool branch_taken = ctx.gpr[2] != 0u;
    // nop
      if (branch_taken) {
          goto L_08962E84;
      }
      goto L_08962E78;
    }
L_08962E78:
    ctx.set_gpr(2, 0u + static_cast<std::uint32_t>(1));
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_08962F64;
      }
      goto L_08962E84;
    }
L_08962E84:
    { const bool branch_taken = static_cast<std::int32_t>(ctx.gpr[3]) < 0;
    // nop
      if (branch_taken) {
          goto L_08962EA0;
      }
      goto L_08962E8C;
    }
L_08962E8C:
    { const bool branch_taken = static_cast<std::int32_t>(ctx.gpr[2]) < 0;
    // nop
      if (branch_taken) {
          goto L_08962EA0;
      }
      goto L_08962E94;
    }
L_08962E94:
    ctx.set_gpr(1, static_cast<std::int32_t>(ctx.gpr[2]) < static_cast<std::int32_t>(ctx.gpr[3]) ? 1u : 0u);
    { const bool branch_taken = ctx.gpr[1] == 0u;
    // nop
      if (branch_taken) {
          goto L_08962EAC;
      }
      goto L_08962EA0;
    }
L_08962EA0:
    ctx.set_gpr(2, 0u + static_cast<std::uint32_t>(1));
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_08962F64;
      }
      goto L_08962EAC;
    }
L_08962EAC:
    ctx.set_gpr(18, 0u + 0u);
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_08962EF4;
      }
      goto L_08962EB8;
    }
L_08962EB8:
    ctx.set_gpr(3, ctx.gpr[18] << 2u);
    ctx.set_gpr(2, rt.memory().aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(2020)));
    ctx.set_gpr(2, ctx.gpr[2] + ctx.gpr[3]);
    ctx.set_gpr(6, rt.memory().aot_load32(ctx.gpr[2] + static_cast<std::uint32_t>(0)));
    ctx.set_gpr(7, rt.memory().aot_load32(ctx.gpr[2] + static_cast<std::uint32_t>(4)));
    ctx.set_gpr(4, ctx.gpr[21] + 0u);
    ctx.set_gpr(5, ctx.gpr[18] + 0u);
    ctx.set_gpr(8, ctx.gpr[20] + 0u);
    ctx.set_gpr(9, ctx.gpr[19] + 0u);
    ctx.set_gpr(31, 0x08962EE4u);
    // nop
    goto L_08962F8C;
L_08962EE4:
    { const bool branch_taken = ctx.gpr[2] == 0u;
    // nop
      if (branch_taken) {
          goto L_08962EF0;
      }
      goto L_08962EEC;
    }
L_08962EEC:
    ctx.set_gpr(17, 0u + static_cast<std::uint32_t>(1));
    goto L_08962EF0;
L_08962EF0:
    ctx.set_gpr(18, ctx.gpr[18] + static_cast<std::uint32_t>(2));
    goto L_08962EF4;
L_08962EF4:
    ctx.set_gpr(2, rt.memory().aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(2028)));
    ctx.set_gpr(2, static_cast<std::int32_t>(ctx.gpr[18]) < static_cast<std::int32_t>(ctx.gpr[2]) ? 1u : 0u);
    { const bool branch_taken = ctx.gpr[2] != 0u;
    // nop
      if (branch_taken) {
          goto L_08962EB8;
      }
      goto L_08962F04;
    }
L_08962F04:
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_08962F4C;
      }
      goto L_08962F0C;
    }
L_08962F0C:
    ctx.set_gpr(6, rt.memory().aot_load32(ctx.gpr[21] + static_cast<std::uint32_t>(124)));
    { const bool branch_taken = ctx.gpr[6] == 0u;
    // nop
      if (branch_taken) {
          goto L_08962F4C;
      }
      goto L_08962F18;
    }
L_08962F18:
    ctx.set_gpr(2, rt.memory().aot_load32(ctx.gpr[21] + static_cast<std::uint32_t>(100)));
    { const bool branch_taken = ctx.gpr[2] == 0u;
    // nop
      if (branch_taken) {
          goto L_08962F4C;
      }
      goto L_08962F24;
    }
L_08962F24:
    ctx.set_gpr(7, ctx.gpr[6] + ctx.gpr[2]);
    ctx.set_gpr(4, ctx.gpr[21] + 0u);
    ctx.set_gpr(5, 0u + 0u);
    ctx.set_gpr(8, ctx.gpr[20] + 0u);
    ctx.set_gpr(9, ctx.gpr[19] + 0u);
    ctx.set_gpr(31, 0x08962F40u);
    // nop
    goto L_08962F8C;
L_08962F40:
    { const bool branch_taken = ctx.gpr[2] == 0u;
    // nop
      if (branch_taken) {
          goto L_08962F4C;
      }
      goto L_08962F48;
    }
L_08962F48:
    ctx.set_gpr(17, 0u + static_cast<std::uint32_t>(1));
    goto L_08962F4C;
L_08962F4C:
    ctx.set_gpr(4, ctx.gpr[21] + 0u);
    ctx.set_gpr(25, rt.memory().aot_load32(ctx.gpr[21] + static_cast<std::uint32_t>(0)));
    ctx.set_gpr(25, rt.memory().aot_load32(ctx.gpr[25] + static_cast<std::uint32_t>(288)));
    jump_target = ctx.gpr[25];
    ctx.set_gpr(31, 0x08962F60u);
    // nop
    ctx.pc = jump_target;
    if (rt.invoke_chained_call(ctx, &aot_mem) && ctx.pc == 0x08962F60u) goto L_08962F60;
    return;
L_08962F60:
    ctx.set_gpr(2, ctx.gpr[17] + 0u);
    goto L_08962F64;
L_08962F64:
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
L_08962F8C:
    ctx.set_gpr(29, ctx.gpr[29] + static_cast<std::uint32_t>(-32));
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(28), ctx.gpr[31]);
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(24), ctx.gpr[21]);
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(20), ctx.gpr[20]);
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(16), ctx.gpr[19]);
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(12), ctx.gpr[18]);
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(8), ctx.gpr[17]);
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(4), ctx.gpr[16]);
    ctx.set_gpr(21, ctx.gpr[4] + 0u);
    ctx.set_gpr(20, ctx.gpr[7] + 0u);
    ctx.set_gpr(19, ctx.gpr[8] + 0u);
    ctx.set_gpr(18, ctx.gpr[9] + 0u);
    ctx.set_gpr(16, 0u + 0u);
    ctx.set_gpr(4, rt.memory().aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(128)));
    ctx.set_gpr(2, ctx.gpr[6] < ctx.gpr[4] ? 1u : 0u);
    { const bool branch_taken = ctx.gpr[2] != 0u;
    // nop
      if (branch_taken) {
          goto L_08962FE0;
      }
      goto L_08962FD0;
    }
L_08962FD0:
    ctx.set_gpr(3, rt.memory().aot_load32(ctx.gpr[21] + static_cast<std::uint32_t>(132)));
    ctx.set_gpr(1, ctx.gpr[3] < ctx.gpr[6] ? 1u : 0u);
    { const bool branch_taken = ctx.gpr[1] == 0u;
    // nop
      if (branch_taken) {
          goto L_08962FEC;
      }
      goto L_08962FE0;
    }
L_08962FE0:
    ctx.set_gpr(2, 0u + static_cast<std::uint32_t>(1));
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_08963204;
      }
      goto L_08962FEC;
    }
L_08962FEC:
    ctx.set_gpr(2, ctx.gpr[20] < ctx.gpr[4] ? 1u : 0u);
    { const bool branch_taken = ctx.gpr[2] != 0u;
    // nop
      if (branch_taken) {
          goto L_08963004;
      }
      goto L_08962FF8;
    }
L_08962FF8:
    ctx.set_gpr(1, ctx.gpr[3] < ctx.gpr[20] ? 1u : 0u);
    { const bool branch_taken = ctx.gpr[1] == 0u;
    // nop
      if (branch_taken) {
          goto L_08963010;
      }
      goto L_08963004;
    }
L_08963004:
    ctx.set_gpr(2, 0u + static_cast<std::uint32_t>(1));
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_08963204;
      }
      goto L_08963010;
    }
L_08963010:
    ctx.set_gpr(1, ctx.gpr[20] < ctx.gpr[6] ? 1u : 0u);
    { const bool branch_taken = ctx.gpr[1] == 0u;
    // nop
      if (branch_taken) {
          goto L_08963028;
      }
      goto L_0896301C;
    }
L_0896301C:
    ctx.set_gpr(2, 0u + static_cast<std::uint32_t>(1));
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_08963204;
      }
      goto L_08963028;
    }
L_08963028:
    ctx.set_gpr(2, rt.memory().aot_load8(ctx.gpr[6] + static_cast<std::uint32_t>(0)));
    ctx.set_gpr(2, ctx.gpr[2] & 1u);
    { const bool branch_taken = ctx.gpr[2] != 0u;
    // nop
      if (branch_taken) {
          goto L_089631D8;
      }
      goto L_08963038;
    }
L_08963038:
    ctx.set_gpr(2, 0u + static_cast<std::uint32_t>(1));
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_08963204;
      }
      goto L_08963044;
    }
L_08963044:
    ctx.set_gpr(2, rt.memory().aot_load32(ctx.gpr[6] + static_cast<std::uint32_t>(0)));
    ctx.set_gpr(2, ctx.gpr[2] << 11u);
    ctx.set_gpr(5, ctx.gpr[2] >> 16u);
    ctx.set_gpr(4, ctx.gpr[5] + 0u);
    ctx.set_gpr(2, rt.memory().aot_load8(ctx.gpr[6] + static_cast<std::uint32_t>(3)));
    ctx.set_gpr(2, ctx.gpr[2] << 24u);
    ctx.set_gpr(2, ctx.gpr[2] >> 31u);
    ctx.set_gpr(3, ctx.gpr[2] & 255u);
    ctx.set_gpr(2, 0u + static_cast<std::uint32_t>(1));
    { const bool branch_taken = ctx.gpr[3] != ctx.gpr[2];
    // nop
      if (branch_taken) {
          goto L_08963080;
      }
      goto L_08963070;
    }
L_08963070:
    ctx.set_gpr(2, rt.memory().aot_load16(ctx.gpr[6] + static_cast<std::uint32_t>(8)));
    ctx.set_gpr(2, ctx.gpr[2] & 32767u);
    ctx.set_gpr(2, ctx.gpr[2] << 16u);
    ctx.set_gpr(4, ctx.gpr[5] + ctx.gpr[2]);
    goto L_08963080;
L_08963080:
    ctx.set_gpr(4, ctx.gpr[4] + static_cast<std::uint32_t>(3));
    ctx.set_gpr(2, 0u + static_cast<std::uint32_t>(-4));
    ctx.set_gpr(4, ctx.gpr[4] & ctx.gpr[2]);
    ctx.set_gpr(2, rt.memory().aot_load8(ctx.gpr[6] + static_cast<std::uint32_t>(0)));
    ctx.set_gpr(2, ctx.gpr[2] << 27u);
    ctx.set_gpr(2, ctx.gpr[2] >> 28u);
    ctx.set_gpr(2, ctx.gpr[2] + static_cast<std::uint32_t>(1));
    ctx.set_gpr(2, ctx.gpr[2] << 2u);
    ctx.set_gpr(4, ctx.gpr[4] + ctx.gpr[2]);
    ctx.set_gpr(17, ctx.gpr[6] + ctx.gpr[4]);
    ctx.set_gpr(2, rt.memory().aot_load32(ctx.gpr[21] + static_cast<std::uint32_t>(216)));
    ctx.set_gpr(1, ctx.gpr[4] < ctx.gpr[2] ? 1u : 0u);
    { const bool branch_taken = ctx.gpr[1] == 0u;
    // nop
      if (branch_taken) {
          goto L_08963144;
      }
      goto L_089630B8;
    }
L_089630B8:
    ctx.set_gpr(3, ctx.gpr[20] - ctx.gpr[6]);
    ctx.set_gpr(1, static_cast<std::int32_t>(ctx.gpr[2]) < static_cast<std::int32_t>(ctx.gpr[3]) ? 1u : 0u);
    { const bool branch_taken = ctx.gpr[1] != 0u;
    // nop
      if (branch_taken) {
          goto L_089630D4;
      }
      goto L_089630C8;
    }
L_089630C8:
    ctx.set_gpr(16, 0u + static_cast<std::uint32_t>(1));
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_089631E4;
      }
      goto L_089630D4;
    }
L_089630D4:
    ctx.set_gpr(3, rt.memory().aot_load8(ctx.gpr[17] + static_cast<std::uint32_t>(3)));
    ctx.set_gpr(3, ctx.gpr[3] << 24u);
    ctx.set_gpr(3, ctx.gpr[3] >> 31u);
    { const bool branch_taken = ctx.gpr[3] != 0u;
    // nop
      if (branch_taken) {
          goto L_089630FC;
      }
      goto L_089630E8;
    }
L_089630E8:
    ctx.set_gpr(3, rt.memory().aot_load32(ctx.gpr[17] + static_cast<std::uint32_t>(0)));
    ctx.set_gpr(3, ctx.gpr[3] << 11u);
    ctx.set_gpr(3, ctx.gpr[3] >> 16u);
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_08963118;
      }
      goto L_089630FC;
    }
L_089630FC:
    ctx.set_gpr(3, rt.memory().aot_load16(ctx.gpr[17] + static_cast<std::uint32_t>(8)));
    ctx.set_gpr(3, ctx.gpr[3] & 32767u);
    ctx.set_gpr(4, ctx.gpr[3] << 16u);
    ctx.set_gpr(3, rt.memory().aot_load32(ctx.gpr[17] + static_cast<std::uint32_t>(0)));
    ctx.set_gpr(3, ctx.gpr[3] << 11u);
    ctx.set_gpr(3, ctx.gpr[3] >> 16u);
    ctx.set_gpr(3, ctx.gpr[3] + ctx.gpr[4]);
    goto L_08963118;
L_08963118:
    ctx.set_gpr(1, ctx.gpr[3] < ctx.gpr[2] ? 1u : 0u);
    { const bool branch_taken = ctx.gpr[1] == 0u;
    // nop
      if (branch_taken) {
          goto L_089631F4;
      }
      goto L_08963124;
    }
L_08963124:
    ctx.set_gpr(3, ctx.gpr[20] - ctx.gpr[17]);
    ctx.set_gpr(2, ctx.gpr[2] << 1u);
    ctx.set_gpr(1, static_cast<std::int32_t>(ctx.gpr[2]) < static_cast<std::int32_t>(ctx.gpr[3]) ? 1u : 0u);
    { const bool branch_taken = ctx.gpr[1] != 0u;
    // nop
      if (branch_taken) {
          goto L_089631F4;
      }
      goto L_08963138;
    }
L_08963138:
    ctx.set_gpr(16, 0u + static_cast<std::uint32_t>(1));
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_089631E4;
      }
      goto L_08963144;
    }
L_08963144:
    ctx.set_gpr(1, ctx.gpr[20] < ctx.gpr[17] ? 1u : 0u);
    { const bool branch_taken = ctx.gpr[1] != 0u;
    // nop
      if (branch_taken) {
          goto L_089631F4;
      }
      goto L_08963150;
    }
L_08963150:
    ctx.set_gpr(2, ctx.gpr[17] < ctx.gpr[6] ? 1u : 0u);
    { const bool branch_taken = ctx.gpr[2] != 0u;
    // nop
      if (branch_taken) {
          goto L_089631F4;
      }
      goto L_0896315C;
    }
L_0896315C:
    { const bool branch_taken = ctx.gpr[17] == ctx.gpr[20];
    // nop
      if (branch_taken) {
          goto L_089631D4;
      }
      goto L_08963164;
    }
L_08963164:
    { const bool branch_taken = ctx.gpr[3] != 0u;
    // nop
      if (branch_taken) {
          goto L_08963178;
      }
      goto L_0896316C;
    }
L_0896316C:
    ctx.set_gpr(2, 0u + static_cast<std::uint32_t>(4));
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_0896317C;
      }
      goto L_08963178;
    }
L_08963178:
    ctx.set_gpr(2, 0u + static_cast<std::uint32_t>(12));
    goto L_0896317C;
L_0896317C:
    ctx.set_gpr(4, ctx.gpr[6] + ctx.gpr[2]);
    ctx.set_gpr(2, rt.memory().aot_load8(ctx.gpr[17] + static_cast<std::uint32_t>(0)));
    ctx.set_gpr(2, ctx.gpr[2] & 1u);
    ctx.set_gpr(2, 0u < ctx.gpr[2] ? 1u : 0u);
    ctx.set_gpr(7, ctx.gpr[2] & 255u);
    { const bool branch_taken = ctx.gpr[3] != 0u;
    // nop
      if (branch_taken) {
          goto L_089631A0;
      }
      goto L_08963198;
    }
L_08963198:
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_089631B0;
      }
      goto L_089631A0;
    }
L_089631A0:
    ctx.set_gpr(2, rt.memory().aot_load16(ctx.gpr[6] + static_cast<std::uint32_t>(8)));
    ctx.set_gpr(2, ctx.gpr[2] & 32767u);
    ctx.set_gpr(2, ctx.gpr[2] << 16u);
    ctx.set_gpr(5, ctx.gpr[5] + ctx.gpr[2]);
    goto L_089631B0;
L_089631B0:
    ctx.set_gpr(6, ctx.gpr[7] + 0u);
    ctx.set_gpr(7, ctx.gpr[18] + 0u);
    jump_target = ctx.gpr[19];
    ctx.set_gpr(31, 0x089631C0u);
    // nop
    ctx.pc = jump_target;
    if (rt.invoke_chained_call(ctx, &aot_mem) && ctx.pc == 0x089631C0u) goto L_089631C0;
    return;
L_089631C0:
    { const bool branch_taken = ctx.gpr[2] == 0u;
    // nop
      if (branch_taken) {
          goto L_089631D4;
      }
      goto L_089631C8;
    }
L_089631C8:
    ctx.set_gpr(2, 0u + static_cast<std::uint32_t>(1));
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_08963204;
      }
      goto L_089631D4;
    }
L_089631D4:
    ctx.set_gpr(6, ctx.gpr[17] + 0u);
    goto L_089631D8;
L_089631D8:
    ctx.set_gpr(2, ctx.gpr[6] < ctx.gpr[20] ? 1u : 0u);
    { const bool branch_taken = ctx.gpr[2] != 0u;
    // nop
      if (branch_taken) {
          goto L_08963044;
      }
      goto L_089631E4;
    }
L_089631E4:
    { const bool branch_taken = ctx.gpr[6] == ctx.gpr[20];
    // nop
      if (branch_taken) {
          goto L_08963200;
      }
      goto L_089631EC;
    }
L_089631EC:
    { const bool branch_taken = ctx.gpr[16] != 0u;
    // nop
      if (branch_taken) {
          goto L_08963200;
      }
      goto L_089631F4;
    }
L_089631F4:
    ctx.set_gpr(2, 0u + static_cast<std::uint32_t>(1));
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_08963204;
      }
      goto L_08963200;
    }
L_08963200:
    ctx.set_gpr(2, 0u + 0u);
    goto L_08963204;
L_08963204:
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
L_0896322C:
    ctx.set_gpr(29, ctx.gpr[29] + static_cast<std::uint32_t>(-16));
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(12), ctx.gpr[31]);
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(8), ctx.gpr[16]);
    ctx.set_gpr(16, ctx.gpr[4] + 0u);
    ctx.set_gpr(31, 0x08963244u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0089_entry, 89u, 473u, 0x0896B574u>(ctx, &aot_mem) && ctx.pc == 0x08963244u) goto L_08963244;
    return;
L_08963244:
    ctx.set_gpr(4, ctx.gpr[16] + 0u);
    ctx.set_gpr(5, 2198u << 16u);
    ctx.set_gpr(5, ctx.gpr[5] + static_cast<std::uint32_t>(12940));
    ctx.set_gpr(6, 0u + 0u);
    ctx.set_gpr(25, rt.memory().aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(0)));
    ctx.set_gpr(25, rt.memory().aot_load32(ctx.gpr[25] + static_cast<std::uint32_t>(444)));
    jump_target = ctx.gpr[25];
    ctx.set_gpr(31, 0x08963264u);
    // nop
    ctx.pc = jump_target;
    if (rt.invoke_chained_call(ctx, &aot_mem) && ctx.pc == 0x08963264u) goto L_08963264;
    return;
L_08963264:
    ctx.set_gpr(4, ctx.gpr[28] + static_cast<std::uint32_t>(-32720));
    ctx.set_gpr(31, 0x08963270u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0081_entry, 81u, 869u, 0x0894BF18u>(ctx, &aot_mem) && ctx.pc == 0x08963270u) goto L_08963270;
    return;
L_08963270:
    ctx.set_gpr(31, 0x08963278u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0082_entry, 82u, 28u, 0x0894C1E0u>(ctx, &aot_mem) && ctx.pc == 0x08963278u) goto L_08963278;
    return;
L_08963278:
    ctx.set_gpr(31, rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(12)));
    ctx.set_gpr(16, rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(8)));
    ctx.set_gpr(29, ctx.gpr[29] + static_cast<std::uint32_t>(16));
    jump_target = ctx.gpr[31];
    // nop
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_0896328C:
    ctx.set_gpr(29, ctx.gpr[29] + static_cast<std::uint32_t>(-16));
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(12), ctx.gpr[31]);
    ctx.set_gpr(3, ctx.gpr[4] + 0u);
    ctx.set_gpr(2, ctx.gpr[5] + 0u);
    { const bool branch_taken = ctx.gpr[6] == 0u;
    // nop
      if (branch_taken) {
          goto L_089632C4;
      }
      goto L_089632A4;
    }
L_089632A4:
    ctx.set_gpr(4, 2228u << 16u);
    ctx.set_gpr(4, ctx.gpr[4] + static_cast<std::uint32_t>(1104));
    ctx.set_gpr(5, ctx.gpr[3] + 0u);
    ctx.set_gpr(6, ctx.gpr[2] + 0u);
    ctx.set_gpr(31, 0x089632BCu);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0081_entry, 81u, 869u, 0x0894BF18u>(ctx, &aot_mem) && ctx.pc == 0x089632BCu) goto L_089632BC;
    return;
L_089632BC:
    ctx.set_gpr(31, 0x089632C4u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0082_entry, 82u, 28u, 0x0894C1E0u>(ctx, &aot_mem) && ctx.pc == 0x089632C4u) goto L_089632C4;
    return;
L_089632C4:
    ctx.set_gpr(2, 0u + 0u);
    ctx.set_gpr(31, rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(12)));
    ctx.set_gpr(29, ctx.gpr[29] + static_cast<std::uint32_t>(16));
    jump_target = ctx.gpr[31];
    // nop
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_089632D8:
    ctx.set_gpr(29, ctx.gpr[29] + static_cast<std::uint32_t>(-32));
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(12), ctx.gpr[31]);
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(8), ctx.gpr[16]);
    ctx.set_gpr(16, ctx.gpr[4] + 0u);
    ctx.set_gpr(4, ctx.gpr[29] + static_cast<std::uint32_t>(24));
    ctx.set_gpr(5, 0u + 0u);
    ctx.set_gpr(6, 0u + static_cast<std::uint32_t>(8));
    ctx.set_gpr(31, 0x089632FCu);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0003_entry, 3u, 719u, 0x08812EE8u>(ctx, &aot_mem) && ctx.pc == 0x089632FCu) goto L_089632FC;
    return;
L_089632FC:
    ctx.set_gpr(4, ctx.gpr[16] + 0u);
    ctx.set_gpr(5, 2198u << 16u);
    ctx.set_gpr(5, ctx.gpr[5] + static_cast<std::uint32_t>(13140));
    ctx.set_gpr(6, ctx.gpr[29] + static_cast<std::uint32_t>(24));
    ctx.set_gpr(25, rt.memory().aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(0)));
    ctx.set_gpr(25, rt.memory().aot_load32(ctx.gpr[25] + static_cast<std::uint32_t>(444)));
    jump_target = ctx.gpr[25];
    ctx.set_gpr(31, 0x0896331Cu);
    // nop
    ctx.pc = jump_target;
    if (rt.invoke_chained_call(ctx, &aot_mem) && ctx.pc == 0x0896331Cu) goto L_0896331C;
    return;
L_0896331C:
    ctx.set_gpr(7, rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(28)));
    ctx.set_gpr(6, rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(24)));
    ctx.set_gpr(5, ctx.gpr[6] + ctx.gpr[7]);
    ctx.set_gpr(4, 2228u << 16u);
    ctx.set_gpr(4, ctx.gpr[4] + static_cast<std::uint32_t>(1152));
    ctx.set_gpr(31, 0x08963338u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0081_entry, 81u, 869u, 0x0894BF18u>(ctx, &aot_mem) && ctx.pc == 0x08963338u) goto L_08963338;
    return;
L_08963338:
    ctx.set_gpr(31, 0x08963340u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0082_entry, 82u, 28u, 0x0894C1E0u>(ctx, &aot_mem) && ctx.pc == 0x08963340u) goto L_08963340;
    return;
L_08963340:
    ctx.set_gpr(31, rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(12)));
    ctx.set_gpr(16, rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(8)));
    ctx.set_gpr(29, ctx.gpr[29] + static_cast<std::uint32_t>(32));
    jump_target = ctx.gpr[31];
    // nop
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_08963354:
    ctx.set_gpr(29, ctx.gpr[29] + static_cast<std::uint32_t>(-16));
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(12), ctx.gpr[31]);
    ctx.set_gpr(8, ctx.gpr[4] + 0u);
    ctx.set_gpr(3, ctx.gpr[5] + 0u);
    { const bool branch_taken = ctx.gpr[6] == 0u;
    // nop
      if (branch_taken) {
          goto L_08963388;
      }
      goto L_0896336C;
    }
L_0896336C:
    ctx.set_gpr(2, rt.memory().aot_load32(ctx.gpr[7] + static_cast<std::uint32_t>(0)));
    ctx.set_gpr(2, ctx.gpr[2] + static_cast<std::uint32_t>(1));
    rt.memory().aot_store32(ctx.gpr[7] + static_cast<std::uint32_t>(0), ctx.gpr[2]);
    ctx.set_gpr(5, 2228u << 16u);
    ctx.set_gpr(5, ctx.gpr[5] + static_cast<std::uint32_t>(-7548));
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_0896339C;
      }
      goto L_08963388;
    }
L_08963388:
    ctx.set_gpr(2, rt.memory().aot_load32(ctx.gpr[7] + static_cast<std::uint32_t>(4)));
    ctx.set_gpr(2, ctx.gpr[2] + static_cast<std::uint32_t>(1));
    rt.memory().aot_store32(ctx.gpr[7] + static_cast<std::uint32_t>(4), ctx.gpr[2]);
    ctx.set_gpr(5, 2228u << 16u);
    ctx.set_gpr(5, ctx.gpr[5] + static_cast<std::uint32_t>(-7540));
    goto L_0896339C;
L_0896339C:
    ctx.set_gpr(4, 2228u << 16u);
    ctx.set_gpr(4, ctx.gpr[4] + static_cast<std::uint32_t>(1204));
    ctx.set_gpr(6, ctx.gpr[8] + 0u);
    ctx.set_gpr(7, ctx.gpr[3] + 0u);
    ctx.set_gpr(31, 0x089633B4u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0081_entry, 81u, 869u, 0x0894BF18u>(ctx, &aot_mem) && ctx.pc == 0x089633B4u) goto L_089633B4;
    return;
L_089633B4:
    ctx.set_gpr(31, 0x089633BCu);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0082_entry, 82u, 28u, 0x0894C1E0u>(ctx, &aot_mem) && ctx.pc == 0x089633BCu) goto L_089633BC;
    return;
L_089633BC:
    ctx.set_gpr(2, 0u + 0u);
    ctx.set_gpr(31, rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(12)));
    ctx.set_gpr(29, ctx.gpr[29] + static_cast<std::uint32_t>(16));
    jump_target = ctx.gpr[31];
    // nop
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_089633D0:
    ctx.set_gpr(29, ctx.gpr[29] + static_cast<std::uint32_t>(-16));
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(12), ctx.gpr[31]);
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(8), ctx.gpr[17]);
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(4), ctx.gpr[16]);
    ctx.set_gpr(17, ctx.gpr[4] + 0u);
    ctx.set_gpr(31, 0x089633ECu);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0074_entry, 74u, 861u, 0x0892F91Cu>(ctx, &aot_mem) && ctx.pc == 0x089633ECu) goto L_089633EC;
    return;
L_089633EC:
    ctx.set_gpr(4, ctx.gpr[17] + 0u);
    ctx.set_gpr(25, rt.memory().aot_load32(ctx.gpr[17] + static_cast<std::uint32_t>(0)));
    ctx.set_gpr(25, rt.memory().aot_load32(ctx.gpr[25] + static_cast<std::uint32_t>(352)));
    jump_target = ctx.gpr[25];
    ctx.set_gpr(31, 0x08963400u);
    // nop
    ctx.pc = jump_target;
    if (rt.invoke_chained_call(ctx, &aot_mem) && ctx.pc == 0x08963400u) goto L_08963400;
    return;
L_08963400:
    ctx.set_gpr(16, ctx.gpr[2] + 0u);
    ctx.set_gpr(4, ctx.gpr[17] + 0u);
    ctx.set_gpr(25, rt.memory().aot_load32(ctx.gpr[17] + static_cast<std::uint32_t>(0)));
    ctx.set_gpr(25, rt.memory().aot_load32(ctx.gpr[25] + static_cast<std::uint32_t>(356)));
    jump_target = ctx.gpr[25];
    ctx.set_gpr(31, 0x08963418u);
    // nop
    ctx.pc = jump_target;
    if (rt.invoke_chained_call(ctx, &aot_mem) && ctx.pc == 0x08963418u) goto L_08963418;
    return;
L_08963418:
    ctx.set_gpr(4, 2228u << 16u);
    ctx.set_gpr(4, ctx.gpr[4] + static_cast<std::uint32_t>(1232));
    ctx.set_gpr(5, ctx.gpr[16] + 0u);
    ctx.set_gpr(6, ctx.gpr[2] + 0u);
    ctx.set_gpr(31, 0x08963430u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0081_entry, 81u, 869u, 0x0894BF18u>(ctx, &aot_mem) && ctx.pc == 0x08963430u) goto L_08963430;
    return;
L_08963430:
    ctx.set_gpr(31, 0x08963438u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0082_entry, 82u, 28u, 0x0894C1E0u>(ctx, &aot_mem) && ctx.pc == 0x08963438u) goto L_08963438;
    return;
L_08963438:
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
L_08963450:
    ctx.set_gpr(29, ctx.gpr[29] + static_cast<std::uint32_t>(-176));
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(28), ctx.gpr[31]);
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(24), ctx.gpr[20]);
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(20), ctx.gpr[19]);
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(16), ctx.gpr[18]);
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(12), ctx.gpr[17]);
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(8), ctx.gpr[16]);
    ctx.set_gpr(20, ctx.gpr[4] + 0u);
    ctx.set_gpr(19, ctx.gpr[5] + 0u);
    ctx.set_gpr(16, rt.memory().aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(212)));
    ctx.set_gpr(31, 0x08963480u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0074_entry, 74u, 616u, 0x0892EADCu>(ctx, &aot_mem) && ctx.pc == 0x08963480u) goto L_08963480;
    return;
L_08963480:
    { const bool branch_taken = ctx.gpr[2] == 0u;
    // nop
      if (branch_taken) {
          goto L_089635D0;
      }
      goto L_08963488;
    }
L_08963488:
    ctx.set_gpr(3, rt.memory().aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(2028)));
    { const bool branch_taken = ctx.gpr[3] == 0u;
    // nop
      if (branch_taken) {
          goto L_089635D0;
      }
      goto L_08963494;
    }
L_08963494:
    ctx.set_gpr(18, 0u + 0u);
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_089635C0;
      }
      goto L_089634A0;
    }
L_089634A0:
    ctx.set_gpr(4, ctx.gpr[20] + 0u);
    ctx.set_gpr(25, rt.memory().aot_load32(ctx.gpr[20] + static_cast<std::uint32_t>(0)));
    ctx.set_gpr(25, rt.memory().aot_load32(ctx.gpr[25] + static_cast<std::uint32_t>(464)));
    jump_target = ctx.gpr[25];
    ctx.set_gpr(31, 0x089634B4u);
    // nop
    ctx.pc = jump_target;
    if (rt.invoke_chained_call(ctx, &aot_mem) && ctx.pc == 0x089634B4u) goto L_089634B4;
    return;
L_089634B4:
    ctx.set_gpr(17, ctx.gpr[2] + 0u);
    ctx.set_gpr(4, ctx.gpr[20] + 0u);
    ctx.set_gpr(25, rt.memory().aot_load32(ctx.gpr[20] + static_cast<std::uint32_t>(0)));
    ctx.set_gpr(25, rt.memory().aot_load32(ctx.gpr[25] + static_cast<std::uint32_t>(320)));
    jump_target = ctx.gpr[25];
    ctx.set_gpr(31, 0x089634CCu);
    // nop
    ctx.pc = jump_target;
    if (rt.invoke_chained_call(ctx, &aot_mem) && ctx.pc == 0x089634CCu) goto L_089634CC;
    return;
L_089634CC:
    ctx.set_gpr(3, static_cast<std::uint32_t>(static_cast<std::int32_t>(ctx.gpr[18]) >> 1u));
    { const bool branch_taken = static_cast<std::int32_t>(ctx.gpr[18]) >= 0;
    // nop
      if (branch_taken) {
          goto L_089634E0;
      }
      goto L_089634D8;
    }
L_089634D8:
    ctx.set_gpr(3, ctx.gpr[18] + static_cast<std::uint32_t>(1));
    ctx.set_gpr(3, static_cast<std::uint32_t>(static_cast<std::int32_t>(ctx.gpr[3]) >> 1u));
    goto L_089634E0;
L_089634E0:
    ctx.set_gpr(6, ctx.gpr[3] + static_cast<std::uint32_t>(1));
    ctx.set_gpr(3, rt.memory().aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(2028)));
    ctx.set_gpr(7, static_cast<std::uint32_t>(static_cast<std::int32_t>(ctx.gpr[3]) >> 1u));
    { const bool branch_taken = static_cast<std::int32_t>(ctx.gpr[3]) >= 0;
    // nop
      if (branch_taken) {
          goto L_089634FC;
      }
      goto L_089634F4;
    }
L_089634F4:
    ctx.set_gpr(3, ctx.gpr[3] + static_cast<std::uint32_t>(1));
    ctx.set_gpr(7, static_cast<std::uint32_t>(static_cast<std::int32_t>(ctx.gpr[3]) >> 1u));
    goto L_089634FC;
L_089634FC:
    ctx.set_gpr(4, ctx.gpr[29] + static_cast<std::uint32_t>(44));
    ctx.set_gpr(5, 2228u << 16u);
    ctx.set_gpr(5, ctx.gpr[5] + static_cast<std::uint32_t>(1324));
    ctx.set_gpr(8, ctx.gpr[2] + 0u);
    ctx.set_gpr(31, 0x08963514u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0004_entry, 4u, 423u, 0x08815FF4u>(ctx, &aot_mem) && ctx.pc == 0x08963514u) goto L_08963514;
    return;
L_08963514:
    ctx.set_gpr(4, 0u + static_cast<std::uint32_t>(168));
    ctx.set_gpr(31, 0x08963520u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0094_entry, 94u, 75u, 0x0897C4D8u>(ctx, &aot_mem) && ctx.pc == 0x08963520u) goto L_08963520;
    return;
L_08963520:
    { const bool branch_taken = ctx.gpr[2] == 0u;
    // nop
      if (branch_taken) {
          goto L_08963534;
      }
      goto L_08963528;
    }
L_08963528:
    ctx.set_gpr(4, ctx.gpr[2] + 0u);
    ctx.set_gpr(31, 0x08963534u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0094_entry, 94u, 65u, 0x0897C3ECu>(ctx, &aot_mem) && ctx.pc == 0x08963534u) goto L_08963534;
    return;
L_08963534:
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(172), ctx.gpr[2]);
    ctx.set_gpr(4, ctx.gpr[18] << 2u);
    ctx.set_gpr(3, rt.memory().aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(2020)));
    ctx.set_gpr(3, ctx.gpr[3] + ctx.gpr[4]);
    ctx.set_gpr(3, rt.memory().aot_load32(ctx.gpr[3] + static_cast<std::uint32_t>(0)));
    rt.memory().aot_store32(ctx.gpr[2] + static_cast<std::uint32_t>(0), ctx.gpr[3]);
    ctx.set_gpr(2, rt.memory().aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(2020)));
    ctx.set_gpr(2, ctx.gpr[4] + ctx.gpr[2]);
    ctx.set_gpr(3, rt.memory().aot_load32(ctx.gpr[2] + static_cast<std::uint32_t>(4)));
    ctx.set_gpr(2, rt.memory().aot_load32(ctx.gpr[2] + static_cast<std::uint32_t>(0)));
    ctx.set_gpr(3, ctx.gpr[3] - ctx.gpr[2]);
    ctx.set_gpr(2, rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(172)));
    rt.memory().aot_store32(ctx.gpr[2] + static_cast<std::uint32_t>(4), ctx.gpr[3]);
    ctx.set_gpr(4, rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(172)));
    ctx.set_gpr(5, ctx.gpr[29] + static_cast<std::uint32_t>(44));
    ctx.set_gpr(31, 0x08963578u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0094_entry, 94u, 71u, 0x0897C468u>(ctx, &aot_mem) && ctx.pc == 0x08963578u) goto L_08963578;
    return;
L_08963578:
    ctx.set_gpr(4, rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(172)));
    ctx.set_gpr(5, ctx.gpr[17] + 0u);
    ctx.set_gpr(31, 0x08963588u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0094_entry, 94u, 73u, 0x0897C4A0u>(ctx, &aot_mem) && ctx.pc == 0x08963588u) goto L_08963588;
    return;
L_08963588:
    ctx.set_gpr(4, ctx.gpr[19] + 0u);
    ctx.set_gpr(5, ctx.gpr[29] + static_cast<std::uint32_t>(172));
    ctx.set_gpr(6, 2200u << 16u);
    ctx.set_gpr(6, ctx.gpr[6] + static_cast<std::uint32_t>(-14984));
    ctx.set_gpr(7, 0u + 0u);
    ctx.set_gpr(31, 0x089635A4u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0067_entry, 67u, 28u, 0x08910268u>(ctx, &aot_mem) && ctx.pc == 0x089635A4u) goto L_089635A4;
    return;
L_089635A4:
    ctx.set_gpr(4, ctx.gpr[19] + 0u);
    ctx.set_gpr(5, ctx.gpr[2] + 0u);
    ctx.set_gpr(6, 0u + static_cast<std::uint32_t>(1));
    ctx.set_gpr(7, ctx.gpr[29] + static_cast<std::uint32_t>(172));
    ctx.set_gpr(31, 0x089635BCu);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0066_entry, 66u, 837u, 0x0890FF10u>(ctx, &aot_mem) && ctx.pc == 0x089635BCu) goto L_089635BC;
    return;
L_089635BC:
    ctx.set_gpr(18, ctx.gpr[18] + static_cast<std::uint32_t>(2));
    goto L_089635C0;
L_089635C0:
    ctx.set_gpr(3, rt.memory().aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(2028)));
    ctx.set_gpr(3, static_cast<std::int32_t>(ctx.gpr[18]) < static_cast<std::int32_t>(ctx.gpr[3]) ? 1u : 0u);
    { const bool branch_taken = ctx.gpr[3] != 0u;
    // nop
      if (branch_taken) {
          goto L_089634A0;
      }
      goto L_089635D0;
    }
L_089635D0:
    ctx.set_gpr(31, rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(28)));
    ctx.set_gpr(20, rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(24)));
    ctx.set_gpr(19, rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(20)));
    ctx.set_gpr(18, rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(16)));
    ctx.set_gpr(17, rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(12)));
    ctx.set_gpr(16, rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(8)));
    ctx.set_gpr(29, ctx.gpr[29] + static_cast<std::uint32_t>(176));
    jump_target = ctx.gpr[31];
    // nop
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_089635F4:
    ctx.set_gpr(29, ctx.gpr[29] + static_cast<std::uint32_t>(-16));
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(12), ctx.gpr[31]);
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(8), ctx.gpr[17]);
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(4), ctx.gpr[16]);
    ctx.set_gpr(17, ctx.gpr[4] + 0u);
    ctx.set_gpr(25, rt.memory().aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(0)));
    ctx.set_gpr(25, rt.memory().aot_load32(ctx.gpr[25] + static_cast<std::uint32_t>(280)));
    jump_target = ctx.gpr[25];
    ctx.set_gpr(31, 0x08963618u);
    // nop
    ctx.pc = jump_target;
    if (rt.invoke_chained_call(ctx, &aot_mem) && ctx.pc == 0x08963618u) goto L_08963618;
    return;
L_08963618:
    ctx.set_gpr(4, ctx.gpr[17] + 0u);
    ctx.set_gpr(25, rt.memory().aot_load32(ctx.gpr[17] + static_cast<std::uint32_t>(0)));
    ctx.set_gpr(25, rt.memory().aot_load32(ctx.gpr[25] + static_cast<std::uint32_t>(516)));
    jump_target = ctx.gpr[25];
    ctx.set_gpr(31, 0x0896362Cu);
    // nop
    ctx.pc = jump_target;
    if (rt.invoke_chained_call(ctx, &aot_mem) && ctx.pc == 0x0896362Cu) goto L_0896362C;
    return;
L_0896362C:
    ctx.set_gpr(16, ctx.gpr[2] + 0u);
    ctx.set_gpr(4, ctx.gpr[17] + 0u);
    ctx.set_gpr(25, rt.memory().aot_load32(ctx.gpr[17] + static_cast<std::uint32_t>(0)));
    ctx.set_gpr(25, rt.memory().aot_load32(ctx.gpr[25] + static_cast<std::uint32_t>(288)));
    jump_target = ctx.gpr[25];
    ctx.set_gpr(31, 0x08963644u);
    // nop
    ctx.pc = jump_target;
    if (rt.invoke_chained_call(ctx, &aot_mem) && ctx.pc == 0x08963644u) goto L_08963644;
    return;
L_08963644:
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
L_08963660:
    ctx.set_gpr(29, ctx.gpr[29] + static_cast<std::uint32_t>(-16));
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(12), ctx.gpr[31]);
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(8), ctx.gpr[17]);
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(4), ctx.gpr[16]);
    ctx.set_gpr(17, ctx.gpr[4] + 0u);
    ctx.set_gpr(16, 0u + 0u);
    ctx.set_gpr(2, rt.memory().aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(132)));
    { const bool branch_taken = ctx.gpr[2] != 0u;
    // nop
      if (branch_taken) {
          goto L_08963690;
      }
      goto L_08963684;
    }
L_08963684:
    ctx.set_gpr(2, 0u + 0u);
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_089636CC;
      }
      goto L_08963690;
    }
L_08963690:
    ctx.set_gpr(31, 0x08963698u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0075_entry, 75u, 306u, 0x08932258u>(ctx, &aot_mem) && ctx.pc == 0x08963698u) goto L_08963698;
    return;
L_08963698:
    { const bool branch_taken = ctx.gpr[2] == 0u;
    // nop
      if (branch_taken) {
          goto L_089636A4;
      }
      goto L_089636A0;
    }
L_089636A0:
    ctx.set_gpr(16, 0u + static_cast<std::uint32_t>(1));
    goto L_089636A4;
L_089636A4:
    ctx.set_gpr(4, ctx.gpr[17] + 0u);
    ctx.set_gpr(31, 0x089636B0u);
    // nop
    goto L_089636E4;
L_089636B0:
    { const bool branch_taken = ctx.gpr[2] == 0u;
    // nop
      if (branch_taken) {
          goto L_089636BC;
      }
      goto L_089636B8;
    }
L_089636B8:
    ctx.set_gpr(16, 0u + static_cast<std::uint32_t>(1));
    goto L_089636BC;
L_089636BC:
    ctx.set_gpr(4, ctx.gpr[17] + 0u);
    ctx.set_gpr(31, 0x089636C8u);
    // nop
    goto L_08961BA4;
L_089636C8:
    ctx.set_gpr(2, ctx.gpr[16] + 0u);
    goto L_089636CC;
L_089636CC:
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
L_089636E4:
    ctx.set_gpr(29, ctx.gpr[29] + static_cast<std::uint32_t>(-32));
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(28), ctx.gpr[31]);
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(24), ctx.gpr[19]);
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(20), ctx.gpr[18]);
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(16), ctx.gpr[17]);
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(12), ctx.gpr[16]);
    ctx.set_gpr(19, ctx.gpr[4] + 0u);
    ctx.set_gpr(16, rt.memory().aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(212)));
    ctx.set_gpr(17, 0u + 0u);
    ctx.set_gpr(2, rt.memory().aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(2028)));
    { const bool branch_taken = ctx.gpr[2] != 0u;
    // nop
      if (branch_taken) {
          goto L_08963720;
      }
      goto L_08963714;
    }
L_08963714:
    ctx.set_gpr(2, 0u + 0u);
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_08963820;
      }
      goto L_08963720;
    }
L_08963720:
    ctx.set_gpr(2, rt.memory().aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(2020)));
    { const bool branch_taken = ctx.gpr[2] == 0u;
    // nop
      if (branch_taken) {
          goto L_08963738;
      }
      goto L_0896372C;
    }
L_0896372C:
    ctx.set_gpr(2, rt.memory().aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(2024)));
    { const bool branch_taken = ctx.gpr[2] != 0u;
    // nop
      if (branch_taken) {
          goto L_08963770;
      }
      goto L_08963738;
    }
L_08963738:
    ctx.set_gpr(2, rt.memory().aot_load32(ctx.gpr[19] + static_cast<std::uint32_t>(144)));
    { const bool branch_taken = static_cast<std::int32_t>(ctx.gpr[2]) <= 0;
    // nop
      if (branch_taken) {
          goto L_0896376C;
      }
      goto L_08963744;
    }
L_08963744:
    ctx.set_gpr(4, ctx.gpr[19] + 0u);
    ctx.set_gpr(5, 0u + 0u);
    ctx.set_gpr(25, rt.memory().aot_load32(ctx.gpr[19] + static_cast<std::uint32_t>(0)));
    ctx.set_gpr(25, rt.memory().aot_load32(ctx.gpr[25] + static_cast<std::uint32_t>(412)));
    jump_target = ctx.gpr[25];
    ctx.set_gpr(31, 0x0896375Cu);
    // nop
    ctx.pc = jump_target;
    if (rt.invoke_chained_call(ctx, &aot_mem) && ctx.pc == 0x0896375Cu) goto L_0896375C;
    return;
L_0896375C:
    ctx.set_gpr(4, 2228u << 16u);
    ctx.set_gpr(4, ctx.gpr[4] + static_cast<std::uint32_t>(1352));
    ctx.set_gpr(31, 0x0896376Cu);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0084_entry, 84u, 456u, 0x08955F2Cu>(ctx, &aot_mem) && ctx.pc == 0x0896376Cu) goto L_0896376C;
    return;
L_0896376C:
    ctx.set_gpr(17, 0u + static_cast<std::uint32_t>(1));
    goto L_08963770;
L_08963770:
    ctx.set_gpr(3, rt.memory().aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(2028)));
    { const bool branch_taken = static_cast<std::int32_t>(ctx.gpr[3]) < 0;
    // nop
      if (branch_taken) {
          goto L_08963794;
      }
      goto L_0896377C;
    }
L_0896377C:
    ctx.set_gpr(2, rt.memory().aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(2024)));
    { const bool branch_taken = static_cast<std::int32_t>(ctx.gpr[2]) < 0;
    // nop
      if (branch_taken) {
          goto L_08963794;
      }
      goto L_08963788;
    }
L_08963788:
    ctx.set_gpr(1, static_cast<std::int32_t>(ctx.gpr[2]) < static_cast<std::int32_t>(ctx.gpr[3]) ? 1u : 0u);
    { const bool branch_taken = ctx.gpr[1] == 0u;
    // nop
      if (branch_taken) {
          goto L_089637C0;
      }
      goto L_08963794;
    }
L_08963794:
    ctx.set_gpr(2, rt.memory().aot_load32(ctx.gpr[19] + static_cast<std::uint32_t>(144)));
    ctx.set_gpr(2, static_cast<std::int32_t>(ctx.gpr[2]) < 3 ? 1u : 0u);
    { const bool branch_taken = ctx.gpr[2] != 0u;
    // nop
      if (branch_taken) {
          goto L_089637B4;
      }
      goto L_089637A4;
    }
L_089637A4:
    ctx.set_gpr(4, 2228u << 16u);
    ctx.set_gpr(4, ctx.gpr[4] + static_cast<std::uint32_t>(1408));
    ctx.set_gpr(31, 0x089637B4u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0084_entry, 84u, 441u, 0x08955DC4u>(ctx, &aot_mem) && ctx.pc == 0x089637B4u) goto L_089637B4;
    return;
L_089637B4:
    ctx.set_gpr(2, 0u + static_cast<std::uint32_t>(1));
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_08963820;
      }
      goto L_089637C0;
    }
L_089637C0:
    ctx.set_gpr(18, 0u + 0u);
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_0896380C;
      }
      goto L_089637CC;
    }
L_089637CC:
    ctx.set_gpr(3, ctx.gpr[18] << 2u);
    ctx.set_gpr(2, rt.memory().aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(2020)));
    ctx.set_gpr(2, ctx.gpr[2] + ctx.gpr[3]);
    ctx.set_gpr(4, ctx.gpr[19] + 0u);
    ctx.set_gpr(5, ctx.gpr[18] + 0u);
    ctx.set_gpr(6, rt.memory().aot_load32(ctx.gpr[2] + static_cast<std::uint32_t>(0)));
    ctx.set_gpr(7, rt.memory().aot_load32(ctx.gpr[2] + static_cast<std::uint32_t>(4)));
    ctx.set_gpr(31, 0x089637F0u);
    // nop
    goto L_08963840;
L_089637F0:
    ctx.set_gpr(3, 0u + static_cast<std::uint32_t>(1));
    { const bool branch_taken = ctx.gpr[2] != ctx.gpr[3];
    // nop
      if (branch_taken) {
          goto L_08963808;
      }
      goto L_089637FC;
    }
L_089637FC:
    ctx.set_gpr(17, ctx.gpr[3] + 0u);
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_0896381C;
      }
      goto L_08963808;
    }
L_08963808:
    ctx.set_gpr(18, ctx.gpr[18] + static_cast<std::uint32_t>(2));
    goto L_0896380C;
L_0896380C:
    ctx.set_gpr(2, rt.memory().aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(2028)));
    ctx.set_gpr(2, static_cast<std::int32_t>(ctx.gpr[18]) < static_cast<std::int32_t>(ctx.gpr[2]) ? 1u : 0u);
    { const bool branch_taken = ctx.gpr[2] != 0u;
    // nop
      if (branch_taken) {
          goto L_089637CC;
      }
      goto L_0896381C;
    }
L_0896381C:
    ctx.set_gpr(2, ctx.gpr[17] + 0u);
    goto L_08963820;
L_08963820:
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
L_08963840:
    ctx.set_gpr(29, ctx.gpr[29] + static_cast<std::uint32_t>(-32));
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
    ctx.set_gpr(18, ctx.gpr[7] + 0u);
    ctx.set_gpr(17, 0u + 0u);
    ctx.set_gpr(16, 0u + 0u);
    ctx.set_gpr(2, 0u + 0u);
    ctx.set_gpr(6, rt.memory().aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(128)));
    ctx.set_gpr(3, ctx.gpr[19] < ctx.gpr[6] ? 1u : 0u);
    { const bool branch_taken = ctx.gpr[3] != 0u;
    // nop
      if (branch_taken) {
          goto L_0896389C;
      }
      goto L_0896388C;
    }
L_0896388C:
    ctx.set_gpr(5, rt.memory().aot_load32(ctx.gpr[21] + static_cast<std::uint32_t>(132)));
    ctx.set_gpr(1, ctx.gpr[5] < ctx.gpr[19] ? 1u : 0u);
    { const bool branch_taken = ctx.gpr[1] == 0u;
    // nop
      if (branch_taken) {
          goto L_089638EC;
      }
      goto L_0896389C;
    }
L_0896389C:
    ctx.set_gpr(2, rt.memory().aot_load32(ctx.gpr[21] + static_cast<std::uint32_t>(144)));
    { const bool branch_taken = static_cast<std::int32_t>(ctx.gpr[2]) <= 0;
    // nop
      if (branch_taken) {
          goto L_089638E0;
      }
      goto L_089638A8;
    }
L_089638A8:
    ctx.set_gpr(4, ctx.gpr[21] + 0u);
    ctx.set_gpr(5, 0u + 0u);
    ctx.set_gpr(25, rt.memory().aot_load32(ctx.gpr[21] + static_cast<std::uint32_t>(0)));
    ctx.set_gpr(25, rt.memory().aot_load32(ctx.gpr[25] + static_cast<std::uint32_t>(412)));
    jump_target = ctx.gpr[25];
    ctx.set_gpr(31, 0x089638C0u);
    // nop
    ctx.pc = jump_target;
    if (rt.invoke_chained_call(ctx, &aot_mem) && ctx.pc == 0x089638C0u) goto L_089638C0;
    return;
L_089638C0:
    ctx.set_gpr(4, 2228u << 16u);
    ctx.set_gpr(4, ctx.gpr[4] + static_cast<std::uint32_t>(1476));
    ctx.set_gpr(5, ctx.gpr[20] + 0u);
    ctx.set_gpr(6, ctx.gpr[19] + 0u);
    ctx.set_gpr(7, rt.memory().aot_load32(ctx.gpr[21] + static_cast<std::uint32_t>(128)));
    ctx.set_gpr(8, rt.memory().aot_load32(ctx.gpr[21] + static_cast<std::uint32_t>(132)));
    ctx.set_gpr(31, 0x089638E0u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0084_entry, 84u, 456u, 0x08955F2Cu>(ctx, &aot_mem) && ctx.pc == 0x089638E0u) goto L_089638E0;
    return;
L_089638E0:
    ctx.set_gpr(2, 0u + static_cast<std::uint32_t>(1));
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_08963B84;
      }
      goto L_089638EC;
    }
L_089638EC:
    ctx.set_gpr(3, ctx.gpr[18] < ctx.gpr[6] ? 1u : 0u);
    { const bool branch_taken = ctx.gpr[3] != 0u;
    // nop
      if (branch_taken) {
          goto L_08963904;
      }
      goto L_089638F8;
    }
L_089638F8:
    ctx.set_gpr(1, ctx.gpr[5] < ctx.gpr[18] ? 1u : 0u);
    { const bool branch_taken = ctx.gpr[1] == 0u;
    // nop
      if (branch_taken) {
          goto L_08963954;
      }
      goto L_08963904;
    }
L_08963904:
    ctx.set_gpr(2, rt.memory().aot_load32(ctx.gpr[21] + static_cast<std::uint32_t>(144)));
    { const bool branch_taken = static_cast<std::int32_t>(ctx.gpr[2]) <= 0;
    // nop
      if (branch_taken) {
          goto L_08963948;
      }
      goto L_08963910;
    }
L_08963910:
    ctx.set_gpr(4, ctx.gpr[21] + 0u);
    ctx.set_gpr(5, 0u + 0u);
    ctx.set_gpr(25, rt.memory().aot_load32(ctx.gpr[21] + static_cast<std::uint32_t>(0)));
    ctx.set_gpr(25, rt.memory().aot_load32(ctx.gpr[25] + static_cast<std::uint32_t>(412)));
    jump_target = ctx.gpr[25];
    ctx.set_gpr(31, 0x08963928u);
    // nop
    ctx.pc = jump_target;
    if (rt.invoke_chained_call(ctx, &aot_mem) && ctx.pc == 0x08963928u) goto L_08963928;
    return;
L_08963928:
    ctx.set_gpr(4, 2228u << 16u);
    ctx.set_gpr(4, ctx.gpr[4] + static_cast<std::uint32_t>(1576));
    ctx.set_gpr(5, ctx.gpr[20] + 0u);
    ctx.set_gpr(6, ctx.gpr[18] + 0u);
    ctx.set_gpr(7, rt.memory().aot_load32(ctx.gpr[21] + static_cast<std::uint32_t>(128)));
    ctx.set_gpr(8, rt.memory().aot_load32(ctx.gpr[21] + static_cast<std::uint32_t>(132)));
    ctx.set_gpr(31, 0x08963948u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0084_entry, 84u, 456u, 0x08955F2Cu>(ctx, &aot_mem) && ctx.pc == 0x08963948u) goto L_08963948;
    return;
L_08963948:
    ctx.set_gpr(2, 0u + static_cast<std::uint32_t>(1));
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_08963B84;
      }
      goto L_08963954;
    }
L_08963954:
    ctx.set_gpr(1, ctx.gpr[18] < ctx.gpr[19] ? 1u : 0u);
    { const bool branch_taken = ctx.gpr[1] == 0u;
    // nop
      if (branch_taken) {
          goto L_089639A8;
      }
      goto L_08963960;
    }
L_08963960:
    ctx.set_gpr(2, rt.memory().aot_load32(ctx.gpr[21] + static_cast<std::uint32_t>(144)));
    { const bool branch_taken = static_cast<std::int32_t>(ctx.gpr[2]) <= 0;
    // nop
      if (branch_taken) {
          goto L_0896399C;
      }
      goto L_0896396C;
    }
L_0896396C:
    ctx.set_gpr(5, 0u + 0u);
    ctx.set_gpr(25, rt.memory().aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(0)));
    ctx.set_gpr(25, rt.memory().aot_load32(ctx.gpr[25] + static_cast<std::uint32_t>(412)));
    jump_target = ctx.gpr[25];
    ctx.set_gpr(31, 0x08963980u);
    // nop
    ctx.pc = jump_target;
    if (rt.invoke_chained_call(ctx, &aot_mem) && ctx.pc == 0x08963980u) goto L_08963980;
    return;
L_08963980:
    ctx.set_gpr(4, 2228u << 16u);
    ctx.set_gpr(4, ctx.gpr[4] + static_cast<std::uint32_t>(1680));
    ctx.set_gpr(5, ctx.gpr[20] + 0u);
    ctx.set_gpr(6, ctx.gpr[18] + 0u);
    ctx.set_gpr(7, ctx.gpr[19] + 0u);
    ctx.set_gpr(31, 0x0896399Cu);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0084_entry, 84u, 456u, 0x08955F2Cu>(ctx, &aot_mem) && ctx.pc == 0x0896399Cu) goto L_0896399C;
    return;
L_0896399C:
    ctx.set_gpr(2, 0u + static_cast<std::uint32_t>(1));
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_08963B84;
      }
      goto L_089639A8;
    }
L_089639A8:
    ctx.set_gpr(3, rt.memory().aot_load8(ctx.gpr[19] + static_cast<std::uint32_t>(0)));
    ctx.set_gpr(3, ctx.gpr[3] & 1u);
    { const bool branch_taken = ctx.gpr[3] != 0u;
    // nop
      if (branch_taken) {
          goto L_08963B14;
      }
      goto L_089639B8;
    }
L_089639B8:
    ctx.set_gpr(2, rt.memory().aot_load32(ctx.gpr[21] + static_cast<std::uint32_t>(144)));
    { const bool branch_taken = static_cast<std::int32_t>(ctx.gpr[2]) <= 0;
    // nop
      if (branch_taken) {
          goto L_089639EC;
      }
      goto L_089639C4;
    }
L_089639C4:
    ctx.set_gpr(5, 0u + 0u);
    ctx.set_gpr(25, rt.memory().aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(0)));
    ctx.set_gpr(25, rt.memory().aot_load32(ctx.gpr[25] + static_cast<std::uint32_t>(412)));
    jump_target = ctx.gpr[25];
    ctx.set_gpr(31, 0x089639D8u);
    // nop
    ctx.pc = jump_target;
    if (rt.invoke_chained_call(ctx, &aot_mem) && ctx.pc == 0x089639D8u) goto L_089639D8;
    return;
L_089639D8:
    ctx.set_gpr(4, 2228u << 16u);
    ctx.set_gpr(4, ctx.gpr[4] + static_cast<std::uint32_t>(1788));
    ctx.set_gpr(5, ctx.gpr[21] + 0u);
    ctx.set_gpr(31, 0x089639ECu);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0084_entry, 84u, 456u, 0x08955F2Cu>(ctx, &aot_mem) && ctx.pc == 0x089639ECu) goto L_089639EC;
    return;
L_089639EC:
    ctx.set_gpr(2, 0u + static_cast<std::uint32_t>(1));
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_08963B84;
      }
      goto L_089639F8;
    }
L_089639F8:
    ctx.set_gpr(3, rt.memory().aot_load32(ctx.gpr[19] + static_cast<std::uint32_t>(0)));
    ctx.set_gpr(3, ctx.gpr[3] << 11u);
    ctx.set_gpr(5, ctx.gpr[3] >> 16u);
    ctx.set_gpr(3, rt.memory().aot_load8(ctx.gpr[19] + static_cast<std::uint32_t>(3)));
    ctx.set_gpr(3, ctx.gpr[3] << 24u);
    ctx.set_gpr(3, ctx.gpr[3] >> 31u);
    ctx.set_gpr(4, ctx.gpr[3] & 255u);
    ctx.set_gpr(3, 0u + static_cast<std::uint32_t>(1));
    { const bool branch_taken = ctx.gpr[4] != ctx.gpr[3];
    // nop
      if (branch_taken) {
          goto L_08963A30;
      }
      goto L_08963A20;
    }
L_08963A20:
    ctx.set_gpr(3, rt.memory().aot_load16(ctx.gpr[19] + static_cast<std::uint32_t>(8)));
    ctx.set_gpr(3, ctx.gpr[3] & 32767u);
    ctx.set_gpr(3, ctx.gpr[3] << 16u);
    ctx.set_gpr(5, ctx.gpr[5] + ctx.gpr[3]);
    goto L_08963A30;
L_08963A30:
    ctx.set_gpr(4, ctx.gpr[5] + static_cast<std::uint32_t>(3));
    ctx.set_gpr(3, 0u + static_cast<std::uint32_t>(-4));
    ctx.set_gpr(4, ctx.gpr[4] & ctx.gpr[3]);
    ctx.set_gpr(3, rt.memory().aot_load8(ctx.gpr[19] + static_cast<std::uint32_t>(0)));
    ctx.set_gpr(3, ctx.gpr[3] << 27u);
    ctx.set_gpr(3, ctx.gpr[3] >> 28u);
    ctx.set_gpr(3, ctx.gpr[3] + static_cast<std::uint32_t>(1));
    ctx.set_gpr(3, ctx.gpr[3] << 2u);
    ctx.set_gpr(17, ctx.gpr[4] + ctx.gpr[3]);
    ctx.set_gpr(5, ctx.gpr[19] + ctx.gpr[17]);
    ctx.set_gpr(4, rt.memory().aot_load32(ctx.gpr[21] + static_cast<std::uint32_t>(216)));
    ctx.set_gpr(1, ctx.gpr[17] < ctx.gpr[4] ? 1u : 0u);
    { const bool branch_taken = ctx.gpr[1] == 0u;
    // nop
      if (branch_taken) {
          goto L_08963AF4;
      }
      goto L_08963A68;
    }
L_08963A68:
    ctx.set_gpr(2, ctx.gpr[18] - ctx.gpr[19]);
    ctx.set_gpr(1, static_cast<std::int32_t>(ctx.gpr[4]) < static_cast<std::int32_t>(ctx.gpr[2]) ? 1u : 0u);
    { const bool branch_taken = ctx.gpr[1] != 0u;
    // nop
      if (branch_taken) {
          goto L_08963A84;
      }
      goto L_08963A78;
    }
L_08963A78:
    ctx.set_gpr(2, 0u + static_cast<std::uint32_t>(1));
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_08963B20;
      }
      goto L_08963A84;
    }
L_08963A84:
    ctx.set_gpr(2, rt.memory().aot_load8(ctx.gpr[5] + static_cast<std::uint32_t>(3)));
    ctx.set_gpr(2, ctx.gpr[2] << 24u);
    ctx.set_gpr(2, ctx.gpr[2] >> 31u);
    { const bool branch_taken = ctx.gpr[2] != 0u;
    // nop
      if (branch_taken) {
          goto L_08963AAC;
      }
      goto L_08963A98;
    }
L_08963A98:
    ctx.set_gpr(2, rt.memory().aot_load32(ctx.gpr[5] + static_cast<std::uint32_t>(0)));
    ctx.set_gpr(2, ctx.gpr[2] << 11u);
    ctx.set_gpr(2, ctx.gpr[2] >> 16u);
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_08963AC8;
      }
      goto L_08963AAC;
    }
L_08963AAC:
    ctx.set_gpr(2, rt.memory().aot_load16(ctx.gpr[5] + static_cast<std::uint32_t>(8)));
    ctx.set_gpr(2, ctx.gpr[2] & 32767u);
    ctx.set_gpr(3, ctx.gpr[2] << 16u);
    ctx.set_gpr(2, rt.memory().aot_load32(ctx.gpr[5] + static_cast<std::uint32_t>(0)));
    ctx.set_gpr(2, ctx.gpr[2] << 11u);
    ctx.set_gpr(2, ctx.gpr[2] >> 16u);
    ctx.set_gpr(2, ctx.gpr[2] + ctx.gpr[3]);
    goto L_08963AC8;
L_08963AC8:
    ctx.set_gpr(1, ctx.gpr[2] < ctx.gpr[4] ? 1u : 0u);
    { const bool branch_taken = ctx.gpr[1] == 0u;
    // nop
      if (branch_taken) {
          goto L_08963B30;
      }
      goto L_08963AD4;
    }
L_08963AD4:
    ctx.set_gpr(3, ctx.gpr[18] - ctx.gpr[5]);
    ctx.set_gpr(2, ctx.gpr[4] << 1u);
    ctx.set_gpr(1, static_cast<std::int32_t>(ctx.gpr[2]) < static_cast<std::int32_t>(ctx.gpr[3]) ? 1u : 0u);
    { const bool branch_taken = ctx.gpr[1] != 0u;
    // nop
      if (branch_taken) {
          goto L_08963B30;
      }
      goto L_08963AE8;
    }
L_08963AE8:
    ctx.set_gpr(2, 0u + static_cast<std::uint32_t>(1));
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_08963B20;
      }
      goto L_08963AF4;
    }
L_08963AF4:
    ctx.set_gpr(1, ctx.gpr[18] < ctx.gpr[5] ? 1u : 0u);
    { const bool branch_taken = ctx.gpr[1] != 0u;
    // nop
      if (branch_taken) {
          goto L_08963B30;
      }
      goto L_08963B00;
    }
L_08963B00:
    ctx.set_gpr(3, ctx.gpr[5] < ctx.gpr[19] ? 1u : 0u);
    { const bool branch_taken = ctx.gpr[3] != 0u;
    // nop
      if (branch_taken) {
          goto L_08963B30;
      }
      goto L_08963B0C;
    }
L_08963B0C:
    ctx.set_gpr(19, ctx.gpr[5] + 0u);
    ctx.set_gpr(16, ctx.gpr[16] + static_cast<std::uint32_t>(1));
    goto L_08963B14;
L_08963B14:
    ctx.set_gpr(3, ctx.gpr[19] < ctx.gpr[18] ? 1u : 0u);
    { const bool branch_taken = ctx.gpr[3] != 0u;
    // nop
      if (branch_taken) {
          goto L_089639F8;
      }
      goto L_08963B20;
    }
L_08963B20:
    { const bool branch_taken = ctx.gpr[19] == ctx.gpr[18];
    // nop
      if (branch_taken) {
          goto L_08963B80;
      }
      goto L_08963B28;
    }
L_08963B28:
    { const bool branch_taken = ctx.gpr[2] != 0u;
    // nop
      if (branch_taken) {
          goto L_08963B80;
      }
      goto L_08963B30;
    }
L_08963B30:
    ctx.set_gpr(2, rt.memory().aot_load32(ctx.gpr[21] + static_cast<std::uint32_t>(144)));
    { const bool branch_taken = static_cast<std::int32_t>(ctx.gpr[2]) <= 0;
    // nop
      if (branch_taken) {
          goto L_08963B74;
      }
      goto L_08963B3C;
    }
L_08963B3C:
    ctx.set_gpr(4, ctx.gpr[21] + 0u);
    ctx.set_gpr(5, 0u + 0u);
    ctx.set_gpr(25, rt.memory().aot_load32(ctx.gpr[21] + static_cast<std::uint32_t>(0)));
    ctx.set_gpr(25, rt.memory().aot_load32(ctx.gpr[25] + static_cast<std::uint32_t>(412)));
    jump_target = ctx.gpr[25];
    ctx.set_gpr(31, 0x08963B54u);
    // nop
    ctx.pc = jump_target;
    if (rt.invoke_chained_call(ctx, &aot_mem) && ctx.pc == 0x08963B54u) goto L_08963B54;
    return;
L_08963B54:
    ctx.set_gpr(4, 2228u << 16u);
    ctx.set_gpr(4, ctx.gpr[4] + static_cast<std::uint32_t>(1904));
    ctx.set_gpr(5, ctx.gpr[19] + 0u);
    ctx.set_gpr(6, ctx.gpr[20] + 0u);
    ctx.set_gpr(7, ctx.gpr[16] + 0u);
    ctx.set_gpr(8, ctx.gpr[17] + 0u);
    ctx.set_gpr(31, 0x08963B74u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0084_entry, 84u, 456u, 0x08955F2Cu>(ctx, &aot_mem) && ctx.pc == 0x08963B74u) goto L_08963B74;
    return;
L_08963B74:
    ctx.set_gpr(2, 0u + static_cast<std::uint32_t>(1));
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_08963B84;
      }
      goto L_08963B80;
    }
L_08963B80:
    ctx.set_gpr(2, 0u + 0u);
    goto L_08963B84;
L_08963B84:
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
L_08963BAC:
    ctx.set_gpr(29, ctx.gpr[29] + static_cast<std::uint32_t>(-80));
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
    ctx.set_gpr(18, ctx.gpr[4] + 0u);
    ctx.set_gpr(17, ctx.gpr[5] + 0u);
    ctx.set_gpr(16, ctx.gpr[6] + 0u);
    ctx.set_gpr(23, rt.memory().aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(212)));
    ctx.set_gpr(2, rt.memory().aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(216)));
    ctx.set_gpr(3, ctx.gpr[2] + static_cast<std::uint32_t>(7));
    ctx.set_gpr(2, 0u + static_cast<std::uint32_t>(-8));
    ctx.set_gpr(2, ctx.gpr[3] & ctx.gpr[2]);
    ctx.set_gpr(2, ctx.gpr[17] + ctx.gpr[2]);
    ctx.set_gpr(2, ctx.gpr[2] + static_cast<std::uint32_t>(4));
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(64), ctx.gpr[2]);
    ctx.set_gpr(2, rt.memory().aot_load32(ctx.gpr[23] + static_cast<std::uint32_t>(2012)));
    ctx.set_gpr(2, ctx.gpr[2] + static_cast<std::uint32_t>(-1));
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(60), ctx.gpr[2]);
    ctx.set_gpr(21, rt.memory().aot_load32(ctx.gpr[23] + static_cast<std::uint32_t>(44)));
    ctx.set_gpr(2, rt.memory().aot_load32(ctx.gpr[21] + static_cast<std::uint32_t>(0)));
    ctx.set_gpr(2, ctx.gpr[2] << 11u);
    ctx.set_gpr(5, ctx.gpr[2] >> 16u);
    ctx.set_gpr(3, ctx.gpr[5] + 0u);
    ctx.set_gpr(2, rt.memory().aot_load8(ctx.gpr[21] + static_cast<std::uint32_t>(3)));
    ctx.set_gpr(2, ctx.gpr[2] << 24u);
    ctx.set_gpr(2, ctx.gpr[2] >> 31u);
    ctx.set_gpr(4, ctx.gpr[2] & 255u);
    ctx.set_gpr(2, 0u + static_cast<std::uint32_t>(1));
    { const bool branch_taken = ctx.gpr[4] != ctx.gpr[2];
    // nop
      if (branch_taken) {
          goto L_08963C50;
      }
      goto L_08963C40;
    }
L_08963C40:
    ctx.set_gpr(2, rt.memory().aot_load16(ctx.gpr[21] + static_cast<std::uint32_t>(8)));
    ctx.set_gpr(2, ctx.gpr[2] & 32767u);
    ctx.set_gpr(2, ctx.gpr[2] << 16u);
    ctx.set_gpr(3, ctx.gpr[5] + ctx.gpr[2]);
    goto L_08963C50;
L_08963C50:
    ctx.set_gpr(3, ctx.gpr[3] + static_cast<std::uint32_t>(3));
    ctx.set_gpr(2, 0u + static_cast<std::uint32_t>(-4));
    ctx.set_gpr(3, ctx.gpr[3] & ctx.gpr[2]);
    ctx.set_gpr(2, rt.memory().aot_load8(ctx.gpr[21] + static_cast<std::uint32_t>(0)));
    ctx.set_gpr(2, ctx.gpr[2] << 27u);
    ctx.set_gpr(2, ctx.gpr[2] >> 28u);
    ctx.set_gpr(2, ctx.gpr[2] + static_cast<std::uint32_t>(1));
    ctx.set_gpr(2, ctx.gpr[2] << 2u);
    ctx.set_gpr(22, ctx.gpr[3] + ctx.gpr[2]);
    ctx.set_gpr(2, ctx.gpr[23] + static_cast<std::uint32_t>(72));
    { const bool branch_taken = ctx.gpr[21] != ctx.gpr[2];
    // nop
      if (branch_taken) {
          goto L_08963C8C;
      }
      goto L_08963C80;
    }
L_08963C80:
    ctx.set_gpr(22, 0u + 0u);
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_08963DF0;
      }
      goto L_08963C8C;
    }
L_08963C8C:
    ctx.set_gpr(3, rt.memory().aot_load32(ctx.gpr[18] + static_cast<std::uint32_t>(144)));
    { const bool branch_taken = static_cast<std::int32_t>(ctx.gpr[3]) <= 0;
    // nop
      if (branch_taken) {
          goto L_08963DF0;
      }
      goto L_08963C98;
    }
L_08963C98:
    ctx.set_gpr(2, rt.memory().aot_load32(ctx.gpr[18] + static_cast<std::uint32_t>(132)));
    { const bool branch_taken = ctx.gpr[2] == 0u;
    // nop
      if (branch_taken) {
          goto L_08963DF0;
      }
      goto L_08963CA4;
    }
L_08963CA4:
    ctx.set_gpr(6, rt.memory().aot_load32(ctx.gpr[18] + static_cast<std::uint32_t>(128)));
    ctx.set_gpr(6, ctx.gpr[21] < ctx.gpr[6] ? 1u : 0u);
    { const bool branch_taken = ctx.gpr[6] != 0u;
    // nop
      if (branch_taken) {
          goto L_08963D6C;
      }
      goto L_08963CB4;
    }
L_08963CB4:
    ctx.set_gpr(1, ctx.gpr[21] < ctx.gpr[2] ? 1u : 0u);
    { const bool branch_taken = ctx.gpr[1] == 0u;
    // nop
      if (branch_taken) {
          goto L_08963D6C;
      }
      goto L_08963CC0;
    }
L_08963CC0:
    ctx.set_gpr(8, rt.memory().aot_load32(ctx.gpr[18] + static_cast<std::uint32_t>(72)));
    { const bool branch_taken = ctx.gpr[4] != 0u;
    // nop
      if (branch_taken) {
          goto L_08963CE0;
      }
      goto L_08963CCC;
    }
L_08963CCC:
    ctx.set_gpr(6, rt.memory().aot_load16(ctx.gpr[21] + static_cast<std::uint32_t>(2)));
    ctx.set_gpr(6, ctx.gpr[6] << 19u);
    ctx.set_gpr(6, ctx.gpr[6] >> 24u);
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_08963D00;
      }
      goto L_08963CE0;
    }
L_08963CE0:
    ctx.set_gpr(6, rt.memory().aot_load16(ctx.gpr[21] + static_cast<std::uint32_t>(2)));
    ctx.set_gpr(6, ctx.gpr[6] << 19u);
    ctx.set_gpr(7, ctx.gpr[6] >> 24u);
    ctx.set_gpr(6, rt.memory().aot_load32(ctx.gpr[21] + static_cast<std::uint32_t>(8)));
    ctx.set_gpr(6, ctx.gpr[6] << 8u);
    ctx.set_gpr(6, ctx.gpr[6] >> 23u);
    ctx.set_gpr(6, ctx.gpr[6] << 8u);
    ctx.set_gpr(6, ctx.gpr[7] + ctx.gpr[6]);
    goto L_08963D00;
L_08963D00:
    { const bool branch_taken = ctx.gpr[8] != ctx.gpr[6];
    // nop
      if (branch_taken) {
          goto L_08963D6C;
      }
      goto L_08963D08;
    }
L_08963D08:
    { const bool branch_taken = ctx.gpr[4] != 0u;
    // nop
      if (branch_taken) {
          goto L_08963D1C;
      }
      goto L_08963D10;
    }
L_08963D10:
    ctx.set_gpr(6, ctx.gpr[5] + 0u);
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_08963D2C;
      }
      goto L_08963D1C;
    }
L_08963D1C:
    ctx.set_gpr(6, rt.memory().aot_load16(ctx.gpr[21] + static_cast<std::uint32_t>(8)));
    ctx.set_gpr(6, ctx.gpr[6] & 32767u);
    ctx.set_gpr(6, ctx.gpr[6] << 16u);
    ctx.set_gpr(6, ctx.gpr[5] + ctx.gpr[6]);
    goto L_08963D2C;
L_08963D2C:
    ctx.set_gpr(1, 8192u << 16u);
    ctx.set_gpr(1, ctx.gpr[6] < ctx.gpr[1] ? 1u : 0u);
    { const bool branch_taken = ctx.gpr[1] == 0u;
    // nop
      if (branch_taken) {
          goto L_08963D6C;
      }
      goto L_08963D3C;
    }
L_08963D3C:
    { const bool branch_taken = ctx.gpr[4] != 0u;
    // nop
      if (branch_taken) {
          goto L_08963D4C;
      }
      goto L_08963D44;
    }
L_08963D44:
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_08963D5C;
      }
      goto L_08963D4C;
    }
L_08963D4C:
    ctx.set_gpr(4, rt.memory().aot_load16(ctx.gpr[21] + static_cast<std::uint32_t>(8)));
    ctx.set_gpr(4, ctx.gpr[4] & 32767u);
    ctx.set_gpr(4, ctx.gpr[4] << 16u);
    ctx.set_gpr(5, ctx.gpr[5] + ctx.gpr[4]);
    goto L_08963D5C;
L_08963D5C:
    ctx.set_gpr(4, ctx.gpr[21] + ctx.gpr[5]);
    ctx.set_gpr(1, ctx.gpr[2] < ctx.gpr[4] ? 1u : 0u);
    { const bool branch_taken = ctx.gpr[1] == 0u;
    // nop
      if (branch_taken) {
          goto L_08963DF0;
      }
      goto L_08963D6C;
    }
L_08963D6C:
    { const bool branch_taken = static_cast<std::int32_t>(ctx.gpr[3]) <= 0;
    // nop
      if (branch_taken) {
          goto L_08963DF0;
      }
      goto L_08963D74;
    }
L_08963D74:
    ctx.set_gpr(4, ctx.gpr[18] + 0u);
    ctx.set_gpr(5, 0u + 0u);
    ctx.set_gpr(25, rt.memory().aot_load32(ctx.gpr[18] + static_cast<std::uint32_t>(0)));
    ctx.set_gpr(25, rt.memory().aot_load32(ctx.gpr[25] + static_cast<std::uint32_t>(412)));
    jump_target = ctx.gpr[25];
    ctx.set_gpr(31, 0x08963D8Cu);
    // nop
    ctx.pc = jump_target;
    if (rt.invoke_chained_call(ctx, &aot_mem) && ctx.pc == 0x08963D8Cu) goto L_08963D8C;
    return;
L_08963D8C:
    ctx.set_gpr(4, ctx.gpr[18] + 0u);
    ctx.set_gpr(31, 0x08963D98u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0081_entry, 81u, 30u, 0x089482C8u>(ctx, &aot_mem) && ctx.pc == 0x08963D98u) goto L_08963D98;
    return;
L_08963D98:
    ctx.set_gpr(19, ctx.gpr[2] + 0u);
    ctx.set_gpr(4, ctx.gpr[18] + 0u);
    ctx.set_gpr(25, rt.memory().aot_load32(ctx.gpr[18] + static_cast<std::uint32_t>(0)));
    ctx.set_gpr(25, rt.memory().aot_load32(ctx.gpr[25] + static_cast<std::uint32_t>(464)));
    jump_target = ctx.gpr[25];
    ctx.set_gpr(31, 0x08963DB0u);
    // nop
    ctx.pc = jump_target;
    if (rt.invoke_chained_call(ctx, &aot_mem) && ctx.pc == 0x08963DB0u) goto L_08963DB0;
    return;
L_08963DB0:
    ctx.set_gpr(20, ctx.gpr[2] + 0u);
    ctx.set_gpr(4, ctx.gpr[18] + 0u);
    ctx.set_gpr(25, rt.memory().aot_load32(ctx.gpr[18] + static_cast<std::uint32_t>(0)));
    ctx.set_gpr(25, rt.memory().aot_load32(ctx.gpr[25] + static_cast<std::uint32_t>(456)));
    jump_target = ctx.gpr[25];
    ctx.set_gpr(31, 0x08963DC8u);
    // nop
    ctx.pc = jump_target;
    if (rt.invoke_chained_call(ctx, &aot_mem) && ctx.pc == 0x08963DC8u) goto L_08963DC8;
    return;
L_08963DC8:
    ctx.set_gpr(3, 2228u << 16u);
    ctx.set_gpr(4, rt.memory().aot_load32(ctx.gpr[3] + static_cast<std::uint32_t>(-11252)));
    ctx.set_gpr(5, ctx.gpr[19] + 0u);
    ctx.set_gpr(6, ctx.gpr[20] + 0u);
    ctx.set_gpr(7, ctx.gpr[2] + 0u);
    ctx.set_gpr(8, 2228u << 16u);
    ctx.set_gpr(8, ctx.gpr[8] + static_cast<std::uint32_t>(2024));
    ctx.set_gpr(9, ctx.gpr[21] + 0u);
    ctx.set_gpr(31, 0x08963DF0u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0084_entry, 84u, 456u, 0x08955F2Cu>(ctx, &aot_mem) && ctx.pc == 0x08963DF0u) goto L_08963DF0;
    return;
L_08963DF0:
    ctx.set_gpr(2, ctx.gpr[21] + ctx.gpr[22]);
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(76), ctx.gpr[2]);
    ctx.set_gpr(2, rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(60)));
    ctx.set_gpr(2, ~(ctx.gpr[2] | 0u));
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(56), ctx.gpr[2]);
    ctx.set_gpr(2, rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(64)));
    ctx.set_gpr(3, ctx.gpr[21] + ctx.gpr[2]);
    ctx.set_gpr(2, rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(60)));
    ctx.set_gpr(3, ctx.gpr[2] + ctx.gpr[3]);
    ctx.set_gpr(2, rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(56)));
    ctx.set_gpr(30, ctx.gpr[2] & ctx.gpr[3]);
    ctx.set_gpr(19, ctx.gpr[21] + ctx.gpr[17]);
    ctx.set_gpr(2, rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(76)));
    ctx.set_gpr(20, ctx.gpr[30] - ctx.gpr[2]);
    ctx.set_gpr(2, rt.memory().aot_load32(ctx.gpr[18] + static_cast<std::uint32_t>(120)));
    ctx.set_gpr(1, ctx.gpr[20] < ctx.gpr[2] ? 1u : 0u);
    { const bool branch_taken = ctx.gpr[1] == 0u;
    // nop
      if (branch_taken) {
          goto L_08963E58;
      }
      goto L_08963E38;
    }
L_08963E38:
    ctx.set_gpr(3, ctx.gpr[2] - ctx.gpr[20]);
    ctx.set_gpr(4, ctx.gpr[30] + ctx.gpr[3]);
    ctx.set_gpr(3, rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(60)));
    ctx.set_gpr(4, ctx.gpr[4] + ctx.gpr[3]);
    ctx.set_gpr(3, rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(56)));
    ctx.set_gpr(30, ctx.gpr[3] & ctx.gpr[4]);
    ctx.set_gpr(3, rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(76)));
    ctx.set_gpr(20, ctx.gpr[30] - ctx.gpr[3]);
    goto L_08963E58;
L_08963E58:
    ctx.set_gpr(5, rt.memory().aot_load32(ctx.gpr[18] + static_cast<std::uint32_t>(104)));
    ctx.set_gpr(4, ctx.gpr[5] + ctx.gpr[20]);
    ctx.set_gpr(3, rt.memory().aot_load32(ctx.gpr[18] + static_cast<std::uint32_t>(108)));
    ctx.set_gpr(1, ctx.gpr[3] < ctx.gpr[4] ? 1u : 0u);
    { const bool branch_taken = ctx.gpr[1] == 0u;
    // nop
      if (branch_taken) {
          goto L_08963E88;
      }
      goto L_08963E70;
    }
L_08963E70:
    ctx.set_gpr(3, ctx.gpr[3] - ctx.gpr[4]);
    ctx.set_gpr(4, ctx.gpr[30] - ctx.gpr[3]);
    ctx.set_gpr(3, rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(56)));
    ctx.set_gpr(30, ctx.gpr[4] & ctx.gpr[3]);
    ctx.set_gpr(3, rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(76)));
    ctx.set_gpr(20, ctx.gpr[30] - ctx.gpr[3]);
    goto L_08963E88;
L_08963E88:
    ctx.set_gpr(4, rt.memory().aot_load32(ctx.gpr[18] + static_cast<std::uint32_t>(112)));
    { const bool branch_taken = ctx.gpr[4] == 0u;
    // nop
      if (branch_taken) {
          goto L_08963FE8;
      }
      goto L_08963E94;
    }
L_08963E94:
    ctx.set_gpr(3, ctx.gpr[20] + ctx.gpr[5]);
    ctx.set_gpr(1, ctx.gpr[3] < ctx.gpr[4] ? 1u : 0u);
    { const bool branch_taken = ctx.gpr[1] == 0u;
    // nop
      if (branch_taken) {
          goto L_08963EE4;
      }
      goto L_08963EA4;
    }
L_08963EA4:
    ctx.set_gpr(3, rt.memory().aot_load32(ctx.gpr[18] + static_cast<std::uint32_t>(180)));
    ctx.set_gpr(4, ctx.gpr[4] - ctx.gpr[3]);
    ctx.set_gpr(3, rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(60)));
    ctx.set_gpr(4, ctx.gpr[4] + ctx.gpr[3]);
    ctx.set_gpr(3, rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(56)));
    ctx.set_gpr(20, ctx.gpr[3] & ctx.gpr[4]);
    ctx.set_gpr(1, ctx.gpr[20] < ctx.gpr[2] ? 1u : 0u);
    { const bool branch_taken = ctx.gpr[1] == 0u;
    // nop
      if (branch_taken) {
          goto L_08963ECC;
      }
      goto L_08963EC8;
    }
L_08963EC8:
    ctx.set_gpr(20, ctx.gpr[2] + 0u);
    goto L_08963ECC;
L_08963ECC:
    ctx.set_gpr(2, rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(76)));
    ctx.set_gpr(30, ctx.gpr[2] + ctx.gpr[20]);
    ctx.set_gpr(2, 0u + static_cast<std::uint32_t>(1));
    rt.memory().aot_store32(ctx.gpr[18] + static_cast<std::uint32_t>(116), ctx.gpr[2]);
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_08963FE8;
      }
      goto L_08963EE4;
    }
L_08963EE4:
    ctx.set_gpr(2, rt.memory().aot_load32(ctx.gpr[18] + static_cast<std::uint32_t>(116)));
    { const bool branch_taken = ctx.gpr[2] != 0u;
    // nop
      if (branch_taken) {
          goto L_08963FE8;
      }
      goto L_08963EF0;
    }
L_08963EF0:
    ctx.set_gpr(2, rt.memory().aot_load32(ctx.gpr[18] + static_cast<std::uint32_t>(140)));
    ctx.set_gpr(2, ctx.gpr[2] & 128u);
    ctx.set_gpr(2, 0u < ctx.gpr[2] ? 1u : 0u);
    { const bool branch_taken = ctx.gpr[2] == 0u;
    // nop
      if (branch_taken) {
          goto L_08963FE8;
      }
      goto L_08963F04;
    }
L_08963F04:
    ctx.set_gpr(4, ctx.gpr[18] + 0u);
    ctx.set_gpr(25, rt.memory().aot_load32(ctx.gpr[18] + static_cast<std::uint32_t>(0)));
    ctx.set_gpr(25, rt.memory().aot_load32(ctx.gpr[25] + static_cast<std::uint32_t>(288)));
    jump_target = ctx.gpr[25];
    ctx.set_gpr(31, 0x08963F18u);
    // nop
    ctx.pc = jump_target;
    if (rt.invoke_chained_call(ctx, &aot_mem) && ctx.pc == 0x08963F18u) goto L_08963F18;
    return;
L_08963F18:
    ctx.set_gpr(4, ctx.gpr[18] + 0u);
    ctx.set_gpr(5, ctx.gpr[16] + 0u);
    ctx.set_gpr(6, 0u + static_cast<std::uint32_t>(5));
    ctx.set_gpr(7, 0u + 0u);
    ctx.set_gpr(25, rt.memory().aot_load32(ctx.gpr[18] + static_cast<std::uint32_t>(0)));
    ctx.set_gpr(25, rt.memory().aot_load32(ctx.gpr[25] + static_cast<std::uint32_t>(500)));
    jump_target = ctx.gpr[25];
    ctx.set_gpr(31, 0x08963F38u);
    // nop
    ctx.pc = jump_target;
    if (rt.invoke_chained_call(ctx, &aot_mem) && ctx.pc == 0x08963F38u) goto L_08963F38;
    return;
L_08963F38:
    { const bool branch_taken = ctx.gpr[2] != 0u;
    // nop
      if (branch_taken) {
          goto L_08963FD4;
      }
      goto L_08963F40;
    }
L_08963F40:
    ctx.set_gpr(2, rt.memory().aot_load32(ctx.gpr[18] + static_cast<std::uint32_t>(144)));
    { const bool branch_taken = static_cast<std::int32_t>(ctx.gpr[2]) <= 0;
    // nop
      if (branch_taken) {
          goto L_08963FCC;
      }
      goto L_08963F4C;
    }
L_08963F4C:
    { const bool branch_taken = static_cast<std::int32_t>(ctx.gpr[2]) <= 0;
    // nop
      if (branch_taken) {
          goto L_08963FCC;
      }
      goto L_08963F54;
    }
L_08963F54:
    ctx.set_gpr(4, ctx.gpr[18] + 0u);
    ctx.set_gpr(5, 0u + 0u);
    ctx.set_gpr(25, rt.memory().aot_load32(ctx.gpr[18] + static_cast<std::uint32_t>(0)));
    ctx.set_gpr(25, rt.memory().aot_load32(ctx.gpr[25] + static_cast<std::uint32_t>(412)));
    jump_target = ctx.gpr[25];
    ctx.set_gpr(31, 0x08963F6Cu);
    // nop
    ctx.pc = jump_target;
    if (rt.invoke_chained_call(ctx, &aot_mem) && ctx.pc == 0x08963F6Cu) goto L_08963F6C;
    return;
L_08963F6C:
    ctx.set_gpr(2, rt.memory().aot_load32(ctx.gpr[18] + static_cast<std::uint32_t>(180)));
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(72), ctx.gpr[2]);
    ctx.set_gpr(2, rt.memory().aot_load32(ctx.gpr[18] + static_cast<std::uint32_t>(164)));
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(68), ctx.gpr[2]);
    ctx.set_gpr(4, ctx.gpr[18] + 0u);
    ctx.set_gpr(25, rt.memory().aot_load32(ctx.gpr[18] + static_cast<std::uint32_t>(0)));
    ctx.set_gpr(25, rt.memory().aot_load32(ctx.gpr[25] + static_cast<std::uint32_t>(464)));
    jump_target = ctx.gpr[25];
    ctx.set_gpr(31, 0x08963F90u);
    // nop
    ctx.pc = jump_target;
    if (rt.invoke_chained_call(ctx, &aot_mem) && ctx.pc == 0x08963F90u) goto L_08963F90;
    return;
L_08963F90:
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(52), ctx.gpr[2]);
    ctx.set_gpr(4, ctx.gpr[18] + 0u);
    ctx.set_gpr(25, rt.memory().aot_load32(ctx.gpr[18] + static_cast<std::uint32_t>(0)));
    ctx.set_gpr(25, rt.memory().aot_load32(ctx.gpr[25] + static_cast<std::uint32_t>(320)));
    jump_target = ctx.gpr[25];
    ctx.set_gpr(31, 0x08963FA8u);
    // nop
    ctx.pc = jump_target;
    if (rt.invoke_chained_call(ctx, &aot_mem) && ctx.pc == 0x08963FA8u) goto L_08963FA8;
    return;
L_08963FA8:
    ctx.set_gpr(4, 2228u << 16u);
    ctx.set_gpr(4, ctx.gpr[4] + static_cast<std::uint32_t>(2052));
    ctx.set_gpr(5, rt.memory().aot_load32(ctx.gpr[18] + static_cast<std::uint32_t>(112)));
    ctx.set_gpr(6, rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(52)));
    ctx.set_gpr(7, rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(68)));
    ctx.set_gpr(8, rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(72)));
    ctx.set_gpr(9, ctx.gpr[2] + 0u);
    ctx.set_gpr(31, 0x08963FCCu);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0084_entry, 84u, 456u, 0x08955F2Cu>(ctx, &aot_mem) && ctx.pc == 0x08963FCCu) goto L_08963FCC;
    return;
L_08963FCC:
    ctx.set_gpr(2, 0u + static_cast<std::uint32_t>(2));
    rt.memory().aot_store32(ctx.gpr[18] + static_cast<std::uint32_t>(116), ctx.gpr[2]);
    goto L_08963FD4;
L_08963FD4:
    ctx.set_gpr(4, ctx.gpr[18] + 0u);
    ctx.set_gpr(25, rt.memory().aot_load32(ctx.gpr[18] + static_cast<std::uint32_t>(0)));
    ctx.set_gpr(25, rt.memory().aot_load32(ctx.gpr[25] + static_cast<std::uint32_t>(284)));
    jump_target = ctx.gpr[25];
    ctx.set_gpr(31, 0x08963FE8u);
    // nop
    ctx.pc = jump_target;
    if (rt.invoke_chained_call(ctx, &aot_mem) && ctx.pc == 0x08963FE8u) goto L_08963FE8;
    return;
L_08963FE8:
    ctx.set_gpr(4, ctx.gpr[18] + 0u);
    ctx.set_gpr(5, rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(76)));
    ctx.set_gpr(6, ctx.gpr[20] + 0u);
    ctx.set_gpr(25, rt.memory().aot_load32(ctx.gpr[18] + static_cast<std::uint32_t>(0)));
    ctx.set_gpr(25, rt.memory().aot_load32(ctx.gpr[25] + static_cast<std::uint32_t>(232)));
    jump_target = ctx.gpr[25];
    ctx.set_gpr(31, 0x08964004u);
    // nop
    ctx.pc = jump_target;
    (void)rt.invoke_chained_call(ctx, &aot_mem);
    return;
}

void recomp_unit_0087(Runtime &rt, AllegrexContext &ctx) {
    auto aot_mem = rt.memory().aot_fast_view();
    recomp_unit_0087_entry(rt, ctx, 0u, aot_mem);
}

void register_generated_unit_87(Runtime &runtime) {
    runtime.register_generated_unit(87u, 0x08960000u, 16384u, &recomp_unit_0087, &recomp_unit_0087_entry);
    runtime.register_function(0x08960000u, &recomp_unit_0087, "recomp_unit_0087");
    runtime.register_function(0x0896007Cu, &recomp_unit_0087, "recomp_unit_0087");
    runtime.register_function(0x08960080u, &recomp_unit_0087, "recomp_unit_0087");
    runtime.register_function(0x089600A4u, &recomp_unit_0087, "recomp_unit_0087");
    runtime.register_function(0x089600E8u, &recomp_unit_0087, "recomp_unit_0087");
    runtime.register_function(0x089600F0u, &recomp_unit_0087, "recomp_unit_0087");
    runtime.register_function(0x08960108u, &recomp_unit_0087, "recomp_unit_0087");
    runtime.register_function(0x0896012Cu, &recomp_unit_0087, "recomp_unit_0087");
    runtime.register_function(0x08960180u, &recomp_unit_0087, "recomp_unit_0087");
    runtime.register_function(0x08960190u, &recomp_unit_0087, "recomp_unit_0087");
    runtime.register_function(0x089601C0u, &recomp_unit_0087, "recomp_unit_0087");
    runtime.register_function(0x089601D0u, &recomp_unit_0087, "recomp_unit_0087");
    runtime.register_function(0x089601D4u, &recomp_unit_0087, "recomp_unit_0087");
    runtime.register_function(0x089601DCu, &recomp_unit_0087, "recomp_unit_0087");
    runtime.register_function(0x089601E8u, &recomp_unit_0087, "recomp_unit_0087");
    runtime.register_function(0x089601F8u, &recomp_unit_0087, "recomp_unit_0087");
    runtime.register_function(0x08960204u, &recomp_unit_0087, "recomp_unit_0087");
    runtime.register_function(0x08960210u, &recomp_unit_0087, "recomp_unit_0087");
    runtime.register_function(0x08960220u, &recomp_unit_0087, "recomp_unit_0087");
    runtime.register_function(0x08960228u, &recomp_unit_0087, "recomp_unit_0087");
    runtime.register_function(0x08960240u, &recomp_unit_0087, "recomp_unit_0087");
    runtime.register_function(0x0896024Cu, &recomp_unit_0087, "recomp_unit_0087");
    runtime.register_function(0x0896025Cu, &recomp_unit_0087, "recomp_unit_0087");
    runtime.register_function(0x08960274u, &recomp_unit_0087, "recomp_unit_0087");
    runtime.register_function(0x089602A0u, &recomp_unit_0087, "recomp_unit_0087");
    runtime.register_function(0x089602ACu, &recomp_unit_0087, "recomp_unit_0087");
    runtime.register_function(0x089602C0u, &recomp_unit_0087, "recomp_unit_0087");
    runtime.register_function(0x089602C8u, &recomp_unit_0087, "recomp_unit_0087");
    runtime.register_function(0x089602E0u, &recomp_unit_0087, "recomp_unit_0087");
    runtime.register_function(0x089602ECu, &recomp_unit_0087, "recomp_unit_0087");
    runtime.register_function(0x089602FCu, &recomp_unit_0087, "recomp_unit_0087");
    runtime.register_function(0x08960314u, &recomp_unit_0087, "recomp_unit_0087");
    runtime.register_function(0x08960340u, &recomp_unit_0087, "recomp_unit_0087");
    runtime.register_function(0x08960348u, &recomp_unit_0087, "recomp_unit_0087");
    runtime.register_function(0x08960354u, &recomp_unit_0087, "recomp_unit_0087");
    runtime.register_function(0x08960370u, &recomp_unit_0087, "recomp_unit_0087");
    runtime.register_function(0x08960378u, &recomp_unit_0087, "recomp_unit_0087");
    runtime.register_function(0x08960390u, &recomp_unit_0087, "recomp_unit_0087");
    runtime.register_function(0x0896039Cu, &recomp_unit_0087, "recomp_unit_0087");
    runtime.register_function(0x089603ACu, &recomp_unit_0087, "recomp_unit_0087");
    runtime.register_function(0x089603C4u, &recomp_unit_0087, "recomp_unit_0087");
    runtime.register_function(0x089603FCu, &recomp_unit_0087, "recomp_unit_0087");
    runtime.register_function(0x08960408u, &recomp_unit_0087, "recomp_unit_0087");
    runtime.register_function(0x08960418u, &recomp_unit_0087, "recomp_unit_0087");
    runtime.register_function(0x08960420u, &recomp_unit_0087, "recomp_unit_0087");
    runtime.register_function(0x08960438u, &recomp_unit_0087, "recomp_unit_0087");
    runtime.register_function(0x08960444u, &recomp_unit_0087, "recomp_unit_0087");
    runtime.register_function(0x08960454u, &recomp_unit_0087, "recomp_unit_0087");
    runtime.register_function(0x0896046Cu, &recomp_unit_0087, "recomp_unit_0087");
    runtime.register_function(0x08960494u, &recomp_unit_0087, "recomp_unit_0087");
    runtime.register_function(0x0896049Cu, &recomp_unit_0087, "recomp_unit_0087");
    runtime.register_function(0x089604A8u, &recomp_unit_0087, "recomp_unit_0087");
    runtime.register_function(0x089604B4u, &recomp_unit_0087, "recomp_unit_0087");
    runtime.register_function(0x089604C4u, &recomp_unit_0087, "recomp_unit_0087");
    runtime.register_function(0x089604C8u, &recomp_unit_0087, "recomp_unit_0087");
    runtime.register_function(0x089604D0u, &recomp_unit_0087, "recomp_unit_0087");
    runtime.register_function(0x089604D8u, &recomp_unit_0087, "recomp_unit_0087");
    runtime.register_function(0x089604F0u, &recomp_unit_0087, "recomp_unit_0087");
    runtime.register_function(0x089604FCu, &recomp_unit_0087, "recomp_unit_0087");
    runtime.register_function(0x0896050Cu, &recomp_unit_0087, "recomp_unit_0087");
    runtime.register_function(0x08960524u, &recomp_unit_0087, "recomp_unit_0087");
    runtime.register_function(0x0896054Cu, &recomp_unit_0087, "recomp_unit_0087");
    runtime.register_function(0x08960574u, &recomp_unit_0087, "recomp_unit_0087");
    runtime.register_function(0x089605C8u, &recomp_unit_0087, "recomp_unit_0087");
    runtime.register_function(0x089605D8u, &recomp_unit_0087, "recomp_unit_0087");
    runtime.register_function(0x08960610u, &recomp_unit_0087, "recomp_unit_0087");
    runtime.register_function(0x08960638u, &recomp_unit_0087, "recomp_unit_0087");
    runtime.register_function(0x08960644u, &recomp_unit_0087, "recomp_unit_0087");
    runtime.register_function(0x08960654u, &recomp_unit_0087, "recomp_unit_0087");
    runtime.register_function(0x0896068Cu, &recomp_unit_0087, "recomp_unit_0087");
    runtime.register_function(0x08960694u, &recomp_unit_0087, "recomp_unit_0087");
    runtime.register_function(0x089606ACu, &recomp_unit_0087, "recomp_unit_0087");
    runtime.register_function(0x089606B8u, &recomp_unit_0087, "recomp_unit_0087");
    runtime.register_function(0x089606C8u, &recomp_unit_0087, "recomp_unit_0087");
    runtime.register_function(0x089606E0u, &recomp_unit_0087, "recomp_unit_0087");
    runtime.register_function(0x08960708u, &recomp_unit_0087, "recomp_unit_0087");
    runtime.register_function(0x08960714u, &recomp_unit_0087, "recomp_unit_0087");
    runtime.register_function(0x0896072Cu, &recomp_unit_0087, "recomp_unit_0087");
    runtime.register_function(0x0896073Cu, &recomp_unit_0087, "recomp_unit_0087");
    runtime.register_function(0x08960740u, &recomp_unit_0087, "recomp_unit_0087");
    runtime.register_function(0x08960748u, &recomp_unit_0087, "recomp_unit_0087");
    runtime.register_function(0x08960750u, &recomp_unit_0087, "recomp_unit_0087");
    runtime.register_function(0x08960768u, &recomp_unit_0087, "recomp_unit_0087");
    runtime.register_function(0x08960774u, &recomp_unit_0087, "recomp_unit_0087");
    runtime.register_function(0x08960784u, &recomp_unit_0087, "recomp_unit_0087");
    runtime.register_function(0x0896079Cu, &recomp_unit_0087, "recomp_unit_0087");
    runtime.register_function(0x089607C4u, &recomp_unit_0087, "recomp_unit_0087");
    runtime.register_function(0x089607E0u, &recomp_unit_0087, "recomp_unit_0087");
    runtime.register_function(0x089607ECu, &recomp_unit_0087, "recomp_unit_0087");
    runtime.register_function(0x089607F8u, &recomp_unit_0087, "recomp_unit_0087");
    runtime.register_function(0x08960800u, &recomp_unit_0087, "recomp_unit_0087");
    runtime.register_function(0x08960818u, &recomp_unit_0087, "recomp_unit_0087");
    runtime.register_function(0x08960824u, &recomp_unit_0087, "recomp_unit_0087");
    runtime.register_function(0x08960834u, &recomp_unit_0087, "recomp_unit_0087");
    runtime.register_function(0x0896084Cu, &recomp_unit_0087, "recomp_unit_0087");
    runtime.register_function(0x08960878u, &recomp_unit_0087, "recomp_unit_0087");
    runtime.register_function(0x08960884u, &recomp_unit_0087, "recomp_unit_0087");
    runtime.register_function(0x08960898u, &recomp_unit_0087, "recomp_unit_0087");
    runtime.register_function(0x089608A4u, &recomp_unit_0087, "recomp_unit_0087");
    runtime.register_function(0x089608A8u, &recomp_unit_0087, "recomp_unit_0087");
    runtime.register_function(0x089608B8u, &recomp_unit_0087, "recomp_unit_0087");
    runtime.register_function(0x089608C0u, &recomp_unit_0087, "recomp_unit_0087");
    runtime.register_function(0x089608D8u, &recomp_unit_0087, "recomp_unit_0087");
    runtime.register_function(0x089608E4u, &recomp_unit_0087, "recomp_unit_0087");
    runtime.register_function(0x089608F4u, &recomp_unit_0087, "recomp_unit_0087");
    runtime.register_function(0x0896090Cu, &recomp_unit_0087, "recomp_unit_0087");
    runtime.register_function(0x08960934u, &recomp_unit_0087, "recomp_unit_0087");
    runtime.register_function(0x08960940u, &recomp_unit_0087, "recomp_unit_0087");
    runtime.register_function(0x0896094Cu, &recomp_unit_0087, "recomp_unit_0087");
    runtime.register_function(0x08960954u, &recomp_unit_0087, "recomp_unit_0087");
    runtime.register_function(0x0896096Cu, &recomp_unit_0087, "recomp_unit_0087");
    runtime.register_function(0x08960978u, &recomp_unit_0087, "recomp_unit_0087");
    runtime.register_function(0x08960988u, &recomp_unit_0087, "recomp_unit_0087");
    runtime.register_function(0x089609A0u, &recomp_unit_0087, "recomp_unit_0087");
    runtime.register_function(0x089609CCu, &recomp_unit_0087, "recomp_unit_0087");
    runtime.register_function(0x089609D8u, &recomp_unit_0087, "recomp_unit_0087");
    runtime.register_function(0x089609E8u, &recomp_unit_0087, "recomp_unit_0087");
    runtime.register_function(0x089609F0u, &recomp_unit_0087, "recomp_unit_0087");
    runtime.register_function(0x08960A08u, &recomp_unit_0087, "recomp_unit_0087");
    runtime.register_function(0x08960A14u, &recomp_unit_0087, "recomp_unit_0087");
    runtime.register_function(0x08960A24u, &recomp_unit_0087, "recomp_unit_0087");
    runtime.register_function(0x08960A3Cu, &recomp_unit_0087, "recomp_unit_0087");
    runtime.register_function(0x08960A64u, &recomp_unit_0087, "recomp_unit_0087");
    runtime.register_function(0x08960A70u, &recomp_unit_0087, "recomp_unit_0087");
    runtime.register_function(0x08960A7Cu, &recomp_unit_0087, "recomp_unit_0087");
    runtime.register_function(0x08960AA0u, &recomp_unit_0087, "recomp_unit_0087");
    runtime.register_function(0x08960AB0u, &recomp_unit_0087, "recomp_unit_0087");
    runtime.register_function(0x08960AE8u, &recomp_unit_0087, "recomp_unit_0087");
    runtime.register_function(0x08960AF0u, &recomp_unit_0087, "recomp_unit_0087");
    runtime.register_function(0x08960B08u, &recomp_unit_0087, "recomp_unit_0087");
    runtime.register_function(0x08960B14u, &recomp_unit_0087, "recomp_unit_0087");
    runtime.register_function(0x08960B24u, &recomp_unit_0087, "recomp_unit_0087");
    runtime.register_function(0x08960B3Cu, &recomp_unit_0087, "recomp_unit_0087");
    runtime.register_function(0x08960B64u, &recomp_unit_0087, "recomp_unit_0087");
    runtime.register_function(0x08960B70u, &recomp_unit_0087, "recomp_unit_0087");
    runtime.register_function(0x08960B88u, &recomp_unit_0087, "recomp_unit_0087");
    runtime.register_function(0x08960B94u, &recomp_unit_0087, "recomp_unit_0087");
    runtime.register_function(0x08960B98u, &recomp_unit_0087, "recomp_unit_0087");
    runtime.register_function(0x08960BA8u, &recomp_unit_0087, "recomp_unit_0087");
    runtime.register_function(0x08960BB0u, &recomp_unit_0087, "recomp_unit_0087");
    runtime.register_function(0x08960BBCu, &recomp_unit_0087, "recomp_unit_0087");
    runtime.register_function(0x08960BC0u, &recomp_unit_0087, "recomp_unit_0087");
    runtime.register_function(0x08960BDCu, &recomp_unit_0087, "recomp_unit_0087");
    runtime.register_function(0x08960BE8u, &recomp_unit_0087, "recomp_unit_0087");
    runtime.register_function(0x08960BECu, &recomp_unit_0087, "recomp_unit_0087");
    runtime.register_function(0x08960BFCu, &recomp_unit_0087, "recomp_unit_0087");
    runtime.register_function(0x08960C04u, &recomp_unit_0087, "recomp_unit_0087");
    runtime.register_function(0x08960C1Cu, &recomp_unit_0087, "recomp_unit_0087");
    runtime.register_function(0x08960C28u, &recomp_unit_0087, "recomp_unit_0087");
    runtime.register_function(0x08960C38u, &recomp_unit_0087, "recomp_unit_0087");
    runtime.register_function(0x08960C50u, &recomp_unit_0087, "recomp_unit_0087");
    runtime.register_function(0x08960C78u, &recomp_unit_0087, "recomp_unit_0087");
    runtime.register_function(0x08960C84u, &recomp_unit_0087, "recomp_unit_0087");
    runtime.register_function(0x08960C9Cu, &recomp_unit_0087, "recomp_unit_0087");
    runtime.register_function(0x08960CA8u, &recomp_unit_0087, "recomp_unit_0087");
    runtime.register_function(0x08960CACu, &recomp_unit_0087, "recomp_unit_0087");
    runtime.register_function(0x08960CBCu, &recomp_unit_0087, "recomp_unit_0087");
    runtime.register_function(0x08960CC4u, &recomp_unit_0087, "recomp_unit_0087");
    runtime.register_function(0x08960CD0u, &recomp_unit_0087, "recomp_unit_0087");
    runtime.register_function(0x08960CD4u, &recomp_unit_0087, "recomp_unit_0087");
    runtime.register_function(0x08960CF0u, &recomp_unit_0087, "recomp_unit_0087");
    runtime.register_function(0x08960CFCu, &recomp_unit_0087, "recomp_unit_0087");
    runtime.register_function(0x08960D00u, &recomp_unit_0087, "recomp_unit_0087");
    runtime.register_function(0x08960D10u, &recomp_unit_0087, "recomp_unit_0087");
    runtime.register_function(0x08960D18u, &recomp_unit_0087, "recomp_unit_0087");
    runtime.register_function(0x08960D30u, &recomp_unit_0087, "recomp_unit_0087");
    runtime.register_function(0x08960D3Cu, &recomp_unit_0087, "recomp_unit_0087");
    runtime.register_function(0x08960D4Cu, &recomp_unit_0087, "recomp_unit_0087");
    runtime.register_function(0x08960D64u, &recomp_unit_0087, "recomp_unit_0087");
    runtime.register_function(0x08960D8Cu, &recomp_unit_0087, "recomp_unit_0087");
    runtime.register_function(0x08960D94u, &recomp_unit_0087, "recomp_unit_0087");
    runtime.register_function(0x08960DA0u, &recomp_unit_0087, "recomp_unit_0087");
    runtime.register_function(0x08960DACu, &recomp_unit_0087, "recomp_unit_0087");
    runtime.register_function(0x08960DB4u, &recomp_unit_0087, "recomp_unit_0087");
    runtime.register_function(0x08960DCCu, &recomp_unit_0087, "recomp_unit_0087");
    runtime.register_function(0x08960DD8u, &recomp_unit_0087, "recomp_unit_0087");
    runtime.register_function(0x08960DE8u, &recomp_unit_0087, "recomp_unit_0087");
    runtime.register_function(0x08960E00u, &recomp_unit_0087, "recomp_unit_0087");
    runtime.register_function(0x08960E2Cu, &recomp_unit_0087, "recomp_unit_0087");
    runtime.register_function(0x08960E58u, &recomp_unit_0087, "recomp_unit_0087");
    runtime.register_function(0x08960E90u, &recomp_unit_0087, "recomp_unit_0087");
    runtime.register_function(0x08960EACu, &recomp_unit_0087, "recomp_unit_0087");
    runtime.register_function(0x08960EBCu, &recomp_unit_0087, "recomp_unit_0087");
    runtime.register_function(0x08960EC0u, &recomp_unit_0087, "recomp_unit_0087");
    runtime.register_function(0x08960EC8u, &recomp_unit_0087, "recomp_unit_0087");
    runtime.register_function(0x08960ED4u, &recomp_unit_0087, "recomp_unit_0087");
    runtime.register_function(0x08960EECu, &recomp_unit_0087, "recomp_unit_0087");
    runtime.register_function(0x08960EFCu, &recomp_unit_0087, "recomp_unit_0087");
    runtime.register_function(0x08960F34u, &recomp_unit_0087, "recomp_unit_0087");
    runtime.register_function(0x08960F3Cu, &recomp_unit_0087, "recomp_unit_0087");
    runtime.register_function(0x08960F54u, &recomp_unit_0087, "recomp_unit_0087");
    runtime.register_function(0x08960F60u, &recomp_unit_0087, "recomp_unit_0087");
    runtime.register_function(0x08960F70u, &recomp_unit_0087, "recomp_unit_0087");
    runtime.register_function(0x08960F88u, &recomp_unit_0087, "recomp_unit_0087");
    runtime.register_function(0x08960FB0u, &recomp_unit_0087, "recomp_unit_0087");
    runtime.register_function(0x08960FD4u, &recomp_unit_0087, "recomp_unit_0087");
    runtime.register_function(0x08960FE4u, &recomp_unit_0087, "recomp_unit_0087");
    runtime.register_function(0x08961018u, &recomp_unit_0087, "recomp_unit_0087");
    runtime.register_function(0x0896102Cu, &recomp_unit_0087, "recomp_unit_0087");
    runtime.register_function(0x08961050u, &recomp_unit_0087, "recomp_unit_0087");
    runtime.register_function(0x08961060u, &recomp_unit_0087, "recomp_unit_0087");
    runtime.register_function(0x08961090u, &recomp_unit_0087, "recomp_unit_0087");
    runtime.register_function(0x08961098u, &recomp_unit_0087, "recomp_unit_0087");
    runtime.register_function(0x089610B0u, &recomp_unit_0087, "recomp_unit_0087");
    runtime.register_function(0x089610BCu, &recomp_unit_0087, "recomp_unit_0087");
    runtime.register_function(0x089610CCu, &recomp_unit_0087, "recomp_unit_0087");
    runtime.register_function(0x089610E4u, &recomp_unit_0087, "recomp_unit_0087");
    runtime.register_function(0x0896110Cu, &recomp_unit_0087, "recomp_unit_0087");
    runtime.register_function(0x0896111Cu, &recomp_unit_0087, "recomp_unit_0087");
    runtime.register_function(0x08961128u, &recomp_unit_0087, "recomp_unit_0087");
    runtime.register_function(0x08961134u, &recomp_unit_0087, "recomp_unit_0087");
    runtime.register_function(0x08961144u, &recomp_unit_0087, "recomp_unit_0087");
    runtime.register_function(0x0896114Cu, &recomp_unit_0087, "recomp_unit_0087");
    runtime.register_function(0x08961164u, &recomp_unit_0087, "recomp_unit_0087");
    runtime.register_function(0x08961170u, &recomp_unit_0087, "recomp_unit_0087");
    runtime.register_function(0x08961180u, &recomp_unit_0087, "recomp_unit_0087");
    runtime.register_function(0x08961198u, &recomp_unit_0087, "recomp_unit_0087");
    runtime.register_function(0x089611C0u, &recomp_unit_0087, "recomp_unit_0087");
    runtime.register_function(0x089611CCu, &recomp_unit_0087, "recomp_unit_0087");
    runtime.register_function(0x089611F0u, &recomp_unit_0087, "recomp_unit_0087");
    runtime.register_function(0x08961200u, &recomp_unit_0087, "recomp_unit_0087");
    runtime.register_function(0x08961240u, &recomp_unit_0087, "recomp_unit_0087");
    runtime.register_function(0x08961248u, &recomp_unit_0087, "recomp_unit_0087");
    runtime.register_function(0x08961260u, &recomp_unit_0087, "recomp_unit_0087");
    runtime.register_function(0x08961284u, &recomp_unit_0087, "recomp_unit_0087");
    runtime.register_function(0x08961294u, &recomp_unit_0087, "recomp_unit_0087");
    runtime.register_function(0x089612ACu, &recomp_unit_0087, "recomp_unit_0087");
    runtime.register_function(0x089612BCu, &recomp_unit_0087, "recomp_unit_0087");
    runtime.register_function(0x089612D4u, &recomp_unit_0087, "recomp_unit_0087");
    runtime.register_function(0x08961314u, &recomp_unit_0087, "recomp_unit_0087");
    runtime.register_function(0x0896131Cu, &recomp_unit_0087, "recomp_unit_0087");
    runtime.register_function(0x08961340u, &recomp_unit_0087, "recomp_unit_0087");
    runtime.register_function(0x08961350u, &recomp_unit_0087, "recomp_unit_0087");
    runtime.register_function(0x08961388u, &recomp_unit_0087, "recomp_unit_0087");
    runtime.register_function(0x08961398u, &recomp_unit_0087, "recomp_unit_0087");
    runtime.register_function(0x089613C4u, &recomp_unit_0087, "recomp_unit_0087");
    runtime.register_function(0x0896141Cu, &recomp_unit_0087, "recomp_unit_0087");
    runtime.register_function(0x0896142Cu, &recomp_unit_0087, "recomp_unit_0087");
    runtime.register_function(0x08961468u, &recomp_unit_0087, "recomp_unit_0087");
    runtime.register_function(0x08961478u, &recomp_unit_0087, "recomp_unit_0087");
    runtime.register_function(0x0896147Cu, &recomp_unit_0087, "recomp_unit_0087");
    runtime.register_function(0x08961484u, &recomp_unit_0087, "recomp_unit_0087");
    runtime.register_function(0x08961490u, &recomp_unit_0087, "recomp_unit_0087");
    runtime.register_function(0x089614A0u, &recomp_unit_0087, "recomp_unit_0087");
    runtime.register_function(0x089614ACu, &recomp_unit_0087, "recomp_unit_0087");
    runtime.register_function(0x089614B8u, &recomp_unit_0087, "recomp_unit_0087");
    runtime.register_function(0x089614C8u, &recomp_unit_0087, "recomp_unit_0087");
    runtime.register_function(0x089614D0u, &recomp_unit_0087, "recomp_unit_0087");
    runtime.register_function(0x089614E8u, &recomp_unit_0087, "recomp_unit_0087");
    runtime.register_function(0x089614F4u, &recomp_unit_0087, "recomp_unit_0087");
    runtime.register_function(0x08961504u, &recomp_unit_0087, "recomp_unit_0087");
    runtime.register_function(0x0896151Cu, &recomp_unit_0087, "recomp_unit_0087");
    runtime.register_function(0x08961548u, &recomp_unit_0087, "recomp_unit_0087");
    runtime.register_function(0x08961554u, &recomp_unit_0087, "recomp_unit_0087");
    runtime.register_function(0x08961568u, &recomp_unit_0087, "recomp_unit_0087");
    runtime.register_function(0x08961570u, &recomp_unit_0087, "recomp_unit_0087");
    runtime.register_function(0x08961588u, &recomp_unit_0087, "recomp_unit_0087");
    runtime.register_function(0x08961594u, &recomp_unit_0087, "recomp_unit_0087");
    runtime.register_function(0x089615A4u, &recomp_unit_0087, "recomp_unit_0087");
    runtime.register_function(0x089615BCu, &recomp_unit_0087, "recomp_unit_0087");
    runtime.register_function(0x089615E8u, &recomp_unit_0087, "recomp_unit_0087");
    runtime.register_function(0x089615F0u, &recomp_unit_0087, "recomp_unit_0087");
    runtime.register_function(0x089615FCu, &recomp_unit_0087, "recomp_unit_0087");
    runtime.register_function(0x08961618u, &recomp_unit_0087, "recomp_unit_0087");
    runtime.register_function(0x08961620u, &recomp_unit_0087, "recomp_unit_0087");
    runtime.register_function(0x08961638u, &recomp_unit_0087, "recomp_unit_0087");
    runtime.register_function(0x08961644u, &recomp_unit_0087, "recomp_unit_0087");
    runtime.register_function(0x08961654u, &recomp_unit_0087, "recomp_unit_0087");
    runtime.register_function(0x0896166Cu, &recomp_unit_0087, "recomp_unit_0087");
    runtime.register_function(0x089616A4u, &recomp_unit_0087, "recomp_unit_0087");
    runtime.register_function(0x089616B0u, &recomp_unit_0087, "recomp_unit_0087");
    runtime.register_function(0x089616C0u, &recomp_unit_0087, "recomp_unit_0087");
    runtime.register_function(0x089616C8u, &recomp_unit_0087, "recomp_unit_0087");
    runtime.register_function(0x089616E0u, &recomp_unit_0087, "recomp_unit_0087");
    runtime.register_function(0x089616ECu, &recomp_unit_0087, "recomp_unit_0087");
    runtime.register_function(0x089616FCu, &recomp_unit_0087, "recomp_unit_0087");
    runtime.register_function(0x08961714u, &recomp_unit_0087, "recomp_unit_0087");
    runtime.register_function(0x0896173Cu, &recomp_unit_0087, "recomp_unit_0087");
    runtime.register_function(0x08961744u, &recomp_unit_0087, "recomp_unit_0087");
    runtime.register_function(0x08961750u, &recomp_unit_0087, "recomp_unit_0087");
    runtime.register_function(0x0896175Cu, &recomp_unit_0087, "recomp_unit_0087");
    runtime.register_function(0x0896176Cu, &recomp_unit_0087, "recomp_unit_0087");
    runtime.register_function(0x08961770u, &recomp_unit_0087, "recomp_unit_0087");
    runtime.register_function(0x08961778u, &recomp_unit_0087, "recomp_unit_0087");
    runtime.register_function(0x08961780u, &recomp_unit_0087, "recomp_unit_0087");
    runtime.register_function(0x08961798u, &recomp_unit_0087, "recomp_unit_0087");
    runtime.register_function(0x089617A4u, &recomp_unit_0087, "recomp_unit_0087");
    runtime.register_function(0x089617B4u, &recomp_unit_0087, "recomp_unit_0087");
    runtime.register_function(0x089617CCu, &recomp_unit_0087, "recomp_unit_0087");
    runtime.register_function(0x089617F4u, &recomp_unit_0087, "recomp_unit_0087");
    runtime.register_function(0x08961800u, &recomp_unit_0087, "recomp_unit_0087");
    runtime.register_function(0x0896181Cu, &recomp_unit_0087, "recomp_unit_0087");
    runtime.register_function(0x08961824u, &recomp_unit_0087, "recomp_unit_0087");
    runtime.register_function(0x0896183Cu, &recomp_unit_0087, "recomp_unit_0087");
    runtime.register_function(0x08961848u, &recomp_unit_0087, "recomp_unit_0087");
    runtime.register_function(0x08961858u, &recomp_unit_0087, "recomp_unit_0087");
    runtime.register_function(0x08961870u, &recomp_unit_0087, "recomp_unit_0087");
    runtime.register_function(0x0896189Cu, &recomp_unit_0087, "recomp_unit_0087");
    runtime.register_function(0x089618A8u, &recomp_unit_0087, "recomp_unit_0087");
    runtime.register_function(0x089618BCu, &recomp_unit_0087, "recomp_unit_0087");
    runtime.register_function(0x089618C8u, &recomp_unit_0087, "recomp_unit_0087");
    runtime.register_function(0x089618CCu, &recomp_unit_0087, "recomp_unit_0087");
    runtime.register_function(0x089618DCu, &recomp_unit_0087, "recomp_unit_0087");
    runtime.register_function(0x089618E4u, &recomp_unit_0087, "recomp_unit_0087");
    runtime.register_function(0x089618FCu, &recomp_unit_0087, "recomp_unit_0087");
    runtime.register_function(0x08961908u, &recomp_unit_0087, "recomp_unit_0087");
    runtime.register_function(0x08961918u, &recomp_unit_0087, "recomp_unit_0087");
    runtime.register_function(0x08961930u, &recomp_unit_0087, "recomp_unit_0087");
    runtime.register_function(0x08961958u, &recomp_unit_0087, "recomp_unit_0087");
    runtime.register_function(0x08961964u, &recomp_unit_0087, "recomp_unit_0087");
    runtime.register_function(0x08961970u, &recomp_unit_0087, "recomp_unit_0087");
    runtime.register_function(0x08961978u, &recomp_unit_0087, "recomp_unit_0087");
    runtime.register_function(0x08961990u, &recomp_unit_0087, "recomp_unit_0087");
    runtime.register_function(0x0896199Cu, &recomp_unit_0087, "recomp_unit_0087");
    runtime.register_function(0x089619ACu, &recomp_unit_0087, "recomp_unit_0087");
    runtime.register_function(0x089619C4u, &recomp_unit_0087, "recomp_unit_0087");
    runtime.register_function(0x089619F0u, &recomp_unit_0087, "recomp_unit_0087");
    runtime.register_function(0x089619FCu, &recomp_unit_0087, "recomp_unit_0087");
    runtime.register_function(0x08961A1Cu, &recomp_unit_0087, "recomp_unit_0087");
    runtime.register_function(0x08961A24u, &recomp_unit_0087, "recomp_unit_0087");
    runtime.register_function(0x08961A3Cu, &recomp_unit_0087, "recomp_unit_0087");
    runtime.register_function(0x08961A48u, &recomp_unit_0087, "recomp_unit_0087");
    runtime.register_function(0x08961A58u, &recomp_unit_0087, "recomp_unit_0087");
    runtime.register_function(0x08961A70u, &recomp_unit_0087, "recomp_unit_0087");
    runtime.register_function(0x08961A9Cu, &recomp_unit_0087, "recomp_unit_0087");
    runtime.register_function(0x08961AC4u, &recomp_unit_0087, "recomp_unit_0087");
    runtime.register_function(0x08961AECu, &recomp_unit_0087, "recomp_unit_0087");
    runtime.register_function(0x08961AF8u, &recomp_unit_0087, "recomp_unit_0087");
    runtime.register_function(0x08961B08u, &recomp_unit_0087, "recomp_unit_0087");
    runtime.register_function(0x08961B10u, &recomp_unit_0087, "recomp_unit_0087");
    runtime.register_function(0x08961B28u, &recomp_unit_0087, "recomp_unit_0087");
    runtime.register_function(0x08961B34u, &recomp_unit_0087, "recomp_unit_0087");
    runtime.register_function(0x08961B44u, &recomp_unit_0087, "recomp_unit_0087");
    runtime.register_function(0x08961B5Cu, &recomp_unit_0087, "recomp_unit_0087");
    runtime.register_function(0x08961B84u, &recomp_unit_0087, "recomp_unit_0087");
    runtime.register_function(0x08961BA4u, &recomp_unit_0087, "recomp_unit_0087");
    runtime.register_function(0x08961BECu, &recomp_unit_0087, "recomp_unit_0087");
    runtime.register_function(0x08961BF8u, &recomp_unit_0087, "recomp_unit_0087");
    runtime.register_function(0x08961C00u, &recomp_unit_0087, "recomp_unit_0087");
    runtime.register_function(0x08961C08u, &recomp_unit_0087, "recomp_unit_0087");
    runtime.register_function(0x08961C1Cu, &recomp_unit_0087, "recomp_unit_0087");
    runtime.register_function(0x08961C24u, &recomp_unit_0087, "recomp_unit_0087");
    runtime.register_function(0x08961C38u, &recomp_unit_0087, "recomp_unit_0087");
    runtime.register_function(0x08961C44u, &recomp_unit_0087, "recomp_unit_0087");
    runtime.register_function(0x08961C5Cu, &recomp_unit_0087, "recomp_unit_0087");
    runtime.register_function(0x08961C74u, &recomp_unit_0087, "recomp_unit_0087");
    runtime.register_function(0x08961C98u, &recomp_unit_0087, "recomp_unit_0087");
    runtime.register_function(0x08961CA4u, &recomp_unit_0087, "recomp_unit_0087");
    runtime.register_function(0x08961CC0u, &recomp_unit_0087, "recomp_unit_0087");
    runtime.register_function(0x08961CC8u, &recomp_unit_0087, "recomp_unit_0087");
    runtime.register_function(0x08961CCCu, &recomp_unit_0087, "recomp_unit_0087");
    runtime.register_function(0x08961CD8u, &recomp_unit_0087, "recomp_unit_0087");
    runtime.register_function(0x08961CE0u, &recomp_unit_0087, "recomp_unit_0087");
    runtime.register_function(0x08961CF8u, &recomp_unit_0087, "recomp_unit_0087");
    runtime.register_function(0x08961D04u, &recomp_unit_0087, "recomp_unit_0087");
    runtime.register_function(0x08961D1Cu, &recomp_unit_0087, "recomp_unit_0087");
    runtime.register_function(0x08961D34u, &recomp_unit_0087, "recomp_unit_0087");
    runtime.register_function(0x08961D58u, &recomp_unit_0087, "recomp_unit_0087");
    runtime.register_function(0x08961D70u, &recomp_unit_0087, "recomp_unit_0087");
    runtime.register_function(0x08961D88u, &recomp_unit_0087, "recomp_unit_0087");
    runtime.register_function(0x08961D94u, &recomp_unit_0087, "recomp_unit_0087");
    runtime.register_function(0x08961D9Cu, &recomp_unit_0087, "recomp_unit_0087");
    runtime.register_function(0x08961DA4u, &recomp_unit_0087, "recomp_unit_0087");
    runtime.register_function(0x08961DBCu, &recomp_unit_0087, "recomp_unit_0087");
    runtime.register_function(0x08961DC8u, &recomp_unit_0087, "recomp_unit_0087");
    runtime.register_function(0x08961DE0u, &recomp_unit_0087, "recomp_unit_0087");
    runtime.register_function(0x08961DF8u, &recomp_unit_0087, "recomp_unit_0087");
    runtime.register_function(0x08961E1Cu, &recomp_unit_0087, "recomp_unit_0087");
    runtime.register_function(0x08961E24u, &recomp_unit_0087, "recomp_unit_0087");
    runtime.register_function(0x08961E30u, &recomp_unit_0087, "recomp_unit_0087");
    runtime.register_function(0x08961E3Cu, &recomp_unit_0087, "recomp_unit_0087");
    runtime.register_function(0x08961E4Cu, &recomp_unit_0087, "recomp_unit_0087");
    runtime.register_function(0x08961E58u, &recomp_unit_0087, "recomp_unit_0087");
    runtime.register_function(0x08961E74u, &recomp_unit_0087, "recomp_unit_0087");
    runtime.register_function(0x08961E88u, &recomp_unit_0087, "recomp_unit_0087");
    runtime.register_function(0x08961EA8u, &recomp_unit_0087, "recomp_unit_0087");
    runtime.register_function(0x08961EB0u, &recomp_unit_0087, "recomp_unit_0087");
    runtime.register_function(0x08961EB8u, &recomp_unit_0087, "recomp_unit_0087");
    runtime.register_function(0x08961ED0u, &recomp_unit_0087, "recomp_unit_0087");
    runtime.register_function(0x08961EECu, &recomp_unit_0087, "recomp_unit_0087");
    runtime.register_function(0x08961EFCu, &recomp_unit_0087, "recomp_unit_0087");
    runtime.register_function(0x08961F04u, &recomp_unit_0087, "recomp_unit_0087");
    runtime.register_function(0x08961F0Cu, &recomp_unit_0087, "recomp_unit_0087");
    runtime.register_function(0x08961F1Cu, &recomp_unit_0087, "recomp_unit_0087");
    runtime.register_function(0x08961F2Cu, &recomp_unit_0087, "recomp_unit_0087");
    runtime.register_function(0x08961F34u, &recomp_unit_0087, "recomp_unit_0087");
    runtime.register_function(0x08961F4Cu, &recomp_unit_0087, "recomp_unit_0087");
    runtime.register_function(0x08961F58u, &recomp_unit_0087, "recomp_unit_0087");
    runtime.register_function(0x08961F70u, &recomp_unit_0087, "recomp_unit_0087");
    runtime.register_function(0x08961F88u, &recomp_unit_0087, "recomp_unit_0087");
    runtime.register_function(0x08961FB0u, &recomp_unit_0087, "recomp_unit_0087");
    runtime.register_function(0x08961FB8u, &recomp_unit_0087, "recomp_unit_0087");
    runtime.register_function(0x08961FC8u, &recomp_unit_0087, "recomp_unit_0087");
    runtime.register_function(0x08961FF4u, &recomp_unit_0087, "recomp_unit_0087");
    runtime.register_function(0x08962004u, &recomp_unit_0087, "recomp_unit_0087");
    runtime.register_function(0x0896203Cu, &recomp_unit_0087, "recomp_unit_0087");
    runtime.register_function(0x08962048u, &recomp_unit_0087, "recomp_unit_0087");
    runtime.register_function(0x08962058u, &recomp_unit_0087, "recomp_unit_0087");
    runtime.register_function(0x08962078u, &recomp_unit_0087, "recomp_unit_0087");
    runtime.register_function(0x08962080u, &recomp_unit_0087, "recomp_unit_0087");
    runtime.register_function(0x08962098u, &recomp_unit_0087, "recomp_unit_0087");
    runtime.register_function(0x089620A4u, &recomp_unit_0087, "recomp_unit_0087");
    runtime.register_function(0x089620B4u, &recomp_unit_0087, "recomp_unit_0087");
    runtime.register_function(0x089620CCu, &recomp_unit_0087, "recomp_unit_0087");
    runtime.register_function(0x089620F4u, &recomp_unit_0087, "recomp_unit_0087");
    runtime.register_function(0x08962108u, &recomp_unit_0087, "recomp_unit_0087");
    runtime.register_function(0x08962114u, &recomp_unit_0087, "recomp_unit_0087");
    runtime.register_function(0x08962118u, &recomp_unit_0087, "recomp_unit_0087");
    runtime.register_function(0x08962128u, &recomp_unit_0087, "recomp_unit_0087");
    runtime.register_function(0x08962134u, &recomp_unit_0087, "recomp_unit_0087");
    runtime.register_function(0x08962140u, &recomp_unit_0087, "recomp_unit_0087");
    runtime.register_function(0x08962150u, &recomp_unit_0087, "recomp_unit_0087");
    runtime.register_function(0x0896215Cu, &recomp_unit_0087, "recomp_unit_0087");
    runtime.register_function(0x08962178u, &recomp_unit_0087, "recomp_unit_0087");
    runtime.register_function(0x0896218Cu, &recomp_unit_0087, "recomp_unit_0087");
    runtime.register_function(0x089621ACu, &recomp_unit_0087, "recomp_unit_0087");
    runtime.register_function(0x089621B4u, &recomp_unit_0087, "recomp_unit_0087");
    runtime.register_function(0x089621BCu, &recomp_unit_0087, "recomp_unit_0087");
    runtime.register_function(0x089621D4u, &recomp_unit_0087, "recomp_unit_0087");
    runtime.register_function(0x089621F0u, &recomp_unit_0087, "recomp_unit_0087");
    runtime.register_function(0x08962200u, &recomp_unit_0087, "recomp_unit_0087");
    runtime.register_function(0x08962208u, &recomp_unit_0087, "recomp_unit_0087");
    runtime.register_function(0x08962210u, &recomp_unit_0087, "recomp_unit_0087");
    runtime.register_function(0x08962220u, &recomp_unit_0087, "recomp_unit_0087");
    runtime.register_function(0x08962230u, &recomp_unit_0087, "recomp_unit_0087");
    runtime.register_function(0x08962238u, &recomp_unit_0087, "recomp_unit_0087");
    runtime.register_function(0x08962250u, &recomp_unit_0087, "recomp_unit_0087");
    runtime.register_function(0x0896225Cu, &recomp_unit_0087, "recomp_unit_0087");
    runtime.register_function(0x0896226Cu, &recomp_unit_0087, "recomp_unit_0087");
    runtime.register_function(0x08962284u, &recomp_unit_0087, "recomp_unit_0087");
    runtime.register_function(0x089622ACu, &recomp_unit_0087, "recomp_unit_0087");
    runtime.register_function(0x089622B0u, &recomp_unit_0087, "recomp_unit_0087");
    runtime.register_function(0x089622B8u, &recomp_unit_0087, "recomp_unit_0087");
    runtime.register_function(0x089622BCu, &recomp_unit_0087, "recomp_unit_0087");
    runtime.register_function(0x089622C8u, &recomp_unit_0087, "recomp_unit_0087");
    runtime.register_function(0x089622D0u, &recomp_unit_0087, "recomp_unit_0087");
    runtime.register_function(0x089622DCu, &recomp_unit_0087, "recomp_unit_0087");
    runtime.register_function(0x089622ECu, &recomp_unit_0087, "recomp_unit_0087");
    runtime.register_function(0x089622F4u, &recomp_unit_0087, "recomp_unit_0087");
    runtime.register_function(0x0896230Cu, &recomp_unit_0087, "recomp_unit_0087");
    runtime.register_function(0x08962318u, &recomp_unit_0087, "recomp_unit_0087");
    runtime.register_function(0x08962330u, &recomp_unit_0087, "recomp_unit_0087");
    runtime.register_function(0x08962348u, &recomp_unit_0087, "recomp_unit_0087");
    runtime.register_function(0x0896236Cu, &recomp_unit_0087, "recomp_unit_0087");
    runtime.register_function(0x08962374u, &recomp_unit_0087, "recomp_unit_0087");
    runtime.register_function(0x08962384u, &recomp_unit_0087, "recomp_unit_0087");
    runtime.register_function(0x08962390u, &recomp_unit_0087, "recomp_unit_0087");
    runtime.register_function(0x08962398u, &recomp_unit_0087, "recomp_unit_0087");
    runtime.register_function(0x089623A0u, &recomp_unit_0087, "recomp_unit_0087");
    runtime.register_function(0x089623B8u, &recomp_unit_0087, "recomp_unit_0087");
    runtime.register_function(0x089623C4u, &recomp_unit_0087, "recomp_unit_0087");
    runtime.register_function(0x089623DCu, &recomp_unit_0087, "recomp_unit_0087");
    runtime.register_function(0x089623F4u, &recomp_unit_0087, "recomp_unit_0087");
    runtime.register_function(0x08962418u, &recomp_unit_0087, "recomp_unit_0087");
    runtime.register_function(0x08962424u, &recomp_unit_0087, "recomp_unit_0087");
    runtime.register_function(0x08962444u, &recomp_unit_0087, "recomp_unit_0087");
    runtime.register_function(0x08962478u, &recomp_unit_0087, "recomp_unit_0087");
    runtime.register_function(0x08962484u, &recomp_unit_0087, "recomp_unit_0087");
    runtime.register_function(0x08962488u, &recomp_unit_0087, "recomp_unit_0087");
    runtime.register_function(0x089624A0u, &recomp_unit_0087, "recomp_unit_0087");
    runtime.register_function(0x089624ACu, &recomp_unit_0087, "recomp_unit_0087");
    runtime.register_function(0x089624B4u, &recomp_unit_0087, "recomp_unit_0087");
    runtime.register_function(0x089624BCu, &recomp_unit_0087, "recomp_unit_0087");
    runtime.register_function(0x089624D4u, &recomp_unit_0087, "recomp_unit_0087");
    runtime.register_function(0x089624E0u, &recomp_unit_0087, "recomp_unit_0087");
    runtime.register_function(0x089624F8u, &recomp_unit_0087, "recomp_unit_0087");
    runtime.register_function(0x08962510u, &recomp_unit_0087, "recomp_unit_0087");
    runtime.register_function(0x08962534u, &recomp_unit_0087, "recomp_unit_0087");
    runtime.register_function(0x0896253Cu, &recomp_unit_0087, "recomp_unit_0087");
    runtime.register_function(0x08962544u, &recomp_unit_0087, "recomp_unit_0087");
    runtime.register_function(0x08962550u, &recomp_unit_0087, "recomp_unit_0087");
    runtime.register_function(0x08962558u, &recomp_unit_0087, "recomp_unit_0087");
    runtime.register_function(0x08962560u, &recomp_unit_0087, "recomp_unit_0087");
    runtime.register_function(0x08962578u, &recomp_unit_0087, "recomp_unit_0087");
    runtime.register_function(0x08962584u, &recomp_unit_0087, "recomp_unit_0087");
    runtime.register_function(0x0896259Cu, &recomp_unit_0087, "recomp_unit_0087");
    runtime.register_function(0x089625B4u, &recomp_unit_0087, "recomp_unit_0087");
    runtime.register_function(0x089625D8u, &recomp_unit_0087, "recomp_unit_0087");
    runtime.register_function(0x089625ECu, &recomp_unit_0087, "recomp_unit_0087");
    runtime.register_function(0x089625F8u, &recomp_unit_0087, "recomp_unit_0087");
    runtime.register_function(0x089625FCu, &recomp_unit_0087, "recomp_unit_0087");
    runtime.register_function(0x0896260Cu, &recomp_unit_0087, "recomp_unit_0087");
    runtime.register_function(0x0896261Cu, &recomp_unit_0087, "recomp_unit_0087");
    runtime.register_function(0x08962640u, &recomp_unit_0087, "recomp_unit_0087");
    runtime.register_function(0x08962650u, &recomp_unit_0087, "recomp_unit_0087");
    runtime.register_function(0x08962684u, &recomp_unit_0087, "recomp_unit_0087");
    runtime.register_function(0x08962690u, &recomp_unit_0087, "recomp_unit_0087");
    runtime.register_function(0x0896269Cu, &recomp_unit_0087, "recomp_unit_0087");
    runtime.register_function(0x089626B0u, &recomp_unit_0087, "recomp_unit_0087");
    runtime.register_function(0x089626BCu, &recomp_unit_0087, "recomp_unit_0087");
    runtime.register_function(0x08962728u, &recomp_unit_0087, "recomp_unit_0087");
    runtime.register_function(0x08962734u, &recomp_unit_0087, "recomp_unit_0087");
    runtime.register_function(0x0896273Cu, &recomp_unit_0087, "recomp_unit_0087");
    runtime.register_function(0x08962744u, &recomp_unit_0087, "recomp_unit_0087");
    runtime.register_function(0x0896275Cu, &recomp_unit_0087, "recomp_unit_0087");
    runtime.register_function(0x08962768u, &recomp_unit_0087, "recomp_unit_0087");
    runtime.register_function(0x08962778u, &recomp_unit_0087, "recomp_unit_0087");
    runtime.register_function(0x08962790u, &recomp_unit_0087, "recomp_unit_0087");
    runtime.register_function(0x089627B8u, &recomp_unit_0087, "recomp_unit_0087");
    runtime.register_function(0x089627C4u, &recomp_unit_0087, "recomp_unit_0087");
    runtime.register_function(0x089627D0u, &recomp_unit_0087, "recomp_unit_0087");
    runtime.register_function(0x089627E8u, &recomp_unit_0087, "recomp_unit_0087");
    runtime.register_function(0x089627F4u, &recomp_unit_0087, "recomp_unit_0087");
    runtime.register_function(0x089627F8u, &recomp_unit_0087, "recomp_unit_0087");
    runtime.register_function(0x08962808u, &recomp_unit_0087, "recomp_unit_0087");
    runtime.register_function(0x08962810u, &recomp_unit_0087, "recomp_unit_0087");
    runtime.register_function(0x0896281Cu, &recomp_unit_0087, "recomp_unit_0087");
    runtime.register_function(0x08962820u, &recomp_unit_0087, "recomp_unit_0087");
    runtime.register_function(0x0896284Cu, &recomp_unit_0087, "recomp_unit_0087");
    runtime.register_function(0x0896285Cu, &recomp_unit_0087, "recomp_unit_0087");
    runtime.register_function(0x08962898u, &recomp_unit_0087, "recomp_unit_0087");
    runtime.register_function(0x089628A8u, &recomp_unit_0087, "recomp_unit_0087");
    runtime.register_function(0x089628D8u, &recomp_unit_0087, "recomp_unit_0087");
    runtime.register_function(0x089628E0u, &recomp_unit_0087, "recomp_unit_0087");
    runtime.register_function(0x089628F8u, &recomp_unit_0087, "recomp_unit_0087");
    runtime.register_function(0x08962904u, &recomp_unit_0087, "recomp_unit_0087");
    runtime.register_function(0x08962914u, &recomp_unit_0087, "recomp_unit_0087");
    runtime.register_function(0x0896292Cu, &recomp_unit_0087, "recomp_unit_0087");
    runtime.register_function(0x08962954u, &recomp_unit_0087, "recomp_unit_0087");
    runtime.register_function(0x08962978u, &recomp_unit_0087, "recomp_unit_0087");
    runtime.register_function(0x08962988u, &recomp_unit_0087, "recomp_unit_0087");
    runtime.register_function(0x089629B8u, &recomp_unit_0087, "recomp_unit_0087");
    runtime.register_function(0x089629C8u, &recomp_unit_0087, "recomp_unit_0087");
    runtime.register_function(0x089629ECu, &recomp_unit_0087, "recomp_unit_0087");
    runtime.register_function(0x089629FCu, &recomp_unit_0087, "recomp_unit_0087");
    runtime.register_function(0x08962A24u, &recomp_unit_0087, "recomp_unit_0087");
    runtime.register_function(0x08962A30u, &recomp_unit_0087, "recomp_unit_0087");
    runtime.register_function(0x08962A5Cu, &recomp_unit_0087, "recomp_unit_0087");
    runtime.register_function(0x08962A6Cu, &recomp_unit_0087, "recomp_unit_0087");
    runtime.register_function(0x08962AA8u, &recomp_unit_0087, "recomp_unit_0087");
    runtime.register_function(0x08962AB4u, &recomp_unit_0087, "recomp_unit_0087");
    runtime.register_function(0x08962AC4u, &recomp_unit_0087, "recomp_unit_0087");
    runtime.register_function(0x08962AF0u, &recomp_unit_0087, "recomp_unit_0087");
    runtime.register_function(0x08962B04u, &recomp_unit_0087, "recomp_unit_0087");
    runtime.register_function(0x08962B10u, &recomp_unit_0087, "recomp_unit_0087");
    runtime.register_function(0x08962B14u, &recomp_unit_0087, "recomp_unit_0087");
    runtime.register_function(0x08962B1Cu, &recomp_unit_0087, "recomp_unit_0087");
    runtime.register_function(0x08962B24u, &recomp_unit_0087, "recomp_unit_0087");
    runtime.register_function(0x08962B28u, &recomp_unit_0087, "recomp_unit_0087");
    runtime.register_function(0x08962B34u, &recomp_unit_0087, "recomp_unit_0087");
    runtime.register_function(0x08962B40u, &recomp_unit_0087, "recomp_unit_0087");
    runtime.register_function(0x08962B50u, &recomp_unit_0087, "recomp_unit_0087");
    runtime.register_function(0x08962B84u, &recomp_unit_0087, "recomp_unit_0087");
    runtime.register_function(0x08962BCCu, &recomp_unit_0087, "recomp_unit_0087");
    runtime.register_function(0x08962BD8u, &recomp_unit_0087, "recomp_unit_0087");
    runtime.register_function(0x08962BDCu, &recomp_unit_0087, "recomp_unit_0087");
    runtime.register_function(0x08962BECu, &recomp_unit_0087, "recomp_unit_0087");
    runtime.register_function(0x08962C08u, &recomp_unit_0087, "recomp_unit_0087");
    runtime.register_function(0x08962C20u, &recomp_unit_0087, "recomp_unit_0087");
    runtime.register_function(0x08962C28u, &recomp_unit_0087, "recomp_unit_0087");
    runtime.register_function(0x08962C38u, &recomp_unit_0087, "recomp_unit_0087");
    runtime.register_function(0x08962C48u, &recomp_unit_0087, "recomp_unit_0087");
    runtime.register_function(0x08962C50u, &recomp_unit_0087, "recomp_unit_0087");
    runtime.register_function(0x08962C58u, &recomp_unit_0087, "recomp_unit_0087");
    runtime.register_function(0x08962C60u, &recomp_unit_0087, "recomp_unit_0087");
    runtime.register_function(0x08962C74u, &recomp_unit_0087, "recomp_unit_0087");
    runtime.register_function(0x08962C8Cu, &recomp_unit_0087, "recomp_unit_0087");
    runtime.register_function(0x08962CA0u, &recomp_unit_0087, "recomp_unit_0087");
    runtime.register_function(0x08962CA8u, &recomp_unit_0087, "recomp_unit_0087");
    runtime.register_function(0x08962CB4u, &recomp_unit_0087, "recomp_unit_0087");
    runtime.register_function(0x08962CB8u, &recomp_unit_0087, "recomp_unit_0087");
    runtime.register_function(0x08962CCCu, &recomp_unit_0087, "recomp_unit_0087");
    runtime.register_function(0x08962CD4u, &recomp_unit_0087, "recomp_unit_0087");
    runtime.register_function(0x08962CD8u, &recomp_unit_0087, "recomp_unit_0087");
    runtime.register_function(0x08962CE0u, &recomp_unit_0087, "recomp_unit_0087");
    runtime.register_function(0x08962CE8u, &recomp_unit_0087, "recomp_unit_0087");
    runtime.register_function(0x08962CF0u, &recomp_unit_0087, "recomp_unit_0087");
    runtime.register_function(0x08962D04u, &recomp_unit_0087, "recomp_unit_0087");
    runtime.register_function(0x08962D10u, &recomp_unit_0087, "recomp_unit_0087");
    runtime.register_function(0x08962D14u, &recomp_unit_0087, "recomp_unit_0087");
    runtime.register_function(0x08962D34u, &recomp_unit_0087, "recomp_unit_0087");
    runtime.register_function(0x08962D3Cu, &recomp_unit_0087, "recomp_unit_0087");
    runtime.register_function(0x08962D4Cu, &recomp_unit_0087, "recomp_unit_0087");
    runtime.register_function(0x08962D58u, &recomp_unit_0087, "recomp_unit_0087");
    runtime.register_function(0x08962D70u, &recomp_unit_0087, "recomp_unit_0087");
    runtime.register_function(0x08962D80u, &recomp_unit_0087, "recomp_unit_0087");
    runtime.register_function(0x08962D88u, &recomp_unit_0087, "recomp_unit_0087");
    runtime.register_function(0x08962DCCu, &recomp_unit_0087, "recomp_unit_0087");
    runtime.register_function(0x08962DD4u, &recomp_unit_0087, "recomp_unit_0087");
    runtime.register_function(0x08962DE4u, &recomp_unit_0087, "recomp_unit_0087");
    runtime.register_function(0x08962DE8u, &recomp_unit_0087, "recomp_unit_0087");
    runtime.register_function(0x08962E10u, &recomp_unit_0087, "recomp_unit_0087");
    runtime.register_function(0x08962E4Cu, &recomp_unit_0087, "recomp_unit_0087");
    runtime.register_function(0x08962E60u, &recomp_unit_0087, "recomp_unit_0087");
    runtime.register_function(0x08962E6Cu, &recomp_unit_0087, "recomp_unit_0087");
    runtime.register_function(0x08962E78u, &recomp_unit_0087, "recomp_unit_0087");
    runtime.register_function(0x08962E84u, &recomp_unit_0087, "recomp_unit_0087");
    runtime.register_function(0x08962E8Cu, &recomp_unit_0087, "recomp_unit_0087");
    runtime.register_function(0x08962E94u, &recomp_unit_0087, "recomp_unit_0087");
    runtime.register_function(0x08962EA0u, &recomp_unit_0087, "recomp_unit_0087");
    runtime.register_function(0x08962EACu, &recomp_unit_0087, "recomp_unit_0087");
    runtime.register_function(0x08962EB8u, &recomp_unit_0087, "recomp_unit_0087");
    runtime.register_function(0x08962EE4u, &recomp_unit_0087, "recomp_unit_0087");
    runtime.register_function(0x08962EECu, &recomp_unit_0087, "recomp_unit_0087");
    runtime.register_function(0x08962EF0u, &recomp_unit_0087, "recomp_unit_0087");
    runtime.register_function(0x08962EF4u, &recomp_unit_0087, "recomp_unit_0087");
    runtime.register_function(0x08962F04u, &recomp_unit_0087, "recomp_unit_0087");
    runtime.register_function(0x08962F0Cu, &recomp_unit_0087, "recomp_unit_0087");
    runtime.register_function(0x08962F18u, &recomp_unit_0087, "recomp_unit_0087");
    runtime.register_function(0x08962F24u, &recomp_unit_0087, "recomp_unit_0087");
    runtime.register_function(0x08962F40u, &recomp_unit_0087, "recomp_unit_0087");
    runtime.register_function(0x08962F48u, &recomp_unit_0087, "recomp_unit_0087");
    runtime.register_function(0x08962F4Cu, &recomp_unit_0087, "recomp_unit_0087");
    runtime.register_function(0x08962F60u, &recomp_unit_0087, "recomp_unit_0087");
    runtime.register_function(0x08962F64u, &recomp_unit_0087, "recomp_unit_0087");
    runtime.register_function(0x08962F8Cu, &recomp_unit_0087, "recomp_unit_0087");
    runtime.register_function(0x08962FD0u, &recomp_unit_0087, "recomp_unit_0087");
    runtime.register_function(0x08962FE0u, &recomp_unit_0087, "recomp_unit_0087");
    runtime.register_function(0x08962FECu, &recomp_unit_0087, "recomp_unit_0087");
    runtime.register_function(0x08962FF8u, &recomp_unit_0087, "recomp_unit_0087");
    runtime.register_function(0x08963004u, &recomp_unit_0087, "recomp_unit_0087");
    runtime.register_function(0x08963010u, &recomp_unit_0087, "recomp_unit_0087");
    runtime.register_function(0x0896301Cu, &recomp_unit_0087, "recomp_unit_0087");
    runtime.register_function(0x08963028u, &recomp_unit_0087, "recomp_unit_0087");
    runtime.register_function(0x08963038u, &recomp_unit_0087, "recomp_unit_0087");
    runtime.register_function(0x08963044u, &recomp_unit_0087, "recomp_unit_0087");
    runtime.register_function(0x08963070u, &recomp_unit_0087, "recomp_unit_0087");
    runtime.register_function(0x08963080u, &recomp_unit_0087, "recomp_unit_0087");
    runtime.register_function(0x089630B8u, &recomp_unit_0087, "recomp_unit_0087");
    runtime.register_function(0x089630C8u, &recomp_unit_0087, "recomp_unit_0087");
    runtime.register_function(0x089630D4u, &recomp_unit_0087, "recomp_unit_0087");
    runtime.register_function(0x089630E8u, &recomp_unit_0087, "recomp_unit_0087");
    runtime.register_function(0x089630FCu, &recomp_unit_0087, "recomp_unit_0087");
    runtime.register_function(0x08963118u, &recomp_unit_0087, "recomp_unit_0087");
    runtime.register_function(0x08963124u, &recomp_unit_0087, "recomp_unit_0087");
    runtime.register_function(0x08963138u, &recomp_unit_0087, "recomp_unit_0087");
    runtime.register_function(0x08963144u, &recomp_unit_0087, "recomp_unit_0087");
    runtime.register_function(0x08963150u, &recomp_unit_0087, "recomp_unit_0087");
    runtime.register_function(0x0896315Cu, &recomp_unit_0087, "recomp_unit_0087");
    runtime.register_function(0x08963164u, &recomp_unit_0087, "recomp_unit_0087");
    runtime.register_function(0x0896316Cu, &recomp_unit_0087, "recomp_unit_0087");
    runtime.register_function(0x08963178u, &recomp_unit_0087, "recomp_unit_0087");
    runtime.register_function(0x0896317Cu, &recomp_unit_0087, "recomp_unit_0087");
    runtime.register_function(0x08963198u, &recomp_unit_0087, "recomp_unit_0087");
    runtime.register_function(0x089631A0u, &recomp_unit_0087, "recomp_unit_0087");
    runtime.register_function(0x089631B0u, &recomp_unit_0087, "recomp_unit_0087");
    runtime.register_function(0x089631C0u, &recomp_unit_0087, "recomp_unit_0087");
    runtime.register_function(0x089631C8u, &recomp_unit_0087, "recomp_unit_0087");
    runtime.register_function(0x089631D4u, &recomp_unit_0087, "recomp_unit_0087");
    runtime.register_function(0x089631D8u, &recomp_unit_0087, "recomp_unit_0087");
    runtime.register_function(0x089631E4u, &recomp_unit_0087, "recomp_unit_0087");
    runtime.register_function(0x089631ECu, &recomp_unit_0087, "recomp_unit_0087");
    runtime.register_function(0x089631F4u, &recomp_unit_0087, "recomp_unit_0087");
    runtime.register_function(0x08963200u, &recomp_unit_0087, "recomp_unit_0087");
    runtime.register_function(0x08963204u, &recomp_unit_0087, "recomp_unit_0087");
    runtime.register_function(0x0896322Cu, &recomp_unit_0087, "recomp_unit_0087");
    runtime.register_function(0x08963244u, &recomp_unit_0087, "recomp_unit_0087");
    runtime.register_function(0x08963264u, &recomp_unit_0087, "recomp_unit_0087");
    runtime.register_function(0x08963270u, &recomp_unit_0087, "recomp_unit_0087");
    runtime.register_function(0x08963278u, &recomp_unit_0087, "recomp_unit_0087");
    runtime.register_function(0x0896328Cu, &recomp_unit_0087, "recomp_unit_0087");
    runtime.register_function(0x089632A4u, &recomp_unit_0087, "recomp_unit_0087");
    runtime.register_function(0x089632BCu, &recomp_unit_0087, "recomp_unit_0087");
    runtime.register_function(0x089632C4u, &recomp_unit_0087, "recomp_unit_0087");
    runtime.register_function(0x089632D8u, &recomp_unit_0087, "recomp_unit_0087");
    runtime.register_function(0x089632FCu, &recomp_unit_0087, "recomp_unit_0087");
    runtime.register_function(0x0896331Cu, &recomp_unit_0087, "recomp_unit_0087");
    runtime.register_function(0x08963338u, &recomp_unit_0087, "recomp_unit_0087");
    runtime.register_function(0x08963340u, &recomp_unit_0087, "recomp_unit_0087");
    runtime.register_function(0x08963354u, &recomp_unit_0087, "recomp_unit_0087");
    runtime.register_function(0x0896336Cu, &recomp_unit_0087, "recomp_unit_0087");
    runtime.register_function(0x08963388u, &recomp_unit_0087, "recomp_unit_0087");
    runtime.register_function(0x0896339Cu, &recomp_unit_0087, "recomp_unit_0087");
    runtime.register_function(0x089633B4u, &recomp_unit_0087, "recomp_unit_0087");
    runtime.register_function(0x089633BCu, &recomp_unit_0087, "recomp_unit_0087");
    runtime.register_function(0x089633D0u, &recomp_unit_0087, "recomp_unit_0087");
    runtime.register_function(0x089633ECu, &recomp_unit_0087, "recomp_unit_0087");
    runtime.register_function(0x08963400u, &recomp_unit_0087, "recomp_unit_0087");
    runtime.register_function(0x08963418u, &recomp_unit_0087, "recomp_unit_0087");
    runtime.register_function(0x08963430u, &recomp_unit_0087, "recomp_unit_0087");
    runtime.register_function(0x08963438u, &recomp_unit_0087, "recomp_unit_0087");
    runtime.register_function(0x08963450u, &recomp_unit_0087, "recomp_unit_0087");
    runtime.register_function(0x08963480u, &recomp_unit_0087, "recomp_unit_0087");
    runtime.register_function(0x08963488u, &recomp_unit_0087, "recomp_unit_0087");
    runtime.register_function(0x08963494u, &recomp_unit_0087, "recomp_unit_0087");
    runtime.register_function(0x089634A0u, &recomp_unit_0087, "recomp_unit_0087");
    runtime.register_function(0x089634B4u, &recomp_unit_0087, "recomp_unit_0087");
    runtime.register_function(0x089634CCu, &recomp_unit_0087, "recomp_unit_0087");
    runtime.register_function(0x089634D8u, &recomp_unit_0087, "recomp_unit_0087");
    runtime.register_function(0x089634E0u, &recomp_unit_0087, "recomp_unit_0087");
    runtime.register_function(0x089634F4u, &recomp_unit_0087, "recomp_unit_0087");
    runtime.register_function(0x089634FCu, &recomp_unit_0087, "recomp_unit_0087");
    runtime.register_function(0x08963514u, &recomp_unit_0087, "recomp_unit_0087");
    runtime.register_function(0x08963520u, &recomp_unit_0087, "recomp_unit_0087");
    runtime.register_function(0x08963528u, &recomp_unit_0087, "recomp_unit_0087");
    runtime.register_function(0x08963534u, &recomp_unit_0087, "recomp_unit_0087");
    runtime.register_function(0x08963578u, &recomp_unit_0087, "recomp_unit_0087");
    runtime.register_function(0x08963588u, &recomp_unit_0087, "recomp_unit_0087");
    runtime.register_function(0x089635A4u, &recomp_unit_0087, "recomp_unit_0087");
    runtime.register_function(0x089635BCu, &recomp_unit_0087, "recomp_unit_0087");
    runtime.register_function(0x089635C0u, &recomp_unit_0087, "recomp_unit_0087");
    runtime.register_function(0x089635D0u, &recomp_unit_0087, "recomp_unit_0087");
    runtime.register_function(0x089635F4u, &recomp_unit_0087, "recomp_unit_0087");
    runtime.register_function(0x08963618u, &recomp_unit_0087, "recomp_unit_0087");
    runtime.register_function(0x0896362Cu, &recomp_unit_0087, "recomp_unit_0087");
    runtime.register_function(0x08963644u, &recomp_unit_0087, "recomp_unit_0087");
    runtime.register_function(0x08963660u, &recomp_unit_0087, "recomp_unit_0087");
    runtime.register_function(0x08963684u, &recomp_unit_0087, "recomp_unit_0087");
    runtime.register_function(0x08963690u, &recomp_unit_0087, "recomp_unit_0087");
    runtime.register_function(0x08963698u, &recomp_unit_0087, "recomp_unit_0087");
    runtime.register_function(0x089636A0u, &recomp_unit_0087, "recomp_unit_0087");
    runtime.register_function(0x089636A4u, &recomp_unit_0087, "recomp_unit_0087");
    runtime.register_function(0x089636B0u, &recomp_unit_0087, "recomp_unit_0087");
    runtime.register_function(0x089636B8u, &recomp_unit_0087, "recomp_unit_0087");
    runtime.register_function(0x089636BCu, &recomp_unit_0087, "recomp_unit_0087");
    runtime.register_function(0x089636C8u, &recomp_unit_0087, "recomp_unit_0087");
    runtime.register_function(0x089636CCu, &recomp_unit_0087, "recomp_unit_0087");
    runtime.register_function(0x089636E4u, &recomp_unit_0087, "recomp_unit_0087");
    runtime.register_function(0x08963714u, &recomp_unit_0087, "recomp_unit_0087");
    runtime.register_function(0x08963720u, &recomp_unit_0087, "recomp_unit_0087");
    runtime.register_function(0x0896372Cu, &recomp_unit_0087, "recomp_unit_0087");
    runtime.register_function(0x08963738u, &recomp_unit_0087, "recomp_unit_0087");
    runtime.register_function(0x08963744u, &recomp_unit_0087, "recomp_unit_0087");
    runtime.register_function(0x0896375Cu, &recomp_unit_0087, "recomp_unit_0087");
    runtime.register_function(0x0896376Cu, &recomp_unit_0087, "recomp_unit_0087");
    runtime.register_function(0x08963770u, &recomp_unit_0087, "recomp_unit_0087");
    runtime.register_function(0x0896377Cu, &recomp_unit_0087, "recomp_unit_0087");
    runtime.register_function(0x08963788u, &recomp_unit_0087, "recomp_unit_0087");
    runtime.register_function(0x08963794u, &recomp_unit_0087, "recomp_unit_0087");
    runtime.register_function(0x089637A4u, &recomp_unit_0087, "recomp_unit_0087");
    runtime.register_function(0x089637B4u, &recomp_unit_0087, "recomp_unit_0087");
    runtime.register_function(0x089637C0u, &recomp_unit_0087, "recomp_unit_0087");
    runtime.register_function(0x089637CCu, &recomp_unit_0087, "recomp_unit_0087");
    runtime.register_function(0x089637F0u, &recomp_unit_0087, "recomp_unit_0087");
    runtime.register_function(0x089637FCu, &recomp_unit_0087, "recomp_unit_0087");
    runtime.register_function(0x08963808u, &recomp_unit_0087, "recomp_unit_0087");
    runtime.register_function(0x0896380Cu, &recomp_unit_0087, "recomp_unit_0087");
    runtime.register_function(0x0896381Cu, &recomp_unit_0087, "recomp_unit_0087");
    runtime.register_function(0x08963820u, &recomp_unit_0087, "recomp_unit_0087");
    runtime.register_function(0x08963840u, &recomp_unit_0087, "recomp_unit_0087");
    runtime.register_function(0x0896388Cu, &recomp_unit_0087, "recomp_unit_0087");
    runtime.register_function(0x0896389Cu, &recomp_unit_0087, "recomp_unit_0087");
    runtime.register_function(0x089638A8u, &recomp_unit_0087, "recomp_unit_0087");
    runtime.register_function(0x089638C0u, &recomp_unit_0087, "recomp_unit_0087");
    runtime.register_function(0x089638E0u, &recomp_unit_0087, "recomp_unit_0087");
    runtime.register_function(0x089638ECu, &recomp_unit_0087, "recomp_unit_0087");
    runtime.register_function(0x089638F8u, &recomp_unit_0087, "recomp_unit_0087");
    runtime.register_function(0x08963904u, &recomp_unit_0087, "recomp_unit_0087");
    runtime.register_function(0x08963910u, &recomp_unit_0087, "recomp_unit_0087");
    runtime.register_function(0x08963928u, &recomp_unit_0087, "recomp_unit_0087");
    runtime.register_function(0x08963948u, &recomp_unit_0087, "recomp_unit_0087");
    runtime.register_function(0x08963954u, &recomp_unit_0087, "recomp_unit_0087");
    runtime.register_function(0x08963960u, &recomp_unit_0087, "recomp_unit_0087");
    runtime.register_function(0x0896396Cu, &recomp_unit_0087, "recomp_unit_0087");
    runtime.register_function(0x08963980u, &recomp_unit_0087, "recomp_unit_0087");
    runtime.register_function(0x0896399Cu, &recomp_unit_0087, "recomp_unit_0087");
    runtime.register_function(0x089639A8u, &recomp_unit_0087, "recomp_unit_0087");
    runtime.register_function(0x089639B8u, &recomp_unit_0087, "recomp_unit_0087");
    runtime.register_function(0x089639C4u, &recomp_unit_0087, "recomp_unit_0087");
    runtime.register_function(0x089639D8u, &recomp_unit_0087, "recomp_unit_0087");
    runtime.register_function(0x089639ECu, &recomp_unit_0087, "recomp_unit_0087");
    runtime.register_function(0x089639F8u, &recomp_unit_0087, "recomp_unit_0087");
    runtime.register_function(0x08963A20u, &recomp_unit_0087, "recomp_unit_0087");
    runtime.register_function(0x08963A30u, &recomp_unit_0087, "recomp_unit_0087");
    runtime.register_function(0x08963A68u, &recomp_unit_0087, "recomp_unit_0087");
    runtime.register_function(0x08963A78u, &recomp_unit_0087, "recomp_unit_0087");
    runtime.register_function(0x08963A84u, &recomp_unit_0087, "recomp_unit_0087");
    runtime.register_function(0x08963A98u, &recomp_unit_0087, "recomp_unit_0087");
    runtime.register_function(0x08963AACu, &recomp_unit_0087, "recomp_unit_0087");
    runtime.register_function(0x08963AC8u, &recomp_unit_0087, "recomp_unit_0087");
    runtime.register_function(0x08963AD4u, &recomp_unit_0087, "recomp_unit_0087");
    runtime.register_function(0x08963AE8u, &recomp_unit_0087, "recomp_unit_0087");
    runtime.register_function(0x08963AF4u, &recomp_unit_0087, "recomp_unit_0087");
    runtime.register_function(0x08963B00u, &recomp_unit_0087, "recomp_unit_0087");
    runtime.register_function(0x08963B0Cu, &recomp_unit_0087, "recomp_unit_0087");
    runtime.register_function(0x08963B14u, &recomp_unit_0087, "recomp_unit_0087");
    runtime.register_function(0x08963B20u, &recomp_unit_0087, "recomp_unit_0087");
    runtime.register_function(0x08963B28u, &recomp_unit_0087, "recomp_unit_0087");
    runtime.register_function(0x08963B30u, &recomp_unit_0087, "recomp_unit_0087");
    runtime.register_function(0x08963B3Cu, &recomp_unit_0087, "recomp_unit_0087");
    runtime.register_function(0x08963B54u, &recomp_unit_0087, "recomp_unit_0087");
    runtime.register_function(0x08963B74u, &recomp_unit_0087, "recomp_unit_0087");
    runtime.register_function(0x08963B80u, &recomp_unit_0087, "recomp_unit_0087");
    runtime.register_function(0x08963B84u, &recomp_unit_0087, "recomp_unit_0087");
    runtime.register_function(0x08963BACu, &recomp_unit_0087, "recomp_unit_0087");
    runtime.register_function(0x08963C40u, &recomp_unit_0087, "recomp_unit_0087");
    runtime.register_function(0x08963C50u, &recomp_unit_0087, "recomp_unit_0087");
    runtime.register_function(0x08963C80u, &recomp_unit_0087, "recomp_unit_0087");
    runtime.register_function(0x08963C8Cu, &recomp_unit_0087, "recomp_unit_0087");
    runtime.register_function(0x08963C98u, &recomp_unit_0087, "recomp_unit_0087");
    runtime.register_function(0x08963CA4u, &recomp_unit_0087, "recomp_unit_0087");
    runtime.register_function(0x08963CB4u, &recomp_unit_0087, "recomp_unit_0087");
    runtime.register_function(0x08963CC0u, &recomp_unit_0087, "recomp_unit_0087");
    runtime.register_function(0x08963CCCu, &recomp_unit_0087, "recomp_unit_0087");
    runtime.register_function(0x08963CE0u, &recomp_unit_0087, "recomp_unit_0087");
    runtime.register_function(0x08963D00u, &recomp_unit_0087, "recomp_unit_0087");
    runtime.register_function(0x08963D08u, &recomp_unit_0087, "recomp_unit_0087");
    runtime.register_function(0x08963D10u, &recomp_unit_0087, "recomp_unit_0087");
    runtime.register_function(0x08963D1Cu, &recomp_unit_0087, "recomp_unit_0087");
    runtime.register_function(0x08963D2Cu, &recomp_unit_0087, "recomp_unit_0087");
    runtime.register_function(0x08963D3Cu, &recomp_unit_0087, "recomp_unit_0087");
    runtime.register_function(0x08963D44u, &recomp_unit_0087, "recomp_unit_0087");
    runtime.register_function(0x08963D4Cu, &recomp_unit_0087, "recomp_unit_0087");
    runtime.register_function(0x08963D5Cu, &recomp_unit_0087, "recomp_unit_0087");
    runtime.register_function(0x08963D6Cu, &recomp_unit_0087, "recomp_unit_0087");
    runtime.register_function(0x08963D74u, &recomp_unit_0087, "recomp_unit_0087");
    runtime.register_function(0x08963D8Cu, &recomp_unit_0087, "recomp_unit_0087");
    runtime.register_function(0x08963D98u, &recomp_unit_0087, "recomp_unit_0087");
    runtime.register_function(0x08963DB0u, &recomp_unit_0087, "recomp_unit_0087");
    runtime.register_function(0x08963DC8u, &recomp_unit_0087, "recomp_unit_0087");
    runtime.register_function(0x08963DF0u, &recomp_unit_0087, "recomp_unit_0087");
    runtime.register_function(0x08963E38u, &recomp_unit_0087, "recomp_unit_0087");
    runtime.register_function(0x08963E58u, &recomp_unit_0087, "recomp_unit_0087");
    runtime.register_function(0x08963E70u, &recomp_unit_0087, "recomp_unit_0087");
    runtime.register_function(0x08963E88u, &recomp_unit_0087, "recomp_unit_0087");
    runtime.register_function(0x08963E94u, &recomp_unit_0087, "recomp_unit_0087");
    runtime.register_function(0x08963EA4u, &recomp_unit_0087, "recomp_unit_0087");
    runtime.register_function(0x08963EC8u, &recomp_unit_0087, "recomp_unit_0087");
    runtime.register_function(0x08963ECCu, &recomp_unit_0087, "recomp_unit_0087");
    runtime.register_function(0x08963EE4u, &recomp_unit_0087, "recomp_unit_0087");
    runtime.register_function(0x08963EF0u, &recomp_unit_0087, "recomp_unit_0087");
    runtime.register_function(0x08963F04u, &recomp_unit_0087, "recomp_unit_0087");
    runtime.register_function(0x08963F18u, &recomp_unit_0087, "recomp_unit_0087");
    runtime.register_function(0x08963F38u, &recomp_unit_0087, "recomp_unit_0087");
    runtime.register_function(0x08963F40u, &recomp_unit_0087, "recomp_unit_0087");
    runtime.register_function(0x08963F4Cu, &recomp_unit_0087, "recomp_unit_0087");
    runtime.register_function(0x08963F54u, &recomp_unit_0087, "recomp_unit_0087");
    runtime.register_function(0x08963F6Cu, &recomp_unit_0087, "recomp_unit_0087");
    runtime.register_function(0x08963F90u, &recomp_unit_0087, "recomp_unit_0087");
    runtime.register_function(0x08963FA8u, &recomp_unit_0087, "recomp_unit_0087");
    runtime.register_function(0x08963FCCu, &recomp_unit_0087, "recomp_unit_0087");
    runtime.register_function(0x08963FD4u, &recomp_unit_0087, "recomp_unit_0087");
    runtime.register_function(0x08963FE8u, &recomp_unit_0087, "recomp_unit_0087");
}
} // namespace psprecomp
