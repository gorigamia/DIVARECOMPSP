#include "psprecomp/runtime.hpp"
#include "generated_units.hpp"
#include <bit>
#include <cmath>
#include <cstdint>
#include <limits>

namespace psprecomp {
static const std::uint16_t kEntryIds_recomp_unit_0020[4096] = {
    1, 0, 0, 2, 0, 3, 0, 0, 0, 4, 0, 5, 0, 6, 0, 7, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 8, 0, 9, 0, 10, 0, 0, 11, 0, 12, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 13,
    0, 14, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 15, 0, 0, 0, 0, 0, 16, 0, 0, 0, 17, 0, 18, 0,
    0, 0, 19, 20, 0, 0, 0, 0, 0, 0, 0, 0, 0, 21, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 22,
    0, 23, 0, 0, 24, 0, 25, 0, 26, 0, 27, 0, 0, 0, 28, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 29, 0, 30, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 31, 0, 32, 0, 0, 33, 0, 0, 0, 34, 0, 35, 0, 36,
    0, 0, 37, 0, 0, 0, 0, 0, 0, 0, 38, 39, 0, 0, 40, 0, 0, 0, 41, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    42, 0, 0, 43, 0, 0, 44, 0, 45, 0, 0, 0, 0, 46, 47, 0, 0, 48, 0, 0, 49, 0, 0, 50, 51, 52, 53, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 54, 0, 0, 0, 0, 55, 0, 0, 56, 0, 0, 57, 0, 0, 58, 0, 0, 0, 0, 0,
    0, 59, 0, 0, 60, 0, 0, 61, 0, 62, 63, 0, 0, 0, 0, 0, 0, 0, 0, 64, 0, 0, 0, 0, 0, 0, 0, 0, 65, 0, 66, 0,
    0, 67, 0, 0, 68, 0, 69, 0, 0, 70, 0, 71, 0, 72, 0, 73, 0, 0, 74, 0, 0, 75, 0, 0, 76, 0, 77, 0, 78, 79, 0, 80,
    0, 81, 0, 82, 0, 0, 83, 0, 0, 0, 0, 0, 84, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 85, 0, 86, 0, 87, 0, 0, 0, 0, 0, 0, 0, 88, 0, 89, 0, 0, 0, 0, 90, 91, 0, 0, 92, 0, 0, 0, 0, 0,
    0, 0, 0, 93, 0, 0, 0, 0, 0, 0, 0, 0, 94, 0, 0, 0, 0, 0, 0, 0, 95, 0, 96, 0, 97, 0, 0, 98, 0, 0, 0, 99,
    0, 0, 0, 0, 100, 0, 101, 0, 102, 0, 0, 0, 0, 0, 103, 104, 0, 0, 105, 0, 106, 0, 107, 0, 0, 108, 0, 0, 0, 0, 109, 0,
    110, 0, 111, 0, 0, 0, 0, 0, 112, 113, 0, 0, 114, 0, 115, 0, 116, 0, 0, 117, 0, 0, 0, 0, 118, 0, 119, 0, 120, 0, 121, 0,
    0, 0, 0, 0, 122, 123, 0, 0, 124, 0, 125, 0, 126, 0, 0, 127, 0, 0, 0, 0, 128, 0, 129, 0, 130, 0, 131, 0, 0, 0, 0, 0,
    132, 133, 0, 0, 0, 0, 134, 135, 0, 0, 0, 0, 0, 136, 0, 0, 0, 0, 0, 0, 0, 137, 0, 138, 0, 0, 0, 0, 139, 0, 140, 0,
    141, 0, 0, 0, 0, 0, 0, 0, 142, 0, 143, 0, 0, 144, 0, 145, 0, 146, 0, 0, 0, 0, 0, 0, 147, 0, 148, 0, 0, 149, 0, 150,
    0, 0, 151, 0, 152, 0, 153, 0, 0, 154, 0, 155, 0, 0, 0, 156, 0, 157, 0, 0, 0, 158, 0, 0, 159, 0, 0, 160, 0, 161, 0, 0,
    0, 162, 0, 163, 0, 0, 0, 164, 165, 166, 0, 0, 0, 167, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 168, 0, 0, 0, 0, 169, 0,
    0, 170, 0, 0, 0, 0, 0, 0, 0, 0, 171, 0, 0, 172, 0, 0, 173, 174, 0, 0, 0, 0, 0, 0, 175, 176, 0, 0, 0, 0, 0, 177,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 178, 0, 0, 0, 0, 179, 0, 0,
    180, 0, 0, 0, 181, 0, 182, 0, 183, 0, 184, 0, 0, 0, 0, 185, 0, 0, 0, 0, 0, 0, 186, 0, 0, 0, 0, 187, 0, 0, 188, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 189, 0, 0, 0, 0, 0, 190, 0, 0, 191, 0, 0, 192, 0, 0, 193, 0, 0, 194, 0, 0, 195, 0,
    0, 196, 0, 0, 197, 0, 198, 0, 199, 0, 0, 0, 0, 200, 0, 0, 0, 0, 0, 0, 0, 0, 0, 201, 0, 0, 202, 0, 0, 203, 204, 0,
    0, 205, 0, 0, 206, 0, 0, 0, 0, 0, 207, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 208, 0, 0, 209, 210, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 211, 0, 212, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 213, 0, 0, 214, 0, 215, 0,
    216, 0, 217, 0, 218, 0, 0, 0, 219, 0, 0, 0, 0, 0, 0, 220, 0, 0, 0, 0, 0, 0, 0, 221, 0, 0, 0, 222, 0, 223, 0, 0,
    224, 0, 0, 225, 0, 226, 0, 0, 0, 0, 0, 227, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 228, 0, 0, 0, 229, 0, 230, 0, 0, 231,
    0, 0, 232, 0, 233, 0, 0, 0, 234, 0, 0, 0, 0, 0, 0, 235, 0, 236, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 237, 0, 0, 0,
    238, 0, 0, 239, 0, 240, 0, 0, 241, 0, 0, 242, 243, 0, 0, 0, 244, 0, 245, 0, 0, 246, 0, 0, 247, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 248, 0, 249, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 250, 0, 0, 0, 251, 0, 252, 0, 253, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 254, 0, 255, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 256, 0, 0, 0, 257, 0, 0, 0, 258, 0, 0, 259, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 260, 0, 0, 0, 261, 0, 0, 0, 0, 262, 0, 0, 263, 0, 0,
    0, 0, 0, 264, 0, 0, 0, 0, 0, 0, 265, 0, 266, 0, 267, 0, 0, 268, 0, 269, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 270, 0, 0, 0, 271, 0, 0, 0, 0, 272, 0, 0, 0, 273, 0, 0, 0, 0, 0, 0, 274, 0, 275, 0, 0, 276, 0, 0, 277, 0,
    0, 0, 278, 0, 0, 0, 0, 279, 280, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 281, 0, 0, 0, 0, 0, 0, 282, 0,
    0, 283, 0, 0, 284, 0, 0, 0, 0, 0, 285, 0, 0, 0, 286, 0, 287, 0, 0, 0, 288, 0, 0, 0, 0, 0, 0, 289, 0, 290, 0, 0,
    291, 0, 292, 293, 0, 0, 0, 0, 294, 0, 0, 0, 0, 0, 0, 295, 0, 296, 0, 297, 0, 0, 298, 0, 0, 0, 0, 0, 0, 299, 0, 0,
    0, 0, 300, 0, 301, 0, 302, 0, 0, 0, 0, 0, 303, 0, 0, 0, 0, 304, 0, 0, 0, 0, 0, 305, 0, 0, 0, 0, 306, 0, 0, 0,
    0, 0, 0, 307, 0, 308, 0, 0, 0, 0, 309, 310, 311, 0, 0, 0, 312, 0, 0, 0, 313, 0, 314, 0, 315, 0, 316, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 317, 0, 318, 0, 319, 0, 320, 0, 321, 0, 322, 0, 323, 0, 0,
    0, 324, 0, 0, 0, 0, 0, 0, 0, 325, 0, 0, 0, 326, 0, 0, 0, 0, 0, 0, 0, 327, 0, 0, 0, 0, 0, 0, 328, 0, 0, 0,
    0, 0, 0, 329, 0, 0, 330, 0, 0, 0, 0, 331, 0, 0, 332, 0, 0, 333, 0, 0, 334, 335, 0, 0, 0, 336, 0, 0, 0, 0, 0, 0,
    337, 0, 0, 338, 0, 0, 0, 0, 339, 0, 0, 340, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 341, 0, 342, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 343, 0,
    344, 0, 0, 0, 0, 0, 0, 0, 0, 0, 345, 0, 346, 0, 0, 0, 0, 0, 347, 0, 348, 0, 0, 349, 0, 350, 0, 351, 0, 0, 0, 0,
    0, 352, 0, 353, 0, 0, 354, 0, 355, 0, 0, 0, 0, 0, 0, 0, 0, 0, 356, 0, 357, 0, 358, 0, 359, 0, 360, 0, 0, 361, 0, 362,
    0, 363, 0, 0, 0, 0, 0, 364, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 365, 0, 0, 0, 366, 0, 0, 367, 0, 0, 0, 368, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    369, 0, 0, 0, 370, 0, 371, 0, 0, 0, 0, 0, 372, 0, 0, 373, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 374, 0,
    0, 375, 0, 0, 376, 0, 0, 377, 0, 0, 0, 378, 0, 0, 379, 0, 0, 0, 380, 0, 381, 0, 0, 382, 0, 0, 0, 383, 0, 0, 0, 384,
    0, 0, 0, 385, 0, 0, 0, 386, 0, 0, 0, 0, 0, 0, 0, 387, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 388, 0, 0, 0, 0, 389, 0, 390, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 391, 0, 0, 392, 393, 0, 0, 0, 394, 0,
    0, 395, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 396, 0, 397, 398, 0, 0, 0, 0, 0, 399, 0, 400, 0, 0, 0, 0, 0, 0, 0, 0,
    401, 0, 402, 0, 403, 0, 0, 0, 0, 0, 404, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 405, 0, 406, 0, 407, 0, 408, 0, 409, 0, 0, 410, 0, 0, 411, 0, 0,
    0, 0, 412, 413, 0, 0, 414, 0, 415, 0, 0, 0, 0, 0, 0, 416, 0, 0, 0, 417, 0, 0, 418, 0, 419, 0, 420, 0, 0, 0, 421, 0,
    0, 0, 0, 422, 0, 0, 0, 0, 423, 0, 0, 0, 0, 0, 0, 424, 0, 0, 0, 0, 0, 0, 425, 0, 0, 0, 0, 426, 0, 427, 0, 0,
    428, 0, 0, 429, 0, 0, 0, 430, 0, 0, 0, 431, 0, 432, 0, 0, 0, 0, 0, 433, 0, 0, 0, 0, 0, 0, 434, 435, 0, 436, 0, 0,
    0, 0, 437, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 438, 0, 439, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 440, 0, 441, 0, 0, 0, 0, 442, 0, 0, 0, 0, 0, 443, 0, 444, 0, 445, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 446, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 447, 0, 0, 0, 0, 0, 448, 0, 0, 0, 0, 449, 0, 450, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 451, 0, 0, 452, 0, 453, 0, 454, 0, 455, 0, 456, 0, 457, 458, 0, 0, 0, 0, 0, 0, 459, 0,
    0, 0, 0, 0, 0, 0, 460, 0, 0, 0, 461, 0, 462, 0, 0, 463, 0, 0, 464, 0, 465, 0, 0, 0, 0, 0, 0, 466, 0, 0, 0, 0,
    0, 0, 0, 467, 0, 0, 0, 468, 0, 469, 0, 0, 470, 0, 0, 471, 0, 472, 0, 0, 473, 0, 0, 0, 0, 0, 0, 0, 474, 0, 475, 0,
    0, 0, 0, 0, 0, 0, 476, 0, 0, 0, 477, 0, 0, 478, 0, 479, 0, 0, 480, 0, 0, 481, 482, 0, 0, 0, 483, 0, 484, 0, 0, 0,
    0, 0, 0, 0, 485, 0, 486, 0, 487, 0, 488, 0, 489, 0, 490, 0, 0, 0, 491, 0, 0, 0, 0, 492, 0, 0, 0, 0, 493, 0, 0, 494,
    0, 495, 0, 496, 0, 0, 497, 0, 0, 498, 0, 0, 0, 0, 0, 0, 0, 0, 0, 499, 0, 500, 0, 501, 0, 0, 502, 0, 0, 503, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 504, 0, 505, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 506, 0, 507, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 508, 0, 509, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 510, 0, 511, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 512, 0, 513, 0, 0, 514, 0, 0, 515, 0, 0, 516, 0, 0, 517, 0, 0, 518, 0, 0, 519, 0, 0, 520, 0,
    0, 521, 0, 0, 522, 0, 0, 523, 0, 0, 524, 0, 0, 525, 0, 0, 526, 0, 527, 528, 529, 0, 0, 530, 0, 531, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 532, 0, 533, 0, 0, 0, 0, 0, 0, 0, 0, 534, 0,
    535, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 536, 0, 537, 0, 538, 0, 539, 0, 540, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 541, 0, 542, 0, 0, 0, 543, 0, 0, 544, 0, 0, 0, 0, 0, 0, 0, 0, 0, 545, 0, 546, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 547, 0, 0, 0, 548, 0, 549, 0, 550, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 551, 0, 0, 0, 552, 0, 553,
    0, 554, 0, 0, 555, 0, 556, 0, 557, 0, 558, 0, 0, 0, 559, 0, 560, 561, 0, 0, 562, 563, 0, 564, 0, 565, 0, 0, 566, 567, 0, 568,
    0, 0, 0, 0, 0, 0, 0, 569, 0, 570, 0, 571, 0, 0, 572, 0, 0, 573, 0, 574, 0, 575, 0, 576, 0, 577, 0, 578, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 579, 0, 0, 0, 0, 0, 0, 580, 0, 581, 0, 582, 0, 0,
    583, 0, 584, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 585, 0, 586, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 587, 0, 588, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 589, 0, 590,
    0, 591, 0, 0, 592, 0, 0, 593, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 594, 0, 0, 0, 595, 0, 0, 0, 0,
    596, 0, 0, 597, 0, 0, 0, 0, 598, 0, 599, 0, 0, 0, 0, 0, 0, 600, 0, 601, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 602, 0, 603, 604, 605, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 606, 0, 607, 0, 608,
    0, 0, 0, 0, 0, 0, 0, 0, 609, 0, 610, 0, 0, 611, 0, 0, 612, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 613, 0,
    614, 0, 0, 615, 0, 0, 616, 0, 0, 617, 618, 0, 619, 0, 0, 0, 620, 0, 621, 0, 622, 0, 0, 0, 623, 0, 624, 0, 625, 0, 626, 0,
    627, 0, 0, 0, 628, 0, 0, 0, 0, 0, 629, 0, 0, 0, 0, 0, 630, 0, 631, 0, 632, 0, 633, 0, 634, 0, 0, 0, 0, 0, 0, 0,
    635, 0, 636, 0, 637, 0, 0, 0, 0, 0, 0, 0, 0, 0, 638, 0, 0, 0, 0, 0, 0, 639, 0, 0, 0, 640, 0, 0, 0, 0, 0, 641,
    0, 0, 0, 0, 0, 0, 0, 642, 0, 0, 0, 0, 0, 0, 643, 0, 644, 0, 0, 645, 0, 646, 647, 0, 0, 0, 0, 648, 0, 0, 0, 0,
    0, 0, 649, 0, 650, 0, 0, 651, 0, 652, 653, 0, 0, 0, 0, 654, 0, 0, 0, 0, 0, 0, 655, 0, 656, 0, 0, 657, 0, 658, 659, 0,
    0, 0, 0, 660, 0, 0, 0, 0, 0, 0, 661, 0, 662, 0, 0, 663, 0, 664, 665, 0, 0, 0, 0, 666, 0, 0, 0, 0, 667, 0, 0, 0,
    0, 668, 0, 0, 0, 0, 0, 0, 669, 0, 0, 670, 0, 0, 671, 0, 0, 672, 0, 0, 673, 0, 0, 674, 0, 0, 0, 0, 0, 675, 0, 0,
    676, 0, 0, 0, 0, 0, 677, 0, 0, 678, 0, 679, 680, 0, 0, 0, 0, 681, 0, 0, 0, 0, 0, 0, 682, 0, 683, 0, 0, 684, 0, 685,
    686, 0, 0, 0, 0, 687, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 688, 0, 689, 0, 0, 0, 0, 0, 0, 0, 690, 0, 691, 0,
    692, 0, 693, 0, 694, 0, 695, 0, 696, 697, 0, 698, 0, 0, 0, 0, 699, 0, 700, 0, 701, 0, 0, 0, 0, 702, 0, 0, 703, 0, 0, 704,
    0, 0, 0, 0, 0, 0, 0, 705, 0, 0, 706, 0, 0, 0, 0, 0, 0, 0, 0, 0, 707, 0, 0, 0, 0, 708, 0, 0, 0, 0, 709, 0,
    0, 0, 0, 710, 0, 0, 0, 0, 711, 0, 0, 712, 0, 0, 713, 0, 0, 714, 0, 0, 715, 0, 0, 716, 0, 0, 717, 0, 0, 0, 0, 0,
    0, 718, 0, 0, 719, 0, 0, 0, 0, 0, 720, 0, 0, 721, 0, 0, 722, 0, 0, 723, 0, 0, 724, 0, 0, 725, 0, 0, 726, 0, 727, 728,
    0, 0, 0, 0, 729, 0, 730, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 731, 0, 0, 0, 732, 0, 0, 0, 0, 0, 0, 0, 733, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 734, 0, 0, 0, 0, 0,
    0, 735, 0, 736, 0, 737, 0, 738, 0, 739, 0, 740, 0, 0, 0, 741, 0, 742, 0, 743, 0, 0, 0, 744, 0, 745, 0, 0, 0, 746, 0, 747,
    0, 748, 0, 749, 0, 750, 0, 751, 0, 0, 0, 0, 0, 0, 0, 0, 0, 752, 0, 0, 753, 0, 754, 0, 0, 0, 755, 0, 756, 0, 0, 0,
    757, 0, 758, 0, 0, 0, 0, 0, 0, 0, 759, 0, 0, 760, 0, 0, 0, 761, 0, 0, 762, 0, 763, 0, 764, 0, 0, 0, 0, 0, 0, 0,
    0, 765, 0, 0, 766, 0, 0, 0, 767, 0, 0, 0, 768, 0, 0, 769, 0, 0, 770, 0, 771, 0, 0, 0, 0, 0, 0, 0, 0, 772, 0, 0,
    773, 0, 0, 0, 774, 0, 0, 0, 0, 775, 0, 0, 776, 0, 0, 777, 0, 778, 0, 779, 0, 780, 0, 781, 0, 0, 782, 0, 0, 783, 0, 784,
    0, 0, 785, 0, 0, 786, 0, 0, 787, 0, 788, 0, 789, 0, 790, 0, 0, 791, 0, 792, 0, 0, 793, 0, 794, 0, 0, 0, 0, 795, 0, 796,
    0, 0, 0, 0, 797, 0, 798, 0, 0, 799, 0, 0, 0, 800, 0, 801, 0, 802, 0, 0, 0, 0, 803, 0, 804, 0, 0, 805, 0, 806, 0, 0,
    807, 0, 808, 0, 0, 0, 0, 809, 0, 810, 0, 0, 811, 0, 0, 0, 0, 812, 0, 813, 0, 0, 814, 0, 815, 0, 0, 0, 0, 816, 0, 817,
    0, 0, 0, 0, 818, 0, 819, 0, 0, 820, 0, 0, 0, 0, 821, 0, 822, 0, 0, 823, 0, 824, 0, 0, 0, 0, 825, 0, 826, 0, 0, 827,
    0, 0, 0, 0, 828, 0, 829, 0, 0, 830, 0, 831, 0, 0, 832, 0, 0, 0, 0, 833, 0, 834, 0, 0, 835, 0, 0, 0, 0, 836, 0, 0,
    0, 837, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 838, 0, 839, 0, 0, 0,
    0, 840, 0, 0, 841, 0, 842, 843, 0, 844, 845, 0, 0, 0, 0, 0, 0, 0, 0, 846, 0, 847, 0, 848, 0, 849, 0, 0, 0, 0, 850, 0,
    0, 851, 0, 0, 0, 0, 852, 0, 853, 0, 0, 854, 0, 855, 0, 856, 0, 857, 0, 0, 0, 0, 858, 0, 0, 859, 0, 0, 0, 0, 860, 0,
    861, 0, 0, 862, 0, 863, 0, 864, 0, 865, 0, 866, 0, 0, 0, 0, 867, 0, 0, 868, 0, 0, 0, 0, 869, 0, 870, 0, 0, 871, 0, 872,
};
void recomp_unit_0020_entry(Runtime &rt, AllegrexContext &ctx, std::uint16_t direct_entry_id, GuestMemory::AotFastView &aot_mem) {
    std::uint32_t jump_target = 0u;
    std::uint32_t local_transfers = 0u;
    std::uint32_t local_pc = ctx.pc;
    std::uint32_t entry_id = direct_entry_id;
LOCAL_DISPATCH:
    {
    if (entry_id == 0u) {
        const std::uint32_t entry_delta = local_pc - 0x08854000u;
        entry_id = (entry_delta < 16384u && (entry_delta & 3u) == 0u) ? kEntryIds_recomp_unit_0020[entry_delta >> 2u] : 0u;
    }
    switch (entry_id) {
    case 1u: goto L_08854000;
    case 2u: goto L_0885400C;
    case 3u: goto L_08854014;
    case 4u: goto L_08854024;
    case 5u: goto L_0885402C;
    case 6u: goto L_08854034;
    case 7u: goto L_0885403C;
    case 8u: goto L_08854090;
    case 9u: goto L_08854098;
    case 10u: goto L_088540A0;
    case 11u: goto L_088540AC;
    case 12u: goto L_088540B4;
    case 13u: goto L_088540FC;
    case 14u: goto L_08854104;
    case 15u: goto L_08854148;
    case 16u: goto L_08854160;
    case 17u: goto L_08854170;
    case 18u: goto L_08854178;
    case 19u: goto L_08854188;
    case 20u: goto L_0885418C;
    case 21u: goto L_088541B4;
    case 22u: goto L_088541FC;
    case 23u: goto L_08854204;
    case 24u: goto L_08854210;
    case 25u: goto L_08854218;
    case 26u: goto L_08854220;
    case 27u: goto L_08854228;
    case 28u: goto L_08854238;
    case 29u: goto L_0885428C;
    case 30u: goto L_08854294;
    case 31u: goto L_088542C8;
    case 32u: goto L_088542D0;
    case 33u: goto L_088542DC;
    case 34u: goto L_088542EC;
    case 35u: goto L_088542F4;
    case 36u: goto L_088542FC;
    case 37u: goto L_08854308;
    case 38u: goto L_08854328;
    case 39u: goto L_0885432C;
    case 40u: goto L_08854338;
    case 41u: goto L_08854348;
    case 42u: goto L_08854380;
    case 43u: goto L_0885438C;
    case 44u: goto L_08854398;
    case 45u: goto L_088543A0;
    case 46u: goto L_088543B4;
    case 47u: goto L_088543B8;
    case 48u: goto L_088543C4;
    case 49u: goto L_088543D0;
    case 50u: goto L_088543DC;
    case 51u: goto L_088543E0;
    case 52u: goto L_088543E4;
    case 53u: goto L_088543E8;
    case 54u: goto L_08854430;
    case 55u: goto L_08854444;
    case 56u: goto L_08854450;
    case 57u: goto L_0885445C;
    case 58u: goto L_08854468;
    case 59u: goto L_08854484;
    case 60u: goto L_08854490;
    case 61u: goto L_0885449C;
    case 62u: goto L_088544A4;
    case 63u: goto L_088544A8;
    case 64u: goto L_088544CC;
    case 65u: goto L_088544F0;
    case 66u: goto L_088544F8;
    case 67u: goto L_08854504;
    case 68u: goto L_08854510;
    case 69u: goto L_08854518;
    case 70u: goto L_08854524;
    case 71u: goto L_0885452C;
    case 72u: goto L_08854534;
    case 73u: goto L_0885453C;
    case 74u: goto L_08854548;
    case 75u: goto L_08854554;
    case 76u: goto L_08854560;
    case 77u: goto L_08854568;
    case 78u: goto L_08854570;
    case 79u: goto L_08854574;
    case 80u: goto L_0885457C;
    case 81u: goto L_08854584;
    case 82u: goto L_0885458C;
    case 83u: goto L_08854598;
    case 84u: goto L_088545B0;
    case 85u: goto L_0885460C;
    case 86u: goto L_08854614;
    case 87u: goto L_0885461C;
    case 88u: goto L_0885463C;
    case 89u: goto L_08854644;
    case 90u: goto L_08854658;
    case 91u: goto L_0885465C;
    case 92u: goto L_08854668;
    case 93u: goto L_0885468C;
    case 94u: goto L_088546B0;
    case 95u: goto L_088546D0;
    case 96u: goto L_088546D8;
    case 97u: goto L_088546E0;
    case 98u: goto L_088546EC;
    case 99u: goto L_088546FC;
    case 100u: goto L_08854710;
    case 101u: goto L_08854718;
    case 102u: goto L_08854720;
    case 103u: goto L_08854738;
    case 104u: goto L_0885473C;
    case 105u: goto L_08854748;
    case 106u: goto L_08854750;
    case 107u: goto L_08854758;
    case 108u: goto L_08854764;
    case 109u: goto L_08854778;
    case 110u: goto L_08854780;
    case 111u: goto L_08854788;
    case 112u: goto L_088547A0;
    case 113u: goto L_088547A4;
    case 114u: goto L_088547B0;
    case 115u: goto L_088547B8;
    case 116u: goto L_088547C0;
    case 117u: goto L_088547CC;
    case 118u: goto L_088547E0;
    case 119u: goto L_088547E8;
    case 120u: goto L_088547F0;
    case 121u: goto L_088547F8;
    case 122u: goto L_08854810;
    case 123u: goto L_08854814;
    case 124u: goto L_08854820;
    case 125u: goto L_08854828;
    case 126u: goto L_08854830;
    case 127u: goto L_0885483C;
    case 128u: goto L_08854850;
    case 129u: goto L_08854858;
    case 130u: goto L_08854860;
    case 131u: goto L_08854868;
    case 132u: goto L_08854880;
    case 133u: goto L_08854884;
    case 134u: goto L_08854898;
    case 135u: goto L_0885489C;
    case 136u: goto L_088548B4;
    case 137u: goto L_088548D4;
    case 138u: goto L_088548DC;
    case 139u: goto L_088548F0;
    case 140u: goto L_088548F8;
    case 141u: goto L_08854900;
    case 142u: goto L_08854920;
    case 143u: goto L_08854928;
    case 144u: goto L_08854934;
    case 145u: goto L_0885493C;
    case 146u: goto L_08854944;
    case 147u: goto L_08854960;
    case 148u: goto L_08854968;
    case 149u: goto L_08854974;
    case 150u: goto L_0885497C;
    case 151u: goto L_08854988;
    case 152u: goto L_08854990;
    case 153u: goto L_08854998;
    case 154u: goto L_088549A4;
    case 155u: goto L_088549AC;
    case 156u: goto L_088549BC;
    case 157u: goto L_088549C4;
    case 158u: goto L_088549D4;
    case 159u: goto L_088549E0;
    case 160u: goto L_088549EC;
    case 161u: goto L_088549F4;
    case 162u: goto L_08854A04;
    case 163u: goto L_08854A0C;
    case 164u: goto L_08854A1C;
    case 165u: goto L_08854A20;
    case 166u: goto L_08854A24;
    case 167u: goto L_08854A34;
    case 168u: goto L_08854A64;
    case 169u: goto L_08854A78;
    case 170u: goto L_08854A84;
    case 171u: goto L_08854AA8;
    case 172u: goto L_08854AB4;
    case 173u: goto L_08854AC0;
    case 174u: goto L_08854AC4;
    case 175u: goto L_08854AE0;
    case 176u: goto L_08854AE4;
    case 177u: goto L_08854AFC;
    case 178u: goto L_08854B60;
    case 179u: goto L_08854B74;
    case 180u: goto L_08854B80;
    case 181u: goto L_08854B90;
    case 182u: goto L_08854B98;
    case 183u: goto L_08854BA0;
    case 184u: goto L_08854BA8;
    case 185u: goto L_08854BBC;
    case 186u: goto L_08854BD8;
    case 187u: goto L_08854BEC;
    case 188u: goto L_08854BF8;
    case 189u: goto L_08854C24;
    case 190u: goto L_08854C3C;
    case 191u: goto L_08854C48;
    case 192u: goto L_08854C54;
    case 193u: goto L_08854C60;
    case 194u: goto L_08854C6C;
    case 195u: goto L_08854C78;
    case 196u: goto L_08854C84;
    case 197u: goto L_08854C90;
    case 198u: goto L_08854C98;
    case 199u: goto L_08854CA0;
    case 200u: goto L_08854CB4;
    case 201u: goto L_08854CDC;
    case 202u: goto L_08854CE8;
    case 203u: goto L_08854CF4;
    case 204u: goto L_08854CF8;
    case 205u: goto L_08854D04;
    case 206u: goto L_08854D10;
    case 207u: goto L_08854D28;
    case 208u: goto L_08854D5C;
    case 209u: goto L_08854D68;
    case 210u: goto L_08854D6C;
    case 211u: goto L_08854D94;
    case 212u: goto L_08854D9C;
    case 213u: goto L_08854DE4;
    case 214u: goto L_08854DF0;
    case 215u: goto L_08854DF8;
    case 216u: goto L_08854E00;
    case 217u: goto L_08854E08;
    case 218u: goto L_08854E10;
    case 219u: goto L_08854E20;
    case 220u: goto L_08854E3C;
    case 221u: goto L_08854E5C;
    case 222u: goto L_08854E6C;
    case 223u: goto L_08854E74;
    case 224u: goto L_08854E80;
    case 225u: goto L_08854E8C;
    case 226u: goto L_08854E94;
    case 227u: goto L_08854EAC;
    case 228u: goto L_08854ED8;
    case 229u: goto L_08854EE8;
    case 230u: goto L_08854EF0;
    case 231u: goto L_08854EFC;
    case 232u: goto L_08854F08;
    case 233u: goto L_08854F10;
    case 234u: goto L_08854F20;
    case 235u: goto L_08854F3C;
    case 236u: goto L_08854F44;
    case 237u: goto L_08854F70;
    case 238u: goto L_08854F80;
    case 239u: goto L_08854F8C;
    case 240u: goto L_08854F94;
    case 241u: goto L_08854FA0;
    case 242u: goto L_08854FAC;
    case 243u: goto L_08854FB0;
    case 244u: goto L_08854FC0;
    case 245u: goto L_08854FC8;
    case 246u: goto L_08854FD4;
    case 247u: goto L_08854FE0;
    case 248u: goto L_0885500C;
    case 249u: goto L_08855014;
    case 250u: goto L_08855044;
    case 251u: goto L_08855054;
    case 252u: goto L_0885505C;
    case 253u: goto L_08855064;
    case 254u: goto L_0885508C;
    case 255u: goto L_08855094;
    case 256u: goto L_088550C4;
    case 257u: goto L_088550D4;
    case 258u: goto L_088550E4;
    case 259u: goto L_088550F0;
    case 260u: goto L_08855144;
    case 261u: goto L_08855154;
    case 262u: goto L_08855168;
    case 263u: goto L_08855174;
    case 264u: goto L_0885518C;
    case 265u: goto L_088551A8;
    case 266u: goto L_088551B0;
    case 267u: goto L_088551B8;
    case 268u: goto L_088551C4;
    case 269u: goto L_088551CC;
    case 270u: goto L_08855488;
    case 271u: goto L_08855498;
    case 272u: goto L_088554AC;
    case 273u: goto L_088554BC;
    case 274u: goto L_088554D8;
    case 275u: goto L_088554E0;
    case 276u: goto L_088554EC;
    case 277u: goto L_088554F8;
    case 278u: goto L_08855508;
    case 279u: goto L_0885551C;
    case 280u: goto L_08855520;
    case 281u: goto L_0885555C;
    case 282u: goto L_08855578;
    case 283u: goto L_08855584;
    case 284u: goto L_08855590;
    case 285u: goto L_088555A8;
    case 286u: goto L_088555B8;
    case 287u: goto L_088555C0;
    case 288u: goto L_088555D0;
    case 289u: goto L_088555EC;
    case 290u: goto L_088555F4;
    case 291u: goto L_08855600;
    case 292u: goto L_08855608;
    case 293u: goto L_0885560C;
    case 294u: goto L_08855620;
    case 295u: goto L_0885563C;
    case 296u: goto L_08855644;
    case 297u: goto L_0885564C;
    case 298u: goto L_08855658;
    case 299u: goto L_08855674;
    case 300u: goto L_08855688;
    case 301u: goto L_08855690;
    case 302u: goto L_08855698;
    case 303u: goto L_088556B0;
    case 304u: goto L_088556C4;
    case 305u: goto L_088556DC;
    case 306u: goto L_088556F0;
    case 307u: goto L_0885570C;
    case 308u: goto L_08855714;
    case 309u: goto L_08855728;
    case 310u: goto L_0885572C;
    case 311u: goto L_08855730;
    case 312u: goto L_08855740;
    case 313u: goto L_08855750;
    case 314u: goto L_08855758;
    case 315u: goto L_08855760;
    case 316u: goto L_08855768;
    case 317u: goto L_088557C4;
    case 318u: goto L_088557CC;
    case 319u: goto L_088557D4;
    case 320u: goto L_088557DC;
    case 321u: goto L_088557E4;
    case 322u: goto L_088557EC;
    case 323u: goto L_088557F4;
    case 324u: goto L_08855804;
    case 325u: goto L_08855824;
    case 326u: goto L_08855834;
    case 327u: goto L_08855854;
    case 328u: goto L_08855870;
    case 329u: goto L_0885588C;
    case 330u: goto L_08855898;
    case 331u: goto L_088558AC;
    case 332u: goto L_088558B8;
    case 333u: goto L_088558C4;
    case 334u: goto L_088558D0;
    case 335u: goto L_088558D4;
    case 336u: goto L_088558E4;
    case 337u: goto L_08855900;
    case 338u: goto L_0885590C;
    case 339u: goto L_08855920;
    case 340u: goto L_0885592C;
    case 341u: goto L_088559B8;
    case 342u: goto L_088559C0;
    case 343u: goto L_088559F8;
    case 344u: goto L_08855A00;
    case 345u: goto L_08855A28;
    case 346u: goto L_08855A30;
    case 347u: goto L_08855A48;
    case 348u: goto L_08855A50;
    case 349u: goto L_08855A5C;
    case 350u: goto L_08855A64;
    case 351u: goto L_08855A6C;
    case 352u: goto L_08855A84;
    case 353u: goto L_08855A8C;
    case 354u: goto L_08855A98;
    case 355u: goto L_08855AA0;
    case 356u: goto L_08855AC8;
    case 357u: goto L_08855AD0;
    case 358u: goto L_08855AD8;
    case 359u: goto L_08855AE0;
    case 360u: goto L_08855AE8;
    case 361u: goto L_08855AF4;
    case 362u: goto L_08855AFC;
    case 363u: goto L_08855B04;
    case 364u: goto L_08855B1C;
    case 365u: goto L_08855B48;
    case 366u: goto L_08855B58;
    case 367u: goto L_08855B64;
    case 368u: goto L_08855B74;
    case 369u: goto L_08855C00;
    case 370u: goto L_08855C10;
    case 371u: goto L_08855C18;
    case 372u: goto L_08855C30;
    case 373u: goto L_08855C3C;
    case 374u: goto L_08855C78;
    case 375u: goto L_08855C84;
    case 376u: goto L_08855C90;
    case 377u: goto L_08855C9C;
    case 378u: goto L_08855CAC;
    case 379u: goto L_08855CB8;
    case 380u: goto L_08855CC8;
    case 381u: goto L_08855CD0;
    case 382u: goto L_08855CDC;
    case 383u: goto L_08855CEC;
    case 384u: goto L_08855CFC;
    case 385u: goto L_08855D0C;
    case 386u: goto L_08855D1C;
    case 387u: goto L_08855D3C;
    case 388u: goto L_08855D84;
    case 389u: goto L_08855D98;
    case 390u: goto L_08855DA0;
    case 391u: goto L_08855DD8;
    case 392u: goto L_08855DE4;
    case 393u: goto L_08855DE8;
    case 394u: goto L_08855DF8;
    case 395u: goto L_08855E04;
    case 396u: goto L_08855E30;
    case 397u: goto L_08855E38;
    case 398u: goto L_08855E3C;
    case 399u: goto L_08855E54;
    case 400u: goto L_08855E5C;
    case 401u: goto L_08855E80;
    case 402u: goto L_08855E88;
    case 403u: goto L_08855E90;
    case 404u: goto L_08855EA8;
    case 405u: goto L_08855F3C;
    case 406u: goto L_08855F44;
    case 407u: goto L_08855F4C;
    case 408u: goto L_08855F54;
    case 409u: goto L_08855F5C;
    case 410u: goto L_08855F68;
    case 411u: goto L_08855F74;
    case 412u: goto L_08855F88;
    case 413u: goto L_08855F8C;
    case 414u: goto L_08855F98;
    case 415u: goto L_08855FA0;
    case 416u: goto L_08855FBC;
    case 417u: goto L_08855FCC;
    case 418u: goto L_08855FD8;
    case 419u: goto L_08855FE0;
    case 420u: goto L_08855FE8;
    case 421u: goto L_08855FF8;
    case 422u: goto L_0885600C;
    case 423u: goto L_08856020;
    case 424u: goto L_0885603C;
    case 425u: goto L_08856058;
    case 426u: goto L_0885606C;
    case 427u: goto L_08856074;
    case 428u: goto L_08856080;
    case 429u: goto L_0885608C;
    case 430u: goto L_0885609C;
    case 431u: goto L_088560AC;
    case 432u: goto L_088560B4;
    case 433u: goto L_088560CC;
    case 434u: goto L_088560E8;
    case 435u: goto L_088560EC;
    case 436u: goto L_088560F4;
    case 437u: goto L_08856108;
    case 438u: goto L_08856158;
    case 439u: goto L_08856160;
    case 440u: goto L_08856198;
    case 441u: goto L_088561A0;
    case 442u: goto L_088561B4;
    case 443u: goto L_088561CC;
    case 444u: goto L_088561D4;
    case 445u: goto L_088561DC;
    case 446u: goto L_08856248;
    case 447u: goto L_088562B4;
    case 448u: goto L_088562CC;
    case 449u: goto L_088562E0;
    case 450u: goto L_088562E8;
    case 451u: goto L_08856324;
    case 452u: goto L_08856330;
    case 453u: goto L_08856338;
    case 454u: goto L_08856340;
    case 455u: goto L_08856348;
    case 456u: goto L_08856350;
    case 457u: goto L_08856358;
    case 458u: goto L_0885635C;
    case 459u: goto L_08856378;
    case 460u: goto L_08856398;
    case 461u: goto L_088563A8;
    case 462u: goto L_088563B0;
    case 463u: goto L_088563BC;
    case 464u: goto L_088563C8;
    case 465u: goto L_088563D0;
    case 466u: goto L_088563EC;
    case 467u: goto L_0885640C;
    case 468u: goto L_0885641C;
    case 469u: goto L_08856424;
    case 470u: goto L_08856430;
    case 471u: goto L_0885643C;
    case 472u: goto L_08856444;
    case 473u: goto L_08856450;
    case 474u: goto L_08856470;
    case 475u: goto L_08856478;
    case 476u: goto L_08856498;
    case 477u: goto L_088564A8;
    case 478u: goto L_088564B4;
    case 479u: goto L_088564BC;
    case 480u: goto L_088564C8;
    case 481u: goto L_088564D4;
    case 482u: goto L_088564D8;
    case 483u: goto L_088564E8;
    case 484u: goto L_088564F0;
    case 485u: goto L_08856510;
    case 486u: goto L_08856518;
    case 487u: goto L_08856520;
    case 488u: goto L_08856528;
    case 489u: goto L_08856530;
    case 490u: goto L_08856538;
    case 491u: goto L_08856548;
    case 492u: goto L_0885655C;
    case 493u: goto L_08856570;
    case 494u: goto L_0885657C;
    case 495u: goto L_08856584;
    case 496u: goto L_0885658C;
    case 497u: goto L_08856598;
    case 498u: goto L_088565A4;
    case 499u: goto L_088565CC;
    case 500u: goto L_088565D4;
    case 501u: goto L_088565DC;
    case 502u: goto L_088565E8;
    case 503u: goto L_088565F4;
    case 504u: goto L_08856658;
    case 505u: goto L_08856660;
    case 506u: goto L_088566B0;
    case 507u: goto L_088566B8;
    case 508u: goto L_08856704;
    case 509u: goto L_0885670C;
    case 510u: goto L_08856758;
    case 511u: goto L_08856760;
    case 512u: goto L_0885679C;
    case 513u: goto L_088567A4;
    case 514u: goto L_088567B0;
    case 515u: goto L_088567BC;
    case 516u: goto L_088567C8;
    case 517u: goto L_088567D4;
    case 518u: goto L_088567E0;
    case 519u: goto L_088567EC;
    case 520u: goto L_088567F8;
    case 521u: goto L_08856804;
    case 522u: goto L_08856810;
    case 523u: goto L_0885681C;
    case 524u: goto L_08856828;
    case 525u: goto L_08856834;
    case 526u: goto L_08856840;
    case 527u: goto L_08856848;
    case 528u: goto L_0885684C;
    case 529u: goto L_08856850;
    case 530u: goto L_0885685C;
    case 531u: goto L_08856864;
    case 532u: goto L_088568CC;
    case 533u: goto L_088568D4;
    case 534u: goto L_088568F8;
    case 535u: goto L_08856900;
    case 536u: goto L_0885694C;
    case 537u: goto L_08856954;
    case 538u: goto L_0885695C;
    case 539u: goto L_08856964;
    case 540u: goto L_0885696C;
    case 541u: goto L_08856994;
    case 542u: goto L_0885699C;
    case 543u: goto L_088569AC;
    case 544u: goto L_088569B8;
    case 545u: goto L_088569E0;
    case 546u: goto L_088569E8;
    case 547u: goto L_08856A18;
    case 548u: goto L_08856A28;
    case 549u: goto L_08856A30;
    case 550u: goto L_08856A38;
    case 551u: goto L_08856A64;
    case 552u: goto L_08856A74;
    case 553u: goto L_08856A7C;
    case 554u: goto L_08856A84;
    case 555u: goto L_08856A90;
    case 556u: goto L_08856A98;
    case 557u: goto L_08856AA0;
    case 558u: goto L_08856AA8;
    case 559u: goto L_08856AB8;
    case 560u: goto L_08856AC0;
    case 561u: goto L_08856AC4;
    case 562u: goto L_08856AD0;
    case 563u: goto L_08856AD4;
    case 564u: goto L_08856ADC;
    case 565u: goto L_08856AE4;
    case 566u: goto L_08856AF0;
    case 567u: goto L_08856AF4;
    case 568u: goto L_08856AFC;
    case 569u: goto L_08856B1C;
    case 570u: goto L_08856B24;
    case 571u: goto L_08856B2C;
    case 572u: goto L_08856B38;
    case 573u: goto L_08856B44;
    case 574u: goto L_08856B4C;
    case 575u: goto L_08856B54;
    case 576u: goto L_08856B5C;
    case 577u: goto L_08856B64;
    case 578u: goto L_08856B6C;
    case 579u: goto L_08856BC8;
    case 580u: goto L_08856BE4;
    case 581u: goto L_08856BEC;
    case 582u: goto L_08856BF4;
    case 583u: goto L_08856C00;
    case 584u: goto L_08856C08;
    case 585u: goto L_08856C60;
    case 586u: goto L_08856C68;
    case 587u: goto L_08856CA0;
    case 588u: goto L_08856CA8;
    case 589u: goto L_08856CF4;
    case 590u: goto L_08856CFC;
    case 591u: goto L_08856D04;
    case 592u: goto L_08856D10;
    case 593u: goto L_08856D1C;
    case 594u: goto L_08856FDC;
    case 595u: goto L_08856FEC;
    case 596u: goto L_08857000;
    case 597u: goto L_0885700C;
    case 598u: goto L_08857020;
    case 599u: goto L_08857028;
    case 600u: goto L_08857044;
    case 601u: goto L_0885704C;
    case 602u: goto L_088570A0;
    case 603u: goto L_088570A8;
    case 604u: goto L_088570AC;
    case 605u: goto L_088570B0;
    case 606u: goto L_088570EC;
    case 607u: goto L_088570F4;
    case 608u: goto L_088570FC;
    case 609u: goto L_08857120;
    case 610u: goto L_08857128;
    case 611u: goto L_08857134;
    case 612u: goto L_08857140;
    case 613u: goto L_08857178;
    case 614u: goto L_08857180;
    case 615u: goto L_0885718C;
    case 616u: goto L_08857198;
    case 617u: goto L_088571A4;
    case 618u: goto L_088571A8;
    case 619u: goto L_088571B0;
    case 620u: goto L_088571C0;
    case 621u: goto L_088571C8;
    case 622u: goto L_088571D0;
    case 623u: goto L_088571E0;
    case 624u: goto L_088571E8;
    case 625u: goto L_088571F0;
    case 626u: goto L_088571F8;
    case 627u: goto L_08857200;
    case 628u: goto L_08857210;
    case 629u: goto L_08857228;
    case 630u: goto L_08857240;
    case 631u: goto L_08857248;
    case 632u: goto L_08857250;
    case 633u: goto L_08857258;
    case 634u: goto L_08857260;
    case 635u: goto L_08857280;
    case 636u: goto L_08857288;
    case 637u: goto L_08857290;
    case 638u: goto L_088572B8;
    case 639u: goto L_088572D4;
    case 640u: goto L_088572E4;
    case 641u: goto L_088572FC;
    case 642u: goto L_0885731C;
    case 643u: goto L_08857338;
    case 644u: goto L_08857340;
    case 645u: goto L_0885734C;
    case 646u: goto L_08857354;
    case 647u: goto L_08857358;
    case 648u: goto L_0885736C;
    case 649u: goto L_08857388;
    case 650u: goto L_08857390;
    case 651u: goto L_0885739C;
    case 652u: goto L_088573A4;
    case 653u: goto L_088573A8;
    case 654u: goto L_088573BC;
    case 655u: goto L_088573D8;
    case 656u: goto L_088573E0;
    case 657u: goto L_088573EC;
    case 658u: goto L_088573F4;
    case 659u: goto L_088573F8;
    case 660u: goto L_0885740C;
    case 661u: goto L_08857428;
    case 662u: goto L_08857430;
    case 663u: goto L_0885743C;
    case 664u: goto L_08857444;
    case 665u: goto L_08857448;
    case 666u: goto L_0885745C;
    case 667u: goto L_08857470;
    case 668u: goto L_08857484;
    case 669u: goto L_088574A0;
    case 670u: goto L_088574AC;
    case 671u: goto L_088574B8;
    case 672u: goto L_088574C4;
    case 673u: goto L_088574D0;
    case 674u: goto L_088574DC;
    case 675u: goto L_088574F4;
    case 676u: goto L_08857500;
    case 677u: goto L_08857518;
    case 678u: goto L_08857524;
    case 679u: goto L_0885752C;
    case 680u: goto L_08857530;
    case 681u: goto L_08857544;
    case 682u: goto L_08857560;
    case 683u: goto L_08857568;
    case 684u: goto L_08857574;
    case 685u: goto L_0885757C;
    case 686u: goto L_08857580;
    case 687u: goto L_08857594;
    case 688u: goto L_088575C8;
    case 689u: goto L_088575D0;
    case 690u: goto L_088575F0;
    case 691u: goto L_088575F8;
    case 692u: goto L_08857600;
    case 693u: goto L_08857608;
    case 694u: goto L_08857610;
    case 695u: goto L_08857618;
    case 696u: goto L_08857620;
    case 697u: goto L_08857624;
    case 698u: goto L_0885762C;
    case 699u: goto L_08857640;
    case 700u: goto L_08857648;
    case 701u: goto L_08857650;
    case 702u: goto L_08857664;
    case 703u: goto L_08857670;
    case 704u: goto L_0885767C;
    case 705u: goto L_0885769C;
    case 706u: goto L_088576A8;
    case 707u: goto L_088576D0;
    case 708u: goto L_088576E4;
    case 709u: goto L_088576F8;
    case 710u: goto L_0885770C;
    case 711u: goto L_08857720;
    case 712u: goto L_0885772C;
    case 713u: goto L_08857738;
    case 714u: goto L_08857744;
    case 715u: goto L_08857750;
    case 716u: goto L_0885775C;
    case 717u: goto L_08857768;
    case 718u: goto L_08857784;
    case 719u: goto L_08857790;
    case 720u: goto L_088577A8;
    case 721u: goto L_088577B4;
    case 722u: goto L_088577C0;
    case 723u: goto L_088577CC;
    case 724u: goto L_088577D8;
    case 725u: goto L_088577E4;
    case 726u: goto L_088577F0;
    case 727u: goto L_088577F8;
    case 728u: goto L_088577FC;
    case 729u: goto L_08857810;
    case 730u: goto L_08857818;
    case 731u: goto L_08857848;
    case 732u: goto L_08857858;
    case 733u: goto L_08857878;
    case 734u: goto L_088578E8;
    case 735u: goto L_08857904;
    case 736u: goto L_0885790C;
    case 737u: goto L_08857914;
    case 738u: goto L_0885791C;
    case 739u: goto L_08857924;
    case 740u: goto L_0885792C;
    case 741u: goto L_0885793C;
    case 742u: goto L_08857944;
    case 743u: goto L_0885794C;
    case 744u: goto L_0885795C;
    case 745u: goto L_08857964;
    case 746u: goto L_08857974;
    case 747u: goto L_0885797C;
    case 748u: goto L_08857984;
    case 749u: goto L_0885798C;
    case 750u: goto L_08857994;
    case 751u: goto L_0885799C;
    case 752u: goto L_088579C4;
    case 753u: goto L_088579D0;
    case 754u: goto L_088579D8;
    case 755u: goto L_088579E8;
    case 756u: goto L_088579F0;
    case 757u: goto L_08857A00;
    case 758u: goto L_08857A08;
    case 759u: goto L_08857A28;
    case 760u: goto L_08857A34;
    case 761u: goto L_08857A44;
    case 762u: goto L_08857A50;
    case 763u: goto L_08857A58;
    case 764u: goto L_08857A60;
    case 765u: goto L_08857A84;
    case 766u: goto L_08857A90;
    case 767u: goto L_08857AA0;
    case 768u: goto L_08857AB0;
    case 769u: goto L_08857ABC;
    case 770u: goto L_08857AC8;
    case 771u: goto L_08857AD0;
    case 772u: goto L_08857AF4;
    case 773u: goto L_08857B00;
    case 774u: goto L_08857B10;
    case 775u: goto L_08857B24;
    case 776u: goto L_08857B30;
    case 777u: goto L_08857B3C;
    case 778u: goto L_08857B44;
    case 779u: goto L_08857B4C;
    case 780u: goto L_08857B54;
    case 781u: goto L_08857B5C;
    case 782u: goto L_08857B68;
    case 783u: goto L_08857B74;
    case 784u: goto L_08857B7C;
    case 785u: goto L_08857B88;
    case 786u: goto L_08857B94;
    case 787u: goto L_08857BA0;
    case 788u: goto L_08857BA8;
    case 789u: goto L_08857BB0;
    case 790u: goto L_08857BB8;
    case 791u: goto L_08857BC4;
    case 792u: goto L_08857BCC;
    case 793u: goto L_08857BD8;
    case 794u: goto L_08857BE0;
    case 795u: goto L_08857BF4;
    case 796u: goto L_08857BFC;
    case 797u: goto L_08857C10;
    case 798u: goto L_08857C18;
    case 799u: goto L_08857C24;
    case 800u: goto L_08857C34;
    case 801u: goto L_08857C3C;
    case 802u: goto L_08857C44;
    case 803u: goto L_08857C58;
    case 804u: goto L_08857C60;
    case 805u: goto L_08857C6C;
    case 806u: goto L_08857C74;
    case 807u: goto L_08857C80;
    case 808u: goto L_08857C88;
    case 809u: goto L_08857C9C;
    case 810u: goto L_08857CA4;
    case 811u: goto L_08857CB0;
    case 812u: goto L_08857CC4;
    case 813u: goto L_08857CCC;
    case 814u: goto L_08857CD8;
    case 815u: goto L_08857CE0;
    case 816u: goto L_08857CF4;
    case 817u: goto L_08857CFC;
    case 818u: goto L_08857D10;
    case 819u: goto L_08857D18;
    case 820u: goto L_08857D24;
    case 821u: goto L_08857D38;
    case 822u: goto L_08857D40;
    case 823u: goto L_08857D4C;
    case 824u: goto L_08857D54;
    case 825u: goto L_08857D68;
    case 826u: goto L_08857D70;
    case 827u: goto L_08857D7C;
    case 828u: goto L_08857D90;
    case 829u: goto L_08857D98;
    case 830u: goto L_08857DA4;
    case 831u: goto L_08857DAC;
    case 832u: goto L_08857DB8;
    case 833u: goto L_08857DCC;
    case 834u: goto L_08857DD4;
    case 835u: goto L_08857DE0;
    case 836u: goto L_08857DF4;
    case 837u: goto L_08857E04;
    case 838u: goto L_08857E68;
    case 839u: goto L_08857E70;
    case 840u: goto L_08857E84;
    case 841u: goto L_08857E90;
    case 842u: goto L_08857E98;
    case 843u: goto L_08857E9C;
    case 844u: goto L_08857EA4;
    case 845u: goto L_08857EA8;
    case 846u: goto L_08857ECC;
    case 847u: goto L_08857ED4;
    case 848u: goto L_08857EDC;
    case 849u: goto L_08857EE4;
    case 850u: goto L_08857EF8;
    case 851u: goto L_08857F04;
    case 852u: goto L_08857F18;
    case 853u: goto L_08857F20;
    case 854u: goto L_08857F2C;
    case 855u: goto L_08857F34;
    case 856u: goto L_08857F3C;
    case 857u: goto L_08857F44;
    case 858u: goto L_08857F58;
    case 859u: goto L_08857F64;
    case 860u: goto L_08857F78;
    case 861u: goto L_08857F80;
    case 862u: goto L_08857F8C;
    case 863u: goto L_08857F94;
    case 864u: goto L_08857F9C;
    case 865u: goto L_08857FA4;
    case 866u: goto L_08857FAC;
    case 867u: goto L_08857FC0;
    case 868u: goto L_08857FCC;
    case 869u: goto L_08857FE0;
    case 870u: goto L_08857FE8;
    case 871u: goto L_08857FF4;
    case 872u: goto L_08857FFC;
    default:
        if (local_transfers == 0u) rt.unsupported(ctx.pc, 0u, "invalid internal function entry");
        else ctx.pc = local_pc;
        return;
    }
    }
L_08854000:
    rt.memory().aot_store32(ctx.gpr[16] + static_cast<std::uint32_t>(32132), ctx.gpr[2]);
    ctx.set_gpr(31, 0x0885400Cu);
    rt.memory().aot_store32(ctx.gpr[16] + static_cast<std::uint32_t>(32136), ctx.gpr[19]);
    if (rt.invoke_chained_direct<&recomp_unit_0017_entry, 17u, 183u, 0x08848C24u>(ctx, &aot_mem) && ctx.pc == 0x0885400Cu) goto L_0885400C;
    return;
L_0885400C:
    ctx.set_gpr(31, 0x08854014u);
    rt.memory().aot_store32(ctx.gpr[16] + static_cast<std::uint32_t>(32140), ctx.gpr[2]);
    if (rt.invoke_chained_direct<&recomp_unit_0017_entry, 17u, 184u, 0x08848C30u>(ctx, &aot_mem) && ctx.pc == 0x08854014u) goto L_08854014;
    return;
L_08854014:
    rt.memory().aot_store32(ctx.gpr[16] + static_cast<std::uint32_t>(32144), ctx.gpr[2]);
    rt.memory().aot_store32(ctx.gpr[16] + static_cast<std::uint32_t>(32148), ctx.gpr[18]);
    ctx.set_gpr(31, 0x08854024u);
    rt.memory().aot_store32(ctx.gpr[16] + static_cast<std::uint32_t>(32152), ctx.gpr[17]);
    if (rt.invoke_chained_direct<&recomp_unit_0017_entry, 17u, 182u, 0x08848C18u>(ctx, &aot_mem) && ctx.pc == 0x08854024u) goto L_08854024;
    return;
L_08854024:
    ctx.set_gpr(31, 0x0885402Cu);
    rt.memory().aot_store32(ctx.gpr[16] + static_cast<std::uint32_t>(32156), ctx.gpr[2]);
    if (rt.invoke_chained_direct<&recomp_unit_0017_entry, 17u, 185u, 0x08848C3Cu>(ctx, &aot_mem) && ctx.pc == 0x0885402Cu) goto L_0885402C;
    return;
L_0885402C:
    ctx.set_gpr(31, 0x08854034u);
    rt.memory().aot_store32(ctx.gpr[16] + static_cast<std::uint32_t>(32160), ctx.gpr[2]);
    if (rt.invoke_chained_direct<&recomp_unit_0017_entry, 17u, 182u, 0x08848C18u>(ctx, &aot_mem) && ctx.pc == 0x08854034u) goto L_08854034;
    return;
L_08854034:
    ctx.set_gpr(31, 0x0885403Cu);
    ctx.set_gpr(4, ctx.gpr[2] + 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0023_entry, 23u, 527u, 0x08861EF0u>(ctx, &aot_mem) && ctx.pc == 0x0885403Cu) goto L_0885403C;
    return;
L_0885403C:
    rt.memory().aot_store32(ctx.gpr[16] + static_cast<std::uint32_t>(32164), ctx.gpr[2]);
    rt.memory().aot_store32(ctx.gpr[16] + static_cast<std::uint32_t>(32032), 0u);
    ctx.set_gpr(2, 0u + static_cast<std::uint32_t>(-1));
    rt.memory().aot_store32(ctx.gpr[16] + static_cast<std::uint32_t>(32016), ctx.gpr[2]);
    rt.memory().aot_store32(ctx.gpr[16] + static_cast<std::uint32_t>(32020), ctx.gpr[2]);
    rt.memory().aot_store32(ctx.gpr[16] + static_cast<std::uint32_t>(32024), 0u);
    rt.memory().aot_store32(ctx.gpr[16] + static_cast<std::uint32_t>(32028), 0u);
    rt.memory().aot_store32(ctx.gpr[16] + static_cast<std::uint32_t>(32036), 0u);
    rt.memory().aot_store32(ctx.gpr[16] + static_cast<std::uint32_t>(32044), ctx.gpr[2]);
    rt.memory().aot_store32(ctx.gpr[16] + static_cast<std::uint32_t>(32048), ctx.gpr[2]);
    rt.memory().aot_store32(ctx.gpr[16] + static_cast<std::uint32_t>(32052), ctx.gpr[2]);
    rt.memory().aot_store32(ctx.gpr[16] + static_cast<std::uint32_t>(32056), ctx.gpr[2]);
    rt.memory().aot_store32(ctx.gpr[16] + static_cast<std::uint32_t>(32060), ctx.gpr[2]);
    rt.memory().aot_store32(ctx.gpr[16] + static_cast<std::uint32_t>(32064), ctx.gpr[2]);
    rt.memory().aot_store32(ctx.gpr[16] + static_cast<std::uint32_t>(32012), 0u);
    ctx.set_gpr(2, 0u + static_cast<std::uint32_t>(1));
    rt.memory().aot_store8(ctx.gpr[16] + static_cast<std::uint32_t>(8), static_cast<std::uint8_t>(ctx.gpr[2]));
    rt.memory().aot_store32(ctx.gpr[16] + static_cast<std::uint32_t>(32080), 0u);
    ctx.set_gpr(4, ctx.gpr[16] + static_cast<std::uint32_t>(32088));
    ctx.set_gpr(31, 0x08854090u);
    rt.memory().aot_store32(ctx.gpr[16] + static_cast<std::uint32_t>(32084), 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0019_entry, 19u, 946u, 0x08853D5Cu>(ctx, &aot_mem) && ctx.pc == 0x08854090u) goto L_08854090;
    return;
L_08854090:
    ctx.set_gpr(31, 0x08854098u);
    rt.memory().aot_store8(ctx.gpr[16] + static_cast<std::uint32_t>(32040), static_cast<std::uint8_t>(0u));
    if (rt.invoke_chained_direct<&recomp_unit_0017_entry, 17u, 182u, 0x08848C18u>(ctx, &aot_mem) && ctx.pc == 0x08854098u) goto L_08854098;
    return;
L_08854098:
    ctx.set_gpr(31, 0x088540A0u);
    ctx.set_gpr(4, ctx.gpr[2] + 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0023_entry, 23u, 485u, 0x08861D50u>(ctx, &aot_mem) && ctx.pc == 0x088540A0u) goto L_088540A0;
    return;
L_088540A0:
    ctx.set_gpr(3, static_cast<std::int32_t>(ctx.gpr[2]) < 6 ? 1u : 0u);
    if (ctx.gpr[3] != 0u) {
    rt.memory().aot_store8(ctx.gpr[16] + static_cast<std::uint32_t>(32120), static_cast<std::uint8_t>(0u));
        goto L_0885418C;
    }
    goto L_088540AC;
L_088540AC:
    ctx.set_gpr(31, 0x088540B4u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0017_entry, 17u, 191u, 0x08848C84u>(ctx, &aot_mem) && ctx.pc == 0x088540B4u) goto L_088540B4;
    return;
L_088540B4:
    ctx.set_gpr(4, ctx.gpr[2] + 0u);
    ctx.set_gpr(2, 17280u << 16u);
    ctx.set_gpr(2, ctx.gpr[2] | 32768u);
    ctx.fpr[12] = std::bit_cast<float>(ctx.gpr[2]);
    ctx.set_gpr(2, 16784u << 16u);
    ctx.fpr[13] = std::bit_cast<float>(ctx.gpr[2]);
    ctx.set_gpr(2, 17247u << 16u);
    ctx.fpr[14] = std::bit_cast<float>(ctx.gpr[2]);
    ctx.set_gpr(2, 17024u << 16u);
    ctx.fpr[15] = std::bit_cast<float>(ctx.gpr[2]);
    ctx.set_gpr(2, 16256u << 16u);
    ctx.fpr[16] = std::bit_cast<float>(ctx.gpr[2]);
    ctx.set_gpr(5, 0u + 0u);
    ctx.set_gpr(6, 0u + 0u);
    ctx.set_gpr(7, 0u + 0u);
    ctx.set_gpr(8, 0u + 0u);
    ctx.set_gpr(31, 0x088540FCu);
    ctx.set_gpr(9, 0u + static_cast<std::uint32_t>(128));
    if (rt.invoke_chained_direct<&recomp_unit_0191_entry, 191u, 103u, 0x08B00814u>(ctx, &aot_mem) && ctx.pc == 0x088540FCu) goto L_088540FC;
    return;
L_088540FC:
    ctx.set_gpr(31, 0x08854104u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0017_entry, 17u, 191u, 0x08848C84u>(ctx, &aot_mem) && ctx.pc == 0x08854104u) goto L_08854104;
    return;
L_08854104:
    ctx.set_gpr(4, ctx.gpr[2] + 0u);
    ctx.set_gpr(2, 17350u << 16u);
    ctx.fpr[12] = std::bit_cast<float>(ctx.gpr[2]);
    ctx.set_gpr(2, 17234u << 16u);
    ctx.fpr[13] = std::bit_cast<float>(ctx.gpr[2]);
    ctx.set_gpr(2, 17064u << 16u);
    ctx.fpr[14] = std::bit_cast<float>(ctx.gpr[2]);
    ctx.set_gpr(2, 16904u << 16u);
    ctx.fpr[15] = std::bit_cast<float>(ctx.gpr[2]);
    ctx.set_gpr(2, 16256u << 16u);
    ctx.fpr[16] = std::bit_cast<float>(ctx.gpr[2]);
    ctx.set_gpr(5, 0u + static_cast<std::uint32_t>(1));
    ctx.set_gpr(6, 0u + 0u);
    ctx.set_gpr(7, 0u + 0u);
    ctx.set_gpr(8, 0u + 0u);
    ctx.set_gpr(31, 0x08854148u);
    ctx.set_gpr(9, 0u + static_cast<std::uint32_t>(128));
    if (rt.invoke_chained_direct<&recomp_unit_0191_entry, 191u, 103u, 0x08B00814u>(ctx, &aot_mem) && ctx.pc == 0x08854148u) goto L_08854148;
    return;
L_08854148:
    ctx.set_gpr(2, 0u + static_cast<std::uint32_t>(-1));
    rt.memory().aot_store32(ctx.gpr[16] + static_cast<std::uint32_t>(32104), ctx.gpr[2]);
    rt.memory().aot_store32(ctx.gpr[16] + static_cast<std::uint32_t>(32108), ctx.gpr[2]);
    rt.memory().aot_store32(ctx.gpr[16] + static_cast<std::uint32_t>(32112), ctx.gpr[2]);
    ctx.set_gpr(31, 0x08854160u);
    rt.memory().aot_store32(ctx.gpr[16] + static_cast<std::uint32_t>(32116), ctx.gpr[2]);
    if (rt.invoke_chained_direct<&recomp_unit_0017_entry, 17u, 191u, 0x08848C84u>(ctx, &aot_mem) && ctx.pc == 0x08854160u) goto L_08854160;
    return;
L_08854160:
    ctx.set_gpr(4, ctx.gpr[2] + 0u);
    ctx.set_gpr(5, 0u + 0u);
    ctx.set_gpr(31, 0x08854170u);
    ctx.set_gpr(6, 0u + 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0191_entry, 191u, 135u, 0x08B00A70u>(ctx, &aot_mem) && ctx.pc == 0x08854170u) goto L_08854170;
    return;
L_08854170:
    ctx.set_gpr(31, 0x08854178u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0017_entry, 17u, 191u, 0x08848C84u>(ctx, &aot_mem) && ctx.pc == 0x08854178u) goto L_08854178;
    return;
L_08854178:
    ctx.set_gpr(4, ctx.gpr[2] + 0u);
    ctx.set_gpr(5, 0u + static_cast<std::uint32_t>(1));
    ctx.set_gpr(31, 0x08854188u);
    ctx.set_gpr(6, 0u + 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0191_entry, 191u, 135u, 0x08B00A70u>(ctx, &aot_mem) && ctx.pc == 0x08854188u) goto L_08854188;
    return;
L_08854188:
    rt.memory().aot_store8(ctx.gpr[16] + static_cast<std::uint32_t>(32120), static_cast<std::uint8_t>(0u));
    goto L_0885418C;
L_0885418C:
    ctx.set_gpr(3, 0u + static_cast<std::uint32_t>(1));
    rt.memory().aot_store8(ctx.gpr[16] + static_cast<std::uint32_t>(0), static_cast<std::uint8_t>(ctx.gpr[3]));
    ctx.set_gpr(31, rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(28)));
    ctx.set_gpr(20, rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(24)));
    ctx.set_gpr(19, rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(20)));
    ctx.set_gpr(18, rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(16)));
    ctx.set_gpr(17, rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(12)));
    ctx.set_gpr(16, rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(8)));
    jump_target = ctx.gpr[31];
    ctx.set_gpr(29, ctx.gpr[29] + static_cast<std::uint32_t>(32));
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_088541B4:
    ctx.set_gpr(29, ctx.gpr[29] + static_cast<std::uint32_t>(-16));
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(12), ctx.gpr[31]);
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(8), ctx.gpr[16]);
    rt.memory().aot_store32(ctx.gpr[4] + static_cast<std::uint32_t>(32124), 0u);
    rt.memory().aot_store32(ctx.gpr[4] + static_cast<std::uint32_t>(32128), 0u);
    rt.memory().aot_store32(ctx.gpr[4] + static_cast<std::uint32_t>(32132), 0u);
    rt.memory().aot_store32(ctx.gpr[4] + static_cast<std::uint32_t>(32136), 0u);
    rt.memory().aot_store32(ctx.gpr[4] + static_cast<std::uint32_t>(32140), 0u);
    rt.memory().aot_store32(ctx.gpr[4] + static_cast<std::uint32_t>(32144), 0u);
    rt.memory().aot_store32(ctx.gpr[4] + static_cast<std::uint32_t>(32148), 0u);
    rt.memory().aot_store32(ctx.gpr[4] + static_cast<std::uint32_t>(32152), 0u);
    rt.memory().aot_store32(ctx.gpr[4] + static_cast<std::uint32_t>(32156), 0u);
    rt.memory().aot_store32(ctx.gpr[4] + static_cast<std::uint32_t>(32160), 0u);
    rt.memory().aot_store32(ctx.gpr[4] + static_cast<std::uint32_t>(32164), 0u);
    rt.memory().aot_store8(ctx.gpr[4] + static_cast<std::uint32_t>(8), static_cast<std::uint8_t>(0u));
    rt.memory().aot_store8(ctx.gpr[4] + static_cast<std::uint32_t>(32040), static_cast<std::uint8_t>(0u));
    ctx.set_gpr(31, 0x088541FCu);
    ctx.set_gpr(16, ctx.gpr[4] + 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0017_entry, 17u, 182u, 0x08848C18u>(ctx, &aot_mem) && ctx.pc == 0x088541FCu) goto L_088541FC;
    return;
L_088541FC:
    ctx.set_gpr(31, 0x08854204u);
    ctx.set_gpr(4, ctx.gpr[2] + 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0023_entry, 23u, 485u, 0x08861D50u>(ctx, &aot_mem) && ctx.pc == 0x08854204u) goto L_08854204;
    return;
L_08854204:
    ctx.set_gpr(3, static_cast<std::int32_t>(ctx.gpr[2]) < 6 ? 1u : 0u);
    if (ctx.gpr[3] != 0u) {
    rt.memory().aot_store8(ctx.gpr[16] + static_cast<std::uint32_t>(0), static_cast<std::uint8_t>(0u));
        goto L_08854228;
    }
    goto L_08854210;
L_08854210:
    ctx.set_gpr(31, 0x08854218u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0017_entry, 17u, 191u, 0x08848C84u>(ctx, &aot_mem) && ctx.pc == 0x08854218u) goto L_08854218;
    return;
L_08854218:
    ctx.set_gpr(31, 0x08854220u);
    ctx.set_gpr(4, ctx.gpr[2] + 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0191_entry, 191u, 131u, 0x08B00A28u>(ctx, &aot_mem) && ctx.pc == 0x08854220u) goto L_08854220;
    return;
L_08854220:
    rt.memory().aot_store8(ctx.gpr[16] + static_cast<std::uint32_t>(32120), static_cast<std::uint8_t>(0u));
    rt.memory().aot_store8(ctx.gpr[16] + static_cast<std::uint32_t>(0), static_cast<std::uint8_t>(0u));
    goto L_08854228;
L_08854228:
    ctx.set_gpr(31, rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(12)));
    ctx.set_gpr(16, rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(8)));
    jump_target = ctx.gpr[31];
    ctx.set_gpr(29, ctx.gpr[29] + static_cast<std::uint32_t>(16));
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_08854238:
    ctx.set_gpr(29, ctx.gpr[29] + static_cast<std::uint32_t>(-16));
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(12), ctx.gpr[31]);
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(8), ctx.gpr[16]);
    ctx.set_gpr(2, 0u + static_cast<std::uint32_t>(-1));
    rt.memory().aot_store32(ctx.gpr[4] + static_cast<std::uint32_t>(32044), ctx.gpr[2]);
    rt.memory().aot_store32(ctx.gpr[4] + static_cast<std::uint32_t>(32048), ctx.gpr[2]);
    rt.memory().aot_store32(ctx.gpr[4] + static_cast<std::uint32_t>(32052), ctx.gpr[2]);
    rt.memory().aot_store32(ctx.gpr[4] + static_cast<std::uint32_t>(32056), ctx.gpr[2]);
    rt.memory().aot_store32(ctx.gpr[4] + static_cast<std::uint32_t>(32060), ctx.gpr[2]);
    rt.memory().aot_store32(ctx.gpr[4] + static_cast<std::uint32_t>(32064), ctx.gpr[2]);
    ctx.set_gpr(16, ctx.gpr[4] + 0u);
    ctx.set_gpr(4, rt.memory().aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(32136)));
    ctx.set_gpr(2, 49024u << 16u);
    ctx.fpr[12] = std::bit_cast<float>(ctx.gpr[2]);
    ctx.set_gpr(25, rt.memory().aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(200)));
    ctx.set_gpr(5, 0u + 0u);
    ctx.set_gpr(6, 0u + 0u);
    ctx.set_gpr(25, rt.memory().aot_load32(ctx.gpr[25] + static_cast<std::uint32_t>(24)));
    ctx.set_gpr(7, 0u + 0u);
    jump_target = ctx.gpr[25];
    ctx.set_gpr(31, 0x0885428Cu);
    ctx.set_gpr(8, 0u + 0u);
    ctx.pc = jump_target;
    if (rt.invoke_chained_call(ctx, &aot_mem) && ctx.pc == 0x0885428Cu) goto L_0885428C;
    return;
L_0885428C:
    ctx.set_gpr(31, 0x08854294u);
    ctx.set_gpr(4, rt.memory().aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(32136)));
    if (rt.invoke_chained_direct<&recomp_unit_0022_entry, 22u, 529u, 0x0885DF90u>(ctx, &aot_mem) && ctx.pc == 0x08854294u) goto L_08854294;
    return;
L_08854294:
    rt.memory().aot_store32(ctx.gpr[16] + static_cast<std::uint32_t>(32012), 0u);
    rt.memory().aot_store32(ctx.gpr[16] + static_cast<std::uint32_t>(32032), 0u);
    ctx.set_gpr(2, 0u + static_cast<std::uint32_t>(-1));
    rt.memory().aot_store32(ctx.gpr[16] + static_cast<std::uint32_t>(32016), ctx.gpr[2]);
    rt.memory().aot_store32(ctx.gpr[16] + static_cast<std::uint32_t>(32020), ctx.gpr[2]);
    rt.memory().aot_store32(ctx.gpr[16] + static_cast<std::uint32_t>(32024), 0u);
    rt.memory().aot_store32(ctx.gpr[16] + static_cast<std::uint32_t>(32028), 0u);
    rt.memory().aot_store32(ctx.gpr[16] + static_cast<std::uint32_t>(32036), 0u);
    ctx.set_gpr(2, 0u + static_cast<std::uint32_t>(1));
    rt.memory().aot_store8(ctx.gpr[16] + static_cast<std::uint32_t>(8), static_cast<std::uint8_t>(ctx.gpr[2]));
    rt.memory().aot_store8(ctx.gpr[16] + static_cast<std::uint32_t>(32040), static_cast<std::uint8_t>(0u));
    ctx.set_gpr(31, 0x088542C8u);
    ctx.set_gpr(4, rt.memory().aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(32148)));
    if (rt.invoke_chained_direct<&recomp_unit_0022_entry, 22u, 766u, 0x0885EEC4u>(ctx, &aot_mem) && ctx.pc == 0x088542C8u) goto L_088542C8;
    return;
L_088542C8:
    ctx.set_gpr(31, 0x088542D0u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0017_entry, 17u, 182u, 0x08848C18u>(ctx, &aot_mem) && ctx.pc == 0x088542D0u) goto L_088542D0;
    return;
L_088542D0:
    ctx.set_gpr(4, ctx.gpr[2] + 0u);
    ctx.set_gpr(31, 0x088542DCu);
    ctx.set_gpr(5, 0u + 0u);
    goto L_08854338;
L_088542DC:
    rt.memory().aot_store32(ctx.gpr[16] + static_cast<std::uint32_t>(32080), 0u);
    ctx.set_gpr(4, ctx.gpr[16] + static_cast<std::uint32_t>(32088));
    ctx.set_gpr(31, 0x088542ECu);
    rt.memory().aot_store32(ctx.gpr[16] + static_cast<std::uint32_t>(32084), 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0019_entry, 19u, 946u, 0x08853D5Cu>(ctx, &aot_mem) && ctx.pc == 0x088542ECu) goto L_088542EC;
    return;
L_088542EC:
    ctx.set_gpr(31, 0x088542F4u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0017_entry, 17u, 182u, 0x08848C18u>(ctx, &aot_mem) && ctx.pc == 0x088542F4u) goto L_088542F4;
    return;
L_088542F4:
    ctx.set_gpr(31, 0x088542FCu);
    ctx.set_gpr(4, ctx.gpr[2] + 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0023_entry, 23u, 485u, 0x08861D50u>(ctx, &aot_mem) && ctx.pc == 0x088542FCu) goto L_088542FC;
    return;
L_088542FC:
    ctx.set_gpr(3, static_cast<std::int32_t>(ctx.gpr[2]) < 6 ? 1u : 0u);
    if (ctx.gpr[3] != 0u) {
    ctx.set_gpr(31, rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(12)));
        goto L_0885432C;
    }
    goto L_08854308;
L_08854308:
    ctx.set_gpr(2, 0u + static_cast<std::uint32_t>(-1));
    rt.memory().aot_store32(ctx.gpr[16] + static_cast<std::uint32_t>(32104), ctx.gpr[2]);
    rt.memory().aot_store32(ctx.gpr[16] + static_cast<std::uint32_t>(32108), ctx.gpr[2]);
    rt.memory().aot_store32(ctx.gpr[16] + static_cast<std::uint32_t>(32112), ctx.gpr[2]);
    rt.memory().aot_store32(ctx.gpr[16] + static_cast<std::uint32_t>(32116), ctx.gpr[2]);
    ctx.set_gpr(4, ctx.gpr[16] + 0u);
    ctx.set_gpr(31, 0x08854328u);
    ctx.set_gpr(5, 0u + 0u);
    goto L_08854944;
L_08854328:
    ctx.set_gpr(31, rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(12)));
    goto L_0885432C;
L_0885432C:
    ctx.set_gpr(16, rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(8)));
    jump_target = ctx.gpr[31];
    ctx.set_gpr(29, ctx.gpr[29] + static_cast<std::uint32_t>(16));
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_08854338:
    ctx.set_gpr(3, 1u << 16u);
    ctx.set_gpr(3, ctx.gpr[4] + ctx.gpr[3]);
    jump_target = ctx.gpr[31];
    rt.memory().aot_store8(ctx.gpr[3] + static_cast<std::uint32_t>(-4782), static_cast<std::uint8_t>(ctx.gpr[5]));
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_08854348:
    ctx.set_gpr(29, ctx.gpr[29] + static_cast<std::uint32_t>(-48));
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(28), ctx.gpr[31]);
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(24), ctx.gpr[22]);
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(20), ctx.gpr[21]);
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(16), ctx.gpr[20]);
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(12), ctx.gpr[19]);
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(8), ctx.gpr[18]);
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(4), ctx.gpr[17]);
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(0), ctx.gpr[16]);
    ctx.set_gpr(3, rt.memory().aot_load8(ctx.gpr[4] + static_cast<std::uint32_t>(0)));
    ctx.set_gpr(21, ctx.gpr[4] + 0u);
    ctx.set_gpr(20, ctx.gpr[6] + 0u);
    { const bool branch_taken = ctx.gpr[3] == 0u;
    ctx.set_gpr(19, ctx.gpr[7] + 0u);
      if (branch_taken) {
          goto L_088544A4;
      }
      goto L_08854380;
    }
L_08854380:
    ctx.set_gpr(3, rt.memory().aot_load8(ctx.gpr[21] + static_cast<std::uint32_t>(8)));
    if (ctx.gpr[3] == 0u) {
    ctx.set_gpr(31, rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(28)));
        goto L_088544A8;
    }
    goto L_0885438C;
L_0885438C:
    ctx.set_gpr(4, rt.memory().aot_load32(ctx.gpr[21] + static_cast<std::uint32_t>(32164)));
    if (ctx.gpr[4] == 0u) {
    ctx.set_gpr(2, rt.memory().aot_load32(ctx.gpr[21] + static_cast<std::uint32_t>(32020)));
        goto L_088543B8;
    }
    goto L_08854398;
L_08854398:
    ctx.set_gpr(31, 0x088543A0u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0165_entry, 165u, 476u, 0x08A9B0A0u>(ctx, &aot_mem) && ctx.pc == 0x088543A0u) goto L_088543A0;
    return;
L_088543A0:
    ctx.set_gpr(4, rt.memory().aot_load32(ctx.gpr[21] + static_cast<std::uint32_t>(32132)));
    ctx.fpr[12] = std::bit_cast<float>(0u);
    ctx.set_gpr(6, ctx.gpr[20] + 0u);
    ctx.set_gpr(31, 0x088543B4u);
    ctx.set_gpr(7, ctx.gpr[19] + 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0017_entry, 17u, 459u, 0x08849C34u>(ctx, &aot_mem) && ctx.pc == 0x088543B4u) goto L_088543B4;
    return;
L_088543B4:
    ctx.set_gpr(2, rt.memory().aot_load32(ctx.gpr[21] + static_cast<std::uint32_t>(32020)));
    goto L_088543B8;
L_088543B8:
    ctx.set_gpr(1, static_cast<std::int32_t>(0u) < static_cast<std::int32_t>(ctx.gpr[2]) ? 1u : 0u);
    { const bool branch_taken = ctx.gpr[1] != 0u;
    ctx.set_gpr(3, rt.memory().aot_load32(ctx.gpr[21] + static_cast<std::uint32_t>(32016)));
      if (branch_taken) {
          goto L_088543E4;
      }
      goto L_088543C4;
    }
L_088543C4:
    ctx.set_gpr(1, static_cast<std::int32_t>(ctx.gpr[2]) < static_cast<std::int32_t>(0u) ? 1u : 0u);
    if (ctx.gpr[1] != 0u) {
    rt.memory().aot_store32(ctx.gpr[21] + static_cast<std::uint32_t>(32016), ctx.gpr[20]);
        goto L_088543E0;
    }
    goto L_088543D0;
L_088543D0:
    ctx.set_gpr(1, ctx.gpr[3] < 0u ? 1u : 0u);
    if (ctx.gpr[1] == 0u) {
    ctx.set_gpr(2, rt.memory().aot_load32(ctx.gpr[21] + static_cast<std::uint32_t>(32024)));
        goto L_088543E8;
    }
    goto L_088543DC;
L_088543DC:
    rt.memory().aot_store32(ctx.gpr[21] + static_cast<std::uint32_t>(32016), ctx.gpr[20]);
    goto L_088543E0;
L_088543E0:
    rt.memory().aot_store32(ctx.gpr[21] + static_cast<std::uint32_t>(32020), ctx.gpr[19]);
    goto L_088543E4;
L_088543E4:
    ctx.set_gpr(2, rt.memory().aot_load32(ctx.gpr[21] + static_cast<std::uint32_t>(32024)));
    goto L_088543E8;
L_088543E8:
    ctx.set_gpr(3, rt.memory().aot_load32(ctx.gpr[21] + static_cast<std::uint32_t>(32028)));
    ctx.set_gpr(4, rt.memory().aot_load32(ctx.gpr[21] + static_cast<std::uint32_t>(32016)));
    ctx.set_gpr(8, ctx.gpr[20] + ctx.gpr[2]);
    ctx.set_gpr(2, ctx.gpr[8] < ctx.gpr[20] ? 1u : 0u);
    ctx.set_gpr(2, ctx.gpr[2] + ctx.gpr[19]);
    ctx.set_gpr(5, ctx.gpr[2] + ctx.gpr[3]);
    ctx.set_gpr(2, rt.memory().aot_load32(ctx.gpr[21] + static_cast<std::uint32_t>(32020)));
    ctx.set_gpr(3, ctx.gpr[8] < ctx.gpr[4] ? 1u : 0u);
    ctx.set_gpr(18, ctx.gpr[8] - ctx.gpr[4]);
    ctx.set_gpr(2, ctx.gpr[5] - ctx.gpr[2]);
    ctx.set_gpr(17, ctx.gpr[2] - ctx.gpr[3]);
    ctx.set_gpr(2, 59430u << 16u);
    ctx.set_gpr(16, ctx.gpr[2] | 54933u);
    ctx.set_gpr(2, 15889u << 16u);
    ctx.set_gpr(22, ctx.gpr[2] | 11787u);
    ctx.set_gpr(4, ctx.gpr[18] + 0u);
    ctx.set_gpr(31, 0x08854430u);
    ctx.set_gpr(5, ctx.gpr[17] + 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0006_entry, 6u, 116u, 0x0881C89Cu>(ctx, &aot_mem) && ctx.pc == 0x08854430u) goto L_08854430;
    return;
L_08854430:
    ctx.set_gpr(4, ctx.gpr[16] + 0u);
    ctx.set_gpr(5, ctx.gpr[22] + 0u);
    ctx.set_gpr(6, ctx.gpr[2] + 0u);
    ctx.set_gpr(31, 0x08854444u);
    ctx.set_gpr(7, ctx.gpr[3] + 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0006_entry, 6u, 778u, 0x0881F44Cu>(ctx, &aot_mem) && ctx.pc == 0x08854444u) goto L_08854444;
    return;
L_08854444:
    ctx.set_gpr(4, ctx.gpr[2] + 0u);
    ctx.set_gpr(31, 0x08854450u);
    ctx.set_gpr(5, ctx.gpr[3] + 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0007_entry, 7u, 18u, 0x08820104u>(ctx, &aot_mem) && ctx.pc == 0x08854450u) goto L_08854450;
    return;
L_08854450:
    rt.memory().aot_store32(ctx.gpr[21] + static_cast<std::uint32_t>(32032), std::bit_cast<std::uint32_t>(ctx.fpr[0]));
    ctx.set_gpr(31, 0x0885445Cu);
    ctx.set_gpr(4, ctx.gpr[21] + 0u);
    goto L_088544CC;
L_0885445C:
    rt.memory().aot_store8(ctx.gpr[29] + static_cast<std::uint32_t>(47), static_cast<std::uint8_t>(0u));
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(40), 0u);
    ctx.set_gpr(4, ctx.gpr[21] + 0u);
    goto L_08854468;
L_08854468:
    ctx.set_gpr(6, ctx.gpr[20] + 0u);
    ctx.set_gpr(7, ctx.gpr[19] + 0u);
    ctx.set_gpr(8, ctx.gpr[18] + 0u);
    ctx.set_gpr(9, ctx.gpr[17] + 0u);
    ctx.set_gpr(10, ctx.gpr[29] + static_cast<std::uint32_t>(40));
    ctx.set_gpr(31, 0x08854484u);
    ctx.set_gpr(11, ctx.gpr[29] + static_cast<std::uint32_t>(47));
    goto L_08855768;
L_08854484:
    ctx.set_gpr(3, rt.memory().aot_load8(ctx.gpr[29] + static_cast<std::uint32_t>(47)));
    { const bool branch_taken = ctx.gpr[3] == 0u;
    ctx.set_gpr(4, ctx.gpr[2] & 255u);
      if (branch_taken) {
          goto L_0885449C;
      }
      goto L_08854490;
    }
L_08854490:
    ctx.fpr[0] = std::bit_cast<float>(rt.memory().aot_load32(ctx.gpr[21] + static_cast<std::uint32_t>(32032)));
    rt.memory().aot_store32(ctx.gpr[21] + static_cast<std::uint32_t>(32036), std::bit_cast<std::uint32_t>(ctx.fpr[0]));
    rt.memory().aot_store8(ctx.gpr[29] + static_cast<std::uint32_t>(47), static_cast<std::uint8_t>(0u));
    goto L_0885449C;
L_0885449C:
    if (ctx.gpr[4] != 0u) {
    ctx.set_gpr(4, ctx.gpr[21] + 0u);
        goto L_08854468;
    }
    goto L_088544A4;
L_088544A4:
    ctx.set_gpr(31, rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(28)));
    goto L_088544A8;
L_088544A8:
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
L_088544CC:
    ctx.set_gpr(29, ctx.gpr[29] + static_cast<std::uint32_t>(-48));
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(28), ctx.gpr[31]);
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(24), ctx.gpr[19]);
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(20), ctx.gpr[18]);
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(16), ctx.gpr[17]);
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(12), ctx.gpr[16]);
    ctx.set_gpr(19, ctx.gpr[4] + 0u);
    ctx.set_gpr(31, 0x088544F0u);
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(36), 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0017_entry, 17u, 182u, 0x08848C18u>(ctx, &aot_mem) && ctx.pc == 0x088544F0u) goto L_088544F0;
    return;
L_088544F0:
    ctx.set_gpr(31, 0x088544F8u);
    ctx.set_gpr(4, ctx.gpr[2] + 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0023_entry, 23u, 485u, 0x08861D50u>(ctx, &aot_mem) && ctx.pc == 0x088544F8u) goto L_088544F8;
    return;
L_088544F8:
    ctx.set_gpr(3, 0u + static_cast<std::uint32_t>(7));
    { const bool branch_taken = ctx.gpr[2] != ctx.gpr[3];
    // nop
      if (branch_taken) {
          goto L_08854510;
      }
      goto L_08854504;
    }
L_08854504:
    ctx.set_gpr(4, ctx.gpr[19] + 0u);
    ctx.set_gpr(31, 0x08854510u);
    ctx.set_gpr(5, 0u + static_cast<std::uint32_t>(1));
    goto L_08854944;
L_08854510:
    ctx.set_gpr(31, 0x08854518u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0017_entry, 17u, 179u, 0x08848BF4u>(ctx, &aot_mem) && ctx.pc == 0x08854518u) goto L_08854518;
    return;
L_08854518:
    ctx.set_gpr(4, ctx.gpr[2] + 0u);
    ctx.set_gpr(31, 0x08854524u);
    ctx.set_gpr(5, 0u + static_cast<std::uint32_t>(1));
    if (rt.invoke_chained_direct<&recomp_unit_0017_entry, 17u, 914u, 0x0884B680u>(ctx, &aot_mem) && ctx.pc == 0x08854524u) goto L_08854524;
    return;
L_08854524:
    if (ctx.gpr[2] == 0u) {
    ctx.set_gpr(3, rt.memory().aot_load8(ctx.gpr[19] + static_cast<std::uint32_t>(32120)));
        goto L_08854574;
    }
    goto L_0885452C;
L_0885452C:
    ctx.set_gpr(31, 0x08854534u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0017_entry, 17u, 182u, 0x08848C18u>(ctx, &aot_mem) && ctx.pc == 0x08854534u) goto L_08854534;
    return;
L_08854534:
    ctx.set_gpr(31, 0x0885453Cu);
    ctx.set_gpr(4, ctx.gpr[2] + 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0023_entry, 23u, 485u, 0x08861D50u>(ctx, &aot_mem) && ctx.pc == 0x0885453Cu) goto L_0885453C;
    return;
L_0885453C:
    ctx.set_gpr(3, 0u + static_cast<std::uint32_t>(7));
    { const bool branch_taken = ctx.gpr[2] == ctx.gpr[3];
    // nop
      if (branch_taken) {
          goto L_08854570;
      }
      goto L_08854548;
    }
L_08854548:
    ctx.set_gpr(2, rt.memory().aot_load8(ctx.gpr[19] + static_cast<std::uint32_t>(32120)));
    if (ctx.gpr[2] == 0u) {
    ctx.set_gpr(4, ctx.gpr[19] + 0u);
        goto L_08854568;
    }
    goto L_08854554;
L_08854554:
    ctx.set_gpr(4, ctx.gpr[19] + 0u);
    ctx.set_gpr(31, 0x08854560u);
    ctx.set_gpr(5, 0u + 0u);
    goto L_08854944;
L_08854560:
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_08854570;
      }
      goto L_08854568;
    }
L_08854568:
    ctx.set_gpr(31, 0x08854570u);
    ctx.set_gpr(5, 0u + static_cast<std::uint32_t>(1));
    goto L_08854944;
L_08854570:
    ctx.set_gpr(3, rt.memory().aot_load8(ctx.gpr[19] + static_cast<std::uint32_t>(32120)));
    goto L_08854574;
L_08854574:
    if (ctx.gpr[3] == 0u) {
    ctx.set_gpr(31, rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(28)));
        goto L_0885489C;
    }
    goto L_0885457C;
L_0885457C:
    ctx.set_gpr(31, 0x08854584u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0017_entry, 17u, 182u, 0x08848C18u>(ctx, &aot_mem) && ctx.pc == 0x08854584u) goto L_08854584;
    return;
L_08854584:
    ctx.set_gpr(31, 0x0885458Cu);
    ctx.set_gpr(4, ctx.gpr[2] + 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0023_entry, 23u, 485u, 0x08861D50u>(ctx, &aot_mem) && ctx.pc == 0x0885458Cu) goto L_0885458C;
    return;
L_0885458C:
    ctx.set_gpr(3, static_cast<std::int32_t>(ctx.gpr[2]) < 6 ? 1u : 0u);
    { const bool branch_taken = ctx.gpr[3] != 0u;
    // nop
      if (branch_taken) {
          goto L_08854898;
      }
      goto L_08854598;
    }
L_08854598:
    ctx.set_gpr(4, rt.memory().aot_load32(ctx.gpr[19] + static_cast<std::uint32_t>(32164)));
    ctx.fpr[12] = std::bit_cast<float>(rt.memory().aot_load32(ctx.gpr[19] + static_cast<std::uint32_t>(32032)));
    ctx.set_gpr(5, ctx.gpr[29] + static_cast<std::uint32_t>(44));
    ctx.set_gpr(6, ctx.gpr[29] + static_cast<std::uint32_t>(40));
    ctx.set_gpr(31, 0x088545B0u);
    ctx.set_gpr(7, ctx.gpr[29] + static_cast<std::uint32_t>(36));
    if (rt.invoke_chained_direct<&recomp_unit_0164_entry, 164u, 135u, 0x08A949D4u>(ctx, &aot_mem) && ctx.pc == 0x088545B0u) goto L_088545B0;
    return;
L_088545B0:
    ctx.fpr[2] = std::bit_cast<float>(rt.memory().aot_load32(ctx.gpr[19] + static_cast<std::uint32_t>(32032)));
    ctx.set_gpr(2, 17530u << 16u);
    ctx.fpr[0] = std::bit_cast<float>(ctx.gpr[2]);
    ctx.set_fpr_bits(1, ctx.fpu_float_to_word(ctx.fpr[2], 1u));
    ctx.set_gpr(2, 34952u << 16u);
    ctx.set_gpr(3, 0u + static_cast<std::uint32_t>(60));
    ctx.set_gpr(2, ctx.gpr[2] | 34953u);
    ctx.set_gpr(4, std::bit_cast<std::uint32_t>(ctx.fpr[1]));
    { const std::int32_t dividend = static_cast<std::int32_t>(ctx.gpr[4]); const std::int32_t divisor = static_cast<std::int32_t>(ctx.gpr[3]); if (divisor == 0) { ctx.lo = dividend >= 0 ? 0xFFFFFFFFu : 1u; ctx.hi = static_cast<std::uint32_t>(dividend); } else if (dividend == static_cast<std::int32_t>(0x80000000u) && divisor == -1) { ctx.lo = 0x80000000u; ctx.hi = 0u; } else { ctx.lo = static_cast<std::uint32_t>(dividend / divisor); ctx.hi = static_cast<std::uint32_t>(dividend % divisor); } }
    ctx.fpr[1] = static_cast<float>(static_cast<std::int32_t>(ctx.fpr_bits(1)));
    ctx.fpr[1] = ctx.fpr[2] - ctx.fpr[1];
    { const float fs = ctx.fpr[0]; const float ft = ctx.fpr[1]; if ((std::isinf(fs) && ft == 0.0f) || (std::isinf(ft) && fs == 0.0f)) ctx.set_fpr_bits(0, 0x7FC00000u); else ctx.fpr[0] = fs * ft; }
    ctx.set_fpr_bits(0, ctx.fpu_float_to_word(ctx.fpr[0], 1u));
    ctx.set_gpr(17, std::bit_cast<std::uint32_t>(ctx.fpr[0]));
    ctx.set_gpr(18, ctx.hi);
    ctx.set_gpr(4, ctx.gpr[4] - ctx.gpr[18]);
    { const std::int64_t product = static_cast<std::int64_t>(static_cast<std::int32_t>(ctx.gpr[2])) * static_cast<std::int64_t>(static_cast<std::int32_t>(ctx.gpr[4])); ctx.lo = static_cast<std::uint32_t>(product); ctx.hi = static_cast<std::uint32_t>(static_cast<std::uint64_t>(product) >> 32u); }
    ctx.set_gpr(3, ctx.gpr[4] >> 31u);
    ctx.set_gpr(2, ctx.hi);
    ctx.set_gpr(2, ctx.gpr[2] + ctx.gpr[4]);
    ctx.set_gpr(2, static_cast<std::uint32_t>(static_cast<std::int32_t>(ctx.gpr[2]) >> 5u));
    ctx.set_gpr(31, 0x0885460Cu);
    ctx.set_gpr(16, ctx.gpr[2] + ctx.gpr[3]);
    if (rt.invoke_chained_direct<&recomp_unit_0017_entry, 17u, 191u, 0x08848C84u>(ctx, &aot_mem) && ctx.pc == 0x0885460Cu) goto L_0885460C;
    return;
L_0885460C:
    ctx.set_gpr(31, 0x08854614u);
    ctx.set_gpr(4, ctx.gpr[2] + 0u);
    goto L_0885493C;
L_08854614:
    if (ctx.gpr[2] == 0u) {
    ctx.set_gpr(2, 16256u << 16u);
        goto L_08854644;
    }
    goto L_0885461C;
L_0885461C:
    ctx.set_gpr(2, 16025u << 16u);
    ctx.set_gpr(2, ctx.gpr[2] | 39322u);
    ctx.fpr[12] = std::bit_cast<float>(ctx.gpr[2]);
    ctx.set_gpr(2, 16256u << 16u);
    ctx.fpr[15] = std::bit_cast<float>(ctx.gpr[2]);
    ctx.set_fpr_bits(13, ctx.fpr_bits(12));
    ctx.set_gpr(31, 0x0885463Cu);
    ctx.set_fpr_bits(14, ctx.fpr_bits(12));
    if (rt.invoke_chained_direct<&recomp_unit_0019_entry, 19u, 568u, 0x08852084u>(ctx, &aot_mem) && ctx.pc == 0x0885463Cu) goto L_0885463C;
    return;
L_0885463C:
    { const bool branch_taken = 0u == 0u;
    ctx.set_gpr(2, 16256u << 16u);
      if (branch_taken) {
          goto L_0885465C;
      }
      goto L_08854644;
    }
L_08854644:
    ctx.fpr[12] = std::bit_cast<float>(ctx.gpr[2]);
    ctx.set_fpr_bits(13, ctx.fpr_bits(12));
    ctx.set_fpr_bits(14, ctx.fpr_bits(12));
    ctx.set_gpr(31, 0x08854658u);
    ctx.set_fpr_bits(15, ctx.fpr_bits(12));
    if (rt.invoke_chained_direct<&recomp_unit_0019_entry, 19u, 568u, 0x08852084u>(ctx, &aot_mem) && ctx.pc == 0x08854658u) goto L_08854658;
    return;
L_08854658:
    ctx.set_gpr(2, 16256u << 16u);
    goto L_0885465C;
L_0885465C:
    ctx.fpr[12] = std::bit_cast<float>(ctx.gpr[2]);
    ctx.set_gpr(31, 0x08854668u);
    ctx.set_fpr_bits(13, ctx.fpr_bits(12));
    if (rt.invoke_chained_direct<&recomp_unit_0019_entry, 19u, 590u, 0x08852268u>(ctx, &aot_mem) && ctx.pc == 0x08854668u) goto L_08854668;
    return;
L_08854668:
    ctx.fpr[1] = std::bit_cast<float>(rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(40)));
    ctx.set_gpr(2, 16128u << 16u);
    ctx.fpr[2] = std::bit_cast<float>(ctx.gpr[2]);
    ctx.fpr[1] = static_cast<float>(static_cast<std::int32_t>(ctx.fpr_bits(1)));
    ctx.set_gpr(2, 16256u << 16u);
    { const float fs = ctx.fpr[2]; const float ft = ctx.fpr[1]; if ((std::isinf(fs) && ft == 0.0f) || (std::isinf(ft) && fs == 0.0f)) ctx.set_fpr_bits(1, 0x7FC00000u); else ctx.fpr[1] = fs * ft; }
    ctx.fpr[0] = std::bit_cast<float>(ctx.gpr[2]);
    ctx.set_gpr(31, 0x0885468Cu);
    ctx.fpr[12] = ctx.fpr[0] + ctx.fpr[1];
    if (rt.invoke_chained_direct<&recomp_unit_0006_entry, 6u, 675u, 0x0881EBD0u>(ctx, &aot_mem) && ctx.pc == 0x0885468Cu) goto L_0885468C;
    return;
L_0885468C:
    ctx.set_gpr(8, ctx.gpr[2] + 0u);
    ctx.set_gpr(2, rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(44)));
    ctx.set_gpr(6, 2226u << 16u);
    ctx.set_gpr(9, ctx.gpr[3] + 0u);
    ctx.set_gpr(4, 0u + static_cast<std::uint32_t>(398));
    ctx.set_gpr(5, 0u + static_cast<std::uint32_t>(212));
    ctx.set_gpr(7, ctx.gpr[2] + static_cast<std::uint32_t>(1));
    ctx.set_gpr(31, 0x088546B0u);
    ctx.set_gpr(6, ctx.gpr[6] + static_cast<std::uint32_t>(17832));
    if (rt.invoke_chained_direct<&recomp_unit_0019_entry, 19u, 527u, 0x08851CD8u>(ctx, &aot_mem) && ctx.pc == 0x088546B0u) goto L_088546B0;
    return;
L_088546B0:
    ctx.set_gpr(6, 2226u << 16u);
    ctx.set_gpr(7, ctx.gpr[16] + 0u);
    ctx.set_gpr(8, ctx.gpr[18] + 0u);
    ctx.set_gpr(9, ctx.gpr[17] + 0u);
    ctx.set_gpr(4, 0u + static_cast<std::uint32_t>(398));
    ctx.set_gpr(5, 0u + static_cast<std::uint32_t>(228));
    ctx.set_gpr(31, 0x088546D0u);
    ctx.set_gpr(6, ctx.gpr[6] + static_cast<std::uint32_t>(17848));
    if (rt.invoke_chained_direct<&recomp_unit_0019_entry, 19u, 527u, 0x08851CD8u>(ctx, &aot_mem) && ctx.pc == 0x088546D0u) goto L_088546D0;
    return;
L_088546D0:
    ctx.set_gpr(31, 0x088546D8u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0017_entry, 17u, 182u, 0x08848C18u>(ctx, &aot_mem) && ctx.pc == 0x088546D8u) goto L_088546D8;
    return;
L_088546D8:
    ctx.set_gpr(31, 0x088546E0u);
    ctx.set_gpr(4, ctx.gpr[2] + 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0023_entry, 23u, 485u, 0x08861D50u>(ctx, &aot_mem) && ctx.pc == 0x088546E0u) goto L_088546E0;
    return;
L_088546E0:
    ctx.set_gpr(3, 0u + static_cast<std::uint32_t>(6));
    if (ctx.gpr[2] != ctx.gpr[3]) {
    ctx.set_gpr(2, 16256u << 16u);
        goto L_08854884;
    }
    goto L_088546EC;
L_088546EC:
    ctx.set_gpr(5, rt.memory().aot_load32(ctx.gpr[19] + static_cast<std::uint32_t>(32108)));
    ctx.set_gpr(2, 0u + static_cast<std::uint32_t>(-1));
    if (ctx.gpr[5] != ctx.gpr[2]) {
    ctx.set_gpr(4, rt.memory().aot_load32(ctx.gpr[19] + static_cast<std::uint32_t>(32164)));
        goto L_08854718;
    }
    goto L_088546FC;
L_088546FC:
    ctx.set_gpr(6, 2226u << 16u);
    ctx.set_gpr(4, 0u + static_cast<std::uint32_t>(259));
    ctx.set_gpr(5, 0u + static_cast<std::uint32_t>(19));
    ctx.set_gpr(31, 0x08854710u);
    ctx.set_gpr(6, ctx.gpr[6] + static_cast<std::uint32_t>(17868));
    if (rt.invoke_chained_direct<&recomp_unit_0019_entry, 19u, 527u, 0x08851CD8u>(ctx, &aot_mem) && ctx.pc == 0x08854710u) goto L_08854710;
    return;
L_08854710:
    { const bool branch_taken = 0u == 0u;
    ctx.set_gpr(3, rt.memory().aot_load32(ctx.gpr[19] + static_cast<std::uint32_t>(32104)));
      if (branch_taken) {
          goto L_0885473C;
      }
      goto L_08854718;
    }
L_08854718:
    ctx.set_gpr(31, 0x08854720u);
    // nop
    goto L_08854900;
L_08854720:
    ctx.set_gpr(7, rt.memory().aot_load32(ctx.gpr[2] + static_cast<std::uint32_t>(4)));
    ctx.set_gpr(6, 2226u << 16u);
    ctx.set_gpr(4, 0u + static_cast<std::uint32_t>(259));
    ctx.set_gpr(5, 0u + static_cast<std::uint32_t>(19));
    ctx.set_gpr(31, 0x08854738u);
    ctx.set_gpr(6, ctx.gpr[6] + static_cast<std::uint32_t>(17888));
    if (rt.invoke_chained_direct<&recomp_unit_0019_entry, 19u, 527u, 0x08851CD8u>(ctx, &aot_mem) && ctx.pc == 0x08854738u) goto L_08854738;
    return;
L_08854738:
    ctx.set_gpr(3, rt.memory().aot_load32(ctx.gpr[19] + static_cast<std::uint32_t>(32104)));
    goto L_0885473C;
L_0885473C:
    ctx.set_gpr(2, 0u + static_cast<std::uint32_t>(-1));
    { const bool branch_taken = ctx.gpr[3] == ctx.gpr[2];
    // nop
      if (branch_taken) {
          goto L_08854764;
      }
      goto L_08854748;
    }
L_08854748:
    ctx.set_gpr(31, 0x08854750u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0017_entry, 17u, 195u, 0x08848CB4u>(ctx, &aot_mem) && ctx.pc == 0x08854750u) goto L_08854750;
    return;
L_08854750:
    ctx.set_gpr(31, 0x08854758u);
    ctx.set_gpr(4, ctx.gpr[2] + 0u);
    goto L_088548F8;
L_08854758:
    ctx.set_gpr(2, ctx.gpr[2] & 255u);
    if (ctx.gpr[2] != 0u) {
    ctx.set_gpr(4, rt.memory().aot_load32(ctx.gpr[19] + static_cast<std::uint32_t>(32164)));
        goto L_08854780;
    }
    goto L_08854764;
L_08854764:
    ctx.set_gpr(6, 2226u << 16u);
    ctx.set_gpr(4, 0u + static_cast<std::uint32_t>(259));
    ctx.set_gpr(5, 0u + static_cast<std::uint32_t>(35));
    ctx.set_gpr(31, 0x08854778u);
    ctx.set_gpr(6, ctx.gpr[6] + static_cast<std::uint32_t>(17904));
    if (rt.invoke_chained_direct<&recomp_unit_0019_entry, 19u, 527u, 0x08851CD8u>(ctx, &aot_mem) && ctx.pc == 0x08854778u) goto L_08854778;
    return;
L_08854778:
    { const bool branch_taken = 0u == 0u;
    ctx.set_gpr(3, rt.memory().aot_load32(ctx.gpr[19] + static_cast<std::uint32_t>(32112)));
      if (branch_taken) {
          goto L_088547A4;
      }
      goto L_08854780;
    }
L_08854780:
    ctx.set_gpr(31, 0x08854788u);
    ctx.set_gpr(5, rt.memory().aot_load32(ctx.gpr[19] + static_cast<std::uint32_t>(32104)));
    goto L_088548B4;
L_08854788:
    ctx.set_gpr(7, rt.memory().aot_load32(ctx.gpr[2] + static_cast<std::uint32_t>(4)));
    ctx.set_gpr(6, 2226u << 16u);
    ctx.set_gpr(4, 0u + static_cast<std::uint32_t>(259));
    ctx.set_gpr(5, 0u + static_cast<std::uint32_t>(35));
    ctx.set_gpr(31, 0x088547A0u);
    ctx.set_gpr(6, ctx.gpr[6] + static_cast<std::uint32_t>(17924));
    if (rt.invoke_chained_direct<&recomp_unit_0019_entry, 19u, 527u, 0x08851CD8u>(ctx, &aot_mem) && ctx.pc == 0x088547A0u) goto L_088547A0;
    return;
L_088547A0:
    ctx.set_gpr(3, rt.memory().aot_load32(ctx.gpr[19] + static_cast<std::uint32_t>(32112)));
    goto L_088547A4;
L_088547A4:
    ctx.set_gpr(2, 0u + static_cast<std::uint32_t>(-1));
    { const bool branch_taken = ctx.gpr[3] == ctx.gpr[2];
    // nop
      if (branch_taken) {
          goto L_088547CC;
      }
      goto L_088547B0;
    }
L_088547B0:
    ctx.set_gpr(31, 0x088547B8u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0017_entry, 17u, 195u, 0x08848CB4u>(ctx, &aot_mem) && ctx.pc == 0x088547B8u) goto L_088547B8;
    return;
L_088547B8:
    ctx.set_gpr(31, 0x088547C0u);
    ctx.set_gpr(4, ctx.gpr[2] + 0u);
    goto L_088548F8;
L_088547C0:
    ctx.set_gpr(2, ctx.gpr[2] & 255u);
    { const bool branch_taken = ctx.gpr[2] != 0u;
    // nop
      if (branch_taken) {
          goto L_088547E8;
      }
      goto L_088547CC;
    }
L_088547CC:
    ctx.set_gpr(6, 2226u << 16u);
    ctx.set_gpr(4, 0u + static_cast<std::uint32_t>(259));
    ctx.set_gpr(5, 0u + static_cast<std::uint32_t>(51));
    ctx.set_gpr(31, 0x088547E0u);
    ctx.set_gpr(6, ctx.gpr[6] + static_cast<std::uint32_t>(17940));
    if (rt.invoke_chained_direct<&recomp_unit_0019_entry, 19u, 527u, 0x08851CD8u>(ctx, &aot_mem) && ctx.pc == 0x088547E0u) goto L_088547E0;
    return;
L_088547E0:
    { const bool branch_taken = 0u == 0u;
    ctx.set_gpr(3, rt.memory().aot_load32(ctx.gpr[19] + static_cast<std::uint32_t>(32116)));
      if (branch_taken) {
          goto L_08854814;
      }
      goto L_088547E8;
    }
L_088547E8:
    ctx.set_gpr(31, 0x088547F0u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0017_entry, 17u, 182u, 0x08848C18u>(ctx, &aot_mem) && ctx.pc == 0x088547F0u) goto L_088547F0;
    return;
L_088547F0:
    ctx.set_gpr(31, 0x088547F8u);
    ctx.set_gpr(4, rt.memory().aot_load32(ctx.gpr[19] + static_cast<std::uint32_t>(32112)));
    if (rt.invoke_chained_direct<&recomp_unit_0023_entry, 23u, 667u, 0x088629CCu>(ctx, &aot_mem) && ctx.pc == 0x088547F8u) goto L_088547F8;
    return;
L_088547F8:
    ctx.set_gpr(6, 2226u << 16u);
    ctx.set_gpr(7, ctx.gpr[2] + 0u);
    ctx.set_gpr(4, 0u + static_cast<std::uint32_t>(259));
    ctx.set_gpr(5, 0u + static_cast<std::uint32_t>(51));
    ctx.set_gpr(31, 0x08854810u);
    ctx.set_gpr(6, ctx.gpr[6] + static_cast<std::uint32_t>(17960));
    if (rt.invoke_chained_direct<&recomp_unit_0019_entry, 19u, 527u, 0x08851CD8u>(ctx, &aot_mem) && ctx.pc == 0x08854810u) goto L_08854810;
    return;
L_08854810:
    ctx.set_gpr(3, rt.memory().aot_load32(ctx.gpr[19] + static_cast<std::uint32_t>(32116)));
    goto L_08854814;
L_08854814:
    ctx.set_gpr(2, 0u + static_cast<std::uint32_t>(-1));
    { const bool branch_taken = ctx.gpr[3] == ctx.gpr[2];
    // nop
      if (branch_taken) {
          goto L_0885483C;
      }
      goto L_08854820;
    }
L_08854820:
    ctx.set_gpr(31, 0x08854828u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0017_entry, 17u, 195u, 0x08848CB4u>(ctx, &aot_mem) && ctx.pc == 0x08854828u) goto L_08854828;
    return;
L_08854828:
    ctx.set_gpr(31, 0x08854830u);
    ctx.set_gpr(4, ctx.gpr[2] + 0u);
    goto L_088548F8;
L_08854830:
    ctx.set_gpr(2, ctx.gpr[2] & 255u);
    { const bool branch_taken = ctx.gpr[2] != 0u;
    // nop
      if (branch_taken) {
          goto L_08854858;
      }
      goto L_0885483C;
    }
L_0885483C:
    ctx.set_gpr(6, 2226u << 16u);
    ctx.set_gpr(4, 0u + static_cast<std::uint32_t>(259));
    ctx.set_gpr(5, 0u + static_cast<std::uint32_t>(67));
    ctx.set_gpr(31, 0x08854850u);
    ctx.set_gpr(6, ctx.gpr[6] + static_cast<std::uint32_t>(17976));
    if (rt.invoke_chained_direct<&recomp_unit_0019_entry, 19u, 527u, 0x08851CD8u>(ctx, &aot_mem) && ctx.pc == 0x08854850u) goto L_08854850;
    return;
L_08854850:
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_08854880;
      }
      goto L_08854858;
    }
L_08854858:
    ctx.set_gpr(31, 0x08854860u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0017_entry, 17u, 182u, 0x08848C18u>(ctx, &aot_mem) && ctx.pc == 0x08854860u) goto L_08854860;
    return;
L_08854860:
    ctx.set_gpr(31, 0x08854868u);
    ctx.set_gpr(4, rt.memory().aot_load32(ctx.gpr[19] + static_cast<std::uint32_t>(32116)));
    if (rt.invoke_chained_direct<&recomp_unit_0023_entry, 23u, 670u, 0x08862A0Cu>(ctx, &aot_mem) && ctx.pc == 0x08854868u) goto L_08854868;
    return;
L_08854868:
    ctx.set_gpr(6, 2226u << 16u);
    ctx.set_gpr(7, ctx.gpr[2] + 0u);
    ctx.set_gpr(4, 0u + static_cast<std::uint32_t>(259));
    ctx.set_gpr(5, 0u + static_cast<std::uint32_t>(67));
    ctx.set_gpr(31, 0x08854880u);
    ctx.set_gpr(6, ctx.gpr[6] + static_cast<std::uint32_t>(17996));
    if (rt.invoke_chained_direct<&recomp_unit_0019_entry, 19u, 527u, 0x08851CD8u>(ctx, &aot_mem) && ctx.pc == 0x08854880u) goto L_08854880;
    return;
L_08854880:
    ctx.set_gpr(2, 16256u << 16u);
    goto L_08854884;
L_08854884:
    ctx.fpr[12] = std::bit_cast<float>(ctx.gpr[2]);
    ctx.set_fpr_bits(13, ctx.fpr_bits(12));
    ctx.set_fpr_bits(14, ctx.fpr_bits(12));
    ctx.set_gpr(31, 0x08854898u);
    ctx.set_fpr_bits(15, ctx.fpr_bits(12));
    if (rt.invoke_chained_direct<&recomp_unit_0019_entry, 19u, 568u, 0x08852084u>(ctx, &aot_mem) && ctx.pc == 0x08854898u) goto L_08854898;
    return;
L_08854898:
    ctx.set_gpr(31, rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(28)));
    goto L_0885489C;
L_0885489C:
    ctx.set_gpr(19, rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(24)));
    ctx.set_gpr(18, rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(20)));
    ctx.set_gpr(17, rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(16)));
    ctx.set_gpr(16, rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(12)));
    jump_target = ctx.gpr[31];
    ctx.set_gpr(29, ctx.gpr[29] + static_cast<std::uint32_t>(48));
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_088548B4:
    ctx.set_gpr(2, ctx.gpr[5] << 2u);
    ctx.set_gpr(3, ctx.gpr[2] + ctx.gpr[4]);
    ctx.set_gpr(2, 1u << 16u);
    ctx.set_gpr(2, ctx.gpr[3] + ctx.gpr[2]);
    ctx.set_gpr(3, rt.memory().aot_load32(ctx.gpr[2] + static_cast<std::uint32_t>(3436)));
    ctx.set_gpr(2, 0u + static_cast<std::uint32_t>(-1));
    if (ctx.gpr[3] != ctx.gpr[2]) {
    ctx.set_gpr(2, ctx.gpr[3] << 2u);
        goto L_088548DC;
    }
    goto L_088548D4;
L_088548D4:
    { const bool branch_taken = 0u == 0u;
    ctx.set_gpr(2, 0u + 0u);
      if (branch_taken) {
          goto L_088548F0;
      }
      goto L_088548DC;
    }
L_088548DC:
    ctx.set_gpr(2, ctx.gpr[2] + ctx.gpr[3]);
    ctx.set_gpr(3, ctx.gpr[2] << 2u);
    ctx.set_gpr(2, 2230u << 16u);
    ctx.set_gpr(2, ctx.gpr[2] + static_cast<std::uint32_t>(-14852));
    ctx.set_gpr(2, ctx.gpr[2] + ctx.gpr[3]);
    goto L_088548F0;
L_088548F0:
    jump_target = ctx.gpr[31];
    // nop
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_088548F8:
    jump_target = ctx.gpr[31];
    ctx.set_gpr(2, rt.memory().aot_load8(ctx.gpr[4] + static_cast<std::uint32_t>(1036)));
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_08854900:
    ctx.set_gpr(2, ctx.gpr[5] << 2u);
    ctx.set_gpr(3, ctx.gpr[2] + ctx.gpr[4]);
    ctx.set_gpr(2, 1u << 16u);
    ctx.set_gpr(2, ctx.gpr[3] + ctx.gpr[2]);
    ctx.set_gpr(3, rt.memory().aot_load32(ctx.gpr[2] + static_cast<std::uint32_t>(3356)));
    ctx.set_gpr(2, 0u + static_cast<std::uint32_t>(-1));
    if (ctx.gpr[3] != ctx.gpr[2]) {
    ctx.set_gpr(2, 2230u << 16u);
        goto L_08854928;
    }
    goto L_08854920;
L_08854920:
    { const bool branch_taken = 0u == 0u;
    ctx.set_gpr(2, 0u + 0u);
      if (branch_taken) {
          goto L_08854934;
      }
      goto L_08854928;
    }
L_08854928:
    ctx.set_gpr(3, ctx.gpr[3] << 4u);
    ctx.set_gpr(2, ctx.gpr[2] + static_cast<std::uint32_t>(-6584));
    ctx.set_gpr(2, ctx.gpr[2] + ctx.gpr[3]);
    goto L_08854934;
L_08854934:
    jump_target = ctx.gpr[31];
    // nop
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_0885493C:
    jump_target = ctx.gpr[31];
    ctx.set_gpr(2, rt.memory().aot_load8(ctx.gpr[4] + static_cast<std::uint32_t>(780)));
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_08854944:
    ctx.set_gpr(29, ctx.gpr[29] + static_cast<std::uint32_t>(-16));
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(12), ctx.gpr[31]);
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(8), ctx.gpr[17]);
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(4), ctx.gpr[16]);
    ctx.set_gpr(16, ctx.gpr[4] + 0u);
    ctx.set_gpr(31, 0x08854960u);
    ctx.set_gpr(17, ctx.gpr[5] + 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0017_entry, 17u, 182u, 0x08848C18u>(ctx, &aot_mem) && ctx.pc == 0x08854960u) goto L_08854960;
    return;
L_08854960:
    ctx.set_gpr(31, 0x08854968u);
    ctx.set_gpr(4, ctx.gpr[2] + 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0023_entry, 23u, 485u, 0x08861D50u>(ctx, &aot_mem) && ctx.pc == 0x08854968u) goto L_08854968;
    return;
L_08854968:
    ctx.set_gpr(3, static_cast<std::int32_t>(ctx.gpr[2]) < 6 ? 1u : 0u);
    if (ctx.gpr[3] != 0u) {
    rt.memory().aot_store8(ctx.gpr[16] + static_cast<std::uint32_t>(32120), static_cast<std::uint8_t>(0u));
        goto L_08854A20;
    }
    goto L_08854974;
L_08854974:
    if (ctx.gpr[17] == 0u) {
    ctx.set_gpr(4, rt.memory().aot_load8(ctx.gpr[16] + static_cast<std::uint32_t>(32120)));
        goto L_088549E0;
    }
    goto L_0885497C;
L_0885497C:
    ctx.set_gpr(3, rt.memory().aot_load8(ctx.gpr[16] + static_cast<std::uint32_t>(32120)));
    if (ctx.gpr[3] != 0u) {
    ctx.set_gpr(31, rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(12)));
        goto L_08854A24;
    }
    goto L_08854988;
L_08854988:
    ctx.set_gpr(31, 0x08854990u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0017_entry, 17u, 182u, 0x08848C18u>(ctx, &aot_mem) && ctx.pc == 0x08854990u) goto L_08854990;
    return;
L_08854990:
    ctx.set_gpr(31, 0x08854998u);
    ctx.set_gpr(4, ctx.gpr[2] + 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0023_entry, 23u, 485u, 0x08861D50u>(ctx, &aot_mem) && ctx.pc == 0x08854998u) goto L_08854998;
    return;
L_08854998:
    ctx.set_gpr(3, 0u + static_cast<std::uint32_t>(6));
    { const bool branch_taken = ctx.gpr[2] != ctx.gpr[3];
    // nop
      if (branch_taken) {
          goto L_088549BC;
      }
      goto L_088549A4;
    }
L_088549A4:
    ctx.set_gpr(31, 0x088549ACu);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0017_entry, 17u, 191u, 0x08848C84u>(ctx, &aot_mem) && ctx.pc == 0x088549ACu) goto L_088549AC;
    return;
L_088549AC:
    ctx.set_gpr(4, ctx.gpr[2] + 0u);
    ctx.set_gpr(5, 0u + 0u);
    ctx.set_gpr(31, 0x088549BCu);
    ctx.set_gpr(6, 0u + static_cast<std::uint32_t>(1));
    if (rt.invoke_chained_direct<&recomp_unit_0191_entry, 191u, 135u, 0x08B00A70u>(ctx, &aot_mem) && ctx.pc == 0x088549BCu) goto L_088549BC;
    return;
L_088549BC:
    ctx.set_gpr(31, 0x088549C4u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0017_entry, 17u, 191u, 0x08848C84u>(ctx, &aot_mem) && ctx.pc == 0x088549C4u) goto L_088549C4;
    return;
L_088549C4:
    ctx.set_gpr(5, 0u + static_cast<std::uint32_t>(1));
    ctx.set_gpr(4, ctx.gpr[2] + 0u);
    ctx.set_gpr(31, 0x088549D4u);
    ctx.set_gpr(6, ctx.gpr[5] + 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0191_entry, 191u, 135u, 0x08B00A70u>(ctx, &aot_mem) && ctx.pc == 0x088549D4u) goto L_088549D4;
    return;
L_088549D4:
    ctx.set_gpr(3, 0u + static_cast<std::uint32_t>(1));
    { const bool branch_taken = 0u == 0u;
    rt.memory().aot_store8(ctx.gpr[16] + static_cast<std::uint32_t>(32120), static_cast<std::uint8_t>(ctx.gpr[3]));
      if (branch_taken) {
          goto L_08854A20;
      }
      goto L_088549E0;
    }
L_088549E0:
    ctx.set_gpr(3, 0u + static_cast<std::uint32_t>(1));
    { const bool branch_taken = ctx.gpr[4] != ctx.gpr[3];
    // nop
      if (branch_taken) {
          goto L_08854A20;
      }
      goto L_088549EC;
    }
L_088549EC:
    ctx.set_gpr(31, 0x088549F4u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0017_entry, 17u, 191u, 0x08848C84u>(ctx, &aot_mem) && ctx.pc == 0x088549F4u) goto L_088549F4;
    return;
L_088549F4:
    ctx.set_gpr(4, ctx.gpr[2] + 0u);
    ctx.set_gpr(5, 0u + 0u);
    ctx.set_gpr(31, 0x08854A04u);
    ctx.set_gpr(6, 0u + 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0191_entry, 191u, 135u, 0x08B00A70u>(ctx, &aot_mem) && ctx.pc == 0x08854A04u) goto L_08854A04;
    return;
L_08854A04:
    ctx.set_gpr(31, 0x08854A0Cu);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0017_entry, 17u, 191u, 0x08848C84u>(ctx, &aot_mem) && ctx.pc == 0x08854A0Cu) goto L_08854A0C;
    return;
L_08854A0C:
    ctx.set_gpr(4, ctx.gpr[2] + 0u);
    ctx.set_gpr(5, 0u + static_cast<std::uint32_t>(1));
    ctx.set_gpr(31, 0x08854A1Cu);
    ctx.set_gpr(6, 0u + 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0191_entry, 191u, 135u, 0x08B00A70u>(ctx, &aot_mem) && ctx.pc == 0x08854A1Cu) goto L_08854A1C;
    return;
L_08854A1C:
    rt.memory().aot_store8(ctx.gpr[16] + static_cast<std::uint32_t>(32120), static_cast<std::uint8_t>(0u));
    goto L_08854A20;
L_08854A20:
    ctx.set_gpr(31, rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(12)));
    goto L_08854A24;
L_08854A24:
    ctx.set_gpr(17, rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(8)));
    ctx.set_gpr(16, rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(4)));
    jump_target = ctx.gpr[31];
    ctx.set_gpr(29, ctx.gpr[29] + static_cast<std::uint32_t>(16));
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_08854A34:
    ctx.set_gpr(29, ctx.gpr[29] + static_cast<std::uint32_t>(-32));
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(28), ctx.gpr[31]);
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(24), ctx.gpr[19]);
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(20), ctx.gpr[18]);
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(16), ctx.gpr[17]);
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(12), ctx.gpr[16]);
    ctx.set_gpr(2, 16845u << 16u);
    ctx.set_gpr(17, ctx.gpr[4] + 0u);
    ctx.set_gpr(16, ctx.gpr[6] + 0u);
    ctx.set_gpr(19, ctx.gpr[7] + 0u);
    ctx.set_gpr(31, 0x08854A64u);
    ctx.set_gpr(18, ctx.gpr[2] | 52581u);
    if (rt.invoke_chained_direct<&recomp_unit_0006_entry, 6u, 675u, 0x0881EBD0u>(ctx, &aot_mem) && ctx.pc == 0x08854A64u) goto L_08854A64;
    return;
L_08854A64:
    ctx.set_gpr(5, ctx.gpr[18] + 0u);
    ctx.set_gpr(4, 0u + 0u);
    ctx.set_gpr(6, ctx.gpr[2] + 0u);
    ctx.set_gpr(31, 0x08854A78u);
    ctx.set_gpr(7, ctx.gpr[3] + 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0006_entry, 6u, 778u, 0x0881F44Cu>(ctx, &aot_mem) && ctx.pc == 0x08854A78u) goto L_08854A78;
    return;
L_08854A78:
    ctx.set_gpr(4, ctx.gpr[2] + 0u);
    ctx.set_gpr(31, 0x08854A84u);
    ctx.set_gpr(5, ctx.gpr[3] + 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0006_entry, 6u, 164u, 0x0881CD1Cu>(ctx, &aot_mem) && ctx.pc == 0x08854A84u) goto L_08854A84;
    return;
L_08854A84:
    ctx.set_gpr(3, ctx.gpr[19] - ctx.gpr[3]);
    ctx.set_gpr(4, ctx.gpr[16] < ctx.gpr[2] ? 1u : 0u);
    ctx.set_gpr(3, ctx.gpr[3] - ctx.gpr[4]);
    ctx.set_gpr(4, ctx.gpr[16] - ctx.gpr[2]);
    rt.memory().aot_store32(ctx.gpr[17] + static_cast<std::uint32_t>(32016), ctx.gpr[4]);
    rt.memory().aot_store32(ctx.gpr[17] + static_cast<std::uint32_t>(32020), ctx.gpr[3]);
    ctx.set_gpr(1, static_cast<std::int32_t>(0u) < static_cast<std::int32_t>(ctx.gpr[3]) ? 1u : 0u);
    { const bool branch_taken = ctx.gpr[1] != 0u;
    ctx.set_gpr(5, rt.memory().aot_load32(ctx.gpr[17] + static_cast<std::uint32_t>(32016)));
      if (branch_taken) {
          goto L_08854AE0;
      }
      goto L_08854AA8;
    }
L_08854AA8:
    ctx.set_gpr(1, static_cast<std::int32_t>(ctx.gpr[3]) < static_cast<std::int32_t>(0u) ? 1u : 0u);
    if (ctx.gpr[1] != 0u) {
    ctx.set_gpr(3, 0u - ctx.gpr[3]);
        goto L_08854AC4;
    }
    goto L_08854AB4;
L_08854AB4:
    ctx.set_gpr(1, ctx.gpr[5] < 0u ? 1u : 0u);
    if (ctx.gpr[1] == 0u) {
    ctx.set_gpr(31, rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(28)));
        goto L_08854AE4;
    }
    goto L_08854AC0;
L_08854AC0:
    ctx.set_gpr(3, 0u - ctx.gpr[3]);
    goto L_08854AC4;
L_08854AC4:
    ctx.set_gpr(4, 0u < ctx.gpr[5] ? 1u : 0u);
    ctx.set_gpr(3, ctx.gpr[3] - ctx.gpr[4]);
    ctx.set_gpr(4, 0u - ctx.gpr[5]);
    rt.memory().aot_store32(ctx.gpr[17] + static_cast<std::uint32_t>(32024), ctx.gpr[4]);
    rt.memory().aot_store32(ctx.gpr[17] + static_cast<std::uint32_t>(32028), ctx.gpr[3]);
    rt.memory().aot_store32(ctx.gpr[17] + static_cast<std::uint32_t>(32016), 0u);
    rt.memory().aot_store32(ctx.gpr[17] + static_cast<std::uint32_t>(32020), 0u);
    goto L_08854AE0;
L_08854AE0:
    ctx.set_gpr(31, rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(28)));
    goto L_08854AE4;
L_08854AE4:
    ctx.set_gpr(19, rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(24)));
    ctx.set_gpr(18, rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(20)));
    ctx.set_gpr(17, rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(16)));
    ctx.set_gpr(16, rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(12)));
    jump_target = ctx.gpr[31];
    ctx.set_gpr(29, ctx.gpr[29] + static_cast<std::uint32_t>(32));
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_08854AFC:
    ctx.set_gpr(29, ctx.gpr[29] + static_cast<std::uint32_t>(-512));
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
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(20), std::bit_cast<std::uint32_t>(ctx.fpr[23]));
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(16), std::bit_cast<std::uint32_t>(ctx.fpr[22]));
    ctx.set_gpr(2, 0u + static_cast<std::uint32_t>(1));
    rt.memory().aot_store8(ctx.gpr[29] + static_cast<std::uint32_t>(84), static_cast<std::uint8_t>(ctx.gpr[2]));
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(12), std::bit_cast<std::uint32_t>(ctx.fpr[21]));
    ctx.set_gpr(2, 16845u << 16u);
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(8), std::bit_cast<std::uint32_t>(ctx.fpr[20]));
    ctx.set_gpr(21, ctx.gpr[4] + 0u);
    ctx.set_fpr_bits(22, ctx.fpr_bits(12));
    ctx.set_gpr(20, ctx.gpr[6] + 0u);
    ctx.set_gpr(22, ctx.gpr[7] + 0u);
    ctx.set_gpr(18, ctx.gpr[2] | 52581u);
    ctx.set_gpr(31, 0x08854B60u);
    rt.memory().aot_store8(ctx.gpr[29] + static_cast<std::uint32_t>(511), static_cast<std::uint8_t>(0u));
    if (rt.invoke_chained_direct<&recomp_unit_0006_entry, 6u, 675u, 0x0881EBD0u>(ctx, &aot_mem) && ctx.pc == 0x08854B60u) goto L_08854B60;
    return;
L_08854B60:
    ctx.set_gpr(5, ctx.gpr[18] + 0u);
    ctx.set_gpr(4, 0u + 0u);
    ctx.set_gpr(6, ctx.gpr[2] + 0u);
    ctx.set_gpr(31, 0x08854B74u);
    ctx.set_gpr(7, ctx.gpr[3] + 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0006_entry, 6u, 778u, 0x0881F44Cu>(ctx, &aot_mem) && ctx.pc == 0x08854B74u) goto L_08854B74;
    return;
L_08854B74:
    ctx.set_gpr(4, ctx.gpr[2] + 0u);
    ctx.set_gpr(31, 0x08854B80u);
    ctx.set_gpr(5, ctx.gpr[3] + 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0006_entry, 6u, 164u, 0x0881CD1Cu>(ctx, &aot_mem) && ctx.pc == 0x08854B80u) goto L_08854B80;
    return;
L_08854B80:
    ctx.set_gpr(19, ctx.gpr[2] + 0u);
    ctx.set_gpr(18, ctx.gpr[3] + 0u);
    ctx.set_gpr(31, 0x08854B90u);
    ctx.set_gpr(4, ctx.gpr[29] + static_cast<std::uint32_t>(440));
    if (rt.invoke_chained_direct<&recomp_unit_0015_entry, 15u, 161u, 0x08840958u>(ctx, &aot_mem) && ctx.pc == 0x08854B90u) goto L_08854B90;
    return;
L_08854B90:
    ctx.set_gpr(31, 0x08854B98u);
    ctx.set_gpr(4, ctx.gpr[29] + static_cast<std::uint32_t>(368));
    goto L_08855674;
L_08854B98:
    ctx.set_gpr(31, 0x08854BA0u);
    ctx.set_gpr(4, ctx.gpr[29] + static_cast<std::uint32_t>(404));
    goto L_08855674;
L_08854BA0:
    ctx.set_gpr(31, 0x08854BA8u);
    ctx.set_gpr(4, ctx.gpr[21] + 0u);
    goto L_08854238;
L_08854BA8:
    ctx.set_gpr(4, ctx.gpr[21] + 0u);
    ctx.set_fpr_bits(12, ctx.fpr_bits(22));
    ctx.set_gpr(6, ctx.gpr[20] + 0u);
    ctx.set_gpr(31, 0x08854BBCu);
    ctx.set_gpr(7, ctx.gpr[22] + 0u);
    goto L_08854A34;
L_08854BBC:
    ctx.set_gpr(2, 59430u << 16u);
    ctx.set_gpr(23, ctx.gpr[2] | 54933u);
    ctx.set_gpr(2, 15889u << 16u);
    ctx.set_gpr(30, ctx.gpr[2] | 11787u);
    ctx.set_gpr(4, ctx.gpr[19] + 0u);
    ctx.set_gpr(31, 0x08854BD8u);
    ctx.set_gpr(5, ctx.gpr[18] + 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0006_entry, 6u, 116u, 0x0881C89Cu>(ctx, &aot_mem) && ctx.pc == 0x08854BD8u) goto L_08854BD8;
    return;
L_08854BD8:
    ctx.set_gpr(4, ctx.gpr[23] + 0u);
    ctx.set_gpr(5, ctx.gpr[30] + 0u);
    ctx.set_gpr(6, ctx.gpr[2] + 0u);
    ctx.set_gpr(31, 0x08854BECu);
    ctx.set_gpr(7, ctx.gpr[3] + 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0006_entry, 6u, 778u, 0x0881F44Cu>(ctx, &aot_mem) && ctx.pc == 0x08854BECu) goto L_08854BEC;
    return;
L_08854BEC:
    ctx.set_gpr(5, ctx.gpr[3] + 0u);
    ctx.set_gpr(31, 0x08854BF8u);
    ctx.set_gpr(4, ctx.gpr[2] + 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0007_entry, 7u, 18u, 0x08820104u>(ctx, &aot_mem) && ctx.pc == 0x08854BF8u) goto L_08854BF8;
    return;
L_08854BF8:
    ctx.set_gpr(3, ctx.gpr[20] - ctx.gpr[19]);
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(76), ctx.gpr[3]);
    ctx.set_gpr(4, ctx.gpr[20] < ctx.gpr[19] ? 1u : 0u);
    ctx.set_gpr(3, ctx.gpr[22] - ctx.gpr[18]);
    rt.memory().aot_store32(ctx.gpr[21] + static_cast<std::uint32_t>(32032), std::bit_cast<std::uint32_t>(ctx.fpr[0]));
    ctx.set_gpr(3, ctx.gpr[3] - ctx.gpr[4]);
    rt.memory().aot_store32(ctx.gpr[21] + static_cast<std::uint32_t>(32012), 0u);
    rt.memory().aot_store8(ctx.gpr[29] + static_cast<std::uint32_t>(80), static_cast<std::uint8_t>(0u));
    ctx.fpr[20] = std::bit_cast<float>(0u);
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(72), ctx.gpr[3]);
    ctx.set_gpr(8, rt.memory().aot_load32(ctx.gpr[21] + static_cast<std::uint32_t>(32012)));
    goto L_08854C24;
L_08854C24:
    ctx.set_gpr(3, 0u + static_cast<std::uint32_t>(32));
    ctx.set_gpr(4, ctx.gpr[8] << 2u);
    ctx.set_gpr(5, ctx.gpr[21] + ctx.gpr[4]);
    ctx.set_gpr(4, rt.memory().aot_load32(ctx.gpr[5] + static_cast<std::uint32_t>(12)));
    if (ctx.gpr[4] == ctx.gpr[3]) {
    rt.memory().aot_store8(ctx.gpr[29] + static_cast<std::uint32_t>(84), static_cast<std::uint8_t>(0u));
        goto L_088554E0;
    }
    goto L_08854C3C;
L_08854C3C:
    ctx.set_gpr(3, 0u + static_cast<std::uint32_t>(31));
    if (ctx.gpr[4] == ctx.gpr[3]) {
    ctx.set_gpr(2, ctx.gpr[8] + static_cast<std::uint32_t>(1));
        goto L_088551CC;
    }
    goto L_08854C48;
L_08854C48:
    ctx.set_gpr(3, 0u + static_cast<std::uint32_t>(27));
    if (ctx.gpr[4] == ctx.gpr[3]) {
    ctx.set_gpr(2, ctx.gpr[8] + static_cast<std::uint32_t>(1));
        goto L_088550F0;
    }
    goto L_08854C54;
L_08854C54:
    ctx.set_gpr(3, 0u + static_cast<std::uint32_t>(25));
    if (ctx.gpr[4] == ctx.gpr[3]) {
    ctx.set_gpr(2, ctx.gpr[8] + static_cast<std::uint32_t>(1));
        goto L_08854FC8;
    }
    goto L_08854C60;
L_08854C60:
    ctx.set_gpr(3, 0u + static_cast<std::uint32_t>(13));
    if (ctx.gpr[4] == ctx.gpr[3]) {
    ctx.set_gpr(2, ctx.gpr[8] + static_cast<std::uint32_t>(1));
        goto L_08854D9C;
    }
    goto L_08854C6C;
L_08854C6C:
    ctx.set_gpr(3, 0u + static_cast<std::uint32_t>(7));
    if (ctx.gpr[4] == ctx.gpr[3]) {
    ctx.set_gpr(2, ctx.gpr[8] + static_cast<std::uint32_t>(1));
        goto L_08854D28;
    }
    goto L_08854C78;
L_08854C78:
    ctx.set_gpr(3, 0u + static_cast<std::uint32_t>(6));
    if (ctx.gpr[4] == ctx.gpr[3]) {
    ctx.set_gpr(4, ctx.gpr[8] + static_cast<std::uint32_t>(1));
        goto L_08854D10;
    }
    goto L_08854C84;
L_08854C84:
    ctx.set_gpr(3, 0u + static_cast<std::uint32_t>(1));
    if (ctx.gpr[4] == ctx.gpr[3]) {
    ctx.set_gpr(17, rt.memory().aot_load32(ctx.gpr[5] + static_cast<std::uint32_t>(16)));
        goto L_08854CA0;
    }
    goto L_08854C90;
L_08854C90:
    if (ctx.gpr[4] == 0u) {
    rt.memory().aot_store8(ctx.gpr[29] + static_cast<std::uint32_t>(84), static_cast<std::uint8_t>(0u));
        goto L_088554E0;
    }
    goto L_08854C98;
L_08854C98:
    { const bool branch_taken = 0u == 0u;
    ctx.set_gpr(4, ctx.gpr[21] + 0u);
      if (branch_taken) {
          goto L_088554BC;
      }
      goto L_08854CA0;
    }
L_08854CA0:
    ctx.set_gpr(6, 0u + static_cast<std::uint32_t>(10000));
    ctx.set_gpr(7, 0u + 0u);
    ctx.set_gpr(5, static_cast<std::uint32_t>(static_cast<std::int32_t>(ctx.gpr[17]) >> 31u));
    ctx.set_gpr(31, 0x08854CB4u);
    ctx.set_gpr(4, ctx.gpr[17] + 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0006_entry, 6u, 110u, 0x0881C82Cu>(ctx, &aot_mem) && ctx.pc == 0x08854CB4u) goto L_08854CB4;
    return;
L_08854CB4:
    ctx.fpr[0] = std::bit_cast<float>(ctx.gpr[17]);
    ctx.fpr[0] = static_cast<float>(static_cast<std::int32_t>(ctx.fpr_bits(0)));
    ctx.set_gpr(16, ctx.gpr[3] + 0u);
    ctx.set_gpr(3, 14119u << 16u);
    ctx.set_gpr(3, ctx.gpr[3] | 50604u);
    ctx.set_gpr(1, static_cast<std::int32_t>(ctx.gpr[18]) < static_cast<std::int32_t>(ctx.gpr[16]) ? 1u : 0u);
    ctx.set_gpr(17, ctx.gpr[2] + 0u);
    ctx.fpr[1] = std::bit_cast<float>(ctx.gpr[3]);
    { const bool branch_taken = ctx.gpr[1] != 0u;
    { const float fs = ctx.fpr[1]; const float ft = ctx.fpr[0]; if ((std::isinf(fs) && ft == 0.0f) || (std::isinf(ft) && fs == 0.0f)) ctx.set_fpr_bits(21, 0x7FC00000u); else ctx.fpr[21] = fs * ft; }
      if (branch_taken) {
          goto L_08854D04;
      }
      goto L_08854CDC;
    }
L_08854CDC:
    ctx.set_gpr(1, static_cast<std::int32_t>(ctx.gpr[16]) < static_cast<std::int32_t>(ctx.gpr[18]) ? 1u : 0u);
    if (ctx.gpr[1] != 0u) {
    ctx.set_gpr(3, rt.memory().aot_load32(ctx.gpr[21] + static_cast<std::uint32_t>(32012)));
        goto L_08854CF8;
    }
    goto L_08854CE8;
L_08854CE8:
    ctx.set_gpr(1, ctx.gpr[17] < ctx.gpr[19] ? 1u : 0u);
    if (ctx.gpr[1] == 0u) {
    rt.memory().aot_store8(ctx.gpr[29] + static_cast<std::uint32_t>(84), static_cast<std::uint8_t>(0u));
        goto L_088554E0;
    }
    goto L_08854CF4;
L_08854CF4:
    ctx.set_gpr(3, rt.memory().aot_load32(ctx.gpr[21] + static_cast<std::uint32_t>(32012)));
    goto L_08854CF8;
L_08854CF8:
    ctx.set_gpr(3, ctx.gpr[3] + static_cast<std::uint32_t>(2));
    { const bool branch_taken = 0u == 0u;
    rt.memory().aot_store32(ctx.gpr[21] + static_cast<std::uint32_t>(32012), ctx.gpr[3]);
      if (branch_taken) {
          goto L_088554E0;
      }
      goto L_08854D04;
    }
L_08854D04:
    rt.memory().aot_store8(ctx.gpr[29] + static_cast<std::uint32_t>(84), static_cast<std::uint8_t>(0u));
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_088554E0;
      }
      goto L_08854D10;
    }
L_08854D10:
    rt.memory().aot_store32(ctx.gpr[21] + static_cast<std::uint32_t>(32012), ctx.gpr[4]);
    ctx.set_gpr(3, 2226u << 16u);
    ctx.set_gpr(3, rt.memory().aot_load32(ctx.gpr[3] + static_cast<std::uint32_t>(16520)));
    ctx.set_gpr(3, ctx.gpr[4] + ctx.gpr[3]);
    { const bool branch_taken = 0u == 0u;
    rt.memory().aot_store32(ctx.gpr[21] + static_cast<std::uint32_t>(32012), ctx.gpr[3]);
      if (branch_taken) {
          goto L_088554E0;
      }
      goto L_08854D28;
    }
L_08854D28:
    ctx.set_gpr(5, ctx.gpr[2] + static_cast<std::uint32_t>(1));
    rt.memory().aot_store32(ctx.gpr[21] + static_cast<std::uint32_t>(32012), ctx.gpr[2]);
    ctx.set_gpr(2, ctx.gpr[2] << 2u);
    ctx.set_gpr(2, ctx.gpr[21] + ctx.gpr[2]);
    rt.memory().aot_store32(ctx.gpr[21] + static_cast<std::uint32_t>(32012), ctx.gpr[5]);
    ctx.set_gpr(4, rt.memory().aot_load32(ctx.gpr[2] + static_cast<std::uint32_t>(12)));
    ctx.set_gpr(3, ctx.gpr[5] + static_cast<std::uint32_t>(1));
    ctx.set_gpr(2, ctx.gpr[5] << 2u);
    rt.memory().aot_store32(ctx.gpr[21] + static_cast<std::uint32_t>(32012), ctx.gpr[3]);
    ctx.set_gpr(2, ctx.gpr[21] + ctx.gpr[2]);
    ctx.set_gpr(2, rt.memory().aot_load32(ctx.gpr[2] + static_cast<std::uint32_t>(12)));
    if (ctx.gpr[2] != 0u) {
    ctx.fpr[0] = std::bit_cast<float>(ctx.gpr[2]);
        goto L_08854D68;
    }
    goto L_08854D5C;
L_08854D5C:
    ctx.set_gpr(2, 49024u << 16u);
    { const bool branch_taken = 0u == 0u;
    ctx.fpr[12] = std::bit_cast<float>(ctx.gpr[2]);
      if (branch_taken) {
          goto L_08854D6C;
      }
      goto L_08854D68;
    }
L_08854D68:
    ctx.fpr[12] = static_cast<float>(static_cast<std::int32_t>(ctx.fpr_bits(0)));
    goto L_08854D6C;
L_08854D6C:
    ctx.set_gpr(5, ctx.gpr[4] + static_cast<std::uint32_t>(5));
    ctx.set_gpr(4, rt.memory().aot_load32(ctx.gpr[21] + static_cast<std::uint32_t>(32136)));
    ctx.set_gpr(3, ctx.gpr[19] < ctx.gpr[17] ? 1u : 0u);
    ctx.set_gpr(2, ctx.gpr[18] - ctx.gpr[16]);
    ctx.set_gpr(25, rt.memory().aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(200)));
    ctx.set_gpr(6, ctx.gpr[19] - ctx.gpr[17]);
    ctx.set_gpr(7, ctx.gpr[2] - ctx.gpr[3]);
    ctx.set_gpr(25, rt.memory().aot_load32(ctx.gpr[25] + static_cast<std::uint32_t>(24)));
    jump_target = ctx.gpr[25];
    ctx.set_gpr(31, 0x08854D94u);
    ctx.set_gpr(8, 0u + 0u);
    ctx.pc = jump_target;
    if (rt.invoke_chained_call(ctx, &aot_mem) && ctx.pc == 0x08854D94u) goto L_08854D94;
    return;
L_08854D94:
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_088554E0;
      }
      goto L_08854D9C;
    }
L_08854D9C:
    ctx.set_gpr(5, ctx.gpr[2] + static_cast<std::uint32_t>(1));
    rt.memory().aot_store32(ctx.gpr[21] + static_cast<std::uint32_t>(32012), ctx.gpr[2]);
    ctx.set_gpr(2, ctx.gpr[2] << 2u);
    ctx.set_gpr(2, ctx.gpr[21] + ctx.gpr[2]);
    rt.memory().aot_store32(ctx.gpr[21] + static_cast<std::uint32_t>(32012), ctx.gpr[5]);
    ctx.set_gpr(4, rt.memory().aot_load32(ctx.gpr[2] + static_cast<std::uint32_t>(12)));
    ctx.set_gpr(3, ctx.gpr[5] + static_cast<std::uint32_t>(1));
    ctx.set_gpr(2, ctx.gpr[5] << 2u);
    rt.memory().aot_store32(ctx.gpr[21] + static_cast<std::uint32_t>(32012), ctx.gpr[3]);
    ctx.set_gpr(2, ctx.gpr[21] + ctx.gpr[2]);
    ctx.set_gpr(30, rt.memory().aot_load32(ctx.gpr[2] + static_cast<std::uint32_t>(12)));
    ctx.set_gpr(3, ctx.gpr[19] < ctx.gpr[17] ? 1u : 0u);
    ctx.set_gpr(2, ctx.gpr[18] - ctx.gpr[16]);
    ctx.set_gpr(2, ctx.gpr[2] - ctx.gpr[3]);
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(68), ctx.gpr[2]);
    ctx.set_gpr(2, 0u + static_cast<std::uint32_t>(2));
    { const bool branch_taken = ctx.gpr[4] == ctx.gpr[2];
    ctx.set_gpr(23, ctx.gpr[19] - ctx.gpr[17]);
      if (branch_taken) {
          goto L_08854F10;
      }
      goto L_08854DE4;
    }
L_08854DE4:
    ctx.set_gpr(2, 0u + static_cast<std::uint32_t>(1));
    if (ctx.gpr[4] == ctx.gpr[2]) {
    ctx.set_gpr(2, 2226u << 16u);
        goto L_08854E94;
    }
    goto L_08854DF0;
L_08854DF0:
    if (ctx.gpr[4] == 0u) {
    ctx.set_gpr(2, rt.memory().aot_load32(ctx.gpr[21] + static_cast<std::uint32_t>(32084)));
        goto L_08854E00;
    }
    goto L_08854DF8;
L_08854DF8:
    { const bool branch_taken = 0u == 0u;
    ctx.set_gpr(4, rt.memory().aot_load32(ctx.gpr[21] + static_cast<std::uint32_t>(32132)));
      if (branch_taken) {
          goto L_08854FB0;
      }
      goto L_08854E00;
    }
L_08854E00:
    { const bool branch_taken = ctx.gpr[2] != 0u;
    ctx.set_gpr(3, rt.memory().aot_load32(ctx.gpr[21] + static_cast<std::uint32_t>(32080)));
      if (branch_taken) {
          goto L_08854E20;
      }
      goto L_08854E08;
    }
L_08854E08:
    { const bool branch_taken = ctx.gpr[3] != 0u;
    // nop
      if (branch_taken) {
          goto L_08854E20;
      }
      goto L_08854E10;
    }
L_08854E10:
    ctx.set_gpr(2, rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(76)));
    rt.memory().aot_store32(ctx.gpr[21] + static_cast<std::uint32_t>(32080), ctx.gpr[2]);
    ctx.set_gpr(2, rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(72)));
    rt.memory().aot_store32(ctx.gpr[21] + static_cast<std::uint32_t>(32084), ctx.gpr[2]);
    goto L_08854E20;
L_08854E20:
    ctx.set_gpr(2, 2226u << 16u);
    ctx.set_gpr(3, ctx.gpr[30] << 2u);
    ctx.set_gpr(2, ctx.gpr[2] + static_cast<std::uint32_t>(17592));
    ctx.set_gpr(2, ctx.gpr[2] + ctx.gpr[3]);
    ctx.set_gpr(5, rt.memory().aot_load32(ctx.gpr[2] + static_cast<std::uint32_t>(-4)));
    ctx.set_gpr(31, 0x08854E3Cu);
    ctx.set_gpr(4, ctx.gpr[29] + static_cast<std::uint32_t>(364));
    goto L_08855620;
L_08854E3C:
    ctx.set_gpr(4, rt.memory().aot_load32(ctx.gpr[21] + static_cast<std::uint32_t>(32132)));
    ctx.set_gpr(10, rt.memory().aot_load32(ctx.gpr[21] + static_cast<std::uint32_t>(32080)));
    ctx.set_gpr(11, rt.memory().aot_load32(ctx.gpr[21] + static_cast<std::uint32_t>(32084)));
    ctx.set_gpr(5, 0u + 0u);
    ctx.set_gpr(6, 0u + 0u);
    ctx.set_gpr(7, ctx.gpr[29] + static_cast<std::uint32_t>(364));
    ctx.set_gpr(31, 0x08854E5Cu);
    ctx.set_gpr(8, ctx.gpr[29] + static_cast<std::uint32_t>(440));
    if (rt.invoke_chained_direct<&recomp_unit_0017_entry, 17u, 356u, 0x088496FCu>(ctx, &aot_mem) && ctx.pc == 0x08854E5Cu) goto L_08854E5C;
    return;
L_08854E5C:
    ctx.set_gpr(23, ctx.gpr[2] & 255u);
    ctx.set_gpr(4, ctx.gpr[29] + static_cast<std::uint32_t>(364));
    ctx.set_gpr(31, 0x08854E6Cu);
    ctx.set_gpr(5, 0u + static_cast<std::uint32_t>(-1));
    goto L_088555D0;
L_08854E6C:
    { const bool branch_taken = ctx.gpr[23] == 0u;
    // nop
      if (branch_taken) {
          goto L_08854FAC;
      }
      goto L_08854E74;
    }
L_08854E74:
    ctx.set_gpr(4, ctx.gpr[29] + static_cast<std::uint32_t>(300));
    ctx.set_gpr(31, 0x08854E80u);
    ctx.set_gpr(5, ctx.gpr[29] + static_cast<std::uint32_t>(440));
    if (rt.invoke_chained_direct<&recomp_unit_0015_entry, 15u, 870u, 0x08843A60u>(ctx, &aot_mem) && ctx.pc == 0x08854E80u) goto L_08854E80;
    return;
L_08854E80:
    ctx.set_gpr(4, rt.memory().aot_load32(ctx.gpr[21] + static_cast<std::uint32_t>(32124)));
    ctx.set_gpr(31, 0x08854E8Cu);
    ctx.set_gpr(5, ctx.gpr[2] + 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0019_entry, 19u, 521u, 0x08851B24u>(ctx, &aot_mem) && ctx.pc == 0x08854E8Cu) goto L_08854E8C;
    return;
L_08854E8C:
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_08854FAC;
      }
      goto L_08854E94;
    }
L_08854E94:
    ctx.set_gpr(3, ctx.gpr[30] << 2u);
    ctx.set_gpr(2, ctx.gpr[2] + static_cast<std::uint32_t>(17592));
    ctx.set_gpr(2, ctx.gpr[2] + ctx.gpr[3]);
    ctx.set_gpr(5, rt.memory().aot_load32(ctx.gpr[2] + static_cast<std::uint32_t>(-4)));
    ctx.set_gpr(31, 0x08854EACu);
    ctx.set_gpr(4, ctx.gpr[29] + static_cast<std::uint32_t>(296));
    goto L_08855620;
L_08854EAC:
    ctx.set_gpr(2, rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(68)));
    ctx.set_gpr(4, rt.memory().aot_load32(ctx.gpr[21] + static_cast<std::uint32_t>(32132)));
    ctx.set_gpr(3, ctx.gpr[20] < ctx.gpr[23] ? 1u : 0u);
    ctx.set_gpr(2, ctx.gpr[22] - ctx.gpr[2]);
    ctx.set_gpr(11, ctx.gpr[2] - ctx.gpr[3]);
    ctx.set_gpr(10, ctx.gpr[20] - ctx.gpr[23]);
    ctx.set_gpr(5, 0u + 0u);
    ctx.set_gpr(6, 0u + static_cast<std::uint32_t>(1));
    ctx.set_gpr(7, ctx.gpr[29] + static_cast<std::uint32_t>(296));
    ctx.set_gpr(31, 0x08854ED8u);
    ctx.set_gpr(8, ctx.gpr[29] + static_cast<std::uint32_t>(440));
    if (rt.invoke_chained_direct<&recomp_unit_0017_entry, 17u, 356u, 0x088496FCu>(ctx, &aot_mem) && ctx.pc == 0x08854ED8u) goto L_08854ED8;
    return;
L_08854ED8:
    ctx.set_gpr(23, ctx.gpr[2] & 255u);
    ctx.set_gpr(4, ctx.gpr[29] + static_cast<std::uint32_t>(296));
    ctx.set_gpr(31, 0x08854EE8u);
    ctx.set_gpr(5, 0u + static_cast<std::uint32_t>(-1));
    goto L_088555D0;
L_08854EE8:
    { const bool branch_taken = ctx.gpr[23] == 0u;
    // nop
      if (branch_taken) {
          goto L_08854FAC;
      }
      goto L_08854EF0;
    }
L_08854EF0:
    ctx.set_gpr(4, ctx.gpr[29] + static_cast<std::uint32_t>(232));
    ctx.set_gpr(31, 0x08854EFCu);
    ctx.set_gpr(5, ctx.gpr[29] + static_cast<std::uint32_t>(440));
    if (rt.invoke_chained_direct<&recomp_unit_0015_entry, 15u, 870u, 0x08843A60u>(ctx, &aot_mem) && ctx.pc == 0x08854EFCu) goto L_08854EFC;
    return;
L_08854EFC:
    ctx.set_gpr(4, rt.memory().aot_load32(ctx.gpr[21] + static_cast<std::uint32_t>(32124)));
    ctx.set_gpr(31, 0x08854F08u);
    ctx.set_gpr(5, ctx.gpr[2] + 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0019_entry, 19u, 521u, 0x08851B24u>(ctx, &aot_mem) && ctx.pc == 0x08854F08u) goto L_08854F08;
    return;
L_08854F08:
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_08854FAC;
      }
      goto L_08854F10;
    }
L_08854F10:
    ctx.set_gpr(5, rt.memory().aot_load32(ctx.gpr[21] + static_cast<std::uint32_t>(32148)));
    ctx.set_gpr(4, ctx.gpr[29] + static_cast<std::uint32_t>(228));
    ctx.set_gpr(31, 0x08854F20u);
    ctx.set_gpr(6, 0u + static_cast<std::uint32_t>(-1));
    if (rt.invoke_chained_direct<&recomp_unit_0022_entry, 22u, 859u, 0x0885F49Cu>(ctx, &aot_mem) && ctx.pc == 0x08854F20u) goto L_08854F20;
    return;
L_08854F20:
    ctx.set_gpr(2, 2226u << 16u);
    ctx.set_gpr(3, ctx.gpr[30] << 2u);
    ctx.set_gpr(2, ctx.gpr[2] + static_cast<std::uint32_t>(17592));
    ctx.set_gpr(2, ctx.gpr[2] + ctx.gpr[3]);
    ctx.set_gpr(5, rt.memory().aot_load32(ctx.gpr[2] + static_cast<std::uint32_t>(-4)));
    ctx.set_gpr(31, 0x08854F3Cu);
    ctx.set_gpr(4, ctx.gpr[29] + static_cast<std::uint32_t>(224));
    goto L_08855620;
L_08854F3C:
    ctx.set_gpr(31, 0x08854F44u);
    ctx.set_gpr(4, ctx.gpr[29] + static_cast<std::uint32_t>(228));
    if (rt.invoke_chained_direct<&recomp_unit_0017_entry, 17u, 355u, 0x088496F4u>(ctx, &aot_mem) && ctx.pc == 0x08854F44u) goto L_08854F44;
    return;
L_08854F44:
    ctx.set_gpr(3, rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(68)));
    ctx.set_gpr(4, ctx.gpr[20] < ctx.gpr[23] ? 1u : 0u);
    ctx.set_gpr(10, ctx.gpr[20] - ctx.gpr[23]);
    ctx.set_gpr(3, ctx.gpr[22] - ctx.gpr[3]);
    ctx.set_gpr(11, ctx.gpr[3] - ctx.gpr[4]);
    ctx.set_gpr(4, rt.memory().aot_load32(ctx.gpr[21] + static_cast<std::uint32_t>(32132)));
    ctx.set_gpr(5, ctx.gpr[2] + 0u);
    ctx.set_gpr(6, 0u + static_cast<std::uint32_t>(2));
    ctx.set_gpr(7, ctx.gpr[29] + static_cast<std::uint32_t>(224));
    ctx.set_gpr(31, 0x08854F70u);
    ctx.set_gpr(8, ctx.gpr[29] + static_cast<std::uint32_t>(440));
    if (rt.invoke_chained_direct<&recomp_unit_0017_entry, 17u, 356u, 0x088496FCu>(ctx, &aot_mem) && ctx.pc == 0x08854F70u) goto L_08854F70;
    return;
L_08854F70:
    ctx.set_gpr(23, ctx.gpr[2] & 255u);
    ctx.set_gpr(4, ctx.gpr[29] + static_cast<std::uint32_t>(224));
    ctx.set_gpr(31, 0x08854F80u);
    ctx.set_gpr(5, 0u + static_cast<std::uint32_t>(-1));
    goto L_088555D0;
L_08854F80:
    ctx.set_gpr(4, ctx.gpr[29] + static_cast<std::uint32_t>(228));
    ctx.set_gpr(31, 0x08854F8Cu);
    ctx.set_gpr(5, 0u + static_cast<std::uint32_t>(-1));
    if (rt.invoke_chained_direct<&recomp_unit_0017_entry, 17u, 253u, 0x08849158u>(ctx, &aot_mem) && ctx.pc == 0x08854F8Cu) goto L_08854F8C;
    return;
L_08854F8C:
    { const bool branch_taken = ctx.gpr[23] == 0u;
    // nop
      if (branch_taken) {
          goto L_08854FAC;
      }
      goto L_08854F94;
    }
L_08854F94:
    ctx.set_gpr(4, ctx.gpr[29] + static_cast<std::uint32_t>(160));
    ctx.set_gpr(31, 0x08854FA0u);
    ctx.set_gpr(5, ctx.gpr[29] + static_cast<std::uint32_t>(440));
    if (rt.invoke_chained_direct<&recomp_unit_0015_entry, 15u, 870u, 0x08843A60u>(ctx, &aot_mem) && ctx.pc == 0x08854FA0u) goto L_08854FA0;
    return;
L_08854FA0:
    ctx.set_gpr(4, rt.memory().aot_load32(ctx.gpr[21] + static_cast<std::uint32_t>(32124)));
    ctx.set_gpr(31, 0x08854FACu);
    ctx.set_gpr(5, ctx.gpr[2] + 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0019_entry, 19u, 521u, 0x08851B24u>(ctx, &aot_mem) && ctx.pc == 0x08854FACu) goto L_08854FAC;
    return;
L_08854FAC:
    ctx.set_gpr(4, rt.memory().aot_load32(ctx.gpr[21] + static_cast<std::uint32_t>(32132)));
    goto L_08854FB0;
L_08854FB0:
    ctx.fpr[12] = std::bit_cast<float>(0u);
    ctx.set_gpr(6, ctx.gpr[20] + 0u);
    ctx.set_gpr(31, 0x08854FC0u);
    ctx.set_gpr(7, ctx.gpr[22] + 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0017_entry, 17u, 459u, 0x08849C34u>(ctx, &aot_mem) && ctx.pc == 0x08854FC0u) goto L_08854FC0;
    return;
L_08854FC0:
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_088554E0;
      }
      goto L_08854FC8;
    }
L_08854FC8:
    rt.memory().aot_store32(ctx.gpr[21] + static_cast<std::uint32_t>(32012), ctx.gpr[2]);
    ctx.set_gpr(31, 0x08854FD4u);
    ctx.set_gpr(4, rt.memory().aot_load32(ctx.gpr[21] + static_cast<std::uint32_t>(32128)));
    goto L_088555C0;
L_08854FD4:
    ctx.set_gpr(3, 0u + static_cast<std::uint32_t>(-1));
    if (ctx.gpr[2] != ctx.gpr[3]) {
    ctx.fpr[23] = ctx.fpr[22] - ctx.fpr[21];
        goto L_0885505C;
    }
    goto L_08854FE0;
L_08854FE0:
    ctx.fpr[23] = ctx.fpr[22] - ctx.fpr[21];
    ctx.set_gpr(2, 49024u << 16u);
    ctx.set_gpr(4, rt.memory().aot_load32(ctx.gpr[21] + static_cast<std::uint32_t>(32160)));
    ctx.set_gpr(7, 0u + static_cast<std::uint32_t>(1));
    ctx.set_gpr(5, 0u + static_cast<std::uint32_t>(2));
    ctx.fpr[13] = std::bit_cast<float>(ctx.gpr[2]);
    ctx.set_gpr(6, 0u + 0u);
    ctx.set_fpr_bits(12, ctx.fpr_bits(23));
    ctx.set_gpr(8, ctx.gpr[7] + 0u);
    ctx.set_gpr(31, 0x0885500Cu);
    ctx.set_gpr(9, 0u + 0u);
    goto L_088555B8;
L_0885500C:
    if (static_cast<std::int32_t>(ctx.gpr[2]) < 0) {
    rt.memory().aot_store32(ctx.gpr[21] + static_cast<std::uint32_t>(32036), std::bit_cast<std::uint32_t>(ctx.fpr[21]));
        goto L_088554E0;
    }
    goto L_08855014;
L_08855014:
    ctx.set_gpr(2, 49024u << 16u);
    ctx.fpr[13] = std::bit_cast<float>(ctx.gpr[2]);
    ctx.set_gpr(2, 16448u << 16u);
    ctx.set_gpr(4, rt.memory().aot_load32(ctx.gpr[21] + static_cast<std::uint32_t>(32160)));
    ctx.set_fpr_bits(12, ctx.fpr_bits(23));
    ctx.fpr[14] = std::bit_cast<float>(ctx.gpr[2]);
    ctx.set_gpr(5, 0u + static_cast<std::uint32_t>(2));
    ctx.set_gpr(6, 0u + 0u);
    ctx.set_gpr(7, 0u + 0u);
    ctx.set_gpr(8, 0u + static_cast<std::uint32_t>(1));
    ctx.set_gpr(31, 0x08855044u);
    ctx.set_gpr(9, 0u + 0u);
    goto L_088555A8;
L_08855044:
    ctx.set_gpr(4, rt.memory().aot_load32(ctx.gpr[21] + static_cast<std::uint32_t>(32160)));
    ctx.set_gpr(5, 0u + 0u);
    ctx.set_gpr(31, 0x08855054u);
    ctx.set_gpr(6, 0u + 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0171_entry, 171u, 921u, 0x08AB35E8u>(ctx, &aot_mem) && ctx.pc == 0x08855054u) goto L_08855054;
    return;
L_08855054:
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_088550E4;
      }
      goto L_0885505C;
    }
L_0885505C:
    ctx.set_gpr(31, 0x08855064u);
    ctx.set_gpr(4, rt.memory().aot_load32(ctx.gpr[21] + static_cast<std::uint32_t>(32128)));
    goto L_088555C0;
L_08855064:
    ctx.set_gpr(6, ctx.gpr[2] + 0u);
    ctx.set_gpr(5, 0u + static_cast<std::uint32_t>(1));
    ctx.set_gpr(2, 49024u << 16u);
    ctx.set_gpr(4, rt.memory().aot_load32(ctx.gpr[21] + static_cast<std::uint32_t>(32160)));
    ctx.fpr[13] = std::bit_cast<float>(ctx.gpr[2]);
    ctx.set_fpr_bits(12, ctx.fpr_bits(23));
    ctx.set_gpr(7, ctx.gpr[5] + 0u);
    ctx.set_gpr(8, ctx.gpr[5] + 0u);
    ctx.set_gpr(31, 0x0885508Cu);
    ctx.set_gpr(9, 0u + 0u);
    goto L_088555B8;
L_0885508C:
    ctx.set_gpr(31, 0x08855094u);
    ctx.set_gpr(4, rt.memory().aot_load32(ctx.gpr[21] + static_cast<std::uint32_t>(32128)));
    goto L_088555C0;
L_08855094:
    ctx.set_gpr(6, ctx.gpr[2] + 0u);
    ctx.set_gpr(2, 49024u << 16u);
    ctx.fpr[13] = std::bit_cast<float>(ctx.gpr[2]);
    ctx.set_gpr(2, 16448u << 16u);
    ctx.set_gpr(5, 0u + static_cast<std::uint32_t>(1));
    ctx.set_gpr(4, rt.memory().aot_load32(ctx.gpr[21] + static_cast<std::uint32_t>(32160)));
    ctx.set_fpr_bits(12, ctx.fpr_bits(23));
    ctx.fpr[14] = std::bit_cast<float>(ctx.gpr[2]);
    ctx.set_gpr(7, 0u + 0u);
    ctx.set_gpr(8, ctx.gpr[5] + 0u);
    ctx.set_gpr(31, 0x088550C4u);
    ctx.set_gpr(9, 0u + 0u);
    goto L_088555A8;
L_088550C4:
    ctx.set_gpr(4, rt.memory().aot_load32(ctx.gpr[21] + static_cast<std::uint32_t>(32160)));
    ctx.set_gpr(5, 0u + 0u);
    ctx.set_gpr(31, 0x088550D4u);
    ctx.set_gpr(6, 0u + 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0171_entry, 171u, 936u, 0x08AB36B0u>(ctx, &aot_mem) && ctx.pc == 0x088550D4u) goto L_088550D4;
    return;
L_088550D4:
    ctx.set_gpr(4, rt.memory().aot_load32(ctx.gpr[21] + static_cast<std::uint32_t>(32160)));
    ctx.set_gpr(5, 0u + static_cast<std::uint32_t>(1));
    ctx.set_gpr(31, 0x088550E4u);
    ctx.set_gpr(6, 0u + 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0171_entry, 171u, 936u, 0x08AB36B0u>(ctx, &aot_mem) && ctx.pc == 0x088550E4u) goto L_088550E4;
    return;
L_088550E4:
    rt.memory().aot_store32(ctx.gpr[21] + static_cast<std::uint32_t>(32036), std::bit_cast<std::uint32_t>(ctx.fpr[21]));
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_088554E0;
      }
      goto L_088550F0;
    }
L_088550F0:
    ctx.set_gpr(4, ctx.gpr[2] + static_cast<std::uint32_t>(1));
    rt.memory().aot_store32(ctx.gpr[21] + static_cast<std::uint32_t>(32012), ctx.gpr[2]);
    ctx.set_gpr(2, ctx.gpr[2] << 2u);
    ctx.set_gpr(2, ctx.gpr[21] + ctx.gpr[2]);
    rt.memory().aot_store32(ctx.gpr[21] + static_cast<std::uint32_t>(32012), ctx.gpr[4]);
    ctx.set_gpr(23, rt.memory().aot_load32(ctx.gpr[2] + static_cast<std::uint32_t>(12)));
    ctx.set_gpr(3, ctx.gpr[4] + static_cast<std::uint32_t>(1));
    ctx.set_gpr(2, ctx.gpr[4] << 2u);
    rt.memory().aot_store32(ctx.gpr[21] + static_cast<std::uint32_t>(32012), ctx.gpr[3]);
    ctx.set_gpr(2, ctx.gpr[21] + ctx.gpr[2]);
    ctx.fpr[0] = std::bit_cast<float>(rt.memory().aot_load32(ctx.gpr[2] + static_cast<std::uint32_t>(12)));
    ctx.set_gpr(3, ctx.gpr[19] < ctx.gpr[17] ? 1u : 0u);
    ctx.set_gpr(4, ctx.gpr[19] - ctx.gpr[17]);
    ctx.fpr[1] = static_cast<float>(static_cast<std::int32_t>(ctx.fpr_bits(0)));
    ctx.set_gpr(2, 14979u << 16u);
    ctx.set_gpr(8, ctx.gpr[2] | 4719u);
    ctx.set_gpr(2, ctx.gpr[18] - ctx.gpr[16]);
    ctx.set_gpr(5, ctx.gpr[2] - ctx.gpr[3]);
    ctx.fpr[0] = std::bit_cast<float>(ctx.gpr[8]);
    ctx.set_gpr(31, 0x08855144u);
    { const float fs = ctx.fpr[0]; const float ft = ctx.fpr[1]; if ((std::isinf(fs) && ft == 0.0f) || (std::isinf(ft) && fs == 0.0f)) ctx.set_fpr_bits(23, 0x7FC00000u); else ctx.fpr[23] = fs * ft; }
    if (rt.invoke_chained_direct<&recomp_unit_0006_entry, 6u, 116u, 0x0881C89Cu>(ctx, &aot_mem) && ctx.pc == 0x08855144u) goto L_08855144;
    return;
L_08855144:
    ctx.set_gpr(30, ctx.gpr[2] + 0u);
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(64), ctx.gpr[3]);
    ctx.set_gpr(31, 0x08855154u);
    ctx.set_fpr_bits(12, ctx.fpr_bits(23));
    if (rt.invoke_chained_direct<&recomp_unit_0006_entry, 6u, 675u, 0x0881EBD0u>(ctx, &aot_mem) && ctx.pc == 0x08855154u) goto L_08855154;
    return;
L_08855154:
    ctx.set_gpr(5, rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(64)));
    ctx.set_gpr(4, ctx.gpr[30] + 0u);
    ctx.set_gpr(6, ctx.gpr[2] + 0u);
    ctx.set_gpr(31, 0x08855168u);
    ctx.set_gpr(7, ctx.gpr[3] + 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0006_entry, 6u, 778u, 0x0881F44Cu>(ctx, &aot_mem) && ctx.pc == 0x08855168u) goto L_08855168;
    return;
L_08855168:
    ctx.set_gpr(4, ctx.gpr[2] + 0u);
    ctx.set_gpr(31, 0x08855174u);
    ctx.set_gpr(5, ctx.gpr[3] + 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0006_entry, 6u, 164u, 0x0881CD1Cu>(ctx, &aot_mem) && ctx.pc == 0x08855174u) goto L_08855174;
    return;
L_08855174:
    ctx.set_gpr(4, rt.memory().aot_load32(ctx.gpr[21] + static_cast<std::uint32_t>(32164)));
    ctx.set_gpr(6, ctx.gpr[2] + 0u);
    ctx.set_gpr(7, ctx.gpr[3] + 0u);
    ctx.set_gpr(5, ctx.gpr[23] + 0u);
    ctx.set_gpr(31, 0x0885518Cu);
    ctx.set_gpr(8, 0u + 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0164_entry, 164u, 373u, 0x08A95BC8u>(ctx, &aot_mem) && ctx.pc == 0x0885518Cu) goto L_0885518C;
    return;
L_0885518C:
    ctx.set_gpr(4, rt.memory().aot_load32(ctx.gpr[21] + static_cast<std::uint32_t>(32136)));
    ctx.set_fpr_bits(12, ctx.fpr_bits(23));
    ctx.set_gpr(6, ctx.gpr[20] + 0u);
    ctx.set_gpr(25, rt.memory().aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(200)));
    ctx.set_gpr(25, rt.memory().aot_load32(ctx.gpr[25] + static_cast<std::uint32_t>(40)));
    jump_target = ctx.gpr[25];
    ctx.set_gpr(31, 0x088551A8u);
    ctx.set_gpr(7, ctx.gpr[22] + 0u);
    ctx.pc = jump_target;
    if (rt.invoke_chained_call(ctx, &aot_mem) && ctx.pc == 0x088551A8u) goto L_088551A8;
    return;
L_088551A8:
    ctx.set_gpr(31, 0x088551B0u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0017_entry, 17u, 182u, 0x08848C18u>(ctx, &aot_mem) && ctx.pc == 0x088551B0u) goto L_088551B0;
    return;
L_088551B0:
    ctx.set_gpr(31, 0x088551B8u);
    ctx.set_gpr(4, ctx.gpr[2] + 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0023_entry, 23u, 485u, 0x08861D50u>(ctx, &aot_mem) && ctx.pc == 0x088551B8u) goto L_088551B8;
    return;
L_088551B8:
    ctx.set_gpr(3, static_cast<std::int32_t>(ctx.gpr[2]) < 6 ? 1u : 0u);
    { const bool branch_taken = ctx.gpr[3] != 0u;
    // nop
      if (branch_taken) {
          goto L_088554E0;
      }
      goto L_088551C4;
    }
L_088551C4:
    { const bool branch_taken = 0u == 0u;
    rt.memory().aot_store32(ctx.gpr[21] + static_cast<std::uint32_t>(32104), ctx.gpr[23]);
      if (branch_taken) {
          goto L_088554E0;
      }
      goto L_088551CC;
    }
L_088551CC:
    rt.memory().aot_store32(ctx.gpr[21] + static_cast<std::uint32_t>(32012), ctx.gpr[2]);
    ctx.set_gpr(4, ctx.gpr[2] + static_cast<std::uint32_t>(1));
    ctx.set_gpr(2, ctx.gpr[2] << 2u);
    ctx.set_gpr(2, ctx.gpr[21] + ctx.gpr[2]);
    rt.memory().aot_store32(ctx.gpr[21] + static_cast<std::uint32_t>(32012), ctx.gpr[4]);
    ctx.fpr[0] = std::bit_cast<float>(rt.memory().aot_load32(ctx.gpr[2] + static_cast<std::uint32_t>(12)));
    ctx.set_gpr(5, ctx.gpr[29] + static_cast<std::uint32_t>(368));
    ctx.set_gpr(2, 14979u << 16u);
    ctx.set_gpr(3, ctx.gpr[2] | 4719u);
    ctx.set_gpr(2, ctx.gpr[4] + static_cast<std::uint32_t>(1));
    rt.memory().aot_store32(ctx.gpr[21] + static_cast<std::uint32_t>(32012), ctx.gpr[2]);
    ctx.set_gpr(2, ctx.gpr[4] << 2u);
    ctx.set_gpr(2, ctx.gpr[21] + ctx.gpr[2]);
    ctx.fpr[1] = std::bit_cast<float>(rt.memory().aot_load32(ctx.gpr[2] + static_cast<std::uint32_t>(12)));
    ctx.fpr[2] = static_cast<float>(static_cast<std::int32_t>(ctx.fpr_bits(0)));
    ctx.set_gpr(4, ctx.gpr[29] + static_cast<std::uint32_t>(124));
    ctx.fpr[0] = std::bit_cast<float>(ctx.gpr[3]);
    ctx.fpr[1] = static_cast<float>(static_cast<std::int32_t>(ctx.fpr_bits(1)));
    { const float fs = ctx.fpr[0]; const float ft = ctx.fpr[1]; if ((std::isinf(fs) && ft == 0.0f) || (std::isinf(ft) && fs == 0.0f)) ctx.set_fpr_bits(1, 0x7FC00000u); else ctx.fpr[1] = fs * ft; }
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(368), std::bit_cast<std::uint32_t>(ctx.fpr[1]));
    ctx.set_gpr(3, rt.memory().aot_load32(ctx.gpr[21] + static_cast<std::uint32_t>(32012)));
    { const float fs = ctx.fpr[0]; const float ft = ctx.fpr[2]; if ((std::isinf(fs) && ft == 0.0f) || (std::isinf(ft) && fs == 0.0f)) ctx.set_fpr_bits(20, 0x7FC00000u); else ctx.fpr[20] = fs * ft; }
    ctx.set_gpr(2, ctx.gpr[3] + static_cast<std::uint32_t>(1));
    rt.memory().aot_store32(ctx.gpr[21] + static_cast<std::uint32_t>(32012), ctx.gpr[2]);
    ctx.set_gpr(2, ctx.gpr[3] << 2u);
    ctx.set_gpr(2, ctx.gpr[21] + ctx.gpr[2]);
    ctx.fpr[1] = std::bit_cast<float>(rt.memory().aot_load32(ctx.gpr[2] + static_cast<std::uint32_t>(12)));
    ctx.fpr[1] = static_cast<float>(static_cast<std::int32_t>(ctx.fpr_bits(1)));
    { const float fs = ctx.fpr[0]; const float ft = ctx.fpr[1]; if ((std::isinf(fs) && ft == 0.0f) || (std::isinf(ft) && fs == 0.0f)) ctx.set_fpr_bits(1, 0x7FC00000u); else ctx.fpr[1] = fs * ft; }
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(372), std::bit_cast<std::uint32_t>(ctx.fpr[1]));
    ctx.set_gpr(3, rt.memory().aot_load32(ctx.gpr[21] + static_cast<std::uint32_t>(32012)));
    ctx.set_gpr(2, ctx.gpr[3] + static_cast<std::uint32_t>(1));
    rt.memory().aot_store32(ctx.gpr[21] + static_cast<std::uint32_t>(32012), ctx.gpr[2]);
    ctx.set_gpr(2, ctx.gpr[3] << 2u);
    ctx.set_gpr(2, ctx.gpr[21] + ctx.gpr[2]);
    ctx.fpr[1] = std::bit_cast<float>(rt.memory().aot_load32(ctx.gpr[2] + static_cast<std::uint32_t>(12)));
    ctx.fpr[1] = static_cast<float>(static_cast<std::int32_t>(ctx.fpr_bits(1)));
    { const float fs = ctx.fpr[0]; const float ft = ctx.fpr[1]; if ((std::isinf(fs) && ft == 0.0f) || (std::isinf(ft) && fs == 0.0f)) ctx.set_fpr_bits(1, 0x7FC00000u); else ctx.fpr[1] = fs * ft; }
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(376), std::bit_cast<std::uint32_t>(ctx.fpr[1]));
    ctx.set_gpr(3, rt.memory().aot_load32(ctx.gpr[21] + static_cast<std::uint32_t>(32012)));
    ctx.set_gpr(2, ctx.gpr[3] + static_cast<std::uint32_t>(1));
    rt.memory().aot_store32(ctx.gpr[21] + static_cast<std::uint32_t>(32012), ctx.gpr[2]);
    ctx.set_gpr(2, ctx.gpr[3] << 2u);
    ctx.set_gpr(2, ctx.gpr[21] + ctx.gpr[2]);
    ctx.fpr[1] = std::bit_cast<float>(rt.memory().aot_load32(ctx.gpr[2] + static_cast<std::uint32_t>(12)));
    ctx.fpr[1] = static_cast<float>(static_cast<std::int32_t>(ctx.fpr_bits(1)));
    { const float fs = ctx.fpr[0]; const float ft = ctx.fpr[1]; if ((std::isinf(fs) && ft == 0.0f) || (std::isinf(ft) && fs == 0.0f)) ctx.set_fpr_bits(1, 0x7FC00000u); else ctx.fpr[1] = fs * ft; }
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(380), std::bit_cast<std::uint32_t>(ctx.fpr[1]));
    ctx.set_gpr(3, rt.memory().aot_load32(ctx.gpr[21] + static_cast<std::uint32_t>(32012)));
    ctx.set_gpr(2, ctx.gpr[3] + static_cast<std::uint32_t>(1));
    rt.memory().aot_store32(ctx.gpr[21] + static_cast<std::uint32_t>(32012), ctx.gpr[2]);
    ctx.set_gpr(2, ctx.gpr[3] << 2u);
    ctx.set_gpr(2, ctx.gpr[21] + ctx.gpr[2]);
    ctx.fpr[1] = std::bit_cast<float>(rt.memory().aot_load32(ctx.gpr[2] + static_cast<std::uint32_t>(12)));
    ctx.fpr[1] = static_cast<float>(static_cast<std::int32_t>(ctx.fpr_bits(1)));
    { const float fs = ctx.fpr[0]; const float ft = ctx.fpr[1]; if ((std::isinf(fs) && ft == 0.0f) || (std::isinf(ft) && fs == 0.0f)) ctx.set_fpr_bits(1, 0x7FC00000u); else ctx.fpr[1] = fs * ft; }
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(384), std::bit_cast<std::uint32_t>(ctx.fpr[1]));
    ctx.set_gpr(3, rt.memory().aot_load32(ctx.gpr[21] + static_cast<std::uint32_t>(32012)));
    ctx.set_gpr(2, ctx.gpr[3] + static_cast<std::uint32_t>(1));
    rt.memory().aot_store32(ctx.gpr[21] + static_cast<std::uint32_t>(32012), ctx.gpr[2]);
    ctx.set_gpr(2, ctx.gpr[3] << 2u);
    ctx.set_gpr(2, ctx.gpr[21] + ctx.gpr[2]);
    ctx.fpr[1] = std::bit_cast<float>(rt.memory().aot_load32(ctx.gpr[2] + static_cast<std::uint32_t>(12)));
    ctx.fpr[1] = static_cast<float>(static_cast<std::int32_t>(ctx.fpr_bits(1)));
    { const float fs = ctx.fpr[0]; const float ft = ctx.fpr[1]; if ((std::isinf(fs) && ft == 0.0f) || (std::isinf(ft) && fs == 0.0f)) ctx.set_fpr_bits(1, 0x7FC00000u); else ctx.fpr[1] = fs * ft; }
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(388), std::bit_cast<std::uint32_t>(ctx.fpr[1]));
    ctx.set_gpr(3, rt.memory().aot_load32(ctx.gpr[21] + static_cast<std::uint32_t>(32012)));
    ctx.set_gpr(2, ctx.gpr[3] + static_cast<std::uint32_t>(1));
    rt.memory().aot_store32(ctx.gpr[21] + static_cast<std::uint32_t>(32012), ctx.gpr[2]);
    ctx.set_gpr(2, ctx.gpr[3] << 2u);
    ctx.set_gpr(2, ctx.gpr[21] + ctx.gpr[2]);
    ctx.fpr[1] = std::bit_cast<float>(rt.memory().aot_load32(ctx.gpr[2] + static_cast<std::uint32_t>(12)));
    ctx.fpr[1] = static_cast<float>(static_cast<std::int32_t>(ctx.fpr_bits(1)));
    { const float fs = ctx.fpr[0]; const float ft = ctx.fpr[1]; if ((std::isinf(fs) && ft == 0.0f) || (std::isinf(ft) && fs == 0.0f)) ctx.set_fpr_bits(1, 0x7FC00000u); else ctx.fpr[1] = fs * ft; }
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(392), std::bit_cast<std::uint32_t>(ctx.fpr[1]));
    ctx.set_gpr(3, rt.memory().aot_load32(ctx.gpr[21] + static_cast<std::uint32_t>(32012)));
    ctx.set_gpr(2, ctx.gpr[3] + static_cast<std::uint32_t>(1));
    rt.memory().aot_store32(ctx.gpr[21] + static_cast<std::uint32_t>(32012), ctx.gpr[2]);
    ctx.set_gpr(2, ctx.gpr[3] << 2u);
    ctx.set_gpr(2, ctx.gpr[21] + ctx.gpr[2]);
    ctx.fpr[1] = std::bit_cast<float>(rt.memory().aot_load32(ctx.gpr[2] + static_cast<std::uint32_t>(12)));
    ctx.fpr[1] = static_cast<float>(static_cast<std::int32_t>(ctx.fpr_bits(1)));
    { const float fs = ctx.fpr[0]; const float ft = ctx.fpr[1]; if ((std::isinf(fs) && ft == 0.0f) || (std::isinf(ft) && fs == 0.0f)) ctx.set_fpr_bits(1, 0x7FC00000u); else ctx.fpr[1] = fs * ft; }
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(396), std::bit_cast<std::uint32_t>(ctx.fpr[1]));
    ctx.set_gpr(3, rt.memory().aot_load32(ctx.gpr[21] + static_cast<std::uint32_t>(32012)));
    ctx.set_gpr(2, ctx.gpr[3] + static_cast<std::uint32_t>(1));
    rt.memory().aot_store32(ctx.gpr[21] + static_cast<std::uint32_t>(32012), ctx.gpr[2]);
    ctx.set_gpr(2, ctx.gpr[3] << 2u);
    ctx.set_gpr(2, ctx.gpr[21] + ctx.gpr[2]);
    ctx.fpr[1] = std::bit_cast<float>(rt.memory().aot_load32(ctx.gpr[2] + static_cast<std::uint32_t>(12)));
    ctx.fpr[1] = static_cast<float>(static_cast<std::int32_t>(ctx.fpr_bits(1)));
    { const float fs = ctx.fpr[0]; const float ft = ctx.fpr[1]; if ((std::isinf(fs) && ft == 0.0f) || (std::isinf(ft) && fs == 0.0f)) ctx.set_fpr_bits(1, 0x7FC00000u); else ctx.fpr[1] = fs * ft; }
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(400), std::bit_cast<std::uint32_t>(ctx.fpr[1]));
    ctx.set_gpr(3, rt.memory().aot_load32(ctx.gpr[21] + static_cast<std::uint32_t>(32012)));
    ctx.set_gpr(2, ctx.gpr[3] + static_cast<std::uint32_t>(1));
    rt.memory().aot_store32(ctx.gpr[21] + static_cast<std::uint32_t>(32012), ctx.gpr[2]);
    ctx.set_gpr(2, ctx.gpr[3] << 2u);
    ctx.set_gpr(2, ctx.gpr[21] + ctx.gpr[2]);
    ctx.fpr[1] = std::bit_cast<float>(rt.memory().aot_load32(ctx.gpr[2] + static_cast<std::uint32_t>(12)));
    ctx.fpr[1] = static_cast<float>(static_cast<std::int32_t>(ctx.fpr_bits(1)));
    { const float fs = ctx.fpr[0]; const float ft = ctx.fpr[1]; if ((std::isinf(fs) && ft == 0.0f) || (std::isinf(ft) && fs == 0.0f)) ctx.set_fpr_bits(1, 0x7FC00000u); else ctx.fpr[1] = fs * ft; }
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(404), std::bit_cast<std::uint32_t>(ctx.fpr[1]));
    ctx.set_gpr(3, rt.memory().aot_load32(ctx.gpr[21] + static_cast<std::uint32_t>(32012)));
    ctx.set_gpr(2, ctx.gpr[3] + static_cast<std::uint32_t>(1));
    rt.memory().aot_store32(ctx.gpr[21] + static_cast<std::uint32_t>(32012), ctx.gpr[2]);
    ctx.set_gpr(2, ctx.gpr[3] << 2u);
    ctx.set_gpr(2, ctx.gpr[21] + ctx.gpr[2]);
    ctx.fpr[1] = std::bit_cast<float>(rt.memory().aot_load32(ctx.gpr[2] + static_cast<std::uint32_t>(12)));
    ctx.fpr[1] = static_cast<float>(static_cast<std::int32_t>(ctx.fpr_bits(1)));
    { const float fs = ctx.fpr[0]; const float ft = ctx.fpr[1]; if ((std::isinf(fs) && ft == 0.0f) || (std::isinf(ft) && fs == 0.0f)) ctx.set_fpr_bits(1, 0x7FC00000u); else ctx.fpr[1] = fs * ft; }
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(408), std::bit_cast<std::uint32_t>(ctx.fpr[1]));
    ctx.set_gpr(3, rt.memory().aot_load32(ctx.gpr[21] + static_cast<std::uint32_t>(32012)));
    ctx.set_gpr(2, ctx.gpr[3] + static_cast<std::uint32_t>(1));
    rt.memory().aot_store32(ctx.gpr[21] + static_cast<std::uint32_t>(32012), ctx.gpr[2]);
    ctx.set_gpr(2, ctx.gpr[3] << 2u);
    ctx.set_gpr(2, ctx.gpr[21] + ctx.gpr[2]);
    ctx.fpr[1] = std::bit_cast<float>(rt.memory().aot_load32(ctx.gpr[2] + static_cast<std::uint32_t>(12)));
    ctx.fpr[1] = static_cast<float>(static_cast<std::int32_t>(ctx.fpr_bits(1)));
    { const float fs = ctx.fpr[0]; const float ft = ctx.fpr[1]; if ((std::isinf(fs) && ft == 0.0f) || (std::isinf(ft) && fs == 0.0f)) ctx.set_fpr_bits(1, 0x7FC00000u); else ctx.fpr[1] = fs * ft; }
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(412), std::bit_cast<std::uint32_t>(ctx.fpr[1]));
    ctx.set_gpr(3, rt.memory().aot_load32(ctx.gpr[21] + static_cast<std::uint32_t>(32012)));
    ctx.set_gpr(2, ctx.gpr[3] + static_cast<std::uint32_t>(1));
    rt.memory().aot_store32(ctx.gpr[21] + static_cast<std::uint32_t>(32012), ctx.gpr[2]);
    ctx.set_gpr(2, ctx.gpr[3] << 2u);
    ctx.set_gpr(2, ctx.gpr[21] + ctx.gpr[2]);
    ctx.fpr[1] = std::bit_cast<float>(rt.memory().aot_load32(ctx.gpr[2] + static_cast<std::uint32_t>(12)));
    ctx.fpr[1] = static_cast<float>(static_cast<std::int32_t>(ctx.fpr_bits(1)));
    { const float fs = ctx.fpr[0]; const float ft = ctx.fpr[1]; if ((std::isinf(fs) && ft == 0.0f) || (std::isinf(ft) && fs == 0.0f)) ctx.set_fpr_bits(1, 0x7FC00000u); else ctx.fpr[1] = fs * ft; }
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(416), std::bit_cast<std::uint32_t>(ctx.fpr[1]));
    ctx.set_gpr(3, rt.memory().aot_load32(ctx.gpr[21] + static_cast<std::uint32_t>(32012)));
    ctx.set_gpr(2, ctx.gpr[3] + static_cast<std::uint32_t>(1));
    rt.memory().aot_store32(ctx.gpr[21] + static_cast<std::uint32_t>(32012), ctx.gpr[2]);
    ctx.set_gpr(2, ctx.gpr[3] << 2u);
    ctx.set_gpr(2, ctx.gpr[21] + ctx.gpr[2]);
    ctx.fpr[1] = std::bit_cast<float>(rt.memory().aot_load32(ctx.gpr[2] + static_cast<std::uint32_t>(12)));
    ctx.fpr[1] = static_cast<float>(static_cast<std::int32_t>(ctx.fpr_bits(1)));
    { const float fs = ctx.fpr[0]; const float ft = ctx.fpr[1]; if ((std::isinf(fs) && ft == 0.0f) || (std::isinf(ft) && fs == 0.0f)) ctx.set_fpr_bits(1, 0x7FC00000u); else ctx.fpr[1] = fs * ft; }
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(420), std::bit_cast<std::uint32_t>(ctx.fpr[1]));
    ctx.set_gpr(3, rt.memory().aot_load32(ctx.gpr[21] + static_cast<std::uint32_t>(32012)));
    ctx.set_gpr(2, ctx.gpr[3] + static_cast<std::uint32_t>(1));
    rt.memory().aot_store32(ctx.gpr[21] + static_cast<std::uint32_t>(32012), ctx.gpr[2]);
    ctx.set_gpr(2, ctx.gpr[3] << 2u);
    ctx.set_gpr(2, ctx.gpr[21] + ctx.gpr[2]);
    ctx.fpr[1] = std::bit_cast<float>(rt.memory().aot_load32(ctx.gpr[2] + static_cast<std::uint32_t>(12)));
    ctx.fpr[1] = static_cast<float>(static_cast<std::int32_t>(ctx.fpr_bits(1)));
    { const float fs = ctx.fpr[0]; const float ft = ctx.fpr[1]; if ((std::isinf(fs) && ft == 0.0f) || (std::isinf(ft) && fs == 0.0f)) ctx.set_fpr_bits(1, 0x7FC00000u); else ctx.fpr[1] = fs * ft; }
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(424), std::bit_cast<std::uint32_t>(ctx.fpr[1]));
    ctx.set_gpr(3, rt.memory().aot_load32(ctx.gpr[21] + static_cast<std::uint32_t>(32012)));
    ctx.set_gpr(2, ctx.gpr[3] + static_cast<std::uint32_t>(1));
    rt.memory().aot_store32(ctx.gpr[21] + static_cast<std::uint32_t>(32012), ctx.gpr[2]);
    ctx.set_gpr(2, ctx.gpr[3] << 2u);
    ctx.set_gpr(2, ctx.gpr[21] + ctx.gpr[2]);
    ctx.fpr[1] = std::bit_cast<float>(rt.memory().aot_load32(ctx.gpr[2] + static_cast<std::uint32_t>(12)));
    ctx.fpr[1] = static_cast<float>(static_cast<std::int32_t>(ctx.fpr_bits(1)));
    { const float fs = ctx.fpr[0]; const float ft = ctx.fpr[1]; if ((std::isinf(fs) && ft == 0.0f) || (std::isinf(ft) && fs == 0.0f)) ctx.set_fpr_bits(1, 0x7FC00000u); else ctx.fpr[1] = fs * ft; }
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(428), std::bit_cast<std::uint32_t>(ctx.fpr[1]));
    ctx.set_gpr(3, rt.memory().aot_load32(ctx.gpr[21] + static_cast<std::uint32_t>(32012)));
    ctx.set_gpr(2, ctx.gpr[3] + static_cast<std::uint32_t>(1));
    rt.memory().aot_store32(ctx.gpr[21] + static_cast<std::uint32_t>(32012), ctx.gpr[2]);
    ctx.set_gpr(2, ctx.gpr[3] << 2u);
    ctx.set_gpr(2, ctx.gpr[21] + ctx.gpr[2]);
    ctx.fpr[1] = std::bit_cast<float>(rt.memory().aot_load32(ctx.gpr[2] + static_cast<std::uint32_t>(12)));
    ctx.fpr[1] = static_cast<float>(static_cast<std::int32_t>(ctx.fpr_bits(1)));
    { const float fs = ctx.fpr[0]; const float ft = ctx.fpr[1]; if ((std::isinf(fs) && ft == 0.0f) || (std::isinf(ft) && fs == 0.0f)) ctx.set_fpr_bits(1, 0x7FC00000u); else ctx.fpr[1] = fs * ft; }
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(432), std::bit_cast<std::uint32_t>(ctx.fpr[1]));
    ctx.set_gpr(3, rt.memory().aot_load32(ctx.gpr[21] + static_cast<std::uint32_t>(32012)));
    ctx.set_gpr(2, ctx.gpr[3] + static_cast<std::uint32_t>(1));
    rt.memory().aot_store32(ctx.gpr[21] + static_cast<std::uint32_t>(32012), ctx.gpr[2]);
    ctx.set_gpr(2, ctx.gpr[3] << 2u);
    ctx.set_gpr(2, ctx.gpr[21] + ctx.gpr[2]);
    ctx.fpr[1] = std::bit_cast<float>(rt.memory().aot_load32(ctx.gpr[2] + static_cast<std::uint32_t>(12)));
    ctx.fpr[1] = static_cast<float>(static_cast<std::int32_t>(ctx.fpr_bits(1)));
    { const float fs = ctx.fpr[0]; const float ft = ctx.fpr[1]; if ((std::isinf(fs) && ft == 0.0f) || (std::isinf(ft) && fs == 0.0f)) ctx.set_fpr_bits(0, 0x7FC00000u); else ctx.fpr[0] = fs * ft; }
    ctx.set_gpr(31, 0x08855488u);
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(436), std::bit_cast<std::uint32_t>(ctx.fpr[0]));
    goto L_0885555C;
L_08855488:
    ctx.set_gpr(23, ctx.gpr[2] + 0u);
    ctx.set_gpr(4, ctx.gpr[29] + static_cast<std::uint32_t>(88));
    ctx.set_gpr(31, 0x08855498u);
    ctx.set_gpr(5, ctx.gpr[29] + static_cast<std::uint32_t>(404));
    goto L_0885555C;
L_08855498:
    ctx.set_gpr(4, rt.memory().aot_load32(ctx.gpr[21] + static_cast<std::uint32_t>(32164)));
    ctx.set_fpr_bits(12, ctx.fpr_bits(20));
    ctx.set_gpr(5, ctx.gpr[23] + 0u);
    ctx.set_gpr(31, 0x088554ACu);
    ctx.set_gpr(6, ctx.gpr[2] + 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0165_entry, 165u, 461u, 0x08A9AF4Cu>(ctx, &aot_mem) && ctx.pc == 0x088554ACu) goto L_088554AC;
    return;
L_088554AC:
    ctx.set_gpr(3, 0u + static_cast<std::uint32_t>(1));
    ctx.set_fpr_bits(20, ctx.fpr_bits(21));
    { const bool branch_taken = 0u == 0u;
    rt.memory().aot_store8(ctx.gpr[29] + static_cast<std::uint32_t>(80), static_cast<std::uint8_t>(ctx.gpr[3]));
      if (branch_taken) {
          goto L_088554E0;
      }
      goto L_088554BC;
    }
L_088554BC:
    ctx.set_gpr(6, ctx.gpr[20] + 0u);
    ctx.set_gpr(7, ctx.gpr[22] + 0u);
    ctx.set_gpr(8, ctx.gpr[19] + 0u);
    ctx.set_gpr(9, ctx.gpr[18] + 0u);
    ctx.set_gpr(10, ctx.gpr[29] + static_cast<std::uint32_t>(504));
    ctx.set_gpr(31, 0x088554D8u);
    ctx.set_gpr(11, ctx.gpr[29] + static_cast<std::uint32_t>(511));
    goto L_08855768;
L_088554D8:
    ctx.set_gpr(3, ctx.gpr[2] & 255u);
    rt.memory().aot_store8(ctx.gpr[29] + static_cast<std::uint32_t>(84), static_cast<std::uint8_t>(ctx.gpr[3]));
    goto L_088554E0;
L_088554E0:
    ctx.set_gpr(3, rt.memory().aot_load8(ctx.gpr[29] + static_cast<std::uint32_t>(84)));
    if (ctx.gpr[3] != 0u) {
    ctx.set_gpr(8, rt.memory().aot_load32(ctx.gpr[21] + static_cast<std::uint32_t>(32012)));
        goto L_08854C24;
    }
    goto L_088554EC;
L_088554EC:
    ctx.set_gpr(3, rt.memory().aot_load8(ctx.gpr[29] + static_cast<std::uint32_t>(80)));
    if (ctx.gpr[3] == 0u) {
    ctx.set_gpr(31, rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(60)));
        goto L_08855520;
    }
    goto L_088554F8;
L_088554F8:
    ctx.fpr[0] = std::bit_cast<float>(rt.memory().aot_load32(ctx.gpr[21] + static_cast<std::uint32_t>(32032)));
    ctx.set_gpr(4, rt.memory().aot_load32(ctx.gpr[21] + static_cast<std::uint32_t>(32164)));
    ctx.set_gpr(31, 0x08855508u);
    ctx.fpr[12] = ctx.fpr[0] - ctx.fpr[20];
    if (rt.invoke_chained_direct<&recomp_unit_0165_entry, 165u, 476u, 0x08A9B0A0u>(ctx, &aot_mem) && ctx.pc == 0x08855508u) goto L_08855508;
    return;
L_08855508:
    ctx.set_gpr(4, rt.memory().aot_load32(ctx.gpr[21] + static_cast<std::uint32_t>(32132)));
    ctx.set_gpr(6, ctx.gpr[20] + 0u);
    ctx.set_gpr(7, ctx.gpr[22] + 0u);
    ctx.set_gpr(31, 0x0885551Cu);
    ctx.fpr[12] = std::bit_cast<float>(0u);
    if (rt.invoke_chained_direct<&recomp_unit_0017_entry, 17u, 459u, 0x08849C34u>(ctx, &aot_mem) && ctx.pc == 0x0885551Cu) goto L_0885551C;
    return;
L_0885551C:
    ctx.set_gpr(31, rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(60)));
    goto L_08855520;
L_08855520:
    ctx.set_gpr(30, rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(56)));
    ctx.set_gpr(23, rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(52)));
    ctx.set_gpr(22, rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(48)));
    ctx.set_gpr(21, rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(44)));
    ctx.set_gpr(20, rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(40)));
    ctx.set_gpr(19, rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(36)));
    ctx.set_gpr(18, rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(32)));
    ctx.set_gpr(17, rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(28)));
    ctx.set_gpr(16, rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(24)));
    ctx.fpr[23] = std::bit_cast<float>(rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(20)));
    ctx.fpr[22] = std::bit_cast<float>(rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(16)));
    ctx.fpr[21] = std::bit_cast<float>(rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(12)));
    ctx.fpr[20] = std::bit_cast<float>(rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(8)));
    jump_target = ctx.gpr[31];
    ctx.set_gpr(29, ctx.gpr[29] + static_cast<std::uint32_t>(512));
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_0885555C:
    ctx.set_gpr(29, ctx.gpr[29] + static_cast<std::uint32_t>(-16));
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(12), ctx.gpr[31]);
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(8), ctx.gpr[17]);
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(4), ctx.gpr[16]);
    ctx.set_gpr(17, ctx.gpr[4] + 0u);
    ctx.set_gpr(31, 0x08855578u);
    ctx.set_gpr(16, ctx.gpr[5] + 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0016_entry, 16u, 537u, 0x0884743Cu>(ctx, &aot_mem) && ctx.pc == 0x08855578u) goto L_08855578;
    return;
L_08855578:
    ctx.set_gpr(4, ctx.gpr[17] + static_cast<std::uint32_t>(12));
    ctx.set_gpr(31, 0x08855584u);
    ctx.set_gpr(5, ctx.gpr[16] + static_cast<std::uint32_t>(12));
    if (rt.invoke_chained_direct<&recomp_unit_0016_entry, 16u, 537u, 0x0884743Cu>(ctx, &aot_mem) && ctx.pc == 0x08855584u) goto L_08855584;
    return;
L_08855584:
    ctx.set_gpr(5, ctx.gpr[16] + static_cast<std::uint32_t>(24));
    ctx.set_gpr(31, 0x08855590u);
    ctx.set_gpr(4, ctx.gpr[17] + static_cast<std::uint32_t>(24));
    if (rt.invoke_chained_direct<&recomp_unit_0016_entry, 16u, 537u, 0x0884743Cu>(ctx, &aot_mem) && ctx.pc == 0x08855590u) goto L_08855590;
    return;
L_08855590:
    ctx.set_gpr(2, ctx.gpr[17] + 0u);
    ctx.set_gpr(31, rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(12)));
    ctx.set_gpr(17, rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(8)));
    ctx.set_gpr(16, rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(4)));
    jump_target = ctx.gpr[31];
    ctx.set_gpr(29, ctx.gpr[29] + static_cast<std::uint32_t>(16));
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_088555A8:
    ctx.set_fpr_bits(15, ctx.fpr_bits(14));
    ctx.set_gpr(8, ctx.gpr[9] + 0u);
    ctx.fpr[14] = std::bit_cast<float>(0u);
    (void)rt.invoke_chained_direct<&recomp_unit_0171_entry, 171u, 308u, 0x08AB11D4u>(ctx, &aot_mem); return;
L_088555B8:
    ctx.set_gpr(8, ctx.gpr[9] + 0u);
    (void)rt.invoke_chained_direct<&recomp_unit_0171_entry, 171u, 323u, 0x08AB1304u>(ctx, &aot_mem); return;
L_088555C0:
    ctx.set_gpr(2, 1u << 16u);
    ctx.set_gpr(2, ctx.gpr[4] + ctx.gpr[2]);
    jump_target = ctx.gpr[31];
    ctx.set_gpr(2, rt.memory().aot_load32(ctx.gpr[2] + static_cast<std::uint32_t>(-17716)));
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_088555D0:
    ctx.set_gpr(29, ctx.gpr[29] + static_cast<std::uint32_t>(-16));
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(12), ctx.gpr[31]);
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(8), ctx.gpr[17]);
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(4), ctx.gpr[16]);
    ctx.set_gpr(17, ctx.gpr[4] + 0u);
    { const bool branch_taken = ctx.gpr[17] == 0u;
    ctx.set_gpr(16, ctx.gpr[5] + 0u);
      if (branch_taken) {
          goto L_08855608;
      }
      goto L_088555EC;
    }
L_088555EC:
    ctx.set_gpr(31, 0x088555F4u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0019_entry, 19u, 764u, 0x08853094u>(ctx, &aot_mem) && ctx.pc == 0x088555F4u) goto L_088555F4;
    return;
L_088555F4:
    ctx.set_gpr(2, static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int16_t>(ctx.gpr[16]))));
    if (static_cast<std::int32_t>(ctx.gpr[2]) <= 0) {
    ctx.set_gpr(2, ctx.gpr[17] + 0u);
        goto L_0885560C;
    }
    goto L_08855600;
L_08855600:
    ctx.set_gpr(31, 0x08855608u);
    ctx.set_gpr(4, ctx.gpr[17] + 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0000_entry, 0u, 201u, 0x08804D84u>(ctx, &aot_mem) && ctx.pc == 0x08855608u) goto L_08855608;
    return;
L_08855608:
    ctx.set_gpr(2, ctx.gpr[17] + 0u);
    goto L_0885560C;
L_0885560C:
    ctx.set_gpr(31, rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(12)));
    ctx.set_gpr(17, rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(8)));
    ctx.set_gpr(16, rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(4)));
    jump_target = ctx.gpr[31];
    ctx.set_gpr(29, ctx.gpr[29] + static_cast<std::uint32_t>(16));
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_08855620:
    ctx.set_gpr(29, ctx.gpr[29] + static_cast<std::uint32_t>(-16));
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(12), ctx.gpr[31]);
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(8), ctx.gpr[17]);
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(4), ctx.gpr[16]);
    ctx.set_gpr(16, ctx.gpr[5] + 0u);
    { const bool branch_taken = ctx.gpr[16] != 0u;
    ctx.set_gpr(17, ctx.gpr[4] + 0u);
      if (branch_taken) {
          goto L_08855644;
      }
      goto L_0885563C;
    }
L_0885563C:
    { const bool branch_taken = 0u == 0u;
    ctx.set_gpr(2, 0u + 0u);
      if (branch_taken) {
          goto L_08855658;
      }
      goto L_08855644;
    }
L_08855644:
    ctx.set_gpr(31, 0x0885564Cu);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0019_entry, 19u, 782u, 0x08853170u>(ctx, &aot_mem) && ctx.pc == 0x0885564Cu) goto L_0885564C;
    return;
L_0885564C:
    ctx.set_gpr(5, ctx.gpr[16] + 0u);
    ctx.set_gpr(31, 0x08855658u);
    ctx.set_gpr(4, ctx.gpr[2] + 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0072_entry, 72u, 784u, 0x08927768u>(ctx, &aot_mem) && ctx.pc == 0x08855658u) goto L_08855658;
    return;
L_08855658:
    rt.memory().aot_store32(ctx.gpr[17] + static_cast<std::uint32_t>(0), ctx.gpr[2]);
    ctx.set_gpr(2, ctx.gpr[17] + 0u);
    ctx.set_gpr(31, rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(12)));
    ctx.set_gpr(17, rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(8)));
    ctx.set_gpr(16, rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(4)));
    jump_target = ctx.gpr[31];
    ctx.set_gpr(29, ctx.gpr[29] + static_cast<std::uint32_t>(16));
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_08855674:
    ctx.set_gpr(29, ctx.gpr[29] + static_cast<std::uint32_t>(-16));
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(12), ctx.gpr[31]);
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(8), ctx.gpr[16]);
    ctx.set_gpr(31, 0x08855688u);
    ctx.set_gpr(16, ctx.gpr[4] + 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0016_entry, 16u, 512u, 0x088472A8u>(ctx, &aot_mem) && ctx.pc == 0x08855688u) goto L_08855688;
    return;
L_08855688:
    ctx.set_gpr(31, 0x08855690u);
    ctx.set_gpr(4, ctx.gpr[16] + static_cast<std::uint32_t>(12));
    if (rt.invoke_chained_direct<&recomp_unit_0016_entry, 16u, 512u, 0x088472A8u>(ctx, &aot_mem) && ctx.pc == 0x08855690u) goto L_08855690;
    return;
L_08855690:
    ctx.set_gpr(31, 0x08855698u);
    ctx.set_gpr(4, ctx.gpr[16] + static_cast<std::uint32_t>(24));
    if (rt.invoke_chained_direct<&recomp_unit_0016_entry, 16u, 512u, 0x088472A8u>(ctx, &aot_mem) && ctx.pc == 0x08855698u) goto L_08855698;
    return;
L_08855698:
    ctx.fpr[12] = std::bit_cast<float>(0u);
    ctx.set_gpr(2, 16256u << 16u);
    ctx.fpr[14] = std::bit_cast<float>(ctx.gpr[2]);
    ctx.set_gpr(4, ctx.gpr[16] + 0u);
    ctx.set_gpr(31, 0x088556B0u);
    ctx.set_fpr_bits(13, ctx.fpr_bits(12));
    if (rt.invoke_chained_direct<&recomp_unit_0014_entry, 14u, 607u, 0x0883EAF0u>(ctx, &aot_mem) && ctx.pc == 0x088556B0u) goto L_088556B0;
    return;
L_088556B0:
    ctx.fpr[12] = std::bit_cast<float>(0u);
    ctx.set_gpr(4, ctx.gpr[16] + static_cast<std::uint32_t>(12));
    ctx.set_fpr_bits(13, ctx.fpr_bits(12));
    ctx.set_gpr(31, 0x088556C4u);
    ctx.set_fpr_bits(14, ctx.fpr_bits(12));
    if (rt.invoke_chained_direct<&recomp_unit_0014_entry, 14u, 607u, 0x0883EAF0u>(ctx, &aot_mem) && ctx.pc == 0x088556C4u) goto L_088556C4;
    return;
L_088556C4:
    ctx.fpr[12] = std::bit_cast<float>(0u);
    ctx.set_gpr(2, 16256u << 16u);
    ctx.fpr[13] = std::bit_cast<float>(ctx.gpr[2]);
    ctx.set_gpr(4, ctx.gpr[16] + static_cast<std::uint32_t>(24));
    ctx.set_gpr(31, 0x088556DCu);
    ctx.set_fpr_bits(14, ctx.fpr_bits(12));
    if (rt.invoke_chained_direct<&recomp_unit_0014_entry, 14u, 607u, 0x0883EAF0u>(ctx, &aot_mem) && ctx.pc == 0x088556DCu) goto L_088556DC;
    return;
L_088556DC:
    ctx.set_gpr(2, ctx.gpr[16] + 0u);
    ctx.set_gpr(31, rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(12)));
    ctx.set_gpr(16, rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(8)));
    jump_target = ctx.gpr[31];
    ctx.set_gpr(29, ctx.gpr[29] + static_cast<std::uint32_t>(16));
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_088556F0:
    ctx.set_gpr(29, ctx.gpr[29] + static_cast<std::uint32_t>(-32));
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(28), ctx.gpr[31]);
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(20), std::bit_cast<std::uint32_t>(ctx.fpr[20]));
    ctx.fpr[20] = std::bit_cast<float>(rt.memory().aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(32036)));
    ctx.set_gpr(4, rt.memory().aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(32164)));
    if (ctx.gpr[4] == 0u) {
    ctx.set_fpr_bits(0, ctx.fpr_bits(20));
        goto L_08855730;
    }
    goto L_0885570C;
L_0885570C:
    ctx.set_gpr(31, 0x08855714u);
    // nop
    goto L_08855740;
L_08855714:
    ctx.fpr[1] = std::bit_cast<float>(0u);
    ctx.set_fpu_condition(((std::isnan(ctx.fpr[0]) || std::isnan(ctx.fpr[1])) || ctx.fpr[0] <= ctx.fpr[1]));
    // nop
    { const bool branch_taken = ctx.fpu_condition();
    // nop
      if (branch_taken) {
          goto L_0885572C;
      }
      goto L_08855728;
    }
L_08855728:
    ctx.fpr[20] = ctx.fpr[20] - ctx.fpr[0];
    goto L_0885572C;
L_0885572C:
    ctx.set_fpr_bits(0, ctx.fpr_bits(20));
    goto L_08855730;
L_08855730:
    ctx.set_gpr(31, rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(28)));
    ctx.fpr[20] = std::bit_cast<float>(rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(20)));
    jump_target = ctx.gpr[31];
    ctx.set_gpr(29, ctx.gpr[29] + static_cast<std::uint32_t>(32));
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_08855740:
    ctx.set_gpr(3, rt.memory().aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(24)));
    ctx.set_gpr(2, 0u + static_cast<std::uint32_t>(-1));
    if (ctx.gpr[3] == ctx.gpr[2]) {
    ctx.set_gpr(2, 1u << 16u);
        goto L_08855758;
    }
    goto L_08855750;
L_08855750:
    { const bool branch_taken = 0u == 0u;
    ctx.fpr[0] = std::bit_cast<float>(0u);
      if (branch_taken) {
          goto L_08855760;
      }
      goto L_08855758;
    }
L_08855758:
    ctx.set_gpr(2, ctx.gpr[4] + ctx.gpr[2]);
    ctx.fpr[0] = std::bit_cast<float>(rt.memory().aot_load32(ctx.gpr[2] + static_cast<std::uint32_t>(3652)));
    goto L_08855760;
L_08855760:
    jump_target = ctx.gpr[31];
    // nop
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_08855768:
    ctx.set_gpr(29, ctx.gpr[29] + static_cast<std::uint32_t>(-928));
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(60), ctx.gpr[31]);
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(56), ctx.gpr[23]);
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(52), ctx.gpr[22]);
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(48), ctx.gpr[21]);
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(44), ctx.gpr[20]);
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(40), ctx.gpr[19]);
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(36), ctx.gpr[18]);
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(32), ctx.gpr[17]);
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(28), ctx.gpr[16]);
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(20), std::bit_cast<std::uint32_t>(ctx.fpr[22]));
    ctx.set_gpr(20, ctx.gpr[4] + 0u);
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(16), std::bit_cast<std::uint32_t>(ctx.fpr[21]));
    ctx.set_gpr(19, ctx.gpr[6] + 0u);
    ctx.set_gpr(18, ctx.gpr[7] + 0u);
    ctx.set_gpr(17, ctx.gpr[8] + 0u);
    ctx.set_gpr(16, ctx.gpr[9] + 0u);
    ctx.set_gpr(21, ctx.gpr[10] + 0u);
    ctx.set_gpr(23, ctx.gpr[11] + 0u);
    ctx.set_gpr(4, ctx.gpr[29] + static_cast<std::uint32_t>(736));
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(12), std::bit_cast<std::uint32_t>(ctx.fpr[20]));
    ctx.set_gpr(31, 0x088557C4u);
    ctx.set_gpr(22, 0u + static_cast<std::uint32_t>(1));
    if (rt.invoke_chained_direct<&recomp_unit_0015_entry, 15u, 161u, 0x08840958u>(ctx, &aot_mem) && ctx.pc == 0x088557C4u) goto L_088557C4;
    return;
L_088557C4:
    ctx.set_gpr(31, 0x088557CCu);
    ctx.set_gpr(4, ctx.gpr[29] + static_cast<std::uint32_t>(800));
    if (rt.invoke_chained_direct<&recomp_unit_0015_entry, 15u, 161u, 0x08840958u>(ctx, &aot_mem) && ctx.pc == 0x088557CCu) goto L_088557CC;
    return;
L_088557CC:
    ctx.set_gpr(31, 0x088557D4u);
    ctx.set_gpr(4, ctx.gpr[29] + static_cast<std::uint32_t>(864));
    if (rt.invoke_chained_direct<&recomp_unit_0015_entry, 15u, 161u, 0x08840958u>(ctx, &aot_mem) && ctx.pc == 0x088557D4u) goto L_088557D4;
    return;
L_088557D4:
    ctx.set_gpr(31, 0x088557DCu);
    ctx.set_gpr(4, ctx.gpr[29] + static_cast<std::uint32_t>(712));
    if (rt.invoke_chained_direct<&recomp_unit_0016_entry, 16u, 512u, 0x088472A8u>(ctx, &aot_mem) && ctx.pc == 0x088557DCu) goto L_088557DC;
    return;
L_088557DC:
    ctx.set_gpr(31, 0x088557E4u);
    ctx.set_gpr(4, ctx.gpr[29] + static_cast<std::uint32_t>(724));
    if (rt.invoke_chained_direct<&recomp_unit_0016_entry, 16u, 512u, 0x088472A8u>(ctx, &aot_mem) && ctx.pc == 0x088557E4u) goto L_088557E4;
    return;
L_088557E4:
    ctx.set_gpr(31, 0x088557ECu);
    ctx.set_gpr(4, ctx.gpr[29] + static_cast<std::uint32_t>(640));
    goto L_08855674;
L_088557EC:
    ctx.set_gpr(31, 0x088557F4u);
    ctx.set_gpr(4, ctx.gpr[29] + static_cast<std::uint32_t>(676));
    goto L_08855674;
L_088557F4:
    ctx.set_gpr(6, 2226u << 16u);
    ctx.set_gpr(6, ctx.gpr[6] + static_cast<std::uint32_t>(18012));
    ctx.set_gpr(5, ctx.gpr[29] + static_cast<std::uint32_t>(512));
    ctx.set_gpr(4, 0u + static_cast<std::uint32_t>(16));
    goto L_08855804;
L_08855804:
    ctx.set_gpr(3, rt.memory().aot_load32(ctx.gpr[6] + static_cast<std::uint32_t>(0)));
    ctx.set_gpr(2, rt.memory().aot_load32(ctx.gpr[6] + static_cast<std::uint32_t>(4)));
    ctx.set_gpr(4, ctx.gpr[4] + static_cast<std::uint32_t>(-1));
    rt.memory().aot_store32(ctx.gpr[5] + static_cast<std::uint32_t>(0), ctx.gpr[3]);
    rt.memory().aot_store32(ctx.gpr[5] + static_cast<std::uint32_t>(4), ctx.gpr[2]);
    ctx.set_gpr(6, ctx.gpr[6] + static_cast<std::uint32_t>(8));
    { const bool branch_taken = static_cast<std::int32_t>(ctx.gpr[4]) > 0;
    ctx.set_gpr(5, ctx.gpr[5] + static_cast<std::uint32_t>(8));
      if (branch_taken) {
          goto L_08855804;
      }
      goto L_08855824;
    }
L_08855824:
    ctx.set_gpr(6, 2226u << 16u);
    ctx.set_gpr(6, ctx.gpr[6] + static_cast<std::uint32_t>(18140));
    ctx.set_gpr(5, ctx.gpr[29] + static_cast<std::uint32_t>(448));
    ctx.set_gpr(4, 0u + static_cast<std::uint32_t>(8));
    goto L_08855834;
L_08855834:
    ctx.set_gpr(3, rt.memory().aot_load32(ctx.gpr[6] + static_cast<std::uint32_t>(0)));
    ctx.set_gpr(2, rt.memory().aot_load32(ctx.gpr[6] + static_cast<std::uint32_t>(4)));
    ctx.set_gpr(4, ctx.gpr[4] + static_cast<std::uint32_t>(-1));
    rt.memory().aot_store32(ctx.gpr[5] + static_cast<std::uint32_t>(0), ctx.gpr[3]);
    rt.memory().aot_store32(ctx.gpr[5] + static_cast<std::uint32_t>(4), ctx.gpr[2]);
    ctx.set_gpr(6, ctx.gpr[6] + static_cast<std::uint32_t>(8));
    { const bool branch_taken = static_cast<std::int32_t>(ctx.gpr[4]) > 0;
    ctx.set_gpr(5, ctx.gpr[5] + static_cast<std::uint32_t>(8));
      if (branch_taken) {
          goto L_08855834;
      }
      goto L_08855854;
    }
L_08855854:
    ctx.set_gpr(5, rt.memory().aot_load32(ctx.gpr[20] + static_cast<std::uint32_t>(32012)));
    ctx.set_gpr(2, ctx.gpr[5] << 2u);
    ctx.set_gpr(4, ctx.gpr[2] + ctx.gpr[20]);
    ctx.set_gpr(2, rt.memory().aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(12)));
    ctx.set_gpr(1, ctx.gpr[2] < static_cast<std::uint32_t>(34) ? 1u : 0u);
    if (ctx.gpr[1] == 0u) {
    rt.memory().aot_store8(ctx.gpr[20] + static_cast<std::uint32_t>(8), static_cast<std::uint8_t>(0u));
        goto L_088570AC;
    }
    goto L_08855870;
L_08855870:
    ctx.set_gpr(3, 2225u << 16u);
    ctx.set_gpr(2, ctx.gpr[2] << 2u);
    ctx.set_gpr(3, ctx.gpr[3] + static_cast<std::uint32_t>(8600));
    ctx.set_gpr(2, ctx.gpr[2] + ctx.gpr[3]);
    ctx.set_gpr(2, rt.memory().aot_load32(ctx.gpr[2] + static_cast<std::uint32_t>(0)));
    jump_target = ctx.gpr[2];
    // nop
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_0885588C:
    rt.memory().aot_store8(ctx.gpr[20] + static_cast<std::uint32_t>(8), static_cast<std::uint8_t>(0u));
    { const bool branch_taken = 0u == 0u;
    ctx.set_gpr(22, 0u + 0u);
      if (branch_taken) {
          goto L_088570B0;
      }
      goto L_08855898;
    }
L_08855898:
    ctx.set_gpr(4, rt.memory().aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(16)));
    ctx.set_gpr(6, 0u + static_cast<std::uint32_t>(10000));
    ctx.set_gpr(7, 0u + 0u);
    ctx.set_gpr(31, 0x088558ACu);
    ctx.set_gpr(5, static_cast<std::uint32_t>(static_cast<std::int32_t>(ctx.gpr[4]) >> 31u));
    if (rt.invoke_chained_direct<&recomp_unit_0006_entry, 6u, 110u, 0x0881C82Cu>(ctx, &aot_mem) && ctx.pc == 0x088558ACu) goto L_088558AC;
    return;
L_088558AC:
    ctx.set_gpr(1, static_cast<std::int32_t>(ctx.gpr[16]) < static_cast<std::int32_t>(ctx.gpr[3]) ? 1u : 0u);
    { const bool branch_taken = ctx.gpr[1] != 0u;
    rt.memory().aot_store32(ctx.gpr[21] + static_cast<std::uint32_t>(0), 0u);
      if (branch_taken) {
          goto L_08855920;
      }
      goto L_088558B8;
    }
L_088558B8:
    ctx.set_gpr(1, static_cast<std::int32_t>(ctx.gpr[3]) < static_cast<std::int32_t>(ctx.gpr[16]) ? 1u : 0u);
    if (ctx.gpr[1] != 0u) {
    ctx.set_gpr(3, ctx.gpr[16] - ctx.gpr[3]);
        goto L_088558D4;
    }
    goto L_088558C4;
L_088558C4:
    ctx.set_gpr(1, ctx.gpr[17] < ctx.gpr[2] ? 1u : 0u);
    if (ctx.gpr[1] != 0u) {
    ctx.set_gpr(22, 0u + 0u);
        goto L_088570B0;
    }
    goto L_088558D0;
L_088558D0:
    ctx.set_gpr(3, ctx.gpr[16] - ctx.gpr[3]);
    goto L_088558D4;
L_088558D4:
    ctx.set_gpr(4, ctx.gpr[17] < ctx.gpr[2] ? 1u : 0u);
    ctx.set_gpr(5, ctx.gpr[3] - ctx.gpr[4]);
    ctx.set_gpr(31, 0x088558E4u);
    ctx.set_gpr(4, ctx.gpr[17] - ctx.gpr[2]);
    if (rt.invoke_chained_direct<&recomp_unit_0006_entry, 6u, 116u, 0x0881C89Cu>(ctx, &aot_mem) && ctx.pc == 0x088558E4u) goto L_088558E4;
    return;
L_088558E4:
    ctx.set_gpr(4, 59430u << 16u);
    ctx.set_gpr(5, 15889u << 16u);
    ctx.set_gpr(4, ctx.gpr[4] | 54933u);
    ctx.set_gpr(5, ctx.gpr[5] | 11787u);
    ctx.set_gpr(6, ctx.gpr[2] + 0u);
    ctx.set_gpr(31, 0x08855900u);
    ctx.set_gpr(7, ctx.gpr[3] + 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0006_entry, 6u, 778u, 0x0881F44Cu>(ctx, &aot_mem) && ctx.pc == 0x08855900u) goto L_08855900;
    return;
L_08855900:
    ctx.set_gpr(4, ctx.gpr[2] + 0u);
    ctx.set_gpr(31, 0x0885590Cu);
    ctx.set_gpr(5, ctx.gpr[3] + 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0007_entry, 7u, 18u, 0x08820104u>(ctx, &aot_mem) && ctx.pc == 0x0885590Cu) goto L_0885590C;
    return;
L_0885590C:
    rt.memory().aot_store32(ctx.gpr[21] + static_cast<std::uint32_t>(0), std::bit_cast<std::uint32_t>(ctx.fpr[0]));
    ctx.set_gpr(2, rt.memory().aot_load32(ctx.gpr[20] + static_cast<std::uint32_t>(32012)));
    ctx.set_gpr(2, ctx.gpr[2] + static_cast<std::uint32_t>(2));
    { const bool branch_taken = 0u == 0u;
    rt.memory().aot_store32(ctx.gpr[20] + static_cast<std::uint32_t>(32012), ctx.gpr[2]);
      if (branch_taken) {
          goto L_088570B0;
      }
      goto L_08855920;
    }
L_08855920:
    ctx.set_gpr(22, 0u + 0u);
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_088570B0;
      }
      goto L_0885592C;
    }
L_0885592C:
    ctx.set_gpr(3, ctx.gpr[5] + static_cast<std::uint32_t>(1));
    rt.memory().aot_store32(ctx.gpr[20] + static_cast<std::uint32_t>(32012), ctx.gpr[3]);
    ctx.set_gpr(2, ctx.gpr[3] + static_cast<std::uint32_t>(1));
    rt.memory().aot_store32(ctx.gpr[20] + static_cast<std::uint32_t>(32012), ctx.gpr[2]);
    ctx.set_gpr(2, ctx.gpr[3] << 2u);
    ctx.set_gpr(2, ctx.gpr[2] + ctx.gpr[20]);
    ctx.fpr[0] = std::bit_cast<float>(rt.memory().aot_load32(ctx.gpr[2] + static_cast<std::uint32_t>(12)));
    ctx.fpr[0] = static_cast<float>(static_cast<std::int32_t>(ctx.fpr_bits(0)));
    ctx.set_gpr(2, 14979u << 16u);
    ctx.set_gpr(2, ctx.gpr[2] | 4719u);
    ctx.fpr[1] = std::bit_cast<float>(ctx.gpr[2]);
    { const float fs = ctx.fpr[1]; const float ft = ctx.fpr[0]; if ((std::isinf(fs) && ft == 0.0f) || (std::isinf(ft) && fs == 0.0f)) ctx.set_fpr_bits(0, 0x7FC00000u); else ctx.fpr[0] = fs * ft; }
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(712), std::bit_cast<std::uint32_t>(ctx.fpr[0]));
    ctx.set_gpr(3, rt.memory().aot_load32(ctx.gpr[20] + static_cast<std::uint32_t>(32012)));
    ctx.set_gpr(2, ctx.gpr[3] + static_cast<std::uint32_t>(1));
    rt.memory().aot_store32(ctx.gpr[20] + static_cast<std::uint32_t>(32012), ctx.gpr[2]);
    ctx.set_gpr(2, ctx.gpr[3] << 2u);
    ctx.set_gpr(2, ctx.gpr[2] + ctx.gpr[20]);
    ctx.fpr[0] = std::bit_cast<float>(rt.memory().aot_load32(ctx.gpr[2] + static_cast<std::uint32_t>(12)));
    ctx.fpr[0] = static_cast<float>(static_cast<std::int32_t>(ctx.fpr_bits(0)));
    { const float fs = ctx.fpr[1]; const float ft = ctx.fpr[0]; if ((std::isinf(fs) && ft == 0.0f) || (std::isinf(ft) && fs == 0.0f)) ctx.set_fpr_bits(0, 0x7FC00000u); else ctx.fpr[0] = fs * ft; }
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(716), std::bit_cast<std::uint32_t>(ctx.fpr[0]));
    ctx.set_gpr(3, rt.memory().aot_load32(ctx.gpr[20] + static_cast<std::uint32_t>(32012)));
    ctx.set_gpr(2, ctx.gpr[3] + static_cast<std::uint32_t>(1));
    rt.memory().aot_store32(ctx.gpr[20] + static_cast<std::uint32_t>(32012), ctx.gpr[2]);
    ctx.set_gpr(2, ctx.gpr[3] << 2u);
    ctx.set_gpr(2, ctx.gpr[2] + ctx.gpr[20]);
    ctx.fpr[0] = std::bit_cast<float>(rt.memory().aot_load32(ctx.gpr[2] + static_cast<std::uint32_t>(12)));
    ctx.fpr[13] = std::bit_cast<float>(rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(716)));
    ctx.fpr[0] = static_cast<float>(static_cast<std::int32_t>(ctx.fpr_bits(0)));
    { const float fs = ctx.fpr[1]; const float ft = ctx.fpr[0]; if ((std::isinf(fs) && ft == 0.0f) || (std::isinf(ft) && fs == 0.0f)) ctx.set_fpr_bits(14, 0x7FC00000u); else ctx.fpr[14] = fs * ft; }
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(720), std::bit_cast<std::uint32_t>(ctx.fpr[14]));
    ctx.set_gpr(4, rt.memory().aot_load32(ctx.gpr[20] + static_cast<std::uint32_t>(32136)));
    ctx.set_gpr(31, 0x088559B8u);
    ctx.fpr[12] = std::bit_cast<float>(rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(712)));
    goto L_08857210;
L_088559B8:
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_088570B0;
      }
      goto L_088559C0;
    }
L_088559C0:
    ctx.set_gpr(3, ctx.gpr[5] + static_cast<std::uint32_t>(1));
    rt.memory().aot_store32(ctx.gpr[20] + static_cast<std::uint32_t>(32012), ctx.gpr[3]);
    ctx.set_gpr(2, ctx.gpr[3] + static_cast<std::uint32_t>(1));
    rt.memory().aot_store32(ctx.gpr[20] + static_cast<std::uint32_t>(32012), ctx.gpr[2]);
    ctx.set_gpr(2, ctx.gpr[3] << 2u);
    ctx.set_gpr(2, ctx.gpr[2] + ctx.gpr[20]);
    ctx.fpr[0] = std::bit_cast<float>(rt.memory().aot_load32(ctx.gpr[2] + static_cast<std::uint32_t>(12)));
    ctx.set_gpr(4, rt.memory().aot_load32(ctx.gpr[20] + static_cast<std::uint32_t>(32136)));
    ctx.fpr[1] = static_cast<float>(static_cast<std::int32_t>(ctx.fpr_bits(0)));
    ctx.set_gpr(2, 14979u << 16u);
    ctx.set_gpr(2, ctx.gpr[2] | 4719u);
    ctx.fpr[0] = std::bit_cast<float>(ctx.gpr[2]);
    ctx.set_gpr(31, 0x088559F8u);
    { const float fs = ctx.fpr[0]; const float ft = ctx.fpr[1]; if ((std::isinf(fs) && ft == 0.0f) || (std::isinf(ft) && fs == 0.0f)) ctx.set_fpr_bits(12, 0x7FC00000u); else ctx.fpr[12] = fs * ft; }
    goto L_08857200;
L_088559F8:
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_088570B0;
      }
      goto L_08855A00;
    }
L_08855A00:
    ctx.set_gpr(3, ctx.gpr[5] + static_cast<std::uint32_t>(1));
    rt.memory().aot_store32(ctx.gpr[20] + static_cast<std::uint32_t>(32012), ctx.gpr[3]);
    ctx.set_gpr(2, ctx.gpr[3] + static_cast<std::uint32_t>(1));
    rt.memory().aot_store32(ctx.gpr[20] + static_cast<std::uint32_t>(32012), ctx.gpr[2]);
    ctx.set_gpr(2, ctx.gpr[3] << 2u);
    ctx.set_gpr(2, ctx.gpr[2] + ctx.gpr[20]);
    ctx.set_gpr(3, rt.memory().aot_load32(ctx.gpr[2] + static_cast<std::uint32_t>(12)));
    ctx.set_gpr(2, 0u + static_cast<std::uint32_t>(1));
    { const bool branch_taken = ctx.gpr[3] != ctx.gpr[2];
    // nop
      if (branch_taken) {
          goto L_08855A64;
      }
      goto L_08855A28;
    }
L_08855A28:
    ctx.set_gpr(31, 0x08855A30u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0017_entry, 17u, 195u, 0x08848CB4u>(ctx, &aot_mem) && ctx.pc == 0x08855A30u) goto L_08855A30;
    return;
L_08855A30:
    ctx.set_gpr(25, rt.memory().aot_load32(ctx.gpr[2] + static_cast<std::uint32_t>(200)));
    ctx.set_gpr(5, 0u + static_cast<std::uint32_t>(1));
    ctx.set_gpr(4, ctx.gpr[2] + 0u);
    ctx.set_gpr(25, rt.memory().aot_load32(ctx.gpr[25] + static_cast<std::uint32_t>(36)));
    jump_target = ctx.gpr[25];
    ctx.set_gpr(31, 0x08855A48u);
    ctx.set_gpr(6, ctx.gpr[5] + 0u);
    ctx.pc = jump_target;
    if (rt.invoke_chained_call(ctx, &aot_mem) && ctx.pc == 0x08855A48u) goto L_08855A48;
    return;
L_08855A48:
    ctx.set_gpr(31, 0x08855A50u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0017_entry, 17u, 195u, 0x08848CB4u>(ctx, &aot_mem) && ctx.pc == 0x08855A50u) goto L_08855A50;
    return;
L_08855A50:
    ctx.set_gpr(4, ctx.gpr[2] + 0u);
    ctx.set_gpr(31, 0x08855A5Cu);
    ctx.set_gpr(5, 0u + static_cast<std::uint32_t>(1));
    goto L_088571F8;
L_08855A5C:
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_088570B0;
      }
      goto L_08855A64;
    }
L_08855A64:
    ctx.set_gpr(31, 0x08855A6Cu);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0017_entry, 17u, 195u, 0x08848CB4u>(ctx, &aot_mem) && ctx.pc == 0x08855A6Cu) goto L_08855A6C;
    return;
L_08855A6C:
    ctx.set_gpr(25, rt.memory().aot_load32(ctx.gpr[2] + static_cast<std::uint32_t>(200)));
    ctx.set_gpr(4, ctx.gpr[2] + 0u);
    ctx.set_gpr(5, 0u + 0u);
    ctx.set_gpr(25, rt.memory().aot_load32(ctx.gpr[25] + static_cast<std::uint32_t>(36)));
    jump_target = ctx.gpr[25];
    ctx.set_gpr(31, 0x08855A84u);
    ctx.set_gpr(6, 0u + static_cast<std::uint32_t>(1));
    ctx.pc = jump_target;
    if (rt.invoke_chained_call(ctx, &aot_mem) && ctx.pc == 0x08855A84u) goto L_08855A84;
    return;
L_08855A84:
    ctx.set_gpr(31, 0x08855A8Cu);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0017_entry, 17u, 195u, 0x08848CB4u>(ctx, &aot_mem) && ctx.pc == 0x08855A8Cu) goto L_08855A8C;
    return;
L_08855A8C:
    ctx.set_gpr(4, ctx.gpr[2] + 0u);
    ctx.set_gpr(31, 0x08855A98u);
    ctx.set_gpr(5, 0u + 0u);
    goto L_088571F8;
L_08855A98:
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_088570B0;
      }
      goto L_08855AA0;
    }
L_08855AA0:
    ctx.set_gpr(3, ctx.gpr[5] + static_cast<std::uint32_t>(1));
    rt.memory().aot_store32(ctx.gpr[20] + static_cast<std::uint32_t>(32012), ctx.gpr[3]);
    ctx.set_gpr(2, ctx.gpr[3] + static_cast<std::uint32_t>(1));
    rt.memory().aot_store32(ctx.gpr[20] + static_cast<std::uint32_t>(32012), ctx.gpr[2]);
    ctx.set_gpr(2, ctx.gpr[3] << 2u);
    ctx.set_gpr(2, ctx.gpr[2] + ctx.gpr[20]);
    ctx.set_gpr(2, rt.memory().aot_load32(ctx.gpr[2] + static_cast<std::uint32_t>(12)));
    ctx.set_gpr(5, 0u + static_cast<std::uint32_t>(1));
    if (ctx.gpr[2] != ctx.gpr[5]) {
    ctx.set_gpr(4, rt.memory().aot_load32(ctx.gpr[20] + static_cast<std::uint32_t>(32136)));
        goto L_08855AD8;
    }
    goto L_08855AC8;
L_08855AC8:
    ctx.set_gpr(31, 0x08855AD0u);
    ctx.set_gpr(4, rt.memory().aot_load32(ctx.gpr[20] + static_cast<std::uint32_t>(32136)));
    if (rt.invoke_chained_direct<&recomp_unit_0022_entry, 22u, 489u, 0x0885DDBCu>(ctx, &aot_mem) && ctx.pc == 0x08855AD0u) goto L_08855AD0;
    return;
L_08855AD0:
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_088570B0;
      }
      goto L_08855AD8;
    }
L_08855AD8:
    ctx.set_gpr(31, 0x08855AE0u);
    ctx.set_gpr(5, 0u + 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0022_entry, 22u, 489u, 0x0885DDBCu>(ctx, &aot_mem) && ctx.pc == 0x08855AE0u) goto L_08855AE0;
    return;
L_08855AE0:
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_088570B0;
      }
      goto L_08855AE8;
    }
L_08855AE8:
    ctx.set_gpr(2, ctx.gpr[5] + static_cast<std::uint32_t>(1));
    ctx.set_gpr(31, 0x08855AF4u);
    rt.memory().aot_store32(ctx.gpr[20] + static_cast<std::uint32_t>(32012), ctx.gpr[2]);
    if (rt.invoke_chained_direct<&recomp_unit_0017_entry, 17u, 182u, 0x08848C18u>(ctx, &aot_mem) && ctx.pc == 0x08855AF4u) goto L_08855AF4;
    return;
L_08855AF4:
    ctx.set_gpr(31, 0x08855AFCu);
    ctx.set_gpr(4, ctx.gpr[2] + 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0023_entry, 23u, 486u, 0x08861D58u>(ctx, &aot_mem) && ctx.pc == 0x08855AFCu) goto L_08855AFC;
    return;
L_08855AFC:
    if (ctx.gpr[2] == 0u) {
    ctx.set_gpr(3, rt.memory().aot_load32(ctx.gpr[20] + static_cast<std::uint32_t>(32012)));
        goto L_08855B1C;
    }
    goto L_08855B04;
L_08855B04:
    ctx.set_gpr(2, 2226u << 16u);
    ctx.set_gpr(3, rt.memory().aot_load32(ctx.gpr[20] + static_cast<std::uint32_t>(32012)));
    ctx.set_gpr(2, rt.memory().aot_load32(ctx.gpr[2] + static_cast<std::uint32_t>(16520)));
    ctx.set_gpr(2, ctx.gpr[3] + ctx.gpr[2]);
    { const bool branch_taken = 0u == 0u;
    rt.memory().aot_store32(ctx.gpr[20] + static_cast<std::uint32_t>(32012), ctx.gpr[2]);
      if (branch_taken) {
          goto L_088570B0;
      }
      goto L_08855B1C;
    }
L_08855B1C:
    ctx.set_gpr(2, 49568u << 16u);
    ctx.fpr[14] = std::bit_cast<float>(ctx.gpr[2]);
    ctx.set_gpr(2, ctx.gpr[3] + static_cast<std::uint32_t>(1));
    rt.memory().aot_store32(ctx.gpr[20] + static_cast<std::uint32_t>(32012), ctx.gpr[2]);
    ctx.set_gpr(2, ctx.gpr[3] << 2u);
    ctx.set_gpr(2, ctx.gpr[2] + ctx.gpr[20]);
    ctx.set_gpr(16, rt.memory().aot_load32(ctx.gpr[2] + static_cast<std::uint32_t>(12)));
    ctx.fpr[12] = std::bit_cast<float>(0u);
    ctx.set_gpr(4, ctx.gpr[29] + static_cast<std::uint32_t>(712));
    ctx.set_gpr(31, 0x08855B48u);
    ctx.set_fpr_bits(13, ctx.fpr_bits(12));
    if (rt.invoke_chained_direct<&recomp_unit_0014_entry, 14u, 607u, 0x0883EAF0u>(ctx, &aot_mem) && ctx.pc == 0x08855B48u) goto L_08855B48;
    return;
L_08855B48:
    ctx.set_gpr(5, rt.memory().aot_load32(ctx.gpr[20] + static_cast<std::uint32_t>(32124)));
    ctx.set_gpr(4, ctx.gpr[29] + static_cast<std::uint32_t>(384));
    ctx.set_gpr(31, 0x08855B58u);
    ctx.set_gpr(6, 0u + 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0015_entry, 15u, 864u, 0x08843A1Cu>(ctx, &aot_mem) && ctx.pc == 0x08855B58u) goto L_08855B58;
    return;
L_08855B58:
    ctx.set_gpr(4, ctx.gpr[29] + static_cast<std::uint32_t>(800));
    ctx.set_gpr(31, 0x08855B64u);
    ctx.set_gpr(5, ctx.gpr[29] + static_cast<std::uint32_t>(384));
    if (rt.invoke_chained_direct<&recomp_unit_0015_entry, 15u, 862u, 0x088439F4u>(ctx, &aot_mem) && ctx.pc == 0x08855B64u) goto L_08855B64;
    return;
L_08855B64:
    ctx.set_gpr(4, ctx.gpr[29] + static_cast<std::uint32_t>(712));
    ctx.set_gpr(5, ctx.gpr[4] + 0u);
    ctx.set_gpr(31, 0x08855B74u);
    ctx.set_gpr(6, ctx.gpr[29] + static_cast<std::uint32_t>(800));
    if (rt.invoke_chained_direct<&recomp_unit_0127_entry, 127u, 271u, 0x08A03244u>(ctx, &aot_mem) && ctx.pc == 0x08855B74u) goto L_08855B74;
    return;
L_08855B74:
    ctx.set_gpr(3, rt.memory().aot_load32(ctx.gpr[20] + static_cast<std::uint32_t>(32012)));
    ctx.set_gpr(2, 14979u << 16u);
    ctx.set_gpr(2, ctx.gpr[2] | 4719u);
    ctx.fpr[2] = std::bit_cast<float>(ctx.gpr[2]);
    ctx.set_gpr(2, ctx.gpr[3] << 2u);
    ctx.set_gpr(4, ctx.gpr[3] + static_cast<std::uint32_t>(1));
    ctx.fpr[3] = std::bit_cast<float>(rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(720)));
    ctx.set_gpr(2, ctx.gpr[2] + ctx.gpr[20]);
    ctx.set_gpr(3, ctx.gpr[4] + static_cast<std::uint32_t>(1));
    rt.memory().aot_store32(ctx.gpr[20] + static_cast<std::uint32_t>(32012), ctx.gpr[4]);
    ctx.fpr[0] = std::bit_cast<float>(rt.memory().aot_load32(ctx.gpr[2] + static_cast<std::uint32_t>(12)));
    ctx.fpr[1] = static_cast<float>(static_cast<std::int32_t>(ctx.fpr_bits(0)));
    ctx.set_gpr(2, ctx.gpr[4] << 2u);
    rt.memory().aot_store32(ctx.gpr[20] + static_cast<std::uint32_t>(32012), ctx.gpr[3]);
    ctx.set_gpr(2, ctx.gpr[2] + ctx.gpr[20]);
    ctx.fpr[0] = std::bit_cast<float>(rt.memory().aot_load32(ctx.gpr[2] + static_cast<std::uint32_t>(12)));
    { const float fs = ctx.fpr[2]; const float ft = ctx.fpr[1]; if ((std::isinf(fs) && ft == 0.0f) || (std::isinf(ft) && fs == 0.0f)) ctx.set_fpr_bits(1, 0x7FC00000u); else ctx.fpr[1] = fs * ft; }
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(720), std::bit_cast<std::uint32_t>(ctx.fpr[3]));
    ctx.fpr[0] = static_cast<float>(static_cast<std::int32_t>(ctx.fpr_bits(0)));
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(712), std::bit_cast<std::uint32_t>(ctx.fpr[1]));
    { const float fs = ctx.fpr[2]; const float ft = ctx.fpr[0]; if ((std::isinf(fs) && ft == 0.0f) || (std::isinf(ft) && fs == 0.0f)) ctx.set_fpr_bits(0, 0x7FC00000u); else ctx.fpr[0] = fs * ft; }
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(716), std::bit_cast<std::uint32_t>(ctx.fpr[0]));
    ctx.set_gpr(3, rt.memory().aot_load32(ctx.gpr[20] + static_cast<std::uint32_t>(32012)));
    ctx.fpr[0] = std::bit_cast<float>(0u);
    ctx.set_gpr(2, ctx.gpr[3] + static_cast<std::uint32_t>(1));
    rt.memory().aot_store32(ctx.gpr[20] + static_cast<std::uint32_t>(32012), ctx.gpr[2]);
    ctx.set_gpr(2, ctx.gpr[3] << 2u);
    ctx.set_gpr(2, ctx.gpr[2] + ctx.gpr[20]);
    ctx.fpr[1] = std::bit_cast<float>(rt.memory().aot_load32(ctx.gpr[2] + static_cast<std::uint32_t>(12)));
    ctx.fpr[1] = static_cast<float>(static_cast<std::int32_t>(ctx.fpr_bits(1)));
    { const float fs = ctx.fpr[2]; const float ft = ctx.fpr[1]; if ((std::isinf(fs) && ft == 0.0f) || (std::isinf(ft) && fs == 0.0f)) ctx.set_fpr_bits(1, 0x7FC00000u); else ctx.fpr[1] = fs * ft; }
    ctx.set_fpu_condition((ctx.fpr[1] < ctx.fpr[0]));
    // nop
    if (!ctx.fpu_condition()) {
    ctx.set_gpr(2, 17204u << 16u);
        goto L_08855C10;
    }
    goto L_08855C00;
L_08855C00:
    ctx.set_gpr(2, 49972u << 16u);
    ctx.fpr[0] = std::bit_cast<float>(ctx.gpr[2]);
    { const bool branch_taken = 0u == 0u;
    ctx.fpr[20] = ctx.fpr[0] - ctx.fpr[1];
      if (branch_taken) {
          goto L_08855C18;
      }
      goto L_08855C10;
    }
L_08855C10:
    ctx.fpr[0] = std::bit_cast<float>(ctx.gpr[2]);
    ctx.fpr[20] = ctx.fpr[0] - ctx.fpr[1];
    goto L_08855C18;
L_08855C18:
    ctx.set_gpr(2, 15502u << 16u);
    ctx.set_gpr(2, ctx.gpr[2] | 64053u);
    ctx.fpr[0] = std::bit_cast<float>(ctx.gpr[2]);
    { const float fs = ctx.fpr[20]; const float ft = ctx.fpr[0]; if ((std::isinf(fs) && ft == 0.0f) || (std::isinf(ft) && fs == 0.0f)) ctx.set_fpr_bits(20, 0x7FC00000u); else ctx.fpr[20] = fs * ft; }
    ctx.set_gpr(31, 0x08855C30u);
    ctx.set_fpr_bits(12, ctx.fpr_bits(20));
    goto L_088571F0;
L_08855C30:
    ctx.set_fpr_bits(12, ctx.fpr_bits(20));
    ctx.set_gpr(31, 0x08855C3Cu);
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(724), std::bit_cast<std::uint32_t>(ctx.fpr[0]));
    goto L_088571E8;
L_08855C3C:
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(728), std::bit_cast<std::uint32_t>(ctx.fpr[0]));
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(732), 0u);
    ctx.set_gpr(2, 14979u << 16u);
    ctx.set_gpr(2, ctx.gpr[2] | 4719u);
    ctx.set_gpr(3, rt.memory().aot_load32(ctx.gpr[20] + static_cast<std::uint32_t>(32012)));
    ctx.fpr[0] = std::bit_cast<float>(ctx.gpr[2]);
    ctx.set_gpr(4, ctx.gpr[29] + static_cast<std::uint32_t>(724));
    ctx.set_gpr(2, ctx.gpr[3] + static_cast<std::uint32_t>(1));
    rt.memory().aot_store32(ctx.gpr[20] + static_cast<std::uint32_t>(32012), ctx.gpr[2]);
    ctx.set_gpr(2, ctx.gpr[3] << 2u);
    ctx.set_gpr(2, ctx.gpr[2] + ctx.gpr[20]);
    ctx.fpr[1] = std::bit_cast<float>(rt.memory().aot_load32(ctx.gpr[2] + static_cast<std::uint32_t>(12)));
    ctx.fpr[1] = static_cast<float>(static_cast<std::int32_t>(ctx.fpr_bits(1)));
    ctx.set_gpr(31, 0x08855C78u);
    { const float fs = ctx.fpr[0]; const float ft = ctx.fpr[1]; if ((std::isinf(fs) && ft == 0.0f) || (std::isinf(ft) && fs == 0.0f)) ctx.set_fpr_bits(12, 0x7FC00000u); else ctx.fpr[12] = fs * ft; }
    if (rt.invoke_chained_direct<&recomp_unit_0017_entry, 17u, 651u, 0x0884A6B8u>(ctx, &aot_mem) && ctx.pc == 0x08855C78u) goto L_08855C78;
    return;
L_08855C78:
    ctx.set_gpr(4, ctx.gpr[29] + static_cast<std::uint32_t>(724));
    ctx.set_gpr(31, 0x08855C84u);
    ctx.set_gpr(5, ctx.gpr[29] + static_cast<std::uint32_t>(712));
    if (rt.invoke_chained_direct<&recomp_unit_0017_entry, 17u, 777u, 0x0884AD38u>(ctx, &aot_mem) && ctx.pc == 0x08855C84u) goto L_08855C84;
    return;
L_08855C84:
    ctx.set_gpr(4, ctx.gpr[29] + static_cast<std::uint32_t>(736));
    ctx.set_gpr(31, 0x08855C90u);
    ctx.set_gpr(5, ctx.gpr[29] + static_cast<std::uint32_t>(448));
    if (rt.invoke_chained_direct<&recomp_unit_0016_entry, 16u, 539u, 0x08847464u>(ctx, &aot_mem) && ctx.pc == 0x08855C90u) goto L_08855C90;
    return;
L_08855C90:
    ctx.set_gpr(4, ctx.gpr[29] + static_cast<std::uint32_t>(736));
    ctx.set_gpr(31, 0x08855C9Cu);
    ctx.set_gpr(5, ctx.gpr[4] + 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0127_entry, 127u, 124u, 0x08A019A0u>(ctx, &aot_mem) && ctx.pc == 0x08855C9Cu) goto L_08855C9C;
    return;
L_08855C9C:
    ctx.set_gpr(4, ctx.gpr[29] + static_cast<std::uint32_t>(712));
    ctx.set_gpr(5, ctx.gpr[4] + 0u);
    ctx.set_gpr(31, 0x08855CACu);
    ctx.set_gpr(6, ctx.gpr[29] + static_cast<std::uint32_t>(736));
    if (rt.invoke_chained_direct<&recomp_unit_0127_entry, 127u, 271u, 0x08A03244u>(ctx, &aot_mem) && ctx.pc == 0x08855CACu) goto L_08855CAC;
    return;
L_08855CAC:
    ctx.set_gpr(4, ctx.gpr[29] + static_cast<std::uint32_t>(800));
    ctx.set_gpr(31, 0x08855CB8u);
    ctx.set_gpr(5, ctx.gpr[4] + 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0127_entry, 127u, 124u, 0x08A019A0u>(ctx, &aot_mem) && ctx.pc == 0x08855CB8u) goto L_08855CB8;
    return;
L_08855CB8:
    ctx.set_gpr(4, ctx.gpr[29] + static_cast<std::uint32_t>(712));
    ctx.set_gpr(5, ctx.gpr[4] + 0u);
    ctx.set_gpr(31, 0x08855CC8u);
    ctx.set_gpr(6, ctx.gpr[29] + static_cast<std::uint32_t>(800));
    if (rt.invoke_chained_direct<&recomp_unit_0127_entry, 127u, 271u, 0x08A03244u>(ctx, &aot_mem) && ctx.pc == 0x08855CC8u) goto L_08855CC8;
    return;
L_08855CC8:
    ctx.set_gpr(31, 0x08855CD0u);
    ctx.set_gpr(4, rt.memory().aot_load32(ctx.gpr[20] + static_cast<std::uint32_t>(32144)));
    goto L_088571E0;
L_08855CD0:
    ctx.set_gpr(5, ctx.gpr[2] + 0u);
    ctx.set_gpr(31, 0x08855CDCu);
    ctx.set_gpr(4, ctx.gpr[29] + static_cast<std::uint32_t>(864));
    if (rt.invoke_chained_direct<&recomp_unit_0127_entry, 127u, 124u, 0x08A019A0u>(ctx, &aot_mem) && ctx.pc == 0x08855CDCu) goto L_08855CDC;
    return;
L_08855CDC:
    ctx.set_gpr(4, ctx.gpr[29] + static_cast<std::uint32_t>(712));
    ctx.set_gpr(5, ctx.gpr[4] + 0u);
    ctx.set_gpr(31, 0x08855CECu);
    ctx.set_gpr(6, ctx.gpr[29] + static_cast<std::uint32_t>(864));
    if (rt.invoke_chained_direct<&recomp_unit_0127_entry, 127u, 271u, 0x08A03244u>(ctx, &aot_mem) && ctx.pc == 0x08855CECu) goto L_08855CEC;
    return;
L_08855CEC:
    ctx.set_gpr(4, ctx.gpr[29] + static_cast<std::uint32_t>(724));
    ctx.set_gpr(5, ctx.gpr[4] + 0u);
    ctx.set_gpr(31, 0x08855CFCu);
    ctx.set_gpr(6, ctx.gpr[29] + static_cast<std::uint32_t>(736));
    if (rt.invoke_chained_direct<&recomp_unit_0127_entry, 127u, 271u, 0x08A03244u>(ctx, &aot_mem) && ctx.pc == 0x08855CFCu) goto L_08855CFC;
    return;
L_08855CFC:
    ctx.set_gpr(4, ctx.gpr[29] + static_cast<std::uint32_t>(724));
    ctx.set_gpr(5, ctx.gpr[4] + 0u);
    ctx.set_gpr(31, 0x08855D0Cu);
    ctx.set_gpr(6, ctx.gpr[29] + static_cast<std::uint32_t>(800));
    if (rt.invoke_chained_direct<&recomp_unit_0127_entry, 127u, 271u, 0x08A03244u>(ctx, &aot_mem) && ctx.pc == 0x08855D0Cu) goto L_08855D0C;
    return;
L_08855D0C:
    ctx.set_gpr(4, ctx.gpr[29] + static_cast<std::uint32_t>(724));
    ctx.set_gpr(5, ctx.gpr[4] + 0u);
    ctx.set_gpr(31, 0x08855D1Cu);
    ctx.set_gpr(6, ctx.gpr[29] + static_cast<std::uint32_t>(864));
    if (rt.invoke_chained_direct<&recomp_unit_0127_entry, 127u, 271u, 0x08A03244u>(ctx, &aot_mem) && ctx.pc == 0x08855D1Cu) goto L_08855D1C;
    return;
L_08855D1C:
    ctx.fpr[12] = std::bit_cast<float>(rt.memory().aot_load32(ctx.gpr[21] + static_cast<std::uint32_t>(0)));
    ctx.set_gpr(4, rt.memory().aot_load32(ctx.gpr[20] + static_cast<std::uint32_t>(32144)));
    ctx.set_gpr(5, ctx.gpr[16] + 0u);
    ctx.set_gpr(8, ctx.gpr[19] + 0u);
    ctx.set_gpr(9, ctx.gpr[18] + 0u);
    ctx.set_gpr(6, ctx.gpr[29] + static_cast<std::uint32_t>(712));
    ctx.set_gpr(31, 0x08855D3Cu);
    ctx.set_gpr(7, ctx.gpr[29] + static_cast<std::uint32_t>(724));
    if (rt.invoke_chained_direct<&recomp_unit_0021_entry, 21u, 312u, 0x088595D8u>(ctx, &aot_mem) && ctx.pc == 0x08855D3Cu) goto L_08855D3C;
    return;
L_08855D3C:
    ctx.set_gpr(4, rt.memory().aot_load32(ctx.gpr[20] + static_cast<std::uint32_t>(32012)));
    ctx.set_gpr(3, 14979u << 16u);
    ctx.set_gpr(3, ctx.gpr[3] | 4719u);
    ctx.fpr[0] = std::bit_cast<float>(ctx.gpr[3]);
    ctx.set_gpr(5, ctx.gpr[4] + static_cast<std::uint32_t>(1));
    ctx.set_gpr(3, ctx.gpr[4] << 2u);
    ctx.set_gpr(3, ctx.gpr[3] + ctx.gpr[20]);
    rt.memory().aot_store32(ctx.gpr[20] + static_cast<std::uint32_t>(32012), ctx.gpr[5]);
    ctx.fpr[1] = std::bit_cast<float>(rt.memory().aot_load32(ctx.gpr[3] + static_cast<std::uint32_t>(12)));
    ctx.set_gpr(4, ctx.gpr[5] + static_cast<std::uint32_t>(1));
    ctx.fpr[1] = static_cast<float>(static_cast<std::int32_t>(ctx.fpr_bits(1)));
    ctx.set_gpr(3, ctx.gpr[5] << 2u);
    rt.memory().aot_store32(ctx.gpr[20] + static_cast<std::uint32_t>(32012), ctx.gpr[4]);
    ctx.set_gpr(3, ctx.gpr[3] + ctx.gpr[20]);
    ctx.set_gpr(4, rt.memory().aot_load32(ctx.gpr[3] + static_cast<std::uint32_t>(12)));
    ctx.set_gpr(3, 0u + static_cast<std::uint32_t>(-1));
    { const bool branch_taken = ctx.gpr[2] == ctx.gpr[3];
    { const float fs = ctx.fpr[0]; const float ft = ctx.fpr[1]; if ((std::isinf(fs) && ft == 0.0f) || (std::isinf(ft) && fs == 0.0f)) ctx.set_fpr_bits(12, 0x7FC00000u); else ctx.fpr[12] = fs * ft; }
      if (branch_taken) {
          goto L_088570B0;
      }
      goto L_08855D84;
    }
L_08855D84:
    ctx.fpr[0] = std::bit_cast<float>(ctx.gpr[4]);
    ctx.fpr[13] = static_cast<float>(static_cast<std::int32_t>(ctx.fpr_bits(0)));
    ctx.set_gpr(4, rt.memory().aot_load32(ctx.gpr[20] + static_cast<std::uint32_t>(32144)));
    ctx.set_gpr(31, 0x08855D98u);
    ctx.set_gpr(5, ctx.gpr[2] + 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0021_entry, 21u, 423u, 0x08859C3Cu>(ctx, &aot_mem) && ctx.pc == 0x08855D98u) goto L_08855D98;
    return;
L_08855D98:
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_088570B0;
      }
      goto L_08855DA0;
    }
L_08855DA0:
    ctx.set_gpr(2, ctx.gpr[5] + static_cast<std::uint32_t>(1));
    ctx.set_gpr(5, ctx.gpr[2] + static_cast<std::uint32_t>(1));
    rt.memory().aot_store32(ctx.gpr[20] + static_cast<std::uint32_t>(32012), ctx.gpr[2]);
    ctx.set_gpr(2, ctx.gpr[2] << 2u);
    ctx.set_gpr(2, ctx.gpr[2] + ctx.gpr[20]);
    rt.memory().aot_store32(ctx.gpr[20] + static_cast<std::uint32_t>(32012), ctx.gpr[5]);
    ctx.set_gpr(4, rt.memory().aot_load32(ctx.gpr[2] + static_cast<std::uint32_t>(12)));
    ctx.set_gpr(3, ctx.gpr[5] + static_cast<std::uint32_t>(1));
    ctx.set_gpr(2, ctx.gpr[5] << 2u);
    rt.memory().aot_store32(ctx.gpr[20] + static_cast<std::uint32_t>(32012), ctx.gpr[3]);
    ctx.set_gpr(2, ctx.gpr[2] + ctx.gpr[20]);
    ctx.set_gpr(2, rt.memory().aot_load32(ctx.gpr[2] + static_cast<std::uint32_t>(12)));
    if (ctx.gpr[2] != 0u) {
    ctx.fpr[0] = std::bit_cast<float>(ctx.gpr[2]);
        goto L_08855DE4;
    }
    goto L_08855DD8;
L_08855DD8:
    ctx.set_gpr(2, 49024u << 16u);
    { const bool branch_taken = 0u == 0u;
    ctx.fpr[12] = std::bit_cast<float>(ctx.gpr[2]);
      if (branch_taken) {
          goto L_08855DE8;
      }
      goto L_08855DE4;
    }
L_08855DE4:
    ctx.fpr[12] = static_cast<float>(static_cast<std::int32_t>(ctx.fpr_bits(0)));
    goto L_08855DE8;
L_08855DE8:
    ctx.set_gpr(3, rt.memory().aot_load8(ctx.gpr[20] + static_cast<std::uint32_t>(32088)));
    ctx.set_gpr(2, 0u + static_cast<std::uint32_t>(1));
    { const bool branch_taken = ctx.gpr[3] != ctx.gpr[2];
    ctx.set_gpr(5, ctx.gpr[4] + static_cast<std::uint32_t>(5));
      if (branch_taken) {
          goto L_08855E38;
      }
      goto L_08855DF8;
    }
L_08855DF8:
    ctx.set_gpr(2, rt.memory().aot_load32(ctx.gpr[20] + static_cast<std::uint32_t>(32092)));
    if (ctx.gpr[5] != ctx.gpr[2]) {
    ctx.set_gpr(4, rt.memory().aot_load32(ctx.gpr[20] + static_cast<std::uint32_t>(32136)));
        goto L_08855E3C;
    }
    goto L_08855E04;
L_08855E04:
    ctx.set_gpr(4, rt.memory().aot_load32(ctx.gpr[20] + static_cast<std::uint32_t>(32136)));
    ctx.set_gpr(6, rt.memory().aot_load32(ctx.gpr[20] + static_cast<std::uint32_t>(32096)));
    ctx.set_gpr(2, rt.memory().aot_load32(ctx.gpr[20] + static_cast<std::uint32_t>(32100)));
    ctx.set_gpr(25, rt.memory().aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(200)));
    ctx.set_gpr(3, ctx.gpr[19] < ctx.gpr[6] ? 1u : 0u);
    ctx.set_gpr(2, ctx.gpr[18] - ctx.gpr[2]);
    ctx.set_gpr(25, rt.memory().aot_load32(ctx.gpr[25] + static_cast<std::uint32_t>(24)));
    ctx.set_gpr(6, ctx.gpr[19] - ctx.gpr[6]);
    ctx.set_gpr(7, ctx.gpr[2] - ctx.gpr[3]);
    jump_target = ctx.gpr[25];
    ctx.set_gpr(31, 0x08855E30u);
    ctx.set_gpr(8, 0u + 0u);
    ctx.pc = jump_target;
    if (rt.invoke_chained_call(ctx, &aot_mem) && ctx.pc == 0x08855E30u) goto L_08855E30;
    return;
L_08855E30:
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_088570B0;
      }
      goto L_08855E38;
    }
L_08855E38:
    ctx.set_gpr(4, rt.memory().aot_load32(ctx.gpr[20] + static_cast<std::uint32_t>(32136)));
    goto L_08855E3C;
L_08855E3C:
    ctx.set_gpr(6, 0u + 0u);
    ctx.set_gpr(7, 0u + 0u);
    ctx.set_gpr(25, rt.memory().aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(200)));
    ctx.set_gpr(25, rt.memory().aot_load32(ctx.gpr[25] + static_cast<std::uint32_t>(24)));
    jump_target = ctx.gpr[25];
    ctx.set_gpr(31, 0x08855E54u);
    ctx.set_gpr(8, 0u + 0u);
    ctx.pc = jump_target;
    if (rt.invoke_chained_call(ctx, &aot_mem) && ctx.pc == 0x08855E54u) goto L_08855E54;
    return;
L_08855E54:
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_088570B0;
      }
      goto L_08855E5C;
    }
L_08855E5C:
    ctx.set_gpr(3, ctx.gpr[5] + static_cast<std::uint32_t>(1));
    rt.memory().aot_store32(ctx.gpr[20] + static_cast<std::uint32_t>(32012), ctx.gpr[3]);
    ctx.set_gpr(2, ctx.gpr[3] + static_cast<std::uint32_t>(1));
    rt.memory().aot_store32(ctx.gpr[20] + static_cast<std::uint32_t>(32012), ctx.gpr[2]);
    ctx.set_gpr(2, ctx.gpr[3] << 2u);
    ctx.set_gpr(2, ctx.gpr[2] + ctx.gpr[20]);
    ctx.set_gpr(2, rt.memory().aot_load32(ctx.gpr[2] + static_cast<std::uint32_t>(12)));
    if (static_cast<std::int32_t>(ctx.gpr[2]) >= 0) {
    ctx.set_gpr(2, ctx.gpr[2] + static_cast<std::uint32_t>(5));
        goto L_08855E90;
    }
    goto L_08855E80;
L_08855E80:
    ctx.set_gpr(31, 0x08855E88u);
    ctx.set_gpr(4, ctx.gpr[20] + static_cast<std::uint32_t>(32088));
    if (rt.invoke_chained_direct<&recomp_unit_0019_entry, 19u, 946u, 0x08853D5Cu>(ctx, &aot_mem) && ctx.pc == 0x08855E88u) goto L_08855E88;
    return;
L_08855E88:
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_088570B0;
      }
      goto L_08855E90;
    }
L_08855E90:
    rt.memory().aot_store32(ctx.gpr[20] + static_cast<std::uint32_t>(32092), ctx.gpr[2]);
    rt.memory().aot_store32(ctx.gpr[20] + static_cast<std::uint32_t>(32096), ctx.gpr[19]);
    rt.memory().aot_store32(ctx.gpr[20] + static_cast<std::uint32_t>(32100), ctx.gpr[18]);
    ctx.set_gpr(2, 0u + static_cast<std::uint32_t>(1));
    { const bool branch_taken = 0u == 0u;
    rt.memory().aot_store8(ctx.gpr[20] + static_cast<std::uint32_t>(32088), static_cast<std::uint8_t>(ctx.gpr[2]));
      if (branch_taken) {
          goto L_088570B0;
      }
      goto L_08855EA8;
    }
L_08855EA8:
    ctx.set_gpr(2, ctx.gpr[5] + static_cast<std::uint32_t>(1));
    ctx.set_gpr(3, ctx.gpr[2] + static_cast<std::uint32_t>(1));
    rt.memory().aot_store32(ctx.gpr[20] + static_cast<std::uint32_t>(32012), ctx.gpr[2]);
    ctx.set_gpr(2, ctx.gpr[2] << 2u);
    ctx.set_gpr(2, ctx.gpr[2] + ctx.gpr[20]);
    rt.memory().aot_store32(ctx.gpr[20] + static_cast<std::uint32_t>(32012), ctx.gpr[3]);
    ctx.set_gpr(17, rt.memory().aot_load32(ctx.gpr[2] + static_cast<std::uint32_t>(12)));
    ctx.set_gpr(5, ctx.gpr[3] + static_cast<std::uint32_t>(1));
    ctx.set_gpr(2, ctx.gpr[3] << 2u);
    ctx.set_gpr(2, ctx.gpr[2] + ctx.gpr[20]);
    rt.memory().aot_store32(ctx.gpr[20] + static_cast<std::uint32_t>(32012), ctx.gpr[5]);
    ctx.fpr[0] = std::bit_cast<float>(rt.memory().aot_load32(ctx.gpr[2] + static_cast<std::uint32_t>(12)));
    ctx.set_gpr(3, ctx.gpr[5] + static_cast<std::uint32_t>(1));
    ctx.set_gpr(2, 14979u << 16u);
    ctx.set_gpr(4, ctx.gpr[2] | 4719u);
    ctx.fpr[2] = std::bit_cast<float>(ctx.gpr[4]);
    ctx.fpr[1] = static_cast<float>(static_cast<std::int32_t>(ctx.fpr_bits(0)));
    ctx.set_gpr(2, ctx.gpr[5] << 2u);
    ctx.set_gpr(2, ctx.gpr[2] + ctx.gpr[20]);
    rt.memory().aot_store32(ctx.gpr[20] + static_cast<std::uint32_t>(32012), ctx.gpr[3]);
    ctx.set_gpr(4, ctx.gpr[3] + static_cast<std::uint32_t>(1));
    ctx.fpr[0] = std::bit_cast<float>(rt.memory().aot_load32(ctx.gpr[2] + static_cast<std::uint32_t>(12)));
    { const float fs = ctx.fpr[2]; const float ft = ctx.fpr[1]; if ((std::isinf(fs) && ft == 0.0f) || (std::isinf(ft) && fs == 0.0f)) ctx.set_fpr_bits(20, 0x7FC00000u); else ctx.fpr[20] = fs * ft; }
    ctx.set_gpr(2, ctx.gpr[3] << 2u);
    ctx.set_gpr(2, ctx.gpr[2] + ctx.gpr[20]);
    rt.memory().aot_store32(ctx.gpr[20] + static_cast<std::uint32_t>(32012), ctx.gpr[4]);
    ctx.fpr[1] = static_cast<float>(static_cast<std::int32_t>(ctx.fpr_bits(0)));
    ctx.set_gpr(3, ctx.gpr[4] + static_cast<std::uint32_t>(1));
    ctx.fpr[0] = std::bit_cast<float>(rt.memory().aot_load32(ctx.gpr[2] + static_cast<std::uint32_t>(12)));
    { const float fs = ctx.fpr[2]; const float ft = ctx.fpr[1]; if ((std::isinf(fs) && ft == 0.0f) || (std::isinf(ft) && fs == 0.0f)) ctx.set_fpr_bits(21, 0x7FC00000u); else ctx.fpr[21] = fs * ft; }
    ctx.set_gpr(2, ctx.gpr[4] << 2u);
    rt.memory().aot_store32(ctx.gpr[20] + static_cast<std::uint32_t>(32012), ctx.gpr[3]);
    ctx.set_gpr(2, ctx.gpr[2] + ctx.gpr[20]);
    ctx.fpr[0] = static_cast<float>(static_cast<std::int32_t>(ctx.fpr_bits(0)));
    ctx.set_gpr(16, rt.memory().aot_load32(ctx.gpr[2] + static_cast<std::uint32_t>(12)));
    ctx.set_gpr(31, 0x08855F3Cu);
    { const float fs = ctx.fpr[2]; const float ft = ctx.fpr[0]; if ((std::isinf(fs) && ft == 0.0f) || (std::isinf(ft) && fs == 0.0f)) ctx.set_fpr_bits(22, 0x7FC00000u); else ctx.fpr[22] = fs * ft; }
    if (rt.invoke_chained_direct<&recomp_unit_0017_entry, 17u, 182u, 0x08848C18u>(ctx, &aot_mem) && ctx.pc == 0x08855F3Cu) goto L_08855F3C;
    return;
L_08855F3C:
    ctx.set_gpr(31, 0x08855F44u);
    ctx.set_gpr(4, ctx.gpr[2] + 0u);
    goto L_088571D0;
L_08855F44:
    { const bool branch_taken = ctx.gpr[2] != 0u;
    // nop
      if (branch_taken) {
          goto L_088570B0;
      }
      goto L_08855F4C;
    }
L_08855F4C:
    ctx.set_gpr(31, 0x08855F54u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0017_entry, 17u, 182u, 0x08848C18u>(ctx, &aot_mem) && ctx.pc == 0x08855F54u) goto L_08855F54;
    return;
L_08855F54:
    ctx.set_gpr(31, 0x08855F5Cu);
    ctx.set_gpr(4, ctx.gpr[2] + 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0023_entry, 23u, 485u, 0x08861D50u>(ctx, &aot_mem) && ctx.pc == 0x08855F5Cu) goto L_08855F5C;
    return;
L_08855F5C:
    ctx.set_gpr(3, 0u + static_cast<std::uint32_t>(3));
    if (ctx.gpr[2] != ctx.gpr[3]) {
    ctx.set_gpr(4, rt.memory().aot_load32(ctx.gpr[20] + static_cast<std::uint32_t>(32140)));
        goto L_08855F8C;
    }
    goto L_08855F68;
L_08855F68:
    ctx.set_gpr(4, rt.memory().aot_load32(ctx.gpr[20] + static_cast<std::uint32_t>(32128)));
    ctx.set_gpr(31, 0x08855F74u);
    ctx.set_gpr(21, ctx.gpr[17] + static_cast<std::uint32_t>(-1));
    goto L_088571C8;
L_08855F74:
    ctx.set_gpr(2, ctx.gpr[2] << 2u);
    ctx.set_gpr(2, ctx.gpr[2] + ctx.gpr[29]);
    ctx.set_gpr(2, rt.memory().aot_load32(ctx.gpr[2] + static_cast<std::uint32_t>(512)));
    { const bool branch_taken = ctx.gpr[21] == ctx.gpr[2];
    // nop
      if (branch_taken) {
          goto L_088570B0;
      }
      goto L_08855F88;
    }
L_08855F88:
    ctx.set_gpr(4, rt.memory().aot_load32(ctx.gpr[20] + static_cast<std::uint32_t>(32140)));
    goto L_08855F8C;
L_08855F8C:
    ctx.set_gpr(2, ctx.gpr[17] + static_cast<std::uint32_t>(-1));
    ctx.set_gpr(31, 0x08855F98u);
    ctx.set_gpr(5, ctx.gpr[2] << 16u);
    if (rt.invoke_chained_direct<&recomp_unit_0019_entry, 19u, 941u, 0x08853CC4u>(ctx, &aot_mem) && ctx.pc == 0x08855F98u) goto L_08855F98;
    return;
L_08855F98:
    if (ctx.gpr[2] == 0u) {
    ctx.set_gpr(4, rt.memory().aot_load32(ctx.gpr[20] + static_cast<std::uint32_t>(32140)));
        goto L_088560B4;
    }
    goto L_08855FA0;
L_08855FA0:
    ctx.set_gpr(4, rt.memory().aot_load32(ctx.gpr[20] + static_cast<std::uint32_t>(32140)));
    ctx.set_gpr(5, ctx.gpr[17] + static_cast<std::uint32_t>(-1));
    ctx.set_gpr(6, ctx.gpr[19] + 0u);
    ctx.set_gpr(7, ctx.gpr[18] + 0u);
    ctx.set_gpr(8, 0u + static_cast<std::uint32_t>(5));
    ctx.set_gpr(31, 0x08855FBCu);
    ctx.set_gpr(9, 0u + 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0019_entry, 19u, 891u, 0x088538C4u>(ctx, &aot_mem) && ctx.pc == 0x08855FBCu) goto L_08855FBC;
    return;
L_08855FBC:
    ctx.set_gpr(4, rt.memory().aot_load32(ctx.gpr[20] + static_cast<std::uint32_t>(32140)));
    ctx.set_gpr(18, ctx.gpr[2] + 0u);
    ctx.set_gpr(31, 0x08855FCCu);
    ctx.set_gpr(5, ctx.gpr[18] + 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0019_entry, 19u, 940u, 0x08853C8Cu>(ctx, &aot_mem) && ctx.pc == 0x08855FCCu) goto L_08855FCC;
    return;
L_08855FCC:
    ctx.set_gpr(5, ctx.gpr[2] + 0u);
    ctx.set_gpr(31, 0x08855FD8u);
    ctx.set_gpr(4, ctx.gpr[29] + static_cast<std::uint32_t>(380));
    if (rt.invoke_chained_direct<&recomp_unit_0019_entry, 19u, 234u, 0x08850B30u>(ctx, &aot_mem) && ctx.pc == 0x08855FD8u) goto L_08855FD8;
    return;
L_08855FD8:
    ctx.set_gpr(31, 0x08855FE0u);
    ctx.set_gpr(4, ctx.gpr[29] + static_cast<std::uint32_t>(380));
    if (rt.invoke_chained_direct<&recomp_unit_0017_entry, 17u, 562u, 0x0884A27Cu>(ctx, &aot_mem) && ctx.pc == 0x08855FE0u) goto L_08855FE0;
    return;
L_08855FE0:
    ctx.set_gpr(31, 0x08855FE8u);
    ctx.set_gpr(4, ctx.gpr[2] + 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0017_entry, 17u, 560u, 0x0884A250u>(ctx, &aot_mem) && ctx.pc == 0x08855FE8u) goto L_08855FE8;
    return;
L_08855FE8:
    ctx.set_gpr(19, ctx.gpr[2] + 0u);
    ctx.set_gpr(4, ctx.gpr[29] + static_cast<std::uint32_t>(380));
    ctx.set_gpr(31, 0x08855FF8u);
    ctx.set_gpr(5, 0u + static_cast<std::uint32_t>(-1));
    if (rt.invoke_chained_direct<&recomp_unit_0017_entry, 17u, 563u, 0x0884A284u>(ctx, &aot_mem) && ctx.pc == 0x08855FF8u) goto L_08855FF8;
    return;
L_08855FF8:
    ctx.set_fpr_bits(12, ctx.fpr_bits(20));
    ctx.set_fpr_bits(13, ctx.fpr_bits(21));
    ctx.set_fpr_bits(14, ctx.fpr_bits(22));
    ctx.set_gpr(31, 0x0885600Cu);
    ctx.set_gpr(4, ctx.gpr[29] + static_cast<std::uint32_t>(712));
    if (rt.invoke_chained_direct<&recomp_unit_0014_entry, 14u, 607u, 0x0883EAF0u>(ctx, &aot_mem) && ctx.pc == 0x0885600Cu) goto L_0885600C;
    return;
L_0885600C:
    ctx.fpr[12] = std::bit_cast<float>(0u);
    ctx.set_gpr(4, ctx.gpr[29] + static_cast<std::uint32_t>(368));
    ctx.set_fpr_bits(13, ctx.fpr_bits(12));
    ctx.set_gpr(31, 0x08856020u);
    ctx.set_fpr_bits(14, ctx.fpr_bits(12));
    if (rt.invoke_chained_direct<&recomp_unit_0014_entry, 14u, 605u, 0x0883EAC8u>(ctx, &aot_mem) && ctx.pc == 0x08856020u) goto L_08856020;
    return;
L_08856020:
    ctx.set_gpr(17, ctx.gpr[2] + 0u);
    ctx.fpr[12] = std::bit_cast<float>(0u);
    ctx.set_gpr(2, 49024u << 16u);
    ctx.fpr[14] = std::bit_cast<float>(ctx.gpr[2]);
    ctx.set_gpr(4, ctx.gpr[29] + static_cast<std::uint32_t>(356));
    ctx.set_gpr(31, 0x0885603Cu);
    ctx.set_fpr_bits(13, ctx.fpr_bits(12));
    if (rt.invoke_chained_direct<&recomp_unit_0014_entry, 14u, 605u, 0x0883EAC8u>(ctx, &aot_mem) && ctx.pc == 0x0885603Cu) goto L_0885603C;
    return;
L_0885603C:
    ctx.set_gpr(21, ctx.gpr[2] + 0u);
    ctx.fpr[12] = std::bit_cast<float>(0u);
    ctx.set_gpr(2, 16256u << 16u);
    ctx.fpr[13] = std::bit_cast<float>(ctx.gpr[2]);
    ctx.set_gpr(4, ctx.gpr[29] + static_cast<std::uint32_t>(344));
    ctx.set_gpr(31, 0x08856058u);
    ctx.set_fpr_bits(14, ctx.fpr_bits(12));
    if (rt.invoke_chained_direct<&recomp_unit_0014_entry, 14u, 605u, 0x0883EAC8u>(ctx, &aot_mem) && ctx.pc == 0x08856058u) goto L_08856058;
    return;
L_08856058:
    ctx.set_gpr(5, ctx.gpr[17] + 0u);
    ctx.set_gpr(6, ctx.gpr[21] + 0u);
    ctx.set_gpr(7, ctx.gpr[2] + 0u);
    ctx.set_gpr(31, 0x0885606Cu);
    ctx.set_gpr(4, ctx.gpr[29] + static_cast<std::uint32_t>(736));
    if (rt.invoke_chained_direct<&recomp_unit_0127_entry, 127u, 82u, 0x08A00F60u>(ctx, &aot_mem) && ctx.pc == 0x0885606Cu) goto L_0885606C;
    return;
L_0885606C:
    ctx.set_gpr(31, 0x08856074u);
    ctx.set_gpr(4, rt.memory().aot_load32(ctx.gpr[20] + static_cast<std::uint32_t>(32132)));
    if (rt.invoke_chained_direct<&recomp_unit_0016_entry, 16u, 510u, 0x08847284u>(ctx, &aot_mem) && ctx.pc == 0x08856074u) goto L_08856074;
    return;
L_08856074:
    ctx.set_gpr(5, ctx.gpr[2] + 0u);
    ctx.set_gpr(31, 0x08856080u);
    ctx.set_gpr(4, ctx.gpr[29] + static_cast<std::uint32_t>(800));
    if (rt.invoke_chained_direct<&recomp_unit_0127_entry, 127u, 124u, 0x08A019A0u>(ctx, &aot_mem) && ctx.pc == 0x08856080u) goto L_08856080;
    return;
L_08856080:
    ctx.set_gpr(4, ctx.gpr[19] + 0u);
    ctx.set_gpr(31, 0x0885608Cu);
    ctx.set_gpr(5, ctx.gpr[29] + static_cast<std::uint32_t>(712));
    if (rt.invoke_chained_direct<&recomp_unit_0126_entry, 126u, 749u, 0x089FFD2Cu>(ctx, &aot_mem) && ctx.pc == 0x0885608Cu) goto L_0885608C;
    return;
L_0885608C:
    ctx.set_gpr(4, ctx.gpr[19] + 0u);
    ctx.set_gpr(5, ctx.gpr[19] + 0u);
    ctx.set_gpr(31, 0x0885609Cu);
    ctx.set_gpr(6, ctx.gpr[29] + static_cast<std::uint32_t>(736));
    if (rt.invoke_chained_direct<&recomp_unit_0126_entry, 126u, 727u, 0x089FF9E0u>(ctx, &aot_mem) && ctx.pc == 0x0885609Cu) goto L_0885609C;
    return;
L_0885609C:
    ctx.set_gpr(4, ctx.gpr[19] + 0u);
    ctx.set_gpr(5, ctx.gpr[19] + 0u);
    ctx.set_gpr(31, 0x088560ACu);
    ctx.set_gpr(6, ctx.gpr[29] + static_cast<std::uint32_t>(800));
    if (rt.invoke_chained_direct<&recomp_unit_0126_entry, 126u, 727u, 0x089FF9E0u>(ctx, &aot_mem) && ctx.pc == 0x088560ACu) goto L_088560AC;
    return;
L_088560AC:
    { const bool branch_taken = 0u == 0u;
    ctx.set_gpr(2, 0u + static_cast<std::uint32_t>(-1));
      if (branch_taken) {
          goto L_088560EC;
      }
      goto L_088560B4;
    }
L_088560B4:
    ctx.set_gpr(5, ctx.gpr[17] + static_cast<std::uint32_t>(-1));
    ctx.set_gpr(6, ctx.gpr[19] + 0u);
    ctx.set_gpr(7, ctx.gpr[18] + 0u);
    ctx.set_gpr(8, 0u + static_cast<std::uint32_t>(4));
    ctx.set_gpr(31, 0x088560CCu);
    ctx.set_gpr(9, 0u + 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0019_entry, 19u, 891u, 0x088538C4u>(ctx, &aot_mem) && ctx.pc == 0x088560CCu) goto L_088560CC;
    return;
L_088560CC:
    ctx.set_gpr(4, rt.memory().aot_load32(ctx.gpr[20] + static_cast<std::uint32_t>(32140)));
    ctx.set_gpr(18, ctx.gpr[2] + 0u);
    ctx.set_fpr_bits(12, ctx.fpr_bits(20));
    ctx.set_fpr_bits(13, ctx.fpr_bits(21));
    ctx.set_fpr_bits(14, ctx.fpr_bits(22));
    ctx.set_gpr(31, 0x088560E8u);
    ctx.set_gpr(5, ctx.gpr[18] + 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0019_entry, 19u, 936u, 0x08853C20u>(ctx, &aot_mem) && ctx.pc == 0x088560E8u) goto L_088560E8;
    return;
L_088560E8:
    ctx.set_gpr(2, 0u + static_cast<std::uint32_t>(-1));
    goto L_088560EC;
L_088560EC:
    { const bool branch_taken = ctx.gpr[16] == ctx.gpr[2];
    // nop
      if (branch_taken) {
          goto L_088570B0;
      }
      goto L_088560F4;
    }
L_088560F4:
    ctx.set_gpr(2, ctx.gpr[16] + static_cast<std::uint32_t>(-1));
    ctx.set_gpr(2, ctx.gpr[2] << 2u);
    ctx.set_gpr(2, ctx.gpr[2] + ctx.gpr[20]);
    { const bool branch_taken = 0u == 0u;
    rt.memory().aot_store32(ctx.gpr[2] + static_cast<std::uint32_t>(32044), ctx.gpr[18]);
      if (branch_taken) {
          goto L_088570B0;
      }
      goto L_08856108;
    }
L_08856108:
    ctx.set_gpr(2, ctx.gpr[5] + static_cast<std::uint32_t>(1));
    ctx.set_gpr(5, ctx.gpr[2] + static_cast<std::uint32_t>(1));
    rt.memory().aot_store32(ctx.gpr[20] + static_cast<std::uint32_t>(32012), ctx.gpr[2]);
    ctx.set_gpr(2, ctx.gpr[2] << 2u);
    ctx.set_gpr(2, ctx.gpr[2] + ctx.gpr[20]);
    rt.memory().aot_store32(ctx.gpr[20] + static_cast<std::uint32_t>(32012), ctx.gpr[5]);
    ctx.set_gpr(4, rt.memory().aot_load32(ctx.gpr[2] + static_cast<std::uint32_t>(12)));
    ctx.set_gpr(3, ctx.gpr[5] + static_cast<std::uint32_t>(1));
    ctx.set_gpr(2, ctx.gpr[5] << 2u);
    rt.memory().aot_store32(ctx.gpr[20] + static_cast<std::uint32_t>(32012), ctx.gpr[3]);
    ctx.set_gpr(2, ctx.gpr[2] + ctx.gpr[20]);
    ctx.fpr[0] = std::bit_cast<float>(rt.memory().aot_load32(ctx.gpr[2] + static_cast<std::uint32_t>(12)));
    ctx.set_gpr(5, ctx.gpr[4] + static_cast<std::uint32_t>(-1));
    ctx.set_gpr(4, rt.memory().aot_load32(ctx.gpr[20] + static_cast<std::uint32_t>(32148)));
    ctx.fpr[1] = static_cast<float>(static_cast<std::int32_t>(ctx.fpr_bits(0)));
    ctx.set_gpr(2, 14979u << 16u);
    ctx.set_gpr(2, ctx.gpr[2] | 4719u);
    ctx.fpr[0] = std::bit_cast<float>(ctx.gpr[2]);
    ctx.set_gpr(31, 0x08856158u);
    { const float fs = ctx.fpr[0]; const float ft = ctx.fpr[1]; if ((std::isinf(fs) && ft == 0.0f) || (std::isinf(ft) && fs == 0.0f)) ctx.set_fpr_bits(12, 0x7FC00000u); else ctx.fpr[12] = fs * ft; }
    if (rt.invoke_chained_direct<&recomp_unit_0022_entry, 22u, 959u, 0x0885FA64u>(ctx, &aot_mem) && ctx.pc == 0x08856158u) goto L_08856158;
    return;
L_08856158:
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_088570B0;
      }
      goto L_08856160;
    }
L_08856160:
    ctx.set_gpr(3, ctx.gpr[5] + static_cast<std::uint32_t>(1));
    rt.memory().aot_store32(ctx.gpr[20] + static_cast<std::uint32_t>(32012), ctx.gpr[3]);
    ctx.set_gpr(2, ctx.gpr[3] + static_cast<std::uint32_t>(1));
    rt.memory().aot_store32(ctx.gpr[20] + static_cast<std::uint32_t>(32012), ctx.gpr[2]);
    ctx.set_gpr(2, ctx.gpr[3] << 2u);
    ctx.set_gpr(2, ctx.gpr[2] + ctx.gpr[20]);
    ctx.set_gpr(2, rt.memory().aot_load32(ctx.gpr[2] + static_cast<std::uint32_t>(12)));
    ctx.set_gpr(4, rt.memory().aot_load32(ctx.gpr[20] + static_cast<std::uint32_t>(32140)));
    ctx.set_gpr(2, ctx.gpr[2] + static_cast<std::uint32_t>(-1));
    ctx.set_gpr(2, ctx.gpr[2] << 2u);
    ctx.set_gpr(2, ctx.gpr[2] + ctx.gpr[20]);
    ctx.set_gpr(5, rt.memory().aot_load32(ctx.gpr[2] + static_cast<std::uint32_t>(32044)));
    ctx.set_gpr(31, 0x08856198u);
    ctx.set_gpr(6, 0u + 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0019_entry, 19u, 909u, 0x08853A68u>(ctx, &aot_mem) && ctx.pc == 0x08856198u) goto L_08856198;
    return;
L_08856198:
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_088570B0;
      }
      goto L_088561A0;
    }
L_088561A0:
    ctx.set_gpr(2, ctx.gpr[5] + static_cast<std::uint32_t>(1));
    rt.memory().aot_store32(ctx.gpr[20] + static_cast<std::uint32_t>(32012), ctx.gpr[2]);
    ctx.set_gpr(2, rt.memory().aot_load32(ctx.gpr[20] + static_cast<std::uint32_t>(32164)));
    if (ctx.gpr[2] == 0u) {
    ctx.set_gpr(4, rt.memory().aot_load32(ctx.gpr[20] + static_cast<std::uint32_t>(32132)));
        goto L_088561CC;
    }
    goto L_088561B4;
L_088561B4:
    ctx.set_gpr(2, 2226u << 16u);
    ctx.set_gpr(3, rt.memory().aot_load32(ctx.gpr[20] + static_cast<std::uint32_t>(32012)));
    ctx.set_gpr(2, rt.memory().aot_load32(ctx.gpr[2] + static_cast<std::uint32_t>(16544)));
    ctx.set_gpr(2, ctx.gpr[3] + ctx.gpr[2]);
    { const bool branch_taken = 0u == 0u;
    rt.memory().aot_store32(ctx.gpr[20] + static_cast<std::uint32_t>(32012), ctx.gpr[2]);
      if (branch_taken) {
          goto L_088570B0;
      }
      goto L_088561CC;
    }
L_088561CC:
    ctx.set_gpr(31, 0x088561D4u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0017_entry, 17u, 455u, 0x08849BF0u>(ctx, &aot_mem) && ctx.pc == 0x088561D4u) goto L_088561D4;
    return;
L_088561D4:
    ctx.set_gpr(31, 0x088561DCu);
    ctx.set_gpr(4, rt.memory().aot_load32(ctx.gpr[20] + static_cast<std::uint32_t>(32124)));
    if (rt.invoke_chained_direct<&recomp_unit_0019_entry, 19u, 520u, 0x08851B1Cu>(ctx, &aot_mem) && ctx.pc == 0x088561DCu) goto L_088561DC;
    return;
L_088561DC:
    ctx.set_gpr(4, rt.memory().aot_load32(ctx.gpr[20] + static_cast<std::uint32_t>(32012)));
    ctx.set_gpr(2, 14979u << 16u);
    ctx.set_gpr(2, ctx.gpr[2] | 4719u);
    ctx.fpr[2] = std::bit_cast<float>(ctx.gpr[2]);
    ctx.set_gpr(3, ctx.gpr[4] + static_cast<std::uint32_t>(1));
    ctx.set_gpr(2, ctx.gpr[4] << 2u);
    ctx.set_gpr(2, ctx.gpr[2] + ctx.gpr[20]);
    rt.memory().aot_store32(ctx.gpr[20] + static_cast<std::uint32_t>(32012), ctx.gpr[3]);
    ctx.fpr[0] = std::bit_cast<float>(rt.memory().aot_load32(ctx.gpr[2] + static_cast<std::uint32_t>(12)));
    ctx.set_gpr(4, ctx.gpr[3] + static_cast<std::uint32_t>(1));
    ctx.fpr[0] = static_cast<float>(static_cast<std::int32_t>(ctx.fpr_bits(0)));
    ctx.set_gpr(2, ctx.gpr[3] << 2u);
    ctx.set_gpr(2, ctx.gpr[2] + ctx.gpr[20]);
    rt.memory().aot_store32(ctx.gpr[20] + static_cast<std::uint32_t>(32012), ctx.gpr[4]);
    ctx.fpr[1] = std::bit_cast<float>(rt.memory().aot_load32(ctx.gpr[2] + static_cast<std::uint32_t>(12)));
    ctx.set_gpr(3, ctx.gpr[4] + static_cast<std::uint32_t>(1));
    { const float fs = ctx.fpr[2]; const float ft = ctx.fpr[0]; if ((std::isinf(fs) && ft == 0.0f) || (std::isinf(ft) && fs == 0.0f)) ctx.set_fpr_bits(12, 0x7FC00000u); else ctx.fpr[12] = fs * ft; }
    ctx.set_gpr(2, ctx.gpr[4] << 2u);
    rt.memory().aot_store32(ctx.gpr[20] + static_cast<std::uint32_t>(32012), ctx.gpr[3]);
    ctx.set_gpr(2, ctx.gpr[2] + ctx.gpr[20]);
    ctx.set_gpr(4, rt.memory().aot_load32(ctx.gpr[20] + static_cast<std::uint32_t>(32132)));
    ctx.fpr[0] = std::bit_cast<float>(rt.memory().aot_load32(ctx.gpr[2] + static_cast<std::uint32_t>(12)));
    ctx.fpr[1] = static_cast<float>(static_cast<std::int32_t>(ctx.fpr_bits(1)));
    ctx.fpr[0] = static_cast<float>(static_cast<std::int32_t>(ctx.fpr_bits(0)));
    { const float fs = ctx.fpr[2]; const float ft = ctx.fpr[1]; if ((std::isinf(fs) && ft == 0.0f) || (std::isinf(ft) && fs == 0.0f)) ctx.set_fpr_bits(13, 0x7FC00000u); else ctx.fpr[13] = fs * ft; }
    ctx.set_gpr(31, 0x08856248u);
    { const float fs = ctx.fpr[2]; const float ft = ctx.fpr[0]; if ((std::isinf(fs) && ft == 0.0f) || (std::isinf(ft) && fs == 0.0f)) ctx.set_fpr_bits(14, 0x7FC00000u); else ctx.fpr[14] = fs * ft; }
    if (rt.invoke_chained_direct<&recomp_unit_0017_entry, 17u, 310u, 0x088494C4u>(ctx, &aot_mem) && ctx.pc == 0x08856248u) goto L_08856248;
    return;
L_08856248:
    ctx.set_gpr(4, rt.memory().aot_load32(ctx.gpr[20] + static_cast<std::uint32_t>(32012)));
    ctx.set_gpr(2, 14979u << 16u);
    ctx.set_gpr(2, ctx.gpr[2] | 4719u);
    ctx.fpr[2] = std::bit_cast<float>(ctx.gpr[2]);
    ctx.set_gpr(3, ctx.gpr[4] + static_cast<std::uint32_t>(1));
    ctx.set_gpr(2, ctx.gpr[4] << 2u);
    ctx.set_gpr(2, ctx.gpr[2] + ctx.gpr[20]);
    rt.memory().aot_store32(ctx.gpr[20] + static_cast<std::uint32_t>(32012), ctx.gpr[3]);
    ctx.fpr[0] = std::bit_cast<float>(rt.memory().aot_load32(ctx.gpr[2] + static_cast<std::uint32_t>(12)));
    ctx.set_gpr(4, ctx.gpr[3] + static_cast<std::uint32_t>(1));
    ctx.fpr[0] = static_cast<float>(static_cast<std::int32_t>(ctx.fpr_bits(0)));
    ctx.set_gpr(2, ctx.gpr[3] << 2u);
    ctx.set_gpr(2, ctx.gpr[2] + ctx.gpr[20]);
    rt.memory().aot_store32(ctx.gpr[20] + static_cast<std::uint32_t>(32012), ctx.gpr[4]);
    ctx.fpr[1] = std::bit_cast<float>(rt.memory().aot_load32(ctx.gpr[2] + static_cast<std::uint32_t>(12)));
    ctx.set_gpr(3, ctx.gpr[4] + static_cast<std::uint32_t>(1));
    { const float fs = ctx.fpr[2]; const float ft = ctx.fpr[0]; if ((std::isinf(fs) && ft == 0.0f) || (std::isinf(ft) && fs == 0.0f)) ctx.set_fpr_bits(12, 0x7FC00000u); else ctx.fpr[12] = fs * ft; }
    ctx.set_gpr(2, ctx.gpr[4] << 2u);
    rt.memory().aot_store32(ctx.gpr[20] + static_cast<std::uint32_t>(32012), ctx.gpr[3]);
    ctx.set_gpr(2, ctx.gpr[2] + ctx.gpr[20]);
    ctx.set_gpr(4, rt.memory().aot_load32(ctx.gpr[20] + static_cast<std::uint32_t>(32132)));
    ctx.fpr[0] = std::bit_cast<float>(rt.memory().aot_load32(ctx.gpr[2] + static_cast<std::uint32_t>(12)));
    ctx.fpr[1] = static_cast<float>(static_cast<std::int32_t>(ctx.fpr_bits(1)));
    ctx.fpr[0] = static_cast<float>(static_cast<std::int32_t>(ctx.fpr_bits(0)));
    { const float fs = ctx.fpr[2]; const float ft = ctx.fpr[1]; if ((std::isinf(fs) && ft == 0.0f) || (std::isinf(ft) && fs == 0.0f)) ctx.set_fpr_bits(13, 0x7FC00000u); else ctx.fpr[13] = fs * ft; }
    ctx.set_gpr(31, 0x088562B4u);
    { const float fs = ctx.fpr[2]; const float ft = ctx.fpr[0]; if ((std::isinf(fs) && ft == 0.0f) || (std::isinf(ft) && fs == 0.0f)) ctx.set_fpr_bits(14, 0x7FC00000u); else ctx.fpr[14] = fs * ft; }
    if (rt.invoke_chained_direct<&recomp_unit_0017_entry, 17u, 309u, 0x088494B4u>(ctx, &aot_mem) && ctx.pc == 0x088562B4u) goto L_088562B4;
    return;
L_088562B4:
    ctx.set_gpr(4, rt.memory().aot_load32(ctx.gpr[20] + static_cast<std::uint32_t>(32132)));
    ctx.fpr[12] = std::bit_cast<float>(0u);
    ctx.set_gpr(2, 16256u << 16u);
    ctx.fpr[13] = std::bit_cast<float>(ctx.gpr[2]);
    ctx.set_gpr(31, 0x088562CCu);
    ctx.set_fpr_bits(14, ctx.fpr_bits(12));
    if (rt.invoke_chained_direct<&recomp_unit_0017_entry, 17u, 776u, 0x0884AD28u>(ctx, &aot_mem) && ctx.pc == 0x088562CCu) goto L_088562CC;
    return;
L_088562CC:
    ctx.set_gpr(4, rt.memory().aot_load32(ctx.gpr[20] + static_cast<std::uint32_t>(32132)));
    ctx.set_gpr(6, ctx.gpr[19] + 0u);
    ctx.set_gpr(7, ctx.gpr[18] + 0u);
    ctx.set_gpr(31, 0x088562E0u);
    ctx.fpr[12] = std::bit_cast<float>(0u);
    if (rt.invoke_chained_direct<&recomp_unit_0017_entry, 17u, 459u, 0x08849C34u>(ctx, &aot_mem) && ctx.pc == 0x088562E0u) goto L_088562E0;
    return;
L_088562E0:
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_088570B0;
      }
      goto L_088562E8;
    }
L_088562E8:
    ctx.set_gpr(2, ctx.gpr[5] + static_cast<std::uint32_t>(1));
    ctx.set_gpr(5, ctx.gpr[2] + static_cast<std::uint32_t>(1));
    rt.memory().aot_store32(ctx.gpr[20] + static_cast<std::uint32_t>(32012), ctx.gpr[2]);
    ctx.set_gpr(2, ctx.gpr[2] << 2u);
    ctx.set_gpr(2, ctx.gpr[2] + ctx.gpr[20]);
    rt.memory().aot_store32(ctx.gpr[20] + static_cast<std::uint32_t>(32012), ctx.gpr[5]);
    ctx.set_gpr(4, rt.memory().aot_load32(ctx.gpr[2] + static_cast<std::uint32_t>(12)));
    ctx.set_gpr(3, ctx.gpr[5] + static_cast<std::uint32_t>(1));
    ctx.set_gpr(2, ctx.gpr[5] << 2u);
    rt.memory().aot_store32(ctx.gpr[20] + static_cast<std::uint32_t>(32012), ctx.gpr[3]);
    ctx.set_gpr(2, ctx.gpr[2] + ctx.gpr[20]);
    ctx.set_gpr(16, rt.memory().aot_load32(ctx.gpr[2] + static_cast<std::uint32_t>(12)));
    ctx.set_gpr(2, 0u + static_cast<std::uint32_t>(2));
    if (ctx.gpr[4] == ctx.gpr[2]) {
    ctx.set_gpr(5, rt.memory().aot_load32(ctx.gpr[20] + static_cast<std::uint32_t>(32148)));
        goto L_08856444;
    }
    goto L_08856324;
L_08856324:
    ctx.set_gpr(2, 0u + static_cast<std::uint32_t>(1));
    if (ctx.gpr[4] == ctx.gpr[2]) {
    ctx.set_gpr(2, ctx.gpr[16] + static_cast<std::uint32_t>(-1));
        goto L_088563D0;
    }
    goto L_08856330;
L_08856330:
    if (ctx.gpr[4] == 0u) {
    ctx.set_gpr(2, rt.memory().aot_load32(ctx.gpr[20] + static_cast<std::uint32_t>(32084)));
        goto L_08856340;
    }
    goto L_08856338;
L_08856338:
    { const bool branch_taken = 0u == 0u;
    ctx.set_gpr(4, rt.memory().aot_load32(ctx.gpr[20] + static_cast<std::uint32_t>(32132)));
      if (branch_taken) {
          goto L_088564D8;
      }
      goto L_08856340;
    }
L_08856340:
    { const bool branch_taken = ctx.gpr[2] != 0u;
    ctx.set_gpr(3, rt.memory().aot_load32(ctx.gpr[20] + static_cast<std::uint32_t>(32080)));
      if (branch_taken) {
          goto L_08856358;
      }
      goto L_08856348;
    }
L_08856348:
    if (ctx.gpr[3] != 0u) {
    ctx.set_gpr(2, ctx.gpr[16] + static_cast<std::uint32_t>(-1));
        goto L_0885635C;
    }
    goto L_08856350;
L_08856350:
    rt.memory().aot_store32(ctx.gpr[20] + static_cast<std::uint32_t>(32080), ctx.gpr[19]);
    rt.memory().aot_store32(ctx.gpr[20] + static_cast<std::uint32_t>(32084), ctx.gpr[18]);
    goto L_08856358;
L_08856358:
    ctx.set_gpr(2, ctx.gpr[16] + static_cast<std::uint32_t>(-1));
    goto L_0885635C;
L_0885635C:
    ctx.set_gpr(3, ctx.gpr[2] << 2u);
    ctx.set_gpr(2, 2226u << 16u);
    ctx.set_gpr(2, ctx.gpr[2] + static_cast<std::uint32_t>(17592));
    ctx.set_gpr(2, ctx.gpr[2] + ctx.gpr[3]);
    ctx.set_gpr(5, rt.memory().aot_load32(ctx.gpr[2] + static_cast<std::uint32_t>(0)));
    ctx.set_gpr(31, 0x08856378u);
    ctx.set_gpr(4, ctx.gpr[29] + static_cast<std::uint32_t>(340));
    goto L_08855620;
L_08856378:
    ctx.set_gpr(4, rt.memory().aot_load32(ctx.gpr[20] + static_cast<std::uint32_t>(32132)));
    ctx.set_gpr(10, rt.memory().aot_load32(ctx.gpr[20] + static_cast<std::uint32_t>(32080)));
    ctx.set_gpr(11, rt.memory().aot_load32(ctx.gpr[20] + static_cast<std::uint32_t>(32084)));
    ctx.set_gpr(5, 0u + 0u);
    ctx.set_gpr(6, 0u + 0u);
    ctx.set_gpr(7, ctx.gpr[29] + static_cast<std::uint32_t>(340));
    ctx.set_gpr(31, 0x08856398u);
    ctx.set_gpr(8, ctx.gpr[29] + static_cast<std::uint32_t>(736));
    if (rt.invoke_chained_direct<&recomp_unit_0017_entry, 17u, 356u, 0x088496FCu>(ctx, &aot_mem) && ctx.pc == 0x08856398u) goto L_08856398;
    return;
L_08856398:
    ctx.set_gpr(16, ctx.gpr[2] & 255u);
    ctx.set_gpr(4, ctx.gpr[29] + static_cast<std::uint32_t>(340));
    ctx.set_gpr(31, 0x088563A8u);
    ctx.set_gpr(5, 0u + static_cast<std::uint32_t>(-1));
    goto L_088555D0;
L_088563A8:
    { const bool branch_taken = ctx.gpr[16] == 0u;
    // nop
      if (branch_taken) {
          goto L_088564D4;
      }
      goto L_088563B0;
    }
L_088563B0:
    ctx.set_gpr(4, ctx.gpr[29] + static_cast<std::uint32_t>(276));
    ctx.set_gpr(31, 0x088563BCu);
    ctx.set_gpr(5, ctx.gpr[29] + static_cast<std::uint32_t>(736));
    if (rt.invoke_chained_direct<&recomp_unit_0015_entry, 15u, 870u, 0x08843A60u>(ctx, &aot_mem) && ctx.pc == 0x088563BCu) goto L_088563BC;
    return;
L_088563BC:
    ctx.set_gpr(4, rt.memory().aot_load32(ctx.gpr[20] + static_cast<std::uint32_t>(32124)));
    ctx.set_gpr(31, 0x088563C8u);
    ctx.set_gpr(5, ctx.gpr[2] + 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0019_entry, 19u, 521u, 0x08851B24u>(ctx, &aot_mem) && ctx.pc == 0x088563C8u) goto L_088563C8;
    return;
L_088563C8:
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_088564D4;
      }
      goto L_088563D0;
    }
L_088563D0:
    ctx.set_gpr(3, ctx.gpr[2] << 2u);
    ctx.set_gpr(2, 2226u << 16u);
    ctx.set_gpr(2, ctx.gpr[2] + static_cast<std::uint32_t>(17592));
    ctx.set_gpr(2, ctx.gpr[2] + ctx.gpr[3]);
    ctx.set_gpr(5, rt.memory().aot_load32(ctx.gpr[2] + static_cast<std::uint32_t>(0)));
    ctx.set_gpr(31, 0x088563ECu);
    ctx.set_gpr(4, ctx.gpr[29] + static_cast<std::uint32_t>(272));
    goto L_08855620;
L_088563EC:
    ctx.set_gpr(4, rt.memory().aot_load32(ctx.gpr[20] + static_cast<std::uint32_t>(32132)));
    ctx.set_gpr(5, 0u + 0u);
    ctx.set_gpr(6, 0u + static_cast<std::uint32_t>(1));
    ctx.set_gpr(7, ctx.gpr[29] + static_cast<std::uint32_t>(272));
    ctx.set_gpr(8, ctx.gpr[29] + static_cast<std::uint32_t>(736));
    ctx.set_gpr(10, ctx.gpr[19] + 0u);
    ctx.set_gpr(31, 0x0885640Cu);
    ctx.set_gpr(11, ctx.gpr[18] + 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0017_entry, 17u, 356u, 0x088496FCu>(ctx, &aot_mem) && ctx.pc == 0x0885640Cu) goto L_0885640C;
    return;
L_0885640C:
    ctx.set_gpr(16, ctx.gpr[2] & 255u);
    ctx.set_gpr(4, ctx.gpr[29] + static_cast<std::uint32_t>(272));
    ctx.set_gpr(31, 0x0885641Cu);
    ctx.set_gpr(5, 0u + static_cast<std::uint32_t>(-1));
    goto L_088555D0;
L_0885641C:
    { const bool branch_taken = ctx.gpr[16] == 0u;
    // nop
      if (branch_taken) {
          goto L_088564D4;
      }
      goto L_08856424;
    }
L_08856424:
    ctx.set_gpr(4, ctx.gpr[29] + static_cast<std::uint32_t>(208));
    ctx.set_gpr(31, 0x08856430u);
    ctx.set_gpr(5, ctx.gpr[29] + static_cast<std::uint32_t>(736));
    if (rt.invoke_chained_direct<&recomp_unit_0015_entry, 15u, 870u, 0x08843A60u>(ctx, &aot_mem) && ctx.pc == 0x08856430u) goto L_08856430;
    return;
L_08856430:
    ctx.set_gpr(4, rt.memory().aot_load32(ctx.gpr[20] + static_cast<std::uint32_t>(32124)));
    ctx.set_gpr(31, 0x0885643Cu);
    ctx.set_gpr(5, ctx.gpr[2] + 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0019_entry, 19u, 521u, 0x08851B24u>(ctx, &aot_mem) && ctx.pc == 0x0885643Cu) goto L_0885643C;
    return;
L_0885643C:
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_088564D4;
      }
      goto L_08856444;
    }
L_08856444:
    ctx.set_gpr(4, ctx.gpr[29] + static_cast<std::uint32_t>(204));
    ctx.set_gpr(31, 0x08856450u);
    ctx.set_gpr(6, 0u + static_cast<std::uint32_t>(-1));
    if (rt.invoke_chained_direct<&recomp_unit_0022_entry, 22u, 859u, 0x0885F49Cu>(ctx, &aot_mem) && ctx.pc == 0x08856450u) goto L_08856450;
    return;
L_08856450:
    ctx.set_gpr(2, ctx.gpr[16] + static_cast<std::uint32_t>(-1));
    ctx.set_gpr(3, ctx.gpr[2] << 2u);
    ctx.set_gpr(2, 2226u << 16u);
    ctx.set_gpr(2, ctx.gpr[2] + static_cast<std::uint32_t>(17592));
    ctx.set_gpr(2, ctx.gpr[2] + ctx.gpr[3]);
    ctx.set_gpr(5, rt.memory().aot_load32(ctx.gpr[2] + static_cast<std::uint32_t>(0)));
    ctx.set_gpr(31, 0x08856470u);
    ctx.set_gpr(4, ctx.gpr[29] + static_cast<std::uint32_t>(200));
    goto L_08855620;
L_08856470:
    ctx.set_gpr(31, 0x08856478u);
    ctx.set_gpr(4, ctx.gpr[29] + static_cast<std::uint32_t>(204));
    if (rt.invoke_chained_direct<&recomp_unit_0017_entry, 17u, 355u, 0x088496F4u>(ctx, &aot_mem) && ctx.pc == 0x08856478u) goto L_08856478;
    return;
L_08856478:
    ctx.set_gpr(4, rt.memory().aot_load32(ctx.gpr[20] + static_cast<std::uint32_t>(32132)));
    ctx.set_gpr(5, ctx.gpr[2] + 0u);
    ctx.set_gpr(6, 0u + static_cast<std::uint32_t>(2));
    ctx.set_gpr(7, ctx.gpr[29] + static_cast<std::uint32_t>(200));
    ctx.set_gpr(8, ctx.gpr[29] + static_cast<std::uint32_t>(736));
    ctx.set_gpr(10, ctx.gpr[19] + 0u);
    ctx.set_gpr(31, 0x08856498u);
    ctx.set_gpr(11, ctx.gpr[18] + 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0017_entry, 17u, 356u, 0x088496FCu>(ctx, &aot_mem) && ctx.pc == 0x08856498u) goto L_08856498;
    return;
L_08856498:
    ctx.set_gpr(16, ctx.gpr[2] & 255u);
    ctx.set_gpr(4, ctx.gpr[29] + static_cast<std::uint32_t>(200));
    ctx.set_gpr(31, 0x088564A8u);
    ctx.set_gpr(5, 0u + static_cast<std::uint32_t>(-1));
    goto L_088555D0;
L_088564A8:
    ctx.set_gpr(4, ctx.gpr[29] + static_cast<std::uint32_t>(204));
    ctx.set_gpr(31, 0x088564B4u);
    ctx.set_gpr(5, 0u + static_cast<std::uint32_t>(-1));
    if (rt.invoke_chained_direct<&recomp_unit_0017_entry, 17u, 253u, 0x08849158u>(ctx, &aot_mem) && ctx.pc == 0x088564B4u) goto L_088564B4;
    return;
L_088564B4:
    { const bool branch_taken = ctx.gpr[16] == 0u;
    // nop
      if (branch_taken) {
          goto L_088564D4;
      }
      goto L_088564BC;
    }
L_088564BC:
    ctx.set_gpr(4, ctx.gpr[29] + static_cast<std::uint32_t>(136));
    ctx.set_gpr(31, 0x088564C8u);
    ctx.set_gpr(5, ctx.gpr[29] + static_cast<std::uint32_t>(736));
    if (rt.invoke_chained_direct<&recomp_unit_0015_entry, 15u, 870u, 0x08843A60u>(ctx, &aot_mem) && ctx.pc == 0x088564C8u) goto L_088564C8;
    return;
L_088564C8:
    ctx.set_gpr(4, rt.memory().aot_load32(ctx.gpr[20] + static_cast<std::uint32_t>(32124)));
    ctx.set_gpr(31, 0x088564D4u);
    ctx.set_gpr(5, ctx.gpr[2] + 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0019_entry, 19u, 521u, 0x08851B24u>(ctx, &aot_mem) && ctx.pc == 0x088564D4u) goto L_088564D4;
    return;
L_088564D4:
    ctx.set_gpr(4, rt.memory().aot_load32(ctx.gpr[20] + static_cast<std::uint32_t>(32132)));
    goto L_088564D8;
L_088564D8:
    ctx.set_gpr(6, ctx.gpr[19] + 0u);
    ctx.set_gpr(7, ctx.gpr[18] + 0u);
    ctx.set_gpr(31, 0x088564E8u);
    ctx.fpr[12] = std::bit_cast<float>(0u);
    if (rt.invoke_chained_direct<&recomp_unit_0017_entry, 17u, 459u, 0x08849C34u>(ctx, &aot_mem) && ctx.pc == 0x088564E8u) goto L_088564E8;
    return;
L_088564E8:
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_088570B0;
      }
      goto L_088564F0;
    }
L_088564F0:
    ctx.set_gpr(3, ctx.gpr[5] + static_cast<std::uint32_t>(1));
    rt.memory().aot_store32(ctx.gpr[20] + static_cast<std::uint32_t>(32012), ctx.gpr[3]);
    ctx.set_gpr(2, ctx.gpr[3] + static_cast<std::uint32_t>(1));
    rt.memory().aot_store32(ctx.gpr[20] + static_cast<std::uint32_t>(32012), ctx.gpr[2]);
    ctx.set_gpr(2, ctx.gpr[3] << 2u);
    ctx.set_gpr(2, ctx.gpr[2] + ctx.gpr[20]);
    ctx.set_gpr(31, 0x08856510u);
    ctx.set_gpr(16, rt.memory().aot_load32(ctx.gpr[2] + static_cast<std::uint32_t>(12)));
    if (rt.invoke_chained_direct<&recomp_unit_0017_entry, 17u, 182u, 0x08848C18u>(ctx, &aot_mem) && ctx.pc == 0x08856510u) goto L_08856510;
    return;
L_08856510:
    ctx.set_gpr(31, 0x08856518u);
    ctx.set_gpr(4, ctx.gpr[2] + 0u);
    goto L_088571D0;
L_08856518:
    { const bool branch_taken = ctx.gpr[2] != 0u;
    // nop
      if (branch_taken) {
          goto L_088570B0;
      }
      goto L_08856520;
    }
L_08856520:
    if (ctx.gpr[16] != 0u) {
    ctx.set_gpr(4, rt.memory().aot_load32(ctx.gpr[20] + static_cast<std::uint32_t>(32148)));
        goto L_08856538;
    }
    goto L_08856528;
L_08856528:
    ctx.set_gpr(31, 0x08856530u);
    ctx.set_gpr(4, rt.memory().aot_load32(ctx.gpr[20] + static_cast<std::uint32_t>(32148)));
    if (rt.invoke_chained_direct<&recomp_unit_0022_entry, 22u, 766u, 0x0885EEC4u>(ctx, &aot_mem) && ctx.pc == 0x08856530u) goto L_08856530;
    return;
L_08856530:
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_0885657C;
      }
      goto L_08856538;
    }
L_08856538:
    ctx.set_gpr(5, ctx.gpr[16] + static_cast<std::uint32_t>(-1));
    ctx.set_gpr(6, ctx.gpr[19] + 0u);
    ctx.set_gpr(31, 0x08856548u);
    ctx.set_gpr(7, ctx.gpr[18] + 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0022_entry, 22u, 787u, 0x0885F02Cu>(ctx, &aot_mem) && ctx.pc == 0x08856548u) goto L_08856548;
    return;
L_08856548:
    ctx.set_gpr(4, rt.memory().aot_load32(ctx.gpr[20] + static_cast<std::uint32_t>(32152)));
    ctx.set_gpr(5, 0u + static_cast<std::uint32_t>(-1));
    ctx.set_gpr(6, 0u + 0u);
    ctx.set_gpr(31, 0x0885655Cu);
    ctx.set_gpr(7, 0u + 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0023_entry, 23u, 148u, 0x0886080Cu>(ctx, &aot_mem) && ctx.pc == 0x0885655Cu) goto L_0885655C;
    return;
L_0885655C:
    ctx.set_gpr(4, rt.memory().aot_load32(ctx.gpr[20] + static_cast<std::uint32_t>(32152)));
    ctx.set_gpr(6, ctx.gpr[19] + 0u);
    ctx.set_gpr(7, ctx.gpr[18] + 0u);
    ctx.set_gpr(31, 0x08856570u);
    ctx.set_gpr(5, 0u + static_cast<std::uint32_t>(-1));
    if (rt.invoke_chained_direct<&recomp_unit_0023_entry, 23u, 161u, 0x088608DCu>(ctx, &aot_mem) && ctx.pc == 0x08856570u) goto L_08856570;
    return;
L_08856570:
    ctx.set_gpr(4, rt.memory().aot_load32(ctx.gpr[20] + static_cast<std::uint32_t>(32152)));
    ctx.set_gpr(31, 0x0885657Cu);
    ctx.set_gpr(5, 0u + static_cast<std::uint32_t>(-1));
    if (rt.invoke_chained_direct<&recomp_unit_0023_entry, 23u, 182u, 0x088609ECu>(ctx, &aot_mem) && ctx.pc == 0x0885657Cu) goto L_0885657C;
    return;
L_0885657C:
    ctx.set_gpr(31, 0x08856584u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0017_entry, 17u, 182u, 0x08848C18u>(ctx, &aot_mem) && ctx.pc == 0x08856584u) goto L_08856584;
    return;
L_08856584:
    ctx.set_gpr(31, 0x0885658Cu);
    ctx.set_gpr(4, ctx.gpr[2] + 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0023_entry, 23u, 485u, 0x08861D50u>(ctx, &aot_mem) && ctx.pc == 0x0885658Cu) goto L_0885658C;
    return;
L_0885658C:
    ctx.set_gpr(2, static_cast<std::int32_t>(ctx.gpr[2]) < 6 ? 1u : 0u);
    { const bool branch_taken = ctx.gpr[2] != 0u;
    // nop
      if (branch_taken) {
          goto L_088570B0;
      }
      goto L_08856598;
    }
L_08856598:
    ctx.set_gpr(2, ctx.gpr[16] + static_cast<std::uint32_t>(-1));
    { const bool branch_taken = 0u == 0u;
    rt.memory().aot_store32(ctx.gpr[20] + static_cast<std::uint32_t>(32108), ctx.gpr[2]);
      if (branch_taken) {
          goto L_088570B0;
      }
      goto L_088565A4;
    }
L_088565A4:
    ctx.set_gpr(3, ctx.gpr[5] + static_cast<std::uint32_t>(1));
    rt.memory().aot_store32(ctx.gpr[20] + static_cast<std::uint32_t>(32012), ctx.gpr[3]);
    ctx.set_gpr(2, ctx.gpr[3] + static_cast<std::uint32_t>(1));
    rt.memory().aot_store32(ctx.gpr[20] + static_cast<std::uint32_t>(32012), ctx.gpr[2]);
    ctx.set_gpr(2, ctx.gpr[3] << 2u);
    ctx.set_gpr(2, ctx.gpr[2] + ctx.gpr[20]);
    ctx.set_gpr(2, rt.memory().aot_load32(ctx.gpr[2] + static_cast<std::uint32_t>(12)));
    ctx.set_gpr(4, rt.memory().aot_load32(ctx.gpr[20] + static_cast<std::uint32_t>(32148)));
    ctx.set_gpr(31, 0x088565CCu);
    ctx.set_gpr(5, ctx.gpr[2] + static_cast<std::uint32_t>(-1));
    if (rt.invoke_chained_direct<&recomp_unit_0022_entry, 22u, 899u, 0x0885F6C8u>(ctx, &aot_mem) && ctx.pc == 0x088565CCu) goto L_088565CC;
    return;
L_088565CC:
    ctx.set_gpr(31, 0x088565D4u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0017_entry, 17u, 182u, 0x08848C18u>(ctx, &aot_mem) && ctx.pc == 0x088565D4u) goto L_088565D4;
    return;
L_088565D4:
    ctx.set_gpr(31, 0x088565DCu);
    ctx.set_gpr(4, ctx.gpr[2] + 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0023_entry, 23u, 485u, 0x08861D50u>(ctx, &aot_mem) && ctx.pc == 0x088565DCu) goto L_088565DC;
    return;
L_088565DC:
    ctx.set_gpr(2, static_cast<std::int32_t>(ctx.gpr[2]) < 6 ? 1u : 0u);
    { const bool branch_taken = ctx.gpr[2] != 0u;
    // nop
      if (branch_taken) {
          goto L_088570B0;
      }
      goto L_088565E8;
    }
L_088565E8:
    ctx.set_gpr(2, 0u + static_cast<std::uint32_t>(-1));
    { const bool branch_taken = 0u == 0u;
    rt.memory().aot_store32(ctx.gpr[20] + static_cast<std::uint32_t>(32108), ctx.gpr[2]);
      if (branch_taken) {
          goto L_088570B0;
      }
      goto L_088565F4;
    }
L_088565F4:
    ctx.set_gpr(2, ctx.gpr[5] + static_cast<std::uint32_t>(1));
    ctx.set_gpr(5, ctx.gpr[2] + static_cast<std::uint32_t>(1));
    rt.memory().aot_store32(ctx.gpr[20] + static_cast<std::uint32_t>(32012), ctx.gpr[2]);
    ctx.set_gpr(2, ctx.gpr[2] << 2u);
    ctx.set_gpr(2, ctx.gpr[2] + ctx.gpr[20]);
    rt.memory().aot_store32(ctx.gpr[20] + static_cast<std::uint32_t>(32012), ctx.gpr[5]);
    ctx.set_gpr(3, rt.memory().aot_load32(ctx.gpr[2] + static_cast<std::uint32_t>(12)));
    ctx.set_gpr(4, ctx.gpr[5] + static_cast<std::uint32_t>(1));
    ctx.set_gpr(2, ctx.gpr[5] << 2u);
    ctx.set_gpr(2, ctx.gpr[2] + ctx.gpr[20]);
    rt.memory().aot_store32(ctx.gpr[20] + static_cast<std::uint32_t>(32012), ctx.gpr[4]);
    ctx.set_gpr(6, rt.memory().aot_load32(ctx.gpr[2] + static_cast<std::uint32_t>(12)));
    ctx.set_gpr(5, ctx.gpr[3] + static_cast<std::uint32_t>(-1));
    ctx.set_gpr(3, ctx.gpr[4] + static_cast<std::uint32_t>(1));
    ctx.set_gpr(2, ctx.gpr[4] << 2u);
    rt.memory().aot_store32(ctx.gpr[20] + static_cast<std::uint32_t>(32012), ctx.gpr[3]);
    ctx.set_gpr(2, ctx.gpr[2] + ctx.gpr[20]);
    ctx.fpr[0] = std::bit_cast<float>(rt.memory().aot_load32(ctx.gpr[2] + static_cast<std::uint32_t>(12)));
    ctx.set_gpr(4, rt.memory().aot_load32(ctx.gpr[20] + static_cast<std::uint32_t>(32148)));
    ctx.set_gpr(2, 14979u << 16u);
    ctx.fpr[1] = static_cast<float>(static_cast<std::int32_t>(ctx.fpr_bits(0)));
    ctx.set_gpr(2, ctx.gpr[2] | 4719u);
    ctx.fpr[0] = std::bit_cast<float>(ctx.gpr[2]);
    ctx.set_gpr(31, 0x08856658u);
    { const float fs = ctx.fpr[0]; const float ft = ctx.fpr[1]; if ((std::isinf(fs) && ft == 0.0f) || (std::isinf(ft) && fs == 0.0f)) ctx.set_fpr_bits(12, 0x7FC00000u); else ctx.fpr[12] = fs * ft; }
    if (rt.invoke_chained_direct<&recomp_unit_0022_entry, 22u, 920u, 0x0885F7D4u>(ctx, &aot_mem) && ctx.pc == 0x08856658u) goto L_08856658;
    return;
L_08856658:
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_088570B0;
      }
      goto L_08856660;
    }
L_08856660:
    ctx.set_gpr(2, ctx.gpr[5] + static_cast<std::uint32_t>(1));
    ctx.set_gpr(5, ctx.gpr[2] + static_cast<std::uint32_t>(1));
    rt.memory().aot_store32(ctx.gpr[20] + static_cast<std::uint32_t>(32012), ctx.gpr[2]);
    ctx.set_gpr(2, ctx.gpr[2] << 2u);
    ctx.set_gpr(2, ctx.gpr[2] + ctx.gpr[20]);
    rt.memory().aot_store32(ctx.gpr[20] + static_cast<std::uint32_t>(32012), ctx.gpr[5]);
    ctx.set_gpr(4, rt.memory().aot_load32(ctx.gpr[2] + static_cast<std::uint32_t>(12)));
    ctx.set_gpr(3, ctx.gpr[5] + static_cast<std::uint32_t>(1));
    ctx.set_gpr(2, ctx.gpr[5] << 2u);
    rt.memory().aot_store32(ctx.gpr[20] + static_cast<std::uint32_t>(32012), ctx.gpr[3]);
    ctx.set_gpr(2, ctx.gpr[2] + ctx.gpr[20]);
    ctx.fpr[0] = std::bit_cast<float>(rt.memory().aot_load32(ctx.gpr[2] + static_cast<std::uint32_t>(12)));
    ctx.set_gpr(5, ctx.gpr[4] + static_cast<std::uint32_t>(-1));
    ctx.set_gpr(4, rt.memory().aot_load32(ctx.gpr[20] + static_cast<std::uint32_t>(32148)));
    ctx.fpr[1] = static_cast<float>(static_cast<std::int32_t>(ctx.fpr_bits(0)));
    ctx.set_gpr(2, 14979u << 16u);
    ctx.set_gpr(2, ctx.gpr[2] | 4719u);
    ctx.fpr[0] = std::bit_cast<float>(ctx.gpr[2]);
    ctx.set_gpr(31, 0x088566B0u);
    { const float fs = ctx.fpr[0]; const float ft = ctx.fpr[1]; if ((std::isinf(fs) && ft == 0.0f) || (std::isinf(ft) && fs == 0.0f)) ctx.set_fpr_bits(12, 0x7FC00000u); else ctx.fpr[12] = fs * ft; }
    if (rt.invoke_chained_direct<&recomp_unit_0022_entry, 22u, 949u, 0x0885F9A8u>(ctx, &aot_mem) && ctx.pc == 0x088566B0u) goto L_088566B0;
    return;
L_088566B0:
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_088570B0;
      }
      goto L_088566B8;
    }
L_088566B8:
    ctx.set_gpr(2, ctx.gpr[5] + static_cast<std::uint32_t>(1));
    ctx.set_gpr(4, ctx.gpr[2] + static_cast<std::uint32_t>(1));
    rt.memory().aot_store32(ctx.gpr[20] + static_cast<std::uint32_t>(32012), ctx.gpr[2]);
    ctx.set_gpr(2, ctx.gpr[2] << 2u);
    ctx.set_gpr(2, ctx.gpr[2] + ctx.gpr[20]);
    rt.memory().aot_store32(ctx.gpr[20] + static_cast<std::uint32_t>(32012), ctx.gpr[4]);
    ctx.set_gpr(5, rt.memory().aot_load32(ctx.gpr[2] + static_cast<std::uint32_t>(12)));
    ctx.set_gpr(3, ctx.gpr[4] + static_cast<std::uint32_t>(1));
    ctx.set_gpr(2, ctx.gpr[4] << 2u);
    rt.memory().aot_store32(ctx.gpr[20] + static_cast<std::uint32_t>(32012), ctx.gpr[3]);
    ctx.set_gpr(2, ctx.gpr[2] + ctx.gpr[20]);
    ctx.fpr[0] = std::bit_cast<float>(rt.memory().aot_load32(ctx.gpr[2] + static_cast<std::uint32_t>(12)));
    ctx.set_gpr(4, rt.memory().aot_load32(ctx.gpr[20] + static_cast<std::uint32_t>(32136)));
    ctx.fpr[1] = static_cast<float>(static_cast<std::int32_t>(ctx.fpr_bits(0)));
    ctx.set_gpr(2, 14979u << 16u);
    ctx.set_gpr(2, ctx.gpr[2] | 4719u);
    ctx.fpr[0] = std::bit_cast<float>(ctx.gpr[2]);
    ctx.set_gpr(31, 0x08856704u);
    { const float fs = ctx.fpr[0]; const float ft = ctx.fpr[1]; if ((std::isinf(fs) && ft == 0.0f) || (std::isinf(ft) && fs == 0.0f)) ctx.set_fpr_bits(12, 0x7FC00000u); else ctx.fpr[12] = fs * ft; }
    if (rt.invoke_chained_direct<&recomp_unit_0022_entry, 22u, 303u, 0x0885D188u>(ctx, &aot_mem) && ctx.pc == 0x08856704u) goto L_08856704;
    return;
L_08856704:
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_088570B0;
      }
      goto L_0885670C;
    }
L_0885670C:
    ctx.set_gpr(2, ctx.gpr[5] + static_cast<std::uint32_t>(1));
    ctx.set_gpr(4, ctx.gpr[2] + static_cast<std::uint32_t>(1));
    rt.memory().aot_store32(ctx.gpr[20] + static_cast<std::uint32_t>(32012), ctx.gpr[2]);
    ctx.set_gpr(2, ctx.gpr[2] << 2u);
    ctx.set_gpr(2, ctx.gpr[2] + ctx.gpr[20]);
    rt.memory().aot_store32(ctx.gpr[20] + static_cast<std::uint32_t>(32012), ctx.gpr[4]);
    ctx.set_gpr(5, rt.memory().aot_load32(ctx.gpr[2] + static_cast<std::uint32_t>(12)));
    ctx.set_gpr(3, ctx.gpr[4] + static_cast<std::uint32_t>(1));
    ctx.set_gpr(2, ctx.gpr[4] << 2u);
    rt.memory().aot_store32(ctx.gpr[20] + static_cast<std::uint32_t>(32012), ctx.gpr[3]);
    ctx.set_gpr(2, ctx.gpr[2] + ctx.gpr[20]);
    ctx.fpr[0] = std::bit_cast<float>(rt.memory().aot_load32(ctx.gpr[2] + static_cast<std::uint32_t>(12)));
    ctx.set_gpr(4, rt.memory().aot_load32(ctx.gpr[20] + static_cast<std::uint32_t>(32136)));
    ctx.fpr[1] = static_cast<float>(static_cast<std::int32_t>(ctx.fpr_bits(0)));
    ctx.set_gpr(2, 14979u << 16u);
    ctx.set_gpr(2, ctx.gpr[2] | 4719u);
    ctx.fpr[0] = std::bit_cast<float>(ctx.gpr[2]);
    ctx.set_gpr(31, 0x08856758u);
    { const float fs = ctx.fpr[0]; const float ft = ctx.fpr[1]; if ((std::isinf(fs) && ft == 0.0f) || (std::isinf(ft) && fs == 0.0f)) ctx.set_fpr_bits(12, 0x7FC00000u); else ctx.fpr[12] = fs * ft; }
    if (rt.invoke_chained_direct<&recomp_unit_0022_entry, 22u, 350u, 0x0885D4A4u>(ctx, &aot_mem) && ctx.pc == 0x08856758u) goto L_08856758;
    return;
L_08856758:
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_088570B0;
      }
      goto L_08856760;
    }
L_08856760:
    ctx.set_gpr(2, ctx.gpr[5] + static_cast<std::uint32_t>(1));
    ctx.set_gpr(4, ctx.gpr[2] + static_cast<std::uint32_t>(1));
    rt.memory().aot_store32(ctx.gpr[20] + static_cast<std::uint32_t>(32012), ctx.gpr[2]);
    ctx.set_gpr(2, ctx.gpr[2] << 2u);
    ctx.set_gpr(2, ctx.gpr[2] + ctx.gpr[20]);
    rt.memory().aot_store32(ctx.gpr[20] + static_cast<std::uint32_t>(32012), ctx.gpr[4]);
    ctx.set_gpr(16, rt.memory().aot_load32(ctx.gpr[2] + static_cast<std::uint32_t>(12)));
    ctx.set_gpr(3, ctx.gpr[4] + static_cast<std::uint32_t>(1));
    ctx.set_gpr(2, ctx.gpr[4] << 2u);
    rt.memory().aot_store32(ctx.gpr[20] + static_cast<std::uint32_t>(32012), ctx.gpr[3]);
    ctx.set_gpr(2, ctx.gpr[2] + ctx.gpr[20]);
    ctx.set_gpr(17, rt.memory().aot_load32(ctx.gpr[2] + static_cast<std::uint32_t>(12)));
    ctx.set_gpr(2, 0u + static_cast<std::uint32_t>(4));
    if (ctx.gpr[17] != ctx.gpr[2]) {
    ctx.set_gpr(4, rt.memory().aot_load32(ctx.gpr[20] + static_cast<std::uint32_t>(32136)));
        goto L_08856850;
    }
    goto L_0885679C;
L_0885679C:
    ctx.set_gpr(31, 0x088567A4u);
    ctx.set_gpr(4, rt.memory().aot_load32(ctx.gpr[20] + static_cast<std::uint32_t>(32128)));
    goto L_088571C0;
L_088567A4:
    ctx.set_gpr(3, 0u + static_cast<std::uint32_t>(52));
    if (ctx.gpr[2] == ctx.gpr[3]) {
    ctx.set_gpr(17, 0u + static_cast<std::uint32_t>(1));
        goto L_0885684C;
    }
    goto L_088567B0;
L_088567B0:
    ctx.set_gpr(3, 0u + static_cast<std::uint32_t>(51));
    { const bool branch_taken = ctx.gpr[2] == ctx.gpr[3];
    // nop
      if (branch_taken) {
          goto L_08856848;
      }
      goto L_088567BC;
    }
L_088567BC:
    ctx.set_gpr(3, 0u + static_cast<std::uint32_t>(50));
    { const bool branch_taken = ctx.gpr[2] == ctx.gpr[3];
    // nop
      if (branch_taken) {
          goto L_08856848;
      }
      goto L_088567C8;
    }
L_088567C8:
    ctx.set_gpr(3, 0u + static_cast<std::uint32_t>(49));
    { const bool branch_taken = ctx.gpr[2] == ctx.gpr[3];
    // nop
      if (branch_taken) {
          goto L_08856848;
      }
      goto L_088567D4;
    }
L_088567D4:
    ctx.set_gpr(3, 0u + static_cast<std::uint32_t>(48));
    { const bool branch_taken = ctx.gpr[2] == ctx.gpr[3];
    // nop
      if (branch_taken) {
          goto L_08856848;
      }
      goto L_088567E0;
    }
L_088567E0:
    ctx.set_gpr(3, 0u + static_cast<std::uint32_t>(45));
    { const bool branch_taken = ctx.gpr[2] == ctx.gpr[3];
    // nop
      if (branch_taken) {
          goto L_08856848;
      }
      goto L_088567EC;
    }
L_088567EC:
    ctx.set_gpr(3, 0u + static_cast<std::uint32_t>(44));
    { const bool branch_taken = ctx.gpr[2] == ctx.gpr[3];
    // nop
      if (branch_taken) {
          goto L_08856848;
      }
      goto L_088567F8;
    }
L_088567F8:
    ctx.set_gpr(3, 0u + static_cast<std::uint32_t>(43));
    { const bool branch_taken = ctx.gpr[2] == ctx.gpr[3];
    // nop
      if (branch_taken) {
          goto L_08856848;
      }
      goto L_08856804;
    }
L_08856804:
    ctx.set_gpr(3, 0u + static_cast<std::uint32_t>(42));
    { const bool branch_taken = ctx.gpr[2] == ctx.gpr[3];
    // nop
      if (branch_taken) {
          goto L_08856848;
      }
      goto L_08856810;
    }
L_08856810:
    ctx.set_gpr(3, 0u + static_cast<std::uint32_t>(41));
    { const bool branch_taken = ctx.gpr[2] == ctx.gpr[3];
    // nop
      if (branch_taken) {
          goto L_08856848;
      }
      goto L_0885681C;
    }
L_0885681C:
    ctx.set_gpr(3, 0u + static_cast<std::uint32_t>(40));
    { const bool branch_taken = ctx.gpr[2] == ctx.gpr[3];
    // nop
      if (branch_taken) {
          goto L_08856848;
      }
      goto L_08856828;
    }
L_08856828:
    ctx.set_gpr(3, 0u + static_cast<std::uint32_t>(2));
    { const bool branch_taken = ctx.gpr[2] == ctx.gpr[3];
    // nop
      if (branch_taken) {
          goto L_08856848;
      }
      goto L_08856834;
    }
L_08856834:
    ctx.set_gpr(3, 0u + static_cast<std::uint32_t>(1));
    { const bool branch_taken = ctx.gpr[2] == ctx.gpr[3];
    // nop
      if (branch_taken) {
          goto L_08856848;
      }
      goto L_08856840;
    }
L_08856840:
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_0885684C;
      }
      goto L_08856848;
    }
L_08856848:
    ctx.set_gpr(17, 0u + static_cast<std::uint32_t>(1));
    goto L_0885684C;
L_0885684C:
    ctx.set_gpr(4, rt.memory().aot_load32(ctx.gpr[20] + static_cast<std::uint32_t>(32136)));
    goto L_08856850;
L_08856850:
    ctx.set_gpr(5, ctx.gpr[16] + 0u);
    ctx.set_gpr(31, 0x0885685Cu);
    ctx.set_gpr(6, ctx.gpr[17] + 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0022_entry, 22u, 385u, 0x0885D6F0u>(ctx, &aot_mem) && ctx.pc == 0x0885685Cu) goto L_0885685C;
    return;
L_0885685C:
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_088570B0;
      }
      goto L_08856864;
    }
L_08856864:
    ctx.set_gpr(2, ctx.gpr[5] + static_cast<std::uint32_t>(1));
    ctx.set_gpr(3, ctx.gpr[2] + static_cast<std::uint32_t>(1));
    rt.memory().aot_store32(ctx.gpr[20] + static_cast<std::uint32_t>(32012), ctx.gpr[2]);
    ctx.set_gpr(2, ctx.gpr[2] << 2u);
    ctx.set_gpr(2, ctx.gpr[2] + ctx.gpr[20]);
    rt.memory().aot_store32(ctx.gpr[20] + static_cast<std::uint32_t>(32012), ctx.gpr[3]);
    ctx.set_gpr(5, rt.memory().aot_load32(ctx.gpr[2] + static_cast<std::uint32_t>(12)));
    ctx.set_gpr(4, ctx.gpr[3] + static_cast<std::uint32_t>(1));
    ctx.set_gpr(2, ctx.gpr[3] << 2u);
    ctx.set_gpr(2, ctx.gpr[2] + ctx.gpr[20]);
    rt.memory().aot_store32(ctx.gpr[20] + static_cast<std::uint32_t>(32012), ctx.gpr[4]);
    ctx.fpr[0] = std::bit_cast<float>(rt.memory().aot_load32(ctx.gpr[2] + static_cast<std::uint32_t>(12)));
    ctx.set_gpr(2, 14979u << 16u);
    ctx.set_gpr(3, ctx.gpr[2] | 4719u);
    ctx.set_gpr(2, ctx.gpr[4] + static_cast<std::uint32_t>(1));
    rt.memory().aot_store32(ctx.gpr[20] + static_cast<std::uint32_t>(32012), ctx.gpr[2]);
    ctx.set_gpr(2, ctx.gpr[4] << 2u);
    ctx.fpr[2] = static_cast<float>(static_cast<std::int32_t>(ctx.fpr_bits(0)));
    ctx.set_gpr(2, ctx.gpr[2] + ctx.gpr[20]);
    ctx.set_gpr(4, rt.memory().aot_load32(ctx.gpr[20] + static_cast<std::uint32_t>(32136)));
    ctx.fpr[0] = std::bit_cast<float>(rt.memory().aot_load32(ctx.gpr[2] + static_cast<std::uint32_t>(12)));
    ctx.fpr[1] = std::bit_cast<float>(ctx.gpr[3]);
    { const float fs = ctx.fpr[1]; const float ft = ctx.fpr[2]; if ((std::isinf(fs) && ft == 0.0f) || (std::isinf(ft) && fs == 0.0f)) ctx.set_fpr_bits(12, 0x7FC00000u); else ctx.fpr[12] = fs * ft; }
    ctx.fpr[0] = static_cast<float>(static_cast<std::int32_t>(ctx.fpr_bits(0)));
    ctx.set_gpr(31, 0x088568CCu);
    { const float fs = ctx.fpr[1]; const float ft = ctx.fpr[0]; if ((std::isinf(fs) && ft == 0.0f) || (std::isinf(ft) && fs == 0.0f)) ctx.set_fpr_bits(13, 0x7FC00000u); else ctx.fpr[13] = fs * ft; }
    if (rt.invoke_chained_direct<&recomp_unit_0022_entry, 22u, 397u, 0x0885D7ACu>(ctx, &aot_mem) && ctx.pc == 0x088568CCu) goto L_088568CC;
    return;
L_088568CC:
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_088570B0;
      }
      goto L_088568D4;
    }
L_088568D4:
    ctx.set_gpr(3, ctx.gpr[5] + static_cast<std::uint32_t>(1));
    rt.memory().aot_store32(ctx.gpr[20] + static_cast<std::uint32_t>(32012), ctx.gpr[3]);
    ctx.set_gpr(2, ctx.gpr[3] + static_cast<std::uint32_t>(1));
    rt.memory().aot_store32(ctx.gpr[20] + static_cast<std::uint32_t>(32012), ctx.gpr[2]);
    ctx.set_gpr(2, ctx.gpr[3] << 2u);
    ctx.set_gpr(2, ctx.gpr[2] + ctx.gpr[20]);
    ctx.set_gpr(4, rt.memory().aot_load32(ctx.gpr[20] + static_cast<std::uint32_t>(32136)));
    ctx.set_gpr(31, 0x088568F8u);
    ctx.set_gpr(5, rt.memory().aot_load32(ctx.gpr[2] + static_cast<std::uint32_t>(12)));
    if (rt.invoke_chained_direct<&recomp_unit_0022_entry, 22u, 431u, 0x0885DA14u>(ctx, &aot_mem) && ctx.pc == 0x088568F8u) goto L_088568F8;
    return;
L_088568F8:
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_088570B0;
      }
      goto L_08856900;
    }
L_08856900:
    ctx.set_gpr(2, ctx.gpr[5] + static_cast<std::uint32_t>(1));
    ctx.set_gpr(5, ctx.gpr[2] + static_cast<std::uint32_t>(1));
    rt.memory().aot_store32(ctx.gpr[20] + static_cast<std::uint32_t>(32012), ctx.gpr[2]);
    ctx.set_gpr(2, ctx.gpr[2] << 2u);
    ctx.set_gpr(2, ctx.gpr[2] + ctx.gpr[20]);
    rt.memory().aot_store32(ctx.gpr[20] + static_cast<std::uint32_t>(32012), ctx.gpr[5]);
    ctx.set_gpr(4, rt.memory().aot_load32(ctx.gpr[2] + static_cast<std::uint32_t>(12)));
    ctx.set_gpr(3, ctx.gpr[5] + static_cast<std::uint32_t>(1));
    ctx.set_gpr(2, ctx.gpr[5] << 2u);
    rt.memory().aot_store32(ctx.gpr[20] + static_cast<std::uint32_t>(32012), ctx.gpr[3]);
    ctx.set_gpr(2, ctx.gpr[2] + ctx.gpr[20]);
    ctx.fpr[0] = std::bit_cast<float>(rt.memory().aot_load32(ctx.gpr[2] + static_cast<std::uint32_t>(12)));
    ctx.fpr[1] = static_cast<float>(static_cast<std::int32_t>(ctx.fpr_bits(0)));
    ctx.set_gpr(2, 14979u << 16u);
    ctx.set_gpr(3, ctx.gpr[2] | 4719u);
    ctx.set_gpr(2, 0u + static_cast<std::uint32_t>(1));
    ctx.fpr[0] = std::bit_cast<float>(ctx.gpr[3]);
    { const bool branch_taken = ctx.gpr[4] != ctx.gpr[2];
    { const float fs = ctx.fpr[0]; const float ft = ctx.fpr[1]; if ((std::isinf(fs) && ft == 0.0f) || (std::isinf(ft) && fs == 0.0f)) ctx.set_fpr_bits(12, 0x7FC00000u); else ctx.fpr[12] = fs * ft; }
      if (branch_taken) {
          goto L_0885695C;
      }
      goto L_0885694C;
    }
L_0885694C:
    ctx.set_gpr(31, 0x08856954u);
    ctx.set_gpr(4, rt.memory().aot_load32(ctx.gpr[20] + static_cast<std::uint32_t>(32136)));
    if (rt.invoke_chained_direct<&recomp_unit_0022_entry, 22u, 515u, 0x0885DEECu>(ctx, &aot_mem) && ctx.pc == 0x08856954u) goto L_08856954;
    return;
L_08856954:
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_088570B0;
      }
      goto L_0885695C;
    }
L_0885695C:
    ctx.set_gpr(31, 0x08856964u);
    ctx.set_gpr(4, rt.memory().aot_load32(ctx.gpr[20] + static_cast<std::uint32_t>(32136)));
    if (rt.invoke_chained_direct<&recomp_unit_0022_entry, 22u, 529u, 0x0885DF90u>(ctx, &aot_mem) && ctx.pc == 0x08856964u) goto L_08856964;
    return;
L_08856964:
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_088570B0;
      }
      goto L_0885696C;
    }
L_0885696C:
    ctx.set_gpr(3, ctx.gpr[5] + static_cast<std::uint32_t>(1));
    rt.memory().aot_store32(ctx.gpr[20] + static_cast<std::uint32_t>(32012), ctx.gpr[3]);
    ctx.set_gpr(2, ctx.gpr[3] + static_cast<std::uint32_t>(1));
    rt.memory().aot_store32(ctx.gpr[20] + static_cast<std::uint32_t>(32012), ctx.gpr[2]);
    ctx.set_gpr(2, ctx.gpr[3] << 2u);
    ctx.set_gpr(2, ctx.gpr[2] + ctx.gpr[20]);
    ctx.set_gpr(2, rt.memory().aot_load32(ctx.gpr[2] + static_cast<std::uint32_t>(12)));
    ctx.set_gpr(4, rt.memory().aot_load32(ctx.gpr[20] + static_cast<std::uint32_t>(32128)));
    ctx.set_gpr(31, 0x08856994u);
    ctx.set_gpr(5, ctx.gpr[2] + static_cast<std::uint32_t>(-1));
    if (rt.invoke_chained_direct<&recomp_unit_0025_entry, 25u, 664u, 0x0886AC04u>(ctx, &aot_mem) && ctx.pc == 0x08856994u) goto L_08856994;
    return;
L_08856994:
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_088570B0;
      }
      goto L_0885699C;
    }
L_0885699C:
    ctx.set_gpr(2, ctx.gpr[5] + static_cast<std::uint32_t>(1));
    rt.memory().aot_store32(ctx.gpr[20] + static_cast<std::uint32_t>(32012), ctx.gpr[2]);
    ctx.set_gpr(31, 0x088569ACu);
    ctx.set_gpr(4, rt.memory().aot_load32(ctx.gpr[20] + static_cast<std::uint32_t>(32128)));
    goto L_088555C0;
L_088569AC:
    ctx.set_gpr(3, 0u + static_cast<std::uint32_t>(-1));
    if (ctx.gpr[2] != ctx.gpr[3]) {
    ctx.set_gpr(4, rt.memory().aot_load32(ctx.gpr[20] + static_cast<std::uint32_t>(32128)));
        goto L_08856A30;
    }
    goto L_088569B8;
L_088569B8:
    ctx.set_gpr(4, rt.memory().aot_load32(ctx.gpr[20] + static_cast<std::uint32_t>(32160)));
    ctx.set_gpr(2, 49024u << 16u);
    ctx.set_gpr(7, 0u + static_cast<std::uint32_t>(1));
    ctx.fpr[12] = std::bit_cast<float>(0u);
    ctx.fpr[13] = std::bit_cast<float>(ctx.gpr[2]);
    ctx.set_gpr(5, 0u + static_cast<std::uint32_t>(2));
    ctx.set_gpr(6, 0u + 0u);
    ctx.set_gpr(8, ctx.gpr[7] + 0u);
    ctx.set_gpr(31, 0x088569E0u);
    ctx.set_gpr(9, 0u + 0u);
    goto L_088555B8;
L_088569E0:
    if (static_cast<std::int32_t>(ctx.gpr[2]) < 0) {
    ctx.set_gpr(4, rt.memory().aot_load32(ctx.gpr[20] + static_cast<std::uint32_t>(32128)));
        goto L_08856AD4;
    }
    goto L_088569E8;
L_088569E8:
    ctx.set_gpr(2, 49024u << 16u);
    ctx.fpr[13] = std::bit_cast<float>(ctx.gpr[2]);
    ctx.set_gpr(2, 16448u << 16u);
    ctx.set_gpr(4, rt.memory().aot_load32(ctx.gpr[20] + static_cast<std::uint32_t>(32160)));
    ctx.fpr[12] = std::bit_cast<float>(0u);
    ctx.fpr[14] = std::bit_cast<float>(ctx.gpr[2]);
    ctx.set_gpr(5, 0u + static_cast<std::uint32_t>(2));
    ctx.set_gpr(6, 0u + 0u);
    ctx.set_gpr(7, 0u + 0u);
    ctx.set_gpr(8, 0u + static_cast<std::uint32_t>(1));
    ctx.set_gpr(31, 0x08856A18u);
    ctx.set_gpr(9, 0u + 0u);
    goto L_088555A8;
L_08856A18:
    ctx.set_gpr(4, rt.memory().aot_load32(ctx.gpr[20] + static_cast<std::uint32_t>(32160)));
    ctx.set_gpr(5, 0u + 0u);
    ctx.set_gpr(31, 0x08856A28u);
    ctx.set_gpr(6, 0u + static_cast<std::uint32_t>(100));
    if (rt.invoke_chained_direct<&recomp_unit_0171_entry, 171u, 921u, 0x08AB35E8u>(ctx, &aot_mem) && ctx.pc == 0x08856A28u) goto L_08856A28;
    return;
L_08856A28:
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_08856AD0;
      }
      goto L_08856A30;
    }
L_08856A30:
    ctx.set_gpr(31, 0x08856A38u);
    // nop
    goto L_088555C0;
L_08856A38:
    ctx.set_gpr(6, ctx.gpr[2] + 0u);
    ctx.fpr[12] = std::bit_cast<float>(0u);
    ctx.set_gpr(2, 16448u << 16u);
    ctx.set_gpr(4, rt.memory().aot_load32(ctx.gpr[20] + static_cast<std::uint32_t>(32160)));
    ctx.fpr[15] = std::bit_cast<float>(ctx.gpr[2]);
    ctx.set_gpr(5, 0u + static_cast<std::uint32_t>(1));
    ctx.set_gpr(7, 0u + 0u);
    ctx.set_fpr_bits(13, ctx.fpr_bits(12));
    ctx.set_fpr_bits(14, ctx.fpr_bits(12));
    ctx.set_gpr(31, 0x08856A64u);
    ctx.set_gpr(8, 0u + 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0171_entry, 171u, 308u, 0x08AB11D4u>(ctx, &aot_mem) && ctx.pc == 0x08856A64u) goto L_08856A64;
    return;
L_08856A64:
    ctx.set_gpr(4, rt.memory().aot_load32(ctx.gpr[20] + static_cast<std::uint32_t>(32160)));
    ctx.set_gpr(5, 0u + 0u);
    ctx.set_gpr(31, 0x08856A74u);
    ctx.set_gpr(6, 0u + static_cast<std::uint32_t>(100));
    if (rt.invoke_chained_direct<&recomp_unit_0171_entry, 171u, 936u, 0x08AB36B0u>(ctx, &aot_mem) && ctx.pc == 0x08856A74u) goto L_08856A74;
    return;
L_08856A74:
    ctx.set_gpr(31, 0x08856A7Cu);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0017_entry, 17u, 182u, 0x08848C18u>(ctx, &aot_mem) && ctx.pc == 0x08856A7Cu) goto L_08856A7C;
    return;
L_08856A7C:
    ctx.set_gpr(31, 0x08856A84u);
    ctx.set_gpr(4, ctx.gpr[2] + 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0023_entry, 23u, 485u, 0x08861D50u>(ctx, &aot_mem) && ctx.pc == 0x08856A84u) goto L_08856A84;
    return;
L_08856A84:
    ctx.set_gpr(3, 0u + static_cast<std::uint32_t>(2));
    if (ctx.gpr[2] != ctx.gpr[3]) {
    ctx.set_gpr(4, rt.memory().aot_load32(ctx.gpr[20] + static_cast<std::uint32_t>(32160)));
        goto L_08856AC4;
    }
    goto L_08856A90;
L_08856A90:
    ctx.set_gpr(31, 0x08856A98u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0017_entry, 17u, 182u, 0x08848C18u>(ctx, &aot_mem) && ctx.pc == 0x08856A98u) goto L_08856A98;
    return;
L_08856A98:
    ctx.set_gpr(31, 0x08856AA0u);
    ctx.set_gpr(4, ctx.gpr[2] + 0u);
    goto L_088571B0;
L_08856AA0:
    { const bool branch_taken = ctx.gpr[2] == 0u;
    // nop
      if (branch_taken) {
          goto L_08856AC0;
      }
      goto L_08856AA8;
    }
L_08856AA8:
    ctx.set_gpr(4, rt.memory().aot_load32(ctx.gpr[20] + static_cast<std::uint32_t>(32160)));
    ctx.set_gpr(5, 0u + static_cast<std::uint32_t>(1));
    ctx.set_gpr(31, 0x08856AB8u);
    ctx.set_gpr(6, 0u + 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0171_entry, 171u, 936u, 0x08AB36B0u>(ctx, &aot_mem) && ctx.pc == 0x08856AB8u) goto L_08856AB8;
    return;
L_08856AB8:
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_08856AD0;
      }
      goto L_08856AC0;
    }
L_08856AC0:
    ctx.set_gpr(4, rt.memory().aot_load32(ctx.gpr[20] + static_cast<std::uint32_t>(32160)));
    goto L_08856AC4;
L_08856AC4:
    ctx.set_gpr(5, 0u + static_cast<std::uint32_t>(1));
    ctx.set_gpr(31, 0x08856AD0u);
    ctx.set_gpr(6, 0u + static_cast<std::uint32_t>(100));
    if (rt.invoke_chained_direct<&recomp_unit_0171_entry, 171u, 936u, 0x08AB36B0u>(ctx, &aot_mem) && ctx.pc == 0x08856AD0u) goto L_08856AD0;
    return;
L_08856AD0:
    ctx.set_gpr(4, rt.memory().aot_load32(ctx.gpr[20] + static_cast<std::uint32_t>(32128)));
    goto L_08856AD4;
L_08856AD4:
    ctx.set_gpr(31, 0x08856ADCu);
    // nop
    goto L_08857198;
L_08856ADC:
    if (ctx.gpr[2] == 0u) {
    ctx.set_gpr(2, 0u + static_cast<std::uint32_t>(1));
        goto L_08856AF4;
    }
    goto L_08856AE4;
L_08856AE4:
    ctx.set_gpr(4, rt.memory().aot_load32(ctx.gpr[20] + static_cast<std::uint32_t>(32160)));
    ctx.set_gpr(31, 0x08856AF0u);
    ctx.set_gpr(5, 0u + static_cast<std::uint32_t>(1));
    if (rt.invoke_chained_direct<&recomp_unit_0171_entry, 171u, 336u, 0x08AB13D4u>(ctx, &aot_mem) && ctx.pc == 0x08856AF0u) goto L_08856AF0;
    return;
L_08856AF0:
    ctx.set_gpr(2, 0u + static_cast<std::uint32_t>(1));
    goto L_08856AF4;
L_08856AF4:
    { const bool branch_taken = 0u == 0u;
    rt.memory().aot_store8(ctx.gpr[23] + static_cast<std::uint32_t>(0), static_cast<std::uint8_t>(ctx.gpr[2]));
      if (branch_taken) {
          goto L_088570B0;
      }
      goto L_08856AFC;
    }
L_08856AFC:
    ctx.set_gpr(3, ctx.gpr[5] + static_cast<std::uint32_t>(1));
    rt.memory().aot_store32(ctx.gpr[20] + static_cast<std::uint32_t>(32012), ctx.gpr[3]);
    ctx.set_gpr(2, ctx.gpr[3] + static_cast<std::uint32_t>(1));
    rt.memory().aot_store32(ctx.gpr[20] + static_cast<std::uint32_t>(32012), ctx.gpr[2]);
    ctx.set_gpr(2, ctx.gpr[3] << 2u);
    ctx.set_gpr(2, ctx.gpr[2] + ctx.gpr[20]);
    ctx.set_gpr(31, 0x08856B1Cu);
    ctx.set_gpr(16, rt.memory().aot_load32(ctx.gpr[2] + static_cast<std::uint32_t>(12)));
    if (rt.invoke_chained_direct<&recomp_unit_0017_entry, 17u, 182u, 0x08848C18u>(ctx, &aot_mem) && ctx.pc == 0x08856B1Cu) goto L_08856B1C;
    return;
L_08856B1C:
    ctx.set_gpr(31, 0x08856B24u);
    ctx.set_gpr(4, ctx.gpr[2] + 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0023_entry, 23u, 486u, 0x08861D58u>(ctx, &aot_mem) && ctx.pc == 0x08856B24u) goto L_08856B24;
    return;
L_08856B24:
    { const bool branch_taken = ctx.gpr[2] != 0u;
    // nop
      if (branch_taken) {
          goto L_088570B0;
      }
      goto L_08856B2C;
    }
L_08856B2C:
    ctx.set_gpr(2, 0u + static_cast<std::uint32_t>(3));
    if (ctx.gpr[16] == ctx.gpr[2]) {
    ctx.set_gpr(4, rt.memory().aot_load32(ctx.gpr[20] + static_cast<std::uint32_t>(32128)));
        goto L_08856B5C;
    }
    goto L_08856B38;
L_08856B38:
    ctx.set_gpr(2, 0u + static_cast<std::uint32_t>(1));
    if (ctx.gpr[16] == ctx.gpr[2]) {
    ctx.set_gpr(4, rt.memory().aot_load32(ctx.gpr[20] + static_cast<std::uint32_t>(32128)));
        goto L_08856B4C;
    }
    goto L_08856B44;
L_08856B44:
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_088570B0;
      }
      goto L_08856B4C;
    }
L_08856B4C:
    ctx.set_gpr(31, 0x08856B54u);
    // nop
    goto L_08857140;
L_08856B54:
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_088570B0;
      }
      goto L_08856B5C;
    }
L_08856B5C:
    ctx.set_gpr(31, 0x08856B64u);
    // nop
    goto L_088570FC;
L_08856B64:
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_088570B0;
      }
      goto L_08856B6C;
    }
L_08856B6C:
    ctx.set_gpr(2, ctx.gpr[5] + static_cast<std::uint32_t>(1));
    ctx.set_gpr(4, ctx.gpr[2] + static_cast<std::uint32_t>(1));
    rt.memory().aot_store32(ctx.gpr[20] + static_cast<std::uint32_t>(32012), ctx.gpr[2]);
    ctx.set_gpr(2, ctx.gpr[2] << 2u);
    ctx.set_gpr(2, ctx.gpr[2] + ctx.gpr[20]);
    rt.memory().aot_store32(ctx.gpr[20] + static_cast<std::uint32_t>(32012), ctx.gpr[4]);
    ctx.set_gpr(16, rt.memory().aot_load32(ctx.gpr[2] + static_cast<std::uint32_t>(12)));
    ctx.set_gpr(3, ctx.gpr[4] + static_cast<std::uint32_t>(1));
    ctx.set_gpr(6, 0u + 0u);
    ctx.set_gpr(2, ctx.gpr[4] << 2u);
    rt.memory().aot_store32(ctx.gpr[20] + static_cast<std::uint32_t>(32012), ctx.gpr[3]);
    ctx.set_gpr(2, ctx.gpr[2] + ctx.gpr[20]);
    ctx.fpr[0] = std::bit_cast<float>(rt.memory().aot_load32(ctx.gpr[2] + static_cast<std::uint32_t>(12)));
    ctx.set_gpr(4, rt.memory().aot_load32(ctx.gpr[20] + static_cast<std::uint32_t>(32164)));
    ctx.set_gpr(5, ctx.gpr[16] + 0u);
    ctx.fpr[1] = static_cast<float>(static_cast<std::int32_t>(ctx.fpr_bits(0)));
    ctx.set_gpr(2, 14979u << 16u);
    ctx.set_gpr(2, ctx.gpr[2] | 4719u);
    ctx.set_gpr(7, 0u + 0u);
    ctx.set_gpr(8, 0u + 0u);
    ctx.fpr[0] = std::bit_cast<float>(ctx.gpr[2]);
    ctx.set_gpr(31, 0x08856BC8u);
    { const float fs = ctx.fpr[0]; const float ft = ctx.fpr[1]; if ((std::isinf(fs) && ft == 0.0f) || (std::isinf(ft) && fs == 0.0f)) ctx.set_fpr_bits(20, 0x7FC00000u); else ctx.fpr[20] = fs * ft; }
    if (rt.invoke_chained_direct<&recomp_unit_0164_entry, 164u, 373u, 0x08A95BC8u>(ctx, &aot_mem) && ctx.pc == 0x08856BC8u) goto L_08856BC8;
    return;
L_08856BC8:
    ctx.set_gpr(4, rt.memory().aot_load32(ctx.gpr[20] + static_cast<std::uint32_t>(32136)));
    ctx.set_fpr_bits(12, ctx.fpr_bits(20));
    ctx.set_gpr(6, ctx.gpr[19] + 0u);
    ctx.set_gpr(25, rt.memory().aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(200)));
    ctx.set_gpr(25, rt.memory().aot_load32(ctx.gpr[25] + static_cast<std::uint32_t>(40)));
    jump_target = ctx.gpr[25];
    ctx.set_gpr(31, 0x08856BE4u);
    ctx.set_gpr(7, ctx.gpr[18] + 0u);
    ctx.pc = jump_target;
    if (rt.invoke_chained_call(ctx, &aot_mem) && ctx.pc == 0x08856BE4u) goto L_08856BE4;
    return;
L_08856BE4:
    ctx.set_gpr(31, 0x08856BECu);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0017_entry, 17u, 182u, 0x08848C18u>(ctx, &aot_mem) && ctx.pc == 0x08856BECu) goto L_08856BEC;
    return;
L_08856BEC:
    ctx.set_gpr(31, 0x08856BF4u);
    ctx.set_gpr(4, ctx.gpr[2] + 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0023_entry, 23u, 485u, 0x08861D50u>(ctx, &aot_mem) && ctx.pc == 0x08856BF4u) goto L_08856BF4;
    return;
L_08856BF4:
    ctx.set_gpr(2, static_cast<std::int32_t>(ctx.gpr[2]) < 6 ? 1u : 0u);
    { const bool branch_taken = ctx.gpr[2] != 0u;
    // nop
      if (branch_taken) {
          goto L_088570B0;
      }
      goto L_08856C00;
    }
L_08856C00:
    { const bool branch_taken = 0u == 0u;
    rt.memory().aot_store32(ctx.gpr[20] + static_cast<std::uint32_t>(32104), ctx.gpr[16]);
      if (branch_taken) {
          goto L_088570B0;
      }
      goto L_08856C08;
    }
L_08856C08:
    ctx.set_gpr(2, ctx.gpr[5] + static_cast<std::uint32_t>(1));
    ctx.set_gpr(4, ctx.gpr[2] + static_cast<std::uint32_t>(1));
    rt.memory().aot_store32(ctx.gpr[20] + static_cast<std::uint32_t>(32012), ctx.gpr[2]);
    ctx.set_gpr(2, ctx.gpr[2] << 2u);
    ctx.set_gpr(2, ctx.gpr[2] + ctx.gpr[20]);
    rt.memory().aot_store32(ctx.gpr[20] + static_cast<std::uint32_t>(32012), ctx.gpr[4]);
    ctx.fpr[0] = std::bit_cast<float>(rt.memory().aot_load32(ctx.gpr[2] + static_cast<std::uint32_t>(12)));
    ctx.set_gpr(3, ctx.gpr[4] + static_cast<std::uint32_t>(1));
    ctx.fpr[0] = static_cast<float>(static_cast<std::int32_t>(ctx.fpr_bits(0)));
    rt.memory().aot_store32(ctx.gpr[20] + static_cast<std::uint32_t>(32012), ctx.gpr[3]);
    ctx.set_gpr(3, 17008u << 16u);
    ctx.set_gpr(2, ctx.gpr[4] << 2u);
    ctx.set_gpr(2, ctx.gpr[2] + ctx.gpr[20]);
    ctx.set_gpr(2, rt.memory().aot_load32(ctx.gpr[2] + static_cast<std::uint32_t>(12)));
    ctx.fpr[1] = std::bit_cast<float>(ctx.gpr[3]);
    ctx.fpr[1] = ctx.fpr[1] / ctx.fpr[0];
    ctx.set_gpr(2, ctx.gpr[2] + static_cast<std::uint32_t>(1));
    ctx.set_gpr(4, rt.memory().aot_load32(ctx.gpr[20] + static_cast<std::uint32_t>(32144)));
    ctx.fpr[0] = std::bit_cast<float>(ctx.gpr[2]);
    ctx.fpr[0] = static_cast<float>(static_cast<std::int32_t>(ctx.fpr_bits(0)));
    ctx.set_gpr(31, 0x08856C60u);
    { const float fs = ctx.fpr[1]; const float ft = ctx.fpr[0]; if ((std::isinf(fs) && ft == 0.0f) || (std::isinf(ft) && fs == 0.0f)) ctx.set_fpr_bits(12, 0x7FC00000u); else ctx.fpr[12] = fs * ft; }
    goto L_088570F4;
L_08856C60:
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_088570B0;
      }
      goto L_08856C68;
    }
L_08856C68:
    ctx.set_gpr(3, ctx.gpr[5] + static_cast<std::uint32_t>(1));
    rt.memory().aot_store32(ctx.gpr[20] + static_cast<std::uint32_t>(32012), ctx.gpr[3]);
    ctx.set_gpr(2, ctx.gpr[3] + static_cast<std::uint32_t>(1));
    rt.memory().aot_store32(ctx.gpr[20] + static_cast<std::uint32_t>(32012), ctx.gpr[2]);
    ctx.set_gpr(2, ctx.gpr[3] << 2u);
    ctx.set_gpr(2, ctx.gpr[2] + ctx.gpr[20]);
    ctx.fpr[0] = std::bit_cast<float>(rt.memory().aot_load32(ctx.gpr[2] + static_cast<std::uint32_t>(12)));
    ctx.set_gpr(4, rt.memory().aot_load32(ctx.gpr[20] + static_cast<std::uint32_t>(32136)));
    ctx.fpr[1] = static_cast<float>(static_cast<std::int32_t>(ctx.fpr_bits(0)));
    ctx.set_gpr(2, 14979u << 16u);
    ctx.set_gpr(2, ctx.gpr[2] | 4719u);
    ctx.fpr[0] = std::bit_cast<float>(ctx.gpr[2]);
    ctx.set_gpr(31, 0x08856CA0u);
    { const float fs = ctx.fpr[0]; const float ft = ctx.fpr[1]; if ((std::isinf(fs) && ft == 0.0f) || (std::isinf(ft) && fs == 0.0f)) ctx.set_fpr_bits(12, 0x7FC00000u); else ctx.fpr[12] = fs * ft; }
    goto L_088570EC;
L_08856CA0:
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_088570B0;
      }
      goto L_08856CA8;
    }
L_08856CA8:
    ctx.set_gpr(2, ctx.gpr[5] + static_cast<std::uint32_t>(1));
    ctx.set_gpr(4, ctx.gpr[2] + static_cast<std::uint32_t>(1));
    rt.memory().aot_store32(ctx.gpr[20] + static_cast<std::uint32_t>(32012), ctx.gpr[2]);
    ctx.set_gpr(2, ctx.gpr[2] << 2u);
    ctx.set_gpr(2, ctx.gpr[2] + ctx.gpr[20]);
    rt.memory().aot_store32(ctx.gpr[20] + static_cast<std::uint32_t>(32012), ctx.gpr[4]);
    ctx.set_gpr(16, rt.memory().aot_load32(ctx.gpr[2] + static_cast<std::uint32_t>(12)));
    ctx.set_gpr(3, ctx.gpr[4] + static_cast<std::uint32_t>(1));
    ctx.set_gpr(2, ctx.gpr[4] << 2u);
    rt.memory().aot_store32(ctx.gpr[20] + static_cast<std::uint32_t>(32012), ctx.gpr[3]);
    ctx.set_gpr(2, ctx.gpr[2] + ctx.gpr[20]);
    ctx.set_gpr(17, rt.memory().aot_load32(ctx.gpr[2] + static_cast<std::uint32_t>(12)));
    ctx.set_gpr(4, rt.memory().aot_load32(ctx.gpr[20] + static_cast<std::uint32_t>(32164)));
    ctx.set_gpr(5, ctx.gpr[16] + 0u);
    ctx.set_gpr(2, 15820u << 16u);
    ctx.set_gpr(2, ctx.gpr[2] | 52429u);
    ctx.fpr[12] = std::bit_cast<float>(ctx.gpr[2]);
    ctx.set_gpr(31, 0x08856CF4u);
    ctx.set_gpr(6, ctx.gpr[17] + 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0165_entry, 165u, 626u, 0x08A9BC5Cu>(ctx, &aot_mem) && ctx.pc == 0x08856CF4u) goto L_08856CF4;
    return;
L_08856CF4:
    ctx.set_gpr(31, 0x08856CFCu);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0017_entry, 17u, 182u, 0x08848C18u>(ctx, &aot_mem) && ctx.pc == 0x08856CFCu) goto L_08856CFC;
    return;
L_08856CFC:
    ctx.set_gpr(31, 0x08856D04u);
    ctx.set_gpr(4, ctx.gpr[2] + 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0023_entry, 23u, 485u, 0x08861D50u>(ctx, &aot_mem) && ctx.pc == 0x08856D04u) goto L_08856D04;
    return;
L_08856D04:
    ctx.set_gpr(2, static_cast<std::int32_t>(ctx.gpr[2]) < 6 ? 1u : 0u);
    { const bool branch_taken = ctx.gpr[2] != 0u;
    // nop
      if (branch_taken) {
          goto L_088570B0;
      }
      goto L_08856D10;
    }
L_08856D10:
    rt.memory().aot_store32(ctx.gpr[20] + static_cast<std::uint32_t>(32112), ctx.gpr[16]);
    { const bool branch_taken = 0u == 0u;
    rt.memory().aot_store32(ctx.gpr[20] + static_cast<std::uint32_t>(32116), ctx.gpr[17]);
      if (branch_taken) {
          goto L_088570B0;
      }
      goto L_08856D1C;
    }
L_08856D1C:
    ctx.set_gpr(2, ctx.gpr[5] + static_cast<std::uint32_t>(1));
    rt.memory().aot_store32(ctx.gpr[20] + static_cast<std::uint32_t>(32012), ctx.gpr[2]);
    ctx.set_gpr(4, ctx.gpr[2] + static_cast<std::uint32_t>(1));
    ctx.set_gpr(2, ctx.gpr[2] << 2u);
    ctx.set_gpr(2, ctx.gpr[2] + ctx.gpr[20]);
    rt.memory().aot_store32(ctx.gpr[20] + static_cast<std::uint32_t>(32012), ctx.gpr[4]);
    ctx.fpr[0] = std::bit_cast<float>(rt.memory().aot_load32(ctx.gpr[2] + static_cast<std::uint32_t>(12)));
    ctx.set_gpr(5, ctx.gpr[29] + static_cast<std::uint32_t>(640));
    ctx.set_gpr(2, 14979u << 16u);
    ctx.set_gpr(3, ctx.gpr[2] | 4719u);
    ctx.set_gpr(2, ctx.gpr[4] + static_cast<std::uint32_t>(1));
    rt.memory().aot_store32(ctx.gpr[20] + static_cast<std::uint32_t>(32012), ctx.gpr[2]);
    ctx.set_gpr(2, ctx.gpr[4] << 2u);
    ctx.set_gpr(2, ctx.gpr[2] + ctx.gpr[20]);
    ctx.fpr[1] = std::bit_cast<float>(rt.memory().aot_load32(ctx.gpr[2] + static_cast<std::uint32_t>(12)));
    ctx.fpr[2] = static_cast<float>(static_cast<std::int32_t>(ctx.fpr_bits(0)));
    ctx.set_gpr(4, ctx.gpr[29] + static_cast<std::uint32_t>(100));
    ctx.fpr[0] = std::bit_cast<float>(ctx.gpr[3]);
    ctx.fpr[1] = static_cast<float>(static_cast<std::int32_t>(ctx.fpr_bits(1)));
    { const float fs = ctx.fpr[0]; const float ft = ctx.fpr[1]; if ((std::isinf(fs) && ft == 0.0f) || (std::isinf(ft) && fs == 0.0f)) ctx.set_fpr_bits(1, 0x7FC00000u); else ctx.fpr[1] = fs * ft; }
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(640), std::bit_cast<std::uint32_t>(ctx.fpr[1]));
    ctx.set_gpr(3, rt.memory().aot_load32(ctx.gpr[20] + static_cast<std::uint32_t>(32012)));
    { const float fs = ctx.fpr[0]; const float ft = ctx.fpr[2]; if ((std::isinf(fs) && ft == 0.0f) || (std::isinf(ft) && fs == 0.0f)) ctx.set_fpr_bits(20, 0x7FC00000u); else ctx.fpr[20] = fs * ft; }
    ctx.set_gpr(2, ctx.gpr[3] + static_cast<std::uint32_t>(1));
    rt.memory().aot_store32(ctx.gpr[20] + static_cast<std::uint32_t>(32012), ctx.gpr[2]);
    ctx.set_gpr(2, ctx.gpr[3] << 2u);
    ctx.set_gpr(2, ctx.gpr[2] + ctx.gpr[20]);
    ctx.fpr[1] = std::bit_cast<float>(rt.memory().aot_load32(ctx.gpr[2] + static_cast<std::uint32_t>(12)));
    ctx.fpr[1] = static_cast<float>(static_cast<std::int32_t>(ctx.fpr_bits(1)));
    { const float fs = ctx.fpr[0]; const float ft = ctx.fpr[1]; if ((std::isinf(fs) && ft == 0.0f) || (std::isinf(ft) && fs == 0.0f)) ctx.set_fpr_bits(1, 0x7FC00000u); else ctx.fpr[1] = fs * ft; }
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(644), std::bit_cast<std::uint32_t>(ctx.fpr[1]));
    ctx.set_gpr(3, rt.memory().aot_load32(ctx.gpr[20] + static_cast<std::uint32_t>(32012)));
    ctx.set_gpr(2, ctx.gpr[3] + static_cast<std::uint32_t>(1));
    rt.memory().aot_store32(ctx.gpr[20] + static_cast<std::uint32_t>(32012), ctx.gpr[2]);
    ctx.set_gpr(2, ctx.gpr[3] << 2u);
    ctx.set_gpr(2, ctx.gpr[2] + ctx.gpr[20]);
    ctx.fpr[1] = std::bit_cast<float>(rt.memory().aot_load32(ctx.gpr[2] + static_cast<std::uint32_t>(12)));
    ctx.fpr[1] = static_cast<float>(static_cast<std::int32_t>(ctx.fpr_bits(1)));
    { const float fs = ctx.fpr[0]; const float ft = ctx.fpr[1]; if ((std::isinf(fs) && ft == 0.0f) || (std::isinf(ft) && fs == 0.0f)) ctx.set_fpr_bits(1, 0x7FC00000u); else ctx.fpr[1] = fs * ft; }
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(648), std::bit_cast<std::uint32_t>(ctx.fpr[1]));
    ctx.set_gpr(3, rt.memory().aot_load32(ctx.gpr[20] + static_cast<std::uint32_t>(32012)));
    ctx.set_gpr(2, ctx.gpr[3] + static_cast<std::uint32_t>(1));
    rt.memory().aot_store32(ctx.gpr[20] + static_cast<std::uint32_t>(32012), ctx.gpr[2]);
    ctx.set_gpr(2, ctx.gpr[3] << 2u);
    ctx.set_gpr(2, ctx.gpr[2] + ctx.gpr[20]);
    ctx.fpr[1] = std::bit_cast<float>(rt.memory().aot_load32(ctx.gpr[2] + static_cast<std::uint32_t>(12)));
    ctx.fpr[1] = static_cast<float>(static_cast<std::int32_t>(ctx.fpr_bits(1)));
    { const float fs = ctx.fpr[0]; const float ft = ctx.fpr[1]; if ((std::isinf(fs) && ft == 0.0f) || (std::isinf(ft) && fs == 0.0f)) ctx.set_fpr_bits(1, 0x7FC00000u); else ctx.fpr[1] = fs * ft; }
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(652), std::bit_cast<std::uint32_t>(ctx.fpr[1]));
    ctx.set_gpr(3, rt.memory().aot_load32(ctx.gpr[20] + static_cast<std::uint32_t>(32012)));
    ctx.set_gpr(2, ctx.gpr[3] + static_cast<std::uint32_t>(1));
    rt.memory().aot_store32(ctx.gpr[20] + static_cast<std::uint32_t>(32012), ctx.gpr[2]);
    ctx.set_gpr(2, ctx.gpr[3] << 2u);
    ctx.set_gpr(2, ctx.gpr[2] + ctx.gpr[20]);
    ctx.fpr[1] = std::bit_cast<float>(rt.memory().aot_load32(ctx.gpr[2] + static_cast<std::uint32_t>(12)));
    ctx.fpr[1] = static_cast<float>(static_cast<std::int32_t>(ctx.fpr_bits(1)));
    { const float fs = ctx.fpr[0]; const float ft = ctx.fpr[1]; if ((std::isinf(fs) && ft == 0.0f) || (std::isinf(ft) && fs == 0.0f)) ctx.set_fpr_bits(1, 0x7FC00000u); else ctx.fpr[1] = fs * ft; }
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(656), std::bit_cast<std::uint32_t>(ctx.fpr[1]));
    ctx.set_gpr(3, rt.memory().aot_load32(ctx.gpr[20] + static_cast<std::uint32_t>(32012)));
    ctx.set_gpr(2, ctx.gpr[3] + static_cast<std::uint32_t>(1));
    rt.memory().aot_store32(ctx.gpr[20] + static_cast<std::uint32_t>(32012), ctx.gpr[2]);
    ctx.set_gpr(2, ctx.gpr[3] << 2u);
    ctx.set_gpr(2, ctx.gpr[2] + ctx.gpr[20]);
    ctx.fpr[1] = std::bit_cast<float>(rt.memory().aot_load32(ctx.gpr[2] + static_cast<std::uint32_t>(12)));
    ctx.fpr[1] = static_cast<float>(static_cast<std::int32_t>(ctx.fpr_bits(1)));
    { const float fs = ctx.fpr[0]; const float ft = ctx.fpr[1]; if ((std::isinf(fs) && ft == 0.0f) || (std::isinf(ft) && fs == 0.0f)) ctx.set_fpr_bits(1, 0x7FC00000u); else ctx.fpr[1] = fs * ft; }
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(660), std::bit_cast<std::uint32_t>(ctx.fpr[1]));
    ctx.set_gpr(3, rt.memory().aot_load32(ctx.gpr[20] + static_cast<std::uint32_t>(32012)));
    ctx.set_gpr(2, ctx.gpr[3] + static_cast<std::uint32_t>(1));
    rt.memory().aot_store32(ctx.gpr[20] + static_cast<std::uint32_t>(32012), ctx.gpr[2]);
    ctx.set_gpr(2, ctx.gpr[3] << 2u);
    ctx.set_gpr(2, ctx.gpr[2] + ctx.gpr[20]);
    ctx.fpr[1] = std::bit_cast<float>(rt.memory().aot_load32(ctx.gpr[2] + static_cast<std::uint32_t>(12)));
    ctx.fpr[1] = static_cast<float>(static_cast<std::int32_t>(ctx.fpr_bits(1)));
    { const float fs = ctx.fpr[0]; const float ft = ctx.fpr[1]; if ((std::isinf(fs) && ft == 0.0f) || (std::isinf(ft) && fs == 0.0f)) ctx.set_fpr_bits(1, 0x7FC00000u); else ctx.fpr[1] = fs * ft; }
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(664), std::bit_cast<std::uint32_t>(ctx.fpr[1]));
    ctx.set_gpr(3, rt.memory().aot_load32(ctx.gpr[20] + static_cast<std::uint32_t>(32012)));
    ctx.set_gpr(2, ctx.gpr[3] + static_cast<std::uint32_t>(1));
    rt.memory().aot_store32(ctx.gpr[20] + static_cast<std::uint32_t>(32012), ctx.gpr[2]);
    ctx.set_gpr(2, ctx.gpr[3] << 2u);
    ctx.set_gpr(2, ctx.gpr[2] + ctx.gpr[20]);
    ctx.fpr[1] = std::bit_cast<float>(rt.memory().aot_load32(ctx.gpr[2] + static_cast<std::uint32_t>(12)));
    ctx.fpr[1] = static_cast<float>(static_cast<std::int32_t>(ctx.fpr_bits(1)));
    { const float fs = ctx.fpr[0]; const float ft = ctx.fpr[1]; if ((std::isinf(fs) && ft == 0.0f) || (std::isinf(ft) && fs == 0.0f)) ctx.set_fpr_bits(1, 0x7FC00000u); else ctx.fpr[1] = fs * ft; }
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(668), std::bit_cast<std::uint32_t>(ctx.fpr[1]));
    ctx.set_gpr(3, rt.memory().aot_load32(ctx.gpr[20] + static_cast<std::uint32_t>(32012)));
    ctx.set_gpr(2, ctx.gpr[3] + static_cast<std::uint32_t>(1));
    rt.memory().aot_store32(ctx.gpr[20] + static_cast<std::uint32_t>(32012), ctx.gpr[2]);
    ctx.set_gpr(2, ctx.gpr[3] << 2u);
    ctx.set_gpr(2, ctx.gpr[2] + ctx.gpr[20]);
    ctx.fpr[1] = std::bit_cast<float>(rt.memory().aot_load32(ctx.gpr[2] + static_cast<std::uint32_t>(12)));
    ctx.fpr[1] = static_cast<float>(static_cast<std::int32_t>(ctx.fpr_bits(1)));
    { const float fs = ctx.fpr[0]; const float ft = ctx.fpr[1]; if ((std::isinf(fs) && ft == 0.0f) || (std::isinf(ft) && fs == 0.0f)) ctx.set_fpr_bits(1, 0x7FC00000u); else ctx.fpr[1] = fs * ft; }
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(672), std::bit_cast<std::uint32_t>(ctx.fpr[1]));
    ctx.set_gpr(3, rt.memory().aot_load32(ctx.gpr[20] + static_cast<std::uint32_t>(32012)));
    ctx.set_gpr(2, ctx.gpr[3] + static_cast<std::uint32_t>(1));
    rt.memory().aot_store32(ctx.gpr[20] + static_cast<std::uint32_t>(32012), ctx.gpr[2]);
    ctx.set_gpr(2, ctx.gpr[3] << 2u);
    ctx.set_gpr(2, ctx.gpr[2] + ctx.gpr[20]);
    ctx.fpr[1] = std::bit_cast<float>(rt.memory().aot_load32(ctx.gpr[2] + static_cast<std::uint32_t>(12)));
    ctx.fpr[1] = static_cast<float>(static_cast<std::int32_t>(ctx.fpr_bits(1)));
    { const float fs = ctx.fpr[0]; const float ft = ctx.fpr[1]; if ((std::isinf(fs) && ft == 0.0f) || (std::isinf(ft) && fs == 0.0f)) ctx.set_fpr_bits(1, 0x7FC00000u); else ctx.fpr[1] = fs * ft; }
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(676), std::bit_cast<std::uint32_t>(ctx.fpr[1]));
    ctx.set_gpr(3, rt.memory().aot_load32(ctx.gpr[20] + static_cast<std::uint32_t>(32012)));
    ctx.set_gpr(2, ctx.gpr[3] + static_cast<std::uint32_t>(1));
    rt.memory().aot_store32(ctx.gpr[20] + static_cast<std::uint32_t>(32012), ctx.gpr[2]);
    ctx.set_gpr(2, ctx.gpr[3] << 2u);
    ctx.set_gpr(2, ctx.gpr[2] + ctx.gpr[20]);
    ctx.fpr[1] = std::bit_cast<float>(rt.memory().aot_load32(ctx.gpr[2] + static_cast<std::uint32_t>(12)));
    ctx.fpr[1] = static_cast<float>(static_cast<std::int32_t>(ctx.fpr_bits(1)));
    { const float fs = ctx.fpr[0]; const float ft = ctx.fpr[1]; if ((std::isinf(fs) && ft == 0.0f) || (std::isinf(ft) && fs == 0.0f)) ctx.set_fpr_bits(1, 0x7FC00000u); else ctx.fpr[1] = fs * ft; }
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(680), std::bit_cast<std::uint32_t>(ctx.fpr[1]));
    ctx.set_gpr(3, rt.memory().aot_load32(ctx.gpr[20] + static_cast<std::uint32_t>(32012)));
    ctx.set_gpr(2, ctx.gpr[3] + static_cast<std::uint32_t>(1));
    rt.memory().aot_store32(ctx.gpr[20] + static_cast<std::uint32_t>(32012), ctx.gpr[2]);
    ctx.set_gpr(2, ctx.gpr[3] << 2u);
    ctx.set_gpr(2, ctx.gpr[2] + ctx.gpr[20]);
    ctx.fpr[1] = std::bit_cast<float>(rt.memory().aot_load32(ctx.gpr[2] + static_cast<std::uint32_t>(12)));
    ctx.fpr[1] = static_cast<float>(static_cast<std::int32_t>(ctx.fpr_bits(1)));
    { const float fs = ctx.fpr[0]; const float ft = ctx.fpr[1]; if ((std::isinf(fs) && ft == 0.0f) || (std::isinf(ft) && fs == 0.0f)) ctx.set_fpr_bits(1, 0x7FC00000u); else ctx.fpr[1] = fs * ft; }
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(684), std::bit_cast<std::uint32_t>(ctx.fpr[1]));
    ctx.set_gpr(3, rt.memory().aot_load32(ctx.gpr[20] + static_cast<std::uint32_t>(32012)));
    ctx.set_gpr(2, ctx.gpr[3] + static_cast<std::uint32_t>(1));
    rt.memory().aot_store32(ctx.gpr[20] + static_cast<std::uint32_t>(32012), ctx.gpr[2]);
    ctx.set_gpr(2, ctx.gpr[3] << 2u);
    ctx.set_gpr(2, ctx.gpr[2] + ctx.gpr[20]);
    ctx.fpr[1] = std::bit_cast<float>(rt.memory().aot_load32(ctx.gpr[2] + static_cast<std::uint32_t>(12)));
    ctx.fpr[1] = static_cast<float>(static_cast<std::int32_t>(ctx.fpr_bits(1)));
    { const float fs = ctx.fpr[0]; const float ft = ctx.fpr[1]; if ((std::isinf(fs) && ft == 0.0f) || (std::isinf(ft) && fs == 0.0f)) ctx.set_fpr_bits(1, 0x7FC00000u); else ctx.fpr[1] = fs * ft; }
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(688), std::bit_cast<std::uint32_t>(ctx.fpr[1]));
    ctx.set_gpr(3, rt.memory().aot_load32(ctx.gpr[20] + static_cast<std::uint32_t>(32012)));
    ctx.set_gpr(2, ctx.gpr[3] + static_cast<std::uint32_t>(1));
    rt.memory().aot_store32(ctx.gpr[20] + static_cast<std::uint32_t>(32012), ctx.gpr[2]);
    ctx.set_gpr(2, ctx.gpr[3] << 2u);
    ctx.set_gpr(2, ctx.gpr[2] + ctx.gpr[20]);
    ctx.fpr[1] = std::bit_cast<float>(rt.memory().aot_load32(ctx.gpr[2] + static_cast<std::uint32_t>(12)));
    ctx.fpr[1] = static_cast<float>(static_cast<std::int32_t>(ctx.fpr_bits(1)));
    { const float fs = ctx.fpr[0]; const float ft = ctx.fpr[1]; if ((std::isinf(fs) && ft == 0.0f) || (std::isinf(ft) && fs == 0.0f)) ctx.set_fpr_bits(1, 0x7FC00000u); else ctx.fpr[1] = fs * ft; }
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(692), std::bit_cast<std::uint32_t>(ctx.fpr[1]));
    ctx.set_gpr(3, rt.memory().aot_load32(ctx.gpr[20] + static_cast<std::uint32_t>(32012)));
    ctx.set_gpr(2, ctx.gpr[3] + static_cast<std::uint32_t>(1));
    rt.memory().aot_store32(ctx.gpr[20] + static_cast<std::uint32_t>(32012), ctx.gpr[2]);
    ctx.set_gpr(2, ctx.gpr[3] << 2u);
    ctx.set_gpr(2, ctx.gpr[2] + ctx.gpr[20]);
    ctx.fpr[1] = std::bit_cast<float>(rt.memory().aot_load32(ctx.gpr[2] + static_cast<std::uint32_t>(12)));
    ctx.fpr[1] = static_cast<float>(static_cast<std::int32_t>(ctx.fpr_bits(1)));
    { const float fs = ctx.fpr[0]; const float ft = ctx.fpr[1]; if ((std::isinf(fs) && ft == 0.0f) || (std::isinf(ft) && fs == 0.0f)) ctx.set_fpr_bits(1, 0x7FC00000u); else ctx.fpr[1] = fs * ft; }
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(696), std::bit_cast<std::uint32_t>(ctx.fpr[1]));
    ctx.set_gpr(3, rt.memory().aot_load32(ctx.gpr[20] + static_cast<std::uint32_t>(32012)));
    ctx.set_gpr(2, ctx.gpr[3] + static_cast<std::uint32_t>(1));
    rt.memory().aot_store32(ctx.gpr[20] + static_cast<std::uint32_t>(32012), ctx.gpr[2]);
    ctx.set_gpr(2, ctx.gpr[3] << 2u);
    ctx.set_gpr(2, ctx.gpr[2] + ctx.gpr[20]);
    ctx.fpr[1] = std::bit_cast<float>(rt.memory().aot_load32(ctx.gpr[2] + static_cast<std::uint32_t>(12)));
    ctx.fpr[1] = static_cast<float>(static_cast<std::int32_t>(ctx.fpr_bits(1)));
    { const float fs = ctx.fpr[0]; const float ft = ctx.fpr[1]; if ((std::isinf(fs) && ft == 0.0f) || (std::isinf(ft) && fs == 0.0f)) ctx.set_fpr_bits(1, 0x7FC00000u); else ctx.fpr[1] = fs * ft; }
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(700), std::bit_cast<std::uint32_t>(ctx.fpr[1]));
    ctx.set_gpr(3, rt.memory().aot_load32(ctx.gpr[20] + static_cast<std::uint32_t>(32012)));
    ctx.set_gpr(2, ctx.gpr[3] + static_cast<std::uint32_t>(1));
    rt.memory().aot_store32(ctx.gpr[20] + static_cast<std::uint32_t>(32012), ctx.gpr[2]);
    ctx.set_gpr(2, ctx.gpr[3] << 2u);
    ctx.set_gpr(2, ctx.gpr[2] + ctx.gpr[20]);
    ctx.fpr[1] = std::bit_cast<float>(rt.memory().aot_load32(ctx.gpr[2] + static_cast<std::uint32_t>(12)));
    ctx.fpr[1] = static_cast<float>(static_cast<std::int32_t>(ctx.fpr_bits(1)));
    { const float fs = ctx.fpr[0]; const float ft = ctx.fpr[1]; if ((std::isinf(fs) && ft == 0.0f) || (std::isinf(ft) && fs == 0.0f)) ctx.set_fpr_bits(1, 0x7FC00000u); else ctx.fpr[1] = fs * ft; }
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(704), std::bit_cast<std::uint32_t>(ctx.fpr[1]));
    ctx.set_gpr(3, rt.memory().aot_load32(ctx.gpr[20] + static_cast<std::uint32_t>(32012)));
    ctx.set_gpr(2, ctx.gpr[3] + static_cast<std::uint32_t>(1));
    rt.memory().aot_store32(ctx.gpr[20] + static_cast<std::uint32_t>(32012), ctx.gpr[2]);
    ctx.set_gpr(2, ctx.gpr[3] << 2u);
    ctx.set_gpr(2, ctx.gpr[2] + ctx.gpr[20]);
    ctx.fpr[1] = std::bit_cast<float>(rt.memory().aot_load32(ctx.gpr[2] + static_cast<std::uint32_t>(12)));
    ctx.fpr[1] = static_cast<float>(static_cast<std::int32_t>(ctx.fpr_bits(1)));
    { const float fs = ctx.fpr[0]; const float ft = ctx.fpr[1]; if ((std::isinf(fs) && ft == 0.0f) || (std::isinf(ft) && fs == 0.0f)) ctx.set_fpr_bits(0, 0x7FC00000u); else ctx.fpr[0] = fs * ft; }
    ctx.set_gpr(31, 0x08856FDCu);
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(708), std::bit_cast<std::uint32_t>(ctx.fpr[0]));
    goto L_0885555C;
L_08856FDC:
    ctx.set_gpr(16, ctx.gpr[2] + 0u);
    ctx.set_gpr(4, ctx.gpr[29] + static_cast<std::uint32_t>(64));
    ctx.set_gpr(31, 0x08856FECu);
    ctx.set_gpr(5, ctx.gpr[29] + static_cast<std::uint32_t>(676));
    goto L_0885555C;
L_08856FEC:
    ctx.set_gpr(4, rt.memory().aot_load32(ctx.gpr[20] + static_cast<std::uint32_t>(32164)));
    ctx.set_fpr_bits(12, ctx.fpr_bits(20));
    ctx.set_gpr(5, ctx.gpr[16] + 0u);
    ctx.set_gpr(31, 0x08857000u);
    ctx.set_gpr(6, ctx.gpr[2] + 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0165_entry, 165u, 461u, 0x08A9AF4Cu>(ctx, &aot_mem) && ctx.pc == 0x08857000u) goto L_08857000;
    return;
L_08857000:
    ctx.set_gpr(4, rt.memory().aot_load32(ctx.gpr[20] + static_cast<std::uint32_t>(32164)));
    ctx.set_gpr(31, 0x0885700Cu);
    ctx.fpr[12] = std::bit_cast<float>(0u);
    if (rt.invoke_chained_direct<&recomp_unit_0165_entry, 165u, 476u, 0x08A9B0A0u>(ctx, &aot_mem) && ctx.pc == 0x0885700Cu) goto L_0885700C;
    return;
L_0885700C:
    ctx.set_gpr(4, rt.memory().aot_load32(ctx.gpr[20] + static_cast<std::uint32_t>(32132)));
    ctx.set_gpr(6, ctx.gpr[19] + 0u);
    ctx.set_gpr(7, ctx.gpr[18] + 0u);
    ctx.set_gpr(31, 0x08857020u);
    ctx.fpr[12] = std::bit_cast<float>(0u);
    if (rt.invoke_chained_direct<&recomp_unit_0017_entry, 17u, 459u, 0x08849C34u>(ctx, &aot_mem) && ctx.pc == 0x08857020u) goto L_08857020;
    return;
L_08857020:
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_088570B0;
      }
      goto L_08857028;
    }
L_08857028:
    ctx.set_gpr(2, ctx.gpr[5] + static_cast<std::uint32_t>(1));
    rt.memory().aot_store32(ctx.gpr[20] + static_cast<std::uint32_t>(32012), ctx.gpr[2]);
    ctx.set_gpr(4, rt.memory().aot_load32(ctx.gpr[20] + static_cast<std::uint32_t>(32128)));
    ctx.set_gpr(6, ctx.gpr[19] + 0u);
    ctx.set_gpr(7, ctx.gpr[18] + 0u);
    ctx.set_gpr(31, 0x08857044u);
    ctx.set_gpr(5, 0u + static_cast<std::uint32_t>(1));
    if (rt.invoke_chained_direct<&recomp_unit_0024_entry, 24u, 977u, 0x08867314u>(ctx, &aot_mem) && ctx.pc == 0x08857044u) goto L_08857044;
    return;
L_08857044:
    { const bool branch_taken = 0u == 0u;
    ctx.set_gpr(22, 0u + 0u);
      if (branch_taken) {
          goto L_088570B0;
      }
      goto L_0885704C;
    }
L_0885704C:
    ctx.set_gpr(2, ctx.gpr[5] + static_cast<std::uint32_t>(1));
    rt.memory().aot_store32(ctx.gpr[20] + static_cast<std::uint32_t>(32012), ctx.gpr[2]);
    ctx.set_gpr(4, ctx.gpr[2] + static_cast<std::uint32_t>(1));
    ctx.set_gpr(2, ctx.gpr[2] << 2u);
    ctx.set_gpr(2, ctx.gpr[2] + ctx.gpr[20]);
    rt.memory().aot_store32(ctx.gpr[20] + static_cast<std::uint32_t>(32012), ctx.gpr[4]);
    ctx.fpr[0] = std::bit_cast<float>(rt.memory().aot_load32(ctx.gpr[2] + static_cast<std::uint32_t>(12)));
    ctx.set_gpr(2, 14979u << 16u);
    ctx.set_gpr(3, ctx.gpr[2] | 4719u);
    ctx.set_gpr(2, ctx.gpr[4] + static_cast<std::uint32_t>(1));
    rt.memory().aot_store32(ctx.gpr[20] + static_cast<std::uint32_t>(32012), ctx.gpr[2]);
    ctx.set_gpr(2, ctx.gpr[4] << 2u);
    ctx.fpr[2] = static_cast<float>(static_cast<std::int32_t>(ctx.fpr_bits(0)));
    ctx.set_gpr(2, ctx.gpr[2] + ctx.gpr[20]);
    ctx.set_gpr(4, rt.memory().aot_load32(ctx.gpr[20] + static_cast<std::uint32_t>(32136)));
    ctx.fpr[0] = std::bit_cast<float>(rt.memory().aot_load32(ctx.gpr[2] + static_cast<std::uint32_t>(12)));
    ctx.fpr[1] = std::bit_cast<float>(ctx.gpr[3]);
    { const float fs = ctx.fpr[1]; const float ft = ctx.fpr[2]; if ((std::isinf(fs) && ft == 0.0f) || (std::isinf(ft) && fs == 0.0f)) ctx.set_fpr_bits(12, 0x7FC00000u); else ctx.fpr[12] = fs * ft; }
    ctx.fpr[0] = static_cast<float>(static_cast<std::int32_t>(ctx.fpr_bits(0)));
    ctx.set_gpr(31, 0x088570A0u);
    { const float fs = ctx.fpr[1]; const float ft = ctx.fpr[0]; if ((std::isinf(fs) && ft == 0.0f) || (std::isinf(ft) && fs == 0.0f)) ctx.set_fpr_bits(13, 0x7FC00000u); else ctx.fpr[13] = fs * ft; }
    if (rt.invoke_chained_direct<&recomp_unit_0022_entry, 22u, 485u, 0x0885DD54u>(ctx, &aot_mem) && ctx.pc == 0x088570A0u) goto L_088570A0;
    return;
L_088570A0:
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_088570B0;
      }
      goto L_088570A8;
    }
L_088570A8:
    rt.memory().aot_store8(ctx.gpr[20] + static_cast<std::uint32_t>(8), static_cast<std::uint8_t>(0u));
    goto L_088570AC;
L_088570AC:
    ctx.set_gpr(22, 0u + 0u);
    goto L_088570B0;
L_088570B0:
    ctx.set_gpr(2, ctx.gpr[22] + 0u);
    ctx.set_gpr(31, rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(60)));
    ctx.set_gpr(23, rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(56)));
    ctx.set_gpr(22, rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(52)));
    ctx.set_gpr(21, rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(48)));
    ctx.set_gpr(20, rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(44)));
    ctx.set_gpr(19, rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(40)));
    ctx.set_gpr(18, rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(36)));
    ctx.set_gpr(17, rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(32)));
    ctx.set_gpr(16, rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(28)));
    ctx.fpr[22] = std::bit_cast<float>(rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(20)));
    ctx.fpr[21] = std::bit_cast<float>(rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(16)));
    ctx.fpr[20] = std::bit_cast<float>(rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(12)));
    jump_target = ctx.gpr[31];
    ctx.set_gpr(29, ctx.gpr[29] + static_cast<std::uint32_t>(928));
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_088570EC:
    jump_target = ctx.gpr[31];
    rt.memory().aot_store32(ctx.gpr[4] + static_cast<std::uint32_t>(624), std::bit_cast<std::uint32_t>(ctx.fpr[12]));
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_088570F4:
    jump_target = ctx.gpr[31];
    rt.memory().aot_store32(ctx.gpr[4] + static_cast<std::uint32_t>(13584), std::bit_cast<std::uint32_t>(ctx.fpr[12]));
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_088570FC:
    ctx.set_gpr(29, ctx.gpr[29] + static_cast<std::uint32_t>(-16));
    ctx.set_gpr(3, ctx.gpr[4] + 0u);
    ctx.set_gpr(2, 1u << 16u);
    ctx.set_gpr(4, ctx.gpr[3] + static_cast<std::uint32_t>(14744));
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(12), ctx.gpr[31]);
    ctx.set_gpr(2, ctx.gpr[3] + ctx.gpr[2]);
    ctx.set_gpr(5, rt.memory().aot_load32(ctx.gpr[2] + static_cast<std::uint32_t>(-17424)));
    ctx.set_gpr(31, 0x08857120u);
    ctx.set_gpr(4, ctx.gpr[4] + static_cast<std::uint32_t>(32760));
    if (rt.invoke_chained_direct<&recomp_unit_0041_entry, 41u, 260u, 0x088A8E2Cu>(ctx, &aot_mem) && ctx.pc == 0x08857120u) goto L_08857120;
    return;
L_08857120:
    ctx.set_gpr(31, 0x08857128u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0017_entry, 17u, 182u, 0x08848C18u>(ctx, &aot_mem) && ctx.pc == 0x08857128u) goto L_08857128;
    return;
L_08857128:
    ctx.set_gpr(4, ctx.gpr[2] + 0u);
    ctx.set_gpr(31, 0x08857134u);
    ctx.set_gpr(5, 0u + 0u);
    goto L_08854338;
L_08857134:
    ctx.set_gpr(31, rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(12)));
    jump_target = ctx.gpr[31];
    ctx.set_gpr(29, ctx.gpr[29] + static_cast<std::uint32_t>(16));
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_08857140:
    ctx.set_gpr(29, ctx.gpr[29] + static_cast<std::uint32_t>(-16));
    ctx.set_gpr(2, 1u << 16u);
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(12), ctx.gpr[31]);
    ctx.set_gpr(2, ctx.gpr[4] + ctx.gpr[2]);
    rt.memory().aot_store32(ctx.gpr[2] + static_cast<std::uint32_t>(-17424), 0u);
    ctx.set_gpr(2, 1u << 16u);
    ctx.set_gpr(2, ctx.gpr[4] + ctx.gpr[2]);
    rt.memory().aot_store32(ctx.gpr[2] + static_cast<std::uint32_t>(-17416), 0u);
    ctx.set_gpr(2, 1u << 16u);
    ctx.set_gpr(2, ctx.gpr[4] + ctx.gpr[2]);
    ctx.set_gpr(4, ctx.gpr[4] + static_cast<std::uint32_t>(14744));
    rt.memory().aot_store32(ctx.gpr[2] + static_cast<std::uint32_t>(-17360), 0u);
    ctx.set_gpr(31, 0x08857178u);
    ctx.set_gpr(4, ctx.gpr[4] + static_cast<std::uint32_t>(32760));
    if (rt.invoke_chained_direct<&recomp_unit_0041_entry, 41u, 230u, 0x088A8C00u>(ctx, &aot_mem) && ctx.pc == 0x08857178u) goto L_08857178;
    return;
L_08857178:
    ctx.set_gpr(31, 0x08857180u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0017_entry, 17u, 182u, 0x08848C18u>(ctx, &aot_mem) && ctx.pc == 0x08857180u) goto L_08857180;
    return;
L_08857180:
    ctx.set_gpr(4, ctx.gpr[2] + 0u);
    ctx.set_gpr(31, 0x0885718Cu);
    ctx.set_gpr(5, 0u + static_cast<std::uint32_t>(1));
    goto L_08854338;
L_0885718C:
    ctx.set_gpr(31, rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(12)));
    jump_target = ctx.gpr[31];
    ctx.set_gpr(29, ctx.gpr[29] + static_cast<std::uint32_t>(16));
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_08857198:
    ctx.set_gpr(2, rt.memory().aot_load8(ctx.gpr[4] + static_cast<std::uint32_t>(1)));
    if (ctx.gpr[2] == 0u) {
    ctx.set_gpr(2, rt.memory().aot_load8(ctx.gpr[4] + static_cast<std::uint32_t>(2)));
        goto L_088571A8;
    }
    goto L_088571A4;
L_088571A4:
    ctx.set_gpr(2, 0u + static_cast<std::uint32_t>(1));
    goto L_088571A8;
L_088571A8:
    jump_target = ctx.gpr[31];
    // nop
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_088571B0:
    ctx.set_gpr(2, 1u << 16u);
    ctx.set_gpr(2, ctx.gpr[4] + ctx.gpr[2]);
    jump_target = ctx.gpr[31];
    ctx.set_gpr(2, rt.memory().aot_load8(ctx.gpr[2] + static_cast<std::uint32_t>(-4783)));
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_088571C0:
    jump_target = ctx.gpr[31];
    ctx.set_gpr(2, rt.memory().aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(32)));
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_088571C8:
    jump_target = ctx.gpr[31];
    ctx.set_gpr(2, rt.memory().aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(16)));
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_088571D0:
    ctx.set_gpr(2, 1u << 16u);
    ctx.set_gpr(2, ctx.gpr[4] + ctx.gpr[2]);
    jump_target = ctx.gpr[31];
    ctx.set_gpr(2, rt.memory().aot_load8(ctx.gpr[2] + static_cast<std::uint32_t>(-4784)));
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_088571E0:
    jump_target = ctx.gpr[31];
    ctx.set_gpr(2, ctx.gpr[4] + static_cast<std::uint32_t>(13520));
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_088571E8:
    // nop
    (void)rt.invoke_chained_direct<&recomp_unit_0002_entry, 2u, 361u, 0x0880DE00u>(ctx, &aot_mem); return;
L_088571F0:
    // nop
    (void)rt.invoke_chained_direct<&recomp_unit_0002_entry, 2u, 414u, 0x0880E13Cu>(ctx, &aot_mem); return;
L_088571F8:
    jump_target = ctx.gpr[31];
    rt.memory().aot_store8(ctx.gpr[4] + static_cast<std::uint32_t>(1036), static_cast<std::uint8_t>(ctx.gpr[5]));
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_08857200:
    rt.memory().aot_store32(ctx.gpr[4] + static_cast<std::uint32_t>(164), std::bit_cast<std::uint32_t>(ctx.fpr[12]));
    ctx.set_gpr(3, 0u + static_cast<std::uint32_t>(1));
    jump_target = ctx.gpr[31];
    rt.memory().aot_store8(ctx.gpr[4] + static_cast<std::uint32_t>(184), static_cast<std::uint8_t>(ctx.gpr[3]));
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_08857210:
    rt.memory().aot_store32(ctx.gpr[4] + static_cast<std::uint32_t>(148), std::bit_cast<std::uint32_t>(ctx.fpr[12]));
    rt.memory().aot_store32(ctx.gpr[4] + static_cast<std::uint32_t>(152), std::bit_cast<std::uint32_t>(ctx.fpr[13]));
    rt.memory().aot_store32(ctx.gpr[4] + static_cast<std::uint32_t>(156), std::bit_cast<std::uint32_t>(ctx.fpr[14]));
    ctx.set_gpr(3, 0u + static_cast<std::uint32_t>(1));
    jump_target = ctx.gpr[31];
    rt.memory().aot_store8(ctx.gpr[4] + static_cast<std::uint32_t>(184), static_cast<std::uint8_t>(ctx.gpr[3]));
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_08857228:
    ctx.set_gpr(29, ctx.gpr[29] + static_cast<std::uint32_t>(-16));
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(12), ctx.gpr[31]);
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(8), ctx.gpr[16]);
    ctx.set_gpr(16, ctx.gpr[4] + 0u);
    ctx.set_gpr(31, 0x08857240u);
    ctx.set_gpr(4, ctx.gpr[16] + static_cast<std::uint32_t>(28));
    if (rt.invoke_chained_direct<&recomp_unit_0015_entry, 15u, 167u, 0x088409B0u>(ctx, &aot_mem) && ctx.pc == 0x08857240u) goto L_08857240;
    return;
L_08857240:
    ctx.set_gpr(31, 0x08857248u);
    ctx.set_gpr(4, ctx.gpr[16] + static_cast<std::uint32_t>(32));
    goto L_0885775C;
L_08857248:
    ctx.set_gpr(31, 0x08857250u);
    ctx.set_gpr(4, ctx.gpr[16] + static_cast<std::uint32_t>(36));
    goto L_08857750;
L_08857250:
    ctx.set_gpr(31, 0x08857258u);
    ctx.set_gpr(4, ctx.gpr[16] + static_cast<std::uint32_t>(40));
    goto L_08857744;
L_08857258:
    ctx.set_gpr(31, 0x08857260u);
    ctx.set_gpr(4, ctx.gpr[16] + static_cast<std::uint32_t>(44));
    goto L_08857738;
L_08857260:
    ctx.set_gpr(5, 2181u << 16u);
    ctx.set_gpr(6, 2181u << 16u);
    ctx.set_gpr(4, ctx.gpr[16] + static_cast<std::uint32_t>(56));
    ctx.set_gpr(5, ctx.gpr[5] + static_cast<std::uint32_t>(30100));
    ctx.set_gpr(6, ctx.gpr[6] + static_cast<std::uint32_t>(29828));
    ctx.set_gpr(7, 0u + static_cast<std::uint32_t>(1224));
    ctx.set_gpr(31, 0x08857280u);
    ctx.set_gpr(8, 0u + static_cast<std::uint32_t>(11));
    if (rt.invoke_chained_direct<&recomp_unit_0000_entry, 0u, 179u, 0x08804B94u>(ctx, &aot_mem) && ctx.pc == 0x08857280u) goto L_08857280;
    return;
L_08857280:
    ctx.set_gpr(31, 0x08857288u);
    ctx.set_gpr(4, ctx.gpr[16] + static_cast<std::uint32_t>(13520));
    if (rt.invoke_chained_direct<&recomp_unit_0015_entry, 15u, 161u, 0x08840958u>(ctx, &aot_mem) && ctx.pc == 0x08857288u) goto L_08857288;
    return;
L_08857288:
    ctx.set_gpr(31, 0x08857290u);
    ctx.set_gpr(4, ctx.gpr[16] + static_cast<std::uint32_t>(13588));
    if (rt.invoke_chained_direct<&recomp_unit_0015_entry, 15u, 160u, 0x0884094Cu>(ctx, &aot_mem) && ctx.pc == 0x08857290u) goto L_08857290;
    return;
L_08857290:
    rt.memory().aot_store8(ctx.gpr[16] + static_cast<std::uint32_t>(0), static_cast<std::uint8_t>(0u));
    rt.memory().aot_store32(ctx.gpr[16] + static_cast<std::uint32_t>(4), 0u);
    rt.memory().aot_store32(ctx.gpr[16] + static_cast<std::uint32_t>(8), 0u);
    rt.memory().aot_store32(ctx.gpr[16] + static_cast<std::uint32_t>(12), 0u);
    rt.memory().aot_store32(ctx.gpr[16] + static_cast<std::uint32_t>(16), 0u);
    rt.memory().aot_store32(ctx.gpr[16] + static_cast<std::uint32_t>(20), 0u);
    ctx.set_gpr(4, ctx.gpr[16] + static_cast<std::uint32_t>(28));
    ctx.set_gpr(5, 0u + 0u);
    ctx.set_gpr(31, 0x088572B8u);
    rt.memory().aot_store32(ctx.gpr[16] + static_cast<std::uint32_t>(24), 0u);
    goto L_0885745C;
L_088572B8:
    rt.memory().aot_store32(ctx.gpr[16] + static_cast<std::uint32_t>(52), 0u);
    rt.memory().aot_store32(ctx.gpr[16] + static_cast<std::uint32_t>(48), 0u);
    ctx.set_gpr(2, 16256u << 16u);
    rt.memory().aot_store32(ctx.gpr[16] + static_cast<std::uint32_t>(13584), ctx.gpr[2]);
    ctx.set_gpr(4, ctx.gpr[16] + static_cast<std::uint32_t>(13588));
    ctx.set_gpr(31, 0x088572D4u);
    ctx.set_gpr(5, 0u + 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0016_entry, 16u, 63u, 0x08844384u>(ctx, &aot_mem) && ctx.pc == 0x088572D4u) goto L_088572D4;
    return;
L_088572D4:
    ctx.set_gpr(2, 0u + static_cast<std::uint32_t>(-1));
    rt.memory().aot_store32(ctx.gpr[16] + static_cast<std::uint32_t>(13592), ctx.gpr[2]);
    ctx.set_gpr(4, 0u + 0u);
    ctx.set_gpr(3, ctx.gpr[16] + 0u);
    goto L_088572E4;
L_088572E4:
    rt.memory().aot_store32(ctx.gpr[3] + static_cast<std::uint32_t>(13596), 0u);
    ctx.set_gpr(4, ctx.gpr[4] + static_cast<std::uint32_t>(1));
    rt.memory().aot_store32(ctx.gpr[3] + static_cast<std::uint32_t>(13600), 0u);
    ctx.set_gpr(2, static_cast<std::int32_t>(ctx.gpr[4]) < 4 ? 1u : 0u);
    { const bool branch_taken = ctx.gpr[2] != 0u;
    ctx.set_gpr(3, ctx.gpr[3] + static_cast<std::uint32_t>(8));
      if (branch_taken) {
          goto L_088572E4;
      }
      goto L_088572FC;
    }
L_088572FC:
    rt.memory().aot_store8(ctx.gpr[16] + static_cast<std::uint32_t>(13628), static_cast<std::uint8_t>(0u));
    ctx.set_gpr(2, 0u + static_cast<std::uint32_t>(1));
    rt.memory().aot_store8(ctx.gpr[16] + static_cast<std::uint32_t>(13629), static_cast<std::uint8_t>(ctx.gpr[2]));
    ctx.set_gpr(2, ctx.gpr[16] + 0u);
    ctx.set_gpr(31, rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(12)));
    ctx.set_gpr(16, rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(8)));
    jump_target = ctx.gpr[31];
    ctx.set_gpr(29, ctx.gpr[29] + static_cast<std::uint32_t>(16));
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_0885731C:
    ctx.set_gpr(29, ctx.gpr[29] + static_cast<std::uint32_t>(-16));
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(12), ctx.gpr[31]);
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(8), ctx.gpr[17]);
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(4), ctx.gpr[16]);
    ctx.set_gpr(17, ctx.gpr[4] + 0u);
    { const bool branch_taken = ctx.gpr[17] == 0u;
    ctx.set_gpr(16, ctx.gpr[5] + 0u);
      if (branch_taken) {
          goto L_08857354;
      }
      goto L_08857338;
    }
L_08857338:
    ctx.set_gpr(31, 0x08857340u);
    ctx.set_gpr(4, rt.memory().aot_load32(ctx.gpr[17] + static_cast<std::uint32_t>(0)));
    if (rt.invoke_chained_direct<&recomp_unit_0014_entry, 14u, 253u, 0x0883D42Cu>(ctx, &aot_mem) && ctx.pc == 0x08857340u) goto L_08857340;
    return;
L_08857340:
    ctx.set_gpr(2, static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int16_t>(ctx.gpr[16]))));
    if (static_cast<std::int32_t>(ctx.gpr[2]) <= 0) {
    ctx.set_gpr(2, ctx.gpr[17] + 0u);
        goto L_08857358;
    }
    goto L_0885734C;
L_0885734C:
    ctx.set_gpr(31, 0x08857354u);
    ctx.set_gpr(4, ctx.gpr[17] + 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0000_entry, 0u, 201u, 0x08804D84u>(ctx, &aot_mem) && ctx.pc == 0x08857354u) goto L_08857354;
    return;
L_08857354:
    ctx.set_gpr(2, ctx.gpr[17] + 0u);
    goto L_08857358;
L_08857358:
    ctx.set_gpr(31, rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(12)));
    ctx.set_gpr(17, rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(8)));
    ctx.set_gpr(16, rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(4)));
    jump_target = ctx.gpr[31];
    ctx.set_gpr(29, ctx.gpr[29] + static_cast<std::uint32_t>(16));
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_0885736C:
    ctx.set_gpr(29, ctx.gpr[29] + static_cast<std::uint32_t>(-16));
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(12), ctx.gpr[31]);
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(8), ctx.gpr[17]);
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(4), ctx.gpr[16]);
    ctx.set_gpr(17, ctx.gpr[4] + 0u);
    { const bool branch_taken = ctx.gpr[17] == 0u;
    ctx.set_gpr(16, ctx.gpr[5] + 0u);
      if (branch_taken) {
          goto L_088573A4;
      }
      goto L_08857388;
    }
L_08857388:
    ctx.set_gpr(31, 0x08857390u);
    ctx.set_gpr(4, rt.memory().aot_load32(ctx.gpr[17] + static_cast<std::uint32_t>(0)));
    if (rt.invoke_chained_direct<&recomp_unit_0014_entry, 14u, 253u, 0x0883D42Cu>(ctx, &aot_mem) && ctx.pc == 0x08857390u) goto L_08857390;
    return;
L_08857390:
    ctx.set_gpr(2, static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int16_t>(ctx.gpr[16]))));
    if (static_cast<std::int32_t>(ctx.gpr[2]) <= 0) {
    ctx.set_gpr(2, ctx.gpr[17] + 0u);
        goto L_088573A8;
    }
    goto L_0885739C;
L_0885739C:
    ctx.set_gpr(31, 0x088573A4u);
    ctx.set_gpr(4, ctx.gpr[17] + 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0000_entry, 0u, 201u, 0x08804D84u>(ctx, &aot_mem) && ctx.pc == 0x088573A4u) goto L_088573A4;
    return;
L_088573A4:
    ctx.set_gpr(2, ctx.gpr[17] + 0u);
    goto L_088573A8;
L_088573A8:
    ctx.set_gpr(31, rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(12)));
    ctx.set_gpr(17, rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(8)));
    ctx.set_gpr(16, rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(4)));
    jump_target = ctx.gpr[31];
    ctx.set_gpr(29, ctx.gpr[29] + static_cast<std::uint32_t>(16));
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_088573BC:
    ctx.set_gpr(29, ctx.gpr[29] + static_cast<std::uint32_t>(-16));
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(12), ctx.gpr[31]);
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(8), ctx.gpr[17]);
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(4), ctx.gpr[16]);
    ctx.set_gpr(17, ctx.gpr[4] + 0u);
    { const bool branch_taken = ctx.gpr[17] == 0u;
    ctx.set_gpr(16, ctx.gpr[5] + 0u);
      if (branch_taken) {
          goto L_088573F4;
      }
      goto L_088573D8;
    }
L_088573D8:
    ctx.set_gpr(31, 0x088573E0u);
    ctx.set_gpr(4, rt.memory().aot_load32(ctx.gpr[17] + static_cast<std::uint32_t>(0)));
    if (rt.invoke_chained_direct<&recomp_unit_0014_entry, 14u, 253u, 0x0883D42Cu>(ctx, &aot_mem) && ctx.pc == 0x088573E0u) goto L_088573E0;
    return;
L_088573E0:
    ctx.set_gpr(2, static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int16_t>(ctx.gpr[16]))));
    if (static_cast<std::int32_t>(ctx.gpr[2]) <= 0) {
    ctx.set_gpr(2, ctx.gpr[17] + 0u);
        goto L_088573F8;
    }
    goto L_088573EC;
L_088573EC:
    ctx.set_gpr(31, 0x088573F4u);
    ctx.set_gpr(4, ctx.gpr[17] + 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0000_entry, 0u, 201u, 0x08804D84u>(ctx, &aot_mem) && ctx.pc == 0x088573F4u) goto L_088573F4;
    return;
L_088573F4:
    ctx.set_gpr(2, ctx.gpr[17] + 0u);
    goto L_088573F8;
L_088573F8:
    ctx.set_gpr(31, rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(12)));
    ctx.set_gpr(17, rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(8)));
    ctx.set_gpr(16, rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(4)));
    jump_target = ctx.gpr[31];
    ctx.set_gpr(29, ctx.gpr[29] + static_cast<std::uint32_t>(16));
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_0885740C:
    ctx.set_gpr(29, ctx.gpr[29] + static_cast<std::uint32_t>(-16));
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(12), ctx.gpr[31]);
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(8), ctx.gpr[17]);
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(4), ctx.gpr[16]);
    ctx.set_gpr(17, ctx.gpr[4] + 0u);
    { const bool branch_taken = ctx.gpr[17] == 0u;
    ctx.set_gpr(16, ctx.gpr[5] + 0u);
      if (branch_taken) {
          goto L_08857444;
      }
      goto L_08857428;
    }
L_08857428:
    ctx.set_gpr(31, 0x08857430u);
    ctx.set_gpr(4, rt.memory().aot_load32(ctx.gpr[17] + static_cast<std::uint32_t>(0)));
    if (rt.invoke_chained_direct<&recomp_unit_0014_entry, 14u, 253u, 0x0883D42Cu>(ctx, &aot_mem) && ctx.pc == 0x08857430u) goto L_08857430;
    return;
L_08857430:
    ctx.set_gpr(2, static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int16_t>(ctx.gpr[16]))));
    if (static_cast<std::int32_t>(ctx.gpr[2]) <= 0) {
    ctx.set_gpr(2, ctx.gpr[17] + 0u);
        goto L_08857448;
    }
    goto L_0885743C;
L_0885743C:
    ctx.set_gpr(31, 0x08857444u);
    ctx.set_gpr(4, ctx.gpr[17] + 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0000_entry, 0u, 201u, 0x08804D84u>(ctx, &aot_mem) && ctx.pc == 0x08857444u) goto L_08857444;
    return;
L_08857444:
    ctx.set_gpr(2, ctx.gpr[17] + 0u);
    goto L_08857448;
L_08857448:
    ctx.set_gpr(31, rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(12)));
    ctx.set_gpr(17, rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(8)));
    ctx.set_gpr(16, rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(4)));
    jump_target = ctx.gpr[31];
    ctx.set_gpr(29, ctx.gpr[29] + static_cast<std::uint32_t>(16));
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_0885745C:
    ctx.set_gpr(29, ctx.gpr[29] + static_cast<std::uint32_t>(-16));
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(12), ctx.gpr[31]);
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(8), ctx.gpr[16]);
    ctx.set_gpr(31, 0x08857470u);
    ctx.set_gpr(16, ctx.gpr[4] + 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0085_entry, 85u, 61u, 0x089584C4u>(ctx, &aot_mem) && ctx.pc == 0x08857470u) goto L_08857470;
    return;
L_08857470:
    ctx.set_gpr(2, ctx.gpr[16] + 0u);
    ctx.set_gpr(31, rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(12)));
    ctx.set_gpr(16, rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(8)));
    jump_target = ctx.gpr[31];
    ctx.set_gpr(29, ctx.gpr[29] + static_cast<std::uint32_t>(16));
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_08857484:
    ctx.set_gpr(29, ctx.gpr[29] + static_cast<std::uint32_t>(-16));
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(12), ctx.gpr[31]);
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(8), ctx.gpr[17]);
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(4), ctx.gpr[16]);
    ctx.set_gpr(17, ctx.gpr[4] + 0u);
    { const bool branch_taken = ctx.gpr[17] == 0u;
    ctx.set_gpr(16, ctx.gpr[5] + 0u);
      if (branch_taken) {
          goto L_0885752C;
      }
      goto L_088574A0;
    }
L_088574A0:
    ctx.set_gpr(4, ctx.gpr[17] + static_cast<std::uint32_t>(1204));
    ctx.set_gpr(31, 0x088574ACu);
    ctx.set_gpr(5, 0u + static_cast<std::uint32_t>(-1));
    if (rt.invoke_chained_direct<&recomp_unit_0015_entry, 15u, 349u, 0x08841324u>(ctx, &aot_mem) && ctx.pc == 0x088574ACu) goto L_088574AC;
    return;
L_088574AC:
    ctx.set_gpr(4, ctx.gpr[17] + static_cast<std::uint32_t>(1200));
    ctx.set_gpr(31, 0x088574B8u);
    ctx.set_gpr(5, 0u + static_cast<std::uint32_t>(-1));
    goto L_08857544;
L_088574B8:
    ctx.set_gpr(4, ctx.gpr[17] + static_cast<std::uint32_t>(1104));
    ctx.set_gpr(31, 0x088574C4u);
    ctx.set_gpr(5, 0u + static_cast<std::uint32_t>(-1));
    if (rt.invoke_chained_direct<&recomp_unit_0017_entry, 17u, 563u, 0x0884A284u>(ctx, &aot_mem) && ctx.pc == 0x088574C4u) goto L_088574C4;
    return;
L_088574C4:
    ctx.set_gpr(4, ctx.gpr[17] + static_cast<std::uint32_t>(984));
    ctx.set_gpr(31, 0x088574D0u);
    ctx.set_gpr(5, 0u + static_cast<std::uint32_t>(-1));
    if (rt.invoke_chained_direct<&recomp_unit_0018_entry, 18u, 778u, 0x0884EA9Cu>(ctx, &aot_mem) && ctx.pc == 0x088574D0u) goto L_088574D0;
    return;
L_088574D0:
    ctx.set_gpr(4, ctx.gpr[17] + static_cast<std::uint32_t>(976));
    ctx.set_gpr(31, 0x088574DCu);
    ctx.set_gpr(5, 0u + static_cast<std::uint32_t>(-1));
    if (rt.invoke_chained_direct<&recomp_unit_0017_entry, 17u, 563u, 0x0884A284u>(ctx, &aot_mem) && ctx.pc == 0x088574DCu) goto L_088574DC;
    return;
L_088574DC:
    ctx.set_gpr(5, 2181u << 16u);
    ctx.set_gpr(4, ctx.gpr[17] + static_cast<std::uint32_t>(496));
    ctx.set_gpr(5, ctx.gpr[5] + static_cast<std::uint32_t>(-5476));
    ctx.set_gpr(6, 0u + static_cast<std::uint32_t>(120));
    ctx.set_gpr(31, 0x088574F4u);
    ctx.set_gpr(7, 0u + static_cast<std::uint32_t>(4));
    if (rt.invoke_chained_direct<&recomp_unit_0000_entry, 0u, 174u, 0x08804B28u>(ctx, &aot_mem) && ctx.pc == 0x088574F4u) goto L_088574F4;
    return;
L_088574F4:
    ctx.set_gpr(4, ctx.gpr[17] + static_cast<std::uint32_t>(488));
    ctx.set_gpr(31, 0x08857500u);
    ctx.set_gpr(5, 0u + static_cast<std::uint32_t>(-1));
    if (rt.invoke_chained_direct<&recomp_unit_0017_entry, 17u, 563u, 0x0884A284u>(ctx, &aot_mem) && ctx.pc == 0x08857500u) goto L_08857500;
    return;
L_08857500:
    ctx.set_gpr(5, 2181u << 16u);
    ctx.set_gpr(4, ctx.gpr[17] + static_cast<std::uint32_t>(8));
    ctx.set_gpr(5, ctx.gpr[5] + static_cast<std::uint32_t>(-5476));
    ctx.set_gpr(6, 0u + static_cast<std::uint32_t>(120));
    ctx.set_gpr(31, 0x08857518u);
    ctx.set_gpr(7, 0u + static_cast<std::uint32_t>(4));
    if (rt.invoke_chained_direct<&recomp_unit_0000_entry, 0u, 174u, 0x08804B28u>(ctx, &aot_mem) && ctx.pc == 0x08857518u) goto L_08857518;
    return;
L_08857518:
    ctx.set_gpr(2, static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int16_t>(ctx.gpr[16]))));
    if (static_cast<std::int32_t>(ctx.gpr[2]) <= 0) {
    ctx.set_gpr(2, ctx.gpr[17] + 0u);
        goto L_08857530;
    }
    goto L_08857524;
L_08857524:
    ctx.set_gpr(31, 0x0885752Cu);
    ctx.set_gpr(4, ctx.gpr[17] + 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0000_entry, 0u, 201u, 0x08804D84u>(ctx, &aot_mem) && ctx.pc == 0x0885752Cu) goto L_0885752C;
    return;
L_0885752C:
    ctx.set_gpr(2, ctx.gpr[17] + 0u);
    goto L_08857530;
L_08857530:
    ctx.set_gpr(31, rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(12)));
    ctx.set_gpr(17, rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(8)));
    ctx.set_gpr(16, rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(4)));
    jump_target = ctx.gpr[31];
    ctx.set_gpr(29, ctx.gpr[29] + static_cast<std::uint32_t>(16));
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_08857544:
    ctx.set_gpr(29, ctx.gpr[29] + static_cast<std::uint32_t>(-16));
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(12), ctx.gpr[31]);
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(8), ctx.gpr[17]);
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(4), ctx.gpr[16]);
    ctx.set_gpr(17, ctx.gpr[4] + 0u);
    { const bool branch_taken = ctx.gpr[17] == 0u;
    ctx.set_gpr(16, ctx.gpr[5] + 0u);
      if (branch_taken) {
          goto L_0885757C;
      }
      goto L_08857560;
    }
L_08857560:
    ctx.set_gpr(31, 0x08857568u);
    ctx.set_gpr(4, rt.memory().aot_load32(ctx.gpr[17] + static_cast<std::uint32_t>(0)));
    if (rt.invoke_chained_direct<&recomp_unit_0014_entry, 14u, 253u, 0x0883D42Cu>(ctx, &aot_mem) && ctx.pc == 0x08857568u) goto L_08857568;
    return;
L_08857568:
    ctx.set_gpr(2, static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int16_t>(ctx.gpr[16]))));
    if (static_cast<std::int32_t>(ctx.gpr[2]) <= 0) {
    ctx.set_gpr(2, ctx.gpr[17] + 0u);
        goto L_08857580;
    }
    goto L_08857574;
L_08857574:
    ctx.set_gpr(31, 0x0885757Cu);
    ctx.set_gpr(4, ctx.gpr[17] + 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0000_entry, 0u, 201u, 0x08804D84u>(ctx, &aot_mem) && ctx.pc == 0x0885757Cu) goto L_0885757C;
    return;
L_0885757C:
    ctx.set_gpr(2, ctx.gpr[17] + 0u);
    goto L_08857580;
L_08857580:
    ctx.set_gpr(31, rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(12)));
    ctx.set_gpr(17, rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(8)));
    ctx.set_gpr(16, rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(4)));
    jump_target = ctx.gpr[31];
    ctx.set_gpr(29, ctx.gpr[29] + static_cast<std::uint32_t>(16));
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_08857594:
    ctx.set_gpr(29, ctx.gpr[29] + static_cast<std::uint32_t>(-16));
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(12), ctx.gpr[31]);
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(8), ctx.gpr[17]);
    ctx.set_gpr(17, ctx.gpr[4] + 0u);
    ctx.set_gpr(5, 2181u << 16u);
    ctx.set_gpr(6, 2181u << 16u);
    ctx.set_gpr(4, ctx.gpr[17] + static_cast<std::uint32_t>(8));
    ctx.set_gpr(5, ctx.gpr[5] + static_cast<std::uint32_t>(-6104));
    ctx.set_gpr(6, ctx.gpr[6] + static_cast<std::uint32_t>(-5476));
    ctx.set_gpr(7, 0u + static_cast<std::uint32_t>(120));
    ctx.set_gpr(8, 0u + static_cast<std::uint32_t>(4));
    ctx.set_gpr(31, 0x088575C8u);
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(4), ctx.gpr[16]);
    if (rt.invoke_chained_direct<&recomp_unit_0000_entry, 0u, 179u, 0x08804B94u>(ctx, &aot_mem) && ctx.pc == 0x088575C8u) goto L_088575C8;
    return;
L_088575C8:
    ctx.set_gpr(31, 0x088575D0u);
    ctx.set_gpr(4, ctx.gpr[17] + static_cast<std::uint32_t>(488));
    if (rt.invoke_chained_direct<&recomp_unit_0018_entry, 18u, 104u, 0x0884C6D4u>(ctx, &aot_mem) && ctx.pc == 0x088575D0u) goto L_088575D0;
    return;
L_088575D0:
    ctx.set_gpr(5, 2181u << 16u);
    ctx.set_gpr(6, 2181u << 16u);
    ctx.set_gpr(4, ctx.gpr[17] + static_cast<std::uint32_t>(496));
    ctx.set_gpr(5, ctx.gpr[5] + static_cast<std::uint32_t>(-6104));
    ctx.set_gpr(6, ctx.gpr[6] + static_cast<std::uint32_t>(-5476));
    ctx.set_gpr(7, 0u + static_cast<std::uint32_t>(120));
    ctx.set_gpr(31, 0x088575F0u);
    ctx.set_gpr(8, 0u + static_cast<std::uint32_t>(4));
    if (rt.invoke_chained_direct<&recomp_unit_0000_entry, 0u, 179u, 0x08804B94u>(ctx, &aot_mem) && ctx.pc == 0x088575F0u) goto L_088575F0;
    return;
L_088575F0:
    ctx.set_gpr(31, 0x088575F8u);
    ctx.set_gpr(4, ctx.gpr[17] + static_cast<std::uint32_t>(976));
    if (rt.invoke_chained_direct<&recomp_unit_0018_entry, 18u, 104u, 0x0884C6D4u>(ctx, &aot_mem) && ctx.pc == 0x088575F8u) goto L_088575F8;
    return;
L_088575F8:
    ctx.set_gpr(31, 0x08857600u);
    ctx.set_gpr(4, ctx.gpr[17] + static_cast<std::uint32_t>(984));
    if (rt.invoke_chained_direct<&recomp_unit_0018_entry, 18u, 735u, 0x0884E828u>(ctx, &aot_mem) && ctx.pc == 0x08857600u) goto L_08857600;
    return;
L_08857600:
    ctx.set_gpr(31, 0x08857608u);
    ctx.set_gpr(4, ctx.gpr[17] + static_cast<std::uint32_t>(1104));
    if (rt.invoke_chained_direct<&recomp_unit_0018_entry, 18u, 104u, 0x0884C6D4u>(ctx, &aot_mem) && ctx.pc == 0x08857608u) goto L_08857608;
    return;
L_08857608:
    ctx.set_gpr(31, 0x08857610u);
    ctx.set_gpr(4, ctx.gpr[17] + static_cast<std::uint32_t>(1120));
    if (rt.invoke_chained_direct<&recomp_unit_0016_entry, 16u, 512u, 0x088472A8u>(ctx, &aot_mem) && ctx.pc == 0x08857610u) goto L_08857610;
    return;
L_08857610:
    ctx.set_gpr(31, 0x08857618u);
    ctx.set_gpr(4, ctx.gpr[17] + static_cast<std::uint32_t>(1140));
    if (rt.invoke_chained_direct<&recomp_unit_0016_entry, 16u, 512u, 0x088472A8u>(ctx, &aot_mem) && ctx.pc == 0x08857618u) goto L_08857618;
    return;
L_08857618:
    ctx.set_gpr(31, 0x08857620u);
    ctx.set_gpr(4, ctx.gpr[17] + static_cast<std::uint32_t>(1152));
    if (rt.invoke_chained_direct<&recomp_unit_0016_entry, 16u, 512u, 0x088472A8u>(ctx, &aot_mem) && ctx.pc == 0x08857620u) goto L_08857620;
    return;
L_08857620:
    ctx.set_gpr(16, ctx.gpr[17] + static_cast<std::uint32_t>(1176));
    goto L_08857624;
L_08857624:
    ctx.set_gpr(31, 0x0885762Cu);
    ctx.set_gpr(4, ctx.gpr[16] + 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0016_entry, 16u, 512u, 0x088472A8u>(ctx, &aot_mem) && ctx.pc == 0x0885762Cu) goto L_0885762C;
    return;
L_0885762C:
    ctx.set_gpr(16, ctx.gpr[16] + static_cast<std::uint32_t>(12));
    ctx.set_gpr(4, ctx.gpr[17] + static_cast<std::uint32_t>(1200));
    ctx.set_gpr(2, ctx.gpr[16] < ctx.gpr[4] ? 1u : 0u);
    { const bool branch_taken = ctx.gpr[2] != 0u;
    // nop
      if (branch_taken) {
          goto L_08857624;
      }
      goto L_08857640;
    }
L_08857640:
    ctx.set_gpr(31, 0x08857648u);
    // nop
    goto L_0885772C;
L_08857648:
    ctx.set_gpr(31, 0x08857650u);
    ctx.set_gpr(4, ctx.gpr[17] + static_cast<std::uint32_t>(1204));
    goto L_08857720;
L_08857650:
    rt.memory().aot_store32(ctx.gpr[17] + static_cast<std::uint32_t>(0), 0u);
    ctx.set_gpr(4, ctx.gpr[17] + static_cast<std::uint32_t>(488));
    ctx.set_gpr(5, 0u + 0u);
    ctx.set_gpr(31, 0x08857664u);
    rt.memory().aot_store32(ctx.gpr[17] + static_cast<std::uint32_t>(4), 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0017_entry, 17u, 577u, 0x0884A344u>(ctx, &aot_mem) && ctx.pc == 0x08857664u) goto L_08857664;
    return;
L_08857664:
    ctx.set_gpr(4, ctx.gpr[17] + static_cast<std::uint32_t>(976));
    ctx.set_gpr(31, 0x08857670u);
    ctx.set_gpr(5, 0u + 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0017_entry, 17u, 577u, 0x0884A344u>(ctx, &aot_mem) && ctx.pc == 0x08857670u) goto L_08857670;
    return;
L_08857670:
    ctx.set_gpr(4, ctx.gpr[17] + static_cast<std::uint32_t>(1104));
    ctx.set_gpr(31, 0x0885767Cu);
    ctx.set_gpr(5, 0u + 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0017_entry, 17u, 577u, 0x0884A344u>(ctx, &aot_mem) && ctx.pc == 0x0885767Cu) goto L_0885767C;
    return;
L_0885767C:
    rt.memory().aot_store32(ctx.gpr[17] + static_cast<std::uint32_t>(1132), 0u);
    rt.memory().aot_store32(ctx.gpr[17] + static_cast<std::uint32_t>(1136), 0u);
    rt.memory().aot_store32(ctx.gpr[17] + static_cast<std::uint32_t>(1164), 0u);
    rt.memory().aot_store32(ctx.gpr[17] + static_cast<std::uint32_t>(1168), 0u);
    ctx.set_gpr(4, ctx.gpr[17] + static_cast<std::uint32_t>(1200));
    ctx.set_gpr(5, 0u + 0u);
    ctx.set_gpr(31, 0x0885769Cu);
    rt.memory().aot_store32(ctx.gpr[17] + static_cast<std::uint32_t>(1172), 0u);
    goto L_088576F8;
L_0885769C:
    ctx.set_gpr(4, ctx.gpr[17] + static_cast<std::uint32_t>(1204));
    ctx.set_gpr(31, 0x088576A8u);
    ctx.set_gpr(5, 0u + 0u);
    goto L_088576D0;
L_088576A8:
    rt.memory().aot_store32(ctx.gpr[17] + static_cast<std::uint32_t>(1208), 0u);
    rt.memory().aot_store32(ctx.gpr[17] + static_cast<std::uint32_t>(1212), 0u);
    rt.memory().aot_store32(ctx.gpr[17] + static_cast<std::uint32_t>(1116), 0u);
    rt.memory().aot_store8(ctx.gpr[17] + static_cast<std::uint32_t>(1220), static_cast<std::uint8_t>(0u));
    ctx.set_gpr(2, ctx.gpr[17] + 0u);
    ctx.set_gpr(31, rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(12)));
    ctx.set_gpr(17, rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(8)));
    ctx.set_gpr(16, rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(4)));
    jump_target = ctx.gpr[31];
    ctx.set_gpr(29, ctx.gpr[29] + static_cast<std::uint32_t>(16));
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_088576D0:
    ctx.set_gpr(29, ctx.gpr[29] + static_cast<std::uint32_t>(-16));
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(12), ctx.gpr[31]);
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(8), ctx.gpr[16]);
    ctx.set_gpr(31, 0x088576E4u);
    ctx.set_gpr(16, ctx.gpr[4] + 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0085_entry, 85u, 61u, 0x089584C4u>(ctx, &aot_mem) && ctx.pc == 0x088576E4u) goto L_088576E4;
    return;
L_088576E4:
    ctx.set_gpr(2, ctx.gpr[16] + 0u);
    ctx.set_gpr(31, rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(12)));
    ctx.set_gpr(16, rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(8)));
    jump_target = ctx.gpr[31];
    ctx.set_gpr(29, ctx.gpr[29] + static_cast<std::uint32_t>(16));
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_088576F8:
    ctx.set_gpr(29, ctx.gpr[29] + static_cast<std::uint32_t>(-16));
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(12), ctx.gpr[31]);
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(8), ctx.gpr[16]);
    ctx.set_gpr(31, 0x0885770Cu);
    ctx.set_gpr(16, ctx.gpr[4] + 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0085_entry, 85u, 61u, 0x089584C4u>(ctx, &aot_mem) && ctx.pc == 0x0885770Cu) goto L_0885770C;
    return;
L_0885770C:
    ctx.set_gpr(2, ctx.gpr[16] + 0u);
    ctx.set_gpr(31, rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(12)));
    ctx.set_gpr(16, rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(8)));
    jump_target = ctx.gpr[31];
    ctx.set_gpr(29, ctx.gpr[29] + static_cast<std::uint32_t>(16));
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_08857720:
    rt.memory().aot_store32(ctx.gpr[4] + static_cast<std::uint32_t>(0), 0u);
    jump_target = ctx.gpr[31];
    ctx.set_gpr(2, ctx.gpr[4] + 0u);
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_0885772C:
    rt.memory().aot_store32(ctx.gpr[4] + static_cast<std::uint32_t>(0), 0u);
    jump_target = ctx.gpr[31];
    ctx.set_gpr(2, ctx.gpr[4] + 0u);
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_08857738:
    rt.memory().aot_store32(ctx.gpr[4] + static_cast<std::uint32_t>(0), 0u);
    jump_target = ctx.gpr[31];
    ctx.set_gpr(2, ctx.gpr[4] + 0u);
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_08857744:
    rt.memory().aot_store32(ctx.gpr[4] + static_cast<std::uint32_t>(0), 0u);
    jump_target = ctx.gpr[31];
    ctx.set_gpr(2, ctx.gpr[4] + 0u);
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_08857750:
    rt.memory().aot_store32(ctx.gpr[4] + static_cast<std::uint32_t>(0), 0u);
    jump_target = ctx.gpr[31];
    ctx.set_gpr(2, ctx.gpr[4] + 0u);
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_0885775C:
    rt.memory().aot_store32(ctx.gpr[4] + static_cast<std::uint32_t>(0), 0u);
    jump_target = ctx.gpr[31];
    ctx.set_gpr(2, ctx.gpr[4] + 0u);
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_08857768:
    ctx.set_gpr(29, ctx.gpr[29] + static_cast<std::uint32_t>(-16));
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(12), ctx.gpr[31]);
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(8), ctx.gpr[17]);
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(4), ctx.gpr[16]);
    ctx.set_gpr(17, ctx.gpr[4] + 0u);
    { const bool branch_taken = ctx.gpr[17] == 0u;
    ctx.set_gpr(16, ctx.gpr[5] + 0u);
      if (branch_taken) {
          goto L_088577F8;
      }
      goto L_08857784;
    }
L_08857784:
    ctx.set_gpr(4, ctx.gpr[17] + static_cast<std::uint32_t>(13588));
    ctx.set_gpr(31, 0x08857790u);
    ctx.set_gpr(5, 0u + static_cast<std::uint32_t>(-1));
    if (rt.invoke_chained_direct<&recomp_unit_0015_entry, 15u, 148u, 0x08840894u>(ctx, &aot_mem) && ctx.pc == 0x08857790u) goto L_08857790;
    return;
L_08857790:
    ctx.set_gpr(5, 2181u << 16u);
    ctx.set_gpr(4, ctx.gpr[17] + static_cast<std::uint32_t>(56));
    ctx.set_gpr(5, ctx.gpr[5] + static_cast<std::uint32_t>(29828));
    ctx.set_gpr(6, 0u + static_cast<std::uint32_t>(1224));
    ctx.set_gpr(31, 0x088577A8u);
    ctx.set_gpr(7, 0u + static_cast<std::uint32_t>(11));
    if (rt.invoke_chained_direct<&recomp_unit_0000_entry, 0u, 174u, 0x08804B28u>(ctx, &aot_mem) && ctx.pc == 0x088577A8u) goto L_088577A8;
    return;
L_088577A8:
    ctx.set_gpr(4, ctx.gpr[17] + static_cast<std::uint32_t>(44));
    ctx.set_gpr(31, 0x088577B4u);
    ctx.set_gpr(5, 0u + static_cast<std::uint32_t>(-1));
    goto L_0885731C;
L_088577B4:
    ctx.set_gpr(4, ctx.gpr[17] + static_cast<std::uint32_t>(40));
    ctx.set_gpr(31, 0x088577C0u);
    ctx.set_gpr(5, 0u + static_cast<std::uint32_t>(-1));
    goto L_0885736C;
L_088577C0:
    ctx.set_gpr(4, ctx.gpr[17] + static_cast<std::uint32_t>(36));
    ctx.set_gpr(31, 0x088577CCu);
    ctx.set_gpr(5, 0u + static_cast<std::uint32_t>(-1));
    goto L_088573BC;
L_088577CC:
    ctx.set_gpr(4, ctx.gpr[17] + static_cast<std::uint32_t>(32));
    ctx.set_gpr(31, 0x088577D8u);
    ctx.set_gpr(5, 0u + static_cast<std::uint32_t>(-1));
    goto L_0885740C;
L_088577D8:
    ctx.set_gpr(4, ctx.gpr[17] + static_cast<std::uint32_t>(28));
    ctx.set_gpr(31, 0x088577E4u);
    ctx.set_gpr(5, 0u + static_cast<std::uint32_t>(-1));
    if (rt.invoke_chained_direct<&recomp_unit_0015_entry, 15u, 129u, 0x08840790u>(ctx, &aot_mem) && ctx.pc == 0x088577E4u) goto L_088577E4;
    return;
L_088577E4:
    ctx.set_gpr(2, static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int16_t>(ctx.gpr[16]))));
    if (static_cast<std::int32_t>(ctx.gpr[2]) <= 0) {
    ctx.set_gpr(2, ctx.gpr[17] + 0u);
        goto L_088577FC;
    }
    goto L_088577F0;
L_088577F0:
    ctx.set_gpr(31, 0x088577F8u);
    ctx.set_gpr(4, ctx.gpr[17] + 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0000_entry, 0u, 201u, 0x08804D84u>(ctx, &aot_mem) && ctx.pc == 0x088577F8u) goto L_088577F8;
    return;
L_088577F8:
    ctx.set_gpr(2, ctx.gpr[17] + 0u);
    goto L_088577FC;
L_088577FC:
    ctx.set_gpr(31, rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(12)));
    ctx.set_gpr(17, rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(8)));
    ctx.set_gpr(16, rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(4)));
    jump_target = ctx.gpr[31];
    ctx.set_gpr(29, ctx.gpr[29] + static_cast<std::uint32_t>(16));
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_08857810:
    jump_target = ctx.gpr[31];
    rt.memory().aot_store32(ctx.gpr[4] + static_cast<std::uint32_t>(4), 0u);
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_08857818:
    ctx.set_gpr(29, ctx.gpr[29] + static_cast<std::uint32_t>(-176));
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(28), ctx.gpr[31]);
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(24), ctx.gpr[21]);
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(20), ctx.gpr[20]);
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(16), ctx.gpr[19]);
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(12), ctx.gpr[18]);
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(8), ctx.gpr[17]);
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(4), ctx.gpr[16]);
    ctx.set_gpr(16, ctx.gpr[4] + 0u);
    ctx.set_gpr(4, ctx.gpr[29] + static_cast<std::uint32_t>(172));
    ctx.set_gpr(31, 0x08857848u);
    ctx.set_gpr(5, 0u + 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0014_entry, 14u, 268u, 0x0883D530u>(ctx, &aot_mem) && ctx.pc == 0x08857848u) goto L_08857848;
    return;
L_08857848:
    ctx.set_gpr(6, 2226u << 16u);
    ctx.set_gpr(6, ctx.gpr[6] + static_cast<std::uint32_t>(18240));
    ctx.set_gpr(5, ctx.gpr[29] + static_cast<std::uint32_t>(32));
    ctx.set_gpr(4, 0u + static_cast<std::uint32_t>(8));
    goto L_08857858;
L_08857858:
    ctx.set_gpr(3, rt.memory().aot_load32(ctx.gpr[6] + static_cast<std::uint32_t>(0)));
    ctx.set_gpr(2, rt.memory().aot_load32(ctx.gpr[6] + static_cast<std::uint32_t>(4)));
    ctx.set_gpr(4, ctx.gpr[4] + static_cast<std::uint32_t>(-1));
    rt.memory().aot_store32(ctx.gpr[5] + static_cast<std::uint32_t>(0), ctx.gpr[3]);
    rt.memory().aot_store32(ctx.gpr[5] + static_cast<std::uint32_t>(4), ctx.gpr[2]);
    ctx.set_gpr(6, ctx.gpr[6] + static_cast<std::uint32_t>(8));
    { const bool branch_taken = static_cast<std::int32_t>(ctx.gpr[4]) > 0;
    ctx.set_gpr(5, ctx.gpr[5] + static_cast<std::uint32_t>(8));
      if (branch_taken) {
          goto L_08857858;
      }
      goto L_08857878;
    }
L_08857878:
    ctx.set_gpr(2, 2226u << 16u);
    ctx.fpr[1] = std::bit_cast<float>(rt.memory().aot_load32(ctx.gpr[2] + static_cast<std::uint32_t>(18224)));
    ctx.set_gpr(2, 2226u << 16u);
    ctx.fpr[0] = std::bit_cast<float>(rt.memory().aot_load32(ctx.gpr[2] + static_cast<std::uint32_t>(18228)));
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(96), std::bit_cast<std::uint32_t>(ctx.fpr[1]));
    ctx.set_gpr(2, 2226u << 16u);
    ctx.fpr[1] = std::bit_cast<float>(rt.memory().aot_load32(ctx.gpr[2] + static_cast<std::uint32_t>(18232)));
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(100), std::bit_cast<std::uint32_t>(ctx.fpr[0]));
    ctx.set_gpr(2, 2226u << 16u);
    ctx.fpr[0] = std::bit_cast<float>(rt.memory().aot_load32(ctx.gpr[2] + static_cast<std::uint32_t>(18236)));
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(104), std::bit_cast<std::uint32_t>(ctx.fpr[1]));
    ctx.set_gpr(2, 2226u << 16u);
    ctx.fpr[1] = std::bit_cast<float>(rt.memory().aot_load32(ctx.gpr[2] + static_cast<std::uint32_t>(18208)));
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(108), std::bit_cast<std::uint32_t>(ctx.fpr[0]));
    ctx.set_gpr(2, 2226u << 16u);
    ctx.fpr[0] = std::bit_cast<float>(rt.memory().aot_load32(ctx.gpr[2] + static_cast<std::uint32_t>(18212)));
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(112), std::bit_cast<std::uint32_t>(ctx.fpr[1]));
    ctx.set_gpr(2, 2226u << 16u);
    ctx.fpr[1] = std::bit_cast<float>(rt.memory().aot_load32(ctx.gpr[2] + static_cast<std::uint32_t>(18216)));
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(116), std::bit_cast<std::uint32_t>(ctx.fpr[0]));
    ctx.set_gpr(2, 2226u << 16u);
    ctx.fpr[0] = std::bit_cast<float>(rt.memory().aot_load32(ctx.gpr[2] + static_cast<std::uint32_t>(18220)));
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(120), std::bit_cast<std::uint32_t>(ctx.fpr[1]));
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(124), std::bit_cast<std::uint32_t>(ctx.fpr[0]));
    ctx.set_gpr(2, rt.memory().aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(4)));
    ctx.set_gpr(1, ctx.gpr[2] < static_cast<std::uint32_t>(8) ? 1u : 0u);
    if (ctx.gpr[1] == 0u) {
    ctx.set_gpr(4, ctx.gpr[29] + static_cast<std::uint32_t>(172));
        goto L_08857E9C;
    }
    goto L_088578E8;
L_088578E8:
    ctx.set_gpr(3, 2225u << 16u);
    ctx.set_gpr(2, ctx.gpr[2] << 2u);
    ctx.set_gpr(3, ctx.gpr[3] + static_cast<std::uint32_t>(8736));
    ctx.set_gpr(2, ctx.gpr[2] + ctx.gpr[3]);
    ctx.set_gpr(2, rt.memory().aot_load32(ctx.gpr[2] + static_cast<std::uint32_t>(0)));
    jump_target = ctx.gpr[2];
    // nop
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_08857904:
    ctx.set_gpr(31, 0x0885790Cu);
    ctx.set_gpr(4, 0u + static_cast<std::uint32_t>(1));
    if (rt.invoke_chained_direct<&recomp_unit_0192_entry, 192u, 518u, 0x08B06174u>(ctx, &aot_mem) && ctx.pc == 0x0885790Cu) goto L_0885790C;
    return;
L_0885790C:
    ctx.set_gpr(18, 0u + 0u);
    ctx.set_gpr(17, ctx.gpr[16] + 0u);
    goto L_08857914;
L_08857914:
    ctx.set_gpr(31, 0x0885791Cu);
    ctx.set_gpr(4, ctx.gpr[17] + static_cast<std::uint32_t>(56));
    if (rt.invoke_chained_direct<&recomp_unit_0021_entry, 21u, 15u, 0x088580CCu>(ctx, &aot_mem) && ctx.pc == 0x0885791Cu) goto L_0885791C;
    return;
L_0885791C:
    ctx.set_gpr(20, 0u + 0u);
    ctx.set_gpr(19, ctx.gpr[17] + 0u);
    goto L_08857924;
L_08857924:
    ctx.set_gpr(31, 0x0885792Cu);
    ctx.set_gpr(4, ctx.gpr[19] + static_cast<std::uint32_t>(64));
    if (rt.invoke_chained_direct<&recomp_unit_0018_entry, 18u, 790u, 0x0884EB34u>(ctx, &aot_mem) && ctx.pc == 0x0885792Cu) goto L_0885792C;
    return;
L_0885792C:
    ctx.set_gpr(20, ctx.gpr[20] + static_cast<std::uint32_t>(1));
    ctx.set_gpr(2, static_cast<std::int32_t>(ctx.gpr[20]) < 4 ? 1u : 0u);
    { const bool branch_taken = ctx.gpr[2] != 0u;
    ctx.set_gpr(19, ctx.gpr[19] + static_cast<std::uint32_t>(120));
      if (branch_taken) {
          goto L_08857924;
      }
      goto L_0885793C;
    }
L_0885793C:
    ctx.set_gpr(20, 0u + 0u);
    ctx.set_gpr(19, ctx.gpr[17] + 0u);
    goto L_08857944;
L_08857944:
    ctx.set_gpr(31, 0x0885794Cu);
    ctx.set_gpr(4, ctx.gpr[19] + static_cast<std::uint32_t>(552));
    if (rt.invoke_chained_direct<&recomp_unit_0018_entry, 18u, 790u, 0x0884EB34u>(ctx, &aot_mem) && ctx.pc == 0x0885794Cu) goto L_0885794C;
    return;
L_0885794C:
    ctx.set_gpr(20, ctx.gpr[20] + static_cast<std::uint32_t>(1));
    ctx.set_gpr(2, static_cast<std::int32_t>(ctx.gpr[20]) < 4 ? 1u : 0u);
    { const bool branch_taken = ctx.gpr[2] != 0u;
    ctx.set_gpr(19, ctx.gpr[19] + static_cast<std::uint32_t>(120));
      if (branch_taken) {
          goto L_08857944;
      }
      goto L_0885795C;
    }
L_0885795C:
    ctx.set_gpr(31, 0x08857964u);
    ctx.set_gpr(4, ctx.gpr[17] + static_cast<std::uint32_t>(1040));
    if (rt.invoke_chained_direct<&recomp_unit_0018_entry, 18u, 790u, 0x0884EB34u>(ctx, &aot_mem) && ctx.pc == 0x08857964u) goto L_08857964;
    return;
L_08857964:
    ctx.set_gpr(18, ctx.gpr[18] + static_cast<std::uint32_t>(1));
    ctx.set_gpr(2, static_cast<std::int32_t>(ctx.gpr[18]) < 11 ? 1u : 0u);
    { const bool branch_taken = ctx.gpr[2] != 0u;
    ctx.set_gpr(17, ctx.gpr[17] + static_cast<std::uint32_t>(1224));
      if (branch_taken) {
          goto L_08857914;
      }
      goto L_08857974;
    }
L_08857974:
    ctx.set_gpr(31, 0x0885797Cu);
    rt.memory().aot_store32(ctx.gpr[16] + static_cast<std::uint32_t>(52), 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0017_entry, 17u, 181u, 0x08848C0Cu>(ctx, &aot_mem) && ctx.pc == 0x0885797Cu) goto L_0885797C;
    return;
L_0885797C:
    ctx.set_gpr(31, 0x08857984u);
    rt.memory().aot_store32(ctx.gpr[16] + static_cast<std::uint32_t>(8), ctx.gpr[2]);
    if (rt.invoke_chained_direct<&recomp_unit_0017_entry, 17u, 180u, 0x08848C00u>(ctx, &aot_mem) && ctx.pc == 0x08857984u) goto L_08857984;
    return;
L_08857984:
    ctx.set_gpr(31, 0x0885798Cu);
    rt.memory().aot_store32(ctx.gpr[16] + static_cast<std::uint32_t>(12), ctx.gpr[2]);
    if (rt.invoke_chained_direct<&recomp_unit_0017_entry, 17u, 179u, 0x08848BF4u>(ctx, &aot_mem) && ctx.pc == 0x0885798Cu) goto L_0885798C;
    return;
L_0885798C:
    ctx.set_gpr(31, 0x08857994u);
    rt.memory().aot_store32(ctx.gpr[16] + static_cast<std::uint32_t>(16), ctx.gpr[2]);
    if (rt.invoke_chained_direct<&recomp_unit_0017_entry, 17u, 183u, 0x08848C24u>(ctx, &aot_mem) && ctx.pc == 0x08857994u) goto L_08857994;
    return;
L_08857994:
    ctx.set_gpr(31, 0x0885799Cu);
    rt.memory().aot_store32(ctx.gpr[16] + static_cast<std::uint32_t>(20), ctx.gpr[2]);
    if (rt.invoke_chained_direct<&recomp_unit_0017_entry, 17u, 182u, 0x08848C18u>(ctx, &aot_mem) && ctx.pc == 0x0885799Cu) goto L_0885799C;
    return;
L_0885799C:
    rt.memory().aot_store32(ctx.gpr[16] + static_cast<std::uint32_t>(24), ctx.gpr[2]);
    rt.memory().aot_store32(ctx.gpr[16] + static_cast<std::uint32_t>(48), 0u);
    ctx.set_gpr(2, 16256u << 16u);
    rt.memory().aot_store32(ctx.gpr[16] + static_cast<std::uint32_t>(13584), ctx.gpr[2]);
    rt.memory().aot_store8(ctx.gpr[16] + static_cast<std::uint32_t>(13628), static_cast<std::uint8_t>(0u));
    ctx.set_gpr(2, 0u + static_cast<std::uint32_t>(1));
    rt.memory().aot_store8(ctx.gpr[16] + static_cast<std::uint32_t>(13629), static_cast<std::uint8_t>(ctx.gpr[2]));
    ctx.set_gpr(2, rt.memory().aot_load8(ctx.gpr[16] + static_cast<std::uint32_t>(0)));
    if (ctx.gpr[2] == 0u) {
    ctx.set_gpr(2, rt.memory().aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(4)));
        goto L_088579D0;
    }
    goto L_088579C4;
L_088579C4:
    ctx.set_gpr(2, 0u + static_cast<std::uint32_t>(7));
    { const bool branch_taken = 0u == 0u;
    rt.memory().aot_store32(ctx.gpr[16] + static_cast<std::uint32_t>(4), ctx.gpr[2]);
      if (branch_taken) {
          goto L_08857E98;
      }
      goto L_088579D0;
    }
L_088579D0:
    ctx.set_gpr(2, ctx.gpr[2] + static_cast<std::uint32_t>(1));
    rt.memory().aot_store32(ctx.gpr[16] + static_cast<std::uint32_t>(4), ctx.gpr[2]);
    goto L_088579D8;
L_088579D8:
    ctx.set_gpr(4, ctx.gpr[16] + static_cast<std::uint32_t>(1040));
    ctx.set_gpr(5, 0u + static_cast<std::uint32_t>(81));
    ctx.set_gpr(31, 0x088579E8u);
    ctx.set_gpr(6, 0u + 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0018_entry, 18u, 791u, 0x0884EB3Cu>(ctx, &aot_mem) && ctx.pc == 0x088579E8u) goto L_088579E8;
    return;
L_088579E8:
    { const bool branch_taken = ctx.gpr[2] == 0u;
    // nop
      if (branch_taken) {
          goto L_08857E98;
      }
      goto L_088579F0;
    }
L_088579F0:
    ctx.set_gpr(2, rt.memory().aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(4)));
    ctx.set_gpr(2, ctx.gpr[2] + static_cast<std::uint32_t>(1));
    { const bool branch_taken = 0u == 0u;
    rt.memory().aot_store32(ctx.gpr[16] + static_cast<std::uint32_t>(4), ctx.gpr[2]);
      if (branch_taken) {
          goto L_08857E98;
      }
      goto L_08857A00;
    }
L_08857A00:
    ctx.set_gpr(18, 0u + 0u);
    ctx.set_gpr(17, ctx.gpr[16] + 0u);
    goto L_08857A08;
L_08857A08:
    ctx.set_gpr(8, 0u + static_cast<std::uint32_t>(1));
    ctx.set_gpr(4, ctx.gpr[29] + static_cast<std::uint32_t>(168));
    ctx.set_gpr(5, ctx.gpr[17] + static_cast<std::uint32_t>(1040));
    ctx.set_gpr(6, 0u + 0u);
    ctx.set_gpr(7, ctx.gpr[29] + static_cast<std::uint32_t>(112));
    ctx.set_gpr(9, ctx.gpr[8] + 0u);
    ctx.set_gpr(31, 0x08857A28u);
    ctx.set_gpr(10, ctx.gpr[8] + 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0018_entry, 18u, 1069u, 0x0884F85Cu>(ctx, &aot_mem) && ctx.pc == 0x08857A28u) goto L_08857A28;
    return;
L_08857A28:
    ctx.set_gpr(4, ctx.gpr[29] + static_cast<std::uint32_t>(168));
    ctx.set_gpr(31, 0x08857A34u);
    ctx.set_gpr(5, 0u + static_cast<std::uint32_t>(-1));
    if (rt.invoke_chained_direct<&recomp_unit_0017_entry, 17u, 563u, 0x0884A284u>(ctx, &aot_mem) && ctx.pc == 0x08857A34u) goto L_08857A34;
    return;
L_08857A34:
    ctx.set_gpr(18, ctx.gpr[18] + static_cast<std::uint32_t>(1));
    ctx.set_gpr(2, static_cast<std::int32_t>(ctx.gpr[18]) < 11 ? 1u : 0u);
    { const bool branch_taken = ctx.gpr[2] != 0u;
    ctx.set_gpr(17, ctx.gpr[17] + static_cast<std::uint32_t>(1224));
      if (branch_taken) {
          goto L_08857A08;
      }
      goto L_08857A44;
    }
L_08857A44:
    ctx.set_gpr(2, rt.memory().aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(4)));
    ctx.set_gpr(2, ctx.gpr[2] + static_cast<std::uint32_t>(1));
    rt.memory().aot_store32(ctx.gpr[16] + static_cast<std::uint32_t>(4), ctx.gpr[2]);
    goto L_08857A50;
L_08857A50:
    ctx.set_gpr(20, 0u + 0u);
    ctx.set_gpr(18, 0u + 0u);
    goto L_08857A58;
L_08857A58:
    ctx.set_gpr(19, 0u + 0u);
    ctx.set_gpr(17, ctx.gpr[16] + 0u);
    goto L_08857A60;
L_08857A60:
    ctx.set_gpr(2, ctx.gpr[17] + ctx.gpr[18]);
    ctx.set_gpr(9, 0u + static_cast<std::uint32_t>(1));
    ctx.set_gpr(5, ctx.gpr[2] + static_cast<std::uint32_t>(64));
    ctx.set_gpr(6, ctx.gpr[20] + static_cast<std::uint32_t>(1));
    ctx.set_gpr(4, ctx.gpr[29] + static_cast<std::uint32_t>(164));
    ctx.set_gpr(7, ctx.gpr[29] + static_cast<std::uint32_t>(96));
    ctx.set_gpr(8, 0u + static_cast<std::uint32_t>(2));
    ctx.set_gpr(31, 0x08857A84u);
    ctx.set_gpr(10, ctx.gpr[9] + 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0018_entry, 18u, 1069u, 0x0884F85Cu>(ctx, &aot_mem) && ctx.pc == 0x08857A84u) goto L_08857A84;
    return;
L_08857A84:
    ctx.set_gpr(4, ctx.gpr[29] + static_cast<std::uint32_t>(164));
    ctx.set_gpr(31, 0x08857A90u);
    ctx.set_gpr(5, 0u + static_cast<std::uint32_t>(-1));
    if (rt.invoke_chained_direct<&recomp_unit_0017_entry, 17u, 563u, 0x0884A284u>(ctx, &aot_mem) && ctx.pc == 0x08857A90u) goto L_08857A90;
    return;
L_08857A90:
    ctx.set_gpr(19, ctx.gpr[19] + static_cast<std::uint32_t>(1));
    ctx.set_gpr(2, static_cast<std::int32_t>(ctx.gpr[19]) < 11 ? 1u : 0u);
    { const bool branch_taken = ctx.gpr[2] != 0u;
    ctx.set_gpr(17, ctx.gpr[17] + static_cast<std::uint32_t>(1224));
      if (branch_taken) {
          goto L_08857A60;
      }
      goto L_08857AA0;
    }
L_08857AA0:
    ctx.set_gpr(20, ctx.gpr[20] + static_cast<std::uint32_t>(1));
    ctx.set_gpr(2, static_cast<std::int32_t>(ctx.gpr[20]) < 4 ? 1u : 0u);
    { const bool branch_taken = ctx.gpr[2] != 0u;
    ctx.set_gpr(18, ctx.gpr[18] + static_cast<std::uint32_t>(120));
      if (branch_taken) {
          goto L_08857A58;
      }
      goto L_08857AB0;
    }
L_08857AB0:
    ctx.set_gpr(2, rt.memory().aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(4)));
    ctx.set_gpr(2, ctx.gpr[2] + static_cast<std::uint32_t>(1));
    rt.memory().aot_store32(ctx.gpr[16] + static_cast<std::uint32_t>(4), ctx.gpr[2]);
    goto L_08857ABC;
L_08857ABC:
    ctx.set_gpr(21, 0u + 0u);
    ctx.set_gpr(19, ctx.gpr[29] + static_cast<std::uint32_t>(32));
    ctx.set_gpr(18, 0u + 0u);
    goto L_08857AC8;
L_08857AC8:
    ctx.set_gpr(20, 0u + 0u);
    ctx.set_gpr(17, ctx.gpr[16] + 0u);
    goto L_08857AD0;
L_08857AD0:
    ctx.set_gpr(2, ctx.gpr[17] + ctx.gpr[18]);
    ctx.set_gpr(9, 0u + static_cast<std::uint32_t>(1));
    ctx.set_gpr(5, ctx.gpr[2] + static_cast<std::uint32_t>(552));
    ctx.set_gpr(6, ctx.gpr[21] + static_cast<std::uint32_t>(5));
    ctx.set_gpr(4, ctx.gpr[29] + static_cast<std::uint32_t>(160));
    ctx.set_gpr(7, ctx.gpr[19] + 0u);
    ctx.set_gpr(8, 0u + static_cast<std::uint32_t>(3));
    ctx.set_gpr(31, 0x08857AF4u);
    ctx.set_gpr(10, ctx.gpr[9] + 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0018_entry, 18u, 1069u, 0x0884F85Cu>(ctx, &aot_mem) && ctx.pc == 0x08857AF4u) goto L_08857AF4;
    return;
L_08857AF4:
    ctx.set_gpr(4, ctx.gpr[29] + static_cast<std::uint32_t>(160));
    ctx.set_gpr(31, 0x08857B00u);
    ctx.set_gpr(5, 0u + static_cast<std::uint32_t>(-1));
    if (rt.invoke_chained_direct<&recomp_unit_0017_entry, 17u, 563u, 0x0884A284u>(ctx, &aot_mem) && ctx.pc == 0x08857B00u) goto L_08857B00;
    return;
L_08857B00:
    ctx.set_gpr(20, ctx.gpr[20] + static_cast<std::uint32_t>(1));
    ctx.set_gpr(2, static_cast<std::int32_t>(ctx.gpr[20]) < 11 ? 1u : 0u);
    { const bool branch_taken = ctx.gpr[2] != 0u;
    ctx.set_gpr(17, ctx.gpr[17] + static_cast<std::uint32_t>(1224));
      if (branch_taken) {
          goto L_08857AD0;
      }
      goto L_08857B10;
    }
L_08857B10:
    ctx.set_gpr(21, ctx.gpr[21] + static_cast<std::uint32_t>(1));
    ctx.set_gpr(2, static_cast<std::int32_t>(ctx.gpr[21]) < 4 ? 1u : 0u);
    ctx.set_gpr(19, ctx.gpr[19] + static_cast<std::uint32_t>(16));
    { const bool branch_taken = ctx.gpr[2] != 0u;
    ctx.set_gpr(18, ctx.gpr[18] + static_cast<std::uint32_t>(120));
      if (branch_taken) {
          goto L_08857AC8;
      }
      goto L_08857B24;
    }
L_08857B24:
    ctx.set_gpr(4, ctx.gpr[16] + static_cast<std::uint32_t>(1040));
    ctx.set_gpr(31, 0x08857B30u);
    ctx.set_gpr(5, 0u + static_cast<std::uint32_t>(81));
    if (rt.invoke_chained_direct<&recomp_unit_0018_entry, 18u, 808u, 0x0884EC14u>(ctx, &aot_mem) && ctx.pc == 0x08857B30u) goto L_08857B30;
    return;
L_08857B30:
    ctx.set_gpr(2, rt.memory().aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(4)));
    ctx.set_gpr(2, ctx.gpr[2] + static_cast<std::uint32_t>(1));
    rt.memory().aot_store32(ctx.gpr[16] + static_cast<std::uint32_t>(4), ctx.gpr[2]);
    goto L_08857B3C;
L_08857B3C:
    ctx.set_gpr(31, 0x08857B44u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0017_entry, 17u, 187u, 0x08848C54u>(ctx, &aot_mem) && ctx.pc == 0x08857B44u) goto L_08857B44;
    return;
L_08857B44:
    ctx.set_gpr(31, 0x08857B4Cu);
    ctx.set_gpr(4, ctx.gpr[2] + 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0170_entry, 170u, 1038u, 0x08AAFF54u>(ctx, &aot_mem) && ctx.pc == 0x08857B4Cu) goto L_08857B4C;
    return;
L_08857B4C:
    { const bool branch_taken = ctx.gpr[2] == 0u;
    // nop
      if (branch_taken) {
          goto L_08857E98;
      }
      goto L_08857B54;
    }
L_08857B54:
    ctx.set_gpr(31, 0x08857B5Cu);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0017_entry, 17u, 187u, 0x08848C54u>(ctx, &aot_mem) && ctx.pc == 0x08857B5Cu) goto L_08857B5C;
    return;
L_08857B5C:
    ctx.set_gpr(4, ctx.gpr[2] + 0u);
    ctx.set_gpr(31, 0x08857B68u);
    ctx.set_gpr(5, 0u + static_cast<std::uint32_t>(82));
    if (rt.invoke_chained_direct<&recomp_unit_0171_entry, 171u, 2u, 0x08AB0008u>(ctx, &aot_mem) && ctx.pc == 0x08857B68u) goto L_08857B68;
    return;
L_08857B68:
    ctx.set_gpr(2, rt.memory().aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(4)));
    ctx.set_gpr(2, ctx.gpr[2] + static_cast<std::uint32_t>(1));
    rt.memory().aot_store32(ctx.gpr[16] + static_cast<std::uint32_t>(4), ctx.gpr[2]);
    goto L_08857B74;
L_08857B74:
    ctx.set_gpr(31, 0x08857B7Cu);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0017_entry, 17u, 187u, 0x08848C54u>(ctx, &aot_mem) && ctx.pc == 0x08857B7Cu) goto L_08857B7C;
    return;
L_08857B7C:
    ctx.set_gpr(5, ctx.gpr[2] + 0u);
    ctx.set_gpr(31, 0x08857B88u);
    ctx.set_gpr(4, ctx.gpr[29] + static_cast<std::uint32_t>(156));
    if (rt.invoke_chained_direct<&recomp_unit_0171_entry, 171u, 3u, 0x08AB001Cu>(ctx, &aot_mem) && ctx.pc == 0x08857B88u) goto L_08857B88;
    return;
L_08857B88:
    ctx.set_gpr(4, ctx.gpr[29] + static_cast<std::uint32_t>(172));
    ctx.set_gpr(31, 0x08857B94u);
    ctx.set_gpr(5, ctx.gpr[29] + static_cast<std::uint32_t>(156));
    if (rt.invoke_chained_direct<&recomp_unit_0014_entry, 14u, 261u, 0x0883D48Cu>(ctx, &aot_mem) && ctx.pc == 0x08857B94u) goto L_08857B94;
    return;
L_08857B94:
    ctx.set_gpr(4, ctx.gpr[29] + static_cast<std::uint32_t>(156));
    ctx.set_gpr(31, 0x08857BA0u);
    ctx.set_gpr(5, 0u + static_cast<std::uint32_t>(-1));
    if (rt.invoke_chained_direct<&recomp_unit_0014_entry, 14u, 247u, 0x0883D3DCu>(ctx, &aot_mem) && ctx.pc == 0x08857BA0u) goto L_08857BA0;
    return;
L_08857BA0:
    ctx.set_gpr(31, 0x08857BA8u);
    ctx.set_gpr(4, ctx.gpr[29] + static_cast<std::uint32_t>(172));
    if (rt.invoke_chained_direct<&recomp_unit_0014_entry, 14u, 246u, 0x0883D3D4u>(ctx, &aot_mem) && ctx.pc == 0x08857BA8u) goto L_08857BA8;
    return;
L_08857BA8:
    { const bool branch_taken = ctx.gpr[2] == 0u;
    // nop
      if (branch_taken) {
          goto L_08857E98;
      }
      goto L_08857BB0;
    }
L_08857BB0:
    ctx.set_gpr(31, 0x08857BB8u);
    ctx.set_gpr(4, ctx.gpr[29] + static_cast<std::uint32_t>(152));
    if (rt.invoke_chained_direct<&recomp_unit_0015_entry, 15u, 947u, 0x08843E78u>(ctx, &aot_mem) && ctx.pc == 0x08857BB8u) goto L_08857BB8;
    return;
L_08857BB8:
    ctx.set_gpr(4, ctx.gpr[16] + static_cast<std::uint32_t>(13588));
    ctx.set_gpr(31, 0x08857BC4u);
    ctx.set_gpr(5, ctx.gpr[29] + static_cast<std::uint32_t>(152));
    if (rt.invoke_chained_direct<&recomp_unit_0021_entry, 21u, 12u, 0x08858098u>(ctx, &aot_mem) && ctx.pc == 0x08857BC4u) goto L_08857BC4;
    return;
L_08857BC4:
    ctx.set_gpr(31, 0x08857BCCu);
    ctx.set_gpr(4, ctx.gpr[16] + static_cast<std::uint32_t>(13588));
    if (rt.invoke_chained_direct<&recomp_unit_0015_entry, 15u, 943u, 0x08843E3Cu>(ctx, &aot_mem) && ctx.pc == 0x08857BCCu) goto L_08857BCC;
    return;
L_08857BCC:
    ctx.set_gpr(4, ctx.gpr[2] + 0u);
    ctx.set_gpr(31, 0x08857BD8u);
    ctx.set_gpr(5, 0u + 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0015_entry, 15u, 942u, 0x08843E34u>(ctx, &aot_mem) && ctx.pc == 0x08857BD8u) goto L_08857BD8;
    return;
L_08857BD8:
    ctx.set_gpr(31, 0x08857BE0u);
    ctx.set_gpr(4, ctx.gpr[16] + static_cast<std::uint32_t>(13588));
    if (rt.invoke_chained_direct<&recomp_unit_0015_entry, 15u, 943u, 0x08843E3Cu>(ctx, &aot_mem) && ctx.pc == 0x08857BE0u) goto L_08857BE0;
    return;
L_08857BE0:
    ctx.set_gpr(25, rt.memory().aot_load32(ctx.gpr[2] + static_cast<std::uint32_t>(0)));
    ctx.set_gpr(4, ctx.gpr[2] + 0u);
    ctx.set_gpr(25, rt.memory().aot_load32(ctx.gpr[25] + static_cast<std::uint32_t>(144)));
    jump_target = ctx.gpr[25];
    ctx.set_gpr(31, 0x08857BF4u);
    ctx.set_gpr(5, 0u + static_cast<std::uint32_t>(1));
    ctx.pc = jump_target;
    if (rt.invoke_chained_call(ctx, &aot_mem) && ctx.pc == 0x08857BF4u) goto L_08857BF4;
    return;
L_08857BF4:
    ctx.set_gpr(31, 0x08857BFCu);
    ctx.set_gpr(4, ctx.gpr[16] + static_cast<std::uint32_t>(13588));
    if (rt.invoke_chained_direct<&recomp_unit_0015_entry, 15u, 943u, 0x08843E3Cu>(ctx, &aot_mem) && ctx.pc == 0x08857BFCu) goto L_08857BFC;
    return;
L_08857BFC:
    ctx.set_gpr(25, rt.memory().aot_load32(ctx.gpr[2] + static_cast<std::uint32_t>(0)));
    ctx.set_gpr(4, ctx.gpr[2] + 0u);
    ctx.set_gpr(25, rt.memory().aot_load32(ctx.gpr[25] + static_cast<std::uint32_t>(148)));
    jump_target = ctx.gpr[25];
    ctx.set_gpr(31, 0x08857C10u);
    ctx.set_gpr(5, 0u + static_cast<std::uint32_t>(1));
    ctx.pc = jump_target;
    if (rt.invoke_chained_call(ctx, &aot_mem) && ctx.pc == 0x08857C10u) goto L_08857C10;
    return;
L_08857C10:
    ctx.set_gpr(31, 0x08857C18u);
    ctx.set_gpr(4, ctx.gpr[16] + static_cast<std::uint32_t>(13588));
    if (rt.invoke_chained_direct<&recomp_unit_0015_entry, 15u, 943u, 0x08843E3Cu>(ctx, &aot_mem) && ctx.pc == 0x08857C18u) goto L_08857C18;
    return;
L_08857C18:
    ctx.set_gpr(17, ctx.gpr[2] + 0u);
    ctx.set_gpr(31, 0x08857C24u);
    ctx.set_gpr(4, ctx.gpr[29] + static_cast<std::uint32_t>(172));
    if (rt.invoke_chained_direct<&recomp_unit_0014_entry, 14u, 246u, 0x0883D3D4u>(ctx, &aot_mem) && ctx.pc == 0x08857C24u) goto L_08857C24;
    return;
L_08857C24:
    ctx.set_gpr(4, ctx.gpr[17] + 0u);
    ctx.set_gpr(5, ctx.gpr[2] + 0u);
    ctx.set_gpr(31, 0x08857C34u);
    ctx.set_gpr(6, 0u + 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0051_entry, 51u, 12u, 0x088D00D4u>(ctx, &aot_mem) && ctx.pc == 0x08857C34u) goto L_08857C34;
    return;
L_08857C34:
    ctx.set_gpr(31, 0x08857C3Cu);
    ctx.set_gpr(4, ctx.gpr[16] + static_cast<std::uint32_t>(13588));
    if (rt.invoke_chained_direct<&recomp_unit_0015_entry, 15u, 943u, 0x08843E3Cu>(ctx, &aot_mem) && ctx.pc == 0x08857C3Cu) goto L_08857C3C;
    return;
L_08857C3C:
    ctx.set_gpr(31, 0x08857C44u);
    ctx.set_gpr(17, ctx.gpr[2] + 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0017_entry, 17u, 175u, 0x08848BC4u>(ctx, &aot_mem) && ctx.pc == 0x08857C44u) goto L_08857C44;
    return;
L_08857C44:
    ctx.set_gpr(25, rt.memory().aot_load32(ctx.gpr[17] + static_cast<std::uint32_t>(0)));
    ctx.set_gpr(5, ctx.gpr[2] + 0u);
    ctx.set_gpr(25, rt.memory().aot_load32(ctx.gpr[25] + static_cast<std::uint32_t>(96)));
    jump_target = ctx.gpr[25];
    ctx.set_gpr(31, 0x08857C58u);
    ctx.set_gpr(4, ctx.gpr[17] + 0u);
    ctx.pc = jump_target;
    if (rt.invoke_chained_call(ctx, &aot_mem) && ctx.pc == 0x08857C58u) goto L_08857C58;
    return;
L_08857C58:
    ctx.set_gpr(31, 0x08857C60u);
    ctx.set_gpr(4, ctx.gpr[29] + static_cast<std::uint32_t>(148));
    if (rt.invoke_chained_direct<&recomp_unit_0015_entry, 15u, 615u, 0x0884251Cu>(ctx, &aot_mem) && ctx.pc == 0x08857C60u) goto L_08857C60;
    return;
L_08857C60:
    ctx.set_gpr(4, ctx.gpr[16] + static_cast<std::uint32_t>(28));
    ctx.set_gpr(31, 0x08857C6Cu);
    ctx.set_gpr(5, ctx.gpr[29] + static_cast<std::uint32_t>(148));
    if (rt.invoke_chained_direct<&recomp_unit_0021_entry, 21u, 7u, 0x08858054u>(ctx, &aot_mem) && ctx.pc == 0x08857C6Cu) goto L_08857C6C;
    return;
L_08857C6C:
    ctx.set_gpr(31, 0x08857C74u);
    ctx.set_gpr(4, ctx.gpr[29] + static_cast<std::uint32_t>(144));
    if (rt.invoke_chained_direct<&recomp_unit_0021_entry, 21u, 6u, 0x08858048u>(ctx, &aot_mem) && ctx.pc == 0x08857C74u) goto L_08857C74;
    return;
L_08857C74:
    ctx.set_gpr(4, ctx.gpr[16] + static_cast<std::uint32_t>(32));
    ctx.set_gpr(31, 0x08857C80u);
    ctx.set_gpr(5, ctx.gpr[29] + static_cast<std::uint32_t>(144));
    if (rt.invoke_chained_direct<&recomp_unit_0021_entry, 21u, 2u, 0x0885800Cu>(ctx, &aot_mem) && ctx.pc == 0x08857C80u) goto L_08857C80;
    return;
L_08857C80:
    ctx.set_gpr(31, 0x08857C88u);
    ctx.set_gpr(4, ctx.gpr[16] + static_cast<std::uint32_t>(32));
    if (rt.invoke_chained_direct<&recomp_unit_0021_entry, 21u, 1u, 0x08858004u>(ctx, &aot_mem) && ctx.pc == 0x08857C88u) goto L_08857C88;
    return;
L_08857C88:
    ctx.set_gpr(25, rt.memory().aot_load32(ctx.gpr[2] + static_cast<std::uint32_t>(0)));
    ctx.set_gpr(4, ctx.gpr[2] + 0u);
    ctx.set_gpr(25, rt.memory().aot_load32(ctx.gpr[25] + static_cast<std::uint32_t>(136)));
    jump_target = ctx.gpr[25];
    ctx.set_gpr(31, 0x08857C9Cu);
    ctx.set_gpr(5, 0u + static_cast<std::uint32_t>(1));
    ctx.pc = jump_target;
    if (rt.invoke_chained_call(ctx, &aot_mem) && ctx.pc == 0x08857C9Cu) goto L_08857C9C;
    return;
L_08857C9C:
    ctx.set_gpr(31, 0x08857CA4u);
    ctx.set_gpr(4, ctx.gpr[16] + static_cast<std::uint32_t>(28));
    if (rt.invoke_chained_direct<&recomp_unit_0015_entry, 15u, 610u, 0x088424D8u>(ctx, &aot_mem) && ctx.pc == 0x08857CA4u) goto L_08857CA4;
    return;
L_08857CA4:
    ctx.set_gpr(17, ctx.gpr[2] + 0u);
    ctx.set_gpr(31, 0x08857CB0u);
    ctx.set_gpr(4, ctx.gpr[16] + static_cast<std::uint32_t>(32));
    goto L_08857FF4;
L_08857CB0:
    ctx.set_gpr(25, rt.memory().aot_load32(ctx.gpr[17] + static_cast<std::uint32_t>(0)));
    ctx.set_gpr(5, ctx.gpr[2] + 0u);
    ctx.set_gpr(25, rt.memory().aot_load32(ctx.gpr[25] + static_cast<std::uint32_t>(156)));
    jump_target = ctx.gpr[25];
    ctx.set_gpr(31, 0x08857CC4u);
    ctx.set_gpr(4, ctx.gpr[17] + 0u);
    ctx.pc = jump_target;
    if (rt.invoke_chained_call(ctx, &aot_mem) && ctx.pc == 0x08857CC4u) goto L_08857CC4;
    return;
L_08857CC4:
    ctx.set_gpr(31, 0x08857CCCu);
    ctx.set_gpr(4, ctx.gpr[29] + static_cast<std::uint32_t>(140));
    goto L_08857FE8;
L_08857CCC:
    ctx.set_gpr(4, ctx.gpr[16] + static_cast<std::uint32_t>(36));
    ctx.set_gpr(31, 0x08857CD8u);
    ctx.set_gpr(5, ctx.gpr[29] + static_cast<std::uint32_t>(140));
    goto L_08857FAC;
L_08857CD8:
    ctx.set_gpr(31, 0x08857CE0u);
    ctx.set_gpr(4, ctx.gpr[16] + static_cast<std::uint32_t>(36));
    goto L_08857FA4;
L_08857CE0:
    ctx.set_gpr(25, rt.memory().aot_load32(ctx.gpr[2] + static_cast<std::uint32_t>(0)));
    ctx.set_gpr(4, ctx.gpr[2] + 0u);
    ctx.set_gpr(25, rt.memory().aot_load32(ctx.gpr[25] + static_cast<std::uint32_t>(136)));
    jump_target = ctx.gpr[25];
    ctx.set_gpr(31, 0x08857CF4u);
    ctx.set_gpr(5, 0u + static_cast<std::uint32_t>(4));
    ctx.pc = jump_target;
    if (rt.invoke_chained_call(ctx, &aot_mem) && ctx.pc == 0x08857CF4u) goto L_08857CF4;
    return;
L_08857CF4:
    ctx.set_gpr(31, 0x08857CFCu);
    ctx.set_gpr(4, ctx.gpr[16] + static_cast<std::uint32_t>(36));
    goto L_08857FA4;
L_08857CFC:
    ctx.set_gpr(25, rt.memory().aot_load32(ctx.gpr[2] + static_cast<std::uint32_t>(0)));
    ctx.set_gpr(4, ctx.gpr[2] + 0u);
    ctx.set_gpr(25, rt.memory().aot_load32(ctx.gpr[25] + static_cast<std::uint32_t>(140)));
    jump_target = ctx.gpr[25];
    ctx.set_gpr(31, 0x08857D10u);
    ctx.set_gpr(5, 0u + static_cast<std::uint32_t>(5));
    ctx.pc = jump_target;
    if (rt.invoke_chained_call(ctx, &aot_mem) && ctx.pc == 0x08857D10u) goto L_08857D10;
    return;
L_08857D10:
    ctx.set_gpr(31, 0x08857D18u);
    ctx.set_gpr(4, ctx.gpr[16] + static_cast<std::uint32_t>(28));
    if (rt.invoke_chained_direct<&recomp_unit_0015_entry, 15u, 610u, 0x088424D8u>(ctx, &aot_mem) && ctx.pc == 0x08857D18u) goto L_08857D18;
    return;
L_08857D18:
    ctx.set_gpr(17, ctx.gpr[2] + 0u);
    ctx.set_gpr(31, 0x08857D24u);
    ctx.set_gpr(4, ctx.gpr[16] + static_cast<std::uint32_t>(36));
    goto L_08857F8C;
L_08857D24:
    ctx.set_gpr(25, rt.memory().aot_load32(ctx.gpr[17] + static_cast<std::uint32_t>(0)));
    ctx.set_gpr(5, ctx.gpr[2] + 0u);
    ctx.set_gpr(25, rt.memory().aot_load32(ctx.gpr[25] + static_cast<std::uint32_t>(156)));
    jump_target = ctx.gpr[25];
    ctx.set_gpr(31, 0x08857D38u);
    ctx.set_gpr(4, ctx.gpr[17] + 0u);
    ctx.pc = jump_target;
    if (rt.invoke_chained_call(ctx, &aot_mem) && ctx.pc == 0x08857D38u) goto L_08857D38;
    return;
L_08857D38:
    ctx.set_gpr(31, 0x08857D40u);
    ctx.set_gpr(4, ctx.gpr[29] + static_cast<std::uint32_t>(136));
    goto L_08857F80;
L_08857D40:
    ctx.set_gpr(4, ctx.gpr[16] + static_cast<std::uint32_t>(40));
    ctx.set_gpr(31, 0x08857D4Cu);
    ctx.set_gpr(5, ctx.gpr[29] + static_cast<std::uint32_t>(136));
    goto L_08857F44;
L_08857D4C:
    ctx.set_gpr(31, 0x08857D54u);
    ctx.set_gpr(4, ctx.gpr[16] + static_cast<std::uint32_t>(40));
    goto L_08857F3C;
L_08857D54:
    ctx.set_gpr(25, rt.memory().aot_load32(ctx.gpr[2] + static_cast<std::uint32_t>(0)));
    ctx.set_gpr(4, ctx.gpr[2] + 0u);
    ctx.set_gpr(25, rt.memory().aot_load32(ctx.gpr[25] + static_cast<std::uint32_t>(136)));
    jump_target = ctx.gpr[25];
    ctx.set_gpr(31, 0x08857D68u);
    ctx.set_gpr(5, 0u + static_cast<std::uint32_t>(1));
    ctx.pc = jump_target;
    if (rt.invoke_chained_call(ctx, &aot_mem) && ctx.pc == 0x08857D68u) goto L_08857D68;
    return;
L_08857D68:
    ctx.set_gpr(31, 0x08857D70u);
    ctx.set_gpr(4, ctx.gpr[16] + static_cast<std::uint32_t>(28));
    if (rt.invoke_chained_direct<&recomp_unit_0015_entry, 15u, 610u, 0x088424D8u>(ctx, &aot_mem) && ctx.pc == 0x08857D70u) goto L_08857D70;
    return;
L_08857D70:
    ctx.set_gpr(17, ctx.gpr[2] + 0u);
    ctx.set_gpr(31, 0x08857D7Cu);
    ctx.set_gpr(4, ctx.gpr[16] + static_cast<std::uint32_t>(40));
    goto L_08857F2C;
L_08857D7C:
    ctx.set_gpr(25, rt.memory().aot_load32(ctx.gpr[17] + static_cast<std::uint32_t>(0)));
    ctx.set_gpr(5, ctx.gpr[2] + 0u);
    ctx.set_gpr(25, rt.memory().aot_load32(ctx.gpr[25] + static_cast<std::uint32_t>(156)));
    jump_target = ctx.gpr[25];
    ctx.set_gpr(31, 0x08857D90u);
    ctx.set_gpr(4, ctx.gpr[17] + 0u);
    ctx.pc = jump_target;
    if (rt.invoke_chained_call(ctx, &aot_mem) && ctx.pc == 0x08857D90u) goto L_08857D90;
    return;
L_08857D90:
    ctx.set_gpr(31, 0x08857D98u);
    ctx.set_gpr(4, ctx.gpr[29] + static_cast<std::uint32_t>(132));
    goto L_08857F20;
L_08857D98:
    ctx.set_gpr(4, ctx.gpr[16] + static_cast<std::uint32_t>(44));
    ctx.set_gpr(31, 0x08857DA4u);
    ctx.set_gpr(5, ctx.gpr[29] + static_cast<std::uint32_t>(132));
    goto L_08857EE4;
L_08857DA4:
    ctx.set_gpr(31, 0x08857DACu);
    ctx.set_gpr(4, ctx.gpr[16] + static_cast<std::uint32_t>(44));
    goto L_08857EDC;
L_08857DAC:
    ctx.set_gpr(17, ctx.gpr[2] + 0u);
    ctx.set_gpr(31, 0x08857DB8u);
    ctx.set_gpr(4, ctx.gpr[16] + static_cast<std::uint32_t>(13588));
    if (rt.invoke_chained_direct<&recomp_unit_0015_entry, 15u, 941u, 0x08843E2Cu>(ctx, &aot_mem) && ctx.pc == 0x08857DB8u) goto L_08857DB8;
    return;
L_08857DB8:
    ctx.set_gpr(25, rt.memory().aot_load32(ctx.gpr[17] + static_cast<std::uint32_t>(0)));
    ctx.set_gpr(5, ctx.gpr[2] + 0u);
    ctx.set_gpr(25, rt.memory().aot_load32(ctx.gpr[25] + static_cast<std::uint32_t>(140)));
    jump_target = ctx.gpr[25];
    ctx.set_gpr(31, 0x08857DCCu);
    ctx.set_gpr(4, ctx.gpr[17] + 0u);
    ctx.pc = jump_target;
    if (rt.invoke_chained_call(ctx, &aot_mem) && ctx.pc == 0x08857DCCu) goto L_08857DCC;
    return;
L_08857DCC:
    ctx.set_gpr(31, 0x08857DD4u);
    ctx.set_gpr(4, ctx.gpr[16] + static_cast<std::uint32_t>(28));
    if (rt.invoke_chained_direct<&recomp_unit_0015_entry, 15u, 610u, 0x088424D8u>(ctx, &aot_mem) && ctx.pc == 0x08857DD4u) goto L_08857DD4;
    return;
L_08857DD4:
    ctx.set_gpr(17, ctx.gpr[2] + 0u);
    ctx.set_gpr(31, 0x08857DE0u);
    ctx.set_gpr(4, ctx.gpr[16] + static_cast<std::uint32_t>(44));
    goto L_08857ECC;
L_08857DE0:
    ctx.set_gpr(25, rt.memory().aot_load32(ctx.gpr[17] + static_cast<std::uint32_t>(0)));
    ctx.set_gpr(5, ctx.gpr[2] + 0u);
    ctx.set_gpr(25, rt.memory().aot_load32(ctx.gpr[25] + static_cast<std::uint32_t>(156)));
    jump_target = ctx.gpr[25];
    ctx.set_gpr(31, 0x08857DF4u);
    ctx.set_gpr(4, ctx.gpr[17] + 0u);
    ctx.pc = jump_target;
    if (rt.invoke_chained_call(ctx, &aot_mem) && ctx.pc == 0x08857DF4u) goto L_08857DF4;
    return;
L_08857DF4:
    ctx.set_gpr(2, rt.memory().aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(4)));
    ctx.set_gpr(2, ctx.gpr[2] + static_cast<std::uint32_t>(1));
    { const bool branch_taken = 0u == 0u;
    rt.memory().aot_store32(ctx.gpr[16] + static_cast<std::uint32_t>(4), ctx.gpr[2]);
      if (branch_taken) {
          goto L_08857E98;
      }
      goto L_08857E04;
    }
L_08857E04:
    ctx.set_gpr(2, 15605u << 16u);
    ctx.set_gpr(2, ctx.gpr[2] | 49807u);
    rt.memory().aot_store32(ctx.gpr[16] + static_cast<std::uint32_t>(13596), ctx.gpr[2]);
    ctx.set_gpr(2, 48373u << 16u);
    ctx.set_gpr(2, ctx.gpr[2] | 49807u);
    rt.memory().aot_store32(ctx.gpr[16] + static_cast<std::uint32_t>(13600), ctx.gpr[2]);
    ctx.set_gpr(2, 15759u << 16u);
    ctx.set_gpr(2, ctx.gpr[2] | 23593u);
    rt.memory().aot_store32(ctx.gpr[16] + static_cast<std::uint32_t>(13604), ctx.gpr[2]);
    ctx.set_gpr(2, 48527u << 16u);
    ctx.set_gpr(2, ctx.gpr[2] | 23593u);
    rt.memory().aot_store32(ctx.gpr[16] + static_cast<std::uint32_t>(13608), ctx.gpr[2]);
    ctx.set_gpr(2, 15820u << 16u);
    ctx.set_gpr(2, ctx.gpr[2] | 52429u);
    rt.memory().aot_store32(ctx.gpr[16] + static_cast<std::uint32_t>(13612), ctx.gpr[2]);
    ctx.set_gpr(2, 48588u << 16u);
    ctx.set_gpr(2, ctx.gpr[2] | 52429u);
    rt.memory().aot_store32(ctx.gpr[16] + static_cast<std::uint32_t>(13616), ctx.gpr[2]);
    ctx.set_gpr(2, 15877u << 16u);
    ctx.set_gpr(2, ctx.gpr[2] | 7864u);
    rt.memory().aot_store32(ctx.gpr[16] + static_cast<std::uint32_t>(13620), ctx.gpr[2]);
    ctx.set_gpr(2, 48645u << 16u);
    ctx.set_gpr(2, ctx.gpr[2] | 7864u);
    ctx.set_gpr(31, 0x08857E68u);
    rt.memory().aot_store32(ctx.gpr[16] + static_cast<std::uint32_t>(13624), ctx.gpr[2]);
    if (rt.invoke_chained_direct<&recomp_unit_0017_entry, 17u, 187u, 0x08848C54u>(ctx, &aot_mem) && ctx.pc == 0x08857E68u) goto L_08857E68;
    return;
L_08857E68:
    ctx.set_gpr(31, 0x08857E70u);
    ctx.set_gpr(4, ctx.gpr[2] + 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0170_entry, 170u, 1016u, 0x08AAFE28u>(ctx, &aot_mem) && ctx.pc == 0x08857E70u) goto L_08857E70;
    return;
L_08857E70:
    rt.memory().aot_store32(ctx.gpr[16] + static_cast<std::uint32_t>(4), 0u);
    ctx.set_gpr(2, 0u + static_cast<std::uint32_t>(1));
    rt.memory().aot_store8(ctx.gpr[16] + static_cast<std::uint32_t>(0), static_cast<std::uint8_t>(ctx.gpr[2]));
    ctx.set_gpr(31, 0x08857E84u);
    ctx.set_gpr(4, 0u + 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0192_entry, 192u, 518u, 0x08B06174u>(ctx, &aot_mem) && ctx.pc == 0x08857E84u) goto L_08857E84;
    return;
L_08857E84:
    ctx.set_gpr(4, ctx.gpr[29] + static_cast<std::uint32_t>(172));
    ctx.set_gpr(31, 0x08857E90u);
    ctx.set_gpr(5, 0u + static_cast<std::uint32_t>(-1));
    if (rt.invoke_chained_direct<&recomp_unit_0014_entry, 14u, 247u, 0x0883D3DCu>(ctx, &aot_mem) && ctx.pc == 0x08857E90u) goto L_08857E90;
    return;
L_08857E90:
    { const bool branch_taken = 0u == 0u;
    ctx.set_gpr(2, 0u + static_cast<std::uint32_t>(1));
      if (branch_taken) {
          goto L_08857EA8;
      }
      goto L_08857E98;
    }
L_08857E98:
    ctx.set_gpr(4, ctx.gpr[29] + static_cast<std::uint32_t>(172));
    goto L_08857E9C;
L_08857E9C:
    ctx.set_gpr(31, 0x08857EA4u);
    ctx.set_gpr(5, 0u + static_cast<std::uint32_t>(-1));
    if (rt.invoke_chained_direct<&recomp_unit_0014_entry, 14u, 247u, 0x0883D3DCu>(ctx, &aot_mem) && ctx.pc == 0x08857EA4u) goto L_08857EA4;
    return;
L_08857EA4:
    ctx.set_gpr(2, 0u + 0u);
    goto L_08857EA8;
L_08857EA8:
    ctx.set_gpr(31, rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(28)));
    ctx.set_gpr(21, rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(24)));
    ctx.set_gpr(20, rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(20)));
    ctx.set_gpr(19, rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(16)));
    ctx.set_gpr(18, rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(12)));
    ctx.set_gpr(17, rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(8)));
    ctx.set_gpr(16, rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(4)));
    jump_target = ctx.gpr[31];
    ctx.set_gpr(29, ctx.gpr[29] + static_cast<std::uint32_t>(176));
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_08857ECC:
    jump_target = ctx.gpr[31];
    ctx.set_gpr(2, rt.memory().aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(0)));
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_08857ED4:
    ctx.set_gpr(4, ctx.gpr[4] + static_cast<std::uint32_t>(12));
    (void)rt.invoke_chained_direct<&recomp_unit_0016_entry, 16u, 63u, 0x08844384u>(ctx, &aot_mem); return;
L_08857EDC:
    jump_target = ctx.gpr[31];
    ctx.set_gpr(2, rt.memory().aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(0)));
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_08857EE4:
    ctx.set_gpr(29, ctx.gpr[29] + static_cast<std::uint32_t>(-16));
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(12), ctx.gpr[31]);
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(8), ctx.gpr[16]);
    ctx.set_gpr(31, 0x08857EF8u);
    ctx.set_gpr(16, ctx.gpr[4] + 0u);
    goto L_08857F18;
L_08857EF8:
    ctx.set_gpr(5, ctx.gpr[2] + 0u);
    ctx.set_gpr(31, 0x08857F04u);
    ctx.set_gpr(4, ctx.gpr[16] + 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0085_entry, 85u, 67u, 0x0895853Cu>(ctx, &aot_mem) && ctx.pc == 0x08857F04u) goto L_08857F04;
    return;
L_08857F04:
    ctx.set_gpr(2, ctx.gpr[16] + 0u);
    ctx.set_gpr(31, rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(12)));
    ctx.set_gpr(16, rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(8)));
    jump_target = ctx.gpr[31];
    ctx.set_gpr(29, ctx.gpr[29] + static_cast<std::uint32_t>(16));
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_08857F18:
    ctx.set_gpr(4, 0u + 0u);
    (void)rt.invoke_chained_direct<&recomp_unit_0043_entry, 43u, 355u, 0x088B2154u>(ctx, &aot_mem); return;
L_08857F20:
    ctx.set_gpr(3, 0u + 0u);
    jump_target = ctx.gpr[31];
    rt.memory().aot_store8(ctx.gpr[4] + static_cast<std::uint32_t>(0), static_cast<std::uint8_t>(ctx.gpr[3]));
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_08857F2C:
    jump_target = ctx.gpr[31];
    ctx.set_gpr(2, rt.memory().aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(0)));
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_08857F34:
    jump_target = ctx.gpr[31];
    rt.memory().aot_store8(ctx.gpr[4] + static_cast<std::uint32_t>(12), static_cast<std::uint8_t>(ctx.gpr[5]));
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_08857F3C:
    jump_target = ctx.gpr[31];
    ctx.set_gpr(2, rt.memory().aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(0)));
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_08857F44:
    ctx.set_gpr(29, ctx.gpr[29] + static_cast<std::uint32_t>(-16));
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(12), ctx.gpr[31]);
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(8), ctx.gpr[16]);
    ctx.set_gpr(31, 0x08857F58u);
    ctx.set_gpr(16, ctx.gpr[4] + 0u);
    goto L_08857F78;
L_08857F58:
    ctx.set_gpr(5, ctx.gpr[2] + 0u);
    ctx.set_gpr(31, 0x08857F64u);
    ctx.set_gpr(4, ctx.gpr[16] + 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0085_entry, 85u, 67u, 0x0895853Cu>(ctx, &aot_mem) && ctx.pc == 0x08857F64u) goto L_08857F64;
    return;
L_08857F64:
    ctx.set_gpr(2, ctx.gpr[16] + 0u);
    ctx.set_gpr(31, rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(12)));
    ctx.set_gpr(16, rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(8)));
    jump_target = ctx.gpr[31];
    ctx.set_gpr(29, ctx.gpr[29] + static_cast<std::uint32_t>(16));
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_08857F78:
    ctx.set_gpr(4, 0u + 0u);
    (void)rt.invoke_chained_direct<&recomp_unit_0043_entry, 43u, 45u, 0x088B0444u>(ctx, &aot_mem); return;
L_08857F80:
    ctx.set_gpr(3, 0u + 0u);
    jump_target = ctx.gpr[31];
    rt.memory().aot_store8(ctx.gpr[4] + static_cast<std::uint32_t>(0), static_cast<std::uint8_t>(ctx.gpr[3]));
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_08857F8C:
    jump_target = ctx.gpr[31];
    ctx.set_gpr(2, rt.memory().aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(0)));
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_08857F94:
    jump_target = ctx.gpr[31];
    rt.memory().aot_store32(ctx.gpr[4] + static_cast<std::uint32_t>(16), ctx.gpr[5]);
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_08857F9C:
    jump_target = ctx.gpr[31];
    rt.memory().aot_store32(ctx.gpr[4] + static_cast<std::uint32_t>(12), ctx.gpr[5]);
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_08857FA4:
    jump_target = ctx.gpr[31];
    ctx.set_gpr(2, rt.memory().aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(0)));
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_08857FAC:
    ctx.set_gpr(29, ctx.gpr[29] + static_cast<std::uint32_t>(-16));
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(12), ctx.gpr[31]);
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(8), ctx.gpr[16]);
    ctx.set_gpr(31, 0x08857FC0u);
    ctx.set_gpr(16, ctx.gpr[4] + 0u);
    goto L_08857FE0;
L_08857FC0:
    ctx.set_gpr(5, ctx.gpr[2] + 0u);
    ctx.set_gpr(31, 0x08857FCCu);
    ctx.set_gpr(4, ctx.gpr[16] + 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0085_entry, 85u, 67u, 0x0895853Cu>(ctx, &aot_mem) && ctx.pc == 0x08857FCCu) goto L_08857FCC;
    return;
L_08857FCC:
    ctx.set_gpr(2, ctx.gpr[16] + 0u);
    ctx.set_gpr(31, rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(12)));
    ctx.set_gpr(16, rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(8)));
    jump_target = ctx.gpr[31];
    ctx.set_gpr(29, ctx.gpr[29] + static_cast<std::uint32_t>(16));
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_08857FE0:
    ctx.set_gpr(4, 0u + 0u);
    (void)rt.invoke_chained_direct<&recomp_unit_0047_entry, 47u, 298u, 0x088C1B10u>(ctx, &aot_mem); return;
L_08857FE8:
    ctx.set_gpr(3, 0u + 0u);
    jump_target = ctx.gpr[31];
    rt.memory().aot_store8(ctx.gpr[4] + static_cast<std::uint32_t>(0), static_cast<std::uint8_t>(ctx.gpr[3]));
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_08857FF4:
    jump_target = ctx.gpr[31];
    ctx.set_gpr(2, rt.memory().aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(0)));
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_08857FFC:
    jump_target = ctx.gpr[31];
    rt.memory().aot_store8(ctx.gpr[4] + static_cast<std::uint32_t>(12), static_cast<std::uint8_t>(ctx.gpr[5]));
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
}

void recomp_unit_0020(Runtime &rt, AllegrexContext &ctx) {
    auto aot_mem = rt.memory().aot_fast_view();
    recomp_unit_0020_entry(rt, ctx, 0u, aot_mem);
}

void register_generated_unit_20(Runtime &runtime) {
    runtime.register_generated_unit(20u, 0x08854000u, 16384u, &recomp_unit_0020, &recomp_unit_0020_entry);
    runtime.register_function(0x08854000u, &recomp_unit_0020, "recomp_unit_0020");
    runtime.register_function(0x0885400Cu, &recomp_unit_0020, "recomp_unit_0020");
    runtime.register_function(0x08854014u, &recomp_unit_0020, "recomp_unit_0020");
    runtime.register_function(0x08854024u, &recomp_unit_0020, "recomp_unit_0020");
    runtime.register_function(0x0885402Cu, &recomp_unit_0020, "recomp_unit_0020");
    runtime.register_function(0x08854034u, &recomp_unit_0020, "recomp_unit_0020");
    runtime.register_function(0x0885403Cu, &recomp_unit_0020, "recomp_unit_0020");
    runtime.register_function(0x08854090u, &recomp_unit_0020, "recomp_unit_0020");
    runtime.register_function(0x08854098u, &recomp_unit_0020, "recomp_unit_0020");
    runtime.register_function(0x088540A0u, &recomp_unit_0020, "recomp_unit_0020");
    runtime.register_function(0x088540ACu, &recomp_unit_0020, "recomp_unit_0020");
    runtime.register_function(0x088540B4u, &recomp_unit_0020, "recomp_unit_0020");
    runtime.register_function(0x088540FCu, &recomp_unit_0020, "recomp_unit_0020");
    runtime.register_function(0x08854104u, &recomp_unit_0020, "recomp_unit_0020");
    runtime.register_function(0x08854148u, &recomp_unit_0020, "recomp_unit_0020");
    runtime.register_function(0x08854160u, &recomp_unit_0020, "recomp_unit_0020");
    runtime.register_function(0x08854170u, &recomp_unit_0020, "recomp_unit_0020");
    runtime.register_function(0x08854178u, &recomp_unit_0020, "recomp_unit_0020");
    runtime.register_function(0x08854188u, &recomp_unit_0020, "recomp_unit_0020");
    runtime.register_function(0x0885418Cu, &recomp_unit_0020, "recomp_unit_0020");
    runtime.register_function(0x088541B4u, &recomp_unit_0020, "recomp_unit_0020");
    runtime.register_function(0x088541FCu, &recomp_unit_0020, "recomp_unit_0020");
    runtime.register_function(0x08854204u, &recomp_unit_0020, "recomp_unit_0020");
    runtime.register_function(0x08854210u, &recomp_unit_0020, "recomp_unit_0020");
    runtime.register_function(0x08854218u, &recomp_unit_0020, "recomp_unit_0020");
    runtime.register_function(0x08854220u, &recomp_unit_0020, "recomp_unit_0020");
    runtime.register_function(0x08854228u, &recomp_unit_0020, "recomp_unit_0020");
    runtime.register_function(0x08854238u, &recomp_unit_0020, "recomp_unit_0020");
    runtime.register_function(0x0885428Cu, &recomp_unit_0020, "recomp_unit_0020");
    runtime.register_function(0x08854294u, &recomp_unit_0020, "recomp_unit_0020");
    runtime.register_function(0x088542C8u, &recomp_unit_0020, "recomp_unit_0020");
    runtime.register_function(0x088542D0u, &recomp_unit_0020, "recomp_unit_0020");
    runtime.register_function(0x088542DCu, &recomp_unit_0020, "recomp_unit_0020");
    runtime.register_function(0x088542ECu, &recomp_unit_0020, "recomp_unit_0020");
    runtime.register_function(0x088542F4u, &recomp_unit_0020, "recomp_unit_0020");
    runtime.register_function(0x088542FCu, &recomp_unit_0020, "recomp_unit_0020");
    runtime.register_function(0x08854308u, &recomp_unit_0020, "recomp_unit_0020");
    runtime.register_function(0x08854328u, &recomp_unit_0020, "recomp_unit_0020");
    runtime.register_function(0x0885432Cu, &recomp_unit_0020, "recomp_unit_0020");
    runtime.register_function(0x08854338u, &recomp_unit_0020, "recomp_unit_0020");
    runtime.register_function(0x08854348u, &recomp_unit_0020, "recomp_unit_0020");
    runtime.register_function(0x08854380u, &recomp_unit_0020, "recomp_unit_0020");
    runtime.register_function(0x0885438Cu, &recomp_unit_0020, "recomp_unit_0020");
    runtime.register_function(0x08854398u, &recomp_unit_0020, "recomp_unit_0020");
    runtime.register_function(0x088543A0u, &recomp_unit_0020, "recomp_unit_0020");
    runtime.register_function(0x088543B4u, &recomp_unit_0020, "recomp_unit_0020");
    runtime.register_function(0x088543B8u, &recomp_unit_0020, "recomp_unit_0020");
    runtime.register_function(0x088543C4u, &recomp_unit_0020, "recomp_unit_0020");
    runtime.register_function(0x088543D0u, &recomp_unit_0020, "recomp_unit_0020");
    runtime.register_function(0x088543DCu, &recomp_unit_0020, "recomp_unit_0020");
    runtime.register_function(0x088543E0u, &recomp_unit_0020, "recomp_unit_0020");
    runtime.register_function(0x088543E4u, &recomp_unit_0020, "recomp_unit_0020");
    runtime.register_function(0x088543E8u, &recomp_unit_0020, "recomp_unit_0020");
    runtime.register_function(0x08854430u, &recomp_unit_0020, "recomp_unit_0020");
    runtime.register_function(0x08854444u, &recomp_unit_0020, "recomp_unit_0020");
    runtime.register_function(0x08854450u, &recomp_unit_0020, "recomp_unit_0020");
    runtime.register_function(0x0885445Cu, &recomp_unit_0020, "recomp_unit_0020");
    runtime.register_function(0x08854468u, &recomp_unit_0020, "recomp_unit_0020");
    runtime.register_function(0x08854484u, &recomp_unit_0020, "recomp_unit_0020");
    runtime.register_function(0x08854490u, &recomp_unit_0020, "recomp_unit_0020");
    runtime.register_function(0x0885449Cu, &recomp_unit_0020, "recomp_unit_0020");
    runtime.register_function(0x088544A4u, &recomp_unit_0020, "recomp_unit_0020");
    runtime.register_function(0x088544A8u, &recomp_unit_0020, "recomp_unit_0020");
    runtime.register_function(0x088544CCu, &recomp_unit_0020, "recomp_unit_0020");
    runtime.register_function(0x088544F0u, &recomp_unit_0020, "recomp_unit_0020");
    runtime.register_function(0x088544F8u, &recomp_unit_0020, "recomp_unit_0020");
    runtime.register_function(0x08854504u, &recomp_unit_0020, "recomp_unit_0020");
    runtime.register_function(0x08854510u, &recomp_unit_0020, "recomp_unit_0020");
    runtime.register_function(0x08854518u, &recomp_unit_0020, "recomp_unit_0020");
    runtime.register_function(0x08854524u, &recomp_unit_0020, "recomp_unit_0020");
    runtime.register_function(0x0885452Cu, &recomp_unit_0020, "recomp_unit_0020");
    runtime.register_function(0x08854534u, &recomp_unit_0020, "recomp_unit_0020");
    runtime.register_function(0x0885453Cu, &recomp_unit_0020, "recomp_unit_0020");
    runtime.register_function(0x08854548u, &recomp_unit_0020, "recomp_unit_0020");
    runtime.register_function(0x08854554u, &recomp_unit_0020, "recomp_unit_0020");
    runtime.register_function(0x08854560u, &recomp_unit_0020, "recomp_unit_0020");
    runtime.register_function(0x08854568u, &recomp_unit_0020, "recomp_unit_0020");
    runtime.register_function(0x08854570u, &recomp_unit_0020, "recomp_unit_0020");
    runtime.register_function(0x08854574u, &recomp_unit_0020, "recomp_unit_0020");
    runtime.register_function(0x0885457Cu, &recomp_unit_0020, "recomp_unit_0020");
    runtime.register_function(0x08854584u, &recomp_unit_0020, "recomp_unit_0020");
    runtime.register_function(0x0885458Cu, &recomp_unit_0020, "recomp_unit_0020");
    runtime.register_function(0x08854598u, &recomp_unit_0020, "recomp_unit_0020");
    runtime.register_function(0x088545B0u, &recomp_unit_0020, "recomp_unit_0020");
    runtime.register_function(0x0885460Cu, &recomp_unit_0020, "recomp_unit_0020");
    runtime.register_function(0x08854614u, &recomp_unit_0020, "recomp_unit_0020");
    runtime.register_function(0x0885461Cu, &recomp_unit_0020, "recomp_unit_0020");
    runtime.register_function(0x0885463Cu, &recomp_unit_0020, "recomp_unit_0020");
    runtime.register_function(0x08854644u, &recomp_unit_0020, "recomp_unit_0020");
    runtime.register_function(0x08854658u, &recomp_unit_0020, "recomp_unit_0020");
    runtime.register_function(0x0885465Cu, &recomp_unit_0020, "recomp_unit_0020");
    runtime.register_function(0x08854668u, &recomp_unit_0020, "recomp_unit_0020");
    runtime.register_function(0x0885468Cu, &recomp_unit_0020, "recomp_unit_0020");
    runtime.register_function(0x088546B0u, &recomp_unit_0020, "recomp_unit_0020");
    runtime.register_function(0x088546D0u, &recomp_unit_0020, "recomp_unit_0020");
    runtime.register_function(0x088546D8u, &recomp_unit_0020, "recomp_unit_0020");
    runtime.register_function(0x088546E0u, &recomp_unit_0020, "recomp_unit_0020");
    runtime.register_function(0x088546ECu, &recomp_unit_0020, "recomp_unit_0020");
    runtime.register_function(0x088546FCu, &recomp_unit_0020, "recomp_unit_0020");
    runtime.register_function(0x08854710u, &recomp_unit_0020, "recomp_unit_0020");
    runtime.register_function(0x08854718u, &recomp_unit_0020, "recomp_unit_0020");
    runtime.register_function(0x08854720u, &recomp_unit_0020, "recomp_unit_0020");
    runtime.register_function(0x08854738u, &recomp_unit_0020, "recomp_unit_0020");
    runtime.register_function(0x0885473Cu, &recomp_unit_0020, "recomp_unit_0020");
    runtime.register_function(0x08854748u, &recomp_unit_0020, "recomp_unit_0020");
    runtime.register_function(0x08854750u, &recomp_unit_0020, "recomp_unit_0020");
    runtime.register_function(0x08854758u, &recomp_unit_0020, "recomp_unit_0020");
    runtime.register_function(0x08854764u, &recomp_unit_0020, "recomp_unit_0020");
    runtime.register_function(0x08854778u, &recomp_unit_0020, "recomp_unit_0020");
    runtime.register_function(0x08854780u, &recomp_unit_0020, "recomp_unit_0020");
    runtime.register_function(0x08854788u, &recomp_unit_0020, "recomp_unit_0020");
    runtime.register_function(0x088547A0u, &recomp_unit_0020, "recomp_unit_0020");
    runtime.register_function(0x088547A4u, &recomp_unit_0020, "recomp_unit_0020");
    runtime.register_function(0x088547B0u, &recomp_unit_0020, "recomp_unit_0020");
    runtime.register_function(0x088547B8u, &recomp_unit_0020, "recomp_unit_0020");
    runtime.register_function(0x088547C0u, &recomp_unit_0020, "recomp_unit_0020");
    runtime.register_function(0x088547CCu, &recomp_unit_0020, "recomp_unit_0020");
    runtime.register_function(0x088547E0u, &recomp_unit_0020, "recomp_unit_0020");
    runtime.register_function(0x088547E8u, &recomp_unit_0020, "recomp_unit_0020");
    runtime.register_function(0x088547F0u, &recomp_unit_0020, "recomp_unit_0020");
    runtime.register_function(0x088547F8u, &recomp_unit_0020, "recomp_unit_0020");
    runtime.register_function(0x08854810u, &recomp_unit_0020, "recomp_unit_0020");
    runtime.register_function(0x08854814u, &recomp_unit_0020, "recomp_unit_0020");
    runtime.register_function(0x08854820u, &recomp_unit_0020, "recomp_unit_0020");
    runtime.register_function(0x08854828u, &recomp_unit_0020, "recomp_unit_0020");
    runtime.register_function(0x08854830u, &recomp_unit_0020, "recomp_unit_0020");
    runtime.register_function(0x0885483Cu, &recomp_unit_0020, "recomp_unit_0020");
    runtime.register_function(0x08854850u, &recomp_unit_0020, "recomp_unit_0020");
    runtime.register_function(0x08854858u, &recomp_unit_0020, "recomp_unit_0020");
    runtime.register_function(0x08854860u, &recomp_unit_0020, "recomp_unit_0020");
    runtime.register_function(0x08854868u, &recomp_unit_0020, "recomp_unit_0020");
    runtime.register_function(0x08854880u, &recomp_unit_0020, "recomp_unit_0020");
    runtime.register_function(0x08854884u, &recomp_unit_0020, "recomp_unit_0020");
    runtime.register_function(0x08854898u, &recomp_unit_0020, "recomp_unit_0020");
    runtime.register_function(0x0885489Cu, &recomp_unit_0020, "recomp_unit_0020");
    runtime.register_function(0x088548B4u, &recomp_unit_0020, "recomp_unit_0020");
    runtime.register_function(0x088548D4u, &recomp_unit_0020, "recomp_unit_0020");
    runtime.register_function(0x088548DCu, &recomp_unit_0020, "recomp_unit_0020");
    runtime.register_function(0x088548F0u, &recomp_unit_0020, "recomp_unit_0020");
    runtime.register_function(0x088548F8u, &recomp_unit_0020, "recomp_unit_0020");
    runtime.register_function(0x08854900u, &recomp_unit_0020, "recomp_unit_0020");
    runtime.register_function(0x08854920u, &recomp_unit_0020, "recomp_unit_0020");
    runtime.register_function(0x08854928u, &recomp_unit_0020, "recomp_unit_0020");
    runtime.register_function(0x08854934u, &recomp_unit_0020, "recomp_unit_0020");
    runtime.register_function(0x0885493Cu, &recomp_unit_0020, "recomp_unit_0020");
    runtime.register_function(0x08854944u, &recomp_unit_0020, "recomp_unit_0020");
    runtime.register_function(0x08854960u, &recomp_unit_0020, "recomp_unit_0020");
    runtime.register_function(0x08854968u, &recomp_unit_0020, "recomp_unit_0020");
    runtime.register_function(0x08854974u, &recomp_unit_0020, "recomp_unit_0020");
    runtime.register_function(0x0885497Cu, &recomp_unit_0020, "recomp_unit_0020");
    runtime.register_function(0x08854988u, &recomp_unit_0020, "recomp_unit_0020");
    runtime.register_function(0x08854990u, &recomp_unit_0020, "recomp_unit_0020");
    runtime.register_function(0x08854998u, &recomp_unit_0020, "recomp_unit_0020");
    runtime.register_function(0x088549A4u, &recomp_unit_0020, "recomp_unit_0020");
    runtime.register_function(0x088549ACu, &recomp_unit_0020, "recomp_unit_0020");
    runtime.register_function(0x088549BCu, &recomp_unit_0020, "recomp_unit_0020");
    runtime.register_function(0x088549C4u, &recomp_unit_0020, "recomp_unit_0020");
    runtime.register_function(0x088549D4u, &recomp_unit_0020, "recomp_unit_0020");
    runtime.register_function(0x088549E0u, &recomp_unit_0020, "recomp_unit_0020");
    runtime.register_function(0x088549ECu, &recomp_unit_0020, "recomp_unit_0020");
    runtime.register_function(0x088549F4u, &recomp_unit_0020, "recomp_unit_0020");
    runtime.register_function(0x08854A04u, &recomp_unit_0020, "recomp_unit_0020");
    runtime.register_function(0x08854A0Cu, &recomp_unit_0020, "recomp_unit_0020");
    runtime.register_function(0x08854A1Cu, &recomp_unit_0020, "recomp_unit_0020");
    runtime.register_function(0x08854A20u, &recomp_unit_0020, "recomp_unit_0020");
    runtime.register_function(0x08854A24u, &recomp_unit_0020, "recomp_unit_0020");
    runtime.register_function(0x08854A34u, &recomp_unit_0020, "recomp_unit_0020");
    runtime.register_function(0x08854A64u, &recomp_unit_0020, "recomp_unit_0020");
    runtime.register_function(0x08854A78u, &recomp_unit_0020, "recomp_unit_0020");
    runtime.register_function(0x08854A84u, &recomp_unit_0020, "recomp_unit_0020");
    runtime.register_function(0x08854AA8u, &recomp_unit_0020, "recomp_unit_0020");
    runtime.register_function(0x08854AB4u, &recomp_unit_0020, "recomp_unit_0020");
    runtime.register_function(0x08854AC0u, &recomp_unit_0020, "recomp_unit_0020");
    runtime.register_function(0x08854AC4u, &recomp_unit_0020, "recomp_unit_0020");
    runtime.register_function(0x08854AE0u, &recomp_unit_0020, "recomp_unit_0020");
    runtime.register_function(0x08854AE4u, &recomp_unit_0020, "recomp_unit_0020");
    runtime.register_function(0x08854AFCu, &recomp_unit_0020, "recomp_unit_0020");
    runtime.register_function(0x08854B60u, &recomp_unit_0020, "recomp_unit_0020");
    runtime.register_function(0x08854B74u, &recomp_unit_0020, "recomp_unit_0020");
    runtime.register_function(0x08854B80u, &recomp_unit_0020, "recomp_unit_0020");
    runtime.register_function(0x08854B90u, &recomp_unit_0020, "recomp_unit_0020");
    runtime.register_function(0x08854B98u, &recomp_unit_0020, "recomp_unit_0020");
    runtime.register_function(0x08854BA0u, &recomp_unit_0020, "recomp_unit_0020");
    runtime.register_function(0x08854BA8u, &recomp_unit_0020, "recomp_unit_0020");
    runtime.register_function(0x08854BBCu, &recomp_unit_0020, "recomp_unit_0020");
    runtime.register_function(0x08854BD8u, &recomp_unit_0020, "recomp_unit_0020");
    runtime.register_function(0x08854BECu, &recomp_unit_0020, "recomp_unit_0020");
    runtime.register_function(0x08854BF8u, &recomp_unit_0020, "recomp_unit_0020");
    runtime.register_function(0x08854C24u, &recomp_unit_0020, "recomp_unit_0020");
    runtime.register_function(0x08854C3Cu, &recomp_unit_0020, "recomp_unit_0020");
    runtime.register_function(0x08854C48u, &recomp_unit_0020, "recomp_unit_0020");
    runtime.register_function(0x08854C54u, &recomp_unit_0020, "recomp_unit_0020");
    runtime.register_function(0x08854C60u, &recomp_unit_0020, "recomp_unit_0020");
    runtime.register_function(0x08854C6Cu, &recomp_unit_0020, "recomp_unit_0020");
    runtime.register_function(0x08854C78u, &recomp_unit_0020, "recomp_unit_0020");
    runtime.register_function(0x08854C84u, &recomp_unit_0020, "recomp_unit_0020");
    runtime.register_function(0x08854C90u, &recomp_unit_0020, "recomp_unit_0020");
    runtime.register_function(0x08854C98u, &recomp_unit_0020, "recomp_unit_0020");
    runtime.register_function(0x08854CA0u, &recomp_unit_0020, "recomp_unit_0020");
    runtime.register_function(0x08854CB4u, &recomp_unit_0020, "recomp_unit_0020");
    runtime.register_function(0x08854CDCu, &recomp_unit_0020, "recomp_unit_0020");
    runtime.register_function(0x08854CE8u, &recomp_unit_0020, "recomp_unit_0020");
    runtime.register_function(0x08854CF4u, &recomp_unit_0020, "recomp_unit_0020");
    runtime.register_function(0x08854CF8u, &recomp_unit_0020, "recomp_unit_0020");
    runtime.register_function(0x08854D04u, &recomp_unit_0020, "recomp_unit_0020");
    runtime.register_function(0x08854D10u, &recomp_unit_0020, "recomp_unit_0020");
    runtime.register_function(0x08854D28u, &recomp_unit_0020, "recomp_unit_0020");
    runtime.register_function(0x08854D5Cu, &recomp_unit_0020, "recomp_unit_0020");
    runtime.register_function(0x08854D68u, &recomp_unit_0020, "recomp_unit_0020");
    runtime.register_function(0x08854D6Cu, &recomp_unit_0020, "recomp_unit_0020");
    runtime.register_function(0x08854D94u, &recomp_unit_0020, "recomp_unit_0020");
    runtime.register_function(0x08854D9Cu, &recomp_unit_0020, "recomp_unit_0020");
    runtime.register_function(0x08854DE4u, &recomp_unit_0020, "recomp_unit_0020");
    runtime.register_function(0x08854DF0u, &recomp_unit_0020, "recomp_unit_0020");
    runtime.register_function(0x08854DF8u, &recomp_unit_0020, "recomp_unit_0020");
    runtime.register_function(0x08854E00u, &recomp_unit_0020, "recomp_unit_0020");
    runtime.register_function(0x08854E08u, &recomp_unit_0020, "recomp_unit_0020");
    runtime.register_function(0x08854E10u, &recomp_unit_0020, "recomp_unit_0020");
    runtime.register_function(0x08854E20u, &recomp_unit_0020, "recomp_unit_0020");
    runtime.register_function(0x08854E3Cu, &recomp_unit_0020, "recomp_unit_0020");
    runtime.register_function(0x08854E5Cu, &recomp_unit_0020, "recomp_unit_0020");
    runtime.register_function(0x08854E6Cu, &recomp_unit_0020, "recomp_unit_0020");
    runtime.register_function(0x08854E74u, &recomp_unit_0020, "recomp_unit_0020");
    runtime.register_function(0x08854E80u, &recomp_unit_0020, "recomp_unit_0020");
    runtime.register_function(0x08854E8Cu, &recomp_unit_0020, "recomp_unit_0020");
    runtime.register_function(0x08854E94u, &recomp_unit_0020, "recomp_unit_0020");
    runtime.register_function(0x08854EACu, &recomp_unit_0020, "recomp_unit_0020");
    runtime.register_function(0x08854ED8u, &recomp_unit_0020, "recomp_unit_0020");
    runtime.register_function(0x08854EE8u, &recomp_unit_0020, "recomp_unit_0020");
    runtime.register_function(0x08854EF0u, &recomp_unit_0020, "recomp_unit_0020");
    runtime.register_function(0x08854EFCu, &recomp_unit_0020, "recomp_unit_0020");
    runtime.register_function(0x08854F08u, &recomp_unit_0020, "recomp_unit_0020");
    runtime.register_function(0x08854F10u, &recomp_unit_0020, "recomp_unit_0020");
    runtime.register_function(0x08854F20u, &recomp_unit_0020, "recomp_unit_0020");
    runtime.register_function(0x08854F3Cu, &recomp_unit_0020, "recomp_unit_0020");
    runtime.register_function(0x08854F44u, &recomp_unit_0020, "recomp_unit_0020");
    runtime.register_function(0x08854F70u, &recomp_unit_0020, "recomp_unit_0020");
    runtime.register_function(0x08854F80u, &recomp_unit_0020, "recomp_unit_0020");
    runtime.register_function(0x08854F8Cu, &recomp_unit_0020, "recomp_unit_0020");
    runtime.register_function(0x08854F94u, &recomp_unit_0020, "recomp_unit_0020");
    runtime.register_function(0x08854FA0u, &recomp_unit_0020, "recomp_unit_0020");
    runtime.register_function(0x08854FACu, &recomp_unit_0020, "recomp_unit_0020");
    runtime.register_function(0x08854FB0u, &recomp_unit_0020, "recomp_unit_0020");
    runtime.register_function(0x08854FC0u, &recomp_unit_0020, "recomp_unit_0020");
    runtime.register_function(0x08854FC8u, &recomp_unit_0020, "recomp_unit_0020");
    runtime.register_function(0x08854FD4u, &recomp_unit_0020, "recomp_unit_0020");
    runtime.register_function(0x08854FE0u, &recomp_unit_0020, "recomp_unit_0020");
    runtime.register_function(0x0885500Cu, &recomp_unit_0020, "recomp_unit_0020");
    runtime.register_function(0x08855014u, &recomp_unit_0020, "recomp_unit_0020");
    runtime.register_function(0x08855044u, &recomp_unit_0020, "recomp_unit_0020");
    runtime.register_function(0x08855054u, &recomp_unit_0020, "recomp_unit_0020");
    runtime.register_function(0x0885505Cu, &recomp_unit_0020, "recomp_unit_0020");
    runtime.register_function(0x08855064u, &recomp_unit_0020, "recomp_unit_0020");
    runtime.register_function(0x0885508Cu, &recomp_unit_0020, "recomp_unit_0020");
    runtime.register_function(0x08855094u, &recomp_unit_0020, "recomp_unit_0020");
    runtime.register_function(0x088550C4u, &recomp_unit_0020, "recomp_unit_0020");
    runtime.register_function(0x088550D4u, &recomp_unit_0020, "recomp_unit_0020");
    runtime.register_function(0x088550E4u, &recomp_unit_0020, "recomp_unit_0020");
    runtime.register_function(0x088550F0u, &recomp_unit_0020, "recomp_unit_0020");
    runtime.register_function(0x08855144u, &recomp_unit_0020, "recomp_unit_0020");
    runtime.register_function(0x08855154u, &recomp_unit_0020, "recomp_unit_0020");
    runtime.register_function(0x08855168u, &recomp_unit_0020, "recomp_unit_0020");
    runtime.register_function(0x08855174u, &recomp_unit_0020, "recomp_unit_0020");
    runtime.register_function(0x0885518Cu, &recomp_unit_0020, "recomp_unit_0020");
    runtime.register_function(0x088551A8u, &recomp_unit_0020, "recomp_unit_0020");
    runtime.register_function(0x088551B0u, &recomp_unit_0020, "recomp_unit_0020");
    runtime.register_function(0x088551B8u, &recomp_unit_0020, "recomp_unit_0020");
    runtime.register_function(0x088551C4u, &recomp_unit_0020, "recomp_unit_0020");
    runtime.register_function(0x088551CCu, &recomp_unit_0020, "recomp_unit_0020");
    runtime.register_function(0x08855488u, &recomp_unit_0020, "recomp_unit_0020");
    runtime.register_function(0x08855498u, &recomp_unit_0020, "recomp_unit_0020");
    runtime.register_function(0x088554ACu, &recomp_unit_0020, "recomp_unit_0020");
    runtime.register_function(0x088554BCu, &recomp_unit_0020, "recomp_unit_0020");
    runtime.register_function(0x088554D8u, &recomp_unit_0020, "recomp_unit_0020");
    runtime.register_function(0x088554E0u, &recomp_unit_0020, "recomp_unit_0020");
    runtime.register_function(0x088554ECu, &recomp_unit_0020, "recomp_unit_0020");
    runtime.register_function(0x088554F8u, &recomp_unit_0020, "recomp_unit_0020");
    runtime.register_function(0x08855508u, &recomp_unit_0020, "recomp_unit_0020");
    runtime.register_function(0x0885551Cu, &recomp_unit_0020, "recomp_unit_0020");
    runtime.register_function(0x08855520u, &recomp_unit_0020, "recomp_unit_0020");
    runtime.register_function(0x0885555Cu, &recomp_unit_0020, "recomp_unit_0020");
    runtime.register_function(0x08855578u, &recomp_unit_0020, "recomp_unit_0020");
    runtime.register_function(0x08855584u, &recomp_unit_0020, "recomp_unit_0020");
    runtime.register_function(0x08855590u, &recomp_unit_0020, "recomp_unit_0020");
    runtime.register_function(0x088555A8u, &recomp_unit_0020, "recomp_unit_0020");
    runtime.register_function(0x088555B8u, &recomp_unit_0020, "recomp_unit_0020");
    runtime.register_function(0x088555C0u, &recomp_unit_0020, "recomp_unit_0020");
    runtime.register_function(0x088555D0u, &recomp_unit_0020, "recomp_unit_0020");
    runtime.register_function(0x088555ECu, &recomp_unit_0020, "recomp_unit_0020");
    runtime.register_function(0x088555F4u, &recomp_unit_0020, "recomp_unit_0020");
    runtime.register_function(0x08855600u, &recomp_unit_0020, "recomp_unit_0020");
    runtime.register_function(0x08855608u, &recomp_unit_0020, "recomp_unit_0020");
    runtime.register_function(0x0885560Cu, &recomp_unit_0020, "recomp_unit_0020");
    runtime.register_function(0x08855620u, &recomp_unit_0020, "recomp_unit_0020");
    runtime.register_function(0x0885563Cu, &recomp_unit_0020, "recomp_unit_0020");
    runtime.register_function(0x08855644u, &recomp_unit_0020, "recomp_unit_0020");
    runtime.register_function(0x0885564Cu, &recomp_unit_0020, "recomp_unit_0020");
    runtime.register_function(0x08855658u, &recomp_unit_0020, "recomp_unit_0020");
    runtime.register_function(0x08855674u, &recomp_unit_0020, "recomp_unit_0020");
    runtime.register_function(0x08855688u, &recomp_unit_0020, "recomp_unit_0020");
    runtime.register_function(0x08855690u, &recomp_unit_0020, "recomp_unit_0020");
    runtime.register_function(0x08855698u, &recomp_unit_0020, "recomp_unit_0020");
    runtime.register_function(0x088556B0u, &recomp_unit_0020, "recomp_unit_0020");
    runtime.register_function(0x088556C4u, &recomp_unit_0020, "recomp_unit_0020");
    runtime.register_function(0x088556DCu, &recomp_unit_0020, "recomp_unit_0020");
    runtime.register_function(0x088556F0u, &recomp_unit_0020, "recomp_unit_0020");
    runtime.register_function(0x0885570Cu, &recomp_unit_0020, "recomp_unit_0020");
    runtime.register_function(0x08855714u, &recomp_unit_0020, "recomp_unit_0020");
    runtime.register_function(0x08855728u, &recomp_unit_0020, "recomp_unit_0020");
    runtime.register_function(0x0885572Cu, &recomp_unit_0020, "recomp_unit_0020");
    runtime.register_function(0x08855730u, &recomp_unit_0020, "recomp_unit_0020");
    runtime.register_function(0x08855740u, &recomp_unit_0020, "recomp_unit_0020");
    runtime.register_function(0x08855750u, &recomp_unit_0020, "recomp_unit_0020");
    runtime.register_function(0x08855758u, &recomp_unit_0020, "recomp_unit_0020");
    runtime.register_function(0x08855760u, &recomp_unit_0020, "recomp_unit_0020");
    runtime.register_function(0x08855768u, &recomp_unit_0020, "recomp_unit_0020");
    runtime.register_function(0x088557C4u, &recomp_unit_0020, "recomp_unit_0020");
    runtime.register_function(0x088557CCu, &recomp_unit_0020, "recomp_unit_0020");
    runtime.register_function(0x088557D4u, &recomp_unit_0020, "recomp_unit_0020");
    runtime.register_function(0x088557DCu, &recomp_unit_0020, "recomp_unit_0020");
    runtime.register_function(0x088557E4u, &recomp_unit_0020, "recomp_unit_0020");
    runtime.register_function(0x088557ECu, &recomp_unit_0020, "recomp_unit_0020");
    runtime.register_function(0x088557F4u, &recomp_unit_0020, "recomp_unit_0020");
    runtime.register_function(0x08855804u, &recomp_unit_0020, "recomp_unit_0020");
    runtime.register_function(0x08855824u, &recomp_unit_0020, "recomp_unit_0020");
    runtime.register_function(0x08855834u, &recomp_unit_0020, "recomp_unit_0020");
    runtime.register_function(0x08855854u, &recomp_unit_0020, "recomp_unit_0020");
    runtime.register_function(0x08855870u, &recomp_unit_0020, "recomp_unit_0020");
    runtime.register_function(0x0885588Cu, &recomp_unit_0020, "recomp_unit_0020");
    runtime.register_function(0x08855898u, &recomp_unit_0020, "recomp_unit_0020");
    runtime.register_function(0x088558ACu, &recomp_unit_0020, "recomp_unit_0020");
    runtime.register_function(0x088558B8u, &recomp_unit_0020, "recomp_unit_0020");
    runtime.register_function(0x088558C4u, &recomp_unit_0020, "recomp_unit_0020");
    runtime.register_function(0x088558D0u, &recomp_unit_0020, "recomp_unit_0020");
    runtime.register_function(0x088558D4u, &recomp_unit_0020, "recomp_unit_0020");
    runtime.register_function(0x088558E4u, &recomp_unit_0020, "recomp_unit_0020");
    runtime.register_function(0x08855900u, &recomp_unit_0020, "recomp_unit_0020");
    runtime.register_function(0x0885590Cu, &recomp_unit_0020, "recomp_unit_0020");
    runtime.register_function(0x08855920u, &recomp_unit_0020, "recomp_unit_0020");
    runtime.register_function(0x0885592Cu, &recomp_unit_0020, "recomp_unit_0020");
    runtime.register_function(0x088559B8u, &recomp_unit_0020, "recomp_unit_0020");
    runtime.register_function(0x088559C0u, &recomp_unit_0020, "recomp_unit_0020");
    runtime.register_function(0x088559F8u, &recomp_unit_0020, "recomp_unit_0020");
    runtime.register_function(0x08855A00u, &recomp_unit_0020, "recomp_unit_0020");
    runtime.register_function(0x08855A28u, &recomp_unit_0020, "recomp_unit_0020");
    runtime.register_function(0x08855A30u, &recomp_unit_0020, "recomp_unit_0020");
    runtime.register_function(0x08855A48u, &recomp_unit_0020, "recomp_unit_0020");
    runtime.register_function(0x08855A50u, &recomp_unit_0020, "recomp_unit_0020");
    runtime.register_function(0x08855A5Cu, &recomp_unit_0020, "recomp_unit_0020");
    runtime.register_function(0x08855A64u, &recomp_unit_0020, "recomp_unit_0020");
    runtime.register_function(0x08855A6Cu, &recomp_unit_0020, "recomp_unit_0020");
    runtime.register_function(0x08855A84u, &recomp_unit_0020, "recomp_unit_0020");
    runtime.register_function(0x08855A8Cu, &recomp_unit_0020, "recomp_unit_0020");
    runtime.register_function(0x08855A98u, &recomp_unit_0020, "recomp_unit_0020");
    runtime.register_function(0x08855AA0u, &recomp_unit_0020, "recomp_unit_0020");
    runtime.register_function(0x08855AC8u, &recomp_unit_0020, "recomp_unit_0020");
    runtime.register_function(0x08855AD0u, &recomp_unit_0020, "recomp_unit_0020");
    runtime.register_function(0x08855AD8u, &recomp_unit_0020, "recomp_unit_0020");
    runtime.register_function(0x08855AE0u, &recomp_unit_0020, "recomp_unit_0020");
    runtime.register_function(0x08855AE8u, &recomp_unit_0020, "recomp_unit_0020");
    runtime.register_function(0x08855AF4u, &recomp_unit_0020, "recomp_unit_0020");
    runtime.register_function(0x08855AFCu, &recomp_unit_0020, "recomp_unit_0020");
    runtime.register_function(0x08855B04u, &recomp_unit_0020, "recomp_unit_0020");
    runtime.register_function(0x08855B1Cu, &recomp_unit_0020, "recomp_unit_0020");
    runtime.register_function(0x08855B48u, &recomp_unit_0020, "recomp_unit_0020");
    runtime.register_function(0x08855B58u, &recomp_unit_0020, "recomp_unit_0020");
    runtime.register_function(0x08855B64u, &recomp_unit_0020, "recomp_unit_0020");
    runtime.register_function(0x08855B74u, &recomp_unit_0020, "recomp_unit_0020");
    runtime.register_function(0x08855C00u, &recomp_unit_0020, "recomp_unit_0020");
    runtime.register_function(0x08855C10u, &recomp_unit_0020, "recomp_unit_0020");
    runtime.register_function(0x08855C18u, &recomp_unit_0020, "recomp_unit_0020");
    runtime.register_function(0x08855C30u, &recomp_unit_0020, "recomp_unit_0020");
    runtime.register_function(0x08855C3Cu, &recomp_unit_0020, "recomp_unit_0020");
    runtime.register_function(0x08855C78u, &recomp_unit_0020, "recomp_unit_0020");
    runtime.register_function(0x08855C84u, &recomp_unit_0020, "recomp_unit_0020");
    runtime.register_function(0x08855C90u, &recomp_unit_0020, "recomp_unit_0020");
    runtime.register_function(0x08855C9Cu, &recomp_unit_0020, "recomp_unit_0020");
    runtime.register_function(0x08855CACu, &recomp_unit_0020, "recomp_unit_0020");
    runtime.register_function(0x08855CB8u, &recomp_unit_0020, "recomp_unit_0020");
    runtime.register_function(0x08855CC8u, &recomp_unit_0020, "recomp_unit_0020");
    runtime.register_function(0x08855CD0u, &recomp_unit_0020, "recomp_unit_0020");
    runtime.register_function(0x08855CDCu, &recomp_unit_0020, "recomp_unit_0020");
    runtime.register_function(0x08855CECu, &recomp_unit_0020, "recomp_unit_0020");
    runtime.register_function(0x08855CFCu, &recomp_unit_0020, "recomp_unit_0020");
    runtime.register_function(0x08855D0Cu, &recomp_unit_0020, "recomp_unit_0020");
    runtime.register_function(0x08855D1Cu, &recomp_unit_0020, "recomp_unit_0020");
    runtime.register_function(0x08855D3Cu, &recomp_unit_0020, "recomp_unit_0020");
    runtime.register_function(0x08855D84u, &recomp_unit_0020, "recomp_unit_0020");
    runtime.register_function(0x08855D98u, &recomp_unit_0020, "recomp_unit_0020");
    runtime.register_function(0x08855DA0u, &recomp_unit_0020, "recomp_unit_0020");
    runtime.register_function(0x08855DD8u, &recomp_unit_0020, "recomp_unit_0020");
    runtime.register_function(0x08855DE4u, &recomp_unit_0020, "recomp_unit_0020");
    runtime.register_function(0x08855DE8u, &recomp_unit_0020, "recomp_unit_0020");
    runtime.register_function(0x08855DF8u, &recomp_unit_0020, "recomp_unit_0020");
    runtime.register_function(0x08855E04u, &recomp_unit_0020, "recomp_unit_0020");
    runtime.register_function(0x08855E30u, &recomp_unit_0020, "recomp_unit_0020");
    runtime.register_function(0x08855E38u, &recomp_unit_0020, "recomp_unit_0020");
    runtime.register_function(0x08855E3Cu, &recomp_unit_0020, "recomp_unit_0020");
    runtime.register_function(0x08855E54u, &recomp_unit_0020, "recomp_unit_0020");
    runtime.register_function(0x08855E5Cu, &recomp_unit_0020, "recomp_unit_0020");
    runtime.register_function(0x08855E80u, &recomp_unit_0020, "recomp_unit_0020");
    runtime.register_function(0x08855E88u, &recomp_unit_0020, "recomp_unit_0020");
    runtime.register_function(0x08855E90u, &recomp_unit_0020, "recomp_unit_0020");
    runtime.register_function(0x08855EA8u, &recomp_unit_0020, "recomp_unit_0020");
    runtime.register_function(0x08855F3Cu, &recomp_unit_0020, "recomp_unit_0020");
    runtime.register_function(0x08855F44u, &recomp_unit_0020, "recomp_unit_0020");
    runtime.register_function(0x08855F4Cu, &recomp_unit_0020, "recomp_unit_0020");
    runtime.register_function(0x08855F54u, &recomp_unit_0020, "recomp_unit_0020");
    runtime.register_function(0x08855F5Cu, &recomp_unit_0020, "recomp_unit_0020");
    runtime.register_function(0x08855F68u, &recomp_unit_0020, "recomp_unit_0020");
    runtime.register_function(0x08855F74u, &recomp_unit_0020, "recomp_unit_0020");
    runtime.register_function(0x08855F88u, &recomp_unit_0020, "recomp_unit_0020");
    runtime.register_function(0x08855F8Cu, &recomp_unit_0020, "recomp_unit_0020");
    runtime.register_function(0x08855F98u, &recomp_unit_0020, "recomp_unit_0020");
    runtime.register_function(0x08855FA0u, &recomp_unit_0020, "recomp_unit_0020");
    runtime.register_function(0x08855FBCu, &recomp_unit_0020, "recomp_unit_0020");
    runtime.register_function(0x08855FCCu, &recomp_unit_0020, "recomp_unit_0020");
    runtime.register_function(0x08855FD8u, &recomp_unit_0020, "recomp_unit_0020");
    runtime.register_function(0x08855FE0u, &recomp_unit_0020, "recomp_unit_0020");
    runtime.register_function(0x08855FE8u, &recomp_unit_0020, "recomp_unit_0020");
    runtime.register_function(0x08855FF8u, &recomp_unit_0020, "recomp_unit_0020");
    runtime.register_function(0x0885600Cu, &recomp_unit_0020, "recomp_unit_0020");
    runtime.register_function(0x08856020u, &recomp_unit_0020, "recomp_unit_0020");
    runtime.register_function(0x0885603Cu, &recomp_unit_0020, "recomp_unit_0020");
    runtime.register_function(0x08856058u, &recomp_unit_0020, "recomp_unit_0020");
    runtime.register_function(0x0885606Cu, &recomp_unit_0020, "recomp_unit_0020");
    runtime.register_function(0x08856074u, &recomp_unit_0020, "recomp_unit_0020");
    runtime.register_function(0x08856080u, &recomp_unit_0020, "recomp_unit_0020");
    runtime.register_function(0x0885608Cu, &recomp_unit_0020, "recomp_unit_0020");
    runtime.register_function(0x0885609Cu, &recomp_unit_0020, "recomp_unit_0020");
    runtime.register_function(0x088560ACu, &recomp_unit_0020, "recomp_unit_0020");
    runtime.register_function(0x088560B4u, &recomp_unit_0020, "recomp_unit_0020");
    runtime.register_function(0x088560CCu, &recomp_unit_0020, "recomp_unit_0020");
    runtime.register_function(0x088560E8u, &recomp_unit_0020, "recomp_unit_0020");
    runtime.register_function(0x088560ECu, &recomp_unit_0020, "recomp_unit_0020");
    runtime.register_function(0x088560F4u, &recomp_unit_0020, "recomp_unit_0020");
    runtime.register_function(0x08856108u, &recomp_unit_0020, "recomp_unit_0020");
    runtime.register_function(0x08856158u, &recomp_unit_0020, "recomp_unit_0020");
    runtime.register_function(0x08856160u, &recomp_unit_0020, "recomp_unit_0020");
    runtime.register_function(0x08856198u, &recomp_unit_0020, "recomp_unit_0020");
    runtime.register_function(0x088561A0u, &recomp_unit_0020, "recomp_unit_0020");
    runtime.register_function(0x088561B4u, &recomp_unit_0020, "recomp_unit_0020");
    runtime.register_function(0x088561CCu, &recomp_unit_0020, "recomp_unit_0020");
    runtime.register_function(0x088561D4u, &recomp_unit_0020, "recomp_unit_0020");
    runtime.register_function(0x088561DCu, &recomp_unit_0020, "recomp_unit_0020");
    runtime.register_function(0x08856248u, &recomp_unit_0020, "recomp_unit_0020");
    runtime.register_function(0x088562B4u, &recomp_unit_0020, "recomp_unit_0020");
    runtime.register_function(0x088562CCu, &recomp_unit_0020, "recomp_unit_0020");
    runtime.register_function(0x088562E0u, &recomp_unit_0020, "recomp_unit_0020");
    runtime.register_function(0x088562E8u, &recomp_unit_0020, "recomp_unit_0020");
    runtime.register_function(0x08856324u, &recomp_unit_0020, "recomp_unit_0020");
    runtime.register_function(0x08856330u, &recomp_unit_0020, "recomp_unit_0020");
    runtime.register_function(0x08856338u, &recomp_unit_0020, "recomp_unit_0020");
    runtime.register_function(0x08856340u, &recomp_unit_0020, "recomp_unit_0020");
    runtime.register_function(0x08856348u, &recomp_unit_0020, "recomp_unit_0020");
    runtime.register_function(0x08856350u, &recomp_unit_0020, "recomp_unit_0020");
    runtime.register_function(0x08856358u, &recomp_unit_0020, "recomp_unit_0020");
    runtime.register_function(0x0885635Cu, &recomp_unit_0020, "recomp_unit_0020");
    runtime.register_function(0x08856378u, &recomp_unit_0020, "recomp_unit_0020");
    runtime.register_function(0x08856398u, &recomp_unit_0020, "recomp_unit_0020");
    runtime.register_function(0x088563A8u, &recomp_unit_0020, "recomp_unit_0020");
    runtime.register_function(0x088563B0u, &recomp_unit_0020, "recomp_unit_0020");
    runtime.register_function(0x088563BCu, &recomp_unit_0020, "recomp_unit_0020");
    runtime.register_function(0x088563C8u, &recomp_unit_0020, "recomp_unit_0020");
    runtime.register_function(0x088563D0u, &recomp_unit_0020, "recomp_unit_0020");
    runtime.register_function(0x088563ECu, &recomp_unit_0020, "recomp_unit_0020");
    runtime.register_function(0x0885640Cu, &recomp_unit_0020, "recomp_unit_0020");
    runtime.register_function(0x0885641Cu, &recomp_unit_0020, "recomp_unit_0020");
    runtime.register_function(0x08856424u, &recomp_unit_0020, "recomp_unit_0020");
    runtime.register_function(0x08856430u, &recomp_unit_0020, "recomp_unit_0020");
    runtime.register_function(0x0885643Cu, &recomp_unit_0020, "recomp_unit_0020");
    runtime.register_function(0x08856444u, &recomp_unit_0020, "recomp_unit_0020");
    runtime.register_function(0x08856450u, &recomp_unit_0020, "recomp_unit_0020");
    runtime.register_function(0x08856470u, &recomp_unit_0020, "recomp_unit_0020");
    runtime.register_function(0x08856478u, &recomp_unit_0020, "recomp_unit_0020");
    runtime.register_function(0x08856498u, &recomp_unit_0020, "recomp_unit_0020");
    runtime.register_function(0x088564A8u, &recomp_unit_0020, "recomp_unit_0020");
    runtime.register_function(0x088564B4u, &recomp_unit_0020, "recomp_unit_0020");
    runtime.register_function(0x088564BCu, &recomp_unit_0020, "recomp_unit_0020");
    runtime.register_function(0x088564C8u, &recomp_unit_0020, "recomp_unit_0020");
    runtime.register_function(0x088564D4u, &recomp_unit_0020, "recomp_unit_0020");
    runtime.register_function(0x088564D8u, &recomp_unit_0020, "recomp_unit_0020");
    runtime.register_function(0x088564E8u, &recomp_unit_0020, "recomp_unit_0020");
    runtime.register_function(0x088564F0u, &recomp_unit_0020, "recomp_unit_0020");
    runtime.register_function(0x08856510u, &recomp_unit_0020, "recomp_unit_0020");
    runtime.register_function(0x08856518u, &recomp_unit_0020, "recomp_unit_0020");
    runtime.register_function(0x08856520u, &recomp_unit_0020, "recomp_unit_0020");
    runtime.register_function(0x08856528u, &recomp_unit_0020, "recomp_unit_0020");
    runtime.register_function(0x08856530u, &recomp_unit_0020, "recomp_unit_0020");
    runtime.register_function(0x08856538u, &recomp_unit_0020, "recomp_unit_0020");
    runtime.register_function(0x08856548u, &recomp_unit_0020, "recomp_unit_0020");
    runtime.register_function(0x0885655Cu, &recomp_unit_0020, "recomp_unit_0020");
    runtime.register_function(0x08856570u, &recomp_unit_0020, "recomp_unit_0020");
    runtime.register_function(0x0885657Cu, &recomp_unit_0020, "recomp_unit_0020");
    runtime.register_function(0x08856584u, &recomp_unit_0020, "recomp_unit_0020");
    runtime.register_function(0x0885658Cu, &recomp_unit_0020, "recomp_unit_0020");
    runtime.register_function(0x08856598u, &recomp_unit_0020, "recomp_unit_0020");
    runtime.register_function(0x088565A4u, &recomp_unit_0020, "recomp_unit_0020");
    runtime.register_function(0x088565CCu, &recomp_unit_0020, "recomp_unit_0020");
    runtime.register_function(0x088565D4u, &recomp_unit_0020, "recomp_unit_0020");
    runtime.register_function(0x088565DCu, &recomp_unit_0020, "recomp_unit_0020");
    runtime.register_function(0x088565E8u, &recomp_unit_0020, "recomp_unit_0020");
    runtime.register_function(0x088565F4u, &recomp_unit_0020, "recomp_unit_0020");
    runtime.register_function(0x08856658u, &recomp_unit_0020, "recomp_unit_0020");
    runtime.register_function(0x08856660u, &recomp_unit_0020, "recomp_unit_0020");
    runtime.register_function(0x088566B0u, &recomp_unit_0020, "recomp_unit_0020");
    runtime.register_function(0x088566B8u, &recomp_unit_0020, "recomp_unit_0020");
    runtime.register_function(0x08856704u, &recomp_unit_0020, "recomp_unit_0020");
    runtime.register_function(0x0885670Cu, &recomp_unit_0020, "recomp_unit_0020");
    runtime.register_function(0x08856758u, &recomp_unit_0020, "recomp_unit_0020");
    runtime.register_function(0x08856760u, &recomp_unit_0020, "recomp_unit_0020");
    runtime.register_function(0x0885679Cu, &recomp_unit_0020, "recomp_unit_0020");
    runtime.register_function(0x088567A4u, &recomp_unit_0020, "recomp_unit_0020");
    runtime.register_function(0x088567B0u, &recomp_unit_0020, "recomp_unit_0020");
    runtime.register_function(0x088567BCu, &recomp_unit_0020, "recomp_unit_0020");
    runtime.register_function(0x088567C8u, &recomp_unit_0020, "recomp_unit_0020");
    runtime.register_function(0x088567D4u, &recomp_unit_0020, "recomp_unit_0020");
    runtime.register_function(0x088567E0u, &recomp_unit_0020, "recomp_unit_0020");
    runtime.register_function(0x088567ECu, &recomp_unit_0020, "recomp_unit_0020");
    runtime.register_function(0x088567F8u, &recomp_unit_0020, "recomp_unit_0020");
    runtime.register_function(0x08856804u, &recomp_unit_0020, "recomp_unit_0020");
    runtime.register_function(0x08856810u, &recomp_unit_0020, "recomp_unit_0020");
    runtime.register_function(0x0885681Cu, &recomp_unit_0020, "recomp_unit_0020");
    runtime.register_function(0x08856828u, &recomp_unit_0020, "recomp_unit_0020");
    runtime.register_function(0x08856834u, &recomp_unit_0020, "recomp_unit_0020");
    runtime.register_function(0x08856840u, &recomp_unit_0020, "recomp_unit_0020");
    runtime.register_function(0x08856848u, &recomp_unit_0020, "recomp_unit_0020");
    runtime.register_function(0x0885684Cu, &recomp_unit_0020, "recomp_unit_0020");
    runtime.register_function(0x08856850u, &recomp_unit_0020, "recomp_unit_0020");
    runtime.register_function(0x0885685Cu, &recomp_unit_0020, "recomp_unit_0020");
    runtime.register_function(0x08856864u, &recomp_unit_0020, "recomp_unit_0020");
    runtime.register_function(0x088568CCu, &recomp_unit_0020, "recomp_unit_0020");
    runtime.register_function(0x088568D4u, &recomp_unit_0020, "recomp_unit_0020");
    runtime.register_function(0x088568F8u, &recomp_unit_0020, "recomp_unit_0020");
    runtime.register_function(0x08856900u, &recomp_unit_0020, "recomp_unit_0020");
    runtime.register_function(0x0885694Cu, &recomp_unit_0020, "recomp_unit_0020");
    runtime.register_function(0x08856954u, &recomp_unit_0020, "recomp_unit_0020");
    runtime.register_function(0x0885695Cu, &recomp_unit_0020, "recomp_unit_0020");
    runtime.register_function(0x08856964u, &recomp_unit_0020, "recomp_unit_0020");
    runtime.register_function(0x0885696Cu, &recomp_unit_0020, "recomp_unit_0020");
    runtime.register_function(0x08856994u, &recomp_unit_0020, "recomp_unit_0020");
    runtime.register_function(0x0885699Cu, &recomp_unit_0020, "recomp_unit_0020");
    runtime.register_function(0x088569ACu, &recomp_unit_0020, "recomp_unit_0020");
    runtime.register_function(0x088569B8u, &recomp_unit_0020, "recomp_unit_0020");
    runtime.register_function(0x088569E0u, &recomp_unit_0020, "recomp_unit_0020");
    runtime.register_function(0x088569E8u, &recomp_unit_0020, "recomp_unit_0020");
    runtime.register_function(0x08856A18u, &recomp_unit_0020, "recomp_unit_0020");
    runtime.register_function(0x08856A28u, &recomp_unit_0020, "recomp_unit_0020");
    runtime.register_function(0x08856A30u, &recomp_unit_0020, "recomp_unit_0020");
    runtime.register_function(0x08856A38u, &recomp_unit_0020, "recomp_unit_0020");
    runtime.register_function(0x08856A64u, &recomp_unit_0020, "recomp_unit_0020");
    runtime.register_function(0x08856A74u, &recomp_unit_0020, "recomp_unit_0020");
    runtime.register_function(0x08856A7Cu, &recomp_unit_0020, "recomp_unit_0020");
    runtime.register_function(0x08856A84u, &recomp_unit_0020, "recomp_unit_0020");
    runtime.register_function(0x08856A90u, &recomp_unit_0020, "recomp_unit_0020");
    runtime.register_function(0x08856A98u, &recomp_unit_0020, "recomp_unit_0020");
    runtime.register_function(0x08856AA0u, &recomp_unit_0020, "recomp_unit_0020");
    runtime.register_function(0x08856AA8u, &recomp_unit_0020, "recomp_unit_0020");
    runtime.register_function(0x08856AB8u, &recomp_unit_0020, "recomp_unit_0020");
    runtime.register_function(0x08856AC0u, &recomp_unit_0020, "recomp_unit_0020");
    runtime.register_function(0x08856AC4u, &recomp_unit_0020, "recomp_unit_0020");
    runtime.register_function(0x08856AD0u, &recomp_unit_0020, "recomp_unit_0020");
    runtime.register_function(0x08856AD4u, &recomp_unit_0020, "recomp_unit_0020");
    runtime.register_function(0x08856ADCu, &recomp_unit_0020, "recomp_unit_0020");
    runtime.register_function(0x08856AE4u, &recomp_unit_0020, "recomp_unit_0020");
    runtime.register_function(0x08856AF0u, &recomp_unit_0020, "recomp_unit_0020");
    runtime.register_function(0x08856AF4u, &recomp_unit_0020, "recomp_unit_0020");
    runtime.register_function(0x08856AFCu, &recomp_unit_0020, "recomp_unit_0020");
    runtime.register_function(0x08856B1Cu, &recomp_unit_0020, "recomp_unit_0020");
    runtime.register_function(0x08856B24u, &recomp_unit_0020, "recomp_unit_0020");
    runtime.register_function(0x08856B2Cu, &recomp_unit_0020, "recomp_unit_0020");
    runtime.register_function(0x08856B38u, &recomp_unit_0020, "recomp_unit_0020");
    runtime.register_function(0x08856B44u, &recomp_unit_0020, "recomp_unit_0020");
    runtime.register_function(0x08856B4Cu, &recomp_unit_0020, "recomp_unit_0020");
    runtime.register_function(0x08856B54u, &recomp_unit_0020, "recomp_unit_0020");
    runtime.register_function(0x08856B5Cu, &recomp_unit_0020, "recomp_unit_0020");
    runtime.register_function(0x08856B64u, &recomp_unit_0020, "recomp_unit_0020");
    runtime.register_function(0x08856B6Cu, &recomp_unit_0020, "recomp_unit_0020");
    runtime.register_function(0x08856BC8u, &recomp_unit_0020, "recomp_unit_0020");
    runtime.register_function(0x08856BE4u, &recomp_unit_0020, "recomp_unit_0020");
    runtime.register_function(0x08856BECu, &recomp_unit_0020, "recomp_unit_0020");
    runtime.register_function(0x08856BF4u, &recomp_unit_0020, "recomp_unit_0020");
    runtime.register_function(0x08856C00u, &recomp_unit_0020, "recomp_unit_0020");
    runtime.register_function(0x08856C08u, &recomp_unit_0020, "recomp_unit_0020");
    runtime.register_function(0x08856C60u, &recomp_unit_0020, "recomp_unit_0020");
    runtime.register_function(0x08856C68u, &recomp_unit_0020, "recomp_unit_0020");
    runtime.register_function(0x08856CA0u, &recomp_unit_0020, "recomp_unit_0020");
    runtime.register_function(0x08856CA8u, &recomp_unit_0020, "recomp_unit_0020");
    runtime.register_function(0x08856CF4u, &recomp_unit_0020, "recomp_unit_0020");
    runtime.register_function(0x08856CFCu, &recomp_unit_0020, "recomp_unit_0020");
    runtime.register_function(0x08856D04u, &recomp_unit_0020, "recomp_unit_0020");
    runtime.register_function(0x08856D10u, &recomp_unit_0020, "recomp_unit_0020");
    runtime.register_function(0x08856D1Cu, &recomp_unit_0020, "recomp_unit_0020");
    runtime.register_function(0x08856FDCu, &recomp_unit_0020, "recomp_unit_0020");
    runtime.register_function(0x08856FECu, &recomp_unit_0020, "recomp_unit_0020");
    runtime.register_function(0x08857000u, &recomp_unit_0020, "recomp_unit_0020");
    runtime.register_function(0x0885700Cu, &recomp_unit_0020, "recomp_unit_0020");
    runtime.register_function(0x08857020u, &recomp_unit_0020, "recomp_unit_0020");
    runtime.register_function(0x08857028u, &recomp_unit_0020, "recomp_unit_0020");
    runtime.register_function(0x08857044u, &recomp_unit_0020, "recomp_unit_0020");
    runtime.register_function(0x0885704Cu, &recomp_unit_0020, "recomp_unit_0020");
    runtime.register_function(0x088570A0u, &recomp_unit_0020, "recomp_unit_0020");
    runtime.register_function(0x088570A8u, &recomp_unit_0020, "recomp_unit_0020");
    runtime.register_function(0x088570ACu, &recomp_unit_0020, "recomp_unit_0020");
    runtime.register_function(0x088570B0u, &recomp_unit_0020, "recomp_unit_0020");
    runtime.register_function(0x088570ECu, &recomp_unit_0020, "recomp_unit_0020");
    runtime.register_function(0x088570F4u, &recomp_unit_0020, "recomp_unit_0020");
    runtime.register_function(0x088570FCu, &recomp_unit_0020, "recomp_unit_0020");
    runtime.register_function(0x08857120u, &recomp_unit_0020, "recomp_unit_0020");
    runtime.register_function(0x08857128u, &recomp_unit_0020, "recomp_unit_0020");
    runtime.register_function(0x08857134u, &recomp_unit_0020, "recomp_unit_0020");
    runtime.register_function(0x08857140u, &recomp_unit_0020, "recomp_unit_0020");
    runtime.register_function(0x08857178u, &recomp_unit_0020, "recomp_unit_0020");
    runtime.register_function(0x08857180u, &recomp_unit_0020, "recomp_unit_0020");
    runtime.register_function(0x0885718Cu, &recomp_unit_0020, "recomp_unit_0020");
    runtime.register_function(0x08857198u, &recomp_unit_0020, "recomp_unit_0020");
    runtime.register_function(0x088571A4u, &recomp_unit_0020, "recomp_unit_0020");
    runtime.register_function(0x088571A8u, &recomp_unit_0020, "recomp_unit_0020");
    runtime.register_function(0x088571B0u, &recomp_unit_0020, "recomp_unit_0020");
    runtime.register_function(0x088571C0u, &recomp_unit_0020, "recomp_unit_0020");
    runtime.register_function(0x088571C8u, &recomp_unit_0020, "recomp_unit_0020");
    runtime.register_function(0x088571D0u, &recomp_unit_0020, "recomp_unit_0020");
    runtime.register_function(0x088571E0u, &recomp_unit_0020, "recomp_unit_0020");
    runtime.register_function(0x088571E8u, &recomp_unit_0020, "recomp_unit_0020");
    runtime.register_function(0x088571F0u, &recomp_unit_0020, "recomp_unit_0020");
    runtime.register_function(0x088571F8u, &recomp_unit_0020, "recomp_unit_0020");
    runtime.register_function(0x08857200u, &recomp_unit_0020, "recomp_unit_0020");
    runtime.register_function(0x08857210u, &recomp_unit_0020, "recomp_unit_0020");
    runtime.register_function(0x08857228u, &recomp_unit_0020, "recomp_unit_0020");
    runtime.register_function(0x08857240u, &recomp_unit_0020, "recomp_unit_0020");
    runtime.register_function(0x08857248u, &recomp_unit_0020, "recomp_unit_0020");
    runtime.register_function(0x08857250u, &recomp_unit_0020, "recomp_unit_0020");
    runtime.register_function(0x08857258u, &recomp_unit_0020, "recomp_unit_0020");
    runtime.register_function(0x08857260u, &recomp_unit_0020, "recomp_unit_0020");
    runtime.register_function(0x08857280u, &recomp_unit_0020, "recomp_unit_0020");
    runtime.register_function(0x08857288u, &recomp_unit_0020, "recomp_unit_0020");
    runtime.register_function(0x08857290u, &recomp_unit_0020, "recomp_unit_0020");
    runtime.register_function(0x088572B8u, &recomp_unit_0020, "recomp_unit_0020");
    runtime.register_function(0x088572D4u, &recomp_unit_0020, "recomp_unit_0020");
    runtime.register_function(0x088572E4u, &recomp_unit_0020, "recomp_unit_0020");
    runtime.register_function(0x088572FCu, &recomp_unit_0020, "recomp_unit_0020");
    runtime.register_function(0x0885731Cu, &recomp_unit_0020, "recomp_unit_0020");
    runtime.register_function(0x08857338u, &recomp_unit_0020, "recomp_unit_0020");
    runtime.register_function(0x08857340u, &recomp_unit_0020, "recomp_unit_0020");
    runtime.register_function(0x0885734Cu, &recomp_unit_0020, "recomp_unit_0020");
    runtime.register_function(0x08857354u, &recomp_unit_0020, "recomp_unit_0020");
    runtime.register_function(0x08857358u, &recomp_unit_0020, "recomp_unit_0020");
    runtime.register_function(0x0885736Cu, &recomp_unit_0020, "recomp_unit_0020");
    runtime.register_function(0x08857388u, &recomp_unit_0020, "recomp_unit_0020");
    runtime.register_function(0x08857390u, &recomp_unit_0020, "recomp_unit_0020");
    runtime.register_function(0x0885739Cu, &recomp_unit_0020, "recomp_unit_0020");
    runtime.register_function(0x088573A4u, &recomp_unit_0020, "recomp_unit_0020");
    runtime.register_function(0x088573A8u, &recomp_unit_0020, "recomp_unit_0020");
    runtime.register_function(0x088573BCu, &recomp_unit_0020, "recomp_unit_0020");
    runtime.register_function(0x088573D8u, &recomp_unit_0020, "recomp_unit_0020");
    runtime.register_function(0x088573E0u, &recomp_unit_0020, "recomp_unit_0020");
    runtime.register_function(0x088573ECu, &recomp_unit_0020, "recomp_unit_0020");
    runtime.register_function(0x088573F4u, &recomp_unit_0020, "recomp_unit_0020");
    runtime.register_function(0x088573F8u, &recomp_unit_0020, "recomp_unit_0020");
    runtime.register_function(0x0885740Cu, &recomp_unit_0020, "recomp_unit_0020");
    runtime.register_function(0x08857428u, &recomp_unit_0020, "recomp_unit_0020");
    runtime.register_function(0x08857430u, &recomp_unit_0020, "recomp_unit_0020");
    runtime.register_function(0x0885743Cu, &recomp_unit_0020, "recomp_unit_0020");
    runtime.register_function(0x08857444u, &recomp_unit_0020, "recomp_unit_0020");
    runtime.register_function(0x08857448u, &recomp_unit_0020, "recomp_unit_0020");
    runtime.register_function(0x0885745Cu, &recomp_unit_0020, "recomp_unit_0020");
    runtime.register_function(0x08857470u, &recomp_unit_0020, "recomp_unit_0020");
    runtime.register_function(0x08857484u, &recomp_unit_0020, "recomp_unit_0020");
    runtime.register_function(0x088574A0u, &recomp_unit_0020, "recomp_unit_0020");
    runtime.register_function(0x088574ACu, &recomp_unit_0020, "recomp_unit_0020");
    runtime.register_function(0x088574B8u, &recomp_unit_0020, "recomp_unit_0020");
    runtime.register_function(0x088574C4u, &recomp_unit_0020, "recomp_unit_0020");
    runtime.register_function(0x088574D0u, &recomp_unit_0020, "recomp_unit_0020");
    runtime.register_function(0x088574DCu, &recomp_unit_0020, "recomp_unit_0020");
    runtime.register_function(0x088574F4u, &recomp_unit_0020, "recomp_unit_0020");
    runtime.register_function(0x08857500u, &recomp_unit_0020, "recomp_unit_0020");
    runtime.register_function(0x08857518u, &recomp_unit_0020, "recomp_unit_0020");
    runtime.register_function(0x08857524u, &recomp_unit_0020, "recomp_unit_0020");
    runtime.register_function(0x0885752Cu, &recomp_unit_0020, "recomp_unit_0020");
    runtime.register_function(0x08857530u, &recomp_unit_0020, "recomp_unit_0020");
    runtime.register_function(0x08857544u, &recomp_unit_0020, "recomp_unit_0020");
    runtime.register_function(0x08857560u, &recomp_unit_0020, "recomp_unit_0020");
    runtime.register_function(0x08857568u, &recomp_unit_0020, "recomp_unit_0020");
    runtime.register_function(0x08857574u, &recomp_unit_0020, "recomp_unit_0020");
    runtime.register_function(0x0885757Cu, &recomp_unit_0020, "recomp_unit_0020");
    runtime.register_function(0x08857580u, &recomp_unit_0020, "recomp_unit_0020");
    runtime.register_function(0x08857594u, &recomp_unit_0020, "recomp_unit_0020");
    runtime.register_function(0x088575C8u, &recomp_unit_0020, "recomp_unit_0020");
    runtime.register_function(0x088575D0u, &recomp_unit_0020, "recomp_unit_0020");
    runtime.register_function(0x088575F0u, &recomp_unit_0020, "recomp_unit_0020");
    runtime.register_function(0x088575F8u, &recomp_unit_0020, "recomp_unit_0020");
    runtime.register_function(0x08857600u, &recomp_unit_0020, "recomp_unit_0020");
    runtime.register_function(0x08857608u, &recomp_unit_0020, "recomp_unit_0020");
    runtime.register_function(0x08857610u, &recomp_unit_0020, "recomp_unit_0020");
    runtime.register_function(0x08857618u, &recomp_unit_0020, "recomp_unit_0020");
    runtime.register_function(0x08857620u, &recomp_unit_0020, "recomp_unit_0020");
    runtime.register_function(0x08857624u, &recomp_unit_0020, "recomp_unit_0020");
    runtime.register_function(0x0885762Cu, &recomp_unit_0020, "recomp_unit_0020");
    runtime.register_function(0x08857640u, &recomp_unit_0020, "recomp_unit_0020");
    runtime.register_function(0x08857648u, &recomp_unit_0020, "recomp_unit_0020");
    runtime.register_function(0x08857650u, &recomp_unit_0020, "recomp_unit_0020");
    runtime.register_function(0x08857664u, &recomp_unit_0020, "recomp_unit_0020");
    runtime.register_function(0x08857670u, &recomp_unit_0020, "recomp_unit_0020");
    runtime.register_function(0x0885767Cu, &recomp_unit_0020, "recomp_unit_0020");
    runtime.register_function(0x0885769Cu, &recomp_unit_0020, "recomp_unit_0020");
    runtime.register_function(0x088576A8u, &recomp_unit_0020, "recomp_unit_0020");
    runtime.register_function(0x088576D0u, &recomp_unit_0020, "recomp_unit_0020");
    runtime.register_function(0x088576E4u, &recomp_unit_0020, "recomp_unit_0020");
    runtime.register_function(0x088576F8u, &recomp_unit_0020, "recomp_unit_0020");
    runtime.register_function(0x0885770Cu, &recomp_unit_0020, "recomp_unit_0020");
    runtime.register_function(0x08857720u, &recomp_unit_0020, "recomp_unit_0020");
    runtime.register_function(0x0885772Cu, &recomp_unit_0020, "recomp_unit_0020");
    runtime.register_function(0x08857738u, &recomp_unit_0020, "recomp_unit_0020");
    runtime.register_function(0x08857744u, &recomp_unit_0020, "recomp_unit_0020");
    runtime.register_function(0x08857750u, &recomp_unit_0020, "recomp_unit_0020");
    runtime.register_function(0x0885775Cu, &recomp_unit_0020, "recomp_unit_0020");
    runtime.register_function(0x08857768u, &recomp_unit_0020, "recomp_unit_0020");
    runtime.register_function(0x08857784u, &recomp_unit_0020, "recomp_unit_0020");
    runtime.register_function(0x08857790u, &recomp_unit_0020, "recomp_unit_0020");
    runtime.register_function(0x088577A8u, &recomp_unit_0020, "recomp_unit_0020");
    runtime.register_function(0x088577B4u, &recomp_unit_0020, "recomp_unit_0020");
    runtime.register_function(0x088577C0u, &recomp_unit_0020, "recomp_unit_0020");
    runtime.register_function(0x088577CCu, &recomp_unit_0020, "recomp_unit_0020");
    runtime.register_function(0x088577D8u, &recomp_unit_0020, "recomp_unit_0020");
    runtime.register_function(0x088577E4u, &recomp_unit_0020, "recomp_unit_0020");
    runtime.register_function(0x088577F0u, &recomp_unit_0020, "recomp_unit_0020");
    runtime.register_function(0x088577F8u, &recomp_unit_0020, "recomp_unit_0020");
    runtime.register_function(0x088577FCu, &recomp_unit_0020, "recomp_unit_0020");
    runtime.register_function(0x08857810u, &recomp_unit_0020, "recomp_unit_0020");
    runtime.register_function(0x08857818u, &recomp_unit_0020, "recomp_unit_0020");
    runtime.register_function(0x08857848u, &recomp_unit_0020, "recomp_unit_0020");
    runtime.register_function(0x08857858u, &recomp_unit_0020, "recomp_unit_0020");
    runtime.register_function(0x08857878u, &recomp_unit_0020, "recomp_unit_0020");
    runtime.register_function(0x088578E8u, &recomp_unit_0020, "recomp_unit_0020");
    runtime.register_function(0x08857904u, &recomp_unit_0020, "recomp_unit_0020");
    runtime.register_function(0x0885790Cu, &recomp_unit_0020, "recomp_unit_0020");
    runtime.register_function(0x08857914u, &recomp_unit_0020, "recomp_unit_0020");
    runtime.register_function(0x0885791Cu, &recomp_unit_0020, "recomp_unit_0020");
    runtime.register_function(0x08857924u, &recomp_unit_0020, "recomp_unit_0020");
    runtime.register_function(0x0885792Cu, &recomp_unit_0020, "recomp_unit_0020");
    runtime.register_function(0x0885793Cu, &recomp_unit_0020, "recomp_unit_0020");
    runtime.register_function(0x08857944u, &recomp_unit_0020, "recomp_unit_0020");
    runtime.register_function(0x0885794Cu, &recomp_unit_0020, "recomp_unit_0020");
    runtime.register_function(0x0885795Cu, &recomp_unit_0020, "recomp_unit_0020");
    runtime.register_function(0x08857964u, &recomp_unit_0020, "recomp_unit_0020");
    runtime.register_function(0x08857974u, &recomp_unit_0020, "recomp_unit_0020");
    runtime.register_function(0x0885797Cu, &recomp_unit_0020, "recomp_unit_0020");
    runtime.register_function(0x08857984u, &recomp_unit_0020, "recomp_unit_0020");
    runtime.register_function(0x0885798Cu, &recomp_unit_0020, "recomp_unit_0020");
    runtime.register_function(0x08857994u, &recomp_unit_0020, "recomp_unit_0020");
    runtime.register_function(0x0885799Cu, &recomp_unit_0020, "recomp_unit_0020");
    runtime.register_function(0x088579C4u, &recomp_unit_0020, "recomp_unit_0020");
    runtime.register_function(0x088579D0u, &recomp_unit_0020, "recomp_unit_0020");
    runtime.register_function(0x088579D8u, &recomp_unit_0020, "recomp_unit_0020");
    runtime.register_function(0x088579E8u, &recomp_unit_0020, "recomp_unit_0020");
    runtime.register_function(0x088579F0u, &recomp_unit_0020, "recomp_unit_0020");
    runtime.register_function(0x08857A00u, &recomp_unit_0020, "recomp_unit_0020");
    runtime.register_function(0x08857A08u, &recomp_unit_0020, "recomp_unit_0020");
    runtime.register_function(0x08857A28u, &recomp_unit_0020, "recomp_unit_0020");
    runtime.register_function(0x08857A34u, &recomp_unit_0020, "recomp_unit_0020");
    runtime.register_function(0x08857A44u, &recomp_unit_0020, "recomp_unit_0020");
    runtime.register_function(0x08857A50u, &recomp_unit_0020, "recomp_unit_0020");
    runtime.register_function(0x08857A58u, &recomp_unit_0020, "recomp_unit_0020");
    runtime.register_function(0x08857A60u, &recomp_unit_0020, "recomp_unit_0020");
    runtime.register_function(0x08857A84u, &recomp_unit_0020, "recomp_unit_0020");
    runtime.register_function(0x08857A90u, &recomp_unit_0020, "recomp_unit_0020");
    runtime.register_function(0x08857AA0u, &recomp_unit_0020, "recomp_unit_0020");
    runtime.register_function(0x08857AB0u, &recomp_unit_0020, "recomp_unit_0020");
    runtime.register_function(0x08857ABCu, &recomp_unit_0020, "recomp_unit_0020");
    runtime.register_function(0x08857AC8u, &recomp_unit_0020, "recomp_unit_0020");
    runtime.register_function(0x08857AD0u, &recomp_unit_0020, "recomp_unit_0020");
    runtime.register_function(0x08857AF4u, &recomp_unit_0020, "recomp_unit_0020");
    runtime.register_function(0x08857B00u, &recomp_unit_0020, "recomp_unit_0020");
    runtime.register_function(0x08857B10u, &recomp_unit_0020, "recomp_unit_0020");
    runtime.register_function(0x08857B24u, &recomp_unit_0020, "recomp_unit_0020");
    runtime.register_function(0x08857B30u, &recomp_unit_0020, "recomp_unit_0020");
    runtime.register_function(0x08857B3Cu, &recomp_unit_0020, "recomp_unit_0020");
    runtime.register_function(0x08857B44u, &recomp_unit_0020, "recomp_unit_0020");
    runtime.register_function(0x08857B4Cu, &recomp_unit_0020, "recomp_unit_0020");
    runtime.register_function(0x08857B54u, &recomp_unit_0020, "recomp_unit_0020");
    runtime.register_function(0x08857B5Cu, &recomp_unit_0020, "recomp_unit_0020");
    runtime.register_function(0x08857B68u, &recomp_unit_0020, "recomp_unit_0020");
    runtime.register_function(0x08857B74u, &recomp_unit_0020, "recomp_unit_0020");
    runtime.register_function(0x08857B7Cu, &recomp_unit_0020, "recomp_unit_0020");
    runtime.register_function(0x08857B88u, &recomp_unit_0020, "recomp_unit_0020");
    runtime.register_function(0x08857B94u, &recomp_unit_0020, "recomp_unit_0020");
    runtime.register_function(0x08857BA0u, &recomp_unit_0020, "recomp_unit_0020");
    runtime.register_function(0x08857BA8u, &recomp_unit_0020, "recomp_unit_0020");
    runtime.register_function(0x08857BB0u, &recomp_unit_0020, "recomp_unit_0020");
    runtime.register_function(0x08857BB8u, &recomp_unit_0020, "recomp_unit_0020");
    runtime.register_function(0x08857BC4u, &recomp_unit_0020, "recomp_unit_0020");
    runtime.register_function(0x08857BCCu, &recomp_unit_0020, "recomp_unit_0020");
    runtime.register_function(0x08857BD8u, &recomp_unit_0020, "recomp_unit_0020");
    runtime.register_function(0x08857BE0u, &recomp_unit_0020, "recomp_unit_0020");
    runtime.register_function(0x08857BF4u, &recomp_unit_0020, "recomp_unit_0020");
    runtime.register_function(0x08857BFCu, &recomp_unit_0020, "recomp_unit_0020");
    runtime.register_function(0x08857C10u, &recomp_unit_0020, "recomp_unit_0020");
    runtime.register_function(0x08857C18u, &recomp_unit_0020, "recomp_unit_0020");
    runtime.register_function(0x08857C24u, &recomp_unit_0020, "recomp_unit_0020");
    runtime.register_function(0x08857C34u, &recomp_unit_0020, "recomp_unit_0020");
    runtime.register_function(0x08857C3Cu, &recomp_unit_0020, "recomp_unit_0020");
    runtime.register_function(0x08857C44u, &recomp_unit_0020, "recomp_unit_0020");
    runtime.register_function(0x08857C58u, &recomp_unit_0020, "recomp_unit_0020");
    runtime.register_function(0x08857C60u, &recomp_unit_0020, "recomp_unit_0020");
    runtime.register_function(0x08857C6Cu, &recomp_unit_0020, "recomp_unit_0020");
    runtime.register_function(0x08857C74u, &recomp_unit_0020, "recomp_unit_0020");
    runtime.register_function(0x08857C80u, &recomp_unit_0020, "recomp_unit_0020");
    runtime.register_function(0x08857C88u, &recomp_unit_0020, "recomp_unit_0020");
    runtime.register_function(0x08857C9Cu, &recomp_unit_0020, "recomp_unit_0020");
    runtime.register_function(0x08857CA4u, &recomp_unit_0020, "recomp_unit_0020");
    runtime.register_function(0x08857CB0u, &recomp_unit_0020, "recomp_unit_0020");
    runtime.register_function(0x08857CC4u, &recomp_unit_0020, "recomp_unit_0020");
    runtime.register_function(0x08857CCCu, &recomp_unit_0020, "recomp_unit_0020");
    runtime.register_function(0x08857CD8u, &recomp_unit_0020, "recomp_unit_0020");
    runtime.register_function(0x08857CE0u, &recomp_unit_0020, "recomp_unit_0020");
    runtime.register_function(0x08857CF4u, &recomp_unit_0020, "recomp_unit_0020");
    runtime.register_function(0x08857CFCu, &recomp_unit_0020, "recomp_unit_0020");
    runtime.register_function(0x08857D10u, &recomp_unit_0020, "recomp_unit_0020");
    runtime.register_function(0x08857D18u, &recomp_unit_0020, "recomp_unit_0020");
    runtime.register_function(0x08857D24u, &recomp_unit_0020, "recomp_unit_0020");
    runtime.register_function(0x08857D38u, &recomp_unit_0020, "recomp_unit_0020");
    runtime.register_function(0x08857D40u, &recomp_unit_0020, "recomp_unit_0020");
    runtime.register_function(0x08857D4Cu, &recomp_unit_0020, "recomp_unit_0020");
    runtime.register_function(0x08857D54u, &recomp_unit_0020, "recomp_unit_0020");
    runtime.register_function(0x08857D68u, &recomp_unit_0020, "recomp_unit_0020");
    runtime.register_function(0x08857D70u, &recomp_unit_0020, "recomp_unit_0020");
    runtime.register_function(0x08857D7Cu, &recomp_unit_0020, "recomp_unit_0020");
    runtime.register_function(0x08857D90u, &recomp_unit_0020, "recomp_unit_0020");
    runtime.register_function(0x08857D98u, &recomp_unit_0020, "recomp_unit_0020");
    runtime.register_function(0x08857DA4u, &recomp_unit_0020, "recomp_unit_0020");
    runtime.register_function(0x08857DACu, &recomp_unit_0020, "recomp_unit_0020");
    runtime.register_function(0x08857DB8u, &recomp_unit_0020, "recomp_unit_0020");
    runtime.register_function(0x08857DCCu, &recomp_unit_0020, "recomp_unit_0020");
    runtime.register_function(0x08857DD4u, &recomp_unit_0020, "recomp_unit_0020");
    runtime.register_function(0x08857DE0u, &recomp_unit_0020, "recomp_unit_0020");
    runtime.register_function(0x08857DF4u, &recomp_unit_0020, "recomp_unit_0020");
    runtime.register_function(0x08857E04u, &recomp_unit_0020, "recomp_unit_0020");
    runtime.register_function(0x08857E68u, &recomp_unit_0020, "recomp_unit_0020");
    runtime.register_function(0x08857E70u, &recomp_unit_0020, "recomp_unit_0020");
    runtime.register_function(0x08857E84u, &recomp_unit_0020, "recomp_unit_0020");
    runtime.register_function(0x08857E90u, &recomp_unit_0020, "recomp_unit_0020");
    runtime.register_function(0x08857E98u, &recomp_unit_0020, "recomp_unit_0020");
    runtime.register_function(0x08857E9Cu, &recomp_unit_0020, "recomp_unit_0020");
    runtime.register_function(0x08857EA4u, &recomp_unit_0020, "recomp_unit_0020");
    runtime.register_function(0x08857EA8u, &recomp_unit_0020, "recomp_unit_0020");
    runtime.register_function(0x08857ECCu, &recomp_unit_0020, "recomp_unit_0020");
    runtime.register_function(0x08857ED4u, &recomp_unit_0020, "recomp_unit_0020");
    runtime.register_function(0x08857EDCu, &recomp_unit_0020, "recomp_unit_0020");
    runtime.register_function(0x08857EE4u, &recomp_unit_0020, "recomp_unit_0020");
    runtime.register_function(0x08857EF8u, &recomp_unit_0020, "recomp_unit_0020");
    runtime.register_function(0x08857F04u, &recomp_unit_0020, "recomp_unit_0020");
    runtime.register_function(0x08857F18u, &recomp_unit_0020, "recomp_unit_0020");
    runtime.register_function(0x08857F20u, &recomp_unit_0020, "recomp_unit_0020");
    runtime.register_function(0x08857F2Cu, &recomp_unit_0020, "recomp_unit_0020");
    runtime.register_function(0x08857F34u, &recomp_unit_0020, "recomp_unit_0020");
    runtime.register_function(0x08857F3Cu, &recomp_unit_0020, "recomp_unit_0020");
    runtime.register_function(0x08857F44u, &recomp_unit_0020, "recomp_unit_0020");
    runtime.register_function(0x08857F58u, &recomp_unit_0020, "recomp_unit_0020");
    runtime.register_function(0x08857F64u, &recomp_unit_0020, "recomp_unit_0020");
    runtime.register_function(0x08857F78u, &recomp_unit_0020, "recomp_unit_0020");
    runtime.register_function(0x08857F80u, &recomp_unit_0020, "recomp_unit_0020");
    runtime.register_function(0x08857F8Cu, &recomp_unit_0020, "recomp_unit_0020");
    runtime.register_function(0x08857F94u, &recomp_unit_0020, "recomp_unit_0020");
    runtime.register_function(0x08857F9Cu, &recomp_unit_0020, "recomp_unit_0020");
    runtime.register_function(0x08857FA4u, &recomp_unit_0020, "recomp_unit_0020");
    runtime.register_function(0x08857FACu, &recomp_unit_0020, "recomp_unit_0020");
    runtime.register_function(0x08857FC0u, &recomp_unit_0020, "recomp_unit_0020");
    runtime.register_function(0x08857FCCu, &recomp_unit_0020, "recomp_unit_0020");
    runtime.register_function(0x08857FE0u, &recomp_unit_0020, "recomp_unit_0020");
    runtime.register_function(0x08857FE8u, &recomp_unit_0020, "recomp_unit_0020");
    runtime.register_function(0x08857FF4u, &recomp_unit_0020, "recomp_unit_0020");
    runtime.register_function(0x08857FFCu, &recomp_unit_0020, "recomp_unit_0020");
}
} // namespace psprecomp
