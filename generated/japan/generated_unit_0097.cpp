#include "psprecomp/runtime.hpp"
#include "generated_units.hpp"
#include <bit>
#include <cmath>
#include <cstdint>
#include <limits>

namespace psprecomp {
static const std::uint16_t kEntryIds_recomp_unit_0097[4094] = {
    1, 0, 0, 2, 0, 3, 0, 0, 0, 0, 0, 4, 0, 0, 0, 0, 0, 5, 0, 0, 0, 0, 6, 0, 7, 0, 0, 0, 0, 0, 8, 0,
    0, 0, 0, 0, 9, 0, 0, 0, 10, 0, 0, 0, 11, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    12, 0, 0, 0, 13, 0, 0, 0, 14, 0, 0, 0, 15, 0, 0, 0, 16, 0, 0, 0, 0, 0, 0, 17, 0, 0, 0, 18, 0, 0, 0, 19,
    0, 0, 0, 0, 0, 20, 0, 21, 0, 0, 22, 0, 0, 23, 0, 24, 0, 0, 0, 0, 0, 25, 0, 0, 0, 0, 0, 26, 0, 0, 0, 0,
    27, 0, 28, 0, 0, 0, 0, 0, 29, 0, 0, 0, 0, 30, 0, 0, 0, 0, 31, 0, 0, 0, 0, 0, 0, 32, 0, 0, 0, 0, 0, 33,
    0, 0, 0, 34, 0, 0, 0, 35, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 36, 0, 0, 0,
    37, 0, 0, 0, 38, 0, 0, 0, 39, 0, 0, 0, 0, 0, 40, 0, 0, 0, 0, 41, 0, 42, 0, 0, 0, 0, 0, 43, 0, 0, 0, 0,
    0, 44, 0, 0, 0, 45, 0, 0, 0, 46, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 47, 0, 0, 0, 48, 0, 0, 0, 49, 0, 0, 0, 50, 0, 0, 0, 0, 0, 0, 0, 0, 0, 51, 0, 0, 0, 0, 0, 0, 52, 0,
    0, 0, 53, 0, 0, 54, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 55, 0, 0, 0, 0, 0, 0, 0, 0, 56, 0, 0, 0, 0,
    0, 0, 57, 0, 0, 0, 58, 0, 0, 0, 59, 0, 0, 0, 60, 0, 0, 0, 61, 0, 0, 0, 62, 0, 0, 0, 63, 0, 0, 0, 0, 0,
    64, 0, 0, 0, 0, 65, 0, 66, 0, 0, 0, 0, 0, 67, 0, 0, 0, 0, 0, 68, 0, 0, 0, 69, 0, 0, 0, 70, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 71, 0, 0, 0, 72, 0, 0, 0, 73, 0, 0, 0, 74, 0, 0, 0, 0, 0, 75,
    0, 76, 0, 0, 77, 0, 0, 78, 0, 79, 0, 0, 0, 0, 0, 80, 0, 0, 0, 0, 0, 81, 0, 0, 0, 0, 82, 0, 83, 0, 0, 0,
    0, 0, 84, 0, 0, 0, 0, 85, 0, 0, 0, 0, 86, 0, 0, 0, 0, 0, 0, 87, 0, 0, 0, 0, 0, 88, 0, 0, 0, 89, 0, 0,
    0, 90, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 91, 0, 0, 0, 92, 0, 0, 0, 93, 0,
    0, 0, 94, 0, 0, 0, 95, 0, 0, 0, 0, 0, 96, 0, 0, 0, 0, 97, 0, 0, 0, 0, 98, 0, 0, 0, 0, 0, 99, 0, 0, 0,
    0, 100, 0, 101, 0, 0, 0, 0, 0, 102, 0, 0, 0, 0, 0, 103, 0, 0, 0, 0, 0, 104, 0, 0, 0, 0, 0, 0, 0, 0, 105, 0,
    0, 0, 0, 0, 106, 0, 0, 0, 0, 0, 107, 0, 0, 0, 108, 0, 0, 0, 109, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 110, 0, 0, 0, 111, 0, 0, 0, 112, 0, 0, 0, 0, 0, 0, 0, 0, 113, 0, 0, 0, 0, 0, 0, 114,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 115, 0, 0, 0, 0, 0, 116, 0, 0, 0, 0, 0, 117, 0, 0, 0, 0, 118, 0, 0, 0, 0, 119,
    0, 0, 0, 0, 0, 120, 0, 0, 0, 0, 121, 0, 122, 0, 0, 0, 0, 0, 123, 0, 0, 0, 0, 0, 124, 0, 0, 0, 125, 0, 0, 0,
    126, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 127, 0, 0, 0, 128, 0, 0, 0, 129, 0,
    0, 0, 130, 0, 0, 0, 0, 0, 0, 0, 0, 0, 131, 0, 0, 0, 0, 0, 0, 132, 0, 0, 0, 133, 0, 0, 134, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 135, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 136, 0, 0, 0, 137, 0, 0, 0, 138, 0, 0, 0, 0,
    0, 139, 0, 0, 0, 0, 140, 0, 141, 0, 0, 0, 0, 0, 142, 0, 0, 0, 0, 0, 143, 0, 0, 0, 144, 0, 0, 0, 145, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 146, 0, 0, 0, 147, 0, 0, 0, 148, 0, 0, 0, 149, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 150, 0, 0, 0, 0, 0, 0, 151, 0, 0, 0, 152, 0, 0, 153, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 154, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 155, 0, 0, 0, 156, 0, 0, 0, 157, 0, 0, 0, 0, 0, 158, 0, 0,
    0, 0, 159, 0, 160, 0, 0, 0, 0, 0, 161, 0, 0, 0, 0, 0, 162, 0, 0, 0, 0, 0, 0, 163, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 164, 0, 0, 165, 0, 166, 0, 167, 0, 0, 0, 168, 0, 0, 169, 0, 170, 0, 0, 0, 0, 0, 171, 0, 0, 0, 0, 0, 172, 0, 0,
    0, 173, 0, 0, 0, 174, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 175, 0, 0, 0,
    176, 0, 0, 0, 177, 0, 0, 0, 0, 0, 0, 0, 0, 0, 178, 0, 0, 0, 0, 0, 0, 179, 0, 0, 0, 180, 0, 0, 0, 181, 0, 0,
    0, 182, 0, 0, 0, 183, 0, 0, 0, 184, 0, 0, 185, 0, 0, 0, 0, 186, 0, 0, 0, 187, 0, 0, 0, 0, 0, 0, 0, 0, 0, 188,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 189, 0, 0, 0, 0, 0, 190, 0, 0, 0, 0, 191, 0, 192, 0, 0, 0, 0, 0, 193, 0,
    0, 0, 0, 0, 194, 0, 0, 0, 0, 0, 195, 0, 0, 0, 0, 0, 0, 0, 0, 196, 0, 0, 0, 0, 0, 197, 0, 0, 0, 0, 0, 198,
    0, 0, 0, 199, 0, 0, 0, 200, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 201, 0, 0, 0, 202, 0,
    0, 0, 203, 0, 0, 0, 0, 0, 204, 0, 0, 0, 0, 205, 0, 0, 0, 0, 206, 0, 0, 0, 0, 0, 207, 0, 0, 0, 0, 208, 0, 209,
    0, 0, 0, 0, 0, 210, 0, 0, 0, 0, 0, 0, 211, 0, 0, 0, 212, 0, 0, 0, 0, 0, 213, 0, 0, 214, 0, 0, 0, 0, 0, 0,
    0, 0, 215, 0, 216, 0, 0, 0, 0, 0, 217, 0, 0, 0, 0, 0, 218, 0, 0, 0, 219, 0, 0, 0, 220, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 221, 0, 0, 0, 222, 0, 0, 0, 223, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 224, 0, 0, 0, 0, 0, 0, 225, 0, 0, 0, 226, 0, 0, 0, 0, 0, 227, 0, 0, 228, 0, 0, 0, 0, 229, 0, 0, 0, 0, 0,
    230, 0, 0, 0, 0, 0, 0, 231, 0, 0, 0, 0, 0, 232, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 233, 0, 0, 0, 0, 0,
    0, 234, 0, 0, 0, 0, 0, 235, 0, 0, 0, 0, 0, 0, 0, 0, 236, 0, 237, 0, 0, 0, 0, 0, 238, 0, 0, 0, 0, 0, 239, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 240, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 241, 242, 0, 0, 243, 0, 0, 0, 0, 0, 0, 0, 244, 0, 0, 0, 0, 245, 0, 0, 0,
    246, 0, 0, 0, 247, 0, 0, 0, 0, 248, 0, 0, 0, 0, 249, 0, 0, 0, 250, 0, 0, 0, 0, 251, 0, 0, 0, 0, 252, 0, 0, 0,
    253, 0, 0, 0, 0, 254, 0, 0, 0, 0, 255, 0, 0, 0, 256, 0, 0, 0, 0, 257, 0, 0, 0, 0, 258, 0, 0, 0, 259, 0, 0, 0,
    0, 0, 0, 0, 260, 0, 0, 261, 262, 0, 263, 0, 0, 0, 0, 264, 0, 0, 0, 0, 265, 0, 0, 0, 0, 266, 0, 0, 0, 267, 0, 0,
    0, 268, 0, 0, 0, 0, 269, 0, 0, 0, 270, 0, 0, 0, 271, 0, 0, 0, 0, 272, 0, 0, 0, 0, 273, 0, 0, 0, 274, 0, 0, 0,
    0, 275, 0, 0, 0, 0, 276, 0, 0, 0, 277, 0, 0, 0, 0, 278, 0, 0, 0, 0, 279, 0, 0, 0, 280, 0, 0, 0, 0, 281, 0, 0,
    0, 0, 282, 0, 0, 0, 283, 0, 0, 0, 0, 284, 0, 0, 0, 285, 0, 0, 0, 286, 0, 0, 0, 0, 287, 0, 0, 0, 288, 0, 0, 0,
    289, 0, 0, 0, 0, 290, 0, 0, 0, 0, 291, 0, 0, 0, 292, 0, 0, 0, 0, 293, 0, 0, 0, 0, 294, 0, 0, 0, 295, 0, 0, 0,
    0, 0, 296, 0, 0, 0, 297, 0, 0, 0, 0, 0, 0, 0, 0, 298, 0, 299, 0, 0, 300, 0, 0, 301, 0, 0, 0, 0, 302, 0, 0, 0,
    0, 0, 303, 0, 0, 0, 304, 0, 0, 0, 0, 0, 305, 0, 0, 0, 306, 0, 0, 0, 307, 0, 0, 0, 0, 0, 0, 0, 0, 0, 308, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 309, 0, 310, 0, 0, 311, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 312, 313, 0, 0, 314, 0, 315, 0, 0, 0, 0, 0, 316, 0, 0, 317, 0, 0, 0, 0, 318, 0, 0, 319, 0, 320, 0, 0, 0, 321,
    0, 0, 0, 0, 0, 0, 322, 0, 0, 0, 323, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 324, 0, 0, 0, 0, 0, 325, 0, 326, 327,
    0, 0, 328, 0, 0, 0, 329, 0, 0, 0, 0, 330, 0, 0, 331, 0, 0, 0, 0, 332, 0, 0, 0, 333, 0, 0, 0, 0, 0, 0, 0, 334,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 335, 0, 0, 0, 0, 336, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 337, 338, 0, 0, 339, 0, 0, 340, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 341, 0, 0, 0, 0, 0, 0, 0, 0, 342, 0, 0, 0, 0, 0, 343, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 344, 0, 0, 0, 345, 0, 0, 0, 346, 0, 0, 0, 0, 347, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 348, 0, 0, 349, 0, 0, 0, 350, 0, 0, 0, 0, 0, 351, 0, 0, 0, 0, 0, 0, 352, 0, 0, 0, 353, 0, 0, 0, 0, 0, 354,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 355, 356, 0, 357, 0, 0, 0, 0, 358, 359, 0, 360, 0, 0, 0, 361, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 362, 0, 0, 0, 363, 0, 0, 364, 0, 0, 0, 0, 365, 0, 0, 366, 0, 0, 0, 367, 0, 0, 368, 0, 0, 0, 369, 0, 370, 371,
    0, 0, 0, 0, 0, 0, 0, 372, 0, 373, 0, 0, 374, 0, 0, 0, 375, 0, 376, 377, 0, 0, 0, 0, 0, 0, 0, 378, 0, 379, 0, 380,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 381, 0, 0, 0, 382, 0, 0, 0, 0, 0, 0, 0, 383, 0, 0, 0, 0, 0, 0, 384, 385, 0, 0,
    386, 0, 387, 0, 0, 0, 0, 0, 388, 0, 389, 0, 0, 0, 390, 391, 0, 0, 0, 392, 0, 0, 0, 0, 0, 0, 393, 0, 0, 0, 0, 394,
    0, 0, 0, 0, 395, 0, 0, 0, 396, 0, 0, 0, 397, 0, 0, 0, 0, 0, 0, 0, 0, 0, 398, 0, 0, 0, 0, 0, 0, 399, 0, 0,
    0, 0, 0, 400, 0, 0, 0, 401, 0, 0, 402, 0, 403, 0, 0, 0, 0, 0, 404, 0, 0, 0, 0, 405, 0, 0, 0, 406, 0, 407, 0, 0,
    0, 0, 0, 0, 0, 0, 408, 0, 0, 0, 409, 0, 0, 410, 0, 411, 0, 0, 412, 0, 413, 0, 0, 0, 0, 414, 0, 0, 0, 0, 415, 0,
    0, 0, 0, 0, 416, 417, 0, 418, 0, 0, 0, 0, 0, 419, 0, 0, 420, 0, 0, 0, 0, 0, 0, 0, 421, 0, 0, 0, 422, 0, 0, 423,
    0, 0, 424, 425, 0, 0, 0, 426, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 427, 0, 0, 0, 428, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 429, 0, 0, 0, 430, 0, 0, 431, 0, 432, 0, 0, 433, 0, 434, 0, 0, 0, 0, 0, 435, 0, 0, 0, 0, 436, 0, 0, 0, 0,
    0, 437, 438, 0, 439, 0, 0, 0, 0, 0, 440, 0, 0, 441, 0, 0, 442, 0, 0, 0, 443, 0, 0, 444, 0, 445, 0, 0, 446, 0, 447, 0,
    0, 0, 0, 448, 0, 0, 0, 0, 449, 0, 0, 0, 0, 0, 450, 451, 0, 452, 0, 0, 0, 0, 0, 453, 0, 0, 454, 455, 0, 0, 456, 0,
    457, 458, 0, 0, 0, 459, 0, 460, 461, 0, 0, 0, 462, 0, 0, 0, 463, 0, 0, 464, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 465, 0, 0, 0, 0, 0, 0, 0, 466, 0, 0, 0, 0, 0, 467, 0, 0, 468, 0, 0, 469, 0,
    0, 0, 470, 0, 0, 0, 0, 0, 0, 0, 471, 0, 472, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 473, 0, 0, 0, 0, 474, 0, 0, 0, 0, 0, 0, 0, 0, 0, 475, 0, 0, 0, 0, 0, 0, 0, 476, 0,
    0, 477, 0, 0, 0, 478, 0, 0, 479, 0, 480, 0, 0, 481, 0, 482, 0, 0, 0, 0, 483, 0, 0, 0, 0, 484, 0, 0, 0, 0, 0, 485,
    486, 0, 487, 0, 0, 0, 0, 0, 488, 0, 0, 489, 490, 0, 0, 0, 0, 0, 491, 0, 0, 492, 0, 493, 494, 0, 0, 0, 495, 0, 496, 497,
    0, 0, 0, 498, 0, 0, 0, 499, 0, 500, 0, 501, 0, 502, 0, 503, 0, 0, 0, 504, 0, 0, 0, 0, 505, 0, 506, 0, 0, 0, 0, 0,
    507, 0, 508, 0, 0, 0, 0, 0, 509, 0, 510, 0, 0, 511, 0, 0, 512, 0, 0, 513, 0, 0, 0, 0, 0, 514, 0, 0, 515, 0, 0, 516,
    0, 517, 0, 0, 518, 0, 0, 0, 519, 0, 0, 520, 0, 0, 0, 521, 0, 0, 522, 0, 523, 0, 0, 524, 0, 525, 0, 0, 526, 0, 0, 527,
    0, 0, 528, 0, 529, 0, 0, 530, 0, 0, 0, 531, 0, 0, 0, 532, 0, 0, 0, 533, 0, 0, 0, 534, 0, 0, 0, 535, 0, 0, 0, 536,
    0, 0, 0, 537, 0, 0, 0, 538, 0, 0, 0, 0, 0, 0, 539, 0, 0, 540, 0, 0, 0, 541, 0, 0, 0, 0, 542, 0, 0, 0, 543, 0,
    544, 0, 545, 0, 546, 0, 547, 0, 548, 0, 549, 0, 550, 0, 551, 0, 0, 0, 552, 0, 0, 0, 553, 0, 554, 0, 555, 0, 556, 0, 557, 0,
    558, 0, 559, 0, 560, 0, 561, 0, 562, 0, 563, 0, 564, 0, 565, 0, 566, 0, 567, 0, 568, 0, 569, 0, 570, 0, 571, 0, 572, 0, 573, 0,
    574, 0, 575, 0, 576, 0, 577, 0, 578, 0, 579, 0, 580, 0, 581, 0, 582, 0, 583, 0, 584, 0, 585, 0, 586, 0, 587, 0, 588, 0, 589, 0,
    590, 0, 591, 0, 592, 0, 593, 0, 594, 0, 595, 0, 596, 0, 597, 0, 598, 0, 599, 0, 600, 0, 601, 0, 602, 0, 603, 0, 604, 0, 605, 0,
    606, 0, 607, 0, 608, 0, 609, 0, 610, 0, 611, 0, 612, 0, 613, 0, 614, 0, 615, 0, 616, 0, 617, 0, 618, 0, 619, 0, 620, 0, 621, 0,
    622, 0, 623, 0, 624, 0, 625, 0, 626, 0, 627, 0, 628, 0, 629, 0, 630, 0, 631, 0, 632, 0, 633, 0, 634, 0, 635, 0, 636, 0, 637, 0,
    638, 0, 639, 0, 640, 0, 641, 0, 642, 0, 643, 0, 644, 0, 645, 0, 646, 0, 647, 0, 648, 0, 649, 0, 650, 0, 651, 0, 652, 0, 653, 0,
    654, 0, 655, 0, 656, 0, 657, 0, 658, 0, 659, 0, 660, 0, 661, 0, 662, 0, 663, 0, 664, 0, 665, 0, 666, 0, 667, 0, 668, 0, 669, 0,
    670, 0, 671, 0, 672, 0, 673, 0, 674, 0, 675, 0, 676, 0, 677, 0, 678, 0, 0, 0, 679, 0, 0, 0, 0, 0, 680, 0, 0, 0, 0, 0,
    0, 0, 0, 681, 0, 682, 0, 0, 0, 0, 0, 683, 0, 0, 0, 0, 0, 684, 0, 0, 0, 0, 0, 0, 0, 0, 685, 0, 686, 0, 0, 0,
    0, 0, 687, 0, 0, 0, 0, 0, 688, 0, 0, 0, 0, 0, 0, 0, 0, 689, 0, 690, 0, 0, 0, 0, 0, 691, 0, 0, 0, 0, 0, 692,
    0, 0, 0, 0, 0, 0, 0, 0, 693, 0, 694, 0, 0, 0, 0, 0, 695, 0, 0, 0, 0, 0, 696, 0, 0, 0, 0, 0, 0, 0, 0, 697,
    0, 698, 0, 0, 0, 0, 0, 699, 0, 0, 0, 0, 0, 700, 0, 0, 0, 0, 0, 0, 0, 0, 701, 0, 702, 0, 0, 0, 0, 0, 703, 0,
    0, 0, 0, 0, 704, 0, 0, 0, 0, 0, 0, 0, 0, 705, 0, 706, 0, 0, 0, 0, 0, 707, 0, 0, 0, 0, 0, 708, 0, 0, 0, 0,
    0, 0, 0, 0, 709, 0, 710, 0, 0, 0, 0, 0, 711, 0, 0, 0, 0, 0, 712, 0, 0, 0, 0, 0, 0, 0, 0, 713, 0, 714, 0, 0,
    0, 0, 0, 715, 0, 0, 0, 0, 0, 716, 0, 0, 0, 0, 0, 0, 0, 0, 717, 0, 718, 0, 0, 0, 0, 0, 719, 0, 0, 0, 0, 0,
    720, 0, 0, 0, 0, 0, 0, 0, 0, 721, 0, 722, 0, 0, 0, 0, 0, 723, 0, 0, 0, 0, 0, 724, 0, 0, 0, 0, 0, 0, 0, 0,
    725, 0, 726, 0, 0, 0, 0, 0, 727, 0, 0, 0, 0, 0, 728, 0, 0, 0, 0, 0, 0, 0, 0, 729, 0, 730, 0, 0, 0, 0, 0, 731,
    0, 0, 0, 0, 0, 732, 0, 0, 0, 0, 0, 0, 0, 0, 733, 0, 734, 0, 0, 0, 0, 0, 735, 0, 0, 0, 0, 0, 736, 0, 0, 0,
    0, 0, 0, 0, 0, 737, 0, 738, 0, 0, 0, 0, 0, 739, 0, 0, 0, 0, 0, 740, 0, 0, 0, 0, 0, 0, 0, 0, 741, 0, 742, 0,
    0, 0, 0, 0, 743, 0, 0, 0, 0, 0, 744, 0, 0, 0, 0, 0, 0, 0, 0, 745, 0, 746, 0, 0, 0, 0, 0, 747, 0, 0, 0, 0,
    0, 748, 0, 0, 0, 0, 0, 0, 0, 0, 749, 0, 750, 0, 0, 0, 0, 0, 751, 0, 0, 0, 0, 0, 752, 0, 0, 0, 0, 0, 0, 0,
    0, 753, 0, 754, 0, 0, 0, 0, 0, 755, 0, 0, 0, 0, 0, 756, 0, 0, 0, 0, 0, 0, 0, 0, 757, 0, 758, 0, 0, 0, 0, 0,
    759, 0, 0, 0, 0, 0, 760, 0, 0, 0, 0, 0, 0, 0, 0, 761, 0, 762, 0, 0, 0, 0, 0, 763, 0, 0, 0, 0, 0, 764, 0, 0,
    0, 0, 0, 0, 0, 0, 765, 0, 766, 0, 0, 0, 0, 0, 767, 0, 0, 0, 0, 0, 768, 0, 0, 0, 0, 0, 0, 0, 0, 769, 0, 770,
    0, 0, 0, 0, 0, 771, 0, 0, 0, 0, 0, 772, 0, 0, 0, 0, 0, 0, 0, 0, 773, 0, 774, 0, 0, 0, 0, 0, 775, 0, 0, 0,
    0, 0, 776, 0, 0, 0, 0, 0, 0, 0, 0, 777, 0, 778, 0, 0, 0, 0, 0, 779, 0, 0, 0, 0, 0, 780, 0, 0, 0, 0, 0, 0,
    0, 0, 781, 0, 782, 0, 0, 0, 0, 0, 783, 0, 0, 0, 0, 0, 784, 0, 0, 0, 0, 0, 0, 0, 0, 785, 0, 786, 0, 0, 0, 0,
    0, 787, 0, 0, 0, 0, 0, 788, 0, 0, 0, 0, 0, 0, 0, 0, 789, 0, 790, 0, 0, 0, 0, 0, 791, 0, 0, 0, 0, 0, 792, 0,
    0, 0, 0, 0, 0, 0, 0, 793, 0, 794, 0, 0, 0, 0, 0, 795, 0, 0, 0, 0, 0, 796, 0, 0, 0, 0, 0, 0, 0, 0, 797, 0,
    798, 0, 0, 0, 0, 0, 799, 0, 0, 0, 0, 0, 800, 0, 0, 0, 0, 0, 0, 0, 0, 801, 0, 802, 0, 0, 0, 0, 0, 803, 0, 0,
    0, 0, 0, 804, 0, 0, 0, 0, 0, 0, 0, 0, 805, 0, 806, 0, 0, 0, 0, 0, 807, 0, 0, 0, 0, 0, 808, 0, 0, 0, 0, 809,
    0, 810, 0, 0, 0, 0, 0, 811, 0, 0, 0, 0, 812, 0, 0, 0, 0, 813, 0, 0, 0, 0, 0, 0, 814, 0, 0, 0, 0, 0, 815, 0,
    0, 0, 816, 0, 0, 0, 817, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 818, 0, 0, 0, 819,
    0, 0, 0, 820, 0, 0, 0, 821, 0, 0, 0, 822, 0, 0, 0, 823, 0, 0, 0, 824, 0, 0, 0, 0, 0, 825, 0, 0, 0, 0, 826, 0,
    827, 0, 0, 0, 0, 0, 828, 0, 0, 0, 0, 829, 0, 0, 0, 0, 830, 0, 0, 0, 0, 0, 0, 831, 0, 0, 0, 0, 0, 832, 0, 0,
    0, 833, 0, 0, 0, 834, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 835, 0, 0, 0, 836, 0,
    0, 0, 837, 0, 0, 0, 838, 0, 0, 0, 839, 0, 0, 0, 840, 0, 0, 0, 0, 0, 841, 0, 0, 0, 0, 842, 0, 843, 0, 0, 0, 0,
    0, 844, 0, 0, 0, 0, 845, 0, 0, 0, 0, 846, 0, 0, 0, 0, 0, 0, 847, 0, 0, 0, 0, 0, 848, 0, 0, 0, 849, 0, 0, 0,
    850, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 851, 0, 0, 0, 852, 0, 0, 0, 853,
};
void recomp_unit_0097_entry(Runtime &rt, AllegrexContext &ctx, std::uint16_t direct_entry_id, GuestMemory::AotFastView &aot_mem) {
    std::uint32_t jump_target = 0u;
    std::uint32_t local_transfers = 0u;
    std::uint32_t local_pc = ctx.pc;
    std::uint32_t entry_id = direct_entry_id;
LOCAL_DISPATCH:
    {
    if (entry_id == 0u) {
        const std::uint32_t entry_delta = local_pc - 0x08988004u;
        entry_id = (entry_delta < 16376u && (entry_delta & 3u) == 0u) ? kEntryIds_recomp_unit_0097[entry_delta >> 2u] : 0u;
    }
    switch (entry_id) {
    case 1u: goto L_08988004;
    case 2u: goto L_08988010;
    case 3u: goto L_08988018;
    case 4u: goto L_08988030;
    case 5u: goto L_08988048;
    case 6u: goto L_0898805C;
    case 7u: goto L_08988064;
    case 8u: goto L_0898807C;
    case 9u: goto L_08988094;
    case 10u: goto L_089880A4;
    case 11u: goto L_089880B4;
    case 12u: goto L_08988104;
    case 13u: goto L_08988114;
    case 14u: goto L_08988124;
    case 15u: goto L_08988134;
    case 16u: goto L_08988144;
    case 17u: goto L_08988160;
    case 18u: goto L_08988170;
    case 19u: goto L_08988180;
    case 20u: goto L_08988198;
    case 21u: goto L_089881A0;
    case 22u: goto L_089881AC;
    case 23u: goto L_089881B8;
    case 24u: goto L_089881C0;
    case 25u: goto L_089881D8;
    case 26u: goto L_089881F0;
    case 27u: goto L_08988204;
    case 28u: goto L_0898820C;
    case 29u: goto L_08988224;
    case 30u: goto L_08988238;
    case 31u: goto L_0898824C;
    case 32u: goto L_08988268;
    case 33u: goto L_08988280;
    case 34u: goto L_08988290;
    case 35u: goto L_089882A0;
    case 36u: goto L_089882F4;
    case 37u: goto L_08988304;
    case 38u: goto L_08988314;
    case 39u: goto L_08988324;
    case 40u: goto L_0898833C;
    case 41u: goto L_08988350;
    case 42u: goto L_08988358;
    case 43u: goto L_08988370;
    case 44u: goto L_08988388;
    case 45u: goto L_08988398;
    case 46u: goto L_089883A8;
    case 47u: goto L_08988408;
    case 48u: goto L_08988418;
    case 49u: goto L_08988428;
    case 50u: goto L_08988438;
    case 51u: goto L_08988460;
    case 52u: goto L_0898847C;
    case 53u: goto L_0898848C;
    case 54u: goto L_08988498;
    case 55u: goto L_089884CC;
    case 56u: goto L_089884F0;
    case 57u: goto L_0898850C;
    case 58u: goto L_0898851C;
    case 59u: goto L_0898852C;
    case 60u: goto L_0898853C;
    case 61u: goto L_0898854C;
    case 62u: goto L_0898855C;
    case 63u: goto L_0898856C;
    case 64u: goto L_08988584;
    case 65u: goto L_08988598;
    case 66u: goto L_089885A0;
    case 67u: goto L_089885B8;
    case 68u: goto L_089885D0;
    case 69u: goto L_089885E0;
    case 70u: goto L_089885F0;
    case 71u: goto L_08988638;
    case 72u: goto L_08988648;
    case 73u: goto L_08988658;
    case 74u: goto L_08988668;
    case 75u: goto L_08988680;
    case 76u: goto L_08988688;
    case 77u: goto L_08988694;
    case 78u: goto L_089886A0;
    case 79u: goto L_089886A8;
    case 80u: goto L_089886C0;
    case 81u: goto L_089886D8;
    case 82u: goto L_089886EC;
    case 83u: goto L_089886F4;
    case 84u: goto L_0898870C;
    case 85u: goto L_08988720;
    case 86u: goto L_08988734;
    case 87u: goto L_08988750;
    case 88u: goto L_08988768;
    case 89u: goto L_08988778;
    case 90u: goto L_08988788;
    case 91u: goto L_089887DC;
    case 92u: goto L_089887EC;
    case 93u: goto L_089887FC;
    case 94u: goto L_0898880C;
    case 95u: goto L_0898881C;
    case 96u: goto L_08988834;
    case 97u: goto L_08988848;
    case 98u: goto L_0898885C;
    case 99u: goto L_08988874;
    case 100u: goto L_08988888;
    case 101u: goto L_08988890;
    case 102u: goto L_089888A8;
    case 103u: goto L_089888C0;
    case 104u: goto L_089888D8;
    case 105u: goto L_089888FC;
    case 106u: goto L_08988914;
    case 107u: goto L_0898892C;
    case 108u: goto L_0898893C;
    case 109u: goto L_0898894C;
    case 110u: goto L_089889A0;
    case 111u: goto L_089889B0;
    case 112u: goto L_089889C0;
    case 113u: goto L_089889E4;
    case 114u: goto L_08988A00;
    case 115u: goto L_08988A28;
    case 116u: goto L_08988A40;
    case 117u: goto L_08988A58;
    case 118u: goto L_08988A6C;
    case 119u: goto L_08988A80;
    case 120u: goto L_08988A98;
    case 121u: goto L_08988AAC;
    case 122u: goto L_08988AB4;
    case 123u: goto L_08988ACC;
    case 124u: goto L_08988AE4;
    case 125u: goto L_08988AF4;
    case 126u: goto L_08988B04;
    case 127u: goto L_08988B5C;
    case 128u: goto L_08988B6C;
    case 129u: goto L_08988B7C;
    case 130u: goto L_08988B8C;
    case 131u: goto L_08988BB4;
    case 132u: goto L_08988BD0;
    case 133u: goto L_08988BE0;
    case 134u: goto L_08988BEC;
    case 135u: goto L_08988C20;
    case 136u: goto L_08988C50;
    case 137u: goto L_08988C60;
    case 138u: goto L_08988C70;
    case 139u: goto L_08988C88;
    case 140u: goto L_08988C9C;
    case 141u: goto L_08988CA4;
    case 142u: goto L_08988CBC;
    case 143u: goto L_08988CD4;
    case 144u: goto L_08988CE4;
    case 145u: goto L_08988CF4;
    case 146u: goto L_08988D44;
    case 147u: goto L_08988D54;
    case 148u: goto L_08988D64;
    case 149u: goto L_08988D74;
    case 150u: goto L_08988D9C;
    case 151u: goto L_08988DB8;
    case 152u: goto L_08988DC8;
    case 153u: goto L_08988DD4;
    case 154u: goto L_08988E10;
    case 155u: goto L_08988E40;
    case 156u: goto L_08988E50;
    case 157u: goto L_08988E60;
    case 158u: goto L_08988E78;
    case 159u: goto L_08988E8C;
    case 160u: goto L_08988E94;
    case 161u: goto L_08988EAC;
    case 162u: goto L_08988EC4;
    case 163u: goto L_08988EE0;
    case 164u: goto L_08988F08;
    case 165u: goto L_08988F14;
    case 166u: goto L_08988F1C;
    case 167u: goto L_08988F24;
    case 168u: goto L_08988F34;
    case 169u: goto L_08988F40;
    case 170u: goto L_08988F48;
    case 171u: goto L_08988F60;
    case 172u: goto L_08988F78;
    case 173u: goto L_08988F88;
    case 174u: goto L_08988F98;
    case 175u: goto L_08988FF4;
    case 176u: goto L_08989004;
    case 177u: goto L_08989014;
    case 178u: goto L_0898903C;
    case 179u: goto L_08989058;
    case 180u: goto L_08989068;
    case 181u: goto L_08989078;
    case 182u: goto L_08989088;
    case 183u: goto L_08989098;
    case 184u: goto L_089890A8;
    case 185u: goto L_089890B4;
    case 186u: goto L_089890C8;
    case 187u: goto L_089890D8;
    case 188u: goto L_08989100;
    case 189u: goto L_08989130;
    case 190u: goto L_08989148;
    case 191u: goto L_0898915C;
    case 192u: goto L_08989164;
    case 193u: goto L_0898917C;
    case 194u: goto L_08989194;
    case 195u: goto L_089891AC;
    case 196u: goto L_089891D0;
    case 197u: goto L_089891E8;
    case 198u: goto L_08989200;
    case 199u: goto L_08989210;
    case 200u: goto L_08989220;
    case 201u: goto L_0898926C;
    case 202u: goto L_0898927C;
    case 203u: goto L_0898928C;
    case 204u: goto L_089892A4;
    case 205u: goto L_089892B8;
    case 206u: goto L_089892CC;
    case 207u: goto L_089892E4;
    case 208u: goto L_089892F8;
    case 209u: goto L_08989300;
    case 210u: goto L_08989318;
    case 211u: goto L_08989334;
    case 212u: goto L_08989344;
    case 213u: goto L_0898935C;
    case 214u: goto L_08989368;
    case 215u: goto L_0898938C;
    case 216u: goto L_08989394;
    case 217u: goto L_089893AC;
    case 218u: goto L_089893C4;
    case 219u: goto L_089893D4;
    case 220u: goto L_089893E4;
    case 221u: goto L_08989440;
    case 222u: goto L_08989450;
    case 223u: goto L_08989460;
    case 224u: goto L_08989488;
    case 225u: goto L_089894A4;
    case 226u: goto L_089894B4;
    case 227u: goto L_089894CC;
    case 228u: goto L_089894D8;
    case 229u: goto L_089894EC;
    case 230u: goto L_08989504;
    case 231u: goto L_08989520;
    case 232u: goto L_08989538;
    case 233u: goto L_0898956C;
    case 234u: goto L_08989588;
    case 235u: goto L_089895A0;
    case 236u: goto L_089895C4;
    case 237u: goto L_089895CC;
    case 238u: goto L_089895E4;
    case 239u: goto L_089895FC;
    case 240u: goto L_0898965C;
    case 241u: goto L_089896B0;
    case 242u: goto L_089896B4;
    case 243u: goto L_089896C0;
    case 244u: goto L_089896E0;
    case 245u: goto L_089896F4;
    case 246u: goto L_08989704;
    case 247u: goto L_08989714;
    case 248u: goto L_08989728;
    case 249u: goto L_0898973C;
    case 250u: goto L_0898974C;
    case 251u: goto L_08989760;
    case 252u: goto L_08989774;
    case 253u: goto L_08989784;
    case 254u: goto L_08989798;
    case 255u: goto L_089897AC;
    case 256u: goto L_089897BC;
    case 257u: goto L_089897D0;
    case 258u: goto L_089897E4;
    case 259u: goto L_089897F4;
    case 260u: goto L_08989814;
    case 261u: goto L_08989820;
    case 262u: goto L_08989824;
    case 263u: goto L_0898982C;
    case 264u: goto L_08989840;
    case 265u: goto L_08989854;
    case 266u: goto L_08989868;
    case 267u: goto L_08989878;
    case 268u: goto L_08989888;
    case 269u: goto L_0898989C;
    case 270u: goto L_089898AC;
    case 271u: goto L_089898BC;
    case 272u: goto L_089898D0;
    case 273u: goto L_089898E4;
    case 274u: goto L_089898F4;
    case 275u: goto L_08989908;
    case 276u: goto L_0898991C;
    case 277u: goto L_0898992C;
    case 278u: goto L_08989940;
    case 279u: goto L_08989954;
    case 280u: goto L_08989964;
    case 281u: goto L_08989978;
    case 282u: goto L_0898998C;
    case 283u: goto L_0898999C;
    case 284u: goto L_089899B0;
    case 285u: goto L_089899C0;
    case 286u: goto L_089899D0;
    case 287u: goto L_089899E4;
    case 288u: goto L_089899F4;
    case 289u: goto L_08989A04;
    case 290u: goto L_08989A18;
    case 291u: goto L_08989A2C;
    case 292u: goto L_08989A3C;
    case 293u: goto L_08989A50;
    case 294u: goto L_08989A64;
    case 295u: goto L_08989A74;
    case 296u: goto L_08989A8C;
    case 297u: goto L_08989A9C;
    case 298u: goto L_08989AC0;
    case 299u: goto L_08989AC8;
    case 300u: goto L_08989AD4;
    case 301u: goto L_08989AE0;
    case 302u: goto L_08989AF4;
    case 303u: goto L_08989B0C;
    case 304u: goto L_08989B1C;
    case 305u: goto L_08989B34;
    case 306u: goto L_08989B44;
    case 307u: goto L_08989B54;
    case 308u: goto L_08989B7C;
    case 309u: goto L_08989BBC;
    case 310u: goto L_08989BC4;
    case 311u: goto L_08989BD0;
    case 312u: goto L_08989C0C;
    case 313u: goto L_08989C10;
    case 314u: goto L_08989C1C;
    case 315u: goto L_08989C24;
    case 316u: goto L_08989C3C;
    case 317u: goto L_08989C48;
    case 318u: goto L_08989C5C;
    case 319u: goto L_08989C68;
    case 320u: goto L_08989C70;
    case 321u: goto L_08989C80;
    case 322u: goto L_08989C9C;
    case 323u: goto L_08989CAC;
    case 324u: goto L_08989CDC;
    case 325u: goto L_08989CF4;
    case 326u: goto L_08989CFC;
    case 327u: goto L_08989D00;
    case 328u: goto L_08989D0C;
    case 329u: goto L_08989D1C;
    case 330u: goto L_08989D30;
    case 331u: goto L_08989D3C;
    case 332u: goto L_08989D50;
    case 333u: goto L_08989D60;
    case 334u: goto L_08989D80;
    case 335u: goto L_08989DE0;
    case 336u: goto L_08989DF4;
    case 337u: goto L_08989E1C;
    case 338u: goto L_08989E20;
    case 339u: goto L_08989E2C;
    case 340u: goto L_08989E38;
    case 341u: goto L_08989EA4;
    case 342u: goto L_08989EC8;
    case 343u: goto L_08989EE0;
    case 344u: goto L_08989F20;
    case 345u: goto L_08989F30;
    case 346u: goto L_08989F40;
    case 347u: goto L_08989F54;
    case 348u: goto L_08989F88;
    case 349u: goto L_08989F94;
    case 350u: goto L_08989FA4;
    case 351u: goto L_08989FBC;
    case 352u: goto L_08989FD8;
    case 353u: goto L_08989FE8;
    case 354u: goto L_0898A000;
    case 355u: goto L_0898A028;
    case 356u: goto L_0898A02C;
    case 357u: goto L_0898A034;
    case 358u: goto L_0898A048;
    case 359u: goto L_0898A04C;
    case 360u: goto L_0898A054;
    case 361u: goto L_0898A064;
    case 362u: goto L_0898A08C;
    case 363u: goto L_0898A09C;
    case 364u: goto L_0898A0A8;
    case 365u: goto L_0898A0BC;
    case 366u: goto L_0898A0C8;
    case 367u: goto L_0898A0D8;
    case 368u: goto L_0898A0E4;
    case 369u: goto L_0898A0F4;
    case 370u: goto L_0898A0FC;
    case 371u: goto L_0898A100;
    case 372u: goto L_0898A120;
    case 373u: goto L_0898A128;
    case 374u: goto L_0898A134;
    case 375u: goto L_0898A144;
    case 376u: goto L_0898A14C;
    case 377u: goto L_0898A150;
    case 378u: goto L_0898A170;
    case 379u: goto L_0898A178;
    case 380u: goto L_0898A180;
    case 381u: goto L_0898A1A8;
    case 382u: goto L_0898A1B8;
    case 383u: goto L_0898A1D8;
    case 384u: goto L_0898A1F4;
    case 385u: goto L_0898A1F8;
    case 386u: goto L_0898A204;
    case 387u: goto L_0898A20C;
    case 388u: goto L_0898A224;
    case 389u: goto L_0898A22C;
    case 390u: goto L_0898A23C;
    case 391u: goto L_0898A240;
    case 392u: goto L_0898A250;
    case 393u: goto L_0898A26C;
    case 394u: goto L_0898A280;
    case 395u: goto L_0898A294;
    case 396u: goto L_0898A2A4;
    case 397u: goto L_0898A2B4;
    case 398u: goto L_0898A2DC;
    case 399u: goto L_0898A2F8;
    case 400u: goto L_0898A310;
    case 401u: goto L_0898A320;
    case 402u: goto L_0898A32C;
    case 403u: goto L_0898A334;
    case 404u: goto L_0898A34C;
    case 405u: goto L_0898A360;
    case 406u: goto L_0898A370;
    case 407u: goto L_0898A378;
    case 408u: goto L_0898A39C;
    case 409u: goto L_0898A3AC;
    case 410u: goto L_0898A3B8;
    case 411u: goto L_0898A3C0;
    case 412u: goto L_0898A3CC;
    case 413u: goto L_0898A3D4;
    case 414u: goto L_0898A3E8;
    case 415u: goto L_0898A3FC;
    case 416u: goto L_0898A414;
    case 417u: goto L_0898A418;
    case 418u: goto L_0898A420;
    case 419u: goto L_0898A438;
    case 420u: goto L_0898A444;
    case 421u: goto L_0898A464;
    case 422u: goto L_0898A474;
    case 423u: goto L_0898A480;
    case 424u: goto L_0898A48C;
    case 425u: goto L_0898A490;
    case 426u: goto L_0898A4A0;
    case 427u: goto L_0898A4CC;
    case 428u: goto L_0898A4DC;
    case 429u: goto L_0898A50C;
    case 430u: goto L_0898A51C;
    case 431u: goto L_0898A528;
    case 432u: goto L_0898A530;
    case 433u: goto L_0898A53C;
    case 434u: goto L_0898A544;
    case 435u: goto L_0898A55C;
    case 436u: goto L_0898A570;
    case 437u: goto L_0898A588;
    case 438u: goto L_0898A58C;
    case 439u: goto L_0898A594;
    case 440u: goto L_0898A5AC;
    case 441u: goto L_0898A5B8;
    case 442u: goto L_0898A5C4;
    case 443u: goto L_0898A5D4;
    case 444u: goto L_0898A5E0;
    case 445u: goto L_0898A5E8;
    case 446u: goto L_0898A5F4;
    case 447u: goto L_0898A5FC;
    case 448u: goto L_0898A610;
    case 449u: goto L_0898A624;
    case 450u: goto L_0898A63C;
    case 451u: goto L_0898A640;
    case 452u: goto L_0898A648;
    case 453u: goto L_0898A660;
    case 454u: goto L_0898A66C;
    case 455u: goto L_0898A670;
    case 456u: goto L_0898A67C;
    case 457u: goto L_0898A684;
    case 458u: goto L_0898A688;
    case 459u: goto L_0898A698;
    case 460u: goto L_0898A6A0;
    case 461u: goto L_0898A6A4;
    case 462u: goto L_0898A6B4;
    case 463u: goto L_0898A6C4;
    case 464u: goto L_0898A6D0;
    case 465u: goto L_0898A72C;
    case 466u: goto L_0898A74C;
    case 467u: goto L_0898A764;
    case 468u: goto L_0898A770;
    case 469u: goto L_0898A77C;
    case 470u: goto L_0898A78C;
    case 471u: goto L_0898A7AC;
    case 472u: goto L_0898A7B4;
    case 473u: goto L_0898A820;
    case 474u: goto L_0898A834;
    case 475u: goto L_0898A85C;
    case 476u: goto L_0898A87C;
    case 477u: goto L_0898A888;
    case 478u: goto L_0898A898;
    case 479u: goto L_0898A8A4;
    case 480u: goto L_0898A8AC;
    case 481u: goto L_0898A8B8;
    case 482u: goto L_0898A8C0;
    case 483u: goto L_0898A8D4;
    case 484u: goto L_0898A8E8;
    case 485u: goto L_0898A900;
    case 486u: goto L_0898A904;
    case 487u: goto L_0898A90C;
    case 488u: goto L_0898A924;
    case 489u: goto L_0898A930;
    case 490u: goto L_0898A934;
    case 491u: goto L_0898A94C;
    case 492u: goto L_0898A958;
    case 493u: goto L_0898A960;
    case 494u: goto L_0898A964;
    case 495u: goto L_0898A974;
    case 496u: goto L_0898A97C;
    case 497u: goto L_0898A980;
    case 498u: goto L_0898A990;
    case 499u: goto L_0898A9A0;
    case 500u: goto L_0898A9A8;
    case 501u: goto L_0898A9B0;
    case 502u: goto L_0898A9B8;
    case 503u: goto L_0898A9C0;
    case 504u: goto L_0898A9D0;
    case 505u: goto L_0898A9E4;
    case 506u: goto L_0898A9EC;
    case 507u: goto L_0898AA04;
    case 508u: goto L_0898AA0C;
    case 509u: goto L_0898AA24;
    case 510u: goto L_0898AA2C;
    case 511u: goto L_0898AA38;
    case 512u: goto L_0898AA44;
    case 513u: goto L_0898AA50;
    case 514u: goto L_0898AA68;
    case 515u: goto L_0898AA74;
    case 516u: goto L_0898AA80;
    case 517u: goto L_0898AA88;
    case 518u: goto L_0898AA94;
    case 519u: goto L_0898AAA4;
    case 520u: goto L_0898AAB0;
    case 521u: goto L_0898AAC0;
    case 522u: goto L_0898AACC;
    case 523u: goto L_0898AAD4;
    case 524u: goto L_0898AAE0;
    case 525u: goto L_0898AAE8;
    case 526u: goto L_0898AAF4;
    case 527u: goto L_0898AB00;
    case 528u: goto L_0898AB0C;
    case 529u: goto L_0898AB14;
    case 530u: goto L_0898AB20;
    case 531u: goto L_0898AB30;
    case 532u: goto L_0898AB40;
    case 533u: goto L_0898AB50;
    case 534u: goto L_0898AB60;
    case 535u: goto L_0898AB70;
    case 536u: goto L_0898AB80;
    case 537u: goto L_0898AB90;
    case 538u: goto L_0898ABA0;
    case 539u: goto L_0898ABBC;
    case 540u: goto L_0898ABC8;
    case 541u: goto L_0898ABD8;
    case 542u: goto L_0898ABEC;
    case 543u: goto L_0898ABFC;
    case 544u: goto L_0898AC04;
    case 545u: goto L_0898AC0C;
    case 546u: goto L_0898AC14;
    case 547u: goto L_0898AC1C;
    case 548u: goto L_0898AC24;
    case 549u: goto L_0898AC2C;
    case 550u: goto L_0898AC34;
    case 551u: goto L_0898AC3C;
    case 552u: goto L_0898AC4C;
    case 553u: goto L_0898AC5C;
    case 554u: goto L_0898AC64;
    case 555u: goto L_0898AC6C;
    case 556u: goto L_0898AC74;
    case 557u: goto L_0898AC7C;
    case 558u: goto L_0898AC84;
    case 559u: goto L_0898AC8C;
    case 560u: goto L_0898AC94;
    case 561u: goto L_0898AC9C;
    case 562u: goto L_0898ACA4;
    case 563u: goto L_0898ACAC;
    case 564u: goto L_0898ACB4;
    case 565u: goto L_0898ACBC;
    case 566u: goto L_0898ACC4;
    case 567u: goto L_0898ACCC;
    case 568u: goto L_0898ACD4;
    case 569u: goto L_0898ACDC;
    case 570u: goto L_0898ACE4;
    case 571u: goto L_0898ACEC;
    case 572u: goto L_0898ACF4;
    case 573u: goto L_0898ACFC;
    case 574u: goto L_0898AD04;
    case 575u: goto L_0898AD0C;
    case 576u: goto L_0898AD14;
    case 577u: goto L_0898AD1C;
    case 578u: goto L_0898AD24;
    case 579u: goto L_0898AD2C;
    case 580u: goto L_0898AD34;
    case 581u: goto L_0898AD3C;
    case 582u: goto L_0898AD44;
    case 583u: goto L_0898AD4C;
    case 584u: goto L_0898AD54;
    case 585u: goto L_0898AD5C;
    case 586u: goto L_0898AD64;
    case 587u: goto L_0898AD6C;
    case 588u: goto L_0898AD74;
    case 589u: goto L_0898AD7C;
    case 590u: goto L_0898AD84;
    case 591u: goto L_0898AD8C;
    case 592u: goto L_0898AD94;
    case 593u: goto L_0898AD9C;
    case 594u: goto L_0898ADA4;
    case 595u: goto L_0898ADAC;
    case 596u: goto L_0898ADB4;
    case 597u: goto L_0898ADBC;
    case 598u: goto L_0898ADC4;
    case 599u: goto L_0898ADCC;
    case 600u: goto L_0898ADD4;
    case 601u: goto L_0898ADDC;
    case 602u: goto L_0898ADE4;
    case 603u: goto L_0898ADEC;
    case 604u: goto L_0898ADF4;
    case 605u: goto L_0898ADFC;
    case 606u: goto L_0898AE04;
    case 607u: goto L_0898AE0C;
    case 608u: goto L_0898AE14;
    case 609u: goto L_0898AE1C;
    case 610u: goto L_0898AE24;
    case 611u: goto L_0898AE2C;
    case 612u: goto L_0898AE34;
    case 613u: goto L_0898AE3C;
    case 614u: goto L_0898AE44;
    case 615u: goto L_0898AE4C;
    case 616u: goto L_0898AE54;
    case 617u: goto L_0898AE5C;
    case 618u: goto L_0898AE64;
    case 619u: goto L_0898AE6C;
    case 620u: goto L_0898AE74;
    case 621u: goto L_0898AE7C;
    case 622u: goto L_0898AE84;
    case 623u: goto L_0898AE8C;
    case 624u: goto L_0898AE94;
    case 625u: goto L_0898AE9C;
    case 626u: goto L_0898AEA4;
    case 627u: goto L_0898AEAC;
    case 628u: goto L_0898AEB4;
    case 629u: goto L_0898AEBC;
    case 630u: goto L_0898AEC4;
    case 631u: goto L_0898AECC;
    case 632u: goto L_0898AED4;
    case 633u: goto L_0898AEDC;
    case 634u: goto L_0898AEE4;
    case 635u: goto L_0898AEEC;
    case 636u: goto L_0898AEF4;
    case 637u: goto L_0898AEFC;
    case 638u: goto L_0898AF04;
    case 639u: goto L_0898AF0C;
    case 640u: goto L_0898AF14;
    case 641u: goto L_0898AF1C;
    case 642u: goto L_0898AF24;
    case 643u: goto L_0898AF2C;
    case 644u: goto L_0898AF34;
    case 645u: goto L_0898AF3C;
    case 646u: goto L_0898AF44;
    case 647u: goto L_0898AF4C;
    case 648u: goto L_0898AF54;
    case 649u: goto L_0898AF5C;
    case 650u: goto L_0898AF64;
    case 651u: goto L_0898AF6C;
    case 652u: goto L_0898AF74;
    case 653u: goto L_0898AF7C;
    case 654u: goto L_0898AF84;
    case 655u: goto L_0898AF8C;
    case 656u: goto L_0898AF94;
    case 657u: goto L_0898AF9C;
    case 658u: goto L_0898AFA4;
    case 659u: goto L_0898AFAC;
    case 660u: goto L_0898AFB4;
    case 661u: goto L_0898AFBC;
    case 662u: goto L_0898AFC4;
    case 663u: goto L_0898AFCC;
    case 664u: goto L_0898AFD4;
    case 665u: goto L_0898AFDC;
    case 666u: goto L_0898AFE4;
    case 667u: goto L_0898AFEC;
    case 668u: goto L_0898AFF4;
    case 669u: goto L_0898AFFC;
    case 670u: goto L_0898B004;
    case 671u: goto L_0898B00C;
    case 672u: goto L_0898B014;
    case 673u: goto L_0898B01C;
    case 674u: goto L_0898B024;
    case 675u: goto L_0898B02C;
    case 676u: goto L_0898B034;
    case 677u: goto L_0898B03C;
    case 678u: goto L_0898B044;
    case 679u: goto L_0898B054;
    case 680u: goto L_0898B06C;
    case 681u: goto L_0898B090;
    case 682u: goto L_0898B098;
    case 683u: goto L_0898B0B0;
    case 684u: goto L_0898B0C8;
    case 685u: goto L_0898B0EC;
    case 686u: goto L_0898B0F4;
    case 687u: goto L_0898B10C;
    case 688u: goto L_0898B124;
    case 689u: goto L_0898B148;
    case 690u: goto L_0898B150;
    case 691u: goto L_0898B168;
    case 692u: goto L_0898B180;
    case 693u: goto L_0898B1A4;
    case 694u: goto L_0898B1AC;
    case 695u: goto L_0898B1C4;
    case 696u: goto L_0898B1DC;
    case 697u: goto L_0898B200;
    case 698u: goto L_0898B208;
    case 699u: goto L_0898B220;
    case 700u: goto L_0898B238;
    case 701u: goto L_0898B25C;
    case 702u: goto L_0898B264;
    case 703u: goto L_0898B27C;
    case 704u: goto L_0898B294;
    case 705u: goto L_0898B2B8;
    case 706u: goto L_0898B2C0;
    case 707u: goto L_0898B2D8;
    case 708u: goto L_0898B2F0;
    case 709u: goto L_0898B314;
    case 710u: goto L_0898B31C;
    case 711u: goto L_0898B334;
    case 712u: goto L_0898B34C;
    case 713u: goto L_0898B370;
    case 714u: goto L_0898B378;
    case 715u: goto L_0898B390;
    case 716u: goto L_0898B3A8;
    case 717u: goto L_0898B3CC;
    case 718u: goto L_0898B3D4;
    case 719u: goto L_0898B3EC;
    case 720u: goto L_0898B404;
    case 721u: goto L_0898B428;
    case 722u: goto L_0898B430;
    case 723u: goto L_0898B448;
    case 724u: goto L_0898B460;
    case 725u: goto L_0898B484;
    case 726u: goto L_0898B48C;
    case 727u: goto L_0898B4A4;
    case 728u: goto L_0898B4BC;
    case 729u: goto L_0898B4E0;
    case 730u: goto L_0898B4E8;
    case 731u: goto L_0898B500;
    case 732u: goto L_0898B518;
    case 733u: goto L_0898B53C;
    case 734u: goto L_0898B544;
    case 735u: goto L_0898B55C;
    case 736u: goto L_0898B574;
    case 737u: goto L_0898B598;
    case 738u: goto L_0898B5A0;
    case 739u: goto L_0898B5B8;
    case 740u: goto L_0898B5D0;
    case 741u: goto L_0898B5F4;
    case 742u: goto L_0898B5FC;
    case 743u: goto L_0898B614;
    case 744u: goto L_0898B62C;
    case 745u: goto L_0898B650;
    case 746u: goto L_0898B658;
    case 747u: goto L_0898B670;
    case 748u: goto L_0898B688;
    case 749u: goto L_0898B6AC;
    case 750u: goto L_0898B6B4;
    case 751u: goto L_0898B6CC;
    case 752u: goto L_0898B6E4;
    case 753u: goto L_0898B708;
    case 754u: goto L_0898B710;
    case 755u: goto L_0898B728;
    case 756u: goto L_0898B740;
    case 757u: goto L_0898B764;
    case 758u: goto L_0898B76C;
    case 759u: goto L_0898B784;
    case 760u: goto L_0898B79C;
    case 761u: goto L_0898B7C0;
    case 762u: goto L_0898B7C8;
    case 763u: goto L_0898B7E0;
    case 764u: goto L_0898B7F8;
    case 765u: goto L_0898B81C;
    case 766u: goto L_0898B824;
    case 767u: goto L_0898B83C;
    case 768u: goto L_0898B854;
    case 769u: goto L_0898B878;
    case 770u: goto L_0898B880;
    case 771u: goto L_0898B898;
    case 772u: goto L_0898B8B0;
    case 773u: goto L_0898B8D4;
    case 774u: goto L_0898B8DC;
    case 775u: goto L_0898B8F4;
    case 776u: goto L_0898B90C;
    case 777u: goto L_0898B930;
    case 778u: goto L_0898B938;
    case 779u: goto L_0898B950;
    case 780u: goto L_0898B968;
    case 781u: goto L_0898B98C;
    case 782u: goto L_0898B994;
    case 783u: goto L_0898B9AC;
    case 784u: goto L_0898B9C4;
    case 785u: goto L_0898B9E8;
    case 786u: goto L_0898B9F0;
    case 787u: goto L_0898BA08;
    case 788u: goto L_0898BA20;
    case 789u: goto L_0898BA44;
    case 790u: goto L_0898BA4C;
    case 791u: goto L_0898BA64;
    case 792u: goto L_0898BA7C;
    case 793u: goto L_0898BAA0;
    case 794u: goto L_0898BAA8;
    case 795u: goto L_0898BAC0;
    case 796u: goto L_0898BAD8;
    case 797u: goto L_0898BAFC;
    case 798u: goto L_0898BB04;
    case 799u: goto L_0898BB1C;
    case 800u: goto L_0898BB34;
    case 801u: goto L_0898BB58;
    case 802u: goto L_0898BB60;
    case 803u: goto L_0898BB78;
    case 804u: goto L_0898BB90;
    case 805u: goto L_0898BBB4;
    case 806u: goto L_0898BBBC;
    case 807u: goto L_0898BBD4;
    case 808u: goto L_0898BBEC;
    case 809u: goto L_0898BC00;
    case 810u: goto L_0898BC08;
    case 811u: goto L_0898BC20;
    case 812u: goto L_0898BC34;
    case 813u: goto L_0898BC48;
    case 814u: goto L_0898BC64;
    case 815u: goto L_0898BC7C;
    case 816u: goto L_0898BC8C;
    case 817u: goto L_0898BC9C;
    case 818u: goto L_0898BCF0;
    case 819u: goto L_0898BD00;
    case 820u: goto L_0898BD10;
    case 821u: goto L_0898BD20;
    case 822u: goto L_0898BD30;
    case 823u: goto L_0898BD40;
    case 824u: goto L_0898BD50;
    case 825u: goto L_0898BD68;
    case 826u: goto L_0898BD7C;
    case 827u: goto L_0898BD84;
    case 828u: goto L_0898BD9C;
    case 829u: goto L_0898BDB0;
    case 830u: goto L_0898BDC4;
    case 831u: goto L_0898BDE0;
    case 832u: goto L_0898BDF8;
    case 833u: goto L_0898BE08;
    case 834u: goto L_0898BE18;
    case 835u: goto L_0898BE6C;
    case 836u: goto L_0898BE7C;
    case 837u: goto L_0898BE8C;
    case 838u: goto L_0898BE9C;
    case 839u: goto L_0898BEAC;
    case 840u: goto L_0898BEBC;
    case 841u: goto L_0898BED4;
    case 842u: goto L_0898BEE8;
    case 843u: goto L_0898BEF0;
    case 844u: goto L_0898BF08;
    case 845u: goto L_0898BF1C;
    case 846u: goto L_0898BF30;
    case 847u: goto L_0898BF4C;
    case 848u: goto L_0898BF64;
    case 849u: goto L_0898BF74;
    case 850u: goto L_0898BF84;
    case 851u: goto L_0898BFD8;
    case 852u: goto L_0898BFE8;
    case 853u: goto L_0898BFF8;
    default:
        if (local_transfers == 0u) rt.unsupported(ctx.pc, 0u, "invalid internal function entry");
        else ctx.pc = local_pc;
        return;
    }
    }
L_08988004:
    ctx.set_gpr(4, ctx.gpr[2] + 0u);
    ctx.set_gpr(31, 0x08988010u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0052_entry, 52u, 732u, 0x088D6FE8u>(ctx, &aot_mem) && ctx.pc == 0x08988010u) goto L_08988010;
    return;
L_08988010:
    ctx.set_gpr(3, 2245u << 16u);
    rt.memory().aot_store32(ctx.gpr[3] + static_cast<std::uint32_t>(32008), ctx.gpr[2]);
    goto L_08988018;
L_08988018:
    ctx.set_gpr(2, 2245u << 16u);
    ctx.set_gpr(2, rt.memory().aot_load32(ctx.gpr[2] + static_cast<std::uint32_t>(32008)));
    ctx.set_gpr(31, rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(12)));
    ctx.set_gpr(29, ctx.gpr[29] + static_cast<std::uint32_t>(16));
    jump_target = ctx.gpr[31];
    // nop
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_08988030:
    ctx.set_gpr(29, ctx.gpr[29] + static_cast<std::uint32_t>(-16));
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(12), ctx.gpr[31]);
    ctx.set_gpr(2, 2245u << 16u);
    ctx.set_gpr(2, rt.memory().aot_load32(ctx.gpr[2] + static_cast<std::uint32_t>(32008)));
    { const bool branch_taken = ctx.gpr[2] == 0u;
    // nop
      if (branch_taken) {
          goto L_0898805C;
      }
      goto L_08988048;
    }
L_08988048:
    ctx.set_gpr(2, rt.memory().aot_load32(ctx.gpr[2] + static_cast<std::uint32_t>(36)));
    ctx.set_gpr(2, ctx.gpr[2] & 4u);
    ctx.set_gpr(2, 0u < ctx.gpr[2] ? 1u : 0u);
    { const bool branch_taken = ctx.gpr[2] != 0u;
    // nop
      if (branch_taken) {
          goto L_08988064;
      }
      goto L_0898805C;
    }
L_0898805C:
    ctx.set_gpr(31, 0x08988064u);
    // nop
    goto L_0898807C;
L_08988064:
    ctx.set_gpr(2, 2245u << 16u);
    ctx.set_gpr(2, rt.memory().aot_load32(ctx.gpr[2] + static_cast<std::uint32_t>(32008)));
    ctx.set_gpr(31, rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(12)));
    ctx.set_gpr(29, ctx.gpr[29] + static_cast<std::uint32_t>(16));
    jump_target = ctx.gpr[31];
    // nop
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_0898807C:
    ctx.set_gpr(29, ctx.gpr[29] + static_cast<std::uint32_t>(-16));
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(12), ctx.gpr[31]);
    ctx.set_gpr(4, 2201u << 16u);
    ctx.set_gpr(4, ctx.gpr[4] + static_cast<std::uint32_t>(-32604));
    ctx.set_gpr(31, 0x08988094u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0080_entry, 80u, 286u, 0x08945508u>(ctx, &aot_mem) && ctx.pc == 0x08988094u) goto L_08988094;
    return;
L_08988094:
    ctx.set_gpr(31, rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(12)));
    ctx.set_gpr(29, ctx.gpr[29] + static_cast<std::uint32_t>(16));
    jump_target = ctx.gpr[31];
    // nop
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_089880A4:
    ctx.set_gpr(29, ctx.gpr[29] + static_cast<std::uint32_t>(-32));
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(28), ctx.gpr[31]);
    ctx.set_gpr(31, 0x089880B4u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0096_entry, 96u, 986u, 0x08987F7Cu>(ctx, &aot_mem) && ctx.pc == 0x089880B4u) goto L_089880B4;
    return;
L_089880B4:
    ctx.set_gpr(2, 2201u << 16u);
    ctx.set_gpr(2, ctx.gpr[2] + static_cast<std::uint32_t>(-32444));
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(0), ctx.gpr[2]);
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(4), 0u);
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(8), 0u);
    ctx.set_gpr(4, 0u + static_cast<std::uint32_t>(1));
    ctx.set_gpr(5, 2245u << 16u);
    ctx.set_gpr(5, ctx.gpr[5] + static_cast<std::uint32_t>(32008));
    ctx.set_gpr(6, 2201u << 16u);
    ctx.set_gpr(6, ctx.gpr[6] + static_cast<std::uint32_t>(-31264));
    ctx.set_gpr(7, 2201u << 16u);
    ctx.set_gpr(7, ctx.gpr[7] + static_cast<std::uint32_t>(-32460));
    ctx.set_gpr(8, 2201u << 16u);
    ctx.set_gpr(8, ctx.gpr[8] + static_cast<std::uint32_t>(-32492));
    ctx.set_gpr(9, 2228u << 16u);
    ctx.set_gpr(9, ctx.gpr[9] + static_cast<std::uint32_t>(12140));
    ctx.set_gpr(10, 0u + static_cast<std::uint32_t>(8));
    ctx.set_gpr(11, 0u + 0u);
    ctx.set_gpr(31, 0x08988104u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0080_entry, 80u, 294u, 0x08945594u>(ctx, &aot_mem) && ctx.pc == 0x08988104u) goto L_08988104;
    return;
L_08988104:
    ctx.set_gpr(31, rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(28)));
    ctx.set_gpr(29, ctx.gpr[29] + static_cast<std::uint32_t>(32));
    jump_target = ctx.gpr[31];
    // nop
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_08988114:
    ctx.set_gpr(29, ctx.gpr[29] + static_cast<std::uint32_t>(-16));
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(12), ctx.gpr[31]);
    ctx.set_gpr(31, 0x08988124u);
    // nop
    goto L_08988030;
L_08988124:
    ctx.set_gpr(31, rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(12)));
    ctx.set_gpr(29, ctx.gpr[29] + static_cast<std::uint32_t>(16));
    jump_target = ctx.gpr[31];
    // nop
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_08988134:
    ctx.set_gpr(2, 2245u << 16u);
    ctx.set_gpr(2, rt.memory().aot_load32(ctx.gpr[2] + static_cast<std::uint32_t>(32024)));
    jump_target = ctx.gpr[31];
    // nop
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_08988144:
    ctx.set_gpr(4, 2201u << 16u);
    ctx.set_gpr(4, ctx.gpr[4] + static_cast<std::uint32_t>(-32416));
    ctx.set_gpr(3, 2245u << 16u);
    ctx.set_gpr(3, rt.memory().aot_load32(ctx.gpr[3] + static_cast<std::uint32_t>(32008)));
    rt.memory().aot_store32(ctx.gpr[3] + static_cast<std::uint32_t>(60), ctx.gpr[4]);
    jump_target = ctx.gpr[31];
    // nop
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_08988160:
    ctx.set_gpr(29, ctx.gpr[29] + static_cast<std::uint32_t>(-16));
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(12), ctx.gpr[31]);
    ctx.set_gpr(31, 0x08988170u);
    // nop
    goto L_08988E60;
L_08988170:
    ctx.set_gpr(31, rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(12)));
    ctx.set_gpr(29, ctx.gpr[29] + static_cast<std::uint32_t>(16));
    jump_target = ctx.gpr[31];
    // nop
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_08988180:
    ctx.set_gpr(29, ctx.gpr[29] + static_cast<std::uint32_t>(-16));
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(12), ctx.gpr[31]);
    ctx.set_gpr(2, 2245u << 16u);
    ctx.set_gpr(2, rt.memory().aot_load32(ctx.gpr[2] + static_cast<std::uint32_t>(32012)));
    { const bool branch_taken = ctx.gpr[2] != 0u;
    // nop
      if (branch_taken) {
          goto L_089881C0;
      }
      goto L_08988198;
    }
L_08988198:
    ctx.set_gpr(31, 0x089881A0u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0078_entry, 78u, 217u, 0x0893CDECu>(ctx, &aot_mem) && ctx.pc == 0x089881A0u) goto L_089881A0;
    return;
L_089881A0:
    ctx.set_gpr(4, rt.memory().aot_load32(ctx.gpr[2] + static_cast<std::uint32_t>(0)));
    ctx.set_gpr(31, 0x089881ACu);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0078_entry, 78u, 199u, 0x0893CC68u>(ctx, &aot_mem) && ctx.pc == 0x089881ACu) goto L_089881AC;
    return;
L_089881AC:
    ctx.set_gpr(4, ctx.gpr[2] + 0u);
    ctx.set_gpr(31, 0x089881B8u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0052_entry, 52u, 732u, 0x088D6FE8u>(ctx, &aot_mem) && ctx.pc == 0x089881B8u) goto L_089881B8;
    return;
L_089881B8:
    ctx.set_gpr(3, 2245u << 16u);
    rt.memory().aot_store32(ctx.gpr[3] + static_cast<std::uint32_t>(32012), ctx.gpr[2]);
    goto L_089881C0;
L_089881C0:
    ctx.set_gpr(2, 2245u << 16u);
    ctx.set_gpr(2, rt.memory().aot_load32(ctx.gpr[2] + static_cast<std::uint32_t>(32012)));
    ctx.set_gpr(31, rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(12)));
    ctx.set_gpr(29, ctx.gpr[29] + static_cast<std::uint32_t>(16));
    jump_target = ctx.gpr[31];
    // nop
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_089881D8:
    ctx.set_gpr(29, ctx.gpr[29] + static_cast<std::uint32_t>(-16));
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(12), ctx.gpr[31]);
    ctx.set_gpr(2, 2245u << 16u);
    ctx.set_gpr(2, rt.memory().aot_load32(ctx.gpr[2] + static_cast<std::uint32_t>(32012)));
    { const bool branch_taken = ctx.gpr[2] == 0u;
    // nop
      if (branch_taken) {
          goto L_08988204;
      }
      goto L_089881F0;
    }
L_089881F0:
    ctx.set_gpr(2, rt.memory().aot_load32(ctx.gpr[2] + static_cast<std::uint32_t>(36)));
    ctx.set_gpr(2, ctx.gpr[2] & 4u);
    ctx.set_gpr(2, 0u < ctx.gpr[2] ? 1u : 0u);
    { const bool branch_taken = ctx.gpr[2] != 0u;
    // nop
      if (branch_taken) {
          goto L_0898820C;
      }
      goto L_08988204;
    }
L_08988204:
    ctx.set_gpr(31, 0x0898820Cu);
    // nop
    goto L_08988268;
L_0898820C:
    ctx.set_gpr(2, 2245u << 16u);
    ctx.set_gpr(2, rt.memory().aot_load32(ctx.gpr[2] + static_cast<std::uint32_t>(32012)));
    ctx.set_gpr(31, rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(12)));
    ctx.set_gpr(29, ctx.gpr[29] + static_cast<std::uint32_t>(16));
    jump_target = ctx.gpr[31];
    // nop
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_08988224:
    ctx.set_gpr(29, ctx.gpr[29] + static_cast<std::uint32_t>(-48));
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(12), ctx.gpr[31]);
    ctx.set_gpr(4, ctx.gpr[29] + static_cast<std::uint32_t>(28));
    ctx.set_gpr(31, 0x08988238u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0042_entry, 42u, 574u, 0x088ADBE0u>(ctx, &aot_mem) && ctx.pc == 0x08988238u) goto L_08988238;
    return;
L_08988238:
    ctx.set_gpr(2, 2232u << 16u);
    ctx.set_gpr(2, ctx.gpr[2] + static_cast<std::uint32_t>(21556));
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(28), ctx.gpr[2]);
    ctx.set_gpr(31, 0x0898824Cu);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0064_entry, 64u, 444u, 0x08905FF0u>(ctx, &aot_mem) && ctx.pc == 0x0898824Cu) goto L_0898824C;
    return;
L_0898824C:
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
L_08988268:
    ctx.set_gpr(29, ctx.gpr[29] + static_cast<std::uint32_t>(-16));
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(12), ctx.gpr[31]);
    ctx.set_gpr(4, 2201u << 16u);
    ctx.set_gpr(4, ctx.gpr[4] + static_cast<std::uint32_t>(-32112));
    ctx.set_gpr(31, 0x08988280u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0080_entry, 80u, 286u, 0x08945508u>(ctx, &aot_mem) && ctx.pc == 0x08988280u) goto L_08988280;
    return;
L_08988280:
    ctx.set_gpr(31, rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(12)));
    ctx.set_gpr(29, ctx.gpr[29] + static_cast<std::uint32_t>(16));
    jump_target = ctx.gpr[31];
    // nop
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_08988290:
    ctx.set_gpr(29, ctx.gpr[29] + static_cast<std::uint32_t>(-32));
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(28), ctx.gpr[31]);
    ctx.set_gpr(31, 0x089882A0u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0096_entry, 96u, 986u, 0x08987F7Cu>(ctx, &aot_mem) && ctx.pc == 0x089882A0u) goto L_089882A0;
    return;
L_089882A0:
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(0), 0u);
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(4), 0u);
    ctx.set_gpr(2, 2228u << 16u);
    ctx.set_gpr(2, ctx.gpr[2] + static_cast<std::uint32_t>(12168));
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(8), ctx.gpr[2]);
    ctx.set_gpr(4, 0u + 0u);
    ctx.set_gpr(5, 2245u << 16u);
    ctx.set_gpr(5, ctx.gpr[5] + static_cast<std::uint32_t>(32012));
    ctx.set_gpr(6, 2191u << 16u);
    ctx.set_gpr(6, ctx.gpr[6] + static_cast<std::uint32_t>(-13396));
    ctx.set_gpr(7, 2187u << 16u);
    ctx.set_gpr(7, ctx.gpr[7] + static_cast<std::uint32_t>(-9000));
    ctx.set_gpr(8, 2201u << 16u);
    ctx.set_gpr(8, ctx.gpr[8] + static_cast<std::uint32_t>(-31996));
    ctx.set_gpr(9, 2228u << 16u);
    ctx.set_gpr(9, ctx.gpr[9] + static_cast<std::uint32_t>(12176));
    ctx.set_gpr(10, 0u + static_cast<std::uint32_t>(20));
    ctx.set_gpr(11, 2201u << 16u);
    ctx.set_gpr(11, ctx.gpr[11] + static_cast<std::uint32_t>(-32220));
    ctx.set_gpr(31, 0x089882F4u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0080_entry, 80u, 294u, 0x08945594u>(ctx, &aot_mem) && ctx.pc == 0x089882F4u) goto L_089882F4;
    return;
L_089882F4:
    ctx.set_gpr(31, rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(28)));
    ctx.set_gpr(29, ctx.gpr[29] + static_cast<std::uint32_t>(32));
    jump_target = ctx.gpr[31];
    // nop
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_08988304:
    ctx.set_gpr(29, ctx.gpr[29] + static_cast<std::uint32_t>(-16));
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(12), ctx.gpr[31]);
    ctx.set_gpr(31, 0x08988314u);
    // nop
    goto L_089881D8;
L_08988314:
    ctx.set_gpr(31, rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(12)));
    ctx.set_gpr(29, ctx.gpr[29] + static_cast<std::uint32_t>(16));
    jump_target = ctx.gpr[31];
    // nop
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_08988324:
    ctx.set_gpr(29, ctx.gpr[29] + static_cast<std::uint32_t>(-16));
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(12), ctx.gpr[31]);
    ctx.set_gpr(2, 2245u << 16u);
    ctx.set_gpr(2, rt.memory().aot_load32(ctx.gpr[2] + static_cast<std::uint32_t>(32016)));
    { const bool branch_taken = ctx.gpr[2] == 0u;
    // nop
      if (branch_taken) {
          goto L_08988350;
      }
      goto L_0898833C;
    }
L_0898833C:
    ctx.set_gpr(2, rt.memory().aot_load32(ctx.gpr[2] + static_cast<std::uint32_t>(36)));
    ctx.set_gpr(2, ctx.gpr[2] & 4u);
    ctx.set_gpr(2, 0u < ctx.gpr[2] ? 1u : 0u);
    { const bool branch_taken = ctx.gpr[2] != 0u;
    // nop
      if (branch_taken) {
          goto L_08988358;
      }
      goto L_08988350;
    }
L_08988350:
    ctx.set_gpr(31, 0x08988358u);
    // nop
    goto L_08988370;
L_08988358:
    ctx.set_gpr(2, 2245u << 16u);
    ctx.set_gpr(2, rt.memory().aot_load32(ctx.gpr[2] + static_cast<std::uint32_t>(32016)));
    ctx.set_gpr(31, rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(12)));
    ctx.set_gpr(29, ctx.gpr[29] + static_cast<std::uint32_t>(16));
    jump_target = ctx.gpr[31];
    // nop
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_08988370:
    ctx.set_gpr(29, ctx.gpr[29] + static_cast<std::uint32_t>(-16));
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(12), ctx.gpr[31]);
    ctx.set_gpr(4, 2201u << 16u);
    ctx.set_gpr(4, ctx.gpr[4] + static_cast<std::uint32_t>(-31848));
    ctx.set_gpr(31, 0x08988388u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0080_entry, 80u, 286u, 0x08945508u>(ctx, &aot_mem) && ctx.pc == 0x08988388u) goto L_08988388;
    return;
L_08988388:
    ctx.set_gpr(31, rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(12)));
    ctx.set_gpr(29, ctx.gpr[29] + static_cast<std::uint32_t>(16));
    jump_target = ctx.gpr[31];
    // nop
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_08988398:
    ctx.set_gpr(29, ctx.gpr[29] + static_cast<std::uint32_t>(-32));
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(28), ctx.gpr[31]);
    ctx.set_gpr(31, 0x089883A8u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0096_entry, 96u, 986u, 0x08987F7Cu>(ctx, &aot_mem) && ctx.pc == 0x089883A8u) goto L_089883A8;
    return;
L_089883A8:
    ctx.set_gpr(2, 2201u << 16u);
    ctx.set_gpr(2, ctx.gpr[2] + static_cast<std::uint32_t>(-31688));
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(0), ctx.gpr[2]);
    ctx.set_gpr(2, 2201u << 16u);
    ctx.set_gpr(2, ctx.gpr[2] + static_cast<std::uint32_t>(-31444));
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(4), ctx.gpr[2]);
    ctx.set_gpr(2, 2228u << 16u);
    ctx.set_gpr(2, ctx.gpr[2] + static_cast<std::uint32_t>(12196));
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(8), ctx.gpr[2]);
    ctx.set_gpr(4, 0u + static_cast<std::uint32_t>(1));
    ctx.set_gpr(5, 2245u << 16u);
    ctx.set_gpr(5, ctx.gpr[5] + static_cast<std::uint32_t>(32016));
    ctx.set_gpr(6, 2196u << 16u);
    ctx.set_gpr(6, ctx.gpr[6] + static_cast<std::uint32_t>(25520));
    ctx.set_gpr(7, 2188u << 16u);
    ctx.set_gpr(7, ctx.gpr[7] + static_cast<std::uint32_t>(-27092));
    ctx.set_gpr(8, 2201u << 16u);
    ctx.set_gpr(8, ctx.gpr[8] + static_cast<std::uint32_t>(-31720));
    ctx.set_gpr(9, 2228u << 16u);
    ctx.set_gpr(9, ctx.gpr[9] + static_cast<std::uint32_t>(12204));
    ctx.set_gpr(10, 0u + static_cast<std::uint32_t>(12));
    ctx.set_gpr(11, 0u + 0u);
    ctx.set_gpr(31, 0x08988408u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0080_entry, 80u, 294u, 0x08945594u>(ctx, &aot_mem) && ctx.pc == 0x08988408u) goto L_08988408;
    return;
L_08988408:
    ctx.set_gpr(31, rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(28)));
    ctx.set_gpr(29, ctx.gpr[29] + static_cast<std::uint32_t>(32));
    jump_target = ctx.gpr[31];
    // nop
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_08988418:
    ctx.set_gpr(29, ctx.gpr[29] + static_cast<std::uint32_t>(-16));
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(12), ctx.gpr[31]);
    ctx.set_gpr(31, 0x08988428u);
    // nop
    goto L_08988324;
L_08988428:
    ctx.set_gpr(31, rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(12)));
    ctx.set_gpr(29, ctx.gpr[29] + static_cast<std::uint32_t>(16));
    jump_target = ctx.gpr[31];
    // nop
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_08988438:
    ctx.set_gpr(29, ctx.gpr[29] + static_cast<std::uint32_t>(-16));
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(12), ctx.gpr[31]);
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(8), ctx.gpr[18]);
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(4), ctx.gpr[17]);
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(0), ctx.gpr[16]);
    ctx.set_gpr(2, 2245u << 16u);
    ctx.set_gpr(17, rt.memory().aot_load32(ctx.gpr[2] + static_cast<std::uint32_t>(32016)));
    ctx.set_gpr(4, ctx.gpr[17] + 0u);
    ctx.set_gpr(31, 0x08988460u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0080_entry, 80u, 236u, 0x089451A8u>(ctx, &aot_mem) && ctx.pc == 0x08988460u) goto L_08988460;
    return;
L_08988460:
    ctx.set_gpr(18, ctx.gpr[2] + 0u);
    ctx.set_gpr(4, ctx.gpr[17] + 0u);
    ctx.set_gpr(5, 2228u << 16u);
    ctx.set_gpr(5, ctx.gpr[5] + static_cast<std::uint32_t>(12224));
    ctx.set_gpr(6, 0u + static_cast<std::uint32_t>(1));
    ctx.set_gpr(31, 0x0898847Cu);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0080_entry, 80u, 151u, 0x08944B98u>(ctx, &aot_mem) && ctx.pc == 0x0898847Cu) goto L_0898847C;
    return;
L_0898847C:
    ctx.set_gpr(4, ctx.gpr[17] + 0u);
    ctx.set_gpr(5, ctx.gpr[18] + 0u);
    ctx.set_gpr(31, 0x0898848Cu);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0080_entry, 80u, 148u, 0x08944B4Cu>(ctx, &aot_mem) && ctx.pc == 0x0898848Cu) goto L_0898848C;
    return;
L_0898848C:
    ctx.set_gpr(16, ctx.gpr[2] + 0u);
    ctx.set_gpr(31, 0x08988498u);
    // nop
    goto L_08988180;
L_08988498:
    rt.memory().aot_store32(ctx.gpr[16] + static_cast<std::uint32_t>(52), ctx.gpr[2]);
    ctx.set_gpr(2, 0u + static_cast<std::uint32_t>(1));
    rt.memory().aot_store8(ctx.gpr[16] + static_cast<std::uint32_t>(48), static_cast<std::uint8_t>(ctx.gpr[2]));
    ctx.set_gpr(4, ctx.gpr[17] + 0u);
    ctx.set_gpr(5, 2228u << 16u);
    ctx.set_gpr(5, ctx.gpr[5] + static_cast<std::uint32_t>(12240));
    ctx.set_gpr(6, 2228u << 16u);
    ctx.set_gpr(6, ctx.gpr[6] + static_cast<std::uint32_t>(12244));
    ctx.set_gpr(7, 2228u << 16u);
    ctx.set_gpr(7, ctx.gpr[7] + static_cast<std::uint32_t>(12248));
    ctx.set_gpr(8, ctx.gpr[18] + 0u);
    ctx.set_gpr(31, 0x089884CCu);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0080_entry, 80u, 162u, 0x08944C7Cu>(ctx, &aot_mem) && ctx.pc == 0x089884CCu) goto L_089884CC;
    return;
L_089884CC:
    ctx.set_gpr(3, 2201u << 16u);
    ctx.set_gpr(3, ctx.gpr[3] + static_cast<std::uint32_t>(-31476));
    ctx.set_gpr(2, 2245u << 16u);
    ctx.set_gpr(2, rt.memory().aot_load32(ctx.gpr[2] + static_cast<std::uint32_t>(32016)));
    rt.memory().aot_store32(ctx.gpr[2] + static_cast<std::uint32_t>(60), ctx.gpr[3]);
    ctx.set_gpr(4, 2201u << 16u);
    ctx.set_gpr(4, ctx.gpr[4] + static_cast<std::uint32_t>(-31412));
    ctx.set_gpr(31, 0x089884F0u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0080_entry, 80u, 237u, 0x089451B8u>(ctx, &aot_mem) && ctx.pc == 0x089884F0u) goto L_089884F0;
    return;
L_089884F0:
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
L_0898850C:
    ctx.set_gpr(29, ctx.gpr[29] + static_cast<std::uint32_t>(-16));
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(12), ctx.gpr[31]);
    ctx.set_gpr(31, 0x0898851Cu);
    // nop
    goto L_0898885C;
L_0898851C:
    ctx.set_gpr(31, rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(12)));
    ctx.set_gpr(29, ctx.gpr[29] + static_cast<std::uint32_t>(16));
    jump_target = ctx.gpr[31];
    // nop
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_0898852C:
    ctx.set_gpr(29, ctx.gpr[29] + static_cast<std::uint32_t>(-16));
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(12), ctx.gpr[31]);
    ctx.set_gpr(31, 0x0898853Cu);
    // nop
    goto L_08989A74;
L_0898853C:
    ctx.set_gpr(31, rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(12)));
    ctx.set_gpr(29, ctx.gpr[29] + static_cast<std::uint32_t>(16));
    jump_target = ctx.gpr[31];
    // nop
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_0898854C:
    ctx.set_gpr(29, ctx.gpr[29] + static_cast<std::uint32_t>(-16));
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(12), ctx.gpr[31]);
    ctx.set_gpr(31, 0x0898855Cu);
    // nop
    goto L_08989C80;
L_0898855C:
    ctx.set_gpr(31, rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(12)));
    ctx.set_gpr(29, ctx.gpr[29] + static_cast<std::uint32_t>(16));
    jump_target = ctx.gpr[31];
    // nop
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_0898856C:
    ctx.set_gpr(29, ctx.gpr[29] + static_cast<std::uint32_t>(-16));
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(12), ctx.gpr[31]);
    ctx.set_gpr(2, 2245u << 16u);
    ctx.set_gpr(2, rt.memory().aot_load32(ctx.gpr[2] + static_cast<std::uint32_t>(32024)));
    { const bool branch_taken = ctx.gpr[2] == 0u;
    // nop
      if (branch_taken) {
          goto L_08988598;
      }
      goto L_08988584;
    }
L_08988584:
    ctx.set_gpr(2, rt.memory().aot_load32(ctx.gpr[2] + static_cast<std::uint32_t>(36)));
    ctx.set_gpr(2, ctx.gpr[2] & 4u);
    ctx.set_gpr(2, 0u < ctx.gpr[2] ? 1u : 0u);
    { const bool branch_taken = ctx.gpr[2] != 0u;
    // nop
      if (branch_taken) {
          goto L_089885A0;
      }
      goto L_08988598;
    }
L_08988598:
    ctx.set_gpr(31, 0x089885A0u);
    // nop
    goto L_089885B8;
L_089885A0:
    ctx.set_gpr(2, 2245u << 16u);
    ctx.set_gpr(2, rt.memory().aot_load32(ctx.gpr[2] + static_cast<std::uint32_t>(32024)));
    ctx.set_gpr(31, rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(12)));
    ctx.set_gpr(29, ctx.gpr[29] + static_cast<std::uint32_t>(16));
    jump_target = ctx.gpr[31];
    // nop
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_089885B8:
    ctx.set_gpr(29, ctx.gpr[29] + static_cast<std::uint32_t>(-16));
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(12), ctx.gpr[31]);
    ctx.set_gpr(4, 2201u << 16u);
    ctx.set_gpr(4, ctx.gpr[4] + static_cast<std::uint32_t>(-31264));
    ctx.set_gpr(31, 0x089885D0u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0080_entry, 80u, 286u, 0x08945508u>(ctx, &aot_mem) && ctx.pc == 0x089885D0u) goto L_089885D0;
    return;
L_089885D0:
    ctx.set_gpr(31, rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(12)));
    ctx.set_gpr(29, ctx.gpr[29] + static_cast<std::uint32_t>(16));
    jump_target = ctx.gpr[31];
    // nop
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_089885E0:
    ctx.set_gpr(29, ctx.gpr[29] + static_cast<std::uint32_t>(-32));
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(28), ctx.gpr[31]);
    ctx.set_gpr(31, 0x089885F0u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0096_entry, 96u, 986u, 0x08987F7Cu>(ctx, &aot_mem) && ctx.pc == 0x089885F0u) goto L_089885F0;
    return;
L_089885F0:
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(0), 0u);
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(4), 0u);
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(8), 0u);
    ctx.set_gpr(4, 0u + static_cast<std::uint32_t>(1));
    ctx.set_gpr(5, 2245u << 16u);
    ctx.set_gpr(5, ctx.gpr[5] + static_cast<std::uint32_t>(32024));
    ctx.set_gpr(6, 2196u << 16u);
    ctx.set_gpr(6, ctx.gpr[6] + static_cast<std::uint32_t>(25520));
    ctx.set_gpr(7, 2188u << 16u);
    ctx.set_gpr(7, ctx.gpr[7] + static_cast<std::uint32_t>(-27092));
    ctx.set_gpr(8, 2201u << 16u);
    ctx.set_gpr(8, ctx.gpr[8] + static_cast<std::uint32_t>(-31160));
    ctx.set_gpr(9, 2228u << 16u);
    ctx.set_gpr(9, ctx.gpr[9] + static_cast<std::uint32_t>(12252));
    ctx.set_gpr(10, 0u + static_cast<std::uint32_t>(8));
    ctx.set_gpr(11, 0u + 0u);
    ctx.set_gpr(31, 0x08988638u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0080_entry, 80u, 294u, 0x08945594u>(ctx, &aot_mem) && ctx.pc == 0x08988638u) goto L_08988638;
    return;
L_08988638:
    ctx.set_gpr(31, rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(28)));
    ctx.set_gpr(29, ctx.gpr[29] + static_cast<std::uint32_t>(32));
    jump_target = ctx.gpr[31];
    // nop
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_08988648:
    ctx.set_gpr(29, ctx.gpr[29] + static_cast<std::uint32_t>(-16));
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(12), ctx.gpr[31]);
    ctx.set_gpr(31, 0x08988658u);
    // nop
    goto L_0898856C;
L_08988658:
    ctx.set_gpr(31, rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(12)));
    ctx.set_gpr(29, ctx.gpr[29] + static_cast<std::uint32_t>(16));
    jump_target = ctx.gpr[31];
    // nop
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_08988668:
    ctx.set_gpr(29, ctx.gpr[29] + static_cast<std::uint32_t>(-16));
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(12), ctx.gpr[31]);
    ctx.set_gpr(2, 2245u << 16u);
    ctx.set_gpr(2, rt.memory().aot_load32(ctx.gpr[2] + static_cast<std::uint32_t>(32028)));
    { const bool branch_taken = ctx.gpr[2] != 0u;
    // nop
      if (branch_taken) {
          goto L_089886A8;
      }
      goto L_08988680;
    }
L_08988680:
    ctx.set_gpr(31, 0x08988688u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0078_entry, 78u, 217u, 0x0893CDECu>(ctx, &aot_mem) && ctx.pc == 0x08988688u) goto L_08988688;
    return;
L_08988688:
    ctx.set_gpr(4, rt.memory().aot_load32(ctx.gpr[2] + static_cast<std::uint32_t>(0)));
    ctx.set_gpr(31, 0x08988694u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0078_entry, 78u, 199u, 0x0893CC68u>(ctx, &aot_mem) && ctx.pc == 0x08988694u) goto L_08988694;
    return;
L_08988694:
    ctx.set_gpr(4, ctx.gpr[2] + 0u);
    ctx.set_gpr(31, 0x089886A0u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0052_entry, 52u, 732u, 0x088D6FE8u>(ctx, &aot_mem) && ctx.pc == 0x089886A0u) goto L_089886A0;
    return;
L_089886A0:
    ctx.set_gpr(3, 2245u << 16u);
    rt.memory().aot_store32(ctx.gpr[3] + static_cast<std::uint32_t>(32028), ctx.gpr[2]);
    goto L_089886A8;
L_089886A8:
    ctx.set_gpr(2, 2245u << 16u);
    ctx.set_gpr(2, rt.memory().aot_load32(ctx.gpr[2] + static_cast<std::uint32_t>(32028)));
    ctx.set_gpr(31, rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(12)));
    ctx.set_gpr(29, ctx.gpr[29] + static_cast<std::uint32_t>(16));
    jump_target = ctx.gpr[31];
    // nop
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_089886C0:
    ctx.set_gpr(29, ctx.gpr[29] + static_cast<std::uint32_t>(-16));
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(12), ctx.gpr[31]);
    ctx.set_gpr(2, 2245u << 16u);
    ctx.set_gpr(2, rt.memory().aot_load32(ctx.gpr[2] + static_cast<std::uint32_t>(32028)));
    { const bool branch_taken = ctx.gpr[2] == 0u;
    // nop
      if (branch_taken) {
          goto L_089886EC;
      }
      goto L_089886D8;
    }
L_089886D8:
    ctx.set_gpr(2, rt.memory().aot_load32(ctx.gpr[2] + static_cast<std::uint32_t>(36)));
    ctx.set_gpr(2, ctx.gpr[2] & 4u);
    ctx.set_gpr(2, 0u < ctx.gpr[2] ? 1u : 0u);
    { const bool branch_taken = ctx.gpr[2] != 0u;
    // nop
      if (branch_taken) {
          goto L_089886F4;
      }
      goto L_089886EC;
    }
L_089886EC:
    ctx.set_gpr(31, 0x089886F4u);
    // nop
    goto L_08988750;
L_089886F4:
    ctx.set_gpr(2, 2245u << 16u);
    ctx.set_gpr(2, rt.memory().aot_load32(ctx.gpr[2] + static_cast<std::uint32_t>(32028)));
    ctx.set_gpr(31, rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(12)));
    ctx.set_gpr(29, ctx.gpr[29] + static_cast<std::uint32_t>(16));
    jump_target = ctx.gpr[31];
    // nop
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_0898870C:
    ctx.set_gpr(29, ctx.gpr[29] + static_cast<std::uint32_t>(-48));
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(12), ctx.gpr[31]);
    ctx.set_gpr(4, ctx.gpr[29] + static_cast<std::uint32_t>(28));
    ctx.set_gpr(31, 0x08988720u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0042_entry, 42u, 574u, 0x088ADBE0u>(ctx, &aot_mem) && ctx.pc == 0x08988720u) goto L_08988720;
    return;
L_08988720:
    ctx.set_gpr(2, 2232u << 16u);
    ctx.set_gpr(2, ctx.gpr[2] + static_cast<std::uint32_t>(21452));
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(28), ctx.gpr[2]);
    ctx.set_gpr(31, 0x08988734u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0064_entry, 64u, 444u, 0x08905FF0u>(ctx, &aot_mem) && ctx.pc == 0x08988734u) goto L_08988734;
    return;
L_08988734:
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
L_08988750:
    ctx.set_gpr(29, ctx.gpr[29] + static_cast<std::uint32_t>(-16));
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(12), ctx.gpr[31]);
    ctx.set_gpr(4, 2201u << 16u);
    ctx.set_gpr(4, ctx.gpr[4] + static_cast<std::uint32_t>(-30856));
    ctx.set_gpr(31, 0x08988768u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0080_entry, 80u, 286u, 0x08945508u>(ctx, &aot_mem) && ctx.pc == 0x08988768u) goto L_08988768;
    return;
L_08988768:
    ctx.set_gpr(31, rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(12)));
    ctx.set_gpr(29, ctx.gpr[29] + static_cast<std::uint32_t>(16));
    jump_target = ctx.gpr[31];
    // nop
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_08988778:
    ctx.set_gpr(29, ctx.gpr[29] + static_cast<std::uint32_t>(-32));
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(28), ctx.gpr[31]);
    ctx.set_gpr(31, 0x08988788u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0096_entry, 96u, 986u, 0x08987F7Cu>(ctx, &aot_mem) && ctx.pc == 0x08988788u) goto L_08988788;
    return;
L_08988788:
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(0), 0u);
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(4), 0u);
    ctx.set_gpr(2, 2228u << 16u);
    ctx.set_gpr(2, ctx.gpr[2] + static_cast<std::uint32_t>(12268));
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(8), ctx.gpr[2]);
    ctx.set_gpr(4, 0u + 0u);
    ctx.set_gpr(5, 2245u << 16u);
    ctx.set_gpr(5, ctx.gpr[5] + static_cast<std::uint32_t>(32028));
    ctx.set_gpr(6, 2191u << 16u);
    ctx.set_gpr(6, ctx.gpr[6] + static_cast<std::uint32_t>(-13396));
    ctx.set_gpr(7, 2187u << 16u);
    ctx.set_gpr(7, ctx.gpr[7] + static_cast<std::uint32_t>(-9000));
    ctx.set_gpr(8, 2201u << 16u);
    ctx.set_gpr(8, ctx.gpr[8] + static_cast<std::uint32_t>(-30740));
    ctx.set_gpr(9, 2228u << 16u);
    ctx.set_gpr(9, ctx.gpr[9] + static_cast<std::uint32_t>(12276));
    ctx.set_gpr(10, 0u + static_cast<std::uint32_t>(20));
    ctx.set_gpr(11, 2201u << 16u);
    ctx.set_gpr(11, ctx.gpr[11] + static_cast<std::uint32_t>(-30964));
    ctx.set_gpr(31, 0x089887DCu);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0080_entry, 80u, 294u, 0x08945594u>(ctx, &aot_mem) && ctx.pc == 0x089887DCu) goto L_089887DC;
    return;
L_089887DC:
    ctx.set_gpr(31, rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(28)));
    ctx.set_gpr(29, ctx.gpr[29] + static_cast<std::uint32_t>(32));
    jump_target = ctx.gpr[31];
    // nop
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_089887EC:
    ctx.set_gpr(29, ctx.gpr[29] + static_cast<std::uint32_t>(-16));
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(12), ctx.gpr[31]);
    ctx.set_gpr(31, 0x089887FCu);
    // nop
    goto L_089886C0;
L_089887FC:
    ctx.set_gpr(31, rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(12)));
    ctx.set_gpr(29, ctx.gpr[29] + static_cast<std::uint32_t>(16));
    jump_target = ctx.gpr[31];
    // nop
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_0898880C:
    ctx.set_gpr(2, 2246u << 16u);
    ctx.set_gpr(2, rt.memory().aot_load32(ctx.gpr[2] + static_cast<std::uint32_t>(-20668)));
    jump_target = ctx.gpr[31];
    // nop
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_0898881C:
    ctx.set_gpr(29, ctx.gpr[29] + static_cast<std::uint32_t>(-16));
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(12), ctx.gpr[31]);
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(8), ctx.gpr[16]);
    ctx.set_gpr(16, ctx.gpr[4] + 0u);
    ctx.set_gpr(31, 0x08988834u);
    // nop
    goto L_08988914;
L_08988834:
    ctx.set_gpr(2, 2245u << 16u);
    ctx.set_gpr(4, rt.memory().aot_load32(ctx.gpr[2] + static_cast<std::uint32_t>(32032)));
    ctx.set_gpr(5, ctx.gpr[16] + 0u);
    ctx.set_gpr(31, 0x08988848u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0080_entry, 80u, 50u, 0x089443D4u>(ctx, &aot_mem) && ctx.pc == 0x08988848u) goto L_08988848;
    return;
L_08988848:
    ctx.set_gpr(31, rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(12)));
    ctx.set_gpr(16, rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(8)));
    ctx.set_gpr(29, ctx.gpr[29] + static_cast<std::uint32_t>(16));
    jump_target = ctx.gpr[31];
    // nop
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_0898885C:
    ctx.set_gpr(29, ctx.gpr[29] + static_cast<std::uint32_t>(-16));
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(12), ctx.gpr[31]);
    ctx.set_gpr(2, 2245u << 16u);
    ctx.set_gpr(2, rt.memory().aot_load32(ctx.gpr[2] + static_cast<std::uint32_t>(32032)));
    { const bool branch_taken = ctx.gpr[2] == 0u;
    // nop
      if (branch_taken) {
          goto L_08988888;
      }
      goto L_08988874;
    }
L_08988874:
    ctx.set_gpr(2, rt.memory().aot_load32(ctx.gpr[2] + static_cast<std::uint32_t>(36)));
    ctx.set_gpr(2, ctx.gpr[2] & 4u);
    ctx.set_gpr(2, 0u < ctx.gpr[2] ? 1u : 0u);
    { const bool branch_taken = ctx.gpr[2] != 0u;
    // nop
      if (branch_taken) {
          goto L_08988890;
      }
      goto L_08988888;
    }
L_08988888:
    ctx.set_gpr(31, 0x08988890u);
    // nop
    goto L_08988914;
L_08988890:
    ctx.set_gpr(2, 2245u << 16u);
    ctx.set_gpr(2, rt.memory().aot_load32(ctx.gpr[2] + static_cast<std::uint32_t>(32032)));
    ctx.set_gpr(31, rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(12)));
    ctx.set_gpr(29, ctx.gpr[29] + static_cast<std::uint32_t>(16));
    jump_target = ctx.gpr[31];
    // nop
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_089888A8:
    ctx.set_gpr(29, ctx.gpr[29] + static_cast<std::uint32_t>(-96));
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(12), ctx.gpr[31]);
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(8), ctx.gpr[16]);
    ctx.set_gpr(4, ctx.gpr[29] + static_cast<std::uint32_t>(20));
    ctx.set_gpr(31, 0x089888C0u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0080_entry, 80u, 398u, 0x08945BF8u>(ctx, &aot_mem) && ctx.pc == 0x089888C0u) goto L_089888C0;
    return;
L_089888C0:
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(28), 0u);
    ctx.set_gpr(2, 2232u << 16u);
    ctx.set_gpr(2, ctx.gpr[2] + static_cast<std::uint32_t>(21080));
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(20), ctx.gpr[2]);
    ctx.set_gpr(31, 0x089888D8u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0064_entry, 64u, 444u, 0x08905FF0u>(ctx, &aot_mem) && ctx.pc == 0x089888D8u) goto L_089888D8;
    return;
L_089888D8:
    ctx.set_gpr(2, rt.memory().aot_load32(ctx.gpr[2] + static_cast<std::uint32_t>(932)));
    ctx.set_gpr(2, ctx.gpr[2] + ctx.gpr[29]);
    ctx.set_gpr(16, rt.memory().aot_load32(ctx.gpr[2] + static_cast<std::uint32_t>(20)));
    ctx.set_gpr(2, 2232u << 16u);
    ctx.set_gpr(2, ctx.gpr[2] + static_cast<std::uint32_t>(20912));
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(20), ctx.gpr[2]);
    ctx.set_gpr(4, rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(28)));
    ctx.set_gpr(31, 0x089888FCu);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0014_entry, 14u, 253u, 0x0883D42Cu>(ctx, &aot_mem) && ctx.pc == 0x089888FCu) goto L_089888FC;
    return;
L_089888FC:
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
L_08988914:
    ctx.set_gpr(29, ctx.gpr[29] + static_cast<std::uint32_t>(-16));
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(12), ctx.gpr[31]);
    ctx.set_gpr(4, 2201u << 16u);
    ctx.set_gpr(4, ctx.gpr[4] + static_cast<std::uint32_t>(-30404));
    ctx.set_gpr(31, 0x0898892Cu);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0080_entry, 80u, 286u, 0x08945508u>(ctx, &aot_mem) && ctx.pc == 0x0898892Cu) goto L_0898892C;
    return;
L_0898892C:
    ctx.set_gpr(31, rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(12)));
    ctx.set_gpr(29, ctx.gpr[29] + static_cast<std::uint32_t>(16));
    jump_target = ctx.gpr[31];
    // nop
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_0898893C:
    ctx.set_gpr(29, ctx.gpr[29] + static_cast<std::uint32_t>(-32));
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(28), ctx.gpr[31]);
    ctx.set_gpr(31, 0x0898894Cu);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0096_entry, 96u, 986u, 0x08987F7Cu>(ctx, &aot_mem) && ctx.pc == 0x0898894Cu) goto L_0898894C;
    return;
L_0898894C:
    ctx.set_gpr(2, 2201u << 16u);
    ctx.set_gpr(2, ctx.gpr[2] + static_cast<std::uint32_t>(-30272));
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(0), ctx.gpr[2]);
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(4), 0u);
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(8), 0u);
    ctx.set_gpr(4, 0u + 0u);
    ctx.set_gpr(5, 2245u << 16u);
    ctx.set_gpr(5, ctx.gpr[5] + static_cast<std::uint32_t>(32032));
    ctx.set_gpr(6, 2201u << 16u);
    ctx.set_gpr(6, ctx.gpr[6] + static_cast<std::uint32_t>(-31848));
    ctx.set_gpr(7, 2201u << 16u);
    ctx.set_gpr(7, ctx.gpr[7] + static_cast<std::uint32_t>(-30288));
    ctx.set_gpr(8, 2201u << 16u);
    ctx.set_gpr(8, ctx.gpr[8] + static_cast<std::uint32_t>(-31476));
    ctx.set_gpr(9, 2228u << 16u);
    ctx.set_gpr(9, ctx.gpr[9] + static_cast<std::uint32_t>(12296));
    ctx.set_gpr(10, 0u + static_cast<std::uint32_t>(76));
    ctx.set_gpr(11, 2201u << 16u);
    ctx.set_gpr(11, ctx.gpr[11] + static_cast<std::uint32_t>(-30552));
    ctx.set_gpr(31, 0x089889A0u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0080_entry, 80u, 294u, 0x08945594u>(ctx, &aot_mem) && ctx.pc == 0x089889A0u) goto L_089889A0;
    return;
L_089889A0:
    ctx.set_gpr(31, rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(28)));
    ctx.set_gpr(29, ctx.gpr[29] + static_cast<std::uint32_t>(32));
    jump_target = ctx.gpr[31];
    // nop
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_089889B0:
    ctx.set_gpr(2, 2245u << 16u);
    ctx.set_gpr(2, rt.memory().aot_load32(ctx.gpr[2] + static_cast<std::uint32_t>(32016)));
    jump_target = ctx.gpr[31];
    // nop
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_089889C0:
    ctx.set_gpr(29, ctx.gpr[29] + static_cast<std::uint32_t>(-16));
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(12), ctx.gpr[31]);
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(8), ctx.gpr[17]);
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(4), ctx.gpr[16]);
    ctx.set_gpr(2, 2245u << 16u);
    ctx.set_gpr(16, rt.memory().aot_load32(ctx.gpr[2] + static_cast<std::uint32_t>(32032)));
    ctx.set_gpr(4, ctx.gpr[16] + 0u);
    ctx.set_gpr(31, 0x089889E4u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0080_entry, 80u, 236u, 0x089451A8u>(ctx, &aot_mem) && ctx.pc == 0x089889E4u) goto L_089889E4;
    return;
L_089889E4:
    ctx.set_gpr(17, ctx.gpr[2] + 0u);
    ctx.set_gpr(4, ctx.gpr[16] + 0u);
    ctx.set_gpr(5, 2228u << 16u);
    ctx.set_gpr(5, ctx.gpr[5] + static_cast<std::uint32_t>(12324));
    ctx.set_gpr(6, 0u + static_cast<std::uint32_t>(16));
    ctx.set_gpr(31, 0x08988A00u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0080_entry, 80u, 151u, 0x08944B98u>(ctx, &aot_mem) && ctx.pc == 0x08988A00u) goto L_08988A00;
    return;
L_08988A00:
    ctx.set_gpr(4, ctx.gpr[16] + 0u);
    ctx.set_gpr(5, 2228u << 16u);
    ctx.set_gpr(5, ctx.gpr[5] + static_cast<std::uint32_t>(12828));
    ctx.set_gpr(6, 2228u << 16u);
    ctx.set_gpr(6, ctx.gpr[6] + static_cast<std::uint32_t>(12892));
    ctx.set_gpr(7, 2228u << 16u);
    ctx.set_gpr(7, ctx.gpr[7] + static_cast<std::uint32_t>(12956));
    ctx.set_gpr(8, ctx.gpr[17] + 0u);
    ctx.set_gpr(31, 0x08988A28u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0080_entry, 80u, 162u, 0x08944C7Cu>(ctx, &aot_mem) && ctx.pc == 0x08988A28u) goto L_08988A28;
    return;
L_08988A28:
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
L_08988A40:
    ctx.set_gpr(29, ctx.gpr[29] + static_cast<std::uint32_t>(-16));
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(12), ctx.gpr[31]);
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(8), ctx.gpr[16]);
    ctx.set_gpr(16, ctx.gpr[4] + 0u);
    ctx.set_gpr(31, 0x08988A58u);
    // nop
    goto L_08988ACC;
L_08988A58:
    ctx.set_gpr(2, 2245u << 16u);
    ctx.set_gpr(4, rt.memory().aot_load32(ctx.gpr[2] + static_cast<std::uint32_t>(32100)));
    ctx.set_gpr(5, ctx.gpr[16] + 0u);
    ctx.set_gpr(31, 0x08988A6Cu);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0080_entry, 80u, 50u, 0x089443D4u>(ctx, &aot_mem) && ctx.pc == 0x08988A6Cu) goto L_08988A6C;
    return;
L_08988A6C:
    ctx.set_gpr(31, rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(12)));
    ctx.set_gpr(16, rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(8)));
    ctx.set_gpr(29, ctx.gpr[29] + static_cast<std::uint32_t>(16));
    jump_target = ctx.gpr[31];
    // nop
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_08988A80:
    ctx.set_gpr(29, ctx.gpr[29] + static_cast<std::uint32_t>(-16));
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(12), ctx.gpr[31]);
    ctx.set_gpr(2, 2245u << 16u);
    ctx.set_gpr(2, rt.memory().aot_load32(ctx.gpr[2] + static_cast<std::uint32_t>(32100)));
    { const bool branch_taken = ctx.gpr[2] == 0u;
    // nop
      if (branch_taken) {
          goto L_08988AAC;
      }
      goto L_08988A98;
    }
L_08988A98:
    ctx.set_gpr(2, rt.memory().aot_load32(ctx.gpr[2] + static_cast<std::uint32_t>(36)));
    ctx.set_gpr(2, ctx.gpr[2] & 4u);
    ctx.set_gpr(2, 0u < ctx.gpr[2] ? 1u : 0u);
    { const bool branch_taken = ctx.gpr[2] != 0u;
    // nop
      if (branch_taken) {
          goto L_08988AB4;
      }
      goto L_08988AAC;
    }
L_08988AAC:
    ctx.set_gpr(31, 0x08988AB4u);
    // nop
    goto L_08988ACC;
L_08988AB4:
    ctx.set_gpr(2, 2245u << 16u);
    ctx.set_gpr(2, rt.memory().aot_load32(ctx.gpr[2] + static_cast<std::uint32_t>(32100)));
    ctx.set_gpr(31, rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(12)));
    ctx.set_gpr(29, ctx.gpr[29] + static_cast<std::uint32_t>(16));
    jump_target = ctx.gpr[31];
    // nop
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_08988ACC:
    ctx.set_gpr(29, ctx.gpr[29] + static_cast<std::uint32_t>(-16));
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(12), ctx.gpr[31]);
    ctx.set_gpr(4, 2201u << 16u);
    ctx.set_gpr(4, ctx.gpr[4] + static_cast<std::uint32_t>(-29964));
    ctx.set_gpr(31, 0x08988AE4u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0080_entry, 80u, 286u, 0x08945508u>(ctx, &aot_mem) && ctx.pc == 0x08988AE4u) goto L_08988AE4;
    return;
L_08988AE4:
    ctx.set_gpr(31, rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(12)));
    ctx.set_gpr(29, ctx.gpr[29] + static_cast<std::uint32_t>(16));
    jump_target = ctx.gpr[31];
    // nop
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_08988AF4:
    ctx.set_gpr(29, ctx.gpr[29] + static_cast<std::uint32_t>(-32));
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(28), ctx.gpr[31]);
    ctx.set_gpr(31, 0x08988B04u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0096_entry, 96u, 986u, 0x08987F7Cu>(ctx, &aot_mem) && ctx.pc == 0x08988B04u) goto L_08988B04;
    return;
L_08988B04:
    ctx.set_gpr(2, 2201u << 16u);
    ctx.set_gpr(2, ctx.gpr[2] + static_cast<std::uint32_t>(-29812));
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(0), ctx.gpr[2]);
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(4), 0u);
    ctx.set_gpr(2, 2228u << 16u);
    ctx.set_gpr(2, ctx.gpr[2] + static_cast<std::uint32_t>(13020));
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(8), ctx.gpr[2]);
    ctx.set_gpr(4, 0u + static_cast<std::uint32_t>(1));
    ctx.set_gpr(5, 2245u << 16u);
    ctx.set_gpr(5, ctx.gpr[5] + static_cast<std::uint32_t>(32100));
    ctx.set_gpr(6, 2201u << 16u);
    ctx.set_gpr(6, ctx.gpr[6] + static_cast<std::uint32_t>(-31264));
    ctx.set_gpr(7, 2201u << 16u);
    ctx.set_gpr(7, ctx.gpr[7] + static_cast<std::uint32_t>(-32460));
    ctx.set_gpr(8, 2201u << 16u);
    ctx.set_gpr(8, ctx.gpr[8] + static_cast<std::uint32_t>(-29844));
    ctx.set_gpr(9, 2228u << 16u);
    ctx.set_gpr(9, ctx.gpr[9] + static_cast<std::uint32_t>(13028));
    ctx.set_gpr(10, 0u + static_cast<std::uint32_t>(12));
    ctx.set_gpr(11, 0u + 0u);
    ctx.set_gpr(31, 0x08988B5Cu);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0080_entry, 80u, 294u, 0x08945594u>(ctx, &aot_mem) && ctx.pc == 0x08988B5Cu) goto L_08988B5C;
    return;
L_08988B5C:
    ctx.set_gpr(31, rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(28)));
    ctx.set_gpr(29, ctx.gpr[29] + static_cast<std::uint32_t>(32));
    jump_target = ctx.gpr[31];
    // nop
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_08988B6C:
    ctx.set_gpr(29, ctx.gpr[29] + static_cast<std::uint32_t>(-16));
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(12), ctx.gpr[31]);
    ctx.set_gpr(31, 0x08988B7Cu);
    // nop
    goto L_08988A80;
L_08988B7C:
    ctx.set_gpr(31, rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(12)));
    ctx.set_gpr(29, ctx.gpr[29] + static_cast<std::uint32_t>(16));
    jump_target = ctx.gpr[31];
    // nop
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_08988B8C:
    ctx.set_gpr(29, ctx.gpr[29] + static_cast<std::uint32_t>(-16));
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(12), ctx.gpr[31]);
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(8), ctx.gpr[18]);
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(4), ctx.gpr[17]);
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(0), ctx.gpr[16]);
    ctx.set_gpr(2, 2245u << 16u);
    ctx.set_gpr(17, rt.memory().aot_load32(ctx.gpr[2] + static_cast<std::uint32_t>(32100)));
    ctx.set_gpr(4, ctx.gpr[17] + 0u);
    ctx.set_gpr(31, 0x08988BB4u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0080_entry, 80u, 236u, 0x089451A8u>(ctx, &aot_mem) && ctx.pc == 0x08988BB4u) goto L_08988BB4;
    return;
L_08988BB4:
    ctx.set_gpr(18, ctx.gpr[2] + 0u);
    ctx.set_gpr(4, ctx.gpr[17] + 0u);
    ctx.set_gpr(5, 2228u << 16u);
    ctx.set_gpr(5, ctx.gpr[5] + static_cast<std::uint32_t>(13048));
    ctx.set_gpr(6, 0u + static_cast<std::uint32_t>(1));
    ctx.set_gpr(31, 0x08988BD0u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0080_entry, 80u, 151u, 0x08944B98u>(ctx, &aot_mem) && ctx.pc == 0x08988BD0u) goto L_08988BD0;
    return;
L_08988BD0:
    ctx.set_gpr(4, ctx.gpr[17] + 0u);
    ctx.set_gpr(5, ctx.gpr[18] + 0u);
    ctx.set_gpr(31, 0x08988BE0u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0080_entry, 80u, 148u, 0x08944B4Cu>(ctx, &aot_mem) && ctx.pc == 0x08988BE0u) goto L_08988BE0;
    return;
L_08988BE0:
    ctx.set_gpr(16, ctx.gpr[2] + 0u);
    ctx.set_gpr(31, 0x08988BECu);
    // nop
    goto L_08988668;
L_08988BEC:
    rt.memory().aot_store32(ctx.gpr[16] + static_cast<std::uint32_t>(52), ctx.gpr[2]);
    ctx.set_gpr(2, 0u + static_cast<std::uint32_t>(1));
    rt.memory().aot_store8(ctx.gpr[16] + static_cast<std::uint32_t>(48), static_cast<std::uint8_t>(ctx.gpr[2]));
    ctx.set_gpr(4, ctx.gpr[17] + 0u);
    ctx.set_gpr(5, 2228u << 16u);
    ctx.set_gpr(5, ctx.gpr[5] + static_cast<std::uint32_t>(13068));
    ctx.set_gpr(6, 2228u << 16u);
    ctx.set_gpr(6, ctx.gpr[6] + static_cast<std::uint32_t>(13072));
    ctx.set_gpr(7, 2228u << 16u);
    ctx.set_gpr(7, ctx.gpr[7] + static_cast<std::uint32_t>(13076));
    ctx.set_gpr(8, ctx.gpr[18] + 0u);
    ctx.set_gpr(31, 0x08988C20u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0080_entry, 80u, 162u, 0x08944C7Cu>(ctx, &aot_mem) && ctx.pc == 0x08988C20u) goto L_08988C20;
    return;
L_08988C20:
    ctx.set_gpr(4, 2201u << 16u);
    ctx.set_gpr(4, ctx.gpr[4] + static_cast<std::uint32_t>(-29616));
    ctx.set_gpr(3, 2245u << 16u);
    ctx.set_gpr(3, rt.memory().aot_load32(ctx.gpr[3] + static_cast<std::uint32_t>(32100)));
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
L_08988C50:
    ctx.set_gpr(29, ctx.gpr[29] + static_cast<std::uint32_t>(-16));
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(12), ctx.gpr[31]);
    ctx.set_gpr(31, 0x08988C60u);
    // nop
    goto L_08989130;
L_08988C60:
    ctx.set_gpr(31, rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(12)));
    ctx.set_gpr(29, ctx.gpr[29] + static_cast<std::uint32_t>(16));
    jump_target = ctx.gpr[31];
    // nop
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_08988C70:
    ctx.set_gpr(29, ctx.gpr[29] + static_cast<std::uint32_t>(-16));
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(12), ctx.gpr[31]);
    ctx.set_gpr(2, 2245u << 16u);
    ctx.set_gpr(2, rt.memory().aot_load32(ctx.gpr[2] + static_cast<std::uint32_t>(32108)));
    { const bool branch_taken = ctx.gpr[2] == 0u;
    // nop
      if (branch_taken) {
          goto L_08988C9C;
      }
      goto L_08988C88;
    }
L_08988C88:
    ctx.set_gpr(2, rt.memory().aot_load32(ctx.gpr[2] + static_cast<std::uint32_t>(36)));
    ctx.set_gpr(2, ctx.gpr[2] & 4u);
    ctx.set_gpr(2, 0u < ctx.gpr[2] ? 1u : 0u);
    { const bool branch_taken = ctx.gpr[2] != 0u;
    // nop
      if (branch_taken) {
          goto L_08988CA4;
      }
      goto L_08988C9C;
    }
L_08988C9C:
    ctx.set_gpr(31, 0x08988CA4u);
    // nop
    goto L_08988CBC;
L_08988CA4:
    ctx.set_gpr(2, 2245u << 16u);
    ctx.set_gpr(2, rt.memory().aot_load32(ctx.gpr[2] + static_cast<std::uint32_t>(32108)));
    ctx.set_gpr(31, rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(12)));
    ctx.set_gpr(29, ctx.gpr[29] + static_cast<std::uint32_t>(16));
    jump_target = ctx.gpr[31];
    // nop
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_08988CBC:
    ctx.set_gpr(29, ctx.gpr[29] + static_cast<std::uint32_t>(-16));
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(12), ctx.gpr[31]);
    ctx.set_gpr(4, 2201u << 16u);
    ctx.set_gpr(4, ctx.gpr[4] + static_cast<std::uint32_t>(-29468));
    ctx.set_gpr(31, 0x08988CD4u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0080_entry, 80u, 286u, 0x08945508u>(ctx, &aot_mem) && ctx.pc == 0x08988CD4u) goto L_08988CD4;
    return;
L_08988CD4:
    ctx.set_gpr(31, rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(12)));
    ctx.set_gpr(29, ctx.gpr[29] + static_cast<std::uint32_t>(16));
    jump_target = ctx.gpr[31];
    // nop
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_08988CE4:
    ctx.set_gpr(29, ctx.gpr[29] + static_cast<std::uint32_t>(-32));
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(28), ctx.gpr[31]);
    ctx.set_gpr(31, 0x08988CF4u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0096_entry, 96u, 986u, 0x08987F7Cu>(ctx, &aot_mem) && ctx.pc == 0x08988CF4u) goto L_08988CF4;
    return;
L_08988CF4:
    ctx.set_gpr(2, 2201u << 16u);
    ctx.set_gpr(2, ctx.gpr[2] + static_cast<std::uint32_t>(-29324));
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(0), ctx.gpr[2]);
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(4), 0u);
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(8), 0u);
    ctx.set_gpr(4, 0u + static_cast<std::uint32_t>(1));
    ctx.set_gpr(5, 2245u << 16u);
    ctx.set_gpr(5, ctx.gpr[5] + static_cast<std::uint32_t>(32108));
    ctx.set_gpr(6, 2201u << 16u);
    ctx.set_gpr(6, ctx.gpr[6] + static_cast<std::uint32_t>(-31264));
    ctx.set_gpr(7, 2201u << 16u);
    ctx.set_gpr(7, ctx.gpr[7] + static_cast<std::uint32_t>(-32460));
    ctx.set_gpr(8, 2201u << 16u);
    ctx.set_gpr(8, ctx.gpr[8] + static_cast<std::uint32_t>(-29356));
    ctx.set_gpr(9, 2228u << 16u);
    ctx.set_gpr(9, ctx.gpr[9] + static_cast<std::uint32_t>(13080));
    ctx.set_gpr(10, 0u + static_cast<std::uint32_t>(16));
    ctx.set_gpr(11, 0u + 0u);
    ctx.set_gpr(31, 0x08988D44u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0080_entry, 80u, 294u, 0x08945594u>(ctx, &aot_mem) && ctx.pc == 0x08988D44u) goto L_08988D44;
    return;
L_08988D44:
    ctx.set_gpr(31, rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(28)));
    ctx.set_gpr(29, ctx.gpr[29] + static_cast<std::uint32_t>(32));
    jump_target = ctx.gpr[31];
    // nop
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_08988D54:
    ctx.set_gpr(29, ctx.gpr[29] + static_cast<std::uint32_t>(-16));
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(12), ctx.gpr[31]);
    ctx.set_gpr(31, 0x08988D64u);
    // nop
    goto L_08988C70;
L_08988D64:
    ctx.set_gpr(31, rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(12)));
    ctx.set_gpr(29, ctx.gpr[29] + static_cast<std::uint32_t>(16));
    jump_target = ctx.gpr[31];
    // nop
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_08988D74:
    ctx.set_gpr(29, ctx.gpr[29] + static_cast<std::uint32_t>(-16));
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(12), ctx.gpr[31]);
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(8), ctx.gpr[18]);
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(4), ctx.gpr[17]);
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(0), ctx.gpr[16]);
    ctx.set_gpr(2, 2245u << 16u);
    ctx.set_gpr(17, rt.memory().aot_load32(ctx.gpr[2] + static_cast<std::uint32_t>(32108)));
    ctx.set_gpr(4, ctx.gpr[17] + 0u);
    ctx.set_gpr(31, 0x08988D9Cu);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0080_entry, 80u, 236u, 0x089451A8u>(ctx, &aot_mem) && ctx.pc == 0x08988D9Cu) goto L_08988D9C;
    return;
L_08988D9C:
    ctx.set_gpr(18, ctx.gpr[2] + 0u);
    ctx.set_gpr(4, ctx.gpr[17] + 0u);
    ctx.set_gpr(5, 2228u << 16u);
    ctx.set_gpr(5, ctx.gpr[5] + static_cast<std::uint32_t>(13096));
    ctx.set_gpr(6, 0u + static_cast<std::uint32_t>(2));
    ctx.set_gpr(31, 0x08988DB8u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0080_entry, 80u, 151u, 0x08944B98u>(ctx, &aot_mem) && ctx.pc == 0x08988DB8u) goto L_08988DB8;
    return;
L_08988DB8:
    ctx.set_gpr(4, ctx.gpr[17] + 0u);
    ctx.set_gpr(5, ctx.gpr[18] + 0u);
    ctx.set_gpr(31, 0x08988DC8u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0080_entry, 80u, 148u, 0x08944B4Cu>(ctx, &aot_mem) && ctx.pc == 0x08988DC8u) goto L_08988DC8;
    return;
L_08988DC8:
    ctx.set_gpr(16, ctx.gpr[2] + 0u);
    ctx.set_gpr(31, 0x08988DD4u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0053_entry, 53u, 415u, 0x088DA21Cu>(ctx, &aot_mem) && ctx.pc == 0x08988DD4u) goto L_08988DD4;
    return;
L_08988DD4:
    rt.memory().aot_store32(ctx.gpr[16] + static_cast<std::uint32_t>(56), ctx.gpr[2]);
    ctx.set_gpr(2, 0u + static_cast<std::uint32_t>(1));
    rt.memory().aot_store8(ctx.gpr[16] + static_cast<std::uint32_t>(49), static_cast<std::uint8_t>(ctx.gpr[2]));
    rt.memory().aot_store8(ctx.gpr[16] + static_cast<std::uint32_t>(60), static_cast<std::uint8_t>(ctx.gpr[2]));
    rt.memory().aot_store8(ctx.gpr[16] + static_cast<std::uint32_t>(61), static_cast<std::uint8_t>(ctx.gpr[2]));
    ctx.set_gpr(4, ctx.gpr[17] + 0u);
    ctx.set_gpr(5, 2228u << 16u);
    ctx.set_gpr(5, ctx.gpr[5] + static_cast<std::uint32_t>(13128));
    ctx.set_gpr(6, 2228u << 16u);
    ctx.set_gpr(6, ctx.gpr[6] + static_cast<std::uint32_t>(13136));
    ctx.set_gpr(7, 2228u << 16u);
    ctx.set_gpr(7, ctx.gpr[7] + static_cast<std::uint32_t>(13144));
    ctx.set_gpr(8, ctx.gpr[18] + 0u);
    ctx.set_gpr(31, 0x08988E10u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0080_entry, 80u, 162u, 0x08944C7Cu>(ctx, &aot_mem) && ctx.pc == 0x08988E10u) goto L_08988E10;
    return;
L_08988E10:
    ctx.set_gpr(4, 2201u << 16u);
    ctx.set_gpr(4, ctx.gpr[4] + static_cast<std::uint32_t>(-29120));
    ctx.set_gpr(3, 2245u << 16u);
    ctx.set_gpr(3, rt.memory().aot_load32(ctx.gpr[3] + static_cast<std::uint32_t>(32108)));
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
L_08988E40:
    ctx.set_gpr(29, ctx.gpr[29] + static_cast<std::uint32_t>(-16));
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(12), ctx.gpr[31]);
    ctx.set_gpr(31, 0x08988E50u);
    // nop
    goto L_089892CC;
L_08988E50:
    ctx.set_gpr(31, rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(12)));
    ctx.set_gpr(29, ctx.gpr[29] + static_cast<std::uint32_t>(16));
    jump_target = ctx.gpr[31];
    // nop
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_08988E60:
    ctx.set_gpr(29, ctx.gpr[29] + static_cast<std::uint32_t>(-16));
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(12), ctx.gpr[31]);
    ctx.set_gpr(2, 2245u << 16u);
    ctx.set_gpr(2, rt.memory().aot_load32(ctx.gpr[2] + static_cast<std::uint32_t>(32120)));
    { const bool branch_taken = ctx.gpr[2] == 0u;
    // nop
      if (branch_taken) {
          goto L_08988E8C;
      }
      goto L_08988E78;
    }
L_08988E78:
    ctx.set_gpr(2, rt.memory().aot_load32(ctx.gpr[2] + static_cast<std::uint32_t>(36)));
    ctx.set_gpr(2, ctx.gpr[2] & 4u);
    ctx.set_gpr(2, 0u < ctx.gpr[2] ? 1u : 0u);
    { const bool branch_taken = ctx.gpr[2] != 0u;
    // nop
      if (branch_taken) {
          goto L_08988E94;
      }
      goto L_08988E8C;
    }
L_08988E8C:
    ctx.set_gpr(31, 0x08988E94u);
    // nop
    goto L_08988F60;
L_08988E94:
    ctx.set_gpr(2, 2245u << 16u);
    ctx.set_gpr(2, rt.memory().aot_load32(ctx.gpr[2] + static_cast<std::uint32_t>(32120)));
    ctx.set_gpr(31, rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(12)));
    ctx.set_gpr(29, ctx.gpr[29] + static_cast<std::uint32_t>(16));
    jump_target = ctx.gpr[31];
    // nop
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_08988EAC:
    ctx.set_gpr(29, ctx.gpr[29] + static_cast<std::uint32_t>(-64));
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(12), ctx.gpr[31]);
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(8), ctx.gpr[16]);
    ctx.set_gpr(4, ctx.gpr[29] + static_cast<std::uint32_t>(28));
    ctx.set_gpr(31, 0x08988EC4u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0080_entry, 80u, 398u, 0x08945BF8u>(ctx, &aot_mem) && ctx.pc == 0x08988EC4u) goto L_08988EC4;
    return;
L_08988EC4:
    ctx.set_gpr(2, 2232u << 16u);
    ctx.set_gpr(2, ctx.gpr[2] + static_cast<std::uint32_t>(20480));
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(28), ctx.gpr[2]);
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(52), 0u);
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(56), 0u);
    ctx.set_gpr(31, 0x08988EE0u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0064_entry, 64u, 444u, 0x08905FF0u>(ctx, &aot_mem) && ctx.pc == 0x08988EE0u) goto L_08988EE0;
    return;
L_08988EE0:
    ctx.set_gpr(2, rt.memory().aot_load32(ctx.gpr[2] + static_cast<std::uint32_t>(932)));
    ctx.set_gpr(2, ctx.gpr[2] + ctx.gpr[29]);
    ctx.set_gpr(16, rt.memory().aot_load32(ctx.gpr[2] + static_cast<std::uint32_t>(28)));
    ctx.set_gpr(2, 2232u << 16u);
    ctx.set_gpr(2, ctx.gpr[2] + static_cast<std::uint32_t>(20480));
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(28), ctx.gpr[2]);
    ctx.set_gpr(2, rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(56)));
    ctx.set_gpr(2, 0u < ctx.gpr[2] ? 1u : 0u);
    { const bool branch_taken = ctx.gpr[2] == 0u;
    // nop
      if (branch_taken) {
          goto L_08988F1C;
      }
      goto L_08988F08;
    }
L_08988F08:
    ctx.set_gpr(4, ctx.gpr[29] + static_cast<std::uint32_t>(56));
    ctx.set_gpr(31, 0x08988F14u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0019_entry, 19u, 781u, 0x0885315Cu>(ctx, &aot_mem) && ctx.pc == 0x08988F14u) goto L_08988F14;
    return;
L_08988F14:
    ctx.set_gpr(2, 0u < ctx.gpr[2] ? 1u : 0u);
    ctx.set_gpr(2, ctx.gpr[2] ^ 1u);
    goto L_08988F1C;
L_08988F1C:
    { const bool branch_taken = ctx.gpr[2] == 0u;
    // nop
      if (branch_taken) {
          goto L_08988F34;
      }
      goto L_08988F24;
    }
L_08988F24:
    ctx.set_gpr(2, rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(56)));
    ctx.set_gpr(4, ctx.gpr[2] + static_cast<std::uint32_t>(-8));
    ctx.set_gpr(31, 0x08988F34u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0019_entry, 19u, 770u, 0x088530D0u>(ctx, &aot_mem) && ctx.pc == 0x08988F34u) goto L_08988F34;
    return;
L_08988F34:
    ctx.set_gpr(4, rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(52)));
    { const bool branch_taken = ctx.gpr[4] == 0u;
    // nop
      if (branch_taken) {
          goto L_08988F48;
      }
      goto L_08988F40;
    }
L_08988F40:
    ctx.set_gpr(31, 0x08988F48u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0014_entry, 14u, 257u, 0x0883D454u>(ctx, &aot_mem) && ctx.pc == 0x08988F48u) goto L_08988F48;
    return;
L_08988F48:
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
L_08988F60:
    ctx.set_gpr(29, ctx.gpr[29] + static_cast<std::uint32_t>(-16));
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(12), ctx.gpr[31]);
    ctx.set_gpr(4, 2201u << 16u);
    ctx.set_gpr(4, ctx.gpr[4] + static_cast<std::uint32_t>(-28792));
    ctx.set_gpr(31, 0x08988F78u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0080_entry, 80u, 286u, 0x08945508u>(ctx, &aot_mem) && ctx.pc == 0x08988F78u) goto L_08988F78;
    return;
L_08988F78:
    ctx.set_gpr(31, rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(12)));
    ctx.set_gpr(29, ctx.gpr[29] + static_cast<std::uint32_t>(16));
    jump_target = ctx.gpr[31];
    // nop
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_08988F88:
    ctx.set_gpr(29, ctx.gpr[29] + static_cast<std::uint32_t>(-32));
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(28), ctx.gpr[31]);
    ctx.set_gpr(31, 0x08988F98u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0096_entry, 96u, 986u, 0x08987F7Cu>(ctx, &aot_mem) && ctx.pc == 0x08988F98u) goto L_08988F98;
    return;
L_08988F98:
    ctx.set_gpr(2, 2201u << 16u);
    ctx.set_gpr(2, ctx.gpr[2] + static_cast<std::uint32_t>(-28652));
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(0), ctx.gpr[2]);
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(4), 0u);
    ctx.set_gpr(2, 2228u << 16u);
    ctx.set_gpr(2, ctx.gpr[2] + static_cast<std::uint32_t>(13152));
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(8), ctx.gpr[2]);
    ctx.set_gpr(4, 0u + 0u);
    ctx.set_gpr(5, 2245u << 16u);
    ctx.set_gpr(5, ctx.gpr[5] + static_cast<std::uint32_t>(32120));
    ctx.set_gpr(6, 2201u << 16u);
    ctx.set_gpr(6, ctx.gpr[6] + static_cast<std::uint32_t>(-32604));
    ctx.set_gpr(7, 2201u << 16u);
    ctx.set_gpr(7, ctx.gpr[7] + static_cast<std::uint32_t>(-28668));
    ctx.set_gpr(8, 2201u << 16u);
    ctx.set_gpr(8, ctx.gpr[8] + static_cast<std::uint32_t>(-32416));
    ctx.set_gpr(9, 2228u << 16u);
    ctx.set_gpr(9, ctx.gpr[9] + static_cast<std::uint32_t>(13160));
    ctx.set_gpr(10, 0u + static_cast<std::uint32_t>(36));
    ctx.set_gpr(11, 2201u << 16u);
    ctx.set_gpr(11, ctx.gpr[11] + static_cast<std::uint32_t>(-29012));
    ctx.set_gpr(31, 0x08988FF4u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0080_entry, 80u, 294u, 0x08945594u>(ctx, &aot_mem) && ctx.pc == 0x08988FF4u) goto L_08988FF4;
    return;
L_08988FF4:
    ctx.set_gpr(31, rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(28)));
    ctx.set_gpr(29, ctx.gpr[29] + static_cast<std::uint32_t>(32));
    jump_target = ctx.gpr[31];
    // nop
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_08989004:
    ctx.set_gpr(2, 2245u << 16u);
    ctx.set_gpr(2, rt.memory().aot_load32(ctx.gpr[2] + static_cast<std::uint32_t>(32008)));
    jump_target = ctx.gpr[31];
    // nop
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_08989014:
    ctx.set_gpr(29, ctx.gpr[29] + static_cast<std::uint32_t>(-16));
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(12), ctx.gpr[31]);
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(8), ctx.gpr[18]);
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(4), ctx.gpr[17]);
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(0), ctx.gpr[16]);
    ctx.set_gpr(2, 2245u << 16u);
    ctx.set_gpr(17, rt.memory().aot_load32(ctx.gpr[2] + static_cast<std::uint32_t>(32120)));
    ctx.set_gpr(4, ctx.gpr[17] + 0u);
    ctx.set_gpr(31, 0x0898903Cu);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0080_entry, 80u, 236u, 0x089451A8u>(ctx, &aot_mem) && ctx.pc == 0x0898903Cu) goto L_0898903C;
    return;
L_0898903C:
    ctx.set_gpr(18, ctx.gpr[2] + 0u);
    ctx.set_gpr(4, ctx.gpr[17] + 0u);
    ctx.set_gpr(5, 2228u << 16u);
    ctx.set_gpr(5, ctx.gpr[5] + static_cast<std::uint32_t>(13172));
    ctx.set_gpr(6, 0u + static_cast<std::uint32_t>(7));
    ctx.set_gpr(31, 0x08989058u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0080_entry, 80u, 151u, 0x08944B98u>(ctx, &aot_mem) && ctx.pc == 0x08989058u) goto L_08989058;
    return;
L_08989058:
    ctx.set_gpr(4, ctx.gpr[17] + 0u);
    ctx.set_gpr(5, ctx.gpr[18] + 0u);
    ctx.set_gpr(31, 0x08989068u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0080_entry, 80u, 148u, 0x08944B4Cu>(ctx, &aot_mem) && ctx.pc == 0x08989068u) goto L_08989068;
    return;
L_08989068:
    ctx.set_gpr(4, ctx.gpr[2] + 0u);
    ctx.set_gpr(5, 0u + static_cast<std::uint32_t>(480));
    ctx.set_gpr(31, 0x08989078u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0072_entry, 72u, 648u, 0x08926D64u>(ctx, &aot_mem) && ctx.pc == 0x08989078u) goto L_08989078;
    return;
L_08989078:
    ctx.set_gpr(5, ctx.gpr[18] + static_cast<std::uint32_t>(1));
    ctx.set_gpr(4, ctx.gpr[17] + 0u);
    ctx.set_gpr(31, 0x08989088u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0080_entry, 80u, 148u, 0x08944B4Cu>(ctx, &aot_mem) && ctx.pc == 0x08989088u) goto L_08989088;
    return;
L_08989088:
    ctx.set_gpr(4, ctx.gpr[2] + 0u);
    ctx.set_gpr(5, 0u + static_cast<std::uint32_t>(272));
    ctx.set_gpr(31, 0x08989098u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0072_entry, 72u, 648u, 0x08926D64u>(ctx, &aot_mem) && ctx.pc == 0x08989098u) goto L_08989098;
    return;
L_08989098:
    ctx.set_gpr(5, ctx.gpr[18] + static_cast<std::uint32_t>(4));
    ctx.set_gpr(4, ctx.gpr[17] + 0u);
    ctx.set_gpr(31, 0x089890A8u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0080_entry, 80u, 148u, 0x08944B4Cu>(ctx, &aot_mem) && ctx.pc == 0x089890A8u) goto L_089890A8;
    return;
L_089890A8:
    ctx.set_gpr(16, ctx.gpr[2] + 0u);
    ctx.set_gpr(31, 0x089890B4u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0098_entry, 98u, 54u, 0x0898C4FCu>(ctx, &aot_mem) && ctx.pc == 0x089890B4u) goto L_089890B4;
    return;
L_089890B4:
    rt.memory().aot_store32(ctx.gpr[16] + static_cast<std::uint32_t>(52), ctx.gpr[2]);
    ctx.set_gpr(5, ctx.gpr[18] + static_cast<std::uint32_t>(5));
    ctx.set_gpr(4, ctx.gpr[17] + 0u);
    ctx.set_gpr(31, 0x089890C8u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0080_entry, 80u, 148u, 0x08944B4Cu>(ctx, &aot_mem) && ctx.pc == 0x089890C8u) goto L_089890C8;
    return;
L_089890C8:
    ctx.set_gpr(4, ctx.gpr[2] + 0u);
    ctx.set_gpr(5, 0u + 0u);
    ctx.set_gpr(31, 0x089890D8u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0085_entry, 85u, 280u, 0x08959444u>(ctx, &aot_mem) && ctx.pc == 0x089890D8u) goto L_089890D8;
    return;
L_089890D8:
    ctx.set_gpr(4, ctx.gpr[17] + 0u);
    ctx.set_gpr(5, 2228u << 16u);
    ctx.set_gpr(5, ctx.gpr[5] + static_cast<std::uint32_t>(13264));
    ctx.set_gpr(6, 2228u << 16u);
    ctx.set_gpr(6, ctx.gpr[6] + static_cast<std::uint32_t>(13292));
    ctx.set_gpr(7, 2228u << 16u);
    ctx.set_gpr(7, ctx.gpr[7] + static_cast<std::uint32_t>(13320));
    ctx.set_gpr(8, ctx.gpr[18] + 0u);
    ctx.set_gpr(31, 0x08989100u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0080_entry, 80u, 162u, 0x08944C7Cu>(ctx, &aot_mem) && ctx.pc == 0x08989100u) goto L_08989100;
    return;
L_08989100:
    ctx.set_gpr(4, 2201u << 16u);
    ctx.set_gpr(4, ctx.gpr[4] + static_cast<std::uint32_t>(-32492));
    ctx.set_gpr(3, 2245u << 16u);
    ctx.set_gpr(3, rt.memory().aot_load32(ctx.gpr[3] + static_cast<std::uint32_t>(32120)));
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
L_08989130:
    ctx.set_gpr(29, ctx.gpr[29] + static_cast<std::uint32_t>(-16));
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(12), ctx.gpr[31]);
    ctx.set_gpr(2, 2245u << 16u);
    ctx.set_gpr(2, rt.memory().aot_load32(ctx.gpr[2] + static_cast<std::uint32_t>(32152)));
    { const bool branch_taken = ctx.gpr[2] == 0u;
    // nop
      if (branch_taken) {
          goto L_0898915C;
      }
      goto L_08989148;
    }
L_08989148:
    ctx.set_gpr(2, rt.memory().aot_load32(ctx.gpr[2] + static_cast<std::uint32_t>(36)));
    ctx.set_gpr(2, ctx.gpr[2] & 4u);
    ctx.set_gpr(2, 0u < ctx.gpr[2] ? 1u : 0u);
    { const bool branch_taken = ctx.gpr[2] != 0u;
    // nop
      if (branch_taken) {
          goto L_08989164;
      }
      goto L_0898915C;
    }
L_0898915C:
    ctx.set_gpr(31, 0x08989164u);
    // nop
    goto L_089891E8;
L_08989164:
    ctx.set_gpr(2, 2245u << 16u);
    ctx.set_gpr(2, rt.memory().aot_load32(ctx.gpr[2] + static_cast<std::uint32_t>(32152)));
    ctx.set_gpr(31, rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(12)));
    ctx.set_gpr(29, ctx.gpr[29] + static_cast<std::uint32_t>(16));
    jump_target = ctx.gpr[31];
    // nop
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_0898917C:
    ctx.set_gpr(29, ctx.gpr[29] + static_cast<std::uint32_t>(-32));
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(12), ctx.gpr[31]);
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(8), ctx.gpr[16]);
    ctx.set_gpr(4, ctx.gpr[29] + static_cast<std::uint32_t>(20));
    ctx.set_gpr(31, 0x08989194u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0080_entry, 80u, 398u, 0x08945BF8u>(ctx, &aot_mem) && ctx.pc == 0x08989194u) goto L_08989194;
    return;
L_08989194:
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(28), 0u);
    ctx.set_gpr(2, 2232u << 16u);
    ctx.set_gpr(2, ctx.gpr[2] + static_cast<std::uint32_t>(20656));
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(20), ctx.gpr[2]);
    ctx.set_gpr(31, 0x089891ACu);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0064_entry, 64u, 444u, 0x08905FF0u>(ctx, &aot_mem) && ctx.pc == 0x089891ACu) goto L_089891AC;
    return;
L_089891AC:
    ctx.set_gpr(2, rt.memory().aot_load32(ctx.gpr[2] + static_cast<std::uint32_t>(932)));
    ctx.set_gpr(2, ctx.gpr[2] + ctx.gpr[29]);
    ctx.set_gpr(16, rt.memory().aot_load32(ctx.gpr[2] + static_cast<std::uint32_t>(20)));
    ctx.set_gpr(2, 2232u << 16u);
    ctx.set_gpr(2, ctx.gpr[2] + static_cast<std::uint32_t>(21248));
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(20), ctx.gpr[2]);
    ctx.set_gpr(4, rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(28)));
    ctx.set_gpr(31, 0x089891D0u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0014_entry, 14u, 253u, 0x0883D42Cu>(ctx, &aot_mem) && ctx.pc == 0x089891D0u) goto L_089891D0;
    return;
L_089891D0:
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
L_089891E8:
    ctx.set_gpr(29, ctx.gpr[29] + static_cast<std::uint32_t>(-16));
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(12), ctx.gpr[31]);
    ctx.set_gpr(4, 2201u << 16u);
    ctx.set_gpr(4, ctx.gpr[4] + static_cast<std::uint32_t>(-28144));
    ctx.set_gpr(31, 0x08989200u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0080_entry, 80u, 286u, 0x08945508u>(ctx, &aot_mem) && ctx.pc == 0x08989200u) goto L_08989200;
    return;
L_08989200:
    ctx.set_gpr(31, rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(12)));
    ctx.set_gpr(29, ctx.gpr[29] + static_cast<std::uint32_t>(16));
    jump_target = ctx.gpr[31];
    // nop
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_08989210:
    ctx.set_gpr(29, ctx.gpr[29] + static_cast<std::uint32_t>(-32));
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(28), ctx.gpr[31]);
    ctx.set_gpr(31, 0x08989220u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0096_entry, 96u, 986u, 0x08987F7Cu>(ctx, &aot_mem) && ctx.pc == 0x08989220u) goto L_08989220;
    return;
L_08989220:
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(0), 0u);
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(4), 0u);
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(8), 0u);
    ctx.set_gpr(4, 0u + 0u);
    ctx.set_gpr(5, 2245u << 16u);
    ctx.set_gpr(5, ctx.gpr[5] + static_cast<std::uint32_t>(32152));
    ctx.set_gpr(6, 2201u << 16u);
    ctx.set_gpr(6, ctx.gpr[6] + static_cast<std::uint32_t>(-29964));
    ctx.set_gpr(7, 2201u << 16u);
    ctx.set_gpr(7, ctx.gpr[7] + static_cast<std::uint32_t>(-28036));
    ctx.set_gpr(8, 2201u << 16u);
    ctx.set_gpr(8, ctx.gpr[8] + static_cast<std::uint32_t>(-29616));
    ctx.set_gpr(9, 2228u << 16u);
    ctx.set_gpr(9, ctx.gpr[9] + static_cast<std::uint32_t>(13348));
    ctx.set_gpr(10, 0u + static_cast<std::uint32_t>(12));
    ctx.set_gpr(11, 2201u << 16u);
    ctx.set_gpr(11, ctx.gpr[11] + static_cast<std::uint32_t>(-28292));
    ctx.set_gpr(31, 0x0898926Cu);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0080_entry, 80u, 294u, 0x08945594u>(ctx, &aot_mem) && ctx.pc == 0x0898926Cu) goto L_0898926C;
    return;
L_0898926C:
    ctx.set_gpr(31, rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(28)));
    ctx.set_gpr(29, ctx.gpr[29] + static_cast<std::uint32_t>(32));
    jump_target = ctx.gpr[31];
    // nop
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_0898927C:
    ctx.set_gpr(2, 2245u << 16u);
    ctx.set_gpr(2, rt.memory().aot_load32(ctx.gpr[2] + static_cast<std::uint32_t>(32100)));
    jump_target = ctx.gpr[31];
    // nop
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_0898928C:
    ctx.set_gpr(29, ctx.gpr[29] + static_cast<std::uint32_t>(-16));
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(12), ctx.gpr[31]);
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(8), ctx.gpr[16]);
    ctx.set_gpr(16, ctx.gpr[4] + 0u);
    ctx.set_gpr(31, 0x089892A4u);
    // nop
    goto L_089893AC;
L_089892A4:
    ctx.set_gpr(2, 2245u << 16u);
    ctx.set_gpr(4, rt.memory().aot_load32(ctx.gpr[2] + static_cast<std::uint32_t>(32156)));
    ctx.set_gpr(5, ctx.gpr[16] + 0u);
    ctx.set_gpr(31, 0x089892B8u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0080_entry, 80u, 50u, 0x089443D4u>(ctx, &aot_mem) && ctx.pc == 0x089892B8u) goto L_089892B8;
    return;
L_089892B8:
    ctx.set_gpr(31, rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(12)));
    ctx.set_gpr(16, rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(8)));
    ctx.set_gpr(29, ctx.gpr[29] + static_cast<std::uint32_t>(16));
    jump_target = ctx.gpr[31];
    // nop
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_089892CC:
    ctx.set_gpr(29, ctx.gpr[29] + static_cast<std::uint32_t>(-16));
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(12), ctx.gpr[31]);
    ctx.set_gpr(2, 2245u << 16u);
    ctx.set_gpr(2, rt.memory().aot_load32(ctx.gpr[2] + static_cast<std::uint32_t>(32156)));
    { const bool branch_taken = ctx.gpr[2] == 0u;
    // nop
      if (branch_taken) {
          goto L_089892F8;
      }
      goto L_089892E4;
    }
L_089892E4:
    ctx.set_gpr(2, rt.memory().aot_load32(ctx.gpr[2] + static_cast<std::uint32_t>(36)));
    ctx.set_gpr(2, ctx.gpr[2] & 4u);
    ctx.set_gpr(2, 0u < ctx.gpr[2] ? 1u : 0u);
    { const bool branch_taken = ctx.gpr[2] != 0u;
    // nop
      if (branch_taken) {
          goto L_08989300;
      }
      goto L_089892F8;
    }
L_089892F8:
    ctx.set_gpr(31, 0x08989300u);
    // nop
    goto L_089893AC;
L_08989300:
    ctx.set_gpr(2, 2245u << 16u);
    ctx.set_gpr(2, rt.memory().aot_load32(ctx.gpr[2] + static_cast<std::uint32_t>(32156)));
    ctx.set_gpr(31, rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(12)));
    ctx.set_gpr(29, ctx.gpr[29] + static_cast<std::uint32_t>(16));
    jump_target = ctx.gpr[31];
    // nop
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_08989318:
    ctx.set_gpr(29, ctx.gpr[29] + static_cast<std::uint32_t>(-64));
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(12), ctx.gpr[31]);
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(8), ctx.gpr[16]);
    ctx.set_gpr(16, ctx.gpr[29] + static_cast<std::uint32_t>(16));
    ctx.set_gpr(4, ctx.gpr[16] + 0u);
    ctx.set_gpr(31, 0x08989334u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0080_entry, 80u, 398u, 0x08945BF8u>(ctx, &aot_mem) && ctx.pc == 0x08989334u) goto L_08989334;
    return;
L_08989334:
    ctx.set_gpr(2, 2232u << 16u);
    ctx.set_gpr(2, ctx.gpr[2] + static_cast<std::uint32_t>(20760));
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(16), ctx.gpr[2]);
    ctx.set_gpr(3, ctx.gpr[29] + static_cast<std::uint32_t>(32));
    goto L_08989344;
L_08989344:
    ctx.set_gpr(3, ctx.gpr[3] + static_cast<std::uint32_t>(8));
    ctx.set_gpr(2, ctx.gpr[16] + static_cast<std::uint32_t>(32));
    ctx.set_gpr(2, ctx.gpr[3] < ctx.gpr[2] ? 1u : 0u);
    // nop
    { const bool branch_taken = ctx.gpr[2] != 0u;
    // nop
      if (branch_taken) {
          goto L_08989344;
      }
      goto L_0898935C;
    }
L_0898935C:
    rt.memory().aot_store32(ctx.gpr[16] + static_cast<std::uint32_t>(36), 0u);
    ctx.set_gpr(31, 0x08989368u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0064_entry, 64u, 444u, 0x08905FF0u>(ctx, &aot_mem) && ctx.pc == 0x08989368u) goto L_08989368;
    return;
L_08989368:
    ctx.set_gpr(2, rt.memory().aot_load32(ctx.gpr[2] + static_cast<std::uint32_t>(932)));
    ctx.set_gpr(2, ctx.gpr[2] + ctx.gpr[29]);
    ctx.set_gpr(16, rt.memory().aot_load32(ctx.gpr[2] + static_cast<std::uint32_t>(16)));
    ctx.set_gpr(2, 2232u << 16u);
    ctx.set_gpr(2, ctx.gpr[2] + static_cast<std::uint32_t>(20760));
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(16), ctx.gpr[2]);
    ctx.set_gpr(4, rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(52)));
    { const bool branch_taken = ctx.gpr[4] == 0u;
    // nop
      if (branch_taken) {
          goto L_08989394;
      }
      goto L_0898938C;
    }
L_0898938C:
    ctx.set_gpr(31, 0x08989394u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0014_entry, 14u, 257u, 0x0883D454u>(ctx, &aot_mem) && ctx.pc == 0x08989394u) goto L_08989394;
    return;
L_08989394:
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
L_089893AC:
    ctx.set_gpr(29, ctx.gpr[29] + static_cast<std::uint32_t>(-16));
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(12), ctx.gpr[31]);
    ctx.set_gpr(4, 2201u << 16u);
    ctx.set_gpr(4, ctx.gpr[4] + static_cast<std::uint32_t>(-27692));
    ctx.set_gpr(31, 0x089893C4u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0080_entry, 80u, 286u, 0x08945508u>(ctx, &aot_mem) && ctx.pc == 0x089893C4u) goto L_089893C4;
    return;
L_089893C4:
    ctx.set_gpr(31, rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(12)));
    ctx.set_gpr(29, ctx.gpr[29] + static_cast<std::uint32_t>(16));
    jump_target = ctx.gpr[31];
    // nop
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_089893D4:
    ctx.set_gpr(29, ctx.gpr[29] + static_cast<std::uint32_t>(-32));
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(28), ctx.gpr[31]);
    ctx.set_gpr(31, 0x089893E4u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0096_entry, 96u, 986u, 0x08987F7Cu>(ctx, &aot_mem) && ctx.pc == 0x089893E4u) goto L_089893E4;
    return;
L_089893E4:
    ctx.set_gpr(2, 2201u << 16u);
    ctx.set_gpr(2, ctx.gpr[2] + static_cast<std::uint32_t>(-27552));
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(0), ctx.gpr[2]);
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(4), 0u);
    ctx.set_gpr(2, 2228u << 16u);
    ctx.set_gpr(2, ctx.gpr[2] + static_cast<std::uint32_t>(13372));
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(8), ctx.gpr[2]);
    ctx.set_gpr(4, 0u + 0u);
    ctx.set_gpr(5, 2245u << 16u);
    ctx.set_gpr(5, ctx.gpr[5] + static_cast<std::uint32_t>(32156));
    ctx.set_gpr(6, 2201u << 16u);
    ctx.set_gpr(6, ctx.gpr[6] + static_cast<std::uint32_t>(-29468));
    ctx.set_gpr(7, 2201u << 16u);
    ctx.set_gpr(7, ctx.gpr[7] + static_cast<std::uint32_t>(-27568));
    ctx.set_gpr(8, 2201u << 16u);
    ctx.set_gpr(8, ctx.gpr[8] + static_cast<std::uint32_t>(-29120));
    ctx.set_gpr(9, 2228u << 16u);
    ctx.set_gpr(9, ctx.gpr[9] + static_cast<std::uint32_t>(13380));
    ctx.set_gpr(10, 0u + static_cast<std::uint32_t>(48));
    ctx.set_gpr(11, 2201u << 16u);
    ctx.set_gpr(11, ctx.gpr[11] + static_cast<std::uint32_t>(-27880));
    ctx.set_gpr(31, 0x08989440u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0080_entry, 80u, 294u, 0x08945594u>(ctx, &aot_mem) && ctx.pc == 0x08989440u) goto L_08989440;
    return;
L_08989440:
    ctx.set_gpr(31, rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(28)));
    ctx.set_gpr(29, ctx.gpr[29] + static_cast<std::uint32_t>(32));
    jump_target = ctx.gpr[31];
    // nop
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_08989450:
    ctx.set_gpr(2, 2245u << 16u);
    ctx.set_gpr(2, rt.memory().aot_load32(ctx.gpr[2] + static_cast<std::uint32_t>(32108)));
    jump_target = ctx.gpr[31];
    // nop
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_08989460:
    ctx.set_gpr(29, ctx.gpr[29] + static_cast<std::uint32_t>(-16));
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(12), ctx.gpr[31]);
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(8), ctx.gpr[18]);
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(4), ctx.gpr[17]);
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(0), ctx.gpr[16]);
    ctx.set_gpr(2, 2245u << 16u);
    ctx.set_gpr(18, rt.memory().aot_load32(ctx.gpr[2] + static_cast<std::uint32_t>(32156)));
    ctx.set_gpr(4, ctx.gpr[18] + 0u);
    ctx.set_gpr(31, 0x08989488u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0080_entry, 80u, 236u, 0x089451A8u>(ctx, &aot_mem) && ctx.pc == 0x08989488u) goto L_08989488;
    return;
L_08989488:
    ctx.set_gpr(16, ctx.gpr[2] + 0u);
    ctx.set_gpr(4, ctx.gpr[18] + 0u);
    ctx.set_gpr(5, 2228u << 16u);
    ctx.set_gpr(5, ctx.gpr[5] + static_cast<std::uint32_t>(13396));
    ctx.set_gpr(6, 0u + static_cast<std::uint32_t>(5));
    ctx.set_gpr(31, 0x089894A4u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0080_entry, 80u, 151u, 0x08944B98u>(ctx, &aot_mem) && ctx.pc == 0x089894A4u) goto L_089894A4;
    return;
L_089894A4:
    ctx.set_gpr(4, ctx.gpr[18] + 0u);
    ctx.set_gpr(5, ctx.gpr[16] + 0u);
    ctx.set_gpr(31, 0x089894B4u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0080_entry, 80u, 148u, 0x08944B4Cu>(ctx, &aot_mem) && ctx.pc == 0x089894B4u) goto L_089894B4;
    return;
L_089894B4:
    ctx.set_gpr(3, 0u + static_cast<std::uint32_t>(2));
    rt.memory().aot_store32(ctx.gpr[2] + static_cast<std::uint32_t>(48), ctx.gpr[3]);
    ctx.set_gpr(5, ctx.gpr[16] + static_cast<std::uint32_t>(2));
    ctx.set_gpr(4, ctx.gpr[18] + 0u);
    ctx.set_gpr(31, 0x089894CCu);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0080_entry, 80u, 148u, 0x08944B4Cu>(ctx, &aot_mem) && ctx.pc == 0x089894CCu) goto L_089894CC;
    return;
L_089894CC:
    ctx.set_gpr(17, ctx.gpr[2] + 0u);
    ctx.set_gpr(31, 0x089894D8u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0096_entry, 96u, 992u, 0x08987FD8u>(ctx, &aot_mem) && ctx.pc == 0x089894D8u) goto L_089894D8;
    return;
L_089894D8:
    rt.memory().aot_store32(ctx.gpr[17] + static_cast<std::uint32_t>(52), ctx.gpr[2]);
    ctx.set_gpr(5, ctx.gpr[16] + static_cast<std::uint32_t>(3));
    ctx.set_gpr(4, ctx.gpr[18] + 0u);
    ctx.set_gpr(31, 0x089894ECu);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0080_entry, 80u, 148u, 0x08944B4Cu>(ctx, &aot_mem) && ctx.pc == 0x089894ECu) goto L_089894EC;
    return;
L_089894EC:
    ctx.set_gpr(17, ctx.gpr[2] + 0u);
    ctx.set_gpr(4, ctx.gpr[17] + 0u);
    ctx.set_gpr(5, 2228u << 16u);
    ctx.set_gpr(5, ctx.gpr[5] + static_cast<std::uint32_t>(13544));
    ctx.set_gpr(31, 0x08989504u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0068_entry, 68u, 457u, 0x08915924u>(ctx, &aot_mem) && ctx.pc == 0x08989504u) goto L_08989504;
    return;
L_08989504:
    ctx.set_gpr(2, 2201u << 16u);
    ctx.set_gpr(2, ctx.gpr[2] + static_cast<std::uint32_t>(-27256));
    rt.memory().aot_store32(ctx.gpr[17] + static_cast<std::uint32_t>(48), ctx.gpr[2]);
    ctx.set_gpr(5, ctx.gpr[16] + static_cast<std::uint32_t>(4));
    ctx.set_gpr(4, ctx.gpr[18] + 0u);
    ctx.set_gpr(31, 0x08989520u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0080_entry, 80u, 148u, 0x08944B4Cu>(ctx, &aot_mem) && ctx.pc == 0x08989520u) goto L_08989520;
    return;
L_08989520:
    ctx.set_gpr(17, ctx.gpr[2] + 0u);
    ctx.set_gpr(4, ctx.gpr[17] + 0u);
    ctx.set_gpr(5, 2228u << 16u);
    ctx.set_gpr(5, ctx.gpr[5] + static_cast<std::uint32_t>(13548));
    ctx.set_gpr(31, 0x08989538u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0068_entry, 68u, 457u, 0x08915924u>(ctx, &aot_mem) && ctx.pc == 0x08989538u) goto L_08989538;
    return;
L_08989538:
    ctx.set_gpr(2, 2201u << 16u);
    ctx.set_gpr(2, ctx.gpr[2] + static_cast<std::uint32_t>(-27256));
    rt.memory().aot_store32(ctx.gpr[17] + static_cast<std::uint32_t>(48), ctx.gpr[2]);
    ctx.set_gpr(4, ctx.gpr[18] + 0u);
    ctx.set_gpr(5, 2228u << 16u);
    ctx.set_gpr(5, ctx.gpr[5] + static_cast<std::uint32_t>(13484));
    ctx.set_gpr(6, 2228u << 16u);
    ctx.set_gpr(6, ctx.gpr[6] + static_cast<std::uint32_t>(13504));
    ctx.set_gpr(7, 2228u << 16u);
    ctx.set_gpr(7, ctx.gpr[7] + static_cast<std::uint32_t>(13524));
    ctx.set_gpr(8, ctx.gpr[16] + 0u);
    ctx.set_gpr(31, 0x0898956Cu);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0080_entry, 80u, 162u, 0x08944C7Cu>(ctx, &aot_mem) && ctx.pc == 0x0898956Cu) goto L_0898956C;
    return;
L_0898956C:
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
L_08989588:
    ctx.set_gpr(29, ctx.gpr[29] + static_cast<std::uint32_t>(-16));
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(12), ctx.gpr[31]);
    ctx.set_gpr(2, 2245u << 16u);
    ctx.set_gpr(2, rt.memory().aot_load32(ctx.gpr[2] + static_cast<std::uint32_t>(32180)));
    { const bool branch_taken = ctx.gpr[2] != 0u;
    // nop
      if (branch_taken) {
          goto L_089895CC;
      }
      goto L_089895A0;
    }
L_089895A0:
    ctx.set_gpr(4, 2228u << 16u);
    ctx.set_gpr(4, ctx.gpr[4] + static_cast<std::uint32_t>(13960));
    ctx.set_gpr(5, 2228u << 16u);
    ctx.set_gpr(5, ctx.gpr[5] + static_cast<std::uint32_t>(13832));
    ctx.set_gpr(6, 2228u << 16u);
    ctx.set_gpr(6, ctx.gpr[6] + static_cast<std::uint32_t>(13896));
    ctx.set_gpr(7, 0u + static_cast<std::uint32_t>(16));
    ctx.set_gpr(31, 0x089895C4u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0079_entry, 79u, 432u, 0x08941E90u>(ctx, &aot_mem) && ctx.pc == 0x089895C4u) goto L_089895C4;
    return;
L_089895C4:
    ctx.set_gpr(3, 2245u << 16u);
    rt.memory().aot_store32(ctx.gpr[3] + static_cast<std::uint32_t>(32180), ctx.gpr[2]);
    goto L_089895CC;
L_089895CC:
    ctx.set_gpr(2, 2245u << 16u);
    ctx.set_gpr(2, rt.memory().aot_load32(ctx.gpr[2] + static_cast<std::uint32_t>(32180)));
    ctx.set_gpr(31, rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(12)));
    ctx.set_gpr(29, ctx.gpr[29] + static_cast<std::uint32_t>(16));
    jump_target = ctx.gpr[31];
    // nop
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_089895E4:
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
L_089895FC:
    ctx.set_gpr(29, ctx.gpr[29] + static_cast<std::uint32_t>(-32));
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(28), ctx.gpr[31]);
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(24), ctx.gpr[19]);
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(20), ctx.gpr[18]);
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(16), ctx.gpr[17]);
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(12), ctx.gpr[16]);
    ctx.set_gpr(19, ctx.gpr[4] + 0u);
    ctx.set_gpr(18, ctx.gpr[5] + 0u);
    ctx.set_gpr(3, 2245u << 16u);
    ctx.set_gpr(7, rt.memory().aot_load32(ctx.gpr[3] + static_cast<std::uint32_t>(32216)));
    ctx.set_gpr(3, 2245u << 16u);
    ctx.set_gpr(5, rt.memory().aot_load32(ctx.gpr[3] + static_cast<std::uint32_t>(32220)));
    ctx.set_gpr(6, ctx.gpr[7] + static_cast<std::uint32_t>(1));
    ctx.set_gpr(3, ctx.gpr[6] < ctx.gpr[7] ? 1u : 0u);
    ctx.set_gpr(5, ctx.gpr[3] + ctx.gpr[5]);
    ctx.set_gpr(3, 2245u << 16u);
    rt.memory().aot_store32(ctx.gpr[3] + static_cast<std::uint32_t>(32216), ctx.gpr[6]);
    ctx.set_gpr(3, 2245u << 16u);
    rt.memory().aot_store32(ctx.gpr[3] + static_cast<std::uint32_t>(32220), ctx.gpr[5]);
    ctx.set_gpr(3, rt.memory().aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(8)));
    ctx.set_gpr(16, rt.memory().aot_load32(ctx.gpr[3] + static_cast<std::uint32_t>(8)));
    ctx.set_gpr(17, 0u + 0u);
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_089896B4;
      }
      goto L_0898965C;
    }
L_0898965C:
    ctx.set_gpr(3, ctx.gpr[17] << 3u);
    ctx.set_gpr(2, 2245u << 16u);
    ctx.set_gpr(2, ctx.gpr[2] + static_cast<std::uint32_t>(32224));
    ctx.set_gpr(5, ctx.gpr[2] + ctx.gpr[3]);
    ctx.set_gpr(2, rt.memory().aot_load32(ctx.gpr[5] + static_cast<std::uint32_t>(0)));
    ctx.set_gpr(4, rt.memory().aot_load32(ctx.gpr[5] + static_cast<std::uint32_t>(4)));
    ctx.set_gpr(3, ctx.gpr[2] + static_cast<std::uint32_t>(1));
    ctx.set_gpr(2, ctx.gpr[3] < ctx.gpr[2] ? 1u : 0u);
    ctx.set_gpr(2, ctx.gpr[2] + ctx.gpr[4]);
    rt.memory().aot_store32(ctx.gpr[5] + static_cast<std::uint32_t>(0), ctx.gpr[3]);
    rt.memory().aot_store32(ctx.gpr[5] + static_cast<std::uint32_t>(4), ctx.gpr[2]);
    ctx.set_gpr(2, rt.memory().aot_load32(ctx.gpr[19] + static_cast<std::uint32_t>(8)));
    ctx.set_gpr(3, ctx.gpr[17] << 2u);
    ctx.set_gpr(2, rt.memory().aot_load32(ctx.gpr[2] + static_cast<std::uint32_t>(16)));
    ctx.set_gpr(2, ctx.gpr[2] + ctx.gpr[3]);
    ctx.set_gpr(4, rt.memory().aot_load32(ctx.gpr[2] + static_cast<std::uint32_t>(0)));
    ctx.set_gpr(5, ctx.gpr[18] + 0u);
    ctx.set_gpr(25, rt.memory().aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(0)));
    ctx.set_gpr(25, rt.memory().aot_load32(ctx.gpr[25] + static_cast<std::uint32_t>(92)));
    jump_target = ctx.gpr[25];
    ctx.set_gpr(31, 0x089896B0u);
    // nop
    ctx.pc = jump_target;
    if (rt.invoke_chained_call(ctx, &aot_mem) && ctx.pc == 0x089896B0u) goto L_089896B0;
    return;
L_089896B0:
    ctx.set_gpr(17, ctx.gpr[17] + static_cast<std::uint32_t>(1));
    goto L_089896B4;
L_089896B4:
    ctx.set_gpr(3, static_cast<std::int32_t>(ctx.gpr[17]) < static_cast<std::int32_t>(ctx.gpr[16]) ? 1u : 0u);
    { const bool branch_taken = ctx.gpr[3] != 0u;
    // nop
      if (branch_taken) {
          goto L_0898965C;
      }
      goto L_089896C0;
    }
L_089896C0:
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
L_089896E0:
    ctx.set_gpr(29, ctx.gpr[29] + static_cast<std::uint32_t>(-16));
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(12), ctx.gpr[31]);
    ctx.set_gpr(3, rt.memory().aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(12)));
    { const bool branch_taken = ctx.gpr[3] == 0u;
    // nop
      if (branch_taken) {
          goto L_08989704;
      }
      goto L_089896F4;
    }
L_089896F4:
    ctx.set_gpr(4, ctx.gpr[5] + 0u);
    ctx.set_gpr(5, ctx.gpr[6] + 0u);
    jump_target = ctx.gpr[3];
    ctx.set_gpr(31, 0x08989704u);
    // nop
    ctx.pc = jump_target;
    if (rt.invoke_chained_call(ctx, &aot_mem) && ctx.pc == 0x08989704u) goto L_08989704;
    return;
L_08989704:
    ctx.set_gpr(31, rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(12)));
    ctx.set_gpr(29, ctx.gpr[29] + static_cast<std::uint32_t>(16));
    jump_target = ctx.gpr[31];
    // nop
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_08989714:
    ctx.set_gpr(29, ctx.gpr[29] + static_cast<std::uint32_t>(-16));
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(12), ctx.gpr[31]);
    ctx.set_gpr(3, rt.memory().aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(16)));
    { const bool branch_taken = ctx.gpr[3] == 0u;
    // nop
      if (branch_taken) {
          goto L_0898973C;
      }
      goto L_08989728;
    }
L_08989728:
    ctx.set_gpr(4, ctx.gpr[5] + 0u);
    ctx.set_gpr(5, ctx.gpr[6] + 0u);
    ctx.set_gpr(6, ctx.gpr[7] + 0u);
    jump_target = ctx.gpr[3];
    ctx.set_gpr(31, 0x0898973Cu);
    // nop
    ctx.pc = jump_target;
    if (rt.invoke_chained_call(ctx, &aot_mem) && ctx.pc == 0x0898973Cu) goto L_0898973C;
    return;
L_0898973C:
    ctx.set_gpr(31, rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(12)));
    ctx.set_gpr(29, ctx.gpr[29] + static_cast<std::uint32_t>(16));
    jump_target = ctx.gpr[31];
    // nop
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_0898974C:
    ctx.set_gpr(29, ctx.gpr[29] + static_cast<std::uint32_t>(-16));
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(12), ctx.gpr[31]);
    ctx.set_gpr(3, rt.memory().aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(20)));
    { const bool branch_taken = ctx.gpr[3] == 0u;
    // nop
      if (branch_taken) {
          goto L_08989774;
      }
      goto L_08989760;
    }
L_08989760:
    ctx.set_gpr(4, ctx.gpr[5] + 0u);
    ctx.set_gpr(5, ctx.gpr[6] + 0u);
    ctx.set_gpr(6, ctx.gpr[7] + 0u);
    jump_target = ctx.gpr[3];
    ctx.set_gpr(31, 0x08989774u);
    // nop
    ctx.pc = jump_target;
    if (rt.invoke_chained_call(ctx, &aot_mem) && ctx.pc == 0x08989774u) goto L_08989774;
    return;
L_08989774:
    ctx.set_gpr(31, rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(12)));
    ctx.set_gpr(29, ctx.gpr[29] + static_cast<std::uint32_t>(16));
    jump_target = ctx.gpr[31];
    // nop
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_08989784:
    ctx.set_gpr(29, ctx.gpr[29] + static_cast<std::uint32_t>(-16));
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(12), ctx.gpr[31]);
    ctx.set_gpr(3, rt.memory().aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(24)));
    { const bool branch_taken = ctx.gpr[3] == 0u;
    // nop
      if (branch_taken) {
          goto L_089897AC;
      }
      goto L_08989798;
    }
L_08989798:
    ctx.set_gpr(4, ctx.gpr[5] + 0u);
    ctx.set_gpr(5, ctx.gpr[6] + 0u);
    ctx.set_gpr(6, ctx.gpr[7] + 0u);
    jump_target = ctx.gpr[3];
    ctx.set_gpr(31, 0x089897ACu);
    // nop
    ctx.pc = jump_target;
    if (rt.invoke_chained_call(ctx, &aot_mem) && ctx.pc == 0x089897ACu) goto L_089897AC;
    return;
L_089897AC:
    ctx.set_gpr(31, rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(12)));
    ctx.set_gpr(29, ctx.gpr[29] + static_cast<std::uint32_t>(16));
    jump_target = ctx.gpr[31];
    // nop
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_089897BC:
    ctx.set_gpr(29, ctx.gpr[29] + static_cast<std::uint32_t>(-16));
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(12), ctx.gpr[31]);
    ctx.set_gpr(3, rt.memory().aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(28)));
    { const bool branch_taken = ctx.gpr[3] == 0u;
    // nop
      if (branch_taken) {
          goto L_089897E4;
      }
      goto L_089897D0;
    }
L_089897D0:
    ctx.set_gpr(4, ctx.gpr[5] + 0u);
    ctx.set_gpr(5, ctx.gpr[6] + 0u);
    ctx.set_gpr(6, ctx.gpr[7] + 0u);
    jump_target = ctx.gpr[3];
    ctx.set_gpr(31, 0x089897E4u);
    // nop
    ctx.pc = jump_target;
    if (rt.invoke_chained_call(ctx, &aot_mem) && ctx.pc == 0x089897E4u) goto L_089897E4;
    return;
L_089897E4:
    ctx.set_gpr(31, rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(12)));
    ctx.set_gpr(29, ctx.gpr[29] + static_cast<std::uint32_t>(16));
    jump_target = ctx.gpr[31];
    // nop
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_089897F4:
    ctx.set_gpr(29, ctx.gpr[29] + static_cast<std::uint32_t>(-16));
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(12), ctx.gpr[31]);
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(8), ctx.gpr[16]);
    ctx.set_gpr(16, ctx.gpr[5] + 0u);
    ctx.set_gpr(5, 0u + static_cast<std::uint32_t>(1));
    ctx.set_gpr(3, rt.memory().aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(32)));
    { const bool branch_taken = ctx.gpr[3] == 0u;
    // nop
      if (branch_taken) {
          goto L_08989824;
      }
      goto L_08989814;
    }
L_08989814:
    ctx.set_gpr(4, ctx.gpr[16] + 0u);
    jump_target = ctx.gpr[3];
    ctx.set_gpr(31, 0x08989820u);
    // nop
    ctx.pc = jump_target;
    if (rt.invoke_chained_call(ctx, &aot_mem) && ctx.pc == 0x08989820u) goto L_08989820;
    return;
L_08989820:
    ctx.set_gpr(5, ctx.gpr[2] & 255u);
    goto L_08989824;
L_08989824:
    { const bool branch_taken = ctx.gpr[5] == 0u;
    // nop
      if (branch_taken) {
          goto L_08989840;
      }
      goto L_0898982C;
    }
L_0898982C:
    ctx.set_gpr(4, ctx.gpr[16] + 0u);
    ctx.set_gpr(25, rt.memory().aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(0)));
    ctx.set_gpr(25, rt.memory().aot_load32(ctx.gpr[25] + static_cast<std::uint32_t>(104)));
    jump_target = ctx.gpr[25];
    ctx.set_gpr(31, 0x08989840u);
    // nop
    ctx.pc = jump_target;
    if (rt.invoke_chained_call(ctx, &aot_mem) && ctx.pc == 0x08989840u) goto L_08989840;
    return;
L_08989840:
    ctx.set_gpr(31, rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(12)));
    ctx.set_gpr(16, rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(8)));
    ctx.set_gpr(29, ctx.gpr[29] + static_cast<std::uint32_t>(16));
    jump_target = ctx.gpr[31];
    // nop
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_08989854:
    ctx.set_gpr(29, ctx.gpr[29] + static_cast<std::uint32_t>(-16));
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(12), ctx.gpr[31]);
    ctx.set_gpr(3, rt.memory().aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(68)));
    { const bool branch_taken = ctx.gpr[3] == 0u;
    // nop
      if (branch_taken) {
          goto L_08989878;
      }
      goto L_08989868;
    }
L_08989868:
    ctx.set_gpr(4, ctx.gpr[5] + 0u);
    ctx.set_gpr(5, ctx.gpr[6] + 0u);
    jump_target = ctx.gpr[3];
    ctx.set_gpr(31, 0x08989878u);
    // nop
    ctx.pc = jump_target;
    if (rt.invoke_chained_call(ctx, &aot_mem) && ctx.pc == 0x08989878u) goto L_08989878;
    return;
L_08989878:
    ctx.set_gpr(31, rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(12)));
    ctx.set_gpr(29, ctx.gpr[29] + static_cast<std::uint32_t>(16));
    jump_target = ctx.gpr[31];
    // nop
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_08989888:
    ctx.set_gpr(29, ctx.gpr[29] + static_cast<std::uint32_t>(-16));
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(12), ctx.gpr[31]);
    ctx.set_gpr(3, rt.memory().aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(72)));
    { const bool branch_taken = ctx.gpr[3] == 0u;
    // nop
      if (branch_taken) {
          goto L_089898AC;
      }
      goto L_0898989C;
    }
L_0898989C:
    ctx.set_gpr(4, ctx.gpr[5] + 0u);
    ctx.set_gpr(5, ctx.gpr[6] + 0u);
    jump_target = ctx.gpr[3];
    ctx.set_gpr(31, 0x089898ACu);
    // nop
    ctx.pc = jump_target;
    if (rt.invoke_chained_call(ctx, &aot_mem) && ctx.pc == 0x089898ACu) goto L_089898AC;
    return;
L_089898AC:
    ctx.set_gpr(31, rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(12)));
    ctx.set_gpr(29, ctx.gpr[29] + static_cast<std::uint32_t>(16));
    jump_target = ctx.gpr[31];
    // nop
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_089898BC:
    ctx.set_gpr(29, ctx.gpr[29] + static_cast<std::uint32_t>(-16));
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(12), ctx.gpr[31]);
    ctx.set_gpr(3, rt.memory().aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(36)));
    { const bool branch_taken = ctx.gpr[3] == 0u;
    // nop
      if (branch_taken) {
          goto L_089898E4;
      }
      goto L_089898D0;
    }
L_089898D0:
    ctx.set_gpr(4, ctx.gpr[5] + 0u);
    ctx.set_gpr(5, ctx.gpr[6] + 0u);
    ctx.set_gpr(6, ctx.gpr[7] + 0u);
    jump_target = ctx.gpr[3];
    ctx.set_gpr(31, 0x089898E4u);
    // nop
    ctx.pc = jump_target;
    if (rt.invoke_chained_call(ctx, &aot_mem) && ctx.pc == 0x089898E4u) goto L_089898E4;
    return;
L_089898E4:
    ctx.set_gpr(31, rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(12)));
    ctx.set_gpr(29, ctx.gpr[29] + static_cast<std::uint32_t>(16));
    jump_target = ctx.gpr[31];
    // nop
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_089898F4:
    ctx.set_gpr(29, ctx.gpr[29] + static_cast<std::uint32_t>(-16));
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(12), ctx.gpr[31]);
    ctx.set_gpr(3, rt.memory().aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(40)));
    { const bool branch_taken = ctx.gpr[3] == 0u;
    // nop
      if (branch_taken) {
          goto L_0898991C;
      }
      goto L_08989908;
    }
L_08989908:
    ctx.set_gpr(4, ctx.gpr[5] + 0u);
    ctx.set_gpr(5, ctx.gpr[6] + 0u);
    ctx.set_gpr(6, ctx.gpr[7] + 0u);
    jump_target = ctx.gpr[3];
    ctx.set_gpr(31, 0x0898991Cu);
    // nop
    ctx.pc = jump_target;
    if (rt.invoke_chained_call(ctx, &aot_mem) && ctx.pc == 0x0898991Cu) goto L_0898991C;
    return;
L_0898991C:
    ctx.set_gpr(31, rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(12)));
    ctx.set_gpr(29, ctx.gpr[29] + static_cast<std::uint32_t>(16));
    jump_target = ctx.gpr[31];
    // nop
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_0898992C:
    ctx.set_gpr(29, ctx.gpr[29] + static_cast<std::uint32_t>(-16));
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(12), ctx.gpr[31]);
    ctx.set_gpr(3, rt.memory().aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(44)));
    { const bool branch_taken = ctx.gpr[3] == 0u;
    // nop
      if (branch_taken) {
          goto L_08989954;
      }
      goto L_08989940;
    }
L_08989940:
    ctx.set_gpr(4, ctx.gpr[5] + 0u);
    ctx.set_gpr(5, ctx.gpr[6] + 0u);
    ctx.set_gpr(6, ctx.gpr[7] + 0u);
    jump_target = ctx.gpr[3];
    ctx.set_gpr(31, 0x08989954u);
    // nop
    ctx.pc = jump_target;
    if (rt.invoke_chained_call(ctx, &aot_mem) && ctx.pc == 0x08989954u) goto L_08989954;
    return;
L_08989954:
    ctx.set_gpr(31, rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(12)));
    ctx.set_gpr(29, ctx.gpr[29] + static_cast<std::uint32_t>(16));
    jump_target = ctx.gpr[31];
    // nop
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_08989964:
    ctx.set_gpr(29, ctx.gpr[29] + static_cast<std::uint32_t>(-16));
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(12), ctx.gpr[31]);
    ctx.set_gpr(3, rt.memory().aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(48)));
    { const bool branch_taken = ctx.gpr[3] == 0u;
    // nop
      if (branch_taken) {
          goto L_0898998C;
      }
      goto L_08989978;
    }
L_08989978:
    ctx.set_gpr(4, ctx.gpr[5] + 0u);
    ctx.set_gpr(5, ctx.gpr[6] + 0u);
    ctx.set_gpr(6, ctx.gpr[7] + 0u);
    jump_target = ctx.gpr[3];
    ctx.set_gpr(31, 0x0898998Cu);
    // nop
    ctx.pc = jump_target;
    if (rt.invoke_chained_call(ctx, &aot_mem) && ctx.pc == 0x0898998Cu) goto L_0898998C;
    return;
L_0898998C:
    ctx.set_gpr(31, rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(12)));
    ctx.set_gpr(29, ctx.gpr[29] + static_cast<std::uint32_t>(16));
    jump_target = ctx.gpr[31];
    // nop
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_0898999C:
    ctx.set_gpr(29, ctx.gpr[29] + static_cast<std::uint32_t>(-16));
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(12), ctx.gpr[31]);
    ctx.set_gpr(3, rt.memory().aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(52)));
    { const bool branch_taken = ctx.gpr[3] == 0u;
    // nop
      if (branch_taken) {
          goto L_089899C0;
      }
      goto L_089899B0;
    }
L_089899B0:
    ctx.set_gpr(4, ctx.gpr[5] + 0u);
    ctx.set_gpr(5, ctx.gpr[6] + 0u);
    jump_target = ctx.gpr[3];
    ctx.set_gpr(31, 0x089899C0u);
    // nop
    ctx.pc = jump_target;
    if (rt.invoke_chained_call(ctx, &aot_mem) && ctx.pc == 0x089899C0u) goto L_089899C0;
    return;
L_089899C0:
    ctx.set_gpr(31, rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(12)));
    ctx.set_gpr(29, ctx.gpr[29] + static_cast<std::uint32_t>(16));
    jump_target = ctx.gpr[31];
    // nop
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_089899D0:
    ctx.set_gpr(29, ctx.gpr[29] + static_cast<std::uint32_t>(-16));
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(12), ctx.gpr[31]);
    ctx.set_gpr(3, rt.memory().aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(56)));
    { const bool branch_taken = ctx.gpr[3] == 0u;
    // nop
      if (branch_taken) {
          goto L_089899F4;
      }
      goto L_089899E4;
    }
L_089899E4:
    ctx.set_gpr(4, ctx.gpr[5] + 0u);
    ctx.set_gpr(5, ctx.gpr[6] + 0u);
    jump_target = ctx.gpr[3];
    ctx.set_gpr(31, 0x089899F4u);
    // nop
    ctx.pc = jump_target;
    if (rt.invoke_chained_call(ctx, &aot_mem) && ctx.pc == 0x089899F4u) goto L_089899F4;
    return;
L_089899F4:
    ctx.set_gpr(31, rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(12)));
    ctx.set_gpr(29, ctx.gpr[29] + static_cast<std::uint32_t>(16));
    jump_target = ctx.gpr[31];
    // nop
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_08989A04:
    ctx.set_gpr(29, ctx.gpr[29] + static_cast<std::uint32_t>(-16));
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(12), ctx.gpr[31]);
    ctx.set_gpr(3, rt.memory().aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(60)));
    { const bool branch_taken = ctx.gpr[3] == 0u;
    // nop
      if (branch_taken) {
          goto L_08989A2C;
      }
      goto L_08989A18;
    }
L_08989A18:
    ctx.set_gpr(4, ctx.gpr[5] + 0u);
    ctx.set_gpr(5, ctx.gpr[6] + 0u);
    ctx.set_gpr(6, ctx.gpr[7] + 0u);
    jump_target = ctx.gpr[3];
    ctx.set_gpr(31, 0x08989A2Cu);
    // nop
    ctx.pc = jump_target;
    if (rt.invoke_chained_call(ctx, &aot_mem) && ctx.pc == 0x08989A2Cu) goto L_08989A2C;
    return;
L_08989A2C:
    ctx.set_gpr(31, rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(12)));
    ctx.set_gpr(29, ctx.gpr[29] + static_cast<std::uint32_t>(16));
    jump_target = ctx.gpr[31];
    // nop
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_08989A3C:
    ctx.set_gpr(29, ctx.gpr[29] + static_cast<std::uint32_t>(-16));
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(12), ctx.gpr[31]);
    ctx.set_gpr(3, rt.memory().aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(64)));
    { const bool branch_taken = ctx.gpr[3] == 0u;
    // nop
      if (branch_taken) {
          goto L_08989A64;
      }
      goto L_08989A50;
    }
L_08989A50:
    ctx.set_gpr(4, ctx.gpr[5] + 0u);
    ctx.set_gpr(5, ctx.gpr[6] + 0u);
    ctx.set_gpr(6, ctx.gpr[7] + 0u);
    jump_target = ctx.gpr[3];
    ctx.set_gpr(31, 0x08989A64u);
    // nop
    ctx.pc = jump_target;
    if (rt.invoke_chained_call(ctx, &aot_mem) && ctx.pc == 0x08989A64u) goto L_08989A64;
    return;
L_08989A64:
    ctx.set_gpr(31, rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(12)));
    ctx.set_gpr(29, ctx.gpr[29] + static_cast<std::uint32_t>(16));
    jump_target = ctx.gpr[31];
    // nop
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_08989A74:
    ctx.set_gpr(29, ctx.gpr[29] + static_cast<std::uint32_t>(-96));
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(12), ctx.gpr[31]);
    ctx.set_gpr(3, 2245u << 16u);
    ctx.set_gpr(3, rt.memory().aot_load32(ctx.gpr[3] + static_cast<std::uint32_t>(32196)));
    { const bool branch_taken = ctx.gpr[3] != 0u;
    // nop
      if (branch_taken) {
          goto L_08989C70;
      }
      goto L_08989A8C;
    }
L_08989A8C:
    ctx.set_gpr(6, 2228u << 16u);
    ctx.set_gpr(6, ctx.gpr[6] + static_cast<std::uint32_t>(13972));
    ctx.set_gpr(5, ctx.gpr[29] + static_cast<std::uint32_t>(48));
    ctx.set_gpr(4, 0u + static_cast<std::uint32_t>(6));
    goto L_08989A9C;
L_08989A9C:
    ctx.set_gpr(3, rt.memory().aot_load32(ctx.gpr[6] + static_cast<std::uint32_t>(0)));
    ctx.set_gpr(2, rt.memory().aot_load32(ctx.gpr[6] + static_cast<std::uint32_t>(4)));
    ctx.set_gpr(6, ctx.gpr[6] + static_cast<std::uint32_t>(8));
    ctx.set_gpr(4, ctx.gpr[4] + static_cast<std::uint32_t>(-1));
    rt.memory().aot_store32(ctx.gpr[5] + static_cast<std::uint32_t>(0), ctx.gpr[3]);
    rt.memory().aot_store32(ctx.gpr[5] + static_cast<std::uint32_t>(4), ctx.gpr[2]);
    ctx.set_gpr(5, ctx.gpr[5] + static_cast<std::uint32_t>(8));
    { const bool branch_taken = static_cast<std::int32_t>(ctx.gpr[4]) > 0;
    // nop
      if (branch_taken) {
          goto L_08989A9C;
      }
      goto L_08989AC0;
    }
L_08989AC0:
    ctx.set_gpr(31, 0x08989AC8u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0078_entry, 78u, 223u, 0x0893CE4Cu>(ctx, &aot_mem) && ctx.pc == 0x08989AC8u) goto L_08989AC8;
    return;
L_08989AC8:
    ctx.set_gpr(4, rt.memory().aot_load32(ctx.gpr[2] + static_cast<std::uint32_t>(0)));
    ctx.set_gpr(31, 0x08989AD4u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0078_entry, 78u, 199u, 0x0893CC68u>(ctx, &aot_mem) && ctx.pc == 0x08989AD4u) goto L_08989AD4;
    return;
L_08989AD4:
    ctx.set_gpr(4, ctx.gpr[2] + 0u);
    ctx.set_gpr(31, 0x08989AE0u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0057_entry, 57u, 321u, 0x088E975Cu>(ctx, &aot_mem) && ctx.pc == 0x08989AE0u) goto L_08989AE0;
    return;
L_08989AE0:
    ctx.set_gpr(4, 2245u << 16u);
    ctx.set_gpr(4, ctx.gpr[4] + static_cast<std::uint32_t>(32196));
    ctx.set_gpr(5, ctx.gpr[2] + 0u);
    ctx.set_gpr(31, 0x08989AF4u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0085_entry, 85u, 67u, 0x0895853Cu>(ctx, &aot_mem) && ctx.pc == 0x08989AF4u) goto L_08989AF4;
    return;
L_08989AF4:
    ctx.set_gpr(2, 2245u << 16u);
    ctx.set_gpr(4, rt.memory().aot_load32(ctx.gpr[2] + static_cast<std::uint32_t>(32196)));
    ctx.set_gpr(2, rt.memory().aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(8)));
    ctx.set_gpr(1, static_cast<std::int32_t>(ctx.gpr[2]) < 5 ? 1u : 0u);
    { const bool branch_taken = ctx.gpr[1] == 0u;
    // nop
      if (branch_taken) {
          goto L_08989B1C;
      }
      goto L_08989B0C;
    }
L_08989B0C:
    ctx.set_gpr(5, 0u + static_cast<std::uint32_t>(4));
    ctx.set_gpr(6, 0u + static_cast<std::uint32_t>(24));
    ctx.set_gpr(31, 0x08989B1Cu);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0066_entry, 66u, 785u, 0x0890FA2Cu>(ctx, &aot_mem) && ctx.pc == 0x08989B1Cu) goto L_08989B1C;
    return;
L_08989B1C:
    ctx.set_gpr(2, 2245u << 16u);
    ctx.set_gpr(4, rt.memory().aot_load32(ctx.gpr[2] + static_cast<std::uint32_t>(32196)));
    ctx.set_gpr(2, rt.memory().aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(12)));
    ctx.set_gpr(2, static_cast<std::int32_t>(ctx.gpr[2]) < 4 ? 1u : 0u);
    { const bool branch_taken = ctx.gpr[2] != 0u;
    // nop
      if (branch_taken) {
          goto L_08989B44;
      }
      goto L_08989B34;
    }
L_08989B34:
    ctx.set_gpr(2, 0u + static_cast<std::uint32_t>(4));
    rt.memory().aot_store32(ctx.gpr[4] + static_cast<std::uint32_t>(8), ctx.gpr[2]);
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_08989B54;
      }
      goto L_08989B44;
    }
L_08989B44:
    ctx.set_gpr(5, 0u + static_cast<std::uint32_t>(4));
    ctx.set_gpr(6, 0u + static_cast<std::uint32_t>(24));
    ctx.set_gpr(31, 0x08989B54u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0066_entry, 66u, 795u, 0x0890FB1Cu>(ctx, &aot_mem) && ctx.pc == 0x08989B54u) goto L_08989B54;
    return;
L_08989B54:
    ctx.set_gpr(2, 0u + static_cast<std::uint32_t>(1));
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(32), 0u);
    rt.memory().aot_store8(ctx.gpr[29] + static_cast<std::uint32_t>(36), static_cast<std::uint8_t>(ctx.gpr[2]));
    rt.memory().aot_store8(ctx.gpr[29] + static_cast<std::uint32_t>(37), static_cast<std::uint8_t>(0u));
    rt.memory().aot_store8(ctx.gpr[29] + static_cast<std::uint32_t>(38), static_cast<std::uint8_t>(ctx.gpr[2]));
    ctx.set_gpr(2, 0u + static_cast<std::uint32_t>(6));
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(28), ctx.gpr[2]);
    ctx.set_gpr(8, 0u + 0u);
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_08989C10;
      }
      goto L_08989B7C;
    }
L_08989B7C:
    ctx.set_gpr(2, ctx.gpr[8] << 1u);
    ctx.set_gpr(7, ctx.gpr[2] + ctx.gpr[8]);
    ctx.set_gpr(2, ctx.gpr[7] << 2u);
    ctx.set_gpr(3, ctx.gpr[2] + ctx.gpr[29]);
    ctx.set_gpr(6, rt.memory().aot_load32(ctx.gpr[3] + static_cast<std::uint32_t>(48)));
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(32), ctx.gpr[6]);
    ctx.set_gpr(2, rt.memory().aot_load8(ctx.gpr[3] + static_cast<std::uint32_t>(56)));
    rt.memory().aot_store8(ctx.gpr[29] + static_cast<std::uint32_t>(36), static_cast<std::uint8_t>(ctx.gpr[2]));
    ctx.set_gpr(2, rt.memory().aot_load8(ctx.gpr[3] + static_cast<std::uint32_t>(57)));
    rt.memory().aot_store8(ctx.gpr[29] + static_cast<std::uint32_t>(37), static_cast<std::uint8_t>(ctx.gpr[2]));
    ctx.set_gpr(5, rt.memory().aot_load32(ctx.gpr[3] + static_cast<std::uint32_t>(52)));
    ctx.set_gpr(2, 2245u << 16u);
    ctx.set_gpr(4, rt.memory().aot_load32(ctx.gpr[2] + static_cast<std::uint32_t>(32196)));
    ctx.set_gpr(2, rt.memory().aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(8)));
    { const bool branch_taken = ctx.gpr[2] == 0u;
    // nop
      if (branch_taken) {
          goto L_08989C0C;
      }
      goto L_08989BBC;
    }
L_08989BBC:
    { const bool branch_taken = static_cast<std::int32_t>(ctx.gpr[8]) < 0;
    // nop
      if (branch_taken) {
          goto L_08989C0C;
      }
      goto L_08989BC4;
    }
L_08989BC4:
    ctx.set_gpr(1, static_cast<std::int32_t>(ctx.gpr[8]) < static_cast<std::int32_t>(ctx.gpr[2]) ? 1u : 0u);
    { const bool branch_taken = ctx.gpr[1] == 0u;
    // nop
      if (branch_taken) {
          goto L_08989C0C;
      }
      goto L_08989BD0;
    }
L_08989BD0:
    ctx.set_gpr(3, ctx.gpr[7] << 3u);
    ctx.set_gpr(2, rt.memory().aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(16)));
    ctx.set_gpr(3, ctx.gpr[2] + ctx.gpr[3]);
    rt.memory().aot_store32(ctx.gpr[3] + static_cast<std::uint32_t>(0), 0u);
    rt.memory().aot_store32(ctx.gpr[3] + static_cast<std::uint32_t>(4), 0u);
    rt.memory().aot_store32(ctx.gpr[3] + static_cast<std::uint32_t>(8), ctx.gpr[5]);
    ctx.set_gpr(2, rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(28)));
    rt.memory().aot_store32(ctx.gpr[3] + static_cast<std::uint32_t>(12), ctx.gpr[2]);
    rt.memory().aot_store32(ctx.gpr[3] + static_cast<std::uint32_t>(16), ctx.gpr[6]);
    ctx.set_gpr(2, rt.memory().aot_load8(ctx.gpr[29] + static_cast<std::uint32_t>(36)));
    rt.memory().aot_store8(ctx.gpr[3] + static_cast<std::uint32_t>(20), static_cast<std::uint8_t>(ctx.gpr[2]));
    ctx.set_gpr(2, rt.memory().aot_load8(ctx.gpr[29] + static_cast<std::uint32_t>(37)));
    rt.memory().aot_store8(ctx.gpr[3] + static_cast<std::uint32_t>(21), static_cast<std::uint8_t>(ctx.gpr[2]));
    ctx.set_gpr(2, rt.memory().aot_load8(ctx.gpr[29] + static_cast<std::uint32_t>(38)));
    rt.memory().aot_store8(ctx.gpr[3] + static_cast<std::uint32_t>(22), static_cast<std::uint8_t>(ctx.gpr[2]));
    goto L_08989C0C;
L_08989C0C:
    ctx.set_gpr(8, ctx.gpr[8] + static_cast<std::uint32_t>(1));
    goto L_08989C10;
L_08989C10:
    ctx.set_gpr(2, static_cast<std::int32_t>(ctx.gpr[8]) < 4 ? 1u : 0u);
    { const bool branch_taken = ctx.gpr[2] != 0u;
    // nop
      if (branch_taken) {
          goto L_08989B7C;
      }
      goto L_08989C1C;
    }
L_08989C1C:
    ctx.set_gpr(31, 0x08989C24u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0064_entry, 64u, 444u, 0x08905FF0u>(ctx, &aot_mem) && ctx.pc == 0x08989C24u) goto L_08989C24;
    return;
L_08989C24:
    ctx.set_gpr(4, rt.memory().aot_load32(ctx.gpr[2] + static_cast<std::uint32_t>(120)));
    ctx.set_gpr(2, 2245u << 16u);
    ctx.set_gpr(3, rt.memory().aot_load32(ctx.gpr[2] + static_cast<std::uint32_t>(32196)));
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(44), ctx.gpr[3]);
    { const bool branch_taken = ctx.gpr[3] == 0u;
    // nop
      if (branch_taken) {
          goto L_08989C48;
      }
      goto L_08989C3C;
    }
L_08989C3C:
    ctx.set_gpr(2, rt.memory().aot_load32(ctx.gpr[3] + static_cast<std::uint32_t>(4)));
    ctx.set_gpr(2, ctx.gpr[2] + static_cast<std::uint32_t>(1));
    rt.memory().aot_store32(ctx.gpr[3] + static_cast<std::uint32_t>(4), ctx.gpr[2]);
    goto L_08989C48;
L_08989C48:
    ctx.set_gpr(5, ctx.gpr[29] + static_cast<std::uint32_t>(44));
    ctx.set_gpr(6, 0u + static_cast<std::uint32_t>(6));
    ctx.set_gpr(7, 0u + static_cast<std::uint32_t>(26));
    ctx.set_gpr(31, 0x08989C5Cu);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0085_entry, 85u, 158u, 0x08958B08u>(ctx, &aot_mem) && ctx.pc == 0x08989C5Cu) goto L_08989C5C;
    return;
L_08989C5C:
    ctx.set_gpr(4, rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(44)));
    { const bool branch_taken = ctx.gpr[4] == 0u;
    // nop
      if (branch_taken) {
          goto L_08989C70;
      }
      goto L_08989C68;
    }
L_08989C68:
    ctx.set_gpr(31, 0x08989C70u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0014_entry, 14u, 257u, 0x0883D454u>(ctx, &aot_mem) && ctx.pc == 0x08989C70u) goto L_08989C70;
    return;
L_08989C70:
    ctx.set_gpr(31, rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(12)));
    ctx.set_gpr(29, ctx.gpr[29] + static_cast<std::uint32_t>(96));
    jump_target = ctx.gpr[31];
    // nop
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_08989C80:
    ctx.set_gpr(29, ctx.gpr[29] + static_cast<std::uint32_t>(-16));
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(12), ctx.gpr[31]);
    ctx.set_gpr(4, 2245u << 16u);
    ctx.set_gpr(4, ctx.gpr[4] + static_cast<std::uint32_t>(32196));
    ctx.set_gpr(5, 0u + 0u);
    ctx.set_gpr(31, 0x08989C9Cu);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0085_entry, 85u, 61u, 0x089584C4u>(ctx, &aot_mem) && ctx.pc == 0x08989C9Cu) goto L_08989C9C;
    return;
L_08989C9C:
    ctx.set_gpr(31, rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(12)));
    ctx.set_gpr(29, ctx.gpr[29] + static_cast<std::uint32_t>(16));
    jump_target = ctx.gpr[31];
    // nop
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_08989CAC:
    ctx.set_gpr(29, ctx.gpr[29] + static_cast<std::uint32_t>(-32));
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(28), ctx.gpr[31]);
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(24), ctx.gpr[19]);
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(20), ctx.gpr[18]);
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(16), ctx.gpr[17]);
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(12), ctx.gpr[16]);
    ctx.set_gpr(19, ctx.gpr[4] + 0u);
    ctx.set_gpr(17, rt.memory().aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(8)));
    ctx.set_gpr(16, rt.memory().aot_load32(ctx.gpr[17] + static_cast<std::uint32_t>(8)));
    ctx.set_gpr(18, 0u + 0u);
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_08989D00;
      }
      goto L_08989CDC;
    }
L_08989CDC:
    ctx.set_gpr(4, ctx.gpr[18] << 2u);
    ctx.set_gpr(3, rt.memory().aot_load32(ctx.gpr[17] + static_cast<std::uint32_t>(16)));
    ctx.set_gpr(3, ctx.gpr[3] + ctx.gpr[4]);
    ctx.set_gpr(4, rt.memory().aot_load32(ctx.gpr[3] + static_cast<std::uint32_t>(0)));
    { const bool branch_taken = ctx.gpr[4] == 0u;
    // nop
      if (branch_taken) {
          goto L_08989CFC;
      }
      goto L_08989CF4;
    }
L_08989CF4:
    ctx.set_gpr(31, 0x08989CFCu);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0014_entry, 14u, 257u, 0x0883D454u>(ctx, &aot_mem) && ctx.pc == 0x08989CFCu) goto L_08989CFC;
    return;
L_08989CFC:
    ctx.set_gpr(18, ctx.gpr[18] + static_cast<std::uint32_t>(1));
    goto L_08989D00;
L_08989D00:
    ctx.set_gpr(3, static_cast<std::int32_t>(ctx.gpr[18]) < static_cast<std::int32_t>(ctx.gpr[16]) ? 1u : 0u);
    { const bool branch_taken = ctx.gpr[3] != 0u;
    // nop
      if (branch_taken) {
          goto L_08989CDC;
      }
      goto L_08989D0C;
    }
L_08989D0C:
    ctx.set_gpr(5, rt.memory().aot_load32(ctx.gpr[17] + static_cast<std::uint32_t>(8)));
    ctx.set_gpr(6, 0u + 0u);
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_08989D30;
      }
      goto L_08989D1C;
    }
L_08989D1C:
    ctx.set_gpr(4, ctx.gpr[6] << 2u);
    ctx.set_gpr(3, rt.memory().aot_load32(ctx.gpr[17] + static_cast<std::uint32_t>(16)));
    ctx.set_gpr(3, ctx.gpr[3] + ctx.gpr[4]);
    rt.memory().aot_store32(ctx.gpr[3] + static_cast<std::uint32_t>(0), 0u);
    ctx.set_gpr(6, ctx.gpr[6] + static_cast<std::uint32_t>(1));
    goto L_08989D30;
L_08989D30:
    ctx.set_gpr(3, static_cast<std::int32_t>(ctx.gpr[6]) < static_cast<std::int32_t>(ctx.gpr[5]) ? 1u : 0u);
    { const bool branch_taken = ctx.gpr[3] != 0u;
    // nop
      if (branch_taken) {
          goto L_08989D1C;
      }
      goto L_08989D3C;
    }
L_08989D3C:
    rt.memory().aot_store32(ctx.gpr[17] + static_cast<std::uint32_t>(8), 0u);
    ctx.set_gpr(4, rt.memory().aot_load32(ctx.gpr[19] + static_cast<std::uint32_t>(8)));
    ctx.set_gpr(3, rt.memory().aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(8)));
    { const bool branch_taken = static_cast<std::int32_t>(ctx.gpr[3]) > 0;
    // nop
      if (branch_taken) {
          goto L_08989D60;
      }
      goto L_08989D50;
    }
L_08989D50:
    ctx.set_gpr(5, 0u + 0u);
    ctx.set_gpr(6, 0u + static_cast<std::uint32_t>(4));
    ctx.set_gpr(31, 0x08989D60u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0066_entry, 66u, 785u, 0x0890FA2Cu>(ctx, &aot_mem) && ctx.pc == 0x08989D60u) goto L_08989D60;
    return;
L_08989D60:
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
L_08989D80:
    ctx.set_gpr(29, ctx.gpr[29] + static_cast<std::uint32_t>(-32));
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(12), ctx.gpr[31]);
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(8), ctx.gpr[18]);
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(4), ctx.gpr[17]);
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(0), ctx.gpr[16]);
    ctx.set_gpr(18, ctx.gpr[4] + 0u);
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(24), 0u);
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(28), 0u);
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(16), 0u);
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(20), 0u);
    ctx.set_gpr(2, 2245u << 16u);
    ctx.set_gpr(5, rt.memory().aot_load32(ctx.gpr[2] + static_cast<std::uint32_t>(32200)));
    ctx.set_gpr(2, 2245u << 16u);
    ctx.set_gpr(3, rt.memory().aot_load32(ctx.gpr[2] + static_cast<std::uint32_t>(32204)));
    ctx.set_gpr(4, ctx.gpr[5] + static_cast<std::uint32_t>(1));
    ctx.set_gpr(2, ctx.gpr[4] < ctx.gpr[5] ? 1u : 0u);
    ctx.set_gpr(3, ctx.gpr[2] + ctx.gpr[3]);
    ctx.set_gpr(2, 2245u << 16u);
    rt.memory().aot_store32(ctx.gpr[2] + static_cast<std::uint32_t>(32200), ctx.gpr[4]);
    ctx.set_gpr(2, 2245u << 16u);
    rt.memory().aot_store32(ctx.gpr[2] + static_cast<std::uint32_t>(32204), ctx.gpr[3]);
    ctx.set_gpr(4, ctx.gpr[29] + static_cast<std::uint32_t>(24));
    ctx.set_gpr(31, 0x08989DE0u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0085_entry, 85u, 192u, 0x08958D34u>(ctx, &aot_mem) && ctx.pc == 0x08989DE0u) goto L_08989DE0;
    return;
L_08989DE0:
    ctx.set_gpr(2, rt.memory().aot_load32(ctx.gpr[18] + static_cast<std::uint32_t>(8)));
    ctx.set_gpr(16, rt.memory().aot_load32(ctx.gpr[2] + static_cast<std::uint32_t>(8)));
    ctx.set_gpr(17, 0u + 0u);
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_08989E20;
      }
      goto L_08989DF4;
    }
L_08989DF4:
    ctx.set_gpr(2, rt.memory().aot_load32(ctx.gpr[18] + static_cast<std::uint32_t>(8)));
    ctx.set_gpr(3, ctx.gpr[17] << 2u);
    ctx.set_gpr(2, rt.memory().aot_load32(ctx.gpr[2] + static_cast<std::uint32_t>(16)));
    ctx.set_gpr(2, ctx.gpr[2] + ctx.gpr[3]);
    ctx.set_gpr(4, rt.memory().aot_load32(ctx.gpr[2] + static_cast<std::uint32_t>(0)));
    ctx.set_gpr(5, ctx.gpr[18] + 0u);
    ctx.set_gpr(25, rt.memory().aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(0)));
    ctx.set_gpr(25, rt.memory().aot_load32(ctx.gpr[25] + static_cast<std::uint32_t>(92)));
    jump_target = ctx.gpr[25];
    ctx.set_gpr(31, 0x08989E1Cu);
    // nop
    ctx.pc = jump_target;
    if (rt.invoke_chained_call(ctx, &aot_mem) && ctx.pc == 0x08989E1Cu) goto L_08989E1C;
    return;
L_08989E1C:
    ctx.set_gpr(17, ctx.gpr[17] + static_cast<std::uint32_t>(1));
    goto L_08989E20;
L_08989E20:
    ctx.set_gpr(2, static_cast<std::int32_t>(ctx.gpr[17]) < static_cast<std::int32_t>(ctx.gpr[16]) ? 1u : 0u);
    { const bool branch_taken = ctx.gpr[2] != 0u;
    // nop
      if (branch_taken) {
          goto L_08989DF4;
      }
      goto L_08989E2C;
    }
L_08989E2C:
    ctx.set_gpr(4, ctx.gpr[29] + static_cast<std::uint32_t>(16));
    ctx.set_gpr(31, 0x08989E38u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0085_entry, 85u, 192u, 0x08958D34u>(ctx, &aot_mem) && ctx.pc == 0x08989E38u) goto L_08989E38;
    return;
L_08989E38:
    ctx.set_gpr(7, rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(16)));
    ctx.set_gpr(6, rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(20)));
    ctx.set_gpr(5, rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(24)));
    ctx.set_gpr(3, rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(28)));
    ctx.set_gpr(4, ctx.gpr[7] < ctx.gpr[5] ? 1u : 0u);
    ctx.set_gpr(5, ctx.gpr[7] - ctx.gpr[5]);
    ctx.set_gpr(3, ctx.gpr[6] - ctx.gpr[3]);
    ctx.set_gpr(7, ctx.gpr[3] - ctx.gpr[4]);
    ctx.set_gpr(3, 2245u << 16u);
    ctx.set_gpr(6, rt.memory().aot_load32(ctx.gpr[3] + static_cast<std::uint32_t>(32208)));
    ctx.set_gpr(3, 2245u << 16u);
    ctx.set_gpr(4, rt.memory().aot_load32(ctx.gpr[3] + static_cast<std::uint32_t>(32212)));
    ctx.set_gpr(5, ctx.gpr[6] + ctx.gpr[5]);
    ctx.set_gpr(3, ctx.gpr[5] < ctx.gpr[6] ? 1u : 0u);
    ctx.set_gpr(3, ctx.gpr[3] + ctx.gpr[4]);
    ctx.set_gpr(4, ctx.gpr[3] + ctx.gpr[7]);
    ctx.set_gpr(3, 2245u << 16u);
    rt.memory().aot_store32(ctx.gpr[3] + static_cast<std::uint32_t>(32208), ctx.gpr[5]);
    ctx.set_gpr(3, 2245u << 16u);
    rt.memory().aot_store32(ctx.gpr[3] + static_cast<std::uint32_t>(32212), ctx.gpr[4]);
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
L_08989EA4:
    ctx.set_gpr(3, ctx.gpr[5] & 65535u);
    ctx.set_gpr(3, ctx.gpr[3] << 3u);
    ctx.set_gpr(3, ctx.gpr[3] + ctx.gpr[4]);
    ctx.fpr[0] = std::bit_cast<float>(rt.memory().aot_load32(ctx.gpr[3] + static_cast<std::uint32_t>(16)));
    rt.memory().aot_store32(ctx.gpr[6] + static_cast<std::uint32_t>(0), std::bit_cast<std::uint32_t>(ctx.fpr[0]));
    ctx.fpr[0] = std::bit_cast<float>(rt.memory().aot_load32(ctx.gpr[3] + static_cast<std::uint32_t>(20)));
    rt.memory().aot_store32(ctx.gpr[7] + static_cast<std::uint32_t>(0), std::bit_cast<std::uint32_t>(ctx.fpr[0]));
    jump_target = ctx.gpr[31];
    // nop
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_08989EC8:
    ctx.set_gpr(29, ctx.gpr[29] + static_cast<std::uint32_t>(-16));
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(12), ctx.gpr[31]);
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(8), ctx.gpr[16]);
    ctx.set_gpr(16, ctx.gpr[4] + 0u);
    ctx.set_gpr(31, 0x08989EE0u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0080_entry, 80u, 434u, 0x08945EECu>(ctx, &aot_mem) && ctx.pc == 0x08989EE0u) goto L_08989EE0;
    return;
L_08989EE0:
    ctx.set_gpr(2, 2226u << 16u);
    ctx.fpr[0] = std::bit_cast<float>(rt.memory().aot_load32(ctx.gpr[2] + static_cast<std::uint32_t>(-27928)));
    rt.memory().aot_store32(ctx.gpr[16] + static_cast<std::uint32_t>(16), std::bit_cast<std::uint32_t>(ctx.fpr[0]));
    ctx.set_gpr(2, 2226u << 16u);
    ctx.fpr[0] = std::bit_cast<float>(rt.memory().aot_load32(ctx.gpr[2] + static_cast<std::uint32_t>(-27924)));
    rt.memory().aot_store32(ctx.gpr[16] + static_cast<std::uint32_t>(20), std::bit_cast<std::uint32_t>(ctx.fpr[0]));
    ctx.set_gpr(2, 2226u << 16u);
    ctx.fpr[0] = std::bit_cast<float>(rt.memory().aot_load32(ctx.gpr[2] + static_cast<std::uint32_t>(-27928)));
    rt.memory().aot_store32(ctx.gpr[16] + static_cast<std::uint32_t>(24), std::bit_cast<std::uint32_t>(ctx.fpr[0]));
    ctx.set_gpr(2, 2226u << 16u);
    ctx.fpr[0] = std::bit_cast<float>(rt.memory().aot_load32(ctx.gpr[2] + static_cast<std::uint32_t>(-27924)));
    rt.memory().aot_store32(ctx.gpr[16] + static_cast<std::uint32_t>(28), std::bit_cast<std::uint32_t>(ctx.fpr[0]));
    rt.memory().aot_store32(ctx.gpr[16] + static_cast<std::uint32_t>(32), 0u);
    ctx.set_gpr(4, 0u + static_cast<std::uint32_t>(1));
    ctx.set_gpr(31, 0x08989F20u);
    // nop
    ctx.pc = 0x08B0DF44u;
    return;
L_08989F20:
    ctx.set_gpr(4, ctx.gpr[16] + 0u);
    ctx.set_gpr(5, rt.memory().aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(40)));
    ctx.set_gpr(31, 0x08989F30u);
    // nop
    goto L_0898A26C;
L_08989F30:
    ctx.set_gpr(4, ctx.gpr[16] + 0u);
    ctx.set_gpr(5, rt.memory().aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(44)));
    ctx.set_gpr(31, 0x08989F40u);
    // nop
    goto L_0898A280;
L_08989F40:
    ctx.set_gpr(31, rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(12)));
    ctx.set_gpr(16, rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(8)));
    ctx.set_gpr(29, ctx.gpr[29] + static_cast<std::uint32_t>(16));
    jump_target = ctx.gpr[31];
    // nop
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_08989F54:
    ctx.set_gpr(29, ctx.gpr[29] + static_cast<std::uint32_t>(-48));
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(28), ctx.gpr[31]);
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(24), ctx.gpr[20]);
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(20), ctx.gpr[19]);
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(16), ctx.gpr[18]);
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(12), ctx.gpr[17]);
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(8), ctx.gpr[16]);
    ctx.set_gpr(20, ctx.gpr[4] + 0u);
    ctx.set_gpr(19, ctx.gpr[5] + 0u);
    ctx.set_gpr(4, ctx.gpr[29] + static_cast<std::uint32_t>(32));
    ctx.set_gpr(5, 0u + static_cast<std::uint32_t>(1));
    ctx.set_gpr(31, 0x08989F88u);
    // nop
    ctx.pc = 0x08B0DF4Cu;
    return;
L_08989F88:
    ctx.set_gpr(2, rt.memory().aot_load8(ctx.gpr[29] + static_cast<std::uint32_t>(40)));
    { const bool branch_taken = static_cast<std::int32_t>(ctx.gpr[2]) < 0;
    // nop
      if (branch_taken) {
          goto L_08989FA4;
      }
      goto L_08989F94;
    }
L_08989F94:
    ctx.fpr[0] = std::bit_cast<float>(ctx.gpr[2]);
    ctx.fpr[0] = static_cast<float>(static_cast<std::int32_t>(ctx.fpr_bits(0)));
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_08989FBC;
      }
      goto L_08989FA4;
    }
L_08989FA4:
    ctx.set_gpr(3, ctx.gpr[2] >> 1u);
    ctx.set_gpr(2, ctx.gpr[2] & 1u);
    ctx.set_gpr(3, ctx.gpr[3] | ctx.gpr[2]);
    ctx.fpr[0] = std::bit_cast<float>(ctx.gpr[3]);
    ctx.fpr[0] = static_cast<float>(static_cast<std::int32_t>(ctx.fpr_bits(0)));
    ctx.fpr[0] = ctx.fpr[0] + ctx.fpr[0];
    goto L_08989FBC;
L_08989FBC:
    ctx.set_gpr(2, 17152u << 16u);
    ctx.fpr[1] = std::bit_cast<float>(ctx.gpr[2]);
    ctx.fpr[0] = ctx.fpr[0] - ctx.fpr[1];
    ctx.fpr[2] = ctx.fpr[0] / ctx.fpr[1];
    ctx.set_gpr(2, rt.memory().aot_load8(ctx.gpr[29] + static_cast<std::uint32_t>(41)));
    { const bool branch_taken = static_cast<std::int32_t>(ctx.gpr[2]) < 0;
    // nop
      if (branch_taken) {
          goto L_08989FE8;
      }
      goto L_08989FD8;
    }
L_08989FD8:
    ctx.fpr[0] = std::bit_cast<float>(ctx.gpr[2]);
    ctx.fpr[0] = static_cast<float>(static_cast<std::int32_t>(ctx.fpr_bits(0)));
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_0898A000;
      }
      goto L_08989FE8;
    }
L_08989FE8:
    ctx.set_gpr(3, ctx.gpr[2] >> 1u);
    ctx.set_gpr(2, ctx.gpr[2] & 1u);
    ctx.set_gpr(3, ctx.gpr[3] | ctx.gpr[2]);
    ctx.fpr[0] = std::bit_cast<float>(ctx.gpr[3]);
    ctx.fpr[0] = static_cast<float>(static_cast<std::int32_t>(ctx.fpr_bits(0)));
    ctx.fpr[0] = ctx.fpr[0] + ctx.fpr[0];
    goto L_0898A000;
L_0898A000:
    ctx.set_gpr(2, 17152u << 16u);
    ctx.fpr[1] = std::bit_cast<float>(ctx.gpr[2]);
    ctx.fpr[0] = ctx.fpr[0] - ctx.fpr[1];
    ctx.fpr[0] = ctx.fpr[0] / ctx.fpr[1];
    ctx.set_fpr_bits(1, ctx.fpr_bits(0) ^ 0x80000000u);
    ctx.fpr[0] = std::bit_cast<float>(rt.memory().aot_load32(ctx.gpr[20] + static_cast<std::uint32_t>(16)));
    ctx.set_fpu_condition((!(std::isnan(ctx.fpr[2]) || std::isnan(ctx.fpr[0])) && ctx.fpr[2] == ctx.fpr[0]));
    ctx.set_gpr(2, 0u + static_cast<std::uint32_t>(1));
    { const bool branch_taken = !ctx.fpu_condition();
    // nop
      if (branch_taken) {
          goto L_0898A02C;
      }
      goto L_0898A028;
    }
L_0898A028:
    ctx.set_gpr(2, 0u + 0u);
    goto L_0898A02C;
L_0898A02C:
    { const bool branch_taken = ctx.gpr[2] != 0u;
    // nop
      if (branch_taken) {
          goto L_0898A04C;
      }
      goto L_0898A034;
    }
L_0898A034:
    ctx.fpr[0] = std::bit_cast<float>(rt.memory().aot_load32(ctx.gpr[20] + static_cast<std::uint32_t>(20)));
    ctx.set_fpu_condition((!(std::isnan(ctx.fpr[1]) || std::isnan(ctx.fpr[0])) && ctx.fpr[1] == ctx.fpr[0]));
    ctx.set_gpr(2, 0u + static_cast<std::uint32_t>(1));
    { const bool branch_taken = !ctx.fpu_condition();
    // nop
      if (branch_taken) {
          goto L_0898A04C;
      }
      goto L_0898A048;
    }
L_0898A048:
    ctx.set_gpr(2, 0u + 0u);
    goto L_0898A04C;
L_0898A04C:
    { const bool branch_taken = ctx.gpr[2] == 0u;
    // nop
      if (branch_taken) {
          goto L_0898A08C;
      }
      goto L_0898A054;
    }
L_0898A054:
    rt.memory().aot_store32(ctx.gpr[20] + static_cast<std::uint32_t>(16), std::bit_cast<std::uint32_t>(ctx.fpr[2]));
    rt.memory().aot_store32(ctx.gpr[20] + static_cast<std::uint32_t>(20), std::bit_cast<std::uint32_t>(ctx.fpr[1]));
    { const bool branch_taken = ctx.gpr[19] == 0u;
    // nop
      if (branch_taken) {
          goto L_0898A08C;
      }
      goto L_0898A064;
    }
L_0898A064:
    ctx.set_gpr(4, ctx.gpr[19] + 0u);
    ctx.set_gpr(5, rt.memory().aot_load32(ctx.gpr[20] + static_cast<std::uint32_t>(36)));
    ctx.set_gpr(6, ctx.gpr[20] + 0u);
    ctx.set_gpr(7, 0u + 0u);
    ctx.fpr[12] = std::bit_cast<float>(rt.memory().aot_load32(ctx.gpr[20] + static_cast<std::uint32_t>(16)));
    ctx.fpr[13] = std::bit_cast<float>(rt.memory().aot_load32(ctx.gpr[20] + static_cast<std::uint32_t>(20)));
    ctx.set_gpr(25, rt.memory().aot_load32(ctx.gpr[19] + static_cast<std::uint32_t>(0)));
    ctx.set_gpr(25, rt.memory().aot_load32(ctx.gpr[25] + static_cast<std::uint32_t>(116)));
    jump_target = ctx.gpr[25];
    ctx.set_gpr(31, 0x0898A08Cu);
    // nop
    ctx.pc = jump_target;
    if (rt.invoke_chained_call(ctx, &aot_mem) && ctx.pc == 0x0898A08Cu) goto L_0898A08C;
    return;
L_0898A08C:
    ctx.set_gpr(4, ctx.gpr[20] + 0u);
    ctx.set_gpr(5, rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(36)));
    ctx.set_gpr(31, 0x0898A09Cu);
    // nop
    goto L_0898A1A8;
L_0898A09C:
    ctx.set_gpr(16, ctx.gpr[2] + 0u);
    { const bool branch_taken = ctx.gpr[19] == 0u;
    // nop
      if (branch_taken) {
          goto L_0898A180;
      }
      goto L_0898A0A8;
    }
L_0898A0A8:
    ctx.set_gpr(3, rt.memory().aot_load32(ctx.gpr[20] + static_cast<std::uint32_t>(32)));
    ctx.set_gpr(18, ctx.gpr[3] ^ ctx.gpr[16]);
    ctx.set_gpr(17, 0u + 0u);
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_0898A178;
      }
      goto L_0898A0BC;
    }
L_0898A0BC:
    ctx.set_gpr(3, ctx.gpr[18] & 1u);
    { const bool branch_taken = ctx.gpr[3] == 0u;
    // nop
      if (branch_taken) {
          goto L_0898A170;
      }
      goto L_0898A0C8;
    }
L_0898A0C8:
    ctx.set_gpr(2, ctx.gpr[16] >> (ctx.gpr[17] & 31u));
    ctx.set_gpr(2, ctx.gpr[2] & 1u);
    { const bool branch_taken = ctx.gpr[2] == 0u;
    // nop
      if (branch_taken) {
          goto L_0898A128;
      }
      goto L_0898A0D8;
    }
L_0898A0D8:
    ctx.set_gpr(2, rt.memory().aot_load8(ctx.gpr[20] + static_cast<std::uint32_t>(12)));
    { const bool branch_taken = ctx.gpr[2] == 0u;
    // nop
      if (branch_taken) {
          goto L_0898A0FC;
      }
      goto L_0898A0E4;
    }
L_0898A0E4:
    ctx.set_gpr(4, ctx.gpr[20] + 0u);
    ctx.set_gpr(5, ctx.gpr[17] + 0u);
    ctx.set_gpr(31, 0x0898A0F4u);
    // nop
    goto L_089895E4;
L_0898A0F4:
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_0898A100;
      }
      goto L_0898A0FC;
    }
L_0898A0FC:
    ctx.set_gpr(2, ctx.gpr[17] + 0u);
    goto L_0898A100;
L_0898A100:
    ctx.set_gpr(4, ctx.gpr[19] + 0u);
    ctx.set_gpr(5, rt.memory().aot_load32(ctx.gpr[20] + static_cast<std::uint32_t>(36)));
    ctx.set_gpr(6, ctx.gpr[20] + 0u);
    ctx.set_gpr(7, ctx.gpr[2] + 0u);
    ctx.set_gpr(25, rt.memory().aot_load32(ctx.gpr[19] + static_cast<std::uint32_t>(0)));
    ctx.set_gpr(25, rt.memory().aot_load32(ctx.gpr[25] + static_cast<std::uint32_t>(120)));
    jump_target = ctx.gpr[25];
    ctx.set_gpr(31, 0x0898A120u);
    // nop
    ctx.pc = jump_target;
    if (rt.invoke_chained_call(ctx, &aot_mem) && ctx.pc == 0x0898A120u) goto L_0898A120;
    return;
L_0898A120:
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_0898A170;
      }
      goto L_0898A128;
    }
L_0898A128:
    ctx.set_gpr(2, rt.memory().aot_load8(ctx.gpr[20] + static_cast<std::uint32_t>(12)));
    { const bool branch_taken = ctx.gpr[2] == 0u;
    // nop
      if (branch_taken) {
          goto L_0898A14C;
      }
      goto L_0898A134;
    }
L_0898A134:
    ctx.set_gpr(4, ctx.gpr[20] + 0u);
    ctx.set_gpr(5, ctx.gpr[17] + 0u);
    ctx.set_gpr(31, 0x0898A144u);
    // nop
    goto L_089895E4;
L_0898A144:
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_0898A150;
      }
      goto L_0898A14C;
    }
L_0898A14C:
    ctx.set_gpr(2, ctx.gpr[17] + 0u);
    goto L_0898A150;
L_0898A150:
    ctx.set_gpr(4, ctx.gpr[19] + 0u);
    ctx.set_gpr(5, rt.memory().aot_load32(ctx.gpr[20] + static_cast<std::uint32_t>(36)));
    ctx.set_gpr(6, ctx.gpr[20] + 0u);
    ctx.set_gpr(7, ctx.gpr[2] + 0u);
    ctx.set_gpr(25, rt.memory().aot_load32(ctx.gpr[19] + static_cast<std::uint32_t>(0)));
    ctx.set_gpr(25, rt.memory().aot_load32(ctx.gpr[25] + static_cast<std::uint32_t>(124)));
    jump_target = ctx.gpr[25];
    ctx.set_gpr(31, 0x0898A170u);
    // nop
    ctx.pc = jump_target;
    if (rt.invoke_chained_call(ctx, &aot_mem) && ctx.pc == 0x0898A170u) goto L_0898A170;
    return;
L_0898A170:
    ctx.set_gpr(18, ctx.gpr[18] >> 1u);
    ctx.set_gpr(17, ctx.gpr[17] + static_cast<std::uint32_t>(1));
    goto L_0898A178;
L_0898A178:
    { const bool branch_taken = ctx.gpr[18] != 0u;
    // nop
      if (branch_taken) {
          goto L_0898A0BC;
      }
      goto L_0898A180;
    }
L_0898A180:
    rt.memory().aot_store32(ctx.gpr[20] + static_cast<std::uint32_t>(32), ctx.gpr[16]);
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
L_0898A1A8:
    ctx.set_gpr(2, 0u + 0u);
    ctx.set_gpr(6, 0u + 0u);
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_0898A1F8;
      }
      goto L_0898A1B8;
    }
L_0898A1B8:
    ctx.set_gpr(4, ctx.gpr[6] << 3u);
    ctx.set_gpr(3, 2228u << 16u);
    ctx.set_gpr(3, ctx.gpr[3] + static_cast<std::uint32_t>(14020));
    ctx.set_gpr(3, ctx.gpr[3] + ctx.gpr[4]);
    ctx.set_gpr(3, rt.memory().aot_load32(ctx.gpr[3] + static_cast<std::uint32_t>(0)));
    ctx.set_gpr(3, ctx.gpr[5] & ctx.gpr[3]);
    { const bool branch_taken = ctx.gpr[3] == 0u;
    // nop
      if (branch_taken) {
          goto L_0898A1F4;
      }
      goto L_0898A1D8;
    }
L_0898A1D8:
    ctx.set_gpr(3, 2228u << 16u);
    ctx.set_gpr(3, ctx.gpr[3] + static_cast<std::uint32_t>(14024));
    ctx.set_gpr(3, ctx.gpr[3] + ctx.gpr[4]);
    ctx.set_gpr(4, 0u + static_cast<std::uint32_t>(1));
    ctx.set_gpr(3, rt.memory().aot_load32(ctx.gpr[3] + static_cast<std::uint32_t>(0)));
    ctx.set_gpr(3, ctx.gpr[4] << (ctx.gpr[3] & 31u));
    ctx.set_gpr(2, ctx.gpr[2] | ctx.gpr[3]);
    goto L_0898A1F4;
L_0898A1F4:
    ctx.set_gpr(6, ctx.gpr[6] + static_cast<std::uint32_t>(1));
    goto L_0898A1F8;
L_0898A1F8:
    ctx.set_gpr(3, ctx.gpr[6] < static_cast<std::uint32_t>(12) ? 1u : 0u);
    { const bool branch_taken = ctx.gpr[3] != 0u;
    // nop
      if (branch_taken) {
          goto L_0898A1B8;
      }
      goto L_0898A204;
    }
L_0898A204:
    jump_target = ctx.gpr[31];
    // nop
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_0898A20C:
    ctx.set_gpr(29, ctx.gpr[29] + static_cast<std::uint32_t>(-16));
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(12), ctx.gpr[31]);
    ctx.set_gpr(25, rt.memory().aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(0)));
    ctx.set_gpr(25, rt.memory().aot_load32(ctx.gpr[25] + static_cast<std::uint32_t>(112)));
    jump_target = ctx.gpr[25];
    ctx.set_gpr(31, 0x0898A224u);
    // nop
    ctx.pc = jump_target;
    if (rt.invoke_chained_call(ctx, &aot_mem) && ctx.pc == 0x0898A224u) goto L_0898A224;
    return;
L_0898A224:
    { const bool branch_taken = ctx.gpr[2] == 0u;
    // nop
      if (branch_taken) {
          goto L_0898A23C;
      }
      goto L_0898A22C;
    }
L_0898A22C:
    ctx.set_gpr(2, 16256u << 16u);
    ctx.fpr[0] = std::bit_cast<float>(ctx.gpr[2]);
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_0898A240;
      }
      goto L_0898A23C;
    }
L_0898A23C:
    ctx.fpr[0] = std::bit_cast<float>(0u);
    goto L_0898A240;
L_0898A240:
    ctx.set_gpr(31, rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(12)));
    ctx.set_gpr(29, ctx.gpr[29] + static_cast<std::uint32_t>(16));
    jump_target = ctx.gpr[31];
    // nop
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_0898A250:
    ctx.set_gpr(2, rt.memory().aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(32)));
    ctx.set_gpr(2, ctx.gpr[2] >> (ctx.gpr[5] & 31u));
    ctx.set_gpr(2, ctx.gpr[2] & 1u);
    ctx.set_gpr(2, ctx.gpr[2] ^ 1u);
    ctx.set_gpr(2, ctx.gpr[2] < static_cast<std::uint32_t>(1) ? 1u : 0u);
    jump_target = ctx.gpr[31];
    // nop
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_0898A26C:
    rt.memory().aot_store32(ctx.gpr[4] + static_cast<std::uint32_t>(40), ctx.gpr[5]);
    ctx.set_gpr(3, 2228u << 16u);
    rt.memory().aot_store32(ctx.gpr[3] + static_cast<std::uint32_t>(14088), ctx.gpr[5]);
    jump_target = ctx.gpr[31];
    // nop
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_0898A280:
    rt.memory().aot_store32(ctx.gpr[4] + static_cast<std::uint32_t>(44), ctx.gpr[5]);
    ctx.set_gpr(3, 2228u << 16u);
    rt.memory().aot_store32(ctx.gpr[3] + static_cast<std::uint32_t>(14096), ctx.gpr[5]);
    jump_target = ctx.gpr[31];
    // nop
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_0898A294:
    ctx.set_gpr(29, ctx.gpr[29] + static_cast<std::uint32_t>(-16));
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(12), ctx.gpr[31]);
    ctx.set_gpr(31, 0x0898A2A4u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0080_entry, 80u, 434u, 0x08945EECu>(ctx, &aot_mem) && ctx.pc == 0x0898A2A4u) goto L_0898A2A4;
    return;
L_0898A2A4:
    ctx.set_gpr(31, rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(12)));
    ctx.set_gpr(29, ctx.gpr[29] + static_cast<std::uint32_t>(16));
    jump_target = ctx.gpr[31];
    // nop
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_0898A2B4:
    ctx.set_gpr(29, ctx.gpr[29] + static_cast<std::uint32_t>(-32));
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(12), ctx.gpr[31]);
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(8), ctx.gpr[17]);
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(4), ctx.gpr[16]);
    ctx.set_gpr(17, ctx.gpr[4] + 0u);
    ctx.set_gpr(16, ctx.gpr[5] + 0u);
    rt.memory().aot_store8(ctx.gpr[29] + static_cast<std::uint32_t>(24), static_cast<std::uint8_t>(0u));
    ctx.set_gpr(4, 0u + 0u);
    ctx.set_gpr(31, 0x0898A2DCu);
    // nop
    goto L_0898928C;
L_0898A2DC:
    ctx.set_gpr(4, ctx.gpr[2] + 0u);
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(28), ctx.gpr[4]);
    ctx.set_gpr(5, 0u + 0u);
    ctx.set_gpr(25, rt.memory().aot_load32(ctx.gpr[2] + static_cast<std::uint32_t>(0)));
    ctx.set_gpr(25, rt.memory().aot_load32(ctx.gpr[25] + static_cast<std::uint32_t>(132)));
    jump_target = ctx.gpr[25];
    ctx.set_gpr(31, 0x0898A2F8u);
    // nop
    ctx.pc = jump_target;
    if (rt.invoke_chained_call(ctx, &aot_mem) && ctx.pc == 0x0898A2F8u) goto L_0898A2F8;
    return;
L_0898A2F8:
    ctx.set_gpr(4, rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(28)));
    ctx.set_gpr(5, ctx.gpr[16] + 0u);
    ctx.set_gpr(25, rt.memory().aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(0)));
    ctx.set_gpr(25, rt.memory().aot_load32(ctx.gpr[25] + static_cast<std::uint32_t>(144)));
    jump_target = ctx.gpr[25];
    ctx.set_gpr(31, 0x0898A310u);
    // nop
    ctx.pc = jump_target;
    if (rt.invoke_chained_call(ctx, &aot_mem) && ctx.pc == 0x0898A310u) goto L_0898A310;
    return;
L_0898A310:
    ctx.set_gpr(4, rt.memory().aot_load32(ctx.gpr[17] + static_cast<std::uint32_t>(8)));
    ctx.set_gpr(5, rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(28)));
    ctx.set_gpr(31, 0x0898A320u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0081_entry, 81u, 299u, 0x089494E0u>(ctx, &aot_mem) && ctx.pc == 0x0898A320u) goto L_0898A320;
    return;
L_0898A320:
    ctx.set_gpr(4, rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(28)));
    { const bool branch_taken = ctx.gpr[4] == 0u;
    // nop
      if (branch_taken) {
          goto L_0898A334;
      }
      goto L_0898A32C;
    }
L_0898A32C:
    ctx.set_gpr(31, 0x0898A334u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0014_entry, 14u, 257u, 0x0883D454u>(ctx, &aot_mem) && ctx.pc == 0x0898A334u) goto L_0898A334;
    return;
L_0898A334:
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
L_0898A34C:
    ctx.set_gpr(29, ctx.gpr[29] + static_cast<std::uint32_t>(-16));
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(12), ctx.gpr[31]);
    ctx.set_gpr(4, ctx.gpr[4] + static_cast<std::uint32_t>(36));
    ctx.set_gpr(31, 0x0898A360u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0085_entry, 85u, 61u, 0x089584C4u>(ctx, &aot_mem) && ctx.pc == 0x0898A360u) goto L_0898A360;
    return;
L_0898A360:
    ctx.set_gpr(31, rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(12)));
    ctx.set_gpr(29, ctx.gpr[29] + static_cast<std::uint32_t>(16));
    jump_target = ctx.gpr[31];
    // nop
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_0898A370:
    jump_target = ctx.gpr[31];
    // nop
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_0898A378:
    ctx.set_gpr(29, ctx.gpr[29] + static_cast<std::uint32_t>(-16));
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(12), ctx.gpr[31]);
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(8), ctx.gpr[17]);
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(4), ctx.gpr[16]);
    ctx.set_gpr(17, ctx.gpr[4] + 0u);
    ctx.set_gpr(4, ctx.gpr[17] + static_cast<std::uint32_t>(24));
    ctx.set_gpr(5, 0u + 0u);
    ctx.set_gpr(31, 0x0898A39Cu);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0085_entry, 85u, 61u, 0x089584C4u>(ctx, &aot_mem) && ctx.pc == 0x0898A39Cu) goto L_0898A39C;
    return;
L_0898A39C:
    ctx.set_gpr(2, 2245u << 16u);
    ctx.set_gpr(2, rt.memory().aot_load32(ctx.gpr[2] + static_cast<std::uint32_t>(30776)));
    { const bool branch_taken = ctx.gpr[2] != 0u;
    // nop
      if (branch_taken) {
          goto L_0898A3D4;
      }
      goto L_0898A3AC;
    }
L_0898A3AC:
    ctx.set_gpr(4, 0u + static_cast<std::uint32_t>(16));
    ctx.set_gpr(31, 0x0898A3B8u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0072_entry, 72u, 788u, 0x089277A0u>(ctx, &aot_mem) && ctx.pc == 0x0898A3B8u) goto L_0898A3B8;
    return;
L_0898A3B8:
    { const bool branch_taken = ctx.gpr[2] == 0u;
    // nop
      if (branch_taken) {
          goto L_0898A3CC;
      }
      goto L_0898A3C0;
    }
L_0898A3C0:
    ctx.set_gpr(4, ctx.gpr[2] + 0u);
    ctx.set_gpr(31, 0x0898A3CCu);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0072_entry, 72u, 762u, 0x089275E8u>(ctx, &aot_mem) && ctx.pc == 0x0898A3CCu) goto L_0898A3CC;
    return;
L_0898A3CC:
    ctx.set_gpr(3, 2245u << 16u);
    rt.memory().aot_store32(ctx.gpr[3] + static_cast<std::uint32_t>(30776), ctx.gpr[2]);
    goto L_0898A3D4;
L_0898A3D4:
    ctx.set_gpr(2, 2245u << 16u);
    ctx.set_gpr(4, rt.memory().aot_load32(ctx.gpr[2] + static_cast<std::uint32_t>(30776)));
    ctx.set_gpr(5, 0u + 0u);
    ctx.set_gpr(31, 0x0898A3E8u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0072_entry, 72u, 784u, 0x08927768u>(ctx, &aot_mem) && ctx.pc == 0x0898A3E8u) goto L_0898A3E8;
    return;
L_0898A3E8:
    ctx.set_gpr(16, ctx.gpr[2] + 0u);
    ctx.set_gpr(5, 0u + 0u);
    ctx.set_gpr(4, rt.memory().aot_load32(ctx.gpr[17] + static_cast<std::uint32_t>(28)));
    { const bool branch_taken = ctx.gpr[4] == 0u;
    // nop
      if (branch_taken) {
          goto L_0898A418;
      }
      goto L_0898A3FC;
    }
L_0898A3FC:
    ctx.set_gpr(3, ctx.gpr[4] & 1u);
    ctx.set_gpr(3, ctx.gpr[3] ^ 1u);
    ctx.set_gpr(3, ctx.gpr[3] < static_cast<std::uint32_t>(1) ? 1u : 0u);
    ctx.set_gpr(3, ctx.gpr[3] ^ 1u);
    { const bool branch_taken = ctx.gpr[3] == 0u;
    // nop
      if (branch_taken) {
          goto L_0898A418;
      }
      goto L_0898A414;
    }
L_0898A414:
    ctx.set_gpr(5, 0u + static_cast<std::uint32_t>(1));
    goto L_0898A418;
L_0898A418:
    { const bool branch_taken = ctx.gpr[5] == 0u;
    // nop
      if (branch_taken) {
          goto L_0898A444;
      }
      goto L_0898A420;
    }
L_0898A420:
    ctx.set_gpr(5, ctx.gpr[4] + static_cast<std::uint32_t>(-8));
    ctx.set_gpr(3, rt.memory().aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(-4)));
    ctx.set_gpr(3, ctx.gpr[3] + static_cast<std::uint32_t>(-1));
    rt.memory().aot_store32(ctx.gpr[4] + static_cast<std::uint32_t>(-4), ctx.gpr[3]);
    { const bool branch_taken = ctx.gpr[3] != 0u;
    // nop
      if (branch_taken) {
          goto L_0898A444;
      }
      goto L_0898A438;
    }
L_0898A438:
    ctx.set_gpr(4, rt.memory().aot_load32(ctx.gpr[5] + static_cast<std::uint32_t>(0)));
    ctx.set_gpr(31, 0x0898A444u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0085_entry, 85u, 887u, 0x0895BD2Cu>(ctx, &aot_mem) && ctx.pc == 0x0898A444u) goto L_0898A444;
    return;
L_0898A444:
    rt.memory().aot_store32(ctx.gpr[17] + static_cast<std::uint32_t>(28), ctx.gpr[16]);
    rt.memory().aot_store8(ctx.gpr[17] + static_cast<std::uint32_t>(32), static_cast<std::uint8_t>(0u));
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
L_0898A464:
    ctx.set_gpr(29, ctx.gpr[29] + static_cast<std::uint32_t>(-16));
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(12), ctx.gpr[31]);
    { const bool branch_taken = ctx.gpr[5] == 0u;
    // nop
      if (branch_taken) {
          goto L_0898A48C;
      }
      goto L_0898A474;
    }
L_0898A474:
    ctx.set_gpr(4, ctx.gpr[4] + static_cast<std::uint32_t>(24));
    ctx.set_gpr(31, 0x0898A480u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0085_entry, 85u, 61u, 0x089584C4u>(ctx, &aot_mem) && ctx.pc == 0x0898A480u) goto L_0898A480;
    return;
L_0898A480:
    ctx.set_gpr(2, 0u + static_cast<std::uint32_t>(1));
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_0898A490;
      }
      goto L_0898A48C;
    }
L_0898A48C:
    ctx.set_gpr(2, 0u + 0u);
    goto L_0898A490;
L_0898A490:
    ctx.set_gpr(31, rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(12)));
    ctx.set_gpr(29, ctx.gpr[29] + static_cast<std::uint32_t>(16));
    jump_target = ctx.gpr[31];
    // nop
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_0898A4A0:
    ctx.set_gpr(29, ctx.gpr[29] + static_cast<std::uint32_t>(-16));
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(12), ctx.gpr[31]);
    ctx.set_gpr(3, rt.memory().aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(28)));
    ctx.set_gpr(2, 0u + static_cast<std::uint32_t>(-2));
    ctx.set_gpr(5, ctx.gpr[3] & ctx.gpr[2]);
    ctx.set_gpr(6, rt.memory().aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(8)));
    ctx.set_gpr(7, rt.memory().aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(12)));
    ctx.set_gpr(25, rt.memory().aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(0)));
    ctx.set_gpr(25, rt.memory().aot_load32(ctx.gpr[25] + static_cast<std::uint32_t>(96)));
    jump_target = ctx.gpr[25];
    ctx.set_gpr(31, 0x0898A4CCu);
    // nop
    ctx.pc = jump_target;
    if (rt.invoke_chained_call(ctx, &aot_mem) && ctx.pc == 0x0898A4CCu) goto L_0898A4CC;
    return;
L_0898A4CC:
    ctx.set_gpr(31, rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(12)));
    ctx.set_gpr(29, ctx.gpr[29] + static_cast<std::uint32_t>(16));
    jump_target = ctx.gpr[31];
    // nop
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_0898A4DC:
    ctx.set_gpr(29, ctx.gpr[29] + static_cast<std::uint32_t>(-144));
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(28), ctx.gpr[31]);
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(24), ctx.gpr[19]);
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(20), ctx.gpr[18]);
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(16), ctx.gpr[17]);
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(12), ctx.gpr[16]);
    ctx.set_gpr(19, ctx.gpr[4] + 0u);
    ctx.set_gpr(16, ctx.gpr[5] + 0u);
    ctx.set_gpr(18, ctx.gpr[6] + 0u);
    ctx.set_gpr(17, ctx.gpr[7] + 0u);
    { const bool branch_taken = ctx.gpr[16] != 0u;
    // nop
      if (branch_taken) {
          goto L_0898A5C4;
      }
      goto L_0898A50C;
    }
L_0898A50C:
    ctx.set_gpr(2, 2245u << 16u);
    ctx.set_gpr(2, rt.memory().aot_load32(ctx.gpr[2] + static_cast<std::uint32_t>(30776)));
    { const bool branch_taken = ctx.gpr[2] != 0u;
    // nop
      if (branch_taken) {
          goto L_0898A544;
      }
      goto L_0898A51C;
    }
L_0898A51C:
    ctx.set_gpr(4, 0u + static_cast<std::uint32_t>(16));
    ctx.set_gpr(31, 0x0898A528u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0072_entry, 72u, 788u, 0x089277A0u>(ctx, &aot_mem) && ctx.pc == 0x0898A528u) goto L_0898A528;
    return;
L_0898A528:
    { const bool branch_taken = ctx.gpr[2] == 0u;
    // nop
      if (branch_taken) {
          goto L_0898A53C;
      }
      goto L_0898A530;
    }
L_0898A530:
    ctx.set_gpr(4, ctx.gpr[2] + 0u);
    ctx.set_gpr(31, 0x0898A53Cu);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0072_entry, 72u, 762u, 0x089275E8u>(ctx, &aot_mem) && ctx.pc == 0x0898A53Cu) goto L_0898A53C;
    return;
L_0898A53C:
    ctx.set_gpr(3, 2245u << 16u);
    rt.memory().aot_store32(ctx.gpr[3] + static_cast<std::uint32_t>(30776), ctx.gpr[2]);
    goto L_0898A544;
L_0898A544:
    ctx.set_gpr(2, 2245u << 16u);
    ctx.set_gpr(4, rt.memory().aot_load32(ctx.gpr[2] + static_cast<std::uint32_t>(30776)));
    ctx.set_gpr(5, 2228u << 16u);
    ctx.set_gpr(5, ctx.gpr[5] + static_cast<std::uint32_t>(14116));
    ctx.set_gpr(31, 0x0898A55Cu);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0072_entry, 72u, 784u, 0x08927768u>(ctx, &aot_mem) && ctx.pc == 0x0898A55Cu) goto L_0898A55C;
    return;
L_0898A55C:
    ctx.set_gpr(16, ctx.gpr[2] + 0u);
    ctx.set_gpr(4, 0u + 0u);
    ctx.set_gpr(3, rt.memory().aot_load32(ctx.gpr[19] + static_cast<std::uint32_t>(28)));
    { const bool branch_taken = ctx.gpr[3] == 0u;
    // nop
      if (branch_taken) {
          goto L_0898A58C;
      }
      goto L_0898A570;
    }
L_0898A570:
    ctx.set_gpr(2, ctx.gpr[3] & 1u);
    ctx.set_gpr(2, ctx.gpr[2] ^ 1u);
    ctx.set_gpr(2, ctx.gpr[2] < static_cast<std::uint32_t>(1) ? 1u : 0u);
    ctx.set_gpr(2, ctx.gpr[2] ^ 1u);
    { const bool branch_taken = ctx.gpr[2] == 0u;
    // nop
      if (branch_taken) {
          goto L_0898A58C;
      }
      goto L_0898A588;
    }
L_0898A588:
    ctx.set_gpr(4, 0u + static_cast<std::uint32_t>(1));
    goto L_0898A58C;
L_0898A58C:
    { const bool branch_taken = ctx.gpr[4] == 0u;
    // nop
      if (branch_taken) {
          goto L_0898A5B8;
      }
      goto L_0898A594;
    }
L_0898A594:
    ctx.set_gpr(5, ctx.gpr[3] + static_cast<std::uint32_t>(-8));
    ctx.set_gpr(2, rt.memory().aot_load32(ctx.gpr[3] + static_cast<std::uint32_t>(-4)));
    ctx.set_gpr(2, ctx.gpr[2] + static_cast<std::uint32_t>(-1));
    rt.memory().aot_store32(ctx.gpr[3] + static_cast<std::uint32_t>(-4), ctx.gpr[2]);
    { const bool branch_taken = ctx.gpr[2] != 0u;
    // nop
      if (branch_taken) {
          goto L_0898A5B8;
      }
      goto L_0898A5AC;
    }
L_0898A5AC:
    ctx.set_gpr(4, rt.memory().aot_load32(ctx.gpr[5] + static_cast<std::uint32_t>(0)));
    ctx.set_gpr(31, 0x0898A5B8u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0085_entry, 85u, 887u, 0x0895BD2Cu>(ctx, &aot_mem) && ctx.pc == 0x0898A5B8u) goto L_0898A5B8;
    return;
L_0898A5B8:
    rt.memory().aot_store32(ctx.gpr[19] + static_cast<std::uint32_t>(28), ctx.gpr[16]);
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_0898A670;
      }
      goto L_0898A5C4;
    }
L_0898A5C4:
    ctx.set_gpr(2, 2245u << 16u);
    ctx.set_gpr(2, rt.memory().aot_load32(ctx.gpr[2] + static_cast<std::uint32_t>(30776)));
    { const bool branch_taken = ctx.gpr[2] != 0u;
    // nop
      if (branch_taken) {
          goto L_0898A5FC;
      }
      goto L_0898A5D4;
    }
L_0898A5D4:
    ctx.set_gpr(4, 0u + static_cast<std::uint32_t>(16));
    ctx.set_gpr(31, 0x0898A5E0u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0072_entry, 72u, 788u, 0x089277A0u>(ctx, &aot_mem) && ctx.pc == 0x0898A5E0u) goto L_0898A5E0;
    return;
L_0898A5E0:
    { const bool branch_taken = ctx.gpr[2] == 0u;
    // nop
      if (branch_taken) {
          goto L_0898A5F4;
      }
      goto L_0898A5E8;
    }
L_0898A5E8:
    ctx.set_gpr(4, ctx.gpr[2] + 0u);
    ctx.set_gpr(31, 0x0898A5F4u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0072_entry, 72u, 762u, 0x089275E8u>(ctx, &aot_mem) && ctx.pc == 0x0898A5F4u) goto L_0898A5F4;
    return;
L_0898A5F4:
    ctx.set_gpr(3, 2245u << 16u);
    rt.memory().aot_store32(ctx.gpr[3] + static_cast<std::uint32_t>(30776), ctx.gpr[2]);
    goto L_0898A5FC;
L_0898A5FC:
    ctx.set_gpr(2, 2245u << 16u);
    ctx.set_gpr(4, rt.memory().aot_load32(ctx.gpr[2] + static_cast<std::uint32_t>(30776)));
    ctx.set_gpr(5, ctx.gpr[16] + 0u);
    ctx.set_gpr(31, 0x0898A610u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0072_entry, 72u, 784u, 0x08927768u>(ctx, &aot_mem) && ctx.pc == 0x0898A610u) goto L_0898A610;
    return;
L_0898A610:
    ctx.set_gpr(16, ctx.gpr[2] + 0u);
    ctx.set_gpr(4, 0u + 0u);
    ctx.set_gpr(3, rt.memory().aot_load32(ctx.gpr[19] + static_cast<std::uint32_t>(28)));
    { const bool branch_taken = ctx.gpr[3] == 0u;
    // nop
      if (branch_taken) {
          goto L_0898A640;
      }
      goto L_0898A624;
    }
L_0898A624:
    ctx.set_gpr(2, ctx.gpr[3] & 1u);
    ctx.set_gpr(2, ctx.gpr[2] ^ 1u);
    ctx.set_gpr(2, ctx.gpr[2] < static_cast<std::uint32_t>(1) ? 1u : 0u);
    ctx.set_gpr(2, ctx.gpr[2] ^ 1u);
    { const bool branch_taken = ctx.gpr[2] == 0u;
    // nop
      if (branch_taken) {
          goto L_0898A640;
      }
      goto L_0898A63C;
    }
L_0898A63C:
    ctx.set_gpr(4, 0u + static_cast<std::uint32_t>(1));
    goto L_0898A640;
L_0898A640:
    { const bool branch_taken = ctx.gpr[4] == 0u;
    // nop
      if (branch_taken) {
          goto L_0898A66C;
      }
      goto L_0898A648;
    }
L_0898A648:
    ctx.set_gpr(5, ctx.gpr[3] + static_cast<std::uint32_t>(-8));
    ctx.set_gpr(2, rt.memory().aot_load32(ctx.gpr[3] + static_cast<std::uint32_t>(-4)));
    ctx.set_gpr(2, ctx.gpr[2] + static_cast<std::uint32_t>(-1));
    rt.memory().aot_store32(ctx.gpr[3] + static_cast<std::uint32_t>(-4), ctx.gpr[2]);
    { const bool branch_taken = ctx.gpr[2] != 0u;
    // nop
      if (branch_taken) {
          goto L_0898A66C;
      }
      goto L_0898A660;
    }
L_0898A660:
    ctx.set_gpr(4, rt.memory().aot_load32(ctx.gpr[5] + static_cast<std::uint32_t>(0)));
    ctx.set_gpr(31, 0x0898A66Cu);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0085_entry, 85u, 887u, 0x0895BD2Cu>(ctx, &aot_mem) && ctx.pc == 0x0898A66Cu) goto L_0898A66C;
    return;
L_0898A66C:
    rt.memory().aot_store32(ctx.gpr[19] + static_cast<std::uint32_t>(28), ctx.gpr[16]);
    goto L_0898A670;
L_0898A670:
    ctx.set_gpr(1, static_cast<std::int32_t>(ctx.gpr[18]) < 480 ? 1u : 0u);
    { const bool branch_taken = ctx.gpr[1] == 0u;
    // nop
      if (branch_taken) {
          goto L_0898A684;
      }
      goto L_0898A67C;
    }
L_0898A67C:
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_0898A688;
      }
      goto L_0898A684;
    }
L_0898A684:
    ctx.set_gpr(18, 0u + static_cast<std::uint32_t>(480));
    goto L_0898A688;
L_0898A688:
    rt.memory().aot_store32(ctx.gpr[19] + static_cast<std::uint32_t>(8), ctx.gpr[18]);
    ctx.set_gpr(1, static_cast<std::int32_t>(ctx.gpr[17]) < 272 ? 1u : 0u);
    { const bool branch_taken = ctx.gpr[1] == 0u;
    // nop
      if (branch_taken) {
          goto L_0898A6A0;
      }
      goto L_0898A698;
    }
L_0898A698:
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_0898A6A4;
      }
      goto L_0898A6A0;
    }
L_0898A6A0:
    ctx.set_gpr(17, 0u + static_cast<std::uint32_t>(272));
    goto L_0898A6A4;
L_0898A6A4:
    rt.memory().aot_store32(ctx.gpr[19] + static_cast<std::uint32_t>(12), ctx.gpr[17]);
    ctx.set_gpr(4, rt.memory().aot_load32(ctx.gpr[19] + static_cast<std::uint32_t>(24)));
    { const bool branch_taken = ctx.gpr[4] == 0u;
    // nop
      if (branch_taken) {
          goto L_0898A764;
      }
      goto L_0898A6B4;
    }
L_0898A6B4:
    ctx.set_gpr(25, rt.memory().aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(0)));
    ctx.set_gpr(25, rt.memory().aot_load32(ctx.gpr[25] + static_cast<std::uint32_t>(176)));
    jump_target = ctx.gpr[25];
    ctx.set_gpr(31, 0x0898A6C4u);
    // nop
    ctx.pc = jump_target;
    if (rt.invoke_chained_call(ctx, &aot_mem) && ctx.pc == 0x0898A6C4u) goto L_0898A6C4;
    return;
L_0898A6C4:
    ctx.set_gpr(3, 0u + static_cast<std::uint32_t>(-1));
    { const bool branch_taken = ctx.gpr[2] != ctx.gpr[3];
    // nop
      if (branch_taken) {
          goto L_0898A72C;
      }
      goto L_0898A6D0;
    }
L_0898A6D0:
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(124), ctx.gpr[3]);
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(128), ctx.gpr[3]);
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(132), ctx.gpr[3]);
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(136), 0u);
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(140), 0u);
    ctx.set_gpr(2, 0u + static_cast<std::uint32_t>(1));
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(92), ctx.gpr[2]);
    ctx.set_gpr(2, rt.memory().aot_load32(ctx.gpr[19] + static_cast<std::uint32_t>(8)));
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(96), ctx.gpr[2]);
    ctx.set_gpr(2, rt.memory().aot_load32(ctx.gpr[19] + static_cast<std::uint32_t>(12)));
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(100), ctx.gpr[2]);
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(104), ctx.gpr[3]);
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(108), ctx.gpr[3]);
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(112), ctx.gpr[3]);
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(116), ctx.gpr[3]);
    ctx.set_gpr(2, 16256u << 16u);
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(120), ctx.gpr[2]);
    ctx.set_gpr(4, rt.memory().aot_load32(ctx.gpr[19] + static_cast<std::uint32_t>(24)));
    ctx.set_gpr(5, ctx.gpr[29] + static_cast<std::uint32_t>(92));
    ctx.set_gpr(25, rt.memory().aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(0)));
    ctx.set_gpr(25, rt.memory().aot_load32(ctx.gpr[25] + static_cast<std::uint32_t>(152)));
    jump_target = ctx.gpr[25];
    ctx.set_gpr(31, 0x0898A72Cu);
    // nop
    ctx.pc = jump_target;
    if (rt.invoke_chained_call(ctx, &aot_mem) && ctx.pc == 0x0898A72Cu) goto L_0898A72C;
    return;
L_0898A72C:
    ctx.set_gpr(4, rt.memory().aot_load32(ctx.gpr[19] + static_cast<std::uint32_t>(24)));
    ctx.set_gpr(5, ctx.gpr[2] + 0u);
    ctx.set_gpr(6, ctx.gpr[29] + static_cast<std::uint32_t>(88));
    ctx.set_gpr(7, ctx.gpr[29] + static_cast<std::uint32_t>(84));
    ctx.set_gpr(25, rt.memory().aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(0)));
    ctx.set_gpr(25, rt.memory().aot_load32(ctx.gpr[25] + static_cast<std::uint32_t>(188)));
    jump_target = ctx.gpr[25];
    ctx.set_gpr(31, 0x0898A74Cu);
    // nop
    ctx.pc = jump_target;
    if (rt.invoke_chained_call(ctx, &aot_mem) && ctx.pc == 0x0898A74Cu) goto L_0898A74C;
    return;
L_0898A74C:
    ctx.set_gpr(2, rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(88)));
    rt.memory().aot_store32(ctx.gpr[19] + static_cast<std::uint32_t>(8), ctx.gpr[2]);
    ctx.set_gpr(2, rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(84)));
    rt.memory().aot_store32(ctx.gpr[19] + static_cast<std::uint32_t>(12), ctx.gpr[2]);
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_0898A820;
      }
      goto L_0898A764;
    }
L_0898A764:
    ctx.set_gpr(4, ctx.gpr[19] + 0u);
    ctx.set_gpr(31, 0x0898A770u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0081_entry, 81u, 41u, 0x0894835Cu>(ctx, &aot_mem) && ctx.pc == 0x0898A770u) goto L_0898A770;
    return;
L_0898A770:
    ctx.set_gpr(4, ctx.gpr[2] + 0u);
    ctx.set_gpr(31, 0x0898A77Cu);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0098_entry, 98u, 51u, 0x0898C4BCu>(ctx, &aot_mem) && ctx.pc == 0x0898A77Cu) goto L_0898A77C;
    return;
L_0898A77C:
    ctx.set_gpr(4, ctx.gpr[19] + static_cast<std::uint32_t>(24));
    ctx.set_gpr(5, ctx.gpr[2] + 0u);
    ctx.set_gpr(31, 0x0898A78Cu);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0085_entry, 85u, 61u, 0x089584C4u>(ctx, &aot_mem) && ctx.pc == 0x0898A78Cu) goto L_0898A78C;
    return;
L_0898A78C:
    ctx.set_gpr(4, rt.memory().aot_load32(ctx.gpr[19] + static_cast<std::uint32_t>(24)));
    ctx.set_gpr(2, rt.memory().aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(4)));
    ctx.set_gpr(2, ctx.gpr[2] + static_cast<std::uint32_t>(-1));
    rt.memory().aot_store32(ctx.gpr[4] + static_cast<std::uint32_t>(4), ctx.gpr[2]);
    ctx.set_gpr(2, ctx.gpr[2] << 10u);
    ctx.set_gpr(2, ctx.gpr[2] >> 10u);
    { const bool branch_taken = ctx.gpr[2] != 0u;
    // nop
      if (branch_taken) {
          goto L_0898A7B4;
      }
      goto L_0898A7AC;
    }
L_0898A7AC:
    ctx.set_gpr(31, 0x0898A7B4u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0080_entry, 80u, 556u, 0x089467C8u>(ctx, &aot_mem) && ctx.pc == 0x0898A7B4u) goto L_0898A7B4;
    return;
L_0898A7B4:
    ctx.set_gpr(2, 0u + static_cast<std::uint32_t>(-1));
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(64), ctx.gpr[2]);
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(68), ctx.gpr[2]);
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(72), ctx.gpr[2]);
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(76), 0u);
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(80), 0u);
    ctx.set_gpr(2, 0u + static_cast<std::uint32_t>(1));
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(32), ctx.gpr[2]);
    ctx.set_gpr(2, rt.memory().aot_load32(ctx.gpr[19] + static_cast<std::uint32_t>(8)));
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(36), ctx.gpr[2]);
    ctx.set_gpr(2, rt.memory().aot_load32(ctx.gpr[19] + static_cast<std::uint32_t>(12)));
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(40), ctx.gpr[2]);
    ctx.set_gpr(2, 0u + static_cast<std::uint32_t>(24));
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(44), ctx.gpr[2]);
    ctx.set_gpr(2, 0u + static_cast<std::uint32_t>(8));
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(48), ctx.gpr[2]);
    ctx.set_gpr(2, 0u + static_cast<std::uint32_t>(16));
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(52), ctx.gpr[2]);
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(56), 0u);
    ctx.set_gpr(2, 16256u << 16u);
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(60), ctx.gpr[2]);
    ctx.set_gpr(4, rt.memory().aot_load32(ctx.gpr[19] + static_cast<std::uint32_t>(24)));
    ctx.set_gpr(5, ctx.gpr[29] + static_cast<std::uint32_t>(32));
    ctx.set_gpr(25, rt.memory().aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(0)));
    ctx.set_gpr(25, rt.memory().aot_load32(ctx.gpr[25] + static_cast<std::uint32_t>(152)));
    jump_target = ctx.gpr[25];
    ctx.set_gpr(31, 0x0898A820u);
    // nop
    ctx.pc = jump_target;
    if (rt.invoke_chained_call(ctx, &aot_mem) && ctx.pc == 0x0898A820u) goto L_0898A820;
    return;
L_0898A820:
    ctx.set_gpr(4, rt.memory().aot_load32(ctx.gpr[19] + static_cast<std::uint32_t>(24)));
    ctx.set_gpr(25, rt.memory().aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(0)));
    ctx.set_gpr(25, rt.memory().aot_load32(ctx.gpr[25] + static_cast<std::uint32_t>(112)));
    jump_target = ctx.gpr[25];
    ctx.set_gpr(31, 0x0898A834u);
    // nop
    ctx.pc = jump_target;
    if (rt.invoke_chained_call(ctx, &aot_mem) && ctx.pc == 0x0898A834u) goto L_0898A834;
    return;
L_0898A834:
    ctx.set_gpr(2, 0u + static_cast<std::uint32_t>(1));
    rt.memory().aot_store8(ctx.gpr[19] + static_cast<std::uint32_t>(32), static_cast<std::uint8_t>(ctx.gpr[2]));
    ctx.set_gpr(31, rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(28)));
    ctx.set_gpr(19, rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(24)));
    ctx.set_gpr(18, rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(20)));
    ctx.set_gpr(17, rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(16)));
    ctx.set_gpr(16, rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(12)));
    ctx.set_gpr(29, ctx.gpr[29] + static_cast<std::uint32_t>(144));
    jump_target = ctx.gpr[31];
    // nop
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_0898A85C:
    ctx.set_gpr(29, ctx.gpr[29] + static_cast<std::uint32_t>(-16));
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(12), ctx.gpr[31]);
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(8), ctx.gpr[17]);
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(4), ctx.gpr[16]);
    ctx.set_gpr(17, ctx.gpr[4] + 0u);
    ctx.set_gpr(16, ctx.gpr[5] + 0u);
    { const bool branch_taken = ctx.gpr[16] == 0u;
    // nop
      if (branch_taken) {
          goto L_0898A934;
      }
      goto L_0898A87C;
    }
L_0898A87C:
    ctx.set_gpr(3, static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int8_t>(rt.memory().aot_load8(ctx.gpr[16] + static_cast<std::uint32_t>(0))))));
    { const bool branch_taken = ctx.gpr[3] == 0u;
    // nop
      if (branch_taken) {
          goto L_0898A934;
      }
      goto L_0898A888;
    }
L_0898A888:
    ctx.set_gpr(2, 2245u << 16u);
    ctx.set_gpr(2, rt.memory().aot_load32(ctx.gpr[2] + static_cast<std::uint32_t>(30776)));
    { const bool branch_taken = ctx.gpr[2] != 0u;
    // nop
      if (branch_taken) {
          goto L_0898A8C0;
      }
      goto L_0898A898;
    }
L_0898A898:
    ctx.set_gpr(4, 0u + static_cast<std::uint32_t>(16));
    ctx.set_gpr(31, 0x0898A8A4u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0072_entry, 72u, 788u, 0x089277A0u>(ctx, &aot_mem) && ctx.pc == 0x0898A8A4u) goto L_0898A8A4;
    return;
L_0898A8A4:
    { const bool branch_taken = ctx.gpr[2] == 0u;
    // nop
      if (branch_taken) {
          goto L_0898A8B8;
      }
      goto L_0898A8AC;
    }
L_0898A8AC:
    ctx.set_gpr(4, ctx.gpr[2] + 0u);
    ctx.set_gpr(31, 0x0898A8B8u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0072_entry, 72u, 762u, 0x089275E8u>(ctx, &aot_mem) && ctx.pc == 0x0898A8B8u) goto L_0898A8B8;
    return;
L_0898A8B8:
    ctx.set_gpr(3, 2245u << 16u);
    rt.memory().aot_store32(ctx.gpr[3] + static_cast<std::uint32_t>(30776), ctx.gpr[2]);
    goto L_0898A8C0;
L_0898A8C0:
    ctx.set_gpr(2, 2245u << 16u);
    ctx.set_gpr(4, rt.memory().aot_load32(ctx.gpr[2] + static_cast<std::uint32_t>(30776)));
    ctx.set_gpr(5, ctx.gpr[16] + 0u);
    ctx.set_gpr(31, 0x0898A8D4u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0072_entry, 72u, 784u, 0x08927768u>(ctx, &aot_mem) && ctx.pc == 0x0898A8D4u) goto L_0898A8D4;
    return;
L_0898A8D4:
    ctx.set_gpr(16, ctx.gpr[2] + 0u);
    ctx.set_gpr(5, 0u + 0u);
    ctx.set_gpr(4, rt.memory().aot_load32(ctx.gpr[17] + static_cast<std::uint32_t>(28)));
    { const bool branch_taken = ctx.gpr[4] == 0u;
    // nop
      if (branch_taken) {
          goto L_0898A904;
      }
      goto L_0898A8E8;
    }
L_0898A8E8:
    ctx.set_gpr(3, ctx.gpr[4] & 1u);
    ctx.set_gpr(3, ctx.gpr[3] ^ 1u);
    ctx.set_gpr(3, ctx.gpr[3] < static_cast<std::uint32_t>(1) ? 1u : 0u);
    ctx.set_gpr(3, ctx.gpr[3] ^ 1u);
    { const bool branch_taken = ctx.gpr[3] == 0u;
    // nop
      if (branch_taken) {
          goto L_0898A904;
      }
      goto L_0898A900;
    }
L_0898A900:
    ctx.set_gpr(5, 0u + static_cast<std::uint32_t>(1));
    goto L_0898A904;
L_0898A904:
    { const bool branch_taken = ctx.gpr[5] == 0u;
    // nop
      if (branch_taken) {
          goto L_0898A930;
      }
      goto L_0898A90C;
    }
L_0898A90C:
    ctx.set_gpr(5, ctx.gpr[4] + static_cast<std::uint32_t>(-8));
    ctx.set_gpr(3, rt.memory().aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(-4)));
    ctx.set_gpr(3, ctx.gpr[3] + static_cast<std::uint32_t>(-1));
    rt.memory().aot_store32(ctx.gpr[4] + static_cast<std::uint32_t>(-4), ctx.gpr[3]);
    { const bool branch_taken = ctx.gpr[3] != 0u;
    // nop
      if (branch_taken) {
          goto L_0898A930;
      }
      goto L_0898A924;
    }
L_0898A924:
    ctx.set_gpr(4, rt.memory().aot_load32(ctx.gpr[5] + static_cast<std::uint32_t>(0)));
    ctx.set_gpr(31, 0x0898A930u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0085_entry, 85u, 887u, 0x0895BD2Cu>(ctx, &aot_mem) && ctx.pc == 0x0898A930u) goto L_0898A930;
    return;
L_0898A930:
    rt.memory().aot_store32(ctx.gpr[17] + static_cast<std::uint32_t>(28), ctx.gpr[16]);
    goto L_0898A934;
L_0898A934:
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
L_0898A94C:
    ctx.set_gpr(1, static_cast<std::int32_t>(ctx.gpr[6]) < 480 ? 1u : 0u);
    { const bool branch_taken = ctx.gpr[1] == 0u;
    // nop
      if (branch_taken) {
          goto L_0898A960;
      }
      goto L_0898A958;
    }
L_0898A958:
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_0898A964;
      }
      goto L_0898A960;
    }
L_0898A960:
    ctx.set_gpr(6, 0u + static_cast<std::uint32_t>(480));
    goto L_0898A964;
L_0898A964:
    rt.memory().aot_store32(ctx.gpr[4] + static_cast<std::uint32_t>(8), ctx.gpr[6]);
    ctx.set_gpr(1, static_cast<std::int32_t>(ctx.gpr[7]) < 272 ? 1u : 0u);
    { const bool branch_taken = ctx.gpr[1] == 0u;
    // nop
      if (branch_taken) {
          goto L_0898A97C;
      }
      goto L_0898A974;
    }
L_0898A974:
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_0898A980;
      }
      goto L_0898A97C;
    }
L_0898A97C:
    ctx.set_gpr(7, 0u + static_cast<std::uint32_t>(272));
    goto L_0898A980;
L_0898A980:
    rt.memory().aot_store32(ctx.gpr[4] + static_cast<std::uint32_t>(12), ctx.gpr[7]);
    ctx.set_gpr(2, 0u + static_cast<std::uint32_t>(1));
    jump_target = ctx.gpr[31];
    // nop
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_0898A990:
    ctx.set_gpr(3, 0u + static_cast<std::uint32_t>(1));
    rt.memory().aot_store8(ctx.gpr[5] + static_cast<std::uint32_t>(0), static_cast<std::uint8_t>(ctx.gpr[3]));
    { const bool branch_taken = ctx.gpr[6] == 0u;
    // nop
      if (branch_taken) {
          goto L_0898A9A8;
      }
      goto L_0898A9A0;
    }
L_0898A9A0:
    ctx.set_gpr(3, rt.memory().aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(8)));
    rt.memory().aot_store32(ctx.gpr[6] + static_cast<std::uint32_t>(0), ctx.gpr[3]);
    goto L_0898A9A8;
L_0898A9A8:
    { const bool branch_taken = ctx.gpr[7] == 0u;
    // nop
      if (branch_taken) {
          goto L_0898A9B8;
      }
      goto L_0898A9B0;
    }
L_0898A9B0:
    ctx.set_gpr(3, rt.memory().aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(12)));
    rt.memory().aot_store32(ctx.gpr[7] + static_cast<std::uint32_t>(0), ctx.gpr[3]);
    goto L_0898A9B8;
L_0898A9B8:
    jump_target = ctx.gpr[31];
    // nop
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_0898A9C0:
    ctx.set_gpr(2, 2245u << 16u);
    ctx.set_gpr(2, rt.memory().aot_load32(ctx.gpr[2] + static_cast<std::uint32_t>(32120)));
    jump_target = ctx.gpr[31];
    // nop
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_0898A9D0:
    ctx.set_gpr(3, rt.memory().aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(28)));
    ctx.set_gpr(2, 0u + static_cast<std::uint32_t>(-2));
    ctx.set_gpr(2, ctx.gpr[3] & ctx.gpr[2]);
    jump_target = ctx.gpr[31];
    // nop
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_0898A9E4:
    jump_target = ctx.gpr[31];
    // nop
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_0898A9EC:
    ctx.set_gpr(3, rt.memory().aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(16)));
    rt.memory().aot_store32(ctx.gpr[5] + static_cast<std::uint32_t>(0), ctx.gpr[3]);
    ctx.set_gpr(3, rt.memory().aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(20)));
    rt.memory().aot_store32(ctx.gpr[6] + static_cast<std::uint32_t>(0), ctx.gpr[3]);
    jump_target = ctx.gpr[31];
    // nop
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_0898AA04:
    jump_target = ctx.gpr[31];
    // nop
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_0898AA0C:
    ctx.set_gpr(3, rt.memory().aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(8)));
    rt.memory().aot_store32(ctx.gpr[5] + static_cast<std::uint32_t>(0), ctx.gpr[3]);
    ctx.set_gpr(3, rt.memory().aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(12)));
    rt.memory().aot_store32(ctx.gpr[6] + static_cast<std::uint32_t>(0), ctx.gpr[3]);
    jump_target = ctx.gpr[31];
    // nop
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_0898AA24:
    jump_target = ctx.gpr[31];
    // nop
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_0898AA2C:
    ctx.set_gpr(2, 0u + static_cast<std::uint32_t>(1));
    jump_target = ctx.gpr[31];
    // nop
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_0898AA38:
    ctx.set_gpr(2, rt.memory().aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(24)));
    jump_target = ctx.gpr[31];
    // nop
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_0898AA44:
    ctx.set_gpr(2, 0u + 0u);
    jump_target = ctx.gpr[31];
    // nop
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_0898AA50:
    ctx.set_gpr(3, rt.memory().aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(8)));
    rt.memory().aot_store32(ctx.gpr[5] + static_cast<std::uint32_t>(0), ctx.gpr[3]);
    ctx.set_gpr(3, rt.memory().aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(12)));
    rt.memory().aot_store32(ctx.gpr[6] + static_cast<std::uint32_t>(0), ctx.gpr[3]);
    jump_target = ctx.gpr[31];
    // nop
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_0898AA68:
    ctx.set_gpr(2, 0u + static_cast<std::uint32_t>(1));
    jump_target = ctx.gpr[31];
    // nop
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_0898AA74:
    ctx.set_gpr(2, 0u + 0u);
    jump_target = ctx.gpr[31];
    // nop
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_0898AA80:
    jump_target = ctx.gpr[31];
    // nop
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_0898AA88:
    ctx.set_gpr(2, rt.memory().aot_load8(ctx.gpr[4] + static_cast<std::uint32_t>(32)));
    jump_target = ctx.gpr[31];
    // nop
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_0898AA94:
    ctx.set_gpr(2, 2245u << 16u);
    ctx.set_gpr(2, rt.memory().aot_load32(ctx.gpr[2] + static_cast<std::uint32_t>(32152)));
    jump_target = ctx.gpr[31];
    // nop
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_0898AAA4:
    ctx.set_gpr(2, 0u + static_cast<std::uint32_t>(1));
    jump_target = ctx.gpr[31];
    // nop
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_0898AAB0:
    ctx.set_gpr(2, 2245u << 16u);
    ctx.set_gpr(2, rt.memory().aot_load32(ctx.gpr[2] + static_cast<std::uint32_t>(32156)));
    jump_target = ctx.gpr[31];
    // nop
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_0898AAC0:
    ctx.set_gpr(2, 0u + static_cast<std::uint32_t>(16));
    jump_target = ctx.gpr[31];
    // nop
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_0898AACC:
    jump_target = ctx.gpr[31];
    // nop
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_0898AAD4:
    ctx.set_gpr(2, 0u + static_cast<std::uint32_t>(2));
    jump_target = ctx.gpr[31];
    // nop
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_0898AAE0:
    jump_target = ctx.gpr[31];
    // nop
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_0898AAE8:
    ctx.set_gpr(2, 0u + 0u);
    jump_target = ctx.gpr[31];
    // nop
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_0898AAF4:
    ctx.set_gpr(2, rt.memory().aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(32)));
    jump_target = ctx.gpr[31];
    // nop
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_0898AB00:
    ctx.set_gpr(2, 0u + static_cast<std::uint32_t>(1));
    jump_target = ctx.gpr[31];
    // nop
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_0898AB0C:
    jump_target = ctx.gpr[31];
    // nop
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_0898AB14:
    ctx.set_gpr(2, rt.memory().aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(36)));
    jump_target = ctx.gpr[31];
    // nop
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_0898AB20:
    ctx.set_gpr(2, 2245u << 16u);
    ctx.set_gpr(2, rt.memory().aot_load32(ctx.gpr[2] + static_cast<std::uint32_t>(32016)));
    jump_target = ctx.gpr[31];
    // nop
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_0898AB30:
    ctx.set_gpr(2, 2245u << 16u);
    ctx.set_gpr(2, rt.memory().aot_load32(ctx.gpr[2] + static_cast<std::uint32_t>(32032)));
    jump_target = ctx.gpr[31];
    // nop
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_0898AB40:
    ctx.set_gpr(2, 2245u << 16u);
    ctx.set_gpr(2, rt.memory().aot_load32(ctx.gpr[2] + static_cast<std::uint32_t>(32100)));
    jump_target = ctx.gpr[31];
    // nop
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_0898AB50:
    ctx.set_gpr(2, 2246u << 16u);
    ctx.set_gpr(2, rt.memory().aot_load32(ctx.gpr[2] + static_cast<std::uint32_t>(-20668)));
    jump_target = ctx.gpr[31];
    // nop
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_0898AB60:
    ctx.set_gpr(2, 2245u << 16u);
    ctx.set_gpr(2, rt.memory().aot_load32(ctx.gpr[2] + static_cast<std::uint32_t>(32028)));
    jump_target = ctx.gpr[31];
    // nop
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_0898AB70:
    ctx.set_gpr(2, 2245u << 16u);
    ctx.set_gpr(2, rt.memory().aot_load32(ctx.gpr[2] + static_cast<std::uint32_t>(32012)));
    jump_target = ctx.gpr[31];
    // nop
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_0898AB80:
    ctx.set_gpr(2, 2245u << 16u);
    ctx.set_gpr(2, rt.memory().aot_load32(ctx.gpr[2] + static_cast<std::uint32_t>(32024)));
    jump_target = ctx.gpr[31];
    // nop
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_0898AB90:
    ctx.set_gpr(2, 2245u << 16u);
    ctx.set_gpr(2, rt.memory().aot_load32(ctx.gpr[2] + static_cast<std::uint32_t>(32108)));
    jump_target = ctx.gpr[31];
    // nop
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_0898ABA0:
    ctx.set_gpr(29, ctx.gpr[29] + static_cast<std::uint32_t>(-16));
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(12), ctx.gpr[31]);
    ctx.set_gpr(5, rt.memory().aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(8)));
    ctx.set_gpr(3, rt.memory().aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(12)));
    ctx.set_gpr(1, static_cast<std::int32_t>(ctx.gpr[5]) < static_cast<std::int32_t>(ctx.gpr[3]) ? 1u : 0u);
    { const bool branch_taken = ctx.gpr[1] == 0u;
    // nop
      if (branch_taken) {
          goto L_0898ABC8;
      }
      goto L_0898ABBC;
    }
L_0898ABBC:
    ctx.set_gpr(6, 0u + static_cast<std::uint32_t>(4));
    ctx.set_gpr(31, 0x0898ABC8u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0066_entry, 66u, 785u, 0x0890FA2Cu>(ctx, &aot_mem) && ctx.pc == 0x0898ABC8u) goto L_0898ABC8;
    return;
L_0898ABC8:
    ctx.set_gpr(31, rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(12)));
    ctx.set_gpr(29, ctx.gpr[29] + static_cast<std::uint32_t>(16));
    jump_target = ctx.gpr[31];
    // nop
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_0898ABD8:
    ctx.set_gpr(29, ctx.gpr[29] + static_cast<std::uint32_t>(-16));
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(12), ctx.gpr[31]);
    ctx.set_gpr(3, rt.memory().aot_load8(ctx.gpr[28] + static_cast<std::uint32_t>(-32182)));
    { const bool branch_taken = ctx.gpr[3] != 0u;
    // nop
      if (branch_taken) {
          goto L_0898AC3C;
      }
      goto L_0898ABEC;
    }
L_0898ABEC:
    ctx.set_gpr(2, 0u + static_cast<std::uint32_t>(1));
    rt.memory().aot_store8(ctx.gpr[28] + static_cast<std::uint32_t>(-32182), static_cast<std::uint8_t>(ctx.gpr[2]));
    ctx.set_gpr(31, 0x0898ABFCu);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0101_entry, 101u, 270u, 0x08999858u>(ctx, &aot_mem) && ctx.pc == 0x0898ABFCu) goto L_0898ABFC;
    return;
L_0898ABFC:
    ctx.set_gpr(31, 0x0898AC04u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0101_entry, 101u, 108u, 0x089989BCu>(ctx, &aot_mem) && ctx.pc == 0x0898AC04u) goto L_0898AC04;
    return;
L_0898AC04:
    ctx.set_gpr(31, 0x0898AC0Cu);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0101_entry, 101u, 94u, 0x0899887Cu>(ctx, &aot_mem) && ctx.pc == 0x0898AC0Cu) goto L_0898AC0C;
    return;
L_0898AC0C:
    ctx.set_gpr(31, 0x0898AC14u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0101_entry, 101u, 82u, 0x0899876Cu>(ctx, &aot_mem) && ctx.pc == 0x0898AC14u) goto L_0898AC14;
    return;
L_0898AC14:
    ctx.set_gpr(31, 0x0898AC1Cu);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0099_entry, 99u, 355u, 0x08991E68u>(ctx, &aot_mem) && ctx.pc == 0x0898AC1Cu) goto L_0898AC1C;
    return;
L_0898AC1C:
    ctx.set_gpr(31, 0x0898AC24u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0099_entry, 99u, 329u, 0x08991C14u>(ctx, &aot_mem) && ctx.pc == 0x0898AC24u) goto L_0898AC24;
    return;
L_0898AC24:
    ctx.set_gpr(31, 0x0898AC2Cu);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0099_entry, 99u, 46u, 0x0899035Cu>(ctx, &aot_mem) && ctx.pc == 0x0898AC2Cu) goto L_0898AC2C;
    return;
L_0898AC2C:
    ctx.set_gpr(31, 0x0898AC34u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0098_entry, 98u, 658u, 0x0898FA30u>(ctx, &aot_mem) && ctx.pc == 0x0898AC34u) goto L_0898AC34;
    return;
L_0898AC34:
    ctx.set_gpr(31, 0x0898AC3Cu);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0098_entry, 98u, 465u, 0x0898E938u>(ctx, &aot_mem) && ctx.pc == 0x0898AC3Cu) goto L_0898AC3C;
    return;
L_0898AC3C:
    ctx.set_gpr(31, rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(12)));
    ctx.set_gpr(29, ctx.gpr[29] + static_cast<std::uint32_t>(16));
    jump_target = ctx.gpr[31];
    // nop
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_0898AC4C:
    ctx.set_gpr(29, ctx.gpr[29] + static_cast<std::uint32_t>(-16));
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(12), ctx.gpr[31]);
    ctx.set_gpr(31, 0x0898AC5Cu);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0102_entry, 102u, 474u, 0x0899E9DCu>(ctx, &aot_mem) && ctx.pc == 0x0898AC5Cu) goto L_0898AC5C;
    return;
L_0898AC5C:
    ctx.set_gpr(31, 0x0898AC64u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0102_entry, 102u, 454u, 0x0899E7B4u>(ctx, &aot_mem) && ctx.pc == 0x0898AC64u) goto L_0898AC64;
    return;
L_0898AC64:
    ctx.set_gpr(31, 0x0898AC6Cu);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0102_entry, 102u, 432u, 0x0899E57Cu>(ctx, &aot_mem) && ctx.pc == 0x0898AC6Cu) goto L_0898AC6C;
    return;
L_0898AC6C:
    ctx.set_gpr(31, 0x0898AC74u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0102_entry, 102u, 412u, 0x0899E364u>(ctx, &aot_mem) && ctx.pc == 0x0898AC74u) goto L_0898AC74;
    return;
L_0898AC74:
    ctx.set_gpr(31, 0x0898AC7Cu);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0102_entry, 102u, 397u, 0x0899E1E4u>(ctx, &aot_mem) && ctx.pc == 0x0898AC7Cu) goto L_0898AC7C;
    return;
L_0898AC7C:
    ctx.set_gpr(31, 0x0898AC84u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0102_entry, 102u, 368u, 0x0899DF78u>(ctx, &aot_mem) && ctx.pc == 0x0898AC84u) goto L_0898AC84;
    return;
L_0898AC84:
    ctx.set_gpr(31, 0x0898AC8Cu);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0102_entry, 102u, 354u, 0x0899DE34u>(ctx, &aot_mem) && ctx.pc == 0x0898AC8Cu) goto L_0898AC8C;
    return;
L_0898AC8C:
    ctx.set_gpr(31, 0x0898AC94u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0102_entry, 102u, 341u, 0x0899DD00u>(ctx, &aot_mem) && ctx.pc == 0x0898AC94u) goto L_0898AC94;
    return;
L_0898AC94:
    ctx.set_gpr(31, 0x0898AC9Cu);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0102_entry, 102u, 317u, 0x0899DA8Cu>(ctx, &aot_mem) && ctx.pc == 0x0898AC9Cu) goto L_0898AC9C;
    return;
L_0898AC9C:
    ctx.set_gpr(31, 0x0898ACA4u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0102_entry, 102u, 289u, 0x0899D7D0u>(ctx, &aot_mem) && ctx.pc == 0x0898ACA4u) goto L_0898ACA4;
    return;
L_0898ACA4:
    ctx.set_gpr(31, 0x0898ACACu);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0102_entry, 102u, 266u, 0x0899D5B8u>(ctx, &aot_mem) && ctx.pc == 0x0898ACACu) goto L_0898ACAC;
    return;
L_0898ACAC:
    ctx.set_gpr(31, 0x0898ACB4u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0102_entry, 102u, 193u, 0x0899D088u>(ctx, &aot_mem) && ctx.pc == 0x0898ACB4u) goto L_0898ACB4;
    return;
L_0898ACB4:
    ctx.set_gpr(31, 0x0898ACBCu);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0102_entry, 102u, 150u, 0x0899CCB4u>(ctx, &aot_mem) && ctx.pc == 0x0898ACBCu) goto L_0898ACBC;
    return;
L_0898ACBC:
    ctx.set_gpr(31, 0x0898ACC4u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0102_entry, 102u, 132u, 0x0899CAF0u>(ctx, &aot_mem) && ctx.pc == 0x0898ACC4u) goto L_0898ACC4;
    return;
L_0898ACC4:
    ctx.set_gpr(31, 0x0898ACCCu);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0101_entry, 101u, 745u, 0x0899BCA0u>(ctx, &aot_mem) && ctx.pc == 0x0898ACCCu) goto L_0898ACCC;
    return;
L_0898ACCC:
    ctx.set_gpr(31, 0x0898ACD4u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0101_entry, 101u, 625u, 0x0899B4E8u>(ctx, &aot_mem) && ctx.pc == 0x0898ACD4u) goto L_0898ACD4;
    return;
L_0898ACD4:
    ctx.set_gpr(31, 0x0898ACDCu);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0101_entry, 101u, 457u, 0x0899AA40u>(ctx, &aot_mem) && ctx.pc == 0x0898ACDCu) goto L_0898ACDC;
    return;
L_0898ACDC:
    ctx.set_gpr(31, 0x0898ACE4u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0101_entry, 101u, 433u, 0x0899A7D0u>(ctx, &aot_mem) && ctx.pc == 0x0898ACE4u) goto L_0898ACE4;
    return;
L_0898ACE4:
    ctx.set_gpr(31, 0x0898ACECu);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0101_entry, 101u, 417u, 0x0899A664u>(ctx, &aot_mem) && ctx.pc == 0x0898ACECu) goto L_0898ACEC;
    return;
L_0898ACEC:
    ctx.set_gpr(31, 0x0898ACF4u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0101_entry, 101u, 394u, 0x0899A420u>(ctx, &aot_mem) && ctx.pc == 0x0898ACF4u) goto L_0898ACF4;
    return;
L_0898ACF4:
    ctx.set_gpr(31, 0x0898ACFCu);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0101_entry, 101u, 362u, 0x0899A144u>(ctx, &aot_mem) && ctx.pc == 0x0898ACFCu) goto L_0898ACFC;
    return;
L_0898ACFC:
    ctx.set_gpr(31, 0x0898AD04u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0101_entry, 101u, 336u, 0x08999EC0u>(ctx, &aot_mem) && ctx.pc == 0x0898AD04u) goto L_0898AD04;
    return;
L_0898AD04:
    ctx.set_gpr(31, 0x0898AD0Cu);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0101_entry, 101u, 289u, 0x08999A4Cu>(ctx, &aot_mem) && ctx.pc == 0x0898AD0Cu) goto L_0898AD0C;
    return;
L_0898AD0C:
    ctx.set_gpr(31, 0x0898AD14u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0101_entry, 101u, 270u, 0x08999858u>(ctx, &aot_mem) && ctx.pc == 0x0898AD14u) goto L_0898AD14;
    return;
L_0898AD14:
    ctx.set_gpr(31, 0x0898AD1Cu);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0101_entry, 101u, 253u, 0x08999704u>(ctx, &aot_mem) && ctx.pc == 0x0898AD1Cu) goto L_0898AD1C;
    return;
L_0898AD1C:
    ctx.set_gpr(31, 0x0898AD24u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0101_entry, 101u, 219u, 0x08999424u>(ctx, &aot_mem) && ctx.pc == 0x0898AD24u) goto L_0898AD24;
    return;
L_0898AD24:
    ctx.set_gpr(31, 0x0898AD2Cu);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0101_entry, 101u, 196u, 0x08999240u>(ctx, &aot_mem) && ctx.pc == 0x0898AD2Cu) goto L_0898AD2C;
    return;
L_0898AD2C:
    ctx.set_gpr(31, 0x0898AD34u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0101_entry, 101u, 175u, 0x08999034u>(ctx, &aot_mem) && ctx.pc == 0x0898AD34u) goto L_0898AD34;
    return;
L_0898AD34:
    ctx.set_gpr(31, 0x0898AD3Cu);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0101_entry, 101u, 156u, 0x08998E70u>(ctx, &aot_mem) && ctx.pc == 0x0898AD3Cu) goto L_0898AD3C;
    return;
L_0898AD3C:
    ctx.set_gpr(31, 0x0898AD44u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0101_entry, 101u, 132u, 0x08998C24u>(ctx, &aot_mem) && ctx.pc == 0x0898AD44u) goto L_0898AD44;
    return;
L_0898AD44:
    ctx.set_gpr(31, 0x0898AD4Cu);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0101_entry, 101u, 108u, 0x089989BCu>(ctx, &aot_mem) && ctx.pc == 0x0898AD4Cu) goto L_0898AD4C;
    return;
L_0898AD4C:
    ctx.set_gpr(31, 0x0898AD54u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0101_entry, 101u, 94u, 0x0899887Cu>(ctx, &aot_mem) && ctx.pc == 0x0898AD54u) goto L_0898AD54;
    return;
L_0898AD54:
    ctx.set_gpr(31, 0x0898AD5Cu);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0101_entry, 101u, 82u, 0x0899876Cu>(ctx, &aot_mem) && ctx.pc == 0x0898AD5Cu) goto L_0898AD5C;
    return;
L_0898AD5C:
    ctx.set_gpr(31, 0x0898AD64u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0101_entry, 101u, 62u, 0x08998584u>(ctx, &aot_mem) && ctx.pc == 0x0898AD64u) goto L_0898AD64;
    return;
L_0898AD64:
    ctx.set_gpr(31, 0x0898AD6Cu);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0101_entry, 101u, 46u, 0x08998418u>(ctx, &aot_mem) && ctx.pc == 0x0898AD6Cu) goto L_0898AD6C;
    return;
L_0898AD6C:
    ctx.set_gpr(31, 0x0898AD74u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0101_entry, 101u, 32u, 0x089982D4u>(ctx, &aot_mem) && ctx.pc == 0x0898AD74u) goto L_0898AD74;
    return;
L_0898AD74:
    ctx.set_gpr(31, 0x0898AD7Cu);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0101_entry, 101u, 7u, 0x08998070u>(ctx, &aot_mem) && ctx.pc == 0x0898AD7Cu) goto L_0898AD7C;
    return;
L_0898AD7C:
    ctx.set_gpr(31, 0x0898AD84u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0100_entry, 100u, 643u, 0x08997920u>(ctx, &aot_mem) && ctx.pc == 0x0898AD84u) goto L_0898AD84;
    return;
L_0898AD84:
    ctx.set_gpr(31, 0x0898AD8Cu);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0100_entry, 100u, 627u, 0x08997790u>(ctx, &aot_mem) && ctx.pc == 0x0898AD8Cu) goto L_0898AD8C;
    return;
L_0898AD8C:
    ctx.set_gpr(31, 0x0898AD94u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0100_entry, 100u, 598u, 0x089974FCu>(ctx, &aot_mem) && ctx.pc == 0x0898AD94u) goto L_0898AD94;
    return;
L_0898AD94:
    ctx.set_gpr(31, 0x0898AD9Cu);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0100_entry, 100u, 578u, 0x08997324u>(ctx, &aot_mem) && ctx.pc == 0x0898AD9Cu) goto L_0898AD9C;
    return;
L_0898AD9C:
    ctx.set_gpr(31, 0x0898ADA4u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0100_entry, 100u, 549u, 0x08997098u>(ctx, &aot_mem) && ctx.pc == 0x0898ADA4u) goto L_0898ADA4;
    return;
L_0898ADA4:
    ctx.set_gpr(31, 0x0898ADACu);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0100_entry, 100u, 527u, 0x08996EC0u>(ctx, &aot_mem) && ctx.pc == 0x0898ADACu) goto L_0898ADAC;
    return;
L_0898ADAC:
    ctx.set_gpr(31, 0x0898ADB4u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0100_entry, 100u, 516u, 0x08996DB8u>(ctx, &aot_mem) && ctx.pc == 0x0898ADB4u) goto L_0898ADB4;
    return;
L_0898ADB4:
    ctx.set_gpr(31, 0x0898ADBCu);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0100_entry, 100u, 478u, 0x08996A94u>(ctx, &aot_mem) && ctx.pc == 0x0898ADBCu) goto L_0898ADBC;
    return;
L_0898ADBC:
    ctx.set_gpr(31, 0x0898ADC4u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0100_entry, 100u, 442u, 0x0899678Cu>(ctx, &aot_mem) && ctx.pc == 0x0898ADC4u) goto L_0898ADC4;
    return;
L_0898ADC4:
    ctx.set_gpr(31, 0x0898ADCCu);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0100_entry, 100u, 422u, 0x089965E8u>(ctx, &aot_mem) && ctx.pc == 0x0898ADCCu) goto L_0898ADCC;
    return;
L_0898ADCC:
    ctx.set_gpr(31, 0x0898ADD4u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0100_entry, 100u, 395u, 0x08996380u>(ctx, &aot_mem) && ctx.pc == 0x0898ADD4u) goto L_0898ADD4;
    return;
L_0898ADD4:
    ctx.set_gpr(31, 0x0898ADDCu);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0100_entry, 100u, 378u, 0x089961E8u>(ctx, &aot_mem) && ctx.pc == 0x0898ADDCu) goto L_0898ADDC;
    return;
L_0898ADDC:
    ctx.set_gpr(31, 0x0898ADE4u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0100_entry, 100u, 354u, 0x08995FC4u>(ctx, &aot_mem) && ctx.pc == 0x0898ADE4u) goto L_0898ADE4;
    return;
L_0898ADE4:
    ctx.set_gpr(31, 0x0898ADECu);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0100_entry, 100u, 339u, 0x08995E50u>(ctx, &aot_mem) && ctx.pc == 0x0898ADECu) goto L_0898ADEC;
    return;
L_0898ADEC:
    ctx.set_gpr(31, 0x0898ADF4u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0100_entry, 100u, 315u, 0x08995C68u>(ctx, &aot_mem) && ctx.pc == 0x0898ADF4u) goto L_0898ADF4;
    return;
L_0898ADF4:
    ctx.set_gpr(31, 0x0898ADFCu);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0100_entry, 100u, 270u, 0x08995874u>(ctx, &aot_mem) && ctx.pc == 0x0898ADFCu) goto L_0898ADFC;
    return;
L_0898ADFC:
    ctx.set_gpr(31, 0x0898AE04u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0100_entry, 100u, 250u, 0x089956DCu>(ctx, &aot_mem) && ctx.pc == 0x0898AE04u) goto L_0898AE04;
    return;
L_0898AE04:
    ctx.set_gpr(31, 0x0898AE0Cu);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0100_entry, 100u, 233u, 0x08995550u>(ctx, &aot_mem) && ctx.pc == 0x0898AE0Cu) goto L_0898AE0C;
    return;
L_0898AE0C:
    ctx.set_gpr(31, 0x0898AE14u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0100_entry, 100u, 216u, 0x089953C4u>(ctx, &aot_mem) && ctx.pc == 0x0898AE14u) goto L_0898AE14;
    return;
L_0898AE14:
    ctx.set_gpr(31, 0x0898AE1Cu);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0100_entry, 100u, 199u, 0x08995238u>(ctx, &aot_mem) && ctx.pc == 0x0898AE1Cu) goto L_0898AE1C;
    return;
L_0898AE1C:
    ctx.set_gpr(31, 0x0898AE24u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0100_entry, 100u, 182u, 0x089950ACu>(ctx, &aot_mem) && ctx.pc == 0x0898AE24u) goto L_0898AE24;
    return;
L_0898AE24:
    ctx.set_gpr(31, 0x0898AE2Cu);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0100_entry, 100u, 165u, 0x08994F20u>(ctx, &aot_mem) && ctx.pc == 0x0898AE2Cu) goto L_0898AE2C;
    return;
L_0898AE2C:
    ctx.set_gpr(31, 0x0898AE34u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0100_entry, 100u, 148u, 0x08994D94u>(ctx, &aot_mem) && ctx.pc == 0x0898AE34u) goto L_0898AE34;
    return;
L_0898AE34:
    ctx.set_gpr(31, 0x0898AE3Cu);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0100_entry, 100u, 131u, 0x08994C08u>(ctx, &aot_mem) && ctx.pc == 0x0898AE3Cu) goto L_0898AE3C;
    return;
L_0898AE3C:
    ctx.set_gpr(31, 0x0898AE44u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0100_entry, 100u, 114u, 0x08994A7Cu>(ctx, &aot_mem) && ctx.pc == 0x0898AE44u) goto L_0898AE44;
    return;
L_0898AE44:
    ctx.set_gpr(31, 0x0898AE4Cu);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0100_entry, 100u, 97u, 0x089948F0u>(ctx, &aot_mem) && ctx.pc == 0x0898AE4Cu) goto L_0898AE4C;
    return;
L_0898AE4C:
    ctx.set_gpr(31, 0x0898AE54u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0100_entry, 100u, 81u, 0x08994768u>(ctx, &aot_mem) && ctx.pc == 0x0898AE54u) goto L_0898AE54;
    return;
L_0898AE54:
    ctx.set_gpr(31, 0x0898AE5Cu);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0100_entry, 100u, 66u, 0x089945F0u>(ctx, &aot_mem) && ctx.pc == 0x0898AE5Cu) goto L_0898AE5C;
    return;
L_0898AE5C:
    ctx.set_gpr(31, 0x0898AE64u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0100_entry, 100u, 49u, 0x08994464u>(ctx, &aot_mem) && ctx.pc == 0x0898AE64u) goto L_0898AE64;
    return;
L_0898AE64:
    ctx.set_gpr(31, 0x0898AE6Cu);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0100_entry, 100u, 32u, 0x089942D8u>(ctx, &aot_mem) && ctx.pc == 0x0898AE6Cu) goto L_0898AE6C;
    return;
L_0898AE6C:
    ctx.set_gpr(31, 0x0898AE74u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0100_entry, 100u, 15u, 0x0899414Cu>(ctx, &aot_mem) && ctx.pc == 0x0898AE74u) goto L_0898AE74;
    return;
L_0898AE74:
    ctx.set_gpr(31, 0x0898AE7Cu);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0099_entry, 99u, 731u, 0x08993FC0u>(ctx, &aot_mem) && ctx.pc == 0x0898AE7Cu) goto L_0898AE7C;
    return;
L_0898AE7C:
    ctx.set_gpr(31, 0x0898AE84u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0099_entry, 99u, 714u, 0x08993E34u>(ctx, &aot_mem) && ctx.pc == 0x0898AE84u) goto L_0898AE84;
    return;
L_0898AE84:
    ctx.set_gpr(31, 0x0898AE8Cu);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0099_entry, 99u, 697u, 0x08993CA8u>(ctx, &aot_mem) && ctx.pc == 0x0898AE8Cu) goto L_0898AE8C;
    return;
L_0898AE8C:
    ctx.set_gpr(31, 0x0898AE94u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0099_entry, 99u, 680u, 0x08993B1Cu>(ctx, &aot_mem) && ctx.pc == 0x0898AE94u) goto L_0898AE94;
    return;
L_0898AE94:
    ctx.set_gpr(31, 0x0898AE9Cu);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0099_entry, 99u, 663u, 0x08993990u>(ctx, &aot_mem) && ctx.pc == 0x0898AE9Cu) goto L_0898AE9C;
    return;
L_0898AE9C:
    ctx.set_gpr(31, 0x0898AEA4u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0099_entry, 99u, 645u, 0x089937F4u>(ctx, &aot_mem) && ctx.pc == 0x0898AEA4u) goto L_0898AEA4;
    return;
L_0898AEA4:
    ctx.set_gpr(31, 0x0898AEACu);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0099_entry, 99u, 615u, 0x089935A0u>(ctx, &aot_mem) && ctx.pc == 0x0898AEACu) goto L_0898AEAC;
    return;
L_0898AEAC:
    ctx.set_gpr(31, 0x0898AEB4u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0099_entry, 99u, 585u, 0x089932F8u>(ctx, &aot_mem) && ctx.pc == 0x0898AEB4u) goto L_0898AEB4;
    return;
L_0898AEB4:
    ctx.set_gpr(31, 0x0898AEBCu);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0099_entry, 99u, 568u, 0x08993180u>(ctx, &aot_mem) && ctx.pc == 0x0898AEBCu) goto L_0898AEBC;
    return;
L_0898AEBC:
    ctx.set_gpr(31, 0x0898AEC4u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0099_entry, 99u, 533u, 0x08992E7Cu>(ctx, &aot_mem) && ctx.pc == 0x0898AEC4u) goto L_0898AEC4;
    return;
L_0898AEC4:
    ctx.set_gpr(31, 0x0898AECCu);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0099_entry, 99u, 505u, 0x08992BD0u>(ctx, &aot_mem) && ctx.pc == 0x0898AECCu) goto L_0898AECC;
    return;
L_0898AECC:
    ctx.set_gpr(31, 0x0898AED4u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0099_entry, 99u, 474u, 0x08992900u>(ctx, &aot_mem) && ctx.pc == 0x0898AED4u) goto L_0898AED4;
    return;
L_0898AED4:
    ctx.set_gpr(31, 0x0898AEDCu);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0099_entry, 99u, 453u, 0x0899272Cu>(ctx, &aot_mem) && ctx.pc == 0x0898AEDCu) goto L_0898AEDC;
    return;
L_0898AEDC:
    ctx.set_gpr(31, 0x0898AEE4u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0099_entry, 99u, 442u, 0x08992630u>(ctx, &aot_mem) && ctx.pc == 0x0898AEE4u) goto L_0898AEE4;
    return;
L_0898AEE4:
    ctx.set_gpr(31, 0x0898AEECu);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0099_entry, 99u, 418u, 0x08992448u>(ctx, &aot_mem) && ctx.pc == 0x0898AEECu) goto L_0898AEEC;
    return;
L_0898AEEC:
    ctx.set_gpr(31, 0x0898AEF4u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0099_entry, 99u, 404u, 0x0899230Cu>(ctx, &aot_mem) && ctx.pc == 0x0898AEF4u) goto L_0898AEF4;
    return;
L_0898AEF4:
    ctx.set_gpr(31, 0x0898AEFCu);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0099_entry, 99u, 381u, 0x089920A8u>(ctx, &aot_mem) && ctx.pc == 0x0898AEFCu) goto L_0898AEFC;
    return;
L_0898AEFC:
    ctx.set_gpr(31, 0x0898AF04u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0099_entry, 99u, 355u, 0x08991E68u>(ctx, &aot_mem) && ctx.pc == 0x0898AF04u) goto L_0898AF04;
    return;
L_0898AF04:
    ctx.set_gpr(31, 0x0898AF0Cu);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0099_entry, 99u, 329u, 0x08991C14u>(ctx, &aot_mem) && ctx.pc == 0x0898AF0Cu) goto L_0898AF0C;
    return;
L_0898AF0C:
    ctx.set_gpr(31, 0x0898AF14u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0099_entry, 99u, 316u, 0x08991AECu>(ctx, &aot_mem) && ctx.pc == 0x0898AF14u) goto L_0898AF14;
    return;
L_0898AF14:
    ctx.set_gpr(31, 0x0898AF1Cu);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0099_entry, 99u, 300u, 0x08991980u>(ctx, &aot_mem) && ctx.pc == 0x0898AF1Cu) goto L_0898AF1C;
    return;
L_0898AF1C:
    ctx.set_gpr(31, 0x0898AF24u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0099_entry, 99u, 258u, 0x08991548u>(ctx, &aot_mem) && ctx.pc == 0x0898AF24u) goto L_0898AF24;
    return;
L_0898AF24:
    ctx.set_gpr(31, 0x0898AF2Cu);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0099_entry, 99u, 215u, 0x089911B4u>(ctx, &aot_mem) && ctx.pc == 0x0898AF2Cu) goto L_0898AF2C;
    return;
L_0898AF2C:
    ctx.set_gpr(31, 0x0898AF34u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0099_entry, 99u, 174u, 0x08990E70u>(ctx, &aot_mem) && ctx.pc == 0x0898AF34u) goto L_0898AF34;
    return;
L_0898AF34:
    ctx.set_gpr(31, 0x0898AF3Cu);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0099_entry, 99u, 117u, 0x089909CCu>(ctx, &aot_mem) && ctx.pc == 0x0898AF3Cu) goto L_0898AF3C;
    return;
L_0898AF3C:
    ctx.set_gpr(31, 0x0898AF44u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0099_entry, 99u, 92u, 0x08990788u>(ctx, &aot_mem) && ctx.pc == 0x0898AF44u) goto L_0898AF44;
    return;
L_0898AF44:
    ctx.set_gpr(31, 0x0898AF4Cu);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0099_entry, 99u, 46u, 0x0899035Cu>(ctx, &aot_mem) && ctx.pc == 0x0898AF4Cu) goto L_0898AF4C;
    return;
L_0898AF4C:
    ctx.set_gpr(31, 0x0898AF54u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0098_entry, 98u, 718u, 0x0898FF84u>(ctx, &aot_mem) && ctx.pc == 0x0898AF54u) goto L_0898AF54;
    return;
L_0898AF54:
    ctx.set_gpr(31, 0x0898AF5Cu);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0098_entry, 98u, 688u, 0x0898FCDCu>(ctx, &aot_mem) && ctx.pc == 0x0898AF5Cu) goto L_0898AF5C;
    return;
L_0898AF5C:
    ctx.set_gpr(31, 0x0898AF64u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0098_entry, 98u, 672u, 0x0898FB70u>(ctx, &aot_mem) && ctx.pc == 0x0898AF64u) goto L_0898AF64;
    return;
L_0898AF64:
    ctx.set_gpr(31, 0x0898AF6Cu);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0098_entry, 98u, 658u, 0x0898FA30u>(ctx, &aot_mem) && ctx.pc == 0x0898AF6Cu) goto L_0898AF6C;
    return;
L_0898AF6C:
    ctx.set_gpr(31, 0x0898AF74u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0098_entry, 98u, 641u, 0x0898F8D0u>(ctx, &aot_mem) && ctx.pc == 0x0898AF74u) goto L_0898AF74;
    return;
L_0898AF74:
    ctx.set_gpr(31, 0x0898AF7Cu);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0098_entry, 98u, 611u, 0x0898F5FCu>(ctx, &aot_mem) && ctx.pc == 0x0898AF7Cu) goto L_0898AF7C;
    return;
L_0898AF7C:
    ctx.set_gpr(31, 0x0898AF84u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0098_entry, 98u, 580u, 0x0898F398u>(ctx, &aot_mem) && ctx.pc == 0x0898AF84u) goto L_0898AF84;
    return;
L_0898AF84:
    ctx.set_gpr(31, 0x0898AF8Cu);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0098_entry, 98u, 558u, 0x0898F18Cu>(ctx, &aot_mem) && ctx.pc == 0x0898AF8Cu) goto L_0898AF8C;
    return;
L_0898AF8C:
    ctx.set_gpr(31, 0x0898AF94u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0098_entry, 98u, 547u, 0x0898F08Cu>(ctx, &aot_mem) && ctx.pc == 0x0898AF94u) goto L_0898AF94;
    return;
L_0898AF94:
    ctx.set_gpr(31, 0x0898AF9Cu);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0098_entry, 98u, 528u, 0x0898EED0u>(ctx, &aot_mem) && ctx.pc == 0x0898AF9Cu) goto L_0898AF9C;
    return;
L_0898AF9C:
    ctx.set_gpr(31, 0x0898AFA4u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0098_entry, 98u, 509u, 0x0898ED18u>(ctx, &aot_mem) && ctx.pc == 0x0898AFA4u) goto L_0898AFA4;
    return;
L_0898AFA4:
    ctx.set_gpr(31, 0x0898AFACu);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0098_entry, 98u, 486u, 0x0898EADCu>(ctx, &aot_mem) && ctx.pc == 0x0898AFACu) goto L_0898AFAC;
    return;
L_0898AFAC:
    ctx.set_gpr(31, 0x0898AFB4u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0098_entry, 98u, 465u, 0x0898E938u>(ctx, &aot_mem) && ctx.pc == 0x0898AFB4u) goto L_0898AFB4;
    return;
L_0898AFB4:
    ctx.set_gpr(31, 0x0898AFBCu);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0098_entry, 98u, 454u, 0x0898E830u>(ctx, &aot_mem) && ctx.pc == 0x0898AFBCu) goto L_0898AFBC;
    return;
L_0898AFBC:
    ctx.set_gpr(31, 0x0898AFC4u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0098_entry, 98u, 434u, 0x0898E628u>(ctx, &aot_mem) && ctx.pc == 0x0898AFC4u) goto L_0898AFC4;
    return;
L_0898AFC4:
    ctx.set_gpr(31, 0x0898AFCCu);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0098_entry, 98u, 395u, 0x0898E29Cu>(ctx, &aot_mem) && ctx.pc == 0x0898AFCCu) goto L_0898AFCC;
    return;
L_0898AFCC:
    ctx.set_gpr(31, 0x0898AFD4u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0098_entry, 98u, 381u, 0x0898E154u>(ctx, &aot_mem) && ctx.pc == 0x0898AFD4u) goto L_0898AFD4;
    return;
L_0898AFD4:
    ctx.set_gpr(31, 0x0898AFDCu);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0098_entry, 98u, 354u, 0x0898DEB4u>(ctx, &aot_mem) && ctx.pc == 0x0898AFDCu) goto L_0898AFDC;
    return;
L_0898AFDC:
    ctx.set_gpr(31, 0x0898AFE4u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0098_entry, 98u, 300u, 0x0898D9F4u>(ctx, &aot_mem) && ctx.pc == 0x0898AFE4u) goto L_0898AFE4;
    return;
L_0898AFE4:
    ctx.set_gpr(31, 0x0898AFECu);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0098_entry, 98u, 274u, 0x0898D7C4u>(ctx, &aot_mem) && ctx.pc == 0x0898AFECu) goto L_0898AFEC;
    return;
L_0898AFEC:
    ctx.set_gpr(31, 0x0898AFF4u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0098_entry, 98u, 229u, 0x0898D3D4u>(ctx, &aot_mem) && ctx.pc == 0x0898AFF4u) goto L_0898AFF4;
    return;
L_0898AFF4:
    ctx.set_gpr(31, 0x0898AFFCu);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0098_entry, 98u, 206u, 0x0898D1CCu>(ctx, &aot_mem) && ctx.pc == 0x0898AFFCu) goto L_0898AFFC;
    return;
L_0898AFFC:
    ctx.set_gpr(31, 0x0898B004u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0098_entry, 98u, 190u, 0x0898D060u>(ctx, &aot_mem) && ctx.pc == 0x0898B004u) goto L_0898B004;
    return;
L_0898B004:
    ctx.set_gpr(31, 0x0898B00Cu);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0098_entry, 98u, 170u, 0x0898CE64u>(ctx, &aot_mem) && ctx.pc == 0x0898B00Cu) goto L_0898B00C;
    return;
L_0898B00C:
    ctx.set_gpr(31, 0x0898B014u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0098_entry, 98u, 150u, 0x0898CC8Cu>(ctx, &aot_mem) && ctx.pc == 0x0898B014u) goto L_0898B014;
    return;
L_0898B014:
    ctx.set_gpr(31, 0x0898B01Cu);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0098_entry, 98u, 64u, 0x0898C5A0u>(ctx, &aot_mem) && ctx.pc == 0x0898B01Cu) goto L_0898B01C;
    return;
L_0898B01C:
    ctx.set_gpr(31, 0x0898B024u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0098_entry, 98u, 36u, 0x0898C328u>(ctx, &aot_mem) && ctx.pc == 0x0898B024u) goto L_0898B024;
    return;
L_0898B024:
    ctx.set_gpr(31, 0x0898B02Cu);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0098_entry, 98u, 16u, 0x0898C128u>(ctx, &aot_mem) && ctx.pc == 0x0898B02Cu) goto L_0898B02C;
    return;
L_0898B02C:
    ctx.set_gpr(31, 0x0898B034u);
    // nop
    goto L_0898BF4C;
L_0898B034:
    ctx.set_gpr(31, 0x0898B03Cu);
    // nop
    goto L_0898BDE0;
L_0898B03C:
    ctx.set_gpr(31, 0x0898B044u);
    // nop
    goto L_0898BC64;
L_0898B044:
    ctx.set_gpr(31, rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(12)));
    ctx.set_gpr(29, ctx.gpr[29] + static_cast<std::uint32_t>(16));
    jump_target = ctx.gpr[31];
    // nop
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_0898B054:
    ctx.set_gpr(29, ctx.gpr[29] + static_cast<std::uint32_t>(-16));
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(12), ctx.gpr[31]);
    ctx.set_gpr(2, 2245u << 16u);
    ctx.set_gpr(2, rt.memory().aot_load32(ctx.gpr[2] + static_cast<std::uint32_t>(32288)));
    { const bool branch_taken = ctx.gpr[2] != 0u;
    // nop
      if (branch_taken) {
          goto L_0898B098;
      }
      goto L_0898B06C;
    }
L_0898B06C:
    ctx.set_gpr(4, 2228u << 16u);
    ctx.set_gpr(4, ctx.gpr[4] + static_cast<std::uint32_t>(15724));
    ctx.set_gpr(5, 2228u << 16u);
    ctx.set_gpr(5, ctx.gpr[5] + static_cast<std::uint32_t>(15484));
    ctx.set_gpr(6, 2228u << 16u);
    ctx.set_gpr(6, ctx.gpr[6] + static_cast<std::uint32_t>(15604));
    ctx.set_gpr(7, 0u + static_cast<std::uint32_t>(30));
    ctx.set_gpr(31, 0x0898B090u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0079_entry, 79u, 432u, 0x08941E90u>(ctx, &aot_mem) && ctx.pc == 0x0898B090u) goto L_0898B090;
    return;
L_0898B090:
    ctx.set_gpr(3, 2245u << 16u);
    rt.memory().aot_store32(ctx.gpr[3] + static_cast<std::uint32_t>(32288), ctx.gpr[2]);
    goto L_0898B098;
L_0898B098:
    ctx.set_gpr(2, 2245u << 16u);
    ctx.set_gpr(2, rt.memory().aot_load32(ctx.gpr[2] + static_cast<std::uint32_t>(32288)));
    ctx.set_gpr(31, rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(12)));
    ctx.set_gpr(29, ctx.gpr[29] + static_cast<std::uint32_t>(16));
    jump_target = ctx.gpr[31];
    // nop
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_0898B0B0:
    ctx.set_gpr(29, ctx.gpr[29] + static_cast<std::uint32_t>(-16));
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(12), ctx.gpr[31]);
    ctx.set_gpr(2, 2245u << 16u);
    ctx.set_gpr(2, rt.memory().aot_load32(ctx.gpr[2] + static_cast<std::uint32_t>(32292)));
    { const bool branch_taken = ctx.gpr[2] != 0u;
    // nop
      if (branch_taken) {
          goto L_0898B0F4;
      }
      goto L_0898B0C8;
    }
L_0898B0C8:
    ctx.set_gpr(4, 2228u << 16u);
    ctx.set_gpr(4, ctx.gpr[4] + static_cast<std::uint32_t>(15900));
    ctx.set_gpr(5, 2228u << 16u);
    ctx.set_gpr(5, ctx.gpr[5] + static_cast<std::uint32_t>(15876));
    ctx.set_gpr(6, 2228u << 16u);
    ctx.set_gpr(6, ctx.gpr[6] + static_cast<std::uint32_t>(15888));
    ctx.set_gpr(7, 0u + static_cast<std::uint32_t>(3));
    ctx.set_gpr(31, 0x0898B0ECu);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0079_entry, 79u, 432u, 0x08941E90u>(ctx, &aot_mem) && ctx.pc == 0x0898B0ECu) goto L_0898B0EC;
    return;
L_0898B0EC:
    ctx.set_gpr(3, 2245u << 16u);
    rt.memory().aot_store32(ctx.gpr[3] + static_cast<std::uint32_t>(32292), ctx.gpr[2]);
    goto L_0898B0F4;
L_0898B0F4:
    ctx.set_gpr(2, 2245u << 16u);
    ctx.set_gpr(2, rt.memory().aot_load32(ctx.gpr[2] + static_cast<std::uint32_t>(32292)));
    ctx.set_gpr(31, rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(12)));
    ctx.set_gpr(29, ctx.gpr[29] + static_cast<std::uint32_t>(16));
    jump_target = ctx.gpr[31];
    // nop
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_0898B10C:
    ctx.set_gpr(29, ctx.gpr[29] + static_cast<std::uint32_t>(-16));
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(12), ctx.gpr[31]);
    ctx.set_gpr(2, 2245u << 16u);
    ctx.set_gpr(2, rt.memory().aot_load32(ctx.gpr[2] + static_cast<std::uint32_t>(32296)));
    { const bool branch_taken = ctx.gpr[2] != 0u;
    // nop
      if (branch_taken) {
          goto L_0898B150;
      }
      goto L_0898B124;
    }
L_0898B124:
    ctx.set_gpr(4, 2228u << 16u);
    ctx.set_gpr(4, ctx.gpr[4] + static_cast<std::uint32_t>(16216));
    ctx.set_gpr(5, 2228u << 16u);
    ctx.set_gpr(5, ctx.gpr[5] + static_cast<std::uint32_t>(16144));
    ctx.set_gpr(6, 2228u << 16u);
    ctx.set_gpr(6, ctx.gpr[6] + static_cast<std::uint32_t>(16180));
    ctx.set_gpr(7, 0u + static_cast<std::uint32_t>(9));
    ctx.set_gpr(31, 0x0898B148u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0079_entry, 79u, 432u, 0x08941E90u>(ctx, &aot_mem) && ctx.pc == 0x0898B148u) goto L_0898B148;
    return;
L_0898B148:
    ctx.set_gpr(3, 2245u << 16u);
    rt.memory().aot_store32(ctx.gpr[3] + static_cast<std::uint32_t>(32296), ctx.gpr[2]);
    goto L_0898B150;
L_0898B150:
    ctx.set_gpr(2, 2245u << 16u);
    ctx.set_gpr(2, rt.memory().aot_load32(ctx.gpr[2] + static_cast<std::uint32_t>(32296)));
    ctx.set_gpr(31, rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(12)));
    ctx.set_gpr(29, ctx.gpr[29] + static_cast<std::uint32_t>(16));
    jump_target = ctx.gpr[31];
    // nop
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_0898B168:
    ctx.set_gpr(29, ctx.gpr[29] + static_cast<std::uint32_t>(-16));
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(12), ctx.gpr[31]);
    ctx.set_gpr(2, 2245u << 16u);
    ctx.set_gpr(2, rt.memory().aot_load32(ctx.gpr[2] + static_cast<std::uint32_t>(32300)));
    { const bool branch_taken = ctx.gpr[2] != 0u;
    // nop
      if (branch_taken) {
          goto L_0898B1AC;
      }
      goto L_0898B180;
    }
L_0898B180:
    ctx.set_gpr(4, 2228u << 16u);
    ctx.set_gpr(4, ctx.gpr[4] + static_cast<std::uint32_t>(16300));
    ctx.set_gpr(5, 2228u << 16u);
    ctx.set_gpr(5, ctx.gpr[5] + static_cast<std::uint32_t>(16284));
    ctx.set_gpr(6, 2228u << 16u);
    ctx.set_gpr(6, ctx.gpr[6] + static_cast<std::uint32_t>(16292));
    ctx.set_gpr(7, 0u + static_cast<std::uint32_t>(2));
    ctx.set_gpr(31, 0x0898B1A4u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0079_entry, 79u, 432u, 0x08941E90u>(ctx, &aot_mem) && ctx.pc == 0x0898B1A4u) goto L_0898B1A4;
    return;
L_0898B1A4:
    ctx.set_gpr(3, 2245u << 16u);
    rt.memory().aot_store32(ctx.gpr[3] + static_cast<std::uint32_t>(32300), ctx.gpr[2]);
    goto L_0898B1AC;
L_0898B1AC:
    ctx.set_gpr(2, 2245u << 16u);
    ctx.set_gpr(2, rt.memory().aot_load32(ctx.gpr[2] + static_cast<std::uint32_t>(32300)));
    ctx.set_gpr(31, rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(12)));
    ctx.set_gpr(29, ctx.gpr[29] + static_cast<std::uint32_t>(16));
    jump_target = ctx.gpr[31];
    // nop
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_0898B1C4:
    ctx.set_gpr(29, ctx.gpr[29] + static_cast<std::uint32_t>(-16));
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(12), ctx.gpr[31]);
    ctx.set_gpr(2, 2245u << 16u);
    ctx.set_gpr(2, rt.memory().aot_load32(ctx.gpr[2] + static_cast<std::uint32_t>(32304)));
    { const bool branch_taken = ctx.gpr[2] != 0u;
    // nop
      if (branch_taken) {
          goto L_0898B208;
      }
      goto L_0898B1DC;
    }
L_0898B1DC:
    ctx.set_gpr(4, 2228u << 16u);
    ctx.set_gpr(4, ctx.gpr[4] + static_cast<std::uint32_t>(16424));
    ctx.set_gpr(5, 2228u << 16u);
    ctx.set_gpr(5, ctx.gpr[5] + static_cast<std::uint32_t>(16400));
    ctx.set_gpr(6, 2228u << 16u);
    ctx.set_gpr(6, ctx.gpr[6] + static_cast<std::uint32_t>(16412));
    ctx.set_gpr(7, 0u + static_cast<std::uint32_t>(3));
    ctx.set_gpr(31, 0x0898B200u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0079_entry, 79u, 432u, 0x08941E90u>(ctx, &aot_mem) && ctx.pc == 0x0898B200u) goto L_0898B200;
    return;
L_0898B200:
    ctx.set_gpr(3, 2245u << 16u);
    rt.memory().aot_store32(ctx.gpr[3] + static_cast<std::uint32_t>(32304), ctx.gpr[2]);
    goto L_0898B208;
L_0898B208:
    ctx.set_gpr(2, 2245u << 16u);
    ctx.set_gpr(2, rt.memory().aot_load32(ctx.gpr[2] + static_cast<std::uint32_t>(32304)));
    ctx.set_gpr(31, rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(12)));
    ctx.set_gpr(29, ctx.gpr[29] + static_cast<std::uint32_t>(16));
    jump_target = ctx.gpr[31];
    // nop
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_0898B220:
    ctx.set_gpr(29, ctx.gpr[29] + static_cast<std::uint32_t>(-16));
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(12), ctx.gpr[31]);
    ctx.set_gpr(2, 2245u << 16u);
    ctx.set_gpr(2, rt.memory().aot_load32(ctx.gpr[2] + static_cast<std::uint32_t>(32308)));
    { const bool branch_taken = ctx.gpr[2] != 0u;
    // nop
      if (branch_taken) {
          goto L_0898B264;
      }
      goto L_0898B238;
    }
L_0898B238:
    ctx.set_gpr(4, 2228u << 16u);
    ctx.set_gpr(4, ctx.gpr[4] + static_cast<std::uint32_t>(16716));
    ctx.set_gpr(5, 2228u << 16u);
    ctx.set_gpr(5, ctx.gpr[5] + static_cast<std::uint32_t>(16668));
    ctx.set_gpr(6, 2228u << 16u);
    ctx.set_gpr(6, ctx.gpr[6] + static_cast<std::uint32_t>(16692));
    ctx.set_gpr(7, 0u + static_cast<std::uint32_t>(6));
    ctx.set_gpr(31, 0x0898B25Cu);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0079_entry, 79u, 432u, 0x08941E90u>(ctx, &aot_mem) && ctx.pc == 0x0898B25Cu) goto L_0898B25C;
    return;
L_0898B25C:
    ctx.set_gpr(3, 2245u << 16u);
    rt.memory().aot_store32(ctx.gpr[3] + static_cast<std::uint32_t>(32308), ctx.gpr[2]);
    goto L_0898B264;
L_0898B264:
    ctx.set_gpr(2, 2245u << 16u);
    ctx.set_gpr(2, rt.memory().aot_load32(ctx.gpr[2] + static_cast<std::uint32_t>(32308)));
    ctx.set_gpr(31, rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(12)));
    ctx.set_gpr(29, ctx.gpr[29] + static_cast<std::uint32_t>(16));
    jump_target = ctx.gpr[31];
    // nop
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_0898B27C:
    ctx.set_gpr(29, ctx.gpr[29] + static_cast<std::uint32_t>(-16));
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(12), ctx.gpr[31]);
    ctx.set_gpr(2, 2245u << 16u);
    ctx.set_gpr(2, rt.memory().aot_load32(ctx.gpr[2] + static_cast<std::uint32_t>(32312)));
    { const bool branch_taken = ctx.gpr[2] != 0u;
    // nop
      if (branch_taken) {
          goto L_0898B2C0;
      }
      goto L_0898B294;
    }
L_0898B294:
    ctx.set_gpr(4, 2228u << 16u);
    ctx.set_gpr(4, ctx.gpr[4] + static_cast<std::uint32_t>(17176));
    ctx.set_gpr(5, 2228u << 16u);
    ctx.set_gpr(5, ctx.gpr[5] + static_cast<std::uint32_t>(17072));
    ctx.set_gpr(6, 2228u << 16u);
    ctx.set_gpr(6, ctx.gpr[6] + static_cast<std::uint32_t>(17124));
    ctx.set_gpr(7, 0u + static_cast<std::uint32_t>(13));
    ctx.set_gpr(31, 0x0898B2B8u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0079_entry, 79u, 432u, 0x08941E90u>(ctx, &aot_mem) && ctx.pc == 0x0898B2B8u) goto L_0898B2B8;
    return;
L_0898B2B8:
    ctx.set_gpr(3, 2245u << 16u);
    rt.memory().aot_store32(ctx.gpr[3] + static_cast<std::uint32_t>(32312), ctx.gpr[2]);
    goto L_0898B2C0;
L_0898B2C0:
    ctx.set_gpr(2, 2245u << 16u);
    ctx.set_gpr(2, rt.memory().aot_load32(ctx.gpr[2] + static_cast<std::uint32_t>(32312)));
    ctx.set_gpr(31, rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(12)));
    ctx.set_gpr(29, ctx.gpr[29] + static_cast<std::uint32_t>(16));
    jump_target = ctx.gpr[31];
    // nop
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_0898B2D8:
    ctx.set_gpr(29, ctx.gpr[29] + static_cast<std::uint32_t>(-16));
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(12), ctx.gpr[31]);
    ctx.set_gpr(2, 2245u << 16u);
    ctx.set_gpr(2, rt.memory().aot_load32(ctx.gpr[2] + static_cast<std::uint32_t>(32316)));
    { const bool branch_taken = ctx.gpr[2] != 0u;
    // nop
      if (branch_taken) {
          goto L_0898B31C;
      }
      goto L_0898B2F0;
    }
L_0898B2F0:
    ctx.set_gpr(4, 2228u << 16u);
    ctx.set_gpr(4, ctx.gpr[4] + static_cast<std::uint32_t>(20272));
    ctx.set_gpr(5, 2228u << 16u);
    ctx.set_gpr(5, ctx.gpr[5] + static_cast<std::uint32_t>(19704));
    ctx.set_gpr(6, 2228u << 16u);
    ctx.set_gpr(6, ctx.gpr[6] + static_cast<std::uint32_t>(19988));
    ctx.set_gpr(7, 0u + static_cast<std::uint32_t>(71));
    ctx.set_gpr(31, 0x0898B314u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0079_entry, 79u, 432u, 0x08941E90u>(ctx, &aot_mem) && ctx.pc == 0x0898B314u) goto L_0898B314;
    return;
L_0898B314:
    ctx.set_gpr(3, 2245u << 16u);
    rt.memory().aot_store32(ctx.gpr[3] + static_cast<std::uint32_t>(32316), ctx.gpr[2]);
    goto L_0898B31C;
L_0898B31C:
    ctx.set_gpr(2, 2245u << 16u);
    ctx.set_gpr(2, rt.memory().aot_load32(ctx.gpr[2] + static_cast<std::uint32_t>(32316)));
    ctx.set_gpr(31, rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(12)));
    ctx.set_gpr(29, ctx.gpr[29] + static_cast<std::uint32_t>(16));
    jump_target = ctx.gpr[31];
    // nop
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_0898B334:
    ctx.set_gpr(29, ctx.gpr[29] + static_cast<std::uint32_t>(-16));
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(12), ctx.gpr[31]);
    ctx.set_gpr(2, 2245u << 16u);
    ctx.set_gpr(2, rt.memory().aot_load32(ctx.gpr[2] + static_cast<std::uint32_t>(32320)));
    { const bool branch_taken = ctx.gpr[2] != 0u;
    // nop
      if (branch_taken) {
          goto L_0898B378;
      }
      goto L_0898B34C;
    }
L_0898B34C:
    ctx.set_gpr(4, 2228u << 16u);
    ctx.set_gpr(4, ctx.gpr[4] + static_cast<std::uint32_t>(20632));
    ctx.set_gpr(5, 2228u << 16u);
    ctx.set_gpr(5, ctx.gpr[5] + static_cast<std::uint32_t>(20576));
    ctx.set_gpr(6, 2228u << 16u);
    ctx.set_gpr(6, ctx.gpr[6] + static_cast<std::uint32_t>(20604));
    ctx.set_gpr(7, 0u + static_cast<std::uint32_t>(7));
    ctx.set_gpr(31, 0x0898B370u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0079_entry, 79u, 432u, 0x08941E90u>(ctx, &aot_mem) && ctx.pc == 0x0898B370u) goto L_0898B370;
    return;
L_0898B370:
    ctx.set_gpr(3, 2245u << 16u);
    rt.memory().aot_store32(ctx.gpr[3] + static_cast<std::uint32_t>(32320), ctx.gpr[2]);
    goto L_0898B378;
L_0898B378:
    ctx.set_gpr(2, 2245u << 16u);
    ctx.set_gpr(2, rt.memory().aot_load32(ctx.gpr[2] + static_cast<std::uint32_t>(32320)));
    ctx.set_gpr(31, rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(12)));
    ctx.set_gpr(29, ctx.gpr[29] + static_cast<std::uint32_t>(16));
    jump_target = ctx.gpr[31];
    // nop
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_0898B390:
    ctx.set_gpr(29, ctx.gpr[29] + static_cast<std::uint32_t>(-16));
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(12), ctx.gpr[31]);
    ctx.set_gpr(2, 2245u << 16u);
    ctx.set_gpr(2, rt.memory().aot_load32(ctx.gpr[2] + static_cast<std::uint32_t>(32324)));
    { const bool branch_taken = ctx.gpr[2] != 0u;
    // nop
      if (branch_taken) {
          goto L_0898B3D4;
      }
      goto L_0898B3A8;
    }
L_0898B3A8:
    ctx.set_gpr(4, 2228u << 16u);
    ctx.set_gpr(4, ctx.gpr[4] + static_cast<std::uint32_t>(20816));
    ctx.set_gpr(5, 2228u << 16u);
    ctx.set_gpr(5, ctx.gpr[5] + static_cast<std::uint32_t>(20784));
    ctx.set_gpr(6, 2228u << 16u);
    ctx.set_gpr(6, ctx.gpr[6] + static_cast<std::uint32_t>(20800));
    ctx.set_gpr(7, 0u + static_cast<std::uint32_t>(4));
    ctx.set_gpr(31, 0x0898B3CCu);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0079_entry, 79u, 432u, 0x08941E90u>(ctx, &aot_mem) && ctx.pc == 0x0898B3CCu) goto L_0898B3CC;
    return;
L_0898B3CC:
    ctx.set_gpr(3, 2245u << 16u);
    rt.memory().aot_store32(ctx.gpr[3] + static_cast<std::uint32_t>(32324), ctx.gpr[2]);
    goto L_0898B3D4;
L_0898B3D4:
    ctx.set_gpr(2, 2245u << 16u);
    ctx.set_gpr(2, rt.memory().aot_load32(ctx.gpr[2] + static_cast<std::uint32_t>(32324)));
    ctx.set_gpr(31, rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(12)));
    ctx.set_gpr(29, ctx.gpr[29] + static_cast<std::uint32_t>(16));
    jump_target = ctx.gpr[31];
    // nop
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_0898B3EC:
    ctx.set_gpr(29, ctx.gpr[29] + static_cast<std::uint32_t>(-16));
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(12), ctx.gpr[31]);
    ctx.set_gpr(2, 2245u << 16u);
    ctx.set_gpr(2, rt.memory().aot_load32(ctx.gpr[2] + static_cast<std::uint32_t>(32328)));
    { const bool branch_taken = ctx.gpr[2] != 0u;
    // nop
      if (branch_taken) {
          goto L_0898B430;
      }
      goto L_0898B404;
    }
L_0898B404:
    ctx.set_gpr(4, 2228u << 16u);
    ctx.set_gpr(4, ctx.gpr[4] + static_cast<std::uint32_t>(21032));
    ctx.set_gpr(5, 2228u << 16u);
    ctx.set_gpr(5, ctx.gpr[5] + static_cast<std::uint32_t>(20992));
    ctx.set_gpr(6, 2228u << 16u);
    ctx.set_gpr(6, ctx.gpr[6] + static_cast<std::uint32_t>(21012));
    ctx.set_gpr(7, 0u + static_cast<std::uint32_t>(5));
    ctx.set_gpr(31, 0x0898B428u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0079_entry, 79u, 432u, 0x08941E90u>(ctx, &aot_mem) && ctx.pc == 0x0898B428u) goto L_0898B428;
    return;
L_0898B428:
    ctx.set_gpr(3, 2245u << 16u);
    rt.memory().aot_store32(ctx.gpr[3] + static_cast<std::uint32_t>(32328), ctx.gpr[2]);
    goto L_0898B430;
L_0898B430:
    ctx.set_gpr(2, 2245u << 16u);
    ctx.set_gpr(2, rt.memory().aot_load32(ctx.gpr[2] + static_cast<std::uint32_t>(32328)));
    ctx.set_gpr(31, rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(12)));
    ctx.set_gpr(29, ctx.gpr[29] + static_cast<std::uint32_t>(16));
    jump_target = ctx.gpr[31];
    // nop
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_0898B448:
    ctx.set_gpr(29, ctx.gpr[29] + static_cast<std::uint32_t>(-16));
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(12), ctx.gpr[31]);
    ctx.set_gpr(2, 2245u << 16u);
    ctx.set_gpr(2, rt.memory().aot_load32(ctx.gpr[2] + static_cast<std::uint32_t>(32332)));
    { const bool branch_taken = ctx.gpr[2] != 0u;
    // nop
      if (branch_taken) {
          goto L_0898B48C;
      }
      goto L_0898B460;
    }
L_0898B460:
    ctx.set_gpr(4, 2228u << 16u);
    ctx.set_gpr(4, ctx.gpr[4] + static_cast<std::uint32_t>(21232));
    ctx.set_gpr(5, 2228u << 16u);
    ctx.set_gpr(5, ctx.gpr[5] + static_cast<std::uint32_t>(21200));
    ctx.set_gpr(6, 2228u << 16u);
    ctx.set_gpr(6, ctx.gpr[6] + static_cast<std::uint32_t>(21216));
    ctx.set_gpr(7, 0u + static_cast<std::uint32_t>(4));
    ctx.set_gpr(31, 0x0898B484u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0079_entry, 79u, 432u, 0x08941E90u>(ctx, &aot_mem) && ctx.pc == 0x0898B484u) goto L_0898B484;
    return;
L_0898B484:
    ctx.set_gpr(3, 2245u << 16u);
    rt.memory().aot_store32(ctx.gpr[3] + static_cast<std::uint32_t>(32332), ctx.gpr[2]);
    goto L_0898B48C;
L_0898B48C:
    ctx.set_gpr(2, 2245u << 16u);
    ctx.set_gpr(2, rt.memory().aot_load32(ctx.gpr[2] + static_cast<std::uint32_t>(32332)));
    ctx.set_gpr(31, rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(12)));
    ctx.set_gpr(29, ctx.gpr[29] + static_cast<std::uint32_t>(16));
    jump_target = ctx.gpr[31];
    // nop
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_0898B4A4:
    ctx.set_gpr(29, ctx.gpr[29] + static_cast<std::uint32_t>(-16));
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(12), ctx.gpr[31]);
    ctx.set_gpr(2, 2245u << 16u);
    ctx.set_gpr(2, rt.memory().aot_load32(ctx.gpr[2] + static_cast<std::uint32_t>(32336)));
    { const bool branch_taken = ctx.gpr[2] != 0u;
    // nop
      if (branch_taken) {
          goto L_0898B4E8;
      }
      goto L_0898B4BC;
    }
L_0898B4BC:
    ctx.set_gpr(4, 2228u << 16u);
    ctx.set_gpr(4, ctx.gpr[4] + static_cast<std::uint32_t>(21340));
    ctx.set_gpr(5, 2228u << 16u);
    ctx.set_gpr(5, ctx.gpr[5] + static_cast<std::uint32_t>(21324));
    ctx.set_gpr(6, 2228u << 16u);
    ctx.set_gpr(6, ctx.gpr[6] + static_cast<std::uint32_t>(21332));
    ctx.set_gpr(7, 0u + static_cast<std::uint32_t>(2));
    ctx.set_gpr(31, 0x0898B4E0u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0079_entry, 79u, 432u, 0x08941E90u>(ctx, &aot_mem) && ctx.pc == 0x0898B4E0u) goto L_0898B4E0;
    return;
L_0898B4E0:
    ctx.set_gpr(3, 2245u << 16u);
    rt.memory().aot_store32(ctx.gpr[3] + static_cast<std::uint32_t>(32336), ctx.gpr[2]);
    goto L_0898B4E8;
L_0898B4E8:
    ctx.set_gpr(2, 2245u << 16u);
    ctx.set_gpr(2, rt.memory().aot_load32(ctx.gpr[2] + static_cast<std::uint32_t>(32336)));
    ctx.set_gpr(31, rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(12)));
    ctx.set_gpr(29, ctx.gpr[29] + static_cast<std::uint32_t>(16));
    jump_target = ctx.gpr[31];
    // nop
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_0898B500:
    ctx.set_gpr(29, ctx.gpr[29] + static_cast<std::uint32_t>(-16));
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(12), ctx.gpr[31]);
    ctx.set_gpr(2, 2245u << 16u);
    ctx.set_gpr(2, rt.memory().aot_load32(ctx.gpr[2] + static_cast<std::uint32_t>(32340)));
    { const bool branch_taken = ctx.gpr[2] != 0u;
    // nop
      if (branch_taken) {
          goto L_0898B544;
      }
      goto L_0898B518;
    }
L_0898B518:
    ctx.set_gpr(4, 2228u << 16u);
    ctx.set_gpr(4, ctx.gpr[4] + static_cast<std::uint32_t>(21664));
    ctx.set_gpr(5, 2228u << 16u);
    ctx.set_gpr(5, ctx.gpr[5] + static_cast<std::uint32_t>(21616));
    ctx.set_gpr(6, 2228u << 16u);
    ctx.set_gpr(6, ctx.gpr[6] + static_cast<std::uint32_t>(21640));
    ctx.set_gpr(7, 0u + static_cast<std::uint32_t>(6));
    ctx.set_gpr(31, 0x0898B53Cu);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0079_entry, 79u, 432u, 0x08941E90u>(ctx, &aot_mem) && ctx.pc == 0x0898B53Cu) goto L_0898B53C;
    return;
L_0898B53C:
    ctx.set_gpr(3, 2245u << 16u);
    rt.memory().aot_store32(ctx.gpr[3] + static_cast<std::uint32_t>(32340), ctx.gpr[2]);
    goto L_0898B544;
L_0898B544:
    ctx.set_gpr(2, 2245u << 16u);
    ctx.set_gpr(2, rt.memory().aot_load32(ctx.gpr[2] + static_cast<std::uint32_t>(32340)));
    ctx.set_gpr(31, rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(12)));
    ctx.set_gpr(29, ctx.gpr[29] + static_cast<std::uint32_t>(16));
    jump_target = ctx.gpr[31];
    // nop
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_0898B55C:
    ctx.set_gpr(29, ctx.gpr[29] + static_cast<std::uint32_t>(-16));
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(12), ctx.gpr[31]);
    ctx.set_gpr(2, 2245u << 16u);
    ctx.set_gpr(2, rt.memory().aot_load32(ctx.gpr[2] + static_cast<std::uint32_t>(32344)));
    { const bool branch_taken = ctx.gpr[2] != 0u;
    // nop
      if (branch_taken) {
          goto L_0898B5A0;
      }
      goto L_0898B574;
    }
L_0898B574:
    ctx.set_gpr(4, 2228u << 16u);
    ctx.set_gpr(4, ctx.gpr[4] + static_cast<std::uint32_t>(23004));
    ctx.set_gpr(5, 2228u << 16u);
    ctx.set_gpr(5, ctx.gpr[5] + static_cast<std::uint32_t>(22788));
    ctx.set_gpr(6, 2228u << 16u);
    ctx.set_gpr(6, ctx.gpr[6] + static_cast<std::uint32_t>(22896));
    ctx.set_gpr(7, 0u + static_cast<std::uint32_t>(27));
    ctx.set_gpr(31, 0x0898B598u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0079_entry, 79u, 432u, 0x08941E90u>(ctx, &aot_mem) && ctx.pc == 0x0898B598u) goto L_0898B598;
    return;
L_0898B598:
    ctx.set_gpr(3, 2245u << 16u);
    rt.memory().aot_store32(ctx.gpr[3] + static_cast<std::uint32_t>(32344), ctx.gpr[2]);
    goto L_0898B5A0;
L_0898B5A0:
    ctx.set_gpr(2, 2245u << 16u);
    ctx.set_gpr(2, rt.memory().aot_load32(ctx.gpr[2] + static_cast<std::uint32_t>(32344)));
    ctx.set_gpr(31, rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(12)));
    ctx.set_gpr(29, ctx.gpr[29] + static_cast<std::uint32_t>(16));
    jump_target = ctx.gpr[31];
    // nop
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_0898B5B8:
    ctx.set_gpr(29, ctx.gpr[29] + static_cast<std::uint32_t>(-16));
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(12), ctx.gpr[31]);
    ctx.set_gpr(2, 2245u << 16u);
    ctx.set_gpr(2, rt.memory().aot_load32(ctx.gpr[2] + static_cast<std::uint32_t>(32348)));
    { const bool branch_taken = ctx.gpr[2] != 0u;
    // nop
      if (branch_taken) {
          goto L_0898B5FC;
      }
      goto L_0898B5D0;
    }
L_0898B5D0:
    ctx.set_gpr(4, 2228u << 16u);
    ctx.set_gpr(4, ctx.gpr[4] + static_cast<std::uint32_t>(23544));
    ctx.set_gpr(5, 2228u << 16u);
    ctx.set_gpr(5, ctx.gpr[5] + static_cast<std::uint32_t>(23472));
    ctx.set_gpr(6, 2228u << 16u);
    ctx.set_gpr(6, ctx.gpr[6] + static_cast<std::uint32_t>(23508));
    ctx.set_gpr(7, 0u + static_cast<std::uint32_t>(9));
    ctx.set_gpr(31, 0x0898B5F4u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0079_entry, 79u, 432u, 0x08941E90u>(ctx, &aot_mem) && ctx.pc == 0x0898B5F4u) goto L_0898B5F4;
    return;
L_0898B5F4:
    ctx.set_gpr(3, 2245u << 16u);
    rt.memory().aot_store32(ctx.gpr[3] + static_cast<std::uint32_t>(32348), ctx.gpr[2]);
    goto L_0898B5FC;
L_0898B5FC:
    ctx.set_gpr(2, 2245u << 16u);
    ctx.set_gpr(2, rt.memory().aot_load32(ctx.gpr[2] + static_cast<std::uint32_t>(32348)));
    ctx.set_gpr(31, rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(12)));
    ctx.set_gpr(29, ctx.gpr[29] + static_cast<std::uint32_t>(16));
    jump_target = ctx.gpr[31];
    // nop
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_0898B614:
    ctx.set_gpr(29, ctx.gpr[29] + static_cast<std::uint32_t>(-16));
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(12), ctx.gpr[31]);
    ctx.set_gpr(2, 2245u << 16u);
    ctx.set_gpr(2, rt.memory().aot_load32(ctx.gpr[2] + static_cast<std::uint32_t>(32352)));
    { const bool branch_taken = ctx.gpr[2] != 0u;
    // nop
      if (branch_taken) {
          goto L_0898B658;
      }
      goto L_0898B62C;
    }
L_0898B62C:
    ctx.set_gpr(4, 2228u << 16u);
    ctx.set_gpr(4, ctx.gpr[4] + static_cast<std::uint32_t>(24148));
    ctx.set_gpr(5, 2228u << 16u);
    ctx.set_gpr(5, ctx.gpr[5] + static_cast<std::uint32_t>(24060));
    ctx.set_gpr(6, 2228u << 16u);
    ctx.set_gpr(6, ctx.gpr[6] + static_cast<std::uint32_t>(24104));
    ctx.set_gpr(7, 0u + static_cast<std::uint32_t>(11));
    ctx.set_gpr(31, 0x0898B650u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0079_entry, 79u, 432u, 0x08941E90u>(ctx, &aot_mem) && ctx.pc == 0x0898B650u) goto L_0898B650;
    return;
L_0898B650:
    ctx.set_gpr(3, 2245u << 16u);
    rt.memory().aot_store32(ctx.gpr[3] + static_cast<std::uint32_t>(32352), ctx.gpr[2]);
    goto L_0898B658;
L_0898B658:
    ctx.set_gpr(2, 2245u << 16u);
    ctx.set_gpr(2, rt.memory().aot_load32(ctx.gpr[2] + static_cast<std::uint32_t>(32352)));
    ctx.set_gpr(31, rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(12)));
    ctx.set_gpr(29, ctx.gpr[29] + static_cast<std::uint32_t>(16));
    jump_target = ctx.gpr[31];
    // nop
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_0898B670:
    ctx.set_gpr(29, ctx.gpr[29] + static_cast<std::uint32_t>(-16));
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(12), ctx.gpr[31]);
    ctx.set_gpr(2, 2245u << 16u);
    ctx.set_gpr(2, rt.memory().aot_load32(ctx.gpr[2] + static_cast<std::uint32_t>(32356)));
    { const bool branch_taken = ctx.gpr[2] != 0u;
    // nop
      if (branch_taken) {
          goto L_0898B6B4;
      }
      goto L_0898B688;
    }
L_0898B688:
    ctx.set_gpr(4, 2228u << 16u);
    ctx.set_gpr(4, ctx.gpr[4] + static_cast<std::uint32_t>(24392));
    ctx.set_gpr(5, 2228u << 16u);
    ctx.set_gpr(5, ctx.gpr[5] + static_cast<std::uint32_t>(24352));
    ctx.set_gpr(6, 2228u << 16u);
    ctx.set_gpr(6, ctx.gpr[6] + static_cast<std::uint32_t>(24372));
    ctx.set_gpr(7, 0u + static_cast<std::uint32_t>(5));
    ctx.set_gpr(31, 0x0898B6ACu);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0079_entry, 79u, 432u, 0x08941E90u>(ctx, &aot_mem) && ctx.pc == 0x0898B6ACu) goto L_0898B6AC;
    return;
L_0898B6AC:
    ctx.set_gpr(3, 2245u << 16u);
    rt.memory().aot_store32(ctx.gpr[3] + static_cast<std::uint32_t>(32356), ctx.gpr[2]);
    goto L_0898B6B4;
L_0898B6B4:
    ctx.set_gpr(2, 2245u << 16u);
    ctx.set_gpr(2, rt.memory().aot_load32(ctx.gpr[2] + static_cast<std::uint32_t>(32356)));
    ctx.set_gpr(31, rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(12)));
    ctx.set_gpr(29, ctx.gpr[29] + static_cast<std::uint32_t>(16));
    jump_target = ctx.gpr[31];
    // nop
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_0898B6CC:
    ctx.set_gpr(29, ctx.gpr[29] + static_cast<std::uint32_t>(-16));
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(12), ctx.gpr[31]);
    ctx.set_gpr(2, 2245u << 16u);
    ctx.set_gpr(2, rt.memory().aot_load32(ctx.gpr[2] + static_cast<std::uint32_t>(32360)));
    { const bool branch_taken = ctx.gpr[2] != 0u;
    // nop
      if (branch_taken) {
          goto L_0898B710;
      }
      goto L_0898B6E4;
    }
L_0898B6E4:
    ctx.set_gpr(4, 2228u << 16u);
    ctx.set_gpr(4, ctx.gpr[4] + static_cast<std::uint32_t>(24728));
    ctx.set_gpr(5, 2228u << 16u);
    ctx.set_gpr(5, ctx.gpr[5] + static_cast<std::uint32_t>(24664));
    ctx.set_gpr(6, 2228u << 16u);
    ctx.set_gpr(6, ctx.gpr[6] + static_cast<std::uint32_t>(24696));
    ctx.set_gpr(7, 0u + static_cast<std::uint32_t>(8));
    ctx.set_gpr(31, 0x0898B708u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0079_entry, 79u, 432u, 0x08941E90u>(ctx, &aot_mem) && ctx.pc == 0x0898B708u) goto L_0898B708;
    return;
L_0898B708:
    ctx.set_gpr(3, 2245u << 16u);
    rt.memory().aot_store32(ctx.gpr[3] + static_cast<std::uint32_t>(32360), ctx.gpr[2]);
    goto L_0898B710;
L_0898B710:
    ctx.set_gpr(2, 2245u << 16u);
    ctx.set_gpr(2, rt.memory().aot_load32(ctx.gpr[2] + static_cast<std::uint32_t>(32360)));
    ctx.set_gpr(31, rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(12)));
    ctx.set_gpr(29, ctx.gpr[29] + static_cast<std::uint32_t>(16));
    jump_target = ctx.gpr[31];
    // nop
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_0898B728:
    ctx.set_gpr(29, ctx.gpr[29] + static_cast<std::uint32_t>(-16));
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(12), ctx.gpr[31]);
    ctx.set_gpr(2, 2245u << 16u);
    ctx.set_gpr(2, rt.memory().aot_load32(ctx.gpr[2] + static_cast<std::uint32_t>(32364)));
    { const bool branch_taken = ctx.gpr[2] != 0u;
    // nop
      if (branch_taken) {
          goto L_0898B76C;
      }
      goto L_0898B740;
    }
L_0898B740:
    ctx.set_gpr(4, 2228u << 16u);
    ctx.set_gpr(4, ctx.gpr[4] + static_cast<std::uint32_t>(24824));
    ctx.set_gpr(5, 2228u << 16u);
    ctx.set_gpr(5, ctx.gpr[5] + static_cast<std::uint32_t>(24808));
    ctx.set_gpr(6, 2228u << 16u);
    ctx.set_gpr(6, ctx.gpr[6] + static_cast<std::uint32_t>(24816));
    ctx.set_gpr(7, 0u + static_cast<std::uint32_t>(2));
    ctx.set_gpr(31, 0x0898B764u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0079_entry, 79u, 432u, 0x08941E90u>(ctx, &aot_mem) && ctx.pc == 0x0898B764u) goto L_0898B764;
    return;
L_0898B764:
    ctx.set_gpr(3, 2245u << 16u);
    rt.memory().aot_store32(ctx.gpr[3] + static_cast<std::uint32_t>(32364), ctx.gpr[2]);
    goto L_0898B76C;
L_0898B76C:
    ctx.set_gpr(2, 2245u << 16u);
    ctx.set_gpr(2, rt.memory().aot_load32(ctx.gpr[2] + static_cast<std::uint32_t>(32364)));
    ctx.set_gpr(31, rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(12)));
    ctx.set_gpr(29, ctx.gpr[29] + static_cast<std::uint32_t>(16));
    jump_target = ctx.gpr[31];
    // nop
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_0898B784:
    ctx.set_gpr(29, ctx.gpr[29] + static_cast<std::uint32_t>(-16));
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(12), ctx.gpr[31]);
    ctx.set_gpr(2, 2245u << 16u);
    ctx.set_gpr(2, rt.memory().aot_load32(ctx.gpr[2] + static_cast<std::uint32_t>(32368)));
    { const bool branch_taken = ctx.gpr[2] != 0u;
    // nop
      if (branch_taken) {
          goto L_0898B7C8;
      }
      goto L_0898B79C;
    }
L_0898B79C:
    ctx.set_gpr(4, 2228u << 16u);
    ctx.set_gpr(4, ctx.gpr[4] + static_cast<std::uint32_t>(24916));
    ctx.set_gpr(5, 2228u << 16u);
    ctx.set_gpr(5, ctx.gpr[5] + static_cast<std::uint32_t>(24900));
    ctx.set_gpr(6, 2228u << 16u);
    ctx.set_gpr(6, ctx.gpr[6] + static_cast<std::uint32_t>(24908));
    ctx.set_gpr(7, 0u + static_cast<std::uint32_t>(2));
    ctx.set_gpr(31, 0x0898B7C0u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0079_entry, 79u, 432u, 0x08941E90u>(ctx, &aot_mem) && ctx.pc == 0x0898B7C0u) goto L_0898B7C0;
    return;
L_0898B7C0:
    ctx.set_gpr(3, 2245u << 16u);
    rt.memory().aot_store32(ctx.gpr[3] + static_cast<std::uint32_t>(32368), ctx.gpr[2]);
    goto L_0898B7C8;
L_0898B7C8:
    ctx.set_gpr(2, 2245u << 16u);
    ctx.set_gpr(2, rt.memory().aot_load32(ctx.gpr[2] + static_cast<std::uint32_t>(32368)));
    ctx.set_gpr(31, rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(12)));
    ctx.set_gpr(29, ctx.gpr[29] + static_cast<std::uint32_t>(16));
    jump_target = ctx.gpr[31];
    // nop
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_0898B7E0:
    ctx.set_gpr(29, ctx.gpr[29] + static_cast<std::uint32_t>(-16));
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(12), ctx.gpr[31]);
    ctx.set_gpr(2, 2245u << 16u);
    ctx.set_gpr(2, rt.memory().aot_load32(ctx.gpr[2] + static_cast<std::uint32_t>(32372)));
    { const bool branch_taken = ctx.gpr[2] != 0u;
    // nop
      if (branch_taken) {
          goto L_0898B824;
      }
      goto L_0898B7F8;
    }
L_0898B7F8:
    ctx.set_gpr(4, 2228u << 16u);
    ctx.set_gpr(4, ctx.gpr[4] + static_cast<std::uint32_t>(25292));
    ctx.set_gpr(5, 2228u << 16u);
    ctx.set_gpr(5, ctx.gpr[5] + static_cast<std::uint32_t>(25228));
    ctx.set_gpr(6, 2228u << 16u);
    ctx.set_gpr(6, ctx.gpr[6] + static_cast<std::uint32_t>(25260));
    ctx.set_gpr(7, 0u + static_cast<std::uint32_t>(8));
    ctx.set_gpr(31, 0x0898B81Cu);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0079_entry, 79u, 432u, 0x08941E90u>(ctx, &aot_mem) && ctx.pc == 0x0898B81Cu) goto L_0898B81C;
    return;
L_0898B81C:
    ctx.set_gpr(3, 2245u << 16u);
    rt.memory().aot_store32(ctx.gpr[3] + static_cast<std::uint32_t>(32372), ctx.gpr[2]);
    goto L_0898B824;
L_0898B824:
    ctx.set_gpr(2, 2245u << 16u);
    ctx.set_gpr(2, rt.memory().aot_load32(ctx.gpr[2] + static_cast<std::uint32_t>(32372)));
    ctx.set_gpr(31, rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(12)));
    ctx.set_gpr(29, ctx.gpr[29] + static_cast<std::uint32_t>(16));
    jump_target = ctx.gpr[31];
    // nop
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_0898B83C:
    ctx.set_gpr(29, ctx.gpr[29] + static_cast<std::uint32_t>(-16));
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(12), ctx.gpr[31]);
    ctx.set_gpr(2, 2245u << 16u);
    ctx.set_gpr(2, rt.memory().aot_load32(ctx.gpr[2] + static_cast<std::uint32_t>(32376)));
    { const bool branch_taken = ctx.gpr[2] != 0u;
    // nop
      if (branch_taken) {
          goto L_0898B880;
      }
      goto L_0898B854;
    }
L_0898B854:
    ctx.set_gpr(4, 2228u << 16u);
    ctx.set_gpr(4, ctx.gpr[4] + static_cast<std::uint32_t>(25424));
    ctx.set_gpr(5, 2228u << 16u);
    ctx.set_gpr(5, ctx.gpr[5] + static_cast<std::uint32_t>(25400));
    ctx.set_gpr(6, 2228u << 16u);
    ctx.set_gpr(6, ctx.gpr[6] + static_cast<std::uint32_t>(25412));
    ctx.set_gpr(7, 0u + static_cast<std::uint32_t>(3));
    ctx.set_gpr(31, 0x0898B878u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0079_entry, 79u, 432u, 0x08941E90u>(ctx, &aot_mem) && ctx.pc == 0x0898B878u) goto L_0898B878;
    return;
L_0898B878:
    ctx.set_gpr(3, 2245u << 16u);
    rt.memory().aot_store32(ctx.gpr[3] + static_cast<std::uint32_t>(32376), ctx.gpr[2]);
    goto L_0898B880;
L_0898B880:
    ctx.set_gpr(2, 2245u << 16u);
    ctx.set_gpr(2, rt.memory().aot_load32(ctx.gpr[2] + static_cast<std::uint32_t>(32376)));
    ctx.set_gpr(31, rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(12)));
    ctx.set_gpr(29, ctx.gpr[29] + static_cast<std::uint32_t>(16));
    jump_target = ctx.gpr[31];
    // nop
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_0898B898:
    ctx.set_gpr(29, ctx.gpr[29] + static_cast<std::uint32_t>(-16));
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(12), ctx.gpr[31]);
    ctx.set_gpr(2, 2245u << 16u);
    ctx.set_gpr(2, rt.memory().aot_load32(ctx.gpr[2] + static_cast<std::uint32_t>(32380)));
    { const bool branch_taken = ctx.gpr[2] != 0u;
    // nop
      if (branch_taken) {
          goto L_0898B8DC;
      }
      goto L_0898B8B0;
    }
L_0898B8B0:
    ctx.set_gpr(4, 2228u << 16u);
    ctx.set_gpr(4, ctx.gpr[4] + static_cast<std::uint32_t>(25536));
    ctx.set_gpr(5, 2228u << 16u);
    ctx.set_gpr(5, ctx.gpr[5] + static_cast<std::uint32_t>(25512));
    ctx.set_gpr(6, 2228u << 16u);
    ctx.set_gpr(6, ctx.gpr[6] + static_cast<std::uint32_t>(25524));
    ctx.set_gpr(7, 0u + static_cast<std::uint32_t>(3));
    ctx.set_gpr(31, 0x0898B8D4u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0079_entry, 79u, 432u, 0x08941E90u>(ctx, &aot_mem) && ctx.pc == 0x0898B8D4u) goto L_0898B8D4;
    return;
L_0898B8D4:
    ctx.set_gpr(3, 2245u << 16u);
    rt.memory().aot_store32(ctx.gpr[3] + static_cast<std::uint32_t>(32380), ctx.gpr[2]);
    goto L_0898B8DC;
L_0898B8DC:
    ctx.set_gpr(2, 2245u << 16u);
    ctx.set_gpr(2, rt.memory().aot_load32(ctx.gpr[2] + static_cast<std::uint32_t>(32380)));
    ctx.set_gpr(31, rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(12)));
    ctx.set_gpr(29, ctx.gpr[29] + static_cast<std::uint32_t>(16));
    jump_target = ctx.gpr[31];
    // nop
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_0898B8F4:
    ctx.set_gpr(29, ctx.gpr[29] + static_cast<std::uint32_t>(-16));
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(12), ctx.gpr[31]);
    ctx.set_gpr(2, 2245u << 16u);
    ctx.set_gpr(2, rt.memory().aot_load32(ctx.gpr[2] + static_cast<std::uint32_t>(32384)));
    { const bool branch_taken = ctx.gpr[2] != 0u;
    // nop
      if (branch_taken) {
          goto L_0898B938;
      }
      goto L_0898B90C;
    }
L_0898B90C:
    ctx.set_gpr(4, 2228u << 16u);
    ctx.set_gpr(4, ctx.gpr[4] + static_cast<std::uint32_t>(25876));
    ctx.set_gpr(5, 2228u << 16u);
    ctx.set_gpr(5, ctx.gpr[5] + static_cast<std::uint32_t>(25812));
    ctx.set_gpr(6, 2228u << 16u);
    ctx.set_gpr(6, ctx.gpr[6] + static_cast<std::uint32_t>(25844));
    ctx.set_gpr(7, 0u + static_cast<std::uint32_t>(8));
    ctx.set_gpr(31, 0x0898B930u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0079_entry, 79u, 432u, 0x08941E90u>(ctx, &aot_mem) && ctx.pc == 0x0898B930u) goto L_0898B930;
    return;
L_0898B930:
    ctx.set_gpr(3, 2245u << 16u);
    rt.memory().aot_store32(ctx.gpr[3] + static_cast<std::uint32_t>(32384), ctx.gpr[2]);
    goto L_0898B938;
L_0898B938:
    ctx.set_gpr(2, 2245u << 16u);
    ctx.set_gpr(2, rt.memory().aot_load32(ctx.gpr[2] + static_cast<std::uint32_t>(32384)));
    ctx.set_gpr(31, rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(12)));
    ctx.set_gpr(29, ctx.gpr[29] + static_cast<std::uint32_t>(16));
    jump_target = ctx.gpr[31];
    // nop
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_0898B950:
    ctx.set_gpr(29, ctx.gpr[29] + static_cast<std::uint32_t>(-16));
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(12), ctx.gpr[31]);
    ctx.set_gpr(2, 2245u << 16u);
    ctx.set_gpr(2, rt.memory().aot_load32(ctx.gpr[2] + static_cast<std::uint32_t>(32388)));
    { const bool branch_taken = ctx.gpr[2] != 0u;
    // nop
      if (branch_taken) {
          goto L_0898B994;
      }
      goto L_0898B968;
    }
L_0898B968:
    ctx.set_gpr(4, 2228u << 16u);
    ctx.set_gpr(4, ctx.gpr[4] + static_cast<std::uint32_t>(26232));
    ctx.set_gpr(5, 2228u << 16u);
    ctx.set_gpr(5, ctx.gpr[5] + static_cast<std::uint32_t>(26168));
    ctx.set_gpr(6, 2228u << 16u);
    ctx.set_gpr(6, ctx.gpr[6] + static_cast<std::uint32_t>(26200));
    ctx.set_gpr(7, 0u + static_cast<std::uint32_t>(8));
    ctx.set_gpr(31, 0x0898B98Cu);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0079_entry, 79u, 432u, 0x08941E90u>(ctx, &aot_mem) && ctx.pc == 0x0898B98Cu) goto L_0898B98C;
    return;
L_0898B98C:
    ctx.set_gpr(3, 2245u << 16u);
    rt.memory().aot_store32(ctx.gpr[3] + static_cast<std::uint32_t>(32388), ctx.gpr[2]);
    goto L_0898B994;
L_0898B994:
    ctx.set_gpr(2, 2245u << 16u);
    ctx.set_gpr(2, rt.memory().aot_load32(ctx.gpr[2] + static_cast<std::uint32_t>(32388)));
    ctx.set_gpr(31, rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(12)));
    ctx.set_gpr(29, ctx.gpr[29] + static_cast<std::uint32_t>(16));
    jump_target = ctx.gpr[31];
    // nop
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_0898B9AC:
    ctx.set_gpr(29, ctx.gpr[29] + static_cast<std::uint32_t>(-16));
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(12), ctx.gpr[31]);
    ctx.set_gpr(2, 2245u << 16u);
    ctx.set_gpr(2, rt.memory().aot_load32(ctx.gpr[2] + static_cast<std::uint32_t>(32392)));
    { const bool branch_taken = ctx.gpr[2] != 0u;
    // nop
      if (branch_taken) {
          goto L_0898B9F0;
      }
      goto L_0898B9C4;
    }
L_0898B9C4:
    ctx.set_gpr(4, 2228u << 16u);
    ctx.set_gpr(4, ctx.gpr[4] + static_cast<std::uint32_t>(26344));
    ctx.set_gpr(5, 2228u << 16u);
    ctx.set_gpr(5, ctx.gpr[5] + static_cast<std::uint32_t>(26328));
    ctx.set_gpr(6, 2228u << 16u);
    ctx.set_gpr(6, ctx.gpr[6] + static_cast<std::uint32_t>(26336));
    ctx.set_gpr(7, 0u + static_cast<std::uint32_t>(2));
    ctx.set_gpr(31, 0x0898B9E8u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0079_entry, 79u, 432u, 0x08941E90u>(ctx, &aot_mem) && ctx.pc == 0x0898B9E8u) goto L_0898B9E8;
    return;
L_0898B9E8:
    ctx.set_gpr(3, 2245u << 16u);
    rt.memory().aot_store32(ctx.gpr[3] + static_cast<std::uint32_t>(32392), ctx.gpr[2]);
    goto L_0898B9F0;
L_0898B9F0:
    ctx.set_gpr(2, 2245u << 16u);
    ctx.set_gpr(2, rt.memory().aot_load32(ctx.gpr[2] + static_cast<std::uint32_t>(32392)));
    ctx.set_gpr(31, rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(12)));
    ctx.set_gpr(29, ctx.gpr[29] + static_cast<std::uint32_t>(16));
    jump_target = ctx.gpr[31];
    // nop
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_0898BA08:
    ctx.set_gpr(29, ctx.gpr[29] + static_cast<std::uint32_t>(-16));
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(12), ctx.gpr[31]);
    ctx.set_gpr(2, 2245u << 16u);
    ctx.set_gpr(2, rt.memory().aot_load32(ctx.gpr[2] + static_cast<std::uint32_t>(32396)));
    { const bool branch_taken = ctx.gpr[2] != 0u;
    // nop
      if (branch_taken) {
          goto L_0898BA4C;
      }
      goto L_0898BA20;
    }
L_0898BA20:
    ctx.set_gpr(4, 2228u << 16u);
    ctx.set_gpr(4, ctx.gpr[4] + static_cast<std::uint32_t>(26644));
    ctx.set_gpr(5, 2228u << 16u);
    ctx.set_gpr(5, ctx.gpr[5] + static_cast<std::uint32_t>(26564));
    ctx.set_gpr(6, 2228u << 16u);
    ctx.set_gpr(6, ctx.gpr[6] + static_cast<std::uint32_t>(26604));
    ctx.set_gpr(7, 0u + static_cast<std::uint32_t>(10));
    ctx.set_gpr(31, 0x0898BA44u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0079_entry, 79u, 432u, 0x08941E90u>(ctx, &aot_mem) && ctx.pc == 0x0898BA44u) goto L_0898BA44;
    return;
L_0898BA44:
    ctx.set_gpr(3, 2245u << 16u);
    rt.memory().aot_store32(ctx.gpr[3] + static_cast<std::uint32_t>(32396), ctx.gpr[2]);
    goto L_0898BA4C;
L_0898BA4C:
    ctx.set_gpr(2, 2245u << 16u);
    ctx.set_gpr(2, rt.memory().aot_load32(ctx.gpr[2] + static_cast<std::uint32_t>(32396)));
    ctx.set_gpr(31, rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(12)));
    ctx.set_gpr(29, ctx.gpr[29] + static_cast<std::uint32_t>(16));
    jump_target = ctx.gpr[31];
    // nop
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_0898BA64:
    ctx.set_gpr(29, ctx.gpr[29] + static_cast<std::uint32_t>(-16));
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(12), ctx.gpr[31]);
    ctx.set_gpr(2, 2245u << 16u);
    ctx.set_gpr(2, rt.memory().aot_load32(ctx.gpr[2] + static_cast<std::uint32_t>(32400)));
    { const bool branch_taken = ctx.gpr[2] != 0u;
    // nop
      if (branch_taken) {
          goto L_0898BAA8;
      }
      goto L_0898BA7C;
    }
L_0898BA7C:
    ctx.set_gpr(4, 2228u << 16u);
    ctx.set_gpr(4, ctx.gpr[4] + static_cast<std::uint32_t>(26772));
    ctx.set_gpr(5, 2228u << 16u);
    ctx.set_gpr(5, ctx.gpr[5] + static_cast<std::uint32_t>(26748));
    ctx.set_gpr(6, 2228u << 16u);
    ctx.set_gpr(6, ctx.gpr[6] + static_cast<std::uint32_t>(26760));
    ctx.set_gpr(7, 0u + static_cast<std::uint32_t>(3));
    ctx.set_gpr(31, 0x0898BAA0u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0079_entry, 79u, 432u, 0x08941E90u>(ctx, &aot_mem) && ctx.pc == 0x0898BAA0u) goto L_0898BAA0;
    return;
L_0898BAA0:
    ctx.set_gpr(3, 2245u << 16u);
    rt.memory().aot_store32(ctx.gpr[3] + static_cast<std::uint32_t>(32400), ctx.gpr[2]);
    goto L_0898BAA8;
L_0898BAA8:
    ctx.set_gpr(2, 2245u << 16u);
    ctx.set_gpr(2, rt.memory().aot_load32(ctx.gpr[2] + static_cast<std::uint32_t>(32400)));
    ctx.set_gpr(31, rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(12)));
    ctx.set_gpr(29, ctx.gpr[29] + static_cast<std::uint32_t>(16));
    jump_target = ctx.gpr[31];
    // nop
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_0898BAC0:
    ctx.set_gpr(29, ctx.gpr[29] + static_cast<std::uint32_t>(-16));
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(12), ctx.gpr[31]);
    ctx.set_gpr(2, 2245u << 16u);
    ctx.set_gpr(2, rt.memory().aot_load32(ctx.gpr[2] + static_cast<std::uint32_t>(32404)));
    { const bool branch_taken = ctx.gpr[2] != 0u;
    // nop
      if (branch_taken) {
          goto L_0898BB04;
      }
      goto L_0898BAD8;
    }
L_0898BAD8:
    ctx.set_gpr(4, 2228u << 16u);
    ctx.set_gpr(4, ctx.gpr[4] + static_cast<std::uint32_t>(26900));
    ctx.set_gpr(5, 2228u << 16u);
    ctx.set_gpr(5, ctx.gpr[5] + static_cast<std::uint32_t>(26876));
    ctx.set_gpr(6, 2228u << 16u);
    ctx.set_gpr(6, ctx.gpr[6] + static_cast<std::uint32_t>(26888));
    ctx.set_gpr(7, 0u + static_cast<std::uint32_t>(3));
    ctx.set_gpr(31, 0x0898BAFCu);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0079_entry, 79u, 432u, 0x08941E90u>(ctx, &aot_mem) && ctx.pc == 0x0898BAFCu) goto L_0898BAFC;
    return;
L_0898BAFC:
    ctx.set_gpr(3, 2245u << 16u);
    rt.memory().aot_store32(ctx.gpr[3] + static_cast<std::uint32_t>(32404), ctx.gpr[2]);
    goto L_0898BB04;
L_0898BB04:
    ctx.set_gpr(2, 2245u << 16u);
    ctx.set_gpr(2, rt.memory().aot_load32(ctx.gpr[2] + static_cast<std::uint32_t>(32404)));
    ctx.set_gpr(31, rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(12)));
    ctx.set_gpr(29, ctx.gpr[29] + static_cast<std::uint32_t>(16));
    jump_target = ctx.gpr[31];
    // nop
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_0898BB1C:
    ctx.set_gpr(29, ctx.gpr[29] + static_cast<std::uint32_t>(-16));
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(12), ctx.gpr[31]);
    ctx.set_gpr(2, 2245u << 16u);
    ctx.set_gpr(2, rt.memory().aot_load32(ctx.gpr[2] + static_cast<std::uint32_t>(32408)));
    { const bool branch_taken = ctx.gpr[2] != 0u;
    // nop
      if (branch_taken) {
          goto L_0898BB60;
      }
      goto L_0898BB34;
    }
L_0898BB34:
    ctx.set_gpr(4, 2228u << 16u);
    ctx.set_gpr(4, ctx.gpr[4] + static_cast<std::uint32_t>(27012));
    ctx.set_gpr(5, 2228u << 16u);
    ctx.set_gpr(5, ctx.gpr[5] + static_cast<std::uint32_t>(26996));
    ctx.set_gpr(6, 2228u << 16u);
    ctx.set_gpr(6, ctx.gpr[6] + static_cast<std::uint32_t>(27004));
    ctx.set_gpr(7, 0u + static_cast<std::uint32_t>(2));
    ctx.set_gpr(31, 0x0898BB58u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0079_entry, 79u, 432u, 0x08941E90u>(ctx, &aot_mem) && ctx.pc == 0x0898BB58u) goto L_0898BB58;
    return;
L_0898BB58:
    ctx.set_gpr(3, 2245u << 16u);
    rt.memory().aot_store32(ctx.gpr[3] + static_cast<std::uint32_t>(32408), ctx.gpr[2]);
    goto L_0898BB60;
L_0898BB60:
    ctx.set_gpr(2, 2245u << 16u);
    ctx.set_gpr(2, rt.memory().aot_load32(ctx.gpr[2] + static_cast<std::uint32_t>(32408)));
    ctx.set_gpr(31, rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(12)));
    ctx.set_gpr(29, ctx.gpr[29] + static_cast<std::uint32_t>(16));
    jump_target = ctx.gpr[31];
    // nop
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_0898BB78:
    ctx.set_gpr(29, ctx.gpr[29] + static_cast<std::uint32_t>(-16));
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(12), ctx.gpr[31]);
    ctx.set_gpr(2, 2245u << 16u);
    ctx.set_gpr(2, rt.memory().aot_load32(ctx.gpr[2] + static_cast<std::uint32_t>(32412)));
    { const bool branch_taken = ctx.gpr[2] != 0u;
    // nop
      if (branch_taken) {
          goto L_0898BBBC;
      }
      goto L_0898BB90;
    }
L_0898BB90:
    ctx.set_gpr(4, 2228u << 16u);
    ctx.set_gpr(4, ctx.gpr[4] + static_cast<std::uint32_t>(27276));
    ctx.set_gpr(5, 2228u << 16u);
    ctx.set_gpr(5, ctx.gpr[5] + static_cast<std::uint32_t>(27228));
    ctx.set_gpr(6, 2228u << 16u);
    ctx.set_gpr(6, ctx.gpr[6] + static_cast<std::uint32_t>(27252));
    ctx.set_gpr(7, 0u + static_cast<std::uint32_t>(6));
    ctx.set_gpr(31, 0x0898BBB4u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0079_entry, 79u, 432u, 0x08941E90u>(ctx, &aot_mem) && ctx.pc == 0x0898BBB4u) goto L_0898BBB4;
    return;
L_0898BBB4:
    ctx.set_gpr(3, 2245u << 16u);
    rt.memory().aot_store32(ctx.gpr[3] + static_cast<std::uint32_t>(32412), ctx.gpr[2]);
    goto L_0898BBBC;
L_0898BBBC:
    ctx.set_gpr(2, 2245u << 16u);
    ctx.set_gpr(2, rt.memory().aot_load32(ctx.gpr[2] + static_cast<std::uint32_t>(32412)));
    ctx.set_gpr(31, rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(12)));
    ctx.set_gpr(29, ctx.gpr[29] + static_cast<std::uint32_t>(16));
    jump_target = ctx.gpr[31];
    // nop
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_0898BBD4:
    ctx.set_gpr(29, ctx.gpr[29] + static_cast<std::uint32_t>(-16));
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(12), ctx.gpr[31]);
    ctx.set_gpr(2, 2245u << 16u);
    ctx.set_gpr(2, rt.memory().aot_load32(ctx.gpr[2] + static_cast<std::uint32_t>(32416)));
    { const bool branch_taken = ctx.gpr[2] == 0u;
    // nop
      if (branch_taken) {
          goto L_0898BC00;
      }
      goto L_0898BBEC;
    }
L_0898BBEC:
    ctx.set_gpr(2, rt.memory().aot_load32(ctx.gpr[2] + static_cast<std::uint32_t>(36)));
    ctx.set_gpr(2, ctx.gpr[2] & 4u);
    ctx.set_gpr(2, 0u < ctx.gpr[2] ? 1u : 0u);
    { const bool branch_taken = ctx.gpr[2] != 0u;
    // nop
      if (branch_taken) {
          goto L_0898BC08;
      }
      goto L_0898BC00;
    }
L_0898BC00:
    ctx.set_gpr(31, 0x0898BC08u);
    // nop
    goto L_0898BC64;
L_0898BC08:
    ctx.set_gpr(2, 2245u << 16u);
    ctx.set_gpr(2, rt.memory().aot_load32(ctx.gpr[2] + static_cast<std::uint32_t>(32416)));
    ctx.set_gpr(31, rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(12)));
    ctx.set_gpr(29, ctx.gpr[29] + static_cast<std::uint32_t>(16));
    jump_target = ctx.gpr[31];
    // nop
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_0898BC20:
    ctx.set_gpr(29, ctx.gpr[29] + static_cast<std::uint32_t>(-32));
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(12), ctx.gpr[31]);
    ctx.set_gpr(4, ctx.gpr[29] + static_cast<std::uint32_t>(24));
    ctx.set_gpr(31, 0x0898BC34u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0080_entry, 80u, 398u, 0x08945BF8u>(ctx, &aot_mem) && ctx.pc == 0x0898BC34u) goto L_0898BC34;
    return;
L_0898BC34:
    ctx.set_gpr(2, 2232u << 16u);
    ctx.set_gpr(2, ctx.gpr[2] + static_cast<std::uint32_t>(25072));
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(24), ctx.gpr[2]);
    ctx.set_gpr(31, 0x0898BC48u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0064_entry, 64u, 444u, 0x08905FF0u>(ctx, &aot_mem) && ctx.pc == 0x0898BC48u) goto L_0898BC48;
    return;
L_0898BC48:
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
L_0898BC64:
    ctx.set_gpr(29, ctx.gpr[29] + static_cast<std::uint32_t>(-16));
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(12), ctx.gpr[31]);
    ctx.set_gpr(4, 2201u << 16u);
    ctx.set_gpr(4, ctx.gpr[4] + static_cast<std::uint32_t>(-17268));
    ctx.set_gpr(31, 0x0898BC7Cu);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0080_entry, 80u, 286u, 0x08945508u>(ctx, &aot_mem) && ctx.pc == 0x0898BC7Cu) goto L_0898BC7C;
    return;
L_0898BC7C:
    ctx.set_gpr(31, rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(12)));
    ctx.set_gpr(29, ctx.gpr[29] + static_cast<std::uint32_t>(16));
    jump_target = ctx.gpr[31];
    // nop
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_0898BC8C:
    ctx.set_gpr(29, ctx.gpr[29] + static_cast<std::uint32_t>(-32));
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(28), ctx.gpr[31]);
    ctx.set_gpr(31, 0x0898BC9Cu);
    // nop
    goto L_0898ABD8;
L_0898BC9C:
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(0), 0u);
    ctx.set_gpr(2, 2201u << 16u);
    ctx.set_gpr(2, ctx.gpr[2] + static_cast<std::uint32_t>(-17104));
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(4), ctx.gpr[2]);
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(8), 0u);
    ctx.set_gpr(4, 0u + 0u);
    ctx.set_gpr(5, 2245u << 16u);
    ctx.set_gpr(5, ctx.gpr[5] + static_cast<std::uint32_t>(32416));
    ctx.set_gpr(6, 2202u << 16u);
    ctx.set_gpr(6, ctx.gpr[6] + static_cast<std::uint32_t>(-26836));
    ctx.set_gpr(7, 2201u << 16u);
    ctx.set_gpr(7, ctx.gpr[7] + static_cast<std::uint32_t>(-17120));
    ctx.set_gpr(8, 2201u << 16u);
    ctx.set_gpr(8, ctx.gpr[8] + static_cast<std::uint32_t>(-17152));
    ctx.set_gpr(9, 2228u << 16u);
    ctx.set_gpr(9, ctx.gpr[9] + static_cast<std::uint32_t>(27300));
    ctx.set_gpr(10, 0u + static_cast<std::uint32_t>(8));
    ctx.set_gpr(11, 2201u << 16u);
    ctx.set_gpr(11, ctx.gpr[11] + static_cast<std::uint32_t>(-17376));
    ctx.set_gpr(31, 0x0898BCF0u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0080_entry, 80u, 294u, 0x08945594u>(ctx, &aot_mem) && ctx.pc == 0x0898BCF0u) goto L_0898BCF0;
    return;
L_0898BCF0:
    ctx.set_gpr(31, rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(28)));
    ctx.set_gpr(29, ctx.gpr[29] + static_cast<std::uint32_t>(32));
    jump_target = ctx.gpr[31];
    // nop
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_0898BD00:
    ctx.set_gpr(29, ctx.gpr[29] + static_cast<std::uint32_t>(-16));
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(12), ctx.gpr[31]);
    ctx.set_gpr(31, 0x0898BD10u);
    // nop
    goto L_0898BBD4;
L_0898BD10:
    ctx.set_gpr(31, rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(12)));
    ctx.set_gpr(29, ctx.gpr[29] + static_cast<std::uint32_t>(16));
    jump_target = ctx.gpr[31];
    // nop
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_0898BD20:
    ctx.set_gpr(2, 2246u << 16u);
    ctx.set_gpr(2, rt.memory().aot_load32(ctx.gpr[2] + static_cast<std::uint32_t>(-31788)));
    jump_target = ctx.gpr[31];
    // nop
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_0898BD30:
    ctx.set_gpr(29, ctx.gpr[29] + static_cast<std::uint32_t>(-16));
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(12), ctx.gpr[31]);
    ctx.set_gpr(31, 0x0898BD40u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0110_entry, 110u, 548u, 0x089BEE30u>(ctx, &aot_mem) && ctx.pc == 0x0898BD40u) goto L_0898BD40;
    return;
L_0898BD40:
    ctx.set_gpr(31, rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(12)));
    ctx.set_gpr(29, ctx.gpr[29] + static_cast<std::uint32_t>(16));
    jump_target = ctx.gpr[31];
    // nop
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_0898BD50:
    ctx.set_gpr(29, ctx.gpr[29] + static_cast<std::uint32_t>(-16));
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(12), ctx.gpr[31]);
    ctx.set_gpr(2, 2245u << 16u);
    ctx.set_gpr(2, rt.memory().aot_load32(ctx.gpr[2] + static_cast<std::uint32_t>(32420)));
    { const bool branch_taken = ctx.gpr[2] == 0u;
    // nop
      if (branch_taken) {
          goto L_0898BD7C;
      }
      goto L_0898BD68;
    }
L_0898BD68:
    ctx.set_gpr(2, rt.memory().aot_load32(ctx.gpr[2] + static_cast<std::uint32_t>(36)));
    ctx.set_gpr(2, ctx.gpr[2] & 4u);
    ctx.set_gpr(2, 0u < ctx.gpr[2] ? 1u : 0u);
    { const bool branch_taken = ctx.gpr[2] != 0u;
    // nop
      if (branch_taken) {
          goto L_0898BD84;
      }
      goto L_0898BD7C;
    }
L_0898BD7C:
    ctx.set_gpr(31, 0x0898BD84u);
    // nop
    goto L_0898BDE0;
L_0898BD84:
    ctx.set_gpr(2, 2245u << 16u);
    ctx.set_gpr(2, rt.memory().aot_load32(ctx.gpr[2] + static_cast<std::uint32_t>(32420)));
    ctx.set_gpr(31, rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(12)));
    ctx.set_gpr(29, ctx.gpr[29] + static_cast<std::uint32_t>(16));
    jump_target = ctx.gpr[31];
    // nop
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_0898BD9C:
    ctx.set_gpr(29, ctx.gpr[29] + static_cast<std::uint32_t>(-32));
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(12), ctx.gpr[31]);
    ctx.set_gpr(4, ctx.gpr[29] + static_cast<std::uint32_t>(24));
    ctx.set_gpr(31, 0x0898BDB0u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0080_entry, 80u, 398u, 0x08945BF8u>(ctx, &aot_mem) && ctx.pc == 0x0898BDB0u) goto L_0898BDB0;
    return;
L_0898BDB0:
    ctx.set_gpr(2, 2232u << 16u);
    ctx.set_gpr(2, ctx.gpr[2] + static_cast<std::uint32_t>(25172));
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(24), ctx.gpr[2]);
    ctx.set_gpr(31, 0x0898BDC4u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0064_entry, 64u, 444u, 0x08905FF0u>(ctx, &aot_mem) && ctx.pc == 0x0898BDC4u) goto L_0898BDC4;
    return;
L_0898BDC4:
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
L_0898BDE0:
    ctx.set_gpr(29, ctx.gpr[29] + static_cast<std::uint32_t>(-16));
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(12), ctx.gpr[31]);
    ctx.set_gpr(4, 2201u << 16u);
    ctx.set_gpr(4, ctx.gpr[4] + static_cast<std::uint32_t>(-16888));
    ctx.set_gpr(31, 0x0898BDF8u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0080_entry, 80u, 286u, 0x08945508u>(ctx, &aot_mem) && ctx.pc == 0x0898BDF8u) goto L_0898BDF8;
    return;
L_0898BDF8:
    ctx.set_gpr(31, rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(12)));
    ctx.set_gpr(29, ctx.gpr[29] + static_cast<std::uint32_t>(16));
    jump_target = ctx.gpr[31];
    // nop
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_0898BE08:
    ctx.set_gpr(29, ctx.gpr[29] + static_cast<std::uint32_t>(-32));
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(28), ctx.gpr[31]);
    ctx.set_gpr(31, 0x0898BE18u);
    // nop
    goto L_0898ABD8;
L_0898BE18:
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(0), 0u);
    ctx.set_gpr(2, 2201u << 16u);
    ctx.set_gpr(2, ctx.gpr[2] + static_cast<std::uint32_t>(-16740));
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(4), ctx.gpr[2]);
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(8), 0u);
    ctx.set_gpr(4, 0u + 0u);
    ctx.set_gpr(5, 2245u << 16u);
    ctx.set_gpr(5, ctx.gpr[5] + static_cast<std::uint32_t>(32420));
    ctx.set_gpr(6, 2196u << 16u);
    ctx.set_gpr(6, ctx.gpr[6] + static_cast<std::uint32_t>(25520));
    ctx.set_gpr(7, 2188u << 16u);
    ctx.set_gpr(7, ctx.gpr[7] + static_cast<std::uint32_t>(-27092));
    ctx.set_gpr(8, 2201u << 16u);
    ctx.set_gpr(8, ctx.gpr[8] + static_cast<std::uint32_t>(-16772));
    ctx.set_gpr(9, 2228u << 16u);
    ctx.set_gpr(9, ctx.gpr[9] + static_cast<std::uint32_t>(27328));
    ctx.set_gpr(10, 0u + static_cast<std::uint32_t>(8));
    ctx.set_gpr(11, 2201u << 16u);
    ctx.set_gpr(11, ctx.gpr[11] + static_cast<std::uint32_t>(-16996));
    ctx.set_gpr(31, 0x0898BE6Cu);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0080_entry, 80u, 294u, 0x08945594u>(ctx, &aot_mem) && ctx.pc == 0x0898BE6Cu) goto L_0898BE6C;
    return;
L_0898BE6C:
    ctx.set_gpr(31, rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(28)));
    ctx.set_gpr(29, ctx.gpr[29] + static_cast<std::uint32_t>(32));
    jump_target = ctx.gpr[31];
    // nop
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_0898BE7C:
    ctx.set_gpr(29, ctx.gpr[29] + static_cast<std::uint32_t>(-16));
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(12), ctx.gpr[31]);
    ctx.set_gpr(31, 0x0898BE8Cu);
    // nop
    goto L_0898BD50;
L_0898BE8C:
    ctx.set_gpr(31, rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(12)));
    ctx.set_gpr(29, ctx.gpr[29] + static_cast<std::uint32_t>(16));
    jump_target = ctx.gpr[31];
    // nop
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_0898BE9C:
    ctx.set_gpr(29, ctx.gpr[29] + static_cast<std::uint32_t>(-16));
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(12), ctx.gpr[31]);
    ctx.set_gpr(31, 0x0898BEACu);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0110_entry, 110u, 544u, 0x089BEDD4u>(ctx, &aot_mem) && ctx.pc == 0x0898BEACu) goto L_0898BEAC;
    return;
L_0898BEAC:
    ctx.set_gpr(31, rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(12)));
    ctx.set_gpr(29, ctx.gpr[29] + static_cast<std::uint32_t>(16));
    jump_target = ctx.gpr[31];
    // nop
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_0898BEBC:
    ctx.set_gpr(29, ctx.gpr[29] + static_cast<std::uint32_t>(-16));
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(12), ctx.gpr[31]);
    ctx.set_gpr(2, 2245u << 16u);
    ctx.set_gpr(2, rt.memory().aot_load32(ctx.gpr[2] + static_cast<std::uint32_t>(32424)));
    { const bool branch_taken = ctx.gpr[2] == 0u;
    // nop
      if (branch_taken) {
          goto L_0898BEE8;
      }
      goto L_0898BED4;
    }
L_0898BED4:
    ctx.set_gpr(2, rt.memory().aot_load32(ctx.gpr[2] + static_cast<std::uint32_t>(36)));
    ctx.set_gpr(2, ctx.gpr[2] & 4u);
    ctx.set_gpr(2, 0u < ctx.gpr[2] ? 1u : 0u);
    { const bool branch_taken = ctx.gpr[2] != 0u;
    // nop
      if (branch_taken) {
          goto L_0898BEF0;
      }
      goto L_0898BEE8;
    }
L_0898BEE8:
    ctx.set_gpr(31, 0x0898BEF0u);
    // nop
    goto L_0898BF4C;
L_0898BEF0:
    ctx.set_gpr(2, 2245u << 16u);
    ctx.set_gpr(2, rt.memory().aot_load32(ctx.gpr[2] + static_cast<std::uint32_t>(32424)));
    ctx.set_gpr(31, rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(12)));
    ctx.set_gpr(29, ctx.gpr[29] + static_cast<std::uint32_t>(16));
    jump_target = ctx.gpr[31];
    // nop
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_0898BF08:
    ctx.set_gpr(29, ctx.gpr[29] + static_cast<std::uint32_t>(-32));
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(12), ctx.gpr[31]);
    ctx.set_gpr(4, ctx.gpr[29] + static_cast<std::uint32_t>(24));
    ctx.set_gpr(31, 0x0898BF1Cu);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0080_entry, 80u, 398u, 0x08945BF8u>(ctx, &aot_mem) && ctx.pc == 0x0898BF1Cu) goto L_0898BF1C;
    return;
L_0898BF1C:
    ctx.set_gpr(2, 2232u << 16u);
    ctx.set_gpr(2, ctx.gpr[2] + static_cast<std::uint32_t>(25268));
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(24), ctx.gpr[2]);
    ctx.set_gpr(31, 0x0898BF30u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0064_entry, 64u, 444u, 0x08905FF0u>(ctx, &aot_mem) && ctx.pc == 0x0898BF30u) goto L_0898BF30;
    return;
L_0898BF30:
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
L_0898BF4C:
    ctx.set_gpr(29, ctx.gpr[29] + static_cast<std::uint32_t>(-16));
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(12), ctx.gpr[31]);
    ctx.set_gpr(4, 2201u << 16u);
    ctx.set_gpr(4, ctx.gpr[4] + static_cast<std::uint32_t>(-16524));
    ctx.set_gpr(31, 0x0898BF64u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0080_entry, 80u, 286u, 0x08945508u>(ctx, &aot_mem) && ctx.pc == 0x0898BF64u) goto L_0898BF64;
    return;
L_0898BF64:
    ctx.set_gpr(31, rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(12)));
    ctx.set_gpr(29, ctx.gpr[29] + static_cast<std::uint32_t>(16));
    jump_target = ctx.gpr[31];
    // nop
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_0898BF74:
    ctx.set_gpr(29, ctx.gpr[29] + static_cast<std::uint32_t>(-32));
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(28), ctx.gpr[31]);
    ctx.set_gpr(31, 0x0898BF84u);
    // nop
    goto L_0898ABD8;
L_0898BF84:
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(0), 0u);
    ctx.set_gpr(2, 2201u << 16u);
    ctx.set_gpr(2, ctx.gpr[2] + static_cast<std::uint32_t>(-16376));
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(4), ctx.gpr[2]);
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(8), 0u);
    ctx.set_gpr(4, 0u + 0u);
    ctx.set_gpr(5, 2245u << 16u);
    ctx.set_gpr(5, ctx.gpr[5] + static_cast<std::uint32_t>(32424));
    ctx.set_gpr(6, 2196u << 16u);
    ctx.set_gpr(6, ctx.gpr[6] + static_cast<std::uint32_t>(25520));
    ctx.set_gpr(7, 2188u << 16u);
    ctx.set_gpr(7, ctx.gpr[7] + static_cast<std::uint32_t>(-27092));
    ctx.set_gpr(8, 2201u << 16u);
    ctx.set_gpr(8, ctx.gpr[8] + static_cast<std::uint32_t>(-16408));
    ctx.set_gpr(9, 2228u << 16u);
    ctx.set_gpr(9, ctx.gpr[9] + static_cast<std::uint32_t>(27352));
    ctx.set_gpr(10, 0u + static_cast<std::uint32_t>(8));
    ctx.set_gpr(11, 2201u << 16u);
    ctx.set_gpr(11, ctx.gpr[11] + static_cast<std::uint32_t>(-16632));
    ctx.set_gpr(31, 0x0898BFD8u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0080_entry, 80u, 294u, 0x08945594u>(ctx, &aot_mem) && ctx.pc == 0x0898BFD8u) goto L_0898BFD8;
    return;
L_0898BFD8:
    ctx.set_gpr(31, rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(28)));
    ctx.set_gpr(29, ctx.gpr[29] + static_cast<std::uint32_t>(32));
    jump_target = ctx.gpr[31];
    // nop
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_0898BFE8:
    ctx.set_gpr(29, ctx.gpr[29] + static_cast<std::uint32_t>(-16));
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(12), ctx.gpr[31]);
    ctx.set_gpr(31, 0x0898BFF8u);
    // nop
    goto L_0898BEBC;
L_0898BFF8:
    ctx.set_gpr(31, rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(12)));
    ctx.set_gpr(29, ctx.gpr[29] + static_cast<std::uint32_t>(16));
    ctx.pc = 0x0898C000u; return;
}

void recomp_unit_0097(Runtime &rt, AllegrexContext &ctx) {
    auto aot_mem = rt.memory().aot_fast_view();
    recomp_unit_0097_entry(rt, ctx, 0u, aot_mem);
}

void register_generated_unit_97(Runtime &runtime) {
    runtime.register_generated_unit(97u, 0x08988000u, 16384u, &recomp_unit_0097, &recomp_unit_0097_entry);
    runtime.register_function(0x08988004u, &recomp_unit_0097, "recomp_unit_0097");
    runtime.register_function(0x08988010u, &recomp_unit_0097, "recomp_unit_0097");
    runtime.register_function(0x08988018u, &recomp_unit_0097, "recomp_unit_0097");
    runtime.register_function(0x08988030u, &recomp_unit_0097, "recomp_unit_0097");
    runtime.register_function(0x08988048u, &recomp_unit_0097, "recomp_unit_0097");
    runtime.register_function(0x0898805Cu, &recomp_unit_0097, "recomp_unit_0097");
    runtime.register_function(0x08988064u, &recomp_unit_0097, "recomp_unit_0097");
    runtime.register_function(0x0898807Cu, &recomp_unit_0097, "recomp_unit_0097");
    runtime.register_function(0x08988094u, &recomp_unit_0097, "recomp_unit_0097");
    runtime.register_function(0x089880A4u, &recomp_unit_0097, "recomp_unit_0097");
    runtime.register_function(0x089880B4u, &recomp_unit_0097, "recomp_unit_0097");
    runtime.register_function(0x08988104u, &recomp_unit_0097, "recomp_unit_0097");
    runtime.register_function(0x08988114u, &recomp_unit_0097, "recomp_unit_0097");
    runtime.register_function(0x08988124u, &recomp_unit_0097, "recomp_unit_0097");
    runtime.register_function(0x08988134u, &recomp_unit_0097, "recomp_unit_0097");
    runtime.register_function(0x08988144u, &recomp_unit_0097, "recomp_unit_0097");
    runtime.register_function(0x08988160u, &recomp_unit_0097, "recomp_unit_0097");
    runtime.register_function(0x08988170u, &recomp_unit_0097, "recomp_unit_0097");
    runtime.register_function(0x08988180u, &recomp_unit_0097, "recomp_unit_0097");
    runtime.register_function(0x08988198u, &recomp_unit_0097, "recomp_unit_0097");
    runtime.register_function(0x089881A0u, &recomp_unit_0097, "recomp_unit_0097");
    runtime.register_function(0x089881ACu, &recomp_unit_0097, "recomp_unit_0097");
    runtime.register_function(0x089881B8u, &recomp_unit_0097, "recomp_unit_0097");
    runtime.register_function(0x089881C0u, &recomp_unit_0097, "recomp_unit_0097");
    runtime.register_function(0x089881D8u, &recomp_unit_0097, "recomp_unit_0097");
    runtime.register_function(0x089881F0u, &recomp_unit_0097, "recomp_unit_0097");
    runtime.register_function(0x08988204u, &recomp_unit_0097, "recomp_unit_0097");
    runtime.register_function(0x0898820Cu, &recomp_unit_0097, "recomp_unit_0097");
    runtime.register_function(0x08988224u, &recomp_unit_0097, "recomp_unit_0097");
    runtime.register_function(0x08988238u, &recomp_unit_0097, "recomp_unit_0097");
    runtime.register_function(0x0898824Cu, &recomp_unit_0097, "recomp_unit_0097");
    runtime.register_function(0x08988268u, &recomp_unit_0097, "recomp_unit_0097");
    runtime.register_function(0x08988280u, &recomp_unit_0097, "recomp_unit_0097");
    runtime.register_function(0x08988290u, &recomp_unit_0097, "recomp_unit_0097");
    runtime.register_function(0x089882A0u, &recomp_unit_0097, "recomp_unit_0097");
    runtime.register_function(0x089882F4u, &recomp_unit_0097, "recomp_unit_0097");
    runtime.register_function(0x08988304u, &recomp_unit_0097, "recomp_unit_0097");
    runtime.register_function(0x08988314u, &recomp_unit_0097, "recomp_unit_0097");
    runtime.register_function(0x08988324u, &recomp_unit_0097, "recomp_unit_0097");
    runtime.register_function(0x0898833Cu, &recomp_unit_0097, "recomp_unit_0097");
    runtime.register_function(0x08988350u, &recomp_unit_0097, "recomp_unit_0097");
    runtime.register_function(0x08988358u, &recomp_unit_0097, "recomp_unit_0097");
    runtime.register_function(0x08988370u, &recomp_unit_0097, "recomp_unit_0097");
    runtime.register_function(0x08988388u, &recomp_unit_0097, "recomp_unit_0097");
    runtime.register_function(0x08988398u, &recomp_unit_0097, "recomp_unit_0097");
    runtime.register_function(0x089883A8u, &recomp_unit_0097, "recomp_unit_0097");
    runtime.register_function(0x08988408u, &recomp_unit_0097, "recomp_unit_0097");
    runtime.register_function(0x08988418u, &recomp_unit_0097, "recomp_unit_0097");
    runtime.register_function(0x08988428u, &recomp_unit_0097, "recomp_unit_0097");
    runtime.register_function(0x08988438u, &recomp_unit_0097, "recomp_unit_0097");
    runtime.register_function(0x08988460u, &recomp_unit_0097, "recomp_unit_0097");
    runtime.register_function(0x0898847Cu, &recomp_unit_0097, "recomp_unit_0097");
    runtime.register_function(0x0898848Cu, &recomp_unit_0097, "recomp_unit_0097");
    runtime.register_function(0x08988498u, &recomp_unit_0097, "recomp_unit_0097");
    runtime.register_function(0x089884CCu, &recomp_unit_0097, "recomp_unit_0097");
    runtime.register_function(0x089884F0u, &recomp_unit_0097, "recomp_unit_0097");
    runtime.register_function(0x0898850Cu, &recomp_unit_0097, "recomp_unit_0097");
    runtime.register_function(0x0898851Cu, &recomp_unit_0097, "recomp_unit_0097");
    runtime.register_function(0x0898852Cu, &recomp_unit_0097, "recomp_unit_0097");
    runtime.register_function(0x0898853Cu, &recomp_unit_0097, "recomp_unit_0097");
    runtime.register_function(0x0898854Cu, &recomp_unit_0097, "recomp_unit_0097");
    runtime.register_function(0x0898855Cu, &recomp_unit_0097, "recomp_unit_0097");
    runtime.register_function(0x0898856Cu, &recomp_unit_0097, "recomp_unit_0097");
    runtime.register_function(0x08988584u, &recomp_unit_0097, "recomp_unit_0097");
    runtime.register_function(0x08988598u, &recomp_unit_0097, "recomp_unit_0097");
    runtime.register_function(0x089885A0u, &recomp_unit_0097, "recomp_unit_0097");
    runtime.register_function(0x089885B8u, &recomp_unit_0097, "recomp_unit_0097");
    runtime.register_function(0x089885D0u, &recomp_unit_0097, "recomp_unit_0097");
    runtime.register_function(0x089885E0u, &recomp_unit_0097, "recomp_unit_0097");
    runtime.register_function(0x089885F0u, &recomp_unit_0097, "recomp_unit_0097");
    runtime.register_function(0x08988638u, &recomp_unit_0097, "recomp_unit_0097");
    runtime.register_function(0x08988648u, &recomp_unit_0097, "recomp_unit_0097");
    runtime.register_function(0x08988658u, &recomp_unit_0097, "recomp_unit_0097");
    runtime.register_function(0x08988668u, &recomp_unit_0097, "recomp_unit_0097");
    runtime.register_function(0x08988680u, &recomp_unit_0097, "recomp_unit_0097");
    runtime.register_function(0x08988688u, &recomp_unit_0097, "recomp_unit_0097");
    runtime.register_function(0x08988694u, &recomp_unit_0097, "recomp_unit_0097");
    runtime.register_function(0x089886A0u, &recomp_unit_0097, "recomp_unit_0097");
    runtime.register_function(0x089886A8u, &recomp_unit_0097, "recomp_unit_0097");
    runtime.register_function(0x089886C0u, &recomp_unit_0097, "recomp_unit_0097");
    runtime.register_function(0x089886D8u, &recomp_unit_0097, "recomp_unit_0097");
    runtime.register_function(0x089886ECu, &recomp_unit_0097, "recomp_unit_0097");
    runtime.register_function(0x089886F4u, &recomp_unit_0097, "recomp_unit_0097");
    runtime.register_function(0x0898870Cu, &recomp_unit_0097, "recomp_unit_0097");
    runtime.register_function(0x08988720u, &recomp_unit_0097, "recomp_unit_0097");
    runtime.register_function(0x08988734u, &recomp_unit_0097, "recomp_unit_0097");
    runtime.register_function(0x08988750u, &recomp_unit_0097, "recomp_unit_0097");
    runtime.register_function(0x08988768u, &recomp_unit_0097, "recomp_unit_0097");
    runtime.register_function(0x08988778u, &recomp_unit_0097, "recomp_unit_0097");
    runtime.register_function(0x08988788u, &recomp_unit_0097, "recomp_unit_0097");
    runtime.register_function(0x089887DCu, &recomp_unit_0097, "recomp_unit_0097");
    runtime.register_function(0x089887ECu, &recomp_unit_0097, "recomp_unit_0097");
    runtime.register_function(0x089887FCu, &recomp_unit_0097, "recomp_unit_0097");
    runtime.register_function(0x0898880Cu, &recomp_unit_0097, "recomp_unit_0097");
    runtime.register_function(0x0898881Cu, &recomp_unit_0097, "recomp_unit_0097");
    runtime.register_function(0x08988834u, &recomp_unit_0097, "recomp_unit_0097");
    runtime.register_function(0x08988848u, &recomp_unit_0097, "recomp_unit_0097");
    runtime.register_function(0x0898885Cu, &recomp_unit_0097, "recomp_unit_0097");
    runtime.register_function(0x08988874u, &recomp_unit_0097, "recomp_unit_0097");
    runtime.register_function(0x08988888u, &recomp_unit_0097, "recomp_unit_0097");
    runtime.register_function(0x08988890u, &recomp_unit_0097, "recomp_unit_0097");
    runtime.register_function(0x089888A8u, &recomp_unit_0097, "recomp_unit_0097");
    runtime.register_function(0x089888C0u, &recomp_unit_0097, "recomp_unit_0097");
    runtime.register_function(0x089888D8u, &recomp_unit_0097, "recomp_unit_0097");
    runtime.register_function(0x089888FCu, &recomp_unit_0097, "recomp_unit_0097");
    runtime.register_function(0x08988914u, &recomp_unit_0097, "recomp_unit_0097");
    runtime.register_function(0x0898892Cu, &recomp_unit_0097, "recomp_unit_0097");
    runtime.register_function(0x0898893Cu, &recomp_unit_0097, "recomp_unit_0097");
    runtime.register_function(0x0898894Cu, &recomp_unit_0097, "recomp_unit_0097");
    runtime.register_function(0x089889A0u, &recomp_unit_0097, "recomp_unit_0097");
    runtime.register_function(0x089889B0u, &recomp_unit_0097, "recomp_unit_0097");
    runtime.register_function(0x089889C0u, &recomp_unit_0097, "recomp_unit_0097");
    runtime.register_function(0x089889E4u, &recomp_unit_0097, "recomp_unit_0097");
    runtime.register_function(0x08988A00u, &recomp_unit_0097, "recomp_unit_0097");
    runtime.register_function(0x08988A28u, &recomp_unit_0097, "recomp_unit_0097");
    runtime.register_function(0x08988A40u, &recomp_unit_0097, "recomp_unit_0097");
    runtime.register_function(0x08988A58u, &recomp_unit_0097, "recomp_unit_0097");
    runtime.register_function(0x08988A6Cu, &recomp_unit_0097, "recomp_unit_0097");
    runtime.register_function(0x08988A80u, &recomp_unit_0097, "recomp_unit_0097");
    runtime.register_function(0x08988A98u, &recomp_unit_0097, "recomp_unit_0097");
    runtime.register_function(0x08988AACu, &recomp_unit_0097, "recomp_unit_0097");
    runtime.register_function(0x08988AB4u, &recomp_unit_0097, "recomp_unit_0097");
    runtime.register_function(0x08988ACCu, &recomp_unit_0097, "recomp_unit_0097");
    runtime.register_function(0x08988AE4u, &recomp_unit_0097, "recomp_unit_0097");
    runtime.register_function(0x08988AF4u, &recomp_unit_0097, "recomp_unit_0097");
    runtime.register_function(0x08988B04u, &recomp_unit_0097, "recomp_unit_0097");
    runtime.register_function(0x08988B5Cu, &recomp_unit_0097, "recomp_unit_0097");
    runtime.register_function(0x08988B6Cu, &recomp_unit_0097, "recomp_unit_0097");
    runtime.register_function(0x08988B7Cu, &recomp_unit_0097, "recomp_unit_0097");
    runtime.register_function(0x08988B8Cu, &recomp_unit_0097, "recomp_unit_0097");
    runtime.register_function(0x08988BB4u, &recomp_unit_0097, "recomp_unit_0097");
    runtime.register_function(0x08988BD0u, &recomp_unit_0097, "recomp_unit_0097");
    runtime.register_function(0x08988BE0u, &recomp_unit_0097, "recomp_unit_0097");
    runtime.register_function(0x08988BECu, &recomp_unit_0097, "recomp_unit_0097");
    runtime.register_function(0x08988C20u, &recomp_unit_0097, "recomp_unit_0097");
    runtime.register_function(0x08988C50u, &recomp_unit_0097, "recomp_unit_0097");
    runtime.register_function(0x08988C60u, &recomp_unit_0097, "recomp_unit_0097");
    runtime.register_function(0x08988C70u, &recomp_unit_0097, "recomp_unit_0097");
    runtime.register_function(0x08988C88u, &recomp_unit_0097, "recomp_unit_0097");
    runtime.register_function(0x08988C9Cu, &recomp_unit_0097, "recomp_unit_0097");
    runtime.register_function(0x08988CA4u, &recomp_unit_0097, "recomp_unit_0097");
    runtime.register_function(0x08988CBCu, &recomp_unit_0097, "recomp_unit_0097");
    runtime.register_function(0x08988CD4u, &recomp_unit_0097, "recomp_unit_0097");
    runtime.register_function(0x08988CE4u, &recomp_unit_0097, "recomp_unit_0097");
    runtime.register_function(0x08988CF4u, &recomp_unit_0097, "recomp_unit_0097");
    runtime.register_function(0x08988D44u, &recomp_unit_0097, "recomp_unit_0097");
    runtime.register_function(0x08988D54u, &recomp_unit_0097, "recomp_unit_0097");
    runtime.register_function(0x08988D64u, &recomp_unit_0097, "recomp_unit_0097");
    runtime.register_function(0x08988D74u, &recomp_unit_0097, "recomp_unit_0097");
    runtime.register_function(0x08988D9Cu, &recomp_unit_0097, "recomp_unit_0097");
    runtime.register_function(0x08988DB8u, &recomp_unit_0097, "recomp_unit_0097");
    runtime.register_function(0x08988DC8u, &recomp_unit_0097, "recomp_unit_0097");
    runtime.register_function(0x08988DD4u, &recomp_unit_0097, "recomp_unit_0097");
    runtime.register_function(0x08988E10u, &recomp_unit_0097, "recomp_unit_0097");
    runtime.register_function(0x08988E40u, &recomp_unit_0097, "recomp_unit_0097");
    runtime.register_function(0x08988E50u, &recomp_unit_0097, "recomp_unit_0097");
    runtime.register_function(0x08988E60u, &recomp_unit_0097, "recomp_unit_0097");
    runtime.register_function(0x08988E78u, &recomp_unit_0097, "recomp_unit_0097");
    runtime.register_function(0x08988E8Cu, &recomp_unit_0097, "recomp_unit_0097");
    runtime.register_function(0x08988E94u, &recomp_unit_0097, "recomp_unit_0097");
    runtime.register_function(0x08988EACu, &recomp_unit_0097, "recomp_unit_0097");
    runtime.register_function(0x08988EC4u, &recomp_unit_0097, "recomp_unit_0097");
    runtime.register_function(0x08988EE0u, &recomp_unit_0097, "recomp_unit_0097");
    runtime.register_function(0x08988F08u, &recomp_unit_0097, "recomp_unit_0097");
    runtime.register_function(0x08988F14u, &recomp_unit_0097, "recomp_unit_0097");
    runtime.register_function(0x08988F1Cu, &recomp_unit_0097, "recomp_unit_0097");
    runtime.register_function(0x08988F24u, &recomp_unit_0097, "recomp_unit_0097");
    runtime.register_function(0x08988F34u, &recomp_unit_0097, "recomp_unit_0097");
    runtime.register_function(0x08988F40u, &recomp_unit_0097, "recomp_unit_0097");
    runtime.register_function(0x08988F48u, &recomp_unit_0097, "recomp_unit_0097");
    runtime.register_function(0x08988F60u, &recomp_unit_0097, "recomp_unit_0097");
    runtime.register_function(0x08988F78u, &recomp_unit_0097, "recomp_unit_0097");
    runtime.register_function(0x08988F88u, &recomp_unit_0097, "recomp_unit_0097");
    runtime.register_function(0x08988F98u, &recomp_unit_0097, "recomp_unit_0097");
    runtime.register_function(0x08988FF4u, &recomp_unit_0097, "recomp_unit_0097");
    runtime.register_function(0x08989004u, &recomp_unit_0097, "recomp_unit_0097");
    runtime.register_function(0x08989014u, &recomp_unit_0097, "recomp_unit_0097");
    runtime.register_function(0x0898903Cu, &recomp_unit_0097, "recomp_unit_0097");
    runtime.register_function(0x08989058u, &recomp_unit_0097, "recomp_unit_0097");
    runtime.register_function(0x08989068u, &recomp_unit_0097, "recomp_unit_0097");
    runtime.register_function(0x08989078u, &recomp_unit_0097, "recomp_unit_0097");
    runtime.register_function(0x08989088u, &recomp_unit_0097, "recomp_unit_0097");
    runtime.register_function(0x08989098u, &recomp_unit_0097, "recomp_unit_0097");
    runtime.register_function(0x089890A8u, &recomp_unit_0097, "recomp_unit_0097");
    runtime.register_function(0x089890B4u, &recomp_unit_0097, "recomp_unit_0097");
    runtime.register_function(0x089890C8u, &recomp_unit_0097, "recomp_unit_0097");
    runtime.register_function(0x089890D8u, &recomp_unit_0097, "recomp_unit_0097");
    runtime.register_function(0x08989100u, &recomp_unit_0097, "recomp_unit_0097");
    runtime.register_function(0x08989130u, &recomp_unit_0097, "recomp_unit_0097");
    runtime.register_function(0x08989148u, &recomp_unit_0097, "recomp_unit_0097");
    runtime.register_function(0x0898915Cu, &recomp_unit_0097, "recomp_unit_0097");
    runtime.register_function(0x08989164u, &recomp_unit_0097, "recomp_unit_0097");
    runtime.register_function(0x0898917Cu, &recomp_unit_0097, "recomp_unit_0097");
    runtime.register_function(0x08989194u, &recomp_unit_0097, "recomp_unit_0097");
    runtime.register_function(0x089891ACu, &recomp_unit_0097, "recomp_unit_0097");
    runtime.register_function(0x089891D0u, &recomp_unit_0097, "recomp_unit_0097");
    runtime.register_function(0x089891E8u, &recomp_unit_0097, "recomp_unit_0097");
    runtime.register_function(0x08989200u, &recomp_unit_0097, "recomp_unit_0097");
    runtime.register_function(0x08989210u, &recomp_unit_0097, "recomp_unit_0097");
    runtime.register_function(0x08989220u, &recomp_unit_0097, "recomp_unit_0097");
    runtime.register_function(0x0898926Cu, &recomp_unit_0097, "recomp_unit_0097");
    runtime.register_function(0x0898927Cu, &recomp_unit_0097, "recomp_unit_0097");
    runtime.register_function(0x0898928Cu, &recomp_unit_0097, "recomp_unit_0097");
    runtime.register_function(0x089892A4u, &recomp_unit_0097, "recomp_unit_0097");
    runtime.register_function(0x089892B8u, &recomp_unit_0097, "recomp_unit_0097");
    runtime.register_function(0x089892CCu, &recomp_unit_0097, "recomp_unit_0097");
    runtime.register_function(0x089892E4u, &recomp_unit_0097, "recomp_unit_0097");
    runtime.register_function(0x089892F8u, &recomp_unit_0097, "recomp_unit_0097");
    runtime.register_function(0x08989300u, &recomp_unit_0097, "recomp_unit_0097");
    runtime.register_function(0x08989318u, &recomp_unit_0097, "recomp_unit_0097");
    runtime.register_function(0x08989334u, &recomp_unit_0097, "recomp_unit_0097");
    runtime.register_function(0x08989344u, &recomp_unit_0097, "recomp_unit_0097");
    runtime.register_function(0x0898935Cu, &recomp_unit_0097, "recomp_unit_0097");
    runtime.register_function(0x08989368u, &recomp_unit_0097, "recomp_unit_0097");
    runtime.register_function(0x0898938Cu, &recomp_unit_0097, "recomp_unit_0097");
    runtime.register_function(0x08989394u, &recomp_unit_0097, "recomp_unit_0097");
    runtime.register_function(0x089893ACu, &recomp_unit_0097, "recomp_unit_0097");
    runtime.register_function(0x089893C4u, &recomp_unit_0097, "recomp_unit_0097");
    runtime.register_function(0x089893D4u, &recomp_unit_0097, "recomp_unit_0097");
    runtime.register_function(0x089893E4u, &recomp_unit_0097, "recomp_unit_0097");
    runtime.register_function(0x08989440u, &recomp_unit_0097, "recomp_unit_0097");
    runtime.register_function(0x08989450u, &recomp_unit_0097, "recomp_unit_0097");
    runtime.register_function(0x08989460u, &recomp_unit_0097, "recomp_unit_0097");
    runtime.register_function(0x08989488u, &recomp_unit_0097, "recomp_unit_0097");
    runtime.register_function(0x089894A4u, &recomp_unit_0097, "recomp_unit_0097");
    runtime.register_function(0x089894B4u, &recomp_unit_0097, "recomp_unit_0097");
    runtime.register_function(0x089894CCu, &recomp_unit_0097, "recomp_unit_0097");
    runtime.register_function(0x089894D8u, &recomp_unit_0097, "recomp_unit_0097");
    runtime.register_function(0x089894ECu, &recomp_unit_0097, "recomp_unit_0097");
    runtime.register_function(0x08989504u, &recomp_unit_0097, "recomp_unit_0097");
    runtime.register_function(0x08989520u, &recomp_unit_0097, "recomp_unit_0097");
    runtime.register_function(0x08989538u, &recomp_unit_0097, "recomp_unit_0097");
    runtime.register_function(0x0898956Cu, &recomp_unit_0097, "recomp_unit_0097");
    runtime.register_function(0x08989588u, &recomp_unit_0097, "recomp_unit_0097");
    runtime.register_function(0x089895A0u, &recomp_unit_0097, "recomp_unit_0097");
    runtime.register_function(0x089895C4u, &recomp_unit_0097, "recomp_unit_0097");
    runtime.register_function(0x089895CCu, &recomp_unit_0097, "recomp_unit_0097");
    runtime.register_function(0x089895E4u, &recomp_unit_0097, "recomp_unit_0097");
    runtime.register_function(0x089895FCu, &recomp_unit_0097, "recomp_unit_0097");
    runtime.register_function(0x0898965Cu, &recomp_unit_0097, "recomp_unit_0097");
    runtime.register_function(0x089896B0u, &recomp_unit_0097, "recomp_unit_0097");
    runtime.register_function(0x089896B4u, &recomp_unit_0097, "recomp_unit_0097");
    runtime.register_function(0x089896C0u, &recomp_unit_0097, "recomp_unit_0097");
    runtime.register_function(0x089896E0u, &recomp_unit_0097, "recomp_unit_0097");
    runtime.register_function(0x089896F4u, &recomp_unit_0097, "recomp_unit_0097");
    runtime.register_function(0x08989704u, &recomp_unit_0097, "recomp_unit_0097");
    runtime.register_function(0x08989714u, &recomp_unit_0097, "recomp_unit_0097");
    runtime.register_function(0x08989728u, &recomp_unit_0097, "recomp_unit_0097");
    runtime.register_function(0x0898973Cu, &recomp_unit_0097, "recomp_unit_0097");
    runtime.register_function(0x0898974Cu, &recomp_unit_0097, "recomp_unit_0097");
    runtime.register_function(0x08989760u, &recomp_unit_0097, "recomp_unit_0097");
    runtime.register_function(0x08989774u, &recomp_unit_0097, "recomp_unit_0097");
    runtime.register_function(0x08989784u, &recomp_unit_0097, "recomp_unit_0097");
    runtime.register_function(0x08989798u, &recomp_unit_0097, "recomp_unit_0097");
    runtime.register_function(0x089897ACu, &recomp_unit_0097, "recomp_unit_0097");
    runtime.register_function(0x089897BCu, &recomp_unit_0097, "recomp_unit_0097");
    runtime.register_function(0x089897D0u, &recomp_unit_0097, "recomp_unit_0097");
    runtime.register_function(0x089897E4u, &recomp_unit_0097, "recomp_unit_0097");
    runtime.register_function(0x089897F4u, &recomp_unit_0097, "recomp_unit_0097");
    runtime.register_function(0x08989814u, &recomp_unit_0097, "recomp_unit_0097");
    runtime.register_function(0x08989820u, &recomp_unit_0097, "recomp_unit_0097");
    runtime.register_function(0x08989824u, &recomp_unit_0097, "recomp_unit_0097");
    runtime.register_function(0x0898982Cu, &recomp_unit_0097, "recomp_unit_0097");
    runtime.register_function(0x08989840u, &recomp_unit_0097, "recomp_unit_0097");
    runtime.register_function(0x08989854u, &recomp_unit_0097, "recomp_unit_0097");
    runtime.register_function(0x08989868u, &recomp_unit_0097, "recomp_unit_0097");
    runtime.register_function(0x08989878u, &recomp_unit_0097, "recomp_unit_0097");
    runtime.register_function(0x08989888u, &recomp_unit_0097, "recomp_unit_0097");
    runtime.register_function(0x0898989Cu, &recomp_unit_0097, "recomp_unit_0097");
    runtime.register_function(0x089898ACu, &recomp_unit_0097, "recomp_unit_0097");
    runtime.register_function(0x089898BCu, &recomp_unit_0097, "recomp_unit_0097");
    runtime.register_function(0x089898D0u, &recomp_unit_0097, "recomp_unit_0097");
    runtime.register_function(0x089898E4u, &recomp_unit_0097, "recomp_unit_0097");
    runtime.register_function(0x089898F4u, &recomp_unit_0097, "recomp_unit_0097");
    runtime.register_function(0x08989908u, &recomp_unit_0097, "recomp_unit_0097");
    runtime.register_function(0x0898991Cu, &recomp_unit_0097, "recomp_unit_0097");
    runtime.register_function(0x0898992Cu, &recomp_unit_0097, "recomp_unit_0097");
    runtime.register_function(0x08989940u, &recomp_unit_0097, "recomp_unit_0097");
    runtime.register_function(0x08989954u, &recomp_unit_0097, "recomp_unit_0097");
    runtime.register_function(0x08989964u, &recomp_unit_0097, "recomp_unit_0097");
    runtime.register_function(0x08989978u, &recomp_unit_0097, "recomp_unit_0097");
    runtime.register_function(0x0898998Cu, &recomp_unit_0097, "recomp_unit_0097");
    runtime.register_function(0x0898999Cu, &recomp_unit_0097, "recomp_unit_0097");
    runtime.register_function(0x089899B0u, &recomp_unit_0097, "recomp_unit_0097");
    runtime.register_function(0x089899C0u, &recomp_unit_0097, "recomp_unit_0097");
    runtime.register_function(0x089899D0u, &recomp_unit_0097, "recomp_unit_0097");
    runtime.register_function(0x089899E4u, &recomp_unit_0097, "recomp_unit_0097");
    runtime.register_function(0x089899F4u, &recomp_unit_0097, "recomp_unit_0097");
    runtime.register_function(0x08989A04u, &recomp_unit_0097, "recomp_unit_0097");
    runtime.register_function(0x08989A18u, &recomp_unit_0097, "recomp_unit_0097");
    runtime.register_function(0x08989A2Cu, &recomp_unit_0097, "recomp_unit_0097");
    runtime.register_function(0x08989A3Cu, &recomp_unit_0097, "recomp_unit_0097");
    runtime.register_function(0x08989A50u, &recomp_unit_0097, "recomp_unit_0097");
    runtime.register_function(0x08989A64u, &recomp_unit_0097, "recomp_unit_0097");
    runtime.register_function(0x08989A74u, &recomp_unit_0097, "recomp_unit_0097");
    runtime.register_function(0x08989A8Cu, &recomp_unit_0097, "recomp_unit_0097");
    runtime.register_function(0x08989A9Cu, &recomp_unit_0097, "recomp_unit_0097");
    runtime.register_function(0x08989AC0u, &recomp_unit_0097, "recomp_unit_0097");
    runtime.register_function(0x08989AC8u, &recomp_unit_0097, "recomp_unit_0097");
    runtime.register_function(0x08989AD4u, &recomp_unit_0097, "recomp_unit_0097");
    runtime.register_function(0x08989AE0u, &recomp_unit_0097, "recomp_unit_0097");
    runtime.register_function(0x08989AF4u, &recomp_unit_0097, "recomp_unit_0097");
    runtime.register_function(0x08989B0Cu, &recomp_unit_0097, "recomp_unit_0097");
    runtime.register_function(0x08989B1Cu, &recomp_unit_0097, "recomp_unit_0097");
    runtime.register_function(0x08989B34u, &recomp_unit_0097, "recomp_unit_0097");
    runtime.register_function(0x08989B44u, &recomp_unit_0097, "recomp_unit_0097");
    runtime.register_function(0x08989B54u, &recomp_unit_0097, "recomp_unit_0097");
    runtime.register_function(0x08989B7Cu, &recomp_unit_0097, "recomp_unit_0097");
    runtime.register_function(0x08989BBCu, &recomp_unit_0097, "recomp_unit_0097");
    runtime.register_function(0x08989BC4u, &recomp_unit_0097, "recomp_unit_0097");
    runtime.register_function(0x08989BD0u, &recomp_unit_0097, "recomp_unit_0097");
    runtime.register_function(0x08989C0Cu, &recomp_unit_0097, "recomp_unit_0097");
    runtime.register_function(0x08989C10u, &recomp_unit_0097, "recomp_unit_0097");
    runtime.register_function(0x08989C1Cu, &recomp_unit_0097, "recomp_unit_0097");
    runtime.register_function(0x08989C24u, &recomp_unit_0097, "recomp_unit_0097");
    runtime.register_function(0x08989C3Cu, &recomp_unit_0097, "recomp_unit_0097");
    runtime.register_function(0x08989C48u, &recomp_unit_0097, "recomp_unit_0097");
    runtime.register_function(0x08989C5Cu, &recomp_unit_0097, "recomp_unit_0097");
    runtime.register_function(0x08989C68u, &recomp_unit_0097, "recomp_unit_0097");
    runtime.register_function(0x08989C70u, &recomp_unit_0097, "recomp_unit_0097");
    runtime.register_function(0x08989C80u, &recomp_unit_0097, "recomp_unit_0097");
    runtime.register_function(0x08989C9Cu, &recomp_unit_0097, "recomp_unit_0097");
    runtime.register_function(0x08989CACu, &recomp_unit_0097, "recomp_unit_0097");
    runtime.register_function(0x08989CDCu, &recomp_unit_0097, "recomp_unit_0097");
    runtime.register_function(0x08989CF4u, &recomp_unit_0097, "recomp_unit_0097");
    runtime.register_function(0x08989CFCu, &recomp_unit_0097, "recomp_unit_0097");
    runtime.register_function(0x08989D00u, &recomp_unit_0097, "recomp_unit_0097");
    runtime.register_function(0x08989D0Cu, &recomp_unit_0097, "recomp_unit_0097");
    runtime.register_function(0x08989D1Cu, &recomp_unit_0097, "recomp_unit_0097");
    runtime.register_function(0x08989D30u, &recomp_unit_0097, "recomp_unit_0097");
    runtime.register_function(0x08989D3Cu, &recomp_unit_0097, "recomp_unit_0097");
    runtime.register_function(0x08989D50u, &recomp_unit_0097, "recomp_unit_0097");
    runtime.register_function(0x08989D60u, &recomp_unit_0097, "recomp_unit_0097");
    runtime.register_function(0x08989D80u, &recomp_unit_0097, "recomp_unit_0097");
    runtime.register_function(0x08989DE0u, &recomp_unit_0097, "recomp_unit_0097");
    runtime.register_function(0x08989DF4u, &recomp_unit_0097, "recomp_unit_0097");
    runtime.register_function(0x08989E1Cu, &recomp_unit_0097, "recomp_unit_0097");
    runtime.register_function(0x08989E20u, &recomp_unit_0097, "recomp_unit_0097");
    runtime.register_function(0x08989E2Cu, &recomp_unit_0097, "recomp_unit_0097");
    runtime.register_function(0x08989E38u, &recomp_unit_0097, "recomp_unit_0097");
    runtime.register_function(0x08989EA4u, &recomp_unit_0097, "recomp_unit_0097");
    runtime.register_function(0x08989EC8u, &recomp_unit_0097, "recomp_unit_0097");
    runtime.register_function(0x08989EE0u, &recomp_unit_0097, "recomp_unit_0097");
    runtime.register_function(0x08989F20u, &recomp_unit_0097, "recomp_unit_0097");
    runtime.register_function(0x08989F30u, &recomp_unit_0097, "recomp_unit_0097");
    runtime.register_function(0x08989F40u, &recomp_unit_0097, "recomp_unit_0097");
    runtime.register_function(0x08989F54u, &recomp_unit_0097, "recomp_unit_0097");
    runtime.register_function(0x08989F88u, &recomp_unit_0097, "recomp_unit_0097");
    runtime.register_function(0x08989F94u, &recomp_unit_0097, "recomp_unit_0097");
    runtime.register_function(0x08989FA4u, &recomp_unit_0097, "recomp_unit_0097");
    runtime.register_function(0x08989FBCu, &recomp_unit_0097, "recomp_unit_0097");
    runtime.register_function(0x08989FD8u, &recomp_unit_0097, "recomp_unit_0097");
    runtime.register_function(0x08989FE8u, &recomp_unit_0097, "recomp_unit_0097");
    runtime.register_function(0x0898A000u, &recomp_unit_0097, "recomp_unit_0097");
    runtime.register_function(0x0898A028u, &recomp_unit_0097, "recomp_unit_0097");
    runtime.register_function(0x0898A02Cu, &recomp_unit_0097, "recomp_unit_0097");
    runtime.register_function(0x0898A034u, &recomp_unit_0097, "recomp_unit_0097");
    runtime.register_function(0x0898A048u, &recomp_unit_0097, "recomp_unit_0097");
    runtime.register_function(0x0898A04Cu, &recomp_unit_0097, "recomp_unit_0097");
    runtime.register_function(0x0898A054u, &recomp_unit_0097, "recomp_unit_0097");
    runtime.register_function(0x0898A064u, &recomp_unit_0097, "recomp_unit_0097");
    runtime.register_function(0x0898A08Cu, &recomp_unit_0097, "recomp_unit_0097");
    runtime.register_function(0x0898A09Cu, &recomp_unit_0097, "recomp_unit_0097");
    runtime.register_function(0x0898A0A8u, &recomp_unit_0097, "recomp_unit_0097");
    runtime.register_function(0x0898A0BCu, &recomp_unit_0097, "recomp_unit_0097");
    runtime.register_function(0x0898A0C8u, &recomp_unit_0097, "recomp_unit_0097");
    runtime.register_function(0x0898A0D8u, &recomp_unit_0097, "recomp_unit_0097");
    runtime.register_function(0x0898A0E4u, &recomp_unit_0097, "recomp_unit_0097");
    runtime.register_function(0x0898A0F4u, &recomp_unit_0097, "recomp_unit_0097");
    runtime.register_function(0x0898A0FCu, &recomp_unit_0097, "recomp_unit_0097");
    runtime.register_function(0x0898A100u, &recomp_unit_0097, "recomp_unit_0097");
    runtime.register_function(0x0898A120u, &recomp_unit_0097, "recomp_unit_0097");
    runtime.register_function(0x0898A128u, &recomp_unit_0097, "recomp_unit_0097");
    runtime.register_function(0x0898A134u, &recomp_unit_0097, "recomp_unit_0097");
    runtime.register_function(0x0898A144u, &recomp_unit_0097, "recomp_unit_0097");
    runtime.register_function(0x0898A14Cu, &recomp_unit_0097, "recomp_unit_0097");
    runtime.register_function(0x0898A150u, &recomp_unit_0097, "recomp_unit_0097");
    runtime.register_function(0x0898A170u, &recomp_unit_0097, "recomp_unit_0097");
    runtime.register_function(0x0898A178u, &recomp_unit_0097, "recomp_unit_0097");
    runtime.register_function(0x0898A180u, &recomp_unit_0097, "recomp_unit_0097");
    runtime.register_function(0x0898A1A8u, &recomp_unit_0097, "recomp_unit_0097");
    runtime.register_function(0x0898A1B8u, &recomp_unit_0097, "recomp_unit_0097");
    runtime.register_function(0x0898A1D8u, &recomp_unit_0097, "recomp_unit_0097");
    runtime.register_function(0x0898A1F4u, &recomp_unit_0097, "recomp_unit_0097");
    runtime.register_function(0x0898A1F8u, &recomp_unit_0097, "recomp_unit_0097");
    runtime.register_function(0x0898A204u, &recomp_unit_0097, "recomp_unit_0097");
    runtime.register_function(0x0898A20Cu, &recomp_unit_0097, "recomp_unit_0097");
    runtime.register_function(0x0898A224u, &recomp_unit_0097, "recomp_unit_0097");
    runtime.register_function(0x0898A22Cu, &recomp_unit_0097, "recomp_unit_0097");
    runtime.register_function(0x0898A23Cu, &recomp_unit_0097, "recomp_unit_0097");
    runtime.register_function(0x0898A240u, &recomp_unit_0097, "recomp_unit_0097");
    runtime.register_function(0x0898A250u, &recomp_unit_0097, "recomp_unit_0097");
    runtime.register_function(0x0898A26Cu, &recomp_unit_0097, "recomp_unit_0097");
    runtime.register_function(0x0898A280u, &recomp_unit_0097, "recomp_unit_0097");
    runtime.register_function(0x0898A294u, &recomp_unit_0097, "recomp_unit_0097");
    runtime.register_function(0x0898A2A4u, &recomp_unit_0097, "recomp_unit_0097");
    runtime.register_function(0x0898A2B4u, &recomp_unit_0097, "recomp_unit_0097");
    runtime.register_function(0x0898A2DCu, &recomp_unit_0097, "recomp_unit_0097");
    runtime.register_function(0x0898A2F8u, &recomp_unit_0097, "recomp_unit_0097");
    runtime.register_function(0x0898A310u, &recomp_unit_0097, "recomp_unit_0097");
    runtime.register_function(0x0898A320u, &recomp_unit_0097, "recomp_unit_0097");
    runtime.register_function(0x0898A32Cu, &recomp_unit_0097, "recomp_unit_0097");
    runtime.register_function(0x0898A334u, &recomp_unit_0097, "recomp_unit_0097");
    runtime.register_function(0x0898A34Cu, &recomp_unit_0097, "recomp_unit_0097");
    runtime.register_function(0x0898A360u, &recomp_unit_0097, "recomp_unit_0097");
    runtime.register_function(0x0898A370u, &recomp_unit_0097, "recomp_unit_0097");
    runtime.register_function(0x0898A378u, &recomp_unit_0097, "recomp_unit_0097");
    runtime.register_function(0x0898A39Cu, &recomp_unit_0097, "recomp_unit_0097");
    runtime.register_function(0x0898A3ACu, &recomp_unit_0097, "recomp_unit_0097");
    runtime.register_function(0x0898A3B8u, &recomp_unit_0097, "recomp_unit_0097");
    runtime.register_function(0x0898A3C0u, &recomp_unit_0097, "recomp_unit_0097");
    runtime.register_function(0x0898A3CCu, &recomp_unit_0097, "recomp_unit_0097");
    runtime.register_function(0x0898A3D4u, &recomp_unit_0097, "recomp_unit_0097");
    runtime.register_function(0x0898A3E8u, &recomp_unit_0097, "recomp_unit_0097");
    runtime.register_function(0x0898A3FCu, &recomp_unit_0097, "recomp_unit_0097");
    runtime.register_function(0x0898A414u, &recomp_unit_0097, "recomp_unit_0097");
    runtime.register_function(0x0898A418u, &recomp_unit_0097, "recomp_unit_0097");
    runtime.register_function(0x0898A420u, &recomp_unit_0097, "recomp_unit_0097");
    runtime.register_function(0x0898A438u, &recomp_unit_0097, "recomp_unit_0097");
    runtime.register_function(0x0898A444u, &recomp_unit_0097, "recomp_unit_0097");
    runtime.register_function(0x0898A464u, &recomp_unit_0097, "recomp_unit_0097");
    runtime.register_function(0x0898A474u, &recomp_unit_0097, "recomp_unit_0097");
    runtime.register_function(0x0898A480u, &recomp_unit_0097, "recomp_unit_0097");
    runtime.register_function(0x0898A48Cu, &recomp_unit_0097, "recomp_unit_0097");
    runtime.register_function(0x0898A490u, &recomp_unit_0097, "recomp_unit_0097");
    runtime.register_function(0x0898A4A0u, &recomp_unit_0097, "recomp_unit_0097");
    runtime.register_function(0x0898A4CCu, &recomp_unit_0097, "recomp_unit_0097");
    runtime.register_function(0x0898A4DCu, &recomp_unit_0097, "recomp_unit_0097");
    runtime.register_function(0x0898A50Cu, &recomp_unit_0097, "recomp_unit_0097");
    runtime.register_function(0x0898A51Cu, &recomp_unit_0097, "recomp_unit_0097");
    runtime.register_function(0x0898A528u, &recomp_unit_0097, "recomp_unit_0097");
    runtime.register_function(0x0898A530u, &recomp_unit_0097, "recomp_unit_0097");
    runtime.register_function(0x0898A53Cu, &recomp_unit_0097, "recomp_unit_0097");
    runtime.register_function(0x0898A544u, &recomp_unit_0097, "recomp_unit_0097");
    runtime.register_function(0x0898A55Cu, &recomp_unit_0097, "recomp_unit_0097");
    runtime.register_function(0x0898A570u, &recomp_unit_0097, "recomp_unit_0097");
    runtime.register_function(0x0898A588u, &recomp_unit_0097, "recomp_unit_0097");
    runtime.register_function(0x0898A58Cu, &recomp_unit_0097, "recomp_unit_0097");
    runtime.register_function(0x0898A594u, &recomp_unit_0097, "recomp_unit_0097");
    runtime.register_function(0x0898A5ACu, &recomp_unit_0097, "recomp_unit_0097");
    runtime.register_function(0x0898A5B8u, &recomp_unit_0097, "recomp_unit_0097");
    runtime.register_function(0x0898A5C4u, &recomp_unit_0097, "recomp_unit_0097");
    runtime.register_function(0x0898A5D4u, &recomp_unit_0097, "recomp_unit_0097");
    runtime.register_function(0x0898A5E0u, &recomp_unit_0097, "recomp_unit_0097");
    runtime.register_function(0x0898A5E8u, &recomp_unit_0097, "recomp_unit_0097");
    runtime.register_function(0x0898A5F4u, &recomp_unit_0097, "recomp_unit_0097");
    runtime.register_function(0x0898A5FCu, &recomp_unit_0097, "recomp_unit_0097");
    runtime.register_function(0x0898A610u, &recomp_unit_0097, "recomp_unit_0097");
    runtime.register_function(0x0898A624u, &recomp_unit_0097, "recomp_unit_0097");
    runtime.register_function(0x0898A63Cu, &recomp_unit_0097, "recomp_unit_0097");
    runtime.register_function(0x0898A640u, &recomp_unit_0097, "recomp_unit_0097");
    runtime.register_function(0x0898A648u, &recomp_unit_0097, "recomp_unit_0097");
    runtime.register_function(0x0898A660u, &recomp_unit_0097, "recomp_unit_0097");
    runtime.register_function(0x0898A66Cu, &recomp_unit_0097, "recomp_unit_0097");
    runtime.register_function(0x0898A670u, &recomp_unit_0097, "recomp_unit_0097");
    runtime.register_function(0x0898A67Cu, &recomp_unit_0097, "recomp_unit_0097");
    runtime.register_function(0x0898A684u, &recomp_unit_0097, "recomp_unit_0097");
    runtime.register_function(0x0898A688u, &recomp_unit_0097, "recomp_unit_0097");
    runtime.register_function(0x0898A698u, &recomp_unit_0097, "recomp_unit_0097");
    runtime.register_function(0x0898A6A0u, &recomp_unit_0097, "recomp_unit_0097");
    runtime.register_function(0x0898A6A4u, &recomp_unit_0097, "recomp_unit_0097");
    runtime.register_function(0x0898A6B4u, &recomp_unit_0097, "recomp_unit_0097");
    runtime.register_function(0x0898A6C4u, &recomp_unit_0097, "recomp_unit_0097");
    runtime.register_function(0x0898A6D0u, &recomp_unit_0097, "recomp_unit_0097");
    runtime.register_function(0x0898A72Cu, &recomp_unit_0097, "recomp_unit_0097");
    runtime.register_function(0x0898A74Cu, &recomp_unit_0097, "recomp_unit_0097");
    runtime.register_function(0x0898A764u, &recomp_unit_0097, "recomp_unit_0097");
    runtime.register_function(0x0898A770u, &recomp_unit_0097, "recomp_unit_0097");
    runtime.register_function(0x0898A77Cu, &recomp_unit_0097, "recomp_unit_0097");
    runtime.register_function(0x0898A78Cu, &recomp_unit_0097, "recomp_unit_0097");
    runtime.register_function(0x0898A7ACu, &recomp_unit_0097, "recomp_unit_0097");
    runtime.register_function(0x0898A7B4u, &recomp_unit_0097, "recomp_unit_0097");
    runtime.register_function(0x0898A820u, &recomp_unit_0097, "recomp_unit_0097");
    runtime.register_function(0x0898A834u, &recomp_unit_0097, "recomp_unit_0097");
    runtime.register_function(0x0898A85Cu, &recomp_unit_0097, "recomp_unit_0097");
    runtime.register_function(0x0898A87Cu, &recomp_unit_0097, "recomp_unit_0097");
    runtime.register_function(0x0898A888u, &recomp_unit_0097, "recomp_unit_0097");
    runtime.register_function(0x0898A898u, &recomp_unit_0097, "recomp_unit_0097");
    runtime.register_function(0x0898A8A4u, &recomp_unit_0097, "recomp_unit_0097");
    runtime.register_function(0x0898A8ACu, &recomp_unit_0097, "recomp_unit_0097");
    runtime.register_function(0x0898A8B8u, &recomp_unit_0097, "recomp_unit_0097");
    runtime.register_function(0x0898A8C0u, &recomp_unit_0097, "recomp_unit_0097");
    runtime.register_function(0x0898A8D4u, &recomp_unit_0097, "recomp_unit_0097");
    runtime.register_function(0x0898A8E8u, &recomp_unit_0097, "recomp_unit_0097");
    runtime.register_function(0x0898A900u, &recomp_unit_0097, "recomp_unit_0097");
    runtime.register_function(0x0898A904u, &recomp_unit_0097, "recomp_unit_0097");
    runtime.register_function(0x0898A90Cu, &recomp_unit_0097, "recomp_unit_0097");
    runtime.register_function(0x0898A924u, &recomp_unit_0097, "recomp_unit_0097");
    runtime.register_function(0x0898A930u, &recomp_unit_0097, "recomp_unit_0097");
    runtime.register_function(0x0898A934u, &recomp_unit_0097, "recomp_unit_0097");
    runtime.register_function(0x0898A94Cu, &recomp_unit_0097, "recomp_unit_0097");
    runtime.register_function(0x0898A958u, &recomp_unit_0097, "recomp_unit_0097");
    runtime.register_function(0x0898A960u, &recomp_unit_0097, "recomp_unit_0097");
    runtime.register_function(0x0898A964u, &recomp_unit_0097, "recomp_unit_0097");
    runtime.register_function(0x0898A974u, &recomp_unit_0097, "recomp_unit_0097");
    runtime.register_function(0x0898A97Cu, &recomp_unit_0097, "recomp_unit_0097");
    runtime.register_function(0x0898A980u, &recomp_unit_0097, "recomp_unit_0097");
    runtime.register_function(0x0898A990u, &recomp_unit_0097, "recomp_unit_0097");
    runtime.register_function(0x0898A9A0u, &recomp_unit_0097, "recomp_unit_0097");
    runtime.register_function(0x0898A9A8u, &recomp_unit_0097, "recomp_unit_0097");
    runtime.register_function(0x0898A9B0u, &recomp_unit_0097, "recomp_unit_0097");
    runtime.register_function(0x0898A9B8u, &recomp_unit_0097, "recomp_unit_0097");
    runtime.register_function(0x0898A9C0u, &recomp_unit_0097, "recomp_unit_0097");
    runtime.register_function(0x0898A9D0u, &recomp_unit_0097, "recomp_unit_0097");
    runtime.register_function(0x0898A9E4u, &recomp_unit_0097, "recomp_unit_0097");
    runtime.register_function(0x0898A9ECu, &recomp_unit_0097, "recomp_unit_0097");
    runtime.register_function(0x0898AA04u, &recomp_unit_0097, "recomp_unit_0097");
    runtime.register_function(0x0898AA0Cu, &recomp_unit_0097, "recomp_unit_0097");
    runtime.register_function(0x0898AA24u, &recomp_unit_0097, "recomp_unit_0097");
    runtime.register_function(0x0898AA2Cu, &recomp_unit_0097, "recomp_unit_0097");
    runtime.register_function(0x0898AA38u, &recomp_unit_0097, "recomp_unit_0097");
    runtime.register_function(0x0898AA44u, &recomp_unit_0097, "recomp_unit_0097");
    runtime.register_function(0x0898AA50u, &recomp_unit_0097, "recomp_unit_0097");
    runtime.register_function(0x0898AA68u, &recomp_unit_0097, "recomp_unit_0097");
    runtime.register_function(0x0898AA74u, &recomp_unit_0097, "recomp_unit_0097");
    runtime.register_function(0x0898AA80u, &recomp_unit_0097, "recomp_unit_0097");
    runtime.register_function(0x0898AA88u, &recomp_unit_0097, "recomp_unit_0097");
    runtime.register_function(0x0898AA94u, &recomp_unit_0097, "recomp_unit_0097");
    runtime.register_function(0x0898AAA4u, &recomp_unit_0097, "recomp_unit_0097");
    runtime.register_function(0x0898AAB0u, &recomp_unit_0097, "recomp_unit_0097");
    runtime.register_function(0x0898AAC0u, &recomp_unit_0097, "recomp_unit_0097");
    runtime.register_function(0x0898AACCu, &recomp_unit_0097, "recomp_unit_0097");
    runtime.register_function(0x0898AAD4u, &recomp_unit_0097, "recomp_unit_0097");
    runtime.register_function(0x0898AAE0u, &recomp_unit_0097, "recomp_unit_0097");
    runtime.register_function(0x0898AAE8u, &recomp_unit_0097, "recomp_unit_0097");
    runtime.register_function(0x0898AAF4u, &recomp_unit_0097, "recomp_unit_0097");
    runtime.register_function(0x0898AB00u, &recomp_unit_0097, "recomp_unit_0097");
    runtime.register_function(0x0898AB0Cu, &recomp_unit_0097, "recomp_unit_0097");
    runtime.register_function(0x0898AB14u, &recomp_unit_0097, "recomp_unit_0097");
    runtime.register_function(0x0898AB20u, &recomp_unit_0097, "recomp_unit_0097");
    runtime.register_function(0x0898AB30u, &recomp_unit_0097, "recomp_unit_0097");
    runtime.register_function(0x0898AB40u, &recomp_unit_0097, "recomp_unit_0097");
    runtime.register_function(0x0898AB50u, &recomp_unit_0097, "recomp_unit_0097");
    runtime.register_function(0x0898AB60u, &recomp_unit_0097, "recomp_unit_0097");
    runtime.register_function(0x0898AB70u, &recomp_unit_0097, "recomp_unit_0097");
    runtime.register_function(0x0898AB80u, &recomp_unit_0097, "recomp_unit_0097");
    runtime.register_function(0x0898AB90u, &recomp_unit_0097, "recomp_unit_0097");
    runtime.register_function(0x0898ABA0u, &recomp_unit_0097, "recomp_unit_0097");
    runtime.register_function(0x0898ABBCu, &recomp_unit_0097, "recomp_unit_0097");
    runtime.register_function(0x0898ABC8u, &recomp_unit_0097, "recomp_unit_0097");
    runtime.register_function(0x0898ABD8u, &recomp_unit_0097, "recomp_unit_0097");
    runtime.register_function(0x0898ABECu, &recomp_unit_0097, "recomp_unit_0097");
    runtime.register_function(0x0898ABFCu, &recomp_unit_0097, "recomp_unit_0097");
    runtime.register_function(0x0898AC04u, &recomp_unit_0097, "recomp_unit_0097");
    runtime.register_function(0x0898AC0Cu, &recomp_unit_0097, "recomp_unit_0097");
    runtime.register_function(0x0898AC14u, &recomp_unit_0097, "recomp_unit_0097");
    runtime.register_function(0x0898AC1Cu, &recomp_unit_0097, "recomp_unit_0097");
    runtime.register_function(0x0898AC24u, &recomp_unit_0097, "recomp_unit_0097");
    runtime.register_function(0x0898AC2Cu, &recomp_unit_0097, "recomp_unit_0097");
    runtime.register_function(0x0898AC34u, &recomp_unit_0097, "recomp_unit_0097");
    runtime.register_function(0x0898AC3Cu, &recomp_unit_0097, "recomp_unit_0097");
    runtime.register_function(0x0898AC4Cu, &recomp_unit_0097, "recomp_unit_0097");
    runtime.register_function(0x0898AC5Cu, &recomp_unit_0097, "recomp_unit_0097");
    runtime.register_function(0x0898AC64u, &recomp_unit_0097, "recomp_unit_0097");
    runtime.register_function(0x0898AC6Cu, &recomp_unit_0097, "recomp_unit_0097");
    runtime.register_function(0x0898AC74u, &recomp_unit_0097, "recomp_unit_0097");
    runtime.register_function(0x0898AC7Cu, &recomp_unit_0097, "recomp_unit_0097");
    runtime.register_function(0x0898AC84u, &recomp_unit_0097, "recomp_unit_0097");
    runtime.register_function(0x0898AC8Cu, &recomp_unit_0097, "recomp_unit_0097");
    runtime.register_function(0x0898AC94u, &recomp_unit_0097, "recomp_unit_0097");
    runtime.register_function(0x0898AC9Cu, &recomp_unit_0097, "recomp_unit_0097");
    runtime.register_function(0x0898ACA4u, &recomp_unit_0097, "recomp_unit_0097");
    runtime.register_function(0x0898ACACu, &recomp_unit_0097, "recomp_unit_0097");
    runtime.register_function(0x0898ACB4u, &recomp_unit_0097, "recomp_unit_0097");
    runtime.register_function(0x0898ACBCu, &recomp_unit_0097, "recomp_unit_0097");
    runtime.register_function(0x0898ACC4u, &recomp_unit_0097, "recomp_unit_0097");
    runtime.register_function(0x0898ACCCu, &recomp_unit_0097, "recomp_unit_0097");
    runtime.register_function(0x0898ACD4u, &recomp_unit_0097, "recomp_unit_0097");
    runtime.register_function(0x0898ACDCu, &recomp_unit_0097, "recomp_unit_0097");
    runtime.register_function(0x0898ACE4u, &recomp_unit_0097, "recomp_unit_0097");
    runtime.register_function(0x0898ACECu, &recomp_unit_0097, "recomp_unit_0097");
    runtime.register_function(0x0898ACF4u, &recomp_unit_0097, "recomp_unit_0097");
    runtime.register_function(0x0898ACFCu, &recomp_unit_0097, "recomp_unit_0097");
    runtime.register_function(0x0898AD04u, &recomp_unit_0097, "recomp_unit_0097");
    runtime.register_function(0x0898AD0Cu, &recomp_unit_0097, "recomp_unit_0097");
    runtime.register_function(0x0898AD14u, &recomp_unit_0097, "recomp_unit_0097");
    runtime.register_function(0x0898AD1Cu, &recomp_unit_0097, "recomp_unit_0097");
    runtime.register_function(0x0898AD24u, &recomp_unit_0097, "recomp_unit_0097");
    runtime.register_function(0x0898AD2Cu, &recomp_unit_0097, "recomp_unit_0097");
    runtime.register_function(0x0898AD34u, &recomp_unit_0097, "recomp_unit_0097");
    runtime.register_function(0x0898AD3Cu, &recomp_unit_0097, "recomp_unit_0097");
    runtime.register_function(0x0898AD44u, &recomp_unit_0097, "recomp_unit_0097");
    runtime.register_function(0x0898AD4Cu, &recomp_unit_0097, "recomp_unit_0097");
    runtime.register_function(0x0898AD54u, &recomp_unit_0097, "recomp_unit_0097");
    runtime.register_function(0x0898AD5Cu, &recomp_unit_0097, "recomp_unit_0097");
    runtime.register_function(0x0898AD64u, &recomp_unit_0097, "recomp_unit_0097");
    runtime.register_function(0x0898AD6Cu, &recomp_unit_0097, "recomp_unit_0097");
    runtime.register_function(0x0898AD74u, &recomp_unit_0097, "recomp_unit_0097");
    runtime.register_function(0x0898AD7Cu, &recomp_unit_0097, "recomp_unit_0097");
    runtime.register_function(0x0898AD84u, &recomp_unit_0097, "recomp_unit_0097");
    runtime.register_function(0x0898AD8Cu, &recomp_unit_0097, "recomp_unit_0097");
    runtime.register_function(0x0898AD94u, &recomp_unit_0097, "recomp_unit_0097");
    runtime.register_function(0x0898AD9Cu, &recomp_unit_0097, "recomp_unit_0097");
    runtime.register_function(0x0898ADA4u, &recomp_unit_0097, "recomp_unit_0097");
    runtime.register_function(0x0898ADACu, &recomp_unit_0097, "recomp_unit_0097");
    runtime.register_function(0x0898ADB4u, &recomp_unit_0097, "recomp_unit_0097");
    runtime.register_function(0x0898ADBCu, &recomp_unit_0097, "recomp_unit_0097");
    runtime.register_function(0x0898ADC4u, &recomp_unit_0097, "recomp_unit_0097");
    runtime.register_function(0x0898ADCCu, &recomp_unit_0097, "recomp_unit_0097");
    runtime.register_function(0x0898ADD4u, &recomp_unit_0097, "recomp_unit_0097");
    runtime.register_function(0x0898ADDCu, &recomp_unit_0097, "recomp_unit_0097");
    runtime.register_function(0x0898ADE4u, &recomp_unit_0097, "recomp_unit_0097");
    runtime.register_function(0x0898ADECu, &recomp_unit_0097, "recomp_unit_0097");
    runtime.register_function(0x0898ADF4u, &recomp_unit_0097, "recomp_unit_0097");
    runtime.register_function(0x0898ADFCu, &recomp_unit_0097, "recomp_unit_0097");
    runtime.register_function(0x0898AE04u, &recomp_unit_0097, "recomp_unit_0097");
    runtime.register_function(0x0898AE0Cu, &recomp_unit_0097, "recomp_unit_0097");
    runtime.register_function(0x0898AE14u, &recomp_unit_0097, "recomp_unit_0097");
    runtime.register_function(0x0898AE1Cu, &recomp_unit_0097, "recomp_unit_0097");
    runtime.register_function(0x0898AE24u, &recomp_unit_0097, "recomp_unit_0097");
    runtime.register_function(0x0898AE2Cu, &recomp_unit_0097, "recomp_unit_0097");
    runtime.register_function(0x0898AE34u, &recomp_unit_0097, "recomp_unit_0097");
    runtime.register_function(0x0898AE3Cu, &recomp_unit_0097, "recomp_unit_0097");
    runtime.register_function(0x0898AE44u, &recomp_unit_0097, "recomp_unit_0097");
    runtime.register_function(0x0898AE4Cu, &recomp_unit_0097, "recomp_unit_0097");
    runtime.register_function(0x0898AE54u, &recomp_unit_0097, "recomp_unit_0097");
    runtime.register_function(0x0898AE5Cu, &recomp_unit_0097, "recomp_unit_0097");
    runtime.register_function(0x0898AE64u, &recomp_unit_0097, "recomp_unit_0097");
    runtime.register_function(0x0898AE6Cu, &recomp_unit_0097, "recomp_unit_0097");
    runtime.register_function(0x0898AE74u, &recomp_unit_0097, "recomp_unit_0097");
    runtime.register_function(0x0898AE7Cu, &recomp_unit_0097, "recomp_unit_0097");
    runtime.register_function(0x0898AE84u, &recomp_unit_0097, "recomp_unit_0097");
    runtime.register_function(0x0898AE8Cu, &recomp_unit_0097, "recomp_unit_0097");
    runtime.register_function(0x0898AE94u, &recomp_unit_0097, "recomp_unit_0097");
    runtime.register_function(0x0898AE9Cu, &recomp_unit_0097, "recomp_unit_0097");
    runtime.register_function(0x0898AEA4u, &recomp_unit_0097, "recomp_unit_0097");
    runtime.register_function(0x0898AEACu, &recomp_unit_0097, "recomp_unit_0097");
    runtime.register_function(0x0898AEB4u, &recomp_unit_0097, "recomp_unit_0097");
    runtime.register_function(0x0898AEBCu, &recomp_unit_0097, "recomp_unit_0097");
    runtime.register_function(0x0898AEC4u, &recomp_unit_0097, "recomp_unit_0097");
    runtime.register_function(0x0898AECCu, &recomp_unit_0097, "recomp_unit_0097");
    runtime.register_function(0x0898AED4u, &recomp_unit_0097, "recomp_unit_0097");
    runtime.register_function(0x0898AEDCu, &recomp_unit_0097, "recomp_unit_0097");
    runtime.register_function(0x0898AEE4u, &recomp_unit_0097, "recomp_unit_0097");
    runtime.register_function(0x0898AEECu, &recomp_unit_0097, "recomp_unit_0097");
    runtime.register_function(0x0898AEF4u, &recomp_unit_0097, "recomp_unit_0097");
    runtime.register_function(0x0898AEFCu, &recomp_unit_0097, "recomp_unit_0097");
    runtime.register_function(0x0898AF04u, &recomp_unit_0097, "recomp_unit_0097");
    runtime.register_function(0x0898AF0Cu, &recomp_unit_0097, "recomp_unit_0097");
    runtime.register_function(0x0898AF14u, &recomp_unit_0097, "recomp_unit_0097");
    runtime.register_function(0x0898AF1Cu, &recomp_unit_0097, "recomp_unit_0097");
    runtime.register_function(0x0898AF24u, &recomp_unit_0097, "recomp_unit_0097");
    runtime.register_function(0x0898AF2Cu, &recomp_unit_0097, "recomp_unit_0097");
    runtime.register_function(0x0898AF34u, &recomp_unit_0097, "recomp_unit_0097");
    runtime.register_function(0x0898AF3Cu, &recomp_unit_0097, "recomp_unit_0097");
    runtime.register_function(0x0898AF44u, &recomp_unit_0097, "recomp_unit_0097");
    runtime.register_function(0x0898AF4Cu, &recomp_unit_0097, "recomp_unit_0097");
    runtime.register_function(0x0898AF54u, &recomp_unit_0097, "recomp_unit_0097");
    runtime.register_function(0x0898AF5Cu, &recomp_unit_0097, "recomp_unit_0097");
    runtime.register_function(0x0898AF64u, &recomp_unit_0097, "recomp_unit_0097");
    runtime.register_function(0x0898AF6Cu, &recomp_unit_0097, "recomp_unit_0097");
    runtime.register_function(0x0898AF74u, &recomp_unit_0097, "recomp_unit_0097");
    runtime.register_function(0x0898AF7Cu, &recomp_unit_0097, "recomp_unit_0097");
    runtime.register_function(0x0898AF84u, &recomp_unit_0097, "recomp_unit_0097");
    runtime.register_function(0x0898AF8Cu, &recomp_unit_0097, "recomp_unit_0097");
    runtime.register_function(0x0898AF94u, &recomp_unit_0097, "recomp_unit_0097");
    runtime.register_function(0x0898AF9Cu, &recomp_unit_0097, "recomp_unit_0097");
    runtime.register_function(0x0898AFA4u, &recomp_unit_0097, "recomp_unit_0097");
    runtime.register_function(0x0898AFACu, &recomp_unit_0097, "recomp_unit_0097");
    runtime.register_function(0x0898AFB4u, &recomp_unit_0097, "recomp_unit_0097");
    runtime.register_function(0x0898AFBCu, &recomp_unit_0097, "recomp_unit_0097");
    runtime.register_function(0x0898AFC4u, &recomp_unit_0097, "recomp_unit_0097");
    runtime.register_function(0x0898AFCCu, &recomp_unit_0097, "recomp_unit_0097");
    runtime.register_function(0x0898AFD4u, &recomp_unit_0097, "recomp_unit_0097");
    runtime.register_function(0x0898AFDCu, &recomp_unit_0097, "recomp_unit_0097");
    runtime.register_function(0x0898AFE4u, &recomp_unit_0097, "recomp_unit_0097");
    runtime.register_function(0x0898AFECu, &recomp_unit_0097, "recomp_unit_0097");
    runtime.register_function(0x0898AFF4u, &recomp_unit_0097, "recomp_unit_0097");
    runtime.register_function(0x0898AFFCu, &recomp_unit_0097, "recomp_unit_0097");
    runtime.register_function(0x0898B004u, &recomp_unit_0097, "recomp_unit_0097");
    runtime.register_function(0x0898B00Cu, &recomp_unit_0097, "recomp_unit_0097");
    runtime.register_function(0x0898B014u, &recomp_unit_0097, "recomp_unit_0097");
    runtime.register_function(0x0898B01Cu, &recomp_unit_0097, "recomp_unit_0097");
    runtime.register_function(0x0898B024u, &recomp_unit_0097, "recomp_unit_0097");
    runtime.register_function(0x0898B02Cu, &recomp_unit_0097, "recomp_unit_0097");
    runtime.register_function(0x0898B034u, &recomp_unit_0097, "recomp_unit_0097");
    runtime.register_function(0x0898B03Cu, &recomp_unit_0097, "recomp_unit_0097");
    runtime.register_function(0x0898B044u, &recomp_unit_0097, "recomp_unit_0097");
    runtime.register_function(0x0898B054u, &recomp_unit_0097, "recomp_unit_0097");
    runtime.register_function(0x0898B06Cu, &recomp_unit_0097, "recomp_unit_0097");
    runtime.register_function(0x0898B090u, &recomp_unit_0097, "recomp_unit_0097");
    runtime.register_function(0x0898B098u, &recomp_unit_0097, "recomp_unit_0097");
    runtime.register_function(0x0898B0B0u, &recomp_unit_0097, "recomp_unit_0097");
    runtime.register_function(0x0898B0C8u, &recomp_unit_0097, "recomp_unit_0097");
    runtime.register_function(0x0898B0ECu, &recomp_unit_0097, "recomp_unit_0097");
    runtime.register_function(0x0898B0F4u, &recomp_unit_0097, "recomp_unit_0097");
    runtime.register_function(0x0898B10Cu, &recomp_unit_0097, "recomp_unit_0097");
    runtime.register_function(0x0898B124u, &recomp_unit_0097, "recomp_unit_0097");
    runtime.register_function(0x0898B148u, &recomp_unit_0097, "recomp_unit_0097");
    runtime.register_function(0x0898B150u, &recomp_unit_0097, "recomp_unit_0097");
    runtime.register_function(0x0898B168u, &recomp_unit_0097, "recomp_unit_0097");
    runtime.register_function(0x0898B180u, &recomp_unit_0097, "recomp_unit_0097");
    runtime.register_function(0x0898B1A4u, &recomp_unit_0097, "recomp_unit_0097");
    runtime.register_function(0x0898B1ACu, &recomp_unit_0097, "recomp_unit_0097");
    runtime.register_function(0x0898B1C4u, &recomp_unit_0097, "recomp_unit_0097");
    runtime.register_function(0x0898B1DCu, &recomp_unit_0097, "recomp_unit_0097");
    runtime.register_function(0x0898B200u, &recomp_unit_0097, "recomp_unit_0097");
    runtime.register_function(0x0898B208u, &recomp_unit_0097, "recomp_unit_0097");
    runtime.register_function(0x0898B220u, &recomp_unit_0097, "recomp_unit_0097");
    runtime.register_function(0x0898B238u, &recomp_unit_0097, "recomp_unit_0097");
    runtime.register_function(0x0898B25Cu, &recomp_unit_0097, "recomp_unit_0097");
    runtime.register_function(0x0898B264u, &recomp_unit_0097, "recomp_unit_0097");
    runtime.register_function(0x0898B27Cu, &recomp_unit_0097, "recomp_unit_0097");
    runtime.register_function(0x0898B294u, &recomp_unit_0097, "recomp_unit_0097");
    runtime.register_function(0x0898B2B8u, &recomp_unit_0097, "recomp_unit_0097");
    runtime.register_function(0x0898B2C0u, &recomp_unit_0097, "recomp_unit_0097");
    runtime.register_function(0x0898B2D8u, &recomp_unit_0097, "recomp_unit_0097");
    runtime.register_function(0x0898B2F0u, &recomp_unit_0097, "recomp_unit_0097");
    runtime.register_function(0x0898B314u, &recomp_unit_0097, "recomp_unit_0097");
    runtime.register_function(0x0898B31Cu, &recomp_unit_0097, "recomp_unit_0097");
    runtime.register_function(0x0898B334u, &recomp_unit_0097, "recomp_unit_0097");
    runtime.register_function(0x0898B34Cu, &recomp_unit_0097, "recomp_unit_0097");
    runtime.register_function(0x0898B370u, &recomp_unit_0097, "recomp_unit_0097");
    runtime.register_function(0x0898B378u, &recomp_unit_0097, "recomp_unit_0097");
    runtime.register_function(0x0898B390u, &recomp_unit_0097, "recomp_unit_0097");
    runtime.register_function(0x0898B3A8u, &recomp_unit_0097, "recomp_unit_0097");
    runtime.register_function(0x0898B3CCu, &recomp_unit_0097, "recomp_unit_0097");
    runtime.register_function(0x0898B3D4u, &recomp_unit_0097, "recomp_unit_0097");
    runtime.register_function(0x0898B3ECu, &recomp_unit_0097, "recomp_unit_0097");
    runtime.register_function(0x0898B404u, &recomp_unit_0097, "recomp_unit_0097");
    runtime.register_function(0x0898B428u, &recomp_unit_0097, "recomp_unit_0097");
    runtime.register_function(0x0898B430u, &recomp_unit_0097, "recomp_unit_0097");
    runtime.register_function(0x0898B448u, &recomp_unit_0097, "recomp_unit_0097");
    runtime.register_function(0x0898B460u, &recomp_unit_0097, "recomp_unit_0097");
    runtime.register_function(0x0898B484u, &recomp_unit_0097, "recomp_unit_0097");
    runtime.register_function(0x0898B48Cu, &recomp_unit_0097, "recomp_unit_0097");
    runtime.register_function(0x0898B4A4u, &recomp_unit_0097, "recomp_unit_0097");
    runtime.register_function(0x0898B4BCu, &recomp_unit_0097, "recomp_unit_0097");
    runtime.register_function(0x0898B4E0u, &recomp_unit_0097, "recomp_unit_0097");
    runtime.register_function(0x0898B4E8u, &recomp_unit_0097, "recomp_unit_0097");
    runtime.register_function(0x0898B500u, &recomp_unit_0097, "recomp_unit_0097");
    runtime.register_function(0x0898B518u, &recomp_unit_0097, "recomp_unit_0097");
    runtime.register_function(0x0898B53Cu, &recomp_unit_0097, "recomp_unit_0097");
    runtime.register_function(0x0898B544u, &recomp_unit_0097, "recomp_unit_0097");
    runtime.register_function(0x0898B55Cu, &recomp_unit_0097, "recomp_unit_0097");
    runtime.register_function(0x0898B574u, &recomp_unit_0097, "recomp_unit_0097");
    runtime.register_function(0x0898B598u, &recomp_unit_0097, "recomp_unit_0097");
    runtime.register_function(0x0898B5A0u, &recomp_unit_0097, "recomp_unit_0097");
    runtime.register_function(0x0898B5B8u, &recomp_unit_0097, "recomp_unit_0097");
    runtime.register_function(0x0898B5D0u, &recomp_unit_0097, "recomp_unit_0097");
    runtime.register_function(0x0898B5F4u, &recomp_unit_0097, "recomp_unit_0097");
    runtime.register_function(0x0898B5FCu, &recomp_unit_0097, "recomp_unit_0097");
    runtime.register_function(0x0898B614u, &recomp_unit_0097, "recomp_unit_0097");
    runtime.register_function(0x0898B62Cu, &recomp_unit_0097, "recomp_unit_0097");
    runtime.register_function(0x0898B650u, &recomp_unit_0097, "recomp_unit_0097");
    runtime.register_function(0x0898B658u, &recomp_unit_0097, "recomp_unit_0097");
    runtime.register_function(0x0898B670u, &recomp_unit_0097, "recomp_unit_0097");
    runtime.register_function(0x0898B688u, &recomp_unit_0097, "recomp_unit_0097");
    runtime.register_function(0x0898B6ACu, &recomp_unit_0097, "recomp_unit_0097");
    runtime.register_function(0x0898B6B4u, &recomp_unit_0097, "recomp_unit_0097");
    runtime.register_function(0x0898B6CCu, &recomp_unit_0097, "recomp_unit_0097");
    runtime.register_function(0x0898B6E4u, &recomp_unit_0097, "recomp_unit_0097");
    runtime.register_function(0x0898B708u, &recomp_unit_0097, "recomp_unit_0097");
    runtime.register_function(0x0898B710u, &recomp_unit_0097, "recomp_unit_0097");
    runtime.register_function(0x0898B728u, &recomp_unit_0097, "recomp_unit_0097");
    runtime.register_function(0x0898B740u, &recomp_unit_0097, "recomp_unit_0097");
    runtime.register_function(0x0898B764u, &recomp_unit_0097, "recomp_unit_0097");
    runtime.register_function(0x0898B76Cu, &recomp_unit_0097, "recomp_unit_0097");
    runtime.register_function(0x0898B784u, &recomp_unit_0097, "recomp_unit_0097");
    runtime.register_function(0x0898B79Cu, &recomp_unit_0097, "recomp_unit_0097");
    runtime.register_function(0x0898B7C0u, &recomp_unit_0097, "recomp_unit_0097");
    runtime.register_function(0x0898B7C8u, &recomp_unit_0097, "recomp_unit_0097");
    runtime.register_function(0x0898B7E0u, &recomp_unit_0097, "recomp_unit_0097");
    runtime.register_function(0x0898B7F8u, &recomp_unit_0097, "recomp_unit_0097");
    runtime.register_function(0x0898B81Cu, &recomp_unit_0097, "recomp_unit_0097");
    runtime.register_function(0x0898B824u, &recomp_unit_0097, "recomp_unit_0097");
    runtime.register_function(0x0898B83Cu, &recomp_unit_0097, "recomp_unit_0097");
    runtime.register_function(0x0898B854u, &recomp_unit_0097, "recomp_unit_0097");
    runtime.register_function(0x0898B878u, &recomp_unit_0097, "recomp_unit_0097");
    runtime.register_function(0x0898B880u, &recomp_unit_0097, "recomp_unit_0097");
    runtime.register_function(0x0898B898u, &recomp_unit_0097, "recomp_unit_0097");
    runtime.register_function(0x0898B8B0u, &recomp_unit_0097, "recomp_unit_0097");
    runtime.register_function(0x0898B8D4u, &recomp_unit_0097, "recomp_unit_0097");
    runtime.register_function(0x0898B8DCu, &recomp_unit_0097, "recomp_unit_0097");
    runtime.register_function(0x0898B8F4u, &recomp_unit_0097, "recomp_unit_0097");
    runtime.register_function(0x0898B90Cu, &recomp_unit_0097, "recomp_unit_0097");
    runtime.register_function(0x0898B930u, &recomp_unit_0097, "recomp_unit_0097");
    runtime.register_function(0x0898B938u, &recomp_unit_0097, "recomp_unit_0097");
    runtime.register_function(0x0898B950u, &recomp_unit_0097, "recomp_unit_0097");
    runtime.register_function(0x0898B968u, &recomp_unit_0097, "recomp_unit_0097");
    runtime.register_function(0x0898B98Cu, &recomp_unit_0097, "recomp_unit_0097");
    runtime.register_function(0x0898B994u, &recomp_unit_0097, "recomp_unit_0097");
    runtime.register_function(0x0898B9ACu, &recomp_unit_0097, "recomp_unit_0097");
    runtime.register_function(0x0898B9C4u, &recomp_unit_0097, "recomp_unit_0097");
    runtime.register_function(0x0898B9E8u, &recomp_unit_0097, "recomp_unit_0097");
    runtime.register_function(0x0898B9F0u, &recomp_unit_0097, "recomp_unit_0097");
    runtime.register_function(0x0898BA08u, &recomp_unit_0097, "recomp_unit_0097");
    runtime.register_function(0x0898BA20u, &recomp_unit_0097, "recomp_unit_0097");
    runtime.register_function(0x0898BA44u, &recomp_unit_0097, "recomp_unit_0097");
    runtime.register_function(0x0898BA4Cu, &recomp_unit_0097, "recomp_unit_0097");
    runtime.register_function(0x0898BA64u, &recomp_unit_0097, "recomp_unit_0097");
    runtime.register_function(0x0898BA7Cu, &recomp_unit_0097, "recomp_unit_0097");
    runtime.register_function(0x0898BAA0u, &recomp_unit_0097, "recomp_unit_0097");
    runtime.register_function(0x0898BAA8u, &recomp_unit_0097, "recomp_unit_0097");
    runtime.register_function(0x0898BAC0u, &recomp_unit_0097, "recomp_unit_0097");
    runtime.register_function(0x0898BAD8u, &recomp_unit_0097, "recomp_unit_0097");
    runtime.register_function(0x0898BAFCu, &recomp_unit_0097, "recomp_unit_0097");
    runtime.register_function(0x0898BB04u, &recomp_unit_0097, "recomp_unit_0097");
    runtime.register_function(0x0898BB1Cu, &recomp_unit_0097, "recomp_unit_0097");
    runtime.register_function(0x0898BB34u, &recomp_unit_0097, "recomp_unit_0097");
    runtime.register_function(0x0898BB58u, &recomp_unit_0097, "recomp_unit_0097");
    runtime.register_function(0x0898BB60u, &recomp_unit_0097, "recomp_unit_0097");
    runtime.register_function(0x0898BB78u, &recomp_unit_0097, "recomp_unit_0097");
    runtime.register_function(0x0898BB90u, &recomp_unit_0097, "recomp_unit_0097");
    runtime.register_function(0x0898BBB4u, &recomp_unit_0097, "recomp_unit_0097");
    runtime.register_function(0x0898BBBCu, &recomp_unit_0097, "recomp_unit_0097");
    runtime.register_function(0x0898BBD4u, &recomp_unit_0097, "recomp_unit_0097");
    runtime.register_function(0x0898BBECu, &recomp_unit_0097, "recomp_unit_0097");
    runtime.register_function(0x0898BC00u, &recomp_unit_0097, "recomp_unit_0097");
    runtime.register_function(0x0898BC08u, &recomp_unit_0097, "recomp_unit_0097");
    runtime.register_function(0x0898BC20u, &recomp_unit_0097, "recomp_unit_0097");
    runtime.register_function(0x0898BC34u, &recomp_unit_0097, "recomp_unit_0097");
    runtime.register_function(0x0898BC48u, &recomp_unit_0097, "recomp_unit_0097");
    runtime.register_function(0x0898BC64u, &recomp_unit_0097, "recomp_unit_0097");
    runtime.register_function(0x0898BC7Cu, &recomp_unit_0097, "recomp_unit_0097");
    runtime.register_function(0x0898BC8Cu, &recomp_unit_0097, "recomp_unit_0097");
    runtime.register_function(0x0898BC9Cu, &recomp_unit_0097, "recomp_unit_0097");
    runtime.register_function(0x0898BCF0u, &recomp_unit_0097, "recomp_unit_0097");
    runtime.register_function(0x0898BD00u, &recomp_unit_0097, "recomp_unit_0097");
    runtime.register_function(0x0898BD10u, &recomp_unit_0097, "recomp_unit_0097");
    runtime.register_function(0x0898BD20u, &recomp_unit_0097, "recomp_unit_0097");
    runtime.register_function(0x0898BD30u, &recomp_unit_0097, "recomp_unit_0097");
    runtime.register_function(0x0898BD40u, &recomp_unit_0097, "recomp_unit_0097");
    runtime.register_function(0x0898BD50u, &recomp_unit_0097, "recomp_unit_0097");
    runtime.register_function(0x0898BD68u, &recomp_unit_0097, "recomp_unit_0097");
    runtime.register_function(0x0898BD7Cu, &recomp_unit_0097, "recomp_unit_0097");
    runtime.register_function(0x0898BD84u, &recomp_unit_0097, "recomp_unit_0097");
    runtime.register_function(0x0898BD9Cu, &recomp_unit_0097, "recomp_unit_0097");
    runtime.register_function(0x0898BDB0u, &recomp_unit_0097, "recomp_unit_0097");
    runtime.register_function(0x0898BDC4u, &recomp_unit_0097, "recomp_unit_0097");
    runtime.register_function(0x0898BDE0u, &recomp_unit_0097, "recomp_unit_0097");
    runtime.register_function(0x0898BDF8u, &recomp_unit_0097, "recomp_unit_0097");
    runtime.register_function(0x0898BE08u, &recomp_unit_0097, "recomp_unit_0097");
    runtime.register_function(0x0898BE18u, &recomp_unit_0097, "recomp_unit_0097");
    runtime.register_function(0x0898BE6Cu, &recomp_unit_0097, "recomp_unit_0097");
    runtime.register_function(0x0898BE7Cu, &recomp_unit_0097, "recomp_unit_0097");
    runtime.register_function(0x0898BE8Cu, &recomp_unit_0097, "recomp_unit_0097");
    runtime.register_function(0x0898BE9Cu, &recomp_unit_0097, "recomp_unit_0097");
    runtime.register_function(0x0898BEACu, &recomp_unit_0097, "recomp_unit_0097");
    runtime.register_function(0x0898BEBCu, &recomp_unit_0097, "recomp_unit_0097");
    runtime.register_function(0x0898BED4u, &recomp_unit_0097, "recomp_unit_0097");
    runtime.register_function(0x0898BEE8u, &recomp_unit_0097, "recomp_unit_0097");
    runtime.register_function(0x0898BEF0u, &recomp_unit_0097, "recomp_unit_0097");
    runtime.register_function(0x0898BF08u, &recomp_unit_0097, "recomp_unit_0097");
    runtime.register_function(0x0898BF1Cu, &recomp_unit_0097, "recomp_unit_0097");
    runtime.register_function(0x0898BF30u, &recomp_unit_0097, "recomp_unit_0097");
    runtime.register_function(0x0898BF4Cu, &recomp_unit_0097, "recomp_unit_0097");
    runtime.register_function(0x0898BF64u, &recomp_unit_0097, "recomp_unit_0097");
    runtime.register_function(0x0898BF74u, &recomp_unit_0097, "recomp_unit_0097");
    runtime.register_function(0x0898BF84u, &recomp_unit_0097, "recomp_unit_0097");
    runtime.register_function(0x0898BFD8u, &recomp_unit_0097, "recomp_unit_0097");
    runtime.register_function(0x0898BFE8u, &recomp_unit_0097, "recomp_unit_0097");
    runtime.register_function(0x0898BFF8u, &recomp_unit_0097, "recomp_unit_0097");
}
} // namespace psprecomp
