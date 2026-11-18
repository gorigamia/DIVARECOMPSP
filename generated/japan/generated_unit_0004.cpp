#include "psprecomp/runtime.hpp"
#include "generated_units.hpp"
#include <bit>
#include <cmath>
#include <cstdint>
#include <limits>

namespace psprecomp {
static const std::uint16_t kEntryIds_recomp_unit_0004[4088] = {
    1, 0, 2, 0, 0, 3, 0, 0, 0, 0, 4, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 5, 0, 0, 0, 0, 0, 0,
    0, 0, 6, 0, 0, 7, 0, 8, 0, 9, 0, 10, 0, 0, 0, 0, 0, 0, 0, 11, 0, 12, 0, 0, 0, 0, 0, 13, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 14, 0, 15, 0, 0, 0, 0, 0, 0, 16, 17, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 18, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 19, 0, 0, 0, 0, 0, 0, 0, 0, 0, 20, 0, 0, 0,
    0, 21, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 22, 0, 0, 0, 23, 0, 0, 0, 0, 0, 0, 24, 0, 0, 0, 25, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 26, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 27, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 28, 0, 29, 0, 30, 0, 0, 0, 0, 0, 0, 31, 0, 32, 0, 0, 33, 0, 34, 0, 35, 0, 36, 0, 0,
    37, 0, 38, 0, 0, 0, 0, 0, 0, 39, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 40, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 41, 0, 0, 0, 42, 0, 0, 0, 43, 0, 0, 0, 0, 0, 0, 0, 44, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 45, 0, 0, 0, 0, 0, 0, 0, 0, 46, 0, 0, 0, 0, 47, 0, 0, 0, 0, 0, 48, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 49, 0, 0, 0, 0, 50, 0, 0, 51, 52, 0, 0, 0, 0, 0, 0, 53,
    0, 0, 0, 0, 0, 54, 55, 0, 0, 56, 0, 57, 0, 0, 58, 0, 59, 0, 0, 60, 0, 0, 0, 0, 61, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 62, 0, 0, 63, 0, 64, 0, 0, 0, 0, 0, 65, 0, 0, 0, 0, 66, 0, 0, 0, 0, 0, 0, 0, 67, 68, 0, 0,
    0, 0, 0, 69, 0, 0, 0, 0, 70, 0, 0, 0, 0, 0, 0, 0, 71, 72, 0, 73, 74, 0, 75, 0, 76, 77, 0, 0, 78, 0, 0, 0,
    0, 79, 80, 0, 0, 0, 0, 0, 81, 0, 82, 0, 0, 0, 83, 0, 0, 84, 0, 0, 0, 85, 86, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 87, 0, 0, 0, 88, 0, 0, 0, 0, 0, 0, 0, 89, 0, 90, 0, 0, 91, 0, 92, 0, 0, 93, 0, 94, 0, 95, 0, 0, 96, 0,
    0, 0, 0, 97, 0, 98, 0, 0, 99, 0, 0, 100, 0, 101, 0, 102, 0, 0, 103, 0, 104, 0, 0, 0, 0, 0, 0, 0, 105, 0, 0, 0,
    106, 0, 107, 0, 108, 0, 0, 0, 0, 0, 0, 0, 109, 0, 110, 0, 111, 112, 0, 0, 0, 113, 0, 114, 0, 115, 0, 0, 0, 0, 0, 0,
    0, 116, 0, 117, 0, 0, 118, 0, 0, 0, 0, 0, 0, 0, 119, 0, 120, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 121, 0, 122, 0,
    0, 123, 0, 124, 0, 0, 0, 0, 0, 0, 0, 125, 0, 126, 0, 0, 127, 0, 128, 0, 0, 0, 0, 0, 0, 0, 129, 0, 130, 0, 0, 131,
    0, 132, 0, 0, 0, 0, 133, 0, 134, 0, 0, 135, 0, 136, 0, 0, 137, 0, 138, 0, 139, 0, 0, 140, 0, 0, 0, 0, 0, 0, 0, 141,
    0, 142, 0, 0, 143, 0, 0, 0, 0, 0, 0, 0, 144, 0, 145, 0, 146, 0, 147, 0, 0, 0, 0, 0, 0, 148, 0, 149, 0, 0, 150, 0,
    151, 0, 0, 0, 0, 0, 0, 0, 152, 0, 153, 0, 154, 0, 0, 155, 0, 156, 0, 157, 0, 0, 0, 158, 0, 159, 160, 0, 0, 0, 161, 0,
    162, 0, 163, 0, 0, 0, 0, 164, 0, 0, 0, 0, 0, 0, 0, 165, 0, 166, 0, 167, 0, 0, 0, 0, 0, 0, 0, 168, 0, 169, 0, 0,
    0, 0, 0, 170, 0, 171, 172, 0, 0, 173, 0, 0, 174, 0, 175, 0, 0, 0, 176, 0, 177, 178, 0, 0, 0, 179, 0, 180, 0, 181, 0, 0,
    0, 0, 182, 0, 0, 0, 0, 0, 0, 0, 183, 0, 184, 0, 185, 0, 0, 0, 0, 0, 0, 0, 186, 0, 187, 0, 0, 188, 0, 189, 0, 0,
    190, 0, 191, 0, 192, 0, 0, 193, 0, 194, 0, 0, 195, 0, 196, 0, 197, 0, 0, 198, 0, 199, 0, 0, 200, 0, 201, 0, 202, 0, 0, 0,
    0, 0, 203, 0, 0, 204, 0, 205, 0, 206, 0, 0, 207, 0, 208, 0, 209, 0, 0, 210, 0, 211, 0, 212, 0, 0, 213, 0, 0, 0, 0, 0,
    0, 0, 214, 0, 0, 0, 215, 0, 0, 216, 0, 0, 0, 0, 0, 0, 0, 217, 0, 0, 218, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 219,
    0, 0, 0, 220, 221, 0, 0, 0, 0, 222, 0, 223, 0, 0, 0, 0, 0, 0, 224, 0, 0, 0, 0, 0, 0, 225, 0, 0, 0, 0, 0, 0,
    0, 226, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 227, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 228, 0, 229,
    0, 0, 0, 0, 0, 0, 230, 231, 0, 232, 0, 0, 233, 0, 0, 0, 0, 0, 234, 0, 0, 0, 0, 0, 0, 235, 0, 0, 236, 0, 237, 0,
    0, 0, 0, 238, 0, 239, 0, 0, 0, 240, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 241, 0, 0, 0, 242, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 243, 0, 0, 0, 0, 0, 0, 0, 0, 0, 244, 0, 0, 0, 0, 0, 0, 0, 245, 0, 0, 0, 246, 247, 248, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 249, 0, 0, 250, 0, 0, 0, 251, 0, 0, 0, 0, 0, 0, 252, 0, 253, 254, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 255, 256, 0, 257, 0, 0, 0, 258, 0, 0, 0, 0, 0, 0, 259, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    260, 0, 261, 0, 262, 0, 263, 0, 264, 0, 0, 0, 0, 0, 265, 0, 0, 266, 0, 0, 267, 0, 0, 0, 0, 0, 0, 0, 0, 268, 0, 0,
    0, 0, 0, 0, 0, 0, 269, 0, 0, 0, 0, 0, 0, 270, 0, 271, 0, 272, 0, 273, 274, 0, 0, 275, 0, 0, 0, 0, 0, 0, 0, 0,
    276, 0, 0, 277, 0, 278, 0, 0, 0, 0, 279, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 280, 0, 281, 0, 0, 282, 0, 283,
    0, 0, 0, 0, 0, 284, 0, 0, 0, 0, 0, 0, 0, 285, 0, 0, 0, 286, 0, 0, 0, 0, 0, 0, 0, 0, 287, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 288, 0, 0, 0, 0, 0, 0, 289, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 290, 0, 291, 0, 0, 0, 0, 0, 292,
    0, 0, 0, 0, 0, 0, 293, 0, 0, 0, 0, 0, 0, 294, 0, 0, 295, 0, 296, 0, 0, 0, 0, 0, 0, 297, 0, 0, 0, 0, 0, 0,
    0, 0, 298, 0, 299, 0, 0, 0, 0, 0, 0, 300, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 301, 0, 0, 302, 0, 0, 0, 0, 0, 0,
    303, 0, 0, 304, 0, 0, 305, 0, 306, 307, 0, 308, 0, 0, 309, 0, 0, 310, 0, 0, 311, 0, 312, 0, 313, 0, 314, 0, 0, 315, 316, 0,
    317, 0, 0, 318, 0, 0, 319, 0, 320, 321, 0, 322, 0, 323, 324, 0, 325, 0, 0, 0, 0, 0, 0, 0, 326, 0, 0, 327, 0, 328, 329, 0,
    0, 330, 331, 0, 0, 0, 332, 0, 0, 0, 333, 0, 334, 335, 0, 336, 0, 0, 337, 338, 0, 339, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 340, 0, 0, 0, 0, 341, 0, 342, 0, 343, 0, 0, 0, 0, 344, 0,
    0, 345, 346, 0, 0, 0, 347, 0, 0, 348, 0, 0, 349, 0, 350, 0, 351, 0, 0, 352, 353, 0, 0, 354, 0, 0, 355, 356, 0, 0, 357, 358,
    0, 0, 0, 0, 359, 0, 0, 0, 0, 0, 0, 360, 0, 0, 0, 0, 361, 0, 0, 0, 0, 0, 0, 0, 362, 363, 0, 0, 0, 0, 364, 0,
    365, 0, 366, 0, 367, 0, 368, 0, 0, 0, 369, 0, 0, 0, 370, 0, 371, 0, 0, 0, 372, 0, 373, 0, 374, 0, 375, 0, 376, 0, 377, 0,
    378, 0, 379, 0, 0, 0, 0, 0, 0, 0, 0, 0, 380, 0, 0, 0, 0, 0, 0, 0, 0, 381, 0, 0, 0, 382, 383, 0, 0, 0, 0, 384,
    0, 385, 0, 0, 0, 0, 0, 0, 386, 0, 0, 0, 0, 0, 387, 388, 0, 0, 0, 389, 0, 390, 0, 0, 0, 391, 0, 392, 0, 0, 0, 393,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 394, 0, 0, 0, 0, 0, 0, 0, 395, 0, 0, 396, 0, 0, 0, 0, 397, 0, 398, 0,
    0, 399, 0, 0, 400, 401, 0, 0, 0, 0, 0, 402, 0, 0, 0, 0, 0, 0, 0, 403, 0, 404, 0, 0, 0, 0, 0, 0, 0, 405, 0, 0,
    0, 406, 0, 407, 0, 408, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 409, 0, 0, 0, 0, 410, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 411, 0, 0, 0, 0, 0, 0, 0, 0, 0, 412, 0, 0, 0, 413, 414, 0, 0, 0, 0, 415, 0, 416, 0, 0, 0, 0, 0, 0, 417, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 418, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 419, 0, 0, 0, 0, 420, 0, 421, 422, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 423, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 424, 0, 0, 0, 0, 425, 0, 0, 0, 0, 0, 426,
    0, 427, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 428, 0, 0, 0, 0, 0, 0, 0, 0, 0, 429, 0, 0, 0, 0, 430,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 431, 0, 0, 0, 0, 0, 0, 0, 0, 432, 0, 0, 0, 0, 433, 0, 434, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 435, 0, 0, 0, 0, 0, 0, 0, 0, 0, 436, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 437, 0, 438, 0, 0, 0, 0, 439, 440, 0,
    0, 0, 441, 0, 0, 0, 0, 0, 0, 0, 0, 0, 442, 0, 0, 0, 0, 0, 0, 0, 0, 443, 0, 0, 0, 0, 444, 0, 0, 0, 445, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 446, 0, 0, 0, 0, 0, 0, 0, 0, 447, 0, 0, 0, 0, 448, 0, 0, 0, 0, 0, 449, 0, 0, 0,
    0, 450, 0, 0, 451, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 452, 0, 0, 0, 453, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 454, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 455, 0, 0, 0, 0, 0, 456, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 457, 0, 0, 458, 0, 0, 0, 0, 0, 0, 459, 0, 0, 460, 461, 0, 0, 462, 0, 463, 0, 0, 0, 0, 464,
    0, 0, 0, 465, 0, 0, 466, 0, 0, 0, 467, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 468, 469, 0, 0, 470, 0, 471, 0, 0, 0, 472,
    0, 473, 0, 474, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 475, 476, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 477, 0,
    478, 0, 479, 0, 480, 0, 0, 0, 0, 481, 0, 0, 482, 0, 483, 0, 0, 484, 0, 0, 485, 0, 486, 0, 487, 488, 0, 0, 0, 489, 0, 490,
    0, 0, 0, 0, 491, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 492, 493, 0, 0, 0, 0, 0, 0, 0, 0, 494, 495, 0, 0, 0, 0, 496,
    0, 497, 0, 0, 498, 0, 499, 0, 500, 0, 501, 502, 0, 0, 503, 0, 504, 0, 505, 0, 0, 506, 0, 507, 0, 508, 509, 0, 0, 510, 0, 511,
    0, 0, 512, 0, 0, 513, 0, 0, 0, 514, 515, 0, 0, 0, 516, 0, 517, 0, 0, 0, 0, 518, 0, 519, 0, 0, 520, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 521, 0, 522, 0, 523, 0, 524, 0, 525, 526, 527, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 528, 0, 529, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 530, 0, 0, 0, 531, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 532, 0, 0, 533, 0, 0, 0, 0, 0, 0, 534, 0, 0, 0, 535, 536, 0, 0, 537, 538, 0, 0, 539, 0,
    0, 0, 0, 540, 0, 541, 0, 0, 542, 0, 543, 0, 544, 0, 0, 0, 545, 0, 546, 0, 0, 0, 0, 547, 548, 0, 0, 0, 549, 0, 0, 550,
    551, 0, 0, 552, 0, 553, 0, 554, 0, 555, 0, 556, 557, 0, 558, 0, 0, 0, 559, 0, 0, 560, 0, 0, 0, 0, 0, 0, 0, 0, 561, 562,
    0, 0, 563, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 564, 0, 0, 565, 0, 566, 0, 567, 0, 568, 0, 569, 0, 0, 0, 0, 0, 570, 0,
    571, 0, 572, 0, 573, 0, 0, 0, 0, 0, 574, 0, 0, 575, 0, 576, 0, 0, 0, 0, 0, 0, 0, 577, 0, 0, 578, 0, 579, 0, 580, 0,
    581, 582, 0, 0, 583, 0, 0, 0, 0, 584, 0, 585, 0, 586, 0, 0, 587, 0, 588, 589, 0, 0, 590, 0, 0, 0, 0, 591, 0, 592, 0, 593,
    0, 594, 0, 595, 0, 0, 596, 597, 0, 598, 0, 0, 0, 0, 0, 0, 0, 599, 600, 0, 601, 0, 0, 0, 0, 602, 0, 603, 0, 0, 0, 604,
    0, 605, 0, 0, 606, 0, 607, 0, 0, 608, 0, 0, 609, 0, 0, 610, 0, 0, 0, 611, 0, 612, 0, 613, 0, 0, 0, 0, 0, 0, 0, 614,
    0, 615, 616, 0, 0, 617, 0, 618, 0, 0, 0, 0, 0, 619, 0, 0, 0, 620, 0, 0, 621, 0, 0, 622, 623, 0, 624, 625, 0, 0, 0, 626,
    0, 0, 627, 0, 0, 0, 628, 629, 0, 630, 0, 631, 0, 632, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    633, 0, 0, 0, 0, 0, 634, 0, 0, 0, 0, 0, 0, 635, 0, 636, 0, 0, 0, 637, 0, 0, 0, 638, 639, 0, 640, 0, 0, 641, 0, 0,
    642, 643, 0, 644, 0, 645, 0, 646, 0, 0, 647, 648, 0, 649, 650, 0, 0, 651, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 652, 0, 653, 0, 0, 0, 0, 0, 654, 0, 655, 0, 0, 0, 0, 656, 657, 0, 658, 0, 0, 659, 0, 0, 0, 660, 661, 0,
    0, 0, 0, 0, 662, 0, 0, 663, 0, 664, 0, 0, 665, 0, 0, 0, 0, 0, 666, 0, 667, 0, 0, 0, 0, 0, 668, 0, 669, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 670, 0, 0, 0, 671, 0, 0, 0, 0, 672, 0, 0, 673, 0, 0, 0, 0, 674, 0, 0, 675,
    676, 0, 0, 677, 0, 0, 0, 0, 678, 679, 0, 0, 680, 681, 0, 682, 0, 683, 0, 0, 0, 0, 0, 0, 684, 0, 0, 685, 0, 0, 0, 686,
    0, 0, 0, 0, 0, 0, 687, 0, 0, 0, 688, 0, 0, 689, 0, 0, 0, 0, 690, 0, 691, 0, 0, 692, 0, 0, 0, 693, 0, 694, 0, 0,
    0, 0, 0, 0, 0, 0, 695, 0, 0, 696, 0, 0, 697, 0, 0, 698, 0, 0, 699, 0, 0, 700, 0, 0, 0, 701, 0, 0, 702, 0, 0, 703,
    0, 0, 704, 0, 0, 0, 705, 0, 706, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 707, 0, 0, 0, 0, 0, 0, 0, 0, 708, 0, 0,
    0, 709, 0, 0, 0, 0, 710, 711, 712, 0, 0, 0, 713, 0, 0, 0, 714, 0, 715, 0, 0, 0, 0, 716, 0, 0, 0, 0, 0, 717, 718, 0,
    0, 719, 0, 0, 0, 0, 0, 720, 0, 721, 0, 0, 0, 0, 722, 0, 0, 723, 0, 724, 0, 0, 725, 0, 0, 0, 726, 727, 0, 728, 0, 0,
    0, 0, 729, 0, 0, 0, 0, 730, 0, 731, 0, 0, 0, 0, 732, 733, 0, 734, 0, 0, 735, 0, 0, 736, 0, 0, 737, 0, 0, 0, 0, 0,
    0, 0, 738, 0, 0, 0, 0, 0, 0, 0, 739, 0, 0, 0, 0, 0, 740, 0, 0, 0, 741, 0, 0, 742, 0, 0, 0, 743, 0, 0, 744, 745,
    0, 0, 0, 0, 0, 0, 746, 0, 0, 747, 0, 0, 0, 0, 748, 0, 0, 749, 0, 750, 0, 0, 751, 0, 0, 0, 0, 752, 0, 0, 0, 753,
    754, 0, 755, 0, 0, 756, 757, 0, 758, 0, 0, 759, 760, 0, 761, 0, 0, 762, 763, 0, 764, 0, 0, 765, 766, 0, 0, 0, 767, 0, 0, 0,
    0, 0, 768, 0, 769, 0, 770, 0, 771, 0, 0, 0, 0, 0, 0, 0, 772, 0, 773, 0, 0, 0, 0, 774, 0, 0, 0, 0, 775, 0, 0, 0,
    0, 0, 0, 0, 0, 776, 777, 0, 0, 0, 0, 0, 0, 778, 0, 0, 0, 0, 779, 0, 0, 0, 0, 780, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 781, 0, 0, 0, 782, 783, 0, 0, 0, 0, 0, 784, 0, 0, 0, 785, 0, 0, 0, 786, 0, 787, 0, 788, 0, 789, 0, 790, 0, 0,
    0, 0, 0, 0, 0, 0, 791, 0, 0, 792, 0, 793, 0, 0, 0, 794, 0, 0, 795, 0, 0, 0, 0, 0, 796, 0, 0, 0, 797, 0, 0, 0,
    798, 799, 0, 800, 0, 0, 0, 801, 0, 802, 0, 0, 803, 804, 0, 805, 0, 0, 806, 0, 0, 807, 0, 0, 0, 808, 0, 0, 809, 0, 0, 0,
    810, 0, 0, 0, 0, 0, 811, 0, 812, 0, 813, 0, 0, 0, 0, 814, 0, 0, 815, 0, 0, 816, 0, 0, 0, 817, 818, 0, 0, 0, 0, 819,
    0, 820, 0, 0, 0, 0, 821, 0, 822, 823, 0, 824, 0, 0, 825, 0, 0, 826, 0, 0, 827, 0, 0, 828, 0, 829, 0, 830, 0, 0, 0, 831,
    832, 833, 0, 0, 0, 0, 834, 0, 0, 0, 0, 0, 835, 0, 836, 0, 0, 837, 838, 0, 0, 0, 0, 0, 0, 839, 0, 840, 0, 0, 0, 841,
    0, 0, 0, 0, 842, 0, 843, 0, 0, 0, 0, 844, 0, 0, 0, 0, 0, 845, 0, 0, 0, 0, 846, 0, 847, 0, 848, 0, 849, 0, 850, 0,
    0, 851, 0, 0, 0, 852, 0, 0, 853, 0, 0, 854, 0, 0, 855, 0, 0, 0, 0, 0, 0, 0, 856, 0, 857, 858, 0, 0, 0, 0, 0, 0,
    0, 859, 0, 860, 0, 0, 861, 0, 0, 0, 862, 863, 0, 0, 0, 864, 0, 0, 0, 865, 0, 0, 0, 0, 0, 0, 0, 0, 866, 0, 0, 867,
    0, 0, 0, 0, 868, 0, 869, 0, 0, 870, 0, 0, 871, 0, 0, 872, 0, 0, 0, 873, 0, 874, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    875, 0, 876, 0, 0, 0, 0, 0, 0, 877, 878, 879, 0, 880, 0, 881, 0, 882, 0, 0, 0, 0, 883, 0, 0, 0, 0, 0, 0, 884, 0, 885,
    0, 886, 0, 0, 0, 0, 0, 0, 887, 0, 0, 0, 0, 888, 0, 0, 889, 0, 0, 890, 0, 0, 0, 891, 0, 892, 0, 0, 0, 893, 0, 0,
    0, 0, 0, 0, 0, 0, 894, 0, 0, 895, 0, 0, 896, 0, 0, 0, 897, 0, 0, 898, 0, 0, 0, 899, 0, 0, 900, 0, 0, 901, 0, 0,
    902, 0, 0, 0, 903, 0, 904, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 905, 0, 0, 0, 0, 0, 0, 906, 0, 907, 0, 0,
    0, 0, 908, 0, 0, 0, 0, 909, 0, 0, 0, 0, 0, 0, 910, 0, 0, 0, 0, 911, 0, 912, 0, 0, 913, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 914, 0, 0, 0, 0, 0, 915, 0, 0, 916, 0, 0, 0, 0, 0, 917, 0, 0, 0, 0, 0, 0, 0, 0, 918, 0, 0, 0, 0, 0,
    0, 0, 0, 919, 0, 0, 920, 0, 0, 921, 0, 0, 922, 0, 923, 0, 924, 0, 925, 0, 0, 0, 0, 926, 0, 0, 927, 0, 0, 928, 0, 0,
    0, 0, 0, 0, 0, 929, 0, 0, 930, 0, 0, 931, 0, 0, 932, 0, 0, 0, 0, 0, 0, 933, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 934, 0, 0, 0, 0, 0, 0, 935,
};
void recomp_unit_0004_entry(Runtime &rt, AllegrexContext &ctx, std::uint16_t direct_entry_id, GuestMemory::AotFastView &aot_mem) {
    std::uint32_t jump_target = 0u;
    std::uint32_t local_transfers = 0u;
    std::uint32_t local_pc = ctx.pc;
    std::uint32_t entry_id = direct_entry_id;
LOCAL_DISPATCH:
    {
    if (entry_id == 0u) {
        const std::uint32_t entry_delta = local_pc - 0x08814000u;
        entry_id = (entry_delta < 16352u && (entry_delta & 3u) == 0u) ? kEntryIds_recomp_unit_0004[entry_delta >> 2u] : 0u;
    }
    switch (entry_id) {
    case 1u: goto L_08814000;
    case 2u: goto L_08814008;
    case 3u: goto L_08814014;
    case 4u: goto L_08814028;
    case 5u: goto L_08814064;
    case 6u: goto L_08814088;
    case 7u: goto L_08814094;
    case 8u: goto L_0881409C;
    case 9u: goto L_088140A4;
    case 10u: goto L_088140AC;
    case 11u: goto L_088140CC;
    case 12u: goto L_088140D4;
    case 13u: goto L_088140EC;
    case 14u: goto L_08814124;
    case 15u: goto L_0881412C;
    case 16u: goto L_08814148;
    case 17u: goto L_0881414C;
    case 18u: goto L_0881418C;
    case 19u: goto L_088141C8;
    case 20u: goto L_088141F0;
    case 21u: goto L_08814204;
    case 22u: goto L_08814234;
    case 23u: goto L_08814244;
    case 24u: goto L_08814260;
    case 25u: goto L_08814270;
    case 26u: goto L_08814348;
    case 27u: goto L_08814374;
    case 28u: goto L_0881439C;
    case 29u: goto L_088143A4;
    case 30u: goto L_088143AC;
    case 31u: goto L_088143C8;
    case 32u: goto L_088143D0;
    case 33u: goto L_088143DC;
    case 34u: goto L_088143E4;
    case 35u: goto L_088143EC;
    case 36u: goto L_088143F4;
    case 37u: goto L_08814400;
    case 38u: goto L_08814408;
    case 39u: goto L_08814424;
    case 40u: goto L_08814470;
    case 41u: goto L_088144A8;
    case 42u: goto L_088144B8;
    case 43u: goto L_088144C8;
    case 44u: goto L_088144E8;
    case 45u: goto L_08814528;
    case 46u: goto L_0881454C;
    case 47u: goto L_08814560;
    case 48u: goto L_08814578;
    case 49u: goto L_088145BC;
    case 50u: goto L_088145D0;
    case 51u: goto L_088145DC;
    case 52u: goto L_088145E0;
    case 53u: goto L_088145FC;
    case 54u: goto L_08814614;
    case 55u: goto L_08814618;
    case 56u: goto L_08814624;
    case 57u: goto L_0881462C;
    case 58u: goto L_08814638;
    case 59u: goto L_08814640;
    case 60u: goto L_0881464C;
    case 61u: goto L_08814660;
    case 62u: goto L_08814690;
    case 63u: goto L_0881469C;
    case 64u: goto L_088146A4;
    case 65u: goto L_088146BC;
    case 66u: goto L_088146D0;
    case 67u: goto L_088146F0;
    case 68u: goto L_088146F4;
    case 69u: goto L_0881470C;
    case 70u: goto L_08814720;
    case 71u: goto L_08814740;
    case 72u: goto L_08814744;
    case 73u: goto L_0881474C;
    case 74u: goto L_08814750;
    case 75u: goto L_08814758;
    case 76u: goto L_08814760;
    case 77u: goto L_08814764;
    case 78u: goto L_08814770;
    case 79u: goto L_08814784;
    case 80u: goto L_08814788;
    case 81u: goto L_088147A0;
    case 82u: goto L_088147A8;
    case 83u: goto L_088147B8;
    case 84u: goto L_088147C4;
    case 85u: goto L_088147D4;
    case 86u: goto L_088147D8;
    case 87u: goto L_08814804;
    case 88u: goto L_08814814;
    case 89u: goto L_08814834;
    case 90u: goto L_0881483C;
    case 91u: goto L_08814848;
    case 92u: goto L_08814850;
    case 93u: goto L_0881485C;
    case 94u: goto L_08814864;
    case 95u: goto L_0881486C;
    case 96u: goto L_08814878;
    case 97u: goto L_0881488C;
    case 98u: goto L_08814894;
    case 99u: goto L_088148A0;
    case 100u: goto L_088148AC;
    case 101u: goto L_088148B4;
    case 102u: goto L_088148BC;
    case 103u: goto L_088148C8;
    case 104u: goto L_088148D0;
    case 105u: goto L_088148F0;
    case 106u: goto L_08814900;
    case 107u: goto L_08814908;
    case 108u: goto L_08814910;
    case 109u: goto L_08814930;
    case 110u: goto L_08814938;
    case 111u: goto L_08814940;
    case 112u: goto L_08814944;
    case 113u: goto L_08814954;
    case 114u: goto L_0881495C;
    case 115u: goto L_08814964;
    case 116u: goto L_08814984;
    case 117u: goto L_0881498C;
    case 118u: goto L_08814998;
    case 119u: goto L_088149B8;
    case 120u: goto L_088149C0;
    case 121u: goto L_088149F0;
    case 122u: goto L_088149F8;
    case 123u: goto L_08814A04;
    case 124u: goto L_08814A0C;
    case 125u: goto L_08814A2C;
    case 126u: goto L_08814A34;
    case 127u: goto L_08814A40;
    case 128u: goto L_08814A48;
    case 129u: goto L_08814A68;
    case 130u: goto L_08814A70;
    case 131u: goto L_08814A7C;
    case 132u: goto L_08814A84;
    case 133u: goto L_08814A98;
    case 134u: goto L_08814AA0;
    case 135u: goto L_08814AAC;
    case 136u: goto L_08814AB4;
    case 137u: goto L_08814AC0;
    case 138u: goto L_08814AC8;
    case 139u: goto L_08814AD0;
    case 140u: goto L_08814ADC;
    case 141u: goto L_08814AFC;
    case 142u: goto L_08814B04;
    case 143u: goto L_08814B10;
    case 144u: goto L_08814B30;
    case 145u: goto L_08814B38;
    case 146u: goto L_08814B40;
    case 147u: goto L_08814B48;
    case 148u: goto L_08814B64;
    case 149u: goto L_08814B6C;
    case 150u: goto L_08814B78;
    case 151u: goto L_08814B80;
    case 152u: goto L_08814BA0;
    case 153u: goto L_08814BA8;
    case 154u: goto L_08814BB0;
    case 155u: goto L_08814BBC;
    case 156u: goto L_08814BC4;
    case 157u: goto L_08814BCC;
    case 158u: goto L_08814BDC;
    case 159u: goto L_08814BE4;
    case 160u: goto L_08814BE8;
    case 161u: goto L_08814BF8;
    case 162u: goto L_08814C00;
    case 163u: goto L_08814C08;
    case 164u: goto L_08814C1C;
    case 165u: goto L_08814C3C;
    case 166u: goto L_08814C44;
    case 167u: goto L_08814C4C;
    case 168u: goto L_08814C6C;
    case 169u: goto L_08814C74;
    case 170u: goto L_08814C8C;
    case 171u: goto L_08814C94;
    case 172u: goto L_08814C98;
    case 173u: goto L_08814CA4;
    case 174u: goto L_08814CB0;
    case 175u: goto L_08814CB8;
    case 176u: goto L_08814CC8;
    case 177u: goto L_08814CD0;
    case 178u: goto L_08814CD4;
    case 179u: goto L_08814CE4;
    case 180u: goto L_08814CEC;
    case 181u: goto L_08814CF4;
    case 182u: goto L_08814D08;
    case 183u: goto L_08814D28;
    case 184u: goto L_08814D30;
    case 185u: goto L_08814D38;
    case 186u: goto L_08814D58;
    case 187u: goto L_08814D60;
    case 188u: goto L_08814D6C;
    case 189u: goto L_08814D74;
    case 190u: goto L_08814D80;
    case 191u: goto L_08814D88;
    case 192u: goto L_08814D90;
    case 193u: goto L_08814D9C;
    case 194u: goto L_08814DA4;
    case 195u: goto L_08814DB0;
    case 196u: goto L_08814DB8;
    case 197u: goto L_08814DC0;
    case 198u: goto L_08814DCC;
    case 199u: goto L_08814DD4;
    case 200u: goto L_08814DE0;
    case 201u: goto L_08814DE8;
    case 202u: goto L_08814DF0;
    case 203u: goto L_08814E08;
    case 204u: goto L_08814E14;
    case 205u: goto L_08814E1C;
    case 206u: goto L_08814E24;
    case 207u: goto L_08814E30;
    case 208u: goto L_08814E38;
    case 209u: goto L_08814E40;
    case 210u: goto L_08814E4C;
    case 211u: goto L_08814E54;
    case 212u: goto L_08814E5C;
    case 213u: goto L_08814E68;
    case 214u: goto L_08814E88;
    case 215u: goto L_08814E98;
    case 216u: goto L_08814EA4;
    case 217u: goto L_08814EC4;
    case 218u: goto L_08814ED0;
    case 219u: goto L_08814EFC;
    case 220u: goto L_08814F0C;
    case 221u: goto L_08814F10;
    case 222u: goto L_08814F24;
    case 223u: goto L_08814F2C;
    case 224u: goto L_08814F48;
    case 225u: goto L_08814F64;
    case 226u: goto L_08814F84;
    case 227u: goto L_08814FC0;
    case 228u: goto L_08814FF4;
    case 229u: goto L_08814FFC;
    case 230u: goto L_08815018;
    case 231u: goto L_0881501C;
    case 232u: goto L_08815024;
    case 233u: goto L_08815030;
    case 234u: goto L_08815048;
    case 235u: goto L_08815064;
    case 236u: goto L_08815070;
    case 237u: goto L_08815078;
    case 238u: goto L_0881508C;
    case 239u: goto L_08815094;
    case 240u: goto L_088150A4;
    case 241u: goto L_088150D8;
    case 242u: goto L_088150E8;
    case 243u: goto L_08815110;
    case 244u: goto L_08815138;
    case 245u: goto L_08815158;
    case 246u: goto L_08815168;
    case 247u: goto L_0881516C;
    case 248u: goto L_08815170;
    case 249u: goto L_088151A0;
    case 250u: goto L_088151AC;
    case 251u: goto L_088151BC;
    case 252u: goto L_088151D8;
    case 253u: goto L_088151E0;
    case 254u: goto L_088151E4;
    case 255u: goto L_08815214;
    case 256u: goto L_08815218;
    case 257u: goto L_08815220;
    case 258u: goto L_08815230;
    case 259u: goto L_0881524C;
    case 260u: goto L_08815280;
    case 261u: goto L_08815288;
    case 262u: goto L_08815290;
    case 263u: goto L_08815298;
    case 264u: goto L_088152A0;
    case 265u: goto L_088152B8;
    case 266u: goto L_088152C4;
    case 267u: goto L_088152D0;
    case 268u: goto L_088152F4;
    case 269u: goto L_08815318;
    case 270u: goto L_08815334;
    case 271u: goto L_0881533C;
    case 272u: goto L_08815344;
    case 273u: goto L_0881534C;
    case 274u: goto L_08815350;
    case 275u: goto L_0881535C;
    case 276u: goto L_08815380;
    case 277u: goto L_0881538C;
    case 278u: goto L_08815394;
    case 279u: goto L_088153A8;
    case 280u: goto L_088153E0;
    case 281u: goto L_088153E8;
    case 282u: goto L_088153F4;
    case 283u: goto L_088153FC;
    case 284u: goto L_08815414;
    case 285u: goto L_08815434;
    case 286u: goto L_08815444;
    case 287u: goto L_08815468;
    case 288u: goto L_08815490;
    case 289u: goto L_088154AC;
    case 290u: goto L_088154DC;
    case 291u: goto L_088154E4;
    case 292u: goto L_088154FC;
    case 293u: goto L_08815518;
    case 294u: goto L_08815534;
    case 295u: goto L_08815540;
    case 296u: goto L_08815548;
    case 297u: goto L_08815564;
    case 298u: goto L_08815588;
    case 299u: goto L_08815590;
    case 300u: goto L_088155AC;
    case 301u: goto L_088155D8;
    case 302u: goto L_088155E4;
    case 303u: goto L_08815600;
    case 304u: goto L_0881560C;
    case 305u: goto L_08815618;
    case 306u: goto L_08815620;
    case 307u: goto L_08815624;
    case 308u: goto L_0881562C;
    case 309u: goto L_08815638;
    case 310u: goto L_08815644;
    case 311u: goto L_08815650;
    case 312u: goto L_08815658;
    case 313u: goto L_08815660;
    case 314u: goto L_08815668;
    case 315u: goto L_08815674;
    case 316u: goto L_08815678;
    case 317u: goto L_08815680;
    case 318u: goto L_0881568C;
    case 319u: goto L_08815698;
    case 320u: goto L_088156A0;
    case 321u: goto L_088156A4;
    case 322u: goto L_088156AC;
    case 323u: goto L_088156B4;
    case 324u: goto L_088156B8;
    case 325u: goto L_088156C0;
    case 326u: goto L_088156E0;
    case 327u: goto L_088156EC;
    case 328u: goto L_088156F4;
    case 329u: goto L_088156F8;
    case 330u: goto L_08815704;
    case 331u: goto L_08815708;
    case 332u: goto L_08815718;
    case 333u: goto L_08815728;
    case 334u: goto L_08815730;
    case 335u: goto L_08815734;
    case 336u: goto L_0881573C;
    case 337u: goto L_08815748;
    case 338u: goto L_0881574C;
    case 339u: goto L_08815754;
    case 340u: goto L_08815840;
    case 341u: goto L_08815854;
    case 342u: goto L_0881585C;
    case 343u: goto L_08815864;
    case 344u: goto L_08815878;
    case 345u: goto L_08815884;
    case 346u: goto L_08815888;
    case 347u: goto L_08815898;
    case 348u: goto L_088158A4;
    case 349u: goto L_088158B0;
    case 350u: goto L_088158B8;
    case 351u: goto L_088158C0;
    case 352u: goto L_088158CC;
    case 353u: goto L_088158D0;
    case 354u: goto L_088158DC;
    case 355u: goto L_088158E8;
    case 356u: goto L_088158EC;
    case 357u: goto L_088158F8;
    case 358u: goto L_088158FC;
    case 359u: goto L_08815910;
    case 360u: goto L_0881592C;
    case 361u: goto L_08815940;
    case 362u: goto L_08815960;
    case 363u: goto L_08815964;
    case 364u: goto L_08815978;
    case 365u: goto L_08815980;
    case 366u: goto L_08815988;
    case 367u: goto L_08815990;
    case 368u: goto L_08815998;
    case 369u: goto L_088159A8;
    case 370u: goto L_088159B8;
    case 371u: goto L_088159C0;
    case 372u: goto L_088159D0;
    case 373u: goto L_088159D8;
    case 374u: goto L_088159E0;
    case 375u: goto L_088159E8;
    case 376u: goto L_088159F0;
    case 377u: goto L_088159F8;
    case 378u: goto L_08815A00;
    case 379u: goto L_08815A08;
    case 380u: goto L_08815A30;
    case 381u: goto L_08815A54;
    case 382u: goto L_08815A64;
    case 383u: goto L_08815A68;
    case 384u: goto L_08815A7C;
    case 385u: goto L_08815A84;
    case 386u: goto L_08815AA0;
    case 387u: goto L_08815AB8;
    case 388u: goto L_08815ABC;
    case 389u: goto L_08815ACC;
    case 390u: goto L_08815AD4;
    case 391u: goto L_08815AE4;
    case 392u: goto L_08815AEC;
    case 393u: goto L_08815AFC;
    case 394u: goto L_08815BB0;
    case 395u: goto L_08815BD0;
    case 396u: goto L_08815BDC;
    case 397u: goto L_08815BF0;
    case 398u: goto L_08815BF8;
    case 399u: goto L_08815C04;
    case 400u: goto L_08815C10;
    case 401u: goto L_08815C14;
    case 402u: goto L_08815C2C;
    case 403u: goto L_08815C4C;
    case 404u: goto L_08815C54;
    case 405u: goto L_08815C74;
    case 406u: goto L_08815C84;
    case 407u: goto L_08815C8C;
    case 408u: goto L_08815C94;
    case 409u: goto L_08815D50;
    case 410u: goto L_08815D64;
    case 411u: goto L_08815E04;
    case 412u: goto L_08815E2C;
    case 413u: goto L_08815E3C;
    case 414u: goto L_08815E40;
    case 415u: goto L_08815E54;
    case 416u: goto L_08815E5C;
    case 417u: goto L_08815E78;
    case 418u: goto L_08815EF8;
    case 419u: goto L_08815F50;
    case 420u: goto L_08815F64;
    case 421u: goto L_08815F6C;
    case 422u: goto L_08815F70;
    case 423u: goto L_08815FF4;
    case 424u: goto L_08816050;
    case 425u: goto L_08816064;
    case 426u: goto L_0881607C;
    case 427u: goto L_08816084;
    case 428u: goto L_088160C0;
    case 429u: goto L_088160E8;
    case 430u: goto L_088160FC;
    case 431u: goto L_0881619C;
    case 432u: goto L_088161C0;
    case 433u: goto L_088161D4;
    case 434u: goto L_088161DC;
    case 435u: goto L_08816204;
    case 436u: goto L_0881622C;
    case 437u: goto L_08816258;
    case 438u: goto L_08816260;
    case 439u: goto L_08816274;
    case 440u: goto L_08816278;
    case 441u: goto L_08816288;
    case 442u: goto L_088162B0;
    case 443u: goto L_088162D4;
    case 444u: goto L_088162E8;
    case 445u: goto L_088162F8;
    case 446u: goto L_08816320;
    case 447u: goto L_08816344;
    case 448u: goto L_08816358;
    case 449u: goto L_08816370;
    case 450u: goto L_08816384;
    case 451u: goto L_08816390;
    case 452u: goto L_088163C8;
    case 453u: goto L_088163D8;
    case 454u: goto L_08816414;
    case 455u: goto L_08816458;
    case 456u: goto L_08816470;
    case 457u: goto L_0881649C;
    case 458u: goto L_088164A8;
    case 459u: goto L_088164C4;
    case 460u: goto L_088164D0;
    case 461u: goto L_088164D4;
    case 462u: goto L_088164E0;
    case 463u: goto L_088164E8;
    case 464u: goto L_088164FC;
    case 465u: goto L_0881650C;
    case 466u: goto L_08816518;
    case 467u: goto L_08816528;
    case 468u: goto L_08816554;
    case 469u: goto L_08816558;
    case 470u: goto L_08816564;
    case 471u: goto L_0881656C;
    case 472u: goto L_0881657C;
    case 473u: goto L_08816584;
    case 474u: goto L_0881658C;
    case 475u: goto L_088165B8;
    case 476u: goto L_088165BC;
    case 477u: goto L_088165F8;
    case 478u: goto L_08816600;
    case 479u: goto L_08816608;
    case 480u: goto L_08816610;
    case 481u: goto L_08816624;
    case 482u: goto L_08816630;
    case 483u: goto L_08816638;
    case 484u: goto L_08816644;
    case 485u: goto L_08816650;
    case 486u: goto L_08816658;
    case 487u: goto L_08816660;
    case 488u: goto L_08816664;
    case 489u: goto L_08816674;
    case 490u: goto L_0881667C;
    case 491u: goto L_08816690;
    case 492u: goto L_088166BC;
    case 493u: goto L_088166C0;
    case 494u: goto L_088166E4;
    case 495u: goto L_088166E8;
    case 496u: goto L_088166FC;
    case 497u: goto L_08816704;
    case 498u: goto L_08816710;
    case 499u: goto L_08816718;
    case 500u: goto L_08816720;
    case 501u: goto L_08816728;
    case 502u: goto L_0881672C;
    case 503u: goto L_08816738;
    case 504u: goto L_08816740;
    case 505u: goto L_08816748;
    case 506u: goto L_08816754;
    case 507u: goto L_0881675C;
    case 508u: goto L_08816764;
    case 509u: goto L_08816768;
    case 510u: goto L_08816774;
    case 511u: goto L_0881677C;
    case 512u: goto L_08816788;
    case 513u: goto L_08816794;
    case 514u: goto L_088167A4;
    case 515u: goto L_088167A8;
    case 516u: goto L_088167B8;
    case 517u: goto L_088167C0;
    case 518u: goto L_088167D4;
    case 519u: goto L_088167DC;
    case 520u: goto L_088167E8;
    case 521u: goto L_08816834;
    case 522u: goto L_0881683C;
    case 523u: goto L_08816844;
    case 524u: goto L_0881684C;
    case 525u: goto L_08816854;
    case 526u: goto L_08816858;
    case 527u: goto L_0881685C;
    case 528u: goto L_08816894;
    case 529u: goto L_0881689C;
    case 530u: goto L_088168E4;
    case 531u: goto L_088168F4;
    case 532u: goto L_08816920;
    case 533u: goto L_0881692C;
    case 534u: goto L_08816948;
    case 535u: goto L_08816958;
    case 536u: goto L_0881695C;
    case 537u: goto L_08816968;
    case 538u: goto L_0881696C;
    case 539u: goto L_08816978;
    case 540u: goto L_0881698C;
    case 541u: goto L_08816994;
    case 542u: goto L_088169A0;
    case 543u: goto L_088169A8;
    case 544u: goto L_088169B0;
    case 545u: goto L_088169C0;
    case 546u: goto L_088169C8;
    case 547u: goto L_088169DC;
    case 548u: goto L_088169E0;
    case 549u: goto L_088169F0;
    case 550u: goto L_088169FC;
    case 551u: goto L_08816A00;
    case 552u: goto L_08816A0C;
    case 553u: goto L_08816A14;
    case 554u: goto L_08816A1C;
    case 555u: goto L_08816A24;
    case 556u: goto L_08816A2C;
    case 557u: goto L_08816A30;
    case 558u: goto L_08816A38;
    case 559u: goto L_08816A48;
    case 560u: goto L_08816A54;
    case 561u: goto L_08816A78;
    case 562u: goto L_08816A7C;
    case 563u: goto L_08816A88;
    case 564u: goto L_08816AB4;
    case 565u: goto L_08816AC0;
    case 566u: goto L_08816AC8;
    case 567u: goto L_08816AD0;
    case 568u: goto L_08816AD8;
    case 569u: goto L_08816AE0;
    case 570u: goto L_08816AF8;
    case 571u: goto L_08816B00;
    case 572u: goto L_08816B08;
    case 573u: goto L_08816B10;
    case 574u: goto L_08816B28;
    case 575u: goto L_08816B34;
    case 576u: goto L_08816B3C;
    case 577u: goto L_08816B5C;
    case 578u: goto L_08816B68;
    case 579u: goto L_08816B70;
    case 580u: goto L_08816B78;
    case 581u: goto L_08816B80;
    case 582u: goto L_08816B84;
    case 583u: goto L_08816B90;
    case 584u: goto L_08816BA4;
    case 585u: goto L_08816BAC;
    case 586u: goto L_08816BB4;
    case 587u: goto L_08816BC0;
    case 588u: goto L_08816BC8;
    case 589u: goto L_08816BCC;
    case 590u: goto L_08816BD8;
    case 591u: goto L_08816BEC;
    case 592u: goto L_08816BF4;
    case 593u: goto L_08816BFC;
    case 594u: goto L_08816C04;
    case 595u: goto L_08816C0C;
    case 596u: goto L_08816C18;
    case 597u: goto L_08816C1C;
    case 598u: goto L_08816C24;
    case 599u: goto L_08816C44;
    case 600u: goto L_08816C48;
    case 601u: goto L_08816C50;
    case 602u: goto L_08816C64;
    case 603u: goto L_08816C6C;
    case 604u: goto L_08816C7C;
    case 605u: goto L_08816C84;
    case 606u: goto L_08816C90;
    case 607u: goto L_08816C98;
    case 608u: goto L_08816CA4;
    case 609u: goto L_08816CB0;
    case 610u: goto L_08816CBC;
    case 611u: goto L_08816CCC;
    case 612u: goto L_08816CD4;
    case 613u: goto L_08816CDC;
    case 614u: goto L_08816CFC;
    case 615u: goto L_08816D04;
    case 616u: goto L_08816D08;
    case 617u: goto L_08816D14;
    case 618u: goto L_08816D1C;
    case 619u: goto L_08816D34;
    case 620u: goto L_08816D44;
    case 621u: goto L_08816D50;
    case 622u: goto L_08816D5C;
    case 623u: goto L_08816D60;
    case 624u: goto L_08816D68;
    case 625u: goto L_08816D6C;
    case 626u: goto L_08816D7C;
    case 627u: goto L_08816D88;
    case 628u: goto L_08816D98;
    case 629u: goto L_08816D9C;
    case 630u: goto L_08816DA4;
    case 631u: goto L_08816DAC;
    case 632u: goto L_08816DB4;
    case 633u: goto L_08816E00;
    case 634u: goto L_08816E18;
    case 635u: goto L_08816E34;
    case 636u: goto L_08816E3C;
    case 637u: goto L_08816E4C;
    case 638u: goto L_08816E5C;
    case 639u: goto L_08816E60;
    case 640u: goto L_08816E68;
    case 641u: goto L_08816E74;
    case 642u: goto L_08816E80;
    case 643u: goto L_08816E84;
    case 644u: goto L_08816E8C;
    case 645u: goto L_08816E94;
    case 646u: goto L_08816E9C;
    case 647u: goto L_08816EA8;
    case 648u: goto L_08816EAC;
    case 649u: goto L_08816EB4;
    case 650u: goto L_08816EB8;
    case 651u: goto L_08816EC4;
    case 652u: goto L_08816F10;
    case 653u: goto L_08816F18;
    case 654u: goto L_08816F30;
    case 655u: goto L_08816F38;
    case 656u: goto L_08816F4C;
    case 657u: goto L_08816F50;
    case 658u: goto L_08816F58;
    case 659u: goto L_08816F64;
    case 660u: goto L_08816F74;
    case 661u: goto L_08816F78;
    case 662u: goto L_08816F90;
    case 663u: goto L_08816F9C;
    case 664u: goto L_08816FA4;
    case 665u: goto L_08816FB0;
    case 666u: goto L_08816FC8;
    case 667u: goto L_08816FD0;
    case 668u: goto L_08816FE8;
    case 669u: goto L_08816FF0;
    case 670u: goto L_0881702C;
    case 671u: goto L_0881703C;
    case 672u: goto L_08817050;
    case 673u: goto L_0881705C;
    case 674u: goto L_08817070;
    case 675u: goto L_0881707C;
    case 676u: goto L_08817080;
    case 677u: goto L_0881708C;
    case 678u: goto L_088170A0;
    case 679u: goto L_088170A4;
    case 680u: goto L_088170B0;
    case 681u: goto L_088170B4;
    case 682u: goto L_088170BC;
    case 683u: goto L_088170C4;
    case 684u: goto L_088170E0;
    case 685u: goto L_088170EC;
    case 686u: goto L_088170FC;
    case 687u: goto L_08817118;
    case 688u: goto L_08817128;
    case 689u: goto L_08817134;
    case 690u: goto L_08817148;
    case 691u: goto L_08817150;
    case 692u: goto L_0881715C;
    case 693u: goto L_0881716C;
    case 694u: goto L_08817174;
    case 695u: goto L_08817198;
    case 696u: goto L_088171A4;
    case 697u: goto L_088171B0;
    case 698u: goto L_088171BC;
    case 699u: goto L_088171C8;
    case 700u: goto L_088171D4;
    case 701u: goto L_088171E4;
    case 702u: goto L_088171F0;
    case 703u: goto L_088171FC;
    case 704u: goto L_08817208;
    case 705u: goto L_08817218;
    case 706u: goto L_08817220;
    case 707u: goto L_08817250;
    case 708u: goto L_08817274;
    case 709u: goto L_08817284;
    case 710u: goto L_08817298;
    case 711u: goto L_0881729C;
    case 712u: goto L_088172A0;
    case 713u: goto L_088172B0;
    case 714u: goto L_088172C0;
    case 715u: goto L_088172C8;
    case 716u: goto L_088172DC;
    case 717u: goto L_088172F4;
    case 718u: goto L_088172F8;
    case 719u: goto L_08817304;
    case 720u: goto L_0881731C;
    case 721u: goto L_08817324;
    case 722u: goto L_08817338;
    case 723u: goto L_08817344;
    case 724u: goto L_0881734C;
    case 725u: goto L_08817358;
    case 726u: goto L_08817368;
    case 727u: goto L_0881736C;
    case 728u: goto L_08817374;
    case 729u: goto L_08817388;
    case 730u: goto L_0881739C;
    case 731u: goto L_088173A4;
    case 732u: goto L_088173B8;
    case 733u: goto L_088173BC;
    case 734u: goto L_088173C4;
    case 735u: goto L_088173D0;
    case 736u: goto L_088173DC;
    case 737u: goto L_088173E8;
    case 738u: goto L_08817408;
    case 739u: goto L_08817428;
    case 740u: goto L_08817440;
    case 741u: goto L_08817450;
    case 742u: goto L_0881745C;
    case 743u: goto L_0881746C;
    case 744u: goto L_08817478;
    case 745u: goto L_0881747C;
    case 746u: goto L_08817498;
    case 747u: goto L_088174A4;
    case 748u: goto L_088174B8;
    case 749u: goto L_088174C4;
    case 750u: goto L_088174CC;
    case 751u: goto L_088174D8;
    case 752u: goto L_088174EC;
    case 753u: goto L_088174FC;
    case 754u: goto L_08817500;
    case 755u: goto L_08817508;
    case 756u: goto L_08817514;
    case 757u: goto L_08817518;
    case 758u: goto L_08817520;
    case 759u: goto L_0881752C;
    case 760u: goto L_08817530;
    case 761u: goto L_08817538;
    case 762u: goto L_08817544;
    case 763u: goto L_08817548;
    case 764u: goto L_08817550;
    case 765u: goto L_0881755C;
    case 766u: goto L_08817560;
    case 767u: goto L_08817570;
    case 768u: goto L_08817588;
    case 769u: goto L_08817590;
    case 770u: goto L_08817598;
    case 771u: goto L_088175A0;
    case 772u: goto L_088175C0;
    case 773u: goto L_088175C8;
    case 774u: goto L_088175DC;
    case 775u: goto L_088175F0;
    case 776u: goto L_08817614;
    case 777u: goto L_08817618;
    case 778u: goto L_08817634;
    case 779u: goto L_08817648;
    case 780u: goto L_0881765C;
    case 781u: goto L_08817688;
    case 782u: goto L_08817698;
    case 783u: goto L_0881769C;
    case 784u: goto L_088176B4;
    case 785u: goto L_088176C4;
    case 786u: goto L_088176D4;
    case 787u: goto L_088176DC;
    case 788u: goto L_088176E4;
    case 789u: goto L_088176EC;
    case 790u: goto L_088176F4;
    case 791u: goto L_08817718;
    case 792u: goto L_08817724;
    case 793u: goto L_0881772C;
    case 794u: goto L_0881773C;
    case 795u: goto L_08817748;
    case 796u: goto L_08817760;
    case 797u: goto L_08817770;
    case 798u: goto L_08817780;
    case 799u: goto L_08817784;
    case 800u: goto L_0881778C;
    case 801u: goto L_0881779C;
    case 802u: goto L_088177A4;
    case 803u: goto L_088177B0;
    case 804u: goto L_088177B4;
    case 805u: goto L_088177BC;
    case 806u: goto L_088177C8;
    case 807u: goto L_088177D4;
    case 808u: goto L_088177E4;
    case 809u: goto L_088177F0;
    case 810u: goto L_08817800;
    case 811u: goto L_08817818;
    case 812u: goto L_08817820;
    case 813u: goto L_08817828;
    case 814u: goto L_0881783C;
    case 815u: goto L_08817848;
    case 816u: goto L_08817854;
    case 817u: goto L_08817864;
    case 818u: goto L_08817868;
    case 819u: goto L_0881787C;
    case 820u: goto L_08817884;
    case 821u: goto L_08817898;
    case 822u: goto L_088178A0;
    case 823u: goto L_088178A4;
    case 824u: goto L_088178AC;
    case 825u: goto L_088178B8;
    case 826u: goto L_088178C4;
    case 827u: goto L_088178D0;
    case 828u: goto L_088178DC;
    case 829u: goto L_088178E4;
    case 830u: goto L_088178EC;
    case 831u: goto L_088178FC;
    case 832u: goto L_08817900;
    case 833u: goto L_08817904;
    case 834u: goto L_08817918;
    case 835u: goto L_08817930;
    case 836u: goto L_08817938;
    case 837u: goto L_08817944;
    case 838u: goto L_08817948;
    case 839u: goto L_08817964;
    case 840u: goto L_0881796C;
    case 841u: goto L_0881797C;
    case 842u: goto L_08817990;
    case 843u: goto L_08817998;
    case 844u: goto L_088179AC;
    case 845u: goto L_088179C4;
    case 846u: goto L_088179D8;
    case 847u: goto L_088179E0;
    case 848u: goto L_088179E8;
    case 849u: goto L_088179F0;
    case 850u: goto L_088179F8;
    case 851u: goto L_08817A04;
    case 852u: goto L_08817A14;
    case 853u: goto L_08817A20;
    case 854u: goto L_08817A2C;
    case 855u: goto L_08817A38;
    case 856u: goto L_08817A58;
    case 857u: goto L_08817A60;
    case 858u: goto L_08817A64;
    case 859u: goto L_08817A84;
    case 860u: goto L_08817A8C;
    case 861u: goto L_08817A98;
    case 862u: goto L_08817AA8;
    case 863u: goto L_08817AAC;
    case 864u: goto L_08817ABC;
    case 865u: goto L_08817ACC;
    case 866u: goto L_08817AF0;
    case 867u: goto L_08817AFC;
    case 868u: goto L_08817B10;
    case 869u: goto L_08817B18;
    case 870u: goto L_08817B24;
    case 871u: goto L_08817B30;
    case 872u: goto L_08817B3C;
    case 873u: goto L_08817B4C;
    case 874u: goto L_08817B54;
    case 875u: goto L_08817B80;
    case 876u: goto L_08817B88;
    case 877u: goto L_08817BA4;
    case 878u: goto L_08817BA8;
    case 879u: goto L_08817BAC;
    case 880u: goto L_08817BB4;
    case 881u: goto L_08817BBC;
    case 882u: goto L_08817BC4;
    case 883u: goto L_08817BD8;
    case 884u: goto L_08817BF4;
    case 885u: goto L_08817BFC;
    case 886u: goto L_08817C04;
    case 887u: goto L_08817C20;
    case 888u: goto L_08817C34;
    case 889u: goto L_08817C40;
    case 890u: goto L_08817C4C;
    case 891u: goto L_08817C5C;
    case 892u: goto L_08817C64;
    case 893u: goto L_08817C74;
    case 894u: goto L_08817C98;
    case 895u: goto L_08817CA4;
    case 896u: goto L_08817CB0;
    case 897u: goto L_08817CC0;
    case 898u: goto L_08817CCC;
    case 899u: goto L_08817CDC;
    case 900u: goto L_08817CE8;
    case 901u: goto L_08817CF4;
    case 902u: goto L_08817D00;
    case 903u: goto L_08817D10;
    case 904u: goto L_08817D18;
    case 905u: goto L_08817D50;
    case 906u: goto L_08817D6C;
    case 907u: goto L_08817D74;
    case 908u: goto L_08817D88;
    case 909u: goto L_08817D9C;
    case 910u: goto L_08817DB8;
    case 911u: goto L_08817DCC;
    case 912u: goto L_08817DD4;
    case 913u: goto L_08817DE0;
    case 914u: goto L_08817E08;
    case 915u: goto L_08817E20;
    case 916u: goto L_08817E2C;
    case 917u: goto L_08817E44;
    case 918u: goto L_08817E68;
    case 919u: goto L_08817E8C;
    case 920u: goto L_08817E98;
    case 921u: goto L_08817EA4;
    case 922u: goto L_08817EB0;
    case 923u: goto L_08817EB8;
    case 924u: goto L_08817EC0;
    case 925u: goto L_08817EC8;
    case 926u: goto L_08817EDC;
    case 927u: goto L_08817EE8;
    case 928u: goto L_08817EF4;
    case 929u: goto L_08817F14;
    case 930u: goto L_08817F20;
    case 931u: goto L_08817F2C;
    case 932u: goto L_08817F38;
    case 933u: goto L_08817F54;
    case 934u: goto L_08817FC0;
    case 935u: goto L_08817FDC;
    default:
        if (local_transfers == 0u) rt.unsupported(ctx.pc, 0u, "invalid internal function entry");
        else ctx.pc = local_pc;
        return;
    }
    }
L_08814000:
    ctx.set_gpr(2, 0u + static_cast<std::uint32_t>(32));
    (void)rt.invoke_chained_direct<&recomp_unit_0003_entry, 3u, 923u, 0x08813F94u>(ctx, &aot_mem); return;
L_08814008:
    ctx.set_gpr(2, rt.memory().aot_load32(ctx.gpr[17] + static_cast<std::uint32_t>(-8)));
    ctx.set_gpr(3, ctx.gpr[2] >> (ctx.gpr[6] & 31u));
    (void)rt.invoke_chained_direct<&recomp_unit_0003_entry, 3u, 919u, 0x08813F04u>(ctx, &aot_mem); return;
L_08814014:
    ctx.set_gpr(2, rt.memory().aot_load32(ctx.gpr[22] + static_cast<std::uint32_t>(-4)));
    ctx.set_gpr(3, ctx.gpr[2] >> (ctx.gpr[7] & 31u));
    ctx.set_gpr(2, ctx.gpr[6] << (ctx.gpr[5] & 31u));
    ctx.set_gpr(18, ctx.gpr[3] | ctx.gpr[2]);
    (void)rt.invoke_chained_direct<&recomp_unit_0003_entry, 3u, 925u, 0x08813FC0u>(ctx, &aot_mem); return;
L_08814028:
    ctx.set_gpr(29, ctx.gpr[29] + static_cast<std::uint32_t>(-48));
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(20), ctx.gpr[17]);
    ctx.set_gpr(5, 0u + static_cast<std::uint32_t>(1));
    ctx.set_gpr(17, ctx.gpr[7] + 0u);
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(40), ctx.gpr[22]);
    ctx.set_gpr(22, ctx.gpr[9] + 0u);
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(36), ctx.gpr[21]);
    ctx.set_gpr(21, ctx.gpr[8] + 0u);
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(32), ctx.gpr[20]);
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(28), ctx.gpr[19]);
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(24), ctx.gpr[18]);
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(16), ctx.gpr[16]);
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(44), ctx.gpr[31]);
    ctx.set_gpr(31, 0x08814064u);
    ctx.set_gpr(16, ctx.gpr[6] + 0u);
    goto L_08814348;
L_08814064:
    ctx.set_gpr(3, ctx.gpr[17] + 0u);
    ctx.set_gpr(3, (ctx.gpr[3] & ~0x80000000u) | ((0u & 0x00000001u) << 31u));
    ctx.set_gpr(4, ctx.gpr[17] + 0u);
    ctx.set_gpr(18, ctx.gpr[2] + 0u);
    ctx.set_gpr(4, (ctx.gpr[4] & ~0xFFF00000u) | ((0u & 0x00000FFFu) << 20u));
    ctx.set_gpr(19, ctx.gpr[3] >> 20u);
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(4), ctx.gpr[4]);
    { const bool branch_taken = ctx.gpr[19] == 0u;
    ctx.set_gpr(20, ctx.gpr[18] + static_cast<std::uint32_t>(20));
      if (branch_taken) {
          goto L_08814094;
      }
      goto L_08814088;
    }
L_08814088:
    ctx.set_gpr(2, 16u << 16u);
    ctx.set_gpr(4, ctx.gpr[4] | ctx.gpr[2]);
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(4), ctx.gpr[4]);
    goto L_08814094;
L_08814094:
    { const bool branch_taken = ctx.gpr[16] == 0u;
    ctx.set_gpr(4, ctx.gpr[29] + 0u);
      if (branch_taken) {
          goto L_08814124;
      }
      goto L_0881409C;
    }
L_0881409C:
    ctx.set_gpr(31, 0x088140A4u);
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(0), ctx.gpr[16]);
    if (rt.invoke_chained_direct<&recomp_unit_0003_entry, 3u, 819u, 0x088136F0u>(ctx, &aot_mem) && ctx.pc == 0x088140A4u) goto L_088140A4;
    return;
L_088140A4:
    { const bool branch_taken = ctx.gpr[2] != 0u;
    ctx.set_gpr(5, ctx.gpr[2] + 0u);
      if (branch_taken) {
          goto L_0881418C;
      }
      goto L_088140AC;
    }
L_088140AC:
    ctx.set_gpr(2, rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(0)));
    ctx.set_gpr(16, 0u + static_cast<std::uint32_t>(2));
    rt.memory().aot_store32(ctx.gpr[18] + static_cast<std::uint32_t>(20), ctx.gpr[2]);
    ctx.set_gpr(2, 0u + static_cast<std::uint32_t>(1));
    ctx.set_gpr(4, rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(4)));
    if (ctx.gpr[4] == 0u) ctx.set_gpr(16, ctx.gpr[2]);
    rt.memory().aot_store32(ctx.gpr[20] + static_cast<std::uint32_t>(4), ctx.gpr[4]);
    rt.memory().aot_store32(ctx.gpr[18] + static_cast<std::uint32_t>(16), ctx.gpr[16]);
    goto L_088140CC;
L_088140CC:
    { const bool branch_taken = ctx.gpr[19] != 0u;
    ctx.set_gpr(2, ctx.gpr[5] + ctx.gpr[19]);
      if (branch_taken) {
          goto L_0881414C;
      }
      goto L_088140D4;
    }
L_088140D4:
    ctx.set_gpr(2, ctx.gpr[16] << 2u);
    ctx.set_gpr(2, ctx.gpr[2] + ctx.gpr[20]);
    ctx.set_gpr(4, rt.memory().aot_load32(ctx.gpr[2] + static_cast<std::uint32_t>(-4)));
    ctx.set_gpr(3, ctx.gpr[5] + static_cast<std::uint32_t>(-1074));
    ctx.set_gpr(31, 0x088140ECu);
    rt.memory().aot_store32(ctx.gpr[21] + static_cast<std::uint32_t>(0), ctx.gpr[3]);
    if (rt.invoke_chained_direct<&recomp_unit_0003_entry, 3u, 818u, 0x088136E8u>(ctx, &aot_mem) && ctx.pc == 0x088140ECu) goto L_088140EC;
    return;
L_088140EC:
    ctx.set_gpr(16, ctx.gpr[16] << 5u);
    ctx.set_gpr(16, ctx.gpr[16] - ctx.gpr[2]);
    rt.memory().aot_store32(ctx.gpr[22] + static_cast<std::uint32_t>(0), ctx.gpr[16]);
    ctx.set_gpr(2, ctx.gpr[18] + 0u);
    ctx.set_gpr(31, rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(44)));
    ctx.set_gpr(22, rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(40)));
    ctx.set_gpr(21, rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(36)));
    ctx.set_gpr(20, rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(32)));
    ctx.set_gpr(19, rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(28)));
    ctx.set_gpr(18, rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(24)));
    ctx.set_gpr(17, rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(20)));
    ctx.set_gpr(16, rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(16)));
    jump_target = ctx.gpr[31];
    ctx.set_gpr(29, ctx.gpr[29] + static_cast<std::uint32_t>(48));
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_08814124:
    ctx.set_gpr(31, 0x0881412Cu);
    ctx.set_gpr(4, ctx.gpr[29] + static_cast<std::uint32_t>(4));
    if (rt.invoke_chained_direct<&recomp_unit_0003_entry, 3u, 819u, 0x088136F0u>(ctx, &aot_mem) && ctx.pc == 0x0881412Cu) goto L_0881412C;
    return;
L_0881412C:
    ctx.set_gpr(5, ctx.gpr[2] + static_cast<std::uint32_t>(32));
    ctx.set_gpr(2, rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(4)));
    ctx.set_gpr(3, 0u + static_cast<std::uint32_t>(1));
    rt.memory().aot_store32(ctx.gpr[18] + static_cast<std::uint32_t>(16), ctx.gpr[3]);
    ctx.set_gpr(16, 0u + static_cast<std::uint32_t>(1));
    { const bool branch_taken = ctx.gpr[19] == 0u;
    rt.memory().aot_store32(ctx.gpr[18] + static_cast<std::uint32_t>(20), ctx.gpr[2]);
      if (branch_taken) {
          goto L_088140D4;
      }
      goto L_08814148;
    }
L_08814148:
    ctx.set_gpr(2, ctx.gpr[5] + ctx.gpr[19]);
    goto L_0881414C;
L_0881414C:
    ctx.set_gpr(3, 0u + static_cast<std::uint32_t>(53));
    ctx.set_gpr(2, ctx.gpr[2] + static_cast<std::uint32_t>(-1075));
    ctx.set_gpr(3, ctx.gpr[3] - ctx.gpr[5]);
    rt.memory().aot_store32(ctx.gpr[21] + static_cast<std::uint32_t>(0), ctx.gpr[2]);
    ctx.set_gpr(2, ctx.gpr[18] + 0u);
    rt.memory().aot_store32(ctx.gpr[22] + static_cast<std::uint32_t>(0), ctx.gpr[3]);
    ctx.set_gpr(31, rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(44)));
    ctx.set_gpr(22, rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(40)));
    ctx.set_gpr(21, rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(36)));
    ctx.set_gpr(20, rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(32)));
    ctx.set_gpr(19, rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(28)));
    ctx.set_gpr(18, rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(24)));
    ctx.set_gpr(17, rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(20)));
    ctx.set_gpr(16, rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(16)));
    jump_target = ctx.gpr[31];
    ctx.set_gpr(29, ctx.gpr[29] + static_cast<std::uint32_t>(48));
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_0881418C:
    ctx.set_gpr(3, rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(4)));
    ctx.set_gpr(4, rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(0)));
    ctx.set_gpr(2, 0u - ctx.gpr[2]);
    ctx.set_gpr(3, ctx.gpr[3] << (ctx.gpr[2] & 31u));
    ctx.set_gpr(3, ctx.gpr[3] | ctx.gpr[4]);
    rt.memory().aot_store32(ctx.gpr[18] + static_cast<std::uint32_t>(20), ctx.gpr[3]);
    ctx.set_gpr(16, 0u + static_cast<std::uint32_t>(2));
    ctx.set_gpr(2, 0u + static_cast<std::uint32_t>(1));
    ctx.set_gpr(4, rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(4)));
    ctx.set_gpr(4, ctx.gpr[4] >> (ctx.gpr[5] & 31u));
    if (ctx.gpr[4] == 0u) ctx.set_gpr(16, ctx.gpr[2]);
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(4), ctx.gpr[4]);
    rt.memory().aot_store32(ctx.gpr[18] + static_cast<std::uint32_t>(16), ctx.gpr[16]);
    rt.memory().aot_store32(ctx.gpr[20] + static_cast<std::uint32_t>(4), ctx.gpr[4]);
    goto L_088140CC;
L_088141C8:
    ctx.set_gpr(29, ctx.gpr[29] + static_cast<std::uint32_t>(-48));
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(16), ctx.gpr[16]);
    ctx.set_gpr(16, ctx.gpr[5] + 0u);
    ctx.set_gpr(5, ctx.gpr[29] + 0u);
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(32), ctx.gpr[31]);
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(28), ctx.gpr[19]);
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(24), ctx.gpr[18]);
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(20), ctx.gpr[17]);
    ctx.set_gpr(31, 0x088141F0u);
    ctx.set_gpr(17, ctx.gpr[4] + 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0003_entry, 3u, 916u, 0x08813E84u>(ctx, &aot_mem) && ctx.pc == 0x088141F0u) goto L_088141F0;
    return;
L_088141F0:
    ctx.set_gpr(4, ctx.gpr[16] + 0u);
    ctx.set_gpr(5, ctx.gpr[29] + static_cast<std::uint32_t>(4));
    ctx.set_gpr(18, ctx.gpr[2] + 0u);
    ctx.set_gpr(31, 0x08814204u);
    ctx.set_gpr(19, ctx.gpr[3] + 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0003_entry, 3u, 916u, 0x08813E84u>(ctx, &aot_mem) && ctx.pc == 0x08814204u) goto L_08814204;
    return;
L_08814204:
    ctx.set_gpr(6, ctx.gpr[2] + 0u);
    ctx.set_gpr(4, rt.memory().aot_load32(ctx.gpr[17] + static_cast<std::uint32_t>(16)));
    ctx.set_gpr(2, rt.memory().aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(16)));
    ctx.set_gpr(7, ctx.gpr[3] + 0u);
    ctx.set_gpr(3, rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(4)));
    ctx.set_gpr(4, ctx.gpr[4] - ctx.gpr[2]);
    ctx.set_gpr(2, rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(0)));
    ctx.set_gpr(4, ctx.gpr[4] << 5u);
    ctx.set_gpr(2, ctx.gpr[2] - ctx.gpr[3]);
    ctx.set_gpr(2, ctx.gpr[2] + ctx.gpr[4]);
    { const bool branch_taken = static_cast<std::int32_t>(ctx.gpr[2]) <= 0;
    ctx.set_gpr(3, ctx.gpr[2] << 20u);
      if (branch_taken) {
          goto L_08814260;
      }
      goto L_08814234;
    }
L_08814234:
    ctx.set_gpr(19, ctx.gpr[3] + ctx.gpr[19]);
    ctx.set_gpr(4, ctx.gpr[18] + 0u);
    ctx.set_gpr(31, 0x08814244u);
    ctx.set_gpr(5, ctx.gpr[19] + 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0006_entry, 6u, 827u, 0x0881F7D8u>(ctx, &aot_mem) && ctx.pc == 0x08814244u) goto L_08814244;
    return;
L_08814244:
    ctx.set_gpr(31, rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(32)));
    ctx.set_gpr(19, rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(28)));
    ctx.set_gpr(18, rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(24)));
    ctx.set_gpr(17, rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(20)));
    ctx.set_gpr(16, rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(16)));
    jump_target = ctx.gpr[31];
    ctx.set_gpr(29, ctx.gpr[29] + static_cast<std::uint32_t>(48));
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_08814260:
    ctx.set_gpr(4, ctx.gpr[18] + 0u);
    ctx.set_gpr(5, ctx.gpr[19] + 0u);
    ctx.set_gpr(31, 0x08814270u);
    ctx.set_gpr(7, ctx.gpr[7] - ctx.gpr[3]);
    if (rt.invoke_chained_direct<&recomp_unit_0006_entry, 6u, 827u, 0x0881F7D8u>(ctx, &aot_mem) && ctx.pc == 0x08814270u) goto L_08814270;
    return;
L_08814270:
    ctx.set_gpr(31, rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(32)));
    ctx.set_gpr(19, rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(28)));
    ctx.set_gpr(18, rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(24)));
    ctx.set_gpr(17, rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(20)));
    ctx.set_gpr(16, rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(16)));
    jump_target = ctx.gpr[31];
    ctx.set_gpr(29, ctx.gpr[29] + static_cast<std::uint32_t>(48));
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_08814348:
    ctx.set_gpr(29, ctx.gpr[29] + static_cast<std::uint32_t>(-16));
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(4), ctx.gpr[17]);
    ctx.set_gpr(6, 0u + static_cast<std::uint32_t>(16));
    ctx.set_gpr(17, ctx.gpr[5] + 0u);
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(0), ctx.gpr[16]);
    ctx.set_gpr(5, 0u + static_cast<std::uint32_t>(4));
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(12), ctx.gpr[31]);
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(8), ctx.gpr[18]);
    ctx.set_gpr(3, rt.memory().aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(76)));
    { const bool branch_taken = ctx.gpr[3] == 0u;
    ctx.set_gpr(16, ctx.gpr[4] + 0u);
      if (branch_taken) {
          goto L_088143C8;
      }
      goto L_08814374;
    }
L_08814374:
    ctx.set_gpr(2, ctx.gpr[17] << 2u);
    ctx.set_gpr(7, ctx.gpr[3] + ctx.gpr[2]);
    ctx.set_gpr(3, 0u + static_cast<std::uint32_t>(1));
    ctx.set_gpr(18, ctx.gpr[3] << (ctx.gpr[17] & 31u));
    ctx.set_gpr(3, rt.memory().aot_load32(ctx.gpr[7] + static_cast<std::uint32_t>(0)));
    ctx.set_gpr(6, ctx.gpr[18] << 2u);
    ctx.set_gpr(4, ctx.gpr[16] + 0u);
    ctx.set_gpr(6, ctx.gpr[6] + static_cast<std::uint32_t>(20));
    { const bool branch_taken = ctx.gpr[3] == 0u;
    ctx.set_gpr(5, 0u + static_cast<std::uint32_t>(1));
      if (branch_taken) {
          goto L_088143E4;
      }
      goto L_0881439C;
    }
L_0881439C:
    ctx.set_gpr(2, rt.memory().aot_load32(ctx.gpr[3] + static_cast<std::uint32_t>(0)));
    rt.memory().aot_store32(ctx.gpr[7] + static_cast<std::uint32_t>(0), ctx.gpr[2]);
    goto L_088143A4;
L_088143A4:
    rt.memory().aot_store32(ctx.gpr[3] + static_cast<std::uint32_t>(16), 0u);
    rt.memory().aot_store32(ctx.gpr[3] + static_cast<std::uint32_t>(12), 0u);
    goto L_088143AC;
L_088143AC:
    ctx.set_gpr(31, rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(12)));
    ctx.set_gpr(18, rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(8)));
    ctx.set_gpr(17, rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(4)));
    ctx.set_gpr(16, rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(0)));
    ctx.set_gpr(2, ctx.gpr[3] + 0u);
    jump_target = ctx.gpr[31];
    ctx.set_gpr(29, ctx.gpr[29] + static_cast<std::uint32_t>(16));
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_088143C8:
    ctx.set_gpr(31, 0x088143D0u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0002_entry, 2u, 688u, 0x0880F2E0u>(ctx, &aot_mem) && ctx.pc == 0x088143D0u) goto L_088143D0;
    return;
L_088143D0:
    ctx.set_gpr(3, ctx.gpr[2] + 0u);
    { const bool branch_taken = ctx.gpr[2] != 0u;
    rt.memory().aot_store32(ctx.gpr[16] + static_cast<std::uint32_t>(76), ctx.gpr[2]);
      if (branch_taken) {
          goto L_08814374;
      }
      goto L_088143DC;
    }
L_088143DC:
    ctx.set_gpr(3, 0u + 0u);
    goto L_088143AC;
L_088143E4:
    ctx.set_gpr(31, 0x088143ECu);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0002_entry, 2u, 688u, 0x0880F2E0u>(ctx, &aot_mem) && ctx.pc == 0x088143ECu) goto L_088143EC;
    return;
L_088143EC:
    { const bool branch_taken = ctx.gpr[2] == 0u;
    ctx.set_gpr(3, ctx.gpr[2] + 0u);
      if (branch_taken) {
          goto L_088143DC;
      }
      goto L_088143F4;
    }
L_088143F4:
    rt.memory().aot_store32(ctx.gpr[2] + static_cast<std::uint32_t>(4), ctx.gpr[17]);
    rt.memory().aot_store32(ctx.gpr[2] + static_cast<std::uint32_t>(8), ctx.gpr[18]);
    goto L_088143A4;
L_08814400:
    { const bool branch_taken = ctx.gpr[5] == 0u;
    // nop
      if (branch_taken) {
          goto L_08814424;
      }
      goto L_08814408;
    }
L_08814408:
    ctx.set_gpr(2, rt.memory().aot_load32(ctx.gpr[5] + static_cast<std::uint32_t>(4)));
    ctx.set_gpr(4, rt.memory().aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(76)));
    ctx.set_gpr(2, ctx.gpr[2] << 2u);
    ctx.set_gpr(2, ctx.gpr[2] + ctx.gpr[4]);
    ctx.set_gpr(3, rt.memory().aot_load32(ctx.gpr[2] + static_cast<std::uint32_t>(0)));
    rt.memory().aot_store32(ctx.gpr[5] + static_cast<std::uint32_t>(0), ctx.gpr[3]);
    rt.memory().aot_store32(ctx.gpr[2] + static_cast<std::uint32_t>(0), ctx.gpr[5]);
    goto L_08814424;
L_08814424:
    jump_target = ctx.gpr[31];
    // nop
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_08814470:
    ctx.set_gpr(29, ctx.gpr[29] + static_cast<std::uint32_t>(-64));
    ctx.set_gpr(2, ctx.gpr[29] + static_cast<std::uint32_t>(36));
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(20), ctx.gpr[31]);
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(16), ctx.gpr[16]);
    ctx.set_gpr(16, ctx.gpr[4] + 0u);
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(36), ctx.gpr[5]);
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(40), ctx.gpr[6]);
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(44), ctx.gpr[7]);
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(48), ctx.gpr[8]);
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(52), ctx.gpr[9]);
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(56), ctx.gpr[10]);
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(60), ctx.gpr[11]);
    ctx.set_gpr(31, 0x088144A8u);
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(0), ctx.gpr[2]);
    if (rt.invoke_chained_direct<&recomp_unit_0003_entry, 3u, 442u, 0x08811C60u>(ctx, &aot_mem) && ctx.pc == 0x088144A8u) goto L_088144A8;
    return;
L_088144A8:
    ctx.set_gpr(5, ctx.gpr[16] + 0u);
    ctx.set_gpr(6, rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(0)));
    ctx.set_gpr(31, 0x088144B8u);
    ctx.set_gpr(4, rt.memory().aot_load32(ctx.gpr[2] + static_cast<std::uint32_t>(8)));
    if (rt.invoke_chained_direct<&recomp_unit_0005_entry, 5u, 731u, 0x0881ABD0u>(ctx, &aot_mem) && ctx.pc == 0x088144B8u) goto L_088144B8;
    return;
L_088144B8:
    ctx.set_gpr(31, rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(20)));
    ctx.set_gpr(16, rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(16)));
    jump_target = ctx.gpr[31];
    ctx.set_gpr(29, ctx.gpr[29] + static_cast<std::uint32_t>(64));
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_088144C8:
    ctx.set_gpr(29, ctx.gpr[29] + static_cast<std::uint32_t>(-48));
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(32), ctx.gpr[16]);
    ctx.set_gpr(16, ctx.gpr[4] + 0u);
    ctx.set_gpr(4, ctx.gpr[5] + 0u);
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(40), ctx.gpr[31]);
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(36), ctx.gpr[17]);
    ctx.set_gpr(31, 0x088144E8u);
    ctx.set_gpr(17, ctx.gpr[5] + 0u);
    goto L_08816764;
L_088144E8:
    ctx.set_gpr(4, rt.memory().aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(8)));
    ctx.set_gpr(3, 2225u << 16u);
    ctx.set_gpr(3, ctx.gpr[3] + static_cast<std::uint32_t>(1232));
    ctx.set_gpr(6, 0u + static_cast<std::uint32_t>(1));
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(20), ctx.gpr[3]);
    ctx.set_gpr(7, ctx.gpr[2] + static_cast<std::uint32_t>(1));
    ctx.set_gpr(3, ctx.gpr[29] + static_cast<std::uint32_t>(12));
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(24), ctx.gpr[6]);
    ctx.set_gpr(5, ctx.gpr[29] + 0u);
    ctx.set_gpr(6, 0u + static_cast<std::uint32_t>(2));
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(12), ctx.gpr[17]);
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(0), ctx.gpr[3]);
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(8), ctx.gpr[7]);
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(4), ctx.gpr[6]);
    ctx.set_gpr(31, 0x08814528u);
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(16), ctx.gpr[2]);
    if (rt.invoke_chained_direct<&recomp_unit_0003_entry, 3u, 334u, 0x0881163Cu>(ctx, &aot_mem) && ctx.pc == 0x08814528u) goto L_08814528;
    return;
L_08814528:
    ctx.set_gpr(4, 0u + static_cast<std::uint32_t>(10));
    ctx.set_gpr(3, 0u + static_cast<std::uint32_t>(-1));
    ctx.set_gpr(31, rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(40)));
    ctx.set_gpr(17, rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(36)));
    ctx.set_gpr(16, rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(32)));
    if (ctx.gpr[2] == 0u) ctx.set_gpr(3, ctx.gpr[4]);
    ctx.set_gpr(2, ctx.gpr[3] + 0u);
    jump_target = ctx.gpr[31];
    ctx.set_gpr(29, ctx.gpr[29] + static_cast<std::uint32_t>(48));
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_0881454C:
    ctx.set_gpr(29, ctx.gpr[29] + static_cast<std::uint32_t>(-16));
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(4), ctx.gpr[31]);
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(0), ctx.gpr[16]);
    ctx.set_gpr(31, 0x08814560u);
    ctx.set_gpr(16, ctx.gpr[4] + 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0003_entry, 3u, 442u, 0x08811C60u>(ctx, &aot_mem) && ctx.pc == 0x08814560u) goto L_08814560;
    return;
L_08814560:
    ctx.set_gpr(4, ctx.gpr[2] + 0u);
    ctx.set_gpr(5, ctx.gpr[16] + 0u);
    ctx.set_gpr(31, rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(4)));
    ctx.set_gpr(16, rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(0)));
    ctx.set_gpr(29, ctx.gpr[29] + static_cast<std::uint32_t>(16));
    goto L_088144C8;
L_08814578:
    ctx.set_gpr(29, ctx.gpr[29] + static_cast<std::uint32_t>(-96));
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(60), ctx.gpr[19]);
    ctx.set_gpr(19, ctx.gpr[4] + 0u);
    ctx.set_gpr(2, ctx.gpr[19] & 3u);
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(76), ctx.gpr[23]);
    ctx.set_gpr(23, ctx.gpr[5] + 0u);
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(56), ctx.gpr[18]);
    ctx.set_gpr(18, ctx.gpr[6] + 0u);
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(84), ctx.gpr[31]);
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(80), ctx.gpr[30]);
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(72), ctx.gpr[22]);
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(68), ctx.gpr[21]);
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(64), ctx.gpr[20]);
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(52), ctx.gpr[17]);
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(48), ctx.gpr[16]);
    { const bool branch_taken = ctx.gpr[2] != 0u;
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(24), ctx.gpr[7]);
      if (branch_taken) {
          goto L_08814770;
      }
      goto L_088145BC;
    }
L_088145BC:
    ctx.set_gpr(2, ctx.gpr[18] ^ 4u);
    ctx.set_gpr(2, 0u < ctx.gpr[2] ? 1u : 0u);
    ctx.set_gpr(3, ctx.gpr[18] & 3u);
    { const bool branch_taken = ctx.gpr[3] != 0u;
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(12), ctx.gpr[2]);
      if (branch_taken) {
          goto L_08814770;
      }
      goto L_088145D0;
    }
L_088145D0:
    ctx.set_gpr(2, ctx.gpr[23] < static_cast<std::uint32_t>(7) ? 1u : 0u);
    { const bool branch_taken = ctx.gpr[2] != 0u;
    ctx.lo = ctx.gpr[19];
      if (branch_taken) {
          goto L_08814788;
      }
      goto L_088145DC;
    }
L_088145DC:
    ctx.set_gpr(2, ctx.gpr[23] >> 1u);
    goto L_088145E0;
L_088145E0:
    ctx.lo = ctx.gpr[19];
    ctx.execute_madd(2u, 18u);
    ctx.set_gpr(3, ctx.gpr[23] < static_cast<std::uint32_t>(8) ? 1u : 0u);
    ctx.set_gpr(20, ctx.gpr[19] + 0u);
    ctx.set_gpr(30, ctx.gpr[23] + static_cast<std::uint32_t>(-1));
    { const bool branch_taken = ctx.gpr[3] != 0u;
    ctx.set_gpr(16, ctx.lo);
      if (branch_taken) {
          goto L_08814640;
      }
      goto L_088145FC;
    }
L_088145FC:
    ctx.lo = ctx.gpr[19];
    ctx.execute_madd(18u, 30u);
    ctx.set_gpr(2, ctx.gpr[23] < static_cast<std::uint32_t>(41) ? 1u : 0u);
    ctx.set_gpr(21, ctx.gpr[19] + 0u);
    { const bool branch_taken = ctx.gpr[2] == 0u;
    ctx.set_gpr(22, ctx.lo);
      if (branch_taken) {
          goto L_088149C0;
      }
      goto L_08814614;
    }
L_08814614:
    ctx.set_gpr(3, rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(24)));
    goto L_08814618;
L_08814618:
    ctx.set_gpr(4, ctx.gpr[21] + 0u);
    jump_target = ctx.gpr[3];
    ctx.set_gpr(31, 0x08814624u);
    ctx.set_gpr(5, ctx.gpr[16] + 0u);
    ctx.pc = jump_target;
    if (rt.invoke_chained_call(ctx, &aot_mem) && ctx.pc == 0x08814624u) goto L_08814624;
    return;
L_08814624:
    { const bool branch_taken = static_cast<std::int32_t>(ctx.gpr[2]) < 0;
    ctx.set_gpr(3, rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(24)));
      if (branch_taken) {
          goto L_08814AA0;
      }
      goto L_0881462C;
    }
L_0881462C:
    ctx.set_gpr(4, ctx.gpr[16] + 0u);
    jump_target = ctx.gpr[3];
    ctx.set_gpr(31, 0x08814638u);
    ctx.set_gpr(5, ctx.gpr[22] + 0u);
    ctx.pc = jump_target;
    if (rt.invoke_chained_call(ctx, &aot_mem) && ctx.pc == 0x08814638u) goto L_08814638;
    return;
L_08814638:
    { const bool branch_taken = static_cast<std::int32_t>(ctx.gpr[2]) <= 0;
    ctx.set_gpr(3, rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(24)));
      if (branch_taken) {
          goto L_08814BB0;
      }
      goto L_08814640;
    }
L_08814640:
    ctx.set_gpr(4, rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(12)));
    { const bool branch_taken = ctx.gpr[4] != 0u;
    ctx.set_gpr(3, rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(12)));
      if (branch_taken) {
          goto L_08814804;
      }
      goto L_0881464C;
    }
L_0881464C:
    ctx.set_gpr(3, rt.memory().aot_load32(ctx.gpr[19] + static_cast<std::uint32_t>(0)));
    ctx.set_gpr(2, rt.memory().aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(0)));
    rt.memory().aot_store32(ctx.gpr[19] + static_cast<std::uint32_t>(0), ctx.gpr[2]);
    rt.memory().aot_store32(ctx.gpr[16] + static_cast<std::uint32_t>(0), ctx.gpr[3]);
    ctx.lo = ctx.gpr[19];
    goto L_08814660;
L_08814660:
    ctx.execute_madd(18u, 30u);
    ctx.set_gpr(3, rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(12)));
    ctx.set_gpr(2, ctx.gpr[18] + ctx.gpr[19]);
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(8), ctx.gpr[2]);
    ctx.set_gpr(3, static_cast<std::int32_t>(ctx.gpr[3]) < 2 ? 1u : 0u);
    ctx.set_gpr(21, ctx.lo);
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(28), ctx.gpr[3]);
    ctx.set_gpr(16, ctx.gpr[2] + 0u);
    ctx.set_gpr(30, ctx.gpr[2] + 0u);
    ctx.set_gpr(17, ctx.gpr[21] + 0u);
    ctx.set_gpr(22, 0u + 0u);
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(32), ctx.gpr[3]);
    goto L_08814690;
L_08814690:
    ctx.set_gpr(2, ctx.gpr[17] < ctx.gpr[16] ? 1u : 0u);
    { const bool branch_taken = ctx.gpr[2] == 0u;
    ctx.set_gpr(3, rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(24)));
      if (branch_taken) {
          goto L_0881483C;
      }
      goto L_0881469C;
    }
L_0881469C:
    { const bool branch_taken = ctx.gpr[22] == 0u;
    ctx.lo = ctx.gpr[19];
      if (branch_taken) {
          goto L_08814C74;
      }
      goto L_088146A4;
    }
L_088146A4:
    ctx.execute_madd(23u, 18u);
    ctx.set_gpr(2, ctx.gpr[30] - ctx.gpr[19]);
    ctx.set_gpr(5, ctx.gpr[16] - ctx.gpr[30]);
    ctx.set_gpr(3, static_cast<std::int32_t>(ctx.gpr[5]) < static_cast<std::int32_t>(ctx.gpr[2]) ? ctx.gpr[5] : ctx.gpr[2]);
    { const bool branch_taken = static_cast<std::int32_t>(ctx.gpr[3]) <= 0;
    ctx.set_gpr(22, ctx.lo);
      if (branch_taken) {
          goto L_088146F0;
      }
      goto L_088146BC;
    }
L_088146BC:
    ctx.set_gpr(4, rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(12)));
    ctx.set_gpr(6, ctx.gpr[3] + 0u);
    ctx.set_gpr(2, static_cast<std::int32_t>(ctx.gpr[4]) < 2 ? 1u : 0u);
    { const bool branch_taken = ctx.gpr[2] != 0u;
    ctx.set_gpr(4, ctx.gpr[16] - ctx.gpr[3]);
      if (branch_taken) {
          goto L_0881498C;
      }
      goto L_088146D0;
    }
L_088146D0:
    ctx.set_gpr(3, static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int8_t>(rt.memory().aot_load8(ctx.gpr[20] + static_cast<std::uint32_t>(0))))));
    ctx.set_gpr(2, rt.memory().aot_load8(ctx.gpr[4] + static_cast<std::uint32_t>(0)));
    ctx.set_gpr(6, ctx.gpr[6] + static_cast<std::uint32_t>(-1));
    rt.memory().aot_store8(ctx.gpr[20] + static_cast<std::uint32_t>(0), static_cast<std::uint8_t>(ctx.gpr[2]));
    ctx.set_gpr(20, ctx.gpr[20] + static_cast<std::uint32_t>(1));
    rt.memory().aot_store8(ctx.gpr[4] + static_cast<std::uint32_t>(0), static_cast<std::uint8_t>(ctx.gpr[3]));
    { const bool branch_taken = static_cast<std::int32_t>(ctx.gpr[6]) > 0;
    ctx.set_gpr(4, ctx.gpr[4] + static_cast<std::uint32_t>(1));
      if (branch_taken) {
          goto L_088146D0;
      }
      goto L_088146F0;
    }
L_088146F0:
    ctx.set_gpr(3, ctx.gpr[22] - ctx.gpr[21]);
    goto L_088146F4;
L_088146F4:
    ctx.set_gpr(17, ctx.gpr[21] - ctx.gpr[17]);
    ctx.set_gpr(3, ctx.gpr[3] - ctx.gpr[18]);
    ctx.set_gpr(2, ctx.gpr[17] < ctx.gpr[3] ? 1u : 0u);
    if (ctx.gpr[2] != 0u) ctx.set_gpr(3, ctx.gpr[17]);
    { const bool branch_taken = static_cast<std::int32_t>(ctx.gpr[3]) <= 0;
    ctx.set_gpr(2, ctx.gpr[18] < ctx.gpr[5] ? 1u : 0u);
      if (branch_taken) {
          goto L_08814744;
      }
      goto L_0881470C;
    }
L_0881470C:
    ctx.set_gpr(4, rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(12)));
    ctx.set_gpr(6, ctx.gpr[22] - ctx.gpr[3]);
    ctx.set_gpr(2, static_cast<std::int32_t>(ctx.gpr[4]) < 2 ? 1u : 0u);
    { const bool branch_taken = ctx.gpr[2] != 0u;
    ctx.set_gpr(4, ctx.gpr[3] + 0u);
      if (branch_taken) {
          goto L_0881495C;
      }
      goto L_08814720;
    }
L_08814720:
    ctx.set_gpr(3, static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int8_t>(rt.memory().aot_load8(ctx.gpr[16] + static_cast<std::uint32_t>(0))))));
    ctx.set_gpr(2, rt.memory().aot_load8(ctx.gpr[6] + static_cast<std::uint32_t>(0)));
    ctx.set_gpr(4, ctx.gpr[4] + static_cast<std::uint32_t>(-1));
    rt.memory().aot_store8(ctx.gpr[16] + static_cast<std::uint32_t>(0), static_cast<std::uint8_t>(ctx.gpr[2]));
    ctx.set_gpr(16, ctx.gpr[16] + static_cast<std::uint32_t>(1));
    rt.memory().aot_store8(ctx.gpr[6] + static_cast<std::uint32_t>(0), static_cast<std::uint8_t>(ctx.gpr[3]));
    { const bool branch_taken = static_cast<std::int32_t>(ctx.gpr[4]) > 0;
    ctx.set_gpr(6, ctx.gpr[6] + static_cast<std::uint32_t>(1));
      if (branch_taken) {
          goto L_08814720;
      }
      goto L_08814740;
    }
L_08814740:
    ctx.set_gpr(2, ctx.gpr[18] < ctx.gpr[5] ? 1u : 0u);
    goto L_08814744;
L_08814744:
    { const bool branch_taken = ctx.gpr[2] != 0u;
    ctx.set_gpr(7, rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(24)));
      if (branch_taken) {
          goto L_08814938;
      }
      goto L_0881474C;
    }
L_0881474C:
    ctx.set_gpr(2, ctx.gpr[18] < ctx.gpr[17] ? 1u : 0u);
    goto L_08814750;
L_08814750:
    { const bool branch_taken = ctx.gpr[2] == 0u;
    ctx.set_gpr(19, ctx.gpr[22] - ctx.gpr[17]);
      if (branch_taken) {
          goto L_088147D4;
      }
      goto L_08814758;
    }
L_08814758:
    { const bool branch_taken = ctx.gpr[18] != 0u;
    { const std::uint32_t dividend = ctx.gpr[17]; const std::uint32_t divisor = ctx.gpr[18]; if (divisor == 0u) { ctx.lo = 0xFFFFFFFFu; ctx.hi = dividend; } else { ctx.lo = dividend / divisor; ctx.hi = dividend % divisor; } }
      if (branch_taken) {
          goto L_08814764;
      }
      goto L_08814760;
    }
L_08814760:
    ctx.pc = 0x08814760u; rt.stop("Allegrex BREAK code 7 at 0x08814760"); return;
    goto L_08814764;
L_08814764:
    ctx.set_gpr(2, ctx.gpr[19] & 3u);
    { const bool branch_taken = ctx.gpr[2] == 0u;
    ctx.set_gpr(23, ctx.lo);
      if (branch_taken) {
          goto L_088145BC;
      }
      goto L_08814770;
    }
L_08814770:
    ctx.set_gpr(2, 0u + static_cast<std::uint32_t>(2));
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(12), ctx.gpr[2]);
    ctx.set_gpr(2, ctx.gpr[23] < static_cast<std::uint32_t>(7) ? 1u : 0u);
    { const bool branch_taken = ctx.gpr[2] == 0u;
    ctx.set_gpr(2, ctx.gpr[23] >> 1u);
      if (branch_taken) {
          goto L_088145E0;
      }
      goto L_08814784;
    }
L_08814784:
    ctx.lo = ctx.gpr[19];
    goto L_08814788;
L_08814788:
    ctx.execute_madd(18u, 23u);
    ctx.set_gpr(20, ctx.gpr[19] + ctx.gpr[18]);
    ctx.set_gpr(21, ctx.lo);
    ctx.set_gpr(2, ctx.gpr[20] < ctx.gpr[21] ? 1u : 0u);
    { const bool branch_taken = ctx.gpr[2] != 0u;
    ctx.set_gpr(16, ctx.gpr[20] + 0u);
      if (branch_taken) {
          goto L_088147B8;
      }
      goto L_088147A0;
    }
L_088147A0:
    ctx.set_gpr(31, rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(84)));
    goto L_088147D8;
L_088147A8:
    ctx.set_gpr(16, ctx.gpr[20] + ctx.gpr[18]);
    ctx.set_gpr(2, ctx.gpr[16] < ctx.gpr[21] ? 1u : 0u);
    { const bool branch_taken = ctx.gpr[2] == 0u;
    ctx.set_gpr(20, ctx.gpr[16] + 0u);
      if (branch_taken) {
          goto L_088147D4;
      }
      goto L_088147B8;
    }
L_088147B8:
    ctx.set_gpr(2, ctx.gpr[19] < ctx.gpr[16] ? 1u : 0u);
    { const bool branch_taken = ctx.gpr[2] != 0u;
    ctx.set_gpr(3, rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(24)));
      if (branch_taken) {
          goto L_08814BE8;
      }
      goto L_088147C4;
    }
L_088147C4:
    ctx.set_gpr(16, ctx.gpr[20] + ctx.gpr[18]);
    ctx.set_gpr(2, ctx.gpr[16] < ctx.gpr[21] ? 1u : 0u);
    { const bool branch_taken = ctx.gpr[2] != 0u;
    ctx.set_gpr(20, ctx.gpr[16] + 0u);
      if (branch_taken) {
          goto L_088147B8;
      }
      goto L_088147D4;
    }
L_088147D4:
    ctx.set_gpr(31, rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(84)));
    goto L_088147D8;
L_088147D8:
    ctx.set_gpr(30, rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(80)));
    ctx.set_gpr(23, rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(76)));
    ctx.set_gpr(22, rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(72)));
    ctx.set_gpr(21, rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(68)));
    ctx.set_gpr(20, rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(64)));
    ctx.set_gpr(19, rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(60)));
    ctx.set_gpr(18, rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(56)));
    ctx.set_gpr(17, rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(52)));
    ctx.set_gpr(16, rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(48)));
    jump_target = ctx.gpr[31];
    ctx.set_gpr(29, ctx.gpr[29] + static_cast<std::uint32_t>(96));
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_08814804:
    ctx.set_gpr(5, ctx.gpr[18] + 0u);
    ctx.set_gpr(2, static_cast<std::int32_t>(ctx.gpr[3]) < 2 ? 1u : 0u);
    { const bool branch_taken = ctx.gpr[2] != 0u;
    ctx.set_gpr(4, ctx.gpr[19] + 0u);
      if (branch_taken) {
          goto L_08814AD0;
      }
      goto L_08814814;
    }
L_08814814:
    ctx.set_gpr(3, static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int8_t>(rt.memory().aot_load8(ctx.gpr[4] + static_cast<std::uint32_t>(0))))));
    ctx.set_gpr(2, rt.memory().aot_load8(ctx.gpr[16] + static_cast<std::uint32_t>(0)));
    ctx.set_gpr(5, ctx.gpr[5] + static_cast<std::uint32_t>(-1));
    rt.memory().aot_store8(ctx.gpr[4] + static_cast<std::uint32_t>(0), static_cast<std::uint8_t>(ctx.gpr[2]));
    ctx.set_gpr(4, ctx.gpr[4] + static_cast<std::uint32_t>(1));
    rt.memory().aot_store8(ctx.gpr[16] + static_cast<std::uint32_t>(0), static_cast<std::uint8_t>(ctx.gpr[3]));
    { const bool branch_taken = static_cast<std::int32_t>(ctx.gpr[5]) > 0;
    ctx.set_gpr(16, ctx.gpr[16] + static_cast<std::uint32_t>(1));
      if (branch_taken) {
          goto L_08814814;
      }
      goto L_08814834;
    }
L_08814834:
    ctx.lo = ctx.gpr[19];
    goto L_08814660;
L_0881483C:
    ctx.set_gpr(4, ctx.gpr[16] + 0u);
    jump_target = ctx.gpr[3];
    ctx.set_gpr(31, 0x08814848u);
    ctx.set_gpr(5, ctx.gpr[19] + 0u);
    ctx.pc = jump_target;
    if (rt.invoke_chained_call(ctx, &aot_mem) && ctx.pc == 0x08814848u) goto L_08814848;
    return;
L_08814848:
    { const bool branch_taken = static_cast<std::int32_t>(ctx.gpr[2]) <= 0;
    ctx.set_gpr(3, rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(24)));
      if (branch_taken) {
          goto L_08814B38;
      }
      goto L_08814850;
    }
L_08814850:
    ctx.set_gpr(4, ctx.gpr[17] + 0u);
    jump_target = ctx.gpr[3];
    ctx.set_gpr(31, 0x0881485Cu);
    ctx.set_gpr(5, ctx.gpr[19] + 0u);
    ctx.pc = jump_target;
    if (rt.invoke_chained_call(ctx, &aot_mem) && ctx.pc == 0x0881485Cu) goto L_0881485C;
    return;
L_0881485C:
    { const bool branch_taken = static_cast<std::int32_t>(ctx.gpr[2]) < 0;
    ctx.set_gpr(4, rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(12)));
      if (branch_taken) {
          goto L_088148B4;
      }
      goto L_08814864;
    }
L_08814864:
    if (ctx.gpr[2] != 0u) {
    ctx.set_gpr(17, ctx.gpr[17] - ctx.gpr[18]);
        goto L_08814894;
    }
    goto L_0881486C;
L_0881486C:
    ctx.set_gpr(4, rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(12)));
    { const bool branch_taken = ctx.gpr[4] != 0u;
    ctx.set_gpr(2, rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(32)));
      if (branch_taken) {
          goto L_08814900;
      }
      goto L_08814878;
    }
L_08814878:
    ctx.set_gpr(3, rt.memory().aot_load32(ctx.gpr[17] + static_cast<std::uint32_t>(0)));
    ctx.set_gpr(2, rt.memory().aot_load32(ctx.gpr[21] + static_cast<std::uint32_t>(0)));
    rt.memory().aot_store32(ctx.gpr[17] + static_cast<std::uint32_t>(0), ctx.gpr[2]);
    rt.memory().aot_store32(ctx.gpr[21] + static_cast<std::uint32_t>(0), ctx.gpr[3]);
    ctx.set_gpr(21, ctx.gpr[21] - ctx.gpr[18]);
    goto L_0881488C;
L_0881488C:
    ctx.set_gpr(22, 0u + static_cast<std::uint32_t>(1));
    ctx.set_gpr(17, ctx.gpr[17] - ctx.gpr[18]);
    goto L_08814894;
L_08814894:
    ctx.set_gpr(2, ctx.gpr[17] < ctx.gpr[16] ? 1u : 0u);
    { const bool branch_taken = ctx.gpr[2] != 0u;
    ctx.set_gpr(3, rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(24)));
      if (branch_taken) {
          goto L_0881469C;
      }
      goto L_088148A0;
    }
L_088148A0:
    ctx.set_gpr(4, ctx.gpr[17] + 0u);
    jump_target = ctx.gpr[3];
    ctx.set_gpr(31, 0x088148ACu);
    ctx.set_gpr(5, ctx.gpr[19] + 0u);
    ctx.pc = jump_target;
    if (rt.invoke_chained_call(ctx, &aot_mem) && ctx.pc == 0x088148ACu) goto L_088148AC;
    return;
L_088148AC:
    { const bool branch_taken = static_cast<std::int32_t>(ctx.gpr[2]) >= 0;
    ctx.set_gpr(4, rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(12)));
      if (branch_taken) {
          goto L_08814864;
      }
      goto L_088148B4;
    }
L_088148B4:
    if (ctx.gpr[4] == 0u) {
    ctx.set_gpr(3, rt.memory().aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(0)));
        goto L_08814B48;
    }
    goto L_088148BC;
L_088148BC:
    ctx.set_gpr(2, rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(28)));
    { const bool branch_taken = ctx.gpr[2] != 0u;
    ctx.set_gpr(6, ctx.gpr[18] + 0u);
      if (branch_taken) {
          goto L_08814E5C;
      }
      goto L_088148C8;
    }
L_088148C8:
    ctx.set_gpr(5, ctx.gpr[16] + 0u);
    ctx.set_gpr(4, ctx.gpr[17] + 0u);
    goto L_088148D0;
L_088148D0:
    ctx.set_gpr(3, static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int8_t>(rt.memory().aot_load8(ctx.gpr[5] + static_cast<std::uint32_t>(0))))));
    ctx.set_gpr(2, rt.memory().aot_load8(ctx.gpr[4] + static_cast<std::uint32_t>(0)));
    ctx.set_gpr(6, ctx.gpr[6] + static_cast<std::uint32_t>(-1));
    rt.memory().aot_store8(ctx.gpr[5] + static_cast<std::uint32_t>(0), static_cast<std::uint8_t>(ctx.gpr[2]));
    ctx.set_gpr(5, ctx.gpr[5] + static_cast<std::uint32_t>(1));
    rt.memory().aot_store8(ctx.gpr[4] + static_cast<std::uint32_t>(0), static_cast<std::uint8_t>(ctx.gpr[3]));
    { const bool branch_taken = static_cast<std::int32_t>(ctx.gpr[6]) > 0;
    ctx.set_gpr(4, ctx.gpr[4] + static_cast<std::uint32_t>(1));
      if (branch_taken) {
          goto L_088148D0;
      }
      goto L_088148F0;
    }
L_088148F0:
    ctx.set_gpr(16, ctx.gpr[16] + ctx.gpr[18]);
    ctx.set_gpr(17, ctx.gpr[17] - ctx.gpr[18]);
    ctx.set_gpr(22, 0u + static_cast<std::uint32_t>(1));
    goto L_08814690;
L_08814900:
    { const bool branch_taken = ctx.gpr[2] != 0u;
    ctx.set_gpr(6, ctx.gpr[18] + 0u);
      if (branch_taken) {
          goto L_08814B04;
      }
      goto L_08814908;
    }
L_08814908:
    ctx.set_gpr(5, ctx.gpr[17] + 0u);
    ctx.set_gpr(4, ctx.gpr[21] + 0u);
    goto L_08814910;
L_08814910:
    ctx.set_gpr(3, static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int8_t>(rt.memory().aot_load8(ctx.gpr[5] + static_cast<std::uint32_t>(0))))));
    ctx.set_gpr(2, rt.memory().aot_load8(ctx.gpr[4] + static_cast<std::uint32_t>(0)));
    ctx.set_gpr(6, ctx.gpr[6] + static_cast<std::uint32_t>(-1));
    rt.memory().aot_store8(ctx.gpr[5] + static_cast<std::uint32_t>(0), static_cast<std::uint8_t>(ctx.gpr[2]));
    ctx.set_gpr(5, ctx.gpr[5] + static_cast<std::uint32_t>(1));
    rt.memory().aot_store8(ctx.gpr[4] + static_cast<std::uint32_t>(0), static_cast<std::uint8_t>(ctx.gpr[3]));
    { const bool branch_taken = static_cast<std::int32_t>(ctx.gpr[6]) > 0;
    ctx.set_gpr(4, ctx.gpr[4] + static_cast<std::uint32_t>(1));
      if (branch_taken) {
          goto L_08814910;
      }
      goto L_08814930;
    }
L_08814930:
    ctx.set_gpr(21, ctx.gpr[21] - ctx.gpr[18]);
    goto L_0881488C;
L_08814938:
    { const bool branch_taken = ctx.gpr[18] != 0u;
    { const std::uint32_t dividend = ctx.gpr[5]; const std::uint32_t divisor = ctx.gpr[18]; if (divisor == 0u) { ctx.lo = 0xFFFFFFFFu; ctx.hi = dividend; } else { ctx.lo = dividend / divisor; ctx.hi = dividend % divisor; } }
      if (branch_taken) {
          goto L_08814944;
      }
      goto L_08814940;
    }
L_08814940:
    ctx.pc = 0x08814940u; rt.stop("Allegrex BREAK code 7 at 0x08814940"); return;
    goto L_08814944;
L_08814944:
    ctx.set_gpr(4, ctx.gpr[19] + 0u);
    ctx.set_gpr(6, ctx.gpr[18] + 0u);
    ctx.set_gpr(31, 0x08814954u);
    ctx.set_gpr(5, ctx.lo);
    goto L_08814578;
L_08814954:
    ctx.set_gpr(2, ctx.gpr[18] < ctx.gpr[17] ? 1u : 0u);
    goto L_08814750;
L_0881495C:
    ctx.set_gpr(7, ctx.gpr[3] >> 2u);
    ctx.set_gpr(4, ctx.gpr[16] + 0u);
    goto L_08814964;
L_08814964:
    ctx.set_gpr(3, rt.memory().aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(0)));
    ctx.set_gpr(2, rt.memory().aot_load32(ctx.gpr[6] + static_cast<std::uint32_t>(0)));
    ctx.set_gpr(7, ctx.gpr[7] + static_cast<std::uint32_t>(-1));
    rt.memory().aot_store32(ctx.gpr[4] + static_cast<std::uint32_t>(0), ctx.gpr[2]);
    ctx.set_gpr(4, ctx.gpr[4] + static_cast<std::uint32_t>(4));
    rt.memory().aot_store32(ctx.gpr[6] + static_cast<std::uint32_t>(0), ctx.gpr[3]);
    { const bool branch_taken = static_cast<std::int32_t>(ctx.gpr[7]) > 0;
    ctx.set_gpr(6, ctx.gpr[6] + static_cast<std::uint32_t>(4));
      if (branch_taken) {
          goto L_08814964;
      }
      goto L_08814984;
    }
L_08814984:
    ctx.set_gpr(2, ctx.gpr[18] < ctx.gpr[5] ? 1u : 0u);
    goto L_08814744;
L_0881498C:
    ctx.set_gpr(6, ctx.gpr[4] + 0u);
    ctx.set_gpr(7, ctx.gpr[3] >> 2u);
    ctx.set_gpr(4, ctx.gpr[19] + 0u);
    goto L_08814998;
L_08814998:
    ctx.set_gpr(3, rt.memory().aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(0)));
    ctx.set_gpr(2, rt.memory().aot_load32(ctx.gpr[6] + static_cast<std::uint32_t>(0)));
    ctx.set_gpr(7, ctx.gpr[7] + static_cast<std::uint32_t>(-1));
    rt.memory().aot_store32(ctx.gpr[4] + static_cast<std::uint32_t>(0), ctx.gpr[2]);
    ctx.set_gpr(4, ctx.gpr[4] + static_cast<std::uint32_t>(4));
    rt.memory().aot_store32(ctx.gpr[6] + static_cast<std::uint32_t>(0), ctx.gpr[3]);
    { const bool branch_taken = static_cast<std::int32_t>(ctx.gpr[7]) > 0;
    ctx.set_gpr(6, ctx.gpr[6] + static_cast<std::uint32_t>(4));
      if (branch_taken) {
          goto L_08814998;
      }
      goto L_088149B8;
    }
L_088149B8:
    ctx.set_gpr(3, ctx.gpr[22] - ctx.gpr[21]);
    goto L_088146F4;
L_088149C0:
    ctx.set_gpr(2, ctx.gpr[23] >> 3u);
    { const std::int64_t product = static_cast<std::int64_t>(static_cast<std::int32_t>(ctx.gpr[18])) * static_cast<std::int64_t>(static_cast<std::int32_t>(ctx.gpr[2])); ctx.lo = static_cast<std::uint32_t>(product); ctx.hi = static_cast<std::uint32_t>(static_cast<std::uint64_t>(product) >> 32u); }
    ctx.set_gpr(4, ctx.gpr[19] + 0u);
    ctx.set_gpr(3, ctx.lo);
    ctx.set_gpr(2, ctx.gpr[3] << 1u);
    ctx.set_gpr(21, ctx.gpr[3] + ctx.gpr[19]);
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(16), ctx.gpr[3]);
    ctx.set_gpr(5, ctx.gpr[21] + 0u);
    ctx.set_gpr(17, ctx.gpr[2] + ctx.gpr[19]);
    ctx.set_gpr(3, rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(24)));
    jump_target = ctx.gpr[3];
    ctx.set_gpr(31, 0x088149F0u);
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(20), ctx.gpr[2]);
    ctx.pc = jump_target;
    if (rt.invoke_chained_call(ctx, &aot_mem) && ctx.pc == 0x088149F0u) goto L_088149F0;
    return;
L_088149F0:
    { const bool branch_taken = static_cast<std::int32_t>(ctx.gpr[2]) < 0;
    ctx.set_gpr(3, rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(24)));
      if (branch_taken) {
          goto L_08814DC0;
      }
      goto L_088149F8;
    }
L_088149F8:
    ctx.set_gpr(4, ctx.gpr[21] + 0u);
    jump_target = ctx.gpr[3];
    ctx.set_gpr(31, 0x08814A04u);
    ctx.set_gpr(5, ctx.gpr[17] + 0u);
    ctx.pc = jump_target;
    if (rt.invoke_chained_call(ctx, &aot_mem) && ctx.pc == 0x08814A04u) goto L_08814A04;
    return;
L_08814A04:
    { const bool branch_taken = static_cast<std::int32_t>(ctx.gpr[2]) <= 0;
    ctx.set_gpr(3, rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(24)));
      if (branch_taken) {
          goto L_08814E40;
      }
      goto L_08814A0C;
    }
L_08814A0C:
    ctx.set_gpr(4, rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(16)));
    ctx.set_gpr(2, rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(16)));
    ctx.set_gpr(3, rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(24)));
    ctx.set_gpr(4, ctx.gpr[16] - ctx.gpr[4]);
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(0), ctx.gpr[4]);
    ctx.set_gpr(5, ctx.gpr[16] + 0u);
    jump_target = ctx.gpr[3];
    ctx.set_gpr(31, 0x08814A2Cu);
    ctx.set_gpr(17, ctx.gpr[16] + ctx.gpr[2]);
    ctx.pc = jump_target;
    if (rt.invoke_chained_call(ctx, &aot_mem) && ctx.pc == 0x08814A2Cu) goto L_08814A2C;
    return;
L_08814A2C:
    { const bool branch_taken = static_cast<std::int32_t>(ctx.gpr[2]) < 0;
    ctx.set_gpr(3, rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(24)));
      if (branch_taken) {
          goto L_08814D90;
      }
      goto L_08814A34;
    }
L_08814A34:
    ctx.set_gpr(4, ctx.gpr[16] + 0u);
    jump_target = ctx.gpr[3];
    ctx.set_gpr(31, 0x08814A40u);
    ctx.set_gpr(5, ctx.gpr[17] + 0u);
    ctx.pc = jump_target;
    if (rt.invoke_chained_call(ctx, &aot_mem) && ctx.pc == 0x08814A40u) goto L_08814A40;
    return;
L_08814A40:
    { const bool branch_taken = static_cast<std::int32_t>(ctx.gpr[2]) <= 0;
    ctx.set_gpr(4, rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(0)));
      if (branch_taken) {
          goto L_08814E24;
      }
      goto L_08814A48;
    }
L_08814A48:
    ctx.set_gpr(4, rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(20)));
    ctx.set_gpr(2, rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(16)));
    ctx.set_gpr(3, rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(24)));
    ctx.set_gpr(4, ctx.gpr[22] - ctx.gpr[4]);
    ctx.set_gpr(17, ctx.gpr[22] - ctx.gpr[2]);
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(4), ctx.gpr[4]);
    jump_target = ctx.gpr[3];
    ctx.set_gpr(31, 0x08814A68u);
    ctx.set_gpr(5, ctx.gpr[17] + 0u);
    ctx.pc = jump_target;
    if (rt.invoke_chained_call(ctx, &aot_mem) && ctx.pc == 0x08814A68u) goto L_08814A68;
    return;
L_08814A68:
    { const bool branch_taken = static_cast<std::int32_t>(ctx.gpr[2]) < 0;
    ctx.set_gpr(3, rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(24)));
      if (branch_taken) {
          goto L_08814D60;
      }
      goto L_08814A70;
    }
L_08814A70:
    ctx.set_gpr(4, ctx.gpr[17] + 0u);
    jump_target = ctx.gpr[3];
    ctx.set_gpr(31, 0x08814A7Cu);
    ctx.set_gpr(5, ctx.gpr[22] + 0u);
    ctx.pc = jump_target;
    if (rt.invoke_chained_call(ctx, &aot_mem) && ctx.pc == 0x08814A7Cu) goto L_08814A7C;
    return;
L_08814A7C:
    { const bool branch_taken = static_cast<std::int32_t>(ctx.gpr[2]) <= 0;
    ctx.set_gpr(4, rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(4)));
      if (branch_taken) {
          goto L_08814E08;
      }
      goto L_08814A84;
    }
L_08814A84:
    ctx.set_gpr(3, rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(24)));
    ctx.set_gpr(4, ctx.gpr[21] + 0u);
    ctx.set_gpr(5, ctx.gpr[16] + 0u);
    jump_target = ctx.gpr[3];
    ctx.set_gpr(31, 0x08814A98u);
    ctx.set_gpr(22, ctx.gpr[17] + 0u);
    ctx.pc = jump_target;
    if (rt.invoke_chained_call(ctx, &aot_mem) && ctx.pc == 0x08814A98u) goto L_08814A98;
    return;
L_08814A98:
    { const bool branch_taken = static_cast<std::int32_t>(ctx.gpr[2]) >= 0;
    ctx.set_gpr(3, rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(24)));
      if (branch_taken) {
          goto L_0881462C;
      }
      goto L_08814AA0;
    }
L_08814AA0:
    ctx.set_gpr(4, ctx.gpr[16] + 0u);
    jump_target = ctx.gpr[3];
    ctx.set_gpr(31, 0x08814AACu);
    ctx.set_gpr(5, ctx.gpr[22] + 0u);
    ctx.pc = jump_target;
    if (rt.invoke_chained_call(ctx, &aot_mem) && ctx.pc == 0x08814AACu) goto L_08814AAC;
    return;
L_08814AAC:
    { const bool branch_taken = static_cast<std::int32_t>(ctx.gpr[2]) < 0;
    ctx.set_gpr(3, rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(24)));
      if (branch_taken) {
          goto L_08814640;
      }
      goto L_08814AB4;
    }
L_08814AB4:
    ctx.set_gpr(4, ctx.gpr[21] + 0u);
    jump_target = ctx.gpr[3];
    ctx.set_gpr(31, 0x08814AC0u);
    ctx.set_gpr(5, ctx.gpr[22] + 0u);
    ctx.pc = jump_target;
    if (rt.invoke_chained_call(ctx, &aot_mem) && ctx.pc == 0x08814AC0u) goto L_08814AC0;
    return;
L_08814AC0:
    if (static_cast<std::int32_t>(ctx.gpr[2]) < 0) {
    ctx.set_gpr(16, ctx.gpr[22] + 0u);
        goto L_08814640;
    }
    goto L_08814AC8;
L_08814AC8:
    ctx.set_gpr(16, ctx.gpr[21] + 0u);
    goto L_08814640;
L_08814AD0:
    ctx.set_gpr(4, ctx.gpr[16] + 0u);
    ctx.set_gpr(5, ctx.gpr[18] >> 2u);
    ctx.set_gpr(6, ctx.gpr[19] + 0u);
    goto L_08814ADC;
L_08814ADC:
    ctx.set_gpr(3, rt.memory().aot_load32(ctx.gpr[6] + static_cast<std::uint32_t>(0)));
    ctx.set_gpr(2, rt.memory().aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(0)));
    ctx.set_gpr(5, ctx.gpr[5] + static_cast<std::uint32_t>(-1));
    rt.memory().aot_store32(ctx.gpr[6] + static_cast<std::uint32_t>(0), ctx.gpr[2]);
    ctx.set_gpr(6, ctx.gpr[6] + static_cast<std::uint32_t>(4));
    rt.memory().aot_store32(ctx.gpr[4] + static_cast<std::uint32_t>(0), ctx.gpr[3]);
    { const bool branch_taken = static_cast<std::int32_t>(ctx.gpr[5]) > 0;
    ctx.set_gpr(4, ctx.gpr[4] + static_cast<std::uint32_t>(4));
      if (branch_taken) {
          goto L_08814ADC;
      }
      goto L_08814AFC;
    }
L_08814AFC:
    ctx.lo = ctx.gpr[19];
    goto L_08814660;
L_08814B04:
    ctx.set_gpr(6, ctx.gpr[18] >> 2u);
    ctx.set_gpr(5, ctx.gpr[17] + 0u);
    ctx.set_gpr(4, ctx.gpr[21] + 0u);
    goto L_08814B10;
L_08814B10:
    ctx.set_gpr(3, rt.memory().aot_load32(ctx.gpr[5] + static_cast<std::uint32_t>(0)));
    ctx.set_gpr(2, rt.memory().aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(0)));
    ctx.set_gpr(6, ctx.gpr[6] + static_cast<std::uint32_t>(-1));
    rt.memory().aot_store32(ctx.gpr[5] + static_cast<std::uint32_t>(0), ctx.gpr[2]);
    ctx.set_gpr(5, ctx.gpr[5] + static_cast<std::uint32_t>(4));
    rt.memory().aot_store32(ctx.gpr[4] + static_cast<std::uint32_t>(0), ctx.gpr[3]);
    { const bool branch_taken = static_cast<std::int32_t>(ctx.gpr[6]) > 0;
    ctx.set_gpr(4, ctx.gpr[4] + static_cast<std::uint32_t>(4));
      if (branch_taken) {
          goto L_08814B10;
      }
      goto L_08814B30;
    }
L_08814B30:
    ctx.set_gpr(21, ctx.gpr[21] - ctx.gpr[18]);
    goto L_0881488C;
L_08814B38:
    { const bool branch_taken = ctx.gpr[2] == 0u;
    ctx.set_gpr(4, rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(12)));
      if (branch_taken) {
          goto L_08814B64;
      }
      goto L_08814B40;
    }
L_08814B40:
    ctx.set_gpr(16, ctx.gpr[16] + ctx.gpr[18]);
    goto L_08814690;
L_08814B48:
    ctx.set_gpr(2, rt.memory().aot_load32(ctx.gpr[17] + static_cast<std::uint32_t>(0)));
    ctx.set_gpr(22, 0u + static_cast<std::uint32_t>(1));
    rt.memory().aot_store32(ctx.gpr[16] + static_cast<std::uint32_t>(0), ctx.gpr[2]);
    ctx.set_gpr(16, ctx.gpr[16] + ctx.gpr[18]);
    rt.memory().aot_store32(ctx.gpr[17] + static_cast<std::uint32_t>(0), ctx.gpr[3]);
    ctx.set_gpr(17, ctx.gpr[17] - ctx.gpr[18]);
    goto L_08814690;
L_08814B64:
    if (ctx.gpr[4] == 0u) {
    ctx.set_gpr(2, rt.memory().aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(0)));
        goto L_08814DF0;
    }
    goto L_08814B6C;
L_08814B6C:
    ctx.set_gpr(2, rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(28)));
    { const bool branch_taken = ctx.gpr[2] != 0u;
    ctx.set_gpr(6, ctx.gpr[18] + 0u);
      if (branch_taken) {
          goto L_08814E98;
      }
      goto L_08814B78;
    }
L_08814B78:
    ctx.set_gpr(5, ctx.gpr[30] + 0u);
    ctx.set_gpr(4, ctx.gpr[16] + 0u);
    goto L_08814B80;
L_08814B80:
    ctx.set_gpr(3, static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int8_t>(rt.memory().aot_load8(ctx.gpr[5] + static_cast<std::uint32_t>(0))))));
    ctx.set_gpr(2, rt.memory().aot_load8(ctx.gpr[4] + static_cast<std::uint32_t>(0)));
    ctx.set_gpr(6, ctx.gpr[6] + static_cast<std::uint32_t>(-1));
    rt.memory().aot_store8(ctx.gpr[5] + static_cast<std::uint32_t>(0), static_cast<std::uint8_t>(ctx.gpr[2]));
    ctx.set_gpr(5, ctx.gpr[5] + static_cast<std::uint32_t>(1));
    rt.memory().aot_store8(ctx.gpr[4] + static_cast<std::uint32_t>(0), static_cast<std::uint8_t>(ctx.gpr[3]));
    { const bool branch_taken = static_cast<std::int32_t>(ctx.gpr[6]) > 0;
    ctx.set_gpr(4, ctx.gpr[4] + static_cast<std::uint32_t>(1));
      if (branch_taken) {
          goto L_08814B80;
      }
      goto L_08814BA0;
    }
L_08814BA0:
    ctx.set_gpr(30, ctx.gpr[30] + ctx.gpr[18]);
    ctx.set_gpr(22, 0u + static_cast<std::uint32_t>(1));
    goto L_08814BA8;
L_08814BA8:
    ctx.set_gpr(16, ctx.gpr[16] + ctx.gpr[18]);
    goto L_08814690;
L_08814BB0:
    ctx.set_gpr(4, ctx.gpr[21] + 0u);
    jump_target = ctx.gpr[3];
    ctx.set_gpr(31, 0x08814BBCu);
    ctx.set_gpr(5, ctx.gpr[22] + 0u);
    ctx.pc = jump_target;
    if (rt.invoke_chained_call(ctx, &aot_mem) && ctx.pc == 0x08814BBCu) goto L_08814BBC;
    return;
L_08814BBC:
    if (static_cast<std::int32_t>(ctx.gpr[2]) < 0) {
    ctx.set_gpr(16, ctx.gpr[21] + 0u);
        goto L_08814640;
    }
    goto L_08814BC4;
L_08814BC4:
    ctx.set_gpr(16, ctx.gpr[22] + 0u);
    goto L_08814640;
L_08814BCC:
    ctx.set_gpr(2, rt.memory().aot_load32(ctx.gpr[17] + static_cast<std::uint32_t>(0)));
    rt.memory().aot_store32(ctx.gpr[16] + static_cast<std::uint32_t>(0), ctx.gpr[2]);
    rt.memory().aot_store32(ctx.gpr[17] + static_cast<std::uint32_t>(0), ctx.gpr[3]);
    ctx.set_gpr(2, ctx.gpr[19] < ctx.gpr[17] ? 1u : 0u);
    goto L_08814BDC;
L_08814BDC:
    { const bool branch_taken = ctx.gpr[2] == 0u;
    ctx.set_gpr(16, ctx.gpr[17] + 0u);
      if (branch_taken) {
          goto L_088147A8;
      }
      goto L_08814BE4;
    }
L_08814BE4:
    ctx.set_gpr(3, rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(24)));
    goto L_08814BE8;
L_08814BE8:
    ctx.set_gpr(17, ctx.gpr[16] - ctx.gpr[18]);
    ctx.set_gpr(4, ctx.gpr[17] + 0u);
    jump_target = ctx.gpr[3];
    ctx.set_gpr(31, 0x08814BF8u);
    ctx.set_gpr(5, ctx.gpr[16] + 0u);
    ctx.pc = jump_target;
    if (rt.invoke_chained_call(ctx, &aot_mem) && ctx.pc == 0x08814BF8u) goto L_08814BF8;
    return;
L_08814BF8:
    { const bool branch_taken = static_cast<std::int32_t>(ctx.gpr[2]) <= 0;
    ctx.set_gpr(2, rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(12)));
      if (branch_taken) {
          goto L_088147A8;
      }
      goto L_08814C00;
    }
L_08814C00:
    if (ctx.gpr[2] == 0u) {
    ctx.set_gpr(3, rt.memory().aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(0)));
        goto L_08814BCC;
    }
    goto L_08814C08;
L_08814C08:
    ctx.set_gpr(3, rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(12)));
    ctx.set_gpr(5, ctx.gpr[18] + 0u);
    ctx.set_gpr(2, static_cast<std::int32_t>(ctx.gpr[3]) < 2 ? 1u : 0u);
    { const bool branch_taken = ctx.gpr[2] != 0u;
    ctx.set_gpr(4, ctx.gpr[17] + 0u);
      if (branch_taken) {
          goto L_08814C44;
      }
      goto L_08814C1C;
    }
L_08814C1C:
    ctx.set_gpr(3, static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int8_t>(rt.memory().aot_load8(ctx.gpr[16] + static_cast<std::uint32_t>(0))))));
    ctx.set_gpr(2, rt.memory().aot_load8(ctx.gpr[4] + static_cast<std::uint32_t>(0)));
    ctx.set_gpr(5, ctx.gpr[5] + static_cast<std::uint32_t>(-1));
    rt.memory().aot_store8(ctx.gpr[16] + static_cast<std::uint32_t>(0), static_cast<std::uint8_t>(ctx.gpr[2]));
    ctx.set_gpr(16, ctx.gpr[16] + static_cast<std::uint32_t>(1));
    rt.memory().aot_store8(ctx.gpr[4] + static_cast<std::uint32_t>(0), static_cast<std::uint8_t>(ctx.gpr[3]));
    { const bool branch_taken = static_cast<std::int32_t>(ctx.gpr[5]) > 0;
    ctx.set_gpr(4, ctx.gpr[4] + static_cast<std::uint32_t>(1));
      if (branch_taken) {
          goto L_08814C1C;
      }
      goto L_08814C3C;
    }
L_08814C3C:
    ctx.set_gpr(2, ctx.gpr[19] < ctx.gpr[17] ? 1u : 0u);
    goto L_08814BDC;
L_08814C44:
    ctx.set_gpr(5, ctx.gpr[16] + 0u);
    ctx.set_gpr(6, ctx.gpr[18] >> 2u);
    goto L_08814C4C;
L_08814C4C:
    ctx.set_gpr(3, rt.memory().aot_load32(ctx.gpr[5] + static_cast<std::uint32_t>(0)));
    ctx.set_gpr(2, rt.memory().aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(0)));
    ctx.set_gpr(6, ctx.gpr[6] + static_cast<std::uint32_t>(-1));
    rt.memory().aot_store32(ctx.gpr[5] + static_cast<std::uint32_t>(0), ctx.gpr[2]);
    ctx.set_gpr(5, ctx.gpr[5] + static_cast<std::uint32_t>(4));
    rt.memory().aot_store32(ctx.gpr[4] + static_cast<std::uint32_t>(0), ctx.gpr[3]);
    { const bool branch_taken = static_cast<std::int32_t>(ctx.gpr[6]) > 0;
    ctx.set_gpr(4, ctx.gpr[4] + static_cast<std::uint32_t>(4));
      if (branch_taken) {
          goto L_08814C4C;
      }
      goto L_08814C6C;
    }
L_08814C6C:
    ctx.set_gpr(2, ctx.gpr[19] < ctx.gpr[17] ? 1u : 0u);
    goto L_08814BDC;
L_08814C74:
    ctx.execute_madd(18u, 23u);
    ctx.set_gpr(16, rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(8)));
    ctx.set_gpr(21, ctx.lo);
    ctx.set_gpr(2, ctx.gpr[16] < ctx.gpr[21] ? 1u : 0u);
    { const bool branch_taken = ctx.gpr[2] != 0u;
    ctx.set_gpr(20, ctx.gpr[16] + 0u);
      if (branch_taken) {
          goto L_08814CA4;
      }
      goto L_08814C8C;
    }
L_08814C8C:
    ctx.set_gpr(31, rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(84)));
    goto L_088147D8;
L_08814C94:
    ctx.set_gpr(20, ctx.gpr[20] + ctx.gpr[18]);
    goto L_08814C98;
L_08814C98:
    ctx.set_gpr(2, ctx.gpr[20] < ctx.gpr[21] ? 1u : 0u);
    { const bool branch_taken = ctx.gpr[2] == 0u;
    ctx.set_gpr(16, ctx.gpr[20] + 0u);
      if (branch_taken) {
          goto L_088147D4;
      }
      goto L_08814CA4;
    }
L_08814CA4:
    ctx.set_gpr(2, ctx.gpr[19] < ctx.gpr[16] ? 1u : 0u);
    if (ctx.gpr[2] == 0u) {
    ctx.set_gpr(20, ctx.gpr[20] + ctx.gpr[18]);
        goto L_08814C98;
    }
    goto L_08814CB0;
L_08814CB0:
    ctx.set_gpr(3, rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(24)));
    goto L_08814CD4;
L_08814CB8:
    ctx.set_gpr(2, rt.memory().aot_load32(ctx.gpr[17] + static_cast<std::uint32_t>(0)));
    rt.memory().aot_store32(ctx.gpr[16] + static_cast<std::uint32_t>(0), ctx.gpr[2]);
    rt.memory().aot_store32(ctx.gpr[17] + static_cast<std::uint32_t>(0), ctx.gpr[3]);
    ctx.set_gpr(2, ctx.gpr[19] < ctx.gpr[17] ? 1u : 0u);
    goto L_08814CC8;
L_08814CC8:
    { const bool branch_taken = ctx.gpr[2] == 0u;
    ctx.set_gpr(16, ctx.gpr[17] + 0u);
      if (branch_taken) {
          goto L_08814C94;
      }
      goto L_08814CD0;
    }
L_08814CD0:
    ctx.set_gpr(3, rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(24)));
    goto L_08814CD4;
L_08814CD4:
    ctx.set_gpr(17, ctx.gpr[16] - ctx.gpr[18]);
    ctx.set_gpr(4, ctx.gpr[17] + 0u);
    jump_target = ctx.gpr[3];
    ctx.set_gpr(31, 0x08814CE4u);
    ctx.set_gpr(5, ctx.gpr[16] + 0u);
    ctx.pc = jump_target;
    if (rt.invoke_chained_call(ctx, &aot_mem) && ctx.pc == 0x08814CE4u) goto L_08814CE4;
    return;
L_08814CE4:
    { const bool branch_taken = static_cast<std::int32_t>(ctx.gpr[2]) <= 0;
    ctx.set_gpr(3, rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(12)));
      if (branch_taken) {
          goto L_08814C94;
      }
      goto L_08814CEC;
    }
L_08814CEC:
    if (ctx.gpr[3] == 0u) {
    ctx.set_gpr(3, rt.memory().aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(0)));
        goto L_08814CB8;
    }
    goto L_08814CF4;
L_08814CF4:
    ctx.set_gpr(4, rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(12)));
    ctx.set_gpr(5, ctx.gpr[18] + 0u);
    ctx.set_gpr(2, static_cast<std::int32_t>(ctx.gpr[4]) < 2 ? 1u : 0u);
    { const bool branch_taken = ctx.gpr[2] != 0u;
    ctx.set_gpr(4, ctx.gpr[17] + 0u);
      if (branch_taken) {
          goto L_08814D30;
      }
      goto L_08814D08;
    }
L_08814D08:
    ctx.set_gpr(3, static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int8_t>(rt.memory().aot_load8(ctx.gpr[16] + static_cast<std::uint32_t>(0))))));
    ctx.set_gpr(2, rt.memory().aot_load8(ctx.gpr[4] + static_cast<std::uint32_t>(0)));
    ctx.set_gpr(5, ctx.gpr[5] + static_cast<std::uint32_t>(-1));
    rt.memory().aot_store8(ctx.gpr[16] + static_cast<std::uint32_t>(0), static_cast<std::uint8_t>(ctx.gpr[2]));
    ctx.set_gpr(16, ctx.gpr[16] + static_cast<std::uint32_t>(1));
    rt.memory().aot_store8(ctx.gpr[4] + static_cast<std::uint32_t>(0), static_cast<std::uint8_t>(ctx.gpr[3]));
    { const bool branch_taken = static_cast<std::int32_t>(ctx.gpr[5]) > 0;
    ctx.set_gpr(4, ctx.gpr[4] + static_cast<std::uint32_t>(1));
      if (branch_taken) {
          goto L_08814D08;
      }
      goto L_08814D28;
    }
L_08814D28:
    ctx.set_gpr(2, ctx.gpr[19] < ctx.gpr[17] ? 1u : 0u);
    goto L_08814CC8;
L_08814D30:
    ctx.set_gpr(5, ctx.gpr[16] + 0u);
    ctx.set_gpr(6, ctx.gpr[18] >> 2u);
    goto L_08814D38;
L_08814D38:
    ctx.set_gpr(3, rt.memory().aot_load32(ctx.gpr[5] + static_cast<std::uint32_t>(0)));
    ctx.set_gpr(2, rt.memory().aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(0)));
    ctx.set_gpr(6, ctx.gpr[6] + static_cast<std::uint32_t>(-1));
    rt.memory().aot_store32(ctx.gpr[5] + static_cast<std::uint32_t>(0), ctx.gpr[2]);
    ctx.set_gpr(5, ctx.gpr[5] + static_cast<std::uint32_t>(4));
    rt.memory().aot_store32(ctx.gpr[4] + static_cast<std::uint32_t>(0), ctx.gpr[3]);
    { const bool branch_taken = static_cast<std::int32_t>(ctx.gpr[6]) > 0;
    ctx.set_gpr(4, ctx.gpr[4] + static_cast<std::uint32_t>(4));
      if (branch_taken) {
          goto L_08814D38;
      }
      goto L_08814D58;
    }
L_08814D58:
    ctx.set_gpr(2, ctx.gpr[19] < ctx.gpr[17] ? 1u : 0u);
    goto L_08814CC8;
L_08814D60:
    ctx.set_gpr(4, ctx.gpr[17] + 0u);
    jump_target = ctx.gpr[3];
    ctx.set_gpr(31, 0x08814D6Cu);
    ctx.set_gpr(5, ctx.gpr[22] + 0u);
    ctx.pc = jump_target;
    if (rt.invoke_chained_call(ctx, &aot_mem) && ctx.pc == 0x08814D6Cu) goto L_08814D6C;
    return;
L_08814D6C:
    { const bool branch_taken = static_cast<std::int32_t>(ctx.gpr[2]) < 0;
    ctx.set_gpr(4, rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(4)));
      if (branch_taken) {
          goto L_08814A84;
      }
      goto L_08814D74;
    }
L_08814D74:
    ctx.set_gpr(3, rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(24)));
    jump_target = ctx.gpr[3];
    ctx.set_gpr(31, 0x08814D80u);
    ctx.set_gpr(5, ctx.gpr[22] + 0u);
    ctx.pc = jump_target;
    if (rt.invoke_chained_call(ctx, &aot_mem) && ctx.pc == 0x08814D80u) goto L_08814D80;
    return;
L_08814D80:
    if (static_cast<std::int32_t>(ctx.gpr[2]) >= 0) {
    ctx.set_gpr(22, rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(4)));
        goto L_08814614;
    }
    goto L_08814D88;
L_08814D88:
    ctx.set_gpr(3, rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(24)));
    goto L_08814618;
L_08814D90:
    ctx.set_gpr(4, ctx.gpr[16] + 0u);
    jump_target = ctx.gpr[3];
    ctx.set_gpr(31, 0x08814D9Cu);
    ctx.set_gpr(5, ctx.gpr[17] + 0u);
    ctx.pc = jump_target;
    if (rt.invoke_chained_call(ctx, &aot_mem) && ctx.pc == 0x08814D9Cu) goto L_08814D9C;
    return;
L_08814D9C:
    { const bool branch_taken = static_cast<std::int32_t>(ctx.gpr[2]) < 0;
    ctx.set_gpr(4, rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(0)));
      if (branch_taken) {
          goto L_08814A48;
      }
      goto L_08814DA4;
    }
L_08814DA4:
    ctx.set_gpr(3, rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(24)));
    jump_target = ctx.gpr[3];
    ctx.set_gpr(31, 0x08814DB0u);
    ctx.set_gpr(5, ctx.gpr[17] + 0u);
    ctx.pc = jump_target;
    if (rt.invoke_chained_call(ctx, &aot_mem) && ctx.pc == 0x08814DB0u) goto L_08814DB0;
    return;
L_08814DB0:
    if (static_cast<std::int32_t>(ctx.gpr[2]) < 0) {
    ctx.set_gpr(16, ctx.gpr[17] + 0u);
        goto L_08814A48;
    }
    goto L_08814DB8;
L_08814DB8:
    ctx.set_gpr(16, rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(0)));
    goto L_08814A48;
L_08814DC0:
    ctx.set_gpr(4, ctx.gpr[21] + 0u);
    jump_target = ctx.gpr[3];
    ctx.set_gpr(31, 0x08814DCCu);
    ctx.set_gpr(5, ctx.gpr[17] + 0u);
    ctx.pc = jump_target;
    if (rt.invoke_chained_call(ctx, &aot_mem) && ctx.pc == 0x08814DCCu) goto L_08814DCC;
    return;
L_08814DCC:
    { const bool branch_taken = static_cast<std::int32_t>(ctx.gpr[2]) < 0;
    ctx.set_gpr(3, rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(24)));
      if (branch_taken) {
          goto L_08814A0C;
      }
      goto L_08814DD4;
    }
L_08814DD4:
    ctx.set_gpr(4, ctx.gpr[19] + 0u);
    jump_target = ctx.gpr[3];
    ctx.set_gpr(31, 0x08814DE0u);
    ctx.set_gpr(5, ctx.gpr[17] + 0u);
    ctx.pc = jump_target;
    if (rt.invoke_chained_call(ctx, &aot_mem) && ctx.pc == 0x08814DE0u) goto L_08814DE0;
    return;
L_08814DE0:
    if (static_cast<std::int32_t>(ctx.gpr[2]) < 0) {
    ctx.set_gpr(21, ctx.gpr[17] + 0u);
        goto L_08814A0C;
    }
    goto L_08814DE8;
L_08814DE8:
    ctx.set_gpr(21, ctx.gpr[19] + 0u);
    goto L_08814A0C;
L_08814DF0:
    ctx.set_gpr(3, rt.memory().aot_load32(ctx.gpr[30] + static_cast<std::uint32_t>(0)));
    ctx.set_gpr(22, 0u + static_cast<std::uint32_t>(1));
    rt.memory().aot_store32(ctx.gpr[30] + static_cast<std::uint32_t>(0), ctx.gpr[2]);
    ctx.set_gpr(30, ctx.gpr[30] + ctx.gpr[18]);
    rt.memory().aot_store32(ctx.gpr[16] + static_cast<std::uint32_t>(0), ctx.gpr[3]);
    goto L_08814BA8;
L_08814E08:
    ctx.set_gpr(3, rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(24)));
    jump_target = ctx.gpr[3];
    ctx.set_gpr(31, 0x08814E14u);
    ctx.set_gpr(5, ctx.gpr[22] + 0u);
    ctx.pc = jump_target;
    if (rt.invoke_chained_call(ctx, &aot_mem) && ctx.pc == 0x08814E14u) goto L_08814E14;
    return;
L_08814E14:
    if (static_cast<std::int32_t>(ctx.gpr[2]) < 0) {
    ctx.set_gpr(22, rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(4)));
        goto L_08814614;
    }
    goto L_08814E1C;
L_08814E1C:
    ctx.set_gpr(3, rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(24)));
    goto L_08814618;
L_08814E24:
    ctx.set_gpr(3, rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(24)));
    jump_target = ctx.gpr[3];
    ctx.set_gpr(31, 0x08814E30u);
    ctx.set_gpr(5, ctx.gpr[17] + 0u);
    ctx.pc = jump_target;
    if (rt.invoke_chained_call(ctx, &aot_mem) && ctx.pc == 0x08814E30u) goto L_08814E30;
    return;
L_08814E30:
    if (static_cast<std::int32_t>(ctx.gpr[2]) < 0) {
    ctx.set_gpr(16, rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(0)));
        goto L_08814A48;
    }
    goto L_08814E38;
L_08814E38:
    ctx.set_gpr(16, ctx.gpr[17] + 0u);
    goto L_08814A48;
L_08814E40:
    ctx.set_gpr(4, ctx.gpr[19] + 0u);
    jump_target = ctx.gpr[3];
    ctx.set_gpr(31, 0x08814E4Cu);
    ctx.set_gpr(5, ctx.gpr[17] + 0u);
    ctx.pc = jump_target;
    if (rt.invoke_chained_call(ctx, &aot_mem) && ctx.pc == 0x08814E4Cu) goto L_08814E4C;
    return;
L_08814E4C:
    if (static_cast<std::int32_t>(ctx.gpr[2]) < 0) {
    ctx.set_gpr(21, ctx.gpr[19] + 0u);
        goto L_08814A0C;
    }
    goto L_08814E54;
L_08814E54:
    ctx.set_gpr(21, ctx.gpr[17] + 0u);
    goto L_08814A0C;
L_08814E5C:
    ctx.set_gpr(6, ctx.gpr[18] >> 2u);
    ctx.set_gpr(5, ctx.gpr[16] + 0u);
    ctx.set_gpr(4, ctx.gpr[17] + 0u);
    goto L_08814E68;
L_08814E68:
    ctx.set_gpr(3, rt.memory().aot_load32(ctx.gpr[5] + static_cast<std::uint32_t>(0)));
    ctx.set_gpr(2, rt.memory().aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(0)));
    ctx.set_gpr(6, ctx.gpr[6] + static_cast<std::uint32_t>(-1));
    rt.memory().aot_store32(ctx.gpr[5] + static_cast<std::uint32_t>(0), ctx.gpr[2]);
    ctx.set_gpr(5, ctx.gpr[5] + static_cast<std::uint32_t>(4));
    rt.memory().aot_store32(ctx.gpr[4] + static_cast<std::uint32_t>(0), ctx.gpr[3]);
    { const bool branch_taken = static_cast<std::int32_t>(ctx.gpr[6]) > 0;
    ctx.set_gpr(4, ctx.gpr[4] + static_cast<std::uint32_t>(4));
      if (branch_taken) {
          goto L_08814E68;
      }
      goto L_08814E88;
    }
L_08814E88:
    ctx.set_gpr(16, ctx.gpr[16] + ctx.gpr[18]);
    ctx.set_gpr(17, ctx.gpr[17] - ctx.gpr[18]);
    ctx.set_gpr(22, 0u + static_cast<std::uint32_t>(1));
    goto L_08814690;
L_08814E98:
    ctx.set_gpr(6, ctx.gpr[18] >> 2u);
    ctx.set_gpr(5, ctx.gpr[30] + 0u);
    ctx.set_gpr(4, ctx.gpr[16] + 0u);
    goto L_08814EA4;
L_08814EA4:
    ctx.set_gpr(3, rt.memory().aot_load32(ctx.gpr[5] + static_cast<std::uint32_t>(0)));
    ctx.set_gpr(2, rt.memory().aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(0)));
    ctx.set_gpr(6, ctx.gpr[6] + static_cast<std::uint32_t>(-1));
    rt.memory().aot_store32(ctx.gpr[5] + static_cast<std::uint32_t>(0), ctx.gpr[2]);
    ctx.set_gpr(5, ctx.gpr[5] + static_cast<std::uint32_t>(4));
    rt.memory().aot_store32(ctx.gpr[4] + static_cast<std::uint32_t>(0), ctx.gpr[3]);
    { const bool branch_taken = static_cast<std::int32_t>(ctx.gpr[6]) > 0;
    ctx.set_gpr(4, ctx.gpr[4] + static_cast<std::uint32_t>(4));
      if (branch_taken) {
          goto L_08814EA4;
      }
      goto L_08814EC4;
    }
L_08814EC4:
    ctx.set_gpr(30, ctx.gpr[30] + ctx.gpr[18]);
    ctx.set_gpr(22, 0u + static_cast<std::uint32_t>(1));
    goto L_08814BA8;
L_08814ED0:
    ctx.set_gpr(29, ctx.gpr[29] + static_cast<std::uint32_t>(-16));
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(4), ctx.gpr[17]);
    ctx.set_gpr(17, ctx.gpr[4] + 0u);
    ctx.set_gpr(4, ctx.gpr[5] + 0u);
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(0), ctx.gpr[16]);
    ctx.set_gpr(5, ctx.gpr[6] + 0u);
    ctx.set_gpr(16, 2247u << 16u);
    ctx.set_gpr(6, ctx.gpr[7] + 0u);
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(8), ctx.gpr[31]);
    ctx.set_gpr(31, 0x08814EFCu);
    rt.memory().aot_store32(ctx.gpr[16] + static_cast<std::uint32_t>(-23024), 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0000_entry, 0u, 108u, 0x08804754u>(ctx, &aot_mem) && ctx.pc == 0x08814EFCu) goto L_08814EFC;
    return;
L_08814EFC:
    ctx.set_gpr(3, ctx.gpr[2] + 0u);
    ctx.set_gpr(2, 0u + static_cast<std::uint32_t>(-1));
    { const bool branch_taken = ctx.gpr[3] == ctx.gpr[2];
    ctx.set_gpr(2, rt.memory().aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(-23024)));
      if (branch_taken) {
          goto L_08814F24;
      }
      goto L_08814F0C;
    }
L_08814F0C:
    ctx.set_gpr(31, rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(8)));
    goto L_08814F10;
L_08814F10:
    ctx.set_gpr(17, rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(4)));
    ctx.set_gpr(16, rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(0)));
    ctx.set_gpr(2, ctx.gpr[3] + 0u);
    jump_target = ctx.gpr[31];
    ctx.set_gpr(29, ctx.gpr[29] + static_cast<std::uint32_t>(16));
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_08814F24:
    { const bool branch_taken = ctx.gpr[2] == 0u;
    ctx.set_gpr(31, rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(8)));
      if (branch_taken) {
          goto L_08814F10;
      }
      goto L_08814F2C;
    }
L_08814F2C:
    rt.memory().aot_store32(ctx.gpr[17] + static_cast<std::uint32_t>(0), ctx.gpr[2]);
    ctx.set_gpr(2, ctx.gpr[3] + 0u);
    ctx.set_gpr(31, rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(8)));
    ctx.set_gpr(17, rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(4)));
    ctx.set_gpr(16, rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(0)));
    jump_target = ctx.gpr[31];
    ctx.set_gpr(29, ctx.gpr[29] + static_cast<std::uint32_t>(16));
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_08814F48:
    ctx.set_gpr(29, ctx.gpr[29] + static_cast<std::uint32_t>(-16));
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(8), ctx.gpr[31]);
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(4), ctx.gpr[17]);
    ctx.set_gpr(17, ctx.gpr[5] + 0u);
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(0), ctx.gpr[16]);
    ctx.set_gpr(31, 0x08814F64u);
    ctx.set_gpr(16, ctx.gpr[4] + 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0003_entry, 3u, 442u, 0x08811C60u>(ctx, &aot_mem) && ctx.pc == 0x08814F64u) goto L_08814F64;
    return;
L_08814F64:
    ctx.set_gpr(4, ctx.gpr[2] + 0u);
    ctx.set_gpr(5, ctx.gpr[16] + 0u);
    ctx.set_gpr(6, ctx.gpr[17] + 0u);
    ctx.set_gpr(31, rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(8)));
    ctx.set_gpr(17, rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(4)));
    ctx.set_gpr(16, rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(0)));
    ctx.set_gpr(29, ctx.gpr[29] + static_cast<std::uint32_t>(16));
    goto L_08814F84;
L_08814F84:
    ctx.set_gpr(29, ctx.gpr[29] + static_cast<std::uint32_t>(-48));
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(20), ctx.gpr[21]);
    ctx.set_gpr(21, ctx.gpr[4] + 0u);
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(4), ctx.gpr[17]);
    ctx.set_gpr(17, ctx.gpr[5] + 0u);
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(0), ctx.gpr[16]);
    ctx.set_gpr(16, ctx.gpr[6] + 0u);
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(36), ctx.gpr[31]);
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(32), ctx.gpr[30]);
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(28), ctx.gpr[23]);
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(24), ctx.gpr[22]);
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(16), ctx.gpr[20]);
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(12), ctx.gpr[19]);
    { const bool branch_taken = ctx.gpr[5] != 0u;
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(8), ctx.gpr[18]);
      if (branch_taken) {
          goto L_08814FF4;
      }
      goto L_08814FC0;
    }
L_08814FC0:
    ctx.set_gpr(31, rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(36)));
    ctx.set_gpr(30, rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(32)));
    ctx.set_gpr(23, rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(28)));
    ctx.set_gpr(22, rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(24)));
    ctx.set_gpr(21, rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(20)));
    ctx.set_gpr(20, rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(16)));
    ctx.set_gpr(19, rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(12)));
    ctx.set_gpr(18, rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(8)));
    ctx.set_gpr(17, rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(4)));
    ctx.set_gpr(16, rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(0)));
    ctx.set_gpr(5, ctx.gpr[6] + 0u);
    ctx.set_gpr(29, ctx.gpr[29] + static_cast<std::uint32_t>(48));
    (void)rt.invoke_chained_direct<&recomp_unit_0003_entry, 3u, 491u, 0x08812074u>(ctx, &aot_mem); return;
L_08814FF4:
    ctx.set_gpr(31, 0x08814FFCu);
    ctx.set_gpr(18, ctx.gpr[5] + static_cast<std::uint32_t>(-8));
    if (rt.invoke_chained_direct<&recomp_unit_0003_entry, 3u, 736u, 0x08812FC0u>(ctx, &aot_mem) && ctx.pc == 0x08814FFCu) goto L_08814FFC;
    return;
L_08814FFC:
    ctx.set_gpr(5, rt.memory().aot_load32(ctx.gpr[18] + static_cast<std::uint32_t>(4)));
    ctx.set_gpr(3, ctx.gpr[16] + static_cast<std::uint32_t>(19));
    ctx.set_gpr(2, ctx.gpr[3] < static_cast<std::uint32_t>(31) ? 1u : 0u);
    ctx.set_gpr(19, ctx.gpr[5] + 0u);
    ctx.set_gpr(19, (ctx.gpr[19] & ~0x00000003u) | ((0u & 0x00000003u) << 0u));
    { const bool branch_taken = ctx.gpr[2] == 0u;
    ctx.set_gpr(23, 0u + static_cast<std::uint32_t>(16));
      if (branch_taken) {
          goto L_08815158;
      }
      goto L_08815018;
    }
L_08815018:
    ctx.set_gpr(2, ctx.gpr[23] < ctx.gpr[16] ? 1u : 0u);
    goto L_0881501C;
L_0881501C:
    if (ctx.gpr[2] != 0u) {
    ctx.set_gpr(16, 0u + 0u);
        goto L_0881516C;
    }
    goto L_08815024;
L_08815024:
    ctx.set_gpr(2, static_cast<std::int32_t>(ctx.gpr[19]) < static_cast<std::int32_t>(ctx.gpr[23]) ? 1u : 0u);
    { const bool branch_taken = ctx.gpr[2] == 0u;
    ctx.set_gpr(20, ctx.gpr[18] + 0u);
      if (branch_taken) {
          goto L_088151A0;
      }
      goto L_08815030;
    }
L_08815030:
    ctx.set_gpr(2, 2226u << 16u);
    ctx.set_gpr(2, ctx.gpr[2] + static_cast<std::uint32_t>(2860));
    ctx.set_gpr(7, rt.memory().aot_load32(ctx.gpr[2] + static_cast<std::uint32_t>(8)));
    ctx.set_gpr(6, ctx.gpr[18] + ctx.gpr[19]);
    { const bool branch_taken = ctx.gpr[6] == ctx.gpr[7];
    ctx.set_gpr(4, rt.memory().aot_load32(ctx.gpr[6] + static_cast<std::uint32_t>(4)));
      if (branch_taken) {
          goto L_08815214;
      }
      goto L_08815048;
    }
L_08815048:
    ctx.set_gpr(2, ctx.gpr[4] + 0u);
    ctx.set_gpr(2, (ctx.gpr[2] & ~0x00000001u) | ((0u & 0x00000001u) << 0u));
    ctx.set_gpr(2, ctx.gpr[2] + ctx.gpr[6]);
    ctx.set_gpr(3, rt.memory().aot_load32(ctx.gpr[2] + static_cast<std::uint32_t>(4)));
    ctx.set_gpr(3, ctx.gpr[3] & 1u);
    { const bool branch_taken = ctx.gpr[3] == 0u;
    ctx.set_gpr(3, ctx.gpr[4] + 0u);
      if (branch_taken) {
          goto L_08815218;
      }
      goto L_08815064;
    }
L_08815064:
    ctx.set_gpr(6, 0u + 0u);
    ctx.set_gpr(3, 0u + 0u);
    ctx.set_gpr(2, ctx.gpr[5] & 1u);
    goto L_08815070;
L_08815070:
    if (ctx.gpr[2] != 0u) {
    ctx.set_gpr(5, ctx.gpr[16] + 0u);
        goto L_08815290;
    }
    goto L_08815078;
L_08815078:
    ctx.set_gpr(2, rt.memory().aot_load32(ctx.gpr[18] + static_cast<std::uint32_t>(0)));
    ctx.set_gpr(30, ctx.gpr[18] - ctx.gpr[2]);
    ctx.set_gpr(4, rt.memory().aot_load32(ctx.gpr[30] + static_cast<std::uint32_t>(4)));
    { const bool branch_taken = ctx.gpr[6] == 0u;
    ctx.set_gpr(4, (ctx.gpr[4] & ~0x00000003u) | ((0u & 0x00000003u) << 0u));
      if (branch_taken) {
          goto L_0881534C;
      }
      goto L_0881508C;
    }
L_0881508C:
    { const bool branch_taken = ctx.gpr[6] == ctx.gpr[7];
    ctx.set_gpr(2, ctx.gpr[3] + ctx.gpr[4]);
      if (branch_taken) {
          goto L_088153FC;
      }
      goto L_08815094;
    }
L_08815094:
    ctx.set_gpr(22, ctx.gpr[19] + ctx.gpr[2]);
    ctx.set_gpr(3, static_cast<std::int32_t>(ctx.gpr[22]) < static_cast<std::int32_t>(ctx.gpr[23]) ? 1u : 0u);
    if (ctx.gpr[3] != 0u) {
    ctx.set_gpr(22, ctx.gpr[19] + ctx.gpr[4]);
        goto L_08815350;
    }
    goto L_088150A4;
L_088150A4:
    ctx.set_gpr(2, rt.memory().aot_load32(ctx.gpr[6] + static_cast<std::uint32_t>(12)));
    ctx.set_gpr(4, rt.memory().aot_load32(ctx.gpr[6] + static_cast<std::uint32_t>(8)));
    ctx.set_gpr(6, ctx.gpr[19] + static_cast<std::uint32_t>(-4));
    ctx.set_gpr(5, ctx.gpr[6] < static_cast<std::uint32_t>(37) ? 1u : 0u);
    rt.memory().aot_store32(ctx.gpr[4] + static_cast<std::uint32_t>(12), ctx.gpr[2]);
    ctx.set_gpr(20, ctx.gpr[30] + 0u);
    ctx.set_gpr(16, ctx.gpr[30] + static_cast<std::uint32_t>(8));
    rt.memory().aot_store32(ctx.gpr[2] + static_cast<std::uint32_t>(8), ctx.gpr[4]);
    ctx.set_gpr(3, rt.memory().aot_load32(ctx.gpr[30] + static_cast<std::uint32_t>(12)));
    ctx.set_gpr(2, rt.memory().aot_load32(ctx.gpr[30] + static_cast<std::uint32_t>(8)));
    rt.memory().aot_store32(ctx.gpr[3] + static_cast<std::uint32_t>(8), ctx.gpr[2]);
    { const bool branch_taken = ctx.gpr[5] == 0u;
    rt.memory().aot_store32(ctx.gpr[2] + static_cast<std::uint32_t>(12), ctx.gpr[3]);
      if (branch_taken) {
          goto L_08815380;
      }
      goto L_088150D8;
    }
L_088150D8:
    ctx.set_gpr(2, ctx.gpr[6] < static_cast<std::uint32_t>(20) ? 1u : 0u);
    ctx.set_gpr(8, ctx.gpr[17] + 0u);
    { const bool branch_taken = ctx.gpr[2] != 0u;
    ctx.set_gpr(7, ctx.gpr[16] + 0u);
      if (branch_taken) {
          goto L_08815138;
      }
      goto L_088150E8;
    }
L_088150E8:
    ctx.set_gpr(2, rt.memory().aot_load32(ctx.gpr[17] + static_cast<std::uint32_t>(0)));
    ctx.set_gpr(5, ctx.gpr[20] + static_cast<std::uint32_t>(16));
    ctx.set_gpr(3, ctx.gpr[17] + static_cast<std::uint32_t>(8));
    rt.memory().aot_store32(ctx.gpr[20] + static_cast<std::uint32_t>(8), ctx.gpr[2]);
    ctx.set_gpr(4, ctx.gpr[6] < static_cast<std::uint32_t>(28) ? 1u : 0u);
    ctx.set_gpr(8, ctx.gpr[3] + 0u);
    ctx.set_gpr(2, rt.memory().aot_load32(ctx.gpr[17] + static_cast<std::uint32_t>(4)));
    ctx.set_gpr(7, ctx.gpr[5] + 0u);
    { const bool branch_taken = ctx.gpr[4] != 0u;
    rt.memory().aot_store32(ctx.gpr[16] + static_cast<std::uint32_t>(4), ctx.gpr[2]);
      if (branch_taken) {
          goto L_08815138;
      }
      goto L_08815110;
    }
L_08815110:
    ctx.set_gpr(3, rt.memory().aot_load32(ctx.gpr[17] + static_cast<std::uint32_t>(8)));
    ctx.set_gpr(2, ctx.gpr[17] + static_cast<std::uint32_t>(16));
    ctx.set_gpr(4, ctx.gpr[20] + static_cast<std::uint32_t>(24));
    rt.memory().aot_store32(ctx.gpr[20] + static_cast<std::uint32_t>(16), ctx.gpr[3]);
    ctx.set_gpr(8, ctx.gpr[2] + 0u);
    ctx.set_gpr(2, 0u + static_cast<std::uint32_t>(36));
    ctx.set_gpr(3, rt.memory().aot_load32(ctx.gpr[17] + static_cast<std::uint32_t>(12)));
    ctx.set_gpr(7, ctx.gpr[4] + 0u);
    { const bool branch_taken = ctx.gpr[6] == ctx.gpr[2];
    rt.memory().aot_store32(ctx.gpr[16] + static_cast<std::uint32_t>(12), ctx.gpr[3]);
      if (branch_taken) {
          goto L_088154FC;
      }
      goto L_08815138;
    }
L_08815138:
    ctx.set_gpr(2, rt.memory().aot_load32(ctx.gpr[8] + static_cast<std::uint32_t>(0)));
    ctx.set_gpr(5, ctx.gpr[30] + 0u);
    rt.memory().aot_store32(ctx.gpr[7] + static_cast<std::uint32_t>(0), ctx.gpr[2]);
    ctx.set_gpr(3, rt.memory().aot_load32(ctx.gpr[8] + static_cast<std::uint32_t>(4)));
    rt.memory().aot_store32(ctx.gpr[7] + static_cast<std::uint32_t>(4), ctx.gpr[3]);
    ctx.set_gpr(2, rt.memory().aot_load32(ctx.gpr[8] + static_cast<std::uint32_t>(8)));
    rt.memory().aot_store32(ctx.gpr[7] + static_cast<std::uint32_t>(8), ctx.gpr[2]);
    goto L_088151AC;
L_08815158:
    ctx.set_gpr(23, ctx.gpr[3] + 0u);
    ctx.set_gpr(23, (ctx.gpr[23] & ~0x0000000Fu) | ((0u & 0x0000000Fu) << 0u));
    { const bool branch_taken = static_cast<std::int32_t>(ctx.gpr[23]) >= 0;
    ctx.set_gpr(2, ctx.gpr[23] < ctx.gpr[16] ? 1u : 0u);
      if (branch_taken) {
          goto L_0881501C;
      }
      goto L_08815168;
    }
L_08815168:
    ctx.set_gpr(16, 0u + 0u);
    goto L_0881516C;
L_0881516C:
    ctx.set_gpr(2, ctx.gpr[16] + 0u);
    goto L_08815170;
L_08815170:
    ctx.set_gpr(31, rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(36)));
    ctx.set_gpr(30, rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(32)));
    ctx.set_gpr(23, rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(28)));
    ctx.set_gpr(22, rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(24)));
    ctx.set_gpr(21, rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(20)));
    ctx.set_gpr(20, rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(16)));
    ctx.set_gpr(19, rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(12)));
    ctx.set_gpr(18, rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(8)));
    ctx.set_gpr(17, rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(4)));
    ctx.set_gpr(16, rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(0)));
    jump_target = ctx.gpr[31];
    ctx.set_gpr(29, ctx.gpr[29] + static_cast<std::uint32_t>(48));
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_088151A0:
    ctx.set_gpr(22, ctx.gpr[19] + 0u);
    ctx.set_gpr(16, ctx.gpr[18] + static_cast<std::uint32_t>(8));
    ctx.set_gpr(5, ctx.gpr[18] + 0u);
    goto L_088151AC;
L_088151AC:
    ctx.set_gpr(6, ctx.gpr[22] - ctx.gpr[23]);
    ctx.set_gpr(2, ctx.gpr[6] < static_cast<std::uint32_t>(16) ? 1u : 0u);
    { const bool branch_taken = ctx.gpr[2] == 0u;
    ctx.set_gpr(2, rt.memory().aot_load32(ctx.gpr[5] + static_cast<std::uint32_t>(4)));
      if (branch_taken) {
          goto L_0881524C;
      }
      goto L_088151BC;
    }
L_088151BC:
    ctx.set_gpr(4, ctx.gpr[22] + ctx.gpr[20]);
    ctx.set_gpr(2, ctx.gpr[2] & 1u);
    ctx.set_gpr(2, ctx.gpr[22] | ctx.gpr[2]);
    rt.memory().aot_store32(ctx.gpr[5] + static_cast<std::uint32_t>(4), ctx.gpr[2]);
    ctx.set_gpr(3, rt.memory().aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(4)));
    ctx.set_gpr(3, ctx.gpr[3] | 1u);
    rt.memory().aot_store32(ctx.gpr[4] + static_cast<std::uint32_t>(4), ctx.gpr[3]);
    goto L_088151D8;
L_088151D8:
    ctx.set_gpr(31, 0x088151E0u);
    ctx.set_gpr(4, ctx.gpr[21] + 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0003_entry, 3u, 740u, 0x08812FFCu>(ctx, &aot_mem) && ctx.pc == 0x088151E0u) goto L_088151E0;
    return;
L_088151E0:
    ctx.set_gpr(2, ctx.gpr[16] + 0u);
    goto L_088151E4;
L_088151E4:
    ctx.set_gpr(31, rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(36)));
    ctx.set_gpr(30, rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(32)));
    ctx.set_gpr(23, rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(28)));
    ctx.set_gpr(22, rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(24)));
    ctx.set_gpr(21, rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(20)));
    ctx.set_gpr(20, rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(16)));
    ctx.set_gpr(19, rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(12)));
    ctx.set_gpr(18, rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(8)));
    ctx.set_gpr(17, rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(4)));
    ctx.set_gpr(16, rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(0)));
    jump_target = ctx.gpr[31];
    ctx.set_gpr(29, ctx.gpr[29] + static_cast<std::uint32_t>(48));
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_08815214:
    ctx.set_gpr(3, ctx.gpr[4] + 0u);
    goto L_08815218;
L_08815218:
    { const bool branch_taken = ctx.gpr[6] == ctx.gpr[7];
    ctx.set_gpr(3, (ctx.gpr[3] & ~0x00000003u) | ((0u & 0x00000003u) << 0u));
      if (branch_taken) {
          goto L_08815394;
      }
      goto L_08815220;
    }
L_08815220:
    ctx.set_gpr(22, ctx.gpr[19] + ctx.gpr[3]);
    ctx.set_gpr(2, static_cast<std::int32_t>(ctx.gpr[22]) < static_cast<std::int32_t>(ctx.gpr[23]) ? 1u : 0u);
    { const bool branch_taken = ctx.gpr[2] != 0u;
    ctx.set_gpr(2, ctx.gpr[5] & 1u);
      if (branch_taken) {
          goto L_08815070;
      }
      goto L_08815230;
    }
L_08815230:
    ctx.set_gpr(3, rt.memory().aot_load32(ctx.gpr[6] + static_cast<std::uint32_t>(8)));
    ctx.set_gpr(2, rt.memory().aot_load32(ctx.gpr[6] + static_cast<std::uint32_t>(12)));
    ctx.set_gpr(5, ctx.gpr[18] + 0u);
    ctx.set_gpr(16, ctx.gpr[18] + static_cast<std::uint32_t>(8));
    rt.memory().aot_store32(ctx.gpr[2] + static_cast<std::uint32_t>(8), ctx.gpr[3]);
    rt.memory().aot_store32(ctx.gpr[3] + static_cast<std::uint32_t>(12), ctx.gpr[2]);
    goto L_088151AC;
L_0881524C:
    ctx.set_gpr(3, ctx.gpr[23] + ctx.gpr[20]);
    ctx.set_gpr(4, ctx.gpr[6] | 1u);
    ctx.set_gpr(2, ctx.gpr[2] & 1u);
    ctx.set_gpr(2, ctx.gpr[23] | ctx.gpr[2]);
    rt.memory().aot_store32(ctx.gpr[5] + static_cast<std::uint32_t>(4), ctx.gpr[2]);
    ctx.set_gpr(6, ctx.gpr[3] + ctx.gpr[6]);
    ctx.set_gpr(5, ctx.gpr[3] + static_cast<std::uint32_t>(8));
    rt.memory().aot_store32(ctx.gpr[3] + static_cast<std::uint32_t>(4), ctx.gpr[4]);
    ctx.set_gpr(4, ctx.gpr[21] + 0u);
    ctx.set_gpr(2, rt.memory().aot_load32(ctx.gpr[6] + static_cast<std::uint32_t>(4)));
    ctx.set_gpr(2, ctx.gpr[2] | 1u);
    ctx.set_gpr(31, 0x08815280u);
    rt.memory().aot_store32(ctx.gpr[6] + static_cast<std::uint32_t>(4), ctx.gpr[2]);
    if (rt.invoke_chained_direct<&recomp_unit_0003_entry, 3u, 285u, 0x088112B8u>(ctx, &aot_mem) && ctx.pc == 0x08815280u) goto L_08815280;
    return;
L_08815280:
    ctx.set_gpr(31, 0x08815288u);
    ctx.set_gpr(4, ctx.gpr[21] + 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0003_entry, 3u, 740u, 0x08812FFCu>(ctx, &aot_mem) && ctx.pc == 0x08815288u) goto L_08815288;
    return;
L_08815288:
    ctx.set_gpr(2, ctx.gpr[16] + 0u);
    goto L_088151E4;
L_08815290:
    ctx.set_gpr(31, 0x08815298u);
    ctx.set_gpr(4, ctx.gpr[21] + 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0003_entry, 3u, 491u, 0x08812074u>(ctx, &aot_mem) && ctx.pc == 0x08815298u) goto L_08815298;
    return;
L_08815298:
    { const bool branch_taken = ctx.gpr[2] == 0u;
    ctx.set_gpr(16, ctx.gpr[2] + 0u);
      if (branch_taken) {
          goto L_088151D8;
      }
      goto L_088152A0;
    }
L_088152A0:
    ctx.set_gpr(2, rt.memory().aot_load32(ctx.gpr[18] + static_cast<std::uint32_t>(4)));
    ctx.set_gpr(3, ctx.gpr[16] + static_cast<std::uint32_t>(-8));
    ctx.set_gpr(2, (ctx.gpr[2] & ~0x00000001u) | ((0u & 0x00000001u) << 0u));
    ctx.set_gpr(2, ctx.gpr[18] + ctx.gpr[2]);
    { const bool branch_taken = ctx.gpr[3] == ctx.gpr[2];
    ctx.set_gpr(6, ctx.gpr[19] + static_cast<std::uint32_t>(-4));
      if (branch_taken) {
          goto L_088154E4;
      }
      goto L_088152B8;
    }
L_088152B8:
    ctx.set_gpr(2, ctx.gpr[6] < static_cast<std::uint32_t>(37) ? 1u : 0u);
    { const bool branch_taken = ctx.gpr[2] == 0u;
    ctx.set_gpr(8, ctx.gpr[17] + 0u);
      if (branch_taken) {
          goto L_088153E8;
      }
      goto L_088152C4;
    }
L_088152C4:
    ctx.set_gpr(2, ctx.gpr[6] < static_cast<std::uint32_t>(20) ? 1u : 0u);
    { const bool branch_taken = ctx.gpr[2] != 0u;
    ctx.set_gpr(7, ctx.gpr[16] + 0u);
      if (branch_taken) {
          goto L_08815318;
      }
      goto L_088152D0;
    }
L_088152D0:
    ctx.set_gpr(2, rt.memory().aot_load32(ctx.gpr[17] + static_cast<std::uint32_t>(0)));
    ctx.set_gpr(3, ctx.gpr[17] + static_cast<std::uint32_t>(8));
    ctx.set_gpr(4, ctx.gpr[6] < static_cast<std::uint32_t>(28) ? 1u : 0u);
    rt.memory().aot_store32(ctx.gpr[16] + static_cast<std::uint32_t>(0), ctx.gpr[2]);
    ctx.set_gpr(8, ctx.gpr[3] + 0u);
    ctx.set_gpr(7, ctx.gpr[16] + static_cast<std::uint32_t>(8));
    ctx.set_gpr(2, rt.memory().aot_load32(ctx.gpr[17] + static_cast<std::uint32_t>(4)));
    { const bool branch_taken = ctx.gpr[4] != 0u;
    rt.memory().aot_store32(ctx.gpr[16] + static_cast<std::uint32_t>(4), ctx.gpr[2]);
      if (branch_taken) {
          goto L_08815318;
      }
      goto L_088152F4;
    }
L_088152F4:
    ctx.set_gpr(2, rt.memory().aot_load32(ctx.gpr[17] + static_cast<std::uint32_t>(8)));
    ctx.set_gpr(3, ctx.gpr[17] + static_cast<std::uint32_t>(16));
    ctx.set_gpr(8, ctx.gpr[3] + 0u);
    rt.memory().aot_store32(ctx.gpr[16] + static_cast<std::uint32_t>(8), ctx.gpr[2]);
    ctx.set_gpr(3, 0u + static_cast<std::uint32_t>(36));
    ctx.set_gpr(7, ctx.gpr[16] + static_cast<std::uint32_t>(16));
    ctx.set_gpr(2, rt.memory().aot_load32(ctx.gpr[17] + static_cast<std::uint32_t>(12)));
    { const bool branch_taken = ctx.gpr[6] == ctx.gpr[3];
    rt.memory().aot_store32(ctx.gpr[16] + static_cast<std::uint32_t>(12), ctx.gpr[2]);
      if (branch_taken) {
          goto L_08815518;
      }
      goto L_08815318;
    }
L_08815318:
    ctx.set_gpr(2, rt.memory().aot_load32(ctx.gpr[8] + static_cast<std::uint32_t>(0)));
    rt.memory().aot_store32(ctx.gpr[7] + static_cast<std::uint32_t>(0), ctx.gpr[2]);
    ctx.set_gpr(3, rt.memory().aot_load32(ctx.gpr[8] + static_cast<std::uint32_t>(4)));
    rt.memory().aot_store32(ctx.gpr[7] + static_cast<std::uint32_t>(4), ctx.gpr[3]);
    ctx.set_gpr(2, rt.memory().aot_load32(ctx.gpr[8] + static_cast<std::uint32_t>(8)));
    rt.memory().aot_store32(ctx.gpr[7] + static_cast<std::uint32_t>(8), ctx.gpr[2]);
    ctx.set_gpr(4, ctx.gpr[21] + 0u);
    goto L_08815334;
L_08815334:
    ctx.set_gpr(31, 0x0881533Cu);
    ctx.set_gpr(5, ctx.gpr[17] + 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0003_entry, 3u, 285u, 0x088112B8u>(ctx, &aot_mem) && ctx.pc == 0x0881533Cu) goto L_0881533C;
    return;
L_0881533C:
    ctx.set_gpr(31, 0x08815344u);
    ctx.set_gpr(4, ctx.gpr[21] + 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0003_entry, 3u, 740u, 0x08812FFCu>(ctx, &aot_mem) && ctx.pc == 0x08815344u) goto L_08815344;
    return;
L_08815344:
    ctx.set_gpr(2, ctx.gpr[16] + 0u);
    goto L_08815170;
L_0881534C:
    ctx.set_gpr(22, ctx.gpr[19] + ctx.gpr[4]);
    goto L_08815350;
L_08815350:
    ctx.set_gpr(2, static_cast<std::int32_t>(ctx.gpr[22]) < static_cast<std::int32_t>(ctx.gpr[23]) ? 1u : 0u);
    { const bool branch_taken = ctx.gpr[2] != 0u;
    ctx.set_gpr(5, ctx.gpr[16] + 0u);
      if (branch_taken) {
          goto L_08815290;
      }
      goto L_0881535C;
    }
L_0881535C:
    ctx.set_gpr(2, rt.memory().aot_load32(ctx.gpr[30] + static_cast<std::uint32_t>(12)));
    ctx.set_gpr(3, rt.memory().aot_load32(ctx.gpr[30] + static_cast<std::uint32_t>(8)));
    ctx.set_gpr(6, ctx.gpr[19] + static_cast<std::uint32_t>(-4));
    ctx.set_gpr(4, ctx.gpr[6] < static_cast<std::uint32_t>(37) ? 1u : 0u);
    ctx.set_gpr(20, ctx.gpr[30] + 0u);
    rt.memory().aot_store32(ctx.gpr[2] + static_cast<std::uint32_t>(8), ctx.gpr[3]);
    ctx.set_gpr(16, ctx.gpr[30] + static_cast<std::uint32_t>(8));
    { const bool branch_taken = ctx.gpr[4] != 0u;
    rt.memory().aot_store32(ctx.gpr[3] + static_cast<std::uint32_t>(12), ctx.gpr[2]);
      if (branch_taken) {
          goto L_088150D8;
      }
      goto L_08815380;
    }
L_08815380:
    ctx.set_gpr(5, ctx.gpr[17] + 0u);
    ctx.set_gpr(31, 0x0881538Cu);
    ctx.set_gpr(4, ctx.gpr[16] + 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0003_entry, 3u, 662u, 0x08812B08u>(ctx, &aot_mem) && ctx.pc == 0x0881538Cu) goto L_0881538C;
    return;
L_0881538C:
    ctx.set_gpr(5, ctx.gpr[20] + 0u);
    goto L_088151AC;
L_08815394:
    ctx.set_gpr(4, ctx.gpr[19] + ctx.gpr[3]);
    ctx.set_gpr(2, ctx.gpr[23] + static_cast<std::uint32_t>(16));
    ctx.set_gpr(2, static_cast<std::int32_t>(ctx.gpr[4]) < static_cast<std::int32_t>(ctx.gpr[2]) ? 1u : 0u);
    if (ctx.gpr[2] != 0u) {
    ctx.set_gpr(2, ctx.gpr[5] & 1u);
        goto L_08815070;
    }
    goto L_088153A8;
L_088153A8:
    ctx.set_gpr(2, ctx.gpr[4] - ctx.gpr[23]);
    ctx.set_gpr(3, ctx.gpr[18] + ctx.gpr[23]);
    ctx.set_gpr(2, ctx.gpr[2] | 1u);
    rt.memory().aot_store32(ctx.gpr[3] + static_cast<std::uint32_t>(4), ctx.gpr[2]);
    ctx.set_gpr(5, 2226u << 16u);
    ctx.set_gpr(5, ctx.gpr[5] + static_cast<std::uint32_t>(2860));
    ctx.set_gpr(2, rt.memory().aot_load32(ctx.gpr[18] + static_cast<std::uint32_t>(4)));
    ctx.set_gpr(4, ctx.gpr[21] + 0u);
    rt.memory().aot_store32(ctx.gpr[5] + static_cast<std::uint32_t>(8), ctx.gpr[3]);
    ctx.set_gpr(2, ctx.gpr[2] & 1u);
    ctx.set_gpr(2, ctx.gpr[23] | ctx.gpr[2]);
    rt.memory().aot_store32(ctx.gpr[18] + static_cast<std::uint32_t>(4), ctx.gpr[2]);
    ctx.set_gpr(31, 0x088153E0u);
    ctx.set_gpr(16, ctx.gpr[18] + static_cast<std::uint32_t>(8));
    if (rt.invoke_chained_direct<&recomp_unit_0003_entry, 3u, 740u, 0x08812FFCu>(ctx, &aot_mem) && ctx.pc == 0x088153E0u) goto L_088153E0;
    return;
L_088153E0:
    ctx.set_gpr(2, ctx.gpr[16] + 0u);
    goto L_08815170;
L_088153E8:
    ctx.set_gpr(4, ctx.gpr[16] + 0u);
    ctx.set_gpr(31, 0x088153F4u);
    ctx.set_gpr(5, ctx.gpr[17] + 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0003_entry, 3u, 662u, 0x08812B08u>(ctx, &aot_mem) && ctx.pc == 0x088153F4u) goto L_088153F4;
    return;
L_088153F4:
    ctx.set_gpr(4, ctx.gpr[21] + 0u);
    goto L_08815334;
L_088153FC:
    ctx.set_gpr(3, ctx.gpr[3] + ctx.gpr[4]);
    ctx.set_gpr(22, ctx.gpr[19] + ctx.gpr[3]);
    ctx.set_gpr(2, ctx.gpr[23] + static_cast<std::uint32_t>(16));
    ctx.set_gpr(2, static_cast<std::int32_t>(ctx.gpr[22]) < static_cast<std::int32_t>(ctx.gpr[2]) ? 1u : 0u);
    if (ctx.gpr[2] != 0u) {
    ctx.set_gpr(22, ctx.gpr[19] + ctx.gpr[4]);
        goto L_08815350;
    }
    goto L_08815414;
L_08815414:
    ctx.set_gpr(2, rt.memory().aot_load32(ctx.gpr[30] + static_cast<std::uint32_t>(12)));
    ctx.set_gpr(3, rt.memory().aot_load32(ctx.gpr[30] + static_cast<std::uint32_t>(8)));
    ctx.set_gpr(6, ctx.gpr[19] + static_cast<std::uint32_t>(-4));
    ctx.set_gpr(4, ctx.gpr[6] < static_cast<std::uint32_t>(37) ? 1u : 0u);
    rt.memory().aot_store32(ctx.gpr[2] + static_cast<std::uint32_t>(8), ctx.gpr[3]);
    ctx.set_gpr(16, ctx.gpr[30] + static_cast<std::uint32_t>(8));
    { const bool branch_taken = ctx.gpr[4] == 0u;
    rt.memory().aot_store32(ctx.gpr[3] + static_cast<std::uint32_t>(12), ctx.gpr[2]);
      if (branch_taken) {
          goto L_08815534;
      }
      goto L_08815434;
    }
L_08815434:
    ctx.set_gpr(2, ctx.gpr[6] < static_cast<std::uint32_t>(20) ? 1u : 0u);
    ctx.set_gpr(7, ctx.gpr[17] + 0u);
    { const bool branch_taken = ctx.gpr[2] != 0u;
    ctx.set_gpr(5, ctx.gpr[16] + 0u);
      if (branch_taken) {
          goto L_08815490;
      }
      goto L_08815444;
    }
L_08815444:
    ctx.set_gpr(2, rt.memory().aot_load32(ctx.gpr[17] + static_cast<std::uint32_t>(0)));
    ctx.set_gpr(3, ctx.gpr[17] + static_cast<std::uint32_t>(8));
    ctx.set_gpr(4, ctx.gpr[6] < static_cast<std::uint32_t>(28) ? 1u : 0u);
    rt.memory().aot_store32(ctx.gpr[30] + static_cast<std::uint32_t>(8), ctx.gpr[2]);
    ctx.set_gpr(5, ctx.gpr[30] + static_cast<std::uint32_t>(16));
    ctx.set_gpr(7, ctx.gpr[3] + 0u);
    ctx.set_gpr(2, rt.memory().aot_load32(ctx.gpr[17] + static_cast<std::uint32_t>(4)));
    { const bool branch_taken = ctx.gpr[4] != 0u;
    rt.memory().aot_store32(ctx.gpr[16] + static_cast<std::uint32_t>(4), ctx.gpr[2]);
      if (branch_taken) {
          goto L_08815490;
      }
      goto L_08815468;
    }
L_08815468:
    ctx.set_gpr(3, rt.memory().aot_load32(ctx.gpr[17] + static_cast<std::uint32_t>(8)));
    ctx.set_gpr(2, ctx.gpr[17] + static_cast<std::uint32_t>(16));
    ctx.set_gpr(4, ctx.gpr[30] + static_cast<std::uint32_t>(24));
    rt.memory().aot_store32(ctx.gpr[30] + static_cast<std::uint32_t>(16), ctx.gpr[3]);
    ctx.set_gpr(7, ctx.gpr[2] + 0u);
    ctx.set_gpr(2, 0u + static_cast<std::uint32_t>(36));
    ctx.set_gpr(3, rt.memory().aot_load32(ctx.gpr[17] + static_cast<std::uint32_t>(12)));
    ctx.set_gpr(5, ctx.gpr[4] + 0u);
    { const bool branch_taken = ctx.gpr[6] == ctx.gpr[2];
    rt.memory().aot_store32(ctx.gpr[16] + static_cast<std::uint32_t>(12), ctx.gpr[3]);
      if (branch_taken) {
          goto L_08815548;
      }
      goto L_08815490;
    }
L_08815490:
    ctx.set_gpr(2, rt.memory().aot_load32(ctx.gpr[7] + static_cast<std::uint32_t>(0)));
    rt.memory().aot_store32(ctx.gpr[5] + static_cast<std::uint32_t>(0), ctx.gpr[2]);
    ctx.set_gpr(3, rt.memory().aot_load32(ctx.gpr[7] + static_cast<std::uint32_t>(4)));
    rt.memory().aot_store32(ctx.gpr[5] + static_cast<std::uint32_t>(4), ctx.gpr[3]);
    ctx.set_gpr(2, rt.memory().aot_load32(ctx.gpr[7] + static_cast<std::uint32_t>(8)));
    rt.memory().aot_store32(ctx.gpr[5] + static_cast<std::uint32_t>(8), ctx.gpr[2]);
    ctx.set_gpr(2, ctx.gpr[22] - ctx.gpr[23]);
    goto L_088154AC;
L_088154AC:
    ctx.set_gpr(3, ctx.gpr[30] + ctx.gpr[23]);
    ctx.set_gpr(2, ctx.gpr[2] | 1u);
    rt.memory().aot_store32(ctx.gpr[3] + static_cast<std::uint32_t>(4), ctx.gpr[2]);
    ctx.set_gpr(5, 2226u << 16u);
    ctx.set_gpr(5, ctx.gpr[5] + static_cast<std::uint32_t>(2860));
    ctx.set_gpr(2, rt.memory().aot_load32(ctx.gpr[30] + static_cast<std::uint32_t>(4)));
    ctx.set_gpr(4, ctx.gpr[21] + 0u);
    rt.memory().aot_store32(ctx.gpr[5] + static_cast<std::uint32_t>(8), ctx.gpr[3]);
    ctx.set_gpr(2, ctx.gpr[2] & 1u);
    ctx.set_gpr(2, ctx.gpr[23] | ctx.gpr[2]);
    ctx.set_gpr(31, 0x088154DCu);
    rt.memory().aot_store32(ctx.gpr[30] + static_cast<std::uint32_t>(4), ctx.gpr[2]);
    if (rt.invoke_chained_direct<&recomp_unit_0003_entry, 3u, 740u, 0x08812FFCu>(ctx, &aot_mem) && ctx.pc == 0x088154DCu) goto L_088154DC;
    return;
L_088154DC:
    ctx.set_gpr(2, ctx.gpr[16] + 0u);
    goto L_08815170;
L_088154E4:
    ctx.set_gpr(2, rt.memory().aot_load32(ctx.gpr[3] + static_cast<std::uint32_t>(4)));
    ctx.set_gpr(5, ctx.gpr[18] + 0u);
    ctx.set_gpr(16, ctx.gpr[18] + static_cast<std::uint32_t>(8));
    ctx.set_gpr(2, (ctx.gpr[2] & ~0x00000003u) | ((0u & 0x00000003u) << 0u));
    ctx.set_gpr(22, ctx.gpr[19] + ctx.gpr[2]);
    goto L_088151AC;
L_088154FC:
    ctx.set_gpr(3, rt.memory().aot_load32(ctx.gpr[17] + static_cast<std::uint32_t>(16)));
    ctx.set_gpr(8, ctx.gpr[17] + static_cast<std::uint32_t>(24));
    ctx.set_gpr(7, ctx.gpr[20] + static_cast<std::uint32_t>(32));
    rt.memory().aot_store32(ctx.gpr[20] + static_cast<std::uint32_t>(24), ctx.gpr[3]);
    ctx.set_gpr(2, rt.memory().aot_load32(ctx.gpr[17] + static_cast<std::uint32_t>(20)));
    rt.memory().aot_store32(ctx.gpr[16] + static_cast<std::uint32_t>(20), ctx.gpr[2]);
    goto L_08815138;
L_08815518:
    ctx.set_gpr(3, rt.memory().aot_load32(ctx.gpr[17] + static_cast<std::uint32_t>(16)));
    ctx.set_gpr(7, ctx.gpr[16] + static_cast<std::uint32_t>(24));
    ctx.set_gpr(8, ctx.gpr[17] + static_cast<std::uint32_t>(24));
    rt.memory().aot_store32(ctx.gpr[16] + static_cast<std::uint32_t>(16), ctx.gpr[3]);
    ctx.set_gpr(2, rt.memory().aot_load32(ctx.gpr[17] + static_cast<std::uint32_t>(20)));
    rt.memory().aot_store32(ctx.gpr[16] + static_cast<std::uint32_t>(20), ctx.gpr[2]);
    goto L_08815318;
L_08815534:
    ctx.set_gpr(5, ctx.gpr[17] + 0u);
    ctx.set_gpr(31, 0x08815540u);
    ctx.set_gpr(4, ctx.gpr[16] + 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0003_entry, 3u, 662u, 0x08812B08u>(ctx, &aot_mem) && ctx.pc == 0x08815540u) goto L_08815540;
    return;
L_08815540:
    ctx.set_gpr(2, ctx.gpr[22] - ctx.gpr[23]);
    goto L_088154AC;
L_08815548:
    ctx.set_gpr(3, rt.memory().aot_load32(ctx.gpr[17] + static_cast<std::uint32_t>(16)));
    ctx.set_gpr(7, ctx.gpr[17] + static_cast<std::uint32_t>(24));
    ctx.set_gpr(5, ctx.gpr[30] + static_cast<std::uint32_t>(32));
    rt.memory().aot_store32(ctx.gpr[30] + static_cast<std::uint32_t>(24), ctx.gpr[3]);
    ctx.set_gpr(2, rt.memory().aot_load32(ctx.gpr[17] + static_cast<std::uint32_t>(20)));
    rt.memory().aot_store32(ctx.gpr[16] + static_cast<std::uint32_t>(20), ctx.gpr[2]);
    goto L_08815490;
L_08815564:
    ctx.set_gpr(29, ctx.gpr[29] + static_cast<std::uint32_t>(-16));
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(4), ctx.gpr[17]);
    ctx.set_gpr(17, ctx.gpr[5] + 0u);
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(0), ctx.gpr[16]);
    ctx.set_gpr(16, ctx.gpr[4] + 0u);
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(8), ctx.gpr[31]);
    ctx.set_gpr(2, rt.memory().aot_load32(ctx.gpr[5] + static_cast<std::uint32_t>(0)));
    { const bool branch_taken = ctx.gpr[2] == 0u;
    ctx.set_gpr(5, ctx.gpr[2] + 0u);
      if (branch_taken) {
          goto L_08815590;
      }
      goto L_08815588;
    }
L_08815588:
    ctx.set_gpr(31, 0x08815590u);
    // nop
    goto L_08815564;
L_08815590:
    ctx.set_gpr(4, ctx.gpr[16] + 0u);
    ctx.set_gpr(5, ctx.gpr[17] + 0u);
    ctx.set_gpr(31, rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(8)));
    ctx.set_gpr(17, rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(4)));
    ctx.set_gpr(16, rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(0)));
    ctx.set_gpr(29, ctx.gpr[29] + static_cast<std::uint32_t>(16));
    (void)rt.invoke_chained_direct<&recomp_unit_0003_entry, 3u, 285u, 0x088112B8u>(ctx, &aot_mem); return;
L_088155AC:
    ctx.set_gpr(29, ctx.gpr[29] + static_cast<std::uint32_t>(-32));
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(4), ctx.gpr[17]);
    ctx.set_gpr(2, 2226u << 16u);
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(20), ctx.gpr[31]);
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(16), ctx.gpr[20]);
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(12), ctx.gpr[19]);
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(8), ctx.gpr[18]);
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(0), ctx.gpr[16]);
    ctx.set_gpr(3, rt.memory().aot_load32(ctx.gpr[2] + static_cast<std::uint32_t>(1928)));
    { const bool branch_taken = ctx.gpr[3] == ctx.gpr[4];
    ctx.set_gpr(17, ctx.gpr[4] + 0u);
      if (branch_taken) {
          goto L_088156C0;
      }
      goto L_088155D8;
    }
L_088155D8:
    ctx.set_gpr(6, rt.memory().aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(64)));
    { const bool branch_taken = ctx.gpr[6] == 0u;
    ctx.set_gpr(5, ctx.gpr[6] + 0u);
      if (branch_taken) {
          goto L_08815600;
      }
      goto L_088155E4;
    }
L_088155E4:
    ctx.set_gpr(2, rt.memory().aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(68)));
    rt.memory().aot_store32(ctx.gpr[6] + static_cast<std::uint32_t>(4), ctx.gpr[2]);
    ctx.set_gpr(2, 0u + static_cast<std::uint32_t>(1));
    ctx.set_gpr(3, rt.memory().aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(68)));
    ctx.set_gpr(2, ctx.gpr[2] << (ctx.gpr[3] & 31u));
    ctx.set_gpr(31, 0x08815600u);
    rt.memory().aot_store32(ctx.gpr[6] + static_cast<std::uint32_t>(8), ctx.gpr[2]);
    goto L_08814400;
L_08815600:
    ctx.set_gpr(5, rt.memory().aot_load32(ctx.gpr[17] + static_cast<std::uint32_t>(72)));
    if (ctx.gpr[5] == 0u) {
    ctx.set_gpr(3, rt.memory().aot_load32(ctx.gpr[17] + static_cast<std::uint32_t>(76)));
        goto L_08815624;
    }
    goto L_0881560C;
L_0881560C:
    ctx.set_gpr(16, rt.memory().aot_load32(ctx.gpr[5] + static_cast<std::uint32_t>(0)));
    ctx.set_gpr(31, 0x08815618u);
    ctx.set_gpr(4, ctx.gpr[17] + 0u);
    goto L_08814400;
L_08815618:
    { const bool branch_taken = ctx.gpr[16] != 0u;
    ctx.set_gpr(5, ctx.gpr[16] + 0u);
      if (branch_taken) {
          goto L_0881560C;
      }
      goto L_08815620;
    }
L_08815620:
    ctx.set_gpr(3, rt.memory().aot_load32(ctx.gpr[17] + static_cast<std::uint32_t>(76)));
    goto L_08815624;
L_08815624:
    if (ctx.gpr[3] == 0u) {
    ctx.set_gpr(5, rt.memory().aot_load32(ctx.gpr[17] + static_cast<std::uint32_t>(328)));
        goto L_08815678;
    }
    goto L_0881562C;
L_0881562C:
    ctx.set_gpr(18, 0u + 0u);
    ctx.set_gpr(19, 0u + static_cast<std::uint32_t>(60));
    ctx.set_gpr(2, ctx.gpr[3] + ctx.gpr[18]);
    goto L_08815638;
L_08815638:
    ctx.set_gpr(5, rt.memory().aot_load32(ctx.gpr[2] + static_cast<std::uint32_t>(0)));
    if (ctx.gpr[5] == 0u) {
    ctx.set_gpr(18, ctx.gpr[18] + static_cast<std::uint32_t>(4));
        goto L_08815660;
    }
    goto L_08815644;
L_08815644:
    ctx.set_gpr(16, rt.memory().aot_load32(ctx.gpr[5] + static_cast<std::uint32_t>(0)));
    ctx.set_gpr(31, 0x08815650u);
    ctx.set_gpr(4, ctx.gpr[17] + 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0003_entry, 3u, 285u, 0x088112B8u>(ctx, &aot_mem) && ctx.pc == 0x08815650u) goto L_08815650;
    return;
L_08815650:
    { const bool branch_taken = ctx.gpr[16] != 0u;
    ctx.set_gpr(5, ctx.gpr[16] + 0u);
      if (branch_taken) {
          goto L_08815644;
      }
      goto L_08815658;
    }
L_08815658:
    ctx.set_gpr(3, rt.memory().aot_load32(ctx.gpr[17] + static_cast<std::uint32_t>(76)));
    ctx.set_gpr(18, ctx.gpr[18] + static_cast<std::uint32_t>(4));
    goto L_08815660;
L_08815660:
    { const bool branch_taken = ctx.gpr[18] != ctx.gpr[19];
    ctx.set_gpr(2, ctx.gpr[3] + ctx.gpr[18]);
      if (branch_taken) {
          goto L_08815638;
      }
      goto L_08815668;
    }
L_08815668:
    ctx.set_gpr(5, ctx.gpr[3] + 0u);
    ctx.set_gpr(31, 0x08815674u);
    ctx.set_gpr(4, ctx.gpr[17] + 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0003_entry, 3u, 285u, 0x088112B8u>(ctx, &aot_mem) && ctx.pc == 0x08815674u) goto L_08815674;
    return;
L_08815674:
    ctx.set_gpr(5, rt.memory().aot_load32(ctx.gpr[17] + static_cast<std::uint32_t>(328)));
    goto L_08815678;
L_08815678:
    if (ctx.gpr[5] == 0u) {
    ctx.set_gpr(5, rt.memory().aot_load32(ctx.gpr[17] + static_cast<std::uint32_t>(84)));
        goto L_088156A4;
    }
    goto L_08815680;
L_08815680:
    ctx.set_gpr(18, ctx.gpr[17] + static_cast<std::uint32_t>(332));
    if (ctx.gpr[5] == ctx.gpr[18]) {
    ctx.set_gpr(5, rt.memory().aot_load32(ctx.gpr[17] + static_cast<std::uint32_t>(84)));
        goto L_088156A4;
    }
    goto L_0881568C;
L_0881568C:
    ctx.set_gpr(16, rt.memory().aot_load32(ctx.gpr[5] + static_cast<std::uint32_t>(0)));
    ctx.set_gpr(31, 0x08815698u);
    ctx.set_gpr(4, ctx.gpr[17] + 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0003_entry, 3u, 285u, 0x088112B8u>(ctx, &aot_mem) && ctx.pc == 0x08815698u) goto L_08815698;
    return;
L_08815698:
    { const bool branch_taken = ctx.gpr[18] != ctx.gpr[16];
    ctx.set_gpr(5, ctx.gpr[16] + 0u);
      if (branch_taken) {
          goto L_0881568C;
      }
      goto L_088156A0;
    }
L_088156A0:
    ctx.set_gpr(5, rt.memory().aot_load32(ctx.gpr[17] + static_cast<std::uint32_t>(84)));
    goto L_088156A4;
L_088156A4:
    if (ctx.gpr[5] == 0u) {
    ctx.set_gpr(2, rt.memory().aot_load32(ctx.gpr[17] + static_cast<std::uint32_t>(56)));
        goto L_088156B8;
    }
    goto L_088156AC;
L_088156AC:
    ctx.set_gpr(31, 0x088156B4u);
    ctx.set_gpr(4, ctx.gpr[17] + 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0003_entry, 3u, 285u, 0x088112B8u>(ctx, &aot_mem) && ctx.pc == 0x088156B4u) goto L_088156B4;
    return;
L_088156B4:
    ctx.set_gpr(2, rt.memory().aot_load32(ctx.gpr[17] + static_cast<std::uint32_t>(56)));
    goto L_088156B8;
L_088156B8:
    if (ctx.gpr[2] != 0u) {
    ctx.set_gpr(2, rt.memory().aot_load32(ctx.gpr[17] + static_cast<std::uint32_t>(60)));
        goto L_088156E0;
    }
    goto L_088156C0;
L_088156C0:
    ctx.set_gpr(31, rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(20)));
    ctx.set_gpr(20, rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(16)));
    ctx.set_gpr(19, rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(12)));
    ctx.set_gpr(18, rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(8)));
    ctx.set_gpr(17, rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(4)));
    ctx.set_gpr(16, rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(0)));
    jump_target = ctx.gpr[31];
    ctx.set_gpr(29, ctx.gpr[29] + static_cast<std::uint32_t>(32));
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_088156E0:
    ctx.set_gpr(20, ctx.gpr[17] + static_cast<std::uint32_t>(604));
    jump_target = ctx.gpr[2];
    ctx.set_gpr(31, 0x088156ECu);
    ctx.set_gpr(4, ctx.gpr[17] + 0u);
    ctx.pc = jump_target;
    if (rt.invoke_chained_call(ctx, &aot_mem) && ctx.pc == 0x088156ECu) goto L_088156EC;
    return;
L_088156EC:
    if (ctx.gpr[20] == 0u) {
    ctx.set_gpr(5, rt.memory().aot_load32(ctx.gpr[17] + static_cast<std::uint32_t>(604)));
        goto L_0881574C;
    }
    goto L_088156F4;
L_088156F4:
    ctx.set_gpr(19, rt.memory().aot_load32(ctx.gpr[20] + static_cast<std::uint32_t>(4)));
    goto L_088156F8;
L_088156F8:
    ctx.set_gpr(2, ctx.gpr[19] + static_cast<std::uint32_t>(-1));
    { const bool branch_taken = static_cast<std::int32_t>(ctx.gpr[2]) < 0;
    ctx.set_gpr(16, rt.memory().aot_load32(ctx.gpr[20] + static_cast<std::uint32_t>(8)));
      if (branch_taken) {
          goto L_0881573C;
      }
      goto L_08815704;
    }
L_08815704:
    ctx.set_gpr(18, 0u + 0u);
    goto L_08815708;
L_08815708:
    ctx.set_gpr(2, rt.memory().aot_load16(ctx.gpr[16] + static_cast<std::uint32_t>(12)));
    ctx.set_gpr(2, ctx.gpr[2] & 128u);
    { const bool branch_taken = ctx.gpr[2] == 0u;
    ctx.set_gpr(18, ctx.gpr[18] + static_cast<std::uint32_t>(1));
      if (branch_taken) {
          goto L_08815734;
      }
      goto L_08815718;
    }
L_08815718:
    ctx.set_gpr(2, rt.memory().aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(16)));
    ctx.set_gpr(4, ctx.gpr[17] + 0u);
    { const bool branch_taken = ctx.gpr[2] == 0u;
    ctx.set_gpr(5, ctx.gpr[2] + 0u);
      if (branch_taken) {
          goto L_08815734;
      }
      goto L_08815728;
    }
L_08815728:
    ctx.set_gpr(31, 0x08815730u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0003_entry, 3u, 285u, 0x088112B8u>(ctx, &aot_mem) && ctx.pc == 0x08815730u) goto L_08815730;
    return;
L_08815730:
    rt.memory().aot_store32(ctx.gpr[16] + static_cast<std::uint32_t>(16), 0u);
    goto L_08815734;
L_08815734:
    { const bool branch_taken = ctx.gpr[19] != ctx.gpr[18];
    ctx.set_gpr(16, ctx.gpr[16] + static_cast<std::uint32_t>(92));
      if (branch_taken) {
          goto L_08815708;
      }
      goto L_0881573C;
    }
L_0881573C:
    ctx.set_gpr(20, rt.memory().aot_load32(ctx.gpr[20] + static_cast<std::uint32_t>(0)));
    if (ctx.gpr[20] != 0u) {
    ctx.set_gpr(19, rt.memory().aot_load32(ctx.gpr[20] + static_cast<std::uint32_t>(4)));
        goto L_088156F8;
    }
    goto L_08815748;
L_08815748:
    ctx.set_gpr(5, rt.memory().aot_load32(ctx.gpr[17] + static_cast<std::uint32_t>(604)));
    goto L_0881574C;
L_0881574C:
    { const bool branch_taken = ctx.gpr[5] == 0u;
    ctx.set_gpr(31, rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(20)));
      if (branch_taken) {
          goto L_088156C0;
      }
      goto L_08815754;
    }
L_08815754:
    ctx.set_gpr(4, ctx.gpr[17] + 0u);
    ctx.set_gpr(20, rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(16)));
    ctx.set_gpr(19, rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(12)));
    ctx.set_gpr(18, rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(8)));
    ctx.set_gpr(17, rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(4)));
    ctx.set_gpr(16, rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(0)));
    ctx.set_gpr(29, ctx.gpr[29] + static_cast<std::uint32_t>(32));
    goto L_08815564;
L_08815840:
    ctx.set_gpr(3, rt.memory().aot_load16(ctx.gpr[4] + static_cast<std::uint32_t>(12)));
    ctx.set_gpr(5, 0u + static_cast<std::uint32_t>(9));
    ctx.set_gpr(3, ctx.gpr[3] & 9u);
    { const bool branch_taken = ctx.gpr[3] == ctx.gpr[5];
    ctx.set_gpr(2, 0u + 0u);
      if (branch_taken) {
          goto L_0881585C;
      }
      goto L_08815854;
    }
L_08815854:
    jump_target = ctx.gpr[31];
    // nop
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_0881585C:
    // nop
    (void)rt.invoke_chained_direct<&recomp_unit_0003_entry, 3u, 227u, 0x08810CA4u>(ctx, &aot_mem); return;
L_08815864:
    ctx.set_gpr(29, ctx.gpr[29] + static_cast<std::uint32_t>(-16));
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(0), ctx.gpr[16]);
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(4), ctx.gpr[31]);
    ctx.set_gpr(31, 0x08815878u);
    ctx.set_gpr(16, ctx.gpr[4] + 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0003_entry, 3u, 442u, 0x08811C60u>(ctx, &aot_mem) && ctx.pc == 0x08815878u) goto L_08815878;
    return;
L_08815878:
    ctx.set_gpr(3, rt.memory().aot_load32(ctx.gpr[2] + static_cast<std::uint32_t>(56)));
    { const bool branch_taken = ctx.gpr[3] == 0u;
    // nop
      if (branch_taken) {
          goto L_08815978;
      }
      goto L_08815884;
    }
L_08815884:
    ctx.set_gpr(4, rt.memory().aot_load16(ctx.gpr[16] + static_cast<std::uint32_t>(12)));
    goto L_08815888;
L_08815888:
    ctx.set_gpr(3, ctx.gpr[4] & 65535u);
    ctx.set_gpr(2, ctx.gpr[3] & 32u);
    { const bool branch_taken = ctx.gpr[2] != 0u;
    rt.memory().aot_store32(ctx.gpr[16] + static_cast<std::uint32_t>(4), 0u);
      if (branch_taken) {
          goto L_08815960;
      }
      goto L_08815898;
    }
L_08815898:
    ctx.set_gpr(2, ctx.gpr[3] & 4u);
    { const bool branch_taken = ctx.gpr[2] == 0u;
    ctx.set_gpr(2, ctx.gpr[3] & 16u);
      if (branch_taken) {
          goto L_088159E0;
      }
      goto L_088158A4;
    }
L_088158A4:
    ctx.set_gpr(3, rt.memory().aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(48)));
    { const bool branch_taken = ctx.gpr[3] == 0u;
    ctx.set_gpr(2, ctx.gpr[16] + static_cast<std::uint32_t>(64));
      if (branch_taken) {
          goto L_088158DC;
      }
      goto L_088158B0;
    }
L_088158B0:
    if (ctx.gpr[3] == ctx.gpr[2]) {
    ctx.set_gpr(2, rt.memory().aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(60)));
        goto L_088158D0;
    }
    goto L_088158B8;
L_088158B8:
    ctx.set_gpr(31, 0x088158C0u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0003_entry, 3u, 442u, 0x08811C60u>(ctx, &aot_mem) && ctx.pc == 0x088158C0u) goto L_088158C0;
    return;
L_088158C0:
    ctx.set_gpr(5, rt.memory().aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(48)));
    ctx.set_gpr(31, 0x088158CCu);
    ctx.set_gpr(4, ctx.gpr[2] + 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0003_entry, 3u, 285u, 0x088112B8u>(ctx, &aot_mem) && ctx.pc == 0x088158CCu) goto L_088158CC;
    return;
L_088158CC:
    ctx.set_gpr(2, rt.memory().aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(60)));
    goto L_088158D0;
L_088158D0:
    rt.memory().aot_store32(ctx.gpr[16] + static_cast<std::uint32_t>(48), 0u);
    { const bool branch_taken = ctx.gpr[2] != 0u;
    rt.memory().aot_store32(ctx.gpr[16] + static_cast<std::uint32_t>(4), ctx.gpr[2]);
      if (branch_taken) {
          goto L_08815940;
      }
      goto L_088158DC;
    }
L_088158DC:
    ctx.set_gpr(2, rt.memory().aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(16)));
    { const bool branch_taken = ctx.gpr[2] == 0u;
    // nop
      if (branch_taken) {
          goto L_088159D0;
      }
      goto L_088158E8;
    }
L_088158E8:
    ctx.set_gpr(2, rt.memory().aot_load16(ctx.gpr[16] + static_cast<std::uint32_t>(12)));
    goto L_088158EC;
L_088158EC:
    ctx.set_gpr(2, ctx.gpr[2] & 3u);
    { const bool branch_taken = ctx.gpr[2] != 0u;
    ctx.set_gpr(2, 2226u << 16u);
      if (branch_taken) {
          goto L_088159A8;
      }
      goto L_088158F8;
    }
L_088158F8:
    ctx.set_gpr(5, rt.memory().aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(16)));
    goto L_088158FC;
L_088158FC:
    ctx.set_gpr(4, rt.memory().aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(28)));
    ctx.set_gpr(2, rt.memory().aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(32)));
    ctx.set_gpr(6, rt.memory().aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(20)));
    jump_target = ctx.gpr[2];
    ctx.set_gpr(31, 0x08815910u);
    rt.memory().aot_store32(ctx.gpr[16] + static_cast<std::uint32_t>(0), ctx.gpr[5]);
    ctx.pc = jump_target;
    if (rt.invoke_chained_call(ctx, &aot_mem) && ctx.pc == 0x08815910u) goto L_08815910;
    return;
L_08815910:
    ctx.set_gpr(3, ctx.gpr[2] + 0u);
    ctx.set_gpr(2, static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int16_t>(rt.memory().aot_load16(ctx.gpr[16] + static_cast<std::uint32_t>(12))))));
    rt.memory().aot_store32(ctx.gpr[16] + static_cast<std::uint32_t>(4), ctx.gpr[3]);
    ctx.set_gpr(4, 0u + 0u);
    ctx.set_gpr(2, (ctx.gpr[2] & ~0x00002000u) | ((0u & 0x00000001u) << 13u));
    { const bool branch_taken = static_cast<std::int32_t>(ctx.gpr[3]) <= 0;
    rt.memory().aot_store16(ctx.gpr[16] + static_cast<std::uint32_t>(12), static_cast<std::uint16_t>(ctx.gpr[2]));
      if (branch_taken) {
          goto L_08815990;
      }
      goto L_0881592C;
    }
L_0881592C:
    ctx.set_gpr(31, rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(4)));
    ctx.set_gpr(16, rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(0)));
    ctx.set_gpr(2, ctx.gpr[4] + 0u);
    jump_target = ctx.gpr[31];
    ctx.set_gpr(29, ctx.gpr[29] + static_cast<std::uint32_t>(16));
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_08815940:
    ctx.set_gpr(2, rt.memory().aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(56)));
    ctx.set_gpr(4, 0u + 0u);
    rt.memory().aot_store32(ctx.gpr[16] + static_cast<std::uint32_t>(0), ctx.gpr[2]);
    ctx.set_gpr(2, ctx.gpr[4] + 0u);
    ctx.set_gpr(31, rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(4)));
    ctx.set_gpr(16, rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(0)));
    jump_target = ctx.gpr[31];
    ctx.set_gpr(29, ctx.gpr[29] + static_cast<std::uint32_t>(16));
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_08815960:
    ctx.set_gpr(31, rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(4)));
    goto L_08815964;
L_08815964:
    ctx.set_gpr(16, rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(0)));
    ctx.set_gpr(4, 0u + static_cast<std::uint32_t>(-1));
    ctx.set_gpr(2, ctx.gpr[4] + 0u);
    jump_target = ctx.gpr[31];
    ctx.set_gpr(29, ctx.gpr[29] + static_cast<std::uint32_t>(16));
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_08815978:
    ctx.set_gpr(31, 0x08815980u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0003_entry, 3u, 442u, 0x08811C60u>(ctx, &aot_mem) && ctx.pc == 0x08815980u) goto L_08815980;
    return;
L_08815980:
    ctx.set_gpr(31, 0x08815988u);
    ctx.set_gpr(4, ctx.gpr[2] + 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0003_entry, 3u, 251u, 0x08810E78u>(ctx, &aot_mem) && ctx.pc == 0x08815988u) goto L_08815988;
    return;
L_08815988:
    ctx.set_gpr(4, rt.memory().aot_load16(ctx.gpr[16] + static_cast<std::uint32_t>(12)));
    goto L_08815888;
L_08815990:
    if (ctx.gpr[3] != 0u) {
    ctx.set_gpr(2, ctx.gpr[2] | 64u);
        goto L_088159C0;
    }
    goto L_08815998;
L_08815998:
    ctx.set_gpr(2, ctx.gpr[2] | 32u);
    ctx.set_gpr(4, 0u + static_cast<std::uint32_t>(-1));
    rt.memory().aot_store16(ctx.gpr[16] + static_cast<std::uint32_t>(12), static_cast<std::uint16_t>(ctx.gpr[2]));
    goto L_0881592C;
L_088159A8:
    ctx.set_gpr(4, rt.memory().aot_load32(ctx.gpr[2] + static_cast<std::uint32_t>(1928)));
    ctx.set_gpr(5, 2177u << 16u);
    ctx.set_gpr(31, 0x088159B8u);
    ctx.set_gpr(5, ctx.gpr[5] + static_cast<std::uint32_t>(22592));
    if (rt.invoke_chained_direct<&recomp_unit_0003_entry, 3u, 412u, 0x08811ABCu>(ctx, &aot_mem) && ctx.pc == 0x088159B8u) goto L_088159B8;
    return;
L_088159B8:
    ctx.set_gpr(5, rt.memory().aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(16)));
    goto L_088158FC;
L_088159C0:
    ctx.set_gpr(4, 0u + static_cast<std::uint32_t>(-1));
    rt.memory().aot_store16(ctx.gpr[16] + static_cast<std::uint32_t>(12), static_cast<std::uint16_t>(ctx.gpr[2]));
    rt.memory().aot_store32(ctx.gpr[16] + static_cast<std::uint32_t>(4), 0u);
    goto L_0881592C;
L_088159D0:
    ctx.set_gpr(31, 0x088159D8u);
    ctx.set_gpr(4, ctx.gpr[16] + 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0003_entry, 3u, 461u, 0x08811E74u>(ctx, &aot_mem) && ctx.pc == 0x088159D8u) goto L_088159D8;
    return;
L_088159D8:
    ctx.set_gpr(2, rt.memory().aot_load16(ctx.gpr[16] + static_cast<std::uint32_t>(12)));
    goto L_088158EC;
L_088159E0:
    { const bool branch_taken = ctx.gpr[2] == 0u;
    ctx.set_gpr(2, ctx.gpr[3] & 8u);
      if (branch_taken) {
          goto L_08815960;
      }
      goto L_088159E8;
    }
L_088159E8:
    { const bool branch_taken = ctx.gpr[2] != 0u;
    ctx.set_gpr(2, ctx.gpr[4] | 4u);
      if (branch_taken) {
          goto L_088159F8;
      }
      goto L_088159F0;
    }
L_088159F0:
    rt.memory().aot_store16(ctx.gpr[16] + static_cast<std::uint32_t>(12), static_cast<std::uint16_t>(ctx.gpr[2]));
    goto L_088158DC;
L_088159F8:
    ctx.set_gpr(31, 0x08815A00u);
    ctx.set_gpr(4, ctx.gpr[16] + 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0003_entry, 3u, 227u, 0x08810CA4u>(ctx, &aot_mem) && ctx.pc == 0x08815A00u) goto L_08815A00;
    return;
L_08815A00:
    { const bool branch_taken = ctx.gpr[2] != 0u;
    ctx.set_gpr(31, rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(4)));
      if (branch_taken) {
          goto L_08815964;
      }
      goto L_08815A08;
    }
L_08815A08:
    ctx.set_gpr(4, rt.memory().aot_load16(ctx.gpr[16] + static_cast<std::uint32_t>(12)));
    rt.memory().aot_store32(ctx.gpr[16] + static_cast<std::uint32_t>(8), 0u);
    ctx.set_gpr(2, ctx.gpr[4] + 0u);
    ctx.set_gpr(2, (ctx.gpr[2] & ~0x00000008u) | ((0u & 0x00000001u) << 3u));
    ctx.set_gpr(4, ctx.gpr[2] + 0u);
    rt.memory().aot_store16(ctx.gpr[16] + static_cast<std::uint32_t>(12), static_cast<std::uint16_t>(ctx.gpr[2]));
    ctx.set_gpr(2, ctx.gpr[4] | 4u);
    rt.memory().aot_store32(ctx.gpr[16] + static_cast<std::uint32_t>(24), 0u);
    rt.memory().aot_store16(ctx.gpr[16] + static_cast<std::uint32_t>(12), static_cast<std::uint16_t>(ctx.gpr[2]));
    goto L_088158DC;
L_08815A30:
    ctx.set_gpr(29, ctx.gpr[29] + static_cast<std::uint32_t>(-16));
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(4), ctx.gpr[17]);
    ctx.set_gpr(17, ctx.gpr[4] + 0u);
    ctx.set_gpr(4, ctx.gpr[5] + 0u);
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(0), ctx.gpr[16]);
    ctx.set_gpr(16, 2247u << 16u);
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(8), ctx.gpr[31]);
    ctx.set_gpr(31, 0x08815A54u);
    rt.memory().aot_store32(ctx.gpr[16] + static_cast<std::uint32_t>(-23024), 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0000_entry, 0u, 93u, 0x08804664u>(ctx, &aot_mem) && ctx.pc == 0x08815A54u) goto L_08815A54;
    return;
L_08815A54:
    ctx.set_gpr(3, ctx.gpr[2] + 0u);
    ctx.set_gpr(2, 0u + static_cast<std::uint32_t>(-1));
    { const bool branch_taken = ctx.gpr[3] == ctx.gpr[2];
    ctx.set_gpr(2, rt.memory().aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(-23024)));
      if (branch_taken) {
          goto L_08815A7C;
      }
      goto L_08815A64;
    }
L_08815A64:
    ctx.set_gpr(31, rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(8)));
    goto L_08815A68;
L_08815A68:
    ctx.set_gpr(17, rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(4)));
    ctx.set_gpr(16, rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(0)));
    ctx.set_gpr(2, ctx.gpr[3] + 0u);
    jump_target = ctx.gpr[31];
    ctx.set_gpr(29, ctx.gpr[29] + static_cast<std::uint32_t>(16));
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_08815A7C:
    { const bool branch_taken = ctx.gpr[2] == 0u;
    ctx.set_gpr(31, rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(8)));
      if (branch_taken) {
          goto L_08815A68;
      }
      goto L_08815A84;
    }
L_08815A84:
    rt.memory().aot_store32(ctx.gpr[17] + static_cast<std::uint32_t>(0), ctx.gpr[2]);
    ctx.set_gpr(2, ctx.gpr[3] + 0u);
    ctx.set_gpr(31, rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(8)));
    ctx.set_gpr(17, rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(4)));
    ctx.set_gpr(16, rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(0)));
    jump_target = ctx.gpr[31];
    ctx.set_gpr(29, ctx.gpr[29] + static_cast<std::uint32_t>(16));
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_08815AA0:
    ctx.set_gpr(29, ctx.gpr[29] + static_cast<std::uint32_t>(-16));
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(0), ctx.gpr[16]);
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(4), ctx.gpr[31]);
    ctx.set_gpr(2, rt.memory().aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(600)));
    { const bool branch_taken = ctx.gpr[2] == 0u;
    ctx.set_gpr(16, ctx.gpr[4] + 0u);
      if (branch_taken) {
          goto L_08815ACC;
      }
      goto L_08815AB8;
    }
L_08815AB8:
    ctx.set_gpr(2, 0u + 0u);
    goto L_08815ABC;
L_08815ABC:
    ctx.set_gpr(31, rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(4)));
    ctx.set_gpr(16, rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(0)));
    jump_target = ctx.gpr[31];
    ctx.set_gpr(29, ctx.gpr[29] + static_cast<std::uint32_t>(16));
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_08815ACC:
    ctx.set_gpr(31, 0x08815AD4u);
    ctx.set_gpr(5, 0u + static_cast<std::uint32_t>(128));
    if (rt.invoke_chained_direct<&recomp_unit_0003_entry, 3u, 491u, 0x08812074u>(ctx, &aot_mem) && ctx.pc == 0x08815AD4u) goto L_08815AD4;
    return;
L_08815AD4:
    ctx.set_gpr(4, ctx.gpr[2] + 0u);
    rt.memory().aot_store32(ctx.gpr[16] + static_cast<std::uint32_t>(600), ctx.gpr[2]);
    { const bool branch_taken = ctx.gpr[4] == 0u;
    ctx.set_gpr(2, 0u + static_cast<std::uint32_t>(-1));
      if (branch_taken) {
          goto L_08815ABC;
      }
      goto L_08815AE4;
    }
L_08815AE4:
    ctx.set_gpr(3, 0u + 0u);
    ctx.set_gpr(5, 0u + static_cast<std::uint32_t>(128));
    goto L_08815AEC;
L_08815AEC:
    ctx.set_gpr(2, ctx.gpr[4] + ctx.gpr[3]);
    ctx.set_gpr(3, ctx.gpr[3] + static_cast<std::uint32_t>(4));
    { const bool branch_taken = ctx.gpr[3] != ctx.gpr[5];
    rt.memory().aot_store32(ctx.gpr[2] + static_cast<std::uint32_t>(0), 0u);
      if (branch_taken) {
          goto L_08815AEC;
      }
      goto L_08815AFC;
    }
L_08815AFC:
    ctx.set_gpr(2, 0u + 0u);
    goto L_08815ABC;
L_08815BB0:
    ctx.set_gpr(29, ctx.gpr[29] + static_cast<std::uint32_t>(-16));
    ctx.set_gpr(2, ctx.gpr[5] < static_cast<std::uint32_t>(32) ? 1u : 0u);
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(4), ctx.gpr[17]);
    ctx.set_gpr(17, ctx.gpr[4] + 0u);
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(0), ctx.gpr[16]);
    ctx.set_gpr(16, ctx.gpr[5] + 0u);
    { const bool branch_taken = ctx.gpr[2] == 0u;
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(8), ctx.gpr[31]);
      if (branch_taken) {
          goto L_08815C74;
      }
      goto L_08815BD0;
    }
L_08815BD0:
    ctx.set_gpr(3, rt.memory().aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(600)));
    { const bool branch_taken = ctx.gpr[3] == 0u;
    // nop
      if (branch_taken) {
          goto L_08815C84;
      }
      goto L_08815BDC;
    }
L_08815BDC:
    ctx.set_gpr(2, ctx.gpr[16] << 2u);
    ctx.set_gpr(4, ctx.gpr[3] + ctx.gpr[2]);
    ctx.set_gpr(3, rt.memory().aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(0)));
    { const bool branch_taken = ctx.gpr[3] == 0u;
    ctx.set_gpr(2, 0u + static_cast<std::uint32_t>(1));
      if (branch_taken) {
          goto L_08815C4C;
      }
      goto L_08815BF0;
    }
L_08815BF0:
    { const bool branch_taken = ctx.gpr[3] == ctx.gpr[2];
    ctx.set_gpr(5, 0u + 0u);
      if (branch_taken) {
          goto L_08815C14;
      }
      goto L_08815BF8;
    }
L_08815BF8:
    ctx.set_gpr(2, 0u + static_cast<std::uint32_t>(-1));
    { const bool branch_taken = ctx.gpr[3] == ctx.gpr[2];
    ctx.set_gpr(2, 0u + static_cast<std::uint32_t>(22));
      if (branch_taken) {
          goto L_08815C2C;
      }
      goto L_08815C04;
    }
L_08815C04:
    rt.memory().aot_store32(ctx.gpr[4] + static_cast<std::uint32_t>(0), 0u);
    jump_target = ctx.gpr[3];
    ctx.set_gpr(31, 0x08815C10u);
    ctx.set_gpr(4, ctx.gpr[16] + 0u);
    ctx.pc = jump_target;
    if (rt.invoke_chained_call(ctx, &aot_mem) && ctx.pc == 0x08815C10u) goto L_08815C10;
    return;
L_08815C10:
    ctx.set_gpr(5, 0u + 0u);
    goto L_08815C14;
L_08815C14:
    ctx.set_gpr(31, rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(8)));
    ctx.set_gpr(17, rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(4)));
    ctx.set_gpr(16, rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(0)));
    ctx.set_gpr(2, ctx.gpr[5] + 0u);
    jump_target = ctx.gpr[31];
    ctx.set_gpr(29, ctx.gpr[29] + static_cast<std::uint32_t>(16));
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_08815C2C:
    rt.memory().aot_store32(ctx.gpr[17] + static_cast<std::uint32_t>(0), ctx.gpr[2]);
    ctx.set_gpr(5, 0u + static_cast<std::uint32_t>(1));
    ctx.set_gpr(2, ctx.gpr[5] + 0u);
    ctx.set_gpr(31, rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(8)));
    ctx.set_gpr(17, rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(4)));
    ctx.set_gpr(16, rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(0)));
    jump_target = ctx.gpr[31];
    ctx.set_gpr(29, ctx.gpr[29] + static_cast<std::uint32_t>(16));
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_08815C4C:
    ctx.set_gpr(31, 0x08815C54u);
    ctx.set_gpr(4, ctx.gpr[17] + 0u);
    goto L_08815E78;
L_08815C54:
    ctx.set_gpr(5, ctx.gpr[2] + 0u);
    ctx.set_gpr(4, ctx.gpr[17] + 0u);
    ctx.set_gpr(6, ctx.gpr[16] + 0u);
    ctx.set_gpr(31, rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(8)));
    ctx.set_gpr(17, rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(4)));
    ctx.set_gpr(16, rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(0)));
    ctx.set_gpr(29, ctx.gpr[29] + static_cast<std::uint32_t>(16));
    goto L_08815E04;
L_08815C74:
    ctx.set_gpr(2, 0u + static_cast<std::uint32_t>(22));
    ctx.set_gpr(5, 0u + static_cast<std::uint32_t>(-1));
    rt.memory().aot_store32(ctx.gpr[4] + static_cast<std::uint32_t>(0), ctx.gpr[2]);
    goto L_08815C14;
L_08815C84:
    ctx.set_gpr(31, 0x08815C8Cu);
    // nop
    goto L_08815AA0;
L_08815C8C:
    { const bool branch_taken = ctx.gpr[2] != 0u;
    ctx.set_gpr(5, 0u + static_cast<std::uint32_t>(-1));
      if (branch_taken) {
          goto L_08815C14;
      }
      goto L_08815C94;
    }
L_08815C94:
    ctx.set_gpr(3, rt.memory().aot_load32(ctx.gpr[17] + static_cast<std::uint32_t>(600)));
    goto L_08815BDC;
L_08815D50:
    ctx.set_gpr(29, ctx.gpr[29] + static_cast<std::uint32_t>(-16));
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(4), ctx.gpr[31]);
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(0), ctx.gpr[16]);
    ctx.set_gpr(31, 0x08815D64u);
    ctx.set_gpr(16, ctx.gpr[4] + 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0003_entry, 3u, 442u, 0x08811C60u>(ctx, &aot_mem) && ctx.pc == 0x08815D64u) goto L_08815D64;
    return;
L_08815D64:
    ctx.set_gpr(4, ctx.gpr[2] + 0u);
    ctx.set_gpr(5, ctx.gpr[16] + 0u);
    ctx.set_gpr(31, rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(4)));
    ctx.set_gpr(16, rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(0)));
    ctx.set_gpr(29, ctx.gpr[29] + static_cast<std::uint32_t>(16));
    goto L_08815BB0;
L_08815E04:
    ctx.set_gpr(29, ctx.gpr[29] + static_cast<std::uint32_t>(-16));
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(4), ctx.gpr[17]);
    ctx.set_gpr(17, ctx.gpr[4] + 0u);
    ctx.set_gpr(4, ctx.gpr[5] + 0u);
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(0), ctx.gpr[16]);
    ctx.set_gpr(5, ctx.gpr[6] + 0u);
    ctx.set_gpr(16, 2247u << 16u);
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(8), ctx.gpr[31]);
    ctx.set_gpr(31, 0x08815E2Cu);
    rt.memory().aot_store32(ctx.gpr[16] + static_cast<std::uint32_t>(-23024), 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0000_entry, 0u, 155u, 0x08804974u>(ctx, &aot_mem) && ctx.pc == 0x08815E2Cu) goto L_08815E2C;
    return;
L_08815E2C:
    ctx.set_gpr(3, ctx.gpr[2] + 0u);
    ctx.set_gpr(2, 0u + static_cast<std::uint32_t>(-1));
    { const bool branch_taken = ctx.gpr[3] == ctx.gpr[2];
    ctx.set_gpr(2, rt.memory().aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(-23024)));
      if (branch_taken) {
          goto L_08815E54;
      }
      goto L_08815E3C;
    }
L_08815E3C:
    ctx.set_gpr(31, rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(8)));
    goto L_08815E40;
L_08815E40:
    ctx.set_gpr(17, rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(4)));
    ctx.set_gpr(16, rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(0)));
    ctx.set_gpr(2, ctx.gpr[3] + 0u);
    jump_target = ctx.gpr[31];
    ctx.set_gpr(29, ctx.gpr[29] + static_cast<std::uint32_t>(16));
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_08815E54:
    { const bool branch_taken = ctx.gpr[2] == 0u;
    ctx.set_gpr(31, rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(8)));
      if (branch_taken) {
          goto L_08815E40;
      }
      goto L_08815E5C;
    }
L_08815E5C:
    rt.memory().aot_store32(ctx.gpr[17] + static_cast<std::uint32_t>(0), ctx.gpr[2]);
    ctx.set_gpr(2, ctx.gpr[3] + 0u);
    ctx.set_gpr(31, rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(8)));
    ctx.set_gpr(17, rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(4)));
    ctx.set_gpr(16, rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(0)));
    jump_target = ctx.gpr[31];
    ctx.set_gpr(29, ctx.gpr[29] + static_cast<std::uint32_t>(16));
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_08815E78:
    // nop
    (void)rt.invoke_chained_direct<&recomp_unit_0000_entry, 0u, 156u, 0x0880497Cu>(ctx, &aot_mem); return;
L_08815EF8:
    ctx.set_gpr(29, ctx.gpr[29] + static_cast<std::uint32_t>(-144));
    ctx.set_gpr(3, ctx.gpr[5] + static_cast<std::uint32_t>(-1));
    ctx.set_gpr(2, 0u + static_cast<std::uint32_t>(520));
    if (ctx.gpr[5] == 0u) ctx.set_gpr(3, 0u);
    rt.memory().aot_store16(ctx.gpr[29] + static_cast<std::uint32_t>(16), static_cast<std::uint16_t>(ctx.gpr[2]));
    ctx.set_gpr(2, ctx.gpr[29] + static_cast<std::uint32_t>(124));
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(100), ctx.gpr[17]);
    ctx.set_gpr(17, ctx.gpr[6] + 0u);
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(96), ctx.gpr[16]);
    ctx.set_gpr(16, ctx.gpr[5] + 0u);
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(124), ctx.gpr[7]);
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(20), ctx.gpr[4]);
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(4), ctx.gpr[4]);
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(104), ctx.gpr[31]);
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(128), ctx.gpr[8]);
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(132), ctx.gpr[9]);
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(136), ctx.gpr[10]);
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(140), ctx.gpr[11]);
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(24), ctx.gpr[3]);
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(0), ctx.gpr[2]);
    ctx.set_gpr(31, 0x08815F50u);
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(12), ctx.gpr[3]);
    if (rt.invoke_chained_direct<&recomp_unit_0003_entry, 3u, 442u, 0x08811C60u>(ctx, &aot_mem) && ctx.pc == 0x08815F50u) goto L_08815F50;
    return;
L_08815F50:
    ctx.set_gpr(4, ctx.gpr[2] + 0u);
    ctx.set_gpr(7, rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(0)));
    ctx.set_gpr(6, ctx.gpr[17] + 0u);
    ctx.set_gpr(31, 0x08815F64u);
    ctx.set_gpr(5, ctx.gpr[29] + static_cast<std::uint32_t>(4));
    if (rt.invoke_chained_direct<&recomp_unit_0005_entry, 5u, 248u, 0x08818E54u>(ctx, &aot_mem) && ctx.pc == 0x08815F64u) goto L_08815F64;
    return;
L_08815F64:
    { const bool branch_taken = ctx.gpr[16] == 0u;
    ctx.set_gpr(3, rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(4)));
      if (branch_taken) {
          goto L_08815F70;
      }
      goto L_08815F6C;
    }
L_08815F6C:
    rt.memory().aot_store8(ctx.gpr[3] + static_cast<std::uint32_t>(0), static_cast<std::uint8_t>(0u));
    goto L_08815F70;
L_08815F70:
    ctx.set_gpr(31, rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(104)));
    ctx.set_gpr(17, rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(100)));
    ctx.set_gpr(16, rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(96)));
    jump_target = ctx.gpr[31];
    ctx.set_gpr(29, ctx.gpr[29] + static_cast<std::uint32_t>(144));
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_08815FF4:
    ctx.set_gpr(29, ctx.gpr[29] + static_cast<std::uint32_t>(-144));
    ctx.set_gpr(2, 0u + static_cast<std::uint32_t>(520));
    ctx.set_gpr(12, 32767u << 16u);
    ctx.set_gpr(3, ctx.gpr[29] + static_cast<std::uint32_t>(120));
    ctx.set_gpr(12, ctx.gpr[12] | 65535u);
    rt.memory().aot_store16(ctx.gpr[29] + static_cast<std::uint32_t>(16), static_cast<std::uint16_t>(ctx.gpr[2]));
    ctx.set_gpr(2, 0u + static_cast<std::uint32_t>(-1));
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(100), ctx.gpr[31]);
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(0), ctx.gpr[3]);
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(96), ctx.gpr[16]);
    ctx.set_gpr(16, ctx.gpr[5] + 0u);
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(120), ctx.gpr[6]);
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(124), ctx.gpr[7]);
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(128), ctx.gpr[8]);
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(132), ctx.gpr[9]);
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(136), ctx.gpr[10]);
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(140), ctx.gpr[11]);
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(20), ctx.gpr[4]);
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(24), ctx.gpr[12]);
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(4), ctx.gpr[4]);
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(12), ctx.gpr[12]);
    ctx.set_gpr(31, 0x08816050u);
    rt.memory().aot_store16(ctx.gpr[29] + static_cast<std::uint32_t>(18), static_cast<std::uint16_t>(ctx.gpr[2]));
    if (rt.invoke_chained_direct<&recomp_unit_0003_entry, 3u, 442u, 0x08811C60u>(ctx, &aot_mem) && ctx.pc == 0x08816050u) goto L_08816050;
    return;
L_08816050:
    ctx.set_gpr(4, ctx.gpr[2] + 0u);
    ctx.set_gpr(7, rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(0)));
    ctx.set_gpr(6, ctx.gpr[16] + 0u);
    ctx.set_gpr(31, 0x08816064u);
    ctx.set_gpr(5, ctx.gpr[29] + static_cast<std::uint32_t>(4));
    if (rt.invoke_chained_direct<&recomp_unit_0005_entry, 5u, 248u, 0x08818E54u>(ctx, &aot_mem) && ctx.pc == 0x08816064u) goto L_08816064;
    return;
L_08816064:
    ctx.set_gpr(3, rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(4)));
    rt.memory().aot_store8(ctx.gpr[3] + static_cast<std::uint32_t>(0), static_cast<std::uint8_t>(0u));
    ctx.set_gpr(31, rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(100)));
    ctx.set_gpr(16, rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(96)));
    jump_target = ctx.gpr[31];
    ctx.set_gpr(29, ctx.gpr[29] + static_cast<std::uint32_t>(144));
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_0881607C:
    jump_target = ctx.gpr[31];
    ctx.set_gpr(2, 0u + 0u);
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_08816084:
    ctx.set_gpr(29, ctx.gpr[29] + static_cast<std::uint32_t>(-144));
    ctx.set_gpr(2, 0u + static_cast<std::uint32_t>(4));
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(100), ctx.gpr[31]);
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(120), ctx.gpr[6]);
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(124), ctx.gpr[7]);
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(128), ctx.gpr[8]);
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(132), ctx.gpr[9]);
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(136), ctx.gpr[10]);
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(140), ctx.gpr[11]);
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(96), ctx.gpr[16]);
    ctx.set_gpr(16, ctx.gpr[5] + 0u);
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(20), ctx.gpr[4]);
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(4), ctx.gpr[4]);
    ctx.set_gpr(31, 0x088160C0u);
    rt.memory().aot_store16(ctx.gpr[29] + static_cast<std::uint32_t>(16), static_cast<std::uint16_t>(ctx.gpr[2]));
    goto L_08816764;
L_088160C0:
    ctx.set_gpr(3, 2177u << 16u);
    ctx.set_gpr(4, ctx.gpr[29] + static_cast<std::uint32_t>(120));
    ctx.set_gpr(3, ctx.gpr[3] + static_cast<std::uint32_t>(24700));
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(36), ctx.gpr[3]);
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(0), ctx.gpr[4]);
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(24), ctx.gpr[2]);
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(8), ctx.gpr[2]);
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(52), 0u);
    ctx.set_gpr(31, 0x088160E8u);
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(72), 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0003_entry, 3u, 442u, 0x08811C60u>(ctx, &aot_mem) && ctx.pc == 0x088160E8u) goto L_088160E8;
    return;
L_088160E8:
    ctx.set_gpr(4, ctx.gpr[2] + 0u);
    ctx.set_gpr(7, rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(0)));
    ctx.set_gpr(6, ctx.gpr[16] + 0u);
    ctx.set_gpr(31, 0x088160FCu);
    ctx.set_gpr(5, ctx.gpr[29] + static_cast<std::uint32_t>(4));
    if (rt.invoke_chained_direct<&recomp_unit_0005_entry, 5u, 763u, 0x0881ADC0u>(ctx, &aot_mem) && ctx.pc == 0x088160FCu) goto L_088160FC;
    return;
L_088160FC:
    ctx.set_gpr(31, rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(100)));
    ctx.set_gpr(16, rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(96)));
    jump_target = ctx.gpr[31];
    ctx.set_gpr(29, ctx.gpr[29] + static_cast<std::uint32_t>(144));
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_0881619C:
    ctx.set_gpr(29, ctx.gpr[29] + static_cast<std::uint32_t>(-16));
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(8), ctx.gpr[18]);
    ctx.set_gpr(18, ctx.gpr[4] + 0u);
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(12), ctx.gpr[31]);
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(4), ctx.gpr[17]);
    ctx.set_gpr(17, ctx.gpr[6] + 0u);
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(0), ctx.gpr[16]);
    ctx.set_gpr(31, 0x088161C0u);
    ctx.set_gpr(16, ctx.gpr[5] + 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0003_entry, 3u, 442u, 0x08811C60u>(ctx, &aot_mem) && ctx.pc == 0x088161C0u) goto L_088161C0;
    return;
L_088161C0:
    ctx.set_gpr(5, static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int16_t>(rt.memory().aot_load16(ctx.gpr[18] + static_cast<std::uint32_t>(14))))));
    ctx.set_gpr(4, ctx.gpr[2] + 0u);
    ctx.set_gpr(6, ctx.gpr[16] + 0u);
    ctx.set_gpr(31, 0x088161D4u);
    ctx.set_gpr(7, ctx.gpr[17] + 0u);
    goto L_08814ED0;
L_088161D4:
    { const bool branch_taken = static_cast<std::int32_t>(ctx.gpr[2]) < 0;
    ctx.set_gpr(3, ctx.gpr[2] + 0u);
      if (branch_taken) {
          goto L_08816204;
      }
      goto L_088161DC;
    }
L_088161DC:
    ctx.set_gpr(2, rt.memory().aot_load32(ctx.gpr[18] + static_cast<std::uint32_t>(80)));
    ctx.set_gpr(2, ctx.gpr[3] + ctx.gpr[2]);
    rt.memory().aot_store32(ctx.gpr[18] + static_cast<std::uint32_t>(80), ctx.gpr[2]);
    ctx.set_gpr(2, ctx.gpr[3] + 0u);
    ctx.set_gpr(31, rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(12)));
    ctx.set_gpr(18, rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(8)));
    ctx.set_gpr(17, rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(4)));
    ctx.set_gpr(16, rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(0)));
    jump_target = ctx.gpr[31];
    ctx.set_gpr(29, ctx.gpr[29] + static_cast<std::uint32_t>(16));
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_08816204:
    ctx.set_gpr(2, rt.memory().aot_load16(ctx.gpr[18] + static_cast<std::uint32_t>(12)));
    ctx.set_gpr(2, (ctx.gpr[2] & ~0x00001000u) | ((0u & 0x00000001u) << 12u));
    rt.memory().aot_store16(ctx.gpr[18] + static_cast<std::uint32_t>(12), static_cast<std::uint16_t>(ctx.gpr[2]));
    ctx.set_gpr(2, ctx.gpr[3] + 0u);
    ctx.set_gpr(31, rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(12)));
    ctx.set_gpr(18, rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(8)));
    ctx.set_gpr(17, rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(4)));
    ctx.set_gpr(16, rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(0)));
    jump_target = ctx.gpr[31];
    ctx.set_gpr(29, ctx.gpr[29] + static_cast<std::uint32_t>(16));
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_0881622C:
    ctx.set_gpr(29, ctx.gpr[29] + static_cast<std::uint32_t>(-16));
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(8), ctx.gpr[18]);
    ctx.set_gpr(18, ctx.gpr[6] + 0u);
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(4), ctx.gpr[17]);
    ctx.set_gpr(17, ctx.gpr[5] + 0u);
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(0), ctx.gpr[16]);
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(12), ctx.gpr[31]);
    ctx.set_gpr(3, rt.memory().aot_load16(ctx.gpr[4] + static_cast<std::uint32_t>(12)));
    ctx.set_gpr(2, ctx.gpr[3] & 256u);
    { const bool branch_taken = ctx.gpr[2] == 0u;
    ctx.set_gpr(16, ctx.gpr[4] + 0u);
      if (branch_taken) {
          goto L_08816278;
      }
      goto L_08816258;
    }
L_08816258:
    ctx.set_gpr(31, 0x08816260u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0003_entry, 3u, 442u, 0x08811C60u>(ctx, &aot_mem) && ctx.pc == 0x08816260u) goto L_08816260;
    return;
L_08816260:
    ctx.set_gpr(5, static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int16_t>(rt.memory().aot_load16(ctx.gpr[16] + static_cast<std::uint32_t>(14))))));
    ctx.set_gpr(4, ctx.gpr[2] + 0u);
    ctx.set_gpr(6, 0u + 0u);
    ctx.set_gpr(31, 0x08816274u);
    ctx.set_gpr(7, 0u + static_cast<std::uint32_t>(2));
    if (rt.invoke_chained_direct<&recomp_unit_0003_entry, 3u, 455u, 0x08811DFCu>(ctx, &aot_mem) && ctx.pc == 0x08816274u) goto L_08816274;
    return;
L_08816274:
    ctx.set_gpr(3, rt.memory().aot_load16(ctx.gpr[16] + static_cast<std::uint32_t>(12)));
    goto L_08816278;
L_08816278:
    ctx.set_gpr(2, ctx.gpr[3] + 0u);
    ctx.set_gpr(2, (ctx.gpr[2] & ~0x00001000u) | ((0u & 0x00000001u) << 12u));
    ctx.set_gpr(31, 0x08816288u);
    rt.memory().aot_store16(ctx.gpr[16] + static_cast<std::uint32_t>(12), static_cast<std::uint16_t>(ctx.gpr[2]));
    if (rt.invoke_chained_direct<&recomp_unit_0003_entry, 3u, 442u, 0x08811C60u>(ctx, &aot_mem) && ctx.pc == 0x08816288u) goto L_08816288;
    return;
L_08816288:
    ctx.set_gpr(4, ctx.gpr[2] + 0u);
    ctx.set_gpr(5, static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int16_t>(rt.memory().aot_load16(ctx.gpr[16] + static_cast<std::uint32_t>(14))))));
    ctx.set_gpr(6, ctx.gpr[17] + 0u);
    ctx.set_gpr(7, ctx.gpr[18] + 0u);
    ctx.set_gpr(31, rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(12)));
    ctx.set_gpr(18, rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(8)));
    ctx.set_gpr(17, rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(4)));
    ctx.set_gpr(16, rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(0)));
    ctx.set_gpr(29, ctx.gpr[29] + static_cast<std::uint32_t>(16));
    (void)rt.invoke_chained_direct<&recomp_unit_0006_entry, 6u, 78u, 0x0881C66Cu>(ctx, &aot_mem); return;
L_088162B0:
    ctx.set_gpr(29, ctx.gpr[29] + static_cast<std::uint32_t>(-16));
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(8), ctx.gpr[18]);
    ctx.set_gpr(18, ctx.gpr[4] + 0u);
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(12), ctx.gpr[31]);
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(4), ctx.gpr[17]);
    ctx.set_gpr(17, ctx.gpr[6] + 0u);
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(0), ctx.gpr[16]);
    ctx.set_gpr(31, 0x088162D4u);
    ctx.set_gpr(16, ctx.gpr[5] + 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0003_entry, 3u, 442u, 0x08811C60u>(ctx, &aot_mem) && ctx.pc == 0x088162D4u) goto L_088162D4;
    return;
L_088162D4:
    ctx.set_gpr(5, static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int16_t>(rt.memory().aot_load16(ctx.gpr[18] + static_cast<std::uint32_t>(14))))));
    ctx.set_gpr(4, ctx.gpr[2] + 0u);
    ctx.set_gpr(6, ctx.gpr[16] + 0u);
    ctx.set_gpr(31, 0x088162E8u);
    ctx.set_gpr(7, ctx.gpr[17] + 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0003_entry, 3u, 455u, 0x08811DFCu>(ctx, &aot_mem) && ctx.pc == 0x088162E8u) goto L_088162E8;
    return;
L_088162E8:
    ctx.set_gpr(3, ctx.gpr[2] + 0u);
    ctx.set_gpr(2, 0u + static_cast<std::uint32_t>(-1));
    { const bool branch_taken = ctx.gpr[3] == ctx.gpr[2];
    ctx.set_gpr(2, rt.memory().aot_load16(ctx.gpr[18] + static_cast<std::uint32_t>(12)));
      if (branch_taken) {
          goto L_08816320;
      }
      goto L_088162F8;
    }
L_088162F8:
    rt.memory().aot_store32(ctx.gpr[18] + static_cast<std::uint32_t>(80), ctx.gpr[3]);
    ctx.set_gpr(2, ctx.gpr[2] | 4096u);
    rt.memory().aot_store16(ctx.gpr[18] + static_cast<std::uint32_t>(12), static_cast<std::uint16_t>(ctx.gpr[2]));
    ctx.set_gpr(2, ctx.gpr[3] + 0u);
    ctx.set_gpr(31, rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(12)));
    ctx.set_gpr(18, rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(8)));
    ctx.set_gpr(17, rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(4)));
    ctx.set_gpr(16, rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(0)));
    jump_target = ctx.gpr[31];
    ctx.set_gpr(29, ctx.gpr[29] + static_cast<std::uint32_t>(16));
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_08816320:
    ctx.set_gpr(2, (ctx.gpr[2] & ~0x00001000u) | ((0u & 0x00000001u) << 12u));
    rt.memory().aot_store16(ctx.gpr[18] + static_cast<std::uint32_t>(12), static_cast<std::uint16_t>(ctx.gpr[2]));
    ctx.set_gpr(2, ctx.gpr[3] + 0u);
    ctx.set_gpr(31, rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(12)));
    ctx.set_gpr(18, rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(8)));
    ctx.set_gpr(17, rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(4)));
    ctx.set_gpr(16, rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(0)));
    jump_target = ctx.gpr[31];
    ctx.set_gpr(29, ctx.gpr[29] + static_cast<std::uint32_t>(16));
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_08816344:
    ctx.set_gpr(29, ctx.gpr[29] + static_cast<std::uint32_t>(-16));
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(0), ctx.gpr[16]);
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(4), ctx.gpr[31]);
    ctx.set_gpr(31, 0x08816358u);
    ctx.set_gpr(16, ctx.gpr[4] + 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0003_entry, 3u, 442u, 0x08811C60u>(ctx, &aot_mem) && ctx.pc == 0x08816358u) goto L_08816358;
    return;
L_08816358:
    ctx.set_gpr(4, ctx.gpr[2] + 0u);
    ctx.set_gpr(5, static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int16_t>(rt.memory().aot_load16(ctx.gpr[16] + static_cast<std::uint32_t>(14))))));
    ctx.set_gpr(31, rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(4)));
    ctx.set_gpr(16, rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(0)));
    ctx.set_gpr(29, ctx.gpr[29] + static_cast<std::uint32_t>(16));
    (void)rt.invoke_chained_direct<&recomp_unit_0002_entry, 2u, 699u, 0x0880F3A4u>(ctx, &aot_mem); return;
L_08816370:
    ctx.set_gpr(11, rt.memory().aot_load8(ctx.gpr[4] + static_cast<std::uint32_t>(0)));
    ctx.set_gpr(8, ctx.gpr[4] + 0u);
    ctx.set_gpr(7, static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int8_t>(ctx.gpr[11]))));
    { const bool branch_taken = ctx.gpr[7] == 0u;
    ctx.set_gpr(9, ctx.gpr[5] + 0u);
      if (branch_taken) {
          goto L_08816414;
      }
      goto L_08816384;
    }
L_08816384:
    ctx.set_gpr(13, 2225u << 16u);
    ctx.set_gpr(12, ctx.gpr[13] + static_cast<std::uint32_t>(-15));
    ctx.set_gpr(10, rt.memory().aot_load8(ctx.gpr[9] + static_cast<std::uint32_t>(0)));
    goto L_08816390;
L_08816390:
    ctx.set_gpr(4, ctx.gpr[7] + ctx.gpr[12]);
    ctx.set_gpr(2, rt.memory().aot_load8(ctx.gpr[4] + static_cast<std::uint32_t>(0)));
    ctx.set_gpr(5, static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int8_t>(ctx.gpr[10]))));
    ctx.set_gpr(6, ctx.gpr[5] + ctx.gpr[12]);
    ctx.set_gpr(3, rt.memory().aot_load8(ctx.gpr[6] + static_cast<std::uint32_t>(0)));
    ctx.set_gpr(4, ctx.gpr[7] + static_cast<std::uint32_t>(32));
    ctx.set_gpr(2, ctx.gpr[2] & 1u);
    ctx.set_gpr(3, ctx.gpr[3] & 1u);
    ctx.set_gpr(6, ctx.gpr[5] + static_cast<std::uint32_t>(32));
    if (ctx.gpr[2] == 0u) ctx.set_gpr(4, ctx.gpr[7]);
    if (ctx.gpr[3] != 0u) ctx.set_gpr(5, ctx.gpr[6]);
    ctx.set_gpr(8, ctx.gpr[8] + static_cast<std::uint32_t>(1));
    { const bool branch_taken = ctx.gpr[4] != ctx.gpr[5];
    ctx.set_gpr(9, ctx.gpr[9] + static_cast<std::uint32_t>(1));
      if (branch_taken) {
          goto L_088163D8;
      }
      goto L_088163C8;
    }
L_088163C8:
    ctx.set_gpr(11, rt.memory().aot_load8(ctx.gpr[8] + static_cast<std::uint32_t>(0)));
    ctx.set_gpr(7, static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int8_t>(ctx.gpr[11]))));
    { const bool branch_taken = ctx.gpr[7] != 0u;
    ctx.set_gpr(10, rt.memory().aot_load8(ctx.gpr[9] + static_cast<std::uint32_t>(0)));
      if (branch_taken) {
          goto L_08816390;
      }
      goto L_088163D8;
    }
L_088163D8:
    ctx.set_gpr(6, ctx.gpr[11] & 255u);
    ctx.set_gpr(2, ctx.gpr[10] & 255u);
    ctx.set_gpr(3, ctx.gpr[13] + static_cast<std::uint32_t>(-15));
    ctx.set_gpr(7, ctx.gpr[2] + ctx.gpr[3]);
    ctx.set_gpr(3, ctx.gpr[6] + ctx.gpr[3]);
    ctx.set_gpr(4, rt.memory().aot_load8(ctx.gpr[3] + static_cast<std::uint32_t>(0)));
    ctx.set_gpr(5, rt.memory().aot_load8(ctx.gpr[7] + static_cast<std::uint32_t>(0)));
    ctx.set_gpr(8, ctx.gpr[6] + static_cast<std::uint32_t>(32));
    ctx.set_gpr(4, ctx.gpr[4] & 1u);
    ctx.set_gpr(5, ctx.gpr[5] & 1u);
    ctx.set_gpr(3, ctx.gpr[2] + static_cast<std::uint32_t>(32));
    if (ctx.gpr[4] != 0u) ctx.set_gpr(6, ctx.gpr[8]);
    if (ctx.gpr[5] != 0u) ctx.set_gpr(2, ctx.gpr[3]);
    jump_target = ctx.gpr[31];
    ctx.set_gpr(2, ctx.gpr[6] - ctx.gpr[2]);
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_08816414:
    ctx.set_gpr(10, rt.memory().aot_load8(ctx.gpr[5] + static_cast<std::uint32_t>(0)));
    ctx.set_gpr(13, 2225u << 16u);
    ctx.set_gpr(6, ctx.gpr[11] & 255u);
    ctx.set_gpr(2, ctx.gpr[10] & 255u);
    ctx.set_gpr(3, ctx.gpr[13] + static_cast<std::uint32_t>(-15));
    ctx.set_gpr(7, ctx.gpr[2] + ctx.gpr[3]);
    ctx.set_gpr(3, ctx.gpr[6] + ctx.gpr[3]);
    ctx.set_gpr(4, rt.memory().aot_load8(ctx.gpr[3] + static_cast<std::uint32_t>(0)));
    ctx.set_gpr(5, rt.memory().aot_load8(ctx.gpr[7] + static_cast<std::uint32_t>(0)));
    ctx.set_gpr(8, ctx.gpr[6] + static_cast<std::uint32_t>(32));
    ctx.set_gpr(4, ctx.gpr[4] & 1u);
    ctx.set_gpr(5, ctx.gpr[5] & 1u);
    ctx.set_gpr(3, ctx.gpr[2] + static_cast<std::uint32_t>(32));
    if (ctx.gpr[4] != 0u) ctx.set_gpr(6, ctx.gpr[8]);
    if (ctx.gpr[5] != 0u) ctx.set_gpr(2, ctx.gpr[3]);
    jump_target = ctx.gpr[31];
    ctx.set_gpr(2, ctx.gpr[6] - ctx.gpr[2]);
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_08816458:
    ctx.set_gpr(29, ctx.gpr[29] + static_cast<std::uint32_t>(-16));
    ctx.set_gpr(2, ctx.gpr[4] & 3u);
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(0), ctx.gpr[16]);
    ctx.set_gpr(16, ctx.gpr[4] + 0u);
    { const bool branch_taken = ctx.gpr[2] != 0u;
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(4), ctx.gpr[31]);
      if (branch_taken) {
          goto L_088164D4;
      }
      goto L_08816470;
    }
L_08816470:
    ctx.set_gpr(2, rt.memory().aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(0)));
    ctx.set_gpr(3, 65278u << 16u);
    ctx.set_gpr(6, ctx.gpr[3] | 65279u);
    ctx.set_gpr(4, ~(0u | ctx.gpr[2]));
    ctx.set_gpr(3, 32896u << 16u);
    ctx.set_gpr(2, ctx.gpr[2] + ctx.gpr[6]);
    ctx.set_gpr(2, ctx.gpr[2] & ctx.gpr[4]);
    ctx.set_gpr(3, ctx.gpr[3] | 32896u);
    ctx.set_gpr(2, ctx.gpr[2] & ctx.gpr[3]);
    { const bool branch_taken = ctx.gpr[2] != 0u;
    ctx.set_gpr(4, ctx.gpr[16] + 0u);
      if (branch_taken) {
          goto L_088164D4;
      }
      goto L_0881649C;
    }
L_0881649C:
    ctx.set_gpr(7, ctx.gpr[6] + 0u);
    ctx.set_gpr(6, ctx.gpr[3] + 0u);
    ctx.set_gpr(4, ctx.gpr[4] + static_cast<std::uint32_t>(4));
    goto L_088164A8;
L_088164A8:
    ctx.set_gpr(2, rt.memory().aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(0)));
    ctx.set_gpr(3, ~(0u | ctx.gpr[2]));
    ctx.set_gpr(2, ctx.gpr[2] + ctx.gpr[7]);
    ctx.set_gpr(2, ctx.gpr[2] & ctx.gpr[3]);
    ctx.set_gpr(2, ctx.gpr[2] & ctx.gpr[6]);
    if (ctx.gpr[2] == 0u) {
    ctx.set_gpr(4, ctx.gpr[4] + static_cast<std::uint32_t>(4));
        goto L_088164A8;
    }
    goto L_088164C4;
L_088164C4:
    ctx.set_gpr(2, static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int8_t>(rt.memory().aot_load8(ctx.gpr[4] + static_cast<std::uint32_t>(0))))));
    { const bool branch_taken = ctx.gpr[2] == 0u;
    // nop
      if (branch_taken) {
          goto L_088164E0;
      }
      goto L_088164D0;
    }
L_088164D0:
    ctx.set_gpr(4, ctx.gpr[4] + static_cast<std::uint32_t>(1));
    goto L_088164D4;
L_088164D4:
    ctx.set_gpr(2, static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int8_t>(rt.memory().aot_load8(ctx.gpr[4] + static_cast<std::uint32_t>(0))))));
    if (ctx.gpr[2] != 0u) {
    ctx.set_gpr(4, ctx.gpr[4] + static_cast<std::uint32_t>(1));
        goto L_088164D4;
    }
    goto L_088164E0;
L_088164E0:
    ctx.set_gpr(31, 0x088164E8u);
    // nop
    goto L_0881667C;
L_088164E8:
    ctx.set_gpr(2, ctx.gpr[16] + 0u);
    ctx.set_gpr(31, rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(4)));
    ctx.set_gpr(16, rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(0)));
    jump_target = ctx.gpr[31];
    ctx.set_gpr(29, ctx.gpr[29] + static_cast<std::uint32_t>(16));
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_088164FC:
    ctx.set_gpr(2, ctx.gpr[4] & 3u);
    ctx.set_gpr(6, ctx.gpr[4] + 0u);
    { const bool branch_taken = ctx.gpr[2] != 0u;
    ctx.set_gpr(7, ctx.gpr[5] & 255u);
      if (branch_taken) {
          goto L_08816558;
      }
      goto L_0881650C;
    }
L_0881650C:
    ctx.set_gpr(9, 0u + 0u);
    ctx.set_gpr(3, 0u + 0u);
    ctx.set_gpr(5, 0u + static_cast<std::uint32_t>(4));
    goto L_08816518;
L_08816518:
    ctx.set_gpr(2, ctx.gpr[9] << 8u);
    ctx.set_gpr(3, ctx.gpr[3] + static_cast<std::uint32_t>(1));
    { const bool branch_taken = ctx.gpr[3] != ctx.gpr[5];
    ctx.set_gpr(9, ctx.gpr[7] | ctx.gpr[2]);
      if (branch_taken) {
          goto L_08816518;
      }
      goto L_08816528;
    }
L_08816528:
    ctx.set_gpr(5, rt.memory().aot_load32(ctx.gpr[6] + static_cast<std::uint32_t>(0)));
    ctx.set_gpr(2, 65278u << 16u);
    ctx.set_gpr(2, ctx.gpr[2] | 65279u);
    ctx.set_gpr(2, ctx.gpr[5] + ctx.gpr[2]);
    ctx.set_gpr(4, ~(0u | ctx.gpr[5]));
    ctx.set_gpr(3, 32896u << 16u);
    ctx.set_gpr(2, ctx.gpr[2] & ctx.gpr[4]);
    ctx.set_gpr(3, ctx.gpr[3] | 32896u);
    ctx.set_gpr(2, ctx.gpr[2] & ctx.gpr[3]);
    { const bool branch_taken = ctx.gpr[2] == 0u;
    ctx.set_gpr(8, ctx.gpr[6] + 0u);
      if (branch_taken) {
          goto L_0881658C;
      }
      goto L_08816554;
    }
L_08816554:
    ctx.set_gpr(4, ctx.gpr[8] + 0u);
    goto L_08816558;
L_08816558:
    ctx.set_gpr(3, rt.memory().aot_load8(ctx.gpr[4] + static_cast<std::uint32_t>(0)));
    { const bool branch_taken = ctx.gpr[3] == 0u;
    // nop
      if (branch_taken) {
          goto L_0881657C;
      }
      goto L_08816564;
    }
L_08816564:
    { const bool branch_taken = ctx.gpr[7] == ctx.gpr[3];
    // nop
      if (branch_taken) {
          goto L_08816608;
      }
      goto L_0881656C;
    }
L_0881656C:
    ctx.set_gpr(4, ctx.gpr[4] + static_cast<std::uint32_t>(1));
    ctx.set_gpr(3, rt.memory().aot_load8(ctx.gpr[4] + static_cast<std::uint32_t>(0)));
    { const bool branch_taken = ctx.gpr[3] != 0u;
    // nop
      if (branch_taken) {
          goto L_08816564;
      }
      goto L_0881657C;
    }
L_0881657C:
    { const bool branch_taken = ctx.gpr[7] == ctx.gpr[3];
    ctx.set_gpr(2, 0u + 0u);
      if (branch_taken) {
          goto L_08816608;
      }
      goto L_08816584;
    }
L_08816584:
    jump_target = ctx.gpr[31];
    // nop
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_0881658C:
    ctx.set_gpr(3, 65278u << 16u);
    ctx.set_gpr(4, ctx.gpr[9] ^ ctx.gpr[5]);
    ctx.set_gpr(3, ctx.gpr[3] | 65279u);
    ctx.set_gpr(3, ctx.gpr[4] + ctx.gpr[3]);
    ctx.set_gpr(2, 32896u << 16u);
    ctx.set_gpr(4, ~(0u | ctx.gpr[4]));
    ctx.set_gpr(3, ctx.gpr[3] & ctx.gpr[4]);
    ctx.set_gpr(2, ctx.gpr[2] | 32896u);
    ctx.set_gpr(3, ctx.gpr[3] & ctx.gpr[2]);
    if (ctx.gpr[3] != 0u) {
    ctx.set_gpr(4, ctx.gpr[8] + 0u);
        goto L_08816558;
    }
    goto L_088165B8;
L_088165B8:
    ctx.set_gpr(8, ctx.gpr[8] + static_cast<std::uint32_t>(4));
    goto L_088165BC;
L_088165BC:
    ctx.set_gpr(5, rt.memory().aot_load32(ctx.gpr[8] + static_cast<std::uint32_t>(0)));
    ctx.set_gpr(2, 65278u << 16u);
    ctx.set_gpr(2, ctx.gpr[2] | 65279u);
    ctx.set_gpr(4, ctx.gpr[9] ^ ctx.gpr[5]);
    ctx.set_gpr(6, ctx.gpr[4] + ctx.gpr[2]);
    ctx.set_gpr(3, ~(0u | ctx.gpr[5]));
    ctx.set_gpr(5, ctx.gpr[5] + ctx.gpr[2]);
    ctx.set_gpr(2, 32896u << 16u);
    ctx.set_gpr(2, ctx.gpr[2] | 32896u);
    ctx.set_gpr(4, ~(0u | ctx.gpr[4]));
    ctx.set_gpr(3, ctx.gpr[3] & ctx.gpr[5]);
    ctx.set_gpr(4, ctx.gpr[4] & ctx.gpr[6]);
    ctx.set_gpr(3, ctx.gpr[3] & ctx.gpr[2]);
    { const bool branch_taken = ctx.gpr[3] != 0u;
    ctx.set_gpr(4, ctx.gpr[4] & ctx.gpr[2]);
      if (branch_taken) {
          goto L_08816554;
      }
      goto L_088165F8;
    }
L_088165F8:
    if (ctx.gpr[4] == 0u) {
    ctx.set_gpr(8, ctx.gpr[8] + static_cast<std::uint32_t>(4));
        goto L_088165BC;
    }
    goto L_08816600;
L_08816600:
    ctx.set_gpr(4, ctx.gpr[8] + 0u);
    goto L_08816558;
L_08816608:
    jump_target = ctx.gpr[31];
    ctx.set_gpr(2, ctx.gpr[4] + 0u);
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_08816610:
    ctx.set_gpr(2, ctx.gpr[4] | ctx.gpr[5]);
    ctx.set_gpr(2, ctx.gpr[2] ^ 1u);
    ctx.set_gpr(2, ctx.gpr[2] & 1u);
    { const bool branch_taken = ctx.gpr[2] == 0u;
    ctx.set_gpr(2, rt.memory().aot_load8(ctx.gpr[4] + static_cast<std::uint32_t>(0)));
      if (branch_taken) {
          goto L_08816664;
      }
      goto L_08816624;
    }
L_08816624:
    ctx.set_gpr(6, rt.memory().aot_load8(ctx.gpr[5] + static_cast<std::uint32_t>(0)));
    { const bool branch_taken = ctx.gpr[2] == 0u;
    ctx.set_gpr(7, ctx.gpr[4] + static_cast<std::uint32_t>(2));
      if (branch_taken) {
          goto L_08816674;
      }
      goto L_08816630;
    }
L_08816630:
    { const bool branch_taken = ctx.gpr[2] != ctx.gpr[6];
    ctx.set_gpr(3, rt.memory().aot_load8(ctx.gpr[4] + static_cast<std::uint32_t>(1)));
      if (branch_taken) {
          goto L_08816674;
      }
      goto L_08816638;
    }
L_08816638:
    ctx.set_gpr(6, rt.memory().aot_load8(ctx.gpr[5] + static_cast<std::uint32_t>(1)));
    { const bool branch_taken = ctx.gpr[3] == 0u;
    ctx.set_gpr(5, ctx.gpr[5] + static_cast<std::uint32_t>(2));
      if (branch_taken) {
          goto L_08816650;
      }
      goto L_08816644;
    }
L_08816644:
    ctx.set_gpr(2, rt.memory().aot_load8(ctx.gpr[4] + static_cast<std::uint32_t>(2)));
    { const bool branch_taken = ctx.gpr[3] == ctx.gpr[6];
    ctx.set_gpr(4, ctx.gpr[7] + 0u);
      if (branch_taken) {
          goto L_08816624;
      }
      goto L_08816650;
    }
L_08816650:
    jump_target = ctx.gpr[31];
    ctx.set_gpr(2, ctx.gpr[3] - ctx.gpr[6]);
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_08816658:
    { const bool branch_taken = ctx.gpr[2] != ctx.gpr[6];
    // nop
      if (branch_taken) {
          goto L_08816674;
      }
      goto L_08816660;
    }
L_08816660:
    ctx.set_gpr(2, rt.memory().aot_load8(ctx.gpr[4] + static_cast<std::uint32_t>(0)));
    goto L_08816664;
L_08816664:
    ctx.set_gpr(6, rt.memory().aot_load8(ctx.gpr[5] + static_cast<std::uint32_t>(0)));
    ctx.set_gpr(4, ctx.gpr[4] + static_cast<std::uint32_t>(1));
    { const bool branch_taken = ctx.gpr[2] != 0u;
    ctx.set_gpr(5, ctx.gpr[5] + static_cast<std::uint32_t>(1));
      if (branch_taken) {
          goto L_08816658;
      }
      goto L_08816674;
    }
L_08816674:
    jump_target = ctx.gpr[31];
    ctx.set_gpr(2, ctx.gpr[2] - ctx.gpr[6]);
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_0881667C:
    ctx.set_gpr(8, ctx.gpr[4] + 0u);
    ctx.set_gpr(2, ctx.gpr[5] | ctx.gpr[8]);
    ctx.set_gpr(2, ctx.gpr[2] & 3u);
    { const bool branch_taken = ctx.gpr[2] != 0u;
    ctx.set_gpr(3, ctx.gpr[8] + 0u);
      if (branch_taken) {
          goto L_088166E8;
      }
      goto L_08816690;
    }
L_08816690:
    ctx.set_gpr(6, rt.memory().aot_load32(ctx.gpr[5] + static_cast<std::uint32_t>(0)));
    ctx.set_gpr(2, 65278u << 16u);
    ctx.set_gpr(9, ctx.gpr[2] | 65279u);
    ctx.set_gpr(4, ctx.gpr[6] + ctx.gpr[9]);
    ctx.set_gpr(2, ~(0u | ctx.gpr[6]));
    ctx.set_gpr(3, 32896u << 16u);
    ctx.set_gpr(4, ctx.gpr[4] & ctx.gpr[2]);
    ctx.set_gpr(3, ctx.gpr[3] | 32896u);
    ctx.set_gpr(4, ctx.gpr[4] & ctx.gpr[3]);
    { const bool branch_taken = ctx.gpr[4] != 0u;
    ctx.set_gpr(7, ctx.gpr[8] + 0u);
      if (branch_taken) {
          goto L_088166E4;
      }
      goto L_088166BC;
    }
L_088166BC:
    ctx.set_gpr(4, ctx.gpr[3] + 0u);
    goto L_088166C0;
L_088166C0:
    rt.memory().aot_store32(ctx.gpr[7] + static_cast<std::uint32_t>(0), ctx.gpr[6]);
    ctx.set_gpr(5, ctx.gpr[5] + static_cast<std::uint32_t>(4));
    ctx.set_gpr(6, rt.memory().aot_load32(ctx.gpr[5] + static_cast<std::uint32_t>(0)));
    ctx.set_gpr(2, ctx.gpr[6] + ctx.gpr[9]);
    ctx.set_gpr(3, ~(0u | ctx.gpr[6]));
    ctx.set_gpr(2, ctx.gpr[2] & ctx.gpr[3]);
    ctx.set_gpr(2, ctx.gpr[2] & ctx.gpr[4]);
    { const bool branch_taken = ctx.gpr[2] == 0u;
    ctx.set_gpr(7, ctx.gpr[7] + static_cast<std::uint32_t>(4));
      if (branch_taken) {
          goto L_088166C0;
      }
      goto L_088166E4;
    }
L_088166E4:
    ctx.set_gpr(3, ctx.gpr[7] + 0u);
    goto L_088166E8;
L_088166E8:
    ctx.set_gpr(2, static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int8_t>(rt.memory().aot_load8(ctx.gpr[5] + static_cast<std::uint32_t>(0))))));
    ctx.set_gpr(5, ctx.gpr[5] + static_cast<std::uint32_t>(1));
    rt.memory().aot_store8(ctx.gpr[3] + static_cast<std::uint32_t>(0), static_cast<std::uint8_t>(ctx.gpr[2]));
    { const bool branch_taken = ctx.gpr[2] != 0u;
    ctx.set_gpr(3, ctx.gpr[3] + static_cast<std::uint32_t>(1));
      if (branch_taken) {
          goto L_088166E8;
      }
      goto L_088166FC;
    }
L_088166FC:
    jump_target = ctx.gpr[31];
    ctx.set_gpr(2, ctx.gpr[8] + 0u);
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_08816704:
    ctx.set_gpr(7, static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int8_t>(rt.memory().aot_load8(ctx.gpr[4] + static_cast<std::uint32_t>(0))))));
    { const bool branch_taken = ctx.gpr[7] == 0u;
    // nop
      if (branch_taken) {
          goto L_0881675C;
      }
      goto L_08816710;
    }
L_08816710:
    ctx.set_gpr(8, static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int8_t>(rt.memory().aot_load8(ctx.gpr[5] + static_cast<std::uint32_t>(0))))));
    ctx.set_gpr(2, ctx.gpr[4] + 0u);
    goto L_08816718;
L_08816718:
    if (ctx.gpr[8] == 0u) {
    ctx.set_gpr(2, ctx.gpr[2] + static_cast<std::uint32_t>(1));
        goto L_08816748;
    }
    goto L_08816720;
L_08816720:
    { const bool branch_taken = ctx.gpr[7] == ctx.gpr[8];
    ctx.set_gpr(3, ctx.gpr[5] + 0u);
      if (branch_taken) {
          goto L_08816740;
      }
      goto L_08816728;
    }
L_08816728:
    ctx.set_gpr(3, ctx.gpr[3] + static_cast<std::uint32_t>(1));
    goto L_0881672C;
L_0881672C:
    ctx.set_gpr(6, static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int8_t>(rt.memory().aot_load8(ctx.gpr[3] + static_cast<std::uint32_t>(0))))));
    if (ctx.gpr[6] == 0u) {
    ctx.set_gpr(2, ctx.gpr[2] + static_cast<std::uint32_t>(1));
        goto L_08816748;
    }
    goto L_08816738;
L_08816738:
    { const bool branch_taken = ctx.gpr[7] != ctx.gpr[6];
    ctx.set_gpr(3, ctx.gpr[3] + static_cast<std::uint32_t>(1));
      if (branch_taken) {
          goto L_0881672C;
      }
      goto L_08816740;
    }
L_08816740:
    jump_target = ctx.gpr[31];
    ctx.set_gpr(2, ctx.gpr[2] - ctx.gpr[4]);
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_08816748:
    ctx.set_gpr(7, static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int8_t>(rt.memory().aot_load8(ctx.gpr[2] + static_cast<std::uint32_t>(0))))));
    { const bool branch_taken = ctx.gpr[7] != 0u;
    // nop
      if (branch_taken) {
          goto L_08816718;
      }
      goto L_08816754;
    }
L_08816754:
    jump_target = ctx.gpr[31];
    ctx.set_gpr(2, ctx.gpr[2] - ctx.gpr[4]);
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_0881675C:
    jump_target = ctx.gpr[31];
    ctx.set_gpr(2, 0u + 0u);
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_08816764:
    ctx.set_gpr(2, ctx.gpr[4] + static_cast<std::uint32_t>(1));
    goto L_08816768;
L_08816768:
    ctx.set_gpr(3, rt.memory().aot_load8(ctx.gpr[4] + static_cast<std::uint32_t>(0)));
    { const bool branch_taken = ctx.gpr[3] != 0u;
    ctx.set_gpr(4, ctx.gpr[4] + static_cast<std::uint32_t>(1));
      if (branch_taken) {
          goto L_08816768;
      }
      goto L_08816774;
    }
L_08816774:
    jump_target = ctx.gpr[31];
    ctx.set_gpr(2, ctx.gpr[4] - ctx.gpr[2]);
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_0881677C:
    ctx.set_gpr(5, static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int8_t>(rt.memory().aot_load8(ctx.gpr[4] + static_cast<std::uint32_t>(0))))));
    { const bool branch_taken = ctx.gpr[5] == 0u;
    ctx.set_gpr(6, ctx.gpr[4] + 0u);
      if (branch_taken) {
          goto L_088167B8;
      }
      goto L_08816788;
    }
L_08816788:
    ctx.set_gpr(2, 2225u << 16u);
    ctx.set_gpr(7, ctx.gpr[2] + static_cast<std::uint32_t>(-15));
    ctx.set_gpr(3, ctx.gpr[5] + ctx.gpr[7]);
    goto L_08816794;
L_08816794:
    ctx.set_gpr(2, rt.memory().aot_load8(ctx.gpr[3] + static_cast<std::uint32_t>(0)));
    ctx.set_gpr(2, ctx.gpr[2] & 1u);
    { const bool branch_taken = ctx.gpr[2] == 0u;
    ctx.set_gpr(3, ctx.gpr[5] + static_cast<std::uint32_t>(32));
      if (branch_taken) {
          goto L_088167A8;
      }
      goto L_088167A4;
    }
L_088167A4:
    rt.memory().aot_store8(ctx.gpr[6] + static_cast<std::uint32_t>(0), static_cast<std::uint8_t>(ctx.gpr[3]));
    goto L_088167A8;
L_088167A8:
    ctx.set_gpr(6, ctx.gpr[6] + static_cast<std::uint32_t>(1));
    ctx.set_gpr(5, static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int8_t>(rt.memory().aot_load8(ctx.gpr[6] + static_cast<std::uint32_t>(0))))));
    { const bool branch_taken = ctx.gpr[5] != 0u;
    ctx.set_gpr(3, ctx.gpr[5] + ctx.gpr[7]);
      if (branch_taken) {
          goto L_08816794;
      }
      goto L_088167B8;
    }
L_088167B8:
    jump_target = ctx.gpr[31];
    ctx.set_gpr(2, ctx.gpr[4] + 0u);
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_088167C0:
    ctx.set_gpr(14, ctx.gpr[6] + 0u);
    ctx.set_gpr(10, ctx.gpr[4] + 0u);
    ctx.set_gpr(11, ctx.gpr[5] + 0u);
    { const bool branch_taken = ctx.gpr[6] == 0u;
    ctx.set_gpr(2, 0u + 0u);
      if (branch_taken) {
          goto L_08816894;
      }
      goto L_088167D4;
    }
L_088167D4:
    { const bool branch_taken = ctx.gpr[6] == 0u;
    ctx.set_gpr(15, ctx.gpr[6] + static_cast<std::uint32_t>(-1));
      if (branch_taken) {
          goto L_0881689C;
      }
      goto L_088167DC;
    }
L_088167DC:
    ctx.set_gpr(9, 0u + 0u);
    ctx.set_gpr(24, 2225u << 16u);
    ctx.set_gpr(13, rt.memory().aot_load8(ctx.gpr[10] + static_cast<std::uint32_t>(0)));
    goto L_088167E8;
L_088167E8:
    ctx.set_gpr(12, rt.memory().aot_load8(ctx.gpr[11] + static_cast<std::uint32_t>(0)));
    ctx.set_gpr(2, ctx.gpr[24] + static_cast<std::uint32_t>(-15));
    ctx.set_gpr(5, static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int8_t>(ctx.gpr[13]))));
    ctx.set_gpr(3, static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int8_t>(ctx.gpr[12]))));
    ctx.set_gpr(7, ctx.gpr[3] + ctx.gpr[2]);
    ctx.set_gpr(2, ctx.gpr[5] + ctx.gpr[2]);
    ctx.set_gpr(4, rt.memory().aot_load8(ctx.gpr[2] + static_cast<std::uint32_t>(0)));
    ctx.set_gpr(6, rt.memory().aot_load8(ctx.gpr[7] + static_cast<std::uint32_t>(0)));
    ctx.set_gpr(8, ctx.gpr[5] + static_cast<std::uint32_t>(32));
    ctx.set_gpr(4, ctx.gpr[4] & 1u);
    ctx.set_gpr(6, ctx.gpr[6] & 1u);
    ctx.set_gpr(2, ctx.gpr[3] + static_cast<std::uint32_t>(32));
    ctx.set_gpr(7, ctx.gpr[5] + 0u);
    if (ctx.gpr[4] != 0u) ctx.set_gpr(5, ctx.gpr[8]);
    ctx.set_gpr(4, ctx.gpr[3] + 0u);
    if (ctx.gpr[6] != 0u) ctx.set_gpr(3, ctx.gpr[2]);
    ctx.set_gpr(10, ctx.gpr[10] + static_cast<std::uint32_t>(1));
    { const bool branch_taken = ctx.gpr[5] != ctx.gpr[3];
    ctx.set_gpr(11, ctx.gpr[11] + static_cast<std::uint32_t>(1));
      if (branch_taken) {
          goto L_08816858;
      }
      goto L_08816834;
    }
L_08816834:
    if (ctx.gpr[9] == ctx.gpr[15]) {
    ctx.set_gpr(6, ctx.gpr[13] & 255u);
        goto L_0881685C;
    }
    goto L_0881683C;
L_0881683C:
    { const bool branch_taken = ctx.gpr[7] == 0u;
    ctx.set_gpr(9, ctx.gpr[9] + static_cast<std::uint32_t>(1));
      if (branch_taken) {
          goto L_08816858;
      }
      goto L_08816844;
    }
L_08816844:
    { const bool branch_taken = ctx.gpr[4] == 0u;
    ctx.set_gpr(6, ctx.gpr[13] & 255u);
      if (branch_taken) {
          goto L_0881685C;
      }
      goto L_0881684C;
    }
L_0881684C:
    { const bool branch_taken = ctx.gpr[14] != ctx.gpr[9];
    ctx.set_gpr(13, rt.memory().aot_load8(ctx.gpr[10] + static_cast<std::uint32_t>(0)));
      if (branch_taken) {
          goto L_088167E8;
      }
      goto L_08816854;
    }
L_08816854:
    ctx.set_gpr(12, rt.memory().aot_load8(ctx.gpr[11] + static_cast<std::uint32_t>(0)));
    goto L_08816858;
L_08816858:
    ctx.set_gpr(6, ctx.gpr[13] & 255u);
    goto L_0881685C;
L_0881685C:
    ctx.set_gpr(5, ctx.gpr[12] & 255u);
    ctx.set_gpr(2, ctx.gpr[24] + static_cast<std::uint32_t>(-15));
    ctx.set_gpr(7, ctx.gpr[5] + ctx.gpr[2]);
    ctx.set_gpr(2, ctx.gpr[6] + ctx.gpr[2]);
    ctx.set_gpr(3, rt.memory().aot_load8(ctx.gpr[2] + static_cast<std::uint32_t>(0)));
    ctx.set_gpr(4, rt.memory().aot_load8(ctx.gpr[7] + static_cast<std::uint32_t>(0)));
    ctx.set_gpr(2, ctx.gpr[5] + static_cast<std::uint32_t>(32));
    ctx.set_gpr(8, ctx.gpr[6] + static_cast<std::uint32_t>(32));
    ctx.set_gpr(3, ctx.gpr[3] & 1u);
    ctx.set_gpr(4, ctx.gpr[4] & 1u);
    if (ctx.gpr[3] != 0u) ctx.set_gpr(6, ctx.gpr[8]);
    if (ctx.gpr[4] != 0u) ctx.set_gpr(5, ctx.gpr[2]);
    jump_target = ctx.gpr[31];
    ctx.set_gpr(2, ctx.gpr[6] - ctx.gpr[5]);
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_08816894:
    jump_target = ctx.gpr[31];
    // nop
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_0881689C:
    ctx.set_gpr(13, rt.memory().aot_load8(ctx.gpr[10] + static_cast<std::uint32_t>(0)));
    ctx.set_gpr(12, rt.memory().aot_load8(ctx.gpr[11] + static_cast<std::uint32_t>(0)));
    ctx.set_gpr(24, 2225u << 16u);
    ctx.set_gpr(6, ctx.gpr[13] & 255u);
    ctx.set_gpr(5, ctx.gpr[12] & 255u);
    ctx.set_gpr(2, ctx.gpr[24] + static_cast<std::uint32_t>(-15));
    ctx.set_gpr(7, ctx.gpr[5] + ctx.gpr[2]);
    ctx.set_gpr(2, ctx.gpr[6] + ctx.gpr[2]);
    ctx.set_gpr(3, rt.memory().aot_load8(ctx.gpr[2] + static_cast<std::uint32_t>(0)));
    ctx.set_gpr(4, rt.memory().aot_load8(ctx.gpr[7] + static_cast<std::uint32_t>(0)));
    ctx.set_gpr(2, ctx.gpr[5] + static_cast<std::uint32_t>(32));
    ctx.set_gpr(8, ctx.gpr[6] + static_cast<std::uint32_t>(32));
    ctx.set_gpr(3, ctx.gpr[3] & 1u);
    ctx.set_gpr(4, ctx.gpr[4] & 1u);
    if (ctx.gpr[3] != 0u) ctx.set_gpr(6, ctx.gpr[8]);
    if (ctx.gpr[4] != 0u) ctx.set_gpr(5, ctx.gpr[2]);
    jump_target = ctx.gpr[31];
    ctx.set_gpr(2, ctx.gpr[6] - ctx.gpr[5]);
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_088168E4:
    ctx.set_gpr(2, ctx.gpr[4] & 3u);
    ctx.set_gpr(7, ctx.gpr[4] + 0u);
    { const bool branch_taken = ctx.gpr[2] != 0u;
    ctx.set_gpr(3, ctx.gpr[4] + 0u);
      if (branch_taken) {
          goto L_0881695C;
      }
      goto L_088168F4;
    }
L_088168F4:
    ctx.set_gpr(2, rt.memory().aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(0)));
    ctx.set_gpr(3, 65278u << 16u);
    ctx.set_gpr(8, ctx.gpr[3] | 65279u);
    ctx.set_gpr(4, ~(0u | ctx.gpr[2]));
    ctx.set_gpr(3, 32896u << 16u);
    ctx.set_gpr(2, ctx.gpr[2] + ctx.gpr[8]);
    ctx.set_gpr(2, ctx.gpr[2] & ctx.gpr[4]);
    ctx.set_gpr(3, ctx.gpr[3] | 32896u);
    ctx.set_gpr(2, ctx.gpr[2] & ctx.gpr[3]);
    { const bool branch_taken = ctx.gpr[2] != 0u;
    ctx.set_gpr(4, ctx.gpr[7] + 0u);
      if (branch_taken) {
          goto L_08816948;
      }
      goto L_08816920;
    }
L_08816920:
    ctx.set_gpr(9, ctx.gpr[8] + 0u);
    ctx.set_gpr(8, ctx.gpr[3] + 0u);
    ctx.set_gpr(4, ctx.gpr[4] + static_cast<std::uint32_t>(4));
    goto L_0881692C;
L_0881692C:
    ctx.set_gpr(2, rt.memory().aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(0)));
    ctx.set_gpr(3, ~(0u | ctx.gpr[2]));
    ctx.set_gpr(2, ctx.gpr[2] + ctx.gpr[9]);
    ctx.set_gpr(2, ctx.gpr[2] & ctx.gpr[3]);
    ctx.set_gpr(2, ctx.gpr[2] & ctx.gpr[8]);
    if (ctx.gpr[2] == 0u) {
    ctx.set_gpr(4, ctx.gpr[4] + static_cast<std::uint32_t>(4));
        goto L_0881692C;
    }
    goto L_08816948;
L_08816948:
    ctx.set_gpr(3, ctx.gpr[4] + 0u);
    ctx.set_gpr(2, static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int8_t>(rt.memory().aot_load8(ctx.gpr[3] + static_cast<std::uint32_t>(0))))));
    if (ctx.gpr[2] == 0u) {
    ctx.set_gpr(6, ctx.gpr[6] + static_cast<std::uint32_t>(-1));
        goto L_0881696C;
    }
    goto L_08816958;
L_08816958:
    ctx.set_gpr(3, ctx.gpr[3] + static_cast<std::uint32_t>(1));
    goto L_0881695C;
L_0881695C:
    ctx.set_gpr(2, static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int8_t>(rt.memory().aot_load8(ctx.gpr[3] + static_cast<std::uint32_t>(0))))));
    if (ctx.gpr[2] != 0u) {
    ctx.set_gpr(3, ctx.gpr[3] + static_cast<std::uint32_t>(1));
        goto L_0881695C;
    }
    goto L_08816968;
L_08816968:
    ctx.set_gpr(6, ctx.gpr[6] + static_cast<std::uint32_t>(-1));
    goto L_0881696C;
L_0881696C:
    ctx.set_gpr(2, 0u + static_cast<std::uint32_t>(-1));
    { const bool branch_taken = ctx.gpr[6] == ctx.gpr[2];
    // nop
      if (branch_taken) {
          goto L_088169A0;
      }
      goto L_08816978;
    }
L_08816978:
    ctx.set_gpr(2, static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int8_t>(rt.memory().aot_load8(ctx.gpr[5] + static_cast<std::uint32_t>(0))))));
    ctx.set_gpr(5, ctx.gpr[5] + static_cast<std::uint32_t>(1));
    rt.memory().aot_store8(ctx.gpr[3] + static_cast<std::uint32_t>(0), static_cast<std::uint8_t>(ctx.gpr[2]));
    { const bool branch_taken = ctx.gpr[2] == 0u;
    ctx.set_gpr(3, ctx.gpr[3] + static_cast<std::uint32_t>(1));
      if (branch_taken) {
          goto L_088169A0;
      }
      goto L_0881698C;
    }
L_0881698C:
    { const bool branch_taken = ctx.gpr[6] != 0u;
    ctx.set_gpr(6, ctx.gpr[6] + static_cast<std::uint32_t>(-1));
      if (branch_taken) {
          goto L_0881696C;
      }
      goto L_08816994;
    }
L_08816994:
    ctx.set_gpr(2, 0u + static_cast<std::uint32_t>(-1));
    { const bool branch_taken = ctx.gpr[6] != ctx.gpr[2];
    rt.memory().aot_store8(ctx.gpr[3] + static_cast<std::uint32_t>(0), static_cast<std::uint8_t>(0u));
      if (branch_taken) {
          goto L_08816978;
      }
      goto L_088169A0;
    }
L_088169A0:
    jump_target = ctx.gpr[31];
    ctx.set_gpr(2, ctx.gpr[7] + 0u);
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_088169A8:
    { const bool branch_taken = ctx.gpr[6] == 0u;
    ctx.set_gpr(7, ctx.gpr[6] + 0u);
      if (branch_taken) {
          goto L_08816A24;
      }
      goto L_088169B0;
    }
L_088169B0:
    ctx.set_gpr(2, ctx.gpr[4] | ctx.gpr[5]);
    ctx.set_gpr(2, ctx.gpr[2] & 3u);
    if (ctx.gpr[2] == 0u) {
    ctx.set_gpr(2, ctx.gpr[6] < static_cast<std::uint32_t>(4) ? 1u : 0u);
        goto L_088169F0;
    }
    goto L_088169C0;
L_088169C0:
    { const bool branch_taken = ctx.gpr[7] == 0u;
    ctx.set_gpr(9, ctx.gpr[7] + static_cast<std::uint32_t>(-1));
      if (branch_taken) {
          goto L_08816A2C;
      }
      goto L_088169C8;
    }
L_088169C8:
    ctx.set_gpr(6, rt.memory().aot_load8(ctx.gpr[5] + static_cast<std::uint32_t>(0)));
    ctx.set_gpr(2, static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int8_t>(rt.memory().aot_load8(ctx.gpr[4] + static_cast<std::uint32_t>(0))))));
    ctx.set_gpr(3, static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int8_t>(ctx.gpr[6]))));
    { const bool branch_taken = ctx.gpr[3] == ctx.gpr[2];
    // nop
      if (branch_taken) {
          goto L_08816A14;
      }
      goto L_088169DC;
    }
L_088169DC:
    ctx.set_gpr(3, rt.memory().aot_load8(ctx.gpr[4] + static_cast<std::uint32_t>(0)));
    goto L_088169E0;
L_088169E0:
    ctx.set_gpr(3, ctx.gpr[3] & 255u);
    ctx.set_gpr(2, ctx.gpr[6] & 255u);
    jump_target = ctx.gpr[31];
    ctx.set_gpr(2, ctx.gpr[3] - ctx.gpr[2]);
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_088169F0:
    ctx.set_gpr(9, ctx.gpr[4] + 0u);
    { const bool branch_taken = ctx.gpr[2] == 0u;
    ctx.set_gpr(8, ctx.gpr[5] + 0u);
      if (branch_taken) {
          goto L_08816A38;
      }
      goto L_088169FC;
    }
L_088169FC:
    ctx.set_gpr(4, ctx.gpr[9] + 0u);
    goto L_08816A00;
L_08816A00:
    ctx.set_gpr(5, ctx.gpr[8] + 0u);
    { const bool branch_taken = ctx.gpr[7] != 0u;
    ctx.set_gpr(9, ctx.gpr[7] + static_cast<std::uint32_t>(-1));
      if (branch_taken) {
          goto L_088169C8;
      }
      goto L_08816A0C;
    }
L_08816A0C:
    ctx.set_gpr(6, rt.memory().aot_load8(ctx.gpr[5] + static_cast<std::uint32_t>(0)));
    goto L_08816A30;
L_08816A14:
    { const bool branch_taken = ctx.gpr[9] == 0u;
    ctx.set_gpr(8, ctx.gpr[4] + 0u);
      if (branch_taken) {
          goto L_08816A24;
      }
      goto L_08816A1C;
    }
L_08816A1C:
    { const bool branch_taken = ctx.gpr[3] != 0u;
    ctx.set_gpr(10, 0u + 0u);
      if (branch_taken) {
          goto L_08816AD0;
      }
      goto L_08816A24;
    }
L_08816A24:
    jump_target = ctx.gpr[31];
    ctx.set_gpr(2, 0u + 0u);
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_08816A2C:
    ctx.set_gpr(6, rt.memory().aot_load8(ctx.gpr[5] + static_cast<std::uint32_t>(0)));
    goto L_08816A30;
L_08816A30:
    ctx.set_gpr(3, rt.memory().aot_load8(ctx.gpr[4] + static_cast<std::uint32_t>(0)));
    goto L_088169E0;
L_08816A38:
    ctx.set_gpr(4, rt.memory().aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(0)));
    ctx.set_gpr(2, rt.memory().aot_load32(ctx.gpr[5] + static_cast<std::uint32_t>(0)));
    if (ctx.gpr[4] != ctx.gpr[2]) {
    ctx.set_gpr(4, ctx.gpr[9] + 0u);
        goto L_08816A00;
    }
    goto L_08816A48;
L_08816A48:
    ctx.set_gpr(7, ctx.gpr[6] + static_cast<std::uint32_t>(-4));
    { const bool branch_taken = ctx.gpr[7] == 0u;
    ctx.set_gpr(3, 32896u << 16u);
      if (branch_taken) {
          goto L_08816A24;
      }
      goto L_08816A54;
    }
L_08816A54:
    ctx.set_gpr(2, 65278u << 16u);
    ctx.set_gpr(2, ctx.gpr[2] | 65279u);
    ctx.set_gpr(2, ctx.gpr[4] + ctx.gpr[2]);
    ctx.set_gpr(4, ~(0u | ctx.gpr[4]));
    ctx.set_gpr(2, ctx.gpr[2] & ctx.gpr[4]);
    ctx.set_gpr(3, ctx.gpr[3] | 32896u);
    ctx.set_gpr(2, ctx.gpr[2] & ctx.gpr[3]);
    { const bool branch_taken = ctx.gpr[2] != 0u;
    // nop
      if (branch_taken) {
          goto L_08816A24;
      }
      goto L_08816A78;
    }
L_08816A78:
    ctx.set_gpr(2, ctx.gpr[7] < static_cast<std::uint32_t>(4) ? 1u : 0u);
    goto L_08816A7C;
L_08816A7C:
    ctx.set_gpr(9, ctx.gpr[9] + static_cast<std::uint32_t>(4));
    { const bool branch_taken = ctx.gpr[2] != 0u;
    ctx.set_gpr(8, ctx.gpr[8] + static_cast<std::uint32_t>(4));
      if (branch_taken) {
          goto L_088169FC;
      }
      goto L_08816A88;
    }
L_08816A88:
    ctx.set_gpr(5, rt.memory().aot_load32(ctx.gpr[8] + static_cast<std::uint32_t>(0)));
    ctx.set_gpr(3, 65278u << 16u);
    ctx.set_gpr(3, ctx.gpr[3] | 65279u);
    ctx.set_gpr(6, rt.memory().aot_load32(ctx.gpr[9] + static_cast<std::uint32_t>(0)));
    ctx.set_gpr(3, ctx.gpr[5] + ctx.gpr[3]);
    ctx.set_gpr(4, ~(0u | ctx.gpr[5]));
    ctx.set_gpr(2, 32896u << 16u);
    ctx.set_gpr(4, ctx.gpr[4] & ctx.gpr[3]);
    ctx.set_gpr(2, ctx.gpr[2] | 32896u);
    { const bool branch_taken = ctx.gpr[5] != ctx.gpr[6];
    ctx.set_gpr(4, ctx.gpr[4] & ctx.gpr[2]);
      if (branch_taken) {
          goto L_088169FC;
      }
      goto L_08816AB4;
    }
L_08816AB4:
    ctx.set_gpr(7, ctx.gpr[7] + static_cast<std::uint32_t>(-4));
    { const bool branch_taken = ctx.gpr[7] == 0u;
    // nop
      if (branch_taken) {
          goto L_08816A24;
      }
      goto L_08816AC0;
    }
L_08816AC0:
    if (ctx.gpr[4] == 0u) {
    ctx.set_gpr(2, ctx.gpr[7] < static_cast<std::uint32_t>(4) ? 1u : 0u);
        goto L_08816A7C;
    }
    goto L_08816AC8;
L_08816AC8:
    jump_target = ctx.gpr[31];
    ctx.set_gpr(2, 0u + 0u);
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_08816AD0:
    ctx.set_gpr(11, ctx.gpr[4] + ctx.gpr[9]);
    ctx.set_gpr(8, ctx.gpr[8] + static_cast<std::uint32_t>(1));
    goto L_08816AD8;
L_08816AD8:
    { const bool branch_taken = ctx.gpr[10] == ctx.gpr[9];
    ctx.set_gpr(5, ctx.gpr[5] + static_cast<std::uint32_t>(1));
      if (branch_taken) {
          goto L_08816B10;
      }
      goto L_08816AE0;
    }
L_08816AE0:
    ctx.set_gpr(3, rt.memory().aot_load8(ctx.gpr[8] + static_cast<std::uint32_t>(0)));
    ctx.set_gpr(6, rt.memory().aot_load8(ctx.gpr[5] + static_cast<std::uint32_t>(0)));
    ctx.set_gpr(2, static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int8_t>(ctx.gpr[3]))));
    ctx.set_gpr(7, static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int8_t>(ctx.gpr[6]))));
    { const bool branch_taken = ctx.gpr[7] != ctx.gpr[2];
    ctx.set_gpr(10, ctx.gpr[10] + static_cast<std::uint32_t>(1));
      if (branch_taken) {
          goto L_088169E0;
      }
      goto L_08816AF8;
    }
L_08816AF8:
    { const bool branch_taken = ctx.gpr[8] == ctx.gpr[11];
    // nop
      if (branch_taken) {
          goto L_08816A24;
      }
      goto L_08816B00;
    }
L_08816B00:
    { const bool branch_taken = ctx.gpr[7] != 0u;
    ctx.set_gpr(8, ctx.gpr[8] + static_cast<std::uint32_t>(1));
      if (branch_taken) {
          goto L_08816AD8;
      }
      goto L_08816B08;
    }
L_08816B08:
    jump_target = ctx.gpr[31];
    ctx.set_gpr(2, 0u + 0u);
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_08816B10:
    ctx.set_gpr(3, rt.memory().aot_load8(ctx.gpr[8] + static_cast<std::uint32_t>(0)));
    ctx.set_gpr(6, rt.memory().aot_load8(ctx.gpr[5] + static_cast<std::uint32_t>(0)));
    ctx.set_gpr(3, ctx.gpr[3] & 255u);
    ctx.set_gpr(2, ctx.gpr[6] & 255u);
    jump_target = ctx.gpr[31];
    ctx.set_gpr(2, ctx.gpr[3] - ctx.gpr[2]);
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_08816B28:
    ctx.set_gpr(2, ctx.gpr[6] < static_cast<std::uint32_t>(4) ? 1u : 0u);
    { const bool branch_taken = ctx.gpr[2] != 0u;
    ctx.set_gpr(3, ctx.gpr[4] + 0u);
      if (branch_taken) {
          goto L_08816B84;
      }
      goto L_08816B34;
    }
L_08816B34:
    ctx.set_gpr(11, ctx.gpr[6] & 3u);
    ctx.set_gpr(6, ctx.gpr[6] - ctx.gpr[11]);
    goto L_08816B3C;
L_08816B3C:
    ctx.set_gpr(2, rt.memory().aot_load8(ctx.gpr[5] + static_cast<std::uint32_t>(0)));
    ctx.set_gpr(8, rt.memory().aot_load8(ctx.gpr[5] + static_cast<std::uint32_t>(1)));
    ctx.set_gpr(9, rt.memory().aot_load8(ctx.gpr[5] + static_cast<std::uint32_t>(2)));
    ctx.set_gpr(10, rt.memory().aot_load8(ctx.gpr[5] + static_cast<std::uint32_t>(3)));
    ctx.set_gpr(7, ctx.gpr[6] + static_cast<std::uint32_t>(-4));
    rt.memory().aot_store8(ctx.gpr[3] + static_cast<std::uint32_t>(0), static_cast<std::uint8_t>(ctx.gpr[2]));
    { const bool branch_taken = ctx.gpr[2] == 0u;
    ctx.set_gpr(5, ctx.gpr[5] + static_cast<std::uint32_t>(4));
      if (branch_taken) {
          goto L_08816BF4;
      }
      goto L_08816B5C;
    }
L_08816B5C:
    ctx.set_gpr(6, ctx.gpr[7] + 0u);
    { const bool branch_taken = ctx.gpr[8] == 0u;
    rt.memory().aot_store8(ctx.gpr[3] + static_cast<std::uint32_t>(1), static_cast<std::uint8_t>(ctx.gpr[8]));
      if (branch_taken) {
          goto L_08816BFC;
      }
      goto L_08816B68;
    }
L_08816B68:
    { const bool branch_taken = ctx.gpr[9] == 0u;
    rt.memory().aot_store8(ctx.gpr[3] + static_cast<std::uint32_t>(2), static_cast<std::uint8_t>(ctx.gpr[9]));
      if (branch_taken) {
          goto L_08816C04;
      }
      goto L_08816B70;
    }
L_08816B70:
    { const bool branch_taken = ctx.gpr[10] == 0u;
    rt.memory().aot_store8(ctx.gpr[3] + static_cast<std::uint32_t>(3), static_cast<std::uint8_t>(ctx.gpr[10]));
      if (branch_taken) {
          goto L_08816C0C;
      }
      goto L_08816B78;
    }
L_08816B78:
    { const bool branch_taken = ctx.gpr[7] != 0u;
    ctx.set_gpr(3, ctx.gpr[3] + static_cast<std::uint32_t>(4));
      if (branch_taken) {
          goto L_08816B3C;
      }
      goto L_08816B80;
    }
L_08816B80:
    ctx.set_gpr(6, ctx.gpr[11] + 0u);
    goto L_08816B84;
L_08816B84:
    ctx.set_gpr(6, ctx.gpr[3] + ctx.gpr[6]);
    { const bool branch_taken = ctx.gpr[3] == ctx.gpr[6];
    ctx.set_gpr(7, ctx.gpr[3] + static_cast<std::uint32_t>(1));
      if (branch_taken) {
          goto L_08816BC0;
      }
      goto L_08816B90;
    }
L_08816B90:
    ctx.set_gpr(2, rt.memory().aot_load8(ctx.gpr[5] + static_cast<std::uint32_t>(0)));
    ctx.set_gpr(5, ctx.gpr[5] + static_cast<std::uint32_t>(1));
    rt.memory().aot_store8(ctx.gpr[3] + static_cast<std::uint32_t>(0), static_cast<std::uint8_t>(ctx.gpr[2]));
    { const bool branch_taken = ctx.gpr[2] != 0u;
    ctx.set_gpr(3, ctx.gpr[7] + 0u);
      if (branch_taken) {
          goto L_08816BC8;
      }
      goto L_08816BA4;
    }
L_08816BA4:
    { const bool branch_taken = ctx.gpr[6] == ctx.gpr[3];
    // nop
      if (branch_taken) {
          goto L_08816BC0;
      }
      goto L_08816BAC;
    }
L_08816BAC:
    ctx.set_gpr(2, ctx.gpr[6] + 0u);
    rt.memory().aot_store8(ctx.gpr[3] + static_cast<std::uint32_t>(0), static_cast<std::uint8_t>(0u));
    goto L_08816BB4;
L_08816BB4:
    ctx.set_gpr(3, ctx.gpr[3] + static_cast<std::uint32_t>(1));
    if (ctx.gpr[2] != ctx.gpr[3]) {
    rt.memory().aot_store8(ctx.gpr[3] + static_cast<std::uint32_t>(0), static_cast<std::uint8_t>(0u));
        goto L_08816BB4;
    }
    goto L_08816BC0;
L_08816BC0:
    jump_target = ctx.gpr[31];
    ctx.set_gpr(2, ctx.gpr[4] + 0u);
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_08816BC8:
    ctx.set_gpr(8, ctx.gpr[7] - ctx.gpr[6]);
    goto L_08816BCC;
L_08816BCC:
    ctx.set_gpr(2, ctx.gpr[7] - ctx.gpr[8]);
    { const bool branch_taken = ctx.gpr[3] == ctx.gpr[2];
    // nop
      if (branch_taken) {
          goto L_08816BC0;
      }
      goto L_08816BD8;
    }
L_08816BD8:
    ctx.set_gpr(2, rt.memory().aot_load8(ctx.gpr[5] + static_cast<std::uint32_t>(0)));
    ctx.set_gpr(5, ctx.gpr[5] + static_cast<std::uint32_t>(1));
    rt.memory().aot_store8(ctx.gpr[3] + static_cast<std::uint32_t>(0), static_cast<std::uint8_t>(ctx.gpr[2]));
    { const bool branch_taken = ctx.gpr[2] != 0u;
    ctx.set_gpr(3, ctx.gpr[3] + static_cast<std::uint32_t>(1));
      if (branch_taken) {
          goto L_08816BCC;
      }
      goto L_08816BEC;
    }
L_08816BEC:
    // nop
    goto L_08816BA4;
L_08816BF4:
    ctx.set_gpr(7, ctx.gpr[6] + static_cast<std::uint32_t>(-3));
    ctx.set_gpr(3, ctx.gpr[3] + static_cast<std::uint32_t>(-1));
    goto L_08816BFC;
L_08816BFC:
    ctx.set_gpr(7, ctx.gpr[7] + static_cast<std::uint32_t>(1));
    ctx.set_gpr(3, ctx.gpr[3] + static_cast<std::uint32_t>(-1));
    goto L_08816C04;
L_08816C04:
    ctx.set_gpr(7, ctx.gpr[7] + static_cast<std::uint32_t>(1));
    ctx.set_gpr(3, ctx.gpr[3] + static_cast<std::uint32_t>(-1));
    goto L_08816C0C;
L_08816C0C:
    ctx.set_gpr(5, ctx.gpr[7] + ctx.gpr[11]);
    { const bool branch_taken = ctx.gpr[5] != 0u;
    ctx.set_gpr(3, ctx.gpr[3] + static_cast<std::uint32_t>(4));
      if (branch_taken) {
          goto L_08816CA4;
      }
      goto L_08816C18;
    }
L_08816C18:
    ctx.set_gpr(2, ctx.gpr[5] < static_cast<std::uint32_t>(16) ? 1u : 0u);
    goto L_08816C1C;
L_08816C1C:
    { const bool branch_taken = ctx.gpr[2] != 0u;
    ctx.set_gpr(2, ctx.gpr[5] < static_cast<std::uint32_t>(8) ? 1u : 0u);
      if (branch_taken) {
          goto L_08816C48;
      }
      goto L_08816C24;
    }
L_08816C24:
    ctx.set_gpr(5, ctx.gpr[5] + static_cast<std::uint32_t>(-16));
    ctx.set_gpr(3, ctx.gpr[3] + static_cast<std::uint32_t>(16));
    ctx.set_gpr(2, ctx.gpr[5] < static_cast<std::uint32_t>(16) ? 1u : 0u);
    rt.memory().aot_store32(ctx.gpr[3] + static_cast<std::uint32_t>(-16), 0u);
    rt.memory().aot_store32(ctx.gpr[3] + static_cast<std::uint32_t>(-12), 0u);
    rt.memory().aot_store32(ctx.gpr[3] + static_cast<std::uint32_t>(-8), 0u);
    { const bool branch_taken = ctx.gpr[2] == 0u;
    rt.memory().aot_store32(ctx.gpr[3] + static_cast<std::uint32_t>(-4), 0u);
      if (branch_taken) {
          goto L_08816C24;
      }
      goto L_08816C44;
    }
L_08816C44:
    ctx.set_gpr(2, ctx.gpr[5] < static_cast<std::uint32_t>(8) ? 1u : 0u);
    goto L_08816C48;
L_08816C48:
    { const bool branch_taken = ctx.gpr[2] != 0u;
    ctx.set_gpr(2, ctx.gpr[5] < static_cast<std::uint32_t>(4) ? 1u : 0u);
      if (branch_taken) {
          goto L_08816C64;
      }
      goto L_08816C50;
    }
L_08816C50:
    rt.memory().aot_store32(ctx.gpr[3] + static_cast<std::uint32_t>(0), 0u);
    ctx.set_gpr(5, ctx.gpr[5] + static_cast<std::uint32_t>(-8));
    rt.memory().aot_store32(ctx.gpr[3] + static_cast<std::uint32_t>(4), 0u);
    ctx.set_gpr(3, ctx.gpr[3] + static_cast<std::uint32_t>(8));
    ctx.set_gpr(2, ctx.gpr[5] < static_cast<std::uint32_t>(4) ? 1u : 0u);
    goto L_08816C64;
L_08816C64:
    { const bool branch_taken = ctx.gpr[2] != 0u;
    ctx.set_gpr(2, ctx.gpr[5] < static_cast<std::uint32_t>(2) ? 1u : 0u);
      if (branch_taken) {
          goto L_08816C7C;
      }
      goto L_08816C6C;
    }
L_08816C6C:
    rt.memory().aot_store32(ctx.gpr[3] + static_cast<std::uint32_t>(0), 0u);
    ctx.set_gpr(5, ctx.gpr[5] + static_cast<std::uint32_t>(-4));
    ctx.set_gpr(3, ctx.gpr[3] + static_cast<std::uint32_t>(4));
    ctx.set_gpr(2, ctx.gpr[5] < static_cast<std::uint32_t>(2) ? 1u : 0u);
    goto L_08816C7C;
L_08816C7C:
    { const bool branch_taken = ctx.gpr[2] != 0u;
    // nop
      if (branch_taken) {
          goto L_08816C90;
      }
      goto L_08816C84;
    }
L_08816C84:
    rt.memory().aot_store16(ctx.gpr[3] + static_cast<std::uint32_t>(0), static_cast<std::uint16_t>(0u));
    ctx.set_gpr(5, ctx.gpr[5] + static_cast<std::uint32_t>(-2));
    ctx.set_gpr(3, ctx.gpr[3] + static_cast<std::uint32_t>(2));
    goto L_08816C90;
L_08816C90:
    { const bool branch_taken = ctx.gpr[5] == 0u;
    // nop
      if (branch_taken) {
          goto L_08816BC0;
      }
      goto L_08816C98;
    }
L_08816C98:
    ctx.set_gpr(2, ctx.gpr[4] + 0u);
    jump_target = ctx.gpr[31];
    rt.memory().aot_store8(ctx.gpr[3] + static_cast<std::uint32_t>(0), static_cast<std::uint8_t>(0u));
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_08816CA4:
    ctx.set_gpr(2, ctx.gpr[3] & 3u);
    if (ctx.gpr[2] == 0u) {
    ctx.set_gpr(2, ctx.gpr[5] < static_cast<std::uint32_t>(16) ? 1u : 0u);
        goto L_08816C1C;
    }
    goto L_08816CB0;
L_08816CB0:
    ctx.set_gpr(2, ctx.gpr[5] + 0u);
    ctx.set_gpr(6, ctx.gpr[3] + ctx.gpr[5]);
    rt.memory().aot_store8(ctx.gpr[3] + static_cast<std::uint32_t>(0), static_cast<std::uint8_t>(0u));
    goto L_08816CBC;
L_08816CBC:
    ctx.set_gpr(3, ctx.gpr[3] + static_cast<std::uint32_t>(1));
    ctx.set_gpr(5, ctx.gpr[3] & 3u);
    { const bool branch_taken = ctx.gpr[6] == ctx.gpr[3];
    ctx.set_gpr(2, ctx.gpr[2] + static_cast<std::uint32_t>(-1));
      if (branch_taken) {
          goto L_08816CD4;
      }
      goto L_08816CCC;
    }
L_08816CCC:
    if (ctx.gpr[5] != 0u) {
    rt.memory().aot_store8(ctx.gpr[3] + static_cast<std::uint32_t>(0), static_cast<std::uint8_t>(0u));
        goto L_08816CBC;
    }
    goto L_08816CD4;
L_08816CD4:
    ctx.set_gpr(5, ctx.gpr[2] + 0u);
    goto L_08816C18;
L_08816CDC:
    ctx.set_gpr(29, ctx.gpr[29] + static_cast<std::uint32_t>(-16));
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(4), ctx.gpr[17]);
    ctx.set_gpr(2, ctx.gpr[4] + 0u);
    ctx.set_gpr(17, 0u + 0u);
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(0), ctx.gpr[16]);
    ctx.set_gpr(16, ctx.gpr[5] + 0u);
    { const bool branch_taken = ctx.gpr[5] != 0u;
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(8), ctx.gpr[31]);
      if (branch_taken) {
          goto L_08816D08;
      }
      goto L_08816CFC;
    }
L_08816CFC:
    ctx.set_gpr(31, rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(8)));
    goto L_08816D34;
L_08816D04:
    ctx.set_gpr(2, ctx.gpr[2] + static_cast<std::uint32_t>(1));
    goto L_08816D08;
L_08816D08:
    ctx.set_gpr(4, ctx.gpr[2] + 0u);
    ctx.set_gpr(31, 0x08816D14u);
    ctx.set_gpr(5, ctx.gpr[16] + 0u);
    goto L_088164FC;
L_08816D14:
    if (ctx.gpr[2] != 0u) {
    ctx.set_gpr(17, ctx.gpr[2] + 0u);
        goto L_08816D04;
    }
    goto L_08816D1C;
L_08816D1C:
    ctx.set_gpr(2, ctx.gpr[17] + 0u);
    ctx.set_gpr(31, rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(8)));
    ctx.set_gpr(17, rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(4)));
    ctx.set_gpr(16, rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(0)));
    jump_target = ctx.gpr[31];
    ctx.set_gpr(29, ctx.gpr[29] + static_cast<std::uint32_t>(16));
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_08816D34:
    ctx.set_gpr(17, rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(4)));
    ctx.set_gpr(16, rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(0)));
    ctx.set_gpr(29, ctx.gpr[29] + static_cast<std::uint32_t>(16));
    goto L_088164FC;
L_08816D44:
    ctx.set_gpr(2, rt.memory().aot_load8(ctx.gpr[4] + static_cast<std::uint32_t>(0)));
    if (ctx.gpr[2] == 0u) {
    ctx.set_gpr(2, static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int8_t>(rt.memory().aot_load8(ctx.gpr[5] + static_cast<std::uint32_t>(0))))));
        goto L_08816DA4;
    }
    goto L_08816D50;
L_08816D50:
    ctx.set_gpr(8, static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int8_t>(rt.memory().aot_load8(ctx.gpr[5] + static_cast<std::uint32_t>(0))))));
    { const bool branch_taken = ctx.gpr[8] == 0u;
    // nop
      if (branch_taken) {
          goto L_08816D9C;
      }
      goto L_08816D5C;
    }
L_08816D5C:
    ctx.set_gpr(2, static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int8_t>(ctx.gpr[2]))));
    goto L_08816D60;
L_08816D60:
    { const bool branch_taken = ctx.gpr[2] != ctx.gpr[8];
    ctx.set_gpr(3, 0u + 0u);
      if (branch_taken) {
          goto L_08816D88;
      }
      goto L_08816D68;
    }
L_08816D68:
    ctx.set_gpr(3, ctx.gpr[3] + static_cast<std::uint32_t>(1));
    goto L_08816D6C;
L_08816D6C:
    ctx.set_gpr(2, ctx.gpr[3] + ctx.gpr[5]);
    ctx.set_gpr(6, static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int8_t>(rt.memory().aot_load8(ctx.gpr[2] + static_cast<std::uint32_t>(0))))));
    { const bool branch_taken = ctx.gpr[6] == 0u;
    ctx.set_gpr(7, ctx.gpr[4] + ctx.gpr[3]);
      if (branch_taken) {
          goto L_08816D9C;
      }
      goto L_08816D7C;
    }
L_08816D7C:
    ctx.set_gpr(2, static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int8_t>(rt.memory().aot_load8(ctx.gpr[7] + static_cast<std::uint32_t>(0))))));
    if (ctx.gpr[2] == ctx.gpr[6]) {
    ctx.set_gpr(3, ctx.gpr[3] + static_cast<std::uint32_t>(1));
        goto L_08816D6C;
    }
    goto L_08816D88;
L_08816D88:
    ctx.set_gpr(4, ctx.gpr[4] + static_cast<std::uint32_t>(1));
    ctx.set_gpr(2, rt.memory().aot_load8(ctx.gpr[4] + static_cast<std::uint32_t>(0)));
    if (ctx.gpr[2] != 0u) {
    ctx.set_gpr(2, static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int8_t>(ctx.gpr[2]))));
        goto L_08816D60;
    }
    goto L_08816D98;
L_08816D98:
    ctx.set_gpr(4, 0u + 0u);
    goto L_08816D9C;
L_08816D9C:
    jump_target = ctx.gpr[31];
    ctx.set_gpr(2, ctx.gpr[4] + 0u);
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_08816DA4:
    if (ctx.gpr[2] != 0u) {
    ctx.set_gpr(4, 0u + 0u);
        goto L_08816D9C;
    }
    goto L_08816DAC;
L_08816DAC:
    jump_target = ctx.gpr[31];
    ctx.set_gpr(2, ctx.gpr[4] + 0u);
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_08816DB4:
    ctx.set_gpr(29, ctx.gpr[29] + static_cast<std::uint32_t>(-128));
    ctx.set_gpr(2, 0u + 0u);
    ctx.set_gpr(3, 0u + 0u);
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(100), ctx.gpr[21]);
    ctx.set_gpr(9, ctx.gpr[5] + 0u);
    ctx.set_gpr(21, ctx.gpr[4] + 0u);
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(116), ctx.gpr[31]);
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(112), ctx.gpr[30]);
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(108), ctx.gpr[23]);
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(104), ctx.gpr[22]);
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(96), ctx.gpr[20]);
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(92), ctx.gpr[19]);
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(88), ctx.gpr[18]);
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(84), ctx.gpr[17]);
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(80), ctx.gpr[16]);
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(72), ctx.gpr[6]);
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(64), ctx.gpr[2]);
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(68), ctx.gpr[3]);
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(20), ctx.gpr[5]);
    goto L_08816E00;
L_08816E00:
    ctx.set_gpr(3, rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(20)));
    ctx.set_gpr(6, rt.memory().aot_load8(ctx.gpr[3] + static_cast<std::uint32_t>(0)));
    ctx.set_gpr(3, static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int8_t>(ctx.gpr[6]))));
    ctx.set_gpr(2, ctx.gpr[3] < static_cast<std::uint32_t>(46) ? 1u : 0u);
    if (ctx.gpr[2] == 0u) {
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(52), 0u);
        goto L_08816E3C;
    }
    goto L_08816E18;
L_08816E18:
    ctx.set_gpr(2, ctx.gpr[3] << 2u);
    ctx.set_gpr(3, 2225u << 16u);
    ctx.set_gpr(3, ctx.gpr[3] + static_cast<std::uint32_t>(1316));
    ctx.set_gpr(2, ctx.gpr[2] + ctx.gpr[3]);
    ctx.set_gpr(4, rt.memory().aot_load32(ctx.gpr[2] + static_cast<std::uint32_t>(0)));
    jump_target = ctx.gpr[4];
    // nop
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_08816E34:
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(52), 0u);
    ctx.set_gpr(3, static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int8_t>(ctx.gpr[6]))));
    goto L_08816E3C;
L_08816E3C:
    ctx.set_gpr(2, 0u + static_cast<std::uint32_t>(48));
    ctx.set_gpr(5, rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(20)));
    { const bool branch_taken = ctx.gpr[3] == ctx.gpr[2];
    ctx.set_gpr(10, 0u + 0u);
      if (branch_taken) {
          goto L_08816F10;
      }
      goto L_08816E4C;
    }
L_08816E4C:
    ctx.set_gpr(4, static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int8_t>(ctx.gpr[6]))));
    ctx.set_gpr(2, static_cast<std::int32_t>(ctx.gpr[4]) < 48 ? 1u : 0u);
    { const bool branch_taken = ctx.gpr[2] == 0u;
    ctx.set_gpr(2, static_cast<std::int32_t>(ctx.gpr[4]) < 58 ? 1u : 0u);
      if (branch_taken) {
          goto L_08816F50;
      }
      goto L_08816E5C;
    }
L_08816E5C:
    ctx.set_gpr(20, 0u + 0u);
    goto L_08816E60;
L_08816E60:
    ctx.set_gpr(22, 0u + 0u);
    ctx.set_gpr(6, 0u + 0u);
    goto L_08816E68;
L_08816E68:
    ctx.set_gpr(2, 0u + static_cast<std::uint32_t>(46));
    { const bool branch_taken = ctx.gpr[4] == ctx.gpr[2];
    ctx.set_gpr(23, ctx.gpr[5] + 0u);
      if (branch_taken) {
          goto L_08817748;
      }
      goto L_08816E74;
    }
L_08816E74:
    ctx.set_gpr(19, ctx.gpr[6] + 0u);
    ctx.set_gpr(8, 0u + 0u);
    ctx.set_gpr(12, 0u + 0u);
    goto L_08816E80;
L_08816E80:
    ctx.set_gpr(2, 0u + static_cast<std::uint32_t>(101));
    goto L_08816E84;
L_08816E84:
    { const bool branch_taken = ctx.gpr[4] == ctx.gpr[2];
    ctx.set_gpr(2, 0u + static_cast<std::uint32_t>(69));
      if (branch_taken) {
          goto L_0881702C;
      }
      goto L_08816E8C;
    }
L_08816E8C:
    { const bool branch_taken = ctx.gpr[4] == ctx.gpr[2];
    ctx.set_gpr(3, 0u + 0u);
      if (branch_taken) {
          goto L_0881702C;
      }
      goto L_08816E94;
    }
L_08816E94:
    { const bool branch_taken = ctx.gpr[19] != 0u;
    ctx.set_gpr(4, ctx.gpr[22] + 0u);
      if (branch_taken) {
          goto L_088170C4;
      }
      goto L_08816E9C;
    }
L_08816E9C:
    ctx.set_gpr(2, ctx.gpr[8] | ctx.gpr[10]);
    if (ctx.gpr[2] == 0u) {
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(20), ctx.gpr[9]);
        goto L_08816EA8;
    }
    goto L_08816EA8;
L_08816EA8:
    ctx.set_gpr(7, rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(72)));
    goto L_08816EAC;
L_08816EAC:
    { const bool branch_taken = ctx.gpr[7] == 0u;
    ctx.set_gpr(2, rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(20)));
      if (branch_taken) {
          goto L_08816EB8;
      }
      goto L_08816EB4;
    }
L_08816EB4:
    rt.memory().aot_store32(ctx.gpr[7] + static_cast<std::uint32_t>(0), ctx.gpr[2]);
    goto L_08816EB8;
L_08816EB8:
    ctx.set_gpr(3, rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(52)));
    { const bool branch_taken = ctx.gpr[3] == 0u;
    ctx.set_gpr(4, rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(64)));
      if (branch_taken) {
          goto L_08816FF0;
      }
      goto L_08816EC4;
    }
L_08816EC4:
    ctx.set_gpr(6, rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(64)));
    ctx.set_gpr(7, rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(68)));
    ctx.set_gpr(2, 32768u << 16u);
    ctx.set_gpr(31, rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(116)));
    ctx.set_gpr(30, rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(112)));
    ctx.set_gpr(23, rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(108)));
    ctx.set_gpr(22, rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(104)));
    ctx.set_gpr(21, rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(100)));
    ctx.set_gpr(20, rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(96)));
    ctx.set_gpr(19, rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(92)));
    ctx.set_gpr(18, rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(88)));
    ctx.set_gpr(17, rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(84)));
    ctx.set_gpr(16, rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(80)));
    ctx.set_gpr(5, ctx.gpr[7] ^ ctx.gpr[2]);
    ctx.set_gpr(4, ctx.gpr[6] + 0u);
    ctx.set_gpr(2, ctx.gpr[4] + 0u);
    ctx.set_gpr(3, ctx.gpr[5] + 0u);
    jump_target = ctx.gpr[31];
    ctx.set_gpr(29, ctx.gpr[29] + static_cast<std::uint32_t>(128));
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_08816F10:
    ctx.set_gpr(7, rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(20)));
    ctx.set_gpr(2, 0u + static_cast<std::uint32_t>(48));
    goto L_08816F18;
L_08816F18:
    ctx.set_gpr(7, ctx.gpr[7] + static_cast<std::uint32_t>(1));
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(20), ctx.gpr[7]);
    ctx.set_gpr(6, rt.memory().aot_load8(ctx.gpr[7] + static_cast<std::uint32_t>(0)));
    ctx.set_gpr(3, static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int8_t>(ctx.gpr[6]))));
    if (ctx.gpr[3] == ctx.gpr[2]) {
    ctx.set_gpr(7, rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(20)));
        goto L_08816F18;
    }
    goto L_08816F30;
L_08816F30:
    if (ctx.gpr[3] == 0u) {
    ctx.set_gpr(7, rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(72)));
        goto L_08816EAC;
    }
    goto L_08816F38;
L_08816F38:
    ctx.set_gpr(4, static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int8_t>(ctx.gpr[6]))));
    ctx.set_gpr(2, static_cast<std::int32_t>(ctx.gpr[4]) < 48 ? 1u : 0u);
    ctx.set_gpr(5, ctx.gpr[7] + 0u);
    { const bool branch_taken = ctx.gpr[2] != 0u;
    ctx.set_gpr(10, 0u + static_cast<std::uint32_t>(1));
      if (branch_taken) {
          goto L_08816E5C;
      }
      goto L_08816F4C;
    }
L_08816F4C:
    ctx.set_gpr(2, static_cast<std::int32_t>(ctx.gpr[4]) < 58 ? 1u : 0u);
    goto L_08816F50;
L_08816F50:
    { const bool branch_taken = ctx.gpr[2] == 0u;
    ctx.set_gpr(20, 0u + 0u);
      if (branch_taken) {
          goto L_08816E60;
      }
      goto L_08816F58;
    }
L_08816F58:
    ctx.set_gpr(6, 0u + 0u);
    ctx.set_gpr(22, 0u + 0u);
    ctx.set_gpr(3, ctx.gpr[22] << 3u);
    goto L_08816F64;
L_08816F64:
    ctx.set_gpr(2, ctx.gpr[22] << 1u);
    ctx.set_gpr(2, ctx.gpr[2] + ctx.gpr[3]);
    ctx.set_gpr(2, ctx.gpr[2] + ctx.gpr[4]);
    ctx.set_gpr(22, ctx.gpr[2] + static_cast<std::uint32_t>(-48));
    goto L_08816F74;
L_08816F74:
    ctx.set_gpr(2, rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(20)));
    goto L_08816F78;
L_08816F78:
    ctx.set_gpr(2, ctx.gpr[2] + static_cast<std::uint32_t>(1));
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(20), ctx.gpr[2]);
    ctx.set_gpr(4, static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int8_t>(rt.memory().aot_load8(ctx.gpr[2] + static_cast<std::uint32_t>(0))))));
    ctx.set_gpr(2, static_cast<std::int32_t>(ctx.gpr[4]) < 48 ? 1u : 0u);
    { const bool branch_taken = ctx.gpr[2] != 0u;
    ctx.set_gpr(6, ctx.gpr[6] + static_cast<std::uint32_t>(1));
      if (branch_taken) {
          goto L_08816E68;
      }
      goto L_08816F90;
    }
L_08816F90:
    ctx.set_gpr(2, static_cast<std::int32_t>(ctx.gpr[4]) < 58 ? 1u : 0u);
    { const bool branch_taken = ctx.gpr[2] == 0u;
    ctx.set_gpr(2, static_cast<std::int32_t>(ctx.gpr[6]) < 9 ? 1u : 0u);
      if (branch_taken) {
          goto L_08816E68;
      }
      goto L_08816F9C;
    }
L_08816F9C:
    { const bool branch_taken = ctx.gpr[2] != 0u;
    ctx.set_gpr(3, ctx.gpr[22] << 3u);
      if (branch_taken) {
          goto L_08816F64;
      }
      goto L_08816FA4;
    }
L_08816FA4:
    ctx.set_gpr(2, static_cast<std::int32_t>(ctx.gpr[6]) < 16 ? 1u : 0u);
    { const bool branch_taken = ctx.gpr[2] == 0u;
    ctx.set_gpr(2, rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(20)));
      if (branch_taken) {
          goto L_08816F78;
      }
      goto L_08816FB0;
    }
L_08816FB0:
    ctx.set_gpr(3, ctx.gpr[20] << 3u);
    ctx.set_gpr(2, ctx.gpr[20] << 1u);
    ctx.set_gpr(2, ctx.gpr[2] + ctx.gpr[3]);
    ctx.set_gpr(2, ctx.gpr[2] + ctx.gpr[4]);
    ctx.set_gpr(20, ctx.gpr[2] + static_cast<std::uint32_t>(-48));
    goto L_08816F74;
L_08816FC8:
    ctx.set_gpr(4, 0u + static_cast<std::uint32_t>(1));
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(52), ctx.gpr[4]);
    goto L_08816FD0;
L_08816FD0:
    ctx.set_gpr(5, rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(20)));
    ctx.set_gpr(5, ctx.gpr[5] + static_cast<std::uint32_t>(1));
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(20), ctx.gpr[5]);
    ctx.set_gpr(6, rt.memory().aot_load8(ctx.gpr[5] + static_cast<std::uint32_t>(0)));
    { const bool branch_taken = ctx.gpr[6] != 0u;
    ctx.set_gpr(3, static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int8_t>(ctx.gpr[6]))));
      if (branch_taken) {
          goto L_08816E3C;
      }
      goto L_08816FE8;
    }
L_08816FE8:
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(20), ctx.gpr[9]);
    goto L_08816EA8;
L_08816FF0:
    ctx.set_gpr(5, rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(68)));
    ctx.set_gpr(31, rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(116)));
    ctx.set_gpr(30, rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(112)));
    ctx.set_gpr(23, rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(108)));
    ctx.set_gpr(22, rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(104)));
    ctx.set_gpr(21, rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(100)));
    ctx.set_gpr(20, rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(96)));
    ctx.set_gpr(19, rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(92)));
    ctx.set_gpr(18, rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(88)));
    ctx.set_gpr(17, rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(84)));
    ctx.set_gpr(16, rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(80)));
    ctx.set_gpr(2, ctx.gpr[4] + 0u);
    ctx.set_gpr(3, ctx.gpr[5] + 0u);
    jump_target = ctx.gpr[31];
    ctx.set_gpr(29, ctx.gpr[29] + static_cast<std::uint32_t>(128));
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_0881702C:
    ctx.set_gpr(2, ctx.gpr[8] | ctx.gpr[19]);
    ctx.set_gpr(2, ctx.gpr[10] | ctx.gpr[2]);
    if (ctx.gpr[2] == 0u) {
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(20), ctx.gpr[9]);
        goto L_08816EA8;
    }
    goto L_0881703C;
L_0881703C:
    ctx.set_gpr(3, rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(20)));
    ctx.set_gpr(2, 0u + static_cast<std::uint32_t>(43));
    ctx.set_gpr(4, static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int8_t>(rt.memory().aot_load8(ctx.gpr[3] + static_cast<std::uint32_t>(1))))));
    { const bool branch_taken = ctx.gpr[4] == ctx.gpr[2];
    ctx.set_gpr(7, ctx.gpr[3] + static_cast<std::uint32_t>(1));
      if (branch_taken) {
          goto L_08817AFC;
      }
      goto L_08817050;
    }
L_08817050:
    ctx.set_gpr(2, 0u + static_cast<std::uint32_t>(45));
    { const bool branch_taken = ctx.gpr[4] == ctx.gpr[2];
    ctx.set_gpr(11, 0u + 0u);
      if (branch_taken) {
          goto L_08817C20;
      }
      goto L_0881705C;
    }
L_0881705C:
    ctx.set_gpr(2, ctx.gpr[4] + static_cast<std::uint32_t>(-48));
    ctx.set_gpr(2, ctx.gpr[2] < static_cast<std::uint32_t>(10) ? 1u : 0u);
    ctx.set_gpr(9, rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(20)));
    { const bool branch_taken = ctx.gpr[2] == 0u;
    ctx.set_gpr(3, 0u + 0u);
      if (branch_taken) {
          goto L_08816E94;
      }
      goto L_08817070;
    }
L_08817070:
    ctx.set_gpr(2, 0u + static_cast<std::uint32_t>(48));
    if (ctx.gpr[4] == ctx.gpr[2]) {
    ctx.set_gpr(7, ctx.gpr[7] + static_cast<std::uint32_t>(1));
        goto L_088176B4;
    }
    goto L_0881707C;
L_0881707C:
    ctx.set_gpr(2, ctx.gpr[4] + static_cast<std::uint32_t>(-49));
    goto L_08817080;
L_08817080:
    ctx.set_gpr(2, ctx.gpr[2] < static_cast<std::uint32_t>(9) ? 1u : 0u);
    if (ctx.gpr[2] == 0u) {
    ctx.set_gpr(9, rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(20)));
        goto L_08817A20;
    }
    goto L_0881708C;
L_0881708C:
    ctx.set_gpr(5, static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int8_t>(rt.memory().aot_load8(ctx.gpr[7] + static_cast<std::uint32_t>(1))))));
    ctx.set_gpr(3, ctx.gpr[4] + static_cast<std::uint32_t>(-48));
    ctx.set_gpr(2, static_cast<std::int32_t>(ctx.gpr[5]) < 48 ? 1u : 0u);
    { const bool branch_taken = ctx.gpr[2] == 0u;
    ctx.set_gpr(4, ctx.gpr[7] + static_cast<std::uint32_t>(1));
      if (branch_taken) {
          goto L_08817A2C;
      }
      goto L_088170A0;
    }
L_088170A0:
    ctx.set_gpr(2, ctx.gpr[4] - ctx.gpr[7]);
    goto L_088170A4;
L_088170A4:
    ctx.set_gpr(2, static_cast<std::int32_t>(ctx.gpr[2]) < 9 ? 1u : 0u);
    { const bool branch_taken = ctx.gpr[2] != 0u;
    ctx.set_gpr(2, 152u << 16u);
      if (branch_taken) {
          goto L_088170B4;
      }
      goto L_088170B0;
    }
L_088170B0:
    ctx.set_gpr(3, ctx.gpr[2] | 38527u);
    goto L_088170B4;
L_088170B4:
    { const bool branch_taken = ctx.gpr[11] != 0u;
    ctx.set_gpr(9, rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(20)));
      if (branch_taken) {
          goto L_08817E98;
      }
      goto L_088170BC;
    }
L_088170BC:
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(20), ctx.gpr[4]);
    goto L_08816E94;
L_088170C4:
    ctx.set_gpr(3, ctx.gpr[3] - ctx.gpr[12]);
    ctx.set_gpr(2, 0u + static_cast<std::uint32_t>(16));
    ctx.set_gpr(30, ctx.gpr[19] + 0u);
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(16), ctx.gpr[3]);
    if (ctx.gpr[6] != 0u) ctx.set_gpr(30, ctx.gpr[6]);
    ctx.set_gpr(31, 0x088170E0u);
    ctx.set_gpr(18, static_cast<std::int32_t>(ctx.gpr[19]) < static_cast<std::int32_t>(ctx.gpr[2]) ? ctx.gpr[19] : ctx.gpr[2]);
    if (rt.invoke_chained_direct<&recomp_unit_0006_entry, 6u, 941u, 0x0881FF1Cu>(ctx, &aot_mem) && ctx.pc == 0x088170E0u) goto L_088170E0;
    return;
L_088170E0:
    ctx.set_gpr(4, ctx.gpr[2] + 0u);
    { const bool branch_taken = static_cast<std::int32_t>(ctx.gpr[22]) < 0;
    ctx.set_gpr(5, ctx.gpr[3] + 0u);
      if (branch_taken) {
          goto L_08817A04;
      }
      goto L_088170EC;
    }
L_088170EC:
    ctx.set_gpr(2, static_cast<std::int32_t>(ctx.gpr[18]) < 10 ? 1u : 0u);
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(64), ctx.gpr[4]);
    { const bool branch_taken = ctx.gpr[2] != 0u;
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(68), ctx.gpr[5]);
      if (branch_taken) {
          goto L_08817150;
      }
      goto L_088170FC;
    }
L_088170FC:
    ctx.set_gpr(2, 2225u << 16u);
    ctx.set_gpr(2, ctx.gpr[2] + static_cast<std::uint32_t>(1000));
    ctx.set_gpr(3, ctx.gpr[18] << 3u);
    ctx.set_gpr(3, ctx.gpr[3] + ctx.gpr[2]);
    ctx.set_gpr(6, rt.memory().aot_load32(ctx.gpr[3] + static_cast<std::uint32_t>(-72)));
    ctx.set_gpr(31, 0x08817118u);
    ctx.set_gpr(7, rt.memory().aot_load32(ctx.gpr[3] + static_cast<std::uint32_t>(-68)));
    if (rt.invoke_chained_direct<&recomp_unit_0006_entry, 6u, 778u, 0x0881F44Cu>(ctx, &aot_mem) && ctx.pc == 0x08817118u) goto L_08817118;
    return;
L_08817118:
    ctx.set_gpr(4, ctx.gpr[20] + 0u);
    ctx.set_gpr(16, ctx.gpr[2] + 0u);
    ctx.set_gpr(31, 0x08817128u);
    ctx.set_gpr(17, ctx.gpr[3] + 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0006_entry, 6u, 941u, 0x0881FF1Cu>(ctx, &aot_mem) && ctx.pc == 0x08817128u) goto L_08817128;
    return;
L_08817128:
    ctx.set_gpr(8, ctx.gpr[2] + 0u);
    { const bool branch_taken = static_cast<std::int32_t>(ctx.gpr[20]) < 0;
    ctx.set_gpr(9, ctx.gpr[3] + 0u);
      if (branch_taken) {
          goto L_08817E08;
      }
      goto L_08817134;
    }
L_08817134:
    ctx.set_gpr(4, ctx.gpr[16] + 0u);
    ctx.set_gpr(5, ctx.gpr[17] + 0u);
    ctx.set_gpr(6, ctx.gpr[8] + 0u);
    ctx.set_gpr(31, 0x08817148u);
    ctx.set_gpr(7, ctx.gpr[9] + 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0006_entry, 6u, 773u, 0x0881F3E0u>(ctx, &aot_mem) && ctx.pc == 0x08817148u) goto L_08817148;
    return;
L_08817148:
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(64), ctx.gpr[2]);
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(68), ctx.gpr[3]);
    goto L_08817150;
L_08817150:
    ctx.set_gpr(2, static_cast<std::int32_t>(ctx.gpr[19]) < 16 ? 1u : 0u);
    { const bool branch_taken = ctx.gpr[2] != 0u;
    ctx.set_gpr(7, rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(16)));
      if (branch_taken) {
          goto L_088176DC;
      }
      goto L_0881715C;
    }
L_0881715C:
    ctx.set_gpr(2, ctx.gpr[19] - ctx.gpr[18]);
    ctx.set_gpr(16, ctx.gpr[7] + ctx.gpr[2]);
    { const bool branch_taken = static_cast<std::int32_t>(ctx.gpr[16]) <= 0;
    ctx.set_gpr(3, ctx.gpr[16] & 15u);
      if (branch_taken) {
          goto L_08817C5C;
      }
      goto L_0881716C;
    }
L_0881716C:
    if (ctx.gpr[3] == 0u) {
    ctx.set_gpr(3, ctx.gpr[16] + 0u);
        goto L_088171A4;
    }
    goto L_08817174;
L_08817174:
    ctx.set_gpr(2, 2225u << 16u);
    ctx.set_gpr(2, ctx.gpr[2] + static_cast<std::uint32_t>(1000));
    ctx.set_gpr(3, ctx.gpr[3] << 3u);
    ctx.set_gpr(3, ctx.gpr[3] + ctx.gpr[2]);
    ctx.set_gpr(6, rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(64)));
    ctx.set_gpr(7, rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(68)));
    ctx.set_gpr(4, rt.memory().aot_load32(ctx.gpr[3] + static_cast<std::uint32_t>(0)));
    ctx.set_gpr(31, 0x08817198u);
    ctx.set_gpr(5, rt.memory().aot_load32(ctx.gpr[3] + static_cast<std::uint32_t>(4)));
    if (rt.invoke_chained_direct<&recomp_unit_0006_entry, 6u, 778u, 0x0881F44Cu>(ctx, &aot_mem) && ctx.pc == 0x08817198u) goto L_08817198;
    return;
L_08817198:
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(64), ctx.gpr[2]);
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(68), ctx.gpr[3]);
    ctx.set_gpr(3, ctx.gpr[16] + 0u);
    goto L_088171A4;
L_088171A4:
    ctx.set_gpr(3, (ctx.gpr[3] & ~0x0000000Fu) | ((0u & 0x0000000Fu) << 0u));
    { const bool branch_taken = ctx.gpr[3] == 0u;
    ctx.set_gpr(4, ctx.gpr[21] + 0u);
      if (branch_taken) {
          goto L_0881729C;
      }
      goto L_088171B0;
    }
L_088171B0:
    ctx.set_gpr(2, static_cast<std::int32_t>(ctx.gpr[3]) < 309 ? 1u : 0u);
    if (ctx.gpr[2] == 0u) {
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(40), 0u);
        goto L_08817A60;
    }
    goto L_088171BC;
L_088171BC:
    ctx.set_gpr(18, static_cast<std::uint32_t>(static_cast<std::int32_t>(ctx.gpr[3]) >> 4u));
    if (ctx.gpr[18] == 0u) {
    ctx.set_gpr(5, ctx.gpr[23] + 0u);
        goto L_088172A0;
    }
    goto L_088171C8;
L_088171C8:
    ctx.set_gpr(2, static_cast<std::int32_t>(ctx.gpr[18]) < 2 ? 1u : 0u);
    { const bool branch_taken = ctx.gpr[2] != 0u;
    ctx.set_gpr(4, rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(64)));
      if (branch_taken) {
          goto L_08817F20;
      }
      goto L_088171D4;
    }
L_088171D4:
    ctx.set_gpr(5, rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(68)));
    ctx.set_gpr(17, 2225u << 16u);
    ctx.set_gpr(16, 0u + 0u);
    ctx.set_gpr(20, ctx.gpr[17] + static_cast<std::uint32_t>(960));
    goto L_088171E4;
L_088171E4:
    ctx.set_gpr(2, ctx.gpr[18] & 1u);
    if (ctx.gpr[2] == 0u) {
    ctx.set_gpr(18, static_cast<std::uint32_t>(static_cast<std::int32_t>(ctx.gpr[18]) >> 1u));
        goto L_08817208;
    }
    goto L_088171F0;
L_088171F0:
    ctx.set_gpr(6, rt.memory().aot_load32(ctx.gpr[20] + static_cast<std::uint32_t>(0)));
    ctx.set_gpr(31, 0x088171FCu);
    ctx.set_gpr(7, rt.memory().aot_load32(ctx.gpr[20] + static_cast<std::uint32_t>(4)));
    if (rt.invoke_chained_direct<&recomp_unit_0006_entry, 6u, 778u, 0x0881F44Cu>(ctx, &aot_mem) && ctx.pc == 0x088171FCu) goto L_088171FC;
    return;
L_088171FC:
    ctx.set_gpr(4, ctx.gpr[2] + 0u);
    ctx.set_gpr(5, ctx.gpr[3] + 0u);
    ctx.set_gpr(18, static_cast<std::uint32_t>(static_cast<std::int32_t>(ctx.gpr[18]) >> 1u));
    goto L_08817208;
L_08817208:
    ctx.set_gpr(2, static_cast<std::int32_t>(ctx.gpr[18]) < 2 ? 1u : 0u);
    ctx.set_gpr(16, ctx.gpr[16] + static_cast<std::uint32_t>(1));
    { const bool branch_taken = ctx.gpr[2] == 0u;
    ctx.set_gpr(20, ctx.gpr[20] + static_cast<std::uint32_t>(8));
      if (branch_taken) {
          goto L_088171E4;
      }
      goto L_08817218;
    }
L_08817218:
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(64), ctx.gpr[4]);
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(68), ctx.gpr[5]);
    goto L_08817220;
L_08817220:
    ctx.set_gpr(6, rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(68)));
    ctx.set_gpr(3, ctx.gpr[17] + static_cast<std::uint32_t>(960));
    ctx.set_gpr(2, ctx.gpr[16] << 3u);
    ctx.set_gpr(2, ctx.gpr[2] + ctx.gpr[3]);
    ctx.set_gpr(3, 64688u << 16u);
    ctx.set_gpr(6, ctx.gpr[3] + ctx.gpr[6]);
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(68), ctx.gpr[6]);
    ctx.set_gpr(4, rt.memory().aot_load32(ctx.gpr[2] + static_cast<std::uint32_t>(0)));
    ctx.set_gpr(6, rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(64)));
    ctx.set_gpr(7, rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(68)));
    ctx.set_gpr(31, 0x08817250u);
    ctx.set_gpr(5, rt.memory().aot_load32(ctx.gpr[2] + static_cast<std::uint32_t>(4)));
    if (rt.invoke_chained_direct<&recomp_unit_0006_entry, 6u, 778u, 0x0881F44Cu>(ctx, &aot_mem) && ctx.pc == 0x08817250u) goto L_08817250;
    return;
L_08817250:
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(68), ctx.gpr[3]);
    ctx.set_gpr(3, 32752u << 16u);
    ctx.set_gpr(4, rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(68)));
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(64), ctx.gpr[2]);
    ctx.set_gpr(2, 31904u << 16u);
    ctx.set_gpr(3, ctx.gpr[4] & ctx.gpr[3]);
    ctx.set_gpr(2, ctx.gpr[2] < ctx.gpr[3] ? 1u : 0u);
    if (ctx.gpr[2] != 0u) {
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(40), 0u);
        goto L_08817A60;
    }
    goto L_08817274;
L_08817274:
    ctx.set_gpr(2, 31888u << 16u);
    ctx.set_gpr(2, ctx.gpr[2] < ctx.gpr[3] ? 1u : 0u);
    { const bool branch_taken = ctx.gpr[2] == 0u;
    ctx.set_gpr(2, 848u << 16u);
      if (branch_taken) {
          goto L_08817F14;
      }
      goto L_08817284;
    }
L_08817284:
    ctx.set_gpr(2, 32751u << 16u);
    ctx.set_gpr(2, ctx.gpr[2] | 65535u);
    ctx.set_gpr(7, 0u + static_cast<std::uint32_t>(-1));
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(68), ctx.gpr[2]);
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(64), ctx.gpr[7]);
    goto L_08817298;
L_08817298:
    ctx.set_gpr(4, ctx.gpr[21] + 0u);
    goto L_0881729C;
L_0881729C:
    ctx.set_gpr(5, ctx.gpr[23] + 0u);
    goto L_088172A0;
L_088172A0:
    ctx.set_gpr(6, ctx.gpr[30] + 0u);
    ctx.set_gpr(7, ctx.gpr[19] + 0u);
    ctx.set_gpr(31, 0x088172B0u);
    ctx.set_gpr(8, ctx.gpr[22] + 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0003_entry, 3u, 802u, 0x08813594u>(ctx, &aot_mem) && ctx.pc == 0x088172B0u) goto L_088172B0;
    return;
L_088172B0:
    ctx.set_gpr(4, ctx.gpr[2] + static_cast<std::uint32_t>(12));
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(40), ctx.gpr[2]);
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(76), ctx.gpr[4]);
    goto L_088173E8;
L_088172C0:
    { const bool branch_taken = ctx.gpr[30] == 0u;
    ctx.set_gpr(3, rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(64)));
      if (branch_taken) {
          goto L_088178E4;
      }
      goto L_088172C8;
    }
L_088172C8:
    ctx.set_gpr(2, 2225u << 16u);
    ctx.set_gpr(22, rt.memory().aot_load32(ctx.gpr[2] + static_cast<std::uint32_t>(1256)));
    ctx.set_gpr(23, rt.memory().aot_load32(ctx.gpr[2] + static_cast<std::uint32_t>(1260)));
    ctx.set_gpr(18, ctx.gpr[22] + 0u);
    ctx.set_gpr(19, ctx.gpr[23] + 0u);
    goto L_088172DC;
L_088172DC:
    ctx.set_gpr(3, rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(68)));
    ctx.set_gpr(7, 32752u << 16u);
    ctx.set_gpr(2, 32736u << 16u);
    ctx.set_gpr(20, ctx.gpr[3] & ctx.gpr[7]);
    { const bool branch_taken = ctx.gpr[20] == ctx.gpr[2];
    ctx.set_gpr(2, 64688u << 16u);
      if (branch_taken) {
          goto L_08817618;
      }
      goto L_088172F4;
    }
L_088172F4:
    ctx.set_gpr(2, 832u << 16u);
    goto L_088172F8;
L_088172F8:
    ctx.set_gpr(2, ctx.gpr[2] < ctx.gpr[20] ? 1u : 0u);
    { const bool branch_taken = ctx.gpr[2] != 0u;
    ctx.set_gpr(4, rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(24)));
      if (branch_taken) {
          goto L_0881736C;
      }
      goto L_08817304;
    }
L_08817304:
    ctx.set_gpr(2, 2225u << 16u);
    ctx.set_gpr(6, rt.memory().aot_load32(ctx.gpr[2] + static_cast<std::uint32_t>(1256)));
    ctx.set_gpr(7, rt.memory().aot_load32(ctx.gpr[2] + static_cast<std::uint32_t>(1260)));
    ctx.set_gpr(4, ctx.gpr[22] + 0u);
    ctx.set_gpr(31, 0x0881731Cu);
    ctx.set_gpr(5, ctx.gpr[23] + 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0006_entry, 6u, 920u, 0x0881FD6Cu>(ctx, &aot_mem) && ctx.pc == 0x0881731Cu) goto L_0881731C;
    return;
L_0881731C:
    { const bool branch_taken = static_cast<std::int32_t>(ctx.gpr[2]) < 0;
    ctx.set_gpr(3, 2225u << 16u);
      if (branch_taken) {
          goto L_08817368;
      }
      goto L_08817324;
    }
L_08817324:
    ctx.set_gpr(6, rt.memory().aot_load32(ctx.gpr[3] + static_cast<std::uint32_t>(1264)));
    ctx.set_gpr(7, rt.memory().aot_load32(ctx.gpr[3] + static_cast<std::uint32_t>(1268)));
    ctx.set_gpr(4, ctx.gpr[22] + 0u);
    ctx.set_gpr(31, 0x08817338u);
    ctx.set_gpr(5, ctx.gpr[23] + 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0006_entry, 6u, 773u, 0x0881F3E0u>(ctx, &aot_mem) && ctx.pc == 0x08817338u) goto L_08817338;
    return;
L_08817338:
    ctx.set_gpr(4, ctx.gpr[2] + 0u);
    ctx.set_gpr(31, 0x08817344u);
    ctx.set_gpr(5, ctx.gpr[3] + 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0007_entry, 7u, 2u, 0x08820004u>(ctx, &aot_mem) && ctx.pc == 0x08817344u) goto L_08817344;
    return;
L_08817344:
    ctx.set_gpr(31, 0x0881734Cu);
    ctx.set_gpr(4, ctx.gpr[2] + 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0006_entry, 6u, 941u, 0x0881FF1Cu>(ctx, &aot_mem) && ctx.pc == 0x0881734Cu) goto L_0881734C;
    return;
L_0881734C:
    ctx.set_gpr(18, ctx.gpr[2] + 0u);
    { const bool branch_taken = ctx.gpr[30] != 0u;
    ctx.set_gpr(19, ctx.gpr[3] + 0u);
      if (branch_taken) {
          goto L_08817368;
      }
      goto L_08817358;
    }
L_08817358:
    ctx.set_gpr(4, 32768u << 16u);
    ctx.set_gpr(3, ctx.gpr[4] ^ ctx.gpr[3]);
    ctx.set_gpr(18, ctx.gpr[2] + 0u);
    ctx.set_gpr(19, ctx.gpr[3] + 0u);
    goto L_08817368;
L_08817368:
    ctx.set_gpr(4, rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(24)));
    goto L_0881736C;
L_0881736C:
    ctx.set_gpr(31, 0x08817374u);
    ctx.set_gpr(5, rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(28)));
    if (rt.invoke_chained_direct<&recomp_unit_0003_entry, 3u, 909u, 0x08813E04u>(ctx, &aot_mem) && ctx.pc == 0x08817374u) goto L_08817374;
    return;
L_08817374:
    ctx.set_gpr(6, ctx.gpr[2] + 0u);
    ctx.set_gpr(4, ctx.gpr[18] + 0u);
    ctx.set_gpr(5, ctx.gpr[19] + 0u);
    ctx.set_gpr(31, 0x08817388u);
    ctx.set_gpr(7, ctx.gpr[3] + 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0006_entry, 6u, 778u, 0x0881F44Cu>(ctx, &aot_mem) && ctx.pc == 0x08817388u) goto L_08817388;
    return;
L_08817388:
    ctx.set_gpr(6, rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(24)));
    ctx.set_gpr(7, rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(28)));
    ctx.set_gpr(4, ctx.gpr[2] + 0u);
    ctx.set_gpr(31, 0x0881739Cu);
    ctx.set_gpr(5, ctx.gpr[3] + 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0006_entry, 6u, 773u, 0x0881F3E0u>(ctx, &aot_mem) && ctx.pc == 0x0881739Cu) goto L_0881739C;
    return;
L_0881739C:
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(64), ctx.gpr[2]);
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(68), ctx.gpr[3]);
    goto L_088173A4;
L_088173A4:
    ctx.set_gpr(16, rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(68)));
    ctx.set_gpr(5, 32752u << 16u);
    ctx.set_gpr(2, ctx.gpr[16] & ctx.gpr[5]);
    { const bool branch_taken = ctx.gpr[20] == ctx.gpr[2];
    ctx.set_gpr(5, ctx.gpr[23] + 0u);
      if (branch_taken) {
          goto L_08817818;
      }
      goto L_088173B8;
    }
L_088173B8:
    ctx.set_gpr(5, rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(48)));
    goto L_088173BC;
L_088173BC:
    ctx.set_gpr(31, 0x088173C4u);
    ctx.set_gpr(4, ctx.gpr[21] + 0u);
    goto L_08814400;
L_088173C4:
    ctx.set_gpr(5, rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(44)));
    ctx.set_gpr(31, 0x088173D0u);
    ctx.set_gpr(4, ctx.gpr[21] + 0u);
    goto L_08814400;
L_088173D0:
    ctx.set_gpr(5, rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(36)));
    ctx.set_gpr(31, 0x088173DCu);
    ctx.set_gpr(4, ctx.gpr[21] + 0u);
    goto L_08814400;
L_088173DC:
    ctx.set_gpr(5, rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(32)));
    ctx.set_gpr(31, 0x088173E8u);
    ctx.set_gpr(4, ctx.gpr[21] + 0u);
    goto L_08814400;
L_088173E8:
    ctx.set_gpr(6, rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(40)));
    ctx.set_gpr(3, rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(68)));
    ctx.set_gpr(2, rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(64)));
    ctx.set_gpr(5, rt.memory().aot_load32(ctx.gpr[6] + static_cast<std::uint32_t>(4)));
    ctx.set_gpr(4, ctx.gpr[21] + 0u);
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(28), ctx.gpr[3]);
    ctx.set_gpr(31, 0x08817408u);
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(24), ctx.gpr[2]);
    goto L_08814348;
L_08817408:
    ctx.set_gpr(4, ctx.gpr[2] + static_cast<std::uint32_t>(12));
    ctx.set_gpr(3, rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(40)));
    ctx.set_gpr(5, rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(76)));
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(44), ctx.gpr[2]);
    ctx.set_gpr(6, rt.memory().aot_load32(ctx.gpr[3] + static_cast<std::uint32_t>(16)));
    ctx.set_gpr(6, ctx.gpr[6] << 2u);
    ctx.set_gpr(31, 0x08817428u);
    ctx.set_gpr(6, ctx.gpr[6] + static_cast<std::uint32_t>(8));
    if (rt.invoke_chained_direct<&recomp_unit_0003_entry, 3u, 662u, 0x08812B08u>(ctx, &aot_mem) && ctx.pc == 0x08817428u) goto L_08817428;
    return;
L_08817428:
    ctx.set_gpr(6, rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(24)));
    ctx.set_gpr(7, rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(28)));
    ctx.set_gpr(8, ctx.gpr[29] + 0u);
    ctx.set_gpr(9, ctx.gpr[29] + static_cast<std::uint32_t>(4));
    ctx.set_gpr(31, 0x08817440u);
    ctx.set_gpr(4, ctx.gpr[21] + 0u);
    goto L_08814028;
L_08817440:
    ctx.set_gpr(4, ctx.gpr[21] + 0u);
    ctx.set_gpr(5, 0u + static_cast<std::uint32_t>(1));
    ctx.set_gpr(31, 0x08817450u);
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(48), ctx.gpr[2]);
    if (rt.invoke_chained_direct<&recomp_unit_0003_entry, 3u, 820u, 0x08813708u>(ctx, &aot_mem) && ctx.pc == 0x08817450u) goto L_08817450;
    return;
L_08817450:
    ctx.set_gpr(4, rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(16)));
    { const bool branch_taken = static_cast<std::int32_t>(ctx.gpr[4]) < 0;
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(36), ctx.gpr[2]);
      if (branch_taken) {
          goto L_08817918;
      }
      goto L_0881745C;
    }
L_0881745C:
    ctx.set_gpr(20, ctx.gpr[4] + 0u);
    ctx.set_gpr(5, ctx.gpr[4] + 0u);
    ctx.set_gpr(7, 0u + 0u);
    ctx.set_gpr(3, 0u + 0u);
    goto L_0881746C;
L_0881746C:
    ctx.set_gpr(2, rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(0)));
    if (static_cast<std::int32_t>(ctx.gpr[2]) < 0) {
    ctx.set_gpr(5, ctx.gpr[5] - ctx.gpr[2]);
        goto L_0881747C;
    }
    goto L_08817478;
L_08817478:
    ctx.set_gpr(3, ctx.gpr[3] + ctx.gpr[2]);
    goto L_0881747C;
L_0881747C:
    ctx.set_gpr(4, rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(4)));
    ctx.set_gpr(6, ctx.gpr[2] + static_cast<std::uint32_t>(1075));
    ctx.set_gpr(2, ctx.gpr[2] + ctx.gpr[4]);
    ctx.set_gpr(2, ctx.gpr[2] + static_cast<std::uint32_t>(-1));
    ctx.set_gpr(2, static_cast<std::int32_t>(ctx.gpr[2]) < -1022 ? 1u : 0u);
    { const bool branch_taken = ctx.gpr[2] != 0u;
    ctx.set_gpr(18, ctx.gpr[6] + ctx.gpr[5]);
      if (branch_taken) {
          goto L_088174A4;
      }
      goto L_08817498;
    }
L_08817498:
    ctx.set_gpr(2, 0u + static_cast<std::uint32_t>(54));
    ctx.set_gpr(6, ctx.gpr[2] - ctx.gpr[4]);
    ctx.set_gpr(18, ctx.gpr[6] + ctx.gpr[5]);
    goto L_088174A4;
L_088174A4:
    ctx.set_gpr(17, ctx.gpr[6] + ctx.gpr[3]);
    ctx.set_gpr(2, static_cast<std::int32_t>(ctx.gpr[17]) < static_cast<std::int32_t>(ctx.gpr[18]) ? ctx.gpr[17] : ctx.gpr[18]);
    ctx.set_gpr(2, static_cast<std::int32_t>(ctx.gpr[2]) < static_cast<std::int32_t>(ctx.gpr[3]) ? ctx.gpr[2] : ctx.gpr[3]);
    { const bool branch_taken = static_cast<std::int32_t>(ctx.gpr[2]) <= 0;
    ctx.set_gpr(19, ctx.gpr[3] + 0u);
      if (branch_taken) {
          goto L_088174C4;
      }
      goto L_088174B8;
    }
L_088174B8:
    ctx.set_gpr(19, ctx.gpr[3] - ctx.gpr[2]);
    ctx.set_gpr(17, ctx.gpr[17] - ctx.gpr[2]);
    ctx.set_gpr(18, ctx.gpr[18] - ctx.gpr[2]);
    goto L_088174C4;
L_088174C4:
    { const bool branch_taken = static_cast<std::int32_t>(ctx.gpr[7]) <= 0;
    ctx.set_gpr(5, rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(36)));
      if (branch_taken) {
          goto L_08817500;
      }
      goto L_088174CC;
    }
L_088174CC:
    ctx.set_gpr(6, ctx.gpr[7] + 0u);
    ctx.set_gpr(31, 0x088174D8u);
    ctx.set_gpr(4, ctx.gpr[21] + 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0003_entry, 3u, 848u, 0x0881395Cu>(ctx, &aot_mem) && ctx.pc == 0x088174D8u) goto L_088174D8;
    return;
L_088174D8:
    ctx.set_gpr(6, rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(48)));
    ctx.set_gpr(4, ctx.gpr[21] + 0u);
    ctx.set_gpr(5, ctx.gpr[2] + 0u);
    ctx.set_gpr(31, 0x088174ECu);
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(36), ctx.gpr[2]);
    if (rt.invoke_chained_direct<&recomp_unit_0003_entry, 3u, 822u, 0x0881373Cu>(ctx, &aot_mem) && ctx.pc == 0x088174ECu) goto L_088174EC;
    return;
L_088174EC:
    ctx.set_gpr(16, ctx.gpr[2] + 0u);
    ctx.set_gpr(5, rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(48)));
    ctx.set_gpr(31, 0x088174FCu);
    ctx.set_gpr(4, ctx.gpr[21] + 0u);
    goto L_08814400;
L_088174FC:
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(48), ctx.gpr[16]);
    goto L_08817500;
L_08817500:
    { const bool branch_taken = static_cast<std::int32_t>(ctx.gpr[17]) <= 0;
    ctx.set_gpr(5, rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(48)));
      if (branch_taken) {
          goto L_08817518;
      }
      goto L_08817508;
    }
L_08817508:
    ctx.set_gpr(6, ctx.gpr[17] + 0u);
    ctx.set_gpr(31, 0x08817514u);
    ctx.set_gpr(4, ctx.gpr[21] + 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0003_entry, 3u, 868u, 0x08813A9Cu>(ctx, &aot_mem) && ctx.pc == 0x08817514u) goto L_08817514;
    return;
L_08817514:
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(48), ctx.gpr[2]);
    goto L_08817518;
L_08817518:
    { const bool branch_taken = static_cast<std::int32_t>(ctx.gpr[20]) <= 0;
    ctx.set_gpr(5, rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(44)));
      if (branch_taken) {
          goto L_08817530;
      }
      goto L_08817520;
    }
L_08817520:
    ctx.set_gpr(6, ctx.gpr[20] + 0u);
    ctx.set_gpr(31, 0x0881752Cu);
    ctx.set_gpr(4, ctx.gpr[21] + 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0003_entry, 3u, 848u, 0x0881395Cu>(ctx, &aot_mem) && ctx.pc == 0x0881752Cu) goto L_0881752C;
    return;
L_0881752C:
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(44), ctx.gpr[2]);
    goto L_08817530;
L_08817530:
    { const bool branch_taken = static_cast<std::int32_t>(ctx.gpr[18]) <= 0;
    ctx.set_gpr(5, rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(44)));
      if (branch_taken) {
          goto L_08817548;
      }
      goto L_08817538;
    }
L_08817538:
    ctx.set_gpr(6, ctx.gpr[18] + 0u);
    ctx.set_gpr(31, 0x08817544u);
    ctx.set_gpr(4, ctx.gpr[21] + 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0003_entry, 3u, 868u, 0x08813A9Cu>(ctx, &aot_mem) && ctx.pc == 0x08817544u) goto L_08817544;
    return;
L_08817544:
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(44), ctx.gpr[2]);
    goto L_08817548;
L_08817548:
    { const bool branch_taken = static_cast<std::int32_t>(ctx.gpr[19]) <= 0;
    ctx.set_gpr(5, rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(36)));
      if (branch_taken) {
          goto L_08817560;
      }
      goto L_08817550;
    }
L_08817550:
    ctx.set_gpr(6, ctx.gpr[19] + 0u);
    ctx.set_gpr(31, 0x0881755Cu);
    ctx.set_gpr(4, ctx.gpr[21] + 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0003_entry, 3u, 868u, 0x08813A9Cu>(ctx, &aot_mem) && ctx.pc == 0x0881755Cu) goto L_0881755C;
    return;
L_0881755C:
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(36), ctx.gpr[2]);
    goto L_08817560;
L_08817560:
    ctx.set_gpr(5, rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(48)));
    ctx.set_gpr(6, rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(44)));
    ctx.set_gpr(31, 0x08817570u);
    ctx.set_gpr(4, ctx.gpr[21] + 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0003_entry, 3u, 891u, 0x08813C58u>(ctx, &aot_mem) && ctx.pc == 0x08817570u) goto L_08817570;
    return;
L_08817570:
    ctx.set_gpr(5, rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(36)));
    ctx.set_gpr(30, rt.memory().aot_load32(ctx.gpr[2] + static_cast<std::uint32_t>(12)));
    ctx.set_gpr(4, ctx.gpr[2] + 0u);
    rt.memory().aot_store32(ctx.gpr[2] + static_cast<std::uint32_t>(12), 0u);
    ctx.set_gpr(31, 0x08817588u);
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(32), ctx.gpr[2]);
    if (rt.invoke_chained_direct<&recomp_unit_0003_entry, 3u, 885u, 0x08813BF4u>(ctx, &aot_mem) && ctx.pc == 0x08817588u) goto L_08817588;
    return;
L_08817588:
    { const bool branch_taken = static_cast<std::int32_t>(ctx.gpr[2]) < 0;
    // nop
      if (branch_taken) {
          goto L_08817B10;
      }
      goto L_08817590;
    }
L_08817590:
    { const bool branch_taken = ctx.gpr[2] == 0u;
    ctx.set_gpr(4, rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(32)));
      if (branch_taken) {
          goto L_08817B80;
      }
      goto L_08817598;
    }
L_08817598:
    ctx.set_gpr(31, 0x088175A0u);
    ctx.set_gpr(5, rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(36)));
    goto L_088141C8;
L_088175A0:
    ctx.set_gpr(16, ctx.gpr[2] + 0u);
    ctx.set_gpr(2, 2225u << 16u);
    ctx.set_gpr(6, rt.memory().aot_load32(ctx.gpr[2] + static_cast<std::uint32_t>(1248)));
    ctx.set_gpr(7, rt.memory().aot_load32(ctx.gpr[2] + static_cast<std::uint32_t>(1252)));
    ctx.set_gpr(4, ctx.gpr[16] + 0u);
    ctx.set_gpr(5, ctx.gpr[3] + 0u);
    ctx.set_gpr(31, 0x088175C0u);
    ctx.set_gpr(17, ctx.gpr[3] + 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0006_entry, 6u, 934u, 0x0881FE94u>(ctx, &aot_mem) && ctx.pc == 0x088175C0u) goto L_088175C0;
    return;
L_088175C0:
    { const bool branch_taken = static_cast<std::int32_t>(ctx.gpr[2]) <= 0;
    ctx.set_gpr(4, 2225u << 16u);
      if (branch_taken) {
          goto L_088172C0;
      }
      goto L_088175C8;
    }
L_088175C8:
    ctx.set_gpr(6, rt.memory().aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(1264)));
    ctx.set_gpr(7, rt.memory().aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(1268)));
    ctx.set_gpr(5, ctx.gpr[17] + 0u);
    ctx.set_gpr(31, 0x088175DCu);
    ctx.set_gpr(4, ctx.gpr[16] + 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0006_entry, 6u, 778u, 0x0881F44Cu>(ctx, &aot_mem) && ctx.pc == 0x088175DCu) goto L_088175DC;
    return;
L_088175DC:
    ctx.set_gpr(22, ctx.gpr[2] + 0u);
    ctx.set_gpr(23, ctx.gpr[3] + 0u);
    ctx.set_gpr(18, ctx.gpr[2] + 0u);
    { const bool branch_taken = ctx.gpr[30] != 0u;
    ctx.set_gpr(19, ctx.gpr[3] + 0u);
      if (branch_taken) {
          goto L_088172DC;
      }
      goto L_088175F0;
    }
L_088175F0:
    ctx.set_gpr(5, 32768u << 16u);
    ctx.set_gpr(19, ctx.gpr[5] ^ ctx.gpr[3]);
    ctx.set_gpr(3, rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(68)));
    ctx.set_gpr(7, 32752u << 16u);
    ctx.set_gpr(18, ctx.gpr[2] + 0u);
    ctx.set_gpr(20, ctx.gpr[3] & ctx.gpr[7]);
    ctx.set_gpr(2, 32736u << 16u);
    { const bool branch_taken = ctx.gpr[20] != ctx.gpr[2];
    ctx.set_gpr(2, 832u << 16u);
      if (branch_taken) {
          goto L_088172F8;
      }
      goto L_08817614;
    }
L_08817614:
    ctx.set_gpr(2, 64688u << 16u);
    goto L_08817618;
L_08817618:
    ctx.set_gpr(3, ctx.gpr[3] + ctx.gpr[2]);
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(68), ctx.gpr[3]);
    ctx.set_gpr(16, rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(64)));
    ctx.set_gpr(17, rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(68)));
    ctx.set_gpr(4, ctx.gpr[16] + 0u);
    ctx.set_gpr(31, 0x08817634u);
    ctx.set_gpr(5, ctx.gpr[17] + 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0003_entry, 3u, 909u, 0x08813E04u>(ctx, &aot_mem) && ctx.pc == 0x08817634u) goto L_08817634;
    return;
L_08817634:
    ctx.set_gpr(6, ctx.gpr[2] + 0u);
    ctx.set_gpr(4, ctx.gpr[18] + 0u);
    ctx.set_gpr(5, ctx.gpr[19] + 0u);
    ctx.set_gpr(31, 0x08817648u);
    ctx.set_gpr(7, ctx.gpr[3] + 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0006_entry, 6u, 778u, 0x0881F44Cu>(ctx, &aot_mem) && ctx.pc == 0x08817648u) goto L_08817648;
    return;
L_08817648:
    ctx.set_gpr(6, ctx.gpr[2] + 0u);
    ctx.set_gpr(4, ctx.gpr[16] + 0u);
    ctx.set_gpr(5, ctx.gpr[17] + 0u);
    ctx.set_gpr(31, 0x0881765Cu);
    ctx.set_gpr(7, ctx.gpr[3] + 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0006_entry, 6u, 773u, 0x0881F3E0u>(ctx, &aot_mem) && ctx.pc == 0x0881765Cu) goto L_0881765C;
    return;
L_0881765C:
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(68), ctx.gpr[3]);
    ctx.set_gpr(6, rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(68)));
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(64), ctx.gpr[2]);
    ctx.set_gpr(2, 32752u << 16u);
    ctx.set_gpr(3, ctx.gpr[6] & ctx.gpr[2]);
    ctx.set_gpr(2, 31903u << 16u);
    ctx.set_gpr(2, ctx.gpr[2] | 65535u);
    ctx.set_gpr(3, ctx.gpr[2] < ctx.gpr[3] ? 1u : 0u);
    ctx.set_gpr(4, rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(24)));
    { const bool branch_taken = ctx.gpr[3] == 0u;
    ctx.set_gpr(5, rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(28)));
      if (branch_taken) {
          goto L_0881796C;
      }
      goto L_08817688;
    }
L_08817688:
    ctx.set_gpr(3, 32751u << 16u);
    ctx.set_gpr(3, ctx.gpr[3] | 65535u);
    { const bool branch_taken = ctx.gpr[3] == ctx.gpr[5];
    ctx.set_gpr(2, 0u + static_cast<std::uint32_t>(-1));
      if (branch_taken) {
          goto L_088179E8;
      }
      goto L_08817698;
    }
L_08817698:
    ctx.set_gpr(4, 2225u << 16u);
    goto L_0881769C;
L_0881769C:
    ctx.set_gpr(4, ctx.gpr[4] + static_cast<std::uint32_t>(1312));
    ctx.set_gpr(4, rt.memory().aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(0)));
    ctx.set_gpr(5, 0u + static_cast<std::uint32_t>(-1));
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(64), ctx.gpr[5]);
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(68), ctx.gpr[4]);
    goto L_088173B8;
L_088176B4:
    ctx.set_gpr(4, static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int8_t>(rt.memory().aot_load8(ctx.gpr[7] + static_cast<std::uint32_t>(0))))));
    ctx.set_gpr(2, 0u + static_cast<std::uint32_t>(48));
    if (ctx.gpr[4] != ctx.gpr[2]) {
    ctx.set_gpr(2, ctx.gpr[4] + static_cast<std::uint32_t>(-49));
        goto L_08817080;
    }
    goto L_088176C4;
L_088176C4:
    ctx.set_gpr(7, ctx.gpr[7] + static_cast<std::uint32_t>(1));
    ctx.set_gpr(4, static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int8_t>(rt.memory().aot_load8(ctx.gpr[7] + static_cast<std::uint32_t>(0))))));
    if (ctx.gpr[4] == ctx.gpr[2]) {
    ctx.set_gpr(7, ctx.gpr[7] + static_cast<std::uint32_t>(1));
        goto L_088176B4;
    }
    goto L_088176D4;
L_088176D4:
    ctx.set_gpr(2, ctx.gpr[4] + static_cast<std::uint32_t>(-49));
    goto L_08817080;
L_088176DC:
    if (ctx.gpr[7] == 0u) {
    ctx.set_gpr(7, rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(72)));
        goto L_08816EAC;
    }
    goto L_088176E4;
L_088176E4:
    { const bool branch_taken = static_cast<std::int32_t>(ctx.gpr[7]) <= 0;
    ctx.set_gpr(2, static_cast<std::int32_t>(ctx.gpr[7]) < 23 ? 1u : 0u);
      if (branch_taken) {
          goto L_08817ABC;
      }
      goto L_088176EC;
    }
L_088176EC:
    { const bool branch_taken = ctx.gpr[2] == 0u;
    ctx.set_gpr(3, 0u + static_cast<std::uint32_t>(15));
      if (branch_taken) {
          goto L_08817E2C;
      }
      goto L_088176F4;
    }
L_088176F4:
    ctx.set_gpr(2, 2225u << 16u);
    ctx.set_gpr(3, ctx.gpr[7] << 3u);
    ctx.set_gpr(2, ctx.gpr[2] + static_cast<std::uint32_t>(1000));
    ctx.set_gpr(3, ctx.gpr[3] + ctx.gpr[2]);
    ctx.set_gpr(6, rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(64)));
    ctx.set_gpr(7, rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(68)));
    ctx.set_gpr(4, rt.memory().aot_load32(ctx.gpr[3] + static_cast<std::uint32_t>(0)));
    ctx.set_gpr(31, 0x08817718u);
    ctx.set_gpr(5, rt.memory().aot_load32(ctx.gpr[3] + static_cast<std::uint32_t>(4)));
    if (rt.invoke_chained_direct<&recomp_unit_0006_entry, 6u, 778u, 0x0881F44Cu>(ctx, &aot_mem) && ctx.pc == 0x08817718u) goto L_08817718;
    return;
L_08817718:
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(64), ctx.gpr[2]);
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(68), ctx.gpr[3]);
    goto L_08816EA8;
L_08817724:
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(52), 0u);
    goto L_08816FD0;
L_0881772C:
    ctx.set_gpr(6, rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(20)));
    ctx.set_gpr(6, ctx.gpr[6] + static_cast<std::uint32_t>(1));
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(20), ctx.gpr[6]);
    goto L_08816E00;
L_0881773C:
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(20), ctx.gpr[9]);
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(52), 0u);
    goto L_08816EA8;
L_08817748:
    ctx.set_gpr(3, rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(20)));
    ctx.set_gpr(3, ctx.gpr[3] + static_cast<std::uint32_t>(1));
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(20), ctx.gpr[3]);
    ctx.set_gpr(3, static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int8_t>(rt.memory().aot_load8(ctx.gpr[3] + static_cast<std::uint32_t>(0))))));
    { const bool branch_taken = ctx.gpr[6] == 0u;
    ctx.set_gpr(4, ctx.gpr[3] + 0u);
      if (branch_taken) {
          goto L_088177E4;
      }
      goto L_08817760;
    }
L_08817760:
    ctx.set_gpr(23, ctx.gpr[5] + 0u);
    ctx.set_gpr(19, ctx.gpr[6] + 0u);
    ctx.set_gpr(8, 0u + 0u);
    ctx.set_gpr(12, 0u + 0u);
    goto L_08817770;
L_08817770:
    ctx.set_gpr(7, ctx.gpr[4] + static_cast<std::uint32_t>(-48));
    ctx.set_gpr(2, ctx.gpr[7] < static_cast<std::uint32_t>(10) ? 1u : 0u);
    { const bool branch_taken = ctx.gpr[2] == 0u;
    ctx.set_gpr(2, 0u + static_cast<std::uint32_t>(101));
      if (branch_taken) {
          goto L_08816E84;
      }
      goto L_08817780;
    }
L_08817780:
    ctx.set_gpr(8, ctx.gpr[8] + static_cast<std::uint32_t>(1));
    goto L_08817784;
L_08817784:
    { const bool branch_taken = ctx.gpr[7] == 0u;
    ctx.set_gpr(2, rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(20)));
      if (branch_taken) {
          goto L_08817AAC;
      }
      goto L_0881778C;
    }
L_0881778C:
    ctx.set_gpr(2, static_cast<std::int32_t>(ctx.gpr[8]) < 2 ? 1u : 0u);
    ctx.set_gpr(12, ctx.gpr[12] + ctx.gpr[8]);
    { const bool branch_taken = ctx.gpr[2] != 0u;
    ctx.set_gpr(5, ctx.gpr[19] + 0u);
      if (branch_taken) {
          goto L_08817DD4;
      }
      goto L_0881779C;
    }
L_0881779C:
    ctx.set_gpr(4, 0u + static_cast<std::uint32_t>(1));
    goto L_088177BC;
L_088177A4:
    ctx.set_gpr(3, ctx.gpr[22] << 3u);
    ctx.set_gpr(2, ctx.gpr[22] << 1u);
    ctx.set_gpr(22, ctx.gpr[2] + ctx.gpr[3]);
    goto L_088177B0;
L_088177B0:
    ctx.set_gpr(4, ctx.gpr[4] + static_cast<std::uint32_t>(1));
    goto L_088177B4;
L_088177B4:
    { const bool branch_taken = ctx.gpr[4] == ctx.gpr[8];
    ctx.set_gpr(19, ctx.gpr[5] + 0u);
      if (branch_taken) {
          goto L_08817DD4;
      }
      goto L_088177BC;
    }
L_088177BC:
    ctx.set_gpr(2, static_cast<std::int32_t>(ctx.gpr[19]) < 9 ? 1u : 0u);
    { const bool branch_taken = ctx.gpr[2] != 0u;
    ctx.set_gpr(5, ctx.gpr[19] + static_cast<std::uint32_t>(1));
      if (branch_taken) {
          goto L_088177A4;
      }
      goto L_088177C8;
    }
L_088177C8:
    ctx.set_gpr(2, static_cast<std::int32_t>(ctx.gpr[5]) < 17 ? 1u : 0u);
    if (ctx.gpr[2] == 0u) {
    ctx.set_gpr(4, ctx.gpr[4] + static_cast<std::uint32_t>(1));
        goto L_088177B4;
    }
    goto L_088177D4;
L_088177D4:
    ctx.set_gpr(3, ctx.gpr[20] << 3u);
    ctx.set_gpr(2, ctx.gpr[20] << 1u);
    ctx.set_gpr(20, ctx.gpr[2] + ctx.gpr[3]);
    goto L_088177B0;
L_088177E4:
    ctx.set_gpr(2, 0u + static_cast<std::uint32_t>(48));
    { const bool branch_taken = ctx.gpr[3] == ctx.gpr[2];
    ctx.set_gpr(8, 0u + 0u);
      if (branch_taken) {
          goto L_08817C34;
      }
      goto L_088177F0;
    }
L_088177F0:
    ctx.set_gpr(2, ctx.gpr[4] + static_cast<std::uint32_t>(-49));
    ctx.set_gpr(2, ctx.gpr[2] < static_cast<std::uint32_t>(9) ? 1u : 0u);
    if (ctx.gpr[2] == 0u) {
    ctx.set_gpr(23, ctx.gpr[5] + 0u);
        goto L_088179F8;
    }
    goto L_08817800;
L_08817800:
    ctx.set_gpr(23, rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(20)));
    ctx.set_gpr(12, ctx.gpr[8] + 0u);
    ctx.set_gpr(7, ctx.gpr[4] + static_cast<std::uint32_t>(-48));
    ctx.set_gpr(19, 0u + 0u);
    ctx.set_gpr(8, 0u + static_cast<std::uint32_t>(1));
    goto L_08817784;
L_08817818:
    ctx.set_gpr(31, 0x08817820u);
    ctx.set_gpr(4, ctx.gpr[22] + 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0007_entry, 7u, 2u, 0x08820004u>(ctx, &aot_mem) && ctx.pc == 0x08817820u) goto L_08817820;
    return;
L_08817820:
    ctx.set_gpr(31, 0x08817828u);
    ctx.set_gpr(4, ctx.gpr[2] + 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0006_entry, 6u, 941u, 0x0881FF1Cu>(ctx, &aot_mem) && ctx.pc == 0x08817828u) goto L_08817828;
    return;
L_08817828:
    ctx.set_gpr(6, ctx.gpr[2] + 0u);
    ctx.set_gpr(4, ctx.gpr[22] + 0u);
    ctx.set_gpr(5, ctx.gpr[23] + 0u);
    ctx.set_gpr(31, 0x0881783Cu);
    ctx.set_gpr(7, ctx.gpr[3] + 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0006_entry, 6u, 768u, 0x0881F368u>(ctx, &aot_mem) && ctx.pc == 0x0881783Cu) goto L_0881783C;
    return;
L_0881783C:
    ctx.set_gpr(18, ctx.gpr[2] + 0u);
    { const bool branch_taken = ctx.gpr[30] != 0u;
    ctx.set_gpr(19, ctx.gpr[3] + 0u);
      if (branch_taken) {
          goto L_08817864;
      }
      goto L_08817848;
    }
L_08817848:
    ctx.set_gpr(6, rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(64)));
    { const bool branch_taken = ctx.gpr[6] != 0u;
    ctx.set_gpr(2, 2225u << 16u);
      if (branch_taken) {
          goto L_08817868;
      }
      goto L_08817854;
    }
L_08817854:
    ctx.set_gpr(2, ctx.gpr[16] + 0u);
    ctx.set_gpr(2, (ctx.gpr[2] & ~0xFFF00000u) | ((0u & 0x00000FFFu) << 20u));
    { const bool branch_taken = ctx.gpr[2] == 0u;
    ctx.set_gpr(2, 2225u << 16u);
      if (branch_taken) {
          goto L_088179C4;
      }
      goto L_08817864;
    }
L_08817864:
    ctx.set_gpr(2, 2225u << 16u);
    goto L_08817868;
L_08817868:
    ctx.set_gpr(6, rt.memory().aot_load32(ctx.gpr[2] + static_cast<std::uint32_t>(1288)));
    ctx.set_gpr(7, rt.memory().aot_load32(ctx.gpr[2] + static_cast<std::uint32_t>(1292)));
    ctx.set_gpr(4, ctx.gpr[18] + 0u);
    ctx.set_gpr(31, 0x0881787Cu);
    ctx.set_gpr(5, ctx.gpr[19] + 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0006_entry, 6u, 927u, 0x0881FE0Cu>(ctx, &aot_mem) && ctx.pc == 0x0881787Cu) goto L_0881787C;
    return;
L_0881787C:
    { const bool branch_taken = static_cast<std::int32_t>(ctx.gpr[2]) < 0;
    ctx.set_gpr(2, 2225u << 16u);
      if (branch_taken) {
          goto L_088178A0;
      }
      goto L_08817884;
    }
L_08817884:
    ctx.set_gpr(6, rt.memory().aot_load32(ctx.gpr[2] + static_cast<std::uint32_t>(1296)));
    ctx.set_gpr(7, rt.memory().aot_load32(ctx.gpr[2] + static_cast<std::uint32_t>(1300)));
    ctx.set_gpr(4, ctx.gpr[18] + 0u);
    ctx.set_gpr(31, 0x08817898u);
    ctx.set_gpr(5, ctx.gpr[19] + 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0006_entry, 6u, 913u, 0x0881FCCCu>(ctx, &aot_mem) && ctx.pc == 0x08817898u) goto L_08817898;
    return;
L_08817898:
    if (static_cast<std::int32_t>(ctx.gpr[2]) <= 0) {
    ctx.set_gpr(5, rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(48)));
        goto L_088173BC;
    }
    goto L_088178A0;
L_088178A0:
    ctx.set_gpr(5, rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(48)));
    goto L_088178A4;
L_088178A4:
    ctx.set_gpr(31, 0x088178ACu);
    ctx.set_gpr(4, ctx.gpr[21] + 0u);
    goto L_08814400;
L_088178AC:
    ctx.set_gpr(5, rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(44)));
    ctx.set_gpr(31, 0x088178B8u);
    ctx.set_gpr(4, ctx.gpr[21] + 0u);
    goto L_08814400;
L_088178B8:
    ctx.set_gpr(5, rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(36)));
    ctx.set_gpr(31, 0x088178C4u);
    ctx.set_gpr(4, ctx.gpr[21] + 0u);
    goto L_08814400;
L_088178C4:
    ctx.set_gpr(5, rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(40)));
    ctx.set_gpr(31, 0x088178D0u);
    ctx.set_gpr(4, ctx.gpr[21] + 0u);
    goto L_08814400;
L_088178D0:
    ctx.set_gpr(5, rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(32)));
    ctx.set_gpr(31, 0x088178DCu);
    ctx.set_gpr(4, ctx.gpr[21] + 0u);
    goto L_08814400;
L_088178DC:
    ctx.set_gpr(7, rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(72)));
    goto L_08816EAC;
L_088178E4:
    { const bool branch_taken = ctx.gpr[3] != 0u;
    ctx.set_gpr(2, 0u + static_cast<std::uint32_t>(1));
      if (branch_taken) {
          goto L_08817930;
      }
      goto L_088178EC;
    }
L_088178EC:
    ctx.set_gpr(2, rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(68)));
    ctx.set_gpr(2, (ctx.gpr[2] & ~0xFFF00000u) | ((0u & 0x00000FFFu) << 20u));
    { const bool branch_taken = ctx.gpr[2] == 0u;
    ctx.set_gpr(4, 2225u << 16u);
      if (branch_taken) {
          goto L_0881797C;
      }
      goto L_088178FC;
    }
L_088178FC:
    ctx.set_gpr(2, 2225u << 16u);
    goto L_08817900;
L_08817900:
    ctx.set_gpr(6, 2225u << 16u);
    goto L_08817904;
L_08817904:
    ctx.set_gpr(18, rt.memory().aot_load32(ctx.gpr[2] + static_cast<std::uint32_t>(1280)));
    ctx.set_gpr(19, rt.memory().aot_load32(ctx.gpr[2] + static_cast<std::uint32_t>(1284)));
    ctx.set_gpr(22, rt.memory().aot_load32(ctx.gpr[6] + static_cast<std::uint32_t>(1256)));
    ctx.set_gpr(23, rt.memory().aot_load32(ctx.gpr[6] + static_cast<std::uint32_t>(1260)));
    goto L_088172DC;
L_08817918:
    ctx.set_gpr(5, rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(16)));
    ctx.set_gpr(20, 0u + 0u);
    ctx.set_gpr(7, 0u - ctx.gpr[5]);
    ctx.set_gpr(3, ctx.gpr[7] + 0u);
    ctx.set_gpr(5, 0u + 0u);
    goto L_0881746C;
L_08817930:
    { const bool branch_taken = ctx.gpr[3] != ctx.gpr[2];
    ctx.set_gpr(2, 2225u << 16u);
      if (branch_taken) {
          goto L_08817900;
      }
      goto L_08817938;
    }
L_08817938:
    ctx.set_gpr(3, rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(68)));
    { const bool branch_taken = ctx.gpr[3] != 0u;
    ctx.set_gpr(6, 2225u << 16u);
      if (branch_taken) {
          goto L_08817904;
      }
      goto L_08817944;
    }
L_08817944:
    ctx.set_gpr(3, 0u + 0u);
    goto L_08817948;
L_08817948:
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(68), ctx.gpr[3]);
    ctx.set_gpr(2, 0u + static_cast<std::uint32_t>(34));
    ctx.set_gpr(3, rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(40)));
    rt.memory().aot_store32(ctx.gpr[21] + static_cast<std::uint32_t>(0), ctx.gpr[2]);
    ctx.set_gpr(2, 0u + 0u);
    { const bool branch_taken = ctx.gpr[3] != 0u;
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(64), ctx.gpr[2]);
      if (branch_taken) {
          goto L_088178A0;
      }
      goto L_08817964;
    }
L_08817964:
    ctx.set_gpr(7, rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(72)));
    goto L_08816EAC;
L_0881796C:
    ctx.set_gpr(2, 848u << 16u);
    ctx.set_gpr(6, ctx.gpr[6] + ctx.gpr[2]);
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(68), ctx.gpr[6]);
    goto L_088173A4;
L_0881797C:
    ctx.set_gpr(6, rt.memory().aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(1256)));
    ctx.set_gpr(7, rt.memory().aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(1260)));
    ctx.set_gpr(5, ctx.gpr[17] + 0u);
    ctx.set_gpr(31, 0x08817990u);
    ctx.set_gpr(4, ctx.gpr[16] + 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0006_entry, 6u, 927u, 0x0881FE0Cu>(ctx, &aot_mem) && ctx.pc == 0x08817990u) goto L_08817990;
    return;
L_08817990:
    { const bool branch_taken = static_cast<std::int32_t>(ctx.gpr[2]) < 0;
    ctx.set_gpr(2, 2225u << 16u);
      if (branch_taken) {
          goto L_08817C04;
      }
      goto L_08817998;
    }
L_08817998:
    ctx.set_gpr(6, rt.memory().aot_load32(ctx.gpr[2] + static_cast<std::uint32_t>(1264)));
    ctx.set_gpr(7, rt.memory().aot_load32(ctx.gpr[2] + static_cast<std::uint32_t>(1268)));
    ctx.set_gpr(4, ctx.gpr[16] + 0u);
    ctx.set_gpr(31, 0x088179ACu);
    ctx.set_gpr(5, ctx.gpr[17] + 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0006_entry, 6u, 778u, 0x0881F44Cu>(ctx, &aot_mem) && ctx.pc == 0x088179ACu) goto L_088179AC;
    return;
L_088179AC:
    ctx.set_gpr(23, ctx.gpr[3] + 0u);
    ctx.set_gpr(3, 32768u << 16u);
    ctx.set_gpr(22, ctx.gpr[2] + 0u);
    ctx.set_gpr(18, ctx.gpr[2] + 0u);
    ctx.set_gpr(19, ctx.gpr[3] ^ ctx.gpr[23]);
    goto L_088172DC;
L_088179C4:
    ctx.set_gpr(6, rt.memory().aot_load32(ctx.gpr[2] + static_cast<std::uint32_t>(1304)));
    ctx.set_gpr(7, rt.memory().aot_load32(ctx.gpr[2] + static_cast<std::uint32_t>(1308)));
    ctx.set_gpr(4, ctx.gpr[18] + 0u);
    ctx.set_gpr(31, 0x088179D8u);
    ctx.set_gpr(5, ctx.gpr[3] + 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0006_entry, 6u, 927u, 0x0881FE0Cu>(ctx, &aot_mem) && ctx.pc == 0x088179D8u) goto L_088179D8;
    return;
L_088179D8:
    { const bool branch_taken = static_cast<std::int32_t>(ctx.gpr[2]) >= 0;
    ctx.set_gpr(5, rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(48)));
      if (branch_taken) {
          goto L_088173BC;
      }
      goto L_088179E0;
    }
L_088179E0:
    // nop
    goto L_088178A4;
L_088179E8:
    { const bool branch_taken = ctx.gpr[4] != ctx.gpr[2];
    ctx.set_gpr(4, 2225u << 16u);
      if (branch_taken) {
          goto L_0881769C;
      }
      goto L_088179F0;
    }
L_088179F0:
    ctx.set_gpr(3, 2225u << 16u);
    goto L_08817A64;
L_088179F8:
    ctx.set_gpr(12, 0u + 0u);
    ctx.set_gpr(19, 0u + 0u);
    goto L_08816E80;
L_08817A04:
    ctx.set_gpr(2, 2225u << 16u);
    ctx.set_gpr(6, rt.memory().aot_load32(ctx.gpr[2] + static_cast<std::uint32_t>(1240)));
    ctx.set_gpr(31, 0x08817A14u);
    ctx.set_gpr(7, rt.memory().aot_load32(ctx.gpr[2] + static_cast<std::uint32_t>(1244)));
    if (rt.invoke_chained_direct<&recomp_unit_0006_entry, 6u, 773u, 0x0881F3E0u>(ctx, &aot_mem) && ctx.pc == 0x08817A14u) goto L_08817A14;
    return;
L_08817A14:
    ctx.set_gpr(4, ctx.gpr[2] + 0u);
    ctx.set_gpr(5, ctx.gpr[3] + 0u);
    goto L_088170EC;
L_08817A20:
    ctx.set_gpr(3, 0u + 0u);
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(20), ctx.gpr[7]);
    goto L_08816E94;
L_08817A2C:
    ctx.set_gpr(2, static_cast<std::int32_t>(ctx.gpr[5]) < 58 ? 1u : 0u);
    { const bool branch_taken = ctx.gpr[2] == 0u;
    ctx.set_gpr(2, ctx.gpr[3] << 3u);
      if (branch_taken) {
          goto L_088170A0;
      }
      goto L_08817A38;
    }
L_08817A38:
    ctx.set_gpr(3, ctx.gpr[3] << 1u);
    ctx.set_gpr(3, ctx.gpr[3] + ctx.gpr[2]);
    ctx.set_gpr(4, ctx.gpr[4] + static_cast<std::uint32_t>(1));
    ctx.set_gpr(3, ctx.gpr[5] + ctx.gpr[3]);
    ctx.set_gpr(5, static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int8_t>(rt.memory().aot_load8(ctx.gpr[4] + static_cast<std::uint32_t>(0))))));
    ctx.set_gpr(2, static_cast<std::int32_t>(ctx.gpr[5]) < 48 ? 1u : 0u);
    { const bool branch_taken = ctx.gpr[2] == 0u;
    ctx.set_gpr(3, ctx.gpr[3] + static_cast<std::uint32_t>(-48));
      if (branch_taken) {
          goto L_08817A2C;
      }
      goto L_08817A58;
    }
L_08817A58:
    ctx.set_gpr(2, ctx.gpr[4] - ctx.gpr[7]);
    goto L_088170A4;
L_08817A60:
    ctx.set_gpr(3, 2225u << 16u);
    goto L_08817A64;
L_08817A64:
    ctx.set_gpr(5, rt.memory().aot_load32(ctx.gpr[3] + static_cast<std::uint32_t>(-364)));
    ctx.set_gpr(4, rt.memory().aot_load32(ctx.gpr[3] + static_cast<std::uint32_t>(-368)));
    ctx.set_gpr(2, 0u + static_cast<std::uint32_t>(34));
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(68), ctx.gpr[5]);
    ctx.set_gpr(5, rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(40)));
    rt.memory().aot_store32(ctx.gpr[21] + static_cast<std::uint32_t>(0), ctx.gpr[2]);
    { const bool branch_taken = ctx.gpr[5] != 0u;
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(64), ctx.gpr[4]);
      if (branch_taken) {
          goto L_088178A0;
      }
      goto L_08817A84;
    }
L_08817A84:
    ctx.set_gpr(7, rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(72)));
    goto L_08816EAC;
L_08817A8C:
    ctx.set_gpr(2, static_cast<std::int32_t>(ctx.gpr[19]) < 17 ? 1u : 0u);
    { const bool branch_taken = ctx.gpr[2] == 0u;
    ctx.set_gpr(8, 0u + 0u);
      if (branch_taken) {
          goto L_08817AA8;
      }
      goto L_08817A98;
    }
L_08817A98:
    ctx.set_gpr(3, ctx.gpr[20] << 3u);
    ctx.set_gpr(2, ctx.gpr[20] << 1u);
    ctx.set_gpr(2, ctx.gpr[2] + ctx.gpr[3]);
    ctx.set_gpr(20, ctx.gpr[2] + ctx.gpr[7]);
    goto L_08817AA8;
L_08817AA8:
    ctx.set_gpr(2, rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(20)));
    goto L_08817AAC;
L_08817AAC:
    ctx.set_gpr(2, ctx.gpr[2] + static_cast<std::uint32_t>(1));
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(20), ctx.gpr[2]);
    ctx.set_gpr(4, static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int8_t>(rt.memory().aot_load8(ctx.gpr[2] + static_cast<std::uint32_t>(0))))));
    goto L_08817770;
L_08817ABC:
    ctx.set_gpr(6, rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(16)));
    ctx.set_gpr(2, static_cast<std::int32_t>(ctx.gpr[6]) < -22 ? 1u : 0u);
    if (ctx.gpr[2] != 0u) {
    ctx.set_gpr(7, rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(16)));
        goto L_0881715C;
    }
    goto L_08817ACC;
L_08817ACC:
    ctx.set_gpr(2, 2225u << 16u);
    ctx.set_gpr(3, ctx.gpr[6] << 3u);
    ctx.set_gpr(2, ctx.gpr[2] + static_cast<std::uint32_t>(1000));
    ctx.set_gpr(2, ctx.gpr[2] - ctx.gpr[3]);
    ctx.set_gpr(4, rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(64)));
    ctx.set_gpr(5, rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(68)));
    ctx.set_gpr(6, rt.memory().aot_load32(ctx.gpr[2] + static_cast<std::uint32_t>(0)));
    ctx.set_gpr(31, 0x08817AF0u);
    ctx.set_gpr(7, rt.memory().aot_load32(ctx.gpr[2] + static_cast<std::uint32_t>(4)));
    if (rt.invoke_chained_direct<&recomp_unit_0006_entry, 6u, 827u, 0x0881F7D8u>(ctx, &aot_mem) && ctx.pc == 0x08817AF0u) goto L_08817AF0;
    return;
L_08817AF0:
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(64), ctx.gpr[2]);
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(68), ctx.gpr[3]);
    goto L_08816EA8;
L_08817AFC:
    ctx.set_gpr(5, rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(20)));
    ctx.set_gpr(11, 0u + 0u);
    ctx.set_gpr(4, static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int8_t>(rt.memory().aot_load8(ctx.gpr[5] + static_cast<std::uint32_t>(2))))));
    ctx.set_gpr(7, ctx.gpr[5] + static_cast<std::uint32_t>(2));
    goto L_0881705C;
L_08817B10:
    { const bool branch_taken = ctx.gpr[30] != 0u;
    ctx.set_gpr(5, rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(48)));
      if (branch_taken) {
          goto L_088178A4;
      }
      goto L_08817B18;
    }
L_08817B18:
    ctx.set_gpr(6, rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(64)));
    { const bool branch_taken = ctx.gpr[6] != 0u;
    ctx.set_gpr(2, rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(68)));
      if (branch_taken) {
          goto L_088178A4;
      }
      goto L_08817B24;
    }
L_08817B24:
    ctx.set_gpr(2, (ctx.gpr[2] & ~0xFFF00000u) | ((0u & 0x00000FFFu) << 20u));
    { const bool branch_taken = ctx.gpr[2] != 0u;
    ctx.set_gpr(4, ctx.gpr[21] + 0u);
      if (branch_taken) {
          goto L_088178A4;
      }
      goto L_08817B30;
    }
L_08817B30:
    ctx.set_gpr(5, rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(32)));
    ctx.set_gpr(31, 0x08817B3Cu);
    ctx.set_gpr(6, 0u + static_cast<std::uint32_t>(1));
    if (rt.invoke_chained_direct<&recomp_unit_0003_entry, 3u, 868u, 0x08813A9Cu>(ctx, &aot_mem) && ctx.pc == 0x08817B3Cu) goto L_08817B3C;
    return;
L_08817B3C:
    ctx.set_gpr(5, rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(36)));
    ctx.set_gpr(4, ctx.gpr[2] + 0u);
    ctx.set_gpr(31, 0x08817B4Cu);
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(32), ctx.gpr[2]);
    if (rt.invoke_chained_direct<&recomp_unit_0003_entry, 3u, 885u, 0x08813BF4u>(ctx, &aot_mem) && ctx.pc == 0x08817B4Cu) goto L_08817B4C;
    return;
L_08817B4C:
    { const bool branch_taken = static_cast<std::int32_t>(ctx.gpr[2]) <= 0;
    ctx.set_gpr(4, rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(68)));
      if (branch_taken) {
          goto L_088178A0;
      }
      goto L_08817B54;
    }
L_08817B54:
    ctx.set_gpr(3, 32752u << 16u);
    ctx.set_gpr(5, 15u << 16u);
    ctx.set_gpr(2, ctx.gpr[3] & ctx.gpr[4]);
    ctx.set_gpr(3, 65520u << 16u);
    ctx.set_gpr(2, ctx.gpr[2] + ctx.gpr[3]);
    ctx.set_gpr(5, ctx.gpr[5] | 65535u);
    ctx.set_gpr(2, ctx.gpr[2] | ctx.gpr[5]);
    ctx.set_gpr(6, 0u + static_cast<std::uint32_t>(-1));
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(68), ctx.gpr[2]);
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(64), ctx.gpr[6]);
    goto L_088178A0;
L_08817B80:
    { const bool branch_taken = ctx.gpr[30] == 0u;
    ctx.set_gpr(2, rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(68)));
      if (branch_taken) {
          goto L_08817EA4;
      }
      goto L_08817B88;
    }
L_08817B88:
    ctx.set_gpr(3, rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(68)));
    ctx.set_gpr(7, 15u << 16u);
    ctx.set_gpr(7, ctx.gpr[7] | 65535u);
    ctx.set_gpr(2, ctx.gpr[3] + 0u);
    ctx.set_gpr(2, (ctx.gpr[2] & ~0xFFF00000u) | ((0u & 0x00000FFFu) << 20u));
    { const bool branch_taken = ctx.gpr[2] == ctx.gpr[7];
    ctx.set_gpr(4, rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(64)));
      if (branch_taken) {
          goto L_08817EE8;
      }
      goto L_08817BA4;
    }
L_08817BA4:
    ctx.set_gpr(7, rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(64)));
    goto L_08817BA8;
L_08817BA8:
    ctx.set_gpr(2, ctx.gpr[7] & 1u);
    goto L_08817BAC;
L_08817BAC:
    { const bool branch_taken = ctx.gpr[2] == 0u;
    ctx.set_gpr(5, rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(48)));
      if (branch_taken) {
          goto L_088178A4;
      }
      goto L_08817BB4;
    }
L_08817BB4:
    { const bool branch_taken = ctx.gpr[30] != 0u;
    ctx.set_gpr(4, rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(24)));
      if (branch_taken) {
          goto L_08817EC0;
      }
      goto L_08817BBC;
    }
L_08817BBC:
    ctx.set_gpr(31, 0x08817BC4u);
    ctx.set_gpr(5, rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(28)));
    if (rt.invoke_chained_direct<&recomp_unit_0003_entry, 3u, 909u, 0x08813E04u>(ctx, &aot_mem) && ctx.pc == 0x08817BC4u) goto L_08817BC4;
    return;
L_08817BC4:
    ctx.set_gpr(4, rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(24)));
    ctx.set_gpr(5, rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(28)));
    ctx.set_gpr(6, ctx.gpr[2] + 0u);
    ctx.set_gpr(31, 0x08817BD8u);
    ctx.set_gpr(7, ctx.gpr[3] + 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0006_entry, 6u, 768u, 0x0881F368u>(ctx, &aot_mem) && ctx.pc == 0x08817BD8u) goto L_08817BD8;
    return;
L_08817BD8:
    ctx.set_gpr(4, ctx.gpr[2] + 0u);
    ctx.set_gpr(5, ctx.gpr[3] + 0u);
    ctx.set_gpr(6, 0u + 0u);
    ctx.set_gpr(7, 0u + 0u);
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(64), ctx.gpr[2]);
    ctx.set_gpr(31, 0x08817BF4u);
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(68), ctx.gpr[3]);
    if (rt.invoke_chained_direct<&recomp_unit_0006_entry, 6u, 906u, 0x0881FC44u>(ctx, &aot_mem) && ctx.pc == 0x08817BF4u) goto L_08817BF4;
    return;
L_08817BF4:
    { const bool branch_taken = ctx.gpr[2] == 0u;
    ctx.set_gpr(3, 0u + 0u);
      if (branch_taken) {
          goto L_08817948;
      }
      goto L_08817BFC;
    }
L_08817BFC:
    ctx.set_gpr(5, rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(48)));
    goto L_088178A4;
L_08817C04:
    ctx.set_gpr(2, 2225u << 16u);
    ctx.set_gpr(5, 2225u << 16u);
    ctx.set_gpr(18, rt.memory().aot_load32(ctx.gpr[2] + static_cast<std::uint32_t>(1272)));
    ctx.set_gpr(19, rt.memory().aot_load32(ctx.gpr[2] + static_cast<std::uint32_t>(1276)));
    ctx.set_gpr(22, rt.memory().aot_load32(ctx.gpr[5] + static_cast<std::uint32_t>(1264)));
    ctx.set_gpr(23, rt.memory().aot_load32(ctx.gpr[5] + static_cast<std::uint32_t>(1268)));
    goto L_088172DC;
L_08817C20:
    ctx.set_gpr(5, rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(20)));
    ctx.set_gpr(11, 0u + static_cast<std::uint32_t>(1));
    ctx.set_gpr(4, static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int8_t>(rt.memory().aot_load8(ctx.gpr[5] + static_cast<std::uint32_t>(2))))));
    ctx.set_gpr(7, ctx.gpr[5] + static_cast<std::uint32_t>(2));
    goto L_0881705C;
L_08817C34:
    ctx.set_gpr(2, rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(20)));
    ctx.set_gpr(3, 0u + static_cast<std::uint32_t>(48));
    ctx.set_gpr(2, ctx.gpr[2] + static_cast<std::uint32_t>(1));
    goto L_08817C40;
L_08817C40:
    ctx.set_gpr(4, static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int8_t>(rt.memory().aot_load8(ctx.gpr[2] + static_cast<std::uint32_t>(0))))));
    if (ctx.gpr[4] == ctx.gpr[3]) {
    ctx.set_gpr(2, ctx.gpr[2] + static_cast<std::uint32_t>(1));
        goto L_08817C40;
    }
    goto L_08817C4C;
L_08817C4C:
    ctx.set_gpr(7, rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(20)));
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(20), ctx.gpr[2]);
    ctx.set_gpr(8, ctx.gpr[2] - ctx.gpr[7]);
    goto L_088177F0;
L_08817C5C:
    { const bool branch_taken = static_cast<std::int32_t>(ctx.gpr[16]) >= 0;
    ctx.set_gpr(4, ctx.gpr[21] + 0u);
      if (branch_taken) {
          goto L_0881729C;
      }
      goto L_08817C64;
    }
L_08817C64:
    ctx.set_gpr(16, 0u - ctx.gpr[16]);
    ctx.set_gpr(3, ctx.gpr[16] & 15u);
    { const bool branch_taken = ctx.gpr[3] == 0u;
    ctx.set_gpr(2, ctx.gpr[16] + 0u);
      if (branch_taken) {
          goto L_08817CA4;
      }
      goto L_08817C74;
    }
L_08817C74:
    ctx.set_gpr(2, 2225u << 16u);
    ctx.set_gpr(2, ctx.gpr[2] + static_cast<std::uint32_t>(1000));
    ctx.set_gpr(3, ctx.gpr[3] << 3u);
    ctx.set_gpr(3, ctx.gpr[3] + ctx.gpr[2]);
    ctx.set_gpr(4, rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(64)));
    ctx.set_gpr(5, rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(68)));
    ctx.set_gpr(6, rt.memory().aot_load32(ctx.gpr[3] + static_cast<std::uint32_t>(0)));
    ctx.set_gpr(31, 0x08817C98u);
    ctx.set_gpr(7, rt.memory().aot_load32(ctx.gpr[3] + static_cast<std::uint32_t>(4)));
    if (rt.invoke_chained_direct<&recomp_unit_0006_entry, 6u, 827u, 0x0881F7D8u>(ctx, &aot_mem) && ctx.pc == 0x08817C98u) goto L_08817C98;
    return;
L_08817C98:
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(64), ctx.gpr[2]);
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(68), ctx.gpr[3]);
    ctx.set_gpr(2, ctx.gpr[16] + 0u);
    goto L_08817CA4;
L_08817CA4:
    ctx.set_gpr(2, (ctx.gpr[2] & ~0x0000000Fu) | ((0u & 0x0000000Fu) << 0u));
    { const bool branch_taken = ctx.gpr[2] == 0u;
    ctx.set_gpr(4, ctx.gpr[21] + 0u);
      if (branch_taken) {
          goto L_0881729C;
      }
      goto L_08817CB0;
    }
L_08817CB0:
    ctx.set_gpr(18, static_cast<std::uint32_t>(static_cast<std::int32_t>(ctx.gpr[2]) >> 4u));
    ctx.set_gpr(2, static_cast<std::int32_t>(ctx.gpr[18]) < 32 ? 1u : 0u);
    if (ctx.gpr[2] == 0u) {
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(40), 0u);
        goto L_08817944;
    }
    goto L_08817CC0;
L_08817CC0:
    ctx.set_gpr(2, static_cast<std::int32_t>(ctx.gpr[18]) < 2 ? 1u : 0u);
    { const bool branch_taken = ctx.gpr[2] != 0u;
    ctx.set_gpr(4, rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(64)));
      if (branch_taken) {
          goto L_08817F2C;
      }
      goto L_08817CCC;
    }
L_08817CCC:
    ctx.set_gpr(5, rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(68)));
    ctx.set_gpr(17, 2225u << 16u);
    ctx.set_gpr(16, 0u + 0u);
    ctx.set_gpr(20, ctx.gpr[17] + static_cast<std::uint32_t>(920));
    goto L_08817CDC;
L_08817CDC:
    ctx.set_gpr(2, ctx.gpr[18] & 1u);
    if (ctx.gpr[2] == 0u) {
    ctx.set_gpr(18, static_cast<std::uint32_t>(static_cast<std::int32_t>(ctx.gpr[18]) >> 1u));
        goto L_08817D00;
    }
    goto L_08817CE8;
L_08817CE8:
    ctx.set_gpr(6, rt.memory().aot_load32(ctx.gpr[20] + static_cast<std::uint32_t>(0)));
    ctx.set_gpr(31, 0x08817CF4u);
    ctx.set_gpr(7, rt.memory().aot_load32(ctx.gpr[20] + static_cast<std::uint32_t>(4)));
    if (rt.invoke_chained_direct<&recomp_unit_0006_entry, 6u, 778u, 0x0881F44Cu>(ctx, &aot_mem) && ctx.pc == 0x08817CF4u) goto L_08817CF4;
    return;
L_08817CF4:
    ctx.set_gpr(4, ctx.gpr[2] + 0u);
    ctx.set_gpr(5, ctx.gpr[3] + 0u);
    ctx.set_gpr(18, static_cast<std::uint32_t>(static_cast<std::int32_t>(ctx.gpr[18]) >> 1u));
    goto L_08817D00;
L_08817D00:
    ctx.set_gpr(2, static_cast<std::int32_t>(ctx.gpr[18]) < 2 ? 1u : 0u);
    ctx.set_gpr(16, ctx.gpr[16] + static_cast<std::uint32_t>(1));
    { const bool branch_taken = ctx.gpr[2] == 0u;
    ctx.set_gpr(20, ctx.gpr[20] + static_cast<std::uint32_t>(8));
      if (branch_taken) {
          goto L_08817CDC;
      }
      goto L_08817D10;
    }
L_08817D10:
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(64), ctx.gpr[4]);
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(68), ctx.gpr[5]);
    goto L_08817D18;
L_08817D18:
    ctx.set_gpr(3, ctx.gpr[17] + static_cast<std::uint32_t>(920));
    ctx.set_gpr(2, ctx.gpr[16] << 3u);
    ctx.set_gpr(2, ctx.gpr[2] + ctx.gpr[3]);
    ctx.set_gpr(4, rt.memory().aot_load32(ctx.gpr[2] + static_cast<std::uint32_t>(0)));
    ctx.set_gpr(5, rt.memory().aot_load32(ctx.gpr[2] + static_cast<std::uint32_t>(4)));
    ctx.set_gpr(16, rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(64)));
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(56), ctx.gpr[4]);
    ctx.set_gpr(4, ctx.gpr[16] + 0u);
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(60), ctx.gpr[5]);
    ctx.set_gpr(17, rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(68)));
    ctx.set_gpr(6, rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(56)));
    ctx.set_gpr(7, rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(60)));
    ctx.set_gpr(31, 0x08817D50u);
    ctx.set_gpr(5, ctx.gpr[17] + 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0006_entry, 6u, 778u, 0x0881F44Cu>(ctx, &aot_mem) && ctx.pc == 0x08817D50u) goto L_08817D50;
    return;
L_08817D50:
    ctx.set_gpr(4, ctx.gpr[2] + 0u);
    ctx.set_gpr(5, ctx.gpr[3] + 0u);
    ctx.set_gpr(6, 0u + 0u);
    ctx.set_gpr(7, 0u + 0u);
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(64), ctx.gpr[2]);
    ctx.set_gpr(31, 0x08817D6Cu);
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(68), ctx.gpr[3]);
    if (rt.invoke_chained_direct<&recomp_unit_0006_entry, 6u, 906u, 0x0881FC44u>(ctx, &aot_mem) && ctx.pc == 0x08817D6Cu) goto L_08817D6C;
    return;
L_08817D6C:
    { const bool branch_taken = ctx.gpr[2] != 0u;
    ctx.set_gpr(4, ctx.gpr[21] + 0u);
      if (branch_taken) {
          goto L_0881729C;
      }
      goto L_08817D74;
    }
L_08817D74:
    ctx.set_gpr(4, ctx.gpr[16] + 0u);
    ctx.set_gpr(5, ctx.gpr[17] + 0u);
    ctx.set_gpr(6, ctx.gpr[16] + 0u);
    ctx.set_gpr(31, 0x08817D88u);
    ctx.set_gpr(7, ctx.gpr[17] + 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0006_entry, 6u, 773u, 0x0881F3E0u>(ctx, &aot_mem) && ctx.pc == 0x08817D88u) goto L_08817D88;
    return;
L_08817D88:
    ctx.set_gpr(4, rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(56)));
    ctx.set_gpr(5, rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(60)));
    ctx.set_gpr(6, ctx.gpr[2] + 0u);
    ctx.set_gpr(31, 0x08817D9Cu);
    ctx.set_gpr(7, ctx.gpr[3] + 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0006_entry, 6u, 778u, 0x0881F44Cu>(ctx, &aot_mem) && ctx.pc == 0x08817D9Cu) goto L_08817D9C;
    return;
L_08817D9C:
    ctx.set_gpr(5, ctx.gpr[3] + 0u);
    ctx.set_gpr(6, 0u + 0u);
    ctx.set_gpr(4, ctx.gpr[2] + 0u);
    ctx.set_gpr(7, 0u + 0u);
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(64), ctx.gpr[2]);
    ctx.set_gpr(31, 0x08817DB8u);
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(68), ctx.gpr[3]);
    if (rt.invoke_chained_direct<&recomp_unit_0006_entry, 6u, 906u, 0x0881FC44u>(ctx, &aot_mem) && ctx.pc == 0x08817DB8u) goto L_08817DB8;
    return;
L_08817DB8:
    ctx.set_gpr(5, 0u + 0u);
    ctx.set_gpr(6, 0u + static_cast<std::uint32_t>(1));
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(68), ctx.gpr[5]);
    { const bool branch_taken = ctx.gpr[2] != 0u;
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(64), ctx.gpr[6]);
      if (branch_taken) {
          goto L_08817298;
      }
      goto L_08817DCC;
    }
L_08817DCC:
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(40), 0u);
    goto L_08817944;
L_08817DD4:
    ctx.set_gpr(2, static_cast<std::int32_t>(ctx.gpr[5]) < 9 ? 1u : 0u);
    { const bool branch_taken = ctx.gpr[2] == 0u;
    ctx.set_gpr(19, ctx.gpr[5] + static_cast<std::uint32_t>(1));
      if (branch_taken) {
          goto L_08817A8C;
      }
      goto L_08817DE0;
    }
L_08817DE0:
    ctx.set_gpr(3, ctx.gpr[22] << 3u);
    ctx.set_gpr(2, ctx.gpr[22] << 1u);
    ctx.set_gpr(2, ctx.gpr[2] + ctx.gpr[3]);
    ctx.set_gpr(22, ctx.gpr[2] + ctx.gpr[7]);
    ctx.set_gpr(2, rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(20)));
    ctx.set_gpr(8, 0u + 0u);
    ctx.set_gpr(2, ctx.gpr[2] + static_cast<std::uint32_t>(1));
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(20), ctx.gpr[2]);
    ctx.set_gpr(4, static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int8_t>(rt.memory().aot_load8(ctx.gpr[2] + static_cast<std::uint32_t>(0))))));
    goto L_08817770;
L_08817E08:
    ctx.set_gpr(2, 2225u << 16u);
    ctx.set_gpr(6, rt.memory().aot_load32(ctx.gpr[2] + static_cast<std::uint32_t>(1240)));
    ctx.set_gpr(7, rt.memory().aot_load32(ctx.gpr[2] + static_cast<std::uint32_t>(1244)));
    ctx.set_gpr(4, ctx.gpr[8] + 0u);
    ctx.set_gpr(31, 0x08817E20u);
    ctx.set_gpr(5, ctx.gpr[3] + 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0006_entry, 6u, 773u, 0x0881F3E0u>(ctx, &aot_mem) && ctx.pc == 0x08817E20u) goto L_08817E20;
    return;
L_08817E20:
    ctx.set_gpr(8, ctx.gpr[2] + 0u);
    ctx.set_gpr(9, ctx.gpr[3] + 0u);
    goto L_08817134;
L_08817E2C:
    ctx.set_gpr(17, ctx.gpr[3] - ctx.gpr[19]);
    ctx.set_gpr(3, rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(16)));
    ctx.set_gpr(2, ctx.gpr[17] + static_cast<std::uint32_t>(22));
    ctx.set_gpr(2, static_cast<std::int32_t>(ctx.gpr[2]) < static_cast<std::int32_t>(ctx.gpr[3]) ? 1u : 0u);
    { const bool branch_taken = ctx.gpr[2] != 0u;
    ctx.set_gpr(7, rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(16)));
      if (branch_taken) {
          goto L_0881715C;
      }
      goto L_08817E44;
    }
L_08817E44:
    ctx.set_gpr(16, 2225u << 16u);
    ctx.set_gpr(16, ctx.gpr[16] + static_cast<std::uint32_t>(1000));
    ctx.set_gpr(2, ctx.gpr[17] << 3u);
    ctx.set_gpr(2, ctx.gpr[2] + ctx.gpr[16]);
    ctx.set_gpr(6, rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(64)));
    ctx.set_gpr(7, rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(68)));
    ctx.set_gpr(4, rt.memory().aot_load32(ctx.gpr[2] + static_cast<std::uint32_t>(0)));
    ctx.set_gpr(31, 0x08817E68u);
    ctx.set_gpr(5, rt.memory().aot_load32(ctx.gpr[2] + static_cast<std::uint32_t>(4)));
    if (rt.invoke_chained_direct<&recomp_unit_0006_entry, 6u, 778u, 0x0881F44Cu>(ctx, &aot_mem) && ctx.pc == 0x08817E68u) goto L_08817E68;
    return;
L_08817E68:
    ctx.set_gpr(5, rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(16)));
    ctx.set_gpr(4, ctx.gpr[5] - ctx.gpr[17]);
    ctx.set_gpr(4, ctx.gpr[4] << 3u);
    ctx.set_gpr(4, ctx.gpr[4] + ctx.gpr[16]);
    ctx.set_gpr(6, rt.memory().aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(0)));
    ctx.set_gpr(7, rt.memory().aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(4)));
    ctx.set_gpr(5, ctx.gpr[3] + 0u);
    ctx.set_gpr(31, 0x08817E8Cu);
    ctx.set_gpr(4, ctx.gpr[2] + 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0006_entry, 6u, 778u, 0x0881F44Cu>(ctx, &aot_mem) && ctx.pc == 0x08817E8Cu) goto L_08817E8C;
    return;
L_08817E8C:
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(64), ctx.gpr[2]);
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(68), ctx.gpr[3]);
    goto L_08816EA8;
L_08817E98:
    ctx.set_gpr(3, 0u - ctx.gpr[3]);
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(20), ctx.gpr[4]);
    goto L_08816E94;
L_08817EA4:
    ctx.set_gpr(2, (ctx.gpr[2] & ~0xFFF00000u) | ((0u & 0x00000FFFu) << 20u));
    { const bool branch_taken = ctx.gpr[2] != 0u;
    ctx.set_gpr(7, rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(64)));
      if (branch_taken) {
          goto L_08817BA8;
      }
      goto L_08817EB0;
    }
L_08817EB0:
    { const bool branch_taken = ctx.gpr[7] != 0u;
    ctx.set_gpr(2, ctx.gpr[7] & 1u);
      if (branch_taken) {
          goto L_08817BAC;
      }
      goto L_08817EB8;
    }
L_08817EB8:
    ctx.set_gpr(4, rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(68)));
    goto L_08817B54;
L_08817EC0:
    ctx.set_gpr(31, 0x08817EC8u);
    ctx.set_gpr(5, rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(28)));
    if (rt.invoke_chained_direct<&recomp_unit_0003_entry, 3u, 909u, 0x08813E04u>(ctx, &aot_mem) && ctx.pc == 0x08817EC8u) goto L_08817EC8;
    return;
L_08817EC8:
    ctx.set_gpr(6, rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(24)));
    ctx.set_gpr(7, rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(28)));
    ctx.set_gpr(4, ctx.gpr[2] + 0u);
    ctx.set_gpr(31, 0x08817EDCu);
    ctx.set_gpr(5, ctx.gpr[3] + 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0006_entry, 6u, 773u, 0x0881F3E0u>(ctx, &aot_mem) && ctx.pc == 0x08817EDCu) goto L_08817EDC;
    return;
L_08817EDC:
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(64), ctx.gpr[2]);
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(68), ctx.gpr[3]);
    goto L_088178A0;
L_08817EE8:
    ctx.set_gpr(2, 0u + static_cast<std::uint32_t>(-1));
    if (ctx.gpr[4] != ctx.gpr[2]) {
    ctx.set_gpr(7, rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(64)));
        goto L_08817BA8;
    }
    goto L_08817EF4;
L_08817EF4:
    ctx.set_gpr(5, 32752u << 16u);
    ctx.set_gpr(3, ctx.gpr[3] & ctx.gpr[5]);
    ctx.set_gpr(2, 16u << 16u);
    ctx.set_gpr(3, ctx.gpr[3] + ctx.gpr[2]);
    ctx.set_gpr(6, 0u + 0u);
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(68), ctx.gpr[3]);
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(64), ctx.gpr[6]);
    goto L_088178A0;
L_08817F14:
    ctx.set_gpr(4, ctx.gpr[4] + ctx.gpr[2]);
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(68), ctx.gpr[4]);
    goto L_08817298;
L_08817F20:
    ctx.set_gpr(16, 0u + 0u);
    ctx.set_gpr(17, 2225u << 16u);
    goto L_08817220;
L_08817F2C:
    ctx.set_gpr(16, 0u + 0u);
    ctx.set_gpr(17, 2225u << 16u);
    goto L_08817D18;
L_08817F38:
    ctx.set_gpr(29, ctx.gpr[29] + static_cast<std::uint32_t>(-16));
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(8), ctx.gpr[31]);
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(4), ctx.gpr[17]);
    ctx.set_gpr(17, ctx.gpr[5] + 0u);
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(0), ctx.gpr[16]);
    ctx.set_gpr(31, 0x08817F54u);
    ctx.set_gpr(16, ctx.gpr[4] + 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0003_entry, 3u, 442u, 0x08811C60u>(ctx, &aot_mem) && ctx.pc == 0x08817F54u) goto L_08817F54;
    return;
L_08817F54:
    ctx.set_gpr(4, ctx.gpr[2] + 0u);
    ctx.set_gpr(5, ctx.gpr[16] + 0u);
    ctx.set_gpr(6, ctx.gpr[17] + 0u);
    ctx.set_gpr(31, rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(8)));
    ctx.set_gpr(17, rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(4)));
    ctx.set_gpr(16, rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(0)));
    ctx.set_gpr(29, ctx.gpr[29] + static_cast<std::uint32_t>(16));
    goto L_08816DB4;
L_08817FC0:
    ctx.set_gpr(29, ctx.gpr[29] + static_cast<std::uint32_t>(-16));
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(8), ctx.gpr[31]);
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(4), ctx.gpr[17]);
    ctx.set_gpr(17, ctx.gpr[5] + 0u);
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(0), ctx.gpr[16]);
    ctx.set_gpr(31, 0x08817FDCu);
    ctx.set_gpr(16, ctx.gpr[4] + 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0003_entry, 3u, 442u, 0x08811C60u>(ctx, &aot_mem) && ctx.pc == 0x08817FDCu) goto L_08817FDC;
    return;
L_08817FDC:
    ctx.set_gpr(6, ctx.gpr[2] + static_cast<std::uint32_t>(92));
    ctx.set_gpr(4, ctx.gpr[16] + 0u);
    ctx.set_gpr(5, ctx.gpr[17] + 0u);
    ctx.set_gpr(31, rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(8)));
    ctx.set_gpr(17, rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(4)));
    ctx.set_gpr(16, rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(0)));
    ctx.set_gpr(7, 0u + static_cast<std::uint32_t>(1));
    ctx.set_gpr(29, ctx.gpr[29] + static_cast<std::uint32_t>(16));
    (void)rt.invoke_chained_direct<&recomp_unit_0005_entry, 5u, 1u, 0x08818000u>(ctx, &aot_mem); return;
}

void recomp_unit_0004(Runtime &rt, AllegrexContext &ctx) {
    auto aot_mem = rt.memory().aot_fast_view();
    recomp_unit_0004_entry(rt, ctx, 0u, aot_mem);
}

void register_generated_unit_4(Runtime &runtime) {
    runtime.register_generated_unit(4u, 0x08814000u, 16384u, &recomp_unit_0004, &recomp_unit_0004_entry);
    runtime.register_function(0x08814000u, &recomp_unit_0004, "recomp_unit_0004");
    runtime.register_function(0x08814008u, &recomp_unit_0004, "recomp_unit_0004");
    runtime.register_function(0x08814014u, &recomp_unit_0004, "recomp_unit_0004");
    runtime.register_function(0x08814028u, &recomp_unit_0004, "recomp_unit_0004");
    runtime.register_function(0x08814064u, &recomp_unit_0004, "recomp_unit_0004");
    runtime.register_function(0x08814088u, &recomp_unit_0004, "recomp_unit_0004");
    runtime.register_function(0x08814094u, &recomp_unit_0004, "recomp_unit_0004");
    runtime.register_function(0x0881409Cu, &recomp_unit_0004, "recomp_unit_0004");
    runtime.register_function(0x088140A4u, &recomp_unit_0004, "recomp_unit_0004");
    runtime.register_function(0x088140ACu, &recomp_unit_0004, "recomp_unit_0004");
    runtime.register_function(0x088140CCu, &recomp_unit_0004, "recomp_unit_0004");
    runtime.register_function(0x088140D4u, &recomp_unit_0004, "recomp_unit_0004");
    runtime.register_function(0x088140ECu, &recomp_unit_0004, "recomp_unit_0004");
    runtime.register_function(0x08814124u, &recomp_unit_0004, "recomp_unit_0004");
    runtime.register_function(0x0881412Cu, &recomp_unit_0004, "recomp_unit_0004");
    runtime.register_function(0x08814148u, &recomp_unit_0004, "recomp_unit_0004");
    runtime.register_function(0x0881414Cu, &recomp_unit_0004, "recomp_unit_0004");
    runtime.register_function(0x0881418Cu, &recomp_unit_0004, "recomp_unit_0004");
    runtime.register_function(0x088141C8u, &recomp_unit_0004, "recomp_unit_0004");
    runtime.register_function(0x088141F0u, &recomp_unit_0004, "recomp_unit_0004");
    runtime.register_function(0x08814204u, &recomp_unit_0004, "recomp_unit_0004");
    runtime.register_function(0x08814234u, &recomp_unit_0004, "recomp_unit_0004");
    runtime.register_function(0x08814244u, &recomp_unit_0004, "recomp_unit_0004");
    runtime.register_function(0x08814260u, &recomp_unit_0004, "recomp_unit_0004");
    runtime.register_function(0x08814270u, &recomp_unit_0004, "recomp_unit_0004");
    runtime.register_function(0x08814348u, &recomp_unit_0004, "recomp_unit_0004");
    runtime.register_function(0x08814374u, &recomp_unit_0004, "recomp_unit_0004");
    runtime.register_function(0x0881439Cu, &recomp_unit_0004, "recomp_unit_0004");
    runtime.register_function(0x088143A4u, &recomp_unit_0004, "recomp_unit_0004");
    runtime.register_function(0x088143ACu, &recomp_unit_0004, "recomp_unit_0004");
    runtime.register_function(0x088143C8u, &recomp_unit_0004, "recomp_unit_0004");
    runtime.register_function(0x088143D0u, &recomp_unit_0004, "recomp_unit_0004");
    runtime.register_function(0x088143DCu, &recomp_unit_0004, "recomp_unit_0004");
    runtime.register_function(0x088143E4u, &recomp_unit_0004, "recomp_unit_0004");
    runtime.register_function(0x088143ECu, &recomp_unit_0004, "recomp_unit_0004");
    runtime.register_function(0x088143F4u, &recomp_unit_0004, "recomp_unit_0004");
    runtime.register_function(0x08814400u, &recomp_unit_0004, "recomp_unit_0004");
    runtime.register_function(0x08814408u, &recomp_unit_0004, "recomp_unit_0004");
    runtime.register_function(0x08814424u, &recomp_unit_0004, "recomp_unit_0004");
    runtime.register_function(0x08814470u, &recomp_unit_0004, "recomp_unit_0004");
    runtime.register_function(0x088144A8u, &recomp_unit_0004, "recomp_unit_0004");
    runtime.register_function(0x088144B8u, &recomp_unit_0004, "recomp_unit_0004");
    runtime.register_function(0x088144C8u, &recomp_unit_0004, "recomp_unit_0004");
    runtime.register_function(0x088144E8u, &recomp_unit_0004, "recomp_unit_0004");
    runtime.register_function(0x08814528u, &recomp_unit_0004, "recomp_unit_0004");
    runtime.register_function(0x0881454Cu, &recomp_unit_0004, "recomp_unit_0004");
    runtime.register_function(0x08814560u, &recomp_unit_0004, "recomp_unit_0004");
    runtime.register_function(0x08814578u, &recomp_unit_0004, "recomp_unit_0004");
    runtime.register_function(0x088145BCu, &recomp_unit_0004, "recomp_unit_0004");
    runtime.register_function(0x088145D0u, &recomp_unit_0004, "recomp_unit_0004");
    runtime.register_function(0x088145DCu, &recomp_unit_0004, "recomp_unit_0004");
    runtime.register_function(0x088145E0u, &recomp_unit_0004, "recomp_unit_0004");
    runtime.register_function(0x088145FCu, &recomp_unit_0004, "recomp_unit_0004");
    runtime.register_function(0x08814614u, &recomp_unit_0004, "recomp_unit_0004");
    runtime.register_function(0x08814618u, &recomp_unit_0004, "recomp_unit_0004");
    runtime.register_function(0x08814624u, &recomp_unit_0004, "recomp_unit_0004");
    runtime.register_function(0x0881462Cu, &recomp_unit_0004, "recomp_unit_0004");
    runtime.register_function(0x08814638u, &recomp_unit_0004, "recomp_unit_0004");
    runtime.register_function(0x08814640u, &recomp_unit_0004, "recomp_unit_0004");
    runtime.register_function(0x0881464Cu, &recomp_unit_0004, "recomp_unit_0004");
    runtime.register_function(0x08814660u, &recomp_unit_0004, "recomp_unit_0004");
    runtime.register_function(0x08814690u, &recomp_unit_0004, "recomp_unit_0004");
    runtime.register_function(0x0881469Cu, &recomp_unit_0004, "recomp_unit_0004");
    runtime.register_function(0x088146A4u, &recomp_unit_0004, "recomp_unit_0004");
    runtime.register_function(0x088146BCu, &recomp_unit_0004, "recomp_unit_0004");
    runtime.register_function(0x088146D0u, &recomp_unit_0004, "recomp_unit_0004");
    runtime.register_function(0x088146F0u, &recomp_unit_0004, "recomp_unit_0004");
    runtime.register_function(0x088146F4u, &recomp_unit_0004, "recomp_unit_0004");
    runtime.register_function(0x0881470Cu, &recomp_unit_0004, "recomp_unit_0004");
    runtime.register_function(0x08814720u, &recomp_unit_0004, "recomp_unit_0004");
    runtime.register_function(0x08814740u, &recomp_unit_0004, "recomp_unit_0004");
    runtime.register_function(0x08814744u, &recomp_unit_0004, "recomp_unit_0004");
    runtime.register_function(0x0881474Cu, &recomp_unit_0004, "recomp_unit_0004");
    runtime.register_function(0x08814750u, &recomp_unit_0004, "recomp_unit_0004");
    runtime.register_function(0x08814758u, &recomp_unit_0004, "recomp_unit_0004");
    runtime.register_function(0x08814760u, &recomp_unit_0004, "recomp_unit_0004");
    runtime.register_function(0x08814764u, &recomp_unit_0004, "recomp_unit_0004");
    runtime.register_function(0x08814770u, &recomp_unit_0004, "recomp_unit_0004");
    runtime.register_function(0x08814784u, &recomp_unit_0004, "recomp_unit_0004");
    runtime.register_function(0x08814788u, &recomp_unit_0004, "recomp_unit_0004");
    runtime.register_function(0x088147A0u, &recomp_unit_0004, "recomp_unit_0004");
    runtime.register_function(0x088147A8u, &recomp_unit_0004, "recomp_unit_0004");
    runtime.register_function(0x088147B8u, &recomp_unit_0004, "recomp_unit_0004");
    runtime.register_function(0x088147C4u, &recomp_unit_0004, "recomp_unit_0004");
    runtime.register_function(0x088147D4u, &recomp_unit_0004, "recomp_unit_0004");
    runtime.register_function(0x088147D8u, &recomp_unit_0004, "recomp_unit_0004");
    runtime.register_function(0x08814804u, &recomp_unit_0004, "recomp_unit_0004");
    runtime.register_function(0x08814814u, &recomp_unit_0004, "recomp_unit_0004");
    runtime.register_function(0x08814834u, &recomp_unit_0004, "recomp_unit_0004");
    runtime.register_function(0x0881483Cu, &recomp_unit_0004, "recomp_unit_0004");
    runtime.register_function(0x08814848u, &recomp_unit_0004, "recomp_unit_0004");
    runtime.register_function(0x08814850u, &recomp_unit_0004, "recomp_unit_0004");
    runtime.register_function(0x0881485Cu, &recomp_unit_0004, "recomp_unit_0004");
    runtime.register_function(0x08814864u, &recomp_unit_0004, "recomp_unit_0004");
    runtime.register_function(0x0881486Cu, &recomp_unit_0004, "recomp_unit_0004");
    runtime.register_function(0x08814878u, &recomp_unit_0004, "recomp_unit_0004");
    runtime.register_function(0x0881488Cu, &recomp_unit_0004, "recomp_unit_0004");
    runtime.register_function(0x08814894u, &recomp_unit_0004, "recomp_unit_0004");
    runtime.register_function(0x088148A0u, &recomp_unit_0004, "recomp_unit_0004");
    runtime.register_function(0x088148ACu, &recomp_unit_0004, "recomp_unit_0004");
    runtime.register_function(0x088148B4u, &recomp_unit_0004, "recomp_unit_0004");
    runtime.register_function(0x088148BCu, &recomp_unit_0004, "recomp_unit_0004");
    runtime.register_function(0x088148C8u, &recomp_unit_0004, "recomp_unit_0004");
    runtime.register_function(0x088148D0u, &recomp_unit_0004, "recomp_unit_0004");
    runtime.register_function(0x088148F0u, &recomp_unit_0004, "recomp_unit_0004");
    runtime.register_function(0x08814900u, &recomp_unit_0004, "recomp_unit_0004");
    runtime.register_function(0x08814908u, &recomp_unit_0004, "recomp_unit_0004");
    runtime.register_function(0x08814910u, &recomp_unit_0004, "recomp_unit_0004");
    runtime.register_function(0x08814930u, &recomp_unit_0004, "recomp_unit_0004");
    runtime.register_function(0x08814938u, &recomp_unit_0004, "recomp_unit_0004");
    runtime.register_function(0x08814940u, &recomp_unit_0004, "recomp_unit_0004");
    runtime.register_function(0x08814944u, &recomp_unit_0004, "recomp_unit_0004");
    runtime.register_function(0x08814954u, &recomp_unit_0004, "recomp_unit_0004");
    runtime.register_function(0x0881495Cu, &recomp_unit_0004, "recomp_unit_0004");
    runtime.register_function(0x08814964u, &recomp_unit_0004, "recomp_unit_0004");
    runtime.register_function(0x08814984u, &recomp_unit_0004, "recomp_unit_0004");
    runtime.register_function(0x0881498Cu, &recomp_unit_0004, "recomp_unit_0004");
    runtime.register_function(0x08814998u, &recomp_unit_0004, "recomp_unit_0004");
    runtime.register_function(0x088149B8u, &recomp_unit_0004, "recomp_unit_0004");
    runtime.register_function(0x088149C0u, &recomp_unit_0004, "recomp_unit_0004");
    runtime.register_function(0x088149F0u, &recomp_unit_0004, "recomp_unit_0004");
    runtime.register_function(0x088149F8u, &recomp_unit_0004, "recomp_unit_0004");
    runtime.register_function(0x08814A04u, &recomp_unit_0004, "recomp_unit_0004");
    runtime.register_function(0x08814A0Cu, &recomp_unit_0004, "recomp_unit_0004");
    runtime.register_function(0x08814A2Cu, &recomp_unit_0004, "recomp_unit_0004");
    runtime.register_function(0x08814A34u, &recomp_unit_0004, "recomp_unit_0004");
    runtime.register_function(0x08814A40u, &recomp_unit_0004, "recomp_unit_0004");
    runtime.register_function(0x08814A48u, &recomp_unit_0004, "recomp_unit_0004");
    runtime.register_function(0x08814A68u, &recomp_unit_0004, "recomp_unit_0004");
    runtime.register_function(0x08814A70u, &recomp_unit_0004, "recomp_unit_0004");
    runtime.register_function(0x08814A7Cu, &recomp_unit_0004, "recomp_unit_0004");
    runtime.register_function(0x08814A84u, &recomp_unit_0004, "recomp_unit_0004");
    runtime.register_function(0x08814A98u, &recomp_unit_0004, "recomp_unit_0004");
    runtime.register_function(0x08814AA0u, &recomp_unit_0004, "recomp_unit_0004");
    runtime.register_function(0x08814AACu, &recomp_unit_0004, "recomp_unit_0004");
    runtime.register_function(0x08814AB4u, &recomp_unit_0004, "recomp_unit_0004");
    runtime.register_function(0x08814AC0u, &recomp_unit_0004, "recomp_unit_0004");
    runtime.register_function(0x08814AC8u, &recomp_unit_0004, "recomp_unit_0004");
    runtime.register_function(0x08814AD0u, &recomp_unit_0004, "recomp_unit_0004");
    runtime.register_function(0x08814ADCu, &recomp_unit_0004, "recomp_unit_0004");
    runtime.register_function(0x08814AFCu, &recomp_unit_0004, "recomp_unit_0004");
    runtime.register_function(0x08814B04u, &recomp_unit_0004, "recomp_unit_0004");
    runtime.register_function(0x08814B10u, &recomp_unit_0004, "recomp_unit_0004");
    runtime.register_function(0x08814B30u, &recomp_unit_0004, "recomp_unit_0004");
    runtime.register_function(0x08814B38u, &recomp_unit_0004, "recomp_unit_0004");
    runtime.register_function(0x08814B40u, &recomp_unit_0004, "recomp_unit_0004");
    runtime.register_function(0x08814B48u, &recomp_unit_0004, "recomp_unit_0004");
    runtime.register_function(0x08814B64u, &recomp_unit_0004, "recomp_unit_0004");
    runtime.register_function(0x08814B6Cu, &recomp_unit_0004, "recomp_unit_0004");
    runtime.register_function(0x08814B78u, &recomp_unit_0004, "recomp_unit_0004");
    runtime.register_function(0x08814B80u, &recomp_unit_0004, "recomp_unit_0004");
    runtime.register_function(0x08814BA0u, &recomp_unit_0004, "recomp_unit_0004");
    runtime.register_function(0x08814BA8u, &recomp_unit_0004, "recomp_unit_0004");
    runtime.register_function(0x08814BB0u, &recomp_unit_0004, "recomp_unit_0004");
    runtime.register_function(0x08814BBCu, &recomp_unit_0004, "recomp_unit_0004");
    runtime.register_function(0x08814BC4u, &recomp_unit_0004, "recomp_unit_0004");
    runtime.register_function(0x08814BCCu, &recomp_unit_0004, "recomp_unit_0004");
    runtime.register_function(0x08814BDCu, &recomp_unit_0004, "recomp_unit_0004");
    runtime.register_function(0x08814BE4u, &recomp_unit_0004, "recomp_unit_0004");
    runtime.register_function(0x08814BE8u, &recomp_unit_0004, "recomp_unit_0004");
    runtime.register_function(0x08814BF8u, &recomp_unit_0004, "recomp_unit_0004");
    runtime.register_function(0x08814C00u, &recomp_unit_0004, "recomp_unit_0004");
    runtime.register_function(0x08814C08u, &recomp_unit_0004, "recomp_unit_0004");
    runtime.register_function(0x08814C1Cu, &recomp_unit_0004, "recomp_unit_0004");
    runtime.register_function(0x08814C3Cu, &recomp_unit_0004, "recomp_unit_0004");
    runtime.register_function(0x08814C44u, &recomp_unit_0004, "recomp_unit_0004");
    runtime.register_function(0x08814C4Cu, &recomp_unit_0004, "recomp_unit_0004");
    runtime.register_function(0x08814C6Cu, &recomp_unit_0004, "recomp_unit_0004");
    runtime.register_function(0x08814C74u, &recomp_unit_0004, "recomp_unit_0004");
    runtime.register_function(0x08814C8Cu, &recomp_unit_0004, "recomp_unit_0004");
    runtime.register_function(0x08814C94u, &recomp_unit_0004, "recomp_unit_0004");
    runtime.register_function(0x08814C98u, &recomp_unit_0004, "recomp_unit_0004");
    runtime.register_function(0x08814CA4u, &recomp_unit_0004, "recomp_unit_0004");
    runtime.register_function(0x08814CB0u, &recomp_unit_0004, "recomp_unit_0004");
    runtime.register_function(0x08814CB8u, &recomp_unit_0004, "recomp_unit_0004");
    runtime.register_function(0x08814CC8u, &recomp_unit_0004, "recomp_unit_0004");
    runtime.register_function(0x08814CD0u, &recomp_unit_0004, "recomp_unit_0004");
    runtime.register_function(0x08814CD4u, &recomp_unit_0004, "recomp_unit_0004");
    runtime.register_function(0x08814CE4u, &recomp_unit_0004, "recomp_unit_0004");
    runtime.register_function(0x08814CECu, &recomp_unit_0004, "recomp_unit_0004");
    runtime.register_function(0x08814CF4u, &recomp_unit_0004, "recomp_unit_0004");
    runtime.register_function(0x08814D08u, &recomp_unit_0004, "recomp_unit_0004");
    runtime.register_function(0x08814D28u, &recomp_unit_0004, "recomp_unit_0004");
    runtime.register_function(0x08814D30u, &recomp_unit_0004, "recomp_unit_0004");
    runtime.register_function(0x08814D38u, &recomp_unit_0004, "recomp_unit_0004");
    runtime.register_function(0x08814D58u, &recomp_unit_0004, "recomp_unit_0004");
    runtime.register_function(0x08814D60u, &recomp_unit_0004, "recomp_unit_0004");
    runtime.register_function(0x08814D6Cu, &recomp_unit_0004, "recomp_unit_0004");
    runtime.register_function(0x08814D74u, &recomp_unit_0004, "recomp_unit_0004");
    runtime.register_function(0x08814D80u, &recomp_unit_0004, "recomp_unit_0004");
    runtime.register_function(0x08814D88u, &recomp_unit_0004, "recomp_unit_0004");
    runtime.register_function(0x08814D90u, &recomp_unit_0004, "recomp_unit_0004");
    runtime.register_function(0x08814D9Cu, &recomp_unit_0004, "recomp_unit_0004");
    runtime.register_function(0x08814DA4u, &recomp_unit_0004, "recomp_unit_0004");
    runtime.register_function(0x08814DB0u, &recomp_unit_0004, "recomp_unit_0004");
    runtime.register_function(0x08814DB8u, &recomp_unit_0004, "recomp_unit_0004");
    runtime.register_function(0x08814DC0u, &recomp_unit_0004, "recomp_unit_0004");
    runtime.register_function(0x08814DCCu, &recomp_unit_0004, "recomp_unit_0004");
    runtime.register_function(0x08814DD4u, &recomp_unit_0004, "recomp_unit_0004");
    runtime.register_function(0x08814DE0u, &recomp_unit_0004, "recomp_unit_0004");
    runtime.register_function(0x08814DE8u, &recomp_unit_0004, "recomp_unit_0004");
    runtime.register_function(0x08814DF0u, &recomp_unit_0004, "recomp_unit_0004");
    runtime.register_function(0x08814E08u, &recomp_unit_0004, "recomp_unit_0004");
    runtime.register_function(0x08814E14u, &recomp_unit_0004, "recomp_unit_0004");
    runtime.register_function(0x08814E1Cu, &recomp_unit_0004, "recomp_unit_0004");
    runtime.register_function(0x08814E24u, &recomp_unit_0004, "recomp_unit_0004");
    runtime.register_function(0x08814E30u, &recomp_unit_0004, "recomp_unit_0004");
    runtime.register_function(0x08814E38u, &recomp_unit_0004, "recomp_unit_0004");
    runtime.register_function(0x08814E40u, &recomp_unit_0004, "recomp_unit_0004");
    runtime.register_function(0x08814E4Cu, &recomp_unit_0004, "recomp_unit_0004");
    runtime.register_function(0x08814E54u, &recomp_unit_0004, "recomp_unit_0004");
    runtime.register_function(0x08814E5Cu, &recomp_unit_0004, "recomp_unit_0004");
    runtime.register_function(0x08814E68u, &recomp_unit_0004, "recomp_unit_0004");
    runtime.register_function(0x08814E88u, &recomp_unit_0004, "recomp_unit_0004");
    runtime.register_function(0x08814E98u, &recomp_unit_0004, "recomp_unit_0004");
    runtime.register_function(0x08814EA4u, &recomp_unit_0004, "recomp_unit_0004");
    runtime.register_function(0x08814EC4u, &recomp_unit_0004, "recomp_unit_0004");
    runtime.register_function(0x08814ED0u, &recomp_unit_0004, "recomp_unit_0004");
    runtime.register_function(0x08814EFCu, &recomp_unit_0004, "recomp_unit_0004");
    runtime.register_function(0x08814F0Cu, &recomp_unit_0004, "recomp_unit_0004");
    runtime.register_function(0x08814F10u, &recomp_unit_0004, "recomp_unit_0004");
    runtime.register_function(0x08814F24u, &recomp_unit_0004, "recomp_unit_0004");
    runtime.register_function(0x08814F2Cu, &recomp_unit_0004, "recomp_unit_0004");
    runtime.register_function(0x08814F48u, &recomp_unit_0004, "recomp_unit_0004");
    runtime.register_function(0x08814F64u, &recomp_unit_0004, "recomp_unit_0004");
    runtime.register_function(0x08814F84u, &recomp_unit_0004, "recomp_unit_0004");
    runtime.register_function(0x08814FC0u, &recomp_unit_0004, "recomp_unit_0004");
    runtime.register_function(0x08814FF4u, &recomp_unit_0004, "recomp_unit_0004");
    runtime.register_function(0x08814FFCu, &recomp_unit_0004, "recomp_unit_0004");
    runtime.register_function(0x08815018u, &recomp_unit_0004, "recomp_unit_0004");
    runtime.register_function(0x0881501Cu, &recomp_unit_0004, "recomp_unit_0004");
    runtime.register_function(0x08815024u, &recomp_unit_0004, "recomp_unit_0004");
    runtime.register_function(0x08815030u, &recomp_unit_0004, "recomp_unit_0004");
    runtime.register_function(0x08815048u, &recomp_unit_0004, "recomp_unit_0004");
    runtime.register_function(0x08815064u, &recomp_unit_0004, "recomp_unit_0004");
    runtime.register_function(0x08815070u, &recomp_unit_0004, "recomp_unit_0004");
    runtime.register_function(0x08815078u, &recomp_unit_0004, "recomp_unit_0004");
    runtime.register_function(0x0881508Cu, &recomp_unit_0004, "recomp_unit_0004");
    runtime.register_function(0x08815094u, &recomp_unit_0004, "recomp_unit_0004");
    runtime.register_function(0x088150A4u, &recomp_unit_0004, "recomp_unit_0004");
    runtime.register_function(0x088150D8u, &recomp_unit_0004, "recomp_unit_0004");
    runtime.register_function(0x088150E8u, &recomp_unit_0004, "recomp_unit_0004");
    runtime.register_function(0x08815110u, &recomp_unit_0004, "recomp_unit_0004");
    runtime.register_function(0x08815138u, &recomp_unit_0004, "recomp_unit_0004");
    runtime.register_function(0x08815158u, &recomp_unit_0004, "recomp_unit_0004");
    runtime.register_function(0x08815168u, &recomp_unit_0004, "recomp_unit_0004");
    runtime.register_function(0x0881516Cu, &recomp_unit_0004, "recomp_unit_0004");
    runtime.register_function(0x08815170u, &recomp_unit_0004, "recomp_unit_0004");
    runtime.register_function(0x088151A0u, &recomp_unit_0004, "recomp_unit_0004");
    runtime.register_function(0x088151ACu, &recomp_unit_0004, "recomp_unit_0004");
    runtime.register_function(0x088151BCu, &recomp_unit_0004, "recomp_unit_0004");
    runtime.register_function(0x088151D8u, &recomp_unit_0004, "recomp_unit_0004");
    runtime.register_function(0x088151E0u, &recomp_unit_0004, "recomp_unit_0004");
    runtime.register_function(0x088151E4u, &recomp_unit_0004, "recomp_unit_0004");
    runtime.register_function(0x08815214u, &recomp_unit_0004, "recomp_unit_0004");
    runtime.register_function(0x08815218u, &recomp_unit_0004, "recomp_unit_0004");
    runtime.register_function(0x08815220u, &recomp_unit_0004, "recomp_unit_0004");
    runtime.register_function(0x08815230u, &recomp_unit_0004, "recomp_unit_0004");
    runtime.register_function(0x0881524Cu, &recomp_unit_0004, "recomp_unit_0004");
    runtime.register_function(0x08815280u, &recomp_unit_0004, "recomp_unit_0004");
    runtime.register_function(0x08815288u, &recomp_unit_0004, "recomp_unit_0004");
    runtime.register_function(0x08815290u, &recomp_unit_0004, "recomp_unit_0004");
    runtime.register_function(0x08815298u, &recomp_unit_0004, "recomp_unit_0004");
    runtime.register_function(0x088152A0u, &recomp_unit_0004, "recomp_unit_0004");
    runtime.register_function(0x088152B8u, &recomp_unit_0004, "recomp_unit_0004");
    runtime.register_function(0x088152C4u, &recomp_unit_0004, "recomp_unit_0004");
    runtime.register_function(0x088152D0u, &recomp_unit_0004, "recomp_unit_0004");
    runtime.register_function(0x088152F4u, &recomp_unit_0004, "recomp_unit_0004");
    runtime.register_function(0x08815318u, &recomp_unit_0004, "recomp_unit_0004");
    runtime.register_function(0x08815334u, &recomp_unit_0004, "recomp_unit_0004");
    runtime.register_function(0x0881533Cu, &recomp_unit_0004, "recomp_unit_0004");
    runtime.register_function(0x08815344u, &recomp_unit_0004, "recomp_unit_0004");
    runtime.register_function(0x0881534Cu, &recomp_unit_0004, "recomp_unit_0004");
    runtime.register_function(0x08815350u, &recomp_unit_0004, "recomp_unit_0004");
    runtime.register_function(0x0881535Cu, &recomp_unit_0004, "recomp_unit_0004");
    runtime.register_function(0x08815380u, &recomp_unit_0004, "recomp_unit_0004");
    runtime.register_function(0x0881538Cu, &recomp_unit_0004, "recomp_unit_0004");
    runtime.register_function(0x08815394u, &recomp_unit_0004, "recomp_unit_0004");
    runtime.register_function(0x088153A8u, &recomp_unit_0004, "recomp_unit_0004");
    runtime.register_function(0x088153E0u, &recomp_unit_0004, "recomp_unit_0004");
    runtime.register_function(0x088153E8u, &recomp_unit_0004, "recomp_unit_0004");
    runtime.register_function(0x088153F4u, &recomp_unit_0004, "recomp_unit_0004");
    runtime.register_function(0x088153FCu, &recomp_unit_0004, "recomp_unit_0004");
    runtime.register_function(0x08815414u, &recomp_unit_0004, "recomp_unit_0004");
    runtime.register_function(0x08815434u, &recomp_unit_0004, "recomp_unit_0004");
    runtime.register_function(0x08815444u, &recomp_unit_0004, "recomp_unit_0004");
    runtime.register_function(0x08815468u, &recomp_unit_0004, "recomp_unit_0004");
    runtime.register_function(0x08815490u, &recomp_unit_0004, "recomp_unit_0004");
    runtime.register_function(0x088154ACu, &recomp_unit_0004, "recomp_unit_0004");
    runtime.register_function(0x088154DCu, &recomp_unit_0004, "recomp_unit_0004");
    runtime.register_function(0x088154E4u, &recomp_unit_0004, "recomp_unit_0004");
    runtime.register_function(0x088154FCu, &recomp_unit_0004, "recomp_unit_0004");
    runtime.register_function(0x08815518u, &recomp_unit_0004, "recomp_unit_0004");
    runtime.register_function(0x08815534u, &recomp_unit_0004, "recomp_unit_0004");
    runtime.register_function(0x08815540u, &recomp_unit_0004, "recomp_unit_0004");
    runtime.register_function(0x08815548u, &recomp_unit_0004, "recomp_unit_0004");
    runtime.register_function(0x08815564u, &recomp_unit_0004, "recomp_unit_0004");
    runtime.register_function(0x08815588u, &recomp_unit_0004, "recomp_unit_0004");
    runtime.register_function(0x08815590u, &recomp_unit_0004, "recomp_unit_0004");
    runtime.register_function(0x088155ACu, &recomp_unit_0004, "recomp_unit_0004");
    runtime.register_function(0x088155D8u, &recomp_unit_0004, "recomp_unit_0004");
    runtime.register_function(0x088155E4u, &recomp_unit_0004, "recomp_unit_0004");
    runtime.register_function(0x08815600u, &recomp_unit_0004, "recomp_unit_0004");
    runtime.register_function(0x0881560Cu, &recomp_unit_0004, "recomp_unit_0004");
    runtime.register_function(0x08815618u, &recomp_unit_0004, "recomp_unit_0004");
    runtime.register_function(0x08815620u, &recomp_unit_0004, "recomp_unit_0004");
    runtime.register_function(0x08815624u, &recomp_unit_0004, "recomp_unit_0004");
    runtime.register_function(0x0881562Cu, &recomp_unit_0004, "recomp_unit_0004");
    runtime.register_function(0x08815638u, &recomp_unit_0004, "recomp_unit_0004");
    runtime.register_function(0x08815644u, &recomp_unit_0004, "recomp_unit_0004");
    runtime.register_function(0x08815650u, &recomp_unit_0004, "recomp_unit_0004");
    runtime.register_function(0x08815658u, &recomp_unit_0004, "recomp_unit_0004");
    runtime.register_function(0x08815660u, &recomp_unit_0004, "recomp_unit_0004");
    runtime.register_function(0x08815668u, &recomp_unit_0004, "recomp_unit_0004");
    runtime.register_function(0x08815674u, &recomp_unit_0004, "recomp_unit_0004");
    runtime.register_function(0x08815678u, &recomp_unit_0004, "recomp_unit_0004");
    runtime.register_function(0x08815680u, &recomp_unit_0004, "recomp_unit_0004");
    runtime.register_function(0x0881568Cu, &recomp_unit_0004, "recomp_unit_0004");
    runtime.register_function(0x08815698u, &recomp_unit_0004, "recomp_unit_0004");
    runtime.register_function(0x088156A0u, &recomp_unit_0004, "recomp_unit_0004");
    runtime.register_function(0x088156A4u, &recomp_unit_0004, "recomp_unit_0004");
    runtime.register_function(0x088156ACu, &recomp_unit_0004, "recomp_unit_0004");
    runtime.register_function(0x088156B4u, &recomp_unit_0004, "recomp_unit_0004");
    runtime.register_function(0x088156B8u, &recomp_unit_0004, "recomp_unit_0004");
    runtime.register_function(0x088156C0u, &recomp_unit_0004, "recomp_unit_0004");
    runtime.register_function(0x088156E0u, &recomp_unit_0004, "recomp_unit_0004");
    runtime.register_function(0x088156ECu, &recomp_unit_0004, "recomp_unit_0004");
    runtime.register_function(0x088156F4u, &recomp_unit_0004, "recomp_unit_0004");
    runtime.register_function(0x088156F8u, &recomp_unit_0004, "recomp_unit_0004");
    runtime.register_function(0x08815704u, &recomp_unit_0004, "recomp_unit_0004");
    runtime.register_function(0x08815708u, &recomp_unit_0004, "recomp_unit_0004");
    runtime.register_function(0x08815718u, &recomp_unit_0004, "recomp_unit_0004");
    runtime.register_function(0x08815728u, &recomp_unit_0004, "recomp_unit_0004");
    runtime.register_function(0x08815730u, &recomp_unit_0004, "recomp_unit_0004");
    runtime.register_function(0x08815734u, &recomp_unit_0004, "recomp_unit_0004");
    runtime.register_function(0x0881573Cu, &recomp_unit_0004, "recomp_unit_0004");
    runtime.register_function(0x08815748u, &recomp_unit_0004, "recomp_unit_0004");
    runtime.register_function(0x0881574Cu, &recomp_unit_0004, "recomp_unit_0004");
    runtime.register_function(0x08815754u, &recomp_unit_0004, "recomp_unit_0004");
    runtime.register_function(0x08815840u, &recomp_unit_0004, "recomp_unit_0004");
    runtime.register_function(0x08815854u, &recomp_unit_0004, "recomp_unit_0004");
    runtime.register_function(0x0881585Cu, &recomp_unit_0004, "recomp_unit_0004");
    runtime.register_function(0x08815864u, &recomp_unit_0004, "recomp_unit_0004");
    runtime.register_function(0x08815878u, &recomp_unit_0004, "recomp_unit_0004");
    runtime.register_function(0x08815884u, &recomp_unit_0004, "recomp_unit_0004");
    runtime.register_function(0x08815888u, &recomp_unit_0004, "recomp_unit_0004");
    runtime.register_function(0x08815898u, &recomp_unit_0004, "recomp_unit_0004");
    runtime.register_function(0x088158A4u, &recomp_unit_0004, "recomp_unit_0004");
    runtime.register_function(0x088158B0u, &recomp_unit_0004, "recomp_unit_0004");
    runtime.register_function(0x088158B8u, &recomp_unit_0004, "recomp_unit_0004");
    runtime.register_function(0x088158C0u, &recomp_unit_0004, "recomp_unit_0004");
    runtime.register_function(0x088158CCu, &recomp_unit_0004, "recomp_unit_0004");
    runtime.register_function(0x088158D0u, &recomp_unit_0004, "recomp_unit_0004");
    runtime.register_function(0x088158DCu, &recomp_unit_0004, "recomp_unit_0004");
    runtime.register_function(0x088158E8u, &recomp_unit_0004, "recomp_unit_0004");
    runtime.register_function(0x088158ECu, &recomp_unit_0004, "recomp_unit_0004");
    runtime.register_function(0x088158F8u, &recomp_unit_0004, "recomp_unit_0004");
    runtime.register_function(0x088158FCu, &recomp_unit_0004, "recomp_unit_0004");
    runtime.register_function(0x08815910u, &recomp_unit_0004, "recomp_unit_0004");
    runtime.register_function(0x0881592Cu, &recomp_unit_0004, "recomp_unit_0004");
    runtime.register_function(0x08815940u, &recomp_unit_0004, "recomp_unit_0004");
    runtime.register_function(0x08815960u, &recomp_unit_0004, "recomp_unit_0004");
    runtime.register_function(0x08815964u, &recomp_unit_0004, "recomp_unit_0004");
    runtime.register_function(0x08815978u, &recomp_unit_0004, "recomp_unit_0004");
    runtime.register_function(0x08815980u, &recomp_unit_0004, "recomp_unit_0004");
    runtime.register_function(0x08815988u, &recomp_unit_0004, "recomp_unit_0004");
    runtime.register_function(0x08815990u, &recomp_unit_0004, "recomp_unit_0004");
    runtime.register_function(0x08815998u, &recomp_unit_0004, "recomp_unit_0004");
    runtime.register_function(0x088159A8u, &recomp_unit_0004, "recomp_unit_0004");
    runtime.register_function(0x088159B8u, &recomp_unit_0004, "recomp_unit_0004");
    runtime.register_function(0x088159C0u, &recomp_unit_0004, "recomp_unit_0004");
    runtime.register_function(0x088159D0u, &recomp_unit_0004, "recomp_unit_0004");
    runtime.register_function(0x088159D8u, &recomp_unit_0004, "recomp_unit_0004");
    runtime.register_function(0x088159E0u, &recomp_unit_0004, "recomp_unit_0004");
    runtime.register_function(0x088159E8u, &recomp_unit_0004, "recomp_unit_0004");
    runtime.register_function(0x088159F0u, &recomp_unit_0004, "recomp_unit_0004");
    runtime.register_function(0x088159F8u, &recomp_unit_0004, "recomp_unit_0004");
    runtime.register_function(0x08815A00u, &recomp_unit_0004, "recomp_unit_0004");
    runtime.register_function(0x08815A08u, &recomp_unit_0004, "recomp_unit_0004");
    runtime.register_function(0x08815A30u, &recomp_unit_0004, "recomp_unit_0004");
    runtime.register_function(0x08815A54u, &recomp_unit_0004, "recomp_unit_0004");
    runtime.register_function(0x08815A64u, &recomp_unit_0004, "recomp_unit_0004");
    runtime.register_function(0x08815A68u, &recomp_unit_0004, "recomp_unit_0004");
    runtime.register_function(0x08815A7Cu, &recomp_unit_0004, "recomp_unit_0004");
    runtime.register_function(0x08815A84u, &recomp_unit_0004, "recomp_unit_0004");
    runtime.register_function(0x08815AA0u, &recomp_unit_0004, "recomp_unit_0004");
    runtime.register_function(0x08815AB8u, &recomp_unit_0004, "recomp_unit_0004");
    runtime.register_function(0x08815ABCu, &recomp_unit_0004, "recomp_unit_0004");
    runtime.register_function(0x08815ACCu, &recomp_unit_0004, "recomp_unit_0004");
    runtime.register_function(0x08815AD4u, &recomp_unit_0004, "recomp_unit_0004");
    runtime.register_function(0x08815AE4u, &recomp_unit_0004, "recomp_unit_0004");
    runtime.register_function(0x08815AECu, &recomp_unit_0004, "recomp_unit_0004");
    runtime.register_function(0x08815AFCu, &recomp_unit_0004, "recomp_unit_0004");
    runtime.register_function(0x08815BB0u, &recomp_unit_0004, "recomp_unit_0004");
    runtime.register_function(0x08815BD0u, &recomp_unit_0004, "recomp_unit_0004");
    runtime.register_function(0x08815BDCu, &recomp_unit_0004, "recomp_unit_0004");
    runtime.register_function(0x08815BF0u, &recomp_unit_0004, "recomp_unit_0004");
    runtime.register_function(0x08815BF8u, &recomp_unit_0004, "recomp_unit_0004");
    runtime.register_function(0x08815C04u, &recomp_unit_0004, "recomp_unit_0004");
    runtime.register_function(0x08815C10u, &recomp_unit_0004, "recomp_unit_0004");
    runtime.register_function(0x08815C14u, &recomp_unit_0004, "recomp_unit_0004");
    runtime.register_function(0x08815C2Cu, &recomp_unit_0004, "recomp_unit_0004");
    runtime.register_function(0x08815C4Cu, &recomp_unit_0004, "recomp_unit_0004");
    runtime.register_function(0x08815C54u, &recomp_unit_0004, "recomp_unit_0004");
    runtime.register_function(0x08815C74u, &recomp_unit_0004, "recomp_unit_0004");
    runtime.register_function(0x08815C84u, &recomp_unit_0004, "recomp_unit_0004");
    runtime.register_function(0x08815C8Cu, &recomp_unit_0004, "recomp_unit_0004");
    runtime.register_function(0x08815C94u, &recomp_unit_0004, "recomp_unit_0004");
    runtime.register_function(0x08815D50u, &recomp_unit_0004, "recomp_unit_0004");
    runtime.register_function(0x08815D64u, &recomp_unit_0004, "recomp_unit_0004");
    runtime.register_function(0x08815E04u, &recomp_unit_0004, "recomp_unit_0004");
    runtime.register_function(0x08815E2Cu, &recomp_unit_0004, "recomp_unit_0004");
    runtime.register_function(0x08815E3Cu, &recomp_unit_0004, "recomp_unit_0004");
    runtime.register_function(0x08815E40u, &recomp_unit_0004, "recomp_unit_0004");
    runtime.register_function(0x08815E54u, &recomp_unit_0004, "recomp_unit_0004");
    runtime.register_function(0x08815E5Cu, &recomp_unit_0004, "recomp_unit_0004");
    runtime.register_function(0x08815E78u, &recomp_unit_0004, "recomp_unit_0004");
    runtime.register_function(0x08815EF8u, &recomp_unit_0004, "recomp_unit_0004");
    runtime.register_function(0x08815F50u, &recomp_unit_0004, "recomp_unit_0004");
    runtime.register_function(0x08815F64u, &recomp_unit_0004, "recomp_unit_0004");
    runtime.register_function(0x08815F6Cu, &recomp_unit_0004, "recomp_unit_0004");
    runtime.register_function(0x08815F70u, &recomp_unit_0004, "recomp_unit_0004");
    runtime.register_function(0x08815FF4u, &recomp_unit_0004, "recomp_unit_0004");
    runtime.register_function(0x08816050u, &recomp_unit_0004, "recomp_unit_0004");
    runtime.register_function(0x08816064u, &recomp_unit_0004, "recomp_unit_0004");
    runtime.register_function(0x0881607Cu, &recomp_unit_0004, "recomp_unit_0004");
    runtime.register_function(0x08816084u, &recomp_unit_0004, "recomp_unit_0004");
    runtime.register_function(0x088160C0u, &recomp_unit_0004, "recomp_unit_0004");
    runtime.register_function(0x088160E8u, &recomp_unit_0004, "recomp_unit_0004");
    runtime.register_function(0x088160FCu, &recomp_unit_0004, "recomp_unit_0004");
    runtime.register_function(0x0881619Cu, &recomp_unit_0004, "recomp_unit_0004");
    runtime.register_function(0x088161C0u, &recomp_unit_0004, "recomp_unit_0004");
    runtime.register_function(0x088161D4u, &recomp_unit_0004, "recomp_unit_0004");
    runtime.register_function(0x088161DCu, &recomp_unit_0004, "recomp_unit_0004");
    runtime.register_function(0x08816204u, &recomp_unit_0004, "recomp_unit_0004");
    runtime.register_function(0x0881622Cu, &recomp_unit_0004, "recomp_unit_0004");
    runtime.register_function(0x08816258u, &recomp_unit_0004, "recomp_unit_0004");
    runtime.register_function(0x08816260u, &recomp_unit_0004, "recomp_unit_0004");
    runtime.register_function(0x08816274u, &recomp_unit_0004, "recomp_unit_0004");
    runtime.register_function(0x08816278u, &recomp_unit_0004, "recomp_unit_0004");
    runtime.register_function(0x08816288u, &recomp_unit_0004, "recomp_unit_0004");
    runtime.register_function(0x088162B0u, &recomp_unit_0004, "recomp_unit_0004");
    runtime.register_function(0x088162D4u, &recomp_unit_0004, "recomp_unit_0004");
    runtime.register_function(0x088162E8u, &recomp_unit_0004, "recomp_unit_0004");
    runtime.register_function(0x088162F8u, &recomp_unit_0004, "recomp_unit_0004");
    runtime.register_function(0x08816320u, &recomp_unit_0004, "recomp_unit_0004");
    runtime.register_function(0x08816344u, &recomp_unit_0004, "recomp_unit_0004");
    runtime.register_function(0x08816358u, &recomp_unit_0004, "recomp_unit_0004");
    runtime.register_function(0x08816370u, &recomp_unit_0004, "recomp_unit_0004");
    runtime.register_function(0x08816384u, &recomp_unit_0004, "recomp_unit_0004");
    runtime.register_function(0x08816390u, &recomp_unit_0004, "recomp_unit_0004");
    runtime.register_function(0x088163C8u, &recomp_unit_0004, "recomp_unit_0004");
    runtime.register_function(0x088163D8u, &recomp_unit_0004, "recomp_unit_0004");
    runtime.register_function(0x08816414u, &recomp_unit_0004, "recomp_unit_0004");
    runtime.register_function(0x08816458u, &recomp_unit_0004, "recomp_unit_0004");
    runtime.register_function(0x08816470u, &recomp_unit_0004, "recomp_unit_0004");
    runtime.register_function(0x0881649Cu, &recomp_unit_0004, "recomp_unit_0004");
    runtime.register_function(0x088164A8u, &recomp_unit_0004, "recomp_unit_0004");
    runtime.register_function(0x088164C4u, &recomp_unit_0004, "recomp_unit_0004");
    runtime.register_function(0x088164D0u, &recomp_unit_0004, "recomp_unit_0004");
    runtime.register_function(0x088164D4u, &recomp_unit_0004, "recomp_unit_0004");
    runtime.register_function(0x088164E0u, &recomp_unit_0004, "recomp_unit_0004");
    runtime.register_function(0x088164E8u, &recomp_unit_0004, "recomp_unit_0004");
    runtime.register_function(0x088164FCu, &recomp_unit_0004, "recomp_unit_0004");
    runtime.register_function(0x0881650Cu, &recomp_unit_0004, "recomp_unit_0004");
    runtime.register_function(0x08816518u, &recomp_unit_0004, "recomp_unit_0004");
    runtime.register_function(0x08816528u, &recomp_unit_0004, "recomp_unit_0004");
    runtime.register_function(0x08816554u, &recomp_unit_0004, "recomp_unit_0004");
    runtime.register_function(0x08816558u, &recomp_unit_0004, "recomp_unit_0004");
    runtime.register_function(0x08816564u, &recomp_unit_0004, "recomp_unit_0004");
    runtime.register_function(0x0881656Cu, &recomp_unit_0004, "recomp_unit_0004");
    runtime.register_function(0x0881657Cu, &recomp_unit_0004, "recomp_unit_0004");
    runtime.register_function(0x08816584u, &recomp_unit_0004, "recomp_unit_0004");
    runtime.register_function(0x0881658Cu, &recomp_unit_0004, "recomp_unit_0004");
    runtime.register_function(0x088165B8u, &recomp_unit_0004, "recomp_unit_0004");
    runtime.register_function(0x088165BCu, &recomp_unit_0004, "recomp_unit_0004");
    runtime.register_function(0x088165F8u, &recomp_unit_0004, "recomp_unit_0004");
    runtime.register_function(0x08816600u, &recomp_unit_0004, "recomp_unit_0004");
    runtime.register_function(0x08816608u, &recomp_unit_0004, "recomp_unit_0004");
    runtime.register_function(0x08816610u, &recomp_unit_0004, "recomp_unit_0004");
    runtime.register_function(0x08816624u, &recomp_unit_0004, "recomp_unit_0004");
    runtime.register_function(0x08816630u, &recomp_unit_0004, "recomp_unit_0004");
    runtime.register_function(0x08816638u, &recomp_unit_0004, "recomp_unit_0004");
    runtime.register_function(0x08816644u, &recomp_unit_0004, "recomp_unit_0004");
    runtime.register_function(0x08816650u, &recomp_unit_0004, "recomp_unit_0004");
    runtime.register_function(0x08816658u, &recomp_unit_0004, "recomp_unit_0004");
    runtime.register_function(0x08816660u, &recomp_unit_0004, "recomp_unit_0004");
    runtime.register_function(0x08816664u, &recomp_unit_0004, "recomp_unit_0004");
    runtime.register_function(0x08816674u, &recomp_unit_0004, "recomp_unit_0004");
    runtime.register_function(0x0881667Cu, &recomp_unit_0004, "recomp_unit_0004");
    runtime.register_function(0x08816690u, &recomp_unit_0004, "recomp_unit_0004");
    runtime.register_function(0x088166BCu, &recomp_unit_0004, "recomp_unit_0004");
    runtime.register_function(0x088166C0u, &recomp_unit_0004, "recomp_unit_0004");
    runtime.register_function(0x088166E4u, &recomp_unit_0004, "recomp_unit_0004");
    runtime.register_function(0x088166E8u, &recomp_unit_0004, "recomp_unit_0004");
    runtime.register_function(0x088166FCu, &recomp_unit_0004, "recomp_unit_0004");
    runtime.register_function(0x08816704u, &recomp_unit_0004, "recomp_unit_0004");
    runtime.register_function(0x08816710u, &recomp_unit_0004, "recomp_unit_0004");
    runtime.register_function(0x08816718u, &recomp_unit_0004, "recomp_unit_0004");
    runtime.register_function(0x08816720u, &recomp_unit_0004, "recomp_unit_0004");
    runtime.register_function(0x08816728u, &recomp_unit_0004, "recomp_unit_0004");
    runtime.register_function(0x0881672Cu, &recomp_unit_0004, "recomp_unit_0004");
    runtime.register_function(0x08816738u, &recomp_unit_0004, "recomp_unit_0004");
    runtime.register_function(0x08816740u, &recomp_unit_0004, "recomp_unit_0004");
    runtime.register_function(0x08816748u, &recomp_unit_0004, "recomp_unit_0004");
    runtime.register_function(0x08816754u, &recomp_unit_0004, "recomp_unit_0004");
    runtime.register_function(0x0881675Cu, &recomp_unit_0004, "recomp_unit_0004");
    runtime.register_function(0x08816764u, &recomp_unit_0004, "recomp_unit_0004");
    runtime.register_function(0x08816768u, &recomp_unit_0004, "recomp_unit_0004");
    runtime.register_function(0x08816774u, &recomp_unit_0004, "recomp_unit_0004");
    runtime.register_function(0x0881677Cu, &recomp_unit_0004, "recomp_unit_0004");
    runtime.register_function(0x08816788u, &recomp_unit_0004, "recomp_unit_0004");
    runtime.register_function(0x08816794u, &recomp_unit_0004, "recomp_unit_0004");
    runtime.register_function(0x088167A4u, &recomp_unit_0004, "recomp_unit_0004");
    runtime.register_function(0x088167A8u, &recomp_unit_0004, "recomp_unit_0004");
    runtime.register_function(0x088167B8u, &recomp_unit_0004, "recomp_unit_0004");
    runtime.register_function(0x088167C0u, &recomp_unit_0004, "recomp_unit_0004");
    runtime.register_function(0x088167D4u, &recomp_unit_0004, "recomp_unit_0004");
    runtime.register_function(0x088167DCu, &recomp_unit_0004, "recomp_unit_0004");
    runtime.register_function(0x088167E8u, &recomp_unit_0004, "recomp_unit_0004");
    runtime.register_function(0x08816834u, &recomp_unit_0004, "recomp_unit_0004");
    runtime.register_function(0x0881683Cu, &recomp_unit_0004, "recomp_unit_0004");
    runtime.register_function(0x08816844u, &recomp_unit_0004, "recomp_unit_0004");
    runtime.register_function(0x0881684Cu, &recomp_unit_0004, "recomp_unit_0004");
    runtime.register_function(0x08816854u, &recomp_unit_0004, "recomp_unit_0004");
    runtime.register_function(0x08816858u, &recomp_unit_0004, "recomp_unit_0004");
    runtime.register_function(0x0881685Cu, &recomp_unit_0004, "recomp_unit_0004");
    runtime.register_function(0x08816894u, &recomp_unit_0004, "recomp_unit_0004");
    runtime.register_function(0x0881689Cu, &recomp_unit_0004, "recomp_unit_0004");
    runtime.register_function(0x088168E4u, &recomp_unit_0004, "recomp_unit_0004");
    runtime.register_function(0x088168F4u, &recomp_unit_0004, "recomp_unit_0004");
    runtime.register_function(0x08816920u, &recomp_unit_0004, "recomp_unit_0004");
    runtime.register_function(0x0881692Cu, &recomp_unit_0004, "recomp_unit_0004");
    runtime.register_function(0x08816948u, &recomp_unit_0004, "recomp_unit_0004");
    runtime.register_function(0x08816958u, &recomp_unit_0004, "recomp_unit_0004");
    runtime.register_function(0x0881695Cu, &recomp_unit_0004, "recomp_unit_0004");
    runtime.register_function(0x08816968u, &recomp_unit_0004, "recomp_unit_0004");
    runtime.register_function(0x0881696Cu, &recomp_unit_0004, "recomp_unit_0004");
    runtime.register_function(0x08816978u, &recomp_unit_0004, "recomp_unit_0004");
    runtime.register_function(0x0881698Cu, &recomp_unit_0004, "recomp_unit_0004");
    runtime.register_function(0x08816994u, &recomp_unit_0004, "recomp_unit_0004");
    runtime.register_function(0x088169A0u, &recomp_unit_0004, "recomp_unit_0004");
    runtime.register_function(0x088169A8u, &recomp_unit_0004, "recomp_unit_0004");
    runtime.register_function(0x088169B0u, &recomp_unit_0004, "recomp_unit_0004");
    runtime.register_function(0x088169C0u, &recomp_unit_0004, "recomp_unit_0004");
    runtime.register_function(0x088169C8u, &recomp_unit_0004, "recomp_unit_0004");
    runtime.register_function(0x088169DCu, &recomp_unit_0004, "recomp_unit_0004");
    runtime.register_function(0x088169E0u, &recomp_unit_0004, "recomp_unit_0004");
    runtime.register_function(0x088169F0u, &recomp_unit_0004, "recomp_unit_0004");
    runtime.register_function(0x088169FCu, &recomp_unit_0004, "recomp_unit_0004");
    runtime.register_function(0x08816A00u, &recomp_unit_0004, "recomp_unit_0004");
    runtime.register_function(0x08816A0Cu, &recomp_unit_0004, "recomp_unit_0004");
    runtime.register_function(0x08816A14u, &recomp_unit_0004, "recomp_unit_0004");
    runtime.register_function(0x08816A1Cu, &recomp_unit_0004, "recomp_unit_0004");
    runtime.register_function(0x08816A24u, &recomp_unit_0004, "recomp_unit_0004");
    runtime.register_function(0x08816A2Cu, &recomp_unit_0004, "recomp_unit_0004");
    runtime.register_function(0x08816A30u, &recomp_unit_0004, "recomp_unit_0004");
    runtime.register_function(0x08816A38u, &recomp_unit_0004, "recomp_unit_0004");
    runtime.register_function(0x08816A48u, &recomp_unit_0004, "recomp_unit_0004");
    runtime.register_function(0x08816A54u, &recomp_unit_0004, "recomp_unit_0004");
    runtime.register_function(0x08816A78u, &recomp_unit_0004, "recomp_unit_0004");
    runtime.register_function(0x08816A7Cu, &recomp_unit_0004, "recomp_unit_0004");
    runtime.register_function(0x08816A88u, &recomp_unit_0004, "recomp_unit_0004");
    runtime.register_function(0x08816AB4u, &recomp_unit_0004, "recomp_unit_0004");
    runtime.register_function(0x08816AC0u, &recomp_unit_0004, "recomp_unit_0004");
    runtime.register_function(0x08816AC8u, &recomp_unit_0004, "recomp_unit_0004");
    runtime.register_function(0x08816AD0u, &recomp_unit_0004, "recomp_unit_0004");
    runtime.register_function(0x08816AD8u, &recomp_unit_0004, "recomp_unit_0004");
    runtime.register_function(0x08816AE0u, &recomp_unit_0004, "recomp_unit_0004");
    runtime.register_function(0x08816AF8u, &recomp_unit_0004, "recomp_unit_0004");
    runtime.register_function(0x08816B00u, &recomp_unit_0004, "recomp_unit_0004");
    runtime.register_function(0x08816B08u, &recomp_unit_0004, "recomp_unit_0004");
    runtime.register_function(0x08816B10u, &recomp_unit_0004, "recomp_unit_0004");
    runtime.register_function(0x08816B28u, &recomp_unit_0004, "recomp_unit_0004");
    runtime.register_function(0x08816B34u, &recomp_unit_0004, "recomp_unit_0004");
    runtime.register_function(0x08816B3Cu, &recomp_unit_0004, "recomp_unit_0004");
    runtime.register_function(0x08816B5Cu, &recomp_unit_0004, "recomp_unit_0004");
    runtime.register_function(0x08816B68u, &recomp_unit_0004, "recomp_unit_0004");
    runtime.register_function(0x08816B70u, &recomp_unit_0004, "recomp_unit_0004");
    runtime.register_function(0x08816B78u, &recomp_unit_0004, "recomp_unit_0004");
    runtime.register_function(0x08816B80u, &recomp_unit_0004, "recomp_unit_0004");
    runtime.register_function(0x08816B84u, &recomp_unit_0004, "recomp_unit_0004");
    runtime.register_function(0x08816B90u, &recomp_unit_0004, "recomp_unit_0004");
    runtime.register_function(0x08816BA4u, &recomp_unit_0004, "recomp_unit_0004");
    runtime.register_function(0x08816BACu, &recomp_unit_0004, "recomp_unit_0004");
    runtime.register_function(0x08816BB4u, &recomp_unit_0004, "recomp_unit_0004");
    runtime.register_function(0x08816BC0u, &recomp_unit_0004, "recomp_unit_0004");
    runtime.register_function(0x08816BC8u, &recomp_unit_0004, "recomp_unit_0004");
    runtime.register_function(0x08816BCCu, &recomp_unit_0004, "recomp_unit_0004");
    runtime.register_function(0x08816BD8u, &recomp_unit_0004, "recomp_unit_0004");
    runtime.register_function(0x08816BECu, &recomp_unit_0004, "recomp_unit_0004");
    runtime.register_function(0x08816BF4u, &recomp_unit_0004, "recomp_unit_0004");
    runtime.register_function(0x08816BFCu, &recomp_unit_0004, "recomp_unit_0004");
    runtime.register_function(0x08816C04u, &recomp_unit_0004, "recomp_unit_0004");
    runtime.register_function(0x08816C0Cu, &recomp_unit_0004, "recomp_unit_0004");
    runtime.register_function(0x08816C18u, &recomp_unit_0004, "recomp_unit_0004");
    runtime.register_function(0x08816C1Cu, &recomp_unit_0004, "recomp_unit_0004");
    runtime.register_function(0x08816C24u, &recomp_unit_0004, "recomp_unit_0004");
    runtime.register_function(0x08816C44u, &recomp_unit_0004, "recomp_unit_0004");
    runtime.register_function(0x08816C48u, &recomp_unit_0004, "recomp_unit_0004");
    runtime.register_function(0x08816C50u, &recomp_unit_0004, "recomp_unit_0004");
    runtime.register_function(0x08816C64u, &recomp_unit_0004, "recomp_unit_0004");
    runtime.register_function(0x08816C6Cu, &recomp_unit_0004, "recomp_unit_0004");
    runtime.register_function(0x08816C7Cu, &recomp_unit_0004, "recomp_unit_0004");
    runtime.register_function(0x08816C84u, &recomp_unit_0004, "recomp_unit_0004");
    runtime.register_function(0x08816C90u, &recomp_unit_0004, "recomp_unit_0004");
    runtime.register_function(0x08816C98u, &recomp_unit_0004, "recomp_unit_0004");
    runtime.register_function(0x08816CA4u, &recomp_unit_0004, "recomp_unit_0004");
    runtime.register_function(0x08816CB0u, &recomp_unit_0004, "recomp_unit_0004");
    runtime.register_function(0x08816CBCu, &recomp_unit_0004, "recomp_unit_0004");
    runtime.register_function(0x08816CCCu, &recomp_unit_0004, "recomp_unit_0004");
    runtime.register_function(0x08816CD4u, &recomp_unit_0004, "recomp_unit_0004");
    runtime.register_function(0x08816CDCu, &recomp_unit_0004, "recomp_unit_0004");
    runtime.register_function(0x08816CFCu, &recomp_unit_0004, "recomp_unit_0004");
    runtime.register_function(0x08816D04u, &recomp_unit_0004, "recomp_unit_0004");
    runtime.register_function(0x08816D08u, &recomp_unit_0004, "recomp_unit_0004");
    runtime.register_function(0x08816D14u, &recomp_unit_0004, "recomp_unit_0004");
    runtime.register_function(0x08816D1Cu, &recomp_unit_0004, "recomp_unit_0004");
    runtime.register_function(0x08816D34u, &recomp_unit_0004, "recomp_unit_0004");
    runtime.register_function(0x08816D44u, &recomp_unit_0004, "recomp_unit_0004");
    runtime.register_function(0x08816D50u, &recomp_unit_0004, "recomp_unit_0004");
    runtime.register_function(0x08816D5Cu, &recomp_unit_0004, "recomp_unit_0004");
    runtime.register_function(0x08816D60u, &recomp_unit_0004, "recomp_unit_0004");
    runtime.register_function(0x08816D68u, &recomp_unit_0004, "recomp_unit_0004");
    runtime.register_function(0x08816D6Cu, &recomp_unit_0004, "recomp_unit_0004");
    runtime.register_function(0x08816D7Cu, &recomp_unit_0004, "recomp_unit_0004");
    runtime.register_function(0x08816D88u, &recomp_unit_0004, "recomp_unit_0004");
    runtime.register_function(0x08816D98u, &recomp_unit_0004, "recomp_unit_0004");
    runtime.register_function(0x08816D9Cu, &recomp_unit_0004, "recomp_unit_0004");
    runtime.register_function(0x08816DA4u, &recomp_unit_0004, "recomp_unit_0004");
    runtime.register_function(0x08816DACu, &recomp_unit_0004, "recomp_unit_0004");
    runtime.register_function(0x08816DB4u, &recomp_unit_0004, "recomp_unit_0004");
    runtime.register_function(0x08816E00u, &recomp_unit_0004, "recomp_unit_0004");
    runtime.register_function(0x08816E18u, &recomp_unit_0004, "recomp_unit_0004");
    runtime.register_function(0x08816E34u, &recomp_unit_0004, "recomp_unit_0004");
    runtime.register_function(0x08816E3Cu, &recomp_unit_0004, "recomp_unit_0004");
    runtime.register_function(0x08816E4Cu, &recomp_unit_0004, "recomp_unit_0004");
    runtime.register_function(0x08816E5Cu, &recomp_unit_0004, "recomp_unit_0004");
    runtime.register_function(0x08816E60u, &recomp_unit_0004, "recomp_unit_0004");
    runtime.register_function(0x08816E68u, &recomp_unit_0004, "recomp_unit_0004");
    runtime.register_function(0x08816E74u, &recomp_unit_0004, "recomp_unit_0004");
    runtime.register_function(0x08816E80u, &recomp_unit_0004, "recomp_unit_0004");
    runtime.register_function(0x08816E84u, &recomp_unit_0004, "recomp_unit_0004");
    runtime.register_function(0x08816E8Cu, &recomp_unit_0004, "recomp_unit_0004");
    runtime.register_function(0x08816E94u, &recomp_unit_0004, "recomp_unit_0004");
    runtime.register_function(0x08816E9Cu, &recomp_unit_0004, "recomp_unit_0004");
    runtime.register_function(0x08816EA8u, &recomp_unit_0004, "recomp_unit_0004");
    runtime.register_function(0x08816EACu, &recomp_unit_0004, "recomp_unit_0004");
    runtime.register_function(0x08816EB4u, &recomp_unit_0004, "recomp_unit_0004");
    runtime.register_function(0x08816EB8u, &recomp_unit_0004, "recomp_unit_0004");
    runtime.register_function(0x08816EC4u, &recomp_unit_0004, "recomp_unit_0004");
    runtime.register_function(0x08816F10u, &recomp_unit_0004, "recomp_unit_0004");
    runtime.register_function(0x08816F18u, &recomp_unit_0004, "recomp_unit_0004");
    runtime.register_function(0x08816F30u, &recomp_unit_0004, "recomp_unit_0004");
    runtime.register_function(0x08816F38u, &recomp_unit_0004, "recomp_unit_0004");
    runtime.register_function(0x08816F4Cu, &recomp_unit_0004, "recomp_unit_0004");
    runtime.register_function(0x08816F50u, &recomp_unit_0004, "recomp_unit_0004");
    runtime.register_function(0x08816F58u, &recomp_unit_0004, "recomp_unit_0004");
    runtime.register_function(0x08816F64u, &recomp_unit_0004, "recomp_unit_0004");
    runtime.register_function(0x08816F74u, &recomp_unit_0004, "recomp_unit_0004");
    runtime.register_function(0x08816F78u, &recomp_unit_0004, "recomp_unit_0004");
    runtime.register_function(0x08816F90u, &recomp_unit_0004, "recomp_unit_0004");
    runtime.register_function(0x08816F9Cu, &recomp_unit_0004, "recomp_unit_0004");
    runtime.register_function(0x08816FA4u, &recomp_unit_0004, "recomp_unit_0004");
    runtime.register_function(0x08816FB0u, &recomp_unit_0004, "recomp_unit_0004");
    runtime.register_function(0x08816FC8u, &recomp_unit_0004, "recomp_unit_0004");
    runtime.register_function(0x08816FD0u, &recomp_unit_0004, "recomp_unit_0004");
    runtime.register_function(0x08816FE8u, &recomp_unit_0004, "recomp_unit_0004");
    runtime.register_function(0x08816FF0u, &recomp_unit_0004, "recomp_unit_0004");
    runtime.register_function(0x0881702Cu, &recomp_unit_0004, "recomp_unit_0004");
    runtime.register_function(0x0881703Cu, &recomp_unit_0004, "recomp_unit_0004");
    runtime.register_function(0x08817050u, &recomp_unit_0004, "recomp_unit_0004");
    runtime.register_function(0x0881705Cu, &recomp_unit_0004, "recomp_unit_0004");
    runtime.register_function(0x08817070u, &recomp_unit_0004, "recomp_unit_0004");
    runtime.register_function(0x0881707Cu, &recomp_unit_0004, "recomp_unit_0004");
    runtime.register_function(0x08817080u, &recomp_unit_0004, "recomp_unit_0004");
    runtime.register_function(0x0881708Cu, &recomp_unit_0004, "recomp_unit_0004");
    runtime.register_function(0x088170A0u, &recomp_unit_0004, "recomp_unit_0004");
    runtime.register_function(0x088170A4u, &recomp_unit_0004, "recomp_unit_0004");
    runtime.register_function(0x088170B0u, &recomp_unit_0004, "recomp_unit_0004");
    runtime.register_function(0x088170B4u, &recomp_unit_0004, "recomp_unit_0004");
    runtime.register_function(0x088170BCu, &recomp_unit_0004, "recomp_unit_0004");
    runtime.register_function(0x088170C4u, &recomp_unit_0004, "recomp_unit_0004");
    runtime.register_function(0x088170E0u, &recomp_unit_0004, "recomp_unit_0004");
    runtime.register_function(0x088170ECu, &recomp_unit_0004, "recomp_unit_0004");
    runtime.register_function(0x088170FCu, &recomp_unit_0004, "recomp_unit_0004");
    runtime.register_function(0x08817118u, &recomp_unit_0004, "recomp_unit_0004");
    runtime.register_function(0x08817128u, &recomp_unit_0004, "recomp_unit_0004");
    runtime.register_function(0x08817134u, &recomp_unit_0004, "recomp_unit_0004");
    runtime.register_function(0x08817148u, &recomp_unit_0004, "recomp_unit_0004");
    runtime.register_function(0x08817150u, &recomp_unit_0004, "recomp_unit_0004");
    runtime.register_function(0x0881715Cu, &recomp_unit_0004, "recomp_unit_0004");
    runtime.register_function(0x0881716Cu, &recomp_unit_0004, "recomp_unit_0004");
    runtime.register_function(0x08817174u, &recomp_unit_0004, "recomp_unit_0004");
    runtime.register_function(0x08817198u, &recomp_unit_0004, "recomp_unit_0004");
    runtime.register_function(0x088171A4u, &recomp_unit_0004, "recomp_unit_0004");
    runtime.register_function(0x088171B0u, &recomp_unit_0004, "recomp_unit_0004");
    runtime.register_function(0x088171BCu, &recomp_unit_0004, "recomp_unit_0004");
    runtime.register_function(0x088171C8u, &recomp_unit_0004, "recomp_unit_0004");
    runtime.register_function(0x088171D4u, &recomp_unit_0004, "recomp_unit_0004");
    runtime.register_function(0x088171E4u, &recomp_unit_0004, "recomp_unit_0004");
    runtime.register_function(0x088171F0u, &recomp_unit_0004, "recomp_unit_0004");
    runtime.register_function(0x088171FCu, &recomp_unit_0004, "recomp_unit_0004");
    runtime.register_function(0x08817208u, &recomp_unit_0004, "recomp_unit_0004");
    runtime.register_function(0x08817218u, &recomp_unit_0004, "recomp_unit_0004");
    runtime.register_function(0x08817220u, &recomp_unit_0004, "recomp_unit_0004");
    runtime.register_function(0x08817250u, &recomp_unit_0004, "recomp_unit_0004");
    runtime.register_function(0x08817274u, &recomp_unit_0004, "recomp_unit_0004");
    runtime.register_function(0x08817284u, &recomp_unit_0004, "recomp_unit_0004");
    runtime.register_function(0x08817298u, &recomp_unit_0004, "recomp_unit_0004");
    runtime.register_function(0x0881729Cu, &recomp_unit_0004, "recomp_unit_0004");
    runtime.register_function(0x088172A0u, &recomp_unit_0004, "recomp_unit_0004");
    runtime.register_function(0x088172B0u, &recomp_unit_0004, "recomp_unit_0004");
    runtime.register_function(0x088172C0u, &recomp_unit_0004, "recomp_unit_0004");
    runtime.register_function(0x088172C8u, &recomp_unit_0004, "recomp_unit_0004");
    runtime.register_function(0x088172DCu, &recomp_unit_0004, "recomp_unit_0004");
    runtime.register_function(0x088172F4u, &recomp_unit_0004, "recomp_unit_0004");
    runtime.register_function(0x088172F8u, &recomp_unit_0004, "recomp_unit_0004");
    runtime.register_function(0x08817304u, &recomp_unit_0004, "recomp_unit_0004");
    runtime.register_function(0x0881731Cu, &recomp_unit_0004, "recomp_unit_0004");
    runtime.register_function(0x08817324u, &recomp_unit_0004, "recomp_unit_0004");
    runtime.register_function(0x08817338u, &recomp_unit_0004, "recomp_unit_0004");
    runtime.register_function(0x08817344u, &recomp_unit_0004, "recomp_unit_0004");
    runtime.register_function(0x0881734Cu, &recomp_unit_0004, "recomp_unit_0004");
    runtime.register_function(0x08817358u, &recomp_unit_0004, "recomp_unit_0004");
    runtime.register_function(0x08817368u, &recomp_unit_0004, "recomp_unit_0004");
    runtime.register_function(0x0881736Cu, &recomp_unit_0004, "recomp_unit_0004");
    runtime.register_function(0x08817374u, &recomp_unit_0004, "recomp_unit_0004");
    runtime.register_function(0x08817388u, &recomp_unit_0004, "recomp_unit_0004");
    runtime.register_function(0x0881739Cu, &recomp_unit_0004, "recomp_unit_0004");
    runtime.register_function(0x088173A4u, &recomp_unit_0004, "recomp_unit_0004");
    runtime.register_function(0x088173B8u, &recomp_unit_0004, "recomp_unit_0004");
    runtime.register_function(0x088173BCu, &recomp_unit_0004, "recomp_unit_0004");
    runtime.register_function(0x088173C4u, &recomp_unit_0004, "recomp_unit_0004");
    runtime.register_function(0x088173D0u, &recomp_unit_0004, "recomp_unit_0004");
    runtime.register_function(0x088173DCu, &recomp_unit_0004, "recomp_unit_0004");
    runtime.register_function(0x088173E8u, &recomp_unit_0004, "recomp_unit_0004");
    runtime.register_function(0x08817408u, &recomp_unit_0004, "recomp_unit_0004");
    runtime.register_function(0x08817428u, &recomp_unit_0004, "recomp_unit_0004");
    runtime.register_function(0x08817440u, &recomp_unit_0004, "recomp_unit_0004");
    runtime.register_function(0x08817450u, &recomp_unit_0004, "recomp_unit_0004");
    runtime.register_function(0x0881745Cu, &recomp_unit_0004, "recomp_unit_0004");
    runtime.register_function(0x0881746Cu, &recomp_unit_0004, "recomp_unit_0004");
    runtime.register_function(0x08817478u, &recomp_unit_0004, "recomp_unit_0004");
    runtime.register_function(0x0881747Cu, &recomp_unit_0004, "recomp_unit_0004");
    runtime.register_function(0x08817498u, &recomp_unit_0004, "recomp_unit_0004");
    runtime.register_function(0x088174A4u, &recomp_unit_0004, "recomp_unit_0004");
    runtime.register_function(0x088174B8u, &recomp_unit_0004, "recomp_unit_0004");
    runtime.register_function(0x088174C4u, &recomp_unit_0004, "recomp_unit_0004");
    runtime.register_function(0x088174CCu, &recomp_unit_0004, "recomp_unit_0004");
    runtime.register_function(0x088174D8u, &recomp_unit_0004, "recomp_unit_0004");
    runtime.register_function(0x088174ECu, &recomp_unit_0004, "recomp_unit_0004");
    runtime.register_function(0x088174FCu, &recomp_unit_0004, "recomp_unit_0004");
    runtime.register_function(0x08817500u, &recomp_unit_0004, "recomp_unit_0004");
    runtime.register_function(0x08817508u, &recomp_unit_0004, "recomp_unit_0004");
    runtime.register_function(0x08817514u, &recomp_unit_0004, "recomp_unit_0004");
    runtime.register_function(0x08817518u, &recomp_unit_0004, "recomp_unit_0004");
    runtime.register_function(0x08817520u, &recomp_unit_0004, "recomp_unit_0004");
    runtime.register_function(0x0881752Cu, &recomp_unit_0004, "recomp_unit_0004");
    runtime.register_function(0x08817530u, &recomp_unit_0004, "recomp_unit_0004");
    runtime.register_function(0x08817538u, &recomp_unit_0004, "recomp_unit_0004");
    runtime.register_function(0x08817544u, &recomp_unit_0004, "recomp_unit_0004");
    runtime.register_function(0x08817548u, &recomp_unit_0004, "recomp_unit_0004");
    runtime.register_function(0x08817550u, &recomp_unit_0004, "recomp_unit_0004");
    runtime.register_function(0x0881755Cu, &recomp_unit_0004, "recomp_unit_0004");
    runtime.register_function(0x08817560u, &recomp_unit_0004, "recomp_unit_0004");
    runtime.register_function(0x08817570u, &recomp_unit_0004, "recomp_unit_0004");
    runtime.register_function(0x08817588u, &recomp_unit_0004, "recomp_unit_0004");
    runtime.register_function(0x08817590u, &recomp_unit_0004, "recomp_unit_0004");
    runtime.register_function(0x08817598u, &recomp_unit_0004, "recomp_unit_0004");
    runtime.register_function(0x088175A0u, &recomp_unit_0004, "recomp_unit_0004");
    runtime.register_function(0x088175C0u, &recomp_unit_0004, "recomp_unit_0004");
    runtime.register_function(0x088175C8u, &recomp_unit_0004, "recomp_unit_0004");
    runtime.register_function(0x088175DCu, &recomp_unit_0004, "recomp_unit_0004");
    runtime.register_function(0x088175F0u, &recomp_unit_0004, "recomp_unit_0004");
    runtime.register_function(0x08817614u, &recomp_unit_0004, "recomp_unit_0004");
    runtime.register_function(0x08817618u, &recomp_unit_0004, "recomp_unit_0004");
    runtime.register_function(0x08817634u, &recomp_unit_0004, "recomp_unit_0004");
    runtime.register_function(0x08817648u, &recomp_unit_0004, "recomp_unit_0004");
    runtime.register_function(0x0881765Cu, &recomp_unit_0004, "recomp_unit_0004");
    runtime.register_function(0x08817688u, &recomp_unit_0004, "recomp_unit_0004");
    runtime.register_function(0x08817698u, &recomp_unit_0004, "recomp_unit_0004");
    runtime.register_function(0x0881769Cu, &recomp_unit_0004, "recomp_unit_0004");
    runtime.register_function(0x088176B4u, &recomp_unit_0004, "recomp_unit_0004");
    runtime.register_function(0x088176C4u, &recomp_unit_0004, "recomp_unit_0004");
    runtime.register_function(0x088176D4u, &recomp_unit_0004, "recomp_unit_0004");
    runtime.register_function(0x088176DCu, &recomp_unit_0004, "recomp_unit_0004");
    runtime.register_function(0x088176E4u, &recomp_unit_0004, "recomp_unit_0004");
    runtime.register_function(0x088176ECu, &recomp_unit_0004, "recomp_unit_0004");
    runtime.register_function(0x088176F4u, &recomp_unit_0004, "recomp_unit_0004");
    runtime.register_function(0x08817718u, &recomp_unit_0004, "recomp_unit_0004");
    runtime.register_function(0x08817724u, &recomp_unit_0004, "recomp_unit_0004");
    runtime.register_function(0x0881772Cu, &recomp_unit_0004, "recomp_unit_0004");
    runtime.register_function(0x0881773Cu, &recomp_unit_0004, "recomp_unit_0004");
    runtime.register_function(0x08817748u, &recomp_unit_0004, "recomp_unit_0004");
    runtime.register_function(0x08817760u, &recomp_unit_0004, "recomp_unit_0004");
    runtime.register_function(0x08817770u, &recomp_unit_0004, "recomp_unit_0004");
    runtime.register_function(0x08817780u, &recomp_unit_0004, "recomp_unit_0004");
    runtime.register_function(0x08817784u, &recomp_unit_0004, "recomp_unit_0004");
    runtime.register_function(0x0881778Cu, &recomp_unit_0004, "recomp_unit_0004");
    runtime.register_function(0x0881779Cu, &recomp_unit_0004, "recomp_unit_0004");
    runtime.register_function(0x088177A4u, &recomp_unit_0004, "recomp_unit_0004");
    runtime.register_function(0x088177B0u, &recomp_unit_0004, "recomp_unit_0004");
    runtime.register_function(0x088177B4u, &recomp_unit_0004, "recomp_unit_0004");
    runtime.register_function(0x088177BCu, &recomp_unit_0004, "recomp_unit_0004");
    runtime.register_function(0x088177C8u, &recomp_unit_0004, "recomp_unit_0004");
    runtime.register_function(0x088177D4u, &recomp_unit_0004, "recomp_unit_0004");
    runtime.register_function(0x088177E4u, &recomp_unit_0004, "recomp_unit_0004");
    runtime.register_function(0x088177F0u, &recomp_unit_0004, "recomp_unit_0004");
    runtime.register_function(0x08817800u, &recomp_unit_0004, "recomp_unit_0004");
    runtime.register_function(0x08817818u, &recomp_unit_0004, "recomp_unit_0004");
    runtime.register_function(0x08817820u, &recomp_unit_0004, "recomp_unit_0004");
    runtime.register_function(0x08817828u, &recomp_unit_0004, "recomp_unit_0004");
    runtime.register_function(0x0881783Cu, &recomp_unit_0004, "recomp_unit_0004");
    runtime.register_function(0x08817848u, &recomp_unit_0004, "recomp_unit_0004");
    runtime.register_function(0x08817854u, &recomp_unit_0004, "recomp_unit_0004");
    runtime.register_function(0x08817864u, &recomp_unit_0004, "recomp_unit_0004");
    runtime.register_function(0x08817868u, &recomp_unit_0004, "recomp_unit_0004");
    runtime.register_function(0x0881787Cu, &recomp_unit_0004, "recomp_unit_0004");
    runtime.register_function(0x08817884u, &recomp_unit_0004, "recomp_unit_0004");
    runtime.register_function(0x08817898u, &recomp_unit_0004, "recomp_unit_0004");
    runtime.register_function(0x088178A0u, &recomp_unit_0004, "recomp_unit_0004");
    runtime.register_function(0x088178A4u, &recomp_unit_0004, "recomp_unit_0004");
    runtime.register_function(0x088178ACu, &recomp_unit_0004, "recomp_unit_0004");
    runtime.register_function(0x088178B8u, &recomp_unit_0004, "recomp_unit_0004");
    runtime.register_function(0x088178C4u, &recomp_unit_0004, "recomp_unit_0004");
    runtime.register_function(0x088178D0u, &recomp_unit_0004, "recomp_unit_0004");
    runtime.register_function(0x088178DCu, &recomp_unit_0004, "recomp_unit_0004");
    runtime.register_function(0x088178E4u, &recomp_unit_0004, "recomp_unit_0004");
    runtime.register_function(0x088178ECu, &recomp_unit_0004, "recomp_unit_0004");
    runtime.register_function(0x088178FCu, &recomp_unit_0004, "recomp_unit_0004");
    runtime.register_function(0x08817900u, &recomp_unit_0004, "recomp_unit_0004");
    runtime.register_function(0x08817904u, &recomp_unit_0004, "recomp_unit_0004");
    runtime.register_function(0x08817918u, &recomp_unit_0004, "recomp_unit_0004");
    runtime.register_function(0x08817930u, &recomp_unit_0004, "recomp_unit_0004");
    runtime.register_function(0x08817938u, &recomp_unit_0004, "recomp_unit_0004");
    runtime.register_function(0x08817944u, &recomp_unit_0004, "recomp_unit_0004");
    runtime.register_function(0x08817948u, &recomp_unit_0004, "recomp_unit_0004");
    runtime.register_function(0x08817964u, &recomp_unit_0004, "recomp_unit_0004");
    runtime.register_function(0x0881796Cu, &recomp_unit_0004, "recomp_unit_0004");
    runtime.register_function(0x0881797Cu, &recomp_unit_0004, "recomp_unit_0004");
    runtime.register_function(0x08817990u, &recomp_unit_0004, "recomp_unit_0004");
    runtime.register_function(0x08817998u, &recomp_unit_0004, "recomp_unit_0004");
    runtime.register_function(0x088179ACu, &recomp_unit_0004, "recomp_unit_0004");
    runtime.register_function(0x088179C4u, &recomp_unit_0004, "recomp_unit_0004");
    runtime.register_function(0x088179D8u, &recomp_unit_0004, "recomp_unit_0004");
    runtime.register_function(0x088179E0u, &recomp_unit_0004, "recomp_unit_0004");
    runtime.register_function(0x088179E8u, &recomp_unit_0004, "recomp_unit_0004");
    runtime.register_function(0x088179F0u, &recomp_unit_0004, "recomp_unit_0004");
    runtime.register_function(0x088179F8u, &recomp_unit_0004, "recomp_unit_0004");
    runtime.register_function(0x08817A04u, &recomp_unit_0004, "recomp_unit_0004");
    runtime.register_function(0x08817A14u, &recomp_unit_0004, "recomp_unit_0004");
    runtime.register_function(0x08817A20u, &recomp_unit_0004, "recomp_unit_0004");
    runtime.register_function(0x08817A2Cu, &recomp_unit_0004, "recomp_unit_0004");
    runtime.register_function(0x08817A38u, &recomp_unit_0004, "recomp_unit_0004");
    runtime.register_function(0x08817A58u, &recomp_unit_0004, "recomp_unit_0004");
    runtime.register_function(0x08817A60u, &recomp_unit_0004, "recomp_unit_0004");
    runtime.register_function(0x08817A64u, &recomp_unit_0004, "recomp_unit_0004");
    runtime.register_function(0x08817A84u, &recomp_unit_0004, "recomp_unit_0004");
    runtime.register_function(0x08817A8Cu, &recomp_unit_0004, "recomp_unit_0004");
    runtime.register_function(0x08817A98u, &recomp_unit_0004, "recomp_unit_0004");
    runtime.register_function(0x08817AA8u, &recomp_unit_0004, "recomp_unit_0004");
    runtime.register_function(0x08817AACu, &recomp_unit_0004, "recomp_unit_0004");
    runtime.register_function(0x08817ABCu, &recomp_unit_0004, "recomp_unit_0004");
    runtime.register_function(0x08817ACCu, &recomp_unit_0004, "recomp_unit_0004");
    runtime.register_function(0x08817AF0u, &recomp_unit_0004, "recomp_unit_0004");
    runtime.register_function(0x08817AFCu, &recomp_unit_0004, "recomp_unit_0004");
    runtime.register_function(0x08817B10u, &recomp_unit_0004, "recomp_unit_0004");
    runtime.register_function(0x08817B18u, &recomp_unit_0004, "recomp_unit_0004");
    runtime.register_function(0x08817B24u, &recomp_unit_0004, "recomp_unit_0004");
    runtime.register_function(0x08817B30u, &recomp_unit_0004, "recomp_unit_0004");
    runtime.register_function(0x08817B3Cu, &recomp_unit_0004, "recomp_unit_0004");
    runtime.register_function(0x08817B4Cu, &recomp_unit_0004, "recomp_unit_0004");
    runtime.register_function(0x08817B54u, &recomp_unit_0004, "recomp_unit_0004");
    runtime.register_function(0x08817B80u, &recomp_unit_0004, "recomp_unit_0004");
    runtime.register_function(0x08817B88u, &recomp_unit_0004, "recomp_unit_0004");
    runtime.register_function(0x08817BA4u, &recomp_unit_0004, "recomp_unit_0004");
    runtime.register_function(0x08817BA8u, &recomp_unit_0004, "recomp_unit_0004");
    runtime.register_function(0x08817BACu, &recomp_unit_0004, "recomp_unit_0004");
    runtime.register_function(0x08817BB4u, &recomp_unit_0004, "recomp_unit_0004");
    runtime.register_function(0x08817BBCu, &recomp_unit_0004, "recomp_unit_0004");
    runtime.register_function(0x08817BC4u, &recomp_unit_0004, "recomp_unit_0004");
    runtime.register_function(0x08817BD8u, &recomp_unit_0004, "recomp_unit_0004");
    runtime.register_function(0x08817BF4u, &recomp_unit_0004, "recomp_unit_0004");
    runtime.register_function(0x08817BFCu, &recomp_unit_0004, "recomp_unit_0004");
    runtime.register_function(0x08817C04u, &recomp_unit_0004, "recomp_unit_0004");
    runtime.register_function(0x08817C20u, &recomp_unit_0004, "recomp_unit_0004");
    runtime.register_function(0x08817C34u, &recomp_unit_0004, "recomp_unit_0004");
    runtime.register_function(0x08817C40u, &recomp_unit_0004, "recomp_unit_0004");
    runtime.register_function(0x08817C4Cu, &recomp_unit_0004, "recomp_unit_0004");
    runtime.register_function(0x08817C5Cu, &recomp_unit_0004, "recomp_unit_0004");
    runtime.register_function(0x08817C64u, &recomp_unit_0004, "recomp_unit_0004");
    runtime.register_function(0x08817C74u, &recomp_unit_0004, "recomp_unit_0004");
    runtime.register_function(0x08817C98u, &recomp_unit_0004, "recomp_unit_0004");
    runtime.register_function(0x08817CA4u, &recomp_unit_0004, "recomp_unit_0004");
    runtime.register_function(0x08817CB0u, &recomp_unit_0004, "recomp_unit_0004");
    runtime.register_function(0x08817CC0u, &recomp_unit_0004, "recomp_unit_0004");
    runtime.register_function(0x08817CCCu, &recomp_unit_0004, "recomp_unit_0004");
    runtime.register_function(0x08817CDCu, &recomp_unit_0004, "recomp_unit_0004");
    runtime.register_function(0x08817CE8u, &recomp_unit_0004, "recomp_unit_0004");
    runtime.register_function(0x08817CF4u, &recomp_unit_0004, "recomp_unit_0004");
    runtime.register_function(0x08817D00u, &recomp_unit_0004, "recomp_unit_0004");
    runtime.register_function(0x08817D10u, &recomp_unit_0004, "recomp_unit_0004");
    runtime.register_function(0x08817D18u, &recomp_unit_0004, "recomp_unit_0004");
    runtime.register_function(0x08817D50u, &recomp_unit_0004, "recomp_unit_0004");
    runtime.register_function(0x08817D6Cu, &recomp_unit_0004, "recomp_unit_0004");
    runtime.register_function(0x08817D74u, &recomp_unit_0004, "recomp_unit_0004");
    runtime.register_function(0x08817D88u, &recomp_unit_0004, "recomp_unit_0004");
    runtime.register_function(0x08817D9Cu, &recomp_unit_0004, "recomp_unit_0004");
    runtime.register_function(0x08817DB8u, &recomp_unit_0004, "recomp_unit_0004");
    runtime.register_function(0x08817DCCu, &recomp_unit_0004, "recomp_unit_0004");
    runtime.register_function(0x08817DD4u, &recomp_unit_0004, "recomp_unit_0004");
    runtime.register_function(0x08817DE0u, &recomp_unit_0004, "recomp_unit_0004");
    runtime.register_function(0x08817E08u, &recomp_unit_0004, "recomp_unit_0004");
    runtime.register_function(0x08817E20u, &recomp_unit_0004, "recomp_unit_0004");
    runtime.register_function(0x08817E2Cu, &recomp_unit_0004, "recomp_unit_0004");
    runtime.register_function(0x08817E44u, &recomp_unit_0004, "recomp_unit_0004");
    runtime.register_function(0x08817E68u, &recomp_unit_0004, "recomp_unit_0004");
    runtime.register_function(0x08817E8Cu, &recomp_unit_0004, "recomp_unit_0004");
    runtime.register_function(0x08817E98u, &recomp_unit_0004, "recomp_unit_0004");
    runtime.register_function(0x08817EA4u, &recomp_unit_0004, "recomp_unit_0004");
    runtime.register_function(0x08817EB0u, &recomp_unit_0004, "recomp_unit_0004");
    runtime.register_function(0x08817EB8u, &recomp_unit_0004, "recomp_unit_0004");
    runtime.register_function(0x08817EC0u, &recomp_unit_0004, "recomp_unit_0004");
    runtime.register_function(0x08817EC8u, &recomp_unit_0004, "recomp_unit_0004");
    runtime.register_function(0x08817EDCu, &recomp_unit_0004, "recomp_unit_0004");
    runtime.register_function(0x08817EE8u, &recomp_unit_0004, "recomp_unit_0004");
    runtime.register_function(0x08817EF4u, &recomp_unit_0004, "recomp_unit_0004");
    runtime.register_function(0x08817F14u, &recomp_unit_0004, "recomp_unit_0004");
    runtime.register_function(0x08817F20u, &recomp_unit_0004, "recomp_unit_0004");
    runtime.register_function(0x08817F2Cu, &recomp_unit_0004, "recomp_unit_0004");
    runtime.register_function(0x08817F38u, &recomp_unit_0004, "recomp_unit_0004");
    runtime.register_function(0x08817F54u, &recomp_unit_0004, "recomp_unit_0004");
    runtime.register_function(0x08817FC0u, &recomp_unit_0004, "recomp_unit_0004");
    runtime.register_function(0x08817FDCu, &recomp_unit_0004, "recomp_unit_0004");
}
} // namespace psprecomp
