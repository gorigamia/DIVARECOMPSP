#include "psprecomp/runtime.hpp"
#include "generated_units.hpp"
#include <bit>
#include <cmath>
#include <cstdint>
#include <limits>

namespace psprecomp {
static const std::uint16_t kEntryIds_recomp_unit_0054[4096] = {
    1, 0, 0, 0, 0, 2, 0, 0, 0, 0, 3, 0, 0, 0, 0, 4, 0, 0, 0, 0, 0, 5, 0, 0, 0, 0, 6, 0, 7, 0, 0, 0,
    0, 0, 8, 0, 0, 0, 0, 0, 9, 0, 0, 0, 0, 10, 0, 0, 0, 0, 0, 0, 0, 0, 0, 11, 0, 0, 0, 0, 0, 12, 0, 0,
    0, 0, 0, 13, 0, 0, 0, 14, 0, 0, 0, 15, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 16, 0, 0, 0, 17, 0, 0, 0, 18, 0, 0, 0, 19, 0, 0, 0, 20, 0, 0, 0, 0, 0, 0, 0, 0, 21, 0, 0, 0, 0,
    0, 0, 22, 0, 0, 0, 23, 0, 0, 0, 24, 0, 0, 0, 0, 0, 0, 0, 0, 0, 25, 0, 0, 0, 0, 0, 26, 0, 0, 0, 0, 0,
    0, 27, 0, 28, 0, 0, 29, 0, 0, 0, 0, 30, 0, 0, 0, 0, 31, 0, 32, 0, 0, 0, 33, 0, 0, 0, 0, 0, 0, 0, 0, 34,
    0, 35, 0, 36, 0, 0, 0, 0, 0, 0, 0, 0, 37, 0, 0, 0, 0, 38, 0, 0, 0, 0, 0, 39, 0, 0, 40, 0, 41, 0, 0, 0,
    0, 42, 0, 0, 43, 0, 0, 0, 0, 44, 0, 0, 45, 0, 0, 0, 46, 47, 0, 0, 0, 0, 48, 0, 0, 0, 0, 0, 49, 0, 0, 0,
    0, 0, 50, 0, 0, 0, 0, 0, 0, 0, 51, 0, 0, 52, 0, 53, 0, 0, 0, 54, 0, 55, 0, 0, 0, 56, 0, 57, 0, 0, 0, 58,
    0, 0, 0, 0, 0, 59, 0, 0, 0, 0, 0, 60, 0, 0, 0, 0, 61, 0, 62, 0, 0, 0, 0, 0, 63, 0, 0, 0, 0, 0, 64, 0,
    65, 0, 0, 0, 0, 0, 0, 0, 0, 0, 66, 0, 0, 0, 0, 0, 67, 0, 0, 0, 0, 0, 68, 0, 0, 0, 69, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 70, 0, 0, 0, 71, 0, 0, 0, 72, 0, 0, 0, 73, 0, 0,
    0, 0, 0, 0, 74, 0, 75, 0, 0, 76, 0, 0, 0, 0, 77, 0, 0, 0, 0, 78, 0, 79, 0, 0, 0, 80, 0, 0, 0, 0, 0, 0,
    0, 0, 81, 0, 82, 0, 83, 0, 0, 0, 0, 0, 0, 0, 0, 84, 0, 0, 0, 0, 85, 0, 0, 0, 0, 0, 86, 0, 87, 0, 0, 0,
    0, 0, 88, 0, 0, 0, 0, 0, 89, 0, 90, 0, 0, 91, 0, 0, 92, 0, 93, 0, 0, 0, 0, 0, 94, 0, 0, 0, 0, 0, 95, 0,
    0, 0, 0, 96, 0, 97, 0, 0, 0, 0, 0, 98, 0, 0, 0, 0, 0, 99, 0, 0, 0, 100, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 101, 0, 0, 0, 102, 0, 0, 0, 103, 0, 0, 0, 104, 0, 0, 0, 0, 0, 0,
    0, 0, 105, 0, 0, 0, 0, 0, 0, 106, 0, 0, 0, 0, 0, 0, 0, 0, 0, 107, 0, 0, 0, 0, 0, 108, 0, 0, 0, 0, 0, 0,
    109, 0, 110, 0, 0, 111, 0, 0, 0, 0, 112, 0, 0, 0, 0, 113, 0, 114, 0, 0, 0, 115, 0, 0, 0, 0, 0, 0, 0, 0, 116, 0,
    117, 0, 118, 0, 0, 0, 0, 0, 0, 0, 0, 119, 0, 0, 0, 0, 120, 0, 0, 0, 0, 0, 121, 0, 0, 0, 0, 122, 0, 123, 0, 0,
    0, 0, 0, 124, 0, 0, 0, 0, 0, 125, 0, 0, 0, 0, 126, 0, 0, 0, 0, 0, 0, 0, 0, 0, 127, 0, 0, 0, 0, 0, 128, 0,
    0, 0, 0, 0, 129, 0, 0, 0, 130, 0, 0, 0, 131, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 132, 0, 0, 0, 133, 0, 0, 0, 134, 0, 0, 0, 135, 0, 0, 0, 136, 0, 0, 0, 0, 0, 0, 0, 0, 137, 0, 0, 0,
    0, 0, 0, 138, 0, 0, 0, 139, 0, 0, 0, 140, 0, 0, 0, 0, 0, 0, 0, 0, 0, 141, 0, 0, 0, 0, 0, 142, 0, 0, 0, 0,
    0, 0, 143, 0, 144, 0, 0, 145, 0, 0, 0, 0, 146, 0, 0, 0, 0, 147, 0, 148, 0, 0, 0, 149, 0, 0, 0, 0, 0, 0, 0, 0,
    150, 0, 151, 0, 152, 0, 0, 0, 0, 0, 0, 0, 0, 153, 0, 0, 0, 0, 154, 0, 0, 0, 0, 0, 155, 0, 0, 156, 0, 157, 0, 0,
    0, 0, 158, 0, 0, 159, 0, 0, 0, 0, 160, 0, 0, 161, 0, 0, 0, 162, 163, 0, 0, 0, 0, 164, 0, 0, 0, 0, 0, 165, 0, 0,
    0, 0, 0, 166, 0, 0, 0, 0, 0, 0, 0, 167, 0, 0, 168, 0, 169, 0, 0, 0, 170, 0, 171, 0, 0, 0, 172, 0, 173, 0, 0, 0,
    174, 0, 0, 0, 0, 0, 175, 0, 0, 0, 0, 0, 176, 0, 0, 0, 0, 177, 0, 178, 0, 0, 0, 0, 0, 179, 0, 0, 0, 0, 0, 180,
    0, 181, 0, 0, 0, 0, 0, 0, 0, 0, 182, 0, 0, 0, 0, 0, 183, 0, 0, 0, 0, 0, 184, 0, 0, 0, 185, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 186, 0, 0, 0, 187, 0, 0, 0, 188, 0, 0, 0, 189, 0, 0,
    0, 0, 0, 0, 190, 0, 191, 0, 0, 192, 0, 0, 0, 0, 193, 0, 0, 0, 0, 194, 0, 195, 0, 0, 0, 196, 0, 0, 0, 0, 0, 0,
    0, 0, 197, 0, 198, 0, 199, 0, 0, 0, 0, 0, 0, 0, 0, 200, 0, 0, 0, 0, 201, 0, 0, 0, 0, 0, 202, 0, 203, 0, 0, 0,
    0, 0, 204, 0, 0, 0, 0, 0, 205, 0, 0, 0, 0, 206, 0, 207, 0, 0, 0, 0, 0, 208, 0, 0, 0, 0, 0, 209, 0, 0, 0, 0,
    210, 0, 0, 0, 0, 0, 0, 0, 0, 0, 211, 0, 0, 0, 0, 0, 212, 0, 0, 0, 0, 0, 213, 0, 0, 0, 214, 0, 0, 0, 215, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 216, 0, 0, 0, 217, 0, 0, 0, 218, 0, 0,
    0, 219, 0, 0, 0, 220, 0, 0, 0, 0, 0, 0, 0, 0, 221, 0, 0, 0, 0, 0, 0, 222, 0, 0, 0, 223, 0, 0, 0, 224, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 225, 0, 0, 0, 0, 0, 226, 0, 0, 0, 0, 0, 0, 227, 0, 228, 0, 0, 229, 0, 0, 0, 0, 230, 0,
    0, 0, 0, 231, 0, 232, 0, 0, 0, 233, 0, 0, 0, 0, 0, 0, 0, 0, 234, 0, 235, 0, 236, 0, 0, 0, 0, 0, 0, 0, 0, 237,
    0, 0, 0, 0, 238, 0, 0, 0, 0, 0, 239, 0, 0, 240, 0, 241, 0, 0, 0, 0, 242, 0, 0, 243, 0, 0, 0, 0, 244, 0, 0, 245,
    0, 0, 0, 246, 247, 0, 0, 0, 0, 248, 0, 0, 0, 0, 0, 249, 0, 0, 0, 0, 0, 250, 0, 0, 0, 0, 0, 0, 0, 251, 0, 0,
    252, 0, 253, 0, 0, 0, 254, 0, 255, 0, 0, 0, 256, 0, 257, 0, 0, 0, 258, 0, 0, 0, 0, 0, 259, 0, 0, 0, 0, 0, 260, 0,
    0, 0, 0, 261, 0, 262, 0, 0, 0, 0, 0, 263, 0, 0, 0, 0, 0, 264, 0, 265, 0, 0, 0, 0, 0, 0, 0, 0, 0, 266, 0, 0,
    0, 0, 0, 267, 0, 0, 0, 0, 0, 268, 0, 0, 0, 269, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 270, 0, 0, 0, 271, 0, 0, 0, 272, 0, 0, 0, 273, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 274, 0,
    0, 0, 0, 275, 0, 0, 0, 0, 0, 0, 276, 0, 0, 0, 0, 277, 0, 0, 0, 0, 0, 0, 0, 278, 0, 0, 0, 0, 0, 0, 279, 0,
    0, 280, 0, 0, 0, 0, 281, 0, 0, 0, 0, 282, 0, 0, 0, 0, 0, 0, 283, 0, 0, 0, 0, 284, 0, 0, 0, 0, 0, 0, 0, 285,
    0, 0, 0, 0, 0, 0, 286, 0, 0, 287, 0, 0, 0, 0, 0, 0, 288, 0, 0, 0, 0, 0, 0, 289, 0, 290, 0, 0, 291, 0, 0, 0,
    0, 292, 0, 0, 0, 0, 293, 0, 294, 0, 0, 0, 295, 0, 0, 0, 0, 0, 0, 0, 0, 296, 0, 297, 0, 298, 0, 0, 0, 0, 0, 0,
    0, 0, 299, 0, 0, 0, 0, 300, 0, 0, 0, 0, 0, 301, 0, 302, 0, 0, 0, 0, 0, 303, 0, 0, 0, 0, 0, 304, 0, 0, 0, 0,
    305, 0, 0, 0, 0, 306, 0, 0, 0, 0, 0, 307, 0, 0, 0, 0, 308, 0, 309, 0, 0, 0, 0, 0, 310, 0, 0, 0, 0, 0, 311, 0,
    0, 0, 0, 312, 0, 0, 0, 0, 0, 0, 0, 0, 313, 0, 0, 0, 0, 0, 314, 0, 0, 0, 0, 0, 315, 0, 0, 0, 316, 0, 0, 0,
    317, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 318, 0, 0, 0, 319, 0, 0, 0, 320,
    0, 0, 0, 321, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 322, 0, 0, 0, 0, 0, 0, 323, 0, 0, 0, 0, 324, 0, 0, 0, 0, 325,
    0, 0, 0, 0, 0, 0, 326, 0, 0, 0, 0, 327, 0, 0, 0, 0, 0, 0, 0, 0, 328, 0, 0, 0, 0, 0, 0, 329, 0, 0, 330, 0,
    0, 0, 331, 0, 0, 0, 0, 332, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 333, 0, 0, 0, 0, 0, 0, 0, 334, 0, 0, 0, 0, 0,
    0, 335, 0, 336, 0, 0, 337, 0, 0, 0, 0, 338, 0, 0, 0, 0, 339, 0, 340, 0, 0, 0, 341, 0, 0, 0, 0, 0, 0, 0, 0, 342,
    0, 343, 0, 344, 0, 0, 0, 0, 0, 0, 0, 0, 345, 0, 0, 0, 0, 346, 0, 0, 0, 0, 0, 347, 0, 348, 0, 0, 0, 0, 0, 349,
    0, 0, 0, 0, 0, 350, 0, 0, 0, 0, 351, 0, 0, 0, 0, 352, 0, 0, 0, 0, 0, 353, 0, 0, 0, 0, 354, 0, 355, 0, 0, 0,
    0, 0, 356, 0, 0, 0, 0, 0, 357, 0, 0, 0, 0, 358, 0, 0, 0, 0, 0, 0, 0, 0, 0, 359, 0, 0, 0, 0, 0, 360, 0, 0,
    0, 0, 0, 361, 0, 0, 0, 362, 0, 0, 0, 363, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 364, 0, 0, 0, 365, 0, 0, 0, 366, 0, 0, 0, 367, 0, 0, 0, 368, 0, 0, 0, 0, 0, 0, 0, 0, 369, 0, 0, 0, 0,
    0, 0, 370, 0, 0, 0, 371, 0, 0, 0, 372, 0, 0, 0, 0, 0, 0, 0, 0, 0, 373, 0, 0, 0, 0, 0, 374, 0, 0, 0, 0, 0,
    0, 375, 0, 376, 0, 0, 377, 0, 0, 0, 0, 378, 0, 0, 0, 0, 379, 0, 380, 0, 0, 0, 381, 0, 0, 0, 0, 0, 0, 0, 0, 382,
    0, 383, 0, 384, 0, 0, 0, 0, 0, 0, 0, 0, 385, 0, 0, 0, 0, 386, 0, 0, 0, 0, 0, 387, 0, 0, 0, 0, 388, 0, 0, 0,
    0, 389, 0, 0, 0, 0, 0, 390, 0, 0, 0, 0, 391, 0, 392, 0, 0, 0, 0, 0, 393, 0, 0, 0, 0, 0, 394, 0, 0, 0, 0, 395,
    0, 0, 0, 0, 0, 0, 0, 0, 396, 0, 0, 0, 0, 0, 397, 0, 0, 0, 0, 0, 398, 0, 0, 0, 399, 0, 0, 0, 400, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 401, 0, 0, 0, 402, 0, 0, 0, 403, 0, 0, 0, 404, 0, 0,
    0, 0, 0, 0, 405, 0, 406, 0, 0, 407, 0, 0, 0, 0, 408, 0, 0, 0, 0, 409, 0, 410, 0, 0, 0, 411, 0, 0, 0, 0, 0, 0,
    0, 0, 412, 0, 413, 0, 414, 0, 0, 0, 0, 0, 0, 0, 0, 415, 0, 0, 0, 0, 416, 0, 0, 0, 0, 0, 417, 0, 418, 0, 0, 0,
    0, 0, 419, 0, 0, 0, 0, 0, 420, 0, 0, 0, 0, 421, 0, 0, 0, 0, 422, 0, 0, 0, 0, 0, 423, 0, 0, 0, 0, 424, 0, 425,
    0, 0, 0, 0, 0, 426, 0, 0, 0, 0, 0, 427, 0, 0, 0, 0, 428, 0, 0, 0, 0, 0, 0, 0, 0, 0, 429, 0, 0, 0, 0, 0,
    430, 0, 0, 0, 0, 0, 431, 0, 0, 0, 432, 0, 0, 0, 433, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 434, 0, 0, 0, 435, 0, 0, 0, 436, 0, 0, 0, 437, 0, 0, 0, 438, 0, 0, 0, 0, 0, 0, 0, 0, 439, 0,
    0, 0, 0, 0, 0, 440, 0, 0, 0, 441, 0, 0, 0, 442, 0, 0, 0, 0, 0, 0, 0, 0, 0, 443, 0, 0, 0, 0, 0, 444, 0, 0,
    0, 0, 0, 0, 445, 0, 446, 0, 0, 447, 0, 0, 0, 0, 448, 0, 0, 0, 0, 449, 0, 450, 0, 0, 0, 451, 0, 0, 0, 0, 0, 0,
    0, 0, 452, 0, 453, 0, 454, 0, 0, 0, 0, 0, 0, 0, 0, 455, 0, 0, 0, 0, 456, 0, 0, 0, 0, 0, 457, 0, 0, 458, 0, 459,
    0, 0, 0, 0, 460, 0, 0, 461, 0, 0, 0, 0, 462, 0, 0, 463, 0, 0, 0, 464, 465, 0, 0, 0, 0, 466, 0, 0, 0, 0, 0, 467,
    0, 0, 0, 0, 0, 468, 0, 0, 0, 0, 0, 0, 0, 469, 0, 0, 470, 0, 471, 0, 0, 0, 472, 0, 473, 0, 0, 0, 474, 0, 475, 0,
    0, 0, 476, 0, 0, 0, 0, 0, 477, 0, 0, 0, 0, 0, 478, 0, 0, 0, 0, 479, 0, 480, 0, 0, 0, 0, 0, 481, 0, 0, 0, 0,
    0, 482, 0, 483, 0, 0, 0, 0, 0, 0, 0, 0, 484, 0, 0, 0, 0, 0, 485, 0, 0, 0, 0, 0, 486, 0, 0, 0, 487, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 488, 0, 0, 0, 489, 0, 0, 0, 490, 0, 0, 0, 491,
    0, 0, 0, 0, 0, 0, 492, 0, 493, 0, 0, 494, 0, 0, 0, 0, 495, 0, 0, 0, 0, 496, 0, 497, 0, 0, 0, 498, 0, 0, 0, 0,
    0, 0, 0, 0, 499, 0, 500, 0, 501, 0, 0, 0, 0, 0, 0, 0, 0, 502, 0, 0, 0, 0, 503, 0, 0, 0, 0, 0, 504, 0, 505, 0,
    0, 0, 0, 0, 506, 0, 0, 0, 0, 0, 507, 0, 0, 0, 0, 508, 0, 509, 0, 0, 0, 0, 0, 510, 0, 0, 0, 0, 0, 511, 0, 0,
    0, 0, 512, 0, 0, 0, 0, 0, 0, 0, 0, 0, 513, 0, 0, 0, 0, 0, 514, 0, 0, 0, 0, 0, 515, 0, 0, 0, 516, 0, 0, 0,
    517, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 518, 0, 0, 0, 519, 0, 0, 0, 520,
    0, 0, 0, 521, 0, 0, 0, 522, 0, 0, 0, 0, 0, 0, 0, 0, 523, 0, 0, 0, 0, 0, 0, 524, 0, 0, 0, 525, 0, 0, 0, 526,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 527, 0, 0, 0, 0, 0, 528, 0, 0, 0, 0, 0, 0, 529, 0, 530, 0, 0, 531, 0, 0, 0, 0,
    532, 0, 0, 0, 0, 533, 0, 534, 0, 0, 0, 535, 0, 0, 0, 0, 0, 0, 0, 0, 536, 0, 537, 0, 538, 0, 0, 0, 0, 0, 0, 0,
    0, 539, 0, 0, 0, 0, 540, 0, 0, 0, 0, 0, 541, 0, 0, 542, 0, 543, 0, 0, 0, 0, 544, 0, 0, 545, 0, 0, 0, 0, 546, 0,
    0, 547, 0, 0, 0, 548, 549, 0, 0, 0, 0, 550, 0, 0, 0, 0, 0, 551, 0, 0, 0, 0, 0, 552, 0, 0, 0, 0, 0, 0, 0, 553,
    0, 0, 554, 0, 555, 0, 0, 0, 556, 0, 557, 0, 0, 0, 558, 0, 559, 0, 0, 0, 560, 0, 0, 0, 0, 0, 561, 0, 0, 0, 0, 0,
    562, 0, 0, 0, 0, 563, 0, 564, 0, 0, 0, 0, 0, 565, 0, 0, 0, 0, 0, 566, 0, 567, 0, 0, 0, 0, 0, 0, 0, 0, 568, 0,
    0, 0, 0, 0, 569, 0, 0, 0, 0, 0, 570, 0, 0, 0, 571, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 572, 0, 0, 0, 573, 0, 0, 0, 574, 0, 0, 0, 575, 0, 0, 0, 0, 0, 0, 576, 0, 577, 0, 0, 578, 0, 0,
    0, 0, 579, 0, 0, 0, 0, 580, 0, 581, 0, 0, 0, 582, 0, 0, 0, 0, 0, 0, 0, 0, 583, 0, 584, 0, 585, 0, 0, 0, 0, 0,
    0, 0, 0, 586, 0, 0, 0, 0, 587, 0, 0, 0, 0, 0, 588, 0, 589, 0, 0, 0, 0, 0, 590, 0, 0, 0, 0, 0, 591, 0, 0, 0,
    0, 592, 0, 0, 0, 0, 593, 0, 0, 0, 0, 0, 594, 0, 0, 0, 0, 595, 0, 596, 0, 0, 0, 0, 0, 597, 0, 0, 0, 0, 0, 598,
    0, 0, 0, 0, 599, 0, 0, 0, 0, 0, 0, 0, 0, 0, 600, 0, 0, 0, 0, 0, 601, 0, 0, 0, 0, 0, 602, 0, 0, 0, 603, 0,
    0, 0, 604, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 605, 0, 0, 0, 606, 0, 0,
    0, 607, 0, 0, 0, 608, 0, 0, 0, 609, 0, 0, 0, 0, 0, 0, 0, 0, 610, 0, 0, 0, 0, 0, 0, 611, 0, 0, 0, 612, 0, 0,
    0, 613, 0, 0, 0, 0, 0, 0, 0, 0, 0, 614, 0, 0, 0, 0, 0, 615, 0, 0, 0, 0, 0, 0, 616, 0, 617, 0, 0, 618, 0, 0,
    0, 0, 619, 0, 0, 0, 0, 620, 0, 621, 0, 0, 0, 622, 0, 0, 0, 0, 0, 0, 0, 0, 623, 0, 624, 0, 625, 0, 0, 0, 0, 0,
    0, 0, 0, 626, 0, 0, 0, 0, 627, 0, 0, 0, 0, 0, 628, 0, 0, 629, 0, 630, 0, 0, 0, 0, 631, 0, 0, 632, 0, 0, 0, 0,
    633, 0, 0, 634, 0, 0, 0, 635, 636, 0, 0, 0, 0, 637, 0, 0, 0, 0, 0, 638, 0, 0, 0, 0, 0, 639, 0, 0, 0, 0, 0, 0,
    0, 640, 0, 0, 641, 0, 642, 0, 0, 0, 643, 0, 644, 0, 0, 0, 645, 0, 646, 0, 0, 0, 647, 0, 0, 0, 0, 0, 648, 0, 0, 0,
    0, 0, 649, 0, 0, 0, 0, 650, 0, 651, 0, 0, 0, 0, 0, 652, 0, 0, 0, 0, 0, 653, 0, 654, 0, 0, 0, 0, 0, 0, 0, 0,
    655, 0, 0, 0, 0, 0, 656, 0, 0, 0, 0, 0, 657, 0, 0, 0, 658, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 659, 0, 0, 0, 660, 0, 0, 0, 661, 0, 0, 0, 662, 0, 0, 0, 0, 0, 0, 663, 0, 664, 0, 0, 665,
    0, 0, 0, 0, 666, 0, 0, 0, 0, 667, 0, 668, 0, 0, 0, 669, 0, 0, 0, 0, 0, 0, 0, 0, 670, 0, 671, 0, 672, 0, 0, 0,
    0, 0, 0, 0, 0, 673, 0, 0, 0, 0, 674, 0, 0, 0, 0, 0, 675, 0, 676, 0, 0, 0, 0, 0, 677, 0, 0, 0, 0, 0, 678, 0,
    0, 0, 0, 679, 0, 680, 0, 0, 0, 0, 0, 681, 0, 0, 0, 0, 0, 682, 0, 0, 0, 0, 683, 0, 0, 0, 0, 0, 0, 0, 0, 684,
    0, 0, 0, 0, 0, 685, 0, 0, 0, 0, 0, 686, 0, 0, 0, 687, 0, 0, 0, 688, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 689, 0, 0, 0, 690, 0, 0, 0, 691, 0, 0, 0, 692, 0, 0, 0, 0, 0, 0, 693, 0, 694, 0, 0,
    695, 0, 0, 0, 0, 696, 0, 0, 0, 0, 697, 0, 698, 0, 0, 0, 699, 0, 0, 0, 0, 0, 0, 0, 0, 700, 0, 701, 0, 702, 0, 0,
    0, 0, 0, 0, 0, 0, 703, 0, 0, 0, 0, 704, 0, 0, 0, 0, 0, 705, 0, 706, 0, 0, 707, 0, 0, 708, 0, 709, 0, 0, 0, 0,
    0, 710, 0, 0, 0, 0, 0, 711, 0, 0, 0, 0, 712, 0, 713, 0, 0, 0, 0, 0, 714, 0, 0, 0, 0, 0, 715, 0, 0, 0, 716, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 717, 0, 0, 0, 718, 0, 0, 0, 719, 0,
    0, 0, 720, 0, 0, 0, 0, 0, 0, 0, 0, 0, 721, 0, 0, 0, 0, 0, 0, 722, 0, 0, 0, 723, 0, 0, 0, 0, 0, 724, 0, 0,
    0, 725, 0, 0, 0, 726, 0, 0, 0, 727, 0, 0, 0, 728, 0, 0, 0, 729, 0, 0, 0, 730, 0, 0, 731, 0, 0, 0, 0, 732, 0, 0,
    0, 733, 0, 0, 0, 734, 0, 0, 0, 0, 735, 0, 0, 0, 736, 0, 0, 0, 0, 737, 0, 0, 0, 738, 0, 0, 0, 0, 0, 0, 0, 739,
    0, 0, 0, 0, 0, 0, 740, 0, 0, 0, 0, 0, 0, 0, 741, 0, 0, 0, 0, 0, 0, 742, 0, 0, 743, 0, 0, 0, 0, 744, 0, 0,
    0, 745, 0, 0, 0, 746, 0, 0, 0, 747, 0, 0, 0, 748, 0, 0, 749, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 750, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 751, 0, 0, 0, 752, 0, 0, 0, 753, 0, 0, 0, 0, 0, 754, 0, 0, 0, 0, 0, 0, 0, 0, 755,
    0, 756, 0, 0, 0, 0, 0, 757, 0, 0, 0, 0, 0, 758, 0, 0, 0, 0, 0, 0, 0, 0, 759, 0, 760, 0, 0, 0, 0, 0, 761, 0,
    0, 0, 0, 0, 762, 0, 0, 0, 0, 0, 0, 0, 0, 763, 0, 764, 0, 0, 0, 0, 0, 765, 0, 0, 0, 0, 0, 766, 0, 0, 0, 0,
    767, 0, 768, 0, 0, 0, 0, 0, 769, 0, 0, 0, 0, 0, 770, 0, 0, 0, 0, 0, 771, 0, 0, 0, 0, 0, 0, 0, 0, 772, 0, 773,
};
void recomp_unit_0054_entry(Runtime &rt, AllegrexContext &ctx, std::uint16_t direct_entry_id, GuestMemory::AotFastView &aot_mem) {
    std::uint32_t jump_target = 0u;
    std::uint32_t local_transfers = 0u;
    std::uint32_t local_pc = ctx.pc;
    std::uint32_t entry_id = direct_entry_id;
LOCAL_DISPATCH:
    {
    if (entry_id == 0u) {
        const std::uint32_t entry_delta = local_pc - 0x088DC000u;
        entry_id = (entry_delta < 16384u && (entry_delta & 3u) == 0u) ? kEntryIds_recomp_unit_0054[entry_delta >> 2u] : 0u;
    }
    switch (entry_id) {
    case 1u: goto L_088DC000;
    case 2u: goto L_088DC014;
    case 3u: goto L_088DC028;
    case 4u: goto L_088DC03C;
    case 5u: goto L_088DC054;
    case 6u: goto L_088DC068;
    case 7u: goto L_088DC070;
    case 8u: goto L_088DC088;
    case 9u: goto L_088DC0A0;
    case 10u: goto L_088DC0B4;
    case 11u: goto L_088DC0DC;
    case 12u: goto L_088DC0F4;
    case 13u: goto L_088DC10C;
    case 14u: goto L_088DC11C;
    case 15u: goto L_088DC12C;
    case 16u: goto L_088DC188;
    case 17u: goto L_088DC198;
    case 18u: goto L_088DC1A8;
    case 19u: goto L_088DC1B8;
    case 20u: goto L_088DC1C8;
    case 21u: goto L_088DC1EC;
    case 22u: goto L_088DC208;
    case 23u: goto L_088DC218;
    case 24u: goto L_088DC228;
    case 25u: goto L_088DC250;
    case 26u: goto L_088DC268;
    case 27u: goto L_088DC284;
    case 28u: goto L_088DC28C;
    case 29u: goto L_088DC298;
    case 30u: goto L_088DC2AC;
    case 31u: goto L_088DC2C0;
    case 32u: goto L_088DC2C8;
    case 33u: goto L_088DC2D8;
    case 34u: goto L_088DC2FC;
    case 35u: goto L_088DC304;
    case 36u: goto L_088DC30C;
    case 37u: goto L_088DC330;
    case 38u: goto L_088DC344;
    case 39u: goto L_088DC35C;
    case 40u: goto L_088DC368;
    case 41u: goto L_088DC370;
    case 42u: goto L_088DC384;
    case 43u: goto L_088DC390;
    case 44u: goto L_088DC3A4;
    case 45u: goto L_088DC3B0;
    case 46u: goto L_088DC3C0;
    case 47u: goto L_088DC3C4;
    case 48u: goto L_088DC3D8;
    case 49u: goto L_088DC3F0;
    case 50u: goto L_088DC408;
    case 51u: goto L_088DC428;
    case 52u: goto L_088DC434;
    case 53u: goto L_088DC43C;
    case 54u: goto L_088DC44C;
    case 55u: goto L_088DC454;
    case 56u: goto L_088DC464;
    case 57u: goto L_088DC46C;
    case 58u: goto L_088DC47C;
    case 59u: goto L_088DC494;
    case 60u: goto L_088DC4AC;
    case 61u: goto L_088DC4C0;
    case 62u: goto L_088DC4C8;
    case 63u: goto L_088DC4E0;
    case 64u: goto L_088DC4F8;
    case 65u: goto L_088DC500;
    case 66u: goto L_088DC528;
    case 67u: goto L_088DC540;
    case 68u: goto L_088DC558;
    case 69u: goto L_088DC568;
    case 70u: goto L_088DC5C4;
    case 71u: goto L_088DC5D4;
    case 72u: goto L_088DC5E4;
    case 73u: goto L_088DC5F4;
    case 74u: goto L_088DC610;
    case 75u: goto L_088DC618;
    case 76u: goto L_088DC624;
    case 77u: goto L_088DC638;
    case 78u: goto L_088DC64C;
    case 79u: goto L_088DC654;
    case 80u: goto L_088DC664;
    case 81u: goto L_088DC688;
    case 82u: goto L_088DC690;
    case 83u: goto L_088DC698;
    case 84u: goto L_088DC6BC;
    case 85u: goto L_088DC6D0;
    case 86u: goto L_088DC6E8;
    case 87u: goto L_088DC6F0;
    case 88u: goto L_088DC708;
    case 89u: goto L_088DC720;
    case 90u: goto L_088DC728;
    case 91u: goto L_088DC734;
    case 92u: goto L_088DC740;
    case 93u: goto L_088DC748;
    case 94u: goto L_088DC760;
    case 95u: goto L_088DC778;
    case 96u: goto L_088DC78C;
    case 97u: goto L_088DC794;
    case 98u: goto L_088DC7AC;
    case 99u: goto L_088DC7C4;
    case 100u: goto L_088DC7D4;
    case 101u: goto L_088DC834;
    case 102u: goto L_088DC844;
    case 103u: goto L_088DC854;
    case 104u: goto L_088DC864;
    case 105u: goto L_088DC888;
    case 106u: goto L_088DC8A4;
    case 107u: goto L_088DC8CC;
    case 108u: goto L_088DC8E4;
    case 109u: goto L_088DC900;
    case 110u: goto L_088DC908;
    case 111u: goto L_088DC914;
    case 112u: goto L_088DC928;
    case 113u: goto L_088DC93C;
    case 114u: goto L_088DC944;
    case 115u: goto L_088DC954;
    case 116u: goto L_088DC978;
    case 117u: goto L_088DC980;
    case 118u: goto L_088DC988;
    case 119u: goto L_088DC9AC;
    case 120u: goto L_088DC9C0;
    case 121u: goto L_088DC9D8;
    case 122u: goto L_088DC9EC;
    case 123u: goto L_088DC9F4;
    case 124u: goto L_088DCA0C;
    case 125u: goto L_088DCA24;
    case 126u: goto L_088DCA38;
    case 127u: goto L_088DCA60;
    case 128u: goto L_088DCA78;
    case 129u: goto L_088DCA90;
    case 130u: goto L_088DCAA0;
    case 131u: goto L_088DCAB0;
    case 132u: goto L_088DCB0C;
    case 133u: goto L_088DCB1C;
    case 134u: goto L_088DCB2C;
    case 135u: goto L_088DCB3C;
    case 136u: goto L_088DCB4C;
    case 137u: goto L_088DCB70;
    case 138u: goto L_088DCB8C;
    case 139u: goto L_088DCB9C;
    case 140u: goto L_088DCBAC;
    case 141u: goto L_088DCBD4;
    case 142u: goto L_088DCBEC;
    case 143u: goto L_088DCC08;
    case 144u: goto L_088DCC10;
    case 145u: goto L_088DCC1C;
    case 146u: goto L_088DCC30;
    case 147u: goto L_088DCC44;
    case 148u: goto L_088DCC4C;
    case 149u: goto L_088DCC5C;
    case 150u: goto L_088DCC80;
    case 151u: goto L_088DCC88;
    case 152u: goto L_088DCC90;
    case 153u: goto L_088DCCB4;
    case 154u: goto L_088DCCC8;
    case 155u: goto L_088DCCE0;
    case 156u: goto L_088DCCEC;
    case 157u: goto L_088DCCF4;
    case 158u: goto L_088DCD08;
    case 159u: goto L_088DCD14;
    case 160u: goto L_088DCD28;
    case 161u: goto L_088DCD34;
    case 162u: goto L_088DCD44;
    case 163u: goto L_088DCD48;
    case 164u: goto L_088DCD5C;
    case 165u: goto L_088DCD74;
    case 166u: goto L_088DCD8C;
    case 167u: goto L_088DCDAC;
    case 168u: goto L_088DCDB8;
    case 169u: goto L_088DCDC0;
    case 170u: goto L_088DCDD0;
    case 171u: goto L_088DCDD8;
    case 172u: goto L_088DCDE8;
    case 173u: goto L_088DCDF0;
    case 174u: goto L_088DCE00;
    case 175u: goto L_088DCE18;
    case 176u: goto L_088DCE30;
    case 177u: goto L_088DCE44;
    case 178u: goto L_088DCE4C;
    case 179u: goto L_088DCE64;
    case 180u: goto L_088DCE7C;
    case 181u: goto L_088DCE84;
    case 182u: goto L_088DCEA8;
    case 183u: goto L_088DCEC0;
    case 184u: goto L_088DCED8;
    case 185u: goto L_088DCEE8;
    case 186u: goto L_088DCF44;
    case 187u: goto L_088DCF54;
    case 188u: goto L_088DCF64;
    case 189u: goto L_088DCF74;
    case 190u: goto L_088DCF90;
    case 191u: goto L_088DCF98;
    case 192u: goto L_088DCFA4;
    case 193u: goto L_088DCFB8;
    case 194u: goto L_088DCFCC;
    case 195u: goto L_088DCFD4;
    case 196u: goto L_088DCFE4;
    case 197u: goto L_088DD008;
    case 198u: goto L_088DD010;
    case 199u: goto L_088DD018;
    case 200u: goto L_088DD03C;
    case 201u: goto L_088DD050;
    case 202u: goto L_088DD068;
    case 203u: goto L_088DD070;
    case 204u: goto L_088DD088;
    case 205u: goto L_088DD0A0;
    case 206u: goto L_088DD0B4;
    case 207u: goto L_088DD0BC;
    case 208u: goto L_088DD0D4;
    case 209u: goto L_088DD0EC;
    case 210u: goto L_088DD100;
    case 211u: goto L_088DD128;
    case 212u: goto L_088DD140;
    case 213u: goto L_088DD158;
    case 214u: goto L_088DD168;
    case 215u: goto L_088DD178;
    case 216u: goto L_088DD1D4;
    case 217u: goto L_088DD1E4;
    case 218u: goto L_088DD1F4;
    case 219u: goto L_088DD204;
    case 220u: goto L_088DD214;
    case 221u: goto L_088DD238;
    case 222u: goto L_088DD254;
    case 223u: goto L_088DD264;
    case 224u: goto L_088DD274;
    case 225u: goto L_088DD29C;
    case 226u: goto L_088DD2B4;
    case 227u: goto L_088DD2D0;
    case 228u: goto L_088DD2D8;
    case 229u: goto L_088DD2E4;
    case 230u: goto L_088DD2F8;
    case 231u: goto L_088DD30C;
    case 232u: goto L_088DD314;
    case 233u: goto L_088DD324;
    case 234u: goto L_088DD348;
    case 235u: goto L_088DD350;
    case 236u: goto L_088DD358;
    case 237u: goto L_088DD37C;
    case 238u: goto L_088DD390;
    case 239u: goto L_088DD3A8;
    case 240u: goto L_088DD3B4;
    case 241u: goto L_088DD3BC;
    case 242u: goto L_088DD3D0;
    case 243u: goto L_088DD3DC;
    case 244u: goto L_088DD3F0;
    case 245u: goto L_088DD3FC;
    case 246u: goto L_088DD40C;
    case 247u: goto L_088DD410;
    case 248u: goto L_088DD424;
    case 249u: goto L_088DD43C;
    case 250u: goto L_088DD454;
    case 251u: goto L_088DD474;
    case 252u: goto L_088DD480;
    case 253u: goto L_088DD488;
    case 254u: goto L_088DD498;
    case 255u: goto L_088DD4A0;
    case 256u: goto L_088DD4B0;
    case 257u: goto L_088DD4B8;
    case 258u: goto L_088DD4C8;
    case 259u: goto L_088DD4E0;
    case 260u: goto L_088DD4F8;
    case 261u: goto L_088DD50C;
    case 262u: goto L_088DD514;
    case 263u: goto L_088DD52C;
    case 264u: goto L_088DD544;
    case 265u: goto L_088DD54C;
    case 266u: goto L_088DD574;
    case 267u: goto L_088DD58C;
    case 268u: goto L_088DD5A4;
    case 269u: goto L_088DD5B4;
    case 270u: goto L_088DD618;
    case 271u: goto L_088DD628;
    case 272u: goto L_088DD638;
    case 273u: goto L_088DD648;
    case 274u: goto L_088DD678;
    case 275u: goto L_088DD68C;
    case 276u: goto L_088DD6A8;
    case 277u: goto L_088DD6BC;
    case 278u: goto L_088DD6DC;
    case 279u: goto L_088DD6F8;
    case 280u: goto L_088DD704;
    case 281u: goto L_088DD718;
    case 282u: goto L_088DD72C;
    case 283u: goto L_088DD748;
    case 284u: goto L_088DD75C;
    case 285u: goto L_088DD77C;
    case 286u: goto L_088DD798;
    case 287u: goto L_088DD7A4;
    case 288u: goto L_088DD7C0;
    case 289u: goto L_088DD7DC;
    case 290u: goto L_088DD7E4;
    case 291u: goto L_088DD7F0;
    case 292u: goto L_088DD804;
    case 293u: goto L_088DD818;
    case 294u: goto L_088DD820;
    case 295u: goto L_088DD830;
    case 296u: goto L_088DD854;
    case 297u: goto L_088DD85C;
    case 298u: goto L_088DD864;
    case 299u: goto L_088DD888;
    case 300u: goto L_088DD89C;
    case 301u: goto L_088DD8B4;
    case 302u: goto L_088DD8BC;
    case 303u: goto L_088DD8D4;
    case 304u: goto L_088DD8EC;
    case 305u: goto L_088DD900;
    case 306u: goto L_088DD914;
    case 307u: goto L_088DD92C;
    case 308u: goto L_088DD940;
    case 309u: goto L_088DD948;
    case 310u: goto L_088DD960;
    case 311u: goto L_088DD978;
    case 312u: goto L_088DD98C;
    case 313u: goto L_088DD9B0;
    case 314u: goto L_088DD9C8;
    case 315u: goto L_088DD9E0;
    case 316u: goto L_088DD9F0;
    case 317u: goto L_088DDA00;
    case 318u: goto L_088DDA5C;
    case 319u: goto L_088DDA6C;
    case 320u: goto L_088DDA7C;
    case 321u: goto L_088DDA8C;
    case 322u: goto L_088DDAB8;
    case 323u: goto L_088DDAD4;
    case 324u: goto L_088DDAE8;
    case 325u: goto L_088DDAFC;
    case 326u: goto L_088DDB18;
    case 327u: goto L_088DDB2C;
    case 328u: goto L_088DDB50;
    case 329u: goto L_088DDB6C;
    case 330u: goto L_088DDB78;
    case 331u: goto L_088DDB88;
    case 332u: goto L_088DDB9C;
    case 333u: goto L_088DDBC8;
    case 334u: goto L_088DDBE8;
    case 335u: goto L_088DDC04;
    case 336u: goto L_088DDC0C;
    case 337u: goto L_088DDC18;
    case 338u: goto L_088DDC2C;
    case 339u: goto L_088DDC40;
    case 340u: goto L_088DDC48;
    case 341u: goto L_088DDC58;
    case 342u: goto L_088DDC7C;
    case 343u: goto L_088DDC84;
    case 344u: goto L_088DDC8C;
    case 345u: goto L_088DDCB0;
    case 346u: goto L_088DDCC4;
    case 347u: goto L_088DDCDC;
    case 348u: goto L_088DDCE4;
    case 349u: goto L_088DDCFC;
    case 350u: goto L_088DDD14;
    case 351u: goto L_088DDD28;
    case 352u: goto L_088DDD3C;
    case 353u: goto L_088DDD54;
    case 354u: goto L_088DDD68;
    case 355u: goto L_088DDD70;
    case 356u: goto L_088DDD88;
    case 357u: goto L_088DDDA0;
    case 358u: goto L_088DDDB4;
    case 359u: goto L_088DDDDC;
    case 360u: goto L_088DDDF4;
    case 361u: goto L_088DDE0C;
    case 362u: goto L_088DDE1C;
    case 363u: goto L_088DDE2C;
    case 364u: goto L_088DDE88;
    case 365u: goto L_088DDE98;
    case 366u: goto L_088DDEA8;
    case 367u: goto L_088DDEB8;
    case 368u: goto L_088DDEC8;
    case 369u: goto L_088DDEEC;
    case 370u: goto L_088DDF08;
    case 371u: goto L_088DDF18;
    case 372u: goto L_088DDF28;
    case 373u: goto L_088DDF50;
    case 374u: goto L_088DDF68;
    case 375u: goto L_088DDF84;
    case 376u: goto L_088DDF8C;
    case 377u: goto L_088DDF98;
    case 378u: goto L_088DDFAC;
    case 379u: goto L_088DDFC0;
    case 380u: goto L_088DDFC8;
    case 381u: goto L_088DDFD8;
    case 382u: goto L_088DDFFC;
    case 383u: goto L_088DE004;
    case 384u: goto L_088DE00C;
    case 385u: goto L_088DE030;
    case 386u: goto L_088DE044;
    case 387u: goto L_088DE05C;
    case 388u: goto L_088DE070;
    case 389u: goto L_088DE084;
    case 390u: goto L_088DE09C;
    case 391u: goto L_088DE0B0;
    case 392u: goto L_088DE0B8;
    case 393u: goto L_088DE0D0;
    case 394u: goto L_088DE0E8;
    case 395u: goto L_088DE0FC;
    case 396u: goto L_088DE120;
    case 397u: goto L_088DE138;
    case 398u: goto L_088DE150;
    case 399u: goto L_088DE160;
    case 400u: goto L_088DE170;
    case 401u: goto L_088DE1C4;
    case 402u: goto L_088DE1D4;
    case 403u: goto L_088DE1E4;
    case 404u: goto L_088DE1F4;
    case 405u: goto L_088DE210;
    case 406u: goto L_088DE218;
    case 407u: goto L_088DE224;
    case 408u: goto L_088DE238;
    case 409u: goto L_088DE24C;
    case 410u: goto L_088DE254;
    case 411u: goto L_088DE264;
    case 412u: goto L_088DE288;
    case 413u: goto L_088DE290;
    case 414u: goto L_088DE298;
    case 415u: goto L_088DE2BC;
    case 416u: goto L_088DE2D0;
    case 417u: goto L_088DE2E8;
    case 418u: goto L_088DE2F0;
    case 419u: goto L_088DE308;
    case 420u: goto L_088DE320;
    case 421u: goto L_088DE334;
    case 422u: goto L_088DE348;
    case 423u: goto L_088DE360;
    case 424u: goto L_088DE374;
    case 425u: goto L_088DE37C;
    case 426u: goto L_088DE394;
    case 427u: goto L_088DE3AC;
    case 428u: goto L_088DE3C0;
    case 429u: goto L_088DE3E8;
    case 430u: goto L_088DE400;
    case 431u: goto L_088DE418;
    case 432u: goto L_088DE428;
    case 433u: goto L_088DE438;
    case 434u: goto L_088DE494;
    case 435u: goto L_088DE4A4;
    case 436u: goto L_088DE4B4;
    case 437u: goto L_088DE4C4;
    case 438u: goto L_088DE4D4;
    case 439u: goto L_088DE4F8;
    case 440u: goto L_088DE514;
    case 441u: goto L_088DE524;
    case 442u: goto L_088DE534;
    case 443u: goto L_088DE55C;
    case 444u: goto L_088DE574;
    case 445u: goto L_088DE590;
    case 446u: goto L_088DE598;
    case 447u: goto L_088DE5A4;
    case 448u: goto L_088DE5B8;
    case 449u: goto L_088DE5CC;
    case 450u: goto L_088DE5D4;
    case 451u: goto L_088DE5E4;
    case 452u: goto L_088DE608;
    case 453u: goto L_088DE610;
    case 454u: goto L_088DE618;
    case 455u: goto L_088DE63C;
    case 456u: goto L_088DE650;
    case 457u: goto L_088DE668;
    case 458u: goto L_088DE674;
    case 459u: goto L_088DE67C;
    case 460u: goto L_088DE690;
    case 461u: goto L_088DE69C;
    case 462u: goto L_088DE6B0;
    case 463u: goto L_088DE6BC;
    case 464u: goto L_088DE6CC;
    case 465u: goto L_088DE6D0;
    case 466u: goto L_088DE6E4;
    case 467u: goto L_088DE6FC;
    case 468u: goto L_088DE714;
    case 469u: goto L_088DE734;
    case 470u: goto L_088DE740;
    case 471u: goto L_088DE748;
    case 472u: goto L_088DE758;
    case 473u: goto L_088DE760;
    case 474u: goto L_088DE770;
    case 475u: goto L_088DE778;
    case 476u: goto L_088DE788;
    case 477u: goto L_088DE7A0;
    case 478u: goto L_088DE7B8;
    case 479u: goto L_088DE7CC;
    case 480u: goto L_088DE7D4;
    case 481u: goto L_088DE7EC;
    case 482u: goto L_088DE804;
    case 483u: goto L_088DE80C;
    case 484u: goto L_088DE830;
    case 485u: goto L_088DE848;
    case 486u: goto L_088DE860;
    case 487u: goto L_088DE870;
    case 488u: goto L_088DE8CC;
    case 489u: goto L_088DE8DC;
    case 490u: goto L_088DE8EC;
    case 491u: goto L_088DE8FC;
    case 492u: goto L_088DE918;
    case 493u: goto L_088DE920;
    case 494u: goto L_088DE92C;
    case 495u: goto L_088DE940;
    case 496u: goto L_088DE954;
    case 497u: goto L_088DE95C;
    case 498u: goto L_088DE96C;
    case 499u: goto L_088DE990;
    case 500u: goto L_088DE998;
    case 501u: goto L_088DE9A0;
    case 502u: goto L_088DE9C4;
    case 503u: goto L_088DE9D8;
    case 504u: goto L_088DE9F0;
    case 505u: goto L_088DE9F8;
    case 506u: goto L_088DEA10;
    case 507u: goto L_088DEA28;
    case 508u: goto L_088DEA3C;
    case 509u: goto L_088DEA44;
    case 510u: goto L_088DEA5C;
    case 511u: goto L_088DEA74;
    case 512u: goto L_088DEA88;
    case 513u: goto L_088DEAB0;
    case 514u: goto L_088DEAC8;
    case 515u: goto L_088DEAE0;
    case 516u: goto L_088DEAF0;
    case 517u: goto L_088DEB00;
    case 518u: goto L_088DEB5C;
    case 519u: goto L_088DEB6C;
    case 520u: goto L_088DEB7C;
    case 521u: goto L_088DEB8C;
    case 522u: goto L_088DEB9C;
    case 523u: goto L_088DEBC0;
    case 524u: goto L_088DEBDC;
    case 525u: goto L_088DEBEC;
    case 526u: goto L_088DEBFC;
    case 527u: goto L_088DEC24;
    case 528u: goto L_088DEC3C;
    case 529u: goto L_088DEC58;
    case 530u: goto L_088DEC60;
    case 531u: goto L_088DEC6C;
    case 532u: goto L_088DEC80;
    case 533u: goto L_088DEC94;
    case 534u: goto L_088DEC9C;
    case 535u: goto L_088DECAC;
    case 536u: goto L_088DECD0;
    case 537u: goto L_088DECD8;
    case 538u: goto L_088DECE0;
    case 539u: goto L_088DED04;
    case 540u: goto L_088DED18;
    case 541u: goto L_088DED30;
    case 542u: goto L_088DED3C;
    case 543u: goto L_088DED44;
    case 544u: goto L_088DED58;
    case 545u: goto L_088DED64;
    case 546u: goto L_088DED78;
    case 547u: goto L_088DED84;
    case 548u: goto L_088DED94;
    case 549u: goto L_088DED98;
    case 550u: goto L_088DEDAC;
    case 551u: goto L_088DEDC4;
    case 552u: goto L_088DEDDC;
    case 553u: goto L_088DEDFC;
    case 554u: goto L_088DEE08;
    case 555u: goto L_088DEE10;
    case 556u: goto L_088DEE20;
    case 557u: goto L_088DEE28;
    case 558u: goto L_088DEE38;
    case 559u: goto L_088DEE40;
    case 560u: goto L_088DEE50;
    case 561u: goto L_088DEE68;
    case 562u: goto L_088DEE80;
    case 563u: goto L_088DEE94;
    case 564u: goto L_088DEE9C;
    case 565u: goto L_088DEEB4;
    case 566u: goto L_088DEECC;
    case 567u: goto L_088DEED4;
    case 568u: goto L_088DEEF8;
    case 569u: goto L_088DEF10;
    case 570u: goto L_088DEF28;
    case 571u: goto L_088DEF38;
    case 572u: goto L_088DEF94;
    case 573u: goto L_088DEFA4;
    case 574u: goto L_088DEFB4;
    case 575u: goto L_088DEFC4;
    case 576u: goto L_088DEFE0;
    case 577u: goto L_088DEFE8;
    case 578u: goto L_088DEFF4;
    case 579u: goto L_088DF008;
    case 580u: goto L_088DF01C;
    case 581u: goto L_088DF024;
    case 582u: goto L_088DF034;
    case 583u: goto L_088DF058;
    case 584u: goto L_088DF060;
    case 585u: goto L_088DF068;
    case 586u: goto L_088DF08C;
    case 587u: goto L_088DF0A0;
    case 588u: goto L_088DF0B8;
    case 589u: goto L_088DF0C0;
    case 590u: goto L_088DF0D8;
    case 591u: goto L_088DF0F0;
    case 592u: goto L_088DF104;
    case 593u: goto L_088DF118;
    case 594u: goto L_088DF130;
    case 595u: goto L_088DF144;
    case 596u: goto L_088DF14C;
    case 597u: goto L_088DF164;
    case 598u: goto L_088DF17C;
    case 599u: goto L_088DF190;
    case 600u: goto L_088DF1B8;
    case 601u: goto L_088DF1D0;
    case 602u: goto L_088DF1E8;
    case 603u: goto L_088DF1F8;
    case 604u: goto L_088DF208;
    case 605u: goto L_088DF264;
    case 606u: goto L_088DF274;
    case 607u: goto L_088DF284;
    case 608u: goto L_088DF294;
    case 609u: goto L_088DF2A4;
    case 610u: goto L_088DF2C8;
    case 611u: goto L_088DF2E4;
    case 612u: goto L_088DF2F4;
    case 613u: goto L_088DF304;
    case 614u: goto L_088DF32C;
    case 615u: goto L_088DF344;
    case 616u: goto L_088DF360;
    case 617u: goto L_088DF368;
    case 618u: goto L_088DF374;
    case 619u: goto L_088DF388;
    case 620u: goto L_088DF39C;
    case 621u: goto L_088DF3A4;
    case 622u: goto L_088DF3B4;
    case 623u: goto L_088DF3D8;
    case 624u: goto L_088DF3E0;
    case 625u: goto L_088DF3E8;
    case 626u: goto L_088DF40C;
    case 627u: goto L_088DF420;
    case 628u: goto L_088DF438;
    case 629u: goto L_088DF444;
    case 630u: goto L_088DF44C;
    case 631u: goto L_088DF460;
    case 632u: goto L_088DF46C;
    case 633u: goto L_088DF480;
    case 634u: goto L_088DF48C;
    case 635u: goto L_088DF49C;
    case 636u: goto L_088DF4A0;
    case 637u: goto L_088DF4B4;
    case 638u: goto L_088DF4CC;
    case 639u: goto L_088DF4E4;
    case 640u: goto L_088DF504;
    case 641u: goto L_088DF510;
    case 642u: goto L_088DF518;
    case 643u: goto L_088DF528;
    case 644u: goto L_088DF530;
    case 645u: goto L_088DF540;
    case 646u: goto L_088DF548;
    case 647u: goto L_088DF558;
    case 648u: goto L_088DF570;
    case 649u: goto L_088DF588;
    case 650u: goto L_088DF59C;
    case 651u: goto L_088DF5A4;
    case 652u: goto L_088DF5BC;
    case 653u: goto L_088DF5D4;
    case 654u: goto L_088DF5DC;
    case 655u: goto L_088DF600;
    case 656u: goto L_088DF618;
    case 657u: goto L_088DF630;
    case 658u: goto L_088DF640;
    case 659u: goto L_088DF69C;
    case 660u: goto L_088DF6AC;
    case 661u: goto L_088DF6BC;
    case 662u: goto L_088DF6CC;
    case 663u: goto L_088DF6E8;
    case 664u: goto L_088DF6F0;
    case 665u: goto L_088DF6FC;
    case 666u: goto L_088DF710;
    case 667u: goto L_088DF724;
    case 668u: goto L_088DF72C;
    case 669u: goto L_088DF73C;
    case 670u: goto L_088DF760;
    case 671u: goto L_088DF768;
    case 672u: goto L_088DF770;
    case 673u: goto L_088DF794;
    case 674u: goto L_088DF7A8;
    case 675u: goto L_088DF7C0;
    case 676u: goto L_088DF7C8;
    case 677u: goto L_088DF7E0;
    case 678u: goto L_088DF7F8;
    case 679u: goto L_088DF80C;
    case 680u: goto L_088DF814;
    case 681u: goto L_088DF82C;
    case 682u: goto L_088DF844;
    case 683u: goto L_088DF858;
    case 684u: goto L_088DF87C;
    case 685u: goto L_088DF894;
    case 686u: goto L_088DF8AC;
    case 687u: goto L_088DF8BC;
    case 688u: goto L_088DF8CC;
    case 689u: goto L_088DF920;
    case 690u: goto L_088DF930;
    case 691u: goto L_088DF940;
    case 692u: goto L_088DF950;
    case 693u: goto L_088DF96C;
    case 694u: goto L_088DF974;
    case 695u: goto L_088DF980;
    case 696u: goto L_088DF994;
    case 697u: goto L_088DF9A8;
    case 698u: goto L_088DF9B0;
    case 699u: goto L_088DF9C0;
    case 700u: goto L_088DF9E4;
    case 701u: goto L_088DF9EC;
    case 702u: goto L_088DF9F4;
    case 703u: goto L_088DFA18;
    case 704u: goto L_088DFA2C;
    case 705u: goto L_088DFA44;
    case 706u: goto L_088DFA4C;
    case 707u: goto L_088DFA58;
    case 708u: goto L_088DFA64;
    case 709u: goto L_088DFA6C;
    case 710u: goto L_088DFA84;
    case 711u: goto L_088DFA9C;
    case 712u: goto L_088DFAB0;
    case 713u: goto L_088DFAB8;
    case 714u: goto L_088DFAD0;
    case 715u: goto L_088DFAE8;
    case 716u: goto L_088DFAF8;
    case 717u: goto L_088DFB58;
    case 718u: goto L_088DFB68;
    case 719u: goto L_088DFB78;
    case 720u: goto L_088DFB88;
    case 721u: goto L_088DFBB0;
    case 722u: goto L_088DFBCC;
    case 723u: goto L_088DFBDC;
    case 724u: goto L_088DFBF4;
    case 725u: goto L_088DFC04;
    case 726u: goto L_088DFC14;
    case 727u: goto L_088DFC24;
    case 728u: goto L_088DFC34;
    case 729u: goto L_088DFC44;
    case 730u: goto L_088DFC54;
    case 731u: goto L_088DFC60;
    case 732u: goto L_088DFC74;
    case 733u: goto L_088DFC84;
    case 734u: goto L_088DFC94;
    case 735u: goto L_088DFCA8;
    case 736u: goto L_088DFCB8;
    case 737u: goto L_088DFCCC;
    case 738u: goto L_088DFCDC;
    case 739u: goto L_088DFCFC;
    case 740u: goto L_088DFD18;
    case 741u: goto L_088DFD38;
    case 742u: goto L_088DFD54;
    case 743u: goto L_088DFD60;
    case 744u: goto L_088DFD74;
    case 745u: goto L_088DFD84;
    case 746u: goto L_088DFD94;
    case 747u: goto L_088DFDA4;
    case 748u: goto L_088DFDB4;
    case 749u: goto L_088DFDC0;
    case 750u: goto L_088DFDF0;
    case 751u: goto L_088DFE20;
    case 752u: goto L_088DFE30;
    case 753u: goto L_088DFE40;
    case 754u: goto L_088DFE58;
    case 755u: goto L_088DFE7C;
    case 756u: goto L_088DFE84;
    case 757u: goto L_088DFE9C;
    case 758u: goto L_088DFEB4;
    case 759u: goto L_088DFED8;
    case 760u: goto L_088DFEE0;
    case 761u: goto L_088DFEF8;
    case 762u: goto L_088DFF10;
    case 763u: goto L_088DFF34;
    case 764u: goto L_088DFF3C;
    case 765u: goto L_088DFF54;
    case 766u: goto L_088DFF6C;
    case 767u: goto L_088DFF80;
    case 768u: goto L_088DFF88;
    case 769u: goto L_088DFFA0;
    case 770u: goto L_088DFFB8;
    case 771u: goto L_088DFFD0;
    case 772u: goto L_088DFFF4;
    case 773u: goto L_088DFFFC;
    default:
        if (local_transfers == 0u) rt.unsupported(ctx.pc, 0u, "invalid internal function entry");
        else ctx.pc = local_pc;
        return;
    }
    }
L_088DC000:
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(12), ctx.gpr[31]);
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(8), ctx.gpr[16]);
    ctx.set_gpr(16, ctx.gpr[4] + 0u);
    ctx.set_gpr(31, 0x088DC014u);
    // nop
    goto L_088DC0F4;
L_088DC014:
    ctx.set_gpr(2, 2245u << 16u);
    ctx.set_gpr(4, rt.memory().aot_load32(ctx.gpr[2] + static_cast<std::uint32_t>(27004)));
    ctx.set_gpr(5, ctx.gpr[16] + 0u);
    ctx.set_gpr(31, 0x088DC028u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0080_entry, 80u, 50u, 0x089443D4u>(ctx, &aot_mem) && ctx.pc == 0x088DC028u) goto L_088DC028;
    return;
L_088DC028:
    ctx.set_gpr(31, rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(12)));
    ctx.set_gpr(16, rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(8)));
    ctx.set_gpr(29, ctx.gpr[29] + static_cast<std::uint32_t>(16));
    jump_target = ctx.gpr[31];
    // nop
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_088DC03C:
    ctx.set_gpr(29, ctx.gpr[29] + static_cast<std::uint32_t>(-16));
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(12), ctx.gpr[31]);
    ctx.set_gpr(2, 2245u << 16u);
    ctx.set_gpr(2, rt.memory().aot_load32(ctx.gpr[2] + static_cast<std::uint32_t>(27004)));
    { const bool branch_taken = ctx.gpr[2] == 0u;
    // nop
      if (branch_taken) {
          goto L_088DC068;
      }
      goto L_088DC054;
    }
L_088DC054:
    ctx.set_gpr(2, rt.memory().aot_load32(ctx.gpr[2] + static_cast<std::uint32_t>(36)));
    ctx.set_gpr(2, ctx.gpr[2] & 4u);
    ctx.set_gpr(2, 0u < ctx.gpr[2] ? 1u : 0u);
    { const bool branch_taken = ctx.gpr[2] != 0u;
    // nop
      if (branch_taken) {
          goto L_088DC070;
      }
      goto L_088DC068;
    }
L_088DC068:
    ctx.set_gpr(31, 0x088DC070u);
    // nop
    goto L_088DC0F4;
L_088DC070:
    ctx.set_gpr(2, 2245u << 16u);
    ctx.set_gpr(2, rt.memory().aot_load32(ctx.gpr[2] + static_cast<std::uint32_t>(27004)));
    ctx.set_gpr(31, rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(12)));
    ctx.set_gpr(29, ctx.gpr[29] + static_cast<std::uint32_t>(16));
    jump_target = ctx.gpr[31];
    // nop
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_088DC088:
    ctx.set_gpr(29, ctx.gpr[29] + static_cast<std::uint32_t>(-80));
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(12), ctx.gpr[31]);
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(8), ctx.gpr[16]);
    ctx.set_gpr(4, ctx.gpr[29] + static_cast<std::uint32_t>(24));
    ctx.set_gpr(31, 0x088DC0A0u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0083_entry, 83u, 327u, 0x089517E4u>(ctx, &aot_mem) && ctx.pc == 0x088DC0A0u) goto L_088DC0A0;
    return;
L_088DC0A0:
    ctx.set_gpr(2, 2232u << 16u);
    ctx.set_gpr(2, ctx.gpr[2] + static_cast<std::uint32_t>(-7028));
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(24), ctx.gpr[2]);
    ctx.set_gpr(31, 0x088DC0B4u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0064_entry, 64u, 444u, 0x08905FF0u>(ctx, &aot_mem) && ctx.pc == 0x088DC0B4u) goto L_088DC0B4;
    return;
L_088DC0B4:
    ctx.set_gpr(2, rt.memory().aot_load32(ctx.gpr[2] + static_cast<std::uint32_t>(932)));
    ctx.set_gpr(2, ctx.gpr[2] + ctx.gpr[29]);
    ctx.set_gpr(16, rt.memory().aot_load32(ctx.gpr[2] + static_cast<std::uint32_t>(24)));
    ctx.set_gpr(2, 2232u << 16u);
    ctx.set_gpr(2, ctx.gpr[2] + static_cast<std::uint32_t>(-7292));
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(24), ctx.gpr[2]);
    ctx.set_gpr(4, ctx.gpr[29] + static_cast<std::uint32_t>(24));
    ctx.set_gpr(5, 0u + 0u);
    ctx.set_gpr(31, 0x088DC0DCu);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0053_entry, 53u, 102u, 0x088D8804u>(ctx, &aot_mem) && ctx.pc == 0x088DC0DCu) goto L_088DC0DC;
    return;
L_088DC0DC:
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
L_088DC0F4:
    ctx.set_gpr(29, ctx.gpr[29] + static_cast<std::uint32_t>(-16));
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(12), ctx.gpr[31]);
    ctx.set_gpr(4, 2190u << 16u);
    ctx.set_gpr(4, ctx.gpr[4] + static_cast<std::uint32_t>(-16100));
    ctx.set_gpr(31, 0x088DC10Cu);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0080_entry, 80u, 286u, 0x08945508u>(ctx, &aot_mem) && ctx.pc == 0x088DC10Cu) goto L_088DC10C;
    return;
L_088DC10C:
    ctx.set_gpr(31, rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(12)));
    ctx.set_gpr(29, ctx.gpr[29] + static_cast<std::uint32_t>(16));
    jump_target = ctx.gpr[31];
    // nop
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_088DC11C:
    ctx.set_gpr(29, ctx.gpr[29] + static_cast<std::uint32_t>(-32));
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(28), ctx.gpr[31]);
    ctx.set_gpr(31, 0x088DC12Cu);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0052_entry, 52u, 154u, 0x088D49C4u>(ctx, &aot_mem) && ctx.pc == 0x088DC12Cu) goto L_088DC12C;
    return;
L_088DC12C:
    ctx.set_gpr(2, 2190u << 16u);
    ctx.set_gpr(2, ctx.gpr[2] + static_cast<std::uint32_t>(-15928));
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(0), ctx.gpr[2]);
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(4), 0u);
    ctx.set_gpr(2, 2227u << 16u);
    ctx.set_gpr(2, ctx.gpr[2] + static_cast<std::uint32_t>(24000));
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(8), ctx.gpr[2]);
    ctx.set_gpr(4, 0u + 0u);
    ctx.set_gpr(5, 2245u << 16u);
    ctx.set_gpr(5, ctx.gpr[5] + static_cast<std::uint32_t>(27004));
    ctx.set_gpr(6, 2190u << 16u);
    ctx.set_gpr(6, ctx.gpr[6] + static_cast<std::uint32_t>(-15000));
    ctx.set_gpr(7, 2190u << 16u);
    ctx.set_gpr(7, ctx.gpr[7] + static_cast<std::uint32_t>(-15944));
    ctx.set_gpr(8, 2190u << 16u);
    ctx.set_gpr(8, ctx.gpr[8] + static_cast<std::uint32_t>(-15976));
    ctx.set_gpr(9, 2227u << 16u);
    ctx.set_gpr(9, ctx.gpr[9] + static_cast<std::uint32_t>(24008));
    ctx.set_gpr(10, 0u + static_cast<std::uint32_t>(56));
    ctx.set_gpr(11, 2190u << 16u);
    ctx.set_gpr(11, ctx.gpr[11] + static_cast<std::uint32_t>(-16248));
    ctx.set_gpr(31, 0x088DC188u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0080_entry, 80u, 294u, 0x08945594u>(ctx, &aot_mem) && ctx.pc == 0x088DC188u) goto L_088DC188;
    return;
L_088DC188:
    ctx.set_gpr(31, rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(28)));
    ctx.set_gpr(29, ctx.gpr[29] + static_cast<std::uint32_t>(32));
    jump_target = ctx.gpr[31];
    // nop
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_088DC198:
    ctx.set_gpr(29, ctx.gpr[29] + static_cast<std::uint32_t>(-16));
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(12), ctx.gpr[31]);
    ctx.set_gpr(31, 0x088DC1A8u);
    // nop
    goto L_088DC03C;
L_088DC1A8:
    ctx.set_gpr(31, rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(12)));
    ctx.set_gpr(29, ctx.gpr[29] + static_cast<std::uint32_t>(16));
    jump_target = ctx.gpr[31];
    // nop
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_088DC1B8:
    ctx.set_gpr(2, 2245u << 16u);
    ctx.set_gpr(2, rt.memory().aot_load32(ctx.gpr[2] + static_cast<std::uint32_t>(27016)));
    jump_target = ctx.gpr[31];
    // nop
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_088DC1C8:
    ctx.set_gpr(29, ctx.gpr[29] + static_cast<std::uint32_t>(-16));
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(12), ctx.gpr[31]);
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(8), ctx.gpr[17]);
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(4), ctx.gpr[16]);
    ctx.set_gpr(2, 2245u << 16u);
    ctx.set_gpr(16, rt.memory().aot_load32(ctx.gpr[2] + static_cast<std::uint32_t>(27004)));
    ctx.set_gpr(4, ctx.gpr[16] + 0u);
    ctx.set_gpr(31, 0x088DC1ECu);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0080_entry, 80u, 236u, 0x089451A8u>(ctx, &aot_mem) && ctx.pc == 0x088DC1ECu) goto L_088DC1EC;
    return;
L_088DC1EC:
    ctx.set_gpr(17, ctx.gpr[2] + 0u);
    ctx.set_gpr(4, ctx.gpr[16] + 0u);
    ctx.set_gpr(5, 2227u << 16u);
    ctx.set_gpr(5, ctx.gpr[5] + static_cast<std::uint32_t>(24032));
    ctx.set_gpr(6, 0u + static_cast<std::uint32_t>(1));
    ctx.set_gpr(31, 0x088DC208u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0080_entry, 80u, 151u, 0x08944B98u>(ctx, &aot_mem) && ctx.pc == 0x088DC208u) goto L_088DC208;
    return;
L_088DC208:
    ctx.set_gpr(4, ctx.gpr[16] + 0u);
    ctx.set_gpr(5, ctx.gpr[17] + 0u);
    ctx.set_gpr(31, 0x088DC218u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0080_entry, 80u, 148u, 0x08944B4Cu>(ctx, &aot_mem) && ctx.pc == 0x088DC218u) goto L_088DC218;
    return;
L_088DC218:
    ctx.set_gpr(4, ctx.gpr[2] + 0u);
    ctx.set_gpr(5, 0u + static_cast<std::uint32_t>(1));
    ctx.set_gpr(31, 0x088DC228u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0072_entry, 72u, 648u, 0x08926D64u>(ctx, &aot_mem) && ctx.pc == 0x088DC228u) goto L_088DC228;
    return;
L_088DC228:
    ctx.set_gpr(4, ctx.gpr[16] + 0u);
    ctx.set_gpr(5, 2227u << 16u);
    ctx.set_gpr(5, ctx.gpr[5] + static_cast<std::uint32_t>(24036));
    ctx.set_gpr(6, 2227u << 16u);
    ctx.set_gpr(6, ctx.gpr[6] + static_cast<std::uint32_t>(24040));
    ctx.set_gpr(7, 2227u << 16u);
    ctx.set_gpr(7, ctx.gpr[7] + static_cast<std::uint32_t>(24044));
    ctx.set_gpr(8, ctx.gpr[17] + 0u);
    ctx.set_gpr(31, 0x088DC250u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0080_entry, 80u, 162u, 0x08944C7Cu>(ctx, &aot_mem) && ctx.pc == 0x088DC250u) goto L_088DC250;
    return;
L_088DC250:
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
L_088DC268:
    ctx.set_gpr(29, ctx.gpr[29] + static_cast<std::uint32_t>(-16));
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(12), ctx.gpr[31]);
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(8), ctx.gpr[16]);
    ctx.set_gpr(3, 2245u << 16u);
    ctx.set_gpr(3, rt.memory().aot_load32(ctx.gpr[3] + static_cast<std::uint32_t>(27008)));
    { const bool branch_taken = ctx.gpr[3] != 0u;
    // nop
      if (branch_taken) {
          goto L_088DC330;
      }
      goto L_088DC284;
    }
L_088DC284:
    ctx.set_gpr(31, 0x088DC28Cu);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0078_entry, 78u, 217u, 0x0893CDECu>(ctx, &aot_mem) && ctx.pc == 0x088DC28Cu) goto L_088DC28C;
    return;
L_088DC28C:
    ctx.set_gpr(4, rt.memory().aot_load32(ctx.gpr[2] + static_cast<std::uint32_t>(0)));
    ctx.set_gpr(31, 0x088DC298u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0078_entry, 78u, 199u, 0x0893CC68u>(ctx, &aot_mem) && ctx.pc == 0x088DC298u) goto L_088DC298;
    return;
L_088DC298:
    ctx.set_gpr(3, 2245u << 16u);
    ctx.set_gpr(4, rt.memory().aot_load32(ctx.gpr[3] + static_cast<std::uint32_t>(27004)));
    ctx.set_gpr(5, ctx.gpr[2] + 0u);
    ctx.set_gpr(31, 0x088DC2ACu);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0080_entry, 80u, 50u, 0x089443D4u>(ctx, &aot_mem) && ctx.pc == 0x088DC2ACu) goto L_088DC2AC;
    return;
L_088DC2AC:
    ctx.set_gpr(3, 2245u << 16u);
    rt.memory().aot_store32(ctx.gpr[3] + static_cast<std::uint32_t>(27008), ctx.gpr[2]);
    ctx.set_gpr(16, ctx.gpr[2] + 0u);
    { const bool branch_taken = ctx.gpr[16] == 0u;
    // nop
      if (branch_taken) {
          goto L_088DC330;
      }
      goto L_088DC2C0;
    }
L_088DC2C0:
    ctx.set_gpr(31, 0x088DC2C8u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0079_entry, 79u, 538u, 0x089425E0u>(ctx, &aot_mem) && ctx.pc == 0x088DC2C8u) goto L_088DC2C8;
    return;
L_088DC2C8:
    ctx.set_gpr(4, ctx.gpr[2] + 0u);
    ctx.set_gpr(5, ctx.gpr[16] + 0u);
    ctx.set_gpr(31, 0x088DC2D8u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0072_entry, 72u, 751u, 0x08927514u>(ctx, &aot_mem) && ctx.pc == 0x088DC2D8u) goto L_088DC2D8;
    return;
L_088DC2D8:
    ctx.set_gpr(2, 2245u << 16u);
    ctx.set_gpr(4, rt.memory().aot_load32(ctx.gpr[2] + static_cast<std::uint32_t>(27008)));
    ctx.set_gpr(2, rt.memory().aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(4)));
    ctx.set_gpr(2, ctx.gpr[2] + static_cast<std::uint32_t>(-1));
    rt.memory().aot_store32(ctx.gpr[4] + static_cast<std::uint32_t>(4), ctx.gpr[2]);
    ctx.set_gpr(2, ctx.gpr[2] << 10u);
    ctx.set_gpr(2, ctx.gpr[2] >> 10u);
    { const bool branch_taken = ctx.gpr[2] != 0u;
    // nop
      if (branch_taken) {
          goto L_088DC304;
      }
      goto L_088DC2FC;
    }
L_088DC2FC:
    ctx.set_gpr(31, 0x088DC304u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0080_entry, 80u, 556u, 0x089467C8u>(ctx, &aot_mem) && ctx.pc == 0x088DC304u) goto L_088DC304;
    return;
L_088DC304:
    ctx.set_gpr(31, 0x088DC30Cu);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0079_entry, 79u, 538u, 0x089425E0u>(ctx, &aot_mem) && ctx.pc == 0x088DC30Cu) goto L_088DC30C;
    return;
L_088DC30C:
    ctx.set_gpr(2, rt.memory().aot_load32(ctx.gpr[2] + static_cast<std::uint32_t>(12)));
    ctx.set_gpr(3, ctx.gpr[2] + static_cast<std::uint32_t>(-1));
    ctx.set_gpr(2, 2245u << 16u);
    ctx.set_gpr(2, rt.memory().aot_load32(ctx.gpr[2] + static_cast<std::uint32_t>(27008)));
    rt.memory().aot_store16(ctx.gpr[2] + static_cast<std::uint32_t>(18), static_cast<std::uint16_t>(ctx.gpr[3]));
    ctx.set_gpr(2, 2245u << 16u);
    ctx.set_gpr(4, rt.memory().aot_load32(ctx.gpr[2] + static_cast<std::uint32_t>(27008)));
    ctx.set_gpr(31, 0x088DC330u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0079_entry, 79u, 598u, 0x08942A18u>(ctx, &aot_mem) && ctx.pc == 0x088DC330u) goto L_088DC330;
    return;
L_088DC330:
    ctx.set_gpr(31, rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(12)));
    ctx.set_gpr(16, rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(8)));
    ctx.set_gpr(29, ctx.gpr[29] + static_cast<std::uint32_t>(16));
    jump_target = ctx.gpr[31];
    // nop
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_088DC344:
    ctx.set_gpr(29, ctx.gpr[29] + static_cast<std::uint32_t>(-16));
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(12), ctx.gpr[31]);
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(8), ctx.gpr[16]);
    ctx.set_gpr(16, ctx.gpr[4] + 0u);
    ctx.set_gpr(31, 0x088DC35Cu);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0064_entry, 64u, 444u, 0x08905FF0u>(ctx, &aot_mem) && ctx.pc == 0x088DC35Cu) goto L_088DC35C;
    return;
L_088DC35C:
    ctx.set_gpr(2, rt.memory().aot_load8(ctx.gpr[2] + static_cast<std::uint32_t>(0)));
    { const bool branch_taken = ctx.gpr[2] == 0u;
    // nop
      if (branch_taken) {
          goto L_088DC390;
      }
      goto L_088DC368;
    }
L_088DC368:
    ctx.set_gpr(31, 0x088DC370u);
    // nop
    goto L_088DC540;
L_088DC370:
    ctx.set_gpr(2, 2245u << 16u);
    ctx.set_gpr(4, rt.memory().aot_load32(ctx.gpr[2] + static_cast<std::uint32_t>(27016)));
    ctx.set_gpr(5, ctx.gpr[16] + 0u);
    ctx.set_gpr(31, 0x088DC384u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0080_entry, 80u, 50u, 0x089443D4u>(ctx, &aot_mem) && ctx.pc == 0x088DC384u) goto L_088DC384;
    return;
L_088DC384:
    ctx.set_gpr(16, ctx.gpr[2] + 0u);
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_088DC3F0;
      }
      goto L_088DC390;
    }
L_088DC390:
    ctx.set_gpr(4, 0u + static_cast<std::uint32_t>(52));
    ctx.set_gpr(5, 0u + 0u);
    ctx.set_gpr(6, ctx.gpr[16] + 0u);
    ctx.set_gpr(31, 0x088DC3A4u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0080_entry, 80u, 542u, 0x089466FCu>(ctx, &aot_mem) && ctx.pc == 0x088DC3A4u) goto L_088DC3A4;
    return;
L_088DC3A4:
    ctx.set_gpr(16, ctx.gpr[2] + 0u);
    { const bool branch_taken = ctx.gpr[16] == 0u;
    // nop
      if (branch_taken) {
          goto L_088DC3C4;
      }
      goto L_088DC3B0;
    }
L_088DC3B0:
    ctx.set_gpr(4, ctx.gpr[16] + 0u);
    ctx.set_gpr(5, 0u + static_cast<std::uint32_t>(1));
    ctx.set_gpr(31, 0x088DC3C0u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0083_entry, 83u, 323u, 0x08951794u>(ctx, &aot_mem) && ctx.pc == 0x088DC3C0u) goto L_088DC3C0;
    return;
L_088DC3C0:
    ctx.set_gpr(16, ctx.gpr[2] + 0u);
    goto L_088DC3C4;
L_088DC3C4:
    ctx.set_gpr(4, ctx.gpr[16] + 0u);
    ctx.set_gpr(25, rt.memory().aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(0)));
    ctx.set_gpr(25, rt.memory().aot_load32(ctx.gpr[25] + static_cast<std::uint32_t>(44)));
    jump_target = ctx.gpr[25];
    ctx.set_gpr(31, 0x088DC3D8u);
    // nop
    ctx.pc = jump_target;
    if (rt.invoke_chained_call(ctx, &aot_mem) && ctx.pc == 0x088DC3D8u) goto L_088DC3D8;
    return;
L_088DC3D8:
    ctx.set_gpr(4, ctx.gpr[16] + 0u);
    ctx.set_gpr(5, 0u + 0u);
    ctx.set_gpr(25, rt.memory().aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(0)));
    ctx.set_gpr(25, rt.memory().aot_load32(ctx.gpr[25] + static_cast<std::uint32_t>(36)));
    jump_target = ctx.gpr[25];
    ctx.set_gpr(31, 0x088DC3F0u);
    // nop
    ctx.pc = jump_target;
    if (rt.invoke_chained_call(ctx, &aot_mem) && ctx.pc == 0x088DC3F0u) goto L_088DC3F0;
    return;
L_088DC3F0:
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
L_088DC408:
    ctx.set_gpr(29, ctx.gpr[29] + static_cast<std::uint32_t>(-16));
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(12), ctx.gpr[31]);
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(8), ctx.gpr[17]);
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(4), ctx.gpr[16]);
    ctx.set_gpr(17, ctx.gpr[4] + 0u);
    ctx.set_gpr(16, ctx.gpr[5] + 0u);
    ctx.set_gpr(31, 0x088DC428u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0064_entry, 64u, 444u, 0x08905FF0u>(ctx, &aot_mem) && ctx.pc == 0x088DC428u) goto L_088DC428;
    return;
L_088DC428:
    ctx.set_gpr(2, rt.memory().aot_load8(ctx.gpr[2] + static_cast<std::uint32_t>(0)));
    { const bool branch_taken = ctx.gpr[2] == 0u;
    // nop
      if (branch_taken) {
          goto L_088DC454;
      }
      goto L_088DC434;
    }
L_088DC434:
    ctx.set_gpr(31, 0x088DC43Cu);
    // nop
    goto L_088DC540;
L_088DC43C:
    ctx.set_gpr(4, ctx.gpr[17] + 0u);
    ctx.set_gpr(5, ctx.gpr[16] + 0u);
    ctx.set_gpr(31, 0x088DC44Cu);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0080_entry, 80u, 848u, 0x08947E90u>(ctx, &aot_mem) && ctx.pc == 0x088DC44Cu) goto L_088DC44C;
    return;
L_088DC44C:
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_088DC47C;
      }
      goto L_088DC454;
    }
L_088DC454:
    ctx.set_gpr(4, 0u + static_cast<std::uint32_t>(52));
    ctx.set_gpr(5, 0u + 0u);
    ctx.set_gpr(31, 0x088DC464u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0080_entry, 80u, 552u, 0x08946784u>(ctx, &aot_mem) && ctx.pc == 0x088DC464u) goto L_088DC464;
    return;
L_088DC464:
    { const bool branch_taken = ctx.gpr[2] == 0u;
    // nop
      if (branch_taken) {
          goto L_088DC47C;
      }
      goto L_088DC46C;
    }
L_088DC46C:
    ctx.set_gpr(4, ctx.gpr[2] + 0u);
    ctx.set_gpr(5, ctx.gpr[17] + 0u);
    ctx.set_gpr(31, 0x088DC47Cu);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0083_entry, 83u, 329u, 0x08951820u>(ctx, &aot_mem) && ctx.pc == 0x088DC47Cu) goto L_088DC47C;
    return;
L_088DC47C:
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
L_088DC494:
    ctx.set_gpr(29, ctx.gpr[29] + static_cast<std::uint32_t>(-16));
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(12), ctx.gpr[31]);
    ctx.set_gpr(2, 2245u << 16u);
    ctx.set_gpr(2, rt.memory().aot_load32(ctx.gpr[2] + static_cast<std::uint32_t>(27016)));
    { const bool branch_taken = ctx.gpr[2] == 0u;
    // nop
      if (branch_taken) {
          goto L_088DC4C0;
      }
      goto L_088DC4AC;
    }
L_088DC4AC:
    ctx.set_gpr(2, rt.memory().aot_load32(ctx.gpr[2] + static_cast<std::uint32_t>(36)));
    ctx.set_gpr(2, ctx.gpr[2] & 4u);
    ctx.set_gpr(2, 0u < ctx.gpr[2] ? 1u : 0u);
    { const bool branch_taken = ctx.gpr[2] != 0u;
    // nop
      if (branch_taken) {
          goto L_088DC4C8;
      }
      goto L_088DC4C0;
    }
L_088DC4C0:
    ctx.set_gpr(31, 0x088DC4C8u);
    // nop
    goto L_088DC540;
L_088DC4C8:
    ctx.set_gpr(2, 2245u << 16u);
    ctx.set_gpr(2, rt.memory().aot_load32(ctx.gpr[2] + static_cast<std::uint32_t>(27016)));
    ctx.set_gpr(31, rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(12)));
    ctx.set_gpr(29, ctx.gpr[29] + static_cast<std::uint32_t>(16));
    jump_target = ctx.gpr[31];
    // nop
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_088DC4E0:
    ctx.set_gpr(29, ctx.gpr[29] + static_cast<std::uint32_t>(-80));
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(12), ctx.gpr[31]);
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(8), ctx.gpr[16]);
    ctx.set_gpr(4, ctx.gpr[29] + static_cast<std::uint32_t>(28));
    ctx.set_gpr(31, 0x088DC4F8u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0083_entry, 83u, 327u, 0x089517E4u>(ctx, &aot_mem) && ctx.pc == 0x088DC4F8u) goto L_088DC4F8;
    return;
L_088DC4F8:
    ctx.set_gpr(31, 0x088DC500u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0064_entry, 64u, 444u, 0x08905FF0u>(ctx, &aot_mem) && ctx.pc == 0x088DC500u) goto L_088DC500;
    return;
L_088DC500:
    ctx.set_gpr(2, rt.memory().aot_load32(ctx.gpr[2] + static_cast<std::uint32_t>(932)));
    ctx.set_gpr(2, ctx.gpr[2] + ctx.gpr[29]);
    ctx.set_gpr(16, rt.memory().aot_load32(ctx.gpr[2] + static_cast<std::uint32_t>(28)));
    ctx.set_gpr(2, 2232u << 16u);
    ctx.set_gpr(2, ctx.gpr[2] + static_cast<std::uint32_t>(-5492));
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(28), ctx.gpr[2]);
    ctx.set_gpr(4, ctx.gpr[29] + static_cast<std::uint32_t>(40));
    ctx.set_gpr(5, 0u + static_cast<std::uint32_t>(-1));
    ctx.set_gpr(31, 0x088DC528u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0020_entry, 20u, 288u, 0x088555D0u>(ctx, &aot_mem) && ctx.pc == 0x088DC528u) goto L_088DC528;
    return;
L_088DC528:
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
L_088DC540:
    ctx.set_gpr(29, ctx.gpr[29] + static_cast<std::uint32_t>(-16));
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(12), ctx.gpr[31]);
    ctx.set_gpr(4, 2190u << 16u);
    ctx.set_gpr(4, ctx.gpr[4] + static_cast<std::uint32_t>(-15000));
    ctx.set_gpr(31, 0x088DC558u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0080_entry, 80u, 286u, 0x08945508u>(ctx, &aot_mem) && ctx.pc == 0x088DC558u) goto L_088DC558;
    return;
L_088DC558:
    ctx.set_gpr(31, rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(12)));
    ctx.set_gpr(29, ctx.gpr[29] + static_cast<std::uint32_t>(16));
    jump_target = ctx.gpr[31];
    // nop
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_088DC568:
    ctx.set_gpr(29, ctx.gpr[29] + static_cast<std::uint32_t>(-32));
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(28), ctx.gpr[31]);
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(0), 0u);
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(4), 0u);
    ctx.set_gpr(2, 2227u << 16u);
    ctx.set_gpr(2, ctx.gpr[2] + static_cast<std::uint32_t>(24048));
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(8), ctx.gpr[2]);
    ctx.set_gpr(4, 0u + 0u);
    ctx.set_gpr(5, 2245u << 16u);
    ctx.set_gpr(5, ctx.gpr[5] + static_cast<std::uint32_t>(27016));
    ctx.set_gpr(6, 2190u << 16u);
    ctx.set_gpr(6, ctx.gpr[6] + static_cast<std::uint32_t>(-14380));
    ctx.set_gpr(7, 2190u << 16u);
    ctx.set_gpr(7, ctx.gpr[7] + static_cast<std::uint32_t>(-20896));
    ctx.set_gpr(8, 2190u << 16u);
    ctx.set_gpr(8, ctx.gpr[8] + static_cast<std::uint32_t>(-14892));
    ctx.set_gpr(9, 2227u << 16u);
    ctx.set_gpr(9, ctx.gpr[9] + static_cast<std::uint32_t>(24056));
    ctx.set_gpr(10, 0u + static_cast<std::uint32_t>(52));
    ctx.set_gpr(11, 2190u << 16u);
    ctx.set_gpr(11, ctx.gpr[11] + static_cast<std::uint32_t>(-15136));
    ctx.set_gpr(31, 0x088DC5C4u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0080_entry, 80u, 294u, 0x08945594u>(ctx, &aot_mem) && ctx.pc == 0x088DC5C4u) goto L_088DC5C4;
    return;
L_088DC5C4:
    ctx.set_gpr(31, rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(28)));
    ctx.set_gpr(29, ctx.gpr[29] + static_cast<std::uint32_t>(32));
    jump_target = ctx.gpr[31];
    // nop
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_088DC5D4:
    ctx.set_gpr(29, ctx.gpr[29] + static_cast<std::uint32_t>(-16));
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(12), ctx.gpr[31]);
    ctx.set_gpr(31, 0x088DC5E4u);
    // nop
    goto L_088DC494;
L_088DC5E4:
    ctx.set_gpr(31, rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(12)));
    ctx.set_gpr(29, ctx.gpr[29] + static_cast<std::uint32_t>(16));
    jump_target = ctx.gpr[31];
    // nop
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_088DC5F4:
    ctx.set_gpr(29, ctx.gpr[29] + static_cast<std::uint32_t>(-16));
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(12), ctx.gpr[31]);
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(8), ctx.gpr[16]);
    ctx.set_gpr(3, 2245u << 16u);
    ctx.set_gpr(3, rt.memory().aot_load32(ctx.gpr[3] + static_cast<std::uint32_t>(27020)));
    { const bool branch_taken = ctx.gpr[3] != 0u;
    // nop
      if (branch_taken) {
          goto L_088DC6BC;
      }
      goto L_088DC610;
    }
L_088DC610:
    ctx.set_gpr(31, 0x088DC618u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0078_entry, 78u, 217u, 0x0893CDECu>(ctx, &aot_mem) && ctx.pc == 0x088DC618u) goto L_088DC618;
    return;
L_088DC618:
    ctx.set_gpr(4, rt.memory().aot_load32(ctx.gpr[2] + static_cast<std::uint32_t>(0)));
    ctx.set_gpr(31, 0x088DC624u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0078_entry, 78u, 199u, 0x0893CC68u>(ctx, &aot_mem) && ctx.pc == 0x088DC624u) goto L_088DC624;
    return;
L_088DC624:
    ctx.set_gpr(3, 2245u << 16u);
    ctx.set_gpr(4, rt.memory().aot_load32(ctx.gpr[3] + static_cast<std::uint32_t>(27016)));
    ctx.set_gpr(5, ctx.gpr[2] + 0u);
    ctx.set_gpr(31, 0x088DC638u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0080_entry, 80u, 50u, 0x089443D4u>(ctx, &aot_mem) && ctx.pc == 0x088DC638u) goto L_088DC638;
    return;
L_088DC638:
    ctx.set_gpr(3, 2245u << 16u);
    rt.memory().aot_store32(ctx.gpr[3] + static_cast<std::uint32_t>(27020), ctx.gpr[2]);
    ctx.set_gpr(16, ctx.gpr[2] + 0u);
    { const bool branch_taken = ctx.gpr[16] == 0u;
    // nop
      if (branch_taken) {
          goto L_088DC6BC;
      }
      goto L_088DC64C;
    }
L_088DC64C:
    ctx.set_gpr(31, 0x088DC654u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0079_entry, 79u, 538u, 0x089425E0u>(ctx, &aot_mem) && ctx.pc == 0x088DC654u) goto L_088DC654;
    return;
L_088DC654:
    ctx.set_gpr(4, ctx.gpr[2] + 0u);
    ctx.set_gpr(5, ctx.gpr[16] + 0u);
    ctx.set_gpr(31, 0x088DC664u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0072_entry, 72u, 751u, 0x08927514u>(ctx, &aot_mem) && ctx.pc == 0x088DC664u) goto L_088DC664;
    return;
L_088DC664:
    ctx.set_gpr(2, 2245u << 16u);
    ctx.set_gpr(4, rt.memory().aot_load32(ctx.gpr[2] + static_cast<std::uint32_t>(27020)));
    ctx.set_gpr(2, rt.memory().aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(4)));
    ctx.set_gpr(2, ctx.gpr[2] + static_cast<std::uint32_t>(-1));
    rt.memory().aot_store32(ctx.gpr[4] + static_cast<std::uint32_t>(4), ctx.gpr[2]);
    ctx.set_gpr(2, ctx.gpr[2] << 10u);
    ctx.set_gpr(2, ctx.gpr[2] >> 10u);
    { const bool branch_taken = ctx.gpr[2] != 0u;
    // nop
      if (branch_taken) {
          goto L_088DC690;
      }
      goto L_088DC688;
    }
L_088DC688:
    ctx.set_gpr(31, 0x088DC690u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0080_entry, 80u, 556u, 0x089467C8u>(ctx, &aot_mem) && ctx.pc == 0x088DC690u) goto L_088DC690;
    return;
L_088DC690:
    ctx.set_gpr(31, 0x088DC698u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0079_entry, 79u, 538u, 0x089425E0u>(ctx, &aot_mem) && ctx.pc == 0x088DC698u) goto L_088DC698;
    return;
L_088DC698:
    ctx.set_gpr(2, rt.memory().aot_load32(ctx.gpr[2] + static_cast<std::uint32_t>(12)));
    ctx.set_gpr(3, ctx.gpr[2] + static_cast<std::uint32_t>(-1));
    ctx.set_gpr(2, 2245u << 16u);
    ctx.set_gpr(2, rt.memory().aot_load32(ctx.gpr[2] + static_cast<std::uint32_t>(27020)));
    rt.memory().aot_store16(ctx.gpr[2] + static_cast<std::uint32_t>(18), static_cast<std::uint16_t>(ctx.gpr[3]));
    ctx.set_gpr(2, 2245u << 16u);
    ctx.set_gpr(4, rt.memory().aot_load32(ctx.gpr[2] + static_cast<std::uint32_t>(27020)));
    ctx.set_gpr(31, 0x088DC6BCu);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0079_entry, 79u, 598u, 0x08942A18u>(ctx, &aot_mem) && ctx.pc == 0x088DC6BCu) goto L_088DC6BC;
    return;
L_088DC6BC:
    ctx.set_gpr(31, rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(12)));
    ctx.set_gpr(16, rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(8)));
    ctx.set_gpr(29, ctx.gpr[29] + static_cast<std::uint32_t>(16));
    jump_target = ctx.gpr[31];
    // nop
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_088DC6D0:
    ctx.set_gpr(29, ctx.gpr[29] + static_cast<std::uint32_t>(-16));
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(12), ctx.gpr[31]);
    ctx.set_gpr(2, 2245u << 16u);
    ctx.set_gpr(2, rt.memory().aot_load32(ctx.gpr[2] + static_cast<std::uint32_t>(27020)));
    { const bool branch_taken = ctx.gpr[2] != 0u;
    // nop
      if (branch_taken) {
          goto L_088DC6F0;
      }
      goto L_088DC6E8;
    }
L_088DC6E8:
    ctx.set_gpr(31, 0x088DC6F0u);
    // nop
    goto L_088DC540;
L_088DC6F0:
    ctx.set_gpr(2, 2245u << 16u);
    ctx.set_gpr(2, rt.memory().aot_load32(ctx.gpr[2] + static_cast<std::uint32_t>(27020)));
    ctx.set_gpr(31, rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(12)));
    ctx.set_gpr(29, ctx.gpr[29] + static_cast<std::uint32_t>(16));
    jump_target = ctx.gpr[31];
    // nop
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_088DC708:
    ctx.set_gpr(29, ctx.gpr[29] + static_cast<std::uint32_t>(-16));
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(12), ctx.gpr[31]);
    ctx.set_gpr(2, 2245u << 16u);
    ctx.set_gpr(2, rt.memory().aot_load32(ctx.gpr[2] + static_cast<std::uint32_t>(27024)));
    { const bool branch_taken = ctx.gpr[2] != 0u;
    // nop
      if (branch_taken) {
          goto L_088DC748;
      }
      goto L_088DC720;
    }
L_088DC720:
    ctx.set_gpr(31, 0x088DC728u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0078_entry, 78u, 217u, 0x0893CDECu>(ctx, &aot_mem) && ctx.pc == 0x088DC728u) goto L_088DC728;
    return;
L_088DC728:
    ctx.set_gpr(4, rt.memory().aot_load32(ctx.gpr[2] + static_cast<std::uint32_t>(0)));
    ctx.set_gpr(31, 0x088DC734u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0078_entry, 78u, 199u, 0x0893CC68u>(ctx, &aot_mem) && ctx.pc == 0x088DC734u) goto L_088DC734;
    return;
L_088DC734:
    ctx.set_gpr(4, ctx.gpr[2] + 0u);
    ctx.set_gpr(31, 0x088DC740u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0052_entry, 52u, 732u, 0x088D6FE8u>(ctx, &aot_mem) && ctx.pc == 0x088DC740u) goto L_088DC740;
    return;
L_088DC740:
    ctx.set_gpr(3, 2245u << 16u);
    rt.memory().aot_store32(ctx.gpr[3] + static_cast<std::uint32_t>(27024), ctx.gpr[2]);
    goto L_088DC748;
L_088DC748:
    ctx.set_gpr(2, 2245u << 16u);
    ctx.set_gpr(2, rt.memory().aot_load32(ctx.gpr[2] + static_cast<std::uint32_t>(27024)));
    ctx.set_gpr(31, rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(12)));
    ctx.set_gpr(29, ctx.gpr[29] + static_cast<std::uint32_t>(16));
    jump_target = ctx.gpr[31];
    // nop
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_088DC760:
    ctx.set_gpr(29, ctx.gpr[29] + static_cast<std::uint32_t>(-16));
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(12), ctx.gpr[31]);
    ctx.set_gpr(2, 2245u << 16u);
    ctx.set_gpr(2, rt.memory().aot_load32(ctx.gpr[2] + static_cast<std::uint32_t>(27024)));
    { const bool branch_taken = ctx.gpr[2] == 0u;
    // nop
      if (branch_taken) {
          goto L_088DC78C;
      }
      goto L_088DC778;
    }
L_088DC778:
    ctx.set_gpr(2, rt.memory().aot_load32(ctx.gpr[2] + static_cast<std::uint32_t>(36)));
    ctx.set_gpr(2, ctx.gpr[2] & 4u);
    ctx.set_gpr(2, 0u < ctx.gpr[2] ? 1u : 0u);
    { const bool branch_taken = ctx.gpr[2] != 0u;
    // nop
      if (branch_taken) {
          goto L_088DC794;
      }
      goto L_088DC78C;
    }
L_088DC78C:
    ctx.set_gpr(31, 0x088DC794u);
    // nop
    goto L_088DC7AC;
L_088DC794:
    ctx.set_gpr(2, 2245u << 16u);
    ctx.set_gpr(2, rt.memory().aot_load32(ctx.gpr[2] + static_cast<std::uint32_t>(27024)));
    ctx.set_gpr(31, rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(12)));
    ctx.set_gpr(29, ctx.gpr[29] + static_cast<std::uint32_t>(16));
    jump_target = ctx.gpr[31];
    // nop
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_088DC7AC:
    ctx.set_gpr(29, ctx.gpr[29] + static_cast<std::uint32_t>(-16));
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(12), ctx.gpr[31]);
    ctx.set_gpr(4, 2190u << 16u);
    ctx.set_gpr(4, ctx.gpr[4] + static_cast<std::uint32_t>(-14380));
    ctx.set_gpr(31, 0x088DC7C4u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0080_entry, 80u, 286u, 0x08945508u>(ctx, &aot_mem) && ctx.pc == 0x088DC7C4u) goto L_088DC7C4;
    return;
L_088DC7C4:
    ctx.set_gpr(31, rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(12)));
    ctx.set_gpr(29, ctx.gpr[29] + static_cast<std::uint32_t>(16));
    jump_target = ctx.gpr[31];
    // nop
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_088DC7D4:
    ctx.set_gpr(29, ctx.gpr[29] + static_cast<std::uint32_t>(-32));
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(28), ctx.gpr[31]);
    ctx.set_gpr(2, 2190u << 16u);
    ctx.set_gpr(2, ctx.gpr[2] + static_cast<std::uint32_t>(-14236));
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(0), ctx.gpr[2]);
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(4), 0u);
    ctx.set_gpr(2, 2227u << 16u);
    ctx.set_gpr(2, ctx.gpr[2] + static_cast<std::uint32_t>(24076));
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(8), ctx.gpr[2]);
    ctx.set_gpr(4, 0u + static_cast<std::uint32_t>(1));
    ctx.set_gpr(5, 2245u << 16u);
    ctx.set_gpr(5, ctx.gpr[5] + static_cast<std::uint32_t>(27024));
    ctx.set_gpr(6, 2190u << 16u);
    ctx.set_gpr(6, ctx.gpr[6] + static_cast<std::uint32_t>(-19704));
    ctx.set_gpr(7, 2189u << 16u);
    ctx.set_gpr(7, ctx.gpr[7] + static_cast<std::uint32_t>(31824));
    ctx.set_gpr(8, 2190u << 16u);
    ctx.set_gpr(8, ctx.gpr[8] + static_cast<std::uint32_t>(-14268));
    ctx.set_gpr(9, 2227u << 16u);
    ctx.set_gpr(9, ctx.gpr[9] + static_cast<std::uint32_t>(24084));
    ctx.set_gpr(10, 0u + static_cast<std::uint32_t>(52));
    ctx.set_gpr(11, 0u + 0u);
    ctx.set_gpr(31, 0x088DC834u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0080_entry, 80u, 294u, 0x08945594u>(ctx, &aot_mem) && ctx.pc == 0x088DC834u) goto L_088DC834;
    return;
L_088DC834:
    ctx.set_gpr(31, rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(28)));
    ctx.set_gpr(29, ctx.gpr[29] + static_cast<std::uint32_t>(32));
    jump_target = ctx.gpr[31];
    // nop
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_088DC844:
    ctx.set_gpr(29, ctx.gpr[29] + static_cast<std::uint32_t>(-16));
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(12), ctx.gpr[31]);
    ctx.set_gpr(31, 0x088DC854u);
    // nop
    goto L_088DC760;
L_088DC854:
    ctx.set_gpr(31, rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(12)));
    ctx.set_gpr(29, ctx.gpr[29] + static_cast<std::uint32_t>(16));
    jump_target = ctx.gpr[31];
    // nop
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_088DC864:
    ctx.set_gpr(29, ctx.gpr[29] + static_cast<std::uint32_t>(-16));
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(12), ctx.gpr[31]);
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(8), ctx.gpr[17]);
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(4), ctx.gpr[16]);
    ctx.set_gpr(2, 2245u << 16u);
    ctx.set_gpr(16, rt.memory().aot_load32(ctx.gpr[2] + static_cast<std::uint32_t>(27024)));
    ctx.set_gpr(4, ctx.gpr[16] + 0u);
    ctx.set_gpr(31, 0x088DC888u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0080_entry, 80u, 236u, 0x089451A8u>(ctx, &aot_mem) && ctx.pc == 0x088DC888u) goto L_088DC888;
    return;
L_088DC888:
    ctx.set_gpr(17, ctx.gpr[2] + 0u);
    ctx.set_gpr(4, ctx.gpr[16] + 0u);
    ctx.set_gpr(5, 2227u << 16u);
    ctx.set_gpr(5, ctx.gpr[5] + static_cast<std::uint32_t>(24100));
    ctx.set_gpr(6, 0u + static_cast<std::uint32_t>(2));
    ctx.set_gpr(31, 0x088DC8A4u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0080_entry, 80u, 151u, 0x08944B98u>(ctx, &aot_mem) && ctx.pc == 0x088DC8A4u) goto L_088DC8A4;
    return;
L_088DC8A4:
    ctx.set_gpr(4, ctx.gpr[16] + 0u);
    ctx.set_gpr(5, 2227u << 16u);
    ctx.set_gpr(5, ctx.gpr[5] + static_cast<std::uint32_t>(24132));
    ctx.set_gpr(6, 2227u << 16u);
    ctx.set_gpr(6, ctx.gpr[6] + static_cast<std::uint32_t>(24140));
    ctx.set_gpr(7, 2227u << 16u);
    ctx.set_gpr(7, ctx.gpr[7] + static_cast<std::uint32_t>(24148));
    ctx.set_gpr(8, ctx.gpr[17] + 0u);
    ctx.set_gpr(31, 0x088DC8CCu);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0080_entry, 80u, 162u, 0x08944C7Cu>(ctx, &aot_mem) && ctx.pc == 0x088DC8CCu) goto L_088DC8CC;
    return;
L_088DC8CC:
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
L_088DC8E4:
    ctx.set_gpr(29, ctx.gpr[29] + static_cast<std::uint32_t>(-16));
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(12), ctx.gpr[31]);
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(8), ctx.gpr[16]);
    ctx.set_gpr(3, 2245u << 16u);
    ctx.set_gpr(3, rt.memory().aot_load32(ctx.gpr[3] + static_cast<std::uint32_t>(27028)));
    { const bool branch_taken = ctx.gpr[3] != 0u;
    // nop
      if (branch_taken) {
          goto L_088DC9AC;
      }
      goto L_088DC900;
    }
L_088DC900:
    ctx.set_gpr(31, 0x088DC908u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0078_entry, 78u, 217u, 0x0893CDECu>(ctx, &aot_mem) && ctx.pc == 0x088DC908u) goto L_088DC908;
    return;
L_088DC908:
    ctx.set_gpr(4, rt.memory().aot_load32(ctx.gpr[2] + static_cast<std::uint32_t>(0)));
    ctx.set_gpr(31, 0x088DC914u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0078_entry, 78u, 199u, 0x0893CC68u>(ctx, &aot_mem) && ctx.pc == 0x088DC914u) goto L_088DC914;
    return;
L_088DC914:
    ctx.set_gpr(3, 2245u << 16u);
    ctx.set_gpr(4, rt.memory().aot_load32(ctx.gpr[3] + static_cast<std::uint32_t>(27024)));
    ctx.set_gpr(5, ctx.gpr[2] + 0u);
    ctx.set_gpr(31, 0x088DC928u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0080_entry, 80u, 50u, 0x089443D4u>(ctx, &aot_mem) && ctx.pc == 0x088DC928u) goto L_088DC928;
    return;
L_088DC928:
    ctx.set_gpr(3, 2245u << 16u);
    rt.memory().aot_store32(ctx.gpr[3] + static_cast<std::uint32_t>(27028), ctx.gpr[2]);
    ctx.set_gpr(16, ctx.gpr[2] + 0u);
    { const bool branch_taken = ctx.gpr[16] == 0u;
    // nop
      if (branch_taken) {
          goto L_088DC9AC;
      }
      goto L_088DC93C;
    }
L_088DC93C:
    ctx.set_gpr(31, 0x088DC944u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0079_entry, 79u, 538u, 0x089425E0u>(ctx, &aot_mem) && ctx.pc == 0x088DC944u) goto L_088DC944;
    return;
L_088DC944:
    ctx.set_gpr(4, ctx.gpr[2] + 0u);
    ctx.set_gpr(5, ctx.gpr[16] + 0u);
    ctx.set_gpr(31, 0x088DC954u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0072_entry, 72u, 751u, 0x08927514u>(ctx, &aot_mem) && ctx.pc == 0x088DC954u) goto L_088DC954;
    return;
L_088DC954:
    ctx.set_gpr(2, 2245u << 16u);
    ctx.set_gpr(4, rt.memory().aot_load32(ctx.gpr[2] + static_cast<std::uint32_t>(27028)));
    ctx.set_gpr(2, rt.memory().aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(4)));
    ctx.set_gpr(2, ctx.gpr[2] + static_cast<std::uint32_t>(-1));
    rt.memory().aot_store32(ctx.gpr[4] + static_cast<std::uint32_t>(4), ctx.gpr[2]);
    ctx.set_gpr(2, ctx.gpr[2] << 10u);
    ctx.set_gpr(2, ctx.gpr[2] >> 10u);
    { const bool branch_taken = ctx.gpr[2] != 0u;
    // nop
      if (branch_taken) {
          goto L_088DC980;
      }
      goto L_088DC978;
    }
L_088DC978:
    ctx.set_gpr(31, 0x088DC980u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0080_entry, 80u, 556u, 0x089467C8u>(ctx, &aot_mem) && ctx.pc == 0x088DC980u) goto L_088DC980;
    return;
L_088DC980:
    ctx.set_gpr(31, 0x088DC988u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0079_entry, 79u, 538u, 0x089425E0u>(ctx, &aot_mem) && ctx.pc == 0x088DC988u) goto L_088DC988;
    return;
L_088DC988:
    ctx.set_gpr(2, rt.memory().aot_load32(ctx.gpr[2] + static_cast<std::uint32_t>(12)));
    ctx.set_gpr(3, ctx.gpr[2] + static_cast<std::uint32_t>(-1));
    ctx.set_gpr(2, 2245u << 16u);
    ctx.set_gpr(2, rt.memory().aot_load32(ctx.gpr[2] + static_cast<std::uint32_t>(27028)));
    rt.memory().aot_store16(ctx.gpr[2] + static_cast<std::uint32_t>(18), static_cast<std::uint16_t>(ctx.gpr[3]));
    ctx.set_gpr(2, 2245u << 16u);
    ctx.set_gpr(4, rt.memory().aot_load32(ctx.gpr[2] + static_cast<std::uint32_t>(27028)));
    ctx.set_gpr(31, 0x088DC9ACu);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0079_entry, 79u, 598u, 0x08942A18u>(ctx, &aot_mem) && ctx.pc == 0x088DC9ACu) goto L_088DC9AC;
    return;
L_088DC9AC:
    ctx.set_gpr(31, rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(12)));
    ctx.set_gpr(16, rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(8)));
    ctx.set_gpr(29, ctx.gpr[29] + static_cast<std::uint32_t>(16));
    jump_target = ctx.gpr[31];
    // nop
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_088DC9C0:
    ctx.set_gpr(29, ctx.gpr[29] + static_cast<std::uint32_t>(-16));
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(12), ctx.gpr[31]);
    ctx.set_gpr(2, 2245u << 16u);
    ctx.set_gpr(2, rt.memory().aot_load32(ctx.gpr[2] + static_cast<std::uint32_t>(27040)));
    { const bool branch_taken = ctx.gpr[2] == 0u;
    // nop
      if (branch_taken) {
          goto L_088DC9EC;
      }
      goto L_088DC9D8;
    }
L_088DC9D8:
    ctx.set_gpr(2, rt.memory().aot_load32(ctx.gpr[2] + static_cast<std::uint32_t>(36)));
    ctx.set_gpr(2, ctx.gpr[2] & 4u);
    ctx.set_gpr(2, 0u < ctx.gpr[2] ? 1u : 0u);
    { const bool branch_taken = ctx.gpr[2] != 0u;
    // nop
      if (branch_taken) {
          goto L_088DC9F4;
      }
      goto L_088DC9EC;
    }
L_088DC9EC:
    ctx.set_gpr(31, 0x088DC9F4u);
    // nop
    goto L_088DCA78;
L_088DC9F4:
    ctx.set_gpr(2, 2245u << 16u);
    ctx.set_gpr(2, rt.memory().aot_load32(ctx.gpr[2] + static_cast<std::uint32_t>(27040)));
    ctx.set_gpr(31, rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(12)));
    ctx.set_gpr(29, ctx.gpr[29] + static_cast<std::uint32_t>(16));
    jump_target = ctx.gpr[31];
    // nop
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_088DCA0C:
    ctx.set_gpr(29, ctx.gpr[29] + static_cast<std::uint32_t>(-80));
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(12), ctx.gpr[31]);
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(8), ctx.gpr[16]);
    ctx.set_gpr(4, ctx.gpr[29] + static_cast<std::uint32_t>(28));
    ctx.set_gpr(31, 0x088DCA24u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0085_entry, 85u, 51u, 0x089583E4u>(ctx, &aot_mem) && ctx.pc == 0x088DCA24u) goto L_088DCA24;
    return;
L_088DCA24:
    ctx.set_gpr(2, 2232u << 16u);
    ctx.set_gpr(2, ctx.gpr[2] + static_cast<std::uint32_t>(-8084));
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(28), ctx.gpr[2]);
    ctx.set_gpr(31, 0x088DCA38u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0064_entry, 64u, 444u, 0x08905FF0u>(ctx, &aot_mem) && ctx.pc == 0x088DCA38u) goto L_088DCA38;
    return;
L_088DCA38:
    ctx.set_gpr(2, rt.memory().aot_load32(ctx.gpr[2] + static_cast<std::uint32_t>(932)));
    ctx.set_gpr(2, ctx.gpr[2] + ctx.gpr[29]);
    ctx.set_gpr(16, rt.memory().aot_load32(ctx.gpr[2] + static_cast<std::uint32_t>(28)));
    ctx.set_gpr(2, 2232u << 16u);
    ctx.set_gpr(2, ctx.gpr[2] + static_cast<std::uint32_t>(-5492));
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(28), ctx.gpr[2]);
    ctx.set_gpr(4, ctx.gpr[29] + static_cast<std::uint32_t>(40));
    ctx.set_gpr(5, 0u + static_cast<std::uint32_t>(-1));
    ctx.set_gpr(31, 0x088DCA60u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0020_entry, 20u, 288u, 0x088555D0u>(ctx, &aot_mem) && ctx.pc == 0x088DCA60u) goto L_088DCA60;
    return;
L_088DCA60:
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
L_088DCA78:
    ctx.set_gpr(29, ctx.gpr[29] + static_cast<std::uint32_t>(-16));
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(12), ctx.gpr[31]);
    ctx.set_gpr(4, 2190u << 16u);
    ctx.set_gpr(4, ctx.gpr[4] + static_cast<std::uint32_t>(-13664));
    ctx.set_gpr(31, 0x088DCA90u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0080_entry, 80u, 286u, 0x08945508u>(ctx, &aot_mem) && ctx.pc == 0x088DCA90u) goto L_088DCA90;
    return;
L_088DCA90:
    ctx.set_gpr(31, rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(12)));
    ctx.set_gpr(29, ctx.gpr[29] + static_cast<std::uint32_t>(16));
    jump_target = ctx.gpr[31];
    // nop
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_088DCAA0:
    ctx.set_gpr(29, ctx.gpr[29] + static_cast<std::uint32_t>(-32));
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(28), ctx.gpr[31]);
    ctx.set_gpr(31, 0x088DCAB0u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0052_entry, 52u, 154u, 0x088D49C4u>(ctx, &aot_mem) && ctx.pc == 0x088DCAB0u) goto L_088DCAB0;
    return;
L_088DCAB0:
    ctx.set_gpr(2, 2190u << 16u);
    ctx.set_gpr(2, ctx.gpr[2] + static_cast<std::uint32_t>(-13492));
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(0), ctx.gpr[2]);
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(4), 0u);
    ctx.set_gpr(2, 2227u << 16u);
    ctx.set_gpr(2, ctx.gpr[2] + static_cast<std::uint32_t>(24156));
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(8), ctx.gpr[2]);
    ctx.set_gpr(4, 0u + 0u);
    ctx.set_gpr(5, 2245u << 16u);
    ctx.set_gpr(5, ctx.gpr[5] + static_cast<std::uint32_t>(27040));
    ctx.set_gpr(6, 2190u << 16u);
    ctx.set_gpr(6, ctx.gpr[6] + static_cast<std::uint32_t>(-12568));
    ctx.set_gpr(7, 2190u << 16u);
    ctx.set_gpr(7, ctx.gpr[7] + static_cast<std::uint32_t>(-13508));
    ctx.set_gpr(8, 2190u << 16u);
    ctx.set_gpr(8, ctx.gpr[8] + static_cast<std::uint32_t>(-13540));
    ctx.set_gpr(9, 2227u << 16u);
    ctx.set_gpr(9, ctx.gpr[9] + static_cast<std::uint32_t>(24164));
    ctx.set_gpr(10, 0u + static_cast<std::uint32_t>(52));
    ctx.set_gpr(11, 2190u << 16u);
    ctx.set_gpr(11, ctx.gpr[11] + static_cast<std::uint32_t>(-13812));
    ctx.set_gpr(31, 0x088DCB0Cu);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0080_entry, 80u, 294u, 0x08945594u>(ctx, &aot_mem) && ctx.pc == 0x088DCB0Cu) goto L_088DCB0C;
    return;
L_088DCB0C:
    ctx.set_gpr(31, rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(28)));
    ctx.set_gpr(29, ctx.gpr[29] + static_cast<std::uint32_t>(32));
    jump_target = ctx.gpr[31];
    // nop
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_088DCB1C:
    ctx.set_gpr(29, ctx.gpr[29] + static_cast<std::uint32_t>(-16));
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(12), ctx.gpr[31]);
    ctx.set_gpr(31, 0x088DCB2Cu);
    // nop
    goto L_088DC9C0;
L_088DCB2C:
    ctx.set_gpr(31, rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(12)));
    ctx.set_gpr(29, ctx.gpr[29] + static_cast<std::uint32_t>(16));
    jump_target = ctx.gpr[31];
    // nop
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_088DCB3C:
    ctx.set_gpr(2, 2245u << 16u);
    ctx.set_gpr(2, rt.memory().aot_load32(ctx.gpr[2] + static_cast<std::uint32_t>(27052)));
    jump_target = ctx.gpr[31];
    // nop
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_088DCB4C:
    ctx.set_gpr(29, ctx.gpr[29] + static_cast<std::uint32_t>(-16));
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(12), ctx.gpr[31]);
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(8), ctx.gpr[17]);
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(4), ctx.gpr[16]);
    ctx.set_gpr(2, 2245u << 16u);
    ctx.set_gpr(16, rt.memory().aot_load32(ctx.gpr[2] + static_cast<std::uint32_t>(27040)));
    ctx.set_gpr(4, ctx.gpr[16] + 0u);
    ctx.set_gpr(31, 0x088DCB70u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0080_entry, 80u, 236u, 0x089451A8u>(ctx, &aot_mem) && ctx.pc == 0x088DCB70u) goto L_088DCB70;
    return;
L_088DCB70:
    ctx.set_gpr(17, ctx.gpr[2] + 0u);
    ctx.set_gpr(4, ctx.gpr[16] + 0u);
    ctx.set_gpr(5, 2227u << 16u);
    ctx.set_gpr(5, ctx.gpr[5] + static_cast<std::uint32_t>(24188));
    ctx.set_gpr(6, 0u + static_cast<std::uint32_t>(1));
    ctx.set_gpr(31, 0x088DCB8Cu);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0080_entry, 80u, 151u, 0x08944B98u>(ctx, &aot_mem) && ctx.pc == 0x088DCB8Cu) goto L_088DCB8C;
    return;
L_088DCB8C:
    ctx.set_gpr(4, ctx.gpr[16] + 0u);
    ctx.set_gpr(5, ctx.gpr[17] + 0u);
    ctx.set_gpr(31, 0x088DCB9Cu);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0080_entry, 80u, 148u, 0x08944B4Cu>(ctx, &aot_mem) && ctx.pc == 0x088DCB9Cu) goto L_088DCB9C;
    return;
L_088DCB9C:
    ctx.set_gpr(4, ctx.gpr[2] + 0u);
    ctx.set_gpr(5, 0u + static_cast<std::uint32_t>(1));
    ctx.set_gpr(31, 0x088DCBACu);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0072_entry, 72u, 648u, 0x08926D64u>(ctx, &aot_mem) && ctx.pc == 0x088DCBACu) goto L_088DCBAC;
    return;
L_088DCBAC:
    ctx.set_gpr(4, ctx.gpr[16] + 0u);
    ctx.set_gpr(5, 2227u << 16u);
    ctx.set_gpr(5, ctx.gpr[5] + static_cast<std::uint32_t>(24192));
    ctx.set_gpr(6, 2227u << 16u);
    ctx.set_gpr(6, ctx.gpr[6] + static_cast<std::uint32_t>(24196));
    ctx.set_gpr(7, 2227u << 16u);
    ctx.set_gpr(7, ctx.gpr[7] + static_cast<std::uint32_t>(24200));
    ctx.set_gpr(8, ctx.gpr[17] + 0u);
    ctx.set_gpr(31, 0x088DCBD4u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0080_entry, 80u, 162u, 0x08944C7Cu>(ctx, &aot_mem) && ctx.pc == 0x088DCBD4u) goto L_088DCBD4;
    return;
L_088DCBD4:
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
L_088DCBEC:
    ctx.set_gpr(29, ctx.gpr[29] + static_cast<std::uint32_t>(-16));
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(12), ctx.gpr[31]);
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(8), ctx.gpr[16]);
    ctx.set_gpr(3, 2245u << 16u);
    ctx.set_gpr(3, rt.memory().aot_load32(ctx.gpr[3] + static_cast<std::uint32_t>(27044)));
    { const bool branch_taken = ctx.gpr[3] != 0u;
    // nop
      if (branch_taken) {
          goto L_088DCCB4;
      }
      goto L_088DCC08;
    }
L_088DCC08:
    ctx.set_gpr(31, 0x088DCC10u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0078_entry, 78u, 217u, 0x0893CDECu>(ctx, &aot_mem) && ctx.pc == 0x088DCC10u) goto L_088DCC10;
    return;
L_088DCC10:
    ctx.set_gpr(4, rt.memory().aot_load32(ctx.gpr[2] + static_cast<std::uint32_t>(0)));
    ctx.set_gpr(31, 0x088DCC1Cu);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0078_entry, 78u, 199u, 0x0893CC68u>(ctx, &aot_mem) && ctx.pc == 0x088DCC1Cu) goto L_088DCC1C;
    return;
L_088DCC1C:
    ctx.set_gpr(3, 2245u << 16u);
    ctx.set_gpr(4, rt.memory().aot_load32(ctx.gpr[3] + static_cast<std::uint32_t>(27040)));
    ctx.set_gpr(5, ctx.gpr[2] + 0u);
    ctx.set_gpr(31, 0x088DCC30u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0080_entry, 80u, 50u, 0x089443D4u>(ctx, &aot_mem) && ctx.pc == 0x088DCC30u) goto L_088DCC30;
    return;
L_088DCC30:
    ctx.set_gpr(3, 2245u << 16u);
    rt.memory().aot_store32(ctx.gpr[3] + static_cast<std::uint32_t>(27044), ctx.gpr[2]);
    ctx.set_gpr(16, ctx.gpr[2] + 0u);
    { const bool branch_taken = ctx.gpr[16] == 0u;
    // nop
      if (branch_taken) {
          goto L_088DCCB4;
      }
      goto L_088DCC44;
    }
L_088DCC44:
    ctx.set_gpr(31, 0x088DCC4Cu);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0079_entry, 79u, 538u, 0x089425E0u>(ctx, &aot_mem) && ctx.pc == 0x088DCC4Cu) goto L_088DCC4C;
    return;
L_088DCC4C:
    ctx.set_gpr(4, ctx.gpr[2] + 0u);
    ctx.set_gpr(5, ctx.gpr[16] + 0u);
    ctx.set_gpr(31, 0x088DCC5Cu);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0072_entry, 72u, 751u, 0x08927514u>(ctx, &aot_mem) && ctx.pc == 0x088DCC5Cu) goto L_088DCC5C;
    return;
L_088DCC5C:
    ctx.set_gpr(2, 2245u << 16u);
    ctx.set_gpr(4, rt.memory().aot_load32(ctx.gpr[2] + static_cast<std::uint32_t>(27044)));
    ctx.set_gpr(2, rt.memory().aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(4)));
    ctx.set_gpr(2, ctx.gpr[2] + static_cast<std::uint32_t>(-1));
    rt.memory().aot_store32(ctx.gpr[4] + static_cast<std::uint32_t>(4), ctx.gpr[2]);
    ctx.set_gpr(2, ctx.gpr[2] << 10u);
    ctx.set_gpr(2, ctx.gpr[2] >> 10u);
    { const bool branch_taken = ctx.gpr[2] != 0u;
    // nop
      if (branch_taken) {
          goto L_088DCC88;
      }
      goto L_088DCC80;
    }
L_088DCC80:
    ctx.set_gpr(31, 0x088DCC88u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0080_entry, 80u, 556u, 0x089467C8u>(ctx, &aot_mem) && ctx.pc == 0x088DCC88u) goto L_088DCC88;
    return;
L_088DCC88:
    ctx.set_gpr(31, 0x088DCC90u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0079_entry, 79u, 538u, 0x089425E0u>(ctx, &aot_mem) && ctx.pc == 0x088DCC90u) goto L_088DCC90;
    return;
L_088DCC90:
    ctx.set_gpr(2, rt.memory().aot_load32(ctx.gpr[2] + static_cast<std::uint32_t>(12)));
    ctx.set_gpr(3, ctx.gpr[2] + static_cast<std::uint32_t>(-1));
    ctx.set_gpr(2, 2245u << 16u);
    ctx.set_gpr(2, rt.memory().aot_load32(ctx.gpr[2] + static_cast<std::uint32_t>(27044)));
    rt.memory().aot_store16(ctx.gpr[2] + static_cast<std::uint32_t>(18), static_cast<std::uint16_t>(ctx.gpr[3]));
    ctx.set_gpr(2, 2245u << 16u);
    ctx.set_gpr(4, rt.memory().aot_load32(ctx.gpr[2] + static_cast<std::uint32_t>(27044)));
    ctx.set_gpr(31, 0x088DCCB4u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0079_entry, 79u, 598u, 0x08942A18u>(ctx, &aot_mem) && ctx.pc == 0x088DCCB4u) goto L_088DCCB4;
    return;
L_088DCCB4:
    ctx.set_gpr(31, rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(12)));
    ctx.set_gpr(16, rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(8)));
    ctx.set_gpr(29, ctx.gpr[29] + static_cast<std::uint32_t>(16));
    jump_target = ctx.gpr[31];
    // nop
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_088DCCC8:
    ctx.set_gpr(29, ctx.gpr[29] + static_cast<std::uint32_t>(-16));
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(12), ctx.gpr[31]);
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(8), ctx.gpr[16]);
    ctx.set_gpr(16, ctx.gpr[4] + 0u);
    ctx.set_gpr(31, 0x088DCCE0u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0064_entry, 64u, 444u, 0x08905FF0u>(ctx, &aot_mem) && ctx.pc == 0x088DCCE0u) goto L_088DCCE0;
    return;
L_088DCCE0:
    ctx.set_gpr(2, rt.memory().aot_load8(ctx.gpr[2] + static_cast<std::uint32_t>(0)));
    { const bool branch_taken = ctx.gpr[2] == 0u;
    // nop
      if (branch_taken) {
          goto L_088DCD14;
      }
      goto L_088DCCEC;
    }
L_088DCCEC:
    ctx.set_gpr(31, 0x088DCCF4u);
    // nop
    goto L_088DCEC0;
L_088DCCF4:
    ctx.set_gpr(2, 2245u << 16u);
    ctx.set_gpr(4, rt.memory().aot_load32(ctx.gpr[2] + static_cast<std::uint32_t>(27052)));
    ctx.set_gpr(5, ctx.gpr[16] + 0u);
    ctx.set_gpr(31, 0x088DCD08u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0080_entry, 80u, 50u, 0x089443D4u>(ctx, &aot_mem) && ctx.pc == 0x088DCD08u) goto L_088DCD08;
    return;
L_088DCD08:
    ctx.set_gpr(16, ctx.gpr[2] + 0u);
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_088DCD74;
      }
      goto L_088DCD14;
    }
L_088DCD14:
    ctx.set_gpr(4, 0u + static_cast<std::uint32_t>(48));
    ctx.set_gpr(5, 0u + 0u);
    ctx.set_gpr(6, ctx.gpr[16] + 0u);
    ctx.set_gpr(31, 0x088DCD28u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0080_entry, 80u, 542u, 0x089466FCu>(ctx, &aot_mem) && ctx.pc == 0x088DCD28u) goto L_088DCD28;
    return;
L_088DCD28:
    ctx.set_gpr(16, ctx.gpr[2] + 0u);
    { const bool branch_taken = ctx.gpr[16] == 0u;
    // nop
      if (branch_taken) {
          goto L_088DCD48;
      }
      goto L_088DCD34;
    }
L_088DCD34:
    ctx.set_gpr(4, ctx.gpr[16] + 0u);
    ctx.set_gpr(5, 0u + static_cast<std::uint32_t>(1));
    ctx.set_gpr(31, 0x088DCD44u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0085_entry, 85u, 47u, 0x08958394u>(ctx, &aot_mem) && ctx.pc == 0x088DCD44u) goto L_088DCD44;
    return;
L_088DCD44:
    ctx.set_gpr(16, ctx.gpr[2] + 0u);
    goto L_088DCD48;
L_088DCD48:
    ctx.set_gpr(4, ctx.gpr[16] + 0u);
    ctx.set_gpr(25, rt.memory().aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(0)));
    ctx.set_gpr(25, rt.memory().aot_load32(ctx.gpr[25] + static_cast<std::uint32_t>(44)));
    jump_target = ctx.gpr[25];
    ctx.set_gpr(31, 0x088DCD5Cu);
    // nop
    ctx.pc = jump_target;
    if (rt.invoke_chained_call(ctx, &aot_mem) && ctx.pc == 0x088DCD5Cu) goto L_088DCD5C;
    return;
L_088DCD5C:
    ctx.set_gpr(4, ctx.gpr[16] + 0u);
    ctx.set_gpr(5, 0u + 0u);
    ctx.set_gpr(25, rt.memory().aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(0)));
    ctx.set_gpr(25, rt.memory().aot_load32(ctx.gpr[25] + static_cast<std::uint32_t>(36)));
    jump_target = ctx.gpr[25];
    ctx.set_gpr(31, 0x088DCD74u);
    // nop
    ctx.pc = jump_target;
    if (rt.invoke_chained_call(ctx, &aot_mem) && ctx.pc == 0x088DCD74u) goto L_088DCD74;
    return;
L_088DCD74:
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
L_088DCD8C:
    ctx.set_gpr(29, ctx.gpr[29] + static_cast<std::uint32_t>(-16));
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(12), ctx.gpr[31]);
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(8), ctx.gpr[17]);
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(4), ctx.gpr[16]);
    ctx.set_gpr(17, ctx.gpr[4] + 0u);
    ctx.set_gpr(16, ctx.gpr[5] + 0u);
    ctx.set_gpr(31, 0x088DCDACu);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0064_entry, 64u, 444u, 0x08905FF0u>(ctx, &aot_mem) && ctx.pc == 0x088DCDACu) goto L_088DCDAC;
    return;
L_088DCDAC:
    ctx.set_gpr(2, rt.memory().aot_load8(ctx.gpr[2] + static_cast<std::uint32_t>(0)));
    { const bool branch_taken = ctx.gpr[2] == 0u;
    // nop
      if (branch_taken) {
          goto L_088DCDD8;
      }
      goto L_088DCDB8;
    }
L_088DCDB8:
    ctx.set_gpr(31, 0x088DCDC0u);
    // nop
    goto L_088DCEC0;
L_088DCDC0:
    ctx.set_gpr(4, ctx.gpr[17] + 0u);
    ctx.set_gpr(5, ctx.gpr[16] + 0u);
    ctx.set_gpr(31, 0x088DCDD0u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0080_entry, 80u, 848u, 0x08947E90u>(ctx, &aot_mem) && ctx.pc == 0x088DCDD0u) goto L_088DCDD0;
    return;
L_088DCDD0:
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_088DCE00;
      }
      goto L_088DCDD8;
    }
L_088DCDD8:
    ctx.set_gpr(4, 0u + static_cast<std::uint32_t>(48));
    ctx.set_gpr(5, 0u + 0u);
    ctx.set_gpr(31, 0x088DCDE8u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0080_entry, 80u, 552u, 0x08946784u>(ctx, &aot_mem) && ctx.pc == 0x088DCDE8u) goto L_088DCDE8;
    return;
L_088DCDE8:
    { const bool branch_taken = ctx.gpr[2] == 0u;
    // nop
      if (branch_taken) {
          goto L_088DCE00;
      }
      goto L_088DCDF0;
    }
L_088DCDF0:
    ctx.set_gpr(4, ctx.gpr[2] + 0u);
    ctx.set_gpr(5, ctx.gpr[17] + 0u);
    ctx.set_gpr(31, 0x088DCE00u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0085_entry, 85u, 53u, 0x08958420u>(ctx, &aot_mem) && ctx.pc == 0x088DCE00u) goto L_088DCE00;
    return;
L_088DCE00:
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
L_088DCE18:
    ctx.set_gpr(29, ctx.gpr[29] + static_cast<std::uint32_t>(-16));
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(12), ctx.gpr[31]);
    ctx.set_gpr(2, 2245u << 16u);
    ctx.set_gpr(2, rt.memory().aot_load32(ctx.gpr[2] + static_cast<std::uint32_t>(27052)));
    { const bool branch_taken = ctx.gpr[2] == 0u;
    // nop
      if (branch_taken) {
          goto L_088DCE44;
      }
      goto L_088DCE30;
    }
L_088DCE30:
    ctx.set_gpr(2, rt.memory().aot_load32(ctx.gpr[2] + static_cast<std::uint32_t>(36)));
    ctx.set_gpr(2, ctx.gpr[2] & 4u);
    ctx.set_gpr(2, 0u < ctx.gpr[2] ? 1u : 0u);
    { const bool branch_taken = ctx.gpr[2] != 0u;
    // nop
      if (branch_taken) {
          goto L_088DCE4C;
      }
      goto L_088DCE44;
    }
L_088DCE44:
    ctx.set_gpr(31, 0x088DCE4Cu);
    // nop
    goto L_088DCEC0;
L_088DCE4C:
    ctx.set_gpr(2, 2245u << 16u);
    ctx.set_gpr(2, rt.memory().aot_load32(ctx.gpr[2] + static_cast<std::uint32_t>(27052)));
    ctx.set_gpr(31, rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(12)));
    ctx.set_gpr(29, ctx.gpr[29] + static_cast<std::uint32_t>(16));
    jump_target = ctx.gpr[31];
    // nop
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_088DCE64:
    ctx.set_gpr(29, ctx.gpr[29] + static_cast<std::uint32_t>(-64));
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(12), ctx.gpr[31]);
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(8), ctx.gpr[16]);
    ctx.set_gpr(4, ctx.gpr[29] + static_cast<std::uint32_t>(16));
    ctx.set_gpr(31, 0x088DCE7Cu);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0085_entry, 85u, 51u, 0x089583E4u>(ctx, &aot_mem) && ctx.pc == 0x088DCE7Cu) goto L_088DCE7C;
    return;
L_088DCE7C:
    ctx.set_gpr(31, 0x088DCE84u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0064_entry, 64u, 444u, 0x08905FF0u>(ctx, &aot_mem) && ctx.pc == 0x088DCE84u) goto L_088DCE84;
    return;
L_088DCE84:
    ctx.set_gpr(2, rt.memory().aot_load32(ctx.gpr[2] + static_cast<std::uint32_t>(932)));
    ctx.set_gpr(2, ctx.gpr[2] + ctx.gpr[29]);
    ctx.set_gpr(16, rt.memory().aot_load32(ctx.gpr[2] + static_cast<std::uint32_t>(16)));
    ctx.set_gpr(2, 2232u << 16u);
    ctx.set_gpr(2, ctx.gpr[2] + static_cast<std::uint32_t>(-5492));
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(16), ctx.gpr[2]);
    ctx.set_gpr(4, ctx.gpr[29] + static_cast<std::uint32_t>(28));
    ctx.set_gpr(31, 0x088DCEA8u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0019_entry, 19u, 764u, 0x08853094u>(ctx, &aot_mem) && ctx.pc == 0x088DCEA8u) goto L_088DCEA8;
    return;
L_088DCEA8:
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
L_088DCEC0:
    ctx.set_gpr(29, ctx.gpr[29] + static_cast<std::uint32_t>(-16));
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(12), ctx.gpr[31]);
    ctx.set_gpr(4, 2190u << 16u);
    ctx.set_gpr(4, ctx.gpr[4] + static_cast<std::uint32_t>(-12568));
    ctx.set_gpr(31, 0x088DCED8u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0080_entry, 80u, 286u, 0x08945508u>(ctx, &aot_mem) && ctx.pc == 0x088DCED8u) goto L_088DCED8;
    return;
L_088DCED8:
    ctx.set_gpr(31, rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(12)));
    ctx.set_gpr(29, ctx.gpr[29] + static_cast<std::uint32_t>(16));
    jump_target = ctx.gpr[31];
    // nop
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_088DCEE8:
    ctx.set_gpr(29, ctx.gpr[29] + static_cast<std::uint32_t>(-32));
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(28), ctx.gpr[31]);
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(0), 0u);
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(4), 0u);
    ctx.set_gpr(2, 2227u << 16u);
    ctx.set_gpr(2, ctx.gpr[2] + static_cast<std::uint32_t>(24204));
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(8), ctx.gpr[2]);
    ctx.set_gpr(4, 0u + 0u);
    ctx.set_gpr(5, 2245u << 16u);
    ctx.set_gpr(5, ctx.gpr[5] + static_cast<std::uint32_t>(27052));
    ctx.set_gpr(6, 2190u << 16u);
    ctx.set_gpr(6, ctx.gpr[6] + static_cast<std::uint32_t>(-19704));
    ctx.set_gpr(7, 2189u << 16u);
    ctx.set_gpr(7, ctx.gpr[7] + static_cast<std::uint32_t>(31824));
    ctx.set_gpr(8, 2190u << 16u);
    ctx.set_gpr(8, ctx.gpr[8] + static_cast<std::uint32_t>(-12460));
    ctx.set_gpr(9, 2227u << 16u);
    ctx.set_gpr(9, ctx.gpr[9] + static_cast<std::uint32_t>(24212));
    ctx.set_gpr(10, 0u + static_cast<std::uint32_t>(48));
    ctx.set_gpr(11, 2190u << 16u);
    ctx.set_gpr(11, ctx.gpr[11] + static_cast<std::uint32_t>(-12700));
    ctx.set_gpr(31, 0x088DCF44u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0080_entry, 80u, 294u, 0x08945594u>(ctx, &aot_mem) && ctx.pc == 0x088DCF44u) goto L_088DCF44;
    return;
L_088DCF44:
    ctx.set_gpr(31, rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(28)));
    ctx.set_gpr(29, ctx.gpr[29] + static_cast<std::uint32_t>(32));
    jump_target = ctx.gpr[31];
    // nop
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_088DCF54:
    ctx.set_gpr(29, ctx.gpr[29] + static_cast<std::uint32_t>(-16));
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(12), ctx.gpr[31]);
    ctx.set_gpr(31, 0x088DCF64u);
    // nop
    goto L_088DCE18;
L_088DCF64:
    ctx.set_gpr(31, rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(12)));
    ctx.set_gpr(29, ctx.gpr[29] + static_cast<std::uint32_t>(16));
    jump_target = ctx.gpr[31];
    // nop
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_088DCF74:
    ctx.set_gpr(29, ctx.gpr[29] + static_cast<std::uint32_t>(-16));
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(12), ctx.gpr[31]);
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(8), ctx.gpr[16]);
    ctx.set_gpr(3, 2245u << 16u);
    ctx.set_gpr(3, rt.memory().aot_load32(ctx.gpr[3] + static_cast<std::uint32_t>(27056)));
    { const bool branch_taken = ctx.gpr[3] != 0u;
    // nop
      if (branch_taken) {
          goto L_088DD03C;
      }
      goto L_088DCF90;
    }
L_088DCF90:
    ctx.set_gpr(31, 0x088DCF98u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0078_entry, 78u, 217u, 0x0893CDECu>(ctx, &aot_mem) && ctx.pc == 0x088DCF98u) goto L_088DCF98;
    return;
L_088DCF98:
    ctx.set_gpr(4, rt.memory().aot_load32(ctx.gpr[2] + static_cast<std::uint32_t>(0)));
    ctx.set_gpr(31, 0x088DCFA4u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0078_entry, 78u, 199u, 0x0893CC68u>(ctx, &aot_mem) && ctx.pc == 0x088DCFA4u) goto L_088DCFA4;
    return;
L_088DCFA4:
    ctx.set_gpr(3, 2245u << 16u);
    ctx.set_gpr(4, rt.memory().aot_load32(ctx.gpr[3] + static_cast<std::uint32_t>(27052)));
    ctx.set_gpr(5, ctx.gpr[2] + 0u);
    ctx.set_gpr(31, 0x088DCFB8u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0080_entry, 80u, 50u, 0x089443D4u>(ctx, &aot_mem) && ctx.pc == 0x088DCFB8u) goto L_088DCFB8;
    return;
L_088DCFB8:
    ctx.set_gpr(3, 2245u << 16u);
    rt.memory().aot_store32(ctx.gpr[3] + static_cast<std::uint32_t>(27056), ctx.gpr[2]);
    ctx.set_gpr(16, ctx.gpr[2] + 0u);
    { const bool branch_taken = ctx.gpr[16] == 0u;
    // nop
      if (branch_taken) {
          goto L_088DD03C;
      }
      goto L_088DCFCC;
    }
L_088DCFCC:
    ctx.set_gpr(31, 0x088DCFD4u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0079_entry, 79u, 538u, 0x089425E0u>(ctx, &aot_mem) && ctx.pc == 0x088DCFD4u) goto L_088DCFD4;
    return;
L_088DCFD4:
    ctx.set_gpr(4, ctx.gpr[2] + 0u);
    ctx.set_gpr(5, ctx.gpr[16] + 0u);
    ctx.set_gpr(31, 0x088DCFE4u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0072_entry, 72u, 751u, 0x08927514u>(ctx, &aot_mem) && ctx.pc == 0x088DCFE4u) goto L_088DCFE4;
    return;
L_088DCFE4:
    ctx.set_gpr(2, 2245u << 16u);
    ctx.set_gpr(4, rt.memory().aot_load32(ctx.gpr[2] + static_cast<std::uint32_t>(27056)));
    ctx.set_gpr(2, rt.memory().aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(4)));
    ctx.set_gpr(2, ctx.gpr[2] + static_cast<std::uint32_t>(-1));
    rt.memory().aot_store32(ctx.gpr[4] + static_cast<std::uint32_t>(4), ctx.gpr[2]);
    ctx.set_gpr(2, ctx.gpr[2] << 10u);
    ctx.set_gpr(2, ctx.gpr[2] >> 10u);
    { const bool branch_taken = ctx.gpr[2] != 0u;
    // nop
      if (branch_taken) {
          goto L_088DD010;
      }
      goto L_088DD008;
    }
L_088DD008:
    ctx.set_gpr(31, 0x088DD010u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0080_entry, 80u, 556u, 0x089467C8u>(ctx, &aot_mem) && ctx.pc == 0x088DD010u) goto L_088DD010;
    return;
L_088DD010:
    ctx.set_gpr(31, 0x088DD018u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0079_entry, 79u, 538u, 0x089425E0u>(ctx, &aot_mem) && ctx.pc == 0x088DD018u) goto L_088DD018;
    return;
L_088DD018:
    ctx.set_gpr(2, rt.memory().aot_load32(ctx.gpr[2] + static_cast<std::uint32_t>(12)));
    ctx.set_gpr(3, ctx.gpr[2] + static_cast<std::uint32_t>(-1));
    ctx.set_gpr(2, 2245u << 16u);
    ctx.set_gpr(2, rt.memory().aot_load32(ctx.gpr[2] + static_cast<std::uint32_t>(27056)));
    rt.memory().aot_store16(ctx.gpr[2] + static_cast<std::uint32_t>(18), static_cast<std::uint16_t>(ctx.gpr[3]));
    ctx.set_gpr(2, 2245u << 16u);
    ctx.set_gpr(4, rt.memory().aot_load32(ctx.gpr[2] + static_cast<std::uint32_t>(27056)));
    ctx.set_gpr(31, 0x088DD03Cu);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0079_entry, 79u, 598u, 0x08942A18u>(ctx, &aot_mem) && ctx.pc == 0x088DD03Cu) goto L_088DD03C;
    return;
L_088DD03C:
    ctx.set_gpr(31, rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(12)));
    ctx.set_gpr(16, rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(8)));
    ctx.set_gpr(29, ctx.gpr[29] + static_cast<std::uint32_t>(16));
    jump_target = ctx.gpr[31];
    // nop
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_088DD050:
    ctx.set_gpr(29, ctx.gpr[29] + static_cast<std::uint32_t>(-16));
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(12), ctx.gpr[31]);
    ctx.set_gpr(2, 2245u << 16u);
    ctx.set_gpr(2, rt.memory().aot_load32(ctx.gpr[2] + static_cast<std::uint32_t>(27056)));
    { const bool branch_taken = ctx.gpr[2] != 0u;
    // nop
      if (branch_taken) {
          goto L_088DD070;
      }
      goto L_088DD068;
    }
L_088DD068:
    ctx.set_gpr(31, 0x088DD070u);
    // nop
    goto L_088DCEC0;
L_088DD070:
    ctx.set_gpr(2, 2245u << 16u);
    ctx.set_gpr(2, rt.memory().aot_load32(ctx.gpr[2] + static_cast<std::uint32_t>(27056)));
    ctx.set_gpr(31, rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(12)));
    ctx.set_gpr(29, ctx.gpr[29] + static_cast<std::uint32_t>(16));
    jump_target = ctx.gpr[31];
    // nop
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_088DD088:
    ctx.set_gpr(29, ctx.gpr[29] + static_cast<std::uint32_t>(-16));
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(12), ctx.gpr[31]);
    ctx.set_gpr(2, 2245u << 16u);
    ctx.set_gpr(2, rt.memory().aot_load32(ctx.gpr[2] + static_cast<std::uint32_t>(27060)));
    { const bool branch_taken = ctx.gpr[2] == 0u;
    // nop
      if (branch_taken) {
          goto L_088DD0B4;
      }
      goto L_088DD0A0;
    }
L_088DD0A0:
    ctx.set_gpr(2, rt.memory().aot_load32(ctx.gpr[2] + static_cast<std::uint32_t>(36)));
    ctx.set_gpr(2, ctx.gpr[2] & 4u);
    ctx.set_gpr(2, 0u < ctx.gpr[2] ? 1u : 0u);
    { const bool branch_taken = ctx.gpr[2] != 0u;
    // nop
      if (branch_taken) {
          goto L_088DD0BC;
      }
      goto L_088DD0B4;
    }
L_088DD0B4:
    ctx.set_gpr(31, 0x088DD0BCu);
    // nop
    goto L_088DD140;
L_088DD0BC:
    ctx.set_gpr(2, 2245u << 16u);
    ctx.set_gpr(2, rt.memory().aot_load32(ctx.gpr[2] + static_cast<std::uint32_t>(27060)));
    ctx.set_gpr(31, rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(12)));
    ctx.set_gpr(29, ctx.gpr[29] + static_cast<std::uint32_t>(16));
    jump_target = ctx.gpr[31];
    // nop
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_088DD0D4:
    ctx.set_gpr(29, ctx.gpr[29] + static_cast<std::uint32_t>(-80));
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(12), ctx.gpr[31]);
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(8), ctx.gpr[16]);
    ctx.set_gpr(4, ctx.gpr[29] + static_cast<std::uint32_t>(24));
    ctx.set_gpr(31, 0x088DD0ECu);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0085_entry, 85u, 518u, 0x0895A2C4u>(ctx, &aot_mem) && ctx.pc == 0x088DD0ECu) goto L_088DD0EC;
    return;
L_088DD0EC:
    ctx.set_gpr(2, 2232u << 16u);
    ctx.set_gpr(2, ctx.gpr[2] + static_cast<std::uint32_t>(-8352));
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(24), ctx.gpr[2]);
    ctx.set_gpr(31, 0x088DD100u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0064_entry, 64u, 444u, 0x08905FF0u>(ctx, &aot_mem) && ctx.pc == 0x088DD100u) goto L_088DD100;
    return;
L_088DD100:
    ctx.set_gpr(2, rt.memory().aot_load32(ctx.gpr[2] + static_cast<std::uint32_t>(932)));
    ctx.set_gpr(2, ctx.gpr[2] + ctx.gpr[29]);
    ctx.set_gpr(16, rt.memory().aot_load32(ctx.gpr[2] + static_cast<std::uint32_t>(24)));
    ctx.set_gpr(2, 2232u << 16u);
    ctx.set_gpr(2, ctx.gpr[2] + static_cast<std::uint32_t>(-7292));
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(24), ctx.gpr[2]);
    ctx.set_gpr(4, ctx.gpr[29] + static_cast<std::uint32_t>(24));
    ctx.set_gpr(5, 0u + 0u);
    ctx.set_gpr(31, 0x088DD128u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0053_entry, 53u, 102u, 0x088D8804u>(ctx, &aot_mem) && ctx.pc == 0x088DD128u) goto L_088DD128;
    return;
L_088DD128:
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
L_088DD140:
    ctx.set_gpr(29, ctx.gpr[29] + static_cast<std::uint32_t>(-16));
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(12), ctx.gpr[31]);
    ctx.set_gpr(4, 2190u << 16u);
    ctx.set_gpr(4, ctx.gpr[4] + static_cast<std::uint32_t>(-11928));
    ctx.set_gpr(31, 0x088DD158u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0080_entry, 80u, 286u, 0x08945508u>(ctx, &aot_mem) && ctx.pc == 0x088DD158u) goto L_088DD158;
    return;
L_088DD158:
    ctx.set_gpr(31, rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(12)));
    ctx.set_gpr(29, ctx.gpr[29] + static_cast<std::uint32_t>(16));
    jump_target = ctx.gpr[31];
    // nop
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_088DD168:
    ctx.set_gpr(29, ctx.gpr[29] + static_cast<std::uint32_t>(-32));
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(28), ctx.gpr[31]);
    ctx.set_gpr(31, 0x088DD178u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0052_entry, 52u, 154u, 0x088D49C4u>(ctx, &aot_mem) && ctx.pc == 0x088DD178u) goto L_088DD178;
    return;
L_088DD178:
    ctx.set_gpr(2, 2190u << 16u);
    ctx.set_gpr(2, ctx.gpr[2] + static_cast<std::uint32_t>(-11756));
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(0), ctx.gpr[2]);
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(4), 0u);
    ctx.set_gpr(2, 2227u << 16u);
    ctx.set_gpr(2, ctx.gpr[2] + static_cast<std::uint32_t>(24232));
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(8), ctx.gpr[2]);
    ctx.set_gpr(4, 0u + 0u);
    ctx.set_gpr(5, 2245u << 16u);
    ctx.set_gpr(5, ctx.gpr[5] + static_cast<std::uint32_t>(27060));
    ctx.set_gpr(6, 2190u << 16u);
    ctx.set_gpr(6, ctx.gpr[6] + static_cast<std::uint32_t>(-10828));
    ctx.set_gpr(7, 2190u << 16u);
    ctx.set_gpr(7, ctx.gpr[7] + static_cast<std::uint32_t>(-11772));
    ctx.set_gpr(8, 2190u << 16u);
    ctx.set_gpr(8, ctx.gpr[8] + static_cast<std::uint32_t>(-11804));
    ctx.set_gpr(9, 2227u << 16u);
    ctx.set_gpr(9, ctx.gpr[9] + static_cast<std::uint32_t>(24240));
    ctx.set_gpr(10, 0u + static_cast<std::uint32_t>(56));
    ctx.set_gpr(11, 2190u << 16u);
    ctx.set_gpr(11, ctx.gpr[11] + static_cast<std::uint32_t>(-12076));
    ctx.set_gpr(31, 0x088DD1D4u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0080_entry, 80u, 294u, 0x08945594u>(ctx, &aot_mem) && ctx.pc == 0x088DD1D4u) goto L_088DD1D4;
    return;
L_088DD1D4:
    ctx.set_gpr(31, rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(28)));
    ctx.set_gpr(29, ctx.gpr[29] + static_cast<std::uint32_t>(32));
    jump_target = ctx.gpr[31];
    // nop
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_088DD1E4:
    ctx.set_gpr(29, ctx.gpr[29] + static_cast<std::uint32_t>(-16));
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(12), ctx.gpr[31]);
    ctx.set_gpr(31, 0x088DD1F4u);
    // nop
    goto L_088DD088;
L_088DD1F4:
    ctx.set_gpr(31, rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(12)));
    ctx.set_gpr(29, ctx.gpr[29] + static_cast<std::uint32_t>(16));
    jump_target = ctx.gpr[31];
    // nop
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_088DD204:
    ctx.set_gpr(2, 2245u << 16u);
    ctx.set_gpr(2, rt.memory().aot_load32(ctx.gpr[2] + static_cast<std::uint32_t>(27072)));
    jump_target = ctx.gpr[31];
    // nop
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_088DD214:
    ctx.set_gpr(29, ctx.gpr[29] + static_cast<std::uint32_t>(-16));
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(12), ctx.gpr[31]);
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(8), ctx.gpr[17]);
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(4), ctx.gpr[16]);
    ctx.set_gpr(2, 2245u << 16u);
    ctx.set_gpr(16, rt.memory().aot_load32(ctx.gpr[2] + static_cast<std::uint32_t>(27060)));
    ctx.set_gpr(4, ctx.gpr[16] + 0u);
    ctx.set_gpr(31, 0x088DD238u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0080_entry, 80u, 236u, 0x089451A8u>(ctx, &aot_mem) && ctx.pc == 0x088DD238u) goto L_088DD238;
    return;
L_088DD238:
    ctx.set_gpr(17, ctx.gpr[2] + 0u);
    ctx.set_gpr(4, ctx.gpr[16] + 0u);
    ctx.set_gpr(5, 2227u << 16u);
    ctx.set_gpr(5, ctx.gpr[5] + static_cast<std::uint32_t>(24264));
    ctx.set_gpr(6, 0u + static_cast<std::uint32_t>(1));
    ctx.set_gpr(31, 0x088DD254u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0080_entry, 80u, 151u, 0x08944B98u>(ctx, &aot_mem) && ctx.pc == 0x088DD254u) goto L_088DD254;
    return;
L_088DD254:
    ctx.set_gpr(4, ctx.gpr[16] + 0u);
    ctx.set_gpr(5, ctx.gpr[17] + 0u);
    ctx.set_gpr(31, 0x088DD264u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0080_entry, 80u, 148u, 0x08944B4Cu>(ctx, &aot_mem) && ctx.pc == 0x088DD264u) goto L_088DD264;
    return;
L_088DD264:
    ctx.set_gpr(4, ctx.gpr[2] + 0u);
    ctx.set_gpr(5, 0u + static_cast<std::uint32_t>(1));
    ctx.set_gpr(31, 0x088DD274u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0072_entry, 72u, 648u, 0x08926D64u>(ctx, &aot_mem) && ctx.pc == 0x088DD274u) goto L_088DD274;
    return;
L_088DD274:
    ctx.set_gpr(4, ctx.gpr[16] + 0u);
    ctx.set_gpr(5, 2227u << 16u);
    ctx.set_gpr(5, ctx.gpr[5] + static_cast<std::uint32_t>(24268));
    ctx.set_gpr(6, 2227u << 16u);
    ctx.set_gpr(6, ctx.gpr[6] + static_cast<std::uint32_t>(24272));
    ctx.set_gpr(7, 2227u << 16u);
    ctx.set_gpr(7, ctx.gpr[7] + static_cast<std::uint32_t>(24276));
    ctx.set_gpr(8, ctx.gpr[17] + 0u);
    ctx.set_gpr(31, 0x088DD29Cu);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0080_entry, 80u, 162u, 0x08944C7Cu>(ctx, &aot_mem) && ctx.pc == 0x088DD29Cu) goto L_088DD29C;
    return;
L_088DD29C:
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
L_088DD2B4:
    ctx.set_gpr(29, ctx.gpr[29] + static_cast<std::uint32_t>(-16));
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(12), ctx.gpr[31]);
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(8), ctx.gpr[16]);
    ctx.set_gpr(3, 2245u << 16u);
    ctx.set_gpr(3, rt.memory().aot_load32(ctx.gpr[3] + static_cast<std::uint32_t>(27064)));
    { const bool branch_taken = ctx.gpr[3] != 0u;
    // nop
      if (branch_taken) {
          goto L_088DD37C;
      }
      goto L_088DD2D0;
    }
L_088DD2D0:
    ctx.set_gpr(31, 0x088DD2D8u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0078_entry, 78u, 217u, 0x0893CDECu>(ctx, &aot_mem) && ctx.pc == 0x088DD2D8u) goto L_088DD2D8;
    return;
L_088DD2D8:
    ctx.set_gpr(4, rt.memory().aot_load32(ctx.gpr[2] + static_cast<std::uint32_t>(0)));
    ctx.set_gpr(31, 0x088DD2E4u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0078_entry, 78u, 199u, 0x0893CC68u>(ctx, &aot_mem) && ctx.pc == 0x088DD2E4u) goto L_088DD2E4;
    return;
L_088DD2E4:
    ctx.set_gpr(3, 2245u << 16u);
    ctx.set_gpr(4, rt.memory().aot_load32(ctx.gpr[3] + static_cast<std::uint32_t>(27060)));
    ctx.set_gpr(5, ctx.gpr[2] + 0u);
    ctx.set_gpr(31, 0x088DD2F8u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0080_entry, 80u, 50u, 0x089443D4u>(ctx, &aot_mem) && ctx.pc == 0x088DD2F8u) goto L_088DD2F8;
    return;
L_088DD2F8:
    ctx.set_gpr(3, 2245u << 16u);
    rt.memory().aot_store32(ctx.gpr[3] + static_cast<std::uint32_t>(27064), ctx.gpr[2]);
    ctx.set_gpr(16, ctx.gpr[2] + 0u);
    { const bool branch_taken = ctx.gpr[16] == 0u;
    // nop
      if (branch_taken) {
          goto L_088DD37C;
      }
      goto L_088DD30C;
    }
L_088DD30C:
    ctx.set_gpr(31, 0x088DD314u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0079_entry, 79u, 538u, 0x089425E0u>(ctx, &aot_mem) && ctx.pc == 0x088DD314u) goto L_088DD314;
    return;
L_088DD314:
    ctx.set_gpr(4, ctx.gpr[2] + 0u);
    ctx.set_gpr(5, ctx.gpr[16] + 0u);
    ctx.set_gpr(31, 0x088DD324u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0072_entry, 72u, 751u, 0x08927514u>(ctx, &aot_mem) && ctx.pc == 0x088DD324u) goto L_088DD324;
    return;
L_088DD324:
    ctx.set_gpr(2, 2245u << 16u);
    ctx.set_gpr(4, rt.memory().aot_load32(ctx.gpr[2] + static_cast<std::uint32_t>(27064)));
    ctx.set_gpr(2, rt.memory().aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(4)));
    ctx.set_gpr(2, ctx.gpr[2] + static_cast<std::uint32_t>(-1));
    rt.memory().aot_store32(ctx.gpr[4] + static_cast<std::uint32_t>(4), ctx.gpr[2]);
    ctx.set_gpr(2, ctx.gpr[2] << 10u);
    ctx.set_gpr(2, ctx.gpr[2] >> 10u);
    { const bool branch_taken = ctx.gpr[2] != 0u;
    // nop
      if (branch_taken) {
          goto L_088DD350;
      }
      goto L_088DD348;
    }
L_088DD348:
    ctx.set_gpr(31, 0x088DD350u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0080_entry, 80u, 556u, 0x089467C8u>(ctx, &aot_mem) && ctx.pc == 0x088DD350u) goto L_088DD350;
    return;
L_088DD350:
    ctx.set_gpr(31, 0x088DD358u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0079_entry, 79u, 538u, 0x089425E0u>(ctx, &aot_mem) && ctx.pc == 0x088DD358u) goto L_088DD358;
    return;
L_088DD358:
    ctx.set_gpr(2, rt.memory().aot_load32(ctx.gpr[2] + static_cast<std::uint32_t>(12)));
    ctx.set_gpr(3, ctx.gpr[2] + static_cast<std::uint32_t>(-1));
    ctx.set_gpr(2, 2245u << 16u);
    ctx.set_gpr(2, rt.memory().aot_load32(ctx.gpr[2] + static_cast<std::uint32_t>(27064)));
    rt.memory().aot_store16(ctx.gpr[2] + static_cast<std::uint32_t>(18), static_cast<std::uint16_t>(ctx.gpr[3]));
    ctx.set_gpr(2, 2245u << 16u);
    ctx.set_gpr(4, rt.memory().aot_load32(ctx.gpr[2] + static_cast<std::uint32_t>(27064)));
    ctx.set_gpr(31, 0x088DD37Cu);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0079_entry, 79u, 598u, 0x08942A18u>(ctx, &aot_mem) && ctx.pc == 0x088DD37Cu) goto L_088DD37C;
    return;
L_088DD37C:
    ctx.set_gpr(31, rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(12)));
    ctx.set_gpr(16, rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(8)));
    ctx.set_gpr(29, ctx.gpr[29] + static_cast<std::uint32_t>(16));
    jump_target = ctx.gpr[31];
    // nop
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_088DD390:
    ctx.set_gpr(29, ctx.gpr[29] + static_cast<std::uint32_t>(-16));
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(12), ctx.gpr[31]);
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(8), ctx.gpr[16]);
    ctx.set_gpr(16, ctx.gpr[4] + 0u);
    ctx.set_gpr(31, 0x088DD3A8u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0064_entry, 64u, 444u, 0x08905FF0u>(ctx, &aot_mem) && ctx.pc == 0x088DD3A8u) goto L_088DD3A8;
    return;
L_088DD3A8:
    ctx.set_gpr(2, rt.memory().aot_load8(ctx.gpr[2] + static_cast<std::uint32_t>(0)));
    { const bool branch_taken = ctx.gpr[2] == 0u;
    // nop
      if (branch_taken) {
          goto L_088DD3DC;
      }
      goto L_088DD3B4;
    }
L_088DD3B4:
    ctx.set_gpr(31, 0x088DD3BCu);
    // nop
    goto L_088DD58C;
L_088DD3BC:
    ctx.set_gpr(2, 2245u << 16u);
    ctx.set_gpr(4, rt.memory().aot_load32(ctx.gpr[2] + static_cast<std::uint32_t>(27072)));
    ctx.set_gpr(5, ctx.gpr[16] + 0u);
    ctx.set_gpr(31, 0x088DD3D0u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0080_entry, 80u, 50u, 0x089443D4u>(ctx, &aot_mem) && ctx.pc == 0x088DD3D0u) goto L_088DD3D0;
    return;
L_088DD3D0:
    ctx.set_gpr(16, ctx.gpr[2] + 0u);
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_088DD43C;
      }
      goto L_088DD3DC;
    }
L_088DD3DC:
    ctx.set_gpr(4, 0u + static_cast<std::uint32_t>(52));
    ctx.set_gpr(5, 0u + 0u);
    ctx.set_gpr(6, ctx.gpr[16] + 0u);
    ctx.set_gpr(31, 0x088DD3F0u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0080_entry, 80u, 542u, 0x089466FCu>(ctx, &aot_mem) && ctx.pc == 0x088DD3F0u) goto L_088DD3F0;
    return;
L_088DD3F0:
    ctx.set_gpr(16, ctx.gpr[2] + 0u);
    { const bool branch_taken = ctx.gpr[16] == 0u;
    // nop
      if (branch_taken) {
          goto L_088DD410;
      }
      goto L_088DD3FC;
    }
L_088DD3FC:
    ctx.set_gpr(4, ctx.gpr[16] + 0u);
    ctx.set_gpr(5, 0u + static_cast<std::uint32_t>(1));
    ctx.set_gpr(31, 0x088DD40Cu);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0085_entry, 85u, 514u, 0x0895A274u>(ctx, &aot_mem) && ctx.pc == 0x088DD40Cu) goto L_088DD40C;
    return;
L_088DD40C:
    ctx.set_gpr(16, ctx.gpr[2] + 0u);
    goto L_088DD410;
L_088DD410:
    ctx.set_gpr(4, ctx.gpr[16] + 0u);
    ctx.set_gpr(25, rt.memory().aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(0)));
    ctx.set_gpr(25, rt.memory().aot_load32(ctx.gpr[25] + static_cast<std::uint32_t>(44)));
    jump_target = ctx.gpr[25];
    ctx.set_gpr(31, 0x088DD424u);
    // nop
    ctx.pc = jump_target;
    if (rt.invoke_chained_call(ctx, &aot_mem) && ctx.pc == 0x088DD424u) goto L_088DD424;
    return;
L_088DD424:
    ctx.set_gpr(4, ctx.gpr[16] + 0u);
    ctx.set_gpr(5, 0u + 0u);
    ctx.set_gpr(25, rt.memory().aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(0)));
    ctx.set_gpr(25, rt.memory().aot_load32(ctx.gpr[25] + static_cast<std::uint32_t>(36)));
    jump_target = ctx.gpr[25];
    ctx.set_gpr(31, 0x088DD43Cu);
    // nop
    ctx.pc = jump_target;
    if (rt.invoke_chained_call(ctx, &aot_mem) && ctx.pc == 0x088DD43Cu) goto L_088DD43C;
    return;
L_088DD43C:
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
L_088DD454:
    ctx.set_gpr(29, ctx.gpr[29] + static_cast<std::uint32_t>(-16));
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(12), ctx.gpr[31]);
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(8), ctx.gpr[17]);
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(4), ctx.gpr[16]);
    ctx.set_gpr(17, ctx.gpr[4] + 0u);
    ctx.set_gpr(16, ctx.gpr[5] + 0u);
    ctx.set_gpr(31, 0x088DD474u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0064_entry, 64u, 444u, 0x08905FF0u>(ctx, &aot_mem) && ctx.pc == 0x088DD474u) goto L_088DD474;
    return;
L_088DD474:
    ctx.set_gpr(2, rt.memory().aot_load8(ctx.gpr[2] + static_cast<std::uint32_t>(0)));
    { const bool branch_taken = ctx.gpr[2] == 0u;
    // nop
      if (branch_taken) {
          goto L_088DD4A0;
      }
      goto L_088DD480;
    }
L_088DD480:
    ctx.set_gpr(31, 0x088DD488u);
    // nop
    goto L_088DD58C;
L_088DD488:
    ctx.set_gpr(4, ctx.gpr[17] + 0u);
    ctx.set_gpr(5, ctx.gpr[16] + 0u);
    ctx.set_gpr(31, 0x088DD498u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0080_entry, 80u, 848u, 0x08947E90u>(ctx, &aot_mem) && ctx.pc == 0x088DD498u) goto L_088DD498;
    return;
L_088DD498:
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_088DD4C8;
      }
      goto L_088DD4A0;
    }
L_088DD4A0:
    ctx.set_gpr(4, 0u + static_cast<std::uint32_t>(52));
    ctx.set_gpr(5, 0u + 0u);
    ctx.set_gpr(31, 0x088DD4B0u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0080_entry, 80u, 552u, 0x08946784u>(ctx, &aot_mem) && ctx.pc == 0x088DD4B0u) goto L_088DD4B0;
    return;
L_088DD4B0:
    { const bool branch_taken = ctx.gpr[2] == 0u;
    // nop
      if (branch_taken) {
          goto L_088DD4C8;
      }
      goto L_088DD4B8;
    }
L_088DD4B8:
    ctx.set_gpr(4, ctx.gpr[2] + 0u);
    ctx.set_gpr(5, ctx.gpr[17] + 0u);
    ctx.set_gpr(31, 0x088DD4C8u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0085_entry, 85u, 520u, 0x0895A310u>(ctx, &aot_mem) && ctx.pc == 0x088DD4C8u) goto L_088DD4C8;
    return;
L_088DD4C8:
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
L_088DD4E0:
    ctx.set_gpr(29, ctx.gpr[29] + static_cast<std::uint32_t>(-16));
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(12), ctx.gpr[31]);
    ctx.set_gpr(2, 2245u << 16u);
    ctx.set_gpr(2, rt.memory().aot_load32(ctx.gpr[2] + static_cast<std::uint32_t>(27072)));
    { const bool branch_taken = ctx.gpr[2] == 0u;
    // nop
      if (branch_taken) {
          goto L_088DD50C;
      }
      goto L_088DD4F8;
    }
L_088DD4F8:
    ctx.set_gpr(2, rt.memory().aot_load32(ctx.gpr[2] + static_cast<std::uint32_t>(36)));
    ctx.set_gpr(2, ctx.gpr[2] & 4u);
    ctx.set_gpr(2, 0u < ctx.gpr[2] ? 1u : 0u);
    { const bool branch_taken = ctx.gpr[2] != 0u;
    // nop
      if (branch_taken) {
          goto L_088DD514;
      }
      goto L_088DD50C;
    }
L_088DD50C:
    ctx.set_gpr(31, 0x088DD514u);
    // nop
    goto L_088DD58C;
L_088DD514:
    ctx.set_gpr(2, 2245u << 16u);
    ctx.set_gpr(2, rt.memory().aot_load32(ctx.gpr[2] + static_cast<std::uint32_t>(27072)));
    ctx.set_gpr(31, rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(12)));
    ctx.set_gpr(29, ctx.gpr[29] + static_cast<std::uint32_t>(16));
    jump_target = ctx.gpr[31];
    // nop
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_088DD52C:
    ctx.set_gpr(29, ctx.gpr[29] + static_cast<std::uint32_t>(-80));
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(12), ctx.gpr[31]);
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(8), ctx.gpr[16]);
    ctx.set_gpr(4, ctx.gpr[29] + static_cast<std::uint32_t>(28));
    ctx.set_gpr(31, 0x088DD544u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0085_entry, 85u, 518u, 0x0895A2C4u>(ctx, &aot_mem) && ctx.pc == 0x088DD544u) goto L_088DD544;
    return;
L_088DD544:
    ctx.set_gpr(31, 0x088DD54Cu);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0064_entry, 64u, 444u, 0x08905FF0u>(ctx, &aot_mem) && ctx.pc == 0x088DD54Cu) goto L_088DD54C;
    return;
L_088DD54C:
    ctx.set_gpr(2, rt.memory().aot_load32(ctx.gpr[2] + static_cast<std::uint32_t>(932)));
    ctx.set_gpr(2, ctx.gpr[2] + ctx.gpr[29]);
    ctx.set_gpr(16, rt.memory().aot_load32(ctx.gpr[2] + static_cast<std::uint32_t>(28)));
    ctx.set_gpr(2, 2232u << 16u);
    ctx.set_gpr(2, ctx.gpr[2] + static_cast<std::uint32_t>(-5492));
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(28), ctx.gpr[2]);
    ctx.set_gpr(4, ctx.gpr[29] + static_cast<std::uint32_t>(40));
    ctx.set_gpr(5, 0u + static_cast<std::uint32_t>(-1));
    ctx.set_gpr(31, 0x088DD574u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0020_entry, 20u, 288u, 0x088555D0u>(ctx, &aot_mem) && ctx.pc == 0x088DD574u) goto L_088DD574;
    return;
L_088DD574:
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
L_088DD58C:
    ctx.set_gpr(29, ctx.gpr[29] + static_cast<std::uint32_t>(-16));
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(12), ctx.gpr[31]);
    ctx.set_gpr(4, 2190u << 16u);
    ctx.set_gpr(4, ctx.gpr[4] + static_cast<std::uint32_t>(-10828));
    ctx.set_gpr(31, 0x088DD5A4u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0080_entry, 80u, 286u, 0x08945508u>(ctx, &aot_mem) && ctx.pc == 0x088DD5A4u) goto L_088DD5A4;
    return;
L_088DD5A4:
    ctx.set_gpr(31, rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(12)));
    ctx.set_gpr(29, ctx.gpr[29] + static_cast<std::uint32_t>(16));
    jump_target = ctx.gpr[31];
    // nop
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_088DD5B4:
    ctx.set_gpr(29, ctx.gpr[29] + static_cast<std::uint32_t>(-32));
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(28), ctx.gpr[31]);
    ctx.set_gpr(2, 2190u << 16u);
    ctx.set_gpr(2, ctx.gpr[2] + static_cast<std::uint32_t>(-10680));
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(0), ctx.gpr[2]);
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(4), 0u);
    ctx.set_gpr(2, 2227u << 16u);
    ctx.set_gpr(2, ctx.gpr[2] + static_cast<std::uint32_t>(24280));
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(8), ctx.gpr[2]);
    ctx.set_gpr(4, 0u + 0u);
    ctx.set_gpr(5, 2245u << 16u);
    ctx.set_gpr(5, ctx.gpr[5] + static_cast<std::uint32_t>(27072));
    ctx.set_gpr(6, 2190u << 16u);
    ctx.set_gpr(6, ctx.gpr[6] + static_cast<std::uint32_t>(-14380));
    ctx.set_gpr(7, 2190u << 16u);
    ctx.set_gpr(7, ctx.gpr[7] + static_cast<std::uint32_t>(-20896));
    ctx.set_gpr(8, 2190u << 16u);
    ctx.set_gpr(8, ctx.gpr[8] + static_cast<std::uint32_t>(-10712));
    ctx.set_gpr(9, 2227u << 16u);
    ctx.set_gpr(9, ctx.gpr[9] + static_cast<std::uint32_t>(24288));
    ctx.set_gpr(10, 0u + static_cast<std::uint32_t>(52));
    ctx.set_gpr(11, 2190u << 16u);
    ctx.set_gpr(11, ctx.gpr[11] + static_cast<std::uint32_t>(-10964));
    ctx.set_gpr(31, 0x088DD618u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0080_entry, 80u, 294u, 0x08945594u>(ctx, &aot_mem) && ctx.pc == 0x088DD618u) goto L_088DD618;
    return;
L_088DD618:
    ctx.set_gpr(31, rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(28)));
    ctx.set_gpr(29, ctx.gpr[29] + static_cast<std::uint32_t>(32));
    jump_target = ctx.gpr[31];
    // nop
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_088DD628:
    ctx.set_gpr(29, ctx.gpr[29] + static_cast<std::uint32_t>(-16));
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(12), ctx.gpr[31]);
    ctx.set_gpr(31, 0x088DD638u);
    // nop
    goto L_088DD4E0;
L_088DD638:
    ctx.set_gpr(31, rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(12)));
    ctx.set_gpr(29, ctx.gpr[29] + static_cast<std::uint32_t>(16));
    jump_target = ctx.gpr[31];
    // nop
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_088DD648:
    ctx.set_gpr(29, ctx.gpr[29] + static_cast<std::uint32_t>(-16));
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(12), ctx.gpr[31]);
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(8), ctx.gpr[18]);
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(4), ctx.gpr[17]);
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(0), ctx.gpr[16]);
    ctx.set_gpr(2, 2245u << 16u);
    ctx.set_gpr(16, rt.memory().aot_load32(ctx.gpr[2] + static_cast<std::uint32_t>(27072)));
    ctx.set_gpr(4, ctx.gpr[16] + 0u);
    ctx.set_gpr(5, 2227u << 16u);
    ctx.set_gpr(5, ctx.gpr[5] + static_cast<std::uint32_t>(23296));
    ctx.set_gpr(31, 0x088DD678u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0080_entry, 80u, 149u, 0x08944B68u>(ctx, &aot_mem) && ctx.pc == 0x088DD678u) goto L_088DD678;
    return;
L_088DD678:
    ctx.set_gpr(17, ctx.gpr[2] + 0u);
    ctx.set_gpr(4, rt.memory().aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(40)));
    ctx.set_gpr(5, ctx.gpr[17] + 0u);
    ctx.set_gpr(31, 0x088DD68Cu);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0072_entry, 72u, 700u, 0x08927138u>(ctx, &aot_mem) && ctx.pc == 0x088DD68Cu) goto L_088DD68C;
    return;
L_088DD68C:
    ctx.set_gpr(18, ctx.gpr[2] + 0u);
    ctx.set_gpr(4, ctx.gpr[17] + 0u);
    ctx.set_gpr(5, 0u + static_cast<std::uint32_t>(1));
    ctx.set_gpr(25, rt.memory().aot_load32(ctx.gpr[17] + static_cast<std::uint32_t>(0)));
    ctx.set_gpr(25, rt.memory().aot_load32(ctx.gpr[25] + static_cast<std::uint32_t>(84)));
    jump_target = ctx.gpr[25];
    ctx.set_gpr(31, 0x088DD6A8u);
    // nop
    ctx.pc = jump_target;
    if (rt.invoke_chained_call(ctx, &aot_mem) && ctx.pc == 0x088DD6A8u) goto L_088DD6A8;
    return;
L_088DD6A8:
    ctx.set_gpr(17, ctx.gpr[2] + 0u);
    ctx.set_gpr(4, ctx.gpr[17] + 0u);
    ctx.set_gpr(5, 0u + static_cast<std::uint32_t>(2));
    ctx.set_gpr(31, 0x088DD6BCu);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0066_entry, 66u, 168u, 0x0890CA1Cu>(ctx, &aot_mem) && ctx.pc == 0x088DD6BCu) goto L_088DD6BC;
    return;
L_088DD6BC:
    ctx.set_gpr(2, 2245u << 16u);
    ctx.set_gpr(2, ctx.gpr[2] + static_cast<std::uint32_t>(27080));
    rt.memory().aot_store32(ctx.gpr[17] + static_cast<std::uint32_t>(28), ctx.gpr[2]);
    ctx.set_gpr(4, ctx.gpr[16] + 0u);
    ctx.set_gpr(5, ctx.gpr[18] + 0u);
    ctx.set_gpr(6, ctx.gpr[17] + 0u);
    ctx.set_gpr(31, 0x088DD6DCu);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0080_entry, 80u, 145u, 0x08944AF0u>(ctx, &aot_mem) && ctx.pc == 0x088DD6DCu) goto L_088DD6DC;
    return;
L_088DD6DC:
    ctx.set_gpr(2, rt.memory().aot_load32(ctx.gpr[17] + static_cast<std::uint32_t>(4)));
    ctx.set_gpr(2, ctx.gpr[2] + static_cast<std::uint32_t>(-1));
    rt.memory().aot_store32(ctx.gpr[17] + static_cast<std::uint32_t>(4), ctx.gpr[2]);
    ctx.set_gpr(2, ctx.gpr[2] << 10u);
    ctx.set_gpr(2, ctx.gpr[2] >> 10u);
    { const bool branch_taken = ctx.gpr[2] != 0u;
    // nop
      if (branch_taken) {
          goto L_088DD704;
      }
      goto L_088DD6F8;
    }
L_088DD6F8:
    ctx.set_gpr(4, ctx.gpr[17] + 0u);
    ctx.set_gpr(31, 0x088DD704u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0080_entry, 80u, 556u, 0x089467C8u>(ctx, &aot_mem) && ctx.pc == 0x088DD704u) goto L_088DD704;
    return;
L_088DD704:
    ctx.set_gpr(4, ctx.gpr[16] + 0u);
    ctx.set_gpr(5, 2227u << 16u);
    ctx.set_gpr(5, ctx.gpr[5] + static_cast<std::uint32_t>(24120));
    ctx.set_gpr(31, 0x088DD718u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0080_entry, 80u, 149u, 0x08944B68u>(ctx, &aot_mem) && ctx.pc == 0x088DD718u) goto L_088DD718;
    return;
L_088DD718:
    ctx.set_gpr(17, ctx.gpr[2] + 0u);
    ctx.set_gpr(4, rt.memory().aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(40)));
    ctx.set_gpr(5, ctx.gpr[17] + 0u);
    ctx.set_gpr(31, 0x088DD72Cu);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0072_entry, 72u, 700u, 0x08927138u>(ctx, &aot_mem) && ctx.pc == 0x088DD72Cu) goto L_088DD72C;
    return;
L_088DD72C:
    ctx.set_gpr(18, ctx.gpr[2] + 0u);
    ctx.set_gpr(4, ctx.gpr[17] + 0u);
    ctx.set_gpr(5, 0u + static_cast<std::uint32_t>(1));
    ctx.set_gpr(25, rt.memory().aot_load32(ctx.gpr[17] + static_cast<std::uint32_t>(0)));
    ctx.set_gpr(25, rt.memory().aot_load32(ctx.gpr[25] + static_cast<std::uint32_t>(84)));
    jump_target = ctx.gpr[25];
    ctx.set_gpr(31, 0x088DD748u);
    // nop
    ctx.pc = jump_target;
    if (rt.invoke_chained_call(ctx, &aot_mem) && ctx.pc == 0x088DD748u) goto L_088DD748;
    return;
L_088DD748:
    ctx.set_gpr(17, ctx.gpr[2] + 0u);
    ctx.set_gpr(4, ctx.gpr[17] + 0u);
    ctx.set_gpr(5, 0u + static_cast<std::uint32_t>(1));
    ctx.set_gpr(31, 0x088DD75Cu);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0065_entry, 65u, 745u, 0x0890B3DCu>(ctx, &aot_mem) && ctx.pc == 0x088DD75Cu) goto L_088DD75C;
    return;
L_088DD75C:
    ctx.set_gpr(2, 2245u << 16u);
    ctx.set_gpr(2, ctx.gpr[2] + static_cast<std::uint32_t>(27084));
    rt.memory().aot_store32(ctx.gpr[17] + static_cast<std::uint32_t>(28), ctx.gpr[2]);
    ctx.set_gpr(4, ctx.gpr[16] + 0u);
    ctx.set_gpr(5, ctx.gpr[18] + 0u);
    ctx.set_gpr(6, ctx.gpr[17] + 0u);
    ctx.set_gpr(31, 0x088DD77Cu);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0080_entry, 80u, 145u, 0x08944AF0u>(ctx, &aot_mem) && ctx.pc == 0x088DD77Cu) goto L_088DD77C;
    return;
L_088DD77C:
    ctx.set_gpr(3, rt.memory().aot_load32(ctx.gpr[17] + static_cast<std::uint32_t>(4)));
    ctx.set_gpr(3, ctx.gpr[3] + static_cast<std::uint32_t>(-1));
    rt.memory().aot_store32(ctx.gpr[17] + static_cast<std::uint32_t>(4), ctx.gpr[3]);
    ctx.set_gpr(3, ctx.gpr[3] << 10u);
    ctx.set_gpr(3, ctx.gpr[3] >> 10u);
    { const bool branch_taken = ctx.gpr[3] != 0u;
    // nop
      if (branch_taken) {
          goto L_088DD7A4;
      }
      goto L_088DD798;
    }
L_088DD798:
    ctx.set_gpr(4, ctx.gpr[17] + 0u);
    ctx.set_gpr(31, 0x088DD7A4u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0080_entry, 80u, 556u, 0x089467C8u>(ctx, &aot_mem) && ctx.pc == 0x088DD7A4u) goto L_088DD7A4;
    return;
L_088DD7A4:
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
L_088DD7C0:
    ctx.set_gpr(29, ctx.gpr[29] + static_cast<std::uint32_t>(-16));
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(12), ctx.gpr[31]);
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(8), ctx.gpr[16]);
    ctx.set_gpr(3, 2245u << 16u);
    ctx.set_gpr(3, rt.memory().aot_load32(ctx.gpr[3] + static_cast<std::uint32_t>(27076)));
    { const bool branch_taken = ctx.gpr[3] != 0u;
    // nop
      if (branch_taken) {
          goto L_088DD888;
      }
      goto L_088DD7DC;
    }
L_088DD7DC:
    ctx.set_gpr(31, 0x088DD7E4u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0078_entry, 78u, 217u, 0x0893CDECu>(ctx, &aot_mem) && ctx.pc == 0x088DD7E4u) goto L_088DD7E4;
    return;
L_088DD7E4:
    ctx.set_gpr(4, rt.memory().aot_load32(ctx.gpr[2] + static_cast<std::uint32_t>(0)));
    ctx.set_gpr(31, 0x088DD7F0u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0078_entry, 78u, 199u, 0x0893CC68u>(ctx, &aot_mem) && ctx.pc == 0x088DD7F0u) goto L_088DD7F0;
    return;
L_088DD7F0:
    ctx.set_gpr(3, 2245u << 16u);
    ctx.set_gpr(4, rt.memory().aot_load32(ctx.gpr[3] + static_cast<std::uint32_t>(27072)));
    ctx.set_gpr(5, ctx.gpr[2] + 0u);
    ctx.set_gpr(31, 0x088DD804u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0080_entry, 80u, 50u, 0x089443D4u>(ctx, &aot_mem) && ctx.pc == 0x088DD804u) goto L_088DD804;
    return;
L_088DD804:
    ctx.set_gpr(3, 2245u << 16u);
    rt.memory().aot_store32(ctx.gpr[3] + static_cast<std::uint32_t>(27076), ctx.gpr[2]);
    ctx.set_gpr(16, ctx.gpr[2] + 0u);
    { const bool branch_taken = ctx.gpr[16] == 0u;
    // nop
      if (branch_taken) {
          goto L_088DD888;
      }
      goto L_088DD818;
    }
L_088DD818:
    ctx.set_gpr(31, 0x088DD820u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0079_entry, 79u, 538u, 0x089425E0u>(ctx, &aot_mem) && ctx.pc == 0x088DD820u) goto L_088DD820;
    return;
L_088DD820:
    ctx.set_gpr(4, ctx.gpr[2] + 0u);
    ctx.set_gpr(5, ctx.gpr[16] + 0u);
    ctx.set_gpr(31, 0x088DD830u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0072_entry, 72u, 751u, 0x08927514u>(ctx, &aot_mem) && ctx.pc == 0x088DD830u) goto L_088DD830;
    return;
L_088DD830:
    ctx.set_gpr(2, 2245u << 16u);
    ctx.set_gpr(4, rt.memory().aot_load32(ctx.gpr[2] + static_cast<std::uint32_t>(27076)));
    ctx.set_gpr(2, rt.memory().aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(4)));
    ctx.set_gpr(2, ctx.gpr[2] + static_cast<std::uint32_t>(-1));
    rt.memory().aot_store32(ctx.gpr[4] + static_cast<std::uint32_t>(4), ctx.gpr[2]);
    ctx.set_gpr(2, ctx.gpr[2] << 10u);
    ctx.set_gpr(2, ctx.gpr[2] >> 10u);
    { const bool branch_taken = ctx.gpr[2] != 0u;
    // nop
      if (branch_taken) {
          goto L_088DD85C;
      }
      goto L_088DD854;
    }
L_088DD854:
    ctx.set_gpr(31, 0x088DD85Cu);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0080_entry, 80u, 556u, 0x089467C8u>(ctx, &aot_mem) && ctx.pc == 0x088DD85Cu) goto L_088DD85C;
    return;
L_088DD85C:
    ctx.set_gpr(31, 0x088DD864u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0079_entry, 79u, 538u, 0x089425E0u>(ctx, &aot_mem) && ctx.pc == 0x088DD864u) goto L_088DD864;
    return;
L_088DD864:
    ctx.set_gpr(2, rt.memory().aot_load32(ctx.gpr[2] + static_cast<std::uint32_t>(12)));
    ctx.set_gpr(3, ctx.gpr[2] + static_cast<std::uint32_t>(-1));
    ctx.set_gpr(2, 2245u << 16u);
    ctx.set_gpr(2, rt.memory().aot_load32(ctx.gpr[2] + static_cast<std::uint32_t>(27076)));
    rt.memory().aot_store16(ctx.gpr[2] + static_cast<std::uint32_t>(18), static_cast<std::uint16_t>(ctx.gpr[3]));
    ctx.set_gpr(2, 2245u << 16u);
    ctx.set_gpr(4, rt.memory().aot_load32(ctx.gpr[2] + static_cast<std::uint32_t>(27076)));
    ctx.set_gpr(31, 0x088DD888u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0079_entry, 79u, 598u, 0x08942A18u>(ctx, &aot_mem) && ctx.pc == 0x088DD888u) goto L_088DD888;
    return;
L_088DD888:
    ctx.set_gpr(31, rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(12)));
    ctx.set_gpr(16, rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(8)));
    ctx.set_gpr(29, ctx.gpr[29] + static_cast<std::uint32_t>(16));
    jump_target = ctx.gpr[31];
    // nop
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_088DD89C:
    ctx.set_gpr(29, ctx.gpr[29] + static_cast<std::uint32_t>(-16));
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(12), ctx.gpr[31]);
    ctx.set_gpr(2, 2245u << 16u);
    ctx.set_gpr(2, rt.memory().aot_load32(ctx.gpr[2] + static_cast<std::uint32_t>(27076)));
    { const bool branch_taken = ctx.gpr[2] != 0u;
    // nop
      if (branch_taken) {
          goto L_088DD8BC;
      }
      goto L_088DD8B4;
    }
L_088DD8B4:
    ctx.set_gpr(31, 0x088DD8BCu);
    // nop
    goto L_088DD58C;
L_088DD8BC:
    ctx.set_gpr(2, 2245u << 16u);
    ctx.set_gpr(2, rt.memory().aot_load32(ctx.gpr[2] + static_cast<std::uint32_t>(27076)));
    ctx.set_gpr(31, rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(12)));
    ctx.set_gpr(29, ctx.gpr[29] + static_cast<std::uint32_t>(16));
    jump_target = ctx.gpr[31];
    // nop
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_088DD8D4:
    ctx.set_gpr(29, ctx.gpr[29] + static_cast<std::uint32_t>(-16));
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(12), ctx.gpr[31]);
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(8), ctx.gpr[16]);
    ctx.set_gpr(16, ctx.gpr[4] + 0u);
    ctx.set_gpr(31, 0x088DD8ECu);
    // nop
    goto L_088DD9C8;
L_088DD8EC:
    ctx.set_gpr(2, 2245u << 16u);
    ctx.set_gpr(4, rt.memory().aot_load32(ctx.gpr[2] + static_cast<std::uint32_t>(27088)));
    ctx.set_gpr(5, ctx.gpr[16] + 0u);
    ctx.set_gpr(31, 0x088DD900u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0080_entry, 80u, 50u, 0x089443D4u>(ctx, &aot_mem) && ctx.pc == 0x088DD900u) goto L_088DD900;
    return;
L_088DD900:
    ctx.set_gpr(31, rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(12)));
    ctx.set_gpr(16, rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(8)));
    ctx.set_gpr(29, ctx.gpr[29] + static_cast<std::uint32_t>(16));
    jump_target = ctx.gpr[31];
    // nop
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_088DD914:
    ctx.set_gpr(29, ctx.gpr[29] + static_cast<std::uint32_t>(-16));
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(12), ctx.gpr[31]);
    ctx.set_gpr(2, 2245u << 16u);
    ctx.set_gpr(2, rt.memory().aot_load32(ctx.gpr[2] + static_cast<std::uint32_t>(27088)));
    { const bool branch_taken = ctx.gpr[2] == 0u;
    // nop
      if (branch_taken) {
          goto L_088DD940;
      }
      goto L_088DD92C;
    }
L_088DD92C:
    ctx.set_gpr(2, rt.memory().aot_load32(ctx.gpr[2] + static_cast<std::uint32_t>(36)));
    ctx.set_gpr(2, ctx.gpr[2] & 4u);
    ctx.set_gpr(2, 0u < ctx.gpr[2] ? 1u : 0u);
    { const bool branch_taken = ctx.gpr[2] != 0u;
    // nop
      if (branch_taken) {
          goto L_088DD948;
      }
      goto L_088DD940;
    }
L_088DD940:
    ctx.set_gpr(31, 0x088DD948u);
    // nop
    goto L_088DD9C8;
L_088DD948:
    ctx.set_gpr(2, 2245u << 16u);
    ctx.set_gpr(2, rt.memory().aot_load32(ctx.gpr[2] + static_cast<std::uint32_t>(27088)));
    ctx.set_gpr(31, rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(12)));
    ctx.set_gpr(29, ctx.gpr[29] + static_cast<std::uint32_t>(16));
    jump_target = ctx.gpr[31];
    // nop
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_088DD960:
    ctx.set_gpr(29, ctx.gpr[29] + static_cast<std::uint32_t>(-80));
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(12), ctx.gpr[31]);
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(8), ctx.gpr[16]);
    ctx.set_gpr(4, ctx.gpr[29] + static_cast<std::uint32_t>(20));
    ctx.set_gpr(31, 0x088DD978u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0079_entry, 79u, 505u, 0x089422D0u>(ctx, &aot_mem) && ctx.pc == 0x088DD978u) goto L_088DD978;
    return;
L_088DD978:
    ctx.set_gpr(2, 2232u << 16u);
    ctx.set_gpr(2, ctx.gpr[2] + static_cast<std::uint32_t>(-8904));
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(20), ctx.gpr[2]);
    ctx.set_gpr(31, 0x088DD98Cu);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0064_entry, 64u, 444u, 0x08905FF0u>(ctx, &aot_mem) && ctx.pc == 0x088DD98Cu) goto L_088DD98C;
    return;
L_088DD98C:
    ctx.set_gpr(2, rt.memory().aot_load32(ctx.gpr[2] + static_cast<std::uint32_t>(932)));
    ctx.set_gpr(2, ctx.gpr[2] + ctx.gpr[29]);
    ctx.set_gpr(16, rt.memory().aot_load32(ctx.gpr[2] + static_cast<std::uint32_t>(20)));
    ctx.set_gpr(2, 2232u << 16u);
    ctx.set_gpr(2, ctx.gpr[2] + static_cast<std::uint32_t>(-5492));
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(20), ctx.gpr[2]);
    ctx.set_gpr(4, ctx.gpr[29] + static_cast<std::uint32_t>(32));
    ctx.set_gpr(31, 0x088DD9B0u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0019_entry, 19u, 764u, 0x08853094u>(ctx, &aot_mem) && ctx.pc == 0x088DD9B0u) goto L_088DD9B0;
    return;
L_088DD9B0:
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
L_088DD9C8:
    ctx.set_gpr(29, ctx.gpr[29] + static_cast<std::uint32_t>(-16));
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(12), ctx.gpr[31]);
    ctx.set_gpr(4, 2190u << 16u);
    ctx.set_gpr(4, ctx.gpr[4] + static_cast<std::uint32_t>(-9744));
    ctx.set_gpr(31, 0x088DD9E0u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0080_entry, 80u, 286u, 0x08945508u>(ctx, &aot_mem) && ctx.pc == 0x088DD9E0u) goto L_088DD9E0;
    return;
L_088DD9E0:
    ctx.set_gpr(31, rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(12)));
    ctx.set_gpr(29, ctx.gpr[29] + static_cast<std::uint32_t>(16));
    jump_target = ctx.gpr[31];
    // nop
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_088DD9F0:
    ctx.set_gpr(29, ctx.gpr[29] + static_cast<std::uint32_t>(-32));
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(28), ctx.gpr[31]);
    ctx.set_gpr(31, 0x088DDA00u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0052_entry, 52u, 154u, 0x088D49C4u>(ctx, &aot_mem) && ctx.pc == 0x088DDA00u) goto L_088DDA00;
    return;
L_088DDA00:
    ctx.set_gpr(2, 2190u << 16u);
    ctx.set_gpr(2, ctx.gpr[2] + static_cast<std::uint32_t>(-9588));
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(0), ctx.gpr[2]);
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(4), 0u);
    ctx.set_gpr(2, 2227u << 16u);
    ctx.set_gpr(2, ctx.gpr[2] + static_cast<std::uint32_t>(24308));
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(8), ctx.gpr[2]);
    ctx.set_gpr(4, 0u + 0u);
    ctx.set_gpr(5, 2245u << 16u);
    ctx.set_gpr(5, ctx.gpr[5] + static_cast<std::uint32_t>(27088));
    ctx.set_gpr(6, 2190u << 16u);
    ctx.set_gpr(6, ctx.gpr[6] + static_cast<std::uint32_t>(-19704));
    ctx.set_gpr(7, 2189u << 16u);
    ctx.set_gpr(7, ctx.gpr[7] + static_cast<std::uint32_t>(31824));
    ctx.set_gpr(8, 2190u << 16u);
    ctx.set_gpr(8, ctx.gpr[8] + static_cast<std::uint32_t>(-9620));
    ctx.set_gpr(9, 2227u << 16u);
    ctx.set_gpr(9, ctx.gpr[9] + static_cast<std::uint32_t>(24316));
    ctx.set_gpr(10, 0u + static_cast<std::uint32_t>(60));
    ctx.set_gpr(11, 2190u << 16u);
    ctx.set_gpr(11, ctx.gpr[11] + static_cast<std::uint32_t>(-9888));
    ctx.set_gpr(31, 0x088DDA5Cu);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0080_entry, 80u, 294u, 0x08945594u>(ctx, &aot_mem) && ctx.pc == 0x088DDA5Cu) goto L_088DDA5C;
    return;
L_088DDA5C:
    ctx.set_gpr(31, rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(28)));
    ctx.set_gpr(29, ctx.gpr[29] + static_cast<std::uint32_t>(32));
    jump_target = ctx.gpr[31];
    // nop
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_088DDA6C:
    ctx.set_gpr(29, ctx.gpr[29] + static_cast<std::uint32_t>(-16));
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(12), ctx.gpr[31]);
    ctx.set_gpr(31, 0x088DDA7Cu);
    // nop
    goto L_088DD914;
L_088DDA7C:
    ctx.set_gpr(31, rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(12)));
    ctx.set_gpr(29, ctx.gpr[29] + static_cast<std::uint32_t>(16));
    jump_target = ctx.gpr[31];
    // nop
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_088DDA8C:
    ctx.set_gpr(29, ctx.gpr[29] + static_cast<std::uint32_t>(-32));
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(28), ctx.gpr[31]);
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(24), ctx.gpr[19]);
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(20), ctx.gpr[18]);
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(16), ctx.gpr[17]);
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(12), ctx.gpr[16]);
    ctx.set_gpr(2, 2245u << 16u);
    ctx.set_gpr(16, rt.memory().aot_load32(ctx.gpr[2] + static_cast<std::uint32_t>(27088)));
    ctx.set_gpr(4, ctx.gpr[16] + 0u);
    ctx.set_gpr(31, 0x088DDAB8u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0080_entry, 80u, 236u, 0x089451A8u>(ctx, &aot_mem) && ctx.pc == 0x088DDAB8u) goto L_088DDAB8;
    return;
L_088DDAB8:
    ctx.set_gpr(18, ctx.gpr[2] + 0u);
    ctx.set_gpr(4, ctx.gpr[16] + 0u);
    ctx.set_gpr(5, 2227u << 16u);
    ctx.set_gpr(5, ctx.gpr[5] + static_cast<std::uint32_t>(24336));
    ctx.set_gpr(6, 0u + static_cast<std::uint32_t>(3));
    ctx.set_gpr(31, 0x088DDAD4u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0080_entry, 80u, 151u, 0x08944B98u>(ctx, &aot_mem) && ctx.pc == 0x088DDAD4u) goto L_088DDAD4;
    return;
L_088DDAD4:
    ctx.set_gpr(4, ctx.gpr[16] + 0u);
    ctx.set_gpr(5, 2227u << 16u);
    ctx.set_gpr(5, ctx.gpr[5] + static_cast<std::uint32_t>(20308));
    ctx.set_gpr(31, 0x088DDAE8u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0080_entry, 80u, 149u, 0x08944B68u>(ctx, &aot_mem) && ctx.pc == 0x088DDAE8u) goto L_088DDAE8;
    return;
L_088DDAE8:
    ctx.set_gpr(17, ctx.gpr[2] + 0u);
    ctx.set_gpr(4, rt.memory().aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(40)));
    ctx.set_gpr(5, ctx.gpr[17] + 0u);
    ctx.set_gpr(31, 0x088DDAFCu);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0072_entry, 72u, 700u, 0x08927138u>(ctx, &aot_mem) && ctx.pc == 0x088DDAFCu) goto L_088DDAFC;
    return;
L_088DDAFC:
    ctx.set_gpr(19, ctx.gpr[2] + 0u);
    ctx.set_gpr(4, ctx.gpr[17] + 0u);
    ctx.set_gpr(5, 0u + static_cast<std::uint32_t>(1));
    ctx.set_gpr(25, rt.memory().aot_load32(ctx.gpr[17] + static_cast<std::uint32_t>(0)));
    ctx.set_gpr(25, rt.memory().aot_load32(ctx.gpr[25] + static_cast<std::uint32_t>(84)));
    jump_target = ctx.gpr[25];
    ctx.set_gpr(31, 0x088DDB18u);
    // nop
    ctx.pc = jump_target;
    if (rt.invoke_chained_call(ctx, &aot_mem) && ctx.pc == 0x088DDB18u) goto L_088DDB18;
    return;
L_088DDB18:
    ctx.set_gpr(17, ctx.gpr[2] + 0u);
    ctx.set_gpr(4, ctx.gpr[17] + 0u);
    ctx.set_gpr(5, 0u + static_cast<std::uint32_t>(1));
    ctx.set_gpr(31, 0x088DDB2Cu);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0086_entry, 86u, 843u, 0x0895F91Cu>(ctx, &aot_mem) && ctx.pc == 0x088DDB2Cu) goto L_088DDB2C;
    return;
L_088DDB2C:
    rt.memory().aot_store8(ctx.gpr[17] + static_cast<std::uint32_t>(38), static_cast<std::uint8_t>(0u));
    ctx.set_gpr(2, 2245u << 16u);
    ctx.set_gpr(2, ctx.gpr[2] + static_cast<std::uint32_t>(27096));
    rt.memory().aot_store32(ctx.gpr[17] + static_cast<std::uint32_t>(28), ctx.gpr[2]);
    ctx.set_gpr(4, ctx.gpr[16] + 0u);
    ctx.set_gpr(5, ctx.gpr[19] + 0u);
    ctx.set_gpr(6, ctx.gpr[17] + 0u);
    ctx.set_gpr(31, 0x088DDB50u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0080_entry, 80u, 145u, 0x08944AF0u>(ctx, &aot_mem) && ctx.pc == 0x088DDB50u) goto L_088DDB50;
    return;
L_088DDB50:
    ctx.set_gpr(2, rt.memory().aot_load32(ctx.gpr[17] + static_cast<std::uint32_t>(4)));
    ctx.set_gpr(2, ctx.gpr[2] + static_cast<std::uint32_t>(-1));
    rt.memory().aot_store32(ctx.gpr[17] + static_cast<std::uint32_t>(4), ctx.gpr[2]);
    ctx.set_gpr(2, ctx.gpr[2] << 10u);
    ctx.set_gpr(2, ctx.gpr[2] >> 10u);
    { const bool branch_taken = ctx.gpr[2] != 0u;
    // nop
      if (branch_taken) {
          goto L_088DDB78;
      }
      goto L_088DDB6C;
    }
L_088DDB6C:
    ctx.set_gpr(4, ctx.gpr[17] + 0u);
    ctx.set_gpr(31, 0x088DDB78u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0080_entry, 80u, 556u, 0x089467C8u>(ctx, &aot_mem) && ctx.pc == 0x088DDB78u) goto L_088DDB78;
    return;
L_088DDB78:
    ctx.set_gpr(4, ctx.gpr[16] + 0u);
    ctx.set_gpr(5, ctx.gpr[18] + 0u);
    ctx.set_gpr(31, 0x088DDB88u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0080_entry, 80u, 148u, 0x08944B4Cu>(ctx, &aot_mem) && ctx.pc == 0x088DDB88u) goto L_088DDB88;
    return;
L_088DDB88:
    ctx.set_gpr(17, ctx.gpr[2] + 0u);
    ctx.set_gpr(4, ctx.gpr[17] + 0u);
    ctx.set_gpr(5, 0u + static_cast<std::uint32_t>(1));
    ctx.set_gpr(31, 0x088DDB9Cu);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0072_entry, 72u, 648u, 0x08926D64u>(ctx, &aot_mem) && ctx.pc == 0x088DDB9Cu) goto L_088DDB9C;
    return;
L_088DDB9C:
    rt.memory().aot_store8(ctx.gpr[17] + static_cast<std::uint32_t>(38), static_cast<std::uint8_t>(0u));
    ctx.set_gpr(4, ctx.gpr[16] + 0u);
    ctx.set_gpr(5, 2227u << 16u);
    ctx.set_gpr(5, ctx.gpr[5] + static_cast<std::uint32_t>(24392));
    ctx.set_gpr(6, 2227u << 16u);
    ctx.set_gpr(6, ctx.gpr[6] + static_cast<std::uint32_t>(24404));
    ctx.set_gpr(7, 2227u << 16u);
    ctx.set_gpr(7, ctx.gpr[7] + static_cast<std::uint32_t>(24416));
    ctx.set_gpr(8, ctx.gpr[18] + 0u);
    ctx.set_gpr(31, 0x088DDBC8u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0080_entry, 80u, 162u, 0x08944C7Cu>(ctx, &aot_mem) && ctx.pc == 0x088DDBC8u) goto L_088DDBC8;
    return;
L_088DDBC8:
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
L_088DDBE8:
    ctx.set_gpr(29, ctx.gpr[29] + static_cast<std::uint32_t>(-16));
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(12), ctx.gpr[31]);
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(8), ctx.gpr[16]);
    ctx.set_gpr(3, 2245u << 16u);
    ctx.set_gpr(3, rt.memory().aot_load32(ctx.gpr[3] + static_cast<std::uint32_t>(27092)));
    { const bool branch_taken = ctx.gpr[3] != 0u;
    // nop
      if (branch_taken) {
          goto L_088DDCB0;
      }
      goto L_088DDC04;
    }
L_088DDC04:
    ctx.set_gpr(31, 0x088DDC0Cu);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0078_entry, 78u, 217u, 0x0893CDECu>(ctx, &aot_mem) && ctx.pc == 0x088DDC0Cu) goto L_088DDC0C;
    return;
L_088DDC0C:
    ctx.set_gpr(4, rt.memory().aot_load32(ctx.gpr[2] + static_cast<std::uint32_t>(0)));
    ctx.set_gpr(31, 0x088DDC18u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0078_entry, 78u, 199u, 0x0893CC68u>(ctx, &aot_mem) && ctx.pc == 0x088DDC18u) goto L_088DDC18;
    return;
L_088DDC18:
    ctx.set_gpr(3, 2245u << 16u);
    ctx.set_gpr(4, rt.memory().aot_load32(ctx.gpr[3] + static_cast<std::uint32_t>(27088)));
    ctx.set_gpr(5, ctx.gpr[2] + 0u);
    ctx.set_gpr(31, 0x088DDC2Cu);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0080_entry, 80u, 50u, 0x089443D4u>(ctx, &aot_mem) && ctx.pc == 0x088DDC2Cu) goto L_088DDC2C;
    return;
L_088DDC2C:
    ctx.set_gpr(3, 2245u << 16u);
    rt.memory().aot_store32(ctx.gpr[3] + static_cast<std::uint32_t>(27092), ctx.gpr[2]);
    ctx.set_gpr(16, ctx.gpr[2] + 0u);
    { const bool branch_taken = ctx.gpr[16] == 0u;
    // nop
      if (branch_taken) {
          goto L_088DDCB0;
      }
      goto L_088DDC40;
    }
L_088DDC40:
    ctx.set_gpr(31, 0x088DDC48u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0079_entry, 79u, 538u, 0x089425E0u>(ctx, &aot_mem) && ctx.pc == 0x088DDC48u) goto L_088DDC48;
    return;
L_088DDC48:
    ctx.set_gpr(4, ctx.gpr[2] + 0u);
    ctx.set_gpr(5, ctx.gpr[16] + 0u);
    ctx.set_gpr(31, 0x088DDC58u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0072_entry, 72u, 751u, 0x08927514u>(ctx, &aot_mem) && ctx.pc == 0x088DDC58u) goto L_088DDC58;
    return;
L_088DDC58:
    ctx.set_gpr(2, 2245u << 16u);
    ctx.set_gpr(4, rt.memory().aot_load32(ctx.gpr[2] + static_cast<std::uint32_t>(27092)));
    ctx.set_gpr(2, rt.memory().aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(4)));
    ctx.set_gpr(2, ctx.gpr[2] + static_cast<std::uint32_t>(-1));
    rt.memory().aot_store32(ctx.gpr[4] + static_cast<std::uint32_t>(4), ctx.gpr[2]);
    ctx.set_gpr(2, ctx.gpr[2] << 10u);
    ctx.set_gpr(2, ctx.gpr[2] >> 10u);
    { const bool branch_taken = ctx.gpr[2] != 0u;
    // nop
      if (branch_taken) {
          goto L_088DDC84;
      }
      goto L_088DDC7C;
    }
L_088DDC7C:
    ctx.set_gpr(31, 0x088DDC84u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0080_entry, 80u, 556u, 0x089467C8u>(ctx, &aot_mem) && ctx.pc == 0x088DDC84u) goto L_088DDC84;
    return;
L_088DDC84:
    ctx.set_gpr(31, 0x088DDC8Cu);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0079_entry, 79u, 538u, 0x089425E0u>(ctx, &aot_mem) && ctx.pc == 0x088DDC8Cu) goto L_088DDC8C;
    return;
L_088DDC8C:
    ctx.set_gpr(2, rt.memory().aot_load32(ctx.gpr[2] + static_cast<std::uint32_t>(12)));
    ctx.set_gpr(3, ctx.gpr[2] + static_cast<std::uint32_t>(-1));
    ctx.set_gpr(2, 2245u << 16u);
    ctx.set_gpr(2, rt.memory().aot_load32(ctx.gpr[2] + static_cast<std::uint32_t>(27092)));
    rt.memory().aot_store16(ctx.gpr[2] + static_cast<std::uint32_t>(18), static_cast<std::uint16_t>(ctx.gpr[3]));
    ctx.set_gpr(2, 2245u << 16u);
    ctx.set_gpr(4, rt.memory().aot_load32(ctx.gpr[2] + static_cast<std::uint32_t>(27092)));
    ctx.set_gpr(31, 0x088DDCB0u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0079_entry, 79u, 598u, 0x08942A18u>(ctx, &aot_mem) && ctx.pc == 0x088DDCB0u) goto L_088DDCB0;
    return;
L_088DDCB0:
    ctx.set_gpr(31, rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(12)));
    ctx.set_gpr(16, rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(8)));
    ctx.set_gpr(29, ctx.gpr[29] + static_cast<std::uint32_t>(16));
    jump_target = ctx.gpr[31];
    // nop
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_088DDCC4:
    ctx.set_gpr(29, ctx.gpr[29] + static_cast<std::uint32_t>(-16));
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(12), ctx.gpr[31]);
    ctx.set_gpr(2, 2245u << 16u);
    ctx.set_gpr(2, rt.memory().aot_load32(ctx.gpr[2] + static_cast<std::uint32_t>(27092)));
    { const bool branch_taken = ctx.gpr[2] != 0u;
    // nop
      if (branch_taken) {
          goto L_088DDCE4;
      }
      goto L_088DDCDC;
    }
L_088DDCDC:
    ctx.set_gpr(31, 0x088DDCE4u);
    // nop
    goto L_088DD9C8;
L_088DDCE4:
    ctx.set_gpr(2, 2245u << 16u);
    ctx.set_gpr(2, rt.memory().aot_load32(ctx.gpr[2] + static_cast<std::uint32_t>(27092)));
    ctx.set_gpr(31, rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(12)));
    ctx.set_gpr(29, ctx.gpr[29] + static_cast<std::uint32_t>(16));
    jump_target = ctx.gpr[31];
    // nop
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_088DDCFC:
    ctx.set_gpr(29, ctx.gpr[29] + static_cast<std::uint32_t>(-16));
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(12), ctx.gpr[31]);
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(8), ctx.gpr[16]);
    ctx.set_gpr(16, ctx.gpr[4] + 0u);
    ctx.set_gpr(31, 0x088DDD14u);
    // nop
    goto L_088DDDF4;
L_088DDD14:
    ctx.set_gpr(2, 2245u << 16u);
    ctx.set_gpr(4, rt.memory().aot_load32(ctx.gpr[2] + static_cast<std::uint32_t>(27112)));
    ctx.set_gpr(5, ctx.gpr[16] + 0u);
    ctx.set_gpr(31, 0x088DDD28u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0080_entry, 80u, 50u, 0x089443D4u>(ctx, &aot_mem) && ctx.pc == 0x088DDD28u) goto L_088DDD28;
    return;
L_088DDD28:
    ctx.set_gpr(31, rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(12)));
    ctx.set_gpr(16, rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(8)));
    ctx.set_gpr(29, ctx.gpr[29] + static_cast<std::uint32_t>(16));
    jump_target = ctx.gpr[31];
    // nop
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_088DDD3C:
    ctx.set_gpr(29, ctx.gpr[29] + static_cast<std::uint32_t>(-16));
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(12), ctx.gpr[31]);
    ctx.set_gpr(2, 2245u << 16u);
    ctx.set_gpr(2, rt.memory().aot_load32(ctx.gpr[2] + static_cast<std::uint32_t>(27112)));
    { const bool branch_taken = ctx.gpr[2] == 0u;
    // nop
      if (branch_taken) {
          goto L_088DDD68;
      }
      goto L_088DDD54;
    }
L_088DDD54:
    ctx.set_gpr(2, rt.memory().aot_load32(ctx.gpr[2] + static_cast<std::uint32_t>(36)));
    ctx.set_gpr(2, ctx.gpr[2] & 4u);
    ctx.set_gpr(2, 0u < ctx.gpr[2] ? 1u : 0u);
    { const bool branch_taken = ctx.gpr[2] != 0u;
    // nop
      if (branch_taken) {
          goto L_088DDD70;
      }
      goto L_088DDD68;
    }
L_088DDD68:
    ctx.set_gpr(31, 0x088DDD70u);
    // nop
    goto L_088DDDF4;
L_088DDD70:
    ctx.set_gpr(2, 2245u << 16u);
    ctx.set_gpr(2, rt.memory().aot_load32(ctx.gpr[2] + static_cast<std::uint32_t>(27112)));
    ctx.set_gpr(31, rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(12)));
    ctx.set_gpr(29, ctx.gpr[29] + static_cast<std::uint32_t>(16));
    jump_target = ctx.gpr[31];
    // nop
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_088DDD88:
    ctx.set_gpr(29, ctx.gpr[29] + static_cast<std::uint32_t>(-80));
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(12), ctx.gpr[31]);
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(8), ctx.gpr[16]);
    ctx.set_gpr(4, ctx.gpr[29] + static_cast<std::uint32_t>(28));
    ctx.set_gpr(31, 0x088DDDA0u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0079_entry, 79u, 505u, 0x089422D0u>(ctx, &aot_mem) && ctx.pc == 0x088DDDA0u) goto L_088DDDA0;
    return;
L_088DDDA0:
    ctx.set_gpr(2, 2232u << 16u);
    ctx.set_gpr(2, ctx.gpr[2] + static_cast<std::uint32_t>(-9652));
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(28), ctx.gpr[2]);
    ctx.set_gpr(31, 0x088DDDB4u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0064_entry, 64u, 444u, 0x08905FF0u>(ctx, &aot_mem) && ctx.pc == 0x088DDDB4u) goto L_088DDDB4;
    return;
L_088DDDB4:
    ctx.set_gpr(2, rt.memory().aot_load32(ctx.gpr[2] + static_cast<std::uint32_t>(932)));
    ctx.set_gpr(2, ctx.gpr[2] + ctx.gpr[29]);
    ctx.set_gpr(16, rt.memory().aot_load32(ctx.gpr[2] + static_cast<std::uint32_t>(28)));
    ctx.set_gpr(2, 2232u << 16u);
    ctx.set_gpr(2, ctx.gpr[2] + static_cast<std::uint32_t>(-5492));
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(28), ctx.gpr[2]);
    ctx.set_gpr(4, ctx.gpr[29] + static_cast<std::uint32_t>(40));
    ctx.set_gpr(5, 0u + static_cast<std::uint32_t>(-1));
    ctx.set_gpr(31, 0x088DDDDCu);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0020_entry, 20u, 288u, 0x088555D0u>(ctx, &aot_mem) && ctx.pc == 0x088DDDDCu) goto L_088DDDDC;
    return;
L_088DDDDC:
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
L_088DDDF4:
    ctx.set_gpr(29, ctx.gpr[29] + static_cast<std::uint32_t>(-16));
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(12), ctx.gpr[31]);
    ctx.set_gpr(4, 2190u << 16u);
    ctx.set_gpr(4, ctx.gpr[4] + static_cast<std::uint32_t>(-8676));
    ctx.set_gpr(31, 0x088DDE0Cu);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0080_entry, 80u, 286u, 0x08945508u>(ctx, &aot_mem) && ctx.pc == 0x088DDE0Cu) goto L_088DDE0C;
    return;
L_088DDE0C:
    ctx.set_gpr(31, rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(12)));
    ctx.set_gpr(29, ctx.gpr[29] + static_cast<std::uint32_t>(16));
    jump_target = ctx.gpr[31];
    // nop
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_088DDE1C:
    ctx.set_gpr(29, ctx.gpr[29] + static_cast<std::uint32_t>(-32));
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(28), ctx.gpr[31]);
    ctx.set_gpr(31, 0x088DDE2Cu);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0052_entry, 52u, 154u, 0x088D49C4u>(ctx, &aot_mem) && ctx.pc == 0x088DDE2Cu) goto L_088DDE2C;
    return;
L_088DDE2C:
    ctx.set_gpr(2, 2190u << 16u);
    ctx.set_gpr(2, ctx.gpr[2] + static_cast<std::uint32_t>(-8504));
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(0), ctx.gpr[2]);
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(4), 0u);
    ctx.set_gpr(2, 2227u << 16u);
    ctx.set_gpr(2, ctx.gpr[2] + static_cast<std::uint32_t>(24428));
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(8), ctx.gpr[2]);
    ctx.set_gpr(4, 0u + 0u);
    ctx.set_gpr(5, 2245u << 16u);
    ctx.set_gpr(5, ctx.gpr[5] + static_cast<std::uint32_t>(27112));
    ctx.set_gpr(6, 2190u << 16u);
    ctx.set_gpr(6, ctx.gpr[6] + static_cast<std::uint32_t>(-7840));
    ctx.set_gpr(7, 2190u << 16u);
    ctx.set_gpr(7, ctx.gpr[7] + static_cast<std::uint32_t>(-8520));
    ctx.set_gpr(8, 2190u << 16u);
    ctx.set_gpr(8, ctx.gpr[8] + static_cast<std::uint32_t>(-8552));
    ctx.set_gpr(9, 2227u << 16u);
    ctx.set_gpr(9, ctx.gpr[9] + static_cast<std::uint32_t>(24436));
    ctx.set_gpr(10, 0u + static_cast<std::uint32_t>(52));
    ctx.set_gpr(11, 2190u << 16u);
    ctx.set_gpr(11, ctx.gpr[11] + static_cast<std::uint32_t>(-8824));
    ctx.set_gpr(31, 0x088DDE88u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0080_entry, 80u, 294u, 0x08945594u>(ctx, &aot_mem) && ctx.pc == 0x088DDE88u) goto L_088DDE88;
    return;
L_088DDE88:
    ctx.set_gpr(31, rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(28)));
    ctx.set_gpr(29, ctx.gpr[29] + static_cast<std::uint32_t>(32));
    jump_target = ctx.gpr[31];
    // nop
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_088DDE98:
    ctx.set_gpr(29, ctx.gpr[29] + static_cast<std::uint32_t>(-16));
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(12), ctx.gpr[31]);
    ctx.set_gpr(31, 0x088DDEA8u);
    // nop
    goto L_088DDD3C;
L_088DDEA8:
    ctx.set_gpr(31, rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(12)));
    ctx.set_gpr(29, ctx.gpr[29] + static_cast<std::uint32_t>(16));
    jump_target = ctx.gpr[31];
    // nop
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_088DDEB8:
    ctx.set_gpr(2, 2245u << 16u);
    ctx.set_gpr(2, rt.memory().aot_load32(ctx.gpr[2] + static_cast<std::uint32_t>(27124)));
    jump_target = ctx.gpr[31];
    // nop
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_088DDEC8:
    ctx.set_gpr(29, ctx.gpr[29] + static_cast<std::uint32_t>(-16));
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(12), ctx.gpr[31]);
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(8), ctx.gpr[17]);
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(4), ctx.gpr[16]);
    ctx.set_gpr(2, 2245u << 16u);
    ctx.set_gpr(16, rt.memory().aot_load32(ctx.gpr[2] + static_cast<std::uint32_t>(27112)));
    ctx.set_gpr(4, ctx.gpr[16] + 0u);
    ctx.set_gpr(31, 0x088DDEECu);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0080_entry, 80u, 236u, 0x089451A8u>(ctx, &aot_mem) && ctx.pc == 0x088DDEECu) goto L_088DDEEC;
    return;
L_088DDEEC:
    ctx.set_gpr(17, ctx.gpr[2] + 0u);
    ctx.set_gpr(4, ctx.gpr[16] + 0u);
    ctx.set_gpr(5, 2227u << 16u);
    ctx.set_gpr(5, ctx.gpr[5] + static_cast<std::uint32_t>(24468));
    ctx.set_gpr(6, 0u + static_cast<std::uint32_t>(1));
    ctx.set_gpr(31, 0x088DDF08u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0080_entry, 80u, 151u, 0x08944B98u>(ctx, &aot_mem) && ctx.pc == 0x088DDF08u) goto L_088DDF08;
    return;
L_088DDF08:
    ctx.set_gpr(4, ctx.gpr[16] + 0u);
    ctx.set_gpr(5, ctx.gpr[17] + 0u);
    ctx.set_gpr(31, 0x088DDF18u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0080_entry, 80u, 148u, 0x08944B4Cu>(ctx, &aot_mem) && ctx.pc == 0x088DDF18u) goto L_088DDF18;
    return;
L_088DDF18:
    ctx.set_gpr(4, ctx.gpr[2] + 0u);
    ctx.set_gpr(5, 0u + static_cast<std::uint32_t>(1));
    ctx.set_gpr(31, 0x088DDF28u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0072_entry, 72u, 648u, 0x08926D64u>(ctx, &aot_mem) && ctx.pc == 0x088DDF28u) goto L_088DDF28;
    return;
L_088DDF28:
    ctx.set_gpr(4, ctx.gpr[16] + 0u);
    ctx.set_gpr(5, 2227u << 16u);
    ctx.set_gpr(5, ctx.gpr[5] + static_cast<std::uint32_t>(24472));
    ctx.set_gpr(6, 2227u << 16u);
    ctx.set_gpr(6, ctx.gpr[6] + static_cast<std::uint32_t>(24476));
    ctx.set_gpr(7, 2227u << 16u);
    ctx.set_gpr(7, ctx.gpr[7] + static_cast<std::uint32_t>(24480));
    ctx.set_gpr(8, ctx.gpr[17] + 0u);
    ctx.set_gpr(31, 0x088DDF50u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0080_entry, 80u, 162u, 0x08944C7Cu>(ctx, &aot_mem) && ctx.pc == 0x088DDF50u) goto L_088DDF50;
    return;
L_088DDF50:
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
L_088DDF68:
    ctx.set_gpr(29, ctx.gpr[29] + static_cast<std::uint32_t>(-16));
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(12), ctx.gpr[31]);
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(8), ctx.gpr[16]);
    ctx.set_gpr(3, 2245u << 16u);
    ctx.set_gpr(3, rt.memory().aot_load32(ctx.gpr[3] + static_cast<std::uint32_t>(27116)));
    { const bool branch_taken = ctx.gpr[3] != 0u;
    // nop
      if (branch_taken) {
          goto L_088DE030;
      }
      goto L_088DDF84;
    }
L_088DDF84:
    ctx.set_gpr(31, 0x088DDF8Cu);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0078_entry, 78u, 217u, 0x0893CDECu>(ctx, &aot_mem) && ctx.pc == 0x088DDF8Cu) goto L_088DDF8C;
    return;
L_088DDF8C:
    ctx.set_gpr(4, rt.memory().aot_load32(ctx.gpr[2] + static_cast<std::uint32_t>(0)));
    ctx.set_gpr(31, 0x088DDF98u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0078_entry, 78u, 199u, 0x0893CC68u>(ctx, &aot_mem) && ctx.pc == 0x088DDF98u) goto L_088DDF98;
    return;
L_088DDF98:
    ctx.set_gpr(3, 2245u << 16u);
    ctx.set_gpr(4, rt.memory().aot_load32(ctx.gpr[3] + static_cast<std::uint32_t>(27112)));
    ctx.set_gpr(5, ctx.gpr[2] + 0u);
    ctx.set_gpr(31, 0x088DDFACu);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0080_entry, 80u, 50u, 0x089443D4u>(ctx, &aot_mem) && ctx.pc == 0x088DDFACu) goto L_088DDFAC;
    return;
L_088DDFAC:
    ctx.set_gpr(3, 2245u << 16u);
    rt.memory().aot_store32(ctx.gpr[3] + static_cast<std::uint32_t>(27116), ctx.gpr[2]);
    ctx.set_gpr(16, ctx.gpr[2] + 0u);
    { const bool branch_taken = ctx.gpr[16] == 0u;
    // nop
      if (branch_taken) {
          goto L_088DE030;
      }
      goto L_088DDFC0;
    }
L_088DDFC0:
    ctx.set_gpr(31, 0x088DDFC8u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0079_entry, 79u, 538u, 0x089425E0u>(ctx, &aot_mem) && ctx.pc == 0x088DDFC8u) goto L_088DDFC8;
    return;
L_088DDFC8:
    ctx.set_gpr(4, ctx.gpr[2] + 0u);
    ctx.set_gpr(5, ctx.gpr[16] + 0u);
    ctx.set_gpr(31, 0x088DDFD8u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0072_entry, 72u, 751u, 0x08927514u>(ctx, &aot_mem) && ctx.pc == 0x088DDFD8u) goto L_088DDFD8;
    return;
L_088DDFD8:
    ctx.set_gpr(2, 2245u << 16u);
    ctx.set_gpr(4, rt.memory().aot_load32(ctx.gpr[2] + static_cast<std::uint32_t>(27116)));
    ctx.set_gpr(2, rt.memory().aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(4)));
    ctx.set_gpr(2, ctx.gpr[2] + static_cast<std::uint32_t>(-1));
    rt.memory().aot_store32(ctx.gpr[4] + static_cast<std::uint32_t>(4), ctx.gpr[2]);
    ctx.set_gpr(2, ctx.gpr[2] << 10u);
    ctx.set_gpr(2, ctx.gpr[2] >> 10u);
    { const bool branch_taken = ctx.gpr[2] != 0u;
    // nop
      if (branch_taken) {
          goto L_088DE004;
      }
      goto L_088DDFFC;
    }
L_088DDFFC:
    ctx.set_gpr(31, 0x088DE004u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0080_entry, 80u, 556u, 0x089467C8u>(ctx, &aot_mem) && ctx.pc == 0x088DE004u) goto L_088DE004;
    return;
L_088DE004:
    ctx.set_gpr(31, 0x088DE00Cu);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0079_entry, 79u, 538u, 0x089425E0u>(ctx, &aot_mem) && ctx.pc == 0x088DE00Cu) goto L_088DE00C;
    return;
L_088DE00C:
    ctx.set_gpr(2, rt.memory().aot_load32(ctx.gpr[2] + static_cast<std::uint32_t>(12)));
    ctx.set_gpr(3, ctx.gpr[2] + static_cast<std::uint32_t>(-1));
    ctx.set_gpr(2, 2245u << 16u);
    ctx.set_gpr(2, rt.memory().aot_load32(ctx.gpr[2] + static_cast<std::uint32_t>(27116)));
    rt.memory().aot_store16(ctx.gpr[2] + static_cast<std::uint32_t>(18), static_cast<std::uint16_t>(ctx.gpr[3]));
    ctx.set_gpr(2, 2245u << 16u);
    ctx.set_gpr(4, rt.memory().aot_load32(ctx.gpr[2] + static_cast<std::uint32_t>(27116)));
    ctx.set_gpr(31, 0x088DE030u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0079_entry, 79u, 598u, 0x08942A18u>(ctx, &aot_mem) && ctx.pc == 0x088DE030u) goto L_088DE030;
    return;
L_088DE030:
    ctx.set_gpr(31, rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(12)));
    ctx.set_gpr(16, rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(8)));
    ctx.set_gpr(29, ctx.gpr[29] + static_cast<std::uint32_t>(16));
    jump_target = ctx.gpr[31];
    // nop
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_088DE044:
    ctx.set_gpr(29, ctx.gpr[29] + static_cast<std::uint32_t>(-16));
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(12), ctx.gpr[31]);
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(8), ctx.gpr[16]);
    ctx.set_gpr(16, ctx.gpr[4] + 0u);
    ctx.set_gpr(31, 0x088DE05Cu);
    // nop
    goto L_088DE138;
L_088DE05C:
    ctx.set_gpr(2, 2245u << 16u);
    ctx.set_gpr(4, rt.memory().aot_load32(ctx.gpr[2] + static_cast<std::uint32_t>(27124)));
    ctx.set_gpr(5, ctx.gpr[16] + 0u);
    ctx.set_gpr(31, 0x088DE070u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0080_entry, 80u, 50u, 0x089443D4u>(ctx, &aot_mem) && ctx.pc == 0x088DE070u) goto L_088DE070;
    return;
L_088DE070:
    ctx.set_gpr(31, rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(12)));
    ctx.set_gpr(16, rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(8)));
    ctx.set_gpr(29, ctx.gpr[29] + static_cast<std::uint32_t>(16));
    jump_target = ctx.gpr[31];
    // nop
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_088DE084:
    ctx.set_gpr(29, ctx.gpr[29] + static_cast<std::uint32_t>(-16));
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(12), ctx.gpr[31]);
    ctx.set_gpr(2, 2245u << 16u);
    ctx.set_gpr(2, rt.memory().aot_load32(ctx.gpr[2] + static_cast<std::uint32_t>(27124)));
    { const bool branch_taken = ctx.gpr[2] == 0u;
    // nop
      if (branch_taken) {
          goto L_088DE0B0;
      }
      goto L_088DE09C;
    }
L_088DE09C:
    ctx.set_gpr(2, rt.memory().aot_load32(ctx.gpr[2] + static_cast<std::uint32_t>(36)));
    ctx.set_gpr(2, ctx.gpr[2] & 4u);
    ctx.set_gpr(2, 0u < ctx.gpr[2] ? 1u : 0u);
    { const bool branch_taken = ctx.gpr[2] != 0u;
    // nop
      if (branch_taken) {
          goto L_088DE0B8;
      }
      goto L_088DE0B0;
    }
L_088DE0B0:
    ctx.set_gpr(31, 0x088DE0B8u);
    // nop
    goto L_088DE138;
L_088DE0B8:
    ctx.set_gpr(2, 2245u << 16u);
    ctx.set_gpr(2, rt.memory().aot_load32(ctx.gpr[2] + static_cast<std::uint32_t>(27124)));
    ctx.set_gpr(31, rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(12)));
    ctx.set_gpr(29, ctx.gpr[29] + static_cast<std::uint32_t>(16));
    jump_target = ctx.gpr[31];
    // nop
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_088DE0D0:
    ctx.set_gpr(29, ctx.gpr[29] + static_cast<std::uint32_t>(-64));
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(12), ctx.gpr[31]);
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(8), ctx.gpr[16]);
    ctx.set_gpr(4, ctx.gpr[29] + static_cast<std::uint32_t>(16));
    ctx.set_gpr(31, 0x088DE0E8u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0079_entry, 79u, 505u, 0x089422D0u>(ctx, &aot_mem) && ctx.pc == 0x088DE0E8u) goto L_088DE0E8;
    return;
L_088DE0E8:
    ctx.set_gpr(2, 2232u << 16u);
    ctx.set_gpr(2, ctx.gpr[2] + static_cast<std::uint32_t>(-9908));
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(16), ctx.gpr[2]);
    ctx.set_gpr(31, 0x088DE0FCu);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0064_entry, 64u, 444u, 0x08905FF0u>(ctx, &aot_mem) && ctx.pc == 0x088DE0FCu) goto L_088DE0FC;
    return;
L_088DE0FC:
    ctx.set_gpr(2, rt.memory().aot_load32(ctx.gpr[2] + static_cast<std::uint32_t>(932)));
    ctx.set_gpr(2, ctx.gpr[2] + ctx.gpr[29]);
    ctx.set_gpr(16, rt.memory().aot_load32(ctx.gpr[2] + static_cast<std::uint32_t>(16)));
    ctx.set_gpr(2, 2232u << 16u);
    ctx.set_gpr(2, ctx.gpr[2] + static_cast<std::uint32_t>(-5492));
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(16), ctx.gpr[2]);
    ctx.set_gpr(4, ctx.gpr[29] + static_cast<std::uint32_t>(28));
    ctx.set_gpr(31, 0x088DE120u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0019_entry, 19u, 764u, 0x08853094u>(ctx, &aot_mem) && ctx.pc == 0x088DE120u) goto L_088DE120;
    return;
L_088DE120:
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
L_088DE138:
    ctx.set_gpr(29, ctx.gpr[29] + static_cast<std::uint32_t>(-16));
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(12), ctx.gpr[31]);
    ctx.set_gpr(4, 2190u << 16u);
    ctx.set_gpr(4, ctx.gpr[4] + static_cast<std::uint32_t>(-7840));
    ctx.set_gpr(31, 0x088DE150u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0080_entry, 80u, 286u, 0x08945508u>(ctx, &aot_mem) && ctx.pc == 0x088DE150u) goto L_088DE150;
    return;
L_088DE150:
    ctx.set_gpr(31, rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(12)));
    ctx.set_gpr(29, ctx.gpr[29] + static_cast<std::uint32_t>(16));
    jump_target = ctx.gpr[31];
    // nop
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_088DE160:
    ctx.set_gpr(29, ctx.gpr[29] + static_cast<std::uint32_t>(-32));
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(28), ctx.gpr[31]);
    ctx.set_gpr(31, 0x088DE170u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0052_entry, 52u, 154u, 0x088D49C4u>(ctx, &aot_mem) && ctx.pc == 0x088DE170u) goto L_088DE170;
    return;
L_088DE170:
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(0), 0u);
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(4), 0u);
    ctx.set_gpr(2, 2227u << 16u);
    ctx.set_gpr(2, ctx.gpr[2] + static_cast<std::uint32_t>(24484));
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(8), ctx.gpr[2]);
    ctx.set_gpr(4, 0u + 0u);
    ctx.set_gpr(5, 2245u << 16u);
    ctx.set_gpr(5, ctx.gpr[5] + static_cast<std::uint32_t>(27124));
    ctx.set_gpr(6, 2190u << 16u);
    ctx.set_gpr(6, ctx.gpr[6] + static_cast<std::uint32_t>(-19704));
    ctx.set_gpr(7, 2189u << 16u);
    ctx.set_gpr(7, ctx.gpr[7] + static_cast<std::uint32_t>(31824));
    ctx.set_gpr(8, 2190u << 16u);
    ctx.set_gpr(8, ctx.gpr[8] + static_cast<std::uint32_t>(-7724));
    ctx.set_gpr(9, 2227u << 16u);
    ctx.set_gpr(9, ctx.gpr[9] + static_cast<std::uint32_t>(24492));
    ctx.set_gpr(10, 0u + static_cast<std::uint32_t>(48));
    ctx.set_gpr(11, 2190u << 16u);
    ctx.set_gpr(11, ctx.gpr[11] + static_cast<std::uint32_t>(-7984));
    ctx.set_gpr(31, 0x088DE1C4u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0080_entry, 80u, 294u, 0x08945594u>(ctx, &aot_mem) && ctx.pc == 0x088DE1C4u) goto L_088DE1C4;
    return;
L_088DE1C4:
    ctx.set_gpr(31, rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(28)));
    ctx.set_gpr(29, ctx.gpr[29] + static_cast<std::uint32_t>(32));
    jump_target = ctx.gpr[31];
    // nop
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_088DE1D4:
    ctx.set_gpr(29, ctx.gpr[29] + static_cast<std::uint32_t>(-16));
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(12), ctx.gpr[31]);
    ctx.set_gpr(31, 0x088DE1E4u);
    // nop
    goto L_088DE084;
L_088DE1E4:
    ctx.set_gpr(31, rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(12)));
    ctx.set_gpr(29, ctx.gpr[29] + static_cast<std::uint32_t>(16));
    jump_target = ctx.gpr[31];
    // nop
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_088DE1F4:
    ctx.set_gpr(29, ctx.gpr[29] + static_cast<std::uint32_t>(-16));
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(12), ctx.gpr[31]);
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(8), ctx.gpr[16]);
    ctx.set_gpr(3, 2245u << 16u);
    ctx.set_gpr(3, rt.memory().aot_load32(ctx.gpr[3] + static_cast<std::uint32_t>(27128)));
    { const bool branch_taken = ctx.gpr[3] != 0u;
    // nop
      if (branch_taken) {
          goto L_088DE2BC;
      }
      goto L_088DE210;
    }
L_088DE210:
    ctx.set_gpr(31, 0x088DE218u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0078_entry, 78u, 217u, 0x0893CDECu>(ctx, &aot_mem) && ctx.pc == 0x088DE218u) goto L_088DE218;
    return;
L_088DE218:
    ctx.set_gpr(4, rt.memory().aot_load32(ctx.gpr[2] + static_cast<std::uint32_t>(0)));
    ctx.set_gpr(31, 0x088DE224u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0078_entry, 78u, 199u, 0x0893CC68u>(ctx, &aot_mem) && ctx.pc == 0x088DE224u) goto L_088DE224;
    return;
L_088DE224:
    ctx.set_gpr(3, 2245u << 16u);
    ctx.set_gpr(4, rt.memory().aot_load32(ctx.gpr[3] + static_cast<std::uint32_t>(27124)));
    ctx.set_gpr(5, ctx.gpr[2] + 0u);
    ctx.set_gpr(31, 0x088DE238u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0080_entry, 80u, 50u, 0x089443D4u>(ctx, &aot_mem) && ctx.pc == 0x088DE238u) goto L_088DE238;
    return;
L_088DE238:
    ctx.set_gpr(3, 2245u << 16u);
    rt.memory().aot_store32(ctx.gpr[3] + static_cast<std::uint32_t>(27128), ctx.gpr[2]);
    ctx.set_gpr(16, ctx.gpr[2] + 0u);
    { const bool branch_taken = ctx.gpr[16] == 0u;
    // nop
      if (branch_taken) {
          goto L_088DE2BC;
      }
      goto L_088DE24C;
    }
L_088DE24C:
    ctx.set_gpr(31, 0x088DE254u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0079_entry, 79u, 538u, 0x089425E0u>(ctx, &aot_mem) && ctx.pc == 0x088DE254u) goto L_088DE254;
    return;
L_088DE254:
    ctx.set_gpr(4, ctx.gpr[2] + 0u);
    ctx.set_gpr(5, ctx.gpr[16] + 0u);
    ctx.set_gpr(31, 0x088DE264u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0072_entry, 72u, 751u, 0x08927514u>(ctx, &aot_mem) && ctx.pc == 0x088DE264u) goto L_088DE264;
    return;
L_088DE264:
    ctx.set_gpr(2, 2245u << 16u);
    ctx.set_gpr(4, rt.memory().aot_load32(ctx.gpr[2] + static_cast<std::uint32_t>(27128)));
    ctx.set_gpr(2, rt.memory().aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(4)));
    ctx.set_gpr(2, ctx.gpr[2] + static_cast<std::uint32_t>(-1));
    rt.memory().aot_store32(ctx.gpr[4] + static_cast<std::uint32_t>(4), ctx.gpr[2]);
    ctx.set_gpr(2, ctx.gpr[2] << 10u);
    ctx.set_gpr(2, ctx.gpr[2] >> 10u);
    { const bool branch_taken = ctx.gpr[2] != 0u;
    // nop
      if (branch_taken) {
          goto L_088DE290;
      }
      goto L_088DE288;
    }
L_088DE288:
    ctx.set_gpr(31, 0x088DE290u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0080_entry, 80u, 556u, 0x089467C8u>(ctx, &aot_mem) && ctx.pc == 0x088DE290u) goto L_088DE290;
    return;
L_088DE290:
    ctx.set_gpr(31, 0x088DE298u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0079_entry, 79u, 538u, 0x089425E0u>(ctx, &aot_mem) && ctx.pc == 0x088DE298u) goto L_088DE298;
    return;
L_088DE298:
    ctx.set_gpr(2, rt.memory().aot_load32(ctx.gpr[2] + static_cast<std::uint32_t>(12)));
    ctx.set_gpr(3, ctx.gpr[2] + static_cast<std::uint32_t>(-1));
    ctx.set_gpr(2, 2245u << 16u);
    ctx.set_gpr(2, rt.memory().aot_load32(ctx.gpr[2] + static_cast<std::uint32_t>(27128)));
    rt.memory().aot_store16(ctx.gpr[2] + static_cast<std::uint32_t>(18), static_cast<std::uint16_t>(ctx.gpr[3]));
    ctx.set_gpr(2, 2245u << 16u);
    ctx.set_gpr(4, rt.memory().aot_load32(ctx.gpr[2] + static_cast<std::uint32_t>(27128)));
    ctx.set_gpr(31, 0x088DE2BCu);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0079_entry, 79u, 598u, 0x08942A18u>(ctx, &aot_mem) && ctx.pc == 0x088DE2BCu) goto L_088DE2BC;
    return;
L_088DE2BC:
    ctx.set_gpr(31, rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(12)));
    ctx.set_gpr(16, rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(8)));
    ctx.set_gpr(29, ctx.gpr[29] + static_cast<std::uint32_t>(16));
    jump_target = ctx.gpr[31];
    // nop
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_088DE2D0:
    ctx.set_gpr(29, ctx.gpr[29] + static_cast<std::uint32_t>(-16));
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(12), ctx.gpr[31]);
    ctx.set_gpr(2, 2245u << 16u);
    ctx.set_gpr(2, rt.memory().aot_load32(ctx.gpr[2] + static_cast<std::uint32_t>(27128)));
    { const bool branch_taken = ctx.gpr[2] != 0u;
    // nop
      if (branch_taken) {
          goto L_088DE2F0;
      }
      goto L_088DE2E8;
    }
L_088DE2E8:
    ctx.set_gpr(31, 0x088DE2F0u);
    // nop
    goto L_088DE138;
L_088DE2F0:
    ctx.set_gpr(2, 2245u << 16u);
    ctx.set_gpr(2, rt.memory().aot_load32(ctx.gpr[2] + static_cast<std::uint32_t>(27128)));
    ctx.set_gpr(31, rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(12)));
    ctx.set_gpr(29, ctx.gpr[29] + static_cast<std::uint32_t>(16));
    jump_target = ctx.gpr[31];
    // nop
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_088DE308:
    ctx.set_gpr(29, ctx.gpr[29] + static_cast<std::uint32_t>(-16));
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(12), ctx.gpr[31]);
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(8), ctx.gpr[16]);
    ctx.set_gpr(16, ctx.gpr[4] + 0u);
    ctx.set_gpr(31, 0x088DE320u);
    // nop
    goto L_088DE400;
L_088DE320:
    ctx.set_gpr(2, 2245u << 16u);
    ctx.set_gpr(4, rt.memory().aot_load32(ctx.gpr[2] + static_cast<std::uint32_t>(27132)));
    ctx.set_gpr(5, ctx.gpr[16] + 0u);
    ctx.set_gpr(31, 0x088DE334u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0080_entry, 80u, 50u, 0x089443D4u>(ctx, &aot_mem) && ctx.pc == 0x088DE334u) goto L_088DE334;
    return;
L_088DE334:
    ctx.set_gpr(31, rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(12)));
    ctx.set_gpr(16, rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(8)));
    ctx.set_gpr(29, ctx.gpr[29] + static_cast<std::uint32_t>(16));
    jump_target = ctx.gpr[31];
    // nop
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_088DE348:
    ctx.set_gpr(29, ctx.gpr[29] + static_cast<std::uint32_t>(-16));
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(12), ctx.gpr[31]);
    ctx.set_gpr(2, 2245u << 16u);
    ctx.set_gpr(2, rt.memory().aot_load32(ctx.gpr[2] + static_cast<std::uint32_t>(27132)));
    { const bool branch_taken = ctx.gpr[2] == 0u;
    // nop
      if (branch_taken) {
          goto L_088DE374;
      }
      goto L_088DE360;
    }
L_088DE360:
    ctx.set_gpr(2, rt.memory().aot_load32(ctx.gpr[2] + static_cast<std::uint32_t>(36)));
    ctx.set_gpr(2, ctx.gpr[2] & 4u);
    ctx.set_gpr(2, 0u < ctx.gpr[2] ? 1u : 0u);
    { const bool branch_taken = ctx.gpr[2] != 0u;
    // nop
      if (branch_taken) {
          goto L_088DE37C;
      }
      goto L_088DE374;
    }
L_088DE374:
    ctx.set_gpr(31, 0x088DE37Cu);
    // nop
    goto L_088DE400;
L_088DE37C:
    ctx.set_gpr(2, 2245u << 16u);
    ctx.set_gpr(2, rt.memory().aot_load32(ctx.gpr[2] + static_cast<std::uint32_t>(27132)));
    ctx.set_gpr(31, rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(12)));
    ctx.set_gpr(29, ctx.gpr[29] + static_cast<std::uint32_t>(16));
    jump_target = ctx.gpr[31];
    // nop
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_088DE394:
    ctx.set_gpr(29, ctx.gpr[29] + static_cast<std::uint32_t>(-80));
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(12), ctx.gpr[31]);
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(8), ctx.gpr[16]);
    ctx.set_gpr(4, ctx.gpr[29] + static_cast<std::uint32_t>(28));
    ctx.set_gpr(31, 0x088DE3ACu);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0086_entry, 86u, 777u, 0x0895F3F0u>(ctx, &aot_mem) && ctx.pc == 0x088DE3ACu) goto L_088DE3AC;
    return;
L_088DE3AC:
    ctx.set_gpr(2, 2232u << 16u);
    ctx.set_gpr(2, ctx.gpr[2] + static_cast<std::uint32_t>(-10164));
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(28), ctx.gpr[2]);
    ctx.set_gpr(31, 0x088DE3C0u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0064_entry, 64u, 444u, 0x08905FF0u>(ctx, &aot_mem) && ctx.pc == 0x088DE3C0u) goto L_088DE3C0;
    return;
L_088DE3C0:
    ctx.set_gpr(2, rt.memory().aot_load32(ctx.gpr[2] + static_cast<std::uint32_t>(932)));
    ctx.set_gpr(2, ctx.gpr[2] + ctx.gpr[29]);
    ctx.set_gpr(16, rt.memory().aot_load32(ctx.gpr[2] + static_cast<std::uint32_t>(28)));
    ctx.set_gpr(2, 2232u << 16u);
    ctx.set_gpr(2, ctx.gpr[2] + static_cast<std::uint32_t>(-5492));
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(28), ctx.gpr[2]);
    ctx.set_gpr(4, ctx.gpr[29] + static_cast<std::uint32_t>(40));
    ctx.set_gpr(5, 0u + static_cast<std::uint32_t>(-1));
    ctx.set_gpr(31, 0x088DE3E8u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0020_entry, 20u, 288u, 0x088555D0u>(ctx, &aot_mem) && ctx.pc == 0x088DE3E8u) goto L_088DE3E8;
    return;
L_088DE3E8:
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
L_088DE400:
    ctx.set_gpr(29, ctx.gpr[29] + static_cast<std::uint32_t>(-16));
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(12), ctx.gpr[31]);
    ctx.set_gpr(4, 2190u << 16u);
    ctx.set_gpr(4, ctx.gpr[4] + static_cast<std::uint32_t>(-7128));
    ctx.set_gpr(31, 0x088DE418u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0080_entry, 80u, 286u, 0x08945508u>(ctx, &aot_mem) && ctx.pc == 0x088DE418u) goto L_088DE418;
    return;
L_088DE418:
    ctx.set_gpr(31, rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(12)));
    ctx.set_gpr(29, ctx.gpr[29] + static_cast<std::uint32_t>(16));
    jump_target = ctx.gpr[31];
    // nop
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_088DE428:
    ctx.set_gpr(29, ctx.gpr[29] + static_cast<std::uint32_t>(-32));
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(28), ctx.gpr[31]);
    ctx.set_gpr(31, 0x088DE438u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0052_entry, 52u, 154u, 0x088D49C4u>(ctx, &aot_mem) && ctx.pc == 0x088DE438u) goto L_088DE438;
    return;
L_088DE438:
    ctx.set_gpr(2, 2190u << 16u);
    ctx.set_gpr(2, ctx.gpr[2] + static_cast<std::uint32_t>(-6956));
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(0), ctx.gpr[2]);
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(4), 0u);
    ctx.set_gpr(2, 2227u << 16u);
    ctx.set_gpr(2, ctx.gpr[2] + static_cast<std::uint32_t>(24516));
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(8), ctx.gpr[2]);
    ctx.set_gpr(4, 0u + 0u);
    ctx.set_gpr(5, 2245u << 16u);
    ctx.set_gpr(5, ctx.gpr[5] + static_cast<std::uint32_t>(27132));
    ctx.set_gpr(6, 2190u << 16u);
    ctx.set_gpr(6, ctx.gpr[6] + static_cast<std::uint32_t>(-6032));
    ctx.set_gpr(7, 2190u << 16u);
    ctx.set_gpr(7, ctx.gpr[7] + static_cast<std::uint32_t>(-6972));
    ctx.set_gpr(8, 2190u << 16u);
    ctx.set_gpr(8, ctx.gpr[8] + static_cast<std::uint32_t>(-7004));
    ctx.set_gpr(9, 2227u << 16u);
    ctx.set_gpr(9, ctx.gpr[9] + static_cast<std::uint32_t>(24524));
    ctx.set_gpr(10, 0u + static_cast<std::uint32_t>(52));
    ctx.set_gpr(11, 2190u << 16u);
    ctx.set_gpr(11, ctx.gpr[11] + static_cast<std::uint32_t>(-7276));
    ctx.set_gpr(31, 0x088DE494u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0080_entry, 80u, 294u, 0x08945594u>(ctx, &aot_mem) && ctx.pc == 0x088DE494u) goto L_088DE494;
    return;
L_088DE494:
    ctx.set_gpr(31, rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(28)));
    ctx.set_gpr(29, ctx.gpr[29] + static_cast<std::uint32_t>(32));
    jump_target = ctx.gpr[31];
    // nop
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_088DE4A4:
    ctx.set_gpr(29, ctx.gpr[29] + static_cast<std::uint32_t>(-16));
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(12), ctx.gpr[31]);
    ctx.set_gpr(31, 0x088DE4B4u);
    // nop
    goto L_088DE348;
L_088DE4B4:
    ctx.set_gpr(31, rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(12)));
    ctx.set_gpr(29, ctx.gpr[29] + static_cast<std::uint32_t>(16));
    jump_target = ctx.gpr[31];
    // nop
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_088DE4C4:
    ctx.set_gpr(2, 2245u << 16u);
    ctx.set_gpr(2, rt.memory().aot_load32(ctx.gpr[2] + static_cast<std::uint32_t>(27144)));
    jump_target = ctx.gpr[31];
    // nop
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_088DE4D4:
    ctx.set_gpr(29, ctx.gpr[29] + static_cast<std::uint32_t>(-16));
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(12), ctx.gpr[31]);
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(8), ctx.gpr[17]);
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(4), ctx.gpr[16]);
    ctx.set_gpr(2, 2245u << 16u);
    ctx.set_gpr(16, rt.memory().aot_load32(ctx.gpr[2] + static_cast<std::uint32_t>(27132)));
    ctx.set_gpr(4, ctx.gpr[16] + 0u);
    ctx.set_gpr(31, 0x088DE4F8u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0080_entry, 80u, 236u, 0x089451A8u>(ctx, &aot_mem) && ctx.pc == 0x088DE4F8u) goto L_088DE4F8;
    return;
L_088DE4F8:
    ctx.set_gpr(17, ctx.gpr[2] + 0u);
    ctx.set_gpr(4, ctx.gpr[16] + 0u);
    ctx.set_gpr(5, 2227u << 16u);
    ctx.set_gpr(5, ctx.gpr[5] + static_cast<std::uint32_t>(24552));
    ctx.set_gpr(6, 0u + static_cast<std::uint32_t>(1));
    ctx.set_gpr(31, 0x088DE514u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0080_entry, 80u, 151u, 0x08944B98u>(ctx, &aot_mem) && ctx.pc == 0x088DE514u) goto L_088DE514;
    return;
L_088DE514:
    ctx.set_gpr(4, ctx.gpr[16] + 0u);
    ctx.set_gpr(5, ctx.gpr[17] + 0u);
    ctx.set_gpr(31, 0x088DE524u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0080_entry, 80u, 148u, 0x08944B4Cu>(ctx, &aot_mem) && ctx.pc == 0x088DE524u) goto L_088DE524;
    return;
L_088DE524:
    ctx.set_gpr(4, ctx.gpr[2] + 0u);
    ctx.set_gpr(5, 0u + static_cast<std::uint32_t>(1));
    ctx.set_gpr(31, 0x088DE534u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0072_entry, 72u, 648u, 0x08926D64u>(ctx, &aot_mem) && ctx.pc == 0x088DE534u) goto L_088DE534;
    return;
L_088DE534:
    ctx.set_gpr(4, ctx.gpr[16] + 0u);
    ctx.set_gpr(5, 2227u << 16u);
    ctx.set_gpr(5, ctx.gpr[5] + static_cast<std::uint32_t>(24556));
    ctx.set_gpr(6, 2227u << 16u);
    ctx.set_gpr(6, ctx.gpr[6] + static_cast<std::uint32_t>(24560));
    ctx.set_gpr(7, 2227u << 16u);
    ctx.set_gpr(7, ctx.gpr[7] + static_cast<std::uint32_t>(24564));
    ctx.set_gpr(8, ctx.gpr[17] + 0u);
    ctx.set_gpr(31, 0x088DE55Cu);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0080_entry, 80u, 162u, 0x08944C7Cu>(ctx, &aot_mem) && ctx.pc == 0x088DE55Cu) goto L_088DE55C;
    return;
L_088DE55C:
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
L_088DE574:
    ctx.set_gpr(29, ctx.gpr[29] + static_cast<std::uint32_t>(-16));
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(12), ctx.gpr[31]);
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(8), ctx.gpr[16]);
    ctx.set_gpr(3, 2245u << 16u);
    ctx.set_gpr(3, rt.memory().aot_load32(ctx.gpr[3] + static_cast<std::uint32_t>(27136)));
    { const bool branch_taken = ctx.gpr[3] != 0u;
    // nop
      if (branch_taken) {
          goto L_088DE63C;
      }
      goto L_088DE590;
    }
L_088DE590:
    ctx.set_gpr(31, 0x088DE598u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0078_entry, 78u, 217u, 0x0893CDECu>(ctx, &aot_mem) && ctx.pc == 0x088DE598u) goto L_088DE598;
    return;
L_088DE598:
    ctx.set_gpr(4, rt.memory().aot_load32(ctx.gpr[2] + static_cast<std::uint32_t>(0)));
    ctx.set_gpr(31, 0x088DE5A4u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0078_entry, 78u, 199u, 0x0893CC68u>(ctx, &aot_mem) && ctx.pc == 0x088DE5A4u) goto L_088DE5A4;
    return;
L_088DE5A4:
    ctx.set_gpr(3, 2245u << 16u);
    ctx.set_gpr(4, rt.memory().aot_load32(ctx.gpr[3] + static_cast<std::uint32_t>(27132)));
    ctx.set_gpr(5, ctx.gpr[2] + 0u);
    ctx.set_gpr(31, 0x088DE5B8u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0080_entry, 80u, 50u, 0x089443D4u>(ctx, &aot_mem) && ctx.pc == 0x088DE5B8u) goto L_088DE5B8;
    return;
L_088DE5B8:
    ctx.set_gpr(3, 2245u << 16u);
    rt.memory().aot_store32(ctx.gpr[3] + static_cast<std::uint32_t>(27136), ctx.gpr[2]);
    ctx.set_gpr(16, ctx.gpr[2] + 0u);
    { const bool branch_taken = ctx.gpr[16] == 0u;
    // nop
      if (branch_taken) {
          goto L_088DE63C;
      }
      goto L_088DE5CC;
    }
L_088DE5CC:
    ctx.set_gpr(31, 0x088DE5D4u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0079_entry, 79u, 538u, 0x089425E0u>(ctx, &aot_mem) && ctx.pc == 0x088DE5D4u) goto L_088DE5D4;
    return;
L_088DE5D4:
    ctx.set_gpr(4, ctx.gpr[2] + 0u);
    ctx.set_gpr(5, ctx.gpr[16] + 0u);
    ctx.set_gpr(31, 0x088DE5E4u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0072_entry, 72u, 751u, 0x08927514u>(ctx, &aot_mem) && ctx.pc == 0x088DE5E4u) goto L_088DE5E4;
    return;
L_088DE5E4:
    ctx.set_gpr(2, 2245u << 16u);
    ctx.set_gpr(4, rt.memory().aot_load32(ctx.gpr[2] + static_cast<std::uint32_t>(27136)));
    ctx.set_gpr(2, rt.memory().aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(4)));
    ctx.set_gpr(2, ctx.gpr[2] + static_cast<std::uint32_t>(-1));
    rt.memory().aot_store32(ctx.gpr[4] + static_cast<std::uint32_t>(4), ctx.gpr[2]);
    ctx.set_gpr(2, ctx.gpr[2] << 10u);
    ctx.set_gpr(2, ctx.gpr[2] >> 10u);
    { const bool branch_taken = ctx.gpr[2] != 0u;
    // nop
      if (branch_taken) {
          goto L_088DE610;
      }
      goto L_088DE608;
    }
L_088DE608:
    ctx.set_gpr(31, 0x088DE610u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0080_entry, 80u, 556u, 0x089467C8u>(ctx, &aot_mem) && ctx.pc == 0x088DE610u) goto L_088DE610;
    return;
L_088DE610:
    ctx.set_gpr(31, 0x088DE618u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0079_entry, 79u, 538u, 0x089425E0u>(ctx, &aot_mem) && ctx.pc == 0x088DE618u) goto L_088DE618;
    return;
L_088DE618:
    ctx.set_gpr(2, rt.memory().aot_load32(ctx.gpr[2] + static_cast<std::uint32_t>(12)));
    ctx.set_gpr(3, ctx.gpr[2] + static_cast<std::uint32_t>(-1));
    ctx.set_gpr(2, 2245u << 16u);
    ctx.set_gpr(2, rt.memory().aot_load32(ctx.gpr[2] + static_cast<std::uint32_t>(27136)));
    rt.memory().aot_store16(ctx.gpr[2] + static_cast<std::uint32_t>(18), static_cast<std::uint16_t>(ctx.gpr[3]));
    ctx.set_gpr(2, 2245u << 16u);
    ctx.set_gpr(4, rt.memory().aot_load32(ctx.gpr[2] + static_cast<std::uint32_t>(27136)));
    ctx.set_gpr(31, 0x088DE63Cu);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0079_entry, 79u, 598u, 0x08942A18u>(ctx, &aot_mem) && ctx.pc == 0x088DE63Cu) goto L_088DE63C;
    return;
L_088DE63C:
    ctx.set_gpr(31, rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(12)));
    ctx.set_gpr(16, rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(8)));
    ctx.set_gpr(29, ctx.gpr[29] + static_cast<std::uint32_t>(16));
    jump_target = ctx.gpr[31];
    // nop
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_088DE650:
    ctx.set_gpr(29, ctx.gpr[29] + static_cast<std::uint32_t>(-16));
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(12), ctx.gpr[31]);
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(8), ctx.gpr[16]);
    ctx.set_gpr(16, ctx.gpr[4] + 0u);
    ctx.set_gpr(31, 0x088DE668u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0064_entry, 64u, 444u, 0x08905FF0u>(ctx, &aot_mem) && ctx.pc == 0x088DE668u) goto L_088DE668;
    return;
L_088DE668:
    ctx.set_gpr(2, rt.memory().aot_load8(ctx.gpr[2] + static_cast<std::uint32_t>(0)));
    { const bool branch_taken = ctx.gpr[2] == 0u;
    // nop
      if (branch_taken) {
          goto L_088DE69C;
      }
      goto L_088DE674;
    }
L_088DE674:
    ctx.set_gpr(31, 0x088DE67Cu);
    // nop
    goto L_088DE848;
L_088DE67C:
    ctx.set_gpr(2, 2245u << 16u);
    ctx.set_gpr(4, rt.memory().aot_load32(ctx.gpr[2] + static_cast<std::uint32_t>(27144)));
    ctx.set_gpr(5, ctx.gpr[16] + 0u);
    ctx.set_gpr(31, 0x088DE690u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0080_entry, 80u, 50u, 0x089443D4u>(ctx, &aot_mem) && ctx.pc == 0x088DE690u) goto L_088DE690;
    return;
L_088DE690:
    ctx.set_gpr(16, ctx.gpr[2] + 0u);
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_088DE6FC;
      }
      goto L_088DE69C;
    }
L_088DE69C:
    ctx.set_gpr(4, 0u + static_cast<std::uint32_t>(48));
    ctx.set_gpr(5, 0u + 0u);
    ctx.set_gpr(6, ctx.gpr[16] + 0u);
    ctx.set_gpr(31, 0x088DE6B0u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0080_entry, 80u, 542u, 0x089466FCu>(ctx, &aot_mem) && ctx.pc == 0x088DE6B0u) goto L_088DE6B0;
    return;
L_088DE6B0:
    ctx.set_gpr(16, ctx.gpr[2] + 0u);
    { const bool branch_taken = ctx.gpr[16] == 0u;
    // nop
      if (branch_taken) {
          goto L_088DE6D0;
      }
      goto L_088DE6BC;
    }
L_088DE6BC:
    ctx.set_gpr(4, ctx.gpr[16] + 0u);
    ctx.set_gpr(5, 0u + static_cast<std::uint32_t>(1));
    ctx.set_gpr(31, 0x088DE6CCu);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0086_entry, 86u, 773u, 0x0895F3A0u>(ctx, &aot_mem) && ctx.pc == 0x088DE6CCu) goto L_088DE6CC;
    return;
L_088DE6CC:
    ctx.set_gpr(16, ctx.gpr[2] + 0u);
    goto L_088DE6D0;
L_088DE6D0:
    ctx.set_gpr(4, ctx.gpr[16] + 0u);
    ctx.set_gpr(25, rt.memory().aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(0)));
    ctx.set_gpr(25, rt.memory().aot_load32(ctx.gpr[25] + static_cast<std::uint32_t>(44)));
    jump_target = ctx.gpr[25];
    ctx.set_gpr(31, 0x088DE6E4u);
    // nop
    ctx.pc = jump_target;
    if (rt.invoke_chained_call(ctx, &aot_mem) && ctx.pc == 0x088DE6E4u) goto L_088DE6E4;
    return;
L_088DE6E4:
    ctx.set_gpr(4, ctx.gpr[16] + 0u);
    ctx.set_gpr(5, 0u + 0u);
    ctx.set_gpr(25, rt.memory().aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(0)));
    ctx.set_gpr(25, rt.memory().aot_load32(ctx.gpr[25] + static_cast<std::uint32_t>(36)));
    jump_target = ctx.gpr[25];
    ctx.set_gpr(31, 0x088DE6FCu);
    // nop
    ctx.pc = jump_target;
    if (rt.invoke_chained_call(ctx, &aot_mem) && ctx.pc == 0x088DE6FCu) goto L_088DE6FC;
    return;
L_088DE6FC:
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
L_088DE714:
    ctx.set_gpr(29, ctx.gpr[29] + static_cast<std::uint32_t>(-16));
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(12), ctx.gpr[31]);
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(8), ctx.gpr[17]);
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(4), ctx.gpr[16]);
    ctx.set_gpr(17, ctx.gpr[4] + 0u);
    ctx.set_gpr(16, ctx.gpr[5] + 0u);
    ctx.set_gpr(31, 0x088DE734u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0064_entry, 64u, 444u, 0x08905FF0u>(ctx, &aot_mem) && ctx.pc == 0x088DE734u) goto L_088DE734;
    return;
L_088DE734:
    ctx.set_gpr(2, rt.memory().aot_load8(ctx.gpr[2] + static_cast<std::uint32_t>(0)));
    { const bool branch_taken = ctx.gpr[2] == 0u;
    // nop
      if (branch_taken) {
          goto L_088DE760;
      }
      goto L_088DE740;
    }
L_088DE740:
    ctx.set_gpr(31, 0x088DE748u);
    // nop
    goto L_088DE848;
L_088DE748:
    ctx.set_gpr(4, ctx.gpr[17] + 0u);
    ctx.set_gpr(5, ctx.gpr[16] + 0u);
    ctx.set_gpr(31, 0x088DE758u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0080_entry, 80u, 848u, 0x08947E90u>(ctx, &aot_mem) && ctx.pc == 0x088DE758u) goto L_088DE758;
    return;
L_088DE758:
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_088DE788;
      }
      goto L_088DE760;
    }
L_088DE760:
    ctx.set_gpr(4, 0u + static_cast<std::uint32_t>(48));
    ctx.set_gpr(5, 0u + 0u);
    ctx.set_gpr(31, 0x088DE770u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0080_entry, 80u, 552u, 0x08946784u>(ctx, &aot_mem) && ctx.pc == 0x088DE770u) goto L_088DE770;
    return;
L_088DE770:
    { const bool branch_taken = ctx.gpr[2] == 0u;
    // nop
      if (branch_taken) {
          goto L_088DE788;
      }
      goto L_088DE778;
    }
L_088DE778:
    ctx.set_gpr(4, ctx.gpr[2] + 0u);
    ctx.set_gpr(5, ctx.gpr[17] + 0u);
    ctx.set_gpr(31, 0x088DE788u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0086_entry, 86u, 779u, 0x0895F42Cu>(ctx, &aot_mem) && ctx.pc == 0x088DE788u) goto L_088DE788;
    return;
L_088DE788:
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
L_088DE7A0:
    ctx.set_gpr(29, ctx.gpr[29] + static_cast<std::uint32_t>(-16));
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(12), ctx.gpr[31]);
    ctx.set_gpr(2, 2245u << 16u);
    ctx.set_gpr(2, rt.memory().aot_load32(ctx.gpr[2] + static_cast<std::uint32_t>(27144)));
    { const bool branch_taken = ctx.gpr[2] == 0u;
    // nop
      if (branch_taken) {
          goto L_088DE7CC;
      }
      goto L_088DE7B8;
    }
L_088DE7B8:
    ctx.set_gpr(2, rt.memory().aot_load32(ctx.gpr[2] + static_cast<std::uint32_t>(36)));
    ctx.set_gpr(2, ctx.gpr[2] & 4u);
    ctx.set_gpr(2, 0u < ctx.gpr[2] ? 1u : 0u);
    { const bool branch_taken = ctx.gpr[2] != 0u;
    // nop
      if (branch_taken) {
          goto L_088DE7D4;
      }
      goto L_088DE7CC;
    }
L_088DE7CC:
    ctx.set_gpr(31, 0x088DE7D4u);
    // nop
    goto L_088DE848;
L_088DE7D4:
    ctx.set_gpr(2, 2245u << 16u);
    ctx.set_gpr(2, rt.memory().aot_load32(ctx.gpr[2] + static_cast<std::uint32_t>(27144)));
    ctx.set_gpr(31, rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(12)));
    ctx.set_gpr(29, ctx.gpr[29] + static_cast<std::uint32_t>(16));
    jump_target = ctx.gpr[31];
    // nop
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_088DE7EC:
    ctx.set_gpr(29, ctx.gpr[29] + static_cast<std::uint32_t>(-64));
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(12), ctx.gpr[31]);
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(8), ctx.gpr[16]);
    ctx.set_gpr(4, ctx.gpr[29] + static_cast<std::uint32_t>(16));
    ctx.set_gpr(31, 0x088DE804u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0086_entry, 86u, 777u, 0x0895F3F0u>(ctx, &aot_mem) && ctx.pc == 0x088DE804u) goto L_088DE804;
    return;
L_088DE804:
    ctx.set_gpr(31, 0x088DE80Cu);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0064_entry, 64u, 444u, 0x08905FF0u>(ctx, &aot_mem) && ctx.pc == 0x088DE80Cu) goto L_088DE80C;
    return;
L_088DE80C:
    ctx.set_gpr(2, rt.memory().aot_load32(ctx.gpr[2] + static_cast<std::uint32_t>(932)));
    ctx.set_gpr(2, ctx.gpr[2] + ctx.gpr[29]);
    ctx.set_gpr(16, rt.memory().aot_load32(ctx.gpr[2] + static_cast<std::uint32_t>(16)));
    ctx.set_gpr(2, 2232u << 16u);
    ctx.set_gpr(2, ctx.gpr[2] + static_cast<std::uint32_t>(-5492));
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(16), ctx.gpr[2]);
    ctx.set_gpr(4, ctx.gpr[29] + static_cast<std::uint32_t>(28));
    ctx.set_gpr(31, 0x088DE830u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0019_entry, 19u, 764u, 0x08853094u>(ctx, &aot_mem) && ctx.pc == 0x088DE830u) goto L_088DE830;
    return;
L_088DE830:
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
L_088DE848:
    ctx.set_gpr(29, ctx.gpr[29] + static_cast<std::uint32_t>(-16));
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(12), ctx.gpr[31]);
    ctx.set_gpr(4, 2190u << 16u);
    ctx.set_gpr(4, ctx.gpr[4] + static_cast<std::uint32_t>(-6032));
    ctx.set_gpr(31, 0x088DE860u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0080_entry, 80u, 286u, 0x08945508u>(ctx, &aot_mem) && ctx.pc == 0x088DE860u) goto L_088DE860;
    return;
L_088DE860:
    ctx.set_gpr(31, rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(12)));
    ctx.set_gpr(29, ctx.gpr[29] + static_cast<std::uint32_t>(16));
    jump_target = ctx.gpr[31];
    // nop
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_088DE870:
    ctx.set_gpr(29, ctx.gpr[29] + static_cast<std::uint32_t>(-32));
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(28), ctx.gpr[31]);
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(0), 0u);
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(4), 0u);
    ctx.set_gpr(2, 2227u << 16u);
    ctx.set_gpr(2, ctx.gpr[2] + static_cast<std::uint32_t>(24568));
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(8), ctx.gpr[2]);
    ctx.set_gpr(4, 0u + 0u);
    ctx.set_gpr(5, 2245u << 16u);
    ctx.set_gpr(5, ctx.gpr[5] + static_cast<std::uint32_t>(27144));
    ctx.set_gpr(6, 2190u << 16u);
    ctx.set_gpr(6, ctx.gpr[6] + static_cast<std::uint32_t>(-19704));
    ctx.set_gpr(7, 2189u << 16u);
    ctx.set_gpr(7, ctx.gpr[7] + static_cast<std::uint32_t>(31824));
    ctx.set_gpr(8, 2190u << 16u);
    ctx.set_gpr(8, ctx.gpr[8] + static_cast<std::uint32_t>(-5924));
    ctx.set_gpr(9, 2227u << 16u);
    ctx.set_gpr(9, ctx.gpr[9] + static_cast<std::uint32_t>(24576));
    ctx.set_gpr(10, 0u + static_cast<std::uint32_t>(48));
    ctx.set_gpr(11, 2190u << 16u);
    ctx.set_gpr(11, ctx.gpr[11] + static_cast<std::uint32_t>(-6164));
    ctx.set_gpr(31, 0x088DE8CCu);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0080_entry, 80u, 294u, 0x08945594u>(ctx, &aot_mem) && ctx.pc == 0x088DE8CCu) goto L_088DE8CC;
    return;
L_088DE8CC:
    ctx.set_gpr(31, rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(28)));
    ctx.set_gpr(29, ctx.gpr[29] + static_cast<std::uint32_t>(32));
    jump_target = ctx.gpr[31];
    // nop
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_088DE8DC:
    ctx.set_gpr(29, ctx.gpr[29] + static_cast<std::uint32_t>(-16));
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(12), ctx.gpr[31]);
    ctx.set_gpr(31, 0x088DE8ECu);
    // nop
    goto L_088DE7A0;
L_088DE8EC:
    ctx.set_gpr(31, rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(12)));
    ctx.set_gpr(29, ctx.gpr[29] + static_cast<std::uint32_t>(16));
    jump_target = ctx.gpr[31];
    // nop
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_088DE8FC:
    ctx.set_gpr(29, ctx.gpr[29] + static_cast<std::uint32_t>(-16));
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(12), ctx.gpr[31]);
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(8), ctx.gpr[16]);
    ctx.set_gpr(3, 2245u << 16u);
    ctx.set_gpr(3, rt.memory().aot_load32(ctx.gpr[3] + static_cast<std::uint32_t>(27148)));
    { const bool branch_taken = ctx.gpr[3] != 0u;
    // nop
      if (branch_taken) {
          goto L_088DE9C4;
      }
      goto L_088DE918;
    }
L_088DE918:
    ctx.set_gpr(31, 0x088DE920u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0078_entry, 78u, 217u, 0x0893CDECu>(ctx, &aot_mem) && ctx.pc == 0x088DE920u) goto L_088DE920;
    return;
L_088DE920:
    ctx.set_gpr(4, rt.memory().aot_load32(ctx.gpr[2] + static_cast<std::uint32_t>(0)));
    ctx.set_gpr(31, 0x088DE92Cu);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0078_entry, 78u, 199u, 0x0893CC68u>(ctx, &aot_mem) && ctx.pc == 0x088DE92Cu) goto L_088DE92C;
    return;
L_088DE92C:
    ctx.set_gpr(3, 2245u << 16u);
    ctx.set_gpr(4, rt.memory().aot_load32(ctx.gpr[3] + static_cast<std::uint32_t>(27144)));
    ctx.set_gpr(5, ctx.gpr[2] + 0u);
    ctx.set_gpr(31, 0x088DE940u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0080_entry, 80u, 50u, 0x089443D4u>(ctx, &aot_mem) && ctx.pc == 0x088DE940u) goto L_088DE940;
    return;
L_088DE940:
    ctx.set_gpr(3, 2245u << 16u);
    rt.memory().aot_store32(ctx.gpr[3] + static_cast<std::uint32_t>(27148), ctx.gpr[2]);
    ctx.set_gpr(16, ctx.gpr[2] + 0u);
    { const bool branch_taken = ctx.gpr[16] == 0u;
    // nop
      if (branch_taken) {
          goto L_088DE9C4;
      }
      goto L_088DE954;
    }
L_088DE954:
    ctx.set_gpr(31, 0x088DE95Cu);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0079_entry, 79u, 538u, 0x089425E0u>(ctx, &aot_mem) && ctx.pc == 0x088DE95Cu) goto L_088DE95C;
    return;
L_088DE95C:
    ctx.set_gpr(4, ctx.gpr[2] + 0u);
    ctx.set_gpr(5, ctx.gpr[16] + 0u);
    ctx.set_gpr(31, 0x088DE96Cu);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0072_entry, 72u, 751u, 0x08927514u>(ctx, &aot_mem) && ctx.pc == 0x088DE96Cu) goto L_088DE96C;
    return;
L_088DE96C:
    ctx.set_gpr(2, 2245u << 16u);
    ctx.set_gpr(4, rt.memory().aot_load32(ctx.gpr[2] + static_cast<std::uint32_t>(27148)));
    ctx.set_gpr(2, rt.memory().aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(4)));
    ctx.set_gpr(2, ctx.gpr[2] + static_cast<std::uint32_t>(-1));
    rt.memory().aot_store32(ctx.gpr[4] + static_cast<std::uint32_t>(4), ctx.gpr[2]);
    ctx.set_gpr(2, ctx.gpr[2] << 10u);
    ctx.set_gpr(2, ctx.gpr[2] >> 10u);
    { const bool branch_taken = ctx.gpr[2] != 0u;
    // nop
      if (branch_taken) {
          goto L_088DE998;
      }
      goto L_088DE990;
    }
L_088DE990:
    ctx.set_gpr(31, 0x088DE998u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0080_entry, 80u, 556u, 0x089467C8u>(ctx, &aot_mem) && ctx.pc == 0x088DE998u) goto L_088DE998;
    return;
L_088DE998:
    ctx.set_gpr(31, 0x088DE9A0u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0079_entry, 79u, 538u, 0x089425E0u>(ctx, &aot_mem) && ctx.pc == 0x088DE9A0u) goto L_088DE9A0;
    return;
L_088DE9A0:
    ctx.set_gpr(2, rt.memory().aot_load32(ctx.gpr[2] + static_cast<std::uint32_t>(12)));
    ctx.set_gpr(3, ctx.gpr[2] + static_cast<std::uint32_t>(-1));
    ctx.set_gpr(2, 2245u << 16u);
    ctx.set_gpr(2, rt.memory().aot_load32(ctx.gpr[2] + static_cast<std::uint32_t>(27148)));
    rt.memory().aot_store16(ctx.gpr[2] + static_cast<std::uint32_t>(18), static_cast<std::uint16_t>(ctx.gpr[3]));
    ctx.set_gpr(2, 2245u << 16u);
    ctx.set_gpr(4, rt.memory().aot_load32(ctx.gpr[2] + static_cast<std::uint32_t>(27148)));
    ctx.set_gpr(31, 0x088DE9C4u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0079_entry, 79u, 598u, 0x08942A18u>(ctx, &aot_mem) && ctx.pc == 0x088DE9C4u) goto L_088DE9C4;
    return;
L_088DE9C4:
    ctx.set_gpr(31, rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(12)));
    ctx.set_gpr(16, rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(8)));
    ctx.set_gpr(29, ctx.gpr[29] + static_cast<std::uint32_t>(16));
    jump_target = ctx.gpr[31];
    // nop
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_088DE9D8:
    ctx.set_gpr(29, ctx.gpr[29] + static_cast<std::uint32_t>(-16));
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(12), ctx.gpr[31]);
    ctx.set_gpr(2, 2245u << 16u);
    ctx.set_gpr(2, rt.memory().aot_load32(ctx.gpr[2] + static_cast<std::uint32_t>(27148)));
    { const bool branch_taken = ctx.gpr[2] != 0u;
    // nop
      if (branch_taken) {
          goto L_088DE9F8;
      }
      goto L_088DE9F0;
    }
L_088DE9F0:
    ctx.set_gpr(31, 0x088DE9F8u);
    // nop
    goto L_088DE848;
L_088DE9F8:
    ctx.set_gpr(2, 2245u << 16u);
    ctx.set_gpr(2, rt.memory().aot_load32(ctx.gpr[2] + static_cast<std::uint32_t>(27148)));
    ctx.set_gpr(31, rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(12)));
    ctx.set_gpr(29, ctx.gpr[29] + static_cast<std::uint32_t>(16));
    jump_target = ctx.gpr[31];
    // nop
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_088DEA10:
    ctx.set_gpr(29, ctx.gpr[29] + static_cast<std::uint32_t>(-16));
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(12), ctx.gpr[31]);
    ctx.set_gpr(2, 2245u << 16u);
    ctx.set_gpr(2, rt.memory().aot_load32(ctx.gpr[2] + static_cast<std::uint32_t>(27152)));
    { const bool branch_taken = ctx.gpr[2] == 0u;
    // nop
      if (branch_taken) {
          goto L_088DEA3C;
      }
      goto L_088DEA28;
    }
L_088DEA28:
    ctx.set_gpr(2, rt.memory().aot_load32(ctx.gpr[2] + static_cast<std::uint32_t>(36)));
    ctx.set_gpr(2, ctx.gpr[2] & 4u);
    ctx.set_gpr(2, 0u < ctx.gpr[2] ? 1u : 0u);
    { const bool branch_taken = ctx.gpr[2] != 0u;
    // nop
      if (branch_taken) {
          goto L_088DEA44;
      }
      goto L_088DEA3C;
    }
L_088DEA3C:
    ctx.set_gpr(31, 0x088DEA44u);
    // nop
    goto L_088DEAC8;
L_088DEA44:
    ctx.set_gpr(2, 2245u << 16u);
    ctx.set_gpr(2, rt.memory().aot_load32(ctx.gpr[2] + static_cast<std::uint32_t>(27152)));
    ctx.set_gpr(31, rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(12)));
    ctx.set_gpr(29, ctx.gpr[29] + static_cast<std::uint32_t>(16));
    jump_target = ctx.gpr[31];
    // nop
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_088DEA5C:
    ctx.set_gpr(29, ctx.gpr[29] + static_cast<std::uint32_t>(-80));
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(12), ctx.gpr[31]);
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(8), ctx.gpr[16]);
    ctx.set_gpr(4, ctx.gpr[29] + static_cast<std::uint32_t>(28));
    ctx.set_gpr(31, 0x088DEA74u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0086_entry, 86u, 812u, 0x0895F6B0u>(ctx, &aot_mem) && ctx.pc == 0x088DEA74u) goto L_088DEA74;
    return;
L_088DEA74:
    ctx.set_gpr(2, 2232u << 16u);
    ctx.set_gpr(2, ctx.gpr[2] + static_cast<std::uint32_t>(-10420));
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(28), ctx.gpr[2]);
    ctx.set_gpr(31, 0x088DEA88u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0064_entry, 64u, 444u, 0x08905FF0u>(ctx, &aot_mem) && ctx.pc == 0x088DEA88u) goto L_088DEA88;
    return;
L_088DEA88:
    ctx.set_gpr(2, rt.memory().aot_load32(ctx.gpr[2] + static_cast<std::uint32_t>(932)));
    ctx.set_gpr(2, ctx.gpr[2] + ctx.gpr[29]);
    ctx.set_gpr(16, rt.memory().aot_load32(ctx.gpr[2] + static_cast<std::uint32_t>(28)));
    ctx.set_gpr(2, 2232u << 16u);
    ctx.set_gpr(2, ctx.gpr[2] + static_cast<std::uint32_t>(-5492));
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(28), ctx.gpr[2]);
    ctx.set_gpr(4, ctx.gpr[29] + static_cast<std::uint32_t>(40));
    ctx.set_gpr(5, 0u + static_cast<std::uint32_t>(-1));
    ctx.set_gpr(31, 0x088DEAB0u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0020_entry, 20u, 288u, 0x088555D0u>(ctx, &aot_mem) && ctx.pc == 0x088DEAB0u) goto L_088DEAB0;
    return;
L_088DEAB0:
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
L_088DEAC8:
    ctx.set_gpr(29, ctx.gpr[29] + static_cast<std::uint32_t>(-16));
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(12), ctx.gpr[31]);
    ctx.set_gpr(4, 2190u << 16u);
    ctx.set_gpr(4, ctx.gpr[4] + static_cast<std::uint32_t>(-5392));
    ctx.set_gpr(31, 0x088DEAE0u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0080_entry, 80u, 286u, 0x08945508u>(ctx, &aot_mem) && ctx.pc == 0x088DEAE0u) goto L_088DEAE0;
    return;
L_088DEAE0:
    ctx.set_gpr(31, rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(12)));
    ctx.set_gpr(29, ctx.gpr[29] + static_cast<std::uint32_t>(16));
    jump_target = ctx.gpr[31];
    // nop
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_088DEAF0:
    ctx.set_gpr(29, ctx.gpr[29] + static_cast<std::uint32_t>(-32));
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(28), ctx.gpr[31]);
    ctx.set_gpr(31, 0x088DEB00u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0052_entry, 52u, 154u, 0x088D49C4u>(ctx, &aot_mem) && ctx.pc == 0x088DEB00u) goto L_088DEB00;
    return;
L_088DEB00:
    ctx.set_gpr(2, 2190u << 16u);
    ctx.set_gpr(2, ctx.gpr[2] + static_cast<std::uint32_t>(-5220));
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(0), ctx.gpr[2]);
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(4), 0u);
    ctx.set_gpr(2, 2227u << 16u);
    ctx.set_gpr(2, ctx.gpr[2] + static_cast<std::uint32_t>(24600));
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(8), ctx.gpr[2]);
    ctx.set_gpr(4, 0u + 0u);
    ctx.set_gpr(5, 2245u << 16u);
    ctx.set_gpr(5, ctx.gpr[5] + static_cast<std::uint32_t>(27152));
    ctx.set_gpr(6, 2190u << 16u);
    ctx.set_gpr(6, ctx.gpr[6] + static_cast<std::uint32_t>(-4296));
    ctx.set_gpr(7, 2190u << 16u);
    ctx.set_gpr(7, ctx.gpr[7] + static_cast<std::uint32_t>(-5236));
    ctx.set_gpr(8, 2190u << 16u);
    ctx.set_gpr(8, ctx.gpr[8] + static_cast<std::uint32_t>(-5268));
    ctx.set_gpr(9, 2227u << 16u);
    ctx.set_gpr(9, ctx.gpr[9] + static_cast<std::uint32_t>(24608));
    ctx.set_gpr(10, 0u + static_cast<std::uint32_t>(52));
    ctx.set_gpr(11, 2190u << 16u);
    ctx.set_gpr(11, ctx.gpr[11] + static_cast<std::uint32_t>(-5540));
    ctx.set_gpr(31, 0x088DEB5Cu);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0080_entry, 80u, 294u, 0x08945594u>(ctx, &aot_mem) && ctx.pc == 0x088DEB5Cu) goto L_088DEB5C;
    return;
L_088DEB5C:
    ctx.set_gpr(31, rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(28)));
    ctx.set_gpr(29, ctx.gpr[29] + static_cast<std::uint32_t>(32));
    jump_target = ctx.gpr[31];
    // nop
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_088DEB6C:
    ctx.set_gpr(29, ctx.gpr[29] + static_cast<std::uint32_t>(-16));
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(12), ctx.gpr[31]);
    ctx.set_gpr(31, 0x088DEB7Cu);
    // nop
    goto L_088DEA10;
L_088DEB7C:
    ctx.set_gpr(31, rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(12)));
    ctx.set_gpr(29, ctx.gpr[29] + static_cast<std::uint32_t>(16));
    jump_target = ctx.gpr[31];
    // nop
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_088DEB8C:
    ctx.set_gpr(2, 2245u << 16u);
    ctx.set_gpr(2, rt.memory().aot_load32(ctx.gpr[2] + static_cast<std::uint32_t>(27164)));
    jump_target = ctx.gpr[31];
    // nop
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_088DEB9C:
    ctx.set_gpr(29, ctx.gpr[29] + static_cast<std::uint32_t>(-16));
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(12), ctx.gpr[31]);
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(8), ctx.gpr[17]);
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(4), ctx.gpr[16]);
    ctx.set_gpr(2, 2245u << 16u);
    ctx.set_gpr(16, rt.memory().aot_load32(ctx.gpr[2] + static_cast<std::uint32_t>(27152)));
    ctx.set_gpr(4, ctx.gpr[16] + 0u);
    ctx.set_gpr(31, 0x088DEBC0u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0080_entry, 80u, 236u, 0x089451A8u>(ctx, &aot_mem) && ctx.pc == 0x088DEBC0u) goto L_088DEBC0;
    return;
L_088DEBC0:
    ctx.set_gpr(17, ctx.gpr[2] + 0u);
    ctx.set_gpr(4, ctx.gpr[16] + 0u);
    ctx.set_gpr(5, 2227u << 16u);
    ctx.set_gpr(5, ctx.gpr[5] + static_cast<std::uint32_t>(24640));
    ctx.set_gpr(6, 0u + static_cast<std::uint32_t>(1));
    ctx.set_gpr(31, 0x088DEBDCu);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0080_entry, 80u, 151u, 0x08944B98u>(ctx, &aot_mem) && ctx.pc == 0x088DEBDCu) goto L_088DEBDC;
    return;
L_088DEBDC:
    ctx.set_gpr(4, ctx.gpr[16] + 0u);
    ctx.set_gpr(5, ctx.gpr[17] + 0u);
    ctx.set_gpr(31, 0x088DEBECu);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0080_entry, 80u, 148u, 0x08944B4Cu>(ctx, &aot_mem) && ctx.pc == 0x088DEBECu) goto L_088DEBEC;
    return;
L_088DEBEC:
    ctx.set_gpr(4, ctx.gpr[2] + 0u);
    ctx.set_gpr(5, 0u + static_cast<std::uint32_t>(1));
    ctx.set_gpr(31, 0x088DEBFCu);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0072_entry, 72u, 648u, 0x08926D64u>(ctx, &aot_mem) && ctx.pc == 0x088DEBFCu) goto L_088DEBFC;
    return;
L_088DEBFC:
    ctx.set_gpr(4, ctx.gpr[16] + 0u);
    ctx.set_gpr(5, 2227u << 16u);
    ctx.set_gpr(5, ctx.gpr[5] + static_cast<std::uint32_t>(24644));
    ctx.set_gpr(6, 2227u << 16u);
    ctx.set_gpr(6, ctx.gpr[6] + static_cast<std::uint32_t>(24648));
    ctx.set_gpr(7, 2227u << 16u);
    ctx.set_gpr(7, ctx.gpr[7] + static_cast<std::uint32_t>(24652));
    ctx.set_gpr(8, ctx.gpr[17] + 0u);
    ctx.set_gpr(31, 0x088DEC24u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0080_entry, 80u, 162u, 0x08944C7Cu>(ctx, &aot_mem) && ctx.pc == 0x088DEC24u) goto L_088DEC24;
    return;
L_088DEC24:
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
L_088DEC3C:
    ctx.set_gpr(29, ctx.gpr[29] + static_cast<std::uint32_t>(-16));
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(12), ctx.gpr[31]);
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(8), ctx.gpr[16]);
    ctx.set_gpr(3, 2245u << 16u);
    ctx.set_gpr(3, rt.memory().aot_load32(ctx.gpr[3] + static_cast<std::uint32_t>(27156)));
    { const bool branch_taken = ctx.gpr[3] != 0u;
    // nop
      if (branch_taken) {
          goto L_088DED04;
      }
      goto L_088DEC58;
    }
L_088DEC58:
    ctx.set_gpr(31, 0x088DEC60u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0078_entry, 78u, 217u, 0x0893CDECu>(ctx, &aot_mem) && ctx.pc == 0x088DEC60u) goto L_088DEC60;
    return;
L_088DEC60:
    ctx.set_gpr(4, rt.memory().aot_load32(ctx.gpr[2] + static_cast<std::uint32_t>(0)));
    ctx.set_gpr(31, 0x088DEC6Cu);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0078_entry, 78u, 199u, 0x0893CC68u>(ctx, &aot_mem) && ctx.pc == 0x088DEC6Cu) goto L_088DEC6C;
    return;
L_088DEC6C:
    ctx.set_gpr(3, 2245u << 16u);
    ctx.set_gpr(4, rt.memory().aot_load32(ctx.gpr[3] + static_cast<std::uint32_t>(27152)));
    ctx.set_gpr(5, ctx.gpr[2] + 0u);
    ctx.set_gpr(31, 0x088DEC80u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0080_entry, 80u, 50u, 0x089443D4u>(ctx, &aot_mem) && ctx.pc == 0x088DEC80u) goto L_088DEC80;
    return;
L_088DEC80:
    ctx.set_gpr(3, 2245u << 16u);
    rt.memory().aot_store32(ctx.gpr[3] + static_cast<std::uint32_t>(27156), ctx.gpr[2]);
    ctx.set_gpr(16, ctx.gpr[2] + 0u);
    { const bool branch_taken = ctx.gpr[16] == 0u;
    // nop
      if (branch_taken) {
          goto L_088DED04;
      }
      goto L_088DEC94;
    }
L_088DEC94:
    ctx.set_gpr(31, 0x088DEC9Cu);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0079_entry, 79u, 538u, 0x089425E0u>(ctx, &aot_mem) && ctx.pc == 0x088DEC9Cu) goto L_088DEC9C;
    return;
L_088DEC9C:
    ctx.set_gpr(4, ctx.gpr[2] + 0u);
    ctx.set_gpr(5, ctx.gpr[16] + 0u);
    ctx.set_gpr(31, 0x088DECACu);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0072_entry, 72u, 751u, 0x08927514u>(ctx, &aot_mem) && ctx.pc == 0x088DECACu) goto L_088DECAC;
    return;
L_088DECAC:
    ctx.set_gpr(2, 2245u << 16u);
    ctx.set_gpr(4, rt.memory().aot_load32(ctx.gpr[2] + static_cast<std::uint32_t>(27156)));
    ctx.set_gpr(2, rt.memory().aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(4)));
    ctx.set_gpr(2, ctx.gpr[2] + static_cast<std::uint32_t>(-1));
    rt.memory().aot_store32(ctx.gpr[4] + static_cast<std::uint32_t>(4), ctx.gpr[2]);
    ctx.set_gpr(2, ctx.gpr[2] << 10u);
    ctx.set_gpr(2, ctx.gpr[2] >> 10u);
    { const bool branch_taken = ctx.gpr[2] != 0u;
    // nop
      if (branch_taken) {
          goto L_088DECD8;
      }
      goto L_088DECD0;
    }
L_088DECD0:
    ctx.set_gpr(31, 0x088DECD8u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0080_entry, 80u, 556u, 0x089467C8u>(ctx, &aot_mem) && ctx.pc == 0x088DECD8u) goto L_088DECD8;
    return;
L_088DECD8:
    ctx.set_gpr(31, 0x088DECE0u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0079_entry, 79u, 538u, 0x089425E0u>(ctx, &aot_mem) && ctx.pc == 0x088DECE0u) goto L_088DECE0;
    return;
L_088DECE0:
    ctx.set_gpr(2, rt.memory().aot_load32(ctx.gpr[2] + static_cast<std::uint32_t>(12)));
    ctx.set_gpr(3, ctx.gpr[2] + static_cast<std::uint32_t>(-1));
    ctx.set_gpr(2, 2245u << 16u);
    ctx.set_gpr(2, rt.memory().aot_load32(ctx.gpr[2] + static_cast<std::uint32_t>(27156)));
    rt.memory().aot_store16(ctx.gpr[2] + static_cast<std::uint32_t>(18), static_cast<std::uint16_t>(ctx.gpr[3]));
    ctx.set_gpr(2, 2245u << 16u);
    ctx.set_gpr(4, rt.memory().aot_load32(ctx.gpr[2] + static_cast<std::uint32_t>(27156)));
    ctx.set_gpr(31, 0x088DED04u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0079_entry, 79u, 598u, 0x08942A18u>(ctx, &aot_mem) && ctx.pc == 0x088DED04u) goto L_088DED04;
    return;
L_088DED04:
    ctx.set_gpr(31, rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(12)));
    ctx.set_gpr(16, rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(8)));
    ctx.set_gpr(29, ctx.gpr[29] + static_cast<std::uint32_t>(16));
    jump_target = ctx.gpr[31];
    // nop
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_088DED18:
    ctx.set_gpr(29, ctx.gpr[29] + static_cast<std::uint32_t>(-16));
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(12), ctx.gpr[31]);
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(8), ctx.gpr[16]);
    ctx.set_gpr(16, ctx.gpr[4] + 0u);
    ctx.set_gpr(31, 0x088DED30u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0064_entry, 64u, 444u, 0x08905FF0u>(ctx, &aot_mem) && ctx.pc == 0x088DED30u) goto L_088DED30;
    return;
L_088DED30:
    ctx.set_gpr(2, rt.memory().aot_load8(ctx.gpr[2] + static_cast<std::uint32_t>(0)));
    { const bool branch_taken = ctx.gpr[2] == 0u;
    // nop
      if (branch_taken) {
          goto L_088DED64;
      }
      goto L_088DED3C;
    }
L_088DED3C:
    ctx.set_gpr(31, 0x088DED44u);
    // nop
    goto L_088DEF10;
L_088DED44:
    ctx.set_gpr(2, 2245u << 16u);
    ctx.set_gpr(4, rt.memory().aot_load32(ctx.gpr[2] + static_cast<std::uint32_t>(27164)));
    ctx.set_gpr(5, ctx.gpr[16] + 0u);
    ctx.set_gpr(31, 0x088DED58u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0080_entry, 80u, 50u, 0x089443D4u>(ctx, &aot_mem) && ctx.pc == 0x088DED58u) goto L_088DED58;
    return;
L_088DED58:
    ctx.set_gpr(16, ctx.gpr[2] + 0u);
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_088DEDC4;
      }
      goto L_088DED64;
    }
L_088DED64:
    ctx.set_gpr(4, 0u + static_cast<std::uint32_t>(48));
    ctx.set_gpr(5, 0u + 0u);
    ctx.set_gpr(6, ctx.gpr[16] + 0u);
    ctx.set_gpr(31, 0x088DED78u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0080_entry, 80u, 542u, 0x089466FCu>(ctx, &aot_mem) && ctx.pc == 0x088DED78u) goto L_088DED78;
    return;
L_088DED78:
    ctx.set_gpr(16, ctx.gpr[2] + 0u);
    { const bool branch_taken = ctx.gpr[16] == 0u;
    // nop
      if (branch_taken) {
          goto L_088DED98;
      }
      goto L_088DED84;
    }
L_088DED84:
    ctx.set_gpr(4, ctx.gpr[16] + 0u);
    ctx.set_gpr(5, 0u + static_cast<std::uint32_t>(1));
    ctx.set_gpr(31, 0x088DED94u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0086_entry, 86u, 808u, 0x0895F660u>(ctx, &aot_mem) && ctx.pc == 0x088DED94u) goto L_088DED94;
    return;
L_088DED94:
    ctx.set_gpr(16, ctx.gpr[2] + 0u);
    goto L_088DED98;
L_088DED98:
    ctx.set_gpr(4, ctx.gpr[16] + 0u);
    ctx.set_gpr(25, rt.memory().aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(0)));
    ctx.set_gpr(25, rt.memory().aot_load32(ctx.gpr[25] + static_cast<std::uint32_t>(44)));
    jump_target = ctx.gpr[25];
    ctx.set_gpr(31, 0x088DEDACu);
    // nop
    ctx.pc = jump_target;
    if (rt.invoke_chained_call(ctx, &aot_mem) && ctx.pc == 0x088DEDACu) goto L_088DEDAC;
    return;
L_088DEDAC:
    ctx.set_gpr(4, ctx.gpr[16] + 0u);
    ctx.set_gpr(5, 0u + 0u);
    ctx.set_gpr(25, rt.memory().aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(0)));
    ctx.set_gpr(25, rt.memory().aot_load32(ctx.gpr[25] + static_cast<std::uint32_t>(36)));
    jump_target = ctx.gpr[25];
    ctx.set_gpr(31, 0x088DEDC4u);
    // nop
    ctx.pc = jump_target;
    if (rt.invoke_chained_call(ctx, &aot_mem) && ctx.pc == 0x088DEDC4u) goto L_088DEDC4;
    return;
L_088DEDC4:
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
L_088DEDDC:
    ctx.set_gpr(29, ctx.gpr[29] + static_cast<std::uint32_t>(-16));
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(12), ctx.gpr[31]);
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(8), ctx.gpr[17]);
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(4), ctx.gpr[16]);
    ctx.set_gpr(17, ctx.gpr[4] + 0u);
    ctx.set_gpr(16, ctx.gpr[5] + 0u);
    ctx.set_gpr(31, 0x088DEDFCu);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0064_entry, 64u, 444u, 0x08905FF0u>(ctx, &aot_mem) && ctx.pc == 0x088DEDFCu) goto L_088DEDFC;
    return;
L_088DEDFC:
    ctx.set_gpr(2, rt.memory().aot_load8(ctx.gpr[2] + static_cast<std::uint32_t>(0)));
    { const bool branch_taken = ctx.gpr[2] == 0u;
    // nop
      if (branch_taken) {
          goto L_088DEE28;
      }
      goto L_088DEE08;
    }
L_088DEE08:
    ctx.set_gpr(31, 0x088DEE10u);
    // nop
    goto L_088DEF10;
L_088DEE10:
    ctx.set_gpr(4, ctx.gpr[17] + 0u);
    ctx.set_gpr(5, ctx.gpr[16] + 0u);
    ctx.set_gpr(31, 0x088DEE20u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0080_entry, 80u, 848u, 0x08947E90u>(ctx, &aot_mem) && ctx.pc == 0x088DEE20u) goto L_088DEE20;
    return;
L_088DEE20:
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_088DEE50;
      }
      goto L_088DEE28;
    }
L_088DEE28:
    ctx.set_gpr(4, 0u + static_cast<std::uint32_t>(48));
    ctx.set_gpr(5, 0u + 0u);
    ctx.set_gpr(31, 0x088DEE38u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0080_entry, 80u, 552u, 0x08946784u>(ctx, &aot_mem) && ctx.pc == 0x088DEE38u) goto L_088DEE38;
    return;
L_088DEE38:
    { const bool branch_taken = ctx.gpr[2] == 0u;
    // nop
      if (branch_taken) {
          goto L_088DEE50;
      }
      goto L_088DEE40;
    }
L_088DEE40:
    ctx.set_gpr(4, ctx.gpr[2] + 0u);
    ctx.set_gpr(5, ctx.gpr[17] + 0u);
    ctx.set_gpr(31, 0x088DEE50u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0086_entry, 86u, 814u, 0x0895F6ECu>(ctx, &aot_mem) && ctx.pc == 0x088DEE50u) goto L_088DEE50;
    return;
L_088DEE50:
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
L_088DEE68:
    ctx.set_gpr(29, ctx.gpr[29] + static_cast<std::uint32_t>(-16));
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(12), ctx.gpr[31]);
    ctx.set_gpr(2, 2245u << 16u);
    ctx.set_gpr(2, rt.memory().aot_load32(ctx.gpr[2] + static_cast<std::uint32_t>(27164)));
    { const bool branch_taken = ctx.gpr[2] == 0u;
    // nop
      if (branch_taken) {
          goto L_088DEE94;
      }
      goto L_088DEE80;
    }
L_088DEE80:
    ctx.set_gpr(2, rt.memory().aot_load32(ctx.gpr[2] + static_cast<std::uint32_t>(36)));
    ctx.set_gpr(2, ctx.gpr[2] & 4u);
    ctx.set_gpr(2, 0u < ctx.gpr[2] ? 1u : 0u);
    { const bool branch_taken = ctx.gpr[2] != 0u;
    // nop
      if (branch_taken) {
          goto L_088DEE9C;
      }
      goto L_088DEE94;
    }
L_088DEE94:
    ctx.set_gpr(31, 0x088DEE9Cu);
    // nop
    goto L_088DEF10;
L_088DEE9C:
    ctx.set_gpr(2, 2245u << 16u);
    ctx.set_gpr(2, rt.memory().aot_load32(ctx.gpr[2] + static_cast<std::uint32_t>(27164)));
    ctx.set_gpr(31, rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(12)));
    ctx.set_gpr(29, ctx.gpr[29] + static_cast<std::uint32_t>(16));
    jump_target = ctx.gpr[31];
    // nop
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_088DEEB4:
    ctx.set_gpr(29, ctx.gpr[29] + static_cast<std::uint32_t>(-64));
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(12), ctx.gpr[31]);
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(8), ctx.gpr[16]);
    ctx.set_gpr(4, ctx.gpr[29] + static_cast<std::uint32_t>(16));
    ctx.set_gpr(31, 0x088DEECCu);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0086_entry, 86u, 812u, 0x0895F6B0u>(ctx, &aot_mem) && ctx.pc == 0x088DEECCu) goto L_088DEECC;
    return;
L_088DEECC:
    ctx.set_gpr(31, 0x088DEED4u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0064_entry, 64u, 444u, 0x08905FF0u>(ctx, &aot_mem) && ctx.pc == 0x088DEED4u) goto L_088DEED4;
    return;
L_088DEED4:
    ctx.set_gpr(2, rt.memory().aot_load32(ctx.gpr[2] + static_cast<std::uint32_t>(932)));
    ctx.set_gpr(2, ctx.gpr[2] + ctx.gpr[29]);
    ctx.set_gpr(16, rt.memory().aot_load32(ctx.gpr[2] + static_cast<std::uint32_t>(16)));
    ctx.set_gpr(2, 2232u << 16u);
    ctx.set_gpr(2, ctx.gpr[2] + static_cast<std::uint32_t>(-5492));
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(16), ctx.gpr[2]);
    ctx.set_gpr(4, ctx.gpr[29] + static_cast<std::uint32_t>(28));
    ctx.set_gpr(31, 0x088DEEF8u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0019_entry, 19u, 764u, 0x08853094u>(ctx, &aot_mem) && ctx.pc == 0x088DEEF8u) goto L_088DEEF8;
    return;
L_088DEEF8:
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
L_088DEF10:
    ctx.set_gpr(29, ctx.gpr[29] + static_cast<std::uint32_t>(-16));
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(12), ctx.gpr[31]);
    ctx.set_gpr(4, 2190u << 16u);
    ctx.set_gpr(4, ctx.gpr[4] + static_cast<std::uint32_t>(-4296));
    ctx.set_gpr(31, 0x088DEF28u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0080_entry, 80u, 286u, 0x08945508u>(ctx, &aot_mem) && ctx.pc == 0x088DEF28u) goto L_088DEF28;
    return;
L_088DEF28:
    ctx.set_gpr(31, rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(12)));
    ctx.set_gpr(29, ctx.gpr[29] + static_cast<std::uint32_t>(16));
    jump_target = ctx.gpr[31];
    // nop
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_088DEF38:
    ctx.set_gpr(29, ctx.gpr[29] + static_cast<std::uint32_t>(-32));
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(28), ctx.gpr[31]);
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(0), 0u);
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(4), 0u);
    ctx.set_gpr(2, 2227u << 16u);
    ctx.set_gpr(2, ctx.gpr[2] + static_cast<std::uint32_t>(24656));
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(8), ctx.gpr[2]);
    ctx.set_gpr(4, 0u + 0u);
    ctx.set_gpr(5, 2245u << 16u);
    ctx.set_gpr(5, ctx.gpr[5] + static_cast<std::uint32_t>(27164));
    ctx.set_gpr(6, 2190u << 16u);
    ctx.set_gpr(6, ctx.gpr[6] + static_cast<std::uint32_t>(-19704));
    ctx.set_gpr(7, 2189u << 16u);
    ctx.set_gpr(7, ctx.gpr[7] + static_cast<std::uint32_t>(31824));
    ctx.set_gpr(8, 2190u << 16u);
    ctx.set_gpr(8, ctx.gpr[8] + static_cast<std::uint32_t>(-4188));
    ctx.set_gpr(9, 2227u << 16u);
    ctx.set_gpr(9, ctx.gpr[9] + static_cast<std::uint32_t>(24664));
    ctx.set_gpr(10, 0u + static_cast<std::uint32_t>(48));
    ctx.set_gpr(11, 2190u << 16u);
    ctx.set_gpr(11, ctx.gpr[11] + static_cast<std::uint32_t>(-4428));
    ctx.set_gpr(31, 0x088DEF94u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0080_entry, 80u, 294u, 0x08945594u>(ctx, &aot_mem) && ctx.pc == 0x088DEF94u) goto L_088DEF94;
    return;
L_088DEF94:
    ctx.set_gpr(31, rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(28)));
    ctx.set_gpr(29, ctx.gpr[29] + static_cast<std::uint32_t>(32));
    jump_target = ctx.gpr[31];
    // nop
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_088DEFA4:
    ctx.set_gpr(29, ctx.gpr[29] + static_cast<std::uint32_t>(-16));
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(12), ctx.gpr[31]);
    ctx.set_gpr(31, 0x088DEFB4u);
    // nop
    goto L_088DEE68;
L_088DEFB4:
    ctx.set_gpr(31, rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(12)));
    ctx.set_gpr(29, ctx.gpr[29] + static_cast<std::uint32_t>(16));
    jump_target = ctx.gpr[31];
    // nop
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_088DEFC4:
    ctx.set_gpr(29, ctx.gpr[29] + static_cast<std::uint32_t>(-16));
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(12), ctx.gpr[31]);
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(8), ctx.gpr[16]);
    ctx.set_gpr(3, 2245u << 16u);
    ctx.set_gpr(3, rt.memory().aot_load32(ctx.gpr[3] + static_cast<std::uint32_t>(27168)));
    { const bool branch_taken = ctx.gpr[3] != 0u;
    // nop
      if (branch_taken) {
          goto L_088DF08C;
      }
      goto L_088DEFE0;
    }
L_088DEFE0:
    ctx.set_gpr(31, 0x088DEFE8u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0078_entry, 78u, 217u, 0x0893CDECu>(ctx, &aot_mem) && ctx.pc == 0x088DEFE8u) goto L_088DEFE8;
    return;
L_088DEFE8:
    ctx.set_gpr(4, rt.memory().aot_load32(ctx.gpr[2] + static_cast<std::uint32_t>(0)));
    ctx.set_gpr(31, 0x088DEFF4u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0078_entry, 78u, 199u, 0x0893CC68u>(ctx, &aot_mem) && ctx.pc == 0x088DEFF4u) goto L_088DEFF4;
    return;
L_088DEFF4:
    ctx.set_gpr(3, 2245u << 16u);
    ctx.set_gpr(4, rt.memory().aot_load32(ctx.gpr[3] + static_cast<std::uint32_t>(27164)));
    ctx.set_gpr(5, ctx.gpr[2] + 0u);
    ctx.set_gpr(31, 0x088DF008u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0080_entry, 80u, 50u, 0x089443D4u>(ctx, &aot_mem) && ctx.pc == 0x088DF008u) goto L_088DF008;
    return;
L_088DF008:
    ctx.set_gpr(3, 2245u << 16u);
    rt.memory().aot_store32(ctx.gpr[3] + static_cast<std::uint32_t>(27168), ctx.gpr[2]);
    ctx.set_gpr(16, ctx.gpr[2] + 0u);
    { const bool branch_taken = ctx.gpr[16] == 0u;
    // nop
      if (branch_taken) {
          goto L_088DF08C;
      }
      goto L_088DF01C;
    }
L_088DF01C:
    ctx.set_gpr(31, 0x088DF024u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0079_entry, 79u, 538u, 0x089425E0u>(ctx, &aot_mem) && ctx.pc == 0x088DF024u) goto L_088DF024;
    return;
L_088DF024:
    ctx.set_gpr(4, ctx.gpr[2] + 0u);
    ctx.set_gpr(5, ctx.gpr[16] + 0u);
    ctx.set_gpr(31, 0x088DF034u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0072_entry, 72u, 751u, 0x08927514u>(ctx, &aot_mem) && ctx.pc == 0x088DF034u) goto L_088DF034;
    return;
L_088DF034:
    ctx.set_gpr(2, 2245u << 16u);
    ctx.set_gpr(4, rt.memory().aot_load32(ctx.gpr[2] + static_cast<std::uint32_t>(27168)));
    ctx.set_gpr(2, rt.memory().aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(4)));
    ctx.set_gpr(2, ctx.gpr[2] + static_cast<std::uint32_t>(-1));
    rt.memory().aot_store32(ctx.gpr[4] + static_cast<std::uint32_t>(4), ctx.gpr[2]);
    ctx.set_gpr(2, ctx.gpr[2] << 10u);
    ctx.set_gpr(2, ctx.gpr[2] >> 10u);
    { const bool branch_taken = ctx.gpr[2] != 0u;
    // nop
      if (branch_taken) {
          goto L_088DF060;
      }
      goto L_088DF058;
    }
L_088DF058:
    ctx.set_gpr(31, 0x088DF060u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0080_entry, 80u, 556u, 0x089467C8u>(ctx, &aot_mem) && ctx.pc == 0x088DF060u) goto L_088DF060;
    return;
L_088DF060:
    ctx.set_gpr(31, 0x088DF068u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0079_entry, 79u, 538u, 0x089425E0u>(ctx, &aot_mem) && ctx.pc == 0x088DF068u) goto L_088DF068;
    return;
L_088DF068:
    ctx.set_gpr(2, rt.memory().aot_load32(ctx.gpr[2] + static_cast<std::uint32_t>(12)));
    ctx.set_gpr(3, ctx.gpr[2] + static_cast<std::uint32_t>(-1));
    ctx.set_gpr(2, 2245u << 16u);
    ctx.set_gpr(2, rt.memory().aot_load32(ctx.gpr[2] + static_cast<std::uint32_t>(27168)));
    rt.memory().aot_store16(ctx.gpr[2] + static_cast<std::uint32_t>(18), static_cast<std::uint16_t>(ctx.gpr[3]));
    ctx.set_gpr(2, 2245u << 16u);
    ctx.set_gpr(4, rt.memory().aot_load32(ctx.gpr[2] + static_cast<std::uint32_t>(27168)));
    ctx.set_gpr(31, 0x088DF08Cu);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0079_entry, 79u, 598u, 0x08942A18u>(ctx, &aot_mem) && ctx.pc == 0x088DF08Cu) goto L_088DF08C;
    return;
L_088DF08C:
    ctx.set_gpr(31, rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(12)));
    ctx.set_gpr(16, rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(8)));
    ctx.set_gpr(29, ctx.gpr[29] + static_cast<std::uint32_t>(16));
    jump_target = ctx.gpr[31];
    // nop
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_088DF0A0:
    ctx.set_gpr(29, ctx.gpr[29] + static_cast<std::uint32_t>(-16));
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(12), ctx.gpr[31]);
    ctx.set_gpr(2, 2245u << 16u);
    ctx.set_gpr(2, rt.memory().aot_load32(ctx.gpr[2] + static_cast<std::uint32_t>(27168)));
    { const bool branch_taken = ctx.gpr[2] != 0u;
    // nop
      if (branch_taken) {
          goto L_088DF0C0;
      }
      goto L_088DF0B8;
    }
L_088DF0B8:
    ctx.set_gpr(31, 0x088DF0C0u);
    // nop
    goto L_088DEF10;
L_088DF0C0:
    ctx.set_gpr(2, 2245u << 16u);
    ctx.set_gpr(2, rt.memory().aot_load32(ctx.gpr[2] + static_cast<std::uint32_t>(27168)));
    ctx.set_gpr(31, rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(12)));
    ctx.set_gpr(29, ctx.gpr[29] + static_cast<std::uint32_t>(16));
    jump_target = ctx.gpr[31];
    // nop
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_088DF0D8:
    ctx.set_gpr(29, ctx.gpr[29] + static_cast<std::uint32_t>(-16));
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(12), ctx.gpr[31]);
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(8), ctx.gpr[16]);
    ctx.set_gpr(16, ctx.gpr[4] + 0u);
    ctx.set_gpr(31, 0x088DF0F0u);
    // nop
    goto L_088DF1D0;
L_088DF0F0:
    ctx.set_gpr(2, 2245u << 16u);
    ctx.set_gpr(4, rt.memory().aot_load32(ctx.gpr[2] + static_cast<std::uint32_t>(27172)));
    ctx.set_gpr(5, ctx.gpr[16] + 0u);
    ctx.set_gpr(31, 0x088DF104u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0080_entry, 80u, 50u, 0x089443D4u>(ctx, &aot_mem) && ctx.pc == 0x088DF104u) goto L_088DF104;
    return;
L_088DF104:
    ctx.set_gpr(31, rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(12)));
    ctx.set_gpr(16, rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(8)));
    ctx.set_gpr(29, ctx.gpr[29] + static_cast<std::uint32_t>(16));
    jump_target = ctx.gpr[31];
    // nop
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_088DF118:
    ctx.set_gpr(29, ctx.gpr[29] + static_cast<std::uint32_t>(-16));
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(12), ctx.gpr[31]);
    ctx.set_gpr(2, 2245u << 16u);
    ctx.set_gpr(2, rt.memory().aot_load32(ctx.gpr[2] + static_cast<std::uint32_t>(27172)));
    { const bool branch_taken = ctx.gpr[2] == 0u;
    // nop
      if (branch_taken) {
          goto L_088DF144;
      }
      goto L_088DF130;
    }
L_088DF130:
    ctx.set_gpr(2, rt.memory().aot_load32(ctx.gpr[2] + static_cast<std::uint32_t>(36)));
    ctx.set_gpr(2, ctx.gpr[2] & 4u);
    ctx.set_gpr(2, 0u < ctx.gpr[2] ? 1u : 0u);
    { const bool branch_taken = ctx.gpr[2] != 0u;
    // nop
      if (branch_taken) {
          goto L_088DF14C;
      }
      goto L_088DF144;
    }
L_088DF144:
    ctx.set_gpr(31, 0x088DF14Cu);
    // nop
    goto L_088DF1D0;
L_088DF14C:
    ctx.set_gpr(2, 2245u << 16u);
    ctx.set_gpr(2, rt.memory().aot_load32(ctx.gpr[2] + static_cast<std::uint32_t>(27172)));
    ctx.set_gpr(31, rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(12)));
    ctx.set_gpr(29, ctx.gpr[29] + static_cast<std::uint32_t>(16));
    jump_target = ctx.gpr[31];
    // nop
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_088DF164:
    ctx.set_gpr(29, ctx.gpr[29] + static_cast<std::uint32_t>(-80));
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(12), ctx.gpr[31]);
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(8), ctx.gpr[16]);
    ctx.set_gpr(4, ctx.gpr[29] + static_cast<std::uint32_t>(28));
    ctx.set_gpr(31, 0x088DF17Cu);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0086_entry, 86u, 849u, 0x0895F99Cu>(ctx, &aot_mem) && ctx.pc == 0x088DF17Cu) goto L_088DF17C;
    return;
L_088DF17C:
    ctx.set_gpr(2, 2232u << 16u);
    ctx.set_gpr(2, ctx.gpr[2] + static_cast<std::uint32_t>(-10676));
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(28), ctx.gpr[2]);
    ctx.set_gpr(31, 0x088DF190u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0064_entry, 64u, 444u, 0x08905FF0u>(ctx, &aot_mem) && ctx.pc == 0x088DF190u) goto L_088DF190;
    return;
L_088DF190:
    ctx.set_gpr(2, rt.memory().aot_load32(ctx.gpr[2] + static_cast<std::uint32_t>(932)));
    ctx.set_gpr(2, ctx.gpr[2] + ctx.gpr[29]);
    ctx.set_gpr(16, rt.memory().aot_load32(ctx.gpr[2] + static_cast<std::uint32_t>(28)));
    ctx.set_gpr(2, 2232u << 16u);
    ctx.set_gpr(2, ctx.gpr[2] + static_cast<std::uint32_t>(-5492));
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(28), ctx.gpr[2]);
    ctx.set_gpr(4, ctx.gpr[29] + static_cast<std::uint32_t>(40));
    ctx.set_gpr(5, 0u + static_cast<std::uint32_t>(-1));
    ctx.set_gpr(31, 0x088DF1B8u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0020_entry, 20u, 288u, 0x088555D0u>(ctx, &aot_mem) && ctx.pc == 0x088DF1B8u) goto L_088DF1B8;
    return;
L_088DF1B8:
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
L_088DF1D0:
    ctx.set_gpr(29, ctx.gpr[29] + static_cast<std::uint32_t>(-16));
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(12), ctx.gpr[31]);
    ctx.set_gpr(4, 2190u << 16u);
    ctx.set_gpr(4, ctx.gpr[4] + static_cast<std::uint32_t>(-3592));
    ctx.set_gpr(31, 0x088DF1E8u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0080_entry, 80u, 286u, 0x08945508u>(ctx, &aot_mem) && ctx.pc == 0x088DF1E8u) goto L_088DF1E8;
    return;
L_088DF1E8:
    ctx.set_gpr(31, rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(12)));
    ctx.set_gpr(29, ctx.gpr[29] + static_cast<std::uint32_t>(16));
    jump_target = ctx.gpr[31];
    // nop
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_088DF1F8:
    ctx.set_gpr(29, ctx.gpr[29] + static_cast<std::uint32_t>(-32));
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(28), ctx.gpr[31]);
    ctx.set_gpr(31, 0x088DF208u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0052_entry, 52u, 154u, 0x088D49C4u>(ctx, &aot_mem) && ctx.pc == 0x088DF208u) goto L_088DF208;
    return;
L_088DF208:
    ctx.set_gpr(2, 2190u << 16u);
    ctx.set_gpr(2, ctx.gpr[2] + static_cast<std::uint32_t>(-3420));
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(0), ctx.gpr[2]);
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(4), 0u);
    ctx.set_gpr(2, 2227u << 16u);
    ctx.set_gpr(2, ctx.gpr[2] + static_cast<std::uint32_t>(24688));
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(8), ctx.gpr[2]);
    ctx.set_gpr(4, 0u + 0u);
    ctx.set_gpr(5, 2245u << 16u);
    ctx.set_gpr(5, ctx.gpr[5] + static_cast<std::uint32_t>(27172));
    ctx.set_gpr(6, 2190u << 16u);
    ctx.set_gpr(6, ctx.gpr[6] + static_cast<std::uint32_t>(-2496));
    ctx.set_gpr(7, 2190u << 16u);
    ctx.set_gpr(7, ctx.gpr[7] + static_cast<std::uint32_t>(-3436));
    ctx.set_gpr(8, 2190u << 16u);
    ctx.set_gpr(8, ctx.gpr[8] + static_cast<std::uint32_t>(-3468));
    ctx.set_gpr(9, 2227u << 16u);
    ctx.set_gpr(9, ctx.gpr[9] + static_cast<std::uint32_t>(24696));
    ctx.set_gpr(10, 0u + static_cast<std::uint32_t>(52));
    ctx.set_gpr(11, 2190u << 16u);
    ctx.set_gpr(11, ctx.gpr[11] + static_cast<std::uint32_t>(-3740));
    ctx.set_gpr(31, 0x088DF264u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0080_entry, 80u, 294u, 0x08945594u>(ctx, &aot_mem) && ctx.pc == 0x088DF264u) goto L_088DF264;
    return;
L_088DF264:
    ctx.set_gpr(31, rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(28)));
    ctx.set_gpr(29, ctx.gpr[29] + static_cast<std::uint32_t>(32));
    jump_target = ctx.gpr[31];
    // nop
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_088DF274:
    ctx.set_gpr(29, ctx.gpr[29] + static_cast<std::uint32_t>(-16));
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(12), ctx.gpr[31]);
    ctx.set_gpr(31, 0x088DF284u);
    // nop
    goto L_088DF118;
L_088DF284:
    ctx.set_gpr(31, rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(12)));
    ctx.set_gpr(29, ctx.gpr[29] + static_cast<std::uint32_t>(16));
    jump_target = ctx.gpr[31];
    // nop
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_088DF294:
    ctx.set_gpr(2, 2245u << 16u);
    ctx.set_gpr(2, rt.memory().aot_load32(ctx.gpr[2] + static_cast<std::uint32_t>(27184)));
    jump_target = ctx.gpr[31];
    // nop
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_088DF2A4:
    ctx.set_gpr(29, ctx.gpr[29] + static_cast<std::uint32_t>(-16));
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(12), ctx.gpr[31]);
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(8), ctx.gpr[17]);
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(4), ctx.gpr[16]);
    ctx.set_gpr(2, 2245u << 16u);
    ctx.set_gpr(16, rt.memory().aot_load32(ctx.gpr[2] + static_cast<std::uint32_t>(27172)));
    ctx.set_gpr(4, ctx.gpr[16] + 0u);
    ctx.set_gpr(31, 0x088DF2C8u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0080_entry, 80u, 236u, 0x089451A8u>(ctx, &aot_mem) && ctx.pc == 0x088DF2C8u) goto L_088DF2C8;
    return;
L_088DF2C8:
    ctx.set_gpr(17, ctx.gpr[2] + 0u);
    ctx.set_gpr(4, ctx.gpr[16] + 0u);
    ctx.set_gpr(5, 2227u << 16u);
    ctx.set_gpr(5, ctx.gpr[5] + static_cast<std::uint32_t>(24728));
    ctx.set_gpr(6, 0u + static_cast<std::uint32_t>(1));
    ctx.set_gpr(31, 0x088DF2E4u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0080_entry, 80u, 151u, 0x08944B98u>(ctx, &aot_mem) && ctx.pc == 0x088DF2E4u) goto L_088DF2E4;
    return;
L_088DF2E4:
    ctx.set_gpr(4, ctx.gpr[16] + 0u);
    ctx.set_gpr(5, ctx.gpr[17] + 0u);
    ctx.set_gpr(31, 0x088DF2F4u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0080_entry, 80u, 148u, 0x08944B4Cu>(ctx, &aot_mem) && ctx.pc == 0x088DF2F4u) goto L_088DF2F4;
    return;
L_088DF2F4:
    ctx.set_gpr(4, ctx.gpr[2] + 0u);
    ctx.set_gpr(5, 0u + static_cast<std::uint32_t>(1));
    ctx.set_gpr(31, 0x088DF304u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0072_entry, 72u, 648u, 0x08926D64u>(ctx, &aot_mem) && ctx.pc == 0x088DF304u) goto L_088DF304;
    return;
L_088DF304:
    ctx.set_gpr(4, ctx.gpr[16] + 0u);
    ctx.set_gpr(5, 2227u << 16u);
    ctx.set_gpr(5, ctx.gpr[5] + static_cast<std::uint32_t>(24732));
    ctx.set_gpr(6, 2227u << 16u);
    ctx.set_gpr(6, ctx.gpr[6] + static_cast<std::uint32_t>(24736));
    ctx.set_gpr(7, 2227u << 16u);
    ctx.set_gpr(7, ctx.gpr[7] + static_cast<std::uint32_t>(24740));
    ctx.set_gpr(8, ctx.gpr[17] + 0u);
    ctx.set_gpr(31, 0x088DF32Cu);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0080_entry, 80u, 162u, 0x08944C7Cu>(ctx, &aot_mem) && ctx.pc == 0x088DF32Cu) goto L_088DF32C;
    return;
L_088DF32C:
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
L_088DF344:
    ctx.set_gpr(29, ctx.gpr[29] + static_cast<std::uint32_t>(-16));
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(12), ctx.gpr[31]);
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(8), ctx.gpr[16]);
    ctx.set_gpr(3, 2245u << 16u);
    ctx.set_gpr(3, rt.memory().aot_load32(ctx.gpr[3] + static_cast<std::uint32_t>(27176)));
    { const bool branch_taken = ctx.gpr[3] != 0u;
    // nop
      if (branch_taken) {
          goto L_088DF40C;
      }
      goto L_088DF360;
    }
L_088DF360:
    ctx.set_gpr(31, 0x088DF368u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0078_entry, 78u, 217u, 0x0893CDECu>(ctx, &aot_mem) && ctx.pc == 0x088DF368u) goto L_088DF368;
    return;
L_088DF368:
    ctx.set_gpr(4, rt.memory().aot_load32(ctx.gpr[2] + static_cast<std::uint32_t>(0)));
    ctx.set_gpr(31, 0x088DF374u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0078_entry, 78u, 199u, 0x0893CC68u>(ctx, &aot_mem) && ctx.pc == 0x088DF374u) goto L_088DF374;
    return;
L_088DF374:
    ctx.set_gpr(3, 2245u << 16u);
    ctx.set_gpr(4, rt.memory().aot_load32(ctx.gpr[3] + static_cast<std::uint32_t>(27172)));
    ctx.set_gpr(5, ctx.gpr[2] + 0u);
    ctx.set_gpr(31, 0x088DF388u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0080_entry, 80u, 50u, 0x089443D4u>(ctx, &aot_mem) && ctx.pc == 0x088DF388u) goto L_088DF388;
    return;
L_088DF388:
    ctx.set_gpr(3, 2245u << 16u);
    rt.memory().aot_store32(ctx.gpr[3] + static_cast<std::uint32_t>(27176), ctx.gpr[2]);
    ctx.set_gpr(16, ctx.gpr[2] + 0u);
    { const bool branch_taken = ctx.gpr[16] == 0u;
    // nop
      if (branch_taken) {
          goto L_088DF40C;
      }
      goto L_088DF39C;
    }
L_088DF39C:
    ctx.set_gpr(31, 0x088DF3A4u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0079_entry, 79u, 538u, 0x089425E0u>(ctx, &aot_mem) && ctx.pc == 0x088DF3A4u) goto L_088DF3A4;
    return;
L_088DF3A4:
    ctx.set_gpr(4, ctx.gpr[2] + 0u);
    ctx.set_gpr(5, ctx.gpr[16] + 0u);
    ctx.set_gpr(31, 0x088DF3B4u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0072_entry, 72u, 751u, 0x08927514u>(ctx, &aot_mem) && ctx.pc == 0x088DF3B4u) goto L_088DF3B4;
    return;
L_088DF3B4:
    ctx.set_gpr(2, 2245u << 16u);
    ctx.set_gpr(4, rt.memory().aot_load32(ctx.gpr[2] + static_cast<std::uint32_t>(27176)));
    ctx.set_gpr(2, rt.memory().aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(4)));
    ctx.set_gpr(2, ctx.gpr[2] + static_cast<std::uint32_t>(-1));
    rt.memory().aot_store32(ctx.gpr[4] + static_cast<std::uint32_t>(4), ctx.gpr[2]);
    ctx.set_gpr(2, ctx.gpr[2] << 10u);
    ctx.set_gpr(2, ctx.gpr[2] >> 10u);
    { const bool branch_taken = ctx.gpr[2] != 0u;
    // nop
      if (branch_taken) {
          goto L_088DF3E0;
      }
      goto L_088DF3D8;
    }
L_088DF3D8:
    ctx.set_gpr(31, 0x088DF3E0u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0080_entry, 80u, 556u, 0x089467C8u>(ctx, &aot_mem) && ctx.pc == 0x088DF3E0u) goto L_088DF3E0;
    return;
L_088DF3E0:
    ctx.set_gpr(31, 0x088DF3E8u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0079_entry, 79u, 538u, 0x089425E0u>(ctx, &aot_mem) && ctx.pc == 0x088DF3E8u) goto L_088DF3E8;
    return;
L_088DF3E8:
    ctx.set_gpr(2, rt.memory().aot_load32(ctx.gpr[2] + static_cast<std::uint32_t>(12)));
    ctx.set_gpr(3, ctx.gpr[2] + static_cast<std::uint32_t>(-1));
    ctx.set_gpr(2, 2245u << 16u);
    ctx.set_gpr(2, rt.memory().aot_load32(ctx.gpr[2] + static_cast<std::uint32_t>(27176)));
    rt.memory().aot_store16(ctx.gpr[2] + static_cast<std::uint32_t>(18), static_cast<std::uint16_t>(ctx.gpr[3]));
    ctx.set_gpr(2, 2245u << 16u);
    ctx.set_gpr(4, rt.memory().aot_load32(ctx.gpr[2] + static_cast<std::uint32_t>(27176)));
    ctx.set_gpr(31, 0x088DF40Cu);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0079_entry, 79u, 598u, 0x08942A18u>(ctx, &aot_mem) && ctx.pc == 0x088DF40Cu) goto L_088DF40C;
    return;
L_088DF40C:
    ctx.set_gpr(31, rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(12)));
    ctx.set_gpr(16, rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(8)));
    ctx.set_gpr(29, ctx.gpr[29] + static_cast<std::uint32_t>(16));
    jump_target = ctx.gpr[31];
    // nop
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_088DF420:
    ctx.set_gpr(29, ctx.gpr[29] + static_cast<std::uint32_t>(-16));
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(12), ctx.gpr[31]);
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(8), ctx.gpr[16]);
    ctx.set_gpr(16, ctx.gpr[4] + 0u);
    ctx.set_gpr(31, 0x088DF438u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0064_entry, 64u, 444u, 0x08905FF0u>(ctx, &aot_mem) && ctx.pc == 0x088DF438u) goto L_088DF438;
    return;
L_088DF438:
    ctx.set_gpr(2, rt.memory().aot_load8(ctx.gpr[2] + static_cast<std::uint32_t>(0)));
    { const bool branch_taken = ctx.gpr[2] == 0u;
    // nop
      if (branch_taken) {
          goto L_088DF46C;
      }
      goto L_088DF444;
    }
L_088DF444:
    ctx.set_gpr(31, 0x088DF44Cu);
    // nop
    goto L_088DF618;
L_088DF44C:
    ctx.set_gpr(2, 2245u << 16u);
    ctx.set_gpr(4, rt.memory().aot_load32(ctx.gpr[2] + static_cast<std::uint32_t>(27184)));
    ctx.set_gpr(5, ctx.gpr[16] + 0u);
    ctx.set_gpr(31, 0x088DF460u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0080_entry, 80u, 50u, 0x089443D4u>(ctx, &aot_mem) && ctx.pc == 0x088DF460u) goto L_088DF460;
    return;
L_088DF460:
    ctx.set_gpr(16, ctx.gpr[2] + 0u);
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_088DF4CC;
      }
      goto L_088DF46C;
    }
L_088DF46C:
    ctx.set_gpr(4, 0u + static_cast<std::uint32_t>(48));
    ctx.set_gpr(5, 0u + 0u);
    ctx.set_gpr(6, ctx.gpr[16] + 0u);
    ctx.set_gpr(31, 0x088DF480u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0080_entry, 80u, 542u, 0x089466FCu>(ctx, &aot_mem) && ctx.pc == 0x088DF480u) goto L_088DF480;
    return;
L_088DF480:
    ctx.set_gpr(16, ctx.gpr[2] + 0u);
    { const bool branch_taken = ctx.gpr[16] == 0u;
    // nop
      if (branch_taken) {
          goto L_088DF4A0;
      }
      goto L_088DF48C;
    }
L_088DF48C:
    ctx.set_gpr(4, ctx.gpr[16] + 0u);
    ctx.set_gpr(5, 0u + static_cast<std::uint32_t>(1));
    ctx.set_gpr(31, 0x088DF49Cu);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0086_entry, 86u, 845u, 0x0895F94Cu>(ctx, &aot_mem) && ctx.pc == 0x088DF49Cu) goto L_088DF49C;
    return;
L_088DF49C:
    ctx.set_gpr(16, ctx.gpr[2] + 0u);
    goto L_088DF4A0;
L_088DF4A0:
    ctx.set_gpr(4, ctx.gpr[16] + 0u);
    ctx.set_gpr(25, rt.memory().aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(0)));
    ctx.set_gpr(25, rt.memory().aot_load32(ctx.gpr[25] + static_cast<std::uint32_t>(44)));
    jump_target = ctx.gpr[25];
    ctx.set_gpr(31, 0x088DF4B4u);
    // nop
    ctx.pc = jump_target;
    if (rt.invoke_chained_call(ctx, &aot_mem) && ctx.pc == 0x088DF4B4u) goto L_088DF4B4;
    return;
L_088DF4B4:
    ctx.set_gpr(4, ctx.gpr[16] + 0u);
    ctx.set_gpr(5, 0u + 0u);
    ctx.set_gpr(25, rt.memory().aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(0)));
    ctx.set_gpr(25, rt.memory().aot_load32(ctx.gpr[25] + static_cast<std::uint32_t>(36)));
    jump_target = ctx.gpr[25];
    ctx.set_gpr(31, 0x088DF4CCu);
    // nop
    ctx.pc = jump_target;
    if (rt.invoke_chained_call(ctx, &aot_mem) && ctx.pc == 0x088DF4CCu) goto L_088DF4CC;
    return;
L_088DF4CC:
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
L_088DF4E4:
    ctx.set_gpr(29, ctx.gpr[29] + static_cast<std::uint32_t>(-16));
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(12), ctx.gpr[31]);
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(8), ctx.gpr[17]);
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(4), ctx.gpr[16]);
    ctx.set_gpr(17, ctx.gpr[4] + 0u);
    ctx.set_gpr(16, ctx.gpr[5] + 0u);
    ctx.set_gpr(31, 0x088DF504u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0064_entry, 64u, 444u, 0x08905FF0u>(ctx, &aot_mem) && ctx.pc == 0x088DF504u) goto L_088DF504;
    return;
L_088DF504:
    ctx.set_gpr(2, rt.memory().aot_load8(ctx.gpr[2] + static_cast<std::uint32_t>(0)));
    { const bool branch_taken = ctx.gpr[2] == 0u;
    // nop
      if (branch_taken) {
          goto L_088DF530;
      }
      goto L_088DF510;
    }
L_088DF510:
    ctx.set_gpr(31, 0x088DF518u);
    // nop
    goto L_088DF618;
L_088DF518:
    ctx.set_gpr(4, ctx.gpr[17] + 0u);
    ctx.set_gpr(5, ctx.gpr[16] + 0u);
    ctx.set_gpr(31, 0x088DF528u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0080_entry, 80u, 848u, 0x08947E90u>(ctx, &aot_mem) && ctx.pc == 0x088DF528u) goto L_088DF528;
    return;
L_088DF528:
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_088DF558;
      }
      goto L_088DF530;
    }
L_088DF530:
    ctx.set_gpr(4, 0u + static_cast<std::uint32_t>(48));
    ctx.set_gpr(5, 0u + 0u);
    ctx.set_gpr(31, 0x088DF540u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0080_entry, 80u, 552u, 0x08946784u>(ctx, &aot_mem) && ctx.pc == 0x088DF540u) goto L_088DF540;
    return;
L_088DF540:
    { const bool branch_taken = ctx.gpr[2] == 0u;
    // nop
      if (branch_taken) {
          goto L_088DF558;
      }
      goto L_088DF548;
    }
L_088DF548:
    ctx.set_gpr(4, ctx.gpr[2] + 0u);
    ctx.set_gpr(5, ctx.gpr[17] + 0u);
    ctx.set_gpr(31, 0x088DF558u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0086_entry, 86u, 851u, 0x0895F9D8u>(ctx, &aot_mem) && ctx.pc == 0x088DF558u) goto L_088DF558;
    return;
L_088DF558:
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
L_088DF570:
    ctx.set_gpr(29, ctx.gpr[29] + static_cast<std::uint32_t>(-16));
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(12), ctx.gpr[31]);
    ctx.set_gpr(2, 2245u << 16u);
    ctx.set_gpr(2, rt.memory().aot_load32(ctx.gpr[2] + static_cast<std::uint32_t>(27184)));
    { const bool branch_taken = ctx.gpr[2] == 0u;
    // nop
      if (branch_taken) {
          goto L_088DF59C;
      }
      goto L_088DF588;
    }
L_088DF588:
    ctx.set_gpr(2, rt.memory().aot_load32(ctx.gpr[2] + static_cast<std::uint32_t>(36)));
    ctx.set_gpr(2, ctx.gpr[2] & 4u);
    ctx.set_gpr(2, 0u < ctx.gpr[2] ? 1u : 0u);
    { const bool branch_taken = ctx.gpr[2] != 0u;
    // nop
      if (branch_taken) {
          goto L_088DF5A4;
      }
      goto L_088DF59C;
    }
L_088DF59C:
    ctx.set_gpr(31, 0x088DF5A4u);
    // nop
    goto L_088DF618;
L_088DF5A4:
    ctx.set_gpr(2, 2245u << 16u);
    ctx.set_gpr(2, rt.memory().aot_load32(ctx.gpr[2] + static_cast<std::uint32_t>(27184)));
    ctx.set_gpr(31, rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(12)));
    ctx.set_gpr(29, ctx.gpr[29] + static_cast<std::uint32_t>(16));
    jump_target = ctx.gpr[31];
    // nop
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_088DF5BC:
    ctx.set_gpr(29, ctx.gpr[29] + static_cast<std::uint32_t>(-64));
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(12), ctx.gpr[31]);
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(8), ctx.gpr[16]);
    ctx.set_gpr(4, ctx.gpr[29] + static_cast<std::uint32_t>(16));
    ctx.set_gpr(31, 0x088DF5D4u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0086_entry, 86u, 849u, 0x0895F99Cu>(ctx, &aot_mem) && ctx.pc == 0x088DF5D4u) goto L_088DF5D4;
    return;
L_088DF5D4:
    ctx.set_gpr(31, 0x088DF5DCu);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0064_entry, 64u, 444u, 0x08905FF0u>(ctx, &aot_mem) && ctx.pc == 0x088DF5DCu) goto L_088DF5DC;
    return;
L_088DF5DC:
    ctx.set_gpr(2, rt.memory().aot_load32(ctx.gpr[2] + static_cast<std::uint32_t>(932)));
    ctx.set_gpr(2, ctx.gpr[2] + ctx.gpr[29]);
    ctx.set_gpr(16, rt.memory().aot_load32(ctx.gpr[2] + static_cast<std::uint32_t>(16)));
    ctx.set_gpr(2, 2232u << 16u);
    ctx.set_gpr(2, ctx.gpr[2] + static_cast<std::uint32_t>(-5492));
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(16), ctx.gpr[2]);
    ctx.set_gpr(4, ctx.gpr[29] + static_cast<std::uint32_t>(28));
    ctx.set_gpr(31, 0x088DF600u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0019_entry, 19u, 764u, 0x08853094u>(ctx, &aot_mem) && ctx.pc == 0x088DF600u) goto L_088DF600;
    return;
L_088DF600:
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
L_088DF618:
    ctx.set_gpr(29, ctx.gpr[29] + static_cast<std::uint32_t>(-16));
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(12), ctx.gpr[31]);
    ctx.set_gpr(4, 2190u << 16u);
    ctx.set_gpr(4, ctx.gpr[4] + static_cast<std::uint32_t>(-2496));
    ctx.set_gpr(31, 0x088DF630u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0080_entry, 80u, 286u, 0x08945508u>(ctx, &aot_mem) && ctx.pc == 0x088DF630u) goto L_088DF630;
    return;
L_088DF630:
    ctx.set_gpr(31, rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(12)));
    ctx.set_gpr(29, ctx.gpr[29] + static_cast<std::uint32_t>(16));
    jump_target = ctx.gpr[31];
    // nop
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_088DF640:
    ctx.set_gpr(29, ctx.gpr[29] + static_cast<std::uint32_t>(-32));
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(28), ctx.gpr[31]);
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(0), 0u);
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(4), 0u);
    ctx.set_gpr(2, 2227u << 16u);
    ctx.set_gpr(2, ctx.gpr[2] + static_cast<std::uint32_t>(24744));
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(8), ctx.gpr[2]);
    ctx.set_gpr(4, 0u + 0u);
    ctx.set_gpr(5, 2245u << 16u);
    ctx.set_gpr(5, ctx.gpr[5] + static_cast<std::uint32_t>(27184));
    ctx.set_gpr(6, 2190u << 16u);
    ctx.set_gpr(6, ctx.gpr[6] + static_cast<std::uint32_t>(-19704));
    ctx.set_gpr(7, 2189u << 16u);
    ctx.set_gpr(7, ctx.gpr[7] + static_cast<std::uint32_t>(31824));
    ctx.set_gpr(8, 2190u << 16u);
    ctx.set_gpr(8, ctx.gpr[8] + static_cast<std::uint32_t>(-2388));
    ctx.set_gpr(9, 2227u << 16u);
    ctx.set_gpr(9, ctx.gpr[9] + static_cast<std::uint32_t>(24752));
    ctx.set_gpr(10, 0u + static_cast<std::uint32_t>(48));
    ctx.set_gpr(11, 2190u << 16u);
    ctx.set_gpr(11, ctx.gpr[11] + static_cast<std::uint32_t>(-2628));
    ctx.set_gpr(31, 0x088DF69Cu);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0080_entry, 80u, 294u, 0x08945594u>(ctx, &aot_mem) && ctx.pc == 0x088DF69Cu) goto L_088DF69C;
    return;
L_088DF69C:
    ctx.set_gpr(31, rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(28)));
    ctx.set_gpr(29, ctx.gpr[29] + static_cast<std::uint32_t>(32));
    jump_target = ctx.gpr[31];
    // nop
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_088DF6AC:
    ctx.set_gpr(29, ctx.gpr[29] + static_cast<std::uint32_t>(-16));
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(12), ctx.gpr[31]);
    ctx.set_gpr(31, 0x088DF6BCu);
    // nop
    goto L_088DF570;
L_088DF6BC:
    ctx.set_gpr(31, rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(12)));
    ctx.set_gpr(29, ctx.gpr[29] + static_cast<std::uint32_t>(16));
    jump_target = ctx.gpr[31];
    // nop
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_088DF6CC:
    ctx.set_gpr(29, ctx.gpr[29] + static_cast<std::uint32_t>(-16));
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(12), ctx.gpr[31]);
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(8), ctx.gpr[16]);
    ctx.set_gpr(3, 2245u << 16u);
    ctx.set_gpr(3, rt.memory().aot_load32(ctx.gpr[3] + static_cast<std::uint32_t>(27188)));
    { const bool branch_taken = ctx.gpr[3] != 0u;
    // nop
      if (branch_taken) {
          goto L_088DF794;
      }
      goto L_088DF6E8;
    }
L_088DF6E8:
    ctx.set_gpr(31, 0x088DF6F0u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0078_entry, 78u, 217u, 0x0893CDECu>(ctx, &aot_mem) && ctx.pc == 0x088DF6F0u) goto L_088DF6F0;
    return;
L_088DF6F0:
    ctx.set_gpr(4, rt.memory().aot_load32(ctx.gpr[2] + static_cast<std::uint32_t>(0)));
    ctx.set_gpr(31, 0x088DF6FCu);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0078_entry, 78u, 199u, 0x0893CC68u>(ctx, &aot_mem) && ctx.pc == 0x088DF6FCu) goto L_088DF6FC;
    return;
L_088DF6FC:
    ctx.set_gpr(3, 2245u << 16u);
    ctx.set_gpr(4, rt.memory().aot_load32(ctx.gpr[3] + static_cast<std::uint32_t>(27184)));
    ctx.set_gpr(5, ctx.gpr[2] + 0u);
    ctx.set_gpr(31, 0x088DF710u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0080_entry, 80u, 50u, 0x089443D4u>(ctx, &aot_mem) && ctx.pc == 0x088DF710u) goto L_088DF710;
    return;
L_088DF710:
    ctx.set_gpr(3, 2245u << 16u);
    rt.memory().aot_store32(ctx.gpr[3] + static_cast<std::uint32_t>(27188), ctx.gpr[2]);
    ctx.set_gpr(16, ctx.gpr[2] + 0u);
    { const bool branch_taken = ctx.gpr[16] == 0u;
    // nop
      if (branch_taken) {
          goto L_088DF794;
      }
      goto L_088DF724;
    }
L_088DF724:
    ctx.set_gpr(31, 0x088DF72Cu);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0079_entry, 79u, 538u, 0x089425E0u>(ctx, &aot_mem) && ctx.pc == 0x088DF72Cu) goto L_088DF72C;
    return;
L_088DF72C:
    ctx.set_gpr(4, ctx.gpr[2] + 0u);
    ctx.set_gpr(5, ctx.gpr[16] + 0u);
    ctx.set_gpr(31, 0x088DF73Cu);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0072_entry, 72u, 751u, 0x08927514u>(ctx, &aot_mem) && ctx.pc == 0x088DF73Cu) goto L_088DF73C;
    return;
L_088DF73C:
    ctx.set_gpr(2, 2245u << 16u);
    ctx.set_gpr(4, rt.memory().aot_load32(ctx.gpr[2] + static_cast<std::uint32_t>(27188)));
    ctx.set_gpr(2, rt.memory().aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(4)));
    ctx.set_gpr(2, ctx.gpr[2] + static_cast<std::uint32_t>(-1));
    rt.memory().aot_store32(ctx.gpr[4] + static_cast<std::uint32_t>(4), ctx.gpr[2]);
    ctx.set_gpr(2, ctx.gpr[2] << 10u);
    ctx.set_gpr(2, ctx.gpr[2] >> 10u);
    { const bool branch_taken = ctx.gpr[2] != 0u;
    // nop
      if (branch_taken) {
          goto L_088DF768;
      }
      goto L_088DF760;
    }
L_088DF760:
    ctx.set_gpr(31, 0x088DF768u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0080_entry, 80u, 556u, 0x089467C8u>(ctx, &aot_mem) && ctx.pc == 0x088DF768u) goto L_088DF768;
    return;
L_088DF768:
    ctx.set_gpr(31, 0x088DF770u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0079_entry, 79u, 538u, 0x089425E0u>(ctx, &aot_mem) && ctx.pc == 0x088DF770u) goto L_088DF770;
    return;
L_088DF770:
    ctx.set_gpr(2, rt.memory().aot_load32(ctx.gpr[2] + static_cast<std::uint32_t>(12)));
    ctx.set_gpr(3, ctx.gpr[2] + static_cast<std::uint32_t>(-1));
    ctx.set_gpr(2, 2245u << 16u);
    ctx.set_gpr(2, rt.memory().aot_load32(ctx.gpr[2] + static_cast<std::uint32_t>(27188)));
    rt.memory().aot_store16(ctx.gpr[2] + static_cast<std::uint32_t>(18), static_cast<std::uint16_t>(ctx.gpr[3]));
    ctx.set_gpr(2, 2245u << 16u);
    ctx.set_gpr(4, rt.memory().aot_load32(ctx.gpr[2] + static_cast<std::uint32_t>(27188)));
    ctx.set_gpr(31, 0x088DF794u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0079_entry, 79u, 598u, 0x08942A18u>(ctx, &aot_mem) && ctx.pc == 0x088DF794u) goto L_088DF794;
    return;
L_088DF794:
    ctx.set_gpr(31, rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(12)));
    ctx.set_gpr(16, rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(8)));
    ctx.set_gpr(29, ctx.gpr[29] + static_cast<std::uint32_t>(16));
    jump_target = ctx.gpr[31];
    // nop
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_088DF7A8:
    ctx.set_gpr(29, ctx.gpr[29] + static_cast<std::uint32_t>(-16));
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(12), ctx.gpr[31]);
    ctx.set_gpr(2, 2245u << 16u);
    ctx.set_gpr(2, rt.memory().aot_load32(ctx.gpr[2] + static_cast<std::uint32_t>(27188)));
    { const bool branch_taken = ctx.gpr[2] != 0u;
    // nop
      if (branch_taken) {
          goto L_088DF7C8;
      }
      goto L_088DF7C0;
    }
L_088DF7C0:
    ctx.set_gpr(31, 0x088DF7C8u);
    // nop
    goto L_088DF618;
L_088DF7C8:
    ctx.set_gpr(2, 2245u << 16u);
    ctx.set_gpr(2, rt.memory().aot_load32(ctx.gpr[2] + static_cast<std::uint32_t>(27188)));
    ctx.set_gpr(31, rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(12)));
    ctx.set_gpr(29, ctx.gpr[29] + static_cast<std::uint32_t>(16));
    jump_target = ctx.gpr[31];
    // nop
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_088DF7E0:
    ctx.set_gpr(29, ctx.gpr[29] + static_cast<std::uint32_t>(-16));
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(12), ctx.gpr[31]);
    ctx.set_gpr(2, 2245u << 16u);
    ctx.set_gpr(2, rt.memory().aot_load32(ctx.gpr[2] + static_cast<std::uint32_t>(27192)));
    { const bool branch_taken = ctx.gpr[2] == 0u;
    // nop
      if (branch_taken) {
          goto L_088DF80C;
      }
      goto L_088DF7F8;
    }
L_088DF7F8:
    ctx.set_gpr(2, rt.memory().aot_load32(ctx.gpr[2] + static_cast<std::uint32_t>(36)));
    ctx.set_gpr(2, ctx.gpr[2] & 4u);
    ctx.set_gpr(2, 0u < ctx.gpr[2] ? 1u : 0u);
    { const bool branch_taken = ctx.gpr[2] != 0u;
    // nop
      if (branch_taken) {
          goto L_088DF814;
      }
      goto L_088DF80C;
    }
L_088DF80C:
    ctx.set_gpr(31, 0x088DF814u);
    // nop
    goto L_088DF894;
L_088DF814:
    ctx.set_gpr(2, 2245u << 16u);
    ctx.set_gpr(2, rt.memory().aot_load32(ctx.gpr[2] + static_cast<std::uint32_t>(27192)));
    ctx.set_gpr(31, rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(12)));
    ctx.set_gpr(29, ctx.gpr[29] + static_cast<std::uint32_t>(16));
    jump_target = ctx.gpr[31];
    // nop
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_088DF82C:
    ctx.set_gpr(29, ctx.gpr[29] + static_cast<std::uint32_t>(-64));
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(12), ctx.gpr[31]);
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(8), ctx.gpr[16]);
    ctx.set_gpr(4, ctx.gpr[29] + static_cast<std::uint32_t>(16));
    ctx.set_gpr(31, 0x088DF844u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0079_entry, 79u, 505u, 0x089422D0u>(ctx, &aot_mem) && ctx.pc == 0x088DF844u) goto L_088DF844;
    return;
L_088DF844:
    ctx.set_gpr(2, 2232u << 16u);
    ctx.set_gpr(2, ctx.gpr[2] + static_cast<std::uint32_t>(-10932));
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(16), ctx.gpr[2]);
    ctx.set_gpr(31, 0x088DF858u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0064_entry, 64u, 444u, 0x08905FF0u>(ctx, &aot_mem) && ctx.pc == 0x088DF858u) goto L_088DF858;
    return;
L_088DF858:
    ctx.set_gpr(2, rt.memory().aot_load32(ctx.gpr[2] + static_cast<std::uint32_t>(932)));
    ctx.set_gpr(2, ctx.gpr[2] + ctx.gpr[29]);
    ctx.set_gpr(16, rt.memory().aot_load32(ctx.gpr[2] + static_cast<std::uint32_t>(16)));
    ctx.set_gpr(2, 2232u << 16u);
    ctx.set_gpr(2, ctx.gpr[2] + static_cast<std::uint32_t>(-5492));
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(16), ctx.gpr[2]);
    ctx.set_gpr(4, ctx.gpr[29] + static_cast<std::uint32_t>(28));
    ctx.set_gpr(31, 0x088DF87Cu);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0019_entry, 19u, 764u, 0x08853094u>(ctx, &aot_mem) && ctx.pc == 0x088DF87Cu) goto L_088DF87C;
    return;
L_088DF87C:
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
L_088DF894:
    ctx.set_gpr(29, ctx.gpr[29] + static_cast<std::uint32_t>(-16));
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(12), ctx.gpr[31]);
    ctx.set_gpr(4, 2190u << 16u);
    ctx.set_gpr(4, ctx.gpr[4] + static_cast<std::uint32_t>(-1860));
    ctx.set_gpr(31, 0x088DF8ACu);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0080_entry, 80u, 286u, 0x08945508u>(ctx, &aot_mem) && ctx.pc == 0x088DF8ACu) goto L_088DF8AC;
    return;
L_088DF8AC:
    ctx.set_gpr(31, rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(12)));
    ctx.set_gpr(29, ctx.gpr[29] + static_cast<std::uint32_t>(16));
    jump_target = ctx.gpr[31];
    // nop
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_088DF8BC:
    ctx.set_gpr(29, ctx.gpr[29] + static_cast<std::uint32_t>(-32));
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(28), ctx.gpr[31]);
    ctx.set_gpr(31, 0x088DF8CCu);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0052_entry, 52u, 154u, 0x088D49C4u>(ctx, &aot_mem) && ctx.pc == 0x088DF8CCu) goto L_088DF8CC;
    return;
L_088DF8CC:
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(0), 0u);
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(4), 0u);
    ctx.set_gpr(2, 2227u << 16u);
    ctx.set_gpr(2, ctx.gpr[2] + static_cast<std::uint32_t>(24780));
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(8), ctx.gpr[2]);
    ctx.set_gpr(4, 0u + 0u);
    ctx.set_gpr(5, 2245u << 16u);
    ctx.set_gpr(5, ctx.gpr[5] + static_cast<std::uint32_t>(27192));
    ctx.set_gpr(6, 2190u << 16u);
    ctx.set_gpr(6, ctx.gpr[6] + static_cast<std::uint32_t>(-19704));
    ctx.set_gpr(7, 2189u << 16u);
    ctx.set_gpr(7, ctx.gpr[7] + static_cast<std::uint32_t>(31824));
    ctx.set_gpr(8, 2190u << 16u);
    ctx.set_gpr(8, ctx.gpr[8] + static_cast<std::uint32_t>(-1744));
    ctx.set_gpr(9, 2227u << 16u);
    ctx.set_gpr(9, ctx.gpr[9] + static_cast<std::uint32_t>(24788));
    ctx.set_gpr(10, 0u + static_cast<std::uint32_t>(48));
    ctx.set_gpr(11, 2190u << 16u);
    ctx.set_gpr(11, ctx.gpr[11] + static_cast<std::uint32_t>(-2004));
    ctx.set_gpr(31, 0x088DF920u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0080_entry, 80u, 294u, 0x08945594u>(ctx, &aot_mem) && ctx.pc == 0x088DF920u) goto L_088DF920;
    return;
L_088DF920:
    ctx.set_gpr(31, rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(28)));
    ctx.set_gpr(29, ctx.gpr[29] + static_cast<std::uint32_t>(32));
    jump_target = ctx.gpr[31];
    // nop
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_088DF930:
    ctx.set_gpr(29, ctx.gpr[29] + static_cast<std::uint32_t>(-16));
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(12), ctx.gpr[31]);
    ctx.set_gpr(31, 0x088DF940u);
    // nop
    goto L_088DF7E0;
L_088DF940:
    ctx.set_gpr(31, rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(12)));
    ctx.set_gpr(29, ctx.gpr[29] + static_cast<std::uint32_t>(16));
    jump_target = ctx.gpr[31];
    // nop
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_088DF950:
    ctx.set_gpr(29, ctx.gpr[29] + static_cast<std::uint32_t>(-16));
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(12), ctx.gpr[31]);
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(8), ctx.gpr[16]);
    ctx.set_gpr(3, 2245u << 16u);
    ctx.set_gpr(3, rt.memory().aot_load32(ctx.gpr[3] + static_cast<std::uint32_t>(27196)));
    { const bool branch_taken = ctx.gpr[3] != 0u;
    // nop
      if (branch_taken) {
          goto L_088DFA18;
      }
      goto L_088DF96C;
    }
L_088DF96C:
    ctx.set_gpr(31, 0x088DF974u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0078_entry, 78u, 217u, 0x0893CDECu>(ctx, &aot_mem) && ctx.pc == 0x088DF974u) goto L_088DF974;
    return;
L_088DF974:
    ctx.set_gpr(4, rt.memory().aot_load32(ctx.gpr[2] + static_cast<std::uint32_t>(0)));
    ctx.set_gpr(31, 0x088DF980u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0078_entry, 78u, 199u, 0x0893CC68u>(ctx, &aot_mem) && ctx.pc == 0x088DF980u) goto L_088DF980;
    return;
L_088DF980:
    ctx.set_gpr(3, 2245u << 16u);
    ctx.set_gpr(4, rt.memory().aot_load32(ctx.gpr[3] + static_cast<std::uint32_t>(27192)));
    ctx.set_gpr(5, ctx.gpr[2] + 0u);
    ctx.set_gpr(31, 0x088DF994u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0080_entry, 80u, 50u, 0x089443D4u>(ctx, &aot_mem) && ctx.pc == 0x088DF994u) goto L_088DF994;
    return;
L_088DF994:
    ctx.set_gpr(3, 2245u << 16u);
    rt.memory().aot_store32(ctx.gpr[3] + static_cast<std::uint32_t>(27196), ctx.gpr[2]);
    ctx.set_gpr(16, ctx.gpr[2] + 0u);
    { const bool branch_taken = ctx.gpr[16] == 0u;
    // nop
      if (branch_taken) {
          goto L_088DFA18;
      }
      goto L_088DF9A8;
    }
L_088DF9A8:
    ctx.set_gpr(31, 0x088DF9B0u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0079_entry, 79u, 538u, 0x089425E0u>(ctx, &aot_mem) && ctx.pc == 0x088DF9B0u) goto L_088DF9B0;
    return;
L_088DF9B0:
    ctx.set_gpr(4, ctx.gpr[2] + 0u);
    ctx.set_gpr(5, ctx.gpr[16] + 0u);
    ctx.set_gpr(31, 0x088DF9C0u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0072_entry, 72u, 751u, 0x08927514u>(ctx, &aot_mem) && ctx.pc == 0x088DF9C0u) goto L_088DF9C0;
    return;
L_088DF9C0:
    ctx.set_gpr(2, 2245u << 16u);
    ctx.set_gpr(4, rt.memory().aot_load32(ctx.gpr[2] + static_cast<std::uint32_t>(27196)));
    ctx.set_gpr(2, rt.memory().aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(4)));
    ctx.set_gpr(2, ctx.gpr[2] + static_cast<std::uint32_t>(-1));
    rt.memory().aot_store32(ctx.gpr[4] + static_cast<std::uint32_t>(4), ctx.gpr[2]);
    ctx.set_gpr(2, ctx.gpr[2] << 10u);
    ctx.set_gpr(2, ctx.gpr[2] >> 10u);
    { const bool branch_taken = ctx.gpr[2] != 0u;
    // nop
      if (branch_taken) {
          goto L_088DF9EC;
      }
      goto L_088DF9E4;
    }
L_088DF9E4:
    ctx.set_gpr(31, 0x088DF9ECu);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0080_entry, 80u, 556u, 0x089467C8u>(ctx, &aot_mem) && ctx.pc == 0x088DF9ECu) goto L_088DF9EC;
    return;
L_088DF9EC:
    ctx.set_gpr(31, 0x088DF9F4u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0079_entry, 79u, 538u, 0x089425E0u>(ctx, &aot_mem) && ctx.pc == 0x088DF9F4u) goto L_088DF9F4;
    return;
L_088DF9F4:
    ctx.set_gpr(2, rt.memory().aot_load32(ctx.gpr[2] + static_cast<std::uint32_t>(12)));
    ctx.set_gpr(3, ctx.gpr[2] + static_cast<std::uint32_t>(-1));
    ctx.set_gpr(2, 2245u << 16u);
    ctx.set_gpr(2, rt.memory().aot_load32(ctx.gpr[2] + static_cast<std::uint32_t>(27196)));
    rt.memory().aot_store16(ctx.gpr[2] + static_cast<std::uint32_t>(18), static_cast<std::uint16_t>(ctx.gpr[3]));
    ctx.set_gpr(2, 2245u << 16u);
    ctx.set_gpr(4, rt.memory().aot_load32(ctx.gpr[2] + static_cast<std::uint32_t>(27196)));
    ctx.set_gpr(31, 0x088DFA18u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0079_entry, 79u, 598u, 0x08942A18u>(ctx, &aot_mem) && ctx.pc == 0x088DFA18u) goto L_088DFA18;
    return;
L_088DFA18:
    ctx.set_gpr(31, rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(12)));
    ctx.set_gpr(16, rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(8)));
    ctx.set_gpr(29, ctx.gpr[29] + static_cast<std::uint32_t>(16));
    jump_target = ctx.gpr[31];
    // nop
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_088DFA2C:
    ctx.set_gpr(29, ctx.gpr[29] + static_cast<std::uint32_t>(-16));
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(12), ctx.gpr[31]);
    ctx.set_gpr(2, 2245u << 16u);
    ctx.set_gpr(2, rt.memory().aot_load32(ctx.gpr[2] + static_cast<std::uint32_t>(27200)));
    { const bool branch_taken = ctx.gpr[2] != 0u;
    // nop
      if (branch_taken) {
          goto L_088DFA6C;
      }
      goto L_088DFA44;
    }
L_088DFA44:
    ctx.set_gpr(31, 0x088DFA4Cu);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0078_entry, 78u, 217u, 0x0893CDECu>(ctx, &aot_mem) && ctx.pc == 0x088DFA4Cu) goto L_088DFA4C;
    return;
L_088DFA4C:
    ctx.set_gpr(4, rt.memory().aot_load32(ctx.gpr[2] + static_cast<std::uint32_t>(0)));
    ctx.set_gpr(31, 0x088DFA58u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0078_entry, 78u, 199u, 0x0893CC68u>(ctx, &aot_mem) && ctx.pc == 0x088DFA58u) goto L_088DFA58;
    return;
L_088DFA58:
    ctx.set_gpr(4, ctx.gpr[2] + 0u);
    ctx.set_gpr(31, 0x088DFA64u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0052_entry, 52u, 732u, 0x088D6FE8u>(ctx, &aot_mem) && ctx.pc == 0x088DFA64u) goto L_088DFA64;
    return;
L_088DFA64:
    ctx.set_gpr(3, 2245u << 16u);
    rt.memory().aot_store32(ctx.gpr[3] + static_cast<std::uint32_t>(27200), ctx.gpr[2]);
    goto L_088DFA6C;
L_088DFA6C:
    ctx.set_gpr(2, 2245u << 16u);
    ctx.set_gpr(2, rt.memory().aot_load32(ctx.gpr[2] + static_cast<std::uint32_t>(27200)));
    ctx.set_gpr(31, rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(12)));
    ctx.set_gpr(29, ctx.gpr[29] + static_cast<std::uint32_t>(16));
    jump_target = ctx.gpr[31];
    // nop
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_088DFA84:
    ctx.set_gpr(29, ctx.gpr[29] + static_cast<std::uint32_t>(-16));
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(12), ctx.gpr[31]);
    ctx.set_gpr(2, 2245u << 16u);
    ctx.set_gpr(2, rt.memory().aot_load32(ctx.gpr[2] + static_cast<std::uint32_t>(27200)));
    { const bool branch_taken = ctx.gpr[2] == 0u;
    // nop
      if (branch_taken) {
          goto L_088DFAB0;
      }
      goto L_088DFA9C;
    }
L_088DFA9C:
    ctx.set_gpr(2, rt.memory().aot_load32(ctx.gpr[2] + static_cast<std::uint32_t>(36)));
    ctx.set_gpr(2, ctx.gpr[2] & 4u);
    ctx.set_gpr(2, 0u < ctx.gpr[2] ? 1u : 0u);
    { const bool branch_taken = ctx.gpr[2] != 0u;
    // nop
      if (branch_taken) {
          goto L_088DFAB8;
      }
      goto L_088DFAB0;
    }
L_088DFAB0:
    ctx.set_gpr(31, 0x088DFAB8u);
    // nop
    goto L_088DFAD0;
L_088DFAB8:
    ctx.set_gpr(2, 2245u << 16u);
    ctx.set_gpr(2, rt.memory().aot_load32(ctx.gpr[2] + static_cast<std::uint32_t>(27200)));
    ctx.set_gpr(31, rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(12)));
    ctx.set_gpr(29, ctx.gpr[29] + static_cast<std::uint32_t>(16));
    jump_target = ctx.gpr[31];
    // nop
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_088DFAD0:
    ctx.set_gpr(29, ctx.gpr[29] + static_cast<std::uint32_t>(-16));
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(12), ctx.gpr[31]);
    ctx.set_gpr(4, 2190u << 16u);
    ctx.set_gpr(4, ctx.gpr[4] + static_cast<std::uint32_t>(-1288));
    ctx.set_gpr(31, 0x088DFAE8u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0080_entry, 80u, 286u, 0x08945508u>(ctx, &aot_mem) && ctx.pc == 0x088DFAE8u) goto L_088DFAE8;
    return;
L_088DFAE8:
    ctx.set_gpr(31, rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(12)));
    ctx.set_gpr(29, ctx.gpr[29] + static_cast<std::uint32_t>(16));
    jump_target = ctx.gpr[31];
    // nop
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_088DFAF8:
    ctx.set_gpr(29, ctx.gpr[29] + static_cast<std::uint32_t>(-32));
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(28), ctx.gpr[31]);
    ctx.set_gpr(2, 2190u << 16u);
    ctx.set_gpr(2, ctx.gpr[2] + static_cast<std::uint32_t>(-1144));
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(0), ctx.gpr[2]);
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(4), 0u);
    ctx.set_gpr(2, 2227u << 16u);
    ctx.set_gpr(2, ctx.gpr[2] + static_cast<std::uint32_t>(24812));
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(8), ctx.gpr[2]);
    ctx.set_gpr(4, 0u + static_cast<std::uint32_t>(1));
    ctx.set_gpr(5, 2245u << 16u);
    ctx.set_gpr(5, ctx.gpr[5] + static_cast<std::uint32_t>(27200));
    ctx.set_gpr(6, 2196u << 16u);
    ctx.set_gpr(6, ctx.gpr[6] + static_cast<std::uint32_t>(25520));
    ctx.set_gpr(7, 2188u << 16u);
    ctx.set_gpr(7, ctx.gpr[7] + static_cast<std::uint32_t>(-27092));
    ctx.set_gpr(8, 2190u << 16u);
    ctx.set_gpr(8, ctx.gpr[8] + static_cast<std::uint32_t>(-1176));
    ctx.set_gpr(9, 2227u << 16u);
    ctx.set_gpr(9, ctx.gpr[9] + static_cast<std::uint32_t>(24828));
    ctx.set_gpr(10, 0u + static_cast<std::uint32_t>(212));
    ctx.set_gpr(11, 0u + 0u);
    ctx.set_gpr(31, 0x088DFB58u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0080_entry, 80u, 294u, 0x08945594u>(ctx, &aot_mem) && ctx.pc == 0x088DFB58u) goto L_088DFB58;
    return;
L_088DFB58:
    ctx.set_gpr(31, rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(28)));
    ctx.set_gpr(29, ctx.gpr[29] + static_cast<std::uint32_t>(32));
    jump_target = ctx.gpr[31];
    // nop
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_088DFB68:
    ctx.set_gpr(29, ctx.gpr[29] + static_cast<std::uint32_t>(-16));
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(12), ctx.gpr[31]);
    ctx.set_gpr(31, 0x088DFB78u);
    // nop
    goto L_088DFA84;
L_088DFB78:
    ctx.set_gpr(31, rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(12)));
    ctx.set_gpr(29, ctx.gpr[29] + static_cast<std::uint32_t>(16));
    jump_target = ctx.gpr[31];
    // nop
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_088DFB88:
    ctx.set_gpr(29, ctx.gpr[29] + static_cast<std::uint32_t>(-32));
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(12), ctx.gpr[31]);
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(8), ctx.gpr[18]);
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(4), ctx.gpr[17]);
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(0), ctx.gpr[16]);
    ctx.set_gpr(2, 2245u << 16u);
    ctx.set_gpr(16, rt.memory().aot_load32(ctx.gpr[2] + static_cast<std::uint32_t>(27200)));
    ctx.set_gpr(4, ctx.gpr[16] + 0u);
    ctx.set_gpr(31, 0x088DFBB0u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0080_entry, 80u, 236u, 0x089451A8u>(ctx, &aot_mem) && ctx.pc == 0x088DFBB0u) goto L_088DFBB0;
    return;
L_088DFBB0:
    ctx.set_gpr(17, ctx.gpr[2] + 0u);
    ctx.set_gpr(4, ctx.gpr[16] + 0u);
    ctx.set_gpr(5, 2227u << 16u);
    ctx.set_gpr(5, ctx.gpr[5] + static_cast<std::uint32_t>(24844));
    ctx.set_gpr(6, 0u + static_cast<std::uint32_t>(38));
    ctx.set_gpr(31, 0x088DFBCCu);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0080_entry, 80u, 151u, 0x08944B98u>(ctx, &aot_mem) && ctx.pc == 0x088DFBCCu) goto L_088DFBCC;
    return;
L_088DFBCC:
    ctx.set_gpr(4, ctx.gpr[16] + 0u);
    ctx.set_gpr(5, ctx.gpr[17] + 0u);
    ctx.set_gpr(31, 0x088DFBDCu);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0080_entry, 80u, 148u, 0x08944B4Cu>(ctx, &aot_mem) && ctx.pc == 0x088DFBDCu) goto L_088DFBDC;
    return;
L_088DFBDC:
    ctx.set_gpr(3, 0u + static_cast<std::uint32_t>(64));
    rt.memory().aot_store32(ctx.gpr[2] + static_cast<std::uint32_t>(48), ctx.gpr[3]);
    ctx.set_gpr(5, ctx.gpr[17] + static_cast<std::uint32_t>(1));
    ctx.set_gpr(4, ctx.gpr[16] + 0u);
    ctx.set_gpr(31, 0x088DFBF4u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0080_entry, 80u, 148u, 0x08944B4Cu>(ctx, &aot_mem) && ctx.pc == 0x088DFBF4u) goto L_088DFBF4;
    return;
L_088DFBF4:
    ctx.set_gpr(4, ctx.gpr[2] + 0u);
    ctx.set_gpr(5, 0u + static_cast<std::uint32_t>(-1));
    ctx.set_gpr(31, 0x088DFC04u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0072_entry, 72u, 648u, 0x08926D64u>(ctx, &aot_mem) && ctx.pc == 0x088DFC04u) goto L_088DFC04;
    return;
L_088DFC04:
    ctx.set_gpr(5, ctx.gpr[17] + static_cast<std::uint32_t>(2));
    ctx.set_gpr(4, ctx.gpr[16] + 0u);
    ctx.set_gpr(31, 0x088DFC14u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0080_entry, 80u, 148u, 0x08944B4Cu>(ctx, &aot_mem) && ctx.pc == 0x088DFC14u) goto L_088DFC14;
    return;
L_088DFC14:
    ctx.set_gpr(4, ctx.gpr[2] + 0u);
    ctx.set_gpr(5, 0u | 65535u);
    ctx.set_gpr(31, 0x088DFC24u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0072_entry, 72u, 648u, 0x08926D64u>(ctx, &aot_mem) && ctx.pc == 0x088DFC24u) goto L_088DFC24;
    return;
L_088DFC24:
    ctx.set_gpr(5, ctx.gpr[17] + static_cast<std::uint32_t>(3));
    ctx.set_gpr(4, ctx.gpr[16] + 0u);
    ctx.set_gpr(31, 0x088DFC34u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0080_entry, 80u, 148u, 0x08944B4Cu>(ctx, &aot_mem) && ctx.pc == 0x088DFC34u) goto L_088DFC34;
    return;
L_088DFC34:
    ctx.set_gpr(4, ctx.gpr[2] + 0u);
    ctx.set_gpr(5, 0u + static_cast<std::uint32_t>(-1));
    ctx.set_gpr(31, 0x088DFC44u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0072_entry, 72u, 648u, 0x08926D64u>(ctx, &aot_mem) && ctx.pc == 0x088DFC44u) goto L_088DFC44;
    return;
L_088DFC44:
    ctx.set_gpr(5, ctx.gpr[17] + static_cast<std::uint32_t>(5));
    ctx.set_gpr(4, ctx.gpr[16] + 0u);
    ctx.set_gpr(31, 0x088DFC54u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0080_entry, 80u, 148u, 0x08944B4Cu>(ctx, &aot_mem) && ctx.pc == 0x088DFC54u) goto L_088DFC54;
    return;
L_088DFC54:
    ctx.set_gpr(18, ctx.gpr[2] + 0u);
    ctx.set_gpr(31, 0x088DFC60u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0057_entry, 57u, 389u, 0x088E9D38u>(ctx, &aot_mem) && ctx.pc == 0x088DFC60u) goto L_088DFC60;
    return;
L_088DFC60:
    rt.memory().aot_store32(ctx.gpr[18] + static_cast<std::uint32_t>(52), ctx.gpr[2]);
    ctx.set_gpr(5, ctx.gpr[17] + static_cast<std::uint32_t>(7));
    ctx.set_gpr(4, ctx.gpr[16] + 0u);
    ctx.set_gpr(31, 0x088DFC74u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0080_entry, 80u, 148u, 0x08944B4Cu>(ctx, &aot_mem) && ctx.pc == 0x088DFC74u) goto L_088DFC74;
    return;
L_088DFC74:
    ctx.set_gpr(4, ctx.gpr[2] + 0u);
    ctx.set_gpr(5, 0u + static_cast<std::uint32_t>(8));
    ctx.set_gpr(31, 0x088DFC84u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0086_entry, 86u, 783u, 0x0895F488u>(ctx, &aot_mem) && ctx.pc == 0x088DFC84u) goto L_088DFC84;
    return;
L_088DFC84:
    ctx.set_gpr(5, ctx.gpr[17] + static_cast<std::uint32_t>(10));
    ctx.set_gpr(4, ctx.gpr[16] + 0u);
    ctx.set_gpr(31, 0x088DFC94u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0080_entry, 80u, 148u, 0x08944B4Cu>(ctx, &aot_mem) && ctx.pc == 0x088DFC94u) goto L_088DFC94;
    return;
L_088DFC94:
    ctx.set_gpr(4, ctx.gpr[2] + 0u);
    ctx.set_gpr(2, 2225u << 16u);
    ctx.set_gpr(5, rt.memory().aot_load32(ctx.gpr[2] + static_cast<std::uint32_t>(31872)));
    ctx.set_gpr(31, 0x088DFCA8u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0086_entry, 86u, 783u, 0x0895F488u>(ctx, &aot_mem) && ctx.pc == 0x088DFCA8u) goto L_088DFCA8;
    return;
L_088DFCA8:
    ctx.set_gpr(5, ctx.gpr[17] + static_cast<std::uint32_t>(19));
    ctx.set_gpr(4, ctx.gpr[16] + 0u);
    ctx.set_gpr(31, 0x088DFCB8u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0080_entry, 80u, 148u, 0x08944B4Cu>(ctx, &aot_mem) && ctx.pc == 0x088DFCB8u) goto L_088DFCB8;
    return;
L_088DFCB8:
    ctx.set_gpr(4, ctx.gpr[2] + 0u);
    ctx.set_gpr(2, 2228u << 16u);
    ctx.set_gpr(5, rt.memory().aot_load32(ctx.gpr[2] + static_cast<std::uint32_t>(-11072)));
    ctx.set_gpr(31, 0x088DFCCCu);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0072_entry, 72u, 648u, 0x08926D64u>(ctx, &aot_mem) && ctx.pc == 0x088DFCCCu) goto L_088DFCCC;
    return;
L_088DFCCC:
    ctx.set_gpr(5, ctx.gpr[17] + static_cast<std::uint32_t>(20));
    ctx.set_gpr(4, ctx.gpr[16] + 0u);
    ctx.set_gpr(31, 0x088DFCDCu);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0080_entry, 80u, 148u, 0x08944B4Cu>(ctx, &aot_mem) && ctx.pc == 0x088DFCDCu) goto L_088DFCDC;
    return;
L_088DFCDC:
    ctx.set_gpr(18, ctx.gpr[2] + 0u);
    ctx.set_gpr(2, 2228u << 16u);
    ctx.set_gpr(2, rt.memory().aot_load32(ctx.gpr[2] + static_cast<std::uint32_t>(-11076)));
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(28), ctx.gpr[2]);
    ctx.set_gpr(4, ctx.gpr[18] + 0u);
    ctx.set_gpr(5, ctx.gpr[29] + static_cast<std::uint32_t>(28));
    ctx.set_gpr(31, 0x088DFCFCu);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0068_entry, 68u, 457u, 0x08915924u>(ctx, &aot_mem) && ctx.pc == 0x088DFCFCu) goto L_088DFCFC;
    return;
L_088DFCFC:
    ctx.set_gpr(2, 2190u << 16u);
    ctx.set_gpr(2, ctx.gpr[2] + static_cast<std::uint32_t>(-356));
    rt.memory().aot_store32(ctx.gpr[18] + static_cast<std::uint32_t>(48), ctx.gpr[2]);
    ctx.set_gpr(5, ctx.gpr[17] + static_cast<std::uint32_t>(21));
    ctx.set_gpr(4, ctx.gpr[16] + 0u);
    ctx.set_gpr(31, 0x088DFD18u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0080_entry, 80u, 148u, 0x08944B4Cu>(ctx, &aot_mem) && ctx.pc == 0x088DFD18u) goto L_088DFD18;
    return;
L_088DFD18:
    ctx.set_gpr(18, ctx.gpr[2] + 0u);
    ctx.set_gpr(2, 2245u << 16u);
    ctx.set_gpr(2, rt.memory().aot_load32(ctx.gpr[2] + static_cast<std::uint32_t>(30808)));
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(24), ctx.gpr[2]);
    ctx.set_gpr(4, ctx.gpr[18] + 0u);
    ctx.set_gpr(5, ctx.gpr[29] + static_cast<std::uint32_t>(24));
    ctx.set_gpr(31, 0x088DFD38u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0068_entry, 68u, 457u, 0x08915924u>(ctx, &aot_mem) && ctx.pc == 0x088DFD38u) goto L_088DFD38;
    return;
L_088DFD38:
    ctx.set_gpr(2, 2190u << 16u);
    ctx.set_gpr(2, ctx.gpr[2] + static_cast<std::uint32_t>(-264));
    rt.memory().aot_store32(ctx.gpr[18] + static_cast<std::uint32_t>(48), ctx.gpr[2]);
    ctx.set_gpr(5, ctx.gpr[17] + static_cast<std::uint32_t>(22));
    ctx.set_gpr(4, ctx.gpr[16] + 0u);
    ctx.set_gpr(31, 0x088DFD54u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0080_entry, 80u, 148u, 0x08944B4Cu>(ctx, &aot_mem) && ctx.pc == 0x088DFD54u) goto L_088DFD54;
    return;
L_088DFD54:
    ctx.set_gpr(18, ctx.gpr[2] + 0u);
    ctx.set_gpr(31, 0x088DFD60u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0059_entry, 59u, 462u, 0x088F2770u>(ctx, &aot_mem) && ctx.pc == 0x088DFD60u) goto L_088DFD60;
    return;
L_088DFD60:
    rt.memory().aot_store32(ctx.gpr[18] + static_cast<std::uint32_t>(52), ctx.gpr[2]);
    ctx.set_gpr(5, ctx.gpr[17] + static_cast<std::uint32_t>(35));
    ctx.set_gpr(4, ctx.gpr[16] + 0u);
    ctx.set_gpr(31, 0x088DFD74u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0080_entry, 80u, 148u, 0x08944B4Cu>(ctx, &aot_mem) && ctx.pc == 0x088DFD74u) goto L_088DFD74;
    return;
L_088DFD74:
    ctx.set_gpr(4, ctx.gpr[2] + 0u);
    ctx.set_gpr(5, 0u + static_cast<std::uint32_t>(1));
    ctx.set_gpr(31, 0x088DFD84u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0065_entry, 65u, 745u, 0x0890B3DCu>(ctx, &aot_mem) && ctx.pc == 0x088DFD84u) goto L_088DFD84;
    return;
L_088DFD84:
    ctx.set_gpr(5, ctx.gpr[17] + static_cast<std::uint32_t>(36));
    ctx.set_gpr(4, ctx.gpr[16] + 0u);
    ctx.set_gpr(31, 0x088DFD94u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0080_entry, 80u, 148u, 0x08944B4Cu>(ctx, &aot_mem) && ctx.pc == 0x088DFD94u) goto L_088DFD94;
    return;
L_088DFD94:
    ctx.set_gpr(4, ctx.gpr[2] + 0u);
    ctx.set_gpr(5, 0u + static_cast<std::uint32_t>(1));
    ctx.set_gpr(31, 0x088DFDA4u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0065_entry, 65u, 745u, 0x0890B3DCu>(ctx, &aot_mem) && ctx.pc == 0x088DFDA4u) goto L_088DFDA4;
    return;
L_088DFDA4:
    ctx.set_gpr(5, ctx.gpr[17] + static_cast<std::uint32_t>(37));
    ctx.set_gpr(4, ctx.gpr[16] + 0u);
    ctx.set_gpr(31, 0x088DFDB4u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0080_entry, 80u, 148u, 0x08944B4Cu>(ctx, &aot_mem) && ctx.pc == 0x088DFDB4u) goto L_088DFDB4;
    return;
L_088DFDB4:
    ctx.set_gpr(18, ctx.gpr[2] + 0u);
    ctx.set_gpr(31, 0x088DFDC0u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0061_entry, 61u, 114u, 0x088F8A48u>(ctx, &aot_mem) && ctx.pc == 0x088DFDC0u) goto L_088DFDC0;
    return;
L_088DFDC0:
    rt.memory().aot_store32(ctx.gpr[18] + static_cast<std::uint32_t>(52), ctx.gpr[2]);
    rt.memory().aot_store8(ctx.gpr[18] + static_cast<std::uint32_t>(56), static_cast<std::uint8_t>(0u));
    ctx.set_gpr(4, ctx.gpr[16] + 0u);
    ctx.set_gpr(5, 2227u << 16u);
    ctx.set_gpr(5, ctx.gpr[5] + static_cast<std::uint32_t>(25676));
    ctx.set_gpr(6, 2227u << 16u);
    ctx.set_gpr(6, ctx.gpr[6] + static_cast<std::uint32_t>(25828));
    ctx.set_gpr(7, 2227u << 16u);
    ctx.set_gpr(7, ctx.gpr[7] + static_cast<std::uint32_t>(25980));
    ctx.set_gpr(8, ctx.gpr[17] + 0u);
    ctx.set_gpr(31, 0x088DFDF0u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0080_entry, 80u, 162u, 0x08944C7Cu>(ctx, &aot_mem) && ctx.pc == 0x088DFDF0u) goto L_088DFDF0;
    return;
L_088DFDF0:
    ctx.set_gpr(4, 2190u << 16u);
    ctx.set_gpr(4, ctx.gpr[4] + static_cast<std::uint32_t>(-480));
    ctx.set_gpr(3, 2245u << 16u);
    ctx.set_gpr(3, rt.memory().aot_load32(ctx.gpr[3] + static_cast<std::uint32_t>(27200)));
    rt.memory().aot_store32(ctx.gpr[3] + static_cast<std::uint32_t>(60), ctx.gpr[4]);
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
L_088DFE20:
    ctx.set_gpr(29, ctx.gpr[29] + static_cast<std::uint32_t>(-16));
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(12), ctx.gpr[31]);
    ctx.set_gpr(31, 0x088DFE30u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0062_entry, 62u, 114u, 0x088FCA40u>(ctx, &aot_mem) && ctx.pc == 0x088DFE30u) goto L_088DFE30;
    return;
L_088DFE30:
    ctx.set_gpr(31, rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(12)));
    ctx.set_gpr(29, ctx.gpr[29] + static_cast<std::uint32_t>(16));
    jump_target = ctx.gpr[31];
    // nop
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_088DFE40:
    ctx.set_gpr(29, ctx.gpr[29] + static_cast<std::uint32_t>(-16));
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(12), ctx.gpr[31]);
    ctx.set_gpr(2, 2245u << 16u);
    ctx.set_gpr(2, rt.memory().aot_load32(ctx.gpr[2] + static_cast<std::uint32_t>(27356)));
    { const bool branch_taken = ctx.gpr[2] != 0u;
    // nop
      if (branch_taken) {
          goto L_088DFE84;
      }
      goto L_088DFE58;
    }
L_088DFE58:
    ctx.set_gpr(4, 2227u << 16u);
    ctx.set_gpr(4, ctx.gpr[4] + static_cast<std::uint32_t>(26504));
    ctx.set_gpr(5, 2227u << 16u);
    ctx.set_gpr(5, ctx.gpr[5] + static_cast<std::uint32_t>(26392));
    ctx.set_gpr(6, 2227u << 16u);
    ctx.set_gpr(6, ctx.gpr[6] + static_cast<std::uint32_t>(26448));
    ctx.set_gpr(7, 0u + static_cast<std::uint32_t>(14));
    ctx.set_gpr(31, 0x088DFE7Cu);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0079_entry, 79u, 432u, 0x08941E90u>(ctx, &aot_mem) && ctx.pc == 0x088DFE7Cu) goto L_088DFE7C;
    return;
L_088DFE7C:
    ctx.set_gpr(3, 2245u << 16u);
    rt.memory().aot_store32(ctx.gpr[3] + static_cast<std::uint32_t>(27356), ctx.gpr[2]);
    goto L_088DFE84;
L_088DFE84:
    ctx.set_gpr(2, 2245u << 16u);
    ctx.set_gpr(2, rt.memory().aot_load32(ctx.gpr[2] + static_cast<std::uint32_t>(27356)));
    ctx.set_gpr(31, rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(12)));
    ctx.set_gpr(29, ctx.gpr[29] + static_cast<std::uint32_t>(16));
    jump_target = ctx.gpr[31];
    // nop
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_088DFE9C:
    ctx.set_gpr(29, ctx.gpr[29] + static_cast<std::uint32_t>(-16));
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(12), ctx.gpr[31]);
    ctx.set_gpr(2, 2245u << 16u);
    ctx.set_gpr(2, rt.memory().aot_load32(ctx.gpr[2] + static_cast<std::uint32_t>(27360)));
    { const bool branch_taken = ctx.gpr[2] != 0u;
    // nop
      if (branch_taken) {
          goto L_088DFEE0;
      }
      goto L_088DFEB4;
    }
L_088DFEB4:
    ctx.set_gpr(4, 2227u << 16u);
    ctx.set_gpr(4, ctx.gpr[4] + static_cast<std::uint32_t>(26616));
    ctx.set_gpr(5, 2227u << 16u);
    ctx.set_gpr(5, ctx.gpr[5] + static_cast<std::uint32_t>(26584));
    ctx.set_gpr(6, 2227u << 16u);
    ctx.set_gpr(6, ctx.gpr[6] + static_cast<std::uint32_t>(26600));
    ctx.set_gpr(7, 0u + static_cast<std::uint32_t>(4));
    ctx.set_gpr(31, 0x088DFED8u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0079_entry, 79u, 432u, 0x08941E90u>(ctx, &aot_mem) && ctx.pc == 0x088DFED8u) goto L_088DFED8;
    return;
L_088DFED8:
    ctx.set_gpr(3, 2245u << 16u);
    rt.memory().aot_store32(ctx.gpr[3] + static_cast<std::uint32_t>(27360), ctx.gpr[2]);
    goto L_088DFEE0;
L_088DFEE0:
    ctx.set_gpr(2, 2245u << 16u);
    ctx.set_gpr(2, rt.memory().aot_load32(ctx.gpr[2] + static_cast<std::uint32_t>(27360)));
    ctx.set_gpr(31, rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(12)));
    ctx.set_gpr(29, ctx.gpr[29] + static_cast<std::uint32_t>(16));
    jump_target = ctx.gpr[31];
    // nop
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_088DFEF8:
    ctx.set_gpr(29, ctx.gpr[29] + static_cast<std::uint32_t>(-16));
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(12), ctx.gpr[31]);
    ctx.set_gpr(2, 2245u << 16u);
    ctx.set_gpr(2, rt.memory().aot_load32(ctx.gpr[2] + static_cast<std::uint32_t>(27364)));
    { const bool branch_taken = ctx.gpr[2] != 0u;
    // nop
      if (branch_taken) {
          goto L_088DFF3C;
      }
      goto L_088DFF10;
    }
L_088DFF10:
    ctx.set_gpr(4, 2227u << 16u);
    ctx.set_gpr(4, ctx.gpr[4] + static_cast<std::uint32_t>(26728));
    ctx.set_gpr(5, 2227u << 16u);
    ctx.set_gpr(5, ctx.gpr[5] + static_cast<std::uint32_t>(26696));
    ctx.set_gpr(6, 2227u << 16u);
    ctx.set_gpr(6, ctx.gpr[6] + static_cast<std::uint32_t>(26712));
    ctx.set_gpr(7, 0u + static_cast<std::uint32_t>(4));
    ctx.set_gpr(31, 0x088DFF34u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0079_entry, 79u, 432u, 0x08941E90u>(ctx, &aot_mem) && ctx.pc == 0x088DFF34u) goto L_088DFF34;
    return;
L_088DFF34:
    ctx.set_gpr(3, 2245u << 16u);
    rt.memory().aot_store32(ctx.gpr[3] + static_cast<std::uint32_t>(27364), ctx.gpr[2]);
    goto L_088DFF3C;
L_088DFF3C:
    ctx.set_gpr(2, 2245u << 16u);
    ctx.set_gpr(2, rt.memory().aot_load32(ctx.gpr[2] + static_cast<std::uint32_t>(27364)));
    ctx.set_gpr(31, rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(12)));
    ctx.set_gpr(29, ctx.gpr[29] + static_cast<std::uint32_t>(16));
    jump_target = ctx.gpr[31];
    // nop
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_088DFF54:
    ctx.set_gpr(29, ctx.gpr[29] + static_cast<std::uint32_t>(-16));
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(12), ctx.gpr[31]);
    ctx.set_gpr(2, 2245u << 16u);
    ctx.set_gpr(2, rt.memory().aot_load32(ctx.gpr[2] + static_cast<std::uint32_t>(27368)));
    { const bool branch_taken = ctx.gpr[2] == 0u;
    // nop
      if (branch_taken) {
          goto L_088DFF80;
      }
      goto L_088DFF6C;
    }
L_088DFF6C:
    ctx.set_gpr(2, rt.memory().aot_load32(ctx.gpr[2] + static_cast<std::uint32_t>(36)));
    ctx.set_gpr(2, ctx.gpr[2] & 4u);
    ctx.set_gpr(2, 0u < ctx.gpr[2] ? 1u : 0u);
    { const bool branch_taken = ctx.gpr[2] != 0u;
    // nop
      if (branch_taken) {
          goto L_088DFF88;
      }
      goto L_088DFF80;
    }
L_088DFF80:
    ctx.set_gpr(31, 0x088DFF88u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0055_entry, 55u, 2u, 0x088E0014u>(ctx, &aot_mem) && ctx.pc == 0x088DFF88u) goto L_088DFF88;
    return;
L_088DFF88:
    ctx.set_gpr(2, 2245u << 16u);
    ctx.set_gpr(2, rt.memory().aot_load32(ctx.gpr[2] + static_cast<std::uint32_t>(27368)));
    ctx.set_gpr(31, rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(12)));
    ctx.set_gpr(29, ctx.gpr[29] + static_cast<std::uint32_t>(16));
    jump_target = ctx.gpr[31];
    // nop
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_088DFFA0:
    ctx.set_gpr(29, ctx.gpr[29] + static_cast<std::uint32_t>(-48));
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(12), ctx.gpr[31]);
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(8), ctx.gpr[16]);
    ctx.set_gpr(4, ctx.gpr[29] + static_cast<std::uint32_t>(24));
    ctx.set_gpr(31, 0x088DFFB8u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0080_entry, 80u, 398u, 0x08945BF8u>(ctx, &aot_mem) && ctx.pc == 0x088DFFB8u) goto L_088DFFB8;
    return;
L_088DFFB8:
    ctx.set_gpr(2, 2232u << 16u);
    ctx.set_gpr(2, ctx.gpr[2] + static_cast<std::uint32_t>(15508));
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(24), ctx.gpr[2]);
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(44), 0u);
    ctx.set_gpr(31, 0x088DFFD0u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0064_entry, 64u, 444u, 0x08905FF0u>(ctx, &aot_mem) && ctx.pc == 0x088DFFD0u) goto L_088DFFD0;
    return;
L_088DFFD0:
    ctx.set_gpr(2, rt.memory().aot_load32(ctx.gpr[2] + static_cast<std::uint32_t>(932)));
    ctx.set_gpr(2, ctx.gpr[2] + ctx.gpr[29]);
    ctx.set_gpr(16, rt.memory().aot_load32(ctx.gpr[2] + static_cast<std::uint32_t>(24)));
    ctx.set_gpr(2, 2232u << 16u);
    ctx.set_gpr(2, ctx.gpr[2] + static_cast<std::uint32_t>(15508));
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(24), ctx.gpr[2]);
    ctx.set_gpr(4, rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(44)));
    { const bool branch_taken = ctx.gpr[4] == 0u;
    // nop
      if (branch_taken) {
          goto L_088DFFFC;
      }
      goto L_088DFFF4;
    }
L_088DFFF4:
    ctx.set_gpr(31, 0x088DFFFCu);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0014_entry, 14u, 257u, 0x0883D454u>(ctx, &aot_mem) && ctx.pc == 0x088DFFFCu) goto L_088DFFFC;
    return;
L_088DFFFC:
    ctx.set_gpr(2, ctx.gpr[16] + 0u);
    ctx.pc = 0x088E0000u; return;
}

void recomp_unit_0054(Runtime &rt, AllegrexContext &ctx) {
    auto aot_mem = rt.memory().aot_fast_view();
    recomp_unit_0054_entry(rt, ctx, 0u, aot_mem);
}

void register_generated_unit_54(Runtime &runtime) {
    runtime.register_generated_unit(54u, 0x088DC000u, 16384u, &recomp_unit_0054, &recomp_unit_0054_entry);
    runtime.register_function(0x088DC000u, &recomp_unit_0054, "recomp_unit_0054");
    runtime.register_function(0x088DC014u, &recomp_unit_0054, "recomp_unit_0054");
    runtime.register_function(0x088DC028u, &recomp_unit_0054, "recomp_unit_0054");
    runtime.register_function(0x088DC03Cu, &recomp_unit_0054, "recomp_unit_0054");
    runtime.register_function(0x088DC054u, &recomp_unit_0054, "recomp_unit_0054");
    runtime.register_function(0x088DC068u, &recomp_unit_0054, "recomp_unit_0054");
    runtime.register_function(0x088DC070u, &recomp_unit_0054, "recomp_unit_0054");
    runtime.register_function(0x088DC088u, &recomp_unit_0054, "recomp_unit_0054");
    runtime.register_function(0x088DC0A0u, &recomp_unit_0054, "recomp_unit_0054");
    runtime.register_function(0x088DC0B4u, &recomp_unit_0054, "recomp_unit_0054");
    runtime.register_function(0x088DC0DCu, &recomp_unit_0054, "recomp_unit_0054");
    runtime.register_function(0x088DC0F4u, &recomp_unit_0054, "recomp_unit_0054");
    runtime.register_function(0x088DC10Cu, &recomp_unit_0054, "recomp_unit_0054");
    runtime.register_function(0x088DC11Cu, &recomp_unit_0054, "recomp_unit_0054");
    runtime.register_function(0x088DC12Cu, &recomp_unit_0054, "recomp_unit_0054");
    runtime.register_function(0x088DC188u, &recomp_unit_0054, "recomp_unit_0054");
    runtime.register_function(0x088DC198u, &recomp_unit_0054, "recomp_unit_0054");
    runtime.register_function(0x088DC1A8u, &recomp_unit_0054, "recomp_unit_0054");
    runtime.register_function(0x088DC1B8u, &recomp_unit_0054, "recomp_unit_0054");
    runtime.register_function(0x088DC1C8u, &recomp_unit_0054, "recomp_unit_0054");
    runtime.register_function(0x088DC1ECu, &recomp_unit_0054, "recomp_unit_0054");
    runtime.register_function(0x088DC208u, &recomp_unit_0054, "recomp_unit_0054");
    runtime.register_function(0x088DC218u, &recomp_unit_0054, "recomp_unit_0054");
    runtime.register_function(0x088DC228u, &recomp_unit_0054, "recomp_unit_0054");
    runtime.register_function(0x088DC250u, &recomp_unit_0054, "recomp_unit_0054");
    runtime.register_function(0x088DC268u, &recomp_unit_0054, "recomp_unit_0054");
    runtime.register_function(0x088DC284u, &recomp_unit_0054, "recomp_unit_0054");
    runtime.register_function(0x088DC28Cu, &recomp_unit_0054, "recomp_unit_0054");
    runtime.register_function(0x088DC298u, &recomp_unit_0054, "recomp_unit_0054");
    runtime.register_function(0x088DC2ACu, &recomp_unit_0054, "recomp_unit_0054");
    runtime.register_function(0x088DC2C0u, &recomp_unit_0054, "recomp_unit_0054");
    runtime.register_function(0x088DC2C8u, &recomp_unit_0054, "recomp_unit_0054");
    runtime.register_function(0x088DC2D8u, &recomp_unit_0054, "recomp_unit_0054");
    runtime.register_function(0x088DC2FCu, &recomp_unit_0054, "recomp_unit_0054");
    runtime.register_function(0x088DC304u, &recomp_unit_0054, "recomp_unit_0054");
    runtime.register_function(0x088DC30Cu, &recomp_unit_0054, "recomp_unit_0054");
    runtime.register_function(0x088DC330u, &recomp_unit_0054, "recomp_unit_0054");
    runtime.register_function(0x088DC344u, &recomp_unit_0054, "recomp_unit_0054");
    runtime.register_function(0x088DC35Cu, &recomp_unit_0054, "recomp_unit_0054");
    runtime.register_function(0x088DC368u, &recomp_unit_0054, "recomp_unit_0054");
    runtime.register_function(0x088DC370u, &recomp_unit_0054, "recomp_unit_0054");
    runtime.register_function(0x088DC384u, &recomp_unit_0054, "recomp_unit_0054");
    runtime.register_function(0x088DC390u, &recomp_unit_0054, "recomp_unit_0054");
    runtime.register_function(0x088DC3A4u, &recomp_unit_0054, "recomp_unit_0054");
    runtime.register_function(0x088DC3B0u, &recomp_unit_0054, "recomp_unit_0054");
    runtime.register_function(0x088DC3C0u, &recomp_unit_0054, "recomp_unit_0054");
    runtime.register_function(0x088DC3C4u, &recomp_unit_0054, "recomp_unit_0054");
    runtime.register_function(0x088DC3D8u, &recomp_unit_0054, "recomp_unit_0054");
    runtime.register_function(0x088DC3F0u, &recomp_unit_0054, "recomp_unit_0054");
    runtime.register_function(0x088DC408u, &recomp_unit_0054, "recomp_unit_0054");
    runtime.register_function(0x088DC428u, &recomp_unit_0054, "recomp_unit_0054");
    runtime.register_function(0x088DC434u, &recomp_unit_0054, "recomp_unit_0054");
    runtime.register_function(0x088DC43Cu, &recomp_unit_0054, "recomp_unit_0054");
    runtime.register_function(0x088DC44Cu, &recomp_unit_0054, "recomp_unit_0054");
    runtime.register_function(0x088DC454u, &recomp_unit_0054, "recomp_unit_0054");
    runtime.register_function(0x088DC464u, &recomp_unit_0054, "recomp_unit_0054");
    runtime.register_function(0x088DC46Cu, &recomp_unit_0054, "recomp_unit_0054");
    runtime.register_function(0x088DC47Cu, &recomp_unit_0054, "recomp_unit_0054");
    runtime.register_function(0x088DC494u, &recomp_unit_0054, "recomp_unit_0054");
    runtime.register_function(0x088DC4ACu, &recomp_unit_0054, "recomp_unit_0054");
    runtime.register_function(0x088DC4C0u, &recomp_unit_0054, "recomp_unit_0054");
    runtime.register_function(0x088DC4C8u, &recomp_unit_0054, "recomp_unit_0054");
    runtime.register_function(0x088DC4E0u, &recomp_unit_0054, "recomp_unit_0054");
    runtime.register_function(0x088DC4F8u, &recomp_unit_0054, "recomp_unit_0054");
    runtime.register_function(0x088DC500u, &recomp_unit_0054, "recomp_unit_0054");
    runtime.register_function(0x088DC528u, &recomp_unit_0054, "recomp_unit_0054");
    runtime.register_function(0x088DC540u, &recomp_unit_0054, "recomp_unit_0054");
    runtime.register_function(0x088DC558u, &recomp_unit_0054, "recomp_unit_0054");
    runtime.register_function(0x088DC568u, &recomp_unit_0054, "recomp_unit_0054");
    runtime.register_function(0x088DC5C4u, &recomp_unit_0054, "recomp_unit_0054");
    runtime.register_function(0x088DC5D4u, &recomp_unit_0054, "recomp_unit_0054");
    runtime.register_function(0x088DC5E4u, &recomp_unit_0054, "recomp_unit_0054");
    runtime.register_function(0x088DC5F4u, &recomp_unit_0054, "recomp_unit_0054");
    runtime.register_function(0x088DC610u, &recomp_unit_0054, "recomp_unit_0054");
    runtime.register_function(0x088DC618u, &recomp_unit_0054, "recomp_unit_0054");
    runtime.register_function(0x088DC624u, &recomp_unit_0054, "recomp_unit_0054");
    runtime.register_function(0x088DC638u, &recomp_unit_0054, "recomp_unit_0054");
    runtime.register_function(0x088DC64Cu, &recomp_unit_0054, "recomp_unit_0054");
    runtime.register_function(0x088DC654u, &recomp_unit_0054, "recomp_unit_0054");
    runtime.register_function(0x088DC664u, &recomp_unit_0054, "recomp_unit_0054");
    runtime.register_function(0x088DC688u, &recomp_unit_0054, "recomp_unit_0054");
    runtime.register_function(0x088DC690u, &recomp_unit_0054, "recomp_unit_0054");
    runtime.register_function(0x088DC698u, &recomp_unit_0054, "recomp_unit_0054");
    runtime.register_function(0x088DC6BCu, &recomp_unit_0054, "recomp_unit_0054");
    runtime.register_function(0x088DC6D0u, &recomp_unit_0054, "recomp_unit_0054");
    runtime.register_function(0x088DC6E8u, &recomp_unit_0054, "recomp_unit_0054");
    runtime.register_function(0x088DC6F0u, &recomp_unit_0054, "recomp_unit_0054");
    runtime.register_function(0x088DC708u, &recomp_unit_0054, "recomp_unit_0054");
    runtime.register_function(0x088DC720u, &recomp_unit_0054, "recomp_unit_0054");
    runtime.register_function(0x088DC728u, &recomp_unit_0054, "recomp_unit_0054");
    runtime.register_function(0x088DC734u, &recomp_unit_0054, "recomp_unit_0054");
    runtime.register_function(0x088DC740u, &recomp_unit_0054, "recomp_unit_0054");
    runtime.register_function(0x088DC748u, &recomp_unit_0054, "recomp_unit_0054");
    runtime.register_function(0x088DC760u, &recomp_unit_0054, "recomp_unit_0054");
    runtime.register_function(0x088DC778u, &recomp_unit_0054, "recomp_unit_0054");
    runtime.register_function(0x088DC78Cu, &recomp_unit_0054, "recomp_unit_0054");
    runtime.register_function(0x088DC794u, &recomp_unit_0054, "recomp_unit_0054");
    runtime.register_function(0x088DC7ACu, &recomp_unit_0054, "recomp_unit_0054");
    runtime.register_function(0x088DC7C4u, &recomp_unit_0054, "recomp_unit_0054");
    runtime.register_function(0x088DC7D4u, &recomp_unit_0054, "recomp_unit_0054");
    runtime.register_function(0x088DC834u, &recomp_unit_0054, "recomp_unit_0054");
    runtime.register_function(0x088DC844u, &recomp_unit_0054, "recomp_unit_0054");
    runtime.register_function(0x088DC854u, &recomp_unit_0054, "recomp_unit_0054");
    runtime.register_function(0x088DC864u, &recomp_unit_0054, "recomp_unit_0054");
    runtime.register_function(0x088DC888u, &recomp_unit_0054, "recomp_unit_0054");
    runtime.register_function(0x088DC8A4u, &recomp_unit_0054, "recomp_unit_0054");
    runtime.register_function(0x088DC8CCu, &recomp_unit_0054, "recomp_unit_0054");
    runtime.register_function(0x088DC8E4u, &recomp_unit_0054, "recomp_unit_0054");
    runtime.register_function(0x088DC900u, &recomp_unit_0054, "recomp_unit_0054");
    runtime.register_function(0x088DC908u, &recomp_unit_0054, "recomp_unit_0054");
    runtime.register_function(0x088DC914u, &recomp_unit_0054, "recomp_unit_0054");
    runtime.register_function(0x088DC928u, &recomp_unit_0054, "recomp_unit_0054");
    runtime.register_function(0x088DC93Cu, &recomp_unit_0054, "recomp_unit_0054");
    runtime.register_function(0x088DC944u, &recomp_unit_0054, "recomp_unit_0054");
    runtime.register_function(0x088DC954u, &recomp_unit_0054, "recomp_unit_0054");
    runtime.register_function(0x088DC978u, &recomp_unit_0054, "recomp_unit_0054");
    runtime.register_function(0x088DC980u, &recomp_unit_0054, "recomp_unit_0054");
    runtime.register_function(0x088DC988u, &recomp_unit_0054, "recomp_unit_0054");
    runtime.register_function(0x088DC9ACu, &recomp_unit_0054, "recomp_unit_0054");
    runtime.register_function(0x088DC9C0u, &recomp_unit_0054, "recomp_unit_0054");
    runtime.register_function(0x088DC9D8u, &recomp_unit_0054, "recomp_unit_0054");
    runtime.register_function(0x088DC9ECu, &recomp_unit_0054, "recomp_unit_0054");
    runtime.register_function(0x088DC9F4u, &recomp_unit_0054, "recomp_unit_0054");
    runtime.register_function(0x088DCA0Cu, &recomp_unit_0054, "recomp_unit_0054");
    runtime.register_function(0x088DCA24u, &recomp_unit_0054, "recomp_unit_0054");
    runtime.register_function(0x088DCA38u, &recomp_unit_0054, "recomp_unit_0054");
    runtime.register_function(0x088DCA60u, &recomp_unit_0054, "recomp_unit_0054");
    runtime.register_function(0x088DCA78u, &recomp_unit_0054, "recomp_unit_0054");
    runtime.register_function(0x088DCA90u, &recomp_unit_0054, "recomp_unit_0054");
    runtime.register_function(0x088DCAA0u, &recomp_unit_0054, "recomp_unit_0054");
    runtime.register_function(0x088DCAB0u, &recomp_unit_0054, "recomp_unit_0054");
    runtime.register_function(0x088DCB0Cu, &recomp_unit_0054, "recomp_unit_0054");
    runtime.register_function(0x088DCB1Cu, &recomp_unit_0054, "recomp_unit_0054");
    runtime.register_function(0x088DCB2Cu, &recomp_unit_0054, "recomp_unit_0054");
    runtime.register_function(0x088DCB3Cu, &recomp_unit_0054, "recomp_unit_0054");
    runtime.register_function(0x088DCB4Cu, &recomp_unit_0054, "recomp_unit_0054");
    runtime.register_function(0x088DCB70u, &recomp_unit_0054, "recomp_unit_0054");
    runtime.register_function(0x088DCB8Cu, &recomp_unit_0054, "recomp_unit_0054");
    runtime.register_function(0x088DCB9Cu, &recomp_unit_0054, "recomp_unit_0054");
    runtime.register_function(0x088DCBACu, &recomp_unit_0054, "recomp_unit_0054");
    runtime.register_function(0x088DCBD4u, &recomp_unit_0054, "recomp_unit_0054");
    runtime.register_function(0x088DCBECu, &recomp_unit_0054, "recomp_unit_0054");
    runtime.register_function(0x088DCC08u, &recomp_unit_0054, "recomp_unit_0054");
    runtime.register_function(0x088DCC10u, &recomp_unit_0054, "recomp_unit_0054");
    runtime.register_function(0x088DCC1Cu, &recomp_unit_0054, "recomp_unit_0054");
    runtime.register_function(0x088DCC30u, &recomp_unit_0054, "recomp_unit_0054");
    runtime.register_function(0x088DCC44u, &recomp_unit_0054, "recomp_unit_0054");
    runtime.register_function(0x088DCC4Cu, &recomp_unit_0054, "recomp_unit_0054");
    runtime.register_function(0x088DCC5Cu, &recomp_unit_0054, "recomp_unit_0054");
    runtime.register_function(0x088DCC80u, &recomp_unit_0054, "recomp_unit_0054");
    runtime.register_function(0x088DCC88u, &recomp_unit_0054, "recomp_unit_0054");
    runtime.register_function(0x088DCC90u, &recomp_unit_0054, "recomp_unit_0054");
    runtime.register_function(0x088DCCB4u, &recomp_unit_0054, "recomp_unit_0054");
    runtime.register_function(0x088DCCC8u, &recomp_unit_0054, "recomp_unit_0054");
    runtime.register_function(0x088DCCE0u, &recomp_unit_0054, "recomp_unit_0054");
    runtime.register_function(0x088DCCECu, &recomp_unit_0054, "recomp_unit_0054");
    runtime.register_function(0x088DCCF4u, &recomp_unit_0054, "recomp_unit_0054");
    runtime.register_function(0x088DCD08u, &recomp_unit_0054, "recomp_unit_0054");
    runtime.register_function(0x088DCD14u, &recomp_unit_0054, "recomp_unit_0054");
    runtime.register_function(0x088DCD28u, &recomp_unit_0054, "recomp_unit_0054");
    runtime.register_function(0x088DCD34u, &recomp_unit_0054, "recomp_unit_0054");
    runtime.register_function(0x088DCD44u, &recomp_unit_0054, "recomp_unit_0054");
    runtime.register_function(0x088DCD48u, &recomp_unit_0054, "recomp_unit_0054");
    runtime.register_function(0x088DCD5Cu, &recomp_unit_0054, "recomp_unit_0054");
    runtime.register_function(0x088DCD74u, &recomp_unit_0054, "recomp_unit_0054");
    runtime.register_function(0x088DCD8Cu, &recomp_unit_0054, "recomp_unit_0054");
    runtime.register_function(0x088DCDACu, &recomp_unit_0054, "recomp_unit_0054");
    runtime.register_function(0x088DCDB8u, &recomp_unit_0054, "recomp_unit_0054");
    runtime.register_function(0x088DCDC0u, &recomp_unit_0054, "recomp_unit_0054");
    runtime.register_function(0x088DCDD0u, &recomp_unit_0054, "recomp_unit_0054");
    runtime.register_function(0x088DCDD8u, &recomp_unit_0054, "recomp_unit_0054");
    runtime.register_function(0x088DCDE8u, &recomp_unit_0054, "recomp_unit_0054");
    runtime.register_function(0x088DCDF0u, &recomp_unit_0054, "recomp_unit_0054");
    runtime.register_function(0x088DCE00u, &recomp_unit_0054, "recomp_unit_0054");
    runtime.register_function(0x088DCE18u, &recomp_unit_0054, "recomp_unit_0054");
    runtime.register_function(0x088DCE30u, &recomp_unit_0054, "recomp_unit_0054");
    runtime.register_function(0x088DCE44u, &recomp_unit_0054, "recomp_unit_0054");
    runtime.register_function(0x088DCE4Cu, &recomp_unit_0054, "recomp_unit_0054");
    runtime.register_function(0x088DCE64u, &recomp_unit_0054, "recomp_unit_0054");
    runtime.register_function(0x088DCE7Cu, &recomp_unit_0054, "recomp_unit_0054");
    runtime.register_function(0x088DCE84u, &recomp_unit_0054, "recomp_unit_0054");
    runtime.register_function(0x088DCEA8u, &recomp_unit_0054, "recomp_unit_0054");
    runtime.register_function(0x088DCEC0u, &recomp_unit_0054, "recomp_unit_0054");
    runtime.register_function(0x088DCED8u, &recomp_unit_0054, "recomp_unit_0054");
    runtime.register_function(0x088DCEE8u, &recomp_unit_0054, "recomp_unit_0054");
    runtime.register_function(0x088DCF44u, &recomp_unit_0054, "recomp_unit_0054");
    runtime.register_function(0x088DCF54u, &recomp_unit_0054, "recomp_unit_0054");
    runtime.register_function(0x088DCF64u, &recomp_unit_0054, "recomp_unit_0054");
    runtime.register_function(0x088DCF74u, &recomp_unit_0054, "recomp_unit_0054");
    runtime.register_function(0x088DCF90u, &recomp_unit_0054, "recomp_unit_0054");
    runtime.register_function(0x088DCF98u, &recomp_unit_0054, "recomp_unit_0054");
    runtime.register_function(0x088DCFA4u, &recomp_unit_0054, "recomp_unit_0054");
    runtime.register_function(0x088DCFB8u, &recomp_unit_0054, "recomp_unit_0054");
    runtime.register_function(0x088DCFCCu, &recomp_unit_0054, "recomp_unit_0054");
    runtime.register_function(0x088DCFD4u, &recomp_unit_0054, "recomp_unit_0054");
    runtime.register_function(0x088DCFE4u, &recomp_unit_0054, "recomp_unit_0054");
    runtime.register_function(0x088DD008u, &recomp_unit_0054, "recomp_unit_0054");
    runtime.register_function(0x088DD010u, &recomp_unit_0054, "recomp_unit_0054");
    runtime.register_function(0x088DD018u, &recomp_unit_0054, "recomp_unit_0054");
    runtime.register_function(0x088DD03Cu, &recomp_unit_0054, "recomp_unit_0054");
    runtime.register_function(0x088DD050u, &recomp_unit_0054, "recomp_unit_0054");
    runtime.register_function(0x088DD068u, &recomp_unit_0054, "recomp_unit_0054");
    runtime.register_function(0x088DD070u, &recomp_unit_0054, "recomp_unit_0054");
    runtime.register_function(0x088DD088u, &recomp_unit_0054, "recomp_unit_0054");
    runtime.register_function(0x088DD0A0u, &recomp_unit_0054, "recomp_unit_0054");
    runtime.register_function(0x088DD0B4u, &recomp_unit_0054, "recomp_unit_0054");
    runtime.register_function(0x088DD0BCu, &recomp_unit_0054, "recomp_unit_0054");
    runtime.register_function(0x088DD0D4u, &recomp_unit_0054, "recomp_unit_0054");
    runtime.register_function(0x088DD0ECu, &recomp_unit_0054, "recomp_unit_0054");
    runtime.register_function(0x088DD100u, &recomp_unit_0054, "recomp_unit_0054");
    runtime.register_function(0x088DD128u, &recomp_unit_0054, "recomp_unit_0054");
    runtime.register_function(0x088DD140u, &recomp_unit_0054, "recomp_unit_0054");
    runtime.register_function(0x088DD158u, &recomp_unit_0054, "recomp_unit_0054");
    runtime.register_function(0x088DD168u, &recomp_unit_0054, "recomp_unit_0054");
    runtime.register_function(0x088DD178u, &recomp_unit_0054, "recomp_unit_0054");
    runtime.register_function(0x088DD1D4u, &recomp_unit_0054, "recomp_unit_0054");
    runtime.register_function(0x088DD1E4u, &recomp_unit_0054, "recomp_unit_0054");
    runtime.register_function(0x088DD1F4u, &recomp_unit_0054, "recomp_unit_0054");
    runtime.register_function(0x088DD204u, &recomp_unit_0054, "recomp_unit_0054");
    runtime.register_function(0x088DD214u, &recomp_unit_0054, "recomp_unit_0054");
    runtime.register_function(0x088DD238u, &recomp_unit_0054, "recomp_unit_0054");
    runtime.register_function(0x088DD254u, &recomp_unit_0054, "recomp_unit_0054");
    runtime.register_function(0x088DD264u, &recomp_unit_0054, "recomp_unit_0054");
    runtime.register_function(0x088DD274u, &recomp_unit_0054, "recomp_unit_0054");
    runtime.register_function(0x088DD29Cu, &recomp_unit_0054, "recomp_unit_0054");
    runtime.register_function(0x088DD2B4u, &recomp_unit_0054, "recomp_unit_0054");
    runtime.register_function(0x088DD2D0u, &recomp_unit_0054, "recomp_unit_0054");
    runtime.register_function(0x088DD2D8u, &recomp_unit_0054, "recomp_unit_0054");
    runtime.register_function(0x088DD2E4u, &recomp_unit_0054, "recomp_unit_0054");
    runtime.register_function(0x088DD2F8u, &recomp_unit_0054, "recomp_unit_0054");
    runtime.register_function(0x088DD30Cu, &recomp_unit_0054, "recomp_unit_0054");
    runtime.register_function(0x088DD314u, &recomp_unit_0054, "recomp_unit_0054");
    runtime.register_function(0x088DD324u, &recomp_unit_0054, "recomp_unit_0054");
    runtime.register_function(0x088DD348u, &recomp_unit_0054, "recomp_unit_0054");
    runtime.register_function(0x088DD350u, &recomp_unit_0054, "recomp_unit_0054");
    runtime.register_function(0x088DD358u, &recomp_unit_0054, "recomp_unit_0054");
    runtime.register_function(0x088DD37Cu, &recomp_unit_0054, "recomp_unit_0054");
    runtime.register_function(0x088DD390u, &recomp_unit_0054, "recomp_unit_0054");
    runtime.register_function(0x088DD3A8u, &recomp_unit_0054, "recomp_unit_0054");
    runtime.register_function(0x088DD3B4u, &recomp_unit_0054, "recomp_unit_0054");
    runtime.register_function(0x088DD3BCu, &recomp_unit_0054, "recomp_unit_0054");
    runtime.register_function(0x088DD3D0u, &recomp_unit_0054, "recomp_unit_0054");
    runtime.register_function(0x088DD3DCu, &recomp_unit_0054, "recomp_unit_0054");
    runtime.register_function(0x088DD3F0u, &recomp_unit_0054, "recomp_unit_0054");
    runtime.register_function(0x088DD3FCu, &recomp_unit_0054, "recomp_unit_0054");
    runtime.register_function(0x088DD40Cu, &recomp_unit_0054, "recomp_unit_0054");
    runtime.register_function(0x088DD410u, &recomp_unit_0054, "recomp_unit_0054");
    runtime.register_function(0x088DD424u, &recomp_unit_0054, "recomp_unit_0054");
    runtime.register_function(0x088DD43Cu, &recomp_unit_0054, "recomp_unit_0054");
    runtime.register_function(0x088DD454u, &recomp_unit_0054, "recomp_unit_0054");
    runtime.register_function(0x088DD474u, &recomp_unit_0054, "recomp_unit_0054");
    runtime.register_function(0x088DD480u, &recomp_unit_0054, "recomp_unit_0054");
    runtime.register_function(0x088DD488u, &recomp_unit_0054, "recomp_unit_0054");
    runtime.register_function(0x088DD498u, &recomp_unit_0054, "recomp_unit_0054");
    runtime.register_function(0x088DD4A0u, &recomp_unit_0054, "recomp_unit_0054");
    runtime.register_function(0x088DD4B0u, &recomp_unit_0054, "recomp_unit_0054");
    runtime.register_function(0x088DD4B8u, &recomp_unit_0054, "recomp_unit_0054");
    runtime.register_function(0x088DD4C8u, &recomp_unit_0054, "recomp_unit_0054");
    runtime.register_function(0x088DD4E0u, &recomp_unit_0054, "recomp_unit_0054");
    runtime.register_function(0x088DD4F8u, &recomp_unit_0054, "recomp_unit_0054");
    runtime.register_function(0x088DD50Cu, &recomp_unit_0054, "recomp_unit_0054");
    runtime.register_function(0x088DD514u, &recomp_unit_0054, "recomp_unit_0054");
    runtime.register_function(0x088DD52Cu, &recomp_unit_0054, "recomp_unit_0054");
    runtime.register_function(0x088DD544u, &recomp_unit_0054, "recomp_unit_0054");
    runtime.register_function(0x088DD54Cu, &recomp_unit_0054, "recomp_unit_0054");
    runtime.register_function(0x088DD574u, &recomp_unit_0054, "recomp_unit_0054");
    runtime.register_function(0x088DD58Cu, &recomp_unit_0054, "recomp_unit_0054");
    runtime.register_function(0x088DD5A4u, &recomp_unit_0054, "recomp_unit_0054");
    runtime.register_function(0x088DD5B4u, &recomp_unit_0054, "recomp_unit_0054");
    runtime.register_function(0x088DD618u, &recomp_unit_0054, "recomp_unit_0054");
    runtime.register_function(0x088DD628u, &recomp_unit_0054, "recomp_unit_0054");
    runtime.register_function(0x088DD638u, &recomp_unit_0054, "recomp_unit_0054");
    runtime.register_function(0x088DD648u, &recomp_unit_0054, "recomp_unit_0054");
    runtime.register_function(0x088DD678u, &recomp_unit_0054, "recomp_unit_0054");
    runtime.register_function(0x088DD68Cu, &recomp_unit_0054, "recomp_unit_0054");
    runtime.register_function(0x088DD6A8u, &recomp_unit_0054, "recomp_unit_0054");
    runtime.register_function(0x088DD6BCu, &recomp_unit_0054, "recomp_unit_0054");
    runtime.register_function(0x088DD6DCu, &recomp_unit_0054, "recomp_unit_0054");
    runtime.register_function(0x088DD6F8u, &recomp_unit_0054, "recomp_unit_0054");
    runtime.register_function(0x088DD704u, &recomp_unit_0054, "recomp_unit_0054");
    runtime.register_function(0x088DD718u, &recomp_unit_0054, "recomp_unit_0054");
    runtime.register_function(0x088DD72Cu, &recomp_unit_0054, "recomp_unit_0054");
    runtime.register_function(0x088DD748u, &recomp_unit_0054, "recomp_unit_0054");
    runtime.register_function(0x088DD75Cu, &recomp_unit_0054, "recomp_unit_0054");
    runtime.register_function(0x088DD77Cu, &recomp_unit_0054, "recomp_unit_0054");
    runtime.register_function(0x088DD798u, &recomp_unit_0054, "recomp_unit_0054");
    runtime.register_function(0x088DD7A4u, &recomp_unit_0054, "recomp_unit_0054");
    runtime.register_function(0x088DD7C0u, &recomp_unit_0054, "recomp_unit_0054");
    runtime.register_function(0x088DD7DCu, &recomp_unit_0054, "recomp_unit_0054");
    runtime.register_function(0x088DD7E4u, &recomp_unit_0054, "recomp_unit_0054");
    runtime.register_function(0x088DD7F0u, &recomp_unit_0054, "recomp_unit_0054");
    runtime.register_function(0x088DD804u, &recomp_unit_0054, "recomp_unit_0054");
    runtime.register_function(0x088DD818u, &recomp_unit_0054, "recomp_unit_0054");
    runtime.register_function(0x088DD820u, &recomp_unit_0054, "recomp_unit_0054");
    runtime.register_function(0x088DD830u, &recomp_unit_0054, "recomp_unit_0054");
    runtime.register_function(0x088DD854u, &recomp_unit_0054, "recomp_unit_0054");
    runtime.register_function(0x088DD85Cu, &recomp_unit_0054, "recomp_unit_0054");
    runtime.register_function(0x088DD864u, &recomp_unit_0054, "recomp_unit_0054");
    runtime.register_function(0x088DD888u, &recomp_unit_0054, "recomp_unit_0054");
    runtime.register_function(0x088DD89Cu, &recomp_unit_0054, "recomp_unit_0054");
    runtime.register_function(0x088DD8B4u, &recomp_unit_0054, "recomp_unit_0054");
    runtime.register_function(0x088DD8BCu, &recomp_unit_0054, "recomp_unit_0054");
    runtime.register_function(0x088DD8D4u, &recomp_unit_0054, "recomp_unit_0054");
    runtime.register_function(0x088DD8ECu, &recomp_unit_0054, "recomp_unit_0054");
    runtime.register_function(0x088DD900u, &recomp_unit_0054, "recomp_unit_0054");
    runtime.register_function(0x088DD914u, &recomp_unit_0054, "recomp_unit_0054");
    runtime.register_function(0x088DD92Cu, &recomp_unit_0054, "recomp_unit_0054");
    runtime.register_function(0x088DD940u, &recomp_unit_0054, "recomp_unit_0054");
    runtime.register_function(0x088DD948u, &recomp_unit_0054, "recomp_unit_0054");
    runtime.register_function(0x088DD960u, &recomp_unit_0054, "recomp_unit_0054");
    runtime.register_function(0x088DD978u, &recomp_unit_0054, "recomp_unit_0054");
    runtime.register_function(0x088DD98Cu, &recomp_unit_0054, "recomp_unit_0054");
    runtime.register_function(0x088DD9B0u, &recomp_unit_0054, "recomp_unit_0054");
    runtime.register_function(0x088DD9C8u, &recomp_unit_0054, "recomp_unit_0054");
    runtime.register_function(0x088DD9E0u, &recomp_unit_0054, "recomp_unit_0054");
    runtime.register_function(0x088DD9F0u, &recomp_unit_0054, "recomp_unit_0054");
    runtime.register_function(0x088DDA00u, &recomp_unit_0054, "recomp_unit_0054");
    runtime.register_function(0x088DDA5Cu, &recomp_unit_0054, "recomp_unit_0054");
    runtime.register_function(0x088DDA6Cu, &recomp_unit_0054, "recomp_unit_0054");
    runtime.register_function(0x088DDA7Cu, &recomp_unit_0054, "recomp_unit_0054");
    runtime.register_function(0x088DDA8Cu, &recomp_unit_0054, "recomp_unit_0054");
    runtime.register_function(0x088DDAB8u, &recomp_unit_0054, "recomp_unit_0054");
    runtime.register_function(0x088DDAD4u, &recomp_unit_0054, "recomp_unit_0054");
    runtime.register_function(0x088DDAE8u, &recomp_unit_0054, "recomp_unit_0054");
    runtime.register_function(0x088DDAFCu, &recomp_unit_0054, "recomp_unit_0054");
    runtime.register_function(0x088DDB18u, &recomp_unit_0054, "recomp_unit_0054");
    runtime.register_function(0x088DDB2Cu, &recomp_unit_0054, "recomp_unit_0054");
    runtime.register_function(0x088DDB50u, &recomp_unit_0054, "recomp_unit_0054");
    runtime.register_function(0x088DDB6Cu, &recomp_unit_0054, "recomp_unit_0054");
    runtime.register_function(0x088DDB78u, &recomp_unit_0054, "recomp_unit_0054");
    runtime.register_function(0x088DDB88u, &recomp_unit_0054, "recomp_unit_0054");
    runtime.register_function(0x088DDB9Cu, &recomp_unit_0054, "recomp_unit_0054");
    runtime.register_function(0x088DDBC8u, &recomp_unit_0054, "recomp_unit_0054");
    runtime.register_function(0x088DDBE8u, &recomp_unit_0054, "recomp_unit_0054");
    runtime.register_function(0x088DDC04u, &recomp_unit_0054, "recomp_unit_0054");
    runtime.register_function(0x088DDC0Cu, &recomp_unit_0054, "recomp_unit_0054");
    runtime.register_function(0x088DDC18u, &recomp_unit_0054, "recomp_unit_0054");
    runtime.register_function(0x088DDC2Cu, &recomp_unit_0054, "recomp_unit_0054");
    runtime.register_function(0x088DDC40u, &recomp_unit_0054, "recomp_unit_0054");
    runtime.register_function(0x088DDC48u, &recomp_unit_0054, "recomp_unit_0054");
    runtime.register_function(0x088DDC58u, &recomp_unit_0054, "recomp_unit_0054");
    runtime.register_function(0x088DDC7Cu, &recomp_unit_0054, "recomp_unit_0054");
    runtime.register_function(0x088DDC84u, &recomp_unit_0054, "recomp_unit_0054");
    runtime.register_function(0x088DDC8Cu, &recomp_unit_0054, "recomp_unit_0054");
    runtime.register_function(0x088DDCB0u, &recomp_unit_0054, "recomp_unit_0054");
    runtime.register_function(0x088DDCC4u, &recomp_unit_0054, "recomp_unit_0054");
    runtime.register_function(0x088DDCDCu, &recomp_unit_0054, "recomp_unit_0054");
    runtime.register_function(0x088DDCE4u, &recomp_unit_0054, "recomp_unit_0054");
    runtime.register_function(0x088DDCFCu, &recomp_unit_0054, "recomp_unit_0054");
    runtime.register_function(0x088DDD14u, &recomp_unit_0054, "recomp_unit_0054");
    runtime.register_function(0x088DDD28u, &recomp_unit_0054, "recomp_unit_0054");
    runtime.register_function(0x088DDD3Cu, &recomp_unit_0054, "recomp_unit_0054");
    runtime.register_function(0x088DDD54u, &recomp_unit_0054, "recomp_unit_0054");
    runtime.register_function(0x088DDD68u, &recomp_unit_0054, "recomp_unit_0054");
    runtime.register_function(0x088DDD70u, &recomp_unit_0054, "recomp_unit_0054");
    runtime.register_function(0x088DDD88u, &recomp_unit_0054, "recomp_unit_0054");
    runtime.register_function(0x088DDDA0u, &recomp_unit_0054, "recomp_unit_0054");
    runtime.register_function(0x088DDDB4u, &recomp_unit_0054, "recomp_unit_0054");
    runtime.register_function(0x088DDDDCu, &recomp_unit_0054, "recomp_unit_0054");
    runtime.register_function(0x088DDDF4u, &recomp_unit_0054, "recomp_unit_0054");
    runtime.register_function(0x088DDE0Cu, &recomp_unit_0054, "recomp_unit_0054");
    runtime.register_function(0x088DDE1Cu, &recomp_unit_0054, "recomp_unit_0054");
    runtime.register_function(0x088DDE2Cu, &recomp_unit_0054, "recomp_unit_0054");
    runtime.register_function(0x088DDE88u, &recomp_unit_0054, "recomp_unit_0054");
    runtime.register_function(0x088DDE98u, &recomp_unit_0054, "recomp_unit_0054");
    runtime.register_function(0x088DDEA8u, &recomp_unit_0054, "recomp_unit_0054");
    runtime.register_function(0x088DDEB8u, &recomp_unit_0054, "recomp_unit_0054");
    runtime.register_function(0x088DDEC8u, &recomp_unit_0054, "recomp_unit_0054");
    runtime.register_function(0x088DDEECu, &recomp_unit_0054, "recomp_unit_0054");
    runtime.register_function(0x088DDF08u, &recomp_unit_0054, "recomp_unit_0054");
    runtime.register_function(0x088DDF18u, &recomp_unit_0054, "recomp_unit_0054");
    runtime.register_function(0x088DDF28u, &recomp_unit_0054, "recomp_unit_0054");
    runtime.register_function(0x088DDF50u, &recomp_unit_0054, "recomp_unit_0054");
    runtime.register_function(0x088DDF68u, &recomp_unit_0054, "recomp_unit_0054");
    runtime.register_function(0x088DDF84u, &recomp_unit_0054, "recomp_unit_0054");
    runtime.register_function(0x088DDF8Cu, &recomp_unit_0054, "recomp_unit_0054");
    runtime.register_function(0x088DDF98u, &recomp_unit_0054, "recomp_unit_0054");
    runtime.register_function(0x088DDFACu, &recomp_unit_0054, "recomp_unit_0054");
    runtime.register_function(0x088DDFC0u, &recomp_unit_0054, "recomp_unit_0054");
    runtime.register_function(0x088DDFC8u, &recomp_unit_0054, "recomp_unit_0054");
    runtime.register_function(0x088DDFD8u, &recomp_unit_0054, "recomp_unit_0054");
    runtime.register_function(0x088DDFFCu, &recomp_unit_0054, "recomp_unit_0054");
    runtime.register_function(0x088DE004u, &recomp_unit_0054, "recomp_unit_0054");
    runtime.register_function(0x088DE00Cu, &recomp_unit_0054, "recomp_unit_0054");
    runtime.register_function(0x088DE030u, &recomp_unit_0054, "recomp_unit_0054");
    runtime.register_function(0x088DE044u, &recomp_unit_0054, "recomp_unit_0054");
    runtime.register_function(0x088DE05Cu, &recomp_unit_0054, "recomp_unit_0054");
    runtime.register_function(0x088DE070u, &recomp_unit_0054, "recomp_unit_0054");
    runtime.register_function(0x088DE084u, &recomp_unit_0054, "recomp_unit_0054");
    runtime.register_function(0x088DE09Cu, &recomp_unit_0054, "recomp_unit_0054");
    runtime.register_function(0x088DE0B0u, &recomp_unit_0054, "recomp_unit_0054");
    runtime.register_function(0x088DE0B8u, &recomp_unit_0054, "recomp_unit_0054");
    runtime.register_function(0x088DE0D0u, &recomp_unit_0054, "recomp_unit_0054");
    runtime.register_function(0x088DE0E8u, &recomp_unit_0054, "recomp_unit_0054");
    runtime.register_function(0x088DE0FCu, &recomp_unit_0054, "recomp_unit_0054");
    runtime.register_function(0x088DE120u, &recomp_unit_0054, "recomp_unit_0054");
    runtime.register_function(0x088DE138u, &recomp_unit_0054, "recomp_unit_0054");
    runtime.register_function(0x088DE150u, &recomp_unit_0054, "recomp_unit_0054");
    runtime.register_function(0x088DE160u, &recomp_unit_0054, "recomp_unit_0054");
    runtime.register_function(0x088DE170u, &recomp_unit_0054, "recomp_unit_0054");
    runtime.register_function(0x088DE1C4u, &recomp_unit_0054, "recomp_unit_0054");
    runtime.register_function(0x088DE1D4u, &recomp_unit_0054, "recomp_unit_0054");
    runtime.register_function(0x088DE1E4u, &recomp_unit_0054, "recomp_unit_0054");
    runtime.register_function(0x088DE1F4u, &recomp_unit_0054, "recomp_unit_0054");
    runtime.register_function(0x088DE210u, &recomp_unit_0054, "recomp_unit_0054");
    runtime.register_function(0x088DE218u, &recomp_unit_0054, "recomp_unit_0054");
    runtime.register_function(0x088DE224u, &recomp_unit_0054, "recomp_unit_0054");
    runtime.register_function(0x088DE238u, &recomp_unit_0054, "recomp_unit_0054");
    runtime.register_function(0x088DE24Cu, &recomp_unit_0054, "recomp_unit_0054");
    runtime.register_function(0x088DE254u, &recomp_unit_0054, "recomp_unit_0054");
    runtime.register_function(0x088DE264u, &recomp_unit_0054, "recomp_unit_0054");
    runtime.register_function(0x088DE288u, &recomp_unit_0054, "recomp_unit_0054");
    runtime.register_function(0x088DE290u, &recomp_unit_0054, "recomp_unit_0054");
    runtime.register_function(0x088DE298u, &recomp_unit_0054, "recomp_unit_0054");
    runtime.register_function(0x088DE2BCu, &recomp_unit_0054, "recomp_unit_0054");
    runtime.register_function(0x088DE2D0u, &recomp_unit_0054, "recomp_unit_0054");
    runtime.register_function(0x088DE2E8u, &recomp_unit_0054, "recomp_unit_0054");
    runtime.register_function(0x088DE2F0u, &recomp_unit_0054, "recomp_unit_0054");
    runtime.register_function(0x088DE308u, &recomp_unit_0054, "recomp_unit_0054");
    runtime.register_function(0x088DE320u, &recomp_unit_0054, "recomp_unit_0054");
    runtime.register_function(0x088DE334u, &recomp_unit_0054, "recomp_unit_0054");
    runtime.register_function(0x088DE348u, &recomp_unit_0054, "recomp_unit_0054");
    runtime.register_function(0x088DE360u, &recomp_unit_0054, "recomp_unit_0054");
    runtime.register_function(0x088DE374u, &recomp_unit_0054, "recomp_unit_0054");
    runtime.register_function(0x088DE37Cu, &recomp_unit_0054, "recomp_unit_0054");
    runtime.register_function(0x088DE394u, &recomp_unit_0054, "recomp_unit_0054");
    runtime.register_function(0x088DE3ACu, &recomp_unit_0054, "recomp_unit_0054");
    runtime.register_function(0x088DE3C0u, &recomp_unit_0054, "recomp_unit_0054");
    runtime.register_function(0x088DE3E8u, &recomp_unit_0054, "recomp_unit_0054");
    runtime.register_function(0x088DE400u, &recomp_unit_0054, "recomp_unit_0054");
    runtime.register_function(0x088DE418u, &recomp_unit_0054, "recomp_unit_0054");
    runtime.register_function(0x088DE428u, &recomp_unit_0054, "recomp_unit_0054");
    runtime.register_function(0x088DE438u, &recomp_unit_0054, "recomp_unit_0054");
    runtime.register_function(0x088DE494u, &recomp_unit_0054, "recomp_unit_0054");
    runtime.register_function(0x088DE4A4u, &recomp_unit_0054, "recomp_unit_0054");
    runtime.register_function(0x088DE4B4u, &recomp_unit_0054, "recomp_unit_0054");
    runtime.register_function(0x088DE4C4u, &recomp_unit_0054, "recomp_unit_0054");
    runtime.register_function(0x088DE4D4u, &recomp_unit_0054, "recomp_unit_0054");
    runtime.register_function(0x088DE4F8u, &recomp_unit_0054, "recomp_unit_0054");
    runtime.register_function(0x088DE514u, &recomp_unit_0054, "recomp_unit_0054");
    runtime.register_function(0x088DE524u, &recomp_unit_0054, "recomp_unit_0054");
    runtime.register_function(0x088DE534u, &recomp_unit_0054, "recomp_unit_0054");
    runtime.register_function(0x088DE55Cu, &recomp_unit_0054, "recomp_unit_0054");
    runtime.register_function(0x088DE574u, &recomp_unit_0054, "recomp_unit_0054");
    runtime.register_function(0x088DE590u, &recomp_unit_0054, "recomp_unit_0054");
    runtime.register_function(0x088DE598u, &recomp_unit_0054, "recomp_unit_0054");
    runtime.register_function(0x088DE5A4u, &recomp_unit_0054, "recomp_unit_0054");
    runtime.register_function(0x088DE5B8u, &recomp_unit_0054, "recomp_unit_0054");
    runtime.register_function(0x088DE5CCu, &recomp_unit_0054, "recomp_unit_0054");
    runtime.register_function(0x088DE5D4u, &recomp_unit_0054, "recomp_unit_0054");
    runtime.register_function(0x088DE5E4u, &recomp_unit_0054, "recomp_unit_0054");
    runtime.register_function(0x088DE608u, &recomp_unit_0054, "recomp_unit_0054");
    runtime.register_function(0x088DE610u, &recomp_unit_0054, "recomp_unit_0054");
    runtime.register_function(0x088DE618u, &recomp_unit_0054, "recomp_unit_0054");
    runtime.register_function(0x088DE63Cu, &recomp_unit_0054, "recomp_unit_0054");
    runtime.register_function(0x088DE650u, &recomp_unit_0054, "recomp_unit_0054");
    runtime.register_function(0x088DE668u, &recomp_unit_0054, "recomp_unit_0054");
    runtime.register_function(0x088DE674u, &recomp_unit_0054, "recomp_unit_0054");
    runtime.register_function(0x088DE67Cu, &recomp_unit_0054, "recomp_unit_0054");
    runtime.register_function(0x088DE690u, &recomp_unit_0054, "recomp_unit_0054");
    runtime.register_function(0x088DE69Cu, &recomp_unit_0054, "recomp_unit_0054");
    runtime.register_function(0x088DE6B0u, &recomp_unit_0054, "recomp_unit_0054");
    runtime.register_function(0x088DE6BCu, &recomp_unit_0054, "recomp_unit_0054");
    runtime.register_function(0x088DE6CCu, &recomp_unit_0054, "recomp_unit_0054");
    runtime.register_function(0x088DE6D0u, &recomp_unit_0054, "recomp_unit_0054");
    runtime.register_function(0x088DE6E4u, &recomp_unit_0054, "recomp_unit_0054");
    runtime.register_function(0x088DE6FCu, &recomp_unit_0054, "recomp_unit_0054");
    runtime.register_function(0x088DE714u, &recomp_unit_0054, "recomp_unit_0054");
    runtime.register_function(0x088DE734u, &recomp_unit_0054, "recomp_unit_0054");
    runtime.register_function(0x088DE740u, &recomp_unit_0054, "recomp_unit_0054");
    runtime.register_function(0x088DE748u, &recomp_unit_0054, "recomp_unit_0054");
    runtime.register_function(0x088DE758u, &recomp_unit_0054, "recomp_unit_0054");
    runtime.register_function(0x088DE760u, &recomp_unit_0054, "recomp_unit_0054");
    runtime.register_function(0x088DE770u, &recomp_unit_0054, "recomp_unit_0054");
    runtime.register_function(0x088DE778u, &recomp_unit_0054, "recomp_unit_0054");
    runtime.register_function(0x088DE788u, &recomp_unit_0054, "recomp_unit_0054");
    runtime.register_function(0x088DE7A0u, &recomp_unit_0054, "recomp_unit_0054");
    runtime.register_function(0x088DE7B8u, &recomp_unit_0054, "recomp_unit_0054");
    runtime.register_function(0x088DE7CCu, &recomp_unit_0054, "recomp_unit_0054");
    runtime.register_function(0x088DE7D4u, &recomp_unit_0054, "recomp_unit_0054");
    runtime.register_function(0x088DE7ECu, &recomp_unit_0054, "recomp_unit_0054");
    runtime.register_function(0x088DE804u, &recomp_unit_0054, "recomp_unit_0054");
    runtime.register_function(0x088DE80Cu, &recomp_unit_0054, "recomp_unit_0054");
    runtime.register_function(0x088DE830u, &recomp_unit_0054, "recomp_unit_0054");
    runtime.register_function(0x088DE848u, &recomp_unit_0054, "recomp_unit_0054");
    runtime.register_function(0x088DE860u, &recomp_unit_0054, "recomp_unit_0054");
    runtime.register_function(0x088DE870u, &recomp_unit_0054, "recomp_unit_0054");
    runtime.register_function(0x088DE8CCu, &recomp_unit_0054, "recomp_unit_0054");
    runtime.register_function(0x088DE8DCu, &recomp_unit_0054, "recomp_unit_0054");
    runtime.register_function(0x088DE8ECu, &recomp_unit_0054, "recomp_unit_0054");
    runtime.register_function(0x088DE8FCu, &recomp_unit_0054, "recomp_unit_0054");
    runtime.register_function(0x088DE918u, &recomp_unit_0054, "recomp_unit_0054");
    runtime.register_function(0x088DE920u, &recomp_unit_0054, "recomp_unit_0054");
    runtime.register_function(0x088DE92Cu, &recomp_unit_0054, "recomp_unit_0054");
    runtime.register_function(0x088DE940u, &recomp_unit_0054, "recomp_unit_0054");
    runtime.register_function(0x088DE954u, &recomp_unit_0054, "recomp_unit_0054");
    runtime.register_function(0x088DE95Cu, &recomp_unit_0054, "recomp_unit_0054");
    runtime.register_function(0x088DE96Cu, &recomp_unit_0054, "recomp_unit_0054");
    runtime.register_function(0x088DE990u, &recomp_unit_0054, "recomp_unit_0054");
    runtime.register_function(0x088DE998u, &recomp_unit_0054, "recomp_unit_0054");
    runtime.register_function(0x088DE9A0u, &recomp_unit_0054, "recomp_unit_0054");
    runtime.register_function(0x088DE9C4u, &recomp_unit_0054, "recomp_unit_0054");
    runtime.register_function(0x088DE9D8u, &recomp_unit_0054, "recomp_unit_0054");
    runtime.register_function(0x088DE9F0u, &recomp_unit_0054, "recomp_unit_0054");
    runtime.register_function(0x088DE9F8u, &recomp_unit_0054, "recomp_unit_0054");
    runtime.register_function(0x088DEA10u, &recomp_unit_0054, "recomp_unit_0054");
    runtime.register_function(0x088DEA28u, &recomp_unit_0054, "recomp_unit_0054");
    runtime.register_function(0x088DEA3Cu, &recomp_unit_0054, "recomp_unit_0054");
    runtime.register_function(0x088DEA44u, &recomp_unit_0054, "recomp_unit_0054");
    runtime.register_function(0x088DEA5Cu, &recomp_unit_0054, "recomp_unit_0054");
    runtime.register_function(0x088DEA74u, &recomp_unit_0054, "recomp_unit_0054");
    runtime.register_function(0x088DEA88u, &recomp_unit_0054, "recomp_unit_0054");
    runtime.register_function(0x088DEAB0u, &recomp_unit_0054, "recomp_unit_0054");
    runtime.register_function(0x088DEAC8u, &recomp_unit_0054, "recomp_unit_0054");
    runtime.register_function(0x088DEAE0u, &recomp_unit_0054, "recomp_unit_0054");
    runtime.register_function(0x088DEAF0u, &recomp_unit_0054, "recomp_unit_0054");
    runtime.register_function(0x088DEB00u, &recomp_unit_0054, "recomp_unit_0054");
    runtime.register_function(0x088DEB5Cu, &recomp_unit_0054, "recomp_unit_0054");
    runtime.register_function(0x088DEB6Cu, &recomp_unit_0054, "recomp_unit_0054");
    runtime.register_function(0x088DEB7Cu, &recomp_unit_0054, "recomp_unit_0054");
    runtime.register_function(0x088DEB8Cu, &recomp_unit_0054, "recomp_unit_0054");
    runtime.register_function(0x088DEB9Cu, &recomp_unit_0054, "recomp_unit_0054");
    runtime.register_function(0x088DEBC0u, &recomp_unit_0054, "recomp_unit_0054");
    runtime.register_function(0x088DEBDCu, &recomp_unit_0054, "recomp_unit_0054");
    runtime.register_function(0x088DEBECu, &recomp_unit_0054, "recomp_unit_0054");
    runtime.register_function(0x088DEBFCu, &recomp_unit_0054, "recomp_unit_0054");
    runtime.register_function(0x088DEC24u, &recomp_unit_0054, "recomp_unit_0054");
    runtime.register_function(0x088DEC3Cu, &recomp_unit_0054, "recomp_unit_0054");
    runtime.register_function(0x088DEC58u, &recomp_unit_0054, "recomp_unit_0054");
    runtime.register_function(0x088DEC60u, &recomp_unit_0054, "recomp_unit_0054");
    runtime.register_function(0x088DEC6Cu, &recomp_unit_0054, "recomp_unit_0054");
    runtime.register_function(0x088DEC80u, &recomp_unit_0054, "recomp_unit_0054");
    runtime.register_function(0x088DEC94u, &recomp_unit_0054, "recomp_unit_0054");
    runtime.register_function(0x088DEC9Cu, &recomp_unit_0054, "recomp_unit_0054");
    runtime.register_function(0x088DECACu, &recomp_unit_0054, "recomp_unit_0054");
    runtime.register_function(0x088DECD0u, &recomp_unit_0054, "recomp_unit_0054");
    runtime.register_function(0x088DECD8u, &recomp_unit_0054, "recomp_unit_0054");
    runtime.register_function(0x088DECE0u, &recomp_unit_0054, "recomp_unit_0054");
    runtime.register_function(0x088DED04u, &recomp_unit_0054, "recomp_unit_0054");
    runtime.register_function(0x088DED18u, &recomp_unit_0054, "recomp_unit_0054");
    runtime.register_function(0x088DED30u, &recomp_unit_0054, "recomp_unit_0054");
    runtime.register_function(0x088DED3Cu, &recomp_unit_0054, "recomp_unit_0054");
    runtime.register_function(0x088DED44u, &recomp_unit_0054, "recomp_unit_0054");
    runtime.register_function(0x088DED58u, &recomp_unit_0054, "recomp_unit_0054");
    runtime.register_function(0x088DED64u, &recomp_unit_0054, "recomp_unit_0054");
    runtime.register_function(0x088DED78u, &recomp_unit_0054, "recomp_unit_0054");
    runtime.register_function(0x088DED84u, &recomp_unit_0054, "recomp_unit_0054");
    runtime.register_function(0x088DED94u, &recomp_unit_0054, "recomp_unit_0054");
    runtime.register_function(0x088DED98u, &recomp_unit_0054, "recomp_unit_0054");
    runtime.register_function(0x088DEDACu, &recomp_unit_0054, "recomp_unit_0054");
    runtime.register_function(0x088DEDC4u, &recomp_unit_0054, "recomp_unit_0054");
    runtime.register_function(0x088DEDDCu, &recomp_unit_0054, "recomp_unit_0054");
    runtime.register_function(0x088DEDFCu, &recomp_unit_0054, "recomp_unit_0054");
    runtime.register_function(0x088DEE08u, &recomp_unit_0054, "recomp_unit_0054");
    runtime.register_function(0x088DEE10u, &recomp_unit_0054, "recomp_unit_0054");
    runtime.register_function(0x088DEE20u, &recomp_unit_0054, "recomp_unit_0054");
    runtime.register_function(0x088DEE28u, &recomp_unit_0054, "recomp_unit_0054");
    runtime.register_function(0x088DEE38u, &recomp_unit_0054, "recomp_unit_0054");
    runtime.register_function(0x088DEE40u, &recomp_unit_0054, "recomp_unit_0054");
    runtime.register_function(0x088DEE50u, &recomp_unit_0054, "recomp_unit_0054");
    runtime.register_function(0x088DEE68u, &recomp_unit_0054, "recomp_unit_0054");
    runtime.register_function(0x088DEE80u, &recomp_unit_0054, "recomp_unit_0054");
    runtime.register_function(0x088DEE94u, &recomp_unit_0054, "recomp_unit_0054");
    runtime.register_function(0x088DEE9Cu, &recomp_unit_0054, "recomp_unit_0054");
    runtime.register_function(0x088DEEB4u, &recomp_unit_0054, "recomp_unit_0054");
    runtime.register_function(0x088DEECCu, &recomp_unit_0054, "recomp_unit_0054");
    runtime.register_function(0x088DEED4u, &recomp_unit_0054, "recomp_unit_0054");
    runtime.register_function(0x088DEEF8u, &recomp_unit_0054, "recomp_unit_0054");
    runtime.register_function(0x088DEF10u, &recomp_unit_0054, "recomp_unit_0054");
    runtime.register_function(0x088DEF28u, &recomp_unit_0054, "recomp_unit_0054");
    runtime.register_function(0x088DEF38u, &recomp_unit_0054, "recomp_unit_0054");
    runtime.register_function(0x088DEF94u, &recomp_unit_0054, "recomp_unit_0054");
    runtime.register_function(0x088DEFA4u, &recomp_unit_0054, "recomp_unit_0054");
    runtime.register_function(0x088DEFB4u, &recomp_unit_0054, "recomp_unit_0054");
    runtime.register_function(0x088DEFC4u, &recomp_unit_0054, "recomp_unit_0054");
    runtime.register_function(0x088DEFE0u, &recomp_unit_0054, "recomp_unit_0054");
    runtime.register_function(0x088DEFE8u, &recomp_unit_0054, "recomp_unit_0054");
    runtime.register_function(0x088DEFF4u, &recomp_unit_0054, "recomp_unit_0054");
    runtime.register_function(0x088DF008u, &recomp_unit_0054, "recomp_unit_0054");
    runtime.register_function(0x088DF01Cu, &recomp_unit_0054, "recomp_unit_0054");
    runtime.register_function(0x088DF024u, &recomp_unit_0054, "recomp_unit_0054");
    runtime.register_function(0x088DF034u, &recomp_unit_0054, "recomp_unit_0054");
    runtime.register_function(0x088DF058u, &recomp_unit_0054, "recomp_unit_0054");
    runtime.register_function(0x088DF060u, &recomp_unit_0054, "recomp_unit_0054");
    runtime.register_function(0x088DF068u, &recomp_unit_0054, "recomp_unit_0054");
    runtime.register_function(0x088DF08Cu, &recomp_unit_0054, "recomp_unit_0054");
    runtime.register_function(0x088DF0A0u, &recomp_unit_0054, "recomp_unit_0054");
    runtime.register_function(0x088DF0B8u, &recomp_unit_0054, "recomp_unit_0054");
    runtime.register_function(0x088DF0C0u, &recomp_unit_0054, "recomp_unit_0054");
    runtime.register_function(0x088DF0D8u, &recomp_unit_0054, "recomp_unit_0054");
    runtime.register_function(0x088DF0F0u, &recomp_unit_0054, "recomp_unit_0054");
    runtime.register_function(0x088DF104u, &recomp_unit_0054, "recomp_unit_0054");
    runtime.register_function(0x088DF118u, &recomp_unit_0054, "recomp_unit_0054");
    runtime.register_function(0x088DF130u, &recomp_unit_0054, "recomp_unit_0054");
    runtime.register_function(0x088DF144u, &recomp_unit_0054, "recomp_unit_0054");
    runtime.register_function(0x088DF14Cu, &recomp_unit_0054, "recomp_unit_0054");
    runtime.register_function(0x088DF164u, &recomp_unit_0054, "recomp_unit_0054");
    runtime.register_function(0x088DF17Cu, &recomp_unit_0054, "recomp_unit_0054");
    runtime.register_function(0x088DF190u, &recomp_unit_0054, "recomp_unit_0054");
    runtime.register_function(0x088DF1B8u, &recomp_unit_0054, "recomp_unit_0054");
    runtime.register_function(0x088DF1D0u, &recomp_unit_0054, "recomp_unit_0054");
    runtime.register_function(0x088DF1E8u, &recomp_unit_0054, "recomp_unit_0054");
    runtime.register_function(0x088DF1F8u, &recomp_unit_0054, "recomp_unit_0054");
    runtime.register_function(0x088DF208u, &recomp_unit_0054, "recomp_unit_0054");
    runtime.register_function(0x088DF264u, &recomp_unit_0054, "recomp_unit_0054");
    runtime.register_function(0x088DF274u, &recomp_unit_0054, "recomp_unit_0054");
    runtime.register_function(0x088DF284u, &recomp_unit_0054, "recomp_unit_0054");
    runtime.register_function(0x088DF294u, &recomp_unit_0054, "recomp_unit_0054");
    runtime.register_function(0x088DF2A4u, &recomp_unit_0054, "recomp_unit_0054");
    runtime.register_function(0x088DF2C8u, &recomp_unit_0054, "recomp_unit_0054");
    runtime.register_function(0x088DF2E4u, &recomp_unit_0054, "recomp_unit_0054");
    runtime.register_function(0x088DF2F4u, &recomp_unit_0054, "recomp_unit_0054");
    runtime.register_function(0x088DF304u, &recomp_unit_0054, "recomp_unit_0054");
    runtime.register_function(0x088DF32Cu, &recomp_unit_0054, "recomp_unit_0054");
    runtime.register_function(0x088DF344u, &recomp_unit_0054, "recomp_unit_0054");
    runtime.register_function(0x088DF360u, &recomp_unit_0054, "recomp_unit_0054");
    runtime.register_function(0x088DF368u, &recomp_unit_0054, "recomp_unit_0054");
    runtime.register_function(0x088DF374u, &recomp_unit_0054, "recomp_unit_0054");
    runtime.register_function(0x088DF388u, &recomp_unit_0054, "recomp_unit_0054");
    runtime.register_function(0x088DF39Cu, &recomp_unit_0054, "recomp_unit_0054");
    runtime.register_function(0x088DF3A4u, &recomp_unit_0054, "recomp_unit_0054");
    runtime.register_function(0x088DF3B4u, &recomp_unit_0054, "recomp_unit_0054");
    runtime.register_function(0x088DF3D8u, &recomp_unit_0054, "recomp_unit_0054");
    runtime.register_function(0x088DF3E0u, &recomp_unit_0054, "recomp_unit_0054");
    runtime.register_function(0x088DF3E8u, &recomp_unit_0054, "recomp_unit_0054");
    runtime.register_function(0x088DF40Cu, &recomp_unit_0054, "recomp_unit_0054");
    runtime.register_function(0x088DF420u, &recomp_unit_0054, "recomp_unit_0054");
    runtime.register_function(0x088DF438u, &recomp_unit_0054, "recomp_unit_0054");
    runtime.register_function(0x088DF444u, &recomp_unit_0054, "recomp_unit_0054");
    runtime.register_function(0x088DF44Cu, &recomp_unit_0054, "recomp_unit_0054");
    runtime.register_function(0x088DF460u, &recomp_unit_0054, "recomp_unit_0054");
    runtime.register_function(0x088DF46Cu, &recomp_unit_0054, "recomp_unit_0054");
    runtime.register_function(0x088DF480u, &recomp_unit_0054, "recomp_unit_0054");
    runtime.register_function(0x088DF48Cu, &recomp_unit_0054, "recomp_unit_0054");
    runtime.register_function(0x088DF49Cu, &recomp_unit_0054, "recomp_unit_0054");
    runtime.register_function(0x088DF4A0u, &recomp_unit_0054, "recomp_unit_0054");
    runtime.register_function(0x088DF4B4u, &recomp_unit_0054, "recomp_unit_0054");
    runtime.register_function(0x088DF4CCu, &recomp_unit_0054, "recomp_unit_0054");
    runtime.register_function(0x088DF4E4u, &recomp_unit_0054, "recomp_unit_0054");
    runtime.register_function(0x088DF504u, &recomp_unit_0054, "recomp_unit_0054");
    runtime.register_function(0x088DF510u, &recomp_unit_0054, "recomp_unit_0054");
    runtime.register_function(0x088DF518u, &recomp_unit_0054, "recomp_unit_0054");
    runtime.register_function(0x088DF528u, &recomp_unit_0054, "recomp_unit_0054");
    runtime.register_function(0x088DF530u, &recomp_unit_0054, "recomp_unit_0054");
    runtime.register_function(0x088DF540u, &recomp_unit_0054, "recomp_unit_0054");
    runtime.register_function(0x088DF548u, &recomp_unit_0054, "recomp_unit_0054");
    runtime.register_function(0x088DF558u, &recomp_unit_0054, "recomp_unit_0054");
    runtime.register_function(0x088DF570u, &recomp_unit_0054, "recomp_unit_0054");
    runtime.register_function(0x088DF588u, &recomp_unit_0054, "recomp_unit_0054");
    runtime.register_function(0x088DF59Cu, &recomp_unit_0054, "recomp_unit_0054");
    runtime.register_function(0x088DF5A4u, &recomp_unit_0054, "recomp_unit_0054");
    runtime.register_function(0x088DF5BCu, &recomp_unit_0054, "recomp_unit_0054");
    runtime.register_function(0x088DF5D4u, &recomp_unit_0054, "recomp_unit_0054");
    runtime.register_function(0x088DF5DCu, &recomp_unit_0054, "recomp_unit_0054");
    runtime.register_function(0x088DF600u, &recomp_unit_0054, "recomp_unit_0054");
    runtime.register_function(0x088DF618u, &recomp_unit_0054, "recomp_unit_0054");
    runtime.register_function(0x088DF630u, &recomp_unit_0054, "recomp_unit_0054");
    runtime.register_function(0x088DF640u, &recomp_unit_0054, "recomp_unit_0054");
    runtime.register_function(0x088DF69Cu, &recomp_unit_0054, "recomp_unit_0054");
    runtime.register_function(0x088DF6ACu, &recomp_unit_0054, "recomp_unit_0054");
    runtime.register_function(0x088DF6BCu, &recomp_unit_0054, "recomp_unit_0054");
    runtime.register_function(0x088DF6CCu, &recomp_unit_0054, "recomp_unit_0054");
    runtime.register_function(0x088DF6E8u, &recomp_unit_0054, "recomp_unit_0054");
    runtime.register_function(0x088DF6F0u, &recomp_unit_0054, "recomp_unit_0054");
    runtime.register_function(0x088DF6FCu, &recomp_unit_0054, "recomp_unit_0054");
    runtime.register_function(0x088DF710u, &recomp_unit_0054, "recomp_unit_0054");
    runtime.register_function(0x088DF724u, &recomp_unit_0054, "recomp_unit_0054");
    runtime.register_function(0x088DF72Cu, &recomp_unit_0054, "recomp_unit_0054");
    runtime.register_function(0x088DF73Cu, &recomp_unit_0054, "recomp_unit_0054");
    runtime.register_function(0x088DF760u, &recomp_unit_0054, "recomp_unit_0054");
    runtime.register_function(0x088DF768u, &recomp_unit_0054, "recomp_unit_0054");
    runtime.register_function(0x088DF770u, &recomp_unit_0054, "recomp_unit_0054");
    runtime.register_function(0x088DF794u, &recomp_unit_0054, "recomp_unit_0054");
    runtime.register_function(0x088DF7A8u, &recomp_unit_0054, "recomp_unit_0054");
    runtime.register_function(0x088DF7C0u, &recomp_unit_0054, "recomp_unit_0054");
    runtime.register_function(0x088DF7C8u, &recomp_unit_0054, "recomp_unit_0054");
    runtime.register_function(0x088DF7E0u, &recomp_unit_0054, "recomp_unit_0054");
    runtime.register_function(0x088DF7F8u, &recomp_unit_0054, "recomp_unit_0054");
    runtime.register_function(0x088DF80Cu, &recomp_unit_0054, "recomp_unit_0054");
    runtime.register_function(0x088DF814u, &recomp_unit_0054, "recomp_unit_0054");
    runtime.register_function(0x088DF82Cu, &recomp_unit_0054, "recomp_unit_0054");
    runtime.register_function(0x088DF844u, &recomp_unit_0054, "recomp_unit_0054");
    runtime.register_function(0x088DF858u, &recomp_unit_0054, "recomp_unit_0054");
    runtime.register_function(0x088DF87Cu, &recomp_unit_0054, "recomp_unit_0054");
    runtime.register_function(0x088DF894u, &recomp_unit_0054, "recomp_unit_0054");
    runtime.register_function(0x088DF8ACu, &recomp_unit_0054, "recomp_unit_0054");
    runtime.register_function(0x088DF8BCu, &recomp_unit_0054, "recomp_unit_0054");
    runtime.register_function(0x088DF8CCu, &recomp_unit_0054, "recomp_unit_0054");
    runtime.register_function(0x088DF920u, &recomp_unit_0054, "recomp_unit_0054");
    runtime.register_function(0x088DF930u, &recomp_unit_0054, "recomp_unit_0054");
    runtime.register_function(0x088DF940u, &recomp_unit_0054, "recomp_unit_0054");
    runtime.register_function(0x088DF950u, &recomp_unit_0054, "recomp_unit_0054");
    runtime.register_function(0x088DF96Cu, &recomp_unit_0054, "recomp_unit_0054");
    runtime.register_function(0x088DF974u, &recomp_unit_0054, "recomp_unit_0054");
    runtime.register_function(0x088DF980u, &recomp_unit_0054, "recomp_unit_0054");
    runtime.register_function(0x088DF994u, &recomp_unit_0054, "recomp_unit_0054");
    runtime.register_function(0x088DF9A8u, &recomp_unit_0054, "recomp_unit_0054");
    runtime.register_function(0x088DF9B0u, &recomp_unit_0054, "recomp_unit_0054");
    runtime.register_function(0x088DF9C0u, &recomp_unit_0054, "recomp_unit_0054");
    runtime.register_function(0x088DF9E4u, &recomp_unit_0054, "recomp_unit_0054");
    runtime.register_function(0x088DF9ECu, &recomp_unit_0054, "recomp_unit_0054");
    runtime.register_function(0x088DF9F4u, &recomp_unit_0054, "recomp_unit_0054");
    runtime.register_function(0x088DFA18u, &recomp_unit_0054, "recomp_unit_0054");
    runtime.register_function(0x088DFA2Cu, &recomp_unit_0054, "recomp_unit_0054");
    runtime.register_function(0x088DFA44u, &recomp_unit_0054, "recomp_unit_0054");
    runtime.register_function(0x088DFA4Cu, &recomp_unit_0054, "recomp_unit_0054");
    runtime.register_function(0x088DFA58u, &recomp_unit_0054, "recomp_unit_0054");
    runtime.register_function(0x088DFA64u, &recomp_unit_0054, "recomp_unit_0054");
    runtime.register_function(0x088DFA6Cu, &recomp_unit_0054, "recomp_unit_0054");
    runtime.register_function(0x088DFA84u, &recomp_unit_0054, "recomp_unit_0054");
    runtime.register_function(0x088DFA9Cu, &recomp_unit_0054, "recomp_unit_0054");
    runtime.register_function(0x088DFAB0u, &recomp_unit_0054, "recomp_unit_0054");
    runtime.register_function(0x088DFAB8u, &recomp_unit_0054, "recomp_unit_0054");
    runtime.register_function(0x088DFAD0u, &recomp_unit_0054, "recomp_unit_0054");
    runtime.register_function(0x088DFAE8u, &recomp_unit_0054, "recomp_unit_0054");
    runtime.register_function(0x088DFAF8u, &recomp_unit_0054, "recomp_unit_0054");
    runtime.register_function(0x088DFB58u, &recomp_unit_0054, "recomp_unit_0054");
    runtime.register_function(0x088DFB68u, &recomp_unit_0054, "recomp_unit_0054");
    runtime.register_function(0x088DFB78u, &recomp_unit_0054, "recomp_unit_0054");
    runtime.register_function(0x088DFB88u, &recomp_unit_0054, "recomp_unit_0054");
    runtime.register_function(0x088DFBB0u, &recomp_unit_0054, "recomp_unit_0054");
    runtime.register_function(0x088DFBCCu, &recomp_unit_0054, "recomp_unit_0054");
    runtime.register_function(0x088DFBDCu, &recomp_unit_0054, "recomp_unit_0054");
    runtime.register_function(0x088DFBF4u, &recomp_unit_0054, "recomp_unit_0054");
    runtime.register_function(0x088DFC04u, &recomp_unit_0054, "recomp_unit_0054");
    runtime.register_function(0x088DFC14u, &recomp_unit_0054, "recomp_unit_0054");
    runtime.register_function(0x088DFC24u, &recomp_unit_0054, "recomp_unit_0054");
    runtime.register_function(0x088DFC34u, &recomp_unit_0054, "recomp_unit_0054");
    runtime.register_function(0x088DFC44u, &recomp_unit_0054, "recomp_unit_0054");
    runtime.register_function(0x088DFC54u, &recomp_unit_0054, "recomp_unit_0054");
    runtime.register_function(0x088DFC60u, &recomp_unit_0054, "recomp_unit_0054");
    runtime.register_function(0x088DFC74u, &recomp_unit_0054, "recomp_unit_0054");
    runtime.register_function(0x088DFC84u, &recomp_unit_0054, "recomp_unit_0054");
    runtime.register_function(0x088DFC94u, &recomp_unit_0054, "recomp_unit_0054");
    runtime.register_function(0x088DFCA8u, &recomp_unit_0054, "recomp_unit_0054");
    runtime.register_function(0x088DFCB8u, &recomp_unit_0054, "recomp_unit_0054");
    runtime.register_function(0x088DFCCCu, &recomp_unit_0054, "recomp_unit_0054");
    runtime.register_function(0x088DFCDCu, &recomp_unit_0054, "recomp_unit_0054");
    runtime.register_function(0x088DFCFCu, &recomp_unit_0054, "recomp_unit_0054");
    runtime.register_function(0x088DFD18u, &recomp_unit_0054, "recomp_unit_0054");
    runtime.register_function(0x088DFD38u, &recomp_unit_0054, "recomp_unit_0054");
    runtime.register_function(0x088DFD54u, &recomp_unit_0054, "recomp_unit_0054");
    runtime.register_function(0x088DFD60u, &recomp_unit_0054, "recomp_unit_0054");
    runtime.register_function(0x088DFD74u, &recomp_unit_0054, "recomp_unit_0054");
    runtime.register_function(0x088DFD84u, &recomp_unit_0054, "recomp_unit_0054");
    runtime.register_function(0x088DFD94u, &recomp_unit_0054, "recomp_unit_0054");
    runtime.register_function(0x088DFDA4u, &recomp_unit_0054, "recomp_unit_0054");
    runtime.register_function(0x088DFDB4u, &recomp_unit_0054, "recomp_unit_0054");
    runtime.register_function(0x088DFDC0u, &recomp_unit_0054, "recomp_unit_0054");
    runtime.register_function(0x088DFDF0u, &recomp_unit_0054, "recomp_unit_0054");
    runtime.register_function(0x088DFE20u, &recomp_unit_0054, "recomp_unit_0054");
    runtime.register_function(0x088DFE30u, &recomp_unit_0054, "recomp_unit_0054");
    runtime.register_function(0x088DFE40u, &recomp_unit_0054, "recomp_unit_0054");
    runtime.register_function(0x088DFE58u, &recomp_unit_0054, "recomp_unit_0054");
    runtime.register_function(0x088DFE7Cu, &recomp_unit_0054, "recomp_unit_0054");
    runtime.register_function(0x088DFE84u, &recomp_unit_0054, "recomp_unit_0054");
    runtime.register_function(0x088DFE9Cu, &recomp_unit_0054, "recomp_unit_0054");
    runtime.register_function(0x088DFEB4u, &recomp_unit_0054, "recomp_unit_0054");
    runtime.register_function(0x088DFED8u, &recomp_unit_0054, "recomp_unit_0054");
    runtime.register_function(0x088DFEE0u, &recomp_unit_0054, "recomp_unit_0054");
    runtime.register_function(0x088DFEF8u, &recomp_unit_0054, "recomp_unit_0054");
    runtime.register_function(0x088DFF10u, &recomp_unit_0054, "recomp_unit_0054");
    runtime.register_function(0x088DFF34u, &recomp_unit_0054, "recomp_unit_0054");
    runtime.register_function(0x088DFF3Cu, &recomp_unit_0054, "recomp_unit_0054");
    runtime.register_function(0x088DFF54u, &recomp_unit_0054, "recomp_unit_0054");
    runtime.register_function(0x088DFF6Cu, &recomp_unit_0054, "recomp_unit_0054");
    runtime.register_function(0x088DFF80u, &recomp_unit_0054, "recomp_unit_0054");
    runtime.register_function(0x088DFF88u, &recomp_unit_0054, "recomp_unit_0054");
    runtime.register_function(0x088DFFA0u, &recomp_unit_0054, "recomp_unit_0054");
    runtime.register_function(0x088DFFB8u, &recomp_unit_0054, "recomp_unit_0054");
    runtime.register_function(0x088DFFD0u, &recomp_unit_0054, "recomp_unit_0054");
    runtime.register_function(0x088DFFF4u, &recomp_unit_0054, "recomp_unit_0054");
    runtime.register_function(0x088DFFFCu, &recomp_unit_0054, "recomp_unit_0054");
}
} // namespace psprecomp
