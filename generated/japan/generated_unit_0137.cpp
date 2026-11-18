#include "psprecomp/runtime.hpp"
#include "generated_units.hpp"
#include <bit>
#include <cmath>
#include <cstdint>
#include <limits>

namespace psprecomp {
static const std::uint16_t kEntryIds_recomp_unit_0137[4091] = {
    1, 0, 0, 0, 0, 2, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 3, 0, 0, 0, 0, 0, 4, 0, 0, 0, 5, 0, 0, 0, 6, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 7, 0, 0, 0, 8, 0, 0, 0, 9, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    10, 0, 0, 0, 0, 0, 0, 11, 0, 0, 0, 12, 0, 0, 13, 0, 0, 0, 0, 0, 14, 0, 0, 0, 0, 15, 0, 0, 0, 0, 16, 0,
    0, 17, 0, 0, 0, 0, 0, 18, 0, 0, 19, 0, 0, 0, 0, 0, 20, 0, 0, 21, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 22,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 23, 0, 0, 0, 0, 0, 0, 0, 0, 0, 24, 0, 0, 25, 0, 0, 0, 0, 26, 0, 0,
    0, 0, 0, 27, 0, 0, 0, 0, 0, 0, 28, 0, 0, 29, 0, 0, 0, 0, 0, 0, 30, 0, 0, 0, 0, 0, 31, 0, 0, 0, 0, 0,
    32, 0, 33, 0, 0, 0, 0, 0, 0, 34, 0, 0, 0, 0, 0, 0, 35, 0, 0, 0, 0, 0, 0, 36, 0, 0, 0, 37, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 38, 0, 0, 0, 39, 0, 0, 40, 0, 0, 0, 0, 41, 0, 42, 0, 0, 0, 0, 0, 43,
    0, 0, 0, 0, 0, 44, 0, 0, 45, 0, 0, 0, 46, 47, 0, 0, 48, 0, 0, 49, 0, 0, 0, 0, 50, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 51, 0, 0, 52, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 53, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 54, 0, 0, 0, 0, 0, 0, 0, 0, 0, 55, 0, 0, 56, 0, 0, 0, 0, 57, 0, 0, 0, 58, 0, 0, 0, 59, 0,
    0, 0, 0, 0, 0, 60, 0, 0, 61, 0, 0, 0, 0, 62, 0, 0, 0, 63, 0, 0, 0, 64, 0, 0, 0, 65, 0, 0, 66, 0, 0, 67,
    0, 0, 68, 69, 0, 0, 70, 0, 0, 0, 71, 0, 0, 0, 72, 0, 0, 73, 0, 0, 0, 74, 0, 0, 0, 75, 0, 0, 0, 76, 0, 0,
    0, 77, 0, 0, 0, 0, 0, 0, 0, 78, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 79, 0, 0, 0, 0, 80, 0, 0, 0, 81, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 82, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 83, 0, 0, 0, 0, 84, 0, 0, 0, 85,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 86, 0, 0, 87, 0, 0, 0, 0, 0, 0, 0, 0, 0, 88, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 89, 0, 0, 0, 90, 0, 0, 0, 0, 0, 91, 0, 0, 92, 0, 93, 94, 0, 0, 0, 95, 0, 0, 0, 96, 0, 0, 0, 97,
    0, 0, 98, 0, 0, 99, 0, 100, 0, 0, 0, 101, 0, 0, 102, 0, 0, 0, 0, 103, 0, 0, 0, 0, 104, 0, 0, 105, 0, 0, 0, 106,
    0, 0, 107, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 108, 0, 0, 109, 0, 0, 0,
    110, 0, 0, 0, 111, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 112, 113, 0, 0, 0,
    0, 0, 0, 114, 0, 0, 0, 0, 0, 0, 115, 0, 0, 0, 0, 0, 116, 0, 0, 117, 0, 0, 0, 118, 0, 0, 0, 0, 0, 0, 0, 0,
    119, 0, 0, 0, 120, 0, 121, 0, 0, 0, 0, 0, 0, 122, 0, 0, 0, 123, 0, 0, 0, 0, 124, 0, 0, 0, 0, 0, 0, 0, 0, 125,
    0, 126, 0, 127, 0, 0, 0, 0, 128, 0, 129, 130, 0, 0, 131, 132, 0, 133, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    134, 0, 135, 0, 136, 0, 137, 0, 0, 138, 0, 0, 0, 139, 0, 0, 140, 0, 141, 0, 0, 142, 0, 143, 0, 0, 0, 0, 144, 145, 0, 0,
    0, 0, 0, 0, 146, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 147, 0, 0, 148, 0, 0, 0, 0, 149, 0, 0, 0, 0,
    150, 0, 0, 0, 0, 151, 0, 0, 0, 0, 0, 0, 152, 0, 0, 0, 153, 0, 0, 0, 0, 154, 0, 0, 0, 0, 0, 155, 156, 0, 157, 0,
    0, 0, 0, 0, 158, 0, 0, 159, 0, 0, 160, 161, 0, 0, 0, 0, 162, 0, 0, 163, 0, 164, 0, 0, 0, 0, 165, 0, 0, 166, 167, 0,
    0, 0, 0, 0, 0, 168, 0, 0, 169, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 170, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 171, 0, 0, 172, 0, 0, 0, 0, 173, 0, 0, 0, 0, 174, 0, 0, 0, 0, 0, 0, 175, 0, 0, 0, 0, 176, 0, 0, 0, 0, 0,
    0, 0, 177, 0, 0, 178, 0, 0, 179, 180, 0, 0, 181, 0, 182, 0, 183, 0, 0, 0, 0, 184, 0, 0, 0, 0, 0, 0, 0, 185, 0, 0,
    186, 0, 0, 187, 188, 0, 0, 189, 0, 190, 0, 191, 0, 0, 0, 0, 0, 0, 0, 0, 192, 0, 0, 0, 193, 0, 0, 0, 194, 0, 0, 195,
    0, 0, 0, 0, 0, 196, 0, 197, 0, 0, 0, 0, 0, 0, 0, 0, 198, 0, 0, 0, 199, 0, 0, 0, 200, 0, 0, 0, 0, 0, 0, 0,
    201, 0, 0, 0, 202, 0, 0, 203, 0, 0, 0, 0, 0, 204, 0, 205, 0, 0, 0, 206, 0, 0, 207, 0, 208, 0, 209, 0, 0, 0, 210, 0,
    0, 211, 0, 212, 0, 213, 0, 0, 214, 0, 0, 0, 0, 0, 0, 0, 0, 0, 215, 0, 0, 0, 0, 0, 0, 216, 0, 0, 0, 0, 0, 0,
    217, 0, 0, 0, 0, 218, 219, 0, 0, 220, 0, 0, 0, 0, 221, 0, 0, 222, 0, 0, 223, 0, 0, 0, 0, 0, 0, 224, 0, 0, 225, 0,
    0, 0, 0, 0, 226, 0, 0, 0, 227, 0, 0, 0, 0, 0, 0, 0, 0, 228, 0, 0, 0, 0, 0, 0, 0, 0, 0, 229, 0, 230, 0, 231,
    0, 232, 0, 0, 233, 0, 0, 234, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 235, 236, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 237, 238, 0, 0, 0, 239, 240, 0, 241, 0, 0, 0, 0, 242, 0, 0, 243, 0, 0, 244, 0, 0, 0, 0, 245, 0, 0, 0, 0, 246,
    0, 0, 247, 0, 0, 248, 0, 0, 0, 0, 249, 0, 0, 0, 0, 0, 250, 0, 0, 251, 0, 0, 252, 0, 0, 0, 0, 253, 0, 254, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 255, 0, 0, 0, 0, 0, 0, 0, 0, 0, 256, 0, 0, 257, 0, 258, 0, 0, 259, 0, 0, 260, 0, 0, 0,
    0, 261, 0, 0, 0, 0, 0, 262, 0, 0, 0, 0, 263, 0, 0, 0, 0, 0, 264, 0, 0, 0, 0, 265, 0, 0, 0, 0, 266, 0, 0, 0,
    0, 267, 0, 0, 0, 268, 0, 0, 0, 269, 0, 0, 0, 0, 270, 0, 0, 0, 0, 271, 0, 0, 0, 272, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 273, 0, 0, 0, 0, 0, 0, 0, 274, 0, 0, 0, 0, 0, 0, 0, 275, 0, 0, 0, 0, 0, 0, 0, 276, 0,
    0, 0, 0, 0, 0, 277, 0, 0, 278, 0, 279, 0, 0, 280, 0, 0, 281, 0, 0, 0, 0, 0, 282, 0, 0, 0, 0, 0, 0, 283, 0, 0,
    0, 0, 0, 0, 284, 285, 0, 0, 286, 0, 287, 288, 0, 0, 289, 290, 0, 0, 291, 0, 0, 0, 0, 0, 0, 0, 0, 0, 292, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 293, 0, 0, 294, 0, 0, 0, 0, 0, 0, 0, 295, 0, 0, 0, 296, 0, 0, 0, 0, 0, 0, 297, 0, 0,
    298, 0, 299, 0, 300, 301, 0, 302, 303, 0, 0, 304, 0, 0, 0, 0, 305, 0, 0, 306, 0, 0, 0, 0, 0, 307, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 308, 0, 0, 0, 0, 0, 309, 0, 0, 310, 0, 0, 311, 0, 0, 0, 0, 0, 0, 312,
    0, 0, 313, 0, 0, 0, 0, 314, 315, 0, 0, 0, 316, 0, 0, 317, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 318, 0, 0, 0, 319,
    0, 320, 0, 0, 0, 0, 0, 0, 321, 0, 0, 0, 322, 0, 0, 0, 0, 0, 323, 0, 0, 0, 324, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 325, 0, 0, 0, 0, 0, 0, 326, 0, 0, 0, 0, 327, 0, 0, 328, 0, 0, 329, 0, 0, 330, 0, 0, 0, 0, 0,
    0, 331, 0, 0, 332, 0, 333, 0, 0, 0, 334, 0, 0, 0, 335, 0, 0, 0, 336, 0, 0, 0, 0, 337, 0, 0, 338, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 339, 0, 0, 0, 0, 0, 0, 340, 0, 0, 0, 341, 0, 0, 0, 0, 0, 342, 0, 0, 0, 343, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 344, 0, 0, 0, 0, 0, 0, 345, 0, 0, 346, 0, 0, 0, 347, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 348, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 349, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 350, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    351, 0, 0, 352, 0, 0, 353, 0, 0, 354, 0, 0, 355, 0, 0, 356, 0, 0, 0, 0, 357, 0, 0, 358, 0, 0, 359, 0, 0, 360, 0, 0,
    361, 362, 0, 0, 0, 363, 0, 0, 364, 0, 0, 365, 0, 0, 366, 0, 0, 0, 0, 367, 368, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    369, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 370,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 371, 0, 0, 0, 372, 0, 0, 0, 0, 0, 373,
    0, 0, 0, 374, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 375, 0, 0, 0, 0, 0, 0, 376, 0, 0, 377, 0, 0, 378,
    0, 0, 0, 379, 0, 0, 0, 380, 0, 0, 381, 0, 0, 0, 0, 382, 0, 0, 0, 383, 0, 0, 0, 384, 0, 0, 385, 0, 0, 0, 386, 0,
    0, 0, 0, 0, 0, 0, 387, 0, 0, 388, 0, 0, 389, 0, 0, 0, 0, 0, 0, 0, 390, 0, 0, 0, 391, 0, 0, 0, 0, 0, 392, 0,
    0, 0, 393, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 394, 0, 0, 0, 0, 0, 0, 395, 0, 396, 0, 0, 397, 0,
    0, 0, 0, 398, 0, 0, 399, 0, 0, 400, 0, 0, 0, 0, 0, 0, 0, 0, 401, 0, 0, 402, 0, 0, 403, 0, 0, 0, 0, 404, 0, 405,
    0, 406, 0, 0, 0, 0, 407, 0, 0, 0, 0, 0, 408, 0, 0, 0, 0, 409, 0, 0, 0, 0, 0, 0, 410, 411, 0, 0, 0, 412, 0, 0,
    413, 0, 0, 0, 0, 0, 414, 0, 0, 0, 0, 0, 415, 0, 416, 0, 0, 0, 417, 0, 418, 0, 0, 0, 419, 0, 0, 0, 420, 0, 421, 0,
    0, 422, 0, 0, 423, 0, 0, 0, 424, 0, 0, 0, 0, 0, 0, 425, 0, 426, 0, 0, 0, 427, 0, 428, 0, 0, 429, 0, 0, 0, 430, 431,
    432, 0, 0, 0, 433, 0, 0, 434, 0, 0, 0, 0, 0, 0, 435, 0, 0, 436, 0, 0, 0, 0, 437, 0, 0, 438, 0, 0, 0, 0, 0, 0,
    0, 439, 440, 0, 0, 0, 441, 0, 0, 442, 0, 0, 0, 0, 0, 0, 0, 443, 0, 0, 0, 444, 0, 445, 0, 0, 446, 0, 0, 0, 0, 0,
    0, 447, 0, 0, 0, 0, 448, 0, 0, 0, 0, 0, 449, 0, 0, 0, 450, 0, 0, 0, 0, 0, 451, 0, 0, 0, 452, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 453, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 454, 0, 0, 455, 0, 0, 0, 0,
    0, 0, 456, 0, 0, 0, 0, 457, 0, 0, 0, 0, 0, 458, 0, 0, 0, 459, 0, 0, 0, 0, 0, 460, 0, 0, 0, 461, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 462, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 463, 464, 0, 0, 0, 465, 0, 0, 466,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 467, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 468, 0, 0, 0, 0, 0, 0, 469, 0, 470, 0, 471, 0, 0, 0, 0, 0, 472, 0, 0, 0, 473, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 474, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 475, 0, 0, 476, 0, 0, 477, 0, 0, 0, 0, 478, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 479, 0, 0, 0, 480, 0, 0, 0, 0, 0, 481, 0, 0, 0, 0, 0, 0, 482, 0,
    0, 0, 483, 0, 0, 0, 0, 484, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 485, 0, 0, 486, 0, 0, 487, 0, 0,
    0, 488, 0, 0, 0, 489, 0, 490, 0, 0, 491, 0, 0, 492, 0, 0, 0, 493, 0, 0, 0, 0, 0, 0, 494, 0, 495, 0, 0, 0, 496, 497,
    0, 498, 0, 0, 0, 0, 0, 0, 0, 0, 0, 499, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 500, 0,
    0, 501, 0, 0, 0, 0, 0, 0, 502, 0, 503, 0, 0, 0, 0, 0, 0, 0, 0, 504, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 505, 0,
    0, 0, 506, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 507, 0, 0, 0, 0, 508, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 509, 0, 0, 0, 0, 510, 0, 0, 0, 511, 0, 0, 0, 0, 0, 0, 0, 512, 0, 0, 0, 0, 0, 513, 0, 0, 0,
    514, 0, 0, 0, 0, 0, 0, 0, 0, 0, 515, 0, 0, 0, 0, 516, 0, 0, 0, 0, 0, 0, 517, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 518, 0, 0, 0, 0, 0, 0, 519, 0, 0, 0, 520, 0, 0, 0, 0, 521, 0, 0, 522, 0, 0, 523, 0, 0,
    524, 0, 0, 525, 0, 0, 0, 0, 526, 0, 527, 0, 0, 528, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 529,
    0, 0, 0, 0, 530, 531, 0, 0, 0, 0, 0, 0, 0, 0, 532, 0, 0, 0, 0, 0, 0, 0, 533, 0, 534, 0, 0, 0, 0, 535, 0, 0,
    536, 0, 0, 0, 0, 0, 0, 0, 537, 0, 0, 0, 0, 0, 0, 0, 538, 0, 0, 0, 539, 0, 0, 0, 540, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 541, 0, 542, 0, 0, 0, 543, 0, 0, 0, 0, 544, 0, 0, 545, 0, 0, 546, 0, 0, 0, 0, 0,
    0, 0, 0, 547, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 548, 0, 549, 0, 0, 0, 0, 0, 550, 0, 0, 0, 551,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 552,
    0, 0, 553, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 554, 0, 555, 0, 0, 556, 0, 0, 557, 0, 0, 0, 0, 0, 558, 0, 0, 559, 0,
    0, 0, 0, 0, 0, 0, 0, 560, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 561,
    0, 0, 0, 0, 0, 562, 563, 0, 0, 0, 564, 0, 0, 0, 0, 0, 565, 566, 0, 0, 0, 567, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 568, 0, 0, 569, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 570, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 571, 0, 0, 572, 0, 0, 0, 0, 573, 0, 0, 0, 574, 0, 0, 0, 0, 0, 575, 0, 0, 0, 576, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 577, 0, 0, 0, 0, 0, 0, 578, 0, 0, 0, 0, 0, 0, 579, 0, 0, 0, 0, 580, 581, 0, 0,
    582, 0, 0, 0, 0, 0, 0, 583, 0, 0, 0, 0, 0, 0, 584, 0, 0, 0, 0, 585, 586, 0, 0, 0, 0, 587, 0, 0, 0, 0, 0, 0,
    588, 0, 0, 0, 589, 0, 0, 0, 590, 0, 591, 0, 0, 592, 0, 0, 593, 0, 0, 0, 0, 594, 0, 0, 595, 0, 596, 597, 0, 0, 598, 0,
    599, 0, 0, 600, 0, 0, 0, 601, 0, 0, 0, 0, 602, 0, 0, 0, 603, 0, 0, 604, 0, 0, 0, 605, 0, 0, 606, 0, 0, 0, 607, 0,
    608, 0, 0, 609, 0, 0, 0, 0, 0, 0, 610, 0, 0, 611, 0, 0, 0, 0, 0, 0, 612, 0, 0, 613, 0, 0, 0, 0, 0, 0, 614, 0,
    615, 0, 616, 0, 0, 617, 0, 0, 0, 0, 0, 0, 618, 0, 619, 0, 0, 620, 0, 0, 621, 0, 0, 0, 0, 0, 622, 0, 0, 0, 0, 0,
    623, 0, 0, 0, 0, 0, 624, 0, 0, 0, 0, 0, 625, 0, 0, 0, 0, 0, 626, 0, 0, 0, 627, 0, 0, 0, 628, 0, 0, 629, 0, 0,
    0, 630, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 631, 0, 0, 0, 0, 0, 0, 0, 632, 0, 0, 0, 0, 633, 0, 0, 634, 0, 0, 0,
    0, 0, 0, 0, 635, 0, 0, 0, 0, 0, 0, 636, 0, 0, 637, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 638, 639, 0, 0, 0, 640,
    641, 0, 0, 642, 0, 0, 643, 0, 0, 0, 644, 0, 0, 0, 0, 645, 0, 0, 646, 0, 0, 647, 0, 0, 0, 0, 0, 0, 648, 0, 0, 0,
    0, 0, 649, 0, 650, 0, 0, 651, 0, 0, 652, 0, 0, 0, 0, 0, 0, 653, 0, 0, 0, 0, 0, 654, 0, 0, 0, 0, 0, 0, 655, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 656, 0, 0, 657, 0, 0, 0, 658, 0, 659, 0, 0, 660, 0, 0,
    661, 0, 0, 662, 0, 663, 0, 0, 0, 0, 0, 0, 0, 664, 0, 0, 665, 0, 666, 0, 0, 0, 667, 0, 668, 0, 0, 0, 0, 0, 0, 669,
    0, 0, 0, 0, 0, 670, 0, 0, 0, 0, 0, 0, 671, 0, 0, 0, 672, 0, 673, 0, 0, 674, 675, 676, 0, 0, 0, 677, 0, 0, 0, 0,
    0, 0, 678, 0, 0, 679, 0, 680, 0, 0, 681, 682, 683, 0, 0, 0, 0, 0, 0, 0, 0, 0, 684, 0, 0, 0, 0, 685, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 686, 0, 0, 0, 0, 0, 0, 0, 687, 0, 0, 0, 688, 0, 689, 0, 0, 690, 0, 0, 691, 0, 0, 0, 692, 693, 0,
    694, 0, 695, 0, 0, 0, 696, 0, 697, 0, 0, 698, 0, 0, 699, 700, 701, 0, 0, 702, 0, 703, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 704, 0, 0, 0, 705, 0, 0, 0, 0, 0, 0, 0, 706, 0, 0, 0, 707, 0, 0, 0, 0, 0, 0, 708, 0, 0, 709,
    0, 710, 0, 0, 711, 0, 0, 0, 712, 713, 0, 714, 715, 0, 0, 716, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 717, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 718, 0, 0, 0, 0, 0, 719, 0, 0, 0, 720, 0, 0, 721, 722,
    0, 0, 0, 723, 0, 0, 724, 0, 0, 0, 0, 725, 0, 726, 0, 0, 0, 0, 727, 0, 0, 728, 0, 0, 729, 0, 0, 0, 0, 730, 731, 0,
    0, 0, 732, 0, 0, 0, 0, 733, 0, 0, 0, 0, 0, 0, 734, 0, 0, 0, 0, 0, 0, 735, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    736, 0, 0, 0, 0, 0, 0, 0, 0, 0, 737, 0, 0, 0, 0, 0, 0, 738, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 739, 0, 740, 0, 0, 0, 741, 0, 0, 742, 0, 0, 0, 0, 743, 0, 0, 0, 0, 0, 0, 0, 744, 0, 0, 0, 0, 0,
    0, 745, 746, 0, 0, 747, 0, 748, 0, 749, 0, 0, 0, 0, 0, 0, 750, 0, 0, 0, 0, 0, 0, 751, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 752, 0, 753, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 754, 755, 0, 0, 756, 0, 0, 0, 757, 0, 0, 0,
    758, 0, 0, 0, 0, 0, 759, 0, 0, 760, 761, 0, 762, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 763, 0, 0, 764, 0, 0,
    0, 0, 0, 0, 0, 765, 0, 0, 0, 0, 0, 766, 0, 0, 0, 767, 0, 0, 768, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 769, 0, 0, 0, 770, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 771, 0, 0, 0, 0, 772,
    773, 0, 0, 0, 774, 0, 0, 0, 775, 0, 0, 0, 776, 777, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 778,
};
void recomp_unit_0137_entry(Runtime &rt, AllegrexContext &ctx, std::uint16_t direct_entry_id, GuestMemory::AotFastView &aot_mem) {
    std::uint32_t jump_target = 0u;
    std::uint32_t local_transfers = 0u;
    std::uint32_t local_pc = ctx.pc;
    std::uint32_t entry_id = direct_entry_id;
LOCAL_DISPATCH:
    {
    if (entry_id == 0u) {
        const std::uint32_t entry_delta = local_pc - 0x08A28000u;
        entry_id = (entry_delta < 16364u && (entry_delta & 3u) == 0u) ? kEntryIds_recomp_unit_0137[entry_delta >> 2u] : 0u;
    }
    switch (entry_id) {
    case 1u: goto L_08A28000;
    case 2u: goto L_08A28014;
    case 3u: goto L_08A280A4;
    case 4u: goto L_08A280BC;
    case 5u: goto L_08A280CC;
    case 6u: goto L_08A280DC;
    case 7u: goto L_08A28138;
    case 8u: goto L_08A28148;
    case 9u: goto L_08A28158;
    case 10u: goto L_08A28180;
    case 11u: goto L_08A2819C;
    case 12u: goto L_08A281AC;
    case 13u: goto L_08A281B8;
    case 14u: goto L_08A281D0;
    case 15u: goto L_08A281E4;
    case 16u: goto L_08A281F8;
    case 17u: goto L_08A28204;
    case 18u: goto L_08A2821C;
    case 19u: goto L_08A28228;
    case 20u: goto L_08A28240;
    case 21u: goto L_08A2824C;
    case 22u: goto L_08A2827C;
    case 23u: goto L_08A282AC;
    case 24u: goto L_08A282D4;
    case 25u: goto L_08A282E0;
    case 26u: goto L_08A282F4;
    case 27u: goto L_08A2830C;
    case 28u: goto L_08A28328;
    case 29u: goto L_08A28334;
    case 30u: goto L_08A28350;
    case 31u: goto L_08A28368;
    case 32u: goto L_08A28380;
    case 33u: goto L_08A28388;
    case 34u: goto L_08A283A4;
    case 35u: goto L_08A283C0;
    case 36u: goto L_08A283DC;
    case 37u: goto L_08A283EC;
    case 38u: goto L_08A2842C;
    case 39u: goto L_08A2843C;
    case 40u: goto L_08A28448;
    case 41u: goto L_08A2845C;
    case 42u: goto L_08A28464;
    case 43u: goto L_08A2847C;
    case 44u: goto L_08A28494;
    case 45u: goto L_08A284A0;
    case 46u: goto L_08A284B0;
    case 47u: goto L_08A284B4;
    case 48u: goto L_08A284C0;
    case 49u: goto L_08A284CC;
    case 50u: goto L_08A284E0;
    case 51u: goto L_08A2850C;
    case 52u: goto L_08A28518;
    case 53u: goto L_08A28568;
    case 54u: goto L_08A28590;
    case 55u: goto L_08A285B8;
    case 56u: goto L_08A285C4;
    case 57u: goto L_08A285D8;
    case 58u: goto L_08A285E8;
    case 59u: goto L_08A285F8;
    case 60u: goto L_08A28614;
    case 61u: goto L_08A28620;
    case 62u: goto L_08A28634;
    case 63u: goto L_08A28644;
    case 64u: goto L_08A28654;
    case 65u: goto L_08A28664;
    case 66u: goto L_08A28670;
    case 67u: goto L_08A2867C;
    case 68u: goto L_08A28688;
    case 69u: goto L_08A2868C;
    case 70u: goto L_08A28698;
    case 71u: goto L_08A286A8;
    case 72u: goto L_08A286B8;
    case 73u: goto L_08A286C4;
    case 74u: goto L_08A286D4;
    case 75u: goto L_08A286E4;
    case 76u: goto L_08A286F4;
    case 77u: goto L_08A28704;
    case 78u: goto L_08A28724;
    case 79u: goto L_08A28754;
    case 80u: goto L_08A28768;
    case 81u: goto L_08A28778;
    case 82u: goto L_08A287A8;
    case 83u: goto L_08A287D8;
    case 84u: goto L_08A287EC;
    case 85u: goto L_08A287FC;
    case 86u: goto L_08A2882C;
    case 87u: goto L_08A28838;
    case 88u: goto L_08A28860;
    case 89u: goto L_08A2888C;
    case 90u: goto L_08A2889C;
    case 91u: goto L_08A288B4;
    case 92u: goto L_08A288C0;
    case 93u: goto L_08A288C8;
    case 94u: goto L_08A288CC;
    case 95u: goto L_08A288DC;
    case 96u: goto L_08A288EC;
    case 97u: goto L_08A288FC;
    case 98u: goto L_08A28908;
    case 99u: goto L_08A28914;
    case 100u: goto L_08A2891C;
    case 101u: goto L_08A2892C;
    case 102u: goto L_08A28938;
    case 103u: goto L_08A2894C;
    case 104u: goto L_08A28960;
    case 105u: goto L_08A2896C;
    case 106u: goto L_08A2897C;
    case 107u: goto L_08A28988;
    case 108u: goto L_08A289E4;
    case 109u: goto L_08A289F0;
    case 110u: goto L_08A28A00;
    case 111u: goto L_08A28A10;
    case 112u: goto L_08A28A6C;
    case 113u: goto L_08A28A70;
    case 114u: goto L_08A28A8C;
    case 115u: goto L_08A28AA8;
    case 116u: goto L_08A28AC0;
    case 117u: goto L_08A28ACC;
    case 118u: goto L_08A28ADC;
    case 119u: goto L_08A28B00;
    case 120u: goto L_08A28B10;
    case 121u: goto L_08A28B18;
    case 122u: goto L_08A28B34;
    case 123u: goto L_08A28B44;
    case 124u: goto L_08A28B58;
    case 125u: goto L_08A28B7C;
    case 126u: goto L_08A28B84;
    case 127u: goto L_08A28B8C;
    case 128u: goto L_08A28BA0;
    case 129u: goto L_08A28BA8;
    case 130u: goto L_08A28BAC;
    case 131u: goto L_08A28BB8;
    case 132u: goto L_08A28BBC;
    case 133u: goto L_08A28BC4;
    case 134u: goto L_08A28C00;
    case 135u: goto L_08A28C08;
    case 136u: goto L_08A28C10;
    case 137u: goto L_08A28C18;
    case 138u: goto L_08A28C24;
    case 139u: goto L_08A28C34;
    case 140u: goto L_08A28C40;
    case 141u: goto L_08A28C48;
    case 142u: goto L_08A28C54;
    case 143u: goto L_08A28C5C;
    case 144u: goto L_08A28C70;
    case 145u: goto L_08A28C74;
    case 146u: goto L_08A28C90;
    case 147u: goto L_08A28CCC;
    case 148u: goto L_08A28CD8;
    case 149u: goto L_08A28CEC;
    case 150u: goto L_08A28D00;
    case 151u: goto L_08A28D14;
    case 152u: goto L_08A28D30;
    case 153u: goto L_08A28D40;
    case 154u: goto L_08A28D54;
    case 155u: goto L_08A28D6C;
    case 156u: goto L_08A28D70;
    case 157u: goto L_08A28D78;
    case 158u: goto L_08A28D90;
    case 159u: goto L_08A28D9C;
    case 160u: goto L_08A28DA8;
    case 161u: goto L_08A28DAC;
    case 162u: goto L_08A28DC0;
    case 163u: goto L_08A28DCC;
    case 164u: goto L_08A28DD4;
    case 165u: goto L_08A28DE8;
    case 166u: goto L_08A28DF4;
    case 167u: goto L_08A28DF8;
    case 168u: goto L_08A28E14;
    case 169u: goto L_08A28E20;
    case 170u: goto L_08A28E54;
    case 171u: goto L_08A28E84;
    case 172u: goto L_08A28E90;
    case 173u: goto L_08A28EA4;
    case 174u: goto L_08A28EB8;
    case 175u: goto L_08A28ED4;
    case 176u: goto L_08A28EE8;
    case 177u: goto L_08A28F08;
    case 178u: goto L_08A28F14;
    case 179u: goto L_08A28F20;
    case 180u: goto L_08A28F24;
    case 181u: goto L_08A28F30;
    case 182u: goto L_08A28F38;
    case 183u: goto L_08A28F40;
    case 184u: goto L_08A28F54;
    case 185u: goto L_08A28F74;
    case 186u: goto L_08A28F80;
    case 187u: goto L_08A28F8C;
    case 188u: goto L_08A28F90;
    case 189u: goto L_08A28F9C;
    case 190u: goto L_08A28FA4;
    case 191u: goto L_08A28FAC;
    case 192u: goto L_08A28FD0;
    case 193u: goto L_08A28FE0;
    case 194u: goto L_08A28FF0;
    case 195u: goto L_08A28FFC;
    case 196u: goto L_08A29014;
    case 197u: goto L_08A2901C;
    case 198u: goto L_08A29040;
    case 199u: goto L_08A29050;
    case 200u: goto L_08A29060;
    case 201u: goto L_08A29080;
    case 202u: goto L_08A29090;
    case 203u: goto L_08A2909C;
    case 204u: goto L_08A290B4;
    case 205u: goto L_08A290BC;
    case 206u: goto L_08A290CC;
    case 207u: goto L_08A290D8;
    case 208u: goto L_08A290E0;
    case 209u: goto L_08A290E8;
    case 210u: goto L_08A290F8;
    case 211u: goto L_08A29104;
    case 212u: goto L_08A2910C;
    case 213u: goto L_08A29114;
    case 214u: goto L_08A29120;
    case 215u: goto L_08A29148;
    case 216u: goto L_08A29164;
    case 217u: goto L_08A29180;
    case 218u: goto L_08A29194;
    case 219u: goto L_08A29198;
    case 220u: goto L_08A291A4;
    case 221u: goto L_08A291B8;
    case 222u: goto L_08A291C4;
    case 223u: goto L_08A291D0;
    case 224u: goto L_08A291EC;
    case 225u: goto L_08A291F8;
    case 226u: goto L_08A29210;
    case 227u: goto L_08A29220;
    case 228u: goto L_08A29244;
    case 229u: goto L_08A2926C;
    case 230u: goto L_08A29274;
    case 231u: goto L_08A2927C;
    case 232u: goto L_08A29284;
    case 233u: goto L_08A29290;
    case 234u: goto L_08A2929C;
    case 235u: goto L_08A292D0;
    case 236u: goto L_08A292D4;
    case 237u: goto L_08A29308;
    case 238u: goto L_08A2930C;
    case 239u: goto L_08A2931C;
    case 240u: goto L_08A29320;
    case 241u: goto L_08A29328;
    case 242u: goto L_08A2933C;
    case 243u: goto L_08A29348;
    case 244u: goto L_08A29354;
    case 245u: goto L_08A29368;
    case 246u: goto L_08A2937C;
    case 247u: goto L_08A29388;
    case 248u: goto L_08A29394;
    case 249u: goto L_08A293A8;
    case 250u: goto L_08A293C0;
    case 251u: goto L_08A293CC;
    case 252u: goto L_08A293D8;
    case 253u: goto L_08A293EC;
    case 254u: goto L_08A293F4;
    case 255u: goto L_08A2941C;
    case 256u: goto L_08A29444;
    case 257u: goto L_08A29450;
    case 258u: goto L_08A29458;
    case 259u: goto L_08A29464;
    case 260u: goto L_08A29470;
    case 261u: goto L_08A29484;
    case 262u: goto L_08A2949C;
    case 263u: goto L_08A294B0;
    case 264u: goto L_08A294C8;
    case 265u: goto L_08A294DC;
    case 266u: goto L_08A294F0;
    case 267u: goto L_08A29504;
    case 268u: goto L_08A29514;
    case 269u: goto L_08A29524;
    case 270u: goto L_08A29538;
    case 271u: goto L_08A2954C;
    case 272u: goto L_08A2955C;
    case 273u: goto L_08A29598;
    case 274u: goto L_08A295B8;
    case 275u: goto L_08A295D8;
    case 276u: goto L_08A295F8;
    case 277u: goto L_08A29614;
    case 278u: goto L_08A29620;
    case 279u: goto L_08A29628;
    case 280u: goto L_08A29634;
    case 281u: goto L_08A29640;
    case 282u: goto L_08A29658;
    case 283u: goto L_08A29674;
    case 284u: goto L_08A29690;
    case 285u: goto L_08A29694;
    case 286u: goto L_08A296A0;
    case 287u: goto L_08A296A8;
    case 288u: goto L_08A296AC;
    case 289u: goto L_08A296B8;
    case 290u: goto L_08A296BC;
    case 291u: goto L_08A296C8;
    case 292u: goto L_08A296F0;
    case 293u: goto L_08A2971C;
    case 294u: goto L_08A29728;
    case 295u: goto L_08A29748;
    case 296u: goto L_08A29758;
    case 297u: goto L_08A29774;
    case 298u: goto L_08A29780;
    case 299u: goto L_08A29788;
    case 300u: goto L_08A29790;
    case 301u: goto L_08A29794;
    case 302u: goto L_08A2979C;
    case 303u: goto L_08A297A0;
    case 304u: goto L_08A297AC;
    case 305u: goto L_08A297C0;
    case 306u: goto L_08A297CC;
    case 307u: goto L_08A297E4;
    case 308u: goto L_08A29830;
    case 309u: goto L_08A29848;
    case 310u: goto L_08A29854;
    case 311u: goto L_08A29860;
    case 312u: goto L_08A2987C;
    case 313u: goto L_08A29888;
    case 314u: goto L_08A2989C;
    case 315u: goto L_08A298A0;
    case 316u: goto L_08A298B0;
    case 317u: goto L_08A298BC;
    case 318u: goto L_08A298EC;
    case 319u: goto L_08A298FC;
    case 320u: goto L_08A29904;
    case 321u: goto L_08A29920;
    case 322u: goto L_08A29930;
    case 323u: goto L_08A29948;
    case 324u: goto L_08A29958;
    case 325u: goto L_08A29994;
    case 326u: goto L_08A299B0;
    case 327u: goto L_08A299C4;
    case 328u: goto L_08A299D0;
    case 329u: goto L_08A299DC;
    case 330u: goto L_08A299E8;
    case 331u: goto L_08A29A04;
    case 332u: goto L_08A29A10;
    case 333u: goto L_08A29A18;
    case 334u: goto L_08A29A28;
    case 335u: goto L_08A29A38;
    case 336u: goto L_08A29A48;
    case 337u: goto L_08A29A5C;
    case 338u: goto L_08A29A68;
    case 339u: goto L_08A29A98;
    case 340u: goto L_08A29AB4;
    case 341u: goto L_08A29AC4;
    case 342u: goto L_08A29ADC;
    case 343u: goto L_08A29AEC;
    case 344u: goto L_08A29B28;
    case 345u: goto L_08A29B44;
    case 346u: goto L_08A29B50;
    case 347u: goto L_08A29B60;
    case 348u: goto L_08A29B88;
    case 349u: goto L_08A29BF0;
    case 350u: goto L_08A29C48;
    case 351u: goto L_08A29C80;
    case 352u: goto L_08A29C8C;
    case 353u: goto L_08A29C98;
    case 354u: goto L_08A29CA4;
    case 355u: goto L_08A29CB0;
    case 356u: goto L_08A29CBC;
    case 357u: goto L_08A29CD0;
    case 358u: goto L_08A29CDC;
    case 359u: goto L_08A29CE8;
    case 360u: goto L_08A29CF4;
    case 361u: goto L_08A29D00;
    case 362u: goto L_08A29D04;
    case 363u: goto L_08A29D14;
    case 364u: goto L_08A29D20;
    case 365u: goto L_08A29D2C;
    case 366u: goto L_08A29D38;
    case 367u: goto L_08A29D4C;
    case 368u: goto L_08A29D50;
    case 369u: goto L_08A29D80;
    case 370u: goto L_08A29DFC;
    case 371u: goto L_08A29E54;
    case 372u: goto L_08A29E64;
    case 373u: goto L_08A29E7C;
    case 374u: goto L_08A29E8C;
    case 375u: goto L_08A29EC8;
    case 376u: goto L_08A29EE4;
    case 377u: goto L_08A29EF0;
    case 378u: goto L_08A29EFC;
    case 379u: goto L_08A29F0C;
    case 380u: goto L_08A29F1C;
    case 381u: goto L_08A29F28;
    case 382u: goto L_08A29F3C;
    case 383u: goto L_08A29F4C;
    case 384u: goto L_08A29F5C;
    case 385u: goto L_08A29F68;
    case 386u: goto L_08A29F78;
    case 387u: goto L_08A29F98;
    case 388u: goto L_08A29FA4;
    case 389u: goto L_08A29FB0;
    case 390u: goto L_08A29FD0;
    case 391u: goto L_08A29FE0;
    case 392u: goto L_08A29FF8;
    case 393u: goto L_08A2A008;
    case 394u: goto L_08A2A048;
    case 395u: goto L_08A2A064;
    case 396u: goto L_08A2A06C;
    case 397u: goto L_08A2A078;
    case 398u: goto L_08A2A08C;
    case 399u: goto L_08A2A098;
    case 400u: goto L_08A2A0A4;
    case 401u: goto L_08A2A0C8;
    case 402u: goto L_08A2A0D4;
    case 403u: goto L_08A2A0E0;
    case 404u: goto L_08A2A0F4;
    case 405u: goto L_08A2A0FC;
    case 406u: goto L_08A2A104;
    case 407u: goto L_08A2A118;
    case 408u: goto L_08A2A130;
    case 409u: goto L_08A2A144;
    case 410u: goto L_08A2A160;
    case 411u: goto L_08A2A164;
    case 412u: goto L_08A2A174;
    case 413u: goto L_08A2A180;
    case 414u: goto L_08A2A198;
    case 415u: goto L_08A2A1B0;
    case 416u: goto L_08A2A1B8;
    case 417u: goto L_08A2A1C8;
    case 418u: goto L_08A2A1D0;
    case 419u: goto L_08A2A1E0;
    case 420u: goto L_08A2A1F0;
    case 421u: goto L_08A2A1F8;
    case 422u: goto L_08A2A204;
    case 423u: goto L_08A2A210;
    case 424u: goto L_08A2A220;
    case 425u: goto L_08A2A23C;
    case 426u: goto L_08A2A244;
    case 427u: goto L_08A2A254;
    case 428u: goto L_08A2A25C;
    case 429u: goto L_08A2A268;
    case 430u: goto L_08A2A278;
    case 431u: goto L_08A2A27C;
    case 432u: goto L_08A2A280;
    case 433u: goto L_08A2A290;
    case 434u: goto L_08A2A29C;
    case 435u: goto L_08A2A2B8;
    case 436u: goto L_08A2A2C4;
    case 437u: goto L_08A2A2D8;
    case 438u: goto L_08A2A2E4;
    case 439u: goto L_08A2A304;
    case 440u: goto L_08A2A308;
    case 441u: goto L_08A2A318;
    case 442u: goto L_08A2A324;
    case 443u: goto L_08A2A344;
    case 444u: goto L_08A2A354;
    case 445u: goto L_08A2A35C;
    case 446u: goto L_08A2A368;
    case 447u: goto L_08A2A384;
    case 448u: goto L_08A2A398;
    case 449u: goto L_08A2A3B0;
    case 450u: goto L_08A2A3C0;
    case 451u: goto L_08A2A3D8;
    case 452u: goto L_08A2A3E8;
    case 453u: goto L_08A2A424;
    case 454u: goto L_08A2A460;
    case 455u: goto L_08A2A46C;
    case 456u: goto L_08A2A488;
    case 457u: goto L_08A2A49C;
    case 458u: goto L_08A2A4B4;
    case 459u: goto L_08A2A4C4;
    case 460u: goto L_08A2A4DC;
    case 461u: goto L_08A2A4EC;
    case 462u: goto L_08A2A528;
    case 463u: goto L_08A2A55C;
    case 464u: goto L_08A2A560;
    case 465u: goto L_08A2A570;
    case 466u: goto L_08A2A57C;
    case 467u: goto L_08A2A5D0;
    case 468u: goto L_08A2A60C;
    case 469u: goto L_08A2A628;
    case 470u: goto L_08A2A630;
    case 471u: goto L_08A2A638;
    case 472u: goto L_08A2A650;
    case 473u: goto L_08A2A660;
    case 474u: goto L_08A2A694;
    case 475u: goto L_08A2A6C8;
    case 476u: goto L_08A2A6D4;
    case 477u: goto L_08A2A6E0;
    case 478u: goto L_08A2A6F4;
    case 479u: goto L_08A2A734;
    case 480u: goto L_08A2A744;
    case 481u: goto L_08A2A75C;
    case 482u: goto L_08A2A778;
    case 483u: goto L_08A2A788;
    case 484u: goto L_08A2A79C;
    case 485u: goto L_08A2A7DC;
    case 486u: goto L_08A2A7E8;
    case 487u: goto L_08A2A7F4;
    case 488u: goto L_08A2A804;
    case 489u: goto L_08A2A814;
    case 490u: goto L_08A2A81C;
    case 491u: goto L_08A2A828;
    case 492u: goto L_08A2A834;
    case 493u: goto L_08A2A844;
    case 494u: goto L_08A2A860;
    case 495u: goto L_08A2A868;
    case 496u: goto L_08A2A878;
    case 497u: goto L_08A2A87C;
    case 498u: goto L_08A2A884;
    case 499u: goto L_08A2A8AC;
    case 500u: goto L_08A2A8F8;
    case 501u: goto L_08A2A904;
    case 502u: goto L_08A2A920;
    case 503u: goto L_08A2A928;
    case 504u: goto L_08A2A94C;
    case 505u: goto L_08A2A978;
    case 506u: goto L_08A2A988;
    case 507u: goto L_08A2A9C0;
    case 508u: goto L_08A2A9D4;
    case 509u: goto L_08A2AA14;
    case 510u: goto L_08A2AA28;
    case 511u: goto L_08A2AA38;
    case 512u: goto L_08A2AA58;
    case 513u: goto L_08A2AA70;
    case 514u: goto L_08A2AA80;
    case 515u: goto L_08A2AAA8;
    case 516u: goto L_08A2AABC;
    case 517u: goto L_08A2AAD8;
    case 518u: goto L_08A2AB1C;
    case 519u: goto L_08A2AB38;
    case 520u: goto L_08A2AB48;
    case 521u: goto L_08A2AB5C;
    case 522u: goto L_08A2AB68;
    case 523u: goto L_08A2AB74;
    case 524u: goto L_08A2AB80;
    case 525u: goto L_08A2AB8C;
    case 526u: goto L_08A2ABA0;
    case 527u: goto L_08A2ABA8;
    case 528u: goto L_08A2ABB4;
    case 529u: goto L_08A2ABFC;
    case 530u: goto L_08A2AC10;
    case 531u: goto L_08A2AC14;
    case 532u: goto L_08A2AC38;
    case 533u: goto L_08A2AC58;
    case 534u: goto L_08A2AC60;
    case 535u: goto L_08A2AC74;
    case 536u: goto L_08A2AC80;
    case 537u: goto L_08A2ACA0;
    case 538u: goto L_08A2ACC0;
    case 539u: goto L_08A2ACD0;
    case 540u: goto L_08A2ACE0;
    case 541u: goto L_08A2AD24;
    case 542u: goto L_08A2AD2C;
    case 543u: goto L_08A2AD3C;
    case 544u: goto L_08A2AD50;
    case 545u: goto L_08A2AD5C;
    case 546u: goto L_08A2AD68;
    case 547u: goto L_08A2AD8C;
    case 548u: goto L_08A2ADCC;
    case 549u: goto L_08A2ADD4;
    case 550u: goto L_08A2ADEC;
    case 551u: goto L_08A2ADFC;
    case 552u: goto L_08A2AE7C;
    case 553u: goto L_08A2AE88;
    case 554u: goto L_08A2AEB4;
    case 555u: goto L_08A2AEBC;
    case 556u: goto L_08A2AEC8;
    case 557u: goto L_08A2AED4;
    case 558u: goto L_08A2AEEC;
    case 559u: goto L_08A2AEF8;
    case 560u: goto L_08A2AF1C;
    case 561u: goto L_08A2AF7C;
    case 562u: goto L_08A2AF94;
    case 563u: goto L_08A2AF98;
    case 564u: goto L_08A2AFA8;
    case 565u: goto L_08A2AFC0;
    case 566u: goto L_08A2AFC4;
    case 567u: goto L_08A2AFD4;
    case 568u: goto L_08A2B004;
    case 569u: goto L_08A2B010;
    case 570u: goto L_08A2B064;
    case 571u: goto L_08A2B098;
    case 572u: goto L_08A2B0A4;
    case 573u: goto L_08A2B0B8;
    case 574u: goto L_08A2B0C8;
    case 575u: goto L_08A2B0E0;
    case 576u: goto L_08A2B0F0;
    case 577u: goto L_08A2B124;
    case 578u: goto L_08A2B140;
    case 579u: goto L_08A2B15C;
    case 580u: goto L_08A2B170;
    case 581u: goto L_08A2B174;
    case 582u: goto L_08A2B180;
    case 583u: goto L_08A2B19C;
    case 584u: goto L_08A2B1B8;
    case 585u: goto L_08A2B1CC;
    case 586u: goto L_08A2B1D0;
    case 587u: goto L_08A2B1E4;
    case 588u: goto L_08A2B200;
    case 589u: goto L_08A2B210;
    case 590u: goto L_08A2B220;
    case 591u: goto L_08A2B228;
    case 592u: goto L_08A2B234;
    case 593u: goto L_08A2B240;
    case 594u: goto L_08A2B254;
    case 595u: goto L_08A2B260;
    case 596u: goto L_08A2B268;
    case 597u: goto L_08A2B26C;
    case 598u: goto L_08A2B278;
    case 599u: goto L_08A2B280;
    case 600u: goto L_08A2B28C;
    case 601u: goto L_08A2B29C;
    case 602u: goto L_08A2B2B0;
    case 603u: goto L_08A2B2C0;
    case 604u: goto L_08A2B2CC;
    case 605u: goto L_08A2B2DC;
    case 606u: goto L_08A2B2E8;
    case 607u: goto L_08A2B2F8;
    case 608u: goto L_08A2B300;
    case 609u: goto L_08A2B30C;
    case 610u: goto L_08A2B328;
    case 611u: goto L_08A2B334;
    case 612u: goto L_08A2B350;
    case 613u: goto L_08A2B35C;
    case 614u: goto L_08A2B378;
    case 615u: goto L_08A2B380;
    case 616u: goto L_08A2B388;
    case 617u: goto L_08A2B394;
    case 618u: goto L_08A2B3B0;
    case 619u: goto L_08A2B3B8;
    case 620u: goto L_08A2B3C4;
    case 621u: goto L_08A2B3D0;
    case 622u: goto L_08A2B3E8;
    case 623u: goto L_08A2B400;
    case 624u: goto L_08A2B418;
    case 625u: goto L_08A2B430;
    case 626u: goto L_08A2B448;
    case 627u: goto L_08A2B458;
    case 628u: goto L_08A2B468;
    case 629u: goto L_08A2B474;
    case 630u: goto L_08A2B484;
    case 631u: goto L_08A2B4B0;
    case 632u: goto L_08A2B4D0;
    case 633u: goto L_08A2B4E4;
    case 634u: goto L_08A2B4F0;
    case 635u: goto L_08A2B510;
    case 636u: goto L_08A2B52C;
    case 637u: goto L_08A2B538;
    case 638u: goto L_08A2B568;
    case 639u: goto L_08A2B56C;
    case 640u: goto L_08A2B57C;
    case 641u: goto L_08A2B580;
    case 642u: goto L_08A2B58C;
    case 643u: goto L_08A2B598;
    case 644u: goto L_08A2B5A8;
    case 645u: goto L_08A2B5BC;
    case 646u: goto L_08A2B5C8;
    case 647u: goto L_08A2B5D4;
    case 648u: goto L_08A2B5F0;
    case 649u: goto L_08A2B608;
    case 650u: goto L_08A2B610;
    case 651u: goto L_08A2B61C;
    case 652u: goto L_08A2B628;
    case 653u: goto L_08A2B644;
    case 654u: goto L_08A2B65C;
    case 655u: goto L_08A2B678;
    case 656u: goto L_08A2B6C4;
    case 657u: goto L_08A2B6D0;
    case 658u: goto L_08A2B6E0;
    case 659u: goto L_08A2B6E8;
    case 660u: goto L_08A2B6F4;
    case 661u: goto L_08A2B700;
    case 662u: goto L_08A2B70C;
    case 663u: goto L_08A2B714;
    case 664u: goto L_08A2B734;
    case 665u: goto L_08A2B740;
    case 666u: goto L_08A2B748;
    case 667u: goto L_08A2B758;
    case 668u: goto L_08A2B760;
    case 669u: goto L_08A2B77C;
    case 670u: goto L_08A2B794;
    case 671u: goto L_08A2B7B0;
    case 672u: goto L_08A2B7C0;
    case 673u: goto L_08A2B7C8;
    case 674u: goto L_08A2B7D4;
    case 675u: goto L_08A2B7D8;
    case 676u: goto L_08A2B7DC;
    case 677u: goto L_08A2B7EC;
    case 678u: goto L_08A2B808;
    case 679u: goto L_08A2B814;
    case 680u: goto L_08A2B81C;
    case 681u: goto L_08A2B828;
    case 682u: goto L_08A2B82C;
    case 683u: goto L_08A2B830;
    case 684u: goto L_08A2B858;
    case 685u: goto L_08A2B86C;
    case 686u: goto L_08A2B894;
    case 687u: goto L_08A2B8B4;
    case 688u: goto L_08A2B8C4;
    case 689u: goto L_08A2B8CC;
    case 690u: goto L_08A2B8D8;
    case 691u: goto L_08A2B8E4;
    case 692u: goto L_08A2B8F4;
    case 693u: goto L_08A2B8F8;
    case 694u: goto L_08A2B900;
    case 695u: goto L_08A2B908;
    case 696u: goto L_08A2B918;
    case 697u: goto L_08A2B920;
    case 698u: goto L_08A2B92C;
    case 699u: goto L_08A2B938;
    case 700u: goto L_08A2B93C;
    case 701u: goto L_08A2B940;
    case 702u: goto L_08A2B94C;
    case 703u: goto L_08A2B954;
    case 704u: goto L_08A2B994;
    case 705u: goto L_08A2B9A4;
    case 706u: goto L_08A2B9C4;
    case 707u: goto L_08A2B9D4;
    case 708u: goto L_08A2B9F0;
    case 709u: goto L_08A2B9FC;
    case 710u: goto L_08A2BA04;
    case 711u: goto L_08A2BA10;
    case 712u: goto L_08A2BA20;
    case 713u: goto L_08A2BA24;
    case 714u: goto L_08A2BA2C;
    case 715u: goto L_08A2BA30;
    case 716u: goto L_08A2BA3C;
    case 717u: goto L_08A2BA6C;
    case 718u: goto L_08A2BAC4;
    case 719u: goto L_08A2BADC;
    case 720u: goto L_08A2BAEC;
    case 721u: goto L_08A2BAF8;
    case 722u: goto L_08A2BAFC;
    case 723u: goto L_08A2BB0C;
    case 724u: goto L_08A2BB18;
    case 725u: goto L_08A2BB2C;
    case 726u: goto L_08A2BB34;
    case 727u: goto L_08A2BB48;
    case 728u: goto L_08A2BB54;
    case 729u: goto L_08A2BB60;
    case 730u: goto L_08A2BB74;
    case 731u: goto L_08A2BB78;
    case 732u: goto L_08A2BB88;
    case 733u: goto L_08A2BB9C;
    case 734u: goto L_08A2BBB8;
    case 735u: goto L_08A2BBD4;
    case 736u: goto L_08A2BC00;
    case 737u: goto L_08A2BC28;
    case 738u: goto L_08A2BC44;
    case 739u: goto L_08A2BC90;
    case 740u: goto L_08A2BC98;
    case 741u: goto L_08A2BCA8;
    case 742u: goto L_08A2BCB4;
    case 743u: goto L_08A2BCC8;
    case 744u: goto L_08A2BCE8;
    case 745u: goto L_08A2BD04;
    case 746u: goto L_08A2BD08;
    case 747u: goto L_08A2BD14;
    case 748u: goto L_08A2BD1C;
    case 749u: goto L_08A2BD24;
    case 750u: goto L_08A2BD40;
    case 751u: goto L_08A2BD5C;
    case 752u: goto L_08A2BD9C;
    case 753u: goto L_08A2BDA4;
    case 754u: goto L_08A2BDD0;
    case 755u: goto L_08A2BDD4;
    case 756u: goto L_08A2BDE0;
    case 757u: goto L_08A2BDF0;
    case 758u: goto L_08A2BE00;
    case 759u: goto L_08A2BE18;
    case 760u: goto L_08A2BE24;
    case 761u: goto L_08A2BE28;
    case 762u: goto L_08A2BE30;
    case 763u: goto L_08A2BE68;
    case 764u: goto L_08A2BE74;
    case 765u: goto L_08A2BE94;
    case 766u: goto L_08A2BEAC;
    case 767u: goto L_08A2BEBC;
    case 768u: goto L_08A2BEC8;
    case 769u: goto L_08A2BF1C;
    case 770u: goto L_08A2BF2C;
    case 771u: goto L_08A2BF68;
    case 772u: goto L_08A2BF7C;
    case 773u: goto L_08A2BF80;
    case 774u: goto L_08A2BF90;
    case 775u: goto L_08A2BFA0;
    case 776u: goto L_08A2BFB0;
    case 777u: goto L_08A2BFB4;
    case 778u: goto L_08A2BFE8;
    default:
        if (local_transfers == 0u) rt.unsupported(ctx.pc, 0u, "invalid internal function entry");
        else ctx.pc = local_pc;
        return;
    }
    }
L_08A28000:
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(12), ctx.gpr[31]);
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(8), ctx.gpr[16]);
    ctx.set_gpr(16, ctx.gpr[4] + 0u);
    ctx.set_gpr(31, 0x08A28014u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0080_entry, 80u, 398u, 0x08945BF8u>(ctx, &aot_mem) && ctx.pc == 0x08A28014u) goto L_08A28014;
    return;
L_08A28014:
    ctx.set_gpr(2, 2232u << 16u);
    ctx.set_gpr(2, ctx.gpr[2] + static_cast<std::uint32_t>(-15576));
    rt.memory().aot_store32(ctx.gpr[16] + static_cast<std::uint32_t>(0), ctx.gpr[2]);
    rt.memory().aot_store32(ctx.gpr[16] + static_cast<std::uint32_t>(8), 0u);
    ctx.set_gpr(2, 2233u << 16u);
    ctx.set_gpr(2, ctx.gpr[2] + static_cast<std::uint32_t>(-18596));
    rt.memory().aot_store32(ctx.gpr[16] + static_cast<std::uint32_t>(0), ctx.gpr[2]);
    rt.memory().aot_store32(ctx.gpr[16] + static_cast<std::uint32_t>(12), 0u);
    rt.memory().aot_store32(ctx.gpr[16] + static_cast<std::uint32_t>(16), 0u);
    ctx.set_gpr(2, 2233u << 16u);
    ctx.set_gpr(2, ctx.gpr[2] + static_cast<std::uint32_t>(-16128));
    rt.memory().aot_store32(ctx.gpr[16] + static_cast<std::uint32_t>(0), ctx.gpr[2]);
    rt.memory().aot_store32(ctx.gpr[16] + static_cast<std::uint32_t>(28), 0u);
    ctx.set_gpr(2, 2233u << 16u);
    ctx.set_gpr(2, ctx.gpr[2] + static_cast<std::uint32_t>(-15656));
    rt.memory().aot_store32(ctx.gpr[16] + static_cast<std::uint32_t>(0), ctx.gpr[2]);
    rt.memory().aot_store32(ctx.gpr[16] + static_cast<std::uint32_t>(32), 0u);
    rt.memory().aot_store32(ctx.gpr[16] + static_cast<std::uint32_t>(36), 0u);
    rt.memory().aot_store32(ctx.gpr[16] + static_cast<std::uint32_t>(52), 0u);
    rt.memory().aot_store32(ctx.gpr[16] + static_cast<std::uint32_t>(64), 0u);
    rt.memory().aot_store32(ctx.gpr[16] + static_cast<std::uint32_t>(68), 0u);
    rt.memory().aot_store32(ctx.gpr[16] + static_cast<std::uint32_t>(76), 0u);
    rt.memory().aot_store32(ctx.gpr[16] + static_cast<std::uint32_t>(80), 0u);
    rt.memory().aot_store32(ctx.gpr[16] + static_cast<std::uint32_t>(84), 0u);
    rt.memory().aot_store32(ctx.gpr[16] + static_cast<std::uint32_t>(88), 0u);
    rt.memory().aot_store32(ctx.gpr[16] + static_cast<std::uint32_t>(92), 0u);
    rt.memory().aot_store32(ctx.gpr[16] + static_cast<std::uint32_t>(96), 0u);
    rt.memory().aot_store32(ctx.gpr[16] + static_cast<std::uint32_t>(100), 0u);
    rt.memory().aot_store32(ctx.gpr[16] + static_cast<std::uint32_t>(104), 0u);
    rt.memory().aot_store32(ctx.gpr[16] + static_cast<std::uint32_t>(108), 0u);
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
L_08A280A4:
    ctx.set_gpr(29, ctx.gpr[29] + static_cast<std::uint32_t>(-16));
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(12), ctx.gpr[31]);
    ctx.set_gpr(4, 2211u << 16u);
    ctx.set_gpr(4, ctx.gpr[4] + static_cast<std::uint32_t>(-32564));
    ctx.set_gpr(31, 0x08A280BCu);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0080_entry, 80u, 286u, 0x08945508u>(ctx, &aot_mem) && ctx.pc == 0x08A280BCu) goto L_08A280BC;
    return;
L_08A280BC:
    ctx.set_gpr(31, rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(12)));
    ctx.set_gpr(29, ctx.gpr[29] + static_cast<std::uint32_t>(16));
    jump_target = ctx.gpr[31];
    // nop
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_08A280CC:
    ctx.set_gpr(29, ctx.gpr[29] + static_cast<std::uint32_t>(-32));
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(28), ctx.gpr[31]);
    ctx.set_gpr(31, 0x08A280DCu);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0128_entry, 128u, 130u, 0x08A04824u>(ctx, &aot_mem) && ctx.pc == 0x08A280DCu) goto L_08A280DC;
    return;
L_08A280DC:
    ctx.set_gpr(2, 2211u << 16u);
    ctx.set_gpr(2, ctx.gpr[2] + static_cast<std::uint32_t>(-32424));
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(0), ctx.gpr[2]);
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(4), 0u);
    ctx.set_gpr(2, 2229u << 16u);
    ctx.set_gpr(2, ctx.gpr[2] + static_cast<std::uint32_t>(21424));
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(8), ctx.gpr[2]);
    ctx.set_gpr(4, 0u + 0u);
    ctx.set_gpr(5, 2246u << 16u);
    ctx.set_gpr(5, ctx.gpr[5] + static_cast<std::uint32_t>(-22440));
    ctx.set_gpr(6, 2210u << 16u);
    ctx.set_gpr(6, ctx.gpr[6] + static_cast<std::uint32_t>(-18900));
    ctx.set_gpr(7, 2211u << 16u);
    ctx.set_gpr(7, ctx.gpr[7] + static_cast<std::uint32_t>(-32440));
    ctx.set_gpr(8, 2210u << 16u);
    ctx.set_gpr(8, ctx.gpr[8] + static_cast<std::uint32_t>(-17988));
    ctx.set_gpr(9, 2229u << 16u);
    ctx.set_gpr(9, ctx.gpr[9] + static_cast<std::uint32_t>(21444));
    ctx.set_gpr(10, 0u + static_cast<std::uint32_t>(132));
    ctx.set_gpr(11, 2210u << 16u);
    ctx.set_gpr(11, ctx.gpr[11] + static_cast<std::uint32_t>(31728));
    ctx.set_gpr(31, 0x08A28138u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0080_entry, 80u, 294u, 0x08945594u>(ctx, &aot_mem) && ctx.pc == 0x08A28138u) goto L_08A28138;
    return;
L_08A28138:
    ctx.set_gpr(31, rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(28)));
    ctx.set_gpr(29, ctx.gpr[29] + static_cast<std::uint32_t>(32));
    jump_target = ctx.gpr[31];
    // nop
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_08A28148:
    ctx.set_gpr(2, 2246u << 16u);
    ctx.set_gpr(2, rt.memory().aot_load32(ctx.gpr[2] + static_cast<std::uint32_t>(-24180)));
    jump_target = ctx.gpr[31];
    // nop
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_08A28158:
    ctx.set_gpr(29, ctx.gpr[29] + static_cast<std::uint32_t>(-16));
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(12), ctx.gpr[31]);
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(8), ctx.gpr[18]);
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(4), ctx.gpr[17]);
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(0), ctx.gpr[16]);
    ctx.set_gpr(2, 2246u << 16u);
    ctx.set_gpr(18, rt.memory().aot_load32(ctx.gpr[2] + static_cast<std::uint32_t>(-22440)));
    ctx.set_gpr(4, ctx.gpr[18] + 0u);
    ctx.set_gpr(31, 0x08A28180u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0080_entry, 80u, 236u, 0x089451A8u>(ctx, &aot_mem) && ctx.pc == 0x08A28180u) goto L_08A28180;
    return;
L_08A28180:
    ctx.set_gpr(16, ctx.gpr[2] + 0u);
    ctx.set_gpr(4, ctx.gpr[18] + 0u);
    ctx.set_gpr(5, 2229u << 16u);
    ctx.set_gpr(5, ctx.gpr[5] + static_cast<std::uint32_t>(21472));
    ctx.set_gpr(6, 0u + static_cast<std::uint32_t>(5));
    ctx.set_gpr(31, 0x08A2819Cu);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0080_entry, 80u, 151u, 0x08944B98u>(ctx, &aot_mem) && ctx.pc == 0x08A2819Cu) goto L_08A2819C;
    return;
L_08A2819C:
    ctx.set_gpr(4, ctx.gpr[18] + 0u);
    ctx.set_gpr(5, ctx.gpr[16] + 0u);
    ctx.set_gpr(31, 0x08A281ACu);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0080_entry, 80u, 148u, 0x08944B4Cu>(ctx, &aot_mem) && ctx.pc == 0x08A281ACu) goto L_08A281AC;
    return;
L_08A281AC:
    ctx.set_gpr(17, ctx.gpr[2] + 0u);
    ctx.set_gpr(31, 0x08A281B8u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0047_entry, 47u, 301u, 0x088C1B50u>(ctx, &aot_mem) && ctx.pc == 0x08A281B8u) goto L_08A281B8;
    return;
L_08A281B8:
    rt.memory().aot_store32(ctx.gpr[17] + static_cast<std::uint32_t>(52), ctx.gpr[2]);
    rt.memory().aot_store8(ctx.gpr[17] + static_cast<std::uint32_t>(38), static_cast<std::uint8_t>(0u));
    ctx.set_gpr(5, ctx.gpr[16] + static_cast<std::uint32_t>(1));
    ctx.set_gpr(4, ctx.gpr[18] + 0u);
    ctx.set_gpr(31, 0x08A281D0u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0080_entry, 80u, 148u, 0x08944B4Cu>(ctx, &aot_mem) && ctx.pc == 0x08A281D0u) goto L_08A281D0;
    return;
L_08A281D0:
    ctx.set_gpr(17, ctx.gpr[2] + 0u);
    ctx.set_gpr(4, ctx.gpr[17] + 0u);
    ctx.set_gpr(5, 0u + static_cast<std::uint32_t>(255));
    ctx.set_gpr(31, 0x08A281E4u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0086_entry, 86u, 748u, 0x0895F1D0u>(ctx, &aot_mem) && ctx.pc == 0x08A281E4u) goto L_08A281E4;
    return;
L_08A281E4:
    rt.memory().aot_store8(ctx.gpr[17] + static_cast<std::uint32_t>(38), static_cast<std::uint8_t>(0u));
    ctx.set_gpr(5, ctx.gpr[16] + static_cast<std::uint32_t>(2));
    ctx.set_gpr(4, ctx.gpr[18] + 0u);
    ctx.set_gpr(31, 0x08A281F8u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0080_entry, 80u, 148u, 0x08944B4Cu>(ctx, &aot_mem) && ctx.pc == 0x08A281F8u) goto L_08A281F8;
    return;
L_08A281F8:
    ctx.set_gpr(17, ctx.gpr[2] + 0u);
    ctx.set_gpr(31, 0x08A28204u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0043_entry, 43u, 412u, 0x088B2640u>(ctx, &aot_mem) && ctx.pc == 0x08A28204u) goto L_08A28204;
    return;
L_08A28204:
    rt.memory().aot_store32(ctx.gpr[17] + static_cast<std::uint32_t>(52), ctx.gpr[2]);
    rt.memory().aot_store8(ctx.gpr[17] + static_cast<std::uint32_t>(38), static_cast<std::uint8_t>(0u));
    ctx.set_gpr(5, ctx.gpr[16] + static_cast<std::uint32_t>(3));
    ctx.set_gpr(4, ctx.gpr[18] + 0u);
    ctx.set_gpr(31, 0x08A2821Cu);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0080_entry, 80u, 148u, 0x08944B4Cu>(ctx, &aot_mem) && ctx.pc == 0x08A2821Cu) goto L_08A2821C;
    return;
L_08A2821C:
    ctx.set_gpr(17, ctx.gpr[2] + 0u);
    ctx.set_gpr(31, 0x08A28228u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0043_entry, 43u, 358u, 0x088B2194u>(ctx, &aot_mem) && ctx.pc == 0x08A28228u) goto L_08A28228;
    return;
L_08A28228:
    rt.memory().aot_store32(ctx.gpr[17] + static_cast<std::uint32_t>(52), ctx.gpr[2]);
    rt.memory().aot_store8(ctx.gpr[17] + static_cast<std::uint32_t>(38), static_cast<std::uint8_t>(0u));
    ctx.set_gpr(5, ctx.gpr[16] + static_cast<std::uint32_t>(4));
    ctx.set_gpr(4, ctx.gpr[18] + 0u);
    ctx.set_gpr(31, 0x08A28240u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0080_entry, 80u, 148u, 0x08944B4Cu>(ctx, &aot_mem) && ctx.pc == 0x08A28240u) goto L_08A28240;
    return;
L_08A28240:
    ctx.set_gpr(17, ctx.gpr[2] + 0u);
    ctx.set_gpr(31, 0x08A2824Cu);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0043_entry, 43u, 173u, 0x088B1040u>(ctx, &aot_mem) && ctx.pc == 0x08A2824Cu) goto L_08A2824C;
    return;
L_08A2824C:
    rt.memory().aot_store32(ctx.gpr[17] + static_cast<std::uint32_t>(52), ctx.gpr[2]);
    rt.memory().aot_store8(ctx.gpr[17] + static_cast<std::uint32_t>(38), static_cast<std::uint8_t>(0u));
    ctx.set_gpr(4, ctx.gpr[18] + 0u);
    ctx.set_gpr(5, 2229u << 16u);
    ctx.set_gpr(5, ctx.gpr[5] + static_cast<std::uint32_t>(21588));
    ctx.set_gpr(6, 2229u << 16u);
    ctx.set_gpr(6, ctx.gpr[6] + static_cast<std::uint32_t>(21608));
    ctx.set_gpr(7, 2229u << 16u);
    ctx.set_gpr(7, ctx.gpr[7] + static_cast<std::uint32_t>(21628));
    ctx.set_gpr(8, ctx.gpr[16] + 0u);
    ctx.set_gpr(31, 0x08A2827Cu);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0080_entry, 80u, 162u, 0x08944C7Cu>(ctx, &aot_mem) && ctx.pc == 0x08A2827Cu) goto L_08A2827C;
    return;
L_08A2827C:
    ctx.set_gpr(4, 2210u << 16u);
    ctx.set_gpr(4, ctx.gpr[4] + static_cast<std::uint32_t>(-18780));
    ctx.set_gpr(3, 2246u << 16u);
    ctx.set_gpr(3, rt.memory().aot_load32(ctx.gpr[3] + static_cast<std::uint32_t>(-22440)));
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
L_08A282AC:
    ctx.set_gpr(29, ctx.gpr[29] + static_cast<std::uint32_t>(-16));
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(12), ctx.gpr[31]);
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(8), ctx.gpr[18]);
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(4), ctx.gpr[17]);
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(0), ctx.gpr[16]);
    ctx.set_gpr(16, ctx.gpr[4] + 0u);
    ctx.set_gpr(17, ctx.gpr[5] + 0u);
    ctx.set_gpr(4, ctx.gpr[16] + static_cast<std::uint32_t>(32));
    ctx.set_gpr(31, 0x08A282D4u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0085_entry, 85u, 61u, 0x089584C4u>(ctx, &aot_mem) && ctx.pc == 0x08A282D4u) goto L_08A282D4;
    return;
L_08A282D4:
    ctx.set_gpr(2, rt.memory().aot_load8(ctx.gpr[28] + static_cast<std::uint32_t>(-32608)));
    { const bool branch_taken = ctx.gpr[2] == 0u;
    // nop
      if (branch_taken) {
          goto L_08A28388;
      }
      goto L_08A282E0;
    }
L_08A282E0:
    ctx.set_gpr(4, rt.memory().aot_load32(ctx.gpr[17] + static_cast<std::uint32_t>(12)));
    ctx.set_gpr(25, rt.memory().aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(0)));
    ctx.set_gpr(25, rt.memory().aot_load32(ctx.gpr[25] + static_cast<std::uint32_t>(96)));
    jump_target = ctx.gpr[25];
    ctx.set_gpr(31, 0x08A282F4u);
    // nop
    ctx.pc = jump_target;
    if (rt.invoke_chained_call(ctx, &aot_mem) && ctx.pc == 0x08A282F4u) goto L_08A282F4;
    return;
L_08A282F4:
    ctx.set_gpr(3, rt.memory().aot_load32(ctx.gpr[17] + static_cast<std::uint32_t>(12)));
    ctx.set_gpr(18, rt.memory().aot_load32(ctx.gpr[3] + static_cast<std::uint32_t>(24)));
    ctx.set_gpr(17, ctx.gpr[2] + 0u);
    ctx.set_gpr(4, ctx.gpr[16] + 0u);
    ctx.set_gpr(31, 0x08A2830Cu);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0081_entry, 81u, 41u, 0x0894835Cu>(ctx, &aot_mem) && ctx.pc == 0x08A2830Cu) goto L_08A2830C;
    return;
L_08A2830C:
    ctx.set_gpr(3, 2246u << 16u);
    ctx.set_gpr(4, rt.memory().aot_load32(ctx.gpr[3] + static_cast<std::uint32_t>(-22492)));
    ctx.set_gpr(5, ctx.gpr[16] + 0u);
    ctx.set_gpr(6, ctx.gpr[17] + 0u);
    ctx.set_gpr(7, ctx.gpr[2] + 0u);
    ctx.set_gpr(31, 0x08A28328u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0079_entry, 79u, 213u, 0x08940F60u>(ctx, &aot_mem) && ctx.pc == 0x08A28328u) goto L_08A28328;
    return;
L_08A28328:
    ctx.set_gpr(4, ctx.gpr[16] + 0u);
    ctx.set_gpr(31, 0x08A28334u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0081_entry, 81u, 41u, 0x0894835Cu>(ctx, &aot_mem) && ctx.pc == 0x08A28334u) goto L_08A28334;
    return;
L_08A28334:
    ctx.set_gpr(3, 2246u << 16u);
    ctx.set_gpr(4, rt.memory().aot_load32(ctx.gpr[3] + static_cast<std::uint32_t>(-22488)));
    ctx.set_gpr(5, ctx.gpr[16] + 0u);
    ctx.set_gpr(6, ctx.gpr[18] + 0u);
    ctx.set_gpr(7, ctx.gpr[2] + 0u);
    ctx.set_gpr(31, 0x08A28350u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0079_entry, 79u, 213u, 0x08940F60u>(ctx, &aot_mem) && ctx.pc == 0x08A28350u) goto L_08A28350;
    return;
L_08A28350:
    ctx.set_gpr(2, 2246u << 16u);
    ctx.set_gpr(4, rt.memory().aot_load32(ctx.gpr[2] + static_cast<std::uint32_t>(-22492)));
    ctx.set_gpr(5, ctx.gpr[16] + 0u);
    ctx.set_gpr(6, ctx.gpr[17] + 0u);
    ctx.set_gpr(31, 0x08A28368u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0079_entry, 79u, 233u, 0x089410F4u>(ctx, &aot_mem) && ctx.pc == 0x08A28368u) goto L_08A28368;
    return;
L_08A28368:
    ctx.set_gpr(2, 2246u << 16u);
    ctx.set_gpr(4, rt.memory().aot_load32(ctx.gpr[2] + static_cast<std::uint32_t>(-22488)));
    ctx.set_gpr(5, ctx.gpr[16] + 0u);
    ctx.set_gpr(6, ctx.gpr[18] + 0u);
    ctx.set_gpr(31, 0x08A28380u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0079_entry, 79u, 233u, 0x089410F4u>(ctx, &aot_mem) && ctx.pc == 0x08A28380u) goto L_08A28380;
    return;
L_08A28380:
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_08A283C0;
      }
      goto L_08A28388;
    }
L_08A28388:
    ctx.set_gpr(2, 2246u << 16u);
    ctx.set_gpr(4, rt.memory().aot_load32(ctx.gpr[2] + static_cast<std::uint32_t>(-22492)));
    ctx.set_gpr(5, ctx.gpr[16] + 0u);
    ctx.set_gpr(25, rt.memory().aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(0)));
    ctx.set_gpr(25, rt.memory().aot_load32(ctx.gpr[25] + static_cast<std::uint32_t>(132)));
    jump_target = ctx.gpr[25];
    ctx.set_gpr(31, 0x08A283A4u);
    // nop
    ctx.pc = jump_target;
    if (rt.invoke_chained_call(ctx, &aot_mem) && ctx.pc == 0x08A283A4u) goto L_08A283A4;
    return;
L_08A283A4:
    ctx.set_gpr(2, 2246u << 16u);
    ctx.set_gpr(4, rt.memory().aot_load32(ctx.gpr[2] + static_cast<std::uint32_t>(-22488)));
    ctx.set_gpr(5, ctx.gpr[16] + 0u);
    ctx.set_gpr(25, rt.memory().aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(0)));
    ctx.set_gpr(25, rt.memory().aot_load32(ctx.gpr[25] + static_cast<std::uint32_t>(132)));
    jump_target = ctx.gpr[25];
    ctx.set_gpr(31, 0x08A283C0u);
    // nop
    ctx.pc = jump_target;
    if (rt.invoke_chained_call(ctx, &aot_mem) && ctx.pc == 0x08A283C0u) goto L_08A283C0;
    return;
L_08A283C0:
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
L_08A283DC:
    ctx.set_gpr(2, rt.memory().aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(16)));
    ctx.set_gpr(2, rt.memory().aot_load32(ctx.gpr[2] + static_cast<std::uint32_t>(8)));
    jump_target = ctx.gpr[31];
    // nop
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_08A283EC:
    ctx.set_gpr(29, ctx.gpr[29] + static_cast<std::uint32_t>(-48));
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(28), ctx.gpr[31]);
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(24), ctx.gpr[21]);
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(20), ctx.gpr[20]);
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(16), ctx.gpr[19]);
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(12), ctx.gpr[18]);
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(8), ctx.gpr[17]);
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(4), ctx.gpr[16]);
    ctx.set_gpr(19, ctx.gpr[4] + 0u);
    ctx.set_gpr(18, ctx.gpr[5] + 0u);
    ctx.set_gpr(4, rt.memory().aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(32)));
    ctx.set_gpr(6, ctx.gpr[19] + 0u);
    ctx.set_gpr(25, rt.memory().aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(0)));
    ctx.set_gpr(25, rt.memory().aot_load32(ctx.gpr[25] + static_cast<std::uint32_t>(96)));
    jump_target = ctx.gpr[25];
    ctx.set_gpr(31, 0x08A2842Cu);
    // nop
    ctx.pc = jump_target;
    if (rt.invoke_chained_call(ctx, &aot_mem) && ctx.pc == 0x08A2842Cu) goto L_08A2842C;
    return;
L_08A2842C:
    ctx.set_gpr(17, ctx.gpr[2] + 0u);
    ctx.set_gpr(4, ctx.gpr[29] + static_cast<std::uint32_t>(40));
    ctx.set_gpr(31, 0x08A2843Cu);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0085_entry, 85u, 192u, 0x08958D34u>(ctx, &aot_mem) && ctx.pc == 0x08A2843Cu) goto L_08A2843C;
    return;
L_08A2843C:
    ctx.set_gpr(2, rt.memory().aot_load8(ctx.gpr[19] + static_cast<std::uint32_t>(121)));
    { const bool branch_taken = ctx.gpr[2] != 0u;
    // nop
      if (branch_taken) {
          goto L_08A2847C;
      }
      goto L_08A28448;
    }
L_08A28448:
    ctx.set_gpr(4, rt.memory().aot_load32(ctx.gpr[19] + static_cast<std::uint32_t>(32)));
    ctx.set_gpr(25, rt.memory().aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(0)));
    ctx.set_gpr(25, rt.memory().aot_load32(ctx.gpr[25] + static_cast<std::uint32_t>(100)));
    jump_target = ctx.gpr[25];
    ctx.set_gpr(31, 0x08A2845Cu);
    // nop
    ctx.pc = jump_target;
    if (rt.invoke_chained_call(ctx, &aot_mem) && ctx.pc == 0x08A2845Cu) goto L_08A2845C;
    return;
L_08A2845C:
    { const bool branch_taken = ctx.gpr[2] != 0u;
    // nop
      if (branch_taken) {
          goto L_08A28568;
      }
      goto L_08A28464;
    }
L_08A28464:
    ctx.set_gpr(4, rt.memory().aot_load32(ctx.gpr[19] + static_cast<std::uint32_t>(32)));
    ctx.set_gpr(5, 0u + static_cast<std::uint32_t>(1));
    ctx.set_gpr(25, rt.memory().aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(0)));
    ctx.set_gpr(25, rt.memory().aot_load32(ctx.gpr[25] + static_cast<std::uint32_t>(104)));
    jump_target = ctx.gpr[25];
    ctx.set_gpr(31, 0x08A2847Cu);
    // nop
    ctx.pc = jump_target;
    if (rt.invoke_chained_call(ctx, &aot_mem) && ctx.pc == 0x08A2847Cu) goto L_08A2847C;
    return;
L_08A2847C:
    ctx.set_gpr(4, rt.memory().aot_load32(ctx.gpr[19] + static_cast<std::uint32_t>(32)));
    ctx.set_gpr(20, rt.memory().aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(12)));
    ctx.set_gpr(16, rt.memory().aot_load32(ctx.gpr[19] + static_cast<std::uint32_t>(52)));
    ctx.set_gpr(2, rt.memory().aot_load8(ctx.gpr[19] + static_cast<std::uint32_t>(121)));
    { const bool branch_taken = ctx.gpr[2] == 0u;
    // nop
      if (branch_taken) {
          goto L_08A284A0;
      }
      goto L_08A28494;
    }
L_08A28494:
    ctx.set_gpr(21, rt.memory().aot_load32(ctx.gpr[19] + static_cast<std::uint32_t>(36)));
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_08A284B4;
      }
      goto L_08A284A0;
    }
L_08A284A0:
    ctx.set_gpr(25, rt.memory().aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(0)));
    ctx.set_gpr(25, rt.memory().aot_load32(ctx.gpr[25] + static_cast<std::uint32_t>(108)));
    jump_target = ctx.gpr[25];
    ctx.set_gpr(31, 0x08A284B0u);
    // nop
    ctx.pc = jump_target;
    if (rt.invoke_chained_call(ctx, &aot_mem) && ctx.pc == 0x08A284B0u) goto L_08A284B0;
    return;
L_08A284B0:
    ctx.set_gpr(21, ctx.gpr[2] + 0u);
    goto L_08A284B4;
L_08A284B4:
    ctx.set_gpr(2, rt.memory().aot_load8(ctx.gpr[19] + static_cast<std::uint32_t>(121)));
    { const bool branch_taken = ctx.gpr[2] == 0u;
    // nop
      if (branch_taken) {
          goto L_08A284CC;
      }
      goto L_08A284C0;
    }
L_08A284C0:
    ctx.set_gpr(2, rt.memory().aot_load32(ctx.gpr[19] + static_cast<std::uint32_t>(40)));
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_08A284E0;
      }
      goto L_08A284CC;
    }
L_08A284CC:
    ctx.set_gpr(4, rt.memory().aot_load32(ctx.gpr[19] + static_cast<std::uint32_t>(32)));
    ctx.set_gpr(25, rt.memory().aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(0)));
    ctx.set_gpr(25, rt.memory().aot_load32(ctx.gpr[25] + static_cast<std::uint32_t>(116)));
    jump_target = ctx.gpr[25];
    ctx.set_gpr(31, 0x08A284E0u);
    // nop
    ctx.pc = jump_target;
    if (rt.invoke_chained_call(ctx, &aot_mem) && ctx.pc == 0x08A284E0u) goto L_08A284E0;
    return;
L_08A284E0:
    ctx.set_gpr(4, ctx.gpr[20] + 0u);
    ctx.set_gpr(5, ctx.gpr[18] + 0u);
    ctx.set_gpr(6, ctx.gpr[19] + 0u);
    ctx.set_gpr(7, ctx.gpr[17] + 0u);
    ctx.set_gpr(8, ctx.gpr[21] + 0u);
    ctx.set_gpr(9, ctx.gpr[2] + 0u);
    ctx.set_gpr(10, ctx.gpr[16] + 0u);
    ctx.set_gpr(25, rt.memory().aot_load32(ctx.gpr[20] + static_cast<std::uint32_t>(0)));
    ctx.set_gpr(25, rt.memory().aot_load32(ctx.gpr[25] + static_cast<std::uint32_t>(92)));
    jump_target = ctx.gpr[25];
    ctx.set_gpr(31, 0x08A2850Cu);
    // nop
    ctx.pc = jump_target;
    if (rt.invoke_chained_call(ctx, &aot_mem) && ctx.pc == 0x08A2850Cu) goto L_08A2850C;
    return;
L_08A2850C:
    ctx.set_gpr(4, ctx.gpr[29] + static_cast<std::uint32_t>(32));
    ctx.set_gpr(31, 0x08A28518u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0085_entry, 85u, 192u, 0x08958D34u>(ctx, &aot_mem) && ctx.pc == 0x08A28518u) goto L_08A28518;
    return;
L_08A28518:
    ctx.set_gpr(7, rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(32)));
    ctx.set_gpr(6, rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(36)));
    ctx.set_gpr(5, rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(40)));
    ctx.set_gpr(3, rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(44)));
    ctx.set_gpr(4, ctx.gpr[7] < ctx.gpr[5] ? 1u : 0u);
    ctx.set_gpr(5, ctx.gpr[7] - ctx.gpr[5]);
    ctx.set_gpr(3, ctx.gpr[6] - ctx.gpr[3]);
    ctx.set_gpr(7, ctx.gpr[3] - ctx.gpr[4]);
    ctx.set_gpr(3, 2246u << 16u);
    ctx.set_gpr(6, rt.memory().aot_load32(ctx.gpr[3] + static_cast<std::uint32_t>(-20968)));
    ctx.set_gpr(3, 2246u << 16u);
    ctx.set_gpr(4, rt.memory().aot_load32(ctx.gpr[3] + static_cast<std::uint32_t>(-20964)));
    ctx.set_gpr(5, ctx.gpr[6] + ctx.gpr[5]);
    ctx.set_gpr(3, ctx.gpr[5] < ctx.gpr[6] ? 1u : 0u);
    ctx.set_gpr(3, ctx.gpr[3] + ctx.gpr[4]);
    ctx.set_gpr(4, ctx.gpr[3] + ctx.gpr[7]);
    ctx.set_gpr(3, 2246u << 16u);
    rt.memory().aot_store32(ctx.gpr[3] + static_cast<std::uint32_t>(-20968), ctx.gpr[5]);
    ctx.set_gpr(3, 2246u << 16u);
    rt.memory().aot_store32(ctx.gpr[3] + static_cast<std::uint32_t>(-20964), ctx.gpr[4]);
    goto L_08A28568;
L_08A28568:
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
L_08A28590:
    ctx.set_gpr(29, ctx.gpr[29] + static_cast<std::uint32_t>(-32));
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(12), ctx.gpr[31]);
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(8), ctx.gpr[18]);
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(4), ctx.gpr[17]);
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(0), ctx.gpr[16]);
    ctx.set_gpr(17, ctx.gpr[4] + 0u);
    ctx.set_gpr(16, ctx.gpr[5] + 0u);
    ctx.set_gpr(2, rt.memory().aot_load8(ctx.gpr[4] + static_cast<std::uint32_t>(121)));
    { const bool branch_taken = ctx.gpr[2] == 0u;
    // nop
      if (branch_taken) {
          goto L_08A285C4;
      }
      goto L_08A285B8;
    }
L_08A285B8:
    ctx.set_gpr(2, rt.memory().aot_load32(ctx.gpr[17] + static_cast<std::uint32_t>(36)));
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_08A285D8;
      }
      goto L_08A285C4;
    }
L_08A285C4:
    ctx.set_gpr(4, rt.memory().aot_load32(ctx.gpr[17] + static_cast<std::uint32_t>(32)));
    ctx.set_gpr(25, rt.memory().aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(0)));
    ctx.set_gpr(25, rt.memory().aot_load32(ctx.gpr[25] + static_cast<std::uint32_t>(108)));
    jump_target = ctx.gpr[25];
    ctx.set_gpr(31, 0x08A285D8u);
    // nop
    ctx.pc = jump_target;
    if (rt.invoke_chained_call(ctx, &aot_mem) && ctx.pc == 0x08A285D8u) goto L_08A285D8;
    return;
L_08A285D8:
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(24), ctx.gpr[2]);
    ctx.set_gpr(4, ctx.gpr[16] + static_cast<std::uint32_t>(248));
    ctx.set_gpr(31, 0x08A285E8u);
    // nop
    goto L_08A2882C;
L_08A285E8:
    ctx.set_gpr(4, ctx.gpr[2] + 0u);
    ctx.set_gpr(5, ctx.gpr[29] + static_cast<std::uint32_t>(24));
    ctx.set_gpr(31, 0x08A285F8u);
    // nop
    goto L_08A287A8;
L_08A285F8:
    ctx.set_gpr(2, rt.memory().aot_load32(ctx.gpr[17] + static_cast<std::uint32_t>(32)));
    ctx.set_gpr(2, rt.memory().aot_load32(ctx.gpr[2] + static_cast<std::uint32_t>(12)));
    ctx.set_gpr(2, rt.memory().aot_load32(ctx.gpr[2] + static_cast<std::uint32_t>(24)));
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(28), ctx.gpr[2]);
    ctx.set_gpr(2, rt.memory().aot_load8(ctx.gpr[17] + static_cast<std::uint32_t>(121)));
    { const bool branch_taken = ctx.gpr[2] == 0u;
    // nop
      if (branch_taken) {
          goto L_08A28620;
      }
      goto L_08A28614;
    }
L_08A28614:
    ctx.set_gpr(2, rt.memory().aot_load32(ctx.gpr[17] + static_cast<std::uint32_t>(40)));
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_08A28634;
      }
      goto L_08A28620;
    }
L_08A28620:
    ctx.set_gpr(4, rt.memory().aot_load32(ctx.gpr[17] + static_cast<std::uint32_t>(32)));
    ctx.set_gpr(25, rt.memory().aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(0)));
    ctx.set_gpr(25, rt.memory().aot_load32(ctx.gpr[25] + static_cast<std::uint32_t>(116)));
    jump_target = ctx.gpr[25];
    ctx.set_gpr(31, 0x08A28634u);
    // nop
    ctx.pc = jump_target;
    if (rt.invoke_chained_call(ctx, &aot_mem) && ctx.pc == 0x08A28634u) goto L_08A28634;
    return;
L_08A28634:
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(20), ctx.gpr[2]);
    ctx.set_gpr(4, ctx.gpr[16] + static_cast<std::uint32_t>(252));
    ctx.set_gpr(31, 0x08A28644u);
    // nop
    goto L_08A2882C;
L_08A28644:
    ctx.set_gpr(4, ctx.gpr[2] + 0u);
    ctx.set_gpr(5, ctx.gpr[29] + static_cast<std::uint32_t>(20));
    ctx.set_gpr(31, 0x08A28654u);
    // nop
    goto L_08A287A8;
L_08A28654:
    ctx.set_gpr(4, rt.memory().aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(256)));
    ctx.set_gpr(5, ctx.gpr[29] + static_cast<std::uint32_t>(28));
    ctx.set_gpr(31, 0x08A28664u);
    // nop
    goto L_08A28724;
L_08A28664:
    ctx.set_gpr(4, rt.memory().aot_load32(ctx.gpr[17] + static_cast<std::uint32_t>(44)));
    { const bool branch_taken = ctx.gpr[4] == 0u;
    // nop
      if (branch_taken) {
          goto L_08A28688;
      }
      goto L_08A28670;
    }
L_08A28670:
    ctx.set_gpr(5, ctx.gpr[16] + 0u);
    ctx.set_gpr(31, 0x08A2867Cu);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0138_entry, 138u, 305u, 0x08A2D36Cu>(ctx, &aot_mem) && ctx.pc == 0x08A2867Cu) goto L_08A2867C;
    return;
L_08A2867C:
    ctx.set_gpr(18, ctx.gpr[2] + 0u);
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_08A2868C;
      }
      goto L_08A28688;
    }
L_08A28688:
    ctx.set_gpr(18, 0u + 0u);
    goto L_08A2868C;
L_08A2868C:
    ctx.set_gpr(4, ctx.gpr[16] + static_cast<std::uint32_t>(248));
    ctx.set_gpr(31, 0x08A28698u);
    // nop
    goto L_08A2882C;
L_08A28698:
    ctx.set_gpr(17, ctx.gpr[2] + 0u);
    ctx.set_gpr(4, ctx.gpr[17] + 0u);
    ctx.set_gpr(31, 0x08A286A8u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0016_entry, 16u, 73u, 0x08844420u>(ctx, &aot_mem) && ctx.pc == 0x08A286A8u) goto L_08A286A8;
    return;
L_08A286A8:
    ctx.set_gpr(5, ctx.gpr[2] + static_cast<std::uint32_t>(-1));
    ctx.set_gpr(4, ctx.gpr[17] + 0u);
    ctx.set_gpr(31, 0x08A286B8u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0067_entry, 67u, 9u, 0x089100E0u>(ctx, &aot_mem) && ctx.pc == 0x08A286B8u) goto L_08A286B8;
    return;
L_08A286B8:
    ctx.set_gpr(4, ctx.gpr[16] + static_cast<std::uint32_t>(252));
    ctx.set_gpr(31, 0x08A286C4u);
    // nop
    goto L_08A2882C;
L_08A286C4:
    ctx.set_gpr(17, ctx.gpr[2] + 0u);
    ctx.set_gpr(4, ctx.gpr[17] + 0u);
    ctx.set_gpr(31, 0x08A286D4u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0016_entry, 16u, 73u, 0x08844420u>(ctx, &aot_mem) && ctx.pc == 0x08A286D4u) goto L_08A286D4;
    return;
L_08A286D4:
    ctx.set_gpr(5, ctx.gpr[2] + static_cast<std::uint32_t>(-1));
    ctx.set_gpr(4, ctx.gpr[17] + 0u);
    ctx.set_gpr(31, 0x08A286E4u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0067_entry, 67u, 9u, 0x089100E0u>(ctx, &aot_mem) && ctx.pc == 0x08A286E4u) goto L_08A286E4;
    return;
L_08A286E4:
    ctx.set_gpr(16, rt.memory().aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(256)));
    ctx.set_gpr(4, ctx.gpr[16] + 0u);
    ctx.set_gpr(31, 0x08A286F4u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0016_entry, 16u, 73u, 0x08844420u>(ctx, &aot_mem) && ctx.pc == 0x08A286F4u) goto L_08A286F4;
    return;
L_08A286F4:
    ctx.set_gpr(5, ctx.gpr[2] + static_cast<std::uint32_t>(-1));
    ctx.set_gpr(4, ctx.gpr[16] + 0u);
    ctx.set_gpr(31, 0x08A28704u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0067_entry, 67u, 9u, 0x089100E0u>(ctx, &aot_mem) && ctx.pc == 0x08A28704u) goto L_08A28704;
    return;
L_08A28704:
    ctx.set_gpr(2, ctx.gpr[18] + 0u);
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
L_08A28724:
    ctx.set_gpr(29, ctx.gpr[29] + static_cast<std::uint32_t>(-16));
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(12), ctx.gpr[31]);
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(8), ctx.gpr[18]);
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(4), ctx.gpr[17]);
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(0), ctx.gpr[16]);
    ctx.set_gpr(16, ctx.gpr[4] + 0u);
    ctx.set_gpr(18, ctx.gpr[5] + 0u);
    ctx.set_gpr(17, rt.memory().aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(8)));
    ctx.set_gpr(3, rt.memory().aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(12)));
    ctx.set_gpr(1, static_cast<std::int32_t>(ctx.gpr[17]) < static_cast<std::int32_t>(ctx.gpr[3]) ? 1u : 0u);
    { const bool branch_taken = ctx.gpr[1] == 0u;
    // nop
      if (branch_taken) {
          goto L_08A28768;
      }
      goto L_08A28754;
    }
L_08A28754:
    ctx.set_gpr(3, rt.memory().aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(8)));
    ctx.set_gpr(3, ctx.gpr[3] + static_cast<std::uint32_t>(1));
    rt.memory().aot_store32(ctx.gpr[16] + static_cast<std::uint32_t>(8), ctx.gpr[3]);
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_08A28778;
      }
      goto L_08A28768;
    }
L_08A28768:
    ctx.set_gpr(5, ctx.gpr[17] + static_cast<std::uint32_t>(1));
    ctx.set_gpr(6, 0u + static_cast<std::uint32_t>(4));
    ctx.set_gpr(31, 0x08A28778u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0066_entry, 66u, 795u, 0x0890FB1Cu>(ctx, &aot_mem) && ctx.pc == 0x08A28778u) goto L_08A28778;
    return;
L_08A28778:
    ctx.set_gpr(5, rt.memory().aot_load32(ctx.gpr[18] + static_cast<std::uint32_t>(0)));
    ctx.set_gpr(4, ctx.gpr[17] << 2u);
    ctx.set_gpr(3, rt.memory().aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(16)));
    ctx.set_gpr(3, ctx.gpr[3] + ctx.gpr[4]);
    rt.memory().aot_store32(ctx.gpr[3] + static_cast<std::uint32_t>(0), ctx.gpr[5]);
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
L_08A287A8:
    ctx.set_gpr(29, ctx.gpr[29] + static_cast<std::uint32_t>(-16));
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(12), ctx.gpr[31]);
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(8), ctx.gpr[18]);
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(4), ctx.gpr[17]);
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(0), ctx.gpr[16]);
    ctx.set_gpr(16, ctx.gpr[4] + 0u);
    ctx.set_gpr(18, ctx.gpr[5] + 0u);
    ctx.set_gpr(17, rt.memory().aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(8)));
    ctx.set_gpr(3, rt.memory().aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(12)));
    ctx.set_gpr(1, static_cast<std::int32_t>(ctx.gpr[17]) < static_cast<std::int32_t>(ctx.gpr[3]) ? 1u : 0u);
    { const bool branch_taken = ctx.gpr[1] == 0u;
    // nop
      if (branch_taken) {
          goto L_08A287EC;
      }
      goto L_08A287D8;
    }
L_08A287D8:
    ctx.set_gpr(3, rt.memory().aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(8)));
    ctx.set_gpr(3, ctx.gpr[3] + static_cast<std::uint32_t>(1));
    rt.memory().aot_store32(ctx.gpr[16] + static_cast<std::uint32_t>(8), ctx.gpr[3]);
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_08A287FC;
      }
      goto L_08A287EC;
    }
L_08A287EC:
    ctx.set_gpr(5, ctx.gpr[17] + static_cast<std::uint32_t>(1));
    ctx.set_gpr(6, 0u + static_cast<std::uint32_t>(4));
    ctx.set_gpr(31, 0x08A287FCu);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0066_entry, 66u, 795u, 0x0890FB1Cu>(ctx, &aot_mem) && ctx.pc == 0x08A287FCu) goto L_08A287FC;
    return;
L_08A287FC:
    ctx.set_gpr(5, rt.memory().aot_load32(ctx.gpr[18] + static_cast<std::uint32_t>(0)));
    ctx.set_gpr(4, ctx.gpr[17] << 2u);
    ctx.set_gpr(3, rt.memory().aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(16)));
    ctx.set_gpr(3, ctx.gpr[3] + ctx.gpr[4]);
    rt.memory().aot_store32(ctx.gpr[3] + static_cast<std::uint32_t>(0), ctx.gpr[5]);
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
L_08A2882C:
    ctx.set_gpr(2, rt.memory().aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(0)));
    jump_target = ctx.gpr[31];
    // nop
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_08A28838:
    ctx.set_gpr(29, ctx.gpr[29] + static_cast<std::uint32_t>(-32));
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(12), ctx.gpr[31]);
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(8), ctx.gpr[18]);
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(4), ctx.gpr[17]);
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(0), ctx.gpr[16]);
    ctx.set_gpr(17, ctx.gpr[4] + 0u);
    ctx.set_gpr(16, ctx.gpr[5] + 0u);
    ctx.set_gpr(4, ctx.gpr[29] + static_cast<std::uint32_t>(24));
    ctx.set_gpr(31, 0x08A28860u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0085_entry, 85u, 192u, 0x08958D34u>(ctx, &aot_mem) && ctx.pc == 0x08A28860u) goto L_08A28860;
    return;
L_08A28860:
    ctx.set_gpr(4, rt.memory().aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(52)));
    ctx.set_gpr(2, 2245u << 16u);
    ctx.set_gpr(2, rt.memory().aot_load32(ctx.gpr[2] + static_cast<std::uint32_t>(24744)));
    ctx.set_gpr(2, rt.memory().aot_load32(ctx.gpr[2] + static_cast<std::uint32_t>(8)));
    ctx.set_gpr(3, ctx.gpr[2] << 2u);
    ctx.set_gpr(2, rt.memory().aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(68)));
    ctx.set_gpr(2, ctx.gpr[2] + ctx.gpr[3]);
    ctx.set_gpr(18, rt.memory().aot_load32(ctx.gpr[2] + static_cast<std::uint32_t>(0)));
    ctx.set_gpr(4, ctx.gpr[4] + static_cast<std::uint32_t>(16));
    ctx.set_gpr(31, 0x08A2888Cu);
    // nop
    goto L_08A28AC0;
L_08A2888C:
    ctx.set_gpr(4, ctx.gpr[2] + 0u);
    ctx.set_gpr(5, ctx.gpr[18] + 0u);
    ctx.set_gpr(31, 0x08A2889Cu);
    // nop
    goto L_08A28AA8;
L_08A2889C:
    ctx.set_gpr(4, ctx.gpr[2] + 0u);
    ctx.set_gpr(2, rt.memory().aot_load32(ctx.gpr[2] + static_cast<std::uint32_t>(8)));
    ctx.set_gpr(2, ctx.gpr[2] ^ 0u);
    ctx.set_gpr(2, ctx.gpr[2] < static_cast<std::uint32_t>(1) ? 1u : 0u);
    { const bool branch_taken = ctx.gpr[2] == 0u;
    // nop
      if (branch_taken) {
          goto L_08A288C0;
      }
      goto L_08A288B4;
    }
L_08A288B4:
    ctx.set_gpr(2, 0u + 0u);
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_08A288CC;
      }
      goto L_08A288C0;
    }
L_08A288C0:
    ctx.set_gpr(31, 0x08A288C8u);
    // nop
    goto L_08A28A8C;
L_08A288C8:
    ctx.set_gpr(2, rt.memory().aot_load32(ctx.gpr[2] + static_cast<std::uint32_t>(0)));
    goto L_08A288CC;
L_08A288CC:
    ctx.set_gpr(5, ctx.gpr[2] + static_cast<std::uint32_t>(12));
    ctx.set_gpr(4, ctx.gpr[17] + static_cast<std::uint32_t>(124));
    ctx.set_gpr(31, 0x08A288DCu);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0126_entry, 126u, 747u, 0x089FFC4Cu>(ctx, &aot_mem) && ctx.pc == 0x08A288DCu) goto L_08A288DC;
    return;
L_08A288DC:
    ctx.set_gpr(5, ctx.gpr[16] + static_cast<std::uint32_t>(164));
    ctx.set_gpr(4, ctx.gpr[17] + static_cast<std::uint32_t>(188));
    ctx.set_gpr(31, 0x08A288ECu);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0126_entry, 126u, 747u, 0x089FFC4Cu>(ctx, &aot_mem) && ctx.pc == 0x08A288ECu) goto L_08A288EC;
    return;
L_08A288EC:
    ctx.set_gpr(2, rt.memory().aot_load32(ctx.gpr[17] + static_cast<std::uint32_t>(52)));
    ctx.set_gpr(2, rt.memory().aot_load32(ctx.gpr[2] + static_cast<std::uint32_t>(8)));
    { const bool branch_taken = ctx.gpr[2] != 0u;
    // nop
      if (branch_taken) {
          goto L_08A28914;
      }
      goto L_08A288FC;
    }
L_08A288FC:
    ctx.set_gpr(2, rt.memory().aot_load8(ctx.gpr[17] + static_cast<std::uint32_t>(120)));
    { const bool branch_taken = ctx.gpr[2] != 0u;
    // nop
      if (branch_taken) {
          goto L_08A28914;
      }
      goto L_08A28908;
    }
L_08A28908:
    rt.memory().aot_store8(ctx.gpr[17] + static_cast<std::uint32_t>(121), static_cast<std::uint8_t>(0u));
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_08A2891C;
      }
      goto L_08A28914;
    }
L_08A28914:
    ctx.set_gpr(2, 0u + static_cast<std::uint32_t>(1));
    rt.memory().aot_store8(ctx.gpr[17] + static_cast<std::uint32_t>(121), static_cast<std::uint8_t>(ctx.gpr[2]));
    goto L_08A2891C;
L_08A2891C:
    ctx.set_gpr(18, ctx.gpr[17] + static_cast<std::uint32_t>(124));
    ctx.set_gpr(2, rt.memory().aot_load8(ctx.gpr[17] + static_cast<std::uint32_t>(121)));
    { const bool branch_taken = ctx.gpr[2] == 0u;
    // nop
      if (branch_taken) {
          goto L_08A28938;
      }
      goto L_08A2892C;
    }
L_08A2892C:
    ctx.set_gpr(2, rt.memory().aot_load32(ctx.gpr[17] + static_cast<std::uint32_t>(36)));
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_08A2894C;
      }
      goto L_08A28938;
    }
L_08A28938:
    ctx.set_gpr(4, rt.memory().aot_load32(ctx.gpr[17] + static_cast<std::uint32_t>(32)));
    ctx.set_gpr(25, rt.memory().aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(0)));
    ctx.set_gpr(25, rt.memory().aot_load32(ctx.gpr[25] + static_cast<std::uint32_t>(108)));
    jump_target = ctx.gpr[25];
    ctx.set_gpr(31, 0x08A2894Cu);
    // nop
    ctx.pc = jump_target;
    if (rt.invoke_chained_call(ctx, &aot_mem) && ctx.pc == 0x08A2894Cu) goto L_08A2894C;
    return;
L_08A2894C:
    ctx.set_gpr(4, ctx.gpr[2] + 0u);
    ctx.set_gpr(5, ctx.gpr[17] + static_cast<std::uint32_t>(56));
    ctx.set_gpr(6, ctx.gpr[18] + 0u);
    ctx.set_gpr(31, 0x08A28960u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0126_entry, 126u, 727u, 0x089FF9E0u>(ctx, &aot_mem) && ctx.pc == 0x08A28960u) goto L_08A28960;
    return;
L_08A28960:
    ctx.set_gpr(2, rt.memory().aot_load8(ctx.gpr[17] + static_cast<std::uint32_t>(252)));
    { const bool branch_taken = ctx.gpr[2] == 0u;
    // nop
      if (branch_taken) {
          goto L_08A2897C;
      }
      goto L_08A2896C;
    }
L_08A2896C:
    ctx.set_gpr(4, ctx.gpr[17] + 0u);
    ctx.set_gpr(5, ctx.gpr[16] + 0u);
    ctx.set_gpr(31, 0x08A2897Cu);
    // nop
    goto L_08A283EC;
L_08A2897C:
    ctx.set_gpr(4, ctx.gpr[29] + static_cast<std::uint32_t>(16));
    ctx.set_gpr(31, 0x08A28988u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0085_entry, 85u, 192u, 0x08958D34u>(ctx, &aot_mem) && ctx.pc == 0x08A28988u) goto L_08A28988;
    return;
L_08A28988:
    ctx.set_gpr(6, rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(16)));
    ctx.set_gpr(5, rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(20)));
    ctx.set_gpr(4, rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(24)));
    ctx.set_gpr(2, rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(28)));
    ctx.set_gpr(3, ctx.gpr[6] < ctx.gpr[4] ? 1u : 0u);
    ctx.set_gpr(4, ctx.gpr[6] - ctx.gpr[4]);
    ctx.set_gpr(2, ctx.gpr[5] - ctx.gpr[2]);
    ctx.set_gpr(6, ctx.gpr[2] - ctx.gpr[3]);
    ctx.set_gpr(2, 2246u << 16u);
    ctx.set_gpr(5, rt.memory().aot_load32(ctx.gpr[2] + static_cast<std::uint32_t>(-20984)));
    ctx.set_gpr(2, 2246u << 16u);
    ctx.set_gpr(3, rt.memory().aot_load32(ctx.gpr[2] + static_cast<std::uint32_t>(-20980)));
    ctx.set_gpr(4, ctx.gpr[5] + ctx.gpr[4]);
    ctx.set_gpr(2, ctx.gpr[4] < ctx.gpr[5] ? 1u : 0u);
    ctx.set_gpr(2, ctx.gpr[2] + ctx.gpr[3]);
    ctx.set_gpr(3, ctx.gpr[2] + ctx.gpr[6]);
    ctx.set_gpr(2, 2246u << 16u);
    rt.memory().aot_store32(ctx.gpr[2] + static_cast<std::uint32_t>(-20984), ctx.gpr[4]);
    ctx.set_gpr(2, 2246u << 16u);
    rt.memory().aot_store32(ctx.gpr[2] + static_cast<std::uint32_t>(-20980), ctx.gpr[3]);
    ctx.set_gpr(2, rt.memory().aot_load8(ctx.gpr[17] + static_cast<std::uint32_t>(253)));
    { const bool branch_taken = ctx.gpr[2] == 0u;
    // nop
      if (branch_taken) {
          goto L_08A28A6C;
      }
      goto L_08A289E4;
    }
L_08A289E4:
    ctx.set_gpr(4, ctx.gpr[29] + static_cast<std::uint32_t>(24));
    ctx.set_gpr(31, 0x08A289F0u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0085_entry, 85u, 192u, 0x08958D34u>(ctx, &aot_mem) && ctx.pc == 0x08A289F0u) goto L_08A289F0;
    return;
L_08A289F0:
    ctx.set_gpr(4, ctx.gpr[17] + 0u);
    ctx.set_gpr(5, ctx.gpr[16] + 0u);
    ctx.set_gpr(31, 0x08A28A00u);
    // nop
    goto L_08A28590;
L_08A28A00:
    ctx.set_gpr(16, ctx.gpr[2] + 0u);
    ctx.set_gpr(4, ctx.gpr[29] + static_cast<std::uint32_t>(16));
    ctx.set_gpr(31, 0x08A28A10u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0085_entry, 85u, 192u, 0x08958D34u>(ctx, &aot_mem) && ctx.pc == 0x08A28A10u) goto L_08A28A10;
    return;
L_08A28A10:
    ctx.set_gpr(6, rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(16)));
    ctx.set_gpr(5, rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(20)));
    ctx.set_gpr(4, rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(24)));
    ctx.set_gpr(2, rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(28)));
    ctx.set_gpr(3, ctx.gpr[6] < ctx.gpr[4] ? 1u : 0u);
    ctx.set_gpr(4, ctx.gpr[6] - ctx.gpr[4]);
    ctx.set_gpr(2, ctx.gpr[5] - ctx.gpr[2]);
    ctx.set_gpr(6, ctx.gpr[2] - ctx.gpr[3]);
    ctx.set_gpr(2, 2246u << 16u);
    ctx.set_gpr(5, rt.memory().aot_load32(ctx.gpr[2] + static_cast<std::uint32_t>(-20976)));
    ctx.set_gpr(2, 2246u << 16u);
    ctx.set_gpr(3, rt.memory().aot_load32(ctx.gpr[2] + static_cast<std::uint32_t>(-20972)));
    ctx.set_gpr(4, ctx.gpr[5] + ctx.gpr[4]);
    ctx.set_gpr(2, ctx.gpr[4] < ctx.gpr[5] ? 1u : 0u);
    ctx.set_gpr(2, ctx.gpr[2] + ctx.gpr[3]);
    ctx.set_gpr(3, ctx.gpr[2] + ctx.gpr[6]);
    ctx.set_gpr(2, 2246u << 16u);
    rt.memory().aot_store32(ctx.gpr[2] + static_cast<std::uint32_t>(-20976), ctx.gpr[4]);
    ctx.set_gpr(2, 2246u << 16u);
    rt.memory().aot_store32(ctx.gpr[2] + static_cast<std::uint32_t>(-20972), ctx.gpr[3]);
    ctx.set_gpr(2, ctx.gpr[16] + 0u);
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_08A28A70;
      }
      goto L_08A28A6C;
    }
L_08A28A6C:
    ctx.set_gpr(2, 0u + 0u);
    goto L_08A28A70;
L_08A28A70:
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
L_08A28A8C:
    ctx.set_gpr(2, rt.memory().aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(8)));
    ctx.set_gpr(2, ctx.gpr[2] + static_cast<std::uint32_t>(-1));
    ctx.set_gpr(3, ctx.gpr[2] << 2u);
    ctx.set_gpr(2, rt.memory().aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(16)));
    ctx.set_gpr(2, ctx.gpr[2] + ctx.gpr[3]);
    jump_target = ctx.gpr[31];
    // nop
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_08A28AA8:
    ctx.set_gpr(3, ctx.gpr[5] << 2u);
    ctx.set_gpr(2, rt.memory().aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(16)));
    ctx.set_gpr(2, ctx.gpr[2] + ctx.gpr[3]);
    ctx.set_gpr(2, rt.memory().aot_load32(ctx.gpr[2] + static_cast<std::uint32_t>(0)));
    jump_target = ctx.gpr[31];
    // nop
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_08A28AC0:
    ctx.set_gpr(2, rt.memory().aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(0)));
    jump_target = ctx.gpr[31];
    // nop
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_08A28ACC:
    ctx.set_gpr(29, ctx.gpr[29] + static_cast<std::uint32_t>(-16));
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(12), ctx.gpr[31]);
    ctx.set_gpr(31, 0x08A28ADCu);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0064_entry, 64u, 444u, 0x08905FF0u>(ctx, &aot_mem) && ctx.pc == 0x08A28ADCu) goto L_08A28ADC;
    return;
L_08A28ADC:
    ctx.set_gpr(4, rt.memory().aot_load32(ctx.gpr[2] + static_cast<std::uint32_t>(64)));
    ctx.set_gpr(5, 0u + static_cast<std::uint32_t>(7));
    ctx.set_gpr(6, 2229u << 16u);
    ctx.set_gpr(6, ctx.gpr[6] + static_cast<std::uint32_t>(21648));
    ctx.set_gpr(7, ctx.gpr[28] + static_cast<std::uint32_t>(-32608));
    ctx.set_gpr(8, rt.memory().aot_load8(ctx.gpr[28] + static_cast<std::uint32_t>(-32608)));
    ctx.set_gpr(9, 0u + static_cast<std::uint32_t>(1));
    ctx.set_gpr(31, 0x08A28B00u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0083_entry, 83u, 813u, 0x089537E4u>(ctx, &aot_mem) && ctx.pc == 0x08A28B00u) goto L_08A28B00;
    return;
L_08A28B00:
    ctx.set_gpr(31, rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(12)));
    ctx.set_gpr(29, ctx.gpr[29] + static_cast<std::uint32_t>(16));
    jump_target = ctx.gpr[31];
    // nop
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_08A28B10:
    jump_target = ctx.gpr[31];
    // nop
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_08A28B18:
    ctx.set_gpr(29, ctx.gpr[29] + static_cast<std::uint32_t>(-16));
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(12), ctx.gpr[31]);
    ctx.set_gpr(4, 2246u << 16u);
    ctx.set_gpr(4, ctx.gpr[4] + static_cast<std::uint32_t>(-22404));
    ctx.set_gpr(5, 0u + 0u);
    ctx.set_gpr(31, 0x08A28B34u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0085_entry, 85u, 61u, 0x089584C4u>(ctx, &aot_mem) && ctx.pc == 0x08A28B34u) goto L_08A28B34;
    return;
L_08A28B34:
    ctx.set_gpr(31, rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(12)));
    ctx.set_gpr(29, ctx.gpr[29] + static_cast<std::uint32_t>(16));
    jump_target = ctx.gpr[31];
    // nop
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_08A28B44:
    ctx.set_gpr(7, rt.memory().aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(20)));
    ctx.set_gpr(6, rt.memory().aot_load32(ctx.gpr[7] + static_cast<std::uint32_t>(8)));
    ctx.set_gpr(2, 0u + 0u);
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_08A28BAC;
      }
      goto L_08A28B58;
    }
L_08A28B58:
    ctx.set_gpr(4, ctx.gpr[2] << 2u);
    ctx.set_gpr(3, rt.memory().aot_load32(ctx.gpr[7] + static_cast<std::uint32_t>(16)));
    ctx.set_gpr(3, ctx.gpr[3] + ctx.gpr[4]);
    ctx.set_gpr(3, rt.memory().aot_load32(ctx.gpr[3] + static_cast<std::uint32_t>(0)));
    ctx.set_gpr(4, rt.memory().aot_load32(ctx.gpr[3] + static_cast<std::uint32_t>(8)));
    ctx.set_gpr(3, 0u + static_cast<std::uint32_t>(-2));
    ctx.set_gpr(8, ctx.gpr[4] & ctx.gpr[3]);
    { const bool branch_taken = ctx.gpr[8] == 0u;
    // nop
      if (branch_taken) {
          goto L_08A28B84;
      }
      goto L_08A28B7C;
    }
L_08A28B7C:
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_08A28B8C;
      }
      goto L_08A28B84;
    }
L_08A28B84:
    ctx.set_gpr(8, 2225u << 16u);
    ctx.set_gpr(8, ctx.gpr[8] + static_cast<std::uint32_t>(8240));
    goto L_08A28B8C;
L_08A28B8C:
    ctx.set_gpr(4, rt.memory().aot_load32(ctx.gpr[5] + static_cast<std::uint32_t>(0)));
    ctx.set_gpr(3, 0u + static_cast<std::uint32_t>(-2));
    ctx.set_gpr(3, ctx.gpr[4] & ctx.gpr[3]);
    { const bool branch_taken = ctx.gpr[8] != ctx.gpr[3];
    // nop
      if (branch_taken) {
          goto L_08A28BA8;
      }
      goto L_08A28BA0;
    }
L_08A28BA0:
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_08A28BBC;
      }
      goto L_08A28BA8;
    }
L_08A28BA8:
    ctx.set_gpr(2, ctx.gpr[2] + static_cast<std::uint32_t>(1));
    goto L_08A28BAC;
L_08A28BAC:
    ctx.set_gpr(3, static_cast<std::int32_t>(ctx.gpr[2]) < static_cast<std::int32_t>(ctx.gpr[6]) ? 1u : 0u);
    { const bool branch_taken = ctx.gpr[3] != 0u;
    // nop
      if (branch_taken) {
          goto L_08A28B58;
      }
      goto L_08A28BB8;
    }
L_08A28BB8:
    ctx.set_gpr(2, 0u + static_cast<std::uint32_t>(-1));
    goto L_08A28BBC;
L_08A28BBC:
    jump_target = ctx.gpr[31];
    // nop
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_08A28BC4:
    ctx.set_gpr(29, ctx.gpr[29] + static_cast<std::uint32_t>(-16));
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(12), ctx.gpr[31]);
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(8), ctx.gpr[17]);
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(4), ctx.gpr[16]);
    ctx.set_gpr(16, ctx.gpr[4] + 0u);
    ctx.set_gpr(3, rt.memory().aot_load32(ctx.gpr[5] + static_cast<std::uint32_t>(16)));
    ctx.set_gpr(4, ctx.gpr[6] << 2u);
    ctx.set_gpr(3, rt.memory().aot_load32(ctx.gpr[3] + static_cast<std::uint32_t>(16)));
    ctx.set_gpr(3, ctx.gpr[3] + ctx.gpr[4]);
    ctx.set_gpr(3, rt.memory().aot_load32(ctx.gpr[3] + static_cast<std::uint32_t>(0)));
    ctx.set_gpr(4, rt.memory().aot_load32(ctx.gpr[3] + static_cast<std::uint32_t>(8)));
    ctx.set_gpr(3, 0u + static_cast<std::uint32_t>(-2));
    ctx.set_gpr(17, ctx.gpr[4] & ctx.gpr[3]);
    { const bool branch_taken = ctx.gpr[17] == 0u;
    // nop
      if (branch_taken) {
          goto L_08A28C08;
      }
      goto L_08A28C00;
    }
L_08A28C00:
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_08A28C10;
      }
      goto L_08A28C08;
    }
L_08A28C08:
    ctx.set_gpr(17, 2225u << 16u);
    ctx.set_gpr(17, ctx.gpr[17] + static_cast<std::uint32_t>(8240));
    goto L_08A28C10;
L_08A28C10:
    { const bool branch_taken = ctx.gpr[17] != 0u;
    // nop
      if (branch_taken) {
          goto L_08A28C24;
      }
      goto L_08A28C18;
    }
L_08A28C18:
    ctx.set_gpr(3, 0u + 0u);
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_08A28C74;
      }
      goto L_08A28C24;
    }
L_08A28C24:
    ctx.set_gpr(2, 2245u << 16u);
    ctx.set_gpr(2, rt.memory().aot_load32(ctx.gpr[2] + static_cast<std::uint32_t>(30776)));
    { const bool branch_taken = ctx.gpr[2] != 0u;
    // nop
      if (branch_taken) {
          goto L_08A28C5C;
      }
      goto L_08A28C34;
    }
L_08A28C34:
    ctx.set_gpr(4, 0u + static_cast<std::uint32_t>(16));
    ctx.set_gpr(31, 0x08A28C40u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0072_entry, 72u, 788u, 0x089277A0u>(ctx, &aot_mem) && ctx.pc == 0x08A28C40u) goto L_08A28C40;
    return;
L_08A28C40:
    { const bool branch_taken = ctx.gpr[2] == 0u;
    // nop
      if (branch_taken) {
          goto L_08A28C54;
      }
      goto L_08A28C48;
    }
L_08A28C48:
    ctx.set_gpr(4, ctx.gpr[2] + 0u);
    ctx.set_gpr(31, 0x08A28C54u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0072_entry, 72u, 762u, 0x089275E8u>(ctx, &aot_mem) && ctx.pc == 0x08A28C54u) goto L_08A28C54;
    return;
L_08A28C54:
    ctx.set_gpr(3, 2245u << 16u);
    rt.memory().aot_store32(ctx.gpr[3] + static_cast<std::uint32_t>(30776), ctx.gpr[2]);
    goto L_08A28C5C;
L_08A28C5C:
    ctx.set_gpr(2, 2245u << 16u);
    ctx.set_gpr(4, rt.memory().aot_load32(ctx.gpr[2] + static_cast<std::uint32_t>(30776)));
    ctx.set_gpr(5, ctx.gpr[17] + 0u);
    ctx.set_gpr(31, 0x08A28C70u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0072_entry, 72u, 784u, 0x08927768u>(ctx, &aot_mem) && ctx.pc == 0x08A28C70u) goto L_08A28C70;
    return;
L_08A28C70:
    ctx.set_gpr(3, ctx.gpr[2] + 0u);
    goto L_08A28C74;
L_08A28C74:
    rt.memory().aot_store32(ctx.gpr[16] + static_cast<std::uint32_t>(0), ctx.gpr[3]);
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
L_08A28C90:
    ctx.set_gpr(29, ctx.gpr[29] + static_cast<std::uint32_t>(-64));
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
    ctx.set_gpr(31, 0x08A28CCCu);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0081_entry, 81u, 41u, 0x0894835Cu>(ctx, &aot_mem) && ctx.pc == 0x08A28CCCu) goto L_08A28CCC;
    return;
L_08A28CCC:
    ctx.set_gpr(4, ctx.gpr[2] + 0u);
    ctx.set_gpr(31, 0x08A28CD8u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0136_entry, 136u, 248u, 0x08A255A8u>(ctx, &aot_mem) && ctx.pc == 0x08A28CD8u) goto L_08A28CD8;
    return;
L_08A28CD8:
    ctx.set_gpr(18, ctx.gpr[2] + 0u);
    ctx.set_gpr(4, ctx.gpr[18] + 0u);
    ctx.set_gpr(5, ctx.gpr[20] + 0u);
    ctx.set_gpr(31, 0x08A28CECu);
    // nop
    goto L_08A29120;
L_08A28CEC:
    ctx.set_gpr(4, ctx.gpr[20] + 0u);
    ctx.set_gpr(25, rt.memory().aot_load32(ctx.gpr[20] + static_cast<std::uint32_t>(0)));
    ctx.set_gpr(25, rt.memory().aot_load32(ctx.gpr[25] + static_cast<std::uint32_t>(96)));
    jump_target = ctx.gpr[25];
    ctx.set_gpr(31, 0x08A28D00u);
    // nop
    ctx.pc = jump_target;
    if (rt.invoke_chained_call(ctx, &aot_mem) && ctx.pc == 0x08A28D00u) goto L_08A28D00;
    return;
L_08A28D00:
    ctx.set_gpr(23, ctx.gpr[2] + 0u);
    ctx.set_gpr(16, 0u + 0u);
    ctx.set_gpr(17, 0u + 0u);
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_08A28DC0;
      }
      goto L_08A28D14;
    }
L_08A28D14:
    ctx.set_gpr(4, ctx.gpr[29] + static_cast<std::uint32_t>(60));
    ctx.set_gpr(5, ctx.gpr[20] + 0u);
    ctx.set_gpr(6, ctx.gpr[17] + 0u);
    ctx.set_gpr(25, rt.memory().aot_load32(ctx.gpr[20] + static_cast<std::uint32_t>(0)));
    ctx.set_gpr(25, rt.memory().aot_load32(ctx.gpr[25] + static_cast<std::uint32_t>(104)));
    jump_target = ctx.gpr[25];
    ctx.set_gpr(31, 0x08A28D30u);
    // nop
    ctx.pc = jump_target;
    if (rt.invoke_chained_call(ctx, &aot_mem) && ctx.pc == 0x08A28D30u) goto L_08A28D30;
    return;
L_08A28D30:
    ctx.set_gpr(4, ctx.gpr[21] + 0u);
    ctx.set_gpr(5, ctx.gpr[29] + static_cast<std::uint32_t>(60));
    ctx.set_gpr(31, 0x08A28D40u);
    // nop
    goto L_08A28B44;
L_08A28D40:
    ctx.set_gpr(22, ctx.gpr[2] + 0u);
    ctx.set_gpr(4, 0u + 0u);
    ctx.set_gpr(3, rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(60)));
    { const bool branch_taken = ctx.gpr[3] == 0u;
    // nop
      if (branch_taken) {
          goto L_08A28D70;
      }
      goto L_08A28D54;
    }
L_08A28D54:
    ctx.set_gpr(2, ctx.gpr[3] & 1u);
    ctx.set_gpr(2, ctx.gpr[2] ^ 1u);
    ctx.set_gpr(2, ctx.gpr[2] < static_cast<std::uint32_t>(1) ? 1u : 0u);
    ctx.set_gpr(2, ctx.gpr[2] ^ 1u);
    { const bool branch_taken = ctx.gpr[2] == 0u;
    // nop
      if (branch_taken) {
          goto L_08A28D70;
      }
      goto L_08A28D6C;
    }
L_08A28D6C:
    ctx.set_gpr(4, 0u + static_cast<std::uint32_t>(1));
    goto L_08A28D70;
L_08A28D70:
    { const bool branch_taken = ctx.gpr[4] == 0u;
    // nop
      if (branch_taken) {
          goto L_08A28D9C;
      }
      goto L_08A28D78;
    }
L_08A28D78:
    ctx.set_gpr(5, ctx.gpr[3] + static_cast<std::uint32_t>(-8));
    ctx.set_gpr(2, rt.memory().aot_load32(ctx.gpr[3] + static_cast<std::uint32_t>(-4)));
    ctx.set_gpr(2, ctx.gpr[2] + static_cast<std::uint32_t>(-1));
    rt.memory().aot_store32(ctx.gpr[3] + static_cast<std::uint32_t>(-4), ctx.gpr[2]);
    { const bool branch_taken = ctx.gpr[2] != 0u;
    // nop
      if (branch_taken) {
          goto L_08A28D9C;
      }
      goto L_08A28D90;
    }
L_08A28D90:
    ctx.set_gpr(4, rt.memory().aot_load32(ctx.gpr[5] + static_cast<std::uint32_t>(0)));
    ctx.set_gpr(31, 0x08A28D9Cu);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0085_entry, 85u, 887u, 0x0895BD2Cu>(ctx, &aot_mem) && ctx.pc == 0x08A28D9Cu) goto L_08A28D9C;
    return;
L_08A28D9C:
    ctx.set_gpr(2, 0u + static_cast<std::uint32_t>(-1));
    { const bool branch_taken = ctx.gpr[22] == ctx.gpr[2];
    // nop
      if (branch_taken) {
          goto L_08A28DAC;
      }
      goto L_08A28DA8;
    }
L_08A28DA8:
    ctx.set_gpr(16, ctx.gpr[16] + static_cast<std::uint32_t>(1));
    goto L_08A28DAC;
L_08A28DAC:
    ctx.set_gpr(3, ctx.gpr[17] << 2u);
    ctx.set_gpr(2, rt.memory().aot_load32(ctx.gpr[18] + static_cast<std::uint32_t>(12)));
    ctx.set_gpr(2, ctx.gpr[2] + ctx.gpr[3]);
    rt.memory().aot_store32(ctx.gpr[2] + static_cast<std::uint32_t>(0), ctx.gpr[22]);
    ctx.set_gpr(17, ctx.gpr[17] + static_cast<std::uint32_t>(1));
    goto L_08A28DC0;
L_08A28DC0:
    ctx.set_gpr(2, static_cast<std::int32_t>(ctx.gpr[17]) < static_cast<std::int32_t>(ctx.gpr[23]) ? 1u : 0u);
    { const bool branch_taken = ctx.gpr[2] != 0u;
    // nop
      if (branch_taken) {
          goto L_08A28D14;
      }
      goto L_08A28DCC;
    }
L_08A28DCC:
    { const bool branch_taken = ctx.gpr[16] == 0u;
    // nop
      if (branch_taken) {
          goto L_08A28DF4;
      }
      goto L_08A28DD4;
    }
L_08A28DD4:
    rt.memory().aot_store32(ctx.gpr[18] + static_cast<std::uint32_t>(16), ctx.gpr[16]);
    ctx.set_gpr(4, rt.memory().aot_load32(ctx.gpr[21] + static_cast<std::uint32_t>(16)));
    ctx.set_gpr(5, ctx.gpr[18] + 0u);
    ctx.set_gpr(31, 0x08A28DE8u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0081_entry, 81u, 299u, 0x089494E0u>(ctx, &aot_mem) && ctx.pc == 0x08A28DE8u) goto L_08A28DE8;
    return;
L_08A28DE8:
    rt.memory().aot_store32(ctx.gpr[19] + static_cast<std::uint32_t>(0), ctx.gpr[18]);
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_08A28DF8;
      }
      goto L_08A28DF4;
    }
L_08A28DF4:
    rt.memory().aot_store32(ctx.gpr[19] + static_cast<std::uint32_t>(0), 0u);
    goto L_08A28DF8;
L_08A28DF8:
    ctx.set_gpr(2, rt.memory().aot_load32(ctx.gpr[18] + static_cast<std::uint32_t>(4)));
    ctx.set_gpr(2, ctx.gpr[2] + static_cast<std::uint32_t>(-1));
    rt.memory().aot_store32(ctx.gpr[18] + static_cast<std::uint32_t>(4), ctx.gpr[2]);
    ctx.set_gpr(2, ctx.gpr[2] << 10u);
    ctx.set_gpr(2, ctx.gpr[2] >> 10u);
    { const bool branch_taken = ctx.gpr[2] != 0u;
    // nop
      if (branch_taken) {
          goto L_08A28E20;
      }
      goto L_08A28E14;
    }
L_08A28E14:
    ctx.set_gpr(4, ctx.gpr[18] + 0u);
    ctx.set_gpr(31, 0x08A28E20u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0080_entry, 80u, 556u, 0x089467C8u>(ctx, &aot_mem) && ctx.pc == 0x08A28E20u) goto L_08A28E20;
    return;
L_08A28E20:
    ctx.set_gpr(2, ctx.gpr[16] + 0u);
    ctx.set_gpr(31, rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(44)));
    ctx.set_gpr(23, rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(40)));
    ctx.set_gpr(22, rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(36)));
    ctx.set_gpr(21, rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(32)));
    ctx.set_gpr(20, rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(28)));
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
L_08A28E54:
    ctx.set_gpr(29, ctx.gpr[29] + static_cast<std::uint32_t>(-32));
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(12), ctx.gpr[31]);
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(8), ctx.gpr[18]);
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(4), ctx.gpr[17]);
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(0), ctx.gpr[16]);
    ctx.set_gpr(18, ctx.gpr[4] + 0u);
    ctx.set_gpr(17, ctx.gpr[5] + 0u);
    ctx.set_gpr(16, ctx.gpr[6] + 0u);
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(28), 0u);
    ctx.set_gpr(6, ctx.gpr[29] + static_cast<std::uint32_t>(28));
    ctx.set_gpr(31, 0x08A28E84u);
    // nop
    goto L_08A28ED4;
L_08A28E84:
    ctx.set_gpr(2, rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(28)));
    { const bool branch_taken = ctx.gpr[2] == 0u;
    // nop
      if (branch_taken) {
          goto L_08A28EA4;
      }
      goto L_08A28E90;
    }
L_08A28E90:
    rt.memory().aot_store32(ctx.gpr[16] + static_cast<std::uint32_t>(0), ctx.gpr[2]);
    ctx.set_gpr(2, rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(28)));
    ctx.set_gpr(2, rt.memory().aot_load32(ctx.gpr[2] + static_cast<std::uint32_t>(16)));
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_08A28EB8;
      }
      goto L_08A28EA4;
    }
L_08A28EA4:
    ctx.set_gpr(4, ctx.gpr[18] + 0u);
    ctx.set_gpr(5, ctx.gpr[17] + 0u);
    ctx.set_gpr(6, ctx.gpr[16] + 0u);
    ctx.set_gpr(31, 0x08A28EB8u);
    // nop
    goto L_08A28C90;
L_08A28EB8:
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
L_08A28ED4:
    ctx.set_gpr(8, rt.memory().aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(16)));
    ctx.set_gpr(7, rt.memory().aot_load32(ctx.gpr[8] + static_cast<std::uint32_t>(8)));
    ctx.set_gpr(2, 0u + 0u);
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_08A28F24;
      }
      goto L_08A28EE8;
    }
L_08A28EE8:
    ctx.set_gpr(4, ctx.gpr[2] << 2u);
    ctx.set_gpr(3, rt.memory().aot_load32(ctx.gpr[8] + static_cast<std::uint32_t>(16)));
    ctx.set_gpr(3, ctx.gpr[3] + ctx.gpr[4]);
    ctx.set_gpr(4, rt.memory().aot_load32(ctx.gpr[3] + static_cast<std::uint32_t>(0)));
    ctx.set_gpr(3, rt.memory().aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(24)));
    ctx.set_gpr(3, 0u < ctx.gpr[3] ? 1u : 0u);
    { const bool branch_taken = ctx.gpr[3] != 0u;
    // nop
      if (branch_taken) {
          goto L_08A28F20;
      }
      goto L_08A28F08;
    }
L_08A28F08:
    ctx.set_gpr(3, rt.memory().aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(8)));
    { const bool branch_taken = ctx.gpr[3] != ctx.gpr[5];
    // nop
      if (branch_taken) {
          goto L_08A28F20;
      }
      goto L_08A28F14;
    }
L_08A28F14:
    rt.memory().aot_store32(ctx.gpr[6] + static_cast<std::uint32_t>(0), ctx.gpr[4]);
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_08A28F38;
      }
      goto L_08A28F20;
    }
L_08A28F20:
    ctx.set_gpr(2, ctx.gpr[2] + static_cast<std::uint32_t>(1));
    goto L_08A28F24;
L_08A28F24:
    ctx.set_gpr(3, static_cast<std::int32_t>(ctx.gpr[2]) < static_cast<std::int32_t>(ctx.gpr[7]) ? 1u : 0u);
    { const bool branch_taken = ctx.gpr[3] != 0u;
    // nop
      if (branch_taken) {
          goto L_08A28EE8;
      }
      goto L_08A28F30;
    }
L_08A28F30:
    rt.memory().aot_store32(ctx.gpr[6] + static_cast<std::uint32_t>(0), 0u);
    ctx.set_gpr(2, 0u + static_cast<std::uint32_t>(-1));
    goto L_08A28F38;
L_08A28F38:
    jump_target = ctx.gpr[31];
    // nop
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_08A28F40:
    ctx.set_gpr(8, rt.memory().aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(16)));
    ctx.set_gpr(7, rt.memory().aot_load32(ctx.gpr[8] + static_cast<std::uint32_t>(8)));
    ctx.set_gpr(2, 0u + 0u);
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_08A28F90;
      }
      goto L_08A28F54;
    }
L_08A28F54:
    ctx.set_gpr(4, ctx.gpr[2] << 2u);
    ctx.set_gpr(3, rt.memory().aot_load32(ctx.gpr[8] + static_cast<std::uint32_t>(16)));
    ctx.set_gpr(3, ctx.gpr[3] + ctx.gpr[4]);
    ctx.set_gpr(4, rt.memory().aot_load32(ctx.gpr[3] + static_cast<std::uint32_t>(0)));
    ctx.set_gpr(3, rt.memory().aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(24)));
    ctx.set_gpr(3, 0u < ctx.gpr[3] ? 1u : 0u);
    { const bool branch_taken = ctx.gpr[3] == 0u;
    // nop
      if (branch_taken) {
          goto L_08A28F8C;
      }
      goto L_08A28F74;
    }
L_08A28F74:
    ctx.set_gpr(3, rt.memory().aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(8)));
    { const bool branch_taken = ctx.gpr[3] != ctx.gpr[5];
    // nop
      if (branch_taken) {
          goto L_08A28F8C;
      }
      goto L_08A28F80;
    }
L_08A28F80:
    rt.memory().aot_store32(ctx.gpr[6] + static_cast<std::uint32_t>(0), ctx.gpr[4]);
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_08A28FA4;
      }
      goto L_08A28F8C;
    }
L_08A28F8C:
    ctx.set_gpr(2, ctx.gpr[2] + static_cast<std::uint32_t>(1));
    goto L_08A28F90;
L_08A28F90:
    ctx.set_gpr(3, static_cast<std::int32_t>(ctx.gpr[2]) < static_cast<std::int32_t>(ctx.gpr[7]) ? 1u : 0u);
    { const bool branch_taken = ctx.gpr[3] != 0u;
    // nop
      if (branch_taken) {
          goto L_08A28F54;
      }
      goto L_08A28F9C;
    }
L_08A28F9C:
    rt.memory().aot_store32(ctx.gpr[6] + static_cast<std::uint32_t>(0), 0u);
    ctx.set_gpr(2, 0u + static_cast<std::uint32_t>(-1));
    goto L_08A28FA4;
L_08A28FA4:
    jump_target = ctx.gpr[31];
    // nop
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_08A28FAC:
    ctx.set_gpr(29, ctx.gpr[29] + static_cast<std::uint32_t>(-16));
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(12), ctx.gpr[31]);
    ctx.set_gpr(2, rt.memory().aot_load8(ctx.gpr[4] + static_cast<std::uint32_t>(72)));
    ctx.set_gpr(2, ctx.gpr[2] & 247u);
    rt.memory().aot_store8(ctx.gpr[4] + static_cast<std::uint32_t>(72), static_cast<std::uint8_t>(ctx.gpr[2]));
    ctx.set_gpr(4, ctx.gpr[4] + static_cast<std::uint32_t>(16));
    ctx.set_gpr(5, 0u + 0u);
    ctx.set_gpr(31, 0x08A28FD0u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0085_entry, 85u, 61u, 0x089584C4u>(ctx, &aot_mem) && ctx.pc == 0x08A28FD0u) goto L_08A28FD0;
    return;
L_08A28FD0:
    ctx.set_gpr(31, rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(12)));
    ctx.set_gpr(29, ctx.gpr[29] + static_cast<std::uint32_t>(16));
    jump_target = ctx.gpr[31];
    // nop
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_08A28FE0:
    ctx.set_gpr(2, rt.memory().aot_load8(ctx.gpr[4] + static_cast<std::uint32_t>(72)));
    ctx.set_gpr(2, ctx.gpr[2] & 8u);
    { const bool branch_taken = ctx.gpr[2] != 0u;
    // nop
      if (branch_taken) {
          goto L_08A28FFC;
      }
      goto L_08A28FF0;
    }
L_08A28FF0:
    ctx.set_gpr(2, 0u + 0u);
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_08A29014;
      }
      goto L_08A28FFC;
    }
L_08A28FFC:
    ctx.set_gpr(4, rt.memory().aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(16)));
    ctx.set_gpr(2, ctx.gpr[5] << 1u);
    ctx.set_gpr(2, ctx.gpr[2] + ctx.gpr[5]);
    ctx.set_gpr(3, ctx.gpr[2] << 2u);
    ctx.set_gpr(2, rt.memory().aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(16)));
    ctx.set_gpr(2, ctx.gpr[2] + ctx.gpr[3]);
    goto L_08A29014;
L_08A29014:
    jump_target = ctx.gpr[31];
    // nop
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_08A2901C:
    ctx.set_gpr(29, ctx.gpr[29] + static_cast<std::uint32_t>(-16));
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(12), ctx.gpr[31]);
    ctx.set_gpr(2, rt.memory().aot_load8(ctx.gpr[4] + static_cast<std::uint32_t>(72)));
    ctx.set_gpr(2, ctx.gpr[2] & 254u);
    rt.memory().aot_store8(ctx.gpr[4] + static_cast<std::uint32_t>(72), static_cast<std::uint8_t>(ctx.gpr[2]));
    ctx.set_gpr(4, ctx.gpr[4] + static_cast<std::uint32_t>(8));
    ctx.set_gpr(5, 0u + 0u);
    ctx.set_gpr(31, 0x08A29040u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0085_entry, 85u, 61u, 0x089584C4u>(ctx, &aot_mem) && ctx.pc == 0x08A29040u) goto L_08A29040;
    return;
L_08A29040:
    ctx.set_gpr(31, rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(12)));
    ctx.set_gpr(29, ctx.gpr[29] + static_cast<std::uint32_t>(16));
    jump_target = ctx.gpr[31];
    // nop
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_08A29050:
    ctx.set_gpr(2, rt.memory().aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(88)));
    ctx.set_gpr(3, rt.memory().aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(92)));
    jump_target = ctx.gpr[31];
    // nop
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_08A29060:
    ctx.set_gpr(2, rt.memory().aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(56)));
    ctx.set_gpr(3, ctx.gpr[5] << 3u);
    ctx.set_gpr(2, rt.memory().aot_load32(ctx.gpr[2] + static_cast<std::uint32_t>(16)));
    ctx.set_gpr(3, ctx.gpr[2] + ctx.gpr[3]);
    ctx.set_gpr(2, rt.memory().aot_load32(ctx.gpr[3] + static_cast<std::uint32_t>(0)));
    ctx.set_gpr(3, rt.memory().aot_load32(ctx.gpr[3] + static_cast<std::uint32_t>(4)));
    jump_target = ctx.gpr[31];
    // nop
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_08A29080:
    ctx.set_gpr(2, rt.memory().aot_load8(ctx.gpr[4] + static_cast<std::uint32_t>(72)));
    ctx.set_gpr(2, ctx.gpr[2] & 1u);
    { const bool branch_taken = ctx.gpr[2] != 0u;
    // nop
      if (branch_taken) {
          goto L_08A2909C;
      }
      goto L_08A29090;
    }
L_08A29090:
    ctx.set_gpr(2, 0u + 0u);
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_08A290B4;
      }
      goto L_08A2909C;
    }
L_08A2909C:
    ctx.set_gpr(4, rt.memory().aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(8)));
    ctx.set_gpr(2, ctx.gpr[5] << 1u);
    ctx.set_gpr(2, ctx.gpr[2] + ctx.gpr[5]);
    ctx.set_gpr(3, ctx.gpr[2] << 2u);
    ctx.set_gpr(2, rt.memory().aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(16)));
    ctx.set_gpr(2, ctx.gpr[2] + ctx.gpr[3]);
    goto L_08A290B4;
L_08A290B4:
    jump_target = ctx.gpr[31];
    // nop
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_08A290BC:
    ctx.set_gpr(2, rt.memory().aot_load8(ctx.gpr[4] + static_cast<std::uint32_t>(72)));
    ctx.set_gpr(2, ctx.gpr[2] & 1u);
    { const bool branch_taken = ctx.gpr[2] != 0u;
    // nop
      if (branch_taken) {
          goto L_08A290D8;
      }
      goto L_08A290CC;
    }
L_08A290CC:
    ctx.set_gpr(2, 0u + 0u);
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_08A290E0;
      }
      goto L_08A290D8;
    }
L_08A290D8:
    ctx.set_gpr(2, rt.memory().aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(8)));
    ctx.set_gpr(2, rt.memory().aot_load32(ctx.gpr[2] + static_cast<std::uint32_t>(8)));
    goto L_08A290E0;
L_08A290E0:
    jump_target = ctx.gpr[31];
    // nop
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_08A290E8:
    ctx.set_gpr(2, rt.memory().aot_load8(ctx.gpr[4] + static_cast<std::uint32_t>(72)));
    ctx.set_gpr(2, ctx.gpr[2] & 8u);
    { const bool branch_taken = ctx.gpr[2] != 0u;
    // nop
      if (branch_taken) {
          goto L_08A29104;
      }
      goto L_08A290F8;
    }
L_08A290F8:
    ctx.set_gpr(2, 0u + 0u);
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_08A2910C;
      }
      goto L_08A29104;
    }
L_08A29104:
    ctx.set_gpr(2, rt.memory().aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(16)));
    ctx.set_gpr(2, rt.memory().aot_load32(ctx.gpr[2] + static_cast<std::uint32_t>(8)));
    goto L_08A2910C;
L_08A2910C:
    jump_target = ctx.gpr[31];
    // nop
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_08A29114:
    ctx.set_gpr(2, rt.memory().aot_load8(ctx.gpr[4] + static_cast<std::uint32_t>(72)));
    jump_target = ctx.gpr[31];
    // nop
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_08A29120:
    ctx.set_gpr(29, ctx.gpr[29] + static_cast<std::uint32_t>(-32));
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(28), ctx.gpr[31]);
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(24), ctx.gpr[19]);
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(20), ctx.gpr[18]);
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(16), ctx.gpr[17]);
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(12), ctx.gpr[16]);
    ctx.set_gpr(18, ctx.gpr[4] + 0u);
    ctx.set_gpr(17, ctx.gpr[5] + 0u);
    ctx.set_gpr(31, 0x08A29148u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0081_entry, 81u, 41u, 0x0894835Cu>(ctx, &aot_mem) && ctx.pc == 0x08A29148u) goto L_08A29148;
    return;
L_08A29148:
    ctx.set_gpr(3, 2246u << 16u);
    ctx.set_gpr(4, rt.memory().aot_load32(ctx.gpr[3] + static_cast<std::uint32_t>(-22664)));
    ctx.set_gpr(3, rt.memory().aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(8)));
    ctx.set_gpr(3, ctx.gpr[18] + ctx.gpr[3]);
    ctx.set_gpr(5, rt.memory().aot_load32(ctx.gpr[3] + static_cast<std::uint32_t>(0)));
    { const bool branch_taken = ctx.gpr[5] == 0u;
    // nop
      if (branch_taken) {
          goto L_08A29194;
      }
      goto L_08A29164;
    }
L_08A29164:
    ctx.set_gpr(3, rt.memory().aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(56)));
    ctx.set_gpr(16, rt.memory().aot_load16(ctx.gpr[3] + static_cast<std::uint32_t>(20)));
    ctx.set_gpr(4, ctx.gpr[2] + 0u);
    ctx.set_gpr(25, rt.memory().aot_load32(ctx.gpr[2] + static_cast<std::uint32_t>(0)));
    ctx.set_gpr(25, rt.memory().aot_load32(ctx.gpr[25] + static_cast<std::uint32_t>(372)));
    jump_target = ctx.gpr[25];
    ctx.set_gpr(31, 0x08A29180u);
    // nop
    ctx.pc = jump_target;
    if (rt.invoke_chained_call(ctx, &aot_mem) && ctx.pc == 0x08A29180u) goto L_08A29180;
    return;
L_08A29180:
    ctx.set_gpr(3, ctx.gpr[16] & 65535u);
    { const std::uint32_t dividend = ctx.gpr[2]; const std::uint32_t divisor = ctx.gpr[3]; if (divisor == 0u) { ctx.lo = 0xFFFFFFFFu; ctx.hi = dividend; } else { ctx.lo = dividend / divisor; ctx.hi = dividend % divisor; } }
    ctx.set_gpr(19, ctx.lo);
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_08A29198;
      }
      goto L_08A29194;
    }
L_08A29194:
    ctx.set_gpr(19, 0u + 0u);
    goto L_08A29198;
L_08A29198:
    ctx.set_gpr(16, ctx.gpr[19] + 0u);
    { const bool branch_taken = ctx.gpr[17] == 0u;
    // nop
      if (branch_taken) {
          goto L_08A291EC;
      }
      goto L_08A291A4;
    }
L_08A291A4:
    ctx.set_gpr(4, ctx.gpr[17] + 0u);
    ctx.set_gpr(25, rt.memory().aot_load32(ctx.gpr[17] + static_cast<std::uint32_t>(0)));
    ctx.set_gpr(25, rt.memory().aot_load32(ctx.gpr[25] + static_cast<std::uint32_t>(96)));
    jump_target = ctx.gpr[25];
    ctx.set_gpr(31, 0x08A291B8u);
    // nop
    ctx.pc = jump_target;
    if (rt.invoke_chained_call(ctx, &aot_mem) && ctx.pc == 0x08A291B8u) goto L_08A291B8;
    return;
L_08A291B8:
    ctx.set_gpr(16, ctx.gpr[2] + 0u);
    { const bool branch_taken = ctx.gpr[16] == ctx.gpr[19];
    // nop
      if (branch_taken) {
          goto L_08A291EC;
      }
      goto L_08A291C4;
    }
L_08A291C4:
    ctx.set_gpr(4, ctx.gpr[18] + 0u);
    ctx.set_gpr(31, 0x08A291D0u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0081_entry, 81u, 41u, 0x0894835Cu>(ctx, &aot_mem) && ctx.pc == 0x08A291D0u) goto L_08A291D0;
    return;
L_08A291D0:
    ctx.set_gpr(3, 2246u << 16u);
    ctx.set_gpr(4, rt.memory().aot_load32(ctx.gpr[3] + static_cast<std::uint32_t>(-22664)));
    ctx.set_gpr(5, ctx.gpr[18] + 0u);
    ctx.set_gpr(6, ctx.gpr[16] + 0u);
    ctx.set_gpr(7, ctx.gpr[2] + 0u);
    ctx.set_gpr(31, 0x08A291ECu);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0079_entry, 79u, 213u, 0x08940F60u>(ctx, &aot_mem) && ctx.pc == 0x08A291ECu) goto L_08A291EC;
    return;
L_08A291EC:
    ctx.set_gpr(2, rt.memory().aot_load32(ctx.gpr[18] + static_cast<std::uint32_t>(12)));
    { const bool branch_taken = ctx.gpr[2] == 0u;
    // nop
      if (branch_taken) {
          goto L_08A29210;
      }
      goto L_08A291F8;
    }
L_08A291F8:
    ctx.set_gpr(2, 2246u << 16u);
    ctx.set_gpr(4, rt.memory().aot_load32(ctx.gpr[2] + static_cast<std::uint32_t>(-22664)));
    ctx.set_gpr(5, ctx.gpr[18] + 0u);
    ctx.set_gpr(6, ctx.gpr[16] + 0u);
    ctx.set_gpr(31, 0x08A29210u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0079_entry, 79u, 233u, 0x089410F4u>(ctx, &aot_mem) && ctx.pc == 0x08A29210u) goto L_08A29210;
    return;
L_08A29210:
    ctx.set_gpr(4, ctx.gpr[18] + static_cast<std::uint32_t>(8));
    ctx.set_gpr(5, ctx.gpr[17] + 0u);
    ctx.set_gpr(31, 0x08A29220u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0085_entry, 85u, 61u, 0x089584C4u>(ctx, &aot_mem) && ctx.pc == 0x08A29220u) goto L_08A29220;
    return;
L_08A29220:
    ctx.set_gpr(2, 0u + static_cast<std::uint32_t>(1));
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
L_08A29244:
    ctx.set_gpr(2, rt.memory().aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(16)));
    ctx.set_gpr(3, ctx.gpr[5] << 2u);
    ctx.set_gpr(2, rt.memory().aot_load32(ctx.gpr[2] + static_cast<std::uint32_t>(16)));
    ctx.set_gpr(2, ctx.gpr[2] + ctx.gpr[3]);
    ctx.set_gpr(2, rt.memory().aot_load32(ctx.gpr[2] + static_cast<std::uint32_t>(0)));
    ctx.set_gpr(3, rt.memory().aot_load32(ctx.gpr[2] + static_cast<std::uint32_t>(8)));
    ctx.set_gpr(2, 0u + static_cast<std::uint32_t>(-2));
    ctx.set_gpr(2, ctx.gpr[3] & ctx.gpr[2]);
    { const bool branch_taken = ctx.gpr[2] == 0u;
    // nop
      if (branch_taken) {
          goto L_08A29274;
      }
      goto L_08A2926C;
    }
L_08A2926C:
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_08A2927C;
      }
      goto L_08A29274;
    }
L_08A29274:
    ctx.set_gpr(2, 2225u << 16u);
    ctx.set_gpr(2, ctx.gpr[2] + static_cast<std::uint32_t>(8240));
    goto L_08A2927C;
L_08A2927C:
    jump_target = ctx.gpr[31];
    // nop
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_08A29284:
    ctx.set_gpr(8, rt.memory().aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(24)));
    { const bool branch_taken = ctx.gpr[8] != 0u;
    // nop
      if (branch_taken) {
          goto L_08A2929C;
      }
      goto L_08A29290;
    }
L_08A29290:
    ctx.set_gpr(2, 0u + static_cast<std::uint32_t>(3));
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_08A29320;
      }
      goto L_08A2929C;
    }
L_08A2929C:
    ctx.set_gpr(2, 0u + 0u);
    ctx.set_gpr(7, ctx.gpr[5] << 1u);
    ctx.set_gpr(3, ctx.gpr[7] >> 5u);
    ctx.set_gpr(4, ctx.gpr[3] << 2u);
    ctx.set_gpr(3, rt.memory().aot_load32(ctx.gpr[8] + static_cast<std::uint32_t>(16)));
    ctx.set_gpr(6, ctx.gpr[3] + ctx.gpr[4]);
    ctx.set_gpr(4, ctx.gpr[7] & 31u);
    ctx.set_gpr(3, 0u + static_cast<std::uint32_t>(1));
    ctx.set_gpr(4, ctx.gpr[3] << (ctx.gpr[4] & 31u));
    ctx.set_gpr(3, rt.memory().aot_load32(ctx.gpr[6] + static_cast<std::uint32_t>(0)));
    ctx.set_gpr(3, ctx.gpr[4] & ctx.gpr[3]);
    { const bool branch_taken = ctx.gpr[3] == 0u;
    // nop
      if (branch_taken) {
          goto L_08A292D4;
      }
      goto L_08A292D0;
    }
L_08A292D0:
    ctx.set_gpr(2, ctx.gpr[2] | 1u);
    goto L_08A292D4;
L_08A292D4:
    ctx.set_gpr(3, ctx.gpr[5] << 1u);
    ctx.set_gpr(6, ctx.gpr[3] + static_cast<std::uint32_t>(1));
    ctx.set_gpr(3, ctx.gpr[6] >> 5u);
    ctx.set_gpr(4, ctx.gpr[3] << 2u);
    ctx.set_gpr(3, rt.memory().aot_load32(ctx.gpr[8] + static_cast<std::uint32_t>(16)));
    ctx.set_gpr(5, ctx.gpr[3] + ctx.gpr[4]);
    ctx.set_gpr(4, ctx.gpr[6] & 31u);
    ctx.set_gpr(3, 0u + static_cast<std::uint32_t>(1));
    ctx.set_gpr(4, ctx.gpr[3] << (ctx.gpr[4] & 31u));
    ctx.set_gpr(3, rt.memory().aot_load32(ctx.gpr[5] + static_cast<std::uint32_t>(0)));
    ctx.set_gpr(3, ctx.gpr[4] & ctx.gpr[3]);
    { const bool branch_taken = ctx.gpr[3] == 0u;
    // nop
      if (branch_taken) {
          goto L_08A2930C;
      }
      goto L_08A29308;
    }
L_08A29308:
    ctx.set_gpr(2, ctx.gpr[2] | 2u);
    goto L_08A2930C;
L_08A2930C:
    ctx.set_gpr(2, ctx.gpr[2] + static_cast<std::uint32_t>(-1));
    ctx.set_gpr(3, 0u + static_cast<std::uint32_t>(-1));
    { const bool branch_taken = ctx.gpr[2] != ctx.gpr[3];
    // nop
      if (branch_taken) {
          goto L_08A29320;
      }
      goto L_08A2931C;
    }
L_08A2931C:
    ctx.set_gpr(2, 0u + static_cast<std::uint32_t>(3));
    goto L_08A29320;
L_08A29320:
    jump_target = ctx.gpr[31];
    // nop
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_08A29328:
    ctx.set_gpr(29, ctx.gpr[29] + static_cast<std::uint32_t>(-32));
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(12), ctx.gpr[31]);
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(8), ctx.gpr[16]);
    ctx.set_gpr(31, 0x08A2933Cu);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0078_entry, 78u, 216u, 0x0893CDDCu>(ctx, &aot_mem) && ctx.pc == 0x08A2933Cu) goto L_08A2933C;
    return;
L_08A2933C:
    ctx.set_gpr(4, rt.memory().aot_load32(ctx.gpr[2] + static_cast<std::uint32_t>(0)));
    ctx.set_gpr(31, 0x08A29348u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0078_entry, 78u, 199u, 0x0893CC68u>(ctx, &aot_mem) && ctx.pc == 0x08A29348u) goto L_08A29348;
    return;
L_08A29348:
    ctx.set_gpr(4, ctx.gpr[2] + 0u);
    ctx.set_gpr(31, 0x08A29354u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0136_entry, 136u, 155u, 0x08A24D98u>(ctx, &aot_mem) && ctx.pc == 0x08A29354u) goto L_08A29354;
    return;
L_08A29354:
    ctx.set_gpr(4, 2246u << 16u);
    ctx.set_gpr(4, ctx.gpr[4] + static_cast<std::uint32_t>(-22348));
    ctx.set_gpr(5, ctx.gpr[2] + 0u);
    ctx.set_gpr(31, 0x08A29368u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0085_entry, 85u, 67u, 0x0895853Cu>(ctx, &aot_mem) && ctx.pc == 0x08A29368u) goto L_08A29368;
    return;
L_08A29368:
    ctx.set_gpr(2, 2246u << 16u);
    ctx.set_gpr(2, rt.memory().aot_load32(ctx.gpr[2] + static_cast<std::uint32_t>(-22348)));
    rt.memory().aot_store8(ctx.gpr[2] + static_cast<std::uint32_t>(28), static_cast<std::uint8_t>(0u));
    ctx.set_gpr(31, 0x08A2937Cu);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0078_entry, 78u, 216u, 0x0893CDDCu>(ctx, &aot_mem) && ctx.pc == 0x08A2937Cu) goto L_08A2937C;
    return;
L_08A2937C:
    ctx.set_gpr(4, rt.memory().aot_load32(ctx.gpr[2] + static_cast<std::uint32_t>(0)));
    ctx.set_gpr(31, 0x08A29388u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0078_entry, 78u, 199u, 0x0893CC68u>(ctx, &aot_mem) && ctx.pc == 0x08A29388u) goto L_08A29388;
    return;
L_08A29388:
    ctx.set_gpr(4, ctx.gpr[2] + 0u);
    ctx.set_gpr(31, 0x08A29394u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0135_entry, 135u, 667u, 0x08A2386Cu>(ctx, &aot_mem) && ctx.pc == 0x08A29394u) goto L_08A29394;
    return;
L_08A29394:
    ctx.set_gpr(4, 2246u << 16u);
    ctx.set_gpr(4, ctx.gpr[4] + static_cast<std::uint32_t>(-22332));
    ctx.set_gpr(5, ctx.gpr[2] + 0u);
    ctx.set_gpr(31, 0x08A293A8u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0085_entry, 85u, 67u, 0x0895853Cu>(ctx, &aot_mem) && ctx.pc == 0x08A293A8u) goto L_08A293A8;
    return;
L_08A293A8:
    ctx.set_gpr(2, 2246u << 16u);
    ctx.set_gpr(3, rt.memory().aot_load32(ctx.gpr[2] + static_cast<std::uint32_t>(-22332)));
    ctx.set_gpr(2, 0u + static_cast<std::uint32_t>(1));
    rt.memory().aot_store8(ctx.gpr[3] + static_cast<std::uint32_t>(28), static_cast<std::uint8_t>(ctx.gpr[2]));
    ctx.set_gpr(31, 0x08A293C0u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0078_entry, 78u, 216u, 0x0893CDDCu>(ctx, &aot_mem) && ctx.pc == 0x08A293C0u) goto L_08A293C0;
    return;
L_08A293C0:
    ctx.set_gpr(4, rt.memory().aot_load32(ctx.gpr[2] + static_cast<std::uint32_t>(0)));
    ctx.set_gpr(31, 0x08A293CCu);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0078_entry, 78u, 199u, 0x0893CC68u>(ctx, &aot_mem) && ctx.pc == 0x08A293CCu) goto L_08A293CC;
    return;
L_08A293CC:
    ctx.set_gpr(4, ctx.gpr[2] + 0u);
    ctx.set_gpr(31, 0x08A293D8u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0136_entry, 136u, 463u, 0x08A268ACu>(ctx, &aot_mem) && ctx.pc == 0x08A293D8u) goto L_08A293D8;
    return;
L_08A293D8:
    ctx.set_gpr(4, 2246u << 16u);
    ctx.set_gpr(4, ctx.gpr[4] + static_cast<std::uint32_t>(-22316));
    ctx.set_gpr(5, ctx.gpr[2] + 0u);
    ctx.set_gpr(31, 0x08A293ECu);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0085_entry, 85u, 67u, 0x0895853Cu>(ctx, &aot_mem) && ctx.pc == 0x08A293ECu) goto L_08A293EC;
    return;
L_08A293EC:
    ctx.set_gpr(31, 0x08A293F4u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0064_entry, 64u, 444u, 0x08905FF0u>(ctx, &aot_mem) && ctx.pc == 0x08A293F4u) goto L_08A293F4;
    return;
L_08A293F4:
    ctx.set_gpr(16, rt.memory().aot_load32(ctx.gpr[2] + static_cast<std::uint32_t>(64)));
    ctx.set_gpr(4, ctx.gpr[16] + 0u);
    ctx.set_gpr(5, 0u + static_cast<std::uint32_t>(7));
    ctx.set_gpr(6, 2229u << 16u);
    ctx.set_gpr(6, ctx.gpr[6] + static_cast<std::uint32_t>(21672));
    ctx.set_gpr(7, ctx.gpr[28] + static_cast<std::uint32_t>(-32155));
    ctx.set_gpr(8, 0u + 0u);
    ctx.set_gpr(9, 0u + 0u);
    ctx.set_gpr(31, 0x08A2941Cu);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0083_entry, 83u, 813u, 0x089537E4u>(ctx, &aot_mem) && ctx.pc == 0x08A2941Cu) goto L_08A2941C;
    return;
L_08A2941C:
    rt.memory().aot_store8(ctx.gpr[29] + static_cast<std::uint32_t>(31), static_cast<std::uint8_t>(0u));
    ctx.set_gpr(4, ctx.gpr[16] + 0u);
    ctx.set_gpr(5, 0u + static_cast<std::uint32_t>(7));
    ctx.set_gpr(6, 2229u << 16u);
    ctx.set_gpr(6, ctx.gpr[6] + static_cast<std::uint32_t>(21692));
    ctx.set_gpr(7, ctx.gpr[29] + static_cast<std::uint32_t>(31));
    ctx.set_gpr(8, 0u + 0u);
    ctx.set_gpr(9, 0u + 0u);
    ctx.set_gpr(31, 0x08A29444u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0083_entry, 83u, 813u, 0x089537E4u>(ctx, &aot_mem) && ctx.pc == 0x08A29444u) goto L_08A29444;
    return;
L_08A29444:
    ctx.set_gpr(3, rt.memory().aot_load8(ctx.gpr[29] + static_cast<std::uint32_t>(31)));
    { const bool branch_taken = ctx.gpr[3] == 0u;
    // nop
      if (branch_taken) {
          goto L_08A2949C;
      }
      goto L_08A29450;
    }
L_08A29450:
    ctx.set_gpr(31, 0x08A29458u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0078_entry, 78u, 216u, 0x0893CDDCu>(ctx, &aot_mem) && ctx.pc == 0x08A29458u) goto L_08A29458;
    return;
L_08A29458:
    ctx.set_gpr(4, rt.memory().aot_load32(ctx.gpr[2] + static_cast<std::uint32_t>(0)));
    ctx.set_gpr(31, 0x08A29464u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0078_entry, 78u, 199u, 0x0893CC68u>(ctx, &aot_mem) && ctx.pc == 0x08A29464u) goto L_08A29464;
    return;
L_08A29464:
    ctx.set_gpr(4, ctx.gpr[2] + 0u);
    ctx.set_gpr(31, 0x08A29470u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0057_entry, 57u, 386u, 0x088E9CF8u>(ctx, &aot_mem) && ctx.pc == 0x08A29470u) goto L_08A29470;
    return;
L_08A29470:
    ctx.set_gpr(4, 2246u << 16u);
    ctx.set_gpr(4, ctx.gpr[4] + static_cast<std::uint32_t>(-22300));
    ctx.set_gpr(5, ctx.gpr[2] + 0u);
    ctx.set_gpr(31, 0x08A29484u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0085_entry, 85u, 67u, 0x0895853Cu>(ctx, &aot_mem) && ctx.pc == 0x08A29484u) goto L_08A29484;
    return;
L_08A29484:
    ctx.set_gpr(2, 2246u << 16u);
    ctx.set_gpr(4, rt.memory().aot_load32(ctx.gpr[2] + static_cast<std::uint32_t>(-22300)));
    ctx.set_gpr(25, rt.memory().aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(0)));
    ctx.set_gpr(25, rt.memory().aot_load32(ctx.gpr[25] + static_cast<std::uint32_t>(92)));
    jump_target = ctx.gpr[25];
    ctx.set_gpr(31, 0x08A2949Cu);
    // nop
    ctx.pc = jump_target;
    if (rt.invoke_chained_call(ctx, &aot_mem) && ctx.pc == 0x08A2949Cu) goto L_08A2949C;
    return;
L_08A2949C:
    ctx.set_gpr(31, rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(12)));
    ctx.set_gpr(16, rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(8)));
    ctx.set_gpr(29, ctx.gpr[29] + static_cast<std::uint32_t>(32));
    jump_target = ctx.gpr[31];
    // nop
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_08A294B0:
    ctx.set_gpr(29, ctx.gpr[29] + static_cast<std::uint32_t>(-16));
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(12), ctx.gpr[31]);
    ctx.set_gpr(2, 2246u << 16u);
    ctx.set_gpr(4, rt.memory().aot_load32(ctx.gpr[2] + static_cast<std::uint32_t>(-22300)));
    { const bool branch_taken = ctx.gpr[4] == 0u;
    // nop
      if (branch_taken) {
          goto L_08A294DC;
      }
      goto L_08A294C8;
    }
L_08A294C8:
    ctx.set_gpr(5, 0u + static_cast<std::uint32_t>(1));
    ctx.set_gpr(25, rt.memory().aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(0)));
    ctx.set_gpr(25, rt.memory().aot_load32(ctx.gpr[25] + static_cast<std::uint32_t>(132)));
    jump_target = ctx.gpr[25];
    ctx.set_gpr(31, 0x08A294DCu);
    // nop
    ctx.pc = jump_target;
    if (rt.invoke_chained_call(ctx, &aot_mem) && ctx.pc == 0x08A294DCu) goto L_08A294DC;
    return;
L_08A294DC:
    ctx.set_gpr(4, 2246u << 16u);
    ctx.set_gpr(4, ctx.gpr[4] + static_cast<std::uint32_t>(-22348));
    ctx.set_gpr(5, 0u + 0u);
    ctx.set_gpr(31, 0x08A294F0u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0085_entry, 85u, 61u, 0x089584C4u>(ctx, &aot_mem) && ctx.pc == 0x08A294F0u) goto L_08A294F0;
    return;
L_08A294F0:
    ctx.set_gpr(4, 2246u << 16u);
    ctx.set_gpr(4, ctx.gpr[4] + static_cast<std::uint32_t>(-22332));
    ctx.set_gpr(5, 0u + 0u);
    ctx.set_gpr(31, 0x08A29504u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0085_entry, 85u, 61u, 0x089584C4u>(ctx, &aot_mem) && ctx.pc == 0x08A29504u) goto L_08A29504;
    return;
L_08A29504:
    ctx.set_gpr(2, 2246u << 16u);
    ctx.set_gpr(4, rt.memory().aot_load32(ctx.gpr[2] + static_cast<std::uint32_t>(-22300)));
    { const bool branch_taken = ctx.gpr[4] == 0u;
    // nop
      if (branch_taken) {
          goto L_08A29524;
      }
      goto L_08A29514;
    }
L_08A29514:
    ctx.set_gpr(25, rt.memory().aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(0)));
    ctx.set_gpr(25, rt.memory().aot_load32(ctx.gpr[25] + static_cast<std::uint32_t>(124)));
    jump_target = ctx.gpr[25];
    ctx.set_gpr(31, 0x08A29524u);
    // nop
    ctx.pc = jump_target;
    if (rt.invoke_chained_call(ctx, &aot_mem) && ctx.pc == 0x08A29524u) goto L_08A29524;
    return;
L_08A29524:
    ctx.set_gpr(4, 2246u << 16u);
    ctx.set_gpr(4, ctx.gpr[4] + static_cast<std::uint32_t>(-22316));
    ctx.set_gpr(5, 0u + 0u);
    ctx.set_gpr(31, 0x08A29538u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0085_entry, 85u, 61u, 0x089584C4u>(ctx, &aot_mem) && ctx.pc == 0x08A29538u) goto L_08A29538;
    return;
L_08A29538:
    ctx.set_gpr(4, 2246u << 16u);
    ctx.set_gpr(4, ctx.gpr[4] + static_cast<std::uint32_t>(-22300));
    ctx.set_gpr(5, 0u + 0u);
    ctx.set_gpr(31, 0x08A2954Cu);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0085_entry, 85u, 61u, 0x089584C4u>(ctx, &aot_mem) && ctx.pc == 0x08A2954Cu) goto L_08A2954C;
    return;
L_08A2954C:
    ctx.set_gpr(31, rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(12)));
    ctx.set_gpr(29, ctx.gpr[29] + static_cast<std::uint32_t>(16));
    jump_target = ctx.gpr[31];
    // nop
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_08A2955C:
    ctx.set_gpr(29, ctx.gpr[29] + static_cast<std::uint32_t>(-32));
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(28), ctx.gpr[31]);
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(24), ctx.gpr[20]);
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(20), ctx.gpr[19]);
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(16), ctx.gpr[18]);
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(12), ctx.gpr[17]);
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(8), ctx.gpr[16]);
    ctx.set_gpr(18, ctx.gpr[4] + 0u);
    ctx.set_gpr(17, ctx.gpr[5] + 0u);
    ctx.set_gpr(16, ctx.gpr[6] + 0u);
    ctx.set_gpr(4, rt.memory().aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(12)));
    ctx.set_gpr(25, rt.memory().aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(0)));
    ctx.set_gpr(25, rt.memory().aot_load32(ctx.gpr[25] + static_cast<std::uint32_t>(96)));
    jump_target = ctx.gpr[25];
    ctx.set_gpr(31, 0x08A29598u);
    // nop
    ctx.pc = jump_target;
    if (rt.invoke_chained_call(ctx, &aot_mem) && ctx.pc == 0x08A29598u) goto L_08A29598;
    return;
L_08A29598:
    ctx.set_gpr(3, rt.memory().aot_load32(ctx.gpr[17] + static_cast<std::uint32_t>(8)));
    ctx.set_gpr(7, rt.memory().aot_load32(ctx.gpr[3] + static_cast<std::uint32_t>(24)));
    ctx.set_gpr(14, 0u + 0u);
    ctx.set_gpr(13, 0u + 0u);
    ctx.set_gpr(12, 0u + 0u);
    ctx.set_gpr(25, 0u + 0u);
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_08A296BC;
      }
      goto L_08A295B8;
    }
L_08A295B8:
    ctx.set_gpr(3, rt.memory().aot_load32(ctx.gpr[18] + static_cast<std::uint32_t>(48)));
    ctx.set_gpr(5, ctx.gpr[25] << 2u);
    ctx.set_gpr(3, rt.memory().aot_load32(ctx.gpr[3] + static_cast<std::uint32_t>(16)));
    ctx.set_gpr(3, ctx.gpr[3] + ctx.gpr[5]);
    ctx.set_gpr(6, rt.memory().aot_load32(ctx.gpr[3] + static_cast<std::uint32_t>(0)));
    ctx.set_gpr(4, rt.memory().aot_load32(ctx.gpr[6] + static_cast<std::uint32_t>(8)));
    { const bool branch_taken = static_cast<std::int32_t>(ctx.gpr[4]) <= 0;
    // nop
      if (branch_taken) {
          goto L_08A296B8;
      }
      goto L_08A295D8;
    }
L_08A295D8:
    ctx.set_gpr(3, rt.memory().aot_load32(ctx.gpr[18] + static_cast<std::uint32_t>(52)));
    ctx.set_gpr(3, rt.memory().aot_load32(ctx.gpr[3] + static_cast<std::uint32_t>(16)));
    ctx.set_gpr(3, ctx.gpr[3] + ctx.gpr[5]);
    ctx.set_gpr(5, rt.memory().aot_load32(ctx.gpr[3] + static_cast<std::uint32_t>(0)));
    ctx.set_gpr(15, 0u + 0u);
    ctx.set_gpr(24, ctx.gpr[4] + static_cast<std::uint32_t>(-1));
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_08A296AC;
      }
      goto L_08A295F8;
    }
L_08A295F8:
    ctx.set_gpr(4, ctx.gpr[24] << 2u);
    ctx.set_gpr(3, rt.memory().aot_load32(ctx.gpr[6] + static_cast<std::uint32_t>(16)));
    ctx.set_gpr(3, ctx.gpr[3] + ctx.gpr[4]);
    ctx.set_gpr(3, rt.memory().aot_load32(ctx.gpr[3] + static_cast<std::uint32_t>(0)));
    ctx.set_gpr(9, rt.memory().aot_load32(ctx.gpr[3] + static_cast<std::uint32_t>(12)));
    { const bool branch_taken = ctx.gpr[9] != ctx.gpr[17];
    // nop
      if (branch_taken) {
          goto L_08A29620;
      }
      goto L_08A29614;
    }
L_08A29614:
    ctx.set_gpr(15, 0u + static_cast<std::uint32_t>(1));
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_08A296A8;
      }
      goto L_08A29620;
    }
L_08A29620:
    { const bool branch_taken = ctx.gpr[15] == 0u;
    // nop
      if (branch_taken) {
          goto L_08A296A8;
      }
      goto L_08A29628;
    }
L_08A29628:
    ctx.set_gpr(8, rt.memory().aot_load32(ctx.gpr[3] + static_cast<std::uint32_t>(48)));
    { const bool branch_taken = ctx.gpr[12] == 0u;
    // nop
      if (branch_taken) {
          goto L_08A29640;
      }
      goto L_08A29634;
    }
L_08A29634:
    ctx.set_gpr(1, static_cast<std::int32_t>(ctx.gpr[13]) < static_cast<std::int32_t>(ctx.gpr[8]) ? 1u : 0u);
    { const bool branch_taken = ctx.gpr[1] == 0u;
    // nop
      if (branch_taken) {
          goto L_08A296B8;
      }
      goto L_08A29640;
    }
L_08A29640:
    ctx.set_gpr(11, 0u + 0u);
    ctx.set_gpr(4, rt.memory().aot_load32(ctx.gpr[9] + static_cast<std::uint32_t>(8)));
    ctx.set_gpr(3, rt.memory().aot_load32(ctx.gpr[7] + static_cast<std::uint32_t>(8)));
    ctx.set_gpr(10, 0u + 0u);
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_08A29694;
      }
      goto L_08A29658;
    }
L_08A29658:
    ctx.set_gpr(20, ctx.gpr[10] << 2u);
    ctx.set_gpr(19, rt.memory().aot_load32(ctx.gpr[7] + static_cast<std::uint32_t>(16)));
    ctx.set_gpr(19, ctx.gpr[19] + ctx.gpr[20]);
    ctx.set_gpr(20, rt.memory().aot_load32(ctx.gpr[19] + static_cast<std::uint32_t>(0)));
    ctx.set_gpr(19, rt.memory().aot_load32(ctx.gpr[20] + static_cast<std::uint32_t>(8)));
    { const bool branch_taken = ctx.gpr[4] != ctx.gpr[19];
    // nop
      if (branch_taken) {
          goto L_08A29690;
      }
      goto L_08A29674;
    }
L_08A29674:
    ctx.set_gpr(11, 0u + static_cast<std::uint32_t>(1));
    ctx.set_gpr(12, ctx.gpr[11] + 0u);
    ctx.set_gpr(13, ctx.gpr[8] + 0u);
    ctx.set_gpr(14, ctx.gpr[9] + 0u);
    rt.memory().aot_store32(ctx.gpr[16] + static_cast<std::uint32_t>(0), ctx.gpr[20]);
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_08A296A0;
      }
      goto L_08A29690;
    }
L_08A29690:
    ctx.set_gpr(10, ctx.gpr[10] + static_cast<std::uint32_t>(1));
    goto L_08A29694;
L_08A29694:
    ctx.set_gpr(19, static_cast<std::int32_t>(ctx.gpr[10]) < static_cast<std::int32_t>(ctx.gpr[3]) ? 1u : 0u);
    { const bool branch_taken = ctx.gpr[19] != 0u;
    // nop
      if (branch_taken) {
          goto L_08A29658;
      }
      goto L_08A296A0;
    }
L_08A296A0:
    { const bool branch_taken = ctx.gpr[11] != 0u;
    // nop
      if (branch_taken) {
          goto L_08A296B8;
      }
      goto L_08A296A8;
    }
L_08A296A8:
    ctx.set_gpr(24, ctx.gpr[24] + static_cast<std::uint32_t>(-1));
    goto L_08A296AC;
L_08A296AC:
    ctx.set_gpr(1, static_cast<std::int32_t>(ctx.gpr[24]) < static_cast<std::int32_t>(ctx.gpr[5]) ? 1u : 0u);
    { const bool branch_taken = ctx.gpr[1] == 0u;
    // nop
      if (branch_taken) {
          goto L_08A295F8;
      }
      goto L_08A296B8;
    }
L_08A296B8:
    ctx.set_gpr(25, ctx.gpr[25] + static_cast<std::uint32_t>(1));
    goto L_08A296BC;
L_08A296BC:
    ctx.set_gpr(3, static_cast<std::int32_t>(ctx.gpr[25]) < static_cast<std::int32_t>(ctx.gpr[2]) ? 1u : 0u);
    { const bool branch_taken = ctx.gpr[3] != 0u;
    // nop
      if (branch_taken) {
          goto L_08A295B8;
      }
      goto L_08A296C8;
    }
L_08A296C8:
    ctx.set_gpr(2, ctx.gpr[14] + 0u);
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
L_08A296F0:
    ctx.set_gpr(29, ctx.gpr[29] + static_cast<std::uint32_t>(-16));
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(12), ctx.gpr[31]);
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(8), ctx.gpr[17]);
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(4), ctx.gpr[16]);
    ctx.set_gpr(17, ctx.gpr[4] + 0u);
    ctx.set_gpr(16, ctx.gpr[5] + 0u);
    ctx.set_gpr(4, rt.memory().aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(12)));
    ctx.set_gpr(25, rt.memory().aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(0)));
    ctx.set_gpr(25, rt.memory().aot_load32(ctx.gpr[25] + static_cast<std::uint32_t>(96)));
    jump_target = ctx.gpr[25];
    ctx.set_gpr(31, 0x08A2971Cu);
    // nop
    ctx.pc = jump_target;
    if (rt.invoke_chained_call(ctx, &aot_mem) && ctx.pc == 0x08A2971Cu) goto L_08A2971C;
    return;
L_08A2971C:
    ctx.set_gpr(8, 0u + 0u);
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_08A297A0;
      }
      goto L_08A29728;
    }
L_08A29728:
    ctx.set_gpr(3, rt.memory().aot_load32(ctx.gpr[17] + static_cast<std::uint32_t>(48)));
    ctx.set_gpr(4, ctx.gpr[8] << 2u);
    ctx.set_gpr(3, rt.memory().aot_load32(ctx.gpr[3] + static_cast<std::uint32_t>(16)));
    ctx.set_gpr(3, ctx.gpr[3] + ctx.gpr[4]);
    ctx.set_gpr(5, rt.memory().aot_load32(ctx.gpr[3] + static_cast<std::uint32_t>(0)));
    ctx.set_gpr(3, rt.memory().aot_load32(ctx.gpr[5] + static_cast<std::uint32_t>(8)));
    { const bool branch_taken = static_cast<std::int32_t>(ctx.gpr[3]) <= 0;
    // nop
      if (branch_taken) {
          goto L_08A2979C;
      }
      goto L_08A29748;
    }
L_08A29748:
    ctx.set_gpr(6, 0u + 0u);
    ctx.set_gpr(7, ctx.gpr[3] + static_cast<std::uint32_t>(-1));
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_08A29794;
      }
      goto L_08A29758;
    }
L_08A29758:
    ctx.set_gpr(4, ctx.gpr[7] << 2u);
    ctx.set_gpr(3, rt.memory().aot_load32(ctx.gpr[5] + static_cast<std::uint32_t>(16)));
    ctx.set_gpr(3, ctx.gpr[3] + ctx.gpr[4]);
    ctx.set_gpr(3, rt.memory().aot_load32(ctx.gpr[3] + static_cast<std::uint32_t>(0)));
    ctx.set_gpr(4, rt.memory().aot_load32(ctx.gpr[3] + static_cast<std::uint32_t>(12)));
    { const bool branch_taken = ctx.gpr[4] != ctx.gpr[16];
    // nop
      if (branch_taken) {
          goto L_08A29780;
      }
      goto L_08A29774;
    }
L_08A29774:
    ctx.set_gpr(6, 0u + static_cast<std::uint32_t>(1));
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_08A29790;
      }
      goto L_08A29780;
    }
L_08A29780:
    { const bool branch_taken = ctx.gpr[6] == 0u;
    // nop
      if (branch_taken) {
          goto L_08A29790;
      }
      goto L_08A29788;
    }
L_08A29788:
    ctx.set_gpr(3, 0u + static_cast<std::uint32_t>(3));
    rt.memory().aot_store32(ctx.gpr[4] + static_cast<std::uint32_t>(20), ctx.gpr[3]);
    goto L_08A29790;
L_08A29790:
    ctx.set_gpr(7, ctx.gpr[7] + static_cast<std::uint32_t>(-1));
    goto L_08A29794;
L_08A29794:
    { const bool branch_taken = static_cast<std::int32_t>(ctx.gpr[7]) >= 0;
    // nop
      if (branch_taken) {
          goto L_08A29758;
      }
      goto L_08A2979C;
    }
L_08A2979C:
    ctx.set_gpr(8, ctx.gpr[8] + static_cast<std::uint32_t>(1));
    goto L_08A297A0;
L_08A297A0:
    ctx.set_gpr(3, static_cast<std::int32_t>(ctx.gpr[8]) < static_cast<std::int32_t>(ctx.gpr[2]) ? 1u : 0u);
    { const bool branch_taken = ctx.gpr[3] != 0u;
    // nop
      if (branch_taken) {
          goto L_08A29728;
      }
      goto L_08A297AC;
    }
L_08A297AC:
    rt.memory().aot_store32(ctx.gpr[16] + static_cast<std::uint32_t>(12), 0u);
    ctx.set_gpr(4, ctx.gpr[16] + static_cast<std::uint32_t>(24));
    ctx.set_gpr(5, 0u + 0u);
    ctx.set_gpr(31, 0x08A297C0u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0085_entry, 85u, 61u, 0x089584C4u>(ctx, &aot_mem) && ctx.pc == 0x08A297C0u) goto L_08A297C0;
    return;
L_08A297C0:
    ctx.set_gpr(4, ctx.gpr[17] + 0u);
    ctx.set_gpr(31, 0x08A297CCu);
    // nop
    goto L_08A2B858;
L_08A297CC:
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
L_08A297E4:
    ctx.set_gpr(29, ctx.gpr[29] + static_cast<std::uint32_t>(-144));
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
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(20), std::bit_cast<std::uint32_t>(ctx.fpr[21]));
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(16), std::bit_cast<std::uint32_t>(ctx.fpr[20]));
    ctx.set_gpr(21, ctx.gpr[4] + 0u);
    ctx.set_gpr(20, ctx.gpr[6] + 0u);
    ctx.set_gpr(19, ctx.gpr[7] + 0u);
    ctx.set_gpr(4, ctx.gpr[29] + static_cast<std::uint32_t>(128));
    ctx.set_gpr(31, 0x08A29830u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0085_entry, 85u, 192u, 0x08958D34u>(ctx, &aot_mem) && ctx.pc == 0x08A29830u) goto L_08A29830;
    return;
L_08A29830:
    ctx.set_gpr(22, rt.memory().aot_load32(ctx.gpr[21] + static_cast<std::uint32_t>(56)));
    ctx.set_gpr(2, rt.memory().aot_load32(ctx.gpr[22] + static_cast<std::uint32_t>(8)));
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(100), ctx.gpr[2]);
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(140), 0u);
    { const bool branch_taken = ctx.gpr[2] != 0u;
    // nop
      if (branch_taken) {
          goto L_08A29854;
      }
      goto L_08A29848;
    }
L_08A29848:
    ctx.set_gpr(2, 0u + 0u);
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_08A2A5D0;
      }
      goto L_08A29854;
    }
L_08A29854:
    ctx.set_gpr(18, 0u + 0u);
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_08A298A0;
      }
      goto L_08A29860;
    }
L_08A29860:
    ctx.set_gpr(3, ctx.gpr[18] << 2u);
    ctx.set_gpr(2, rt.memory().aot_load32(ctx.gpr[22] + static_cast<std::uint32_t>(16)));
    ctx.set_gpr(2, ctx.gpr[2] + ctx.gpr[3]);
    ctx.set_gpr(3, rt.memory().aot_load32(ctx.gpr[2] + static_cast<std::uint32_t>(0)));
    ctx.set_gpr(2, rt.memory().aot_load32(ctx.gpr[3] + static_cast<std::uint32_t>(20)));
    { const bool branch_taken = ctx.gpr[2] == 0u;
    // nop
      if (branch_taken) {
          goto L_08A29888;
      }
      goto L_08A2987C;
    }
L_08A2987C:
    ctx.set_gpr(2, rt.memory().aot_load8(ctx.gpr[3] + static_cast<std::uint32_t>(28)));
    { const bool branch_taken = ctx.gpr[2] == 0u;
    // nop
      if (branch_taken) {
          goto L_08A2989C;
      }
      goto L_08A29888;
    }
L_08A29888:
    ctx.set_gpr(4, ctx.gpr[3] + 0u);
    ctx.set_gpr(6, ctx.gpr[20] + 0u);
    ctx.set_gpr(7, ctx.gpr[19] + 0u);
    ctx.set_gpr(31, 0x08A2989Cu);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0138_entry, 138u, 292u, 0x08A2D21Cu>(ctx, &aot_mem) && ctx.pc == 0x08A2989Cu) goto L_08A2989C;
    return;
L_08A2989C:
    ctx.set_gpr(18, ctx.gpr[18] + static_cast<std::uint32_t>(1));
    goto L_08A298A0;
L_08A298A0:
    ctx.set_gpr(2, rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(100)));
    ctx.set_gpr(2, static_cast<std::int32_t>(ctx.gpr[18]) < static_cast<std::int32_t>(ctx.gpr[2]) ? 1u : 0u);
    { const bool branch_taken = ctx.gpr[2] != 0u;
    // nop
      if (branch_taken) {
          goto L_08A29860;
      }
      goto L_08A298B0;
    }
L_08A298B0:
    ctx.set_gpr(18, 0u + 0u);
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_08A2A280;
      }
      goto L_08A298BC;
    }
L_08A298BC:
    ctx.set_gpr(3, ctx.gpr[18] << 2u);
    ctx.set_gpr(2, rt.memory().aot_load32(ctx.gpr[22] + static_cast<std::uint32_t>(16)));
    ctx.set_gpr(2, ctx.gpr[2] + ctx.gpr[3]);
    ctx.set_gpr(16, rt.memory().aot_load32(ctx.gpr[2] + static_cast<std::uint32_t>(0)));
    ctx.set_gpr(2, rt.memory().aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(20)));
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(96), ctx.gpr[2]);
    ctx.set_gpr(2, rt.memory().aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(12)));
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(92), ctx.gpr[2]);
    ctx.set_gpr(30, rt.memory().aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(16)));
    ctx.set_gpr(2, rt.memory().aot_load8(ctx.gpr[16] + static_cast<std::uint32_t>(28)));
    { const bool branch_taken = ctx.gpr[2] == 0u;
    // nop
      if (branch_taken) {
          goto L_08A29EF0;
      }
      goto L_08A298EC;
    }
L_08A298EC:
    ctx.set_gpr(3, rt.memory().aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(72)));
    ctx.set_gpr(2, rt.memory().aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(76)));
    { const bool branch_taken = ctx.gpr[2] != 0u;
    // nop
      if (branch_taken) {
          goto L_08A29904;
      }
      goto L_08A298FC;
    }
L_08A298FC:
    { const bool branch_taken = ctx.gpr[3] == 0u;
    // nop
      if (branch_taken) {
          goto L_08A29A48;
      }
      goto L_08A29904;
    }
L_08A29904:
    ctx.set_gpr(17, rt.memory().aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(96)));
    ctx.set_gpr(23, rt.memory().aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(100)));
    ctx.set_gpr(3, ctx.gpr[20] >> 18u);
    ctx.set_gpr(2, ctx.gpr[19] << 14u);
    ctx.set_gpr(2, ctx.gpr[2] | ctx.gpr[3]);
    { const bool branch_taken = static_cast<std::int32_t>(ctx.gpr[2]) < 0;
    // nop
      if (branch_taken) {
          goto L_08A29930;
      }
      goto L_08A29920;
    }
L_08A29920:
    ctx.fpr[0] = std::bit_cast<float>(ctx.gpr[2]);
    ctx.fpr[1] = static_cast<float>(static_cast<std::int32_t>(ctx.fpr_bits(0)));
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_08A29948;
      }
      goto L_08A29930;
    }
L_08A29930:
    ctx.set_gpr(3, ctx.gpr[2] >> 1u);
    ctx.set_gpr(2, ctx.gpr[2] & 1u);
    ctx.set_gpr(3, ctx.gpr[3] | ctx.gpr[2]);
    ctx.fpr[0] = std::bit_cast<float>(ctx.gpr[3]);
    ctx.fpr[1] = static_cast<float>(static_cast<std::int32_t>(ctx.fpr_bits(0)));
    ctx.fpr[1] = ctx.fpr[1] + ctx.fpr[1];
    goto L_08A29948;
L_08A29948:
    ctx.fpr[0] = std::bit_cast<float>(rt.memory().aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(56)));
    { const float fs = ctx.fpr[1]; const float ft = ctx.fpr[0]; if ((std::isinf(fs) && ft == 0.0f) || (std::isinf(ft) && fs == 0.0f)) ctx.set_fpr_bits(12, 0x7FC00000u); else ctx.fpr[12] = fs * ft; }
    ctx.set_gpr(31, 0x08A29958u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0006_entry, 6u, 183u, 0x0881CEECu>(ctx, &aot_mem) && ctx.pc == 0x08A29958u) goto L_08A29958;
    return;
L_08A29958:
    ctx.set_gpr(4, ctx.gpr[3] << 18u);
    ctx.set_gpr(3, ctx.gpr[2] << 18u);
    ctx.set_gpr(2, ctx.gpr[2] >> 14u);
    ctx.set_gpr(2, ctx.gpr[4] | ctx.gpr[2]);
    ctx.set_gpr(4, ctx.gpr[17] < ctx.gpr[3] ? 1u : 0u);
    ctx.set_gpr(3, ctx.gpr[17] - ctx.gpr[3]);
    ctx.set_gpr(2, ctx.gpr[23] - ctx.gpr[2]);
    ctx.set_gpr(2, ctx.gpr[2] - ctx.gpr[4]);
    rt.memory().aot_store32(ctx.gpr[16] + static_cast<std::uint32_t>(64), ctx.gpr[3]);
    rt.memory().aot_store32(ctx.gpr[16] + static_cast<std::uint32_t>(68), ctx.gpr[2]);
    ctx.set_gpr(4, ctx.gpr[16] + 0u);
    ctx.set_gpr(6, ctx.gpr[20] + 0u);
    ctx.set_gpr(7, ctx.gpr[19] + 0u);
    ctx.set_gpr(31, 0x08A29994u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0138_entry, 138u, 292u, 0x08A2D21Cu>(ctx, &aot_mem) && ctx.pc == 0x08A29994u) goto L_08A29994;
    return;
L_08A29994:
    rt.memory().aot_store32(ctx.gpr[16] + static_cast<std::uint32_t>(72), ctx.gpr[20]);
    rt.memory().aot_store32(ctx.gpr[16] + static_cast<std::uint32_t>(76), ctx.gpr[19]);
    rt.memory().aot_store32(ctx.gpr[16] + static_cast<std::uint32_t>(20), 0u);
    ctx.set_gpr(3, 0u + static_cast<std::uint32_t>(2));
    ctx.set_gpr(2, rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(92)));
    { const bool branch_taken = ctx.gpr[2] != ctx.gpr[3];
    // nop
      if (branch_taken) {
          goto L_08A29EF0;
      }
      goto L_08A299B0;
    }
L_08A299B0:
    ctx.set_gpr(4, ctx.gpr[21] + 0u);
    ctx.set_gpr(5, ctx.gpr[16] + 0u);
    ctx.set_gpr(6, ctx.gpr[29] + static_cast<std::uint32_t>(140));
    ctx.set_gpr(31, 0x08A299C4u);
    // nop
    goto L_08A2955C;
L_08A299C4:
    ctx.set_gpr(17, ctx.gpr[2] + 0u);
    { const bool branch_taken = ctx.gpr[17] != 0u;
    // nop
      if (branch_taken) {
          goto L_08A29A28;
      }
      goto L_08A299D0;
    }
L_08A299D0:
    ctx.set_gpr(2, 0u + static_cast<std::uint32_t>(5));
    { const bool branch_taken = ctx.gpr[30] != ctx.gpr[2];
    // nop
      if (branch_taken) {
          goto L_08A29A18;
      }
      goto L_08A299DC;
    }
L_08A299DC:
    ctx.set_gpr(8, 0u + 0u);
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_08A29A04;
      }
      goto L_08A299E8;
    }
L_08A299E8:
    ctx.set_gpr(3, ctx.gpr[8] << 2u);
    ctx.set_gpr(2, rt.memory().aot_load32(ctx.gpr[22] + static_cast<std::uint32_t>(16)));
    ctx.set_gpr(2, ctx.gpr[2] + ctx.gpr[3]);
    ctx.set_gpr(3, rt.memory().aot_load32(ctx.gpr[2] + static_cast<std::uint32_t>(0)));
    ctx.set_gpr(2, 0u + static_cast<std::uint32_t>(1));
    rt.memory().aot_store32(ctx.gpr[3] + static_cast<std::uint32_t>(20), ctx.gpr[2]);
    ctx.set_gpr(8, ctx.gpr[8] + static_cast<std::uint32_t>(1));
    goto L_08A29A04;
L_08A29A04:
    ctx.set_gpr(2, static_cast<std::int32_t>(ctx.gpr[8]) < static_cast<std::int32_t>(ctx.gpr[18]) ? 1u : 0u);
    { const bool branch_taken = ctx.gpr[2] != 0u;
    // nop
      if (branch_taken) {
          goto L_08A299E8;
      }
      goto L_08A29A10;
    }
L_08A29A10:
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_08A29EF0;
      }
      goto L_08A29A18;
    }
L_08A29A18:
    ctx.set_gpr(2, 0u + static_cast<std::uint32_t>(1));
    rt.memory().aot_store32(ctx.gpr[16] + static_cast<std::uint32_t>(12), ctx.gpr[2]);
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_08A29EF0;
      }
      goto L_08A29A28;
    }
L_08A29A28:
    ctx.set_gpr(4, ctx.gpr[16] + static_cast<std::uint32_t>(24));
    ctx.set_gpr(5, ctx.gpr[17] + 0u);
    ctx.set_gpr(31, 0x08A29A38u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0085_entry, 85u, 61u, 0x089584C4u>(ctx, &aot_mem) && ctx.pc == 0x08A29A38u) goto L_08A29A38;
    return;
L_08A29A38:
    ctx.set_gpr(2, 0u + static_cast<std::uint32_t>(1));
    rt.memory().aot_store32(ctx.gpr[17] + static_cast<std::uint32_t>(20), ctx.gpr[2]);
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_08A29EF0;
      }
      goto L_08A29A48;
    }
L_08A29A48:
    ctx.set_gpr(4, ctx.gpr[21] + 0u);
    ctx.set_gpr(5, ctx.gpr[16] + 0u);
    ctx.set_gpr(6, ctx.gpr[29] + static_cast<std::uint32_t>(140));
    ctx.set_gpr(31, 0x08A29A5Cu);
    // nop
    goto L_08A2955C;
L_08A29A5C:
    ctx.set_gpr(23, ctx.gpr[2] + 0u);
    { const bool branch_taken = ctx.gpr[23] != 0u;
    // nop
      if (branch_taken) {
          goto L_08A29B50;
      }
      goto L_08A29A68;
    }
L_08A29A68:
    rt.memory().aot_store32(ctx.gpr[16] + static_cast<std::uint32_t>(96), 0u);
    rt.memory().aot_store32(ctx.gpr[16] + static_cast<std::uint32_t>(100), 0u);
    rt.memory().aot_store32(ctx.gpr[16] + static_cast<std::uint32_t>(80), 0u);
    ctx.set_gpr(2, 16256u << 16u);
    rt.memory().aot_store32(ctx.gpr[16] + static_cast<std::uint32_t>(84), ctx.gpr[2]);
    ctx.set_gpr(2, rt.memory().aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(8)));
    ctx.set_gpr(4, rt.memory().aot_load32(ctx.gpr[2] + static_cast<std::uint32_t>(48)));
    ctx.set_gpr(5, rt.memory().aot_load32(ctx.gpr[2] + static_cast<std::uint32_t>(52)));
    ctx.set_gpr(6, 0u + static_cast<std::uint32_t>(3));
    ctx.set_gpr(7, 0u + 0u);
    ctx.set_gpr(31, 0x08A29A98u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0006_entry, 6u, 187u, 0x0881CF34u>(ctx, &aot_mem) && ctx.pc == 0x08A29A98u) goto L_08A29A98;
    return;
L_08A29A98:
    rt.memory().aot_store32(ctx.gpr[16] + static_cast<std::uint32_t>(88), ctx.gpr[2]);
    rt.memory().aot_store32(ctx.gpr[16] + static_cast<std::uint32_t>(92), ctx.gpr[3]);
    ctx.set_gpr(3, ctx.gpr[20] >> 18u);
    ctx.set_gpr(2, ctx.gpr[19] << 14u);
    ctx.set_gpr(2, ctx.gpr[2] | ctx.gpr[3]);
    { const bool branch_taken = static_cast<std::int32_t>(ctx.gpr[2]) < 0;
    // nop
      if (branch_taken) {
          goto L_08A29AC4;
      }
      goto L_08A29AB4;
    }
L_08A29AB4:
    ctx.fpr[0] = std::bit_cast<float>(ctx.gpr[2]);
    ctx.fpr[1] = static_cast<float>(static_cast<std::int32_t>(ctx.fpr_bits(0)));
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_08A29ADC;
      }
      goto L_08A29AC4;
    }
L_08A29AC4:
    ctx.set_gpr(3, ctx.gpr[2] >> 1u);
    ctx.set_gpr(2, ctx.gpr[2] & 1u);
    ctx.set_gpr(3, ctx.gpr[3] | ctx.gpr[2]);
    ctx.fpr[0] = std::bit_cast<float>(ctx.gpr[3]);
    ctx.fpr[1] = static_cast<float>(static_cast<std::int32_t>(ctx.fpr_bits(0)));
    ctx.fpr[1] = ctx.fpr[1] + ctx.fpr[1];
    goto L_08A29ADC;
L_08A29ADC:
    ctx.fpr[0] = std::bit_cast<float>(rt.memory().aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(56)));
    { const float fs = ctx.fpr[1]; const float ft = ctx.fpr[0]; if ((std::isinf(fs) && ft == 0.0f) || (std::isinf(ft) && fs == 0.0f)) ctx.set_fpr_bits(12, 0x7FC00000u); else ctx.fpr[12] = fs * ft; }
    ctx.set_gpr(31, 0x08A29AECu);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0006_entry, 6u, 183u, 0x0881CEECu>(ctx, &aot_mem) && ctx.pc == 0x08A29AECu) goto L_08A29AEC;
    return;
L_08A29AEC:
    ctx.set_gpr(4, ctx.gpr[3] << 18u);
    ctx.set_gpr(3, ctx.gpr[2] << 18u);
    ctx.set_gpr(2, ctx.gpr[2] >> 14u);
    ctx.set_gpr(2, ctx.gpr[4] | ctx.gpr[2]);
    ctx.set_gpr(4, 0u < ctx.gpr[3] ? 1u : 0u);
    ctx.set_gpr(3, 0u - ctx.gpr[3]);
    ctx.set_gpr(2, 0u - ctx.gpr[2]);
    ctx.set_gpr(2, ctx.gpr[2] - ctx.gpr[4]);
    rt.memory().aot_store32(ctx.gpr[16] + static_cast<std::uint32_t>(64), ctx.gpr[3]);
    rt.memory().aot_store32(ctx.gpr[16] + static_cast<std::uint32_t>(68), ctx.gpr[2]);
    ctx.set_gpr(4, ctx.gpr[16] + 0u);
    ctx.set_gpr(6, ctx.gpr[20] + 0u);
    ctx.set_gpr(7, ctx.gpr[19] + 0u);
    ctx.set_gpr(31, 0x08A29B28u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0138_entry, 138u, 292u, 0x08A2D21Cu>(ctx, &aot_mem) && ctx.pc == 0x08A29B28u) goto L_08A29B28;
    return;
L_08A29B28:
    rt.memory().aot_store32(ctx.gpr[16] + static_cast<std::uint32_t>(72), ctx.gpr[20]);
    rt.memory().aot_store32(ctx.gpr[16] + static_cast<std::uint32_t>(76), ctx.gpr[19]);
    rt.memory().aot_store32(ctx.gpr[16] + static_cast<std::uint32_t>(20), 0u);
    ctx.set_gpr(3, 0u + static_cast<std::uint32_t>(2));
    ctx.set_gpr(2, rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(96)));
    { const bool branch_taken = ctx.gpr[2] != ctx.gpr[3];
    // nop
      if (branch_taken) {
          goto L_08A2A27C;
      }
      goto L_08A29B44;
    }
L_08A29B44:
    rt.memory().aot_store32(ctx.gpr[16] + static_cast<std::uint32_t>(20), 0u);
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_08A2A27C;
      }
      goto L_08A29B50;
    }
L_08A29B50:
    ctx.set_gpr(4, ctx.gpr[16] + static_cast<std::uint32_t>(24));
    ctx.set_gpr(5, ctx.gpr[23] + 0u);
    ctx.set_gpr(31, 0x08A29B60u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0085_entry, 85u, 61u, 0x089584C4u>(ctx, &aot_mem) && ctx.pc == 0x08A29B60u) goto L_08A29B60;
    return;
L_08A29B60:
    ctx.set_gpr(9, rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(140)));
    ctx.set_gpr(2, rt.memory().aot_load32(ctx.gpr[9] + static_cast<std::uint32_t>(12)));
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(88), ctx.gpr[2]);
    ctx.set_gpr(2, rt.memory().aot_load32(ctx.gpr[2] + static_cast<std::uint32_t>(8)));
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(84), ctx.gpr[2]);
    ctx.set_gpr(3, rt.memory().aot_load32(ctx.gpr[23] + static_cast<std::uint32_t>(40)));
    ctx.set_gpr(2, rt.memory().aot_load32(ctx.gpr[23] + static_cast<std::uint32_t>(44)));
    ctx.set_gpr(8, rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(84)));
    { const bool branch_taken = static_cast<std::int32_t>(ctx.gpr[8]) <= 0;
    // nop
      if (branch_taken) {
          goto L_08A29DFC;
      }
      goto L_08A29B88;
    }
L_08A29B88:
    ctx.set_gpr(4, 0u + static_cast<std::uint32_t>(2));
    rt.memory().aot_store32(ctx.gpr[16] + static_cast<std::uint32_t>(20), ctx.gpr[4]);
    ctx.set_gpr(5, rt.memory().aot_load32(ctx.gpr[23] + static_cast<std::uint32_t>(8)));
    ctx.set_gpr(7, rt.memory().aot_load32(ctx.gpr[5] + static_cast<std::uint32_t>(32)));
    ctx.set_gpr(6, rt.memory().aot_load32(ctx.gpr[5] + static_cast<std::uint32_t>(36)));
    ctx.set_gpr(17, rt.memory().aot_load32(ctx.gpr[5] + static_cast<std::uint32_t>(40)));
    ctx.set_gpr(4, rt.memory().aot_load32(ctx.gpr[5] + static_cast<std::uint32_t>(44)));
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(80), ctx.gpr[4]);
    ctx.set_gpr(4, rt.memory().aot_load32(ctx.gpr[5] + static_cast<std::uint32_t>(48)));
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(104), ctx.gpr[4]);
    ctx.set_gpr(4, rt.memory().aot_load32(ctx.gpr[5] + static_cast<std::uint32_t>(52)));
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(108), ctx.gpr[4]);
    ctx.set_gpr(5, ctx.gpr[3] < ctx.gpr[7] ? 1u : 0u);
    ctx.set_gpr(4, ctx.gpr[3] - ctx.gpr[7]);
    ctx.set_gpr(2, ctx.gpr[2] - ctx.gpr[6]);
    ctx.set_gpr(5, ctx.gpr[2] - ctx.gpr[5]);
    ctx.set_gpr(3, ctx.gpr[4] < ctx.gpr[17] ? 1u : 0u);
    ctx.set_gpr(4, ctx.gpr[4] - ctx.gpr[17]);
    ctx.set_gpr(2, rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(80)));
    ctx.set_gpr(2, ctx.gpr[5] - ctx.gpr[2]);
    ctx.set_gpr(5, ctx.gpr[2] - ctx.gpr[3]);
    ctx.set_gpr(6, rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(104)));
    ctx.set_gpr(7, rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(108)));
    ctx.set_gpr(8, ctx.gpr[29] + static_cast<std::uint32_t>(112));
    ctx.set_gpr(31, 0x08A29BF0u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0152_entry, 152u, 363u, 0x08A66580u>(ctx, &aot_mem) && ctx.pc == 0x08A29BF0u) goto L_08A29BF0;
    return;
L_08A29BF0:
    ctx.set_gpr(7, 0u + 0u);
    ctx.set_gpr(3, rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(112)));
    ctx.set_gpr(4, rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(116)));
    ctx.set_gpr(5, ctx.gpr[3] + ctx.gpr[17]);
    ctx.set_gpr(3, ctx.gpr[5] < ctx.gpr[3] ? 1u : 0u);
    ctx.set_gpr(4, ctx.gpr[3] + ctx.gpr[4]);
    ctx.set_gpr(3, rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(80)));
    ctx.set_gpr(4, ctx.gpr[4] + ctx.gpr[3]);
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(112), ctx.gpr[5]);
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(116), ctx.gpr[4]);
    ctx.set_gpr(3, rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(88)));
    ctx.set_gpr(3, rt.memory().aot_load32(ctx.gpr[3] + static_cast<std::uint32_t>(16)));
    ctx.set_gpr(17, rt.memory().aot_load32(ctx.gpr[3] + static_cast<std::uint32_t>(0)));
    ctx.set_gpr(12, rt.memory().aot_load32(ctx.gpr[17] + static_cast<std::uint32_t>(8)));
    ctx.set_gpr(11, rt.memory().aot_load32(ctx.gpr[17] + static_cast<std::uint32_t>(12)));
    ctx.set_gpr(6, ctx.gpr[12] < ctx.gpr[5] ? 1u : 0u);
    ctx.set_gpr(14, ctx.gpr[12] - ctx.gpr[5]);
    ctx.set_gpr(3, ctx.gpr[11] - ctx.gpr[4]);
    ctx.set_gpr(13, ctx.gpr[3] - ctx.gpr[6]);
    ctx.set_gpr(15, 0u + static_cast<std::uint32_t>(1));
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_08A29D04;
      }
      goto L_08A29C48;
    }
L_08A29C48:
    ctx.set_gpr(6, ctx.gpr[15] << 2u);
    ctx.set_gpr(3, rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(88)));
    ctx.set_gpr(3, rt.memory().aot_load32(ctx.gpr[3] + static_cast<std::uint32_t>(16)));
    ctx.set_gpr(3, ctx.gpr[3] + ctx.gpr[6]);
    ctx.set_gpr(9, rt.memory().aot_load32(ctx.gpr[3] + static_cast<std::uint32_t>(0)));
    ctx.set_gpr(8, rt.memory().aot_load32(ctx.gpr[9] + static_cast<std::uint32_t>(8)));
    ctx.set_gpr(6, rt.memory().aot_load32(ctx.gpr[9] + static_cast<std::uint32_t>(12)));
    ctx.set_gpr(3, ctx.gpr[8] < ctx.gpr[5] ? 1u : 0u);
    ctx.set_gpr(10, ctx.gpr[8] - ctx.gpr[5]);
    ctx.set_gpr(24, ctx.gpr[6] - ctx.gpr[4]);
    ctx.set_gpr(3, ctx.gpr[24] - ctx.gpr[3]);
    ctx.set_gpr(1, static_cast<std::int32_t>(ctx.gpr[3]) < static_cast<std::int32_t>(0u) ? 1u : 0u);
    { const bool branch_taken = ctx.gpr[1] != 0u;
    // nop
      if (branch_taken) {
          goto L_08A29CD0;
      }
      goto L_08A29C80;
    }
L_08A29C80:
    ctx.set_gpr(1, static_cast<std::int32_t>(0u) < static_cast<std::int32_t>(ctx.gpr[3]) ? 1u : 0u);
    { const bool branch_taken = ctx.gpr[1] != 0u;
    // nop
      if (branch_taken) {
          goto L_08A29C98;
      }
      goto L_08A29C8C;
    }
L_08A29C8C:
    ctx.set_gpr(1, ctx.gpr[10] < 0u ? 1u : 0u);
    { const bool branch_taken = ctx.gpr[1] != 0u;
    // nop
      if (branch_taken) {
          goto L_08A29CD0;
      }
      goto L_08A29C98;
    }
L_08A29C98:
    ctx.set_gpr(1, static_cast<std::int32_t>(ctx.gpr[13]) < static_cast<std::int32_t>(ctx.gpr[3]) ? 1u : 0u);
    { const bool branch_taken = ctx.gpr[1] != 0u;
    // nop
      if (branch_taken) {
          goto L_08A29CD0;
      }
      goto L_08A29CA4;
    }
L_08A29CA4:
    ctx.set_gpr(1, static_cast<std::int32_t>(ctx.gpr[3]) < static_cast<std::int32_t>(ctx.gpr[13]) ? 1u : 0u);
    { const bool branch_taken = ctx.gpr[1] != 0u;
    // nop
      if (branch_taken) {
          goto L_08A29CBC;
      }
      goto L_08A29CB0;
    }
L_08A29CB0:
    ctx.set_gpr(1, ctx.gpr[10] < ctx.gpr[14] ? 1u : 0u);
    { const bool branch_taken = ctx.gpr[1] == 0u;
    // nop
      if (branch_taken) {
          goto L_08A29CD0;
      }
      goto L_08A29CBC;
    }
L_08A29CBC:
    ctx.set_gpr(14, ctx.gpr[10] + 0u);
    ctx.set_gpr(13, ctx.gpr[3] + 0u);
    ctx.set_gpr(17, ctx.gpr[9] + 0u);
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_08A29D00;
      }
      goto L_08A29CD0;
    }
L_08A29CD0:
    ctx.set_gpr(1, static_cast<std::int32_t>(ctx.gpr[11]) < static_cast<std::int32_t>(ctx.gpr[6]) ? 1u : 0u);
    { const bool branch_taken = ctx.gpr[1] != 0u;
    // nop
      if (branch_taken) {
          goto L_08A29D00;
      }
      goto L_08A29CDC;
    }
L_08A29CDC:
    ctx.set_gpr(1, static_cast<std::int32_t>(ctx.gpr[6]) < static_cast<std::int32_t>(ctx.gpr[11]) ? 1u : 0u);
    { const bool branch_taken = ctx.gpr[1] != 0u;
    // nop
      if (branch_taken) {
          goto L_08A29CF4;
      }
      goto L_08A29CE8;
    }
L_08A29CE8:
    ctx.set_gpr(1, ctx.gpr[8] < ctx.gpr[12] ? 1u : 0u);
    { const bool branch_taken = ctx.gpr[1] == 0u;
    // nop
      if (branch_taken) {
          goto L_08A29D00;
      }
      goto L_08A29CF4;
    }
L_08A29CF4:
    ctx.set_gpr(12, ctx.gpr[8] + 0u);
    ctx.set_gpr(11, ctx.gpr[6] + 0u);
    ctx.set_gpr(17, ctx.gpr[9] + 0u);
    goto L_08A29D00;
L_08A29D00:
    ctx.set_gpr(15, ctx.gpr[15] + static_cast<std::uint32_t>(1));
    goto L_08A29D04;
L_08A29D04:
    ctx.set_gpr(3, rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(84)));
    ctx.set_gpr(3, static_cast<std::int32_t>(ctx.gpr[15]) < static_cast<std::int32_t>(ctx.gpr[3]) ? 1u : 0u);
    { const bool branch_taken = ctx.gpr[3] != 0u;
    // nop
      if (branch_taken) {
          goto L_08A29C48;
      }
      goto L_08A29D14;
    }
L_08A29D14:
    ctx.set_gpr(1, static_cast<std::int32_t>(0u) < static_cast<std::int32_t>(ctx.gpr[13]) ? 1u : 0u);
    { const bool branch_taken = ctx.gpr[1] != 0u;
    // nop
      if (branch_taken) {
          goto L_08A29D4C;
      }
      goto L_08A29D20;
    }
L_08A29D20:
    ctx.set_gpr(1, static_cast<std::int32_t>(ctx.gpr[13]) < static_cast<std::int32_t>(0u) ? 1u : 0u);
    { const bool branch_taken = ctx.gpr[1] != 0u;
    // nop
      if (branch_taken) {
          goto L_08A29D38;
      }
      goto L_08A29D2C;
    }
L_08A29D2C:
    ctx.set_gpr(1, ctx.gpr[14] < 0u ? 1u : 0u);
    { const bool branch_taken = ctx.gpr[1] == 0u;
    // nop
      if (branch_taken) {
          goto L_08A29D4C;
      }
      goto L_08A29D38;
    }
L_08A29D38:
    ctx.set_gpr(6, ctx.gpr[2] + static_cast<std::uint32_t>(1));
    ctx.set_gpr(2, ctx.gpr[6] < ctx.gpr[2] ? 1u : 0u);
    ctx.set_gpr(7, ctx.gpr[2] + ctx.gpr[7]);
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_08A29D50;
      }
      goto L_08A29D4C;
    }
L_08A29D4C:
    ctx.set_gpr(6, ctx.gpr[2] + 0u);
    goto L_08A29D50;
L_08A29D50:
    ctx.set_gpr(2, rt.memory().aot_load32(ctx.gpr[23] + static_cast<std::uint32_t>(8)));
    ctx.set_gpr(23, rt.memory().aot_load32(ctx.gpr[2] + static_cast<std::uint32_t>(32)));
    ctx.set_gpr(2, rt.memory().aot_load32(ctx.gpr[2] + static_cast<std::uint32_t>(36)));
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(76), ctx.gpr[2]);
    ctx.set_gpr(2, rt.memory().aot_load32(ctx.gpr[17] + static_cast<std::uint32_t>(8)));
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(72), ctx.gpr[2]);
    ctx.set_gpr(2, rt.memory().aot_load32(ctx.gpr[17] + static_cast<std::uint32_t>(12)));
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(68), ctx.gpr[2]);
    ctx.set_gpr(4, rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(104)));
    ctx.set_gpr(5, rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(108)));
    ctx.set_gpr(31, 0x08A29D80u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0006_entry, 6u, 110u, 0x0881C82Cu>(ctx, &aot_mem) && ctx.pc == 0x08A29D80u) goto L_08A29D80;
    return;
L_08A29D80:
    ctx.set_gpr(8, rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(72)));
    ctx.set_gpr(10, ctx.gpr[8] + ctx.gpr[2]);
    ctx.set_gpr(2, ctx.gpr[8] + 0u);
    ctx.set_gpr(8, ctx.gpr[10] < ctx.gpr[2] ? 1u : 0u);
    ctx.set_gpr(2, rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(68)));
    ctx.set_gpr(2, ctx.gpr[8] + ctx.gpr[2]);
    ctx.set_gpr(9, ctx.gpr[2] + ctx.gpr[3]);
    ctx.set_gpr(8, ctx.gpr[23] + ctx.gpr[10]);
    ctx.set_gpr(3, ctx.gpr[8] < ctx.gpr[23] ? 1u : 0u);
    ctx.set_gpr(2, rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(76)));
    ctx.set_gpr(2, ctx.gpr[3] + ctx.gpr[2]);
    ctx.set_gpr(2, ctx.gpr[2] + ctx.gpr[9]);
    rt.memory().aot_store32(ctx.gpr[16] + static_cast<std::uint32_t>(48), ctx.gpr[8]);
    rt.memory().aot_store32(ctx.gpr[16] + static_cast<std::uint32_t>(52), ctx.gpr[2]);
    ctx.set_gpr(8, rt.memory().aot_load32(ctx.gpr[17] + static_cast<std::uint32_t>(16)));
    ctx.set_gpr(3, rt.memory().aot_load32(ctx.gpr[8] + static_cast<std::uint32_t>(24)));
    ctx.set_gpr(2, rt.memory().aot_load32(ctx.gpr[8] + static_cast<std::uint32_t>(28)));
    rt.memory().aot_store32(ctx.gpr[16] + static_cast<std::uint32_t>(96), ctx.gpr[3]);
    rt.memory().aot_store32(ctx.gpr[16] + static_cast<std::uint32_t>(100), ctx.gpr[2]);
    ctx.fpr[0] = std::bit_cast<float>(rt.memory().aot_load32(ctx.gpr[8] + static_cast<std::uint32_t>(8)));
    rt.memory().aot_store32(ctx.gpr[16] + static_cast<std::uint32_t>(80), std::bit_cast<std::uint32_t>(ctx.fpr[0]));
    ctx.fpr[1] = std::bit_cast<float>(rt.memory().aot_load32(ctx.gpr[8] + static_cast<std::uint32_t>(12)));
    ctx.fpr[0] = std::bit_cast<float>(rt.memory().aot_load32(ctx.gpr[8] + static_cast<std::uint32_t>(8)));
    ctx.fpr[0] = ctx.fpr[1] - ctx.fpr[0];
    rt.memory().aot_store32(ctx.gpr[16] + static_cast<std::uint32_t>(84), std::bit_cast<std::uint32_t>(ctx.fpr[0]));
    ctx.set_gpr(3, rt.memory().aot_load32(ctx.gpr[8] + static_cast<std::uint32_t>(16)));
    ctx.set_gpr(2, rt.memory().aot_load32(ctx.gpr[8] + static_cast<std::uint32_t>(20)));
    rt.memory().aot_store32(ctx.gpr[16] + static_cast<std::uint32_t>(88), ctx.gpr[3]);
    rt.memory().aot_store32(ctx.gpr[16] + static_cast<std::uint32_t>(92), ctx.gpr[2]);
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_08A29EF0;
      }
      goto L_08A29DFC;
    }
L_08A29DFC:
    ctx.set_gpr(8, rt.memory().aot_load32(ctx.gpr[9] + static_cast<std::uint32_t>(16)));
    ctx.set_gpr(3, rt.memory().aot_load32(ctx.gpr[8] + static_cast<std::uint32_t>(24)));
    ctx.set_gpr(2, rt.memory().aot_load32(ctx.gpr[8] + static_cast<std::uint32_t>(28)));
    rt.memory().aot_store32(ctx.gpr[16] + static_cast<std::uint32_t>(96), ctx.gpr[3]);
    rt.memory().aot_store32(ctx.gpr[16] + static_cast<std::uint32_t>(100), ctx.gpr[2]);
    ctx.fpr[0] = std::bit_cast<float>(rt.memory().aot_load32(ctx.gpr[8] + static_cast<std::uint32_t>(8)));
    rt.memory().aot_store32(ctx.gpr[16] + static_cast<std::uint32_t>(80), std::bit_cast<std::uint32_t>(ctx.fpr[0]));
    ctx.fpr[1] = std::bit_cast<float>(rt.memory().aot_load32(ctx.gpr[8] + static_cast<std::uint32_t>(12)));
    ctx.fpr[0] = std::bit_cast<float>(rt.memory().aot_load32(ctx.gpr[8] + static_cast<std::uint32_t>(8)));
    ctx.fpr[0] = ctx.fpr[1] - ctx.fpr[0];
    rt.memory().aot_store32(ctx.gpr[16] + static_cast<std::uint32_t>(84), std::bit_cast<std::uint32_t>(ctx.fpr[0]));
    ctx.set_gpr(3, rt.memory().aot_load32(ctx.gpr[8] + static_cast<std::uint32_t>(16)));
    ctx.set_gpr(2, rt.memory().aot_load32(ctx.gpr[8] + static_cast<std::uint32_t>(20)));
    rt.memory().aot_store32(ctx.gpr[16] + static_cast<std::uint32_t>(88), ctx.gpr[3]);
    rt.memory().aot_store32(ctx.gpr[16] + static_cast<std::uint32_t>(92), ctx.gpr[2]);
    ctx.set_gpr(17, rt.memory().aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(96)));
    ctx.set_gpr(23, rt.memory().aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(100)));
    ctx.set_gpr(3, ctx.gpr[20] >> 18u);
    ctx.set_gpr(2, ctx.gpr[19] << 14u);
    ctx.set_gpr(2, ctx.gpr[2] | ctx.gpr[3]);
    { const bool branch_taken = static_cast<std::int32_t>(ctx.gpr[2]) < 0;
    // nop
      if (branch_taken) {
          goto L_08A29E64;
      }
      goto L_08A29E54;
    }
L_08A29E54:
    ctx.fpr[0] = std::bit_cast<float>(ctx.gpr[2]);
    ctx.fpr[1] = static_cast<float>(static_cast<std::int32_t>(ctx.fpr_bits(0)));
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_08A29E7C;
      }
      goto L_08A29E64;
    }
L_08A29E64:
    ctx.set_gpr(3, ctx.gpr[2] >> 1u);
    ctx.set_gpr(2, ctx.gpr[2] & 1u);
    ctx.set_gpr(3, ctx.gpr[3] | ctx.gpr[2]);
    ctx.fpr[0] = std::bit_cast<float>(ctx.gpr[3]);
    ctx.fpr[1] = static_cast<float>(static_cast<std::int32_t>(ctx.fpr_bits(0)));
    ctx.fpr[1] = ctx.fpr[1] + ctx.fpr[1];
    goto L_08A29E7C;
L_08A29E7C:
    ctx.fpr[0] = std::bit_cast<float>(rt.memory().aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(56)));
    { const float fs = ctx.fpr[1]; const float ft = ctx.fpr[0]; if ((std::isinf(fs) && ft == 0.0f) || (std::isinf(ft) && fs == 0.0f)) ctx.set_fpr_bits(12, 0x7FC00000u); else ctx.fpr[12] = fs * ft; }
    ctx.set_gpr(31, 0x08A29E8Cu);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0006_entry, 6u, 183u, 0x0881CEECu>(ctx, &aot_mem) && ctx.pc == 0x08A29E8Cu) goto L_08A29E8C;
    return;
L_08A29E8C:
    ctx.set_gpr(4, ctx.gpr[3] << 18u);
    ctx.set_gpr(3, ctx.gpr[2] << 18u);
    ctx.set_gpr(2, ctx.gpr[2] >> 14u);
    ctx.set_gpr(2, ctx.gpr[4] | ctx.gpr[2]);
    ctx.set_gpr(4, ctx.gpr[17] < ctx.gpr[3] ? 1u : 0u);
    ctx.set_gpr(3, ctx.gpr[17] - ctx.gpr[3]);
    ctx.set_gpr(2, ctx.gpr[23] - ctx.gpr[2]);
    ctx.set_gpr(2, ctx.gpr[2] - ctx.gpr[4]);
    rt.memory().aot_store32(ctx.gpr[16] + static_cast<std::uint32_t>(64), ctx.gpr[3]);
    rt.memory().aot_store32(ctx.gpr[16] + static_cast<std::uint32_t>(68), ctx.gpr[2]);
    ctx.set_gpr(4, ctx.gpr[16] + 0u);
    ctx.set_gpr(6, ctx.gpr[20] + 0u);
    ctx.set_gpr(7, ctx.gpr[19] + 0u);
    ctx.set_gpr(31, 0x08A29EC8u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0138_entry, 138u, 292u, 0x08A2D21Cu>(ctx, &aot_mem) && ctx.pc == 0x08A29EC8u) goto L_08A29EC8;
    return;
L_08A29EC8:
    rt.memory().aot_store32(ctx.gpr[16] + static_cast<std::uint32_t>(72), ctx.gpr[20]);
    rt.memory().aot_store32(ctx.gpr[16] + static_cast<std::uint32_t>(76), ctx.gpr[19]);
    rt.memory().aot_store32(ctx.gpr[16] + static_cast<std::uint32_t>(20), 0u);
    ctx.set_gpr(3, 0u + static_cast<std::uint32_t>(2));
    ctx.set_gpr(2, rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(92)));
    { const bool branch_taken = ctx.gpr[2] != ctx.gpr[3];
    // nop
      if (branch_taken) {
          goto L_08A29EF0;
      }
      goto L_08A29EE4;
    }
L_08A29EE4:
    ctx.set_gpr(3, rt.memory().aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(24)));
    ctx.set_gpr(2, 0u + static_cast<std::uint32_t>(1));
    rt.memory().aot_store32(ctx.gpr[3] + static_cast<std::uint32_t>(20), ctx.gpr[2]);
    goto L_08A29EF0;
L_08A29EF0:
    ctx.set_gpr(2, rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(92)));
    { const bool branch_taken = ctx.gpr[2] == 0u;
    // nop
      if (branch_taken) {
          goto L_08A29F0C;
      }
      goto L_08A29EFC;
    }
L_08A29EFC:
    ctx.set_gpr(3, 0u + static_cast<std::uint32_t>(3));
    ctx.set_gpr(2, rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(96)));
    { const bool branch_taken = ctx.gpr[2] != ctx.gpr[3];
    // nop
      if (branch_taken) {
          goto L_08A29F28;
      }
      goto L_08A29F0C;
    }
L_08A29F0C:
    ctx.set_gpr(3, 0u + static_cast<std::uint32_t>(2));
    ctx.set_gpr(2, rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(96)));
    { const bool branch_taken = ctx.gpr[2] != ctx.gpr[3];
    // nop
      if (branch_taken) {
          goto L_08A2A27C;
      }
      goto L_08A29F1C;
    }
L_08A29F1C:
    rt.memory().aot_store32(ctx.gpr[16] + static_cast<std::uint32_t>(20), 0u);
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_08A2A27C;
      }
      goto L_08A29F28;
    }
L_08A29F28:
    ctx.set_gpr(2, rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(92)));
    ctx.set_gpr(2, ctx.gpr[2] + static_cast<std::uint32_t>(-1));
    ctx.set_gpr(1, ctx.gpr[2] < static_cast<std::uint32_t>(2) ? 1u : 0u);
    { const bool branch_taken = ctx.gpr[1] == 0u;
    // nop
      if (branch_taken) {
          goto L_08A29F68;
      }
      goto L_08A29F3C;
    }
L_08A29F3C:
    ctx.set_gpr(2, ctx.gpr[30] + static_cast<std::uint32_t>(-3));
    ctx.set_gpr(1, ctx.gpr[2] < static_cast<std::uint32_t>(2) ? 1u : 0u);
    { const bool branch_taken = ctx.gpr[1] == 0u;
    // nop
      if (branch_taken) {
          goto L_08A29F68;
      }
      goto L_08A29F4C;
    }
L_08A29F4C:
    ctx.set_gpr(3, 0u + static_cast<std::uint32_t>(2));
    ctx.set_gpr(2, rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(96)));
    { const bool branch_taken = ctx.gpr[2] != ctx.gpr[3];
    // nop
      if (branch_taken) {
          goto L_08A2A27C;
      }
      goto L_08A29F5C;
    }
L_08A29F5C:
    rt.memory().aot_store32(ctx.gpr[16] + static_cast<std::uint32_t>(20), 0u);
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_08A2A27C;
      }
      goto L_08A29F68;
    }
L_08A29F68:
    ctx.set_gpr(3, rt.memory().aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(20)));
    ctx.set_gpr(2, 0u + static_cast<std::uint32_t>(2));
    { const bool branch_taken = ctx.gpr[3] != ctx.gpr[2];
    // nop
      if (branch_taken) {
          goto L_08A2A06C;
      }
      goto L_08A29F78;
    }
L_08A29F78:
    ctx.set_gpr(17, rt.memory().aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(24)));
    ctx.set_gpr(9, rt.memory().aot_load32(ctx.gpr[17] + static_cast<std::uint32_t>(40)));
    ctx.set_gpr(8, rt.memory().aot_load32(ctx.gpr[17] + static_cast<std::uint32_t>(44)));
    ctx.set_gpr(3, rt.memory().aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(48)));
    ctx.set_gpr(2, rt.memory().aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(52)));
    ctx.set_gpr(1, static_cast<std::int32_t>(ctx.gpr[8]) < static_cast<std::int32_t>(ctx.gpr[2]) ? 1u : 0u);
    { const bool branch_taken = ctx.gpr[1] != 0u;
    // nop
      if (branch_taken) {
          goto L_08A2A06C;
      }
      goto L_08A29F98;
    }
L_08A29F98:
    ctx.set_gpr(1, static_cast<std::int32_t>(ctx.gpr[2]) < static_cast<std::int32_t>(ctx.gpr[8]) ? 1u : 0u);
    { const bool branch_taken = ctx.gpr[1] != 0u;
    // nop
      if (branch_taken) {
          goto L_08A29FB0;
      }
      goto L_08A29FA4;
    }
L_08A29FA4:
    ctx.set_gpr(1, ctx.gpr[9] < ctx.gpr[3] ? 1u : 0u);
    { const bool branch_taken = ctx.gpr[1] != 0u;
    // nop
      if (branch_taken) {
          goto L_08A2A06C;
      }
      goto L_08A29FB0;
    }
L_08A29FB0:
    ctx.set_gpr(23, rt.memory().aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(96)));
    ctx.set_gpr(2, rt.memory().aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(100)));
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(64), ctx.gpr[2]);
    ctx.set_gpr(3, ctx.gpr[20] >> 18u);
    ctx.set_gpr(2, ctx.gpr[19] << 14u);
    ctx.set_gpr(2, ctx.gpr[2] | ctx.gpr[3]);
    { const bool branch_taken = static_cast<std::int32_t>(ctx.gpr[2]) < 0;
    // nop
      if (branch_taken) {
          goto L_08A29FE0;
      }
      goto L_08A29FD0;
    }
L_08A29FD0:
    ctx.fpr[0] = std::bit_cast<float>(ctx.gpr[2]);
    ctx.fpr[1] = static_cast<float>(static_cast<std::int32_t>(ctx.fpr_bits(0)));
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_08A29FF8;
      }
      goto L_08A29FE0;
    }
L_08A29FE0:
    ctx.set_gpr(3, ctx.gpr[2] >> 1u);
    ctx.set_gpr(2, ctx.gpr[2] & 1u);
    ctx.set_gpr(3, ctx.gpr[3] | ctx.gpr[2]);
    ctx.fpr[0] = std::bit_cast<float>(ctx.gpr[3]);
    ctx.fpr[1] = static_cast<float>(static_cast<std::int32_t>(ctx.fpr_bits(0)));
    ctx.fpr[1] = ctx.fpr[1] + ctx.fpr[1];
    goto L_08A29FF8;
L_08A29FF8:
    ctx.fpr[0] = std::bit_cast<float>(rt.memory().aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(56)));
    { const float fs = ctx.fpr[1]; const float ft = ctx.fpr[0]; if ((std::isinf(fs) && ft == 0.0f) || (std::isinf(ft) && fs == 0.0f)) ctx.set_fpr_bits(12, 0x7FC00000u); else ctx.fpr[12] = fs * ft; }
    ctx.set_gpr(31, 0x08A2A008u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0006_entry, 6u, 183u, 0x0881CEECu>(ctx, &aot_mem) && ctx.pc == 0x08A2A008u) goto L_08A2A008;
    return;
L_08A2A008:
    ctx.set_gpr(4, ctx.gpr[3] << 18u);
    ctx.set_gpr(3, ctx.gpr[2] << 18u);
    ctx.set_gpr(2, ctx.gpr[2] >> 14u);
    ctx.set_gpr(5, ctx.gpr[4] | ctx.gpr[2]);
    ctx.set_gpr(4, ctx.gpr[23] < ctx.gpr[3] ? 1u : 0u);
    ctx.set_gpr(3, ctx.gpr[23] - ctx.gpr[3]);
    ctx.set_gpr(2, rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(64)));
    ctx.set_gpr(2, ctx.gpr[2] - ctx.gpr[5]);
    ctx.set_gpr(2, ctx.gpr[2] - ctx.gpr[4]);
    rt.memory().aot_store32(ctx.gpr[16] + static_cast<std::uint32_t>(64), ctx.gpr[3]);
    rt.memory().aot_store32(ctx.gpr[16] + static_cast<std::uint32_t>(68), ctx.gpr[2]);
    ctx.set_gpr(4, ctx.gpr[16] + 0u);
    ctx.set_gpr(6, ctx.gpr[20] + 0u);
    ctx.set_gpr(7, ctx.gpr[19] + 0u);
    ctx.set_gpr(31, 0x08A2A048u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0138_entry, 138u, 292u, 0x08A2D21Cu>(ctx, &aot_mem) && ctx.pc == 0x08A2A048u) goto L_08A2A048;
    return;
L_08A2A048:
    rt.memory().aot_store32(ctx.gpr[16] + static_cast<std::uint32_t>(72), ctx.gpr[20]);
    rt.memory().aot_store32(ctx.gpr[16] + static_cast<std::uint32_t>(76), ctx.gpr[19]);
    rt.memory().aot_store32(ctx.gpr[16] + static_cast<std::uint32_t>(20), 0u);
    ctx.set_gpr(3, 0u + static_cast<std::uint32_t>(2));
    ctx.set_gpr(2, rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(92)));
    { const bool branch_taken = ctx.gpr[2] != ctx.gpr[3];
    // nop
      if (branch_taken) {
          goto L_08A2A06C;
      }
      goto L_08A2A064;
    }
L_08A2A064:
    ctx.set_gpr(2, 0u + static_cast<std::uint32_t>(1));
    rt.memory().aot_store32(ctx.gpr[17] + static_cast<std::uint32_t>(20), ctx.gpr[2]);
    goto L_08A2A06C;
L_08A2A06C:
    ctx.set_gpr(2, rt.memory().aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(20)));
    { const bool branch_taken = ctx.gpr[2] != 0u;
    // nop
      if (branch_taken) {
          goto L_08A2A27C;
      }
      goto L_08A2A078;
    }
L_08A2A078:
    ctx.set_gpr(9, rt.memory().aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(72)));
    ctx.set_gpr(8, rt.memory().aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(76)));
    ctx.set_gpr(1, static_cast<std::int32_t>(ctx.gpr[19]) < static_cast<std::int32_t>(ctx.gpr[8]) ? 1u : 0u);
    { const bool branch_taken = ctx.gpr[1] != 0u;
    // nop
      if (branch_taken) {
          goto L_08A2A0E0;
      }
      goto L_08A2A08C;
    }
L_08A2A08C:
    ctx.set_gpr(1, static_cast<std::int32_t>(ctx.gpr[8]) < static_cast<std::int32_t>(ctx.gpr[19]) ? 1u : 0u);
    { const bool branch_taken = ctx.gpr[1] != 0u;
    // nop
      if (branch_taken) {
          goto L_08A2A0A4;
      }
      goto L_08A2A098;
    }
L_08A2A098:
    ctx.set_gpr(1, ctx.gpr[20] < ctx.gpr[9] ? 1u : 0u);
    { const bool branch_taken = ctx.gpr[1] != 0u;
    // nop
      if (branch_taken) {
          goto L_08A2A0E0;
      }
      goto L_08A2A0A4;
    }
L_08A2A0A4:
    ctx.set_gpr(17, rt.memory().aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(88)));
    ctx.set_gpr(23, rt.memory().aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(92)));
    ctx.set_gpr(3, ctx.gpr[9] + ctx.gpr[17]);
    ctx.set_gpr(2, ctx.gpr[3] < ctx.gpr[9] ? 1u : 0u);
    ctx.set_gpr(2, ctx.gpr[2] + ctx.gpr[8]);
    ctx.set_gpr(2, ctx.gpr[2] + ctx.gpr[23]);
    ctx.set_gpr(1, static_cast<std::int32_t>(ctx.gpr[19]) < static_cast<std::int32_t>(ctx.gpr[2]) ? 1u : 0u);
    { const bool branch_taken = ctx.gpr[1] != 0u;
    // nop
      if (branch_taken) {
          goto L_08A2A0F4;
      }
      goto L_08A2A0C8;
    }
L_08A2A0C8:
    ctx.set_gpr(1, static_cast<std::int32_t>(ctx.gpr[2]) < static_cast<std::int32_t>(ctx.gpr[19]) ? 1u : 0u);
    { const bool branch_taken = ctx.gpr[1] != 0u;
    // nop
      if (branch_taken) {
          goto L_08A2A0E0;
      }
      goto L_08A2A0D4;
    }
L_08A2A0D4:
    ctx.set_gpr(1, ctx.gpr[3] < ctx.gpr[20] ? 1u : 0u);
    { const bool branch_taken = ctx.gpr[1] == 0u;
    // nop
      if (branch_taken) {
          goto L_08A2A0F4;
      }
      goto L_08A2A0E0;
    }
L_08A2A0E0:
    ctx.set_gpr(2, 16256u << 16u);
    ctx.fpr[2] = std::bit_cast<float>(ctx.gpr[2]);
    ctx.set_fpr_bits(20, ctx.fpr_bits(2));
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_08A2A174;
      }
      goto L_08A2A0F4;
    }
L_08A2A0F4:
    { const bool branch_taken = ctx.gpr[23] != 0u;
    // nop
      if (branch_taken) {
          goto L_08A2A118;
      }
      goto L_08A2A0FC;
    }
L_08A2A0FC:
    { const bool branch_taken = ctx.gpr[17] != 0u;
    // nop
      if (branch_taken) {
          goto L_08A2A118;
      }
      goto L_08A2A104;
    }
L_08A2A104:
    ctx.set_gpr(2, 16256u << 16u);
    ctx.fpr[2] = std::bit_cast<float>(ctx.gpr[2]);
    ctx.set_fpr_bits(3, ctx.fpr_bits(2));
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_08A2A164;
      }
      goto L_08A2A118;
    }
L_08A2A118:
    ctx.set_gpr(3, ctx.gpr[20] < ctx.gpr[9] ? 1u : 0u);
    ctx.set_gpr(4, ctx.gpr[20] - ctx.gpr[9]);
    ctx.set_gpr(2, ctx.gpr[19] - ctx.gpr[8]);
    ctx.set_gpr(5, ctx.gpr[2] - ctx.gpr[3]);
    ctx.set_gpr(31, 0x08A2A130u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0006_entry, 6u, 125u, 0x0881C984u>(ctx, &aot_mem) && ctx.pc == 0x08A2A130u) goto L_08A2A130;
    return;
L_08A2A130:
    ctx.set_fpr_bits(20, ctx.fpr_bits(0));
    ctx.set_gpr(4, ctx.gpr[17] + 0u);
    ctx.set_gpr(5, ctx.gpr[23] + 0u);
    ctx.set_gpr(31, 0x08A2A144u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0006_entry, 6u, 125u, 0x0881C984u>(ctx, &aot_mem) && ctx.pc == 0x08A2A144u) goto L_08A2A144;
    return;
L_08A2A144:
    ctx.fpr[3] = ctx.fpr[20] / ctx.fpr[0];
    ctx.set_gpr(2, 16256u << 16u);
    ctx.fpr[2] = std::bit_cast<float>(ctx.gpr[2]);
    ctx.set_fpu_condition(((std::isnan(ctx.fpr[3]) || std::isnan(ctx.fpr[2])) || ctx.fpr[3] <= ctx.fpr[2]));
    // nop
    { const bool branch_taken = ctx.fpu_condition();
    // nop
      if (branch_taken) {
          goto L_08A2A164;
      }
      goto L_08A2A160;
    }
L_08A2A160:
    ctx.set_fpr_bits(3, ctx.fpr_bits(2));
    goto L_08A2A164;
L_08A2A164:
    ctx.fpr[1] = std::bit_cast<float>(rt.memory().aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(80)));
    ctx.fpr[0] = std::bit_cast<float>(rt.memory().aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(84)));
    { const float fs = ctx.fpr[3]; const float ft = ctx.fpr[0]; if ((std::isinf(fs) && ft == 0.0f) || (std::isinf(ft) && fs == 0.0f)) ctx.set_fpr_bits(0, 0x7FC00000u); else ctx.fpr[0] = fs * ft; }
    ctx.fpr[20] = ctx.fpr[1] + ctx.fpr[0];
    goto L_08A2A174;
L_08A2A174:
    ctx.set_gpr(2, 0u + static_cast<std::uint32_t>(2));
    { const bool branch_taken = ctx.gpr[30] != ctx.gpr[2];
    // nop
      if (branch_taken) {
          goto L_08A2A1B8;
      }
      goto L_08A2A180;
    }
L_08A2A180:
    ctx.fpr[20] = ctx.fpr[2] - ctx.fpr[20];
    ctx.fpr[0] = std::bit_cast<float>(0u);
    ctx.set_fpu_condition((ctx.fpr[20] <= ctx.fpr[0]));
    // nop
    { const bool branch_taken = !ctx.fpu_condition();
    // nop
      if (branch_taken) {
          goto L_08A2A278;
      }
      goto L_08A2A198;
    }
L_08A2A198:
    ctx.set_gpr(2, 0u + static_cast<std::uint32_t>(3));
    rt.memory().aot_store32(ctx.gpr[16] + static_cast<std::uint32_t>(20), ctx.gpr[2]);
    ctx.set_gpr(4, ctx.gpr[16] + static_cast<std::uint32_t>(24));
    ctx.set_gpr(5, 0u + 0u);
    ctx.set_gpr(31, 0x08A2A1B0u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0085_entry, 85u, 61u, 0x089584C4u>(ctx, &aot_mem) && ctx.pc == 0x08A2A1B0u) goto L_08A2A1B0;
    return;
L_08A2A1B0:
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_08A2A278;
      }
      goto L_08A2A1B8;
    }
L_08A2A1B8:
    ctx.set_fpu_condition(((std::isnan(ctx.fpr[20]) || std::isnan(ctx.fpr[2])) || ctx.fpr[20] < ctx.fpr[2]));
    // nop
    { const bool branch_taken = ctx.fpu_condition();
    // nop
      if (branch_taken) {
          goto L_08A2A278;
      }
      goto L_08A2A1C8;
    }
L_08A2A1C8:
    { const bool branch_taken = ctx.gpr[30] != 0u;
    // nop
      if (branch_taken) {
          goto L_08A2A1F8;
      }
      goto L_08A2A1D0;
    }
L_08A2A1D0:
    rt.memory().aot_store32(ctx.gpr[16] + static_cast<std::uint32_t>(12), 0u);
    ctx.set_gpr(4, ctx.gpr[21] + 0u);
    ctx.set_gpr(31, 0x08A2A1E0u);
    // nop
    goto L_08A2B858;
L_08A2A1E0:
    ctx.set_gpr(4, ctx.gpr[16] + static_cast<std::uint32_t>(24));
    ctx.set_gpr(5, 0u + 0u);
    ctx.set_gpr(31, 0x08A2A1F0u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0085_entry, 85u, 61u, 0x089584C4u>(ctx, &aot_mem) && ctx.pc == 0x08A2A1F0u) goto L_08A2A1F0;
    return;
L_08A2A1F0:
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_08A2A278;
      }
      goto L_08A2A1F8;
    }
L_08A2A1F8:
    ctx.set_gpr(2, 0u + static_cast<std::uint32_t>(1));
    { const bool branch_taken = ctx.gpr[30] != ctx.gpr[2];
    // nop
      if (branch_taken) {
          goto L_08A2A25C;
      }
      goto L_08A2A204;
    }
L_08A2A204:
    ctx.set_gpr(2, rt.memory().aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(24)));
    { const bool branch_taken = ctx.gpr[2] == 0u;
    // nop
      if (branch_taken) {
          goto L_08A2A244;
      }
      goto L_08A2A210;
    }
L_08A2A210:
    rt.memory().aot_store32(ctx.gpr[16] + static_cast<std::uint32_t>(12), 0u);
    ctx.set_gpr(4, ctx.gpr[21] + 0u);
    ctx.set_gpr(31, 0x08A2A220u);
    // nop
    goto L_08A2B858;
L_08A2A220:
    ctx.set_gpr(3, rt.memory().aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(24)));
    ctx.set_gpr(2, 0u + static_cast<std::uint32_t>(3));
    rt.memory().aot_store32(ctx.gpr[3] + static_cast<std::uint32_t>(20), ctx.gpr[2]);
    ctx.set_gpr(4, ctx.gpr[16] + static_cast<std::uint32_t>(24));
    ctx.set_gpr(5, 0u + 0u);
    ctx.set_gpr(31, 0x08A2A23Cu);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0085_entry, 85u, 61u, 0x089584C4u>(ctx, &aot_mem) && ctx.pc == 0x08A2A23Cu) goto L_08A2A23C;
    return;
L_08A2A23C:
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_08A2A278;
      }
      goto L_08A2A244;
    }
L_08A2A244:
    ctx.set_gpr(4, ctx.gpr[21] + 0u);
    ctx.set_gpr(5, ctx.gpr[16] + 0u);
    ctx.set_gpr(31, 0x08A2A254u);
    // nop
    goto L_08A296F0;
L_08A2A254:
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_08A2A278;
      }
      goto L_08A2A25C;
    }
L_08A2A25C:
    ctx.set_gpr(2, 0u + static_cast<std::uint32_t>(5));
    { const bool branch_taken = ctx.gpr[30] != ctx.gpr[2];
    // nop
      if (branch_taken) {
          goto L_08A2A278;
      }
      goto L_08A2A268;
    }
L_08A2A268:
    ctx.set_gpr(4, ctx.gpr[21] + 0u);
    ctx.set_gpr(5, ctx.gpr[16] + 0u);
    ctx.set_gpr(31, 0x08A2A278u);
    // nop
    goto L_08A296F0;
L_08A2A278:
    rt.memory().aot_store32(ctx.gpr[16] + static_cast<std::uint32_t>(32), std::bit_cast<std::uint32_t>(ctx.fpr[20]));
    goto L_08A2A27C;
L_08A2A27C:
    ctx.set_gpr(18, ctx.gpr[18] + static_cast<std::uint32_t>(1));
    goto L_08A2A280;
L_08A2A280:
    ctx.set_gpr(2, rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(100)));
    ctx.set_gpr(2, static_cast<std::int32_t>(ctx.gpr[18]) < static_cast<std::int32_t>(ctx.gpr[2]) ? 1u : 0u);
    { const bool branch_taken = ctx.gpr[2] != 0u;
    // nop
      if (branch_taken) {
          goto L_08A298BC;
      }
      goto L_08A2A290;
    }
L_08A2A290:
    ctx.set_gpr(18, 0u + 0u);
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_08A2A308;
      }
      goto L_08A2A29C;
    }
L_08A2A29C:
    ctx.set_gpr(3, ctx.gpr[18] << 2u);
    ctx.set_gpr(2, rt.memory().aot_load32(ctx.gpr[22] + static_cast<std::uint32_t>(16)));
    ctx.set_gpr(2, ctx.gpr[2] + ctx.gpr[3]);
    ctx.set_gpr(16, rt.memory().aot_load32(ctx.gpr[2] + static_cast<std::uint32_t>(0)));
    ctx.set_gpr(2, rt.memory().aot_load8(ctx.gpr[16] + static_cast<std::uint32_t>(124)));
    { const bool branch_taken = ctx.gpr[2] == 0u;
    // nop
      if (branch_taken) {
          goto L_08A2A304;
      }
      goto L_08A2A2B8;
    }
L_08A2A2B8:
    ctx.set_gpr(2, rt.memory().aot_load8(ctx.gpr[16] + static_cast<std::uint32_t>(126)));
    { const bool branch_taken = ctx.gpr[2] != 0u;
    // nop
      if (branch_taken) {
          goto L_08A2A304;
      }
      goto L_08A2A2C4;
    }
L_08A2A2C4:
    ctx.fpr[20] = std::bit_cast<float>(rt.memory().aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(32)));
    ctx.set_gpr(4, rt.memory().aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(136)));
    ctx.set_gpr(5, rt.memory().aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(140)));
    ctx.set_gpr(31, 0x08A2A2D8u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0006_entry, 6u, 125u, 0x0881C984u>(ctx, &aot_mem) && ctx.pc == 0x08A2A2D8u) goto L_08A2A2D8;
    return;
L_08A2A2D8:
    { const float fs = ctx.fpr[20]; const float ft = ctx.fpr[0]; if ((std::isinf(fs) && ft == 0.0f) || (std::isinf(ft) && fs == 0.0f)) ctx.set_fpr_bits(12, 0x7FC00000u); else ctx.fpr[12] = fs * ft; }
    ctx.set_gpr(31, 0x08A2A2E4u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0006_entry, 6u, 183u, 0x0881CEECu>(ctx, &aot_mem) && ctx.pc == 0x08A2A2E4u) goto L_08A2A2E4;
    return;
L_08A2A2E4:
    ctx.set_gpr(8, rt.memory().aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(128)));
    ctx.set_gpr(5, rt.memory().aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(132)));
    ctx.set_gpr(4, ctx.gpr[8] + ctx.gpr[2]);
    ctx.set_gpr(2, ctx.gpr[4] < ctx.gpr[8] ? 1u : 0u);
    ctx.set_gpr(2, ctx.gpr[2] + ctx.gpr[5]);
    ctx.set_gpr(2, ctx.gpr[2] + ctx.gpr[3]);
    rt.memory().aot_store32(ctx.gpr[16] + static_cast<std::uint32_t>(144), ctx.gpr[4]);
    rt.memory().aot_store32(ctx.gpr[16] + static_cast<std::uint32_t>(148), ctx.gpr[2]);
    goto L_08A2A304;
L_08A2A304:
    ctx.set_gpr(18, ctx.gpr[18] + static_cast<std::uint32_t>(1));
    goto L_08A2A308;
L_08A2A308:
    ctx.set_gpr(2, rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(100)));
    ctx.set_gpr(2, static_cast<std::int32_t>(ctx.gpr[18]) < static_cast<std::int32_t>(ctx.gpr[2]) ? 1u : 0u);
    { const bool branch_taken = ctx.gpr[2] != 0u;
    // nop
      if (branch_taken) {
          goto L_08A2A29C;
      }
      goto L_08A2A318;
    }
L_08A2A318:
    ctx.set_gpr(18, 0u + 0u);
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_08A2A560;
      }
      goto L_08A2A324;
    }
L_08A2A324:
    ctx.set_gpr(3, ctx.gpr[18] << 2u);
    ctx.set_gpr(2, rt.memory().aot_load32(ctx.gpr[22] + static_cast<std::uint32_t>(16)));
    ctx.set_gpr(2, ctx.gpr[2] + ctx.gpr[3]);
    ctx.set_gpr(16, rt.memory().aot_load32(ctx.gpr[2] + static_cast<std::uint32_t>(0)));
    ctx.set_gpr(3, rt.memory().aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(20)));
    ctx.set_gpr(2, 0u + static_cast<std::uint32_t>(3));
    { const bool branch_taken = ctx.gpr[3] != ctx.gpr[2];
    // nop
      if (branch_taken) {
          goto L_08A2A35C;
      }
      goto L_08A2A344;
    }
L_08A2A344:
    ctx.set_gpr(4, ctx.gpr[21] + 0u);
    ctx.set_gpr(5, ctx.gpr[16] + 0u);
    ctx.set_gpr(31, 0x08A2A354u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0138_entry, 138u, 30u, 0x08A2C244u>(ctx, &aot_mem) && ctx.pc == 0x08A2A354u) goto L_08A2A354;
    return;
L_08A2A354:
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_08A2A560;
      }
      goto L_08A2A35C;
    }
L_08A2A35C:
    ctx.set_gpr(2, rt.memory().aot_load8(ctx.gpr[16] + static_cast<std::uint32_t>(124)));
    { const bool branch_taken = ctx.gpr[2] == 0u;
    // nop
      if (branch_taken) {
          goto L_08A2A460;
      }
      goto L_08A2A368;
    }
L_08A2A368:
    ctx.set_gpr(2, rt.memory().aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(8)));
    ctx.set_gpr(17, rt.memory().aot_load32(ctx.gpr[2] + static_cast<std::uint32_t>(48)));
    ctx.set_gpr(23, rt.memory().aot_load32(ctx.gpr[2] + static_cast<std::uint32_t>(52)));
    ctx.set_gpr(4, rt.memory().aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(144)));
    ctx.set_gpr(5, rt.memory().aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(148)));
    ctx.set_gpr(31, 0x08A2A384u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0006_entry, 6u, 125u, 0x0881C984u>(ctx, &aot_mem) && ctx.pc == 0x08A2A384u) goto L_08A2A384;
    return;
L_08A2A384:
    ctx.set_fpr_bits(20, ctx.fpr_bits(0));
    ctx.set_gpr(4, ctx.gpr[17] + 0u);
    ctx.set_gpr(5, ctx.gpr[23] + 0u);
    ctx.set_gpr(31, 0x08A2A398u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0006_entry, 6u, 125u, 0x0881C984u>(ctx, &aot_mem) && ctx.pc == 0x08A2A398u) goto L_08A2A398;
    return;
L_08A2A398:
    ctx.fpr[21] = ctx.fpr[0] / ctx.fpr[20];
    ctx.set_gpr(3, ctx.gpr[20] >> 18u);
    ctx.set_gpr(2, ctx.gpr[19] << 14u);
    ctx.set_gpr(2, ctx.gpr[2] | ctx.gpr[3]);
    { const bool branch_taken = static_cast<std::int32_t>(ctx.gpr[2]) < 0;
    // nop
      if (branch_taken) {
          goto L_08A2A3C0;
      }
      goto L_08A2A3B0;
    }
L_08A2A3B0:
    ctx.fpr[0] = std::bit_cast<float>(ctx.gpr[2]);
    ctx.fpr[20] = static_cast<float>(static_cast<std::int32_t>(ctx.fpr_bits(0)));
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_08A2A3D8;
      }
      goto L_08A2A3C0;
    }
L_08A2A3C0:
    ctx.set_gpr(3, ctx.gpr[2] >> 1u);
    ctx.set_gpr(2, ctx.gpr[2] & 1u);
    ctx.set_gpr(3, ctx.gpr[3] | ctx.gpr[2]);
    ctx.fpr[0] = std::bit_cast<float>(ctx.gpr[3]);
    ctx.fpr[20] = static_cast<float>(static_cast<std::int32_t>(ctx.fpr_bits(0)));
    ctx.fpr[20] = ctx.fpr[20] + ctx.fpr[20];
    goto L_08A2A3D8;
L_08A2A3D8:
    ctx.fpr[0] = std::bit_cast<float>(rt.memory().aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(56)));
    { const float fs = ctx.fpr[20]; const float ft = ctx.fpr[0]; if ((std::isinf(fs) && ft == 0.0f) || (std::isinf(ft) && fs == 0.0f)) ctx.set_fpr_bits(12, 0x7FC00000u); else ctx.fpr[12] = fs * ft; }
    ctx.set_gpr(31, 0x08A2A3E8u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0006_entry, 6u, 183u, 0x0881CEECu>(ctx, &aot_mem) && ctx.pc == 0x08A2A3E8u) goto L_08A2A3E8;
    return;
L_08A2A3E8:
    ctx.set_gpr(3, ctx.gpr[3] << 18u);
    ctx.set_gpr(10, ctx.gpr[2] << 18u);
    ctx.set_gpr(2, ctx.gpr[2] >> 14u);
    ctx.set_gpr(9, ctx.gpr[3] | ctx.gpr[2]);
    ctx.set_gpr(2, rt.memory().aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(64)));
    ctx.set_gpr(8, rt.memory().aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(68)));
    ctx.set_gpr(3, ctx.gpr[10] + ctx.gpr[2]);
    ctx.set_gpr(2, ctx.gpr[3] < ctx.gpr[10] ? 1u : 0u);
    ctx.set_gpr(2, ctx.gpr[2] + ctx.gpr[9]);
    ctx.set_gpr(2, ctx.gpr[2] + ctx.gpr[8]);
    rt.memory().aot_store32(ctx.gpr[16] + static_cast<std::uint32_t>(64), ctx.gpr[3]);
    rt.memory().aot_store32(ctx.gpr[16] + static_cast<std::uint32_t>(68), ctx.gpr[2]);
    { const float fs = ctx.fpr[20]; const float ft = ctx.fpr[21]; if ((std::isinf(fs) && ft == 0.0f) || (std::isinf(ft) && fs == 0.0f)) ctx.set_fpr_bits(12, 0x7FC00000u); else ctx.fpr[12] = fs * ft; }
    ctx.set_gpr(31, 0x08A2A424u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0006_entry, 6u, 183u, 0x0881CEECu>(ctx, &aot_mem) && ctx.pc == 0x08A2A424u) goto L_08A2A424;
    return;
L_08A2A424:
    ctx.set_gpr(8, rt.memory().aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(64)));
    ctx.set_gpr(5, rt.memory().aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(68)));
    ctx.set_gpr(4, ctx.gpr[3] << 18u);
    ctx.set_gpr(3, ctx.gpr[2] << 18u);
    ctx.set_gpr(2, ctx.gpr[2] >> 14u);
    ctx.set_gpr(2, ctx.gpr[4] | ctx.gpr[2]);
    ctx.set_gpr(4, ctx.gpr[8] < ctx.gpr[3] ? 1u : 0u);
    ctx.set_gpr(3, ctx.gpr[8] - ctx.gpr[3]);
    ctx.set_gpr(2, ctx.gpr[5] - ctx.gpr[2]);
    ctx.set_gpr(2, ctx.gpr[2] - ctx.gpr[4]);
    rt.memory().aot_store32(ctx.gpr[16] + static_cast<std::uint32_t>(64), ctx.gpr[3]);
    rt.memory().aot_store32(ctx.gpr[16] + static_cast<std::uint32_t>(68), ctx.gpr[2]);
    rt.memory().aot_store32(ctx.gpr[16] + static_cast<std::uint32_t>(56), std::bit_cast<std::uint32_t>(ctx.fpr[21]));
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_08A2A55C;
      }
      goto L_08A2A460;
    }
L_08A2A460:
    ctx.set_gpr(3, rt.memory().aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(120)));
    { const bool branch_taken = ctx.gpr[3] == 0u;
    // nop
      if (branch_taken) {
          goto L_08A2A55C;
      }
      goto L_08A2A46C;
    }
L_08A2A46C:
    ctx.set_gpr(2, rt.memory().aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(8)));
    ctx.set_gpr(17, rt.memory().aot_load32(ctx.gpr[2] + static_cast<std::uint32_t>(48)));
    ctx.set_gpr(23, rt.memory().aot_load32(ctx.gpr[2] + static_cast<std::uint32_t>(52)));
    ctx.set_gpr(4, rt.memory().aot_load32(ctx.gpr[3] + static_cast<std::uint32_t>(144)));
    ctx.set_gpr(5, rt.memory().aot_load32(ctx.gpr[3] + static_cast<std::uint32_t>(148)));
    ctx.set_gpr(31, 0x08A2A488u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0006_entry, 6u, 125u, 0x0881C984u>(ctx, &aot_mem) && ctx.pc == 0x08A2A488u) goto L_08A2A488;
    return;
L_08A2A488:
    ctx.set_fpr_bits(20, ctx.fpr_bits(0));
    ctx.set_gpr(4, ctx.gpr[17] + 0u);
    ctx.set_gpr(5, ctx.gpr[23] + 0u);
    ctx.set_gpr(31, 0x08A2A49Cu);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0006_entry, 6u, 125u, 0x0881C984u>(ctx, &aot_mem) && ctx.pc == 0x08A2A49Cu) goto L_08A2A49C;
    return;
L_08A2A49C:
    ctx.fpr[21] = ctx.fpr[0] / ctx.fpr[20];
    ctx.set_gpr(3, ctx.gpr[20] >> 18u);
    ctx.set_gpr(2, ctx.gpr[19] << 14u);
    ctx.set_gpr(2, ctx.gpr[2] | ctx.gpr[3]);
    { const bool branch_taken = static_cast<std::int32_t>(ctx.gpr[2]) < 0;
    // nop
      if (branch_taken) {
          goto L_08A2A4C4;
      }
      goto L_08A2A4B4;
    }
L_08A2A4B4:
    ctx.fpr[0] = std::bit_cast<float>(ctx.gpr[2]);
    ctx.fpr[20] = static_cast<float>(static_cast<std::int32_t>(ctx.fpr_bits(0)));
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_08A2A4DC;
      }
      goto L_08A2A4C4;
    }
L_08A2A4C4:
    ctx.set_gpr(3, ctx.gpr[2] >> 1u);
    ctx.set_gpr(2, ctx.gpr[2] & 1u);
    ctx.set_gpr(3, ctx.gpr[3] | ctx.gpr[2]);
    ctx.fpr[0] = std::bit_cast<float>(ctx.gpr[3]);
    ctx.fpr[20] = static_cast<float>(static_cast<std::int32_t>(ctx.fpr_bits(0)));
    ctx.fpr[20] = ctx.fpr[20] + ctx.fpr[20];
    goto L_08A2A4DC;
L_08A2A4DC:
    ctx.fpr[0] = std::bit_cast<float>(rt.memory().aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(56)));
    { const float fs = ctx.fpr[20]; const float ft = ctx.fpr[0]; if ((std::isinf(fs) && ft == 0.0f) || (std::isinf(ft) && fs == 0.0f)) ctx.set_fpr_bits(12, 0x7FC00000u); else ctx.fpr[12] = fs * ft; }
    ctx.set_gpr(31, 0x08A2A4ECu);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0006_entry, 6u, 183u, 0x0881CEECu>(ctx, &aot_mem) && ctx.pc == 0x08A2A4ECu) goto L_08A2A4EC;
    return;
L_08A2A4EC:
    ctx.set_gpr(3, ctx.gpr[3] << 18u);
    ctx.set_gpr(10, ctx.gpr[2] << 18u);
    ctx.set_gpr(2, ctx.gpr[2] >> 14u);
    ctx.set_gpr(9, ctx.gpr[3] | ctx.gpr[2]);
    ctx.set_gpr(2, rt.memory().aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(64)));
    ctx.set_gpr(8, rt.memory().aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(68)));
    ctx.set_gpr(3, ctx.gpr[10] + ctx.gpr[2]);
    ctx.set_gpr(2, ctx.gpr[3] < ctx.gpr[10] ? 1u : 0u);
    ctx.set_gpr(2, ctx.gpr[2] + ctx.gpr[9]);
    ctx.set_gpr(2, ctx.gpr[2] + ctx.gpr[8]);
    rt.memory().aot_store32(ctx.gpr[16] + static_cast<std::uint32_t>(64), ctx.gpr[3]);
    rt.memory().aot_store32(ctx.gpr[16] + static_cast<std::uint32_t>(68), ctx.gpr[2]);
    { const float fs = ctx.fpr[20]; const float ft = ctx.fpr[21]; if ((std::isinf(fs) && ft == 0.0f) || (std::isinf(ft) && fs == 0.0f)) ctx.set_fpr_bits(12, 0x7FC00000u); else ctx.fpr[12] = fs * ft; }
    ctx.set_gpr(31, 0x08A2A528u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0006_entry, 6u, 183u, 0x0881CEECu>(ctx, &aot_mem) && ctx.pc == 0x08A2A528u) goto L_08A2A528;
    return;
L_08A2A528:
    ctx.set_gpr(8, rt.memory().aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(64)));
    ctx.set_gpr(5, rt.memory().aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(68)));
    ctx.set_gpr(4, ctx.gpr[3] << 18u);
    ctx.set_gpr(3, ctx.gpr[2] << 18u);
    ctx.set_gpr(2, ctx.gpr[2] >> 14u);
    ctx.set_gpr(2, ctx.gpr[4] | ctx.gpr[2]);
    ctx.set_gpr(4, ctx.gpr[8] < ctx.gpr[3] ? 1u : 0u);
    ctx.set_gpr(3, ctx.gpr[8] - ctx.gpr[3]);
    ctx.set_gpr(2, ctx.gpr[5] - ctx.gpr[2]);
    ctx.set_gpr(2, ctx.gpr[2] - ctx.gpr[4]);
    rt.memory().aot_store32(ctx.gpr[16] + static_cast<std::uint32_t>(64), ctx.gpr[3]);
    rt.memory().aot_store32(ctx.gpr[16] + static_cast<std::uint32_t>(68), ctx.gpr[2]);
    rt.memory().aot_store32(ctx.gpr[16] + static_cast<std::uint32_t>(56), std::bit_cast<std::uint32_t>(ctx.fpr[21]));
    goto L_08A2A55C;
L_08A2A55C:
    ctx.set_gpr(18, ctx.gpr[18] + static_cast<std::uint32_t>(1));
    goto L_08A2A560;
L_08A2A560:
    ctx.set_gpr(2, rt.memory().aot_load32(ctx.gpr[22] + static_cast<std::uint32_t>(8)));
    ctx.set_gpr(2, static_cast<std::int32_t>(ctx.gpr[18]) < static_cast<std::int32_t>(ctx.gpr[2]) ? 1u : 0u);
    { const bool branch_taken = ctx.gpr[2] != 0u;
    // nop
      if (branch_taken) {
          goto L_08A2A324;
      }
      goto L_08A2A570;
    }
L_08A2A570:
    ctx.set_gpr(4, ctx.gpr[29] + static_cast<std::uint32_t>(120));
    ctx.set_gpr(31, 0x08A2A57Cu);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0085_entry, 85u, 192u, 0x08958D34u>(ctx, &aot_mem) && ctx.pc == 0x08A2A57Cu) goto L_08A2A57C;
    return;
L_08A2A57C:
    ctx.set_gpr(6, rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(120)));
    ctx.set_gpr(5, rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(124)));
    ctx.set_gpr(4, rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(128)));
    ctx.set_gpr(2, rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(132)));
    ctx.set_gpr(3, ctx.gpr[6] < ctx.gpr[4] ? 1u : 0u);
    ctx.set_gpr(4, ctx.gpr[6] - ctx.gpr[4]);
    ctx.set_gpr(2, ctx.gpr[5] - ctx.gpr[2]);
    ctx.set_gpr(6, ctx.gpr[2] - ctx.gpr[3]);
    ctx.set_gpr(2, 2246u << 16u);
    ctx.set_gpr(5, rt.memory().aot_load32(ctx.gpr[2] + static_cast<std::uint32_t>(-22376)));
    ctx.set_gpr(2, 2246u << 16u);
    ctx.set_gpr(3, rt.memory().aot_load32(ctx.gpr[2] + static_cast<std::uint32_t>(-22372)));
    ctx.set_gpr(4, ctx.gpr[5] + ctx.gpr[4]);
    ctx.set_gpr(2, ctx.gpr[4] < ctx.gpr[5] ? 1u : 0u);
    ctx.set_gpr(2, ctx.gpr[2] + ctx.gpr[3]);
    ctx.set_gpr(3, ctx.gpr[2] + ctx.gpr[6]);
    ctx.set_gpr(2, 2246u << 16u);
    rt.memory().aot_store32(ctx.gpr[2] + static_cast<std::uint32_t>(-22376), ctx.gpr[4]);
    ctx.set_gpr(2, 2246u << 16u);
    rt.memory().aot_store32(ctx.gpr[2] + static_cast<std::uint32_t>(-22372), ctx.gpr[3]);
    ctx.set_gpr(2, rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(100)));
    goto L_08A2A5D0;
L_08A2A5D0:
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
    ctx.fpr[21] = std::bit_cast<float>(rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(20)));
    ctx.fpr[20] = std::bit_cast<float>(rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(16)));
    ctx.set_gpr(29, ctx.gpr[29] + static_cast<std::uint32_t>(144));
    jump_target = ctx.gpr[31];
    // nop
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_08A2A60C:
    ctx.set_gpr(29, ctx.gpr[29] + static_cast<std::uint32_t>(-16));
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(12), ctx.gpr[31]);
    ctx.set_gpr(2, rt.memory().aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(16)));
    ctx.set_gpr(3, rt.memory().aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(20)));
    ctx.set_gpr(4, 0u + static_cast<std::uint32_t>(-1));
    { const bool branch_taken = ctx.gpr[3] != ctx.gpr[4];
    // nop
      if (branch_taken) {
          goto L_08A2A630;
      }
      goto L_08A2A628;
    }
L_08A2A628:
    { const bool branch_taken = ctx.gpr[2] == ctx.gpr[4];
    // nop
      if (branch_taken) {
          goto L_08A2A638;
      }
      goto L_08A2A630;
    }
L_08A2A630:
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_08A2A650;
      }
      goto L_08A2A638;
    }
L_08A2A638:
    ctx.set_gpr(2, 2245u << 16u);
    ctx.set_gpr(4, rt.memory().aot_load32(ctx.gpr[2] + static_cast<std::uint32_t>(31436)));
    ctx.set_gpr(25, rt.memory().aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(0)));
    ctx.set_gpr(25, rt.memory().aot_load32(ctx.gpr[25] + static_cast<std::uint32_t>(104)));
    jump_target = ctx.gpr[25];
    ctx.set_gpr(31, 0x08A2A650u);
    // nop
    ctx.pc = jump_target;
    if (rt.invoke_chained_call(ctx, &aot_mem) && ctx.pc == 0x08A2A650u) goto L_08A2A650;
    return;
L_08A2A650:
    ctx.set_gpr(31, rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(12)));
    ctx.set_gpr(29, ctx.gpr[29] + static_cast<std::uint32_t>(16));
    jump_target = ctx.gpr[31];
    // nop
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_08A2A660:
    ctx.set_gpr(29, ctx.gpr[29] + static_cast<std::uint32_t>(-32));
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(28), ctx.gpr[31]);
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(24), ctx.gpr[21]);
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(20), ctx.gpr[20]);
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(16), ctx.gpr[19]);
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(12), ctx.gpr[18]);
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(8), ctx.gpr[17]);
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(4), ctx.gpr[16]);
    ctx.set_gpr(21, ctx.gpr[4] + 0u);
    ctx.set_gpr(19, rt.memory().aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(24)));
    ctx.set_gpr(16, rt.memory().aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(28)));
    ctx.set_gpr(31, 0x08A2A694u);
    // nop
    goto L_08A2A60C;
L_08A2A694:
    ctx.set_gpr(18, ctx.gpr[2] + 0u);
    ctx.set_gpr(17, ctx.gpr[3] + 0u);
    rt.memory().aot_store32(ctx.gpr[21] + static_cast<std::uint32_t>(24), ctx.gpr[18]);
    rt.memory().aot_store32(ctx.gpr[21] + static_cast<std::uint32_t>(28), ctx.gpr[17]);
    ctx.set_gpr(4, ctx.gpr[18] < ctx.gpr[19] ? 1u : 0u);
    ctx.set_gpr(6, ctx.gpr[18] - ctx.gpr[19]);
    ctx.set_gpr(3, ctx.gpr[17] - ctx.gpr[16]);
    ctx.set_gpr(5, ctx.gpr[3] - ctx.gpr[4]);
    ctx.set_gpr(4, rt.memory().aot_load32(ctx.gpr[21] + static_cast<std::uint32_t>(32)));
    ctx.set_gpr(3, rt.memory().aot_load32(ctx.gpr[21] + static_cast<std::uint32_t>(36)));
    ctx.set_gpr(1, static_cast<std::int32_t>(ctx.gpr[5]) < static_cast<std::int32_t>(ctx.gpr[3]) ? 1u : 0u);
    { const bool branch_taken = ctx.gpr[1] != 0u;
    // nop
      if (branch_taken) {
          goto L_08A2A884;
      }
      goto L_08A2A6C8;
    }
L_08A2A6C8:
    ctx.set_gpr(1, static_cast<std::int32_t>(ctx.gpr[3]) < static_cast<std::int32_t>(ctx.gpr[5]) ? 1u : 0u);
    { const bool branch_taken = ctx.gpr[1] != 0u;
    // nop
      if (branch_taken) {
          goto L_08A2A6E0;
      }
      goto L_08A2A6D4;
    }
L_08A2A6D4:
    ctx.set_gpr(1, ctx.gpr[6] < ctx.gpr[4] ? 1u : 0u);
    { const bool branch_taken = ctx.gpr[1] != 0u;
    // nop
      if (branch_taken) {
          goto L_08A2A884;
      }
      goto L_08A2A6E0;
    }
L_08A2A6E0:
    ctx.set_gpr(16, rt.memory().aot_load32(ctx.gpr[21] + static_cast<std::uint32_t>(56)));
    ctx.set_gpr(3, rt.memory().aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(8)));
    ctx.set_gpr(20, ctx.gpr[3] + static_cast<std::uint32_t>(-1));
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_08A2A87C;
      }
      goto L_08A2A6F4;
    }
L_08A2A6F4:
    ctx.set_gpr(4, ctx.gpr[20] << 2u);
    ctx.set_gpr(3, rt.memory().aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(16)));
    ctx.set_gpr(3, ctx.gpr[3] + ctx.gpr[4]);
    ctx.set_gpr(19, rt.memory().aot_load32(ctx.gpr[3] + static_cast<std::uint32_t>(0)));
    ctx.fpr[1] = std::bit_cast<float>(rt.memory().aot_load32(ctx.gpr[19] + static_cast<std::uint32_t>(56)));
    ctx.set_gpr(4, rt.memory().aot_load32(ctx.gpr[19] + static_cast<std::uint32_t>(152)));
    ctx.set_gpr(3, rt.memory().aot_load32(ctx.gpr[19] + static_cast<std::uint32_t>(156)));
    ctx.set_gpr(5, ctx.gpr[18] < ctx.gpr[4] ? 1u : 0u);
    ctx.set_gpr(4, ctx.gpr[18] - ctx.gpr[4]);
    ctx.set_gpr(3, ctx.gpr[17] - ctx.gpr[3]);
    ctx.set_gpr(3, ctx.gpr[3] - ctx.gpr[5]);
    ctx.set_gpr(4, ctx.gpr[4] >> 18u);
    ctx.set_gpr(3, ctx.gpr[3] << 14u);
    ctx.set_gpr(3, ctx.gpr[3] | ctx.gpr[4]);
    { const bool branch_taken = static_cast<std::int32_t>(ctx.gpr[3]) < 0;
    // nop
      if (branch_taken) {
          goto L_08A2A744;
      }
      goto L_08A2A734;
    }
L_08A2A734:
    ctx.fpr[0] = std::bit_cast<float>(ctx.gpr[3]);
    ctx.fpr[0] = static_cast<float>(static_cast<std::int32_t>(ctx.fpr_bits(0)));
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_08A2A75C;
      }
      goto L_08A2A744;
    }
L_08A2A744:
    ctx.set_gpr(4, ctx.gpr[3] >> 1u);
    ctx.set_gpr(3, ctx.gpr[3] & 1u);
    ctx.set_gpr(4, ctx.gpr[4] | ctx.gpr[3]);
    ctx.fpr[0] = std::bit_cast<float>(ctx.gpr[4]);
    ctx.fpr[0] = static_cast<float>(static_cast<std::int32_t>(ctx.fpr_bits(0)));
    ctx.fpr[0] = ctx.fpr[0] + ctx.fpr[0];
    goto L_08A2A75C;
L_08A2A75C:
    { const float fs = ctx.fpr[0]; const float ft = ctx.fpr[1]; if ((std::isinf(fs) && ft == 0.0f) || (std::isinf(ft) && fs == 0.0f)) ctx.set_fpr_bits(1, 0x7FC00000u); else ctx.fpr[1] = fs * ft; }
    ctx.set_gpr(3, 20224u << 16u);
    ctx.fpr[0] = std::bit_cast<float>(ctx.gpr[3]);
    ctx.set_fpu_condition((ctx.fpr[0] <= ctx.fpr[1]));
    // nop
    { const bool branch_taken = ctx.fpu_condition();
    // nop
      if (branch_taken) {
          goto L_08A2A788;
      }
      goto L_08A2A778;
    }
L_08A2A778:
    ctx.set_fpr_bits(0, ctx.fpu_float_to_word(ctx.fpr[1], 1u));
    ctx.set_gpr(5, std::bit_cast<std::uint32_t>(ctx.fpr[0]));
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_08A2A79C;
      }
      goto L_08A2A788;
    }
L_08A2A788:
    ctx.fpr[0] = ctx.fpr[1] - ctx.fpr[0];
    ctx.set_fpr_bits(0, ctx.fpu_float_to_word(ctx.fpr[0], 1u));
    ctx.set_gpr(4, std::bit_cast<std::uint32_t>(ctx.fpr[0]));
    ctx.set_gpr(3, 0u + static_cast<std::uint32_t>(-32768));
    ctx.set_gpr(5, ctx.gpr[4] | ctx.gpr[3]);
    goto L_08A2A79C;
L_08A2A79C:
    ctx.set_gpr(3, static_cast<std::uint32_t>(static_cast<std::int32_t>(ctx.gpr[5]) >> 31u));
    ctx.set_gpr(4, ctx.gpr[3] << 18u);
    ctx.set_gpr(6, ctx.gpr[5] << 18u);
    ctx.set_gpr(3, ctx.gpr[5] >> 14u);
    ctx.set_gpr(7, ctx.gpr[4] | ctx.gpr[3]);
    ctx.set_gpr(5, rt.memory().aot_load32(ctx.gpr[19] + static_cast<std::uint32_t>(88)));
    ctx.set_gpr(3, rt.memory().aot_load32(ctx.gpr[19] + static_cast<std::uint32_t>(92)));
    ctx.set_gpr(4, ctx.gpr[6] < ctx.gpr[5] ? 1u : 0u);
    ctx.set_gpr(6, ctx.gpr[6] - ctx.gpr[5]);
    ctx.set_gpr(3, ctx.gpr[7] - ctx.gpr[3]);
    ctx.set_gpr(5, ctx.gpr[3] - ctx.gpr[4]);
    ctx.set_gpr(4, rt.memory().aot_load32(ctx.gpr[21] + static_cast<std::uint32_t>(40)));
    ctx.set_gpr(3, rt.memory().aot_load32(ctx.gpr[21] + static_cast<std::uint32_t>(44)));
    ctx.set_gpr(1, static_cast<std::int32_t>(ctx.gpr[5]) < static_cast<std::int32_t>(ctx.gpr[3]) ? 1u : 0u);
    { const bool branch_taken = ctx.gpr[1] != 0u;
    // nop
      if (branch_taken) {
          goto L_08A2A878;
      }
      goto L_08A2A7DC;
    }
L_08A2A7DC:
    ctx.set_gpr(1, static_cast<std::int32_t>(ctx.gpr[3]) < static_cast<std::int32_t>(ctx.gpr[5]) ? 1u : 0u);
    { const bool branch_taken = ctx.gpr[1] != 0u;
    // nop
      if (branch_taken) {
          goto L_08A2A7F4;
      }
      goto L_08A2A7E8;
    }
L_08A2A7E8:
    ctx.set_gpr(1, ctx.gpr[4] < ctx.gpr[6] ? 1u : 0u);
    { const bool branch_taken = ctx.gpr[1] == 0u;
    // nop
      if (branch_taken) {
          goto L_08A2A878;
      }
      goto L_08A2A7F4;
    }
L_08A2A7F4:
    ctx.set_gpr(4, rt.memory().aot_load32(ctx.gpr[19] + static_cast<std::uint32_t>(16)));
    ctx.set_gpr(3, 0u + static_cast<std::uint32_t>(5));
    { const bool branch_taken = ctx.gpr[4] != ctx.gpr[3];
    // nop
      if (branch_taken) {
          goto L_08A2A81C;
      }
      goto L_08A2A804;
    }
L_08A2A804:
    ctx.set_gpr(4, ctx.gpr[21] + 0u);
    ctx.set_gpr(5, ctx.gpr[19] + 0u);
    ctx.set_gpr(31, 0x08A2A814u);
    // nop
    goto L_08A296F0;
L_08A2A814:
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_08A2A878;
      }
      goto L_08A2A81C;
    }
L_08A2A81C:
    ctx.set_gpr(3, 0u + static_cast<std::uint32_t>(1));
    { const bool branch_taken = ctx.gpr[4] != ctx.gpr[3];
    // nop
      if (branch_taken) {
          goto L_08A2A878;
      }
      goto L_08A2A828;
    }
L_08A2A828:
    ctx.set_gpr(2, rt.memory().aot_load32(ctx.gpr[19] + static_cast<std::uint32_t>(24)));
    { const bool branch_taken = ctx.gpr[2] == 0u;
    // nop
      if (branch_taken) {
          goto L_08A2A868;
      }
      goto L_08A2A834;
    }
L_08A2A834:
    rt.memory().aot_store32(ctx.gpr[19] + static_cast<std::uint32_t>(12), 0u);
    ctx.set_gpr(4, ctx.gpr[21] + 0u);
    ctx.set_gpr(31, 0x08A2A844u);
    // nop
    goto L_08A2B858;
L_08A2A844:
    ctx.set_gpr(3, rt.memory().aot_load32(ctx.gpr[19] + static_cast<std::uint32_t>(24)));
    ctx.set_gpr(2, 0u + static_cast<std::uint32_t>(3));
    rt.memory().aot_store32(ctx.gpr[3] + static_cast<std::uint32_t>(20), ctx.gpr[2]);
    ctx.set_gpr(4, ctx.gpr[19] + static_cast<std::uint32_t>(24));
    ctx.set_gpr(5, 0u + 0u);
    ctx.set_gpr(31, 0x08A2A860u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0085_entry, 85u, 61u, 0x089584C4u>(ctx, &aot_mem) && ctx.pc == 0x08A2A860u) goto L_08A2A860;
    return;
L_08A2A860:
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_08A2A878;
      }
      goto L_08A2A868;
    }
L_08A2A868:
    ctx.set_gpr(4, ctx.gpr[21] + 0u);
    ctx.set_gpr(5, ctx.gpr[19] + 0u);
    ctx.set_gpr(31, 0x08A2A878u);
    // nop
    goto L_08A296F0;
L_08A2A878:
    ctx.set_gpr(20, ctx.gpr[20] + static_cast<std::uint32_t>(-1));
    goto L_08A2A87C;
L_08A2A87C:
    { const bool branch_taken = static_cast<std::int32_t>(ctx.gpr[20]) >= 0;
    // nop
      if (branch_taken) {
          goto L_08A2A6F4;
      }
      goto L_08A2A884;
    }
L_08A2A884:
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
L_08A2A8AC:
    ctx.set_gpr(29, ctx.gpr[29] + static_cast<std::uint32_t>(-16));
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(12), ctx.gpr[31]);
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(8), ctx.gpr[16]);
    ctx.set_gpr(16, ctx.gpr[5] + 0u);
    ctx.set_gpr(8, ctx.gpr[6] + 0u);
    ctx.set_gpr(3, 2246u << 16u);
    ctx.set_gpr(10, rt.memory().aot_load32(ctx.gpr[3] + static_cast<std::uint32_t>(-22384)));
    ctx.set_gpr(3, 2246u << 16u);
    ctx.set_gpr(4, rt.memory().aot_load32(ctx.gpr[3] + static_cast<std::uint32_t>(-22380)));
    ctx.set_gpr(9, ctx.gpr[10] + static_cast<std::uint32_t>(1));
    ctx.set_gpr(3, ctx.gpr[9] < ctx.gpr[10] ? 1u : 0u);
    ctx.set_gpr(4, ctx.gpr[3] + ctx.gpr[4]);
    ctx.set_gpr(3, 2246u << 16u);
    rt.memory().aot_store32(ctx.gpr[3] + static_cast<std::uint32_t>(-22384), ctx.gpr[9]);
    ctx.set_gpr(3, 2246u << 16u);
    rt.memory().aot_store32(ctx.gpr[3] + static_cast<std::uint32_t>(-22380), ctx.gpr[4]);
    ctx.set_gpr(4, rt.memory().aot_load32(ctx.gpr[5] + static_cast<std::uint32_t>(16)));
    { const bool branch_taken = ctx.gpr[4] == 0u;
    // nop
      if (branch_taken) {
          goto L_08A2A9C0;
      }
      goto L_08A2A8F8;
    }
L_08A2A8F8:
    ctx.set_gpr(2, rt.memory().aot_load8(ctx.gpr[16] + static_cast<std::uint32_t>(52)));
    { const bool branch_taken = ctx.gpr[2] != 0u;
    // nop
      if (branch_taken) {
          goto L_08A2A928;
      }
      goto L_08A2A904;
    }
L_08A2A904:
    ctx.set_gpr(5, ctx.gpr[16] + static_cast<std::uint32_t>(20));
    ctx.set_gpr(8, ctx.gpr[16] + static_cast<std::uint32_t>(8));
    ctx.set_gpr(9, 0u + 0u);
    ctx.set_gpr(25, rt.memory().aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(0)));
    ctx.set_gpr(25, rt.memory().aot_load32(ctx.gpr[25] + static_cast<std::uint32_t>(104)));
    jump_target = ctx.gpr[25];
    ctx.set_gpr(31, 0x08A2A920u);
    // nop
    ctx.pc = jump_target;
    if (rt.invoke_chained_call(ctx, &aot_mem) && ctx.pc == 0x08A2A920u) goto L_08A2A920;
    return;
L_08A2A920:
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_08A2A978;
      }
      goto L_08A2A928;
    }
L_08A2A928:
    ctx.set_gpr(5, ctx.gpr[16] + static_cast<std::uint32_t>(20));
    ctx.set_gpr(6, ctx.gpr[16] + static_cast<std::uint32_t>(36));
    ctx.set_gpr(9, ctx.gpr[7] + 0u);
    ctx.set_gpr(10, ctx.gpr[16] + static_cast<std::uint32_t>(8));
    ctx.set_gpr(11, 0u + 0u);
    ctx.set_gpr(25, rt.memory().aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(0)));
    ctx.set_gpr(25, rt.memory().aot_load32(ctx.gpr[25] + static_cast<std::uint32_t>(112)));
    jump_target = ctx.gpr[25];
    ctx.set_gpr(31, 0x08A2A94Cu);
    // nop
    ctx.pc = jump_target;
    if (rt.invoke_chained_call(ctx, &aot_mem) && ctx.pc == 0x08A2A94Cu) goto L_08A2A94C;
    return;
L_08A2A94C:
    ctx.set_gpr(3, 2246u << 16u);
    ctx.set_gpr(6, rt.memory().aot_load32(ctx.gpr[3] + static_cast<std::uint32_t>(-22400)));
    ctx.set_gpr(3, 2246u << 16u);
    ctx.set_gpr(4, rt.memory().aot_load32(ctx.gpr[3] + static_cast<std::uint32_t>(-22396)));
    ctx.set_gpr(5, ctx.gpr[6] + static_cast<std::uint32_t>(1));
    ctx.set_gpr(3, ctx.gpr[5] < ctx.gpr[6] ? 1u : 0u);
    ctx.set_gpr(4, ctx.gpr[3] + ctx.gpr[4]);
    ctx.set_gpr(3, 2246u << 16u);
    rt.memory().aot_store32(ctx.gpr[3] + static_cast<std::uint32_t>(-22400), ctx.gpr[5]);
    ctx.set_gpr(3, 2246u << 16u);
    rt.memory().aot_store32(ctx.gpr[3] + static_cast<std::uint32_t>(-22396), ctx.gpr[4]);
    goto L_08A2A978;
L_08A2A978:
    ctx.set_gpr(4, rt.memory().aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(56)));
    ctx.set_gpr(3, 0u + static_cast<std::uint32_t>(-1));
    { const bool branch_taken = ctx.gpr[4] == ctx.gpr[3];
    // nop
      if (branch_taken) {
          goto L_08A2A9C0;
      }
      goto L_08A2A988;
    }
L_08A2A988:
    ctx.fpr[0] = std::bit_cast<float>(rt.memory().aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(20)));
    ctx.set_fpr_bits(0, ctx.fpr_bits(0) ^ 0x80000000u);
    rt.memory().aot_store32(ctx.gpr[16] + static_cast<std::uint32_t>(20), std::bit_cast<std::uint32_t>(ctx.fpr[0]));
    ctx.fpr[0] = std::bit_cast<float>(rt.memory().aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(24)));
    ctx.set_fpr_bits(0, ctx.fpr_bits(0) ^ 0x80000000u);
    rt.memory().aot_store32(ctx.gpr[16] + static_cast<std::uint32_t>(24), std::bit_cast<std::uint32_t>(ctx.fpr[0]));
    ctx.fpr[0] = std::bit_cast<float>(rt.memory().aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(28)));
    ctx.set_fpr_bits(0, ctx.fpr_bits(0) ^ 0x80000000u);
    rt.memory().aot_store32(ctx.gpr[16] + static_cast<std::uint32_t>(28), std::bit_cast<std::uint32_t>(ctx.fpr[0]));
    ctx.set_gpr(3, ctx.gpr[4] << 2u);
    ctx.set_gpr(3, ctx.gpr[3] + ctx.gpr[16]);
    ctx.fpr[0] = std::bit_cast<float>(rt.memory().aot_load32(ctx.gpr[3] + static_cast<std::uint32_t>(20)));
    ctx.set_fpr_bits(0, ctx.fpr_bits(0) ^ 0x80000000u);
    rt.memory().aot_store32(ctx.gpr[3] + static_cast<std::uint32_t>(20), std::bit_cast<std::uint32_t>(ctx.fpr[0]));
    goto L_08A2A9C0;
L_08A2A9C0:
    ctx.set_gpr(31, rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(12)));
    ctx.set_gpr(16, rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(8)));
    ctx.set_gpr(29, ctx.gpr[29] + static_cast<std::uint32_t>(16));
    jump_target = ctx.gpr[31];
    // nop
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_08A2A9D4:
    ctx.set_gpr(29, ctx.gpr[29] + static_cast<std::uint32_t>(-80));
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(12), ctx.gpr[31]);
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(8), ctx.gpr[18]);
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(4), ctx.gpr[17]);
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(0), ctx.gpr[16]);
    ctx.set_gpr(18, ctx.gpr[5] + 0u);
    ctx.set_gpr(17, ctx.gpr[6] + 0u);
    ctx.set_gpr(5, ctx.gpr[29] + static_cast<std::uint32_t>(16));
    ctx.set_gpr(6, ctx.gpr[8] + 0u);
    ctx.set_gpr(7, ctx.gpr[9] + 0u);
    ctx.set_gpr(8, ctx.gpr[10] + 0u);
    ctx.set_gpr(9, ctx.gpr[11] + 0u);
    ctx.set_gpr(25, rt.memory().aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(0)));
    ctx.set_gpr(25, rt.memory().aot_load32(ctx.gpr[25] + static_cast<std::uint32_t>(96)));
    jump_target = ctx.gpr[25];
    ctx.set_gpr(31, 0x08A2AA14u);
    // nop
    ctx.pc = jump_target;
    if (rt.invoke_chained_call(ctx, &aot_mem) && ctx.pc == 0x08A2AA14u) goto L_08A2AA14;
    return;
L_08A2AA14:
    ctx.set_gpr(16, ctx.gpr[2] & 255u);
    ctx.set_gpr(4, ctx.gpr[18] + 0u);
    ctx.set_gpr(5, ctx.gpr[29] + static_cast<std::uint32_t>(16));
    ctx.set_gpr(31, 0x08A2AA28u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0127_entry, 127u, 161u, 0x08A0226Cu>(ctx, &aot_mem) && ctx.pc == 0x08A2AA28u) goto L_08A2AA28;
    return;
L_08A2AA28:
    ctx.set_gpr(4, ctx.gpr[29] + static_cast<std::uint32_t>(16));
    ctx.set_gpr(5, ctx.gpr[17] + 0u);
    ctx.set_gpr(31, 0x08A2AA38u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0126_entry, 126u, 750u, 0x089FFD4Cu>(ctx, &aot_mem) && ctx.pc == 0x08A2AA38u) goto L_08A2AA38;
    return;
L_08A2AA38:
    ctx.set_gpr(2, ctx.gpr[16] + 0u);
    ctx.set_gpr(31, rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(12)));
    ctx.set_gpr(18, rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(8)));
    ctx.set_gpr(17, rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(4)));
    ctx.set_gpr(16, rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(0)));
    ctx.set_gpr(29, ctx.gpr[29] + static_cast<std::uint32_t>(80));
    jump_target = ctx.gpr[31];
    // nop
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_08A2AA58:
    ctx.set_gpr(29, ctx.gpr[29] + static_cast<std::uint32_t>(-16));
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(12), ctx.gpr[31]);
    ctx.set_gpr(25, rt.memory().aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(0)));
    ctx.set_gpr(25, rt.memory().aot_load32(ctx.gpr[25] + static_cast<std::uint32_t>(92)));
    jump_target = ctx.gpr[25];
    ctx.set_gpr(31, 0x08A2AA70u);
    // nop
    ctx.pc = jump_target;
    if (rt.invoke_chained_call(ctx, &aot_mem) && ctx.pc == 0x08A2AA70u) goto L_08A2AA70;
    return;
L_08A2AA70:
    ctx.set_gpr(31, rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(12)));
    ctx.set_gpr(29, ctx.gpr[29] + static_cast<std::uint32_t>(16));
    jump_target = ctx.gpr[31];
    // nop
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_08A2AA80:
    ctx.set_gpr(29, ctx.gpr[29] + static_cast<std::uint32_t>(-80));
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(12), ctx.gpr[31]);
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(8), ctx.gpr[17]);
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(4), ctx.gpr[16]);
    ctx.set_gpr(17, ctx.gpr[5] + 0u);
    ctx.set_gpr(5, ctx.gpr[29] + static_cast<std::uint32_t>(16));
    ctx.set_gpr(25, rt.memory().aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(0)));
    ctx.set_gpr(25, rt.memory().aot_load32(ctx.gpr[25] + static_cast<std::uint32_t>(96)));
    jump_target = ctx.gpr[25];
    ctx.set_gpr(31, 0x08A2AAA8u);
    // nop
    ctx.pc = jump_target;
    if (rt.invoke_chained_call(ctx, &aot_mem) && ctx.pc == 0x08A2AAA8u) goto L_08A2AAA8;
    return;
L_08A2AAA8:
    ctx.set_gpr(16, ctx.gpr[2] & 255u);
    ctx.set_gpr(4, ctx.gpr[17] + 0u);
    ctx.set_gpr(5, ctx.gpr[29] + static_cast<std::uint32_t>(16));
    ctx.set_gpr(31, 0x08A2AABCu);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0127_entry, 127u, 161u, 0x08A0226Cu>(ctx, &aot_mem) && ctx.pc == 0x08A2AABCu) goto L_08A2AABC;
    return;
L_08A2AABC:
    ctx.set_gpr(2, ctx.gpr[16] + 0u);
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
L_08A2AAD8:
    ctx.set_gpr(29, ctx.gpr[29] + static_cast<std::uint32_t>(-144));
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(60), ctx.gpr[31]);
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(56), ctx.gpr[23]);
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(52), ctx.gpr[22]);
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(48), ctx.gpr[21]);
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(44), ctx.gpr[20]);
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(40), ctx.gpr[19]);
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(36), ctx.gpr[18]);
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(32), ctx.gpr[17]);
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(28), ctx.gpr[16]);
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(20), std::bit_cast<std::uint32_t>(ctx.fpr[20]));
    ctx.set_gpr(16, ctx.gpr[4] + 0u);
    ctx.set_gpr(4, ctx.gpr[5] + 0u);
    ctx.set_gpr(25, rt.memory().aot_load32(ctx.gpr[5] + static_cast<std::uint32_t>(0)));
    ctx.set_gpr(25, rt.memory().aot_load32(ctx.gpr[25] + static_cast<std::uint32_t>(104)));
    jump_target = ctx.gpr[25];
    ctx.set_gpr(31, 0x08A2AB1Cu);
    // nop
    ctx.pc = jump_target;
    if (rt.invoke_chained_call(ctx, &aot_mem) && ctx.pc == 0x08A2AB1Cu) goto L_08A2AB1C;
    return;
L_08A2AB1C:
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(88), ctx.gpr[2]);
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(92), ctx.gpr[3]);
    ctx.set_gpr(4, rt.memory().aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(12)));
    ctx.set_gpr(25, rt.memory().aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(0)));
    ctx.set_gpr(25, rt.memory().aot_load32(ctx.gpr[25] + static_cast<std::uint32_t>(96)));
    jump_target = ctx.gpr[25];
    ctx.set_gpr(31, 0x08A2AB38u);
    // nop
    ctx.pc = jump_target;
    if (rt.invoke_chained_call(ctx, &aot_mem) && ctx.pc == 0x08A2AB38u) goto L_08A2AB38;
    return;
L_08A2AB38:
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(84), ctx.gpr[2]);
    ctx.set_gpr(2, rt.memory().aot_load8(ctx.gpr[16] + static_cast<std::uint32_t>(80)));
    { const bool branch_taken = ctx.gpr[2] == 0u;
    // nop
      if (branch_taken) {
          goto L_08A2AB74;
      }
      goto L_08A2AB48;
    }
L_08A2AB48:
    ctx.set_gpr(4, rt.memory().aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(72)));
    ctx.set_gpr(3, rt.memory().aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(76)));
    ctx.set_gpr(2, rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(92)));
    { const bool branch_taken = ctx.gpr[2] != ctx.gpr[3];
    // nop
      if (branch_taken) {
          goto L_08A2AB74;
      }
      goto L_08A2AB5C;
    }
L_08A2AB5C:
    ctx.set_gpr(2, rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(88)));
    { const bool branch_taken = ctx.gpr[2] != ctx.gpr[4];
    // nop
      if (branch_taken) {
          goto L_08A2AB74;
      }
      goto L_08A2AB68;
    }
L_08A2AB68:
    ctx.set_gpr(2, rt.memory().aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(64)));
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_08A2B064;
      }
      goto L_08A2AB74;
    }
L_08A2AB74:
    ctx.set_gpr(2, rt.memory().aot_load8(ctx.gpr[28] + static_cast<std::uint32_t>(-32155)));
    { const bool branch_taken = ctx.gpr[2] == 0u;
    // nop
      if (branch_taken) {
          goto L_08A2AB8C;
      }
      goto L_08A2AB80;
    }
L_08A2AB80:
    ctx.set_gpr(4, ctx.gpr[16] + 0u);
    ctx.set_gpr(31, 0x08A2AB8Cu);
    // nop
    goto L_08A2A660;
L_08A2AB8C:
    ctx.set_gpr(4, ctx.gpr[16] + 0u);
    ctx.set_gpr(6, rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(88)));
    ctx.set_gpr(7, rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(92)));
    ctx.set_gpr(31, 0x08A2ABA0u);
    // nop
    goto L_08A297E4;
L_08A2ABA0:
    { const bool branch_taken = ctx.gpr[2] != 0u;
    // nop
      if (branch_taken) {
          goto L_08A2ABB4;
      }
      goto L_08A2ABA8;
    }
L_08A2ABA8:
    ctx.set_gpr(2, rt.memory().aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(64)));
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_08A2B064;
      }
      goto L_08A2ABB4;
    }
L_08A2ABB4:
    ctx.set_gpr(2, rt.memory().aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(56)));
    ctx.set_gpr(4, rt.memory().aot_load32(ctx.gpr[2] + static_cast<std::uint32_t>(8)));
    ctx.set_gpr(6, static_cast<std::uint32_t>(static_cast<std::int32_t>(ctx.gpr[4]) >> 31u));
    ctx.set_gpr(2, 2246u << 16u);
    ctx.set_gpr(5, rt.memory().aot_load32(ctx.gpr[2] + static_cast<std::uint32_t>(-22392)));
    ctx.set_gpr(2, 2246u << 16u);
    ctx.set_gpr(3, rt.memory().aot_load32(ctx.gpr[2] + static_cast<std::uint32_t>(-22388)));
    ctx.set_gpr(4, ctx.gpr[5] + ctx.gpr[4]);
    ctx.set_gpr(2, ctx.gpr[4] < ctx.gpr[5] ? 1u : 0u);
    ctx.set_gpr(2, ctx.gpr[2] + ctx.gpr[3]);
    ctx.set_gpr(3, ctx.gpr[2] + ctx.gpr[6]);
    ctx.set_gpr(2, 2246u << 16u);
    rt.memory().aot_store32(ctx.gpr[2] + static_cast<std::uint32_t>(-22392), ctx.gpr[4]);
    ctx.set_gpr(2, 2246u << 16u);
    rt.memory().aot_store32(ctx.gpr[2] + static_cast<std::uint32_t>(-22388), ctx.gpr[3]);
    ctx.set_gpr(4, ctx.gpr[29] + static_cast<std::uint32_t>(104));
    ctx.set_gpr(31, 0x08A2ABFCu);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0085_entry, 85u, 192u, 0x08958D34u>(ctx, &aot_mem) && ctx.pc == 0x08A2ABFCu) goto L_08A2ABFC;
    return;
L_08A2ABFC:
    ctx.set_gpr(2, rt.memory().aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(56)));
    ctx.set_gpr(3, rt.memory().aot_load32(ctx.gpr[2] + static_cast<std::uint32_t>(8)));
    ctx.set_gpr(2, 0u + static_cast<std::uint32_t>(1));
    { const bool branch_taken = ctx.gpr[3] != ctx.gpr[2];
    // nop
      if (branch_taken) {
          goto L_08A2AD5C;
      }
      goto L_08A2AC10;
    }
L_08A2AC10:
    ctx.set_gpr(4, 0u + 0u);
    goto L_08A2AC14;
L_08A2AC14:
    ctx.set_gpr(2, rt.memory().aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(48)));
    ctx.set_gpr(3, ctx.gpr[4] << 2u);
    ctx.set_gpr(2, rt.memory().aot_load32(ctx.gpr[2] + static_cast<std::uint32_t>(16)));
    ctx.set_gpr(2, ctx.gpr[2] + ctx.gpr[3]);
    ctx.set_gpr(3, rt.memory().aot_load32(ctx.gpr[2] + static_cast<std::uint32_t>(0)));
    ctx.set_gpr(4, ctx.gpr[4] + static_cast<std::uint32_t>(1));
    ctx.set_gpr(2, rt.memory().aot_load32(ctx.gpr[3] + static_cast<std::uint32_t>(8)));
    { const bool branch_taken = ctx.gpr[2] == 0u;
    // nop
      if (branch_taken) {
          goto L_08A2AC14;
      }
      goto L_08A2AC38;
    }
L_08A2AC38:
    ctx.set_gpr(2, rt.memory().aot_load32(ctx.gpr[3] + static_cast<std::uint32_t>(16)));
    ctx.set_gpr(2, rt.memory().aot_load32(ctx.gpr[2] + static_cast<std::uint32_t>(0)));
    ctx.set_gpr(18, rt.memory().aot_load32(ctx.gpr[2] + static_cast<std::uint32_t>(12)));
    ctx.set_gpr(3, rt.memory().aot_load32(ctx.gpr[18] + static_cast<std::uint32_t>(20)));
    ctx.set_gpr(19, rt.memory().aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(64)));
    ctx.set_gpr(2, rt.memory().aot_load8(ctx.gpr[18] + static_cast<std::uint32_t>(28)));
    { const bool branch_taken = ctx.gpr[2] != 0u;
    // nop
      if (branch_taken) {
          goto L_08A2AC60;
      }
      goto L_08A2AC58;
    }
L_08A2AC58:
    { const bool branch_taken = ctx.gpr[3] != 0u;
    // nop
      if (branch_taken) {
          goto L_08A2AD50;
      }
      goto L_08A2AC60;
    }
L_08A2AC60:
    ctx.set_gpr(4, ctx.gpr[18] + 0u);
    ctx.set_gpr(25, rt.memory().aot_load32(ctx.gpr[18] + static_cast<std::uint32_t>(0)));
    ctx.set_gpr(25, rt.memory().aot_load32(ctx.gpr[25] + static_cast<std::uint32_t>(100)));
    jump_target = ctx.gpr[25];
    ctx.set_gpr(31, 0x08A2AC74u);
    // nop
    ctx.pc = jump_target;
    if (rt.invoke_chained_call(ctx, &aot_mem) && ctx.pc == 0x08A2AC74u) goto L_08A2AC74;
    return;
L_08A2AC74:
    ctx.set_gpr(21, 0u + 0u);
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_08A2AD2C;
      }
      goto L_08A2AC80;
    }
L_08A2AC80:
    ctx.set_gpr(2, rt.memory().aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(48)));
    ctx.set_gpr(3, ctx.gpr[21] << 2u);
    ctx.set_gpr(2, rt.memory().aot_load32(ctx.gpr[2] + static_cast<std::uint32_t>(16)));
    ctx.set_gpr(2, ctx.gpr[2] + ctx.gpr[3]);
    ctx.set_gpr(3, rt.memory().aot_load32(ctx.gpr[2] + static_cast<std::uint32_t>(0)));
    ctx.set_gpr(2, rt.memory().aot_load32(ctx.gpr[3] + static_cast<std::uint32_t>(8)));
    { const bool branch_taken = static_cast<std::int32_t>(ctx.gpr[2]) <= 0;
    // nop
      if (branch_taken) {
          goto L_08A2AD24;
      }
      goto L_08A2ACA0;
    }
L_08A2ACA0:
    ctx.set_gpr(2, rt.memory().aot_load32(ctx.gpr[3] + static_cast<std::uint32_t>(16)));
    ctx.set_gpr(17, rt.memory().aot_load32(ctx.gpr[2] + static_cast<std::uint32_t>(0)));
    ctx.set_gpr(4, ctx.gpr[16] + 0u);
    ctx.set_gpr(5, ctx.gpr[17] + 0u);
    ctx.set_gpr(6, rt.memory().aot_load32(ctx.gpr[18] + static_cast<std::uint32_t>(40)));
    ctx.set_gpr(7, rt.memory().aot_load32(ctx.gpr[18] + static_cast<std::uint32_t>(44)));
    ctx.set_gpr(31, 0x08A2ACC0u);
    // nop
    goto L_08A2A8AC;
L_08A2ACC0:
    ctx.set_gpr(4, ctx.gpr[17] + static_cast<std::uint32_t>(20));
    ctx.set_gpr(5, ctx.gpr[19] + 0u);
    ctx.set_gpr(31, 0x08A2ACD0u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0127_entry, 127u, 176u, 0x08A0256Cu>(ctx, &aot_mem) && ctx.pc == 0x08A2ACD0u) goto L_08A2ACD0;
    return;
L_08A2ACD0:
    ctx.set_gpr(5, ctx.gpr[17] + static_cast<std::uint32_t>(20));
    ctx.set_gpr(4, ctx.gpr[29] + static_cast<std::uint32_t>(128));
    ctx.set_gpr(31, 0x08A2ACE0u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0017_entry, 17u, 222u, 0x08848F0Cu>(ctx, &aot_mem) && ctx.pc == 0x08A2ACE0u) goto L_08A2ACE0;
    return;
L_08A2ACE0:
    ctx.set_gpr(3, ctx.gpr[21] << 4u);
    ctx.set_gpr(2, rt.memory().aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(60)));
    ctx.set_gpr(2, ctx.gpr[2] + ctx.gpr[3]);
    ctx.fpr[0] = std::bit_cast<float>(rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(128)));
    rt.memory().aot_store32(ctx.gpr[2] + static_cast<std::uint32_t>(0), std::bit_cast<std::uint32_t>(ctx.fpr[0]));
    ctx.fpr[0] = std::bit_cast<float>(rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(132)));
    rt.memory().aot_store32(ctx.gpr[2] + static_cast<std::uint32_t>(4), std::bit_cast<std::uint32_t>(ctx.fpr[0]));
    ctx.fpr[0] = std::bit_cast<float>(rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(136)));
    rt.memory().aot_store32(ctx.gpr[2] + static_cast<std::uint32_t>(8), std::bit_cast<std::uint32_t>(ctx.fpr[0]));
    ctx.fpr[0] = std::bit_cast<float>(rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(140)));
    rt.memory().aot_store32(ctx.gpr[2] + static_cast<std::uint32_t>(12), std::bit_cast<std::uint32_t>(ctx.fpr[0]));
    ctx.fpr[0] = std::bit_cast<float>(rt.memory().aot_load32(ctx.gpr[17] + static_cast<std::uint32_t>(36)));
    rt.memory().aot_store32(ctx.gpr[19] + static_cast<std::uint32_t>(48), std::bit_cast<std::uint32_t>(ctx.fpr[0]));
    ctx.fpr[0] = std::bit_cast<float>(rt.memory().aot_load32(ctx.gpr[17] + static_cast<std::uint32_t>(40)));
    rt.memory().aot_store32(ctx.gpr[19] + static_cast<std::uint32_t>(52), std::bit_cast<std::uint32_t>(ctx.fpr[0]));
    ctx.fpr[0] = std::bit_cast<float>(rt.memory().aot_load32(ctx.gpr[17] + static_cast<std::uint32_t>(44)));
    rt.memory().aot_store32(ctx.gpr[19] + static_cast<std::uint32_t>(56), std::bit_cast<std::uint32_t>(ctx.fpr[0]));
    goto L_08A2AD24;
L_08A2AD24:
    ctx.set_gpr(21, ctx.gpr[21] + static_cast<std::uint32_t>(1));
    ctx.set_gpr(19, ctx.gpr[19] + static_cast<std::uint32_t>(64));
    goto L_08A2AD2C;
L_08A2AD2C:
    ctx.set_gpr(2, rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(84)));
    ctx.set_gpr(2, static_cast<std::int32_t>(ctx.gpr[21]) < static_cast<std::int32_t>(ctx.gpr[2]) ? 1u : 0u);
    { const bool branch_taken = ctx.gpr[2] != 0u;
    // nop
      if (branch_taken) {
          goto L_08A2AC80;
      }
      goto L_08A2AD3C;
    }
L_08A2AD3C:
    ctx.set_gpr(4, ctx.gpr[18] + 0u);
    ctx.set_gpr(25, rt.memory().aot_load32(ctx.gpr[18] + static_cast<std::uint32_t>(0)));
    ctx.set_gpr(25, rt.memory().aot_load32(ctx.gpr[25] + static_cast<std::uint32_t>(104)));
    jump_target = ctx.gpr[25];
    ctx.set_gpr(31, 0x08A2AD50u);
    // nop
    ctx.pc = jump_target;
    if (rt.invoke_chained_call(ctx, &aot_mem) && ctx.pc == 0x08A2AD50u) goto L_08A2AD50;
    return;
L_08A2AD50:
    rt.memory().aot_store8(ctx.gpr[18] + static_cast<std::uint32_t>(28), static_cast<std::uint8_t>(0u));
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_08A2AFD4;
      }
      goto L_08A2AD5C;
    }
L_08A2AD5C:
    ctx.set_gpr(21, 0u + 0u);
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_08A2AFC4;
      }
      goto L_08A2AD68;
    }
L_08A2AD68:
    ctx.set_gpr(2, rt.memory().aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(48)));
    ctx.set_gpr(3, ctx.gpr[21] << 2u);
    ctx.set_gpr(2, rt.memory().aot_load32(ctx.gpr[2] + static_cast<std::uint32_t>(16)));
    ctx.set_gpr(2, ctx.gpr[2] + ctx.gpr[3]);
    ctx.set_gpr(22, rt.memory().aot_load32(ctx.gpr[2] + static_cast<std::uint32_t>(0)));
    ctx.set_gpr(2, rt.memory().aot_load32(ctx.gpr[22] + static_cast<std::uint32_t>(8)));
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(80), ctx.gpr[2]);
    { const bool branch_taken = static_cast<std::int32_t>(ctx.gpr[2]) <= 0;
    // nop
      if (branch_taken) {
          goto L_08A2AFC0;
      }
      goto L_08A2AD8C;
    }
L_08A2AD8C:
    ctx.set_gpr(2, rt.memory().aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(52)));
    ctx.set_gpr(2, rt.memory().aot_load32(ctx.gpr[2] + static_cast<std::uint32_t>(16)));
    ctx.set_gpr(2, ctx.gpr[2] + ctx.gpr[3]);
    ctx.set_gpr(20, rt.memory().aot_load32(ctx.gpr[2] + static_cast<std::uint32_t>(0)));
    ctx.set_gpr(3, ctx.gpr[20] << 2u);
    ctx.set_gpr(2, rt.memory().aot_load32(ctx.gpr[22] + static_cast<std::uint32_t>(16)));
    ctx.set_gpr(2, ctx.gpr[2] + ctx.gpr[3]);
    ctx.set_gpr(18, rt.memory().aot_load32(ctx.gpr[2] + static_cast<std::uint32_t>(0)));
    ctx.set_gpr(17, rt.memory().aot_load32(ctx.gpr[18] + static_cast<std::uint32_t>(12)));
    ctx.set_gpr(19, rt.memory().aot_load32(ctx.gpr[17] + static_cast<std::uint32_t>(20)));
    rt.memory().aot_store8(ctx.gpr[17] + static_cast<std::uint32_t>(28), static_cast<std::uint8_t>(0u));
    ctx.set_gpr(4, ctx.gpr[17] + 0u);
    ctx.set_gpr(25, rt.memory().aot_load32(ctx.gpr[17] + static_cast<std::uint32_t>(0)));
    ctx.set_gpr(25, rt.memory().aot_load32(ctx.gpr[25] + static_cast<std::uint32_t>(100)));
    jump_target = ctx.gpr[25];
    ctx.set_gpr(31, 0x08A2ADCCu);
    // nop
    ctx.pc = jump_target;
    if (rt.invoke_chained_call(ctx, &aot_mem) && ctx.pc == 0x08A2ADCCu) goto L_08A2ADCC;
    return;
L_08A2ADCC:
    { const bool branch_taken = ctx.gpr[19] != 0u;
    // nop
      if (branch_taken) {
          goto L_08A2ADEC;
      }
      goto L_08A2ADD4;
    }
L_08A2ADD4:
    ctx.set_gpr(4, ctx.gpr[16] + 0u);
    ctx.set_gpr(5, ctx.gpr[18] + 0u);
    ctx.set_gpr(6, rt.memory().aot_load32(ctx.gpr[17] + static_cast<std::uint32_t>(40)));
    ctx.set_gpr(7, rt.memory().aot_load32(ctx.gpr[17] + static_cast<std::uint32_t>(44)));
    ctx.set_gpr(31, 0x08A2ADECu);
    // nop
    goto L_08A2A8AC;
L_08A2ADEC:
    ctx.set_gpr(5, ctx.gpr[18] + static_cast<std::uint32_t>(20));
    ctx.set_gpr(4, ctx.gpr[29] + static_cast<std::uint32_t>(112));
    ctx.set_gpr(31, 0x08A2ADFCu);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0017_entry, 17u, 222u, 0x08848F0Cu>(ctx, &aot_mem) && ctx.pc == 0x08A2ADFCu) goto L_08A2ADFC;
    return;
L_08A2ADFC:
    ctx.set_gpr(2, ctx.gpr[21] << 4u);
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(76), ctx.gpr[2]);
    ctx.set_gpr(3, rt.memory().aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(60)));
    ctx.set_gpr(2, ctx.gpr[3] + ctx.gpr[2]);
    ctx.fpr[0] = std::bit_cast<float>(rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(112)));
    rt.memory().aot_store32(ctx.gpr[2] + static_cast<std::uint32_t>(0), std::bit_cast<std::uint32_t>(ctx.fpr[0]));
    ctx.fpr[0] = std::bit_cast<float>(rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(116)));
    rt.memory().aot_store32(ctx.gpr[2] + static_cast<std::uint32_t>(4), std::bit_cast<std::uint32_t>(ctx.fpr[0]));
    ctx.fpr[0] = std::bit_cast<float>(rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(120)));
    rt.memory().aot_store32(ctx.gpr[2] + static_cast<std::uint32_t>(8), std::bit_cast<std::uint32_t>(ctx.fpr[0]));
    ctx.fpr[0] = std::bit_cast<float>(rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(124)));
    rt.memory().aot_store32(ctx.gpr[2] + static_cast<std::uint32_t>(12), std::bit_cast<std::uint32_t>(ctx.fpr[0]));
    ctx.set_gpr(3, ctx.gpr[21] << 6u);
    ctx.set_gpr(2, rt.memory().aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(64)));
    ctx.set_gpr(19, ctx.gpr[2] + ctx.gpr[3]);
    ctx.set_gpr(2, ctx.gpr[19] + static_cast<std::uint32_t>(48));
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(72), ctx.gpr[2]);
    ctx.set_gpr(2, ctx.gpr[19] + static_cast<std::uint32_t>(52));
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(68), ctx.gpr[2]);
    ctx.set_gpr(2, ctx.gpr[19] + static_cast<std::uint32_t>(56));
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(64), ctx.gpr[2]);
    ctx.fpr[0] = std::bit_cast<float>(rt.memory().aot_load32(ctx.gpr[18] + static_cast<std::uint32_t>(36)));
    rt.memory().aot_store32(ctx.gpr[19] + static_cast<std::uint32_t>(48), std::bit_cast<std::uint32_t>(ctx.fpr[0]));
    ctx.fpr[0] = std::bit_cast<float>(rt.memory().aot_load32(ctx.gpr[18] + static_cast<std::uint32_t>(40)));
    rt.memory().aot_store32(ctx.gpr[19] + static_cast<std::uint32_t>(52), std::bit_cast<std::uint32_t>(ctx.fpr[0]));
    ctx.fpr[0] = std::bit_cast<float>(rt.memory().aot_load32(ctx.gpr[18] + static_cast<std::uint32_t>(44)));
    rt.memory().aot_store32(ctx.gpr[19] + static_cast<std::uint32_t>(56), std::bit_cast<std::uint32_t>(ctx.fpr[0]));
    ctx.set_gpr(4, ctx.gpr[17] + 0u);
    ctx.set_gpr(25, rt.memory().aot_load32(ctx.gpr[17] + static_cast<std::uint32_t>(0)));
    ctx.set_gpr(25, rt.memory().aot_load32(ctx.gpr[25] + static_cast<std::uint32_t>(104)));
    jump_target = ctx.gpr[25];
    ctx.set_gpr(31, 0x08A2AE7Cu);
    // nop
    ctx.pc = jump_target;
    if (rt.invoke_chained_call(ctx, &aot_mem) && ctx.pc == 0x08A2AE7Cu) goto L_08A2AE7C;
    return;
L_08A2AE7C:
    ctx.set_gpr(20, ctx.gpr[20] + static_cast<std::uint32_t>(1));
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_08A2AF98;
      }
      goto L_08A2AE88;
    }
L_08A2AE88:
    ctx.set_gpr(3, ctx.gpr[20] << 2u);
    ctx.set_gpr(2, rt.memory().aot_load32(ctx.gpr[22] + static_cast<std::uint32_t>(16)));
    ctx.set_gpr(2, ctx.gpr[2] + ctx.gpr[3]);
    ctx.set_gpr(18, rt.memory().aot_load32(ctx.gpr[2] + static_cast<std::uint32_t>(0)));
    ctx.set_gpr(17, rt.memory().aot_load32(ctx.gpr[18] + static_cast<std::uint32_t>(12)));
    ctx.set_gpr(23, rt.memory().aot_load32(ctx.gpr[17] + static_cast<std::uint32_t>(20)));
    ctx.set_gpr(4, ctx.gpr[17] + 0u);
    ctx.set_gpr(25, rt.memory().aot_load32(ctx.gpr[17] + static_cast<std::uint32_t>(0)));
    ctx.set_gpr(25, rt.memory().aot_load32(ctx.gpr[25] + static_cast<std::uint32_t>(100)));
    jump_target = ctx.gpr[25];
    ctx.set_gpr(31, 0x08A2AEB4u);
    // nop
    ctx.pc = jump_target;
    if (rt.invoke_chained_call(ctx, &aot_mem) && ctx.pc == 0x08A2AEB4u) goto L_08A2AEB4;
    return;
L_08A2AEB4:
    { const bool branch_taken = ctx.gpr[23] == 0u;
    // nop
      if (branch_taken) {
          goto L_08A2AED4;
      }
      goto L_08A2AEBC;
    }
L_08A2AEBC:
    ctx.set_gpr(2, rt.memory().aot_load8(ctx.gpr[17] + static_cast<std::uint32_t>(28)));
    { const bool branch_taken = ctx.gpr[2] == 0u;
    // nop
      if (branch_taken) {
          goto L_08A2AEEC;
      }
      goto L_08A2AEC8;
    }
L_08A2AEC8:
    ctx.set_gpr(2, 0u + static_cast<std::uint32_t>(1));
    { const bool branch_taken = ctx.gpr[23] != ctx.gpr[2];
    // nop
      if (branch_taken) {
          goto L_08A2AEEC;
      }
      goto L_08A2AED4;
    }
L_08A2AED4:
    ctx.set_gpr(4, ctx.gpr[16] + 0u);
    ctx.set_gpr(5, ctx.gpr[18] + 0u);
    ctx.set_gpr(6, rt.memory().aot_load32(ctx.gpr[17] + static_cast<std::uint32_t>(40)));
    ctx.set_gpr(7, rt.memory().aot_load32(ctx.gpr[17] + static_cast<std::uint32_t>(44)));
    ctx.set_gpr(31, 0x08A2AEECu);
    // nop
    goto L_08A2A8AC;
L_08A2AEEC:
    ctx.set_gpr(2, 0u + static_cast<std::uint32_t>(2));
    { const bool branch_taken = ctx.gpr[23] == ctx.gpr[2];
    // nop
      if (branch_taken) {
          goto L_08A2AF7C;
      }
      goto L_08A2AEF8;
    }
L_08A2AEF8:
    ctx.fpr[20] = std::bit_cast<float>(rt.memory().aot_load32(ctx.gpr[17] + static_cast<std::uint32_t>(32)));
    ctx.set_gpr(3, ctx.gpr[21] << 4u);
    ctx.set_gpr(2, rt.memory().aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(60)));
    ctx.set_gpr(4, ctx.gpr[2] + ctx.gpr[3]);
    ctx.set_fpr_bits(12, ctx.fpr_bits(20));
    ctx.set_gpr(5, ctx.gpr[4] + 0u);
    ctx.set_gpr(6, ctx.gpr[18] + static_cast<std::uint32_t>(20));
    ctx.set_gpr(31, 0x08A2AF1Cu);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0127_entry, 127u, 196u, 0x08A0275Cu>(ctx, &aot_mem) && ctx.pc == 0x08A2AF1Cu) goto L_08A2AF1C;
    return;
L_08A2AF1C:
    ctx.set_gpr(2, 16256u << 16u);
    ctx.fpr[0] = std::bit_cast<float>(ctx.gpr[2]);
    ctx.fpr[2] = ctx.fpr[0] - ctx.fpr[20];
    ctx.set_gpr(2, rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(72)));
    ctx.fpr[0] = std::bit_cast<float>(rt.memory().aot_load32(ctx.gpr[2] + static_cast<std::uint32_t>(0)));
    { const float fs = ctx.fpr[0]; const float ft = ctx.fpr[2]; if ((std::isinf(fs) && ft == 0.0f) || (std::isinf(ft) && fs == 0.0f)) ctx.set_fpr_bits(1, 0x7FC00000u); else ctx.fpr[1] = fs * ft; }
    ctx.fpr[0] = std::bit_cast<float>(rt.memory().aot_load32(ctx.gpr[18] + static_cast<std::uint32_t>(36)));
    { const float fs = ctx.fpr[20]; const float ft = ctx.fpr[0]; if ((std::isinf(fs) && ft == 0.0f) || (std::isinf(ft) && fs == 0.0f)) ctx.set_fpr_bits(0, 0x7FC00000u); else ctx.fpr[0] = fs * ft; }
    ctx.fpr[0] = ctx.fpr[1] + ctx.fpr[0];
    rt.memory().aot_store32(ctx.gpr[2] + static_cast<std::uint32_t>(0), std::bit_cast<std::uint32_t>(ctx.fpr[0]));
    ctx.set_gpr(2, rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(68)));
    ctx.fpr[0] = std::bit_cast<float>(rt.memory().aot_load32(ctx.gpr[2] + static_cast<std::uint32_t>(0)));
    { const float fs = ctx.fpr[0]; const float ft = ctx.fpr[2]; if ((std::isinf(fs) && ft == 0.0f) || (std::isinf(ft) && fs == 0.0f)) ctx.set_fpr_bits(1, 0x7FC00000u); else ctx.fpr[1] = fs * ft; }
    ctx.fpr[0] = std::bit_cast<float>(rt.memory().aot_load32(ctx.gpr[18] + static_cast<std::uint32_t>(40)));
    { const float fs = ctx.fpr[20]; const float ft = ctx.fpr[0]; if ((std::isinf(fs) && ft == 0.0f) || (std::isinf(ft) && fs == 0.0f)) ctx.set_fpr_bits(0, 0x7FC00000u); else ctx.fpr[0] = fs * ft; }
    ctx.fpr[0] = ctx.fpr[1] + ctx.fpr[0];
    rt.memory().aot_store32(ctx.gpr[2] + static_cast<std::uint32_t>(0), std::bit_cast<std::uint32_t>(ctx.fpr[0]));
    ctx.set_gpr(2, rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(64)));
    ctx.fpr[0] = std::bit_cast<float>(rt.memory().aot_load32(ctx.gpr[2] + static_cast<std::uint32_t>(0)));
    { const float fs = ctx.fpr[0]; const float ft = ctx.fpr[2]; if ((std::isinf(fs) && ft == 0.0f) || (std::isinf(ft) && fs == 0.0f)) ctx.set_fpr_bits(1, 0x7FC00000u); else ctx.fpr[1] = fs * ft; }
    ctx.fpr[0] = std::bit_cast<float>(rt.memory().aot_load32(ctx.gpr[18] + static_cast<std::uint32_t>(44)));
    { const float fs = ctx.fpr[20]; const float ft = ctx.fpr[0]; if ((std::isinf(fs) && ft == 0.0f) || (std::isinf(ft) && fs == 0.0f)) ctx.set_fpr_bits(0, 0x7FC00000u); else ctx.fpr[0] = fs * ft; }
    ctx.fpr[0] = ctx.fpr[1] + ctx.fpr[0];
    rt.memory().aot_store32(ctx.gpr[2] + static_cast<std::uint32_t>(0), std::bit_cast<std::uint32_t>(ctx.fpr[0]));
    goto L_08A2AF7C;
L_08A2AF7C:
    rt.memory().aot_store8(ctx.gpr[17] + static_cast<std::uint32_t>(28), static_cast<std::uint8_t>(0u));
    ctx.set_gpr(4, ctx.gpr[17] + 0u);
    ctx.set_gpr(25, rt.memory().aot_load32(ctx.gpr[17] + static_cast<std::uint32_t>(0)));
    ctx.set_gpr(25, rt.memory().aot_load32(ctx.gpr[25] + static_cast<std::uint32_t>(104)));
    jump_target = ctx.gpr[25];
    ctx.set_gpr(31, 0x08A2AF94u);
    // nop
    ctx.pc = jump_target;
    if (rt.invoke_chained_call(ctx, &aot_mem) && ctx.pc == 0x08A2AF94u) goto L_08A2AF94;
    return;
L_08A2AF94:
    ctx.set_gpr(20, ctx.gpr[20] + static_cast<std::uint32_t>(1));
    goto L_08A2AF98;
L_08A2AF98:
    ctx.set_gpr(2, rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(80)));
    ctx.set_gpr(2, static_cast<std::int32_t>(ctx.gpr[20]) < static_cast<std::int32_t>(ctx.gpr[2]) ? 1u : 0u);
    { const bool branch_taken = ctx.gpr[2] != 0u;
    // nop
      if (branch_taken) {
          goto L_08A2AE88;
      }
      goto L_08A2AFA8;
    }
L_08A2AFA8:
    ctx.set_gpr(3, rt.memory().aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(60)));
    ctx.set_gpr(2, rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(76)));
    ctx.set_gpr(4, ctx.gpr[3] + ctx.gpr[2]);
    ctx.set_gpr(5, ctx.gpr[19] + 0u);
    ctx.set_gpr(31, 0x08A2AFC0u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0127_entry, 127u, 176u, 0x08A0256Cu>(ctx, &aot_mem) && ctx.pc == 0x08A2AFC0u) goto L_08A2AFC0;
    return;
L_08A2AFC0:
    ctx.set_gpr(21, ctx.gpr[21] + static_cast<std::uint32_t>(1));
    goto L_08A2AFC4;
L_08A2AFC4:
    ctx.set_gpr(2, rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(84)));
    ctx.set_gpr(2, static_cast<std::int32_t>(ctx.gpr[21]) < static_cast<std::int32_t>(ctx.gpr[2]) ? 1u : 0u);
    { const bool branch_taken = ctx.gpr[2] != 0u;
    // nop
      if (branch_taken) {
          goto L_08A2AD68;
      }
      goto L_08A2AFD4;
    }
L_08A2AFD4:
    ctx.set_gpr(2, rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(88)));
    rt.memory().aot_store32(ctx.gpr[16] + static_cast<std::uint32_t>(72), ctx.gpr[2]);
    ctx.set_gpr(2, rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(92)));
    rt.memory().aot_store32(ctx.gpr[16] + static_cast<std::uint32_t>(76), ctx.gpr[2]);
    ctx.set_gpr(2, 0u + static_cast<std::uint32_t>(1));
    rt.memory().aot_store8(ctx.gpr[16] + static_cast<std::uint32_t>(80), static_cast<std::uint8_t>(ctx.gpr[2]));
    ctx.set_gpr(4, ctx.gpr[16] + 0u);
    ctx.set_gpr(5, 0u + 0u);
    ctx.set_gpr(25, rt.memory().aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(0)));
    ctx.set_gpr(25, rt.memory().aot_load32(ctx.gpr[25] + static_cast<std::uint32_t>(104)));
    jump_target = ctx.gpr[25];
    ctx.set_gpr(31, 0x08A2B004u);
    // nop
    ctx.pc = jump_target;
    if (rt.invoke_chained_call(ctx, &aot_mem) && ctx.pc == 0x08A2B004u) goto L_08A2B004;
    return;
L_08A2B004:
    ctx.set_gpr(4, ctx.gpr[29] + static_cast<std::uint32_t>(96));
    ctx.set_gpr(31, 0x08A2B010u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0085_entry, 85u, 192u, 0x08958D34u>(ctx, &aot_mem) && ctx.pc == 0x08A2B010u) goto L_08A2B010;
    return;
L_08A2B010:
    ctx.set_gpr(6, rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(96)));
    ctx.set_gpr(5, rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(100)));
    ctx.set_gpr(4, rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(104)));
    ctx.set_gpr(2, rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(108)));
    ctx.set_gpr(3, ctx.gpr[6] < ctx.gpr[4] ? 1u : 0u);
    ctx.set_gpr(4, ctx.gpr[6] - ctx.gpr[4]);
    ctx.set_gpr(2, ctx.gpr[5] - ctx.gpr[2]);
    ctx.set_gpr(6, ctx.gpr[2] - ctx.gpr[3]);
    ctx.set_gpr(2, 2246u << 16u);
    ctx.set_gpr(5, rt.memory().aot_load32(ctx.gpr[2] + static_cast<std::uint32_t>(-22368)));
    ctx.set_gpr(2, 2246u << 16u);
    ctx.set_gpr(3, rt.memory().aot_load32(ctx.gpr[2] + static_cast<std::uint32_t>(-22364)));
    ctx.set_gpr(4, ctx.gpr[5] + ctx.gpr[4]);
    ctx.set_gpr(2, ctx.gpr[4] < ctx.gpr[5] ? 1u : 0u);
    ctx.set_gpr(2, ctx.gpr[2] + ctx.gpr[3]);
    ctx.set_gpr(3, ctx.gpr[2] + ctx.gpr[6]);
    ctx.set_gpr(2, 2246u << 16u);
    rt.memory().aot_store32(ctx.gpr[2] + static_cast<std::uint32_t>(-22368), ctx.gpr[4]);
    ctx.set_gpr(2, 2246u << 16u);
    rt.memory().aot_store32(ctx.gpr[2] + static_cast<std::uint32_t>(-22364), ctx.gpr[3]);
    ctx.set_gpr(2, rt.memory().aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(64)));
    goto L_08A2B064;
L_08A2B064:
    ctx.set_gpr(31, rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(60)));
    ctx.set_gpr(23, rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(56)));
    ctx.set_gpr(22, rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(52)));
    ctx.set_gpr(21, rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(48)));
    ctx.set_gpr(20, rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(44)));
    ctx.set_gpr(19, rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(40)));
    ctx.set_gpr(18, rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(36)));
    ctx.set_gpr(17, rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(32)));
    ctx.set_gpr(16, rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(28)));
    ctx.fpr[20] = std::bit_cast<float>(rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(20)));
    ctx.set_gpr(29, ctx.gpr[29] + static_cast<std::uint32_t>(144));
    jump_target = ctx.gpr[31];
    // nop
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_08A2B098:
    rt.memory().aot_store8(ctx.gpr[4] + static_cast<std::uint32_t>(81), static_cast<std::uint8_t>(ctx.gpr[5]));
    jump_target = ctx.gpr[31];
    // nop
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_08A2B0A4:
    ctx.set_gpr(29, ctx.gpr[29] + static_cast<std::uint32_t>(-16));
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(12), ctx.gpr[31]);
    ctx.set_gpr(2, rt.memory().aot_load8(ctx.gpr[4] + static_cast<std::uint32_t>(24)));
    { const bool branch_taken = ctx.gpr[2] == 0u;
    // nop
      if (branch_taken) {
          goto L_08A2B0C8;
      }
      goto L_08A2B0B8;
    }
L_08A2B0B8:
    ctx.set_gpr(2, rt.memory().aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(16)));
    ctx.set_gpr(3, rt.memory().aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(20)));
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_08A2B0E0;
      }
      goto L_08A2B0C8;
    }
L_08A2B0C8:
    ctx.set_gpr(2, 2245u << 16u);
    ctx.set_gpr(4, rt.memory().aot_load32(ctx.gpr[2] + static_cast<std::uint32_t>(31436)));
    ctx.set_gpr(25, rt.memory().aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(0)));
    ctx.set_gpr(25, rt.memory().aot_load32(ctx.gpr[25] + static_cast<std::uint32_t>(104)));
    jump_target = ctx.gpr[25];
    ctx.set_gpr(31, 0x08A2B0E0u);
    // nop
    ctx.pc = jump_target;
    if (rt.invoke_chained_call(ctx, &aot_mem) && ctx.pc == 0x08A2B0E0u) goto L_08A2B0E0;
    return;
L_08A2B0E0:
    ctx.set_gpr(31, rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(12)));
    ctx.set_gpr(29, ctx.gpr[29] + static_cast<std::uint32_t>(16));
    jump_target = ctx.gpr[31];
    // nop
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_08A2B0F0:
    ctx.set_gpr(29, ctx.gpr[29] + static_cast<std::uint32_t>(-48));
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
    ctx.set_gpr(31, 0x08A2B124u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0081_entry, 81u, 41u, 0x0894835Cu>(ctx, &aot_mem) && ctx.pc == 0x08A2B124u) goto L_08A2B124;
    return;
L_08A2B124:
    ctx.set_gpr(3, 2246u << 16u);
    ctx.set_gpr(4, rt.memory().aot_load32(ctx.gpr[3] + static_cast<std::uint32_t>(-22700)));
    ctx.set_gpr(3, rt.memory().aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(8)));
    ctx.set_gpr(3, ctx.gpr[21] + ctx.gpr[3]);
    ctx.set_gpr(5, rt.memory().aot_load32(ctx.gpr[3] + static_cast<std::uint32_t>(0)));
    { const bool branch_taken = ctx.gpr[5] == 0u;
    // nop
      if (branch_taken) {
          goto L_08A2B170;
      }
      goto L_08A2B140;
    }
L_08A2B140:
    ctx.set_gpr(3, rt.memory().aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(56)));
    ctx.set_gpr(16, rt.memory().aot_load16(ctx.gpr[3] + static_cast<std::uint32_t>(20)));
    ctx.set_gpr(4, ctx.gpr[2] + 0u);
    ctx.set_gpr(25, rt.memory().aot_load32(ctx.gpr[2] + static_cast<std::uint32_t>(0)));
    ctx.set_gpr(25, rt.memory().aot_load32(ctx.gpr[25] + static_cast<std::uint32_t>(372)));
    jump_target = ctx.gpr[25];
    ctx.set_gpr(31, 0x08A2B15Cu);
    // nop
    ctx.pc = jump_target;
    if (rt.invoke_chained_call(ctx, &aot_mem) && ctx.pc == 0x08A2B15Cu) goto L_08A2B15C;
    return;
L_08A2B15C:
    ctx.set_gpr(3, ctx.gpr[16] & 65535u);
    { const std::uint32_t dividend = ctx.gpr[2]; const std::uint32_t divisor = ctx.gpr[3]; if (divisor == 0u) { ctx.lo = 0xFFFFFFFFu; ctx.hi = dividend; } else { ctx.lo = dividend / divisor; ctx.hi = dividend % divisor; } }
    ctx.set_gpr(17, ctx.lo);
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_08A2B174;
      }
      goto L_08A2B170;
    }
L_08A2B170:
    ctx.set_gpr(17, 0u + 0u);
    goto L_08A2B174;
L_08A2B174:
    ctx.set_gpr(4, ctx.gpr[21] + 0u);
    ctx.set_gpr(31, 0x08A2B180u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0081_entry, 81u, 41u, 0x0894835Cu>(ctx, &aot_mem) && ctx.pc == 0x08A2B180u) goto L_08A2B180;
    return;
L_08A2B180:
    ctx.set_gpr(3, 2246u << 16u);
    ctx.set_gpr(4, rt.memory().aot_load32(ctx.gpr[3] + static_cast<std::uint32_t>(-22696)));
    ctx.set_gpr(3, rt.memory().aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(8)));
    ctx.set_gpr(3, ctx.gpr[21] + ctx.gpr[3]);
    ctx.set_gpr(5, rt.memory().aot_load32(ctx.gpr[3] + static_cast<std::uint32_t>(0)));
    { const bool branch_taken = ctx.gpr[5] == 0u;
    // nop
      if (branch_taken) {
          goto L_08A2B1CC;
      }
      goto L_08A2B19C;
    }
L_08A2B19C:
    ctx.set_gpr(3, rt.memory().aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(56)));
    ctx.set_gpr(16, rt.memory().aot_load16(ctx.gpr[3] + static_cast<std::uint32_t>(20)));
    ctx.set_gpr(4, ctx.gpr[2] + 0u);
    ctx.set_gpr(25, rt.memory().aot_load32(ctx.gpr[2] + static_cast<std::uint32_t>(0)));
    ctx.set_gpr(25, rt.memory().aot_load32(ctx.gpr[25] + static_cast<std::uint32_t>(372)));
    jump_target = ctx.gpr[25];
    ctx.set_gpr(31, 0x08A2B1B8u);
    // nop
    ctx.pc = jump_target;
    if (rt.invoke_chained_call(ctx, &aot_mem) && ctx.pc == 0x08A2B1B8u) goto L_08A2B1B8;
    return;
L_08A2B1B8:
    ctx.set_gpr(3, ctx.gpr[16] & 65535u);
    { const std::uint32_t dividend = ctx.gpr[2]; const std::uint32_t divisor = ctx.gpr[3]; if (divisor == 0u) { ctx.lo = 0xFFFFFFFFu; ctx.hi = dividend; } else { ctx.lo = dividend / divisor; ctx.hi = dividend % divisor; } }
    ctx.set_gpr(22, ctx.lo);
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_08A2B1D0;
      }
      goto L_08A2B1CC;
    }
L_08A2B1CC:
    ctx.set_gpr(22, 0u + 0u);
    goto L_08A2B1D0;
L_08A2B1D0:
    ctx.set_gpr(4, ctx.gpr[20] + 0u);
    ctx.set_gpr(25, rt.memory().aot_load32(ctx.gpr[20] + static_cast<std::uint32_t>(0)));
    ctx.set_gpr(25, rt.memory().aot_load32(ctx.gpr[25] + static_cast<std::uint32_t>(96)));
    jump_target = ctx.gpr[25];
    ctx.set_gpr(31, 0x08A2B1E4u);
    // nop
    ctx.pc = jump_target;
    if (rt.invoke_chained_call(ctx, &aot_mem) && ctx.pc == 0x08A2B1E4u) goto L_08A2B1E4;
    return;
L_08A2B1E4:
    ctx.set_gpr(19, ctx.gpr[2] + 0u);
    ctx.set_gpr(16, rt.memory().aot_load32(ctx.gpr[20] + static_cast<std::uint32_t>(24)));
    ctx.set_gpr(4, rt.memory().aot_load32(ctx.gpr[21] + static_cast<std::uint32_t>(48)));
    ctx.set_gpr(18, rt.memory().aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(8)));
    ctx.set_gpr(1, static_cast<std::int32_t>(ctx.gpr[17]) < static_cast<std::int32_t>(ctx.gpr[19]) ? 1u : 0u);
    { const bool branch_taken = ctx.gpr[1] == 0u;
    // nop
      if (branch_taken) {
          goto L_08A2B280;
      }
      goto L_08A2B200;
    }
L_08A2B200:
    ctx.set_gpr(2, rt.memory().aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(8)));
    ctx.set_gpr(2, static_cast<std::int32_t>(ctx.gpr[19]) < static_cast<std::int32_t>(ctx.gpr[2]) ? 1u : 0u);
    { const bool branch_taken = ctx.gpr[2] != 0u;
    // nop
      if (branch_taken) {
          goto L_08A2B220;
      }
      goto L_08A2B210;
    }
L_08A2B210:
    ctx.set_gpr(5, ctx.gpr[19] + 0u);
    ctx.set_gpr(6, 0u + static_cast<std::uint32_t>(4));
    ctx.set_gpr(31, 0x08A2B220u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0066_entry, 66u, 785u, 0x0890FA2Cu>(ctx, &aot_mem) && ctx.pc == 0x08A2B220u) goto L_08A2B220;
    return;
L_08A2B220:
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_08A2B26C;
      }
      goto L_08A2B228;
    }
L_08A2B228:
    ctx.set_gpr(4, ctx.gpr[21] + 0u);
    ctx.set_gpr(31, 0x08A2B234u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0081_entry, 81u, 41u, 0x0894835Cu>(ctx, &aot_mem) && ctx.pc == 0x08A2B234u) goto L_08A2B234;
    return;
L_08A2B234:
    ctx.set_gpr(4, ctx.gpr[2] + 0u);
    ctx.set_gpr(31, 0x08A2B240u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0136_entry, 136u, 118u, 0x08A24A68u>(ctx, &aot_mem) && ctx.pc == 0x08A2B240u) goto L_08A2B240;
    return;
L_08A2B240:
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(44), ctx.gpr[2]);
    ctx.set_gpr(4, rt.memory().aot_load32(ctx.gpr[21] + static_cast<std::uint32_t>(48)));
    ctx.set_gpr(5, ctx.gpr[2] + 0u);
    ctx.set_gpr(31, 0x08A2B254u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0081_entry, 81u, 299u, 0x089494E0u>(ctx, &aot_mem) && ctx.pc == 0x08A2B254u) goto L_08A2B254;
    return;
L_08A2B254:
    ctx.set_gpr(4, rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(44)));
    { const bool branch_taken = ctx.gpr[4] == 0u;
    // nop
      if (branch_taken) {
          goto L_08A2B268;
      }
      goto L_08A2B260;
    }
L_08A2B260:
    ctx.set_gpr(31, 0x08A2B268u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0014_entry, 14u, 257u, 0x0883D454u>(ctx, &aot_mem) && ctx.pc == 0x08A2B268u) goto L_08A2B268;
    return;
L_08A2B268:
    ctx.set_gpr(18, ctx.gpr[18] + static_cast<std::uint32_t>(1));
    goto L_08A2B26C;
L_08A2B26C:
    ctx.set_gpr(2, static_cast<std::int32_t>(ctx.gpr[18]) < static_cast<std::int32_t>(ctx.gpr[19]) ? 1u : 0u);
    { const bool branch_taken = ctx.gpr[2] != 0u;
    // nop
      if (branch_taken) {
          goto L_08A2B228;
      }
      goto L_08A2B278;
    }
L_08A2B278:
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_08A2B2C0;
      }
      goto L_08A2B280;
    }
L_08A2B280:
    ctx.set_gpr(1, static_cast<std::int32_t>(ctx.gpr[19]) < static_cast<std::int32_t>(ctx.gpr[18]) ? 1u : 0u);
    { const bool branch_taken = ctx.gpr[1] == 0u;
    // nop
      if (branch_taken) {
          goto L_08A2B2C0;
      }
      goto L_08A2B28C;
    }
L_08A2B28C:
    ctx.set_gpr(6, ctx.gpr[17] - ctx.gpr[19]);
    ctx.set_gpr(5, ctx.gpr[19] + 0u);
    ctx.set_gpr(31, 0x08A2B29Cu);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0081_entry, 81u, 328u, 0x089496FCu>(ctx, &aot_mem) && ctx.pc == 0x08A2B29Cu) goto L_08A2B29C;
    return;
L_08A2B29C:
    ctx.set_gpr(4, rt.memory().aot_load32(ctx.gpr[21] + static_cast<std::uint32_t>(48)));
    ctx.set_gpr(2, rt.memory().aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(8)));
    ctx.set_gpr(2, static_cast<std::int32_t>(ctx.gpr[19]) < static_cast<std::int32_t>(ctx.gpr[2]) ? 1u : 0u);
    { const bool branch_taken = ctx.gpr[2] != 0u;
    // nop
      if (branch_taken) {
          goto L_08A2B2C0;
      }
      goto L_08A2B2B0;
    }
L_08A2B2B0:
    ctx.set_gpr(5, ctx.gpr[19] + 0u);
    ctx.set_gpr(6, 0u + static_cast<std::uint32_t>(4));
    ctx.set_gpr(31, 0x08A2B2C0u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0066_entry, 66u, 785u, 0x0890FA2Cu>(ctx, &aot_mem) && ctx.pc == 0x08A2B2C0u) goto L_08A2B2C0;
    return;
L_08A2B2C0:
    ctx.set_gpr(4, rt.memory().aot_load32(ctx.gpr[21] + static_cast<std::uint32_t>(52)));
    { const bool branch_taken = static_cast<std::int32_t>(ctx.gpr[19]) < 0;
    // nop
      if (branch_taken) {
          goto L_08A2B2F8;
      }
      goto L_08A2B2CC;
    }
L_08A2B2CC:
    ctx.set_gpr(2, rt.memory().aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(12)));
    ctx.set_gpr(1, static_cast<std::int32_t>(ctx.gpr[2]) < static_cast<std::int32_t>(ctx.gpr[19]) ? 1u : 0u);
    { const bool branch_taken = ctx.gpr[1] != 0u;
    // nop
      if (branch_taken) {
          goto L_08A2B2E8;
      }
      goto L_08A2B2DC;
    }
L_08A2B2DC:
    rt.memory().aot_store32(ctx.gpr[4] + static_cast<std::uint32_t>(8), ctx.gpr[19]);
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_08A2B2F8;
      }
      goto L_08A2B2E8;
    }
L_08A2B2E8:
    ctx.set_gpr(5, ctx.gpr[19] + 0u);
    ctx.set_gpr(6, 0u + static_cast<std::uint32_t>(4));
    ctx.set_gpr(31, 0x08A2B2F8u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0066_entry, 66u, 795u, 0x0890FB1Cu>(ctx, &aot_mem) && ctx.pc == 0x08A2B2F8u) goto L_08A2B2F8;
    return;
L_08A2B2F8:
    { const bool branch_taken = ctx.gpr[17] == ctx.gpr[19];
    // nop
      if (branch_taken) {
          goto L_08A2B378;
      }
      goto L_08A2B300;
    }
L_08A2B300:
    ctx.set_gpr(4, ctx.gpr[21] + 0u);
    ctx.set_gpr(31, 0x08A2B30Cu);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0081_entry, 81u, 41u, 0x0894835Cu>(ctx, &aot_mem) && ctx.pc == 0x08A2B30Cu) goto L_08A2B30C;
    return;
L_08A2B30C:
    ctx.set_gpr(3, 2246u << 16u);
    ctx.set_gpr(4, rt.memory().aot_load32(ctx.gpr[3] + static_cast<std::uint32_t>(-22716)));
    ctx.set_gpr(5, ctx.gpr[21] + 0u);
    ctx.set_gpr(6, ctx.gpr[19] + 0u);
    ctx.set_gpr(7, ctx.gpr[2] + 0u);
    ctx.set_gpr(31, 0x08A2B328u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0079_entry, 79u, 213u, 0x08940F60u>(ctx, &aot_mem) && ctx.pc == 0x08A2B328u) goto L_08A2B328;
    return;
L_08A2B328:
    ctx.set_gpr(4, ctx.gpr[21] + 0u);
    ctx.set_gpr(31, 0x08A2B334u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0081_entry, 81u, 41u, 0x0894835Cu>(ctx, &aot_mem) && ctx.pc == 0x08A2B334u) goto L_08A2B334;
    return;
L_08A2B334:
    ctx.set_gpr(3, 2246u << 16u);
    ctx.set_gpr(4, rt.memory().aot_load32(ctx.gpr[3] + static_cast<std::uint32_t>(-22720)));
    ctx.set_gpr(5, ctx.gpr[21] + 0u);
    ctx.set_gpr(6, ctx.gpr[19] + 0u);
    ctx.set_gpr(7, ctx.gpr[2] + 0u);
    ctx.set_gpr(31, 0x08A2B350u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0079_entry, 79u, 213u, 0x08940F60u>(ctx, &aot_mem) && ctx.pc == 0x08A2B350u) goto L_08A2B350;
    return;
L_08A2B350:
    ctx.set_gpr(4, ctx.gpr[21] + 0u);
    ctx.set_gpr(31, 0x08A2B35Cu);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0081_entry, 81u, 41u, 0x0894835Cu>(ctx, &aot_mem) && ctx.pc == 0x08A2B35Cu) goto L_08A2B35C;
    return;
L_08A2B35C:
    ctx.set_gpr(3, 2246u << 16u);
    ctx.set_gpr(4, rt.memory().aot_load32(ctx.gpr[3] + static_cast<std::uint32_t>(-22700)));
    ctx.set_gpr(5, ctx.gpr[21] + 0u);
    ctx.set_gpr(6, ctx.gpr[19] + 0u);
    ctx.set_gpr(7, ctx.gpr[2] + 0u);
    ctx.set_gpr(31, 0x08A2B378u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0079_entry, 79u, 213u, 0x08940F60u>(ctx, &aot_mem) && ctx.pc == 0x08A2B378u) goto L_08A2B378;
    return;
L_08A2B378:
    { const bool branch_taken = ctx.gpr[22] == ctx.gpr[16];
    // nop
      if (branch_taken) {
          goto L_08A2B3E8;
      }
      goto L_08A2B380;
    }
L_08A2B380:
    { const bool branch_taken = static_cast<std::int32_t>(ctx.gpr[16]) <= 0;
    // nop
      if (branch_taken) {
          goto L_08A2B3B8;
      }
      goto L_08A2B388;
    }
L_08A2B388:
    ctx.set_gpr(4, ctx.gpr[21] + 0u);
    ctx.set_gpr(31, 0x08A2B394u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0081_entry, 81u, 41u, 0x0894835Cu>(ctx, &aot_mem) && ctx.pc == 0x08A2B394u) goto L_08A2B394;
    return;
L_08A2B394:
    ctx.set_gpr(3, 2246u << 16u);
    ctx.set_gpr(4, rt.memory().aot_load32(ctx.gpr[3] + static_cast<std::uint32_t>(-22696)));
    ctx.set_gpr(5, ctx.gpr[21] + 0u);
    ctx.set_gpr(6, ctx.gpr[16] + 0u);
    ctx.set_gpr(7, ctx.gpr[2] + 0u);
    ctx.set_gpr(31, 0x08A2B3B0u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0079_entry, 79u, 213u, 0x08940F60u>(ctx, &aot_mem) && ctx.pc == 0x08A2B3B0u) goto L_08A2B3B0;
    return;
L_08A2B3B0:
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_08A2B3E8;
      }
      goto L_08A2B3B8;
    }
L_08A2B3B8:
    ctx.set_gpr(17, rt.memory().aot_load32(ctx.gpr[21] + static_cast<std::uint32_t>(88)));
    { const bool branch_taken = ctx.gpr[17] == 0u;
    // nop
      if (branch_taken) {
          goto L_08A2B3E8;
      }
      goto L_08A2B3C4;
    }
L_08A2B3C4:
    ctx.set_gpr(4, ctx.gpr[21] + 0u);
    ctx.set_gpr(31, 0x08A2B3D0u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0081_entry, 81u, 41u, 0x0894835Cu>(ctx, &aot_mem) && ctx.pc == 0x08A2B3D0u) goto L_08A2B3D0;
    return;
L_08A2B3D0:
    ctx.set_gpr(4, ctx.gpr[2] + 0u);
    ctx.set_gpr(5, ctx.gpr[17] + 0u);
    ctx.set_gpr(25, rt.memory().aot_load32(ctx.gpr[2] + static_cast<std::uint32_t>(0)));
    ctx.set_gpr(25, rt.memory().aot_load32(ctx.gpr[25] + static_cast<std::uint32_t>(144)));
    jump_target = ctx.gpr[25];
    ctx.set_gpr(31, 0x08A2B3E8u);
    // nop
    ctx.pc = jump_target;
    if (rt.invoke_chained_call(ctx, &aot_mem) && ctx.pc == 0x08A2B3E8u) goto L_08A2B3E8;
    return;
L_08A2B3E8:
    ctx.set_gpr(2, 2246u << 16u);
    ctx.set_gpr(4, rt.memory().aot_load32(ctx.gpr[2] + static_cast<std::uint32_t>(-22716)));
    ctx.set_gpr(5, ctx.gpr[21] + 0u);
    ctx.set_gpr(6, ctx.gpr[19] + 0u);
    ctx.set_gpr(31, 0x08A2B400u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0079_entry, 79u, 233u, 0x089410F4u>(ctx, &aot_mem) && ctx.pc == 0x08A2B400u) goto L_08A2B400;
    return;
L_08A2B400:
    ctx.set_gpr(2, 2246u << 16u);
    ctx.set_gpr(4, rt.memory().aot_load32(ctx.gpr[2] + static_cast<std::uint32_t>(-22720)));
    ctx.set_gpr(5, ctx.gpr[21] + 0u);
    ctx.set_gpr(6, ctx.gpr[19] + 0u);
    ctx.set_gpr(31, 0x08A2B418u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0079_entry, 79u, 233u, 0x089410F4u>(ctx, &aot_mem) && ctx.pc == 0x08A2B418u) goto L_08A2B418;
    return;
L_08A2B418:
    ctx.set_gpr(2, 2246u << 16u);
    ctx.set_gpr(4, rt.memory().aot_load32(ctx.gpr[2] + static_cast<std::uint32_t>(-22700)));
    ctx.set_gpr(5, ctx.gpr[21] + 0u);
    ctx.set_gpr(6, ctx.gpr[19] + 0u);
    ctx.set_gpr(31, 0x08A2B430u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0079_entry, 79u, 233u, 0x089410F4u>(ctx, &aot_mem) && ctx.pc == 0x08A2B430u) goto L_08A2B430;
    return;
L_08A2B430:
    ctx.set_gpr(2, 2246u << 16u);
    ctx.set_gpr(4, rt.memory().aot_load32(ctx.gpr[2] + static_cast<std::uint32_t>(-22696)));
    ctx.set_gpr(5, ctx.gpr[21] + 0u);
    ctx.set_gpr(6, ctx.gpr[16] + 0u);
    ctx.set_gpr(31, 0x08A2B448u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0079_entry, 79u, 233u, 0x089410F4u>(ctx, &aot_mem) && ctx.pc == 0x08A2B448u) goto L_08A2B448;
    return;
L_08A2B448:
    ctx.set_gpr(3, rt.memory().aot_load32(ctx.gpr[21] + static_cast<std::uint32_t>(64)));
    ctx.set_gpr(4, 0u + 0u);
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_08A2B468;
      }
      goto L_08A2B458;
    }
L_08A2B458:
    ctx.set_gpr(2, 16256u << 16u);
    rt.memory().aot_store32(ctx.gpr[3] + static_cast<std::uint32_t>(60), ctx.gpr[2]);
    ctx.set_gpr(3, ctx.gpr[3] + static_cast<std::uint32_t>(64));
    ctx.set_gpr(4, ctx.gpr[4] + static_cast<std::uint32_t>(1));
    goto L_08A2B468;
L_08A2B468:
    ctx.set_gpr(2, static_cast<std::int32_t>(ctx.gpr[4]) < static_cast<std::int32_t>(ctx.gpr[19]) ? 1u : 0u);
    { const bool branch_taken = ctx.gpr[2] != 0u;
    // nop
      if (branch_taken) {
          goto L_08A2B458;
      }
      goto L_08A2B474;
    }
L_08A2B474:
    ctx.set_gpr(4, ctx.gpr[21] + static_cast<std::uint32_t>(12));
    ctx.set_gpr(5, ctx.gpr[20] + 0u);
    ctx.set_gpr(31, 0x08A2B484u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0085_entry, 85u, 61u, 0x089584C4u>(ctx, &aot_mem) && ctx.pc == 0x08A2B484u) goto L_08A2B484;
    return;
L_08A2B484:
    ctx.set_gpr(31, rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(28)));
    ctx.set_gpr(22, rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(24)));
    ctx.set_gpr(21, rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(20)));
    ctx.set_gpr(20, rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(16)));
    ctx.set_gpr(19, rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(12)));
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
L_08A2B4B0:
    ctx.set_gpr(29, ctx.gpr[29] + static_cast<std::uint32_t>(-16));
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(12), ctx.gpr[31]);
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(8), ctx.gpr[18]);
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(4), ctx.gpr[17]);
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(0), ctx.gpr[16]);
    ctx.set_gpr(17, ctx.gpr[4] + 0u);
    ctx.set_gpr(31, 0x08A2B4D0u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0080_entry, 80u, 438u, 0x08945F0Cu>(ctx, &aot_mem) && ctx.pc == 0x08A2B4D0u) goto L_08A2B4D0;
    return;
L_08A2B4D0:
    ctx.set_gpr(4, rt.memory().aot_load32(ctx.gpr[17] + static_cast<std::uint32_t>(12)));
    ctx.set_gpr(25, rt.memory().aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(0)));
    ctx.set_gpr(25, rt.memory().aot_load32(ctx.gpr[25] + static_cast<std::uint32_t>(96)));
    jump_target = ctx.gpr[25];
    ctx.set_gpr(31, 0x08A2B4E4u);
    // nop
    ctx.pc = jump_target;
    if (rt.invoke_chained_call(ctx, &aot_mem) && ctx.pc == 0x08A2B4E4u) goto L_08A2B4E4;
    return;
L_08A2B4E4:
    ctx.set_gpr(3, 0u + 0u);
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_08A2B580;
      }
      goto L_08A2B4F0;
    }
L_08A2B4F0:
    ctx.set_gpr(4, rt.memory().aot_load32(ctx.gpr[17] + static_cast<std::uint32_t>(48)));
    ctx.set_gpr(5, ctx.gpr[3] << 2u);
    ctx.set_gpr(4, rt.memory().aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(16)));
    ctx.set_gpr(4, ctx.gpr[4] + ctx.gpr[5]);
    ctx.set_gpr(8, rt.memory().aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(0)));
    ctx.set_gpr(9, 0u + 0u);
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_08A2B56C;
      }
      goto L_08A2B510;
    }
L_08A2B510:
    ctx.set_gpr(5, ctx.gpr[9] << 2u);
    ctx.set_gpr(4, rt.memory().aot_load32(ctx.gpr[8] + static_cast<std::uint32_t>(16)));
    ctx.set_gpr(4, ctx.gpr[4] + ctx.gpr[5]);
    ctx.set_gpr(7, rt.memory().aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(0)));
    ctx.set_gpr(4, rt.memory().aot_load32(ctx.gpr[7] + static_cast<std::uint32_t>(16)));
    { const bool branch_taken = ctx.gpr[4] == 0u;
    // nop
      if (branch_taken) {
          goto L_08A2B568;
      }
      goto L_08A2B52C;
    }
L_08A2B52C:
    ctx.set_gpr(4, rt.memory().aot_load8(ctx.gpr[7] + static_cast<std::uint32_t>(52)));
    { const bool branch_taken = ctx.gpr[4] != 0u;
    // nop
      if (branch_taken) {
          goto L_08A2B568;
      }
      goto L_08A2B538;
    }
L_08A2B538:
    ctx.set_gpr(6, rt.memory().aot_load32(ctx.gpr[17] + static_cast<std::uint32_t>(12)));
    ctx.set_gpr(4, ctx.gpr[3] << 1u);
    ctx.set_gpr(4, ctx.gpr[4] + ctx.gpr[3]);
    ctx.set_gpr(5, ctx.gpr[4] << 2u);
    ctx.set_gpr(4, rt.memory().aot_load32(ctx.gpr[6] + static_cast<std::uint32_t>(12)));
    ctx.set_gpr(4, ctx.gpr[4] + ctx.gpr[5]);
    ctx.fpr[2] = std::bit_cast<float>(rt.memory().aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(8)));
    ctx.fpr[1] = std::bit_cast<float>(rt.memory().aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(4)));
    ctx.fpr[0] = std::bit_cast<float>(rt.memory().aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(0)));
    rt.memory().aot_store32(ctx.gpr[7] + static_cast<std::uint32_t>(36), std::bit_cast<std::uint32_t>(ctx.fpr[0]));
    rt.memory().aot_store32(ctx.gpr[7] + static_cast<std::uint32_t>(40), std::bit_cast<std::uint32_t>(ctx.fpr[1]));
    rt.memory().aot_store32(ctx.gpr[7] + static_cast<std::uint32_t>(44), std::bit_cast<std::uint32_t>(ctx.fpr[2]));
    goto L_08A2B568;
L_08A2B568:
    ctx.set_gpr(9, ctx.gpr[9] + static_cast<std::uint32_t>(1));
    goto L_08A2B56C;
L_08A2B56C:
    ctx.set_gpr(4, rt.memory().aot_load32(ctx.gpr[8] + static_cast<std::uint32_t>(8)));
    ctx.set_gpr(4, static_cast<std::int32_t>(ctx.gpr[9]) < static_cast<std::int32_t>(ctx.gpr[4]) ? 1u : 0u);
    { const bool branch_taken = ctx.gpr[4] != 0u;
    // nop
      if (branch_taken) {
          goto L_08A2B510;
      }
      goto L_08A2B57C;
    }
L_08A2B57C:
    ctx.set_gpr(3, ctx.gpr[3] + static_cast<std::uint32_t>(1));
    goto L_08A2B580;
L_08A2B580:
    ctx.set_gpr(4, static_cast<std::int32_t>(ctx.gpr[3]) < static_cast<std::int32_t>(ctx.gpr[2]) ? 1u : 0u);
    { const bool branch_taken = ctx.gpr[4] != 0u;
    // nop
      if (branch_taken) {
          goto L_08A2B4F0;
      }
      goto L_08A2B58C;
    }
L_08A2B58C:
    ctx.set_gpr(4, rt.memory().aot_load32(ctx.gpr[17] + static_cast<std::uint32_t>(12)));
    { const bool branch_taken = ctx.gpr[4] == 0u;
    // nop
      if (branch_taken) {
          goto L_08A2B65C;
      }
      goto L_08A2B598;
    }
L_08A2B598:
    ctx.set_gpr(25, rt.memory().aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(0)));
    ctx.set_gpr(25, rt.memory().aot_load32(ctx.gpr[25] + static_cast<std::uint32_t>(96)));
    jump_target = ctx.gpr[25];
    ctx.set_gpr(31, 0x08A2B5A8u);
    // nop
    ctx.pc = jump_target;
    if (rt.invoke_chained_call(ctx, &aot_mem) && ctx.pc == 0x08A2B5A8u) goto L_08A2B5A8;
    return;
L_08A2B5A8:
    ctx.set_gpr(18, ctx.gpr[2] + 0u);
    ctx.set_gpr(3, rt.memory().aot_load32(ctx.gpr[17] + static_cast<std::uint32_t>(12)));
    ctx.set_gpr(16, rt.memory().aot_load32(ctx.gpr[3] + static_cast<std::uint32_t>(24)));
    { const bool branch_taken = ctx.gpr[18] == 0u;
    // nop
      if (branch_taken) {
          goto L_08A2B65C;
      }
      goto L_08A2B5BC;
    }
L_08A2B5BC:
    ctx.set_gpr(3, rt.memory().aot_load32(ctx.gpr[17] + static_cast<std::uint32_t>(84)));
    { const bool branch_taken = ctx.gpr[3] != 0u;
    // nop
      if (branch_taken) {
          goto L_08A2B608;
      }
      goto L_08A2B5C8;
    }
L_08A2B5C8:
    ctx.set_gpr(4, ctx.gpr[17] + 0u);
    ctx.set_gpr(31, 0x08A2B5D4u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0081_entry, 81u, 41u, 0x0894835Cu>(ctx, &aot_mem) && ctx.pc == 0x08A2B5D4u) goto L_08A2B5D4;
    return;
L_08A2B5D4:
    ctx.set_gpr(3, 2246u << 16u);
    ctx.set_gpr(4, rt.memory().aot_load32(ctx.gpr[3] + static_cast<std::uint32_t>(-22700)));
    ctx.set_gpr(5, ctx.gpr[17] + 0u);
    ctx.set_gpr(6, ctx.gpr[18] + 0u);
    ctx.set_gpr(7, ctx.gpr[2] + 0u);
    ctx.set_gpr(31, 0x08A2B5F0u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0079_entry, 79u, 203u, 0x08940E70u>(ctx, &aot_mem) && ctx.pc == 0x08A2B5F0u) goto L_08A2B5F0;
    return;
L_08A2B5F0:
    ctx.set_gpr(2, 2246u << 16u);
    ctx.set_gpr(4, rt.memory().aot_load32(ctx.gpr[2] + static_cast<std::uint32_t>(-22700)));
    ctx.set_gpr(5, ctx.gpr[17] + 0u);
    ctx.set_gpr(6, ctx.gpr[18] + 0u);
    ctx.set_gpr(31, 0x08A2B608u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0079_entry, 79u, 233u, 0x089410F4u>(ctx, &aot_mem) && ctx.pc == 0x08A2B608u) goto L_08A2B608;
    return;
L_08A2B608:
    { const bool branch_taken = ctx.gpr[16] == 0u;
    // nop
      if (branch_taken) {
          goto L_08A2B65C;
      }
      goto L_08A2B610;
    }
L_08A2B610:
    ctx.set_gpr(3, rt.memory().aot_load32(ctx.gpr[17] + static_cast<std::uint32_t>(88)));
    { const bool branch_taken = ctx.gpr[3] != 0u;
    // nop
      if (branch_taken) {
          goto L_08A2B65C;
      }
      goto L_08A2B61C;
    }
L_08A2B61C:
    ctx.set_gpr(4, ctx.gpr[17] + 0u);
    ctx.set_gpr(31, 0x08A2B628u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0081_entry, 81u, 41u, 0x0894835Cu>(ctx, &aot_mem) && ctx.pc == 0x08A2B628u) goto L_08A2B628;
    return;
L_08A2B628:
    ctx.set_gpr(3, 2246u << 16u);
    ctx.set_gpr(4, rt.memory().aot_load32(ctx.gpr[3] + static_cast<std::uint32_t>(-22696)));
    ctx.set_gpr(5, ctx.gpr[17] + 0u);
    ctx.set_gpr(6, ctx.gpr[16] + 0u);
    ctx.set_gpr(7, ctx.gpr[2] + 0u);
    ctx.set_gpr(31, 0x08A2B644u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0079_entry, 79u, 203u, 0x08940E70u>(ctx, &aot_mem) && ctx.pc == 0x08A2B644u) goto L_08A2B644;
    return;
L_08A2B644:
    ctx.set_gpr(2, 2246u << 16u);
    ctx.set_gpr(4, rt.memory().aot_load32(ctx.gpr[2] + static_cast<std::uint32_t>(-22696)));
    ctx.set_gpr(5, ctx.gpr[17] + 0u);
    ctx.set_gpr(6, ctx.gpr[16] + 0u);
    ctx.set_gpr(31, 0x08A2B65Cu);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0079_entry, 79u, 233u, 0x089410F4u>(ctx, &aot_mem) && ctx.pc == 0x08A2B65Cu) goto L_08A2B65C;
    return;
L_08A2B65C:
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
L_08A2B678:
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
    ctx.set_gpr(2, rt.memory().aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(48)));
    ctx.set_gpr(16, ctx.gpr[19] << 2u);
    ctx.set_gpr(2, rt.memory().aot_load32(ctx.gpr[2] + static_cast<std::uint32_t>(16)));
    ctx.set_gpr(2, ctx.gpr[2] + ctx.gpr[16]);
    ctx.set_gpr(17, rt.memory().aot_load32(ctx.gpr[2] + static_cast<std::uint32_t>(0)));
    ctx.set_gpr(6, rt.memory().aot_load32(ctx.gpr[17] + static_cast<std::uint32_t>(8)));
    { const bool branch_taken = ctx.gpr[6] != 0u;
    // nop
      if (branch_taken) {
          goto L_08A2B70C;
      }
      goto L_08A2B6C4;
    }
L_08A2B6C4:
    ctx.set_gpr(4, ctx.gpr[17] + 0u);
    ctx.set_gpr(31, 0x08A2B6D0u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0081_entry, 81u, 299u, 0x089494E0u>(ctx, &aot_mem) && ctx.pc == 0x08A2B6D0u) goto L_08A2B6D0;
    return;
L_08A2B6D0:
    ctx.set_gpr(4, rt.memory().aot_load32(ctx.gpr[21] + static_cast<std::uint32_t>(52)));
    ctx.set_gpr(3, rt.memory().aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(8)));
    { const bool branch_taken = ctx.gpr[3] == 0u;
    // nop
      if (branch_taken) {
          goto L_08A2B700;
      }
      goto L_08A2B6E0;
    }
L_08A2B6E0:
    { const bool branch_taken = static_cast<std::int32_t>(ctx.gpr[19]) < 0;
    // nop
      if (branch_taken) {
          goto L_08A2B700;
      }
      goto L_08A2B6E8;
    }
L_08A2B6E8:
    ctx.set_gpr(1, static_cast<std::int32_t>(ctx.gpr[19]) < static_cast<std::int32_t>(ctx.gpr[3]) ? 1u : 0u);
    { const bool branch_taken = ctx.gpr[1] == 0u;
    // nop
      if (branch_taken) {
          goto L_08A2B700;
      }
      goto L_08A2B6F4;
    }
L_08A2B6F4:
    ctx.set_gpr(3, rt.memory().aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(16)));
    ctx.set_gpr(3, ctx.gpr[3] + ctx.gpr[16]);
    rt.memory().aot_store32(ctx.gpr[3] + static_cast<std::uint32_t>(0), 0u);
    goto L_08A2B700;
L_08A2B700:
    rt.memory().aot_store8(ctx.gpr[21] + static_cast<std::uint32_t>(80), static_cast<std::uint8_t>(0u));
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_08A2B830;
      }
      goto L_08A2B70C;
    }
L_08A2B70C:
    ctx.set_gpr(4, rt.memory().aot_load32(ctx.gpr[20] + static_cast<std::uint32_t>(48)));
    ctx.set_gpr(18, 0u + 0u);
    goto L_08A2B714;
L_08A2B714:
    ctx.set_gpr(3, ctx.gpr[18] << 2u);
    ctx.set_gpr(2, rt.memory().aot_load32(ctx.gpr[17] + static_cast<std::uint32_t>(16)));
    ctx.set_gpr(2, ctx.gpr[2] + ctx.gpr[3]);
    ctx.set_gpr(2, rt.memory().aot_load32(ctx.gpr[2] + static_cast<std::uint32_t>(0)));
    ctx.set_gpr(2, rt.memory().aot_load32(ctx.gpr[2] + static_cast<std::uint32_t>(48)));
    ctx.set_gpr(1, static_cast<std::int32_t>(ctx.gpr[4]) < static_cast<std::int32_t>(ctx.gpr[2]) ? 1u : 0u);
    { const bool branch_taken = ctx.gpr[1] != 0u;
    // nop
      if (branch_taken) {
          goto L_08A2B740;
      }
      goto L_08A2B734;
    }
L_08A2B734:
    ctx.set_gpr(18, ctx.gpr[18] + static_cast<std::uint32_t>(1));
    { const bool branch_taken = ctx.gpr[18] != ctx.gpr[6];
    // nop
      if (branch_taken) {
          goto L_08A2B714;
      }
      goto L_08A2B740;
    }
L_08A2B740:
    { const bool branch_taken = ctx.gpr[18] != ctx.gpr[6];
    // nop
      if (branch_taken) {
          goto L_08A2B760;
      }
      goto L_08A2B748;
    }
L_08A2B748:
    ctx.set_gpr(4, ctx.gpr[17] + 0u);
    ctx.set_gpr(5, ctx.gpr[20] + 0u);
    ctx.set_gpr(31, 0x08A2B758u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0081_entry, 81u, 299u, 0x089494E0u>(ctx, &aot_mem) && ctx.pc == 0x08A2B758u) goto L_08A2B758;
    return;
L_08A2B758:
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_08A2B7DC;
      }
      goto L_08A2B760;
    }
L_08A2B760:
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(44), ctx.gpr[20]);
    ctx.set_gpr(4, ctx.gpr[17] + 0u);
    ctx.set_gpr(5, 0u + 0u);
    ctx.set_gpr(6, 0u + static_cast<std::uint32_t>(1));
    ctx.set_gpr(7, ctx.gpr[29] + static_cast<std::uint32_t>(44));
    ctx.set_gpr(31, 0x08A2B77Cu);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0048_entry, 48u, 244u, 0x088C54E4u>(ctx, &aot_mem) && ctx.pc == 0x08A2B77Cu) goto L_08A2B77C;
    return;
L_08A2B77C:
    ctx.set_gpr(4, ctx.gpr[17] + 0u);
    ctx.set_gpr(5, ctx.gpr[18] + 0u);
    ctx.set_gpr(6, 0u + static_cast<std::uint32_t>(1));
    ctx.set_gpr(7, ctx.gpr[29] + static_cast<std::uint32_t>(44));
    ctx.set_gpr(31, 0x08A2B794u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0066_entry, 66u, 837u, 0x0890FF10u>(ctx, &aot_mem) && ctx.pc == 0x08A2B794u) goto L_08A2B794;
    return;
L_08A2B794:
    ctx.set_gpr(6, rt.memory().aot_load32(ctx.gpr[21] + static_cast<std::uint32_t>(52)));
    ctx.set_gpr(3, rt.memory().aot_load32(ctx.gpr[6] + static_cast<std::uint32_t>(16)));
    ctx.set_gpr(5, ctx.gpr[3] + ctx.gpr[16]);
    ctx.set_gpr(3, rt.memory().aot_load32(ctx.gpr[5] + static_cast<std::uint32_t>(0)));
    ctx.set_gpr(1, static_cast<std::int32_t>(ctx.gpr[3]) < static_cast<std::int32_t>(ctx.gpr[18]) ? 1u : 0u);
    { const bool branch_taken = ctx.gpr[1] != 0u;
    // nop
      if (branch_taken) {
          goto L_08A2B7DC;
      }
      goto L_08A2B7B0;
    }
L_08A2B7B0:
    ctx.set_gpr(4, ctx.gpr[3] + static_cast<std::uint32_t>(1));
    ctx.set_gpr(3, rt.memory().aot_load32(ctx.gpr[6] + static_cast<std::uint32_t>(8)));
    { const bool branch_taken = ctx.gpr[3] == 0u;
    // nop
      if (branch_taken) {
          goto L_08A2B7D8;
      }
      goto L_08A2B7C0;
    }
L_08A2B7C0:
    { const bool branch_taken = static_cast<std::int32_t>(ctx.gpr[19]) < 0;
    // nop
      if (branch_taken) {
          goto L_08A2B7D8;
      }
      goto L_08A2B7C8;
    }
L_08A2B7C8:
    ctx.set_gpr(1, static_cast<std::int32_t>(ctx.gpr[19]) < static_cast<std::int32_t>(ctx.gpr[3]) ? 1u : 0u);
    { const bool branch_taken = ctx.gpr[1] == 0u;
    // nop
      if (branch_taken) {
          goto L_08A2B7D8;
      }
      goto L_08A2B7D4;
    }
L_08A2B7D4:
    rt.memory().aot_store32(ctx.gpr[5] + static_cast<std::uint32_t>(0), ctx.gpr[4]);
    goto L_08A2B7D8;
L_08A2B7D8:
    rt.memory().aot_store8(ctx.gpr[21] + static_cast<std::uint32_t>(80), static_cast<std::uint8_t>(0u));
    goto L_08A2B7DC;
L_08A2B7DC:
    ctx.set_gpr(3, rt.memory().aot_load32(ctx.gpr[20] + static_cast<std::uint32_t>(12)));
    ctx.set_gpr(3, rt.memory().aot_load32(ctx.gpr[3] + static_cast<std::uint32_t>(12)));
    { const bool branch_taken = ctx.gpr[3] != 0u;
    // nop
      if (branch_taken) {
          goto L_08A2B830;
      }
      goto L_08A2B7EC;
    }
L_08A2B7EC:
    ctx.set_gpr(5, rt.memory().aot_load32(ctx.gpr[21] + static_cast<std::uint32_t>(52)));
    ctx.set_gpr(3, rt.memory().aot_load32(ctx.gpr[5] + static_cast<std::uint32_t>(16)));
    ctx.set_gpr(4, ctx.gpr[3] + ctx.gpr[16]);
    ctx.set_gpr(3, rt.memory().aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(0)));
    ctx.set_gpr(1, static_cast<std::int32_t>(ctx.gpr[3]) < static_cast<std::int32_t>(ctx.gpr[18]) ? 1u : 0u);
    { const bool branch_taken = ctx.gpr[1] == 0u;
    // nop
      if (branch_taken) {
          goto L_08A2B830;
      }
      goto L_08A2B808;
    }
L_08A2B808:
    ctx.set_gpr(3, rt.memory().aot_load32(ctx.gpr[5] + static_cast<std::uint32_t>(8)));
    { const bool branch_taken = ctx.gpr[3] == 0u;
    // nop
      if (branch_taken) {
          goto L_08A2B82C;
      }
      goto L_08A2B814;
    }
L_08A2B814:
    { const bool branch_taken = static_cast<std::int32_t>(ctx.gpr[19]) < 0;
    // nop
      if (branch_taken) {
          goto L_08A2B82C;
      }
      goto L_08A2B81C;
    }
L_08A2B81C:
    ctx.set_gpr(1, static_cast<std::int32_t>(ctx.gpr[19]) < static_cast<std::int32_t>(ctx.gpr[3]) ? 1u : 0u);
    { const bool branch_taken = ctx.gpr[1] == 0u;
    // nop
      if (branch_taken) {
          goto L_08A2B82C;
      }
      goto L_08A2B828;
    }
L_08A2B828:
    rt.memory().aot_store32(ctx.gpr[4] + static_cast<std::uint32_t>(0), ctx.gpr[18]);
    goto L_08A2B82C;
L_08A2B82C:
    rt.memory().aot_store8(ctx.gpr[21] + static_cast<std::uint32_t>(80), static_cast<std::uint8_t>(0u));
    goto L_08A2B830;
L_08A2B830:
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
L_08A2B858:
    ctx.set_gpr(3, rt.memory().aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(48)));
    ctx.set_gpr(3, rt.memory().aot_load32(ctx.gpr[3] + static_cast<std::uint32_t>(8)));
    ctx.set_gpr(5, 0u + 0u);
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_08A2B940;
      }
      goto L_08A2B86C;
    }
L_08A2B86C:
    ctx.set_gpr(6, rt.memory().aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(48)));
    ctx.set_gpr(9, ctx.gpr[5] << 2u);
    ctx.set_gpr(6, rt.memory().aot_load32(ctx.gpr[6] + static_cast<std::uint32_t>(16)));
    ctx.set_gpr(6, ctx.gpr[6] + ctx.gpr[9]);
    ctx.set_gpr(8, rt.memory().aot_load32(ctx.gpr[6] + static_cast<std::uint32_t>(0)));
    ctx.set_gpr(6, rt.memory().aot_load32(ctx.gpr[8] + static_cast<std::uint32_t>(8)));
    ctx.set_gpr(11, ctx.gpr[6] + static_cast<std::uint32_t>(-1));
    ctx.set_gpr(10, 0u + 0u);
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_08A2B8F8;
      }
      goto L_08A2B894;
    }
L_08A2B894:
    ctx.set_gpr(7, ctx.gpr[11] << 2u);
    ctx.set_gpr(6, rt.memory().aot_load32(ctx.gpr[8] + static_cast<std::uint32_t>(16)));
    ctx.set_gpr(6, ctx.gpr[6] + ctx.gpr[7]);
    ctx.set_gpr(6, rt.memory().aot_load32(ctx.gpr[6] + static_cast<std::uint32_t>(0)));
    ctx.set_gpr(6, rt.memory().aot_load32(ctx.gpr[6] + static_cast<std::uint32_t>(12)));
    ctx.set_gpr(6, rt.memory().aot_load32(ctx.gpr[6] + static_cast<std::uint32_t>(12)));
    { const bool branch_taken = ctx.gpr[6] != 0u;
    // nop
      if (branch_taken) {
          goto L_08A2B8F4;
      }
      goto L_08A2B8B4;
    }
L_08A2B8B4:
    ctx.set_gpr(7, rt.memory().aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(52)));
    ctx.set_gpr(6, rt.memory().aot_load32(ctx.gpr[7] + static_cast<std::uint32_t>(8)));
    { const bool branch_taken = ctx.gpr[6] == 0u;
    // nop
      if (branch_taken) {
          goto L_08A2B8E4;
      }
      goto L_08A2B8C4;
    }
L_08A2B8C4:
    { const bool branch_taken = static_cast<std::int32_t>(ctx.gpr[5]) < 0;
    // nop
      if (branch_taken) {
          goto L_08A2B8E4;
      }
      goto L_08A2B8CC;
    }
L_08A2B8CC:
    ctx.set_gpr(1, static_cast<std::int32_t>(ctx.gpr[5]) < static_cast<std::int32_t>(ctx.gpr[6]) ? 1u : 0u);
    { const bool branch_taken = ctx.gpr[1] == 0u;
    // nop
      if (branch_taken) {
          goto L_08A2B8E4;
      }
      goto L_08A2B8D8;
    }
L_08A2B8D8:
    ctx.set_gpr(6, rt.memory().aot_load32(ctx.gpr[7] + static_cast<std::uint32_t>(16)));
    ctx.set_gpr(6, ctx.gpr[6] + ctx.gpr[9]);
    rt.memory().aot_store32(ctx.gpr[6] + static_cast<std::uint32_t>(0), ctx.gpr[11]);
    goto L_08A2B8E4;
L_08A2B8E4:
    rt.memory().aot_store8(ctx.gpr[4] + static_cast<std::uint32_t>(80), static_cast<std::uint8_t>(0u));
    ctx.set_gpr(10, 0u + static_cast<std::uint32_t>(1));
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_08A2B900;
      }
      goto L_08A2B8F4;
    }
L_08A2B8F4:
    ctx.set_gpr(11, ctx.gpr[11] + static_cast<std::uint32_t>(-1));
    goto L_08A2B8F8;
L_08A2B8F8:
    { const bool branch_taken = static_cast<std::int32_t>(ctx.gpr[11]) > 0;
    // nop
      if (branch_taken) {
          goto L_08A2B894;
      }
      goto L_08A2B900;
    }
L_08A2B900:
    { const bool branch_taken = ctx.gpr[10] != 0u;
    // nop
      if (branch_taken) {
          goto L_08A2B93C;
      }
      goto L_08A2B908;
    }
L_08A2B908:
    ctx.set_gpr(7, rt.memory().aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(52)));
    ctx.set_gpr(6, rt.memory().aot_load32(ctx.gpr[7] + static_cast<std::uint32_t>(8)));
    { const bool branch_taken = ctx.gpr[6] == 0u;
    // nop
      if (branch_taken) {
          goto L_08A2B938;
      }
      goto L_08A2B918;
    }
L_08A2B918:
    { const bool branch_taken = static_cast<std::int32_t>(ctx.gpr[5]) < 0;
    // nop
      if (branch_taken) {
          goto L_08A2B938;
      }
      goto L_08A2B920;
    }
L_08A2B920:
    ctx.set_gpr(1, static_cast<std::int32_t>(ctx.gpr[5]) < static_cast<std::int32_t>(ctx.gpr[6]) ? 1u : 0u);
    { const bool branch_taken = ctx.gpr[1] == 0u;
    // nop
      if (branch_taken) {
          goto L_08A2B938;
      }
      goto L_08A2B92C;
    }
L_08A2B92C:
    ctx.set_gpr(6, rt.memory().aot_load32(ctx.gpr[7] + static_cast<std::uint32_t>(16)));
    ctx.set_gpr(6, ctx.gpr[6] + ctx.gpr[9]);
    rt.memory().aot_store32(ctx.gpr[6] + static_cast<std::uint32_t>(0), 0u);
    goto L_08A2B938;
L_08A2B938:
    rt.memory().aot_store8(ctx.gpr[4] + static_cast<std::uint32_t>(80), static_cast<std::uint8_t>(0u));
    goto L_08A2B93C;
L_08A2B93C:
    ctx.set_gpr(5, ctx.gpr[5] + static_cast<std::uint32_t>(1));
    goto L_08A2B940;
L_08A2B940:
    ctx.set_gpr(6, static_cast<std::int32_t>(ctx.gpr[5]) < static_cast<std::int32_t>(ctx.gpr[3]) ? 1u : 0u);
    { const bool branch_taken = ctx.gpr[6] != 0u;
    // nop
      if (branch_taken) {
          goto L_08A2B86C;
      }
      goto L_08A2B94C;
    }
L_08A2B94C:
    jump_target = ctx.gpr[31];
    // nop
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_08A2B954:
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
    ctx.set_gpr(4, rt.memory().aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(12)));
    ctx.set_gpr(25, rt.memory().aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(0)));
    ctx.set_gpr(25, rt.memory().aot_load32(ctx.gpr[25] + static_cast<std::uint32_t>(96)));
    jump_target = ctx.gpr[25];
    ctx.set_gpr(31, 0x08A2B994u);
    // nop
    ctx.pc = jump_target;
    if (rt.invoke_chained_call(ctx, &aot_mem) && ctx.pc == 0x08A2B994u) goto L_08A2B994;
    return;
L_08A2B994:
    ctx.set_gpr(22, ctx.gpr[2] + 0u);
    ctx.set_gpr(19, 0u + 0u);
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_08A2BA30;
      }
      goto L_08A2B9A4;
    }
L_08A2B9A4:
    ctx.set_gpr(2, rt.memory().aot_load32(ctx.gpr[21] + static_cast<std::uint32_t>(48)));
    ctx.set_gpr(3, ctx.gpr[19] << 2u);
    ctx.set_gpr(2, rt.memory().aot_load32(ctx.gpr[2] + static_cast<std::uint32_t>(16)));
    ctx.set_gpr(2, ctx.gpr[2] + ctx.gpr[3]);
    ctx.set_gpr(16, rt.memory().aot_load32(ctx.gpr[2] + static_cast<std::uint32_t>(0)));
    ctx.set_gpr(2, rt.memory().aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(8)));
    { const bool branch_taken = static_cast<std::int32_t>(ctx.gpr[2]) <= 0;
    // nop
      if (branch_taken) {
          goto L_08A2BA2C;
      }
      goto L_08A2B9C4;
    }
L_08A2B9C4:
    ctx.set_gpr(17, 0u + 0u);
    ctx.set_gpr(18, ctx.gpr[2] + static_cast<std::uint32_t>(-1));
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_08A2BA24;
      }
      goto L_08A2B9D4;
    }
L_08A2B9D4:
    ctx.set_gpr(3, ctx.gpr[18] << 2u);
    ctx.set_gpr(2, rt.memory().aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(16)));
    ctx.set_gpr(2, ctx.gpr[2] + ctx.gpr[3]);
    ctx.set_gpr(2, rt.memory().aot_load32(ctx.gpr[2] + static_cast<std::uint32_t>(0)));
    ctx.set_gpr(3, rt.memory().aot_load32(ctx.gpr[2] + static_cast<std::uint32_t>(12)));
    { const bool branch_taken = ctx.gpr[3] != ctx.gpr[20];
    // nop
      if (branch_taken) {
          goto L_08A2B9FC;
      }
      goto L_08A2B9F0;
    }
L_08A2B9F0:
    ctx.set_gpr(17, 0u + static_cast<std::uint32_t>(1));
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_08A2BA20;
      }
      goto L_08A2B9FC;
    }
L_08A2B9FC:
    { const bool branch_taken = ctx.gpr[17] == 0u;
    // nop
      if (branch_taken) {
          goto L_08A2BA20;
      }
      goto L_08A2BA04;
    }
L_08A2BA04:
    ctx.set_gpr(2, rt.memory().aot_load32(ctx.gpr[3] + static_cast<std::uint32_t>(120)));
    { const bool branch_taken = ctx.gpr[2] != ctx.gpr[20];
    // nop
      if (branch_taken) {
          goto L_08A2BA20;
      }
      goto L_08A2BA10;
    }
L_08A2BA10:
    ctx.set_gpr(4, ctx.gpr[3] + static_cast<std::uint32_t>(120));
    ctx.set_gpr(5, 0u + 0u);
    ctx.set_gpr(31, 0x08A2BA20u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0085_entry, 85u, 61u, 0x089584C4u>(ctx, &aot_mem) && ctx.pc == 0x08A2BA20u) goto L_08A2BA20;
    return;
L_08A2BA20:
    ctx.set_gpr(18, ctx.gpr[18] + static_cast<std::uint32_t>(-1));
    goto L_08A2BA24;
L_08A2BA24:
    { const bool branch_taken = static_cast<std::int32_t>(ctx.gpr[18]) >= 0;
    // nop
      if (branch_taken) {
          goto L_08A2B9D4;
      }
      goto L_08A2BA2C;
    }
L_08A2BA2C:
    ctx.set_gpr(19, ctx.gpr[19] + static_cast<std::uint32_t>(1));
    goto L_08A2BA30;
L_08A2BA30:
    ctx.set_gpr(2, static_cast<std::int32_t>(ctx.gpr[19]) < static_cast<std::int32_t>(ctx.gpr[22]) ? 1u : 0u);
    { const bool branch_taken = ctx.gpr[2] != 0u;
    // nop
      if (branch_taken) {
          goto L_08A2B9A4;
      }
      goto L_08A2BA3C;
    }
L_08A2BA3C:
    ctx.set_gpr(2, 0u + static_cast<std::uint32_t>(1));
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
L_08A2BA6C:
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
    ctx.set_gpr(21, ctx.gpr[4] + 0u);
    ctx.set_gpr(18, ctx.gpr[5] + 0u);
    ctx.set_gpr(16, rt.memory().aot_load32(ctx.gpr[5] + static_cast<std::uint32_t>(0)));
    ctx.set_gpr(17, rt.memory().aot_load32(ctx.gpr[5] + static_cast<std::uint32_t>(4)));
    ctx.set_gpr(20, rt.memory().aot_load32(ctx.gpr[5] + static_cast<std::uint32_t>(8)));
    ctx.set_gpr(23, rt.memory().aot_load32(ctx.gpr[5] + static_cast<std::uint32_t>(12)));
    ctx.set_gpr(4, rt.memory().aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(12)));
    ctx.set_gpr(25, rt.memory().aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(0)));
    ctx.set_gpr(25, rt.memory().aot_load32(ctx.gpr[25] + static_cast<std::uint32_t>(96)));
    jump_target = ctx.gpr[25];
    ctx.set_gpr(31, 0x08A2BAC4u);
    // nop
    ctx.pc = jump_target;
    if (rt.invoke_chained_call(ctx, &aot_mem) && ctx.pc == 0x08A2BAC4u) goto L_08A2BAC4;
    return;
L_08A2BAC4:
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(52), ctx.gpr[2]);
    ctx.set_gpr(22, 0u + 0u);
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(56), 0u);
    ctx.set_gpr(2, rt.memory().aot_load32(ctx.gpr[18] + static_cast<std::uint32_t>(56)));
    { const bool branch_taken = ctx.gpr[2] == 0u;
    // nop
      if (branch_taken) {
          goto L_08A2BAEC;
      }
      goto L_08A2BADC;
    }
L_08A2BADC:
    ctx.set_gpr(2, rt.memory().aot_load32(ctx.gpr[2] + static_cast<std::uint32_t>(16)));
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(56), ctx.gpr[2]);
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_08A2BAFC;
      }
      goto L_08A2BAEC;
    }
L_08A2BAEC:
    ctx.set_gpr(22, rt.memory().aot_load32(ctx.gpr[18] + static_cast<std::uint32_t>(16)));
    { const bool branch_taken = static_cast<std::int32_t>(ctx.gpr[22]) > 0;
    // nop
      if (branch_taken) {
          goto L_08A2BAFC;
      }
      goto L_08A2BAF8;
    }
L_08A2BAF8:
    ctx.set_gpr(22, rt.memory().aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(12)));
    goto L_08A2BAFC;
L_08A2BAFC:
    ctx.set_gpr(2, rt.memory().aot_load32(ctx.gpr[18] + static_cast<std::uint32_t>(20)));
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(76), ctx.gpr[2]);
    { const bool branch_taken = ctx.gpr[2] != 0u;
    // nop
      if (branch_taken) {
          goto L_08A2BB60;
      }
      goto L_08A2BB0C;
    }
L_08A2BB0C:
    ctx.set_gpr(2, rt.memory().aot_load8(ctx.gpr[18] + static_cast<std::uint32_t>(24)));
    { const bool branch_taken = ctx.gpr[2] == 0u;
    // nop
      if (branch_taken) {
          goto L_08A2BB34;
      }
      goto L_08A2BB18;
    }
L_08A2BB18:
    ctx.set_gpr(4, ctx.gpr[16] + 0u);
    ctx.set_gpr(5, rt.memory().aot_load32(ctx.gpr[21] + static_cast<std::uint32_t>(12)));
    ctx.set_gpr(6, ctx.gpr[29] + static_cast<std::uint32_t>(76));
    ctx.set_gpr(31, 0x08A2BB2Cu);
    // nop
    goto L_08A28F40;
L_08A2BB2C:
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_08A2BB48;
      }
      goto L_08A2BB34;
    }
L_08A2BB34:
    ctx.set_gpr(4, ctx.gpr[16] + 0u);
    ctx.set_gpr(5, rt.memory().aot_load32(ctx.gpr[21] + static_cast<std::uint32_t>(12)));
    ctx.set_gpr(6, ctx.gpr[29] + static_cast<std::uint32_t>(76));
    ctx.set_gpr(31, 0x08A2BB48u);
    // nop
    goto L_08A28E54;
L_08A2BB48:
    ctx.set_gpr(2, rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(76)));
    { const bool branch_taken = ctx.gpr[2] != 0u;
    // nop
      if (branch_taken) {
          goto L_08A2BB60;
      }
      goto L_08A2BB54;
    }
L_08A2BB54:
    ctx.set_gpr(2, 0u + 0u);
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_08A2BFB4;
      }
      goto L_08A2BB60;
    }
L_08A2BB60:
    rt.memory().aot_store8(ctx.gpr[21] + static_cast<std::uint32_t>(80), static_cast<std::uint8_t>(0u));
    ctx.set_gpr(2, rt.memory().aot_load32(ctx.gpr[21] + static_cast<std::uint32_t>(56)));
    ctx.set_gpr(2, rt.memory().aot_load32(ctx.gpr[2] + static_cast<std::uint32_t>(8)));
    { const bool branch_taken = ctx.gpr[2] != 0u;
    // nop
      if (branch_taken) {
          goto L_08A2BB78;
      }
      goto L_08A2BB74;
    }
L_08A2BB74:
    ctx.set_gpr(17, 0u + 0u);
    goto L_08A2BB78;
L_08A2BB78:
    ctx.set_gpr(2, 2246u << 16u);
    ctx.set_gpr(4, rt.memory().aot_load32(ctx.gpr[2] + static_cast<std::uint32_t>(-22300)));
    { const bool branch_taken = ctx.gpr[4] == 0u;
    // nop
      if (branch_taken) {
          goto L_08A2BB9C;
      }
      goto L_08A2BB88;
    }
L_08A2BB88:
    ctx.set_gpr(5, 0u + static_cast<std::uint32_t>(1));
    ctx.set_gpr(25, rt.memory().aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(0)));
    ctx.set_gpr(25, rt.memory().aot_load32(ctx.gpr[25] + static_cast<std::uint32_t>(132)));
    jump_target = ctx.gpr[25];
    ctx.set_gpr(31, 0x08A2BB9Cu);
    // nop
    ctx.pc = jump_target;
    if (rt.invoke_chained_call(ctx, &aot_mem) && ctx.pc == 0x08A2BB9Cu) goto L_08A2BB9C;
    return;
L_08A2BB9C:
    ctx.set_gpr(2, 2246u << 16u);
    ctx.set_gpr(19, rt.memory().aot_load32(ctx.gpr[2] + static_cast<std::uint32_t>(-22332)));
    ctx.set_gpr(3, rt.memory().aot_load32(ctx.gpr[19] + static_cast<std::uint32_t>(8)));
    ctx.set_gpr(2, rt.memory().aot_load32(ctx.gpr[19] + static_cast<std::uint32_t>(20)));
    ctx.set_gpr(2, static_cast<std::int32_t>(ctx.gpr[2]) < static_cast<std::int32_t>(ctx.gpr[3]) ? 1u : 0u);
    { const bool branch_taken = ctx.gpr[2] != 0u;
    // nop
      if (branch_taken) {
          goto L_08A2BBD4;
      }
      goto L_08A2BBB8;
    }
L_08A2BBB8:
    ctx.set_gpr(2, rt.memory().aot_load32(ctx.gpr[19] + static_cast<std::uint32_t>(24)));
    ctx.set_gpr(5, ctx.gpr[3] + ctx.gpr[2]);
    ctx.set_gpr(4, ctx.gpr[19] + 0u);
    ctx.set_gpr(2, 2246u << 16u);
    ctx.set_gpr(6, rt.memory().aot_load32(ctx.gpr[2] + static_cast<std::uint32_t>(-22972)));
    ctx.set_gpr(31, 0x08A2BBD4u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0086_entry, 86u, 478u, 0x0895DF98u>(ctx, &aot_mem) && ctx.pc == 0x08A2BBD4u) goto L_08A2BBD4;
    return;
L_08A2BBD4:
    ctx.set_gpr(3, rt.memory().aot_load32(ctx.gpr[19] + static_cast<std::uint32_t>(20)));
    ctx.set_gpr(2, ctx.gpr[3] + static_cast<std::uint32_t>(1));
    rt.memory().aot_store32(ctx.gpr[19] + static_cast<std::uint32_t>(20), ctx.gpr[2]);
    ctx.set_gpr(3, ctx.gpr[3] << 2u);
    ctx.set_gpr(2, rt.memory().aot_load32(ctx.gpr[19] + static_cast<std::uint32_t>(16)));
    ctx.set_gpr(2, ctx.gpr[2] + ctx.gpr[3]);
    ctx.set_gpr(19, rt.memory().aot_load32(ctx.gpr[2] + static_cast<std::uint32_t>(0)));
    ctx.set_gpr(4, ctx.gpr[19] + static_cast<std::uint32_t>(8));
    ctx.set_gpr(5, ctx.gpr[16] + 0u);
    ctx.set_gpr(31, 0x08A2BC00u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0085_entry, 85u, 61u, 0x089584C4u>(ctx, &aot_mem) && ctx.pc == 0x08A2BC00u) goto L_08A2BC00;
    return;
L_08A2BC00:
    rt.memory().aot_store32(ctx.gpr[19] + static_cast<std::uint32_t>(12), ctx.gpr[17]);
    rt.memory().aot_store32(ctx.gpr[19] + static_cast<std::uint32_t>(16), ctx.gpr[20]);
    rt.memory().aot_store32(ctx.gpr[19] + static_cast<std::uint32_t>(20), ctx.gpr[23]);
    ctx.set_gpr(2, 0u + static_cast<std::uint32_t>(1));
    rt.memory().aot_store8(ctx.gpr[19] + static_cast<std::uint32_t>(28), static_cast<std::uint8_t>(ctx.gpr[2]));
    ctx.set_gpr(4, ctx.gpr[19] + 0u);
    ctx.set_gpr(25, rt.memory().aot_load32(ctx.gpr[19] + static_cast<std::uint32_t>(0)));
    ctx.set_gpr(25, rt.memory().aot_load32(ctx.gpr[25] + static_cast<std::uint32_t>(92)));
    jump_target = ctx.gpr[25];
    ctx.set_gpr(31, 0x08A2BC28u);
    // nop
    ctx.pc = jump_target;
    if (rt.invoke_chained_call(ctx, &aot_mem) && ctx.pc == 0x08A2BC28u) goto L_08A2BC28;
    return;
L_08A2BC28:
    ctx.fpr[1] = std::bit_cast<float>(rt.memory().aot_load32(ctx.gpr[18] + static_cast<std::uint32_t>(28)));
    ctx.set_gpr(2, 49024u << 16u);
    ctx.fpr[0] = std::bit_cast<float>(ctx.gpr[2]);
    ctx.set_fpu_condition((!(std::isnan(ctx.fpr[0]) || std::isnan(ctx.fpr[1])) && ctx.fpr[0] == ctx.fpr[1]));
    // nop
    { const bool branch_taken = ctx.fpu_condition();
    // nop
      if (branch_taken) {
          goto L_08A2BC90;
      }
      goto L_08A2BC44;
    }
L_08A2BC44:
    ctx.set_gpr(3, rt.memory().aot_load32(ctx.gpr[18] + static_cast<std::uint32_t>(48)));
    ctx.set_gpr(2, rt.memory().aot_load32(ctx.gpr[18] + static_cast<std::uint32_t>(52)));
    rt.memory().aot_store32(ctx.gpr[19] + static_cast<std::uint32_t>(96), ctx.gpr[3]);
    rt.memory().aot_store32(ctx.gpr[19] + static_cast<std::uint32_t>(100), ctx.gpr[2]);
    ctx.fpr[0] = std::bit_cast<float>(rt.memory().aot_load32(ctx.gpr[18] + static_cast<std::uint32_t>(28)));
    rt.memory().aot_store32(ctx.gpr[19] + static_cast<std::uint32_t>(80), std::bit_cast<std::uint32_t>(ctx.fpr[0]));
    ctx.fpr[1] = std::bit_cast<float>(rt.memory().aot_load32(ctx.gpr[18] + static_cast<std::uint32_t>(32)));
    ctx.fpr[0] = std::bit_cast<float>(rt.memory().aot_load32(ctx.gpr[18] + static_cast<std::uint32_t>(28)));
    ctx.fpr[0] = ctx.fpr[1] - ctx.fpr[0];
    rt.memory().aot_store32(ctx.gpr[19] + static_cast<std::uint32_t>(84), std::bit_cast<std::uint32_t>(ctx.fpr[0]));
    ctx.set_gpr(3, rt.memory().aot_load32(ctx.gpr[18] + static_cast<std::uint32_t>(40)));
    ctx.set_gpr(2, rt.memory().aot_load32(ctx.gpr[18] + static_cast<std::uint32_t>(44)));
    rt.memory().aot_store32(ctx.gpr[19] + static_cast<std::uint32_t>(88), ctx.gpr[3]);
    rt.memory().aot_store32(ctx.gpr[19] + static_cast<std::uint32_t>(92), ctx.gpr[2]);
    ctx.set_gpr(2, 0u + static_cast<std::uint32_t>(1));
    rt.memory().aot_store32(ctx.gpr[19] + static_cast<std::uint32_t>(72), ctx.gpr[2]);
    rt.memory().aot_store32(ctx.gpr[19] + static_cast<std::uint32_t>(76), 0u);
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_08A2BC98;
      }
      goto L_08A2BC90;
    }
L_08A2BC90:
    rt.memory().aot_store32(ctx.gpr[19] + static_cast<std::uint32_t>(72), 0u);
    rt.memory().aot_store32(ctx.gpr[19] + static_cast<std::uint32_t>(76), 0u);
    goto L_08A2BC98;
L_08A2BC98:
    ctx.set_gpr(4, rt.memory().aot_load32(ctx.gpr[21] + static_cast<std::uint32_t>(56)));
    ctx.set_gpr(5, ctx.gpr[19] + 0u);
    ctx.set_gpr(31, 0x08A2BCA8u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0081_entry, 81u, 299u, 0x089494E0u>(ctx, &aot_mem) && ctx.pc == 0x08A2BCA8u) goto L_08A2BCA8;
    return;
L_08A2BCA8:
    ctx.set_gpr(4, ctx.gpr[21] + 0u);
    ctx.set_gpr(31, 0x08A2BCB4u);
    // nop
    goto L_08A2A60C;
L_08A2BCB4:
    rt.memory().aot_store32(ctx.gpr[19] + static_cast<std::uint32_t>(152), ctx.gpr[2]);
    rt.memory().aot_store32(ctx.gpr[19] + static_cast<std::uint32_t>(156), ctx.gpr[3]);
    ctx.set_gpr(20, 0u + 0u);
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_08A2BF80;
      }
      goto L_08A2BCC8;
    }
L_08A2BCC8:
    ctx.set_gpr(23, ctx.gpr[20] << 2u);
    ctx.set_gpr(2, rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(76)));
    ctx.set_gpr(2, rt.memory().aot_load32(ctx.gpr[2] + static_cast<std::uint32_t>(12)));
    ctx.set_gpr(2, ctx.gpr[2] + ctx.gpr[23]);
    ctx.set_gpr(3, rt.memory().aot_load32(ctx.gpr[2] + static_cast<std::uint32_t>(0)));
    ctx.set_gpr(2, 0u + static_cast<std::uint32_t>(-1));
    { const bool branch_taken = ctx.gpr[3] == ctx.gpr[2];
    // nop
      if (branch_taken) {
          goto L_08A2BD04;
      }
      goto L_08A2BCE8;
    }
L_08A2BCE8:
    ctx.set_gpr(2, rt.memory().aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(20)));
    ctx.set_gpr(3, ctx.gpr[3] << 2u);
    ctx.set_gpr(2, rt.memory().aot_load32(ctx.gpr[2] + static_cast<std::uint32_t>(16)));
    ctx.set_gpr(2, ctx.gpr[2] + ctx.gpr[3]);
    ctx.set_gpr(18, rt.memory().aot_load32(ctx.gpr[2] + static_cast<std::uint32_t>(0)));
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_08A2BD08;
      }
      goto L_08A2BD04;
    }
L_08A2BD04:
    ctx.set_gpr(18, 0u + 0u);
    goto L_08A2BD08;
L_08A2BD08:
    ctx.set_gpr(2, rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(56)));
    { const bool branch_taken = ctx.gpr[2] == 0u;
    // nop
      if (branch_taken) {
          goto L_08A2BD1C;
      }
      goto L_08A2BD14;
    }
L_08A2BD14:
    ctx.set_gpr(2, ctx.gpr[2] + ctx.gpr[23]);
    ctx.set_gpr(22, rt.memory().aot_load32(ctx.gpr[2] + static_cast<std::uint32_t>(0)));
    goto L_08A2BD1C;
L_08A2BD1C:
    { const bool branch_taken = ctx.gpr[18] == 0u;
    // nop
      if (branch_taken) {
          goto L_08A2BF7C;
      }
      goto L_08A2BD24;
    }
L_08A2BD24:
    ctx.set_gpr(2, 2246u << 16u);
    ctx.set_gpr(17, rt.memory().aot_load32(ctx.gpr[2] + static_cast<std::uint32_t>(-22348)));
    ctx.set_gpr(3, rt.memory().aot_load32(ctx.gpr[17] + static_cast<std::uint32_t>(8)));
    ctx.set_gpr(2, rt.memory().aot_load32(ctx.gpr[17] + static_cast<std::uint32_t>(20)));
    ctx.set_gpr(2, static_cast<std::int32_t>(ctx.gpr[2]) < static_cast<std::int32_t>(ctx.gpr[3]) ? 1u : 0u);
    { const bool branch_taken = ctx.gpr[2] != 0u;
    // nop
      if (branch_taken) {
          goto L_08A2BD5C;
      }
      goto L_08A2BD40;
    }
L_08A2BD40:
    ctx.set_gpr(2, rt.memory().aot_load32(ctx.gpr[17] + static_cast<std::uint32_t>(24)));
    ctx.set_gpr(5, ctx.gpr[3] + ctx.gpr[2]);
    ctx.set_gpr(4, ctx.gpr[17] + 0u);
    ctx.set_gpr(2, 2246u << 16u);
    ctx.set_gpr(6, rt.memory().aot_load32(ctx.gpr[2] + static_cast<std::uint32_t>(-22784)));
    ctx.set_gpr(31, 0x08A2BD5Cu);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0086_entry, 86u, 478u, 0x0895DF98u>(ctx, &aot_mem) && ctx.pc == 0x08A2BD5Cu) goto L_08A2BD5C;
    return;
L_08A2BD5C:
    ctx.set_gpr(3, rt.memory().aot_load32(ctx.gpr[17] + static_cast<std::uint32_t>(20)));
    ctx.set_gpr(2, ctx.gpr[3] + static_cast<std::uint32_t>(1));
    rt.memory().aot_store32(ctx.gpr[17] + static_cast<std::uint32_t>(20), ctx.gpr[2]);
    ctx.set_gpr(3, ctx.gpr[3] << 2u);
    ctx.set_gpr(2, rt.memory().aot_load32(ctx.gpr[17] + static_cast<std::uint32_t>(16)));
    ctx.set_gpr(2, ctx.gpr[2] + ctx.gpr[3]);
    ctx.set_gpr(17, rt.memory().aot_load32(ctx.gpr[2] + static_cast<std::uint32_t>(0)));
    ctx.set_gpr(2, rt.memory().aot_load32(ctx.gpr[18] + static_cast<std::uint32_t>(12)));
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(48), ctx.gpr[2]);
    ctx.set_gpr(2, rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(76)));
    ctx.set_gpr(2, rt.memory().aot_load32(ctx.gpr[2] + static_cast<std::uint32_t>(12)));
    ctx.set_gpr(2, ctx.gpr[2] + ctx.gpr[23]);
    ctx.set_gpr(30, rt.memory().aot_load32(ctx.gpr[2] + static_cast<std::uint32_t>(0)));
    ctx.set_gpr(4, rt.memory().aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(56)));
    { const bool branch_taken = ctx.gpr[4] == 0u;
    // nop
      if (branch_taken) {
          goto L_08A2BDD0;
      }
      goto L_08A2BD9C;
    }
L_08A2BD9C:
    ctx.set_gpr(31, 0x08A2BDA4u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0015_entry, 15u, 454u, 0x088419CCu>(ctx, &aot_mem) && ctx.pc == 0x08A2BDA4u) goto L_08A2BDA4;
    return;
L_08A2BDA4:
    ctx.set_gpr(3, ctx.gpr[30] >> 5u);
    ctx.set_gpr(3, ctx.gpr[3] << 2u);
    ctx.set_gpr(4, ctx.gpr[2] + ctx.gpr[3]);
    ctx.set_gpr(3, ctx.gpr[30] & 31u);
    ctx.set_gpr(2, 0u + static_cast<std::uint32_t>(1));
    ctx.set_gpr(3, ctx.gpr[2] << (ctx.gpr[3] & 31u));
    ctx.set_gpr(2, rt.memory().aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(0)));
    ctx.set_gpr(2, ctx.gpr[3] & ctx.gpr[2]);
    ctx.set_gpr(23, 0u < ctx.gpr[2] ? 1u : 0u);
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_08A2BDD4;
      }
      goto L_08A2BDD0;
    }
L_08A2BDD0:
    ctx.set_gpr(23, 0u + 0u);
    goto L_08A2BDD4;
L_08A2BDD4:
    ctx.set_gpr(2, rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(48)));
    { const bool branch_taken = ctx.gpr[2] == 0u;
    // nop
      if (branch_taken) {
          goto L_08A2BE68;
      }
      goto L_08A2BDE0;
    }
L_08A2BDE0:
    ctx.set_gpr(4, ctx.gpr[17] + static_cast<std::uint32_t>(12));
    ctx.set_gpr(5, ctx.gpr[19] + 0u);
    ctx.set_gpr(31, 0x08A2BDF0u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0085_entry, 85u, 61u, 0x089584C4u>(ctx, &aot_mem) && ctx.pc == 0x08A2BDF0u) goto L_08A2BDF0;
    return;
L_08A2BDF0:
    ctx.set_gpr(4, ctx.gpr[17] + static_cast<std::uint32_t>(16));
    ctx.set_gpr(5, rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(48)));
    ctx.set_gpr(31, 0x08A2BE00u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0085_entry, 85u, 61u, 0x089584C4u>(ctx, &aot_mem) && ctx.pc == 0x08A2BE00u) goto L_08A2BE00;
    return;
L_08A2BE00:
    rt.memory().aot_store32(ctx.gpr[17] + static_cast<std::uint32_t>(48), ctx.gpr[22]);
    rt.memory().aot_store8(ctx.gpr[17] + static_cast<std::uint32_t>(52), static_cast<std::uint8_t>(ctx.gpr[23]));
    ctx.set_gpr(4, rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(76)));
    ctx.set_gpr(5, ctx.gpr[20] + 0u);
    ctx.set_gpr(31, 0x08A2BE18u);
    // nop
    goto L_08A29284;
L_08A2BE18:
    ctx.set_gpr(3, 0u + static_cast<std::uint32_t>(-1));
    { const bool branch_taken = ctx.gpr[2] == ctx.gpr[3];
    // nop
      if (branch_taken) {
          goto L_08A2BE28;
      }
      goto L_08A2BE24;
    }
L_08A2BE24:
    rt.memory().aot_store32(ctx.gpr[17] + static_cast<std::uint32_t>(56), ctx.gpr[2]);
    goto L_08A2BE28;
L_08A2BE28:
    { const bool branch_taken = ctx.gpr[23] != 0u;
    // nop
      if (branch_taken) {
          goto L_08A2BF68;
      }
      goto L_08A2BE30;
    }
L_08A2BE30:
    ctx.set_gpr(4, rt.memory().aot_load32(ctx.gpr[21] + static_cast<std::uint32_t>(12)));
    ctx.set_gpr(2, ctx.gpr[20] << 1u);
    ctx.set_gpr(2, ctx.gpr[2] + ctx.gpr[20]);
    ctx.set_gpr(3, ctx.gpr[2] << 2u);
    ctx.set_gpr(2, rt.memory().aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(12)));
    ctx.set_gpr(2, ctx.gpr[2] + ctx.gpr[3]);
    ctx.fpr[2] = std::bit_cast<float>(rt.memory().aot_load32(ctx.gpr[2] + static_cast<std::uint32_t>(8)));
    ctx.fpr[1] = std::bit_cast<float>(rt.memory().aot_load32(ctx.gpr[2] + static_cast<std::uint32_t>(4)));
    ctx.fpr[0] = std::bit_cast<float>(rt.memory().aot_load32(ctx.gpr[2] + static_cast<std::uint32_t>(0)));
    rt.memory().aot_store32(ctx.gpr[17] + static_cast<std::uint32_t>(36), std::bit_cast<std::uint32_t>(ctx.fpr[0]));
    rt.memory().aot_store32(ctx.gpr[17] + static_cast<std::uint32_t>(40), std::bit_cast<std::uint32_t>(ctx.fpr[1]));
    rt.memory().aot_store32(ctx.gpr[17] + static_cast<std::uint32_t>(44), std::bit_cast<std::uint32_t>(ctx.fpr[2]));
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_08A2BF68;
      }
      goto L_08A2BE68;
    }
L_08A2BE68:
    ctx.set_gpr(18, ctx.gpr[18] + static_cast<std::uint32_t>(16));
    { const bool branch_taken = ctx.gpr[23] != 0u;
    // nop
      if (branch_taken) {
          goto L_08A2BE94;
      }
      goto L_08A2BE74;
    }
L_08A2BE74:
    ctx.set_gpr(4, rt.memory().aot_load32(ctx.gpr[21] + static_cast<std::uint32_t>(12)));
    ctx.set_gpr(2, ctx.gpr[20] << 1u);
    ctx.set_gpr(2, ctx.gpr[2] + ctx.gpr[20]);
    ctx.set_gpr(3, ctx.gpr[2] << 2u);
    ctx.set_gpr(2, rt.memory().aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(12)));
    ctx.set_gpr(23, ctx.gpr[2] + ctx.gpr[3]);
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_08A2BEAC;
      }
      goto L_08A2BE94;
    }
L_08A2BE94:
    ctx.set_gpr(2, rt.memory().aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(20)));
    ctx.set_gpr(3, ctx.gpr[30] << 2u);
    ctx.set_gpr(2, rt.memory().aot_load32(ctx.gpr[2] + static_cast<std::uint32_t>(16)));
    ctx.set_gpr(2, ctx.gpr[2] + ctx.gpr[3]);
    ctx.set_gpr(2, rt.memory().aot_load32(ctx.gpr[2] + static_cast<std::uint32_t>(0)));
    ctx.set_gpr(23, ctx.gpr[2] + static_cast<std::uint32_t>(32));
    goto L_08A2BEAC;
L_08A2BEAC:
    ctx.set_gpr(4, rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(76)));
    ctx.set_gpr(5, ctx.gpr[20] + 0u);
    ctx.set_gpr(31, 0x08A2BEBCu);
    // nop
    goto L_08A29284;
L_08A2BEBC:
    ctx.set_gpr(3, 0u + static_cast<std::uint32_t>(-1));
    { const bool branch_taken = ctx.gpr[2] == ctx.gpr[3];
    // nop
      if (branch_taken) {
          goto L_08A2BF1C;
      }
      goto L_08A2BEC8;
    }
L_08A2BEC8:
    ctx.fpr[3] = std::bit_cast<float>(rt.memory().aot_load32(ctx.gpr[18] + static_cast<std::uint32_t>(0)));
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(60), std::bit_cast<std::uint32_t>(ctx.fpr[3]));
    ctx.fpr[2] = std::bit_cast<float>(rt.memory().aot_load32(ctx.gpr[18] + static_cast<std::uint32_t>(4)));
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(64), std::bit_cast<std::uint32_t>(ctx.fpr[2]));
    ctx.fpr[1] = std::bit_cast<float>(rt.memory().aot_load32(ctx.gpr[18] + static_cast<std::uint32_t>(8)));
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(68), std::bit_cast<std::uint32_t>(ctx.fpr[1]));
    ctx.fpr[0] = std::bit_cast<float>(rt.memory().aot_load32(ctx.gpr[18] + static_cast<std::uint32_t>(12)));
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(72), std::bit_cast<std::uint32_t>(ctx.fpr[0]));
    ctx.set_fpr_bits(0, ctx.fpr_bits(3) ^ 0x80000000u);
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(60), std::bit_cast<std::uint32_t>(ctx.fpr[0]));
    ctx.set_fpr_bits(0, ctx.fpr_bits(2) ^ 0x80000000u);
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(64), std::bit_cast<std::uint32_t>(ctx.fpr[0]));
    ctx.set_fpr_bits(0, ctx.fpr_bits(1) ^ 0x80000000u);
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(68), std::bit_cast<std::uint32_t>(ctx.fpr[0]));
    ctx.set_gpr(2, ctx.gpr[2] << 2u);
    ctx.set_gpr(2, ctx.gpr[2] + ctx.gpr[29]);
    ctx.set_gpr(2, ctx.gpr[2] + static_cast<std::uint32_t>(60));
    ctx.fpr[0] = std::bit_cast<float>(rt.memory().aot_load32(ctx.gpr[2] + static_cast<std::uint32_t>(0)));
    ctx.set_fpr_bits(0, ctx.fpr_bits(0) ^ 0x80000000u);
    rt.memory().aot_store32(ctx.gpr[2] + static_cast<std::uint32_t>(0), std::bit_cast<std::uint32_t>(ctx.fpr[0]));
    ctx.set_gpr(18, ctx.gpr[29] + static_cast<std::uint32_t>(60));
    goto L_08A2BF1C;
L_08A2BF1C:
    ctx.set_gpr(4, ctx.gpr[17] + static_cast<std::uint32_t>(12));
    ctx.set_gpr(5, ctx.gpr[19] + 0u);
    ctx.set_gpr(31, 0x08A2BF2Cu);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0085_entry, 85u, 61u, 0x089584C4u>(ctx, &aot_mem) && ctx.pc == 0x08A2BF2Cu) goto L_08A2BF2C;
    return;
L_08A2BF2C:
    ctx.fpr[0] = std::bit_cast<float>(rt.memory().aot_load32(ctx.gpr[18] + static_cast<std::uint32_t>(0)));
    rt.memory().aot_store32(ctx.gpr[17] + static_cast<std::uint32_t>(20), std::bit_cast<std::uint32_t>(ctx.fpr[0]));
    ctx.fpr[0] = std::bit_cast<float>(rt.memory().aot_load32(ctx.gpr[18] + static_cast<std::uint32_t>(4)));
    rt.memory().aot_store32(ctx.gpr[17] + static_cast<std::uint32_t>(24), std::bit_cast<std::uint32_t>(ctx.fpr[0]));
    ctx.fpr[0] = std::bit_cast<float>(rt.memory().aot_load32(ctx.gpr[18] + static_cast<std::uint32_t>(8)));
    rt.memory().aot_store32(ctx.gpr[17] + static_cast<std::uint32_t>(28), std::bit_cast<std::uint32_t>(ctx.fpr[0]));
    ctx.fpr[0] = std::bit_cast<float>(rt.memory().aot_load32(ctx.gpr[18] + static_cast<std::uint32_t>(12)));
    rt.memory().aot_store32(ctx.gpr[17] + static_cast<std::uint32_t>(32), std::bit_cast<std::uint32_t>(ctx.fpr[0]));
    ctx.fpr[0] = std::bit_cast<float>(rt.memory().aot_load32(ctx.gpr[23] + static_cast<std::uint32_t>(0)));
    rt.memory().aot_store32(ctx.gpr[17] + static_cast<std::uint32_t>(36), std::bit_cast<std::uint32_t>(ctx.fpr[0]));
    ctx.fpr[0] = std::bit_cast<float>(rt.memory().aot_load32(ctx.gpr[23] + static_cast<std::uint32_t>(4)));
    rt.memory().aot_store32(ctx.gpr[17] + static_cast<std::uint32_t>(40), std::bit_cast<std::uint32_t>(ctx.fpr[0]));
    ctx.fpr[0] = std::bit_cast<float>(rt.memory().aot_load32(ctx.gpr[23] + static_cast<std::uint32_t>(8)));
    rt.memory().aot_store32(ctx.gpr[17] + static_cast<std::uint32_t>(44), std::bit_cast<std::uint32_t>(ctx.fpr[0]));
    rt.memory().aot_store32(ctx.gpr[17] + static_cast<std::uint32_t>(48), ctx.gpr[22]);
    goto L_08A2BF68;
L_08A2BF68:
    ctx.set_gpr(4, ctx.gpr[21] + 0u);
    ctx.set_gpr(5, ctx.gpr[17] + 0u);
    ctx.set_gpr(6, ctx.gpr[20] + 0u);
    ctx.set_gpr(31, 0x08A2BF7Cu);
    // nop
    goto L_08A2B678;
L_08A2BF7C:
    ctx.set_gpr(20, ctx.gpr[20] + static_cast<std::uint32_t>(1));
    goto L_08A2BF80;
L_08A2BF80:
    ctx.set_gpr(2, rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(52)));
    ctx.set_gpr(2, static_cast<std::int32_t>(ctx.gpr[20]) < static_cast<std::int32_t>(ctx.gpr[2]) ? 1u : 0u);
    { const bool branch_taken = ctx.gpr[2] != 0u;
    // nop
      if (branch_taken) {
          goto L_08A2BCC8;
      }
      goto L_08A2BF90;
    }
L_08A2BF90:
    ctx.set_gpr(2, 2246u << 16u);
    ctx.set_gpr(4, rt.memory().aot_load32(ctx.gpr[2] + static_cast<std::uint32_t>(-22300)));
    { const bool branch_taken = ctx.gpr[4] == 0u;
    // nop
      if (branch_taken) {
          goto L_08A2BFB0;
      }
      goto L_08A2BFA0;
    }
L_08A2BFA0:
    ctx.set_gpr(25, rt.memory().aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(0)));
    ctx.set_gpr(25, rt.memory().aot_load32(ctx.gpr[25] + static_cast<std::uint32_t>(124)));
    jump_target = ctx.gpr[25];
    ctx.set_gpr(31, 0x08A2BFB0u);
    // nop
    ctx.pc = jump_target;
    if (rt.invoke_chained_call(ctx, &aot_mem) && ctx.pc == 0x08A2BFB0u) goto L_08A2BFB0;
    return;
L_08A2BFB0:
    ctx.set_gpr(2, 0u + static_cast<std::uint32_t>(1));
    goto L_08A2BFB4;
L_08A2BFB4:
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
    ctx.set_gpr(29, ctx.gpr[29] + static_cast<std::uint32_t>(80));
    jump_target = ctx.gpr[31];
    // nop
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_08A2BFE8:
    ctx.set_gpr(29, ctx.gpr[29] + static_cast<std::uint32_t>(-32));
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(28), ctx.gpr[31]);
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(24), ctx.gpr[22]);
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(20), ctx.gpr[21]);
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(16), ctx.gpr[20]);
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(12), ctx.gpr[19]);
    ctx.pc = 0x08A2C000u; return;
}

void recomp_unit_0137(Runtime &rt, AllegrexContext &ctx) {
    auto aot_mem = rt.memory().aot_fast_view();
    recomp_unit_0137_entry(rt, ctx, 0u, aot_mem);
}

void register_generated_unit_137(Runtime &runtime) {
    runtime.register_generated_unit(137u, 0x08A28000u, 16384u, &recomp_unit_0137, &recomp_unit_0137_entry);
    runtime.register_function(0x08A28000u, &recomp_unit_0137, "recomp_unit_0137");
    runtime.register_function(0x08A28014u, &recomp_unit_0137, "recomp_unit_0137");
    runtime.register_function(0x08A280A4u, &recomp_unit_0137, "recomp_unit_0137");
    runtime.register_function(0x08A280BCu, &recomp_unit_0137, "recomp_unit_0137");
    runtime.register_function(0x08A280CCu, &recomp_unit_0137, "recomp_unit_0137");
    runtime.register_function(0x08A280DCu, &recomp_unit_0137, "recomp_unit_0137");
    runtime.register_function(0x08A28138u, &recomp_unit_0137, "recomp_unit_0137");
    runtime.register_function(0x08A28148u, &recomp_unit_0137, "recomp_unit_0137");
    runtime.register_function(0x08A28158u, &recomp_unit_0137, "recomp_unit_0137");
    runtime.register_function(0x08A28180u, &recomp_unit_0137, "recomp_unit_0137");
    runtime.register_function(0x08A2819Cu, &recomp_unit_0137, "recomp_unit_0137");
    runtime.register_function(0x08A281ACu, &recomp_unit_0137, "recomp_unit_0137");
    runtime.register_function(0x08A281B8u, &recomp_unit_0137, "recomp_unit_0137");
    runtime.register_function(0x08A281D0u, &recomp_unit_0137, "recomp_unit_0137");
    runtime.register_function(0x08A281E4u, &recomp_unit_0137, "recomp_unit_0137");
    runtime.register_function(0x08A281F8u, &recomp_unit_0137, "recomp_unit_0137");
    runtime.register_function(0x08A28204u, &recomp_unit_0137, "recomp_unit_0137");
    runtime.register_function(0x08A2821Cu, &recomp_unit_0137, "recomp_unit_0137");
    runtime.register_function(0x08A28228u, &recomp_unit_0137, "recomp_unit_0137");
    runtime.register_function(0x08A28240u, &recomp_unit_0137, "recomp_unit_0137");
    runtime.register_function(0x08A2824Cu, &recomp_unit_0137, "recomp_unit_0137");
    runtime.register_function(0x08A2827Cu, &recomp_unit_0137, "recomp_unit_0137");
    runtime.register_function(0x08A282ACu, &recomp_unit_0137, "recomp_unit_0137");
    runtime.register_function(0x08A282D4u, &recomp_unit_0137, "recomp_unit_0137");
    runtime.register_function(0x08A282E0u, &recomp_unit_0137, "recomp_unit_0137");
    runtime.register_function(0x08A282F4u, &recomp_unit_0137, "recomp_unit_0137");
    runtime.register_function(0x08A2830Cu, &recomp_unit_0137, "recomp_unit_0137");
    runtime.register_function(0x08A28328u, &recomp_unit_0137, "recomp_unit_0137");
    runtime.register_function(0x08A28334u, &recomp_unit_0137, "recomp_unit_0137");
    runtime.register_function(0x08A28350u, &recomp_unit_0137, "recomp_unit_0137");
    runtime.register_function(0x08A28368u, &recomp_unit_0137, "recomp_unit_0137");
    runtime.register_function(0x08A28380u, &recomp_unit_0137, "recomp_unit_0137");
    runtime.register_function(0x08A28388u, &recomp_unit_0137, "recomp_unit_0137");
    runtime.register_function(0x08A283A4u, &recomp_unit_0137, "recomp_unit_0137");
    runtime.register_function(0x08A283C0u, &recomp_unit_0137, "recomp_unit_0137");
    runtime.register_function(0x08A283DCu, &recomp_unit_0137, "recomp_unit_0137");
    runtime.register_function(0x08A283ECu, &recomp_unit_0137, "recomp_unit_0137");
    runtime.register_function(0x08A2842Cu, &recomp_unit_0137, "recomp_unit_0137");
    runtime.register_function(0x08A2843Cu, &recomp_unit_0137, "recomp_unit_0137");
    runtime.register_function(0x08A28448u, &recomp_unit_0137, "recomp_unit_0137");
    runtime.register_function(0x08A2845Cu, &recomp_unit_0137, "recomp_unit_0137");
    runtime.register_function(0x08A28464u, &recomp_unit_0137, "recomp_unit_0137");
    runtime.register_function(0x08A2847Cu, &recomp_unit_0137, "recomp_unit_0137");
    runtime.register_function(0x08A28494u, &recomp_unit_0137, "recomp_unit_0137");
    runtime.register_function(0x08A284A0u, &recomp_unit_0137, "recomp_unit_0137");
    runtime.register_function(0x08A284B0u, &recomp_unit_0137, "recomp_unit_0137");
    runtime.register_function(0x08A284B4u, &recomp_unit_0137, "recomp_unit_0137");
    runtime.register_function(0x08A284C0u, &recomp_unit_0137, "recomp_unit_0137");
    runtime.register_function(0x08A284CCu, &recomp_unit_0137, "recomp_unit_0137");
    runtime.register_function(0x08A284E0u, &recomp_unit_0137, "recomp_unit_0137");
    runtime.register_function(0x08A2850Cu, &recomp_unit_0137, "recomp_unit_0137");
    runtime.register_function(0x08A28518u, &recomp_unit_0137, "recomp_unit_0137");
    runtime.register_function(0x08A28568u, &recomp_unit_0137, "recomp_unit_0137");
    runtime.register_function(0x08A28590u, &recomp_unit_0137, "recomp_unit_0137");
    runtime.register_function(0x08A285B8u, &recomp_unit_0137, "recomp_unit_0137");
    runtime.register_function(0x08A285C4u, &recomp_unit_0137, "recomp_unit_0137");
    runtime.register_function(0x08A285D8u, &recomp_unit_0137, "recomp_unit_0137");
    runtime.register_function(0x08A285E8u, &recomp_unit_0137, "recomp_unit_0137");
    runtime.register_function(0x08A285F8u, &recomp_unit_0137, "recomp_unit_0137");
    runtime.register_function(0x08A28614u, &recomp_unit_0137, "recomp_unit_0137");
    runtime.register_function(0x08A28620u, &recomp_unit_0137, "recomp_unit_0137");
    runtime.register_function(0x08A28634u, &recomp_unit_0137, "recomp_unit_0137");
    runtime.register_function(0x08A28644u, &recomp_unit_0137, "recomp_unit_0137");
    runtime.register_function(0x08A28654u, &recomp_unit_0137, "recomp_unit_0137");
    runtime.register_function(0x08A28664u, &recomp_unit_0137, "recomp_unit_0137");
    runtime.register_function(0x08A28670u, &recomp_unit_0137, "recomp_unit_0137");
    runtime.register_function(0x08A2867Cu, &recomp_unit_0137, "recomp_unit_0137");
    runtime.register_function(0x08A28688u, &recomp_unit_0137, "recomp_unit_0137");
    runtime.register_function(0x08A2868Cu, &recomp_unit_0137, "recomp_unit_0137");
    runtime.register_function(0x08A28698u, &recomp_unit_0137, "recomp_unit_0137");
    runtime.register_function(0x08A286A8u, &recomp_unit_0137, "recomp_unit_0137");
    runtime.register_function(0x08A286B8u, &recomp_unit_0137, "recomp_unit_0137");
    runtime.register_function(0x08A286C4u, &recomp_unit_0137, "recomp_unit_0137");
    runtime.register_function(0x08A286D4u, &recomp_unit_0137, "recomp_unit_0137");
    runtime.register_function(0x08A286E4u, &recomp_unit_0137, "recomp_unit_0137");
    runtime.register_function(0x08A286F4u, &recomp_unit_0137, "recomp_unit_0137");
    runtime.register_function(0x08A28704u, &recomp_unit_0137, "recomp_unit_0137");
    runtime.register_function(0x08A28724u, &recomp_unit_0137, "recomp_unit_0137");
    runtime.register_function(0x08A28754u, &recomp_unit_0137, "recomp_unit_0137");
    runtime.register_function(0x08A28768u, &recomp_unit_0137, "recomp_unit_0137");
    runtime.register_function(0x08A28778u, &recomp_unit_0137, "recomp_unit_0137");
    runtime.register_function(0x08A287A8u, &recomp_unit_0137, "recomp_unit_0137");
    runtime.register_function(0x08A287D8u, &recomp_unit_0137, "recomp_unit_0137");
    runtime.register_function(0x08A287ECu, &recomp_unit_0137, "recomp_unit_0137");
    runtime.register_function(0x08A287FCu, &recomp_unit_0137, "recomp_unit_0137");
    runtime.register_function(0x08A2882Cu, &recomp_unit_0137, "recomp_unit_0137");
    runtime.register_function(0x08A28838u, &recomp_unit_0137, "recomp_unit_0137");
    runtime.register_function(0x08A28860u, &recomp_unit_0137, "recomp_unit_0137");
    runtime.register_function(0x08A2888Cu, &recomp_unit_0137, "recomp_unit_0137");
    runtime.register_function(0x08A2889Cu, &recomp_unit_0137, "recomp_unit_0137");
    runtime.register_function(0x08A288B4u, &recomp_unit_0137, "recomp_unit_0137");
    runtime.register_function(0x08A288C0u, &recomp_unit_0137, "recomp_unit_0137");
    runtime.register_function(0x08A288C8u, &recomp_unit_0137, "recomp_unit_0137");
    runtime.register_function(0x08A288CCu, &recomp_unit_0137, "recomp_unit_0137");
    runtime.register_function(0x08A288DCu, &recomp_unit_0137, "recomp_unit_0137");
    runtime.register_function(0x08A288ECu, &recomp_unit_0137, "recomp_unit_0137");
    runtime.register_function(0x08A288FCu, &recomp_unit_0137, "recomp_unit_0137");
    runtime.register_function(0x08A28908u, &recomp_unit_0137, "recomp_unit_0137");
    runtime.register_function(0x08A28914u, &recomp_unit_0137, "recomp_unit_0137");
    runtime.register_function(0x08A2891Cu, &recomp_unit_0137, "recomp_unit_0137");
    runtime.register_function(0x08A2892Cu, &recomp_unit_0137, "recomp_unit_0137");
    runtime.register_function(0x08A28938u, &recomp_unit_0137, "recomp_unit_0137");
    runtime.register_function(0x08A2894Cu, &recomp_unit_0137, "recomp_unit_0137");
    runtime.register_function(0x08A28960u, &recomp_unit_0137, "recomp_unit_0137");
    runtime.register_function(0x08A2896Cu, &recomp_unit_0137, "recomp_unit_0137");
    runtime.register_function(0x08A2897Cu, &recomp_unit_0137, "recomp_unit_0137");
    runtime.register_function(0x08A28988u, &recomp_unit_0137, "recomp_unit_0137");
    runtime.register_function(0x08A289E4u, &recomp_unit_0137, "recomp_unit_0137");
    runtime.register_function(0x08A289F0u, &recomp_unit_0137, "recomp_unit_0137");
    runtime.register_function(0x08A28A00u, &recomp_unit_0137, "recomp_unit_0137");
    runtime.register_function(0x08A28A10u, &recomp_unit_0137, "recomp_unit_0137");
    runtime.register_function(0x08A28A6Cu, &recomp_unit_0137, "recomp_unit_0137");
    runtime.register_function(0x08A28A70u, &recomp_unit_0137, "recomp_unit_0137");
    runtime.register_function(0x08A28A8Cu, &recomp_unit_0137, "recomp_unit_0137");
    runtime.register_function(0x08A28AA8u, &recomp_unit_0137, "recomp_unit_0137");
    runtime.register_function(0x08A28AC0u, &recomp_unit_0137, "recomp_unit_0137");
    runtime.register_function(0x08A28ACCu, &recomp_unit_0137, "recomp_unit_0137");
    runtime.register_function(0x08A28ADCu, &recomp_unit_0137, "recomp_unit_0137");
    runtime.register_function(0x08A28B00u, &recomp_unit_0137, "recomp_unit_0137");
    runtime.register_function(0x08A28B10u, &recomp_unit_0137, "recomp_unit_0137");
    runtime.register_function(0x08A28B18u, &recomp_unit_0137, "recomp_unit_0137");
    runtime.register_function(0x08A28B34u, &recomp_unit_0137, "recomp_unit_0137");
    runtime.register_function(0x08A28B44u, &recomp_unit_0137, "recomp_unit_0137");
    runtime.register_function(0x08A28B58u, &recomp_unit_0137, "recomp_unit_0137");
    runtime.register_function(0x08A28B7Cu, &recomp_unit_0137, "recomp_unit_0137");
    runtime.register_function(0x08A28B84u, &recomp_unit_0137, "recomp_unit_0137");
    runtime.register_function(0x08A28B8Cu, &recomp_unit_0137, "recomp_unit_0137");
    runtime.register_function(0x08A28BA0u, &recomp_unit_0137, "recomp_unit_0137");
    runtime.register_function(0x08A28BA8u, &recomp_unit_0137, "recomp_unit_0137");
    runtime.register_function(0x08A28BACu, &recomp_unit_0137, "recomp_unit_0137");
    runtime.register_function(0x08A28BB8u, &recomp_unit_0137, "recomp_unit_0137");
    runtime.register_function(0x08A28BBCu, &recomp_unit_0137, "recomp_unit_0137");
    runtime.register_function(0x08A28BC4u, &recomp_unit_0137, "recomp_unit_0137");
    runtime.register_function(0x08A28C00u, &recomp_unit_0137, "recomp_unit_0137");
    runtime.register_function(0x08A28C08u, &recomp_unit_0137, "recomp_unit_0137");
    runtime.register_function(0x08A28C10u, &recomp_unit_0137, "recomp_unit_0137");
    runtime.register_function(0x08A28C18u, &recomp_unit_0137, "recomp_unit_0137");
    runtime.register_function(0x08A28C24u, &recomp_unit_0137, "recomp_unit_0137");
    runtime.register_function(0x08A28C34u, &recomp_unit_0137, "recomp_unit_0137");
    runtime.register_function(0x08A28C40u, &recomp_unit_0137, "recomp_unit_0137");
    runtime.register_function(0x08A28C48u, &recomp_unit_0137, "recomp_unit_0137");
    runtime.register_function(0x08A28C54u, &recomp_unit_0137, "recomp_unit_0137");
    runtime.register_function(0x08A28C5Cu, &recomp_unit_0137, "recomp_unit_0137");
    runtime.register_function(0x08A28C70u, &recomp_unit_0137, "recomp_unit_0137");
    runtime.register_function(0x08A28C74u, &recomp_unit_0137, "recomp_unit_0137");
    runtime.register_function(0x08A28C90u, &recomp_unit_0137, "recomp_unit_0137");
    runtime.register_function(0x08A28CCCu, &recomp_unit_0137, "recomp_unit_0137");
    runtime.register_function(0x08A28CD8u, &recomp_unit_0137, "recomp_unit_0137");
    runtime.register_function(0x08A28CECu, &recomp_unit_0137, "recomp_unit_0137");
    runtime.register_function(0x08A28D00u, &recomp_unit_0137, "recomp_unit_0137");
    runtime.register_function(0x08A28D14u, &recomp_unit_0137, "recomp_unit_0137");
    runtime.register_function(0x08A28D30u, &recomp_unit_0137, "recomp_unit_0137");
    runtime.register_function(0x08A28D40u, &recomp_unit_0137, "recomp_unit_0137");
    runtime.register_function(0x08A28D54u, &recomp_unit_0137, "recomp_unit_0137");
    runtime.register_function(0x08A28D6Cu, &recomp_unit_0137, "recomp_unit_0137");
    runtime.register_function(0x08A28D70u, &recomp_unit_0137, "recomp_unit_0137");
    runtime.register_function(0x08A28D78u, &recomp_unit_0137, "recomp_unit_0137");
    runtime.register_function(0x08A28D90u, &recomp_unit_0137, "recomp_unit_0137");
    runtime.register_function(0x08A28D9Cu, &recomp_unit_0137, "recomp_unit_0137");
    runtime.register_function(0x08A28DA8u, &recomp_unit_0137, "recomp_unit_0137");
    runtime.register_function(0x08A28DACu, &recomp_unit_0137, "recomp_unit_0137");
    runtime.register_function(0x08A28DC0u, &recomp_unit_0137, "recomp_unit_0137");
    runtime.register_function(0x08A28DCCu, &recomp_unit_0137, "recomp_unit_0137");
    runtime.register_function(0x08A28DD4u, &recomp_unit_0137, "recomp_unit_0137");
    runtime.register_function(0x08A28DE8u, &recomp_unit_0137, "recomp_unit_0137");
    runtime.register_function(0x08A28DF4u, &recomp_unit_0137, "recomp_unit_0137");
    runtime.register_function(0x08A28DF8u, &recomp_unit_0137, "recomp_unit_0137");
    runtime.register_function(0x08A28E14u, &recomp_unit_0137, "recomp_unit_0137");
    runtime.register_function(0x08A28E20u, &recomp_unit_0137, "recomp_unit_0137");
    runtime.register_function(0x08A28E54u, &recomp_unit_0137, "recomp_unit_0137");
    runtime.register_function(0x08A28E84u, &recomp_unit_0137, "recomp_unit_0137");
    runtime.register_function(0x08A28E90u, &recomp_unit_0137, "recomp_unit_0137");
    runtime.register_function(0x08A28EA4u, &recomp_unit_0137, "recomp_unit_0137");
    runtime.register_function(0x08A28EB8u, &recomp_unit_0137, "recomp_unit_0137");
    runtime.register_function(0x08A28ED4u, &recomp_unit_0137, "recomp_unit_0137");
    runtime.register_function(0x08A28EE8u, &recomp_unit_0137, "recomp_unit_0137");
    runtime.register_function(0x08A28F08u, &recomp_unit_0137, "recomp_unit_0137");
    runtime.register_function(0x08A28F14u, &recomp_unit_0137, "recomp_unit_0137");
    runtime.register_function(0x08A28F20u, &recomp_unit_0137, "recomp_unit_0137");
    runtime.register_function(0x08A28F24u, &recomp_unit_0137, "recomp_unit_0137");
    runtime.register_function(0x08A28F30u, &recomp_unit_0137, "recomp_unit_0137");
    runtime.register_function(0x08A28F38u, &recomp_unit_0137, "recomp_unit_0137");
    runtime.register_function(0x08A28F40u, &recomp_unit_0137, "recomp_unit_0137");
    runtime.register_function(0x08A28F54u, &recomp_unit_0137, "recomp_unit_0137");
    runtime.register_function(0x08A28F74u, &recomp_unit_0137, "recomp_unit_0137");
    runtime.register_function(0x08A28F80u, &recomp_unit_0137, "recomp_unit_0137");
    runtime.register_function(0x08A28F8Cu, &recomp_unit_0137, "recomp_unit_0137");
    runtime.register_function(0x08A28F90u, &recomp_unit_0137, "recomp_unit_0137");
    runtime.register_function(0x08A28F9Cu, &recomp_unit_0137, "recomp_unit_0137");
    runtime.register_function(0x08A28FA4u, &recomp_unit_0137, "recomp_unit_0137");
    runtime.register_function(0x08A28FACu, &recomp_unit_0137, "recomp_unit_0137");
    runtime.register_function(0x08A28FD0u, &recomp_unit_0137, "recomp_unit_0137");
    runtime.register_function(0x08A28FE0u, &recomp_unit_0137, "recomp_unit_0137");
    runtime.register_function(0x08A28FF0u, &recomp_unit_0137, "recomp_unit_0137");
    runtime.register_function(0x08A28FFCu, &recomp_unit_0137, "recomp_unit_0137");
    runtime.register_function(0x08A29014u, &recomp_unit_0137, "recomp_unit_0137");
    runtime.register_function(0x08A2901Cu, &recomp_unit_0137, "recomp_unit_0137");
    runtime.register_function(0x08A29040u, &recomp_unit_0137, "recomp_unit_0137");
    runtime.register_function(0x08A29050u, &recomp_unit_0137, "recomp_unit_0137");
    runtime.register_function(0x08A29060u, &recomp_unit_0137, "recomp_unit_0137");
    runtime.register_function(0x08A29080u, &recomp_unit_0137, "recomp_unit_0137");
    runtime.register_function(0x08A29090u, &recomp_unit_0137, "recomp_unit_0137");
    runtime.register_function(0x08A2909Cu, &recomp_unit_0137, "recomp_unit_0137");
    runtime.register_function(0x08A290B4u, &recomp_unit_0137, "recomp_unit_0137");
    runtime.register_function(0x08A290BCu, &recomp_unit_0137, "recomp_unit_0137");
    runtime.register_function(0x08A290CCu, &recomp_unit_0137, "recomp_unit_0137");
    runtime.register_function(0x08A290D8u, &recomp_unit_0137, "recomp_unit_0137");
    runtime.register_function(0x08A290E0u, &recomp_unit_0137, "recomp_unit_0137");
    runtime.register_function(0x08A290E8u, &recomp_unit_0137, "recomp_unit_0137");
    runtime.register_function(0x08A290F8u, &recomp_unit_0137, "recomp_unit_0137");
    runtime.register_function(0x08A29104u, &recomp_unit_0137, "recomp_unit_0137");
    runtime.register_function(0x08A2910Cu, &recomp_unit_0137, "recomp_unit_0137");
    runtime.register_function(0x08A29114u, &recomp_unit_0137, "recomp_unit_0137");
    runtime.register_function(0x08A29120u, &recomp_unit_0137, "recomp_unit_0137");
    runtime.register_function(0x08A29148u, &recomp_unit_0137, "recomp_unit_0137");
    runtime.register_function(0x08A29164u, &recomp_unit_0137, "recomp_unit_0137");
    runtime.register_function(0x08A29180u, &recomp_unit_0137, "recomp_unit_0137");
    runtime.register_function(0x08A29194u, &recomp_unit_0137, "recomp_unit_0137");
    runtime.register_function(0x08A29198u, &recomp_unit_0137, "recomp_unit_0137");
    runtime.register_function(0x08A291A4u, &recomp_unit_0137, "recomp_unit_0137");
    runtime.register_function(0x08A291B8u, &recomp_unit_0137, "recomp_unit_0137");
    runtime.register_function(0x08A291C4u, &recomp_unit_0137, "recomp_unit_0137");
    runtime.register_function(0x08A291D0u, &recomp_unit_0137, "recomp_unit_0137");
    runtime.register_function(0x08A291ECu, &recomp_unit_0137, "recomp_unit_0137");
    runtime.register_function(0x08A291F8u, &recomp_unit_0137, "recomp_unit_0137");
    runtime.register_function(0x08A29210u, &recomp_unit_0137, "recomp_unit_0137");
    runtime.register_function(0x08A29220u, &recomp_unit_0137, "recomp_unit_0137");
    runtime.register_function(0x08A29244u, &recomp_unit_0137, "recomp_unit_0137");
    runtime.register_function(0x08A2926Cu, &recomp_unit_0137, "recomp_unit_0137");
    runtime.register_function(0x08A29274u, &recomp_unit_0137, "recomp_unit_0137");
    runtime.register_function(0x08A2927Cu, &recomp_unit_0137, "recomp_unit_0137");
    runtime.register_function(0x08A29284u, &recomp_unit_0137, "recomp_unit_0137");
    runtime.register_function(0x08A29290u, &recomp_unit_0137, "recomp_unit_0137");
    runtime.register_function(0x08A2929Cu, &recomp_unit_0137, "recomp_unit_0137");
    runtime.register_function(0x08A292D0u, &recomp_unit_0137, "recomp_unit_0137");
    runtime.register_function(0x08A292D4u, &recomp_unit_0137, "recomp_unit_0137");
    runtime.register_function(0x08A29308u, &recomp_unit_0137, "recomp_unit_0137");
    runtime.register_function(0x08A2930Cu, &recomp_unit_0137, "recomp_unit_0137");
    runtime.register_function(0x08A2931Cu, &recomp_unit_0137, "recomp_unit_0137");
    runtime.register_function(0x08A29320u, &recomp_unit_0137, "recomp_unit_0137");
    runtime.register_function(0x08A29328u, &recomp_unit_0137, "recomp_unit_0137");
    runtime.register_function(0x08A2933Cu, &recomp_unit_0137, "recomp_unit_0137");
    runtime.register_function(0x08A29348u, &recomp_unit_0137, "recomp_unit_0137");
    runtime.register_function(0x08A29354u, &recomp_unit_0137, "recomp_unit_0137");
    runtime.register_function(0x08A29368u, &recomp_unit_0137, "recomp_unit_0137");
    runtime.register_function(0x08A2937Cu, &recomp_unit_0137, "recomp_unit_0137");
    runtime.register_function(0x08A29388u, &recomp_unit_0137, "recomp_unit_0137");
    runtime.register_function(0x08A29394u, &recomp_unit_0137, "recomp_unit_0137");
    runtime.register_function(0x08A293A8u, &recomp_unit_0137, "recomp_unit_0137");
    runtime.register_function(0x08A293C0u, &recomp_unit_0137, "recomp_unit_0137");
    runtime.register_function(0x08A293CCu, &recomp_unit_0137, "recomp_unit_0137");
    runtime.register_function(0x08A293D8u, &recomp_unit_0137, "recomp_unit_0137");
    runtime.register_function(0x08A293ECu, &recomp_unit_0137, "recomp_unit_0137");
    runtime.register_function(0x08A293F4u, &recomp_unit_0137, "recomp_unit_0137");
    runtime.register_function(0x08A2941Cu, &recomp_unit_0137, "recomp_unit_0137");
    runtime.register_function(0x08A29444u, &recomp_unit_0137, "recomp_unit_0137");
    runtime.register_function(0x08A29450u, &recomp_unit_0137, "recomp_unit_0137");
    runtime.register_function(0x08A29458u, &recomp_unit_0137, "recomp_unit_0137");
    runtime.register_function(0x08A29464u, &recomp_unit_0137, "recomp_unit_0137");
    runtime.register_function(0x08A29470u, &recomp_unit_0137, "recomp_unit_0137");
    runtime.register_function(0x08A29484u, &recomp_unit_0137, "recomp_unit_0137");
    runtime.register_function(0x08A2949Cu, &recomp_unit_0137, "recomp_unit_0137");
    runtime.register_function(0x08A294B0u, &recomp_unit_0137, "recomp_unit_0137");
    runtime.register_function(0x08A294C8u, &recomp_unit_0137, "recomp_unit_0137");
    runtime.register_function(0x08A294DCu, &recomp_unit_0137, "recomp_unit_0137");
    runtime.register_function(0x08A294F0u, &recomp_unit_0137, "recomp_unit_0137");
    runtime.register_function(0x08A29504u, &recomp_unit_0137, "recomp_unit_0137");
    runtime.register_function(0x08A29514u, &recomp_unit_0137, "recomp_unit_0137");
    runtime.register_function(0x08A29524u, &recomp_unit_0137, "recomp_unit_0137");
    runtime.register_function(0x08A29538u, &recomp_unit_0137, "recomp_unit_0137");
    runtime.register_function(0x08A2954Cu, &recomp_unit_0137, "recomp_unit_0137");
    runtime.register_function(0x08A2955Cu, &recomp_unit_0137, "recomp_unit_0137");
    runtime.register_function(0x08A29598u, &recomp_unit_0137, "recomp_unit_0137");
    runtime.register_function(0x08A295B8u, &recomp_unit_0137, "recomp_unit_0137");
    runtime.register_function(0x08A295D8u, &recomp_unit_0137, "recomp_unit_0137");
    runtime.register_function(0x08A295F8u, &recomp_unit_0137, "recomp_unit_0137");
    runtime.register_function(0x08A29614u, &recomp_unit_0137, "recomp_unit_0137");
    runtime.register_function(0x08A29620u, &recomp_unit_0137, "recomp_unit_0137");
    runtime.register_function(0x08A29628u, &recomp_unit_0137, "recomp_unit_0137");
    runtime.register_function(0x08A29634u, &recomp_unit_0137, "recomp_unit_0137");
    runtime.register_function(0x08A29640u, &recomp_unit_0137, "recomp_unit_0137");
    runtime.register_function(0x08A29658u, &recomp_unit_0137, "recomp_unit_0137");
    runtime.register_function(0x08A29674u, &recomp_unit_0137, "recomp_unit_0137");
    runtime.register_function(0x08A29690u, &recomp_unit_0137, "recomp_unit_0137");
    runtime.register_function(0x08A29694u, &recomp_unit_0137, "recomp_unit_0137");
    runtime.register_function(0x08A296A0u, &recomp_unit_0137, "recomp_unit_0137");
    runtime.register_function(0x08A296A8u, &recomp_unit_0137, "recomp_unit_0137");
    runtime.register_function(0x08A296ACu, &recomp_unit_0137, "recomp_unit_0137");
    runtime.register_function(0x08A296B8u, &recomp_unit_0137, "recomp_unit_0137");
    runtime.register_function(0x08A296BCu, &recomp_unit_0137, "recomp_unit_0137");
    runtime.register_function(0x08A296C8u, &recomp_unit_0137, "recomp_unit_0137");
    runtime.register_function(0x08A296F0u, &recomp_unit_0137, "recomp_unit_0137");
    runtime.register_function(0x08A2971Cu, &recomp_unit_0137, "recomp_unit_0137");
    runtime.register_function(0x08A29728u, &recomp_unit_0137, "recomp_unit_0137");
    runtime.register_function(0x08A29748u, &recomp_unit_0137, "recomp_unit_0137");
    runtime.register_function(0x08A29758u, &recomp_unit_0137, "recomp_unit_0137");
    runtime.register_function(0x08A29774u, &recomp_unit_0137, "recomp_unit_0137");
    runtime.register_function(0x08A29780u, &recomp_unit_0137, "recomp_unit_0137");
    runtime.register_function(0x08A29788u, &recomp_unit_0137, "recomp_unit_0137");
    runtime.register_function(0x08A29790u, &recomp_unit_0137, "recomp_unit_0137");
    runtime.register_function(0x08A29794u, &recomp_unit_0137, "recomp_unit_0137");
    runtime.register_function(0x08A2979Cu, &recomp_unit_0137, "recomp_unit_0137");
    runtime.register_function(0x08A297A0u, &recomp_unit_0137, "recomp_unit_0137");
    runtime.register_function(0x08A297ACu, &recomp_unit_0137, "recomp_unit_0137");
    runtime.register_function(0x08A297C0u, &recomp_unit_0137, "recomp_unit_0137");
    runtime.register_function(0x08A297CCu, &recomp_unit_0137, "recomp_unit_0137");
    runtime.register_function(0x08A297E4u, &recomp_unit_0137, "recomp_unit_0137");
    runtime.register_function(0x08A29830u, &recomp_unit_0137, "recomp_unit_0137");
    runtime.register_function(0x08A29848u, &recomp_unit_0137, "recomp_unit_0137");
    runtime.register_function(0x08A29854u, &recomp_unit_0137, "recomp_unit_0137");
    runtime.register_function(0x08A29860u, &recomp_unit_0137, "recomp_unit_0137");
    runtime.register_function(0x08A2987Cu, &recomp_unit_0137, "recomp_unit_0137");
    runtime.register_function(0x08A29888u, &recomp_unit_0137, "recomp_unit_0137");
    runtime.register_function(0x08A2989Cu, &recomp_unit_0137, "recomp_unit_0137");
    runtime.register_function(0x08A298A0u, &recomp_unit_0137, "recomp_unit_0137");
    runtime.register_function(0x08A298B0u, &recomp_unit_0137, "recomp_unit_0137");
    runtime.register_function(0x08A298BCu, &recomp_unit_0137, "recomp_unit_0137");
    runtime.register_function(0x08A298ECu, &recomp_unit_0137, "recomp_unit_0137");
    runtime.register_function(0x08A298FCu, &recomp_unit_0137, "recomp_unit_0137");
    runtime.register_function(0x08A29904u, &recomp_unit_0137, "recomp_unit_0137");
    runtime.register_function(0x08A29920u, &recomp_unit_0137, "recomp_unit_0137");
    runtime.register_function(0x08A29930u, &recomp_unit_0137, "recomp_unit_0137");
    runtime.register_function(0x08A29948u, &recomp_unit_0137, "recomp_unit_0137");
    runtime.register_function(0x08A29958u, &recomp_unit_0137, "recomp_unit_0137");
    runtime.register_function(0x08A29994u, &recomp_unit_0137, "recomp_unit_0137");
    runtime.register_function(0x08A299B0u, &recomp_unit_0137, "recomp_unit_0137");
    runtime.register_function(0x08A299C4u, &recomp_unit_0137, "recomp_unit_0137");
    runtime.register_function(0x08A299D0u, &recomp_unit_0137, "recomp_unit_0137");
    runtime.register_function(0x08A299DCu, &recomp_unit_0137, "recomp_unit_0137");
    runtime.register_function(0x08A299E8u, &recomp_unit_0137, "recomp_unit_0137");
    runtime.register_function(0x08A29A04u, &recomp_unit_0137, "recomp_unit_0137");
    runtime.register_function(0x08A29A10u, &recomp_unit_0137, "recomp_unit_0137");
    runtime.register_function(0x08A29A18u, &recomp_unit_0137, "recomp_unit_0137");
    runtime.register_function(0x08A29A28u, &recomp_unit_0137, "recomp_unit_0137");
    runtime.register_function(0x08A29A38u, &recomp_unit_0137, "recomp_unit_0137");
    runtime.register_function(0x08A29A48u, &recomp_unit_0137, "recomp_unit_0137");
    runtime.register_function(0x08A29A5Cu, &recomp_unit_0137, "recomp_unit_0137");
    runtime.register_function(0x08A29A68u, &recomp_unit_0137, "recomp_unit_0137");
    runtime.register_function(0x08A29A98u, &recomp_unit_0137, "recomp_unit_0137");
    runtime.register_function(0x08A29AB4u, &recomp_unit_0137, "recomp_unit_0137");
    runtime.register_function(0x08A29AC4u, &recomp_unit_0137, "recomp_unit_0137");
    runtime.register_function(0x08A29ADCu, &recomp_unit_0137, "recomp_unit_0137");
    runtime.register_function(0x08A29AECu, &recomp_unit_0137, "recomp_unit_0137");
    runtime.register_function(0x08A29B28u, &recomp_unit_0137, "recomp_unit_0137");
    runtime.register_function(0x08A29B44u, &recomp_unit_0137, "recomp_unit_0137");
    runtime.register_function(0x08A29B50u, &recomp_unit_0137, "recomp_unit_0137");
    runtime.register_function(0x08A29B60u, &recomp_unit_0137, "recomp_unit_0137");
    runtime.register_function(0x08A29B88u, &recomp_unit_0137, "recomp_unit_0137");
    runtime.register_function(0x08A29BF0u, &recomp_unit_0137, "recomp_unit_0137");
    runtime.register_function(0x08A29C48u, &recomp_unit_0137, "recomp_unit_0137");
    runtime.register_function(0x08A29C80u, &recomp_unit_0137, "recomp_unit_0137");
    runtime.register_function(0x08A29C8Cu, &recomp_unit_0137, "recomp_unit_0137");
    runtime.register_function(0x08A29C98u, &recomp_unit_0137, "recomp_unit_0137");
    runtime.register_function(0x08A29CA4u, &recomp_unit_0137, "recomp_unit_0137");
    runtime.register_function(0x08A29CB0u, &recomp_unit_0137, "recomp_unit_0137");
    runtime.register_function(0x08A29CBCu, &recomp_unit_0137, "recomp_unit_0137");
    runtime.register_function(0x08A29CD0u, &recomp_unit_0137, "recomp_unit_0137");
    runtime.register_function(0x08A29CDCu, &recomp_unit_0137, "recomp_unit_0137");
    runtime.register_function(0x08A29CE8u, &recomp_unit_0137, "recomp_unit_0137");
    runtime.register_function(0x08A29CF4u, &recomp_unit_0137, "recomp_unit_0137");
    runtime.register_function(0x08A29D00u, &recomp_unit_0137, "recomp_unit_0137");
    runtime.register_function(0x08A29D04u, &recomp_unit_0137, "recomp_unit_0137");
    runtime.register_function(0x08A29D14u, &recomp_unit_0137, "recomp_unit_0137");
    runtime.register_function(0x08A29D20u, &recomp_unit_0137, "recomp_unit_0137");
    runtime.register_function(0x08A29D2Cu, &recomp_unit_0137, "recomp_unit_0137");
    runtime.register_function(0x08A29D38u, &recomp_unit_0137, "recomp_unit_0137");
    runtime.register_function(0x08A29D4Cu, &recomp_unit_0137, "recomp_unit_0137");
    runtime.register_function(0x08A29D50u, &recomp_unit_0137, "recomp_unit_0137");
    runtime.register_function(0x08A29D80u, &recomp_unit_0137, "recomp_unit_0137");
    runtime.register_function(0x08A29DFCu, &recomp_unit_0137, "recomp_unit_0137");
    runtime.register_function(0x08A29E54u, &recomp_unit_0137, "recomp_unit_0137");
    runtime.register_function(0x08A29E64u, &recomp_unit_0137, "recomp_unit_0137");
    runtime.register_function(0x08A29E7Cu, &recomp_unit_0137, "recomp_unit_0137");
    runtime.register_function(0x08A29E8Cu, &recomp_unit_0137, "recomp_unit_0137");
    runtime.register_function(0x08A29EC8u, &recomp_unit_0137, "recomp_unit_0137");
    runtime.register_function(0x08A29EE4u, &recomp_unit_0137, "recomp_unit_0137");
    runtime.register_function(0x08A29EF0u, &recomp_unit_0137, "recomp_unit_0137");
    runtime.register_function(0x08A29EFCu, &recomp_unit_0137, "recomp_unit_0137");
    runtime.register_function(0x08A29F0Cu, &recomp_unit_0137, "recomp_unit_0137");
    runtime.register_function(0x08A29F1Cu, &recomp_unit_0137, "recomp_unit_0137");
    runtime.register_function(0x08A29F28u, &recomp_unit_0137, "recomp_unit_0137");
    runtime.register_function(0x08A29F3Cu, &recomp_unit_0137, "recomp_unit_0137");
    runtime.register_function(0x08A29F4Cu, &recomp_unit_0137, "recomp_unit_0137");
    runtime.register_function(0x08A29F5Cu, &recomp_unit_0137, "recomp_unit_0137");
    runtime.register_function(0x08A29F68u, &recomp_unit_0137, "recomp_unit_0137");
    runtime.register_function(0x08A29F78u, &recomp_unit_0137, "recomp_unit_0137");
    runtime.register_function(0x08A29F98u, &recomp_unit_0137, "recomp_unit_0137");
    runtime.register_function(0x08A29FA4u, &recomp_unit_0137, "recomp_unit_0137");
    runtime.register_function(0x08A29FB0u, &recomp_unit_0137, "recomp_unit_0137");
    runtime.register_function(0x08A29FD0u, &recomp_unit_0137, "recomp_unit_0137");
    runtime.register_function(0x08A29FE0u, &recomp_unit_0137, "recomp_unit_0137");
    runtime.register_function(0x08A29FF8u, &recomp_unit_0137, "recomp_unit_0137");
    runtime.register_function(0x08A2A008u, &recomp_unit_0137, "recomp_unit_0137");
    runtime.register_function(0x08A2A048u, &recomp_unit_0137, "recomp_unit_0137");
    runtime.register_function(0x08A2A064u, &recomp_unit_0137, "recomp_unit_0137");
    runtime.register_function(0x08A2A06Cu, &recomp_unit_0137, "recomp_unit_0137");
    runtime.register_function(0x08A2A078u, &recomp_unit_0137, "recomp_unit_0137");
    runtime.register_function(0x08A2A08Cu, &recomp_unit_0137, "recomp_unit_0137");
    runtime.register_function(0x08A2A098u, &recomp_unit_0137, "recomp_unit_0137");
    runtime.register_function(0x08A2A0A4u, &recomp_unit_0137, "recomp_unit_0137");
    runtime.register_function(0x08A2A0C8u, &recomp_unit_0137, "recomp_unit_0137");
    runtime.register_function(0x08A2A0D4u, &recomp_unit_0137, "recomp_unit_0137");
    runtime.register_function(0x08A2A0E0u, &recomp_unit_0137, "recomp_unit_0137");
    runtime.register_function(0x08A2A0F4u, &recomp_unit_0137, "recomp_unit_0137");
    runtime.register_function(0x08A2A0FCu, &recomp_unit_0137, "recomp_unit_0137");
    runtime.register_function(0x08A2A104u, &recomp_unit_0137, "recomp_unit_0137");
    runtime.register_function(0x08A2A118u, &recomp_unit_0137, "recomp_unit_0137");
    runtime.register_function(0x08A2A130u, &recomp_unit_0137, "recomp_unit_0137");
    runtime.register_function(0x08A2A144u, &recomp_unit_0137, "recomp_unit_0137");
    runtime.register_function(0x08A2A160u, &recomp_unit_0137, "recomp_unit_0137");
    runtime.register_function(0x08A2A164u, &recomp_unit_0137, "recomp_unit_0137");
    runtime.register_function(0x08A2A174u, &recomp_unit_0137, "recomp_unit_0137");
    runtime.register_function(0x08A2A180u, &recomp_unit_0137, "recomp_unit_0137");
    runtime.register_function(0x08A2A198u, &recomp_unit_0137, "recomp_unit_0137");
    runtime.register_function(0x08A2A1B0u, &recomp_unit_0137, "recomp_unit_0137");
    runtime.register_function(0x08A2A1B8u, &recomp_unit_0137, "recomp_unit_0137");
    runtime.register_function(0x08A2A1C8u, &recomp_unit_0137, "recomp_unit_0137");
    runtime.register_function(0x08A2A1D0u, &recomp_unit_0137, "recomp_unit_0137");
    runtime.register_function(0x08A2A1E0u, &recomp_unit_0137, "recomp_unit_0137");
    runtime.register_function(0x08A2A1F0u, &recomp_unit_0137, "recomp_unit_0137");
    runtime.register_function(0x08A2A1F8u, &recomp_unit_0137, "recomp_unit_0137");
    runtime.register_function(0x08A2A204u, &recomp_unit_0137, "recomp_unit_0137");
    runtime.register_function(0x08A2A210u, &recomp_unit_0137, "recomp_unit_0137");
    runtime.register_function(0x08A2A220u, &recomp_unit_0137, "recomp_unit_0137");
    runtime.register_function(0x08A2A23Cu, &recomp_unit_0137, "recomp_unit_0137");
    runtime.register_function(0x08A2A244u, &recomp_unit_0137, "recomp_unit_0137");
    runtime.register_function(0x08A2A254u, &recomp_unit_0137, "recomp_unit_0137");
    runtime.register_function(0x08A2A25Cu, &recomp_unit_0137, "recomp_unit_0137");
    runtime.register_function(0x08A2A268u, &recomp_unit_0137, "recomp_unit_0137");
    runtime.register_function(0x08A2A278u, &recomp_unit_0137, "recomp_unit_0137");
    runtime.register_function(0x08A2A27Cu, &recomp_unit_0137, "recomp_unit_0137");
    runtime.register_function(0x08A2A280u, &recomp_unit_0137, "recomp_unit_0137");
    runtime.register_function(0x08A2A290u, &recomp_unit_0137, "recomp_unit_0137");
    runtime.register_function(0x08A2A29Cu, &recomp_unit_0137, "recomp_unit_0137");
    runtime.register_function(0x08A2A2B8u, &recomp_unit_0137, "recomp_unit_0137");
    runtime.register_function(0x08A2A2C4u, &recomp_unit_0137, "recomp_unit_0137");
    runtime.register_function(0x08A2A2D8u, &recomp_unit_0137, "recomp_unit_0137");
    runtime.register_function(0x08A2A2E4u, &recomp_unit_0137, "recomp_unit_0137");
    runtime.register_function(0x08A2A304u, &recomp_unit_0137, "recomp_unit_0137");
    runtime.register_function(0x08A2A308u, &recomp_unit_0137, "recomp_unit_0137");
    runtime.register_function(0x08A2A318u, &recomp_unit_0137, "recomp_unit_0137");
    runtime.register_function(0x08A2A324u, &recomp_unit_0137, "recomp_unit_0137");
    runtime.register_function(0x08A2A344u, &recomp_unit_0137, "recomp_unit_0137");
    runtime.register_function(0x08A2A354u, &recomp_unit_0137, "recomp_unit_0137");
    runtime.register_function(0x08A2A35Cu, &recomp_unit_0137, "recomp_unit_0137");
    runtime.register_function(0x08A2A368u, &recomp_unit_0137, "recomp_unit_0137");
    runtime.register_function(0x08A2A384u, &recomp_unit_0137, "recomp_unit_0137");
    runtime.register_function(0x08A2A398u, &recomp_unit_0137, "recomp_unit_0137");
    runtime.register_function(0x08A2A3B0u, &recomp_unit_0137, "recomp_unit_0137");
    runtime.register_function(0x08A2A3C0u, &recomp_unit_0137, "recomp_unit_0137");
    runtime.register_function(0x08A2A3D8u, &recomp_unit_0137, "recomp_unit_0137");
    runtime.register_function(0x08A2A3E8u, &recomp_unit_0137, "recomp_unit_0137");
    runtime.register_function(0x08A2A424u, &recomp_unit_0137, "recomp_unit_0137");
    runtime.register_function(0x08A2A460u, &recomp_unit_0137, "recomp_unit_0137");
    runtime.register_function(0x08A2A46Cu, &recomp_unit_0137, "recomp_unit_0137");
    runtime.register_function(0x08A2A488u, &recomp_unit_0137, "recomp_unit_0137");
    runtime.register_function(0x08A2A49Cu, &recomp_unit_0137, "recomp_unit_0137");
    runtime.register_function(0x08A2A4B4u, &recomp_unit_0137, "recomp_unit_0137");
    runtime.register_function(0x08A2A4C4u, &recomp_unit_0137, "recomp_unit_0137");
    runtime.register_function(0x08A2A4DCu, &recomp_unit_0137, "recomp_unit_0137");
    runtime.register_function(0x08A2A4ECu, &recomp_unit_0137, "recomp_unit_0137");
    runtime.register_function(0x08A2A528u, &recomp_unit_0137, "recomp_unit_0137");
    runtime.register_function(0x08A2A55Cu, &recomp_unit_0137, "recomp_unit_0137");
    runtime.register_function(0x08A2A560u, &recomp_unit_0137, "recomp_unit_0137");
    runtime.register_function(0x08A2A570u, &recomp_unit_0137, "recomp_unit_0137");
    runtime.register_function(0x08A2A57Cu, &recomp_unit_0137, "recomp_unit_0137");
    runtime.register_function(0x08A2A5D0u, &recomp_unit_0137, "recomp_unit_0137");
    runtime.register_function(0x08A2A60Cu, &recomp_unit_0137, "recomp_unit_0137");
    runtime.register_function(0x08A2A628u, &recomp_unit_0137, "recomp_unit_0137");
    runtime.register_function(0x08A2A630u, &recomp_unit_0137, "recomp_unit_0137");
    runtime.register_function(0x08A2A638u, &recomp_unit_0137, "recomp_unit_0137");
    runtime.register_function(0x08A2A650u, &recomp_unit_0137, "recomp_unit_0137");
    runtime.register_function(0x08A2A660u, &recomp_unit_0137, "recomp_unit_0137");
    runtime.register_function(0x08A2A694u, &recomp_unit_0137, "recomp_unit_0137");
    runtime.register_function(0x08A2A6C8u, &recomp_unit_0137, "recomp_unit_0137");
    runtime.register_function(0x08A2A6D4u, &recomp_unit_0137, "recomp_unit_0137");
    runtime.register_function(0x08A2A6E0u, &recomp_unit_0137, "recomp_unit_0137");
    runtime.register_function(0x08A2A6F4u, &recomp_unit_0137, "recomp_unit_0137");
    runtime.register_function(0x08A2A734u, &recomp_unit_0137, "recomp_unit_0137");
    runtime.register_function(0x08A2A744u, &recomp_unit_0137, "recomp_unit_0137");
    runtime.register_function(0x08A2A75Cu, &recomp_unit_0137, "recomp_unit_0137");
    runtime.register_function(0x08A2A778u, &recomp_unit_0137, "recomp_unit_0137");
    runtime.register_function(0x08A2A788u, &recomp_unit_0137, "recomp_unit_0137");
    runtime.register_function(0x08A2A79Cu, &recomp_unit_0137, "recomp_unit_0137");
    runtime.register_function(0x08A2A7DCu, &recomp_unit_0137, "recomp_unit_0137");
    runtime.register_function(0x08A2A7E8u, &recomp_unit_0137, "recomp_unit_0137");
    runtime.register_function(0x08A2A7F4u, &recomp_unit_0137, "recomp_unit_0137");
    runtime.register_function(0x08A2A804u, &recomp_unit_0137, "recomp_unit_0137");
    runtime.register_function(0x08A2A814u, &recomp_unit_0137, "recomp_unit_0137");
    runtime.register_function(0x08A2A81Cu, &recomp_unit_0137, "recomp_unit_0137");
    runtime.register_function(0x08A2A828u, &recomp_unit_0137, "recomp_unit_0137");
    runtime.register_function(0x08A2A834u, &recomp_unit_0137, "recomp_unit_0137");
    runtime.register_function(0x08A2A844u, &recomp_unit_0137, "recomp_unit_0137");
    runtime.register_function(0x08A2A860u, &recomp_unit_0137, "recomp_unit_0137");
    runtime.register_function(0x08A2A868u, &recomp_unit_0137, "recomp_unit_0137");
    runtime.register_function(0x08A2A878u, &recomp_unit_0137, "recomp_unit_0137");
    runtime.register_function(0x08A2A87Cu, &recomp_unit_0137, "recomp_unit_0137");
    runtime.register_function(0x08A2A884u, &recomp_unit_0137, "recomp_unit_0137");
    runtime.register_function(0x08A2A8ACu, &recomp_unit_0137, "recomp_unit_0137");
    runtime.register_function(0x08A2A8F8u, &recomp_unit_0137, "recomp_unit_0137");
    runtime.register_function(0x08A2A904u, &recomp_unit_0137, "recomp_unit_0137");
    runtime.register_function(0x08A2A920u, &recomp_unit_0137, "recomp_unit_0137");
    runtime.register_function(0x08A2A928u, &recomp_unit_0137, "recomp_unit_0137");
    runtime.register_function(0x08A2A94Cu, &recomp_unit_0137, "recomp_unit_0137");
    runtime.register_function(0x08A2A978u, &recomp_unit_0137, "recomp_unit_0137");
    runtime.register_function(0x08A2A988u, &recomp_unit_0137, "recomp_unit_0137");
    runtime.register_function(0x08A2A9C0u, &recomp_unit_0137, "recomp_unit_0137");
    runtime.register_function(0x08A2A9D4u, &recomp_unit_0137, "recomp_unit_0137");
    runtime.register_function(0x08A2AA14u, &recomp_unit_0137, "recomp_unit_0137");
    runtime.register_function(0x08A2AA28u, &recomp_unit_0137, "recomp_unit_0137");
    runtime.register_function(0x08A2AA38u, &recomp_unit_0137, "recomp_unit_0137");
    runtime.register_function(0x08A2AA58u, &recomp_unit_0137, "recomp_unit_0137");
    runtime.register_function(0x08A2AA70u, &recomp_unit_0137, "recomp_unit_0137");
    runtime.register_function(0x08A2AA80u, &recomp_unit_0137, "recomp_unit_0137");
    runtime.register_function(0x08A2AAA8u, &recomp_unit_0137, "recomp_unit_0137");
    runtime.register_function(0x08A2AABCu, &recomp_unit_0137, "recomp_unit_0137");
    runtime.register_function(0x08A2AAD8u, &recomp_unit_0137, "recomp_unit_0137");
    runtime.register_function(0x08A2AB1Cu, &recomp_unit_0137, "recomp_unit_0137");
    runtime.register_function(0x08A2AB38u, &recomp_unit_0137, "recomp_unit_0137");
    runtime.register_function(0x08A2AB48u, &recomp_unit_0137, "recomp_unit_0137");
    runtime.register_function(0x08A2AB5Cu, &recomp_unit_0137, "recomp_unit_0137");
    runtime.register_function(0x08A2AB68u, &recomp_unit_0137, "recomp_unit_0137");
    runtime.register_function(0x08A2AB74u, &recomp_unit_0137, "recomp_unit_0137");
    runtime.register_function(0x08A2AB80u, &recomp_unit_0137, "recomp_unit_0137");
    runtime.register_function(0x08A2AB8Cu, &recomp_unit_0137, "recomp_unit_0137");
    runtime.register_function(0x08A2ABA0u, &recomp_unit_0137, "recomp_unit_0137");
    runtime.register_function(0x08A2ABA8u, &recomp_unit_0137, "recomp_unit_0137");
    runtime.register_function(0x08A2ABB4u, &recomp_unit_0137, "recomp_unit_0137");
    runtime.register_function(0x08A2ABFCu, &recomp_unit_0137, "recomp_unit_0137");
    runtime.register_function(0x08A2AC10u, &recomp_unit_0137, "recomp_unit_0137");
    runtime.register_function(0x08A2AC14u, &recomp_unit_0137, "recomp_unit_0137");
    runtime.register_function(0x08A2AC38u, &recomp_unit_0137, "recomp_unit_0137");
    runtime.register_function(0x08A2AC58u, &recomp_unit_0137, "recomp_unit_0137");
    runtime.register_function(0x08A2AC60u, &recomp_unit_0137, "recomp_unit_0137");
    runtime.register_function(0x08A2AC74u, &recomp_unit_0137, "recomp_unit_0137");
    runtime.register_function(0x08A2AC80u, &recomp_unit_0137, "recomp_unit_0137");
    runtime.register_function(0x08A2ACA0u, &recomp_unit_0137, "recomp_unit_0137");
    runtime.register_function(0x08A2ACC0u, &recomp_unit_0137, "recomp_unit_0137");
    runtime.register_function(0x08A2ACD0u, &recomp_unit_0137, "recomp_unit_0137");
    runtime.register_function(0x08A2ACE0u, &recomp_unit_0137, "recomp_unit_0137");
    runtime.register_function(0x08A2AD24u, &recomp_unit_0137, "recomp_unit_0137");
    runtime.register_function(0x08A2AD2Cu, &recomp_unit_0137, "recomp_unit_0137");
    runtime.register_function(0x08A2AD3Cu, &recomp_unit_0137, "recomp_unit_0137");
    runtime.register_function(0x08A2AD50u, &recomp_unit_0137, "recomp_unit_0137");
    runtime.register_function(0x08A2AD5Cu, &recomp_unit_0137, "recomp_unit_0137");
    runtime.register_function(0x08A2AD68u, &recomp_unit_0137, "recomp_unit_0137");
    runtime.register_function(0x08A2AD8Cu, &recomp_unit_0137, "recomp_unit_0137");
    runtime.register_function(0x08A2ADCCu, &recomp_unit_0137, "recomp_unit_0137");
    runtime.register_function(0x08A2ADD4u, &recomp_unit_0137, "recomp_unit_0137");
    runtime.register_function(0x08A2ADECu, &recomp_unit_0137, "recomp_unit_0137");
    runtime.register_function(0x08A2ADFCu, &recomp_unit_0137, "recomp_unit_0137");
    runtime.register_function(0x08A2AE7Cu, &recomp_unit_0137, "recomp_unit_0137");
    runtime.register_function(0x08A2AE88u, &recomp_unit_0137, "recomp_unit_0137");
    runtime.register_function(0x08A2AEB4u, &recomp_unit_0137, "recomp_unit_0137");
    runtime.register_function(0x08A2AEBCu, &recomp_unit_0137, "recomp_unit_0137");
    runtime.register_function(0x08A2AEC8u, &recomp_unit_0137, "recomp_unit_0137");
    runtime.register_function(0x08A2AED4u, &recomp_unit_0137, "recomp_unit_0137");
    runtime.register_function(0x08A2AEECu, &recomp_unit_0137, "recomp_unit_0137");
    runtime.register_function(0x08A2AEF8u, &recomp_unit_0137, "recomp_unit_0137");
    runtime.register_function(0x08A2AF1Cu, &recomp_unit_0137, "recomp_unit_0137");
    runtime.register_function(0x08A2AF7Cu, &recomp_unit_0137, "recomp_unit_0137");
    runtime.register_function(0x08A2AF94u, &recomp_unit_0137, "recomp_unit_0137");
    runtime.register_function(0x08A2AF98u, &recomp_unit_0137, "recomp_unit_0137");
    runtime.register_function(0x08A2AFA8u, &recomp_unit_0137, "recomp_unit_0137");
    runtime.register_function(0x08A2AFC0u, &recomp_unit_0137, "recomp_unit_0137");
    runtime.register_function(0x08A2AFC4u, &recomp_unit_0137, "recomp_unit_0137");
    runtime.register_function(0x08A2AFD4u, &recomp_unit_0137, "recomp_unit_0137");
    runtime.register_function(0x08A2B004u, &recomp_unit_0137, "recomp_unit_0137");
    runtime.register_function(0x08A2B010u, &recomp_unit_0137, "recomp_unit_0137");
    runtime.register_function(0x08A2B064u, &recomp_unit_0137, "recomp_unit_0137");
    runtime.register_function(0x08A2B098u, &recomp_unit_0137, "recomp_unit_0137");
    runtime.register_function(0x08A2B0A4u, &recomp_unit_0137, "recomp_unit_0137");
    runtime.register_function(0x08A2B0B8u, &recomp_unit_0137, "recomp_unit_0137");
    runtime.register_function(0x08A2B0C8u, &recomp_unit_0137, "recomp_unit_0137");
    runtime.register_function(0x08A2B0E0u, &recomp_unit_0137, "recomp_unit_0137");
    runtime.register_function(0x08A2B0F0u, &recomp_unit_0137, "recomp_unit_0137");
    runtime.register_function(0x08A2B124u, &recomp_unit_0137, "recomp_unit_0137");
    runtime.register_function(0x08A2B140u, &recomp_unit_0137, "recomp_unit_0137");
    runtime.register_function(0x08A2B15Cu, &recomp_unit_0137, "recomp_unit_0137");
    runtime.register_function(0x08A2B170u, &recomp_unit_0137, "recomp_unit_0137");
    runtime.register_function(0x08A2B174u, &recomp_unit_0137, "recomp_unit_0137");
    runtime.register_function(0x08A2B180u, &recomp_unit_0137, "recomp_unit_0137");
    runtime.register_function(0x08A2B19Cu, &recomp_unit_0137, "recomp_unit_0137");
    runtime.register_function(0x08A2B1B8u, &recomp_unit_0137, "recomp_unit_0137");
    runtime.register_function(0x08A2B1CCu, &recomp_unit_0137, "recomp_unit_0137");
    runtime.register_function(0x08A2B1D0u, &recomp_unit_0137, "recomp_unit_0137");
    runtime.register_function(0x08A2B1E4u, &recomp_unit_0137, "recomp_unit_0137");
    runtime.register_function(0x08A2B200u, &recomp_unit_0137, "recomp_unit_0137");
    runtime.register_function(0x08A2B210u, &recomp_unit_0137, "recomp_unit_0137");
    runtime.register_function(0x08A2B220u, &recomp_unit_0137, "recomp_unit_0137");
    runtime.register_function(0x08A2B228u, &recomp_unit_0137, "recomp_unit_0137");
    runtime.register_function(0x08A2B234u, &recomp_unit_0137, "recomp_unit_0137");
    runtime.register_function(0x08A2B240u, &recomp_unit_0137, "recomp_unit_0137");
    runtime.register_function(0x08A2B254u, &recomp_unit_0137, "recomp_unit_0137");
    runtime.register_function(0x08A2B260u, &recomp_unit_0137, "recomp_unit_0137");
    runtime.register_function(0x08A2B268u, &recomp_unit_0137, "recomp_unit_0137");
    runtime.register_function(0x08A2B26Cu, &recomp_unit_0137, "recomp_unit_0137");
    runtime.register_function(0x08A2B278u, &recomp_unit_0137, "recomp_unit_0137");
    runtime.register_function(0x08A2B280u, &recomp_unit_0137, "recomp_unit_0137");
    runtime.register_function(0x08A2B28Cu, &recomp_unit_0137, "recomp_unit_0137");
    runtime.register_function(0x08A2B29Cu, &recomp_unit_0137, "recomp_unit_0137");
    runtime.register_function(0x08A2B2B0u, &recomp_unit_0137, "recomp_unit_0137");
    runtime.register_function(0x08A2B2C0u, &recomp_unit_0137, "recomp_unit_0137");
    runtime.register_function(0x08A2B2CCu, &recomp_unit_0137, "recomp_unit_0137");
    runtime.register_function(0x08A2B2DCu, &recomp_unit_0137, "recomp_unit_0137");
    runtime.register_function(0x08A2B2E8u, &recomp_unit_0137, "recomp_unit_0137");
    runtime.register_function(0x08A2B2F8u, &recomp_unit_0137, "recomp_unit_0137");
    runtime.register_function(0x08A2B300u, &recomp_unit_0137, "recomp_unit_0137");
    runtime.register_function(0x08A2B30Cu, &recomp_unit_0137, "recomp_unit_0137");
    runtime.register_function(0x08A2B328u, &recomp_unit_0137, "recomp_unit_0137");
    runtime.register_function(0x08A2B334u, &recomp_unit_0137, "recomp_unit_0137");
    runtime.register_function(0x08A2B350u, &recomp_unit_0137, "recomp_unit_0137");
    runtime.register_function(0x08A2B35Cu, &recomp_unit_0137, "recomp_unit_0137");
    runtime.register_function(0x08A2B378u, &recomp_unit_0137, "recomp_unit_0137");
    runtime.register_function(0x08A2B380u, &recomp_unit_0137, "recomp_unit_0137");
    runtime.register_function(0x08A2B388u, &recomp_unit_0137, "recomp_unit_0137");
    runtime.register_function(0x08A2B394u, &recomp_unit_0137, "recomp_unit_0137");
    runtime.register_function(0x08A2B3B0u, &recomp_unit_0137, "recomp_unit_0137");
    runtime.register_function(0x08A2B3B8u, &recomp_unit_0137, "recomp_unit_0137");
    runtime.register_function(0x08A2B3C4u, &recomp_unit_0137, "recomp_unit_0137");
    runtime.register_function(0x08A2B3D0u, &recomp_unit_0137, "recomp_unit_0137");
    runtime.register_function(0x08A2B3E8u, &recomp_unit_0137, "recomp_unit_0137");
    runtime.register_function(0x08A2B400u, &recomp_unit_0137, "recomp_unit_0137");
    runtime.register_function(0x08A2B418u, &recomp_unit_0137, "recomp_unit_0137");
    runtime.register_function(0x08A2B430u, &recomp_unit_0137, "recomp_unit_0137");
    runtime.register_function(0x08A2B448u, &recomp_unit_0137, "recomp_unit_0137");
    runtime.register_function(0x08A2B458u, &recomp_unit_0137, "recomp_unit_0137");
    runtime.register_function(0x08A2B468u, &recomp_unit_0137, "recomp_unit_0137");
    runtime.register_function(0x08A2B474u, &recomp_unit_0137, "recomp_unit_0137");
    runtime.register_function(0x08A2B484u, &recomp_unit_0137, "recomp_unit_0137");
    runtime.register_function(0x08A2B4B0u, &recomp_unit_0137, "recomp_unit_0137");
    runtime.register_function(0x08A2B4D0u, &recomp_unit_0137, "recomp_unit_0137");
    runtime.register_function(0x08A2B4E4u, &recomp_unit_0137, "recomp_unit_0137");
    runtime.register_function(0x08A2B4F0u, &recomp_unit_0137, "recomp_unit_0137");
    runtime.register_function(0x08A2B510u, &recomp_unit_0137, "recomp_unit_0137");
    runtime.register_function(0x08A2B52Cu, &recomp_unit_0137, "recomp_unit_0137");
    runtime.register_function(0x08A2B538u, &recomp_unit_0137, "recomp_unit_0137");
    runtime.register_function(0x08A2B568u, &recomp_unit_0137, "recomp_unit_0137");
    runtime.register_function(0x08A2B56Cu, &recomp_unit_0137, "recomp_unit_0137");
    runtime.register_function(0x08A2B57Cu, &recomp_unit_0137, "recomp_unit_0137");
    runtime.register_function(0x08A2B580u, &recomp_unit_0137, "recomp_unit_0137");
    runtime.register_function(0x08A2B58Cu, &recomp_unit_0137, "recomp_unit_0137");
    runtime.register_function(0x08A2B598u, &recomp_unit_0137, "recomp_unit_0137");
    runtime.register_function(0x08A2B5A8u, &recomp_unit_0137, "recomp_unit_0137");
    runtime.register_function(0x08A2B5BCu, &recomp_unit_0137, "recomp_unit_0137");
    runtime.register_function(0x08A2B5C8u, &recomp_unit_0137, "recomp_unit_0137");
    runtime.register_function(0x08A2B5D4u, &recomp_unit_0137, "recomp_unit_0137");
    runtime.register_function(0x08A2B5F0u, &recomp_unit_0137, "recomp_unit_0137");
    runtime.register_function(0x08A2B608u, &recomp_unit_0137, "recomp_unit_0137");
    runtime.register_function(0x08A2B610u, &recomp_unit_0137, "recomp_unit_0137");
    runtime.register_function(0x08A2B61Cu, &recomp_unit_0137, "recomp_unit_0137");
    runtime.register_function(0x08A2B628u, &recomp_unit_0137, "recomp_unit_0137");
    runtime.register_function(0x08A2B644u, &recomp_unit_0137, "recomp_unit_0137");
    runtime.register_function(0x08A2B65Cu, &recomp_unit_0137, "recomp_unit_0137");
    runtime.register_function(0x08A2B678u, &recomp_unit_0137, "recomp_unit_0137");
    runtime.register_function(0x08A2B6C4u, &recomp_unit_0137, "recomp_unit_0137");
    runtime.register_function(0x08A2B6D0u, &recomp_unit_0137, "recomp_unit_0137");
    runtime.register_function(0x08A2B6E0u, &recomp_unit_0137, "recomp_unit_0137");
    runtime.register_function(0x08A2B6E8u, &recomp_unit_0137, "recomp_unit_0137");
    runtime.register_function(0x08A2B6F4u, &recomp_unit_0137, "recomp_unit_0137");
    runtime.register_function(0x08A2B700u, &recomp_unit_0137, "recomp_unit_0137");
    runtime.register_function(0x08A2B70Cu, &recomp_unit_0137, "recomp_unit_0137");
    runtime.register_function(0x08A2B714u, &recomp_unit_0137, "recomp_unit_0137");
    runtime.register_function(0x08A2B734u, &recomp_unit_0137, "recomp_unit_0137");
    runtime.register_function(0x08A2B740u, &recomp_unit_0137, "recomp_unit_0137");
    runtime.register_function(0x08A2B748u, &recomp_unit_0137, "recomp_unit_0137");
    runtime.register_function(0x08A2B758u, &recomp_unit_0137, "recomp_unit_0137");
    runtime.register_function(0x08A2B760u, &recomp_unit_0137, "recomp_unit_0137");
    runtime.register_function(0x08A2B77Cu, &recomp_unit_0137, "recomp_unit_0137");
    runtime.register_function(0x08A2B794u, &recomp_unit_0137, "recomp_unit_0137");
    runtime.register_function(0x08A2B7B0u, &recomp_unit_0137, "recomp_unit_0137");
    runtime.register_function(0x08A2B7C0u, &recomp_unit_0137, "recomp_unit_0137");
    runtime.register_function(0x08A2B7C8u, &recomp_unit_0137, "recomp_unit_0137");
    runtime.register_function(0x08A2B7D4u, &recomp_unit_0137, "recomp_unit_0137");
    runtime.register_function(0x08A2B7D8u, &recomp_unit_0137, "recomp_unit_0137");
    runtime.register_function(0x08A2B7DCu, &recomp_unit_0137, "recomp_unit_0137");
    runtime.register_function(0x08A2B7ECu, &recomp_unit_0137, "recomp_unit_0137");
    runtime.register_function(0x08A2B808u, &recomp_unit_0137, "recomp_unit_0137");
    runtime.register_function(0x08A2B814u, &recomp_unit_0137, "recomp_unit_0137");
    runtime.register_function(0x08A2B81Cu, &recomp_unit_0137, "recomp_unit_0137");
    runtime.register_function(0x08A2B828u, &recomp_unit_0137, "recomp_unit_0137");
    runtime.register_function(0x08A2B82Cu, &recomp_unit_0137, "recomp_unit_0137");
    runtime.register_function(0x08A2B830u, &recomp_unit_0137, "recomp_unit_0137");
    runtime.register_function(0x08A2B858u, &recomp_unit_0137, "recomp_unit_0137");
    runtime.register_function(0x08A2B86Cu, &recomp_unit_0137, "recomp_unit_0137");
    runtime.register_function(0x08A2B894u, &recomp_unit_0137, "recomp_unit_0137");
    runtime.register_function(0x08A2B8B4u, &recomp_unit_0137, "recomp_unit_0137");
    runtime.register_function(0x08A2B8C4u, &recomp_unit_0137, "recomp_unit_0137");
    runtime.register_function(0x08A2B8CCu, &recomp_unit_0137, "recomp_unit_0137");
    runtime.register_function(0x08A2B8D8u, &recomp_unit_0137, "recomp_unit_0137");
    runtime.register_function(0x08A2B8E4u, &recomp_unit_0137, "recomp_unit_0137");
    runtime.register_function(0x08A2B8F4u, &recomp_unit_0137, "recomp_unit_0137");
    runtime.register_function(0x08A2B8F8u, &recomp_unit_0137, "recomp_unit_0137");
    runtime.register_function(0x08A2B900u, &recomp_unit_0137, "recomp_unit_0137");
    runtime.register_function(0x08A2B908u, &recomp_unit_0137, "recomp_unit_0137");
    runtime.register_function(0x08A2B918u, &recomp_unit_0137, "recomp_unit_0137");
    runtime.register_function(0x08A2B920u, &recomp_unit_0137, "recomp_unit_0137");
    runtime.register_function(0x08A2B92Cu, &recomp_unit_0137, "recomp_unit_0137");
    runtime.register_function(0x08A2B938u, &recomp_unit_0137, "recomp_unit_0137");
    runtime.register_function(0x08A2B93Cu, &recomp_unit_0137, "recomp_unit_0137");
    runtime.register_function(0x08A2B940u, &recomp_unit_0137, "recomp_unit_0137");
    runtime.register_function(0x08A2B94Cu, &recomp_unit_0137, "recomp_unit_0137");
    runtime.register_function(0x08A2B954u, &recomp_unit_0137, "recomp_unit_0137");
    runtime.register_function(0x08A2B994u, &recomp_unit_0137, "recomp_unit_0137");
    runtime.register_function(0x08A2B9A4u, &recomp_unit_0137, "recomp_unit_0137");
    runtime.register_function(0x08A2B9C4u, &recomp_unit_0137, "recomp_unit_0137");
    runtime.register_function(0x08A2B9D4u, &recomp_unit_0137, "recomp_unit_0137");
    runtime.register_function(0x08A2B9F0u, &recomp_unit_0137, "recomp_unit_0137");
    runtime.register_function(0x08A2B9FCu, &recomp_unit_0137, "recomp_unit_0137");
    runtime.register_function(0x08A2BA04u, &recomp_unit_0137, "recomp_unit_0137");
    runtime.register_function(0x08A2BA10u, &recomp_unit_0137, "recomp_unit_0137");
    runtime.register_function(0x08A2BA20u, &recomp_unit_0137, "recomp_unit_0137");
    runtime.register_function(0x08A2BA24u, &recomp_unit_0137, "recomp_unit_0137");
    runtime.register_function(0x08A2BA2Cu, &recomp_unit_0137, "recomp_unit_0137");
    runtime.register_function(0x08A2BA30u, &recomp_unit_0137, "recomp_unit_0137");
    runtime.register_function(0x08A2BA3Cu, &recomp_unit_0137, "recomp_unit_0137");
    runtime.register_function(0x08A2BA6Cu, &recomp_unit_0137, "recomp_unit_0137");
    runtime.register_function(0x08A2BAC4u, &recomp_unit_0137, "recomp_unit_0137");
    runtime.register_function(0x08A2BADCu, &recomp_unit_0137, "recomp_unit_0137");
    runtime.register_function(0x08A2BAECu, &recomp_unit_0137, "recomp_unit_0137");
    runtime.register_function(0x08A2BAF8u, &recomp_unit_0137, "recomp_unit_0137");
    runtime.register_function(0x08A2BAFCu, &recomp_unit_0137, "recomp_unit_0137");
    runtime.register_function(0x08A2BB0Cu, &recomp_unit_0137, "recomp_unit_0137");
    runtime.register_function(0x08A2BB18u, &recomp_unit_0137, "recomp_unit_0137");
    runtime.register_function(0x08A2BB2Cu, &recomp_unit_0137, "recomp_unit_0137");
    runtime.register_function(0x08A2BB34u, &recomp_unit_0137, "recomp_unit_0137");
    runtime.register_function(0x08A2BB48u, &recomp_unit_0137, "recomp_unit_0137");
    runtime.register_function(0x08A2BB54u, &recomp_unit_0137, "recomp_unit_0137");
    runtime.register_function(0x08A2BB60u, &recomp_unit_0137, "recomp_unit_0137");
    runtime.register_function(0x08A2BB74u, &recomp_unit_0137, "recomp_unit_0137");
    runtime.register_function(0x08A2BB78u, &recomp_unit_0137, "recomp_unit_0137");
    runtime.register_function(0x08A2BB88u, &recomp_unit_0137, "recomp_unit_0137");
    runtime.register_function(0x08A2BB9Cu, &recomp_unit_0137, "recomp_unit_0137");
    runtime.register_function(0x08A2BBB8u, &recomp_unit_0137, "recomp_unit_0137");
    runtime.register_function(0x08A2BBD4u, &recomp_unit_0137, "recomp_unit_0137");
    runtime.register_function(0x08A2BC00u, &recomp_unit_0137, "recomp_unit_0137");
    runtime.register_function(0x08A2BC28u, &recomp_unit_0137, "recomp_unit_0137");
    runtime.register_function(0x08A2BC44u, &recomp_unit_0137, "recomp_unit_0137");
    runtime.register_function(0x08A2BC90u, &recomp_unit_0137, "recomp_unit_0137");
    runtime.register_function(0x08A2BC98u, &recomp_unit_0137, "recomp_unit_0137");
    runtime.register_function(0x08A2BCA8u, &recomp_unit_0137, "recomp_unit_0137");
    runtime.register_function(0x08A2BCB4u, &recomp_unit_0137, "recomp_unit_0137");
    runtime.register_function(0x08A2BCC8u, &recomp_unit_0137, "recomp_unit_0137");
    runtime.register_function(0x08A2BCE8u, &recomp_unit_0137, "recomp_unit_0137");
    runtime.register_function(0x08A2BD04u, &recomp_unit_0137, "recomp_unit_0137");
    runtime.register_function(0x08A2BD08u, &recomp_unit_0137, "recomp_unit_0137");
    runtime.register_function(0x08A2BD14u, &recomp_unit_0137, "recomp_unit_0137");
    runtime.register_function(0x08A2BD1Cu, &recomp_unit_0137, "recomp_unit_0137");
    runtime.register_function(0x08A2BD24u, &recomp_unit_0137, "recomp_unit_0137");
    runtime.register_function(0x08A2BD40u, &recomp_unit_0137, "recomp_unit_0137");
    runtime.register_function(0x08A2BD5Cu, &recomp_unit_0137, "recomp_unit_0137");
    runtime.register_function(0x08A2BD9Cu, &recomp_unit_0137, "recomp_unit_0137");
    runtime.register_function(0x08A2BDA4u, &recomp_unit_0137, "recomp_unit_0137");
    runtime.register_function(0x08A2BDD0u, &recomp_unit_0137, "recomp_unit_0137");
    runtime.register_function(0x08A2BDD4u, &recomp_unit_0137, "recomp_unit_0137");
    runtime.register_function(0x08A2BDE0u, &recomp_unit_0137, "recomp_unit_0137");
    runtime.register_function(0x08A2BDF0u, &recomp_unit_0137, "recomp_unit_0137");
    runtime.register_function(0x08A2BE00u, &recomp_unit_0137, "recomp_unit_0137");
    runtime.register_function(0x08A2BE18u, &recomp_unit_0137, "recomp_unit_0137");
    runtime.register_function(0x08A2BE24u, &recomp_unit_0137, "recomp_unit_0137");
    runtime.register_function(0x08A2BE28u, &recomp_unit_0137, "recomp_unit_0137");
    runtime.register_function(0x08A2BE30u, &recomp_unit_0137, "recomp_unit_0137");
    runtime.register_function(0x08A2BE68u, &recomp_unit_0137, "recomp_unit_0137");
    runtime.register_function(0x08A2BE74u, &recomp_unit_0137, "recomp_unit_0137");
    runtime.register_function(0x08A2BE94u, &recomp_unit_0137, "recomp_unit_0137");
    runtime.register_function(0x08A2BEACu, &recomp_unit_0137, "recomp_unit_0137");
    runtime.register_function(0x08A2BEBCu, &recomp_unit_0137, "recomp_unit_0137");
    runtime.register_function(0x08A2BEC8u, &recomp_unit_0137, "recomp_unit_0137");
    runtime.register_function(0x08A2BF1Cu, &recomp_unit_0137, "recomp_unit_0137");
    runtime.register_function(0x08A2BF2Cu, &recomp_unit_0137, "recomp_unit_0137");
    runtime.register_function(0x08A2BF68u, &recomp_unit_0137, "recomp_unit_0137");
    runtime.register_function(0x08A2BF7Cu, &recomp_unit_0137, "recomp_unit_0137");
    runtime.register_function(0x08A2BF80u, &recomp_unit_0137, "recomp_unit_0137");
    runtime.register_function(0x08A2BF90u, &recomp_unit_0137, "recomp_unit_0137");
    runtime.register_function(0x08A2BFA0u, &recomp_unit_0137, "recomp_unit_0137");
    runtime.register_function(0x08A2BFB0u, &recomp_unit_0137, "recomp_unit_0137");
    runtime.register_function(0x08A2BFB4u, &recomp_unit_0137, "recomp_unit_0137");
    runtime.register_function(0x08A2BFE8u, &recomp_unit_0137, "recomp_unit_0137");
}
} // namespace psprecomp
