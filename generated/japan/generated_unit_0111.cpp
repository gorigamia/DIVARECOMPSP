#include "psprecomp/runtime.hpp"
#include "generated_units.hpp"
#include <bit>
#include <cmath>
#include <cstdint>
#include <limits>

namespace psprecomp {
static const std::uint16_t kEntryIds_recomp_unit_0111[3921] = {
    1, 0, 0, 2, 0, 0, 0, 0, 0, 3, 0, 0, 0, 0, 0, 0, 4, 0, 0, 0, 5, 0, 0, 0, 0, 6, 0, 0, 7, 0, 0, 0,
    8, 0, 0, 0, 0, 0, 9, 0, 0, 0, 0, 0, 0, 10, 0, 0, 0, 11, 0, 0, 0, 0, 12, 0, 0, 13, 0, 0, 0, 14, 0, 0,
    0, 0, 0, 15, 0, 0, 0, 0, 0, 0, 16, 0, 0, 0, 17, 0, 0, 0, 0, 18, 0, 0, 19, 0, 0, 20, 0, 0, 0, 21, 0, 0,
    0, 0, 0, 22, 0, 0, 0, 0, 0, 0, 23, 0, 0, 0, 24, 0, 0, 0, 0, 25, 0, 0, 0, 26, 0, 0, 0, 27, 0, 0, 0, 0,
    0, 28, 0, 0, 0, 0, 0, 0, 29, 0, 0, 0, 30, 0, 0, 0, 0, 31, 0, 0, 32, 0, 0, 0, 33, 0, 0, 0, 0, 0, 34, 0,
    0, 0, 0, 0, 0, 35, 0, 0, 0, 36, 0, 0, 0, 0, 37, 0, 0, 38, 0, 0, 0, 39, 0, 0, 0, 0, 0, 40, 0, 0, 0, 0,
    0, 0, 41, 0, 0, 0, 42, 0, 0, 0, 0, 43, 0, 0, 44, 0, 0, 0, 0, 0, 0, 0, 0, 45, 0, 0, 0, 46, 0, 0, 0, 0,
    0, 47, 0, 0, 0, 0, 0, 0, 48, 0, 0, 0, 49, 0, 0, 0, 0, 50, 0, 0, 0, 51, 0, 0, 0, 52, 0, 0, 0, 0, 0, 53,
    0, 0, 0, 0, 0, 0, 54, 0, 0, 0, 55, 0, 0, 0, 0, 56, 0, 0, 57, 0, 0, 0, 58, 0, 0, 0, 0, 0, 59, 0, 0, 0,
    0, 0, 0, 60, 0, 0, 0, 61, 0, 0, 0, 0, 62, 0, 0, 63, 0, 0, 0, 64, 0, 0, 0, 0, 0, 65, 0, 0, 0, 0, 0, 0,
    66, 0, 0, 0, 67, 0, 0, 0, 0, 68, 0, 0, 69, 0, 0, 70, 0, 0, 0, 71, 0, 0, 0, 0, 0, 72, 0, 0, 0, 0, 0, 0,
    73, 0, 0, 0, 74, 0, 0, 0, 0, 75, 0, 0, 0, 76, 0, 0, 0, 77, 0, 0, 0, 0, 0, 78, 0, 0, 0, 0, 0, 0, 79, 0,
    0, 0, 80, 0, 0, 0, 0, 81, 0, 0, 82, 0, 0, 0, 83, 0, 0, 0, 0, 0, 84, 0, 0, 0, 0, 0, 0, 85, 0, 0, 0, 86,
    0, 0, 0, 0, 87, 0, 0, 88, 0, 0, 0, 89, 0, 0, 0, 0, 0, 90, 0, 0, 0, 0, 0, 0, 91, 0, 0, 0, 92, 0, 0, 0,
    0, 93, 0, 0, 94, 0, 0, 0, 0, 0, 0, 0, 95, 0, 0, 0, 96, 0, 0, 0, 0, 0, 97, 0, 0, 0, 0, 0, 0, 98, 0, 0,
    0, 99, 0, 0, 0, 0, 100, 0, 0, 0, 101, 0, 0, 0, 102, 0, 0, 0, 0, 0, 103, 0, 0, 0, 0, 0, 0, 104, 0, 0, 0, 105,
    0, 0, 0, 0, 106, 0, 0, 107, 0, 0, 0, 108, 0, 0, 0, 0, 0, 109, 0, 0, 0, 0, 0, 0, 110, 0, 0, 0, 111, 0, 0, 0,
    0, 112, 0, 0, 113, 0, 0, 0, 114, 0, 0, 0, 0, 0, 115, 0, 0, 0, 0, 0, 0, 116, 0, 0, 0, 117, 0, 0, 0, 0, 118, 0,
    0, 119, 0, 0, 120, 0, 0, 0, 121, 0, 0, 0, 0, 0, 122, 0, 0, 0, 0, 0, 0, 123, 0, 0, 0, 124, 0, 0, 0, 0, 125, 0,
    0, 0, 126, 0, 0, 0, 127, 0, 0, 0, 0, 0, 128, 0, 0, 0, 0, 0, 0, 129, 0, 0, 0, 130, 0, 0, 0, 0, 131, 0, 0, 132,
    0, 0, 0, 133, 0, 0, 0, 0, 0, 134, 0, 0, 0, 0, 0, 0, 135, 0, 0, 0, 136, 0, 0, 0, 0, 137, 0, 0, 138, 0, 0, 0,
    139, 0, 0, 0, 0, 0, 140, 0, 0, 0, 0, 0, 0, 141, 0, 0, 0, 142, 0, 0, 0, 0, 143, 0, 0, 144, 0, 0, 0, 0, 0, 0,
    0, 0, 145, 0, 0, 0, 146, 0, 0, 0, 0, 0, 147, 0, 0, 0, 0, 0, 0, 148, 0, 0, 0, 149, 0, 0, 0, 0, 150, 0, 0, 0,
    151, 0, 0, 0, 152, 0, 0, 0, 0, 0, 153, 0, 0, 0, 0, 0, 0, 154, 0, 0, 0, 155, 0, 0, 0, 0, 156, 0, 0, 157, 0, 0,
    0, 158, 0, 0, 0, 0, 0, 159, 0, 0, 0, 0, 0, 0, 160, 0, 0, 0, 161, 0, 0, 0, 0, 162, 0, 0, 163, 0, 0, 0, 164, 0,
    0, 0, 0, 0, 165, 0, 0, 0, 0, 0, 0, 166, 0, 0, 0, 167, 0, 0, 0, 0, 168, 0, 0, 169, 0, 0, 170, 0, 0, 0, 171, 0,
    0, 0, 0, 0, 172, 0, 0, 0, 0, 0, 0, 173, 0, 0, 0, 174, 0, 0, 0, 0, 175, 0, 0, 0, 176, 0, 0, 0, 177, 0, 0, 0,
    0, 0, 178, 0, 0, 0, 0, 0, 0, 179, 0, 0, 0, 180, 0, 0, 0, 0, 181, 0, 0, 182, 0, 0, 0, 183, 0, 0, 0, 0, 0, 184,
    0, 0, 0, 0, 0, 0, 185, 0, 0, 0, 186, 0, 0, 0, 0, 187, 0, 0, 188, 0, 0, 0, 189, 0, 0, 0, 0, 0, 190, 0, 0, 0,
    0, 0, 0, 191, 0, 0, 0, 192, 0, 0, 0, 0, 193, 0, 0, 194, 0, 0, 0, 0, 0, 0, 0, 195, 0, 0, 0, 196, 0, 0, 0, 0,
    0, 197, 0, 0, 0, 0, 0, 0, 198, 0, 0, 0, 199, 0, 0, 0, 0, 200, 0, 0, 0, 201, 0, 0, 0, 202, 0, 0, 0, 0, 0, 203,
    0, 0, 0, 0, 0, 0, 204, 0, 0, 0, 205, 0, 0, 0, 0, 206, 0, 0, 207, 0, 0, 0, 208, 0, 0, 0, 0, 0, 209, 0, 0, 0,
    0, 0, 0, 210, 0, 0, 0, 211, 0, 0, 0, 0, 212, 0, 0, 213, 0, 0, 0, 214, 0, 0, 0, 0, 0, 215, 0, 0, 0, 0, 0, 0,
    216, 0, 0, 0, 217, 0, 0, 0, 0, 218, 0, 0, 219, 0, 0, 220, 0, 0, 0, 221, 0, 0, 0, 0, 0, 222, 0, 0, 0, 0, 0, 0,
    223, 0, 0, 0, 224, 0, 0, 0, 0, 225, 0, 0, 0, 226, 0, 0, 0, 227, 0, 0, 0, 0, 0, 228, 0, 0, 0, 0, 0, 0, 229, 0,
    0, 0, 230, 0, 0, 0, 0, 231, 0, 0, 232, 0, 0, 0, 233, 0, 0, 0, 0, 0, 234, 0, 0, 0, 0, 0, 0, 235, 0, 0, 0, 236,
    0, 0, 0, 0, 237, 0, 0, 238, 0, 0, 0, 239, 0, 0, 0, 0, 0, 240, 0, 0, 0, 0, 0, 0, 241, 0, 0, 0, 242, 0, 0, 0,
    0, 243, 0, 0, 244, 0, 0, 0, 0, 0, 0, 245, 0, 0, 0, 246, 0, 0, 0, 0, 0, 247, 0, 0, 0, 0, 0, 0, 248, 0, 0, 0,
    249, 0, 0, 0, 0, 250, 0, 0, 0, 251, 0, 0, 0, 252, 0, 0, 0, 0, 0, 253, 0, 0, 0, 0, 0, 0, 254, 0, 0, 0, 255, 0,
    0, 0, 0, 256, 0, 0, 257, 0, 0, 0, 258, 0, 0, 0, 0, 0, 259, 0, 0, 0, 0, 0, 0, 260, 0, 0, 0, 261, 0, 0, 0, 0,
    262, 0, 0, 263, 0, 0, 0, 264, 0, 0, 0, 0, 0, 265, 0, 0, 0, 0, 0, 0, 266, 0, 0, 0, 267, 0, 0, 0, 0, 268, 0, 0,
    269, 0, 0, 270, 0, 0, 0, 271, 0, 0, 0, 0, 0, 272, 0, 0, 0, 0, 0, 0, 273, 0, 0, 0, 274, 0, 0, 0, 0, 275, 0, 0,
    0, 276, 0, 0, 0, 277, 0, 0, 0, 0, 0, 278, 0, 0, 0, 0, 0, 0, 279, 0, 0, 0, 280, 0, 0, 0, 0, 281, 0, 0, 282, 0,
    0, 0, 283, 0, 0, 0, 0, 0, 284, 0, 0, 0, 0, 0, 0, 285, 0, 0, 0, 286, 0, 0, 0, 0, 287, 0, 0, 288, 0, 0, 0, 289,
    0, 0, 0, 0, 0, 290, 0, 0, 0, 0, 0, 0, 291, 0, 0, 0, 292, 0, 0, 0, 0, 293, 0, 0, 294, 0, 0, 0, 0, 0, 295, 0,
    0, 0, 296, 0, 0, 0, 0, 0, 297, 0, 0, 0, 0, 0, 0, 298, 0, 0, 0, 299, 0, 0, 0, 0, 300, 0, 0, 0, 301, 0, 0, 0,
    302, 0, 0, 0, 0, 0, 303, 0, 0, 0, 0, 0, 0, 304, 0, 0, 0, 305, 0, 0, 0, 0, 306, 0, 0, 307, 0, 0, 0, 308, 0, 0,
    0, 0, 0, 309, 0, 0, 0, 0, 0, 0, 310, 0, 0, 0, 311, 0, 0, 0, 0, 312, 0, 0, 313, 0, 0, 0, 314, 0, 0, 0, 0, 0,
    315, 0, 0, 0, 0, 0, 0, 316, 0, 0, 0, 317, 0, 0, 0, 0, 318, 0, 0, 319, 0, 0, 320, 0, 0, 0, 321, 0, 0, 0, 0, 0,
    322, 0, 0, 0, 0, 0, 0, 323, 0, 0, 0, 324, 0, 0, 0, 0, 325, 0, 0, 0, 326, 0, 0, 0, 327, 0, 0, 0, 0, 0, 328, 0,
    0, 0, 0, 0, 0, 329, 0, 0, 0, 330, 0, 0, 0, 0, 331, 0, 0, 332, 0, 0, 0, 333, 0, 0, 0, 0, 0, 334, 0, 0, 0, 0,
    0, 0, 335, 0, 0, 0, 336, 0, 0, 0, 0, 337, 0, 0, 338, 0, 0, 0, 339, 0, 0, 0, 0, 0, 340, 0, 0, 0, 0, 0, 0, 341,
    0, 0, 0, 342, 0, 0, 0, 0, 343, 0, 0, 344, 0, 0, 0, 0, 0, 0, 345, 0, 0, 0, 346, 0, 0, 0, 0, 0, 347, 0, 0, 0,
    0, 0, 0, 348, 0, 0, 0, 349, 0, 0, 0, 0, 350, 0, 0, 0, 351, 0, 0, 0, 352, 0, 0, 0, 0, 0, 353, 0, 0, 0, 0, 0,
    0, 354, 0, 0, 0, 355, 0, 0, 0, 0, 356, 0, 0, 357, 0, 0, 0, 358, 0, 0, 0, 0, 0, 359, 0, 0, 0, 0, 0, 0, 360, 0,
    0, 0, 361, 0, 0, 0, 0, 362, 0, 0, 363, 0, 0, 0, 364, 0, 0, 0, 0, 0, 365, 0, 0, 0, 0, 0, 0, 366, 0, 0, 0, 367,
    0, 0, 0, 0, 368, 0, 0, 369, 0, 0, 370, 0, 0, 0, 371, 0, 0, 0, 0, 0, 372, 0, 0, 0, 0, 0, 0, 373, 0, 0, 0, 374,
    0, 0, 0, 0, 375, 0, 0, 0, 376, 0, 0, 0, 377, 0, 0, 0, 0, 0, 378, 0, 0, 0, 0, 0, 0, 379, 0, 0, 0, 380, 0, 0,
    0, 0, 381, 0, 0, 382, 0, 0, 0, 383, 0, 0, 0, 0, 0, 384, 0, 0, 0, 0, 0, 0, 385, 0, 0, 0, 386, 0, 0, 0, 0, 387,
    0, 0, 388, 0, 0, 0, 389, 0, 0, 0, 0, 0, 390, 0, 0, 0, 0, 0, 0, 391, 0, 0, 0, 392, 0, 0, 0, 0, 393, 0, 0, 394,
    0, 0, 0, 0, 0, 0, 0, 395, 0, 0, 0, 396, 0, 0, 0, 0, 0, 397, 0, 0, 0, 0, 0, 0, 398, 0, 0, 0, 399, 0, 0, 0,
    0, 400, 0, 0, 0, 401, 0, 0, 0, 402, 0, 0, 0, 0, 0, 403, 0, 0, 0, 0, 0, 0, 404, 0, 0, 0, 405, 0, 0, 0, 0, 406,
    0, 0, 407, 0, 0, 0, 408, 0, 0, 0, 0, 0, 409, 0, 0, 0, 0, 0, 0, 410, 0, 0, 0, 411, 0, 0, 0, 0, 412, 0, 0, 413,
    0, 0, 0, 414, 0, 0, 0, 0, 0, 415, 0, 0, 0, 0, 0, 0, 416, 0, 0, 0, 417, 0, 0, 0, 0, 418, 0, 0, 419, 0, 0, 420,
    0, 0, 0, 421, 0, 0, 0, 0, 0, 422, 0, 0, 0, 0, 0, 0, 423, 0, 0, 0, 424, 0, 0, 0, 0, 425, 0, 0, 0, 426, 0, 0,
    0, 427, 0, 0, 0, 0, 0, 428, 0, 0, 0, 0, 0, 0, 429, 0, 0, 0, 430, 0, 0, 0, 0, 431, 0, 0, 432, 0, 0, 0, 433, 0,
    0, 0, 0, 0, 434, 0, 0, 0, 0, 0, 0, 435, 0, 0, 0, 436, 0, 0, 0, 0, 437, 0, 0, 438, 0, 0, 0, 439, 0, 0, 0, 0,
    0, 440, 0, 0, 0, 0, 0, 0, 441, 0, 0, 0, 442, 0, 0, 0, 0, 443, 0, 0, 444, 0, 0, 0, 0, 0, 0, 445, 0, 0, 0, 446,
    0, 0, 0, 0, 0, 447, 0, 0, 0, 0, 0, 0, 448, 0, 0, 0, 449, 0, 0, 0, 0, 450, 0, 0, 0, 451, 0, 0, 0, 452, 0, 0,
    0, 0, 0, 453, 0, 0, 0, 0, 0, 0, 454, 0, 0, 0, 455, 0, 0, 0, 0, 456, 0, 0, 457, 0, 0, 0, 458, 0, 0, 0, 0, 0,
    459, 0, 0, 0, 0, 0, 0, 460, 0, 0, 0, 461, 0, 0, 0, 0, 462, 0, 0, 463, 0, 0, 0, 464, 0, 0, 0, 0, 0, 465, 0, 0,
    0, 0, 0, 0, 466, 0, 0, 0, 467, 0, 0, 0, 0, 468, 0, 0, 469, 0, 0, 470, 0, 0, 0, 471, 0, 0, 0, 0, 0, 472, 0, 0,
    0, 0, 0, 0, 473, 0, 0, 0, 474, 0, 0, 0, 0, 475, 0, 0, 0, 476, 0, 0, 0, 477, 0, 0, 0, 0, 0, 478, 0, 0, 0, 0,
    0, 0, 479, 0, 0, 0, 480, 0, 0, 0, 0, 481, 0, 0, 482, 0, 0, 0, 483, 0, 0, 0, 0, 0, 484, 0, 0, 0, 0, 0, 0, 485,
    0, 0, 0, 486, 0, 0, 0, 0, 487, 0, 0, 488, 0, 0, 0, 489, 0, 0, 0, 0, 0, 490, 0, 0, 0, 0, 0, 0, 491, 0, 0, 0,
    492, 0, 0, 0, 0, 493, 0, 0, 494, 0, 0, 0, 0, 0, 495, 0, 0, 0, 496, 0, 0, 0, 0, 0, 497, 0, 0, 0, 0, 0, 0, 498,
    0, 0, 0, 499, 0, 0, 0, 0, 500, 0, 0, 0, 501, 0, 0, 0, 502, 0, 0, 0, 0, 0, 503, 0, 0, 0, 0, 0, 0, 504, 0, 0,
    0, 505, 0, 0, 0, 0, 506, 0, 0, 507, 0, 0, 0, 508, 0, 0, 0, 0, 0, 509, 0, 0, 0, 0, 0, 0, 510, 0, 0, 0, 511, 0,
    0, 0, 0, 512, 0, 0, 513, 0, 0, 0, 514, 0, 0, 0, 0, 0, 515, 0, 0, 0, 0, 0, 0, 516, 0, 0, 0, 517, 0, 0, 0, 0,
    518, 0, 0, 519, 0, 0, 520, 0, 0, 0, 521, 0, 0, 0, 0, 0, 522, 0, 0, 0, 0, 0, 0, 523, 0, 0, 0, 524, 0, 0, 0, 0,
    525, 0, 0, 0, 526, 0, 0, 0, 527, 0, 0, 0, 0, 0, 528, 0, 0, 0, 0, 0, 0, 529, 0, 0, 0, 530, 0, 0, 0, 0, 531, 0,
    0, 532, 0, 0, 0, 533, 0, 0, 0, 0, 0, 534, 0, 0, 0, 0, 0, 0, 535, 0, 0, 0, 536, 0, 0, 0, 0, 537, 0, 0, 538, 0,
    0, 0, 539, 0, 0, 0, 0, 0, 540, 0, 0, 0, 0, 0, 0, 541, 0, 0, 0, 542, 0, 0, 0, 0, 543, 0, 0, 544, 0, 0, 0, 0,
    0, 0, 545, 0, 0, 0, 546, 0, 0, 0, 0, 0, 547, 0, 0, 0, 0, 0, 0, 548, 0, 0, 0, 549, 0, 0, 0, 0, 550, 0, 0, 0,
    551, 0, 0, 0, 552, 0, 0, 0, 0, 0, 553, 0, 0, 0, 0, 0, 0, 554, 0, 0, 0, 555, 0, 0, 0, 0, 556, 0, 0, 557, 0, 0,
    0, 558, 0, 0, 0, 0, 0, 559, 0, 0, 0, 0, 0, 0, 560, 0, 0, 0, 561, 0, 0, 0, 0, 562, 0, 0, 563, 0, 0, 0, 564, 0,
    0, 0, 0, 0, 565, 0, 0, 0, 0, 0, 0, 566, 0, 0, 0, 567, 0, 0, 0, 0, 568, 0, 0, 569, 0, 0, 570, 0, 0, 0, 571, 0,
    0, 0, 0, 0, 572, 0, 0, 0, 0, 0, 0, 573, 0, 0, 0, 574, 0, 0, 0, 0, 575, 0, 0, 0, 576, 0, 0, 0, 577, 0, 0, 0,
    0, 0, 578, 0, 0, 0, 0, 0, 0, 579, 0, 0, 0, 580, 0, 0, 0, 0, 581, 0, 0, 582, 0, 0, 0, 583, 0, 0, 0, 0, 0, 584,
    0, 0, 0, 0, 0, 0, 585, 0, 0, 0, 586, 0, 0, 0, 0, 587, 0, 0, 588, 0, 0, 0, 589, 0, 0, 0, 0, 0, 590, 0, 0, 0,
    0, 0, 0, 591, 0, 0, 0, 592, 0, 0, 0, 0, 593, 0, 0, 594, 0, 0, 0, 0, 0, 595, 0, 0, 0, 596, 0, 0, 0, 0, 0, 597,
    0, 0, 0, 0, 0, 0, 598, 0, 0, 0, 599, 0, 0, 0, 0, 600, 0, 0, 0, 601, 0, 0, 0, 602, 0, 0, 0, 0, 0, 603, 0, 0,
    0, 0, 0, 0, 604, 0, 0, 0, 605, 0, 0, 0, 0, 606, 0, 0, 607, 0, 0, 0, 608, 0, 0, 0, 0, 0, 609, 0, 0, 0, 0, 0,
    0, 610, 0, 0, 0, 611, 0, 0, 0, 0, 612, 0, 0, 613, 0, 0, 0, 614, 0, 0, 0, 0, 0, 615, 0, 0, 0, 0, 0, 0, 616, 0,
    0, 0, 617, 0, 0, 0, 0, 618, 0, 0, 619, 0, 0, 620, 0, 0, 0, 621, 0, 0, 0, 0, 0, 622, 0, 0, 0, 0, 0, 0, 623, 0,
    0, 0, 624, 0, 0, 0, 0, 625, 0, 0, 0, 626, 0, 0, 0, 627, 0, 0, 0, 0, 0, 628, 0, 0, 0, 0, 0, 0, 629, 0, 0, 0,
    630, 0, 0, 0, 0, 631, 0, 0, 632, 0, 0, 0, 633, 0, 0, 0, 0, 0, 634, 0, 0, 0, 0, 0, 0, 635, 0, 0, 0, 636, 0, 0,
    0, 0, 637, 0, 0, 638, 0, 0, 0, 639, 0, 0, 0, 0, 0, 640, 0, 0, 0, 0, 0, 0, 641, 0, 0, 0, 642, 0, 0, 0, 0, 643,
    0, 0, 644, 0, 0, 0, 0, 645, 0, 0, 0, 646, 0, 0, 0, 0, 0, 647, 0, 0, 0, 0, 0, 0, 648, 0, 0, 0, 649, 0, 0, 0,
    0, 650, 0, 0, 0, 651, 0, 0, 0, 652, 0, 0, 0, 0, 0, 653, 0, 0, 0, 0, 0, 0, 654, 0, 0, 0, 655, 0, 0, 0, 0, 656,
    0, 0, 657, 0, 0, 0, 658, 0, 0, 0, 0, 0, 659, 0, 0, 0, 0, 0, 0, 660, 0, 0, 0, 661, 0, 0, 0, 0, 662, 0, 0, 663,
    0, 0, 0, 664, 0, 0, 0, 0, 0, 665, 0, 0, 0, 0, 0, 0, 666, 0, 0, 0, 667, 0, 0, 0, 0, 668, 0, 0, 669, 0, 0, 670,
    0, 0, 0, 671, 0, 0, 0, 0, 0, 672, 0, 0, 0, 0, 0, 0, 673, 0, 0, 0, 674, 0, 0, 0, 0, 675, 0, 0, 0, 676, 0, 0,
    0, 677, 0, 0, 0, 0, 0, 678, 0, 0, 0, 0, 0, 0, 679, 0, 0, 0, 680, 0, 0, 0, 0, 681, 0, 0, 682, 0, 0, 0, 683, 0,
    0, 0, 0, 0, 684, 0, 0, 0, 0, 0, 0, 685, 0, 0, 0, 686, 0, 0, 0, 0, 687, 0, 0, 688, 0, 0, 0, 689, 0, 0, 0, 0,
    0, 690, 0, 0, 0, 0, 0, 0, 691, 0, 0, 0, 692, 0, 0, 0, 0, 693, 0, 0, 694, 0, 0, 695, 0, 0, 0, 696, 0, 0, 0, 0,
    0, 697, 0, 0, 0, 0, 0, 0, 698, 0, 0, 0, 699, 0, 0, 0, 0, 700, 0, 0, 0, 701, 0, 0, 0, 702, 0, 0, 0, 0, 0, 703,
    0, 0, 0, 0, 0, 0, 704, 0, 0, 0, 705, 0, 0, 0, 0, 706, 0, 0, 707, 0, 0, 0, 708, 0, 0, 0, 0, 0, 709, 0, 0, 0,
    0, 0, 0, 710, 0, 0, 0, 711, 0, 0, 0, 0, 712, 0, 0, 713, 0, 0, 0, 714, 0, 0, 0, 0, 0, 715, 0, 0, 0, 0, 0, 0,
    716, 0, 0, 0, 717, 0, 0, 0, 0, 718, 0, 0, 719, 0, 0, 720, 0, 0, 0, 721, 0, 0, 0, 0, 0, 722, 0, 0, 0, 0, 0, 0,
    723, 0, 0, 0, 724, 0, 0, 0, 0, 725, 0, 0, 0, 726, 0, 0, 0, 727, 0, 0, 0, 0, 0, 728, 0, 0, 0, 0, 0, 0, 729, 0,
    0, 0, 730, 0, 0, 0, 0, 731, 0, 0, 732, 0, 0, 0, 733, 0, 0, 0, 0, 0, 734, 0, 0, 0, 0, 0, 0, 735, 0, 0, 0, 736,
    0, 0, 0, 0, 737, 0, 0, 738, 0, 0, 0, 739, 0, 0, 0, 0, 0, 740, 0, 0, 0, 0, 0, 0, 741, 0, 0, 0, 742, 0, 0, 0,
    0, 743, 0, 0, 744, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 745, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 746, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 747, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 748, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 749, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 750, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 751, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 752, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 753, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 754, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 755, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 756, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 757, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 758, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 759, 0, 760, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 761,
};
void recomp_unit_0111_entry(Runtime &rt, AllegrexContext &ctx, std::uint16_t direct_entry_id, GuestMemory::AotFastView &aot_mem) {
    std::uint32_t jump_target = 0u;
    std::uint32_t local_transfers = 0u;
    std::uint32_t local_pc = ctx.pc;
    std::uint32_t entry_id = direct_entry_id;
LOCAL_DISPATCH:
    {
    if (entry_id == 0u) {
        const std::uint32_t entry_delta = local_pc - 0x089C0000u;
        entry_id = (entry_delta < 15684u && (entry_delta & 3u) == 0u) ? kEntryIds_recomp_unit_0111[entry_delta >> 2u] : 0u;
    }
    switch (entry_id) {
    case 1u: goto L_089C0000;
    case 2u: goto L_089C000C;
    case 3u: goto L_089C0024;
    case 4u: goto L_089C0040;
    case 5u: goto L_089C0050;
    case 6u: goto L_089C0064;
    case 7u: goto L_089C0070;
    case 8u: goto L_089C0080;
    case 9u: goto L_089C0098;
    case 10u: goto L_089C00B4;
    case 11u: goto L_089C00C4;
    case 12u: goto L_089C00D8;
    case 13u: goto L_089C00E4;
    case 14u: goto L_089C00F4;
    case 15u: goto L_089C010C;
    case 16u: goto L_089C0128;
    case 17u: goto L_089C0138;
    case 18u: goto L_089C014C;
    case 19u: goto L_089C0158;
    case 20u: goto L_089C0164;
    case 21u: goto L_089C0174;
    case 22u: goto L_089C018C;
    case 23u: goto L_089C01A8;
    case 24u: goto L_089C01B8;
    case 25u: goto L_089C01CC;
    case 26u: goto L_089C01DC;
    case 27u: goto L_089C01EC;
    case 28u: goto L_089C0204;
    case 29u: goto L_089C0220;
    case 30u: goto L_089C0230;
    case 31u: goto L_089C0244;
    case 32u: goto L_089C0250;
    case 33u: goto L_089C0260;
    case 34u: goto L_089C0278;
    case 35u: goto L_089C0294;
    case 36u: goto L_089C02A4;
    case 37u: goto L_089C02B8;
    case 38u: goto L_089C02C4;
    case 39u: goto L_089C02D4;
    case 40u: goto L_089C02EC;
    case 41u: goto L_089C0308;
    case 42u: goto L_089C0318;
    case 43u: goto L_089C032C;
    case 44u: goto L_089C0338;
    case 45u: goto L_089C035C;
    case 46u: goto L_089C036C;
    case 47u: goto L_089C0384;
    case 48u: goto L_089C03A0;
    case 49u: goto L_089C03B0;
    case 50u: goto L_089C03C4;
    case 51u: goto L_089C03D4;
    case 52u: goto L_089C03E4;
    case 53u: goto L_089C03FC;
    case 54u: goto L_089C0418;
    case 55u: goto L_089C0428;
    case 56u: goto L_089C043C;
    case 57u: goto L_089C0448;
    case 58u: goto L_089C0458;
    case 59u: goto L_089C0470;
    case 60u: goto L_089C048C;
    case 61u: goto L_089C049C;
    case 62u: goto L_089C04B0;
    case 63u: goto L_089C04BC;
    case 64u: goto L_089C04CC;
    case 65u: goto L_089C04E4;
    case 66u: goto L_089C0500;
    case 67u: goto L_089C0510;
    case 68u: goto L_089C0524;
    case 69u: goto L_089C0530;
    case 70u: goto L_089C053C;
    case 71u: goto L_089C054C;
    case 72u: goto L_089C0564;
    case 73u: goto L_089C0580;
    case 74u: goto L_089C0590;
    case 75u: goto L_089C05A4;
    case 76u: goto L_089C05B4;
    case 77u: goto L_089C05C4;
    case 78u: goto L_089C05DC;
    case 79u: goto L_089C05F8;
    case 80u: goto L_089C0608;
    case 81u: goto L_089C061C;
    case 82u: goto L_089C0628;
    case 83u: goto L_089C0638;
    case 84u: goto L_089C0650;
    case 85u: goto L_089C066C;
    case 86u: goto L_089C067C;
    case 87u: goto L_089C0690;
    case 88u: goto L_089C069C;
    case 89u: goto L_089C06AC;
    case 90u: goto L_089C06C4;
    case 91u: goto L_089C06E0;
    case 92u: goto L_089C06F0;
    case 93u: goto L_089C0704;
    case 94u: goto L_089C0710;
    case 95u: goto L_089C0730;
    case 96u: goto L_089C0740;
    case 97u: goto L_089C0758;
    case 98u: goto L_089C0774;
    case 99u: goto L_089C0784;
    case 100u: goto L_089C0798;
    case 101u: goto L_089C07A8;
    case 102u: goto L_089C07B8;
    case 103u: goto L_089C07D0;
    case 104u: goto L_089C07EC;
    case 105u: goto L_089C07FC;
    case 106u: goto L_089C0810;
    case 107u: goto L_089C081C;
    case 108u: goto L_089C082C;
    case 109u: goto L_089C0844;
    case 110u: goto L_089C0860;
    case 111u: goto L_089C0870;
    case 112u: goto L_089C0884;
    case 113u: goto L_089C0890;
    case 114u: goto L_089C08A0;
    case 115u: goto L_089C08B8;
    case 116u: goto L_089C08D4;
    case 117u: goto L_089C08E4;
    case 118u: goto L_089C08F8;
    case 119u: goto L_089C0904;
    case 120u: goto L_089C0910;
    case 121u: goto L_089C0920;
    case 122u: goto L_089C0938;
    case 123u: goto L_089C0954;
    case 124u: goto L_089C0964;
    case 125u: goto L_089C0978;
    case 126u: goto L_089C0988;
    case 127u: goto L_089C0998;
    case 128u: goto L_089C09B0;
    case 129u: goto L_089C09CC;
    case 130u: goto L_089C09DC;
    case 131u: goto L_089C09F0;
    case 132u: goto L_089C09FC;
    case 133u: goto L_089C0A0C;
    case 134u: goto L_089C0A24;
    case 135u: goto L_089C0A40;
    case 136u: goto L_089C0A50;
    case 137u: goto L_089C0A64;
    case 138u: goto L_089C0A70;
    case 139u: goto L_089C0A80;
    case 140u: goto L_089C0A98;
    case 141u: goto L_089C0AB4;
    case 142u: goto L_089C0AC4;
    case 143u: goto L_089C0AD8;
    case 144u: goto L_089C0AE4;
    case 145u: goto L_089C0B08;
    case 146u: goto L_089C0B18;
    case 147u: goto L_089C0B30;
    case 148u: goto L_089C0B4C;
    case 149u: goto L_089C0B5C;
    case 150u: goto L_089C0B70;
    case 151u: goto L_089C0B80;
    case 152u: goto L_089C0B90;
    case 153u: goto L_089C0BA8;
    case 154u: goto L_089C0BC4;
    case 155u: goto L_089C0BD4;
    case 156u: goto L_089C0BE8;
    case 157u: goto L_089C0BF4;
    case 158u: goto L_089C0C04;
    case 159u: goto L_089C0C1C;
    case 160u: goto L_089C0C38;
    case 161u: goto L_089C0C48;
    case 162u: goto L_089C0C5C;
    case 163u: goto L_089C0C68;
    case 164u: goto L_089C0C78;
    case 165u: goto L_089C0C90;
    case 166u: goto L_089C0CAC;
    case 167u: goto L_089C0CBC;
    case 168u: goto L_089C0CD0;
    case 169u: goto L_089C0CDC;
    case 170u: goto L_089C0CE8;
    case 171u: goto L_089C0CF8;
    case 172u: goto L_089C0D10;
    case 173u: goto L_089C0D2C;
    case 174u: goto L_089C0D3C;
    case 175u: goto L_089C0D50;
    case 176u: goto L_089C0D60;
    case 177u: goto L_089C0D70;
    case 178u: goto L_089C0D88;
    case 179u: goto L_089C0DA4;
    case 180u: goto L_089C0DB4;
    case 181u: goto L_089C0DC8;
    case 182u: goto L_089C0DD4;
    case 183u: goto L_089C0DE4;
    case 184u: goto L_089C0DFC;
    case 185u: goto L_089C0E18;
    case 186u: goto L_089C0E28;
    case 187u: goto L_089C0E3C;
    case 188u: goto L_089C0E48;
    case 189u: goto L_089C0E58;
    case 190u: goto L_089C0E70;
    case 191u: goto L_089C0E8C;
    case 192u: goto L_089C0E9C;
    case 193u: goto L_089C0EB0;
    case 194u: goto L_089C0EBC;
    case 195u: goto L_089C0EDC;
    case 196u: goto L_089C0EEC;
    case 197u: goto L_089C0F04;
    case 198u: goto L_089C0F20;
    case 199u: goto L_089C0F30;
    case 200u: goto L_089C0F44;
    case 201u: goto L_089C0F54;
    case 202u: goto L_089C0F64;
    case 203u: goto L_089C0F7C;
    case 204u: goto L_089C0F98;
    case 205u: goto L_089C0FA8;
    case 206u: goto L_089C0FBC;
    case 207u: goto L_089C0FC8;
    case 208u: goto L_089C0FD8;
    case 209u: goto L_089C0FF0;
    case 210u: goto L_089C100C;
    case 211u: goto L_089C101C;
    case 212u: goto L_089C1030;
    case 213u: goto L_089C103C;
    case 214u: goto L_089C104C;
    case 215u: goto L_089C1064;
    case 216u: goto L_089C1080;
    case 217u: goto L_089C1090;
    case 218u: goto L_089C10A4;
    case 219u: goto L_089C10B0;
    case 220u: goto L_089C10BC;
    case 221u: goto L_089C10CC;
    case 222u: goto L_089C10E4;
    case 223u: goto L_089C1100;
    case 224u: goto L_089C1110;
    case 225u: goto L_089C1124;
    case 226u: goto L_089C1134;
    case 227u: goto L_089C1144;
    case 228u: goto L_089C115C;
    case 229u: goto L_089C1178;
    case 230u: goto L_089C1188;
    case 231u: goto L_089C119C;
    case 232u: goto L_089C11A8;
    case 233u: goto L_089C11B8;
    case 234u: goto L_089C11D0;
    case 235u: goto L_089C11EC;
    case 236u: goto L_089C11FC;
    case 237u: goto L_089C1210;
    case 238u: goto L_089C121C;
    case 239u: goto L_089C122C;
    case 240u: goto L_089C1244;
    case 241u: goto L_089C1260;
    case 242u: goto L_089C1270;
    case 243u: goto L_089C1284;
    case 244u: goto L_089C1290;
    case 245u: goto L_089C12AC;
    case 246u: goto L_089C12BC;
    case 247u: goto L_089C12D4;
    case 248u: goto L_089C12F0;
    case 249u: goto L_089C1300;
    case 250u: goto L_089C1314;
    case 251u: goto L_089C1324;
    case 252u: goto L_089C1334;
    case 253u: goto L_089C134C;
    case 254u: goto L_089C1368;
    case 255u: goto L_089C1378;
    case 256u: goto L_089C138C;
    case 257u: goto L_089C1398;
    case 258u: goto L_089C13A8;
    case 259u: goto L_089C13C0;
    case 260u: goto L_089C13DC;
    case 261u: goto L_089C13EC;
    case 262u: goto L_089C1400;
    case 263u: goto L_089C140C;
    case 264u: goto L_089C141C;
    case 265u: goto L_089C1434;
    case 266u: goto L_089C1450;
    case 267u: goto L_089C1460;
    case 268u: goto L_089C1474;
    case 269u: goto L_089C1480;
    case 270u: goto L_089C148C;
    case 271u: goto L_089C149C;
    case 272u: goto L_089C14B4;
    case 273u: goto L_089C14D0;
    case 274u: goto L_089C14E0;
    case 275u: goto L_089C14F4;
    case 276u: goto L_089C1504;
    case 277u: goto L_089C1514;
    case 278u: goto L_089C152C;
    case 279u: goto L_089C1548;
    case 280u: goto L_089C1558;
    case 281u: goto L_089C156C;
    case 282u: goto L_089C1578;
    case 283u: goto L_089C1588;
    case 284u: goto L_089C15A0;
    case 285u: goto L_089C15BC;
    case 286u: goto L_089C15CC;
    case 287u: goto L_089C15E0;
    case 288u: goto L_089C15EC;
    case 289u: goto L_089C15FC;
    case 290u: goto L_089C1614;
    case 291u: goto L_089C1630;
    case 292u: goto L_089C1640;
    case 293u: goto L_089C1654;
    case 294u: goto L_089C1660;
    case 295u: goto L_089C1678;
    case 296u: goto L_089C1688;
    case 297u: goto L_089C16A0;
    case 298u: goto L_089C16BC;
    case 299u: goto L_089C16CC;
    case 300u: goto L_089C16E0;
    case 301u: goto L_089C16F0;
    case 302u: goto L_089C1700;
    case 303u: goto L_089C1718;
    case 304u: goto L_089C1734;
    case 305u: goto L_089C1744;
    case 306u: goto L_089C1758;
    case 307u: goto L_089C1764;
    case 308u: goto L_089C1774;
    case 309u: goto L_089C178C;
    case 310u: goto L_089C17A8;
    case 311u: goto L_089C17B8;
    case 312u: goto L_089C17CC;
    case 313u: goto L_089C17D8;
    case 314u: goto L_089C17E8;
    case 315u: goto L_089C1800;
    case 316u: goto L_089C181C;
    case 317u: goto L_089C182C;
    case 318u: goto L_089C1840;
    case 319u: goto L_089C184C;
    case 320u: goto L_089C1858;
    case 321u: goto L_089C1868;
    case 322u: goto L_089C1880;
    case 323u: goto L_089C189C;
    case 324u: goto L_089C18AC;
    case 325u: goto L_089C18C0;
    case 326u: goto L_089C18D0;
    case 327u: goto L_089C18E0;
    case 328u: goto L_089C18F8;
    case 329u: goto L_089C1914;
    case 330u: goto L_089C1924;
    case 331u: goto L_089C1938;
    case 332u: goto L_089C1944;
    case 333u: goto L_089C1954;
    case 334u: goto L_089C196C;
    case 335u: goto L_089C1988;
    case 336u: goto L_089C1998;
    case 337u: goto L_089C19AC;
    case 338u: goto L_089C19B8;
    case 339u: goto L_089C19C8;
    case 340u: goto L_089C19E0;
    case 341u: goto L_089C19FC;
    case 342u: goto L_089C1A0C;
    case 343u: goto L_089C1A20;
    case 344u: goto L_089C1A2C;
    case 345u: goto L_089C1A48;
    case 346u: goto L_089C1A58;
    case 347u: goto L_089C1A70;
    case 348u: goto L_089C1A8C;
    case 349u: goto L_089C1A9C;
    case 350u: goto L_089C1AB0;
    case 351u: goto L_089C1AC0;
    case 352u: goto L_089C1AD0;
    case 353u: goto L_089C1AE8;
    case 354u: goto L_089C1B04;
    case 355u: goto L_089C1B14;
    case 356u: goto L_089C1B28;
    case 357u: goto L_089C1B34;
    case 358u: goto L_089C1B44;
    case 359u: goto L_089C1B5C;
    case 360u: goto L_089C1B78;
    case 361u: goto L_089C1B88;
    case 362u: goto L_089C1B9C;
    case 363u: goto L_089C1BA8;
    case 364u: goto L_089C1BB8;
    case 365u: goto L_089C1BD0;
    case 366u: goto L_089C1BEC;
    case 367u: goto L_089C1BFC;
    case 368u: goto L_089C1C10;
    case 369u: goto L_089C1C1C;
    case 370u: goto L_089C1C28;
    case 371u: goto L_089C1C38;
    case 372u: goto L_089C1C50;
    case 373u: goto L_089C1C6C;
    case 374u: goto L_089C1C7C;
    case 375u: goto L_089C1C90;
    case 376u: goto L_089C1CA0;
    case 377u: goto L_089C1CB0;
    case 378u: goto L_089C1CC8;
    case 379u: goto L_089C1CE4;
    case 380u: goto L_089C1CF4;
    case 381u: goto L_089C1D08;
    case 382u: goto L_089C1D14;
    case 383u: goto L_089C1D24;
    case 384u: goto L_089C1D3C;
    case 385u: goto L_089C1D58;
    case 386u: goto L_089C1D68;
    case 387u: goto L_089C1D7C;
    case 388u: goto L_089C1D88;
    case 389u: goto L_089C1D98;
    case 390u: goto L_089C1DB0;
    case 391u: goto L_089C1DCC;
    case 392u: goto L_089C1DDC;
    case 393u: goto L_089C1DF0;
    case 394u: goto L_089C1DFC;
    case 395u: goto L_089C1E1C;
    case 396u: goto L_089C1E2C;
    case 397u: goto L_089C1E44;
    case 398u: goto L_089C1E60;
    case 399u: goto L_089C1E70;
    case 400u: goto L_089C1E84;
    case 401u: goto L_089C1E94;
    case 402u: goto L_089C1EA4;
    case 403u: goto L_089C1EBC;
    case 404u: goto L_089C1ED8;
    case 405u: goto L_089C1EE8;
    case 406u: goto L_089C1EFC;
    case 407u: goto L_089C1F08;
    case 408u: goto L_089C1F18;
    case 409u: goto L_089C1F30;
    case 410u: goto L_089C1F4C;
    case 411u: goto L_089C1F5C;
    case 412u: goto L_089C1F70;
    case 413u: goto L_089C1F7C;
    case 414u: goto L_089C1F8C;
    case 415u: goto L_089C1FA4;
    case 416u: goto L_089C1FC0;
    case 417u: goto L_089C1FD0;
    case 418u: goto L_089C1FE4;
    case 419u: goto L_089C1FF0;
    case 420u: goto L_089C1FFC;
    case 421u: goto L_089C200C;
    case 422u: goto L_089C2024;
    case 423u: goto L_089C2040;
    case 424u: goto L_089C2050;
    case 425u: goto L_089C2064;
    case 426u: goto L_089C2074;
    case 427u: goto L_089C2084;
    case 428u: goto L_089C209C;
    case 429u: goto L_089C20B8;
    case 430u: goto L_089C20C8;
    case 431u: goto L_089C20DC;
    case 432u: goto L_089C20E8;
    case 433u: goto L_089C20F8;
    case 434u: goto L_089C2110;
    case 435u: goto L_089C212C;
    case 436u: goto L_089C213C;
    case 437u: goto L_089C2150;
    case 438u: goto L_089C215C;
    case 439u: goto L_089C216C;
    case 440u: goto L_089C2184;
    case 441u: goto L_089C21A0;
    case 442u: goto L_089C21B0;
    case 443u: goto L_089C21C4;
    case 444u: goto L_089C21D0;
    case 445u: goto L_089C21EC;
    case 446u: goto L_089C21FC;
    case 447u: goto L_089C2214;
    case 448u: goto L_089C2230;
    case 449u: goto L_089C2240;
    case 450u: goto L_089C2254;
    case 451u: goto L_089C2264;
    case 452u: goto L_089C2274;
    case 453u: goto L_089C228C;
    case 454u: goto L_089C22A8;
    case 455u: goto L_089C22B8;
    case 456u: goto L_089C22CC;
    case 457u: goto L_089C22D8;
    case 458u: goto L_089C22E8;
    case 459u: goto L_089C2300;
    case 460u: goto L_089C231C;
    case 461u: goto L_089C232C;
    case 462u: goto L_089C2340;
    case 463u: goto L_089C234C;
    case 464u: goto L_089C235C;
    case 465u: goto L_089C2374;
    case 466u: goto L_089C2390;
    case 467u: goto L_089C23A0;
    case 468u: goto L_089C23B4;
    case 469u: goto L_089C23C0;
    case 470u: goto L_089C23CC;
    case 471u: goto L_089C23DC;
    case 472u: goto L_089C23F4;
    case 473u: goto L_089C2410;
    case 474u: goto L_089C2420;
    case 475u: goto L_089C2434;
    case 476u: goto L_089C2444;
    case 477u: goto L_089C2454;
    case 478u: goto L_089C246C;
    case 479u: goto L_089C2488;
    case 480u: goto L_089C2498;
    case 481u: goto L_089C24AC;
    case 482u: goto L_089C24B8;
    case 483u: goto L_089C24C8;
    case 484u: goto L_089C24E0;
    case 485u: goto L_089C24FC;
    case 486u: goto L_089C250C;
    case 487u: goto L_089C2520;
    case 488u: goto L_089C252C;
    case 489u: goto L_089C253C;
    case 490u: goto L_089C2554;
    case 491u: goto L_089C2570;
    case 492u: goto L_089C2580;
    case 493u: goto L_089C2594;
    case 494u: goto L_089C25A0;
    case 495u: goto L_089C25B8;
    case 496u: goto L_089C25C8;
    case 497u: goto L_089C25E0;
    case 498u: goto L_089C25FC;
    case 499u: goto L_089C260C;
    case 500u: goto L_089C2620;
    case 501u: goto L_089C2630;
    case 502u: goto L_089C2640;
    case 503u: goto L_089C2658;
    case 504u: goto L_089C2674;
    case 505u: goto L_089C2684;
    case 506u: goto L_089C2698;
    case 507u: goto L_089C26A4;
    case 508u: goto L_089C26B4;
    case 509u: goto L_089C26CC;
    case 510u: goto L_089C26E8;
    case 511u: goto L_089C26F8;
    case 512u: goto L_089C270C;
    case 513u: goto L_089C2718;
    case 514u: goto L_089C2728;
    case 515u: goto L_089C2740;
    case 516u: goto L_089C275C;
    case 517u: goto L_089C276C;
    case 518u: goto L_089C2780;
    case 519u: goto L_089C278C;
    case 520u: goto L_089C2798;
    case 521u: goto L_089C27A8;
    case 522u: goto L_089C27C0;
    case 523u: goto L_089C27DC;
    case 524u: goto L_089C27EC;
    case 525u: goto L_089C2800;
    case 526u: goto L_089C2810;
    case 527u: goto L_089C2820;
    case 528u: goto L_089C2838;
    case 529u: goto L_089C2854;
    case 530u: goto L_089C2864;
    case 531u: goto L_089C2878;
    case 532u: goto L_089C2884;
    case 533u: goto L_089C2894;
    case 534u: goto L_089C28AC;
    case 535u: goto L_089C28C8;
    case 536u: goto L_089C28D8;
    case 537u: goto L_089C28EC;
    case 538u: goto L_089C28F8;
    case 539u: goto L_089C2908;
    case 540u: goto L_089C2920;
    case 541u: goto L_089C293C;
    case 542u: goto L_089C294C;
    case 543u: goto L_089C2960;
    case 544u: goto L_089C296C;
    case 545u: goto L_089C2988;
    case 546u: goto L_089C2998;
    case 547u: goto L_089C29B0;
    case 548u: goto L_089C29CC;
    case 549u: goto L_089C29DC;
    case 550u: goto L_089C29F0;
    case 551u: goto L_089C2A00;
    case 552u: goto L_089C2A10;
    case 553u: goto L_089C2A28;
    case 554u: goto L_089C2A44;
    case 555u: goto L_089C2A54;
    case 556u: goto L_089C2A68;
    case 557u: goto L_089C2A74;
    case 558u: goto L_089C2A84;
    case 559u: goto L_089C2A9C;
    case 560u: goto L_089C2AB8;
    case 561u: goto L_089C2AC8;
    case 562u: goto L_089C2ADC;
    case 563u: goto L_089C2AE8;
    case 564u: goto L_089C2AF8;
    case 565u: goto L_089C2B10;
    case 566u: goto L_089C2B2C;
    case 567u: goto L_089C2B3C;
    case 568u: goto L_089C2B50;
    case 569u: goto L_089C2B5C;
    case 570u: goto L_089C2B68;
    case 571u: goto L_089C2B78;
    case 572u: goto L_089C2B90;
    case 573u: goto L_089C2BAC;
    case 574u: goto L_089C2BBC;
    case 575u: goto L_089C2BD0;
    case 576u: goto L_089C2BE0;
    case 577u: goto L_089C2BF0;
    case 578u: goto L_089C2C08;
    case 579u: goto L_089C2C24;
    case 580u: goto L_089C2C34;
    case 581u: goto L_089C2C48;
    case 582u: goto L_089C2C54;
    case 583u: goto L_089C2C64;
    case 584u: goto L_089C2C7C;
    case 585u: goto L_089C2C98;
    case 586u: goto L_089C2CA8;
    case 587u: goto L_089C2CBC;
    case 588u: goto L_089C2CC8;
    case 589u: goto L_089C2CD8;
    case 590u: goto L_089C2CF0;
    case 591u: goto L_089C2D0C;
    case 592u: goto L_089C2D1C;
    case 593u: goto L_089C2D30;
    case 594u: goto L_089C2D3C;
    case 595u: goto L_089C2D54;
    case 596u: goto L_089C2D64;
    case 597u: goto L_089C2D7C;
    case 598u: goto L_089C2D98;
    case 599u: goto L_089C2DA8;
    case 600u: goto L_089C2DBC;
    case 601u: goto L_089C2DCC;
    case 602u: goto L_089C2DDC;
    case 603u: goto L_089C2DF4;
    case 604u: goto L_089C2E10;
    case 605u: goto L_089C2E20;
    case 606u: goto L_089C2E34;
    case 607u: goto L_089C2E40;
    case 608u: goto L_089C2E50;
    case 609u: goto L_089C2E68;
    case 610u: goto L_089C2E84;
    case 611u: goto L_089C2E94;
    case 612u: goto L_089C2EA8;
    case 613u: goto L_089C2EB4;
    case 614u: goto L_089C2EC4;
    case 615u: goto L_089C2EDC;
    case 616u: goto L_089C2EF8;
    case 617u: goto L_089C2F08;
    case 618u: goto L_089C2F1C;
    case 619u: goto L_089C2F28;
    case 620u: goto L_089C2F34;
    case 621u: goto L_089C2F44;
    case 622u: goto L_089C2F5C;
    case 623u: goto L_089C2F78;
    case 624u: goto L_089C2F88;
    case 625u: goto L_089C2F9C;
    case 626u: goto L_089C2FAC;
    case 627u: goto L_089C2FBC;
    case 628u: goto L_089C2FD4;
    case 629u: goto L_089C2FF0;
    case 630u: goto L_089C3000;
    case 631u: goto L_089C3014;
    case 632u: goto L_089C3020;
    case 633u: goto L_089C3030;
    case 634u: goto L_089C3048;
    case 635u: goto L_089C3064;
    case 636u: goto L_089C3074;
    case 637u: goto L_089C3088;
    case 638u: goto L_089C3094;
    case 639u: goto L_089C30A4;
    case 640u: goto L_089C30BC;
    case 641u: goto L_089C30D8;
    case 642u: goto L_089C30E8;
    case 643u: goto L_089C30FC;
    case 644u: goto L_089C3108;
    case 645u: goto L_089C311C;
    case 646u: goto L_089C312C;
    case 647u: goto L_089C3144;
    case 648u: goto L_089C3160;
    case 649u: goto L_089C3170;
    case 650u: goto L_089C3184;
    case 651u: goto L_089C3194;
    case 652u: goto L_089C31A4;
    case 653u: goto L_089C31BC;
    case 654u: goto L_089C31D8;
    case 655u: goto L_089C31E8;
    case 656u: goto L_089C31FC;
    case 657u: goto L_089C3208;
    case 658u: goto L_089C3218;
    case 659u: goto L_089C3230;
    case 660u: goto L_089C324C;
    case 661u: goto L_089C325C;
    case 662u: goto L_089C3270;
    case 663u: goto L_089C327C;
    case 664u: goto L_089C328C;
    case 665u: goto L_089C32A4;
    case 666u: goto L_089C32C0;
    case 667u: goto L_089C32D0;
    case 668u: goto L_089C32E4;
    case 669u: goto L_089C32F0;
    case 670u: goto L_089C32FC;
    case 671u: goto L_089C330C;
    case 672u: goto L_089C3324;
    case 673u: goto L_089C3340;
    case 674u: goto L_089C3350;
    case 675u: goto L_089C3364;
    case 676u: goto L_089C3374;
    case 677u: goto L_089C3384;
    case 678u: goto L_089C339C;
    case 679u: goto L_089C33B8;
    case 680u: goto L_089C33C8;
    case 681u: goto L_089C33DC;
    case 682u: goto L_089C33E8;
    case 683u: goto L_089C33F8;
    case 684u: goto L_089C3410;
    case 685u: goto L_089C342C;
    case 686u: goto L_089C343C;
    case 687u: goto L_089C3450;
    case 688u: goto L_089C345C;
    case 689u: goto L_089C346C;
    case 690u: goto L_089C3484;
    case 691u: goto L_089C34A0;
    case 692u: goto L_089C34B0;
    case 693u: goto L_089C34C4;
    case 694u: goto L_089C34D0;
    case 695u: goto L_089C34DC;
    case 696u: goto L_089C34EC;
    case 697u: goto L_089C3504;
    case 698u: goto L_089C3520;
    case 699u: goto L_089C3530;
    case 700u: goto L_089C3544;
    case 701u: goto L_089C3554;
    case 702u: goto L_089C3564;
    case 703u: goto L_089C357C;
    case 704u: goto L_089C3598;
    case 705u: goto L_089C35A8;
    case 706u: goto L_089C35BC;
    case 707u: goto L_089C35C8;
    case 708u: goto L_089C35D8;
    case 709u: goto L_089C35F0;
    case 710u: goto L_089C360C;
    case 711u: goto L_089C361C;
    case 712u: goto L_089C3630;
    case 713u: goto L_089C363C;
    case 714u: goto L_089C364C;
    case 715u: goto L_089C3664;
    case 716u: goto L_089C3680;
    case 717u: goto L_089C3690;
    case 718u: goto L_089C36A4;
    case 719u: goto L_089C36B0;
    case 720u: goto L_089C36BC;
    case 721u: goto L_089C36CC;
    case 722u: goto L_089C36E4;
    case 723u: goto L_089C3700;
    case 724u: goto L_089C3710;
    case 725u: goto L_089C3724;
    case 726u: goto L_089C3734;
    case 727u: goto L_089C3744;
    case 728u: goto L_089C375C;
    case 729u: goto L_089C3778;
    case 730u: goto L_089C3788;
    case 731u: goto L_089C379C;
    case 732u: goto L_089C37A8;
    case 733u: goto L_089C37B8;
    case 734u: goto L_089C37D0;
    case 735u: goto L_089C37EC;
    case 736u: goto L_089C37FC;
    case 737u: goto L_089C3810;
    case 738u: goto L_089C381C;
    case 739u: goto L_089C382C;
    case 740u: goto L_089C3844;
    case 741u: goto L_089C3860;
    case 742u: goto L_089C3870;
    case 743u: goto L_089C3884;
    case 744u: goto L_089C3890;
    case 745u: goto L_089C38DC;
    case 746u: goto L_089C3928;
    case 747u: goto L_089C3974;
    case 748u: goto L_089C39C0;
    case 749u: goto L_089C3A0C;
    case 750u: goto L_089C3A58;
    case 751u: goto L_089C3AA4;
    case 752u: goto L_089C3AF0;
    case 753u: goto L_089C3B3C;
    case 754u: goto L_089C3B88;
    case 755u: goto L_089C3BD4;
    case 756u: goto L_089C3C20;
    case 757u: goto L_089C3C6C;
    case 758u: goto L_089C3CB8;
    case 759u: goto L_089C3D0C;
    case 760u: goto L_089C3D14;
    case 761u: goto L_089C3D40;
    default:
        if (local_transfers == 0u) rt.unsupported(ctx.pc, 0u, "invalid internal function entry");
        else ctx.pc = local_pc;
        return;
    }
    }
L_089C0000:
    ctx.fpr[0] = static_cast<float>(static_cast<std::int32_t>(ctx.fpr_bits(0)));
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_089C0024;
      }
      goto L_089C000C;
    }
L_089C000C:
    ctx.set_gpr(4, ctx.gpr[3] >> 1u);
    ctx.set_gpr(3, ctx.gpr[3] & 1u);
    ctx.set_gpr(4, ctx.gpr[4] | ctx.gpr[3]);
    ctx.fpr[0] = std::bit_cast<float>(ctx.gpr[4]);
    ctx.fpr[0] = static_cast<float>(static_cast<std::int32_t>(ctx.fpr_bits(0)));
    ctx.fpr[0] = ctx.fpr[0] + ctx.fpr[0];
    goto L_089C0024;
L_089C0024:
    { const float fs = ctx.fpr[0]; const float ft = ctx.fpr[25]; if ((std::isinf(fs) && ft == 0.0f) || (std::isinf(ft) && fs == 0.0f)) ctx.set_fpr_bits(1, 0x7FC00000u); else ctx.fpr[1] = fs * ft; }
    ctx.set_gpr(3, 20224u << 16u);
    ctx.fpr[0] = std::bit_cast<float>(ctx.gpr[3]);
    ctx.set_fpu_condition((ctx.fpr[0] <= ctx.fpr[1]));
    // nop
    { const bool branch_taken = ctx.fpu_condition();
    // nop
      if (branch_taken) {
          goto L_089C0050;
      }
      goto L_089C0040;
    }
L_089C0040:
    ctx.set_fpr_bits(0, ctx.fpu_float_to_word(ctx.fpr[1], 1u));
    ctx.set_gpr(6, std::bit_cast<std::uint32_t>(ctx.fpr[0]));
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_089C0064;
      }
      goto L_089C0050;
    }
L_089C0050:
    ctx.fpr[0] = ctx.fpr[1] - ctx.fpr[0];
    ctx.set_fpr_bits(0, ctx.fpu_float_to_word(ctx.fpr[0], 1u));
    ctx.set_gpr(4, std::bit_cast<std::uint32_t>(ctx.fpr[0]));
    ctx.set_gpr(3, 0u + static_cast<std::uint32_t>(-32768));
    ctx.set_gpr(6, ctx.gpr[4] | ctx.gpr[3]);
    goto L_089C0064;
L_089C0064:
    ctx.set_gpr(3, rt.memory().aot_load8(ctx.gpr[2] + static_cast<std::uint32_t>(2)));
    { const bool branch_taken = static_cast<std::int32_t>(ctx.gpr[3]) < 0;
    // nop
      if (branch_taken) {
          goto L_089C0080;
      }
      goto L_089C0070;
    }
L_089C0070:
    ctx.fpr[0] = std::bit_cast<float>(ctx.gpr[3]);
    ctx.fpr[0] = static_cast<float>(static_cast<std::int32_t>(ctx.fpr_bits(0)));
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_089C0098;
      }
      goto L_089C0080;
    }
L_089C0080:
    ctx.set_gpr(4, ctx.gpr[3] >> 1u);
    ctx.set_gpr(3, ctx.gpr[3] & 1u);
    ctx.set_gpr(4, ctx.gpr[4] | ctx.gpr[3]);
    ctx.fpr[0] = std::bit_cast<float>(ctx.gpr[4]);
    ctx.fpr[0] = static_cast<float>(static_cast<std::int32_t>(ctx.fpr_bits(0)));
    ctx.fpr[0] = ctx.fpr[0] + ctx.fpr[0];
    goto L_089C0098;
L_089C0098:
    { const float fs = ctx.fpr[0]; const float ft = ctx.fpr[25]; if ((std::isinf(fs) && ft == 0.0f) || (std::isinf(ft) && fs == 0.0f)) ctx.set_fpr_bits(1, 0x7FC00000u); else ctx.fpr[1] = fs * ft; }
    ctx.set_gpr(3, 20224u << 16u);
    ctx.fpr[0] = std::bit_cast<float>(ctx.gpr[3]);
    ctx.set_fpu_condition((ctx.fpr[0] <= ctx.fpr[1]));
    // nop
    { const bool branch_taken = ctx.fpu_condition();
    // nop
      if (branch_taken) {
          goto L_089C00C4;
      }
      goto L_089C00B4;
    }
L_089C00B4:
    ctx.set_fpr_bits(0, ctx.fpu_float_to_word(ctx.fpr[1], 1u));
    ctx.set_gpr(7, std::bit_cast<std::uint32_t>(ctx.fpr[0]));
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_089C00D8;
      }
      goto L_089C00C4;
    }
L_089C00C4:
    ctx.fpr[0] = ctx.fpr[1] - ctx.fpr[0];
    ctx.set_fpr_bits(0, ctx.fpu_float_to_word(ctx.fpr[0], 1u));
    ctx.set_gpr(4, std::bit_cast<std::uint32_t>(ctx.fpr[0]));
    ctx.set_gpr(3, 0u + static_cast<std::uint32_t>(-32768));
    ctx.set_gpr(7, ctx.gpr[4] | ctx.gpr[3]);
    goto L_089C00D8;
L_089C00D8:
    ctx.set_gpr(2, rt.memory().aot_load8(ctx.gpr[2] + static_cast<std::uint32_t>(3)));
    { const bool branch_taken = static_cast<std::int32_t>(ctx.gpr[2]) < 0;
    // nop
      if (branch_taken) {
          goto L_089C00F4;
      }
      goto L_089C00E4;
    }
L_089C00E4:
    ctx.fpr[0] = std::bit_cast<float>(ctx.gpr[2]);
    ctx.fpr[0] = static_cast<float>(static_cast<std::int32_t>(ctx.fpr_bits(0)));
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_089C010C;
      }
      goto L_089C00F4;
    }
L_089C00F4:
    ctx.set_gpr(3, ctx.gpr[2] >> 1u);
    ctx.set_gpr(2, ctx.gpr[2] & 1u);
    ctx.set_gpr(3, ctx.gpr[3] | ctx.gpr[2]);
    ctx.fpr[0] = std::bit_cast<float>(ctx.gpr[3]);
    ctx.fpr[0] = static_cast<float>(static_cast<std::int32_t>(ctx.fpr_bits(0)));
    ctx.fpr[0] = ctx.fpr[0] + ctx.fpr[0];
    goto L_089C010C;
L_089C010C:
    { const float fs = ctx.fpr[0]; const float ft = ctx.fpr[25]; if ((std::isinf(fs) && ft == 0.0f) || (std::isinf(ft) && fs == 0.0f)) ctx.set_fpr_bits(1, 0x7FC00000u); else ctx.fpr[1] = fs * ft; }
    ctx.set_gpr(2, 20224u << 16u);
    ctx.fpr[0] = std::bit_cast<float>(ctx.gpr[2]);
    ctx.set_fpu_condition((ctx.fpr[0] <= ctx.fpr[1]));
    // nop
    { const bool branch_taken = ctx.fpu_condition();
    // nop
      if (branch_taken) {
          goto L_089C0138;
      }
      goto L_089C0128;
    }
L_089C0128:
    ctx.set_fpr_bits(0, ctx.fpu_float_to_word(ctx.fpr[1], 1u));
    ctx.set_gpr(8, std::bit_cast<std::uint32_t>(ctx.fpr[0]));
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_089C014C;
      }
      goto L_089C0138;
    }
L_089C0138:
    ctx.fpr[0] = ctx.fpr[1] - ctx.fpr[0];
    ctx.set_fpr_bits(0, ctx.fpu_float_to_word(ctx.fpr[0], 1u));
    ctx.set_gpr(3, std::bit_cast<std::uint32_t>(ctx.fpr[0]));
    ctx.set_gpr(2, 0u + static_cast<std::uint32_t>(-32768));
    ctx.set_gpr(8, ctx.gpr[3] | ctx.gpr[2]);
    goto L_089C014C;
L_089C014C:
    ctx.set_gpr(4, ctx.gpr[29] + static_cast<std::uint32_t>(548));
    ctx.set_gpr(31, 0x089C0158u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0112_entry, 112u, 41u, 0x089C4700u>(ctx, &aot_mem) && ctx.pc == 0x089C0158u) goto L_089C0158;
    return;
L_089C0158:
    ctx.set_gpr(2, rt.memory().aot_load8(ctx.gpr[29] + static_cast<std::uint32_t>(548)));
    { const bool branch_taken = static_cast<std::int32_t>(ctx.gpr[2]) < 0;
    // nop
      if (branch_taken) {
          goto L_089C0174;
      }
      goto L_089C0164;
    }
L_089C0164:
    ctx.fpr[0] = std::bit_cast<float>(ctx.gpr[2]);
    ctx.fpr[0] = static_cast<float>(static_cast<std::int32_t>(ctx.fpr_bits(0)));
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_089C018C;
      }
      goto L_089C0174;
    }
L_089C0174:
    ctx.set_gpr(3, ctx.gpr[2] >> 1u);
    ctx.set_gpr(2, ctx.gpr[2] & 1u);
    ctx.set_gpr(3, ctx.gpr[3] | ctx.gpr[2]);
    ctx.fpr[0] = std::bit_cast<float>(ctx.gpr[3]);
    ctx.fpr[0] = static_cast<float>(static_cast<std::int32_t>(ctx.fpr_bits(0)));
    ctx.fpr[0] = ctx.fpr[0] + ctx.fpr[0];
    goto L_089C018C;
L_089C018C:
    { const float fs = ctx.fpr[0]; const float ft = ctx.fpr[20]; if ((std::isinf(fs) && ft == 0.0f) || (std::isinf(ft) && fs == 0.0f)) ctx.set_fpr_bits(1, 0x7FC00000u); else ctx.fpr[1] = fs * ft; }
    ctx.set_gpr(2, 20224u << 16u);
    ctx.fpr[0] = std::bit_cast<float>(ctx.gpr[2]);
    ctx.set_fpu_condition((ctx.fpr[0] <= ctx.fpr[1]));
    // nop
    { const bool branch_taken = ctx.fpu_condition();
    // nop
      if (branch_taken) {
          goto L_089C01B8;
      }
      goto L_089C01A8;
    }
L_089C01A8:
    ctx.set_fpr_bits(0, ctx.fpu_float_to_word(ctx.fpr[1], 1u));
    ctx.set_gpr(2, std::bit_cast<std::uint32_t>(ctx.fpr[0]));
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_089C01CC;
      }
      goto L_089C01B8;
    }
L_089C01B8:
    ctx.fpr[0] = ctx.fpr[1] - ctx.fpr[0];
    ctx.set_fpr_bits(0, ctx.fpu_float_to_word(ctx.fpr[0], 1u));
    ctx.set_gpr(3, std::bit_cast<std::uint32_t>(ctx.fpr[0]));
    ctx.set_gpr(2, 0u + static_cast<std::uint32_t>(-32768));
    ctx.set_gpr(2, ctx.gpr[3] | ctx.gpr[2]);
    goto L_089C01CC;
L_089C01CC:
    ctx.set_gpr(5, ctx.gpr[2] & 255u);
    ctx.set_gpr(2, rt.memory().aot_load8(ctx.gpr[29] + static_cast<std::uint32_t>(549)));
    { const bool branch_taken = static_cast<std::int32_t>(ctx.gpr[2]) < 0;
    // nop
      if (branch_taken) {
          goto L_089C01EC;
      }
      goto L_089C01DC;
    }
L_089C01DC:
    ctx.fpr[0] = std::bit_cast<float>(ctx.gpr[2]);
    ctx.fpr[0] = static_cast<float>(static_cast<std::int32_t>(ctx.fpr_bits(0)));
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_089C0204;
      }
      goto L_089C01EC;
    }
L_089C01EC:
    ctx.set_gpr(3, ctx.gpr[2] >> 1u);
    ctx.set_gpr(2, ctx.gpr[2] & 1u);
    ctx.set_gpr(3, ctx.gpr[3] | ctx.gpr[2]);
    ctx.fpr[0] = std::bit_cast<float>(ctx.gpr[3]);
    ctx.fpr[0] = static_cast<float>(static_cast<std::int32_t>(ctx.fpr_bits(0)));
    ctx.fpr[0] = ctx.fpr[0] + ctx.fpr[0];
    goto L_089C0204;
L_089C0204:
    { const float fs = ctx.fpr[0]; const float ft = ctx.fpr[20]; if ((std::isinf(fs) && ft == 0.0f) || (std::isinf(ft) && fs == 0.0f)) ctx.set_fpr_bits(1, 0x7FC00000u); else ctx.fpr[1] = fs * ft; }
    ctx.set_gpr(2, 20224u << 16u);
    ctx.fpr[0] = std::bit_cast<float>(ctx.gpr[2]);
    ctx.set_fpu_condition((ctx.fpr[0] <= ctx.fpr[1]));
    // nop
    { const bool branch_taken = ctx.fpu_condition();
    // nop
      if (branch_taken) {
          goto L_089C0230;
      }
      goto L_089C0220;
    }
L_089C0220:
    ctx.set_fpr_bits(0, ctx.fpu_float_to_word(ctx.fpr[1], 1u));
    ctx.set_gpr(6, std::bit_cast<std::uint32_t>(ctx.fpr[0]));
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_089C0244;
      }
      goto L_089C0230;
    }
L_089C0230:
    ctx.fpr[0] = ctx.fpr[1] - ctx.fpr[0];
    ctx.set_fpr_bits(0, ctx.fpu_float_to_word(ctx.fpr[0], 1u));
    ctx.set_gpr(3, std::bit_cast<std::uint32_t>(ctx.fpr[0]));
    ctx.set_gpr(2, 0u + static_cast<std::uint32_t>(-32768));
    ctx.set_gpr(6, ctx.gpr[3] | ctx.gpr[2]);
    goto L_089C0244;
L_089C0244:
    ctx.set_gpr(2, rt.memory().aot_load8(ctx.gpr[29] + static_cast<std::uint32_t>(550)));
    { const bool branch_taken = static_cast<std::int32_t>(ctx.gpr[2]) < 0;
    // nop
      if (branch_taken) {
          goto L_089C0260;
      }
      goto L_089C0250;
    }
L_089C0250:
    ctx.fpr[0] = std::bit_cast<float>(ctx.gpr[2]);
    ctx.fpr[0] = static_cast<float>(static_cast<std::int32_t>(ctx.fpr_bits(0)));
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_089C0278;
      }
      goto L_089C0260;
    }
L_089C0260:
    ctx.set_gpr(3, ctx.gpr[2] >> 1u);
    ctx.set_gpr(2, ctx.gpr[2] & 1u);
    ctx.set_gpr(3, ctx.gpr[3] | ctx.gpr[2]);
    ctx.fpr[0] = std::bit_cast<float>(ctx.gpr[3]);
    ctx.fpr[0] = static_cast<float>(static_cast<std::int32_t>(ctx.fpr_bits(0)));
    ctx.fpr[0] = ctx.fpr[0] + ctx.fpr[0];
    goto L_089C0278;
L_089C0278:
    { const float fs = ctx.fpr[0]; const float ft = ctx.fpr[20]; if ((std::isinf(fs) && ft == 0.0f) || (std::isinf(ft) && fs == 0.0f)) ctx.set_fpr_bits(1, 0x7FC00000u); else ctx.fpr[1] = fs * ft; }
    ctx.set_gpr(2, 20224u << 16u);
    ctx.fpr[0] = std::bit_cast<float>(ctx.gpr[2]);
    ctx.set_fpu_condition((ctx.fpr[0] <= ctx.fpr[1]));
    // nop
    { const bool branch_taken = ctx.fpu_condition();
    // nop
      if (branch_taken) {
          goto L_089C02A4;
      }
      goto L_089C0294;
    }
L_089C0294:
    ctx.set_fpr_bits(0, ctx.fpu_float_to_word(ctx.fpr[1], 1u));
    ctx.set_gpr(7, std::bit_cast<std::uint32_t>(ctx.fpr[0]));
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_089C02B8;
      }
      goto L_089C02A4;
    }
L_089C02A4:
    ctx.fpr[0] = ctx.fpr[1] - ctx.fpr[0];
    ctx.set_fpr_bits(0, ctx.fpu_float_to_word(ctx.fpr[0], 1u));
    ctx.set_gpr(3, std::bit_cast<std::uint32_t>(ctx.fpr[0]));
    ctx.set_gpr(2, 0u + static_cast<std::uint32_t>(-32768));
    ctx.set_gpr(7, ctx.gpr[3] | ctx.gpr[2]);
    goto L_089C02B8;
L_089C02B8:
    ctx.set_gpr(2, rt.memory().aot_load8(ctx.gpr[29] + static_cast<std::uint32_t>(551)));
    { const bool branch_taken = static_cast<std::int32_t>(ctx.gpr[2]) < 0;
    // nop
      if (branch_taken) {
          goto L_089C02D4;
      }
      goto L_089C02C4;
    }
L_089C02C4:
    ctx.fpr[0] = std::bit_cast<float>(ctx.gpr[2]);
    ctx.fpr[0] = static_cast<float>(static_cast<std::int32_t>(ctx.fpr_bits(0)));
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_089C02EC;
      }
      goto L_089C02D4;
    }
L_089C02D4:
    ctx.set_gpr(3, ctx.gpr[2] >> 1u);
    ctx.set_gpr(2, ctx.gpr[2] & 1u);
    ctx.set_gpr(3, ctx.gpr[3] | ctx.gpr[2]);
    ctx.fpr[0] = std::bit_cast<float>(ctx.gpr[3]);
    ctx.fpr[0] = static_cast<float>(static_cast<std::int32_t>(ctx.fpr_bits(0)));
    ctx.fpr[0] = ctx.fpr[0] + ctx.fpr[0];
    goto L_089C02EC;
L_089C02EC:
    { const float fs = ctx.fpr[0]; const float ft = ctx.fpr[20]; if ((std::isinf(fs) && ft == 0.0f) || (std::isinf(ft) && fs == 0.0f)) ctx.set_fpr_bits(1, 0x7FC00000u); else ctx.fpr[1] = fs * ft; }
    ctx.set_gpr(2, 20224u << 16u);
    ctx.fpr[0] = std::bit_cast<float>(ctx.gpr[2]);
    ctx.set_fpu_condition((ctx.fpr[0] <= ctx.fpr[1]));
    // nop
    { const bool branch_taken = ctx.fpu_condition();
    // nop
      if (branch_taken) {
          goto L_089C0318;
      }
      goto L_089C0308;
    }
L_089C0308:
    ctx.set_fpr_bits(0, ctx.fpu_float_to_word(ctx.fpr[1], 1u));
    ctx.set_gpr(8, std::bit_cast<std::uint32_t>(ctx.fpr[0]));
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_089C032C;
      }
      goto L_089C0318;
    }
L_089C0318:
    ctx.fpr[0] = ctx.fpr[1] - ctx.fpr[0];
    ctx.set_fpr_bits(0, ctx.fpu_float_to_word(ctx.fpr[0], 1u));
    ctx.set_gpr(3, std::bit_cast<std::uint32_t>(ctx.fpr[0]));
    ctx.set_gpr(2, 0u + static_cast<std::uint32_t>(-32768));
    ctx.set_gpr(8, ctx.gpr[3] | ctx.gpr[2]);
    goto L_089C032C;
L_089C032C:
    ctx.set_gpr(4, ctx.gpr[29] + static_cast<std::uint32_t>(552));
    ctx.set_gpr(31, 0x089C0338u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0112_entry, 112u, 41u, 0x089C4700u>(ctx, &aot_mem) && ctx.pc == 0x089C0338u) goto L_089C0338;
    return;
L_089C0338:
    ctx.set_gpr(3, rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(1476)));
    ctx.set_gpr(2, ctx.gpr[3] << 1u);
    ctx.set_gpr(2, ctx.gpr[2] + ctx.gpr[3]);
    ctx.set_gpr(2, ctx.gpr[2] << 2u);
    ctx.set_gpr(2, ctx.gpr[2] + ctx.gpr[3]);
    ctx.set_gpr(2, ctx.gpr[18] + ctx.gpr[2]);
    ctx.set_gpr(3, rt.memory().aot_load8(ctx.gpr[2] + static_cast<std::uint32_t>(0)));
    { const bool branch_taken = static_cast<std::int32_t>(ctx.gpr[3]) < 0;
    // nop
      if (branch_taken) {
          goto L_089C036C;
      }
      goto L_089C035C;
    }
L_089C035C:
    ctx.fpr[0] = std::bit_cast<float>(ctx.gpr[3]);
    ctx.fpr[0] = static_cast<float>(static_cast<std::int32_t>(ctx.fpr_bits(0)));
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_089C0384;
      }
      goto L_089C036C;
    }
L_089C036C:
    ctx.set_gpr(4, ctx.gpr[3] >> 1u);
    ctx.set_gpr(3, ctx.gpr[3] & 1u);
    ctx.set_gpr(4, ctx.gpr[4] | ctx.gpr[3]);
    ctx.fpr[0] = std::bit_cast<float>(ctx.gpr[4]);
    ctx.fpr[0] = static_cast<float>(static_cast<std::int32_t>(ctx.fpr_bits(0)));
    ctx.fpr[0] = ctx.fpr[0] + ctx.fpr[0];
    goto L_089C0384;
L_089C0384:
    { const float fs = ctx.fpr[0]; const float ft = ctx.fpr[26]; if ((std::isinf(fs) && ft == 0.0f) || (std::isinf(ft) && fs == 0.0f)) ctx.set_fpr_bits(1, 0x7FC00000u); else ctx.fpr[1] = fs * ft; }
    ctx.set_gpr(3, 20224u << 16u);
    ctx.fpr[0] = std::bit_cast<float>(ctx.gpr[3]);
    ctx.set_fpu_condition((ctx.fpr[0] <= ctx.fpr[1]));
    // nop
    { const bool branch_taken = ctx.fpu_condition();
    // nop
      if (branch_taken) {
          goto L_089C03B0;
      }
      goto L_089C03A0;
    }
L_089C03A0:
    ctx.set_fpr_bits(0, ctx.fpu_float_to_word(ctx.fpr[1], 1u));
    ctx.set_gpr(3, std::bit_cast<std::uint32_t>(ctx.fpr[0]));
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_089C03C4;
      }
      goto L_089C03B0;
    }
L_089C03B0:
    ctx.fpr[0] = ctx.fpr[1] - ctx.fpr[0];
    ctx.set_fpr_bits(0, ctx.fpu_float_to_word(ctx.fpr[0], 1u));
    ctx.set_gpr(4, std::bit_cast<std::uint32_t>(ctx.fpr[0]));
    ctx.set_gpr(3, 0u + static_cast<std::uint32_t>(-32768));
    ctx.set_gpr(3, ctx.gpr[4] | ctx.gpr[3]);
    goto L_089C03C4;
L_089C03C4:
    ctx.set_gpr(5, ctx.gpr[3] & 255u);
    ctx.set_gpr(3, rt.memory().aot_load8(ctx.gpr[2] + static_cast<std::uint32_t>(1)));
    { const bool branch_taken = static_cast<std::int32_t>(ctx.gpr[3]) < 0;
    // nop
      if (branch_taken) {
          goto L_089C03E4;
      }
      goto L_089C03D4;
    }
L_089C03D4:
    ctx.fpr[0] = std::bit_cast<float>(ctx.gpr[3]);
    ctx.fpr[0] = static_cast<float>(static_cast<std::int32_t>(ctx.fpr_bits(0)));
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_089C03FC;
      }
      goto L_089C03E4;
    }
L_089C03E4:
    ctx.set_gpr(4, ctx.gpr[3] >> 1u);
    ctx.set_gpr(3, ctx.gpr[3] & 1u);
    ctx.set_gpr(4, ctx.gpr[4] | ctx.gpr[3]);
    ctx.fpr[0] = std::bit_cast<float>(ctx.gpr[4]);
    ctx.fpr[0] = static_cast<float>(static_cast<std::int32_t>(ctx.fpr_bits(0)));
    ctx.fpr[0] = ctx.fpr[0] + ctx.fpr[0];
    goto L_089C03FC;
L_089C03FC:
    { const float fs = ctx.fpr[0]; const float ft = ctx.fpr[26]; if ((std::isinf(fs) && ft == 0.0f) || (std::isinf(ft) && fs == 0.0f)) ctx.set_fpr_bits(1, 0x7FC00000u); else ctx.fpr[1] = fs * ft; }
    ctx.set_gpr(3, 20224u << 16u);
    ctx.fpr[0] = std::bit_cast<float>(ctx.gpr[3]);
    ctx.set_fpu_condition((ctx.fpr[0] <= ctx.fpr[1]));
    // nop
    { const bool branch_taken = ctx.fpu_condition();
    // nop
      if (branch_taken) {
          goto L_089C0428;
      }
      goto L_089C0418;
    }
L_089C0418:
    ctx.set_fpr_bits(0, ctx.fpu_float_to_word(ctx.fpr[1], 1u));
    ctx.set_gpr(6, std::bit_cast<std::uint32_t>(ctx.fpr[0]));
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_089C043C;
      }
      goto L_089C0428;
    }
L_089C0428:
    ctx.fpr[0] = ctx.fpr[1] - ctx.fpr[0];
    ctx.set_fpr_bits(0, ctx.fpu_float_to_word(ctx.fpr[0], 1u));
    ctx.set_gpr(4, std::bit_cast<std::uint32_t>(ctx.fpr[0]));
    ctx.set_gpr(3, 0u + static_cast<std::uint32_t>(-32768));
    ctx.set_gpr(6, ctx.gpr[4] | ctx.gpr[3]);
    goto L_089C043C;
L_089C043C:
    ctx.set_gpr(3, rt.memory().aot_load8(ctx.gpr[2] + static_cast<std::uint32_t>(2)));
    { const bool branch_taken = static_cast<std::int32_t>(ctx.gpr[3]) < 0;
    // nop
      if (branch_taken) {
          goto L_089C0458;
      }
      goto L_089C0448;
    }
L_089C0448:
    ctx.fpr[0] = std::bit_cast<float>(ctx.gpr[3]);
    ctx.fpr[0] = static_cast<float>(static_cast<std::int32_t>(ctx.fpr_bits(0)));
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_089C0470;
      }
      goto L_089C0458;
    }
L_089C0458:
    ctx.set_gpr(4, ctx.gpr[3] >> 1u);
    ctx.set_gpr(3, ctx.gpr[3] & 1u);
    ctx.set_gpr(4, ctx.gpr[4] | ctx.gpr[3]);
    ctx.fpr[0] = std::bit_cast<float>(ctx.gpr[4]);
    ctx.fpr[0] = static_cast<float>(static_cast<std::int32_t>(ctx.fpr_bits(0)));
    ctx.fpr[0] = ctx.fpr[0] + ctx.fpr[0];
    goto L_089C0470;
L_089C0470:
    { const float fs = ctx.fpr[0]; const float ft = ctx.fpr[26]; if ((std::isinf(fs) && ft == 0.0f) || (std::isinf(ft) && fs == 0.0f)) ctx.set_fpr_bits(1, 0x7FC00000u); else ctx.fpr[1] = fs * ft; }
    ctx.set_gpr(3, 20224u << 16u);
    ctx.fpr[0] = std::bit_cast<float>(ctx.gpr[3]);
    ctx.set_fpu_condition((ctx.fpr[0] <= ctx.fpr[1]));
    // nop
    { const bool branch_taken = ctx.fpu_condition();
    // nop
      if (branch_taken) {
          goto L_089C049C;
      }
      goto L_089C048C;
    }
L_089C048C:
    ctx.set_fpr_bits(0, ctx.fpu_float_to_word(ctx.fpr[1], 1u));
    ctx.set_gpr(7, std::bit_cast<std::uint32_t>(ctx.fpr[0]));
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_089C04B0;
      }
      goto L_089C049C;
    }
L_089C049C:
    ctx.fpr[0] = ctx.fpr[1] - ctx.fpr[0];
    ctx.set_fpr_bits(0, ctx.fpu_float_to_word(ctx.fpr[0], 1u));
    ctx.set_gpr(4, std::bit_cast<std::uint32_t>(ctx.fpr[0]));
    ctx.set_gpr(3, 0u + static_cast<std::uint32_t>(-32768));
    ctx.set_gpr(7, ctx.gpr[4] | ctx.gpr[3]);
    goto L_089C04B0;
L_089C04B0:
    ctx.set_gpr(2, rt.memory().aot_load8(ctx.gpr[2] + static_cast<std::uint32_t>(3)));
    { const bool branch_taken = static_cast<std::int32_t>(ctx.gpr[2]) < 0;
    // nop
      if (branch_taken) {
          goto L_089C04CC;
      }
      goto L_089C04BC;
    }
L_089C04BC:
    ctx.fpr[0] = std::bit_cast<float>(ctx.gpr[2]);
    ctx.fpr[0] = static_cast<float>(static_cast<std::int32_t>(ctx.fpr_bits(0)));
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_089C04E4;
      }
      goto L_089C04CC;
    }
L_089C04CC:
    ctx.set_gpr(3, ctx.gpr[2] >> 1u);
    ctx.set_gpr(2, ctx.gpr[2] & 1u);
    ctx.set_gpr(3, ctx.gpr[3] | ctx.gpr[2]);
    ctx.fpr[0] = std::bit_cast<float>(ctx.gpr[3]);
    ctx.fpr[0] = static_cast<float>(static_cast<std::int32_t>(ctx.fpr_bits(0)));
    ctx.fpr[0] = ctx.fpr[0] + ctx.fpr[0];
    goto L_089C04E4;
L_089C04E4:
    { const float fs = ctx.fpr[0]; const float ft = ctx.fpr[26]; if ((std::isinf(fs) && ft == 0.0f) || (std::isinf(ft) && fs == 0.0f)) ctx.set_fpr_bits(1, 0x7FC00000u); else ctx.fpr[1] = fs * ft; }
    ctx.set_gpr(2, 20224u << 16u);
    ctx.fpr[0] = std::bit_cast<float>(ctx.gpr[2]);
    ctx.set_fpu_condition((ctx.fpr[0] <= ctx.fpr[1]));
    // nop
    { const bool branch_taken = ctx.fpu_condition();
    // nop
      if (branch_taken) {
          goto L_089C0510;
      }
      goto L_089C0500;
    }
L_089C0500:
    ctx.set_fpr_bits(0, ctx.fpu_float_to_word(ctx.fpr[1], 1u));
    ctx.set_gpr(8, std::bit_cast<std::uint32_t>(ctx.fpr[0]));
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_089C0524;
      }
      goto L_089C0510;
    }
L_089C0510:
    ctx.fpr[0] = ctx.fpr[1] - ctx.fpr[0];
    ctx.set_fpr_bits(0, ctx.fpu_float_to_word(ctx.fpr[0], 1u));
    ctx.set_gpr(3, std::bit_cast<std::uint32_t>(ctx.fpr[0]));
    ctx.set_gpr(2, 0u + static_cast<std::uint32_t>(-32768));
    ctx.set_gpr(8, ctx.gpr[3] | ctx.gpr[2]);
    goto L_089C0524;
L_089C0524:
    ctx.set_gpr(4, ctx.gpr[29] + static_cast<std::uint32_t>(556));
    ctx.set_gpr(31, 0x089C0530u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0112_entry, 112u, 41u, 0x089C4700u>(ctx, &aot_mem) && ctx.pc == 0x089C0530u) goto L_089C0530;
    return;
L_089C0530:
    ctx.set_gpr(2, rt.memory().aot_load8(ctx.gpr[29] + static_cast<std::uint32_t>(556)));
    { const bool branch_taken = static_cast<std::int32_t>(ctx.gpr[2]) < 0;
    // nop
      if (branch_taken) {
          goto L_089C054C;
      }
      goto L_089C053C;
    }
L_089C053C:
    ctx.fpr[0] = std::bit_cast<float>(ctx.gpr[2]);
    ctx.fpr[0] = static_cast<float>(static_cast<std::int32_t>(ctx.fpr_bits(0)));
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_089C0564;
      }
      goto L_089C054C;
    }
L_089C054C:
    ctx.set_gpr(3, ctx.gpr[2] >> 1u);
    ctx.set_gpr(2, ctx.gpr[2] & 1u);
    ctx.set_gpr(3, ctx.gpr[3] | ctx.gpr[2]);
    ctx.fpr[0] = std::bit_cast<float>(ctx.gpr[3]);
    ctx.fpr[0] = static_cast<float>(static_cast<std::int32_t>(ctx.fpr_bits(0)));
    ctx.fpr[0] = ctx.fpr[0] + ctx.fpr[0];
    goto L_089C0564;
L_089C0564:
    { const float fs = ctx.fpr[0]; const float ft = ctx.fpr[20]; if ((std::isinf(fs) && ft == 0.0f) || (std::isinf(ft) && fs == 0.0f)) ctx.set_fpr_bits(1, 0x7FC00000u); else ctx.fpr[1] = fs * ft; }
    ctx.set_gpr(2, 20224u << 16u);
    ctx.fpr[0] = std::bit_cast<float>(ctx.gpr[2]);
    ctx.set_fpu_condition((ctx.fpr[0] <= ctx.fpr[1]));
    // nop
    { const bool branch_taken = ctx.fpu_condition();
    // nop
      if (branch_taken) {
          goto L_089C0590;
      }
      goto L_089C0580;
    }
L_089C0580:
    ctx.set_fpr_bits(0, ctx.fpu_float_to_word(ctx.fpr[1], 1u));
    ctx.set_gpr(2, std::bit_cast<std::uint32_t>(ctx.fpr[0]));
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_089C05A4;
      }
      goto L_089C0590;
    }
L_089C0590:
    ctx.fpr[0] = ctx.fpr[1] - ctx.fpr[0];
    ctx.set_fpr_bits(0, ctx.fpu_float_to_word(ctx.fpr[0], 1u));
    ctx.set_gpr(3, std::bit_cast<std::uint32_t>(ctx.fpr[0]));
    ctx.set_gpr(2, 0u + static_cast<std::uint32_t>(-32768));
    ctx.set_gpr(2, ctx.gpr[3] | ctx.gpr[2]);
    goto L_089C05A4;
L_089C05A4:
    ctx.set_gpr(5, ctx.gpr[2] & 255u);
    ctx.set_gpr(2, rt.memory().aot_load8(ctx.gpr[29] + static_cast<std::uint32_t>(557)));
    { const bool branch_taken = static_cast<std::int32_t>(ctx.gpr[2]) < 0;
    // nop
      if (branch_taken) {
          goto L_089C05C4;
      }
      goto L_089C05B4;
    }
L_089C05B4:
    ctx.fpr[0] = std::bit_cast<float>(ctx.gpr[2]);
    ctx.fpr[0] = static_cast<float>(static_cast<std::int32_t>(ctx.fpr_bits(0)));
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_089C05DC;
      }
      goto L_089C05C4;
    }
L_089C05C4:
    ctx.set_gpr(3, ctx.gpr[2] >> 1u);
    ctx.set_gpr(2, ctx.gpr[2] & 1u);
    ctx.set_gpr(3, ctx.gpr[3] | ctx.gpr[2]);
    ctx.fpr[0] = std::bit_cast<float>(ctx.gpr[3]);
    ctx.fpr[0] = static_cast<float>(static_cast<std::int32_t>(ctx.fpr_bits(0)));
    ctx.fpr[0] = ctx.fpr[0] + ctx.fpr[0];
    goto L_089C05DC;
L_089C05DC:
    { const float fs = ctx.fpr[0]; const float ft = ctx.fpr[20]; if ((std::isinf(fs) && ft == 0.0f) || (std::isinf(ft) && fs == 0.0f)) ctx.set_fpr_bits(1, 0x7FC00000u); else ctx.fpr[1] = fs * ft; }
    ctx.set_gpr(2, 20224u << 16u);
    ctx.fpr[0] = std::bit_cast<float>(ctx.gpr[2]);
    ctx.set_fpu_condition((ctx.fpr[0] <= ctx.fpr[1]));
    // nop
    { const bool branch_taken = ctx.fpu_condition();
    // nop
      if (branch_taken) {
          goto L_089C0608;
      }
      goto L_089C05F8;
    }
L_089C05F8:
    ctx.set_fpr_bits(0, ctx.fpu_float_to_word(ctx.fpr[1], 1u));
    ctx.set_gpr(6, std::bit_cast<std::uint32_t>(ctx.fpr[0]));
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_089C061C;
      }
      goto L_089C0608;
    }
L_089C0608:
    ctx.fpr[0] = ctx.fpr[1] - ctx.fpr[0];
    ctx.set_fpr_bits(0, ctx.fpu_float_to_word(ctx.fpr[0], 1u));
    ctx.set_gpr(3, std::bit_cast<std::uint32_t>(ctx.fpr[0]));
    ctx.set_gpr(2, 0u + static_cast<std::uint32_t>(-32768));
    ctx.set_gpr(6, ctx.gpr[3] | ctx.gpr[2]);
    goto L_089C061C;
L_089C061C:
    ctx.set_gpr(2, rt.memory().aot_load8(ctx.gpr[29] + static_cast<std::uint32_t>(558)));
    { const bool branch_taken = static_cast<std::int32_t>(ctx.gpr[2]) < 0;
    // nop
      if (branch_taken) {
          goto L_089C0638;
      }
      goto L_089C0628;
    }
L_089C0628:
    ctx.fpr[0] = std::bit_cast<float>(ctx.gpr[2]);
    ctx.fpr[0] = static_cast<float>(static_cast<std::int32_t>(ctx.fpr_bits(0)));
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_089C0650;
      }
      goto L_089C0638;
    }
L_089C0638:
    ctx.set_gpr(3, ctx.gpr[2] >> 1u);
    ctx.set_gpr(2, ctx.gpr[2] & 1u);
    ctx.set_gpr(3, ctx.gpr[3] | ctx.gpr[2]);
    ctx.fpr[0] = std::bit_cast<float>(ctx.gpr[3]);
    ctx.fpr[0] = static_cast<float>(static_cast<std::int32_t>(ctx.fpr_bits(0)));
    ctx.fpr[0] = ctx.fpr[0] + ctx.fpr[0];
    goto L_089C0650;
L_089C0650:
    { const float fs = ctx.fpr[0]; const float ft = ctx.fpr[20]; if ((std::isinf(fs) && ft == 0.0f) || (std::isinf(ft) && fs == 0.0f)) ctx.set_fpr_bits(1, 0x7FC00000u); else ctx.fpr[1] = fs * ft; }
    ctx.set_gpr(2, 20224u << 16u);
    ctx.fpr[0] = std::bit_cast<float>(ctx.gpr[2]);
    ctx.set_fpu_condition((ctx.fpr[0] <= ctx.fpr[1]));
    // nop
    { const bool branch_taken = ctx.fpu_condition();
    // nop
      if (branch_taken) {
          goto L_089C067C;
      }
      goto L_089C066C;
    }
L_089C066C:
    ctx.set_fpr_bits(0, ctx.fpu_float_to_word(ctx.fpr[1], 1u));
    ctx.set_gpr(7, std::bit_cast<std::uint32_t>(ctx.fpr[0]));
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_089C0690;
      }
      goto L_089C067C;
    }
L_089C067C:
    ctx.fpr[0] = ctx.fpr[1] - ctx.fpr[0];
    ctx.set_fpr_bits(0, ctx.fpu_float_to_word(ctx.fpr[0], 1u));
    ctx.set_gpr(3, std::bit_cast<std::uint32_t>(ctx.fpr[0]));
    ctx.set_gpr(2, 0u + static_cast<std::uint32_t>(-32768));
    ctx.set_gpr(7, ctx.gpr[3] | ctx.gpr[2]);
    goto L_089C0690;
L_089C0690:
    ctx.set_gpr(2, rt.memory().aot_load8(ctx.gpr[29] + static_cast<std::uint32_t>(559)));
    { const bool branch_taken = static_cast<std::int32_t>(ctx.gpr[2]) < 0;
    // nop
      if (branch_taken) {
          goto L_089C06AC;
      }
      goto L_089C069C;
    }
L_089C069C:
    ctx.fpr[0] = std::bit_cast<float>(ctx.gpr[2]);
    ctx.fpr[0] = static_cast<float>(static_cast<std::int32_t>(ctx.fpr_bits(0)));
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_089C06C4;
      }
      goto L_089C06AC;
    }
L_089C06AC:
    ctx.set_gpr(3, ctx.gpr[2] >> 1u);
    ctx.set_gpr(2, ctx.gpr[2] & 1u);
    ctx.set_gpr(3, ctx.gpr[3] | ctx.gpr[2]);
    ctx.fpr[0] = std::bit_cast<float>(ctx.gpr[3]);
    ctx.fpr[0] = static_cast<float>(static_cast<std::int32_t>(ctx.fpr_bits(0)));
    ctx.fpr[0] = ctx.fpr[0] + ctx.fpr[0];
    goto L_089C06C4;
L_089C06C4:
    { const float fs = ctx.fpr[0]; const float ft = ctx.fpr[20]; if ((std::isinf(fs) && ft == 0.0f) || (std::isinf(ft) && fs == 0.0f)) ctx.set_fpr_bits(1, 0x7FC00000u); else ctx.fpr[1] = fs * ft; }
    ctx.set_gpr(2, 20224u << 16u);
    ctx.fpr[0] = std::bit_cast<float>(ctx.gpr[2]);
    ctx.set_fpu_condition((ctx.fpr[0] <= ctx.fpr[1]));
    // nop
    { const bool branch_taken = ctx.fpu_condition();
    // nop
      if (branch_taken) {
          goto L_089C06F0;
      }
      goto L_089C06E0;
    }
L_089C06E0:
    ctx.set_fpr_bits(0, ctx.fpu_float_to_word(ctx.fpr[1], 1u));
    ctx.set_gpr(8, std::bit_cast<std::uint32_t>(ctx.fpr[0]));
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_089C0704;
      }
      goto L_089C06F0;
    }
L_089C06F0:
    ctx.fpr[0] = ctx.fpr[1] - ctx.fpr[0];
    ctx.set_fpr_bits(0, ctx.fpu_float_to_word(ctx.fpr[0], 1u));
    ctx.set_gpr(3, std::bit_cast<std::uint32_t>(ctx.fpr[0]));
    ctx.set_gpr(2, 0u + static_cast<std::uint32_t>(-32768));
    ctx.set_gpr(8, ctx.gpr[3] | ctx.gpr[2]);
    goto L_089C0704;
L_089C0704:
    ctx.set_gpr(4, ctx.gpr[29] + static_cast<std::uint32_t>(560));
    ctx.set_gpr(31, 0x089C0710u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0112_entry, 112u, 41u, 0x089C4700u>(ctx, &aot_mem) && ctx.pc == 0x089C0710u) goto L_089C0710;
    return;
L_089C0710:
    ctx.set_gpr(3, rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(1476)));
    ctx.set_gpr(2, ctx.gpr[3] << 1u);
    ctx.set_gpr(2, ctx.gpr[2] + ctx.gpr[3]);
    ctx.set_gpr(2, ctx.gpr[2] << 2u);
    ctx.set_gpr(2, ctx.gpr[18] + ctx.gpr[2]);
    ctx.set_gpr(3, rt.memory().aot_load8(ctx.gpr[2] + static_cast<std::uint32_t>(0)));
    { const bool branch_taken = static_cast<std::int32_t>(ctx.gpr[3]) < 0;
    // nop
      if (branch_taken) {
          goto L_089C0740;
      }
      goto L_089C0730;
    }
L_089C0730:
    ctx.fpr[0] = std::bit_cast<float>(ctx.gpr[3]);
    ctx.fpr[0] = static_cast<float>(static_cast<std::int32_t>(ctx.fpr_bits(0)));
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_089C0758;
      }
      goto L_089C0740;
    }
L_089C0740:
    ctx.set_gpr(4, ctx.gpr[3] >> 1u);
    ctx.set_gpr(3, ctx.gpr[3] & 1u);
    ctx.set_gpr(4, ctx.gpr[4] | ctx.gpr[3]);
    ctx.fpr[0] = std::bit_cast<float>(ctx.gpr[4]);
    ctx.fpr[0] = static_cast<float>(static_cast<std::int32_t>(ctx.fpr_bits(0)));
    ctx.fpr[0] = ctx.fpr[0] + ctx.fpr[0];
    goto L_089C0758;
L_089C0758:
    { const float fs = ctx.fpr[0]; const float ft = ctx.fpr[27]; if ((std::isinf(fs) && ft == 0.0f) || (std::isinf(ft) && fs == 0.0f)) ctx.set_fpr_bits(1, 0x7FC00000u); else ctx.fpr[1] = fs * ft; }
    ctx.set_gpr(3, 20224u << 16u);
    ctx.fpr[0] = std::bit_cast<float>(ctx.gpr[3]);
    ctx.set_fpu_condition((ctx.fpr[0] <= ctx.fpr[1]));
    // nop
    { const bool branch_taken = ctx.fpu_condition();
    // nop
      if (branch_taken) {
          goto L_089C0784;
      }
      goto L_089C0774;
    }
L_089C0774:
    ctx.set_fpr_bits(0, ctx.fpu_float_to_word(ctx.fpr[1], 1u));
    ctx.set_gpr(3, std::bit_cast<std::uint32_t>(ctx.fpr[0]));
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_089C0798;
      }
      goto L_089C0784;
    }
L_089C0784:
    ctx.fpr[0] = ctx.fpr[1] - ctx.fpr[0];
    ctx.set_fpr_bits(0, ctx.fpu_float_to_word(ctx.fpr[0], 1u));
    ctx.set_gpr(4, std::bit_cast<std::uint32_t>(ctx.fpr[0]));
    ctx.set_gpr(3, 0u + static_cast<std::uint32_t>(-32768));
    ctx.set_gpr(3, ctx.gpr[4] | ctx.gpr[3]);
    goto L_089C0798;
L_089C0798:
    ctx.set_gpr(5, ctx.gpr[3] & 255u);
    ctx.set_gpr(3, rt.memory().aot_load8(ctx.gpr[2] + static_cast<std::uint32_t>(1)));
    { const bool branch_taken = static_cast<std::int32_t>(ctx.gpr[3]) < 0;
    // nop
      if (branch_taken) {
          goto L_089C07B8;
      }
      goto L_089C07A8;
    }
L_089C07A8:
    ctx.fpr[0] = std::bit_cast<float>(ctx.gpr[3]);
    ctx.fpr[0] = static_cast<float>(static_cast<std::int32_t>(ctx.fpr_bits(0)));
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_089C07D0;
      }
      goto L_089C07B8;
    }
L_089C07B8:
    ctx.set_gpr(4, ctx.gpr[3] >> 1u);
    ctx.set_gpr(3, ctx.gpr[3] & 1u);
    ctx.set_gpr(4, ctx.gpr[4] | ctx.gpr[3]);
    ctx.fpr[0] = std::bit_cast<float>(ctx.gpr[4]);
    ctx.fpr[0] = static_cast<float>(static_cast<std::int32_t>(ctx.fpr_bits(0)));
    ctx.fpr[0] = ctx.fpr[0] + ctx.fpr[0];
    goto L_089C07D0;
L_089C07D0:
    { const float fs = ctx.fpr[0]; const float ft = ctx.fpr[27]; if ((std::isinf(fs) && ft == 0.0f) || (std::isinf(ft) && fs == 0.0f)) ctx.set_fpr_bits(1, 0x7FC00000u); else ctx.fpr[1] = fs * ft; }
    ctx.set_gpr(3, 20224u << 16u);
    ctx.fpr[0] = std::bit_cast<float>(ctx.gpr[3]);
    ctx.set_fpu_condition((ctx.fpr[0] <= ctx.fpr[1]));
    // nop
    { const bool branch_taken = ctx.fpu_condition();
    // nop
      if (branch_taken) {
          goto L_089C07FC;
      }
      goto L_089C07EC;
    }
L_089C07EC:
    ctx.set_fpr_bits(0, ctx.fpu_float_to_word(ctx.fpr[1], 1u));
    ctx.set_gpr(6, std::bit_cast<std::uint32_t>(ctx.fpr[0]));
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_089C0810;
      }
      goto L_089C07FC;
    }
L_089C07FC:
    ctx.fpr[0] = ctx.fpr[1] - ctx.fpr[0];
    ctx.set_fpr_bits(0, ctx.fpu_float_to_word(ctx.fpr[0], 1u));
    ctx.set_gpr(4, std::bit_cast<std::uint32_t>(ctx.fpr[0]));
    ctx.set_gpr(3, 0u + static_cast<std::uint32_t>(-32768));
    ctx.set_gpr(6, ctx.gpr[4] | ctx.gpr[3]);
    goto L_089C0810;
L_089C0810:
    ctx.set_gpr(3, rt.memory().aot_load8(ctx.gpr[2] + static_cast<std::uint32_t>(2)));
    { const bool branch_taken = static_cast<std::int32_t>(ctx.gpr[3]) < 0;
    // nop
      if (branch_taken) {
          goto L_089C082C;
      }
      goto L_089C081C;
    }
L_089C081C:
    ctx.fpr[0] = std::bit_cast<float>(ctx.gpr[3]);
    ctx.fpr[0] = static_cast<float>(static_cast<std::int32_t>(ctx.fpr_bits(0)));
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_089C0844;
      }
      goto L_089C082C;
    }
L_089C082C:
    ctx.set_gpr(4, ctx.gpr[3] >> 1u);
    ctx.set_gpr(3, ctx.gpr[3] & 1u);
    ctx.set_gpr(4, ctx.gpr[4] | ctx.gpr[3]);
    ctx.fpr[0] = std::bit_cast<float>(ctx.gpr[4]);
    ctx.fpr[0] = static_cast<float>(static_cast<std::int32_t>(ctx.fpr_bits(0)));
    ctx.fpr[0] = ctx.fpr[0] + ctx.fpr[0];
    goto L_089C0844;
L_089C0844:
    { const float fs = ctx.fpr[0]; const float ft = ctx.fpr[27]; if ((std::isinf(fs) && ft == 0.0f) || (std::isinf(ft) && fs == 0.0f)) ctx.set_fpr_bits(1, 0x7FC00000u); else ctx.fpr[1] = fs * ft; }
    ctx.set_gpr(3, 20224u << 16u);
    ctx.fpr[0] = std::bit_cast<float>(ctx.gpr[3]);
    ctx.set_fpu_condition((ctx.fpr[0] <= ctx.fpr[1]));
    // nop
    { const bool branch_taken = ctx.fpu_condition();
    // nop
      if (branch_taken) {
          goto L_089C0870;
      }
      goto L_089C0860;
    }
L_089C0860:
    ctx.set_fpr_bits(0, ctx.fpu_float_to_word(ctx.fpr[1], 1u));
    ctx.set_gpr(7, std::bit_cast<std::uint32_t>(ctx.fpr[0]));
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_089C0884;
      }
      goto L_089C0870;
    }
L_089C0870:
    ctx.fpr[0] = ctx.fpr[1] - ctx.fpr[0];
    ctx.set_fpr_bits(0, ctx.fpu_float_to_word(ctx.fpr[0], 1u));
    ctx.set_gpr(4, std::bit_cast<std::uint32_t>(ctx.fpr[0]));
    ctx.set_gpr(3, 0u + static_cast<std::uint32_t>(-32768));
    ctx.set_gpr(7, ctx.gpr[4] | ctx.gpr[3]);
    goto L_089C0884;
L_089C0884:
    ctx.set_gpr(2, rt.memory().aot_load8(ctx.gpr[2] + static_cast<std::uint32_t>(3)));
    { const bool branch_taken = static_cast<std::int32_t>(ctx.gpr[2]) < 0;
    // nop
      if (branch_taken) {
          goto L_089C08A0;
      }
      goto L_089C0890;
    }
L_089C0890:
    ctx.fpr[0] = std::bit_cast<float>(ctx.gpr[2]);
    ctx.fpr[0] = static_cast<float>(static_cast<std::int32_t>(ctx.fpr_bits(0)));
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_089C08B8;
      }
      goto L_089C08A0;
    }
L_089C08A0:
    ctx.set_gpr(3, ctx.gpr[2] >> 1u);
    ctx.set_gpr(2, ctx.gpr[2] & 1u);
    ctx.set_gpr(3, ctx.gpr[3] | ctx.gpr[2]);
    ctx.fpr[0] = std::bit_cast<float>(ctx.gpr[3]);
    ctx.fpr[0] = static_cast<float>(static_cast<std::int32_t>(ctx.fpr_bits(0)));
    ctx.fpr[0] = ctx.fpr[0] + ctx.fpr[0];
    goto L_089C08B8;
L_089C08B8:
    { const float fs = ctx.fpr[0]; const float ft = ctx.fpr[27]; if ((std::isinf(fs) && ft == 0.0f) || (std::isinf(ft) && fs == 0.0f)) ctx.set_fpr_bits(1, 0x7FC00000u); else ctx.fpr[1] = fs * ft; }
    ctx.set_gpr(2, 20224u << 16u);
    ctx.fpr[0] = std::bit_cast<float>(ctx.gpr[2]);
    ctx.set_fpu_condition((ctx.fpr[0] <= ctx.fpr[1]));
    // nop
    { const bool branch_taken = ctx.fpu_condition();
    // nop
      if (branch_taken) {
          goto L_089C08E4;
      }
      goto L_089C08D4;
    }
L_089C08D4:
    ctx.set_fpr_bits(0, ctx.fpu_float_to_word(ctx.fpr[1], 1u));
    ctx.set_gpr(8, std::bit_cast<std::uint32_t>(ctx.fpr[0]));
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_089C08F8;
      }
      goto L_089C08E4;
    }
L_089C08E4:
    ctx.fpr[0] = ctx.fpr[1] - ctx.fpr[0];
    ctx.set_fpr_bits(0, ctx.fpu_float_to_word(ctx.fpr[0], 1u));
    ctx.set_gpr(3, std::bit_cast<std::uint32_t>(ctx.fpr[0]));
    ctx.set_gpr(2, 0u + static_cast<std::uint32_t>(-32768));
    ctx.set_gpr(8, ctx.gpr[3] | ctx.gpr[2]);
    goto L_089C08F8;
L_089C08F8:
    ctx.set_gpr(4, ctx.gpr[29] + static_cast<std::uint32_t>(564));
    ctx.set_gpr(31, 0x089C0904u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0112_entry, 112u, 41u, 0x089C4700u>(ctx, &aot_mem) && ctx.pc == 0x089C0904u) goto L_089C0904;
    return;
L_089C0904:
    ctx.set_gpr(2, rt.memory().aot_load8(ctx.gpr[29] + static_cast<std::uint32_t>(564)));
    { const bool branch_taken = static_cast<std::int32_t>(ctx.gpr[2]) < 0;
    // nop
      if (branch_taken) {
          goto L_089C0920;
      }
      goto L_089C0910;
    }
L_089C0910:
    ctx.fpr[0] = std::bit_cast<float>(ctx.gpr[2]);
    ctx.fpr[0] = static_cast<float>(static_cast<std::int32_t>(ctx.fpr_bits(0)));
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_089C0938;
      }
      goto L_089C0920;
    }
L_089C0920:
    ctx.set_gpr(3, ctx.gpr[2] >> 1u);
    ctx.set_gpr(2, ctx.gpr[2] & 1u);
    ctx.set_gpr(3, ctx.gpr[3] | ctx.gpr[2]);
    ctx.fpr[0] = std::bit_cast<float>(ctx.gpr[3]);
    ctx.fpr[0] = static_cast<float>(static_cast<std::int32_t>(ctx.fpr_bits(0)));
    ctx.fpr[0] = ctx.fpr[0] + ctx.fpr[0];
    goto L_089C0938;
L_089C0938:
    { const float fs = ctx.fpr[0]; const float ft = ctx.fpr[20]; if ((std::isinf(fs) && ft == 0.0f) || (std::isinf(ft) && fs == 0.0f)) ctx.set_fpr_bits(1, 0x7FC00000u); else ctx.fpr[1] = fs * ft; }
    ctx.set_gpr(2, 20224u << 16u);
    ctx.fpr[0] = std::bit_cast<float>(ctx.gpr[2]);
    ctx.set_fpu_condition((ctx.fpr[0] <= ctx.fpr[1]));
    // nop
    { const bool branch_taken = ctx.fpu_condition();
    // nop
      if (branch_taken) {
          goto L_089C0964;
      }
      goto L_089C0954;
    }
L_089C0954:
    ctx.set_fpr_bits(0, ctx.fpu_float_to_word(ctx.fpr[1], 1u));
    ctx.set_gpr(2, std::bit_cast<std::uint32_t>(ctx.fpr[0]));
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_089C0978;
      }
      goto L_089C0964;
    }
L_089C0964:
    ctx.fpr[0] = ctx.fpr[1] - ctx.fpr[0];
    ctx.set_fpr_bits(0, ctx.fpu_float_to_word(ctx.fpr[0], 1u));
    ctx.set_gpr(3, std::bit_cast<std::uint32_t>(ctx.fpr[0]));
    ctx.set_gpr(2, 0u + static_cast<std::uint32_t>(-32768));
    ctx.set_gpr(2, ctx.gpr[3] | ctx.gpr[2]);
    goto L_089C0978;
L_089C0978:
    ctx.set_gpr(5, ctx.gpr[2] & 255u);
    ctx.set_gpr(2, rt.memory().aot_load8(ctx.gpr[29] + static_cast<std::uint32_t>(565)));
    { const bool branch_taken = static_cast<std::int32_t>(ctx.gpr[2]) < 0;
    // nop
      if (branch_taken) {
          goto L_089C0998;
      }
      goto L_089C0988;
    }
L_089C0988:
    ctx.fpr[0] = std::bit_cast<float>(ctx.gpr[2]);
    ctx.fpr[0] = static_cast<float>(static_cast<std::int32_t>(ctx.fpr_bits(0)));
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_089C09B0;
      }
      goto L_089C0998;
    }
L_089C0998:
    ctx.set_gpr(3, ctx.gpr[2] >> 1u);
    ctx.set_gpr(2, ctx.gpr[2] & 1u);
    ctx.set_gpr(3, ctx.gpr[3] | ctx.gpr[2]);
    ctx.fpr[0] = std::bit_cast<float>(ctx.gpr[3]);
    ctx.fpr[0] = static_cast<float>(static_cast<std::int32_t>(ctx.fpr_bits(0)));
    ctx.fpr[0] = ctx.fpr[0] + ctx.fpr[0];
    goto L_089C09B0;
L_089C09B0:
    { const float fs = ctx.fpr[0]; const float ft = ctx.fpr[20]; if ((std::isinf(fs) && ft == 0.0f) || (std::isinf(ft) && fs == 0.0f)) ctx.set_fpr_bits(1, 0x7FC00000u); else ctx.fpr[1] = fs * ft; }
    ctx.set_gpr(2, 20224u << 16u);
    ctx.fpr[0] = std::bit_cast<float>(ctx.gpr[2]);
    ctx.set_fpu_condition((ctx.fpr[0] <= ctx.fpr[1]));
    // nop
    { const bool branch_taken = ctx.fpu_condition();
    // nop
      if (branch_taken) {
          goto L_089C09DC;
      }
      goto L_089C09CC;
    }
L_089C09CC:
    ctx.set_fpr_bits(0, ctx.fpu_float_to_word(ctx.fpr[1], 1u));
    ctx.set_gpr(6, std::bit_cast<std::uint32_t>(ctx.fpr[0]));
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_089C09F0;
      }
      goto L_089C09DC;
    }
L_089C09DC:
    ctx.fpr[0] = ctx.fpr[1] - ctx.fpr[0];
    ctx.set_fpr_bits(0, ctx.fpu_float_to_word(ctx.fpr[0], 1u));
    ctx.set_gpr(3, std::bit_cast<std::uint32_t>(ctx.fpr[0]));
    ctx.set_gpr(2, 0u + static_cast<std::uint32_t>(-32768));
    ctx.set_gpr(6, ctx.gpr[3] | ctx.gpr[2]);
    goto L_089C09F0;
L_089C09F0:
    ctx.set_gpr(2, rt.memory().aot_load8(ctx.gpr[29] + static_cast<std::uint32_t>(566)));
    { const bool branch_taken = static_cast<std::int32_t>(ctx.gpr[2]) < 0;
    // nop
      if (branch_taken) {
          goto L_089C0A0C;
      }
      goto L_089C09FC;
    }
L_089C09FC:
    ctx.fpr[0] = std::bit_cast<float>(ctx.gpr[2]);
    ctx.fpr[0] = static_cast<float>(static_cast<std::int32_t>(ctx.fpr_bits(0)));
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_089C0A24;
      }
      goto L_089C0A0C;
    }
L_089C0A0C:
    ctx.set_gpr(3, ctx.gpr[2] >> 1u);
    ctx.set_gpr(2, ctx.gpr[2] & 1u);
    ctx.set_gpr(3, ctx.gpr[3] | ctx.gpr[2]);
    ctx.fpr[0] = std::bit_cast<float>(ctx.gpr[3]);
    ctx.fpr[0] = static_cast<float>(static_cast<std::int32_t>(ctx.fpr_bits(0)));
    ctx.fpr[0] = ctx.fpr[0] + ctx.fpr[0];
    goto L_089C0A24;
L_089C0A24:
    { const float fs = ctx.fpr[0]; const float ft = ctx.fpr[20]; if ((std::isinf(fs) && ft == 0.0f) || (std::isinf(ft) && fs == 0.0f)) ctx.set_fpr_bits(1, 0x7FC00000u); else ctx.fpr[1] = fs * ft; }
    ctx.set_gpr(2, 20224u << 16u);
    ctx.fpr[0] = std::bit_cast<float>(ctx.gpr[2]);
    ctx.set_fpu_condition((ctx.fpr[0] <= ctx.fpr[1]));
    // nop
    { const bool branch_taken = ctx.fpu_condition();
    // nop
      if (branch_taken) {
          goto L_089C0A50;
      }
      goto L_089C0A40;
    }
L_089C0A40:
    ctx.set_fpr_bits(0, ctx.fpu_float_to_word(ctx.fpr[1], 1u));
    ctx.set_gpr(7, std::bit_cast<std::uint32_t>(ctx.fpr[0]));
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_089C0A64;
      }
      goto L_089C0A50;
    }
L_089C0A50:
    ctx.fpr[0] = ctx.fpr[1] - ctx.fpr[0];
    ctx.set_fpr_bits(0, ctx.fpu_float_to_word(ctx.fpr[0], 1u));
    ctx.set_gpr(3, std::bit_cast<std::uint32_t>(ctx.fpr[0]));
    ctx.set_gpr(2, 0u + static_cast<std::uint32_t>(-32768));
    ctx.set_gpr(7, ctx.gpr[3] | ctx.gpr[2]);
    goto L_089C0A64;
L_089C0A64:
    ctx.set_gpr(2, rt.memory().aot_load8(ctx.gpr[29] + static_cast<std::uint32_t>(567)));
    { const bool branch_taken = static_cast<std::int32_t>(ctx.gpr[2]) < 0;
    // nop
      if (branch_taken) {
          goto L_089C0A80;
      }
      goto L_089C0A70;
    }
L_089C0A70:
    ctx.fpr[0] = std::bit_cast<float>(ctx.gpr[2]);
    ctx.fpr[0] = static_cast<float>(static_cast<std::int32_t>(ctx.fpr_bits(0)));
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_089C0A98;
      }
      goto L_089C0A80;
    }
L_089C0A80:
    ctx.set_gpr(3, ctx.gpr[2] >> 1u);
    ctx.set_gpr(2, ctx.gpr[2] & 1u);
    ctx.set_gpr(3, ctx.gpr[3] | ctx.gpr[2]);
    ctx.fpr[0] = std::bit_cast<float>(ctx.gpr[3]);
    ctx.fpr[0] = static_cast<float>(static_cast<std::int32_t>(ctx.fpr_bits(0)));
    ctx.fpr[0] = ctx.fpr[0] + ctx.fpr[0];
    goto L_089C0A98;
L_089C0A98:
    { const float fs = ctx.fpr[0]; const float ft = ctx.fpr[20]; if ((std::isinf(fs) && ft == 0.0f) || (std::isinf(ft) && fs == 0.0f)) ctx.set_fpr_bits(1, 0x7FC00000u); else ctx.fpr[1] = fs * ft; }
    ctx.set_gpr(2, 20224u << 16u);
    ctx.fpr[0] = std::bit_cast<float>(ctx.gpr[2]);
    ctx.set_fpu_condition((ctx.fpr[0] <= ctx.fpr[1]));
    // nop
    { const bool branch_taken = ctx.fpu_condition();
    // nop
      if (branch_taken) {
          goto L_089C0AC4;
      }
      goto L_089C0AB4;
    }
L_089C0AB4:
    ctx.set_fpr_bits(0, ctx.fpu_float_to_word(ctx.fpr[1], 1u));
    ctx.set_gpr(8, std::bit_cast<std::uint32_t>(ctx.fpr[0]));
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_089C0AD8;
      }
      goto L_089C0AC4;
    }
L_089C0AC4:
    ctx.fpr[0] = ctx.fpr[1] - ctx.fpr[0];
    ctx.set_fpr_bits(0, ctx.fpu_float_to_word(ctx.fpr[0], 1u));
    ctx.set_gpr(3, std::bit_cast<std::uint32_t>(ctx.fpr[0]));
    ctx.set_gpr(2, 0u + static_cast<std::uint32_t>(-32768));
    ctx.set_gpr(8, ctx.gpr[3] | ctx.gpr[2]);
    goto L_089C0AD8;
L_089C0AD8:
    ctx.set_gpr(4, ctx.gpr[29] + static_cast<std::uint32_t>(568));
    ctx.set_gpr(31, 0x089C0AE4u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0112_entry, 112u, 41u, 0x089C4700u>(ctx, &aot_mem) && ctx.pc == 0x089C0AE4u) goto L_089C0AE4;
    return;
L_089C0AE4:
    ctx.set_gpr(3, rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(1476)));
    ctx.set_gpr(2, ctx.gpr[3] << 2u);
    ctx.set_gpr(2, ctx.gpr[2] + ctx.gpr[3]);
    ctx.set_gpr(2, ctx.gpr[2] << 1u);
    ctx.set_gpr(2, ctx.gpr[2] + ctx.gpr[3]);
    ctx.set_gpr(2, ctx.gpr[18] + ctx.gpr[2]);
    ctx.set_gpr(3, rt.memory().aot_load8(ctx.gpr[2] + static_cast<std::uint32_t>(0)));
    { const bool branch_taken = static_cast<std::int32_t>(ctx.gpr[3]) < 0;
    // nop
      if (branch_taken) {
          goto L_089C0B18;
      }
      goto L_089C0B08;
    }
L_089C0B08:
    ctx.fpr[0] = std::bit_cast<float>(ctx.gpr[3]);
    ctx.fpr[0] = static_cast<float>(static_cast<std::int32_t>(ctx.fpr_bits(0)));
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_089C0B30;
      }
      goto L_089C0B18;
    }
L_089C0B18:
    ctx.set_gpr(4, ctx.gpr[3] >> 1u);
    ctx.set_gpr(3, ctx.gpr[3] & 1u);
    ctx.set_gpr(4, ctx.gpr[4] | ctx.gpr[3]);
    ctx.fpr[0] = std::bit_cast<float>(ctx.gpr[4]);
    ctx.fpr[0] = static_cast<float>(static_cast<std::int32_t>(ctx.fpr_bits(0)));
    ctx.fpr[0] = ctx.fpr[0] + ctx.fpr[0];
    goto L_089C0B30;
L_089C0B30:
    { const float fs = ctx.fpr[0]; const float ft = ctx.fpr[24]; if ((std::isinf(fs) && ft == 0.0f) || (std::isinf(ft) && fs == 0.0f)) ctx.set_fpr_bits(1, 0x7FC00000u); else ctx.fpr[1] = fs * ft; }
    ctx.set_gpr(3, 20224u << 16u);
    ctx.fpr[0] = std::bit_cast<float>(ctx.gpr[3]);
    ctx.set_fpu_condition((ctx.fpr[0] <= ctx.fpr[1]));
    // nop
    { const bool branch_taken = ctx.fpu_condition();
    // nop
      if (branch_taken) {
          goto L_089C0B5C;
      }
      goto L_089C0B4C;
    }
L_089C0B4C:
    ctx.set_fpr_bits(0, ctx.fpu_float_to_word(ctx.fpr[1], 1u));
    ctx.set_gpr(3, std::bit_cast<std::uint32_t>(ctx.fpr[0]));
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_089C0B70;
      }
      goto L_089C0B5C;
    }
L_089C0B5C:
    ctx.fpr[0] = ctx.fpr[1] - ctx.fpr[0];
    ctx.set_fpr_bits(0, ctx.fpu_float_to_word(ctx.fpr[0], 1u));
    ctx.set_gpr(4, std::bit_cast<std::uint32_t>(ctx.fpr[0]));
    ctx.set_gpr(3, 0u + static_cast<std::uint32_t>(-32768));
    ctx.set_gpr(3, ctx.gpr[4] | ctx.gpr[3]);
    goto L_089C0B70;
L_089C0B70:
    ctx.set_gpr(5, ctx.gpr[3] & 255u);
    ctx.set_gpr(3, rt.memory().aot_load8(ctx.gpr[2] + static_cast<std::uint32_t>(1)));
    { const bool branch_taken = static_cast<std::int32_t>(ctx.gpr[3]) < 0;
    // nop
      if (branch_taken) {
          goto L_089C0B90;
      }
      goto L_089C0B80;
    }
L_089C0B80:
    ctx.fpr[0] = std::bit_cast<float>(ctx.gpr[3]);
    ctx.fpr[0] = static_cast<float>(static_cast<std::int32_t>(ctx.fpr_bits(0)));
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_089C0BA8;
      }
      goto L_089C0B90;
    }
L_089C0B90:
    ctx.set_gpr(4, ctx.gpr[3] >> 1u);
    ctx.set_gpr(3, ctx.gpr[3] & 1u);
    ctx.set_gpr(4, ctx.gpr[4] | ctx.gpr[3]);
    ctx.fpr[0] = std::bit_cast<float>(ctx.gpr[4]);
    ctx.fpr[0] = static_cast<float>(static_cast<std::int32_t>(ctx.fpr_bits(0)));
    ctx.fpr[0] = ctx.fpr[0] + ctx.fpr[0];
    goto L_089C0BA8;
L_089C0BA8:
    { const float fs = ctx.fpr[0]; const float ft = ctx.fpr[24]; if ((std::isinf(fs) && ft == 0.0f) || (std::isinf(ft) && fs == 0.0f)) ctx.set_fpr_bits(1, 0x7FC00000u); else ctx.fpr[1] = fs * ft; }
    ctx.set_gpr(3, 20224u << 16u);
    ctx.fpr[0] = std::bit_cast<float>(ctx.gpr[3]);
    ctx.set_fpu_condition((ctx.fpr[0] <= ctx.fpr[1]));
    // nop
    { const bool branch_taken = ctx.fpu_condition();
    // nop
      if (branch_taken) {
          goto L_089C0BD4;
      }
      goto L_089C0BC4;
    }
L_089C0BC4:
    ctx.set_fpr_bits(0, ctx.fpu_float_to_word(ctx.fpr[1], 1u));
    ctx.set_gpr(6, std::bit_cast<std::uint32_t>(ctx.fpr[0]));
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_089C0BE8;
      }
      goto L_089C0BD4;
    }
L_089C0BD4:
    ctx.fpr[0] = ctx.fpr[1] - ctx.fpr[0];
    ctx.set_fpr_bits(0, ctx.fpu_float_to_word(ctx.fpr[0], 1u));
    ctx.set_gpr(4, std::bit_cast<std::uint32_t>(ctx.fpr[0]));
    ctx.set_gpr(3, 0u + static_cast<std::uint32_t>(-32768));
    ctx.set_gpr(6, ctx.gpr[4] | ctx.gpr[3]);
    goto L_089C0BE8;
L_089C0BE8:
    ctx.set_gpr(3, rt.memory().aot_load8(ctx.gpr[2] + static_cast<std::uint32_t>(2)));
    { const bool branch_taken = static_cast<std::int32_t>(ctx.gpr[3]) < 0;
    // nop
      if (branch_taken) {
          goto L_089C0C04;
      }
      goto L_089C0BF4;
    }
L_089C0BF4:
    ctx.fpr[0] = std::bit_cast<float>(ctx.gpr[3]);
    ctx.fpr[0] = static_cast<float>(static_cast<std::int32_t>(ctx.fpr_bits(0)));
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_089C0C1C;
      }
      goto L_089C0C04;
    }
L_089C0C04:
    ctx.set_gpr(4, ctx.gpr[3] >> 1u);
    ctx.set_gpr(3, ctx.gpr[3] & 1u);
    ctx.set_gpr(4, ctx.gpr[4] | ctx.gpr[3]);
    ctx.fpr[0] = std::bit_cast<float>(ctx.gpr[4]);
    ctx.fpr[0] = static_cast<float>(static_cast<std::int32_t>(ctx.fpr_bits(0)));
    ctx.fpr[0] = ctx.fpr[0] + ctx.fpr[0];
    goto L_089C0C1C;
L_089C0C1C:
    { const float fs = ctx.fpr[0]; const float ft = ctx.fpr[24]; if ((std::isinf(fs) && ft == 0.0f) || (std::isinf(ft) && fs == 0.0f)) ctx.set_fpr_bits(1, 0x7FC00000u); else ctx.fpr[1] = fs * ft; }
    ctx.set_gpr(3, 20224u << 16u);
    ctx.fpr[0] = std::bit_cast<float>(ctx.gpr[3]);
    ctx.set_fpu_condition((ctx.fpr[0] <= ctx.fpr[1]));
    // nop
    { const bool branch_taken = ctx.fpu_condition();
    // nop
      if (branch_taken) {
          goto L_089C0C48;
      }
      goto L_089C0C38;
    }
L_089C0C38:
    ctx.set_fpr_bits(0, ctx.fpu_float_to_word(ctx.fpr[1], 1u));
    ctx.set_gpr(7, std::bit_cast<std::uint32_t>(ctx.fpr[0]));
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_089C0C5C;
      }
      goto L_089C0C48;
    }
L_089C0C48:
    ctx.fpr[0] = ctx.fpr[1] - ctx.fpr[0];
    ctx.set_fpr_bits(0, ctx.fpu_float_to_word(ctx.fpr[0], 1u));
    ctx.set_gpr(4, std::bit_cast<std::uint32_t>(ctx.fpr[0]));
    ctx.set_gpr(3, 0u + static_cast<std::uint32_t>(-32768));
    ctx.set_gpr(7, ctx.gpr[4] | ctx.gpr[3]);
    goto L_089C0C5C;
L_089C0C5C:
    ctx.set_gpr(2, rt.memory().aot_load8(ctx.gpr[2] + static_cast<std::uint32_t>(3)));
    { const bool branch_taken = static_cast<std::int32_t>(ctx.gpr[2]) < 0;
    // nop
      if (branch_taken) {
          goto L_089C0C78;
      }
      goto L_089C0C68;
    }
L_089C0C68:
    ctx.fpr[0] = std::bit_cast<float>(ctx.gpr[2]);
    ctx.fpr[0] = static_cast<float>(static_cast<std::int32_t>(ctx.fpr_bits(0)));
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_089C0C90;
      }
      goto L_089C0C78;
    }
L_089C0C78:
    ctx.set_gpr(3, ctx.gpr[2] >> 1u);
    ctx.set_gpr(2, ctx.gpr[2] & 1u);
    ctx.set_gpr(3, ctx.gpr[3] | ctx.gpr[2]);
    ctx.fpr[0] = std::bit_cast<float>(ctx.gpr[3]);
    ctx.fpr[0] = static_cast<float>(static_cast<std::int32_t>(ctx.fpr_bits(0)));
    ctx.fpr[0] = ctx.fpr[0] + ctx.fpr[0];
    goto L_089C0C90;
L_089C0C90:
    { const float fs = ctx.fpr[0]; const float ft = ctx.fpr[24]; if ((std::isinf(fs) && ft == 0.0f) || (std::isinf(ft) && fs == 0.0f)) ctx.set_fpr_bits(1, 0x7FC00000u); else ctx.fpr[1] = fs * ft; }
    ctx.set_gpr(2, 20224u << 16u);
    ctx.fpr[0] = std::bit_cast<float>(ctx.gpr[2]);
    ctx.set_fpu_condition((ctx.fpr[0] <= ctx.fpr[1]));
    // nop
    { const bool branch_taken = ctx.fpu_condition();
    // nop
      if (branch_taken) {
          goto L_089C0CBC;
      }
      goto L_089C0CAC;
    }
L_089C0CAC:
    ctx.set_fpr_bits(0, ctx.fpu_float_to_word(ctx.fpr[1], 1u));
    ctx.set_gpr(8, std::bit_cast<std::uint32_t>(ctx.fpr[0]));
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_089C0CD0;
      }
      goto L_089C0CBC;
    }
L_089C0CBC:
    ctx.fpr[0] = ctx.fpr[1] - ctx.fpr[0];
    ctx.set_fpr_bits(0, ctx.fpu_float_to_word(ctx.fpr[0], 1u));
    ctx.set_gpr(3, std::bit_cast<std::uint32_t>(ctx.fpr[0]));
    ctx.set_gpr(2, 0u + static_cast<std::uint32_t>(-32768));
    ctx.set_gpr(8, ctx.gpr[3] | ctx.gpr[2]);
    goto L_089C0CD0;
L_089C0CD0:
    ctx.set_gpr(4, ctx.gpr[29] + static_cast<std::uint32_t>(572));
    ctx.set_gpr(31, 0x089C0CDCu);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0112_entry, 112u, 41u, 0x089C4700u>(ctx, &aot_mem) && ctx.pc == 0x089C0CDCu) goto L_089C0CDC;
    return;
L_089C0CDC:
    ctx.set_gpr(2, rt.memory().aot_load8(ctx.gpr[29] + static_cast<std::uint32_t>(572)));
    { const bool branch_taken = static_cast<std::int32_t>(ctx.gpr[2]) < 0;
    // nop
      if (branch_taken) {
          goto L_089C0CF8;
      }
      goto L_089C0CE8;
    }
L_089C0CE8:
    ctx.fpr[0] = std::bit_cast<float>(ctx.gpr[2]);
    ctx.fpr[0] = static_cast<float>(static_cast<std::int32_t>(ctx.fpr_bits(0)));
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_089C0D10;
      }
      goto L_089C0CF8;
    }
L_089C0CF8:
    ctx.set_gpr(3, ctx.gpr[2] >> 1u);
    ctx.set_gpr(2, ctx.gpr[2] & 1u);
    ctx.set_gpr(3, ctx.gpr[3] | ctx.gpr[2]);
    ctx.fpr[0] = std::bit_cast<float>(ctx.gpr[3]);
    ctx.fpr[0] = static_cast<float>(static_cast<std::int32_t>(ctx.fpr_bits(0)));
    ctx.fpr[0] = ctx.fpr[0] + ctx.fpr[0];
    goto L_089C0D10;
L_089C0D10:
    { const float fs = ctx.fpr[0]; const float ft = ctx.fpr[21]; if ((std::isinf(fs) && ft == 0.0f) || (std::isinf(ft) && fs == 0.0f)) ctx.set_fpr_bits(1, 0x7FC00000u); else ctx.fpr[1] = fs * ft; }
    ctx.set_gpr(2, 20224u << 16u);
    ctx.fpr[0] = std::bit_cast<float>(ctx.gpr[2]);
    ctx.set_fpu_condition((ctx.fpr[0] <= ctx.fpr[1]));
    // nop
    { const bool branch_taken = ctx.fpu_condition();
    // nop
      if (branch_taken) {
          goto L_089C0D3C;
      }
      goto L_089C0D2C;
    }
L_089C0D2C:
    ctx.set_fpr_bits(0, ctx.fpu_float_to_word(ctx.fpr[1], 1u));
    ctx.set_gpr(2, std::bit_cast<std::uint32_t>(ctx.fpr[0]));
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_089C0D50;
      }
      goto L_089C0D3C;
    }
L_089C0D3C:
    ctx.fpr[0] = ctx.fpr[1] - ctx.fpr[0];
    ctx.set_fpr_bits(0, ctx.fpu_float_to_word(ctx.fpr[0], 1u));
    ctx.set_gpr(3, std::bit_cast<std::uint32_t>(ctx.fpr[0]));
    ctx.set_gpr(2, 0u + static_cast<std::uint32_t>(-32768));
    ctx.set_gpr(2, ctx.gpr[3] | ctx.gpr[2]);
    goto L_089C0D50;
L_089C0D50:
    ctx.set_gpr(5, ctx.gpr[2] & 255u);
    ctx.set_gpr(2, rt.memory().aot_load8(ctx.gpr[29] + static_cast<std::uint32_t>(573)));
    { const bool branch_taken = static_cast<std::int32_t>(ctx.gpr[2]) < 0;
    // nop
      if (branch_taken) {
          goto L_089C0D70;
      }
      goto L_089C0D60;
    }
L_089C0D60:
    ctx.fpr[0] = std::bit_cast<float>(ctx.gpr[2]);
    ctx.fpr[0] = static_cast<float>(static_cast<std::int32_t>(ctx.fpr_bits(0)));
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_089C0D88;
      }
      goto L_089C0D70;
    }
L_089C0D70:
    ctx.set_gpr(3, ctx.gpr[2] >> 1u);
    ctx.set_gpr(2, ctx.gpr[2] & 1u);
    ctx.set_gpr(3, ctx.gpr[3] | ctx.gpr[2]);
    ctx.fpr[0] = std::bit_cast<float>(ctx.gpr[3]);
    ctx.fpr[0] = static_cast<float>(static_cast<std::int32_t>(ctx.fpr_bits(0)));
    ctx.fpr[0] = ctx.fpr[0] + ctx.fpr[0];
    goto L_089C0D88;
L_089C0D88:
    { const float fs = ctx.fpr[0]; const float ft = ctx.fpr[21]; if ((std::isinf(fs) && ft == 0.0f) || (std::isinf(ft) && fs == 0.0f)) ctx.set_fpr_bits(1, 0x7FC00000u); else ctx.fpr[1] = fs * ft; }
    ctx.set_gpr(2, 20224u << 16u);
    ctx.fpr[0] = std::bit_cast<float>(ctx.gpr[2]);
    ctx.set_fpu_condition((ctx.fpr[0] <= ctx.fpr[1]));
    // nop
    { const bool branch_taken = ctx.fpu_condition();
    // nop
      if (branch_taken) {
          goto L_089C0DB4;
      }
      goto L_089C0DA4;
    }
L_089C0DA4:
    ctx.set_fpr_bits(0, ctx.fpu_float_to_word(ctx.fpr[1], 1u));
    ctx.set_gpr(6, std::bit_cast<std::uint32_t>(ctx.fpr[0]));
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_089C0DC8;
      }
      goto L_089C0DB4;
    }
L_089C0DB4:
    ctx.fpr[0] = ctx.fpr[1] - ctx.fpr[0];
    ctx.set_fpr_bits(0, ctx.fpu_float_to_word(ctx.fpr[0], 1u));
    ctx.set_gpr(3, std::bit_cast<std::uint32_t>(ctx.fpr[0]));
    ctx.set_gpr(2, 0u + static_cast<std::uint32_t>(-32768));
    ctx.set_gpr(6, ctx.gpr[3] | ctx.gpr[2]);
    goto L_089C0DC8;
L_089C0DC8:
    ctx.set_gpr(2, rt.memory().aot_load8(ctx.gpr[29] + static_cast<std::uint32_t>(574)));
    { const bool branch_taken = static_cast<std::int32_t>(ctx.gpr[2]) < 0;
    // nop
      if (branch_taken) {
          goto L_089C0DE4;
      }
      goto L_089C0DD4;
    }
L_089C0DD4:
    ctx.fpr[0] = std::bit_cast<float>(ctx.gpr[2]);
    ctx.fpr[0] = static_cast<float>(static_cast<std::int32_t>(ctx.fpr_bits(0)));
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_089C0DFC;
      }
      goto L_089C0DE4;
    }
L_089C0DE4:
    ctx.set_gpr(3, ctx.gpr[2] >> 1u);
    ctx.set_gpr(2, ctx.gpr[2] & 1u);
    ctx.set_gpr(3, ctx.gpr[3] | ctx.gpr[2]);
    ctx.fpr[0] = std::bit_cast<float>(ctx.gpr[3]);
    ctx.fpr[0] = static_cast<float>(static_cast<std::int32_t>(ctx.fpr_bits(0)));
    ctx.fpr[0] = ctx.fpr[0] + ctx.fpr[0];
    goto L_089C0DFC;
L_089C0DFC:
    { const float fs = ctx.fpr[0]; const float ft = ctx.fpr[21]; if ((std::isinf(fs) && ft == 0.0f) || (std::isinf(ft) && fs == 0.0f)) ctx.set_fpr_bits(1, 0x7FC00000u); else ctx.fpr[1] = fs * ft; }
    ctx.set_gpr(2, 20224u << 16u);
    ctx.fpr[0] = std::bit_cast<float>(ctx.gpr[2]);
    ctx.set_fpu_condition((ctx.fpr[0] <= ctx.fpr[1]));
    // nop
    { const bool branch_taken = ctx.fpu_condition();
    // nop
      if (branch_taken) {
          goto L_089C0E28;
      }
      goto L_089C0E18;
    }
L_089C0E18:
    ctx.set_fpr_bits(0, ctx.fpu_float_to_word(ctx.fpr[1], 1u));
    ctx.set_gpr(7, std::bit_cast<std::uint32_t>(ctx.fpr[0]));
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_089C0E3C;
      }
      goto L_089C0E28;
    }
L_089C0E28:
    ctx.fpr[0] = ctx.fpr[1] - ctx.fpr[0];
    ctx.set_fpr_bits(0, ctx.fpu_float_to_word(ctx.fpr[0], 1u));
    ctx.set_gpr(3, std::bit_cast<std::uint32_t>(ctx.fpr[0]));
    ctx.set_gpr(2, 0u + static_cast<std::uint32_t>(-32768));
    ctx.set_gpr(7, ctx.gpr[3] | ctx.gpr[2]);
    goto L_089C0E3C;
L_089C0E3C:
    ctx.set_gpr(2, rt.memory().aot_load8(ctx.gpr[29] + static_cast<std::uint32_t>(575)));
    { const bool branch_taken = static_cast<std::int32_t>(ctx.gpr[2]) < 0;
    // nop
      if (branch_taken) {
          goto L_089C0E58;
      }
      goto L_089C0E48;
    }
L_089C0E48:
    ctx.fpr[0] = std::bit_cast<float>(ctx.gpr[2]);
    ctx.fpr[0] = static_cast<float>(static_cast<std::int32_t>(ctx.fpr_bits(0)));
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_089C0E70;
      }
      goto L_089C0E58;
    }
L_089C0E58:
    ctx.set_gpr(3, ctx.gpr[2] >> 1u);
    ctx.set_gpr(2, ctx.gpr[2] & 1u);
    ctx.set_gpr(3, ctx.gpr[3] | ctx.gpr[2]);
    ctx.fpr[0] = std::bit_cast<float>(ctx.gpr[3]);
    ctx.fpr[0] = static_cast<float>(static_cast<std::int32_t>(ctx.fpr_bits(0)));
    ctx.fpr[0] = ctx.fpr[0] + ctx.fpr[0];
    goto L_089C0E70;
L_089C0E70:
    { const float fs = ctx.fpr[0]; const float ft = ctx.fpr[21]; if ((std::isinf(fs) && ft == 0.0f) || (std::isinf(ft) && fs == 0.0f)) ctx.set_fpr_bits(1, 0x7FC00000u); else ctx.fpr[1] = fs * ft; }
    ctx.set_gpr(2, 20224u << 16u);
    ctx.fpr[0] = std::bit_cast<float>(ctx.gpr[2]);
    ctx.set_fpu_condition((ctx.fpr[0] <= ctx.fpr[1]));
    // nop
    { const bool branch_taken = ctx.fpu_condition();
    // nop
      if (branch_taken) {
          goto L_089C0E9C;
      }
      goto L_089C0E8C;
    }
L_089C0E8C:
    ctx.set_fpr_bits(0, ctx.fpu_float_to_word(ctx.fpr[1], 1u));
    ctx.set_gpr(8, std::bit_cast<std::uint32_t>(ctx.fpr[0]));
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_089C0EB0;
      }
      goto L_089C0E9C;
    }
L_089C0E9C:
    ctx.fpr[0] = ctx.fpr[1] - ctx.fpr[0];
    ctx.set_fpr_bits(0, ctx.fpu_float_to_word(ctx.fpr[0], 1u));
    ctx.set_gpr(3, std::bit_cast<std::uint32_t>(ctx.fpr[0]));
    ctx.set_gpr(2, 0u + static_cast<std::uint32_t>(-32768));
    ctx.set_gpr(8, ctx.gpr[3] | ctx.gpr[2]);
    goto L_089C0EB0;
L_089C0EB0:
    ctx.set_gpr(4, ctx.gpr[29] + static_cast<std::uint32_t>(576));
    ctx.set_gpr(31, 0x089C0EBCu);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0112_entry, 112u, 41u, 0x089C4700u>(ctx, &aot_mem) && ctx.pc == 0x089C0EBCu) goto L_089C0EBC;
    return;
L_089C0EBC:
    ctx.set_gpr(3, rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(1476)));
    ctx.set_gpr(2, ctx.gpr[3] << 2u);
    ctx.set_gpr(2, ctx.gpr[2] + ctx.gpr[3]);
    ctx.set_gpr(2, ctx.gpr[2] << 1u);
    ctx.set_gpr(2, ctx.gpr[18] + ctx.gpr[2]);
    ctx.set_gpr(3, rt.memory().aot_load8(ctx.gpr[2] + static_cast<std::uint32_t>(0)));
    { const bool branch_taken = static_cast<std::int32_t>(ctx.gpr[3]) < 0;
    // nop
      if (branch_taken) {
          goto L_089C0EEC;
      }
      goto L_089C0EDC;
    }
L_089C0EDC:
    ctx.fpr[0] = std::bit_cast<float>(ctx.gpr[3]);
    ctx.fpr[0] = static_cast<float>(static_cast<std::int32_t>(ctx.fpr_bits(0)));
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_089C0F04;
      }
      goto L_089C0EEC;
    }
L_089C0EEC:
    ctx.set_gpr(4, ctx.gpr[3] >> 1u);
    ctx.set_gpr(3, ctx.gpr[3] & 1u);
    ctx.set_gpr(4, ctx.gpr[4] | ctx.gpr[3]);
    ctx.fpr[0] = std::bit_cast<float>(ctx.gpr[4]);
    ctx.fpr[0] = static_cast<float>(static_cast<std::int32_t>(ctx.fpr_bits(0)));
    ctx.fpr[0] = ctx.fpr[0] + ctx.fpr[0];
    goto L_089C0F04;
L_089C0F04:
    { const float fs = ctx.fpr[0]; const float ft = ctx.fpr[25]; if ((std::isinf(fs) && ft == 0.0f) || (std::isinf(ft) && fs == 0.0f)) ctx.set_fpr_bits(1, 0x7FC00000u); else ctx.fpr[1] = fs * ft; }
    ctx.set_gpr(3, 20224u << 16u);
    ctx.fpr[0] = std::bit_cast<float>(ctx.gpr[3]);
    ctx.set_fpu_condition((ctx.fpr[0] <= ctx.fpr[1]));
    // nop
    { const bool branch_taken = ctx.fpu_condition();
    // nop
      if (branch_taken) {
          goto L_089C0F30;
      }
      goto L_089C0F20;
    }
L_089C0F20:
    ctx.set_fpr_bits(0, ctx.fpu_float_to_word(ctx.fpr[1], 1u));
    ctx.set_gpr(3, std::bit_cast<std::uint32_t>(ctx.fpr[0]));
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_089C0F44;
      }
      goto L_089C0F30;
    }
L_089C0F30:
    ctx.fpr[0] = ctx.fpr[1] - ctx.fpr[0];
    ctx.set_fpr_bits(0, ctx.fpu_float_to_word(ctx.fpr[0], 1u));
    ctx.set_gpr(4, std::bit_cast<std::uint32_t>(ctx.fpr[0]));
    ctx.set_gpr(3, 0u + static_cast<std::uint32_t>(-32768));
    ctx.set_gpr(3, ctx.gpr[4] | ctx.gpr[3]);
    goto L_089C0F44;
L_089C0F44:
    ctx.set_gpr(5, ctx.gpr[3] & 255u);
    ctx.set_gpr(3, rt.memory().aot_load8(ctx.gpr[2] + static_cast<std::uint32_t>(1)));
    { const bool branch_taken = static_cast<std::int32_t>(ctx.gpr[3]) < 0;
    // nop
      if (branch_taken) {
          goto L_089C0F64;
      }
      goto L_089C0F54;
    }
L_089C0F54:
    ctx.fpr[0] = std::bit_cast<float>(ctx.gpr[3]);
    ctx.fpr[0] = static_cast<float>(static_cast<std::int32_t>(ctx.fpr_bits(0)));
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_089C0F7C;
      }
      goto L_089C0F64;
    }
L_089C0F64:
    ctx.set_gpr(4, ctx.gpr[3] >> 1u);
    ctx.set_gpr(3, ctx.gpr[3] & 1u);
    ctx.set_gpr(4, ctx.gpr[4] | ctx.gpr[3]);
    ctx.fpr[0] = std::bit_cast<float>(ctx.gpr[4]);
    ctx.fpr[0] = static_cast<float>(static_cast<std::int32_t>(ctx.fpr_bits(0)));
    ctx.fpr[0] = ctx.fpr[0] + ctx.fpr[0];
    goto L_089C0F7C;
L_089C0F7C:
    { const float fs = ctx.fpr[0]; const float ft = ctx.fpr[25]; if ((std::isinf(fs) && ft == 0.0f) || (std::isinf(ft) && fs == 0.0f)) ctx.set_fpr_bits(1, 0x7FC00000u); else ctx.fpr[1] = fs * ft; }
    ctx.set_gpr(3, 20224u << 16u);
    ctx.fpr[0] = std::bit_cast<float>(ctx.gpr[3]);
    ctx.set_fpu_condition((ctx.fpr[0] <= ctx.fpr[1]));
    // nop
    { const bool branch_taken = ctx.fpu_condition();
    // nop
      if (branch_taken) {
          goto L_089C0FA8;
      }
      goto L_089C0F98;
    }
L_089C0F98:
    ctx.set_fpr_bits(0, ctx.fpu_float_to_word(ctx.fpr[1], 1u));
    ctx.set_gpr(6, std::bit_cast<std::uint32_t>(ctx.fpr[0]));
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_089C0FBC;
      }
      goto L_089C0FA8;
    }
L_089C0FA8:
    ctx.fpr[0] = ctx.fpr[1] - ctx.fpr[0];
    ctx.set_fpr_bits(0, ctx.fpu_float_to_word(ctx.fpr[0], 1u));
    ctx.set_gpr(4, std::bit_cast<std::uint32_t>(ctx.fpr[0]));
    ctx.set_gpr(3, 0u + static_cast<std::uint32_t>(-32768));
    ctx.set_gpr(6, ctx.gpr[4] | ctx.gpr[3]);
    goto L_089C0FBC;
L_089C0FBC:
    ctx.set_gpr(3, rt.memory().aot_load8(ctx.gpr[2] + static_cast<std::uint32_t>(2)));
    { const bool branch_taken = static_cast<std::int32_t>(ctx.gpr[3]) < 0;
    // nop
      if (branch_taken) {
          goto L_089C0FD8;
      }
      goto L_089C0FC8;
    }
L_089C0FC8:
    ctx.fpr[0] = std::bit_cast<float>(ctx.gpr[3]);
    ctx.fpr[0] = static_cast<float>(static_cast<std::int32_t>(ctx.fpr_bits(0)));
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_089C0FF0;
      }
      goto L_089C0FD8;
    }
L_089C0FD8:
    ctx.set_gpr(4, ctx.gpr[3] >> 1u);
    ctx.set_gpr(3, ctx.gpr[3] & 1u);
    ctx.set_gpr(4, ctx.gpr[4] | ctx.gpr[3]);
    ctx.fpr[0] = std::bit_cast<float>(ctx.gpr[4]);
    ctx.fpr[0] = static_cast<float>(static_cast<std::int32_t>(ctx.fpr_bits(0)));
    ctx.fpr[0] = ctx.fpr[0] + ctx.fpr[0];
    goto L_089C0FF0;
L_089C0FF0:
    { const float fs = ctx.fpr[0]; const float ft = ctx.fpr[25]; if ((std::isinf(fs) && ft == 0.0f) || (std::isinf(ft) && fs == 0.0f)) ctx.set_fpr_bits(1, 0x7FC00000u); else ctx.fpr[1] = fs * ft; }
    ctx.set_gpr(3, 20224u << 16u);
    ctx.fpr[0] = std::bit_cast<float>(ctx.gpr[3]);
    ctx.set_fpu_condition((ctx.fpr[0] <= ctx.fpr[1]));
    // nop
    { const bool branch_taken = ctx.fpu_condition();
    // nop
      if (branch_taken) {
          goto L_089C101C;
      }
      goto L_089C100C;
    }
L_089C100C:
    ctx.set_fpr_bits(0, ctx.fpu_float_to_word(ctx.fpr[1], 1u));
    ctx.set_gpr(7, std::bit_cast<std::uint32_t>(ctx.fpr[0]));
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_089C1030;
      }
      goto L_089C101C;
    }
L_089C101C:
    ctx.fpr[0] = ctx.fpr[1] - ctx.fpr[0];
    ctx.set_fpr_bits(0, ctx.fpu_float_to_word(ctx.fpr[0], 1u));
    ctx.set_gpr(4, std::bit_cast<std::uint32_t>(ctx.fpr[0]));
    ctx.set_gpr(3, 0u + static_cast<std::uint32_t>(-32768));
    ctx.set_gpr(7, ctx.gpr[4] | ctx.gpr[3]);
    goto L_089C1030;
L_089C1030:
    ctx.set_gpr(2, rt.memory().aot_load8(ctx.gpr[2] + static_cast<std::uint32_t>(3)));
    { const bool branch_taken = static_cast<std::int32_t>(ctx.gpr[2]) < 0;
    // nop
      if (branch_taken) {
          goto L_089C104C;
      }
      goto L_089C103C;
    }
L_089C103C:
    ctx.fpr[0] = std::bit_cast<float>(ctx.gpr[2]);
    ctx.fpr[0] = static_cast<float>(static_cast<std::int32_t>(ctx.fpr_bits(0)));
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_089C1064;
      }
      goto L_089C104C;
    }
L_089C104C:
    ctx.set_gpr(3, ctx.gpr[2] >> 1u);
    ctx.set_gpr(2, ctx.gpr[2] & 1u);
    ctx.set_gpr(3, ctx.gpr[3] | ctx.gpr[2]);
    ctx.fpr[0] = std::bit_cast<float>(ctx.gpr[3]);
    ctx.fpr[0] = static_cast<float>(static_cast<std::int32_t>(ctx.fpr_bits(0)));
    ctx.fpr[0] = ctx.fpr[0] + ctx.fpr[0];
    goto L_089C1064;
L_089C1064:
    { const float fs = ctx.fpr[0]; const float ft = ctx.fpr[25]; if ((std::isinf(fs) && ft == 0.0f) || (std::isinf(ft) && fs == 0.0f)) ctx.set_fpr_bits(1, 0x7FC00000u); else ctx.fpr[1] = fs * ft; }
    ctx.set_gpr(2, 20224u << 16u);
    ctx.fpr[0] = std::bit_cast<float>(ctx.gpr[2]);
    ctx.set_fpu_condition((ctx.fpr[0] <= ctx.fpr[1]));
    // nop
    { const bool branch_taken = ctx.fpu_condition();
    // nop
      if (branch_taken) {
          goto L_089C1090;
      }
      goto L_089C1080;
    }
L_089C1080:
    ctx.set_fpr_bits(0, ctx.fpu_float_to_word(ctx.fpr[1], 1u));
    ctx.set_gpr(8, std::bit_cast<std::uint32_t>(ctx.fpr[0]));
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_089C10A4;
      }
      goto L_089C1090;
    }
L_089C1090:
    ctx.fpr[0] = ctx.fpr[1] - ctx.fpr[0];
    ctx.set_fpr_bits(0, ctx.fpu_float_to_word(ctx.fpr[0], 1u));
    ctx.set_gpr(3, std::bit_cast<std::uint32_t>(ctx.fpr[0]));
    ctx.set_gpr(2, 0u + static_cast<std::uint32_t>(-32768));
    ctx.set_gpr(8, ctx.gpr[3] | ctx.gpr[2]);
    goto L_089C10A4;
L_089C10A4:
    ctx.set_gpr(4, ctx.gpr[29] + static_cast<std::uint32_t>(580));
    ctx.set_gpr(31, 0x089C10B0u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0112_entry, 112u, 41u, 0x089C4700u>(ctx, &aot_mem) && ctx.pc == 0x089C10B0u) goto L_089C10B0;
    return;
L_089C10B0:
    ctx.set_gpr(2, rt.memory().aot_load8(ctx.gpr[29] + static_cast<std::uint32_t>(580)));
    { const bool branch_taken = static_cast<std::int32_t>(ctx.gpr[2]) < 0;
    // nop
      if (branch_taken) {
          goto L_089C10CC;
      }
      goto L_089C10BC;
    }
L_089C10BC:
    ctx.fpr[0] = std::bit_cast<float>(ctx.gpr[2]);
    ctx.fpr[0] = static_cast<float>(static_cast<std::int32_t>(ctx.fpr_bits(0)));
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_089C10E4;
      }
      goto L_089C10CC;
    }
L_089C10CC:
    ctx.set_gpr(3, ctx.gpr[2] >> 1u);
    ctx.set_gpr(2, ctx.gpr[2] & 1u);
    ctx.set_gpr(3, ctx.gpr[3] | ctx.gpr[2]);
    ctx.fpr[0] = std::bit_cast<float>(ctx.gpr[3]);
    ctx.fpr[0] = static_cast<float>(static_cast<std::int32_t>(ctx.fpr_bits(0)));
    ctx.fpr[0] = ctx.fpr[0] + ctx.fpr[0];
    goto L_089C10E4;
L_089C10E4:
    { const float fs = ctx.fpr[0]; const float ft = ctx.fpr[21]; if ((std::isinf(fs) && ft == 0.0f) || (std::isinf(ft) && fs == 0.0f)) ctx.set_fpr_bits(1, 0x7FC00000u); else ctx.fpr[1] = fs * ft; }
    ctx.set_gpr(2, 20224u << 16u);
    ctx.fpr[0] = std::bit_cast<float>(ctx.gpr[2]);
    ctx.set_fpu_condition((ctx.fpr[0] <= ctx.fpr[1]));
    // nop
    { const bool branch_taken = ctx.fpu_condition();
    // nop
      if (branch_taken) {
          goto L_089C1110;
      }
      goto L_089C1100;
    }
L_089C1100:
    ctx.set_fpr_bits(0, ctx.fpu_float_to_word(ctx.fpr[1], 1u));
    ctx.set_gpr(2, std::bit_cast<std::uint32_t>(ctx.fpr[0]));
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_089C1124;
      }
      goto L_089C1110;
    }
L_089C1110:
    ctx.fpr[0] = ctx.fpr[1] - ctx.fpr[0];
    ctx.set_fpr_bits(0, ctx.fpu_float_to_word(ctx.fpr[0], 1u));
    ctx.set_gpr(3, std::bit_cast<std::uint32_t>(ctx.fpr[0]));
    ctx.set_gpr(2, 0u + static_cast<std::uint32_t>(-32768));
    ctx.set_gpr(2, ctx.gpr[3] | ctx.gpr[2]);
    goto L_089C1124;
L_089C1124:
    ctx.set_gpr(5, ctx.gpr[2] & 255u);
    ctx.set_gpr(2, rt.memory().aot_load8(ctx.gpr[29] + static_cast<std::uint32_t>(581)));
    { const bool branch_taken = static_cast<std::int32_t>(ctx.gpr[2]) < 0;
    // nop
      if (branch_taken) {
          goto L_089C1144;
      }
      goto L_089C1134;
    }
L_089C1134:
    ctx.fpr[0] = std::bit_cast<float>(ctx.gpr[2]);
    ctx.fpr[0] = static_cast<float>(static_cast<std::int32_t>(ctx.fpr_bits(0)));
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_089C115C;
      }
      goto L_089C1144;
    }
L_089C1144:
    ctx.set_gpr(3, ctx.gpr[2] >> 1u);
    ctx.set_gpr(2, ctx.gpr[2] & 1u);
    ctx.set_gpr(3, ctx.gpr[3] | ctx.gpr[2]);
    ctx.fpr[0] = std::bit_cast<float>(ctx.gpr[3]);
    ctx.fpr[0] = static_cast<float>(static_cast<std::int32_t>(ctx.fpr_bits(0)));
    ctx.fpr[0] = ctx.fpr[0] + ctx.fpr[0];
    goto L_089C115C;
L_089C115C:
    { const float fs = ctx.fpr[0]; const float ft = ctx.fpr[21]; if ((std::isinf(fs) && ft == 0.0f) || (std::isinf(ft) && fs == 0.0f)) ctx.set_fpr_bits(1, 0x7FC00000u); else ctx.fpr[1] = fs * ft; }
    ctx.set_gpr(2, 20224u << 16u);
    ctx.fpr[0] = std::bit_cast<float>(ctx.gpr[2]);
    ctx.set_fpu_condition((ctx.fpr[0] <= ctx.fpr[1]));
    // nop
    { const bool branch_taken = ctx.fpu_condition();
    // nop
      if (branch_taken) {
          goto L_089C1188;
      }
      goto L_089C1178;
    }
L_089C1178:
    ctx.set_fpr_bits(0, ctx.fpu_float_to_word(ctx.fpr[1], 1u));
    ctx.set_gpr(6, std::bit_cast<std::uint32_t>(ctx.fpr[0]));
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_089C119C;
      }
      goto L_089C1188;
    }
L_089C1188:
    ctx.fpr[0] = ctx.fpr[1] - ctx.fpr[0];
    ctx.set_fpr_bits(0, ctx.fpu_float_to_word(ctx.fpr[0], 1u));
    ctx.set_gpr(3, std::bit_cast<std::uint32_t>(ctx.fpr[0]));
    ctx.set_gpr(2, 0u + static_cast<std::uint32_t>(-32768));
    ctx.set_gpr(6, ctx.gpr[3] | ctx.gpr[2]);
    goto L_089C119C;
L_089C119C:
    ctx.set_gpr(2, rt.memory().aot_load8(ctx.gpr[29] + static_cast<std::uint32_t>(582)));
    { const bool branch_taken = static_cast<std::int32_t>(ctx.gpr[2]) < 0;
    // nop
      if (branch_taken) {
          goto L_089C11B8;
      }
      goto L_089C11A8;
    }
L_089C11A8:
    ctx.fpr[0] = std::bit_cast<float>(ctx.gpr[2]);
    ctx.fpr[0] = static_cast<float>(static_cast<std::int32_t>(ctx.fpr_bits(0)));
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_089C11D0;
      }
      goto L_089C11B8;
    }
L_089C11B8:
    ctx.set_gpr(3, ctx.gpr[2] >> 1u);
    ctx.set_gpr(2, ctx.gpr[2] & 1u);
    ctx.set_gpr(3, ctx.gpr[3] | ctx.gpr[2]);
    ctx.fpr[0] = std::bit_cast<float>(ctx.gpr[3]);
    ctx.fpr[0] = static_cast<float>(static_cast<std::int32_t>(ctx.fpr_bits(0)));
    ctx.fpr[0] = ctx.fpr[0] + ctx.fpr[0];
    goto L_089C11D0;
L_089C11D0:
    { const float fs = ctx.fpr[0]; const float ft = ctx.fpr[21]; if ((std::isinf(fs) && ft == 0.0f) || (std::isinf(ft) && fs == 0.0f)) ctx.set_fpr_bits(1, 0x7FC00000u); else ctx.fpr[1] = fs * ft; }
    ctx.set_gpr(2, 20224u << 16u);
    ctx.fpr[0] = std::bit_cast<float>(ctx.gpr[2]);
    ctx.set_fpu_condition((ctx.fpr[0] <= ctx.fpr[1]));
    // nop
    { const bool branch_taken = ctx.fpu_condition();
    // nop
      if (branch_taken) {
          goto L_089C11FC;
      }
      goto L_089C11EC;
    }
L_089C11EC:
    ctx.set_fpr_bits(0, ctx.fpu_float_to_word(ctx.fpr[1], 1u));
    ctx.set_gpr(7, std::bit_cast<std::uint32_t>(ctx.fpr[0]));
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_089C1210;
      }
      goto L_089C11FC;
    }
L_089C11FC:
    ctx.fpr[0] = ctx.fpr[1] - ctx.fpr[0];
    ctx.set_fpr_bits(0, ctx.fpu_float_to_word(ctx.fpr[0], 1u));
    ctx.set_gpr(3, std::bit_cast<std::uint32_t>(ctx.fpr[0]));
    ctx.set_gpr(2, 0u + static_cast<std::uint32_t>(-32768));
    ctx.set_gpr(7, ctx.gpr[3] | ctx.gpr[2]);
    goto L_089C1210;
L_089C1210:
    ctx.set_gpr(2, rt.memory().aot_load8(ctx.gpr[29] + static_cast<std::uint32_t>(583)));
    { const bool branch_taken = static_cast<std::int32_t>(ctx.gpr[2]) < 0;
    // nop
      if (branch_taken) {
          goto L_089C122C;
      }
      goto L_089C121C;
    }
L_089C121C:
    ctx.fpr[0] = std::bit_cast<float>(ctx.gpr[2]);
    ctx.fpr[0] = static_cast<float>(static_cast<std::int32_t>(ctx.fpr_bits(0)));
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_089C1244;
      }
      goto L_089C122C;
    }
L_089C122C:
    ctx.set_gpr(3, ctx.gpr[2] >> 1u);
    ctx.set_gpr(2, ctx.gpr[2] & 1u);
    ctx.set_gpr(3, ctx.gpr[3] | ctx.gpr[2]);
    ctx.fpr[0] = std::bit_cast<float>(ctx.gpr[3]);
    ctx.fpr[0] = static_cast<float>(static_cast<std::int32_t>(ctx.fpr_bits(0)));
    ctx.fpr[0] = ctx.fpr[0] + ctx.fpr[0];
    goto L_089C1244;
L_089C1244:
    { const float fs = ctx.fpr[0]; const float ft = ctx.fpr[21]; if ((std::isinf(fs) && ft == 0.0f) || (std::isinf(ft) && fs == 0.0f)) ctx.set_fpr_bits(1, 0x7FC00000u); else ctx.fpr[1] = fs * ft; }
    ctx.set_gpr(2, 20224u << 16u);
    ctx.fpr[0] = std::bit_cast<float>(ctx.gpr[2]);
    ctx.set_fpu_condition((ctx.fpr[0] <= ctx.fpr[1]));
    // nop
    { const bool branch_taken = ctx.fpu_condition();
    // nop
      if (branch_taken) {
          goto L_089C1270;
      }
      goto L_089C1260;
    }
L_089C1260:
    ctx.set_fpr_bits(0, ctx.fpu_float_to_word(ctx.fpr[1], 1u));
    ctx.set_gpr(8, std::bit_cast<std::uint32_t>(ctx.fpr[0]));
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_089C1284;
      }
      goto L_089C1270;
    }
L_089C1270:
    ctx.fpr[0] = ctx.fpr[1] - ctx.fpr[0];
    ctx.set_fpr_bits(0, ctx.fpu_float_to_word(ctx.fpr[0], 1u));
    ctx.set_gpr(3, std::bit_cast<std::uint32_t>(ctx.fpr[0]));
    ctx.set_gpr(2, 0u + static_cast<std::uint32_t>(-32768));
    ctx.set_gpr(8, ctx.gpr[3] | ctx.gpr[2]);
    goto L_089C1284;
L_089C1284:
    ctx.set_gpr(4, ctx.gpr[29] + static_cast<std::uint32_t>(584));
    ctx.set_gpr(31, 0x089C1290u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0112_entry, 112u, 41u, 0x089C4700u>(ctx, &aot_mem) && ctx.pc == 0x089C1290u) goto L_089C1290;
    return;
L_089C1290:
    ctx.set_gpr(3, rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(1476)));
    ctx.set_gpr(2, ctx.gpr[3] << 3u);
    ctx.set_gpr(2, ctx.gpr[2] + ctx.gpr[3]);
    ctx.set_gpr(2, ctx.gpr[18] + ctx.gpr[2]);
    ctx.set_gpr(3, rt.memory().aot_load8(ctx.gpr[2] + static_cast<std::uint32_t>(0)));
    { const bool branch_taken = static_cast<std::int32_t>(ctx.gpr[3]) < 0;
    // nop
      if (branch_taken) {
          goto L_089C12BC;
      }
      goto L_089C12AC;
    }
L_089C12AC:
    ctx.fpr[0] = std::bit_cast<float>(ctx.gpr[3]);
    ctx.fpr[0] = static_cast<float>(static_cast<std::int32_t>(ctx.fpr_bits(0)));
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_089C12D4;
      }
      goto L_089C12BC;
    }
L_089C12BC:
    ctx.set_gpr(4, ctx.gpr[3] >> 1u);
    ctx.set_gpr(3, ctx.gpr[3] & 1u);
    ctx.set_gpr(4, ctx.gpr[4] | ctx.gpr[3]);
    ctx.fpr[0] = std::bit_cast<float>(ctx.gpr[4]);
    ctx.fpr[0] = static_cast<float>(static_cast<std::int32_t>(ctx.fpr_bits(0)));
    ctx.fpr[0] = ctx.fpr[0] + ctx.fpr[0];
    goto L_089C12D4;
L_089C12D4:
    { const float fs = ctx.fpr[0]; const float ft = ctx.fpr[26]; if ((std::isinf(fs) && ft == 0.0f) || (std::isinf(ft) && fs == 0.0f)) ctx.set_fpr_bits(1, 0x7FC00000u); else ctx.fpr[1] = fs * ft; }
    ctx.set_gpr(3, 20224u << 16u);
    ctx.fpr[0] = std::bit_cast<float>(ctx.gpr[3]);
    ctx.set_fpu_condition((ctx.fpr[0] <= ctx.fpr[1]));
    // nop
    { const bool branch_taken = ctx.fpu_condition();
    // nop
      if (branch_taken) {
          goto L_089C1300;
      }
      goto L_089C12F0;
    }
L_089C12F0:
    ctx.set_fpr_bits(0, ctx.fpu_float_to_word(ctx.fpr[1], 1u));
    ctx.set_gpr(3, std::bit_cast<std::uint32_t>(ctx.fpr[0]));
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_089C1314;
      }
      goto L_089C1300;
    }
L_089C1300:
    ctx.fpr[0] = ctx.fpr[1] - ctx.fpr[0];
    ctx.set_fpr_bits(0, ctx.fpu_float_to_word(ctx.fpr[0], 1u));
    ctx.set_gpr(4, std::bit_cast<std::uint32_t>(ctx.fpr[0]));
    ctx.set_gpr(3, 0u + static_cast<std::uint32_t>(-32768));
    ctx.set_gpr(3, ctx.gpr[4] | ctx.gpr[3]);
    goto L_089C1314;
L_089C1314:
    ctx.set_gpr(5, ctx.gpr[3] & 255u);
    ctx.set_gpr(3, rt.memory().aot_load8(ctx.gpr[2] + static_cast<std::uint32_t>(1)));
    { const bool branch_taken = static_cast<std::int32_t>(ctx.gpr[3]) < 0;
    // nop
      if (branch_taken) {
          goto L_089C1334;
      }
      goto L_089C1324;
    }
L_089C1324:
    ctx.fpr[0] = std::bit_cast<float>(ctx.gpr[3]);
    ctx.fpr[0] = static_cast<float>(static_cast<std::int32_t>(ctx.fpr_bits(0)));
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_089C134C;
      }
      goto L_089C1334;
    }
L_089C1334:
    ctx.set_gpr(4, ctx.gpr[3] >> 1u);
    ctx.set_gpr(3, ctx.gpr[3] & 1u);
    ctx.set_gpr(4, ctx.gpr[4] | ctx.gpr[3]);
    ctx.fpr[0] = std::bit_cast<float>(ctx.gpr[4]);
    ctx.fpr[0] = static_cast<float>(static_cast<std::int32_t>(ctx.fpr_bits(0)));
    ctx.fpr[0] = ctx.fpr[0] + ctx.fpr[0];
    goto L_089C134C;
L_089C134C:
    { const float fs = ctx.fpr[0]; const float ft = ctx.fpr[26]; if ((std::isinf(fs) && ft == 0.0f) || (std::isinf(ft) && fs == 0.0f)) ctx.set_fpr_bits(1, 0x7FC00000u); else ctx.fpr[1] = fs * ft; }
    ctx.set_gpr(3, 20224u << 16u);
    ctx.fpr[0] = std::bit_cast<float>(ctx.gpr[3]);
    ctx.set_fpu_condition((ctx.fpr[0] <= ctx.fpr[1]));
    // nop
    { const bool branch_taken = ctx.fpu_condition();
    // nop
      if (branch_taken) {
          goto L_089C1378;
      }
      goto L_089C1368;
    }
L_089C1368:
    ctx.set_fpr_bits(0, ctx.fpu_float_to_word(ctx.fpr[1], 1u));
    ctx.set_gpr(6, std::bit_cast<std::uint32_t>(ctx.fpr[0]));
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_089C138C;
      }
      goto L_089C1378;
    }
L_089C1378:
    ctx.fpr[0] = ctx.fpr[1] - ctx.fpr[0];
    ctx.set_fpr_bits(0, ctx.fpu_float_to_word(ctx.fpr[0], 1u));
    ctx.set_gpr(4, std::bit_cast<std::uint32_t>(ctx.fpr[0]));
    ctx.set_gpr(3, 0u + static_cast<std::uint32_t>(-32768));
    ctx.set_gpr(6, ctx.gpr[4] | ctx.gpr[3]);
    goto L_089C138C;
L_089C138C:
    ctx.set_gpr(3, rt.memory().aot_load8(ctx.gpr[2] + static_cast<std::uint32_t>(2)));
    { const bool branch_taken = static_cast<std::int32_t>(ctx.gpr[3]) < 0;
    // nop
      if (branch_taken) {
          goto L_089C13A8;
      }
      goto L_089C1398;
    }
L_089C1398:
    ctx.fpr[0] = std::bit_cast<float>(ctx.gpr[3]);
    ctx.fpr[0] = static_cast<float>(static_cast<std::int32_t>(ctx.fpr_bits(0)));
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_089C13C0;
      }
      goto L_089C13A8;
    }
L_089C13A8:
    ctx.set_gpr(4, ctx.gpr[3] >> 1u);
    ctx.set_gpr(3, ctx.gpr[3] & 1u);
    ctx.set_gpr(4, ctx.gpr[4] | ctx.gpr[3]);
    ctx.fpr[0] = std::bit_cast<float>(ctx.gpr[4]);
    ctx.fpr[0] = static_cast<float>(static_cast<std::int32_t>(ctx.fpr_bits(0)));
    ctx.fpr[0] = ctx.fpr[0] + ctx.fpr[0];
    goto L_089C13C0;
L_089C13C0:
    { const float fs = ctx.fpr[0]; const float ft = ctx.fpr[26]; if ((std::isinf(fs) && ft == 0.0f) || (std::isinf(ft) && fs == 0.0f)) ctx.set_fpr_bits(1, 0x7FC00000u); else ctx.fpr[1] = fs * ft; }
    ctx.set_gpr(3, 20224u << 16u);
    ctx.fpr[0] = std::bit_cast<float>(ctx.gpr[3]);
    ctx.set_fpu_condition((ctx.fpr[0] <= ctx.fpr[1]));
    // nop
    { const bool branch_taken = ctx.fpu_condition();
    // nop
      if (branch_taken) {
          goto L_089C13EC;
      }
      goto L_089C13DC;
    }
L_089C13DC:
    ctx.set_fpr_bits(0, ctx.fpu_float_to_word(ctx.fpr[1], 1u));
    ctx.set_gpr(7, std::bit_cast<std::uint32_t>(ctx.fpr[0]));
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_089C1400;
      }
      goto L_089C13EC;
    }
L_089C13EC:
    ctx.fpr[0] = ctx.fpr[1] - ctx.fpr[0];
    ctx.set_fpr_bits(0, ctx.fpu_float_to_word(ctx.fpr[0], 1u));
    ctx.set_gpr(4, std::bit_cast<std::uint32_t>(ctx.fpr[0]));
    ctx.set_gpr(3, 0u + static_cast<std::uint32_t>(-32768));
    ctx.set_gpr(7, ctx.gpr[4] | ctx.gpr[3]);
    goto L_089C1400;
L_089C1400:
    ctx.set_gpr(2, rt.memory().aot_load8(ctx.gpr[2] + static_cast<std::uint32_t>(3)));
    { const bool branch_taken = static_cast<std::int32_t>(ctx.gpr[2]) < 0;
    // nop
      if (branch_taken) {
          goto L_089C141C;
      }
      goto L_089C140C;
    }
L_089C140C:
    ctx.fpr[0] = std::bit_cast<float>(ctx.gpr[2]);
    ctx.fpr[0] = static_cast<float>(static_cast<std::int32_t>(ctx.fpr_bits(0)));
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_089C1434;
      }
      goto L_089C141C;
    }
L_089C141C:
    ctx.set_gpr(3, ctx.gpr[2] >> 1u);
    ctx.set_gpr(2, ctx.gpr[2] & 1u);
    ctx.set_gpr(3, ctx.gpr[3] | ctx.gpr[2]);
    ctx.fpr[0] = std::bit_cast<float>(ctx.gpr[3]);
    ctx.fpr[0] = static_cast<float>(static_cast<std::int32_t>(ctx.fpr_bits(0)));
    ctx.fpr[0] = ctx.fpr[0] + ctx.fpr[0];
    goto L_089C1434;
L_089C1434:
    { const float fs = ctx.fpr[0]; const float ft = ctx.fpr[26]; if ((std::isinf(fs) && ft == 0.0f) || (std::isinf(ft) && fs == 0.0f)) ctx.set_fpr_bits(1, 0x7FC00000u); else ctx.fpr[1] = fs * ft; }
    ctx.set_gpr(2, 20224u << 16u);
    ctx.fpr[0] = std::bit_cast<float>(ctx.gpr[2]);
    ctx.set_fpu_condition((ctx.fpr[0] <= ctx.fpr[1]));
    // nop
    { const bool branch_taken = ctx.fpu_condition();
    // nop
      if (branch_taken) {
          goto L_089C1460;
      }
      goto L_089C1450;
    }
L_089C1450:
    ctx.set_fpr_bits(0, ctx.fpu_float_to_word(ctx.fpr[1], 1u));
    ctx.set_gpr(8, std::bit_cast<std::uint32_t>(ctx.fpr[0]));
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_089C1474;
      }
      goto L_089C1460;
    }
L_089C1460:
    ctx.fpr[0] = ctx.fpr[1] - ctx.fpr[0];
    ctx.set_fpr_bits(0, ctx.fpu_float_to_word(ctx.fpr[0], 1u));
    ctx.set_gpr(3, std::bit_cast<std::uint32_t>(ctx.fpr[0]));
    ctx.set_gpr(2, 0u + static_cast<std::uint32_t>(-32768));
    ctx.set_gpr(8, ctx.gpr[3] | ctx.gpr[2]);
    goto L_089C1474;
L_089C1474:
    ctx.set_gpr(4, ctx.gpr[29] + static_cast<std::uint32_t>(588));
    ctx.set_gpr(31, 0x089C1480u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0112_entry, 112u, 41u, 0x089C4700u>(ctx, &aot_mem) && ctx.pc == 0x089C1480u) goto L_089C1480;
    return;
L_089C1480:
    ctx.set_gpr(2, rt.memory().aot_load8(ctx.gpr[29] + static_cast<std::uint32_t>(588)));
    { const bool branch_taken = static_cast<std::int32_t>(ctx.gpr[2]) < 0;
    // nop
      if (branch_taken) {
          goto L_089C149C;
      }
      goto L_089C148C;
    }
L_089C148C:
    ctx.fpr[0] = std::bit_cast<float>(ctx.gpr[2]);
    ctx.fpr[0] = static_cast<float>(static_cast<std::int32_t>(ctx.fpr_bits(0)));
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_089C14B4;
      }
      goto L_089C149C;
    }
L_089C149C:
    ctx.set_gpr(3, ctx.gpr[2] >> 1u);
    ctx.set_gpr(2, ctx.gpr[2] & 1u);
    ctx.set_gpr(3, ctx.gpr[3] | ctx.gpr[2]);
    ctx.fpr[0] = std::bit_cast<float>(ctx.gpr[3]);
    ctx.fpr[0] = static_cast<float>(static_cast<std::int32_t>(ctx.fpr_bits(0)));
    ctx.fpr[0] = ctx.fpr[0] + ctx.fpr[0];
    goto L_089C14B4;
L_089C14B4:
    { const float fs = ctx.fpr[0]; const float ft = ctx.fpr[21]; if ((std::isinf(fs) && ft == 0.0f) || (std::isinf(ft) && fs == 0.0f)) ctx.set_fpr_bits(1, 0x7FC00000u); else ctx.fpr[1] = fs * ft; }
    ctx.set_gpr(2, 20224u << 16u);
    ctx.fpr[0] = std::bit_cast<float>(ctx.gpr[2]);
    ctx.set_fpu_condition((ctx.fpr[0] <= ctx.fpr[1]));
    // nop
    { const bool branch_taken = ctx.fpu_condition();
    // nop
      if (branch_taken) {
          goto L_089C14E0;
      }
      goto L_089C14D0;
    }
L_089C14D0:
    ctx.set_fpr_bits(0, ctx.fpu_float_to_word(ctx.fpr[1], 1u));
    ctx.set_gpr(2, std::bit_cast<std::uint32_t>(ctx.fpr[0]));
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_089C14F4;
      }
      goto L_089C14E0;
    }
L_089C14E0:
    ctx.fpr[0] = ctx.fpr[1] - ctx.fpr[0];
    ctx.set_fpr_bits(0, ctx.fpu_float_to_word(ctx.fpr[0], 1u));
    ctx.set_gpr(3, std::bit_cast<std::uint32_t>(ctx.fpr[0]));
    ctx.set_gpr(2, 0u + static_cast<std::uint32_t>(-32768));
    ctx.set_gpr(2, ctx.gpr[3] | ctx.gpr[2]);
    goto L_089C14F4;
L_089C14F4:
    ctx.set_gpr(5, ctx.gpr[2] & 255u);
    ctx.set_gpr(2, rt.memory().aot_load8(ctx.gpr[29] + static_cast<std::uint32_t>(589)));
    { const bool branch_taken = static_cast<std::int32_t>(ctx.gpr[2]) < 0;
    // nop
      if (branch_taken) {
          goto L_089C1514;
      }
      goto L_089C1504;
    }
L_089C1504:
    ctx.fpr[0] = std::bit_cast<float>(ctx.gpr[2]);
    ctx.fpr[0] = static_cast<float>(static_cast<std::int32_t>(ctx.fpr_bits(0)));
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_089C152C;
      }
      goto L_089C1514;
    }
L_089C1514:
    ctx.set_gpr(3, ctx.gpr[2] >> 1u);
    ctx.set_gpr(2, ctx.gpr[2] & 1u);
    ctx.set_gpr(3, ctx.gpr[3] | ctx.gpr[2]);
    ctx.fpr[0] = std::bit_cast<float>(ctx.gpr[3]);
    ctx.fpr[0] = static_cast<float>(static_cast<std::int32_t>(ctx.fpr_bits(0)));
    ctx.fpr[0] = ctx.fpr[0] + ctx.fpr[0];
    goto L_089C152C;
L_089C152C:
    { const float fs = ctx.fpr[0]; const float ft = ctx.fpr[21]; if ((std::isinf(fs) && ft == 0.0f) || (std::isinf(ft) && fs == 0.0f)) ctx.set_fpr_bits(1, 0x7FC00000u); else ctx.fpr[1] = fs * ft; }
    ctx.set_gpr(2, 20224u << 16u);
    ctx.fpr[0] = std::bit_cast<float>(ctx.gpr[2]);
    ctx.set_fpu_condition((ctx.fpr[0] <= ctx.fpr[1]));
    // nop
    { const bool branch_taken = ctx.fpu_condition();
    // nop
      if (branch_taken) {
          goto L_089C1558;
      }
      goto L_089C1548;
    }
L_089C1548:
    ctx.set_fpr_bits(0, ctx.fpu_float_to_word(ctx.fpr[1], 1u));
    ctx.set_gpr(6, std::bit_cast<std::uint32_t>(ctx.fpr[0]));
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_089C156C;
      }
      goto L_089C1558;
    }
L_089C1558:
    ctx.fpr[0] = ctx.fpr[1] - ctx.fpr[0];
    ctx.set_fpr_bits(0, ctx.fpu_float_to_word(ctx.fpr[0], 1u));
    ctx.set_gpr(3, std::bit_cast<std::uint32_t>(ctx.fpr[0]));
    ctx.set_gpr(2, 0u + static_cast<std::uint32_t>(-32768));
    ctx.set_gpr(6, ctx.gpr[3] | ctx.gpr[2]);
    goto L_089C156C;
L_089C156C:
    ctx.set_gpr(2, rt.memory().aot_load8(ctx.gpr[29] + static_cast<std::uint32_t>(590)));
    { const bool branch_taken = static_cast<std::int32_t>(ctx.gpr[2]) < 0;
    // nop
      if (branch_taken) {
          goto L_089C1588;
      }
      goto L_089C1578;
    }
L_089C1578:
    ctx.fpr[0] = std::bit_cast<float>(ctx.gpr[2]);
    ctx.fpr[0] = static_cast<float>(static_cast<std::int32_t>(ctx.fpr_bits(0)));
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_089C15A0;
      }
      goto L_089C1588;
    }
L_089C1588:
    ctx.set_gpr(3, ctx.gpr[2] >> 1u);
    ctx.set_gpr(2, ctx.gpr[2] & 1u);
    ctx.set_gpr(3, ctx.gpr[3] | ctx.gpr[2]);
    ctx.fpr[0] = std::bit_cast<float>(ctx.gpr[3]);
    ctx.fpr[0] = static_cast<float>(static_cast<std::int32_t>(ctx.fpr_bits(0)));
    ctx.fpr[0] = ctx.fpr[0] + ctx.fpr[0];
    goto L_089C15A0;
L_089C15A0:
    { const float fs = ctx.fpr[0]; const float ft = ctx.fpr[21]; if ((std::isinf(fs) && ft == 0.0f) || (std::isinf(ft) && fs == 0.0f)) ctx.set_fpr_bits(1, 0x7FC00000u); else ctx.fpr[1] = fs * ft; }
    ctx.set_gpr(2, 20224u << 16u);
    ctx.fpr[0] = std::bit_cast<float>(ctx.gpr[2]);
    ctx.set_fpu_condition((ctx.fpr[0] <= ctx.fpr[1]));
    // nop
    { const bool branch_taken = ctx.fpu_condition();
    // nop
      if (branch_taken) {
          goto L_089C15CC;
      }
      goto L_089C15BC;
    }
L_089C15BC:
    ctx.set_fpr_bits(0, ctx.fpu_float_to_word(ctx.fpr[1], 1u));
    ctx.set_gpr(7, std::bit_cast<std::uint32_t>(ctx.fpr[0]));
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_089C15E0;
      }
      goto L_089C15CC;
    }
L_089C15CC:
    ctx.fpr[0] = ctx.fpr[1] - ctx.fpr[0];
    ctx.set_fpr_bits(0, ctx.fpu_float_to_word(ctx.fpr[0], 1u));
    ctx.set_gpr(3, std::bit_cast<std::uint32_t>(ctx.fpr[0]));
    ctx.set_gpr(2, 0u + static_cast<std::uint32_t>(-32768));
    ctx.set_gpr(7, ctx.gpr[3] | ctx.gpr[2]);
    goto L_089C15E0;
L_089C15E0:
    ctx.set_gpr(2, rt.memory().aot_load8(ctx.gpr[29] + static_cast<std::uint32_t>(591)));
    { const bool branch_taken = static_cast<std::int32_t>(ctx.gpr[2]) < 0;
    // nop
      if (branch_taken) {
          goto L_089C15FC;
      }
      goto L_089C15EC;
    }
L_089C15EC:
    ctx.fpr[0] = std::bit_cast<float>(ctx.gpr[2]);
    ctx.fpr[0] = static_cast<float>(static_cast<std::int32_t>(ctx.fpr_bits(0)));
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_089C1614;
      }
      goto L_089C15FC;
    }
L_089C15FC:
    ctx.set_gpr(3, ctx.gpr[2] >> 1u);
    ctx.set_gpr(2, ctx.gpr[2] & 1u);
    ctx.set_gpr(3, ctx.gpr[3] | ctx.gpr[2]);
    ctx.fpr[0] = std::bit_cast<float>(ctx.gpr[3]);
    ctx.fpr[0] = static_cast<float>(static_cast<std::int32_t>(ctx.fpr_bits(0)));
    ctx.fpr[0] = ctx.fpr[0] + ctx.fpr[0];
    goto L_089C1614;
L_089C1614:
    { const float fs = ctx.fpr[0]; const float ft = ctx.fpr[21]; if ((std::isinf(fs) && ft == 0.0f) || (std::isinf(ft) && fs == 0.0f)) ctx.set_fpr_bits(1, 0x7FC00000u); else ctx.fpr[1] = fs * ft; }
    ctx.set_gpr(2, 20224u << 16u);
    ctx.fpr[0] = std::bit_cast<float>(ctx.gpr[2]);
    ctx.set_fpu_condition((ctx.fpr[0] <= ctx.fpr[1]));
    // nop
    { const bool branch_taken = ctx.fpu_condition();
    // nop
      if (branch_taken) {
          goto L_089C1640;
      }
      goto L_089C1630;
    }
L_089C1630:
    ctx.set_fpr_bits(0, ctx.fpu_float_to_word(ctx.fpr[1], 1u));
    ctx.set_gpr(8, std::bit_cast<std::uint32_t>(ctx.fpr[0]));
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_089C1654;
      }
      goto L_089C1640;
    }
L_089C1640:
    ctx.fpr[0] = ctx.fpr[1] - ctx.fpr[0];
    ctx.set_fpr_bits(0, ctx.fpu_float_to_word(ctx.fpr[0], 1u));
    ctx.set_gpr(3, std::bit_cast<std::uint32_t>(ctx.fpr[0]));
    ctx.set_gpr(2, 0u + static_cast<std::uint32_t>(-32768));
    ctx.set_gpr(8, ctx.gpr[3] | ctx.gpr[2]);
    goto L_089C1654;
L_089C1654:
    ctx.set_gpr(4, ctx.gpr[29] + static_cast<std::uint32_t>(592));
    ctx.set_gpr(31, 0x089C1660u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0112_entry, 112u, 41u, 0x089C4700u>(ctx, &aot_mem) && ctx.pc == 0x089C1660u) goto L_089C1660;
    return;
L_089C1660:
    ctx.set_gpr(2, rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(1476)));
    ctx.set_gpr(2, ctx.gpr[2] << 3u);
    ctx.set_gpr(2, ctx.gpr[18] + ctx.gpr[2]);
    ctx.set_gpr(3, rt.memory().aot_load8(ctx.gpr[2] + static_cast<std::uint32_t>(0)));
    { const bool branch_taken = static_cast<std::int32_t>(ctx.gpr[3]) < 0;
    // nop
      if (branch_taken) {
          goto L_089C1688;
      }
      goto L_089C1678;
    }
L_089C1678:
    ctx.fpr[0] = std::bit_cast<float>(ctx.gpr[3]);
    ctx.fpr[0] = static_cast<float>(static_cast<std::int32_t>(ctx.fpr_bits(0)));
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_089C16A0;
      }
      goto L_089C1688;
    }
L_089C1688:
    ctx.set_gpr(4, ctx.gpr[3] >> 1u);
    ctx.set_gpr(3, ctx.gpr[3] & 1u);
    ctx.set_gpr(4, ctx.gpr[4] | ctx.gpr[3]);
    ctx.fpr[0] = std::bit_cast<float>(ctx.gpr[4]);
    ctx.fpr[0] = static_cast<float>(static_cast<std::int32_t>(ctx.fpr_bits(0)));
    ctx.fpr[0] = ctx.fpr[0] + ctx.fpr[0];
    goto L_089C16A0;
L_089C16A0:
    { const float fs = ctx.fpr[0]; const float ft = ctx.fpr[27]; if ((std::isinf(fs) && ft == 0.0f) || (std::isinf(ft) && fs == 0.0f)) ctx.set_fpr_bits(1, 0x7FC00000u); else ctx.fpr[1] = fs * ft; }
    ctx.set_gpr(3, 20224u << 16u);
    ctx.fpr[0] = std::bit_cast<float>(ctx.gpr[3]);
    ctx.set_fpu_condition((ctx.fpr[0] <= ctx.fpr[1]));
    // nop
    { const bool branch_taken = ctx.fpu_condition();
    // nop
      if (branch_taken) {
          goto L_089C16CC;
      }
      goto L_089C16BC;
    }
L_089C16BC:
    ctx.set_fpr_bits(0, ctx.fpu_float_to_word(ctx.fpr[1], 1u));
    ctx.set_gpr(3, std::bit_cast<std::uint32_t>(ctx.fpr[0]));
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_089C16E0;
      }
      goto L_089C16CC;
    }
L_089C16CC:
    ctx.fpr[0] = ctx.fpr[1] - ctx.fpr[0];
    ctx.set_fpr_bits(0, ctx.fpu_float_to_word(ctx.fpr[0], 1u));
    ctx.set_gpr(4, std::bit_cast<std::uint32_t>(ctx.fpr[0]));
    ctx.set_gpr(3, 0u + static_cast<std::uint32_t>(-32768));
    ctx.set_gpr(3, ctx.gpr[4] | ctx.gpr[3]);
    goto L_089C16E0;
L_089C16E0:
    ctx.set_gpr(5, ctx.gpr[3] & 255u);
    ctx.set_gpr(3, rt.memory().aot_load8(ctx.gpr[2] + static_cast<std::uint32_t>(1)));
    { const bool branch_taken = static_cast<std::int32_t>(ctx.gpr[3]) < 0;
    // nop
      if (branch_taken) {
          goto L_089C1700;
      }
      goto L_089C16F0;
    }
L_089C16F0:
    ctx.fpr[0] = std::bit_cast<float>(ctx.gpr[3]);
    ctx.fpr[0] = static_cast<float>(static_cast<std::int32_t>(ctx.fpr_bits(0)));
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_089C1718;
      }
      goto L_089C1700;
    }
L_089C1700:
    ctx.set_gpr(4, ctx.gpr[3] >> 1u);
    ctx.set_gpr(3, ctx.gpr[3] & 1u);
    ctx.set_gpr(4, ctx.gpr[4] | ctx.gpr[3]);
    ctx.fpr[0] = std::bit_cast<float>(ctx.gpr[4]);
    ctx.fpr[0] = static_cast<float>(static_cast<std::int32_t>(ctx.fpr_bits(0)));
    ctx.fpr[0] = ctx.fpr[0] + ctx.fpr[0];
    goto L_089C1718;
L_089C1718:
    { const float fs = ctx.fpr[0]; const float ft = ctx.fpr[27]; if ((std::isinf(fs) && ft == 0.0f) || (std::isinf(ft) && fs == 0.0f)) ctx.set_fpr_bits(1, 0x7FC00000u); else ctx.fpr[1] = fs * ft; }
    ctx.set_gpr(3, 20224u << 16u);
    ctx.fpr[0] = std::bit_cast<float>(ctx.gpr[3]);
    ctx.set_fpu_condition((ctx.fpr[0] <= ctx.fpr[1]));
    // nop
    { const bool branch_taken = ctx.fpu_condition();
    // nop
      if (branch_taken) {
          goto L_089C1744;
      }
      goto L_089C1734;
    }
L_089C1734:
    ctx.set_fpr_bits(0, ctx.fpu_float_to_word(ctx.fpr[1], 1u));
    ctx.set_gpr(6, std::bit_cast<std::uint32_t>(ctx.fpr[0]));
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_089C1758;
      }
      goto L_089C1744;
    }
L_089C1744:
    ctx.fpr[0] = ctx.fpr[1] - ctx.fpr[0];
    ctx.set_fpr_bits(0, ctx.fpu_float_to_word(ctx.fpr[0], 1u));
    ctx.set_gpr(4, std::bit_cast<std::uint32_t>(ctx.fpr[0]));
    ctx.set_gpr(3, 0u + static_cast<std::uint32_t>(-32768));
    ctx.set_gpr(6, ctx.gpr[4] | ctx.gpr[3]);
    goto L_089C1758;
L_089C1758:
    ctx.set_gpr(3, rt.memory().aot_load8(ctx.gpr[2] + static_cast<std::uint32_t>(2)));
    { const bool branch_taken = static_cast<std::int32_t>(ctx.gpr[3]) < 0;
    // nop
      if (branch_taken) {
          goto L_089C1774;
      }
      goto L_089C1764;
    }
L_089C1764:
    ctx.fpr[0] = std::bit_cast<float>(ctx.gpr[3]);
    ctx.fpr[0] = static_cast<float>(static_cast<std::int32_t>(ctx.fpr_bits(0)));
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_089C178C;
      }
      goto L_089C1774;
    }
L_089C1774:
    ctx.set_gpr(4, ctx.gpr[3] >> 1u);
    ctx.set_gpr(3, ctx.gpr[3] & 1u);
    ctx.set_gpr(4, ctx.gpr[4] | ctx.gpr[3]);
    ctx.fpr[0] = std::bit_cast<float>(ctx.gpr[4]);
    ctx.fpr[0] = static_cast<float>(static_cast<std::int32_t>(ctx.fpr_bits(0)));
    ctx.fpr[0] = ctx.fpr[0] + ctx.fpr[0];
    goto L_089C178C;
L_089C178C:
    { const float fs = ctx.fpr[0]; const float ft = ctx.fpr[27]; if ((std::isinf(fs) && ft == 0.0f) || (std::isinf(ft) && fs == 0.0f)) ctx.set_fpr_bits(1, 0x7FC00000u); else ctx.fpr[1] = fs * ft; }
    ctx.set_gpr(3, 20224u << 16u);
    ctx.fpr[0] = std::bit_cast<float>(ctx.gpr[3]);
    ctx.set_fpu_condition((ctx.fpr[0] <= ctx.fpr[1]));
    // nop
    { const bool branch_taken = ctx.fpu_condition();
    // nop
      if (branch_taken) {
          goto L_089C17B8;
      }
      goto L_089C17A8;
    }
L_089C17A8:
    ctx.set_fpr_bits(0, ctx.fpu_float_to_word(ctx.fpr[1], 1u));
    ctx.set_gpr(7, std::bit_cast<std::uint32_t>(ctx.fpr[0]));
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_089C17CC;
      }
      goto L_089C17B8;
    }
L_089C17B8:
    ctx.fpr[0] = ctx.fpr[1] - ctx.fpr[0];
    ctx.set_fpr_bits(0, ctx.fpu_float_to_word(ctx.fpr[0], 1u));
    ctx.set_gpr(4, std::bit_cast<std::uint32_t>(ctx.fpr[0]));
    ctx.set_gpr(3, 0u + static_cast<std::uint32_t>(-32768));
    ctx.set_gpr(7, ctx.gpr[4] | ctx.gpr[3]);
    goto L_089C17CC;
L_089C17CC:
    ctx.set_gpr(2, rt.memory().aot_load8(ctx.gpr[2] + static_cast<std::uint32_t>(3)));
    { const bool branch_taken = static_cast<std::int32_t>(ctx.gpr[2]) < 0;
    // nop
      if (branch_taken) {
          goto L_089C17E8;
      }
      goto L_089C17D8;
    }
L_089C17D8:
    ctx.fpr[0] = std::bit_cast<float>(ctx.gpr[2]);
    ctx.fpr[0] = static_cast<float>(static_cast<std::int32_t>(ctx.fpr_bits(0)));
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_089C1800;
      }
      goto L_089C17E8;
    }
L_089C17E8:
    ctx.set_gpr(3, ctx.gpr[2] >> 1u);
    ctx.set_gpr(2, ctx.gpr[2] & 1u);
    ctx.set_gpr(3, ctx.gpr[3] | ctx.gpr[2]);
    ctx.fpr[0] = std::bit_cast<float>(ctx.gpr[3]);
    ctx.fpr[0] = static_cast<float>(static_cast<std::int32_t>(ctx.fpr_bits(0)));
    ctx.fpr[0] = ctx.fpr[0] + ctx.fpr[0];
    goto L_089C1800;
L_089C1800:
    { const float fs = ctx.fpr[0]; const float ft = ctx.fpr[27]; if ((std::isinf(fs) && ft == 0.0f) || (std::isinf(ft) && fs == 0.0f)) ctx.set_fpr_bits(1, 0x7FC00000u); else ctx.fpr[1] = fs * ft; }
    ctx.set_gpr(2, 20224u << 16u);
    ctx.fpr[0] = std::bit_cast<float>(ctx.gpr[2]);
    ctx.set_fpu_condition((ctx.fpr[0] <= ctx.fpr[1]));
    // nop
    { const bool branch_taken = ctx.fpu_condition();
    // nop
      if (branch_taken) {
          goto L_089C182C;
      }
      goto L_089C181C;
    }
L_089C181C:
    ctx.set_fpr_bits(0, ctx.fpu_float_to_word(ctx.fpr[1], 1u));
    ctx.set_gpr(8, std::bit_cast<std::uint32_t>(ctx.fpr[0]));
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_089C1840;
      }
      goto L_089C182C;
    }
L_089C182C:
    ctx.fpr[0] = ctx.fpr[1] - ctx.fpr[0];
    ctx.set_fpr_bits(0, ctx.fpu_float_to_word(ctx.fpr[0], 1u));
    ctx.set_gpr(3, std::bit_cast<std::uint32_t>(ctx.fpr[0]));
    ctx.set_gpr(2, 0u + static_cast<std::uint32_t>(-32768));
    ctx.set_gpr(8, ctx.gpr[3] | ctx.gpr[2]);
    goto L_089C1840;
L_089C1840:
    ctx.set_gpr(4, ctx.gpr[29] + static_cast<std::uint32_t>(596));
    ctx.set_gpr(31, 0x089C184Cu);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0112_entry, 112u, 41u, 0x089C4700u>(ctx, &aot_mem) && ctx.pc == 0x089C184Cu) goto L_089C184C;
    return;
L_089C184C:
    ctx.set_gpr(2, rt.memory().aot_load8(ctx.gpr[29] + static_cast<std::uint32_t>(596)));
    { const bool branch_taken = static_cast<std::int32_t>(ctx.gpr[2]) < 0;
    // nop
      if (branch_taken) {
          goto L_089C1868;
      }
      goto L_089C1858;
    }
L_089C1858:
    ctx.fpr[0] = std::bit_cast<float>(ctx.gpr[2]);
    ctx.fpr[0] = static_cast<float>(static_cast<std::int32_t>(ctx.fpr_bits(0)));
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_089C1880;
      }
      goto L_089C1868;
    }
L_089C1868:
    ctx.set_gpr(3, ctx.gpr[2] >> 1u);
    ctx.set_gpr(2, ctx.gpr[2] & 1u);
    ctx.set_gpr(3, ctx.gpr[3] | ctx.gpr[2]);
    ctx.fpr[0] = std::bit_cast<float>(ctx.gpr[3]);
    ctx.fpr[0] = static_cast<float>(static_cast<std::int32_t>(ctx.fpr_bits(0)));
    ctx.fpr[0] = ctx.fpr[0] + ctx.fpr[0];
    goto L_089C1880;
L_089C1880:
    { const float fs = ctx.fpr[0]; const float ft = ctx.fpr[21]; if ((std::isinf(fs) && ft == 0.0f) || (std::isinf(ft) && fs == 0.0f)) ctx.set_fpr_bits(1, 0x7FC00000u); else ctx.fpr[1] = fs * ft; }
    ctx.set_gpr(2, 20224u << 16u);
    ctx.fpr[0] = std::bit_cast<float>(ctx.gpr[2]);
    ctx.set_fpu_condition((ctx.fpr[0] <= ctx.fpr[1]));
    // nop
    { const bool branch_taken = ctx.fpu_condition();
    // nop
      if (branch_taken) {
          goto L_089C18AC;
      }
      goto L_089C189C;
    }
L_089C189C:
    ctx.set_fpr_bits(0, ctx.fpu_float_to_word(ctx.fpr[1], 1u));
    ctx.set_gpr(2, std::bit_cast<std::uint32_t>(ctx.fpr[0]));
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_089C18C0;
      }
      goto L_089C18AC;
    }
L_089C18AC:
    ctx.fpr[0] = ctx.fpr[1] - ctx.fpr[0];
    ctx.set_fpr_bits(0, ctx.fpu_float_to_word(ctx.fpr[0], 1u));
    ctx.set_gpr(3, std::bit_cast<std::uint32_t>(ctx.fpr[0]));
    ctx.set_gpr(2, 0u + static_cast<std::uint32_t>(-32768));
    ctx.set_gpr(2, ctx.gpr[3] | ctx.gpr[2]);
    goto L_089C18C0;
L_089C18C0:
    ctx.set_gpr(5, ctx.gpr[2] & 255u);
    ctx.set_gpr(2, rt.memory().aot_load8(ctx.gpr[29] + static_cast<std::uint32_t>(597)));
    { const bool branch_taken = static_cast<std::int32_t>(ctx.gpr[2]) < 0;
    // nop
      if (branch_taken) {
          goto L_089C18E0;
      }
      goto L_089C18D0;
    }
L_089C18D0:
    ctx.fpr[0] = std::bit_cast<float>(ctx.gpr[2]);
    ctx.fpr[0] = static_cast<float>(static_cast<std::int32_t>(ctx.fpr_bits(0)));
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_089C18F8;
      }
      goto L_089C18E0;
    }
L_089C18E0:
    ctx.set_gpr(3, ctx.gpr[2] >> 1u);
    ctx.set_gpr(2, ctx.gpr[2] & 1u);
    ctx.set_gpr(3, ctx.gpr[3] | ctx.gpr[2]);
    ctx.fpr[0] = std::bit_cast<float>(ctx.gpr[3]);
    ctx.fpr[0] = static_cast<float>(static_cast<std::int32_t>(ctx.fpr_bits(0)));
    ctx.fpr[0] = ctx.fpr[0] + ctx.fpr[0];
    goto L_089C18F8;
L_089C18F8:
    { const float fs = ctx.fpr[0]; const float ft = ctx.fpr[21]; if ((std::isinf(fs) && ft == 0.0f) || (std::isinf(ft) && fs == 0.0f)) ctx.set_fpr_bits(1, 0x7FC00000u); else ctx.fpr[1] = fs * ft; }
    ctx.set_gpr(2, 20224u << 16u);
    ctx.fpr[0] = std::bit_cast<float>(ctx.gpr[2]);
    ctx.set_fpu_condition((ctx.fpr[0] <= ctx.fpr[1]));
    // nop
    { const bool branch_taken = ctx.fpu_condition();
    // nop
      if (branch_taken) {
          goto L_089C1924;
      }
      goto L_089C1914;
    }
L_089C1914:
    ctx.set_fpr_bits(0, ctx.fpu_float_to_word(ctx.fpr[1], 1u));
    ctx.set_gpr(6, std::bit_cast<std::uint32_t>(ctx.fpr[0]));
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_089C1938;
      }
      goto L_089C1924;
    }
L_089C1924:
    ctx.fpr[0] = ctx.fpr[1] - ctx.fpr[0];
    ctx.set_fpr_bits(0, ctx.fpu_float_to_word(ctx.fpr[0], 1u));
    ctx.set_gpr(3, std::bit_cast<std::uint32_t>(ctx.fpr[0]));
    ctx.set_gpr(2, 0u + static_cast<std::uint32_t>(-32768));
    ctx.set_gpr(6, ctx.gpr[3] | ctx.gpr[2]);
    goto L_089C1938;
L_089C1938:
    ctx.set_gpr(2, rt.memory().aot_load8(ctx.gpr[29] + static_cast<std::uint32_t>(598)));
    { const bool branch_taken = static_cast<std::int32_t>(ctx.gpr[2]) < 0;
    // nop
      if (branch_taken) {
          goto L_089C1954;
      }
      goto L_089C1944;
    }
L_089C1944:
    ctx.fpr[0] = std::bit_cast<float>(ctx.gpr[2]);
    ctx.fpr[0] = static_cast<float>(static_cast<std::int32_t>(ctx.fpr_bits(0)));
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_089C196C;
      }
      goto L_089C1954;
    }
L_089C1954:
    ctx.set_gpr(3, ctx.gpr[2] >> 1u);
    ctx.set_gpr(2, ctx.gpr[2] & 1u);
    ctx.set_gpr(3, ctx.gpr[3] | ctx.gpr[2]);
    ctx.fpr[0] = std::bit_cast<float>(ctx.gpr[3]);
    ctx.fpr[0] = static_cast<float>(static_cast<std::int32_t>(ctx.fpr_bits(0)));
    ctx.fpr[0] = ctx.fpr[0] + ctx.fpr[0];
    goto L_089C196C;
L_089C196C:
    { const float fs = ctx.fpr[0]; const float ft = ctx.fpr[21]; if ((std::isinf(fs) && ft == 0.0f) || (std::isinf(ft) && fs == 0.0f)) ctx.set_fpr_bits(1, 0x7FC00000u); else ctx.fpr[1] = fs * ft; }
    ctx.set_gpr(2, 20224u << 16u);
    ctx.fpr[0] = std::bit_cast<float>(ctx.gpr[2]);
    ctx.set_fpu_condition((ctx.fpr[0] <= ctx.fpr[1]));
    // nop
    { const bool branch_taken = ctx.fpu_condition();
    // nop
      if (branch_taken) {
          goto L_089C1998;
      }
      goto L_089C1988;
    }
L_089C1988:
    ctx.set_fpr_bits(0, ctx.fpu_float_to_word(ctx.fpr[1], 1u));
    ctx.set_gpr(7, std::bit_cast<std::uint32_t>(ctx.fpr[0]));
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_089C19AC;
      }
      goto L_089C1998;
    }
L_089C1998:
    ctx.fpr[0] = ctx.fpr[1] - ctx.fpr[0];
    ctx.set_fpr_bits(0, ctx.fpu_float_to_word(ctx.fpr[0], 1u));
    ctx.set_gpr(3, std::bit_cast<std::uint32_t>(ctx.fpr[0]));
    ctx.set_gpr(2, 0u + static_cast<std::uint32_t>(-32768));
    ctx.set_gpr(7, ctx.gpr[3] | ctx.gpr[2]);
    goto L_089C19AC;
L_089C19AC:
    ctx.set_gpr(2, rt.memory().aot_load8(ctx.gpr[29] + static_cast<std::uint32_t>(599)));
    { const bool branch_taken = static_cast<std::int32_t>(ctx.gpr[2]) < 0;
    // nop
      if (branch_taken) {
          goto L_089C19C8;
      }
      goto L_089C19B8;
    }
L_089C19B8:
    ctx.fpr[0] = std::bit_cast<float>(ctx.gpr[2]);
    ctx.fpr[0] = static_cast<float>(static_cast<std::int32_t>(ctx.fpr_bits(0)));
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_089C19E0;
      }
      goto L_089C19C8;
    }
L_089C19C8:
    ctx.set_gpr(3, ctx.gpr[2] >> 1u);
    ctx.set_gpr(2, ctx.gpr[2] & 1u);
    ctx.set_gpr(3, ctx.gpr[3] | ctx.gpr[2]);
    ctx.fpr[0] = std::bit_cast<float>(ctx.gpr[3]);
    ctx.fpr[0] = static_cast<float>(static_cast<std::int32_t>(ctx.fpr_bits(0)));
    ctx.fpr[0] = ctx.fpr[0] + ctx.fpr[0];
    goto L_089C19E0;
L_089C19E0:
    { const float fs = ctx.fpr[0]; const float ft = ctx.fpr[21]; if ((std::isinf(fs) && ft == 0.0f) || (std::isinf(ft) && fs == 0.0f)) ctx.set_fpr_bits(1, 0x7FC00000u); else ctx.fpr[1] = fs * ft; }
    ctx.set_gpr(2, 20224u << 16u);
    ctx.fpr[0] = std::bit_cast<float>(ctx.gpr[2]);
    ctx.set_fpu_condition((ctx.fpr[0] <= ctx.fpr[1]));
    // nop
    { const bool branch_taken = ctx.fpu_condition();
    // nop
      if (branch_taken) {
          goto L_089C1A0C;
      }
      goto L_089C19FC;
    }
L_089C19FC:
    ctx.set_fpr_bits(0, ctx.fpu_float_to_word(ctx.fpr[1], 1u));
    ctx.set_gpr(8, std::bit_cast<std::uint32_t>(ctx.fpr[0]));
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_089C1A20;
      }
      goto L_089C1A0C;
    }
L_089C1A0C:
    ctx.fpr[0] = ctx.fpr[1] - ctx.fpr[0];
    ctx.set_fpr_bits(0, ctx.fpu_float_to_word(ctx.fpr[0], 1u));
    ctx.set_gpr(3, std::bit_cast<std::uint32_t>(ctx.fpr[0]));
    ctx.set_gpr(2, 0u + static_cast<std::uint32_t>(-32768));
    ctx.set_gpr(8, ctx.gpr[3] | ctx.gpr[2]);
    goto L_089C1A20;
L_089C1A20:
    ctx.set_gpr(4, ctx.gpr[29] + static_cast<std::uint32_t>(600));
    ctx.set_gpr(31, 0x089C1A2Cu);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0112_entry, 112u, 41u, 0x089C4700u>(ctx, &aot_mem) && ctx.pc == 0x089C1A2Cu) goto L_089C1A2C;
    return;
L_089C1A2C:
    ctx.set_gpr(3, rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(1476)));
    ctx.set_gpr(2, ctx.gpr[3] << 3u);
    ctx.set_gpr(2, ctx.gpr[2] - ctx.gpr[3]);
    ctx.set_gpr(2, ctx.gpr[18] + ctx.gpr[2]);
    ctx.set_gpr(3, rt.memory().aot_load8(ctx.gpr[2] + static_cast<std::uint32_t>(0)));
    { const bool branch_taken = static_cast<std::int32_t>(ctx.gpr[3]) < 0;
    // nop
      if (branch_taken) {
          goto L_089C1A58;
      }
      goto L_089C1A48;
    }
L_089C1A48:
    ctx.fpr[0] = std::bit_cast<float>(ctx.gpr[3]);
    ctx.fpr[0] = static_cast<float>(static_cast<std::int32_t>(ctx.fpr_bits(0)));
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_089C1A70;
      }
      goto L_089C1A58;
    }
L_089C1A58:
    ctx.set_gpr(4, ctx.gpr[3] >> 1u);
    ctx.set_gpr(3, ctx.gpr[3] & 1u);
    ctx.set_gpr(4, ctx.gpr[4] | ctx.gpr[3]);
    ctx.fpr[0] = std::bit_cast<float>(ctx.gpr[4]);
    ctx.fpr[0] = static_cast<float>(static_cast<std::int32_t>(ctx.fpr_bits(0)));
    ctx.fpr[0] = ctx.fpr[0] + ctx.fpr[0];
    goto L_089C1A70;
L_089C1A70:
    { const float fs = ctx.fpr[0]; const float ft = ctx.fpr[24]; if ((std::isinf(fs) && ft == 0.0f) || (std::isinf(ft) && fs == 0.0f)) ctx.set_fpr_bits(1, 0x7FC00000u); else ctx.fpr[1] = fs * ft; }
    ctx.set_gpr(3, 20224u << 16u);
    ctx.fpr[0] = std::bit_cast<float>(ctx.gpr[3]);
    ctx.set_fpu_condition((ctx.fpr[0] <= ctx.fpr[1]));
    // nop
    { const bool branch_taken = ctx.fpu_condition();
    // nop
      if (branch_taken) {
          goto L_089C1A9C;
      }
      goto L_089C1A8C;
    }
L_089C1A8C:
    ctx.set_fpr_bits(0, ctx.fpu_float_to_word(ctx.fpr[1], 1u));
    ctx.set_gpr(3, std::bit_cast<std::uint32_t>(ctx.fpr[0]));
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_089C1AB0;
      }
      goto L_089C1A9C;
    }
L_089C1A9C:
    ctx.fpr[0] = ctx.fpr[1] - ctx.fpr[0];
    ctx.set_fpr_bits(0, ctx.fpu_float_to_word(ctx.fpr[0], 1u));
    ctx.set_gpr(4, std::bit_cast<std::uint32_t>(ctx.fpr[0]));
    ctx.set_gpr(3, 0u + static_cast<std::uint32_t>(-32768));
    ctx.set_gpr(3, ctx.gpr[4] | ctx.gpr[3]);
    goto L_089C1AB0;
L_089C1AB0:
    ctx.set_gpr(5, ctx.gpr[3] & 255u);
    ctx.set_gpr(3, rt.memory().aot_load8(ctx.gpr[2] + static_cast<std::uint32_t>(1)));
    { const bool branch_taken = static_cast<std::int32_t>(ctx.gpr[3]) < 0;
    // nop
      if (branch_taken) {
          goto L_089C1AD0;
      }
      goto L_089C1AC0;
    }
L_089C1AC0:
    ctx.fpr[0] = std::bit_cast<float>(ctx.gpr[3]);
    ctx.fpr[0] = static_cast<float>(static_cast<std::int32_t>(ctx.fpr_bits(0)));
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_089C1AE8;
      }
      goto L_089C1AD0;
    }
L_089C1AD0:
    ctx.set_gpr(4, ctx.gpr[3] >> 1u);
    ctx.set_gpr(3, ctx.gpr[3] & 1u);
    ctx.set_gpr(4, ctx.gpr[4] | ctx.gpr[3]);
    ctx.fpr[0] = std::bit_cast<float>(ctx.gpr[4]);
    ctx.fpr[0] = static_cast<float>(static_cast<std::int32_t>(ctx.fpr_bits(0)));
    ctx.fpr[0] = ctx.fpr[0] + ctx.fpr[0];
    goto L_089C1AE8;
L_089C1AE8:
    { const float fs = ctx.fpr[0]; const float ft = ctx.fpr[24]; if ((std::isinf(fs) && ft == 0.0f) || (std::isinf(ft) && fs == 0.0f)) ctx.set_fpr_bits(1, 0x7FC00000u); else ctx.fpr[1] = fs * ft; }
    ctx.set_gpr(3, 20224u << 16u);
    ctx.fpr[0] = std::bit_cast<float>(ctx.gpr[3]);
    ctx.set_fpu_condition((ctx.fpr[0] <= ctx.fpr[1]));
    // nop
    { const bool branch_taken = ctx.fpu_condition();
    // nop
      if (branch_taken) {
          goto L_089C1B14;
      }
      goto L_089C1B04;
    }
L_089C1B04:
    ctx.set_fpr_bits(0, ctx.fpu_float_to_word(ctx.fpr[1], 1u));
    ctx.set_gpr(6, std::bit_cast<std::uint32_t>(ctx.fpr[0]));
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_089C1B28;
      }
      goto L_089C1B14;
    }
L_089C1B14:
    ctx.fpr[0] = ctx.fpr[1] - ctx.fpr[0];
    ctx.set_fpr_bits(0, ctx.fpu_float_to_word(ctx.fpr[0], 1u));
    ctx.set_gpr(4, std::bit_cast<std::uint32_t>(ctx.fpr[0]));
    ctx.set_gpr(3, 0u + static_cast<std::uint32_t>(-32768));
    ctx.set_gpr(6, ctx.gpr[4] | ctx.gpr[3]);
    goto L_089C1B28;
L_089C1B28:
    ctx.set_gpr(3, rt.memory().aot_load8(ctx.gpr[2] + static_cast<std::uint32_t>(2)));
    { const bool branch_taken = static_cast<std::int32_t>(ctx.gpr[3]) < 0;
    // nop
      if (branch_taken) {
          goto L_089C1B44;
      }
      goto L_089C1B34;
    }
L_089C1B34:
    ctx.fpr[0] = std::bit_cast<float>(ctx.gpr[3]);
    ctx.fpr[0] = static_cast<float>(static_cast<std::int32_t>(ctx.fpr_bits(0)));
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_089C1B5C;
      }
      goto L_089C1B44;
    }
L_089C1B44:
    ctx.set_gpr(4, ctx.gpr[3] >> 1u);
    ctx.set_gpr(3, ctx.gpr[3] & 1u);
    ctx.set_gpr(4, ctx.gpr[4] | ctx.gpr[3]);
    ctx.fpr[0] = std::bit_cast<float>(ctx.gpr[4]);
    ctx.fpr[0] = static_cast<float>(static_cast<std::int32_t>(ctx.fpr_bits(0)));
    ctx.fpr[0] = ctx.fpr[0] + ctx.fpr[0];
    goto L_089C1B5C;
L_089C1B5C:
    { const float fs = ctx.fpr[0]; const float ft = ctx.fpr[24]; if ((std::isinf(fs) && ft == 0.0f) || (std::isinf(ft) && fs == 0.0f)) ctx.set_fpr_bits(1, 0x7FC00000u); else ctx.fpr[1] = fs * ft; }
    ctx.set_gpr(3, 20224u << 16u);
    ctx.fpr[0] = std::bit_cast<float>(ctx.gpr[3]);
    ctx.set_fpu_condition((ctx.fpr[0] <= ctx.fpr[1]));
    // nop
    { const bool branch_taken = ctx.fpu_condition();
    // nop
      if (branch_taken) {
          goto L_089C1B88;
      }
      goto L_089C1B78;
    }
L_089C1B78:
    ctx.set_fpr_bits(0, ctx.fpu_float_to_word(ctx.fpr[1], 1u));
    ctx.set_gpr(7, std::bit_cast<std::uint32_t>(ctx.fpr[0]));
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_089C1B9C;
      }
      goto L_089C1B88;
    }
L_089C1B88:
    ctx.fpr[0] = ctx.fpr[1] - ctx.fpr[0];
    ctx.set_fpr_bits(0, ctx.fpu_float_to_word(ctx.fpr[0], 1u));
    ctx.set_gpr(4, std::bit_cast<std::uint32_t>(ctx.fpr[0]));
    ctx.set_gpr(3, 0u + static_cast<std::uint32_t>(-32768));
    ctx.set_gpr(7, ctx.gpr[4] | ctx.gpr[3]);
    goto L_089C1B9C;
L_089C1B9C:
    ctx.set_gpr(2, rt.memory().aot_load8(ctx.gpr[2] + static_cast<std::uint32_t>(3)));
    { const bool branch_taken = static_cast<std::int32_t>(ctx.gpr[2]) < 0;
    // nop
      if (branch_taken) {
          goto L_089C1BB8;
      }
      goto L_089C1BA8;
    }
L_089C1BA8:
    ctx.fpr[0] = std::bit_cast<float>(ctx.gpr[2]);
    ctx.fpr[0] = static_cast<float>(static_cast<std::int32_t>(ctx.fpr_bits(0)));
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_089C1BD0;
      }
      goto L_089C1BB8;
    }
L_089C1BB8:
    ctx.set_gpr(3, ctx.gpr[2] >> 1u);
    ctx.set_gpr(2, ctx.gpr[2] & 1u);
    ctx.set_gpr(3, ctx.gpr[3] | ctx.gpr[2]);
    ctx.fpr[0] = std::bit_cast<float>(ctx.gpr[3]);
    ctx.fpr[0] = static_cast<float>(static_cast<std::int32_t>(ctx.fpr_bits(0)));
    ctx.fpr[0] = ctx.fpr[0] + ctx.fpr[0];
    goto L_089C1BD0;
L_089C1BD0:
    { const float fs = ctx.fpr[0]; const float ft = ctx.fpr[24]; if ((std::isinf(fs) && ft == 0.0f) || (std::isinf(ft) && fs == 0.0f)) ctx.set_fpr_bits(1, 0x7FC00000u); else ctx.fpr[1] = fs * ft; }
    ctx.set_gpr(2, 20224u << 16u);
    ctx.fpr[0] = std::bit_cast<float>(ctx.gpr[2]);
    ctx.set_fpu_condition((ctx.fpr[0] <= ctx.fpr[1]));
    // nop
    { const bool branch_taken = ctx.fpu_condition();
    // nop
      if (branch_taken) {
          goto L_089C1BFC;
      }
      goto L_089C1BEC;
    }
L_089C1BEC:
    ctx.set_fpr_bits(0, ctx.fpu_float_to_word(ctx.fpr[1], 1u));
    ctx.set_gpr(8, std::bit_cast<std::uint32_t>(ctx.fpr[0]));
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_089C1C10;
      }
      goto L_089C1BFC;
    }
L_089C1BFC:
    ctx.fpr[0] = ctx.fpr[1] - ctx.fpr[0];
    ctx.set_fpr_bits(0, ctx.fpu_float_to_word(ctx.fpr[0], 1u));
    ctx.set_gpr(3, std::bit_cast<std::uint32_t>(ctx.fpr[0]));
    ctx.set_gpr(2, 0u + static_cast<std::uint32_t>(-32768));
    ctx.set_gpr(8, ctx.gpr[3] | ctx.gpr[2]);
    goto L_089C1C10;
L_089C1C10:
    ctx.set_gpr(4, ctx.gpr[29] + static_cast<std::uint32_t>(604));
    ctx.set_gpr(31, 0x089C1C1Cu);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0112_entry, 112u, 41u, 0x089C4700u>(ctx, &aot_mem) && ctx.pc == 0x089C1C1Cu) goto L_089C1C1C;
    return;
L_089C1C1C:
    ctx.set_gpr(2, rt.memory().aot_load8(ctx.gpr[29] + static_cast<std::uint32_t>(604)));
    { const bool branch_taken = static_cast<std::int32_t>(ctx.gpr[2]) < 0;
    // nop
      if (branch_taken) {
          goto L_089C1C38;
      }
      goto L_089C1C28;
    }
L_089C1C28:
    ctx.fpr[0] = std::bit_cast<float>(ctx.gpr[2]);
    ctx.fpr[0] = static_cast<float>(static_cast<std::int32_t>(ctx.fpr_bits(0)));
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_089C1C50;
      }
      goto L_089C1C38;
    }
L_089C1C38:
    ctx.set_gpr(3, ctx.gpr[2] >> 1u);
    ctx.set_gpr(2, ctx.gpr[2] & 1u);
    ctx.set_gpr(3, ctx.gpr[3] | ctx.gpr[2]);
    ctx.fpr[0] = std::bit_cast<float>(ctx.gpr[3]);
    ctx.fpr[0] = static_cast<float>(static_cast<std::int32_t>(ctx.fpr_bits(0)));
    ctx.fpr[0] = ctx.fpr[0] + ctx.fpr[0];
    goto L_089C1C50;
L_089C1C50:
    { const float fs = ctx.fpr[0]; const float ft = ctx.fpr[22]; if ((std::isinf(fs) && ft == 0.0f) || (std::isinf(ft) && fs == 0.0f)) ctx.set_fpr_bits(1, 0x7FC00000u); else ctx.fpr[1] = fs * ft; }
    ctx.set_gpr(2, 20224u << 16u);
    ctx.fpr[0] = std::bit_cast<float>(ctx.gpr[2]);
    ctx.set_fpu_condition((ctx.fpr[0] <= ctx.fpr[1]));
    // nop
    { const bool branch_taken = ctx.fpu_condition();
    // nop
      if (branch_taken) {
          goto L_089C1C7C;
      }
      goto L_089C1C6C;
    }
L_089C1C6C:
    ctx.set_fpr_bits(0, ctx.fpu_float_to_word(ctx.fpr[1], 1u));
    ctx.set_gpr(2, std::bit_cast<std::uint32_t>(ctx.fpr[0]));
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_089C1C90;
      }
      goto L_089C1C7C;
    }
L_089C1C7C:
    ctx.fpr[0] = ctx.fpr[1] - ctx.fpr[0];
    ctx.set_fpr_bits(0, ctx.fpu_float_to_word(ctx.fpr[0], 1u));
    ctx.set_gpr(3, std::bit_cast<std::uint32_t>(ctx.fpr[0]));
    ctx.set_gpr(2, 0u + static_cast<std::uint32_t>(-32768));
    ctx.set_gpr(2, ctx.gpr[3] | ctx.gpr[2]);
    goto L_089C1C90;
L_089C1C90:
    ctx.set_gpr(5, ctx.gpr[2] & 255u);
    ctx.set_gpr(2, rt.memory().aot_load8(ctx.gpr[29] + static_cast<std::uint32_t>(605)));
    { const bool branch_taken = static_cast<std::int32_t>(ctx.gpr[2]) < 0;
    // nop
      if (branch_taken) {
          goto L_089C1CB0;
      }
      goto L_089C1CA0;
    }
L_089C1CA0:
    ctx.fpr[0] = std::bit_cast<float>(ctx.gpr[2]);
    ctx.fpr[0] = static_cast<float>(static_cast<std::int32_t>(ctx.fpr_bits(0)));
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_089C1CC8;
      }
      goto L_089C1CB0;
    }
L_089C1CB0:
    ctx.set_gpr(3, ctx.gpr[2] >> 1u);
    ctx.set_gpr(2, ctx.gpr[2] & 1u);
    ctx.set_gpr(3, ctx.gpr[3] | ctx.gpr[2]);
    ctx.fpr[0] = std::bit_cast<float>(ctx.gpr[3]);
    ctx.fpr[0] = static_cast<float>(static_cast<std::int32_t>(ctx.fpr_bits(0)));
    ctx.fpr[0] = ctx.fpr[0] + ctx.fpr[0];
    goto L_089C1CC8;
L_089C1CC8:
    { const float fs = ctx.fpr[0]; const float ft = ctx.fpr[22]; if ((std::isinf(fs) && ft == 0.0f) || (std::isinf(ft) && fs == 0.0f)) ctx.set_fpr_bits(1, 0x7FC00000u); else ctx.fpr[1] = fs * ft; }
    ctx.set_gpr(2, 20224u << 16u);
    ctx.fpr[0] = std::bit_cast<float>(ctx.gpr[2]);
    ctx.set_fpu_condition((ctx.fpr[0] <= ctx.fpr[1]));
    // nop
    { const bool branch_taken = ctx.fpu_condition();
    // nop
      if (branch_taken) {
          goto L_089C1CF4;
      }
      goto L_089C1CE4;
    }
L_089C1CE4:
    ctx.set_fpr_bits(0, ctx.fpu_float_to_word(ctx.fpr[1], 1u));
    ctx.set_gpr(6, std::bit_cast<std::uint32_t>(ctx.fpr[0]));
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_089C1D08;
      }
      goto L_089C1CF4;
    }
L_089C1CF4:
    ctx.fpr[0] = ctx.fpr[1] - ctx.fpr[0];
    ctx.set_fpr_bits(0, ctx.fpu_float_to_word(ctx.fpr[0], 1u));
    ctx.set_gpr(3, std::bit_cast<std::uint32_t>(ctx.fpr[0]));
    ctx.set_gpr(2, 0u + static_cast<std::uint32_t>(-32768));
    ctx.set_gpr(6, ctx.gpr[3] | ctx.gpr[2]);
    goto L_089C1D08;
L_089C1D08:
    ctx.set_gpr(2, rt.memory().aot_load8(ctx.gpr[29] + static_cast<std::uint32_t>(606)));
    { const bool branch_taken = static_cast<std::int32_t>(ctx.gpr[2]) < 0;
    // nop
      if (branch_taken) {
          goto L_089C1D24;
      }
      goto L_089C1D14;
    }
L_089C1D14:
    ctx.fpr[0] = std::bit_cast<float>(ctx.gpr[2]);
    ctx.fpr[0] = static_cast<float>(static_cast<std::int32_t>(ctx.fpr_bits(0)));
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_089C1D3C;
      }
      goto L_089C1D24;
    }
L_089C1D24:
    ctx.set_gpr(3, ctx.gpr[2] >> 1u);
    ctx.set_gpr(2, ctx.gpr[2] & 1u);
    ctx.set_gpr(3, ctx.gpr[3] | ctx.gpr[2]);
    ctx.fpr[0] = std::bit_cast<float>(ctx.gpr[3]);
    ctx.fpr[0] = static_cast<float>(static_cast<std::int32_t>(ctx.fpr_bits(0)));
    ctx.fpr[0] = ctx.fpr[0] + ctx.fpr[0];
    goto L_089C1D3C;
L_089C1D3C:
    { const float fs = ctx.fpr[0]; const float ft = ctx.fpr[22]; if ((std::isinf(fs) && ft == 0.0f) || (std::isinf(ft) && fs == 0.0f)) ctx.set_fpr_bits(1, 0x7FC00000u); else ctx.fpr[1] = fs * ft; }
    ctx.set_gpr(2, 20224u << 16u);
    ctx.fpr[0] = std::bit_cast<float>(ctx.gpr[2]);
    ctx.set_fpu_condition((ctx.fpr[0] <= ctx.fpr[1]));
    // nop
    { const bool branch_taken = ctx.fpu_condition();
    // nop
      if (branch_taken) {
          goto L_089C1D68;
      }
      goto L_089C1D58;
    }
L_089C1D58:
    ctx.set_fpr_bits(0, ctx.fpu_float_to_word(ctx.fpr[1], 1u));
    ctx.set_gpr(7, std::bit_cast<std::uint32_t>(ctx.fpr[0]));
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_089C1D7C;
      }
      goto L_089C1D68;
    }
L_089C1D68:
    ctx.fpr[0] = ctx.fpr[1] - ctx.fpr[0];
    ctx.set_fpr_bits(0, ctx.fpu_float_to_word(ctx.fpr[0], 1u));
    ctx.set_gpr(3, std::bit_cast<std::uint32_t>(ctx.fpr[0]));
    ctx.set_gpr(2, 0u + static_cast<std::uint32_t>(-32768));
    ctx.set_gpr(7, ctx.gpr[3] | ctx.gpr[2]);
    goto L_089C1D7C;
L_089C1D7C:
    ctx.set_gpr(2, rt.memory().aot_load8(ctx.gpr[29] + static_cast<std::uint32_t>(607)));
    { const bool branch_taken = static_cast<std::int32_t>(ctx.gpr[2]) < 0;
    // nop
      if (branch_taken) {
          goto L_089C1D98;
      }
      goto L_089C1D88;
    }
L_089C1D88:
    ctx.fpr[0] = std::bit_cast<float>(ctx.gpr[2]);
    ctx.fpr[0] = static_cast<float>(static_cast<std::int32_t>(ctx.fpr_bits(0)));
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_089C1DB0;
      }
      goto L_089C1D98;
    }
L_089C1D98:
    ctx.set_gpr(3, ctx.gpr[2] >> 1u);
    ctx.set_gpr(2, ctx.gpr[2] & 1u);
    ctx.set_gpr(3, ctx.gpr[3] | ctx.gpr[2]);
    ctx.fpr[0] = std::bit_cast<float>(ctx.gpr[3]);
    ctx.fpr[0] = static_cast<float>(static_cast<std::int32_t>(ctx.fpr_bits(0)));
    ctx.fpr[0] = ctx.fpr[0] + ctx.fpr[0];
    goto L_089C1DB0;
L_089C1DB0:
    { const float fs = ctx.fpr[0]; const float ft = ctx.fpr[22]; if ((std::isinf(fs) && ft == 0.0f) || (std::isinf(ft) && fs == 0.0f)) ctx.set_fpr_bits(1, 0x7FC00000u); else ctx.fpr[1] = fs * ft; }
    ctx.set_gpr(2, 20224u << 16u);
    ctx.fpr[0] = std::bit_cast<float>(ctx.gpr[2]);
    ctx.set_fpu_condition((ctx.fpr[0] <= ctx.fpr[1]));
    // nop
    { const bool branch_taken = ctx.fpu_condition();
    // nop
      if (branch_taken) {
          goto L_089C1DDC;
      }
      goto L_089C1DCC;
    }
L_089C1DCC:
    ctx.set_fpr_bits(0, ctx.fpu_float_to_word(ctx.fpr[1], 1u));
    ctx.set_gpr(8, std::bit_cast<std::uint32_t>(ctx.fpr[0]));
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_089C1DF0;
      }
      goto L_089C1DDC;
    }
L_089C1DDC:
    ctx.fpr[0] = ctx.fpr[1] - ctx.fpr[0];
    ctx.set_fpr_bits(0, ctx.fpu_float_to_word(ctx.fpr[0], 1u));
    ctx.set_gpr(3, std::bit_cast<std::uint32_t>(ctx.fpr[0]));
    ctx.set_gpr(2, 0u + static_cast<std::uint32_t>(-32768));
    ctx.set_gpr(8, ctx.gpr[3] | ctx.gpr[2]);
    goto L_089C1DF0;
L_089C1DF0:
    ctx.set_gpr(4, ctx.gpr[29] + static_cast<std::uint32_t>(608));
    ctx.set_gpr(31, 0x089C1DFCu);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0112_entry, 112u, 41u, 0x089C4700u>(ctx, &aot_mem) && ctx.pc == 0x089C1DFCu) goto L_089C1DFC;
    return;
L_089C1DFC:
    ctx.set_gpr(3, rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(1476)));
    ctx.set_gpr(2, ctx.gpr[3] << 1u);
    ctx.set_gpr(2, ctx.gpr[2] + ctx.gpr[3]);
    ctx.set_gpr(2, ctx.gpr[2] << 1u);
    ctx.set_gpr(2, ctx.gpr[18] + ctx.gpr[2]);
    ctx.set_gpr(3, rt.memory().aot_load8(ctx.gpr[2] + static_cast<std::uint32_t>(0)));
    { const bool branch_taken = static_cast<std::int32_t>(ctx.gpr[3]) < 0;
    // nop
      if (branch_taken) {
          goto L_089C1E2C;
      }
      goto L_089C1E1C;
    }
L_089C1E1C:
    ctx.fpr[0] = std::bit_cast<float>(ctx.gpr[3]);
    ctx.fpr[0] = static_cast<float>(static_cast<std::int32_t>(ctx.fpr_bits(0)));
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_089C1E44;
      }
      goto L_089C1E2C;
    }
L_089C1E2C:
    ctx.set_gpr(4, ctx.gpr[3] >> 1u);
    ctx.set_gpr(3, ctx.gpr[3] & 1u);
    ctx.set_gpr(4, ctx.gpr[4] | ctx.gpr[3]);
    ctx.fpr[0] = std::bit_cast<float>(ctx.gpr[4]);
    ctx.fpr[0] = static_cast<float>(static_cast<std::int32_t>(ctx.fpr_bits(0)));
    ctx.fpr[0] = ctx.fpr[0] + ctx.fpr[0];
    goto L_089C1E44;
L_089C1E44:
    { const float fs = ctx.fpr[0]; const float ft = ctx.fpr[25]; if ((std::isinf(fs) && ft == 0.0f) || (std::isinf(ft) && fs == 0.0f)) ctx.set_fpr_bits(1, 0x7FC00000u); else ctx.fpr[1] = fs * ft; }
    ctx.set_gpr(3, 20224u << 16u);
    ctx.fpr[0] = std::bit_cast<float>(ctx.gpr[3]);
    ctx.set_fpu_condition((ctx.fpr[0] <= ctx.fpr[1]));
    // nop
    { const bool branch_taken = ctx.fpu_condition();
    // nop
      if (branch_taken) {
          goto L_089C1E70;
      }
      goto L_089C1E60;
    }
L_089C1E60:
    ctx.set_fpr_bits(0, ctx.fpu_float_to_word(ctx.fpr[1], 1u));
    ctx.set_gpr(3, std::bit_cast<std::uint32_t>(ctx.fpr[0]));
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_089C1E84;
      }
      goto L_089C1E70;
    }
L_089C1E70:
    ctx.fpr[0] = ctx.fpr[1] - ctx.fpr[0];
    ctx.set_fpr_bits(0, ctx.fpu_float_to_word(ctx.fpr[0], 1u));
    ctx.set_gpr(4, std::bit_cast<std::uint32_t>(ctx.fpr[0]));
    ctx.set_gpr(3, 0u + static_cast<std::uint32_t>(-32768));
    ctx.set_gpr(3, ctx.gpr[4] | ctx.gpr[3]);
    goto L_089C1E84;
L_089C1E84:
    ctx.set_gpr(5, ctx.gpr[3] & 255u);
    ctx.set_gpr(3, rt.memory().aot_load8(ctx.gpr[2] + static_cast<std::uint32_t>(1)));
    { const bool branch_taken = static_cast<std::int32_t>(ctx.gpr[3]) < 0;
    // nop
      if (branch_taken) {
          goto L_089C1EA4;
      }
      goto L_089C1E94;
    }
L_089C1E94:
    ctx.fpr[0] = std::bit_cast<float>(ctx.gpr[3]);
    ctx.fpr[0] = static_cast<float>(static_cast<std::int32_t>(ctx.fpr_bits(0)));
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_089C1EBC;
      }
      goto L_089C1EA4;
    }
L_089C1EA4:
    ctx.set_gpr(4, ctx.gpr[3] >> 1u);
    ctx.set_gpr(3, ctx.gpr[3] & 1u);
    ctx.set_gpr(4, ctx.gpr[4] | ctx.gpr[3]);
    ctx.fpr[0] = std::bit_cast<float>(ctx.gpr[4]);
    ctx.fpr[0] = static_cast<float>(static_cast<std::int32_t>(ctx.fpr_bits(0)));
    ctx.fpr[0] = ctx.fpr[0] + ctx.fpr[0];
    goto L_089C1EBC;
L_089C1EBC:
    { const float fs = ctx.fpr[0]; const float ft = ctx.fpr[25]; if ((std::isinf(fs) && ft == 0.0f) || (std::isinf(ft) && fs == 0.0f)) ctx.set_fpr_bits(1, 0x7FC00000u); else ctx.fpr[1] = fs * ft; }
    ctx.set_gpr(3, 20224u << 16u);
    ctx.fpr[0] = std::bit_cast<float>(ctx.gpr[3]);
    ctx.set_fpu_condition((ctx.fpr[0] <= ctx.fpr[1]));
    // nop
    { const bool branch_taken = ctx.fpu_condition();
    // nop
      if (branch_taken) {
          goto L_089C1EE8;
      }
      goto L_089C1ED8;
    }
L_089C1ED8:
    ctx.set_fpr_bits(0, ctx.fpu_float_to_word(ctx.fpr[1], 1u));
    ctx.set_gpr(6, std::bit_cast<std::uint32_t>(ctx.fpr[0]));
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_089C1EFC;
      }
      goto L_089C1EE8;
    }
L_089C1EE8:
    ctx.fpr[0] = ctx.fpr[1] - ctx.fpr[0];
    ctx.set_fpr_bits(0, ctx.fpu_float_to_word(ctx.fpr[0], 1u));
    ctx.set_gpr(4, std::bit_cast<std::uint32_t>(ctx.fpr[0]));
    ctx.set_gpr(3, 0u + static_cast<std::uint32_t>(-32768));
    ctx.set_gpr(6, ctx.gpr[4] | ctx.gpr[3]);
    goto L_089C1EFC;
L_089C1EFC:
    ctx.set_gpr(3, rt.memory().aot_load8(ctx.gpr[2] + static_cast<std::uint32_t>(2)));
    { const bool branch_taken = static_cast<std::int32_t>(ctx.gpr[3]) < 0;
    // nop
      if (branch_taken) {
          goto L_089C1F18;
      }
      goto L_089C1F08;
    }
L_089C1F08:
    ctx.fpr[0] = std::bit_cast<float>(ctx.gpr[3]);
    ctx.fpr[0] = static_cast<float>(static_cast<std::int32_t>(ctx.fpr_bits(0)));
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_089C1F30;
      }
      goto L_089C1F18;
    }
L_089C1F18:
    ctx.set_gpr(4, ctx.gpr[3] >> 1u);
    ctx.set_gpr(3, ctx.gpr[3] & 1u);
    ctx.set_gpr(4, ctx.gpr[4] | ctx.gpr[3]);
    ctx.fpr[0] = std::bit_cast<float>(ctx.gpr[4]);
    ctx.fpr[0] = static_cast<float>(static_cast<std::int32_t>(ctx.fpr_bits(0)));
    ctx.fpr[0] = ctx.fpr[0] + ctx.fpr[0];
    goto L_089C1F30;
L_089C1F30:
    { const float fs = ctx.fpr[0]; const float ft = ctx.fpr[25]; if ((std::isinf(fs) && ft == 0.0f) || (std::isinf(ft) && fs == 0.0f)) ctx.set_fpr_bits(1, 0x7FC00000u); else ctx.fpr[1] = fs * ft; }
    ctx.set_gpr(3, 20224u << 16u);
    ctx.fpr[0] = std::bit_cast<float>(ctx.gpr[3]);
    ctx.set_fpu_condition((ctx.fpr[0] <= ctx.fpr[1]));
    // nop
    { const bool branch_taken = ctx.fpu_condition();
    // nop
      if (branch_taken) {
          goto L_089C1F5C;
      }
      goto L_089C1F4C;
    }
L_089C1F4C:
    ctx.set_fpr_bits(0, ctx.fpu_float_to_word(ctx.fpr[1], 1u));
    ctx.set_gpr(7, std::bit_cast<std::uint32_t>(ctx.fpr[0]));
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_089C1F70;
      }
      goto L_089C1F5C;
    }
L_089C1F5C:
    ctx.fpr[0] = ctx.fpr[1] - ctx.fpr[0];
    ctx.set_fpr_bits(0, ctx.fpu_float_to_word(ctx.fpr[0], 1u));
    ctx.set_gpr(4, std::bit_cast<std::uint32_t>(ctx.fpr[0]));
    ctx.set_gpr(3, 0u + static_cast<std::uint32_t>(-32768));
    ctx.set_gpr(7, ctx.gpr[4] | ctx.gpr[3]);
    goto L_089C1F70;
L_089C1F70:
    ctx.set_gpr(2, rt.memory().aot_load8(ctx.gpr[2] + static_cast<std::uint32_t>(3)));
    { const bool branch_taken = static_cast<std::int32_t>(ctx.gpr[2]) < 0;
    // nop
      if (branch_taken) {
          goto L_089C1F8C;
      }
      goto L_089C1F7C;
    }
L_089C1F7C:
    ctx.fpr[0] = std::bit_cast<float>(ctx.gpr[2]);
    ctx.fpr[0] = static_cast<float>(static_cast<std::int32_t>(ctx.fpr_bits(0)));
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_089C1FA4;
      }
      goto L_089C1F8C;
    }
L_089C1F8C:
    ctx.set_gpr(3, ctx.gpr[2] >> 1u);
    ctx.set_gpr(2, ctx.gpr[2] & 1u);
    ctx.set_gpr(3, ctx.gpr[3] | ctx.gpr[2]);
    ctx.fpr[0] = std::bit_cast<float>(ctx.gpr[3]);
    ctx.fpr[0] = static_cast<float>(static_cast<std::int32_t>(ctx.fpr_bits(0)));
    ctx.fpr[0] = ctx.fpr[0] + ctx.fpr[0];
    goto L_089C1FA4;
L_089C1FA4:
    { const float fs = ctx.fpr[0]; const float ft = ctx.fpr[25]; if ((std::isinf(fs) && ft == 0.0f) || (std::isinf(ft) && fs == 0.0f)) ctx.set_fpr_bits(1, 0x7FC00000u); else ctx.fpr[1] = fs * ft; }
    ctx.set_gpr(2, 20224u << 16u);
    ctx.fpr[0] = std::bit_cast<float>(ctx.gpr[2]);
    ctx.set_fpu_condition((ctx.fpr[0] <= ctx.fpr[1]));
    // nop
    { const bool branch_taken = ctx.fpu_condition();
    // nop
      if (branch_taken) {
          goto L_089C1FD0;
      }
      goto L_089C1FC0;
    }
L_089C1FC0:
    ctx.set_fpr_bits(0, ctx.fpu_float_to_word(ctx.fpr[1], 1u));
    ctx.set_gpr(8, std::bit_cast<std::uint32_t>(ctx.fpr[0]));
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_089C1FE4;
      }
      goto L_089C1FD0;
    }
L_089C1FD0:
    ctx.fpr[0] = ctx.fpr[1] - ctx.fpr[0];
    ctx.set_fpr_bits(0, ctx.fpu_float_to_word(ctx.fpr[0], 1u));
    ctx.set_gpr(3, std::bit_cast<std::uint32_t>(ctx.fpr[0]));
    ctx.set_gpr(2, 0u + static_cast<std::uint32_t>(-32768));
    ctx.set_gpr(8, ctx.gpr[3] | ctx.gpr[2]);
    goto L_089C1FE4;
L_089C1FE4:
    ctx.set_gpr(4, ctx.gpr[29] + static_cast<std::uint32_t>(612));
    ctx.set_gpr(31, 0x089C1FF0u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0112_entry, 112u, 41u, 0x089C4700u>(ctx, &aot_mem) && ctx.pc == 0x089C1FF0u) goto L_089C1FF0;
    return;
L_089C1FF0:
    ctx.set_gpr(2, rt.memory().aot_load8(ctx.gpr[29] + static_cast<std::uint32_t>(612)));
    { const bool branch_taken = static_cast<std::int32_t>(ctx.gpr[2]) < 0;
    // nop
      if (branch_taken) {
          goto L_089C200C;
      }
      goto L_089C1FFC;
    }
L_089C1FFC:
    ctx.fpr[0] = std::bit_cast<float>(ctx.gpr[2]);
    ctx.fpr[0] = static_cast<float>(static_cast<std::int32_t>(ctx.fpr_bits(0)));
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_089C2024;
      }
      goto L_089C200C;
    }
L_089C200C:
    ctx.set_gpr(3, ctx.gpr[2] >> 1u);
    ctx.set_gpr(2, ctx.gpr[2] & 1u);
    ctx.set_gpr(3, ctx.gpr[3] | ctx.gpr[2]);
    ctx.fpr[0] = std::bit_cast<float>(ctx.gpr[3]);
    ctx.fpr[0] = static_cast<float>(static_cast<std::int32_t>(ctx.fpr_bits(0)));
    ctx.fpr[0] = ctx.fpr[0] + ctx.fpr[0];
    goto L_089C2024;
L_089C2024:
    { const float fs = ctx.fpr[0]; const float ft = ctx.fpr[22]; if ((std::isinf(fs) && ft == 0.0f) || (std::isinf(ft) && fs == 0.0f)) ctx.set_fpr_bits(1, 0x7FC00000u); else ctx.fpr[1] = fs * ft; }
    ctx.set_gpr(2, 20224u << 16u);
    ctx.fpr[0] = std::bit_cast<float>(ctx.gpr[2]);
    ctx.set_fpu_condition((ctx.fpr[0] <= ctx.fpr[1]));
    // nop
    { const bool branch_taken = ctx.fpu_condition();
    // nop
      if (branch_taken) {
          goto L_089C2050;
      }
      goto L_089C2040;
    }
L_089C2040:
    ctx.set_fpr_bits(0, ctx.fpu_float_to_word(ctx.fpr[1], 1u));
    ctx.set_gpr(2, std::bit_cast<std::uint32_t>(ctx.fpr[0]));
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_089C2064;
      }
      goto L_089C2050;
    }
L_089C2050:
    ctx.fpr[0] = ctx.fpr[1] - ctx.fpr[0];
    ctx.set_fpr_bits(0, ctx.fpu_float_to_word(ctx.fpr[0], 1u));
    ctx.set_gpr(3, std::bit_cast<std::uint32_t>(ctx.fpr[0]));
    ctx.set_gpr(2, 0u + static_cast<std::uint32_t>(-32768));
    ctx.set_gpr(2, ctx.gpr[3] | ctx.gpr[2]);
    goto L_089C2064;
L_089C2064:
    ctx.set_gpr(5, ctx.gpr[2] & 255u);
    ctx.set_gpr(2, rt.memory().aot_load8(ctx.gpr[29] + static_cast<std::uint32_t>(613)));
    { const bool branch_taken = static_cast<std::int32_t>(ctx.gpr[2]) < 0;
    // nop
      if (branch_taken) {
          goto L_089C2084;
      }
      goto L_089C2074;
    }
L_089C2074:
    ctx.fpr[0] = std::bit_cast<float>(ctx.gpr[2]);
    ctx.fpr[0] = static_cast<float>(static_cast<std::int32_t>(ctx.fpr_bits(0)));
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_089C209C;
      }
      goto L_089C2084;
    }
L_089C2084:
    ctx.set_gpr(3, ctx.gpr[2] >> 1u);
    ctx.set_gpr(2, ctx.gpr[2] & 1u);
    ctx.set_gpr(3, ctx.gpr[3] | ctx.gpr[2]);
    ctx.fpr[0] = std::bit_cast<float>(ctx.gpr[3]);
    ctx.fpr[0] = static_cast<float>(static_cast<std::int32_t>(ctx.fpr_bits(0)));
    ctx.fpr[0] = ctx.fpr[0] + ctx.fpr[0];
    goto L_089C209C;
L_089C209C:
    { const float fs = ctx.fpr[0]; const float ft = ctx.fpr[22]; if ((std::isinf(fs) && ft == 0.0f) || (std::isinf(ft) && fs == 0.0f)) ctx.set_fpr_bits(1, 0x7FC00000u); else ctx.fpr[1] = fs * ft; }
    ctx.set_gpr(2, 20224u << 16u);
    ctx.fpr[0] = std::bit_cast<float>(ctx.gpr[2]);
    ctx.set_fpu_condition((ctx.fpr[0] <= ctx.fpr[1]));
    // nop
    { const bool branch_taken = ctx.fpu_condition();
    // nop
      if (branch_taken) {
          goto L_089C20C8;
      }
      goto L_089C20B8;
    }
L_089C20B8:
    ctx.set_fpr_bits(0, ctx.fpu_float_to_word(ctx.fpr[1], 1u));
    ctx.set_gpr(6, std::bit_cast<std::uint32_t>(ctx.fpr[0]));
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_089C20DC;
      }
      goto L_089C20C8;
    }
L_089C20C8:
    ctx.fpr[0] = ctx.fpr[1] - ctx.fpr[0];
    ctx.set_fpr_bits(0, ctx.fpu_float_to_word(ctx.fpr[0], 1u));
    ctx.set_gpr(3, std::bit_cast<std::uint32_t>(ctx.fpr[0]));
    ctx.set_gpr(2, 0u + static_cast<std::uint32_t>(-32768));
    ctx.set_gpr(6, ctx.gpr[3] | ctx.gpr[2]);
    goto L_089C20DC;
L_089C20DC:
    ctx.set_gpr(2, rt.memory().aot_load8(ctx.gpr[29] + static_cast<std::uint32_t>(614)));
    { const bool branch_taken = static_cast<std::int32_t>(ctx.gpr[2]) < 0;
    // nop
      if (branch_taken) {
          goto L_089C20F8;
      }
      goto L_089C20E8;
    }
L_089C20E8:
    ctx.fpr[0] = std::bit_cast<float>(ctx.gpr[2]);
    ctx.fpr[0] = static_cast<float>(static_cast<std::int32_t>(ctx.fpr_bits(0)));
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_089C2110;
      }
      goto L_089C20F8;
    }
L_089C20F8:
    ctx.set_gpr(3, ctx.gpr[2] >> 1u);
    ctx.set_gpr(2, ctx.gpr[2] & 1u);
    ctx.set_gpr(3, ctx.gpr[3] | ctx.gpr[2]);
    ctx.fpr[0] = std::bit_cast<float>(ctx.gpr[3]);
    ctx.fpr[0] = static_cast<float>(static_cast<std::int32_t>(ctx.fpr_bits(0)));
    ctx.fpr[0] = ctx.fpr[0] + ctx.fpr[0];
    goto L_089C2110;
L_089C2110:
    { const float fs = ctx.fpr[0]; const float ft = ctx.fpr[22]; if ((std::isinf(fs) && ft == 0.0f) || (std::isinf(ft) && fs == 0.0f)) ctx.set_fpr_bits(1, 0x7FC00000u); else ctx.fpr[1] = fs * ft; }
    ctx.set_gpr(2, 20224u << 16u);
    ctx.fpr[0] = std::bit_cast<float>(ctx.gpr[2]);
    ctx.set_fpu_condition((ctx.fpr[0] <= ctx.fpr[1]));
    // nop
    { const bool branch_taken = ctx.fpu_condition();
    // nop
      if (branch_taken) {
          goto L_089C213C;
      }
      goto L_089C212C;
    }
L_089C212C:
    ctx.set_fpr_bits(0, ctx.fpu_float_to_word(ctx.fpr[1], 1u));
    ctx.set_gpr(7, std::bit_cast<std::uint32_t>(ctx.fpr[0]));
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_089C2150;
      }
      goto L_089C213C;
    }
L_089C213C:
    ctx.fpr[0] = ctx.fpr[1] - ctx.fpr[0];
    ctx.set_fpr_bits(0, ctx.fpu_float_to_word(ctx.fpr[0], 1u));
    ctx.set_gpr(3, std::bit_cast<std::uint32_t>(ctx.fpr[0]));
    ctx.set_gpr(2, 0u + static_cast<std::uint32_t>(-32768));
    ctx.set_gpr(7, ctx.gpr[3] | ctx.gpr[2]);
    goto L_089C2150;
L_089C2150:
    ctx.set_gpr(2, rt.memory().aot_load8(ctx.gpr[29] + static_cast<std::uint32_t>(615)));
    { const bool branch_taken = static_cast<std::int32_t>(ctx.gpr[2]) < 0;
    // nop
      if (branch_taken) {
          goto L_089C216C;
      }
      goto L_089C215C;
    }
L_089C215C:
    ctx.fpr[0] = std::bit_cast<float>(ctx.gpr[2]);
    ctx.fpr[0] = static_cast<float>(static_cast<std::int32_t>(ctx.fpr_bits(0)));
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_089C2184;
      }
      goto L_089C216C;
    }
L_089C216C:
    ctx.set_gpr(3, ctx.gpr[2] >> 1u);
    ctx.set_gpr(2, ctx.gpr[2] & 1u);
    ctx.set_gpr(3, ctx.gpr[3] | ctx.gpr[2]);
    ctx.fpr[0] = std::bit_cast<float>(ctx.gpr[3]);
    ctx.fpr[0] = static_cast<float>(static_cast<std::int32_t>(ctx.fpr_bits(0)));
    ctx.fpr[0] = ctx.fpr[0] + ctx.fpr[0];
    goto L_089C2184;
L_089C2184:
    { const float fs = ctx.fpr[0]; const float ft = ctx.fpr[22]; if ((std::isinf(fs) && ft == 0.0f) || (std::isinf(ft) && fs == 0.0f)) ctx.set_fpr_bits(1, 0x7FC00000u); else ctx.fpr[1] = fs * ft; }
    ctx.set_gpr(2, 20224u << 16u);
    ctx.fpr[0] = std::bit_cast<float>(ctx.gpr[2]);
    ctx.set_fpu_condition((ctx.fpr[0] <= ctx.fpr[1]));
    // nop
    { const bool branch_taken = ctx.fpu_condition();
    // nop
      if (branch_taken) {
          goto L_089C21B0;
      }
      goto L_089C21A0;
    }
L_089C21A0:
    ctx.set_fpr_bits(0, ctx.fpu_float_to_word(ctx.fpr[1], 1u));
    ctx.set_gpr(8, std::bit_cast<std::uint32_t>(ctx.fpr[0]));
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_089C21C4;
      }
      goto L_089C21B0;
    }
L_089C21B0:
    ctx.fpr[0] = ctx.fpr[1] - ctx.fpr[0];
    ctx.set_fpr_bits(0, ctx.fpu_float_to_word(ctx.fpr[0], 1u));
    ctx.set_gpr(3, std::bit_cast<std::uint32_t>(ctx.fpr[0]));
    ctx.set_gpr(2, 0u + static_cast<std::uint32_t>(-32768));
    ctx.set_gpr(8, ctx.gpr[3] | ctx.gpr[2]);
    goto L_089C21C4;
L_089C21C4:
    ctx.set_gpr(4, ctx.gpr[29] + static_cast<std::uint32_t>(616));
    ctx.set_gpr(31, 0x089C21D0u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0112_entry, 112u, 41u, 0x089C4700u>(ctx, &aot_mem) && ctx.pc == 0x089C21D0u) goto L_089C21D0;
    return;
L_089C21D0:
    ctx.set_gpr(3, rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(1476)));
    ctx.set_gpr(2, ctx.gpr[3] << 2u);
    ctx.set_gpr(2, ctx.gpr[2] + ctx.gpr[3]);
    ctx.set_gpr(2, ctx.gpr[18] + ctx.gpr[2]);
    ctx.set_gpr(3, rt.memory().aot_load8(ctx.gpr[2] + static_cast<std::uint32_t>(0)));
    { const bool branch_taken = static_cast<std::int32_t>(ctx.gpr[3]) < 0;
    // nop
      if (branch_taken) {
          goto L_089C21FC;
      }
      goto L_089C21EC;
    }
L_089C21EC:
    ctx.fpr[0] = std::bit_cast<float>(ctx.gpr[3]);
    ctx.fpr[0] = static_cast<float>(static_cast<std::int32_t>(ctx.fpr_bits(0)));
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_089C2214;
      }
      goto L_089C21FC;
    }
L_089C21FC:
    ctx.set_gpr(4, ctx.gpr[3] >> 1u);
    ctx.set_gpr(3, ctx.gpr[3] & 1u);
    ctx.set_gpr(4, ctx.gpr[4] | ctx.gpr[3]);
    ctx.fpr[0] = std::bit_cast<float>(ctx.gpr[4]);
    ctx.fpr[0] = static_cast<float>(static_cast<std::int32_t>(ctx.fpr_bits(0)));
    ctx.fpr[0] = ctx.fpr[0] + ctx.fpr[0];
    goto L_089C2214;
L_089C2214:
    { const float fs = ctx.fpr[0]; const float ft = ctx.fpr[26]; if ((std::isinf(fs) && ft == 0.0f) || (std::isinf(ft) && fs == 0.0f)) ctx.set_fpr_bits(1, 0x7FC00000u); else ctx.fpr[1] = fs * ft; }
    ctx.set_gpr(3, 20224u << 16u);
    ctx.fpr[0] = std::bit_cast<float>(ctx.gpr[3]);
    ctx.set_fpu_condition((ctx.fpr[0] <= ctx.fpr[1]));
    // nop
    { const bool branch_taken = ctx.fpu_condition();
    // nop
      if (branch_taken) {
          goto L_089C2240;
      }
      goto L_089C2230;
    }
L_089C2230:
    ctx.set_fpr_bits(0, ctx.fpu_float_to_word(ctx.fpr[1], 1u));
    ctx.set_gpr(3, std::bit_cast<std::uint32_t>(ctx.fpr[0]));
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_089C2254;
      }
      goto L_089C2240;
    }
L_089C2240:
    ctx.fpr[0] = ctx.fpr[1] - ctx.fpr[0];
    ctx.set_fpr_bits(0, ctx.fpu_float_to_word(ctx.fpr[0], 1u));
    ctx.set_gpr(4, std::bit_cast<std::uint32_t>(ctx.fpr[0]));
    ctx.set_gpr(3, 0u + static_cast<std::uint32_t>(-32768));
    ctx.set_gpr(3, ctx.gpr[4] | ctx.gpr[3]);
    goto L_089C2254;
L_089C2254:
    ctx.set_gpr(5, ctx.gpr[3] & 255u);
    ctx.set_gpr(3, rt.memory().aot_load8(ctx.gpr[2] + static_cast<std::uint32_t>(1)));
    { const bool branch_taken = static_cast<std::int32_t>(ctx.gpr[3]) < 0;
    // nop
      if (branch_taken) {
          goto L_089C2274;
      }
      goto L_089C2264;
    }
L_089C2264:
    ctx.fpr[0] = std::bit_cast<float>(ctx.gpr[3]);
    ctx.fpr[0] = static_cast<float>(static_cast<std::int32_t>(ctx.fpr_bits(0)));
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_089C228C;
      }
      goto L_089C2274;
    }
L_089C2274:
    ctx.set_gpr(4, ctx.gpr[3] >> 1u);
    ctx.set_gpr(3, ctx.gpr[3] & 1u);
    ctx.set_gpr(4, ctx.gpr[4] | ctx.gpr[3]);
    ctx.fpr[0] = std::bit_cast<float>(ctx.gpr[4]);
    ctx.fpr[0] = static_cast<float>(static_cast<std::int32_t>(ctx.fpr_bits(0)));
    ctx.fpr[0] = ctx.fpr[0] + ctx.fpr[0];
    goto L_089C228C;
L_089C228C:
    { const float fs = ctx.fpr[0]; const float ft = ctx.fpr[26]; if ((std::isinf(fs) && ft == 0.0f) || (std::isinf(ft) && fs == 0.0f)) ctx.set_fpr_bits(1, 0x7FC00000u); else ctx.fpr[1] = fs * ft; }
    ctx.set_gpr(3, 20224u << 16u);
    ctx.fpr[0] = std::bit_cast<float>(ctx.gpr[3]);
    ctx.set_fpu_condition((ctx.fpr[0] <= ctx.fpr[1]));
    // nop
    { const bool branch_taken = ctx.fpu_condition();
    // nop
      if (branch_taken) {
          goto L_089C22B8;
      }
      goto L_089C22A8;
    }
L_089C22A8:
    ctx.set_fpr_bits(0, ctx.fpu_float_to_word(ctx.fpr[1], 1u));
    ctx.set_gpr(6, std::bit_cast<std::uint32_t>(ctx.fpr[0]));
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_089C22CC;
      }
      goto L_089C22B8;
    }
L_089C22B8:
    ctx.fpr[0] = ctx.fpr[1] - ctx.fpr[0];
    ctx.set_fpr_bits(0, ctx.fpu_float_to_word(ctx.fpr[0], 1u));
    ctx.set_gpr(4, std::bit_cast<std::uint32_t>(ctx.fpr[0]));
    ctx.set_gpr(3, 0u + static_cast<std::uint32_t>(-32768));
    ctx.set_gpr(6, ctx.gpr[4] | ctx.gpr[3]);
    goto L_089C22CC;
L_089C22CC:
    ctx.set_gpr(3, rt.memory().aot_load8(ctx.gpr[2] + static_cast<std::uint32_t>(2)));
    { const bool branch_taken = static_cast<std::int32_t>(ctx.gpr[3]) < 0;
    // nop
      if (branch_taken) {
          goto L_089C22E8;
      }
      goto L_089C22D8;
    }
L_089C22D8:
    ctx.fpr[0] = std::bit_cast<float>(ctx.gpr[3]);
    ctx.fpr[0] = static_cast<float>(static_cast<std::int32_t>(ctx.fpr_bits(0)));
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_089C2300;
      }
      goto L_089C22E8;
    }
L_089C22E8:
    ctx.set_gpr(4, ctx.gpr[3] >> 1u);
    ctx.set_gpr(3, ctx.gpr[3] & 1u);
    ctx.set_gpr(4, ctx.gpr[4] | ctx.gpr[3]);
    ctx.fpr[0] = std::bit_cast<float>(ctx.gpr[4]);
    ctx.fpr[0] = static_cast<float>(static_cast<std::int32_t>(ctx.fpr_bits(0)));
    ctx.fpr[0] = ctx.fpr[0] + ctx.fpr[0];
    goto L_089C2300;
L_089C2300:
    { const float fs = ctx.fpr[0]; const float ft = ctx.fpr[26]; if ((std::isinf(fs) && ft == 0.0f) || (std::isinf(ft) && fs == 0.0f)) ctx.set_fpr_bits(1, 0x7FC00000u); else ctx.fpr[1] = fs * ft; }
    ctx.set_gpr(3, 20224u << 16u);
    ctx.fpr[0] = std::bit_cast<float>(ctx.gpr[3]);
    ctx.set_fpu_condition((ctx.fpr[0] <= ctx.fpr[1]));
    // nop
    { const bool branch_taken = ctx.fpu_condition();
    // nop
      if (branch_taken) {
          goto L_089C232C;
      }
      goto L_089C231C;
    }
L_089C231C:
    ctx.set_fpr_bits(0, ctx.fpu_float_to_word(ctx.fpr[1], 1u));
    ctx.set_gpr(7, std::bit_cast<std::uint32_t>(ctx.fpr[0]));
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_089C2340;
      }
      goto L_089C232C;
    }
L_089C232C:
    ctx.fpr[0] = ctx.fpr[1] - ctx.fpr[0];
    ctx.set_fpr_bits(0, ctx.fpu_float_to_word(ctx.fpr[0], 1u));
    ctx.set_gpr(4, std::bit_cast<std::uint32_t>(ctx.fpr[0]));
    ctx.set_gpr(3, 0u + static_cast<std::uint32_t>(-32768));
    ctx.set_gpr(7, ctx.gpr[4] | ctx.gpr[3]);
    goto L_089C2340;
L_089C2340:
    ctx.set_gpr(2, rt.memory().aot_load8(ctx.gpr[2] + static_cast<std::uint32_t>(3)));
    { const bool branch_taken = static_cast<std::int32_t>(ctx.gpr[2]) < 0;
    // nop
      if (branch_taken) {
          goto L_089C235C;
      }
      goto L_089C234C;
    }
L_089C234C:
    ctx.fpr[0] = std::bit_cast<float>(ctx.gpr[2]);
    ctx.fpr[0] = static_cast<float>(static_cast<std::int32_t>(ctx.fpr_bits(0)));
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_089C2374;
      }
      goto L_089C235C;
    }
L_089C235C:
    ctx.set_gpr(3, ctx.gpr[2] >> 1u);
    ctx.set_gpr(2, ctx.gpr[2] & 1u);
    ctx.set_gpr(3, ctx.gpr[3] | ctx.gpr[2]);
    ctx.fpr[0] = std::bit_cast<float>(ctx.gpr[3]);
    ctx.fpr[0] = static_cast<float>(static_cast<std::int32_t>(ctx.fpr_bits(0)));
    ctx.fpr[0] = ctx.fpr[0] + ctx.fpr[0];
    goto L_089C2374;
L_089C2374:
    { const float fs = ctx.fpr[0]; const float ft = ctx.fpr[26]; if ((std::isinf(fs) && ft == 0.0f) || (std::isinf(ft) && fs == 0.0f)) ctx.set_fpr_bits(1, 0x7FC00000u); else ctx.fpr[1] = fs * ft; }
    ctx.set_gpr(2, 20224u << 16u);
    ctx.fpr[0] = std::bit_cast<float>(ctx.gpr[2]);
    ctx.set_fpu_condition((ctx.fpr[0] <= ctx.fpr[1]));
    // nop
    { const bool branch_taken = ctx.fpu_condition();
    // nop
      if (branch_taken) {
          goto L_089C23A0;
      }
      goto L_089C2390;
    }
L_089C2390:
    ctx.set_fpr_bits(0, ctx.fpu_float_to_word(ctx.fpr[1], 1u));
    ctx.set_gpr(8, std::bit_cast<std::uint32_t>(ctx.fpr[0]));
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_089C23B4;
      }
      goto L_089C23A0;
    }
L_089C23A0:
    ctx.fpr[0] = ctx.fpr[1] - ctx.fpr[0];
    ctx.set_fpr_bits(0, ctx.fpu_float_to_word(ctx.fpr[0], 1u));
    ctx.set_gpr(3, std::bit_cast<std::uint32_t>(ctx.fpr[0]));
    ctx.set_gpr(2, 0u + static_cast<std::uint32_t>(-32768));
    ctx.set_gpr(8, ctx.gpr[3] | ctx.gpr[2]);
    goto L_089C23B4;
L_089C23B4:
    ctx.set_gpr(4, ctx.gpr[29] + static_cast<std::uint32_t>(620));
    ctx.set_gpr(31, 0x089C23C0u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0112_entry, 112u, 41u, 0x089C4700u>(ctx, &aot_mem) && ctx.pc == 0x089C23C0u) goto L_089C23C0;
    return;
L_089C23C0:
    ctx.set_gpr(2, rt.memory().aot_load8(ctx.gpr[29] + static_cast<std::uint32_t>(620)));
    { const bool branch_taken = static_cast<std::int32_t>(ctx.gpr[2]) < 0;
    // nop
      if (branch_taken) {
          goto L_089C23DC;
      }
      goto L_089C23CC;
    }
L_089C23CC:
    ctx.fpr[0] = std::bit_cast<float>(ctx.gpr[2]);
    ctx.fpr[0] = static_cast<float>(static_cast<std::int32_t>(ctx.fpr_bits(0)));
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_089C23F4;
      }
      goto L_089C23DC;
    }
L_089C23DC:
    ctx.set_gpr(3, ctx.gpr[2] >> 1u);
    ctx.set_gpr(2, ctx.gpr[2] & 1u);
    ctx.set_gpr(3, ctx.gpr[3] | ctx.gpr[2]);
    ctx.fpr[0] = std::bit_cast<float>(ctx.gpr[3]);
    ctx.fpr[0] = static_cast<float>(static_cast<std::int32_t>(ctx.fpr_bits(0)));
    ctx.fpr[0] = ctx.fpr[0] + ctx.fpr[0];
    goto L_089C23F4;
L_089C23F4:
    { const float fs = ctx.fpr[0]; const float ft = ctx.fpr[22]; if ((std::isinf(fs) && ft == 0.0f) || (std::isinf(ft) && fs == 0.0f)) ctx.set_fpr_bits(1, 0x7FC00000u); else ctx.fpr[1] = fs * ft; }
    ctx.set_gpr(2, 20224u << 16u);
    ctx.fpr[0] = std::bit_cast<float>(ctx.gpr[2]);
    ctx.set_fpu_condition((ctx.fpr[0] <= ctx.fpr[1]));
    // nop
    { const bool branch_taken = ctx.fpu_condition();
    // nop
      if (branch_taken) {
          goto L_089C2420;
      }
      goto L_089C2410;
    }
L_089C2410:
    ctx.set_fpr_bits(0, ctx.fpu_float_to_word(ctx.fpr[1], 1u));
    ctx.set_gpr(2, std::bit_cast<std::uint32_t>(ctx.fpr[0]));
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_089C2434;
      }
      goto L_089C2420;
    }
L_089C2420:
    ctx.fpr[0] = ctx.fpr[1] - ctx.fpr[0];
    ctx.set_fpr_bits(0, ctx.fpu_float_to_word(ctx.fpr[0], 1u));
    ctx.set_gpr(3, std::bit_cast<std::uint32_t>(ctx.fpr[0]));
    ctx.set_gpr(2, 0u + static_cast<std::uint32_t>(-32768));
    ctx.set_gpr(2, ctx.gpr[3] | ctx.gpr[2]);
    goto L_089C2434;
L_089C2434:
    ctx.set_gpr(5, ctx.gpr[2] & 255u);
    ctx.set_gpr(2, rt.memory().aot_load8(ctx.gpr[29] + static_cast<std::uint32_t>(621)));
    { const bool branch_taken = static_cast<std::int32_t>(ctx.gpr[2]) < 0;
    // nop
      if (branch_taken) {
          goto L_089C2454;
      }
      goto L_089C2444;
    }
L_089C2444:
    ctx.fpr[0] = std::bit_cast<float>(ctx.gpr[2]);
    ctx.fpr[0] = static_cast<float>(static_cast<std::int32_t>(ctx.fpr_bits(0)));
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_089C246C;
      }
      goto L_089C2454;
    }
L_089C2454:
    ctx.set_gpr(3, ctx.gpr[2] >> 1u);
    ctx.set_gpr(2, ctx.gpr[2] & 1u);
    ctx.set_gpr(3, ctx.gpr[3] | ctx.gpr[2]);
    ctx.fpr[0] = std::bit_cast<float>(ctx.gpr[3]);
    ctx.fpr[0] = static_cast<float>(static_cast<std::int32_t>(ctx.fpr_bits(0)));
    ctx.fpr[0] = ctx.fpr[0] + ctx.fpr[0];
    goto L_089C246C;
L_089C246C:
    { const float fs = ctx.fpr[0]; const float ft = ctx.fpr[22]; if ((std::isinf(fs) && ft == 0.0f) || (std::isinf(ft) && fs == 0.0f)) ctx.set_fpr_bits(1, 0x7FC00000u); else ctx.fpr[1] = fs * ft; }
    ctx.set_gpr(2, 20224u << 16u);
    ctx.fpr[0] = std::bit_cast<float>(ctx.gpr[2]);
    ctx.set_fpu_condition((ctx.fpr[0] <= ctx.fpr[1]));
    // nop
    { const bool branch_taken = ctx.fpu_condition();
    // nop
      if (branch_taken) {
          goto L_089C2498;
      }
      goto L_089C2488;
    }
L_089C2488:
    ctx.set_fpr_bits(0, ctx.fpu_float_to_word(ctx.fpr[1], 1u));
    ctx.set_gpr(6, std::bit_cast<std::uint32_t>(ctx.fpr[0]));
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_089C24AC;
      }
      goto L_089C2498;
    }
L_089C2498:
    ctx.fpr[0] = ctx.fpr[1] - ctx.fpr[0];
    ctx.set_fpr_bits(0, ctx.fpu_float_to_word(ctx.fpr[0], 1u));
    ctx.set_gpr(3, std::bit_cast<std::uint32_t>(ctx.fpr[0]));
    ctx.set_gpr(2, 0u + static_cast<std::uint32_t>(-32768));
    ctx.set_gpr(6, ctx.gpr[3] | ctx.gpr[2]);
    goto L_089C24AC;
L_089C24AC:
    ctx.set_gpr(2, rt.memory().aot_load8(ctx.gpr[29] + static_cast<std::uint32_t>(622)));
    { const bool branch_taken = static_cast<std::int32_t>(ctx.gpr[2]) < 0;
    // nop
      if (branch_taken) {
          goto L_089C24C8;
      }
      goto L_089C24B8;
    }
L_089C24B8:
    ctx.fpr[0] = std::bit_cast<float>(ctx.gpr[2]);
    ctx.fpr[0] = static_cast<float>(static_cast<std::int32_t>(ctx.fpr_bits(0)));
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_089C24E0;
      }
      goto L_089C24C8;
    }
L_089C24C8:
    ctx.set_gpr(3, ctx.gpr[2] >> 1u);
    ctx.set_gpr(2, ctx.gpr[2] & 1u);
    ctx.set_gpr(3, ctx.gpr[3] | ctx.gpr[2]);
    ctx.fpr[0] = std::bit_cast<float>(ctx.gpr[3]);
    ctx.fpr[0] = static_cast<float>(static_cast<std::int32_t>(ctx.fpr_bits(0)));
    ctx.fpr[0] = ctx.fpr[0] + ctx.fpr[0];
    goto L_089C24E0;
L_089C24E0:
    { const float fs = ctx.fpr[0]; const float ft = ctx.fpr[22]; if ((std::isinf(fs) && ft == 0.0f) || (std::isinf(ft) && fs == 0.0f)) ctx.set_fpr_bits(1, 0x7FC00000u); else ctx.fpr[1] = fs * ft; }
    ctx.set_gpr(2, 20224u << 16u);
    ctx.fpr[0] = std::bit_cast<float>(ctx.gpr[2]);
    ctx.set_fpu_condition((ctx.fpr[0] <= ctx.fpr[1]));
    // nop
    { const bool branch_taken = ctx.fpu_condition();
    // nop
      if (branch_taken) {
          goto L_089C250C;
      }
      goto L_089C24FC;
    }
L_089C24FC:
    ctx.set_fpr_bits(0, ctx.fpu_float_to_word(ctx.fpr[1], 1u));
    ctx.set_gpr(7, std::bit_cast<std::uint32_t>(ctx.fpr[0]));
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_089C2520;
      }
      goto L_089C250C;
    }
L_089C250C:
    ctx.fpr[0] = ctx.fpr[1] - ctx.fpr[0];
    ctx.set_fpr_bits(0, ctx.fpu_float_to_word(ctx.fpr[0], 1u));
    ctx.set_gpr(3, std::bit_cast<std::uint32_t>(ctx.fpr[0]));
    ctx.set_gpr(2, 0u + static_cast<std::uint32_t>(-32768));
    ctx.set_gpr(7, ctx.gpr[3] | ctx.gpr[2]);
    goto L_089C2520;
L_089C2520:
    ctx.set_gpr(2, rt.memory().aot_load8(ctx.gpr[29] + static_cast<std::uint32_t>(623)));
    { const bool branch_taken = static_cast<std::int32_t>(ctx.gpr[2]) < 0;
    // nop
      if (branch_taken) {
          goto L_089C253C;
      }
      goto L_089C252C;
    }
L_089C252C:
    ctx.fpr[0] = std::bit_cast<float>(ctx.gpr[2]);
    ctx.fpr[0] = static_cast<float>(static_cast<std::int32_t>(ctx.fpr_bits(0)));
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_089C2554;
      }
      goto L_089C253C;
    }
L_089C253C:
    ctx.set_gpr(3, ctx.gpr[2] >> 1u);
    ctx.set_gpr(2, ctx.gpr[2] & 1u);
    ctx.set_gpr(3, ctx.gpr[3] | ctx.gpr[2]);
    ctx.fpr[0] = std::bit_cast<float>(ctx.gpr[3]);
    ctx.fpr[0] = static_cast<float>(static_cast<std::int32_t>(ctx.fpr_bits(0)));
    ctx.fpr[0] = ctx.fpr[0] + ctx.fpr[0];
    goto L_089C2554;
L_089C2554:
    { const float fs = ctx.fpr[0]; const float ft = ctx.fpr[22]; if ((std::isinf(fs) && ft == 0.0f) || (std::isinf(ft) && fs == 0.0f)) ctx.set_fpr_bits(1, 0x7FC00000u); else ctx.fpr[1] = fs * ft; }
    ctx.set_gpr(2, 20224u << 16u);
    ctx.fpr[0] = std::bit_cast<float>(ctx.gpr[2]);
    ctx.set_fpu_condition((ctx.fpr[0] <= ctx.fpr[1]));
    // nop
    { const bool branch_taken = ctx.fpu_condition();
    // nop
      if (branch_taken) {
          goto L_089C2580;
      }
      goto L_089C2570;
    }
L_089C2570:
    ctx.set_fpr_bits(0, ctx.fpu_float_to_word(ctx.fpr[1], 1u));
    ctx.set_gpr(8, std::bit_cast<std::uint32_t>(ctx.fpr[0]));
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_089C2594;
      }
      goto L_089C2580;
    }
L_089C2580:
    ctx.fpr[0] = ctx.fpr[1] - ctx.fpr[0];
    ctx.set_fpr_bits(0, ctx.fpu_float_to_word(ctx.fpr[0], 1u));
    ctx.set_gpr(3, std::bit_cast<std::uint32_t>(ctx.fpr[0]));
    ctx.set_gpr(2, 0u + static_cast<std::uint32_t>(-32768));
    ctx.set_gpr(8, ctx.gpr[3] | ctx.gpr[2]);
    goto L_089C2594;
L_089C2594:
    ctx.set_gpr(4, ctx.gpr[29] + static_cast<std::uint32_t>(624));
    ctx.set_gpr(31, 0x089C25A0u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0112_entry, 112u, 41u, 0x089C4700u>(ctx, &aot_mem) && ctx.pc == 0x089C25A0u) goto L_089C25A0;
    return;
L_089C25A0:
    ctx.set_gpr(2, rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(1476)));
    ctx.set_gpr(2, ctx.gpr[2] << 2u);
    ctx.set_gpr(2, ctx.gpr[18] + ctx.gpr[2]);
    ctx.set_gpr(3, rt.memory().aot_load8(ctx.gpr[2] + static_cast<std::uint32_t>(0)));
    { const bool branch_taken = static_cast<std::int32_t>(ctx.gpr[3]) < 0;
    // nop
      if (branch_taken) {
          goto L_089C25C8;
      }
      goto L_089C25B8;
    }
L_089C25B8:
    ctx.fpr[0] = std::bit_cast<float>(ctx.gpr[3]);
    ctx.fpr[0] = static_cast<float>(static_cast<std::int32_t>(ctx.fpr_bits(0)));
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_089C25E0;
      }
      goto L_089C25C8;
    }
L_089C25C8:
    ctx.set_gpr(4, ctx.gpr[3] >> 1u);
    ctx.set_gpr(3, ctx.gpr[3] & 1u);
    ctx.set_gpr(4, ctx.gpr[4] | ctx.gpr[3]);
    ctx.fpr[0] = std::bit_cast<float>(ctx.gpr[4]);
    ctx.fpr[0] = static_cast<float>(static_cast<std::int32_t>(ctx.fpr_bits(0)));
    ctx.fpr[0] = ctx.fpr[0] + ctx.fpr[0];
    goto L_089C25E0;
L_089C25E0:
    { const float fs = ctx.fpr[0]; const float ft = ctx.fpr[27]; if ((std::isinf(fs) && ft == 0.0f) || (std::isinf(ft) && fs == 0.0f)) ctx.set_fpr_bits(1, 0x7FC00000u); else ctx.fpr[1] = fs * ft; }
    ctx.set_gpr(3, 20224u << 16u);
    ctx.fpr[0] = std::bit_cast<float>(ctx.gpr[3]);
    ctx.set_fpu_condition((ctx.fpr[0] <= ctx.fpr[1]));
    // nop
    { const bool branch_taken = ctx.fpu_condition();
    // nop
      if (branch_taken) {
          goto L_089C260C;
      }
      goto L_089C25FC;
    }
L_089C25FC:
    ctx.set_fpr_bits(0, ctx.fpu_float_to_word(ctx.fpr[1], 1u));
    ctx.set_gpr(3, std::bit_cast<std::uint32_t>(ctx.fpr[0]));
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_089C2620;
      }
      goto L_089C260C;
    }
L_089C260C:
    ctx.fpr[0] = ctx.fpr[1] - ctx.fpr[0];
    ctx.set_fpr_bits(0, ctx.fpu_float_to_word(ctx.fpr[0], 1u));
    ctx.set_gpr(4, std::bit_cast<std::uint32_t>(ctx.fpr[0]));
    ctx.set_gpr(3, 0u + static_cast<std::uint32_t>(-32768));
    ctx.set_gpr(3, ctx.gpr[4] | ctx.gpr[3]);
    goto L_089C2620;
L_089C2620:
    ctx.set_gpr(5, ctx.gpr[3] & 255u);
    ctx.set_gpr(3, rt.memory().aot_load8(ctx.gpr[2] + static_cast<std::uint32_t>(1)));
    { const bool branch_taken = static_cast<std::int32_t>(ctx.gpr[3]) < 0;
    // nop
      if (branch_taken) {
          goto L_089C2640;
      }
      goto L_089C2630;
    }
L_089C2630:
    ctx.fpr[0] = std::bit_cast<float>(ctx.gpr[3]);
    ctx.fpr[0] = static_cast<float>(static_cast<std::int32_t>(ctx.fpr_bits(0)));
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_089C2658;
      }
      goto L_089C2640;
    }
L_089C2640:
    ctx.set_gpr(4, ctx.gpr[3] >> 1u);
    ctx.set_gpr(3, ctx.gpr[3] & 1u);
    ctx.set_gpr(4, ctx.gpr[4] | ctx.gpr[3]);
    ctx.fpr[0] = std::bit_cast<float>(ctx.gpr[4]);
    ctx.fpr[0] = static_cast<float>(static_cast<std::int32_t>(ctx.fpr_bits(0)));
    ctx.fpr[0] = ctx.fpr[0] + ctx.fpr[0];
    goto L_089C2658;
L_089C2658:
    { const float fs = ctx.fpr[0]; const float ft = ctx.fpr[27]; if ((std::isinf(fs) && ft == 0.0f) || (std::isinf(ft) && fs == 0.0f)) ctx.set_fpr_bits(1, 0x7FC00000u); else ctx.fpr[1] = fs * ft; }
    ctx.set_gpr(3, 20224u << 16u);
    ctx.fpr[0] = std::bit_cast<float>(ctx.gpr[3]);
    ctx.set_fpu_condition((ctx.fpr[0] <= ctx.fpr[1]));
    // nop
    { const bool branch_taken = ctx.fpu_condition();
    // nop
      if (branch_taken) {
          goto L_089C2684;
      }
      goto L_089C2674;
    }
L_089C2674:
    ctx.set_fpr_bits(0, ctx.fpu_float_to_word(ctx.fpr[1], 1u));
    ctx.set_gpr(6, std::bit_cast<std::uint32_t>(ctx.fpr[0]));
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_089C2698;
      }
      goto L_089C2684;
    }
L_089C2684:
    ctx.fpr[0] = ctx.fpr[1] - ctx.fpr[0];
    ctx.set_fpr_bits(0, ctx.fpu_float_to_word(ctx.fpr[0], 1u));
    ctx.set_gpr(4, std::bit_cast<std::uint32_t>(ctx.fpr[0]));
    ctx.set_gpr(3, 0u + static_cast<std::uint32_t>(-32768));
    ctx.set_gpr(6, ctx.gpr[4] | ctx.gpr[3]);
    goto L_089C2698;
L_089C2698:
    ctx.set_gpr(3, rt.memory().aot_load8(ctx.gpr[2] + static_cast<std::uint32_t>(2)));
    { const bool branch_taken = static_cast<std::int32_t>(ctx.gpr[3]) < 0;
    // nop
      if (branch_taken) {
          goto L_089C26B4;
      }
      goto L_089C26A4;
    }
L_089C26A4:
    ctx.fpr[0] = std::bit_cast<float>(ctx.gpr[3]);
    ctx.fpr[0] = static_cast<float>(static_cast<std::int32_t>(ctx.fpr_bits(0)));
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_089C26CC;
      }
      goto L_089C26B4;
    }
L_089C26B4:
    ctx.set_gpr(4, ctx.gpr[3] >> 1u);
    ctx.set_gpr(3, ctx.gpr[3] & 1u);
    ctx.set_gpr(4, ctx.gpr[4] | ctx.gpr[3]);
    ctx.fpr[0] = std::bit_cast<float>(ctx.gpr[4]);
    ctx.fpr[0] = static_cast<float>(static_cast<std::int32_t>(ctx.fpr_bits(0)));
    ctx.fpr[0] = ctx.fpr[0] + ctx.fpr[0];
    goto L_089C26CC;
L_089C26CC:
    { const float fs = ctx.fpr[0]; const float ft = ctx.fpr[27]; if ((std::isinf(fs) && ft == 0.0f) || (std::isinf(ft) && fs == 0.0f)) ctx.set_fpr_bits(1, 0x7FC00000u); else ctx.fpr[1] = fs * ft; }
    ctx.set_gpr(3, 20224u << 16u);
    ctx.fpr[0] = std::bit_cast<float>(ctx.gpr[3]);
    ctx.set_fpu_condition((ctx.fpr[0] <= ctx.fpr[1]));
    // nop
    { const bool branch_taken = ctx.fpu_condition();
    // nop
      if (branch_taken) {
          goto L_089C26F8;
      }
      goto L_089C26E8;
    }
L_089C26E8:
    ctx.set_fpr_bits(0, ctx.fpu_float_to_word(ctx.fpr[1], 1u));
    ctx.set_gpr(7, std::bit_cast<std::uint32_t>(ctx.fpr[0]));
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_089C270C;
      }
      goto L_089C26F8;
    }
L_089C26F8:
    ctx.fpr[0] = ctx.fpr[1] - ctx.fpr[0];
    ctx.set_fpr_bits(0, ctx.fpu_float_to_word(ctx.fpr[0], 1u));
    ctx.set_gpr(4, std::bit_cast<std::uint32_t>(ctx.fpr[0]));
    ctx.set_gpr(3, 0u + static_cast<std::uint32_t>(-32768));
    ctx.set_gpr(7, ctx.gpr[4] | ctx.gpr[3]);
    goto L_089C270C;
L_089C270C:
    ctx.set_gpr(2, rt.memory().aot_load8(ctx.gpr[2] + static_cast<std::uint32_t>(3)));
    { const bool branch_taken = static_cast<std::int32_t>(ctx.gpr[2]) < 0;
    // nop
      if (branch_taken) {
          goto L_089C2728;
      }
      goto L_089C2718;
    }
L_089C2718:
    ctx.fpr[0] = std::bit_cast<float>(ctx.gpr[2]);
    ctx.fpr[0] = static_cast<float>(static_cast<std::int32_t>(ctx.fpr_bits(0)));
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_089C2740;
      }
      goto L_089C2728;
    }
L_089C2728:
    ctx.set_gpr(3, ctx.gpr[2] >> 1u);
    ctx.set_gpr(2, ctx.gpr[2] & 1u);
    ctx.set_gpr(3, ctx.gpr[3] | ctx.gpr[2]);
    ctx.fpr[0] = std::bit_cast<float>(ctx.gpr[3]);
    ctx.fpr[0] = static_cast<float>(static_cast<std::int32_t>(ctx.fpr_bits(0)));
    ctx.fpr[0] = ctx.fpr[0] + ctx.fpr[0];
    goto L_089C2740;
L_089C2740:
    { const float fs = ctx.fpr[0]; const float ft = ctx.fpr[27]; if ((std::isinf(fs) && ft == 0.0f) || (std::isinf(ft) && fs == 0.0f)) ctx.set_fpr_bits(1, 0x7FC00000u); else ctx.fpr[1] = fs * ft; }
    ctx.set_gpr(2, 20224u << 16u);
    ctx.fpr[0] = std::bit_cast<float>(ctx.gpr[2]);
    ctx.set_fpu_condition((ctx.fpr[0] <= ctx.fpr[1]));
    // nop
    { const bool branch_taken = ctx.fpu_condition();
    // nop
      if (branch_taken) {
          goto L_089C276C;
      }
      goto L_089C275C;
    }
L_089C275C:
    ctx.set_fpr_bits(0, ctx.fpu_float_to_word(ctx.fpr[1], 1u));
    ctx.set_gpr(8, std::bit_cast<std::uint32_t>(ctx.fpr[0]));
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_089C2780;
      }
      goto L_089C276C;
    }
L_089C276C:
    ctx.fpr[0] = ctx.fpr[1] - ctx.fpr[0];
    ctx.set_fpr_bits(0, ctx.fpu_float_to_word(ctx.fpr[0], 1u));
    ctx.set_gpr(3, std::bit_cast<std::uint32_t>(ctx.fpr[0]));
    ctx.set_gpr(2, 0u + static_cast<std::uint32_t>(-32768));
    ctx.set_gpr(8, ctx.gpr[3] | ctx.gpr[2]);
    goto L_089C2780;
L_089C2780:
    ctx.set_gpr(4, ctx.gpr[29] + static_cast<std::uint32_t>(628));
    ctx.set_gpr(31, 0x089C278Cu);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0112_entry, 112u, 41u, 0x089C4700u>(ctx, &aot_mem) && ctx.pc == 0x089C278Cu) goto L_089C278C;
    return;
L_089C278C:
    ctx.set_gpr(2, rt.memory().aot_load8(ctx.gpr[29] + static_cast<std::uint32_t>(628)));
    { const bool branch_taken = static_cast<std::int32_t>(ctx.gpr[2]) < 0;
    // nop
      if (branch_taken) {
          goto L_089C27A8;
      }
      goto L_089C2798;
    }
L_089C2798:
    ctx.fpr[0] = std::bit_cast<float>(ctx.gpr[2]);
    ctx.fpr[0] = static_cast<float>(static_cast<std::int32_t>(ctx.fpr_bits(0)));
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_089C27C0;
      }
      goto L_089C27A8;
    }
L_089C27A8:
    ctx.set_gpr(3, ctx.gpr[2] >> 1u);
    ctx.set_gpr(2, ctx.gpr[2] & 1u);
    ctx.set_gpr(3, ctx.gpr[3] | ctx.gpr[2]);
    ctx.fpr[0] = std::bit_cast<float>(ctx.gpr[3]);
    ctx.fpr[0] = static_cast<float>(static_cast<std::int32_t>(ctx.fpr_bits(0)));
    ctx.fpr[0] = ctx.fpr[0] + ctx.fpr[0];
    goto L_089C27C0;
L_089C27C0:
    { const float fs = ctx.fpr[0]; const float ft = ctx.fpr[22]; if ((std::isinf(fs) && ft == 0.0f) || (std::isinf(ft) && fs == 0.0f)) ctx.set_fpr_bits(1, 0x7FC00000u); else ctx.fpr[1] = fs * ft; }
    ctx.set_gpr(2, 20224u << 16u);
    ctx.fpr[0] = std::bit_cast<float>(ctx.gpr[2]);
    ctx.set_fpu_condition((ctx.fpr[0] <= ctx.fpr[1]));
    // nop
    { const bool branch_taken = ctx.fpu_condition();
    // nop
      if (branch_taken) {
          goto L_089C27EC;
      }
      goto L_089C27DC;
    }
L_089C27DC:
    ctx.set_fpr_bits(0, ctx.fpu_float_to_word(ctx.fpr[1], 1u));
    ctx.set_gpr(2, std::bit_cast<std::uint32_t>(ctx.fpr[0]));
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_089C2800;
      }
      goto L_089C27EC;
    }
L_089C27EC:
    ctx.fpr[0] = ctx.fpr[1] - ctx.fpr[0];
    ctx.set_fpr_bits(0, ctx.fpu_float_to_word(ctx.fpr[0], 1u));
    ctx.set_gpr(3, std::bit_cast<std::uint32_t>(ctx.fpr[0]));
    ctx.set_gpr(2, 0u + static_cast<std::uint32_t>(-32768));
    ctx.set_gpr(2, ctx.gpr[3] | ctx.gpr[2]);
    goto L_089C2800;
L_089C2800:
    ctx.set_gpr(5, ctx.gpr[2] & 255u);
    ctx.set_gpr(2, rt.memory().aot_load8(ctx.gpr[29] + static_cast<std::uint32_t>(629)));
    { const bool branch_taken = static_cast<std::int32_t>(ctx.gpr[2]) < 0;
    // nop
      if (branch_taken) {
          goto L_089C2820;
      }
      goto L_089C2810;
    }
L_089C2810:
    ctx.fpr[0] = std::bit_cast<float>(ctx.gpr[2]);
    ctx.fpr[0] = static_cast<float>(static_cast<std::int32_t>(ctx.fpr_bits(0)));
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_089C2838;
      }
      goto L_089C2820;
    }
L_089C2820:
    ctx.set_gpr(3, ctx.gpr[2] >> 1u);
    ctx.set_gpr(2, ctx.gpr[2] & 1u);
    ctx.set_gpr(3, ctx.gpr[3] | ctx.gpr[2]);
    ctx.fpr[0] = std::bit_cast<float>(ctx.gpr[3]);
    ctx.fpr[0] = static_cast<float>(static_cast<std::int32_t>(ctx.fpr_bits(0)));
    ctx.fpr[0] = ctx.fpr[0] + ctx.fpr[0];
    goto L_089C2838;
L_089C2838:
    { const float fs = ctx.fpr[0]; const float ft = ctx.fpr[22]; if ((std::isinf(fs) && ft == 0.0f) || (std::isinf(ft) && fs == 0.0f)) ctx.set_fpr_bits(1, 0x7FC00000u); else ctx.fpr[1] = fs * ft; }
    ctx.set_gpr(2, 20224u << 16u);
    ctx.fpr[0] = std::bit_cast<float>(ctx.gpr[2]);
    ctx.set_fpu_condition((ctx.fpr[0] <= ctx.fpr[1]));
    // nop
    { const bool branch_taken = ctx.fpu_condition();
    // nop
      if (branch_taken) {
          goto L_089C2864;
      }
      goto L_089C2854;
    }
L_089C2854:
    ctx.set_fpr_bits(0, ctx.fpu_float_to_word(ctx.fpr[1], 1u));
    ctx.set_gpr(6, std::bit_cast<std::uint32_t>(ctx.fpr[0]));
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_089C2878;
      }
      goto L_089C2864;
    }
L_089C2864:
    ctx.fpr[0] = ctx.fpr[1] - ctx.fpr[0];
    ctx.set_fpr_bits(0, ctx.fpu_float_to_word(ctx.fpr[0], 1u));
    ctx.set_gpr(3, std::bit_cast<std::uint32_t>(ctx.fpr[0]));
    ctx.set_gpr(2, 0u + static_cast<std::uint32_t>(-32768));
    ctx.set_gpr(6, ctx.gpr[3] | ctx.gpr[2]);
    goto L_089C2878;
L_089C2878:
    ctx.set_gpr(2, rt.memory().aot_load8(ctx.gpr[29] + static_cast<std::uint32_t>(630)));
    { const bool branch_taken = static_cast<std::int32_t>(ctx.gpr[2]) < 0;
    // nop
      if (branch_taken) {
          goto L_089C2894;
      }
      goto L_089C2884;
    }
L_089C2884:
    ctx.fpr[0] = std::bit_cast<float>(ctx.gpr[2]);
    ctx.fpr[0] = static_cast<float>(static_cast<std::int32_t>(ctx.fpr_bits(0)));
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_089C28AC;
      }
      goto L_089C2894;
    }
L_089C2894:
    ctx.set_gpr(3, ctx.gpr[2] >> 1u);
    ctx.set_gpr(2, ctx.gpr[2] & 1u);
    ctx.set_gpr(3, ctx.gpr[3] | ctx.gpr[2]);
    ctx.fpr[0] = std::bit_cast<float>(ctx.gpr[3]);
    ctx.fpr[0] = static_cast<float>(static_cast<std::int32_t>(ctx.fpr_bits(0)));
    ctx.fpr[0] = ctx.fpr[0] + ctx.fpr[0];
    goto L_089C28AC;
L_089C28AC:
    { const float fs = ctx.fpr[0]; const float ft = ctx.fpr[22]; if ((std::isinf(fs) && ft == 0.0f) || (std::isinf(ft) && fs == 0.0f)) ctx.set_fpr_bits(1, 0x7FC00000u); else ctx.fpr[1] = fs * ft; }
    ctx.set_gpr(2, 20224u << 16u);
    ctx.fpr[0] = std::bit_cast<float>(ctx.gpr[2]);
    ctx.set_fpu_condition((ctx.fpr[0] <= ctx.fpr[1]));
    // nop
    { const bool branch_taken = ctx.fpu_condition();
    // nop
      if (branch_taken) {
          goto L_089C28D8;
      }
      goto L_089C28C8;
    }
L_089C28C8:
    ctx.set_fpr_bits(0, ctx.fpu_float_to_word(ctx.fpr[1], 1u));
    ctx.set_gpr(7, std::bit_cast<std::uint32_t>(ctx.fpr[0]));
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_089C28EC;
      }
      goto L_089C28D8;
    }
L_089C28D8:
    ctx.fpr[0] = ctx.fpr[1] - ctx.fpr[0];
    ctx.set_fpr_bits(0, ctx.fpu_float_to_word(ctx.fpr[0], 1u));
    ctx.set_gpr(3, std::bit_cast<std::uint32_t>(ctx.fpr[0]));
    ctx.set_gpr(2, 0u + static_cast<std::uint32_t>(-32768));
    ctx.set_gpr(7, ctx.gpr[3] | ctx.gpr[2]);
    goto L_089C28EC;
L_089C28EC:
    ctx.set_gpr(2, rt.memory().aot_load8(ctx.gpr[29] + static_cast<std::uint32_t>(631)));
    { const bool branch_taken = static_cast<std::int32_t>(ctx.gpr[2]) < 0;
    // nop
      if (branch_taken) {
          goto L_089C2908;
      }
      goto L_089C28F8;
    }
L_089C28F8:
    ctx.fpr[0] = std::bit_cast<float>(ctx.gpr[2]);
    ctx.fpr[0] = static_cast<float>(static_cast<std::int32_t>(ctx.fpr_bits(0)));
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_089C2920;
      }
      goto L_089C2908;
    }
L_089C2908:
    ctx.set_gpr(3, ctx.gpr[2] >> 1u);
    ctx.set_gpr(2, ctx.gpr[2] & 1u);
    ctx.set_gpr(3, ctx.gpr[3] | ctx.gpr[2]);
    ctx.fpr[0] = std::bit_cast<float>(ctx.gpr[3]);
    ctx.fpr[0] = static_cast<float>(static_cast<std::int32_t>(ctx.fpr_bits(0)));
    ctx.fpr[0] = ctx.fpr[0] + ctx.fpr[0];
    goto L_089C2920;
L_089C2920:
    { const float fs = ctx.fpr[0]; const float ft = ctx.fpr[22]; if ((std::isinf(fs) && ft == 0.0f) || (std::isinf(ft) && fs == 0.0f)) ctx.set_fpr_bits(1, 0x7FC00000u); else ctx.fpr[1] = fs * ft; }
    ctx.set_gpr(2, 20224u << 16u);
    ctx.fpr[0] = std::bit_cast<float>(ctx.gpr[2]);
    ctx.set_fpu_condition((ctx.fpr[0] <= ctx.fpr[1]));
    // nop
    { const bool branch_taken = ctx.fpu_condition();
    // nop
      if (branch_taken) {
          goto L_089C294C;
      }
      goto L_089C293C;
    }
L_089C293C:
    ctx.set_fpr_bits(0, ctx.fpu_float_to_word(ctx.fpr[1], 1u));
    ctx.set_gpr(8, std::bit_cast<std::uint32_t>(ctx.fpr[0]));
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_089C2960;
      }
      goto L_089C294C;
    }
L_089C294C:
    ctx.fpr[0] = ctx.fpr[1] - ctx.fpr[0];
    ctx.set_fpr_bits(0, ctx.fpu_float_to_word(ctx.fpr[0], 1u));
    ctx.set_gpr(3, std::bit_cast<std::uint32_t>(ctx.fpr[0]));
    ctx.set_gpr(2, 0u + static_cast<std::uint32_t>(-32768));
    ctx.set_gpr(8, ctx.gpr[3] | ctx.gpr[2]);
    goto L_089C2960;
L_089C2960:
    ctx.set_gpr(4, ctx.gpr[29] + static_cast<std::uint32_t>(632));
    ctx.set_gpr(31, 0x089C296Cu);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0112_entry, 112u, 41u, 0x089C4700u>(ctx, &aot_mem) && ctx.pc == 0x089C296Cu) goto L_089C296C;
    return;
L_089C296C:
    ctx.set_gpr(3, rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(1476)));
    ctx.set_gpr(2, ctx.gpr[3] << 1u);
    ctx.set_gpr(2, ctx.gpr[2] + ctx.gpr[3]);
    ctx.set_gpr(2, ctx.gpr[18] + ctx.gpr[2]);
    ctx.set_gpr(3, rt.memory().aot_load8(ctx.gpr[2] + static_cast<std::uint32_t>(0)));
    { const bool branch_taken = static_cast<std::int32_t>(ctx.gpr[3]) < 0;
    // nop
      if (branch_taken) {
          goto L_089C2998;
      }
      goto L_089C2988;
    }
L_089C2988:
    ctx.fpr[0] = std::bit_cast<float>(ctx.gpr[3]);
    ctx.fpr[0] = static_cast<float>(static_cast<std::int32_t>(ctx.fpr_bits(0)));
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_089C29B0;
      }
      goto L_089C2998;
    }
L_089C2998:
    ctx.set_gpr(4, ctx.gpr[3] >> 1u);
    ctx.set_gpr(3, ctx.gpr[3] & 1u);
    ctx.set_gpr(4, ctx.gpr[4] | ctx.gpr[3]);
    ctx.fpr[0] = std::bit_cast<float>(ctx.gpr[4]);
    ctx.fpr[0] = static_cast<float>(static_cast<std::int32_t>(ctx.fpr_bits(0)));
    ctx.fpr[0] = ctx.fpr[0] + ctx.fpr[0];
    goto L_089C29B0;
L_089C29B0:
    { const float fs = ctx.fpr[0]; const float ft = ctx.fpr[24]; if ((std::isinf(fs) && ft == 0.0f) || (std::isinf(ft) && fs == 0.0f)) ctx.set_fpr_bits(1, 0x7FC00000u); else ctx.fpr[1] = fs * ft; }
    ctx.set_gpr(3, 20224u << 16u);
    ctx.fpr[0] = std::bit_cast<float>(ctx.gpr[3]);
    ctx.set_fpu_condition((ctx.fpr[0] <= ctx.fpr[1]));
    // nop
    { const bool branch_taken = ctx.fpu_condition();
    // nop
      if (branch_taken) {
          goto L_089C29DC;
      }
      goto L_089C29CC;
    }
L_089C29CC:
    ctx.set_fpr_bits(0, ctx.fpu_float_to_word(ctx.fpr[1], 1u));
    ctx.set_gpr(3, std::bit_cast<std::uint32_t>(ctx.fpr[0]));
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_089C29F0;
      }
      goto L_089C29DC;
    }
L_089C29DC:
    ctx.fpr[0] = ctx.fpr[1] - ctx.fpr[0];
    ctx.set_fpr_bits(0, ctx.fpu_float_to_word(ctx.fpr[0], 1u));
    ctx.set_gpr(4, std::bit_cast<std::uint32_t>(ctx.fpr[0]));
    ctx.set_gpr(3, 0u + static_cast<std::uint32_t>(-32768));
    ctx.set_gpr(3, ctx.gpr[4] | ctx.gpr[3]);
    goto L_089C29F0;
L_089C29F0:
    ctx.set_gpr(5, ctx.gpr[3] & 255u);
    ctx.set_gpr(3, rt.memory().aot_load8(ctx.gpr[2] + static_cast<std::uint32_t>(1)));
    { const bool branch_taken = static_cast<std::int32_t>(ctx.gpr[3]) < 0;
    // nop
      if (branch_taken) {
          goto L_089C2A10;
      }
      goto L_089C2A00;
    }
L_089C2A00:
    ctx.fpr[0] = std::bit_cast<float>(ctx.gpr[3]);
    ctx.fpr[0] = static_cast<float>(static_cast<std::int32_t>(ctx.fpr_bits(0)));
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_089C2A28;
      }
      goto L_089C2A10;
    }
L_089C2A10:
    ctx.set_gpr(4, ctx.gpr[3] >> 1u);
    ctx.set_gpr(3, ctx.gpr[3] & 1u);
    ctx.set_gpr(4, ctx.gpr[4] | ctx.gpr[3]);
    ctx.fpr[0] = std::bit_cast<float>(ctx.gpr[4]);
    ctx.fpr[0] = static_cast<float>(static_cast<std::int32_t>(ctx.fpr_bits(0)));
    ctx.fpr[0] = ctx.fpr[0] + ctx.fpr[0];
    goto L_089C2A28;
L_089C2A28:
    { const float fs = ctx.fpr[0]; const float ft = ctx.fpr[24]; if ((std::isinf(fs) && ft == 0.0f) || (std::isinf(ft) && fs == 0.0f)) ctx.set_fpr_bits(1, 0x7FC00000u); else ctx.fpr[1] = fs * ft; }
    ctx.set_gpr(3, 20224u << 16u);
    ctx.fpr[0] = std::bit_cast<float>(ctx.gpr[3]);
    ctx.set_fpu_condition((ctx.fpr[0] <= ctx.fpr[1]));
    // nop
    { const bool branch_taken = ctx.fpu_condition();
    // nop
      if (branch_taken) {
          goto L_089C2A54;
      }
      goto L_089C2A44;
    }
L_089C2A44:
    ctx.set_fpr_bits(0, ctx.fpu_float_to_word(ctx.fpr[1], 1u));
    ctx.set_gpr(6, std::bit_cast<std::uint32_t>(ctx.fpr[0]));
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_089C2A68;
      }
      goto L_089C2A54;
    }
L_089C2A54:
    ctx.fpr[0] = ctx.fpr[1] - ctx.fpr[0];
    ctx.set_fpr_bits(0, ctx.fpu_float_to_word(ctx.fpr[0], 1u));
    ctx.set_gpr(4, std::bit_cast<std::uint32_t>(ctx.fpr[0]));
    ctx.set_gpr(3, 0u + static_cast<std::uint32_t>(-32768));
    ctx.set_gpr(6, ctx.gpr[4] | ctx.gpr[3]);
    goto L_089C2A68;
L_089C2A68:
    ctx.set_gpr(3, rt.memory().aot_load8(ctx.gpr[2] + static_cast<std::uint32_t>(2)));
    { const bool branch_taken = static_cast<std::int32_t>(ctx.gpr[3]) < 0;
    // nop
      if (branch_taken) {
          goto L_089C2A84;
      }
      goto L_089C2A74;
    }
L_089C2A74:
    ctx.fpr[0] = std::bit_cast<float>(ctx.gpr[3]);
    ctx.fpr[0] = static_cast<float>(static_cast<std::int32_t>(ctx.fpr_bits(0)));
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_089C2A9C;
      }
      goto L_089C2A84;
    }
L_089C2A84:
    ctx.set_gpr(4, ctx.gpr[3] >> 1u);
    ctx.set_gpr(3, ctx.gpr[3] & 1u);
    ctx.set_gpr(4, ctx.gpr[4] | ctx.gpr[3]);
    ctx.fpr[0] = std::bit_cast<float>(ctx.gpr[4]);
    ctx.fpr[0] = static_cast<float>(static_cast<std::int32_t>(ctx.fpr_bits(0)));
    ctx.fpr[0] = ctx.fpr[0] + ctx.fpr[0];
    goto L_089C2A9C;
L_089C2A9C:
    { const float fs = ctx.fpr[0]; const float ft = ctx.fpr[24]; if ((std::isinf(fs) && ft == 0.0f) || (std::isinf(ft) && fs == 0.0f)) ctx.set_fpr_bits(1, 0x7FC00000u); else ctx.fpr[1] = fs * ft; }
    ctx.set_gpr(3, 20224u << 16u);
    ctx.fpr[0] = std::bit_cast<float>(ctx.gpr[3]);
    ctx.set_fpu_condition((ctx.fpr[0] <= ctx.fpr[1]));
    // nop
    { const bool branch_taken = ctx.fpu_condition();
    // nop
      if (branch_taken) {
          goto L_089C2AC8;
      }
      goto L_089C2AB8;
    }
L_089C2AB8:
    ctx.set_fpr_bits(0, ctx.fpu_float_to_word(ctx.fpr[1], 1u));
    ctx.set_gpr(7, std::bit_cast<std::uint32_t>(ctx.fpr[0]));
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_089C2ADC;
      }
      goto L_089C2AC8;
    }
L_089C2AC8:
    ctx.fpr[0] = ctx.fpr[1] - ctx.fpr[0];
    ctx.set_fpr_bits(0, ctx.fpu_float_to_word(ctx.fpr[0], 1u));
    ctx.set_gpr(4, std::bit_cast<std::uint32_t>(ctx.fpr[0]));
    ctx.set_gpr(3, 0u + static_cast<std::uint32_t>(-32768));
    ctx.set_gpr(7, ctx.gpr[4] | ctx.gpr[3]);
    goto L_089C2ADC;
L_089C2ADC:
    ctx.set_gpr(2, rt.memory().aot_load8(ctx.gpr[2] + static_cast<std::uint32_t>(3)));
    { const bool branch_taken = static_cast<std::int32_t>(ctx.gpr[2]) < 0;
    // nop
      if (branch_taken) {
          goto L_089C2AF8;
      }
      goto L_089C2AE8;
    }
L_089C2AE8:
    ctx.fpr[0] = std::bit_cast<float>(ctx.gpr[2]);
    ctx.fpr[0] = static_cast<float>(static_cast<std::int32_t>(ctx.fpr_bits(0)));
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_089C2B10;
      }
      goto L_089C2AF8;
    }
L_089C2AF8:
    ctx.set_gpr(3, ctx.gpr[2] >> 1u);
    ctx.set_gpr(2, ctx.gpr[2] & 1u);
    ctx.set_gpr(3, ctx.gpr[3] | ctx.gpr[2]);
    ctx.fpr[0] = std::bit_cast<float>(ctx.gpr[3]);
    ctx.fpr[0] = static_cast<float>(static_cast<std::int32_t>(ctx.fpr_bits(0)));
    ctx.fpr[0] = ctx.fpr[0] + ctx.fpr[0];
    goto L_089C2B10;
L_089C2B10:
    { const float fs = ctx.fpr[0]; const float ft = ctx.fpr[24]; if ((std::isinf(fs) && ft == 0.0f) || (std::isinf(ft) && fs == 0.0f)) ctx.set_fpr_bits(1, 0x7FC00000u); else ctx.fpr[1] = fs * ft; }
    ctx.set_gpr(2, 20224u << 16u);
    ctx.fpr[0] = std::bit_cast<float>(ctx.gpr[2]);
    ctx.set_fpu_condition((ctx.fpr[0] <= ctx.fpr[1]));
    // nop
    { const bool branch_taken = ctx.fpu_condition();
    // nop
      if (branch_taken) {
          goto L_089C2B3C;
      }
      goto L_089C2B2C;
    }
L_089C2B2C:
    ctx.set_fpr_bits(0, ctx.fpu_float_to_word(ctx.fpr[1], 1u));
    ctx.set_gpr(8, std::bit_cast<std::uint32_t>(ctx.fpr[0]));
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_089C2B50;
      }
      goto L_089C2B3C;
    }
L_089C2B3C:
    ctx.fpr[0] = ctx.fpr[1] - ctx.fpr[0];
    ctx.set_fpr_bits(0, ctx.fpu_float_to_word(ctx.fpr[0], 1u));
    ctx.set_gpr(3, std::bit_cast<std::uint32_t>(ctx.fpr[0]));
    ctx.set_gpr(2, 0u + static_cast<std::uint32_t>(-32768));
    ctx.set_gpr(8, ctx.gpr[3] | ctx.gpr[2]);
    goto L_089C2B50;
L_089C2B50:
    ctx.set_gpr(4, ctx.gpr[29] + static_cast<std::uint32_t>(636));
    ctx.set_gpr(31, 0x089C2B5Cu);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0112_entry, 112u, 41u, 0x089C4700u>(ctx, &aot_mem) && ctx.pc == 0x089C2B5Cu) goto L_089C2B5C;
    return;
L_089C2B5C:
    ctx.set_gpr(2, rt.memory().aot_load8(ctx.gpr[29] + static_cast<std::uint32_t>(636)));
    { const bool branch_taken = static_cast<std::int32_t>(ctx.gpr[2]) < 0;
    // nop
      if (branch_taken) {
          goto L_089C2B78;
      }
      goto L_089C2B68;
    }
L_089C2B68:
    ctx.fpr[0] = std::bit_cast<float>(ctx.gpr[2]);
    ctx.fpr[0] = static_cast<float>(static_cast<std::int32_t>(ctx.fpr_bits(0)));
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_089C2B90;
      }
      goto L_089C2B78;
    }
L_089C2B78:
    ctx.set_gpr(3, ctx.gpr[2] >> 1u);
    ctx.set_gpr(2, ctx.gpr[2] & 1u);
    ctx.set_gpr(3, ctx.gpr[3] | ctx.gpr[2]);
    ctx.fpr[0] = std::bit_cast<float>(ctx.gpr[3]);
    ctx.fpr[0] = static_cast<float>(static_cast<std::int32_t>(ctx.fpr_bits(0)));
    ctx.fpr[0] = ctx.fpr[0] + ctx.fpr[0];
    goto L_089C2B90;
L_089C2B90:
    { const float fs = ctx.fpr[0]; const float ft = ctx.fpr[23]; if ((std::isinf(fs) && ft == 0.0f) || (std::isinf(ft) && fs == 0.0f)) ctx.set_fpr_bits(1, 0x7FC00000u); else ctx.fpr[1] = fs * ft; }
    ctx.set_gpr(2, 20224u << 16u);
    ctx.fpr[0] = std::bit_cast<float>(ctx.gpr[2]);
    ctx.set_fpu_condition((ctx.fpr[0] <= ctx.fpr[1]));
    // nop
    { const bool branch_taken = ctx.fpu_condition();
    // nop
      if (branch_taken) {
          goto L_089C2BBC;
      }
      goto L_089C2BAC;
    }
L_089C2BAC:
    ctx.set_fpr_bits(0, ctx.fpu_float_to_word(ctx.fpr[1], 1u));
    ctx.set_gpr(2, std::bit_cast<std::uint32_t>(ctx.fpr[0]));
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_089C2BD0;
      }
      goto L_089C2BBC;
    }
L_089C2BBC:
    ctx.fpr[0] = ctx.fpr[1] - ctx.fpr[0];
    ctx.set_fpr_bits(0, ctx.fpu_float_to_word(ctx.fpr[0], 1u));
    ctx.set_gpr(3, std::bit_cast<std::uint32_t>(ctx.fpr[0]));
    ctx.set_gpr(2, 0u + static_cast<std::uint32_t>(-32768));
    ctx.set_gpr(2, ctx.gpr[3] | ctx.gpr[2]);
    goto L_089C2BD0;
L_089C2BD0:
    ctx.set_gpr(5, ctx.gpr[2] & 255u);
    ctx.set_gpr(2, rt.memory().aot_load8(ctx.gpr[29] + static_cast<std::uint32_t>(637)));
    { const bool branch_taken = static_cast<std::int32_t>(ctx.gpr[2]) < 0;
    // nop
      if (branch_taken) {
          goto L_089C2BF0;
      }
      goto L_089C2BE0;
    }
L_089C2BE0:
    ctx.fpr[0] = std::bit_cast<float>(ctx.gpr[2]);
    ctx.fpr[0] = static_cast<float>(static_cast<std::int32_t>(ctx.fpr_bits(0)));
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_089C2C08;
      }
      goto L_089C2BF0;
    }
L_089C2BF0:
    ctx.set_gpr(3, ctx.gpr[2] >> 1u);
    ctx.set_gpr(2, ctx.gpr[2] & 1u);
    ctx.set_gpr(3, ctx.gpr[3] | ctx.gpr[2]);
    ctx.fpr[0] = std::bit_cast<float>(ctx.gpr[3]);
    ctx.fpr[0] = static_cast<float>(static_cast<std::int32_t>(ctx.fpr_bits(0)));
    ctx.fpr[0] = ctx.fpr[0] + ctx.fpr[0];
    goto L_089C2C08;
L_089C2C08:
    { const float fs = ctx.fpr[0]; const float ft = ctx.fpr[23]; if ((std::isinf(fs) && ft == 0.0f) || (std::isinf(ft) && fs == 0.0f)) ctx.set_fpr_bits(1, 0x7FC00000u); else ctx.fpr[1] = fs * ft; }
    ctx.set_gpr(2, 20224u << 16u);
    ctx.fpr[0] = std::bit_cast<float>(ctx.gpr[2]);
    ctx.set_fpu_condition((ctx.fpr[0] <= ctx.fpr[1]));
    // nop
    { const bool branch_taken = ctx.fpu_condition();
    // nop
      if (branch_taken) {
          goto L_089C2C34;
      }
      goto L_089C2C24;
    }
L_089C2C24:
    ctx.set_fpr_bits(0, ctx.fpu_float_to_word(ctx.fpr[1], 1u));
    ctx.set_gpr(6, std::bit_cast<std::uint32_t>(ctx.fpr[0]));
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_089C2C48;
      }
      goto L_089C2C34;
    }
L_089C2C34:
    ctx.fpr[0] = ctx.fpr[1] - ctx.fpr[0];
    ctx.set_fpr_bits(0, ctx.fpu_float_to_word(ctx.fpr[0], 1u));
    ctx.set_gpr(3, std::bit_cast<std::uint32_t>(ctx.fpr[0]));
    ctx.set_gpr(2, 0u + static_cast<std::uint32_t>(-32768));
    ctx.set_gpr(6, ctx.gpr[3] | ctx.gpr[2]);
    goto L_089C2C48;
L_089C2C48:
    ctx.set_gpr(2, rt.memory().aot_load8(ctx.gpr[29] + static_cast<std::uint32_t>(638)));
    { const bool branch_taken = static_cast<std::int32_t>(ctx.gpr[2]) < 0;
    // nop
      if (branch_taken) {
          goto L_089C2C64;
      }
      goto L_089C2C54;
    }
L_089C2C54:
    ctx.fpr[0] = std::bit_cast<float>(ctx.gpr[2]);
    ctx.fpr[0] = static_cast<float>(static_cast<std::int32_t>(ctx.fpr_bits(0)));
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_089C2C7C;
      }
      goto L_089C2C64;
    }
L_089C2C64:
    ctx.set_gpr(3, ctx.gpr[2] >> 1u);
    ctx.set_gpr(2, ctx.gpr[2] & 1u);
    ctx.set_gpr(3, ctx.gpr[3] | ctx.gpr[2]);
    ctx.fpr[0] = std::bit_cast<float>(ctx.gpr[3]);
    ctx.fpr[0] = static_cast<float>(static_cast<std::int32_t>(ctx.fpr_bits(0)));
    ctx.fpr[0] = ctx.fpr[0] + ctx.fpr[0];
    goto L_089C2C7C;
L_089C2C7C:
    { const float fs = ctx.fpr[0]; const float ft = ctx.fpr[23]; if ((std::isinf(fs) && ft == 0.0f) || (std::isinf(ft) && fs == 0.0f)) ctx.set_fpr_bits(1, 0x7FC00000u); else ctx.fpr[1] = fs * ft; }
    ctx.set_gpr(2, 20224u << 16u);
    ctx.fpr[0] = std::bit_cast<float>(ctx.gpr[2]);
    ctx.set_fpu_condition((ctx.fpr[0] <= ctx.fpr[1]));
    // nop
    { const bool branch_taken = ctx.fpu_condition();
    // nop
      if (branch_taken) {
          goto L_089C2CA8;
      }
      goto L_089C2C98;
    }
L_089C2C98:
    ctx.set_fpr_bits(0, ctx.fpu_float_to_word(ctx.fpr[1], 1u));
    ctx.set_gpr(7, std::bit_cast<std::uint32_t>(ctx.fpr[0]));
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_089C2CBC;
      }
      goto L_089C2CA8;
    }
L_089C2CA8:
    ctx.fpr[0] = ctx.fpr[1] - ctx.fpr[0];
    ctx.set_fpr_bits(0, ctx.fpu_float_to_word(ctx.fpr[0], 1u));
    ctx.set_gpr(3, std::bit_cast<std::uint32_t>(ctx.fpr[0]));
    ctx.set_gpr(2, 0u + static_cast<std::uint32_t>(-32768));
    ctx.set_gpr(7, ctx.gpr[3] | ctx.gpr[2]);
    goto L_089C2CBC;
L_089C2CBC:
    ctx.set_gpr(2, rt.memory().aot_load8(ctx.gpr[29] + static_cast<std::uint32_t>(639)));
    { const bool branch_taken = static_cast<std::int32_t>(ctx.gpr[2]) < 0;
    // nop
      if (branch_taken) {
          goto L_089C2CD8;
      }
      goto L_089C2CC8;
    }
L_089C2CC8:
    ctx.fpr[0] = std::bit_cast<float>(ctx.gpr[2]);
    ctx.fpr[0] = static_cast<float>(static_cast<std::int32_t>(ctx.fpr_bits(0)));
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_089C2CF0;
      }
      goto L_089C2CD8;
    }
L_089C2CD8:
    ctx.set_gpr(3, ctx.gpr[2] >> 1u);
    ctx.set_gpr(2, ctx.gpr[2] & 1u);
    ctx.set_gpr(3, ctx.gpr[3] | ctx.gpr[2]);
    ctx.fpr[0] = std::bit_cast<float>(ctx.gpr[3]);
    ctx.fpr[0] = static_cast<float>(static_cast<std::int32_t>(ctx.fpr_bits(0)));
    ctx.fpr[0] = ctx.fpr[0] + ctx.fpr[0];
    goto L_089C2CF0;
L_089C2CF0:
    { const float fs = ctx.fpr[0]; const float ft = ctx.fpr[23]; if ((std::isinf(fs) && ft == 0.0f) || (std::isinf(ft) && fs == 0.0f)) ctx.set_fpr_bits(1, 0x7FC00000u); else ctx.fpr[1] = fs * ft; }
    ctx.set_gpr(2, 20224u << 16u);
    ctx.fpr[0] = std::bit_cast<float>(ctx.gpr[2]);
    ctx.set_fpu_condition((ctx.fpr[0] <= ctx.fpr[1]));
    // nop
    { const bool branch_taken = ctx.fpu_condition();
    // nop
      if (branch_taken) {
          goto L_089C2D1C;
      }
      goto L_089C2D0C;
    }
L_089C2D0C:
    ctx.set_fpr_bits(0, ctx.fpu_float_to_word(ctx.fpr[1], 1u));
    ctx.set_gpr(8, std::bit_cast<std::uint32_t>(ctx.fpr[0]));
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_089C2D30;
      }
      goto L_089C2D1C;
    }
L_089C2D1C:
    ctx.fpr[0] = ctx.fpr[1] - ctx.fpr[0];
    ctx.set_fpr_bits(0, ctx.fpu_float_to_word(ctx.fpr[0], 1u));
    ctx.set_gpr(3, std::bit_cast<std::uint32_t>(ctx.fpr[0]));
    ctx.set_gpr(2, 0u + static_cast<std::uint32_t>(-32768));
    ctx.set_gpr(8, ctx.gpr[3] | ctx.gpr[2]);
    goto L_089C2D30;
L_089C2D30:
    ctx.set_gpr(4, ctx.gpr[29] + static_cast<std::uint32_t>(640));
    ctx.set_gpr(31, 0x089C2D3Cu);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0112_entry, 112u, 41u, 0x089C4700u>(ctx, &aot_mem) && ctx.pc == 0x089C2D3Cu) goto L_089C2D3C;
    return;
L_089C2D3C:
    ctx.set_gpr(2, rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(1476)));
    ctx.set_gpr(2, ctx.gpr[2] << 1u);
    ctx.set_gpr(2, ctx.gpr[18] + ctx.gpr[2]);
    ctx.set_gpr(3, rt.memory().aot_load8(ctx.gpr[2] + static_cast<std::uint32_t>(0)));
    { const bool branch_taken = static_cast<std::int32_t>(ctx.gpr[3]) < 0;
    // nop
      if (branch_taken) {
          goto L_089C2D64;
      }
      goto L_089C2D54;
    }
L_089C2D54:
    ctx.fpr[0] = std::bit_cast<float>(ctx.gpr[3]);
    ctx.fpr[0] = static_cast<float>(static_cast<std::int32_t>(ctx.fpr_bits(0)));
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_089C2D7C;
      }
      goto L_089C2D64;
    }
L_089C2D64:
    ctx.set_gpr(4, ctx.gpr[3] >> 1u);
    ctx.set_gpr(3, ctx.gpr[3] & 1u);
    ctx.set_gpr(4, ctx.gpr[4] | ctx.gpr[3]);
    ctx.fpr[0] = std::bit_cast<float>(ctx.gpr[4]);
    ctx.fpr[0] = static_cast<float>(static_cast<std::int32_t>(ctx.fpr_bits(0)));
    ctx.fpr[0] = ctx.fpr[0] + ctx.fpr[0];
    goto L_089C2D7C;
L_089C2D7C:
    { const float fs = ctx.fpr[0]; const float ft = ctx.fpr[25]; if ((std::isinf(fs) && ft == 0.0f) || (std::isinf(ft) && fs == 0.0f)) ctx.set_fpr_bits(1, 0x7FC00000u); else ctx.fpr[1] = fs * ft; }
    ctx.set_gpr(3, 20224u << 16u);
    ctx.fpr[0] = std::bit_cast<float>(ctx.gpr[3]);
    ctx.set_fpu_condition((ctx.fpr[0] <= ctx.fpr[1]));
    // nop
    { const bool branch_taken = ctx.fpu_condition();
    // nop
      if (branch_taken) {
          goto L_089C2DA8;
      }
      goto L_089C2D98;
    }
L_089C2D98:
    ctx.set_fpr_bits(0, ctx.fpu_float_to_word(ctx.fpr[1], 1u));
    ctx.set_gpr(3, std::bit_cast<std::uint32_t>(ctx.fpr[0]));
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_089C2DBC;
      }
      goto L_089C2DA8;
    }
L_089C2DA8:
    ctx.fpr[0] = ctx.fpr[1] - ctx.fpr[0];
    ctx.set_fpr_bits(0, ctx.fpu_float_to_word(ctx.fpr[0], 1u));
    ctx.set_gpr(4, std::bit_cast<std::uint32_t>(ctx.fpr[0]));
    ctx.set_gpr(3, 0u + static_cast<std::uint32_t>(-32768));
    ctx.set_gpr(3, ctx.gpr[4] | ctx.gpr[3]);
    goto L_089C2DBC;
L_089C2DBC:
    ctx.set_gpr(5, ctx.gpr[3] & 255u);
    ctx.set_gpr(3, rt.memory().aot_load8(ctx.gpr[2] + static_cast<std::uint32_t>(1)));
    { const bool branch_taken = static_cast<std::int32_t>(ctx.gpr[3]) < 0;
    // nop
      if (branch_taken) {
          goto L_089C2DDC;
      }
      goto L_089C2DCC;
    }
L_089C2DCC:
    ctx.fpr[0] = std::bit_cast<float>(ctx.gpr[3]);
    ctx.fpr[0] = static_cast<float>(static_cast<std::int32_t>(ctx.fpr_bits(0)));
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_089C2DF4;
      }
      goto L_089C2DDC;
    }
L_089C2DDC:
    ctx.set_gpr(4, ctx.gpr[3] >> 1u);
    ctx.set_gpr(3, ctx.gpr[3] & 1u);
    ctx.set_gpr(4, ctx.gpr[4] | ctx.gpr[3]);
    ctx.fpr[0] = std::bit_cast<float>(ctx.gpr[4]);
    ctx.fpr[0] = static_cast<float>(static_cast<std::int32_t>(ctx.fpr_bits(0)));
    ctx.fpr[0] = ctx.fpr[0] + ctx.fpr[0];
    goto L_089C2DF4;
L_089C2DF4:
    { const float fs = ctx.fpr[0]; const float ft = ctx.fpr[25]; if ((std::isinf(fs) && ft == 0.0f) || (std::isinf(ft) && fs == 0.0f)) ctx.set_fpr_bits(1, 0x7FC00000u); else ctx.fpr[1] = fs * ft; }
    ctx.set_gpr(3, 20224u << 16u);
    ctx.fpr[0] = std::bit_cast<float>(ctx.gpr[3]);
    ctx.set_fpu_condition((ctx.fpr[0] <= ctx.fpr[1]));
    // nop
    { const bool branch_taken = ctx.fpu_condition();
    // nop
      if (branch_taken) {
          goto L_089C2E20;
      }
      goto L_089C2E10;
    }
L_089C2E10:
    ctx.set_fpr_bits(0, ctx.fpu_float_to_word(ctx.fpr[1], 1u));
    ctx.set_gpr(6, std::bit_cast<std::uint32_t>(ctx.fpr[0]));
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_089C2E34;
      }
      goto L_089C2E20;
    }
L_089C2E20:
    ctx.fpr[0] = ctx.fpr[1] - ctx.fpr[0];
    ctx.set_fpr_bits(0, ctx.fpu_float_to_word(ctx.fpr[0], 1u));
    ctx.set_gpr(4, std::bit_cast<std::uint32_t>(ctx.fpr[0]));
    ctx.set_gpr(3, 0u + static_cast<std::uint32_t>(-32768));
    ctx.set_gpr(6, ctx.gpr[4] | ctx.gpr[3]);
    goto L_089C2E34;
L_089C2E34:
    ctx.set_gpr(3, rt.memory().aot_load8(ctx.gpr[2] + static_cast<std::uint32_t>(2)));
    { const bool branch_taken = static_cast<std::int32_t>(ctx.gpr[3]) < 0;
    // nop
      if (branch_taken) {
          goto L_089C2E50;
      }
      goto L_089C2E40;
    }
L_089C2E40:
    ctx.fpr[0] = std::bit_cast<float>(ctx.gpr[3]);
    ctx.fpr[0] = static_cast<float>(static_cast<std::int32_t>(ctx.fpr_bits(0)));
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_089C2E68;
      }
      goto L_089C2E50;
    }
L_089C2E50:
    ctx.set_gpr(4, ctx.gpr[3] >> 1u);
    ctx.set_gpr(3, ctx.gpr[3] & 1u);
    ctx.set_gpr(4, ctx.gpr[4] | ctx.gpr[3]);
    ctx.fpr[0] = std::bit_cast<float>(ctx.gpr[4]);
    ctx.fpr[0] = static_cast<float>(static_cast<std::int32_t>(ctx.fpr_bits(0)));
    ctx.fpr[0] = ctx.fpr[0] + ctx.fpr[0];
    goto L_089C2E68;
L_089C2E68:
    { const float fs = ctx.fpr[0]; const float ft = ctx.fpr[25]; if ((std::isinf(fs) && ft == 0.0f) || (std::isinf(ft) && fs == 0.0f)) ctx.set_fpr_bits(1, 0x7FC00000u); else ctx.fpr[1] = fs * ft; }
    ctx.set_gpr(3, 20224u << 16u);
    ctx.fpr[0] = std::bit_cast<float>(ctx.gpr[3]);
    ctx.set_fpu_condition((ctx.fpr[0] <= ctx.fpr[1]));
    // nop
    { const bool branch_taken = ctx.fpu_condition();
    // nop
      if (branch_taken) {
          goto L_089C2E94;
      }
      goto L_089C2E84;
    }
L_089C2E84:
    ctx.set_fpr_bits(0, ctx.fpu_float_to_word(ctx.fpr[1], 1u));
    ctx.set_gpr(7, std::bit_cast<std::uint32_t>(ctx.fpr[0]));
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_089C2EA8;
      }
      goto L_089C2E94;
    }
L_089C2E94:
    ctx.fpr[0] = ctx.fpr[1] - ctx.fpr[0];
    ctx.set_fpr_bits(0, ctx.fpu_float_to_word(ctx.fpr[0], 1u));
    ctx.set_gpr(4, std::bit_cast<std::uint32_t>(ctx.fpr[0]));
    ctx.set_gpr(3, 0u + static_cast<std::uint32_t>(-32768));
    ctx.set_gpr(7, ctx.gpr[4] | ctx.gpr[3]);
    goto L_089C2EA8;
L_089C2EA8:
    ctx.set_gpr(2, rt.memory().aot_load8(ctx.gpr[2] + static_cast<std::uint32_t>(3)));
    { const bool branch_taken = static_cast<std::int32_t>(ctx.gpr[2]) < 0;
    // nop
      if (branch_taken) {
          goto L_089C2EC4;
      }
      goto L_089C2EB4;
    }
L_089C2EB4:
    ctx.fpr[0] = std::bit_cast<float>(ctx.gpr[2]);
    ctx.fpr[0] = static_cast<float>(static_cast<std::int32_t>(ctx.fpr_bits(0)));
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_089C2EDC;
      }
      goto L_089C2EC4;
    }
L_089C2EC4:
    ctx.set_gpr(3, ctx.gpr[2] >> 1u);
    ctx.set_gpr(2, ctx.gpr[2] & 1u);
    ctx.set_gpr(3, ctx.gpr[3] | ctx.gpr[2]);
    ctx.fpr[0] = std::bit_cast<float>(ctx.gpr[3]);
    ctx.fpr[0] = static_cast<float>(static_cast<std::int32_t>(ctx.fpr_bits(0)));
    ctx.fpr[0] = ctx.fpr[0] + ctx.fpr[0];
    goto L_089C2EDC;
L_089C2EDC:
    { const float fs = ctx.fpr[0]; const float ft = ctx.fpr[25]; if ((std::isinf(fs) && ft == 0.0f) || (std::isinf(ft) && fs == 0.0f)) ctx.set_fpr_bits(1, 0x7FC00000u); else ctx.fpr[1] = fs * ft; }
    ctx.set_gpr(2, 20224u << 16u);
    ctx.fpr[0] = std::bit_cast<float>(ctx.gpr[2]);
    ctx.set_fpu_condition((ctx.fpr[0] <= ctx.fpr[1]));
    // nop
    { const bool branch_taken = ctx.fpu_condition();
    // nop
      if (branch_taken) {
          goto L_089C2F08;
      }
      goto L_089C2EF8;
    }
L_089C2EF8:
    ctx.set_fpr_bits(0, ctx.fpu_float_to_word(ctx.fpr[1], 1u));
    ctx.set_gpr(8, std::bit_cast<std::uint32_t>(ctx.fpr[0]));
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_089C2F1C;
      }
      goto L_089C2F08;
    }
L_089C2F08:
    ctx.fpr[0] = ctx.fpr[1] - ctx.fpr[0];
    ctx.set_fpr_bits(0, ctx.fpu_float_to_word(ctx.fpr[0], 1u));
    ctx.set_gpr(3, std::bit_cast<std::uint32_t>(ctx.fpr[0]));
    ctx.set_gpr(2, 0u + static_cast<std::uint32_t>(-32768));
    ctx.set_gpr(8, ctx.gpr[3] | ctx.gpr[2]);
    goto L_089C2F1C;
L_089C2F1C:
    ctx.set_gpr(4, ctx.gpr[29] + static_cast<std::uint32_t>(644));
    ctx.set_gpr(31, 0x089C2F28u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0112_entry, 112u, 41u, 0x089C4700u>(ctx, &aot_mem) && ctx.pc == 0x089C2F28u) goto L_089C2F28;
    return;
L_089C2F28:
    ctx.set_gpr(2, rt.memory().aot_load8(ctx.gpr[29] + static_cast<std::uint32_t>(644)));
    { const bool branch_taken = static_cast<std::int32_t>(ctx.gpr[2]) < 0;
    // nop
      if (branch_taken) {
          goto L_089C2F44;
      }
      goto L_089C2F34;
    }
L_089C2F34:
    ctx.fpr[0] = std::bit_cast<float>(ctx.gpr[2]);
    ctx.fpr[0] = static_cast<float>(static_cast<std::int32_t>(ctx.fpr_bits(0)));
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_089C2F5C;
      }
      goto L_089C2F44;
    }
L_089C2F44:
    ctx.set_gpr(3, ctx.gpr[2] >> 1u);
    ctx.set_gpr(2, ctx.gpr[2] & 1u);
    ctx.set_gpr(3, ctx.gpr[3] | ctx.gpr[2]);
    ctx.fpr[0] = std::bit_cast<float>(ctx.gpr[3]);
    ctx.fpr[0] = static_cast<float>(static_cast<std::int32_t>(ctx.fpr_bits(0)));
    ctx.fpr[0] = ctx.fpr[0] + ctx.fpr[0];
    goto L_089C2F5C;
L_089C2F5C:
    { const float fs = ctx.fpr[0]; const float ft = ctx.fpr[23]; if ((std::isinf(fs) && ft == 0.0f) || (std::isinf(ft) && fs == 0.0f)) ctx.set_fpr_bits(1, 0x7FC00000u); else ctx.fpr[1] = fs * ft; }
    ctx.set_gpr(2, 20224u << 16u);
    ctx.fpr[0] = std::bit_cast<float>(ctx.gpr[2]);
    ctx.set_fpu_condition((ctx.fpr[0] <= ctx.fpr[1]));
    // nop
    { const bool branch_taken = ctx.fpu_condition();
    // nop
      if (branch_taken) {
          goto L_089C2F88;
      }
      goto L_089C2F78;
    }
L_089C2F78:
    ctx.set_fpr_bits(0, ctx.fpu_float_to_word(ctx.fpr[1], 1u));
    ctx.set_gpr(2, std::bit_cast<std::uint32_t>(ctx.fpr[0]));
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_089C2F9C;
      }
      goto L_089C2F88;
    }
L_089C2F88:
    ctx.fpr[0] = ctx.fpr[1] - ctx.fpr[0];
    ctx.set_fpr_bits(0, ctx.fpu_float_to_word(ctx.fpr[0], 1u));
    ctx.set_gpr(3, std::bit_cast<std::uint32_t>(ctx.fpr[0]));
    ctx.set_gpr(2, 0u + static_cast<std::uint32_t>(-32768));
    ctx.set_gpr(2, ctx.gpr[3] | ctx.gpr[2]);
    goto L_089C2F9C;
L_089C2F9C:
    ctx.set_gpr(5, ctx.gpr[2] & 255u);
    ctx.set_gpr(2, rt.memory().aot_load8(ctx.gpr[29] + static_cast<std::uint32_t>(645)));
    { const bool branch_taken = static_cast<std::int32_t>(ctx.gpr[2]) < 0;
    // nop
      if (branch_taken) {
          goto L_089C2FBC;
      }
      goto L_089C2FAC;
    }
L_089C2FAC:
    ctx.fpr[0] = std::bit_cast<float>(ctx.gpr[2]);
    ctx.fpr[0] = static_cast<float>(static_cast<std::int32_t>(ctx.fpr_bits(0)));
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_089C2FD4;
      }
      goto L_089C2FBC;
    }
L_089C2FBC:
    ctx.set_gpr(3, ctx.gpr[2] >> 1u);
    ctx.set_gpr(2, ctx.gpr[2] & 1u);
    ctx.set_gpr(3, ctx.gpr[3] | ctx.gpr[2]);
    ctx.fpr[0] = std::bit_cast<float>(ctx.gpr[3]);
    ctx.fpr[0] = static_cast<float>(static_cast<std::int32_t>(ctx.fpr_bits(0)));
    ctx.fpr[0] = ctx.fpr[0] + ctx.fpr[0];
    goto L_089C2FD4;
L_089C2FD4:
    { const float fs = ctx.fpr[0]; const float ft = ctx.fpr[23]; if ((std::isinf(fs) && ft == 0.0f) || (std::isinf(ft) && fs == 0.0f)) ctx.set_fpr_bits(1, 0x7FC00000u); else ctx.fpr[1] = fs * ft; }
    ctx.set_gpr(2, 20224u << 16u);
    ctx.fpr[0] = std::bit_cast<float>(ctx.gpr[2]);
    ctx.set_fpu_condition((ctx.fpr[0] <= ctx.fpr[1]));
    // nop
    { const bool branch_taken = ctx.fpu_condition();
    // nop
      if (branch_taken) {
          goto L_089C3000;
      }
      goto L_089C2FF0;
    }
L_089C2FF0:
    ctx.set_fpr_bits(0, ctx.fpu_float_to_word(ctx.fpr[1], 1u));
    ctx.set_gpr(6, std::bit_cast<std::uint32_t>(ctx.fpr[0]));
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_089C3014;
      }
      goto L_089C3000;
    }
L_089C3000:
    ctx.fpr[0] = ctx.fpr[1] - ctx.fpr[0];
    ctx.set_fpr_bits(0, ctx.fpu_float_to_word(ctx.fpr[0], 1u));
    ctx.set_gpr(3, std::bit_cast<std::uint32_t>(ctx.fpr[0]));
    ctx.set_gpr(2, 0u + static_cast<std::uint32_t>(-32768));
    ctx.set_gpr(6, ctx.gpr[3] | ctx.gpr[2]);
    goto L_089C3014;
L_089C3014:
    ctx.set_gpr(2, rt.memory().aot_load8(ctx.gpr[29] + static_cast<std::uint32_t>(646)));
    { const bool branch_taken = static_cast<std::int32_t>(ctx.gpr[2]) < 0;
    // nop
      if (branch_taken) {
          goto L_089C3030;
      }
      goto L_089C3020;
    }
L_089C3020:
    ctx.fpr[0] = std::bit_cast<float>(ctx.gpr[2]);
    ctx.fpr[0] = static_cast<float>(static_cast<std::int32_t>(ctx.fpr_bits(0)));
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_089C3048;
      }
      goto L_089C3030;
    }
L_089C3030:
    ctx.set_gpr(3, ctx.gpr[2] >> 1u);
    ctx.set_gpr(2, ctx.gpr[2] & 1u);
    ctx.set_gpr(3, ctx.gpr[3] | ctx.gpr[2]);
    ctx.fpr[0] = std::bit_cast<float>(ctx.gpr[3]);
    ctx.fpr[0] = static_cast<float>(static_cast<std::int32_t>(ctx.fpr_bits(0)));
    ctx.fpr[0] = ctx.fpr[0] + ctx.fpr[0];
    goto L_089C3048;
L_089C3048:
    { const float fs = ctx.fpr[0]; const float ft = ctx.fpr[23]; if ((std::isinf(fs) && ft == 0.0f) || (std::isinf(ft) && fs == 0.0f)) ctx.set_fpr_bits(1, 0x7FC00000u); else ctx.fpr[1] = fs * ft; }
    ctx.set_gpr(2, 20224u << 16u);
    ctx.fpr[0] = std::bit_cast<float>(ctx.gpr[2]);
    ctx.set_fpu_condition((ctx.fpr[0] <= ctx.fpr[1]));
    // nop
    { const bool branch_taken = ctx.fpu_condition();
    // nop
      if (branch_taken) {
          goto L_089C3074;
      }
      goto L_089C3064;
    }
L_089C3064:
    ctx.set_fpr_bits(0, ctx.fpu_float_to_word(ctx.fpr[1], 1u));
    ctx.set_gpr(7, std::bit_cast<std::uint32_t>(ctx.fpr[0]));
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_089C3088;
      }
      goto L_089C3074;
    }
L_089C3074:
    ctx.fpr[0] = ctx.fpr[1] - ctx.fpr[0];
    ctx.set_fpr_bits(0, ctx.fpu_float_to_word(ctx.fpr[0], 1u));
    ctx.set_gpr(3, std::bit_cast<std::uint32_t>(ctx.fpr[0]));
    ctx.set_gpr(2, 0u + static_cast<std::uint32_t>(-32768));
    ctx.set_gpr(7, ctx.gpr[3] | ctx.gpr[2]);
    goto L_089C3088;
L_089C3088:
    ctx.set_gpr(2, rt.memory().aot_load8(ctx.gpr[29] + static_cast<std::uint32_t>(647)));
    { const bool branch_taken = static_cast<std::int32_t>(ctx.gpr[2]) < 0;
    // nop
      if (branch_taken) {
          goto L_089C30A4;
      }
      goto L_089C3094;
    }
L_089C3094:
    ctx.fpr[0] = std::bit_cast<float>(ctx.gpr[2]);
    ctx.fpr[0] = static_cast<float>(static_cast<std::int32_t>(ctx.fpr_bits(0)));
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_089C30BC;
      }
      goto L_089C30A4;
    }
L_089C30A4:
    ctx.set_gpr(3, ctx.gpr[2] >> 1u);
    ctx.set_gpr(2, ctx.gpr[2] & 1u);
    ctx.set_gpr(3, ctx.gpr[3] | ctx.gpr[2]);
    ctx.fpr[0] = std::bit_cast<float>(ctx.gpr[3]);
    ctx.fpr[0] = static_cast<float>(static_cast<std::int32_t>(ctx.fpr_bits(0)));
    ctx.fpr[0] = ctx.fpr[0] + ctx.fpr[0];
    goto L_089C30BC;
L_089C30BC:
    { const float fs = ctx.fpr[0]; const float ft = ctx.fpr[23]; if ((std::isinf(fs) && ft == 0.0f) || (std::isinf(ft) && fs == 0.0f)) ctx.set_fpr_bits(1, 0x7FC00000u); else ctx.fpr[1] = fs * ft; }
    ctx.set_gpr(2, 20224u << 16u);
    ctx.fpr[0] = std::bit_cast<float>(ctx.gpr[2]);
    ctx.set_fpu_condition((ctx.fpr[0] <= ctx.fpr[1]));
    // nop
    { const bool branch_taken = ctx.fpu_condition();
    // nop
      if (branch_taken) {
          goto L_089C30E8;
      }
      goto L_089C30D8;
    }
L_089C30D8:
    ctx.set_fpr_bits(0, ctx.fpu_float_to_word(ctx.fpr[1], 1u));
    ctx.set_gpr(8, std::bit_cast<std::uint32_t>(ctx.fpr[0]));
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_089C30FC;
      }
      goto L_089C30E8;
    }
L_089C30E8:
    ctx.fpr[0] = ctx.fpr[1] - ctx.fpr[0];
    ctx.set_fpr_bits(0, ctx.fpu_float_to_word(ctx.fpr[0], 1u));
    ctx.set_gpr(3, std::bit_cast<std::uint32_t>(ctx.fpr[0]));
    ctx.set_gpr(2, 0u + static_cast<std::uint32_t>(-32768));
    ctx.set_gpr(8, ctx.gpr[3] | ctx.gpr[2]);
    goto L_089C30FC;
L_089C30FC:
    ctx.set_gpr(4, ctx.gpr[29] + static_cast<std::uint32_t>(648));
    ctx.set_gpr(31, 0x089C3108u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0112_entry, 112u, 41u, 0x089C4700u>(ctx, &aot_mem) && ctx.pc == 0x089C3108u) goto L_089C3108;
    return;
L_089C3108:
    ctx.set_gpr(2, rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(1476)));
    ctx.set_gpr(2, ctx.gpr[18] + ctx.gpr[2]);
    ctx.set_gpr(3, rt.memory().aot_load8(ctx.gpr[2] + static_cast<std::uint32_t>(0)));
    { const bool branch_taken = static_cast<std::int32_t>(ctx.gpr[3]) < 0;
    // nop
      if (branch_taken) {
          goto L_089C312C;
      }
      goto L_089C311C;
    }
L_089C311C:
    ctx.fpr[0] = std::bit_cast<float>(ctx.gpr[3]);
    ctx.fpr[0] = static_cast<float>(static_cast<std::int32_t>(ctx.fpr_bits(0)));
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_089C3144;
      }
      goto L_089C312C;
    }
L_089C312C:
    ctx.set_gpr(4, ctx.gpr[3] >> 1u);
    ctx.set_gpr(3, ctx.gpr[3] & 1u);
    ctx.set_gpr(4, ctx.gpr[4] | ctx.gpr[3]);
    ctx.fpr[0] = std::bit_cast<float>(ctx.gpr[4]);
    ctx.fpr[0] = static_cast<float>(static_cast<std::int32_t>(ctx.fpr_bits(0)));
    ctx.fpr[0] = ctx.fpr[0] + ctx.fpr[0];
    goto L_089C3144;
L_089C3144:
    { const float fs = ctx.fpr[0]; const float ft = ctx.fpr[26]; if ((std::isinf(fs) && ft == 0.0f) || (std::isinf(ft) && fs == 0.0f)) ctx.set_fpr_bits(1, 0x7FC00000u); else ctx.fpr[1] = fs * ft; }
    ctx.set_gpr(3, 20224u << 16u);
    ctx.fpr[0] = std::bit_cast<float>(ctx.gpr[3]);
    ctx.set_fpu_condition((ctx.fpr[0] <= ctx.fpr[1]));
    // nop
    { const bool branch_taken = ctx.fpu_condition();
    // nop
      if (branch_taken) {
          goto L_089C3170;
      }
      goto L_089C3160;
    }
L_089C3160:
    ctx.set_fpr_bits(0, ctx.fpu_float_to_word(ctx.fpr[1], 1u));
    ctx.set_gpr(3, std::bit_cast<std::uint32_t>(ctx.fpr[0]));
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_089C3184;
      }
      goto L_089C3170;
    }
L_089C3170:
    ctx.fpr[0] = ctx.fpr[1] - ctx.fpr[0];
    ctx.set_fpr_bits(0, ctx.fpu_float_to_word(ctx.fpr[0], 1u));
    ctx.set_gpr(4, std::bit_cast<std::uint32_t>(ctx.fpr[0]));
    ctx.set_gpr(3, 0u + static_cast<std::uint32_t>(-32768));
    ctx.set_gpr(3, ctx.gpr[4] | ctx.gpr[3]);
    goto L_089C3184;
L_089C3184:
    ctx.set_gpr(5, ctx.gpr[3] & 255u);
    ctx.set_gpr(3, rt.memory().aot_load8(ctx.gpr[2] + static_cast<std::uint32_t>(1)));
    { const bool branch_taken = static_cast<std::int32_t>(ctx.gpr[3]) < 0;
    // nop
      if (branch_taken) {
          goto L_089C31A4;
      }
      goto L_089C3194;
    }
L_089C3194:
    ctx.fpr[0] = std::bit_cast<float>(ctx.gpr[3]);
    ctx.fpr[0] = static_cast<float>(static_cast<std::int32_t>(ctx.fpr_bits(0)));
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_089C31BC;
      }
      goto L_089C31A4;
    }
L_089C31A4:
    ctx.set_gpr(4, ctx.gpr[3] >> 1u);
    ctx.set_gpr(3, ctx.gpr[3] & 1u);
    ctx.set_gpr(4, ctx.gpr[4] | ctx.gpr[3]);
    ctx.fpr[0] = std::bit_cast<float>(ctx.gpr[4]);
    ctx.fpr[0] = static_cast<float>(static_cast<std::int32_t>(ctx.fpr_bits(0)));
    ctx.fpr[0] = ctx.fpr[0] + ctx.fpr[0];
    goto L_089C31BC;
L_089C31BC:
    { const float fs = ctx.fpr[0]; const float ft = ctx.fpr[26]; if ((std::isinf(fs) && ft == 0.0f) || (std::isinf(ft) && fs == 0.0f)) ctx.set_fpr_bits(1, 0x7FC00000u); else ctx.fpr[1] = fs * ft; }
    ctx.set_gpr(3, 20224u << 16u);
    ctx.fpr[0] = std::bit_cast<float>(ctx.gpr[3]);
    ctx.set_fpu_condition((ctx.fpr[0] <= ctx.fpr[1]));
    // nop
    { const bool branch_taken = ctx.fpu_condition();
    // nop
      if (branch_taken) {
          goto L_089C31E8;
      }
      goto L_089C31D8;
    }
L_089C31D8:
    ctx.set_fpr_bits(0, ctx.fpu_float_to_word(ctx.fpr[1], 1u));
    ctx.set_gpr(6, std::bit_cast<std::uint32_t>(ctx.fpr[0]));
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_089C31FC;
      }
      goto L_089C31E8;
    }
L_089C31E8:
    ctx.fpr[0] = ctx.fpr[1] - ctx.fpr[0];
    ctx.set_fpr_bits(0, ctx.fpu_float_to_word(ctx.fpr[0], 1u));
    ctx.set_gpr(4, std::bit_cast<std::uint32_t>(ctx.fpr[0]));
    ctx.set_gpr(3, 0u + static_cast<std::uint32_t>(-32768));
    ctx.set_gpr(6, ctx.gpr[4] | ctx.gpr[3]);
    goto L_089C31FC;
L_089C31FC:
    ctx.set_gpr(3, rt.memory().aot_load8(ctx.gpr[2] + static_cast<std::uint32_t>(2)));
    { const bool branch_taken = static_cast<std::int32_t>(ctx.gpr[3]) < 0;
    // nop
      if (branch_taken) {
          goto L_089C3218;
      }
      goto L_089C3208;
    }
L_089C3208:
    ctx.fpr[0] = std::bit_cast<float>(ctx.gpr[3]);
    ctx.fpr[0] = static_cast<float>(static_cast<std::int32_t>(ctx.fpr_bits(0)));
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_089C3230;
      }
      goto L_089C3218;
    }
L_089C3218:
    ctx.set_gpr(4, ctx.gpr[3] >> 1u);
    ctx.set_gpr(3, ctx.gpr[3] & 1u);
    ctx.set_gpr(4, ctx.gpr[4] | ctx.gpr[3]);
    ctx.fpr[0] = std::bit_cast<float>(ctx.gpr[4]);
    ctx.fpr[0] = static_cast<float>(static_cast<std::int32_t>(ctx.fpr_bits(0)));
    ctx.fpr[0] = ctx.fpr[0] + ctx.fpr[0];
    goto L_089C3230;
L_089C3230:
    { const float fs = ctx.fpr[0]; const float ft = ctx.fpr[26]; if ((std::isinf(fs) && ft == 0.0f) || (std::isinf(ft) && fs == 0.0f)) ctx.set_fpr_bits(1, 0x7FC00000u); else ctx.fpr[1] = fs * ft; }
    ctx.set_gpr(3, 20224u << 16u);
    ctx.fpr[0] = std::bit_cast<float>(ctx.gpr[3]);
    ctx.set_fpu_condition((ctx.fpr[0] <= ctx.fpr[1]));
    // nop
    { const bool branch_taken = ctx.fpu_condition();
    // nop
      if (branch_taken) {
          goto L_089C325C;
      }
      goto L_089C324C;
    }
L_089C324C:
    ctx.set_fpr_bits(0, ctx.fpu_float_to_word(ctx.fpr[1], 1u));
    ctx.set_gpr(7, std::bit_cast<std::uint32_t>(ctx.fpr[0]));
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_089C3270;
      }
      goto L_089C325C;
    }
L_089C325C:
    ctx.fpr[0] = ctx.fpr[1] - ctx.fpr[0];
    ctx.set_fpr_bits(0, ctx.fpu_float_to_word(ctx.fpr[0], 1u));
    ctx.set_gpr(4, std::bit_cast<std::uint32_t>(ctx.fpr[0]));
    ctx.set_gpr(3, 0u + static_cast<std::uint32_t>(-32768));
    ctx.set_gpr(7, ctx.gpr[4] | ctx.gpr[3]);
    goto L_089C3270;
L_089C3270:
    ctx.set_gpr(2, rt.memory().aot_load8(ctx.gpr[2] + static_cast<std::uint32_t>(3)));
    { const bool branch_taken = static_cast<std::int32_t>(ctx.gpr[2]) < 0;
    // nop
      if (branch_taken) {
          goto L_089C328C;
      }
      goto L_089C327C;
    }
L_089C327C:
    ctx.fpr[0] = std::bit_cast<float>(ctx.gpr[2]);
    ctx.fpr[0] = static_cast<float>(static_cast<std::int32_t>(ctx.fpr_bits(0)));
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_089C32A4;
      }
      goto L_089C328C;
    }
L_089C328C:
    ctx.set_gpr(3, ctx.gpr[2] >> 1u);
    ctx.set_gpr(2, ctx.gpr[2] & 1u);
    ctx.set_gpr(3, ctx.gpr[3] | ctx.gpr[2]);
    ctx.fpr[0] = std::bit_cast<float>(ctx.gpr[3]);
    ctx.fpr[0] = static_cast<float>(static_cast<std::int32_t>(ctx.fpr_bits(0)));
    ctx.fpr[0] = ctx.fpr[0] + ctx.fpr[0];
    goto L_089C32A4;
L_089C32A4:
    { const float fs = ctx.fpr[0]; const float ft = ctx.fpr[26]; if ((std::isinf(fs) && ft == 0.0f) || (std::isinf(ft) && fs == 0.0f)) ctx.set_fpr_bits(1, 0x7FC00000u); else ctx.fpr[1] = fs * ft; }
    ctx.set_gpr(2, 20224u << 16u);
    ctx.fpr[0] = std::bit_cast<float>(ctx.gpr[2]);
    ctx.set_fpu_condition((ctx.fpr[0] <= ctx.fpr[1]));
    // nop
    { const bool branch_taken = ctx.fpu_condition();
    // nop
      if (branch_taken) {
          goto L_089C32D0;
      }
      goto L_089C32C0;
    }
L_089C32C0:
    ctx.set_fpr_bits(0, ctx.fpu_float_to_word(ctx.fpr[1], 1u));
    ctx.set_gpr(8, std::bit_cast<std::uint32_t>(ctx.fpr[0]));
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_089C32E4;
      }
      goto L_089C32D0;
    }
L_089C32D0:
    ctx.fpr[0] = ctx.fpr[1] - ctx.fpr[0];
    ctx.set_fpr_bits(0, ctx.fpu_float_to_word(ctx.fpr[0], 1u));
    ctx.set_gpr(3, std::bit_cast<std::uint32_t>(ctx.fpr[0]));
    ctx.set_gpr(2, 0u + static_cast<std::uint32_t>(-32768));
    ctx.set_gpr(8, ctx.gpr[3] | ctx.gpr[2]);
    goto L_089C32E4;
L_089C32E4:
    ctx.set_gpr(4, ctx.gpr[29] + static_cast<std::uint32_t>(652));
    ctx.set_gpr(31, 0x089C32F0u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0112_entry, 112u, 41u, 0x089C4700u>(ctx, &aot_mem) && ctx.pc == 0x089C32F0u) goto L_089C32F0;
    return;
L_089C32F0:
    ctx.set_gpr(2, rt.memory().aot_load8(ctx.gpr[29] + static_cast<std::uint32_t>(652)));
    { const bool branch_taken = static_cast<std::int32_t>(ctx.gpr[2]) < 0;
    // nop
      if (branch_taken) {
          goto L_089C330C;
      }
      goto L_089C32FC;
    }
L_089C32FC:
    ctx.fpr[0] = std::bit_cast<float>(ctx.gpr[2]);
    ctx.fpr[0] = static_cast<float>(static_cast<std::int32_t>(ctx.fpr_bits(0)));
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_089C3324;
      }
      goto L_089C330C;
    }
L_089C330C:
    ctx.set_gpr(3, ctx.gpr[2] >> 1u);
    ctx.set_gpr(2, ctx.gpr[2] & 1u);
    ctx.set_gpr(3, ctx.gpr[3] | ctx.gpr[2]);
    ctx.fpr[0] = std::bit_cast<float>(ctx.gpr[3]);
    ctx.fpr[0] = static_cast<float>(static_cast<std::int32_t>(ctx.fpr_bits(0)));
    ctx.fpr[0] = ctx.fpr[0] + ctx.fpr[0];
    goto L_089C3324;
L_089C3324:
    { const float fs = ctx.fpr[0]; const float ft = ctx.fpr[23]; if ((std::isinf(fs) && ft == 0.0f) || (std::isinf(ft) && fs == 0.0f)) ctx.set_fpr_bits(1, 0x7FC00000u); else ctx.fpr[1] = fs * ft; }
    ctx.set_gpr(2, 20224u << 16u);
    ctx.fpr[0] = std::bit_cast<float>(ctx.gpr[2]);
    ctx.set_fpu_condition((ctx.fpr[0] <= ctx.fpr[1]));
    // nop
    { const bool branch_taken = ctx.fpu_condition();
    // nop
      if (branch_taken) {
          goto L_089C3350;
      }
      goto L_089C3340;
    }
L_089C3340:
    ctx.set_fpr_bits(0, ctx.fpu_float_to_word(ctx.fpr[1], 1u));
    ctx.set_gpr(2, std::bit_cast<std::uint32_t>(ctx.fpr[0]));
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_089C3364;
      }
      goto L_089C3350;
    }
L_089C3350:
    ctx.fpr[0] = ctx.fpr[1] - ctx.fpr[0];
    ctx.set_fpr_bits(0, ctx.fpu_float_to_word(ctx.fpr[0], 1u));
    ctx.set_gpr(3, std::bit_cast<std::uint32_t>(ctx.fpr[0]));
    ctx.set_gpr(2, 0u + static_cast<std::uint32_t>(-32768));
    ctx.set_gpr(2, ctx.gpr[3] | ctx.gpr[2]);
    goto L_089C3364;
L_089C3364:
    ctx.set_gpr(5, ctx.gpr[2] & 255u);
    ctx.set_gpr(2, rt.memory().aot_load8(ctx.gpr[29] + static_cast<std::uint32_t>(653)));
    { const bool branch_taken = static_cast<std::int32_t>(ctx.gpr[2]) < 0;
    // nop
      if (branch_taken) {
          goto L_089C3384;
      }
      goto L_089C3374;
    }
L_089C3374:
    ctx.fpr[0] = std::bit_cast<float>(ctx.gpr[2]);
    ctx.fpr[0] = static_cast<float>(static_cast<std::int32_t>(ctx.fpr_bits(0)));
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_089C339C;
      }
      goto L_089C3384;
    }
L_089C3384:
    ctx.set_gpr(3, ctx.gpr[2] >> 1u);
    ctx.set_gpr(2, ctx.gpr[2] & 1u);
    ctx.set_gpr(3, ctx.gpr[3] | ctx.gpr[2]);
    ctx.fpr[0] = std::bit_cast<float>(ctx.gpr[3]);
    ctx.fpr[0] = static_cast<float>(static_cast<std::int32_t>(ctx.fpr_bits(0)));
    ctx.fpr[0] = ctx.fpr[0] + ctx.fpr[0];
    goto L_089C339C;
L_089C339C:
    { const float fs = ctx.fpr[0]; const float ft = ctx.fpr[23]; if ((std::isinf(fs) && ft == 0.0f) || (std::isinf(ft) && fs == 0.0f)) ctx.set_fpr_bits(1, 0x7FC00000u); else ctx.fpr[1] = fs * ft; }
    ctx.set_gpr(2, 20224u << 16u);
    ctx.fpr[0] = std::bit_cast<float>(ctx.gpr[2]);
    ctx.set_fpu_condition((ctx.fpr[0] <= ctx.fpr[1]));
    // nop
    { const bool branch_taken = ctx.fpu_condition();
    // nop
      if (branch_taken) {
          goto L_089C33C8;
      }
      goto L_089C33B8;
    }
L_089C33B8:
    ctx.set_fpr_bits(0, ctx.fpu_float_to_word(ctx.fpr[1], 1u));
    ctx.set_gpr(6, std::bit_cast<std::uint32_t>(ctx.fpr[0]));
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_089C33DC;
      }
      goto L_089C33C8;
    }
L_089C33C8:
    ctx.fpr[0] = ctx.fpr[1] - ctx.fpr[0];
    ctx.set_fpr_bits(0, ctx.fpu_float_to_word(ctx.fpr[0], 1u));
    ctx.set_gpr(3, std::bit_cast<std::uint32_t>(ctx.fpr[0]));
    ctx.set_gpr(2, 0u + static_cast<std::uint32_t>(-32768));
    ctx.set_gpr(6, ctx.gpr[3] | ctx.gpr[2]);
    goto L_089C33DC;
L_089C33DC:
    ctx.set_gpr(2, rt.memory().aot_load8(ctx.gpr[29] + static_cast<std::uint32_t>(654)));
    { const bool branch_taken = static_cast<std::int32_t>(ctx.gpr[2]) < 0;
    // nop
      if (branch_taken) {
          goto L_089C33F8;
      }
      goto L_089C33E8;
    }
L_089C33E8:
    ctx.fpr[0] = std::bit_cast<float>(ctx.gpr[2]);
    ctx.fpr[0] = static_cast<float>(static_cast<std::int32_t>(ctx.fpr_bits(0)));
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_089C3410;
      }
      goto L_089C33F8;
    }
L_089C33F8:
    ctx.set_gpr(3, ctx.gpr[2] >> 1u);
    ctx.set_gpr(2, ctx.gpr[2] & 1u);
    ctx.set_gpr(3, ctx.gpr[3] | ctx.gpr[2]);
    ctx.fpr[0] = std::bit_cast<float>(ctx.gpr[3]);
    ctx.fpr[0] = static_cast<float>(static_cast<std::int32_t>(ctx.fpr_bits(0)));
    ctx.fpr[0] = ctx.fpr[0] + ctx.fpr[0];
    goto L_089C3410;
L_089C3410:
    { const float fs = ctx.fpr[0]; const float ft = ctx.fpr[23]; if ((std::isinf(fs) && ft == 0.0f) || (std::isinf(ft) && fs == 0.0f)) ctx.set_fpr_bits(1, 0x7FC00000u); else ctx.fpr[1] = fs * ft; }
    ctx.set_gpr(2, 20224u << 16u);
    ctx.fpr[0] = std::bit_cast<float>(ctx.gpr[2]);
    ctx.set_fpu_condition((ctx.fpr[0] <= ctx.fpr[1]));
    // nop
    { const bool branch_taken = ctx.fpu_condition();
    // nop
      if (branch_taken) {
          goto L_089C343C;
      }
      goto L_089C342C;
    }
L_089C342C:
    ctx.set_fpr_bits(0, ctx.fpu_float_to_word(ctx.fpr[1], 1u));
    ctx.set_gpr(7, std::bit_cast<std::uint32_t>(ctx.fpr[0]));
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_089C3450;
      }
      goto L_089C343C;
    }
L_089C343C:
    ctx.fpr[0] = ctx.fpr[1] - ctx.fpr[0];
    ctx.set_fpr_bits(0, ctx.fpu_float_to_word(ctx.fpr[0], 1u));
    ctx.set_gpr(3, std::bit_cast<std::uint32_t>(ctx.fpr[0]));
    ctx.set_gpr(2, 0u + static_cast<std::uint32_t>(-32768));
    ctx.set_gpr(7, ctx.gpr[3] | ctx.gpr[2]);
    goto L_089C3450;
L_089C3450:
    ctx.set_gpr(2, rt.memory().aot_load8(ctx.gpr[29] + static_cast<std::uint32_t>(655)));
    { const bool branch_taken = static_cast<std::int32_t>(ctx.gpr[2]) < 0;
    // nop
      if (branch_taken) {
          goto L_089C346C;
      }
      goto L_089C345C;
    }
L_089C345C:
    ctx.fpr[0] = std::bit_cast<float>(ctx.gpr[2]);
    ctx.fpr[0] = static_cast<float>(static_cast<std::int32_t>(ctx.fpr_bits(0)));
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_089C3484;
      }
      goto L_089C346C;
    }
L_089C346C:
    ctx.set_gpr(3, ctx.gpr[2] >> 1u);
    ctx.set_gpr(2, ctx.gpr[2] & 1u);
    ctx.set_gpr(3, ctx.gpr[3] | ctx.gpr[2]);
    ctx.fpr[0] = std::bit_cast<float>(ctx.gpr[3]);
    ctx.fpr[0] = static_cast<float>(static_cast<std::int32_t>(ctx.fpr_bits(0)));
    ctx.fpr[0] = ctx.fpr[0] + ctx.fpr[0];
    goto L_089C3484;
L_089C3484:
    { const float fs = ctx.fpr[0]; const float ft = ctx.fpr[23]; if ((std::isinf(fs) && ft == 0.0f) || (std::isinf(ft) && fs == 0.0f)) ctx.set_fpr_bits(1, 0x7FC00000u); else ctx.fpr[1] = fs * ft; }
    ctx.set_gpr(2, 20224u << 16u);
    ctx.fpr[0] = std::bit_cast<float>(ctx.gpr[2]);
    ctx.set_fpu_condition((ctx.fpr[0] <= ctx.fpr[1]));
    // nop
    { const bool branch_taken = ctx.fpu_condition();
    // nop
      if (branch_taken) {
          goto L_089C34B0;
      }
      goto L_089C34A0;
    }
L_089C34A0:
    ctx.set_fpr_bits(0, ctx.fpu_float_to_word(ctx.fpr[1], 1u));
    ctx.set_gpr(8, std::bit_cast<std::uint32_t>(ctx.fpr[0]));
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_089C34C4;
      }
      goto L_089C34B0;
    }
L_089C34B0:
    ctx.fpr[0] = ctx.fpr[1] - ctx.fpr[0];
    ctx.set_fpr_bits(0, ctx.fpu_float_to_word(ctx.fpr[0], 1u));
    ctx.set_gpr(3, std::bit_cast<std::uint32_t>(ctx.fpr[0]));
    ctx.set_gpr(2, 0u + static_cast<std::uint32_t>(-32768));
    ctx.set_gpr(8, ctx.gpr[3] | ctx.gpr[2]);
    goto L_089C34C4;
L_089C34C4:
    ctx.set_gpr(4, ctx.gpr[29] + static_cast<std::uint32_t>(656));
    ctx.set_gpr(31, 0x089C34D0u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0112_entry, 112u, 41u, 0x089C4700u>(ctx, &aot_mem) && ctx.pc == 0x089C34D0u) goto L_089C34D0;
    return;
L_089C34D0:
    ctx.set_gpr(2, rt.memory().aot_load8(ctx.gpr[18] + static_cast<std::uint32_t>(0)));
    { const bool branch_taken = static_cast<std::int32_t>(ctx.gpr[2]) < 0;
    // nop
      if (branch_taken) {
          goto L_089C34EC;
      }
      goto L_089C34DC;
    }
L_089C34DC:
    ctx.fpr[0] = std::bit_cast<float>(ctx.gpr[2]);
    ctx.fpr[0] = static_cast<float>(static_cast<std::int32_t>(ctx.fpr_bits(0)));
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_089C3504;
      }
      goto L_089C34EC;
    }
L_089C34EC:
    ctx.set_gpr(3, ctx.gpr[2] >> 1u);
    ctx.set_gpr(2, ctx.gpr[2] & 1u);
    ctx.set_gpr(3, ctx.gpr[3] | ctx.gpr[2]);
    ctx.fpr[0] = std::bit_cast<float>(ctx.gpr[3]);
    ctx.fpr[0] = static_cast<float>(static_cast<std::int32_t>(ctx.fpr_bits(0)));
    ctx.fpr[0] = ctx.fpr[0] + ctx.fpr[0];
    goto L_089C3504;
L_089C3504:
    { const float fs = ctx.fpr[0]; const float ft = ctx.fpr[27]; if ((std::isinf(fs) && ft == 0.0f) || (std::isinf(ft) && fs == 0.0f)) ctx.set_fpr_bits(1, 0x7FC00000u); else ctx.fpr[1] = fs * ft; }
    ctx.set_gpr(2, 20224u << 16u);
    ctx.fpr[0] = std::bit_cast<float>(ctx.gpr[2]);
    ctx.set_fpu_condition((ctx.fpr[0] <= ctx.fpr[1]));
    // nop
    { const bool branch_taken = ctx.fpu_condition();
    // nop
      if (branch_taken) {
          goto L_089C3530;
      }
      goto L_089C3520;
    }
L_089C3520:
    ctx.set_fpr_bits(0, ctx.fpu_float_to_word(ctx.fpr[1], 1u));
    ctx.set_gpr(2, std::bit_cast<std::uint32_t>(ctx.fpr[0]));
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_089C3544;
      }
      goto L_089C3530;
    }
L_089C3530:
    ctx.fpr[0] = ctx.fpr[1] - ctx.fpr[0];
    ctx.set_fpr_bits(0, ctx.fpu_float_to_word(ctx.fpr[0], 1u));
    ctx.set_gpr(3, std::bit_cast<std::uint32_t>(ctx.fpr[0]));
    ctx.set_gpr(2, 0u + static_cast<std::uint32_t>(-32768));
    ctx.set_gpr(2, ctx.gpr[3] | ctx.gpr[2]);
    goto L_089C3544;
L_089C3544:
    ctx.set_gpr(5, ctx.gpr[2] & 255u);
    ctx.set_gpr(2, rt.memory().aot_load8(ctx.gpr[18] + static_cast<std::uint32_t>(1)));
    { const bool branch_taken = static_cast<std::int32_t>(ctx.gpr[2]) < 0;
    // nop
      if (branch_taken) {
          goto L_089C3564;
      }
      goto L_089C3554;
    }
L_089C3554:
    ctx.fpr[0] = std::bit_cast<float>(ctx.gpr[2]);
    ctx.fpr[0] = static_cast<float>(static_cast<std::int32_t>(ctx.fpr_bits(0)));
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_089C357C;
      }
      goto L_089C3564;
    }
L_089C3564:
    ctx.set_gpr(3, ctx.gpr[2] >> 1u);
    ctx.set_gpr(2, ctx.gpr[2] & 1u);
    ctx.set_gpr(3, ctx.gpr[3] | ctx.gpr[2]);
    ctx.fpr[0] = std::bit_cast<float>(ctx.gpr[3]);
    ctx.fpr[0] = static_cast<float>(static_cast<std::int32_t>(ctx.fpr_bits(0)));
    ctx.fpr[0] = ctx.fpr[0] + ctx.fpr[0];
    goto L_089C357C;
L_089C357C:
    { const float fs = ctx.fpr[0]; const float ft = ctx.fpr[27]; if ((std::isinf(fs) && ft == 0.0f) || (std::isinf(ft) && fs == 0.0f)) ctx.set_fpr_bits(1, 0x7FC00000u); else ctx.fpr[1] = fs * ft; }
    ctx.set_gpr(2, 20224u << 16u);
    ctx.fpr[0] = std::bit_cast<float>(ctx.gpr[2]);
    ctx.set_fpu_condition((ctx.fpr[0] <= ctx.fpr[1]));
    // nop
    { const bool branch_taken = ctx.fpu_condition();
    // nop
      if (branch_taken) {
          goto L_089C35A8;
      }
      goto L_089C3598;
    }
L_089C3598:
    ctx.set_fpr_bits(0, ctx.fpu_float_to_word(ctx.fpr[1], 1u));
    ctx.set_gpr(6, std::bit_cast<std::uint32_t>(ctx.fpr[0]));
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_089C35BC;
      }
      goto L_089C35A8;
    }
L_089C35A8:
    ctx.fpr[0] = ctx.fpr[1] - ctx.fpr[0];
    ctx.set_fpr_bits(0, ctx.fpu_float_to_word(ctx.fpr[0], 1u));
    ctx.set_gpr(3, std::bit_cast<std::uint32_t>(ctx.fpr[0]));
    ctx.set_gpr(2, 0u + static_cast<std::uint32_t>(-32768));
    ctx.set_gpr(6, ctx.gpr[3] | ctx.gpr[2]);
    goto L_089C35BC;
L_089C35BC:
    ctx.set_gpr(2, rt.memory().aot_load8(ctx.gpr[18] + static_cast<std::uint32_t>(2)));
    { const bool branch_taken = static_cast<std::int32_t>(ctx.gpr[2]) < 0;
    // nop
      if (branch_taken) {
          goto L_089C35D8;
      }
      goto L_089C35C8;
    }
L_089C35C8:
    ctx.fpr[0] = std::bit_cast<float>(ctx.gpr[2]);
    ctx.fpr[0] = static_cast<float>(static_cast<std::int32_t>(ctx.fpr_bits(0)));
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_089C35F0;
      }
      goto L_089C35D8;
    }
L_089C35D8:
    ctx.set_gpr(3, ctx.gpr[2] >> 1u);
    ctx.set_gpr(2, ctx.gpr[2] & 1u);
    ctx.set_gpr(3, ctx.gpr[3] | ctx.gpr[2]);
    ctx.fpr[0] = std::bit_cast<float>(ctx.gpr[3]);
    ctx.fpr[0] = static_cast<float>(static_cast<std::int32_t>(ctx.fpr_bits(0)));
    ctx.fpr[0] = ctx.fpr[0] + ctx.fpr[0];
    goto L_089C35F0;
L_089C35F0:
    { const float fs = ctx.fpr[0]; const float ft = ctx.fpr[27]; if ((std::isinf(fs) && ft == 0.0f) || (std::isinf(ft) && fs == 0.0f)) ctx.set_fpr_bits(1, 0x7FC00000u); else ctx.fpr[1] = fs * ft; }
    ctx.set_gpr(2, 20224u << 16u);
    ctx.fpr[0] = std::bit_cast<float>(ctx.gpr[2]);
    ctx.set_fpu_condition((ctx.fpr[0] <= ctx.fpr[1]));
    // nop
    { const bool branch_taken = ctx.fpu_condition();
    // nop
      if (branch_taken) {
          goto L_089C361C;
      }
      goto L_089C360C;
    }
L_089C360C:
    ctx.set_fpr_bits(0, ctx.fpu_float_to_word(ctx.fpr[1], 1u));
    ctx.set_gpr(7, std::bit_cast<std::uint32_t>(ctx.fpr[0]));
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_089C3630;
      }
      goto L_089C361C;
    }
L_089C361C:
    ctx.fpr[0] = ctx.fpr[1] - ctx.fpr[0];
    ctx.set_fpr_bits(0, ctx.fpu_float_to_word(ctx.fpr[0], 1u));
    ctx.set_gpr(3, std::bit_cast<std::uint32_t>(ctx.fpr[0]));
    ctx.set_gpr(2, 0u + static_cast<std::uint32_t>(-32768));
    ctx.set_gpr(7, ctx.gpr[3] | ctx.gpr[2]);
    goto L_089C3630;
L_089C3630:
    ctx.set_gpr(2, rt.memory().aot_load8(ctx.gpr[18] + static_cast<std::uint32_t>(3)));
    { const bool branch_taken = static_cast<std::int32_t>(ctx.gpr[2]) < 0;
    // nop
      if (branch_taken) {
          goto L_089C364C;
      }
      goto L_089C363C;
    }
L_089C363C:
    ctx.fpr[0] = std::bit_cast<float>(ctx.gpr[2]);
    ctx.fpr[0] = static_cast<float>(static_cast<std::int32_t>(ctx.fpr_bits(0)));
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_089C3664;
      }
      goto L_089C364C;
    }
L_089C364C:
    ctx.set_gpr(3, ctx.gpr[2] >> 1u);
    ctx.set_gpr(2, ctx.gpr[2] & 1u);
    ctx.set_gpr(3, ctx.gpr[3] | ctx.gpr[2]);
    ctx.fpr[0] = std::bit_cast<float>(ctx.gpr[3]);
    ctx.fpr[0] = static_cast<float>(static_cast<std::int32_t>(ctx.fpr_bits(0)));
    ctx.fpr[0] = ctx.fpr[0] + ctx.fpr[0];
    goto L_089C3664;
L_089C3664:
    { const float fs = ctx.fpr[0]; const float ft = ctx.fpr[27]; if ((std::isinf(fs) && ft == 0.0f) || (std::isinf(ft) && fs == 0.0f)) ctx.set_fpr_bits(1, 0x7FC00000u); else ctx.fpr[1] = fs * ft; }
    ctx.set_gpr(2, 20224u << 16u);
    ctx.fpr[0] = std::bit_cast<float>(ctx.gpr[2]);
    ctx.set_fpu_condition((ctx.fpr[0] <= ctx.fpr[1]));
    // nop
    { const bool branch_taken = ctx.fpu_condition();
    // nop
      if (branch_taken) {
          goto L_089C3690;
      }
      goto L_089C3680;
    }
L_089C3680:
    ctx.set_fpr_bits(0, ctx.fpu_float_to_word(ctx.fpr[1], 1u));
    ctx.set_gpr(8, std::bit_cast<std::uint32_t>(ctx.fpr[0]));
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_089C36A4;
      }
      goto L_089C3690;
    }
L_089C3690:
    ctx.fpr[0] = ctx.fpr[1] - ctx.fpr[0];
    ctx.set_fpr_bits(0, ctx.fpu_float_to_word(ctx.fpr[0], 1u));
    ctx.set_gpr(3, std::bit_cast<std::uint32_t>(ctx.fpr[0]));
    ctx.set_gpr(2, 0u + static_cast<std::uint32_t>(-32768));
    ctx.set_gpr(8, ctx.gpr[3] | ctx.gpr[2]);
    goto L_089C36A4;
L_089C36A4:
    ctx.set_gpr(4, ctx.gpr[29] + static_cast<std::uint32_t>(660));
    ctx.set_gpr(31, 0x089C36B0u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0112_entry, 112u, 41u, 0x089C4700u>(ctx, &aot_mem) && ctx.pc == 0x089C36B0u) goto L_089C36B0;
    return;
L_089C36B0:
    ctx.set_gpr(2, rt.memory().aot_load8(ctx.gpr[29] + static_cast<std::uint32_t>(660)));
    { const bool branch_taken = static_cast<std::int32_t>(ctx.gpr[2]) < 0;
    // nop
      if (branch_taken) {
          goto L_089C36CC;
      }
      goto L_089C36BC;
    }
L_089C36BC:
    ctx.fpr[0] = std::bit_cast<float>(ctx.gpr[2]);
    ctx.fpr[0] = static_cast<float>(static_cast<std::int32_t>(ctx.fpr_bits(0)));
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_089C36E4;
      }
      goto L_089C36CC;
    }
L_089C36CC:
    ctx.set_gpr(3, ctx.gpr[2] >> 1u);
    ctx.set_gpr(2, ctx.gpr[2] & 1u);
    ctx.set_gpr(3, ctx.gpr[3] | ctx.gpr[2]);
    ctx.fpr[0] = std::bit_cast<float>(ctx.gpr[3]);
    ctx.fpr[0] = static_cast<float>(static_cast<std::int32_t>(ctx.fpr_bits(0)));
    ctx.fpr[0] = ctx.fpr[0] + ctx.fpr[0];
    goto L_089C36E4;
L_089C36E4:
    { const float fs = ctx.fpr[0]; const float ft = ctx.fpr[23]; if ((std::isinf(fs) && ft == 0.0f) || (std::isinf(ft) && fs == 0.0f)) ctx.set_fpr_bits(1, 0x7FC00000u); else ctx.fpr[1] = fs * ft; }
    ctx.set_gpr(2, 20224u << 16u);
    ctx.fpr[0] = std::bit_cast<float>(ctx.gpr[2]);
    ctx.set_fpu_condition((ctx.fpr[0] <= ctx.fpr[1]));
    // nop
    { const bool branch_taken = ctx.fpu_condition();
    // nop
      if (branch_taken) {
          goto L_089C3710;
      }
      goto L_089C3700;
    }
L_089C3700:
    ctx.set_fpr_bits(0, ctx.fpu_float_to_word(ctx.fpr[1], 1u));
    ctx.set_gpr(2, std::bit_cast<std::uint32_t>(ctx.fpr[0]));
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_089C3724;
      }
      goto L_089C3710;
    }
L_089C3710:
    ctx.fpr[0] = ctx.fpr[1] - ctx.fpr[0];
    ctx.set_fpr_bits(0, ctx.fpu_float_to_word(ctx.fpr[0], 1u));
    ctx.set_gpr(3, std::bit_cast<std::uint32_t>(ctx.fpr[0]));
    ctx.set_gpr(2, 0u + static_cast<std::uint32_t>(-32768));
    ctx.set_gpr(2, ctx.gpr[3] | ctx.gpr[2]);
    goto L_089C3724;
L_089C3724:
    ctx.set_gpr(5, ctx.gpr[2] & 255u);
    ctx.set_gpr(2, rt.memory().aot_load8(ctx.gpr[29] + static_cast<std::uint32_t>(661)));
    { const bool branch_taken = static_cast<std::int32_t>(ctx.gpr[2]) < 0;
    // nop
      if (branch_taken) {
          goto L_089C3744;
      }
      goto L_089C3734;
    }
L_089C3734:
    ctx.fpr[0] = std::bit_cast<float>(ctx.gpr[2]);
    ctx.fpr[0] = static_cast<float>(static_cast<std::int32_t>(ctx.fpr_bits(0)));
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_089C375C;
      }
      goto L_089C3744;
    }
L_089C3744:
    ctx.set_gpr(3, ctx.gpr[2] >> 1u);
    ctx.set_gpr(2, ctx.gpr[2] & 1u);
    ctx.set_gpr(3, ctx.gpr[3] | ctx.gpr[2]);
    ctx.fpr[0] = std::bit_cast<float>(ctx.gpr[3]);
    ctx.fpr[0] = static_cast<float>(static_cast<std::int32_t>(ctx.fpr_bits(0)));
    ctx.fpr[0] = ctx.fpr[0] + ctx.fpr[0];
    goto L_089C375C;
L_089C375C:
    { const float fs = ctx.fpr[0]; const float ft = ctx.fpr[23]; if ((std::isinf(fs) && ft == 0.0f) || (std::isinf(ft) && fs == 0.0f)) ctx.set_fpr_bits(1, 0x7FC00000u); else ctx.fpr[1] = fs * ft; }
    ctx.set_gpr(2, 20224u << 16u);
    ctx.fpr[0] = std::bit_cast<float>(ctx.gpr[2]);
    ctx.set_fpu_condition((ctx.fpr[0] <= ctx.fpr[1]));
    // nop
    { const bool branch_taken = ctx.fpu_condition();
    // nop
      if (branch_taken) {
          goto L_089C3788;
      }
      goto L_089C3778;
    }
L_089C3778:
    ctx.set_fpr_bits(0, ctx.fpu_float_to_word(ctx.fpr[1], 1u));
    ctx.set_gpr(6, std::bit_cast<std::uint32_t>(ctx.fpr[0]));
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_089C379C;
      }
      goto L_089C3788;
    }
L_089C3788:
    ctx.fpr[0] = ctx.fpr[1] - ctx.fpr[0];
    ctx.set_fpr_bits(0, ctx.fpu_float_to_word(ctx.fpr[0], 1u));
    ctx.set_gpr(3, std::bit_cast<std::uint32_t>(ctx.fpr[0]));
    ctx.set_gpr(2, 0u + static_cast<std::uint32_t>(-32768));
    ctx.set_gpr(6, ctx.gpr[3] | ctx.gpr[2]);
    goto L_089C379C;
L_089C379C:
    ctx.set_gpr(2, rt.memory().aot_load8(ctx.gpr[29] + static_cast<std::uint32_t>(662)));
    { const bool branch_taken = static_cast<std::int32_t>(ctx.gpr[2]) < 0;
    // nop
      if (branch_taken) {
          goto L_089C37B8;
      }
      goto L_089C37A8;
    }
L_089C37A8:
    ctx.fpr[0] = std::bit_cast<float>(ctx.gpr[2]);
    ctx.fpr[0] = static_cast<float>(static_cast<std::int32_t>(ctx.fpr_bits(0)));
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_089C37D0;
      }
      goto L_089C37B8;
    }
L_089C37B8:
    ctx.set_gpr(3, ctx.gpr[2] >> 1u);
    ctx.set_gpr(2, ctx.gpr[2] & 1u);
    ctx.set_gpr(3, ctx.gpr[3] | ctx.gpr[2]);
    ctx.fpr[0] = std::bit_cast<float>(ctx.gpr[3]);
    ctx.fpr[0] = static_cast<float>(static_cast<std::int32_t>(ctx.fpr_bits(0)));
    ctx.fpr[0] = ctx.fpr[0] + ctx.fpr[0];
    goto L_089C37D0;
L_089C37D0:
    { const float fs = ctx.fpr[0]; const float ft = ctx.fpr[23]; if ((std::isinf(fs) && ft == 0.0f) || (std::isinf(ft) && fs == 0.0f)) ctx.set_fpr_bits(1, 0x7FC00000u); else ctx.fpr[1] = fs * ft; }
    ctx.set_gpr(2, 20224u << 16u);
    ctx.fpr[0] = std::bit_cast<float>(ctx.gpr[2]);
    ctx.set_fpu_condition((ctx.fpr[0] <= ctx.fpr[1]));
    // nop
    { const bool branch_taken = ctx.fpu_condition();
    // nop
      if (branch_taken) {
          goto L_089C37FC;
      }
      goto L_089C37EC;
    }
L_089C37EC:
    ctx.set_fpr_bits(0, ctx.fpu_float_to_word(ctx.fpr[1], 1u));
    ctx.set_gpr(7, std::bit_cast<std::uint32_t>(ctx.fpr[0]));
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_089C3810;
      }
      goto L_089C37FC;
    }
L_089C37FC:
    ctx.fpr[0] = ctx.fpr[1] - ctx.fpr[0];
    ctx.set_fpr_bits(0, ctx.fpu_float_to_word(ctx.fpr[0], 1u));
    ctx.set_gpr(3, std::bit_cast<std::uint32_t>(ctx.fpr[0]));
    ctx.set_gpr(2, 0u + static_cast<std::uint32_t>(-32768));
    ctx.set_gpr(7, ctx.gpr[3] | ctx.gpr[2]);
    goto L_089C3810;
L_089C3810:
    ctx.set_gpr(2, rt.memory().aot_load8(ctx.gpr[29] + static_cast<std::uint32_t>(663)));
    { const bool branch_taken = static_cast<std::int32_t>(ctx.gpr[2]) < 0;
    // nop
      if (branch_taken) {
          goto L_089C382C;
      }
      goto L_089C381C;
    }
L_089C381C:
    ctx.fpr[0] = std::bit_cast<float>(ctx.gpr[2]);
    ctx.fpr[0] = static_cast<float>(static_cast<std::int32_t>(ctx.fpr_bits(0)));
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_089C3844;
      }
      goto L_089C382C;
    }
L_089C382C:
    ctx.set_gpr(3, ctx.gpr[2] >> 1u);
    ctx.set_gpr(2, ctx.gpr[2] & 1u);
    ctx.set_gpr(3, ctx.gpr[3] | ctx.gpr[2]);
    ctx.fpr[0] = std::bit_cast<float>(ctx.gpr[3]);
    ctx.fpr[0] = static_cast<float>(static_cast<std::int32_t>(ctx.fpr_bits(0)));
    ctx.fpr[0] = ctx.fpr[0] + ctx.fpr[0];
    goto L_089C3844;
L_089C3844:
    { const float fs = ctx.fpr[0]; const float ft = ctx.fpr[23]; if ((std::isinf(fs) && ft == 0.0f) || (std::isinf(ft) && fs == 0.0f)) ctx.set_fpr_bits(1, 0x7FC00000u); else ctx.fpr[1] = fs * ft; }
    ctx.set_gpr(2, 20224u << 16u);
    ctx.fpr[0] = std::bit_cast<float>(ctx.gpr[2]);
    ctx.set_fpu_condition((ctx.fpr[0] <= ctx.fpr[1]));
    // nop
    { const bool branch_taken = ctx.fpu_condition();
    // nop
      if (branch_taken) {
          goto L_089C3870;
      }
      goto L_089C3860;
    }
L_089C3860:
    ctx.set_fpr_bits(0, ctx.fpu_float_to_word(ctx.fpr[1], 1u));
    ctx.set_gpr(8, std::bit_cast<std::uint32_t>(ctx.fpr[0]));
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_089C3884;
      }
      goto L_089C3870;
    }
L_089C3870:
    ctx.fpr[0] = ctx.fpr[1] - ctx.fpr[0];
    ctx.set_fpr_bits(0, ctx.fpu_float_to_word(ctx.fpr[0], 1u));
    ctx.set_gpr(3, std::bit_cast<std::uint32_t>(ctx.fpr[0]));
    ctx.set_gpr(2, 0u + static_cast<std::uint32_t>(-32768));
    ctx.set_gpr(8, ctx.gpr[3] | ctx.gpr[2]);
    goto L_089C3884;
L_089C3884:
    ctx.set_gpr(4, ctx.gpr[29] + static_cast<std::uint32_t>(664));
    ctx.set_gpr(31, 0x089C3890u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0112_entry, 112u, 41u, 0x089C4700u>(ctx, &aot_mem) && ctx.pc == 0x089C3890u) goto L_089C3890;
    return;
L_089C3890:
    ctx.set_gpr(3, rt.memory().aot_load8(ctx.gpr[29] + static_cast<std::uint32_t>(664)));
    ctx.set_gpr(2, rt.memory().aot_load8(ctx.gpr[29] + static_cast<std::uint32_t>(656)));
    ctx.set_gpr(2, ctx.gpr[3] + ctx.gpr[2]);
    ctx.set_gpr(5, ctx.gpr[2] & 255u);
    ctx.set_gpr(3, rt.memory().aot_load8(ctx.gpr[29] + static_cast<std::uint32_t>(665)));
    ctx.set_gpr(2, rt.memory().aot_load8(ctx.gpr[29] + static_cast<std::uint32_t>(657)));
    ctx.set_gpr(2, ctx.gpr[3] + ctx.gpr[2]);
    ctx.set_gpr(6, ctx.gpr[2] & 255u);
    ctx.set_gpr(3, rt.memory().aot_load8(ctx.gpr[29] + static_cast<std::uint32_t>(666)));
    ctx.set_gpr(2, rt.memory().aot_load8(ctx.gpr[29] + static_cast<std::uint32_t>(658)));
    ctx.set_gpr(2, ctx.gpr[3] + ctx.gpr[2]);
    ctx.set_gpr(7, ctx.gpr[2] & 255u);
    ctx.set_gpr(3, rt.memory().aot_load8(ctx.gpr[29] + static_cast<std::uint32_t>(667)));
    ctx.set_gpr(2, rt.memory().aot_load8(ctx.gpr[29] + static_cast<std::uint32_t>(659)));
    ctx.set_gpr(2, ctx.gpr[3] + ctx.gpr[2]);
    ctx.set_gpr(8, ctx.gpr[2] & 255u);
    ctx.set_gpr(4, ctx.gpr[29] + static_cast<std::uint32_t>(668));
    ctx.set_gpr(31, 0x089C38DCu);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0112_entry, 112u, 41u, 0x089C4700u>(ctx, &aot_mem) && ctx.pc == 0x089C38DCu) goto L_089C38DC;
    return;
L_089C38DC:
    ctx.set_gpr(3, rt.memory().aot_load8(ctx.gpr[29] + static_cast<std::uint32_t>(668)));
    ctx.set_gpr(2, rt.memory().aot_load8(ctx.gpr[29] + static_cast<std::uint32_t>(648)));
    ctx.set_gpr(2, ctx.gpr[3] + ctx.gpr[2]);
    ctx.set_gpr(5, ctx.gpr[2] & 255u);
    ctx.set_gpr(3, rt.memory().aot_load8(ctx.gpr[29] + static_cast<std::uint32_t>(669)));
    ctx.set_gpr(2, rt.memory().aot_load8(ctx.gpr[29] + static_cast<std::uint32_t>(649)));
    ctx.set_gpr(2, ctx.gpr[3] + ctx.gpr[2]);
    ctx.set_gpr(6, ctx.gpr[2] & 255u);
    ctx.set_gpr(3, rt.memory().aot_load8(ctx.gpr[29] + static_cast<std::uint32_t>(670)));
    ctx.set_gpr(2, rt.memory().aot_load8(ctx.gpr[29] + static_cast<std::uint32_t>(650)));
    ctx.set_gpr(2, ctx.gpr[3] + ctx.gpr[2]);
    ctx.set_gpr(7, ctx.gpr[2] & 255u);
    ctx.set_gpr(3, rt.memory().aot_load8(ctx.gpr[29] + static_cast<std::uint32_t>(671)));
    ctx.set_gpr(2, rt.memory().aot_load8(ctx.gpr[29] + static_cast<std::uint32_t>(651)));
    ctx.set_gpr(2, ctx.gpr[3] + ctx.gpr[2]);
    ctx.set_gpr(8, ctx.gpr[2] & 255u);
    ctx.set_gpr(4, ctx.gpr[29] + static_cast<std::uint32_t>(672));
    ctx.set_gpr(31, 0x089C3928u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0112_entry, 112u, 41u, 0x089C4700u>(ctx, &aot_mem) && ctx.pc == 0x089C3928u) goto L_089C3928;
    return;
L_089C3928:
    ctx.set_gpr(3, rt.memory().aot_load8(ctx.gpr[29] + static_cast<std::uint32_t>(672)));
    ctx.set_gpr(2, rt.memory().aot_load8(ctx.gpr[29] + static_cast<std::uint32_t>(640)));
    ctx.set_gpr(2, ctx.gpr[3] + ctx.gpr[2]);
    ctx.set_gpr(5, ctx.gpr[2] & 255u);
    ctx.set_gpr(3, rt.memory().aot_load8(ctx.gpr[29] + static_cast<std::uint32_t>(673)));
    ctx.set_gpr(2, rt.memory().aot_load8(ctx.gpr[29] + static_cast<std::uint32_t>(641)));
    ctx.set_gpr(2, ctx.gpr[3] + ctx.gpr[2]);
    ctx.set_gpr(6, ctx.gpr[2] & 255u);
    ctx.set_gpr(3, rt.memory().aot_load8(ctx.gpr[29] + static_cast<std::uint32_t>(674)));
    ctx.set_gpr(2, rt.memory().aot_load8(ctx.gpr[29] + static_cast<std::uint32_t>(642)));
    ctx.set_gpr(2, ctx.gpr[3] + ctx.gpr[2]);
    ctx.set_gpr(7, ctx.gpr[2] & 255u);
    ctx.set_gpr(3, rt.memory().aot_load8(ctx.gpr[29] + static_cast<std::uint32_t>(675)));
    ctx.set_gpr(2, rt.memory().aot_load8(ctx.gpr[29] + static_cast<std::uint32_t>(643)));
    ctx.set_gpr(2, ctx.gpr[3] + ctx.gpr[2]);
    ctx.set_gpr(8, ctx.gpr[2] & 255u);
    ctx.set_gpr(4, ctx.gpr[29] + static_cast<std::uint32_t>(676));
    ctx.set_gpr(31, 0x089C3974u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0112_entry, 112u, 41u, 0x089C4700u>(ctx, &aot_mem) && ctx.pc == 0x089C3974u) goto L_089C3974;
    return;
L_089C3974:
    ctx.set_gpr(3, rt.memory().aot_load8(ctx.gpr[29] + static_cast<std::uint32_t>(676)));
    ctx.set_gpr(2, rt.memory().aot_load8(ctx.gpr[29] + static_cast<std::uint32_t>(632)));
    ctx.set_gpr(2, ctx.gpr[3] + ctx.gpr[2]);
    ctx.set_gpr(5, ctx.gpr[2] & 255u);
    ctx.set_gpr(3, rt.memory().aot_load8(ctx.gpr[29] + static_cast<std::uint32_t>(677)));
    ctx.set_gpr(2, rt.memory().aot_load8(ctx.gpr[29] + static_cast<std::uint32_t>(633)));
    ctx.set_gpr(2, ctx.gpr[3] + ctx.gpr[2]);
    ctx.set_gpr(6, ctx.gpr[2] & 255u);
    ctx.set_gpr(3, rt.memory().aot_load8(ctx.gpr[29] + static_cast<std::uint32_t>(678)));
    ctx.set_gpr(2, rt.memory().aot_load8(ctx.gpr[29] + static_cast<std::uint32_t>(634)));
    ctx.set_gpr(2, ctx.gpr[3] + ctx.gpr[2]);
    ctx.set_gpr(7, ctx.gpr[2] & 255u);
    ctx.set_gpr(3, rt.memory().aot_load8(ctx.gpr[29] + static_cast<std::uint32_t>(679)));
    ctx.set_gpr(2, rt.memory().aot_load8(ctx.gpr[29] + static_cast<std::uint32_t>(635)));
    ctx.set_gpr(2, ctx.gpr[3] + ctx.gpr[2]);
    ctx.set_gpr(8, ctx.gpr[2] & 255u);
    ctx.set_gpr(4, ctx.gpr[29] + static_cast<std::uint32_t>(680));
    ctx.set_gpr(31, 0x089C39C0u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0112_entry, 112u, 41u, 0x089C4700u>(ctx, &aot_mem) && ctx.pc == 0x089C39C0u) goto L_089C39C0;
    return;
L_089C39C0:
    ctx.set_gpr(3, rt.memory().aot_load8(ctx.gpr[29] + static_cast<std::uint32_t>(680)));
    ctx.set_gpr(2, rt.memory().aot_load8(ctx.gpr[29] + static_cast<std::uint32_t>(624)));
    ctx.set_gpr(2, ctx.gpr[3] + ctx.gpr[2]);
    ctx.set_gpr(5, ctx.gpr[2] & 255u);
    ctx.set_gpr(3, rt.memory().aot_load8(ctx.gpr[29] + static_cast<std::uint32_t>(681)));
    ctx.set_gpr(2, rt.memory().aot_load8(ctx.gpr[29] + static_cast<std::uint32_t>(625)));
    ctx.set_gpr(2, ctx.gpr[3] + ctx.gpr[2]);
    ctx.set_gpr(6, ctx.gpr[2] & 255u);
    ctx.set_gpr(3, rt.memory().aot_load8(ctx.gpr[29] + static_cast<std::uint32_t>(682)));
    ctx.set_gpr(2, rt.memory().aot_load8(ctx.gpr[29] + static_cast<std::uint32_t>(626)));
    ctx.set_gpr(2, ctx.gpr[3] + ctx.gpr[2]);
    ctx.set_gpr(7, ctx.gpr[2] & 255u);
    ctx.set_gpr(3, rt.memory().aot_load8(ctx.gpr[29] + static_cast<std::uint32_t>(683)));
    ctx.set_gpr(2, rt.memory().aot_load8(ctx.gpr[29] + static_cast<std::uint32_t>(627)));
    ctx.set_gpr(2, ctx.gpr[3] + ctx.gpr[2]);
    ctx.set_gpr(8, ctx.gpr[2] & 255u);
    ctx.set_gpr(4, ctx.gpr[29] + static_cast<std::uint32_t>(684));
    ctx.set_gpr(31, 0x089C3A0Cu);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0112_entry, 112u, 41u, 0x089C4700u>(ctx, &aot_mem) && ctx.pc == 0x089C3A0Cu) goto L_089C3A0C;
    return;
L_089C3A0C:
    ctx.set_gpr(3, rt.memory().aot_load8(ctx.gpr[29] + static_cast<std::uint32_t>(684)));
    ctx.set_gpr(2, rt.memory().aot_load8(ctx.gpr[29] + static_cast<std::uint32_t>(616)));
    ctx.set_gpr(2, ctx.gpr[3] + ctx.gpr[2]);
    ctx.set_gpr(5, ctx.gpr[2] & 255u);
    ctx.set_gpr(3, rt.memory().aot_load8(ctx.gpr[29] + static_cast<std::uint32_t>(685)));
    ctx.set_gpr(2, rt.memory().aot_load8(ctx.gpr[29] + static_cast<std::uint32_t>(617)));
    ctx.set_gpr(2, ctx.gpr[3] + ctx.gpr[2]);
    ctx.set_gpr(6, ctx.gpr[2] & 255u);
    ctx.set_gpr(3, rt.memory().aot_load8(ctx.gpr[29] + static_cast<std::uint32_t>(686)));
    ctx.set_gpr(2, rt.memory().aot_load8(ctx.gpr[29] + static_cast<std::uint32_t>(618)));
    ctx.set_gpr(2, ctx.gpr[3] + ctx.gpr[2]);
    ctx.set_gpr(7, ctx.gpr[2] & 255u);
    ctx.set_gpr(3, rt.memory().aot_load8(ctx.gpr[29] + static_cast<std::uint32_t>(687)));
    ctx.set_gpr(2, rt.memory().aot_load8(ctx.gpr[29] + static_cast<std::uint32_t>(619)));
    ctx.set_gpr(2, ctx.gpr[3] + ctx.gpr[2]);
    ctx.set_gpr(8, ctx.gpr[2] & 255u);
    ctx.set_gpr(4, ctx.gpr[29] + static_cast<std::uint32_t>(688));
    ctx.set_gpr(31, 0x089C3A58u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0112_entry, 112u, 41u, 0x089C4700u>(ctx, &aot_mem) && ctx.pc == 0x089C3A58u) goto L_089C3A58;
    return;
L_089C3A58:
    ctx.set_gpr(3, rt.memory().aot_load8(ctx.gpr[29] + static_cast<std::uint32_t>(688)));
    ctx.set_gpr(2, rt.memory().aot_load8(ctx.gpr[29] + static_cast<std::uint32_t>(608)));
    ctx.set_gpr(2, ctx.gpr[3] + ctx.gpr[2]);
    ctx.set_gpr(5, ctx.gpr[2] & 255u);
    ctx.set_gpr(3, rt.memory().aot_load8(ctx.gpr[29] + static_cast<std::uint32_t>(689)));
    ctx.set_gpr(2, rt.memory().aot_load8(ctx.gpr[29] + static_cast<std::uint32_t>(609)));
    ctx.set_gpr(2, ctx.gpr[3] + ctx.gpr[2]);
    ctx.set_gpr(6, ctx.gpr[2] & 255u);
    ctx.set_gpr(3, rt.memory().aot_load8(ctx.gpr[29] + static_cast<std::uint32_t>(690)));
    ctx.set_gpr(2, rt.memory().aot_load8(ctx.gpr[29] + static_cast<std::uint32_t>(610)));
    ctx.set_gpr(2, ctx.gpr[3] + ctx.gpr[2]);
    ctx.set_gpr(7, ctx.gpr[2] & 255u);
    ctx.set_gpr(3, rt.memory().aot_load8(ctx.gpr[29] + static_cast<std::uint32_t>(691)));
    ctx.set_gpr(2, rt.memory().aot_load8(ctx.gpr[29] + static_cast<std::uint32_t>(611)));
    ctx.set_gpr(2, ctx.gpr[3] + ctx.gpr[2]);
    ctx.set_gpr(8, ctx.gpr[2] & 255u);
    ctx.set_gpr(4, ctx.gpr[29] + static_cast<std::uint32_t>(692));
    ctx.set_gpr(31, 0x089C3AA4u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0112_entry, 112u, 41u, 0x089C4700u>(ctx, &aot_mem) && ctx.pc == 0x089C3AA4u) goto L_089C3AA4;
    return;
L_089C3AA4:
    ctx.set_gpr(3, rt.memory().aot_load8(ctx.gpr[29] + static_cast<std::uint32_t>(692)));
    ctx.set_gpr(2, rt.memory().aot_load8(ctx.gpr[29] + static_cast<std::uint32_t>(600)));
    ctx.set_gpr(2, ctx.gpr[3] + ctx.gpr[2]);
    ctx.set_gpr(5, ctx.gpr[2] & 255u);
    ctx.set_gpr(3, rt.memory().aot_load8(ctx.gpr[29] + static_cast<std::uint32_t>(693)));
    ctx.set_gpr(2, rt.memory().aot_load8(ctx.gpr[29] + static_cast<std::uint32_t>(601)));
    ctx.set_gpr(2, ctx.gpr[3] + ctx.gpr[2]);
    ctx.set_gpr(6, ctx.gpr[2] & 255u);
    ctx.set_gpr(3, rt.memory().aot_load8(ctx.gpr[29] + static_cast<std::uint32_t>(694)));
    ctx.set_gpr(2, rt.memory().aot_load8(ctx.gpr[29] + static_cast<std::uint32_t>(602)));
    ctx.set_gpr(2, ctx.gpr[3] + ctx.gpr[2]);
    ctx.set_gpr(7, ctx.gpr[2] & 255u);
    ctx.set_gpr(3, rt.memory().aot_load8(ctx.gpr[29] + static_cast<std::uint32_t>(695)));
    ctx.set_gpr(2, rt.memory().aot_load8(ctx.gpr[29] + static_cast<std::uint32_t>(603)));
    ctx.set_gpr(2, ctx.gpr[3] + ctx.gpr[2]);
    ctx.set_gpr(8, ctx.gpr[2] & 255u);
    ctx.set_gpr(4, ctx.gpr[29] + static_cast<std::uint32_t>(696));
    ctx.set_gpr(31, 0x089C3AF0u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0112_entry, 112u, 41u, 0x089C4700u>(ctx, &aot_mem) && ctx.pc == 0x089C3AF0u) goto L_089C3AF0;
    return;
L_089C3AF0:
    ctx.set_gpr(3, rt.memory().aot_load8(ctx.gpr[29] + static_cast<std::uint32_t>(696)));
    ctx.set_gpr(2, rt.memory().aot_load8(ctx.gpr[29] + static_cast<std::uint32_t>(592)));
    ctx.set_gpr(2, ctx.gpr[3] + ctx.gpr[2]);
    ctx.set_gpr(5, ctx.gpr[2] & 255u);
    ctx.set_gpr(3, rt.memory().aot_load8(ctx.gpr[29] + static_cast<std::uint32_t>(697)));
    ctx.set_gpr(2, rt.memory().aot_load8(ctx.gpr[29] + static_cast<std::uint32_t>(593)));
    ctx.set_gpr(2, ctx.gpr[3] + ctx.gpr[2]);
    ctx.set_gpr(6, ctx.gpr[2] & 255u);
    ctx.set_gpr(3, rt.memory().aot_load8(ctx.gpr[29] + static_cast<std::uint32_t>(698)));
    ctx.set_gpr(2, rt.memory().aot_load8(ctx.gpr[29] + static_cast<std::uint32_t>(594)));
    ctx.set_gpr(2, ctx.gpr[3] + ctx.gpr[2]);
    ctx.set_gpr(7, ctx.gpr[2] & 255u);
    ctx.set_gpr(3, rt.memory().aot_load8(ctx.gpr[29] + static_cast<std::uint32_t>(699)));
    ctx.set_gpr(2, rt.memory().aot_load8(ctx.gpr[29] + static_cast<std::uint32_t>(595)));
    ctx.set_gpr(2, ctx.gpr[3] + ctx.gpr[2]);
    ctx.set_gpr(8, ctx.gpr[2] & 255u);
    ctx.set_gpr(4, ctx.gpr[29] + static_cast<std::uint32_t>(700));
    ctx.set_gpr(31, 0x089C3B3Cu);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0112_entry, 112u, 41u, 0x089C4700u>(ctx, &aot_mem) && ctx.pc == 0x089C3B3Cu) goto L_089C3B3C;
    return;
L_089C3B3C:
    ctx.set_gpr(3, rt.memory().aot_load8(ctx.gpr[29] + static_cast<std::uint32_t>(700)));
    ctx.set_gpr(2, rt.memory().aot_load8(ctx.gpr[29] + static_cast<std::uint32_t>(584)));
    ctx.set_gpr(2, ctx.gpr[3] + ctx.gpr[2]);
    ctx.set_gpr(5, ctx.gpr[2] & 255u);
    ctx.set_gpr(3, rt.memory().aot_load8(ctx.gpr[29] + static_cast<std::uint32_t>(701)));
    ctx.set_gpr(2, rt.memory().aot_load8(ctx.gpr[29] + static_cast<std::uint32_t>(585)));
    ctx.set_gpr(2, ctx.gpr[3] + ctx.gpr[2]);
    ctx.set_gpr(6, ctx.gpr[2] & 255u);
    ctx.set_gpr(3, rt.memory().aot_load8(ctx.gpr[29] + static_cast<std::uint32_t>(702)));
    ctx.set_gpr(2, rt.memory().aot_load8(ctx.gpr[29] + static_cast<std::uint32_t>(586)));
    ctx.set_gpr(2, ctx.gpr[3] + ctx.gpr[2]);
    ctx.set_gpr(7, ctx.gpr[2] & 255u);
    ctx.set_gpr(3, rt.memory().aot_load8(ctx.gpr[29] + static_cast<std::uint32_t>(703)));
    ctx.set_gpr(2, rt.memory().aot_load8(ctx.gpr[29] + static_cast<std::uint32_t>(587)));
    ctx.set_gpr(2, ctx.gpr[3] + ctx.gpr[2]);
    ctx.set_gpr(8, ctx.gpr[2] & 255u);
    ctx.set_gpr(4, ctx.gpr[29] + static_cast<std::uint32_t>(704));
    ctx.set_gpr(31, 0x089C3B88u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0112_entry, 112u, 41u, 0x089C4700u>(ctx, &aot_mem) && ctx.pc == 0x089C3B88u) goto L_089C3B88;
    return;
L_089C3B88:
    ctx.set_gpr(3, rt.memory().aot_load8(ctx.gpr[29] + static_cast<std::uint32_t>(704)));
    ctx.set_gpr(2, rt.memory().aot_load8(ctx.gpr[29] + static_cast<std::uint32_t>(576)));
    ctx.set_gpr(2, ctx.gpr[3] + ctx.gpr[2]);
    ctx.set_gpr(5, ctx.gpr[2] & 255u);
    ctx.set_gpr(3, rt.memory().aot_load8(ctx.gpr[29] + static_cast<std::uint32_t>(705)));
    ctx.set_gpr(2, rt.memory().aot_load8(ctx.gpr[29] + static_cast<std::uint32_t>(577)));
    ctx.set_gpr(2, ctx.gpr[3] + ctx.gpr[2]);
    ctx.set_gpr(6, ctx.gpr[2] & 255u);
    ctx.set_gpr(3, rt.memory().aot_load8(ctx.gpr[29] + static_cast<std::uint32_t>(706)));
    ctx.set_gpr(2, rt.memory().aot_load8(ctx.gpr[29] + static_cast<std::uint32_t>(578)));
    ctx.set_gpr(2, ctx.gpr[3] + ctx.gpr[2]);
    ctx.set_gpr(7, ctx.gpr[2] & 255u);
    ctx.set_gpr(3, rt.memory().aot_load8(ctx.gpr[29] + static_cast<std::uint32_t>(707)));
    ctx.set_gpr(2, rt.memory().aot_load8(ctx.gpr[29] + static_cast<std::uint32_t>(579)));
    ctx.set_gpr(2, ctx.gpr[3] + ctx.gpr[2]);
    ctx.set_gpr(8, ctx.gpr[2] & 255u);
    ctx.set_gpr(4, ctx.gpr[29] + static_cast<std::uint32_t>(708));
    ctx.set_gpr(31, 0x089C3BD4u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0112_entry, 112u, 41u, 0x089C4700u>(ctx, &aot_mem) && ctx.pc == 0x089C3BD4u) goto L_089C3BD4;
    return;
L_089C3BD4:
    ctx.set_gpr(3, rt.memory().aot_load8(ctx.gpr[29] + static_cast<std::uint32_t>(708)));
    ctx.set_gpr(2, rt.memory().aot_load8(ctx.gpr[29] + static_cast<std::uint32_t>(568)));
    ctx.set_gpr(2, ctx.gpr[3] + ctx.gpr[2]);
    ctx.set_gpr(5, ctx.gpr[2] & 255u);
    ctx.set_gpr(3, rt.memory().aot_load8(ctx.gpr[29] + static_cast<std::uint32_t>(709)));
    ctx.set_gpr(2, rt.memory().aot_load8(ctx.gpr[29] + static_cast<std::uint32_t>(569)));
    ctx.set_gpr(2, ctx.gpr[3] + ctx.gpr[2]);
    ctx.set_gpr(6, ctx.gpr[2] & 255u);
    ctx.set_gpr(3, rt.memory().aot_load8(ctx.gpr[29] + static_cast<std::uint32_t>(710)));
    ctx.set_gpr(2, rt.memory().aot_load8(ctx.gpr[29] + static_cast<std::uint32_t>(570)));
    ctx.set_gpr(2, ctx.gpr[3] + ctx.gpr[2]);
    ctx.set_gpr(7, ctx.gpr[2] & 255u);
    ctx.set_gpr(3, rt.memory().aot_load8(ctx.gpr[29] + static_cast<std::uint32_t>(711)));
    ctx.set_gpr(2, rt.memory().aot_load8(ctx.gpr[29] + static_cast<std::uint32_t>(571)));
    ctx.set_gpr(2, ctx.gpr[3] + ctx.gpr[2]);
    ctx.set_gpr(8, ctx.gpr[2] & 255u);
    ctx.set_gpr(4, ctx.gpr[29] + static_cast<std::uint32_t>(712));
    ctx.set_gpr(31, 0x089C3C20u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0112_entry, 112u, 41u, 0x089C4700u>(ctx, &aot_mem) && ctx.pc == 0x089C3C20u) goto L_089C3C20;
    return;
L_089C3C20:
    ctx.set_gpr(3, rt.memory().aot_load8(ctx.gpr[29] + static_cast<std::uint32_t>(712)));
    ctx.set_gpr(2, rt.memory().aot_load8(ctx.gpr[29] + static_cast<std::uint32_t>(560)));
    ctx.set_gpr(2, ctx.gpr[3] + ctx.gpr[2]);
    ctx.set_gpr(5, ctx.gpr[2] & 255u);
    ctx.set_gpr(3, rt.memory().aot_load8(ctx.gpr[29] + static_cast<std::uint32_t>(713)));
    ctx.set_gpr(2, rt.memory().aot_load8(ctx.gpr[29] + static_cast<std::uint32_t>(561)));
    ctx.set_gpr(2, ctx.gpr[3] + ctx.gpr[2]);
    ctx.set_gpr(6, ctx.gpr[2] & 255u);
    ctx.set_gpr(3, rt.memory().aot_load8(ctx.gpr[29] + static_cast<std::uint32_t>(714)));
    ctx.set_gpr(2, rt.memory().aot_load8(ctx.gpr[29] + static_cast<std::uint32_t>(562)));
    ctx.set_gpr(2, ctx.gpr[3] + ctx.gpr[2]);
    ctx.set_gpr(7, ctx.gpr[2] & 255u);
    ctx.set_gpr(3, rt.memory().aot_load8(ctx.gpr[29] + static_cast<std::uint32_t>(715)));
    ctx.set_gpr(2, rt.memory().aot_load8(ctx.gpr[29] + static_cast<std::uint32_t>(563)));
    ctx.set_gpr(2, ctx.gpr[3] + ctx.gpr[2]);
    ctx.set_gpr(8, ctx.gpr[2] & 255u);
    ctx.set_gpr(4, ctx.gpr[29] + static_cast<std::uint32_t>(716));
    ctx.set_gpr(31, 0x089C3C6Cu);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0112_entry, 112u, 41u, 0x089C4700u>(ctx, &aot_mem) && ctx.pc == 0x089C3C6Cu) goto L_089C3C6C;
    return;
L_089C3C6C:
    ctx.set_gpr(3, rt.memory().aot_load8(ctx.gpr[29] + static_cast<std::uint32_t>(716)));
    ctx.set_gpr(2, rt.memory().aot_load8(ctx.gpr[29] + static_cast<std::uint32_t>(552)));
    ctx.set_gpr(2, ctx.gpr[3] + ctx.gpr[2]);
    ctx.set_gpr(5, ctx.gpr[2] & 255u);
    ctx.set_gpr(3, rt.memory().aot_load8(ctx.gpr[29] + static_cast<std::uint32_t>(717)));
    ctx.set_gpr(2, rt.memory().aot_load8(ctx.gpr[29] + static_cast<std::uint32_t>(553)));
    ctx.set_gpr(2, ctx.gpr[3] + ctx.gpr[2]);
    ctx.set_gpr(6, ctx.gpr[2] & 255u);
    ctx.set_gpr(3, rt.memory().aot_load8(ctx.gpr[29] + static_cast<std::uint32_t>(718)));
    ctx.set_gpr(2, rt.memory().aot_load8(ctx.gpr[29] + static_cast<std::uint32_t>(554)));
    ctx.set_gpr(2, ctx.gpr[3] + ctx.gpr[2]);
    ctx.set_gpr(7, ctx.gpr[2] & 255u);
    ctx.set_gpr(3, rt.memory().aot_load8(ctx.gpr[29] + static_cast<std::uint32_t>(719)));
    ctx.set_gpr(2, rt.memory().aot_load8(ctx.gpr[29] + static_cast<std::uint32_t>(555)));
    ctx.set_gpr(2, ctx.gpr[3] + ctx.gpr[2]);
    ctx.set_gpr(8, ctx.gpr[2] & 255u);
    ctx.set_gpr(4, ctx.gpr[29] + static_cast<std::uint32_t>(720));
    ctx.set_gpr(31, 0x089C3CB8u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0112_entry, 112u, 41u, 0x089C4700u>(ctx, &aot_mem) && ctx.pc == 0x089C3CB8u) goto L_089C3CB8;
    return;
L_089C3CB8:
    ctx.set_gpr(3, rt.memory().aot_load8(ctx.gpr[29] + static_cast<std::uint32_t>(723)));
    ctx.set_gpr(2, rt.memory().aot_load8(ctx.gpr[29] + static_cast<std::uint32_t>(547)));
    ctx.set_gpr(7, ctx.gpr[3] + ctx.gpr[2]);
    ctx.set_gpr(3, rt.memory().aot_load8(ctx.gpr[29] + static_cast<std::uint32_t>(722)));
    ctx.set_gpr(2, rt.memory().aot_load8(ctx.gpr[29] + static_cast<std::uint32_t>(546)));
    ctx.set_gpr(6, ctx.gpr[3] + ctx.gpr[2]);
    ctx.set_gpr(3, rt.memory().aot_load8(ctx.gpr[29] + static_cast<std::uint32_t>(721)));
    ctx.set_gpr(2, rt.memory().aot_load8(ctx.gpr[29] + static_cast<std::uint32_t>(545)));
    ctx.set_gpr(5, ctx.gpr[3] + ctx.gpr[2]);
    ctx.set_gpr(3, rt.memory().aot_load8(ctx.gpr[29] + static_cast<std::uint32_t>(720)));
    ctx.set_gpr(2, rt.memory().aot_load8(ctx.gpr[29] + static_cast<std::uint32_t>(544)));
    ctx.set_gpr(4, ctx.gpr[3] + ctx.gpr[2]);
    ctx.set_gpr(2, rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(1392)));
    { const std::int64_t product = static_cast<std::int64_t>(static_cast<std::int32_t>(ctx.gpr[2])) * static_cast<std::int64_t>(static_cast<std::int32_t>(ctx.gpr[23])); ctx.lo = static_cast<std::uint32_t>(product); ctx.hi = static_cast<std::uint32_t>(static_cast<std::uint64_t>(product) >> 32u); }
    ctx.set_gpr(3, ctx.lo);
    ctx.set_gpr(2, rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(164)));
    ctx.set_gpr(2, ctx.gpr[2] + ctx.gpr[3]);
    rt.memory().aot_store8(ctx.gpr[2] + static_cast<std::uint32_t>(0), static_cast<std::uint8_t>(ctx.gpr[4]));
    rt.memory().aot_store8(ctx.gpr[2] + static_cast<std::uint32_t>(1), static_cast<std::uint8_t>(ctx.gpr[5]));
    rt.memory().aot_store8(ctx.gpr[2] + static_cast<std::uint32_t>(2), static_cast<std::uint8_t>(ctx.gpr[6]));
    rt.memory().aot_store8(ctx.gpr[2] + static_cast<std::uint32_t>(3), static_cast<std::uint8_t>(ctx.gpr[7]));
    goto L_089C3D0C;
L_089C3D0C:
    { const bool branch_taken = ctx.gpr[19] == 0u;
    // nop
      if (branch_taken) {
          (void)rt.invoke_chained_direct<&recomp_unit_0112_entry, 112u, 2u, 0x089C4138u>(ctx, &aot_mem); return;
      }
      goto L_089C3D14;
    }
L_089C3D14:
    ctx.set_gpr(3, rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(1448)));
    ctx.set_gpr(2, ctx.gpr[3] << 4u);
    ctx.set_gpr(2, ctx.gpr[2] - ctx.gpr[3]);
    ctx.set_gpr(2, ctx.gpr[19] + ctx.gpr[2]);
    ctx.fpr[0] = std::bit_cast<float>(rt.memory().aot_load32(ctx.gpr[2] + static_cast<std::uint32_t>(0)));
    { const float fs = ctx.fpr[0]; const float ft = ctx.fpr[24]; if ((std::isinf(fs) && ft == 0.0f) || (std::isinf(ft) && fs == 0.0f)) ctx.set_fpr_bits(12, 0x7FC00000u); else ctx.fpr[12] = fs * ft; }
    ctx.fpr[0] = std::bit_cast<float>(rt.memory().aot_load32(ctx.gpr[2] + static_cast<std::uint32_t>(4)));
    { const float fs = ctx.fpr[0]; const float ft = ctx.fpr[24]; if ((std::isinf(fs) && ft == 0.0f) || (std::isinf(ft) && fs == 0.0f)) ctx.set_fpr_bits(13, 0x7FC00000u); else ctx.fpr[13] = fs * ft; }
    ctx.set_gpr(4, ctx.gpr[29] + static_cast<std::uint32_t>(180));
    ctx.set_gpr(31, 0x089C3D40u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0014_entry, 14u, 597u, 0x0883EA18u>(ctx, &aot_mem) && ctx.pc == 0x089C3D40u) goto L_089C3D40;
    return;
L_089C3D40:
    ctx.fpr[0] = std::bit_cast<float>(rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(184)));
    { const float fs = ctx.fpr[0]; const float ft = ctx.fpr[20]; if ((std::isinf(fs) && ft == 0.0f) || (std::isinf(ft) && fs == 0.0f)) ctx.set_fpr_bits(0, 0x7FC00000u); else ctx.fpr[0] = fs * ft; }
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(112), std::bit_cast<std::uint32_t>(ctx.fpr[0]));
    ctx.fpr[0] = std::bit_cast<float>(rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(180)));
    { const float fs = ctx.fpr[0]; const float ft = ctx.fpr[20]; if ((std::isinf(fs) && ft == 0.0f) || (std::isinf(ft) && fs == 0.0f)) ctx.set_fpr_bits(0, 0x7FC00000u); else ctx.fpr[0] = fs * ft; }
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(108), std::bit_cast<std::uint32_t>(ctx.fpr[0]));
    ctx.set_gpr(8, rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(1448)));
    ctx.set_gpr(7, ctx.gpr[8] << 3u);
    ctx.set_gpr(6, ctx.gpr[7] - ctx.gpr[8]);
    ctx.set_gpr(2, ctx.gpr[6] << 1u);
    ctx.set_gpr(2, ctx.gpr[19] + ctx.gpr[2]);
    ctx.fpr[0] = std::bit_cast<float>(rt.memory().aot_load32(ctx.gpr[2] + static_cast<std::uint32_t>(4)));
    { const float fs = ctx.fpr[0]; const float ft = ctx.fpr[25]; if ((std::isinf(fs) && ft == 0.0f) || (std::isinf(ft) && fs == 0.0f)) ctx.set_fpr_bits(1, 0x7FC00000u); else ctx.fpr[1] = fs * ft; }
    ctx.fpr[0] = std::bit_cast<float>(rt.memory().aot_load32(ctx.gpr[2] + static_cast<std::uint32_t>(0)));
    { const float fs = ctx.fpr[0]; const float ft = ctx.fpr[25]; if ((std::isinf(fs) && ft == 0.0f) || (std::isinf(ft) && fs == 0.0f)) ctx.set_fpr_bits(0, 0x7FC00000u); else ctx.fpr[0] = fs * ft; }
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(188), std::bit_cast<std::uint32_t>(ctx.fpr[0]));
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(192), std::bit_cast<std::uint32_t>(ctx.fpr[1]));
    { const float fs = ctx.fpr[0]; const float ft = ctx.fpr[20]; if ((std::isinf(fs) && ft == 0.0f) || (std::isinf(ft) && fs == 0.0f)) ctx.set_fpr_bits(11, 0x7FC00000u); else ctx.fpr[11] = fs * ft; }
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(196), std::bit_cast<std::uint32_t>(ctx.fpr[11]));
    { const float fs = ctx.fpr[1]; const float ft = ctx.fpr[20]; if ((std::isinf(fs) && ft == 0.0f) || (std::isinf(ft) && fs == 0.0f)) ctx.set_fpr_bits(10, 0x7FC00000u); else ctx.fpr[10] = fs * ft; }
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(200), std::bit_cast<std::uint32_t>(ctx.fpr[10]));
    ctx.set_gpr(5, ctx.gpr[8] << 1u);
    ctx.set_gpr(4, ctx.gpr[5] + ctx.gpr[8]);
    ctx.set_gpr(3, ctx.gpr[4] << 2u);
    ctx.set_gpr(2, ctx.gpr[3] + ctx.gpr[8]);
    ctx.set_gpr(2, ctx.gpr[19] + ctx.gpr[2]);
    ctx.fpr[0] = std::bit_cast<float>(rt.memory().aot_load32(ctx.gpr[2] + static_cast<std::uint32_t>(4)));
    { const float fs = ctx.fpr[0]; const float ft = ctx.fpr[26]; if ((std::isinf(fs) && ft == 0.0f) || (std::isinf(ft) && fs == 0.0f)) ctx.set_fpr_bits(1, 0x7FC00000u); else ctx.fpr[1] = fs * ft; }
    ctx.fpr[0] = std::bit_cast<float>(rt.memory().aot_load32(ctx.gpr[2] + static_cast<std::uint32_t>(0)));
    { const float fs = ctx.fpr[0]; const float ft = ctx.fpr[26]; if ((std::isinf(fs) && ft == 0.0f) || (std::isinf(ft) && fs == 0.0f)) ctx.set_fpr_bits(0, 0x7FC00000u); else ctx.fpr[0] = fs * ft; }
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(204), std::bit_cast<std::uint32_t>(ctx.fpr[0]));
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(208), std::bit_cast<std::uint32_t>(ctx.fpr[1]));
    { const float fs = ctx.fpr[0]; const float ft = ctx.fpr[20]; if ((std::isinf(fs) && ft == 0.0f) || (std::isinf(ft) && fs == 0.0f)) ctx.set_fpr_bits(9, 0x7FC00000u); else ctx.fpr[9] = fs * ft; }
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(212), std::bit_cast<std::uint32_t>(ctx.fpr[9]));
    { const float fs = ctx.fpr[1]; const float ft = ctx.fpr[20]; if ((std::isinf(fs) && ft == 0.0f) || (std::isinf(ft) && fs == 0.0f)) ctx.set_fpr_bits(8, 0x7FC00000u); else ctx.fpr[8] = fs * ft; }
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(216), std::bit_cast<std::uint32_t>(ctx.fpr[8]));
    ctx.set_gpr(2, ctx.gpr[19] + ctx.gpr[3]);
    ctx.fpr[0] = std::bit_cast<float>(rt.memory().aot_load32(ctx.gpr[2] + static_cast<std::uint32_t>(4)));
    { const float fs = ctx.fpr[0]; const float ft = ctx.fpr[27]; if ((std::isinf(fs) && ft == 0.0f) || (std::isinf(ft) && fs == 0.0f)) ctx.set_fpr_bits(1, 0x7FC00000u); else ctx.fpr[1] = fs * ft; }
    ctx.fpr[0] = std::bit_cast<float>(rt.memory().aot_load32(ctx.gpr[2] + static_cast<std::uint32_t>(0)));
    { const float fs = ctx.fpr[0]; const float ft = ctx.fpr[27]; if ((std::isinf(fs) && ft == 0.0f) || (std::isinf(ft) && fs == 0.0f)) ctx.set_fpr_bits(0, 0x7FC00000u); else ctx.fpr[0] = fs * ft; }
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(220), std::bit_cast<std::uint32_t>(ctx.fpr[0]));
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(224), std::bit_cast<std::uint32_t>(ctx.fpr[1]));
    { const float fs = ctx.fpr[0]; const float ft = ctx.fpr[20]; if ((std::isinf(fs) && ft == 0.0f) || (std::isinf(ft) && fs == 0.0f)) ctx.set_fpr_bits(0, 0x7FC00000u); else ctx.fpr[0] = fs * ft; }
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(100), std::bit_cast<std::uint32_t>(ctx.fpr[0]));
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(228), std::bit_cast<std::uint32_t>(ctx.fpr[0]));
    { const float fs = ctx.fpr[1]; const float ft = ctx.fpr[20]; if ((std::isinf(fs) && ft == 0.0f) || (std::isinf(ft) && fs == 0.0f)) ctx.set_fpr_bits(7, 0x7FC00000u); else ctx.fpr[7] = fs * ft; }
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(232), std::bit_cast<std::uint32_t>(ctx.fpr[7]));
    ctx.set_gpr(3, ctx.gpr[8] << 2u);
    ctx.set_gpr(2, ctx.gpr[3] + ctx.gpr[8]);
    ctx.set_gpr(10, ctx.gpr[2] << 1u);
    ctx.set_gpr(9, ctx.gpr[10] + ctx.gpr[8]);
    ctx.set_gpr(9, ctx.gpr[19] + ctx.gpr[9]);
    ctx.fpr[0] = std::bit_cast<float>(rt.memory().aot_load32(ctx.gpr[9] + static_cast<std::uint32_t>(4)));
    { const float fs = ctx.fpr[0]; const float ft = ctx.fpr[24]; if ((std::isinf(fs) && ft == 0.0f) || (std::isinf(ft) && fs == 0.0f)) ctx.set_fpr_bits(1, 0x7FC00000u); else ctx.fpr[1] = fs * ft; }
    ctx.fpr[0] = std::bit_cast<float>(rt.memory().aot_load32(ctx.gpr[9] + static_cast<std::uint32_t>(0)));
    { const float fs = ctx.fpr[0]; const float ft = ctx.fpr[24]; if ((std::isinf(fs) && ft == 0.0f) || (std::isinf(ft) && fs == 0.0f)) ctx.set_fpr_bits(0, 0x7FC00000u); else ctx.fpr[0] = fs * ft; }
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(236), std::bit_cast<std::uint32_t>(ctx.fpr[0]));
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(240), std::bit_cast<std::uint32_t>(ctx.fpr[1]));
    { const float fs = ctx.fpr[0]; const float ft = ctx.fpr[21]; if ((std::isinf(fs) && ft == 0.0f) || (std::isinf(ft) && fs == 0.0f)) ctx.set_fpr_bits(6, 0x7FC00000u); else ctx.fpr[6] = fs * ft; }
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(244), std::bit_cast<std::uint32_t>(ctx.fpr[6]));
    { const float fs = ctx.fpr[1]; const float ft = ctx.fpr[21]; if ((std::isinf(fs) && ft == 0.0f) || (std::isinf(ft) && fs == 0.0f)) ctx.set_fpr_bits(5, 0x7FC00000u); else ctx.fpr[5] = fs * ft; }
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(248), std::bit_cast<std::uint32_t>(ctx.fpr[5]));
    ctx.set_gpr(9, ctx.gpr[19] + ctx.gpr[10]);
    ctx.fpr[0] = std::bit_cast<float>(rt.memory().aot_load32(ctx.gpr[9] + static_cast<std::uint32_t>(4)));
    { const float fs = ctx.fpr[0]; const float ft = ctx.fpr[25]; if ((std::isinf(fs) && ft == 0.0f) || (std::isinf(ft) && fs == 0.0f)) ctx.set_fpr_bits(1, 0x7FC00000u); else ctx.fpr[1] = fs * ft; }
    ctx.fpr[0] = std::bit_cast<float>(rt.memory().aot_load32(ctx.gpr[9] + static_cast<std::uint32_t>(0)));
    { const float fs = ctx.fpr[0]; const float ft = ctx.fpr[25]; if ((std::isinf(fs) && ft == 0.0f) || (std::isinf(ft) && fs == 0.0f)) ctx.set_fpr_bits(0, 0x7FC00000u); else ctx.fpr[0] = fs * ft; }
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(252), std::bit_cast<std::uint32_t>(ctx.fpr[0]));
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(256), std::bit_cast<std::uint32_t>(ctx.fpr[1]));
    { const float fs = ctx.fpr[0]; const float ft = ctx.fpr[21]; if ((std::isinf(fs) && ft == 0.0f) || (std::isinf(ft) && fs == 0.0f)) ctx.set_fpr_bits(4, 0x7FC00000u); else ctx.fpr[4] = fs * ft; }
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(260), std::bit_cast<std::uint32_t>(ctx.fpr[4]));
    { const float fs = ctx.fpr[1]; const float ft = ctx.fpr[21]; if ((std::isinf(fs) && ft == 0.0f) || (std::isinf(ft) && fs == 0.0f)) ctx.set_fpr_bits(3, 0x7FC00000u); else ctx.fpr[3] = fs * ft; }
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(264), std::bit_cast<std::uint32_t>(ctx.fpr[3]));
    ctx.set_gpr(9, ctx.gpr[7] + ctx.gpr[8]);
    ctx.set_gpr(9, ctx.gpr[19] + ctx.gpr[9]);
    ctx.fpr[0] = std::bit_cast<float>(rt.memory().aot_load32(ctx.gpr[9] + static_cast<std::uint32_t>(4)));
    { const float fs = ctx.fpr[0]; const float ft = ctx.fpr[26]; if ((std::isinf(fs) && ft == 0.0f) || (std::isinf(ft) && fs == 0.0f)) ctx.set_fpr_bits(1, 0x7FC00000u); else ctx.fpr[1] = fs * ft; }
    ctx.fpr[0] = std::bit_cast<float>(rt.memory().aot_load32(ctx.gpr[9] + static_cast<std::uint32_t>(0)));
    { const float fs = ctx.fpr[0]; const float ft = ctx.fpr[26]; if ((std::isinf(fs) && ft == 0.0f) || (std::isinf(ft) && fs == 0.0f)) ctx.set_fpr_bits(0, 0x7FC00000u); else ctx.fpr[0] = fs * ft; }
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(268), std::bit_cast<std::uint32_t>(ctx.fpr[0]));
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(272), std::bit_cast<std::uint32_t>(ctx.fpr[1]));
    { const float fs = ctx.fpr[0]; const float ft = ctx.fpr[21]; if ((std::isinf(fs) && ft == 0.0f) || (std::isinf(ft) && fs == 0.0f)) ctx.set_fpr_bits(2, 0x7FC00000u); else ctx.fpr[2] = fs * ft; }
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(276), std::bit_cast<std::uint32_t>(ctx.fpr[2]));
    { const float fs = ctx.fpr[1]; const float ft = ctx.fpr[21]; if ((std::isinf(fs) && ft == 0.0f) || (std::isinf(ft) && fs == 0.0f)) ctx.set_fpr_bits(1, 0x7FC00000u); else ctx.fpr[1] = fs * ft; }
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(280), std::bit_cast<std::uint32_t>(ctx.fpr[1]));
    ctx.set_gpr(7, ctx.gpr[19] + ctx.gpr[7]);
    ctx.fpr[0] = std::bit_cast<float>(rt.memory().aot_load32(ctx.gpr[7] + static_cast<std::uint32_t>(4)));
    { const float fs = ctx.fpr[0]; const float ft = ctx.fpr[27]; if ((std::isinf(fs) && ft == 0.0f) || (std::isinf(ft) && fs == 0.0f)) ctx.set_fpr_bits(12, 0x7FC00000u); else ctx.fpr[12] = fs * ft; }
    ctx.fpr[0] = std::bit_cast<float>(rt.memory().aot_load32(ctx.gpr[7] + static_cast<std::uint32_t>(0)));
    { const float fs = ctx.fpr[0]; const float ft = ctx.fpr[27]; if ((std::isinf(fs) && ft == 0.0f) || (std::isinf(ft) && fs == 0.0f)) ctx.set_fpr_bits(0, 0x7FC00000u); else ctx.fpr[0] = fs * ft; }
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(284), std::bit_cast<std::uint32_t>(ctx.fpr[0]));
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(288), std::bit_cast<std::uint32_t>(ctx.fpr[12]));
    { const float fs = ctx.fpr[0]; const float ft = ctx.fpr[21]; if ((std::isinf(fs) && ft == 0.0f) || (std::isinf(ft) && fs == 0.0f)) ctx.set_fpr_bits(0, 0x7FC00000u); else ctx.fpr[0] = fs * ft; }
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(292), std::bit_cast<std::uint32_t>(ctx.fpr[0]));
    { const float fs = ctx.fpr[12]; const float ft = ctx.fpr[21]; if ((std::isinf(fs) && ft == 0.0f) || (std::isinf(ft) && fs == 0.0f)) ctx.set_fpr_bits(31, 0x7FC00000u); else ctx.fpr[31] = fs * ft; }
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(296), std::bit_cast<std::uint32_t>(ctx.fpr[31]));
    ctx.set_gpr(6, ctx.gpr[19] + ctx.gpr[6]);
    ctx.fpr[12] = std::bit_cast<float>(rt.memory().aot_load32(ctx.gpr[6] + static_cast<std::uint32_t>(4)));
    { const float fs = ctx.fpr[12]; const float ft = ctx.fpr[24]; if ((std::isinf(fs) && ft == 0.0f) || (std::isinf(ft) && fs == 0.0f)) ctx.set_fpr_bits(13, 0x7FC00000u); else ctx.fpr[13] = fs * ft; }
    ctx.fpr[12] = std::bit_cast<float>(rt.memory().aot_load32(ctx.gpr[6] + static_cast<std::uint32_t>(0)));
    { const float fs = ctx.fpr[12]; const float ft = ctx.fpr[24]; if ((std::isinf(fs) && ft == 0.0f) || (std::isinf(ft) && fs == 0.0f)) ctx.set_fpr_bits(12, 0x7FC00000u); else ctx.fpr[12] = fs * ft; }
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(300), std::bit_cast<std::uint32_t>(ctx.fpr[12]));
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(304), std::bit_cast<std::uint32_t>(ctx.fpr[13]));
    { const float fs = ctx.fpr[12]; const float ft = ctx.fpr[22]; if ((std::isinf(fs) && ft == 0.0f) || (std::isinf(ft) && fs == 0.0f)) ctx.set_fpr_bits(30, 0x7FC00000u); else ctx.fpr[30] = fs * ft; }
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(308), std::bit_cast<std::uint32_t>(ctx.fpr[30]));
    { const float fs = ctx.fpr[13]; const float ft = ctx.fpr[22]; if ((std::isinf(fs) && ft == 0.0f) || (std::isinf(ft) && fs == 0.0f)) ctx.set_fpr_bits(29, 0x7FC00000u); else ctx.fpr[29] = fs * ft; }
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(312), std::bit_cast<std::uint32_t>(ctx.fpr[29]));
    ctx.set_gpr(6, ctx.gpr[4] << 1u);
    ctx.set_gpr(6, ctx.gpr[19] + ctx.gpr[6]);
    ctx.fpr[12] = std::bit_cast<float>(rt.memory().aot_load32(ctx.gpr[6] + static_cast<std::uint32_t>(4)));
    { const float fs = ctx.fpr[12]; const float ft = ctx.fpr[25]; if ((std::isinf(fs) && ft == 0.0f) || (std::isinf(ft) && fs == 0.0f)) ctx.set_fpr_bits(13, 0x7FC00000u); else ctx.fpr[13] = fs * ft; }
    ctx.fpr[12] = std::bit_cast<float>(rt.memory().aot_load32(ctx.gpr[6] + static_cast<std::uint32_t>(0)));
    { const float fs = ctx.fpr[12]; const float ft = ctx.fpr[25]; if ((std::isinf(fs) && ft == 0.0f) || (std::isinf(ft) && fs == 0.0f)) ctx.set_fpr_bits(12, 0x7FC00000u); else ctx.fpr[12] = fs * ft; }
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(316), std::bit_cast<std::uint32_t>(ctx.fpr[12]));
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(320), std::bit_cast<std::uint32_t>(ctx.fpr[13]));
    { const float fs = ctx.fpr[12]; const float ft = ctx.fpr[22]; if ((std::isinf(fs) && ft == 0.0f) || (std::isinf(ft) && fs == 0.0f)) ctx.set_fpr_bits(21, 0x7FC00000u); else ctx.fpr[21] = fs * ft; }
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(324), std::bit_cast<std::uint32_t>(ctx.fpr[21]));
    { const float fs = ctx.fpr[13]; const float ft = ctx.fpr[22]; if ((std::isinf(fs) && ft == 0.0f) || (std::isinf(ft) && fs == 0.0f)) ctx.set_fpr_bits(20, 0x7FC00000u); else ctx.fpr[20] = fs * ft; }
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(328), std::bit_cast<std::uint32_t>(ctx.fpr[20]));
    ctx.set_gpr(2, ctx.gpr[19] + ctx.gpr[2]);
    ctx.fpr[12] = std::bit_cast<float>(rt.memory().aot_load32(ctx.gpr[2] + static_cast<std::uint32_t>(4)));
    { const float fs = ctx.fpr[12]; const float ft = ctx.fpr[26]; if ((std::isinf(fs) && ft == 0.0f) || (std::isinf(ft) && fs == 0.0f)) ctx.set_fpr_bits(13, 0x7FC00000u); else ctx.fpr[13] = fs * ft; }
    ctx.fpr[12] = std::bit_cast<float>(rt.memory().aot_load32(ctx.gpr[2] + static_cast<std::uint32_t>(0)));
    { const float fs = ctx.fpr[12]; const float ft = ctx.fpr[26]; if ((std::isinf(fs) && ft == 0.0f) || (std::isinf(ft) && fs == 0.0f)) ctx.set_fpr_bits(12, 0x7FC00000u); else ctx.fpr[12] = fs * ft; }
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(332), std::bit_cast<std::uint32_t>(ctx.fpr[12]));
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(336), std::bit_cast<std::uint32_t>(ctx.fpr[13]));
    { const float fs = ctx.fpr[12]; const float ft = ctx.fpr[22]; if ((std::isinf(fs) && ft == 0.0f) || (std::isinf(ft) && fs == 0.0f)) ctx.set_fpr_bits(19, 0x7FC00000u); else ctx.fpr[19] = fs * ft; }
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(340), std::bit_cast<std::uint32_t>(ctx.fpr[19]));
    { const float fs = ctx.fpr[13]; const float ft = ctx.fpr[22]; if ((std::isinf(fs) && ft == 0.0f) || (std::isinf(ft) && fs == 0.0f)) ctx.set_fpr_bits(18, 0x7FC00000u); else ctx.fpr[18] = fs * ft; }
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(344), std::bit_cast<std::uint32_t>(ctx.fpr[18]));
    ctx.set_gpr(2, ctx.gpr[19] + ctx.gpr[3]);
    ctx.fpr[12] = std::bit_cast<float>(rt.memory().aot_load32(ctx.gpr[2] + static_cast<std::uint32_t>(4)));
    { const float fs = ctx.fpr[12]; const float ft = ctx.fpr[27]; if ((std::isinf(fs) && ft == 0.0f) || (std::isinf(ft) && fs == 0.0f)) ctx.set_fpr_bits(13, 0x7FC00000u); else ctx.fpr[13] = fs * ft; }
    ctx.fpr[12] = std::bit_cast<float>(rt.memory().aot_load32(ctx.gpr[2] + static_cast<std::uint32_t>(0)));
    { const float fs = ctx.fpr[12]; const float ft = ctx.fpr[27]; if ((std::isinf(fs) && ft == 0.0f) || (std::isinf(ft) && fs == 0.0f)) ctx.set_fpr_bits(12, 0x7FC00000u); else ctx.fpr[12] = fs * ft; }
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(348), std::bit_cast<std::uint32_t>(ctx.fpr[12]));
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(352), std::bit_cast<std::uint32_t>(ctx.fpr[13]));
    { const float fs = ctx.fpr[12]; const float ft = ctx.fpr[22]; if ((std::isinf(fs) && ft == 0.0f) || (std::isinf(ft) && fs == 0.0f)) ctx.set_fpr_bits(17, 0x7FC00000u); else ctx.fpr[17] = fs * ft; }
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(356), std::bit_cast<std::uint32_t>(ctx.fpr[17]));
    { const float fs = ctx.fpr[13]; const float ft = ctx.fpr[22]; if ((std::isinf(fs) && ft == 0.0f) || (std::isinf(ft) && fs == 0.0f)) ctx.set_fpr_bits(16, 0x7FC00000u); else ctx.fpr[16] = fs * ft; }
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(360), std::bit_cast<std::uint32_t>(ctx.fpr[16]));
    ctx.set_gpr(2, ctx.gpr[19] + ctx.gpr[4]);
    ctx.fpr[12] = std::bit_cast<float>(rt.memory().aot_load32(ctx.gpr[2] + static_cast<std::uint32_t>(4)));
    { const float fs = ctx.fpr[12]; const float ft = ctx.fpr[24]; if ((std::isinf(fs) && ft == 0.0f) || (std::isinf(ft) && fs == 0.0f)) ctx.set_fpr_bits(13, 0x7FC00000u); else ctx.fpr[13] = fs * ft; }
    ctx.fpr[12] = std::bit_cast<float>(rt.memory().aot_load32(ctx.gpr[2] + static_cast<std::uint32_t>(0)));
    { const float fs = ctx.fpr[12]; const float ft = ctx.fpr[24]; if ((std::isinf(fs) && ft == 0.0f) || (std::isinf(ft) && fs == 0.0f)) ctx.set_fpr_bits(12, 0x7FC00000u); else ctx.fpr[12] = fs * ft; }
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(364), std::bit_cast<std::uint32_t>(ctx.fpr[12]));
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(368), std::bit_cast<std::uint32_t>(ctx.fpr[13]));
    { const float fs = ctx.fpr[12]; const float ft = ctx.fpr[23]; if ((std::isinf(fs) && ft == 0.0f) || (std::isinf(ft) && fs == 0.0f)) ctx.set_fpr_bits(15, 0x7FC00000u); else ctx.fpr[15] = fs * ft; }
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(372), std::bit_cast<std::uint32_t>(ctx.fpr[15]));
    { const float fs = ctx.fpr[13]; const float ft = ctx.fpr[23]; if ((std::isinf(fs) && ft == 0.0f) || (std::isinf(ft) && fs == 0.0f)) ctx.set_fpr_bits(14, 0x7FC00000u); else ctx.fpr[14] = fs * ft; }
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(376), std::bit_cast<std::uint32_t>(ctx.fpr[14]));
    ctx.set_gpr(2, ctx.gpr[19] + ctx.gpr[5]);
    ctx.fpr[12] = std::bit_cast<float>(rt.memory().aot_load32(ctx.gpr[2] + static_cast<std::uint32_t>(4)));
    { const float fs = ctx.fpr[12]; const float ft = ctx.fpr[25]; if ((std::isinf(fs) && ft == 0.0f) || (std::isinf(ft) && fs == 0.0f)) ctx.set_fpr_bits(22, 0x7FC00000u); else ctx.fpr[22] = fs * ft; }
    ctx.fpr[12] = std::bit_cast<float>(rt.memory().aot_load32(ctx.gpr[2] + static_cast<std::uint32_t>(0)));
    { const float fs = ctx.fpr[12]; const float ft = ctx.fpr[25]; if ((std::isinf(fs) && ft == 0.0f) || (std::isinf(ft) && fs == 0.0f)) ctx.set_fpr_bits(12, 0x7FC00000u); else ctx.fpr[12] = fs * ft; }
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(380), std::bit_cast<std::uint32_t>(ctx.fpr[12]));
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(384), std::bit_cast<std::uint32_t>(ctx.fpr[22]));
    { const float fs = ctx.fpr[12]; const float ft = ctx.fpr[23]; if ((std::isinf(fs) && ft == 0.0f) || (std::isinf(ft) && fs == 0.0f)) ctx.set_fpr_bits(13, 0x7FC00000u); else ctx.fpr[13] = fs * ft; }
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(388), std::bit_cast<std::uint32_t>(ctx.fpr[13]));
    { const float fs = ctx.fpr[22]; const float ft = ctx.fpr[23]; if ((std::isinf(fs) && ft == 0.0f) || (std::isinf(ft) && fs == 0.0f)) ctx.set_fpr_bits(12, 0x7FC00000u); else ctx.fpr[12] = fs * ft; }
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(392), std::bit_cast<std::uint32_t>(ctx.fpr[12]));
    ctx.set_gpr(2, ctx.gpr[19] + ctx.gpr[8]);
    ctx.fpr[22] = std::bit_cast<float>(rt.memory().aot_load32(ctx.gpr[2] + static_cast<std::uint32_t>(4)));
    { const float fs = ctx.fpr[22]; const float ft = ctx.fpr[26]; if ((std::isinf(fs) && ft == 0.0f) || (std::isinf(ft) && fs == 0.0f)) ctx.set_fpr_bits(22, 0x7FC00000u); else ctx.fpr[22] = fs * ft; }
    ctx.fpr[24] = std::bit_cast<float>(rt.memory().aot_load32(ctx.gpr[2] + static_cast<std::uint32_t>(0)));
    { const float fs = ctx.fpr[24]; const float ft = ctx.fpr[26]; if ((std::isinf(fs) && ft == 0.0f) || (std::isinf(ft) && fs == 0.0f)) ctx.set_fpr_bits(24, 0x7FC00000u); else ctx.fpr[24] = fs * ft; }
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(396), std::bit_cast<std::uint32_t>(ctx.fpr[24]));
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(400), std::bit_cast<std::uint32_t>(ctx.fpr[22]));
    { const float fs = ctx.fpr[24]; const float ft = ctx.fpr[23]; if ((std::isinf(fs) && ft == 0.0f) || (std::isinf(ft) && fs == 0.0f)) ctx.set_fpr_bits(25, 0x7FC00000u); else ctx.fpr[25] = fs * ft; }
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(404), std::bit_cast<std::uint32_t>(ctx.fpr[25]));
    { const float fs = ctx.fpr[22]; const float ft = ctx.fpr[23]; if ((std::isinf(fs) && ft == 0.0f) || (std::isinf(ft) && fs == 0.0f)) ctx.set_fpr_bits(24, 0x7FC00000u); else ctx.fpr[24] = fs * ft; }
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(408), std::bit_cast<std::uint32_t>(ctx.fpr[24]));
    ctx.fpr[22] = std::bit_cast<float>(rt.memory().aot_load32(ctx.gpr[19] + static_cast<std::uint32_t>(4)));
    ctx.pc = 0x089C4000u; return;
}

void recomp_unit_0111(Runtime &rt, AllegrexContext &ctx) {
    auto aot_mem = rt.memory().aot_fast_view();
    recomp_unit_0111_entry(rt, ctx, 0u, aot_mem);
}

void register_generated_unit_111(Runtime &runtime) {
    runtime.register_generated_unit(111u, 0x089C0000u, 16384u, &recomp_unit_0111, &recomp_unit_0111_entry);
    runtime.register_function(0x089C0000u, &recomp_unit_0111, "recomp_unit_0111");
    runtime.register_function(0x089C000Cu, &recomp_unit_0111, "recomp_unit_0111");
    runtime.register_function(0x089C0024u, &recomp_unit_0111, "recomp_unit_0111");
    runtime.register_function(0x089C0040u, &recomp_unit_0111, "recomp_unit_0111");
    runtime.register_function(0x089C0050u, &recomp_unit_0111, "recomp_unit_0111");
    runtime.register_function(0x089C0064u, &recomp_unit_0111, "recomp_unit_0111");
    runtime.register_function(0x089C0070u, &recomp_unit_0111, "recomp_unit_0111");
    runtime.register_function(0x089C0080u, &recomp_unit_0111, "recomp_unit_0111");
    runtime.register_function(0x089C0098u, &recomp_unit_0111, "recomp_unit_0111");
    runtime.register_function(0x089C00B4u, &recomp_unit_0111, "recomp_unit_0111");
    runtime.register_function(0x089C00C4u, &recomp_unit_0111, "recomp_unit_0111");
    runtime.register_function(0x089C00D8u, &recomp_unit_0111, "recomp_unit_0111");
    runtime.register_function(0x089C00E4u, &recomp_unit_0111, "recomp_unit_0111");
    runtime.register_function(0x089C00F4u, &recomp_unit_0111, "recomp_unit_0111");
    runtime.register_function(0x089C010Cu, &recomp_unit_0111, "recomp_unit_0111");
    runtime.register_function(0x089C0128u, &recomp_unit_0111, "recomp_unit_0111");
    runtime.register_function(0x089C0138u, &recomp_unit_0111, "recomp_unit_0111");
    runtime.register_function(0x089C014Cu, &recomp_unit_0111, "recomp_unit_0111");
    runtime.register_function(0x089C0158u, &recomp_unit_0111, "recomp_unit_0111");
    runtime.register_function(0x089C0164u, &recomp_unit_0111, "recomp_unit_0111");
    runtime.register_function(0x089C0174u, &recomp_unit_0111, "recomp_unit_0111");
    runtime.register_function(0x089C018Cu, &recomp_unit_0111, "recomp_unit_0111");
    runtime.register_function(0x089C01A8u, &recomp_unit_0111, "recomp_unit_0111");
    runtime.register_function(0x089C01B8u, &recomp_unit_0111, "recomp_unit_0111");
    runtime.register_function(0x089C01CCu, &recomp_unit_0111, "recomp_unit_0111");
    runtime.register_function(0x089C01DCu, &recomp_unit_0111, "recomp_unit_0111");
    runtime.register_function(0x089C01ECu, &recomp_unit_0111, "recomp_unit_0111");
    runtime.register_function(0x089C0204u, &recomp_unit_0111, "recomp_unit_0111");
    runtime.register_function(0x089C0220u, &recomp_unit_0111, "recomp_unit_0111");
    runtime.register_function(0x089C0230u, &recomp_unit_0111, "recomp_unit_0111");
    runtime.register_function(0x089C0244u, &recomp_unit_0111, "recomp_unit_0111");
    runtime.register_function(0x089C0250u, &recomp_unit_0111, "recomp_unit_0111");
    runtime.register_function(0x089C0260u, &recomp_unit_0111, "recomp_unit_0111");
    runtime.register_function(0x089C0278u, &recomp_unit_0111, "recomp_unit_0111");
    runtime.register_function(0x089C0294u, &recomp_unit_0111, "recomp_unit_0111");
    runtime.register_function(0x089C02A4u, &recomp_unit_0111, "recomp_unit_0111");
    runtime.register_function(0x089C02B8u, &recomp_unit_0111, "recomp_unit_0111");
    runtime.register_function(0x089C02C4u, &recomp_unit_0111, "recomp_unit_0111");
    runtime.register_function(0x089C02D4u, &recomp_unit_0111, "recomp_unit_0111");
    runtime.register_function(0x089C02ECu, &recomp_unit_0111, "recomp_unit_0111");
    runtime.register_function(0x089C0308u, &recomp_unit_0111, "recomp_unit_0111");
    runtime.register_function(0x089C0318u, &recomp_unit_0111, "recomp_unit_0111");
    runtime.register_function(0x089C032Cu, &recomp_unit_0111, "recomp_unit_0111");
    runtime.register_function(0x089C0338u, &recomp_unit_0111, "recomp_unit_0111");
    runtime.register_function(0x089C035Cu, &recomp_unit_0111, "recomp_unit_0111");
    runtime.register_function(0x089C036Cu, &recomp_unit_0111, "recomp_unit_0111");
    runtime.register_function(0x089C0384u, &recomp_unit_0111, "recomp_unit_0111");
    runtime.register_function(0x089C03A0u, &recomp_unit_0111, "recomp_unit_0111");
    runtime.register_function(0x089C03B0u, &recomp_unit_0111, "recomp_unit_0111");
    runtime.register_function(0x089C03C4u, &recomp_unit_0111, "recomp_unit_0111");
    runtime.register_function(0x089C03D4u, &recomp_unit_0111, "recomp_unit_0111");
    runtime.register_function(0x089C03E4u, &recomp_unit_0111, "recomp_unit_0111");
    runtime.register_function(0x089C03FCu, &recomp_unit_0111, "recomp_unit_0111");
    runtime.register_function(0x089C0418u, &recomp_unit_0111, "recomp_unit_0111");
    runtime.register_function(0x089C0428u, &recomp_unit_0111, "recomp_unit_0111");
    runtime.register_function(0x089C043Cu, &recomp_unit_0111, "recomp_unit_0111");
    runtime.register_function(0x089C0448u, &recomp_unit_0111, "recomp_unit_0111");
    runtime.register_function(0x089C0458u, &recomp_unit_0111, "recomp_unit_0111");
    runtime.register_function(0x089C0470u, &recomp_unit_0111, "recomp_unit_0111");
    runtime.register_function(0x089C048Cu, &recomp_unit_0111, "recomp_unit_0111");
    runtime.register_function(0x089C049Cu, &recomp_unit_0111, "recomp_unit_0111");
    runtime.register_function(0x089C04B0u, &recomp_unit_0111, "recomp_unit_0111");
    runtime.register_function(0x089C04BCu, &recomp_unit_0111, "recomp_unit_0111");
    runtime.register_function(0x089C04CCu, &recomp_unit_0111, "recomp_unit_0111");
    runtime.register_function(0x089C04E4u, &recomp_unit_0111, "recomp_unit_0111");
    runtime.register_function(0x089C0500u, &recomp_unit_0111, "recomp_unit_0111");
    runtime.register_function(0x089C0510u, &recomp_unit_0111, "recomp_unit_0111");
    runtime.register_function(0x089C0524u, &recomp_unit_0111, "recomp_unit_0111");
    runtime.register_function(0x089C0530u, &recomp_unit_0111, "recomp_unit_0111");
    runtime.register_function(0x089C053Cu, &recomp_unit_0111, "recomp_unit_0111");
    runtime.register_function(0x089C054Cu, &recomp_unit_0111, "recomp_unit_0111");
    runtime.register_function(0x089C0564u, &recomp_unit_0111, "recomp_unit_0111");
    runtime.register_function(0x089C0580u, &recomp_unit_0111, "recomp_unit_0111");
    runtime.register_function(0x089C0590u, &recomp_unit_0111, "recomp_unit_0111");
    runtime.register_function(0x089C05A4u, &recomp_unit_0111, "recomp_unit_0111");
    runtime.register_function(0x089C05B4u, &recomp_unit_0111, "recomp_unit_0111");
    runtime.register_function(0x089C05C4u, &recomp_unit_0111, "recomp_unit_0111");
    runtime.register_function(0x089C05DCu, &recomp_unit_0111, "recomp_unit_0111");
    runtime.register_function(0x089C05F8u, &recomp_unit_0111, "recomp_unit_0111");
    runtime.register_function(0x089C0608u, &recomp_unit_0111, "recomp_unit_0111");
    runtime.register_function(0x089C061Cu, &recomp_unit_0111, "recomp_unit_0111");
    runtime.register_function(0x089C0628u, &recomp_unit_0111, "recomp_unit_0111");
    runtime.register_function(0x089C0638u, &recomp_unit_0111, "recomp_unit_0111");
    runtime.register_function(0x089C0650u, &recomp_unit_0111, "recomp_unit_0111");
    runtime.register_function(0x089C066Cu, &recomp_unit_0111, "recomp_unit_0111");
    runtime.register_function(0x089C067Cu, &recomp_unit_0111, "recomp_unit_0111");
    runtime.register_function(0x089C0690u, &recomp_unit_0111, "recomp_unit_0111");
    runtime.register_function(0x089C069Cu, &recomp_unit_0111, "recomp_unit_0111");
    runtime.register_function(0x089C06ACu, &recomp_unit_0111, "recomp_unit_0111");
    runtime.register_function(0x089C06C4u, &recomp_unit_0111, "recomp_unit_0111");
    runtime.register_function(0x089C06E0u, &recomp_unit_0111, "recomp_unit_0111");
    runtime.register_function(0x089C06F0u, &recomp_unit_0111, "recomp_unit_0111");
    runtime.register_function(0x089C0704u, &recomp_unit_0111, "recomp_unit_0111");
    runtime.register_function(0x089C0710u, &recomp_unit_0111, "recomp_unit_0111");
    runtime.register_function(0x089C0730u, &recomp_unit_0111, "recomp_unit_0111");
    runtime.register_function(0x089C0740u, &recomp_unit_0111, "recomp_unit_0111");
    runtime.register_function(0x089C0758u, &recomp_unit_0111, "recomp_unit_0111");
    runtime.register_function(0x089C0774u, &recomp_unit_0111, "recomp_unit_0111");
    runtime.register_function(0x089C0784u, &recomp_unit_0111, "recomp_unit_0111");
    runtime.register_function(0x089C0798u, &recomp_unit_0111, "recomp_unit_0111");
    runtime.register_function(0x089C07A8u, &recomp_unit_0111, "recomp_unit_0111");
    runtime.register_function(0x089C07B8u, &recomp_unit_0111, "recomp_unit_0111");
    runtime.register_function(0x089C07D0u, &recomp_unit_0111, "recomp_unit_0111");
    runtime.register_function(0x089C07ECu, &recomp_unit_0111, "recomp_unit_0111");
    runtime.register_function(0x089C07FCu, &recomp_unit_0111, "recomp_unit_0111");
    runtime.register_function(0x089C0810u, &recomp_unit_0111, "recomp_unit_0111");
    runtime.register_function(0x089C081Cu, &recomp_unit_0111, "recomp_unit_0111");
    runtime.register_function(0x089C082Cu, &recomp_unit_0111, "recomp_unit_0111");
    runtime.register_function(0x089C0844u, &recomp_unit_0111, "recomp_unit_0111");
    runtime.register_function(0x089C0860u, &recomp_unit_0111, "recomp_unit_0111");
    runtime.register_function(0x089C0870u, &recomp_unit_0111, "recomp_unit_0111");
    runtime.register_function(0x089C0884u, &recomp_unit_0111, "recomp_unit_0111");
    runtime.register_function(0x089C0890u, &recomp_unit_0111, "recomp_unit_0111");
    runtime.register_function(0x089C08A0u, &recomp_unit_0111, "recomp_unit_0111");
    runtime.register_function(0x089C08B8u, &recomp_unit_0111, "recomp_unit_0111");
    runtime.register_function(0x089C08D4u, &recomp_unit_0111, "recomp_unit_0111");
    runtime.register_function(0x089C08E4u, &recomp_unit_0111, "recomp_unit_0111");
    runtime.register_function(0x089C08F8u, &recomp_unit_0111, "recomp_unit_0111");
    runtime.register_function(0x089C0904u, &recomp_unit_0111, "recomp_unit_0111");
    runtime.register_function(0x089C0910u, &recomp_unit_0111, "recomp_unit_0111");
    runtime.register_function(0x089C0920u, &recomp_unit_0111, "recomp_unit_0111");
    runtime.register_function(0x089C0938u, &recomp_unit_0111, "recomp_unit_0111");
    runtime.register_function(0x089C0954u, &recomp_unit_0111, "recomp_unit_0111");
    runtime.register_function(0x089C0964u, &recomp_unit_0111, "recomp_unit_0111");
    runtime.register_function(0x089C0978u, &recomp_unit_0111, "recomp_unit_0111");
    runtime.register_function(0x089C0988u, &recomp_unit_0111, "recomp_unit_0111");
    runtime.register_function(0x089C0998u, &recomp_unit_0111, "recomp_unit_0111");
    runtime.register_function(0x089C09B0u, &recomp_unit_0111, "recomp_unit_0111");
    runtime.register_function(0x089C09CCu, &recomp_unit_0111, "recomp_unit_0111");
    runtime.register_function(0x089C09DCu, &recomp_unit_0111, "recomp_unit_0111");
    runtime.register_function(0x089C09F0u, &recomp_unit_0111, "recomp_unit_0111");
    runtime.register_function(0x089C09FCu, &recomp_unit_0111, "recomp_unit_0111");
    runtime.register_function(0x089C0A0Cu, &recomp_unit_0111, "recomp_unit_0111");
    runtime.register_function(0x089C0A24u, &recomp_unit_0111, "recomp_unit_0111");
    runtime.register_function(0x089C0A40u, &recomp_unit_0111, "recomp_unit_0111");
    runtime.register_function(0x089C0A50u, &recomp_unit_0111, "recomp_unit_0111");
    runtime.register_function(0x089C0A64u, &recomp_unit_0111, "recomp_unit_0111");
    runtime.register_function(0x089C0A70u, &recomp_unit_0111, "recomp_unit_0111");
    runtime.register_function(0x089C0A80u, &recomp_unit_0111, "recomp_unit_0111");
    runtime.register_function(0x089C0A98u, &recomp_unit_0111, "recomp_unit_0111");
    runtime.register_function(0x089C0AB4u, &recomp_unit_0111, "recomp_unit_0111");
    runtime.register_function(0x089C0AC4u, &recomp_unit_0111, "recomp_unit_0111");
    runtime.register_function(0x089C0AD8u, &recomp_unit_0111, "recomp_unit_0111");
    runtime.register_function(0x089C0AE4u, &recomp_unit_0111, "recomp_unit_0111");
    runtime.register_function(0x089C0B08u, &recomp_unit_0111, "recomp_unit_0111");
    runtime.register_function(0x089C0B18u, &recomp_unit_0111, "recomp_unit_0111");
    runtime.register_function(0x089C0B30u, &recomp_unit_0111, "recomp_unit_0111");
    runtime.register_function(0x089C0B4Cu, &recomp_unit_0111, "recomp_unit_0111");
    runtime.register_function(0x089C0B5Cu, &recomp_unit_0111, "recomp_unit_0111");
    runtime.register_function(0x089C0B70u, &recomp_unit_0111, "recomp_unit_0111");
    runtime.register_function(0x089C0B80u, &recomp_unit_0111, "recomp_unit_0111");
    runtime.register_function(0x089C0B90u, &recomp_unit_0111, "recomp_unit_0111");
    runtime.register_function(0x089C0BA8u, &recomp_unit_0111, "recomp_unit_0111");
    runtime.register_function(0x089C0BC4u, &recomp_unit_0111, "recomp_unit_0111");
    runtime.register_function(0x089C0BD4u, &recomp_unit_0111, "recomp_unit_0111");
    runtime.register_function(0x089C0BE8u, &recomp_unit_0111, "recomp_unit_0111");
    runtime.register_function(0x089C0BF4u, &recomp_unit_0111, "recomp_unit_0111");
    runtime.register_function(0x089C0C04u, &recomp_unit_0111, "recomp_unit_0111");
    runtime.register_function(0x089C0C1Cu, &recomp_unit_0111, "recomp_unit_0111");
    runtime.register_function(0x089C0C38u, &recomp_unit_0111, "recomp_unit_0111");
    runtime.register_function(0x089C0C48u, &recomp_unit_0111, "recomp_unit_0111");
    runtime.register_function(0x089C0C5Cu, &recomp_unit_0111, "recomp_unit_0111");
    runtime.register_function(0x089C0C68u, &recomp_unit_0111, "recomp_unit_0111");
    runtime.register_function(0x089C0C78u, &recomp_unit_0111, "recomp_unit_0111");
    runtime.register_function(0x089C0C90u, &recomp_unit_0111, "recomp_unit_0111");
    runtime.register_function(0x089C0CACu, &recomp_unit_0111, "recomp_unit_0111");
    runtime.register_function(0x089C0CBCu, &recomp_unit_0111, "recomp_unit_0111");
    runtime.register_function(0x089C0CD0u, &recomp_unit_0111, "recomp_unit_0111");
    runtime.register_function(0x089C0CDCu, &recomp_unit_0111, "recomp_unit_0111");
    runtime.register_function(0x089C0CE8u, &recomp_unit_0111, "recomp_unit_0111");
    runtime.register_function(0x089C0CF8u, &recomp_unit_0111, "recomp_unit_0111");
    runtime.register_function(0x089C0D10u, &recomp_unit_0111, "recomp_unit_0111");
    runtime.register_function(0x089C0D2Cu, &recomp_unit_0111, "recomp_unit_0111");
    runtime.register_function(0x089C0D3Cu, &recomp_unit_0111, "recomp_unit_0111");
    runtime.register_function(0x089C0D50u, &recomp_unit_0111, "recomp_unit_0111");
    runtime.register_function(0x089C0D60u, &recomp_unit_0111, "recomp_unit_0111");
    runtime.register_function(0x089C0D70u, &recomp_unit_0111, "recomp_unit_0111");
    runtime.register_function(0x089C0D88u, &recomp_unit_0111, "recomp_unit_0111");
    runtime.register_function(0x089C0DA4u, &recomp_unit_0111, "recomp_unit_0111");
    runtime.register_function(0x089C0DB4u, &recomp_unit_0111, "recomp_unit_0111");
    runtime.register_function(0x089C0DC8u, &recomp_unit_0111, "recomp_unit_0111");
    runtime.register_function(0x089C0DD4u, &recomp_unit_0111, "recomp_unit_0111");
    runtime.register_function(0x089C0DE4u, &recomp_unit_0111, "recomp_unit_0111");
    runtime.register_function(0x089C0DFCu, &recomp_unit_0111, "recomp_unit_0111");
    runtime.register_function(0x089C0E18u, &recomp_unit_0111, "recomp_unit_0111");
    runtime.register_function(0x089C0E28u, &recomp_unit_0111, "recomp_unit_0111");
    runtime.register_function(0x089C0E3Cu, &recomp_unit_0111, "recomp_unit_0111");
    runtime.register_function(0x089C0E48u, &recomp_unit_0111, "recomp_unit_0111");
    runtime.register_function(0x089C0E58u, &recomp_unit_0111, "recomp_unit_0111");
    runtime.register_function(0x089C0E70u, &recomp_unit_0111, "recomp_unit_0111");
    runtime.register_function(0x089C0E8Cu, &recomp_unit_0111, "recomp_unit_0111");
    runtime.register_function(0x089C0E9Cu, &recomp_unit_0111, "recomp_unit_0111");
    runtime.register_function(0x089C0EB0u, &recomp_unit_0111, "recomp_unit_0111");
    runtime.register_function(0x089C0EBCu, &recomp_unit_0111, "recomp_unit_0111");
    runtime.register_function(0x089C0EDCu, &recomp_unit_0111, "recomp_unit_0111");
    runtime.register_function(0x089C0EECu, &recomp_unit_0111, "recomp_unit_0111");
    runtime.register_function(0x089C0F04u, &recomp_unit_0111, "recomp_unit_0111");
    runtime.register_function(0x089C0F20u, &recomp_unit_0111, "recomp_unit_0111");
    runtime.register_function(0x089C0F30u, &recomp_unit_0111, "recomp_unit_0111");
    runtime.register_function(0x089C0F44u, &recomp_unit_0111, "recomp_unit_0111");
    runtime.register_function(0x089C0F54u, &recomp_unit_0111, "recomp_unit_0111");
    runtime.register_function(0x089C0F64u, &recomp_unit_0111, "recomp_unit_0111");
    runtime.register_function(0x089C0F7Cu, &recomp_unit_0111, "recomp_unit_0111");
    runtime.register_function(0x089C0F98u, &recomp_unit_0111, "recomp_unit_0111");
    runtime.register_function(0x089C0FA8u, &recomp_unit_0111, "recomp_unit_0111");
    runtime.register_function(0x089C0FBCu, &recomp_unit_0111, "recomp_unit_0111");
    runtime.register_function(0x089C0FC8u, &recomp_unit_0111, "recomp_unit_0111");
    runtime.register_function(0x089C0FD8u, &recomp_unit_0111, "recomp_unit_0111");
    runtime.register_function(0x089C0FF0u, &recomp_unit_0111, "recomp_unit_0111");
    runtime.register_function(0x089C100Cu, &recomp_unit_0111, "recomp_unit_0111");
    runtime.register_function(0x089C101Cu, &recomp_unit_0111, "recomp_unit_0111");
    runtime.register_function(0x089C1030u, &recomp_unit_0111, "recomp_unit_0111");
    runtime.register_function(0x089C103Cu, &recomp_unit_0111, "recomp_unit_0111");
    runtime.register_function(0x089C104Cu, &recomp_unit_0111, "recomp_unit_0111");
    runtime.register_function(0x089C1064u, &recomp_unit_0111, "recomp_unit_0111");
    runtime.register_function(0x089C1080u, &recomp_unit_0111, "recomp_unit_0111");
    runtime.register_function(0x089C1090u, &recomp_unit_0111, "recomp_unit_0111");
    runtime.register_function(0x089C10A4u, &recomp_unit_0111, "recomp_unit_0111");
    runtime.register_function(0x089C10B0u, &recomp_unit_0111, "recomp_unit_0111");
    runtime.register_function(0x089C10BCu, &recomp_unit_0111, "recomp_unit_0111");
    runtime.register_function(0x089C10CCu, &recomp_unit_0111, "recomp_unit_0111");
    runtime.register_function(0x089C10E4u, &recomp_unit_0111, "recomp_unit_0111");
    runtime.register_function(0x089C1100u, &recomp_unit_0111, "recomp_unit_0111");
    runtime.register_function(0x089C1110u, &recomp_unit_0111, "recomp_unit_0111");
    runtime.register_function(0x089C1124u, &recomp_unit_0111, "recomp_unit_0111");
    runtime.register_function(0x089C1134u, &recomp_unit_0111, "recomp_unit_0111");
    runtime.register_function(0x089C1144u, &recomp_unit_0111, "recomp_unit_0111");
    runtime.register_function(0x089C115Cu, &recomp_unit_0111, "recomp_unit_0111");
    runtime.register_function(0x089C1178u, &recomp_unit_0111, "recomp_unit_0111");
    runtime.register_function(0x089C1188u, &recomp_unit_0111, "recomp_unit_0111");
    runtime.register_function(0x089C119Cu, &recomp_unit_0111, "recomp_unit_0111");
    runtime.register_function(0x089C11A8u, &recomp_unit_0111, "recomp_unit_0111");
    runtime.register_function(0x089C11B8u, &recomp_unit_0111, "recomp_unit_0111");
    runtime.register_function(0x089C11D0u, &recomp_unit_0111, "recomp_unit_0111");
    runtime.register_function(0x089C11ECu, &recomp_unit_0111, "recomp_unit_0111");
    runtime.register_function(0x089C11FCu, &recomp_unit_0111, "recomp_unit_0111");
    runtime.register_function(0x089C1210u, &recomp_unit_0111, "recomp_unit_0111");
    runtime.register_function(0x089C121Cu, &recomp_unit_0111, "recomp_unit_0111");
    runtime.register_function(0x089C122Cu, &recomp_unit_0111, "recomp_unit_0111");
    runtime.register_function(0x089C1244u, &recomp_unit_0111, "recomp_unit_0111");
    runtime.register_function(0x089C1260u, &recomp_unit_0111, "recomp_unit_0111");
    runtime.register_function(0x089C1270u, &recomp_unit_0111, "recomp_unit_0111");
    runtime.register_function(0x089C1284u, &recomp_unit_0111, "recomp_unit_0111");
    runtime.register_function(0x089C1290u, &recomp_unit_0111, "recomp_unit_0111");
    runtime.register_function(0x089C12ACu, &recomp_unit_0111, "recomp_unit_0111");
    runtime.register_function(0x089C12BCu, &recomp_unit_0111, "recomp_unit_0111");
    runtime.register_function(0x089C12D4u, &recomp_unit_0111, "recomp_unit_0111");
    runtime.register_function(0x089C12F0u, &recomp_unit_0111, "recomp_unit_0111");
    runtime.register_function(0x089C1300u, &recomp_unit_0111, "recomp_unit_0111");
    runtime.register_function(0x089C1314u, &recomp_unit_0111, "recomp_unit_0111");
    runtime.register_function(0x089C1324u, &recomp_unit_0111, "recomp_unit_0111");
    runtime.register_function(0x089C1334u, &recomp_unit_0111, "recomp_unit_0111");
    runtime.register_function(0x089C134Cu, &recomp_unit_0111, "recomp_unit_0111");
    runtime.register_function(0x089C1368u, &recomp_unit_0111, "recomp_unit_0111");
    runtime.register_function(0x089C1378u, &recomp_unit_0111, "recomp_unit_0111");
    runtime.register_function(0x089C138Cu, &recomp_unit_0111, "recomp_unit_0111");
    runtime.register_function(0x089C1398u, &recomp_unit_0111, "recomp_unit_0111");
    runtime.register_function(0x089C13A8u, &recomp_unit_0111, "recomp_unit_0111");
    runtime.register_function(0x089C13C0u, &recomp_unit_0111, "recomp_unit_0111");
    runtime.register_function(0x089C13DCu, &recomp_unit_0111, "recomp_unit_0111");
    runtime.register_function(0x089C13ECu, &recomp_unit_0111, "recomp_unit_0111");
    runtime.register_function(0x089C1400u, &recomp_unit_0111, "recomp_unit_0111");
    runtime.register_function(0x089C140Cu, &recomp_unit_0111, "recomp_unit_0111");
    runtime.register_function(0x089C141Cu, &recomp_unit_0111, "recomp_unit_0111");
    runtime.register_function(0x089C1434u, &recomp_unit_0111, "recomp_unit_0111");
    runtime.register_function(0x089C1450u, &recomp_unit_0111, "recomp_unit_0111");
    runtime.register_function(0x089C1460u, &recomp_unit_0111, "recomp_unit_0111");
    runtime.register_function(0x089C1474u, &recomp_unit_0111, "recomp_unit_0111");
    runtime.register_function(0x089C1480u, &recomp_unit_0111, "recomp_unit_0111");
    runtime.register_function(0x089C148Cu, &recomp_unit_0111, "recomp_unit_0111");
    runtime.register_function(0x089C149Cu, &recomp_unit_0111, "recomp_unit_0111");
    runtime.register_function(0x089C14B4u, &recomp_unit_0111, "recomp_unit_0111");
    runtime.register_function(0x089C14D0u, &recomp_unit_0111, "recomp_unit_0111");
    runtime.register_function(0x089C14E0u, &recomp_unit_0111, "recomp_unit_0111");
    runtime.register_function(0x089C14F4u, &recomp_unit_0111, "recomp_unit_0111");
    runtime.register_function(0x089C1504u, &recomp_unit_0111, "recomp_unit_0111");
    runtime.register_function(0x089C1514u, &recomp_unit_0111, "recomp_unit_0111");
    runtime.register_function(0x089C152Cu, &recomp_unit_0111, "recomp_unit_0111");
    runtime.register_function(0x089C1548u, &recomp_unit_0111, "recomp_unit_0111");
    runtime.register_function(0x089C1558u, &recomp_unit_0111, "recomp_unit_0111");
    runtime.register_function(0x089C156Cu, &recomp_unit_0111, "recomp_unit_0111");
    runtime.register_function(0x089C1578u, &recomp_unit_0111, "recomp_unit_0111");
    runtime.register_function(0x089C1588u, &recomp_unit_0111, "recomp_unit_0111");
    runtime.register_function(0x089C15A0u, &recomp_unit_0111, "recomp_unit_0111");
    runtime.register_function(0x089C15BCu, &recomp_unit_0111, "recomp_unit_0111");
    runtime.register_function(0x089C15CCu, &recomp_unit_0111, "recomp_unit_0111");
    runtime.register_function(0x089C15E0u, &recomp_unit_0111, "recomp_unit_0111");
    runtime.register_function(0x089C15ECu, &recomp_unit_0111, "recomp_unit_0111");
    runtime.register_function(0x089C15FCu, &recomp_unit_0111, "recomp_unit_0111");
    runtime.register_function(0x089C1614u, &recomp_unit_0111, "recomp_unit_0111");
    runtime.register_function(0x089C1630u, &recomp_unit_0111, "recomp_unit_0111");
    runtime.register_function(0x089C1640u, &recomp_unit_0111, "recomp_unit_0111");
    runtime.register_function(0x089C1654u, &recomp_unit_0111, "recomp_unit_0111");
    runtime.register_function(0x089C1660u, &recomp_unit_0111, "recomp_unit_0111");
    runtime.register_function(0x089C1678u, &recomp_unit_0111, "recomp_unit_0111");
    runtime.register_function(0x089C1688u, &recomp_unit_0111, "recomp_unit_0111");
    runtime.register_function(0x089C16A0u, &recomp_unit_0111, "recomp_unit_0111");
    runtime.register_function(0x089C16BCu, &recomp_unit_0111, "recomp_unit_0111");
    runtime.register_function(0x089C16CCu, &recomp_unit_0111, "recomp_unit_0111");
    runtime.register_function(0x089C16E0u, &recomp_unit_0111, "recomp_unit_0111");
    runtime.register_function(0x089C16F0u, &recomp_unit_0111, "recomp_unit_0111");
    runtime.register_function(0x089C1700u, &recomp_unit_0111, "recomp_unit_0111");
    runtime.register_function(0x089C1718u, &recomp_unit_0111, "recomp_unit_0111");
    runtime.register_function(0x089C1734u, &recomp_unit_0111, "recomp_unit_0111");
    runtime.register_function(0x089C1744u, &recomp_unit_0111, "recomp_unit_0111");
    runtime.register_function(0x089C1758u, &recomp_unit_0111, "recomp_unit_0111");
    runtime.register_function(0x089C1764u, &recomp_unit_0111, "recomp_unit_0111");
    runtime.register_function(0x089C1774u, &recomp_unit_0111, "recomp_unit_0111");
    runtime.register_function(0x089C178Cu, &recomp_unit_0111, "recomp_unit_0111");
    runtime.register_function(0x089C17A8u, &recomp_unit_0111, "recomp_unit_0111");
    runtime.register_function(0x089C17B8u, &recomp_unit_0111, "recomp_unit_0111");
    runtime.register_function(0x089C17CCu, &recomp_unit_0111, "recomp_unit_0111");
    runtime.register_function(0x089C17D8u, &recomp_unit_0111, "recomp_unit_0111");
    runtime.register_function(0x089C17E8u, &recomp_unit_0111, "recomp_unit_0111");
    runtime.register_function(0x089C1800u, &recomp_unit_0111, "recomp_unit_0111");
    runtime.register_function(0x089C181Cu, &recomp_unit_0111, "recomp_unit_0111");
    runtime.register_function(0x089C182Cu, &recomp_unit_0111, "recomp_unit_0111");
    runtime.register_function(0x089C1840u, &recomp_unit_0111, "recomp_unit_0111");
    runtime.register_function(0x089C184Cu, &recomp_unit_0111, "recomp_unit_0111");
    runtime.register_function(0x089C1858u, &recomp_unit_0111, "recomp_unit_0111");
    runtime.register_function(0x089C1868u, &recomp_unit_0111, "recomp_unit_0111");
    runtime.register_function(0x089C1880u, &recomp_unit_0111, "recomp_unit_0111");
    runtime.register_function(0x089C189Cu, &recomp_unit_0111, "recomp_unit_0111");
    runtime.register_function(0x089C18ACu, &recomp_unit_0111, "recomp_unit_0111");
    runtime.register_function(0x089C18C0u, &recomp_unit_0111, "recomp_unit_0111");
    runtime.register_function(0x089C18D0u, &recomp_unit_0111, "recomp_unit_0111");
    runtime.register_function(0x089C18E0u, &recomp_unit_0111, "recomp_unit_0111");
    runtime.register_function(0x089C18F8u, &recomp_unit_0111, "recomp_unit_0111");
    runtime.register_function(0x089C1914u, &recomp_unit_0111, "recomp_unit_0111");
    runtime.register_function(0x089C1924u, &recomp_unit_0111, "recomp_unit_0111");
    runtime.register_function(0x089C1938u, &recomp_unit_0111, "recomp_unit_0111");
    runtime.register_function(0x089C1944u, &recomp_unit_0111, "recomp_unit_0111");
    runtime.register_function(0x089C1954u, &recomp_unit_0111, "recomp_unit_0111");
    runtime.register_function(0x089C196Cu, &recomp_unit_0111, "recomp_unit_0111");
    runtime.register_function(0x089C1988u, &recomp_unit_0111, "recomp_unit_0111");
    runtime.register_function(0x089C1998u, &recomp_unit_0111, "recomp_unit_0111");
    runtime.register_function(0x089C19ACu, &recomp_unit_0111, "recomp_unit_0111");
    runtime.register_function(0x089C19B8u, &recomp_unit_0111, "recomp_unit_0111");
    runtime.register_function(0x089C19C8u, &recomp_unit_0111, "recomp_unit_0111");
    runtime.register_function(0x089C19E0u, &recomp_unit_0111, "recomp_unit_0111");
    runtime.register_function(0x089C19FCu, &recomp_unit_0111, "recomp_unit_0111");
    runtime.register_function(0x089C1A0Cu, &recomp_unit_0111, "recomp_unit_0111");
    runtime.register_function(0x089C1A20u, &recomp_unit_0111, "recomp_unit_0111");
    runtime.register_function(0x089C1A2Cu, &recomp_unit_0111, "recomp_unit_0111");
    runtime.register_function(0x089C1A48u, &recomp_unit_0111, "recomp_unit_0111");
    runtime.register_function(0x089C1A58u, &recomp_unit_0111, "recomp_unit_0111");
    runtime.register_function(0x089C1A70u, &recomp_unit_0111, "recomp_unit_0111");
    runtime.register_function(0x089C1A8Cu, &recomp_unit_0111, "recomp_unit_0111");
    runtime.register_function(0x089C1A9Cu, &recomp_unit_0111, "recomp_unit_0111");
    runtime.register_function(0x089C1AB0u, &recomp_unit_0111, "recomp_unit_0111");
    runtime.register_function(0x089C1AC0u, &recomp_unit_0111, "recomp_unit_0111");
    runtime.register_function(0x089C1AD0u, &recomp_unit_0111, "recomp_unit_0111");
    runtime.register_function(0x089C1AE8u, &recomp_unit_0111, "recomp_unit_0111");
    runtime.register_function(0x089C1B04u, &recomp_unit_0111, "recomp_unit_0111");
    runtime.register_function(0x089C1B14u, &recomp_unit_0111, "recomp_unit_0111");
    runtime.register_function(0x089C1B28u, &recomp_unit_0111, "recomp_unit_0111");
    runtime.register_function(0x089C1B34u, &recomp_unit_0111, "recomp_unit_0111");
    runtime.register_function(0x089C1B44u, &recomp_unit_0111, "recomp_unit_0111");
    runtime.register_function(0x089C1B5Cu, &recomp_unit_0111, "recomp_unit_0111");
    runtime.register_function(0x089C1B78u, &recomp_unit_0111, "recomp_unit_0111");
    runtime.register_function(0x089C1B88u, &recomp_unit_0111, "recomp_unit_0111");
    runtime.register_function(0x089C1B9Cu, &recomp_unit_0111, "recomp_unit_0111");
    runtime.register_function(0x089C1BA8u, &recomp_unit_0111, "recomp_unit_0111");
    runtime.register_function(0x089C1BB8u, &recomp_unit_0111, "recomp_unit_0111");
    runtime.register_function(0x089C1BD0u, &recomp_unit_0111, "recomp_unit_0111");
    runtime.register_function(0x089C1BECu, &recomp_unit_0111, "recomp_unit_0111");
    runtime.register_function(0x089C1BFCu, &recomp_unit_0111, "recomp_unit_0111");
    runtime.register_function(0x089C1C10u, &recomp_unit_0111, "recomp_unit_0111");
    runtime.register_function(0x089C1C1Cu, &recomp_unit_0111, "recomp_unit_0111");
    runtime.register_function(0x089C1C28u, &recomp_unit_0111, "recomp_unit_0111");
    runtime.register_function(0x089C1C38u, &recomp_unit_0111, "recomp_unit_0111");
    runtime.register_function(0x089C1C50u, &recomp_unit_0111, "recomp_unit_0111");
    runtime.register_function(0x089C1C6Cu, &recomp_unit_0111, "recomp_unit_0111");
    runtime.register_function(0x089C1C7Cu, &recomp_unit_0111, "recomp_unit_0111");
    runtime.register_function(0x089C1C90u, &recomp_unit_0111, "recomp_unit_0111");
    runtime.register_function(0x089C1CA0u, &recomp_unit_0111, "recomp_unit_0111");
    runtime.register_function(0x089C1CB0u, &recomp_unit_0111, "recomp_unit_0111");
    runtime.register_function(0x089C1CC8u, &recomp_unit_0111, "recomp_unit_0111");
    runtime.register_function(0x089C1CE4u, &recomp_unit_0111, "recomp_unit_0111");
    runtime.register_function(0x089C1CF4u, &recomp_unit_0111, "recomp_unit_0111");
    runtime.register_function(0x089C1D08u, &recomp_unit_0111, "recomp_unit_0111");
    runtime.register_function(0x089C1D14u, &recomp_unit_0111, "recomp_unit_0111");
    runtime.register_function(0x089C1D24u, &recomp_unit_0111, "recomp_unit_0111");
    runtime.register_function(0x089C1D3Cu, &recomp_unit_0111, "recomp_unit_0111");
    runtime.register_function(0x089C1D58u, &recomp_unit_0111, "recomp_unit_0111");
    runtime.register_function(0x089C1D68u, &recomp_unit_0111, "recomp_unit_0111");
    runtime.register_function(0x089C1D7Cu, &recomp_unit_0111, "recomp_unit_0111");
    runtime.register_function(0x089C1D88u, &recomp_unit_0111, "recomp_unit_0111");
    runtime.register_function(0x089C1D98u, &recomp_unit_0111, "recomp_unit_0111");
    runtime.register_function(0x089C1DB0u, &recomp_unit_0111, "recomp_unit_0111");
    runtime.register_function(0x089C1DCCu, &recomp_unit_0111, "recomp_unit_0111");
    runtime.register_function(0x089C1DDCu, &recomp_unit_0111, "recomp_unit_0111");
    runtime.register_function(0x089C1DF0u, &recomp_unit_0111, "recomp_unit_0111");
    runtime.register_function(0x089C1DFCu, &recomp_unit_0111, "recomp_unit_0111");
    runtime.register_function(0x089C1E1Cu, &recomp_unit_0111, "recomp_unit_0111");
    runtime.register_function(0x089C1E2Cu, &recomp_unit_0111, "recomp_unit_0111");
    runtime.register_function(0x089C1E44u, &recomp_unit_0111, "recomp_unit_0111");
    runtime.register_function(0x089C1E60u, &recomp_unit_0111, "recomp_unit_0111");
    runtime.register_function(0x089C1E70u, &recomp_unit_0111, "recomp_unit_0111");
    runtime.register_function(0x089C1E84u, &recomp_unit_0111, "recomp_unit_0111");
    runtime.register_function(0x089C1E94u, &recomp_unit_0111, "recomp_unit_0111");
    runtime.register_function(0x089C1EA4u, &recomp_unit_0111, "recomp_unit_0111");
    runtime.register_function(0x089C1EBCu, &recomp_unit_0111, "recomp_unit_0111");
    runtime.register_function(0x089C1ED8u, &recomp_unit_0111, "recomp_unit_0111");
    runtime.register_function(0x089C1EE8u, &recomp_unit_0111, "recomp_unit_0111");
    runtime.register_function(0x089C1EFCu, &recomp_unit_0111, "recomp_unit_0111");
    runtime.register_function(0x089C1F08u, &recomp_unit_0111, "recomp_unit_0111");
    runtime.register_function(0x089C1F18u, &recomp_unit_0111, "recomp_unit_0111");
    runtime.register_function(0x089C1F30u, &recomp_unit_0111, "recomp_unit_0111");
    runtime.register_function(0x089C1F4Cu, &recomp_unit_0111, "recomp_unit_0111");
    runtime.register_function(0x089C1F5Cu, &recomp_unit_0111, "recomp_unit_0111");
    runtime.register_function(0x089C1F70u, &recomp_unit_0111, "recomp_unit_0111");
    runtime.register_function(0x089C1F7Cu, &recomp_unit_0111, "recomp_unit_0111");
    runtime.register_function(0x089C1F8Cu, &recomp_unit_0111, "recomp_unit_0111");
    runtime.register_function(0x089C1FA4u, &recomp_unit_0111, "recomp_unit_0111");
    runtime.register_function(0x089C1FC0u, &recomp_unit_0111, "recomp_unit_0111");
    runtime.register_function(0x089C1FD0u, &recomp_unit_0111, "recomp_unit_0111");
    runtime.register_function(0x089C1FE4u, &recomp_unit_0111, "recomp_unit_0111");
    runtime.register_function(0x089C1FF0u, &recomp_unit_0111, "recomp_unit_0111");
    runtime.register_function(0x089C1FFCu, &recomp_unit_0111, "recomp_unit_0111");
    runtime.register_function(0x089C200Cu, &recomp_unit_0111, "recomp_unit_0111");
    runtime.register_function(0x089C2024u, &recomp_unit_0111, "recomp_unit_0111");
    runtime.register_function(0x089C2040u, &recomp_unit_0111, "recomp_unit_0111");
    runtime.register_function(0x089C2050u, &recomp_unit_0111, "recomp_unit_0111");
    runtime.register_function(0x089C2064u, &recomp_unit_0111, "recomp_unit_0111");
    runtime.register_function(0x089C2074u, &recomp_unit_0111, "recomp_unit_0111");
    runtime.register_function(0x089C2084u, &recomp_unit_0111, "recomp_unit_0111");
    runtime.register_function(0x089C209Cu, &recomp_unit_0111, "recomp_unit_0111");
    runtime.register_function(0x089C20B8u, &recomp_unit_0111, "recomp_unit_0111");
    runtime.register_function(0x089C20C8u, &recomp_unit_0111, "recomp_unit_0111");
    runtime.register_function(0x089C20DCu, &recomp_unit_0111, "recomp_unit_0111");
    runtime.register_function(0x089C20E8u, &recomp_unit_0111, "recomp_unit_0111");
    runtime.register_function(0x089C20F8u, &recomp_unit_0111, "recomp_unit_0111");
    runtime.register_function(0x089C2110u, &recomp_unit_0111, "recomp_unit_0111");
    runtime.register_function(0x089C212Cu, &recomp_unit_0111, "recomp_unit_0111");
    runtime.register_function(0x089C213Cu, &recomp_unit_0111, "recomp_unit_0111");
    runtime.register_function(0x089C2150u, &recomp_unit_0111, "recomp_unit_0111");
    runtime.register_function(0x089C215Cu, &recomp_unit_0111, "recomp_unit_0111");
    runtime.register_function(0x089C216Cu, &recomp_unit_0111, "recomp_unit_0111");
    runtime.register_function(0x089C2184u, &recomp_unit_0111, "recomp_unit_0111");
    runtime.register_function(0x089C21A0u, &recomp_unit_0111, "recomp_unit_0111");
    runtime.register_function(0x089C21B0u, &recomp_unit_0111, "recomp_unit_0111");
    runtime.register_function(0x089C21C4u, &recomp_unit_0111, "recomp_unit_0111");
    runtime.register_function(0x089C21D0u, &recomp_unit_0111, "recomp_unit_0111");
    runtime.register_function(0x089C21ECu, &recomp_unit_0111, "recomp_unit_0111");
    runtime.register_function(0x089C21FCu, &recomp_unit_0111, "recomp_unit_0111");
    runtime.register_function(0x089C2214u, &recomp_unit_0111, "recomp_unit_0111");
    runtime.register_function(0x089C2230u, &recomp_unit_0111, "recomp_unit_0111");
    runtime.register_function(0x089C2240u, &recomp_unit_0111, "recomp_unit_0111");
    runtime.register_function(0x089C2254u, &recomp_unit_0111, "recomp_unit_0111");
    runtime.register_function(0x089C2264u, &recomp_unit_0111, "recomp_unit_0111");
    runtime.register_function(0x089C2274u, &recomp_unit_0111, "recomp_unit_0111");
    runtime.register_function(0x089C228Cu, &recomp_unit_0111, "recomp_unit_0111");
    runtime.register_function(0x089C22A8u, &recomp_unit_0111, "recomp_unit_0111");
    runtime.register_function(0x089C22B8u, &recomp_unit_0111, "recomp_unit_0111");
    runtime.register_function(0x089C22CCu, &recomp_unit_0111, "recomp_unit_0111");
    runtime.register_function(0x089C22D8u, &recomp_unit_0111, "recomp_unit_0111");
    runtime.register_function(0x089C22E8u, &recomp_unit_0111, "recomp_unit_0111");
    runtime.register_function(0x089C2300u, &recomp_unit_0111, "recomp_unit_0111");
    runtime.register_function(0x089C231Cu, &recomp_unit_0111, "recomp_unit_0111");
    runtime.register_function(0x089C232Cu, &recomp_unit_0111, "recomp_unit_0111");
    runtime.register_function(0x089C2340u, &recomp_unit_0111, "recomp_unit_0111");
    runtime.register_function(0x089C234Cu, &recomp_unit_0111, "recomp_unit_0111");
    runtime.register_function(0x089C235Cu, &recomp_unit_0111, "recomp_unit_0111");
    runtime.register_function(0x089C2374u, &recomp_unit_0111, "recomp_unit_0111");
    runtime.register_function(0x089C2390u, &recomp_unit_0111, "recomp_unit_0111");
    runtime.register_function(0x089C23A0u, &recomp_unit_0111, "recomp_unit_0111");
    runtime.register_function(0x089C23B4u, &recomp_unit_0111, "recomp_unit_0111");
    runtime.register_function(0x089C23C0u, &recomp_unit_0111, "recomp_unit_0111");
    runtime.register_function(0x089C23CCu, &recomp_unit_0111, "recomp_unit_0111");
    runtime.register_function(0x089C23DCu, &recomp_unit_0111, "recomp_unit_0111");
    runtime.register_function(0x089C23F4u, &recomp_unit_0111, "recomp_unit_0111");
    runtime.register_function(0x089C2410u, &recomp_unit_0111, "recomp_unit_0111");
    runtime.register_function(0x089C2420u, &recomp_unit_0111, "recomp_unit_0111");
    runtime.register_function(0x089C2434u, &recomp_unit_0111, "recomp_unit_0111");
    runtime.register_function(0x089C2444u, &recomp_unit_0111, "recomp_unit_0111");
    runtime.register_function(0x089C2454u, &recomp_unit_0111, "recomp_unit_0111");
    runtime.register_function(0x089C246Cu, &recomp_unit_0111, "recomp_unit_0111");
    runtime.register_function(0x089C2488u, &recomp_unit_0111, "recomp_unit_0111");
    runtime.register_function(0x089C2498u, &recomp_unit_0111, "recomp_unit_0111");
    runtime.register_function(0x089C24ACu, &recomp_unit_0111, "recomp_unit_0111");
    runtime.register_function(0x089C24B8u, &recomp_unit_0111, "recomp_unit_0111");
    runtime.register_function(0x089C24C8u, &recomp_unit_0111, "recomp_unit_0111");
    runtime.register_function(0x089C24E0u, &recomp_unit_0111, "recomp_unit_0111");
    runtime.register_function(0x089C24FCu, &recomp_unit_0111, "recomp_unit_0111");
    runtime.register_function(0x089C250Cu, &recomp_unit_0111, "recomp_unit_0111");
    runtime.register_function(0x089C2520u, &recomp_unit_0111, "recomp_unit_0111");
    runtime.register_function(0x089C252Cu, &recomp_unit_0111, "recomp_unit_0111");
    runtime.register_function(0x089C253Cu, &recomp_unit_0111, "recomp_unit_0111");
    runtime.register_function(0x089C2554u, &recomp_unit_0111, "recomp_unit_0111");
    runtime.register_function(0x089C2570u, &recomp_unit_0111, "recomp_unit_0111");
    runtime.register_function(0x089C2580u, &recomp_unit_0111, "recomp_unit_0111");
    runtime.register_function(0x089C2594u, &recomp_unit_0111, "recomp_unit_0111");
    runtime.register_function(0x089C25A0u, &recomp_unit_0111, "recomp_unit_0111");
    runtime.register_function(0x089C25B8u, &recomp_unit_0111, "recomp_unit_0111");
    runtime.register_function(0x089C25C8u, &recomp_unit_0111, "recomp_unit_0111");
    runtime.register_function(0x089C25E0u, &recomp_unit_0111, "recomp_unit_0111");
    runtime.register_function(0x089C25FCu, &recomp_unit_0111, "recomp_unit_0111");
    runtime.register_function(0x089C260Cu, &recomp_unit_0111, "recomp_unit_0111");
    runtime.register_function(0x089C2620u, &recomp_unit_0111, "recomp_unit_0111");
    runtime.register_function(0x089C2630u, &recomp_unit_0111, "recomp_unit_0111");
    runtime.register_function(0x089C2640u, &recomp_unit_0111, "recomp_unit_0111");
    runtime.register_function(0x089C2658u, &recomp_unit_0111, "recomp_unit_0111");
    runtime.register_function(0x089C2674u, &recomp_unit_0111, "recomp_unit_0111");
    runtime.register_function(0x089C2684u, &recomp_unit_0111, "recomp_unit_0111");
    runtime.register_function(0x089C2698u, &recomp_unit_0111, "recomp_unit_0111");
    runtime.register_function(0x089C26A4u, &recomp_unit_0111, "recomp_unit_0111");
    runtime.register_function(0x089C26B4u, &recomp_unit_0111, "recomp_unit_0111");
    runtime.register_function(0x089C26CCu, &recomp_unit_0111, "recomp_unit_0111");
    runtime.register_function(0x089C26E8u, &recomp_unit_0111, "recomp_unit_0111");
    runtime.register_function(0x089C26F8u, &recomp_unit_0111, "recomp_unit_0111");
    runtime.register_function(0x089C270Cu, &recomp_unit_0111, "recomp_unit_0111");
    runtime.register_function(0x089C2718u, &recomp_unit_0111, "recomp_unit_0111");
    runtime.register_function(0x089C2728u, &recomp_unit_0111, "recomp_unit_0111");
    runtime.register_function(0x089C2740u, &recomp_unit_0111, "recomp_unit_0111");
    runtime.register_function(0x089C275Cu, &recomp_unit_0111, "recomp_unit_0111");
    runtime.register_function(0x089C276Cu, &recomp_unit_0111, "recomp_unit_0111");
    runtime.register_function(0x089C2780u, &recomp_unit_0111, "recomp_unit_0111");
    runtime.register_function(0x089C278Cu, &recomp_unit_0111, "recomp_unit_0111");
    runtime.register_function(0x089C2798u, &recomp_unit_0111, "recomp_unit_0111");
    runtime.register_function(0x089C27A8u, &recomp_unit_0111, "recomp_unit_0111");
    runtime.register_function(0x089C27C0u, &recomp_unit_0111, "recomp_unit_0111");
    runtime.register_function(0x089C27DCu, &recomp_unit_0111, "recomp_unit_0111");
    runtime.register_function(0x089C27ECu, &recomp_unit_0111, "recomp_unit_0111");
    runtime.register_function(0x089C2800u, &recomp_unit_0111, "recomp_unit_0111");
    runtime.register_function(0x089C2810u, &recomp_unit_0111, "recomp_unit_0111");
    runtime.register_function(0x089C2820u, &recomp_unit_0111, "recomp_unit_0111");
    runtime.register_function(0x089C2838u, &recomp_unit_0111, "recomp_unit_0111");
    runtime.register_function(0x089C2854u, &recomp_unit_0111, "recomp_unit_0111");
    runtime.register_function(0x089C2864u, &recomp_unit_0111, "recomp_unit_0111");
    runtime.register_function(0x089C2878u, &recomp_unit_0111, "recomp_unit_0111");
    runtime.register_function(0x089C2884u, &recomp_unit_0111, "recomp_unit_0111");
    runtime.register_function(0x089C2894u, &recomp_unit_0111, "recomp_unit_0111");
    runtime.register_function(0x089C28ACu, &recomp_unit_0111, "recomp_unit_0111");
    runtime.register_function(0x089C28C8u, &recomp_unit_0111, "recomp_unit_0111");
    runtime.register_function(0x089C28D8u, &recomp_unit_0111, "recomp_unit_0111");
    runtime.register_function(0x089C28ECu, &recomp_unit_0111, "recomp_unit_0111");
    runtime.register_function(0x089C28F8u, &recomp_unit_0111, "recomp_unit_0111");
    runtime.register_function(0x089C2908u, &recomp_unit_0111, "recomp_unit_0111");
    runtime.register_function(0x089C2920u, &recomp_unit_0111, "recomp_unit_0111");
    runtime.register_function(0x089C293Cu, &recomp_unit_0111, "recomp_unit_0111");
    runtime.register_function(0x089C294Cu, &recomp_unit_0111, "recomp_unit_0111");
    runtime.register_function(0x089C2960u, &recomp_unit_0111, "recomp_unit_0111");
    runtime.register_function(0x089C296Cu, &recomp_unit_0111, "recomp_unit_0111");
    runtime.register_function(0x089C2988u, &recomp_unit_0111, "recomp_unit_0111");
    runtime.register_function(0x089C2998u, &recomp_unit_0111, "recomp_unit_0111");
    runtime.register_function(0x089C29B0u, &recomp_unit_0111, "recomp_unit_0111");
    runtime.register_function(0x089C29CCu, &recomp_unit_0111, "recomp_unit_0111");
    runtime.register_function(0x089C29DCu, &recomp_unit_0111, "recomp_unit_0111");
    runtime.register_function(0x089C29F0u, &recomp_unit_0111, "recomp_unit_0111");
    runtime.register_function(0x089C2A00u, &recomp_unit_0111, "recomp_unit_0111");
    runtime.register_function(0x089C2A10u, &recomp_unit_0111, "recomp_unit_0111");
    runtime.register_function(0x089C2A28u, &recomp_unit_0111, "recomp_unit_0111");
    runtime.register_function(0x089C2A44u, &recomp_unit_0111, "recomp_unit_0111");
    runtime.register_function(0x089C2A54u, &recomp_unit_0111, "recomp_unit_0111");
    runtime.register_function(0x089C2A68u, &recomp_unit_0111, "recomp_unit_0111");
    runtime.register_function(0x089C2A74u, &recomp_unit_0111, "recomp_unit_0111");
    runtime.register_function(0x089C2A84u, &recomp_unit_0111, "recomp_unit_0111");
    runtime.register_function(0x089C2A9Cu, &recomp_unit_0111, "recomp_unit_0111");
    runtime.register_function(0x089C2AB8u, &recomp_unit_0111, "recomp_unit_0111");
    runtime.register_function(0x089C2AC8u, &recomp_unit_0111, "recomp_unit_0111");
    runtime.register_function(0x089C2ADCu, &recomp_unit_0111, "recomp_unit_0111");
    runtime.register_function(0x089C2AE8u, &recomp_unit_0111, "recomp_unit_0111");
    runtime.register_function(0x089C2AF8u, &recomp_unit_0111, "recomp_unit_0111");
    runtime.register_function(0x089C2B10u, &recomp_unit_0111, "recomp_unit_0111");
    runtime.register_function(0x089C2B2Cu, &recomp_unit_0111, "recomp_unit_0111");
    runtime.register_function(0x089C2B3Cu, &recomp_unit_0111, "recomp_unit_0111");
    runtime.register_function(0x089C2B50u, &recomp_unit_0111, "recomp_unit_0111");
    runtime.register_function(0x089C2B5Cu, &recomp_unit_0111, "recomp_unit_0111");
    runtime.register_function(0x089C2B68u, &recomp_unit_0111, "recomp_unit_0111");
    runtime.register_function(0x089C2B78u, &recomp_unit_0111, "recomp_unit_0111");
    runtime.register_function(0x089C2B90u, &recomp_unit_0111, "recomp_unit_0111");
    runtime.register_function(0x089C2BACu, &recomp_unit_0111, "recomp_unit_0111");
    runtime.register_function(0x089C2BBCu, &recomp_unit_0111, "recomp_unit_0111");
    runtime.register_function(0x089C2BD0u, &recomp_unit_0111, "recomp_unit_0111");
    runtime.register_function(0x089C2BE0u, &recomp_unit_0111, "recomp_unit_0111");
    runtime.register_function(0x089C2BF0u, &recomp_unit_0111, "recomp_unit_0111");
    runtime.register_function(0x089C2C08u, &recomp_unit_0111, "recomp_unit_0111");
    runtime.register_function(0x089C2C24u, &recomp_unit_0111, "recomp_unit_0111");
    runtime.register_function(0x089C2C34u, &recomp_unit_0111, "recomp_unit_0111");
    runtime.register_function(0x089C2C48u, &recomp_unit_0111, "recomp_unit_0111");
    runtime.register_function(0x089C2C54u, &recomp_unit_0111, "recomp_unit_0111");
    runtime.register_function(0x089C2C64u, &recomp_unit_0111, "recomp_unit_0111");
    runtime.register_function(0x089C2C7Cu, &recomp_unit_0111, "recomp_unit_0111");
    runtime.register_function(0x089C2C98u, &recomp_unit_0111, "recomp_unit_0111");
    runtime.register_function(0x089C2CA8u, &recomp_unit_0111, "recomp_unit_0111");
    runtime.register_function(0x089C2CBCu, &recomp_unit_0111, "recomp_unit_0111");
    runtime.register_function(0x089C2CC8u, &recomp_unit_0111, "recomp_unit_0111");
    runtime.register_function(0x089C2CD8u, &recomp_unit_0111, "recomp_unit_0111");
    runtime.register_function(0x089C2CF0u, &recomp_unit_0111, "recomp_unit_0111");
    runtime.register_function(0x089C2D0Cu, &recomp_unit_0111, "recomp_unit_0111");
    runtime.register_function(0x089C2D1Cu, &recomp_unit_0111, "recomp_unit_0111");
    runtime.register_function(0x089C2D30u, &recomp_unit_0111, "recomp_unit_0111");
    runtime.register_function(0x089C2D3Cu, &recomp_unit_0111, "recomp_unit_0111");
    runtime.register_function(0x089C2D54u, &recomp_unit_0111, "recomp_unit_0111");
    runtime.register_function(0x089C2D64u, &recomp_unit_0111, "recomp_unit_0111");
    runtime.register_function(0x089C2D7Cu, &recomp_unit_0111, "recomp_unit_0111");
    runtime.register_function(0x089C2D98u, &recomp_unit_0111, "recomp_unit_0111");
    runtime.register_function(0x089C2DA8u, &recomp_unit_0111, "recomp_unit_0111");
    runtime.register_function(0x089C2DBCu, &recomp_unit_0111, "recomp_unit_0111");
    runtime.register_function(0x089C2DCCu, &recomp_unit_0111, "recomp_unit_0111");
    runtime.register_function(0x089C2DDCu, &recomp_unit_0111, "recomp_unit_0111");
    runtime.register_function(0x089C2DF4u, &recomp_unit_0111, "recomp_unit_0111");
    runtime.register_function(0x089C2E10u, &recomp_unit_0111, "recomp_unit_0111");
    runtime.register_function(0x089C2E20u, &recomp_unit_0111, "recomp_unit_0111");
    runtime.register_function(0x089C2E34u, &recomp_unit_0111, "recomp_unit_0111");
    runtime.register_function(0x089C2E40u, &recomp_unit_0111, "recomp_unit_0111");
    runtime.register_function(0x089C2E50u, &recomp_unit_0111, "recomp_unit_0111");
    runtime.register_function(0x089C2E68u, &recomp_unit_0111, "recomp_unit_0111");
    runtime.register_function(0x089C2E84u, &recomp_unit_0111, "recomp_unit_0111");
    runtime.register_function(0x089C2E94u, &recomp_unit_0111, "recomp_unit_0111");
    runtime.register_function(0x089C2EA8u, &recomp_unit_0111, "recomp_unit_0111");
    runtime.register_function(0x089C2EB4u, &recomp_unit_0111, "recomp_unit_0111");
    runtime.register_function(0x089C2EC4u, &recomp_unit_0111, "recomp_unit_0111");
    runtime.register_function(0x089C2EDCu, &recomp_unit_0111, "recomp_unit_0111");
    runtime.register_function(0x089C2EF8u, &recomp_unit_0111, "recomp_unit_0111");
    runtime.register_function(0x089C2F08u, &recomp_unit_0111, "recomp_unit_0111");
    runtime.register_function(0x089C2F1Cu, &recomp_unit_0111, "recomp_unit_0111");
    runtime.register_function(0x089C2F28u, &recomp_unit_0111, "recomp_unit_0111");
    runtime.register_function(0x089C2F34u, &recomp_unit_0111, "recomp_unit_0111");
    runtime.register_function(0x089C2F44u, &recomp_unit_0111, "recomp_unit_0111");
    runtime.register_function(0x089C2F5Cu, &recomp_unit_0111, "recomp_unit_0111");
    runtime.register_function(0x089C2F78u, &recomp_unit_0111, "recomp_unit_0111");
    runtime.register_function(0x089C2F88u, &recomp_unit_0111, "recomp_unit_0111");
    runtime.register_function(0x089C2F9Cu, &recomp_unit_0111, "recomp_unit_0111");
    runtime.register_function(0x089C2FACu, &recomp_unit_0111, "recomp_unit_0111");
    runtime.register_function(0x089C2FBCu, &recomp_unit_0111, "recomp_unit_0111");
    runtime.register_function(0x089C2FD4u, &recomp_unit_0111, "recomp_unit_0111");
    runtime.register_function(0x089C2FF0u, &recomp_unit_0111, "recomp_unit_0111");
    runtime.register_function(0x089C3000u, &recomp_unit_0111, "recomp_unit_0111");
    runtime.register_function(0x089C3014u, &recomp_unit_0111, "recomp_unit_0111");
    runtime.register_function(0x089C3020u, &recomp_unit_0111, "recomp_unit_0111");
    runtime.register_function(0x089C3030u, &recomp_unit_0111, "recomp_unit_0111");
    runtime.register_function(0x089C3048u, &recomp_unit_0111, "recomp_unit_0111");
    runtime.register_function(0x089C3064u, &recomp_unit_0111, "recomp_unit_0111");
    runtime.register_function(0x089C3074u, &recomp_unit_0111, "recomp_unit_0111");
    runtime.register_function(0x089C3088u, &recomp_unit_0111, "recomp_unit_0111");
    runtime.register_function(0x089C3094u, &recomp_unit_0111, "recomp_unit_0111");
    runtime.register_function(0x089C30A4u, &recomp_unit_0111, "recomp_unit_0111");
    runtime.register_function(0x089C30BCu, &recomp_unit_0111, "recomp_unit_0111");
    runtime.register_function(0x089C30D8u, &recomp_unit_0111, "recomp_unit_0111");
    runtime.register_function(0x089C30E8u, &recomp_unit_0111, "recomp_unit_0111");
    runtime.register_function(0x089C30FCu, &recomp_unit_0111, "recomp_unit_0111");
    runtime.register_function(0x089C3108u, &recomp_unit_0111, "recomp_unit_0111");
    runtime.register_function(0x089C311Cu, &recomp_unit_0111, "recomp_unit_0111");
    runtime.register_function(0x089C312Cu, &recomp_unit_0111, "recomp_unit_0111");
    runtime.register_function(0x089C3144u, &recomp_unit_0111, "recomp_unit_0111");
    runtime.register_function(0x089C3160u, &recomp_unit_0111, "recomp_unit_0111");
    runtime.register_function(0x089C3170u, &recomp_unit_0111, "recomp_unit_0111");
    runtime.register_function(0x089C3184u, &recomp_unit_0111, "recomp_unit_0111");
    runtime.register_function(0x089C3194u, &recomp_unit_0111, "recomp_unit_0111");
    runtime.register_function(0x089C31A4u, &recomp_unit_0111, "recomp_unit_0111");
    runtime.register_function(0x089C31BCu, &recomp_unit_0111, "recomp_unit_0111");
    runtime.register_function(0x089C31D8u, &recomp_unit_0111, "recomp_unit_0111");
    runtime.register_function(0x089C31E8u, &recomp_unit_0111, "recomp_unit_0111");
    runtime.register_function(0x089C31FCu, &recomp_unit_0111, "recomp_unit_0111");
    runtime.register_function(0x089C3208u, &recomp_unit_0111, "recomp_unit_0111");
    runtime.register_function(0x089C3218u, &recomp_unit_0111, "recomp_unit_0111");
    runtime.register_function(0x089C3230u, &recomp_unit_0111, "recomp_unit_0111");
    runtime.register_function(0x089C324Cu, &recomp_unit_0111, "recomp_unit_0111");
    runtime.register_function(0x089C325Cu, &recomp_unit_0111, "recomp_unit_0111");
    runtime.register_function(0x089C3270u, &recomp_unit_0111, "recomp_unit_0111");
    runtime.register_function(0x089C327Cu, &recomp_unit_0111, "recomp_unit_0111");
    runtime.register_function(0x089C328Cu, &recomp_unit_0111, "recomp_unit_0111");
    runtime.register_function(0x089C32A4u, &recomp_unit_0111, "recomp_unit_0111");
    runtime.register_function(0x089C32C0u, &recomp_unit_0111, "recomp_unit_0111");
    runtime.register_function(0x089C32D0u, &recomp_unit_0111, "recomp_unit_0111");
    runtime.register_function(0x089C32E4u, &recomp_unit_0111, "recomp_unit_0111");
    runtime.register_function(0x089C32F0u, &recomp_unit_0111, "recomp_unit_0111");
    runtime.register_function(0x089C32FCu, &recomp_unit_0111, "recomp_unit_0111");
    runtime.register_function(0x089C330Cu, &recomp_unit_0111, "recomp_unit_0111");
    runtime.register_function(0x089C3324u, &recomp_unit_0111, "recomp_unit_0111");
    runtime.register_function(0x089C3340u, &recomp_unit_0111, "recomp_unit_0111");
    runtime.register_function(0x089C3350u, &recomp_unit_0111, "recomp_unit_0111");
    runtime.register_function(0x089C3364u, &recomp_unit_0111, "recomp_unit_0111");
    runtime.register_function(0x089C3374u, &recomp_unit_0111, "recomp_unit_0111");
    runtime.register_function(0x089C3384u, &recomp_unit_0111, "recomp_unit_0111");
    runtime.register_function(0x089C339Cu, &recomp_unit_0111, "recomp_unit_0111");
    runtime.register_function(0x089C33B8u, &recomp_unit_0111, "recomp_unit_0111");
    runtime.register_function(0x089C33C8u, &recomp_unit_0111, "recomp_unit_0111");
    runtime.register_function(0x089C33DCu, &recomp_unit_0111, "recomp_unit_0111");
    runtime.register_function(0x089C33E8u, &recomp_unit_0111, "recomp_unit_0111");
    runtime.register_function(0x089C33F8u, &recomp_unit_0111, "recomp_unit_0111");
    runtime.register_function(0x089C3410u, &recomp_unit_0111, "recomp_unit_0111");
    runtime.register_function(0x089C342Cu, &recomp_unit_0111, "recomp_unit_0111");
    runtime.register_function(0x089C343Cu, &recomp_unit_0111, "recomp_unit_0111");
    runtime.register_function(0x089C3450u, &recomp_unit_0111, "recomp_unit_0111");
    runtime.register_function(0x089C345Cu, &recomp_unit_0111, "recomp_unit_0111");
    runtime.register_function(0x089C346Cu, &recomp_unit_0111, "recomp_unit_0111");
    runtime.register_function(0x089C3484u, &recomp_unit_0111, "recomp_unit_0111");
    runtime.register_function(0x089C34A0u, &recomp_unit_0111, "recomp_unit_0111");
    runtime.register_function(0x089C34B0u, &recomp_unit_0111, "recomp_unit_0111");
    runtime.register_function(0x089C34C4u, &recomp_unit_0111, "recomp_unit_0111");
    runtime.register_function(0x089C34D0u, &recomp_unit_0111, "recomp_unit_0111");
    runtime.register_function(0x089C34DCu, &recomp_unit_0111, "recomp_unit_0111");
    runtime.register_function(0x089C34ECu, &recomp_unit_0111, "recomp_unit_0111");
    runtime.register_function(0x089C3504u, &recomp_unit_0111, "recomp_unit_0111");
    runtime.register_function(0x089C3520u, &recomp_unit_0111, "recomp_unit_0111");
    runtime.register_function(0x089C3530u, &recomp_unit_0111, "recomp_unit_0111");
    runtime.register_function(0x089C3544u, &recomp_unit_0111, "recomp_unit_0111");
    runtime.register_function(0x089C3554u, &recomp_unit_0111, "recomp_unit_0111");
    runtime.register_function(0x089C3564u, &recomp_unit_0111, "recomp_unit_0111");
    runtime.register_function(0x089C357Cu, &recomp_unit_0111, "recomp_unit_0111");
    runtime.register_function(0x089C3598u, &recomp_unit_0111, "recomp_unit_0111");
    runtime.register_function(0x089C35A8u, &recomp_unit_0111, "recomp_unit_0111");
    runtime.register_function(0x089C35BCu, &recomp_unit_0111, "recomp_unit_0111");
    runtime.register_function(0x089C35C8u, &recomp_unit_0111, "recomp_unit_0111");
    runtime.register_function(0x089C35D8u, &recomp_unit_0111, "recomp_unit_0111");
    runtime.register_function(0x089C35F0u, &recomp_unit_0111, "recomp_unit_0111");
    runtime.register_function(0x089C360Cu, &recomp_unit_0111, "recomp_unit_0111");
    runtime.register_function(0x089C361Cu, &recomp_unit_0111, "recomp_unit_0111");
    runtime.register_function(0x089C3630u, &recomp_unit_0111, "recomp_unit_0111");
    runtime.register_function(0x089C363Cu, &recomp_unit_0111, "recomp_unit_0111");
    runtime.register_function(0x089C364Cu, &recomp_unit_0111, "recomp_unit_0111");
    runtime.register_function(0x089C3664u, &recomp_unit_0111, "recomp_unit_0111");
    runtime.register_function(0x089C3680u, &recomp_unit_0111, "recomp_unit_0111");
    runtime.register_function(0x089C3690u, &recomp_unit_0111, "recomp_unit_0111");
    runtime.register_function(0x089C36A4u, &recomp_unit_0111, "recomp_unit_0111");
    runtime.register_function(0x089C36B0u, &recomp_unit_0111, "recomp_unit_0111");
    runtime.register_function(0x089C36BCu, &recomp_unit_0111, "recomp_unit_0111");
    runtime.register_function(0x089C36CCu, &recomp_unit_0111, "recomp_unit_0111");
    runtime.register_function(0x089C36E4u, &recomp_unit_0111, "recomp_unit_0111");
    runtime.register_function(0x089C3700u, &recomp_unit_0111, "recomp_unit_0111");
    runtime.register_function(0x089C3710u, &recomp_unit_0111, "recomp_unit_0111");
    runtime.register_function(0x089C3724u, &recomp_unit_0111, "recomp_unit_0111");
    runtime.register_function(0x089C3734u, &recomp_unit_0111, "recomp_unit_0111");
    runtime.register_function(0x089C3744u, &recomp_unit_0111, "recomp_unit_0111");
    runtime.register_function(0x089C375Cu, &recomp_unit_0111, "recomp_unit_0111");
    runtime.register_function(0x089C3778u, &recomp_unit_0111, "recomp_unit_0111");
    runtime.register_function(0x089C3788u, &recomp_unit_0111, "recomp_unit_0111");
    runtime.register_function(0x089C379Cu, &recomp_unit_0111, "recomp_unit_0111");
    runtime.register_function(0x089C37A8u, &recomp_unit_0111, "recomp_unit_0111");
    runtime.register_function(0x089C37B8u, &recomp_unit_0111, "recomp_unit_0111");
    runtime.register_function(0x089C37D0u, &recomp_unit_0111, "recomp_unit_0111");
    runtime.register_function(0x089C37ECu, &recomp_unit_0111, "recomp_unit_0111");
    runtime.register_function(0x089C37FCu, &recomp_unit_0111, "recomp_unit_0111");
    runtime.register_function(0x089C3810u, &recomp_unit_0111, "recomp_unit_0111");
    runtime.register_function(0x089C381Cu, &recomp_unit_0111, "recomp_unit_0111");
    runtime.register_function(0x089C382Cu, &recomp_unit_0111, "recomp_unit_0111");
    runtime.register_function(0x089C3844u, &recomp_unit_0111, "recomp_unit_0111");
    runtime.register_function(0x089C3860u, &recomp_unit_0111, "recomp_unit_0111");
    runtime.register_function(0x089C3870u, &recomp_unit_0111, "recomp_unit_0111");
    runtime.register_function(0x089C3884u, &recomp_unit_0111, "recomp_unit_0111");
    runtime.register_function(0x089C3890u, &recomp_unit_0111, "recomp_unit_0111");
    runtime.register_function(0x089C38DCu, &recomp_unit_0111, "recomp_unit_0111");
    runtime.register_function(0x089C3928u, &recomp_unit_0111, "recomp_unit_0111");
    runtime.register_function(0x089C3974u, &recomp_unit_0111, "recomp_unit_0111");
    runtime.register_function(0x089C39C0u, &recomp_unit_0111, "recomp_unit_0111");
    runtime.register_function(0x089C3A0Cu, &recomp_unit_0111, "recomp_unit_0111");
    runtime.register_function(0x089C3A58u, &recomp_unit_0111, "recomp_unit_0111");
    runtime.register_function(0x089C3AA4u, &recomp_unit_0111, "recomp_unit_0111");
    runtime.register_function(0x089C3AF0u, &recomp_unit_0111, "recomp_unit_0111");
    runtime.register_function(0x089C3B3Cu, &recomp_unit_0111, "recomp_unit_0111");
    runtime.register_function(0x089C3B88u, &recomp_unit_0111, "recomp_unit_0111");
    runtime.register_function(0x089C3BD4u, &recomp_unit_0111, "recomp_unit_0111");
    runtime.register_function(0x089C3C20u, &recomp_unit_0111, "recomp_unit_0111");
    runtime.register_function(0x089C3C6Cu, &recomp_unit_0111, "recomp_unit_0111");
    runtime.register_function(0x089C3CB8u, &recomp_unit_0111, "recomp_unit_0111");
    runtime.register_function(0x089C3D0Cu, &recomp_unit_0111, "recomp_unit_0111");
    runtime.register_function(0x089C3D14u, &recomp_unit_0111, "recomp_unit_0111");
    runtime.register_function(0x089C3D40u, &recomp_unit_0111, "recomp_unit_0111");
}
} // namespace psprecomp
