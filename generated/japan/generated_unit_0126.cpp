#include "psprecomp/runtime.hpp"
#include "generated_units.hpp"
#include <bit>
#include <cmath>
#include <cstdint>
#include <limits>

namespace psprecomp {
static const std::uint16_t kEntryIds_recomp_unit_0126[4083] = {
    1, 0, 0, 0, 0, 0, 0, 0, 2, 0, 0, 0, 0, 0, 0, 3, 0, 0, 0, 0, 0, 4, 0, 0, 0, 0, 0, 5, 0, 0, 0, 0,
    0, 6, 0, 0, 0, 0, 0, 7, 0, 0, 0, 0, 0, 8, 0, 0, 0, 0, 0, 9, 0, 0, 0, 0, 0, 10, 0, 0, 0, 0, 0, 11,
    0, 0, 0, 0, 0, 12, 0, 0, 0, 13, 0, 0, 0, 0, 0, 0, 0, 0, 14, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 15, 0, 0, 16, 17, 0, 0, 0, 18, 0, 19, 0, 0, 0, 20, 0, 21, 22,
    23, 0, 0, 0, 0, 0, 0, 0, 24, 0, 0, 0, 25, 0, 0, 0, 0, 0, 26, 27, 0, 28, 0, 0, 0, 0, 0, 29, 30, 0, 31, 0,
    0, 0, 0, 0, 32, 33, 0, 34, 0, 0, 0, 0, 0, 35, 0, 0, 36, 0, 0, 37, 0, 0, 0, 0, 0, 0, 0, 0, 38, 0, 0, 0,
    0, 39, 0, 0, 0, 0, 40, 0, 0, 41, 42, 0, 0, 43, 0, 0, 0, 0, 0, 44, 45, 0, 46, 0, 0, 0, 0, 0, 47, 0, 0, 48,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 49, 50, 0, 51, 0, 0, 0, 0, 0, 52, 0, 0, 0, 0, 53,
    0, 0, 54, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 55, 56, 0, 57, 0, 0, 0, 0, 0, 58,
    0, 0, 59, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    60, 0, 0, 61, 0, 0, 0, 0, 0, 62, 0, 0, 0, 0, 63, 0, 0, 64, 0, 0, 0, 0, 0, 65, 0, 0, 0, 0, 66, 0, 0, 67,
    68, 0, 69, 0, 0, 0, 0, 0, 0, 0, 0, 70, 0, 0, 71, 0, 0, 0, 72, 0, 73, 0, 0, 74, 75, 0, 0, 0, 76, 0, 0, 0,
    0, 0, 77, 0, 0, 78, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 79, 80, 0, 0, 0, 81, 82, 0, 0, 0, 83, 84, 0, 0, 0, 0, 0, 85, 0, 0, 86, 0, 0, 0, 87, 88, 0, 0, 0, 89,
    90, 0, 0, 0, 91, 92, 0, 0, 0, 0, 0, 93, 0, 0, 94, 95, 0, 96, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 97,
    0, 0, 98, 0, 0, 99, 0, 0, 0, 100, 0, 0, 0, 0, 0, 101, 0, 102, 0, 0, 103, 104, 0, 0, 105, 106, 0, 0, 0, 0, 0, 0,
    0, 107, 0, 0, 0, 0, 0, 108, 0, 0, 109, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 110, 0, 0,
    0, 0, 0, 111, 0, 0, 112, 0, 0, 0, 0, 0, 0, 0, 113, 0, 0, 114, 115, 0, 116, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 117, 0, 0, 118, 0, 0, 119, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 120, 0, 0, 121,
    0, 122, 0, 0, 123, 0, 124, 0, 125, 0, 0, 0, 126, 0, 127, 0, 0, 128, 129, 0, 0, 0, 0, 0, 0, 130, 0, 0, 0, 0, 0, 131,
    0, 0, 132, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 133, 0, 0, 134, 135, 0, 136, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 137, 0, 0, 0, 0, 0, 138, 139, 0, 140, 0, 0, 0, 0, 0, 141, 142, 0, 143, 0, 0, 0, 0, 0,
    144, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 145, 0, 0, 146, 0, 0, 0, 0, 147, 0, 0, 0, 0, 148, 0, 0, 0, 0, 0, 149, 0, 0, 0, 0, 150, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 151, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 152, 0, 0, 0, 0, 153, 0,
    154, 155, 0, 0, 156, 0, 0, 0, 0, 0, 0, 157, 0, 0, 0, 158, 0, 0, 0, 0, 0, 0, 159, 0, 160, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    161, 0, 162, 0, 0, 0, 0, 0, 0, 0, 0, 163, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 164,
    0, 0, 0, 0, 0, 165, 0, 0, 0, 0, 0, 166, 0, 0, 0, 0, 0, 0, 0, 0, 167, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 168, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 169, 0, 170, 0, 0, 0, 171, 0, 0, 0, 172, 0, 0, 0, 173, 0, 0, 0, 0, 0, 174, 175, 0, 176, 0, 0, 0, 0,
    0, 0, 0, 177, 0, 0, 0, 0, 0, 0, 0, 0, 0, 178, 0, 0, 0, 0, 0, 0, 0, 0, 179, 0, 0, 0, 0, 0, 0, 180, 0, 0,
    0, 0, 181, 0, 0, 0, 0, 0, 0, 0, 0, 0, 182, 0, 0, 0, 0, 0, 0, 0, 0, 0, 183, 0, 0, 0, 0, 0, 0, 184, 0, 0,
    0, 0, 0, 0, 0, 185, 0, 0, 0, 186, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 187, 0, 0, 0, 0, 188, 0, 0, 0, 0, 0, 0,
    0, 0, 189, 0, 0, 190, 0, 0, 191, 0, 0, 0, 192, 0, 0, 193, 0, 194, 0, 0, 195, 0, 196, 0, 0, 0, 0, 197, 198, 0, 0, 0,
    0, 0, 0, 0, 0, 199, 0, 0, 200, 0, 0, 0, 0, 0, 201, 0, 0, 0, 202, 0, 0, 203, 0, 0, 0, 0, 0, 0, 0, 0, 0, 204,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 205, 0, 0, 0, 0, 0, 0, 206, 0, 0, 0, 0, 0, 0, 0, 207, 0, 0, 0, 208, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 209, 0, 0, 0, 0, 210, 0, 0, 0, 0, 211, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 212, 0,
    0, 213, 0, 0, 214, 0, 0, 0, 215, 0, 0, 216, 0, 217, 0, 0, 218, 0, 219, 0, 0, 0, 0, 220, 221, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 222, 0, 0, 223, 0, 0, 0, 0, 0, 224, 0, 0, 0, 225, 0, 0, 226, 0, 0, 0, 0, 0, 0, 0, 0, 0, 227, 0, 0,
    0, 0, 0, 0, 0, 0, 228, 0, 0, 0, 0, 0, 0, 229, 0, 0, 0, 0, 0, 0, 0, 230, 0, 0, 0, 231, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 232, 0, 0, 233, 0, 0, 234, 0, 0, 0, 235, 0, 0, 236, 0, 237, 0, 0, 238, 0, 239, 0, 0, 0, 0, 240,
    241, 0, 0, 0, 0, 0, 242, 0, 0, 243, 0, 0, 244, 0, 0, 0, 0, 0, 0, 0, 0, 0, 245, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    246, 0, 0, 0, 0, 0, 0, 247, 0, 0, 0, 0, 0, 0, 0, 248, 0, 0, 0, 249, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 250, 0, 0, 0, 0, 251, 0, 0, 0, 0, 252, 0, 0, 0, 0, 253, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 254, 0,
    0, 255, 0, 0, 256, 0, 0, 0, 257, 0, 0, 258, 0, 259, 0, 0, 260, 0, 261, 0, 0, 0, 0, 262, 263, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 264, 0, 0, 265, 0, 0, 0, 0, 0, 266, 0, 0, 0, 267, 0, 0, 268, 0, 0, 0, 0, 0, 0, 0, 0, 0, 269,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 270, 0, 0, 0, 0, 0, 0, 271, 0, 0, 0, 0, 0, 0, 0, 272, 0, 0, 0, 273, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 274, 0, 0, 275, 0, 0, 276, 0, 0, 0, 277, 0, 0, 278, 0, 279, 0, 0, 280, 0, 281, 0,
    0, 0, 0, 282, 283, 0, 0, 0, 0, 0, 284, 0, 0, 285, 0, 0, 286, 0, 0, 0, 0, 0, 0, 0, 0, 0, 287, 0, 0, 0, 0, 0,
    0, 0, 0, 288, 0, 0, 0, 0, 0, 0, 289, 0, 0, 0, 0, 0, 0, 0, 290, 0, 0, 0, 291, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 292, 0, 0, 293, 0, 0, 294, 0, 0, 0, 295, 0, 0, 296, 0, 297, 0, 0, 298, 0, 299, 0, 0, 0, 0, 300, 301, 0,
    0, 0, 0, 0, 302, 0, 0, 303, 0, 0, 304, 0, 0, 305, 0, 0, 0, 0, 0, 306, 0, 0, 0, 0, 0, 0, 0, 0, 307, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 308, 309, 0, 0, 310, 0, 0, 311, 0, 0, 312, 0, 313, 0, 0, 314, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 315, 0, 0, 316, 0, 317, 0, 0, 0, 0, 0, 0, 0, 0, 0, 318, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 319, 0, 0, 0, 320, 0, 321, 0, 0, 0, 0, 0, 0, 0, 0, 0, 322, 0, 323, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 324, 0, 0, 325, 0, 0, 0, 0, 0, 0, 0, 0, 326, 0, 0, 327, 0, 0, 0, 0, 0, 0, 0, 0, 328, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 329, 0, 0, 0, 0, 0, 330, 0, 0, 0, 331, 0, 0, 0, 0, 0, 332, 0, 0, 0, 333, 0,
    0, 0, 334, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 335, 0, 0, 0, 0, 336, 0, 337,
    338, 0, 0, 339, 0, 340, 0, 0, 0, 0, 341, 0, 342, 0, 0, 0, 0, 0, 0, 0, 343, 0, 344, 0, 345, 0, 0, 0, 0, 346, 0, 347,
    0, 348, 0, 0, 0, 0, 349, 0, 350, 0, 351, 0, 0, 0, 352, 0, 353, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 354, 0, 0, 0, 0, 0, 355, 356, 0, 0, 357, 0, 358, 0, 0, 359, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 360, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 361, 0, 0, 362, 0, 363, 0, 0, 364, 0, 365, 0,
    0, 0, 0, 0, 0, 0, 366, 0, 0, 0, 367, 0, 0, 368, 0, 0, 369, 0, 0, 0, 370, 0, 0, 371, 0, 0, 372, 0, 0, 0, 373, 0,
    0, 374, 0, 0, 375, 0, 0, 0, 376, 0, 0, 377, 0, 0, 378, 0, 0, 0, 379, 0, 0, 380, 0, 0, 381, 0, 0, 0, 382, 0, 0, 383,
    0, 0, 384, 0, 0, 0, 385, 0, 0, 386, 0, 0, 387, 0, 0, 0, 388, 0, 0, 389, 0, 0, 390, 0, 0, 0, 391, 0, 0, 392, 0, 0,
    393, 0, 0, 0, 394, 0, 0, 395, 0, 0, 396, 0, 0, 0, 397, 0, 0, 398, 0, 0, 399, 0, 0, 0, 400, 0, 0, 401, 0, 0, 402, 0,
    0, 0, 0, 0, 403, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 404, 0, 405, 0, 406, 0, 0, 407, 0, 0, 0, 0, 0, 0, 408, 0, 0,
    0, 409, 0, 0, 0, 0, 410, 0, 0, 0, 411, 0, 0, 412, 0, 0, 0, 413, 0, 0, 0, 0, 0, 0, 414, 0, 415, 0, 0, 416, 0, 0,
    0, 417, 0, 0, 0, 418, 0, 0, 0, 419, 0, 0, 420, 0, 0, 0, 421, 0, 0, 0, 0, 0, 0, 422, 0, 423, 0, 0, 424, 0, 0, 0,
    425, 0, 0, 0, 426, 0, 0, 0, 427, 0, 0, 428, 0, 0, 0, 429, 0, 0, 0, 0, 0, 0, 430, 0, 431, 0, 0, 432, 0, 0, 0, 433,
    0, 0, 0, 434, 0, 0, 0, 435, 0, 0, 436, 0, 0, 0, 437, 0, 0, 0, 0, 0, 0, 438, 0, 439, 0, 0, 440, 0, 0, 0, 441, 0,
    0, 0, 442, 0, 0, 0, 443, 0, 0, 444, 0, 0, 0, 445, 0, 0, 0, 0, 0, 0, 446, 0, 447, 0, 0, 448, 0, 0, 0, 449, 0, 0,
    0, 450, 0, 0, 0, 451, 0, 0, 452, 0, 0, 0, 453, 0, 0, 0, 0, 0, 0, 454, 0, 455, 0, 0, 456, 0, 0, 0, 457, 0, 0, 0,
    458, 0, 0, 0, 459, 0, 0, 460, 0, 0, 0, 461, 0, 0, 0, 0, 0, 0, 462, 0, 463, 0, 0, 464, 0, 0, 0, 465, 0, 0, 0, 466,
    0, 0, 0, 467, 0, 0, 468, 0, 0, 0, 469, 0, 0, 0, 0, 0, 0, 470, 0, 471, 0, 0, 472, 0, 0, 0, 473, 0, 0, 0, 474, 0,
    0, 0, 475, 0, 0, 476, 0, 0, 0, 477, 0, 0, 0, 0, 0, 0, 478, 0, 479, 0, 0, 480, 0, 0, 0, 481, 0, 0, 0, 0, 0, 0,
    0, 482, 0, 0, 0, 483, 0, 0, 484, 0, 0, 0, 485, 0, 0, 486, 0, 0, 0, 0, 0, 0, 487, 0, 488, 0, 0, 489, 0, 0, 0, 490,
    491, 0, 0, 492, 0, 0, 0, 493, 0, 0, 0, 494, 0, 0, 495, 0, 0, 0, 496, 0, 0, 497, 0, 0, 0, 0, 0, 0, 498, 0, 499, 0,
    0, 500, 0, 0, 0, 501, 502, 0, 0, 503, 0, 0, 0, 504, 0, 0, 0, 505, 0, 0, 506, 0, 0, 0, 507, 0, 0, 508, 0, 0, 0, 0,
    0, 0, 509, 0, 510, 0, 0, 511, 0, 0, 0, 512, 513, 0, 0, 514, 0, 0, 0, 0, 0, 0, 515, 0, 0, 516, 0, 517, 0, 0, 518, 0,
    519, 0, 0, 520, 0, 521, 0, 522, 0, 0, 523, 0, 524, 0, 0, 525, 0, 526, 0, 0, 527, 0, 0, 0, 0, 0, 528, 0, 0, 0, 0, 0,
    0, 529, 0, 530, 0, 0, 0, 531, 0, 0, 0, 0, 0, 0, 532, 0, 533, 0, 0, 0, 534, 0, 0, 0, 0, 0, 0, 535, 0, 536, 0, 0,
    0, 537, 0, 0, 0, 0, 0, 0, 538, 0, 539, 0, 0, 0, 540, 0, 0, 0, 0, 0, 0, 541, 0, 542, 0, 0, 0, 543, 0, 0, 0, 0,
    0, 0, 544, 0, 545, 0, 0, 0, 546, 0, 0, 0, 0, 0, 0, 547, 0, 548, 0, 0, 0, 549, 0, 0, 0, 0, 0, 0, 550, 0, 551, 0,
    0, 0, 552, 0, 0, 0, 0, 0, 0, 553, 0, 554, 0, 0, 0, 555, 0, 0, 0, 0, 0, 0, 556, 0, 557, 0, 0, 0, 558, 0, 0, 0,
    0, 0, 0, 559, 0, 560, 0, 0, 0, 561, 0, 0, 0, 0, 0, 0, 562, 0, 563, 0, 0, 0, 564, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 565, 0, 0, 0, 566, 0, 0, 0, 0, 567, 0, 0, 568, 0, 0, 0, 569, 0, 0, 0, 0, 570, 0, 0, 0, 571, 0,
    0, 572, 0, 0, 573, 0, 574, 0, 0, 0, 0, 575, 0, 576, 0, 0, 0, 0, 0, 577, 0, 578, 0, 0, 0, 0, 579, 0, 0, 580, 0, 581,
    582, 0, 0, 583, 0, 0, 0, 584, 0, 0, 585, 0, 0, 586, 0, 587, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 588, 0, 0, 0, 0, 589,
    0, 0, 0, 0, 0, 590, 0, 0, 591, 0, 0, 0, 0, 0, 0, 0, 592, 0, 0, 0, 0, 593, 0, 0, 0, 0, 0, 594, 0, 0, 595, 0,
    0, 0, 0, 0, 0, 0, 596, 0, 0, 0, 0, 597, 0, 0, 0, 0, 0, 598, 0, 0, 599, 0, 0, 0, 0, 0, 0, 0, 600, 0, 0, 0,
    0, 0, 0, 0, 0, 601, 0, 0, 0, 0, 0, 0, 0, 0, 602, 0, 0, 0, 0, 0, 0, 0, 0, 603, 0, 0, 0, 0, 0, 0, 0, 0,
    604, 0, 0, 0, 0, 0, 0, 0, 0, 605, 0, 0, 0, 0, 0, 0, 0, 0, 606, 0, 0, 0, 0, 607, 0, 0, 0, 0, 0, 608, 0, 0,
    609, 0, 0, 0, 0, 610, 0, 611, 0, 0, 612, 0, 0, 0, 613, 0, 614, 0, 0, 0, 0, 615, 0, 0, 0, 0, 0, 616, 0, 0, 617, 0,
    0, 0, 0, 618, 0, 619, 0, 0, 620, 0, 0, 0, 621, 0, 622, 0, 0, 0, 0, 623, 0, 0, 0, 0, 0, 624, 0, 0, 625, 0, 0, 0,
    0, 626, 0, 627, 0, 0, 628, 0, 0, 0, 629, 0, 630, 0, 0, 0, 0, 0, 631, 0, 632, 0, 0, 633, 0, 0, 0, 634, 0, 635, 0, 0,
    0, 0, 0, 636, 0, 637, 0, 0, 638, 0, 0, 0, 639, 0, 640, 0, 0, 0, 0, 0, 641, 0, 642, 0, 0, 643, 0, 0, 0, 644, 0, 645,
    0, 0, 0, 0, 0, 646, 0, 647, 0, 0, 648, 0, 0, 0, 649, 0, 650, 0, 0, 0, 0, 0, 651, 0, 652, 0, 0, 653, 0, 0, 0, 654,
    0, 655, 0, 0, 0, 0, 0, 656, 0, 657, 0, 0, 658, 0, 0, 0, 659, 0, 660, 0, 0, 0, 0, 0, 661, 0, 662, 0, 0, 663, 0, 0,
    0, 664, 0, 665, 0, 0, 0, 0, 0, 666, 0, 667, 0, 0, 668, 0, 0, 0, 669, 0, 670, 0, 0, 0, 0, 0, 671, 0, 672, 0, 0, 673,
    0, 0, 0, 674, 0, 675, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 676, 0, 0, 0, 0, 0, 677, 0, 0, 0, 678, 0, 0, 0, 679, 0,
    0, 0, 0, 0, 0, 680, 0, 0, 0, 0, 0, 0, 0, 0, 0, 681, 0, 0, 682, 0, 0, 0, 683, 0, 0, 0, 0, 0, 684, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 685, 0, 0, 0, 0, 0, 686, 0, 0, 0, 687, 0, 0, 0, 688, 0, 0, 0, 0, 0, 0, 689, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 690, 0, 0, 691, 0, 0, 0, 692, 0, 0, 0, 0, 0, 693, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 694, 0,
    0, 0, 0, 0, 695, 0, 0, 0, 696, 0, 0, 0, 697, 0, 0, 0, 0, 0, 0, 698, 0, 0, 0, 0, 0, 0, 0, 0, 0, 699, 0, 0,
    700, 0, 0, 0, 701, 0, 0, 0, 0, 0, 702, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 703, 0, 0, 704, 0, 0, 0, 705,
    0, 0, 0, 0, 0, 0, 706, 707, 0, 0, 708, 0, 0, 0, 0, 0, 0, 0, 0, 709, 0, 0, 0, 0, 0, 0, 0, 0, 0, 710, 0, 0,
    711, 0, 0, 0, 712, 0, 0, 0, 0, 0, 713, 0, 0, 0, 0, 0, 0, 0, 714, 0, 0, 715, 0, 0, 716, 0, 0, 0, 0, 717, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 718, 0, 0, 719, 0, 0, 0, 720, 0, 0, 0, 0, 0, 721, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 722, 0, 723, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 724, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 725, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 726, 0, 0, 0, 727, 0, 0, 728, 0, 0, 0, 0, 0,
    729, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 730, 0, 0, 731, 0, 0, 0, 0, 0, 732, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 733, 0, 0, 0, 734, 0, 0, 0, 0, 0, 735, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 736, 0, 737, 0, 0, 738, 0, 0, 0, 0, 0, 739, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 740, 0,
    0, 741, 0, 0, 0, 0, 0, 742, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 743, 0, 0, 744, 0, 0, 0, 0, 0,
    745, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 746, 0, 747, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 748, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 749, 0, 0, 0, 0, 0, 0, 0, 750, 0, 0, 0, 0, 0, 0, 0, 751, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 752, 0, 0, 0, 0, 0, 0, 0, 753, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 754, 0, 0, 0, 0, 0, 0, 0,
    755, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 756,
};
void recomp_unit_0126_entry(Runtime &rt, AllegrexContext &ctx, std::uint16_t direct_entry_id, GuestMemory::AotFastView &aot_mem) {
    std::uint32_t jump_target = 0u;
    std::uint32_t local_transfers = 0u;
    std::uint32_t local_pc = ctx.pc;
    std::uint32_t entry_id = direct_entry_id;
LOCAL_DISPATCH:
    {
    if (entry_id == 0u) {
        const std::uint32_t entry_delta = local_pc - 0x089FC004u;
        entry_id = (entry_delta < 16332u && (entry_delta & 3u) == 0u) ? kEntryIds_recomp_unit_0126[entry_delta >> 2u] : 0u;
    }
    switch (entry_id) {
    case 1u: goto L_089FC004;
    case 2u: goto L_089FC024;
    case 3u: goto L_089FC040;
    case 4u: goto L_089FC058;
    case 5u: goto L_089FC070;
    case 6u: goto L_089FC088;
    case 7u: goto L_089FC0A0;
    case 8u: goto L_089FC0B8;
    case 9u: goto L_089FC0D0;
    case 10u: goto L_089FC0E8;
    case 11u: goto L_089FC100;
    case 12u: goto L_089FC118;
    case 13u: goto L_089FC128;
    case 14u: goto L_089FC14C;
    case 15u: goto L_089FC1BC;
    case 16u: goto L_089FC1C8;
    case 17u: goto L_089FC1CC;
    case 18u: goto L_089FC1DC;
    case 19u: goto L_089FC1E4;
    case 20u: goto L_089FC1F4;
    case 21u: goto L_089FC1FC;
    case 22u: goto L_089FC200;
    case 23u: goto L_089FC204;
    case 24u: goto L_089FC224;
    case 25u: goto L_089FC234;
    case 26u: goto L_089FC24C;
    case 27u: goto L_089FC250;
    case 28u: goto L_089FC258;
    case 29u: goto L_089FC270;
    case 30u: goto L_089FC274;
    case 31u: goto L_089FC27C;
    case 32u: goto L_089FC294;
    case 33u: goto L_089FC298;
    case 34u: goto L_089FC2A0;
    case 35u: goto L_089FC2B8;
    case 36u: goto L_089FC2C4;
    case 37u: goto L_089FC2D0;
    case 38u: goto L_089FC2F4;
    case 39u: goto L_089FC308;
    case 40u: goto L_089FC31C;
    case 41u: goto L_089FC328;
    case 42u: goto L_089FC32C;
    case 43u: goto L_089FC338;
    case 44u: goto L_089FC350;
    case 45u: goto L_089FC354;
    case 46u: goto L_089FC35C;
    case 47u: goto L_089FC374;
    case 48u: goto L_089FC380;
    case 49u: goto L_089FC3C8;
    case 50u: goto L_089FC3CC;
    case 51u: goto L_089FC3D4;
    case 52u: goto L_089FC3EC;
    case 53u: goto L_089FC400;
    case 54u: goto L_089FC40C;
    case 55u: goto L_089FC45C;
    case 56u: goto L_089FC460;
    case 57u: goto L_089FC468;
    case 58u: goto L_089FC480;
    case 59u: goto L_089FC48C;
    case 60u: goto L_089FC504;
    case 61u: goto L_089FC510;
    case 62u: goto L_089FC528;
    case 63u: goto L_089FC53C;
    case 64u: goto L_089FC548;
    case 65u: goto L_089FC560;
    case 66u: goto L_089FC574;
    case 67u: goto L_089FC580;
    case 68u: goto L_089FC584;
    case 69u: goto L_089FC58C;
    case 70u: goto L_089FC5B0;
    case 71u: goto L_089FC5BC;
    case 72u: goto L_089FC5CC;
    case 73u: goto L_089FC5D4;
    case 74u: goto L_089FC5E0;
    case 75u: goto L_089FC5E4;
    case 76u: goto L_089FC5F4;
    case 77u: goto L_089FC60C;
    case 78u: goto L_089FC618;
    case 79u: goto L_089FC68C;
    case 80u: goto L_089FC690;
    case 81u: goto L_089FC6A0;
    case 82u: goto L_089FC6A4;
    case 83u: goto L_089FC6B4;
    case 84u: goto L_089FC6B8;
    case 85u: goto L_089FC6D0;
    case 86u: goto L_089FC6DC;
    case 87u: goto L_089FC6EC;
    case 88u: goto L_089FC6F0;
    case 89u: goto L_089FC700;
    case 90u: goto L_089FC704;
    case 91u: goto L_089FC714;
    case 92u: goto L_089FC718;
    case 93u: goto L_089FC730;
    case 94u: goto L_089FC73C;
    case 95u: goto L_089FC740;
    case 96u: goto L_089FC748;
    case 97u: goto L_089FC780;
    case 98u: goto L_089FC78C;
    case 99u: goto L_089FC798;
    case 100u: goto L_089FC7A8;
    case 101u: goto L_089FC7C0;
    case 102u: goto L_089FC7C8;
    case 103u: goto L_089FC7D4;
    case 104u: goto L_089FC7D8;
    case 105u: goto L_089FC7E4;
    case 106u: goto L_089FC7E8;
    case 107u: goto L_089FC808;
    case 108u: goto L_089FC820;
    case 109u: goto L_089FC82C;
    case 110u: goto L_089FC878;
    case 111u: goto L_089FC890;
    case 112u: goto L_089FC89C;
    case 113u: goto L_089FC8BC;
    case 114u: goto L_089FC8C8;
    case 115u: goto L_089FC8CC;
    case 116u: goto L_089FC8D4;
    case 117u: goto L_089FC908;
    case 118u: goto L_089FC914;
    case 119u: goto L_089FC920;
    case 120u: goto L_089FC974;
    case 121u: goto L_089FC980;
    case 122u: goto L_089FC988;
    case 123u: goto L_089FC994;
    case 124u: goto L_089FC99C;
    case 125u: goto L_089FC9A4;
    case 126u: goto L_089FC9B4;
    case 127u: goto L_089FC9BC;
    case 128u: goto L_089FC9C8;
    case 129u: goto L_089FC9CC;
    case 130u: goto L_089FC9E8;
    case 131u: goto L_089FCA00;
    case 132u: goto L_089FCA0C;
    case 133u: goto L_089FCA58;
    case 134u: goto L_089FCA64;
    case 135u: goto L_089FCA68;
    case 136u: goto L_089FCA70;
    case 137u: goto L_089FCAA4;
    case 138u: goto L_089FCABC;
    case 139u: goto L_089FCAC0;
    case 140u: goto L_089FCAC8;
    case 141u: goto L_089FCAE0;
    case 142u: goto L_089FCAE4;
    case 143u: goto L_089FCAEC;
    case 144u: goto L_089FCB04;
    case 145u: goto L_089FCB94;
    case 146u: goto L_089FCBA0;
    case 147u: goto L_089FCBB4;
    case 148u: goto L_089FCBC8;
    case 149u: goto L_089FCBE0;
    case 150u: goto L_089FCBF4;
    case 151u: goto L_089FCC1C;
    case 152u: goto L_089FCC68;
    case 153u: goto L_089FCC7C;
    case 154u: goto L_089FCC84;
    case 155u: goto L_089FCC88;
    case 156u: goto L_089FCC94;
    case 157u: goto L_089FCCB0;
    case 158u: goto L_089FCCC0;
    case 159u: goto L_089FCCDC;
    case 160u: goto L_089FCCE4;
    case 161u: goto L_089FCD84;
    case 162u: goto L_089FCD8C;
    case 163u: goto L_089FCDB0;
    case 164u: goto L_089FCE00;
    case 165u: goto L_089FCE18;
    case 166u: goto L_089FCE30;
    case 167u: goto L_089FCE54;
    case 168u: goto L_089FCEA4;
    case 169u: goto L_089FCF14;
    case 170u: goto L_089FCF1C;
    case 171u: goto L_089FCF2C;
    case 172u: goto L_089FCF3C;
    case 173u: goto L_089FCF4C;
    case 174u: goto L_089FCF64;
    case 175u: goto L_089FCF68;
    case 176u: goto L_089FCF70;
    case 177u: goto L_089FCF90;
    case 178u: goto L_089FCFB8;
    case 179u: goto L_089FCFDC;
    case 180u: goto L_089FCFF8;
    case 181u: goto L_089FD00C;
    case 182u: goto L_089FD034;
    case 183u: goto L_089FD05C;
    case 184u: goto L_089FD078;
    case 185u: goto L_089FD098;
    case 186u: goto L_089FD0A8;
    case 187u: goto L_089FD0D4;
    case 188u: goto L_089FD0E8;
    case 189u: goto L_089FD10C;
    case 190u: goto L_089FD118;
    case 191u: goto L_089FD124;
    case 192u: goto L_089FD134;
    case 193u: goto L_089FD140;
    case 194u: goto L_089FD148;
    case 195u: goto L_089FD154;
    case 196u: goto L_089FD15C;
    case 197u: goto L_089FD170;
    case 198u: goto L_089FD174;
    case 199u: goto L_089FD198;
    case 200u: goto L_089FD1A4;
    case 201u: goto L_089FD1BC;
    case 202u: goto L_089FD1CC;
    case 203u: goto L_089FD1D8;
    case 204u: goto L_089FD200;
    case 205u: goto L_089FD228;
    case 206u: goto L_089FD244;
    case 207u: goto L_089FD264;
    case 208u: goto L_089FD274;
    case 209u: goto L_089FD2A8;
    case 210u: goto L_089FD2BC;
    case 211u: goto L_089FD2D0;
    case 212u: goto L_089FD2FC;
    case 213u: goto L_089FD308;
    case 214u: goto L_089FD314;
    case 215u: goto L_089FD324;
    case 216u: goto L_089FD330;
    case 217u: goto L_089FD338;
    case 218u: goto L_089FD344;
    case 219u: goto L_089FD34C;
    case 220u: goto L_089FD360;
    case 221u: goto L_089FD364;
    case 222u: goto L_089FD390;
    case 223u: goto L_089FD39C;
    case 224u: goto L_089FD3B4;
    case 225u: goto L_089FD3C4;
    case 226u: goto L_089FD3D0;
    case 227u: goto L_089FD3F8;
    case 228u: goto L_089FD41C;
    case 229u: goto L_089FD438;
    case 230u: goto L_089FD458;
    case 231u: goto L_089FD468;
    case 232u: goto L_089FD49C;
    case 233u: goto L_089FD4A8;
    case 234u: goto L_089FD4B4;
    case 235u: goto L_089FD4C4;
    case 236u: goto L_089FD4D0;
    case 237u: goto L_089FD4D8;
    case 238u: goto L_089FD4E4;
    case 239u: goto L_089FD4EC;
    case 240u: goto L_089FD500;
    case 241u: goto L_089FD504;
    case 242u: goto L_089FD51C;
    case 243u: goto L_089FD528;
    case 244u: goto L_089FD534;
    case 245u: goto L_089FD55C;
    case 246u: goto L_089FD584;
    case 247u: goto L_089FD5A0;
    case 248u: goto L_089FD5C0;
    case 249u: goto L_089FD5D0;
    case 250u: goto L_089FD60C;
    case 251u: goto L_089FD620;
    case 252u: goto L_089FD634;
    case 253u: goto L_089FD648;
    case 254u: goto L_089FD67C;
    case 255u: goto L_089FD688;
    case 256u: goto L_089FD694;
    case 257u: goto L_089FD6A4;
    case 258u: goto L_089FD6B0;
    case 259u: goto L_089FD6B8;
    case 260u: goto L_089FD6C4;
    case 261u: goto L_089FD6CC;
    case 262u: goto L_089FD6E0;
    case 263u: goto L_089FD6E4;
    case 264u: goto L_089FD718;
    case 265u: goto L_089FD724;
    case 266u: goto L_089FD73C;
    case 267u: goto L_089FD74C;
    case 268u: goto L_089FD758;
    case 269u: goto L_089FD780;
    case 270u: goto L_089FD7A8;
    case 271u: goto L_089FD7C4;
    case 272u: goto L_089FD7E4;
    case 273u: goto L_089FD7F4;
    case 274u: goto L_089FD82C;
    case 275u: goto L_089FD838;
    case 276u: goto L_089FD844;
    case 277u: goto L_089FD854;
    case 278u: goto L_089FD860;
    case 279u: goto L_089FD868;
    case 280u: goto L_089FD874;
    case 281u: goto L_089FD87C;
    case 282u: goto L_089FD890;
    case 283u: goto L_089FD894;
    case 284u: goto L_089FD8AC;
    case 285u: goto L_089FD8B8;
    case 286u: goto L_089FD8C4;
    case 287u: goto L_089FD8EC;
    case 288u: goto L_089FD910;
    case 289u: goto L_089FD92C;
    case 290u: goto L_089FD94C;
    case 291u: goto L_089FD95C;
    case 292u: goto L_089FD994;
    case 293u: goto L_089FD9A0;
    case 294u: goto L_089FD9AC;
    case 295u: goto L_089FD9BC;
    case 296u: goto L_089FD9C8;
    case 297u: goto L_089FD9D0;
    case 298u: goto L_089FD9DC;
    case 299u: goto L_089FD9E4;
    case 300u: goto L_089FD9F8;
    case 301u: goto L_089FD9FC;
    case 302u: goto L_089FDA14;
    case 303u: goto L_089FDA20;
    case 304u: goto L_089FDA2C;
    case 305u: goto L_089FDA38;
    case 306u: goto L_089FDA50;
    case 307u: goto L_089FDA74;
    case 308u: goto L_089FDB34;
    case 309u: goto L_089FDB38;
    case 310u: goto L_089FDB44;
    case 311u: goto L_089FDB50;
    case 312u: goto L_089FDB5C;
    case 313u: goto L_089FDB64;
    case 314u: goto L_089FDB70;
    case 315u: goto L_089FDC1C;
    case 316u: goto L_089FDC28;
    case 317u: goto L_089FDC30;
    case 318u: goto L_089FDC58;
    case 319u: goto L_089FDCAC;
    case 320u: goto L_089FDCBC;
    case 321u: goto L_089FDCC4;
    case 322u: goto L_089FDCEC;
    case 323u: goto L_089FDCF4;
    case 324u: goto L_089FDD1C;
    case 325u: goto L_089FDD28;
    case 326u: goto L_089FDD4C;
    case 327u: goto L_089FDD58;
    case 328u: goto L_089FDD7C;
    case 329u: goto L_089FDDAC;
    case 330u: goto L_089FDDC4;
    case 331u: goto L_089FDDD4;
    case 332u: goto L_089FDDEC;
    case 333u: goto L_089FDDFC;
    case 334u: goto L_089FDE0C;
    case 335u: goto L_089FDE64;
    case 336u: goto L_089FDE78;
    case 337u: goto L_089FDE80;
    case 338u: goto L_089FDE84;
    case 339u: goto L_089FDE90;
    case 340u: goto L_089FDE98;
    case 341u: goto L_089FDEAC;
    case 342u: goto L_089FDEB4;
    case 343u: goto L_089FDED4;
    case 344u: goto L_089FDEDC;
    case 345u: goto L_089FDEE4;
    case 346u: goto L_089FDEF8;
    case 347u: goto L_089FDF00;
    case 348u: goto L_089FDF08;
    case 349u: goto L_089FDF1C;
    case 350u: goto L_089FDF24;
    case 351u: goto L_089FDF2C;
    case 352u: goto L_089FDF3C;
    case 353u: goto L_089FDF44;
    case 354u: goto L_089FDF8C;
    case 355u: goto L_089FDFA4;
    case 356u: goto L_089FDFA8;
    case 357u: goto L_089FDFB4;
    case 358u: goto L_089FDFBC;
    case 359u: goto L_089FDFC8;
    case 360u: goto L_089FDFFC;
    case 361u: goto L_089FE054;
    case 362u: goto L_089FE060;
    case 363u: goto L_089FE068;
    case 364u: goto L_089FE074;
    case 365u: goto L_089FE07C;
    case 366u: goto L_089FE09C;
    case 367u: goto L_089FE0AC;
    case 368u: goto L_089FE0B8;
    case 369u: goto L_089FE0C4;
    case 370u: goto L_089FE0D4;
    case 371u: goto L_089FE0E0;
    case 372u: goto L_089FE0EC;
    case 373u: goto L_089FE0FC;
    case 374u: goto L_089FE108;
    case 375u: goto L_089FE114;
    case 376u: goto L_089FE124;
    case 377u: goto L_089FE130;
    case 378u: goto L_089FE13C;
    case 379u: goto L_089FE14C;
    case 380u: goto L_089FE158;
    case 381u: goto L_089FE164;
    case 382u: goto L_089FE174;
    case 383u: goto L_089FE180;
    case 384u: goto L_089FE18C;
    case 385u: goto L_089FE19C;
    case 386u: goto L_089FE1A8;
    case 387u: goto L_089FE1B4;
    case 388u: goto L_089FE1C4;
    case 389u: goto L_089FE1D0;
    case 390u: goto L_089FE1DC;
    case 391u: goto L_089FE1EC;
    case 392u: goto L_089FE1F8;
    case 393u: goto L_089FE204;
    case 394u: goto L_089FE214;
    case 395u: goto L_089FE220;
    case 396u: goto L_089FE22C;
    case 397u: goto L_089FE23C;
    case 398u: goto L_089FE248;
    case 399u: goto L_089FE254;
    case 400u: goto L_089FE264;
    case 401u: goto L_089FE270;
    case 402u: goto L_089FE27C;
    case 403u: goto L_089FE294;
    case 404u: goto L_089FE2C0;
    case 405u: goto L_089FE2C8;
    case 406u: goto L_089FE2D0;
    case 407u: goto L_089FE2DC;
    case 408u: goto L_089FE2F8;
    case 409u: goto L_089FE308;
    case 410u: goto L_089FE31C;
    case 411u: goto L_089FE32C;
    case 412u: goto L_089FE338;
    case 413u: goto L_089FE348;
    case 414u: goto L_089FE364;
    case 415u: goto L_089FE36C;
    case 416u: goto L_089FE378;
    case 417u: goto L_089FE388;
    case 418u: goto L_089FE398;
    case 419u: goto L_089FE3A8;
    case 420u: goto L_089FE3B4;
    case 421u: goto L_089FE3C4;
    case 422u: goto L_089FE3E0;
    case 423u: goto L_089FE3E8;
    case 424u: goto L_089FE3F4;
    case 425u: goto L_089FE404;
    case 426u: goto L_089FE414;
    case 427u: goto L_089FE424;
    case 428u: goto L_089FE430;
    case 429u: goto L_089FE440;
    case 430u: goto L_089FE45C;
    case 431u: goto L_089FE464;
    case 432u: goto L_089FE470;
    case 433u: goto L_089FE480;
    case 434u: goto L_089FE490;
    case 435u: goto L_089FE4A0;
    case 436u: goto L_089FE4AC;
    case 437u: goto L_089FE4BC;
    case 438u: goto L_089FE4D8;
    case 439u: goto L_089FE4E0;
    case 440u: goto L_089FE4EC;
    case 441u: goto L_089FE4FC;
    case 442u: goto L_089FE50C;
    case 443u: goto L_089FE51C;
    case 444u: goto L_089FE528;
    case 445u: goto L_089FE538;
    case 446u: goto L_089FE554;
    case 447u: goto L_089FE55C;
    case 448u: goto L_089FE568;
    case 449u: goto L_089FE578;
    case 450u: goto L_089FE588;
    case 451u: goto L_089FE598;
    case 452u: goto L_089FE5A4;
    case 453u: goto L_089FE5B4;
    case 454u: goto L_089FE5D0;
    case 455u: goto L_089FE5D8;
    case 456u: goto L_089FE5E4;
    case 457u: goto L_089FE5F4;
    case 458u: goto L_089FE604;
    case 459u: goto L_089FE614;
    case 460u: goto L_089FE620;
    case 461u: goto L_089FE630;
    case 462u: goto L_089FE64C;
    case 463u: goto L_089FE654;
    case 464u: goto L_089FE660;
    case 465u: goto L_089FE670;
    case 466u: goto L_089FE680;
    case 467u: goto L_089FE690;
    case 468u: goto L_089FE69C;
    case 469u: goto L_089FE6AC;
    case 470u: goto L_089FE6C8;
    case 471u: goto L_089FE6D0;
    case 472u: goto L_089FE6DC;
    case 473u: goto L_089FE6EC;
    case 474u: goto L_089FE6FC;
    case 475u: goto L_089FE70C;
    case 476u: goto L_089FE718;
    case 477u: goto L_089FE728;
    case 478u: goto L_089FE744;
    case 479u: goto L_089FE74C;
    case 480u: goto L_089FE758;
    case 481u: goto L_089FE768;
    case 482u: goto L_089FE788;
    case 483u: goto L_089FE798;
    case 484u: goto L_089FE7A4;
    case 485u: goto L_089FE7B4;
    case 486u: goto L_089FE7C0;
    case 487u: goto L_089FE7DC;
    case 488u: goto L_089FE7E4;
    case 489u: goto L_089FE7F0;
    case 490u: goto L_089FE800;
    case 491u: goto L_089FE804;
    case 492u: goto L_089FE810;
    case 493u: goto L_089FE820;
    case 494u: goto L_089FE830;
    case 495u: goto L_089FE83C;
    case 496u: goto L_089FE84C;
    case 497u: goto L_089FE858;
    case 498u: goto L_089FE874;
    case 499u: goto L_089FE87C;
    case 500u: goto L_089FE888;
    case 501u: goto L_089FE898;
    case 502u: goto L_089FE89C;
    case 503u: goto L_089FE8A8;
    case 504u: goto L_089FE8B8;
    case 505u: goto L_089FE8C8;
    case 506u: goto L_089FE8D4;
    case 507u: goto L_089FE8E4;
    case 508u: goto L_089FE8F0;
    case 509u: goto L_089FE90C;
    case 510u: goto L_089FE914;
    case 511u: goto L_089FE920;
    case 512u: goto L_089FE930;
    case 513u: goto L_089FE934;
    case 514u: goto L_089FE940;
    case 515u: goto L_089FE95C;
    case 516u: goto L_089FE968;
    case 517u: goto L_089FE970;
    case 518u: goto L_089FE97C;
    case 519u: goto L_089FE984;
    case 520u: goto L_089FE990;
    case 521u: goto L_089FE998;
    case 522u: goto L_089FE9A0;
    case 523u: goto L_089FE9AC;
    case 524u: goto L_089FE9B4;
    case 525u: goto L_089FE9C0;
    case 526u: goto L_089FE9C8;
    case 527u: goto L_089FE9D4;
    case 528u: goto L_089FE9EC;
    case 529u: goto L_089FEA08;
    case 530u: goto L_089FEA10;
    case 531u: goto L_089FEA20;
    case 532u: goto L_089FEA3C;
    case 533u: goto L_089FEA44;
    case 534u: goto L_089FEA54;
    case 535u: goto L_089FEA70;
    case 536u: goto L_089FEA78;
    case 537u: goto L_089FEA88;
    case 538u: goto L_089FEAA4;
    case 539u: goto L_089FEAAC;
    case 540u: goto L_089FEABC;
    case 541u: goto L_089FEAD8;
    case 542u: goto L_089FEAE0;
    case 543u: goto L_089FEAF0;
    case 544u: goto L_089FEB0C;
    case 545u: goto L_089FEB14;
    case 546u: goto L_089FEB24;
    case 547u: goto L_089FEB40;
    case 548u: goto L_089FEB48;
    case 549u: goto L_089FEB58;
    case 550u: goto L_089FEB74;
    case 551u: goto L_089FEB7C;
    case 552u: goto L_089FEB8C;
    case 553u: goto L_089FEBA8;
    case 554u: goto L_089FEBB0;
    case 555u: goto L_089FEBC0;
    case 556u: goto L_089FEBDC;
    case 557u: goto L_089FEBE4;
    case 558u: goto L_089FEBF4;
    case 559u: goto L_089FEC10;
    case 560u: goto L_089FEC18;
    case 561u: goto L_089FEC28;
    case 562u: goto L_089FEC44;
    case 563u: goto L_089FEC4C;
    case 564u: goto L_089FEC5C;
    case 565u: goto L_089FEC98;
    case 566u: goto L_089FECA8;
    case 567u: goto L_089FECBC;
    case 568u: goto L_089FECC8;
    case 569u: goto L_089FECD8;
    case 570u: goto L_089FECEC;
    case 571u: goto L_089FECFC;
    case 572u: goto L_089FED08;
    case 573u: goto L_089FED14;
    case 574u: goto L_089FED1C;
    case 575u: goto L_089FED30;
    case 576u: goto L_089FED38;
    case 577u: goto L_089FED50;
    case 578u: goto L_089FED58;
    case 579u: goto L_089FED6C;
    case 580u: goto L_089FED78;
    case 581u: goto L_089FED80;
    case 582u: goto L_089FED84;
    case 583u: goto L_089FED90;
    case 584u: goto L_089FEDA0;
    case 585u: goto L_089FEDAC;
    case 586u: goto L_089FEDB8;
    case 587u: goto L_089FEDC0;
    case 588u: goto L_089FEDEC;
    case 589u: goto L_089FEE00;
    case 590u: goto L_089FEE18;
    case 591u: goto L_089FEE24;
    case 592u: goto L_089FEE44;
    case 593u: goto L_089FEE58;
    case 594u: goto L_089FEE70;
    case 595u: goto L_089FEE7C;
    case 596u: goto L_089FEE9C;
    case 597u: goto L_089FEEB0;
    case 598u: goto L_089FEEC8;
    case 599u: goto L_089FEED4;
    case 600u: goto L_089FEEF4;
    case 601u: goto L_089FEF18;
    case 602u: goto L_089FEF3C;
    case 603u: goto L_089FEF60;
    case 604u: goto L_089FEF84;
    case 605u: goto L_089FEFA8;
    case 606u: goto L_089FEFCC;
    case 607u: goto L_089FEFE0;
    case 608u: goto L_089FEFF8;
    case 609u: goto L_089FF004;
    case 610u: goto L_089FF018;
    case 611u: goto L_089FF020;
    case 612u: goto L_089FF02C;
    case 613u: goto L_089FF03C;
    case 614u: goto L_089FF044;
    case 615u: goto L_089FF058;
    case 616u: goto L_089FF070;
    case 617u: goto L_089FF07C;
    case 618u: goto L_089FF090;
    case 619u: goto L_089FF098;
    case 620u: goto L_089FF0A4;
    case 621u: goto L_089FF0B4;
    case 622u: goto L_089FF0BC;
    case 623u: goto L_089FF0D0;
    case 624u: goto L_089FF0E8;
    case 625u: goto L_089FF0F4;
    case 626u: goto L_089FF108;
    case 627u: goto L_089FF110;
    case 628u: goto L_089FF11C;
    case 629u: goto L_089FF12C;
    case 630u: goto L_089FF134;
    case 631u: goto L_089FF14C;
    case 632u: goto L_089FF154;
    case 633u: goto L_089FF160;
    case 634u: goto L_089FF170;
    case 635u: goto L_089FF178;
    case 636u: goto L_089FF190;
    case 637u: goto L_089FF198;
    case 638u: goto L_089FF1A4;
    case 639u: goto L_089FF1B4;
    case 640u: goto L_089FF1BC;
    case 641u: goto L_089FF1D4;
    case 642u: goto L_089FF1DC;
    case 643u: goto L_089FF1E8;
    case 644u: goto L_089FF1F8;
    case 645u: goto L_089FF200;
    case 646u: goto L_089FF218;
    case 647u: goto L_089FF220;
    case 648u: goto L_089FF22C;
    case 649u: goto L_089FF23C;
    case 650u: goto L_089FF244;
    case 651u: goto L_089FF25C;
    case 652u: goto L_089FF264;
    case 653u: goto L_089FF270;
    case 654u: goto L_089FF280;
    case 655u: goto L_089FF288;
    case 656u: goto L_089FF2A0;
    case 657u: goto L_089FF2A8;
    case 658u: goto L_089FF2B4;
    case 659u: goto L_089FF2C4;
    case 660u: goto L_089FF2CC;
    case 661u: goto L_089FF2E4;
    case 662u: goto L_089FF2EC;
    case 663u: goto L_089FF2F8;
    case 664u: goto L_089FF308;
    case 665u: goto L_089FF310;
    case 666u: goto L_089FF328;
    case 667u: goto L_089FF330;
    case 668u: goto L_089FF33C;
    case 669u: goto L_089FF34C;
    case 670u: goto L_089FF354;
    case 671u: goto L_089FF36C;
    case 672u: goto L_089FF374;
    case 673u: goto L_089FF380;
    case 674u: goto L_089FF390;
    case 675u: goto L_089FF398;
    case 676u: goto L_089FF3C4;
    case 677u: goto L_089FF3DC;
    case 678u: goto L_089FF3EC;
    case 679u: goto L_089FF3FC;
    case 680u: goto L_089FF418;
    case 681u: goto L_089FF440;
    case 682u: goto L_089FF44C;
    case 683u: goto L_089FF45C;
    case 684u: goto L_089FF474;
    case 685u: goto L_089FF4A0;
    case 686u: goto L_089FF4B8;
    case 687u: goto L_089FF4C8;
    case 688u: goto L_089FF4D8;
    case 689u: goto L_089FF4F4;
    case 690u: goto L_089FF51C;
    case 691u: goto L_089FF528;
    case 692u: goto L_089FF538;
    case 693u: goto L_089FF550;
    case 694u: goto L_089FF57C;
    case 695u: goto L_089FF594;
    case 696u: goto L_089FF5A4;
    case 697u: goto L_089FF5B4;
    case 698u: goto L_089FF5D0;
    case 699u: goto L_089FF5F8;
    case 700u: goto L_089FF604;
    case 701u: goto L_089FF614;
    case 702u: goto L_089FF62C;
    case 703u: goto L_089FF664;
    case 704u: goto L_089FF670;
    case 705u: goto L_089FF680;
    case 706u: goto L_089FF69C;
    case 707u: goto L_089FF6A0;
    case 708u: goto L_089FF6AC;
    case 709u: goto L_089FF6D0;
    case 710u: goto L_089FF6F8;
    case 711u: goto L_089FF704;
    case 712u: goto L_089FF714;
    case 713u: goto L_089FF72C;
    case 714u: goto L_089FF74C;
    case 715u: goto L_089FF758;
    case 716u: goto L_089FF764;
    case 717u: goto L_089FF778;
    case 718u: goto L_089FF7A0;
    case 719u: goto L_089FF7AC;
    case 720u: goto L_089FF7BC;
    case 721u: goto L_089FF7D4;
    case 722u: goto L_089FF860;
    case 723u: goto L_089FF868;
    case 724u: goto L_089FF8B4;
    case 725u: goto L_089FF93C;
    case 726u: goto L_089FF9D0;
    case 727u: goto L_089FF9E0;
    case 728u: goto L_089FF9EC;
    case 729u: goto L_089FFA04;
    case 730u: goto L_089FFA44;
    case 731u: goto L_089FFA50;
    case 732u: goto L_089FFA68;
    case 733u: goto L_089FFAA8;
    case 734u: goto L_089FFAB8;
    case 735u: goto L_089FFAD0;
    case 736u: goto L_089FFB10;
    case 737u: goto L_089FFB18;
    case 738u: goto L_089FFB24;
    case 739u: goto L_089FFB3C;
    case 740u: goto L_089FFB7C;
    case 741u: goto L_089FFB88;
    case 742u: goto L_089FFBA0;
    case 743u: goto L_089FFBE0;
    case 744u: goto L_089FFBEC;
    case 745u: goto L_089FFC04;
    case 746u: goto L_089FFC44;
    case 747u: goto L_089FFC4C;
    case 748u: goto L_089FFCD4;
    case 749u: goto L_089FFD2C;
    case 750u: goto L_089FFD4C;
    case 751u: goto L_089FFD6C;
    case 752u: goto L_089FFE94;
    case 753u: goto L_089FFEB4;
    case 754u: goto L_089FFEE4;
    case 755u: goto L_089FFF04;
    case 756u: goto L_089FFFCC;
    default:
        if (local_transfers == 0u) rt.unsupported(ctx.pc, 0u, "invalid internal function entry");
        else ctx.pc = local_pc;
        return;
    }
    }
L_089FC004:
    ctx.set_gpr(2, 2246u << 16u);
    ctx.set_gpr(4, rt.memory().aot_load32(ctx.gpr[2] + static_cast<std::uint32_t>(-26892)));
    ctx.set_gpr(2, 2246u << 16u);
    ctx.set_gpr(5, rt.memory().aot_load32(ctx.gpr[2] + static_cast<std::uint32_t>(-26660)));
    ctx.set_gpr(6, 2208u << 16u);
    ctx.set_gpr(6, ctx.gpr[6] + static_cast<std::uint32_t>(-13712));
    ctx.set_gpr(31, 0x089FC024u);
    // nop
    goto L_089FF044;
L_089FC024:
    ctx.set_gpr(2, 2246u << 16u);
    ctx.set_gpr(4, rt.memory().aot_load32(ctx.gpr[2] + static_cast<std::uint32_t>(-26892)));
    ctx.set_gpr(5, ctx.gpr[4] + 0u);
    ctx.set_gpr(6, 2208u << 16u);
    ctx.set_gpr(6, ctx.gpr[6] + static_cast<std::uint32_t>(-13368));
    ctx.set_gpr(31, 0x089FC040u);
    // nop
    goto L_089FF044;
L_089FC040:
    ctx.set_gpr(2, 2246u << 16u);
    ctx.set_gpr(4, rt.memory().aot_load32(ctx.gpr[2] + static_cast<std::uint32_t>(-26892)));
    ctx.set_gpr(5, 2208u << 16u);
    ctx.set_gpr(5, ctx.gpr[5] + static_cast<std::uint32_t>(-15256));
    ctx.set_gpr(31, 0x089FC058u);
    // nop
    goto L_089FF134;
L_089FC058:
    ctx.set_gpr(2, 2246u << 16u);
    ctx.set_gpr(4, rt.memory().aot_load32(ctx.gpr[2] + static_cast<std::uint32_t>(-26892)));
    ctx.set_gpr(5, 2208u << 16u);
    ctx.set_gpr(5, ctx.gpr[5] + static_cast<std::uint32_t>(-14124));
    ctx.set_gpr(31, 0x089FC070u);
    // nop
    goto L_089FF1BC;
L_089FC070:
    ctx.set_gpr(2, 2246u << 16u);
    ctx.set_gpr(4, rt.memory().aot_load32(ctx.gpr[2] + static_cast<std::uint32_t>(-26892)));
    ctx.set_gpr(5, 2208u << 16u);
    ctx.set_gpr(5, ctx.gpr[5] + static_cast<std::uint32_t>(-12916));
    ctx.set_gpr(31, 0x089FC088u);
    // nop
    goto L_089FF178;
L_089FC088:
    ctx.set_gpr(2, 2246u << 16u);
    ctx.set_gpr(4, rt.memory().aot_load32(ctx.gpr[2] + static_cast<std::uint32_t>(-26892)));
    ctx.set_gpr(5, 2208u << 16u);
    ctx.set_gpr(5, ctx.gpr[5] + static_cast<std::uint32_t>(-13848));
    ctx.set_gpr(31, 0x089FC0A0u);
    // nop
    goto L_089FF244;
L_089FC0A0:
    ctx.set_gpr(2, 2246u << 16u);
    ctx.set_gpr(4, rt.memory().aot_load32(ctx.gpr[2] + static_cast<std::uint32_t>(-26892)));
    ctx.set_gpr(5, 2208u << 16u);
    ctx.set_gpr(5, ctx.gpr[5] + static_cast<std::uint32_t>(-12776));
    ctx.set_gpr(31, 0x089FC0B8u);
    // nop
    goto L_089FF200;
L_089FC0B8:
    ctx.set_gpr(2, 2246u << 16u);
    ctx.set_gpr(4, rt.memory().aot_load32(ctx.gpr[2] + static_cast<std::uint32_t>(-26892)));
    ctx.set_gpr(5, 2208u << 16u);
    ctx.set_gpr(5, ctx.gpr[5] + static_cast<std::uint32_t>(-12516));
    ctx.set_gpr(31, 0x089FC0D0u);
    // nop
    goto L_089FF288;
L_089FC0D0:
    ctx.set_gpr(2, 2246u << 16u);
    ctx.set_gpr(4, rt.memory().aot_load32(ctx.gpr[2] + static_cast<std::uint32_t>(-26892)));
    ctx.set_gpr(5, 2208u << 16u);
    ctx.set_gpr(5, ctx.gpr[5] + static_cast<std::uint32_t>(-12484));
    ctx.set_gpr(31, 0x089FC0E8u);
    // nop
    goto L_089FF2CC;
L_089FC0E8:
    ctx.set_gpr(2, 2246u << 16u);
    ctx.set_gpr(4, rt.memory().aot_load32(ctx.gpr[2] + static_cast<std::uint32_t>(-26892)));
    ctx.set_gpr(5, 2208u << 16u);
    ctx.set_gpr(5, ctx.gpr[5] + static_cast<std::uint32_t>(-12468));
    ctx.set_gpr(31, 0x089FC100u);
    // nop
    goto L_089FF310;
L_089FC100:
    ctx.set_gpr(2, 2246u << 16u);
    ctx.set_gpr(4, rt.memory().aot_load32(ctx.gpr[2] + static_cast<std::uint32_t>(-26892)));
    ctx.set_gpr(5, 2208u << 16u);
    ctx.set_gpr(5, ctx.gpr[5] + static_cast<std::uint32_t>(-12432));
    ctx.set_gpr(31, 0x089FC118u);
    // nop
    goto L_089FF354;
L_089FC118:
    ctx.set_gpr(31, rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(12)));
    ctx.set_gpr(29, ctx.gpr[29] + static_cast<std::uint32_t>(16));
    jump_target = ctx.gpr[31];
    // nop
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_089FC128:
    ctx.set_gpr(29, ctx.gpr[29] + static_cast<std::uint32_t>(-16));
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(12), ctx.gpr[31]);
    ctx.set_gpr(6, ctx.gpr[5] + 0u);
    ctx.fpr[1] = std::bit_cast<float>(rt.memory().aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(20)));
    ctx.fpr[0] = std::bit_cast<float>(0u);
    ctx.set_fpu_condition((ctx.fpr[1] < ctx.fpr[0]));
    // nop
    { const bool branch_taken = ctx.fpu_condition();
    // nop
      if (branch_taken) {
          goto L_089FC224;
      }
      goto L_089FC14C;
    }
L_089FC14C:
    ctx.fpr[3] = std::bit_cast<float>(rt.memory().aot_load32(ctx.gpr[6] + static_cast<std::uint32_t>(8)));
    ctx.fpr[2] = std::bit_cast<float>(rt.memory().aot_load32(ctx.gpr[6] + static_cast<std::uint32_t>(4)));
    ctx.fpr[0] = std::bit_cast<float>(rt.memory().aot_load32(ctx.gpr[6] + static_cast<std::uint32_t>(0)));
    { const float fs = ctx.fpr[0]; const float ft = ctx.fpr[0]; if ((std::isinf(fs) && ft == 0.0f) || (std::isinf(ft) && fs == 0.0f)) ctx.set_fpr_bits(1, 0x7FC00000u); else ctx.fpr[1] = fs * ft; }
    { const float fs = ctx.fpr[2]; const float ft = ctx.fpr[2]; if ((std::isinf(fs) && ft == 0.0f) || (std::isinf(ft) && fs == 0.0f)) ctx.set_fpr_bits(0, 0x7FC00000u); else ctx.fpr[0] = fs * ft; }
    ctx.fpr[1] = ctx.fpr[1] + ctx.fpr[0];
    { const float fs = ctx.fpr[3]; const float ft = ctx.fpr[3]; if ((std::isinf(fs) && ft == 0.0f) || (std::isinf(ft) && fs == 0.0f)) ctx.set_fpr_bits(0, 0x7FC00000u); else ctx.fpr[0] = fs * ft; }
    ctx.fpr[5] = ctx.fpr[0] + ctx.fpr[1];
    ctx.fpr[3] = std::bit_cast<float>(rt.memory().aot_load32(ctx.gpr[6] + static_cast<std::uint32_t>(24)));
    ctx.fpr[2] = std::bit_cast<float>(rt.memory().aot_load32(ctx.gpr[6] + static_cast<std::uint32_t>(20)));
    ctx.fpr[0] = std::bit_cast<float>(rt.memory().aot_load32(ctx.gpr[6] + static_cast<std::uint32_t>(16)));
    { const float fs = ctx.fpr[0]; const float ft = ctx.fpr[0]; if ((std::isinf(fs) && ft == 0.0f) || (std::isinf(ft) && fs == 0.0f)) ctx.set_fpr_bits(1, 0x7FC00000u); else ctx.fpr[1] = fs * ft; }
    { const float fs = ctx.fpr[2]; const float ft = ctx.fpr[2]; if ((std::isinf(fs) && ft == 0.0f) || (std::isinf(ft) && fs == 0.0f)) ctx.set_fpr_bits(0, 0x7FC00000u); else ctx.fpr[0] = fs * ft; }
    ctx.fpr[1] = ctx.fpr[1] + ctx.fpr[0];
    { const float fs = ctx.fpr[3]; const float ft = ctx.fpr[3]; if ((std::isinf(fs) && ft == 0.0f) || (std::isinf(ft) && fs == 0.0f)) ctx.set_fpr_bits(0, 0x7FC00000u); else ctx.fpr[0] = fs * ft; }
    ctx.fpr[4] = ctx.fpr[0] + ctx.fpr[1];
    ctx.fpr[3] = std::bit_cast<float>(rt.memory().aot_load32(ctx.gpr[6] + static_cast<std::uint32_t>(40)));
    ctx.fpr[2] = std::bit_cast<float>(rt.memory().aot_load32(ctx.gpr[6] + static_cast<std::uint32_t>(36)));
    ctx.fpr[0] = std::bit_cast<float>(rt.memory().aot_load32(ctx.gpr[6] + static_cast<std::uint32_t>(32)));
    { const float fs = ctx.fpr[0]; const float ft = ctx.fpr[0]; if ((std::isinf(fs) && ft == 0.0f) || (std::isinf(ft) && fs == 0.0f)) ctx.set_fpr_bits(1, 0x7FC00000u); else ctx.fpr[1] = fs * ft; }
    { const float fs = ctx.fpr[2]; const float ft = ctx.fpr[2]; if ((std::isinf(fs) && ft == 0.0f) || (std::isinf(ft) && fs == 0.0f)) ctx.set_fpr_bits(0, 0x7FC00000u); else ctx.fpr[0] = fs * ft; }
    ctx.fpr[1] = ctx.fpr[1] + ctx.fpr[0];
    { const float fs = ctx.fpr[3]; const float ft = ctx.fpr[3]; if ((std::isinf(fs) && ft == 0.0f) || (std::isinf(ft) && fs == 0.0f)) ctx.set_fpr_bits(0, 0x7FC00000u); else ctx.fpr[0] = fs * ft; }
    ctx.fpr[1] = ctx.fpr[0] + ctx.fpr[1];
    ctx.set_fpu_condition(((std::isnan(ctx.fpr[4]) || std::isnan(ctx.fpr[1])) || ctx.fpr[4] <= ctx.fpr[1]));
    // nop
    { const bool branch_taken = ctx.fpu_condition();
    // nop
      if (branch_taken) {
          goto L_089FC1C8;
      }
      goto L_089FC1BC;
    }
L_089FC1BC:
    ctx.set_fpr_bits(0, ctx.fpr_bits(4));
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_089FC1CC;
      }
      goto L_089FC1C8;
    }
L_089FC1C8:
    ctx.set_fpr_bits(0, ctx.fpr_bits(1));
    goto L_089FC1CC;
L_089FC1CC:
    ctx.set_fpu_condition(((std::isnan(ctx.fpr[5]) || std::isnan(ctx.fpr[0])) || ctx.fpr[5] <= ctx.fpr[0]));
    // nop
    { const bool branch_taken = ctx.fpu_condition();
    // nop
      if (branch_taken) {
          goto L_089FC1E4;
      }
      goto L_089FC1DC;
    }
L_089FC1DC:
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_089FC204;
      }
      goto L_089FC1E4;
    }
L_089FC1E4:
    ctx.set_fpu_condition(((std::isnan(ctx.fpr[4]) || std::isnan(ctx.fpr[1])) || ctx.fpr[4] <= ctx.fpr[1]));
    // nop
    { const bool branch_taken = ctx.fpu_condition();
    // nop
      if (branch_taken) {
          goto L_089FC1FC;
      }
      goto L_089FC1F4;
    }
L_089FC1F4:
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_089FC200;
      }
      goto L_089FC1FC;
    }
L_089FC1FC:
    ctx.set_fpr_bits(4, ctx.fpr_bits(1));
    goto L_089FC200;
L_089FC200:
    ctx.set_fpr_bits(5, ctx.fpr_bits(4));
    goto L_089FC204;
L_089FC204:
    ctx.fpr[1] = std::sqrt(ctx.fpr[5]);
    ctx.fpr[0] = std::bit_cast<float>(rt.memory().aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(20)));
    { const float fs = ctx.fpr[0]; const float ft = ctx.fpr[1]; if ((std::isinf(fs) && ft == 0.0f) || (std::isinf(ft) && fs == 0.0f)) ctx.set_fpr_bits(0, 0x7FC00000u); else ctx.fpr[0] = fs * ft; }
    rt.memory().aot_store32(ctx.gpr[4] + static_cast<std::uint32_t>(20), std::bit_cast<std::uint32_t>(ctx.fpr[0]));
    ctx.set_gpr(4, ctx.gpr[4] + static_cast<std::uint32_t>(8));
    ctx.set_gpr(5, ctx.gpr[4] + 0u);
    ctx.set_gpr(31, 0x089FC224u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0127_entry, 127u, 271u, 0x08A03244u>(ctx, &aot_mem) && ctx.pc == 0x089FC224u) goto L_089FC224;
    return;
L_089FC224:
    ctx.set_gpr(31, rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(12)));
    ctx.set_gpr(29, ctx.gpr[29] + static_cast<std::uint32_t>(16));
    jump_target = ctx.gpr[31];
    // nop
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_089FC234:
    ctx.fpr[1] = std::bit_cast<float>(rt.memory().aot_load32(ctx.gpr[5] + static_cast<std::uint32_t>(8)));
    ctx.fpr[0] = std::bit_cast<float>(rt.memory().aot_load32(ctx.gpr[5] + static_cast<std::uint32_t>(20)));
    ctx.set_fpu_condition(((std::isnan(ctx.fpr[1]) || std::isnan(ctx.fpr[0])) || ctx.fpr[1] <= ctx.fpr[0]));
    ctx.set_gpr(2, 0u + static_cast<std::uint32_t>(1));
    { const bool branch_taken = !ctx.fpu_condition();
    // nop
      if (branch_taken) {
          goto L_089FC250;
      }
      goto L_089FC24C;
    }
L_089FC24C:
    ctx.set_gpr(2, 0u + 0u);
    goto L_089FC250;
L_089FC250:
    { const bool branch_taken = ctx.gpr[2] != 0u;
    // nop
      if (branch_taken) {
          goto L_089FC274;
      }
      goto L_089FC258;
    }
L_089FC258:
    ctx.fpr[1] = std::bit_cast<float>(rt.memory().aot_load32(ctx.gpr[5] + static_cast<std::uint32_t>(12)));
    ctx.fpr[0] = std::bit_cast<float>(rt.memory().aot_load32(ctx.gpr[5] + static_cast<std::uint32_t>(24)));
    ctx.set_fpu_condition(((std::isnan(ctx.fpr[1]) || std::isnan(ctx.fpr[0])) || ctx.fpr[1] <= ctx.fpr[0]));
    ctx.set_gpr(2, 0u + static_cast<std::uint32_t>(1));
    { const bool branch_taken = !ctx.fpu_condition();
    // nop
      if (branch_taken) {
          goto L_089FC274;
      }
      goto L_089FC270;
    }
L_089FC270:
    ctx.set_gpr(2, 0u + 0u);
    goto L_089FC274;
L_089FC274:
    { const bool branch_taken = ctx.gpr[2] != 0u;
    // nop
      if (branch_taken) {
          goto L_089FC298;
      }
      goto L_089FC27C;
    }
L_089FC27C:
    ctx.fpr[1] = std::bit_cast<float>(rt.memory().aot_load32(ctx.gpr[5] + static_cast<std::uint32_t>(16)));
    ctx.fpr[0] = std::bit_cast<float>(rt.memory().aot_load32(ctx.gpr[5] + static_cast<std::uint32_t>(28)));
    ctx.set_fpu_condition(((std::isnan(ctx.fpr[1]) || std::isnan(ctx.fpr[0])) || ctx.fpr[1] <= ctx.fpr[0]));
    ctx.set_gpr(2, 0u + static_cast<std::uint32_t>(1));
    { const bool branch_taken = !ctx.fpu_condition();
    // nop
      if (branch_taken) {
          goto L_089FC298;
      }
      goto L_089FC294;
    }
L_089FC294:
    ctx.set_gpr(2, 0u + 0u);
    goto L_089FC298;
L_089FC298:
    { const bool branch_taken = ctx.gpr[2] != 0u;
    // nop
      if (branch_taken) {
          goto L_089FC2B8;
      }
      goto L_089FC2A0;
    }
L_089FC2A0:
    ctx.fpr[0] = std::bit_cast<float>(rt.memory().aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(20)));
    ctx.fpr[2] = std::bit_cast<float>(0u);
    ctx.set_fpu_condition((ctx.fpr[0] < ctx.fpr[2]));
    // nop
    { const bool branch_taken = !ctx.fpu_condition();
    // nop
      if (branch_taken) {
          goto L_089FC2C4;
      }
      goto L_089FC2B8;
    }
L_089FC2B8:
    ctx.set_gpr(2, 0u + 0u);
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_089FC354;
      }
      goto L_089FC2C4;
    }
L_089FC2C4:
    ctx.set_gpr(6, 0u + 0u);
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_089FC32C;
      }
      goto L_089FC2D0;
    }
L_089FC2D0:
    ctx.set_gpr(2, ctx.gpr[6] << 2u);
    ctx.set_gpr(3, ctx.gpr[2] + ctx.gpr[5]);
    ctx.fpr[0] = std::bit_cast<float>(rt.memory().aot_load32(ctx.gpr[3] + static_cast<std::uint32_t>(8)));
    ctx.set_gpr(2, ctx.gpr[2] + ctx.gpr[4]);
    ctx.fpr[1] = std::bit_cast<float>(rt.memory().aot_load32(ctx.gpr[2] + static_cast<std::uint32_t>(8)));
    ctx.set_fpu_condition((ctx.fpr[1] < ctx.fpr[0]));
    // nop
    { const bool branch_taken = !ctx.fpu_condition();
    // nop
      if (branch_taken) {
          goto L_089FC308;
      }
      goto L_089FC2F4;
    }
L_089FC2F4:
    ctx.fpr[0] = ctx.fpr[1] - ctx.fpr[0];
    { const float fs = ctx.fpr[0]; const float ft = ctx.fpr[0]; if ((std::isinf(fs) && ft == 0.0f) || (std::isinf(ft) && fs == 0.0f)) ctx.set_fpr_bits(0, 0x7FC00000u); else ctx.fpr[0] = fs * ft; }
    ctx.fpr[2] = ctx.fpr[2] + ctx.fpr[0];
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_089FC328;
      }
      goto L_089FC308;
    }
L_089FC308:
    ctx.fpr[0] = std::bit_cast<float>(rt.memory().aot_load32(ctx.gpr[3] + static_cast<std::uint32_t>(20)));
    ctx.set_fpu_condition(((std::isnan(ctx.fpr[1]) || std::isnan(ctx.fpr[0])) || ctx.fpr[1] <= ctx.fpr[0]));
    // nop
    { const bool branch_taken = ctx.fpu_condition();
    // nop
      if (branch_taken) {
          goto L_089FC328;
      }
      goto L_089FC31C;
    }
L_089FC31C:
    ctx.fpr[0] = ctx.fpr[1] - ctx.fpr[0];
    { const float fs = ctx.fpr[0]; const float ft = ctx.fpr[0]; if ((std::isinf(fs) && ft == 0.0f) || (std::isinf(ft) && fs == 0.0f)) ctx.set_fpr_bits(0, 0x7FC00000u); else ctx.fpr[0] = fs * ft; }
    ctx.fpr[2] = ctx.fpr[2] + ctx.fpr[0];
    goto L_089FC328;
L_089FC328:
    ctx.set_gpr(6, ctx.gpr[6] + static_cast<std::uint32_t>(1));
    goto L_089FC32C;
L_089FC32C:
    ctx.set_gpr(2, static_cast<std::int32_t>(ctx.gpr[6]) < 3 ? 1u : 0u);
    { const bool branch_taken = ctx.gpr[2] != 0u;
    // nop
      if (branch_taken) {
          goto L_089FC2D0;
      }
      goto L_089FC338;
    }
L_089FC338:
    ctx.fpr[0] = std::bit_cast<float>(rt.memory().aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(20)));
    { const float fs = ctx.fpr[0]; const float ft = ctx.fpr[0]; if ((std::isinf(fs) && ft == 0.0f) || (std::isinf(ft) && fs == 0.0f)) ctx.set_fpr_bits(0, 0x7FC00000u); else ctx.fpr[0] = fs * ft; }
    ctx.set_fpu_condition((ctx.fpr[2] <= ctx.fpr[0]));
    ctx.set_gpr(2, 0u + static_cast<std::uint32_t>(1));
    { const bool branch_taken = ctx.fpu_condition();
    // nop
      if (branch_taken) {
          goto L_089FC354;
      }
      goto L_089FC350;
    }
L_089FC350:
    ctx.set_gpr(2, 0u + 0u);
    goto L_089FC354;
L_089FC354:
    jump_target = ctx.gpr[31];
    // nop
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_089FC35C:
    ctx.fpr[4] = std::bit_cast<float>(rt.memory().aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(20)));
    ctx.fpr[3] = std::bit_cast<float>(0u);
    ctx.set_fpu_condition((ctx.fpr[4] < ctx.fpr[3]));
    // nop
    { const bool branch_taken = !ctx.fpu_condition();
    // nop
      if (branch_taken) {
          goto L_089FC380;
      }
      goto L_089FC374;
    }
L_089FC374:
    ctx.set_gpr(2, 0u + 0u);
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_089FC3CC;
      }
      goto L_089FC380;
    }
L_089FC380:
    ctx.fpr[1] = std::bit_cast<float>(rt.memory().aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(8)));
    ctx.fpr[0] = std::bit_cast<float>(rt.memory().aot_load32(ctx.gpr[5] + static_cast<std::uint32_t>(8)));
    { const float fs = ctx.fpr[1]; const float ft = ctx.fpr[0]; if ((std::isinf(fs) && ft == 0.0f) || (std::isinf(ft) && fs == 0.0f)) ctx.set_fpr_bits(2, 0x7FC00000u); else ctx.fpr[2] = fs * ft; }
    ctx.fpr[1] = std::bit_cast<float>(rt.memory().aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(12)));
    ctx.fpr[0] = std::bit_cast<float>(rt.memory().aot_load32(ctx.gpr[5] + static_cast<std::uint32_t>(12)));
    { const float fs = ctx.fpr[1]; const float ft = ctx.fpr[0]; if ((std::isinf(fs) && ft == 0.0f) || (std::isinf(ft) && fs == 0.0f)) ctx.set_fpr_bits(0, 0x7FC00000u); else ctx.fpr[0] = fs * ft; }
    ctx.fpr[2] = ctx.fpr[2] + ctx.fpr[0];
    ctx.fpr[1] = std::bit_cast<float>(rt.memory().aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(16)));
    ctx.fpr[0] = std::bit_cast<float>(rt.memory().aot_load32(ctx.gpr[5] + static_cast<std::uint32_t>(16)));
    { const float fs = ctx.fpr[1]; const float ft = ctx.fpr[0]; if ((std::isinf(fs) && ft == 0.0f) || (std::isinf(ft) && fs == 0.0f)) ctx.set_fpr_bits(0, 0x7FC00000u); else ctx.fpr[0] = fs * ft; }
    ctx.fpr[1] = ctx.fpr[0] + ctx.fpr[2];
    ctx.fpr[0] = std::bit_cast<float>(rt.memory().aot_load32(ctx.gpr[5] + static_cast<std::uint32_t>(20)));
    ctx.fpr[0] = ctx.fpr[4] + ctx.fpr[0];
    ctx.fpr[0] = ctx.fpr[0] - ctx.fpr[1];
    ctx.set_fpu_condition((ctx.fpr[3] <= ctx.fpr[0]));
    ctx.set_gpr(2, 0u + static_cast<std::uint32_t>(1));
    { const bool branch_taken = ctx.fpu_condition();
    // nop
      if (branch_taken) {
          goto L_089FC3CC;
      }
      goto L_089FC3C8;
    }
L_089FC3C8:
    ctx.set_gpr(2, 0u + 0u);
    goto L_089FC3CC;
L_089FC3CC:
    jump_target = ctx.gpr[31];
    // nop
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_089FC3D4:
    ctx.fpr[6] = std::bit_cast<float>(rt.memory().aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(20)));
    ctx.fpr[0] = std::bit_cast<float>(0u);
    ctx.set_fpu_condition((ctx.fpr[6] < ctx.fpr[0]));
    // nop
    { const bool branch_taken = ctx.fpu_condition();
    // nop
      if (branch_taken) {
          goto L_089FC400;
      }
      goto L_089FC3EC;
    }
L_089FC3EC:
    ctx.fpr[5] = std::bit_cast<float>(rt.memory().aot_load32(ctx.gpr[5] + static_cast<std::uint32_t>(20)));
    ctx.set_fpu_condition((ctx.fpr[5] < ctx.fpr[0]));
    // nop
    { const bool branch_taken = !ctx.fpu_condition();
    // nop
      if (branch_taken) {
          goto L_089FC40C;
      }
      goto L_089FC400;
    }
L_089FC400:
    ctx.set_gpr(2, 0u + 0u);
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_089FC460;
      }
      goto L_089FC40C;
    }
L_089FC40C:
    ctx.fpr[1] = std::bit_cast<float>(rt.memory().aot_load32(ctx.gpr[5] + static_cast<std::uint32_t>(12)));
    ctx.fpr[0] = std::bit_cast<float>(rt.memory().aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(12)));
    ctx.fpr[4] = ctx.fpr[0] - ctx.fpr[1];
    ctx.fpr[1] = std::bit_cast<float>(rt.memory().aot_load32(ctx.gpr[5] + static_cast<std::uint32_t>(8)));
    ctx.fpr[0] = std::bit_cast<float>(rt.memory().aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(8)));
    ctx.fpr[3] = ctx.fpr[0] - ctx.fpr[1];
    ctx.fpr[1] = std::bit_cast<float>(rt.memory().aot_load32(ctx.gpr[5] + static_cast<std::uint32_t>(16)));
    ctx.fpr[0] = std::bit_cast<float>(rt.memory().aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(16)));
    ctx.fpr[2] = ctx.fpr[0] - ctx.fpr[1];
    { const float fs = ctx.fpr[3]; const float ft = ctx.fpr[3]; if ((std::isinf(fs) && ft == 0.0f) || (std::isinf(ft) && fs == 0.0f)) ctx.set_fpr_bits(1, 0x7FC00000u); else ctx.fpr[1] = fs * ft; }
    { const float fs = ctx.fpr[4]; const float ft = ctx.fpr[4]; if ((std::isinf(fs) && ft == 0.0f) || (std::isinf(ft) && fs == 0.0f)) ctx.set_fpr_bits(0, 0x7FC00000u); else ctx.fpr[0] = fs * ft; }
    ctx.fpr[1] = ctx.fpr[1] + ctx.fpr[0];
    { const float fs = ctx.fpr[2]; const float ft = ctx.fpr[2]; if ((std::isinf(fs) && ft == 0.0f) || (std::isinf(ft) && fs == 0.0f)) ctx.set_fpr_bits(0, 0x7FC00000u); else ctx.fpr[0] = fs * ft; }
    ctx.fpr[1] = ctx.fpr[0] + ctx.fpr[1];
    ctx.fpr[0] = ctx.fpr[6] + ctx.fpr[5];
    { const float fs = ctx.fpr[0]; const float ft = ctx.fpr[0]; if ((std::isinf(fs) && ft == 0.0f) || (std::isinf(ft) && fs == 0.0f)) ctx.set_fpr_bits(0, 0x7FC00000u); else ctx.fpr[0] = fs * ft; }
    ctx.set_fpu_condition((ctx.fpr[1] <= ctx.fpr[0]));
    ctx.set_gpr(2, 0u + static_cast<std::uint32_t>(1));
    { const bool branch_taken = ctx.fpu_condition();
    // nop
      if (branch_taken) {
          goto L_089FC460;
      }
      goto L_089FC45C;
    }
L_089FC45C:
    ctx.set_gpr(2, 0u + 0u);
    goto L_089FC460;
L_089FC460:
    jump_target = ctx.gpr[31];
    // nop
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_089FC468:
    ctx.fpr[6] = std::bit_cast<float>(rt.memory().aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(20)));
    ctx.fpr[5] = std::bit_cast<float>(0u);
    ctx.set_fpu_condition((ctx.fpr[6] < ctx.fpr[5]));
    // nop
    { const bool branch_taken = !ctx.fpu_condition();
    // nop
      if (branch_taken) {
          goto L_089FC48C;
      }
      goto L_089FC480;
    }
L_089FC480:
    ctx.set_gpr(2, 0u + 0u);
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_089FC584;
      }
      goto L_089FC48C;
    }
L_089FC48C:
    ctx.fpr[1] = std::bit_cast<float>(rt.memory().aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(8)));
    ctx.fpr[0] = std::bit_cast<float>(rt.memory().aot_load32(ctx.gpr[5] + static_cast<std::uint32_t>(8)));
    ctx.fpr[4] = ctx.fpr[1] - ctx.fpr[0];
    ctx.fpr[1] = std::bit_cast<float>(rt.memory().aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(12)));
    ctx.fpr[0] = std::bit_cast<float>(rt.memory().aot_load32(ctx.gpr[5] + static_cast<std::uint32_t>(12)));
    ctx.fpr[3] = ctx.fpr[1] - ctx.fpr[0];
    ctx.fpr[1] = std::bit_cast<float>(rt.memory().aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(16)));
    ctx.fpr[0] = std::bit_cast<float>(rt.memory().aot_load32(ctx.gpr[5] + static_cast<std::uint32_t>(16)));
    ctx.fpr[2] = ctx.fpr[1] - ctx.fpr[0];
    ctx.fpr[0] = std::bit_cast<float>(rt.memory().aot_load32(ctx.gpr[5] + static_cast<std::uint32_t>(20)));
    { const float fs = ctx.fpr[4]; const float ft = ctx.fpr[0]; if ((std::isinf(fs) && ft == 0.0f) || (std::isinf(ft) && fs == 0.0f)) ctx.set_fpr_bits(1, 0x7FC00000u); else ctx.fpr[1] = fs * ft; }
    ctx.fpr[0] = std::bit_cast<float>(rt.memory().aot_load32(ctx.gpr[5] + static_cast<std::uint32_t>(24)));
    { const float fs = ctx.fpr[3]; const float ft = ctx.fpr[0]; if ((std::isinf(fs) && ft == 0.0f) || (std::isinf(ft) && fs == 0.0f)) ctx.set_fpr_bits(0, 0x7FC00000u); else ctx.fpr[0] = fs * ft; }
    ctx.fpr[1] = ctx.fpr[1] + ctx.fpr[0];
    ctx.fpr[0] = std::bit_cast<float>(rt.memory().aot_load32(ctx.gpr[5] + static_cast<std::uint32_t>(28)));
    { const float fs = ctx.fpr[2]; const float ft = ctx.fpr[0]; if ((std::isinf(fs) && ft == 0.0f) || (std::isinf(ft) && fs == 0.0f)) ctx.set_fpr_bits(0, 0x7FC00000u); else ctx.fpr[0] = fs * ft; }
    ctx.fpr[7] = ctx.fpr[0] + ctx.fpr[1];
    { const float fs = ctx.fpr[6]; const float ft = ctx.fpr[6]; if ((std::isinf(fs) && ft == 0.0f) || (std::isinf(ft) && fs == 0.0f)) ctx.set_fpr_bits(1, 0x7FC00000u); else ctx.fpr[1] = fs * ft; }
    { const float fs = ctx.fpr[7]; const float ft = ctx.fpr[7]; if ((std::isinf(fs) && ft == 0.0f) || (std::isinf(ft) && fs == 0.0f)) ctx.set_fpr_bits(0, 0x7FC00000u); else ctx.fpr[0] = fs * ft; }
    ctx.fpr[1] = ctx.fpr[1] + ctx.fpr[0];
    { const float fs = ctx.fpr[4]; const float ft = ctx.fpr[4]; if ((std::isinf(fs) && ft == 0.0f) || (std::isinf(ft) && fs == 0.0f)) ctx.set_fpr_bits(0, 0x7FC00000u); else ctx.fpr[0] = fs * ft; }
    ctx.fpr[1] = ctx.fpr[1] - ctx.fpr[0];
    { const float fs = ctx.fpr[3]; const float ft = ctx.fpr[3]; if ((std::isinf(fs) && ft == 0.0f) || (std::isinf(ft) && fs == 0.0f)) ctx.set_fpr_bits(0, 0x7FC00000u); else ctx.fpr[0] = fs * ft; }
    ctx.fpr[1] = ctx.fpr[1] - ctx.fpr[0];
    { const float fs = ctx.fpr[2]; const float ft = ctx.fpr[2]; if ((std::isinf(fs) && ft == 0.0f) || (std::isinf(ft) && fs == 0.0f)) ctx.set_fpr_bits(0, 0x7FC00000u); else ctx.fpr[0] = fs * ft; }
    ctx.fpr[0] = ctx.fpr[1] - ctx.fpr[0];
    ctx.set_fpu_condition((ctx.fpr[0] < ctx.fpr[5]));
    // nop
    { const bool branch_taken = !ctx.fpu_condition();
    // nop
      if (branch_taken) {
          goto L_089FC510;
      }
      goto L_089FC504;
    }
L_089FC504:
    ctx.set_gpr(2, 0u + 0u);
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_089FC584;
      }
      goto L_089FC510;
    }
L_089FC510:
    ctx.fpr[2] = std::sqrt(ctx.fpr[0]);
    ctx.fpr[1] = ctx.fpr[7] - ctx.fpr[2];
    ctx.set_fpu_condition((ctx.fpr[5] <= ctx.fpr[1]));
    // nop
    { const bool branch_taken = !ctx.fpu_condition();
    // nop
      if (branch_taken) {
          goto L_089FC548;
      }
      goto L_089FC528;
    }
L_089FC528:
    ctx.fpr[0] = std::bit_cast<float>(rt.memory().aot_load32(ctx.gpr[5] + static_cast<std::uint32_t>(32)));
    ctx.set_fpu_condition((ctx.fpr[1] <= ctx.fpr[0]));
    // nop
    { const bool branch_taken = !ctx.fpu_condition();
    // nop
      if (branch_taken) {
          goto L_089FC548;
      }
      goto L_089FC53C;
    }
L_089FC53C:
    ctx.set_gpr(2, 0u + static_cast<std::uint32_t>(1));
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_089FC584;
      }
      goto L_089FC548;
    }
L_089FC548:
    ctx.fpr[1] = ctx.fpr[7] + ctx.fpr[2];
    ctx.fpr[0] = std::bit_cast<float>(0u);
    ctx.set_fpu_condition((ctx.fpr[0] <= ctx.fpr[1]));
    // nop
    { const bool branch_taken = !ctx.fpu_condition();
    // nop
      if (branch_taken) {
          goto L_089FC580;
      }
      goto L_089FC560;
    }
L_089FC560:
    ctx.fpr[0] = std::bit_cast<float>(rt.memory().aot_load32(ctx.gpr[5] + static_cast<std::uint32_t>(32)));
    ctx.set_fpu_condition((ctx.fpr[1] <= ctx.fpr[0]));
    // nop
    { const bool branch_taken = !ctx.fpu_condition();
    // nop
      if (branch_taken) {
          goto L_089FC580;
      }
      goto L_089FC574;
    }
L_089FC574:
    ctx.set_gpr(2, 0u + static_cast<std::uint32_t>(1));
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_089FC584;
      }
      goto L_089FC580;
    }
L_089FC580:
    ctx.set_gpr(2, 0u + 0u);
    goto L_089FC584;
L_089FC584:
    jump_target = ctx.gpr[31];
    // nop
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_089FC58C:
    ctx.set_gpr(29, ctx.gpr[29] + static_cast<std::uint32_t>(-16));
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(12), ctx.gpr[31]);
    ctx.set_gpr(2, ctx.gpr[4] + 0u);
    ctx.fpr[1] = std::bit_cast<float>(rt.memory().aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(20)));
    ctx.fpr[0] = std::bit_cast<float>(0u);
    ctx.set_fpu_condition((ctx.fpr[1] < ctx.fpr[0]));
    // nop
    { const bool branch_taken = !ctx.fpu_condition();
    // nop
      if (branch_taken) {
          goto L_089FC5BC;
      }
      goto L_089FC5B0;
    }
L_089FC5B0:
    ctx.set_gpr(2, 0u + 0u);
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_089FC5E4;
      }
      goto L_089FC5BC;
    }
L_089FC5BC:
    ctx.set_gpr(4, ctx.gpr[5] + 0u);
    ctx.set_gpr(5, ctx.gpr[2] + 0u);
    ctx.set_gpr(31, 0x089FC5CCu);
    // nop
    goto L_089FF474;
L_089FC5CC:
    { const bool branch_taken = ctx.gpr[2] == 0u;
    // nop
      if (branch_taken) {
          goto L_089FC5E0;
      }
      goto L_089FC5D4;
    }
L_089FC5D4:
    ctx.set_gpr(2, 0u + static_cast<std::uint32_t>(1));
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_089FC5E4;
      }
      goto L_089FC5E0;
    }
L_089FC5E0:
    ctx.set_gpr(2, 0u + 0u);
    goto L_089FC5E4;
L_089FC5E4:
    ctx.set_gpr(31, rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(12)));
    ctx.set_gpr(29, ctx.gpr[29] + static_cast<std::uint32_t>(16));
    jump_target = ctx.gpr[31];
    // nop
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_089FC5F4:
    ctx.fpr[7] = std::bit_cast<float>(rt.memory().aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(20)));
    ctx.fpr[0] = std::bit_cast<float>(0u);
    ctx.set_fpu_condition((ctx.fpr[7] < ctx.fpr[0]));
    // nop
    { const bool branch_taken = !ctx.fpu_condition();
    // nop
      if (branch_taken) {
          goto L_089FC618;
      }
      goto L_089FC60C;
    }
L_089FC60C:
    ctx.set_gpr(2, 0u + 0u);
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_089FC740;
      }
      goto L_089FC618;
    }
L_089FC618:
    ctx.fpr[2] = std::bit_cast<float>(rt.memory().aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(8)));
    ctx.fpr[0] = std::bit_cast<float>(rt.memory().aot_load32(ctx.gpr[5] + static_cast<std::uint32_t>(8)));
    ctx.fpr[6] = ctx.fpr[2] - ctx.fpr[0];
    ctx.fpr[1] = std::bit_cast<float>(rt.memory().aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(12)));
    ctx.fpr[0] = std::bit_cast<float>(rt.memory().aot_load32(ctx.gpr[5] + static_cast<std::uint32_t>(12)));
    ctx.fpr[5] = ctx.fpr[1] - ctx.fpr[0];
    ctx.fpr[4] = std::bit_cast<float>(rt.memory().aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(16)));
    ctx.fpr[0] = std::bit_cast<float>(rt.memory().aot_load32(ctx.gpr[5] + static_cast<std::uint32_t>(16)));
    ctx.fpr[3] = ctx.fpr[4] - ctx.fpr[0];
    ctx.fpr[0] = std::bit_cast<float>(rt.memory().aot_load32(ctx.gpr[5] + static_cast<std::uint32_t>(20)));
    ctx.fpr[2] = ctx.fpr[2] - ctx.fpr[0];
    ctx.fpr[0] = std::bit_cast<float>(rt.memory().aot_load32(ctx.gpr[5] + static_cast<std::uint32_t>(24)));
    ctx.fpr[1] = ctx.fpr[1] - ctx.fpr[0];
    ctx.fpr[0] = std::bit_cast<float>(rt.memory().aot_load32(ctx.gpr[5] + static_cast<std::uint32_t>(28)));
    ctx.fpr[0] = ctx.fpr[4] - ctx.fpr[0];
    { const float fs = ctx.fpr[6]; const float ft = ctx.fpr[6]; if ((std::isinf(fs) && ft == 0.0f) || (std::isinf(ft) && fs == 0.0f)) ctx.set_fpr_bits(9, 0x7FC00000u); else ctx.fpr[9] = fs * ft; }
    { const float fs = ctx.fpr[5]; const float ft = ctx.fpr[5]; if ((std::isinf(fs) && ft == 0.0f) || (std::isinf(ft) && fs == 0.0f)) ctx.set_fpr_bits(8, 0x7FC00000u); else ctx.fpr[8] = fs * ft; }
    { const float fs = ctx.fpr[3]; const float ft = ctx.fpr[3]; if ((std::isinf(fs) && ft == 0.0f) || (std::isinf(ft) && fs == 0.0f)) ctx.set_fpr_bits(6, 0x7FC00000u); else ctx.fpr[6] = fs * ft; }
    { const float fs = ctx.fpr[2]; const float ft = ctx.fpr[2]; if ((std::isinf(fs) && ft == 0.0f) || (std::isinf(ft) && fs == 0.0f)) ctx.set_fpr_bits(5, 0x7FC00000u); else ctx.fpr[5] = fs * ft; }
    { const float fs = ctx.fpr[1]; const float ft = ctx.fpr[1]; if ((std::isinf(fs) && ft == 0.0f) || (std::isinf(ft) && fs == 0.0f)) ctx.set_fpr_bits(4, 0x7FC00000u); else ctx.fpr[4] = fs * ft; }
    { const float fs = ctx.fpr[0]; const float ft = ctx.fpr[0]; if ((std::isinf(fs) && ft == 0.0f) || (std::isinf(ft) && fs == 0.0f)) ctx.set_fpr_bits(3, 0x7FC00000u); else ctx.fpr[3] = fs * ft; }
    { const float fs = ctx.fpr[7]; const float ft = ctx.fpr[7]; if ((std::isinf(fs) && ft == 0.0f) || (std::isinf(ft) && fs == 0.0f)) ctx.set_fpr_bits(7, 0x7FC00000u); else ctx.fpr[7] = fs * ft; }
    ctx.set_fpr_bits(2, ctx.fpr_bits(9));
    ctx.set_fpr_bits(0, ctx.fpr_bits(8));
    ctx.set_fpr_bits(1, ctx.fpr_bits(6));
    ctx.set_fpu_condition((ctx.fpr[9] < ctx.fpr[5]));
    // nop
    { const bool branch_taken = !ctx.fpu_condition();
    // nop
      if (branch_taken) {
          goto L_089FC690;
      }
      goto L_089FC68C;
    }
L_089FC68C:
    ctx.set_fpr_bits(2, ctx.fpr_bits(5));
    goto L_089FC690;
L_089FC690:
    ctx.set_fpu_condition((ctx.fpr[0] < ctx.fpr[4]));
    // nop
    { const bool branch_taken = !ctx.fpu_condition();
    // nop
      if (branch_taken) {
          goto L_089FC6A4;
      }
      goto L_089FC6A0;
    }
L_089FC6A0:
    ctx.set_fpr_bits(0, ctx.fpr_bits(4));
    goto L_089FC6A4;
L_089FC6A4:
    ctx.set_fpu_condition((ctx.fpr[1] < ctx.fpr[3]));
    // nop
    { const bool branch_taken = !ctx.fpu_condition();
    // nop
      if (branch_taken) {
          goto L_089FC6B8;
      }
      goto L_089FC6B4;
    }
L_089FC6B4:
    ctx.set_fpr_bits(1, ctx.fpr_bits(3));
    goto L_089FC6B8;
L_089FC6B8:
    ctx.fpr[0] = ctx.fpr[2] + ctx.fpr[0];
    ctx.fpr[0] = ctx.fpr[1] + ctx.fpr[0];
    ctx.set_fpu_condition((ctx.fpr[0] <= ctx.fpr[7]));
    // nop
    { const bool branch_taken = !ctx.fpu_condition();
    // nop
      if (branch_taken) {
          goto L_089FC6DC;
      }
      goto L_089FC6D0;
    }
L_089FC6D0:
    ctx.set_gpr(2, 0u + static_cast<std::uint32_t>(2));
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_089FC740;
      }
      goto L_089FC6DC;
    }
L_089FC6DC:
    ctx.set_fpu_condition(((std::isnan(ctx.fpr[9]) || std::isnan(ctx.fpr[5])) || ctx.fpr[9] <= ctx.fpr[5]));
    // nop
    { const bool branch_taken = ctx.fpu_condition();
    // nop
      if (branch_taken) {
          goto L_089FC6F0;
      }
      goto L_089FC6EC;
    }
L_089FC6EC:
    ctx.set_fpr_bits(9, ctx.fpr_bits(5));
    goto L_089FC6F0;
L_089FC6F0:
    ctx.set_fpu_condition(((std::isnan(ctx.fpr[8]) || std::isnan(ctx.fpr[4])) || ctx.fpr[8] <= ctx.fpr[4]));
    // nop
    { const bool branch_taken = ctx.fpu_condition();
    // nop
      if (branch_taken) {
          goto L_089FC704;
      }
      goto L_089FC700;
    }
L_089FC700:
    ctx.set_fpr_bits(8, ctx.fpr_bits(4));
    goto L_089FC704;
L_089FC704:
    ctx.set_fpu_condition(((std::isnan(ctx.fpr[6]) || std::isnan(ctx.fpr[3])) || ctx.fpr[6] <= ctx.fpr[3]));
    // nop
    { const bool branch_taken = ctx.fpu_condition();
    // nop
      if (branch_taken) {
          goto L_089FC718;
      }
      goto L_089FC714;
    }
L_089FC714:
    ctx.set_fpr_bits(6, ctx.fpr_bits(3));
    goto L_089FC718;
L_089FC718:
    ctx.fpr[0] = ctx.fpr[9] + ctx.fpr[8];
    ctx.fpr[0] = ctx.fpr[6] + ctx.fpr[0];
    ctx.set_fpu_condition((ctx.fpr[7] < ctx.fpr[0]));
    // nop
    { const bool branch_taken = !ctx.fpu_condition();
    // nop
      if (branch_taken) {
          goto L_089FC73C;
      }
      goto L_089FC730;
    }
L_089FC730:
    ctx.set_gpr(2, 0u + 0u);
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_089FC740;
      }
      goto L_089FC73C;
    }
L_089FC73C:
    ctx.set_gpr(2, 0u + static_cast<std::uint32_t>(1));
    goto L_089FC740;
L_089FC740:
    jump_target = ctx.gpr[31];
    // nop
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_089FC748:
    ctx.set_gpr(29, ctx.gpr[29] + static_cast<std::uint32_t>(-32));
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(28), ctx.gpr[31]);
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(24), ctx.gpr[19]);
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(20), ctx.gpr[18]);
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(16), ctx.gpr[17]);
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(12), ctx.gpr[16]);
    ctx.set_gpr(19, ctx.gpr[4] + 0u);
    ctx.set_gpr(18, ctx.gpr[5] + 0u);
    ctx.fpr[1] = std::bit_cast<float>(rt.memory().aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(20)));
    ctx.fpr[0] = std::bit_cast<float>(0u);
    ctx.set_fpu_condition((ctx.fpr[1] < ctx.fpr[0]));
    // nop
    { const bool branch_taken = !ctx.fpu_condition();
    // nop
      if (branch_taken) {
          goto L_089FC78C;
      }
      goto L_089FC780;
    }
L_089FC780:
    ctx.set_gpr(2, 0u + 0u);
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_089FC7E8;
      }
      goto L_089FC78C;
    }
L_089FC78C:
    ctx.set_gpr(5, rt.memory().aot_load32(ctx.gpr[18] + static_cast<std::uint32_t>(8)));
    ctx.set_gpr(31, 0x089FC798u);
    // nop
    goto L_089FC58C;
L_089FC798:
    ctx.set_gpr(17, ctx.gpr[2] + 0u);
    ctx.set_gpr(16, 0u + static_cast<std::uint32_t>(1));
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_089FC7D8;
      }
      goto L_089FC7A8;
    }
L_089FC7A8:
    ctx.set_gpr(2, ctx.gpr[16] << 2u);
    ctx.set_gpr(2, ctx.gpr[2] + ctx.gpr[18]);
    ctx.set_gpr(4, ctx.gpr[19] + 0u);
    ctx.set_gpr(5, rt.memory().aot_load32(ctx.gpr[2] + static_cast<std::uint32_t>(8)));
    ctx.set_gpr(31, 0x089FC7C0u);
    // nop
    goto L_089FC58C;
L_089FC7C0:
    { const bool branch_taken = ctx.gpr[2] == ctx.gpr[17];
    // nop
      if (branch_taken) {
          goto L_089FC7D4;
      }
      goto L_089FC7C8;
    }
L_089FC7C8:
    ctx.set_gpr(2, 0u + static_cast<std::uint32_t>(1));
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_089FC7E8;
      }
      goto L_089FC7D4;
    }
L_089FC7D4:
    ctx.set_gpr(16, ctx.gpr[16] + static_cast<std::uint32_t>(1));
    goto L_089FC7D8;
L_089FC7D8:
    ctx.set_gpr(2, static_cast<std::int32_t>(ctx.gpr[16]) < 6 ? 1u : 0u);
    { const bool branch_taken = ctx.gpr[2] != 0u;
    // nop
      if (branch_taken) {
          goto L_089FC7A8;
      }
      goto L_089FC7E4;
    }
L_089FC7E4:
    ctx.set_gpr(2, ctx.gpr[17] + 0u);
    goto L_089FC7E8;
L_089FC7E8:
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
L_089FC808:
    ctx.fpr[5] = std::bit_cast<float>(rt.memory().aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(20)));
    ctx.fpr[0] = std::bit_cast<float>(0u);
    ctx.set_fpu_condition((ctx.fpr[5] < ctx.fpr[0]));
    // nop
    { const bool branch_taken = !ctx.fpu_condition();
    // nop
      if (branch_taken) {
          goto L_089FC82C;
      }
      goto L_089FC820;
    }
L_089FC820:
    ctx.set_gpr(2, 0u + 0u);
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_089FC8CC;
      }
      goto L_089FC82C;
    }
L_089FC82C:
    ctx.fpr[1] = std::bit_cast<float>(rt.memory().aot_load32(ctx.gpr[5] + static_cast<std::uint32_t>(12)));
    ctx.fpr[0] = std::bit_cast<float>(rt.memory().aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(12)));
    ctx.fpr[4] = ctx.fpr[0] - ctx.fpr[1];
    ctx.fpr[1] = std::bit_cast<float>(rt.memory().aot_load32(ctx.gpr[5] + static_cast<std::uint32_t>(8)));
    ctx.fpr[0] = std::bit_cast<float>(rt.memory().aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(8)));
    ctx.fpr[3] = ctx.fpr[0] - ctx.fpr[1];
    ctx.fpr[1] = std::bit_cast<float>(rt.memory().aot_load32(ctx.gpr[5] + static_cast<std::uint32_t>(16)));
    ctx.fpr[0] = std::bit_cast<float>(rt.memory().aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(16)));
    ctx.fpr[2] = ctx.fpr[0] - ctx.fpr[1];
    { const float fs = ctx.fpr[3]; const float ft = ctx.fpr[3]; if ((std::isinf(fs) && ft == 0.0f) || (std::isinf(ft) && fs == 0.0f)) ctx.set_fpr_bits(1, 0x7FC00000u); else ctx.fpr[1] = fs * ft; }
    { const float fs = ctx.fpr[4]; const float ft = ctx.fpr[4]; if ((std::isinf(fs) && ft == 0.0f) || (std::isinf(ft) && fs == 0.0f)) ctx.set_fpr_bits(0, 0x7FC00000u); else ctx.fpr[0] = fs * ft; }
    ctx.fpr[1] = ctx.fpr[1] + ctx.fpr[0];
    { const float fs = ctx.fpr[2]; const float ft = ctx.fpr[2]; if ((std::isinf(fs) && ft == 0.0f) || (std::isinf(ft) && fs == 0.0f)) ctx.set_fpr_bits(0, 0x7FC00000u); else ctx.fpr[0] = fs * ft; }
    ctx.fpr[2] = ctx.fpr[0] + ctx.fpr[1];
    ctx.fpr[0] = std::bit_cast<float>(rt.memory().aot_load32(ctx.gpr[5] + static_cast<std::uint32_t>(20)));
    ctx.set_fpu_condition((ctx.fpr[0] <= ctx.fpr[5]));
    // nop
    { const bool branch_taken = !ctx.fpu_condition();
    // nop
      if (branch_taken) {
          goto L_089FC89C;
      }
      goto L_089FC878;
    }
L_089FC878:
    ctx.fpr[0] = ctx.fpr[5] - ctx.fpr[0];
    { const float fs = ctx.fpr[0]; const float ft = ctx.fpr[0]; if ((std::isinf(fs) && ft == 0.0f) || (std::isinf(ft) && fs == 0.0f)) ctx.set_fpr_bits(0, 0x7FC00000u); else ctx.fpr[0] = fs * ft; }
    ctx.set_fpu_condition((ctx.fpr[2] <= ctx.fpr[0]));
    // nop
    { const bool branch_taken = !ctx.fpu_condition();
    // nop
      if (branch_taken) {
          goto L_089FC89C;
      }
      goto L_089FC890;
    }
L_089FC890:
    ctx.set_gpr(2, 0u + static_cast<std::uint32_t>(2));
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_089FC8CC;
      }
      goto L_089FC89C;
    }
L_089FC89C:
    ctx.fpr[1] = std::bit_cast<float>(rt.memory().aot_load32(ctx.gpr[5] + static_cast<std::uint32_t>(20)));
    ctx.fpr[0] = std::bit_cast<float>(rt.memory().aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(20)));
    ctx.fpr[0] = ctx.fpr[0] + ctx.fpr[1];
    { const float fs = ctx.fpr[0]; const float ft = ctx.fpr[0]; if ((std::isinf(fs) && ft == 0.0f) || (std::isinf(ft) && fs == 0.0f)) ctx.set_fpr_bits(0, 0x7FC00000u); else ctx.fpr[0] = fs * ft; }
    ctx.set_fpu_condition((ctx.fpr[2] <= ctx.fpr[0]));
    // nop
    { const bool branch_taken = !ctx.fpu_condition();
    // nop
      if (branch_taken) {
          goto L_089FC8C8;
      }
      goto L_089FC8BC;
    }
L_089FC8BC:
    ctx.set_gpr(2, 0u + static_cast<std::uint32_t>(1));
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_089FC8CC;
      }
      goto L_089FC8C8;
    }
L_089FC8C8:
    ctx.set_gpr(2, 0u + 0u);
    goto L_089FC8CC;
L_089FC8CC:
    jump_target = ctx.gpr[31];
    // nop
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_089FC8D4:
    ctx.set_gpr(29, ctx.gpr[29] + static_cast<std::uint32_t>(-32));
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(12), ctx.gpr[31]);
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(8), ctx.gpr[18]);
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(4), ctx.gpr[17]);
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(0), ctx.gpr[16]);
    ctx.set_gpr(18, ctx.gpr[5] + 0u);
    ctx.set_gpr(17, ctx.gpr[4] + 0u);
    ctx.fpr[1] = std::bit_cast<float>(rt.memory().aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(20)));
    ctx.fpr[0] = std::bit_cast<float>(0u);
    ctx.set_fpu_condition((ctx.fpr[1] < ctx.fpr[0]));
    // nop
    { const bool branch_taken = !ctx.fpu_condition();
    // nop
      if (branch_taken) {
          goto L_089FC914;
      }
      goto L_089FC908;
    }
L_089FC908:
    ctx.set_gpr(2, 0u + 0u);
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_089FC9CC;
      }
      goto L_089FC914;
    }
L_089FC914:
    ctx.set_gpr(5, ctx.gpr[18] + static_cast<std::uint32_t>(8));
    ctx.set_gpr(31, 0x089FC920u);
    // nop
    goto L_089FF418;
L_089FC920:
    ctx.set_gpr(16, 0u < ctx.gpr[2] ? 1u : 0u);
    ctx.fpr[2] = std::bit_cast<float>(rt.memory().aot_load32(ctx.gpr[18] + static_cast<std::uint32_t>(32)));
    ctx.fpr[1] = std::bit_cast<float>(rt.memory().aot_load32(ctx.gpr[18] + static_cast<std::uint32_t>(8)));
    ctx.fpr[0] = std::bit_cast<float>(rt.memory().aot_load32(ctx.gpr[18] + static_cast<std::uint32_t>(20)));
    { const float fs = ctx.fpr[2]; const float ft = ctx.fpr[0]; if ((std::isinf(fs) && ft == 0.0f) || (std::isinf(ft) && fs == 0.0f)) ctx.set_fpr_bits(0, 0x7FC00000u); else ctx.fpr[0] = fs * ft; }
    ctx.fpr[0] = ctx.fpr[1] + ctx.fpr[0];
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(20), std::bit_cast<std::uint32_t>(ctx.fpr[0]));
    ctx.fpr[1] = std::bit_cast<float>(rt.memory().aot_load32(ctx.gpr[18] + static_cast<std::uint32_t>(12)));
    ctx.fpr[0] = std::bit_cast<float>(rt.memory().aot_load32(ctx.gpr[18] + static_cast<std::uint32_t>(24)));
    { const float fs = ctx.fpr[2]; const float ft = ctx.fpr[0]; if ((std::isinf(fs) && ft == 0.0f) || (std::isinf(ft) && fs == 0.0f)) ctx.set_fpr_bits(0, 0x7FC00000u); else ctx.fpr[0] = fs * ft; }
    ctx.fpr[0] = ctx.fpr[1] + ctx.fpr[0];
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(24), std::bit_cast<std::uint32_t>(ctx.fpr[0]));
    ctx.fpr[1] = std::bit_cast<float>(rt.memory().aot_load32(ctx.gpr[18] + static_cast<std::uint32_t>(16)));
    ctx.fpr[0] = std::bit_cast<float>(rt.memory().aot_load32(ctx.gpr[18] + static_cast<std::uint32_t>(28)));
    { const float fs = ctx.fpr[2]; const float ft = ctx.fpr[0]; if ((std::isinf(fs) && ft == 0.0f) || (std::isinf(ft) && fs == 0.0f)) ctx.set_fpr_bits(0, 0x7FC00000u); else ctx.fpr[0] = fs * ft; }
    ctx.fpr[0] = ctx.fpr[1] + ctx.fpr[0];
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(28), std::bit_cast<std::uint32_t>(ctx.fpr[0]));
    ctx.set_gpr(4, ctx.gpr[17] + 0u);
    ctx.set_gpr(5, ctx.gpr[29] + static_cast<std::uint32_t>(20));
    ctx.set_gpr(31, 0x089FC974u);
    // nop
    goto L_089FF418;
L_089FC974:
    ctx.set_gpr(2, 0u < ctx.gpr[2] ? 1u : 0u);
    { const bool branch_taken = ctx.gpr[16] == 0u;
    // nop
      if (branch_taken) {
          goto L_089FC994;
      }
      goto L_089FC980;
    }
L_089FC980:
    { const bool branch_taken = ctx.gpr[2] == 0u;
    // nop
      if (branch_taken) {
          goto L_089FC994;
      }
      goto L_089FC988;
    }
L_089FC988:
    ctx.set_gpr(2, 0u + static_cast<std::uint32_t>(2));
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_089FC9CC;
      }
      goto L_089FC994;
    }
L_089FC994:
    { const bool branch_taken = ctx.gpr[16] != 0u;
    // nop
      if (branch_taken) {
          goto L_089FC9BC;
      }
      goto L_089FC99C;
    }
L_089FC99C:
    { const bool branch_taken = ctx.gpr[2] != 0u;
    // nop
      if (branch_taken) {
          goto L_089FC9BC;
      }
      goto L_089FC9A4;
    }
L_089FC9A4:
    ctx.set_gpr(4, ctx.gpr[17] + 0u);
    ctx.set_gpr(5, ctx.gpr[18] + 0u);
    ctx.set_gpr(31, 0x089FC9B4u);
    // nop
    goto L_089FF4F4;
L_089FC9B4:
    { const bool branch_taken = ctx.gpr[2] == 0u;
    // nop
      if (branch_taken) {
          goto L_089FC9C8;
      }
      goto L_089FC9BC;
    }
L_089FC9BC:
    ctx.set_gpr(2, 0u + static_cast<std::uint32_t>(1));
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_089FC9CC;
      }
      goto L_089FC9C8;
    }
L_089FC9C8:
    ctx.set_gpr(2, 0u + 0u);
    goto L_089FC9CC;
L_089FC9CC:
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
L_089FC9E8:
    ctx.fpr[5] = std::bit_cast<float>(rt.memory().aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(20)));
    ctx.fpr[0] = std::bit_cast<float>(0u);
    ctx.set_fpu_condition((ctx.fpr[5] < ctx.fpr[0]));
    // nop
    { const bool branch_taken = !ctx.fpu_condition();
    // nop
      if (branch_taken) {
          goto L_089FCA0C;
      }
      goto L_089FCA00;
    }
L_089FCA00:
    ctx.set_gpr(2, 0u + 0u);
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_089FCA68;
      }
      goto L_089FCA0C;
    }
L_089FCA0C:
    ctx.fpr[1] = std::bit_cast<float>(rt.memory().aot_load32(ctx.gpr[5] + static_cast<std::uint32_t>(4)));
    ctx.fpr[0] = std::bit_cast<float>(rt.memory().aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(12)));
    ctx.fpr[4] = ctx.fpr[0] - ctx.fpr[1];
    ctx.fpr[1] = std::bit_cast<float>(rt.memory().aot_load32(ctx.gpr[5] + static_cast<std::uint32_t>(0)));
    ctx.fpr[0] = std::bit_cast<float>(rt.memory().aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(8)));
    ctx.fpr[3] = ctx.fpr[0] - ctx.fpr[1];
    ctx.fpr[1] = std::bit_cast<float>(rt.memory().aot_load32(ctx.gpr[5] + static_cast<std::uint32_t>(8)));
    ctx.fpr[0] = std::bit_cast<float>(rt.memory().aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(16)));
    ctx.fpr[2] = ctx.fpr[0] - ctx.fpr[1];
    { const float fs = ctx.fpr[3]; const float ft = ctx.fpr[3]; if ((std::isinf(fs) && ft == 0.0f) || (std::isinf(ft) && fs == 0.0f)) ctx.set_fpr_bits(1, 0x7FC00000u); else ctx.fpr[1] = fs * ft; }
    { const float fs = ctx.fpr[4]; const float ft = ctx.fpr[4]; if ((std::isinf(fs) && ft == 0.0f) || (std::isinf(ft) && fs == 0.0f)) ctx.set_fpr_bits(0, 0x7FC00000u); else ctx.fpr[0] = fs * ft; }
    ctx.fpr[1] = ctx.fpr[1] + ctx.fpr[0];
    { const float fs = ctx.fpr[2]; const float ft = ctx.fpr[2]; if ((std::isinf(fs) && ft == 0.0f) || (std::isinf(ft) && fs == 0.0f)) ctx.set_fpr_bits(0, 0x7FC00000u); else ctx.fpr[0] = fs * ft; }
    ctx.fpr[1] = ctx.fpr[0] + ctx.fpr[1];
    { const float fs = ctx.fpr[5]; const float ft = ctx.fpr[5]; if ((std::isinf(fs) && ft == 0.0f) || (std::isinf(ft) && fs == 0.0f)) ctx.set_fpr_bits(0, 0x7FC00000u); else ctx.fpr[0] = fs * ft; }
    ctx.set_fpu_condition((ctx.fpr[1] <= ctx.fpr[0]));
    // nop
    { const bool branch_taken = !ctx.fpu_condition();
    // nop
      if (branch_taken) {
          goto L_089FCA64;
      }
      goto L_089FCA58;
    }
L_089FCA58:
    ctx.set_gpr(2, 0u + static_cast<std::uint32_t>(2));
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_089FCA68;
      }
      goto L_089FCA64;
    }
L_089FCA64:
    ctx.set_gpr(2, 0u + 0u);
    goto L_089FCA68;
L_089FCA68:
    jump_target = ctx.gpr[31];
    // nop
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_089FCA70:
    ctx.set_gpr(29, ctx.gpr[29] + static_cast<std::uint32_t>(-112));
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(12), ctx.gpr[31]);
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(8), ctx.gpr[16]);
    ctx.set_gpr(16, ctx.gpr[4] + 0u);
    ctx.set_gpr(4, ctx.gpr[5] + 0u);
    ctx.set_gpr(6, 0u + static_cast<std::uint32_t>(1));
    ctx.set_gpr(3, ctx.gpr[6] + 0u);
    ctx.fpr[4] = std::bit_cast<float>(rt.memory().aot_load32(ctx.gpr[5] + static_cast<std::uint32_t>(20)));
    ctx.fpr[3] = std::bit_cast<float>(rt.memory().aot_load32(ctx.gpr[5] + static_cast<std::uint32_t>(8)));
    ctx.set_fpu_condition(((std::isnan(ctx.fpr[3]) || std::isnan(ctx.fpr[4])) || ctx.fpr[3] <= ctx.fpr[4]));
    // nop
    { const bool branch_taken = !ctx.fpu_condition();
    // nop
      if (branch_taken) {
          goto L_089FCAC0;
      }
      goto L_089FCAA4;
    }
L_089FCAA4:
    ctx.fpr[1] = std::bit_cast<float>(rt.memory().aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(12)));
    ctx.fpr[0] = std::bit_cast<float>(rt.memory().aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(24)));
    ctx.set_fpu_condition(((std::isnan(ctx.fpr[1]) || std::isnan(ctx.fpr[0])) || ctx.fpr[1] <= ctx.fpr[0]));
    // nop
    { const bool branch_taken = !ctx.fpu_condition();
    // nop
      if (branch_taken) {
          goto L_089FCAC0;
      }
      goto L_089FCABC;
    }
L_089FCABC:
    ctx.set_gpr(3, 0u + 0u);
    goto L_089FCAC0;
L_089FCAC0:
    { const bool branch_taken = ctx.gpr[3] != 0u;
    // nop
      if (branch_taken) {
          goto L_089FCAE4;
      }
      goto L_089FCAC8;
    }
L_089FCAC8:
    ctx.fpr[1] = std::bit_cast<float>(rt.memory().aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(16)));
    ctx.fpr[0] = std::bit_cast<float>(rt.memory().aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(28)));
    ctx.set_fpu_condition(((std::isnan(ctx.fpr[1]) || std::isnan(ctx.fpr[0])) || ctx.fpr[1] <= ctx.fpr[0]));
    // nop
    { const bool branch_taken = !ctx.fpu_condition();
    // nop
      if (branch_taken) {
          goto L_089FCAE4;
      }
      goto L_089FCAE0;
    }
L_089FCAE0:
    ctx.set_gpr(6, 0u + 0u);
    goto L_089FCAE4;
L_089FCAE4:
    { const bool branch_taken = ctx.gpr[6] != 0u;
    // nop
      if (branch_taken) {
          goto L_089FCBB4;
      }
      goto L_089FCAEC;
    }
L_089FCAEC:
    ctx.fpr[1] = std::bit_cast<float>(rt.memory().aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(20)));
    ctx.fpr[0] = std::bit_cast<float>(0u);
    ctx.set_fpu_condition((ctx.fpr[1] < ctx.fpr[0]));
    // nop
    { const bool branch_taken = !ctx.fpu_condition();
    // nop
      if (branch_taken) {
          goto L_089FCB94;
      }
      goto L_089FCB04;
    }
L_089FCB04:
    ctx.set_gpr(3, 16128u << 16u);
    ctx.fpr[2] = std::bit_cast<float>(ctx.gpr[3]);
    { const float fs = ctx.fpr[2]; const float ft = ctx.fpr[3]; if ((std::isinf(fs) && ft == 0.0f) || (std::isinf(ft) && fs == 0.0f)) ctx.set_fpr_bits(1, 0x7FC00000u); else ctx.fpr[1] = fs * ft; }
    { const float fs = ctx.fpr[2]; const float ft = ctx.fpr[4]; if ((std::isinf(fs) && ft == 0.0f) || (std::isinf(ft) && fs == 0.0f)) ctx.set_fpr_bits(0, 0x7FC00000u); else ctx.fpr[0] = fs * ft; }
    ctx.fpr[0] = ctx.fpr[1] + ctx.fpr[0];
    rt.memory().aot_store32(ctx.gpr[16] + static_cast<std::uint32_t>(8), std::bit_cast<std::uint32_t>(ctx.fpr[0]));
    ctx.fpr[0] = std::bit_cast<float>(rt.memory().aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(12)));
    { const float fs = ctx.fpr[2]; const float ft = ctx.fpr[0]; if ((std::isinf(fs) && ft == 0.0f) || (std::isinf(ft) && fs == 0.0f)) ctx.set_fpr_bits(1, 0x7FC00000u); else ctx.fpr[1] = fs * ft; }
    ctx.fpr[0] = std::bit_cast<float>(rt.memory().aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(24)));
    { const float fs = ctx.fpr[2]; const float ft = ctx.fpr[0]; if ((std::isinf(fs) && ft == 0.0f) || (std::isinf(ft) && fs == 0.0f)) ctx.set_fpr_bits(0, 0x7FC00000u); else ctx.fpr[0] = fs * ft; }
    ctx.fpr[0] = ctx.fpr[1] + ctx.fpr[0];
    rt.memory().aot_store32(ctx.gpr[16] + static_cast<std::uint32_t>(12), std::bit_cast<std::uint32_t>(ctx.fpr[0]));
    ctx.fpr[0] = std::bit_cast<float>(rt.memory().aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(16)));
    { const float fs = ctx.fpr[2]; const float ft = ctx.fpr[0]; if ((std::isinf(fs) && ft == 0.0f) || (std::isinf(ft) && fs == 0.0f)) ctx.set_fpr_bits(1, 0x7FC00000u); else ctx.fpr[1] = fs * ft; }
    ctx.fpr[0] = std::bit_cast<float>(rt.memory().aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(28)));
    { const float fs = ctx.fpr[2]; const float ft = ctx.fpr[0]; if ((std::isinf(fs) && ft == 0.0f) || (std::isinf(ft) && fs == 0.0f)) ctx.set_fpr_bits(0, 0x7FC00000u); else ctx.fpr[0] = fs * ft; }
    ctx.fpr[0] = ctx.fpr[1] + ctx.fpr[0];
    rt.memory().aot_store32(ctx.gpr[16] + static_cast<std::uint32_t>(16), std::bit_cast<std::uint32_t>(ctx.fpr[0]));
    ctx.fpr[1] = std::bit_cast<float>(rt.memory().aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(24)));
    ctx.fpr[0] = std::bit_cast<float>(rt.memory().aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(12)));
    ctx.fpr[4] = ctx.fpr[0] - ctx.fpr[1];
    ctx.fpr[1] = std::bit_cast<float>(rt.memory().aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(20)));
    ctx.fpr[0] = std::bit_cast<float>(rt.memory().aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(8)));
    ctx.fpr[3] = ctx.fpr[0] - ctx.fpr[1];
    ctx.fpr[1] = std::bit_cast<float>(rt.memory().aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(28)));
    ctx.fpr[0] = std::bit_cast<float>(rt.memory().aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(16)));
    ctx.fpr[2] = ctx.fpr[0] - ctx.fpr[1];
    { const float fs = ctx.fpr[3]; const float ft = ctx.fpr[3]; if ((std::isinf(fs) && ft == 0.0f) || (std::isinf(ft) && fs == 0.0f)) ctx.set_fpr_bits(1, 0x7FC00000u); else ctx.fpr[1] = fs * ft; }
    { const float fs = ctx.fpr[4]; const float ft = ctx.fpr[4]; if ((std::isinf(fs) && ft == 0.0f) || (std::isinf(ft) && fs == 0.0f)) ctx.set_fpr_bits(0, 0x7FC00000u); else ctx.fpr[0] = fs * ft; }
    ctx.fpr[1] = ctx.fpr[1] + ctx.fpr[0];
    { const float fs = ctx.fpr[2]; const float ft = ctx.fpr[2]; if ((std::isinf(fs) && ft == 0.0f) || (std::isinf(ft) && fs == 0.0f)) ctx.set_fpr_bits(0, 0x7FC00000u); else ctx.fpr[0] = fs * ft; }
    ctx.fpr[0] = ctx.fpr[0] + ctx.fpr[1];
    ctx.fpr[0] = std::sqrt(ctx.fpr[0]);
    rt.memory().aot_store32(ctx.gpr[16] + static_cast<std::uint32_t>(20), std::bit_cast<std::uint32_t>(ctx.fpr[0]));
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_089FCBB4;
      }
      goto L_089FCB94;
    }
L_089FCB94:
    ctx.set_gpr(5, ctx.gpr[29] + static_cast<std::uint32_t>(16));
    ctx.set_gpr(31, 0x089FCBA0u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0124_entry, 124u, 685u, 0x089F7C54u>(ctx, &aot_mem) && ctx.pc == 0x089FCBA0u) goto L_089FCBA0;
    return;
L_089FCBA0:
    ctx.set_gpr(4, ctx.gpr[16] + 0u);
    ctx.set_gpr(5, ctx.gpr[29] + static_cast<std::uint32_t>(16));
    ctx.set_gpr(6, 0u + static_cast<std::uint32_t>(8));
    ctx.set_gpr(31, 0x089FCBB4u);
    // nop
    goto L_089FF62C;
L_089FCBB4:
    ctx.set_gpr(31, rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(12)));
    ctx.set_gpr(16, rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(8)));
    ctx.set_gpr(29, ctx.gpr[29] + static_cast<std::uint32_t>(112));
    jump_target = ctx.gpr[31];
    // nop
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_089FCBC8:
    ctx.fpr[14] = std::bit_cast<float>(rt.memory().aot_load32(ctx.gpr[5] + static_cast<std::uint32_t>(20)));
    ctx.fpr[1] = std::bit_cast<float>(0u);
    ctx.set_fpu_condition((ctx.fpr[14] < ctx.fpr[1]));
    // nop
    { const bool branch_taken = ctx.fpu_condition();
    // nop
      if (branch_taken) {
          goto L_089FCD84;
      }
      goto L_089FCBE0;
    }
L_089FCBE0:
    ctx.fpr[0] = std::bit_cast<float>(rt.memory().aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(20)));
    ctx.set_fpu_condition((ctx.fpr[0] < ctx.fpr[1]));
    // nop
    { const bool branch_taken = !ctx.fpu_condition();
    // nop
      if (branch_taken) {
          goto L_089FCC1C;
      }
      goto L_089FCBF4;
    }
L_089FCBF4:
    ctx.fpr[0] = std::bit_cast<float>(rt.memory().aot_load32(ctx.gpr[5] + static_cast<std::uint32_t>(8)));
    rt.memory().aot_store32(ctx.gpr[4] + static_cast<std::uint32_t>(8), std::bit_cast<std::uint32_t>(ctx.fpr[0]));
    ctx.fpr[0] = std::bit_cast<float>(rt.memory().aot_load32(ctx.gpr[5] + static_cast<std::uint32_t>(12)));
    rt.memory().aot_store32(ctx.gpr[4] + static_cast<std::uint32_t>(12), std::bit_cast<std::uint32_t>(ctx.fpr[0]));
    ctx.fpr[0] = std::bit_cast<float>(rt.memory().aot_load32(ctx.gpr[5] + static_cast<std::uint32_t>(16)));
    rt.memory().aot_store32(ctx.gpr[4] + static_cast<std::uint32_t>(16), std::bit_cast<std::uint32_t>(ctx.fpr[0]));
    ctx.fpr[0] = std::bit_cast<float>(rt.memory().aot_load32(ctx.gpr[5] + static_cast<std::uint32_t>(20)));
    rt.memory().aot_store32(ctx.gpr[4] + static_cast<std::uint32_t>(20), std::bit_cast<std::uint32_t>(ctx.fpr[0]));
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_089FCD84;
      }
      goto L_089FCC1C;
    }
L_089FCC1C:
    ctx.fpr[2] = std::bit_cast<float>(rt.memory().aot_load32(ctx.gpr[5] + static_cast<std::uint32_t>(8)));
    ctx.fpr[1] = std::bit_cast<float>(rt.memory().aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(8)));
    ctx.fpr[8] = ctx.fpr[1] - ctx.fpr[2];
    ctx.fpr[7] = std::bit_cast<float>(rt.memory().aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(12)));
    ctx.fpr[13] = std::bit_cast<float>(rt.memory().aot_load32(ctx.gpr[5] + static_cast<std::uint32_t>(12)));
    ctx.fpr[5] = ctx.fpr[7] - ctx.fpr[13];
    ctx.fpr[6] = std::bit_cast<float>(rt.memory().aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(16)));
    ctx.fpr[12] = std::bit_cast<float>(rt.memory().aot_load32(ctx.gpr[5] + static_cast<std::uint32_t>(16)));
    ctx.fpr[4] = ctx.fpr[6] - ctx.fpr[12];
    { const float fs = ctx.fpr[8]; const float ft = ctx.fpr[8]; if ((std::isinf(fs) && ft == 0.0f) || (std::isinf(ft) && fs == 0.0f)) ctx.set_fpr_bits(3, 0x7FC00000u); else ctx.fpr[3] = fs * ft; }
    { const float fs = ctx.fpr[5]; const float ft = ctx.fpr[5]; if ((std::isinf(fs) && ft == 0.0f) || (std::isinf(ft) && fs == 0.0f)) ctx.set_fpr_bits(0, 0x7FC00000u); else ctx.fpr[0] = fs * ft; }
    ctx.fpr[3] = ctx.fpr[3] + ctx.fpr[0];
    { const float fs = ctx.fpr[4]; const float ft = ctx.fpr[4]; if ((std::isinf(fs) && ft == 0.0f) || (std::isinf(ft) && fs == 0.0f)) ctx.set_fpr_bits(0, 0x7FC00000u); else ctx.fpr[0] = fs * ft; }
    ctx.fpr[3] = ctx.fpr[0] + ctx.fpr[3];
    ctx.fpr[0] = std::bit_cast<float>(rt.memory().aot_load32(ctx.gpr[28] + static_cast<std::uint32_t>(-32516)));
    ctx.set_fpu_condition((ctx.fpr[3] <= ctx.fpr[0]));
    // nop
    { const bool branch_taken = !ctx.fpu_condition();
    // nop
      if (branch_taken) {
          goto L_089FCC94;
      }
      goto L_089FCC68;
    }
L_089FCC68:
    ctx.fpr[0] = std::bit_cast<float>(rt.memory().aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(20)));
    ctx.set_fpu_condition(((std::isnan(ctx.fpr[0]) || std::isnan(ctx.fpr[14])) || ctx.fpr[0] <= ctx.fpr[14]));
    // nop
    { const bool branch_taken = ctx.fpu_condition();
    // nop
      if (branch_taken) {
          goto L_089FCC84;
      }
      goto L_089FCC7C;
    }
L_089FCC7C:
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_089FCC88;
      }
      goto L_089FCC84;
    }
L_089FCC84:
    ctx.set_fpr_bits(0, ctx.fpr_bits(14));
    goto L_089FCC88;
L_089FCC88:
    rt.memory().aot_store32(ctx.gpr[4] + static_cast<std::uint32_t>(20), std::bit_cast<std::uint32_t>(ctx.fpr[0]));
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_089FCD84;
      }
      goto L_089FCC94;
    }
L_089FCC94:
    ctx.fpr[11] = std::bit_cast<float>(rt.memory().aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(20)));
    ctx.fpr[0] = ctx.fpr[11] - ctx.fpr[14];
    { const float fs = ctx.fpr[0]; const float ft = ctx.fpr[0]; if ((std::isinf(fs) && ft == 0.0f) || (std::isinf(ft) && fs == 0.0f)) ctx.set_fpr_bits(0, 0x7FC00000u); else ctx.fpr[0] = fs * ft; }
    ctx.set_fpu_condition((ctx.fpr[3] < ctx.fpr[0]));
    // nop
    { const bool branch_taken = !ctx.fpu_condition();
    // nop
      if (branch_taken) {
          goto L_089FCCE4;
      }
      goto L_089FCCB0;
    }
L_089FCCB0:
    ctx.set_fpu_condition(((std::isnan(ctx.fpr[14]) || std::isnan(ctx.fpr[11])) || ctx.fpr[14] <= ctx.fpr[11]));
    // nop
    { const bool branch_taken = ctx.fpu_condition();
    // nop
      if (branch_taken) {
          goto L_089FCCDC;
      }
      goto L_089FCCC0;
    }
L_089FCCC0:
    rt.memory().aot_store32(ctx.gpr[4] + static_cast<std::uint32_t>(8), std::bit_cast<std::uint32_t>(ctx.fpr[2]));
    ctx.fpr[0] = std::bit_cast<float>(rt.memory().aot_load32(ctx.gpr[5] + static_cast<std::uint32_t>(12)));
    rt.memory().aot_store32(ctx.gpr[4] + static_cast<std::uint32_t>(12), std::bit_cast<std::uint32_t>(ctx.fpr[0]));
    ctx.fpr[0] = std::bit_cast<float>(rt.memory().aot_load32(ctx.gpr[5] + static_cast<std::uint32_t>(16)));
    rt.memory().aot_store32(ctx.gpr[4] + static_cast<std::uint32_t>(16), std::bit_cast<std::uint32_t>(ctx.fpr[0]));
    ctx.fpr[0] = std::bit_cast<float>(rt.memory().aot_load32(ctx.gpr[5] + static_cast<std::uint32_t>(20)));
    rt.memory().aot_store32(ctx.gpr[4] + static_cast<std::uint32_t>(20), std::bit_cast<std::uint32_t>(ctx.fpr[0]));
    goto L_089FCCDC;
L_089FCCDC:
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_089FCD84;
      }
      goto L_089FCCE4;
    }
L_089FCCE4:
    ctx.fpr[0] = std::sqrt(ctx.fpr[3]);
    ctx.set_gpr(3, 16256u << 16u);
    ctx.fpr[3] = std::bit_cast<float>(ctx.gpr[3]);
    ctx.fpr[3] = ctx.fpr[3] / ctx.fpr[0];
    { const float fs = ctx.fpr[8]; const float ft = ctx.fpr[3]; if ((std::isinf(fs) && ft == 0.0f) || (std::isinf(ft) && fs == 0.0f)) ctx.set_fpr_bits(10, 0x7FC00000u); else ctx.fpr[10] = fs * ft; }
    { const float fs = ctx.fpr[5]; const float ft = ctx.fpr[3]; if ((std::isinf(fs) && ft == 0.0f) || (std::isinf(ft) && fs == 0.0f)) ctx.set_fpr_bits(5, 0x7FC00000u); else ctx.fpr[5] = fs * ft; }
    { const float fs = ctx.fpr[4]; const float ft = ctx.fpr[3]; if ((std::isinf(fs) && ft == 0.0f) || (std::isinf(ft) && fs == 0.0f)) ctx.set_fpr_bits(4, 0x7FC00000u); else ctx.fpr[4] = fs * ft; }
    { const float fs = ctx.fpr[11]; const float ft = ctx.fpr[5]; if ((std::isinf(fs) && ft == 0.0f) || (std::isinf(ft) && fs == 0.0f)) ctx.set_fpr_bits(3, 0x7FC00000u); else ctx.fpr[3] = fs * ft; }
    ctx.fpr[9] = ctx.fpr[7] + ctx.fpr[3];
    { const float fs = ctx.fpr[11]; const float ft = ctx.fpr[4]; if ((std::isinf(fs) && ft == 0.0f) || (std::isinf(ft) && fs == 0.0f)) ctx.set_fpr_bits(3, 0x7FC00000u); else ctx.fpr[3] = fs * ft; }
    ctx.fpr[8] = ctx.fpr[6] + ctx.fpr[3];
    ctx.set_fpr_bits(7, ctx.fpr_bits(14) ^ 0x80000000u);
    { const float fs = ctx.fpr[7]; const float ft = ctx.fpr[5]; if ((std::isinf(fs) && ft == 0.0f) || (std::isinf(ft) && fs == 0.0f)) ctx.set_fpr_bits(3, 0x7FC00000u); else ctx.fpr[3] = fs * ft; }
    ctx.fpr[6] = ctx.fpr[13] + ctx.fpr[3];
    { const float fs = ctx.fpr[7]; const float ft = ctx.fpr[4]; if ((std::isinf(fs) && ft == 0.0f) || (std::isinf(ft) && fs == 0.0f)) ctx.set_fpr_bits(3, 0x7FC00000u); else ctx.fpr[3] = fs * ft; }
    ctx.fpr[5] = ctx.fpr[12] + ctx.fpr[3];
    { const float fs = ctx.fpr[11]; const float ft = ctx.fpr[10]; if ((std::isinf(fs) && ft == 0.0f) || (std::isinf(ft) && fs == 0.0f)) ctx.set_fpr_bits(3, 0x7FC00000u); else ctx.fpr[3] = fs * ft; }
    ctx.fpr[1] = ctx.fpr[1] + ctx.fpr[3];
    ctx.set_gpr(3, 16128u << 16u);
    ctx.fpr[4] = std::bit_cast<float>(ctx.gpr[3]);
    { const float fs = ctx.fpr[4]; const float ft = ctx.fpr[1]; if ((std::isinf(fs) && ft == 0.0f) || (std::isinf(ft) && fs == 0.0f)) ctx.set_fpr_bits(3, 0x7FC00000u); else ctx.fpr[3] = fs * ft; }
    { const float fs = ctx.fpr[7]; const float ft = ctx.fpr[10]; if ((std::isinf(fs) && ft == 0.0f) || (std::isinf(ft) && fs == 0.0f)) ctx.set_fpr_bits(1, 0x7FC00000u); else ctx.fpr[1] = fs * ft; }
    ctx.fpr[1] = ctx.fpr[2] + ctx.fpr[1];
    { const float fs = ctx.fpr[4]; const float ft = ctx.fpr[1]; if ((std::isinf(fs) && ft == 0.0f) || (std::isinf(ft) && fs == 0.0f)) ctx.set_fpr_bits(1, 0x7FC00000u); else ctx.fpr[1] = fs * ft; }
    ctx.fpr[1] = ctx.fpr[3] + ctx.fpr[1];
    rt.memory().aot_store32(ctx.gpr[4] + static_cast<std::uint32_t>(8), std::bit_cast<std::uint32_t>(ctx.fpr[1]));
    { const float fs = ctx.fpr[4]; const float ft = ctx.fpr[9]; if ((std::isinf(fs) && ft == 0.0f) || (std::isinf(ft) && fs == 0.0f)) ctx.set_fpr_bits(2, 0x7FC00000u); else ctx.fpr[2] = fs * ft; }
    { const float fs = ctx.fpr[4]; const float ft = ctx.fpr[6]; if ((std::isinf(fs) && ft == 0.0f) || (std::isinf(ft) && fs == 0.0f)) ctx.set_fpr_bits(1, 0x7FC00000u); else ctx.fpr[1] = fs * ft; }
    ctx.fpr[1] = ctx.fpr[2] + ctx.fpr[1];
    rt.memory().aot_store32(ctx.gpr[4] + static_cast<std::uint32_t>(12), std::bit_cast<std::uint32_t>(ctx.fpr[1]));
    { const float fs = ctx.fpr[4]; const float ft = ctx.fpr[8]; if ((std::isinf(fs) && ft == 0.0f) || (std::isinf(ft) && fs == 0.0f)) ctx.set_fpr_bits(2, 0x7FC00000u); else ctx.fpr[2] = fs * ft; }
    { const float fs = ctx.fpr[4]; const float ft = ctx.fpr[5]; if ((std::isinf(fs) && ft == 0.0f) || (std::isinf(ft) && fs == 0.0f)) ctx.set_fpr_bits(1, 0x7FC00000u); else ctx.fpr[1] = fs * ft; }
    ctx.fpr[1] = ctx.fpr[2] + ctx.fpr[1];
    rt.memory().aot_store32(ctx.gpr[4] + static_cast<std::uint32_t>(16), std::bit_cast<std::uint32_t>(ctx.fpr[1]));
    ctx.fpr[2] = std::bit_cast<float>(rt.memory().aot_load32(ctx.gpr[5] + static_cast<std::uint32_t>(20)));
    ctx.fpr[1] = std::bit_cast<float>(rt.memory().aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(20)));
    ctx.fpr[0] = ctx.fpr[0] + ctx.fpr[1];
    ctx.fpr[0] = ctx.fpr[2] + ctx.fpr[0];
    { const float fs = ctx.fpr[4]; const float ft = ctx.fpr[0]; if ((std::isinf(fs) && ft == 0.0f) || (std::isinf(ft) && fs == 0.0f)) ctx.set_fpr_bits(0, 0x7FC00000u); else ctx.fpr[0] = fs * ft; }
    rt.memory().aot_store32(ctx.gpr[4] + static_cast<std::uint32_t>(20), std::bit_cast<std::uint32_t>(ctx.fpr[0]));
    goto L_089FCD84;
L_089FCD84:
    jump_target = ctx.gpr[31];
    // nop
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_089FCD8C:
    ctx.set_gpr(29, ctx.gpr[29] + static_cast<std::uint32_t>(-32));
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(12), ctx.gpr[31]);
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(8), ctx.gpr[17]);
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(4), ctx.gpr[16]);
    ctx.set_gpr(17, ctx.gpr[5] + 0u);
    ctx.set_gpr(16, ctx.gpr[4] + 0u);
    ctx.set_gpr(5, ctx.gpr[17] + static_cast<std::uint32_t>(8));
    ctx.set_gpr(31, 0x089FCDB0u);
    // nop
    goto L_089FF5D0;
L_089FCDB0:
    ctx.fpr[2] = std::bit_cast<float>(rt.memory().aot_load32(ctx.gpr[17] + static_cast<std::uint32_t>(32)));
    ctx.fpr[1] = std::bit_cast<float>(rt.memory().aot_load32(ctx.gpr[17] + static_cast<std::uint32_t>(8)));
    ctx.fpr[0] = std::bit_cast<float>(rt.memory().aot_load32(ctx.gpr[17] + static_cast<std::uint32_t>(20)));
    { const float fs = ctx.fpr[2]; const float ft = ctx.fpr[0]; if ((std::isinf(fs) && ft == 0.0f) || (std::isinf(ft) && fs == 0.0f)) ctx.set_fpr_bits(0, 0x7FC00000u); else ctx.fpr[0] = fs * ft; }
    ctx.fpr[0] = ctx.fpr[1] + ctx.fpr[0];
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(20), std::bit_cast<std::uint32_t>(ctx.fpr[0]));
    ctx.fpr[1] = std::bit_cast<float>(rt.memory().aot_load32(ctx.gpr[17] + static_cast<std::uint32_t>(12)));
    ctx.fpr[0] = std::bit_cast<float>(rt.memory().aot_load32(ctx.gpr[17] + static_cast<std::uint32_t>(24)));
    { const float fs = ctx.fpr[2]; const float ft = ctx.fpr[0]; if ((std::isinf(fs) && ft == 0.0f) || (std::isinf(ft) && fs == 0.0f)) ctx.set_fpr_bits(0, 0x7FC00000u); else ctx.fpr[0] = fs * ft; }
    ctx.fpr[0] = ctx.fpr[1] + ctx.fpr[0];
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(24), std::bit_cast<std::uint32_t>(ctx.fpr[0]));
    ctx.fpr[1] = std::bit_cast<float>(rt.memory().aot_load32(ctx.gpr[17] + static_cast<std::uint32_t>(16)));
    ctx.fpr[0] = std::bit_cast<float>(rt.memory().aot_load32(ctx.gpr[17] + static_cast<std::uint32_t>(28)));
    { const float fs = ctx.fpr[2]; const float ft = ctx.fpr[0]; if ((std::isinf(fs) && ft == 0.0f) || (std::isinf(ft) && fs == 0.0f)) ctx.set_fpr_bits(0, 0x7FC00000u); else ctx.fpr[0] = fs * ft; }
    ctx.fpr[0] = ctx.fpr[1] + ctx.fpr[0];
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(28), std::bit_cast<std::uint32_t>(ctx.fpr[0]));
    ctx.set_gpr(4, ctx.gpr[16] + 0u);
    ctx.set_gpr(5, ctx.gpr[29] + static_cast<std::uint32_t>(20));
    ctx.set_gpr(31, 0x089FCE00u);
    // nop
    goto L_089FF5D0;
L_089FCE00:
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
L_089FCE18:
    ctx.fpr[0] = std::bit_cast<float>(rt.memory().aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(20)));
    ctx.fpr[1] = std::bit_cast<float>(0u);
    ctx.set_fpu_condition((ctx.fpr[0] < ctx.fpr[1]));
    // nop
    { const bool branch_taken = !ctx.fpu_condition();
    // nop
      if (branch_taken) {
          goto L_089FCE54;
      }
      goto L_089FCE30;
    }
L_089FCE30:
    ctx.fpr[0] = std::bit_cast<float>(rt.memory().aot_load32(ctx.gpr[5] + static_cast<std::uint32_t>(0)));
    rt.memory().aot_store32(ctx.gpr[4] + static_cast<std::uint32_t>(8), std::bit_cast<std::uint32_t>(ctx.fpr[0]));
    ctx.fpr[0] = std::bit_cast<float>(rt.memory().aot_load32(ctx.gpr[5] + static_cast<std::uint32_t>(4)));
    rt.memory().aot_store32(ctx.gpr[4] + static_cast<std::uint32_t>(12), std::bit_cast<std::uint32_t>(ctx.fpr[0]));
    ctx.fpr[0] = std::bit_cast<float>(rt.memory().aot_load32(ctx.gpr[5] + static_cast<std::uint32_t>(8)));
    rt.memory().aot_store32(ctx.gpr[4] + static_cast<std::uint32_t>(16), std::bit_cast<std::uint32_t>(ctx.fpr[0]));
    rt.memory().aot_store32(ctx.gpr[4] + static_cast<std::uint32_t>(20), std::bit_cast<std::uint32_t>(ctx.fpr[1]));
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_089FCF14;
      }
      goto L_089FCE54;
    }
L_089FCE54:
    ctx.fpr[0] = std::bit_cast<float>(rt.memory().aot_load32(ctx.gpr[5] + static_cast<std::uint32_t>(4)));
    ctx.fpr[10] = std::bit_cast<float>(rt.memory().aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(12)));
    ctx.fpr[9] = ctx.fpr[10] - ctx.fpr[0];
    ctx.fpr[8] = std::bit_cast<float>(rt.memory().aot_load32(ctx.gpr[5] + static_cast<std::uint32_t>(0)));
    ctx.fpr[7] = std::bit_cast<float>(rt.memory().aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(8)));
    ctx.fpr[4] = ctx.fpr[7] - ctx.fpr[8];
    ctx.fpr[0] = std::bit_cast<float>(rt.memory().aot_load32(ctx.gpr[5] + static_cast<std::uint32_t>(8)));
    ctx.fpr[6] = std::bit_cast<float>(rt.memory().aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(16)));
    ctx.fpr[3] = ctx.fpr[6] - ctx.fpr[0];
    { const float fs = ctx.fpr[4]; const float ft = ctx.fpr[4]; if ((std::isinf(fs) && ft == 0.0f) || (std::isinf(ft) && fs == 0.0f)) ctx.set_fpr_bits(1, 0x7FC00000u); else ctx.fpr[1] = fs * ft; }
    { const float fs = ctx.fpr[9]; const float ft = ctx.fpr[9]; if ((std::isinf(fs) && ft == 0.0f) || (std::isinf(ft) && fs == 0.0f)) ctx.set_fpr_bits(0, 0x7FC00000u); else ctx.fpr[0] = fs * ft; }
    ctx.fpr[1] = ctx.fpr[1] + ctx.fpr[0];
    { const float fs = ctx.fpr[3]; const float ft = ctx.fpr[3]; if ((std::isinf(fs) && ft == 0.0f) || (std::isinf(ft) && fs == 0.0f)) ctx.set_fpr_bits(0, 0x7FC00000u); else ctx.fpr[0] = fs * ft; }
    ctx.fpr[2] = ctx.fpr[0] + ctx.fpr[1];
    ctx.fpr[1] = std::bit_cast<float>(rt.memory().aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(20)));
    { const float fs = ctx.fpr[1]; const float ft = ctx.fpr[1]; if ((std::isinf(fs) && ft == 0.0f) || (std::isinf(ft) && fs == 0.0f)) ctx.set_fpr_bits(0, 0x7FC00000u); else ctx.fpr[0] = fs * ft; }
    ctx.set_fpu_condition((ctx.fpr[2] <= ctx.fpr[0]));
    // nop
    { const bool branch_taken = ctx.fpu_condition();
    // nop
      if (branch_taken) {
          goto L_089FCF14;
      }
      goto L_089FCEA4;
    }
L_089FCEA4:
    ctx.fpr[5] = std::sqrt(ctx.fpr[2]);
    ctx.fpr[0] = ctx.fpr[1] / ctx.fpr[5];
    { const float fs = ctx.fpr[4]; const float ft = ctx.fpr[0]; if ((std::isinf(fs) && ft == 0.0f) || (std::isinf(ft) && fs == 0.0f)) ctx.set_fpr_bits(2, 0x7FC00000u); else ctx.fpr[2] = fs * ft; }
    { const float fs = ctx.fpr[9]; const float ft = ctx.fpr[0]; if ((std::isinf(fs) && ft == 0.0f) || (std::isinf(ft) && fs == 0.0f)) ctx.set_fpr_bits(1, 0x7FC00000u); else ctx.fpr[1] = fs * ft; }
    { const float fs = ctx.fpr[3]; const float ft = ctx.fpr[0]; if ((std::isinf(fs) && ft == 0.0f) || (std::isinf(ft) && fs == 0.0f)) ctx.set_fpr_bits(0, 0x7FC00000u); else ctx.fpr[0] = fs * ft; }
    ctx.fpr[4] = ctx.fpr[10] + ctx.fpr[1];
    ctx.fpr[3] = ctx.fpr[6] + ctx.fpr[0];
    ctx.fpr[0] = ctx.fpr[7] + ctx.fpr[2];
    ctx.set_gpr(3, 16128u << 16u);
    ctx.fpr[2] = std::bit_cast<float>(ctx.gpr[3]);
    { const float fs = ctx.fpr[2]; const float ft = ctx.fpr[0]; if ((std::isinf(fs) && ft == 0.0f) || (std::isinf(ft) && fs == 0.0f)) ctx.set_fpr_bits(1, 0x7FC00000u); else ctx.fpr[1] = fs * ft; }
    { const float fs = ctx.fpr[2]; const float ft = ctx.fpr[8]; if ((std::isinf(fs) && ft == 0.0f) || (std::isinf(ft) && fs == 0.0f)) ctx.set_fpr_bits(0, 0x7FC00000u); else ctx.fpr[0] = fs * ft; }
    ctx.fpr[0] = ctx.fpr[1] + ctx.fpr[0];
    rt.memory().aot_store32(ctx.gpr[4] + static_cast<std::uint32_t>(8), std::bit_cast<std::uint32_t>(ctx.fpr[0]));
    ctx.fpr[0] = std::bit_cast<float>(rt.memory().aot_load32(ctx.gpr[5] + static_cast<std::uint32_t>(4)));
    { const float fs = ctx.fpr[2]; const float ft = ctx.fpr[0]; if ((std::isinf(fs) && ft == 0.0f) || (std::isinf(ft) && fs == 0.0f)) ctx.set_fpr_bits(1, 0x7FC00000u); else ctx.fpr[1] = fs * ft; }
    { const float fs = ctx.fpr[2]; const float ft = ctx.fpr[4]; if ((std::isinf(fs) && ft == 0.0f) || (std::isinf(ft) && fs == 0.0f)) ctx.set_fpr_bits(0, 0x7FC00000u); else ctx.fpr[0] = fs * ft; }
    ctx.fpr[0] = ctx.fpr[0] + ctx.fpr[1];
    rt.memory().aot_store32(ctx.gpr[4] + static_cast<std::uint32_t>(12), std::bit_cast<std::uint32_t>(ctx.fpr[0]));
    ctx.fpr[0] = std::bit_cast<float>(rt.memory().aot_load32(ctx.gpr[5] + static_cast<std::uint32_t>(8)));
    { const float fs = ctx.fpr[2]; const float ft = ctx.fpr[0]; if ((std::isinf(fs) && ft == 0.0f) || (std::isinf(ft) && fs == 0.0f)) ctx.set_fpr_bits(1, 0x7FC00000u); else ctx.fpr[1] = fs * ft; }
    { const float fs = ctx.fpr[2]; const float ft = ctx.fpr[3]; if ((std::isinf(fs) && ft == 0.0f) || (std::isinf(ft) && fs == 0.0f)) ctx.set_fpr_bits(0, 0x7FC00000u); else ctx.fpr[0] = fs * ft; }
    ctx.fpr[0] = ctx.fpr[0] + ctx.fpr[1];
    rt.memory().aot_store32(ctx.gpr[4] + static_cast<std::uint32_t>(16), std::bit_cast<std::uint32_t>(ctx.fpr[0]));
    ctx.fpr[0] = std::bit_cast<float>(rt.memory().aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(20)));
    ctx.fpr[0] = ctx.fpr[5] + ctx.fpr[0];
    { const float fs = ctx.fpr[2]; const float ft = ctx.fpr[0]; if ((std::isinf(fs) && ft == 0.0f) || (std::isinf(ft) && fs == 0.0f)) ctx.set_fpr_bits(0, 0x7FC00000u); else ctx.fpr[0] = fs * ft; }
    rt.memory().aot_store32(ctx.gpr[4] + static_cast<std::uint32_t>(20), std::bit_cast<std::uint32_t>(ctx.fpr[0]));
    goto L_089FCF14;
L_089FCF14:
    jump_target = ctx.gpr[31];
    // nop
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_089FCF1C:
    ctx.set_gpr(29, ctx.gpr[29] + static_cast<std::uint32_t>(-16));
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(12), ctx.gpr[31]);
    ctx.set_gpr(31, 0x089FCF2Cu);
    // nop
    goto L_089FC128;
L_089FCF2C:
    ctx.set_gpr(31, rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(12)));
    ctx.set_gpr(29, ctx.gpr[29] + static_cast<std::uint32_t>(16));
    jump_target = ctx.gpr[31];
    // nop
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_089FCF3C:
    ctx.set_gpr(3, 49024u << 16u);
    rt.memory().aot_store32(ctx.gpr[4] + static_cast<std::uint32_t>(20), ctx.gpr[3]);
    jump_target = ctx.gpr[31];
    // nop
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_089FCF4C:
    ctx.fpr[1] = std::bit_cast<float>(rt.memory().aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(20)));
    ctx.fpr[0] = std::bit_cast<float>(0u);
    ctx.set_fpu_condition((ctx.fpr[1] < ctx.fpr[0]));
    ctx.set_gpr(2, 0u + static_cast<std::uint32_t>(1));
    { const bool branch_taken = ctx.fpu_condition();
    // nop
      if (branch_taken) {
          goto L_089FCF68;
      }
      goto L_089FCF64;
    }
L_089FCF64:
    ctx.set_gpr(2, 0u + 0u);
    goto L_089FCF68;
L_089FCF68:
    jump_target = ctx.gpr[31];
    // nop
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_089FCF70:
    ctx.fpr[0] = std::bit_cast<float>(rt.memory().aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(8)));
    rt.memory().aot_store32(ctx.gpr[5] + static_cast<std::uint32_t>(0), std::bit_cast<std::uint32_t>(ctx.fpr[0]));
    ctx.fpr[0] = std::bit_cast<float>(rt.memory().aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(12)));
    rt.memory().aot_store32(ctx.gpr[5] + static_cast<std::uint32_t>(4), std::bit_cast<std::uint32_t>(ctx.fpr[0]));
    ctx.fpr[0] = std::bit_cast<float>(rt.memory().aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(16)));
    rt.memory().aot_store32(ctx.gpr[5] + static_cast<std::uint32_t>(8), std::bit_cast<std::uint32_t>(ctx.fpr[0]));
    jump_target = ctx.gpr[31];
    // nop
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_089FCF90:
    ctx.set_gpr(29, ctx.gpr[29] + static_cast<std::uint32_t>(-16));
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(12), ctx.gpr[31]);
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(8), ctx.gpr[18]);
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(4), ctx.gpr[17]);
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(0), ctx.gpr[16]);
    ctx.set_gpr(18, ctx.gpr[4] + 0u);
    ctx.set_gpr(17, ctx.gpr[5] + 0u);
    ctx.set_gpr(16, ctx.gpr[6] + 0u);
    ctx.set_gpr(31, 0x089FCFB8u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0124_entry, 124u, 17u, 0x089F411Cu>(ctx, &aot_mem) && ctx.pc == 0x089FCFB8u) goto L_089FCFB8;
    return;
L_089FCFB8:
    ctx.set_gpr(3, rt.memory().aot_load32(ctx.gpr[18] + static_cast<std::uint32_t>(48)));
    { const std::int64_t product = static_cast<std::int64_t>(static_cast<std::int32_t>(ctx.gpr[16])) * static_cast<std::int64_t>(static_cast<std::int32_t>(ctx.gpr[3])); ctx.lo = static_cast<std::uint32_t>(product); ctx.hi = static_cast<std::uint32_t>(static_cast<std::uint64_t>(product) >> 32u); }
    ctx.set_gpr(6, ctx.lo);
    ctx.set_gpr(4, ctx.gpr[2] + 0u);
    ctx.set_gpr(5, ctx.gpr[17] + 0u);
    ctx.set_gpr(25, rt.memory().aot_load32(ctx.gpr[2] + static_cast<std::uint32_t>(0)));
    ctx.set_gpr(25, rt.memory().aot_load32(ctx.gpr[25] + static_cast<std::uint32_t>(220)));
    jump_target = ctx.gpr[25];
    ctx.set_gpr(31, 0x089FCFDCu);
    // nop
    ctx.pc = jump_target;
    if (rt.invoke_chained_call(ctx, &aot_mem) && ctx.pc == 0x089FCFDCu) goto L_089FCFDC;
    return;
L_089FCFDC:
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
L_089FCFF8:
    ctx.set_gpr(2, rt.memory().aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(48)));
    ctx.set_gpr(2, ctx.gpr[2] << 3u);
    ctx.set_gpr(2, ctx.gpr[2] & 65535u);
    jump_target = ctx.gpr[31];
    // nop
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_089FD00C:
    ctx.set_gpr(29, ctx.gpr[29] + static_cast<std::uint32_t>(-16));
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(12), ctx.gpr[31]);
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(8), ctx.gpr[18]);
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(4), ctx.gpr[17]);
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(0), ctx.gpr[16]);
    ctx.set_gpr(18, ctx.gpr[4] + 0u);
    ctx.set_gpr(17, ctx.gpr[5] + 0u);
    ctx.set_gpr(16, ctx.gpr[6] + 0u);
    ctx.set_gpr(31, 0x089FD034u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0053_entry, 53u, 328u, 0x088D9B14u>(ctx, &aot_mem) && ctx.pc == 0x089FD034u) goto L_089FD034;
    return;
L_089FD034:
    ctx.set_gpr(3, rt.memory().aot_load16(ctx.gpr[18] + static_cast<std::uint32_t>(20)));
    ctx.set_gpr(3, ctx.gpr[3] >> 2u);
    { const std::int64_t product = static_cast<std::int64_t>(static_cast<std::int32_t>(ctx.gpr[16])) * static_cast<std::int64_t>(static_cast<std::int32_t>(ctx.gpr[3])); ctx.lo = static_cast<std::uint32_t>(product); ctx.hi = static_cast<std::uint32_t>(static_cast<std::uint64_t>(product) >> 32u); }
    ctx.set_gpr(6, ctx.lo);
    ctx.set_gpr(4, ctx.gpr[2] + 0u);
    ctx.set_gpr(5, ctx.gpr[17] + 0u);
    ctx.set_gpr(25, rt.memory().aot_load32(ctx.gpr[2] + static_cast<std::uint32_t>(0)));
    ctx.set_gpr(25, rt.memory().aot_load32(ctx.gpr[25] + static_cast<std::uint32_t>(220)));
    jump_target = ctx.gpr[25];
    ctx.set_gpr(31, 0x089FD05Cu);
    // nop
    ctx.pc = jump_target;
    if (rt.invoke_chained_call(ctx, &aot_mem) && ctx.pc == 0x089FD05Cu) goto L_089FD05C;
    return;
L_089FD05C:
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
L_089FD078:
    ctx.set_gpr(29, ctx.gpr[29] + static_cast<std::uint32_t>(-16));
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(12), ctx.gpr[31]);
    ctx.set_gpr(4, ctx.gpr[6] + 0u);
    ctx.set_gpr(6, 0u + static_cast<std::uint32_t>(2));
    ctx.set_gpr(7, 0u + static_cast<std::uint32_t>(4));
    ctx.set_gpr(8, 0u + static_cast<std::uint32_t>(1));
    ctx.set_gpr(31, 0x089FD098u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0125_entry, 125u, 442u, 0x089FA268u>(ctx, &aot_mem) && ctx.pc == 0x089FD098u) goto L_089FD098;
    return;
L_089FD098:
    ctx.set_gpr(31, rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(12)));
    ctx.set_gpr(29, ctx.gpr[29] + static_cast<std::uint32_t>(16));
    jump_target = ctx.gpr[31];
    // nop
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_089FD0A8:
    ctx.set_gpr(29, ctx.gpr[29] + static_cast<std::uint32_t>(-1056));
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(28), ctx.gpr[31]);
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(24), ctx.gpr[19]);
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(20), ctx.gpr[18]);
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(16), ctx.gpr[17]);
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(12), ctx.gpr[16]);
    ctx.set_gpr(16, ctx.gpr[4] + 0u);
    ctx.set_gpr(19, ctx.gpr[6] + 0u);
    ctx.fpr[12] = std::bit_cast<float>(rt.memory().aot_load32(ctx.gpr[6] + static_cast<std::uint32_t>(0)));
    ctx.set_gpr(31, 0x089FD0D4u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0006_entry, 6u, 675u, 0x0881EBD0u>(ctx, &aot_mem) && ctx.pc == 0x089FD0D4u) goto L_089FD0D4;
    return;
L_089FD0D4:
    ctx.set_gpr(18, ctx.gpr[2] + 0u);
    ctx.set_gpr(17, ctx.gpr[3] + 0u);
    ctx.fpr[12] = std::bit_cast<float>(rt.memory().aot_load32(ctx.gpr[19] + static_cast<std::uint32_t>(4)));
    ctx.set_gpr(31, 0x089FD0E8u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0006_entry, 6u, 675u, 0x0881EBD0u>(ctx, &aot_mem) && ctx.pc == 0x089FD0E8u) goto L_089FD0E8;
    return;
L_089FD0E8:
    ctx.set_gpr(4, ctx.gpr[29] + static_cast<std::uint32_t>(32));
    ctx.set_gpr(5, 2229u << 16u);
    ctx.set_gpr(5, ctx.gpr[5] + static_cast<std::uint32_t>(-10480));
    ctx.set_gpr(6, ctx.gpr[18] + 0u);
    ctx.set_gpr(7, ctx.gpr[17] + 0u);
    ctx.set_gpr(8, ctx.gpr[2] + 0u);
    ctx.set_gpr(9, ctx.gpr[3] + 0u);
    ctx.set_gpr(31, 0x089FD10Cu);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0004_entry, 4u, 423u, 0x08815FF4u>(ctx, &aot_mem) && ctx.pc == 0x089FD10Cu) goto L_089FD10C;
    return;
L_089FD10C:
    ctx.set_gpr(3, ctx.gpr[29] + static_cast<std::uint32_t>(32));
    { const bool branch_taken = ctx.gpr[3] != 0u;
    // nop
      if (branch_taken) {
          goto L_089FD124;
      }
      goto L_089FD118;
    }
L_089FD118:
    ctx.set_gpr(3, 0u + 0u);
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_089FD174;
      }
      goto L_089FD124;
    }
L_089FD124:
    ctx.set_gpr(2, 2245u << 16u);
    ctx.set_gpr(2, rt.memory().aot_load32(ctx.gpr[2] + static_cast<std::uint32_t>(30776)));
    { const bool branch_taken = ctx.gpr[2] != 0u;
    // nop
      if (branch_taken) {
          goto L_089FD15C;
      }
      goto L_089FD134;
    }
L_089FD134:
    ctx.set_gpr(4, 0u + static_cast<std::uint32_t>(16));
    ctx.set_gpr(31, 0x089FD140u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0072_entry, 72u, 788u, 0x089277A0u>(ctx, &aot_mem) && ctx.pc == 0x089FD140u) goto L_089FD140;
    return;
L_089FD140:
    { const bool branch_taken = ctx.gpr[2] == 0u;
    // nop
      if (branch_taken) {
          goto L_089FD154;
      }
      goto L_089FD148;
    }
L_089FD148:
    ctx.set_gpr(4, ctx.gpr[2] + 0u);
    ctx.set_gpr(31, 0x089FD154u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0072_entry, 72u, 762u, 0x089275E8u>(ctx, &aot_mem) && ctx.pc == 0x089FD154u) goto L_089FD154;
    return;
L_089FD154:
    ctx.set_gpr(3, 2245u << 16u);
    rt.memory().aot_store32(ctx.gpr[3] + static_cast<std::uint32_t>(30776), ctx.gpr[2]);
    goto L_089FD15C;
L_089FD15C:
    ctx.set_gpr(2, 2245u << 16u);
    ctx.set_gpr(4, rt.memory().aot_load32(ctx.gpr[2] + static_cast<std::uint32_t>(30776)));
    ctx.set_gpr(5, ctx.gpr[29] + static_cast<std::uint32_t>(32));
    ctx.set_gpr(31, 0x089FD170u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0072_entry, 72u, 784u, 0x08927768u>(ctx, &aot_mem) && ctx.pc == 0x089FD170u) goto L_089FD170;
    return;
L_089FD170:
    ctx.set_gpr(3, ctx.gpr[2] + 0u);
    goto L_089FD174;
L_089FD174:
    rt.memory().aot_store32(ctx.gpr[16] + static_cast<std::uint32_t>(0), ctx.gpr[3]);
    ctx.set_gpr(31, rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(28)));
    ctx.set_gpr(19, rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(24)));
    ctx.set_gpr(18, rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(20)));
    ctx.set_gpr(17, rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(16)));
    ctx.set_gpr(16, rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(12)));
    ctx.set_gpr(29, ctx.gpr[29] + static_cast<std::uint32_t>(1056));
    jump_target = ctx.gpr[31];
    // nop
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_089FD198:
    ctx.set_gpr(2, 0u + static_cast<std::uint32_t>(8));
    jump_target = ctx.gpr[31];
    // nop
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_089FD1A4:
    ctx.set_gpr(29, ctx.gpr[29] + static_cast<std::uint32_t>(-16));
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(12), ctx.gpr[31]);
    ctx.set_gpr(25, rt.memory().aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(0)));
    ctx.set_gpr(25, rt.memory().aot_load32(ctx.gpr[25] + static_cast<std::uint32_t>(144)));
    jump_target = ctx.gpr[25];
    ctx.set_gpr(31, 0x089FD1BCu);
    // nop
    ctx.pc = jump_target;
    if (rt.invoke_chained_call(ctx, &aot_mem) && ctx.pc == 0x089FD1BCu) goto L_089FD1BC;
    return;
L_089FD1BC:
    ctx.set_gpr(31, rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(12)));
    ctx.set_gpr(29, ctx.gpr[29] + static_cast<std::uint32_t>(16));
    jump_target = ctx.gpr[31];
    // nop
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_089FD1CC:
    ctx.set_gpr(2, 0u + static_cast<std::uint32_t>(4));
    jump_target = ctx.gpr[31];
    // nop
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_089FD1D8:
    ctx.set_gpr(29, ctx.gpr[29] + static_cast<std::uint32_t>(-16));
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(12), ctx.gpr[31]);
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(8), ctx.gpr[18]);
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(4), ctx.gpr[17]);
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(0), ctx.gpr[16]);
    ctx.set_gpr(18, ctx.gpr[4] + 0u);
    ctx.set_gpr(17, ctx.gpr[5] + 0u);
    ctx.set_gpr(16, ctx.gpr[6] + 0u);
    ctx.set_gpr(31, 0x089FD200u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0053_entry, 53u, 328u, 0x088D9B14u>(ctx, &aot_mem) && ctx.pc == 0x089FD200u) goto L_089FD200;
    return;
L_089FD200:
    ctx.set_gpr(3, rt.memory().aot_load16(ctx.gpr[18] + static_cast<std::uint32_t>(20)));
    ctx.set_gpr(3, ctx.gpr[3] >> 2u);
    { const std::int64_t product = static_cast<std::int64_t>(static_cast<std::int32_t>(ctx.gpr[16])) * static_cast<std::int64_t>(static_cast<std::int32_t>(ctx.gpr[3])); ctx.lo = static_cast<std::uint32_t>(product); ctx.hi = static_cast<std::uint32_t>(static_cast<std::uint64_t>(product) >> 32u); }
    ctx.set_gpr(6, ctx.lo);
    ctx.set_gpr(4, ctx.gpr[2] + 0u);
    ctx.set_gpr(5, ctx.gpr[17] + 0u);
    ctx.set_gpr(25, rt.memory().aot_load32(ctx.gpr[2] + static_cast<std::uint32_t>(0)));
    ctx.set_gpr(25, rt.memory().aot_load32(ctx.gpr[25] + static_cast<std::uint32_t>(220)));
    jump_target = ctx.gpr[25];
    ctx.set_gpr(31, 0x089FD228u);
    // nop
    ctx.pc = jump_target;
    if (rt.invoke_chained_call(ctx, &aot_mem) && ctx.pc == 0x089FD228u) goto L_089FD228;
    return;
L_089FD228:
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
L_089FD244:
    ctx.set_gpr(29, ctx.gpr[29] + static_cast<std::uint32_t>(-16));
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(12), ctx.gpr[31]);
    ctx.set_gpr(4, ctx.gpr[6] + 0u);
    ctx.set_gpr(6, 0u + static_cast<std::uint32_t>(3));
    ctx.set_gpr(7, 0u + static_cast<std::uint32_t>(4));
    ctx.set_gpr(8, 0u + static_cast<std::uint32_t>(1));
    ctx.set_gpr(31, 0x089FD264u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0125_entry, 125u, 442u, 0x089FA268u>(ctx, &aot_mem) && ctx.pc == 0x089FD264u) goto L_089FD264;
    return;
L_089FD264:
    ctx.set_gpr(31, rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(12)));
    ctx.set_gpr(29, ctx.gpr[29] + static_cast<std::uint32_t>(16));
    jump_target = ctx.gpr[31];
    // nop
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_089FD274:
    ctx.set_gpr(29, ctx.gpr[29] + static_cast<std::uint32_t>(-1056));
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(28), ctx.gpr[31]);
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(24), ctx.gpr[21]);
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(20), ctx.gpr[20]);
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(16), ctx.gpr[19]);
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(12), ctx.gpr[18]);
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(8), ctx.gpr[17]);
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(4), ctx.gpr[16]);
    ctx.set_gpr(16, ctx.gpr[4] + 0u);
    ctx.set_gpr(21, ctx.gpr[6] + 0u);
    ctx.fpr[12] = std::bit_cast<float>(rt.memory().aot_load32(ctx.gpr[6] + static_cast<std::uint32_t>(0)));
    ctx.set_gpr(31, 0x089FD2A8u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0006_entry, 6u, 675u, 0x0881EBD0u>(ctx, &aot_mem) && ctx.pc == 0x089FD2A8u) goto L_089FD2A8;
    return;
L_089FD2A8:
    ctx.set_gpr(20, ctx.gpr[2] + 0u);
    ctx.set_gpr(19, ctx.gpr[3] + 0u);
    ctx.fpr[12] = std::bit_cast<float>(rt.memory().aot_load32(ctx.gpr[21] + static_cast<std::uint32_t>(4)));
    ctx.set_gpr(31, 0x089FD2BCu);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0006_entry, 6u, 675u, 0x0881EBD0u>(ctx, &aot_mem) && ctx.pc == 0x089FD2BCu) goto L_089FD2BC;
    return;
L_089FD2BC:
    ctx.set_gpr(18, ctx.gpr[2] + 0u);
    ctx.set_gpr(17, ctx.gpr[3] + 0u);
    ctx.fpr[12] = std::bit_cast<float>(rt.memory().aot_load32(ctx.gpr[21] + static_cast<std::uint32_t>(8)));
    ctx.set_gpr(31, 0x089FD2D0u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0006_entry, 6u, 675u, 0x0881EBD0u>(ctx, &aot_mem) && ctx.pc == 0x089FD2D0u) goto L_089FD2D0;
    return;
L_089FD2D0:
    ctx.set_gpr(4, ctx.gpr[29] + static_cast<std::uint32_t>(32));
    ctx.set_gpr(5, 2229u << 16u);
    ctx.set_gpr(5, ctx.gpr[5] + static_cast<std::uint32_t>(-10472));
    ctx.set_gpr(6, ctx.gpr[20] + 0u);
    ctx.set_gpr(7, ctx.gpr[19] + 0u);
    ctx.set_gpr(8, ctx.gpr[18] + 0u);
    ctx.set_gpr(9, ctx.gpr[17] + 0u);
    ctx.set_gpr(10, ctx.gpr[2] + 0u);
    ctx.set_gpr(11, ctx.gpr[3] + 0u);
    ctx.set_gpr(31, 0x089FD2FCu);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0004_entry, 4u, 423u, 0x08815FF4u>(ctx, &aot_mem) && ctx.pc == 0x089FD2FCu) goto L_089FD2FC;
    return;
L_089FD2FC:
    ctx.set_gpr(3, ctx.gpr[29] + static_cast<std::uint32_t>(32));
    { const bool branch_taken = ctx.gpr[3] != 0u;
    // nop
      if (branch_taken) {
          goto L_089FD314;
      }
      goto L_089FD308;
    }
L_089FD308:
    ctx.set_gpr(3, 0u + 0u);
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_089FD364;
      }
      goto L_089FD314;
    }
L_089FD314:
    ctx.set_gpr(2, 2245u << 16u);
    ctx.set_gpr(2, rt.memory().aot_load32(ctx.gpr[2] + static_cast<std::uint32_t>(30776)));
    { const bool branch_taken = ctx.gpr[2] != 0u;
    // nop
      if (branch_taken) {
          goto L_089FD34C;
      }
      goto L_089FD324;
    }
L_089FD324:
    ctx.set_gpr(4, 0u + static_cast<std::uint32_t>(16));
    ctx.set_gpr(31, 0x089FD330u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0072_entry, 72u, 788u, 0x089277A0u>(ctx, &aot_mem) && ctx.pc == 0x089FD330u) goto L_089FD330;
    return;
L_089FD330:
    { const bool branch_taken = ctx.gpr[2] == 0u;
    // nop
      if (branch_taken) {
          goto L_089FD344;
      }
      goto L_089FD338;
    }
L_089FD338:
    ctx.set_gpr(4, ctx.gpr[2] + 0u);
    ctx.set_gpr(31, 0x089FD344u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0072_entry, 72u, 762u, 0x089275E8u>(ctx, &aot_mem) && ctx.pc == 0x089FD344u) goto L_089FD344;
    return;
L_089FD344:
    ctx.set_gpr(3, 2245u << 16u);
    rt.memory().aot_store32(ctx.gpr[3] + static_cast<std::uint32_t>(30776), ctx.gpr[2]);
    goto L_089FD34C;
L_089FD34C:
    ctx.set_gpr(2, 2245u << 16u);
    ctx.set_gpr(4, rt.memory().aot_load32(ctx.gpr[2] + static_cast<std::uint32_t>(30776)));
    ctx.set_gpr(5, ctx.gpr[29] + static_cast<std::uint32_t>(32));
    ctx.set_gpr(31, 0x089FD360u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0072_entry, 72u, 784u, 0x08927768u>(ctx, &aot_mem) && ctx.pc == 0x089FD360u) goto L_089FD360;
    return;
L_089FD360:
    ctx.set_gpr(3, ctx.gpr[2] + 0u);
    goto L_089FD364;
L_089FD364:
    rt.memory().aot_store32(ctx.gpr[16] + static_cast<std::uint32_t>(0), ctx.gpr[3]);
    ctx.set_gpr(31, rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(28)));
    ctx.set_gpr(21, rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(24)));
    ctx.set_gpr(20, rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(20)));
    ctx.set_gpr(19, rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(16)));
    ctx.set_gpr(18, rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(12)));
    ctx.set_gpr(17, rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(8)));
    ctx.set_gpr(16, rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(4)));
    ctx.set_gpr(29, ctx.gpr[29] + static_cast<std::uint32_t>(1056));
    jump_target = ctx.gpr[31];
    // nop
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_089FD390:
    ctx.set_gpr(2, 0u + static_cast<std::uint32_t>(12));
    jump_target = ctx.gpr[31];
    // nop
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_089FD39C:
    ctx.set_gpr(29, ctx.gpr[29] + static_cast<std::uint32_t>(-16));
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(12), ctx.gpr[31]);
    ctx.set_gpr(25, rt.memory().aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(0)));
    ctx.set_gpr(25, rt.memory().aot_load32(ctx.gpr[25] + static_cast<std::uint32_t>(144)));
    jump_target = ctx.gpr[25];
    ctx.set_gpr(31, 0x089FD3B4u);
    // nop
    ctx.pc = jump_target;
    if (rt.invoke_chained_call(ctx, &aot_mem) && ctx.pc == 0x089FD3B4u) goto L_089FD3B4;
    return;
L_089FD3B4:
    ctx.set_gpr(31, rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(12)));
    ctx.set_gpr(29, ctx.gpr[29] + static_cast<std::uint32_t>(16));
    jump_target = ctx.gpr[31];
    // nop
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_089FD3C4:
    ctx.set_gpr(2, 0u + static_cast<std::uint32_t>(4));
    jump_target = ctx.gpr[31];
    // nop
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_089FD3D0:
    ctx.set_gpr(29, ctx.gpr[29] + static_cast<std::uint32_t>(-16));
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(12), ctx.gpr[31]);
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(8), ctx.gpr[18]);
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(4), ctx.gpr[17]);
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(0), ctx.gpr[16]);
    ctx.set_gpr(18, ctx.gpr[4] + 0u);
    ctx.set_gpr(17, ctx.gpr[5] + 0u);
    ctx.set_gpr(16, ctx.gpr[6] + 0u);
    ctx.set_gpr(31, 0x089FD3F8u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0054_entry, 54u, 416u, 0x088DE2D0u>(ctx, &aot_mem) && ctx.pc == 0x089FD3F8u) goto L_089FD3F8;
    return;
L_089FD3F8:
    ctx.set_gpr(3, rt.memory().aot_load16(ctx.gpr[18] + static_cast<std::uint32_t>(20)));
    { const std::int64_t product = static_cast<std::int64_t>(static_cast<std::int32_t>(ctx.gpr[16])) * static_cast<std::int64_t>(static_cast<std::int32_t>(ctx.gpr[3])); ctx.lo = static_cast<std::uint32_t>(product); ctx.hi = static_cast<std::uint32_t>(static_cast<std::uint64_t>(product) >> 32u); }
    ctx.set_gpr(6, ctx.lo);
    ctx.set_gpr(4, ctx.gpr[2] + 0u);
    ctx.set_gpr(5, ctx.gpr[17] + 0u);
    ctx.set_gpr(25, rt.memory().aot_load32(ctx.gpr[2] + static_cast<std::uint32_t>(0)));
    ctx.set_gpr(25, rt.memory().aot_load32(ctx.gpr[25] + static_cast<std::uint32_t>(220)));
    jump_target = ctx.gpr[25];
    ctx.set_gpr(31, 0x089FD41Cu);
    // nop
    ctx.pc = jump_target;
    if (rt.invoke_chained_call(ctx, &aot_mem) && ctx.pc == 0x089FD41Cu) goto L_089FD41C;
    return;
L_089FD41C:
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
L_089FD438:
    ctx.set_gpr(29, ctx.gpr[29] + static_cast<std::uint32_t>(-16));
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(12), ctx.gpr[31]);
    ctx.set_gpr(4, ctx.gpr[6] + 0u);
    ctx.set_gpr(6, 0u + static_cast<std::uint32_t>(3));
    ctx.set_gpr(7, 0u + static_cast<std::uint32_t>(1));
    ctx.set_gpr(8, 0u + 0u);
    ctx.set_gpr(31, 0x089FD458u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0125_entry, 125u, 442u, 0x089FA268u>(ctx, &aot_mem) && ctx.pc == 0x089FD458u) goto L_089FD458;
    return;
L_089FD458:
    ctx.set_gpr(31, rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(12)));
    ctx.set_gpr(29, ctx.gpr[29] + static_cast<std::uint32_t>(16));
    jump_target = ctx.gpr[31];
    // nop
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_089FD468:
    ctx.set_gpr(29, ctx.gpr[29] + static_cast<std::uint32_t>(-1040));
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(12), ctx.gpr[31]);
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(8), ctx.gpr[16]);
    ctx.set_gpr(16, ctx.gpr[4] + 0u);
    ctx.set_gpr(2, rt.memory().aot_load8(ctx.gpr[6] + static_cast<std::uint32_t>(0)));
    ctx.set_gpr(7, rt.memory().aot_load8(ctx.gpr[6] + static_cast<std::uint32_t>(1)));
    ctx.set_gpr(8, rt.memory().aot_load8(ctx.gpr[6] + static_cast<std::uint32_t>(2)));
    ctx.set_gpr(4, ctx.gpr[29] + static_cast<std::uint32_t>(16));
    ctx.set_gpr(5, 2229u << 16u);
    ctx.set_gpr(5, ctx.gpr[5] + static_cast<std::uint32_t>(-10460));
    ctx.set_gpr(6, ctx.gpr[2] + 0u);
    ctx.set_gpr(31, 0x089FD49Cu);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0004_entry, 4u, 423u, 0x08815FF4u>(ctx, &aot_mem) && ctx.pc == 0x089FD49Cu) goto L_089FD49C;
    return;
L_089FD49C:
    ctx.set_gpr(3, ctx.gpr[29] + static_cast<std::uint32_t>(16));
    { const bool branch_taken = ctx.gpr[3] != 0u;
    // nop
      if (branch_taken) {
          goto L_089FD4B4;
      }
      goto L_089FD4A8;
    }
L_089FD4A8:
    ctx.set_gpr(3, 0u + 0u);
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_089FD504;
      }
      goto L_089FD4B4;
    }
L_089FD4B4:
    ctx.set_gpr(2, 2245u << 16u);
    ctx.set_gpr(2, rt.memory().aot_load32(ctx.gpr[2] + static_cast<std::uint32_t>(30776)));
    { const bool branch_taken = ctx.gpr[2] != 0u;
    // nop
      if (branch_taken) {
          goto L_089FD4EC;
      }
      goto L_089FD4C4;
    }
L_089FD4C4:
    ctx.set_gpr(4, 0u + static_cast<std::uint32_t>(16));
    ctx.set_gpr(31, 0x089FD4D0u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0072_entry, 72u, 788u, 0x089277A0u>(ctx, &aot_mem) && ctx.pc == 0x089FD4D0u) goto L_089FD4D0;
    return;
L_089FD4D0:
    { const bool branch_taken = ctx.gpr[2] == 0u;
    // nop
      if (branch_taken) {
          goto L_089FD4E4;
      }
      goto L_089FD4D8;
    }
L_089FD4D8:
    ctx.set_gpr(4, ctx.gpr[2] + 0u);
    ctx.set_gpr(31, 0x089FD4E4u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0072_entry, 72u, 762u, 0x089275E8u>(ctx, &aot_mem) && ctx.pc == 0x089FD4E4u) goto L_089FD4E4;
    return;
L_089FD4E4:
    ctx.set_gpr(3, 2245u << 16u);
    rt.memory().aot_store32(ctx.gpr[3] + static_cast<std::uint32_t>(30776), ctx.gpr[2]);
    goto L_089FD4EC;
L_089FD4EC:
    ctx.set_gpr(2, 2245u << 16u);
    ctx.set_gpr(4, rt.memory().aot_load32(ctx.gpr[2] + static_cast<std::uint32_t>(30776)));
    ctx.set_gpr(5, ctx.gpr[29] + static_cast<std::uint32_t>(16));
    ctx.set_gpr(31, 0x089FD500u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0072_entry, 72u, 784u, 0x08927768u>(ctx, &aot_mem) && ctx.pc == 0x089FD500u) goto L_089FD500;
    return;
L_089FD500:
    ctx.set_gpr(3, ctx.gpr[2] + 0u);
    goto L_089FD504;
L_089FD504:
    rt.memory().aot_store32(ctx.gpr[16] + static_cast<std::uint32_t>(0), ctx.gpr[3]);
    ctx.set_gpr(31, rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(12)));
    ctx.set_gpr(16, rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(8)));
    ctx.set_gpr(29, ctx.gpr[29] + static_cast<std::uint32_t>(1040));
    jump_target = ctx.gpr[31];
    // nop
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_089FD51C:
    ctx.set_gpr(2, 0u + static_cast<std::uint32_t>(3));
    jump_target = ctx.gpr[31];
    // nop
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_089FD528:
    ctx.set_gpr(2, 0u + static_cast<std::uint32_t>(1));
    jump_target = ctx.gpr[31];
    // nop
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_089FD534:
    ctx.set_gpr(29, ctx.gpr[29] + static_cast<std::uint32_t>(-16));
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(12), ctx.gpr[31]);
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(8), ctx.gpr[18]);
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(4), ctx.gpr[17]);
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(0), ctx.gpr[16]);
    ctx.set_gpr(18, ctx.gpr[4] + 0u);
    ctx.set_gpr(17, ctx.gpr[5] + 0u);
    ctx.set_gpr(16, ctx.gpr[6] + 0u);
    ctx.set_gpr(31, 0x089FD55Cu);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0053_entry, 53u, 328u, 0x088D9B14u>(ctx, &aot_mem) && ctx.pc == 0x089FD55Cu) goto L_089FD55C;
    return;
L_089FD55C:
    ctx.set_gpr(3, rt.memory().aot_load16(ctx.gpr[18] + static_cast<std::uint32_t>(20)));
    ctx.set_gpr(3, ctx.gpr[3] >> 2u);
    { const std::int64_t product = static_cast<std::int64_t>(static_cast<std::int32_t>(ctx.gpr[16])) * static_cast<std::int64_t>(static_cast<std::int32_t>(ctx.gpr[3])); ctx.lo = static_cast<std::uint32_t>(product); ctx.hi = static_cast<std::uint32_t>(static_cast<std::uint64_t>(product) >> 32u); }
    ctx.set_gpr(6, ctx.lo);
    ctx.set_gpr(4, ctx.gpr[2] + 0u);
    ctx.set_gpr(5, ctx.gpr[17] + 0u);
    ctx.set_gpr(25, rt.memory().aot_load32(ctx.gpr[2] + static_cast<std::uint32_t>(0)));
    ctx.set_gpr(25, rt.memory().aot_load32(ctx.gpr[25] + static_cast<std::uint32_t>(220)));
    jump_target = ctx.gpr[25];
    ctx.set_gpr(31, 0x089FD584u);
    // nop
    ctx.pc = jump_target;
    if (rt.invoke_chained_call(ctx, &aot_mem) && ctx.pc == 0x089FD584u) goto L_089FD584;
    return;
L_089FD584:
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
L_089FD5A0:
    ctx.set_gpr(29, ctx.gpr[29] + static_cast<std::uint32_t>(-16));
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(12), ctx.gpr[31]);
    ctx.set_gpr(4, ctx.gpr[6] + 0u);
    ctx.set_gpr(6, 0u + static_cast<std::uint32_t>(4));
    ctx.set_gpr(7, ctx.gpr[6] + 0u);
    ctx.set_gpr(8, 0u + static_cast<std::uint32_t>(1));
    ctx.set_gpr(31, 0x089FD5C0u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0125_entry, 125u, 442u, 0x089FA268u>(ctx, &aot_mem) && ctx.pc == 0x089FD5C0u) goto L_089FD5C0;
    return;
L_089FD5C0:
    ctx.set_gpr(31, rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(12)));
    ctx.set_gpr(29, ctx.gpr[29] + static_cast<std::uint32_t>(16));
    jump_target = ctx.gpr[31];
    // nop
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_089FD5D0:
    ctx.set_gpr(29, ctx.gpr[29] + static_cast<std::uint32_t>(-1088));
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(60), ctx.gpr[31]);
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(56), ctx.gpr[23]);
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(52), ctx.gpr[22]);
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(48), ctx.gpr[21]);
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(44), ctx.gpr[20]);
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(40), ctx.gpr[19]);
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(36), ctx.gpr[18]);
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(32), ctx.gpr[17]);
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(28), ctx.gpr[16]);
    ctx.set_gpr(21, ctx.gpr[4] + 0u);
    ctx.set_gpr(20, ctx.gpr[6] + 0u);
    ctx.fpr[12] = std::bit_cast<float>(rt.memory().aot_load32(ctx.gpr[6] + static_cast<std::uint32_t>(0)));
    ctx.set_gpr(31, 0x089FD60Cu);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0006_entry, 6u, 675u, 0x0881EBD0u>(ctx, &aot_mem) && ctx.pc == 0x089FD60Cu) goto L_089FD60C;
    return;
L_089FD60C:
    ctx.set_gpr(19, ctx.gpr[2] + 0u);
    ctx.set_gpr(18, ctx.gpr[3] + 0u);
    ctx.fpr[12] = std::bit_cast<float>(rt.memory().aot_load32(ctx.gpr[20] + static_cast<std::uint32_t>(4)));
    ctx.set_gpr(31, 0x089FD620u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0006_entry, 6u, 675u, 0x0881EBD0u>(ctx, &aot_mem) && ctx.pc == 0x089FD620u) goto L_089FD620;
    return;
L_089FD620:
    ctx.set_gpr(17, ctx.gpr[2] + 0u);
    ctx.set_gpr(16, ctx.gpr[3] + 0u);
    ctx.fpr[12] = std::bit_cast<float>(rt.memory().aot_load32(ctx.gpr[20] + static_cast<std::uint32_t>(8)));
    ctx.set_gpr(31, 0x089FD634u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0006_entry, 6u, 675u, 0x0881EBD0u>(ctx, &aot_mem) && ctx.pc == 0x089FD634u) goto L_089FD634;
    return;
L_089FD634:
    ctx.set_gpr(22, ctx.gpr[2] + 0u);
    ctx.set_gpr(23, ctx.gpr[3] + 0u);
    ctx.fpr[12] = std::bit_cast<float>(rt.memory().aot_load32(ctx.gpr[20] + static_cast<std::uint32_t>(12)));
    ctx.set_gpr(31, 0x089FD648u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0006_entry, 6u, 675u, 0x0881EBD0u>(ctx, &aot_mem) && ctx.pc == 0x089FD648u) goto L_089FD648;
    return;
L_089FD648:
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(0), ctx.gpr[2]);
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(4), ctx.gpr[3]);
    ctx.set_gpr(4, ctx.gpr[29] + static_cast<std::uint32_t>(64));
    ctx.set_gpr(5, 2229u << 16u);
    ctx.set_gpr(5, ctx.gpr[5] + static_cast<std::uint32_t>(-10448));
    ctx.set_gpr(6, ctx.gpr[19] + 0u);
    ctx.set_gpr(7, ctx.gpr[18] + 0u);
    ctx.set_gpr(8, ctx.gpr[17] + 0u);
    ctx.set_gpr(9, ctx.gpr[16] + 0u);
    ctx.set_gpr(10, ctx.gpr[22] + 0u);
    ctx.set_gpr(11, ctx.gpr[23] + 0u);
    ctx.set_gpr(31, 0x089FD67Cu);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0004_entry, 4u, 423u, 0x08815FF4u>(ctx, &aot_mem) && ctx.pc == 0x089FD67Cu) goto L_089FD67C;
    return;
L_089FD67C:
    ctx.set_gpr(3, ctx.gpr[29] + static_cast<std::uint32_t>(64));
    { const bool branch_taken = ctx.gpr[3] != 0u;
    // nop
      if (branch_taken) {
          goto L_089FD694;
      }
      goto L_089FD688;
    }
L_089FD688:
    ctx.set_gpr(3, 0u + 0u);
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_089FD6E4;
      }
      goto L_089FD694;
    }
L_089FD694:
    ctx.set_gpr(2, 2245u << 16u);
    ctx.set_gpr(2, rt.memory().aot_load32(ctx.gpr[2] + static_cast<std::uint32_t>(30776)));
    { const bool branch_taken = ctx.gpr[2] != 0u;
    // nop
      if (branch_taken) {
          goto L_089FD6CC;
      }
      goto L_089FD6A4;
    }
L_089FD6A4:
    ctx.set_gpr(4, 0u + static_cast<std::uint32_t>(16));
    ctx.set_gpr(31, 0x089FD6B0u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0072_entry, 72u, 788u, 0x089277A0u>(ctx, &aot_mem) && ctx.pc == 0x089FD6B0u) goto L_089FD6B0;
    return;
L_089FD6B0:
    { const bool branch_taken = ctx.gpr[2] == 0u;
    // nop
      if (branch_taken) {
          goto L_089FD6C4;
      }
      goto L_089FD6B8;
    }
L_089FD6B8:
    ctx.set_gpr(4, ctx.gpr[2] + 0u);
    ctx.set_gpr(31, 0x089FD6C4u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0072_entry, 72u, 762u, 0x089275E8u>(ctx, &aot_mem) && ctx.pc == 0x089FD6C4u) goto L_089FD6C4;
    return;
L_089FD6C4:
    ctx.set_gpr(3, 2245u << 16u);
    rt.memory().aot_store32(ctx.gpr[3] + static_cast<std::uint32_t>(30776), ctx.gpr[2]);
    goto L_089FD6CC;
L_089FD6CC:
    ctx.set_gpr(2, 2245u << 16u);
    ctx.set_gpr(4, rt.memory().aot_load32(ctx.gpr[2] + static_cast<std::uint32_t>(30776)));
    ctx.set_gpr(5, ctx.gpr[29] + static_cast<std::uint32_t>(64));
    ctx.set_gpr(31, 0x089FD6E0u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0072_entry, 72u, 784u, 0x08927768u>(ctx, &aot_mem) && ctx.pc == 0x089FD6E0u) goto L_089FD6E0;
    return;
L_089FD6E0:
    ctx.set_gpr(3, ctx.gpr[2] + 0u);
    goto L_089FD6E4;
L_089FD6E4:
    rt.memory().aot_store32(ctx.gpr[21] + static_cast<std::uint32_t>(0), ctx.gpr[3]);
    ctx.set_gpr(31, rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(60)));
    ctx.set_gpr(23, rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(56)));
    ctx.set_gpr(22, rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(52)));
    ctx.set_gpr(21, rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(48)));
    ctx.set_gpr(20, rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(44)));
    ctx.set_gpr(19, rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(40)));
    ctx.set_gpr(18, rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(36)));
    ctx.set_gpr(17, rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(32)));
    ctx.set_gpr(16, rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(28)));
    ctx.set_gpr(29, ctx.gpr[29] + static_cast<std::uint32_t>(1088));
    jump_target = ctx.gpr[31];
    // nop
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_089FD718:
    ctx.set_gpr(2, 0u + static_cast<std::uint32_t>(16));
    jump_target = ctx.gpr[31];
    // nop
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_089FD724:
    ctx.set_gpr(29, ctx.gpr[29] + static_cast<std::uint32_t>(-16));
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(12), ctx.gpr[31]);
    ctx.set_gpr(25, rt.memory().aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(0)));
    ctx.set_gpr(25, rt.memory().aot_load32(ctx.gpr[25] + static_cast<std::uint32_t>(144)));
    jump_target = ctx.gpr[25];
    ctx.set_gpr(31, 0x089FD73Cu);
    // nop
    ctx.pc = jump_target;
    if (rt.invoke_chained_call(ctx, &aot_mem) && ctx.pc == 0x089FD73Cu) goto L_089FD73C;
    return;
L_089FD73C:
    ctx.set_gpr(31, rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(12)));
    ctx.set_gpr(29, ctx.gpr[29] + static_cast<std::uint32_t>(16));
    jump_target = ctx.gpr[31];
    // nop
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_089FD74C:
    ctx.set_gpr(2, 0u + static_cast<std::uint32_t>(16));
    jump_target = ctx.gpr[31];
    // nop
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_089FD758:
    ctx.set_gpr(29, ctx.gpr[29] + static_cast<std::uint32_t>(-16));
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(12), ctx.gpr[31]);
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(8), ctx.gpr[18]);
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(4), ctx.gpr[17]);
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(0), ctx.gpr[16]);
    ctx.set_gpr(18, ctx.gpr[4] + 0u);
    ctx.set_gpr(17, ctx.gpr[5] + 0u);
    ctx.set_gpr(16, ctx.gpr[6] + 0u);
    ctx.set_gpr(31, 0x089FD780u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0053_entry, 53u, 328u, 0x088D9B14u>(ctx, &aot_mem) && ctx.pc == 0x089FD780u) goto L_089FD780;
    return;
L_089FD780:
    ctx.set_gpr(3, rt.memory().aot_load16(ctx.gpr[18] + static_cast<std::uint32_t>(20)));
    ctx.set_gpr(3, ctx.gpr[3] >> 2u);
    { const std::int64_t product = static_cast<std::int64_t>(static_cast<std::int32_t>(ctx.gpr[16])) * static_cast<std::int64_t>(static_cast<std::int32_t>(ctx.gpr[3])); ctx.lo = static_cast<std::uint32_t>(product); ctx.hi = static_cast<std::uint32_t>(static_cast<std::uint64_t>(product) >> 32u); }
    ctx.set_gpr(6, ctx.lo);
    ctx.set_gpr(4, ctx.gpr[2] + 0u);
    ctx.set_gpr(5, ctx.gpr[17] + 0u);
    ctx.set_gpr(25, rt.memory().aot_load32(ctx.gpr[2] + static_cast<std::uint32_t>(0)));
    ctx.set_gpr(25, rt.memory().aot_load32(ctx.gpr[25] + static_cast<std::uint32_t>(220)));
    jump_target = ctx.gpr[25];
    ctx.set_gpr(31, 0x089FD7A8u);
    // nop
    ctx.pc = jump_target;
    if (rt.invoke_chained_call(ctx, &aot_mem) && ctx.pc == 0x089FD7A8u) goto L_089FD7A8;
    return;
L_089FD7A8:
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
L_089FD7C4:
    ctx.set_gpr(29, ctx.gpr[29] + static_cast<std::uint32_t>(-16));
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(12), ctx.gpr[31]);
    ctx.set_gpr(4, ctx.gpr[6] + 0u);
    ctx.set_gpr(6, 0u + static_cast<std::uint32_t>(4));
    ctx.set_gpr(7, ctx.gpr[6] + 0u);
    ctx.set_gpr(8, 0u + 0u);
    ctx.set_gpr(31, 0x089FD7E4u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0125_entry, 125u, 442u, 0x089FA268u>(ctx, &aot_mem) && ctx.pc == 0x089FD7E4u) goto L_089FD7E4;
    return;
L_089FD7E4:
    ctx.set_gpr(31, rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(12)));
    ctx.set_gpr(29, ctx.gpr[29] + static_cast<std::uint32_t>(16));
    jump_target = ctx.gpr[31];
    // nop
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_089FD7F4:
    ctx.set_gpr(29, ctx.gpr[29] + static_cast<std::uint32_t>(-1040));
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(12), ctx.gpr[31]);
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(8), ctx.gpr[16]);
    ctx.set_gpr(16, ctx.gpr[4] + 0u);
    ctx.set_gpr(2, ctx.gpr[6] + 0u);
    ctx.set_gpr(4, ctx.gpr[29] + static_cast<std::uint32_t>(16));
    ctx.set_gpr(5, 2229u << 16u);
    ctx.set_gpr(5, ctx.gpr[5] + static_cast<std::uint32_t>(-10436));
    ctx.set_gpr(6, rt.memory().aot_load32(ctx.gpr[6] + static_cast<std::uint32_t>(0)));
    ctx.set_gpr(7, rt.memory().aot_load32(ctx.gpr[2] + static_cast<std::uint32_t>(4)));
    ctx.set_gpr(8, rt.memory().aot_load32(ctx.gpr[2] + static_cast<std::uint32_t>(8)));
    ctx.set_gpr(9, rt.memory().aot_load32(ctx.gpr[2] + static_cast<std::uint32_t>(12)));
    ctx.set_gpr(31, 0x089FD82Cu);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0004_entry, 4u, 423u, 0x08815FF4u>(ctx, &aot_mem) && ctx.pc == 0x089FD82Cu) goto L_089FD82C;
    return;
L_089FD82C:
    ctx.set_gpr(3, ctx.gpr[29] + static_cast<std::uint32_t>(16));
    { const bool branch_taken = ctx.gpr[3] != 0u;
    // nop
      if (branch_taken) {
          goto L_089FD844;
      }
      goto L_089FD838;
    }
L_089FD838:
    ctx.set_gpr(3, 0u + 0u);
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_089FD894;
      }
      goto L_089FD844;
    }
L_089FD844:
    ctx.set_gpr(2, 2245u << 16u);
    ctx.set_gpr(2, rt.memory().aot_load32(ctx.gpr[2] + static_cast<std::uint32_t>(30776)));
    { const bool branch_taken = ctx.gpr[2] != 0u;
    // nop
      if (branch_taken) {
          goto L_089FD87C;
      }
      goto L_089FD854;
    }
L_089FD854:
    ctx.set_gpr(4, 0u + static_cast<std::uint32_t>(16));
    ctx.set_gpr(31, 0x089FD860u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0072_entry, 72u, 788u, 0x089277A0u>(ctx, &aot_mem) && ctx.pc == 0x089FD860u) goto L_089FD860;
    return;
L_089FD860:
    { const bool branch_taken = ctx.gpr[2] == 0u;
    // nop
      if (branch_taken) {
          goto L_089FD874;
      }
      goto L_089FD868;
    }
L_089FD868:
    ctx.set_gpr(4, ctx.gpr[2] + 0u);
    ctx.set_gpr(31, 0x089FD874u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0072_entry, 72u, 762u, 0x089275E8u>(ctx, &aot_mem) && ctx.pc == 0x089FD874u) goto L_089FD874;
    return;
L_089FD874:
    ctx.set_gpr(3, 2245u << 16u);
    rt.memory().aot_store32(ctx.gpr[3] + static_cast<std::uint32_t>(30776), ctx.gpr[2]);
    goto L_089FD87C;
L_089FD87C:
    ctx.set_gpr(2, 2245u << 16u);
    ctx.set_gpr(4, rt.memory().aot_load32(ctx.gpr[2] + static_cast<std::uint32_t>(30776)));
    ctx.set_gpr(5, ctx.gpr[29] + static_cast<std::uint32_t>(16));
    ctx.set_gpr(31, 0x089FD890u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0072_entry, 72u, 784u, 0x08927768u>(ctx, &aot_mem) && ctx.pc == 0x089FD890u) goto L_089FD890;
    return;
L_089FD890:
    ctx.set_gpr(3, ctx.gpr[2] + 0u);
    goto L_089FD894;
L_089FD894:
    rt.memory().aot_store32(ctx.gpr[16] + static_cast<std::uint32_t>(0), ctx.gpr[3]);
    ctx.set_gpr(31, rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(12)));
    ctx.set_gpr(16, rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(8)));
    ctx.set_gpr(29, ctx.gpr[29] + static_cast<std::uint32_t>(1040));
    jump_target = ctx.gpr[31];
    // nop
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_089FD8AC:
    ctx.set_gpr(2, 0u + static_cast<std::uint32_t>(16));
    jump_target = ctx.gpr[31];
    // nop
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_089FD8B8:
    ctx.set_gpr(2, 0u + static_cast<std::uint32_t>(4));
    jump_target = ctx.gpr[31];
    // nop
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_089FD8C4:
    ctx.set_gpr(29, ctx.gpr[29] + static_cast<std::uint32_t>(-16));
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(12), ctx.gpr[31]);
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(8), ctx.gpr[18]);
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(4), ctx.gpr[17]);
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(0), ctx.gpr[16]);
    ctx.set_gpr(18, ctx.gpr[4] + 0u);
    ctx.set_gpr(17, ctx.gpr[5] + 0u);
    ctx.set_gpr(16, ctx.gpr[6] + 0u);
    ctx.set_gpr(31, 0x089FD8ECu);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0054_entry, 54u, 416u, 0x088DE2D0u>(ctx, &aot_mem) && ctx.pc == 0x089FD8ECu) goto L_089FD8EC;
    return;
L_089FD8EC:
    ctx.set_gpr(3, rt.memory().aot_load16(ctx.gpr[18] + static_cast<std::uint32_t>(20)));
    { const std::int64_t product = static_cast<std::int64_t>(static_cast<std::int32_t>(ctx.gpr[16])) * static_cast<std::int64_t>(static_cast<std::int32_t>(ctx.gpr[3])); ctx.lo = static_cast<std::uint32_t>(product); ctx.hi = static_cast<std::uint32_t>(static_cast<std::uint64_t>(product) >> 32u); }
    ctx.set_gpr(6, ctx.lo);
    ctx.set_gpr(4, ctx.gpr[2] + 0u);
    ctx.set_gpr(5, ctx.gpr[17] + 0u);
    ctx.set_gpr(25, rt.memory().aot_load32(ctx.gpr[2] + static_cast<std::uint32_t>(0)));
    ctx.set_gpr(25, rt.memory().aot_load32(ctx.gpr[25] + static_cast<std::uint32_t>(220)));
    jump_target = ctx.gpr[25];
    ctx.set_gpr(31, 0x089FD910u);
    // nop
    ctx.pc = jump_target;
    if (rt.invoke_chained_call(ctx, &aot_mem) && ctx.pc == 0x089FD910u) goto L_089FD910;
    return;
L_089FD910:
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
L_089FD92C:
    ctx.set_gpr(29, ctx.gpr[29] + static_cast<std::uint32_t>(-16));
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(12), ctx.gpr[31]);
    ctx.set_gpr(4, ctx.gpr[6] + 0u);
    ctx.set_gpr(6, 0u + static_cast<std::uint32_t>(4));
    ctx.set_gpr(7, 0u + static_cast<std::uint32_t>(1));
    ctx.set_gpr(8, 0u + 0u);
    ctx.set_gpr(31, 0x089FD94Cu);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0125_entry, 125u, 442u, 0x089FA268u>(ctx, &aot_mem) && ctx.pc == 0x089FD94Cu) goto L_089FD94C;
    return;
L_089FD94C:
    ctx.set_gpr(31, rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(12)));
    ctx.set_gpr(29, ctx.gpr[29] + static_cast<std::uint32_t>(16));
    jump_target = ctx.gpr[31];
    // nop
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_089FD95C:
    ctx.set_gpr(29, ctx.gpr[29] + static_cast<std::uint32_t>(-1040));
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(12), ctx.gpr[31]);
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(8), ctx.gpr[16]);
    ctx.set_gpr(16, ctx.gpr[4] + 0u);
    ctx.set_gpr(2, rt.memory().aot_load8(ctx.gpr[6] + static_cast<std::uint32_t>(0)));
    ctx.set_gpr(7, rt.memory().aot_load8(ctx.gpr[6] + static_cast<std::uint32_t>(1)));
    ctx.set_gpr(8, rt.memory().aot_load8(ctx.gpr[6] + static_cast<std::uint32_t>(2)));
    ctx.set_gpr(9, rt.memory().aot_load8(ctx.gpr[6] + static_cast<std::uint32_t>(3)));
    ctx.set_gpr(4, ctx.gpr[29] + static_cast<std::uint32_t>(16));
    ctx.set_gpr(5, 2229u << 16u);
    ctx.set_gpr(5, ctx.gpr[5] + static_cast<std::uint32_t>(-10424));
    ctx.set_gpr(6, ctx.gpr[2] + 0u);
    ctx.set_gpr(31, 0x089FD994u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0004_entry, 4u, 423u, 0x08815FF4u>(ctx, &aot_mem) && ctx.pc == 0x089FD994u) goto L_089FD994;
    return;
L_089FD994:
    ctx.set_gpr(3, ctx.gpr[29] + static_cast<std::uint32_t>(16));
    { const bool branch_taken = ctx.gpr[3] != 0u;
    // nop
      if (branch_taken) {
          goto L_089FD9AC;
      }
      goto L_089FD9A0;
    }
L_089FD9A0:
    ctx.set_gpr(3, 0u + 0u);
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_089FD9FC;
      }
      goto L_089FD9AC;
    }
L_089FD9AC:
    ctx.set_gpr(2, 2245u << 16u);
    ctx.set_gpr(2, rt.memory().aot_load32(ctx.gpr[2] + static_cast<std::uint32_t>(30776)));
    { const bool branch_taken = ctx.gpr[2] != 0u;
    // nop
      if (branch_taken) {
          goto L_089FD9E4;
      }
      goto L_089FD9BC;
    }
L_089FD9BC:
    ctx.set_gpr(4, 0u + static_cast<std::uint32_t>(16));
    ctx.set_gpr(31, 0x089FD9C8u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0072_entry, 72u, 788u, 0x089277A0u>(ctx, &aot_mem) && ctx.pc == 0x089FD9C8u) goto L_089FD9C8;
    return;
L_089FD9C8:
    { const bool branch_taken = ctx.gpr[2] == 0u;
    // nop
      if (branch_taken) {
          goto L_089FD9DC;
      }
      goto L_089FD9D0;
    }
L_089FD9D0:
    ctx.set_gpr(4, ctx.gpr[2] + 0u);
    ctx.set_gpr(31, 0x089FD9DCu);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0072_entry, 72u, 762u, 0x089275E8u>(ctx, &aot_mem) && ctx.pc == 0x089FD9DCu) goto L_089FD9DC;
    return;
L_089FD9DC:
    ctx.set_gpr(3, 2245u << 16u);
    rt.memory().aot_store32(ctx.gpr[3] + static_cast<std::uint32_t>(30776), ctx.gpr[2]);
    goto L_089FD9E4;
L_089FD9E4:
    ctx.set_gpr(2, 2245u << 16u);
    ctx.set_gpr(4, rt.memory().aot_load32(ctx.gpr[2] + static_cast<std::uint32_t>(30776)));
    ctx.set_gpr(5, ctx.gpr[29] + static_cast<std::uint32_t>(16));
    ctx.set_gpr(31, 0x089FD9F8u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0072_entry, 72u, 784u, 0x08927768u>(ctx, &aot_mem) && ctx.pc == 0x089FD9F8u) goto L_089FD9F8;
    return;
L_089FD9F8:
    ctx.set_gpr(3, ctx.gpr[2] + 0u);
    goto L_089FD9FC;
L_089FD9FC:
    rt.memory().aot_store32(ctx.gpr[16] + static_cast<std::uint32_t>(0), ctx.gpr[3]);
    ctx.set_gpr(31, rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(12)));
    ctx.set_gpr(16, rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(8)));
    ctx.set_gpr(29, ctx.gpr[29] + static_cast<std::uint32_t>(1040));
    jump_target = ctx.gpr[31];
    // nop
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_089FDA14:
    ctx.set_gpr(2, 0u + static_cast<std::uint32_t>(4));
    jump_target = ctx.gpr[31];
    // nop
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_089FDA20:
    ctx.set_gpr(2, 0u + static_cast<std::uint32_t>(1));
    jump_target = ctx.gpr[31];
    // nop
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_089FDA2C:
    ctx.set_gpr(13, 0u + 0u);
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_089FDB50;
      }
      goto L_089FDA38;
    }
L_089FDA38:
    rt.memory().aot_store32(ctx.gpr[10] + static_cast<std::uint32_t>(0), 0u);
    rt.memory().aot_store32(ctx.gpr[10] + static_cast<std::uint32_t>(4), 0u);
    rt.memory().aot_store32(ctx.gpr[10] + static_cast<std::uint32_t>(8), 0u);
    ctx.set_gpr(12, 0u + 0u);
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_089FDB38;
      }
      goto L_089FDA50;
    }
L_089FDA50:
    ctx.fpr[0] = std::bit_cast<float>(rt.memory().aot_load32(ctx.gpr[6] + static_cast<std::uint32_t>(0)));
    ctx.set_gpr(6, ctx.gpr[6] + static_cast<std::uint32_t>(4));
    ctx.set_gpr(3, rt.memory().aot_load8(ctx.gpr[7] + static_cast<std::uint32_t>(0)));
    ctx.set_gpr(7, ctx.gpr[7] + static_cast<std::uint32_t>(1));
    ctx.fpr[1] = std::bit_cast<float>(rt.memory().aot_load32(ctx.gpr[28] + static_cast<std::uint32_t>(-32520)));
    ctx.set_fpu_condition(((std::isnan(ctx.fpr[0]) || std::isnan(ctx.fpr[1])) || ctx.fpr[0] <= ctx.fpr[1]));
    // nop
    { const bool branch_taken = ctx.fpu_condition();
    // nop
      if (branch_taken) {
          goto L_089FDB34;
      }
      goto L_089FDA74;
    }
L_089FDA74:
    ctx.set_gpr(3, ctx.gpr[3] & 255u);
    ctx.set_gpr(3, ctx.gpr[3] << 6u);
    ctx.set_gpr(3, ctx.gpr[9] + ctx.gpr[3]);
    ctx.fpr[7] = std::bit_cast<float>(rt.memory().aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(0)));
    ctx.fpr[6] = std::bit_cast<float>(rt.memory().aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(4)));
    ctx.fpr[5] = std::bit_cast<float>(rt.memory().aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(8)));
    ctx.fpr[1] = std::bit_cast<float>(rt.memory().aot_load32(ctx.gpr[3] + static_cast<std::uint32_t>(0)));
    { const float fs = ctx.fpr[7]; const float ft = ctx.fpr[1]; if ((std::isinf(fs) && ft == 0.0f) || (std::isinf(ft) && fs == 0.0f)) ctx.set_fpr_bits(2, 0x7FC00000u); else ctx.fpr[2] = fs * ft; }
    ctx.fpr[1] = std::bit_cast<float>(rt.memory().aot_load32(ctx.gpr[3] + static_cast<std::uint32_t>(16)));
    { const float fs = ctx.fpr[6]; const float ft = ctx.fpr[1]; if ((std::isinf(fs) && ft == 0.0f) || (std::isinf(ft) && fs == 0.0f)) ctx.set_fpr_bits(1, 0x7FC00000u); else ctx.fpr[1] = fs * ft; }
    ctx.fpr[2] = ctx.fpr[2] + ctx.fpr[1];
    ctx.fpr[1] = std::bit_cast<float>(rt.memory().aot_load32(ctx.gpr[3] + static_cast<std::uint32_t>(32)));
    { const float fs = ctx.fpr[5]; const float ft = ctx.fpr[1]; if ((std::isinf(fs) && ft == 0.0f) || (std::isinf(ft) && fs == 0.0f)) ctx.set_fpr_bits(1, 0x7FC00000u); else ctx.fpr[1] = fs * ft; }
    ctx.fpr[2] = ctx.fpr[1] + ctx.fpr[2];
    ctx.fpr[1] = std::bit_cast<float>(rt.memory().aot_load32(ctx.gpr[3] + static_cast<std::uint32_t>(48)));
    ctx.fpr[3] = ctx.fpr[1] + ctx.fpr[2];
    ctx.fpr[1] = std::bit_cast<float>(rt.memory().aot_load32(ctx.gpr[3] + static_cast<std::uint32_t>(4)));
    { const float fs = ctx.fpr[7]; const float ft = ctx.fpr[1]; if ((std::isinf(fs) && ft == 0.0f) || (std::isinf(ft) && fs == 0.0f)) ctx.set_fpr_bits(2, 0x7FC00000u); else ctx.fpr[2] = fs * ft; }
    ctx.fpr[1] = std::bit_cast<float>(rt.memory().aot_load32(ctx.gpr[3] + static_cast<std::uint32_t>(20)));
    { const float fs = ctx.fpr[6]; const float ft = ctx.fpr[1]; if ((std::isinf(fs) && ft == 0.0f) || (std::isinf(ft) && fs == 0.0f)) ctx.set_fpr_bits(1, 0x7FC00000u); else ctx.fpr[1] = fs * ft; }
    ctx.fpr[2] = ctx.fpr[2] + ctx.fpr[1];
    ctx.fpr[1] = std::bit_cast<float>(rt.memory().aot_load32(ctx.gpr[3] + static_cast<std::uint32_t>(36)));
    { const float fs = ctx.fpr[5]; const float ft = ctx.fpr[1]; if ((std::isinf(fs) && ft == 0.0f) || (std::isinf(ft) && fs == 0.0f)) ctx.set_fpr_bits(1, 0x7FC00000u); else ctx.fpr[1] = fs * ft; }
    ctx.fpr[2] = ctx.fpr[1] + ctx.fpr[2];
    ctx.fpr[1] = std::bit_cast<float>(rt.memory().aot_load32(ctx.gpr[3] + static_cast<std::uint32_t>(52)));
    ctx.fpr[4] = ctx.fpr[1] + ctx.fpr[2];
    ctx.fpr[1] = std::bit_cast<float>(rt.memory().aot_load32(ctx.gpr[3] + static_cast<std::uint32_t>(8)));
    { const float fs = ctx.fpr[7]; const float ft = ctx.fpr[1]; if ((std::isinf(fs) && ft == 0.0f) || (std::isinf(ft) && fs == 0.0f)) ctx.set_fpr_bits(2, 0x7FC00000u); else ctx.fpr[2] = fs * ft; }
    ctx.fpr[1] = std::bit_cast<float>(rt.memory().aot_load32(ctx.gpr[3] + static_cast<std::uint32_t>(24)));
    { const float fs = ctx.fpr[6]; const float ft = ctx.fpr[1]; if ((std::isinf(fs) && ft == 0.0f) || (std::isinf(ft) && fs == 0.0f)) ctx.set_fpr_bits(1, 0x7FC00000u); else ctx.fpr[1] = fs * ft; }
    ctx.fpr[2] = ctx.fpr[2] + ctx.fpr[1];
    ctx.fpr[1] = std::bit_cast<float>(rt.memory().aot_load32(ctx.gpr[3] + static_cast<std::uint32_t>(40)));
    { const float fs = ctx.fpr[5]; const float ft = ctx.fpr[1]; if ((std::isinf(fs) && ft == 0.0f) || (std::isinf(ft) && fs == 0.0f)) ctx.set_fpr_bits(1, 0x7FC00000u); else ctx.fpr[1] = fs * ft; }
    ctx.fpr[2] = ctx.fpr[1] + ctx.fpr[2];
    ctx.fpr[1] = std::bit_cast<float>(rt.memory().aot_load32(ctx.gpr[3] + static_cast<std::uint32_t>(56)));
    ctx.fpr[1] = ctx.fpr[1] + ctx.fpr[2];
    { const float fs = ctx.fpr[3]; const float ft = ctx.fpr[0]; if ((std::isinf(fs) && ft == 0.0f) || (std::isinf(ft) && fs == 0.0f)) ctx.set_fpr_bits(3, 0x7FC00000u); else ctx.fpr[3] = fs * ft; }
    { const float fs = ctx.fpr[4]; const float ft = ctx.fpr[0]; if ((std::isinf(fs) && ft == 0.0f) || (std::isinf(ft) && fs == 0.0f)) ctx.set_fpr_bits(2, 0x7FC00000u); else ctx.fpr[2] = fs * ft; }
    { const float fs = ctx.fpr[1]; const float ft = ctx.fpr[0]; if ((std::isinf(fs) && ft == 0.0f) || (std::isinf(ft) && fs == 0.0f)) ctx.set_fpr_bits(1, 0x7FC00000u); else ctx.fpr[1] = fs * ft; }
    ctx.fpr[0] = std::bit_cast<float>(rt.memory().aot_load32(ctx.gpr[10] + static_cast<std::uint32_t>(0)));
    ctx.fpr[0] = ctx.fpr[0] + ctx.fpr[3];
    rt.memory().aot_store32(ctx.gpr[10] + static_cast<std::uint32_t>(0), std::bit_cast<std::uint32_t>(ctx.fpr[0]));
    ctx.fpr[0] = std::bit_cast<float>(rt.memory().aot_load32(ctx.gpr[10] + static_cast<std::uint32_t>(4)));
    ctx.fpr[0] = ctx.fpr[0] + ctx.fpr[2];
    rt.memory().aot_store32(ctx.gpr[10] + static_cast<std::uint32_t>(4), std::bit_cast<std::uint32_t>(ctx.fpr[0]));
    ctx.fpr[0] = std::bit_cast<float>(rt.memory().aot_load32(ctx.gpr[10] + static_cast<std::uint32_t>(8)));
    ctx.fpr[0] = ctx.fpr[0] + ctx.fpr[1];
    rt.memory().aot_store32(ctx.gpr[10] + static_cast<std::uint32_t>(8), std::bit_cast<std::uint32_t>(ctx.fpr[0]));
    goto L_089FDB34;
L_089FDB34:
    ctx.set_gpr(12, ctx.gpr[12] + static_cast<std::uint32_t>(1));
    goto L_089FDB38;
L_089FDB38:
    ctx.set_gpr(3, ctx.gpr[12] < ctx.gpr[8] ? 1u : 0u);
    { const bool branch_taken = ctx.gpr[3] != 0u;
    // nop
      if (branch_taken) {
          goto L_089FDA50;
      }
      goto L_089FDB44;
    }
L_089FDB44:
    ctx.set_gpr(10, ctx.gpr[10] + ctx.gpr[11]);
    ctx.set_gpr(4, ctx.gpr[4] + static_cast<std::uint32_t>(12));
    ctx.set_gpr(13, ctx.gpr[13] + static_cast<std::uint32_t>(1));
    goto L_089FDB50;
L_089FDB50:
    ctx.set_gpr(3, ctx.gpr[13] < ctx.gpr[5] ? 1u : 0u);
    { const bool branch_taken = ctx.gpr[3] != 0u;
    // nop
      if (branch_taken) {
          goto L_089FDA38;
      }
      goto L_089FDB5C;
    }
L_089FDB5C:
    jump_target = ctx.gpr[31];
    // nop
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_089FDB64:
    ctx.set_gpr(6, 0u + 0u);
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_089FDC1C;
      }
      goto L_089FDB70;
    }
L_089FDB70:
    ctx.set_gpr(3, rt.memory().aot_load8(ctx.gpr[7] + static_cast<std::uint32_t>(0)));
    ctx.set_gpr(7, ctx.gpr[7] + ctx.gpr[8]);
    ctx.set_gpr(3, ctx.gpr[3] << 6u);
    ctx.set_gpr(3, ctx.gpr[9] + ctx.gpr[3]);
    ctx.fpr[6] = std::bit_cast<float>(rt.memory().aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(0)));
    ctx.fpr[5] = std::bit_cast<float>(rt.memory().aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(4)));
    ctx.fpr[4] = std::bit_cast<float>(rt.memory().aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(8)));
    ctx.fpr[0] = std::bit_cast<float>(rt.memory().aot_load32(ctx.gpr[3] + static_cast<std::uint32_t>(4)));
    { const float fs = ctx.fpr[6]; const float ft = ctx.fpr[0]; if ((std::isinf(fs) && ft == 0.0f) || (std::isinf(ft) && fs == 0.0f)) ctx.set_fpr_bits(1, 0x7FC00000u); else ctx.fpr[1] = fs * ft; }
    ctx.fpr[0] = std::bit_cast<float>(rt.memory().aot_load32(ctx.gpr[3] + static_cast<std::uint32_t>(20)));
    { const float fs = ctx.fpr[5]; const float ft = ctx.fpr[0]; if ((std::isinf(fs) && ft == 0.0f) || (std::isinf(ft) && fs == 0.0f)) ctx.set_fpr_bits(0, 0x7FC00000u); else ctx.fpr[0] = fs * ft; }
    ctx.fpr[1] = ctx.fpr[1] + ctx.fpr[0];
    ctx.fpr[0] = std::bit_cast<float>(rt.memory().aot_load32(ctx.gpr[3] + static_cast<std::uint32_t>(36)));
    { const float fs = ctx.fpr[4]; const float ft = ctx.fpr[0]; if ((std::isinf(fs) && ft == 0.0f) || (std::isinf(ft) && fs == 0.0f)) ctx.set_fpr_bits(0, 0x7FC00000u); else ctx.fpr[0] = fs * ft; }
    ctx.fpr[1] = ctx.fpr[0] + ctx.fpr[1];
    ctx.fpr[0] = std::bit_cast<float>(rt.memory().aot_load32(ctx.gpr[3] + static_cast<std::uint32_t>(52)));
    ctx.fpr[3] = ctx.fpr[0] + ctx.fpr[1];
    ctx.fpr[0] = std::bit_cast<float>(rt.memory().aot_load32(ctx.gpr[3] + static_cast<std::uint32_t>(8)));
    { const float fs = ctx.fpr[6]; const float ft = ctx.fpr[0]; if ((std::isinf(fs) && ft == 0.0f) || (std::isinf(ft) && fs == 0.0f)) ctx.set_fpr_bits(1, 0x7FC00000u); else ctx.fpr[1] = fs * ft; }
    ctx.fpr[0] = std::bit_cast<float>(rt.memory().aot_load32(ctx.gpr[3] + static_cast<std::uint32_t>(24)));
    { const float fs = ctx.fpr[5]; const float ft = ctx.fpr[0]; if ((std::isinf(fs) && ft == 0.0f) || (std::isinf(ft) && fs == 0.0f)) ctx.set_fpr_bits(0, 0x7FC00000u); else ctx.fpr[0] = fs * ft; }
    ctx.fpr[1] = ctx.fpr[1] + ctx.fpr[0];
    ctx.fpr[0] = std::bit_cast<float>(rt.memory().aot_load32(ctx.gpr[3] + static_cast<std::uint32_t>(40)));
    { const float fs = ctx.fpr[4]; const float ft = ctx.fpr[0]; if ((std::isinf(fs) && ft == 0.0f) || (std::isinf(ft) && fs == 0.0f)) ctx.set_fpr_bits(0, 0x7FC00000u); else ctx.fpr[0] = fs * ft; }
    ctx.fpr[1] = ctx.fpr[0] + ctx.fpr[1];
    ctx.fpr[0] = std::bit_cast<float>(rt.memory().aot_load32(ctx.gpr[3] + static_cast<std::uint32_t>(56)));
    ctx.fpr[2] = ctx.fpr[0] + ctx.fpr[1];
    ctx.fpr[0] = std::bit_cast<float>(rt.memory().aot_load32(ctx.gpr[3] + static_cast<std::uint32_t>(0)));
    { const float fs = ctx.fpr[6]; const float ft = ctx.fpr[0]; if ((std::isinf(fs) && ft == 0.0f) || (std::isinf(ft) && fs == 0.0f)) ctx.set_fpr_bits(1, 0x7FC00000u); else ctx.fpr[1] = fs * ft; }
    ctx.fpr[0] = std::bit_cast<float>(rt.memory().aot_load32(ctx.gpr[3] + static_cast<std::uint32_t>(16)));
    { const float fs = ctx.fpr[5]; const float ft = ctx.fpr[0]; if ((std::isinf(fs) && ft == 0.0f) || (std::isinf(ft) && fs == 0.0f)) ctx.set_fpr_bits(0, 0x7FC00000u); else ctx.fpr[0] = fs * ft; }
    ctx.fpr[1] = ctx.fpr[1] + ctx.fpr[0];
    ctx.fpr[0] = std::bit_cast<float>(rt.memory().aot_load32(ctx.gpr[3] + static_cast<std::uint32_t>(32)));
    { const float fs = ctx.fpr[4]; const float ft = ctx.fpr[0]; if ((std::isinf(fs) && ft == 0.0f) || (std::isinf(ft) && fs == 0.0f)) ctx.set_fpr_bits(0, 0x7FC00000u); else ctx.fpr[0] = fs * ft; }
    ctx.fpr[1] = ctx.fpr[0] + ctx.fpr[1];
    ctx.fpr[0] = std::bit_cast<float>(rt.memory().aot_load32(ctx.gpr[3] + static_cast<std::uint32_t>(48)));
    ctx.fpr[0] = ctx.fpr[0] + ctx.fpr[1];
    rt.memory().aot_store32(ctx.gpr[10] + static_cast<std::uint32_t>(0), std::bit_cast<std::uint32_t>(ctx.fpr[0]));
    rt.memory().aot_store32(ctx.gpr[10] + static_cast<std::uint32_t>(4), std::bit_cast<std::uint32_t>(ctx.fpr[3]));
    rt.memory().aot_store32(ctx.gpr[10] + static_cast<std::uint32_t>(8), std::bit_cast<std::uint32_t>(ctx.fpr[2]));
    ctx.set_gpr(4, ctx.gpr[4] + static_cast<std::uint32_t>(12));
    ctx.set_gpr(10, ctx.gpr[10] + ctx.gpr[11]);
    ctx.set_gpr(6, ctx.gpr[6] + static_cast<std::uint32_t>(1));
    goto L_089FDC1C;
L_089FDC1C:
    ctx.set_gpr(3, ctx.gpr[6] < ctx.gpr[5] ? 1u : 0u);
    { const bool branch_taken = ctx.gpr[3] != 0u;
    // nop
      if (branch_taken) {
          goto L_089FDB70;
      }
      goto L_089FDC28;
    }
L_089FDC28:
    jump_target = ctx.gpr[31];
    // nop
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_089FDC30:
    ctx.set_gpr(4, 2208u << 16u);
    ctx.set_gpr(4, ctx.gpr[4] + static_cast<std::uint32_t>(-9684));
    ctx.set_gpr(3, 2246u << 16u);
    rt.memory().aot_store32(ctx.gpr[3] + static_cast<std::uint32_t>(-26648), ctx.gpr[4]);
    ctx.set_gpr(4, 2208u << 16u);
    ctx.set_gpr(4, ctx.gpr[4] + static_cast<std::uint32_t>(-9372));
    ctx.set_gpr(3, 2246u << 16u);
    rt.memory().aot_store32(ctx.gpr[3] + static_cast<std::uint32_t>(-26644), ctx.gpr[4]);
    jump_target = ctx.gpr[31];
    // nop
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_089FDC58:
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
    ctx.set_gpr(21, ctx.gpr[4] + 0u);
    ctx.set_gpr(20, ctx.gpr[5] + 0u);
    ctx.set_gpr(19, ctx.gpr[6] + 0u);
    ctx.set_gpr(18, ctx.gpr[7] + 0u);
    ctx.set_gpr(3, ctx.gpr[8] + 0u);
    ctx.set_gpr(17, ctx.gpr[9] + 0u);
    ctx.set_gpr(16, ctx.gpr[11] + 0u);
    ctx.set_gpr(23, rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(72)));
    ctx.set_gpr(2, 0u + static_cast<std::uint32_t>(1));
    { const bool branch_taken = ctx.gpr[18] != ctx.gpr[2];
    // nop
      if (branch_taken) {
          goto L_089FDCBC;
      }
      goto L_089FDCAC;
    }
L_089FDCAC:
    ctx.set_gpr(22, 2208u << 16u);
    ctx.set_gpr(22, ctx.gpr[22] + static_cast<std::uint32_t>(-8748));
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_089FDCC4;
      }
      goto L_089FDCBC;
    }
L_089FDCBC:
    ctx.set_gpr(22, 2208u << 16u);
    ctx.set_gpr(22, ctx.gpr[22] + static_cast<std::uint32_t>(-8788));
    goto L_089FDCC4;
L_089FDCC4:
    ctx.set_gpr(4, ctx.gpr[10] + 0u);
    ctx.set_gpr(5, ctx.gpr[21] + 0u);
    ctx.set_gpr(6, ctx.gpr[20] + 0u);
    ctx.set_gpr(7, ctx.gpr[19] + 0u);
    ctx.set_gpr(8, ctx.gpr[18] + 0u);
    ctx.set_gpr(9, ctx.gpr[3] + 0u);
    ctx.set_gpr(10, rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(56)));
    ctx.set_gpr(11, ctx.gpr[23] + 0u);
    jump_target = ctx.gpr[22];
    ctx.set_gpr(31, 0x089FDCECu);
    // nop
    ctx.pc = jump_target;
    if (rt.invoke_chained_call(ctx, &aot_mem) && ctx.pc == 0x089FDCECu) goto L_089FDCEC;
    return;
L_089FDCEC:
    { const bool branch_taken = ctx.gpr[16] == 0u;
    // nop
      if (branch_taken) {
          goto L_089FDD1C;
      }
      goto L_089FDCF4;
    }
L_089FDCF4:
    ctx.set_gpr(4, ctx.gpr[16] + 0u);
    ctx.set_gpr(5, ctx.gpr[21] + 0u);
    ctx.set_gpr(6, ctx.gpr[20] + 0u);
    ctx.set_gpr(7, ctx.gpr[19] + 0u);
    ctx.set_gpr(8, ctx.gpr[18] + 0u);
    ctx.set_gpr(9, ctx.gpr[17] + 0u);
    ctx.set_gpr(10, rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(60)));
    ctx.set_gpr(11, ctx.gpr[23] + 0u);
    jump_target = ctx.gpr[22];
    ctx.set_gpr(31, 0x089FDD1Cu);
    // nop
    ctx.pc = jump_target;
    if (rt.invoke_chained_call(ctx, &aot_mem) && ctx.pc == 0x089FDD1Cu) goto L_089FDD1C;
    return;
L_089FDD1C:
    ctx.set_gpr(4, rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(48)));
    { const bool branch_taken = ctx.gpr[4] == 0u;
    // nop
      if (branch_taken) {
          goto L_089FDD4C;
      }
      goto L_089FDD28;
    }
L_089FDD28:
    ctx.set_gpr(5, ctx.gpr[21] + 0u);
    ctx.set_gpr(6, ctx.gpr[20] + 0u);
    ctx.set_gpr(7, ctx.gpr[19] + 0u);
    ctx.set_gpr(8, ctx.gpr[18] + 0u);
    ctx.set_gpr(9, ctx.gpr[17] + 0u);
    ctx.set_gpr(10, rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(64)));
    ctx.set_gpr(11, ctx.gpr[23] + 0u);
    jump_target = ctx.gpr[22];
    ctx.set_gpr(31, 0x089FDD4Cu);
    // nop
    ctx.pc = jump_target;
    if (rt.invoke_chained_call(ctx, &aot_mem) && ctx.pc == 0x089FDD4Cu) goto L_089FDD4C;
    return;
L_089FDD4C:
    ctx.set_gpr(4, rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(52)));
    { const bool branch_taken = ctx.gpr[4] == 0u;
    // nop
      if (branch_taken) {
          goto L_089FDD7C;
      }
      goto L_089FDD58;
    }
L_089FDD58:
    ctx.set_gpr(5, ctx.gpr[21] + 0u);
    ctx.set_gpr(6, ctx.gpr[20] + 0u);
    ctx.set_gpr(7, ctx.gpr[19] + 0u);
    ctx.set_gpr(8, ctx.gpr[18] + 0u);
    ctx.set_gpr(9, ctx.gpr[17] + 0u);
    ctx.set_gpr(10, rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(68)));
    ctx.set_gpr(11, ctx.gpr[23] + 0u);
    jump_target = ctx.gpr[22];
    ctx.set_gpr(31, 0x089FDD7Cu);
    // nop
    ctx.pc = jump_target;
    if (rt.invoke_chained_call(ctx, &aot_mem) && ctx.pc == 0x089FDD7Cu) goto L_089FDD7C;
    return;
L_089FDD7C:
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
L_089FDDAC:
    ctx.set_gpr(29, ctx.gpr[29] + static_cast<std::uint32_t>(-16));
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(12), ctx.gpr[31]);
    ctx.set_gpr(2, 2246u << 16u);
    ctx.set_gpr(2, rt.memory().aot_load32(ctx.gpr[2] + static_cast<std::uint32_t>(-26648)));
    jump_target = ctx.gpr[2];
    ctx.set_gpr(31, 0x089FDDC4u);
    // nop
    ctx.pc = jump_target;
    if (rt.invoke_chained_call(ctx, &aot_mem) && ctx.pc == 0x089FDDC4u) goto L_089FDDC4;
    return;
L_089FDDC4:
    ctx.set_gpr(31, rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(12)));
    ctx.set_gpr(29, ctx.gpr[29] + static_cast<std::uint32_t>(16));
    jump_target = ctx.gpr[31];
    // nop
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_089FDDD4:
    ctx.set_gpr(29, ctx.gpr[29] + static_cast<std::uint32_t>(-16));
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(12), ctx.gpr[31]);
    ctx.set_gpr(2, 2246u << 16u);
    ctx.set_gpr(2, rt.memory().aot_load32(ctx.gpr[2] + static_cast<std::uint32_t>(-26644)));
    jump_target = ctx.gpr[2];
    ctx.set_gpr(31, 0x089FDDECu);
    // nop
    ctx.pc = jump_target;
    if (rt.invoke_chained_call(ctx, &aot_mem) && ctx.pc == 0x089FDDECu) goto L_089FDDEC;
    return;
L_089FDDEC:
    ctx.set_gpr(31, rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(12)));
    ctx.set_gpr(29, ctx.gpr[29] + static_cast<std::uint32_t>(16));
    jump_target = ctx.gpr[31];
    // nop
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_089FDDFC:
    ctx.set_gpr(11, ctx.gpr[7] + ctx.gpr[8]);
    ctx.set_gpr(12, 0u + 0u);
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_089FDE84;
      }
      goto L_089FDE0C;
    }
L_089FDE0C:
    { const std::uint32_t dividend = ctx.gpr[12]; const std::uint32_t divisor = ctx.gpr[9]; if (divisor == 0u) { ctx.lo = 0xFFFFFFFFu; ctx.hi = dividend; } else { ctx.lo = dividend / divisor; ctx.hi = dividend % divisor; } }
    ctx.set_gpr(3, ctx.hi);
    ctx.set_gpr(3, ctx.gpr[3] << 2u);
    ctx.set_gpr(8, ctx.gpr[10] + ctx.gpr[3]);
    ctx.set_gpr(3, 0u + static_cast<std::uint32_t>(1));
    ctx.set_gpr(3, ctx.gpr[3] << (ctx.gpr[7] & 31u));
    ctx.fpr[0] = std::bit_cast<float>(ctx.gpr[3]);
    ctx.fpr[1] = static_cast<float>(static_cast<std::int32_t>(ctx.fpr_bits(0)));
    ctx.set_gpr(3, 16256u << 16u);
    ctx.fpr[0] = std::bit_cast<float>(ctx.gpr[3]);
    ctx.fpr[1] = ctx.fpr[1] - ctx.fpr[0];
    ctx.fpr[0] = std::bit_cast<float>(rt.memory().aot_load32(ctx.gpr[8] + static_cast<std::uint32_t>(0)));
    { const float fs = ctx.fpr[1]; const float ft = ctx.fpr[0]; if ((std::isinf(fs) && ft == 0.0f) || (std::isinf(ft) && fs == 0.0f)) ctx.set_fpr_bits(1, 0x7FC00000u); else ctx.fpr[1] = fs * ft; }
    ctx.set_gpr(3, ctx.gpr[12] << 2u);
    ctx.set_gpr(3, ctx.gpr[4] + ctx.gpr[3]);
    ctx.fpr[0] = std::bit_cast<float>(rt.memory().aot_load32(ctx.gpr[3] + static_cast<std::uint32_t>(0)));
    { const float fs = ctx.fpr[1]; const float ft = ctx.fpr[0]; if ((std::isinf(fs) && ft == 0.0f) || (std::isinf(ft) && fs == 0.0f)) ctx.set_fpr_bits(0, 0x7FC00000u); else ctx.fpr[0] = fs * ft; }
    ctx.set_fpr_bits(0, ctx.fpu_float_to_word(ctx.fpr[0], 1u));
    ctx.set_gpr(8, std::bit_cast<std::uint32_t>(ctx.fpr[0]));
    ctx.set_gpr(1, ctx.gpr[11] < static_cast<std::uint32_t>(9) ? 1u : 0u);
    { const bool branch_taken = ctx.gpr[1] != 0u;
    // nop
      if (branch_taken) {
          goto L_089FDE78;
      }
      goto L_089FDE64;
    }
L_089FDE64:
    ctx.set_gpr(3, ctx.gpr[12] << 1u);
    ctx.set_gpr(3, ctx.gpr[5] + ctx.gpr[3]);
    rt.memory().aot_store16(ctx.gpr[3] + static_cast<std::uint32_t>(0), static_cast<std::uint16_t>(ctx.gpr[8]));
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_089FDE80;
      }
      goto L_089FDE78;
    }
L_089FDE78:
    ctx.set_gpr(3, ctx.gpr[5] + ctx.gpr[12]);
    rt.memory().aot_store8(ctx.gpr[3] + static_cast<std::uint32_t>(0), static_cast<std::uint8_t>(ctx.gpr[8]));
    goto L_089FDE80;
L_089FDE80:
    ctx.set_gpr(12, ctx.gpr[12] + static_cast<std::uint32_t>(1));
    goto L_089FDE84;
L_089FDE84:
    ctx.set_gpr(3, ctx.gpr[12] < ctx.gpr[6] ? 1u : 0u);
    { const bool branch_taken = ctx.gpr[3] != 0u;
    // nop
      if (branch_taken) {
          goto L_089FDE0C;
      }
      goto L_089FDE90;
    }
L_089FDE90:
    jump_target = ctx.gpr[31];
    // nop
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_089FDE98:
    ctx.set_gpr(11, ctx.gpr[7] + ctx.gpr[8]);
    ctx.set_gpr(3, ctx.gpr[11] ^ 16u);
    ctx.set_gpr(3, ctx.gpr[3] < static_cast<std::uint32_t>(1) ? 1u : 0u);
    { const bool branch_taken = ctx.gpr[3] != 0u;
    // nop
      if (branch_taken) {
          goto L_089FDEB4;
      }
      goto L_089FDEAC;
    }
L_089FDEAC:
    ctx.set_gpr(3, ctx.gpr[11] ^ 8u);
    ctx.set_gpr(3, ctx.gpr[3] < static_cast<std::uint32_t>(1) ? 1u : 0u);
    goto L_089FDEB4;
L_089FDEB4:
    ctx.set_gpr(3, ctx.gpr[3] ^ 1u);
    ctx.set_gpr(8, ctx.gpr[3] & 255u);
    ctx.set_gpr(3, ctx.gpr[11] < static_cast<std::uint32_t>(9) ? 1u : 0u);
    ctx.set_gpr(3, ctx.gpr[3] ^ 1u);
    ctx.set_gpr(3, ctx.gpr[3] & 255u);
    ctx.set_gpr(11, 0u + 0u);
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_089FDFA8;
      }
      goto L_089FDED4;
    }
L_089FDED4:
    { const bool branch_taken = ctx.gpr[3] == 0u;
    // nop
      if (branch_taken) {
          goto L_089FDEF8;
      }
      goto L_089FDEDC;
    }
L_089FDEDC:
    { const bool branch_taken = ctx.gpr[8] == 0u;
    // nop
      if (branch_taken) {
          goto L_089FDEF8;
      }
      goto L_089FDEE4;
    }
L_089FDEE4:
    ctx.set_gpr(12, ctx.gpr[11] << 1u);
    ctx.set_gpr(12, ctx.gpr[4] + ctx.gpr[12]);
    ctx.set_gpr(14, static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int16_t>(rt.memory().aot_load16(ctx.gpr[12] + static_cast<std::uint32_t>(0))))));
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_089FDF44;
      }
      goto L_089FDEF8;
    }
L_089FDEF8:
    { const bool branch_taken = ctx.gpr[3] == 0u;
    // nop
      if (branch_taken) {
          goto L_089FDF1C;
      }
      goto L_089FDF00;
    }
L_089FDF00:
    { const bool branch_taken = ctx.gpr[8] != 0u;
    // nop
      if (branch_taken) {
          goto L_089FDF1C;
      }
      goto L_089FDF08;
    }
L_089FDF08:
    ctx.set_gpr(12, ctx.gpr[11] << 1u);
    ctx.set_gpr(12, ctx.gpr[4] + ctx.gpr[12]);
    ctx.set_gpr(14, rt.memory().aot_load16(ctx.gpr[12] + static_cast<std::uint32_t>(0)));
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_089FDF44;
      }
      goto L_089FDF1C;
    }
L_089FDF1C:
    { const bool branch_taken = ctx.gpr[3] != 0u;
    // nop
      if (branch_taken) {
          goto L_089FDF3C;
      }
      goto L_089FDF24;
    }
L_089FDF24:
    { const bool branch_taken = ctx.gpr[8] == 0u;
    // nop
      if (branch_taken) {
          goto L_089FDF3C;
      }
      goto L_089FDF2C;
    }
L_089FDF2C:
    ctx.set_gpr(12, ctx.gpr[11] + ctx.gpr[4]);
    ctx.set_gpr(14, static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int8_t>(rt.memory().aot_load8(ctx.gpr[12] + static_cast<std::uint32_t>(0))))));
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_089FDF44;
      }
      goto L_089FDF3C;
    }
L_089FDF3C:
    ctx.set_gpr(12, ctx.gpr[11] + ctx.gpr[4]);
    ctx.set_gpr(14, rt.memory().aot_load8(ctx.gpr[12] + static_cast<std::uint32_t>(0)));
    goto L_089FDF44;
L_089FDF44:
    { const std::uint32_t dividend = ctx.gpr[11]; const std::uint32_t divisor = ctx.gpr[9]; if (divisor == 0u) { ctx.lo = 0xFFFFFFFFu; ctx.hi = dividend; } else { ctx.lo = dividend / divisor; ctx.hi = dividend % divisor; } }
    ctx.set_gpr(12, ctx.hi);
    ctx.set_gpr(12, ctx.gpr[12] << 2u);
    ctx.set_gpr(13, ctx.gpr[10] + ctx.gpr[12]);
    ctx.set_gpr(12, 0u + static_cast<std::uint32_t>(1));
    ctx.set_gpr(12, ctx.gpr[12] << (ctx.gpr[7] & 31u));
    ctx.fpr[0] = std::bit_cast<float>(ctx.gpr[12]);
    ctx.fpr[1] = static_cast<float>(static_cast<std::int32_t>(ctx.fpr_bits(0)));
    ctx.fpr[0] = std::bit_cast<float>(rt.memory().aot_load32(ctx.gpr[13] + static_cast<std::uint32_t>(0)));
    { const float fs = ctx.fpr[1]; const float ft = ctx.fpr[0]; if ((std::isinf(fs) && ft == 0.0f) || (std::isinf(ft) && fs == 0.0f)) ctx.set_fpr_bits(1, 0x7FC00000u); else ctx.fpr[1] = fs * ft; }
    ctx.fpr[0] = std::bit_cast<float>(0u);
    ctx.fpr[0] = ctx.fpr[1] - ctx.fpr[0];
    ctx.set_fpr_bits(2, ctx.fpr_bits(0) & 0x7FFFFFFFu);
    ctx.fpr[0] = std::bit_cast<float>(rt.memory().aot_load32(ctx.gpr[28] + static_cast<std::uint32_t>(-32516)));
    ctx.set_fpu_condition((ctx.fpr[2] <= ctx.fpr[0]));
    // nop
    { const bool branch_taken = ctx.fpu_condition();
    // nop
      if (branch_taken) {
          goto L_089FDFA4;
      }
      goto L_089FDF8C;
    }
L_089FDF8C:
    ctx.fpr[0] = std::bit_cast<float>(ctx.gpr[14]);
    ctx.fpr[0] = static_cast<float>(static_cast<std::int32_t>(ctx.fpr_bits(0)));
    ctx.fpr[0] = ctx.fpr[0] / ctx.fpr[1];
    ctx.set_gpr(12, ctx.gpr[11] << 2u);
    ctx.set_gpr(12, ctx.gpr[5] + ctx.gpr[12]);
    rt.memory().aot_store32(ctx.gpr[12] + static_cast<std::uint32_t>(0), std::bit_cast<std::uint32_t>(ctx.fpr[0]));
    goto L_089FDFA4;
L_089FDFA4:
    ctx.set_gpr(11, ctx.gpr[11] + static_cast<std::uint32_t>(1));
    goto L_089FDFA8;
L_089FDFA8:
    ctx.set_gpr(12, ctx.gpr[11] < ctx.gpr[6] ? 1u : 0u);
    { const bool branch_taken = ctx.gpr[12] != 0u;
    // nop
      if (branch_taken) {
          goto L_089FDED4;
      }
      goto L_089FDFB4;
    }
L_089FDFB4:
    jump_target = ctx.gpr[31];
    // nop
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_089FDFBC:
    ctx.set_gpr(14, 0u + 0u);
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_089FE068;
      }
      goto L_089FDFC8;
    }
L_089FDFC8:
    ctx.set_gpr(3, ctx.gpr[14] << 1u);
    ctx.set_gpr(3, ctx.gpr[3] + ctx.gpr[14]);
    ctx.set_gpr(12, ctx.gpr[3] << 2u);
    ctx.set_gpr(3, ctx.gpr[4] + ctx.gpr[12]);
    ctx.fpr[0] = std::bit_cast<float>(rt.memory().aot_load32(ctx.gpr[3] + static_cast<std::uint32_t>(0)));
    rt.memory().aot_store32(ctx.gpr[9] + static_cast<std::uint32_t>(0), std::bit_cast<std::uint32_t>(ctx.fpr[0]));
    ctx.fpr[0] = std::bit_cast<float>(rt.memory().aot_load32(ctx.gpr[3] + static_cast<std::uint32_t>(4)));
    rt.memory().aot_store32(ctx.gpr[9] + static_cast<std::uint32_t>(4), std::bit_cast<std::uint32_t>(ctx.fpr[0]));
    ctx.fpr[0] = std::bit_cast<float>(rt.memory().aot_load32(ctx.gpr[3] + static_cast<std::uint32_t>(8)));
    rt.memory().aot_store32(ctx.gpr[9] + static_cast<std::uint32_t>(8), std::bit_cast<std::uint32_t>(ctx.fpr[0]));
    ctx.set_gpr(13, 0u + 0u);
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_089FE054;
      }
      goto L_089FDFFC;
    }
L_089FDFFC:
    ctx.set_gpr(11, ctx.gpr[13] << 2u);
    ctx.set_gpr(3, ctx.gpr[6] + ctx.gpr[11]);
    ctx.fpr[1] = std::bit_cast<float>(rt.memory().aot_load32(ctx.gpr[3] + static_cast<std::uint32_t>(0)));
    ctx.set_gpr(3, ctx.gpr[5] + ctx.gpr[11]);
    ctx.set_gpr(3, rt.memory().aot_load32(ctx.gpr[3] + static_cast<std::uint32_t>(0)));
    ctx.set_gpr(3, ctx.gpr[3] + ctx.gpr[12]);
    ctx.fpr[0] = std::bit_cast<float>(rt.memory().aot_load32(ctx.gpr[3] + static_cast<std::uint32_t>(4)));
    { const float fs = ctx.fpr[1]; const float ft = ctx.fpr[0]; if ((std::isinf(fs) && ft == 0.0f) || (std::isinf(ft) && fs == 0.0f)) ctx.set_fpr_bits(3, 0x7FC00000u); else ctx.fpr[3] = fs * ft; }
    ctx.fpr[0] = std::bit_cast<float>(rt.memory().aot_load32(ctx.gpr[3] + static_cast<std::uint32_t>(8)));
    { const float fs = ctx.fpr[1]; const float ft = ctx.fpr[0]; if ((std::isinf(fs) && ft == 0.0f) || (std::isinf(ft) && fs == 0.0f)) ctx.set_fpr_bits(2, 0x7FC00000u); else ctx.fpr[2] = fs * ft; }
    ctx.fpr[0] = std::bit_cast<float>(rt.memory().aot_load32(ctx.gpr[3] + static_cast<std::uint32_t>(0)));
    { const float fs = ctx.fpr[1]; const float ft = ctx.fpr[0]; if ((std::isinf(fs) && ft == 0.0f) || (std::isinf(ft) && fs == 0.0f)) ctx.set_fpr_bits(1, 0x7FC00000u); else ctx.fpr[1] = fs * ft; }
    ctx.fpr[0] = std::bit_cast<float>(rt.memory().aot_load32(ctx.gpr[9] + static_cast<std::uint32_t>(0)));
    ctx.fpr[0] = ctx.fpr[0] + ctx.fpr[1];
    rt.memory().aot_store32(ctx.gpr[9] + static_cast<std::uint32_t>(0), std::bit_cast<std::uint32_t>(ctx.fpr[0]));
    ctx.fpr[0] = std::bit_cast<float>(rt.memory().aot_load32(ctx.gpr[9] + static_cast<std::uint32_t>(4)));
    ctx.fpr[0] = ctx.fpr[0] + ctx.fpr[3];
    rt.memory().aot_store32(ctx.gpr[9] + static_cast<std::uint32_t>(4), std::bit_cast<std::uint32_t>(ctx.fpr[0]));
    ctx.fpr[0] = std::bit_cast<float>(rt.memory().aot_load32(ctx.gpr[9] + static_cast<std::uint32_t>(8)));
    ctx.fpr[0] = ctx.fpr[0] + ctx.fpr[2];
    rt.memory().aot_store32(ctx.gpr[9] + static_cast<std::uint32_t>(8), std::bit_cast<std::uint32_t>(ctx.fpr[0]));
    ctx.set_gpr(13, ctx.gpr[13] + static_cast<std::uint32_t>(1));
    goto L_089FE054;
L_089FE054:
    ctx.set_gpr(3, ctx.gpr[13] < ctx.gpr[8] ? 1u : 0u);
    { const bool branch_taken = ctx.gpr[3] != 0u;
    // nop
      if (branch_taken) {
          goto L_089FDFFC;
      }
      goto L_089FE060;
    }
L_089FE060:
    ctx.set_gpr(9, ctx.gpr[9] + ctx.gpr[10]);
    ctx.set_gpr(14, ctx.gpr[14] + static_cast<std::uint32_t>(1));
    goto L_089FE068;
L_089FE068:
    ctx.set_gpr(3, ctx.gpr[14] < ctx.gpr[7] ? 1u : 0u);
    { const bool branch_taken = ctx.gpr[3] != 0u;
    // nop
      if (branch_taken) {
          goto L_089FDFC8;
      }
      goto L_089FE074;
    }
L_089FE074:
    jump_target = ctx.gpr[31];
    // nop
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_089FE07C:
    ctx.set_gpr(4, 2208u << 16u);
    ctx.set_gpr(4, ctx.gpr[4] + static_cast<std::uint32_t>(-8260));
    ctx.set_gpr(3, 2246u << 16u);
    rt.memory().aot_store32(ctx.gpr[3] + static_cast<std::uint32_t>(-26640), ctx.gpr[4]);
    ctx.set_gpr(3, 2246u << 16u);
    rt.memory().aot_store32(ctx.gpr[3] + static_cast<std::uint32_t>(-26636), ctx.gpr[4]);
    jump_target = ctx.gpr[31];
    // nop
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_089FE09C:
    ctx.set_gpr(29, ctx.gpr[29] + static_cast<std::uint32_t>(-16));
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(12), ctx.gpr[31]);
    ctx.set_gpr(31, 0x089FE0ACu);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0078_entry, 78u, 216u, 0x0893CDDCu>(ctx, &aot_mem) && ctx.pc == 0x089FE0ACu) goto L_089FE0AC;
    return;
L_089FE0AC:
    ctx.set_gpr(4, rt.memory().aot_load32(ctx.gpr[2] + static_cast<std::uint32_t>(0)));
    ctx.set_gpr(31, 0x089FE0B8u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0078_entry, 78u, 199u, 0x0893CC68u>(ctx, &aot_mem) && ctx.pc == 0x089FE0B8u) goto L_089FE0B8;
    return;
L_089FE0B8:
    ctx.set_gpr(4, ctx.gpr[2] + 0u);
    ctx.set_gpr(31, 0x089FE0C4u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0124_entry, 124u, 434u, 0x089F65BCu>(ctx, &aot_mem) && ctx.pc == 0x089FE0C4u) goto L_089FE0C4;
    return;
L_089FE0C4:
    ctx.set_gpr(3, 2246u << 16u);
    rt.memory().aot_store32(ctx.gpr[3] + static_cast<std::uint32_t>(-26620), ctx.gpr[2]);
    ctx.set_gpr(31, 0x089FE0D4u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0078_entry, 78u, 216u, 0x0893CDDCu>(ctx, &aot_mem) && ctx.pc == 0x089FE0D4u) goto L_089FE0D4;
    return;
L_089FE0D4:
    ctx.set_gpr(4, rt.memory().aot_load32(ctx.gpr[2] + static_cast<std::uint32_t>(0)));
    ctx.set_gpr(31, 0x089FE0E0u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0078_entry, 78u, 199u, 0x0893CC68u>(ctx, &aot_mem) && ctx.pc == 0x089FE0E0u) goto L_089FE0E0;
    return;
L_089FE0E0:
    ctx.set_gpr(4, ctx.gpr[2] + 0u);
    ctx.set_gpr(31, 0x089FE0ECu);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0124_entry, 124u, 451u, 0x089F6740u>(ctx, &aot_mem) && ctx.pc == 0x089FE0ECu) goto L_089FE0EC;
    return;
L_089FE0EC:
    ctx.set_gpr(3, 2246u << 16u);
    rt.memory().aot_store32(ctx.gpr[3] + static_cast<std::uint32_t>(-26616), ctx.gpr[2]);
    ctx.set_gpr(31, 0x089FE0FCu);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0078_entry, 78u, 216u, 0x0893CDDCu>(ctx, &aot_mem) && ctx.pc == 0x089FE0FCu) goto L_089FE0FC;
    return;
L_089FE0FC:
    ctx.set_gpr(4, rt.memory().aot_load32(ctx.gpr[2] + static_cast<std::uint32_t>(0)));
    ctx.set_gpr(31, 0x089FE108u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0078_entry, 78u, 199u, 0x0893CC68u>(ctx, &aot_mem) && ctx.pc == 0x089FE108u) goto L_089FE108;
    return;
L_089FE108:
    ctx.set_gpr(4, ctx.gpr[2] + 0u);
    ctx.set_gpr(31, 0x089FE114u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0124_entry, 124u, 468u, 0x089F68C4u>(ctx, &aot_mem) && ctx.pc == 0x089FE114u) goto L_089FE114;
    return;
L_089FE114:
    ctx.set_gpr(3, 2246u << 16u);
    rt.memory().aot_store32(ctx.gpr[3] + static_cast<std::uint32_t>(-26612), ctx.gpr[2]);
    ctx.set_gpr(31, 0x089FE124u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0078_entry, 78u, 216u, 0x0893CDDCu>(ctx, &aot_mem) && ctx.pc == 0x089FE124u) goto L_089FE124;
    return;
L_089FE124:
    ctx.set_gpr(4, rt.memory().aot_load32(ctx.gpr[2] + static_cast<std::uint32_t>(0)));
    ctx.set_gpr(31, 0x089FE130u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0078_entry, 78u, 199u, 0x0893CC68u>(ctx, &aot_mem) && ctx.pc == 0x089FE130u) goto L_089FE130;
    return;
L_089FE130:
    ctx.set_gpr(4, ctx.gpr[2] + 0u);
    ctx.set_gpr(31, 0x089FE13Cu);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0124_entry, 124u, 485u, 0x089F6A48u>(ctx, &aot_mem) && ctx.pc == 0x089FE13Cu) goto L_089FE13C;
    return;
L_089FE13C:
    ctx.set_gpr(3, 2246u << 16u);
    rt.memory().aot_store32(ctx.gpr[3] + static_cast<std::uint32_t>(-26608), ctx.gpr[2]);
    ctx.set_gpr(31, 0x089FE14Cu);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0078_entry, 78u, 216u, 0x0893CDDCu>(ctx, &aot_mem) && ctx.pc == 0x089FE14Cu) goto L_089FE14C;
    return;
L_089FE14C:
    ctx.set_gpr(4, rt.memory().aot_load32(ctx.gpr[2] + static_cast<std::uint32_t>(0)));
    ctx.set_gpr(31, 0x089FE158u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0078_entry, 78u, 199u, 0x0893CC68u>(ctx, &aot_mem) && ctx.pc == 0x089FE158u) goto L_089FE158;
    return;
L_089FE158:
    ctx.set_gpr(4, ctx.gpr[2] + 0u);
    ctx.set_gpr(31, 0x089FE164u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0124_entry, 124u, 502u, 0x089F6BCCu>(ctx, &aot_mem) && ctx.pc == 0x089FE164u) goto L_089FE164;
    return;
L_089FE164:
    ctx.set_gpr(3, 2246u << 16u);
    rt.memory().aot_store32(ctx.gpr[3] + static_cast<std::uint32_t>(-26604), ctx.gpr[2]);
    ctx.set_gpr(31, 0x089FE174u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0078_entry, 78u, 216u, 0x0893CDDCu>(ctx, &aot_mem) && ctx.pc == 0x089FE174u) goto L_089FE174;
    return;
L_089FE174:
    ctx.set_gpr(4, rt.memory().aot_load32(ctx.gpr[2] + static_cast<std::uint32_t>(0)));
    ctx.set_gpr(31, 0x089FE180u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0078_entry, 78u, 199u, 0x0893CC68u>(ctx, &aot_mem) && ctx.pc == 0x089FE180u) goto L_089FE180;
    return;
L_089FE180:
    ctx.set_gpr(4, ctx.gpr[2] + 0u);
    ctx.set_gpr(31, 0x089FE18Cu);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0124_entry, 124u, 536u, 0x089F6ED4u>(ctx, &aot_mem) && ctx.pc == 0x089FE18Cu) goto L_089FE18C;
    return;
L_089FE18C:
    ctx.set_gpr(3, 2246u << 16u);
    rt.memory().aot_store32(ctx.gpr[3] + static_cast<std::uint32_t>(-26596), ctx.gpr[2]);
    ctx.set_gpr(31, 0x089FE19Cu);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0078_entry, 78u, 216u, 0x0893CDDCu>(ctx, &aot_mem) && ctx.pc == 0x089FE19Cu) goto L_089FE19C;
    return;
L_089FE19C:
    ctx.set_gpr(4, rt.memory().aot_load32(ctx.gpr[2] + static_cast<std::uint32_t>(0)));
    ctx.set_gpr(31, 0x089FE1A8u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0078_entry, 78u, 199u, 0x0893CC68u>(ctx, &aot_mem) && ctx.pc == 0x089FE1A8u) goto L_089FE1A8;
    return;
L_089FE1A8:
    ctx.set_gpr(4, ctx.gpr[2] + 0u);
    ctx.set_gpr(31, 0x089FE1B4u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0124_entry, 124u, 553u, 0x089F7058u>(ctx, &aot_mem) && ctx.pc == 0x089FE1B4u) goto L_089FE1B4;
    return;
L_089FE1B4:
    ctx.set_gpr(3, 2246u << 16u);
    rt.memory().aot_store32(ctx.gpr[3] + static_cast<std::uint32_t>(-26592), ctx.gpr[2]);
    ctx.set_gpr(31, 0x089FE1C4u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0078_entry, 78u, 216u, 0x0893CDDCu>(ctx, &aot_mem) && ctx.pc == 0x089FE1C4u) goto L_089FE1C4;
    return;
L_089FE1C4:
    ctx.set_gpr(4, rt.memory().aot_load32(ctx.gpr[2] + static_cast<std::uint32_t>(0)));
    ctx.set_gpr(31, 0x089FE1D0u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0078_entry, 78u, 199u, 0x0893CC68u>(ctx, &aot_mem) && ctx.pc == 0x089FE1D0u) goto L_089FE1D0;
    return;
L_089FE1D0:
    ctx.set_gpr(4, ctx.gpr[2] + 0u);
    ctx.set_gpr(31, 0x089FE1DCu);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0124_entry, 124u, 519u, 0x089F6D50u>(ctx, &aot_mem) && ctx.pc == 0x089FE1DCu) goto L_089FE1DC;
    return;
L_089FE1DC:
    ctx.set_gpr(3, 2246u << 16u);
    rt.memory().aot_store32(ctx.gpr[3] + static_cast<std::uint32_t>(-26600), ctx.gpr[2]);
    ctx.set_gpr(31, 0x089FE1ECu);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0078_entry, 78u, 216u, 0x0893CDDCu>(ctx, &aot_mem) && ctx.pc == 0x089FE1ECu) goto L_089FE1EC;
    return;
L_089FE1EC:
    ctx.set_gpr(4, rt.memory().aot_load32(ctx.gpr[2] + static_cast<std::uint32_t>(0)));
    ctx.set_gpr(31, 0x089FE1F8u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0078_entry, 78u, 199u, 0x0893CC68u>(ctx, &aot_mem) && ctx.pc == 0x089FE1F8u) goto L_089FE1F8;
    return;
L_089FE1F8:
    ctx.set_gpr(4, ctx.gpr[2] + 0u);
    ctx.set_gpr(31, 0x089FE204u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0124_entry, 124u, 570u, 0x089F71DCu>(ctx, &aot_mem) && ctx.pc == 0x089FE204u) goto L_089FE204;
    return;
L_089FE204:
    ctx.set_gpr(3, 2246u << 16u);
    rt.memory().aot_store32(ctx.gpr[3] + static_cast<std::uint32_t>(-26588), ctx.gpr[2]);
    ctx.set_gpr(31, 0x089FE214u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0078_entry, 78u, 216u, 0x0893CDDCu>(ctx, &aot_mem) && ctx.pc == 0x089FE214u) goto L_089FE214;
    return;
L_089FE214:
    ctx.set_gpr(4, rt.memory().aot_load32(ctx.gpr[2] + static_cast<std::uint32_t>(0)));
    ctx.set_gpr(31, 0x089FE220u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0078_entry, 78u, 199u, 0x0893CC68u>(ctx, &aot_mem) && ctx.pc == 0x089FE220u) goto L_089FE220;
    return;
L_089FE220:
    ctx.set_gpr(4, ctx.gpr[2] + 0u);
    ctx.set_gpr(31, 0x089FE22Cu);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0124_entry, 124u, 383u, 0x089F6130u>(ctx, &aot_mem) && ctx.pc == 0x089FE22Cu) goto L_089FE22C;
    return;
L_089FE22C:
    ctx.set_gpr(3, 2246u << 16u);
    rt.memory().aot_store32(ctx.gpr[3] + static_cast<std::uint32_t>(-26632), ctx.gpr[2]);
    ctx.set_gpr(31, 0x089FE23Cu);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0078_entry, 78u, 216u, 0x0893CDDCu>(ctx, &aot_mem) && ctx.pc == 0x089FE23Cu) goto L_089FE23C;
    return;
L_089FE23C:
    ctx.set_gpr(4, rt.memory().aot_load32(ctx.gpr[2] + static_cast<std::uint32_t>(0)));
    ctx.set_gpr(31, 0x089FE248u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0078_entry, 78u, 199u, 0x0893CC68u>(ctx, &aot_mem) && ctx.pc == 0x089FE248u) goto L_089FE248;
    return;
L_089FE248:
    ctx.set_gpr(4, ctx.gpr[2] + 0u);
    ctx.set_gpr(31, 0x089FE254u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0124_entry, 124u, 400u, 0x089F62B4u>(ctx, &aot_mem) && ctx.pc == 0x089FE254u) goto L_089FE254;
    return;
L_089FE254:
    ctx.set_gpr(3, 2246u << 16u);
    rt.memory().aot_store32(ctx.gpr[3] + static_cast<std::uint32_t>(-26628), ctx.gpr[2]);
    ctx.set_gpr(31, 0x089FE264u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0078_entry, 78u, 216u, 0x0893CDDCu>(ctx, &aot_mem) && ctx.pc == 0x089FE264u) goto L_089FE264;
    return;
L_089FE264:
    ctx.set_gpr(4, rt.memory().aot_load32(ctx.gpr[2] + static_cast<std::uint32_t>(0)));
    ctx.set_gpr(31, 0x089FE270u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0078_entry, 78u, 199u, 0x0893CC68u>(ctx, &aot_mem) && ctx.pc == 0x089FE270u) goto L_089FE270;
    return;
L_089FE270:
    ctx.set_gpr(4, ctx.gpr[2] + 0u);
    ctx.set_gpr(31, 0x089FE27Cu);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0124_entry, 124u, 417u, 0x089F6438u>(ctx, &aot_mem) && ctx.pc == 0x089FE27Cu) goto L_089FE27C;
    return;
L_089FE27C:
    ctx.set_gpr(3, 2246u << 16u);
    rt.memory().aot_store32(ctx.gpr[3] + static_cast<std::uint32_t>(-26624), ctx.gpr[2]);
    ctx.set_gpr(31, rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(12)));
    ctx.set_gpr(29, ctx.gpr[29] + static_cast<std::uint32_t>(16));
    jump_target = ctx.gpr[31];
    // nop
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_089FE294:
    ctx.set_gpr(29, ctx.gpr[29] + static_cast<std::uint32_t>(-16));
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(12), ctx.gpr[31]);
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(8), ctx.gpr[18]);
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(4), ctx.gpr[17]);
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(0), ctx.gpr[16]);
    ctx.set_gpr(16, ctx.gpr[4] + 0u);
    ctx.set_gpr(2, 2246u << 16u);
    ctx.set_gpr(18, rt.memory().aot_load32(ctx.gpr[2] + static_cast<std::uint32_t>(-26904)));
    ctx.set_gpr(5, ctx.gpr[18] + 0u);
    ctx.set_gpr(31, 0x089FE2C0u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0080_entry, 80u, 200u, 0x08944F6Cu>(ctx, &aot_mem) && ctx.pc == 0x089FE2C0u) goto L_089FE2C0;
    return;
L_089FE2C0:
    { const bool branch_taken = ctx.gpr[2] == 0u;
    // nop
      if (branch_taken) {
          goto L_089FE940;
      }
      goto L_089FE2C8;
    }
L_089FE2C8:
    { const bool branch_taken = ctx.gpr[18] == ctx.gpr[16];
    // nop
      if (branch_taken) {
          goto L_089FE940;
      }
      goto L_089FE2D0;
    }
L_089FE2D0:
    ctx.set_gpr(4, ctx.gpr[18] + 0u);
    ctx.set_gpr(31, 0x089FE2DCu);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0080_entry, 80u, 207u, 0x08944FA0u>(ctx, &aot_mem) && ctx.pc == 0x089FE2DCu) goto L_089FE2DC;
    return;
L_089FE2DC:
    ctx.set_gpr(17, ctx.gpr[2] + 0u);
    ctx.set_gpr(3, 2246u << 16u);
    ctx.set_gpr(3, rt.memory().aot_load32(ctx.gpr[3] + static_cast<std::uint32_t>(-26596)));
    ctx.set_gpr(16, rt.memory().aot_load32(ctx.gpr[3] + static_cast<std::uint32_t>(8)));
    ctx.set_gpr(1, ctx.gpr[16] < ctx.gpr[17] ? 1u : 0u);
    { const bool branch_taken = ctx.gpr[1] == 0u;
    // nop
      if (branch_taken) {
          goto L_089FE940;
      }
      goto L_089FE2F8;
    }
L_089FE2F8:
    ctx.set_gpr(4, ctx.gpr[18] + 0u);
    ctx.set_gpr(5, ctx.gpr[16] + 0u);
    ctx.set_gpr(31, 0x089FE308u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0080_entry, 80u, 211u, 0x08944FC4u>(ctx, &aot_mem) && ctx.pc == 0x089FE308u) goto L_089FE308;
    return;
L_089FE308:
    rt.memory().aot_store32(ctx.gpr[2] + static_cast<std::uint32_t>(8), ctx.gpr[16]);
    ctx.set_gpr(3, 2246u << 16u);
    ctx.set_gpr(4, rt.memory().aot_load32(ctx.gpr[3] + static_cast<std::uint32_t>(-26620)));
    { const bool branch_taken = static_cast<std::int32_t>(ctx.gpr[17]) < 0;
    // nop
      if (branch_taken) {
          goto L_089FE348;
      }
      goto L_089FE31C;
    }
L_089FE31C:
    ctx.set_gpr(3, rt.memory().aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(12)));
    ctx.set_gpr(1, static_cast<std::int32_t>(ctx.gpr[3]) < static_cast<std::int32_t>(ctx.gpr[17]) ? 1u : 0u);
    { const bool branch_taken = ctx.gpr[1] != 0u;
    // nop
      if (branch_taken) {
          goto L_089FE338;
      }
      goto L_089FE32C;
    }
L_089FE32C:
    rt.memory().aot_store32(ctx.gpr[4] + static_cast<std::uint32_t>(8), ctx.gpr[17]);
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_089FE348;
      }
      goto L_089FE338;
    }
L_089FE338:
    ctx.set_gpr(5, ctx.gpr[17] + 0u);
    ctx.set_gpr(6, 0u + static_cast<std::uint32_t>(4));
    ctx.set_gpr(31, 0x089FE348u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0066_entry, 66u, 795u, 0x0890FB1Cu>(ctx, &aot_mem) && ctx.pc == 0x089FE348u) goto L_089FE348;
    return;
L_089FE348:
    ctx.set_gpr(6, 2208u << 16u);
    ctx.set_gpr(6, ctx.gpr[6] + static_cast<std::uint32_t>(-5688));
    ctx.set_gpr(3, 2246u << 16u);
    ctx.set_gpr(5, rt.memory().aot_load32(ctx.gpr[3] + static_cast<std::uint32_t>(-26620)));
    ctx.set_gpr(3, rt.memory().aot_load32(ctx.gpr[5] + static_cast<std::uint32_t>(8)));
    { const bool branch_taken = ctx.gpr[3] == 0u;
    // nop
      if (branch_taken) {
          goto L_089FE388;
      }
      goto L_089FE364;
    }
L_089FE364:
    { const bool branch_taken = static_cast<std::int32_t>(ctx.gpr[16]) < 0;
    // nop
      if (branch_taken) {
          goto L_089FE388;
      }
      goto L_089FE36C;
    }
L_089FE36C:
    ctx.set_gpr(1, static_cast<std::int32_t>(ctx.gpr[16]) < static_cast<std::int32_t>(ctx.gpr[3]) ? 1u : 0u);
    { const bool branch_taken = ctx.gpr[1] == 0u;
    // nop
      if (branch_taken) {
          goto L_089FE388;
      }
      goto L_089FE378;
    }
L_089FE378:
    ctx.set_gpr(4, ctx.gpr[16] << 2u);
    ctx.set_gpr(3, rt.memory().aot_load32(ctx.gpr[5] + static_cast<std::uint32_t>(16)));
    ctx.set_gpr(3, ctx.gpr[3] + ctx.gpr[4]);
    rt.memory().aot_store32(ctx.gpr[3] + static_cast<std::uint32_t>(0), ctx.gpr[6]);
    goto L_089FE388;
L_089FE388:
    ctx.set_gpr(3, 2246u << 16u);
    ctx.set_gpr(4, rt.memory().aot_load32(ctx.gpr[3] + static_cast<std::uint32_t>(-26616)));
    { const bool branch_taken = static_cast<std::int32_t>(ctx.gpr[17]) < 0;
    // nop
      if (branch_taken) {
          goto L_089FE3C4;
      }
      goto L_089FE398;
    }
L_089FE398:
    ctx.set_gpr(3, rt.memory().aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(12)));
    ctx.set_gpr(1, static_cast<std::int32_t>(ctx.gpr[3]) < static_cast<std::int32_t>(ctx.gpr[17]) ? 1u : 0u);
    { const bool branch_taken = ctx.gpr[1] != 0u;
    // nop
      if (branch_taken) {
          goto L_089FE3B4;
      }
      goto L_089FE3A8;
    }
L_089FE3A8:
    rt.memory().aot_store32(ctx.gpr[4] + static_cast<std::uint32_t>(8), ctx.gpr[17]);
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_089FE3C4;
      }
      goto L_089FE3B4;
    }
L_089FE3B4:
    ctx.set_gpr(5, ctx.gpr[17] + 0u);
    ctx.set_gpr(6, 0u + static_cast<std::uint32_t>(4));
    ctx.set_gpr(31, 0x089FE3C4u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0066_entry, 66u, 795u, 0x0890FB1Cu>(ctx, &aot_mem) && ctx.pc == 0x089FE3C4u) goto L_089FE3C4;
    return;
L_089FE3C4:
    ctx.set_gpr(6, 2208u << 16u);
    ctx.set_gpr(6, ctx.gpr[6] + static_cast<std::uint32_t>(-5696));
    ctx.set_gpr(3, 2246u << 16u);
    ctx.set_gpr(5, rt.memory().aot_load32(ctx.gpr[3] + static_cast<std::uint32_t>(-26616)));
    ctx.set_gpr(3, rt.memory().aot_load32(ctx.gpr[5] + static_cast<std::uint32_t>(8)));
    { const bool branch_taken = ctx.gpr[3] == 0u;
    // nop
      if (branch_taken) {
          goto L_089FE404;
      }
      goto L_089FE3E0;
    }
L_089FE3E0:
    { const bool branch_taken = static_cast<std::int32_t>(ctx.gpr[16]) < 0;
    // nop
      if (branch_taken) {
          goto L_089FE404;
      }
      goto L_089FE3E8;
    }
L_089FE3E8:
    ctx.set_gpr(1, static_cast<std::int32_t>(ctx.gpr[16]) < static_cast<std::int32_t>(ctx.gpr[3]) ? 1u : 0u);
    { const bool branch_taken = ctx.gpr[1] == 0u;
    // nop
      if (branch_taken) {
          goto L_089FE404;
      }
      goto L_089FE3F4;
    }
L_089FE3F4:
    ctx.set_gpr(4, ctx.gpr[16] << 2u);
    ctx.set_gpr(3, rt.memory().aot_load32(ctx.gpr[5] + static_cast<std::uint32_t>(16)));
    ctx.set_gpr(3, ctx.gpr[3] + ctx.gpr[4]);
    rt.memory().aot_store32(ctx.gpr[3] + static_cast<std::uint32_t>(0), ctx.gpr[6]);
    goto L_089FE404;
L_089FE404:
    ctx.set_gpr(3, 2246u << 16u);
    ctx.set_gpr(4, rt.memory().aot_load32(ctx.gpr[3] + static_cast<std::uint32_t>(-26612)));
    { const bool branch_taken = static_cast<std::int32_t>(ctx.gpr[17]) < 0;
    // nop
      if (branch_taken) {
          goto L_089FE440;
      }
      goto L_089FE414;
    }
L_089FE414:
    ctx.set_gpr(3, rt.memory().aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(12)));
    ctx.set_gpr(1, static_cast<std::int32_t>(ctx.gpr[3]) < static_cast<std::int32_t>(ctx.gpr[17]) ? 1u : 0u);
    { const bool branch_taken = ctx.gpr[1] != 0u;
    // nop
      if (branch_taken) {
          goto L_089FE430;
      }
      goto L_089FE424;
    }
L_089FE424:
    rt.memory().aot_store32(ctx.gpr[4] + static_cast<std::uint32_t>(8), ctx.gpr[17]);
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_089FE440;
      }
      goto L_089FE430;
    }
L_089FE430:
    ctx.set_gpr(5, ctx.gpr[17] + 0u);
    ctx.set_gpr(6, 0u + static_cast<std::uint32_t>(4));
    ctx.set_gpr(31, 0x089FE440u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0066_entry, 66u, 795u, 0x0890FB1Cu>(ctx, &aot_mem) && ctx.pc == 0x089FE440u) goto L_089FE440;
    return;
L_089FE440:
    ctx.set_gpr(6, 2208u << 16u);
    ctx.set_gpr(6, ctx.gpr[6] + static_cast<std::uint32_t>(-5708));
    ctx.set_gpr(3, 2246u << 16u);
    ctx.set_gpr(5, rt.memory().aot_load32(ctx.gpr[3] + static_cast<std::uint32_t>(-26612)));
    ctx.set_gpr(3, rt.memory().aot_load32(ctx.gpr[5] + static_cast<std::uint32_t>(8)));
    { const bool branch_taken = ctx.gpr[3] == 0u;
    // nop
      if (branch_taken) {
          goto L_089FE480;
      }
      goto L_089FE45C;
    }
L_089FE45C:
    { const bool branch_taken = static_cast<std::int32_t>(ctx.gpr[16]) < 0;
    // nop
      if (branch_taken) {
          goto L_089FE480;
      }
      goto L_089FE464;
    }
L_089FE464:
    ctx.set_gpr(1, static_cast<std::int32_t>(ctx.gpr[16]) < static_cast<std::int32_t>(ctx.gpr[3]) ? 1u : 0u);
    { const bool branch_taken = ctx.gpr[1] == 0u;
    // nop
      if (branch_taken) {
          goto L_089FE480;
      }
      goto L_089FE470;
    }
L_089FE470:
    ctx.set_gpr(4, ctx.gpr[16] << 2u);
    ctx.set_gpr(3, rt.memory().aot_load32(ctx.gpr[5] + static_cast<std::uint32_t>(16)));
    ctx.set_gpr(3, ctx.gpr[3] + ctx.gpr[4]);
    rt.memory().aot_store32(ctx.gpr[3] + static_cast<std::uint32_t>(0), ctx.gpr[6]);
    goto L_089FE480;
L_089FE480:
    ctx.set_gpr(3, 2246u << 16u);
    ctx.set_gpr(4, rt.memory().aot_load32(ctx.gpr[3] + static_cast<std::uint32_t>(-26608)));
    { const bool branch_taken = static_cast<std::int32_t>(ctx.gpr[17]) < 0;
    // nop
      if (branch_taken) {
          goto L_089FE4BC;
      }
      goto L_089FE490;
    }
L_089FE490:
    ctx.set_gpr(3, rt.memory().aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(12)));
    ctx.set_gpr(1, static_cast<std::int32_t>(ctx.gpr[3]) < static_cast<std::int32_t>(ctx.gpr[17]) ? 1u : 0u);
    { const bool branch_taken = ctx.gpr[1] != 0u;
    // nop
      if (branch_taken) {
          goto L_089FE4AC;
      }
      goto L_089FE4A0;
    }
L_089FE4A0:
    rt.memory().aot_store32(ctx.gpr[4] + static_cast<std::uint32_t>(8), ctx.gpr[17]);
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_089FE4BC;
      }
      goto L_089FE4AC;
    }
L_089FE4AC:
    ctx.set_gpr(5, ctx.gpr[17] + 0u);
    ctx.set_gpr(6, 0u + static_cast<std::uint32_t>(4));
    ctx.set_gpr(31, 0x089FE4BCu);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0066_entry, 66u, 795u, 0x0890FB1Cu>(ctx, &aot_mem) && ctx.pc == 0x089FE4BCu) goto L_089FE4BC;
    return;
L_089FE4BC:
    ctx.set_gpr(6, 2208u << 16u);
    ctx.set_gpr(6, ctx.gpr[6] + static_cast<std::uint32_t>(-5716));
    ctx.set_gpr(3, 2246u << 16u);
    ctx.set_gpr(5, rt.memory().aot_load32(ctx.gpr[3] + static_cast<std::uint32_t>(-26608)));
    ctx.set_gpr(3, rt.memory().aot_load32(ctx.gpr[5] + static_cast<std::uint32_t>(8)));
    { const bool branch_taken = ctx.gpr[3] == 0u;
    // nop
      if (branch_taken) {
          goto L_089FE4FC;
      }
      goto L_089FE4D8;
    }
L_089FE4D8:
    { const bool branch_taken = static_cast<std::int32_t>(ctx.gpr[16]) < 0;
    // nop
      if (branch_taken) {
          goto L_089FE4FC;
      }
      goto L_089FE4E0;
    }
L_089FE4E0:
    ctx.set_gpr(1, static_cast<std::int32_t>(ctx.gpr[16]) < static_cast<std::int32_t>(ctx.gpr[3]) ? 1u : 0u);
    { const bool branch_taken = ctx.gpr[1] == 0u;
    // nop
      if (branch_taken) {
          goto L_089FE4FC;
      }
      goto L_089FE4EC;
    }
L_089FE4EC:
    ctx.set_gpr(4, ctx.gpr[16] << 2u);
    ctx.set_gpr(3, rt.memory().aot_load32(ctx.gpr[5] + static_cast<std::uint32_t>(16)));
    ctx.set_gpr(3, ctx.gpr[3] + ctx.gpr[4]);
    rt.memory().aot_store32(ctx.gpr[3] + static_cast<std::uint32_t>(0), ctx.gpr[6]);
    goto L_089FE4FC;
L_089FE4FC:
    ctx.set_gpr(3, 2246u << 16u);
    ctx.set_gpr(4, rt.memory().aot_load32(ctx.gpr[3] + static_cast<std::uint32_t>(-26604)));
    { const bool branch_taken = static_cast<std::int32_t>(ctx.gpr[17]) < 0;
    // nop
      if (branch_taken) {
          goto L_089FE538;
      }
      goto L_089FE50C;
    }
L_089FE50C:
    ctx.set_gpr(3, rt.memory().aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(12)));
    ctx.set_gpr(1, static_cast<std::int32_t>(ctx.gpr[3]) < static_cast<std::int32_t>(ctx.gpr[17]) ? 1u : 0u);
    { const bool branch_taken = ctx.gpr[1] != 0u;
    // nop
      if (branch_taken) {
          goto L_089FE528;
      }
      goto L_089FE51C;
    }
L_089FE51C:
    rt.memory().aot_store32(ctx.gpr[4] + static_cast<std::uint32_t>(8), ctx.gpr[17]);
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_089FE538;
      }
      goto L_089FE528;
    }
L_089FE528:
    ctx.set_gpr(5, ctx.gpr[17] + 0u);
    ctx.set_gpr(6, 0u + static_cast<std::uint32_t>(4));
    ctx.set_gpr(31, 0x089FE538u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0066_entry, 66u, 795u, 0x0890FB1Cu>(ctx, &aot_mem) && ctx.pc == 0x089FE538u) goto L_089FE538;
    return;
L_089FE538:
    ctx.set_gpr(6, 2208u << 16u);
    ctx.set_gpr(6, ctx.gpr[6] + static_cast<std::uint32_t>(-5728));
    ctx.set_gpr(3, 2246u << 16u);
    ctx.set_gpr(5, rt.memory().aot_load32(ctx.gpr[3] + static_cast<std::uint32_t>(-26604)));
    ctx.set_gpr(3, rt.memory().aot_load32(ctx.gpr[5] + static_cast<std::uint32_t>(8)));
    { const bool branch_taken = ctx.gpr[3] == 0u;
    // nop
      if (branch_taken) {
          goto L_089FE578;
      }
      goto L_089FE554;
    }
L_089FE554:
    { const bool branch_taken = static_cast<std::int32_t>(ctx.gpr[16]) < 0;
    // nop
      if (branch_taken) {
          goto L_089FE578;
      }
      goto L_089FE55C;
    }
L_089FE55C:
    ctx.set_gpr(1, static_cast<std::int32_t>(ctx.gpr[16]) < static_cast<std::int32_t>(ctx.gpr[3]) ? 1u : 0u);
    { const bool branch_taken = ctx.gpr[1] == 0u;
    // nop
      if (branch_taken) {
          goto L_089FE578;
      }
      goto L_089FE568;
    }
L_089FE568:
    ctx.set_gpr(4, ctx.gpr[16] << 2u);
    ctx.set_gpr(3, rt.memory().aot_load32(ctx.gpr[5] + static_cast<std::uint32_t>(16)));
    ctx.set_gpr(3, ctx.gpr[3] + ctx.gpr[4]);
    rt.memory().aot_store32(ctx.gpr[3] + static_cast<std::uint32_t>(0), ctx.gpr[6]);
    goto L_089FE578;
L_089FE578:
    ctx.set_gpr(3, 2246u << 16u);
    ctx.set_gpr(4, rt.memory().aot_load32(ctx.gpr[3] + static_cast<std::uint32_t>(-26600)));
    { const bool branch_taken = static_cast<std::int32_t>(ctx.gpr[17]) < 0;
    // nop
      if (branch_taken) {
          goto L_089FE5B4;
      }
      goto L_089FE588;
    }
L_089FE588:
    ctx.set_gpr(3, rt.memory().aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(12)));
    ctx.set_gpr(1, static_cast<std::int32_t>(ctx.gpr[3]) < static_cast<std::int32_t>(ctx.gpr[17]) ? 1u : 0u);
    { const bool branch_taken = ctx.gpr[1] != 0u;
    // nop
      if (branch_taken) {
          goto L_089FE5A4;
      }
      goto L_089FE598;
    }
L_089FE598:
    rt.memory().aot_store32(ctx.gpr[4] + static_cast<std::uint32_t>(8), ctx.gpr[17]);
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_089FE5B4;
      }
      goto L_089FE5A4;
    }
L_089FE5A4:
    ctx.set_gpr(5, ctx.gpr[17] + 0u);
    ctx.set_gpr(6, 0u + static_cast<std::uint32_t>(4));
    ctx.set_gpr(31, 0x089FE5B4u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0066_entry, 66u, 795u, 0x0890FB1Cu>(ctx, &aot_mem) && ctx.pc == 0x089FE5B4u) goto L_089FE5B4;
    return;
L_089FE5B4:
    ctx.set_gpr(6, 2208u << 16u);
    ctx.set_gpr(6, ctx.gpr[6] + static_cast<std::uint32_t>(-5736));
    ctx.set_gpr(3, 2246u << 16u);
    ctx.set_gpr(5, rt.memory().aot_load32(ctx.gpr[3] + static_cast<std::uint32_t>(-26600)));
    ctx.set_gpr(3, rt.memory().aot_load32(ctx.gpr[5] + static_cast<std::uint32_t>(8)));
    { const bool branch_taken = ctx.gpr[3] == 0u;
    // nop
      if (branch_taken) {
          goto L_089FE5F4;
      }
      goto L_089FE5D0;
    }
L_089FE5D0:
    { const bool branch_taken = static_cast<std::int32_t>(ctx.gpr[16]) < 0;
    // nop
      if (branch_taken) {
          goto L_089FE5F4;
      }
      goto L_089FE5D8;
    }
L_089FE5D8:
    ctx.set_gpr(1, static_cast<std::int32_t>(ctx.gpr[16]) < static_cast<std::int32_t>(ctx.gpr[3]) ? 1u : 0u);
    { const bool branch_taken = ctx.gpr[1] == 0u;
    // nop
      if (branch_taken) {
          goto L_089FE5F4;
      }
      goto L_089FE5E4;
    }
L_089FE5E4:
    ctx.set_gpr(4, ctx.gpr[16] << 2u);
    ctx.set_gpr(3, rt.memory().aot_load32(ctx.gpr[5] + static_cast<std::uint32_t>(16)));
    ctx.set_gpr(3, ctx.gpr[3] + ctx.gpr[4]);
    rt.memory().aot_store32(ctx.gpr[3] + static_cast<std::uint32_t>(0), ctx.gpr[6]);
    goto L_089FE5F4;
L_089FE5F4:
    ctx.set_gpr(3, 2246u << 16u);
    ctx.set_gpr(4, rt.memory().aot_load32(ctx.gpr[3] + static_cast<std::uint32_t>(-26596)));
    { const bool branch_taken = static_cast<std::int32_t>(ctx.gpr[17]) < 0;
    // nop
      if (branch_taken) {
          goto L_089FE630;
      }
      goto L_089FE604;
    }
L_089FE604:
    ctx.set_gpr(3, rt.memory().aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(12)));
    ctx.set_gpr(1, static_cast<std::int32_t>(ctx.gpr[3]) < static_cast<std::int32_t>(ctx.gpr[17]) ? 1u : 0u);
    { const bool branch_taken = ctx.gpr[1] != 0u;
    // nop
      if (branch_taken) {
          goto L_089FE620;
      }
      goto L_089FE614;
    }
L_089FE614:
    rt.memory().aot_store32(ctx.gpr[4] + static_cast<std::uint32_t>(8), ctx.gpr[17]);
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_089FE630;
      }
      goto L_089FE620;
    }
L_089FE620:
    ctx.set_gpr(5, ctx.gpr[17] + 0u);
    ctx.set_gpr(6, 0u + static_cast<std::uint32_t>(4));
    ctx.set_gpr(31, 0x089FE630u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0066_entry, 66u, 795u, 0x0890FB1Cu>(ctx, &aot_mem) && ctx.pc == 0x089FE630u) goto L_089FE630;
    return;
L_089FE630:
    ctx.set_gpr(6, 2208u << 16u);
    ctx.set_gpr(6, ctx.gpr[6] + static_cast<std::uint32_t>(-5744));
    ctx.set_gpr(3, 2246u << 16u);
    ctx.set_gpr(5, rt.memory().aot_load32(ctx.gpr[3] + static_cast<std::uint32_t>(-26596)));
    ctx.set_gpr(3, rt.memory().aot_load32(ctx.gpr[5] + static_cast<std::uint32_t>(8)));
    { const bool branch_taken = ctx.gpr[3] == 0u;
    // nop
      if (branch_taken) {
          goto L_089FE670;
      }
      goto L_089FE64C;
    }
L_089FE64C:
    { const bool branch_taken = static_cast<std::int32_t>(ctx.gpr[16]) < 0;
    // nop
      if (branch_taken) {
          goto L_089FE670;
      }
      goto L_089FE654;
    }
L_089FE654:
    ctx.set_gpr(1, static_cast<std::int32_t>(ctx.gpr[16]) < static_cast<std::int32_t>(ctx.gpr[3]) ? 1u : 0u);
    { const bool branch_taken = ctx.gpr[1] == 0u;
    // nop
      if (branch_taken) {
          goto L_089FE670;
      }
      goto L_089FE660;
    }
L_089FE660:
    ctx.set_gpr(4, ctx.gpr[16] << 2u);
    ctx.set_gpr(3, rt.memory().aot_load32(ctx.gpr[5] + static_cast<std::uint32_t>(16)));
    ctx.set_gpr(3, ctx.gpr[3] + ctx.gpr[4]);
    rt.memory().aot_store32(ctx.gpr[3] + static_cast<std::uint32_t>(0), ctx.gpr[6]);
    goto L_089FE670;
L_089FE670:
    ctx.set_gpr(3, 2246u << 16u);
    ctx.set_gpr(4, rt.memory().aot_load32(ctx.gpr[3] + static_cast<std::uint32_t>(-26592)));
    { const bool branch_taken = static_cast<std::int32_t>(ctx.gpr[17]) < 0;
    // nop
      if (branch_taken) {
          goto L_089FE6AC;
      }
      goto L_089FE680;
    }
L_089FE680:
    ctx.set_gpr(3, rt.memory().aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(12)));
    ctx.set_gpr(1, static_cast<std::int32_t>(ctx.gpr[3]) < static_cast<std::int32_t>(ctx.gpr[17]) ? 1u : 0u);
    { const bool branch_taken = ctx.gpr[1] != 0u;
    // nop
      if (branch_taken) {
          goto L_089FE69C;
      }
      goto L_089FE690;
    }
L_089FE690:
    rt.memory().aot_store32(ctx.gpr[4] + static_cast<std::uint32_t>(8), ctx.gpr[17]);
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_089FE6AC;
      }
      goto L_089FE69C;
    }
L_089FE69C:
    ctx.set_gpr(5, ctx.gpr[17] + 0u);
    ctx.set_gpr(6, 0u + static_cast<std::uint32_t>(4));
    ctx.set_gpr(31, 0x089FE6ACu);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0066_entry, 66u, 795u, 0x0890FB1Cu>(ctx, &aot_mem) && ctx.pc == 0x089FE6ACu) goto L_089FE6AC;
    return;
L_089FE6AC:
    ctx.set_gpr(6, 2208u << 16u);
    ctx.set_gpr(6, ctx.gpr[6] + static_cast<std::uint32_t>(-5756));
    ctx.set_gpr(3, 2246u << 16u);
    ctx.set_gpr(5, rt.memory().aot_load32(ctx.gpr[3] + static_cast<std::uint32_t>(-26592)));
    ctx.set_gpr(3, rt.memory().aot_load32(ctx.gpr[5] + static_cast<std::uint32_t>(8)));
    { const bool branch_taken = ctx.gpr[3] == 0u;
    // nop
      if (branch_taken) {
          goto L_089FE6EC;
      }
      goto L_089FE6C8;
    }
L_089FE6C8:
    { const bool branch_taken = static_cast<std::int32_t>(ctx.gpr[16]) < 0;
    // nop
      if (branch_taken) {
          goto L_089FE6EC;
      }
      goto L_089FE6D0;
    }
L_089FE6D0:
    ctx.set_gpr(1, static_cast<std::int32_t>(ctx.gpr[16]) < static_cast<std::int32_t>(ctx.gpr[3]) ? 1u : 0u);
    { const bool branch_taken = ctx.gpr[1] == 0u;
    // nop
      if (branch_taken) {
          goto L_089FE6EC;
      }
      goto L_089FE6DC;
    }
L_089FE6DC:
    ctx.set_gpr(4, ctx.gpr[16] << 2u);
    ctx.set_gpr(3, rt.memory().aot_load32(ctx.gpr[5] + static_cast<std::uint32_t>(16)));
    ctx.set_gpr(3, ctx.gpr[3] + ctx.gpr[4]);
    rt.memory().aot_store32(ctx.gpr[3] + static_cast<std::uint32_t>(0), ctx.gpr[6]);
    goto L_089FE6EC;
L_089FE6EC:
    ctx.set_gpr(3, 2246u << 16u);
    ctx.set_gpr(4, rt.memory().aot_load32(ctx.gpr[3] + static_cast<std::uint32_t>(-26588)));
    { const bool branch_taken = static_cast<std::int32_t>(ctx.gpr[17]) < 0;
    // nop
      if (branch_taken) {
          goto L_089FE728;
      }
      goto L_089FE6FC;
    }
L_089FE6FC:
    ctx.set_gpr(3, rt.memory().aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(12)));
    ctx.set_gpr(1, static_cast<std::int32_t>(ctx.gpr[3]) < static_cast<std::int32_t>(ctx.gpr[17]) ? 1u : 0u);
    { const bool branch_taken = ctx.gpr[1] != 0u;
    // nop
      if (branch_taken) {
          goto L_089FE718;
      }
      goto L_089FE70C;
    }
L_089FE70C:
    rt.memory().aot_store32(ctx.gpr[4] + static_cast<std::uint32_t>(8), ctx.gpr[17]);
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_089FE728;
      }
      goto L_089FE718;
    }
L_089FE718:
    ctx.set_gpr(5, ctx.gpr[17] + 0u);
    ctx.set_gpr(6, 0u + static_cast<std::uint32_t>(4));
    ctx.set_gpr(31, 0x089FE728u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0066_entry, 66u, 795u, 0x0890FB1Cu>(ctx, &aot_mem) && ctx.pc == 0x089FE728u) goto L_089FE728;
    return;
L_089FE728:
    ctx.set_gpr(6, 2208u << 16u);
    ctx.set_gpr(6, ctx.gpr[6] + static_cast<std::uint32_t>(-5764));
    ctx.set_gpr(3, 2246u << 16u);
    ctx.set_gpr(5, rt.memory().aot_load32(ctx.gpr[3] + static_cast<std::uint32_t>(-26588)));
    ctx.set_gpr(3, rt.memory().aot_load32(ctx.gpr[5] + static_cast<std::uint32_t>(8)));
    { const bool branch_taken = ctx.gpr[3] == 0u;
    // nop
      if (branch_taken) {
          goto L_089FE768;
      }
      goto L_089FE744;
    }
L_089FE744:
    { const bool branch_taken = static_cast<std::int32_t>(ctx.gpr[16]) < 0;
    // nop
      if (branch_taken) {
          goto L_089FE768;
      }
      goto L_089FE74C;
    }
L_089FE74C:
    ctx.set_gpr(1, static_cast<std::int32_t>(ctx.gpr[16]) < static_cast<std::int32_t>(ctx.gpr[3]) ? 1u : 0u);
    { const bool branch_taken = ctx.gpr[1] == 0u;
    // nop
      if (branch_taken) {
          goto L_089FE768;
      }
      goto L_089FE758;
    }
L_089FE758:
    ctx.set_gpr(4, ctx.gpr[16] << 2u);
    ctx.set_gpr(3, rt.memory().aot_load32(ctx.gpr[5] + static_cast<std::uint32_t>(16)));
    ctx.set_gpr(3, ctx.gpr[3] + ctx.gpr[4]);
    rt.memory().aot_store32(ctx.gpr[3] + static_cast<std::uint32_t>(0), ctx.gpr[6]);
    goto L_089FE768;
L_089FE768:
    { const std::int64_t product = static_cast<std::int64_t>(static_cast<std::int32_t>(ctx.gpr[17])) * static_cast<std::int64_t>(static_cast<std::int32_t>(ctx.gpr[17])); ctx.lo = static_cast<std::uint32_t>(product); ctx.hi = static_cast<std::uint32_t>(static_cast<std::uint64_t>(product) >> 32u); }
    ctx.set_gpr(17, ctx.lo);
    { const std::int64_t product = static_cast<std::int64_t>(static_cast<std::int32_t>(ctx.gpr[16])) * static_cast<std::int64_t>(static_cast<std::int32_t>(ctx.gpr[16])); ctx.lo = static_cast<std::uint32_t>(product); ctx.hi = static_cast<std::uint32_t>(static_cast<std::uint64_t>(product) >> 32u); }
    ctx.set_gpr(16, ctx.lo);
    ctx.set_gpr(3, 2246u << 16u);
    ctx.set_gpr(4, rt.memory().aot_load32(ctx.gpr[3] + static_cast<std::uint32_t>(-26632)));
    { const bool branch_taken = static_cast<std::int32_t>(ctx.gpr[17]) < 0;
    // nop
      if (branch_taken) {
          goto L_089FE7B4;
      }
      goto L_089FE788;
    }
L_089FE788:
    ctx.set_gpr(3, rt.memory().aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(12)));
    ctx.set_gpr(1, static_cast<std::int32_t>(ctx.gpr[3]) < static_cast<std::int32_t>(ctx.gpr[17]) ? 1u : 0u);
    { const bool branch_taken = ctx.gpr[1] != 0u;
    // nop
      if (branch_taken) {
          goto L_089FE7A4;
      }
      goto L_089FE798;
    }
L_089FE798:
    rt.memory().aot_store32(ctx.gpr[4] + static_cast<std::uint32_t>(8), ctx.gpr[17]);
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_089FE7B4;
      }
      goto L_089FE7A4;
    }
L_089FE7A4:
    ctx.set_gpr(5, ctx.gpr[17] + 0u);
    ctx.set_gpr(6, 0u + static_cast<std::uint32_t>(4));
    ctx.set_gpr(31, 0x089FE7B4u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0066_entry, 66u, 795u, 0x0890FB1Cu>(ctx, &aot_mem) && ctx.pc == 0x089FE7B4u) goto L_089FE7B4;
    return;
L_089FE7B4:
    ctx.set_gpr(3, ctx.gpr[16] + 0u);
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_089FE804;
      }
      goto L_089FE7C0;
    }
L_089FE7C0:
    ctx.set_gpr(7, 2208u << 16u);
    ctx.set_gpr(7, ctx.gpr[7] + static_cast<std::uint32_t>(-5776));
    ctx.set_gpr(4, 2246u << 16u);
    ctx.set_gpr(6, rt.memory().aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(-26632)));
    ctx.set_gpr(4, rt.memory().aot_load32(ctx.gpr[6] + static_cast<std::uint32_t>(8)));
    { const bool branch_taken = ctx.gpr[4] == 0u;
    // nop
      if (branch_taken) {
          goto L_089FE800;
      }
      goto L_089FE7DC;
    }
L_089FE7DC:
    { const bool branch_taken = static_cast<std::int32_t>(ctx.gpr[3]) < 0;
    // nop
      if (branch_taken) {
          goto L_089FE800;
      }
      goto L_089FE7E4;
    }
L_089FE7E4:
    ctx.set_gpr(1, static_cast<std::int32_t>(ctx.gpr[3]) < static_cast<std::int32_t>(ctx.gpr[4]) ? 1u : 0u);
    { const bool branch_taken = ctx.gpr[1] == 0u;
    // nop
      if (branch_taken) {
          goto L_089FE800;
      }
      goto L_089FE7F0;
    }
L_089FE7F0:
    ctx.set_gpr(5, ctx.gpr[3] << 2u);
    ctx.set_gpr(4, rt.memory().aot_load32(ctx.gpr[6] + static_cast<std::uint32_t>(16)));
    ctx.set_gpr(4, ctx.gpr[4] + ctx.gpr[5]);
    rt.memory().aot_store32(ctx.gpr[4] + static_cast<std::uint32_t>(0), ctx.gpr[7]);
    goto L_089FE800;
L_089FE800:
    ctx.set_gpr(3, ctx.gpr[3] + static_cast<std::uint32_t>(1));
    goto L_089FE804;
L_089FE804:
    ctx.set_gpr(4, ctx.gpr[3] < ctx.gpr[17] ? 1u : 0u);
    { const bool branch_taken = ctx.gpr[4] != 0u;
    // nop
      if (branch_taken) {
          goto L_089FE7C0;
      }
      goto L_089FE810;
    }
L_089FE810:
    ctx.set_gpr(3, 2246u << 16u);
    ctx.set_gpr(4, rt.memory().aot_load32(ctx.gpr[3] + static_cast<std::uint32_t>(-26628)));
    { const bool branch_taken = static_cast<std::int32_t>(ctx.gpr[17]) < 0;
    // nop
      if (branch_taken) {
          goto L_089FE84C;
      }
      goto L_089FE820;
    }
L_089FE820:
    ctx.set_gpr(3, rt.memory().aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(12)));
    ctx.set_gpr(1, static_cast<std::int32_t>(ctx.gpr[3]) < static_cast<std::int32_t>(ctx.gpr[17]) ? 1u : 0u);
    { const bool branch_taken = ctx.gpr[1] != 0u;
    // nop
      if (branch_taken) {
          goto L_089FE83C;
      }
      goto L_089FE830;
    }
L_089FE830:
    rt.memory().aot_store32(ctx.gpr[4] + static_cast<std::uint32_t>(8), ctx.gpr[17]);
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_089FE84C;
      }
      goto L_089FE83C;
    }
L_089FE83C:
    ctx.set_gpr(5, ctx.gpr[17] + 0u);
    ctx.set_gpr(6, 0u + static_cast<std::uint32_t>(4));
    ctx.set_gpr(31, 0x089FE84Cu);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0066_entry, 66u, 795u, 0x0890FB1Cu>(ctx, &aot_mem) && ctx.pc == 0x089FE84Cu) goto L_089FE84C;
    return;
L_089FE84C:
    ctx.set_gpr(3, ctx.gpr[16] + 0u);
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_089FE89C;
      }
      goto L_089FE858;
    }
L_089FE858:
    ctx.set_gpr(7, 2208u << 16u);
    ctx.set_gpr(7, ctx.gpr[7] + static_cast<std::uint32_t>(-5784));
    ctx.set_gpr(4, 2246u << 16u);
    ctx.set_gpr(6, rt.memory().aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(-26628)));
    ctx.set_gpr(4, rt.memory().aot_load32(ctx.gpr[6] + static_cast<std::uint32_t>(8)));
    { const bool branch_taken = ctx.gpr[4] == 0u;
    // nop
      if (branch_taken) {
          goto L_089FE898;
      }
      goto L_089FE874;
    }
L_089FE874:
    { const bool branch_taken = static_cast<std::int32_t>(ctx.gpr[3]) < 0;
    // nop
      if (branch_taken) {
          goto L_089FE898;
      }
      goto L_089FE87C;
    }
L_089FE87C:
    ctx.set_gpr(1, static_cast<std::int32_t>(ctx.gpr[3]) < static_cast<std::int32_t>(ctx.gpr[4]) ? 1u : 0u);
    { const bool branch_taken = ctx.gpr[1] == 0u;
    // nop
      if (branch_taken) {
          goto L_089FE898;
      }
      goto L_089FE888;
    }
L_089FE888:
    ctx.set_gpr(5, ctx.gpr[3] << 2u);
    ctx.set_gpr(4, rt.memory().aot_load32(ctx.gpr[6] + static_cast<std::uint32_t>(16)));
    ctx.set_gpr(4, ctx.gpr[4] + ctx.gpr[5]);
    rt.memory().aot_store32(ctx.gpr[4] + static_cast<std::uint32_t>(0), ctx.gpr[7]);
    goto L_089FE898;
L_089FE898:
    ctx.set_gpr(3, ctx.gpr[3] + static_cast<std::uint32_t>(1));
    goto L_089FE89C;
L_089FE89C:
    ctx.set_gpr(4, ctx.gpr[3] < ctx.gpr[17] ? 1u : 0u);
    { const bool branch_taken = ctx.gpr[4] != 0u;
    // nop
      if (branch_taken) {
          goto L_089FE858;
      }
      goto L_089FE8A8;
    }
L_089FE8A8:
    ctx.set_gpr(3, 2246u << 16u);
    ctx.set_gpr(4, rt.memory().aot_load32(ctx.gpr[3] + static_cast<std::uint32_t>(-26624)));
    { const bool branch_taken = static_cast<std::int32_t>(ctx.gpr[17]) < 0;
    // nop
      if (branch_taken) {
          goto L_089FE8E4;
      }
      goto L_089FE8B8;
    }
L_089FE8B8:
    ctx.set_gpr(3, rt.memory().aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(12)));
    ctx.set_gpr(1, static_cast<std::int32_t>(ctx.gpr[3]) < static_cast<std::int32_t>(ctx.gpr[17]) ? 1u : 0u);
    { const bool branch_taken = ctx.gpr[1] != 0u;
    // nop
      if (branch_taken) {
          goto L_089FE8D4;
      }
      goto L_089FE8C8;
    }
L_089FE8C8:
    rt.memory().aot_store32(ctx.gpr[4] + static_cast<std::uint32_t>(8), ctx.gpr[17]);
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_089FE8E4;
      }
      goto L_089FE8D4;
    }
L_089FE8D4:
    ctx.set_gpr(5, ctx.gpr[17] + 0u);
    ctx.set_gpr(6, 0u + static_cast<std::uint32_t>(4));
    ctx.set_gpr(31, 0x089FE8E4u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0066_entry, 66u, 795u, 0x0890FB1Cu>(ctx, &aot_mem) && ctx.pc == 0x089FE8E4u) goto L_089FE8E4;
    return;
L_089FE8E4:
    ctx.set_gpr(3, ctx.gpr[16] + 0u);
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_089FE934;
      }
      goto L_089FE8F0;
    }
L_089FE8F0:
    ctx.set_gpr(7, 2208u << 16u);
    ctx.set_gpr(7, ctx.gpr[7] + static_cast<std::uint32_t>(-5796));
    ctx.set_gpr(4, 2246u << 16u);
    ctx.set_gpr(6, rt.memory().aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(-26624)));
    ctx.set_gpr(4, rt.memory().aot_load32(ctx.gpr[6] + static_cast<std::uint32_t>(8)));
    { const bool branch_taken = ctx.gpr[4] == 0u;
    // nop
      if (branch_taken) {
          goto L_089FE930;
      }
      goto L_089FE90C;
    }
L_089FE90C:
    { const bool branch_taken = static_cast<std::int32_t>(ctx.gpr[3]) < 0;
    // nop
      if (branch_taken) {
          goto L_089FE930;
      }
      goto L_089FE914;
    }
L_089FE914:
    ctx.set_gpr(1, static_cast<std::int32_t>(ctx.gpr[3]) < static_cast<std::int32_t>(ctx.gpr[4]) ? 1u : 0u);
    { const bool branch_taken = ctx.gpr[1] == 0u;
    // nop
      if (branch_taken) {
          goto L_089FE930;
      }
      goto L_089FE920;
    }
L_089FE920:
    ctx.set_gpr(5, ctx.gpr[3] << 2u);
    ctx.set_gpr(4, rt.memory().aot_load32(ctx.gpr[6] + static_cast<std::uint32_t>(16)));
    ctx.set_gpr(4, ctx.gpr[4] + ctx.gpr[5]);
    rt.memory().aot_store32(ctx.gpr[4] + static_cast<std::uint32_t>(0), ctx.gpr[7]);
    goto L_089FE930;
L_089FE930:
    ctx.set_gpr(3, ctx.gpr[3] + static_cast<std::uint32_t>(1));
    goto L_089FE934;
L_089FE934:
    ctx.set_gpr(4, ctx.gpr[3] < ctx.gpr[17] ? 1u : 0u);
    { const bool branch_taken = ctx.gpr[4] != 0u;
    // nop
      if (branch_taken) {
          goto L_089FE8F0;
      }
      goto L_089FE940;
    }
L_089FE940:
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
L_089FE95C:
    ctx.set_gpr(2, 0u + 0u);
    jump_target = ctx.gpr[31];
    // nop
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_089FE968:
    jump_target = ctx.gpr[31];
    // nop
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_089FE970:
    ctx.set_gpr(2, 0u + 0u);
    jump_target = ctx.gpr[31];
    // nop
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_089FE97C:
    jump_target = ctx.gpr[31];
    // nop
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_089FE984:
    ctx.set_gpr(2, 0u + static_cast<std::uint32_t>(1));
    jump_target = ctx.gpr[31];
    // nop
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_089FE990:
    jump_target = ctx.gpr[31];
    // nop
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_089FE998:
    jump_target = ctx.gpr[31];
    // nop
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_089FE9A0:
    ctx.set_gpr(2, 0u + 0u);
    jump_target = ctx.gpr[31];
    // nop
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_089FE9AC:
    jump_target = ctx.gpr[31];
    // nop
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_089FE9B4:
    ctx.set_gpr(2, 0u + 0u);
    jump_target = ctx.gpr[31];
    // nop
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_089FE9C0:
    jump_target = ctx.gpr[31];
    // nop
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_089FE9C8:
    ctx.set_gpr(2, 0u + 0u);
    jump_target = ctx.gpr[31];
    // nop
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_089FE9D4:
    ctx.set_gpr(29, ctx.gpr[29] + static_cast<std::uint32_t>(-16));
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(12), ctx.gpr[31]);
    ctx.set_gpr(3, 2246u << 16u);
    ctx.set_gpr(4, rt.memory().aot_load32(ctx.gpr[3] + static_cast<std::uint32_t>(-26632)));
    { const bool branch_taken = ctx.gpr[4] == 0u;
    // nop
      if (branch_taken) {
          goto L_089FEA10;
      }
      goto L_089FE9EC;
    }
L_089FE9EC:
    ctx.set_gpr(3, rt.memory().aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(4)));
    ctx.set_gpr(3, ctx.gpr[3] + static_cast<std::uint32_t>(-1));
    rt.memory().aot_store32(ctx.gpr[4] + static_cast<std::uint32_t>(4), ctx.gpr[3]);
    ctx.set_gpr(3, ctx.gpr[3] << 10u);
    ctx.set_gpr(3, ctx.gpr[3] >> 10u);
    { const bool branch_taken = ctx.gpr[3] != 0u;
    // nop
      if (branch_taken) {
          goto L_089FEA10;
      }
      goto L_089FEA08;
    }
L_089FEA08:
    ctx.set_gpr(31, 0x089FEA10u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0080_entry, 80u, 556u, 0x089467C8u>(ctx, &aot_mem) && ctx.pc == 0x089FEA10u) goto L_089FEA10;
    return;
L_089FEA10:
    ctx.set_gpr(3, 2246u << 16u);
    ctx.set_gpr(4, rt.memory().aot_load32(ctx.gpr[3] + static_cast<std::uint32_t>(-26628)));
    { const bool branch_taken = ctx.gpr[4] == 0u;
    // nop
      if (branch_taken) {
          goto L_089FEA44;
      }
      goto L_089FEA20;
    }
L_089FEA20:
    ctx.set_gpr(3, rt.memory().aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(4)));
    ctx.set_gpr(3, ctx.gpr[3] + static_cast<std::uint32_t>(-1));
    rt.memory().aot_store32(ctx.gpr[4] + static_cast<std::uint32_t>(4), ctx.gpr[3]);
    ctx.set_gpr(3, ctx.gpr[3] << 10u);
    ctx.set_gpr(3, ctx.gpr[3] >> 10u);
    { const bool branch_taken = ctx.gpr[3] != 0u;
    // nop
      if (branch_taken) {
          goto L_089FEA44;
      }
      goto L_089FEA3C;
    }
L_089FEA3C:
    ctx.set_gpr(31, 0x089FEA44u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0080_entry, 80u, 556u, 0x089467C8u>(ctx, &aot_mem) && ctx.pc == 0x089FEA44u) goto L_089FEA44;
    return;
L_089FEA44:
    ctx.set_gpr(3, 2246u << 16u);
    ctx.set_gpr(4, rt.memory().aot_load32(ctx.gpr[3] + static_cast<std::uint32_t>(-26624)));
    { const bool branch_taken = ctx.gpr[4] == 0u;
    // nop
      if (branch_taken) {
          goto L_089FEA78;
      }
      goto L_089FEA54;
    }
L_089FEA54:
    ctx.set_gpr(3, rt.memory().aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(4)));
    ctx.set_gpr(3, ctx.gpr[3] + static_cast<std::uint32_t>(-1));
    rt.memory().aot_store32(ctx.gpr[4] + static_cast<std::uint32_t>(4), ctx.gpr[3]);
    ctx.set_gpr(3, ctx.gpr[3] << 10u);
    ctx.set_gpr(3, ctx.gpr[3] >> 10u);
    { const bool branch_taken = ctx.gpr[3] != 0u;
    // nop
      if (branch_taken) {
          goto L_089FEA78;
      }
      goto L_089FEA70;
    }
L_089FEA70:
    ctx.set_gpr(31, 0x089FEA78u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0080_entry, 80u, 556u, 0x089467C8u>(ctx, &aot_mem) && ctx.pc == 0x089FEA78u) goto L_089FEA78;
    return;
L_089FEA78:
    ctx.set_gpr(3, 2246u << 16u);
    ctx.set_gpr(4, rt.memory().aot_load32(ctx.gpr[3] + static_cast<std::uint32_t>(-26620)));
    { const bool branch_taken = ctx.gpr[4] == 0u;
    // nop
      if (branch_taken) {
          goto L_089FEAAC;
      }
      goto L_089FEA88;
    }
L_089FEA88:
    ctx.set_gpr(3, rt.memory().aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(4)));
    ctx.set_gpr(3, ctx.gpr[3] + static_cast<std::uint32_t>(-1));
    rt.memory().aot_store32(ctx.gpr[4] + static_cast<std::uint32_t>(4), ctx.gpr[3]);
    ctx.set_gpr(3, ctx.gpr[3] << 10u);
    ctx.set_gpr(3, ctx.gpr[3] >> 10u);
    { const bool branch_taken = ctx.gpr[3] != 0u;
    // nop
      if (branch_taken) {
          goto L_089FEAAC;
      }
      goto L_089FEAA4;
    }
L_089FEAA4:
    ctx.set_gpr(31, 0x089FEAACu);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0080_entry, 80u, 556u, 0x089467C8u>(ctx, &aot_mem) && ctx.pc == 0x089FEAACu) goto L_089FEAAC;
    return;
L_089FEAAC:
    ctx.set_gpr(3, 2246u << 16u);
    ctx.set_gpr(4, rt.memory().aot_load32(ctx.gpr[3] + static_cast<std::uint32_t>(-26616)));
    { const bool branch_taken = ctx.gpr[4] == 0u;
    // nop
      if (branch_taken) {
          goto L_089FEAE0;
      }
      goto L_089FEABC;
    }
L_089FEABC:
    ctx.set_gpr(3, rt.memory().aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(4)));
    ctx.set_gpr(3, ctx.gpr[3] + static_cast<std::uint32_t>(-1));
    rt.memory().aot_store32(ctx.gpr[4] + static_cast<std::uint32_t>(4), ctx.gpr[3]);
    ctx.set_gpr(3, ctx.gpr[3] << 10u);
    ctx.set_gpr(3, ctx.gpr[3] >> 10u);
    { const bool branch_taken = ctx.gpr[3] != 0u;
    // nop
      if (branch_taken) {
          goto L_089FEAE0;
      }
      goto L_089FEAD8;
    }
L_089FEAD8:
    ctx.set_gpr(31, 0x089FEAE0u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0080_entry, 80u, 556u, 0x089467C8u>(ctx, &aot_mem) && ctx.pc == 0x089FEAE0u) goto L_089FEAE0;
    return;
L_089FEAE0:
    ctx.set_gpr(3, 2246u << 16u);
    ctx.set_gpr(4, rt.memory().aot_load32(ctx.gpr[3] + static_cast<std::uint32_t>(-26612)));
    { const bool branch_taken = ctx.gpr[4] == 0u;
    // nop
      if (branch_taken) {
          goto L_089FEB14;
      }
      goto L_089FEAF0;
    }
L_089FEAF0:
    ctx.set_gpr(3, rt.memory().aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(4)));
    ctx.set_gpr(3, ctx.gpr[3] + static_cast<std::uint32_t>(-1));
    rt.memory().aot_store32(ctx.gpr[4] + static_cast<std::uint32_t>(4), ctx.gpr[3]);
    ctx.set_gpr(3, ctx.gpr[3] << 10u);
    ctx.set_gpr(3, ctx.gpr[3] >> 10u);
    { const bool branch_taken = ctx.gpr[3] != 0u;
    // nop
      if (branch_taken) {
          goto L_089FEB14;
      }
      goto L_089FEB0C;
    }
L_089FEB0C:
    ctx.set_gpr(31, 0x089FEB14u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0080_entry, 80u, 556u, 0x089467C8u>(ctx, &aot_mem) && ctx.pc == 0x089FEB14u) goto L_089FEB14;
    return;
L_089FEB14:
    ctx.set_gpr(3, 2246u << 16u);
    ctx.set_gpr(4, rt.memory().aot_load32(ctx.gpr[3] + static_cast<std::uint32_t>(-26608)));
    { const bool branch_taken = ctx.gpr[4] == 0u;
    // nop
      if (branch_taken) {
          goto L_089FEB48;
      }
      goto L_089FEB24;
    }
L_089FEB24:
    ctx.set_gpr(3, rt.memory().aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(4)));
    ctx.set_gpr(3, ctx.gpr[3] + static_cast<std::uint32_t>(-1));
    rt.memory().aot_store32(ctx.gpr[4] + static_cast<std::uint32_t>(4), ctx.gpr[3]);
    ctx.set_gpr(3, ctx.gpr[3] << 10u);
    ctx.set_gpr(3, ctx.gpr[3] >> 10u);
    { const bool branch_taken = ctx.gpr[3] != 0u;
    // nop
      if (branch_taken) {
          goto L_089FEB48;
      }
      goto L_089FEB40;
    }
L_089FEB40:
    ctx.set_gpr(31, 0x089FEB48u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0080_entry, 80u, 556u, 0x089467C8u>(ctx, &aot_mem) && ctx.pc == 0x089FEB48u) goto L_089FEB48;
    return;
L_089FEB48:
    ctx.set_gpr(3, 2246u << 16u);
    ctx.set_gpr(4, rt.memory().aot_load32(ctx.gpr[3] + static_cast<std::uint32_t>(-26604)));
    { const bool branch_taken = ctx.gpr[4] == 0u;
    // nop
      if (branch_taken) {
          goto L_089FEB7C;
      }
      goto L_089FEB58;
    }
L_089FEB58:
    ctx.set_gpr(3, rt.memory().aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(4)));
    ctx.set_gpr(3, ctx.gpr[3] + static_cast<std::uint32_t>(-1));
    rt.memory().aot_store32(ctx.gpr[4] + static_cast<std::uint32_t>(4), ctx.gpr[3]);
    ctx.set_gpr(3, ctx.gpr[3] << 10u);
    ctx.set_gpr(3, ctx.gpr[3] >> 10u);
    { const bool branch_taken = ctx.gpr[3] != 0u;
    // nop
      if (branch_taken) {
          goto L_089FEB7C;
      }
      goto L_089FEB74;
    }
L_089FEB74:
    ctx.set_gpr(31, 0x089FEB7Cu);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0080_entry, 80u, 556u, 0x089467C8u>(ctx, &aot_mem) && ctx.pc == 0x089FEB7Cu) goto L_089FEB7C;
    return;
L_089FEB7C:
    ctx.set_gpr(3, 2246u << 16u);
    ctx.set_gpr(4, rt.memory().aot_load32(ctx.gpr[3] + static_cast<std::uint32_t>(-26600)));
    { const bool branch_taken = ctx.gpr[4] == 0u;
    // nop
      if (branch_taken) {
          goto L_089FEBB0;
      }
      goto L_089FEB8C;
    }
L_089FEB8C:
    ctx.set_gpr(3, rt.memory().aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(4)));
    ctx.set_gpr(3, ctx.gpr[3] + static_cast<std::uint32_t>(-1));
    rt.memory().aot_store32(ctx.gpr[4] + static_cast<std::uint32_t>(4), ctx.gpr[3]);
    ctx.set_gpr(3, ctx.gpr[3] << 10u);
    ctx.set_gpr(3, ctx.gpr[3] >> 10u);
    { const bool branch_taken = ctx.gpr[3] != 0u;
    // nop
      if (branch_taken) {
          goto L_089FEBB0;
      }
      goto L_089FEBA8;
    }
L_089FEBA8:
    ctx.set_gpr(31, 0x089FEBB0u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0080_entry, 80u, 556u, 0x089467C8u>(ctx, &aot_mem) && ctx.pc == 0x089FEBB0u) goto L_089FEBB0;
    return;
L_089FEBB0:
    ctx.set_gpr(3, 2246u << 16u);
    ctx.set_gpr(4, rt.memory().aot_load32(ctx.gpr[3] + static_cast<std::uint32_t>(-26596)));
    { const bool branch_taken = ctx.gpr[4] == 0u;
    // nop
      if (branch_taken) {
          goto L_089FEBE4;
      }
      goto L_089FEBC0;
    }
L_089FEBC0:
    ctx.set_gpr(3, rt.memory().aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(4)));
    ctx.set_gpr(3, ctx.gpr[3] + static_cast<std::uint32_t>(-1));
    rt.memory().aot_store32(ctx.gpr[4] + static_cast<std::uint32_t>(4), ctx.gpr[3]);
    ctx.set_gpr(3, ctx.gpr[3] << 10u);
    ctx.set_gpr(3, ctx.gpr[3] >> 10u);
    { const bool branch_taken = ctx.gpr[3] != 0u;
    // nop
      if (branch_taken) {
          goto L_089FEBE4;
      }
      goto L_089FEBDC;
    }
L_089FEBDC:
    ctx.set_gpr(31, 0x089FEBE4u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0080_entry, 80u, 556u, 0x089467C8u>(ctx, &aot_mem) && ctx.pc == 0x089FEBE4u) goto L_089FEBE4;
    return;
L_089FEBE4:
    ctx.set_gpr(3, 2246u << 16u);
    ctx.set_gpr(4, rt.memory().aot_load32(ctx.gpr[3] + static_cast<std::uint32_t>(-26592)));
    { const bool branch_taken = ctx.gpr[4] == 0u;
    // nop
      if (branch_taken) {
          goto L_089FEC18;
      }
      goto L_089FEBF4;
    }
L_089FEBF4:
    ctx.set_gpr(3, rt.memory().aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(4)));
    ctx.set_gpr(3, ctx.gpr[3] + static_cast<std::uint32_t>(-1));
    rt.memory().aot_store32(ctx.gpr[4] + static_cast<std::uint32_t>(4), ctx.gpr[3]);
    ctx.set_gpr(3, ctx.gpr[3] << 10u);
    ctx.set_gpr(3, ctx.gpr[3] >> 10u);
    { const bool branch_taken = ctx.gpr[3] != 0u;
    // nop
      if (branch_taken) {
          goto L_089FEC18;
      }
      goto L_089FEC10;
    }
L_089FEC10:
    ctx.set_gpr(31, 0x089FEC18u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0080_entry, 80u, 556u, 0x089467C8u>(ctx, &aot_mem) && ctx.pc == 0x089FEC18u) goto L_089FEC18;
    return;
L_089FEC18:
    ctx.set_gpr(3, 2246u << 16u);
    ctx.set_gpr(4, rt.memory().aot_load32(ctx.gpr[3] + static_cast<std::uint32_t>(-26588)));
    { const bool branch_taken = ctx.gpr[4] == 0u;
    // nop
      if (branch_taken) {
          goto L_089FEC4C;
      }
      goto L_089FEC28;
    }
L_089FEC28:
    ctx.set_gpr(3, rt.memory().aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(4)));
    ctx.set_gpr(3, ctx.gpr[3] + static_cast<std::uint32_t>(-1));
    rt.memory().aot_store32(ctx.gpr[4] + static_cast<std::uint32_t>(4), ctx.gpr[3]);
    ctx.set_gpr(3, ctx.gpr[3] << 10u);
    ctx.set_gpr(3, ctx.gpr[3] >> 10u);
    { const bool branch_taken = ctx.gpr[3] != 0u;
    // nop
      if (branch_taken) {
          goto L_089FEC4C;
      }
      goto L_089FEC44;
    }
L_089FEC44:
    ctx.set_gpr(31, 0x089FEC4Cu);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0080_entry, 80u, 556u, 0x089467C8u>(ctx, &aot_mem) && ctx.pc == 0x089FEC4Cu) goto L_089FEC4C;
    return;
L_089FEC4C:
    ctx.set_gpr(31, rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(12)));
    ctx.set_gpr(29, ctx.gpr[29] + static_cast<std::uint32_t>(16));
    jump_target = ctx.gpr[31];
    // nop
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_089FEC5C:
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
    ctx.set_gpr(2, 2246u << 16u);
    ctx.set_gpr(19, rt.memory().aot_load32(ctx.gpr[2] + static_cast<std::uint32_t>(-26904)));
    ctx.set_gpr(4, ctx.gpr[19] + 0u);
    ctx.set_gpr(31, 0x089FEC98u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0080_entry, 80u, 207u, 0x08944FA0u>(ctx, &aot_mem) && ctx.pc == 0x089FEC98u) goto L_089FEC98;
    return;
L_089FEC98:
    ctx.set_gpr(18, ctx.gpr[2] + 0u);
    ctx.set_gpr(4, ctx.gpr[20] + 0u);
    ctx.set_gpr(31, 0x089FECA8u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0123_entry, 123u, 341u, 0x089F2874u>(ctx, &aot_mem) && ctx.pc == 0x089FECA8u) goto L_089FECA8;
    return;
L_089FECA8:
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(44), ctx.gpr[2]);
    ctx.set_gpr(4, ctx.gpr[2] + 0u);
    ctx.set_gpr(5, ctx.gpr[18] + 0u);
    ctx.set_gpr(31, 0x089FECBCu);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0081_entry, 81u, 312u, 0x089495E8u>(ctx, &aot_mem) && ctx.pc == 0x089FECBCu) goto L_089FECBC;
    return;
L_089FECBC:
    ctx.set_gpr(17, 0u + 0u);
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_089FED84;
      }
      goto L_089FECC8;
    }
L_089FECC8:
    ctx.set_gpr(4, ctx.gpr[19] + 0u);
    ctx.set_gpr(5, ctx.gpr[17] + 0u);
    ctx.set_gpr(31, 0x089FECD8u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0080_entry, 80u, 211u, 0x08944FC4u>(ctx, &aot_mem) && ctx.pc == 0x089FECD8u) goto L_089FECD8;
    return;
L_089FECD8:
    ctx.set_gpr(4, ctx.gpr[29] + static_cast<std::uint32_t>(36));
    ctx.set_gpr(5, ctx.gpr[2] + 0u);
    ctx.set_gpr(6, ctx.gpr[20] + 0u);
    ctx.set_gpr(31, 0x089FECECu);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0079_entry, 79u, 912u, 0x08943FF8u>(ctx, &aot_mem) && ctx.pc == 0x089FECECu) goto L_089FECEC;
    return;
L_089FECEC:
    ctx.set_gpr(3, rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(36)));
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(40), ctx.gpr[3]);
    { const bool branch_taken = ctx.gpr[3] == 0u;
    // nop
      if (branch_taken) {
          goto L_089FED08;
      }
      goto L_089FECFC;
    }
L_089FECFC:
    ctx.set_gpr(2, rt.memory().aot_load32(ctx.gpr[3] + static_cast<std::uint32_t>(4)));
    ctx.set_gpr(2, ctx.gpr[2] + static_cast<std::uint32_t>(1));
    rt.memory().aot_store32(ctx.gpr[3] + static_cast<std::uint32_t>(4), ctx.gpr[2]);
    goto L_089FED08;
L_089FED08:
    ctx.set_gpr(4, rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(36)));
    { const bool branch_taken = ctx.gpr[4] == 0u;
    // nop
      if (branch_taken) {
          goto L_089FED1C;
      }
      goto L_089FED14;
    }
L_089FED14:
    ctx.set_gpr(31, 0x089FED1Cu);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0014_entry, 14u, 257u, 0x0883D454u>(ctx, &aot_mem) && ctx.pc == 0x089FED1Cu) goto L_089FED1C;
    return;
L_089FED1C:
    ctx.set_gpr(4, rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(40)));
    ctx.set_gpr(16, rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(44)));
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(32), ctx.gpr[4]);
    { const bool branch_taken = ctx.gpr[4] == 0u;
    // nop
      if (branch_taken) {
          goto L_089FED38;
      }
      goto L_089FED30;
    }
L_089FED30:
    ctx.set_gpr(31, 0x089FED38u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0014_entry, 14u, 274u, 0x0883D588u>(ctx, &aot_mem) && ctx.pc == 0x089FED38u) goto L_089FED38;
    return;
L_089FED38:
    ctx.set_gpr(3, ctx.gpr[17] << 2u);
    ctx.set_gpr(2, rt.memory().aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(16)));
    ctx.set_gpr(2, ctx.gpr[2] + ctx.gpr[3]);
    ctx.set_gpr(4, rt.memory().aot_load32(ctx.gpr[2] + static_cast<std::uint32_t>(0)));
    { const bool branch_taken = ctx.gpr[4] == 0u;
    // nop
      if (branch_taken) {
          goto L_089FED58;
      }
      goto L_089FED50;
    }
L_089FED50:
    ctx.set_gpr(31, 0x089FED58u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0014_entry, 14u, 257u, 0x0883D454u>(ctx, &aot_mem) && ctx.pc == 0x089FED58u) goto L_089FED58;
    return;
L_089FED58:
    ctx.set_gpr(4, ctx.gpr[16] + 0u);
    ctx.set_gpr(5, ctx.gpr[17] + 0u);
    ctx.set_gpr(6, ctx.gpr[29] + static_cast<std::uint32_t>(32));
    ctx.set_gpr(31, 0x089FED6Cu);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0051_entry, 51u, 23u, 0x088D019Cu>(ctx, &aot_mem) && ctx.pc == 0x089FED6Cu) goto L_089FED6C;
    return;
L_089FED6C:
    ctx.set_gpr(4, rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(40)));
    { const bool branch_taken = ctx.gpr[4] == 0u;
    // nop
      if (branch_taken) {
          goto L_089FED80;
      }
      goto L_089FED78;
    }
L_089FED78:
    ctx.set_gpr(31, 0x089FED80u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0014_entry, 14u, 257u, 0x0883D454u>(ctx, &aot_mem) && ctx.pc == 0x089FED80u) goto L_089FED80;
    return;
L_089FED80:
    ctx.set_gpr(17, ctx.gpr[17] + static_cast<std::uint32_t>(1));
    goto L_089FED84;
L_089FED84:
    ctx.set_gpr(2, ctx.gpr[17] < ctx.gpr[18] ? 1u : 0u);
    { const bool branch_taken = ctx.gpr[2] != 0u;
    // nop
      if (branch_taken) {
          goto L_089FECC8;
      }
      goto L_089FED90;
    }
L_089FED90:
    ctx.set_gpr(3, rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(44)));
    rt.memory().aot_store32(ctx.gpr[21] + static_cast<std::uint32_t>(0), ctx.gpr[3]);
    { const bool branch_taken = ctx.gpr[3] == 0u;
    // nop
      if (branch_taken) {
          goto L_089FEDAC;
      }
      goto L_089FEDA0;
    }
L_089FEDA0:
    ctx.set_gpr(2, rt.memory().aot_load32(ctx.gpr[3] + static_cast<std::uint32_t>(4)));
    ctx.set_gpr(2, ctx.gpr[2] + static_cast<std::uint32_t>(1));
    rt.memory().aot_store32(ctx.gpr[3] + static_cast<std::uint32_t>(4), ctx.gpr[2]);
    goto L_089FEDAC;
L_089FEDAC:
    ctx.set_gpr(4, rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(44)));
    { const bool branch_taken = ctx.gpr[4] == 0u;
    // nop
      if (branch_taken) {
          goto L_089FEDC0;
      }
      goto L_089FEDB8;
    }
L_089FEDB8:
    ctx.set_gpr(31, 0x089FEDC0u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0014_entry, 14u, 257u, 0x0883D454u>(ctx, &aot_mem) && ctx.pc == 0x089FEDC0u) goto L_089FEDC0;
    return;
L_089FEDC0:
    ctx.set_gpr(2, 0u + 0u);
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
L_089FEDEC:
    ctx.set_gpr(4, rt.memory().aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(8)));
    ctx.set_gpr(3, rt.memory().aot_load32(ctx.gpr[5] + static_cast<std::uint32_t>(8)));
    ctx.set_gpr(1, ctx.gpr[4] < ctx.gpr[3] ? 1u : 0u);
    { const bool branch_taken = ctx.gpr[1] == 0u;
    // nop
      if (branch_taken) {
          goto L_089FEE18;
      }
      goto L_089FEE00;
    }
L_089FEE00:
    ctx.set_gpr(2, ctx.gpr[3] + static_cast<std::uint32_t>(2));
    { const std::int64_t product = static_cast<std::int64_t>(static_cast<std::int32_t>(ctx.gpr[3])) * static_cast<std::int64_t>(static_cast<std::int32_t>(ctx.gpr[2])); ctx.lo = static_cast<std::uint32_t>(product); ctx.hi = static_cast<std::uint32_t>(static_cast<std::uint64_t>(product) >> 32u); }
    ctx.set_gpr(2, ctx.lo);
    ctx.set_gpr(2, ctx.gpr[2] - ctx.gpr[4]);
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_089FEE24;
      }
      goto L_089FEE18;
    }
L_089FEE18:
    { const std::int64_t product = static_cast<std::int64_t>(static_cast<std::int32_t>(ctx.gpr[4])) * static_cast<std::int64_t>(static_cast<std::int32_t>(ctx.gpr[4])); ctx.lo = static_cast<std::uint32_t>(product); ctx.hi = static_cast<std::uint32_t>(static_cast<std::uint64_t>(product) >> 32u); }
    ctx.set_gpr(2, ctx.lo);
    ctx.set_gpr(2, ctx.gpr[3] + ctx.gpr[2]);
    goto L_089FEE24;
L_089FEE24:
    ctx.set_gpr(3, ctx.gpr[2] << 2u);
    ctx.set_gpr(2, 2246u << 16u);
    ctx.set_gpr(2, rt.memory().aot_load32(ctx.gpr[2] + static_cast<std::uint32_t>(-26632)));
    ctx.set_gpr(2, rt.memory().aot_load32(ctx.gpr[2] + static_cast<std::uint32_t>(16)));
    ctx.set_gpr(2, ctx.gpr[2] + ctx.gpr[3]);
    ctx.set_gpr(2, rt.memory().aot_load32(ctx.gpr[2] + static_cast<std::uint32_t>(0)));
    jump_target = ctx.gpr[31];
    // nop
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_089FEE44:
    ctx.set_gpr(4, rt.memory().aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(8)));
    ctx.set_gpr(3, rt.memory().aot_load32(ctx.gpr[5] + static_cast<std::uint32_t>(8)));
    ctx.set_gpr(1, ctx.gpr[4] < ctx.gpr[3] ? 1u : 0u);
    { const bool branch_taken = ctx.gpr[1] == 0u;
    // nop
      if (branch_taken) {
          goto L_089FEE70;
      }
      goto L_089FEE58;
    }
L_089FEE58:
    ctx.set_gpr(2, ctx.gpr[3] + static_cast<std::uint32_t>(2));
    { const std::int64_t product = static_cast<std::int64_t>(static_cast<std::int32_t>(ctx.gpr[3])) * static_cast<std::int64_t>(static_cast<std::int32_t>(ctx.gpr[2])); ctx.lo = static_cast<std::uint32_t>(product); ctx.hi = static_cast<std::uint32_t>(static_cast<std::uint64_t>(product) >> 32u); }
    ctx.set_gpr(2, ctx.lo);
    ctx.set_gpr(2, ctx.gpr[2] - ctx.gpr[4]);
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_089FEE7C;
      }
      goto L_089FEE70;
    }
L_089FEE70:
    { const std::int64_t product = static_cast<std::int64_t>(static_cast<std::int32_t>(ctx.gpr[4])) * static_cast<std::int64_t>(static_cast<std::int32_t>(ctx.gpr[4])); ctx.lo = static_cast<std::uint32_t>(product); ctx.hi = static_cast<std::uint32_t>(static_cast<std::uint64_t>(product) >> 32u); }
    ctx.set_gpr(2, ctx.lo);
    ctx.set_gpr(2, ctx.gpr[3] + ctx.gpr[2]);
    goto L_089FEE7C;
L_089FEE7C:
    ctx.set_gpr(3, ctx.gpr[2] << 2u);
    ctx.set_gpr(2, 2246u << 16u);
    ctx.set_gpr(2, rt.memory().aot_load32(ctx.gpr[2] + static_cast<std::uint32_t>(-26628)));
    ctx.set_gpr(2, rt.memory().aot_load32(ctx.gpr[2] + static_cast<std::uint32_t>(16)));
    ctx.set_gpr(2, ctx.gpr[2] + ctx.gpr[3]);
    ctx.set_gpr(2, rt.memory().aot_load32(ctx.gpr[2] + static_cast<std::uint32_t>(0)));
    jump_target = ctx.gpr[31];
    // nop
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_089FEE9C:
    ctx.set_gpr(4, rt.memory().aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(8)));
    ctx.set_gpr(3, rt.memory().aot_load32(ctx.gpr[5] + static_cast<std::uint32_t>(8)));
    ctx.set_gpr(1, ctx.gpr[4] < ctx.gpr[3] ? 1u : 0u);
    { const bool branch_taken = ctx.gpr[1] == 0u;
    // nop
      if (branch_taken) {
          goto L_089FEEC8;
      }
      goto L_089FEEB0;
    }
L_089FEEB0:
    ctx.set_gpr(2, ctx.gpr[3] + static_cast<std::uint32_t>(2));
    { const std::int64_t product = static_cast<std::int64_t>(static_cast<std::int32_t>(ctx.gpr[3])) * static_cast<std::int64_t>(static_cast<std::int32_t>(ctx.gpr[2])); ctx.lo = static_cast<std::uint32_t>(product); ctx.hi = static_cast<std::uint32_t>(static_cast<std::uint64_t>(product) >> 32u); }
    ctx.set_gpr(2, ctx.lo);
    ctx.set_gpr(2, ctx.gpr[2] - ctx.gpr[4]);
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_089FEED4;
      }
      goto L_089FEEC8;
    }
L_089FEEC8:
    { const std::int64_t product = static_cast<std::int64_t>(static_cast<std::int32_t>(ctx.gpr[4])) * static_cast<std::int64_t>(static_cast<std::int32_t>(ctx.gpr[4])); ctx.lo = static_cast<std::uint32_t>(product); ctx.hi = static_cast<std::uint32_t>(static_cast<std::uint64_t>(product) >> 32u); }
    ctx.set_gpr(2, ctx.lo);
    ctx.set_gpr(2, ctx.gpr[3] + ctx.gpr[2]);
    goto L_089FEED4;
L_089FEED4:
    ctx.set_gpr(3, ctx.gpr[2] << 2u);
    ctx.set_gpr(2, 2246u << 16u);
    ctx.set_gpr(2, rt.memory().aot_load32(ctx.gpr[2] + static_cast<std::uint32_t>(-26624)));
    ctx.set_gpr(2, rt.memory().aot_load32(ctx.gpr[2] + static_cast<std::uint32_t>(16)));
    ctx.set_gpr(2, ctx.gpr[2] + ctx.gpr[3]);
    ctx.set_gpr(2, rt.memory().aot_load32(ctx.gpr[2] + static_cast<std::uint32_t>(0)));
    jump_target = ctx.gpr[31];
    // nop
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_089FEEF4:
    ctx.set_gpr(3, rt.memory().aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(8)));
    ctx.set_gpr(2, 2246u << 16u);
    ctx.set_gpr(2, rt.memory().aot_load32(ctx.gpr[2] + static_cast<std::uint32_t>(-26620)));
    ctx.set_gpr(3, ctx.gpr[3] << 2u);
    ctx.set_gpr(2, rt.memory().aot_load32(ctx.gpr[2] + static_cast<std::uint32_t>(16)));
    ctx.set_gpr(2, ctx.gpr[2] + ctx.gpr[3]);
    ctx.set_gpr(2, rt.memory().aot_load32(ctx.gpr[2] + static_cast<std::uint32_t>(0)));
    jump_target = ctx.gpr[31];
    // nop
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_089FEF18:
    ctx.set_gpr(3, rt.memory().aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(8)));
    ctx.set_gpr(2, 2246u << 16u);
    ctx.set_gpr(2, rt.memory().aot_load32(ctx.gpr[2] + static_cast<std::uint32_t>(-26604)));
    ctx.set_gpr(3, ctx.gpr[3] << 2u);
    ctx.set_gpr(2, rt.memory().aot_load32(ctx.gpr[2] + static_cast<std::uint32_t>(16)));
    ctx.set_gpr(2, ctx.gpr[2] + ctx.gpr[3]);
    ctx.set_gpr(2, rt.memory().aot_load32(ctx.gpr[2] + static_cast<std::uint32_t>(0)));
    jump_target = ctx.gpr[31];
    // nop
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_089FEF3C:
    ctx.set_gpr(3, rt.memory().aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(8)));
    ctx.set_gpr(2, 2246u << 16u);
    ctx.set_gpr(2, rt.memory().aot_load32(ctx.gpr[2] + static_cast<std::uint32_t>(-26608)));
    ctx.set_gpr(3, ctx.gpr[3] << 2u);
    ctx.set_gpr(2, rt.memory().aot_load32(ctx.gpr[2] + static_cast<std::uint32_t>(16)));
    ctx.set_gpr(2, ctx.gpr[2] + ctx.gpr[3]);
    ctx.set_gpr(2, rt.memory().aot_load32(ctx.gpr[2] + static_cast<std::uint32_t>(0)));
    jump_target = ctx.gpr[31];
    // nop
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_089FEF60:
    ctx.set_gpr(3, rt.memory().aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(8)));
    ctx.set_gpr(2, 2246u << 16u);
    ctx.set_gpr(2, rt.memory().aot_load32(ctx.gpr[2] + static_cast<std::uint32_t>(-26600)));
    ctx.set_gpr(3, ctx.gpr[3] << 2u);
    ctx.set_gpr(2, rt.memory().aot_load32(ctx.gpr[2] + static_cast<std::uint32_t>(16)));
    ctx.set_gpr(2, ctx.gpr[2] + ctx.gpr[3]);
    ctx.set_gpr(2, rt.memory().aot_load32(ctx.gpr[2] + static_cast<std::uint32_t>(0)));
    jump_target = ctx.gpr[31];
    // nop
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_089FEF84:
    ctx.set_gpr(3, rt.memory().aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(8)));
    ctx.set_gpr(2, 2246u << 16u);
    ctx.set_gpr(2, rt.memory().aot_load32(ctx.gpr[2] + static_cast<std::uint32_t>(-26596)));
    ctx.set_gpr(3, ctx.gpr[3] << 2u);
    ctx.set_gpr(2, rt.memory().aot_load32(ctx.gpr[2] + static_cast<std::uint32_t>(16)));
    ctx.set_gpr(2, ctx.gpr[2] + ctx.gpr[3]);
    ctx.set_gpr(2, rt.memory().aot_load32(ctx.gpr[2] + static_cast<std::uint32_t>(0)));
    jump_target = ctx.gpr[31];
    // nop
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_089FEFA8:
    ctx.set_gpr(3, rt.memory().aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(8)));
    ctx.set_gpr(2, 2246u << 16u);
    ctx.set_gpr(2, rt.memory().aot_load32(ctx.gpr[2] + static_cast<std::uint32_t>(-26588)));
    ctx.set_gpr(3, ctx.gpr[3] << 2u);
    ctx.set_gpr(2, rt.memory().aot_load32(ctx.gpr[2] + static_cast<std::uint32_t>(16)));
    ctx.set_gpr(2, ctx.gpr[2] + ctx.gpr[3]);
    ctx.set_gpr(2, rt.memory().aot_load32(ctx.gpr[2] + static_cast<std::uint32_t>(0)));
    jump_target = ctx.gpr[31];
    // nop
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_089FEFCC:
    ctx.set_gpr(7, rt.memory().aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(8)));
    ctx.set_gpr(4, rt.memory().aot_load32(ctx.gpr[5] + static_cast<std::uint32_t>(8)));
    ctx.set_gpr(1, ctx.gpr[7] < ctx.gpr[4] ? 1u : 0u);
    { const bool branch_taken = ctx.gpr[1] == 0u;
    // nop
      if (branch_taken) {
          goto L_089FEFF8;
      }
      goto L_089FEFE0;
    }
L_089FEFE0:
    ctx.set_gpr(3, ctx.gpr[4] + static_cast<std::uint32_t>(2));
    { const std::int64_t product = static_cast<std::int64_t>(static_cast<std::int32_t>(ctx.gpr[4])) * static_cast<std::int64_t>(static_cast<std::int32_t>(ctx.gpr[3])); ctx.lo = static_cast<std::uint32_t>(product); ctx.hi = static_cast<std::uint32_t>(static_cast<std::uint64_t>(product) >> 32u); }
    ctx.set_gpr(3, ctx.lo);
    ctx.set_gpr(4, ctx.gpr[3] - ctx.gpr[7]);
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_089FF004;
      }
      goto L_089FEFF8;
    }
L_089FEFF8:
    { const std::int64_t product = static_cast<std::int64_t>(static_cast<std::int32_t>(ctx.gpr[7])) * static_cast<std::int64_t>(static_cast<std::int32_t>(ctx.gpr[7])); ctx.lo = static_cast<std::uint32_t>(product); ctx.hi = static_cast<std::uint32_t>(static_cast<std::uint64_t>(product) >> 32u); }
    ctx.set_gpr(3, ctx.lo);
    ctx.set_gpr(4, ctx.gpr[4] + ctx.gpr[3]);
    goto L_089FF004;
L_089FF004:
    ctx.set_gpr(3, 2246u << 16u);
    ctx.set_gpr(5, rt.memory().aot_load32(ctx.gpr[3] + static_cast<std::uint32_t>(-26632)));
    ctx.set_gpr(3, rt.memory().aot_load32(ctx.gpr[5] + static_cast<std::uint32_t>(8)));
    { const bool branch_taken = ctx.gpr[3] == 0u;
    // nop
      if (branch_taken) {
          goto L_089FF03C;
      }
      goto L_089FF018;
    }
L_089FF018:
    { const bool branch_taken = static_cast<std::int32_t>(ctx.gpr[4]) < 0;
    // nop
      if (branch_taken) {
          goto L_089FF03C;
      }
      goto L_089FF020;
    }
L_089FF020:
    ctx.set_gpr(1, static_cast<std::int32_t>(ctx.gpr[4]) < static_cast<std::int32_t>(ctx.gpr[3]) ? 1u : 0u);
    { const bool branch_taken = ctx.gpr[1] == 0u;
    // nop
      if (branch_taken) {
          goto L_089FF03C;
      }
      goto L_089FF02C;
    }
L_089FF02C:
    ctx.set_gpr(4, ctx.gpr[4] << 2u);
    ctx.set_gpr(3, rt.memory().aot_load32(ctx.gpr[5] + static_cast<std::uint32_t>(16)));
    ctx.set_gpr(3, ctx.gpr[3] + ctx.gpr[4]);
    rt.memory().aot_store32(ctx.gpr[3] + static_cast<std::uint32_t>(0), ctx.gpr[6]);
    goto L_089FF03C;
L_089FF03C:
    jump_target = ctx.gpr[31];
    // nop
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_089FF044:
    ctx.set_gpr(7, rt.memory().aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(8)));
    ctx.set_gpr(4, rt.memory().aot_load32(ctx.gpr[5] + static_cast<std::uint32_t>(8)));
    ctx.set_gpr(1, ctx.gpr[7] < ctx.gpr[4] ? 1u : 0u);
    { const bool branch_taken = ctx.gpr[1] == 0u;
    // nop
      if (branch_taken) {
          goto L_089FF070;
      }
      goto L_089FF058;
    }
L_089FF058:
    ctx.set_gpr(3, ctx.gpr[4] + static_cast<std::uint32_t>(2));
    { const std::int64_t product = static_cast<std::int64_t>(static_cast<std::int32_t>(ctx.gpr[4])) * static_cast<std::int64_t>(static_cast<std::int32_t>(ctx.gpr[3])); ctx.lo = static_cast<std::uint32_t>(product); ctx.hi = static_cast<std::uint32_t>(static_cast<std::uint64_t>(product) >> 32u); }
    ctx.set_gpr(3, ctx.lo);
    ctx.set_gpr(4, ctx.gpr[3] - ctx.gpr[7]);
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_089FF07C;
      }
      goto L_089FF070;
    }
L_089FF070:
    { const std::int64_t product = static_cast<std::int64_t>(static_cast<std::int32_t>(ctx.gpr[7])) * static_cast<std::int64_t>(static_cast<std::int32_t>(ctx.gpr[7])); ctx.lo = static_cast<std::uint32_t>(product); ctx.hi = static_cast<std::uint32_t>(static_cast<std::uint64_t>(product) >> 32u); }
    ctx.set_gpr(3, ctx.lo);
    ctx.set_gpr(4, ctx.gpr[4] + ctx.gpr[3]);
    goto L_089FF07C;
L_089FF07C:
    ctx.set_gpr(3, 2246u << 16u);
    ctx.set_gpr(5, rt.memory().aot_load32(ctx.gpr[3] + static_cast<std::uint32_t>(-26628)));
    ctx.set_gpr(3, rt.memory().aot_load32(ctx.gpr[5] + static_cast<std::uint32_t>(8)));
    { const bool branch_taken = ctx.gpr[3] == 0u;
    // nop
      if (branch_taken) {
          goto L_089FF0B4;
      }
      goto L_089FF090;
    }
L_089FF090:
    { const bool branch_taken = static_cast<std::int32_t>(ctx.gpr[4]) < 0;
    // nop
      if (branch_taken) {
          goto L_089FF0B4;
      }
      goto L_089FF098;
    }
L_089FF098:
    ctx.set_gpr(1, static_cast<std::int32_t>(ctx.gpr[4]) < static_cast<std::int32_t>(ctx.gpr[3]) ? 1u : 0u);
    { const bool branch_taken = ctx.gpr[1] == 0u;
    // nop
      if (branch_taken) {
          goto L_089FF0B4;
      }
      goto L_089FF0A4;
    }
L_089FF0A4:
    ctx.set_gpr(4, ctx.gpr[4] << 2u);
    ctx.set_gpr(3, rt.memory().aot_load32(ctx.gpr[5] + static_cast<std::uint32_t>(16)));
    ctx.set_gpr(3, ctx.gpr[3] + ctx.gpr[4]);
    rt.memory().aot_store32(ctx.gpr[3] + static_cast<std::uint32_t>(0), ctx.gpr[6]);
    goto L_089FF0B4;
L_089FF0B4:
    jump_target = ctx.gpr[31];
    // nop
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_089FF0BC:
    ctx.set_gpr(7, rt.memory().aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(8)));
    ctx.set_gpr(4, rt.memory().aot_load32(ctx.gpr[5] + static_cast<std::uint32_t>(8)));
    ctx.set_gpr(1, ctx.gpr[7] < ctx.gpr[4] ? 1u : 0u);
    { const bool branch_taken = ctx.gpr[1] == 0u;
    // nop
      if (branch_taken) {
          goto L_089FF0E8;
      }
      goto L_089FF0D0;
    }
L_089FF0D0:
    ctx.set_gpr(3, ctx.gpr[4] + static_cast<std::uint32_t>(2));
    { const std::int64_t product = static_cast<std::int64_t>(static_cast<std::int32_t>(ctx.gpr[4])) * static_cast<std::int64_t>(static_cast<std::int32_t>(ctx.gpr[3])); ctx.lo = static_cast<std::uint32_t>(product); ctx.hi = static_cast<std::uint32_t>(static_cast<std::uint64_t>(product) >> 32u); }
    ctx.set_gpr(3, ctx.lo);
    ctx.set_gpr(4, ctx.gpr[3] - ctx.gpr[7]);
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_089FF0F4;
      }
      goto L_089FF0E8;
    }
L_089FF0E8:
    { const std::int64_t product = static_cast<std::int64_t>(static_cast<std::int32_t>(ctx.gpr[7])) * static_cast<std::int64_t>(static_cast<std::int32_t>(ctx.gpr[7])); ctx.lo = static_cast<std::uint32_t>(product); ctx.hi = static_cast<std::uint32_t>(static_cast<std::uint64_t>(product) >> 32u); }
    ctx.set_gpr(3, ctx.lo);
    ctx.set_gpr(4, ctx.gpr[4] + ctx.gpr[3]);
    goto L_089FF0F4;
L_089FF0F4:
    ctx.set_gpr(3, 2246u << 16u);
    ctx.set_gpr(5, rt.memory().aot_load32(ctx.gpr[3] + static_cast<std::uint32_t>(-26624)));
    ctx.set_gpr(3, rt.memory().aot_load32(ctx.gpr[5] + static_cast<std::uint32_t>(8)));
    { const bool branch_taken = ctx.gpr[3] == 0u;
    // nop
      if (branch_taken) {
          goto L_089FF12C;
      }
      goto L_089FF108;
    }
L_089FF108:
    { const bool branch_taken = static_cast<std::int32_t>(ctx.gpr[4]) < 0;
    // nop
      if (branch_taken) {
          goto L_089FF12C;
      }
      goto L_089FF110;
    }
L_089FF110:
    ctx.set_gpr(1, static_cast<std::int32_t>(ctx.gpr[4]) < static_cast<std::int32_t>(ctx.gpr[3]) ? 1u : 0u);
    { const bool branch_taken = ctx.gpr[1] == 0u;
    // nop
      if (branch_taken) {
          goto L_089FF12C;
      }
      goto L_089FF11C;
    }
L_089FF11C:
    ctx.set_gpr(4, ctx.gpr[4] << 2u);
    ctx.set_gpr(3, rt.memory().aot_load32(ctx.gpr[5] + static_cast<std::uint32_t>(16)));
    ctx.set_gpr(3, ctx.gpr[3] + ctx.gpr[4]);
    rt.memory().aot_store32(ctx.gpr[3] + static_cast<std::uint32_t>(0), ctx.gpr[6]);
    goto L_089FF12C;
L_089FF12C:
    jump_target = ctx.gpr[31];
    // nop
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_089FF134:
    ctx.set_gpr(4, rt.memory().aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(8)));
    ctx.set_gpr(3, 2246u << 16u);
    ctx.set_gpr(6, rt.memory().aot_load32(ctx.gpr[3] + static_cast<std::uint32_t>(-26620)));
    ctx.set_gpr(3, rt.memory().aot_load32(ctx.gpr[6] + static_cast<std::uint32_t>(8)));
    { const bool branch_taken = ctx.gpr[3] == 0u;
    // nop
      if (branch_taken) {
          goto L_089FF170;
      }
      goto L_089FF14C;
    }
L_089FF14C:
    { const bool branch_taken = static_cast<std::int32_t>(ctx.gpr[4]) < 0;
    // nop
      if (branch_taken) {
          goto L_089FF170;
      }
      goto L_089FF154;
    }
L_089FF154:
    ctx.set_gpr(1, static_cast<std::int32_t>(ctx.gpr[4]) < static_cast<std::int32_t>(ctx.gpr[3]) ? 1u : 0u);
    { const bool branch_taken = ctx.gpr[1] == 0u;
    // nop
      if (branch_taken) {
          goto L_089FF170;
      }
      goto L_089FF160;
    }
L_089FF160:
    ctx.set_gpr(4, ctx.gpr[4] << 2u);
    ctx.set_gpr(3, rt.memory().aot_load32(ctx.gpr[6] + static_cast<std::uint32_t>(16)));
    ctx.set_gpr(3, ctx.gpr[3] + ctx.gpr[4]);
    rt.memory().aot_store32(ctx.gpr[3] + static_cast<std::uint32_t>(0), ctx.gpr[5]);
    goto L_089FF170;
L_089FF170:
    jump_target = ctx.gpr[31];
    // nop
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_089FF178:
    ctx.set_gpr(4, rt.memory().aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(8)));
    ctx.set_gpr(3, 2246u << 16u);
    ctx.set_gpr(6, rt.memory().aot_load32(ctx.gpr[3] + static_cast<std::uint32_t>(-26616)));
    ctx.set_gpr(3, rt.memory().aot_load32(ctx.gpr[6] + static_cast<std::uint32_t>(8)));
    { const bool branch_taken = ctx.gpr[3] == 0u;
    // nop
      if (branch_taken) {
          goto L_089FF1B4;
      }
      goto L_089FF190;
    }
L_089FF190:
    { const bool branch_taken = static_cast<std::int32_t>(ctx.gpr[4]) < 0;
    // nop
      if (branch_taken) {
          goto L_089FF1B4;
      }
      goto L_089FF198;
    }
L_089FF198:
    ctx.set_gpr(1, static_cast<std::int32_t>(ctx.gpr[4]) < static_cast<std::int32_t>(ctx.gpr[3]) ? 1u : 0u);
    { const bool branch_taken = ctx.gpr[1] == 0u;
    // nop
      if (branch_taken) {
          goto L_089FF1B4;
      }
      goto L_089FF1A4;
    }
L_089FF1A4:
    ctx.set_gpr(4, ctx.gpr[4] << 2u);
    ctx.set_gpr(3, rt.memory().aot_load32(ctx.gpr[6] + static_cast<std::uint32_t>(16)));
    ctx.set_gpr(3, ctx.gpr[3] + ctx.gpr[4]);
    rt.memory().aot_store32(ctx.gpr[3] + static_cast<std::uint32_t>(0), ctx.gpr[5]);
    goto L_089FF1B4;
L_089FF1B4:
    jump_target = ctx.gpr[31];
    // nop
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_089FF1BC:
    ctx.set_gpr(4, rt.memory().aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(8)));
    ctx.set_gpr(3, 2246u << 16u);
    ctx.set_gpr(6, rt.memory().aot_load32(ctx.gpr[3] + static_cast<std::uint32_t>(-26612)));
    ctx.set_gpr(3, rt.memory().aot_load32(ctx.gpr[6] + static_cast<std::uint32_t>(8)));
    { const bool branch_taken = ctx.gpr[3] == 0u;
    // nop
      if (branch_taken) {
          goto L_089FF1F8;
      }
      goto L_089FF1D4;
    }
L_089FF1D4:
    { const bool branch_taken = static_cast<std::int32_t>(ctx.gpr[4]) < 0;
    // nop
      if (branch_taken) {
          goto L_089FF1F8;
      }
      goto L_089FF1DC;
    }
L_089FF1DC:
    ctx.set_gpr(1, static_cast<std::int32_t>(ctx.gpr[4]) < static_cast<std::int32_t>(ctx.gpr[3]) ? 1u : 0u);
    { const bool branch_taken = ctx.gpr[1] == 0u;
    // nop
      if (branch_taken) {
          goto L_089FF1F8;
      }
      goto L_089FF1E8;
    }
L_089FF1E8:
    ctx.set_gpr(4, ctx.gpr[4] << 2u);
    ctx.set_gpr(3, rt.memory().aot_load32(ctx.gpr[6] + static_cast<std::uint32_t>(16)));
    ctx.set_gpr(3, ctx.gpr[3] + ctx.gpr[4]);
    rt.memory().aot_store32(ctx.gpr[3] + static_cast<std::uint32_t>(0), ctx.gpr[5]);
    goto L_089FF1F8;
L_089FF1F8:
    jump_target = ctx.gpr[31];
    // nop
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_089FF200:
    ctx.set_gpr(4, rt.memory().aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(8)));
    ctx.set_gpr(3, 2246u << 16u);
    ctx.set_gpr(6, rt.memory().aot_load32(ctx.gpr[3] + static_cast<std::uint32_t>(-26608)));
    ctx.set_gpr(3, rt.memory().aot_load32(ctx.gpr[6] + static_cast<std::uint32_t>(8)));
    { const bool branch_taken = ctx.gpr[3] == 0u;
    // nop
      if (branch_taken) {
          goto L_089FF23C;
      }
      goto L_089FF218;
    }
L_089FF218:
    { const bool branch_taken = static_cast<std::int32_t>(ctx.gpr[4]) < 0;
    // nop
      if (branch_taken) {
          goto L_089FF23C;
      }
      goto L_089FF220;
    }
L_089FF220:
    ctx.set_gpr(1, static_cast<std::int32_t>(ctx.gpr[4]) < static_cast<std::int32_t>(ctx.gpr[3]) ? 1u : 0u);
    { const bool branch_taken = ctx.gpr[1] == 0u;
    // nop
      if (branch_taken) {
          goto L_089FF23C;
      }
      goto L_089FF22C;
    }
L_089FF22C:
    ctx.set_gpr(4, ctx.gpr[4] << 2u);
    ctx.set_gpr(3, rt.memory().aot_load32(ctx.gpr[6] + static_cast<std::uint32_t>(16)));
    ctx.set_gpr(3, ctx.gpr[3] + ctx.gpr[4]);
    rt.memory().aot_store32(ctx.gpr[3] + static_cast<std::uint32_t>(0), ctx.gpr[5]);
    goto L_089FF23C;
L_089FF23C:
    jump_target = ctx.gpr[31];
    // nop
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_089FF244:
    ctx.set_gpr(4, rt.memory().aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(8)));
    ctx.set_gpr(3, 2246u << 16u);
    ctx.set_gpr(6, rt.memory().aot_load32(ctx.gpr[3] + static_cast<std::uint32_t>(-26604)));
    ctx.set_gpr(3, rt.memory().aot_load32(ctx.gpr[6] + static_cast<std::uint32_t>(8)));
    { const bool branch_taken = ctx.gpr[3] == 0u;
    // nop
      if (branch_taken) {
          goto L_089FF280;
      }
      goto L_089FF25C;
    }
L_089FF25C:
    { const bool branch_taken = static_cast<std::int32_t>(ctx.gpr[4]) < 0;
    // nop
      if (branch_taken) {
          goto L_089FF280;
      }
      goto L_089FF264;
    }
L_089FF264:
    ctx.set_gpr(1, static_cast<std::int32_t>(ctx.gpr[4]) < static_cast<std::int32_t>(ctx.gpr[3]) ? 1u : 0u);
    { const bool branch_taken = ctx.gpr[1] == 0u;
    // nop
      if (branch_taken) {
          goto L_089FF280;
      }
      goto L_089FF270;
    }
L_089FF270:
    ctx.set_gpr(4, ctx.gpr[4] << 2u);
    ctx.set_gpr(3, rt.memory().aot_load32(ctx.gpr[6] + static_cast<std::uint32_t>(16)));
    ctx.set_gpr(3, ctx.gpr[3] + ctx.gpr[4]);
    rt.memory().aot_store32(ctx.gpr[3] + static_cast<std::uint32_t>(0), ctx.gpr[5]);
    goto L_089FF280;
L_089FF280:
    jump_target = ctx.gpr[31];
    // nop
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_089FF288:
    ctx.set_gpr(4, rt.memory().aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(8)));
    ctx.set_gpr(3, 2246u << 16u);
    ctx.set_gpr(6, rt.memory().aot_load32(ctx.gpr[3] + static_cast<std::uint32_t>(-26600)));
    ctx.set_gpr(3, rt.memory().aot_load32(ctx.gpr[6] + static_cast<std::uint32_t>(8)));
    { const bool branch_taken = ctx.gpr[3] == 0u;
    // nop
      if (branch_taken) {
          goto L_089FF2C4;
      }
      goto L_089FF2A0;
    }
L_089FF2A0:
    { const bool branch_taken = static_cast<std::int32_t>(ctx.gpr[4]) < 0;
    // nop
      if (branch_taken) {
          goto L_089FF2C4;
      }
      goto L_089FF2A8;
    }
L_089FF2A8:
    ctx.set_gpr(1, static_cast<std::int32_t>(ctx.gpr[4]) < static_cast<std::int32_t>(ctx.gpr[3]) ? 1u : 0u);
    { const bool branch_taken = ctx.gpr[1] == 0u;
    // nop
      if (branch_taken) {
          goto L_089FF2C4;
      }
      goto L_089FF2B4;
    }
L_089FF2B4:
    ctx.set_gpr(4, ctx.gpr[4] << 2u);
    ctx.set_gpr(3, rt.memory().aot_load32(ctx.gpr[6] + static_cast<std::uint32_t>(16)));
    ctx.set_gpr(3, ctx.gpr[3] + ctx.gpr[4]);
    rt.memory().aot_store32(ctx.gpr[3] + static_cast<std::uint32_t>(0), ctx.gpr[5]);
    goto L_089FF2C4;
L_089FF2C4:
    jump_target = ctx.gpr[31];
    // nop
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_089FF2CC:
    ctx.set_gpr(4, rt.memory().aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(8)));
    ctx.set_gpr(3, 2246u << 16u);
    ctx.set_gpr(6, rt.memory().aot_load32(ctx.gpr[3] + static_cast<std::uint32_t>(-26596)));
    ctx.set_gpr(3, rt.memory().aot_load32(ctx.gpr[6] + static_cast<std::uint32_t>(8)));
    { const bool branch_taken = ctx.gpr[3] == 0u;
    // nop
      if (branch_taken) {
          goto L_089FF308;
      }
      goto L_089FF2E4;
    }
L_089FF2E4:
    { const bool branch_taken = static_cast<std::int32_t>(ctx.gpr[4]) < 0;
    // nop
      if (branch_taken) {
          goto L_089FF308;
      }
      goto L_089FF2EC;
    }
L_089FF2EC:
    ctx.set_gpr(1, static_cast<std::int32_t>(ctx.gpr[4]) < static_cast<std::int32_t>(ctx.gpr[3]) ? 1u : 0u);
    { const bool branch_taken = ctx.gpr[1] == 0u;
    // nop
      if (branch_taken) {
          goto L_089FF308;
      }
      goto L_089FF2F8;
    }
L_089FF2F8:
    ctx.set_gpr(4, ctx.gpr[4] << 2u);
    ctx.set_gpr(3, rt.memory().aot_load32(ctx.gpr[6] + static_cast<std::uint32_t>(16)));
    ctx.set_gpr(3, ctx.gpr[3] + ctx.gpr[4]);
    rt.memory().aot_store32(ctx.gpr[3] + static_cast<std::uint32_t>(0), ctx.gpr[5]);
    goto L_089FF308;
L_089FF308:
    jump_target = ctx.gpr[31];
    // nop
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_089FF310:
    ctx.set_gpr(4, rt.memory().aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(8)));
    ctx.set_gpr(3, 2246u << 16u);
    ctx.set_gpr(6, rt.memory().aot_load32(ctx.gpr[3] + static_cast<std::uint32_t>(-26592)));
    ctx.set_gpr(3, rt.memory().aot_load32(ctx.gpr[6] + static_cast<std::uint32_t>(8)));
    { const bool branch_taken = ctx.gpr[3] == 0u;
    // nop
      if (branch_taken) {
          goto L_089FF34C;
      }
      goto L_089FF328;
    }
L_089FF328:
    { const bool branch_taken = static_cast<std::int32_t>(ctx.gpr[4]) < 0;
    // nop
      if (branch_taken) {
          goto L_089FF34C;
      }
      goto L_089FF330;
    }
L_089FF330:
    ctx.set_gpr(1, static_cast<std::int32_t>(ctx.gpr[4]) < static_cast<std::int32_t>(ctx.gpr[3]) ? 1u : 0u);
    { const bool branch_taken = ctx.gpr[1] == 0u;
    // nop
      if (branch_taken) {
          goto L_089FF34C;
      }
      goto L_089FF33C;
    }
L_089FF33C:
    ctx.set_gpr(4, ctx.gpr[4] << 2u);
    ctx.set_gpr(3, rt.memory().aot_load32(ctx.gpr[6] + static_cast<std::uint32_t>(16)));
    ctx.set_gpr(3, ctx.gpr[3] + ctx.gpr[4]);
    rt.memory().aot_store32(ctx.gpr[3] + static_cast<std::uint32_t>(0), ctx.gpr[5]);
    goto L_089FF34C;
L_089FF34C:
    jump_target = ctx.gpr[31];
    // nop
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_089FF354:
    ctx.set_gpr(4, rt.memory().aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(8)));
    ctx.set_gpr(3, 2246u << 16u);
    ctx.set_gpr(6, rt.memory().aot_load32(ctx.gpr[3] + static_cast<std::uint32_t>(-26588)));
    ctx.set_gpr(3, rt.memory().aot_load32(ctx.gpr[6] + static_cast<std::uint32_t>(8)));
    { const bool branch_taken = ctx.gpr[3] == 0u;
    // nop
      if (branch_taken) {
          goto L_089FF390;
      }
      goto L_089FF36C;
    }
L_089FF36C:
    { const bool branch_taken = static_cast<std::int32_t>(ctx.gpr[4]) < 0;
    // nop
      if (branch_taken) {
          goto L_089FF390;
      }
      goto L_089FF374;
    }
L_089FF374:
    ctx.set_gpr(1, static_cast<std::int32_t>(ctx.gpr[4]) < static_cast<std::int32_t>(ctx.gpr[3]) ? 1u : 0u);
    { const bool branch_taken = ctx.gpr[1] == 0u;
    // nop
      if (branch_taken) {
          goto L_089FF390;
      }
      goto L_089FF380;
    }
L_089FF380:
    ctx.set_gpr(4, ctx.gpr[4] << 2u);
    ctx.set_gpr(3, rt.memory().aot_load32(ctx.gpr[6] + static_cast<std::uint32_t>(16)));
    ctx.set_gpr(3, ctx.gpr[3] + ctx.gpr[4]);
    rt.memory().aot_store32(ctx.gpr[3] + static_cast<std::uint32_t>(0), ctx.gpr[5]);
    goto L_089FF390;
L_089FF390:
    jump_target = ctx.gpr[31];
    // nop
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_089FF398:
    ctx.set_gpr(29, ctx.gpr[29] + static_cast<std::uint32_t>(-16));
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(12), ctx.gpr[31]);
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(8), ctx.gpr[18]);
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(4), ctx.gpr[17]);
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(0), ctx.gpr[16]);
    ctx.set_gpr(18, ctx.gpr[4] + 0u);
    ctx.set_gpr(17, ctx.gpr[5] + 0u);
    ctx.set_gpr(25, rt.memory().aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(0)));
    ctx.set_gpr(25, rt.memory().aot_load32(ctx.gpr[25] + static_cast<std::uint32_t>(88)));
    jump_target = ctx.gpr[25];
    ctx.set_gpr(31, 0x089FF3C4u);
    // nop
    ctx.pc = jump_target;
    if (rt.invoke_chained_call(ctx, &aot_mem) && ctx.pc == 0x089FF3C4u) goto L_089FF3C4;
    return;
L_089FF3C4:
    ctx.set_gpr(16, ctx.gpr[2] + 0u);
    ctx.set_gpr(4, ctx.gpr[17] + 0u);
    ctx.set_gpr(25, rt.memory().aot_load32(ctx.gpr[17] + static_cast<std::uint32_t>(0)));
    ctx.set_gpr(25, rt.memory().aot_load32(ctx.gpr[25] + static_cast<std::uint32_t>(88)));
    jump_target = ctx.gpr[25];
    ctx.set_gpr(31, 0x089FF3DCu);
    // nop
    ctx.pc = jump_target;
    if (rt.invoke_chained_call(ctx, &aot_mem) && ctx.pc == 0x089FF3DCu) goto L_089FF3DC;
    return;
L_089FF3DC:
    ctx.set_gpr(4, ctx.gpr[16] + 0u);
    ctx.set_gpr(5, ctx.gpr[2] + 0u);
    ctx.set_gpr(31, 0x089FF3ECu);
    // nop
    goto L_089FEE9C;
L_089FF3EC:
    ctx.set_gpr(4, ctx.gpr[18] + 0u);
    ctx.set_gpr(5, ctx.gpr[17] + 0u);
    jump_target = ctx.gpr[2];
    ctx.set_gpr(31, 0x089FF3FCu);
    // nop
    ctx.pc = jump_target;
    if (rt.invoke_chained_call(ctx, &aot_mem) && ctx.pc == 0x089FF3FCu) goto L_089FF3FC;
    return;
L_089FF3FC:
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
L_089FF418:
    ctx.set_gpr(29, ctx.gpr[29] + static_cast<std::uint32_t>(-16));
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(12), ctx.gpr[31]);
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(8), ctx.gpr[17]);
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(4), ctx.gpr[16]);
    ctx.set_gpr(17, ctx.gpr[4] + 0u);
    ctx.set_gpr(16, ctx.gpr[5] + 0u);
    ctx.set_gpr(25, rt.memory().aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(0)));
    ctx.set_gpr(25, rt.memory().aot_load32(ctx.gpr[25] + static_cast<std::uint32_t>(88)));
    jump_target = ctx.gpr[25];
    ctx.set_gpr(31, 0x089FF440u);
    // nop
    ctx.pc = jump_target;
    if (rt.invoke_chained_call(ctx, &aot_mem) && ctx.pc == 0x089FF440u) goto L_089FF440;
    return;
L_089FF440:
    ctx.set_gpr(4, ctx.gpr[2] + 0u);
    ctx.set_gpr(31, 0x089FF44Cu);
    // nop
    goto L_089FEF18;
L_089FF44C:
    ctx.set_gpr(4, ctx.gpr[17] + 0u);
    ctx.set_gpr(5, ctx.gpr[16] + 0u);
    jump_target = ctx.gpr[2];
    ctx.set_gpr(31, 0x089FF45Cu);
    // nop
    ctx.pc = jump_target;
    if (rt.invoke_chained_call(ctx, &aot_mem) && ctx.pc == 0x089FF45Cu) goto L_089FF45C;
    return;
L_089FF45C:
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
L_089FF474:
    ctx.set_gpr(29, ctx.gpr[29] + static_cast<std::uint32_t>(-16));
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(12), ctx.gpr[31]);
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(8), ctx.gpr[18]);
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(4), ctx.gpr[17]);
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(0), ctx.gpr[16]);
    ctx.set_gpr(18, ctx.gpr[4] + 0u);
    ctx.set_gpr(17, ctx.gpr[5] + 0u);
    ctx.set_gpr(25, rt.memory().aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(0)));
    ctx.set_gpr(25, rt.memory().aot_load32(ctx.gpr[25] + static_cast<std::uint32_t>(88)));
    jump_target = ctx.gpr[25];
    ctx.set_gpr(31, 0x089FF4A0u);
    // nop
    ctx.pc = jump_target;
    if (rt.invoke_chained_call(ctx, &aot_mem) && ctx.pc == 0x089FF4A0u) goto L_089FF4A0;
    return;
L_089FF4A0:
    ctx.set_gpr(16, ctx.gpr[2] + 0u);
    ctx.set_gpr(4, ctx.gpr[17] + 0u);
    ctx.set_gpr(25, rt.memory().aot_load32(ctx.gpr[17] + static_cast<std::uint32_t>(0)));
    ctx.set_gpr(25, rt.memory().aot_load32(ctx.gpr[25] + static_cast<std::uint32_t>(88)));
    jump_target = ctx.gpr[25];
    ctx.set_gpr(31, 0x089FF4B8u);
    // nop
    ctx.pc = jump_target;
    if (rt.invoke_chained_call(ctx, &aot_mem) && ctx.pc == 0x089FF4B8u) goto L_089FF4B8;
    return;
L_089FF4B8:
    ctx.set_gpr(4, ctx.gpr[16] + 0u);
    ctx.set_gpr(5, ctx.gpr[2] + 0u);
    ctx.set_gpr(31, 0x089FF4C8u);
    // nop
    goto L_089FEDEC;
L_089FF4C8:
    ctx.set_gpr(4, ctx.gpr[18] + 0u);
    ctx.set_gpr(5, ctx.gpr[17] + 0u);
    jump_target = ctx.gpr[2];
    ctx.set_gpr(31, 0x089FF4D8u);
    // nop
    ctx.pc = jump_target;
    if (rt.invoke_chained_call(ctx, &aot_mem) && ctx.pc == 0x089FF4D8u) goto L_089FF4D8;
    return;
L_089FF4D8:
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
L_089FF4F4:
    ctx.set_gpr(29, ctx.gpr[29] + static_cast<std::uint32_t>(-16));
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(12), ctx.gpr[31]);
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(8), ctx.gpr[17]);
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(4), ctx.gpr[16]);
    ctx.set_gpr(17, ctx.gpr[4] + 0u);
    ctx.set_gpr(16, ctx.gpr[5] + 0u);
    ctx.set_gpr(25, rt.memory().aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(0)));
    ctx.set_gpr(25, rt.memory().aot_load32(ctx.gpr[25] + static_cast<std::uint32_t>(88)));
    jump_target = ctx.gpr[25];
    ctx.set_gpr(31, 0x089FF51Cu);
    // nop
    ctx.pc = jump_target;
    if (rt.invoke_chained_call(ctx, &aot_mem) && ctx.pc == 0x089FF51Cu) goto L_089FF51C;
    return;
L_089FF51C:
    ctx.set_gpr(4, ctx.gpr[2] + 0u);
    ctx.set_gpr(31, 0x089FF528u);
    // nop
    goto L_089FEEF4;
L_089FF528:
    ctx.set_gpr(4, ctx.gpr[17] + 0u);
    ctx.set_gpr(5, ctx.gpr[16] + 0u);
    jump_target = ctx.gpr[2];
    ctx.set_gpr(31, 0x089FF538u);
    // nop
    ctx.pc = jump_target;
    if (rt.invoke_chained_call(ctx, &aot_mem) && ctx.pc == 0x089FF538u) goto L_089FF538;
    return;
L_089FF538:
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
L_089FF550:
    ctx.set_gpr(29, ctx.gpr[29] + static_cast<std::uint32_t>(-16));
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(12), ctx.gpr[31]);
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(8), ctx.gpr[18]);
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(4), ctx.gpr[17]);
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(0), ctx.gpr[16]);
    ctx.set_gpr(18, ctx.gpr[4] + 0u);
    ctx.set_gpr(17, ctx.gpr[5] + 0u);
    ctx.set_gpr(25, rt.memory().aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(0)));
    ctx.set_gpr(25, rt.memory().aot_load32(ctx.gpr[25] + static_cast<std::uint32_t>(88)));
    jump_target = ctx.gpr[25];
    ctx.set_gpr(31, 0x089FF57Cu);
    // nop
    ctx.pc = jump_target;
    if (rt.invoke_chained_call(ctx, &aot_mem) && ctx.pc == 0x089FF57Cu) goto L_089FF57C;
    return;
L_089FF57C:
    ctx.set_gpr(16, ctx.gpr[2] + 0u);
    ctx.set_gpr(4, ctx.gpr[17] + 0u);
    ctx.set_gpr(25, rt.memory().aot_load32(ctx.gpr[17] + static_cast<std::uint32_t>(0)));
    ctx.set_gpr(25, rt.memory().aot_load32(ctx.gpr[25] + static_cast<std::uint32_t>(88)));
    jump_target = ctx.gpr[25];
    ctx.set_gpr(31, 0x089FF594u);
    // nop
    ctx.pc = jump_target;
    if (rt.invoke_chained_call(ctx, &aot_mem) && ctx.pc == 0x089FF594u) goto L_089FF594;
    return;
L_089FF594:
    ctx.set_gpr(4, ctx.gpr[16] + 0u);
    ctx.set_gpr(5, ctx.gpr[2] + 0u);
    ctx.set_gpr(31, 0x089FF5A4u);
    // nop
    goto L_089FEE44;
L_089FF5A4:
    ctx.set_gpr(4, ctx.gpr[18] + 0u);
    ctx.set_gpr(5, ctx.gpr[17] + 0u);
    jump_target = ctx.gpr[2];
    ctx.set_gpr(31, 0x089FF5B4u);
    // nop
    ctx.pc = jump_target;
    if (rt.invoke_chained_call(ctx, &aot_mem) && ctx.pc == 0x089FF5B4u) goto L_089FF5B4;
    return;
L_089FF5B4:
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
L_089FF5D0:
    ctx.set_gpr(29, ctx.gpr[29] + static_cast<std::uint32_t>(-16));
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(12), ctx.gpr[31]);
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(8), ctx.gpr[17]);
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(4), ctx.gpr[16]);
    ctx.set_gpr(17, ctx.gpr[4] + 0u);
    ctx.set_gpr(16, ctx.gpr[5] + 0u);
    ctx.set_gpr(25, rt.memory().aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(0)));
    ctx.set_gpr(25, rt.memory().aot_load32(ctx.gpr[25] + static_cast<std::uint32_t>(88)));
    jump_target = ctx.gpr[25];
    ctx.set_gpr(31, 0x089FF5F8u);
    // nop
    ctx.pc = jump_target;
    if (rt.invoke_chained_call(ctx, &aot_mem) && ctx.pc == 0x089FF5F8u) goto L_089FF5F8;
    return;
L_089FF5F8:
    ctx.set_gpr(4, ctx.gpr[2] + 0u);
    ctx.set_gpr(31, 0x089FF604u);
    // nop
    goto L_089FEF3C;
L_089FF604:
    ctx.set_gpr(4, ctx.gpr[17] + 0u);
    ctx.set_gpr(5, ctx.gpr[16] + 0u);
    jump_target = ctx.gpr[2];
    ctx.set_gpr(31, 0x089FF614u);
    // nop
    ctx.pc = jump_target;
    if (rt.invoke_chained_call(ctx, &aot_mem) && ctx.pc == 0x089FF614u) goto L_089FF614;
    return;
L_089FF614:
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
L_089FF62C:
    ctx.set_gpr(29, ctx.gpr[29] + static_cast<std::uint32_t>(-32));
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(28), ctx.gpr[31]);
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(24), ctx.gpr[20]);
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(20), ctx.gpr[19]);
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(16), ctx.gpr[18]);
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(12), ctx.gpr[17]);
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(8), ctx.gpr[16]);
    ctx.set_gpr(20, ctx.gpr[4] + 0u);
    ctx.set_gpr(19, ctx.gpr[5] + 0u);
    ctx.set_gpr(18, ctx.gpr[6] + 0u);
    ctx.set_gpr(25, rt.memory().aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(0)));
    ctx.set_gpr(25, rt.memory().aot_load32(ctx.gpr[25] + static_cast<std::uint32_t>(88)));
    jump_target = ctx.gpr[25];
    ctx.set_gpr(31, 0x089FF664u);
    // nop
    ctx.pc = jump_target;
    if (rt.invoke_chained_call(ctx, &aot_mem) && ctx.pc == 0x089FF664u) goto L_089FF664;
    return;
L_089FF664:
    ctx.set_gpr(4, ctx.gpr[2] + 0u);
    ctx.set_gpr(31, 0x089FF670u);
    // nop
    goto L_089FEF3C;
L_089FF670:
    ctx.set_gpr(16, ctx.gpr[2] + 0u);
    ctx.set_gpr(17, 0u + 0u);
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_089FF6A0;
      }
      goto L_089FF680;
    }
L_089FF680:
    ctx.set_gpr(2, ctx.gpr[17] << 1u);
    ctx.set_gpr(2, ctx.gpr[2] + ctx.gpr[17]);
    ctx.set_gpr(2, ctx.gpr[2] << 2u);
    ctx.set_gpr(5, ctx.gpr[19] + ctx.gpr[2]);
    ctx.set_gpr(4, ctx.gpr[20] + 0u);
    jump_target = ctx.gpr[16];
    ctx.set_gpr(31, 0x089FF69Cu);
    // nop
    ctx.pc = jump_target;
    if (rt.invoke_chained_call(ctx, &aot_mem) && ctx.pc == 0x089FF69Cu) goto L_089FF69C;
    return;
L_089FF69C:
    ctx.set_gpr(17, ctx.gpr[17] + static_cast<std::uint32_t>(1));
    goto L_089FF6A0;
L_089FF6A0:
    ctx.set_gpr(3, static_cast<std::int32_t>(ctx.gpr[17]) < static_cast<std::int32_t>(ctx.gpr[18]) ? 1u : 0u);
    { const bool branch_taken = ctx.gpr[3] != 0u;
    // nop
      if (branch_taken) {
          goto L_089FF680;
      }
      goto L_089FF6AC;
    }
L_089FF6AC:
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
L_089FF6D0:
    ctx.set_gpr(29, ctx.gpr[29] + static_cast<std::uint32_t>(-16));
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(12), ctx.gpr[31]);
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(8), ctx.gpr[17]);
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(4), ctx.gpr[16]);
    ctx.set_gpr(17, ctx.gpr[4] + 0u);
    ctx.set_gpr(16, ctx.gpr[5] + 0u);
    ctx.set_gpr(25, rt.memory().aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(0)));
    ctx.set_gpr(25, rt.memory().aot_load32(ctx.gpr[25] + static_cast<std::uint32_t>(88)));
    jump_target = ctx.gpr[25];
    ctx.set_gpr(31, 0x089FF6F8u);
    // nop
    ctx.pc = jump_target;
    if (rt.invoke_chained_call(ctx, &aot_mem) && ctx.pc == 0x089FF6F8u) goto L_089FF6F8;
    return;
L_089FF6F8:
    ctx.set_gpr(4, ctx.gpr[2] + 0u);
    ctx.set_gpr(31, 0x089FF704u);
    // nop
    goto L_089FEF60;
L_089FF704:
    ctx.set_gpr(4, ctx.gpr[17] + 0u);
    ctx.set_gpr(5, ctx.gpr[16] + 0u);
    jump_target = ctx.gpr[2];
    ctx.set_gpr(31, 0x089FF714u);
    // nop
    ctx.pc = jump_target;
    if (rt.invoke_chained_call(ctx, &aot_mem) && ctx.pc == 0x089FF714u) goto L_089FF714;
    return;
L_089FF714:
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
L_089FF72C:
    ctx.set_gpr(29, ctx.gpr[29] + static_cast<std::uint32_t>(-16));
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(12), ctx.gpr[31]);
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(8), ctx.gpr[16]);
    ctx.set_gpr(16, ctx.gpr[4] + 0u);
    ctx.set_gpr(25, rt.memory().aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(0)));
    ctx.set_gpr(25, rt.memory().aot_load32(ctx.gpr[25] + static_cast<std::uint32_t>(88)));
    jump_target = ctx.gpr[25];
    ctx.set_gpr(31, 0x089FF74Cu);
    // nop
    ctx.pc = jump_target;
    if (rt.invoke_chained_call(ctx, &aot_mem) && ctx.pc == 0x089FF74Cu) goto L_089FF74C;
    return;
L_089FF74C:
    ctx.set_gpr(4, ctx.gpr[2] + 0u);
    ctx.set_gpr(31, 0x089FF758u);
    // nop
    goto L_089FEF84;
L_089FF758:
    ctx.set_gpr(4, ctx.gpr[16] + 0u);
    jump_target = ctx.gpr[2];
    ctx.set_gpr(31, 0x089FF764u);
    // nop
    ctx.pc = jump_target;
    if (rt.invoke_chained_call(ctx, &aot_mem) && ctx.pc == 0x089FF764u) goto L_089FF764;
    return;
L_089FF764:
    ctx.set_gpr(31, rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(12)));
    ctx.set_gpr(16, rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(8)));
    ctx.set_gpr(29, ctx.gpr[29] + static_cast<std::uint32_t>(16));
    jump_target = ctx.gpr[31];
    // nop
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_089FF778:
    ctx.set_gpr(29, ctx.gpr[29] + static_cast<std::uint32_t>(-16));
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(12), ctx.gpr[31]);
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(8), ctx.gpr[17]);
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(4), ctx.gpr[16]);
    ctx.set_gpr(17, ctx.gpr[4] + 0u);
    ctx.set_gpr(16, ctx.gpr[5] + 0u);
    ctx.set_gpr(25, rt.memory().aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(0)));
    ctx.set_gpr(25, rt.memory().aot_load32(ctx.gpr[25] + static_cast<std::uint32_t>(88)));
    jump_target = ctx.gpr[25];
    ctx.set_gpr(31, 0x089FF7A0u);
    // nop
    ctx.pc = jump_target;
    if (rt.invoke_chained_call(ctx, &aot_mem) && ctx.pc == 0x089FF7A0u) goto L_089FF7A0;
    return;
L_089FF7A0:
    ctx.set_gpr(4, ctx.gpr[2] + 0u);
    ctx.set_gpr(31, 0x089FF7ACu);
    // nop
    goto L_089FEFA8;
L_089FF7AC:
    ctx.set_gpr(4, ctx.gpr[17] + 0u);
    ctx.set_gpr(5, ctx.gpr[16] + 0u);
    jump_target = ctx.gpr[2];
    ctx.set_gpr(31, 0x089FF7BCu);
    // nop
    ctx.pc = jump_target;
    if (rt.invoke_chained_call(ctx, &aot_mem) && ctx.pc == 0x089FF7BCu) goto L_089FF7BC;
    return;
L_089FF7BC:
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
L_089FF7D4:
    ctx.set_gpr(3, 16368u << 16u);
    rt.memory().aot_store32(ctx.gpr[4] + static_cast<std::uint32_t>(0), 0u);
    rt.memory().aot_store32(ctx.gpr[4] + static_cast<std::uint32_t>(4), ctx.gpr[3]);
    rt.memory().aot_store32(ctx.gpr[4] + static_cast<std::uint32_t>(8), 0u);
    rt.memory().aot_store32(ctx.gpr[4] + static_cast<std::uint32_t>(12), 0u);
    rt.memory().aot_store32(ctx.gpr[4] + static_cast<std::uint32_t>(16), 0u);
    rt.memory().aot_store32(ctx.gpr[4] + static_cast<std::uint32_t>(20), 0u);
    rt.memory().aot_store32(ctx.gpr[4] + static_cast<std::uint32_t>(24), 0u);
    rt.memory().aot_store32(ctx.gpr[4] + static_cast<std::uint32_t>(28), 0u);
    rt.memory().aot_store32(ctx.gpr[4] + static_cast<std::uint32_t>(32), 0u);
    rt.memory().aot_store32(ctx.gpr[4] + static_cast<std::uint32_t>(36), 0u);
    rt.memory().aot_store32(ctx.gpr[4] + static_cast<std::uint32_t>(40), 0u);
    rt.memory().aot_store32(ctx.gpr[4] + static_cast<std::uint32_t>(44), ctx.gpr[3]);
    rt.memory().aot_store32(ctx.gpr[4] + static_cast<std::uint32_t>(48), 0u);
    rt.memory().aot_store32(ctx.gpr[4] + static_cast<std::uint32_t>(52), 0u);
    rt.memory().aot_store32(ctx.gpr[4] + static_cast<std::uint32_t>(56), 0u);
    rt.memory().aot_store32(ctx.gpr[4] + static_cast<std::uint32_t>(60), 0u);
    rt.memory().aot_store32(ctx.gpr[4] + static_cast<std::uint32_t>(64), 0u);
    rt.memory().aot_store32(ctx.gpr[4] + static_cast<std::uint32_t>(68), 0u);
    rt.memory().aot_store32(ctx.gpr[4] + static_cast<std::uint32_t>(72), 0u);
    rt.memory().aot_store32(ctx.gpr[4] + static_cast<std::uint32_t>(76), 0u);
    rt.memory().aot_store32(ctx.gpr[4] + static_cast<std::uint32_t>(80), 0u);
    rt.memory().aot_store32(ctx.gpr[4] + static_cast<std::uint32_t>(84), ctx.gpr[3]);
    rt.memory().aot_store32(ctx.gpr[4] + static_cast<std::uint32_t>(88), 0u);
    rt.memory().aot_store32(ctx.gpr[4] + static_cast<std::uint32_t>(92), 0u);
    rt.memory().aot_store32(ctx.gpr[4] + static_cast<std::uint32_t>(96), 0u);
    rt.memory().aot_store32(ctx.gpr[4] + static_cast<std::uint32_t>(100), 0u);
    rt.memory().aot_store32(ctx.gpr[4] + static_cast<std::uint32_t>(104), 0u);
    rt.memory().aot_store32(ctx.gpr[4] + static_cast<std::uint32_t>(108), 0u);
    rt.memory().aot_store32(ctx.gpr[4] + static_cast<std::uint32_t>(112), 0u);
    rt.memory().aot_store32(ctx.gpr[4] + static_cast<std::uint32_t>(116), 0u);
    rt.memory().aot_store32(ctx.gpr[4] + static_cast<std::uint32_t>(120), 0u);
    rt.memory().aot_store32(ctx.gpr[4] + static_cast<std::uint32_t>(124), ctx.gpr[3]);
    jump_target = ctx.gpr[31];
    // nop
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_089FF860:
    jump_target = ctx.gpr[31];
    // nop
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_089FF868:
    ctx.set_gpr(3, 16256u << 16u);
    rt.memory().aot_store32(ctx.gpr[4] + static_cast<std::uint32_t>(0), ctx.gpr[3]);
    rt.memory().aot_store32(ctx.gpr[4] + static_cast<std::uint32_t>(4), 0u);
    rt.memory().aot_store32(ctx.gpr[4] + static_cast<std::uint32_t>(8), 0u);
    rt.memory().aot_store32(ctx.gpr[4] + static_cast<std::uint32_t>(12), 0u);
    rt.memory().aot_store32(ctx.gpr[4] + static_cast<std::uint32_t>(16), 0u);
    rt.memory().aot_store32(ctx.gpr[4] + static_cast<std::uint32_t>(20), ctx.gpr[3]);
    rt.memory().aot_store32(ctx.gpr[4] + static_cast<std::uint32_t>(24), 0u);
    rt.memory().aot_store32(ctx.gpr[4] + static_cast<std::uint32_t>(28), 0u);
    rt.memory().aot_store32(ctx.gpr[4] + static_cast<std::uint32_t>(32), 0u);
    rt.memory().aot_store32(ctx.gpr[4] + static_cast<std::uint32_t>(36), 0u);
    rt.memory().aot_store32(ctx.gpr[4] + static_cast<std::uint32_t>(40), ctx.gpr[3]);
    rt.memory().aot_store32(ctx.gpr[4] + static_cast<std::uint32_t>(44), 0u);
    rt.memory().aot_store32(ctx.gpr[4] + static_cast<std::uint32_t>(48), 0u);
    rt.memory().aot_store32(ctx.gpr[4] + static_cast<std::uint32_t>(52), 0u);
    rt.memory().aot_store32(ctx.gpr[4] + static_cast<std::uint32_t>(56), 0u);
    rt.memory().aot_store32(ctx.gpr[4] + static_cast<std::uint32_t>(60), ctx.gpr[3]);
    jump_target = ctx.gpr[31];
    // nop
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_089FF8B4:
    ctx.fpr[0] = std::bit_cast<float>(rt.memory().aot_load32(ctx.gpr[5] + static_cast<std::uint32_t>(0)));
    rt.memory().aot_store32(ctx.gpr[4] + static_cast<std::uint32_t>(0), std::bit_cast<std::uint32_t>(ctx.fpr[0]));
    ctx.fpr[0] = std::bit_cast<float>(rt.memory().aot_load32(ctx.gpr[5] + static_cast<std::uint32_t>(16)));
    rt.memory().aot_store32(ctx.gpr[4] + static_cast<std::uint32_t>(4), std::bit_cast<std::uint32_t>(ctx.fpr[0]));
    ctx.fpr[0] = std::bit_cast<float>(rt.memory().aot_load32(ctx.gpr[5] + static_cast<std::uint32_t>(32)));
    rt.memory().aot_store32(ctx.gpr[4] + static_cast<std::uint32_t>(8), std::bit_cast<std::uint32_t>(ctx.fpr[0]));
    ctx.fpr[0] = std::bit_cast<float>(rt.memory().aot_load32(ctx.gpr[5] + static_cast<std::uint32_t>(48)));
    rt.memory().aot_store32(ctx.gpr[4] + static_cast<std::uint32_t>(12), std::bit_cast<std::uint32_t>(ctx.fpr[0]));
    ctx.fpr[0] = std::bit_cast<float>(rt.memory().aot_load32(ctx.gpr[5] + static_cast<std::uint32_t>(4)));
    rt.memory().aot_store32(ctx.gpr[4] + static_cast<std::uint32_t>(16), std::bit_cast<std::uint32_t>(ctx.fpr[0]));
    ctx.fpr[0] = std::bit_cast<float>(rt.memory().aot_load32(ctx.gpr[5] + static_cast<std::uint32_t>(20)));
    rt.memory().aot_store32(ctx.gpr[4] + static_cast<std::uint32_t>(20), std::bit_cast<std::uint32_t>(ctx.fpr[0]));
    ctx.fpr[0] = std::bit_cast<float>(rt.memory().aot_load32(ctx.gpr[5] + static_cast<std::uint32_t>(36)));
    rt.memory().aot_store32(ctx.gpr[4] + static_cast<std::uint32_t>(24), std::bit_cast<std::uint32_t>(ctx.fpr[0]));
    ctx.fpr[0] = std::bit_cast<float>(rt.memory().aot_load32(ctx.gpr[5] + static_cast<std::uint32_t>(52)));
    rt.memory().aot_store32(ctx.gpr[4] + static_cast<std::uint32_t>(28), std::bit_cast<std::uint32_t>(ctx.fpr[0]));
    ctx.fpr[0] = std::bit_cast<float>(rt.memory().aot_load32(ctx.gpr[5] + static_cast<std::uint32_t>(8)));
    rt.memory().aot_store32(ctx.gpr[4] + static_cast<std::uint32_t>(32), std::bit_cast<std::uint32_t>(ctx.fpr[0]));
    ctx.fpr[0] = std::bit_cast<float>(rt.memory().aot_load32(ctx.gpr[5] + static_cast<std::uint32_t>(24)));
    rt.memory().aot_store32(ctx.gpr[4] + static_cast<std::uint32_t>(36), std::bit_cast<std::uint32_t>(ctx.fpr[0]));
    ctx.fpr[0] = std::bit_cast<float>(rt.memory().aot_load32(ctx.gpr[5] + static_cast<std::uint32_t>(40)));
    rt.memory().aot_store32(ctx.gpr[4] + static_cast<std::uint32_t>(40), std::bit_cast<std::uint32_t>(ctx.fpr[0]));
    ctx.fpr[0] = std::bit_cast<float>(rt.memory().aot_load32(ctx.gpr[5] + static_cast<std::uint32_t>(56)));
    rt.memory().aot_store32(ctx.gpr[4] + static_cast<std::uint32_t>(44), std::bit_cast<std::uint32_t>(ctx.fpr[0]));
    ctx.fpr[0] = std::bit_cast<float>(rt.memory().aot_load32(ctx.gpr[5] + static_cast<std::uint32_t>(12)));
    rt.memory().aot_store32(ctx.gpr[4] + static_cast<std::uint32_t>(48), std::bit_cast<std::uint32_t>(ctx.fpr[0]));
    ctx.fpr[0] = std::bit_cast<float>(rt.memory().aot_load32(ctx.gpr[5] + static_cast<std::uint32_t>(28)));
    rt.memory().aot_store32(ctx.gpr[4] + static_cast<std::uint32_t>(52), std::bit_cast<std::uint32_t>(ctx.fpr[0]));
    ctx.fpr[0] = std::bit_cast<float>(rt.memory().aot_load32(ctx.gpr[5] + static_cast<std::uint32_t>(44)));
    rt.memory().aot_store32(ctx.gpr[4] + static_cast<std::uint32_t>(56), std::bit_cast<std::uint32_t>(ctx.fpr[0]));
    ctx.fpr[0] = std::bit_cast<float>(rt.memory().aot_load32(ctx.gpr[5] + static_cast<std::uint32_t>(60)));
    rt.memory().aot_store32(ctx.gpr[4] + static_cast<std::uint32_t>(60), std::bit_cast<std::uint32_t>(ctx.fpr[0]));
    jump_target = ctx.gpr[31];
    // nop
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_089FF93C:
    ctx.set_gpr(29, ctx.gpr[29] + static_cast<std::uint32_t>(-80));
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(12), ctx.gpr[31]);
    ctx.fpr[0] = std::bit_cast<float>(rt.memory().aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(0)));
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(16), std::bit_cast<std::uint32_t>(ctx.fpr[0]));
    ctx.fpr[0] = std::bit_cast<float>(rt.memory().aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(16)));
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(20), std::bit_cast<std::uint32_t>(ctx.fpr[0]));
    ctx.fpr[0] = std::bit_cast<float>(rt.memory().aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(32)));
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(24), std::bit_cast<std::uint32_t>(ctx.fpr[0]));
    ctx.fpr[0] = std::bit_cast<float>(rt.memory().aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(48)));
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(28), std::bit_cast<std::uint32_t>(ctx.fpr[0]));
    ctx.fpr[0] = std::bit_cast<float>(rt.memory().aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(4)));
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(32), std::bit_cast<std::uint32_t>(ctx.fpr[0]));
    ctx.fpr[0] = std::bit_cast<float>(rt.memory().aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(20)));
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(36), std::bit_cast<std::uint32_t>(ctx.fpr[0]));
    ctx.fpr[0] = std::bit_cast<float>(rt.memory().aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(36)));
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(40), std::bit_cast<std::uint32_t>(ctx.fpr[0]));
    ctx.fpr[0] = std::bit_cast<float>(rt.memory().aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(52)));
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(44), std::bit_cast<std::uint32_t>(ctx.fpr[0]));
    ctx.fpr[0] = std::bit_cast<float>(rt.memory().aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(8)));
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(48), std::bit_cast<std::uint32_t>(ctx.fpr[0]));
    ctx.fpr[0] = std::bit_cast<float>(rt.memory().aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(24)));
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(52), std::bit_cast<std::uint32_t>(ctx.fpr[0]));
    ctx.fpr[0] = std::bit_cast<float>(rt.memory().aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(40)));
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(56), std::bit_cast<std::uint32_t>(ctx.fpr[0]));
    ctx.fpr[0] = std::bit_cast<float>(rt.memory().aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(56)));
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(60), std::bit_cast<std::uint32_t>(ctx.fpr[0]));
    ctx.fpr[0] = std::bit_cast<float>(rt.memory().aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(12)));
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(64), std::bit_cast<std::uint32_t>(ctx.fpr[0]));
    ctx.fpr[0] = std::bit_cast<float>(rt.memory().aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(28)));
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(68), std::bit_cast<std::uint32_t>(ctx.fpr[0]));
    ctx.fpr[0] = std::bit_cast<float>(rt.memory().aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(44)));
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(72), std::bit_cast<std::uint32_t>(ctx.fpr[0]));
    ctx.fpr[0] = std::bit_cast<float>(rt.memory().aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(60)));
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(76), std::bit_cast<std::uint32_t>(ctx.fpr[0]));
    ctx.set_gpr(5, ctx.gpr[29] + static_cast<std::uint32_t>(16));
    ctx.set_gpr(31, 0x089FF9D0u);
    // nop
    goto L_089FFC4C;
L_089FF9D0:
    ctx.set_gpr(31, rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(12)));
    ctx.set_gpr(29, ctx.gpr[29] + static_cast<std::uint32_t>(80));
    jump_target = ctx.gpr[31];
    // nop
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_089FF9E0:
    ctx.set_gpr(3, ctx.gpr[5] & 15u);
    { const bool branch_taken = ctx.gpr[3] != 0u;
    // nop
      if (branch_taken) {
          goto L_089FFA04;
      }
      goto L_089FF9EC;
    }
L_089FF9EC:
    { const std::uint32_t vfpu_address = ctx.gpr[5] + static_cast<std::uint32_t>(0);
      float vfpu_value[4]{
        std::bit_cast<float>(rt.memory().aot_load32(vfpu_address + 0u)),
        std::bit_cast<float>(rt.memory().aot_load32(vfpu_address + 4u)),
        std::bit_cast<float>(rt.memory().aot_load32(vfpu_address + 8u)),
        std::bit_cast<float>(rt.memory().aot_load32(vfpu_address + 12u))};
      ctx.write_vfpu_vector(vfpu_value, 4u, 4u); }
    { const std::uint32_t vfpu_address = ctx.gpr[5] + static_cast<std::uint32_t>(16);
      float vfpu_value[4]{
        std::bit_cast<float>(rt.memory().aot_load32(vfpu_address + 0u)),
        std::bit_cast<float>(rt.memory().aot_load32(vfpu_address + 4u)),
        std::bit_cast<float>(rt.memory().aot_load32(vfpu_address + 8u)),
        std::bit_cast<float>(rt.memory().aot_load32(vfpu_address + 12u))};
      ctx.write_vfpu_vector(vfpu_value, 5u, 4u); }
    { const std::uint32_t vfpu_address = ctx.gpr[5] + static_cast<std::uint32_t>(32);
      float vfpu_value[4]{
        std::bit_cast<float>(rt.memory().aot_load32(vfpu_address + 0u)),
        std::bit_cast<float>(rt.memory().aot_load32(vfpu_address + 4u)),
        std::bit_cast<float>(rt.memory().aot_load32(vfpu_address + 8u)),
        std::bit_cast<float>(rt.memory().aot_load32(vfpu_address + 12u))};
      ctx.write_vfpu_vector(vfpu_value, 6u, 4u); }
    { const std::uint32_t vfpu_address = ctx.gpr[5] + static_cast<std::uint32_t>(48);
      float vfpu_value[4]{
        std::bit_cast<float>(rt.memory().aot_load32(vfpu_address + 0u)),
        std::bit_cast<float>(rt.memory().aot_load32(vfpu_address + 4u)),
        std::bit_cast<float>(rt.memory().aot_load32(vfpu_address + 8u)),
        std::bit_cast<float>(rt.memory().aot_load32(vfpu_address + 12u))};
      ctx.write_vfpu_vector(vfpu_value, 7u, 4u); }
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_089FFA44;
      }
      goto L_089FFA04;
    }
L_089FFA04:
    ctx.set_vfpu_scalar_bits(4u, rt.memory().aot_load32(ctx.gpr[5] + static_cast<std::uint32_t>(0)));
    ctx.set_vfpu_scalar_bits(36u, rt.memory().aot_load32(ctx.gpr[5] + static_cast<std::uint32_t>(4)));
    ctx.set_vfpu_scalar_bits(68u, rt.memory().aot_load32(ctx.gpr[5] + static_cast<std::uint32_t>(8)));
    ctx.set_vfpu_scalar_bits(100u, rt.memory().aot_load32(ctx.gpr[5] + static_cast<std::uint32_t>(12)));
    ctx.set_vfpu_scalar_bits(5u, rt.memory().aot_load32(ctx.gpr[5] + static_cast<std::uint32_t>(16)));
    ctx.set_vfpu_scalar_bits(37u, rt.memory().aot_load32(ctx.gpr[5] + static_cast<std::uint32_t>(20)));
    ctx.set_vfpu_scalar_bits(69u, rt.memory().aot_load32(ctx.gpr[5] + static_cast<std::uint32_t>(24)));
    ctx.set_vfpu_scalar_bits(101u, rt.memory().aot_load32(ctx.gpr[5] + static_cast<std::uint32_t>(28)));
    ctx.set_vfpu_scalar_bits(6u, rt.memory().aot_load32(ctx.gpr[5] + static_cast<std::uint32_t>(32)));
    ctx.set_vfpu_scalar_bits(38u, rt.memory().aot_load32(ctx.gpr[5] + static_cast<std::uint32_t>(36)));
    ctx.set_vfpu_scalar_bits(70u, rt.memory().aot_load32(ctx.gpr[5] + static_cast<std::uint32_t>(40)));
    ctx.set_vfpu_scalar_bits(102u, rt.memory().aot_load32(ctx.gpr[5] + static_cast<std::uint32_t>(44)));
    ctx.set_vfpu_scalar_bits(7u, rt.memory().aot_load32(ctx.gpr[5] + static_cast<std::uint32_t>(48)));
    ctx.set_vfpu_scalar_bits(39u, rt.memory().aot_load32(ctx.gpr[5] + static_cast<std::uint32_t>(52)));
    ctx.set_vfpu_scalar_bits(71u, rt.memory().aot_load32(ctx.gpr[5] + static_cast<std::uint32_t>(56)));
    ctx.set_vfpu_scalar_bits(103u, rt.memory().aot_load32(ctx.gpr[5] + static_cast<std::uint32_t>(60)));
    goto L_089FFA44;
L_089FFA44:
    ctx.set_gpr(3, ctx.gpr[6] & 15u);
    { const bool branch_taken = ctx.gpr[3] != 0u;
    // nop
      if (branch_taken) {
          goto L_089FFA68;
      }
      goto L_089FFA50;
    }
L_089FFA50:
    { const std::uint32_t vfpu_address = ctx.gpr[6] + static_cast<std::uint32_t>(0);
      float vfpu_value[4]{
        std::bit_cast<float>(rt.memory().aot_load32(vfpu_address + 0u)),
        std::bit_cast<float>(rt.memory().aot_load32(vfpu_address + 4u)),
        std::bit_cast<float>(rt.memory().aot_load32(vfpu_address + 8u)),
        std::bit_cast<float>(rt.memory().aot_load32(vfpu_address + 12u))};
      ctx.write_vfpu_vector(vfpu_value, 8u, 4u); }
    { const std::uint32_t vfpu_address = ctx.gpr[6] + static_cast<std::uint32_t>(16);
      float vfpu_value[4]{
        std::bit_cast<float>(rt.memory().aot_load32(vfpu_address + 0u)),
        std::bit_cast<float>(rt.memory().aot_load32(vfpu_address + 4u)),
        std::bit_cast<float>(rt.memory().aot_load32(vfpu_address + 8u)),
        std::bit_cast<float>(rt.memory().aot_load32(vfpu_address + 12u))};
      ctx.write_vfpu_vector(vfpu_value, 9u, 4u); }
    { const std::uint32_t vfpu_address = ctx.gpr[6] + static_cast<std::uint32_t>(32);
      float vfpu_value[4]{
        std::bit_cast<float>(rt.memory().aot_load32(vfpu_address + 0u)),
        std::bit_cast<float>(rt.memory().aot_load32(vfpu_address + 4u)),
        std::bit_cast<float>(rt.memory().aot_load32(vfpu_address + 8u)),
        std::bit_cast<float>(rt.memory().aot_load32(vfpu_address + 12u))};
      ctx.write_vfpu_vector(vfpu_value, 10u, 4u); }
    { const std::uint32_t vfpu_address = ctx.gpr[6] + static_cast<std::uint32_t>(48);
      float vfpu_value[4]{
        std::bit_cast<float>(rt.memory().aot_load32(vfpu_address + 0u)),
        std::bit_cast<float>(rt.memory().aot_load32(vfpu_address + 4u)),
        std::bit_cast<float>(rt.memory().aot_load32(vfpu_address + 8u)),
        std::bit_cast<float>(rt.memory().aot_load32(vfpu_address + 12u))};
      ctx.write_vfpu_vector(vfpu_value, 11u, 4u); }
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_089FFAA8;
      }
      goto L_089FFA68;
    }
L_089FFA68:
    ctx.set_vfpu_scalar_bits(8u, rt.memory().aot_load32(ctx.gpr[6] + static_cast<std::uint32_t>(0)));
    ctx.set_vfpu_scalar_bits(40u, rt.memory().aot_load32(ctx.gpr[6] + static_cast<std::uint32_t>(4)));
    ctx.set_vfpu_scalar_bits(72u, rt.memory().aot_load32(ctx.gpr[6] + static_cast<std::uint32_t>(8)));
    ctx.set_vfpu_scalar_bits(104u, rt.memory().aot_load32(ctx.gpr[6] + static_cast<std::uint32_t>(12)));
    ctx.set_vfpu_scalar_bits(9u, rt.memory().aot_load32(ctx.gpr[6] + static_cast<std::uint32_t>(16)));
    ctx.set_vfpu_scalar_bits(41u, rt.memory().aot_load32(ctx.gpr[6] + static_cast<std::uint32_t>(20)));
    ctx.set_vfpu_scalar_bits(73u, rt.memory().aot_load32(ctx.gpr[6] + static_cast<std::uint32_t>(24)));
    ctx.set_vfpu_scalar_bits(105u, rt.memory().aot_load32(ctx.gpr[6] + static_cast<std::uint32_t>(28)));
    ctx.set_vfpu_scalar_bits(10u, rt.memory().aot_load32(ctx.gpr[6] + static_cast<std::uint32_t>(32)));
    ctx.set_vfpu_scalar_bits(42u, rt.memory().aot_load32(ctx.gpr[6] + static_cast<std::uint32_t>(36)));
    ctx.set_vfpu_scalar_bits(74u, rt.memory().aot_load32(ctx.gpr[6] + static_cast<std::uint32_t>(40)));
    ctx.set_vfpu_scalar_bits(106u, rt.memory().aot_load32(ctx.gpr[6] + static_cast<std::uint32_t>(44)));
    ctx.set_vfpu_scalar_bits(11u, rt.memory().aot_load32(ctx.gpr[6] + static_cast<std::uint32_t>(48)));
    ctx.set_vfpu_scalar_bits(43u, rt.memory().aot_load32(ctx.gpr[6] + static_cast<std::uint32_t>(52)));
    ctx.set_vfpu_scalar_bits(75u, rt.memory().aot_load32(ctx.gpr[6] + static_cast<std::uint32_t>(56)));
    ctx.set_vfpu_scalar_bits(107u, rt.memory().aot_load32(ctx.gpr[6] + static_cast<std::uint32_t>(60)));
    goto L_089FFAA8;
L_089FFAA8:
    { float vfpu_s[16]{}, vfpu_t[16]{}, vfpu_d[16]{};
      ctx.read_vfpu_matrix(vfpu_s, 4u, 4u);
      ctx.read_vfpu_matrix(vfpu_t, 40u, 4u);
      for (std::uint32_t a = 0; a < 4u; ++a) {
        for (std::uint32_t b = 0; b < 4u; ++b) {
          float sum = 0.0f;
          for (std::uint32_t c = 0; c < 4u; ++c) sum += vfpu_s[b * 4u + c] * vfpu_t[a * 4u + c];
          vfpu_d[a * 4u + b] = sum;
        }
      }
      ctx.write_vfpu_matrix(vfpu_d, 32u, 4u);
      ctx.eat_vfpu_prefixes(); }
    ctx.set_gpr(3, ctx.gpr[4] & 15u);
    { const bool branch_taken = ctx.gpr[3] != 0u;
    // nop
      if (branch_taken) {
          goto L_089FFAD0;
      }
      goto L_089FFAB8;
    }
L_089FFAB8:
    { float vfpu_value[4]{}; ctx.read_vfpu_vector(vfpu_value, 0u, 4u);
      const std::uint32_t vfpu_address = ctx.gpr[4] + static_cast<std::uint32_t>(0);
      rt.memory().aot_store32(vfpu_address + 0u, std::bit_cast<std::uint32_t>(vfpu_value[0]));
      rt.memory().aot_store32(vfpu_address + 4u, std::bit_cast<std::uint32_t>(vfpu_value[1]));
      rt.memory().aot_store32(vfpu_address + 8u, std::bit_cast<std::uint32_t>(vfpu_value[2]));
      rt.memory().aot_store32(vfpu_address + 12u, std::bit_cast<std::uint32_t>(vfpu_value[3])); }
    { float vfpu_value[4]{}; ctx.read_vfpu_vector(vfpu_value, 1u, 4u);
      const std::uint32_t vfpu_address = ctx.gpr[4] + static_cast<std::uint32_t>(16);
      rt.memory().aot_store32(vfpu_address + 0u, std::bit_cast<std::uint32_t>(vfpu_value[0]));
      rt.memory().aot_store32(vfpu_address + 4u, std::bit_cast<std::uint32_t>(vfpu_value[1]));
      rt.memory().aot_store32(vfpu_address + 8u, std::bit_cast<std::uint32_t>(vfpu_value[2]));
      rt.memory().aot_store32(vfpu_address + 12u, std::bit_cast<std::uint32_t>(vfpu_value[3])); }
    { float vfpu_value[4]{}; ctx.read_vfpu_vector(vfpu_value, 2u, 4u);
      const std::uint32_t vfpu_address = ctx.gpr[4] + static_cast<std::uint32_t>(32);
      rt.memory().aot_store32(vfpu_address + 0u, std::bit_cast<std::uint32_t>(vfpu_value[0]));
      rt.memory().aot_store32(vfpu_address + 4u, std::bit_cast<std::uint32_t>(vfpu_value[1]));
      rt.memory().aot_store32(vfpu_address + 8u, std::bit_cast<std::uint32_t>(vfpu_value[2]));
      rt.memory().aot_store32(vfpu_address + 12u, std::bit_cast<std::uint32_t>(vfpu_value[3])); }
    { float vfpu_value[4]{}; ctx.read_vfpu_vector(vfpu_value, 3u, 4u);
      const std::uint32_t vfpu_address = ctx.gpr[4] + static_cast<std::uint32_t>(48);
      rt.memory().aot_store32(vfpu_address + 0u, std::bit_cast<std::uint32_t>(vfpu_value[0]));
      rt.memory().aot_store32(vfpu_address + 4u, std::bit_cast<std::uint32_t>(vfpu_value[1]));
      rt.memory().aot_store32(vfpu_address + 8u, std::bit_cast<std::uint32_t>(vfpu_value[2]));
      rt.memory().aot_store32(vfpu_address + 12u, std::bit_cast<std::uint32_t>(vfpu_value[3])); }
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_089FFB10;
      }
      goto L_089FFAD0;
    }
L_089FFAD0:
    rt.memory().aot_store32(ctx.gpr[4] + static_cast<std::uint32_t>(0), ctx.vfpu_scalar_bits(0u));
    rt.memory().aot_store32(ctx.gpr[4] + static_cast<std::uint32_t>(4), ctx.vfpu_scalar_bits(32u));
    rt.memory().aot_store32(ctx.gpr[4] + static_cast<std::uint32_t>(8), ctx.vfpu_scalar_bits(64u));
    rt.memory().aot_store32(ctx.gpr[4] + static_cast<std::uint32_t>(12), ctx.vfpu_scalar_bits(96u));
    rt.memory().aot_store32(ctx.gpr[4] + static_cast<std::uint32_t>(16), ctx.vfpu_scalar_bits(1u));
    rt.memory().aot_store32(ctx.gpr[4] + static_cast<std::uint32_t>(20), ctx.vfpu_scalar_bits(33u));
    rt.memory().aot_store32(ctx.gpr[4] + static_cast<std::uint32_t>(24), ctx.vfpu_scalar_bits(65u));
    rt.memory().aot_store32(ctx.gpr[4] + static_cast<std::uint32_t>(28), ctx.vfpu_scalar_bits(97u));
    rt.memory().aot_store32(ctx.gpr[4] + static_cast<std::uint32_t>(32), ctx.vfpu_scalar_bits(2u));
    rt.memory().aot_store32(ctx.gpr[4] + static_cast<std::uint32_t>(36), ctx.vfpu_scalar_bits(34u));
    rt.memory().aot_store32(ctx.gpr[4] + static_cast<std::uint32_t>(40), ctx.vfpu_scalar_bits(66u));
    rt.memory().aot_store32(ctx.gpr[4] + static_cast<std::uint32_t>(44), ctx.vfpu_scalar_bits(98u));
    rt.memory().aot_store32(ctx.gpr[4] + static_cast<std::uint32_t>(48), ctx.vfpu_scalar_bits(3u));
    rt.memory().aot_store32(ctx.gpr[4] + static_cast<std::uint32_t>(52), ctx.vfpu_scalar_bits(35u));
    rt.memory().aot_store32(ctx.gpr[4] + static_cast<std::uint32_t>(56), ctx.vfpu_scalar_bits(67u));
    rt.memory().aot_store32(ctx.gpr[4] + static_cast<std::uint32_t>(60), ctx.vfpu_scalar_bits(99u));
    goto L_089FFB10;
L_089FFB10:
    jump_target = ctx.gpr[31];
    // nop
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_089FFB18:
    ctx.set_gpr(6, ctx.gpr[4] & 15u);
    { const bool branch_taken = ctx.gpr[6] != 0u;
    // nop
      if (branch_taken) {
          goto L_089FFB3C;
      }
      goto L_089FFB24;
    }
L_089FFB24:
    { const std::uint32_t vfpu_address = ctx.gpr[4] + static_cast<std::uint32_t>(0);
      float vfpu_value[4]{
        std::bit_cast<float>(rt.memory().aot_load32(vfpu_address + 0u)),
        std::bit_cast<float>(rt.memory().aot_load32(vfpu_address + 4u)),
        std::bit_cast<float>(rt.memory().aot_load32(vfpu_address + 8u)),
        std::bit_cast<float>(rt.memory().aot_load32(vfpu_address + 12u))};
      ctx.write_vfpu_vector(vfpu_value, 4u, 4u); }
    { const std::uint32_t vfpu_address = ctx.gpr[4] + static_cast<std::uint32_t>(16);
      float vfpu_value[4]{
        std::bit_cast<float>(rt.memory().aot_load32(vfpu_address + 0u)),
        std::bit_cast<float>(rt.memory().aot_load32(vfpu_address + 4u)),
        std::bit_cast<float>(rt.memory().aot_load32(vfpu_address + 8u)),
        std::bit_cast<float>(rt.memory().aot_load32(vfpu_address + 12u))};
      ctx.write_vfpu_vector(vfpu_value, 5u, 4u); }
    { const std::uint32_t vfpu_address = ctx.gpr[4] + static_cast<std::uint32_t>(32);
      float vfpu_value[4]{
        std::bit_cast<float>(rt.memory().aot_load32(vfpu_address + 0u)),
        std::bit_cast<float>(rt.memory().aot_load32(vfpu_address + 4u)),
        std::bit_cast<float>(rt.memory().aot_load32(vfpu_address + 8u)),
        std::bit_cast<float>(rt.memory().aot_load32(vfpu_address + 12u))};
      ctx.write_vfpu_vector(vfpu_value, 6u, 4u); }
    { const std::uint32_t vfpu_address = ctx.gpr[4] + static_cast<std::uint32_t>(48);
      float vfpu_value[4]{
        std::bit_cast<float>(rt.memory().aot_load32(vfpu_address + 0u)),
        std::bit_cast<float>(rt.memory().aot_load32(vfpu_address + 4u)),
        std::bit_cast<float>(rt.memory().aot_load32(vfpu_address + 8u)),
        std::bit_cast<float>(rt.memory().aot_load32(vfpu_address + 12u))};
      ctx.write_vfpu_vector(vfpu_value, 7u, 4u); }
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_089FFB7C;
      }
      goto L_089FFB3C;
    }
L_089FFB3C:
    ctx.set_vfpu_scalar_bits(4u, rt.memory().aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(0)));
    ctx.set_vfpu_scalar_bits(36u, rt.memory().aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(4)));
    ctx.set_vfpu_scalar_bits(68u, rt.memory().aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(8)));
    ctx.set_vfpu_scalar_bits(100u, rt.memory().aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(12)));
    ctx.set_vfpu_scalar_bits(5u, rt.memory().aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(16)));
    ctx.set_vfpu_scalar_bits(37u, rt.memory().aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(20)));
    ctx.set_vfpu_scalar_bits(69u, rt.memory().aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(24)));
    ctx.set_vfpu_scalar_bits(101u, rt.memory().aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(28)));
    ctx.set_vfpu_scalar_bits(6u, rt.memory().aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(32)));
    ctx.set_vfpu_scalar_bits(38u, rt.memory().aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(36)));
    ctx.set_vfpu_scalar_bits(70u, rt.memory().aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(40)));
    ctx.set_vfpu_scalar_bits(102u, rt.memory().aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(44)));
    ctx.set_vfpu_scalar_bits(7u, rt.memory().aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(48)));
    ctx.set_vfpu_scalar_bits(39u, rt.memory().aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(52)));
    ctx.set_vfpu_scalar_bits(71u, rt.memory().aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(56)));
    ctx.set_vfpu_scalar_bits(103u, rt.memory().aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(60)));
    goto L_089FFB7C;
L_089FFB7C:
    ctx.set_gpr(3, ctx.gpr[5] & 15u);
    { const bool branch_taken = ctx.gpr[3] != 0u;
    // nop
      if (branch_taken) {
          goto L_089FFBA0;
      }
      goto L_089FFB88;
    }
L_089FFB88:
    { const std::uint32_t vfpu_address = ctx.gpr[5] + static_cast<std::uint32_t>(0);
      float vfpu_value[4]{
        std::bit_cast<float>(rt.memory().aot_load32(vfpu_address + 0u)),
        std::bit_cast<float>(rt.memory().aot_load32(vfpu_address + 4u)),
        std::bit_cast<float>(rt.memory().aot_load32(vfpu_address + 8u)),
        std::bit_cast<float>(rt.memory().aot_load32(vfpu_address + 12u))};
      ctx.write_vfpu_vector(vfpu_value, 8u, 4u); }
    { const std::uint32_t vfpu_address = ctx.gpr[5] + static_cast<std::uint32_t>(16);
      float vfpu_value[4]{
        std::bit_cast<float>(rt.memory().aot_load32(vfpu_address + 0u)),
        std::bit_cast<float>(rt.memory().aot_load32(vfpu_address + 4u)),
        std::bit_cast<float>(rt.memory().aot_load32(vfpu_address + 8u)),
        std::bit_cast<float>(rt.memory().aot_load32(vfpu_address + 12u))};
      ctx.write_vfpu_vector(vfpu_value, 9u, 4u); }
    { const std::uint32_t vfpu_address = ctx.gpr[5] + static_cast<std::uint32_t>(32);
      float vfpu_value[4]{
        std::bit_cast<float>(rt.memory().aot_load32(vfpu_address + 0u)),
        std::bit_cast<float>(rt.memory().aot_load32(vfpu_address + 4u)),
        std::bit_cast<float>(rt.memory().aot_load32(vfpu_address + 8u)),
        std::bit_cast<float>(rt.memory().aot_load32(vfpu_address + 12u))};
      ctx.write_vfpu_vector(vfpu_value, 10u, 4u); }
    { const std::uint32_t vfpu_address = ctx.gpr[5] + static_cast<std::uint32_t>(48);
      float vfpu_value[4]{
        std::bit_cast<float>(rt.memory().aot_load32(vfpu_address + 0u)),
        std::bit_cast<float>(rt.memory().aot_load32(vfpu_address + 4u)),
        std::bit_cast<float>(rt.memory().aot_load32(vfpu_address + 8u)),
        std::bit_cast<float>(rt.memory().aot_load32(vfpu_address + 12u))};
      ctx.write_vfpu_vector(vfpu_value, 11u, 4u); }
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_089FFBE0;
      }
      goto L_089FFBA0;
    }
L_089FFBA0:
    ctx.set_vfpu_scalar_bits(8u, rt.memory().aot_load32(ctx.gpr[5] + static_cast<std::uint32_t>(0)));
    ctx.set_vfpu_scalar_bits(40u, rt.memory().aot_load32(ctx.gpr[5] + static_cast<std::uint32_t>(4)));
    ctx.set_vfpu_scalar_bits(72u, rt.memory().aot_load32(ctx.gpr[5] + static_cast<std::uint32_t>(8)));
    ctx.set_vfpu_scalar_bits(104u, rt.memory().aot_load32(ctx.gpr[5] + static_cast<std::uint32_t>(12)));
    ctx.set_vfpu_scalar_bits(9u, rt.memory().aot_load32(ctx.gpr[5] + static_cast<std::uint32_t>(16)));
    ctx.set_vfpu_scalar_bits(41u, rt.memory().aot_load32(ctx.gpr[5] + static_cast<std::uint32_t>(20)));
    ctx.set_vfpu_scalar_bits(73u, rt.memory().aot_load32(ctx.gpr[5] + static_cast<std::uint32_t>(24)));
    ctx.set_vfpu_scalar_bits(105u, rt.memory().aot_load32(ctx.gpr[5] + static_cast<std::uint32_t>(28)));
    ctx.set_vfpu_scalar_bits(10u, rt.memory().aot_load32(ctx.gpr[5] + static_cast<std::uint32_t>(32)));
    ctx.set_vfpu_scalar_bits(42u, rt.memory().aot_load32(ctx.gpr[5] + static_cast<std::uint32_t>(36)));
    ctx.set_vfpu_scalar_bits(74u, rt.memory().aot_load32(ctx.gpr[5] + static_cast<std::uint32_t>(40)));
    ctx.set_vfpu_scalar_bits(106u, rt.memory().aot_load32(ctx.gpr[5] + static_cast<std::uint32_t>(44)));
    ctx.set_vfpu_scalar_bits(11u, rt.memory().aot_load32(ctx.gpr[5] + static_cast<std::uint32_t>(48)));
    ctx.set_vfpu_scalar_bits(43u, rt.memory().aot_load32(ctx.gpr[5] + static_cast<std::uint32_t>(52)));
    ctx.set_vfpu_scalar_bits(75u, rt.memory().aot_load32(ctx.gpr[5] + static_cast<std::uint32_t>(56)));
    ctx.set_vfpu_scalar_bits(107u, rt.memory().aot_load32(ctx.gpr[5] + static_cast<std::uint32_t>(60)));
    goto L_089FFBE0;
L_089FFBE0:
    { float vfpu_s[16]{}, vfpu_t[16]{}, vfpu_d[16]{};
      ctx.read_vfpu_matrix(vfpu_s, 8u, 4u);
      ctx.read_vfpu_matrix(vfpu_t, 36u, 4u);
      for (std::uint32_t a = 0; a < 4u; ++a) {
        for (std::uint32_t b = 0; b < 4u; ++b) {
          float sum = 0.0f;
          for (std::uint32_t c = 0; c < 4u; ++c) sum += vfpu_s[b * 4u + c] * vfpu_t[a * 4u + c];
          vfpu_d[a * 4u + b] = sum;
        }
      }
      ctx.write_vfpu_matrix(vfpu_d, 32u, 4u);
      ctx.eat_vfpu_prefixes(); }
    { const bool branch_taken = ctx.gpr[6] != 0u;
    // nop
      if (branch_taken) {
          goto L_089FFC04;
      }
      goto L_089FFBEC;
    }
L_089FFBEC:
    { float vfpu_value[4]{}; ctx.read_vfpu_vector(vfpu_value, 0u, 4u);
      const std::uint32_t vfpu_address = ctx.gpr[4] + static_cast<std::uint32_t>(0);
      rt.memory().aot_store32(vfpu_address + 0u, std::bit_cast<std::uint32_t>(vfpu_value[0]));
      rt.memory().aot_store32(vfpu_address + 4u, std::bit_cast<std::uint32_t>(vfpu_value[1]));
      rt.memory().aot_store32(vfpu_address + 8u, std::bit_cast<std::uint32_t>(vfpu_value[2]));
      rt.memory().aot_store32(vfpu_address + 12u, std::bit_cast<std::uint32_t>(vfpu_value[3])); }
    { float vfpu_value[4]{}; ctx.read_vfpu_vector(vfpu_value, 1u, 4u);
      const std::uint32_t vfpu_address = ctx.gpr[4] + static_cast<std::uint32_t>(16);
      rt.memory().aot_store32(vfpu_address + 0u, std::bit_cast<std::uint32_t>(vfpu_value[0]));
      rt.memory().aot_store32(vfpu_address + 4u, std::bit_cast<std::uint32_t>(vfpu_value[1]));
      rt.memory().aot_store32(vfpu_address + 8u, std::bit_cast<std::uint32_t>(vfpu_value[2]));
      rt.memory().aot_store32(vfpu_address + 12u, std::bit_cast<std::uint32_t>(vfpu_value[3])); }
    { float vfpu_value[4]{}; ctx.read_vfpu_vector(vfpu_value, 2u, 4u);
      const std::uint32_t vfpu_address = ctx.gpr[4] + static_cast<std::uint32_t>(32);
      rt.memory().aot_store32(vfpu_address + 0u, std::bit_cast<std::uint32_t>(vfpu_value[0]));
      rt.memory().aot_store32(vfpu_address + 4u, std::bit_cast<std::uint32_t>(vfpu_value[1]));
      rt.memory().aot_store32(vfpu_address + 8u, std::bit_cast<std::uint32_t>(vfpu_value[2]));
      rt.memory().aot_store32(vfpu_address + 12u, std::bit_cast<std::uint32_t>(vfpu_value[3])); }
    { float vfpu_value[4]{}; ctx.read_vfpu_vector(vfpu_value, 3u, 4u);
      const std::uint32_t vfpu_address = ctx.gpr[4] + static_cast<std::uint32_t>(48);
      rt.memory().aot_store32(vfpu_address + 0u, std::bit_cast<std::uint32_t>(vfpu_value[0]));
      rt.memory().aot_store32(vfpu_address + 4u, std::bit_cast<std::uint32_t>(vfpu_value[1]));
      rt.memory().aot_store32(vfpu_address + 8u, std::bit_cast<std::uint32_t>(vfpu_value[2]));
      rt.memory().aot_store32(vfpu_address + 12u, std::bit_cast<std::uint32_t>(vfpu_value[3])); }
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_089FFC44;
      }
      goto L_089FFC04;
    }
L_089FFC04:
    rt.memory().aot_store32(ctx.gpr[4] + static_cast<std::uint32_t>(0), ctx.vfpu_scalar_bits(0u));
    rt.memory().aot_store32(ctx.gpr[4] + static_cast<std::uint32_t>(4), ctx.vfpu_scalar_bits(32u));
    rt.memory().aot_store32(ctx.gpr[4] + static_cast<std::uint32_t>(8), ctx.vfpu_scalar_bits(64u));
    rt.memory().aot_store32(ctx.gpr[4] + static_cast<std::uint32_t>(12), ctx.vfpu_scalar_bits(96u));
    rt.memory().aot_store32(ctx.gpr[4] + static_cast<std::uint32_t>(16), ctx.vfpu_scalar_bits(1u));
    rt.memory().aot_store32(ctx.gpr[4] + static_cast<std::uint32_t>(20), ctx.vfpu_scalar_bits(33u));
    rt.memory().aot_store32(ctx.gpr[4] + static_cast<std::uint32_t>(24), ctx.vfpu_scalar_bits(65u));
    rt.memory().aot_store32(ctx.gpr[4] + static_cast<std::uint32_t>(28), ctx.vfpu_scalar_bits(97u));
    rt.memory().aot_store32(ctx.gpr[4] + static_cast<std::uint32_t>(32), ctx.vfpu_scalar_bits(2u));
    rt.memory().aot_store32(ctx.gpr[4] + static_cast<std::uint32_t>(36), ctx.vfpu_scalar_bits(34u));
    rt.memory().aot_store32(ctx.gpr[4] + static_cast<std::uint32_t>(40), ctx.vfpu_scalar_bits(66u));
    rt.memory().aot_store32(ctx.gpr[4] + static_cast<std::uint32_t>(44), ctx.vfpu_scalar_bits(98u));
    rt.memory().aot_store32(ctx.gpr[4] + static_cast<std::uint32_t>(48), ctx.vfpu_scalar_bits(3u));
    rt.memory().aot_store32(ctx.gpr[4] + static_cast<std::uint32_t>(52), ctx.vfpu_scalar_bits(35u));
    rt.memory().aot_store32(ctx.gpr[4] + static_cast<std::uint32_t>(56), ctx.vfpu_scalar_bits(67u));
    rt.memory().aot_store32(ctx.gpr[4] + static_cast<std::uint32_t>(60), ctx.vfpu_scalar_bits(99u));
    goto L_089FFC44;
L_089FFC44:
    jump_target = ctx.gpr[31];
    // nop
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_089FFC4C:
    ctx.fpr[0] = std::bit_cast<float>(rt.memory().aot_load32(ctx.gpr[5] + static_cast<std::uint32_t>(0)));
    rt.memory().aot_store32(ctx.gpr[4] + static_cast<std::uint32_t>(0), std::bit_cast<std::uint32_t>(ctx.fpr[0]));
    ctx.fpr[0] = std::bit_cast<float>(rt.memory().aot_load32(ctx.gpr[5] + static_cast<std::uint32_t>(4)));
    rt.memory().aot_store32(ctx.gpr[4] + static_cast<std::uint32_t>(4), std::bit_cast<std::uint32_t>(ctx.fpr[0]));
    ctx.fpr[0] = std::bit_cast<float>(rt.memory().aot_load32(ctx.gpr[5] + static_cast<std::uint32_t>(8)));
    rt.memory().aot_store32(ctx.gpr[4] + static_cast<std::uint32_t>(8), std::bit_cast<std::uint32_t>(ctx.fpr[0]));
    ctx.fpr[0] = std::bit_cast<float>(rt.memory().aot_load32(ctx.gpr[5] + static_cast<std::uint32_t>(12)));
    rt.memory().aot_store32(ctx.gpr[4] + static_cast<std::uint32_t>(12), std::bit_cast<std::uint32_t>(ctx.fpr[0]));
    ctx.fpr[0] = std::bit_cast<float>(rt.memory().aot_load32(ctx.gpr[5] + static_cast<std::uint32_t>(16)));
    rt.memory().aot_store32(ctx.gpr[4] + static_cast<std::uint32_t>(16), std::bit_cast<std::uint32_t>(ctx.fpr[0]));
    ctx.fpr[0] = std::bit_cast<float>(rt.memory().aot_load32(ctx.gpr[5] + static_cast<std::uint32_t>(20)));
    rt.memory().aot_store32(ctx.gpr[4] + static_cast<std::uint32_t>(20), std::bit_cast<std::uint32_t>(ctx.fpr[0]));
    ctx.fpr[0] = std::bit_cast<float>(rt.memory().aot_load32(ctx.gpr[5] + static_cast<std::uint32_t>(24)));
    rt.memory().aot_store32(ctx.gpr[4] + static_cast<std::uint32_t>(24), std::bit_cast<std::uint32_t>(ctx.fpr[0]));
    ctx.fpr[0] = std::bit_cast<float>(rt.memory().aot_load32(ctx.gpr[5] + static_cast<std::uint32_t>(28)));
    rt.memory().aot_store32(ctx.gpr[4] + static_cast<std::uint32_t>(28), std::bit_cast<std::uint32_t>(ctx.fpr[0]));
    ctx.fpr[0] = std::bit_cast<float>(rt.memory().aot_load32(ctx.gpr[5] + static_cast<std::uint32_t>(32)));
    rt.memory().aot_store32(ctx.gpr[4] + static_cast<std::uint32_t>(32), std::bit_cast<std::uint32_t>(ctx.fpr[0]));
    ctx.fpr[0] = std::bit_cast<float>(rt.memory().aot_load32(ctx.gpr[5] + static_cast<std::uint32_t>(36)));
    rt.memory().aot_store32(ctx.gpr[4] + static_cast<std::uint32_t>(36), std::bit_cast<std::uint32_t>(ctx.fpr[0]));
    ctx.fpr[0] = std::bit_cast<float>(rt.memory().aot_load32(ctx.gpr[5] + static_cast<std::uint32_t>(40)));
    rt.memory().aot_store32(ctx.gpr[4] + static_cast<std::uint32_t>(40), std::bit_cast<std::uint32_t>(ctx.fpr[0]));
    ctx.fpr[0] = std::bit_cast<float>(rt.memory().aot_load32(ctx.gpr[5] + static_cast<std::uint32_t>(44)));
    rt.memory().aot_store32(ctx.gpr[4] + static_cast<std::uint32_t>(44), std::bit_cast<std::uint32_t>(ctx.fpr[0]));
    ctx.fpr[0] = std::bit_cast<float>(rt.memory().aot_load32(ctx.gpr[5] + static_cast<std::uint32_t>(48)));
    rt.memory().aot_store32(ctx.gpr[4] + static_cast<std::uint32_t>(48), std::bit_cast<std::uint32_t>(ctx.fpr[0]));
    ctx.fpr[0] = std::bit_cast<float>(rt.memory().aot_load32(ctx.gpr[5] + static_cast<std::uint32_t>(52)));
    rt.memory().aot_store32(ctx.gpr[4] + static_cast<std::uint32_t>(52), std::bit_cast<std::uint32_t>(ctx.fpr[0]));
    ctx.fpr[0] = std::bit_cast<float>(rt.memory().aot_load32(ctx.gpr[5] + static_cast<std::uint32_t>(56)));
    rt.memory().aot_store32(ctx.gpr[4] + static_cast<std::uint32_t>(56), std::bit_cast<std::uint32_t>(ctx.fpr[0]));
    ctx.fpr[0] = std::bit_cast<float>(rt.memory().aot_load32(ctx.gpr[5] + static_cast<std::uint32_t>(60)));
    rt.memory().aot_store32(ctx.gpr[4] + static_cast<std::uint32_t>(60), std::bit_cast<std::uint32_t>(ctx.fpr[0]));
    jump_target = ctx.gpr[31];
    // nop
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_089FFCD4:
    ctx.set_gpr(3, 16256u << 16u);
    rt.memory().aot_store32(ctx.gpr[4] + static_cast<std::uint32_t>(0), ctx.gpr[3]);
    rt.memory().aot_store32(ctx.gpr[4] + static_cast<std::uint32_t>(4), 0u);
    rt.memory().aot_store32(ctx.gpr[4] + static_cast<std::uint32_t>(8), 0u);
    rt.memory().aot_store32(ctx.gpr[4] + static_cast<std::uint32_t>(12), 0u);
    rt.memory().aot_store32(ctx.gpr[4] + static_cast<std::uint32_t>(16), 0u);
    rt.memory().aot_store32(ctx.gpr[4] + static_cast<std::uint32_t>(20), ctx.gpr[3]);
    rt.memory().aot_store32(ctx.gpr[4] + static_cast<std::uint32_t>(24), 0u);
    rt.memory().aot_store32(ctx.gpr[4] + static_cast<std::uint32_t>(28), 0u);
    rt.memory().aot_store32(ctx.gpr[4] + static_cast<std::uint32_t>(32), 0u);
    rt.memory().aot_store32(ctx.gpr[4] + static_cast<std::uint32_t>(36), 0u);
    rt.memory().aot_store32(ctx.gpr[4] + static_cast<std::uint32_t>(40), ctx.gpr[3]);
    rt.memory().aot_store32(ctx.gpr[4] + static_cast<std::uint32_t>(44), 0u);
    ctx.fpr[0] = std::bit_cast<float>(rt.memory().aot_load32(ctx.gpr[5] + static_cast<std::uint32_t>(0)));
    rt.memory().aot_store32(ctx.gpr[4] + static_cast<std::uint32_t>(48), std::bit_cast<std::uint32_t>(ctx.fpr[0]));
    ctx.fpr[0] = std::bit_cast<float>(rt.memory().aot_load32(ctx.gpr[5] + static_cast<std::uint32_t>(4)));
    rt.memory().aot_store32(ctx.gpr[4] + static_cast<std::uint32_t>(52), std::bit_cast<std::uint32_t>(ctx.fpr[0]));
    ctx.fpr[0] = std::bit_cast<float>(rt.memory().aot_load32(ctx.gpr[5] + static_cast<std::uint32_t>(8)));
    rt.memory().aot_store32(ctx.gpr[4] + static_cast<std::uint32_t>(56), std::bit_cast<std::uint32_t>(ctx.fpr[0]));
    rt.memory().aot_store32(ctx.gpr[4] + static_cast<std::uint32_t>(60), ctx.gpr[3]);
    jump_target = ctx.gpr[31];
    // nop
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_089FFD2C:
    ctx.fpr[0] = std::bit_cast<float>(rt.memory().aot_load32(ctx.gpr[5] + static_cast<std::uint32_t>(0)));
    rt.memory().aot_store32(ctx.gpr[4] + static_cast<std::uint32_t>(48), std::bit_cast<std::uint32_t>(ctx.fpr[0]));
    ctx.fpr[0] = std::bit_cast<float>(rt.memory().aot_load32(ctx.gpr[5] + static_cast<std::uint32_t>(4)));
    rt.memory().aot_store32(ctx.gpr[4] + static_cast<std::uint32_t>(52), std::bit_cast<std::uint32_t>(ctx.fpr[0]));
    ctx.fpr[0] = std::bit_cast<float>(rt.memory().aot_load32(ctx.gpr[5] + static_cast<std::uint32_t>(8)));
    rt.memory().aot_store32(ctx.gpr[4] + static_cast<std::uint32_t>(56), std::bit_cast<std::uint32_t>(ctx.fpr[0]));
    jump_target = ctx.gpr[31];
    // nop
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_089FFD4C:
    ctx.fpr[0] = std::bit_cast<float>(rt.memory().aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(48)));
    rt.memory().aot_store32(ctx.gpr[5] + static_cast<std::uint32_t>(0), std::bit_cast<std::uint32_t>(ctx.fpr[0]));
    ctx.fpr[0] = std::bit_cast<float>(rt.memory().aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(52)));
    rt.memory().aot_store32(ctx.gpr[5] + static_cast<std::uint32_t>(4), std::bit_cast<std::uint32_t>(ctx.fpr[0]));
    ctx.fpr[0] = std::bit_cast<float>(rt.memory().aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(56)));
    rt.memory().aot_store32(ctx.gpr[5] + static_cast<std::uint32_t>(8), std::bit_cast<std::uint32_t>(ctx.fpr[0]));
    jump_target = ctx.gpr[31];
    // nop
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_089FFD6C:
    ctx.fpr[1] = std::bit_cast<float>(rt.memory().aot_load32(ctx.gpr[5] + static_cast<std::uint32_t>(0)));
    ctx.fpr[0] = std::bit_cast<float>(rt.memory().aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(12)));
    { const float fs = ctx.fpr[0]; const float ft = ctx.fpr[1]; if ((std::isinf(fs) && ft == 0.0f) || (std::isinf(ft) && fs == 0.0f)) ctx.set_fpr_bits(1, 0x7FC00000u); else ctx.fpr[1] = fs * ft; }
    ctx.fpr[0] = std::bit_cast<float>(rt.memory().aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(0)));
    ctx.fpr[0] = ctx.fpr[0] + ctx.fpr[1];
    rt.memory().aot_store32(ctx.gpr[4] + static_cast<std::uint32_t>(0), std::bit_cast<std::uint32_t>(ctx.fpr[0]));
    ctx.fpr[1] = std::bit_cast<float>(rt.memory().aot_load32(ctx.gpr[5] + static_cast<std::uint32_t>(4)));
    ctx.fpr[0] = std::bit_cast<float>(rt.memory().aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(12)));
    { const float fs = ctx.fpr[0]; const float ft = ctx.fpr[1]; if ((std::isinf(fs) && ft == 0.0f) || (std::isinf(ft) && fs == 0.0f)) ctx.set_fpr_bits(1, 0x7FC00000u); else ctx.fpr[1] = fs * ft; }
    ctx.fpr[0] = std::bit_cast<float>(rt.memory().aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(4)));
    ctx.fpr[0] = ctx.fpr[0] + ctx.fpr[1];
    rt.memory().aot_store32(ctx.gpr[4] + static_cast<std::uint32_t>(4), std::bit_cast<std::uint32_t>(ctx.fpr[0]));
    ctx.fpr[1] = std::bit_cast<float>(rt.memory().aot_load32(ctx.gpr[5] + static_cast<std::uint32_t>(8)));
    ctx.fpr[0] = std::bit_cast<float>(rt.memory().aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(12)));
    { const float fs = ctx.fpr[0]; const float ft = ctx.fpr[1]; if ((std::isinf(fs) && ft == 0.0f) || (std::isinf(ft) && fs == 0.0f)) ctx.set_fpr_bits(1, 0x7FC00000u); else ctx.fpr[1] = fs * ft; }
    ctx.fpr[0] = std::bit_cast<float>(rt.memory().aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(8)));
    ctx.fpr[0] = ctx.fpr[0] + ctx.fpr[1];
    rt.memory().aot_store32(ctx.gpr[4] + static_cast<std::uint32_t>(8), std::bit_cast<std::uint32_t>(ctx.fpr[0]));
    ctx.fpr[1] = std::bit_cast<float>(rt.memory().aot_load32(ctx.gpr[5] + static_cast<std::uint32_t>(0)));
    ctx.fpr[0] = std::bit_cast<float>(rt.memory().aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(28)));
    { const float fs = ctx.fpr[0]; const float ft = ctx.fpr[1]; if ((std::isinf(fs) && ft == 0.0f) || (std::isinf(ft) && fs == 0.0f)) ctx.set_fpr_bits(1, 0x7FC00000u); else ctx.fpr[1] = fs * ft; }
    ctx.fpr[0] = std::bit_cast<float>(rt.memory().aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(16)));
    ctx.fpr[0] = ctx.fpr[0] + ctx.fpr[1];
    rt.memory().aot_store32(ctx.gpr[4] + static_cast<std::uint32_t>(16), std::bit_cast<std::uint32_t>(ctx.fpr[0]));
    ctx.fpr[1] = std::bit_cast<float>(rt.memory().aot_load32(ctx.gpr[5] + static_cast<std::uint32_t>(4)));
    ctx.fpr[0] = std::bit_cast<float>(rt.memory().aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(28)));
    { const float fs = ctx.fpr[0]; const float ft = ctx.fpr[1]; if ((std::isinf(fs) && ft == 0.0f) || (std::isinf(ft) && fs == 0.0f)) ctx.set_fpr_bits(1, 0x7FC00000u); else ctx.fpr[1] = fs * ft; }
    ctx.fpr[0] = std::bit_cast<float>(rt.memory().aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(20)));
    ctx.fpr[0] = ctx.fpr[0] + ctx.fpr[1];
    rt.memory().aot_store32(ctx.gpr[4] + static_cast<std::uint32_t>(20), std::bit_cast<std::uint32_t>(ctx.fpr[0]));
    ctx.fpr[1] = std::bit_cast<float>(rt.memory().aot_load32(ctx.gpr[5] + static_cast<std::uint32_t>(8)));
    ctx.fpr[0] = std::bit_cast<float>(rt.memory().aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(28)));
    { const float fs = ctx.fpr[0]; const float ft = ctx.fpr[1]; if ((std::isinf(fs) && ft == 0.0f) || (std::isinf(ft) && fs == 0.0f)) ctx.set_fpr_bits(1, 0x7FC00000u); else ctx.fpr[1] = fs * ft; }
    ctx.fpr[0] = std::bit_cast<float>(rt.memory().aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(24)));
    ctx.fpr[0] = ctx.fpr[0] + ctx.fpr[1];
    rt.memory().aot_store32(ctx.gpr[4] + static_cast<std::uint32_t>(24), std::bit_cast<std::uint32_t>(ctx.fpr[0]));
    ctx.fpr[1] = std::bit_cast<float>(rt.memory().aot_load32(ctx.gpr[5] + static_cast<std::uint32_t>(0)));
    ctx.fpr[0] = std::bit_cast<float>(rt.memory().aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(44)));
    { const float fs = ctx.fpr[0]; const float ft = ctx.fpr[1]; if ((std::isinf(fs) && ft == 0.0f) || (std::isinf(ft) && fs == 0.0f)) ctx.set_fpr_bits(1, 0x7FC00000u); else ctx.fpr[1] = fs * ft; }
    ctx.fpr[0] = std::bit_cast<float>(rt.memory().aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(32)));
    ctx.fpr[0] = ctx.fpr[0] + ctx.fpr[1];
    rt.memory().aot_store32(ctx.gpr[4] + static_cast<std::uint32_t>(32), std::bit_cast<std::uint32_t>(ctx.fpr[0]));
    ctx.fpr[1] = std::bit_cast<float>(rt.memory().aot_load32(ctx.gpr[5] + static_cast<std::uint32_t>(4)));
    ctx.fpr[0] = std::bit_cast<float>(rt.memory().aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(44)));
    { const float fs = ctx.fpr[0]; const float ft = ctx.fpr[1]; if ((std::isinf(fs) && ft == 0.0f) || (std::isinf(ft) && fs == 0.0f)) ctx.set_fpr_bits(1, 0x7FC00000u); else ctx.fpr[1] = fs * ft; }
    ctx.fpr[0] = std::bit_cast<float>(rt.memory().aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(36)));
    ctx.fpr[0] = ctx.fpr[0] + ctx.fpr[1];
    rt.memory().aot_store32(ctx.gpr[4] + static_cast<std::uint32_t>(36), std::bit_cast<std::uint32_t>(ctx.fpr[0]));
    ctx.fpr[1] = std::bit_cast<float>(rt.memory().aot_load32(ctx.gpr[5] + static_cast<std::uint32_t>(8)));
    ctx.fpr[0] = std::bit_cast<float>(rt.memory().aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(44)));
    { const float fs = ctx.fpr[0]; const float ft = ctx.fpr[1]; if ((std::isinf(fs) && ft == 0.0f) || (std::isinf(ft) && fs == 0.0f)) ctx.set_fpr_bits(1, 0x7FC00000u); else ctx.fpr[1] = fs * ft; }
    ctx.fpr[0] = std::bit_cast<float>(rt.memory().aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(40)));
    ctx.fpr[0] = ctx.fpr[0] + ctx.fpr[1];
    rt.memory().aot_store32(ctx.gpr[4] + static_cast<std::uint32_t>(40), std::bit_cast<std::uint32_t>(ctx.fpr[0]));
    ctx.fpr[1] = std::bit_cast<float>(rt.memory().aot_load32(ctx.gpr[5] + static_cast<std::uint32_t>(0)));
    ctx.fpr[0] = std::bit_cast<float>(rt.memory().aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(60)));
    { const float fs = ctx.fpr[0]; const float ft = ctx.fpr[1]; if ((std::isinf(fs) && ft == 0.0f) || (std::isinf(ft) && fs == 0.0f)) ctx.set_fpr_bits(1, 0x7FC00000u); else ctx.fpr[1] = fs * ft; }
    ctx.fpr[0] = std::bit_cast<float>(rt.memory().aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(48)));
    ctx.fpr[0] = ctx.fpr[0] + ctx.fpr[1];
    rt.memory().aot_store32(ctx.gpr[4] + static_cast<std::uint32_t>(48), std::bit_cast<std::uint32_t>(ctx.fpr[0]));
    ctx.fpr[1] = std::bit_cast<float>(rt.memory().aot_load32(ctx.gpr[5] + static_cast<std::uint32_t>(4)));
    ctx.fpr[0] = std::bit_cast<float>(rt.memory().aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(60)));
    { const float fs = ctx.fpr[0]; const float ft = ctx.fpr[1]; if ((std::isinf(fs) && ft == 0.0f) || (std::isinf(ft) && fs == 0.0f)) ctx.set_fpr_bits(1, 0x7FC00000u); else ctx.fpr[1] = fs * ft; }
    ctx.fpr[0] = std::bit_cast<float>(rt.memory().aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(52)));
    ctx.fpr[0] = ctx.fpr[0] + ctx.fpr[1];
    rt.memory().aot_store32(ctx.gpr[4] + static_cast<std::uint32_t>(52), std::bit_cast<std::uint32_t>(ctx.fpr[0]));
    ctx.fpr[1] = std::bit_cast<float>(rt.memory().aot_load32(ctx.gpr[5] + static_cast<std::uint32_t>(8)));
    ctx.fpr[0] = std::bit_cast<float>(rt.memory().aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(60)));
    { const float fs = ctx.fpr[0]; const float ft = ctx.fpr[1]; if ((std::isinf(fs) && ft == 0.0f) || (std::isinf(ft) && fs == 0.0f)) ctx.set_fpr_bits(1, 0x7FC00000u); else ctx.fpr[1] = fs * ft; }
    ctx.fpr[0] = std::bit_cast<float>(rt.memory().aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(56)));
    ctx.fpr[0] = ctx.fpr[0] + ctx.fpr[1];
    rt.memory().aot_store32(ctx.gpr[4] + static_cast<std::uint32_t>(56), std::bit_cast<std::uint32_t>(ctx.fpr[0]));
    jump_target = ctx.gpr[31];
    // nop
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_089FFE94:
    ctx.set_gpr(29, ctx.gpr[29] + static_cast<std::uint32_t>(-16));
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(12), ctx.gpr[31]);
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(8), ctx.gpr[17]);
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(4), ctx.gpr[16]);
    ctx.set_gpr(17, ctx.gpr[4] + 0u);
    ctx.set_gpr(16, ctx.gpr[5] + 0u);
    ctx.set_gpr(31, 0x089FFEB4u);
    // nop
    goto L_089FF868;
L_089FFEB4:
    ctx.fpr[0] = std::bit_cast<float>(rt.memory().aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(0)));
    rt.memory().aot_store32(ctx.gpr[17] + static_cast<std::uint32_t>(0), std::bit_cast<std::uint32_t>(ctx.fpr[0]));
    ctx.fpr[0] = std::bit_cast<float>(rt.memory().aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(4)));
    rt.memory().aot_store32(ctx.gpr[17] + static_cast<std::uint32_t>(20), std::bit_cast<std::uint32_t>(ctx.fpr[0]));
    ctx.fpr[0] = std::bit_cast<float>(rt.memory().aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(8)));
    rt.memory().aot_store32(ctx.gpr[17] + static_cast<std::uint32_t>(40), std::bit_cast<std::uint32_t>(ctx.fpr[0]));
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
L_089FFEE4:
    ctx.fpr[0] = std::bit_cast<float>(rt.memory().aot_load32(ctx.gpr[5] + static_cast<std::uint32_t>(0)));
    rt.memory().aot_store32(ctx.gpr[4] + static_cast<std::uint32_t>(0), std::bit_cast<std::uint32_t>(ctx.fpr[0]));
    ctx.fpr[0] = std::bit_cast<float>(rt.memory().aot_load32(ctx.gpr[5] + static_cast<std::uint32_t>(4)));
    rt.memory().aot_store32(ctx.gpr[4] + static_cast<std::uint32_t>(20), std::bit_cast<std::uint32_t>(ctx.fpr[0]));
    ctx.fpr[0] = std::bit_cast<float>(rt.memory().aot_load32(ctx.gpr[5] + static_cast<std::uint32_t>(8)));
    rt.memory().aot_store32(ctx.gpr[4] + static_cast<std::uint32_t>(40), std::bit_cast<std::uint32_t>(ctx.fpr[0]));
    jump_target = ctx.gpr[31];
    // nop
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_089FFF04:
    ctx.fpr[1] = std::bit_cast<float>(rt.memory().aot_load32(ctx.gpr[5] + static_cast<std::uint32_t>(0)));
    ctx.fpr[0] = std::bit_cast<float>(rt.memory().aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(0)));
    { const float fs = ctx.fpr[0]; const float ft = ctx.fpr[1]; if ((std::isinf(fs) && ft == 0.0f) || (std::isinf(ft) && fs == 0.0f)) ctx.set_fpr_bits(0, 0x7FC00000u); else ctx.fpr[0] = fs * ft; }
    rt.memory().aot_store32(ctx.gpr[4] + static_cast<std::uint32_t>(0), std::bit_cast<std::uint32_t>(ctx.fpr[0]));
    ctx.fpr[1] = std::bit_cast<float>(rt.memory().aot_load32(ctx.gpr[5] + static_cast<std::uint32_t>(0)));
    ctx.fpr[0] = std::bit_cast<float>(rt.memory().aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(4)));
    { const float fs = ctx.fpr[0]; const float ft = ctx.fpr[1]; if ((std::isinf(fs) && ft == 0.0f) || (std::isinf(ft) && fs == 0.0f)) ctx.set_fpr_bits(0, 0x7FC00000u); else ctx.fpr[0] = fs * ft; }
    rt.memory().aot_store32(ctx.gpr[4] + static_cast<std::uint32_t>(4), std::bit_cast<std::uint32_t>(ctx.fpr[0]));
    ctx.fpr[1] = std::bit_cast<float>(rt.memory().aot_load32(ctx.gpr[5] + static_cast<std::uint32_t>(0)));
    ctx.fpr[0] = std::bit_cast<float>(rt.memory().aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(8)));
    { const float fs = ctx.fpr[0]; const float ft = ctx.fpr[1]; if ((std::isinf(fs) && ft == 0.0f) || (std::isinf(ft) && fs == 0.0f)) ctx.set_fpr_bits(0, 0x7FC00000u); else ctx.fpr[0] = fs * ft; }
    rt.memory().aot_store32(ctx.gpr[4] + static_cast<std::uint32_t>(8), std::bit_cast<std::uint32_t>(ctx.fpr[0]));
    ctx.fpr[1] = std::bit_cast<float>(rt.memory().aot_load32(ctx.gpr[5] + static_cast<std::uint32_t>(0)));
    ctx.fpr[0] = std::bit_cast<float>(rt.memory().aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(12)));
    { const float fs = ctx.fpr[0]; const float ft = ctx.fpr[1]; if ((std::isinf(fs) && ft == 0.0f) || (std::isinf(ft) && fs == 0.0f)) ctx.set_fpr_bits(0, 0x7FC00000u); else ctx.fpr[0] = fs * ft; }
    rt.memory().aot_store32(ctx.gpr[4] + static_cast<std::uint32_t>(12), std::bit_cast<std::uint32_t>(ctx.fpr[0]));
    ctx.fpr[1] = std::bit_cast<float>(rt.memory().aot_load32(ctx.gpr[5] + static_cast<std::uint32_t>(4)));
    ctx.fpr[0] = std::bit_cast<float>(rt.memory().aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(16)));
    { const float fs = ctx.fpr[0]; const float ft = ctx.fpr[1]; if ((std::isinf(fs) && ft == 0.0f) || (std::isinf(ft) && fs == 0.0f)) ctx.set_fpr_bits(0, 0x7FC00000u); else ctx.fpr[0] = fs * ft; }
    rt.memory().aot_store32(ctx.gpr[4] + static_cast<std::uint32_t>(16), std::bit_cast<std::uint32_t>(ctx.fpr[0]));
    ctx.fpr[1] = std::bit_cast<float>(rt.memory().aot_load32(ctx.gpr[5] + static_cast<std::uint32_t>(4)));
    ctx.fpr[0] = std::bit_cast<float>(rt.memory().aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(20)));
    { const float fs = ctx.fpr[0]; const float ft = ctx.fpr[1]; if ((std::isinf(fs) && ft == 0.0f) || (std::isinf(ft) && fs == 0.0f)) ctx.set_fpr_bits(0, 0x7FC00000u); else ctx.fpr[0] = fs * ft; }
    rt.memory().aot_store32(ctx.gpr[4] + static_cast<std::uint32_t>(20), std::bit_cast<std::uint32_t>(ctx.fpr[0]));
    ctx.fpr[1] = std::bit_cast<float>(rt.memory().aot_load32(ctx.gpr[5] + static_cast<std::uint32_t>(4)));
    ctx.fpr[0] = std::bit_cast<float>(rt.memory().aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(24)));
    { const float fs = ctx.fpr[0]; const float ft = ctx.fpr[1]; if ((std::isinf(fs) && ft == 0.0f) || (std::isinf(ft) && fs == 0.0f)) ctx.set_fpr_bits(0, 0x7FC00000u); else ctx.fpr[0] = fs * ft; }
    rt.memory().aot_store32(ctx.gpr[4] + static_cast<std::uint32_t>(24), std::bit_cast<std::uint32_t>(ctx.fpr[0]));
    ctx.fpr[1] = std::bit_cast<float>(rt.memory().aot_load32(ctx.gpr[5] + static_cast<std::uint32_t>(4)));
    ctx.fpr[0] = std::bit_cast<float>(rt.memory().aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(28)));
    { const float fs = ctx.fpr[0]; const float ft = ctx.fpr[1]; if ((std::isinf(fs) && ft == 0.0f) || (std::isinf(ft) && fs == 0.0f)) ctx.set_fpr_bits(0, 0x7FC00000u); else ctx.fpr[0] = fs * ft; }
    rt.memory().aot_store32(ctx.gpr[4] + static_cast<std::uint32_t>(28), std::bit_cast<std::uint32_t>(ctx.fpr[0]));
    ctx.fpr[1] = std::bit_cast<float>(rt.memory().aot_load32(ctx.gpr[5] + static_cast<std::uint32_t>(8)));
    ctx.fpr[0] = std::bit_cast<float>(rt.memory().aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(32)));
    { const float fs = ctx.fpr[0]; const float ft = ctx.fpr[1]; if ((std::isinf(fs) && ft == 0.0f) || (std::isinf(ft) && fs == 0.0f)) ctx.set_fpr_bits(0, 0x7FC00000u); else ctx.fpr[0] = fs * ft; }
    rt.memory().aot_store32(ctx.gpr[4] + static_cast<std::uint32_t>(32), std::bit_cast<std::uint32_t>(ctx.fpr[0]));
    ctx.fpr[1] = std::bit_cast<float>(rt.memory().aot_load32(ctx.gpr[5] + static_cast<std::uint32_t>(8)));
    ctx.fpr[0] = std::bit_cast<float>(rt.memory().aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(36)));
    { const float fs = ctx.fpr[0]; const float ft = ctx.fpr[1]; if ((std::isinf(fs) && ft == 0.0f) || (std::isinf(ft) && fs == 0.0f)) ctx.set_fpr_bits(0, 0x7FC00000u); else ctx.fpr[0] = fs * ft; }
    rt.memory().aot_store32(ctx.gpr[4] + static_cast<std::uint32_t>(36), std::bit_cast<std::uint32_t>(ctx.fpr[0]));
    ctx.fpr[1] = std::bit_cast<float>(rt.memory().aot_load32(ctx.gpr[5] + static_cast<std::uint32_t>(8)));
    ctx.fpr[0] = std::bit_cast<float>(rt.memory().aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(40)));
    { const float fs = ctx.fpr[0]; const float ft = ctx.fpr[1]; if ((std::isinf(fs) && ft == 0.0f) || (std::isinf(ft) && fs == 0.0f)) ctx.set_fpr_bits(0, 0x7FC00000u); else ctx.fpr[0] = fs * ft; }
    rt.memory().aot_store32(ctx.gpr[4] + static_cast<std::uint32_t>(40), std::bit_cast<std::uint32_t>(ctx.fpr[0]));
    ctx.fpr[1] = std::bit_cast<float>(rt.memory().aot_load32(ctx.gpr[5] + static_cast<std::uint32_t>(8)));
    ctx.fpr[0] = std::bit_cast<float>(rt.memory().aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(44)));
    { const float fs = ctx.fpr[0]; const float ft = ctx.fpr[1]; if ((std::isinf(fs) && ft == 0.0f) || (std::isinf(ft) && fs == 0.0f)) ctx.set_fpr_bits(0, 0x7FC00000u); else ctx.fpr[0] = fs * ft; }
    rt.memory().aot_store32(ctx.gpr[4] + static_cast<std::uint32_t>(44), std::bit_cast<std::uint32_t>(ctx.fpr[0]));
    jump_target = ctx.gpr[31];
    // nop
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_089FFFCC:
    ctx.fpr[1] = std::bit_cast<float>(rt.memory().aot_load32(ctx.gpr[5] + static_cast<std::uint32_t>(0)));
    ctx.fpr[0] = std::bit_cast<float>(rt.memory().aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(0)));
    { const float fs = ctx.fpr[0]; const float ft = ctx.fpr[1]; if ((std::isinf(fs) && ft == 0.0f) || (std::isinf(ft) && fs == 0.0f)) ctx.set_fpr_bits(0, 0x7FC00000u); else ctx.fpr[0] = fs * ft; }
    rt.memory().aot_store32(ctx.gpr[4] + static_cast<std::uint32_t>(0), std::bit_cast<std::uint32_t>(ctx.fpr[0]));
    ctx.fpr[1] = std::bit_cast<float>(rt.memory().aot_load32(ctx.gpr[5] + static_cast<std::uint32_t>(4)));
    ctx.fpr[0] = std::bit_cast<float>(rt.memory().aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(4)));
    { const float fs = ctx.fpr[0]; const float ft = ctx.fpr[1]; if ((std::isinf(fs) && ft == 0.0f) || (std::isinf(ft) && fs == 0.0f)) ctx.set_fpr_bits(0, 0x7FC00000u); else ctx.fpr[0] = fs * ft; }
    rt.memory().aot_store32(ctx.gpr[4] + static_cast<std::uint32_t>(4), std::bit_cast<std::uint32_t>(ctx.fpr[0]));
    ctx.fpr[1] = std::bit_cast<float>(rt.memory().aot_load32(ctx.gpr[5] + static_cast<std::uint32_t>(8)));
    ctx.fpr[0] = std::bit_cast<float>(rt.memory().aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(8)));
    { const float fs = ctx.fpr[0]; const float ft = ctx.fpr[1]; if ((std::isinf(fs) && ft == 0.0f) || (std::isinf(ft) && fs == 0.0f)) ctx.set_fpr_bits(0, 0x7FC00000u); else ctx.fpr[0] = fs * ft; }
    rt.memory().aot_store32(ctx.gpr[4] + static_cast<std::uint32_t>(8), std::bit_cast<std::uint32_t>(ctx.fpr[0]));
    ctx.fpr[1] = std::bit_cast<float>(rt.memory().aot_load32(ctx.gpr[5] + static_cast<std::uint32_t>(0)));
    ctx.pc = 0x08A00000u; return;
}

void recomp_unit_0126(Runtime &rt, AllegrexContext &ctx) {
    auto aot_mem = rt.memory().aot_fast_view();
    recomp_unit_0126_entry(rt, ctx, 0u, aot_mem);
}

void register_generated_unit_126(Runtime &runtime) {
    runtime.register_generated_unit(126u, 0x089FC000u, 16384u, &recomp_unit_0126, &recomp_unit_0126_entry);
    runtime.register_function(0x089FC004u, &recomp_unit_0126, "recomp_unit_0126");
    runtime.register_function(0x089FC024u, &recomp_unit_0126, "recomp_unit_0126");
    runtime.register_function(0x089FC040u, &recomp_unit_0126, "recomp_unit_0126");
    runtime.register_function(0x089FC058u, &recomp_unit_0126, "recomp_unit_0126");
    runtime.register_function(0x089FC070u, &recomp_unit_0126, "recomp_unit_0126");
    runtime.register_function(0x089FC088u, &recomp_unit_0126, "recomp_unit_0126");
    runtime.register_function(0x089FC0A0u, &recomp_unit_0126, "recomp_unit_0126");
    runtime.register_function(0x089FC0B8u, &recomp_unit_0126, "recomp_unit_0126");
    runtime.register_function(0x089FC0D0u, &recomp_unit_0126, "recomp_unit_0126");
    runtime.register_function(0x089FC0E8u, &recomp_unit_0126, "recomp_unit_0126");
    runtime.register_function(0x089FC100u, &recomp_unit_0126, "recomp_unit_0126");
    runtime.register_function(0x089FC118u, &recomp_unit_0126, "recomp_unit_0126");
    runtime.register_function(0x089FC128u, &recomp_unit_0126, "recomp_unit_0126");
    runtime.register_function(0x089FC14Cu, &recomp_unit_0126, "recomp_unit_0126");
    runtime.register_function(0x089FC1BCu, &recomp_unit_0126, "recomp_unit_0126");
    runtime.register_function(0x089FC1C8u, &recomp_unit_0126, "recomp_unit_0126");
    runtime.register_function(0x089FC1CCu, &recomp_unit_0126, "recomp_unit_0126");
    runtime.register_function(0x089FC1DCu, &recomp_unit_0126, "recomp_unit_0126");
    runtime.register_function(0x089FC1E4u, &recomp_unit_0126, "recomp_unit_0126");
    runtime.register_function(0x089FC1F4u, &recomp_unit_0126, "recomp_unit_0126");
    runtime.register_function(0x089FC1FCu, &recomp_unit_0126, "recomp_unit_0126");
    runtime.register_function(0x089FC200u, &recomp_unit_0126, "recomp_unit_0126");
    runtime.register_function(0x089FC204u, &recomp_unit_0126, "recomp_unit_0126");
    runtime.register_function(0x089FC224u, &recomp_unit_0126, "recomp_unit_0126");
    runtime.register_function(0x089FC234u, &recomp_unit_0126, "recomp_unit_0126");
    runtime.register_function(0x089FC24Cu, &recomp_unit_0126, "recomp_unit_0126");
    runtime.register_function(0x089FC250u, &recomp_unit_0126, "recomp_unit_0126");
    runtime.register_function(0x089FC258u, &recomp_unit_0126, "recomp_unit_0126");
    runtime.register_function(0x089FC270u, &recomp_unit_0126, "recomp_unit_0126");
    runtime.register_function(0x089FC274u, &recomp_unit_0126, "recomp_unit_0126");
    runtime.register_function(0x089FC27Cu, &recomp_unit_0126, "recomp_unit_0126");
    runtime.register_function(0x089FC294u, &recomp_unit_0126, "recomp_unit_0126");
    runtime.register_function(0x089FC298u, &recomp_unit_0126, "recomp_unit_0126");
    runtime.register_function(0x089FC2A0u, &recomp_unit_0126, "recomp_unit_0126");
    runtime.register_function(0x089FC2B8u, &recomp_unit_0126, "recomp_unit_0126");
    runtime.register_function(0x089FC2C4u, &recomp_unit_0126, "recomp_unit_0126");
    runtime.register_function(0x089FC2D0u, &recomp_unit_0126, "recomp_unit_0126");
    runtime.register_function(0x089FC2F4u, &recomp_unit_0126, "recomp_unit_0126");
    runtime.register_function(0x089FC308u, &recomp_unit_0126, "recomp_unit_0126");
    runtime.register_function(0x089FC31Cu, &recomp_unit_0126, "recomp_unit_0126");
    runtime.register_function(0x089FC328u, &recomp_unit_0126, "recomp_unit_0126");
    runtime.register_function(0x089FC32Cu, &recomp_unit_0126, "recomp_unit_0126");
    runtime.register_function(0x089FC338u, &recomp_unit_0126, "recomp_unit_0126");
    runtime.register_function(0x089FC350u, &recomp_unit_0126, "recomp_unit_0126");
    runtime.register_function(0x089FC354u, &recomp_unit_0126, "recomp_unit_0126");
    runtime.register_function(0x089FC35Cu, &recomp_unit_0126, "recomp_unit_0126");
    runtime.register_function(0x089FC374u, &recomp_unit_0126, "recomp_unit_0126");
    runtime.register_function(0x089FC380u, &recomp_unit_0126, "recomp_unit_0126");
    runtime.register_function(0x089FC3C8u, &recomp_unit_0126, "recomp_unit_0126");
    runtime.register_function(0x089FC3CCu, &recomp_unit_0126, "recomp_unit_0126");
    runtime.register_function(0x089FC3D4u, &recomp_unit_0126, "recomp_unit_0126");
    runtime.register_function(0x089FC3ECu, &recomp_unit_0126, "recomp_unit_0126");
    runtime.register_function(0x089FC400u, &recomp_unit_0126, "recomp_unit_0126");
    runtime.register_function(0x089FC40Cu, &recomp_unit_0126, "recomp_unit_0126");
    runtime.register_function(0x089FC45Cu, &recomp_unit_0126, "recomp_unit_0126");
    runtime.register_function(0x089FC460u, &recomp_unit_0126, "recomp_unit_0126");
    runtime.register_function(0x089FC468u, &recomp_unit_0126, "recomp_unit_0126");
    runtime.register_function(0x089FC480u, &recomp_unit_0126, "recomp_unit_0126");
    runtime.register_function(0x089FC48Cu, &recomp_unit_0126, "recomp_unit_0126");
    runtime.register_function(0x089FC504u, &recomp_unit_0126, "recomp_unit_0126");
    runtime.register_function(0x089FC510u, &recomp_unit_0126, "recomp_unit_0126");
    runtime.register_function(0x089FC528u, &recomp_unit_0126, "recomp_unit_0126");
    runtime.register_function(0x089FC53Cu, &recomp_unit_0126, "recomp_unit_0126");
    runtime.register_function(0x089FC548u, &recomp_unit_0126, "recomp_unit_0126");
    runtime.register_function(0x089FC560u, &recomp_unit_0126, "recomp_unit_0126");
    runtime.register_function(0x089FC574u, &recomp_unit_0126, "recomp_unit_0126");
    runtime.register_function(0x089FC580u, &recomp_unit_0126, "recomp_unit_0126");
    runtime.register_function(0x089FC584u, &recomp_unit_0126, "recomp_unit_0126");
    runtime.register_function(0x089FC58Cu, &recomp_unit_0126, "recomp_unit_0126");
    runtime.register_function(0x089FC5B0u, &recomp_unit_0126, "recomp_unit_0126");
    runtime.register_function(0x089FC5BCu, &recomp_unit_0126, "recomp_unit_0126");
    runtime.register_function(0x089FC5CCu, &recomp_unit_0126, "recomp_unit_0126");
    runtime.register_function(0x089FC5D4u, &recomp_unit_0126, "recomp_unit_0126");
    runtime.register_function(0x089FC5E0u, &recomp_unit_0126, "recomp_unit_0126");
    runtime.register_function(0x089FC5E4u, &recomp_unit_0126, "recomp_unit_0126");
    runtime.register_function(0x089FC5F4u, &recomp_unit_0126, "recomp_unit_0126");
    runtime.register_function(0x089FC60Cu, &recomp_unit_0126, "recomp_unit_0126");
    runtime.register_function(0x089FC618u, &recomp_unit_0126, "recomp_unit_0126");
    runtime.register_function(0x089FC68Cu, &recomp_unit_0126, "recomp_unit_0126");
    runtime.register_function(0x089FC690u, &recomp_unit_0126, "recomp_unit_0126");
    runtime.register_function(0x089FC6A0u, &recomp_unit_0126, "recomp_unit_0126");
    runtime.register_function(0x089FC6A4u, &recomp_unit_0126, "recomp_unit_0126");
    runtime.register_function(0x089FC6B4u, &recomp_unit_0126, "recomp_unit_0126");
    runtime.register_function(0x089FC6B8u, &recomp_unit_0126, "recomp_unit_0126");
    runtime.register_function(0x089FC6D0u, &recomp_unit_0126, "recomp_unit_0126");
    runtime.register_function(0x089FC6DCu, &recomp_unit_0126, "recomp_unit_0126");
    runtime.register_function(0x089FC6ECu, &recomp_unit_0126, "recomp_unit_0126");
    runtime.register_function(0x089FC6F0u, &recomp_unit_0126, "recomp_unit_0126");
    runtime.register_function(0x089FC700u, &recomp_unit_0126, "recomp_unit_0126");
    runtime.register_function(0x089FC704u, &recomp_unit_0126, "recomp_unit_0126");
    runtime.register_function(0x089FC714u, &recomp_unit_0126, "recomp_unit_0126");
    runtime.register_function(0x089FC718u, &recomp_unit_0126, "recomp_unit_0126");
    runtime.register_function(0x089FC730u, &recomp_unit_0126, "recomp_unit_0126");
    runtime.register_function(0x089FC73Cu, &recomp_unit_0126, "recomp_unit_0126");
    runtime.register_function(0x089FC740u, &recomp_unit_0126, "recomp_unit_0126");
    runtime.register_function(0x089FC748u, &recomp_unit_0126, "recomp_unit_0126");
    runtime.register_function(0x089FC780u, &recomp_unit_0126, "recomp_unit_0126");
    runtime.register_function(0x089FC78Cu, &recomp_unit_0126, "recomp_unit_0126");
    runtime.register_function(0x089FC798u, &recomp_unit_0126, "recomp_unit_0126");
    runtime.register_function(0x089FC7A8u, &recomp_unit_0126, "recomp_unit_0126");
    runtime.register_function(0x089FC7C0u, &recomp_unit_0126, "recomp_unit_0126");
    runtime.register_function(0x089FC7C8u, &recomp_unit_0126, "recomp_unit_0126");
    runtime.register_function(0x089FC7D4u, &recomp_unit_0126, "recomp_unit_0126");
    runtime.register_function(0x089FC7D8u, &recomp_unit_0126, "recomp_unit_0126");
    runtime.register_function(0x089FC7E4u, &recomp_unit_0126, "recomp_unit_0126");
    runtime.register_function(0x089FC7E8u, &recomp_unit_0126, "recomp_unit_0126");
    runtime.register_function(0x089FC808u, &recomp_unit_0126, "recomp_unit_0126");
    runtime.register_function(0x089FC820u, &recomp_unit_0126, "recomp_unit_0126");
    runtime.register_function(0x089FC82Cu, &recomp_unit_0126, "recomp_unit_0126");
    runtime.register_function(0x089FC878u, &recomp_unit_0126, "recomp_unit_0126");
    runtime.register_function(0x089FC890u, &recomp_unit_0126, "recomp_unit_0126");
    runtime.register_function(0x089FC89Cu, &recomp_unit_0126, "recomp_unit_0126");
    runtime.register_function(0x089FC8BCu, &recomp_unit_0126, "recomp_unit_0126");
    runtime.register_function(0x089FC8C8u, &recomp_unit_0126, "recomp_unit_0126");
    runtime.register_function(0x089FC8CCu, &recomp_unit_0126, "recomp_unit_0126");
    runtime.register_function(0x089FC8D4u, &recomp_unit_0126, "recomp_unit_0126");
    runtime.register_function(0x089FC908u, &recomp_unit_0126, "recomp_unit_0126");
    runtime.register_function(0x089FC914u, &recomp_unit_0126, "recomp_unit_0126");
    runtime.register_function(0x089FC920u, &recomp_unit_0126, "recomp_unit_0126");
    runtime.register_function(0x089FC974u, &recomp_unit_0126, "recomp_unit_0126");
    runtime.register_function(0x089FC980u, &recomp_unit_0126, "recomp_unit_0126");
    runtime.register_function(0x089FC988u, &recomp_unit_0126, "recomp_unit_0126");
    runtime.register_function(0x089FC994u, &recomp_unit_0126, "recomp_unit_0126");
    runtime.register_function(0x089FC99Cu, &recomp_unit_0126, "recomp_unit_0126");
    runtime.register_function(0x089FC9A4u, &recomp_unit_0126, "recomp_unit_0126");
    runtime.register_function(0x089FC9B4u, &recomp_unit_0126, "recomp_unit_0126");
    runtime.register_function(0x089FC9BCu, &recomp_unit_0126, "recomp_unit_0126");
    runtime.register_function(0x089FC9C8u, &recomp_unit_0126, "recomp_unit_0126");
    runtime.register_function(0x089FC9CCu, &recomp_unit_0126, "recomp_unit_0126");
    runtime.register_function(0x089FC9E8u, &recomp_unit_0126, "recomp_unit_0126");
    runtime.register_function(0x089FCA00u, &recomp_unit_0126, "recomp_unit_0126");
    runtime.register_function(0x089FCA0Cu, &recomp_unit_0126, "recomp_unit_0126");
    runtime.register_function(0x089FCA58u, &recomp_unit_0126, "recomp_unit_0126");
    runtime.register_function(0x089FCA64u, &recomp_unit_0126, "recomp_unit_0126");
    runtime.register_function(0x089FCA68u, &recomp_unit_0126, "recomp_unit_0126");
    runtime.register_function(0x089FCA70u, &recomp_unit_0126, "recomp_unit_0126");
    runtime.register_function(0x089FCAA4u, &recomp_unit_0126, "recomp_unit_0126");
    runtime.register_function(0x089FCABCu, &recomp_unit_0126, "recomp_unit_0126");
    runtime.register_function(0x089FCAC0u, &recomp_unit_0126, "recomp_unit_0126");
    runtime.register_function(0x089FCAC8u, &recomp_unit_0126, "recomp_unit_0126");
    runtime.register_function(0x089FCAE0u, &recomp_unit_0126, "recomp_unit_0126");
    runtime.register_function(0x089FCAE4u, &recomp_unit_0126, "recomp_unit_0126");
    runtime.register_function(0x089FCAECu, &recomp_unit_0126, "recomp_unit_0126");
    runtime.register_function(0x089FCB04u, &recomp_unit_0126, "recomp_unit_0126");
    runtime.register_function(0x089FCB94u, &recomp_unit_0126, "recomp_unit_0126");
    runtime.register_function(0x089FCBA0u, &recomp_unit_0126, "recomp_unit_0126");
    runtime.register_function(0x089FCBB4u, &recomp_unit_0126, "recomp_unit_0126");
    runtime.register_function(0x089FCBC8u, &recomp_unit_0126, "recomp_unit_0126");
    runtime.register_function(0x089FCBE0u, &recomp_unit_0126, "recomp_unit_0126");
    runtime.register_function(0x089FCBF4u, &recomp_unit_0126, "recomp_unit_0126");
    runtime.register_function(0x089FCC1Cu, &recomp_unit_0126, "recomp_unit_0126");
    runtime.register_function(0x089FCC68u, &recomp_unit_0126, "recomp_unit_0126");
    runtime.register_function(0x089FCC7Cu, &recomp_unit_0126, "recomp_unit_0126");
    runtime.register_function(0x089FCC84u, &recomp_unit_0126, "recomp_unit_0126");
    runtime.register_function(0x089FCC88u, &recomp_unit_0126, "recomp_unit_0126");
    runtime.register_function(0x089FCC94u, &recomp_unit_0126, "recomp_unit_0126");
    runtime.register_function(0x089FCCB0u, &recomp_unit_0126, "recomp_unit_0126");
    runtime.register_function(0x089FCCC0u, &recomp_unit_0126, "recomp_unit_0126");
    runtime.register_function(0x089FCCDCu, &recomp_unit_0126, "recomp_unit_0126");
    runtime.register_function(0x089FCCE4u, &recomp_unit_0126, "recomp_unit_0126");
    runtime.register_function(0x089FCD84u, &recomp_unit_0126, "recomp_unit_0126");
    runtime.register_function(0x089FCD8Cu, &recomp_unit_0126, "recomp_unit_0126");
    runtime.register_function(0x089FCDB0u, &recomp_unit_0126, "recomp_unit_0126");
    runtime.register_function(0x089FCE00u, &recomp_unit_0126, "recomp_unit_0126");
    runtime.register_function(0x089FCE18u, &recomp_unit_0126, "recomp_unit_0126");
    runtime.register_function(0x089FCE30u, &recomp_unit_0126, "recomp_unit_0126");
    runtime.register_function(0x089FCE54u, &recomp_unit_0126, "recomp_unit_0126");
    runtime.register_function(0x089FCEA4u, &recomp_unit_0126, "recomp_unit_0126");
    runtime.register_function(0x089FCF14u, &recomp_unit_0126, "recomp_unit_0126");
    runtime.register_function(0x089FCF1Cu, &recomp_unit_0126, "recomp_unit_0126");
    runtime.register_function(0x089FCF2Cu, &recomp_unit_0126, "recomp_unit_0126");
    runtime.register_function(0x089FCF3Cu, &recomp_unit_0126, "recomp_unit_0126");
    runtime.register_function(0x089FCF4Cu, &recomp_unit_0126, "recomp_unit_0126");
    runtime.register_function(0x089FCF64u, &recomp_unit_0126, "recomp_unit_0126");
    runtime.register_function(0x089FCF68u, &recomp_unit_0126, "recomp_unit_0126");
    runtime.register_function(0x089FCF70u, &recomp_unit_0126, "recomp_unit_0126");
    runtime.register_function(0x089FCF90u, &recomp_unit_0126, "recomp_unit_0126");
    runtime.register_function(0x089FCFB8u, &recomp_unit_0126, "recomp_unit_0126");
    runtime.register_function(0x089FCFDCu, &recomp_unit_0126, "recomp_unit_0126");
    runtime.register_function(0x089FCFF8u, &recomp_unit_0126, "recomp_unit_0126");
    runtime.register_function(0x089FD00Cu, &recomp_unit_0126, "recomp_unit_0126");
    runtime.register_function(0x089FD034u, &recomp_unit_0126, "recomp_unit_0126");
    runtime.register_function(0x089FD05Cu, &recomp_unit_0126, "recomp_unit_0126");
    runtime.register_function(0x089FD078u, &recomp_unit_0126, "recomp_unit_0126");
    runtime.register_function(0x089FD098u, &recomp_unit_0126, "recomp_unit_0126");
    runtime.register_function(0x089FD0A8u, &recomp_unit_0126, "recomp_unit_0126");
    runtime.register_function(0x089FD0D4u, &recomp_unit_0126, "recomp_unit_0126");
    runtime.register_function(0x089FD0E8u, &recomp_unit_0126, "recomp_unit_0126");
    runtime.register_function(0x089FD10Cu, &recomp_unit_0126, "recomp_unit_0126");
    runtime.register_function(0x089FD118u, &recomp_unit_0126, "recomp_unit_0126");
    runtime.register_function(0x089FD124u, &recomp_unit_0126, "recomp_unit_0126");
    runtime.register_function(0x089FD134u, &recomp_unit_0126, "recomp_unit_0126");
    runtime.register_function(0x089FD140u, &recomp_unit_0126, "recomp_unit_0126");
    runtime.register_function(0x089FD148u, &recomp_unit_0126, "recomp_unit_0126");
    runtime.register_function(0x089FD154u, &recomp_unit_0126, "recomp_unit_0126");
    runtime.register_function(0x089FD15Cu, &recomp_unit_0126, "recomp_unit_0126");
    runtime.register_function(0x089FD170u, &recomp_unit_0126, "recomp_unit_0126");
    runtime.register_function(0x089FD174u, &recomp_unit_0126, "recomp_unit_0126");
    runtime.register_function(0x089FD198u, &recomp_unit_0126, "recomp_unit_0126");
    runtime.register_function(0x089FD1A4u, &recomp_unit_0126, "recomp_unit_0126");
    runtime.register_function(0x089FD1BCu, &recomp_unit_0126, "recomp_unit_0126");
    runtime.register_function(0x089FD1CCu, &recomp_unit_0126, "recomp_unit_0126");
    runtime.register_function(0x089FD1D8u, &recomp_unit_0126, "recomp_unit_0126");
    runtime.register_function(0x089FD200u, &recomp_unit_0126, "recomp_unit_0126");
    runtime.register_function(0x089FD228u, &recomp_unit_0126, "recomp_unit_0126");
    runtime.register_function(0x089FD244u, &recomp_unit_0126, "recomp_unit_0126");
    runtime.register_function(0x089FD264u, &recomp_unit_0126, "recomp_unit_0126");
    runtime.register_function(0x089FD274u, &recomp_unit_0126, "recomp_unit_0126");
    runtime.register_function(0x089FD2A8u, &recomp_unit_0126, "recomp_unit_0126");
    runtime.register_function(0x089FD2BCu, &recomp_unit_0126, "recomp_unit_0126");
    runtime.register_function(0x089FD2D0u, &recomp_unit_0126, "recomp_unit_0126");
    runtime.register_function(0x089FD2FCu, &recomp_unit_0126, "recomp_unit_0126");
    runtime.register_function(0x089FD308u, &recomp_unit_0126, "recomp_unit_0126");
    runtime.register_function(0x089FD314u, &recomp_unit_0126, "recomp_unit_0126");
    runtime.register_function(0x089FD324u, &recomp_unit_0126, "recomp_unit_0126");
    runtime.register_function(0x089FD330u, &recomp_unit_0126, "recomp_unit_0126");
    runtime.register_function(0x089FD338u, &recomp_unit_0126, "recomp_unit_0126");
    runtime.register_function(0x089FD344u, &recomp_unit_0126, "recomp_unit_0126");
    runtime.register_function(0x089FD34Cu, &recomp_unit_0126, "recomp_unit_0126");
    runtime.register_function(0x089FD360u, &recomp_unit_0126, "recomp_unit_0126");
    runtime.register_function(0x089FD364u, &recomp_unit_0126, "recomp_unit_0126");
    runtime.register_function(0x089FD390u, &recomp_unit_0126, "recomp_unit_0126");
    runtime.register_function(0x089FD39Cu, &recomp_unit_0126, "recomp_unit_0126");
    runtime.register_function(0x089FD3B4u, &recomp_unit_0126, "recomp_unit_0126");
    runtime.register_function(0x089FD3C4u, &recomp_unit_0126, "recomp_unit_0126");
    runtime.register_function(0x089FD3D0u, &recomp_unit_0126, "recomp_unit_0126");
    runtime.register_function(0x089FD3F8u, &recomp_unit_0126, "recomp_unit_0126");
    runtime.register_function(0x089FD41Cu, &recomp_unit_0126, "recomp_unit_0126");
    runtime.register_function(0x089FD438u, &recomp_unit_0126, "recomp_unit_0126");
    runtime.register_function(0x089FD458u, &recomp_unit_0126, "recomp_unit_0126");
    runtime.register_function(0x089FD468u, &recomp_unit_0126, "recomp_unit_0126");
    runtime.register_function(0x089FD49Cu, &recomp_unit_0126, "recomp_unit_0126");
    runtime.register_function(0x089FD4A8u, &recomp_unit_0126, "recomp_unit_0126");
    runtime.register_function(0x089FD4B4u, &recomp_unit_0126, "recomp_unit_0126");
    runtime.register_function(0x089FD4C4u, &recomp_unit_0126, "recomp_unit_0126");
    runtime.register_function(0x089FD4D0u, &recomp_unit_0126, "recomp_unit_0126");
    runtime.register_function(0x089FD4D8u, &recomp_unit_0126, "recomp_unit_0126");
    runtime.register_function(0x089FD4E4u, &recomp_unit_0126, "recomp_unit_0126");
    runtime.register_function(0x089FD4ECu, &recomp_unit_0126, "recomp_unit_0126");
    runtime.register_function(0x089FD500u, &recomp_unit_0126, "recomp_unit_0126");
    runtime.register_function(0x089FD504u, &recomp_unit_0126, "recomp_unit_0126");
    runtime.register_function(0x089FD51Cu, &recomp_unit_0126, "recomp_unit_0126");
    runtime.register_function(0x089FD528u, &recomp_unit_0126, "recomp_unit_0126");
    runtime.register_function(0x089FD534u, &recomp_unit_0126, "recomp_unit_0126");
    runtime.register_function(0x089FD55Cu, &recomp_unit_0126, "recomp_unit_0126");
    runtime.register_function(0x089FD584u, &recomp_unit_0126, "recomp_unit_0126");
    runtime.register_function(0x089FD5A0u, &recomp_unit_0126, "recomp_unit_0126");
    runtime.register_function(0x089FD5C0u, &recomp_unit_0126, "recomp_unit_0126");
    runtime.register_function(0x089FD5D0u, &recomp_unit_0126, "recomp_unit_0126");
    runtime.register_function(0x089FD60Cu, &recomp_unit_0126, "recomp_unit_0126");
    runtime.register_function(0x089FD620u, &recomp_unit_0126, "recomp_unit_0126");
    runtime.register_function(0x089FD634u, &recomp_unit_0126, "recomp_unit_0126");
    runtime.register_function(0x089FD648u, &recomp_unit_0126, "recomp_unit_0126");
    runtime.register_function(0x089FD67Cu, &recomp_unit_0126, "recomp_unit_0126");
    runtime.register_function(0x089FD688u, &recomp_unit_0126, "recomp_unit_0126");
    runtime.register_function(0x089FD694u, &recomp_unit_0126, "recomp_unit_0126");
    runtime.register_function(0x089FD6A4u, &recomp_unit_0126, "recomp_unit_0126");
    runtime.register_function(0x089FD6B0u, &recomp_unit_0126, "recomp_unit_0126");
    runtime.register_function(0x089FD6B8u, &recomp_unit_0126, "recomp_unit_0126");
    runtime.register_function(0x089FD6C4u, &recomp_unit_0126, "recomp_unit_0126");
    runtime.register_function(0x089FD6CCu, &recomp_unit_0126, "recomp_unit_0126");
    runtime.register_function(0x089FD6E0u, &recomp_unit_0126, "recomp_unit_0126");
    runtime.register_function(0x089FD6E4u, &recomp_unit_0126, "recomp_unit_0126");
    runtime.register_function(0x089FD718u, &recomp_unit_0126, "recomp_unit_0126");
    runtime.register_function(0x089FD724u, &recomp_unit_0126, "recomp_unit_0126");
    runtime.register_function(0x089FD73Cu, &recomp_unit_0126, "recomp_unit_0126");
    runtime.register_function(0x089FD74Cu, &recomp_unit_0126, "recomp_unit_0126");
    runtime.register_function(0x089FD758u, &recomp_unit_0126, "recomp_unit_0126");
    runtime.register_function(0x089FD780u, &recomp_unit_0126, "recomp_unit_0126");
    runtime.register_function(0x089FD7A8u, &recomp_unit_0126, "recomp_unit_0126");
    runtime.register_function(0x089FD7C4u, &recomp_unit_0126, "recomp_unit_0126");
    runtime.register_function(0x089FD7E4u, &recomp_unit_0126, "recomp_unit_0126");
    runtime.register_function(0x089FD7F4u, &recomp_unit_0126, "recomp_unit_0126");
    runtime.register_function(0x089FD82Cu, &recomp_unit_0126, "recomp_unit_0126");
    runtime.register_function(0x089FD838u, &recomp_unit_0126, "recomp_unit_0126");
    runtime.register_function(0x089FD844u, &recomp_unit_0126, "recomp_unit_0126");
    runtime.register_function(0x089FD854u, &recomp_unit_0126, "recomp_unit_0126");
    runtime.register_function(0x089FD860u, &recomp_unit_0126, "recomp_unit_0126");
    runtime.register_function(0x089FD868u, &recomp_unit_0126, "recomp_unit_0126");
    runtime.register_function(0x089FD874u, &recomp_unit_0126, "recomp_unit_0126");
    runtime.register_function(0x089FD87Cu, &recomp_unit_0126, "recomp_unit_0126");
    runtime.register_function(0x089FD890u, &recomp_unit_0126, "recomp_unit_0126");
    runtime.register_function(0x089FD894u, &recomp_unit_0126, "recomp_unit_0126");
    runtime.register_function(0x089FD8ACu, &recomp_unit_0126, "recomp_unit_0126");
    runtime.register_function(0x089FD8B8u, &recomp_unit_0126, "recomp_unit_0126");
    runtime.register_function(0x089FD8C4u, &recomp_unit_0126, "recomp_unit_0126");
    runtime.register_function(0x089FD8ECu, &recomp_unit_0126, "recomp_unit_0126");
    runtime.register_function(0x089FD910u, &recomp_unit_0126, "recomp_unit_0126");
    runtime.register_function(0x089FD92Cu, &recomp_unit_0126, "recomp_unit_0126");
    runtime.register_function(0x089FD94Cu, &recomp_unit_0126, "recomp_unit_0126");
    runtime.register_function(0x089FD95Cu, &recomp_unit_0126, "recomp_unit_0126");
    runtime.register_function(0x089FD994u, &recomp_unit_0126, "recomp_unit_0126");
    runtime.register_function(0x089FD9A0u, &recomp_unit_0126, "recomp_unit_0126");
    runtime.register_function(0x089FD9ACu, &recomp_unit_0126, "recomp_unit_0126");
    runtime.register_function(0x089FD9BCu, &recomp_unit_0126, "recomp_unit_0126");
    runtime.register_function(0x089FD9C8u, &recomp_unit_0126, "recomp_unit_0126");
    runtime.register_function(0x089FD9D0u, &recomp_unit_0126, "recomp_unit_0126");
    runtime.register_function(0x089FD9DCu, &recomp_unit_0126, "recomp_unit_0126");
    runtime.register_function(0x089FD9E4u, &recomp_unit_0126, "recomp_unit_0126");
    runtime.register_function(0x089FD9F8u, &recomp_unit_0126, "recomp_unit_0126");
    runtime.register_function(0x089FD9FCu, &recomp_unit_0126, "recomp_unit_0126");
    runtime.register_function(0x089FDA14u, &recomp_unit_0126, "recomp_unit_0126");
    runtime.register_function(0x089FDA20u, &recomp_unit_0126, "recomp_unit_0126");
    runtime.register_function(0x089FDA2Cu, &recomp_unit_0126, "recomp_unit_0126");
    runtime.register_function(0x089FDA38u, &recomp_unit_0126, "recomp_unit_0126");
    runtime.register_function(0x089FDA50u, &recomp_unit_0126, "recomp_unit_0126");
    runtime.register_function(0x089FDA74u, &recomp_unit_0126, "recomp_unit_0126");
    runtime.register_function(0x089FDB34u, &recomp_unit_0126, "recomp_unit_0126");
    runtime.register_function(0x089FDB38u, &recomp_unit_0126, "recomp_unit_0126");
    runtime.register_function(0x089FDB44u, &recomp_unit_0126, "recomp_unit_0126");
    runtime.register_function(0x089FDB50u, &recomp_unit_0126, "recomp_unit_0126");
    runtime.register_function(0x089FDB5Cu, &recomp_unit_0126, "recomp_unit_0126");
    runtime.register_function(0x089FDB64u, &recomp_unit_0126, "recomp_unit_0126");
    runtime.register_function(0x089FDB70u, &recomp_unit_0126, "recomp_unit_0126");
    runtime.register_function(0x089FDC1Cu, &recomp_unit_0126, "recomp_unit_0126");
    runtime.register_function(0x089FDC28u, &recomp_unit_0126, "recomp_unit_0126");
    runtime.register_function(0x089FDC30u, &recomp_unit_0126, "recomp_unit_0126");
    runtime.register_function(0x089FDC58u, &recomp_unit_0126, "recomp_unit_0126");
    runtime.register_function(0x089FDCACu, &recomp_unit_0126, "recomp_unit_0126");
    runtime.register_function(0x089FDCBCu, &recomp_unit_0126, "recomp_unit_0126");
    runtime.register_function(0x089FDCC4u, &recomp_unit_0126, "recomp_unit_0126");
    runtime.register_function(0x089FDCECu, &recomp_unit_0126, "recomp_unit_0126");
    runtime.register_function(0x089FDCF4u, &recomp_unit_0126, "recomp_unit_0126");
    runtime.register_function(0x089FDD1Cu, &recomp_unit_0126, "recomp_unit_0126");
    runtime.register_function(0x089FDD28u, &recomp_unit_0126, "recomp_unit_0126");
    runtime.register_function(0x089FDD4Cu, &recomp_unit_0126, "recomp_unit_0126");
    runtime.register_function(0x089FDD58u, &recomp_unit_0126, "recomp_unit_0126");
    runtime.register_function(0x089FDD7Cu, &recomp_unit_0126, "recomp_unit_0126");
    runtime.register_function(0x089FDDACu, &recomp_unit_0126, "recomp_unit_0126");
    runtime.register_function(0x089FDDC4u, &recomp_unit_0126, "recomp_unit_0126");
    runtime.register_function(0x089FDDD4u, &recomp_unit_0126, "recomp_unit_0126");
    runtime.register_function(0x089FDDECu, &recomp_unit_0126, "recomp_unit_0126");
    runtime.register_function(0x089FDDFCu, &recomp_unit_0126, "recomp_unit_0126");
    runtime.register_function(0x089FDE0Cu, &recomp_unit_0126, "recomp_unit_0126");
    runtime.register_function(0x089FDE64u, &recomp_unit_0126, "recomp_unit_0126");
    runtime.register_function(0x089FDE78u, &recomp_unit_0126, "recomp_unit_0126");
    runtime.register_function(0x089FDE80u, &recomp_unit_0126, "recomp_unit_0126");
    runtime.register_function(0x089FDE84u, &recomp_unit_0126, "recomp_unit_0126");
    runtime.register_function(0x089FDE90u, &recomp_unit_0126, "recomp_unit_0126");
    runtime.register_function(0x089FDE98u, &recomp_unit_0126, "recomp_unit_0126");
    runtime.register_function(0x089FDEACu, &recomp_unit_0126, "recomp_unit_0126");
    runtime.register_function(0x089FDEB4u, &recomp_unit_0126, "recomp_unit_0126");
    runtime.register_function(0x089FDED4u, &recomp_unit_0126, "recomp_unit_0126");
    runtime.register_function(0x089FDEDCu, &recomp_unit_0126, "recomp_unit_0126");
    runtime.register_function(0x089FDEE4u, &recomp_unit_0126, "recomp_unit_0126");
    runtime.register_function(0x089FDEF8u, &recomp_unit_0126, "recomp_unit_0126");
    runtime.register_function(0x089FDF00u, &recomp_unit_0126, "recomp_unit_0126");
    runtime.register_function(0x089FDF08u, &recomp_unit_0126, "recomp_unit_0126");
    runtime.register_function(0x089FDF1Cu, &recomp_unit_0126, "recomp_unit_0126");
    runtime.register_function(0x089FDF24u, &recomp_unit_0126, "recomp_unit_0126");
    runtime.register_function(0x089FDF2Cu, &recomp_unit_0126, "recomp_unit_0126");
    runtime.register_function(0x089FDF3Cu, &recomp_unit_0126, "recomp_unit_0126");
    runtime.register_function(0x089FDF44u, &recomp_unit_0126, "recomp_unit_0126");
    runtime.register_function(0x089FDF8Cu, &recomp_unit_0126, "recomp_unit_0126");
    runtime.register_function(0x089FDFA4u, &recomp_unit_0126, "recomp_unit_0126");
    runtime.register_function(0x089FDFA8u, &recomp_unit_0126, "recomp_unit_0126");
    runtime.register_function(0x089FDFB4u, &recomp_unit_0126, "recomp_unit_0126");
    runtime.register_function(0x089FDFBCu, &recomp_unit_0126, "recomp_unit_0126");
    runtime.register_function(0x089FDFC8u, &recomp_unit_0126, "recomp_unit_0126");
    runtime.register_function(0x089FDFFCu, &recomp_unit_0126, "recomp_unit_0126");
    runtime.register_function(0x089FE054u, &recomp_unit_0126, "recomp_unit_0126");
    runtime.register_function(0x089FE060u, &recomp_unit_0126, "recomp_unit_0126");
    runtime.register_function(0x089FE068u, &recomp_unit_0126, "recomp_unit_0126");
    runtime.register_function(0x089FE074u, &recomp_unit_0126, "recomp_unit_0126");
    runtime.register_function(0x089FE07Cu, &recomp_unit_0126, "recomp_unit_0126");
    runtime.register_function(0x089FE09Cu, &recomp_unit_0126, "recomp_unit_0126");
    runtime.register_function(0x089FE0ACu, &recomp_unit_0126, "recomp_unit_0126");
    runtime.register_function(0x089FE0B8u, &recomp_unit_0126, "recomp_unit_0126");
    runtime.register_function(0x089FE0C4u, &recomp_unit_0126, "recomp_unit_0126");
    runtime.register_function(0x089FE0D4u, &recomp_unit_0126, "recomp_unit_0126");
    runtime.register_function(0x089FE0E0u, &recomp_unit_0126, "recomp_unit_0126");
    runtime.register_function(0x089FE0ECu, &recomp_unit_0126, "recomp_unit_0126");
    runtime.register_function(0x089FE0FCu, &recomp_unit_0126, "recomp_unit_0126");
    runtime.register_function(0x089FE108u, &recomp_unit_0126, "recomp_unit_0126");
    runtime.register_function(0x089FE114u, &recomp_unit_0126, "recomp_unit_0126");
    runtime.register_function(0x089FE124u, &recomp_unit_0126, "recomp_unit_0126");
    runtime.register_function(0x089FE130u, &recomp_unit_0126, "recomp_unit_0126");
    runtime.register_function(0x089FE13Cu, &recomp_unit_0126, "recomp_unit_0126");
    runtime.register_function(0x089FE14Cu, &recomp_unit_0126, "recomp_unit_0126");
    runtime.register_function(0x089FE158u, &recomp_unit_0126, "recomp_unit_0126");
    runtime.register_function(0x089FE164u, &recomp_unit_0126, "recomp_unit_0126");
    runtime.register_function(0x089FE174u, &recomp_unit_0126, "recomp_unit_0126");
    runtime.register_function(0x089FE180u, &recomp_unit_0126, "recomp_unit_0126");
    runtime.register_function(0x089FE18Cu, &recomp_unit_0126, "recomp_unit_0126");
    runtime.register_function(0x089FE19Cu, &recomp_unit_0126, "recomp_unit_0126");
    runtime.register_function(0x089FE1A8u, &recomp_unit_0126, "recomp_unit_0126");
    runtime.register_function(0x089FE1B4u, &recomp_unit_0126, "recomp_unit_0126");
    runtime.register_function(0x089FE1C4u, &recomp_unit_0126, "recomp_unit_0126");
    runtime.register_function(0x089FE1D0u, &recomp_unit_0126, "recomp_unit_0126");
    runtime.register_function(0x089FE1DCu, &recomp_unit_0126, "recomp_unit_0126");
    runtime.register_function(0x089FE1ECu, &recomp_unit_0126, "recomp_unit_0126");
    runtime.register_function(0x089FE1F8u, &recomp_unit_0126, "recomp_unit_0126");
    runtime.register_function(0x089FE204u, &recomp_unit_0126, "recomp_unit_0126");
    runtime.register_function(0x089FE214u, &recomp_unit_0126, "recomp_unit_0126");
    runtime.register_function(0x089FE220u, &recomp_unit_0126, "recomp_unit_0126");
    runtime.register_function(0x089FE22Cu, &recomp_unit_0126, "recomp_unit_0126");
    runtime.register_function(0x089FE23Cu, &recomp_unit_0126, "recomp_unit_0126");
    runtime.register_function(0x089FE248u, &recomp_unit_0126, "recomp_unit_0126");
    runtime.register_function(0x089FE254u, &recomp_unit_0126, "recomp_unit_0126");
    runtime.register_function(0x089FE264u, &recomp_unit_0126, "recomp_unit_0126");
    runtime.register_function(0x089FE270u, &recomp_unit_0126, "recomp_unit_0126");
    runtime.register_function(0x089FE27Cu, &recomp_unit_0126, "recomp_unit_0126");
    runtime.register_function(0x089FE294u, &recomp_unit_0126, "recomp_unit_0126");
    runtime.register_function(0x089FE2C0u, &recomp_unit_0126, "recomp_unit_0126");
    runtime.register_function(0x089FE2C8u, &recomp_unit_0126, "recomp_unit_0126");
    runtime.register_function(0x089FE2D0u, &recomp_unit_0126, "recomp_unit_0126");
    runtime.register_function(0x089FE2DCu, &recomp_unit_0126, "recomp_unit_0126");
    runtime.register_function(0x089FE2F8u, &recomp_unit_0126, "recomp_unit_0126");
    runtime.register_function(0x089FE308u, &recomp_unit_0126, "recomp_unit_0126");
    runtime.register_function(0x089FE31Cu, &recomp_unit_0126, "recomp_unit_0126");
    runtime.register_function(0x089FE32Cu, &recomp_unit_0126, "recomp_unit_0126");
    runtime.register_function(0x089FE338u, &recomp_unit_0126, "recomp_unit_0126");
    runtime.register_function(0x089FE348u, &recomp_unit_0126, "recomp_unit_0126");
    runtime.register_function(0x089FE364u, &recomp_unit_0126, "recomp_unit_0126");
    runtime.register_function(0x089FE36Cu, &recomp_unit_0126, "recomp_unit_0126");
    runtime.register_function(0x089FE378u, &recomp_unit_0126, "recomp_unit_0126");
    runtime.register_function(0x089FE388u, &recomp_unit_0126, "recomp_unit_0126");
    runtime.register_function(0x089FE398u, &recomp_unit_0126, "recomp_unit_0126");
    runtime.register_function(0x089FE3A8u, &recomp_unit_0126, "recomp_unit_0126");
    runtime.register_function(0x089FE3B4u, &recomp_unit_0126, "recomp_unit_0126");
    runtime.register_function(0x089FE3C4u, &recomp_unit_0126, "recomp_unit_0126");
    runtime.register_function(0x089FE3E0u, &recomp_unit_0126, "recomp_unit_0126");
    runtime.register_function(0x089FE3E8u, &recomp_unit_0126, "recomp_unit_0126");
    runtime.register_function(0x089FE3F4u, &recomp_unit_0126, "recomp_unit_0126");
    runtime.register_function(0x089FE404u, &recomp_unit_0126, "recomp_unit_0126");
    runtime.register_function(0x089FE414u, &recomp_unit_0126, "recomp_unit_0126");
    runtime.register_function(0x089FE424u, &recomp_unit_0126, "recomp_unit_0126");
    runtime.register_function(0x089FE430u, &recomp_unit_0126, "recomp_unit_0126");
    runtime.register_function(0x089FE440u, &recomp_unit_0126, "recomp_unit_0126");
    runtime.register_function(0x089FE45Cu, &recomp_unit_0126, "recomp_unit_0126");
    runtime.register_function(0x089FE464u, &recomp_unit_0126, "recomp_unit_0126");
    runtime.register_function(0x089FE470u, &recomp_unit_0126, "recomp_unit_0126");
    runtime.register_function(0x089FE480u, &recomp_unit_0126, "recomp_unit_0126");
    runtime.register_function(0x089FE490u, &recomp_unit_0126, "recomp_unit_0126");
    runtime.register_function(0x089FE4A0u, &recomp_unit_0126, "recomp_unit_0126");
    runtime.register_function(0x089FE4ACu, &recomp_unit_0126, "recomp_unit_0126");
    runtime.register_function(0x089FE4BCu, &recomp_unit_0126, "recomp_unit_0126");
    runtime.register_function(0x089FE4D8u, &recomp_unit_0126, "recomp_unit_0126");
    runtime.register_function(0x089FE4E0u, &recomp_unit_0126, "recomp_unit_0126");
    runtime.register_function(0x089FE4ECu, &recomp_unit_0126, "recomp_unit_0126");
    runtime.register_function(0x089FE4FCu, &recomp_unit_0126, "recomp_unit_0126");
    runtime.register_function(0x089FE50Cu, &recomp_unit_0126, "recomp_unit_0126");
    runtime.register_function(0x089FE51Cu, &recomp_unit_0126, "recomp_unit_0126");
    runtime.register_function(0x089FE528u, &recomp_unit_0126, "recomp_unit_0126");
    runtime.register_function(0x089FE538u, &recomp_unit_0126, "recomp_unit_0126");
    runtime.register_function(0x089FE554u, &recomp_unit_0126, "recomp_unit_0126");
    runtime.register_function(0x089FE55Cu, &recomp_unit_0126, "recomp_unit_0126");
    runtime.register_function(0x089FE568u, &recomp_unit_0126, "recomp_unit_0126");
    runtime.register_function(0x089FE578u, &recomp_unit_0126, "recomp_unit_0126");
    runtime.register_function(0x089FE588u, &recomp_unit_0126, "recomp_unit_0126");
    runtime.register_function(0x089FE598u, &recomp_unit_0126, "recomp_unit_0126");
    runtime.register_function(0x089FE5A4u, &recomp_unit_0126, "recomp_unit_0126");
    runtime.register_function(0x089FE5B4u, &recomp_unit_0126, "recomp_unit_0126");
    runtime.register_function(0x089FE5D0u, &recomp_unit_0126, "recomp_unit_0126");
    runtime.register_function(0x089FE5D8u, &recomp_unit_0126, "recomp_unit_0126");
    runtime.register_function(0x089FE5E4u, &recomp_unit_0126, "recomp_unit_0126");
    runtime.register_function(0x089FE5F4u, &recomp_unit_0126, "recomp_unit_0126");
    runtime.register_function(0x089FE604u, &recomp_unit_0126, "recomp_unit_0126");
    runtime.register_function(0x089FE614u, &recomp_unit_0126, "recomp_unit_0126");
    runtime.register_function(0x089FE620u, &recomp_unit_0126, "recomp_unit_0126");
    runtime.register_function(0x089FE630u, &recomp_unit_0126, "recomp_unit_0126");
    runtime.register_function(0x089FE64Cu, &recomp_unit_0126, "recomp_unit_0126");
    runtime.register_function(0x089FE654u, &recomp_unit_0126, "recomp_unit_0126");
    runtime.register_function(0x089FE660u, &recomp_unit_0126, "recomp_unit_0126");
    runtime.register_function(0x089FE670u, &recomp_unit_0126, "recomp_unit_0126");
    runtime.register_function(0x089FE680u, &recomp_unit_0126, "recomp_unit_0126");
    runtime.register_function(0x089FE690u, &recomp_unit_0126, "recomp_unit_0126");
    runtime.register_function(0x089FE69Cu, &recomp_unit_0126, "recomp_unit_0126");
    runtime.register_function(0x089FE6ACu, &recomp_unit_0126, "recomp_unit_0126");
    runtime.register_function(0x089FE6C8u, &recomp_unit_0126, "recomp_unit_0126");
    runtime.register_function(0x089FE6D0u, &recomp_unit_0126, "recomp_unit_0126");
    runtime.register_function(0x089FE6DCu, &recomp_unit_0126, "recomp_unit_0126");
    runtime.register_function(0x089FE6ECu, &recomp_unit_0126, "recomp_unit_0126");
    runtime.register_function(0x089FE6FCu, &recomp_unit_0126, "recomp_unit_0126");
    runtime.register_function(0x089FE70Cu, &recomp_unit_0126, "recomp_unit_0126");
    runtime.register_function(0x089FE718u, &recomp_unit_0126, "recomp_unit_0126");
    runtime.register_function(0x089FE728u, &recomp_unit_0126, "recomp_unit_0126");
    runtime.register_function(0x089FE744u, &recomp_unit_0126, "recomp_unit_0126");
    runtime.register_function(0x089FE74Cu, &recomp_unit_0126, "recomp_unit_0126");
    runtime.register_function(0x089FE758u, &recomp_unit_0126, "recomp_unit_0126");
    runtime.register_function(0x089FE768u, &recomp_unit_0126, "recomp_unit_0126");
    runtime.register_function(0x089FE788u, &recomp_unit_0126, "recomp_unit_0126");
    runtime.register_function(0x089FE798u, &recomp_unit_0126, "recomp_unit_0126");
    runtime.register_function(0x089FE7A4u, &recomp_unit_0126, "recomp_unit_0126");
    runtime.register_function(0x089FE7B4u, &recomp_unit_0126, "recomp_unit_0126");
    runtime.register_function(0x089FE7C0u, &recomp_unit_0126, "recomp_unit_0126");
    runtime.register_function(0x089FE7DCu, &recomp_unit_0126, "recomp_unit_0126");
    runtime.register_function(0x089FE7E4u, &recomp_unit_0126, "recomp_unit_0126");
    runtime.register_function(0x089FE7F0u, &recomp_unit_0126, "recomp_unit_0126");
    runtime.register_function(0x089FE800u, &recomp_unit_0126, "recomp_unit_0126");
    runtime.register_function(0x089FE804u, &recomp_unit_0126, "recomp_unit_0126");
    runtime.register_function(0x089FE810u, &recomp_unit_0126, "recomp_unit_0126");
    runtime.register_function(0x089FE820u, &recomp_unit_0126, "recomp_unit_0126");
    runtime.register_function(0x089FE830u, &recomp_unit_0126, "recomp_unit_0126");
    runtime.register_function(0x089FE83Cu, &recomp_unit_0126, "recomp_unit_0126");
    runtime.register_function(0x089FE84Cu, &recomp_unit_0126, "recomp_unit_0126");
    runtime.register_function(0x089FE858u, &recomp_unit_0126, "recomp_unit_0126");
    runtime.register_function(0x089FE874u, &recomp_unit_0126, "recomp_unit_0126");
    runtime.register_function(0x089FE87Cu, &recomp_unit_0126, "recomp_unit_0126");
    runtime.register_function(0x089FE888u, &recomp_unit_0126, "recomp_unit_0126");
    runtime.register_function(0x089FE898u, &recomp_unit_0126, "recomp_unit_0126");
    runtime.register_function(0x089FE89Cu, &recomp_unit_0126, "recomp_unit_0126");
    runtime.register_function(0x089FE8A8u, &recomp_unit_0126, "recomp_unit_0126");
    runtime.register_function(0x089FE8B8u, &recomp_unit_0126, "recomp_unit_0126");
    runtime.register_function(0x089FE8C8u, &recomp_unit_0126, "recomp_unit_0126");
    runtime.register_function(0x089FE8D4u, &recomp_unit_0126, "recomp_unit_0126");
    runtime.register_function(0x089FE8E4u, &recomp_unit_0126, "recomp_unit_0126");
    runtime.register_function(0x089FE8F0u, &recomp_unit_0126, "recomp_unit_0126");
    runtime.register_function(0x089FE90Cu, &recomp_unit_0126, "recomp_unit_0126");
    runtime.register_function(0x089FE914u, &recomp_unit_0126, "recomp_unit_0126");
    runtime.register_function(0x089FE920u, &recomp_unit_0126, "recomp_unit_0126");
    runtime.register_function(0x089FE930u, &recomp_unit_0126, "recomp_unit_0126");
    runtime.register_function(0x089FE934u, &recomp_unit_0126, "recomp_unit_0126");
    runtime.register_function(0x089FE940u, &recomp_unit_0126, "recomp_unit_0126");
    runtime.register_function(0x089FE95Cu, &recomp_unit_0126, "recomp_unit_0126");
    runtime.register_function(0x089FE968u, &recomp_unit_0126, "recomp_unit_0126");
    runtime.register_function(0x089FE970u, &recomp_unit_0126, "recomp_unit_0126");
    runtime.register_function(0x089FE97Cu, &recomp_unit_0126, "recomp_unit_0126");
    runtime.register_function(0x089FE984u, &recomp_unit_0126, "recomp_unit_0126");
    runtime.register_function(0x089FE990u, &recomp_unit_0126, "recomp_unit_0126");
    runtime.register_function(0x089FE998u, &recomp_unit_0126, "recomp_unit_0126");
    runtime.register_function(0x089FE9A0u, &recomp_unit_0126, "recomp_unit_0126");
    runtime.register_function(0x089FE9ACu, &recomp_unit_0126, "recomp_unit_0126");
    runtime.register_function(0x089FE9B4u, &recomp_unit_0126, "recomp_unit_0126");
    runtime.register_function(0x089FE9C0u, &recomp_unit_0126, "recomp_unit_0126");
    runtime.register_function(0x089FE9C8u, &recomp_unit_0126, "recomp_unit_0126");
    runtime.register_function(0x089FE9D4u, &recomp_unit_0126, "recomp_unit_0126");
    runtime.register_function(0x089FE9ECu, &recomp_unit_0126, "recomp_unit_0126");
    runtime.register_function(0x089FEA08u, &recomp_unit_0126, "recomp_unit_0126");
    runtime.register_function(0x089FEA10u, &recomp_unit_0126, "recomp_unit_0126");
    runtime.register_function(0x089FEA20u, &recomp_unit_0126, "recomp_unit_0126");
    runtime.register_function(0x089FEA3Cu, &recomp_unit_0126, "recomp_unit_0126");
    runtime.register_function(0x089FEA44u, &recomp_unit_0126, "recomp_unit_0126");
    runtime.register_function(0x089FEA54u, &recomp_unit_0126, "recomp_unit_0126");
    runtime.register_function(0x089FEA70u, &recomp_unit_0126, "recomp_unit_0126");
    runtime.register_function(0x089FEA78u, &recomp_unit_0126, "recomp_unit_0126");
    runtime.register_function(0x089FEA88u, &recomp_unit_0126, "recomp_unit_0126");
    runtime.register_function(0x089FEAA4u, &recomp_unit_0126, "recomp_unit_0126");
    runtime.register_function(0x089FEAACu, &recomp_unit_0126, "recomp_unit_0126");
    runtime.register_function(0x089FEABCu, &recomp_unit_0126, "recomp_unit_0126");
    runtime.register_function(0x089FEAD8u, &recomp_unit_0126, "recomp_unit_0126");
    runtime.register_function(0x089FEAE0u, &recomp_unit_0126, "recomp_unit_0126");
    runtime.register_function(0x089FEAF0u, &recomp_unit_0126, "recomp_unit_0126");
    runtime.register_function(0x089FEB0Cu, &recomp_unit_0126, "recomp_unit_0126");
    runtime.register_function(0x089FEB14u, &recomp_unit_0126, "recomp_unit_0126");
    runtime.register_function(0x089FEB24u, &recomp_unit_0126, "recomp_unit_0126");
    runtime.register_function(0x089FEB40u, &recomp_unit_0126, "recomp_unit_0126");
    runtime.register_function(0x089FEB48u, &recomp_unit_0126, "recomp_unit_0126");
    runtime.register_function(0x089FEB58u, &recomp_unit_0126, "recomp_unit_0126");
    runtime.register_function(0x089FEB74u, &recomp_unit_0126, "recomp_unit_0126");
    runtime.register_function(0x089FEB7Cu, &recomp_unit_0126, "recomp_unit_0126");
    runtime.register_function(0x089FEB8Cu, &recomp_unit_0126, "recomp_unit_0126");
    runtime.register_function(0x089FEBA8u, &recomp_unit_0126, "recomp_unit_0126");
    runtime.register_function(0x089FEBB0u, &recomp_unit_0126, "recomp_unit_0126");
    runtime.register_function(0x089FEBC0u, &recomp_unit_0126, "recomp_unit_0126");
    runtime.register_function(0x089FEBDCu, &recomp_unit_0126, "recomp_unit_0126");
    runtime.register_function(0x089FEBE4u, &recomp_unit_0126, "recomp_unit_0126");
    runtime.register_function(0x089FEBF4u, &recomp_unit_0126, "recomp_unit_0126");
    runtime.register_function(0x089FEC10u, &recomp_unit_0126, "recomp_unit_0126");
    runtime.register_function(0x089FEC18u, &recomp_unit_0126, "recomp_unit_0126");
    runtime.register_function(0x089FEC28u, &recomp_unit_0126, "recomp_unit_0126");
    runtime.register_function(0x089FEC44u, &recomp_unit_0126, "recomp_unit_0126");
    runtime.register_function(0x089FEC4Cu, &recomp_unit_0126, "recomp_unit_0126");
    runtime.register_function(0x089FEC5Cu, &recomp_unit_0126, "recomp_unit_0126");
    runtime.register_function(0x089FEC98u, &recomp_unit_0126, "recomp_unit_0126");
    runtime.register_function(0x089FECA8u, &recomp_unit_0126, "recomp_unit_0126");
    runtime.register_function(0x089FECBCu, &recomp_unit_0126, "recomp_unit_0126");
    runtime.register_function(0x089FECC8u, &recomp_unit_0126, "recomp_unit_0126");
    runtime.register_function(0x089FECD8u, &recomp_unit_0126, "recomp_unit_0126");
    runtime.register_function(0x089FECECu, &recomp_unit_0126, "recomp_unit_0126");
    runtime.register_function(0x089FECFCu, &recomp_unit_0126, "recomp_unit_0126");
    runtime.register_function(0x089FED08u, &recomp_unit_0126, "recomp_unit_0126");
    runtime.register_function(0x089FED14u, &recomp_unit_0126, "recomp_unit_0126");
    runtime.register_function(0x089FED1Cu, &recomp_unit_0126, "recomp_unit_0126");
    runtime.register_function(0x089FED30u, &recomp_unit_0126, "recomp_unit_0126");
    runtime.register_function(0x089FED38u, &recomp_unit_0126, "recomp_unit_0126");
    runtime.register_function(0x089FED50u, &recomp_unit_0126, "recomp_unit_0126");
    runtime.register_function(0x089FED58u, &recomp_unit_0126, "recomp_unit_0126");
    runtime.register_function(0x089FED6Cu, &recomp_unit_0126, "recomp_unit_0126");
    runtime.register_function(0x089FED78u, &recomp_unit_0126, "recomp_unit_0126");
    runtime.register_function(0x089FED80u, &recomp_unit_0126, "recomp_unit_0126");
    runtime.register_function(0x089FED84u, &recomp_unit_0126, "recomp_unit_0126");
    runtime.register_function(0x089FED90u, &recomp_unit_0126, "recomp_unit_0126");
    runtime.register_function(0x089FEDA0u, &recomp_unit_0126, "recomp_unit_0126");
    runtime.register_function(0x089FEDACu, &recomp_unit_0126, "recomp_unit_0126");
    runtime.register_function(0x089FEDB8u, &recomp_unit_0126, "recomp_unit_0126");
    runtime.register_function(0x089FEDC0u, &recomp_unit_0126, "recomp_unit_0126");
    runtime.register_function(0x089FEDECu, &recomp_unit_0126, "recomp_unit_0126");
    runtime.register_function(0x089FEE00u, &recomp_unit_0126, "recomp_unit_0126");
    runtime.register_function(0x089FEE18u, &recomp_unit_0126, "recomp_unit_0126");
    runtime.register_function(0x089FEE24u, &recomp_unit_0126, "recomp_unit_0126");
    runtime.register_function(0x089FEE44u, &recomp_unit_0126, "recomp_unit_0126");
    runtime.register_function(0x089FEE58u, &recomp_unit_0126, "recomp_unit_0126");
    runtime.register_function(0x089FEE70u, &recomp_unit_0126, "recomp_unit_0126");
    runtime.register_function(0x089FEE7Cu, &recomp_unit_0126, "recomp_unit_0126");
    runtime.register_function(0x089FEE9Cu, &recomp_unit_0126, "recomp_unit_0126");
    runtime.register_function(0x089FEEB0u, &recomp_unit_0126, "recomp_unit_0126");
    runtime.register_function(0x089FEEC8u, &recomp_unit_0126, "recomp_unit_0126");
    runtime.register_function(0x089FEED4u, &recomp_unit_0126, "recomp_unit_0126");
    runtime.register_function(0x089FEEF4u, &recomp_unit_0126, "recomp_unit_0126");
    runtime.register_function(0x089FEF18u, &recomp_unit_0126, "recomp_unit_0126");
    runtime.register_function(0x089FEF3Cu, &recomp_unit_0126, "recomp_unit_0126");
    runtime.register_function(0x089FEF60u, &recomp_unit_0126, "recomp_unit_0126");
    runtime.register_function(0x089FEF84u, &recomp_unit_0126, "recomp_unit_0126");
    runtime.register_function(0x089FEFA8u, &recomp_unit_0126, "recomp_unit_0126");
    runtime.register_function(0x089FEFCCu, &recomp_unit_0126, "recomp_unit_0126");
    runtime.register_function(0x089FEFE0u, &recomp_unit_0126, "recomp_unit_0126");
    runtime.register_function(0x089FEFF8u, &recomp_unit_0126, "recomp_unit_0126");
    runtime.register_function(0x089FF004u, &recomp_unit_0126, "recomp_unit_0126");
    runtime.register_function(0x089FF018u, &recomp_unit_0126, "recomp_unit_0126");
    runtime.register_function(0x089FF020u, &recomp_unit_0126, "recomp_unit_0126");
    runtime.register_function(0x089FF02Cu, &recomp_unit_0126, "recomp_unit_0126");
    runtime.register_function(0x089FF03Cu, &recomp_unit_0126, "recomp_unit_0126");
    runtime.register_function(0x089FF044u, &recomp_unit_0126, "recomp_unit_0126");
    runtime.register_function(0x089FF058u, &recomp_unit_0126, "recomp_unit_0126");
    runtime.register_function(0x089FF070u, &recomp_unit_0126, "recomp_unit_0126");
    runtime.register_function(0x089FF07Cu, &recomp_unit_0126, "recomp_unit_0126");
    runtime.register_function(0x089FF090u, &recomp_unit_0126, "recomp_unit_0126");
    runtime.register_function(0x089FF098u, &recomp_unit_0126, "recomp_unit_0126");
    runtime.register_function(0x089FF0A4u, &recomp_unit_0126, "recomp_unit_0126");
    runtime.register_function(0x089FF0B4u, &recomp_unit_0126, "recomp_unit_0126");
    runtime.register_function(0x089FF0BCu, &recomp_unit_0126, "recomp_unit_0126");
    runtime.register_function(0x089FF0D0u, &recomp_unit_0126, "recomp_unit_0126");
    runtime.register_function(0x089FF0E8u, &recomp_unit_0126, "recomp_unit_0126");
    runtime.register_function(0x089FF0F4u, &recomp_unit_0126, "recomp_unit_0126");
    runtime.register_function(0x089FF108u, &recomp_unit_0126, "recomp_unit_0126");
    runtime.register_function(0x089FF110u, &recomp_unit_0126, "recomp_unit_0126");
    runtime.register_function(0x089FF11Cu, &recomp_unit_0126, "recomp_unit_0126");
    runtime.register_function(0x089FF12Cu, &recomp_unit_0126, "recomp_unit_0126");
    runtime.register_function(0x089FF134u, &recomp_unit_0126, "recomp_unit_0126");
    runtime.register_function(0x089FF14Cu, &recomp_unit_0126, "recomp_unit_0126");
    runtime.register_function(0x089FF154u, &recomp_unit_0126, "recomp_unit_0126");
    runtime.register_function(0x089FF160u, &recomp_unit_0126, "recomp_unit_0126");
    runtime.register_function(0x089FF170u, &recomp_unit_0126, "recomp_unit_0126");
    runtime.register_function(0x089FF178u, &recomp_unit_0126, "recomp_unit_0126");
    runtime.register_function(0x089FF190u, &recomp_unit_0126, "recomp_unit_0126");
    runtime.register_function(0x089FF198u, &recomp_unit_0126, "recomp_unit_0126");
    runtime.register_function(0x089FF1A4u, &recomp_unit_0126, "recomp_unit_0126");
    runtime.register_function(0x089FF1B4u, &recomp_unit_0126, "recomp_unit_0126");
    runtime.register_function(0x089FF1BCu, &recomp_unit_0126, "recomp_unit_0126");
    runtime.register_function(0x089FF1D4u, &recomp_unit_0126, "recomp_unit_0126");
    runtime.register_function(0x089FF1DCu, &recomp_unit_0126, "recomp_unit_0126");
    runtime.register_function(0x089FF1E8u, &recomp_unit_0126, "recomp_unit_0126");
    runtime.register_function(0x089FF1F8u, &recomp_unit_0126, "recomp_unit_0126");
    runtime.register_function(0x089FF200u, &recomp_unit_0126, "recomp_unit_0126");
    runtime.register_function(0x089FF218u, &recomp_unit_0126, "recomp_unit_0126");
    runtime.register_function(0x089FF220u, &recomp_unit_0126, "recomp_unit_0126");
    runtime.register_function(0x089FF22Cu, &recomp_unit_0126, "recomp_unit_0126");
    runtime.register_function(0x089FF23Cu, &recomp_unit_0126, "recomp_unit_0126");
    runtime.register_function(0x089FF244u, &recomp_unit_0126, "recomp_unit_0126");
    runtime.register_function(0x089FF25Cu, &recomp_unit_0126, "recomp_unit_0126");
    runtime.register_function(0x089FF264u, &recomp_unit_0126, "recomp_unit_0126");
    runtime.register_function(0x089FF270u, &recomp_unit_0126, "recomp_unit_0126");
    runtime.register_function(0x089FF280u, &recomp_unit_0126, "recomp_unit_0126");
    runtime.register_function(0x089FF288u, &recomp_unit_0126, "recomp_unit_0126");
    runtime.register_function(0x089FF2A0u, &recomp_unit_0126, "recomp_unit_0126");
    runtime.register_function(0x089FF2A8u, &recomp_unit_0126, "recomp_unit_0126");
    runtime.register_function(0x089FF2B4u, &recomp_unit_0126, "recomp_unit_0126");
    runtime.register_function(0x089FF2C4u, &recomp_unit_0126, "recomp_unit_0126");
    runtime.register_function(0x089FF2CCu, &recomp_unit_0126, "recomp_unit_0126");
    runtime.register_function(0x089FF2E4u, &recomp_unit_0126, "recomp_unit_0126");
    runtime.register_function(0x089FF2ECu, &recomp_unit_0126, "recomp_unit_0126");
    runtime.register_function(0x089FF2F8u, &recomp_unit_0126, "recomp_unit_0126");
    runtime.register_function(0x089FF308u, &recomp_unit_0126, "recomp_unit_0126");
    runtime.register_function(0x089FF310u, &recomp_unit_0126, "recomp_unit_0126");
    runtime.register_function(0x089FF328u, &recomp_unit_0126, "recomp_unit_0126");
    runtime.register_function(0x089FF330u, &recomp_unit_0126, "recomp_unit_0126");
    runtime.register_function(0x089FF33Cu, &recomp_unit_0126, "recomp_unit_0126");
    runtime.register_function(0x089FF34Cu, &recomp_unit_0126, "recomp_unit_0126");
    runtime.register_function(0x089FF354u, &recomp_unit_0126, "recomp_unit_0126");
    runtime.register_function(0x089FF36Cu, &recomp_unit_0126, "recomp_unit_0126");
    runtime.register_function(0x089FF374u, &recomp_unit_0126, "recomp_unit_0126");
    runtime.register_function(0x089FF380u, &recomp_unit_0126, "recomp_unit_0126");
    runtime.register_function(0x089FF390u, &recomp_unit_0126, "recomp_unit_0126");
    runtime.register_function(0x089FF398u, &recomp_unit_0126, "recomp_unit_0126");
    runtime.register_function(0x089FF3C4u, &recomp_unit_0126, "recomp_unit_0126");
    runtime.register_function(0x089FF3DCu, &recomp_unit_0126, "recomp_unit_0126");
    runtime.register_function(0x089FF3ECu, &recomp_unit_0126, "recomp_unit_0126");
    runtime.register_function(0x089FF3FCu, &recomp_unit_0126, "recomp_unit_0126");
    runtime.register_function(0x089FF418u, &recomp_unit_0126, "recomp_unit_0126");
    runtime.register_function(0x089FF440u, &recomp_unit_0126, "recomp_unit_0126");
    runtime.register_function(0x089FF44Cu, &recomp_unit_0126, "recomp_unit_0126");
    runtime.register_function(0x089FF45Cu, &recomp_unit_0126, "recomp_unit_0126");
    runtime.register_function(0x089FF474u, &recomp_unit_0126, "recomp_unit_0126");
    runtime.register_function(0x089FF4A0u, &recomp_unit_0126, "recomp_unit_0126");
    runtime.register_function(0x089FF4B8u, &recomp_unit_0126, "recomp_unit_0126");
    runtime.register_function(0x089FF4C8u, &recomp_unit_0126, "recomp_unit_0126");
    runtime.register_function(0x089FF4D8u, &recomp_unit_0126, "recomp_unit_0126");
    runtime.register_function(0x089FF4F4u, &recomp_unit_0126, "recomp_unit_0126");
    runtime.register_function(0x089FF51Cu, &recomp_unit_0126, "recomp_unit_0126");
    runtime.register_function(0x089FF528u, &recomp_unit_0126, "recomp_unit_0126");
    runtime.register_function(0x089FF538u, &recomp_unit_0126, "recomp_unit_0126");
    runtime.register_function(0x089FF550u, &recomp_unit_0126, "recomp_unit_0126");
    runtime.register_function(0x089FF57Cu, &recomp_unit_0126, "recomp_unit_0126");
    runtime.register_function(0x089FF594u, &recomp_unit_0126, "recomp_unit_0126");
    runtime.register_function(0x089FF5A4u, &recomp_unit_0126, "recomp_unit_0126");
    runtime.register_function(0x089FF5B4u, &recomp_unit_0126, "recomp_unit_0126");
    runtime.register_function(0x089FF5D0u, &recomp_unit_0126, "recomp_unit_0126");
    runtime.register_function(0x089FF5F8u, &recomp_unit_0126, "recomp_unit_0126");
    runtime.register_function(0x089FF604u, &recomp_unit_0126, "recomp_unit_0126");
    runtime.register_function(0x089FF614u, &recomp_unit_0126, "recomp_unit_0126");
    runtime.register_function(0x089FF62Cu, &recomp_unit_0126, "recomp_unit_0126");
    runtime.register_function(0x089FF664u, &recomp_unit_0126, "recomp_unit_0126");
    runtime.register_function(0x089FF670u, &recomp_unit_0126, "recomp_unit_0126");
    runtime.register_function(0x089FF680u, &recomp_unit_0126, "recomp_unit_0126");
    runtime.register_function(0x089FF69Cu, &recomp_unit_0126, "recomp_unit_0126");
    runtime.register_function(0x089FF6A0u, &recomp_unit_0126, "recomp_unit_0126");
    runtime.register_function(0x089FF6ACu, &recomp_unit_0126, "recomp_unit_0126");
    runtime.register_function(0x089FF6D0u, &recomp_unit_0126, "recomp_unit_0126");
    runtime.register_function(0x089FF6F8u, &recomp_unit_0126, "recomp_unit_0126");
    runtime.register_function(0x089FF704u, &recomp_unit_0126, "recomp_unit_0126");
    runtime.register_function(0x089FF714u, &recomp_unit_0126, "recomp_unit_0126");
    runtime.register_function(0x089FF72Cu, &recomp_unit_0126, "recomp_unit_0126");
    runtime.register_function(0x089FF74Cu, &recomp_unit_0126, "recomp_unit_0126");
    runtime.register_function(0x089FF758u, &recomp_unit_0126, "recomp_unit_0126");
    runtime.register_function(0x089FF764u, &recomp_unit_0126, "recomp_unit_0126");
    runtime.register_function(0x089FF778u, &recomp_unit_0126, "recomp_unit_0126");
    runtime.register_function(0x089FF7A0u, &recomp_unit_0126, "recomp_unit_0126");
    runtime.register_function(0x089FF7ACu, &recomp_unit_0126, "recomp_unit_0126");
    runtime.register_function(0x089FF7BCu, &recomp_unit_0126, "recomp_unit_0126");
    runtime.register_function(0x089FF7D4u, &recomp_unit_0126, "recomp_unit_0126");
    runtime.register_function(0x089FF860u, &recomp_unit_0126, "recomp_unit_0126");
    runtime.register_function(0x089FF868u, &recomp_unit_0126, "recomp_unit_0126");
    runtime.register_function(0x089FF8B4u, &recomp_unit_0126, "recomp_unit_0126");
    runtime.register_function(0x089FF93Cu, &recomp_unit_0126, "recomp_unit_0126");
    runtime.register_function(0x089FF9D0u, &recomp_unit_0126, "recomp_unit_0126");
    runtime.register_function(0x089FF9E0u, &recomp_unit_0126, "recomp_unit_0126");
    runtime.register_function(0x089FF9ECu, &recomp_unit_0126, "recomp_unit_0126");
    runtime.register_function(0x089FFA04u, &recomp_unit_0126, "recomp_unit_0126");
    runtime.register_function(0x089FFA44u, &recomp_unit_0126, "recomp_unit_0126");
    runtime.register_function(0x089FFA50u, &recomp_unit_0126, "recomp_unit_0126");
    runtime.register_function(0x089FFA68u, &recomp_unit_0126, "recomp_unit_0126");
    runtime.register_function(0x089FFAA8u, &recomp_unit_0126, "recomp_unit_0126");
    runtime.register_function(0x089FFAB8u, &recomp_unit_0126, "recomp_unit_0126");
    runtime.register_function(0x089FFAD0u, &recomp_unit_0126, "recomp_unit_0126");
    runtime.register_function(0x089FFB10u, &recomp_unit_0126, "recomp_unit_0126");
    runtime.register_function(0x089FFB18u, &recomp_unit_0126, "recomp_unit_0126");
    runtime.register_function(0x089FFB24u, &recomp_unit_0126, "recomp_unit_0126");
    runtime.register_function(0x089FFB3Cu, &recomp_unit_0126, "recomp_unit_0126");
    runtime.register_function(0x089FFB7Cu, &recomp_unit_0126, "recomp_unit_0126");
    runtime.register_function(0x089FFB88u, &recomp_unit_0126, "recomp_unit_0126");
    runtime.register_function(0x089FFBA0u, &recomp_unit_0126, "recomp_unit_0126");
    runtime.register_function(0x089FFBE0u, &recomp_unit_0126, "recomp_unit_0126");
    runtime.register_function(0x089FFBECu, &recomp_unit_0126, "recomp_unit_0126");
    runtime.register_function(0x089FFC04u, &recomp_unit_0126, "recomp_unit_0126");
    runtime.register_function(0x089FFC44u, &recomp_unit_0126, "recomp_unit_0126");
    runtime.register_function(0x089FFC4Cu, &recomp_unit_0126, "recomp_unit_0126");
    runtime.register_function(0x089FFCD4u, &recomp_unit_0126, "recomp_unit_0126");
    runtime.register_function(0x089FFD2Cu, &recomp_unit_0126, "recomp_unit_0126");
    runtime.register_function(0x089FFD4Cu, &recomp_unit_0126, "recomp_unit_0126");
    runtime.register_function(0x089FFD6Cu, &recomp_unit_0126, "recomp_unit_0126");
    runtime.register_function(0x089FFE94u, &recomp_unit_0126, "recomp_unit_0126");
    runtime.register_function(0x089FFEB4u, &recomp_unit_0126, "recomp_unit_0126");
    runtime.register_function(0x089FFEE4u, &recomp_unit_0126, "recomp_unit_0126");
    runtime.register_function(0x089FFF04u, &recomp_unit_0126, "recomp_unit_0126");
    runtime.register_function(0x089FFFCCu, &recomp_unit_0126, "recomp_unit_0126");
}
} // namespace psprecomp
