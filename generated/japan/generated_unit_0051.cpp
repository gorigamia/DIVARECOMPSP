#include "psprecomp/runtime.hpp"
#include "generated_units.hpp"
#include <bit>
#include <cmath>
#include <cstdint>
#include <limits>

namespace psprecomp {
static const std::uint16_t kEntryIds_recomp_unit_0051[4096] = {
    1, 0, 0, 2, 0, 0, 3, 0, 0, 0, 0, 0, 0, 0, 0, 0, 4, 5, 0, 0, 0, 6, 0, 0, 0, 7, 0, 0, 0, 0, 8, 0,
    0, 0, 0, 0, 9, 0, 0, 0, 0, 10, 0, 0, 0, 0, 11, 0, 0, 0, 0, 0, 0, 12, 0, 0, 0, 0, 0, 0, 0, 0, 0, 13,
    0, 0, 14, 0, 15, 0, 0, 0, 16, 0, 0, 0, 17, 0, 0, 0, 18, 0, 0, 19, 0, 0, 0, 0, 0, 20, 0, 21, 0, 0, 0, 0,
    22, 0, 0, 0, 0, 0, 0, 23, 0, 0, 24, 0, 25, 0, 0, 26, 0, 27, 0, 0, 0, 0, 28, 0, 29, 0, 30, 0, 0, 31, 0, 0,
    0, 0, 32, 0, 33, 0, 0, 0, 0, 0, 0, 0, 34, 0, 0, 35, 0, 0, 0, 0, 36, 0, 0, 0, 0, 0, 0, 0, 37, 0, 0, 38,
    0, 0, 0, 39, 0, 0, 0, 0, 0, 40, 0, 0, 0, 0, 41, 0, 0, 0, 0, 0, 0, 0, 42, 0, 0, 0, 43, 0, 44, 0, 0, 0,
    0, 45, 0, 0, 0, 46, 0, 0, 0, 47, 0, 0, 0, 0, 48, 0, 0, 0, 49, 0, 0, 0, 50, 0, 0, 0, 0, 0, 51, 0, 0, 0,
    52, 0, 0, 0, 0, 0, 53, 0, 0, 54, 55, 0, 0, 0, 0, 56, 0, 0, 0, 57, 0, 0, 0, 0, 0, 0, 0, 0, 0, 58, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 59, 0, 0, 0, 60, 0, 0, 0, 61, 0, 0, 0, 62, 0, 63, 0, 0, 0, 64, 0, 0,
    0, 0, 65, 0, 0, 0, 0, 0, 0, 0, 0, 0, 66, 0, 0, 0, 0, 0, 0, 67, 0, 0, 0, 68, 0, 0, 0, 0, 0, 69, 0, 0,
    0, 70, 0, 0, 0, 0, 71, 0, 0, 0, 0, 0, 72, 0, 0, 0, 73, 0, 74, 0, 0, 0, 0, 0, 0, 0, 0, 0, 75, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 76, 0, 0, 77, 0, 0, 0, 78, 0, 0, 0, 79, 0, 80,
    0, 0, 0, 81, 0, 0, 0, 82, 0, 0, 0, 0, 0, 83, 0, 0, 0, 0, 0, 0, 84, 0, 0, 0, 85, 0, 0, 0, 86, 0, 0, 0,
    0, 0, 87, 0, 0, 0, 0, 0, 88, 0, 0, 0, 89, 0, 90, 0, 91, 0, 0, 0, 0, 0, 0, 0, 0, 92, 0, 0, 0, 93, 0, 0,
    0, 0, 0, 0, 0, 94, 0, 0, 0, 95, 0, 0, 0, 96, 0, 0, 0, 0, 0, 97, 0, 0, 0, 98, 0, 0, 0, 0, 99, 0, 0, 0,
    0, 0, 100, 0, 0, 0, 101, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 102, 0, 0, 0, 0, 0, 0, 0, 0, 103, 0,
    104, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 105, 0, 0, 0, 106, 0, 0, 0, 0, 0, 0, 107, 0, 0,
    0, 108, 0, 0, 0, 109, 0, 0, 0, 0, 0, 0, 0, 0, 110, 0, 0, 0, 111, 0, 0, 112, 0, 113, 0, 114, 0, 0, 0, 0, 0, 115,
    0, 116, 0, 0, 117, 0, 0, 0, 118, 0, 119, 0, 0, 0, 0, 0, 120, 0, 121, 0, 122, 0, 0, 0, 0, 123, 0, 124, 0, 125, 0, 0,
    126, 0, 0, 0, 127, 0, 0, 0, 0, 0, 128, 0, 0, 0, 129, 0, 0, 0, 130, 0, 0, 0, 0, 0, 0, 0, 131, 0, 0, 132, 0, 0,
    0, 0, 133, 0, 0, 0, 134, 135, 0, 0, 136, 0, 137, 0, 0, 138, 0, 0, 0, 139, 0, 0, 0, 0, 0, 140, 0, 0, 0, 0, 0, 0,
    0, 0, 141, 0, 0, 0, 142, 0, 0, 0, 0, 0, 0, 0, 0, 143, 0, 0, 0, 144, 0, 0, 0, 145, 0, 0, 0, 0, 0, 146, 0, 0,
    0, 147, 0, 0, 0, 0, 0, 148, 0, 0, 0, 149, 0, 0, 0, 0, 150, 0, 0, 0, 0, 0, 0, 151, 0, 0, 0, 0, 0, 152, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 153, 0, 0, 0, 0, 0, 0, 0, 154, 0, 0, 0, 155, 0, 156, 0, 157, 0, 0, 158, 0, 0, 0, 0, 159,
    0, 0, 0, 160, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 161, 0, 0, 0, 0, 162, 0, 0, 0, 0, 0, 0, 163, 0, 164, 0, 0,
    0, 0, 0, 165, 0, 0, 166, 0, 0, 0, 0, 0, 0, 0, 167, 0, 0, 0, 168, 0, 0, 0, 169, 0, 0, 0, 0, 0, 0, 0, 170, 0,
    0, 0, 171, 0, 172, 0, 173, 0, 0, 0, 0, 0, 0, 174, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 175, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 176, 0, 0, 0, 0, 0, 0, 0, 0, 177, 0, 178, 0, 0, 0, 0, 179, 0, 0, 0, 0, 180, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 181, 0, 0, 0, 182, 0, 0, 0, 183, 0, 184, 0, 0, 185, 0, 0, 0, 186, 187, 0, 0, 0, 0, 0, 188, 0, 0, 0, 189, 0,
    0, 0, 190, 0, 0, 0, 191, 0, 0, 0, 0, 0, 192, 0, 0, 0, 193, 0, 0, 0, 0, 0, 194, 0, 0, 0, 195, 0, 0, 0, 0, 196,
    0, 0, 0, 0, 0, 0, 197, 0, 0, 0, 0, 0, 198, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 199, 0, 0, 0, 0, 0, 0, 0, 200,
    0, 0, 0, 201, 0, 202, 0, 203, 0, 0, 204, 0, 0, 0, 0, 205, 0, 0, 0, 206, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 207,
    0, 0, 0, 0, 208, 0, 0, 0, 0, 0, 0, 209, 0, 210, 0, 0, 0, 0, 0, 211, 0, 0, 0, 0, 0, 0, 0, 212, 0, 0, 0, 213,
    0, 214, 0, 0, 215, 216, 0, 0, 217, 0, 218, 0, 219, 0, 0, 0, 220, 0, 0, 0, 0, 0, 0, 0, 0, 221, 0, 0, 0, 0, 222, 0,
    223, 0, 224, 0, 0, 0, 0, 0, 0, 225, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 226, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 227,
    0, 0, 0, 0, 0, 0, 0, 0, 228, 0, 229, 0, 0, 0, 0, 230, 0, 0, 0, 0, 0, 231, 0, 0, 0, 0, 0, 0, 0, 0, 0, 232,
    0, 0, 233, 0, 0, 0, 234, 0, 0, 235, 0, 0, 0, 0, 236, 0, 0, 237, 0, 0, 0, 0, 0, 0, 0, 0, 0, 238, 0, 239, 0, 0,
    0, 240, 0, 0, 0, 241, 0, 0, 0, 242, 0, 243, 0, 0, 244, 0, 0, 0, 245, 246, 0, 0, 0, 0, 0, 247, 0, 0, 248, 0, 0, 249,
    0, 0, 0, 250, 0, 0, 0, 251, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 252, 0, 0, 0, 0, 0, 253, 0, 254, 0, 0, 0, 255,
    0, 0, 0, 256, 0, 0, 0, 0, 0, 0, 0, 0, 257, 0, 258, 0, 0, 0, 0, 0, 0, 259, 0, 260, 261, 0, 0, 0, 0, 262, 0, 263,
    0, 0, 264, 0, 0, 0, 0, 0, 0, 0, 0, 265, 0, 266, 0, 0, 0, 0, 0, 267, 268, 0, 0, 0, 0, 269, 270, 0, 0, 0, 0, 0,
    0, 0, 271, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 272, 0, 0, 273, 0, 0, 274, 0, 0, 0, 0, 275, 0, 276,
    0, 277, 278, 0, 0, 279, 0, 0, 280, 0, 281, 0, 0, 282, 0, 0, 0, 283, 0, 0, 0, 0, 0, 284, 0, 0, 0, 0, 0, 0, 0, 285,
    0, 0, 286, 0, 0, 0, 0, 0, 0, 287, 0, 288, 0, 0, 0, 0, 0, 289, 290, 0, 0, 0, 0, 0, 291, 0, 292, 0, 0, 293, 0, 0,
    0, 0, 294, 0, 295, 0, 296, 297, 0, 0, 298, 0, 0, 299, 0, 0, 0, 300, 0, 0, 0, 0, 0, 301, 0, 0, 302, 0, 0, 0, 0, 303,
    0, 304, 0, 305, 306, 0, 307, 0, 0, 308, 0, 0, 0, 0, 309, 0, 0, 310, 0, 0, 311, 0, 0, 312, 0, 0, 0, 0, 0, 313, 0, 0,
    0, 314, 0, 0, 0, 0, 315, 0, 0, 0, 0, 0, 316, 0, 0, 0, 0, 0, 0, 0, 0, 317, 0, 0, 0, 0, 0, 318, 0, 0, 0, 0,
    0, 0, 319, 0, 0, 0, 0, 0, 320, 0, 0, 321, 0, 322, 0, 0, 323, 0, 324, 0, 0, 325, 0, 326, 0, 0, 327, 0, 328, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 329, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 330, 0, 0, 331, 0, 0, 0, 0, 0, 0, 332, 0, 0,
    0, 0, 0, 0, 0, 333, 0, 0, 334, 0, 0, 335, 0, 0, 336, 0, 0, 0, 337, 0, 0, 0, 338, 0, 339, 0, 0, 340, 0, 0, 0, 0,
    0, 341, 0, 0, 0, 342, 0, 0, 343, 0, 0, 344, 0, 345, 0, 0, 0, 0, 0, 0, 0, 0, 346, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    347, 0, 0, 0, 348, 0, 0, 0, 349, 0, 0, 0, 0, 0, 350, 0, 0, 0, 351, 0, 0, 0, 0, 352, 0, 0, 0, 0, 0, 353, 0, 0,
    0, 354, 0, 0, 0, 0, 0, 0, 0, 0, 355, 0, 0, 0, 0, 0, 0, 0, 356, 0, 0, 0, 0, 0, 357, 0, 0, 0, 0, 0, 358, 0,
    0, 0, 0, 359, 0, 0, 0, 360, 0, 0, 0, 0, 0, 0, 0, 361, 0, 0, 0, 362, 0, 0, 0, 0, 0, 0, 0, 0, 0, 363, 0, 0,
    0, 0, 0, 364, 0, 0, 365, 0, 366, 367, 0, 0, 0, 0, 0, 0, 0, 0, 368, 0, 0, 0, 369, 0, 0, 0, 0, 0, 0, 370, 0, 0,
    0, 371, 0, 0, 0, 372, 0, 0, 0, 373, 0, 374, 0, 375, 0, 0, 0, 0, 0, 0, 0, 376, 0, 0, 0, 377, 0, 0, 0, 0, 0, 378,
    0, 0, 0, 379, 0, 0, 0, 0, 380, 0, 0, 0, 0, 0, 381, 0, 0, 0, 382, 0, 0, 0, 0, 0, 0, 0, 0, 0, 383, 0, 0, 0,
    0, 0, 384, 0, 0, 0, 0, 385, 0, 0, 386, 0, 0, 387, 0, 0, 0, 0, 0, 0, 0, 388, 0, 0, 0, 389, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 390, 0, 0, 0, 391, 0, 0, 0, 0, 0, 0, 392, 0, 0, 0, 393, 0, 0, 0, 394, 0, 0, 0,
    395, 0, 396, 0, 397, 0, 0, 0, 0, 0, 0, 0, 398, 0, 0, 0, 399, 0, 0, 0, 0, 0, 400, 0, 0, 0, 401, 0, 0, 0, 0, 402,
    0, 0, 0, 0, 0, 403, 0, 0, 0, 404, 0, 0, 0, 0, 0, 0, 0, 0, 0, 405, 0, 0, 0, 0, 0, 406, 0, 0, 0, 0, 407, 0,
    0, 0, 0, 0, 0, 0, 408, 0, 0, 0, 409, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 410, 0, 0, 0, 411, 0,
    0, 0, 0, 0, 0, 412, 0, 0, 0, 413, 0, 0, 0, 414, 0, 0, 0, 0, 415, 0, 0, 0, 416, 0, 0, 0, 417, 0, 0, 0, 418, 0,
    0, 0, 419, 0, 0, 0, 0, 0, 420, 0, 0, 0, 421, 0, 0, 0, 0, 422, 0, 0, 0, 0, 0, 423, 0, 0, 0, 424, 0, 425, 0, 0,
    0, 0, 0, 0, 0, 426, 0, 0, 0, 427, 0, 0, 0, 0, 0, 0, 0, 0, 428, 0, 0, 0, 429, 0, 0, 0, 0, 0, 0, 0, 0, 430,
    0, 0, 0, 431, 0, 432, 0, 433, 0, 0, 0, 0, 0, 434, 0, 0, 0, 0, 0, 435, 0, 0, 0, 436, 0, 0, 0, 0, 0, 437, 0, 0,
    0, 438, 0, 0, 0, 0, 0, 439, 0, 0, 0, 440, 0, 0, 0, 0, 441, 0, 0, 0, 442, 0, 0, 0, 443, 0, 0, 0, 0, 444, 0, 0,
    0, 0, 445, 0, 0, 0, 0, 0, 0, 0, 0, 0, 446, 0, 0, 447, 0, 0, 448, 0, 0, 0, 449, 0, 0, 0, 0, 450, 0, 451, 0, 452,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 453, 0, 0, 0, 0, 0, 454, 0, 0, 0, 0, 0, 0, 0, 0, 0, 455, 0,
    0, 456, 0, 0, 457, 0, 0, 0, 458, 0, 0, 0, 0, 459, 0, 460, 0, 461, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    462, 0, 0, 0, 0, 0, 463, 0, 0, 0, 0, 0, 0, 464, 0, 465, 0, 0, 466, 0, 0, 467, 0, 0, 0, 0, 468, 0, 0, 469, 0, 470,
    0, 0, 471, 0, 0, 472, 0, 0, 0, 0, 0, 473, 0, 0, 474, 0, 475, 476, 0, 477, 0, 0, 0, 0, 478, 0, 0, 0, 0, 0, 479, 0,
    0, 0, 0, 480, 0, 0, 0, 481, 0, 0, 482, 0, 0, 0, 0, 0, 0, 0, 0, 0, 483, 0, 0, 0, 484, 0, 0, 0, 485, 0, 0, 0,
    0, 486, 0, 0, 0, 487, 0, 0, 0, 0, 0, 488, 0, 0, 0, 489, 0, 0, 0, 0, 490, 0, 0, 0, 0, 0, 0, 0, 0, 491, 0, 0,
    0, 0, 0, 0, 0, 492, 0, 0, 0, 0, 0, 493, 0, 0, 0, 0, 0, 494, 0, 0, 0, 0, 495, 0, 0, 0, 496, 0, 0, 0, 0, 0,
    0, 0, 497, 0, 0, 0, 498, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 499, 0, 0, 0, 0, 0, 0, 0, 500, 0,
    0, 0, 0, 0, 0, 501, 0, 0, 0, 0, 0, 0, 502, 0, 0, 0, 0, 0, 0, 503, 0, 0, 0, 0, 0, 0, 504, 0, 0, 0, 0, 0,
    0, 505, 0, 0, 0, 0, 0, 0, 506, 0, 0, 0, 0, 0, 0, 507, 0, 0, 0, 0, 0, 0, 508, 0, 0, 0, 0, 0, 0, 509, 0, 0,
    0, 0, 0, 0, 510, 0, 0, 0, 0, 0, 0, 511, 0, 0, 0, 0, 0, 0, 512, 0, 0, 0, 0, 0, 0, 513, 0, 0, 0, 0, 0, 0,
    514, 0, 0, 0, 515, 516, 0, 0, 517, 0, 0, 0, 518, 0, 0, 0, 0, 0, 0, 0, 519, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 520, 0, 0, 0, 521, 0, 0, 522, 0, 523, 0, 0, 0, 0, 524, 0, 525, 0, 0, 526, 0, 0, 527, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 528, 529, 0, 0, 530, 0, 531, 0, 0, 532, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 533, 534, 0,
    0, 535, 0, 0, 0, 0, 536, 0, 0, 0, 0, 0, 0, 0, 537, 0, 538, 0, 0, 0, 0, 0, 0, 539, 0, 0, 540, 0, 0, 0, 0, 541,
    0, 542, 0, 543, 0, 0, 0, 0, 0, 0, 544, 0, 0, 0, 545, 0, 0, 0, 0, 0, 0, 0, 0, 546, 0, 0, 0, 0, 0, 547, 0, 0,
    0, 0, 548, 0, 0, 549, 0, 0, 0, 0, 0, 0, 0, 0, 0, 550, 0, 0, 0, 0, 0, 0, 0, 551, 0, 0, 0, 0, 0, 0, 552, 0,
    0, 0, 0, 0, 0, 0, 0, 553, 0, 0, 0, 554, 0, 0, 0, 0, 0, 0, 0, 0, 555, 0, 0, 0, 0, 0, 556, 0, 557, 0, 0, 0,
    0, 0, 0, 0, 558, 0, 0, 559, 0, 0, 0, 560, 0, 561, 0, 0, 0, 0, 562, 0, 0, 0, 0, 0, 0, 0, 563, 0, 0, 0, 564, 0,
    0, 0, 0, 0, 565, 0, 0, 0, 0, 0, 566, 0, 0, 567, 0, 0, 0, 0, 568, 0, 569, 0, 570, 0, 571, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 572, 0, 0, 573, 0, 0, 574, 0, 0, 575, 0, 0, 576, 0, 0, 0, 0, 577, 0, 578, 0, 579, 580, 0,
    581, 0, 0, 582, 0, 0, 0, 0, 0, 583, 0, 0, 584, 0, 0, 0, 0, 0, 585, 0, 0, 0, 586, 0, 0, 0, 0, 0, 587, 0, 0, 0,
    0, 0, 0, 588, 0, 0, 0, 0, 0, 0, 589, 0, 0, 590, 0, 591, 592, 0, 0, 0, 0, 0, 0, 0, 0, 0, 593, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 594, 0, 0, 595, 0, 0, 0, 596, 0, 0, 0, 0, 0, 597, 0, 598, 0, 0, 0, 599, 0, 0, 0, 0, 0,
    600, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 601, 0, 602, 0, 0, 603, 604, 0, 0, 605, 606, 0, 0, 0, 0, 0, 0, 0, 0, 607, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 608, 0, 0, 0, 609, 0, 0, 610, 0, 0, 611, 0, 0, 0, 0, 0, 612, 0,
    0, 0, 0, 0, 0, 0, 613, 0, 0, 614, 0, 0, 615, 0, 0, 616, 0, 0, 0, 617, 0, 0, 0, 618, 0, 619, 0, 0, 620, 0, 0, 0,
    0, 0, 621, 0, 0, 0, 622, 0, 0, 623, 0, 0, 624, 0, 625, 0, 0, 0, 0, 0, 0, 0, 0, 626, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 627, 0, 0, 0, 628, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 629, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 630, 0, 0, 0, 0, 0, 0, 0, 0, 0, 631, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 632, 0, 0, 0, 0, 0, 633, 0, 0, 0, 0, 0, 0, 634, 0, 0, 0, 635, 0, 0, 0, 636, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 637, 0, 0, 638, 0, 0, 0, 639, 0, 0, 640, 0, 641, 0, 0, 642, 0, 0, 0, 0, 643, 0, 0, 644, 0, 0, 0, 0, 645, 0,
    646, 0, 647, 648, 0, 0, 649, 0, 0, 650, 0, 0, 651, 0, 0, 0, 0, 652, 0, 0, 0, 0, 0, 653, 0, 0, 0, 654, 0, 0, 655, 0,
    0, 656, 0, 657, 0, 0, 658, 0, 659, 660, 0, 0, 0, 0, 0, 0, 0, 661, 0, 662, 0, 0, 0, 0, 0, 663, 0, 0, 664, 0, 665, 0,
    666, 0, 0, 0, 667, 0, 0, 668, 0, 0, 0, 669, 0, 0, 670, 0, 671, 0, 672, 0, 0, 673, 0, 674, 0, 0, 0, 675, 0, 0, 676, 0,
    0, 0, 677, 0, 0, 678, 0, 679, 0, 0, 0, 680, 0, 0, 0, 0, 0, 0, 681, 0, 0, 0, 682, 0, 0, 683, 0, 684, 0, 0, 0, 0,
    685, 0, 0, 0, 686, 0, 0, 687, 0, 688, 0, 0, 0, 0, 0, 0, 0, 0, 0, 689, 0, 0, 0, 690, 0, 0, 0, 0, 0, 0, 691, 0,
    0, 0, 0, 0, 0, 692, 0, 0, 0, 693, 0, 694, 0, 695, 0, 696, 0, 697, 0, 698, 0, 0, 699, 0, 0, 0, 700, 0, 0, 0, 701, 0,
    0, 0, 0, 0, 0, 0, 702, 0, 0, 0, 703, 0, 0, 0, 704, 0, 0, 0, 705, 0, 0, 0, 706, 0, 0, 0, 707, 0, 0, 0, 708, 0,
    0, 0, 709, 0, 0, 0, 710, 0, 0, 0, 711, 0, 0, 0, 712, 0, 0, 0, 713, 0, 0, 0, 714, 0, 0, 0, 0, 0, 715, 0, 0, 0,
    716, 0, 0, 0, 717, 0, 0, 0, 718, 0, 0, 0, 719, 0, 0, 720, 0, 0, 0, 721, 0, 0, 0, 722, 0, 0, 0, 723, 0, 0, 0, 724,
    0, 0, 725, 0, 0, 726, 0, 0, 0, 727, 0, 0, 0, 728, 0, 0, 729, 0, 0, 730, 0, 0, 0, 0, 731, 0, 0, 0, 732, 0, 0, 0,
    733, 0, 0, 734, 0, 0, 735, 0, 0, 0, 736, 0, 0, 0, 737, 0, 0, 0, 738, 0, 0, 0, 739, 0, 0, 740, 0, 0, 0, 741, 0, 0,
    0, 0, 742, 0, 0, 0, 743, 0, 0, 0, 744, 0, 0, 745, 0, 0, 0, 746, 0, 0, 0, 747, 0, 0, 0, 748, 0, 0, 0, 0, 749, 0,
    0, 750, 0, 0, 751, 0, 0, 0, 752, 0, 753, 0, 0, 0, 0, 754, 0, 0, 0, 755, 0, 0, 0, 756, 0, 0, 0, 0, 0, 757, 0, 758,
    0, 0, 759, 0, 0, 0, 760, 0, 0, 0, 761, 0, 0, 0, 762, 0, 0, 0, 763, 0, 0, 0, 764, 0, 0, 0, 765, 0, 0, 0, 766, 0,
    0, 0, 767, 0, 0, 0, 768, 0, 0, 0, 769, 0, 0, 0, 770, 0, 0, 0, 771, 0, 0, 0, 772, 0, 0, 0, 773, 0, 0, 0, 0, 0,
    774, 0, 0, 0, 775, 0, 0, 0, 0, 0, 0, 0, 0, 0, 776, 0, 0, 0, 777, 0, 0, 0, 0, 778, 0, 0, 0, 779, 0, 0, 0, 780,
    0, 0, 0, 781, 0, 0, 0, 0, 782, 0, 0, 0, 783, 0, 0, 0, 784, 0, 0, 0, 785, 0, 0, 786, 0, 0, 0, 787, 0, 788, 0, 789,
    0, 0, 0, 790, 0, 0, 0, 791, 0, 0, 0, 792, 0, 0, 0, 793, 0, 0, 0, 794, 0, 0, 0, 795, 0, 0, 0, 796, 0, 0, 0, 0,
    0, 0, 797, 0, 0, 0, 798, 0, 0, 0, 799, 0, 0, 0, 800, 0, 0, 0, 0, 0, 0, 801, 0, 0, 0, 802, 0, 0, 0, 803, 0, 0,
    0, 804, 0, 0, 0, 805, 0, 0, 0, 806, 0, 0, 0, 807, 0, 0, 808, 0, 0, 0, 809, 0, 0, 810, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 811, 0, 0, 0, 0, 0, 812, 0, 813, 0, 0, 814, 0, 0, 815, 0, 816, 0, 0, 0, 0, 0, 0, 817, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 818, 0, 0, 0, 0, 0, 819, 0, 820, 0, 0, 0, 821, 0, 0, 0, 822, 0, 0, 0, 823, 0, 0, 0, 824,
    0, 0, 825, 0, 0, 826, 0, 0, 0, 827, 0, 0, 828, 0, 0, 0, 829, 0, 0, 0, 830, 0, 0, 0, 831, 0, 0, 0, 832, 0, 0, 0,
    833, 0, 0, 0, 0, 0, 834, 0, 0, 0, 835, 0, 0, 0, 836, 0, 0, 0, 837, 0, 0, 0, 838, 0, 0, 0, 839, 0, 0, 0, 840, 0,
    0, 0, 841, 0, 0, 0, 842, 0, 0, 0, 843, 0, 0, 0, 844, 0, 0, 0, 0, 845, 0, 0, 0, 846, 0, 0, 0, 847, 0, 0, 848, 0,
    0, 0, 849, 0, 0, 0, 850, 0, 0, 0, 851, 0, 0, 0, 852, 0, 0, 853, 0, 854, 0, 855, 0, 0, 0, 856, 0, 0, 0, 857, 0, 0,
    858, 0, 859, 0, 0, 0, 0, 0, 0, 860, 0, 0, 0, 861, 0, 0, 0, 862, 0, 0, 0, 863, 0, 0, 0, 864, 0, 0, 0, 865, 0, 0,
    0, 866, 0, 0, 0, 867, 0, 0, 0, 868, 0, 0, 0, 869, 0, 0, 0, 870, 0, 0, 0, 0, 0, 871, 0, 0, 0, 872, 0, 0, 0, 873,
};
void recomp_unit_0051_entry(Runtime &rt, AllegrexContext &ctx, std::uint16_t direct_entry_id, GuestMemory::AotFastView &aot_mem) {
    std::uint32_t jump_target = 0u;
    std::uint32_t local_transfers = 0u;
    std::uint32_t local_pc = ctx.pc;
    std::uint32_t entry_id = direct_entry_id;
LOCAL_DISPATCH:
    {
    if (entry_id == 0u) {
        const std::uint32_t entry_delta = local_pc - 0x088D0000u;
        entry_id = (entry_delta < 16384u && (entry_delta & 3u) == 0u) ? kEntryIds_recomp_unit_0051[entry_delta >> 2u] : 0u;
    }
    switch (entry_id) {
    case 1u: goto L_088D0000;
    case 2u: goto L_088D000C;
    case 3u: goto L_088D0018;
    case 4u: goto L_088D0040;
    case 5u: goto L_088D0044;
    case 6u: goto L_088D0054;
    case 7u: goto L_088D0064;
    case 8u: goto L_088D0078;
    case 9u: goto L_088D0090;
    case 10u: goto L_088D00A4;
    case 11u: goto L_088D00B8;
    case 12u: goto L_088D00D4;
    case 13u: goto L_088D00FC;
    case 14u: goto L_088D0108;
    case 15u: goto L_088D0110;
    case 16u: goto L_088D0120;
    case 17u: goto L_088D0130;
    case 18u: goto L_088D0140;
    case 19u: goto L_088D014C;
    case 20u: goto L_088D0164;
    case 21u: goto L_088D016C;
    case 22u: goto L_088D0180;
    case 23u: goto L_088D019C;
    case 24u: goto L_088D01A8;
    case 25u: goto L_088D01B0;
    case 26u: goto L_088D01BC;
    case 27u: goto L_088D01C4;
    case 28u: goto L_088D01D8;
    case 29u: goto L_088D01E0;
    case 30u: goto L_088D01E8;
    case 31u: goto L_088D01F4;
    case 32u: goto L_088D0208;
    case 33u: goto L_088D0210;
    case 34u: goto L_088D0230;
    case 35u: goto L_088D023C;
    case 36u: goto L_088D0250;
    case 37u: goto L_088D0270;
    case 38u: goto L_088D027C;
    case 39u: goto L_088D028C;
    case 40u: goto L_088D02A4;
    case 41u: goto L_088D02B8;
    case 42u: goto L_088D02D8;
    case 43u: goto L_088D02E8;
    case 44u: goto L_088D02F0;
    case 45u: goto L_088D0304;
    case 46u: goto L_088D0314;
    case 47u: goto L_088D0324;
    case 48u: goto L_088D0338;
    case 49u: goto L_088D0348;
    case 50u: goto L_088D0358;
    case 51u: goto L_088D0370;
    case 52u: goto L_088D0380;
    case 53u: goto L_088D0398;
    case 54u: goto L_088D03A4;
    case 55u: goto L_088D03A8;
    case 56u: goto L_088D03BC;
    case 57u: goto L_088D03CC;
    case 58u: goto L_088D03F4;
    case 59u: goto L_088D042C;
    case 60u: goto L_088D043C;
    case 61u: goto L_088D044C;
    case 62u: goto L_088D045C;
    case 63u: goto L_088D0464;
    case 64u: goto L_088D0474;
    case 65u: goto L_088D0488;
    case 66u: goto L_088D04B0;
    case 67u: goto L_088D04CC;
    case 68u: goto L_088D04DC;
    case 69u: goto L_088D04F4;
    case 70u: goto L_088D0504;
    case 71u: goto L_088D0518;
    case 72u: goto L_088D0530;
    case 73u: goto L_088D0540;
    case 74u: goto L_088D0548;
    case 75u: goto L_088D0570;
    case 76u: goto L_088D05C8;
    case 77u: goto L_088D05D4;
    case 78u: goto L_088D05E4;
    case 79u: goto L_088D05F4;
    case 80u: goto L_088D05FC;
    case 81u: goto L_088D060C;
    case 82u: goto L_088D061C;
    case 83u: goto L_088D0634;
    case 84u: goto L_088D0650;
    case 85u: goto L_088D0660;
    case 86u: goto L_088D0670;
    case 87u: goto L_088D0688;
    case 88u: goto L_088D06A0;
    case 89u: goto L_088D06B0;
    case 90u: goto L_088D06B8;
    case 91u: goto L_088D06C0;
    case 92u: goto L_088D06E4;
    case 93u: goto L_088D06F4;
    case 94u: goto L_088D0714;
    case 95u: goto L_088D0724;
    case 96u: goto L_088D0734;
    case 97u: goto L_088D074C;
    case 98u: goto L_088D075C;
    case 99u: goto L_088D0770;
    case 100u: goto L_088D0788;
    case 101u: goto L_088D0798;
    case 102u: goto L_088D07D4;
    case 103u: goto L_088D07F8;
    case 104u: goto L_088D0800;
    case 105u: goto L_088D0848;
    case 106u: goto L_088D0858;
    case 107u: goto L_088D0874;
    case 108u: goto L_088D0884;
    case 109u: goto L_088D0894;
    case 110u: goto L_088D08B8;
    case 111u: goto L_088D08C8;
    case 112u: goto L_088D08D4;
    case 113u: goto L_088D08DC;
    case 114u: goto L_088D08E4;
    case 115u: goto L_088D08FC;
    case 116u: goto L_088D0904;
    case 117u: goto L_088D0910;
    case 118u: goto L_088D0920;
    case 119u: goto L_088D0928;
    case 120u: goto L_088D0940;
    case 121u: goto L_088D0948;
    case 122u: goto L_088D0950;
    case 123u: goto L_088D0964;
    case 124u: goto L_088D096C;
    case 125u: goto L_088D0974;
    case 126u: goto L_088D0980;
    case 127u: goto L_088D0990;
    case 128u: goto L_088D09A8;
    case 129u: goto L_088D09B8;
    case 130u: goto L_088D09C8;
    case 131u: goto L_088D09E8;
    case 132u: goto L_088D09F4;
    case 133u: goto L_088D0A08;
    case 134u: goto L_088D0A18;
    case 135u: goto L_088D0A1C;
    case 136u: goto L_088D0A28;
    case 137u: goto L_088D0A30;
    case 138u: goto L_088D0A3C;
    case 139u: goto L_088D0A4C;
    case 140u: goto L_088D0A64;
    case 141u: goto L_088D0A88;
    case 142u: goto L_088D0A98;
    case 143u: goto L_088D0ABC;
    case 144u: goto L_088D0ACC;
    case 145u: goto L_088D0ADC;
    case 146u: goto L_088D0AF4;
    case 147u: goto L_088D0B04;
    case 148u: goto L_088D0B1C;
    case 149u: goto L_088D0B2C;
    case 150u: goto L_088D0B40;
    case 151u: goto L_088D0B5C;
    case 152u: goto L_088D0B74;
    case 153u: goto L_088D0B9C;
    case 154u: goto L_088D0BBC;
    case 155u: goto L_088D0BCC;
    case 156u: goto L_088D0BD4;
    case 157u: goto L_088D0BDC;
    case 158u: goto L_088D0BE8;
    case 159u: goto L_088D0BFC;
    case 160u: goto L_088D0C0C;
    case 161u: goto L_088D0C3C;
    case 162u: goto L_088D0C50;
    case 163u: goto L_088D0C6C;
    case 164u: goto L_088D0C74;
    case 165u: goto L_088D0C8C;
    case 166u: goto L_088D0C98;
    case 167u: goto L_088D0CB8;
    case 168u: goto L_088D0CC8;
    case 169u: goto L_088D0CD8;
    case 170u: goto L_088D0CF8;
    case 171u: goto L_088D0D08;
    case 172u: goto L_088D0D10;
    case 173u: goto L_088D0D18;
    case 174u: goto L_088D0D34;
    case 175u: goto L_088D0D60;
    case 176u: goto L_088D0D8C;
    case 177u: goto L_088D0DB0;
    case 178u: goto L_088D0DB8;
    case 179u: goto L_088D0DCC;
    case 180u: goto L_088D0DE0;
    case 181u: goto L_088D0E08;
    case 182u: goto L_088D0E18;
    case 183u: goto L_088D0E28;
    case 184u: goto L_088D0E30;
    case 185u: goto L_088D0E3C;
    case 186u: goto L_088D0E4C;
    case 187u: goto L_088D0E50;
    case 188u: goto L_088D0E68;
    case 189u: goto L_088D0E78;
    case 190u: goto L_088D0E88;
    case 191u: goto L_088D0E98;
    case 192u: goto L_088D0EB0;
    case 193u: goto L_088D0EC0;
    case 194u: goto L_088D0ED8;
    case 195u: goto L_088D0EE8;
    case 196u: goto L_088D0EFC;
    case 197u: goto L_088D0F18;
    case 198u: goto L_088D0F30;
    case 199u: goto L_088D0F5C;
    case 200u: goto L_088D0F7C;
    case 201u: goto L_088D0F8C;
    case 202u: goto L_088D0F94;
    case 203u: goto L_088D0F9C;
    case 204u: goto L_088D0FA8;
    case 205u: goto L_088D0FBC;
    case 206u: goto L_088D0FCC;
    case 207u: goto L_088D0FFC;
    case 208u: goto L_088D1010;
    case 209u: goto L_088D102C;
    case 210u: goto L_088D1034;
    case 211u: goto L_088D104C;
    case 212u: goto L_088D106C;
    case 213u: goto L_088D107C;
    case 214u: goto L_088D1084;
    case 215u: goto L_088D1090;
    case 216u: goto L_088D1094;
    case 217u: goto L_088D10A0;
    case 218u: goto L_088D10A8;
    case 219u: goto L_088D10B0;
    case 220u: goto L_088D10C0;
    case 221u: goto L_088D10E4;
    case 222u: goto L_088D10F8;
    case 223u: goto L_088D1100;
    case 224u: goto L_088D1108;
    case 225u: goto L_088D1124;
    case 226u: goto L_088D1150;
    case 227u: goto L_088D117C;
    case 228u: goto L_088D11A0;
    case 229u: goto L_088D11A8;
    case 230u: goto L_088D11BC;
    case 231u: goto L_088D11D4;
    case 232u: goto L_088D11FC;
    case 233u: goto L_088D1208;
    case 234u: goto L_088D1218;
    case 235u: goto L_088D1224;
    case 236u: goto L_088D1238;
    case 237u: goto L_088D1244;
    case 238u: goto L_088D126C;
    case 239u: goto L_088D1274;
    case 240u: goto L_088D1284;
    case 241u: goto L_088D1294;
    case 242u: goto L_088D12A4;
    case 243u: goto L_088D12AC;
    case 244u: goto L_088D12B8;
    case 245u: goto L_088D12C8;
    case 246u: goto L_088D12CC;
    case 247u: goto L_088D12E4;
    case 248u: goto L_088D12F0;
    case 249u: goto L_088D12FC;
    case 250u: goto L_088D130C;
    case 251u: goto L_088D131C;
    case 252u: goto L_088D134C;
    case 253u: goto L_088D1364;
    case 254u: goto L_088D136C;
    case 255u: goto L_088D137C;
    case 256u: goto L_088D138C;
    case 257u: goto L_088D13B0;
    case 258u: goto L_088D13B8;
    case 259u: goto L_088D13D4;
    case 260u: goto L_088D13DC;
    case 261u: goto L_088D13E0;
    case 262u: goto L_088D13F4;
    case 263u: goto L_088D13FC;
    case 264u: goto L_088D1408;
    case 265u: goto L_088D142C;
    case 266u: goto L_088D1434;
    case 267u: goto L_088D144C;
    case 268u: goto L_088D1450;
    case 269u: goto L_088D1464;
    case 270u: goto L_088D1468;
    case 271u: goto L_088D1488;
    case 272u: goto L_088D14C8;
    case 273u: goto L_088D14D4;
    case 274u: goto L_088D14E0;
    case 275u: goto L_088D14F4;
    case 276u: goto L_088D14FC;
    case 277u: goto L_088D1504;
    case 278u: goto L_088D1508;
    case 279u: goto L_088D1514;
    case 280u: goto L_088D1520;
    case 281u: goto L_088D1528;
    case 282u: goto L_088D1534;
    case 283u: goto L_088D1544;
    case 284u: goto L_088D155C;
    case 285u: goto L_088D157C;
    case 286u: goto L_088D1588;
    case 287u: goto L_088D15A4;
    case 288u: goto L_088D15AC;
    case 289u: goto L_088D15C4;
    case 290u: goto L_088D15C8;
    case 291u: goto L_088D15E0;
    case 292u: goto L_088D15E8;
    case 293u: goto L_088D15F4;
    case 294u: goto L_088D1608;
    case 295u: goto L_088D1610;
    case 296u: goto L_088D1618;
    case 297u: goto L_088D161C;
    case 298u: goto L_088D1628;
    case 299u: goto L_088D1634;
    case 300u: goto L_088D1644;
    case 301u: goto L_088D165C;
    case 302u: goto L_088D1668;
    case 303u: goto L_088D167C;
    case 304u: goto L_088D1684;
    case 305u: goto L_088D168C;
    case 306u: goto L_088D1690;
    case 307u: goto L_088D1698;
    case 308u: goto L_088D16A4;
    case 309u: goto L_088D16B8;
    case 310u: goto L_088D16C4;
    case 311u: goto L_088D16D0;
    case 312u: goto L_088D16DC;
    case 313u: goto L_088D16F4;
    case 314u: goto L_088D1704;
    case 315u: goto L_088D1718;
    case 316u: goto L_088D1730;
    case 317u: goto L_088D1754;
    case 318u: goto L_088D176C;
    case 319u: goto L_088D1788;
    case 320u: goto L_088D17A0;
    case 321u: goto L_088D17AC;
    case 322u: goto L_088D17B4;
    case 323u: goto L_088D17C0;
    case 324u: goto L_088D17C8;
    case 325u: goto L_088D17D4;
    case 326u: goto L_088D17DC;
    case 327u: goto L_088D17E8;
    case 328u: goto L_088D17F0;
    case 329u: goto L_088D1820;
    case 330u: goto L_088D184C;
    case 331u: goto L_088D1858;
    case 332u: goto L_088D1874;
    case 333u: goto L_088D1894;
    case 334u: goto L_088D18A0;
    case 335u: goto L_088D18AC;
    case 336u: goto L_088D18B8;
    case 337u: goto L_088D18C8;
    case 338u: goto L_088D18D8;
    case 339u: goto L_088D18E0;
    case 340u: goto L_088D18EC;
    case 341u: goto L_088D1904;
    case 342u: goto L_088D1914;
    case 343u: goto L_088D1920;
    case 344u: goto L_088D192C;
    case 345u: goto L_088D1934;
    case 346u: goto L_088D1958;
    case 347u: goto L_088D1980;
    case 348u: goto L_088D1990;
    case 349u: goto L_088D19A0;
    case 350u: goto L_088D19B8;
    case 351u: goto L_088D19C8;
    case 352u: goto L_088D19DC;
    case 353u: goto L_088D19F4;
    case 354u: goto L_088D1A04;
    case 355u: goto L_088D1A28;
    case 356u: goto L_088D1A48;
    case 357u: goto L_088D1A60;
    case 358u: goto L_088D1A78;
    case 359u: goto L_088D1A8C;
    case 360u: goto L_088D1A9C;
    case 361u: goto L_088D1ABC;
    case 362u: goto L_088D1ACC;
    case 363u: goto L_088D1AF4;
    case 364u: goto L_088D1B0C;
    case 365u: goto L_088D1B18;
    case 366u: goto L_088D1B20;
    case 367u: goto L_088D1B24;
    case 368u: goto L_088D1B48;
    case 369u: goto L_088D1B58;
    case 370u: goto L_088D1B74;
    case 371u: goto L_088D1B84;
    case 372u: goto L_088D1B94;
    case 373u: goto L_088D1BA4;
    case 374u: goto L_088D1BAC;
    case 375u: goto L_088D1BB4;
    case 376u: goto L_088D1BD4;
    case 377u: goto L_088D1BE4;
    case 378u: goto L_088D1BFC;
    case 379u: goto L_088D1C0C;
    case 380u: goto L_088D1C20;
    case 381u: goto L_088D1C38;
    case 382u: goto L_088D1C48;
    case 383u: goto L_088D1C70;
    case 384u: goto L_088D1C88;
    case 385u: goto L_088D1C9C;
    case 386u: goto L_088D1CA8;
    case 387u: goto L_088D1CB4;
    case 388u: goto L_088D1CD4;
    case 389u: goto L_088D1CE4;
    case 390u: goto L_088D1D24;
    case 391u: goto L_088D1D34;
    case 392u: goto L_088D1D50;
    case 393u: goto L_088D1D60;
    case 394u: goto L_088D1D70;
    case 395u: goto L_088D1D80;
    case 396u: goto L_088D1D88;
    case 397u: goto L_088D1D90;
    case 398u: goto L_088D1DB0;
    case 399u: goto L_088D1DC0;
    case 400u: goto L_088D1DD8;
    case 401u: goto L_088D1DE8;
    case 402u: goto L_088D1DFC;
    case 403u: goto L_088D1E14;
    case 404u: goto L_088D1E24;
    case 405u: goto L_088D1E4C;
    case 406u: goto L_088D1E64;
    case 407u: goto L_088D1E78;
    case 408u: goto L_088D1E98;
    case 409u: goto L_088D1EA8;
    case 410u: goto L_088D1EE8;
    case 411u: goto L_088D1EF8;
    case 412u: goto L_088D1F14;
    case 413u: goto L_088D1F24;
    case 414u: goto L_088D1F34;
    case 415u: goto L_088D1F48;
    case 416u: goto L_088D1F58;
    case 417u: goto L_088D1F68;
    case 418u: goto L_088D1F78;
    case 419u: goto L_088D1F88;
    case 420u: goto L_088D1FA0;
    case 421u: goto L_088D1FB0;
    case 422u: goto L_088D1FC4;
    case 423u: goto L_088D1FDC;
    case 424u: goto L_088D1FEC;
    case 425u: goto L_088D1FF4;
    case 426u: goto L_088D2014;
    case 427u: goto L_088D2024;
    case 428u: goto L_088D2048;
    case 429u: goto L_088D2058;
    case 430u: goto L_088D207C;
    case 431u: goto L_088D208C;
    case 432u: goto L_088D2094;
    case 433u: goto L_088D209C;
    case 434u: goto L_088D20B4;
    case 435u: goto L_088D20CC;
    case 436u: goto L_088D20DC;
    case 437u: goto L_088D20F4;
    case 438u: goto L_088D2104;
    case 439u: goto L_088D211C;
    case 440u: goto L_088D212C;
    case 441u: goto L_088D2140;
    case 442u: goto L_088D2150;
    case 443u: goto L_088D2160;
    case 444u: goto L_088D2174;
    case 445u: goto L_088D2188;
    case 446u: goto L_088D21B0;
    case 447u: goto L_088D21BC;
    case 448u: goto L_088D21C8;
    case 449u: goto L_088D21D8;
    case 450u: goto L_088D21EC;
    case 451u: goto L_088D21F4;
    case 452u: goto L_088D21FC;
    case 453u: goto L_088D2238;
    case 454u: goto L_088D2250;
    case 455u: goto L_088D2278;
    case 456u: goto L_088D2284;
    case 457u: goto L_088D2290;
    case 458u: goto L_088D22A0;
    case 459u: goto L_088D22B4;
    case 460u: goto L_088D22BC;
    case 461u: goto L_088D22C4;
    case 462u: goto L_088D2300;
    case 463u: goto L_088D2318;
    case 464u: goto L_088D2334;
    case 465u: goto L_088D233C;
    case 466u: goto L_088D2348;
    case 467u: goto L_088D2354;
    case 468u: goto L_088D2368;
    case 469u: goto L_088D2374;
    case 470u: goto L_088D237C;
    case 471u: goto L_088D2388;
    case 472u: goto L_088D2394;
    case 473u: goto L_088D23AC;
    case 474u: goto L_088D23B8;
    case 475u: goto L_088D23C0;
    case 476u: goto L_088D23C4;
    case 477u: goto L_088D23CC;
    case 478u: goto L_088D23E0;
    case 479u: goto L_088D23F8;
    case 480u: goto L_088D240C;
    case 481u: goto L_088D241C;
    case 482u: goto L_088D2428;
    case 483u: goto L_088D2450;
    case 484u: goto L_088D2460;
    case 485u: goto L_088D2470;
    case 486u: goto L_088D2484;
    case 487u: goto L_088D2494;
    case 488u: goto L_088D24AC;
    case 489u: goto L_088D24BC;
    case 490u: goto L_088D24D0;
    case 491u: goto L_088D24F4;
    case 492u: goto L_088D2514;
    case 493u: goto L_088D252C;
    case 494u: goto L_088D2544;
    case 495u: goto L_088D2558;
    case 496u: goto L_088D2568;
    case 497u: goto L_088D2588;
    case 498u: goto L_088D2598;
    case 499u: goto L_088D25D8;
    case 500u: goto L_088D25F8;
    case 501u: goto L_088D2614;
    case 502u: goto L_088D2630;
    case 503u: goto L_088D264C;
    case 504u: goto L_088D2668;
    case 505u: goto L_088D2684;
    case 506u: goto L_088D26A0;
    case 507u: goto L_088D26BC;
    case 508u: goto L_088D26D8;
    case 509u: goto L_088D26F4;
    case 510u: goto L_088D2710;
    case 511u: goto L_088D272C;
    case 512u: goto L_088D2748;
    case 513u: goto L_088D2764;
    case 514u: goto L_088D2780;
    case 515u: goto L_088D2790;
    case 516u: goto L_088D2794;
    case 517u: goto L_088D27A0;
    case 518u: goto L_088D27B0;
    case 519u: goto L_088D27D0;
    case 520u: goto L_088D2804;
    case 521u: goto L_088D2814;
    case 522u: goto L_088D2820;
    case 523u: goto L_088D2828;
    case 524u: goto L_088D283C;
    case 525u: goto L_088D2844;
    case 526u: goto L_088D2850;
    case 527u: goto L_088D285C;
    case 528u: goto L_088D2898;
    case 529u: goto L_088D289C;
    case 530u: goto L_088D28A8;
    case 531u: goto L_088D28B0;
    case 532u: goto L_088D28BC;
    case 533u: goto L_088D28F4;
    case 534u: goto L_088D28F8;
    case 535u: goto L_088D2904;
    case 536u: goto L_088D2918;
    case 537u: goto L_088D2938;
    case 538u: goto L_088D2940;
    case 539u: goto L_088D295C;
    case 540u: goto L_088D2968;
    case 541u: goto L_088D297C;
    case 542u: goto L_088D2984;
    case 543u: goto L_088D298C;
    case 544u: goto L_088D29A8;
    case 545u: goto L_088D29B8;
    case 546u: goto L_088D29DC;
    case 547u: goto L_088D29F4;
    case 548u: goto L_088D2A08;
    case 549u: goto L_088D2A14;
    case 550u: goto L_088D2A3C;
    case 551u: goto L_088D2A5C;
    case 552u: goto L_088D2A78;
    case 553u: goto L_088D2A9C;
    case 554u: goto L_088D2AAC;
    case 555u: goto L_088D2AD0;
    case 556u: goto L_088D2AE8;
    case 557u: goto L_088D2AF0;
    case 558u: goto L_088D2B10;
    case 559u: goto L_088D2B1C;
    case 560u: goto L_088D2B2C;
    case 561u: goto L_088D2B34;
    case 562u: goto L_088D2B48;
    case 563u: goto L_088D2B68;
    case 564u: goto L_088D2B78;
    case 565u: goto L_088D2B90;
    case 566u: goto L_088D2BA8;
    case 567u: goto L_088D2BB4;
    case 568u: goto L_088D2BC8;
    case 569u: goto L_088D2BD0;
    case 570u: goto L_088D2BD8;
    case 571u: goto L_088D2BE0;
    case 572u: goto L_088D2C20;
    case 573u: goto L_088D2C2C;
    case 574u: goto L_088D2C38;
    case 575u: goto L_088D2C44;
    case 576u: goto L_088D2C50;
    case 577u: goto L_088D2C64;
    case 578u: goto L_088D2C6C;
    case 579u: goto L_088D2C74;
    case 580u: goto L_088D2C78;
    case 581u: goto L_088D2C80;
    case 582u: goto L_088D2C8C;
    case 583u: goto L_088D2CA4;
    case 584u: goto L_088D2CB0;
    case 585u: goto L_088D2CC8;
    case 586u: goto L_088D2CD8;
    case 587u: goto L_088D2CF0;
    case 588u: goto L_088D2D0C;
    case 589u: goto L_088D2D28;
    case 590u: goto L_088D2D34;
    case 591u: goto L_088D2D3C;
    case 592u: goto L_088D2D40;
    case 593u: goto L_088D2D68;
    case 594u: goto L_088D2D9C;
    case 595u: goto L_088D2DA8;
    case 596u: goto L_088D2DB8;
    case 597u: goto L_088D2DD0;
    case 598u: goto L_088D2DD8;
    case 599u: goto L_088D2DE8;
    case 600u: goto L_088D2E00;
    case 601u: goto L_088D2E2C;
    case 602u: goto L_088D2E34;
    case 603u: goto L_088D2E40;
    case 604u: goto L_088D2E44;
    case 605u: goto L_088D2E50;
    case 606u: goto L_088D2E54;
    case 607u: goto L_088D2E78;
    case 608u: goto L_088D2EB8;
    case 609u: goto L_088D2EC8;
    case 610u: goto L_088D2ED4;
    case 611u: goto L_088D2EE0;
    case 612u: goto L_088D2EF8;
    case 613u: goto L_088D2F18;
    case 614u: goto L_088D2F24;
    case 615u: goto L_088D2F30;
    case 616u: goto L_088D2F3C;
    case 617u: goto L_088D2F4C;
    case 618u: goto L_088D2F5C;
    case 619u: goto L_088D2F64;
    case 620u: goto L_088D2F70;
    case 621u: goto L_088D2F88;
    case 622u: goto L_088D2F98;
    case 623u: goto L_088D2FA4;
    case 624u: goto L_088D2FB0;
    case 625u: goto L_088D2FB8;
    case 626u: goto L_088D2FDC;
    case 627u: goto L_088D300C;
    case 628u: goto L_088D301C;
    case 629u: goto L_088D3058;
    case 630u: goto L_088D309C;
    case 631u: goto L_088D30C4;
    case 632u: goto L_088D3104;
    case 633u: goto L_088D311C;
    case 634u: goto L_088D3138;
    case 635u: goto L_088D3148;
    case 636u: goto L_088D3158;
    case 637u: goto L_088D3188;
    case 638u: goto L_088D3194;
    case 639u: goto L_088D31A4;
    case 640u: goto L_088D31B0;
    case 641u: goto L_088D31B8;
    case 642u: goto L_088D31C4;
    case 643u: goto L_088D31D8;
    case 644u: goto L_088D31E4;
    case 645u: goto L_088D31F8;
    case 646u: goto L_088D3200;
    case 647u: goto L_088D3208;
    case 648u: goto L_088D320C;
    case 649u: goto L_088D3218;
    case 650u: goto L_088D3224;
    case 651u: goto L_088D3230;
    case 652u: goto L_088D3244;
    case 653u: goto L_088D325C;
    case 654u: goto L_088D326C;
    case 655u: goto L_088D3278;
    case 656u: goto L_088D3284;
    case 657u: goto L_088D328C;
    case 658u: goto L_088D3298;
    case 659u: goto L_088D32A0;
    case 660u: goto L_088D32A4;
    case 661u: goto L_088D32C4;
    case 662u: goto L_088D32CC;
    case 663u: goto L_088D32E4;
    case 664u: goto L_088D32F0;
    case 665u: goto L_088D32F8;
    case 666u: goto L_088D3300;
    case 667u: goto L_088D3310;
    case 668u: goto L_088D331C;
    case 669u: goto L_088D332C;
    case 670u: goto L_088D3338;
    case 671u: goto L_088D3340;
    case 672u: goto L_088D3348;
    case 673u: goto L_088D3354;
    case 674u: goto L_088D335C;
    case 675u: goto L_088D336C;
    case 676u: goto L_088D3378;
    case 677u: goto L_088D3388;
    case 678u: goto L_088D3394;
    case 679u: goto L_088D339C;
    case 680u: goto L_088D33AC;
    case 681u: goto L_088D33C8;
    case 682u: goto L_088D33D8;
    case 683u: goto L_088D33E4;
    case 684u: goto L_088D33EC;
    case 685u: goto L_088D3400;
    case 686u: goto L_088D3410;
    case 687u: goto L_088D341C;
    case 688u: goto L_088D3424;
    case 689u: goto L_088D344C;
    case 690u: goto L_088D345C;
    case 691u: goto L_088D3478;
    case 692u: goto L_088D3494;
    case 693u: goto L_088D34A4;
    case 694u: goto L_088D34AC;
    case 695u: goto L_088D34B4;
    case 696u: goto L_088D34BC;
    case 697u: goto L_088D34C4;
    case 698u: goto L_088D34CC;
    case 699u: goto L_088D34D8;
    case 700u: goto L_088D34E8;
    case 701u: goto L_088D34F8;
    case 702u: goto L_088D3518;
    case 703u: goto L_088D3528;
    case 704u: goto L_088D3538;
    case 705u: goto L_088D3548;
    case 706u: goto L_088D3558;
    case 707u: goto L_088D3568;
    case 708u: goto L_088D3578;
    case 709u: goto L_088D3588;
    case 710u: goto L_088D3598;
    case 711u: goto L_088D35A8;
    case 712u: goto L_088D35B8;
    case 713u: goto L_088D35C8;
    case 714u: goto L_088D35D8;
    case 715u: goto L_088D35F0;
    case 716u: goto L_088D3600;
    case 717u: goto L_088D3610;
    case 718u: goto L_088D3620;
    case 719u: goto L_088D3630;
    case 720u: goto L_088D363C;
    case 721u: goto L_088D364C;
    case 722u: goto L_088D365C;
    case 723u: goto L_088D366C;
    case 724u: goto L_088D367C;
    case 725u: goto L_088D3688;
    case 726u: goto L_088D3694;
    case 727u: goto L_088D36A4;
    case 728u: goto L_088D36B4;
    case 729u: goto L_088D36C0;
    case 730u: goto L_088D36CC;
    case 731u: goto L_088D36E0;
    case 732u: goto L_088D36F0;
    case 733u: goto L_088D3700;
    case 734u: goto L_088D370C;
    case 735u: goto L_088D3718;
    case 736u: goto L_088D3728;
    case 737u: goto L_088D3738;
    case 738u: goto L_088D3748;
    case 739u: goto L_088D3758;
    case 740u: goto L_088D3764;
    case 741u: goto L_088D3774;
    case 742u: goto L_088D3788;
    case 743u: goto L_088D3798;
    case 744u: goto L_088D37A8;
    case 745u: goto L_088D37B4;
    case 746u: goto L_088D37C4;
    case 747u: goto L_088D37D4;
    case 748u: goto L_088D37E4;
    case 749u: goto L_088D37F8;
    case 750u: goto L_088D3804;
    case 751u: goto L_088D3810;
    case 752u: goto L_088D3820;
    case 753u: goto L_088D3828;
    case 754u: goto L_088D383C;
    case 755u: goto L_088D384C;
    case 756u: goto L_088D385C;
    case 757u: goto L_088D3874;
    case 758u: goto L_088D387C;
    case 759u: goto L_088D3888;
    case 760u: goto L_088D3898;
    case 761u: goto L_088D38A8;
    case 762u: goto L_088D38B8;
    case 763u: goto L_088D38C8;
    case 764u: goto L_088D38D8;
    case 765u: goto L_088D38E8;
    case 766u: goto L_088D38F8;
    case 767u: goto L_088D3908;
    case 768u: goto L_088D3918;
    case 769u: goto L_088D3928;
    case 770u: goto L_088D3938;
    case 771u: goto L_088D3948;
    case 772u: goto L_088D3958;
    case 773u: goto L_088D3968;
    case 774u: goto L_088D3980;
    case 775u: goto L_088D3990;
    case 776u: goto L_088D39B8;
    case 777u: goto L_088D39C8;
    case 778u: goto L_088D39DC;
    case 779u: goto L_088D39EC;
    case 780u: goto L_088D39FC;
    case 781u: goto L_088D3A0C;
    case 782u: goto L_088D3A20;
    case 783u: goto L_088D3A30;
    case 784u: goto L_088D3A40;
    case 785u: goto L_088D3A50;
    case 786u: goto L_088D3A5C;
    case 787u: goto L_088D3A6C;
    case 788u: goto L_088D3A74;
    case 789u: goto L_088D3A7C;
    case 790u: goto L_088D3A8C;
    case 791u: goto L_088D3A9C;
    case 792u: goto L_088D3AAC;
    case 793u: goto L_088D3ABC;
    case 794u: goto L_088D3ACC;
    case 795u: goto L_088D3ADC;
    case 796u: goto L_088D3AEC;
    case 797u: goto L_088D3B08;
    case 798u: goto L_088D3B18;
    case 799u: goto L_088D3B28;
    case 800u: goto L_088D3B38;
    case 801u: goto L_088D3B54;
    case 802u: goto L_088D3B64;
    case 803u: goto L_088D3B74;
    case 804u: goto L_088D3B84;
    case 805u: goto L_088D3B94;
    case 806u: goto L_088D3BA4;
    case 807u: goto L_088D3BB4;
    case 808u: goto L_088D3BC0;
    case 809u: goto L_088D3BD0;
    case 810u: goto L_088D3BDC;
    case 811u: goto L_088D3C0C;
    case 812u: goto L_088D3C24;
    case 813u: goto L_088D3C2C;
    case 814u: goto L_088D3C38;
    case 815u: goto L_088D3C44;
    case 816u: goto L_088D3C4C;
    case 817u: goto L_088D3C68;
    case 818u: goto L_088D3C9C;
    case 819u: goto L_088D3CB4;
    case 820u: goto L_088D3CBC;
    case 821u: goto L_088D3CCC;
    case 822u: goto L_088D3CDC;
    case 823u: goto L_088D3CEC;
    case 824u: goto L_088D3CFC;
    case 825u: goto L_088D3D08;
    case 826u: goto L_088D3D14;
    case 827u: goto L_088D3D24;
    case 828u: goto L_088D3D30;
    case 829u: goto L_088D3D40;
    case 830u: goto L_088D3D50;
    case 831u: goto L_088D3D60;
    case 832u: goto L_088D3D70;
    case 833u: goto L_088D3D80;
    case 834u: goto L_088D3D98;
    case 835u: goto L_088D3DA8;
    case 836u: goto L_088D3DB8;
    case 837u: goto L_088D3DC8;
    case 838u: goto L_088D3DD8;
    case 839u: goto L_088D3DE8;
    case 840u: goto L_088D3DF8;
    case 841u: goto L_088D3E08;
    case 842u: goto L_088D3E18;
    case 843u: goto L_088D3E28;
    case 844u: goto L_088D3E38;
    case 845u: goto L_088D3E4C;
    case 846u: goto L_088D3E5C;
    case 847u: goto L_088D3E6C;
    case 848u: goto L_088D3E78;
    case 849u: goto L_088D3E88;
    case 850u: goto L_088D3E98;
    case 851u: goto L_088D3EA8;
    case 852u: goto L_088D3EB8;
    case 853u: goto L_088D3EC4;
    case 854u: goto L_088D3ECC;
    case 855u: goto L_088D3ED4;
    case 856u: goto L_088D3EE4;
    case 857u: goto L_088D3EF4;
    case 858u: goto L_088D3F00;
    case 859u: goto L_088D3F08;
    case 860u: goto L_088D3F24;
    case 861u: goto L_088D3F34;
    case 862u: goto L_088D3F44;
    case 863u: goto L_088D3F54;
    case 864u: goto L_088D3F64;
    case 865u: goto L_088D3F74;
    case 866u: goto L_088D3F84;
    case 867u: goto L_088D3F94;
    case 868u: goto L_088D3FA4;
    case 869u: goto L_088D3FB4;
    case 870u: goto L_088D3FC4;
    case 871u: goto L_088D3FDC;
    case 872u: goto L_088D3FEC;
    case 873u: goto L_088D3FFC;
    default:
        if (local_transfers == 0u) rt.unsupported(ctx.pc, 0u, "invalid internal function entry");
        else ctx.pc = local_pc;
        return;
    }
    }
L_088D0000:
    ctx.set_gpr(10, 0u + static_cast<std::uint32_t>(1));
    ctx.set_gpr(31, 0x088D000Cu);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0119_entry, 119u, 283u, 0x089E1824u>(ctx, &aot_mem) && ctx.pc == 0x088D000Cu) goto L_088D000C;
    return;
L_088D000C:
    rt.memory().aot_store32(ctx.gpr[18] + static_cast<std::uint32_t>(36), ctx.gpr[2]);
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_088D0044;
      }
      goto L_088D0018;
    }
L_088D0018:
    ctx.set_gpr(2, rt.memory().aot_load32(ctx.gpr[18] + static_cast<std::uint32_t>(48)));
    ctx.set_gpr(7, rt.memory().aot_load32(ctx.gpr[2] + static_cast<std::uint32_t>(44)));
    ctx.set_gpr(6, rt.memory().aot_load32(ctx.gpr[2] + static_cast<std::uint32_t>(12)));
    ctx.set_gpr(5, rt.memory().aot_load32(ctx.gpr[2] + static_cast<std::uint32_t>(8)));
    ctx.set_gpr(4, ctx.gpr[17] + 0u);
    ctx.set_gpr(8, 0u + static_cast<std::uint32_t>(3));
    ctx.set_gpr(9, 0u + 0u);
    ctx.set_gpr(10, 0u + static_cast<std::uint32_t>(1));
    ctx.set_gpr(31, 0x088D0040u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0119_entry, 119u, 283u, 0x089E1824u>(ctx, &aot_mem) && ctx.pc == 0x088D0040u) goto L_088D0040;
    return;
L_088D0040:
    rt.memory().aot_store32(ctx.gpr[18] + static_cast<std::uint32_t>(36), ctx.gpr[2]);
    goto L_088D0044;
L_088D0044:
    ctx.set_gpr(4, ctx.gpr[18] + static_cast<std::uint32_t>(12));
    ctx.set_gpr(5, ctx.gpr[17] + 0u);
    ctx.set_gpr(31, 0x088D0054u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0085_entry, 85u, 61u, 0x089584C4u>(ctx, &aot_mem) && ctx.pc == 0x088D0054u) goto L_088D0054;
    return;
L_088D0054:
    ctx.set_gpr(3, rt.memory().aot_load32(ctx.gpr[18] + static_cast<std::uint32_t>(44)));
    ctx.set_gpr(2, 0u + static_cast<std::uint32_t>(2));
    { const bool branch_taken = ctx.gpr[3] != ctx.gpr[2];
    // nop
      if (branch_taken) {
          goto L_088D0078;
      }
      goto L_088D0064;
    }
L_088D0064:
    ctx.set_gpr(4, ctx.gpr[17] + 0u);
    ctx.set_gpr(5, rt.memory().aot_load32(ctx.gpr[18] + static_cast<std::uint32_t>(36)));
    ctx.set_gpr(6, rt.memory().aot_load32(ctx.gpr[18] + static_cast<std::uint32_t>(68)));
    ctx.set_gpr(31, 0x088D0078u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0119_entry, 119u, 487u, 0x089E2D80u>(ctx, &aot_mem) && ctx.pc == 0x088D0078u) goto L_088D0078;
    return;
L_088D0078:
    ctx.set_gpr(6, rt.memory().aot_load32(ctx.gpr[18] + static_cast<std::uint32_t>(28)));
    ctx.set_gpr(7, rt.memory().aot_load32(ctx.gpr[18] + static_cast<std::uint32_t>(32)));
    ctx.set_gpr(4, ctx.gpr[17] + 0u);
    ctx.set_gpr(5, rt.memory().aot_load32(ctx.gpr[18] + static_cast<std::uint32_t>(36)));
    ctx.set_gpr(31, 0x088D0090u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0119_entry, 119u, 492u, 0x089E2E08u>(ctx, &aot_mem) && ctx.pc == 0x088D0090u) goto L_088D0090;
    return;
L_088D0090:
    ctx.set_gpr(6, rt.memory().aot_load32(ctx.gpr[18] + static_cast<std::uint32_t>(24)));
    ctx.set_gpr(4, ctx.gpr[17] + 0u);
    ctx.set_gpr(5, rt.memory().aot_load32(ctx.gpr[18] + static_cast<std::uint32_t>(36)));
    ctx.set_gpr(31, 0x088D00A4u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0119_entry, 119u, 498u, 0x089E2EB8u>(ctx, &aot_mem) && ctx.pc == 0x088D00A4u) goto L_088D00A4;
    return;
L_088D00A4:
    ctx.set_gpr(6, rt.memory().aot_load32(ctx.gpr[18] + static_cast<std::uint32_t>(20)));
    ctx.set_gpr(4, ctx.gpr[17] + 0u);
    ctx.set_gpr(5, rt.memory().aot_load32(ctx.gpr[18] + static_cast<std::uint32_t>(36)));
    ctx.set_gpr(31, 0x088D00B8u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0119_entry, 119u, 502u, 0x089E2F34u>(ctx, &aot_mem) && ctx.pc == 0x088D00B8u) goto L_088D00B8;
    return;
L_088D00B8:
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
L_088D00D4:
    ctx.set_gpr(29, ctx.gpr[29] + static_cast<std::uint32_t>(-32));
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(12), ctx.gpr[31]);
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(8), ctx.gpr[18]);
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(4), ctx.gpr[17]);
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(0), ctx.gpr[16]);
    ctx.set_gpr(16, ctx.gpr[4] + 0u);
    ctx.set_gpr(18, ctx.gpr[5] + 0u);
    ctx.set_gpr(17, ctx.gpr[6] + 0u);
    { const bool branch_taken = ctx.gpr[17] != 0u;
    // nop
      if (branch_taken) {
          goto L_088D0110;
      }
      goto L_088D00FC;
    }
L_088D00FC:
    ctx.set_gpr(4, ctx.gpr[16] + static_cast<std::uint32_t>(48));
    ctx.set_gpr(31, 0x088D0108u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0085_entry, 85u, 61u, 0x089584C4u>(ctx, &aot_mem) && ctx.pc == 0x088D0108u) goto L_088D0108;
    return;
L_088D0108:
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_088D0180;
      }
      goto L_088D0110;
    }
L_088D0110:
    ctx.set_gpr(4, rt.memory().aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(64)));
    ctx.set_gpr(2, rt.memory().aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(8)));
    { const bool branch_taken = ctx.gpr[2] != 0u;
    // nop
      if (branch_taken) {
          goto L_088D0130;
      }
      goto L_088D0120;
    }
L_088D0120:
    ctx.set_gpr(2, rt.memory().aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(60)));
    ctx.set_gpr(5, ctx.gpr[2] + static_cast<std::uint32_t>(-1));
    ctx.set_gpr(31, 0x088D0130u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0081_entry, 81u, 312u, 0x089495E8u>(ctx, &aot_mem) && ctx.pc == 0x088D0130u) goto L_088D0130;
    return;
L_088D0130:
    ctx.set_gpr(16, rt.memory().aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(64)));
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(28), ctx.gpr[18]);
    { const bool branch_taken = ctx.gpr[18] == 0u;
    // nop
      if (branch_taken) {
          goto L_088D014C;
      }
      goto L_088D0140;
    }
L_088D0140:
    ctx.set_gpr(4, ctx.gpr[18] + 0u);
    ctx.set_gpr(31, 0x088D014Cu);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0014_entry, 14u, 274u, 0x0883D588u>(ctx, &aot_mem) && ctx.pc == 0x088D014Cu) goto L_088D014C;
    return;
L_088D014C:
    ctx.set_gpr(3, ctx.gpr[17] << 2u);
    ctx.set_gpr(2, rt.memory().aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(16)));
    ctx.set_gpr(2, ctx.gpr[2] + ctx.gpr[3]);
    ctx.set_gpr(4, rt.memory().aot_load32(ctx.gpr[2] + static_cast<std::uint32_t>(-4)));
    { const bool branch_taken = ctx.gpr[4] == 0u;
    // nop
      if (branch_taken) {
          goto L_088D016C;
      }
      goto L_088D0164;
    }
L_088D0164:
    ctx.set_gpr(31, 0x088D016Cu);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0014_entry, 14u, 257u, 0x0883D454u>(ctx, &aot_mem) && ctx.pc == 0x088D016Cu) goto L_088D016C;
    return;
L_088D016C:
    ctx.set_gpr(5, ctx.gpr[17] + static_cast<std::uint32_t>(-1));
    ctx.set_gpr(4, ctx.gpr[16] + 0u);
    ctx.set_gpr(6, ctx.gpr[29] + static_cast<std::uint32_t>(28));
    ctx.set_gpr(31, 0x088D0180u);
    // nop
    goto L_088D019C;
L_088D0180:
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
L_088D019C:
    ctx.set_gpr(3, rt.memory().aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(8)));
    { const bool branch_taken = ctx.gpr[3] == 0u;
    // nop
      if (branch_taken) {
          goto L_088D01D8;
      }
      goto L_088D01A8;
    }
L_088D01A8:
    { const bool branch_taken = static_cast<std::int32_t>(ctx.gpr[5]) < 0;
    // nop
      if (branch_taken) {
          goto L_088D01BC;
      }
      goto L_088D01B0;
    }
L_088D01B0:
    ctx.set_gpr(3, static_cast<std::int32_t>(ctx.gpr[5]) < static_cast<std::int32_t>(ctx.gpr[3]) ? 1u : 0u);
    { const bool branch_taken = ctx.gpr[3] != 0u;
    // nop
      if (branch_taken) {
          goto L_088D01C4;
      }
      goto L_088D01BC;
    }
L_088D01BC:
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_088D01D8;
      }
      goto L_088D01C4;
    }
L_088D01C4:
    ctx.set_gpr(6, rt.memory().aot_load32(ctx.gpr[6] + static_cast<std::uint32_t>(0)));
    ctx.set_gpr(5, ctx.gpr[5] << 2u);
    ctx.set_gpr(3, rt.memory().aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(16)));
    ctx.set_gpr(3, ctx.gpr[3] + ctx.gpr[5]);
    rt.memory().aot_store32(ctx.gpr[3] + static_cast<std::uint32_t>(0), ctx.gpr[6]);
    goto L_088D01D8;
L_088D01D8:
    jump_target = ctx.gpr[31];
    // nop
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_088D01E0:
    { const bool branch_taken = ctx.gpr[5] != 0u;
    // nop
      if (branch_taken) {
          goto L_088D01F4;
      }
      goto L_088D01E8;
    }
L_088D01E8:
    ctx.set_gpr(2, rt.memory().aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(48)));
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_088D0208;
      }
      goto L_088D01F4;
    }
L_088D01F4:
    ctx.set_gpr(2, rt.memory().aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(64)));
    ctx.set_gpr(3, ctx.gpr[5] << 2u);
    ctx.set_gpr(2, rt.memory().aot_load32(ctx.gpr[2] + static_cast<std::uint32_t>(16)));
    ctx.set_gpr(2, ctx.gpr[2] + ctx.gpr[3]);
    ctx.set_gpr(2, rt.memory().aot_load32(ctx.gpr[2] + static_cast<std::uint32_t>(-4)));
    goto L_088D0208;
L_088D0208:
    jump_target = ctx.gpr[31];
    // nop
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_088D0210:
    ctx.set_gpr(29, ctx.gpr[29] + static_cast<std::uint32_t>(-16));
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(12), ctx.gpr[31]);
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(8), ctx.gpr[16]);
    ctx.set_gpr(16, ctx.gpr[4] + 0u);
    ctx.set_gpr(25, rt.memory().aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(0)));
    ctx.set_gpr(25, rt.memory().aot_load32(ctx.gpr[25] + static_cast<std::uint32_t>(112)));
    jump_target = ctx.gpr[25];
    ctx.set_gpr(31, 0x088D0230u);
    // nop
    ctx.pc = jump_target;
    if (rt.invoke_chained_call(ctx, &aot_mem) && ctx.pc == 0x088D0230u) goto L_088D0230;
    return;
L_088D0230:
    ctx.set_gpr(4, ctx.gpr[16] + 0u);
    ctx.set_gpr(31, 0x088D023Cu);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0080_entry, 80u, 435u, 0x08945EF4u>(ctx, &aot_mem) && ctx.pc == 0x088D023Cu) goto L_088D023C;
    return;
L_088D023C:
    ctx.set_gpr(31, rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(12)));
    ctx.set_gpr(16, rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(8)));
    ctx.set_gpr(29, ctx.gpr[29] + static_cast<std::uint32_t>(16));
    jump_target = ctx.gpr[31];
    // nop
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_088D0250:
    ctx.set_gpr(29, ctx.gpr[29] + static_cast<std::uint32_t>(-16));
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(12), ctx.gpr[31]);
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(8), ctx.gpr[16]);
    ctx.set_gpr(16, ctx.gpr[4] + 0u);
    ctx.set_gpr(5, rt.memory().aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(36)));
    ctx.set_gpr(2, 0u + static_cast<std::uint32_t>(-1));
    { const bool branch_taken = ctx.gpr[5] == ctx.gpr[2];
    // nop
      if (branch_taken) {
          goto L_088D028C;
      }
      goto L_088D0270;
    }
L_088D0270:
    ctx.set_gpr(4, rt.memory().aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(12)));
    { const bool branch_taken = ctx.gpr[4] == 0u;
    // nop
      if (branch_taken) {
          goto L_088D028C;
      }
      goto L_088D027C;
    }
L_088D027C:
    ctx.set_gpr(25, rt.memory().aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(0)));
    ctx.set_gpr(25, rt.memory().aot_load32(ctx.gpr[25] + static_cast<std::uint32_t>(516)));
    jump_target = ctx.gpr[25];
    ctx.set_gpr(31, 0x088D028Cu);
    // nop
    ctx.pc = jump_target;
    if (rt.invoke_chained_call(ctx, &aot_mem) && ctx.pc == 0x088D028Cu) goto L_088D028C;
    return;
L_088D028C:
    ctx.set_gpr(2, 0u + static_cast<std::uint32_t>(-1));
    rt.memory().aot_store32(ctx.gpr[16] + static_cast<std::uint32_t>(36), ctx.gpr[2]);
    ctx.set_gpr(4, ctx.gpr[16] + static_cast<std::uint32_t>(12));
    ctx.set_gpr(5, 0u + 0u);
    ctx.set_gpr(31, 0x088D02A4u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0085_entry, 85u, 61u, 0x089584C4u>(ctx, &aot_mem) && ctx.pc == 0x088D02A4u) goto L_088D02A4;
    return;
L_088D02A4:
    ctx.set_gpr(31, rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(12)));
    ctx.set_gpr(16, rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(8)));
    ctx.set_gpr(29, ctx.gpr[29] + static_cast<std::uint32_t>(16));
    jump_target = ctx.gpr[31];
    // nop
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_088D02B8:
    ctx.set_gpr(29, ctx.gpr[29] + static_cast<std::uint32_t>(-16));
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(12), ctx.gpr[31]);
    ctx.set_gpr(4, ctx.gpr[5] + 0u);
    ctx.set_gpr(5, 0u + static_cast<std::uint32_t>(8));
    ctx.set_gpr(25, rt.memory().aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(0)));
    ctx.set_gpr(25, rt.memory().aot_load32(ctx.gpr[25] + static_cast<std::uint32_t>(92)));
    jump_target = ctx.gpr[25];
    ctx.set_gpr(31, 0x088D02D8u);
    // nop
    ctx.pc = jump_target;
    if (rt.invoke_chained_call(ctx, &aot_mem) && ctx.pc == 0x088D02D8u) goto L_088D02D8;
    return;
L_088D02D8:
    ctx.set_gpr(31, rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(12)));
    ctx.set_gpr(29, ctx.gpr[29] + static_cast<std::uint32_t>(16));
    jump_target = ctx.gpr[31];
    // nop
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_088D02E8:
    jump_target = ctx.gpr[31];
    // nop
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_088D02F0:
    ctx.set_gpr(29, ctx.gpr[29] + static_cast<std::uint32_t>(-16));
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(12), ctx.gpr[31]);
    ctx.set_gpr(4, rt.memory().aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(12)));
    { const bool branch_taken = ctx.gpr[4] == 0u;
    // nop
      if (branch_taken) {
          goto L_088D0314;
      }
      goto L_088D0304;
    }
L_088D0304:
    ctx.set_gpr(25, rt.memory().aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(0)));
    ctx.set_gpr(25, rt.memory().aot_load32(ctx.gpr[25] + static_cast<std::uint32_t>(112)));
    jump_target = ctx.gpr[25];
    ctx.set_gpr(31, 0x088D0314u);
    // nop
    ctx.pc = jump_target;
    if (rt.invoke_chained_call(ctx, &aot_mem) && ctx.pc == 0x088D0314u) goto L_088D0314;
    return;
L_088D0314:
    ctx.set_gpr(31, rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(12)));
    ctx.set_gpr(29, ctx.gpr[29] + static_cast<std::uint32_t>(16));
    jump_target = ctx.gpr[31];
    // nop
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_088D0324:
    ctx.set_gpr(29, ctx.gpr[29] + static_cast<std::uint32_t>(-16));
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(12), ctx.gpr[31]);
    ctx.set_gpr(4, rt.memory().aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(12)));
    { const bool branch_taken = ctx.gpr[4] == 0u;
    // nop
      if (branch_taken) {
          goto L_088D0348;
      }
      goto L_088D0338;
    }
L_088D0338:
    ctx.set_gpr(25, rt.memory().aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(0)));
    ctx.set_gpr(25, rt.memory().aot_load32(ctx.gpr[25] + static_cast<std::uint32_t>(116)));
    jump_target = ctx.gpr[25];
    ctx.set_gpr(31, 0x088D0348u);
    // nop
    ctx.pc = jump_target;
    if (rt.invoke_chained_call(ctx, &aot_mem) && ctx.pc == 0x088D0348u) goto L_088D0348;
    return;
L_088D0348:
    ctx.set_gpr(31, rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(12)));
    ctx.set_gpr(29, ctx.gpr[29] + static_cast<std::uint32_t>(16));
    jump_target = ctx.gpr[31];
    // nop
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_088D0358:
    ctx.set_gpr(29, ctx.gpr[29] + static_cast<std::uint32_t>(-16));
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(12), ctx.gpr[31]);
    ctx.set_gpr(25, rt.memory().aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(0)));
    ctx.set_gpr(25, rt.memory().aot_load32(ctx.gpr[25] + static_cast<std::uint32_t>(96)));
    jump_target = ctx.gpr[25];
    ctx.set_gpr(31, 0x088D0370u);
    // nop
    ctx.pc = jump_target;
    if (rt.invoke_chained_call(ctx, &aot_mem) && ctx.pc == 0x088D0370u) goto L_088D0370;
    return;
L_088D0370:
    ctx.set_gpr(31, rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(12)));
    ctx.set_gpr(29, ctx.gpr[29] + static_cast<std::uint32_t>(16));
    jump_target = ctx.gpr[31];
    // nop
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_088D0380:
    ctx.set_gpr(29, ctx.gpr[29] + static_cast<std::uint32_t>(-16));
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(12), ctx.gpr[31]);
    ctx.set_gpr(3, ctx.gpr[4] + 0u);
    ctx.set_gpr(2, rt.memory().aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(12)));
    { const bool branch_taken = ctx.gpr[2] == 0u;
    // nop
      if (branch_taken) {
          goto L_088D03A4;
      }
      goto L_088D0398;
    }
L_088D0398:
    ctx.set_gpr(2, rt.memory().aot_load32(ctx.gpr[2] + static_cast<std::uint32_t>(36)));
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_088D03A8;
      }
      goto L_088D03A4;
    }
L_088D03A4:
    ctx.set_gpr(2, 0u + static_cast<std::uint32_t>(-1));
    goto L_088D03A8;
L_088D03A8:
    ctx.set_gpr(4, ctx.gpr[5] + 0u);
    ctx.set_gpr(5, ctx.gpr[2] + 0u);
    ctx.set_gpr(6, rt.memory().aot_load32(ctx.gpr[3] + static_cast<std::uint32_t>(16)));
    ctx.set_gpr(31, 0x088D03BCu);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0119_entry, 119u, 367u, 0x089E242Cu>(ctx, &aot_mem) && ctx.pc == 0x088D03BCu) goto L_088D03BC;
    return;
L_088D03BC:
    ctx.set_gpr(31, rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(12)));
    ctx.set_gpr(29, ctx.gpr[29] + static_cast<std::uint32_t>(16));
    jump_target = ctx.gpr[31];
    // nop
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_088D03CC:
    ctx.set_gpr(29, ctx.gpr[29] + static_cast<std::uint32_t>(-16));
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(12), ctx.gpr[31]);
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(8), ctx.gpr[18]);
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(4), ctx.gpr[17]);
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(0), ctx.gpr[16]);
    ctx.set_gpr(17, ctx.gpr[4] + 0u);
    ctx.set_gpr(16, ctx.gpr[5] + 0u);
    ctx.set_gpr(4, rt.memory().aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(12)));
    { const bool branch_taken = ctx.gpr[4] == 0u;
    // nop
      if (branch_taken) {
          goto L_088D04B0;
      }
      goto L_088D03F4;
    }
L_088D03F4:
    ctx.set_gpr(2, 2245u << 16u);
    ctx.set_gpr(7, rt.memory().aot_load32(ctx.gpr[2] + static_cast<std::uint32_t>(26144)));
    ctx.set_gpr(2, 2245u << 16u);
    ctx.set_gpr(3, rt.memory().aot_load32(ctx.gpr[2] + static_cast<std::uint32_t>(26148)));
    ctx.set_gpr(6, ctx.gpr[7] + static_cast<std::uint32_t>(1));
    ctx.set_gpr(2, ctx.gpr[6] < ctx.gpr[7] ? 1u : 0u);
    ctx.set_gpr(3, ctx.gpr[2] + ctx.gpr[3]);
    ctx.set_gpr(2, 2245u << 16u);
    rt.memory().aot_store32(ctx.gpr[2] + static_cast<std::uint32_t>(26144), ctx.gpr[6]);
    ctx.set_gpr(2, 2245u << 16u);
    rt.memory().aot_store32(ctx.gpr[2] + static_cast<std::uint32_t>(26148), ctx.gpr[3]);
    ctx.set_gpr(18, rt.memory().aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(36)));
    { const bool branch_taken = static_cast<std::int32_t>(ctx.gpr[18]) >= 0;
    // nop
      if (branch_taken) {
          goto L_088D0464;
      }
      goto L_088D042C;
    }
L_088D042C:
    ctx.set_gpr(25, rt.memory().aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(0)));
    ctx.set_gpr(25, rt.memory().aot_load32(ctx.gpr[25] + static_cast<std::uint32_t>(96)));
    jump_target = ctx.gpr[25];
    ctx.set_gpr(31, 0x088D043Cu);
    // nop
    ctx.pc = jump_target;
    if (rt.invoke_chained_call(ctx, &aot_mem) && ctx.pc == 0x088D043Cu) goto L_088D043C;
    return;
L_088D043C:
    ctx.set_gpr(3, rt.memory().aot_load32(ctx.gpr[17] + static_cast<std::uint32_t>(12)));
    ctx.set_gpr(5, rt.memory().aot_load32(ctx.gpr[3] + static_cast<std::uint32_t>(36)));
    { const bool branch_taken = static_cast<std::int32_t>(ctx.gpr[5]) < 0;
    // nop
      if (branch_taken) {
          goto L_088D04B0;
      }
      goto L_088D044C;
    }
L_088D044C:
    ctx.set_gpr(4, ctx.gpr[16] + 0u);
    ctx.set_gpr(6, rt.memory().aot_load32(ctx.gpr[17] + static_cast<std::uint32_t>(16)));
    ctx.set_gpr(31, 0x088D045Cu);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0119_entry, 119u, 367u, 0x089E242Cu>(ctx, &aot_mem) && ctx.pc == 0x088D045Cu) goto L_088D045C;
    return;
L_088D045C:
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_088D04B0;
      }
      goto L_088D0464;
    }
L_088D0464:
    ctx.set_gpr(3, rt.memory().aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(44)));
    ctx.set_gpr(2, 0u + static_cast<std::uint32_t>(2));
    { const bool branch_taken = ctx.gpr[3] != ctx.gpr[2];
    // nop
      if (branch_taken) {
          goto L_088D0488;
      }
      goto L_088D0474;
    }
L_088D0474:
    ctx.set_gpr(6, rt.memory().aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(68)));
    ctx.set_gpr(4, ctx.gpr[16] + 0u);
    ctx.set_gpr(5, ctx.gpr[18] + 0u);
    ctx.set_gpr(31, 0x088D0488u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0119_entry, 119u, 487u, 0x089E2D80u>(ctx, &aot_mem) && ctx.pc == 0x088D0488u) goto L_088D0488;
    return;
L_088D0488:
    ctx.set_gpr(2, rt.memory().aot_load32(ctx.gpr[17] + static_cast<std::uint32_t>(12)));
    ctx.set_gpr(10, rt.memory().aot_load32(ctx.gpr[2] + static_cast<std::uint32_t>(20)));
    ctx.set_gpr(9, rt.memory().aot_load32(ctx.gpr[2] + static_cast<std::uint32_t>(24)));
    ctx.set_gpr(8, rt.memory().aot_load32(ctx.gpr[2] + static_cast<std::uint32_t>(32)));
    ctx.set_gpr(7, rt.memory().aot_load32(ctx.gpr[2] + static_cast<std::uint32_t>(28)));
    ctx.set_gpr(4, ctx.gpr[16] + 0u);
    ctx.set_gpr(5, ctx.gpr[18] + 0u);
    ctx.set_gpr(6, rt.memory().aot_load32(ctx.gpr[17] + static_cast<std::uint32_t>(16)));
    ctx.set_gpr(31, 0x088D04B0u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0119_entry, 119u, 507u, 0x089E2FBCu>(ctx, &aot_mem) && ctx.pc == 0x088D04B0u) goto L_088D04B0;
    return;
L_088D04B0:
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
L_088D04CC:
    ctx.set_gpr(3, rt.memory().aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(16)));
    rt.memory().aot_store16(ctx.gpr[4] + static_cast<std::uint32_t>(10), static_cast<std::uint16_t>(ctx.gpr[3]));
    jump_target = ctx.gpr[31];
    // nop
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_088D04DC:
    ctx.set_gpr(29, ctx.gpr[29] + static_cast<std::uint32_t>(-16));
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(12), ctx.gpr[31]);
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(8), ctx.gpr[16]);
    ctx.set_gpr(16, ctx.gpr[4] + 0u);
    ctx.set_gpr(31, 0x088D04F4u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0048_entry, 48u, 154u, 0x088C4F18u>(ctx, &aot_mem) && ctx.pc == 0x088D04F4u) goto L_088D04F4;
    return;
L_088D04F4:
    ctx.set_gpr(5, static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int16_t>(rt.memory().aot_load16(ctx.gpr[16] + static_cast<std::uint32_t>(16))))));
    ctx.set_gpr(4, ctx.gpr[16] + 0u);
    ctx.set_gpr(31, 0x088D0504u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0048_entry, 48u, 153u, 0x088C4F0Cu>(ctx, &aot_mem) && ctx.pc == 0x088D0504u) goto L_088D0504;
    return;
L_088D0504:
    ctx.set_gpr(31, rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(12)));
    ctx.set_gpr(16, rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(8)));
    ctx.set_gpr(29, ctx.gpr[29] + static_cast<std::uint32_t>(16));
    jump_target = ctx.gpr[31];
    // nop
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_088D0518:
    ctx.set_gpr(29, ctx.gpr[29] + static_cast<std::uint32_t>(-16));
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(12), ctx.gpr[31]);
    ctx.set_gpr(2, static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int16_t>(ctx.gpr[5]))));
    rt.memory().aot_store32(ctx.gpr[4] + static_cast<std::uint32_t>(16), ctx.gpr[2]);
    ctx.set_gpr(31, 0x088D0530u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0048_entry, 48u, 153u, 0x088C4F0Cu>(ctx, &aot_mem) && ctx.pc == 0x088D0530u) goto L_088D0530;
    return;
L_088D0530:
    ctx.set_gpr(31, rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(12)));
    ctx.set_gpr(29, ctx.gpr[29] + static_cast<std::uint32_t>(16));
    jump_target = ctx.gpr[31];
    // nop
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_088D0540:
    jump_target = ctx.gpr[31];
    // nop
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_088D0548:
    ctx.set_gpr(29, ctx.gpr[29] + static_cast<std::uint32_t>(-16));
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(12), ctx.gpr[31]);
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(8), ctx.gpr[17]);
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(4), ctx.gpr[16]);
    ctx.set_gpr(17, ctx.gpr[4] + 0u);
    ctx.set_gpr(16, ctx.gpr[5] + 0u);
    ctx.set_gpr(4, ctx.gpr[16] + 0u);
    ctx.set_gpr(5, 0u + static_cast<std::uint32_t>(4));
    ctx.set_gpr(31, 0x088D0570u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0047_entry, 47u, 670u, 0x088C3CA8u>(ctx, &aot_mem) && ctx.pc == 0x088D0570u) goto L_088D0570;
    return;
L_088D0570:
    ctx.set_gpr(2, 0u + static_cast<std::uint32_t>(32));
    rt.memory().aot_store32(ctx.gpr[16] + static_cast<std::uint32_t>(0), ctx.gpr[2]);
    ctx.set_gpr(2, rt.memory().aot_load32(ctx.gpr[17] + static_cast<std::uint32_t>(12)));
    ctx.set_gpr(2, rt.memory().aot_load32(ctx.gpr[2] + static_cast<std::uint32_t>(36)));
    rt.memory().aot_store32(ctx.gpr[16] + static_cast<std::uint32_t>(132), ctx.gpr[2]);
    ctx.set_gpr(2, static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int16_t>(rt.memory().aot_load16(ctx.gpr[17] + static_cast<std::uint32_t>(16))))));
    rt.memory().aot_store32(ctx.gpr[16] + static_cast<std::uint32_t>(136), ctx.gpr[2]);
    ctx.set_gpr(2, rt.memory().aot_load32(ctx.gpr[17] + static_cast<std::uint32_t>(12)));
    ctx.set_gpr(2, rt.memory().aot_load32(ctx.gpr[2] + static_cast<std::uint32_t>(28)));
    rt.memory().aot_store8(ctx.gpr[16] + static_cast<std::uint32_t>(5), static_cast<std::uint8_t>(ctx.gpr[2]));
    ctx.set_gpr(2, rt.memory().aot_load32(ctx.gpr[17] + static_cast<std::uint32_t>(12)));
    ctx.set_gpr(2, rt.memory().aot_load32(ctx.gpr[2] + static_cast<std::uint32_t>(32)));
    rt.memory().aot_store8(ctx.gpr[16] + static_cast<std::uint32_t>(6), static_cast<std::uint8_t>(ctx.gpr[2]));
    ctx.set_gpr(2, rt.memory().aot_load32(ctx.gpr[17] + static_cast<std::uint32_t>(12)));
    ctx.set_gpr(2, rt.memory().aot_load32(ctx.gpr[2] + static_cast<std::uint32_t>(24)));
    rt.memory().aot_store8(ctx.gpr[16] + static_cast<std::uint32_t>(7), static_cast<std::uint8_t>(ctx.gpr[2]));
    ctx.set_gpr(2, rt.memory().aot_load32(ctx.gpr[17] + static_cast<std::uint32_t>(12)));
    ctx.set_gpr(2, rt.memory().aot_load32(ctx.gpr[2] + static_cast<std::uint32_t>(20)));
    rt.memory().aot_store8(ctx.gpr[16] + static_cast<std::uint32_t>(8), static_cast<std::uint8_t>(ctx.gpr[2]));
    ctx.set_gpr(3, rt.memory().aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(320)));
    { const bool branch_taken = ctx.gpr[3] == 0u;
    // nop
      if (branch_taken) {
          goto L_088D05D4;
      }
      goto L_088D05C8;
    }
L_088D05C8:
    ctx.set_gpr(2, rt.memory().aot_load32(ctx.gpr[3] + static_cast<std::uint32_t>(12)));
    ctx.set_gpr(2, ctx.gpr[2] + static_cast<std::uint32_t>(1));
    rt.memory().aot_store32(ctx.gpr[3] + static_cast<std::uint32_t>(12), ctx.gpr[2]);
    goto L_088D05D4;
L_088D05D4:
    ctx.set_gpr(2, rt.memory().aot_load32(ctx.gpr[17] + static_cast<std::uint32_t>(12)));
    ctx.set_gpr(2, rt.memory().aot_load32(ctx.gpr[2] + static_cast<std::uint32_t>(44)));
    { const bool branch_taken = ctx.gpr[2] != 0u;
    // nop
      if (branch_taken) {
          goto L_088D05FC;
      }
      goto L_088D05E4;
    }
L_088D05E4:
    ctx.set_gpr(4, ctx.gpr[16] + 0u);
    ctx.set_gpr(5, 0u + static_cast<std::uint32_t>(37));
    ctx.set_gpr(31, 0x088D05F4u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0047_entry, 47u, 678u, 0x088C3D30u>(ctx, &aot_mem) && ctx.pc == 0x088D05F4u) goto L_088D05F4;
    return;
L_088D05F4:
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_088D061C;
      }
      goto L_088D05FC;
    }
L_088D05FC:
    ctx.set_gpr(3, rt.memory().aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(296)));
    ctx.set_gpr(2, 0u + static_cast<std::uint32_t>(1));
    { const bool branch_taken = ctx.gpr[3] != ctx.gpr[2];
    // nop
      if (branch_taken) {
          goto L_088D061C;
      }
      goto L_088D060C;
    }
L_088D060C:
    ctx.set_gpr(4, ctx.gpr[16] + 0u);
    ctx.set_gpr(5, 0u + static_cast<std::uint32_t>(2));
    ctx.set_gpr(31, 0x088D061Cu);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0047_entry, 47u, 678u, 0x088C3D30u>(ctx, &aot_mem) && ctx.pc == 0x088D061Cu) goto L_088D061C;
    return;
L_088D061C:
    ctx.set_gpr(2, 0u + static_cast<std::uint32_t>(1));
    rt.memory().aot_store8(ctx.gpr[16] + static_cast<std::uint32_t>(316), static_cast<std::uint8_t>(ctx.gpr[2]));
    ctx.set_gpr(4, ctx.gpr[16] + 0u);
    ctx.set_gpr(5, ctx.gpr[17] + 0u);
    ctx.set_gpr(31, 0x088D0634u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0047_entry, 47u, 682u, 0x088C3DC0u>(ctx, &aot_mem) && ctx.pc == 0x088D0634u) goto L_088D0634;
    return;
L_088D0634:
    ctx.set_gpr(2, 0u + static_cast<std::uint32_t>(1));
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
L_088D0650:
    ctx.set_gpr(29, ctx.gpr[29] + static_cast<std::uint32_t>(-16));
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(12), ctx.gpr[31]);
    ctx.set_gpr(31, 0x088D0660u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0048_entry, 48u, 167u, 0x088C501Cu>(ctx, &aot_mem) && ctx.pc == 0x088D0660u) goto L_088D0660;
    return;
L_088D0660:
    ctx.set_gpr(31, rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(12)));
    ctx.set_gpr(29, ctx.gpr[29] + static_cast<std::uint32_t>(16));
    jump_target = ctx.gpr[31];
    // nop
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_088D0670:
    ctx.set_gpr(29, ctx.gpr[29] + static_cast<std::uint32_t>(-16));
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(12), ctx.gpr[31]);
    ctx.set_gpr(8, ctx.gpr[4] + 0u);
    ctx.set_gpr(3, rt.memory().aot_load32(ctx.gpr[5] + static_cast<std::uint32_t>(360)));
    { const bool branch_taken = ctx.gpr[3] == 0u;
    // nop
      if (branch_taken) {
          goto L_088D06A0;
      }
      goto L_088D0688;
    }
L_088D0688:
    ctx.set_gpr(6, rt.memory().aot_load32(ctx.gpr[8] + static_cast<std::uint32_t>(24)));
    ctx.set_gpr(7, static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int16_t>(rt.memory().aot_load16(ctx.gpr[8] + static_cast<std::uint32_t>(16))))));
    ctx.set_gpr(4, ctx.gpr[5] + 0u);
    ctx.set_gpr(5, ctx.gpr[8] + static_cast<std::uint32_t>(20));
    ctx.set_gpr(31, 0x088D06A0u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0119_entry, 119u, 575u, 0x089E3A94u>(ctx, &aot_mem) && ctx.pc == 0x088D06A0u) goto L_088D06A0;
    return;
L_088D06A0:
    ctx.set_gpr(31, rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(12)));
    ctx.set_gpr(29, ctx.gpr[29] + static_cast<std::uint32_t>(16));
    jump_target = ctx.gpr[31];
    // nop
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_088D06B0:
    jump_target = ctx.gpr[31];
    // nop
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_088D06B8:
    jump_target = ctx.gpr[31];
    // nop
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_088D06C0:
    ctx.set_gpr(29, ctx.gpr[29] + static_cast<std::uint32_t>(-16));
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(12), ctx.gpr[31]);
    ctx.set_gpr(2, ctx.gpr[4] + 0u);
    ctx.set_gpr(6, rt.memory().aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(12)));
    ctx.set_gpr(4, ctx.gpr[5] + 0u);
    ctx.set_gpr(5, rt.memory().aot_load32(ctx.gpr[2] + static_cast<std::uint32_t>(20)));
    ctx.set_gpr(7, rt.memory().aot_load32(ctx.gpr[2] + static_cast<std::uint32_t>(16)));
    ctx.set_gpr(31, 0x088D06E4u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0119_entry, 119u, 521u, 0x089E315Cu>(ctx, &aot_mem) && ctx.pc == 0x088D06E4u) goto L_088D06E4;
    return;
L_088D06E4:
    ctx.set_gpr(31, rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(12)));
    ctx.set_gpr(29, ctx.gpr[29] + static_cast<std::uint32_t>(16));
    jump_target = ctx.gpr[31];
    // nop
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_088D06F4:
    ctx.set_gpr(29, ctx.gpr[29] + static_cast<std::uint32_t>(-16));
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(12), ctx.gpr[31]);
    ctx.set_gpr(4, ctx.gpr[5] + 0u);
    ctx.set_gpr(5, 0u + static_cast<std::uint32_t>(8));
    ctx.set_gpr(25, rt.memory().aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(0)));
    ctx.set_gpr(25, rt.memory().aot_load32(ctx.gpr[25] + static_cast<std::uint32_t>(92)));
    jump_target = ctx.gpr[25];
    ctx.set_gpr(31, 0x088D0714u);
    // nop
    ctx.pc = jump_target;
    if (rt.invoke_chained_call(ctx, &aot_mem) && ctx.pc == 0x088D0714u) goto L_088D0714;
    return;
L_088D0714:
    ctx.set_gpr(31, rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(12)));
    ctx.set_gpr(29, ctx.gpr[29] + static_cast<std::uint32_t>(16));
    jump_target = ctx.gpr[31];
    // nop
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_088D0724:
    ctx.set_gpr(3, rt.memory().aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(20)));
    rt.memory().aot_store16(ctx.gpr[4] + static_cast<std::uint32_t>(10), static_cast<std::uint16_t>(ctx.gpr[3]));
    jump_target = ctx.gpr[31];
    // nop
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_088D0734:
    ctx.set_gpr(29, ctx.gpr[29] + static_cast<std::uint32_t>(-16));
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(12), ctx.gpr[31]);
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(8), ctx.gpr[16]);
    ctx.set_gpr(16, ctx.gpr[4] + 0u);
    ctx.set_gpr(31, 0x088D074Cu);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0048_entry, 48u, 154u, 0x088C4F18u>(ctx, &aot_mem) && ctx.pc == 0x088D074Cu) goto L_088D074C;
    return;
L_088D074C:
    ctx.set_gpr(5, static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int16_t>(rt.memory().aot_load16(ctx.gpr[16] + static_cast<std::uint32_t>(20))))));
    ctx.set_gpr(4, ctx.gpr[16] + 0u);
    ctx.set_gpr(31, 0x088D075Cu);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0048_entry, 48u, 153u, 0x088C4F0Cu>(ctx, &aot_mem) && ctx.pc == 0x088D075Cu) goto L_088D075C;
    return;
L_088D075C:
    ctx.set_gpr(31, rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(12)));
    ctx.set_gpr(16, rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(8)));
    ctx.set_gpr(29, ctx.gpr[29] + static_cast<std::uint32_t>(16));
    jump_target = ctx.gpr[31];
    // nop
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_088D0770:
    ctx.set_gpr(29, ctx.gpr[29] + static_cast<std::uint32_t>(-16));
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(12), ctx.gpr[31]);
    ctx.set_gpr(2, static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int16_t>(ctx.gpr[5]))));
    rt.memory().aot_store32(ctx.gpr[4] + static_cast<std::uint32_t>(20), ctx.gpr[2]);
    ctx.set_gpr(31, 0x088D0788u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0048_entry, 48u, 153u, 0x088C4F0Cu>(ctx, &aot_mem) && ctx.pc == 0x088D0788u) goto L_088D0788;
    return;
L_088D0788:
    ctx.set_gpr(31, rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(12)));
    ctx.set_gpr(29, ctx.gpr[29] + static_cast<std::uint32_t>(16));
    jump_target = ctx.gpr[31];
    // nop
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_088D0798:
    ctx.set_gpr(29, ctx.gpr[29] + static_cast<std::uint32_t>(-32));
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(12), ctx.gpr[31]);
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(8), ctx.gpr[16]);
    ctx.set_gpr(16, ctx.gpr[4] + 0u);
    ctx.set_gpr(3, ctx.gpr[5] + 0u);
    ctx.set_gpr(2, rt.memory().aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(12)));
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(28), ctx.gpr[2]);
    ctx.set_gpr(4, ctx.gpr[3] + 0u);
    ctx.set_gpr(5, rt.memory().aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(20)));
    ctx.set_gpr(6, ctx.gpr[29] + static_cast<std::uint32_t>(28));
    ctx.set_gpr(7, ctx.gpr[29] + static_cast<std::uint32_t>(24));
    ctx.set_gpr(25, rt.memory().aot_load32(ctx.gpr[3] + static_cast<std::uint32_t>(0)));
    ctx.set_gpr(25, rt.memory().aot_load32(ctx.gpr[25] + static_cast<std::uint32_t>(620)));
    jump_target = ctx.gpr[25];
    ctx.set_gpr(31, 0x088D07D4u);
    // nop
    ctx.pc = jump_target;
    if (rt.invoke_chained_call(ctx, &aot_mem) && ctx.pc == 0x088D07D4u) goto L_088D07D4;
    return;
L_088D07D4:
    ctx.set_gpr(3, rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(28)));
    rt.memory().aot_store32(ctx.gpr[16] + static_cast<std::uint32_t>(12), ctx.gpr[3]);
    ctx.set_gpr(3, rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(24)));
    rt.memory().aot_store32(ctx.gpr[16] + static_cast<std::uint32_t>(16), ctx.gpr[3]);
    ctx.set_gpr(31, rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(12)));
    ctx.set_gpr(16, rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(8)));
    ctx.set_gpr(29, ctx.gpr[29] + static_cast<std::uint32_t>(32));
    jump_target = ctx.gpr[31];
    // nop
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_088D07F8:
    jump_target = ctx.gpr[31];
    // nop
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_088D0800:
    ctx.set_gpr(29, ctx.gpr[29] + static_cast<std::uint32_t>(-16));
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(12), ctx.gpr[31]);
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(8), ctx.gpr[17]);
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(4), ctx.gpr[16]);
    ctx.set_gpr(17, ctx.gpr[4] + 0u);
    ctx.set_gpr(16, ctx.gpr[5] + 0u);
    ctx.set_gpr(2, 0u + static_cast<std::uint32_t>(42));
    rt.memory().aot_store32(ctx.gpr[5] + static_cast<std::uint32_t>(0), ctx.gpr[2]);
    ctx.set_gpr(2, static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int16_t>(rt.memory().aot_load16(ctx.gpr[4] + static_cast<std::uint32_t>(20))))));
    rt.memory().aot_store8(ctx.gpr[5] + static_cast<std::uint32_t>(5), static_cast<std::uint8_t>(ctx.gpr[2]));
    ctx.set_gpr(2, rt.memory().aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(12)));
    rt.memory().aot_store8(ctx.gpr[5] + static_cast<std::uint32_t>(6), static_cast<std::uint8_t>(ctx.gpr[2]));
    ctx.set_gpr(2, rt.memory().aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(16)));
    rt.memory().aot_store8(ctx.gpr[5] + static_cast<std::uint32_t>(7), static_cast<std::uint8_t>(ctx.gpr[2]));
    ctx.set_gpr(4, ctx.gpr[16] + 0u);
    ctx.set_gpr(5, 0u + static_cast<std::uint32_t>(38));
    ctx.set_gpr(31, 0x088D0848u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0047_entry, 47u, 678u, 0x088C3D30u>(ctx, &aot_mem) && ctx.pc == 0x088D0848u) goto L_088D0848;
    return;
L_088D0848:
    ctx.set_gpr(4, ctx.gpr[16] + 0u);
    ctx.set_gpr(5, ctx.gpr[17] + 0u);
    ctx.set_gpr(31, 0x088D0858u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0047_entry, 47u, 682u, 0x088C3DC0u>(ctx, &aot_mem) && ctx.pc == 0x088D0858u) goto L_088D0858;
    return;
L_088D0858:
    ctx.set_gpr(2, 0u + static_cast<std::uint32_t>(1));
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
L_088D0874:
    ctx.set_gpr(29, ctx.gpr[29] + static_cast<std::uint32_t>(-16));
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(12), ctx.gpr[31]);
    ctx.set_gpr(31, 0x088D0884u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0048_entry, 48u, 167u, 0x088C501Cu>(ctx, &aot_mem) && ctx.pc == 0x088D0884u) goto L_088D0884;
    return;
L_088D0884:
    ctx.set_gpr(31, rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(12)));
    ctx.set_gpr(29, ctx.gpr[29] + static_cast<std::uint32_t>(16));
    jump_target = ctx.gpr[31];
    // nop
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_088D0894:
    ctx.set_gpr(29, ctx.gpr[29] + static_cast<std::uint32_t>(-16));
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(12), ctx.gpr[31]);
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(8), ctx.gpr[17]);
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(4), ctx.gpr[16]);
    ctx.set_gpr(17, ctx.gpr[4] + 0u);
    ctx.set_gpr(16, ctx.gpr[5] + 0u);
    ctx.set_gpr(8, rt.memory().aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(36)));
    { const bool branch_taken = static_cast<std::int32_t>(ctx.gpr[8]) >= 0;
    // nop
      if (branch_taken) {
          goto L_088D0980;
      }
      goto L_088D08B8;
    }
L_088D08B8:
    ctx.set_gpr(7, rt.memory().aot_load32(ctx.gpr[17] + static_cast<std::uint32_t>(96)));
    ctx.set_gpr(6, 0u + static_cast<std::uint32_t>(2));
    { const bool branch_taken = ctx.gpr[7] == ctx.gpr[6];
    // nop
      if (branch_taken) {
          goto L_088D096C;
      }
      goto L_088D08C8;
    }
L_088D08C8:
    ctx.set_gpr(3, 0u + static_cast<std::uint32_t>(1));
    { const bool branch_taken = ctx.gpr[7] == ctx.gpr[3];
    // nop
      if (branch_taken) {
          goto L_088D0948;
      }
      goto L_088D08D4;
    }
L_088D08D4:
    { const bool branch_taken = ctx.gpr[7] == 0u;
    // nop
      if (branch_taken) {
          goto L_088D08E4;
      }
      goto L_088D08DC;
    }
L_088D08DC:
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_088D0974;
      }
      goto L_088D08E4;
    }
L_088D08E4:
    ctx.set_gpr(4, ctx.gpr[16] + 0u);
    ctx.set_gpr(5, 0u + static_cast<std::uint32_t>(21));
    ctx.set_gpr(25, rt.memory().aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(0)));
    ctx.set_gpr(25, rt.memory().aot_load32(ctx.gpr[25] + static_cast<std::uint32_t>(116)));
    jump_target = ctx.gpr[25];
    ctx.set_gpr(31, 0x088D08FCu);
    // nop
    ctx.pc = jump_target;
    if (rt.invoke_chained_call(ctx, &aot_mem) && ctx.pc == 0x088D08FCu) goto L_088D08FC;
    return;
L_088D08FC:
    { const bool branch_taken = ctx.gpr[2] == 0u;
    // nop
      if (branch_taken) {
          goto L_088D0920;
      }
      goto L_088D0904;
    }
L_088D0904:
    ctx.set_gpr(2, rt.memory().aot_load32(ctx.gpr[17] + static_cast<std::uint32_t>(72)));
    { const bool branch_taken = ctx.gpr[2] == 0u;
    // nop
      if (branch_taken) {
          goto L_088D0920;
      }
      goto L_088D0910;
    }
L_088D0910:
    ctx.set_gpr(2, 0u + static_cast<std::uint32_t>(1));
    rt.memory().aot_store32(ctx.gpr[17] + static_cast<std::uint32_t>(96), ctx.gpr[2]);
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_088D0928;
      }
      goto L_088D0920;
    }
L_088D0920:
    ctx.set_gpr(2, 0u + static_cast<std::uint32_t>(2));
    rt.memory().aot_store32(ctx.gpr[17] + static_cast<std::uint32_t>(96), ctx.gpr[2]);
    goto L_088D0928;
L_088D0928:
    ctx.set_gpr(4, ctx.gpr[17] + 0u);
    ctx.set_gpr(5, ctx.gpr[16] + 0u);
    ctx.set_gpr(25, rt.memory().aot_load32(ctx.gpr[17] + static_cast<std::uint32_t>(0)));
    ctx.set_gpr(25, rt.memory().aot_load32(ctx.gpr[25] + static_cast<std::uint32_t>(96)));
    jump_target = ctx.gpr[25];
    ctx.set_gpr(31, 0x088D0940u);
    // nop
    ctx.pc = jump_target;
    if (rt.invoke_chained_call(ctx, &aot_mem) && ctx.pc == 0x088D0940u) goto L_088D0940;
    return;
L_088D0940:
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_088D0974;
      }
      goto L_088D0948;
    }
L_088D0948:
    { const bool branch_taken = static_cast<std::int32_t>(ctx.gpr[8]) >= 0;
    // nop
      if (branch_taken) {
          goto L_088D0974;
      }
      goto L_088D0950;
    }
L_088D0950:
    rt.memory().aot_store32(ctx.gpr[17] + static_cast<std::uint32_t>(96), ctx.gpr[6]);
    ctx.set_gpr(25, rt.memory().aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(0)));
    ctx.set_gpr(25, rt.memory().aot_load32(ctx.gpr[25] + static_cast<std::uint32_t>(96)));
    jump_target = ctx.gpr[25];
    ctx.set_gpr(31, 0x088D0964u);
    // nop
    ctx.pc = jump_target;
    if (rt.invoke_chained_call(ctx, &aot_mem) && ctx.pc == 0x088D0964u) goto L_088D0964;
    return;
L_088D0964:
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_088D0974;
      }
      goto L_088D096C;
    }
L_088D096C:
    ctx.set_gpr(31, 0x088D0974u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0050_entry, 50u, 774u, 0x088CFEF4u>(ctx, &aot_mem) && ctx.pc == 0x088D0974u) goto L_088D0974;
    return;
L_088D0974:
    ctx.set_gpr(3, rt.memory().aot_load32(ctx.gpr[17] + static_cast<std::uint32_t>(36)));
    { const bool branch_taken = static_cast<std::int32_t>(ctx.gpr[3]) < 0;
    // nop
      if (branch_taken) {
          goto L_088D0990;
      }
      goto L_088D0980;
    }
L_088D0980:
    ctx.set_gpr(4, ctx.gpr[17] + 0u);
    ctx.set_gpr(5, ctx.gpr[16] + 0u);
    ctx.set_gpr(31, 0x088D0990u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0050_entry, 50u, 774u, 0x088CFEF4u>(ctx, &aot_mem) && ctx.pc == 0x088D0990u) goto L_088D0990;
    return;
L_088D0990:
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
L_088D09A8:
    ctx.set_gpr(29, ctx.gpr[29] + static_cast<std::uint32_t>(-16));
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(12), ctx.gpr[31]);
    ctx.set_gpr(31, 0x088D09B8u);
    // nop
    goto L_088D0210;
L_088D09B8:
    ctx.set_gpr(31, rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(12)));
    ctx.set_gpr(29, ctx.gpr[29] + static_cast<std::uint32_t>(16));
    jump_target = ctx.gpr[31];
    // nop
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_088D09C8:
    ctx.set_gpr(29, ctx.gpr[29] + static_cast<std::uint32_t>(-16));
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(12), ctx.gpr[31]);
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(8), ctx.gpr[17]);
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(4), ctx.gpr[16]);
    ctx.set_gpr(16, ctx.gpr[4] + 0u);
    ctx.set_gpr(3, 0u + static_cast<std::uint32_t>(1));
    { const bool branch_taken = ctx.gpr[5] != ctx.gpr[3];
    // nop
      if (branch_taken) {
          goto L_088D0A30;
      }
      goto L_088D09E8;
    }
L_088D09E8:
    ctx.set_gpr(17, 0u + 0u);
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_088D0A1C;
      }
      goto L_088D09F4;
    }
L_088D09F4:
    ctx.set_gpr(3, ctx.gpr[17] << 2u);
    ctx.set_gpr(4, ctx.gpr[3] + ctx.gpr[16]);
    ctx.set_gpr(3, rt.memory().aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(72)));
    { const bool branch_taken = ctx.gpr[3] == 0u;
    // nop
      if (branch_taken) {
          goto L_088D0A18;
      }
      goto L_088D0A08;
    }
L_088D0A08:
    ctx.set_gpr(4, ctx.gpr[4] + static_cast<std::uint32_t>(72));
    ctx.set_gpr(5, 0u + 0u);
    ctx.set_gpr(31, 0x088D0A18u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0085_entry, 85u, 61u, 0x089584C4u>(ctx, &aot_mem) && ctx.pc == 0x088D0A18u) goto L_088D0A18;
    return;
L_088D0A18:
    ctx.set_gpr(17, ctx.gpr[17] + static_cast<std::uint32_t>(1));
    goto L_088D0A1C;
L_088D0A1C:
    ctx.set_gpr(3, static_cast<std::int32_t>(ctx.gpr[17]) < 6 ? 1u : 0u);
    { const bool branch_taken = ctx.gpr[3] != 0u;
    // nop
      if (branch_taken) {
          goto L_088D09F4;
      }
      goto L_088D0A28;
    }
L_088D0A28:
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_088D0A4C;
      }
      goto L_088D0A30;
    }
L_088D0A30:
    ctx.set_gpr(3, 0u + static_cast<std::uint32_t>(2));
    { const bool branch_taken = ctx.gpr[5] != ctx.gpr[3];
    // nop
      if (branch_taken) {
          goto L_088D0A4C;
      }
      goto L_088D0A3C;
    }
L_088D0A3C:
    ctx.set_gpr(5, 0u + 0u);
    ctx.set_gpr(6, 0u + 0u);
    ctx.set_gpr(31, 0x088D0A4Cu);
    // nop
    goto L_088D00D4;
L_088D0A4C:
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
L_088D0A64:
    ctx.set_gpr(29, ctx.gpr[29] + static_cast<std::uint32_t>(-16));
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(12), ctx.gpr[31]);
    ctx.set_gpr(2, ctx.gpr[4] + 0u);
    ctx.set_gpr(4, ctx.gpr[5] + 0u);
    ctx.set_gpr(5, ctx.gpr[2] + static_cast<std::uint32_t>(16));
    ctx.set_gpr(6, ctx.gpr[2] + static_cast<std::uint32_t>(12));
    ctx.set_gpr(7, static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int16_t>(rt.memory().aot_load16(ctx.gpr[2] + static_cast<std::uint32_t>(10))))));
    ctx.set_gpr(31, 0x088D0A88u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0119_entry, 119u, 574u, 0x089E3A8Cu>(ctx, &aot_mem) && ctx.pc == 0x088D0A88u) goto L_088D0A88;
    return;
L_088D0A88:
    ctx.set_gpr(31, rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(12)));
    ctx.set_gpr(29, ctx.gpr[29] + static_cast<std::uint32_t>(16));
    jump_target = ctx.gpr[31];
    // nop
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_088D0A98:
    ctx.set_gpr(29, ctx.gpr[29] + static_cast<std::uint32_t>(-16));
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(12), ctx.gpr[31]);
    ctx.set_gpr(2, ctx.gpr[4] + 0u);
    ctx.set_gpr(4, ctx.gpr[5] + 0u);
    ctx.set_gpr(5, rt.memory().aot_load32(ctx.gpr[2] + static_cast<std::uint32_t>(16)));
    ctx.set_gpr(6, rt.memory().aot_load32(ctx.gpr[2] + static_cast<std::uint32_t>(12)));
    ctx.set_gpr(7, static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int16_t>(rt.memory().aot_load16(ctx.gpr[2] + static_cast<std::uint32_t>(10))))));
    ctx.set_gpr(31, 0x088D0ABCu);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0119_entry, 119u, 573u, 0x089E3A84u>(ctx, &aot_mem) && ctx.pc == 0x088D0ABCu) goto L_088D0ABC;
    return;
L_088D0ABC:
    ctx.set_gpr(31, rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(12)));
    ctx.set_gpr(29, ctx.gpr[29] + static_cast<std::uint32_t>(16));
    jump_target = ctx.gpr[31];
    // nop
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_088D0ACC:
    ctx.set_gpr(3, rt.memory().aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(16)));
    rt.memory().aot_store16(ctx.gpr[4] + static_cast<std::uint32_t>(10), static_cast<std::uint16_t>(ctx.gpr[3]));
    jump_target = ctx.gpr[31];
    // nop
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_088D0ADC:
    ctx.set_gpr(29, ctx.gpr[29] + static_cast<std::uint32_t>(-16));
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(12), ctx.gpr[31]);
    ctx.set_gpr(2, static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int16_t>(ctx.gpr[5]))));
    rt.memory().aot_store32(ctx.gpr[4] + static_cast<std::uint32_t>(16), ctx.gpr[2]);
    ctx.set_gpr(31, 0x088D0AF4u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0048_entry, 48u, 153u, 0x088C4F0Cu>(ctx, &aot_mem) && ctx.pc == 0x088D0AF4u) goto L_088D0AF4;
    return;
L_088D0AF4:
    ctx.set_gpr(31, rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(12)));
    ctx.set_gpr(29, ctx.gpr[29] + static_cast<std::uint32_t>(16));
    jump_target = ctx.gpr[31];
    // nop
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_088D0B04:
    ctx.set_gpr(29, ctx.gpr[29] + static_cast<std::uint32_t>(-16));
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(12), ctx.gpr[31]);
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(8), ctx.gpr[16]);
    ctx.set_gpr(16, ctx.gpr[4] + 0u);
    ctx.set_gpr(31, 0x088D0B1Cu);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0048_entry, 48u, 154u, 0x088C4F18u>(ctx, &aot_mem) && ctx.pc == 0x088D0B1Cu) goto L_088D0B1C;
    return;
L_088D0B1C:
    ctx.set_gpr(5, static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int16_t>(rt.memory().aot_load16(ctx.gpr[16] + static_cast<std::uint32_t>(16))))));
    ctx.set_gpr(4, ctx.gpr[16] + 0u);
    ctx.set_gpr(31, 0x088D0B2Cu);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0048_entry, 48u, 153u, 0x088C4F0Cu>(ctx, &aot_mem) && ctx.pc == 0x088D0B2Cu) goto L_088D0B2C;
    return;
L_088D0B2C:
    ctx.set_gpr(31, rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(12)));
    ctx.set_gpr(16, rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(8)));
    ctx.set_gpr(29, ctx.gpr[29] + static_cast<std::uint32_t>(16));
    jump_target = ctx.gpr[31];
    // nop
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_088D0B40:
    ctx.set_gpr(4, 2202u << 16u);
    ctx.set_gpr(4, ctx.gpr[4] + static_cast<std::uint32_t>(-9236));
    ctx.set_gpr(3, 2245u << 16u);
    ctx.set_gpr(3, rt.memory().aot_load32(ctx.gpr[3] + static_cast<std::uint32_t>(23884)));
    rt.memory().aot_store32(ctx.gpr[3] + static_cast<std::uint32_t>(48), ctx.gpr[4]);
    jump_target = ctx.gpr[31];
    // nop
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_088D0B5C:
    ctx.set_gpr(29, ctx.gpr[29] + static_cast<std::uint32_t>(-16));
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(12), ctx.gpr[31]);
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(8), ctx.gpr[16]);
    ctx.set_gpr(16, ctx.gpr[4] + 0u);
    ctx.set_gpr(31, 0x088D0B74u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0080_entry, 80u, 434u, 0x08945EECu>(ctx, &aot_mem) && ctx.pc == 0x088D0B74u) goto L_088D0B74;
    return;
L_088D0B74:
    ctx.set_gpr(3, 0u + static_cast<std::uint32_t>(3));
    rt.memory().aot_store32(ctx.gpr[16] + static_cast<std::uint32_t>(20), ctx.gpr[3]);
    rt.memory().aot_store32(ctx.gpr[16] + static_cast<std::uint32_t>(24), 0u);
    ctx.set_gpr(3, 0u + static_cast<std::uint32_t>(2));
    rt.memory().aot_store32(ctx.gpr[16] + static_cast<std::uint32_t>(28), ctx.gpr[3]);
    ctx.set_gpr(31, rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(12)));
    ctx.set_gpr(16, rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(8)));
    ctx.set_gpr(29, ctx.gpr[29] + static_cast<std::uint32_t>(16));
    jump_target = ctx.gpr[31];
    // nop
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_088D0B9C:
    ctx.set_gpr(29, ctx.gpr[29] + static_cast<std::uint32_t>(-16));
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(12), ctx.gpr[31]);
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(8), ctx.gpr[16]);
    ctx.set_gpr(16, ctx.gpr[4] + 0u);
    ctx.set_gpr(25, rt.memory().aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(0)));
    ctx.set_gpr(25, rt.memory().aot_load32(ctx.gpr[25] + static_cast<std::uint32_t>(88)));
    jump_target = ctx.gpr[25];
    ctx.set_gpr(31, 0x088D0BBCu);
    // nop
    ctx.pc = jump_target;
    if (rt.invoke_chained_call(ctx, &aot_mem) && ctx.pc == 0x088D0BBCu) goto L_088D0BBC;
    return;
L_088D0BBC:
    ctx.set_gpr(4, ctx.gpr[2] + 0u);
    ctx.set_gpr(5, 0u + static_cast<std::uint32_t>(1));
    ctx.set_gpr(31, 0x088D0BCCu);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0080_entry, 80u, 118u, 0x089448B4u>(ctx, &aot_mem) && ctx.pc == 0x088D0BCCu) goto L_088D0BCC;
    return;
L_088D0BCC:
    { const bool branch_taken = ctx.gpr[2] != 0u;
    // nop
      if (branch_taken) {
          goto L_088D0BDC;
      }
      goto L_088D0BD4;
    }
L_088D0BD4:
    ctx.set_gpr(2, 2245u << 16u);
    rt.memory().aot_store32(ctx.gpr[2] + static_cast<std::uint32_t>(26152), 0u);
    goto L_088D0BDC;
L_088D0BDC:
    ctx.set_gpr(4, ctx.gpr[16] + 0u);
    ctx.set_gpr(31, 0x088D0BE8u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0080_entry, 80u, 435u, 0x08945EF4u>(ctx, &aot_mem) && ctx.pc == 0x088D0BE8u) goto L_088D0BE8;
    return;
L_088D0BE8:
    ctx.set_gpr(31, rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(12)));
    ctx.set_gpr(16, rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(8)));
    ctx.set_gpr(29, ctx.gpr[29] + static_cast<std::uint32_t>(16));
    jump_target = ctx.gpr[31];
    // nop
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_088D0BFC:
    ctx.set_gpr(2, 2245u << 16u);
    ctx.set_gpr(2, rt.memory().aot_load32(ctx.gpr[2] + static_cast<std::uint32_t>(23880)));
    jump_target = ctx.gpr[31];
    // nop
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_088D0C0C:
    ctx.set_gpr(29, ctx.gpr[29] + static_cast<std::uint32_t>(-16));
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(12), ctx.gpr[31]);
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(8), ctx.gpr[17]);
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(4), ctx.gpr[16]);
    ctx.set_gpr(17, ctx.gpr[4] + 0u);
    ctx.set_gpr(16, ctx.gpr[5] + 0u);
    ctx.set_gpr(4, ctx.gpr[16] + 0u);
    ctx.set_gpr(5, rt.memory().aot_load32(ctx.gpr[17] + static_cast<std::uint32_t>(16)));
    ctx.set_gpr(25, rt.memory().aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(0)));
    ctx.set_gpr(25, rt.memory().aot_load32(ctx.gpr[25] + static_cast<std::uint32_t>(612)));
    jump_target = ctx.gpr[25];
    ctx.set_gpr(31, 0x088D0C3Cu);
    // nop
    ctx.pc = jump_target;
    if (rt.invoke_chained_call(ctx, &aot_mem) && ctx.pc == 0x088D0C3Cu) goto L_088D0C3C;
    return;
L_088D0C3C:
    rt.memory().aot_store32(ctx.gpr[17] + static_cast<std::uint32_t>(12), ctx.gpr[2]);
    ctx.set_gpr(3, 2245u << 16u);
    ctx.set_gpr(3, rt.memory().aot_load32(ctx.gpr[3] + static_cast<std::uint32_t>(26152)));
    { const bool branch_taken = ctx.gpr[3] != 0u;
    // nop
      if (branch_taken) {
          goto L_088D0C74;
      }
      goto L_088D0C50;
    }
L_088D0C50:
    ctx.set_gpr(4, ctx.gpr[16] + 0u);
    ctx.set_gpr(5, 2227u << 16u);
    ctx.set_gpr(5, ctx.gpr[5] + static_cast<std::uint32_t>(20188));
    ctx.set_gpr(25, rt.memory().aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(0)));
    ctx.set_gpr(25, rt.memory().aot_load32(ctx.gpr[25] + static_cast<std::uint32_t>(104)));
    jump_target = ctx.gpr[25];
    ctx.set_gpr(31, 0x088D0C6Cu);
    // nop
    ctx.pc = jump_target;
    if (rt.invoke_chained_call(ctx, &aot_mem) && ctx.pc == 0x088D0C6Cu) goto L_088D0C6C;
    return;
L_088D0C6C:
    ctx.set_gpr(3, 2245u << 16u);
    rt.memory().aot_store32(ctx.gpr[3] + static_cast<std::uint32_t>(26152), ctx.gpr[2]);
    goto L_088D0C74;
L_088D0C74:
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
L_088D0C8C:
    ctx.set_gpr(2, 0u + 0u);
    jump_target = ctx.gpr[31];
    // nop
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_088D0C98:
    ctx.set_gpr(29, ctx.gpr[29] + static_cast<std::uint32_t>(-16));
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(12), ctx.gpr[31]);
    ctx.set_gpr(4, ctx.gpr[5] + 0u);
    ctx.set_gpr(5, 0u + static_cast<std::uint32_t>(8));
    ctx.set_gpr(25, rt.memory().aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(0)));
    ctx.set_gpr(25, rt.memory().aot_load32(ctx.gpr[25] + static_cast<std::uint32_t>(92)));
    jump_target = ctx.gpr[25];
    ctx.set_gpr(31, 0x088D0CB8u);
    // nop
    ctx.pc = jump_target;
    if (rt.invoke_chained_call(ctx, &aot_mem) && ctx.pc == 0x088D0CB8u) goto L_088D0CB8;
    return;
L_088D0CB8:
    ctx.set_gpr(31, rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(12)));
    ctx.set_gpr(29, ctx.gpr[29] + static_cast<std::uint32_t>(16));
    jump_target = ctx.gpr[31];
    // nop
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_088D0CC8:
    rt.memory().aot_store32(ctx.gpr[4] + static_cast<std::uint32_t>(28), ctx.gpr[5]);
    rt.memory().aot_store8(ctx.gpr[4] + static_cast<std::uint32_t>(32), static_cast<std::uint8_t>(0u));
    jump_target = ctx.gpr[31];
    // nop
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_088D0CD8:
    ctx.set_gpr(29, ctx.gpr[29] + static_cast<std::uint32_t>(-16));
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(12), ctx.gpr[31]);
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(8), ctx.gpr[16]);
    ctx.set_gpr(16, ctx.gpr[4] + 0u);
    ctx.set_gpr(2, 2245u << 16u);
    ctx.set_gpr(4, rt.memory().aot_load32(ctx.gpr[2] + static_cast<std::uint32_t>(26152)));
    { const bool branch_taken = ctx.gpr[4] == 0u;
    // nop
      if (branch_taken) {
          goto L_088D0DB8;
      }
      goto L_088D0CF8;
    }
L_088D0CF8:
    ctx.set_gpr(3, rt.memory().aot_load8(ctx.gpr[16] + static_cast<std::uint32_t>(32)));
    ctx.set_gpr(2, 0u + static_cast<std::uint32_t>(1));
    { const bool branch_taken = ctx.gpr[3] == ctx.gpr[2];
    // nop
      if (branch_taken) {
          goto L_088D0D34;
      }
      goto L_088D0D08;
    }
L_088D0D08:
    { const bool branch_taken = ctx.gpr[3] == 0u;
    // nop
      if (branch_taken) {
          goto L_088D0D18;
      }
      goto L_088D0D10;
    }
L_088D0D10:
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_088D0D8C;
      }
      goto L_088D0D18;
    }
L_088D0D18:
    ctx.set_gpr(7, rt.memory().aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(28)));
    ctx.set_gpr(5, rt.memory().aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(16)));
    ctx.set_gpr(6, 0u + static_cast<std::uint32_t>(2));
    ctx.set_gpr(25, rt.memory().aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(0)));
    ctx.set_gpr(25, rt.memory().aot_load32(ctx.gpr[25] + static_cast<std::uint32_t>(120)));
    jump_target = ctx.gpr[25];
    ctx.set_gpr(31, 0x088D0D34u);
    // nop
    ctx.pc = jump_target;
    if (rt.invoke_chained_call(ctx, &aot_mem) && ctx.pc == 0x088D0D34u) goto L_088D0D34;
    return;
L_088D0D34:
    ctx.set_gpr(8, rt.memory().aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(20)));
    ctx.set_gpr(2, 2245u << 16u);
    ctx.set_gpr(4, rt.memory().aot_load32(ctx.gpr[2] + static_cast<std::uint32_t>(26152)));
    ctx.set_gpr(5, rt.memory().aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(16)));
    ctx.set_gpr(6, 0u + static_cast<std::uint32_t>(2));
    ctx.set_gpr(7, 0u + 0u);
    ctx.set_gpr(9, 0u + 0u);
    ctx.set_gpr(25, rt.memory().aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(0)));
    ctx.set_gpr(25, rt.memory().aot_load32(ctx.gpr[25] + static_cast<std::uint32_t>(128)));
    jump_target = ctx.gpr[25];
    ctx.set_gpr(31, 0x088D0D60u);
    // nop
    ctx.pc = jump_target;
    if (rt.invoke_chained_call(ctx, &aot_mem) && ctx.pc == 0x088D0D60u) goto L_088D0D60;
    return;
L_088D0D60:
    ctx.set_gpr(8, rt.memory().aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(24)));
    ctx.set_gpr(2, 2245u << 16u);
    ctx.set_gpr(4, rt.memory().aot_load32(ctx.gpr[2] + static_cast<std::uint32_t>(26152)));
    ctx.set_gpr(5, rt.memory().aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(16)));
    ctx.set_gpr(6, 0u + static_cast<std::uint32_t>(2));
    ctx.set_gpr(7, 0u + static_cast<std::uint32_t>(1));
    ctx.set_gpr(9, 0u + 0u);
    ctx.set_gpr(25, rt.memory().aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(0)));
    ctx.set_gpr(25, rt.memory().aot_load32(ctx.gpr[25] + static_cast<std::uint32_t>(128)));
    jump_target = ctx.gpr[25];
    ctx.set_gpr(31, 0x088D0D8Cu);
    // nop
    ctx.pc = jump_target;
    if (rt.invoke_chained_call(ctx, &aot_mem) && ctx.pc == 0x088D0D8Cu) goto L_088D0D8C;
    return;
L_088D0D8C:
    ctx.set_gpr(7, rt.memory().aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(12)));
    ctx.set_gpr(2, 2245u << 16u);
    ctx.set_gpr(4, rt.memory().aot_load32(ctx.gpr[2] + static_cast<std::uint32_t>(26152)));
    ctx.set_gpr(5, rt.memory().aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(16)));
    ctx.set_gpr(6, 0u + static_cast<std::uint32_t>(2));
    ctx.set_gpr(25, rt.memory().aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(0)));
    ctx.set_gpr(25, rt.memory().aot_load32(ctx.gpr[25] + static_cast<std::uint32_t>(124)));
    jump_target = ctx.gpr[25];
    ctx.set_gpr(31, 0x088D0DB0u);
    // nop
    ctx.pc = jump_target;
    if (rt.invoke_chained_call(ctx, &aot_mem) && ctx.pc == 0x088D0DB0u) goto L_088D0DB0;
    return;
L_088D0DB0:
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_088D0DCC;
      }
      goto L_088D0DB8;
    }
L_088D0DB8:
    ctx.set_gpr(6, rt.memory().aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(12)));
    ctx.set_gpr(4, ctx.gpr[5] + 0u);
    ctx.set_gpr(5, rt.memory().aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(16)));
    ctx.set_gpr(31, 0x088D0DCCu);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0119_entry, 119u, 518u, 0x089E3130u>(ctx, &aot_mem) && ctx.pc == 0x088D0DCCu) goto L_088D0DCC;
    return;
L_088D0DCC:
    ctx.set_gpr(31, rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(12)));
    ctx.set_gpr(16, rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(8)));
    ctx.set_gpr(29, ctx.gpr[29] + static_cast<std::uint32_t>(16));
    jump_target = ctx.gpr[31];
    // nop
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_088D0DE0:
    ctx.set_gpr(29, ctx.gpr[29] + static_cast<std::uint32_t>(-16));
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(12), ctx.gpr[31]);
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(8), ctx.gpr[17]);
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(4), ctx.gpr[16]);
    ctx.set_gpr(17, ctx.gpr[4] + 0u);
    ctx.set_gpr(16, ctx.gpr[5] + 0u);
    ctx.set_gpr(3, rt.memory().aot_load32(ctx.gpr[5] + static_cast<std::uint32_t>(296)));
    ctx.set_gpr(2, 0u + static_cast<std::uint32_t>(1));
    { const bool branch_taken = ctx.gpr[3] != ctx.gpr[2];
    // nop
      if (branch_taken) {
          goto L_088D0E30;
      }
      goto L_088D0E08;
    }
L_088D0E08:
    ctx.set_gpr(4, ctx.gpr[16] + 0u);
    ctx.set_gpr(5, 0u + static_cast<std::uint32_t>(4));
    ctx.set_gpr(31, 0x088D0E18u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0047_entry, 47u, 670u, 0x088C3CA8u>(ctx, &aot_mem) && ctx.pc == 0x088D0E18u) goto L_088D0E18;
    return;
L_088D0E18:
    ctx.set_gpr(4, ctx.gpr[16] + 0u);
    ctx.set_gpr(5, 0u + static_cast<std::uint32_t>(2));
    ctx.set_gpr(31, 0x088D0E28u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0047_entry, 47u, 678u, 0x088C3D30u>(ctx, &aot_mem) && ctx.pc == 0x088D0E28u) goto L_088D0E28;
    return;
L_088D0E28:
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_088D0E3C;
      }
      goto L_088D0E30;
    }
L_088D0E30:
    ctx.set_gpr(2, 0u + 0u);
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_088D0E50;
      }
      goto L_088D0E3C;
    }
L_088D0E3C:
    ctx.set_gpr(4, ctx.gpr[16] + 0u);
    ctx.set_gpr(5, ctx.gpr[17] + 0u);
    ctx.set_gpr(31, 0x088D0E4Cu);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0047_entry, 47u, 682u, 0x088C3DC0u>(ctx, &aot_mem) && ctx.pc == 0x088D0E4Cu) goto L_088D0E4C;
    return;
L_088D0E4C:
    ctx.set_gpr(2, 0u + static_cast<std::uint32_t>(1));
    goto L_088D0E50;
L_088D0E50:
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
L_088D0E68:
    ctx.set_gpr(29, ctx.gpr[29] + static_cast<std::uint32_t>(-16));
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(12), ctx.gpr[31]);
    ctx.set_gpr(31, 0x088D0E78u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0048_entry, 48u, 167u, 0x088C501Cu>(ctx, &aot_mem) && ctx.pc == 0x088D0E78u) goto L_088D0E78;
    return;
L_088D0E78:
    ctx.set_gpr(31, rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(12)));
    ctx.set_gpr(29, ctx.gpr[29] + static_cast<std::uint32_t>(16));
    jump_target = ctx.gpr[31];
    // nop
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_088D0E88:
    ctx.set_gpr(3, rt.memory().aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(16)));
    rt.memory().aot_store16(ctx.gpr[4] + static_cast<std::uint32_t>(10), static_cast<std::uint16_t>(ctx.gpr[3]));
    jump_target = ctx.gpr[31];
    // nop
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_088D0E98:
    ctx.set_gpr(29, ctx.gpr[29] + static_cast<std::uint32_t>(-16));
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(12), ctx.gpr[31]);
    ctx.set_gpr(2, static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int16_t>(ctx.gpr[5]))));
    rt.memory().aot_store32(ctx.gpr[4] + static_cast<std::uint32_t>(16), ctx.gpr[2]);
    ctx.set_gpr(31, 0x088D0EB0u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0048_entry, 48u, 153u, 0x088C4F0Cu>(ctx, &aot_mem) && ctx.pc == 0x088D0EB0u) goto L_088D0EB0;
    return;
L_088D0EB0:
    ctx.set_gpr(31, rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(12)));
    ctx.set_gpr(29, ctx.gpr[29] + static_cast<std::uint32_t>(16));
    jump_target = ctx.gpr[31];
    // nop
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_088D0EC0:
    ctx.set_gpr(29, ctx.gpr[29] + static_cast<std::uint32_t>(-16));
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(12), ctx.gpr[31]);
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(8), ctx.gpr[16]);
    ctx.set_gpr(16, ctx.gpr[4] + 0u);
    ctx.set_gpr(31, 0x088D0ED8u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0048_entry, 48u, 154u, 0x088C4F18u>(ctx, &aot_mem) && ctx.pc == 0x088D0ED8u) goto L_088D0ED8;
    return;
L_088D0ED8:
    ctx.set_gpr(5, static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int16_t>(rt.memory().aot_load16(ctx.gpr[16] + static_cast<std::uint32_t>(16))))));
    ctx.set_gpr(4, ctx.gpr[16] + 0u);
    ctx.set_gpr(31, 0x088D0EE8u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0048_entry, 48u, 153u, 0x088C4F0Cu>(ctx, &aot_mem) && ctx.pc == 0x088D0EE8u) goto L_088D0EE8;
    return;
L_088D0EE8:
    ctx.set_gpr(31, rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(12)));
    ctx.set_gpr(16, rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(8)));
    ctx.set_gpr(29, ctx.gpr[29] + static_cast<std::uint32_t>(16));
    jump_target = ctx.gpr[31];
    // nop
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_088D0EFC:
    ctx.set_gpr(4, 2202u << 16u);
    ctx.set_gpr(4, ctx.gpr[4] + static_cast<std::uint32_t>(-9236));
    ctx.set_gpr(3, 2245u << 16u);
    ctx.set_gpr(3, rt.memory().aot_load32(ctx.gpr[3] + static_cast<std::uint32_t>(23852)));
    rt.memory().aot_store32(ctx.gpr[3] + static_cast<std::uint32_t>(48), ctx.gpr[4]);
    jump_target = ctx.gpr[31];
    // nop
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_088D0F18:
    ctx.set_gpr(29, ctx.gpr[29] + static_cast<std::uint32_t>(-16));
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(12), ctx.gpr[31]);
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(8), ctx.gpr[16]);
    ctx.set_gpr(16, ctx.gpr[4] + 0u);
    ctx.set_gpr(31, 0x088D0F30u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0080_entry, 80u, 434u, 0x08945EECu>(ctx, &aot_mem) && ctx.pc == 0x088D0F30u) goto L_088D0F30;
    return;
L_088D0F30:
    ctx.set_gpr(3, 0u + static_cast<std::uint32_t>(3));
    rt.memory().aot_store32(ctx.gpr[16] + static_cast<std::uint32_t>(20), ctx.gpr[3]);
    rt.memory().aot_store32(ctx.gpr[16] + static_cast<std::uint32_t>(24), 0u);
    ctx.set_gpr(3, 0u + static_cast<std::uint32_t>(2));
    rt.memory().aot_store32(ctx.gpr[16] + static_cast<std::uint32_t>(28), ctx.gpr[3]);
    rt.memory().aot_store32(ctx.gpr[16] + static_cast<std::uint32_t>(36), ctx.gpr[3]);
    ctx.set_gpr(31, rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(12)));
    ctx.set_gpr(16, rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(8)));
    ctx.set_gpr(29, ctx.gpr[29] + static_cast<std::uint32_t>(16));
    jump_target = ctx.gpr[31];
    // nop
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_088D0F5C:
    ctx.set_gpr(29, ctx.gpr[29] + static_cast<std::uint32_t>(-16));
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(12), ctx.gpr[31]);
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(8), ctx.gpr[16]);
    ctx.set_gpr(16, ctx.gpr[4] + 0u);
    ctx.set_gpr(25, rt.memory().aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(0)));
    ctx.set_gpr(25, rt.memory().aot_load32(ctx.gpr[25] + static_cast<std::uint32_t>(88)));
    jump_target = ctx.gpr[25];
    ctx.set_gpr(31, 0x088D0F7Cu);
    // nop
    ctx.pc = jump_target;
    if (rt.invoke_chained_call(ctx, &aot_mem) && ctx.pc == 0x088D0F7Cu) goto L_088D0F7C;
    return;
L_088D0F7C:
    ctx.set_gpr(4, ctx.gpr[2] + 0u);
    ctx.set_gpr(5, 0u + static_cast<std::uint32_t>(1));
    ctx.set_gpr(31, 0x088D0F8Cu);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0080_entry, 80u, 118u, 0x089448B4u>(ctx, &aot_mem) && ctx.pc == 0x088D0F8Cu) goto L_088D0F8C;
    return;
L_088D0F8C:
    { const bool branch_taken = ctx.gpr[2] != 0u;
    // nop
      if (branch_taken) {
          goto L_088D0F9C;
      }
      goto L_088D0F94;
    }
L_088D0F94:
    ctx.set_gpr(2, 2245u << 16u);
    rt.memory().aot_store32(ctx.gpr[2] + static_cast<std::uint32_t>(26156), 0u);
    goto L_088D0F9C;
L_088D0F9C:
    ctx.set_gpr(4, ctx.gpr[16] + 0u);
    ctx.set_gpr(31, 0x088D0FA8u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0080_entry, 80u, 435u, 0x08945EF4u>(ctx, &aot_mem) && ctx.pc == 0x088D0FA8u) goto L_088D0FA8;
    return;
L_088D0FA8:
    ctx.set_gpr(31, rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(12)));
    ctx.set_gpr(16, rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(8)));
    ctx.set_gpr(29, ctx.gpr[29] + static_cast<std::uint32_t>(16));
    jump_target = ctx.gpr[31];
    // nop
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_088D0FBC:
    ctx.set_gpr(2, 2245u << 16u);
    ctx.set_gpr(2, rt.memory().aot_load32(ctx.gpr[2] + static_cast<std::uint32_t>(23848)));
    jump_target = ctx.gpr[31];
    // nop
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_088D0FCC:
    ctx.set_gpr(29, ctx.gpr[29] + static_cast<std::uint32_t>(-16));
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(12), ctx.gpr[31]);
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(8), ctx.gpr[17]);
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(4), ctx.gpr[16]);
    ctx.set_gpr(17, ctx.gpr[4] + 0u);
    ctx.set_gpr(16, ctx.gpr[5] + 0u);
    ctx.set_gpr(4, ctx.gpr[16] + 0u);
    ctx.set_gpr(5, rt.memory().aot_load32(ctx.gpr[17] + static_cast<std::uint32_t>(16)));
    ctx.set_gpr(25, rt.memory().aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(0)));
    ctx.set_gpr(25, rt.memory().aot_load32(ctx.gpr[25] + static_cast<std::uint32_t>(612)));
    jump_target = ctx.gpr[25];
    ctx.set_gpr(31, 0x088D0FFCu);
    // nop
    ctx.pc = jump_target;
    if (rt.invoke_chained_call(ctx, &aot_mem) && ctx.pc == 0x088D0FFCu) goto L_088D0FFC;
    return;
L_088D0FFC:
    rt.memory().aot_store32(ctx.gpr[17] + static_cast<std::uint32_t>(12), ctx.gpr[2]);
    ctx.set_gpr(3, 2245u << 16u);
    ctx.set_gpr(3, rt.memory().aot_load32(ctx.gpr[3] + static_cast<std::uint32_t>(26156)));
    { const bool branch_taken = ctx.gpr[3] != 0u;
    // nop
      if (branch_taken) {
          goto L_088D1034;
      }
      goto L_088D1010;
    }
L_088D1010:
    ctx.set_gpr(4, ctx.gpr[16] + 0u);
    ctx.set_gpr(5, 2227u << 16u);
    ctx.set_gpr(5, ctx.gpr[5] + static_cast<std::uint32_t>(20188));
    ctx.set_gpr(25, rt.memory().aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(0)));
    ctx.set_gpr(25, rt.memory().aot_load32(ctx.gpr[25] + static_cast<std::uint32_t>(104)));
    jump_target = ctx.gpr[25];
    ctx.set_gpr(31, 0x088D102Cu);
    // nop
    ctx.pc = jump_target;
    if (rt.invoke_chained_call(ctx, &aot_mem) && ctx.pc == 0x088D102Cu) goto L_088D102C;
    return;
L_088D102C:
    ctx.set_gpr(3, 2245u << 16u);
    rt.memory().aot_store32(ctx.gpr[3] + static_cast<std::uint32_t>(26156), ctx.gpr[2]);
    goto L_088D1034;
L_088D1034:
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
L_088D104C:
    ctx.set_gpr(29, ctx.gpr[29] + static_cast<std::uint32_t>(-16));
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(12), ctx.gpr[31]);
    ctx.set_gpr(4, ctx.gpr[5] + 0u);
    ctx.set_gpr(5, 0u + static_cast<std::uint32_t>(8));
    ctx.set_gpr(25, rt.memory().aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(0)));
    ctx.set_gpr(25, rt.memory().aot_load32(ctx.gpr[25] + static_cast<std::uint32_t>(92)));
    jump_target = ctx.gpr[25];
    ctx.set_gpr(31, 0x088D106Cu);
    // nop
    ctx.pc = jump_target;
    if (rt.invoke_chained_call(ctx, &aot_mem) && ctx.pc == 0x088D106Cu) goto L_088D106C;
    return;
L_088D106C:
    ctx.set_gpr(31, rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(12)));
    ctx.set_gpr(29, ctx.gpr[29] + static_cast<std::uint32_t>(16));
    jump_target = ctx.gpr[31];
    // nop
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_088D107C:
    { const bool branch_taken = ctx.gpr[5] != 0u;
    // nop
      if (branch_taken) {
          goto L_088D1090;
      }
      goto L_088D1084;
    }
L_088D1084:
    rt.memory().aot_store32(ctx.gpr[4] + static_cast<std::uint32_t>(20), ctx.gpr[6]);
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_088D1094;
      }
      goto L_088D1090;
    }
L_088D1090:
    rt.memory().aot_store32(ctx.gpr[4] + static_cast<std::uint32_t>(24), ctx.gpr[6]);
    goto L_088D1094;
L_088D1094:
    ctx.set_gpr(3, rt.memory().aot_load8(ctx.gpr[4] + static_cast<std::uint32_t>(32)));
    { const bool branch_taken = ctx.gpr[3] == 0u;
    // nop
      if (branch_taken) {
          goto L_088D10A8;
      }
      goto L_088D10A0;
    }
L_088D10A0:
    ctx.set_gpr(3, 0u + static_cast<std::uint32_t>(1));
    rt.memory().aot_store8(ctx.gpr[4] + static_cast<std::uint32_t>(32), static_cast<std::uint8_t>(ctx.gpr[3]));
    goto L_088D10A8;
L_088D10A8:
    jump_target = ctx.gpr[31];
    // nop
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_088D10B0:
    rt.memory().aot_store32(ctx.gpr[4] + static_cast<std::uint32_t>(28), ctx.gpr[5]);
    rt.memory().aot_store8(ctx.gpr[4] + static_cast<std::uint32_t>(32), static_cast<std::uint8_t>(0u));
    jump_target = ctx.gpr[31];
    // nop
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_088D10C0:
    ctx.set_gpr(29, ctx.gpr[29] + static_cast<std::uint32_t>(-16));
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(12), ctx.gpr[31]);
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(8), ctx.gpr[17]);
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(4), ctx.gpr[16]);
    ctx.set_gpr(17, ctx.gpr[4] + 0u);
    ctx.set_gpr(2, 2245u << 16u);
    ctx.set_gpr(4, rt.memory().aot_load32(ctx.gpr[2] + static_cast<std::uint32_t>(26156)));
    { const bool branch_taken = ctx.gpr[4] == 0u;
    // nop
      if (branch_taken) {
          goto L_088D11A8;
      }
      goto L_088D10E4;
    }
L_088D10E4:
    ctx.set_gpr(16, rt.memory().aot_load32(ctx.gpr[17] + static_cast<std::uint32_t>(36)));
    ctx.set_gpr(3, rt.memory().aot_load8(ctx.gpr[17] + static_cast<std::uint32_t>(32)));
    ctx.set_gpr(2, 0u + static_cast<std::uint32_t>(1));
    { const bool branch_taken = ctx.gpr[3] == ctx.gpr[2];
    // nop
      if (branch_taken) {
          goto L_088D1124;
      }
      goto L_088D10F8;
    }
L_088D10F8:
    { const bool branch_taken = ctx.gpr[3] == 0u;
    // nop
      if (branch_taken) {
          goto L_088D1108;
      }
      goto L_088D1100;
    }
L_088D1100:
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_088D117C;
      }
      goto L_088D1108;
    }
L_088D1108:
    ctx.set_gpr(7, rt.memory().aot_load32(ctx.gpr[17] + static_cast<std::uint32_t>(28)));
    ctx.set_gpr(5, rt.memory().aot_load32(ctx.gpr[17] + static_cast<std::uint32_t>(16)));
    ctx.set_gpr(6, ctx.gpr[16] + 0u);
    ctx.set_gpr(25, rt.memory().aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(0)));
    ctx.set_gpr(25, rt.memory().aot_load32(ctx.gpr[25] + static_cast<std::uint32_t>(120)));
    jump_target = ctx.gpr[25];
    ctx.set_gpr(31, 0x088D1124u);
    // nop
    ctx.pc = jump_target;
    if (rt.invoke_chained_call(ctx, &aot_mem) && ctx.pc == 0x088D1124u) goto L_088D1124;
    return;
L_088D1124:
    ctx.set_gpr(8, rt.memory().aot_load32(ctx.gpr[17] + static_cast<std::uint32_t>(20)));
    ctx.set_gpr(2, 2245u << 16u);
    ctx.set_gpr(4, rt.memory().aot_load32(ctx.gpr[2] + static_cast<std::uint32_t>(26156)));
    ctx.set_gpr(5, rt.memory().aot_load32(ctx.gpr[17] + static_cast<std::uint32_t>(16)));
    ctx.set_gpr(6, ctx.gpr[16] + 0u);
    ctx.set_gpr(7, 0u + 0u);
    ctx.set_gpr(9, 0u + 0u);
    ctx.set_gpr(25, rt.memory().aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(0)));
    ctx.set_gpr(25, rt.memory().aot_load32(ctx.gpr[25] + static_cast<std::uint32_t>(128)));
    jump_target = ctx.gpr[25];
    ctx.set_gpr(31, 0x088D1150u);
    // nop
    ctx.pc = jump_target;
    if (rt.invoke_chained_call(ctx, &aot_mem) && ctx.pc == 0x088D1150u) goto L_088D1150;
    return;
L_088D1150:
    ctx.set_gpr(8, rt.memory().aot_load32(ctx.gpr[17] + static_cast<std::uint32_t>(24)));
    ctx.set_gpr(2, 2245u << 16u);
    ctx.set_gpr(4, rt.memory().aot_load32(ctx.gpr[2] + static_cast<std::uint32_t>(26156)));
    ctx.set_gpr(5, rt.memory().aot_load32(ctx.gpr[17] + static_cast<std::uint32_t>(16)));
    ctx.set_gpr(6, ctx.gpr[16] + 0u);
    ctx.set_gpr(7, 0u + static_cast<std::uint32_t>(1));
    ctx.set_gpr(9, 0u + 0u);
    ctx.set_gpr(25, rt.memory().aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(0)));
    ctx.set_gpr(25, rt.memory().aot_load32(ctx.gpr[25] + static_cast<std::uint32_t>(128)));
    jump_target = ctx.gpr[25];
    ctx.set_gpr(31, 0x088D117Cu);
    // nop
    ctx.pc = jump_target;
    if (rt.invoke_chained_call(ctx, &aot_mem) && ctx.pc == 0x088D117Cu) goto L_088D117C;
    return;
L_088D117C:
    ctx.set_gpr(7, rt.memory().aot_load32(ctx.gpr[17] + static_cast<std::uint32_t>(12)));
    ctx.set_gpr(2, 2245u << 16u);
    ctx.set_gpr(4, rt.memory().aot_load32(ctx.gpr[2] + static_cast<std::uint32_t>(26156)));
    ctx.set_gpr(5, rt.memory().aot_load32(ctx.gpr[17] + static_cast<std::uint32_t>(16)));
    ctx.set_gpr(6, ctx.gpr[16] + 0u);
    ctx.set_gpr(25, rt.memory().aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(0)));
    ctx.set_gpr(25, rt.memory().aot_load32(ctx.gpr[25] + static_cast<std::uint32_t>(124)));
    jump_target = ctx.gpr[25];
    ctx.set_gpr(31, 0x088D11A0u);
    // nop
    ctx.pc = jump_target;
    if (rt.invoke_chained_call(ctx, &aot_mem) && ctx.pc == 0x088D11A0u) goto L_088D11A0;
    return;
L_088D11A0:
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_088D11BC;
      }
      goto L_088D11A8;
    }
L_088D11A8:
    ctx.set_gpr(6, rt.memory().aot_load32(ctx.gpr[17] + static_cast<std::uint32_t>(12)));
    ctx.set_gpr(4, ctx.gpr[5] + 0u);
    ctx.set_gpr(5, rt.memory().aot_load32(ctx.gpr[17] + static_cast<std::uint32_t>(16)));
    ctx.set_gpr(31, 0x088D11BCu);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0119_entry, 119u, 518u, 0x089E3130u>(ctx, &aot_mem) && ctx.pc == 0x088D11BCu) goto L_088D11BC;
    return;
L_088D11BC:
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
L_088D11D4:
    ctx.set_gpr(29, ctx.gpr[29] + static_cast<std::uint32_t>(-16));
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(12), ctx.gpr[31]);
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(8), ctx.gpr[17]);
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(4), ctx.gpr[16]);
    ctx.set_gpr(17, ctx.gpr[4] + 0u);
    ctx.set_gpr(16, ctx.gpr[5] + 0u);
    ctx.set_gpr(3, rt.memory().aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(20)));
    ctx.set_gpr(2, 0u + static_cast<std::uint32_t>(3));
    { const bool branch_taken = ctx.gpr[3] != ctx.gpr[2];
    // nop
      if (branch_taken) {
          goto L_088D1274;
      }
      goto L_088D11FC;
    }
L_088D11FC:
    ctx.set_gpr(2, rt.memory().aot_load32(ctx.gpr[17] + static_cast<std::uint32_t>(24)));
    { const bool branch_taken = ctx.gpr[2] != 0u;
    // nop
      if (branch_taken) {
          goto L_088D1274;
      }
      goto L_088D1208;
    }
L_088D1208:
    ctx.set_gpr(25, rt.memory().aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(0)));
    ctx.set_gpr(25, rt.memory().aot_load32(ctx.gpr[25] + static_cast<std::uint32_t>(140)));
    jump_target = ctx.gpr[25];
    ctx.set_gpr(31, 0x088D1218u);
    // nop
    ctx.pc = jump_target;
    if (rt.invoke_chained_call(ctx, &aot_mem) && ctx.pc == 0x088D1218u) goto L_088D1218;
    return;
L_088D1218:
    ctx.set_gpr(3, 0u + static_cast<std::uint32_t>(2));
    { const bool branch_taken = ctx.gpr[2] != ctx.gpr[3];
    // nop
      if (branch_taken) {
          goto L_088D1274;
      }
      goto L_088D1224;
    }
L_088D1224:
    ctx.set_gpr(4, ctx.gpr[17] + 0u);
    ctx.set_gpr(25, rt.memory().aot_load32(ctx.gpr[17] + static_cast<std::uint32_t>(0)));
    ctx.set_gpr(25, rt.memory().aot_load32(ctx.gpr[25] + static_cast<std::uint32_t>(148)));
    jump_target = ctx.gpr[25];
    ctx.set_gpr(31, 0x088D1238u);
    // nop
    ctx.pc = jump_target;
    if (rt.invoke_chained_call(ctx, &aot_mem) && ctx.pc == 0x088D1238u) goto L_088D1238;
    return;
L_088D1238:
    ctx.set_gpr(3, 0u + static_cast<std::uint32_t>(2));
    { const bool branch_taken = ctx.gpr[2] != ctx.gpr[3];
    // nop
      if (branch_taken) {
          goto L_088D1274;
      }
      goto L_088D1244;
    }
L_088D1244:
    ctx.set_gpr(2, 0u + static_cast<std::uint32_t>(41));
    rt.memory().aot_store32(ctx.gpr[16] + static_cast<std::uint32_t>(0), ctx.gpr[2]);
    ctx.set_gpr(2, static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int16_t>(rt.memory().aot_load16(ctx.gpr[17] + static_cast<std::uint32_t>(16))))));
    rt.memory().aot_store8(ctx.gpr[16] + static_cast<std::uint32_t>(5), static_cast<std::uint8_t>(ctx.gpr[2]));
    ctx.set_gpr(2, rt.memory().aot_load32(ctx.gpr[17] + static_cast<std::uint32_t>(12)));
    rt.memory().aot_store8(ctx.gpr[16] + static_cast<std::uint32_t>(6), static_cast<std::uint8_t>(ctx.gpr[2]));
    ctx.set_gpr(4, ctx.gpr[16] + 0u);
    ctx.set_gpr(5, 0u + static_cast<std::uint32_t>(39));
    ctx.set_gpr(31, 0x088D126Cu);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0047_entry, 47u, 678u, 0x088C3D30u>(ctx, &aot_mem) && ctx.pc == 0x088D126Cu) goto L_088D126C;
    return;
L_088D126C:
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_088D12B8;
      }
      goto L_088D1274;
    }
L_088D1274:
    ctx.set_gpr(3, rt.memory().aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(296)));
    ctx.set_gpr(2, 0u + static_cast<std::uint32_t>(1));
    { const bool branch_taken = ctx.gpr[3] != ctx.gpr[2];
    // nop
      if (branch_taken) {
          goto L_088D12AC;
      }
      goto L_088D1284;
    }
L_088D1284:
    ctx.set_gpr(4, ctx.gpr[16] + 0u);
    ctx.set_gpr(5, 0u + static_cast<std::uint32_t>(4));
    ctx.set_gpr(31, 0x088D1294u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0047_entry, 47u, 670u, 0x088C3CA8u>(ctx, &aot_mem) && ctx.pc == 0x088D1294u) goto L_088D1294;
    return;
L_088D1294:
    ctx.set_gpr(4, ctx.gpr[16] + 0u);
    ctx.set_gpr(5, 0u + static_cast<std::uint32_t>(2));
    ctx.set_gpr(31, 0x088D12A4u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0047_entry, 47u, 678u, 0x088C3D30u>(ctx, &aot_mem) && ctx.pc == 0x088D12A4u) goto L_088D12A4;
    return;
L_088D12A4:
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_088D12B8;
      }
      goto L_088D12AC;
    }
L_088D12AC:
    ctx.set_gpr(2, 0u + 0u);
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_088D12CC;
      }
      goto L_088D12B8;
    }
L_088D12B8:
    ctx.set_gpr(4, ctx.gpr[16] + 0u);
    ctx.set_gpr(5, ctx.gpr[17] + 0u);
    ctx.set_gpr(31, 0x088D12C8u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0047_entry, 47u, 682u, 0x088C3DC0u>(ctx, &aot_mem) && ctx.pc == 0x088D12C8u) goto L_088D12C8;
    return;
L_088D12C8:
    ctx.set_gpr(2, 0u + static_cast<std::uint32_t>(1));
    goto L_088D12CC;
L_088D12CC:
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
L_088D12E4:
    ctx.set_gpr(2, rt.memory().aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(36)));
    jump_target = ctx.gpr[31];
    // nop
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_088D12F0:
    ctx.set_gpr(2, rt.memory().aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(28)));
    jump_target = ctx.gpr[31];
    // nop
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_088D12FC:
    ctx.set_gpr(29, ctx.gpr[29] + static_cast<std::uint32_t>(-16));
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(12), ctx.gpr[31]);
    ctx.set_gpr(31, 0x088D130Cu);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0048_entry, 48u, 167u, 0x088C501Cu>(ctx, &aot_mem) && ctx.pc == 0x088D130Cu) goto L_088D130C;
    return;
L_088D130C:
    ctx.set_gpr(31, rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(12)));
    ctx.set_gpr(29, ctx.gpr[29] + static_cast<std::uint32_t>(16));
    jump_target = ctx.gpr[31];
    // nop
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_088D131C:
    ctx.set_gpr(29, ctx.gpr[29] + static_cast<std::uint32_t>(-32));
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(28), ctx.gpr[31]);
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(24), ctx.gpr[19]);
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(20), ctx.gpr[18]);
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(16), ctx.gpr[17]);
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(12), ctx.gpr[16]);
    ctx.set_gpr(19, ctx.gpr[4] + 0u);
    ctx.set_gpr(18, ctx.gpr[5] + 0u);
    ctx.set_gpr(4, 2227u << 16u);
    ctx.set_gpr(4, ctx.gpr[4] + static_cast<std::uint32_t>(20208));
    ctx.set_gpr(31, 0x088D134Cu);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0004_entry, 4u, 508u, 0x08816764u>(ctx, &aot_mem) && ctx.pc == 0x088D134Cu) goto L_088D134C;
    return;
L_088D134C:
    ctx.set_gpr(4, ctx.gpr[18] + 0u);
    ctx.set_gpr(5, 2227u << 16u);
    ctx.set_gpr(5, ctx.gpr[5] + static_cast<std::uint32_t>(20208));
    ctx.set_gpr(6, ctx.gpr[2] + 0u);
    ctx.set_gpr(31, 0x088D1364u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0004_entry, 4u, 543u, 0x088169A8u>(ctx, &aot_mem) && ctx.pc == 0x088D1364u) goto L_088D1364;
    return;
L_088D1364:
    { const bool branch_taken = ctx.gpr[2] != 0u;
    // nop
      if (branch_taken) {
          goto L_088D13FC;
      }
      goto L_088D136C;
    }
L_088D136C:
    ctx.set_gpr(4, 2227u << 16u);
    ctx.set_gpr(4, ctx.gpr[4] + static_cast<std::uint32_t>(20208));
    ctx.set_gpr(31, 0x088D137Cu);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0004_entry, 4u, 508u, 0x08816764u>(ctx, &aot_mem) && ctx.pc == 0x088D137Cu) goto L_088D137C;
    return;
L_088D137C:
    ctx.set_gpr(18, ctx.gpr[18] + ctx.gpr[2]);
    ctx.set_gpr(17, 0u + 0u);
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_088D13E0;
      }
      goto L_088D138C;
    }
L_088D138C:
    ctx.set_gpr(16, ctx.gpr[17] << 2u);
    ctx.set_gpr(2, rt.memory().aot_load32(ctx.gpr[3] + static_cast<std::uint32_t>(16)));
    ctx.set_gpr(2, ctx.gpr[2] + ctx.gpr[16]);
    ctx.set_gpr(4, rt.memory().aot_load32(ctx.gpr[2] + static_cast<std::uint32_t>(0)));
    ctx.set_gpr(5, ctx.gpr[18] + 0u);
    ctx.set_gpr(25, rt.memory().aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(0)));
    ctx.set_gpr(25, rt.memory().aot_load32(ctx.gpr[25] + static_cast<std::uint32_t>(160)));
    jump_target = ctx.gpr[25];
    ctx.set_gpr(31, 0x088D13B0u);
    // nop
    ctx.pc = jump_target;
    if (rt.invoke_chained_call(ctx, &aot_mem) && ctx.pc == 0x088D13B0u) goto L_088D13B0;
    return;
L_088D13B0:
    { const bool branch_taken = ctx.gpr[2] == 0u;
    // nop
      if (branch_taken) {
          goto L_088D13DC;
      }
      goto L_088D13B8;
    }
L_088D13B8:
    ctx.set_gpr(2, rt.memory().aot_load32(ctx.gpr[19] + static_cast<std::uint32_t>(20)));
    ctx.set_gpr(2, rt.memory().aot_load32(ctx.gpr[2] + static_cast<std::uint32_t>(16)));
    ctx.set_gpr(2, ctx.gpr[2] + ctx.gpr[16]);
    ctx.set_gpr(4, rt.memory().aot_load32(ctx.gpr[2] + static_cast<std::uint32_t>(0)));
    ctx.set_gpr(5, 0u + 0u);
    ctx.set_gpr(31, 0x088D13D4u);
    // nop
    goto L_088D01E0;
L_088D13D4:
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_088D1468;
      }
      goto L_088D13DC;
    }
L_088D13DC:
    ctx.set_gpr(17, ctx.gpr[17] + static_cast<std::uint32_t>(1));
    goto L_088D13E0;
L_088D13E0:
    ctx.set_gpr(3, rt.memory().aot_load32(ctx.gpr[19] + static_cast<std::uint32_t>(20)));
    ctx.set_gpr(2, rt.memory().aot_load32(ctx.gpr[3] + static_cast<std::uint32_t>(8)));
    ctx.set_gpr(2, static_cast<std::int32_t>(ctx.gpr[17]) < static_cast<std::int32_t>(ctx.gpr[2]) ? 1u : 0u);
    { const bool branch_taken = ctx.gpr[2] != 0u;
    // nop
      if (branch_taken) {
          goto L_088D138C;
      }
      goto L_088D13F4;
    }
L_088D13F4:
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_088D1464;
      }
      goto L_088D13FC;
    }
L_088D13FC:
    ctx.set_gpr(17, 0u + 0u);
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_088D1450;
      }
      goto L_088D1408;
    }
L_088D1408:
    ctx.set_gpr(16, ctx.gpr[17] << 2u);
    ctx.set_gpr(2, rt.memory().aot_load32(ctx.gpr[3] + static_cast<std::uint32_t>(16)));
    ctx.set_gpr(2, ctx.gpr[2] + ctx.gpr[16]);
    ctx.set_gpr(4, rt.memory().aot_load32(ctx.gpr[2] + static_cast<std::uint32_t>(0)));
    ctx.set_gpr(5, ctx.gpr[18] + 0u);
    ctx.set_gpr(25, rt.memory().aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(0)));
    ctx.set_gpr(25, rt.memory().aot_load32(ctx.gpr[25] + static_cast<std::uint32_t>(160)));
    jump_target = ctx.gpr[25];
    ctx.set_gpr(31, 0x088D142Cu);
    // nop
    ctx.pc = jump_target;
    if (rt.invoke_chained_call(ctx, &aot_mem) && ctx.pc == 0x088D142Cu) goto L_088D142C;
    return;
L_088D142C:
    { const bool branch_taken = ctx.gpr[2] == 0u;
    // nop
      if (branch_taken) {
          goto L_088D144C;
      }
      goto L_088D1434;
    }
L_088D1434:
    ctx.set_gpr(2, rt.memory().aot_load32(ctx.gpr[19] + static_cast<std::uint32_t>(20)));
    ctx.set_gpr(2, rt.memory().aot_load32(ctx.gpr[2] + static_cast<std::uint32_t>(16)));
    ctx.set_gpr(2, ctx.gpr[2] + ctx.gpr[16]);
    ctx.set_gpr(2, rt.memory().aot_load32(ctx.gpr[2] + static_cast<std::uint32_t>(0)));
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_088D1468;
      }
      goto L_088D144C;
    }
L_088D144C:
    ctx.set_gpr(17, ctx.gpr[17] + static_cast<std::uint32_t>(1));
    goto L_088D1450;
L_088D1450:
    ctx.set_gpr(3, rt.memory().aot_load32(ctx.gpr[19] + static_cast<std::uint32_t>(20)));
    ctx.set_gpr(2, rt.memory().aot_load32(ctx.gpr[3] + static_cast<std::uint32_t>(8)));
    ctx.set_gpr(2, static_cast<std::int32_t>(ctx.gpr[17]) < static_cast<std::int32_t>(ctx.gpr[2]) ? 1u : 0u);
    { const bool branch_taken = ctx.gpr[2] != 0u;
    // nop
      if (branch_taken) {
          goto L_088D1408;
      }
      goto L_088D1464;
    }
L_088D1464:
    ctx.set_gpr(2, 0u + 0u);
    goto L_088D1468;
L_088D1468:
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
L_088D1488:
    ctx.set_gpr(29, ctx.gpr[29] + static_cast<std::uint32_t>(-64));
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(28), ctx.gpr[31]);
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(24), ctx.gpr[22]);
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(20), ctx.gpr[21]);
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(16), ctx.gpr[20]);
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(12), ctx.gpr[19]);
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(8), ctx.gpr[18]);
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(4), ctx.gpr[17]);
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(0), ctx.gpr[16]);
    ctx.set_gpr(18, ctx.gpr[4] + 0u);
    ctx.set_gpr(17, ctx.gpr[5] + 0u);
    ctx.set_gpr(16, ctx.gpr[6] + 0u);
    ctx.set_gpr(22, 0u + 0u);
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(60), ctx.gpr[16]);
    { const bool branch_taken = ctx.gpr[16] == 0u;
    // nop
      if (branch_taken) {
          goto L_088D14D4;
      }
      goto L_088D14C8;
    }
L_088D14C8:
    ctx.set_gpr(2, rt.memory().aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(4)));
    ctx.set_gpr(2, ctx.gpr[2] + static_cast<std::uint32_t>(1));
    rt.memory().aot_store32(ctx.gpr[16] + static_cast<std::uint32_t>(4), ctx.gpr[2]);
    goto L_088D14D4;
L_088D14D4:
    ctx.set_gpr(19, rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(60)));
    { const bool branch_taken = ctx.gpr[19] == 0u;
    // nop
      if (branch_taken) {
          goto L_088D1504;
      }
      goto L_088D14E0;
    }
L_088D14E0:
    ctx.set_gpr(4, ctx.gpr[19] + 0u);
    ctx.set_gpr(2, 2245u << 16u);
    ctx.set_gpr(5, rt.memory().aot_load32(ctx.gpr[2] + static_cast<std::uint32_t>(23984)));
    ctx.set_gpr(31, 0x088D14F4u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0080_entry, 80u, 857u, 0x08947F8Cu>(ctx, &aot_mem) && ctx.pc == 0x088D14F4u) goto L_088D14F4;
    return;
L_088D14F4:
    { const bool branch_taken = ctx.gpr[2] == 0u;
    // nop
      if (branch_taken) {
          goto L_088D1504;
      }
      goto L_088D14FC;
    }
L_088D14FC:
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_088D1508;
      }
      goto L_088D1504;
    }
L_088D1504:
    ctx.set_gpr(19, 0u + 0u);
    goto L_088D1508;
L_088D1508:
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(56), ctx.gpr[19]);
    { const bool branch_taken = ctx.gpr[19] == 0u;
    // nop
      if (branch_taken) {
          goto L_088D1520;
      }
      goto L_088D1514;
    }
L_088D1514:
    ctx.set_gpr(2, rt.memory().aot_load32(ctx.gpr[19] + static_cast<std::uint32_t>(4)));
    ctx.set_gpr(2, ctx.gpr[2] + static_cast<std::uint32_t>(1));
    rt.memory().aot_store32(ctx.gpr[19] + static_cast<std::uint32_t>(4), ctx.gpr[2]);
    goto L_088D1520;
L_088D1520:
    ctx.set_gpr(31, 0x088D1528u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0078_entry, 78u, 228u, 0x0893CE9Cu>(ctx, &aot_mem) && ctx.pc == 0x088D1528u) goto L_088D1528;
    return;
L_088D1528:
    ctx.set_gpr(4, rt.memory().aot_load32(ctx.gpr[2] + static_cast<std::uint32_t>(0)));
    ctx.set_gpr(31, 0x088D1534u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0078_entry, 78u, 199u, 0x0893CC68u>(ctx, &aot_mem) && ctx.pc == 0x088D1534u) goto L_088D1534;
    return;
L_088D1534:
    ctx.set_gpr(19, ctx.gpr[2] + 0u);
    ctx.set_gpr(4, rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(56)));
    { const bool branch_taken = ctx.gpr[4] == 0u;
    // nop
      if (branch_taken) {
          goto L_088D15E8;
      }
      goto L_088D1544;
    }
L_088D1544:
    ctx.set_gpr(5, 0u + static_cast<std::uint32_t>(1));
    ctx.set_gpr(6, ctx.gpr[19] + 0u);
    ctx.set_gpr(25, rt.memory().aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(0)));
    ctx.set_gpr(25, rt.memory().aot_load32(ctx.gpr[25] + static_cast<std::uint32_t>(156)));
    jump_target = ctx.gpr[25];
    ctx.set_gpr(31, 0x088D155Cu);
    // nop
    ctx.pc = jump_target;
    if (rt.invoke_chained_call(ctx, &aot_mem) && ctx.pc == 0x088D155Cu) goto L_088D155C;
    return;
L_088D155C:
    ctx.set_gpr(20, ctx.gpr[2] + 0u);
    ctx.set_gpr(2, rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(56)));
    ctx.set_gpr(4, rt.memory().aot_load32(ctx.gpr[18] + static_cast<std::uint32_t>(20)));
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(44), ctx.gpr[2]);
    ctx.set_gpr(5, ctx.gpr[29] + static_cast<std::uint32_t>(44));
    ctx.set_gpr(6, 0u + 0u);
    ctx.set_gpr(31, 0x088D157Cu);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0018_entry, 18u, 462u, 0x0884D888u>(ctx, &aot_mem) && ctx.pc == 0x088D157Cu) goto L_088D157C;
    return;
L_088D157C:
    ctx.set_gpr(3, 0u + static_cast<std::uint32_t>(-1));
    { const bool branch_taken = ctx.gpr[2] != ctx.gpr[3];
    // nop
      if (branch_taken) {
          goto L_088D15AC;
      }
      goto L_088D1588;
    }
L_088D1588:
    ctx.set_gpr(4, ctx.gpr[18] + 0u);
    ctx.set_gpr(5, ctx.gpr[20] + 0u);
    ctx.set_gpr(6, ctx.gpr[17] + 0u);
    ctx.set_gpr(25, rt.memory().aot_load32(ctx.gpr[18] + static_cast<std::uint32_t>(0)));
    ctx.set_gpr(25, rt.memory().aot_load32(ctx.gpr[25] + static_cast<std::uint32_t>(96)));
    jump_target = ctx.gpr[25];
    ctx.set_gpr(31, 0x088D15A4u);
    // nop
    ctx.pc = jump_target;
    if (rt.invoke_chained_call(ctx, &aot_mem) && ctx.pc == 0x088D15A4u) goto L_088D15A4;
    return;
L_088D15A4:
    { const bool branch_taken = ctx.gpr[2] == 0u;
    // nop
      if (branch_taken) {
          goto L_088D15C8;
      }
      goto L_088D15AC;
    }
L_088D15AC:
    ctx.set_gpr(4, ctx.gpr[17] + 0u);
    ctx.set_gpr(5, ctx.gpr[18] + 0u);
    ctx.set_gpr(6, ctx.gpr[20] + 0u);
    ctx.set_gpr(7, ctx.gpr[16] + 0u);
    ctx.set_gpr(31, 0x088D15C4u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0070_entry, 70u, 167u, 0x0891CCBCu>(ctx, &aot_mem) && ctx.pc == 0x088D15C4u) goto L_088D15C4;
    return;
L_088D15C4:
    ctx.set_gpr(22, ctx.gpr[2] & 255u);
    goto L_088D15C8;
L_088D15C8:
    ctx.set_gpr(4, ctx.gpr[19] + 0u);
    ctx.set_gpr(5, ctx.gpr[20] + 0u);
    ctx.set_gpr(25, rt.memory().aot_load32(ctx.gpr[19] + static_cast<std::uint32_t>(0)));
    ctx.set_gpr(25, rt.memory().aot_load32(ctx.gpr[25] + static_cast<std::uint32_t>(144)));
    jump_target = ctx.gpr[25];
    ctx.set_gpr(31, 0x088D15E0u);
    // nop
    ctx.pc = jump_target;
    if (rt.invoke_chained_call(ctx, &aot_mem) && ctx.pc == 0x088D15E0u) goto L_088D15E0;
    return;
L_088D15E0:
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_088D17C8;
      }
      goto L_088D15E8;
    }
L_088D15E8:
    ctx.set_gpr(20, rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(60)));
    { const bool branch_taken = ctx.gpr[20] == 0u;
    // nop
      if (branch_taken) {
          goto L_088D1618;
      }
      goto L_088D15F4;
    }
L_088D15F4:
    ctx.set_gpr(4, ctx.gpr[20] + 0u);
    ctx.set_gpr(2, 2246u << 16u);
    ctx.set_gpr(5, rt.memory().aot_load32(ctx.gpr[2] + static_cast<std::uint32_t>(-32120)));
    ctx.set_gpr(31, 0x088D1608u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0080_entry, 80u, 857u, 0x08947F8Cu>(ctx, &aot_mem) && ctx.pc == 0x088D1608u) goto L_088D1608;
    return;
L_088D1608:
    { const bool branch_taken = ctx.gpr[2] == 0u;
    // nop
      if (branch_taken) {
          goto L_088D1618;
      }
      goto L_088D1610;
    }
L_088D1610:
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_088D161C;
      }
      goto L_088D1618;
    }
L_088D1618:
    ctx.set_gpr(20, 0u + 0u);
    goto L_088D161C;
L_088D161C:
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(52), ctx.gpr[20]);
    { const bool branch_taken = ctx.gpr[20] == 0u;
    // nop
      if (branch_taken) {
          goto L_088D1634;
      }
      goto L_088D1628;
    }
L_088D1628:
    ctx.set_gpr(2, rt.memory().aot_load32(ctx.gpr[20] + static_cast<std::uint32_t>(4)));
    ctx.set_gpr(2, ctx.gpr[2] + static_cast<std::uint32_t>(1));
    rt.memory().aot_store32(ctx.gpr[20] + static_cast<std::uint32_t>(4), ctx.gpr[2]);
    goto L_088D1634;
L_088D1634:
    ctx.set_gpr(2, 2245u << 16u);
    ctx.set_gpr(2, rt.memory().aot_load32(ctx.gpr[2] + static_cast<std::uint32_t>(26160)));
    { const bool branch_taken = ctx.gpr[2] != 0u;
    // nop
      if (branch_taken) {
          goto L_088D1698;
      }
      goto L_088D1644;
    }
L_088D1644:
    ctx.set_gpr(2, 2245u << 16u);
    ctx.set_gpr(4, rt.memory().aot_load32(ctx.gpr[2] + static_cast<std::uint32_t>(23984)));
    ctx.set_gpr(5, 2227u << 16u);
    ctx.set_gpr(5, ctx.gpr[5] + static_cast<std::uint32_t>(8960));
    ctx.set_gpr(31, 0x088D165Cu);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0080_entry, 80u, 149u, 0x08944B68u>(ctx, &aot_mem) && ctx.pc == 0x088D165Cu) goto L_088D165C;
    return;
L_088D165C:
    ctx.set_gpr(20, ctx.gpr[2] + 0u);
    { const bool branch_taken = ctx.gpr[20] == 0u;
    // nop
      if (branch_taken) {
          goto L_088D168C;
      }
      goto L_088D1668;
    }
L_088D1668:
    ctx.set_gpr(4, ctx.gpr[20] + 0u);
    ctx.set_gpr(2, 2245u << 16u);
    ctx.set_gpr(5, rt.memory().aot_load32(ctx.gpr[2] + static_cast<std::uint32_t>(26984)));
    ctx.set_gpr(31, 0x088D167Cu);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0080_entry, 80u, 857u, 0x08947F8Cu>(ctx, &aot_mem) && ctx.pc == 0x088D167Cu) goto L_088D167C;
    return;
L_088D167C:
    { const bool branch_taken = ctx.gpr[2] == 0u;
    // nop
      if (branch_taken) {
          goto L_088D168C;
      }
      goto L_088D1684;
    }
L_088D1684:
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_088D1690;
      }
      goto L_088D168C;
    }
L_088D168C:
    ctx.set_gpr(20, 0u + 0u);
    goto L_088D1690;
L_088D1690:
    ctx.set_gpr(2, 2245u << 16u);
    rt.memory().aot_store32(ctx.gpr[2] + static_cast<std::uint32_t>(26160), ctx.gpr[20]);
    goto L_088D1698;
L_088D1698:
    ctx.set_gpr(6, rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(52)));
    { const bool branch_taken = ctx.gpr[6] == 0u;
    // nop
      if (branch_taken) {
          goto L_088D17B4;
      }
      goto L_088D16A4;
    }
L_088D16A4:
    ctx.set_gpr(4, rt.memory().aot_load32(ctx.gpr[18] + static_cast<std::uint32_t>(20)));
    ctx.set_gpr(2, 2245u << 16u);
    ctx.set_gpr(5, rt.memory().aot_load32(ctx.gpr[2] + static_cast<std::uint32_t>(26160)));
    ctx.set_gpr(31, 0x088D16B8u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0081_entry, 81u, 371u, 0x08949A8Cu>(ctx, &aot_mem) && ctx.pc == 0x088D16B8u) goto L_088D16B8;
    return;
L_088D16B8:
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(48), ctx.gpr[2]);
    { const bool branch_taken = ctx.gpr[2] == 0u;
    // nop
      if (branch_taken) {
          goto L_088D16D0;
      }
      goto L_088D16C4;
    }
L_088D16C4:
    ctx.set_gpr(3, rt.memory().aot_load32(ctx.gpr[2] + static_cast<std::uint32_t>(4)));
    ctx.set_gpr(3, ctx.gpr[3] + static_cast<std::uint32_t>(1));
    rt.memory().aot_store32(ctx.gpr[2] + static_cast<std::uint32_t>(4), ctx.gpr[3]);
    goto L_088D16D0;
L_088D16D0:
    ctx.set_gpr(4, rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(48)));
    { const bool branch_taken = ctx.gpr[4] == 0u;
    // nop
      if (branch_taken) {
          goto L_088D17A0;
      }
      goto L_088D16DC;
    }
L_088D16DC:
    ctx.set_gpr(5, 0u + static_cast<std::uint32_t>(1));
    ctx.set_gpr(6, ctx.gpr[19] + 0u);
    ctx.set_gpr(25, rt.memory().aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(0)));
    ctx.set_gpr(25, rt.memory().aot_load32(ctx.gpr[25] + static_cast<std::uint32_t>(156)));
    jump_target = ctx.gpr[25];
    ctx.set_gpr(31, 0x088D16F4u);
    // nop
    ctx.pc = jump_target;
    if (rt.invoke_chained_call(ctx, &aot_mem) && ctx.pc == 0x088D16F4u) goto L_088D16F4;
    return;
L_088D16F4:
    ctx.set_gpr(21, ctx.gpr[2] + 0u);
    ctx.set_gpr(4, ctx.gpr[21] + 0u);
    ctx.set_gpr(31, 0x088D1704u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0004_entry, 4u, 508u, 0x08816764u>(ctx, &aot_mem) && ctx.pc == 0x088D1704u) goto L_088D1704;
    return;
L_088D1704:
    ctx.set_gpr(20, ctx.gpr[2] + static_cast<std::uint32_t>(1));
    ctx.set_gpr(4, 2227u << 16u);
    ctx.set_gpr(4, ctx.gpr[4] + static_cast<std::uint32_t>(20208));
    ctx.set_gpr(31, 0x088D1718u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0004_entry, 4u, 508u, 0x08816764u>(ctx, &aot_mem) && ctx.pc == 0x088D1718u) goto L_088D1718;
    return;
L_088D1718:
    ctx.set_gpr(5, ctx.gpr[20] + ctx.gpr[2]);
    ctx.set_gpr(4, ctx.gpr[19] + 0u);
    ctx.set_gpr(25, rt.memory().aot_load32(ctx.gpr[19] + static_cast<std::uint32_t>(0)));
    ctx.set_gpr(25, rt.memory().aot_load32(ctx.gpr[25] + static_cast<std::uint32_t>(92)));
    jump_target = ctx.gpr[25];
    ctx.set_gpr(31, 0x088D1730u);
    // nop
    ctx.pc = jump_target;
    if (rt.invoke_chained_call(ctx, &aot_mem) && ctx.pc == 0x088D1730u) goto L_088D1730;
    return;
L_088D1730:
    ctx.set_gpr(20, ctx.gpr[2] + 0u);
    ctx.set_gpr(4, ctx.gpr[20] + 0u);
    ctx.set_gpr(5, 2227u << 16u);
    ctx.set_gpr(5, ctx.gpr[5] + static_cast<std::uint32_t>(20220));
    ctx.set_gpr(6, 2227u << 16u);
    ctx.set_gpr(6, ctx.gpr[6] + static_cast<std::uint32_t>(20208));
    ctx.set_gpr(7, ctx.gpr[21] + 0u);
    ctx.set_gpr(31, 0x088D1754u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0004_entry, 4u, 423u, 0x08815FF4u>(ctx, &aot_mem) && ctx.pc == 0x088D1754u) goto L_088D1754;
    return;
L_088D1754:
    ctx.set_gpr(4, ctx.gpr[17] + 0u);
    ctx.set_gpr(5, ctx.gpr[18] + 0u);
    ctx.set_gpr(6, ctx.gpr[20] + 0u);
    ctx.set_gpr(7, ctx.gpr[16] + 0u);
    ctx.set_gpr(31, 0x088D176Cu);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0070_entry, 70u, 167u, 0x0891CCBCu>(ctx, &aot_mem) && ctx.pc == 0x088D176Cu) goto L_088D176C;
    return;
L_088D176C:
    ctx.set_gpr(22, ctx.gpr[2] & 255u);
    ctx.set_gpr(4, ctx.gpr[19] + 0u);
    ctx.set_gpr(5, ctx.gpr[20] + 0u);
    ctx.set_gpr(25, rt.memory().aot_load32(ctx.gpr[19] + static_cast<std::uint32_t>(0)));
    ctx.set_gpr(25, rt.memory().aot_load32(ctx.gpr[25] + static_cast<std::uint32_t>(144)));
    jump_target = ctx.gpr[25];
    ctx.set_gpr(31, 0x088D1788u);
    // nop
    ctx.pc = jump_target;
    if (rt.invoke_chained_call(ctx, &aot_mem) && ctx.pc == 0x088D1788u) goto L_088D1788;
    return;
L_088D1788:
    ctx.set_gpr(4, ctx.gpr[19] + 0u);
    ctx.set_gpr(5, ctx.gpr[21] + 0u);
    ctx.set_gpr(25, rt.memory().aot_load32(ctx.gpr[19] + static_cast<std::uint32_t>(0)));
    ctx.set_gpr(25, rt.memory().aot_load32(ctx.gpr[25] + static_cast<std::uint32_t>(144)));
    jump_target = ctx.gpr[25];
    ctx.set_gpr(31, 0x088D17A0u);
    // nop
    ctx.pc = jump_target;
    if (rt.invoke_chained_call(ctx, &aot_mem) && ctx.pc == 0x088D17A0u) goto L_088D17A0;
    return;
L_088D17A0:
    ctx.set_gpr(4, rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(48)));
    { const bool branch_taken = ctx.gpr[4] == 0u;
    // nop
      if (branch_taken) {
          goto L_088D17B4;
      }
      goto L_088D17AC;
    }
L_088D17AC:
    ctx.set_gpr(31, 0x088D17B4u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0014_entry, 14u, 257u, 0x0883D454u>(ctx, &aot_mem) && ctx.pc == 0x088D17B4u) goto L_088D17B4;
    return;
L_088D17B4:
    ctx.set_gpr(4, rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(52)));
    { const bool branch_taken = ctx.gpr[4] == 0u;
    // nop
      if (branch_taken) {
          goto L_088D17C8;
      }
      goto L_088D17C0;
    }
L_088D17C0:
    ctx.set_gpr(31, 0x088D17C8u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0014_entry, 14u, 257u, 0x0883D454u>(ctx, &aot_mem) && ctx.pc == 0x088D17C8u) goto L_088D17C8;
    return;
L_088D17C8:
    ctx.set_gpr(4, rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(56)));
    { const bool branch_taken = ctx.gpr[4] == 0u;
    // nop
      if (branch_taken) {
          goto L_088D17DC;
      }
      goto L_088D17D4;
    }
L_088D17D4:
    ctx.set_gpr(31, 0x088D17DCu);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0014_entry, 14u, 257u, 0x0883D454u>(ctx, &aot_mem) && ctx.pc == 0x088D17DCu) goto L_088D17DC;
    return;
L_088D17DC:
    ctx.set_gpr(4, rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(60)));
    { const bool branch_taken = ctx.gpr[4] == 0u;
    // nop
      if (branch_taken) {
          goto L_088D17F0;
      }
      goto L_088D17E8;
    }
L_088D17E8:
    ctx.set_gpr(31, 0x088D17F0u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0014_entry, 14u, 257u, 0x0883D454u>(ctx, &aot_mem) && ctx.pc == 0x088D17F0u) goto L_088D17F0;
    return;
L_088D17F0:
    ctx.set_gpr(2, ctx.gpr[22] + 0u);
    ctx.set_gpr(31, rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(28)));
    ctx.set_gpr(22, rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(24)));
    ctx.set_gpr(21, rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(20)));
    ctx.set_gpr(20, rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(16)));
    ctx.set_gpr(19, rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(12)));
    ctx.set_gpr(18, rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(8)));
    ctx.set_gpr(17, rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(4)));
    ctx.set_gpr(16, rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(0)));
    ctx.set_gpr(29, ctx.gpr[29] + static_cast<std::uint32_t>(64));
    jump_target = ctx.gpr[31];
    // nop
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_088D1820:
    ctx.set_gpr(29, ctx.gpr[29] + static_cast<std::uint32_t>(-48));
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(28), ctx.gpr[31]);
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(24), ctx.gpr[19]);
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(20), ctx.gpr[18]);
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(16), ctx.gpr[17]);
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(12), ctx.gpr[16]);
    ctx.set_gpr(19, ctx.gpr[4] + 0u);
    ctx.set_gpr(18, ctx.gpr[5] + 0u);
    ctx.set_gpr(17, ctx.gpr[6] + 0u);
    ctx.set_gpr(31, 0x088D184Cu);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0078_entry, 78u, 228u, 0x0893CE9Cu>(ctx, &aot_mem) && ctx.pc == 0x088D184Cu) goto L_088D184C;
    return;
L_088D184C:
    ctx.set_gpr(4, rt.memory().aot_load32(ctx.gpr[2] + static_cast<std::uint32_t>(0)));
    ctx.set_gpr(31, 0x088D1858u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0078_entry, 78u, 199u, 0x0893CC68u>(ctx, &aot_mem) && ctx.pc == 0x088D1858u) goto L_088D1858;
    return;
L_088D1858:
    ctx.set_gpr(4, rt.memory().aot_load32(ctx.gpr[17] + static_cast<std::uint32_t>(0)));
    ctx.set_gpr(5, 0u + static_cast<std::uint32_t>(1));
    ctx.set_gpr(6, ctx.gpr[2] + 0u);
    ctx.set_gpr(25, rt.memory().aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(0)));
    ctx.set_gpr(25, rt.memory().aot_load32(ctx.gpr[25] + static_cast<std::uint32_t>(156)));
    jump_target = ctx.gpr[25];
    ctx.set_gpr(31, 0x088D1874u);
    // nop
    ctx.pc = jump_target;
    if (rt.invoke_chained_call(ctx, &aot_mem) && ctx.pc == 0x088D1874u) goto L_088D1874;
    return;
L_088D1874:
    ctx.set_gpr(16, ctx.gpr[2] + 0u);
    ctx.set_gpr(4, ctx.gpr[18] + 0u);
    ctx.set_gpr(5, ctx.gpr[16] + 0u);
    ctx.set_gpr(6, 0u + 0u);
    ctx.set_gpr(25, rt.memory().aot_load32(ctx.gpr[18] + static_cast<std::uint32_t>(0)));
    ctx.set_gpr(25, rt.memory().aot_load32(ctx.gpr[25] + static_cast<std::uint32_t>(96)));
    jump_target = ctx.gpr[25];
    ctx.set_gpr(31, 0x088D1894u);
    // nop
    ctx.pc = jump_target;
    if (rt.invoke_chained_call(ctx, &aot_mem) && ctx.pc == 0x088D1894u) goto L_088D1894;
    return;
L_088D1894:
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(44), ctx.gpr[2]);
    { const bool branch_taken = ctx.gpr[2] == 0u;
    // nop
      if (branch_taken) {
          goto L_088D18AC;
      }
      goto L_088D18A0;
    }
L_088D18A0:
    ctx.set_gpr(3, rt.memory().aot_load32(ctx.gpr[2] + static_cast<std::uint32_t>(4)));
    ctx.set_gpr(3, ctx.gpr[3] + static_cast<std::uint32_t>(1));
    rt.memory().aot_store32(ctx.gpr[2] + static_cast<std::uint32_t>(4), ctx.gpr[3]);
    goto L_088D18AC;
L_088D18AC:
    ctx.set_gpr(2, rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(44)));
    { const bool branch_taken = ctx.gpr[2] != 0u;
    // nop
      if (branch_taken) {
          goto L_088D18D8;
      }
      goto L_088D18B8;
    }
L_088D18B8:
    ctx.set_gpr(5, rt.memory().aot_load32(ctx.gpr[17] + static_cast<std::uint32_t>(0)));
    ctx.set_gpr(4, rt.memory().aot_load32(ctx.gpr[18] + static_cast<std::uint32_t>(20)));
    ctx.set_gpr(31, 0x088D18C8u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0081_entry, 81u, 299u, 0x089494E0u>(ctx, &aot_mem) && ctx.pc == 0x088D18C8u) goto L_088D18C8;
    return;
L_088D18C8:
    ctx.set_gpr(4, ctx.gpr[29] + static_cast<std::uint32_t>(44));
    ctx.set_gpr(5, rt.memory().aot_load32(ctx.gpr[17] + static_cast<std::uint32_t>(0)));
    ctx.set_gpr(31, 0x088D18D8u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0085_entry, 85u, 61u, 0x089584C4u>(ctx, &aot_mem) && ctx.pc == 0x088D18D8u) goto L_088D18D8;
    return;
L_088D18D8:
    ctx.set_gpr(31, 0x088D18E0u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0078_entry, 78u, 228u, 0x0893CE9Cu>(ctx, &aot_mem) && ctx.pc == 0x088D18E0u) goto L_088D18E0;
    return;
L_088D18E0:
    ctx.set_gpr(4, rt.memory().aot_load32(ctx.gpr[2] + static_cast<std::uint32_t>(0)));
    ctx.set_gpr(31, 0x088D18ECu);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0078_entry, 78u, 199u, 0x0893CC68u>(ctx, &aot_mem) && ctx.pc == 0x088D18ECu) goto L_088D18EC;
    return;
L_088D18EC:
    ctx.set_gpr(4, ctx.gpr[2] + 0u);
    ctx.set_gpr(5, ctx.gpr[16] + 0u);
    ctx.set_gpr(25, rt.memory().aot_load32(ctx.gpr[2] + static_cast<std::uint32_t>(0)));
    ctx.set_gpr(25, rt.memory().aot_load32(ctx.gpr[25] + static_cast<std::uint32_t>(144)));
    jump_target = ctx.gpr[25];
    ctx.set_gpr(31, 0x088D1904u);
    // nop
    ctx.pc = jump_target;
    if (rt.invoke_chained_call(ctx, &aot_mem) && ctx.pc == 0x088D1904u) goto L_088D1904;
    return;
L_088D1904:
    ctx.set_gpr(3, rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(44)));
    rt.memory().aot_store32(ctx.gpr[19] + static_cast<std::uint32_t>(0), ctx.gpr[3]);
    { const bool branch_taken = ctx.gpr[3] == 0u;
    // nop
      if (branch_taken) {
          goto L_088D1920;
      }
      goto L_088D1914;
    }
L_088D1914:
    ctx.set_gpr(2, rt.memory().aot_load32(ctx.gpr[3] + static_cast<std::uint32_t>(4)));
    ctx.set_gpr(2, ctx.gpr[2] + static_cast<std::uint32_t>(1));
    rt.memory().aot_store32(ctx.gpr[3] + static_cast<std::uint32_t>(4), ctx.gpr[2]);
    goto L_088D1920;
L_088D1920:
    ctx.set_gpr(4, rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(44)));
    { const bool branch_taken = ctx.gpr[4] == 0u;
    // nop
      if (branch_taken) {
          goto L_088D1934;
      }
      goto L_088D192C;
    }
L_088D192C:
    ctx.set_gpr(31, 0x088D1934u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0014_entry, 14u, 257u, 0x0883D454u>(ctx, &aot_mem) && ctx.pc == 0x088D1934u) goto L_088D1934;
    return;
L_088D1934:
    ctx.set_gpr(2, 0u + 0u);
    ctx.set_gpr(31, rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(28)));
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
L_088D1958:
    ctx.set_gpr(29, ctx.gpr[29] + static_cast<std::uint32_t>(-16));
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(12), ctx.gpr[31]);
    ctx.set_gpr(3, ctx.gpr[4] + 0u);
    ctx.set_gpr(2, rt.memory().aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(76)));
    ctx.set_gpr(2, ctx.gpr[2] + static_cast<std::uint32_t>(2));
    ctx.set_gpr(4, ctx.gpr[5] + 0u);
    ctx.set_gpr(5, ctx.gpr[2] + 0u);
    ctx.set_gpr(6, ctx.gpr[3] + static_cast<std::uint32_t>(12));
    ctx.set_gpr(31, 0x088D1980u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0117_entry, 117u, 243u, 0x089D9FF0u>(ctx, &aot_mem) && ctx.pc == 0x088D1980u) goto L_088D1980;
    return;
L_088D1980:
    ctx.set_gpr(31, rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(12)));
    ctx.set_gpr(29, ctx.gpr[29] + static_cast<std::uint32_t>(16));
    jump_target = ctx.gpr[31];
    // nop
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_088D1990:
    ctx.set_gpr(3, rt.memory().aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(76)));
    rt.memory().aot_store16(ctx.gpr[4] + static_cast<std::uint32_t>(10), static_cast<std::uint16_t>(ctx.gpr[3]));
    jump_target = ctx.gpr[31];
    // nop
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_088D19A0:
    ctx.set_gpr(29, ctx.gpr[29] + static_cast<std::uint32_t>(-16));
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(12), ctx.gpr[31]);
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(8), ctx.gpr[16]);
    ctx.set_gpr(16, ctx.gpr[4] + 0u);
    ctx.set_gpr(31, 0x088D19B8u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0048_entry, 48u, 154u, 0x088C4F18u>(ctx, &aot_mem) && ctx.pc == 0x088D19B8u) goto L_088D19B8;
    return;
L_088D19B8:
    ctx.set_gpr(5, static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int16_t>(rt.memory().aot_load16(ctx.gpr[16] + static_cast<std::uint32_t>(76))))));
    ctx.set_gpr(4, ctx.gpr[16] + 0u);
    ctx.set_gpr(31, 0x088D19C8u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0048_entry, 48u, 153u, 0x088C4F0Cu>(ctx, &aot_mem) && ctx.pc == 0x088D19C8u) goto L_088D19C8;
    return;
L_088D19C8:
    ctx.set_gpr(31, rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(12)));
    ctx.set_gpr(16, rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(8)));
    ctx.set_gpr(29, ctx.gpr[29] + static_cast<std::uint32_t>(16));
    jump_target = ctx.gpr[31];
    // nop
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_088D19DC:
    ctx.set_gpr(29, ctx.gpr[29] + static_cast<std::uint32_t>(-16));
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(12), ctx.gpr[31]);
    ctx.set_gpr(2, static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int16_t>(ctx.gpr[5]))));
    rt.memory().aot_store32(ctx.gpr[4] + static_cast<std::uint32_t>(76), ctx.gpr[2]);
    ctx.set_gpr(31, 0x088D19F4u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0048_entry, 48u, 153u, 0x088C4F0Cu>(ctx, &aot_mem) && ctx.pc == 0x088D19F4u) goto L_088D19F4;
    return;
L_088D19F4:
    ctx.set_gpr(31, rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(12)));
    ctx.set_gpr(29, ctx.gpr[29] + static_cast<std::uint32_t>(16));
    jump_target = ctx.gpr[31];
    // nop
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_088D1A04:
    ctx.set_gpr(29, ctx.gpr[29] + static_cast<std::uint32_t>(-80));
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(12), ctx.gpr[31]);
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(8), ctx.gpr[17]);
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(4), ctx.gpr[16]);
    ctx.set_gpr(17, ctx.gpr[4] + 0u);
    ctx.set_gpr(16, ctx.gpr[5] + 0u);
    ctx.set_gpr(4, ctx.gpr[29] + static_cast<std::uint32_t>(16));
    ctx.set_gpr(31, 0x088D1A28u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0126_entry, 126u, 723u, 0x089FF868u>(ctx, &aot_mem) && ctx.pc == 0x088D1A28u) goto L_088D1A28;
    return;
L_088D1A28:
    ctx.set_gpr(2, rt.memory().aot_load32(ctx.gpr[17] + static_cast<std::uint32_t>(76)));
    ctx.set_gpr(5, ctx.gpr[2] + static_cast<std::uint32_t>(2));
    ctx.set_gpr(4, ctx.gpr[16] + 0u);
    ctx.set_gpr(6, ctx.gpr[29] + static_cast<std::uint32_t>(16));
    ctx.set_gpr(25, rt.memory().aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(0)));
    ctx.set_gpr(25, rt.memory().aot_load32(ctx.gpr[25] + static_cast<std::uint32_t>(848)));
    jump_target = ctx.gpr[25];
    ctx.set_gpr(31, 0x088D1A48u);
    // nop
    ctx.pc = jump_target;
    if (rt.invoke_chained_call(ctx, &aot_mem) && ctx.pc == 0x088D1A48u) goto L_088D1A48;
    return;
L_088D1A48:
    ctx.set_gpr(4, ctx.gpr[17] + 0u);
    ctx.set_gpr(5, ctx.gpr[29] + static_cast<std::uint32_t>(16));
    ctx.set_gpr(25, rt.memory().aot_load32(ctx.gpr[17] + static_cast<std::uint32_t>(0)));
    ctx.set_gpr(25, rt.memory().aot_load32(ctx.gpr[25] + static_cast<std::uint32_t>(136)));
    jump_target = ctx.gpr[25];
    ctx.set_gpr(31, 0x088D1A60u);
    // nop
    ctx.pc = jump_target;
    if (rt.invoke_chained_call(ctx, &aot_mem) && ctx.pc == 0x088D1A60u) goto L_088D1A60;
    return;
L_088D1A60:
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
L_088D1A78:
    ctx.set_gpr(29, ctx.gpr[29] + static_cast<std::uint32_t>(-16));
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(12), ctx.gpr[31]);
    ctx.set_gpr(4, ctx.gpr[4] + static_cast<std::uint32_t>(12));
    ctx.set_gpr(31, 0x088D1A8Cu);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0126_entry, 126u, 747u, 0x089FFC4Cu>(ctx, &aot_mem) && ctx.pc == 0x088D1A8Cu) goto L_088D1A8C;
    return;
L_088D1A8C:
    ctx.set_gpr(31, rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(12)));
    ctx.set_gpr(29, ctx.gpr[29] + static_cast<std::uint32_t>(16));
    jump_target = ctx.gpr[31];
    // nop
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_088D1A9C:
    ctx.set_gpr(29, ctx.gpr[29] + static_cast<std::uint32_t>(-16));
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(12), ctx.gpr[31]);
    ctx.set_gpr(4, ctx.gpr[5] + 0u);
    ctx.set_gpr(5, 0u + static_cast<std::uint32_t>(8));
    ctx.set_gpr(25, rt.memory().aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(0)));
    ctx.set_gpr(25, rt.memory().aot_load32(ctx.gpr[25] + static_cast<std::uint32_t>(92)));
    jump_target = ctx.gpr[25];
    ctx.set_gpr(31, 0x088D1ABCu);
    // nop
    ctx.pc = jump_target;
    if (rt.invoke_chained_call(ctx, &aot_mem) && ctx.pc == 0x088D1ABCu) goto L_088D1ABC;
    return;
L_088D1ABC:
    ctx.set_gpr(31, rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(12)));
    ctx.set_gpr(29, ctx.gpr[29] + static_cast<std::uint32_t>(16));
    jump_target = ctx.gpr[31];
    // nop
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_088D1ACC:
    ctx.set_gpr(29, ctx.gpr[29] + static_cast<std::uint32_t>(-16));
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(12), ctx.gpr[31]);
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(8), ctx.gpr[17]);
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(4), ctx.gpr[16]);
    ctx.set_gpr(17, ctx.gpr[4] + 0u);
    ctx.set_gpr(16, ctx.gpr[5] + 0u);
    ctx.set_gpr(4, ctx.gpr[16] + 0u);
    ctx.set_gpr(5, 0u + static_cast<std::uint32_t>(4));
    ctx.set_gpr(31, 0x088D1AF4u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0047_entry, 47u, 670u, 0x088C3CA8u>(ctx, &aot_mem) && ctx.pc == 0x088D1AF4u) goto L_088D1AF4;
    return;
L_088D1AF4:
    ctx.set_gpr(2, 0u + static_cast<std::uint32_t>(49));
    rt.memory().aot_store32(ctx.gpr[16] + static_cast<std::uint32_t>(0), ctx.gpr[2]);
    ctx.set_gpr(4, ctx.gpr[16] + static_cast<std::uint32_t>(160));
    ctx.set_gpr(5, ctx.gpr[17] + static_cast<std::uint32_t>(12));
    ctx.set_gpr(31, 0x088D1B0Cu);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0126_entry, 126u, 747u, 0x089FFC4Cu>(ctx, &aot_mem) && ctx.pc == 0x088D1B0Cu) goto L_088D1B0C;
    return;
L_088D1B0C:
    ctx.set_gpr(2, static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int16_t>(rt.memory().aot_load16(ctx.gpr[17] + static_cast<std::uint32_t>(80))))));
    { const bool branch_taken = static_cast<std::int32_t>(ctx.gpr[2]) <= 0;
    // nop
      if (branch_taken) {
          goto L_088D1B20;
      }
      goto L_088D1B18;
    }
L_088D1B18:
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_088D1B24;
      }
      goto L_088D1B20;
    }
L_088D1B20:
    ctx.set_gpr(2, 0u + 0u);
    goto L_088D1B24;
L_088D1B24:
    rt.memory().aot_store16(ctx.gpr[16] + static_cast<std::uint32_t>(12), static_cast<std::uint16_t>(ctx.gpr[2]));
    ctx.set_gpr(2, static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int16_t>(rt.memory().aot_load16(ctx.gpr[17] + static_cast<std::uint32_t>(76))))));
    rt.memory().aot_store8(ctx.gpr[16] + static_cast<std::uint32_t>(5), static_cast<std::uint8_t>(ctx.gpr[2]));
    ctx.set_gpr(2, rt.memory().aot_load8(ctx.gpr[17] + static_cast<std::uint32_t>(82)));
    rt.memory().aot_store8(ctx.gpr[16] + static_cast<std::uint32_t>(6), static_cast<std::uint8_t>(ctx.gpr[2]));
    ctx.set_gpr(4, ctx.gpr[16] + 0u);
    ctx.set_gpr(5, 0u + static_cast<std::uint32_t>(40));
    ctx.set_gpr(31, 0x088D1B48u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0047_entry, 47u, 678u, 0x088C3D30u>(ctx, &aot_mem) && ctx.pc == 0x088D1B48u) goto L_088D1B48;
    return;
L_088D1B48:
    ctx.set_gpr(4, ctx.gpr[16] + 0u);
    ctx.set_gpr(5, ctx.gpr[17] + 0u);
    ctx.set_gpr(31, 0x088D1B58u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0047_entry, 47u, 682u, 0x088C3DC0u>(ctx, &aot_mem) && ctx.pc == 0x088D1B58u) goto L_088D1B58;
    return;
L_088D1B58:
    ctx.set_gpr(2, 0u + static_cast<std::uint32_t>(1));
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
L_088D1B74:
    ctx.set_gpr(29, ctx.gpr[29] + static_cast<std::uint32_t>(-16));
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(12), ctx.gpr[31]);
    ctx.set_gpr(31, 0x088D1B84u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0048_entry, 48u, 167u, 0x088C501Cu>(ctx, &aot_mem) && ctx.pc == 0x088D1B84u) goto L_088D1B84;
    return;
L_088D1B84:
    ctx.set_gpr(31, rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(12)));
    ctx.set_gpr(29, ctx.gpr[29] + static_cast<std::uint32_t>(16));
    jump_target = ctx.gpr[31];
    // nop
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_088D1B94:
    ctx.set_gpr(3, rt.memory().aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(16)));
    rt.memory().aot_store16(ctx.gpr[4] + static_cast<std::uint32_t>(10), static_cast<std::uint16_t>(ctx.gpr[3]));
    jump_target = ctx.gpr[31];
    // nop
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_088D1BA4:
    jump_target = ctx.gpr[31];
    // nop
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_088D1BAC:
    jump_target = ctx.gpr[31];
    // nop
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_088D1BB4:
    ctx.set_gpr(29, ctx.gpr[29] + static_cast<std::uint32_t>(-16));
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(12), ctx.gpr[31]);
    ctx.set_gpr(2, ctx.gpr[4] + 0u);
    ctx.set_gpr(4, ctx.gpr[5] + 0u);
    ctx.set_gpr(5, rt.memory().aot_load32(ctx.gpr[2] + static_cast<std::uint32_t>(16)));
    ctx.set_gpr(6, rt.memory().aot_load8(ctx.gpr[2] + static_cast<std::uint32_t>(12)));
    ctx.set_gpr(31, 0x088D1BD4u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0119_entry, 119u, 534u, 0x089E3260u>(ctx, &aot_mem) && ctx.pc == 0x088D1BD4u) goto L_088D1BD4;
    return;
L_088D1BD4:
    ctx.set_gpr(31, rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(12)));
    ctx.set_gpr(29, ctx.gpr[29] + static_cast<std::uint32_t>(16));
    jump_target = ctx.gpr[31];
    // nop
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_088D1BE4:
    ctx.set_gpr(29, ctx.gpr[29] + static_cast<std::uint32_t>(-16));
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(12), ctx.gpr[31]);
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(8), ctx.gpr[16]);
    ctx.set_gpr(16, ctx.gpr[4] + 0u);
    ctx.set_gpr(31, 0x088D1BFCu);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0048_entry, 48u, 154u, 0x088C4F18u>(ctx, &aot_mem) && ctx.pc == 0x088D1BFCu) goto L_088D1BFC;
    return;
L_088D1BFC:
    ctx.set_gpr(5, static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int16_t>(rt.memory().aot_load16(ctx.gpr[16] + static_cast<std::uint32_t>(16))))));
    ctx.set_gpr(4, ctx.gpr[16] + 0u);
    ctx.set_gpr(31, 0x088D1C0Cu);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0048_entry, 48u, 153u, 0x088C4F0Cu>(ctx, &aot_mem) && ctx.pc == 0x088D1C0Cu) goto L_088D1C0C;
    return;
L_088D1C0C:
    ctx.set_gpr(31, rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(12)));
    ctx.set_gpr(16, rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(8)));
    ctx.set_gpr(29, ctx.gpr[29] + static_cast<std::uint32_t>(16));
    jump_target = ctx.gpr[31];
    // nop
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_088D1C20:
    ctx.set_gpr(29, ctx.gpr[29] + static_cast<std::uint32_t>(-16));
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(12), ctx.gpr[31]);
    ctx.set_gpr(2, static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int16_t>(ctx.gpr[5]))));
    rt.memory().aot_store32(ctx.gpr[4] + static_cast<std::uint32_t>(16), ctx.gpr[2]);
    ctx.set_gpr(31, 0x088D1C38u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0048_entry, 48u, 153u, 0x088C4F0Cu>(ctx, &aot_mem) && ctx.pc == 0x088D1C38u) goto L_088D1C38;
    return;
L_088D1C38:
    ctx.set_gpr(31, rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(12)));
    ctx.set_gpr(29, ctx.gpr[29] + static_cast<std::uint32_t>(16));
    jump_target = ctx.gpr[31];
    // nop
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_088D1C48:
    ctx.set_gpr(29, ctx.gpr[29] + static_cast<std::uint32_t>(-16));
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(12), ctx.gpr[31]);
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(8), ctx.gpr[16]);
    ctx.set_gpr(16, ctx.gpr[4] + 0u);
    ctx.set_gpr(4, ctx.gpr[5] + 0u);
    ctx.set_gpr(5, rt.memory().aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(16)));
    ctx.set_gpr(25, rt.memory().aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(0)));
    ctx.set_gpr(25, rt.memory().aot_load32(ctx.gpr[25] + static_cast<std::uint32_t>(860)));
    jump_target = ctx.gpr[25];
    ctx.set_gpr(31, 0x088D1C70u);
    // nop
    ctx.pc = jump_target;
    if (rt.invoke_chained_call(ctx, &aot_mem) && ctx.pc == 0x088D1C70u) goto L_088D1C70;
    return;
L_088D1C70:
    ctx.set_gpr(4, ctx.gpr[16] + 0u);
    ctx.set_gpr(5, ctx.gpr[2] + 0u);
    ctx.set_gpr(25, rt.memory().aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(0)));
    ctx.set_gpr(25, rt.memory().aot_load32(ctx.gpr[25] + static_cast<std::uint32_t>(136)));
    jump_target = ctx.gpr[25];
    ctx.set_gpr(31, 0x088D1C88u);
    // nop
    ctx.pc = jump_target;
    if (rt.invoke_chained_call(ctx, &aot_mem) && ctx.pc == 0x088D1C88u) goto L_088D1C88;
    return;
L_088D1C88:
    ctx.set_gpr(31, rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(12)));
    ctx.set_gpr(16, rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(8)));
    ctx.set_gpr(29, ctx.gpr[29] + static_cast<std::uint32_t>(16));
    jump_target = ctx.gpr[31];
    // nop
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_088D1C9C:
    rt.memory().aot_store8(ctx.gpr[4] + static_cast<std::uint32_t>(12), static_cast<std::uint8_t>(ctx.gpr[5]));
    jump_target = ctx.gpr[31];
    // nop
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_088D1CA8:
    ctx.set_gpr(2, 0u + 0u);
    jump_target = ctx.gpr[31];
    // nop
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_088D1CB4:
    ctx.set_gpr(29, ctx.gpr[29] + static_cast<std::uint32_t>(-16));
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(12), ctx.gpr[31]);
    ctx.set_gpr(4, ctx.gpr[5] + 0u);
    ctx.set_gpr(5, 0u + static_cast<std::uint32_t>(8));
    ctx.set_gpr(25, rt.memory().aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(0)));
    ctx.set_gpr(25, rt.memory().aot_load32(ctx.gpr[25] + static_cast<std::uint32_t>(92)));
    jump_target = ctx.gpr[25];
    ctx.set_gpr(31, 0x088D1CD4u);
    // nop
    ctx.pc = jump_target;
    if (rt.invoke_chained_call(ctx, &aot_mem) && ctx.pc == 0x088D1CD4u) goto L_088D1CD4;
    return;
L_088D1CD4:
    ctx.set_gpr(31, rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(12)));
    ctx.set_gpr(29, ctx.gpr[29] + static_cast<std::uint32_t>(16));
    jump_target = ctx.gpr[31];
    // nop
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_088D1CE4:
    ctx.set_gpr(29, ctx.gpr[29] + static_cast<std::uint32_t>(-16));
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(12), ctx.gpr[31]);
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(8), ctx.gpr[17]);
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(4), ctx.gpr[16]);
    ctx.set_gpr(17, ctx.gpr[4] + 0u);
    ctx.set_gpr(16, ctx.gpr[5] + 0u);
    ctx.set_gpr(2, rt.memory().aot_load8(ctx.gpr[4] + static_cast<std::uint32_t>(12)));
    rt.memory().aot_store8(ctx.gpr[5] + static_cast<std::uint32_t>(4), static_cast<std::uint8_t>(ctx.gpr[2]));
    ctx.set_gpr(2, static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int16_t>(rt.memory().aot_load16(ctx.gpr[4] + static_cast<std::uint32_t>(16))))));
    rt.memory().aot_store8(ctx.gpr[5] + static_cast<std::uint32_t>(5), static_cast<std::uint8_t>(ctx.gpr[2]));
    ctx.set_gpr(2, 0u + static_cast<std::uint32_t>(8));
    rt.memory().aot_store32(ctx.gpr[5] + static_cast<std::uint32_t>(0), ctx.gpr[2]);
    ctx.set_gpr(4, ctx.gpr[16] + 0u);
    ctx.set_gpr(5, 0u + static_cast<std::uint32_t>(41));
    ctx.set_gpr(31, 0x088D1D24u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0047_entry, 47u, 678u, 0x088C3D30u>(ctx, &aot_mem) && ctx.pc == 0x088D1D24u) goto L_088D1D24;
    return;
L_088D1D24:
    ctx.set_gpr(4, ctx.gpr[16] + 0u);
    ctx.set_gpr(5, ctx.gpr[17] + 0u);
    ctx.set_gpr(31, 0x088D1D34u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0047_entry, 47u, 682u, 0x088C3DC0u>(ctx, &aot_mem) && ctx.pc == 0x088D1D34u) goto L_088D1D34;
    return;
L_088D1D34:
    ctx.set_gpr(2, 0u + static_cast<std::uint32_t>(1));
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
L_088D1D50:
    ctx.set_gpr(29, ctx.gpr[29] + static_cast<std::uint32_t>(-16));
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(12), ctx.gpr[31]);
    ctx.set_gpr(31, 0x088D1D60u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0048_entry, 48u, 167u, 0x088C501Cu>(ctx, &aot_mem) && ctx.pc == 0x088D1D60u) goto L_088D1D60;
    return;
L_088D1D60:
    ctx.set_gpr(31, rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(12)));
    ctx.set_gpr(29, ctx.gpr[29] + static_cast<std::uint32_t>(16));
    jump_target = ctx.gpr[31];
    // nop
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_088D1D70:
    ctx.set_gpr(3, rt.memory().aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(16)));
    rt.memory().aot_store16(ctx.gpr[4] + static_cast<std::uint32_t>(10), static_cast<std::uint16_t>(ctx.gpr[3]));
    jump_target = ctx.gpr[31];
    // nop
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_088D1D80:
    jump_target = ctx.gpr[31];
    // nop
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_088D1D88:
    jump_target = ctx.gpr[31];
    // nop
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_088D1D90:
    ctx.set_gpr(29, ctx.gpr[29] + static_cast<std::uint32_t>(-16));
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(12), ctx.gpr[31]);
    ctx.set_gpr(2, ctx.gpr[4] + 0u);
    ctx.set_gpr(4, ctx.gpr[5] + 0u);
    ctx.set_gpr(5, rt.memory().aot_load32(ctx.gpr[2] + static_cast<std::uint32_t>(16)));
    ctx.set_gpr(6, rt.memory().aot_load8(ctx.gpr[2] + static_cast<std::uint32_t>(12)));
    ctx.set_gpr(31, 0x088D1DB0u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0119_entry, 119u, 270u, 0x089E16F4u>(ctx, &aot_mem) && ctx.pc == 0x088D1DB0u) goto L_088D1DB0;
    return;
L_088D1DB0:
    ctx.set_gpr(31, rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(12)));
    ctx.set_gpr(29, ctx.gpr[29] + static_cast<std::uint32_t>(16));
    jump_target = ctx.gpr[31];
    // nop
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_088D1DC0:
    ctx.set_gpr(29, ctx.gpr[29] + static_cast<std::uint32_t>(-16));
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(12), ctx.gpr[31]);
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(8), ctx.gpr[16]);
    ctx.set_gpr(16, ctx.gpr[4] + 0u);
    ctx.set_gpr(31, 0x088D1DD8u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0048_entry, 48u, 154u, 0x088C4F18u>(ctx, &aot_mem) && ctx.pc == 0x088D1DD8u) goto L_088D1DD8;
    return;
L_088D1DD8:
    ctx.set_gpr(5, static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int16_t>(rt.memory().aot_load16(ctx.gpr[16] + static_cast<std::uint32_t>(16))))));
    ctx.set_gpr(4, ctx.gpr[16] + 0u);
    ctx.set_gpr(31, 0x088D1DE8u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0048_entry, 48u, 153u, 0x088C4F0Cu>(ctx, &aot_mem) && ctx.pc == 0x088D1DE8u) goto L_088D1DE8;
    return;
L_088D1DE8:
    ctx.set_gpr(31, rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(12)));
    ctx.set_gpr(16, rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(8)));
    ctx.set_gpr(29, ctx.gpr[29] + static_cast<std::uint32_t>(16));
    jump_target = ctx.gpr[31];
    // nop
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_088D1DFC:
    ctx.set_gpr(29, ctx.gpr[29] + static_cast<std::uint32_t>(-16));
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(12), ctx.gpr[31]);
    ctx.set_gpr(2, static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int16_t>(ctx.gpr[5]))));
    rt.memory().aot_store32(ctx.gpr[4] + static_cast<std::uint32_t>(16), ctx.gpr[2]);
    ctx.set_gpr(31, 0x088D1E14u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0048_entry, 48u, 153u, 0x088C4F0Cu>(ctx, &aot_mem) && ctx.pc == 0x088D1E14u) goto L_088D1E14;
    return;
L_088D1E14:
    ctx.set_gpr(31, rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(12)));
    ctx.set_gpr(29, ctx.gpr[29] + static_cast<std::uint32_t>(16));
    jump_target = ctx.gpr[31];
    // nop
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_088D1E24:
    ctx.set_gpr(29, ctx.gpr[29] + static_cast<std::uint32_t>(-16));
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(12), ctx.gpr[31]);
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(8), ctx.gpr[16]);
    ctx.set_gpr(16, ctx.gpr[4] + 0u);
    ctx.set_gpr(4, ctx.gpr[5] + 0u);
    ctx.set_gpr(5, rt.memory().aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(16)));
    ctx.set_gpr(25, rt.memory().aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(0)));
    ctx.set_gpr(25, rt.memory().aot_load32(ctx.gpr[25] + static_cast<std::uint32_t>(464)));
    jump_target = ctx.gpr[25];
    ctx.set_gpr(31, 0x088D1E4Cu);
    // nop
    ctx.pc = jump_target;
    if (rt.invoke_chained_call(ctx, &aot_mem) && ctx.pc == 0x088D1E4Cu) goto L_088D1E4C;
    return;
L_088D1E4C:
    ctx.set_gpr(4, ctx.gpr[16] + 0u);
    ctx.set_gpr(5, ctx.gpr[2] + 0u);
    ctx.set_gpr(25, rt.memory().aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(0)));
    ctx.set_gpr(25, rt.memory().aot_load32(ctx.gpr[25] + static_cast<std::uint32_t>(136)));
    jump_target = ctx.gpr[25];
    ctx.set_gpr(31, 0x088D1E64u);
    // nop
    ctx.pc = jump_target;
    if (rt.invoke_chained_call(ctx, &aot_mem) && ctx.pc == 0x088D1E64u) goto L_088D1E64;
    return;
L_088D1E64:
    ctx.set_gpr(31, rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(12)));
    ctx.set_gpr(16, rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(8)));
    ctx.set_gpr(29, ctx.gpr[29] + static_cast<std::uint32_t>(16));
    jump_target = ctx.gpr[31];
    // nop
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_088D1E78:
    ctx.set_gpr(29, ctx.gpr[29] + static_cast<std::uint32_t>(-16));
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(12), ctx.gpr[31]);
    ctx.set_gpr(4, ctx.gpr[5] + 0u);
    ctx.set_gpr(5, 0u + static_cast<std::uint32_t>(8));
    ctx.set_gpr(25, rt.memory().aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(0)));
    ctx.set_gpr(25, rt.memory().aot_load32(ctx.gpr[25] + static_cast<std::uint32_t>(92)));
    jump_target = ctx.gpr[25];
    ctx.set_gpr(31, 0x088D1E98u);
    // nop
    ctx.pc = jump_target;
    if (rt.invoke_chained_call(ctx, &aot_mem) && ctx.pc == 0x088D1E98u) goto L_088D1E98;
    return;
L_088D1E98:
    ctx.set_gpr(31, rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(12)));
    ctx.set_gpr(29, ctx.gpr[29] + static_cast<std::uint32_t>(16));
    jump_target = ctx.gpr[31];
    // nop
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_088D1EA8:
    ctx.set_gpr(29, ctx.gpr[29] + static_cast<std::uint32_t>(-16));
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(12), ctx.gpr[31]);
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(8), ctx.gpr[17]);
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(4), ctx.gpr[16]);
    ctx.set_gpr(17, ctx.gpr[4] + 0u);
    ctx.set_gpr(16, ctx.gpr[5] + 0u);
    ctx.set_gpr(2, rt.memory().aot_load8(ctx.gpr[4] + static_cast<std::uint32_t>(12)));
    rt.memory().aot_store8(ctx.gpr[5] + static_cast<std::uint32_t>(4), static_cast<std::uint8_t>(ctx.gpr[2]));
    ctx.set_gpr(2, static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int16_t>(rt.memory().aot_load16(ctx.gpr[4] + static_cast<std::uint32_t>(16))))));
    rt.memory().aot_store8(ctx.gpr[5] + static_cast<std::uint32_t>(5), static_cast<std::uint8_t>(ctx.gpr[2]));
    ctx.set_gpr(2, 0u + static_cast<std::uint32_t>(8));
    rt.memory().aot_store32(ctx.gpr[5] + static_cast<std::uint32_t>(0), ctx.gpr[2]);
    ctx.set_gpr(4, ctx.gpr[16] + 0u);
    ctx.set_gpr(5, 0u + static_cast<std::uint32_t>(42));
    ctx.set_gpr(31, 0x088D1EE8u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0047_entry, 47u, 678u, 0x088C3D30u>(ctx, &aot_mem) && ctx.pc == 0x088D1EE8u) goto L_088D1EE8;
    return;
L_088D1EE8:
    ctx.set_gpr(4, ctx.gpr[16] + 0u);
    ctx.set_gpr(5, ctx.gpr[17] + 0u);
    ctx.set_gpr(31, 0x088D1EF8u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0047_entry, 47u, 682u, 0x088C3DC0u>(ctx, &aot_mem) && ctx.pc == 0x088D1EF8u) goto L_088D1EF8;
    return;
L_088D1EF8:
    ctx.set_gpr(2, 0u + static_cast<std::uint32_t>(1));
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
L_088D1F14:
    ctx.set_gpr(29, ctx.gpr[29] + static_cast<std::uint32_t>(-16));
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(12), ctx.gpr[31]);
    ctx.set_gpr(31, 0x088D1F24u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0048_entry, 48u, 167u, 0x088C501Cu>(ctx, &aot_mem) && ctx.pc == 0x088D1F24u) goto L_088D1F24;
    return;
L_088D1F24:
    ctx.set_gpr(31, rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(12)));
    ctx.set_gpr(29, ctx.gpr[29] + static_cast<std::uint32_t>(16));
    jump_target = ctx.gpr[31];
    // nop
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_088D1F34:
    ctx.set_gpr(29, ctx.gpr[29] + static_cast<std::uint32_t>(-16));
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(12), ctx.gpr[31]);
    ctx.set_gpr(3, rt.memory().aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(12)));
    { const bool branch_taken = ctx.gpr[3] == 0u;
    // nop
      if (branch_taken) {
          goto L_088D1F68;
      }
      goto L_088D1F48;
    }
L_088D1F48:
    ctx.set_gpr(6, rt.memory().aot_load32(ctx.gpr[3] + static_cast<std::uint32_t>(36)));
    ctx.set_gpr(3, 0u + static_cast<std::uint32_t>(-1));
    { const bool branch_taken = ctx.gpr[6] == ctx.gpr[3];
    // nop
      if (branch_taken) {
          goto L_088D1F68;
      }
      goto L_088D1F58;
    }
L_088D1F58:
    ctx.set_gpr(4, ctx.gpr[5] + 0u);
    ctx.set_gpr(5, ctx.gpr[6] + 0u);
    ctx.set_gpr(31, 0x088D1F68u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0119_entry, 119u, 382u, 0x089E2594u>(ctx, &aot_mem) && ctx.pc == 0x088D1F68u) goto L_088D1F68;
    return;
L_088D1F68:
    ctx.set_gpr(31, rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(12)));
    ctx.set_gpr(29, ctx.gpr[29] + static_cast<std::uint32_t>(16));
    jump_target = ctx.gpr[31];
    // nop
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_088D1F78:
    ctx.set_gpr(3, rt.memory().aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(16)));
    rt.memory().aot_store16(ctx.gpr[4] + static_cast<std::uint32_t>(10), static_cast<std::uint16_t>(ctx.gpr[3]));
    jump_target = ctx.gpr[31];
    // nop
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_088D1F88:
    ctx.set_gpr(29, ctx.gpr[29] + static_cast<std::uint32_t>(-16));
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(12), ctx.gpr[31]);
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(8), ctx.gpr[16]);
    ctx.set_gpr(16, ctx.gpr[4] + 0u);
    ctx.set_gpr(31, 0x088D1FA0u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0048_entry, 48u, 154u, 0x088C4F18u>(ctx, &aot_mem) && ctx.pc == 0x088D1FA0u) goto L_088D1FA0;
    return;
L_088D1FA0:
    ctx.set_gpr(5, static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int16_t>(rt.memory().aot_load16(ctx.gpr[16] + static_cast<std::uint32_t>(16))))));
    ctx.set_gpr(4, ctx.gpr[16] + 0u);
    ctx.set_gpr(31, 0x088D1FB0u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0048_entry, 48u, 153u, 0x088C4F0Cu>(ctx, &aot_mem) && ctx.pc == 0x088D1FB0u) goto L_088D1FB0;
    return;
L_088D1FB0:
    ctx.set_gpr(31, rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(12)));
    ctx.set_gpr(16, rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(8)));
    ctx.set_gpr(29, ctx.gpr[29] + static_cast<std::uint32_t>(16));
    jump_target = ctx.gpr[31];
    // nop
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_088D1FC4:
    ctx.set_gpr(29, ctx.gpr[29] + static_cast<std::uint32_t>(-16));
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(12), ctx.gpr[31]);
    ctx.set_gpr(2, static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int16_t>(ctx.gpr[5]))));
    rt.memory().aot_store32(ctx.gpr[4] + static_cast<std::uint32_t>(16), ctx.gpr[2]);
    ctx.set_gpr(31, 0x088D1FDCu);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0048_entry, 48u, 153u, 0x088C4F0Cu>(ctx, &aot_mem) && ctx.pc == 0x088D1FDCu) goto L_088D1FDC;
    return;
L_088D1FDC:
    ctx.set_gpr(31, rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(12)));
    ctx.set_gpr(29, ctx.gpr[29] + static_cast<std::uint32_t>(16));
    jump_target = ctx.gpr[31];
    // nop
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_088D1FEC:
    jump_target = ctx.gpr[31];
    // nop
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_088D1FF4:
    ctx.set_gpr(29, ctx.gpr[29] + static_cast<std::uint32_t>(-16));
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(12), ctx.gpr[31]);
    ctx.set_gpr(4, ctx.gpr[5] + 0u);
    ctx.set_gpr(5, 0u + static_cast<std::uint32_t>(8));
    ctx.set_gpr(25, rt.memory().aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(0)));
    ctx.set_gpr(25, rt.memory().aot_load32(ctx.gpr[25] + static_cast<std::uint32_t>(92)));
    jump_target = ctx.gpr[25];
    ctx.set_gpr(31, 0x088D2014u);
    // nop
    ctx.pc = jump_target;
    if (rt.invoke_chained_call(ctx, &aot_mem) && ctx.pc == 0x088D2014u) goto L_088D2014;
    return;
L_088D2014:
    ctx.set_gpr(31, rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(12)));
    ctx.set_gpr(29, ctx.gpr[29] + static_cast<std::uint32_t>(16));
    jump_target = ctx.gpr[31];
    // nop
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_088D2024:
    ctx.set_gpr(29, ctx.gpr[29] + static_cast<std::uint32_t>(-16));
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(12), ctx.gpr[31]);
    ctx.set_gpr(2, ctx.gpr[4] + 0u);
    ctx.set_gpr(4, ctx.gpr[5] + 0u);
    ctx.set_gpr(5, ctx.gpr[2] + static_cast<std::uint32_t>(12));
    ctx.set_gpr(6, ctx.gpr[2] + static_cast<std::uint32_t>(16));
    ctx.set_gpr(7, static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int16_t>(rt.memory().aot_load16(ctx.gpr[2] + static_cast<std::uint32_t>(10))))));
    ctx.set_gpr(31, 0x088D2048u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0119_entry, 119u, 572u, 0x089E3A7Cu>(ctx, &aot_mem) && ctx.pc == 0x088D2048u) goto L_088D2048;
    return;
L_088D2048:
    ctx.set_gpr(31, rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(12)));
    ctx.set_gpr(29, ctx.gpr[29] + static_cast<std::uint32_t>(16));
    jump_target = ctx.gpr[31];
    // nop
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_088D2058:
    ctx.set_gpr(29, ctx.gpr[29] + static_cast<std::uint32_t>(-16));
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(12), ctx.gpr[31]);
    ctx.set_gpr(2, ctx.gpr[4] + 0u);
    ctx.set_gpr(4, ctx.gpr[5] + 0u);
    ctx.set_gpr(5, rt.memory().aot_load32(ctx.gpr[2] + static_cast<std::uint32_t>(12)));
    ctx.set_gpr(6, rt.memory().aot_load32(ctx.gpr[2] + static_cast<std::uint32_t>(16)));
    ctx.set_gpr(7, static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int16_t>(rt.memory().aot_load16(ctx.gpr[2] + static_cast<std::uint32_t>(10))))));
    ctx.set_gpr(31, 0x088D207Cu);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0119_entry, 119u, 571u, 0x089E3A74u>(ctx, &aot_mem) && ctx.pc == 0x088D207Cu) goto L_088D207C;
    return;
L_088D207C:
    ctx.set_gpr(31, rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(12)));
    ctx.set_gpr(29, ctx.gpr[29] + static_cast<std::uint32_t>(16));
    jump_target = ctx.gpr[31];
    // nop
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_088D208C:
    jump_target = ctx.gpr[31];
    // nop
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_088D2094:
    jump_target = ctx.gpr[31];
    // nop
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_088D209C:
    ctx.set_gpr(6, rt.memory().aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(16)));
    ctx.set_gpr(3, rt.memory().aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(20)));
    rt.memory().aot_store32(ctx.gpr[5] + static_cast<std::uint32_t>(120), ctx.gpr[6]);
    rt.memory().aot_store32(ctx.gpr[5] + static_cast<std::uint32_t>(124), ctx.gpr[3]);
    jump_target = ctx.gpr[31];
    // nop
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_088D20B4:
    ctx.set_gpr(6, rt.memory().aot_load32(ctx.gpr[5] + static_cast<std::uint32_t>(120)));
    ctx.set_gpr(3, rt.memory().aot_load32(ctx.gpr[5] + static_cast<std::uint32_t>(124)));
    rt.memory().aot_store32(ctx.gpr[4] + static_cast<std::uint32_t>(16), ctx.gpr[6]);
    rt.memory().aot_store32(ctx.gpr[4] + static_cast<std::uint32_t>(20), ctx.gpr[3]);
    jump_target = ctx.gpr[31];
    // nop
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_088D20CC:
    ctx.set_gpr(3, rt.memory().aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(28)));
    rt.memory().aot_store16(ctx.gpr[4] + static_cast<std::uint32_t>(10), static_cast<std::uint16_t>(ctx.gpr[3]));
    jump_target = ctx.gpr[31];
    // nop
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_088D20DC:
    ctx.set_gpr(29, ctx.gpr[29] + static_cast<std::uint32_t>(-16));
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(12), ctx.gpr[31]);
    ctx.set_gpr(2, static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int16_t>(ctx.gpr[5]))));
    rt.memory().aot_store32(ctx.gpr[4] + static_cast<std::uint32_t>(28), ctx.gpr[2]);
    ctx.set_gpr(31, 0x088D20F4u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0048_entry, 48u, 153u, 0x088C4F0Cu>(ctx, &aot_mem) && ctx.pc == 0x088D20F4u) goto L_088D20F4;
    return;
L_088D20F4:
    ctx.set_gpr(31, rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(12)));
    ctx.set_gpr(29, ctx.gpr[29] + static_cast<std::uint32_t>(16));
    jump_target = ctx.gpr[31];
    // nop
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_088D2104:
    ctx.set_gpr(29, ctx.gpr[29] + static_cast<std::uint32_t>(-16));
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(12), ctx.gpr[31]);
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(8), ctx.gpr[16]);
    ctx.set_gpr(16, ctx.gpr[4] + 0u);
    ctx.set_gpr(31, 0x088D211Cu);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0048_entry, 48u, 154u, 0x088C4F18u>(ctx, &aot_mem) && ctx.pc == 0x088D211Cu) goto L_088D211C;
    return;
L_088D211C:
    ctx.set_gpr(5, static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int16_t>(rt.memory().aot_load16(ctx.gpr[16] + static_cast<std::uint32_t>(28))))));
    ctx.set_gpr(4, ctx.gpr[16] + 0u);
    ctx.set_gpr(31, 0x088D212Cu);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0048_entry, 48u, 153u, 0x088C4F0Cu>(ctx, &aot_mem) && ctx.pc == 0x088D212Cu) goto L_088D212C;
    return;
L_088D212C:
    ctx.set_gpr(31, rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(12)));
    ctx.set_gpr(16, rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(8)));
    ctx.set_gpr(29, ctx.gpr[29] + static_cast<std::uint32_t>(16));
    jump_target = ctx.gpr[31];
    // nop
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_088D2140:
    ctx.set_gpr(29, ctx.gpr[29] + static_cast<std::uint32_t>(-16));
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(12), ctx.gpr[31]);
    ctx.set_gpr(31, 0x088D2150u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0048_entry, 48u, 452u, 0x088C65E8u>(ctx, &aot_mem) && ctx.pc == 0x088D2150u) goto L_088D2150;
    return;
L_088D2150:
    ctx.set_gpr(31, rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(12)));
    ctx.set_gpr(29, ctx.gpr[29] + static_cast<std::uint32_t>(16));
    jump_target = ctx.gpr[31];
    // nop
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_088D2160:
    ctx.set_gpr(2, 2245u << 16u);
    ctx.set_gpr(2, rt.memory().aot_load32(ctx.gpr[2] + static_cast<std::uint32_t>(26352)));
    ctx.set_gpr(2, rt.memory().aot_load32(ctx.gpr[2] + static_cast<std::uint32_t>(16)));
    jump_target = ctx.gpr[31];
    // nop
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_088D2174:
    ctx.set_gpr(2, 2245u << 16u);
    ctx.set_gpr(2, rt.memory().aot_load32(ctx.gpr[2] + static_cast<std::uint32_t>(26352)));
    ctx.set_gpr(2, rt.memory().aot_load32(ctx.gpr[2] + static_cast<std::uint32_t>(8)));
    jump_target = ctx.gpr[31];
    // nop
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_088D2188:
    ctx.set_gpr(29, ctx.gpr[29] + static_cast<std::uint32_t>(-16));
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(12), ctx.gpr[31]);
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(8), ctx.gpr[17]);
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(4), ctx.gpr[16]);
    ctx.set_gpr(16, ctx.gpr[4] + 0u);
    ctx.set_gpr(17, ctx.gpr[5] + 0u);
    ctx.set_gpr(25, rt.memory().aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(0)));
    ctx.set_gpr(25, rt.memory().aot_load32(ctx.gpr[25] + static_cast<std::uint32_t>(156)));
    jump_target = ctx.gpr[25];
    ctx.set_gpr(31, 0x088D21B0u);
    // nop
    ctx.pc = jump_target;
    if (rt.invoke_chained_call(ctx, &aot_mem) && ctx.pc == 0x088D21B0u) goto L_088D21B0;
    return;
L_088D21B0:
    ctx.set_gpr(3, 0u + static_cast<std::uint32_t>(-1));
    { const bool branch_taken = ctx.gpr[2] == ctx.gpr[3];
    // nop
      if (branch_taken) {
          goto L_088D21C8;
      }
      goto L_088D21BC;
    }
L_088D21BC:
    ctx.set_gpr(3, 0u + static_cast<std::uint32_t>(1));
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_088D21F4;
      }
      goto L_088D21C8;
    }
L_088D21C8:
    ctx.set_gpr(4, ctx.gpr[16] + 0u);
    ctx.set_gpr(5, ctx.gpr[17] + 0u);
    ctx.set_gpr(31, 0x088D21D8u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0048_entry, 48u, 458u, 0x088C6654u>(ctx, &aot_mem) && ctx.pc == 0x088D21D8u) goto L_088D21D8;
    return;
L_088D21D8:
    ctx.set_gpr(4, ctx.gpr[16] + 0u);
    ctx.set_gpr(25, rt.memory().aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(0)));
    ctx.set_gpr(25, rt.memory().aot_load32(ctx.gpr[25] + static_cast<std::uint32_t>(156)));
    jump_target = ctx.gpr[25];
    ctx.set_gpr(31, 0x088D21ECu);
    // nop
    ctx.pc = jump_target;
    if (rt.invoke_chained_call(ctx, &aot_mem) && ctx.pc == 0x088D21ECu) goto L_088D21EC;
    return;
L_088D21EC:
    ctx.set_gpr(3, ~(ctx.gpr[2] | 0u));
    ctx.set_gpr(3, 0u < ctx.gpr[3] ? 1u : 0u);
    goto L_088D21F4;
L_088D21F4:
    { const bool branch_taken = ctx.gpr[3] == 0u;
    // nop
      if (branch_taken) {
          goto L_088D2238;
      }
      goto L_088D21FC;
    }
L_088D21FC:
    ctx.set_gpr(3, 2245u << 16u);
    ctx.set_gpr(5, rt.memory().aot_load32(ctx.gpr[3] + static_cast<std::uint32_t>(26352)));
    ctx.set_gpr(3, rt.memory().aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(28)));
    ctx.set_gpr(4, ctx.gpr[3] << 2u);
    ctx.set_gpr(3, rt.memory().aot_load32(ctx.gpr[5] + static_cast<std::uint32_t>(16)));
    ctx.set_gpr(3, ctx.gpr[3] + ctx.gpr[4]);
    ctx.set_gpr(3, rt.memory().aot_load32(ctx.gpr[3] + static_cast<std::uint32_t>(0)));
    ctx.fpr[0] = std::bit_cast<float>(rt.memory().aot_load32(ctx.gpr[3] + static_cast<std::uint32_t>(12)));
    rt.memory().aot_store32(ctx.gpr[16] + static_cast<std::uint32_t>(12), std::bit_cast<std::uint32_t>(ctx.fpr[0]));
    ctx.fpr[0] = std::bit_cast<float>(rt.memory().aot_load32(ctx.gpr[3] + static_cast<std::uint32_t>(16)));
    rt.memory().aot_store32(ctx.gpr[16] + static_cast<std::uint32_t>(16), std::bit_cast<std::uint32_t>(ctx.fpr[0]));
    ctx.fpr[0] = std::bit_cast<float>(rt.memory().aot_load32(ctx.gpr[3] + static_cast<std::uint32_t>(20)));
    rt.memory().aot_store32(ctx.gpr[16] + static_cast<std::uint32_t>(20), std::bit_cast<std::uint32_t>(ctx.fpr[0]));
    ctx.fpr[0] = std::bit_cast<float>(rt.memory().aot_load32(ctx.gpr[3] + static_cast<std::uint32_t>(24)));
    rt.memory().aot_store32(ctx.gpr[16] + static_cast<std::uint32_t>(24), std::bit_cast<std::uint32_t>(ctx.fpr[0]));
    goto L_088D2238;
L_088D2238:
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
L_088D2250:
    ctx.set_gpr(29, ctx.gpr[29] + static_cast<std::uint32_t>(-16));
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(12), ctx.gpr[31]);
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(8), ctx.gpr[17]);
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(4), ctx.gpr[16]);
    ctx.set_gpr(16, ctx.gpr[4] + 0u);
    ctx.set_gpr(17, ctx.gpr[5] + 0u);
    ctx.set_gpr(25, rt.memory().aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(0)));
    ctx.set_gpr(25, rt.memory().aot_load32(ctx.gpr[25] + static_cast<std::uint32_t>(156)));
    jump_target = ctx.gpr[25];
    ctx.set_gpr(31, 0x088D2278u);
    // nop
    ctx.pc = jump_target;
    if (rt.invoke_chained_call(ctx, &aot_mem) && ctx.pc == 0x088D2278u) goto L_088D2278;
    return;
L_088D2278:
    ctx.set_gpr(3, 0u + static_cast<std::uint32_t>(-1));
    { const bool branch_taken = ctx.gpr[2] == ctx.gpr[3];
    // nop
      if (branch_taken) {
          goto L_088D2290;
      }
      goto L_088D2284;
    }
L_088D2284:
    ctx.set_gpr(3, 0u + static_cast<std::uint32_t>(1));
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_088D22BC;
      }
      goto L_088D2290;
    }
L_088D2290:
    ctx.set_gpr(4, ctx.gpr[16] + 0u);
    ctx.set_gpr(5, ctx.gpr[17] + 0u);
    ctx.set_gpr(31, 0x088D22A0u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0048_entry, 48u, 458u, 0x088C6654u>(ctx, &aot_mem) && ctx.pc == 0x088D22A0u) goto L_088D22A0;
    return;
L_088D22A0:
    ctx.set_gpr(4, ctx.gpr[16] + 0u);
    ctx.set_gpr(25, rt.memory().aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(0)));
    ctx.set_gpr(25, rt.memory().aot_load32(ctx.gpr[25] + static_cast<std::uint32_t>(156)));
    jump_target = ctx.gpr[25];
    ctx.set_gpr(31, 0x088D22B4u);
    // nop
    ctx.pc = jump_target;
    if (rt.invoke_chained_call(ctx, &aot_mem) && ctx.pc == 0x088D22B4u) goto L_088D22B4;
    return;
L_088D22B4:
    ctx.set_gpr(3, ~(ctx.gpr[2] | 0u));
    ctx.set_gpr(3, 0u < ctx.gpr[3] ? 1u : 0u);
    goto L_088D22BC;
L_088D22BC:
    { const bool branch_taken = ctx.gpr[3] == 0u;
    // nop
      if (branch_taken) {
          goto L_088D2300;
      }
      goto L_088D22C4;
    }
L_088D22C4:
    ctx.set_gpr(3, 2245u << 16u);
    ctx.set_gpr(5, rt.memory().aot_load32(ctx.gpr[3] + static_cast<std::uint32_t>(26352)));
    ctx.set_gpr(3, rt.memory().aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(28)));
    ctx.set_gpr(4, ctx.gpr[3] << 2u);
    ctx.set_gpr(3, rt.memory().aot_load32(ctx.gpr[5] + static_cast<std::uint32_t>(16)));
    ctx.set_gpr(3, ctx.gpr[3] + ctx.gpr[4]);
    ctx.set_gpr(3, rt.memory().aot_load32(ctx.gpr[3] + static_cast<std::uint32_t>(0)));
    ctx.fpr[0] = std::bit_cast<float>(rt.memory().aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(12)));
    rt.memory().aot_store32(ctx.gpr[3] + static_cast<std::uint32_t>(12), std::bit_cast<std::uint32_t>(ctx.fpr[0]));
    ctx.fpr[0] = std::bit_cast<float>(rt.memory().aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(16)));
    rt.memory().aot_store32(ctx.gpr[3] + static_cast<std::uint32_t>(16), std::bit_cast<std::uint32_t>(ctx.fpr[0]));
    ctx.fpr[0] = std::bit_cast<float>(rt.memory().aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(20)));
    rt.memory().aot_store32(ctx.gpr[3] + static_cast<std::uint32_t>(20), std::bit_cast<std::uint32_t>(ctx.fpr[0]));
    ctx.fpr[0] = std::bit_cast<float>(rt.memory().aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(24)));
    rt.memory().aot_store32(ctx.gpr[3] + static_cast<std::uint32_t>(24), std::bit_cast<std::uint32_t>(ctx.fpr[0]));
    goto L_088D2300;
L_088D2300:
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
L_088D2318:
    ctx.set_gpr(29, ctx.gpr[29] + static_cast<std::uint32_t>(-32));
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(12), ctx.gpr[31]);
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(8), ctx.gpr[16]);
    ctx.set_gpr(3, 2245u << 16u);
    ctx.set_gpr(3, rt.memory().aot_load32(ctx.gpr[3] + static_cast<std::uint32_t>(26352)));
    { const bool branch_taken = ctx.gpr[3] != 0u;
    // nop
      if (branch_taken) {
          goto L_088D23CC;
      }
      goto L_088D2334;
    }
L_088D2334:
    ctx.set_gpr(31, 0x088D233Cu);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0078_entry, 78u, 227u, 0x0893CE8Cu>(ctx, &aot_mem) && ctx.pc == 0x088D233Cu) goto L_088D233C;
    return;
L_088D233C:
    ctx.set_gpr(4, rt.memory().aot_load32(ctx.gpr[2] + static_cast<std::uint32_t>(0)));
    ctx.set_gpr(31, 0x088D2348u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0078_entry, 78u, 199u, 0x0893CC68u>(ctx, &aot_mem) && ctx.pc == 0x088D2348u) goto L_088D2348;
    return;
L_088D2348:
    ctx.set_gpr(4, ctx.gpr[2] + 0u);
    ctx.set_gpr(31, 0x088D2354u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0101_entry, 101u, 146u, 0x08998DA0u>(ctx, &aot_mem) && ctx.pc == 0x088D2354u) goto L_088D2354;
    return;
L_088D2354:
    ctx.set_gpr(4, 2245u << 16u);
    ctx.set_gpr(4, ctx.gpr[4] + static_cast<std::uint32_t>(26352));
    ctx.set_gpr(5, ctx.gpr[2] + 0u);
    ctx.set_gpr(31, 0x088D2368u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0085_entry, 85u, 67u, 0x0895853Cu>(ctx, &aot_mem) && ctx.pc == 0x088D2368u) goto L_088D2368;
    return;
L_088D2368:
    ctx.set_gpr(16, 0u + 0u);
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_088D23C4;
      }
      goto L_088D2374;
    }
L_088D2374:
    ctx.set_gpr(31, 0x088D237Cu);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0078_entry, 78u, 227u, 0x0893CE8Cu>(ctx, &aot_mem) && ctx.pc == 0x088D237Cu) goto L_088D237C;
    return;
L_088D237C:
    ctx.set_gpr(4, rt.memory().aot_load32(ctx.gpr[2] + static_cast<std::uint32_t>(0)));
    ctx.set_gpr(31, 0x088D2388u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0078_entry, 78u, 199u, 0x0893CC68u>(ctx, &aot_mem) && ctx.pc == 0x088D2388u) goto L_088D2388;
    return;
L_088D2388:
    ctx.set_gpr(4, ctx.gpr[2] + 0u);
    ctx.set_gpr(31, 0x088D2394u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0101_entry, 101u, 121u, 0x08998B28u>(ctx, &aot_mem) && ctx.pc == 0x088D2394u) goto L_088D2394;
    return;
L_088D2394:
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(28), ctx.gpr[2]);
    ctx.set_gpr(3, 2245u << 16u);
    ctx.set_gpr(4, rt.memory().aot_load32(ctx.gpr[3] + static_cast<std::uint32_t>(26352)));
    ctx.set_gpr(5, ctx.gpr[2] + 0u);
    ctx.set_gpr(31, 0x088D23ACu);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0081_entry, 81u, 299u, 0x089494E0u>(ctx, &aot_mem) && ctx.pc == 0x088D23ACu) goto L_088D23AC;
    return;
L_088D23AC:
    ctx.set_gpr(4, rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(28)));
    { const bool branch_taken = ctx.gpr[4] == 0u;
    // nop
      if (branch_taken) {
          goto L_088D23C0;
      }
      goto L_088D23B8;
    }
L_088D23B8:
    ctx.set_gpr(31, 0x088D23C0u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0014_entry, 14u, 257u, 0x0883D454u>(ctx, &aot_mem) && ctx.pc == 0x088D23C0u) goto L_088D23C0;
    return;
L_088D23C0:
    ctx.set_gpr(16, ctx.gpr[16] + static_cast<std::uint32_t>(1));
    goto L_088D23C4;
L_088D23C4:
    { const bool branch_taken = static_cast<std::int32_t>(ctx.gpr[16]) <= 0;
    // nop
      if (branch_taken) {
          goto L_088D2374;
      }
      goto L_088D23CC;
    }
L_088D23CC:
    ctx.set_gpr(31, rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(12)));
    ctx.set_gpr(16, rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(8)));
    ctx.set_gpr(29, ctx.gpr[29] + static_cast<std::uint32_t>(32));
    jump_target = ctx.gpr[31];
    // nop
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_088D23E0:
    ctx.set_gpr(29, ctx.gpr[29] + static_cast<std::uint32_t>(-16));
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(12), ctx.gpr[31]);
    ctx.set_gpr(3, 2245u << 16u);
    ctx.set_gpr(3, rt.memory().aot_load32(ctx.gpr[3] + static_cast<std::uint32_t>(26352)));
    { const bool branch_taken = ctx.gpr[3] == 0u;
    // nop
      if (branch_taken) {
          goto L_088D240C;
      }
      goto L_088D23F8;
    }
L_088D23F8:
    ctx.set_gpr(4, 2245u << 16u);
    ctx.set_gpr(4, ctx.gpr[4] + static_cast<std::uint32_t>(26352));
    ctx.set_gpr(5, 0u + 0u);
    ctx.set_gpr(31, 0x088D240Cu);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0085_entry, 85u, 61u, 0x089584C4u>(ctx, &aot_mem) && ctx.pc == 0x088D240Cu) goto L_088D240C;
    return;
L_088D240C:
    ctx.set_gpr(31, rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(12)));
    ctx.set_gpr(29, ctx.gpr[29] + static_cast<std::uint32_t>(16));
    jump_target = ctx.gpr[31];
    // nop
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_088D241C:
    ctx.set_gpr(2, 0u + static_cast<std::uint32_t>(1));
    jump_target = ctx.gpr[31];
    // nop
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_088D2428:
    ctx.set_gpr(29, ctx.gpr[29] + static_cast<std::uint32_t>(-16));
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(12), ctx.gpr[31]);
    ctx.set_gpr(3, ctx.gpr[4] + 0u);
    ctx.set_gpr(2, rt.memory().aot_load16(ctx.gpr[4] + static_cast<std::uint32_t>(76)));
    ctx.set_gpr(2, ctx.gpr[2] + static_cast<std::uint32_t>(10));
    ctx.set_gpr(4, ctx.gpr[5] + 0u);
    ctx.set_gpr(5, ctx.gpr[2] + 0u);
    ctx.set_gpr(6, ctx.gpr[3] + static_cast<std::uint32_t>(12));
    ctx.set_gpr(31, 0x088D2450u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0117_entry, 117u, 243u, 0x089D9FF0u>(ctx, &aot_mem) && ctx.pc == 0x088D2450u) goto L_088D2450;
    return;
L_088D2450:
    ctx.set_gpr(31, rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(12)));
    ctx.set_gpr(29, ctx.gpr[29] + static_cast<std::uint32_t>(16));
    jump_target = ctx.gpr[31];
    // nop
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_088D2460:
    ctx.set_gpr(3, rt.memory().aot_load16(ctx.gpr[4] + static_cast<std::uint32_t>(76)));
    rt.memory().aot_store16(ctx.gpr[4] + static_cast<std::uint32_t>(10), static_cast<std::uint16_t>(ctx.gpr[3]));
    jump_target = ctx.gpr[31];
    // nop
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_088D2470:
    ctx.set_gpr(29, ctx.gpr[29] + static_cast<std::uint32_t>(-16));
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(12), ctx.gpr[31]);
    rt.memory().aot_store16(ctx.gpr[4] + static_cast<std::uint32_t>(76), static_cast<std::uint16_t>(ctx.gpr[5]));
    ctx.set_gpr(31, 0x088D2484u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0048_entry, 48u, 153u, 0x088C4F0Cu>(ctx, &aot_mem) && ctx.pc == 0x088D2484u) goto L_088D2484;
    return;
L_088D2484:
    ctx.set_gpr(31, rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(12)));
    ctx.set_gpr(29, ctx.gpr[29] + static_cast<std::uint32_t>(16));
    jump_target = ctx.gpr[31];
    // nop
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_088D2494:
    ctx.set_gpr(29, ctx.gpr[29] + static_cast<std::uint32_t>(-16));
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(12), ctx.gpr[31]);
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(8), ctx.gpr[16]);
    ctx.set_gpr(16, ctx.gpr[4] + 0u);
    ctx.set_gpr(31, 0x088D24ACu);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0048_entry, 48u, 154u, 0x088C4F18u>(ctx, &aot_mem) && ctx.pc == 0x088D24ACu) goto L_088D24AC;
    return;
L_088D24AC:
    ctx.set_gpr(5, static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int16_t>(rt.memory().aot_load16(ctx.gpr[16] + static_cast<std::uint32_t>(76))))));
    ctx.set_gpr(4, ctx.gpr[16] + 0u);
    ctx.set_gpr(31, 0x088D24BCu);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0048_entry, 48u, 153u, 0x088C4F0Cu>(ctx, &aot_mem) && ctx.pc == 0x088D24BCu) goto L_088D24BC;
    return;
L_088D24BC:
    ctx.set_gpr(31, rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(12)));
    ctx.set_gpr(16, rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(8)));
    ctx.set_gpr(29, ctx.gpr[29] + static_cast<std::uint32_t>(16));
    jump_target = ctx.gpr[31];
    // nop
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_088D24D0:
    ctx.set_gpr(29, ctx.gpr[29] + static_cast<std::uint32_t>(-80));
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(12), ctx.gpr[31]);
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(8), ctx.gpr[17]);
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(4), ctx.gpr[16]);
    ctx.set_gpr(17, ctx.gpr[4] + 0u);
    ctx.set_gpr(16, ctx.gpr[5] + 0u);
    ctx.set_gpr(4, ctx.gpr[29] + static_cast<std::uint32_t>(16));
    ctx.set_gpr(31, 0x088D24F4u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0126_entry, 126u, 723u, 0x089FF868u>(ctx, &aot_mem) && ctx.pc == 0x088D24F4u) goto L_088D24F4;
    return;
L_088D24F4:
    ctx.set_gpr(2, rt.memory().aot_load16(ctx.gpr[17] + static_cast<std::uint32_t>(76)));
    ctx.set_gpr(5, ctx.gpr[2] + static_cast<std::uint32_t>(10));
    ctx.set_gpr(4, ctx.gpr[16] + 0u);
    ctx.set_gpr(6, ctx.gpr[29] + static_cast<std::uint32_t>(16));
    ctx.set_gpr(25, rt.memory().aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(0)));
    ctx.set_gpr(25, rt.memory().aot_load32(ctx.gpr[25] + static_cast<std::uint32_t>(848)));
    jump_target = ctx.gpr[25];
    ctx.set_gpr(31, 0x088D2514u);
    // nop
    ctx.pc = jump_target;
    if (rt.invoke_chained_call(ctx, &aot_mem) && ctx.pc == 0x088D2514u) goto L_088D2514;
    return;
L_088D2514:
    ctx.set_gpr(4, ctx.gpr[17] + 0u);
    ctx.set_gpr(5, ctx.gpr[29] + static_cast<std::uint32_t>(16));
    ctx.set_gpr(25, rt.memory().aot_load32(ctx.gpr[17] + static_cast<std::uint32_t>(0)));
    ctx.set_gpr(25, rt.memory().aot_load32(ctx.gpr[25] + static_cast<std::uint32_t>(136)));
    jump_target = ctx.gpr[25];
    ctx.set_gpr(31, 0x088D252Cu);
    // nop
    ctx.pc = jump_target;
    if (rt.invoke_chained_call(ctx, &aot_mem) && ctx.pc == 0x088D252Cu) goto L_088D252C;
    return;
L_088D252C:
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
L_088D2544:
    ctx.set_gpr(29, ctx.gpr[29] + static_cast<std::uint32_t>(-16));
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(12), ctx.gpr[31]);
    ctx.set_gpr(4, ctx.gpr[4] + static_cast<std::uint32_t>(12));
    ctx.set_gpr(31, 0x088D2558u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0126_entry, 126u, 747u, 0x089FFC4Cu>(ctx, &aot_mem) && ctx.pc == 0x088D2558u) goto L_088D2558;
    return;
L_088D2558:
    ctx.set_gpr(31, rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(12)));
    ctx.set_gpr(29, ctx.gpr[29] + static_cast<std::uint32_t>(16));
    jump_target = ctx.gpr[31];
    // nop
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_088D2568:
    ctx.set_gpr(29, ctx.gpr[29] + static_cast<std::uint32_t>(-16));
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(12), ctx.gpr[31]);
    ctx.set_gpr(4, ctx.gpr[5] + 0u);
    ctx.set_gpr(5, 0u + static_cast<std::uint32_t>(13));
    ctx.set_gpr(25, rt.memory().aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(0)));
    ctx.set_gpr(25, rt.memory().aot_load32(ctx.gpr[25] + static_cast<std::uint32_t>(92)));
    jump_target = ctx.gpr[25];
    ctx.set_gpr(31, 0x088D2588u);
    // nop
    ctx.pc = jump_target;
    if (rt.invoke_chained_call(ctx, &aot_mem) && ctx.pc == 0x088D2588u) goto L_088D2588;
    return;
L_088D2588:
    ctx.set_gpr(31, rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(12)));
    ctx.set_gpr(29, ctx.gpr[29] + static_cast<std::uint32_t>(16));
    jump_target = ctx.gpr[31];
    // nop
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_088D2598:
    ctx.set_gpr(29, ctx.gpr[29] + static_cast<std::uint32_t>(-16));
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(12), ctx.gpr[31]);
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(8), ctx.gpr[17]);
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(4), ctx.gpr[16]);
    ctx.set_gpr(17, ctx.gpr[4] + 0u);
    ctx.set_gpr(16, ctx.gpr[6] + 0u);
    ctx.fpr[0] = std::bit_cast<float>(rt.memory().aot_load32(ctx.gpr[5] + static_cast<std::uint32_t>(0)));
    ctx.set_gpr(2, 16256u << 16u);
    ctx.fpr[1] = std::bit_cast<float>(ctx.gpr[2]);
    ctx.fpr[0] = ctx.fpr[0] - ctx.fpr[1];
    ctx.set_fpr_bits(2, ctx.fpr_bits(0) & 0x7FFFFFFFu);
    ctx.fpr[0] = std::bit_cast<float>(rt.memory().aot_load32(ctx.gpr[28] + static_cast<std::uint32_t>(-32408)));
    ctx.set_fpu_condition((ctx.fpr[2] <= ctx.fpr[0]));
    // nop
    { const bool branch_taken = !ctx.fpu_condition();
    // nop
      if (branch_taken) {
          goto L_088D2790;
      }
      goto L_088D25D8;
    }
L_088D25D8:
    ctx.fpr[2] = std::bit_cast<float>(rt.memory().aot_load32(ctx.gpr[5] + static_cast<std::uint32_t>(4)));
    ctx.fpr[3] = std::bit_cast<float>(0u);
    ctx.fpr[2] = ctx.fpr[2] - ctx.fpr[3];
    ctx.set_fpr_bits(2, ctx.fpr_bits(2) & 0x7FFFFFFFu);
    ctx.set_fpu_condition((ctx.fpr[2] <= ctx.fpr[0]));
    // nop
    { const bool branch_taken = !ctx.fpu_condition();
    // nop
      if (branch_taken) {
          goto L_088D2790;
      }
      goto L_088D25F8;
    }
L_088D25F8:
    ctx.fpr[2] = std::bit_cast<float>(rt.memory().aot_load32(ctx.gpr[5] + static_cast<std::uint32_t>(8)));
    ctx.fpr[2] = ctx.fpr[2] - ctx.fpr[3];
    ctx.set_fpr_bits(2, ctx.fpr_bits(2) & 0x7FFFFFFFu);
    ctx.set_fpu_condition((ctx.fpr[2] <= ctx.fpr[0]));
    // nop
    { const bool branch_taken = !ctx.fpu_condition();
    // nop
      if (branch_taken) {
          goto L_088D2790;
      }
      goto L_088D2614;
    }
L_088D2614:
    ctx.fpr[2] = std::bit_cast<float>(rt.memory().aot_load32(ctx.gpr[5] + static_cast<std::uint32_t>(12)));
    ctx.fpr[2] = ctx.fpr[2] - ctx.fpr[3];
    ctx.set_fpr_bits(2, ctx.fpr_bits(2) & 0x7FFFFFFFu);
    ctx.set_fpu_condition((ctx.fpr[2] <= ctx.fpr[0]));
    // nop
    { const bool branch_taken = !ctx.fpu_condition();
    // nop
      if (branch_taken) {
          goto L_088D2790;
      }
      goto L_088D2630;
    }
L_088D2630:
    ctx.fpr[2] = std::bit_cast<float>(rt.memory().aot_load32(ctx.gpr[5] + static_cast<std::uint32_t>(16)));
    ctx.fpr[2] = ctx.fpr[2] - ctx.fpr[3];
    ctx.set_fpr_bits(2, ctx.fpr_bits(2) & 0x7FFFFFFFu);
    ctx.set_fpu_condition((ctx.fpr[2] <= ctx.fpr[0]));
    // nop
    { const bool branch_taken = !ctx.fpu_condition();
    // nop
      if (branch_taken) {
          goto L_088D2790;
      }
      goto L_088D264C;
    }
L_088D264C:
    ctx.fpr[2] = std::bit_cast<float>(rt.memory().aot_load32(ctx.gpr[5] + static_cast<std::uint32_t>(20)));
    ctx.fpr[2] = ctx.fpr[2] - ctx.fpr[1];
    ctx.set_fpr_bits(2, ctx.fpr_bits(2) & 0x7FFFFFFFu);
    ctx.set_fpu_condition((ctx.fpr[2] <= ctx.fpr[0]));
    // nop
    { const bool branch_taken = !ctx.fpu_condition();
    // nop
      if (branch_taken) {
          goto L_088D2790;
      }
      goto L_088D2668;
    }
L_088D2668:
    ctx.fpr[2] = std::bit_cast<float>(rt.memory().aot_load32(ctx.gpr[5] + static_cast<std::uint32_t>(24)));
    ctx.fpr[2] = ctx.fpr[2] - ctx.fpr[3];
    ctx.set_fpr_bits(2, ctx.fpr_bits(2) & 0x7FFFFFFFu);
    ctx.set_fpu_condition((ctx.fpr[2] <= ctx.fpr[0]));
    // nop
    { const bool branch_taken = !ctx.fpu_condition();
    // nop
      if (branch_taken) {
          goto L_088D2790;
      }
      goto L_088D2684;
    }
L_088D2684:
    ctx.fpr[2] = std::bit_cast<float>(rt.memory().aot_load32(ctx.gpr[5] + static_cast<std::uint32_t>(28)));
    ctx.fpr[2] = ctx.fpr[2] - ctx.fpr[3];
    ctx.set_fpr_bits(2, ctx.fpr_bits(2) & 0x7FFFFFFFu);
    ctx.set_fpu_condition((ctx.fpr[2] <= ctx.fpr[0]));
    // nop
    { const bool branch_taken = !ctx.fpu_condition();
    // nop
      if (branch_taken) {
          goto L_088D2790;
      }
      goto L_088D26A0;
    }
L_088D26A0:
    ctx.fpr[2] = std::bit_cast<float>(rt.memory().aot_load32(ctx.gpr[5] + static_cast<std::uint32_t>(32)));
    ctx.fpr[2] = ctx.fpr[2] - ctx.fpr[3];
    ctx.set_fpr_bits(2, ctx.fpr_bits(2) & 0x7FFFFFFFu);
    ctx.set_fpu_condition((ctx.fpr[2] <= ctx.fpr[0]));
    // nop
    { const bool branch_taken = !ctx.fpu_condition();
    // nop
      if (branch_taken) {
          goto L_088D2790;
      }
      goto L_088D26BC;
    }
L_088D26BC:
    ctx.fpr[2] = std::bit_cast<float>(rt.memory().aot_load32(ctx.gpr[5] + static_cast<std::uint32_t>(36)));
    ctx.fpr[2] = ctx.fpr[2] - ctx.fpr[3];
    ctx.set_fpr_bits(2, ctx.fpr_bits(2) & 0x7FFFFFFFu);
    ctx.set_fpu_condition((ctx.fpr[2] <= ctx.fpr[0]));
    // nop
    { const bool branch_taken = !ctx.fpu_condition();
    // nop
      if (branch_taken) {
          goto L_088D2790;
      }
      goto L_088D26D8;
    }
L_088D26D8:
    ctx.fpr[2] = std::bit_cast<float>(rt.memory().aot_load32(ctx.gpr[5] + static_cast<std::uint32_t>(40)));
    ctx.fpr[2] = ctx.fpr[2] - ctx.fpr[1];
    ctx.set_fpr_bits(2, ctx.fpr_bits(2) & 0x7FFFFFFFu);
    ctx.set_fpu_condition((ctx.fpr[2] <= ctx.fpr[0]));
    // nop
    { const bool branch_taken = !ctx.fpu_condition();
    // nop
      if (branch_taken) {
          goto L_088D2790;
      }
      goto L_088D26F4;
    }
L_088D26F4:
    ctx.fpr[2] = std::bit_cast<float>(rt.memory().aot_load32(ctx.gpr[5] + static_cast<std::uint32_t>(44)));
    ctx.fpr[2] = ctx.fpr[2] - ctx.fpr[3];
    ctx.set_fpr_bits(2, ctx.fpr_bits(2) & 0x7FFFFFFFu);
    ctx.set_fpu_condition((ctx.fpr[2] <= ctx.fpr[0]));
    // nop
    { const bool branch_taken = !ctx.fpu_condition();
    // nop
      if (branch_taken) {
          goto L_088D2790;
      }
      goto L_088D2710;
    }
L_088D2710:
    ctx.fpr[2] = std::bit_cast<float>(rt.memory().aot_load32(ctx.gpr[5] + static_cast<std::uint32_t>(48)));
    ctx.fpr[2] = ctx.fpr[2] - ctx.fpr[3];
    ctx.set_fpr_bits(2, ctx.fpr_bits(2) & 0x7FFFFFFFu);
    ctx.set_fpu_condition((ctx.fpr[2] <= ctx.fpr[0]));
    // nop
    { const bool branch_taken = !ctx.fpu_condition();
    // nop
      if (branch_taken) {
          goto L_088D2790;
      }
      goto L_088D272C;
    }
L_088D272C:
    ctx.fpr[2] = std::bit_cast<float>(rt.memory().aot_load32(ctx.gpr[5] + static_cast<std::uint32_t>(52)));
    ctx.fpr[2] = ctx.fpr[2] - ctx.fpr[3];
    ctx.set_fpr_bits(2, ctx.fpr_bits(2) & 0x7FFFFFFFu);
    ctx.set_fpu_condition((ctx.fpr[2] <= ctx.fpr[0]));
    // nop
    { const bool branch_taken = !ctx.fpu_condition();
    // nop
      if (branch_taken) {
          goto L_088D2790;
      }
      goto L_088D2748;
    }
L_088D2748:
    ctx.fpr[2] = std::bit_cast<float>(rt.memory().aot_load32(ctx.gpr[5] + static_cast<std::uint32_t>(56)));
    ctx.fpr[2] = ctx.fpr[2] - ctx.fpr[3];
    ctx.set_fpr_bits(2, ctx.fpr_bits(2) & 0x7FFFFFFFu);
    ctx.set_fpu_condition((ctx.fpr[2] <= ctx.fpr[0]));
    // nop
    { const bool branch_taken = !ctx.fpu_condition();
    // nop
      if (branch_taken) {
          goto L_088D2790;
      }
      goto L_088D2764;
    }
L_088D2764:
    ctx.fpr[2] = std::bit_cast<float>(rt.memory().aot_load32(ctx.gpr[5] + static_cast<std::uint32_t>(60)));
    ctx.fpr[1] = ctx.fpr[2] - ctx.fpr[1];
    ctx.set_fpr_bits(1, ctx.fpr_bits(1) & 0x7FFFFFFFu);
    ctx.set_fpu_condition((ctx.fpr[1] <= ctx.fpr[0]));
    // nop
    { const bool branch_taken = !ctx.fpu_condition();
    // nop
      if (branch_taken) {
          goto L_088D2790;
      }
      goto L_088D2780;
    }
L_088D2780:
    ctx.set_gpr(2, 0u + static_cast<std::uint32_t>(1));
    rt.memory().aot_store8(ctx.gpr[17] + static_cast<std::uint32_t>(12), static_cast<std::uint8_t>(ctx.gpr[2]));
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_088D2794;
      }
      goto L_088D2790;
    }
L_088D2790:
    rt.memory().aot_store8(ctx.gpr[17] + static_cast<std::uint32_t>(12), static_cast<std::uint8_t>(0u));
    goto L_088D2794;
L_088D2794:
    ctx.set_gpr(4, ctx.gpr[17] + static_cast<std::uint32_t>(28));
    ctx.set_gpr(31, 0x088D27A0u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0126_entry, 126u, 747u, 0x089FFC4Cu>(ctx, &aot_mem) && ctx.pc == 0x088D27A0u) goto L_088D27A0;
    return;
L_088D27A0:
    ctx.set_gpr(4, ctx.gpr[17] + static_cast<std::uint32_t>(92));
    ctx.set_gpr(5, ctx.gpr[16] + 0u);
    ctx.set_gpr(31, 0x088D27B0u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0126_entry, 126u, 747u, 0x089FFC4Cu>(ctx, &aot_mem) && ctx.pc == 0x088D27B0u) goto L_088D27B0;
    return;
L_088D27B0:
    ctx.set_gpr(3, 0u + static_cast<std::uint32_t>(1));
    rt.memory().aot_store8(ctx.gpr[17] + static_cast<std::uint32_t>(13), static_cast<std::uint8_t>(ctx.gpr[3]));
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
L_088D27D0:
    ctx.set_gpr(29, ctx.gpr[29] + static_cast<std::uint32_t>(-32));
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(28), ctx.gpr[31]);
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(24), ctx.gpr[19]);
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(20), ctx.gpr[18]);
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(16), ctx.gpr[17]);
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(12), ctx.gpr[16]);
    ctx.set_gpr(19, ctx.gpr[4] + 0u);
    ctx.set_gpr(18, ctx.gpr[5] + 0u);
    ctx.set_gpr(2, rt.memory().aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(24)));
    ctx.set_gpr(16, rt.memory().aot_load32(ctx.gpr[2] + static_cast<std::uint32_t>(8)));
    ctx.set_gpr(2, rt.memory().aot_load8(ctx.gpr[4] + static_cast<std::uint32_t>(13)));
    { const bool branch_taken = ctx.gpr[2] != 0u;
    // nop
      if (branch_taken) {
          goto L_088D2814;
      }
      goto L_088D2804;
    }
L_088D2804:
    ctx.set_gpr(5, ctx.gpr[19] + static_cast<std::uint32_t>(28));
    ctx.set_gpr(6, ctx.gpr[19] + static_cast<std::uint32_t>(92));
    ctx.set_gpr(31, 0x088D2814u);
    // nop
    goto L_088D2598;
L_088D2814:
    ctx.set_gpr(2, rt.memory().aot_load32(ctx.gpr[19] + static_cast<std::uint32_t>(16)));
    { const bool branch_taken = ctx.gpr[2] != 0u;
    // nop
      if (branch_taken) {
          goto L_088D2844;
      }
      goto L_088D2820;
    }
L_088D2820:
    { const bool branch_taken = static_cast<std::int32_t>(ctx.gpr[16]) <= 0;
    // nop
      if (branch_taken) {
          goto L_088D2844;
      }
      goto L_088D2828;
    }
L_088D2828:
    ctx.set_gpr(5, ctx.gpr[16] << 6u);
    ctx.set_gpr(4, ctx.gpr[19] + 0u);
    ctx.set_gpr(6, 0u + static_cast<std::uint32_t>(16));
    ctx.set_gpr(31, 0x088D283Cu);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0081_entry, 81u, 6u, 0x0894806Cu>(ctx, &aot_mem) && ctx.pc == 0x088D283Cu) goto L_088D283C;
    return;
L_088D283C:
    rt.memory().aot_store32(ctx.gpr[19] + static_cast<std::uint32_t>(16), ctx.gpr[2]);
    rt.memory().aot_store32(ctx.gpr[19] + static_cast<std::uint32_t>(20), ctx.gpr[16]);
    goto L_088D2844;
L_088D2844:
    ctx.set_gpr(2, rt.memory().aot_load8(ctx.gpr[19] + static_cast<std::uint32_t>(12)));
    { const bool branch_taken = ctx.gpr[2] != 0u;
    // nop
      if (branch_taken) {
          goto L_088D28B0;
      }
      goto L_088D2850;
    }
L_088D2850:
    ctx.set_gpr(17, 0u + 0u);
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_088D289C;
      }
      goto L_088D285C;
    }
L_088D285C:
    ctx.set_gpr(2, rt.memory().aot_load32(ctx.gpr[19] + static_cast<std::uint32_t>(24)));
    ctx.set_gpr(3, ctx.gpr[17] << 2u);
    ctx.set_gpr(2, rt.memory().aot_load32(ctx.gpr[2] + static_cast<std::uint32_t>(16)));
    ctx.set_gpr(2, ctx.gpr[2] + ctx.gpr[3]);
    ctx.set_gpr(3, rt.memory().aot_load32(ctx.gpr[2] + static_cast<std::uint32_t>(0)));
    ctx.set_gpr(2, 2246u << 16u);
    ctx.set_gpr(2, rt.memory().aot_load32(ctx.gpr[2] + static_cast<std::uint32_t>(-20600)));
    ctx.set_gpr(2, rt.memory().aot_load32(ctx.gpr[2] + static_cast<std::uint32_t>(8)));
    ctx.set_gpr(6, ctx.gpr[3] + ctx.gpr[2]);
    ctx.set_gpr(3, ctx.gpr[17] << 6u);
    ctx.set_gpr(2, rt.memory().aot_load32(ctx.gpr[19] + static_cast<std::uint32_t>(16)));
    ctx.set_gpr(4, ctx.gpr[2] + ctx.gpr[3]);
    ctx.set_gpr(5, ctx.gpr[19] + static_cast<std::uint32_t>(28));
    ctx.set_gpr(31, 0x088D2898u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0126_entry, 126u, 727u, 0x089FF9E0u>(ctx, &aot_mem) && ctx.pc == 0x088D2898u) goto L_088D2898;
    return;
L_088D2898:
    ctx.set_gpr(17, ctx.gpr[17] + static_cast<std::uint32_t>(1));
    goto L_088D289C;
L_088D289C:
    ctx.set_gpr(2, static_cast<std::int32_t>(ctx.gpr[17]) < static_cast<std::int32_t>(ctx.gpr[16]) ? 1u : 0u);
    { const bool branch_taken = ctx.gpr[2] != 0u;
    // nop
      if (branch_taken) {
          goto L_088D285C;
      }
      goto L_088D28A8;
    }
L_088D28A8:
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_088D2904;
      }
      goto L_088D28B0;
    }
L_088D28B0:
    ctx.set_gpr(17, 0u + 0u);
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_088D28F8;
      }
      goto L_088D28BC;
    }
L_088D28BC:
    ctx.set_gpr(2, rt.memory().aot_load32(ctx.gpr[19] + static_cast<std::uint32_t>(24)));
    ctx.set_gpr(3, ctx.gpr[17] << 2u);
    ctx.set_gpr(2, rt.memory().aot_load32(ctx.gpr[2] + static_cast<std::uint32_t>(16)));
    ctx.set_gpr(2, ctx.gpr[2] + ctx.gpr[3]);
    ctx.set_gpr(3, rt.memory().aot_load32(ctx.gpr[2] + static_cast<std::uint32_t>(0)));
    ctx.set_gpr(2, 2246u << 16u);
    ctx.set_gpr(2, rt.memory().aot_load32(ctx.gpr[2] + static_cast<std::uint32_t>(-20600)));
    ctx.set_gpr(2, rt.memory().aot_load32(ctx.gpr[2] + static_cast<std::uint32_t>(8)));
    ctx.set_gpr(5, ctx.gpr[3] + ctx.gpr[2]);
    ctx.set_gpr(3, ctx.gpr[17] << 6u);
    ctx.set_gpr(2, rt.memory().aot_load32(ctx.gpr[19] + static_cast<std::uint32_t>(16)));
    ctx.set_gpr(4, ctx.gpr[2] + ctx.gpr[3]);
    ctx.set_gpr(31, 0x088D28F4u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0126_entry, 126u, 747u, 0x089FFC4Cu>(ctx, &aot_mem) && ctx.pc == 0x088D28F4u) goto L_088D28F4;
    return;
L_088D28F4:
    ctx.set_gpr(17, ctx.gpr[17] + static_cast<std::uint32_t>(1));
    goto L_088D28F8;
L_088D28F8:
    ctx.set_gpr(2, static_cast<std::int32_t>(ctx.gpr[17]) < static_cast<std::int32_t>(ctx.gpr[16]) ? 1u : 0u);
    { const bool branch_taken = ctx.gpr[2] != 0u;
    // nop
      if (branch_taken) {
          goto L_088D28BC;
      }
      goto L_088D2904;
    }
L_088D2904:
    ctx.set_gpr(4, ctx.gpr[18] + 0u);
    ctx.set_gpr(5, ctx.gpr[16] + 0u);
    ctx.set_gpr(6, rt.memory().aot_load32(ctx.gpr[19] + static_cast<std::uint32_t>(16)));
    ctx.set_gpr(31, 0x088D2918u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0119_entry, 119u, 577u, 0x089E3AA4u>(ctx, &aot_mem) && ctx.pc == 0x088D2918u) goto L_088D2918;
    return;
L_088D2918:
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
L_088D2938:
    jump_target = ctx.gpr[31];
    // nop
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_088D2940:
    ctx.set_gpr(29, ctx.gpr[29] + static_cast<std::uint32_t>(-16));
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(12), ctx.gpr[31]);
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(8), ctx.gpr[16]);
    ctx.set_gpr(16, ctx.gpr[4] + 0u);
    ctx.set_gpr(5, rt.memory().aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(16)));
    ctx.set_gpr(31, 0x088D295Cu);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0081_entry, 81u, 22u, 0x08948218u>(ctx, &aot_mem) && ctx.pc == 0x088D295Cu) goto L_088D295C;
    return;
L_088D295C:
    ctx.set_gpr(4, ctx.gpr[16] + 0u);
    ctx.set_gpr(31, 0x088D2968u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0080_entry, 80u, 435u, 0x08945EF4u>(ctx, &aot_mem) && ctx.pc == 0x088D2968u) goto L_088D2968;
    return;
L_088D2968:
    ctx.set_gpr(31, rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(12)));
    ctx.set_gpr(16, rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(8)));
    ctx.set_gpr(29, ctx.gpr[29] + static_cast<std::uint32_t>(16));
    jump_target = ctx.gpr[31];
    // nop
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_088D297C:
    jump_target = ctx.gpr[31];
    // nop
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_088D2984:
    jump_target = ctx.gpr[31];
    // nop
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_088D298C:
    ctx.set_gpr(29, ctx.gpr[29] + static_cast<std::uint32_t>(-16));
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(12), ctx.gpr[31]);
    ctx.set_gpr(2, ctx.gpr[4] + 0u);
    ctx.set_gpr(4, ctx.gpr[5] + 0u);
    ctx.set_gpr(5, rt.memory().aot_load8(ctx.gpr[2] + static_cast<std::uint32_t>(12)));
    ctx.set_gpr(31, 0x088D29A8u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0119_entry, 119u, 581u, 0x089E3B1Cu>(ctx, &aot_mem) && ctx.pc == 0x088D29A8u) goto L_088D29A8;
    return;
L_088D29A8:
    ctx.set_gpr(31, rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(12)));
    ctx.set_gpr(29, ctx.gpr[29] + static_cast<std::uint32_t>(16));
    jump_target = ctx.gpr[31];
    // nop
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_088D29B8:
    ctx.set_gpr(29, ctx.gpr[29] + static_cast<std::uint32_t>(-16));
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(12), ctx.gpr[31]);
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(8), ctx.gpr[16]);
    ctx.set_gpr(16, ctx.gpr[4] + 0u);
    ctx.set_gpr(4, ctx.gpr[5] + 0u);
    ctx.set_gpr(25, rt.memory().aot_load32(ctx.gpr[5] + static_cast<std::uint32_t>(0)));
    ctx.set_gpr(25, rt.memory().aot_load32(ctx.gpr[25] + static_cast<std::uint32_t>(868)));
    jump_target = ctx.gpr[25];
    ctx.set_gpr(31, 0x088D29DCu);
    // nop
    ctx.pc = jump_target;
    if (rt.invoke_chained_call(ctx, &aot_mem) && ctx.pc == 0x088D29DCu) goto L_088D29DC;
    return;
L_088D29DC:
    ctx.set_gpr(4, ctx.gpr[16] + 0u);
    ctx.set_gpr(5, ctx.gpr[2] + 0u);
    ctx.set_gpr(25, rt.memory().aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(0)));
    ctx.set_gpr(25, rt.memory().aot_load32(ctx.gpr[25] + static_cast<std::uint32_t>(136)));
    jump_target = ctx.gpr[25];
    ctx.set_gpr(31, 0x088D29F4u);
    // nop
    ctx.pc = jump_target;
    if (rt.invoke_chained_call(ctx, &aot_mem) && ctx.pc == 0x088D29F4u) goto L_088D29F4;
    return;
L_088D29F4:
    ctx.set_gpr(31, rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(12)));
    ctx.set_gpr(16, rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(8)));
    ctx.set_gpr(29, ctx.gpr[29] + static_cast<std::uint32_t>(16));
    jump_target = ctx.gpr[31];
    // nop
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_088D2A08:
    rt.memory().aot_store8(ctx.gpr[4] + static_cast<std::uint32_t>(12), static_cast<std::uint8_t>(ctx.gpr[5]));
    jump_target = ctx.gpr[31];
    // nop
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_088D2A14:
    ctx.set_gpr(29, ctx.gpr[29] + static_cast<std::uint32_t>(-16));
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(12), ctx.gpr[31]);
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(8), ctx.gpr[17]);
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(4), ctx.gpr[16]);
    ctx.set_gpr(17, ctx.gpr[4] + 0u);
    ctx.set_gpr(16, ctx.gpr[5] + 0u);
    ctx.set_gpr(4, ctx.gpr[16] + 0u);
    ctx.set_gpr(5, 0u + static_cast<std::uint32_t>(43));
    ctx.set_gpr(31, 0x088D2A3Cu);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0047_entry, 47u, 678u, 0x088C3D30u>(ctx, &aot_mem) && ctx.pc == 0x088D2A3Cu) goto L_088D2A3C;
    return;
L_088D2A3C:
    ctx.set_gpr(2, 0u + static_cast<std::uint32_t>(2));
    rt.memory().aot_store32(ctx.gpr[16] + static_cast<std::uint32_t>(0), ctx.gpr[2]);
    ctx.set_gpr(2, rt.memory().aot_load8(ctx.gpr[17] + static_cast<std::uint32_t>(12)));
    rt.memory().aot_store8(ctx.gpr[16] + static_cast<std::uint32_t>(4), static_cast<std::uint8_t>(ctx.gpr[2]));
    ctx.set_gpr(4, ctx.gpr[16] + 0u);
    ctx.set_gpr(5, ctx.gpr[17] + 0u);
    ctx.set_gpr(31, 0x088D2A5Cu);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0047_entry, 47u, 682u, 0x088C3DC0u>(ctx, &aot_mem) && ctx.pc == 0x088D2A5Cu) goto L_088D2A5C;
    return;
L_088D2A5C:
    ctx.set_gpr(2, 0u + static_cast<std::uint32_t>(1));
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
L_088D2A78:
    ctx.set_gpr(29, ctx.gpr[29] + static_cast<std::uint32_t>(-16));
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(12), ctx.gpr[31]);
    ctx.set_gpr(2, ctx.gpr[4] + 0u);
    ctx.set_gpr(4, ctx.gpr[5] + 0u);
    ctx.set_gpr(5, rt.memory().aot_load32(ctx.gpr[2] + static_cast<std::uint32_t>(12)));
    ctx.set_gpr(25, rt.memory().aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(0)));
    ctx.set_gpr(25, rt.memory().aot_load32(ctx.gpr[25] + static_cast<std::uint32_t>(1092)));
    jump_target = ctx.gpr[25];
    ctx.set_gpr(31, 0x088D2A9Cu);
    // nop
    ctx.pc = jump_target;
    if (rt.invoke_chained_call(ctx, &aot_mem) && ctx.pc == 0x088D2A9Cu) goto L_088D2A9C;
    return;
L_088D2A9C:
    ctx.set_gpr(31, rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(12)));
    ctx.set_gpr(29, ctx.gpr[29] + static_cast<std::uint32_t>(16));
    jump_target = ctx.gpr[31];
    // nop
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_088D2AAC:
    ctx.set_gpr(29, ctx.gpr[29] + static_cast<std::uint32_t>(-16));
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(12), ctx.gpr[31]);
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(8), ctx.gpr[16]);
    ctx.set_gpr(16, ctx.gpr[4] + 0u);
    ctx.set_gpr(4, ctx.gpr[5] + 0u);
    ctx.set_gpr(25, rt.memory().aot_load32(ctx.gpr[5] + static_cast<std::uint32_t>(0)));
    ctx.set_gpr(25, rt.memory().aot_load32(ctx.gpr[25] + static_cast<std::uint32_t>(1096)));
    jump_target = ctx.gpr[25];
    ctx.set_gpr(31, 0x088D2AD0u);
    // nop
    ctx.pc = jump_target;
    if (rt.invoke_chained_call(ctx, &aot_mem) && ctx.pc == 0x088D2AD0u) goto L_088D2AD0;
    return;
L_088D2AD0:
    rt.memory().aot_store32(ctx.gpr[16] + static_cast<std::uint32_t>(12), ctx.gpr[2]);
    ctx.set_gpr(31, rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(12)));
    ctx.set_gpr(16, rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(8)));
    ctx.set_gpr(29, ctx.gpr[29] + static_cast<std::uint32_t>(16));
    jump_target = ctx.gpr[31];
    // nop
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_088D2AE8:
    jump_target = ctx.gpr[31];
    // nop
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_088D2AF0:
    ctx.set_gpr(29, ctx.gpr[29] + static_cast<std::uint32_t>(-16));
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(12), ctx.gpr[31]);
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(8), ctx.gpr[16]);
    ctx.set_gpr(16, ctx.gpr[4] + 0u);
    ctx.set_gpr(4, rt.memory().aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(36)));
    ctx.set_gpr(3, 0u + static_cast<std::uint32_t>(-1));
    { const bool branch_taken = ctx.gpr[4] == ctx.gpr[3];
    // nop
      if (branch_taken) {
          goto L_088D2B34;
      }
      goto L_088D2B10;
    }
L_088D2B10:
    ctx.set_gpr(3, rt.memory().aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(56)));
    { const bool branch_taken = ctx.gpr[3] == 0u;
    // nop
      if (branch_taken) {
          goto L_088D2B2C;
      }
      goto L_088D2B1C;
    }
L_088D2B1C:
    ctx.set_gpr(4, ctx.gpr[16] + static_cast<std::uint32_t>(56));
    ctx.set_gpr(5, 0u + 0u);
    ctx.set_gpr(31, 0x088D2B2Cu);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0085_entry, 85u, 61u, 0x089584C4u>(ctx, &aot_mem) && ctx.pc == 0x088D2B2Cu) goto L_088D2B2C;
    return;
L_088D2B2C:
    ctx.set_gpr(3, 0u + static_cast<std::uint32_t>(-1));
    rt.memory().aot_store32(ctx.gpr[16] + static_cast<std::uint32_t>(36), ctx.gpr[3]);
    goto L_088D2B34;
L_088D2B34:
    ctx.set_gpr(31, rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(12)));
    ctx.set_gpr(16, rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(8)));
    ctx.set_gpr(29, ctx.gpr[29] + static_cast<std::uint32_t>(16));
    jump_target = ctx.gpr[31];
    // nop
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_088D2B48:
    ctx.set_gpr(29, ctx.gpr[29] + static_cast<std::uint32_t>(-16));
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(12), ctx.gpr[31]);
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(8), ctx.gpr[17]);
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(4), ctx.gpr[16]);
    ctx.set_gpr(17, ctx.gpr[4] + 0u);
    ctx.set_gpr(16, ctx.gpr[5] + 0u);
    ctx.set_gpr(31, 0x088D2B68u);
    // nop
    goto L_088D2AF0;
L_088D2B68:
    ctx.set_gpr(4, ctx.gpr[17] + 0u);
    ctx.set_gpr(5, ctx.gpr[16] + 0u);
    ctx.set_gpr(31, 0x088D2B78u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0048_entry, 48u, 158u, 0x088C4F74u>(ctx, &aot_mem) && ctx.pc == 0x088D2B78u) goto L_088D2B78;
    return;
L_088D2B78:
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
L_088D2B90:
    ctx.set_gpr(29, ctx.gpr[29] + static_cast<std::uint32_t>(-16));
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(12), ctx.gpr[31]);
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(8), ctx.gpr[16]);
    ctx.set_gpr(16, ctx.gpr[4] + 0u);
    ctx.set_gpr(31, 0x088D2BA8u);
    // nop
    goto L_088D2AF0;
L_088D2BA8:
    ctx.set_gpr(4, ctx.gpr[16] + 0u);
    ctx.set_gpr(31, 0x088D2BB4u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0080_entry, 80u, 429u, 0x08945EBCu>(ctx, &aot_mem) && ctx.pc == 0x088D2BB4u) goto L_088D2BB4;
    return;
L_088D2BB4:
    ctx.set_gpr(31, rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(12)));
    ctx.set_gpr(16, rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(8)));
    ctx.set_gpr(29, ctx.gpr[29] + static_cast<std::uint32_t>(16));
    jump_target = ctx.gpr[31];
    // nop
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_088D2BC8:
    jump_target = ctx.gpr[31];
    // nop
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_088D2BD0:
    jump_target = ctx.gpr[31];
    // nop
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_088D2BD8:
    jump_target = ctx.gpr[31];
    // nop
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_088D2BE0:
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
    ctx.set_gpr(18, 0u + 0u);
    ctx.set_gpr(2, rt.memory().aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(20)));
    ctx.set_gpr(2, rt.memory().aot_load32(ctx.gpr[2] + static_cast<std::uint32_t>(8)));
    { const bool branch_taken = ctx.gpr[2] != 0u;
    // nop
      if (branch_taken) {
          goto L_088D2C2C;
      }
      goto L_088D2C20;
    }
L_088D2C20:
    ctx.set_gpr(2, 0u + 0u);
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_088D2D40;
      }
      goto L_088D2C2C;
    }
L_088D2C2C:
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(44), ctx.gpr[19]);
    { const bool branch_taken = ctx.gpr[19] == 0u;
    // nop
      if (branch_taken) {
          goto L_088D2C44;
      }
      goto L_088D2C38;
    }
L_088D2C38:
    ctx.set_gpr(2, rt.memory().aot_load32(ctx.gpr[19] + static_cast<std::uint32_t>(4)));
    ctx.set_gpr(2, ctx.gpr[2] + static_cast<std::uint32_t>(1));
    rt.memory().aot_store32(ctx.gpr[19] + static_cast<std::uint32_t>(4), ctx.gpr[2]);
    goto L_088D2C44;
L_088D2C44:
    ctx.set_gpr(16, rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(44)));
    { const bool branch_taken = ctx.gpr[16] == 0u;
    // nop
      if (branch_taken) {
          goto L_088D2C74;
      }
      goto L_088D2C50;
    }
L_088D2C50:
    ctx.set_gpr(4, ctx.gpr[16] + 0u);
    ctx.set_gpr(2, 2245u << 16u);
    ctx.set_gpr(5, rt.memory().aot_load32(ctx.gpr[2] + static_cast<std::uint32_t>(23628)));
    ctx.set_gpr(31, 0x088D2C64u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0080_entry, 80u, 857u, 0x08947F8Cu>(ctx, &aot_mem) && ctx.pc == 0x088D2C64u) goto L_088D2C64;
    return;
L_088D2C64:
    { const bool branch_taken = ctx.gpr[2] == 0u;
    // nop
      if (branch_taken) {
          goto L_088D2C74;
      }
      goto L_088D2C6C;
    }
L_088D2C6C:
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_088D2C78;
      }
      goto L_088D2C74;
    }
L_088D2C74:
    ctx.set_gpr(16, 0u + 0u);
    goto L_088D2C78;
L_088D2C78:
    ctx.set_gpr(31, 0x088D2C80u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0074_entry, 74u, 428u, 0x0892DD50u>(ctx, &aot_mem) && ctx.pc == 0x088D2C80u) goto L_088D2C80;
    return;
L_088D2C80:
    ctx.set_gpr(17, ctx.gpr[2] + 0u);
    { const bool branch_taken = ctx.gpr[16] == 0u;
    // nop
      if (branch_taken) {
          goto L_088D2D28;
      }
      goto L_088D2C8C;
    }
L_088D2C8C:
    ctx.set_gpr(4, rt.memory().aot_load32(ctx.gpr[21] + static_cast<std::uint32_t>(20)));
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(40), ctx.gpr[16]);
    ctx.set_gpr(5, ctx.gpr[29] + static_cast<std::uint32_t>(40));
    ctx.set_gpr(6, 0u + 0u);
    ctx.set_gpr(31, 0x088D2CA4u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0018_entry, 18u, 462u, 0x0884D888u>(ctx, &aot_mem) && ctx.pc == 0x088D2CA4u) goto L_088D2CA4;
    return;
L_088D2CA4:
    ctx.set_gpr(3, 0u + static_cast<std::uint32_t>(-1));
    { const bool branch_taken = ctx.gpr[2] == ctx.gpr[3];
    // nop
      if (branch_taken) {
          goto L_088D2D28;
      }
      goto L_088D2CB0;
    }
L_088D2CB0:
    ctx.set_gpr(3, rt.memory().aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(60)));
    ctx.set_gpr(2, 0u + static_cast<std::uint32_t>(-2));
    ctx.set_gpr(16, ctx.gpr[3] & ctx.gpr[2]);
    ctx.set_gpr(4, ctx.gpr[16] + 0u);
    ctx.set_gpr(31, 0x088D2CC8u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0004_entry, 4u, 508u, 0x08816764u>(ctx, &aot_mem) && ctx.pc == 0x088D2CC8u) goto L_088D2CC8;
    return;
L_088D2CC8:
    ctx.set_gpr(4, ctx.gpr[16] + 0u);
    ctx.set_gpr(5, ctx.gpr[2] + 0u);
    ctx.set_gpr(31, 0x088D2CD8u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0085_entry, 85u, 654u, 0x0895AC28u>(ctx, &aot_mem) && ctx.pc == 0x088D2CD8u) goto L_088D2CD8;
    return;
L_088D2CD8:
    ctx.set_gpr(3, 2227u << 16u);
    ctx.set_gpr(4, rt.memory().aot_load32(ctx.gpr[3] + static_cast<std::uint32_t>(20244)));
    ctx.set_gpr(5, ctx.gpr[2] + 0u);
    ctx.set_gpr(6, ctx.gpr[17] + 0u);
    ctx.set_gpr(31, 0x088D2CF0u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0085_entry, 85u, 671u, 0x0895AD18u>(ctx, &aot_mem) && ctx.pc == 0x088D2CF0u) goto L_088D2CF0;
    return;
L_088D2CF0:
    ctx.set_gpr(16, ctx.gpr[2] + 0u);
    ctx.set_gpr(4, ctx.gpr[20] + 0u);
    ctx.set_gpr(5, ctx.gpr[21] + 0u);
    ctx.set_gpr(6, ctx.gpr[16] + 0u);
    ctx.set_gpr(7, ctx.gpr[19] + 0u);
    ctx.set_gpr(31, 0x088D2D0Cu);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0070_entry, 70u, 167u, 0x0891CCBCu>(ctx, &aot_mem) && ctx.pc == 0x088D2D0Cu) goto L_088D2D0C;
    return;
L_088D2D0C:
    ctx.set_gpr(18, ctx.gpr[2] & 255u);
    ctx.set_gpr(4, ctx.gpr[17] + 0u);
    ctx.set_gpr(5, ctx.gpr[16] + 0u);
    ctx.set_gpr(25, rt.memory().aot_load32(ctx.gpr[17] + static_cast<std::uint32_t>(0)));
    ctx.set_gpr(25, rt.memory().aot_load32(ctx.gpr[25] + static_cast<std::uint32_t>(144)));
    jump_target = ctx.gpr[25];
    ctx.set_gpr(31, 0x088D2D28u);
    // nop
    ctx.pc = jump_target;
    if (rt.invoke_chained_call(ctx, &aot_mem) && ctx.pc == 0x088D2D28u) goto L_088D2D28;
    return;
L_088D2D28:
    ctx.set_gpr(4, rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(44)));
    { const bool branch_taken = ctx.gpr[4] == 0u;
    // nop
      if (branch_taken) {
          goto L_088D2D3C;
      }
      goto L_088D2D34;
    }
L_088D2D34:
    ctx.set_gpr(31, 0x088D2D3Cu);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0014_entry, 14u, 257u, 0x0883D454u>(ctx, &aot_mem) && ctx.pc == 0x088D2D3Cu) goto L_088D2D3C;
    return;
L_088D2D3C:
    ctx.set_gpr(2, ctx.gpr[18] + 0u);
    goto L_088D2D40;
L_088D2D40:
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
L_088D2D68:
    ctx.set_gpr(29, ctx.gpr[29] + static_cast<std::uint32_t>(-32));
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(28), ctx.gpr[31]);
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(24), ctx.gpr[20]);
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(20), ctx.gpr[19]);
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(16), ctx.gpr[18]);
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(12), ctx.gpr[17]);
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(8), ctx.gpr[16]);
    ctx.set_gpr(20, ctx.gpr[4] + 0u);
    ctx.set_gpr(19, ctx.gpr[5] + 0u);
    ctx.set_gpr(2, rt.memory().aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(20)));
    ctx.set_gpr(2, rt.memory().aot_load32(ctx.gpr[2] + static_cast<std::uint32_t>(8)));
    { const bool branch_taken = ctx.gpr[2] != 0u;
    // nop
      if (branch_taken) {
          goto L_088D2DA8;
      }
      goto L_088D2D9C;
    }
L_088D2D9C:
    ctx.set_gpr(2, 0u + 0u);
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_088D2E54;
      }
      goto L_088D2DA8;
    }
L_088D2DA8:
    ctx.set_gpr(2, 2227u << 16u);
    ctx.set_gpr(4, rt.memory().aot_load32(ctx.gpr[2] + static_cast<std::uint32_t>(20244)));
    ctx.set_gpr(31, 0x088D2DB8u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0004_entry, 4u, 508u, 0x08816764u>(ctx, &aot_mem) && ctx.pc == 0x088D2DB8u) goto L_088D2DB8;
    return;
L_088D2DB8:
    ctx.set_gpr(4, ctx.gpr[19] + 0u);
    ctx.set_gpr(3, 2227u << 16u);
    ctx.set_gpr(5, rt.memory().aot_load32(ctx.gpr[3] + static_cast<std::uint32_t>(20244)));
    ctx.set_gpr(6, ctx.gpr[2] + 0u);
    ctx.set_gpr(31, 0x088D2DD0u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0004_entry, 4u, 543u, 0x088169A8u>(ctx, &aot_mem) && ctx.pc == 0x088D2DD0u) goto L_088D2DD0;
    return;
L_088D2DD0:
    { const bool branch_taken = ctx.gpr[2] != 0u;
    // nop
      if (branch_taken) {
          goto L_088D2E50;
      }
      goto L_088D2DD8;
    }
L_088D2DD8:
    ctx.set_gpr(2, 2227u << 16u);
    ctx.set_gpr(4, rt.memory().aot_load32(ctx.gpr[2] + static_cast<std::uint32_t>(20244)));
    ctx.set_gpr(31, 0x088D2DE8u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0004_entry, 4u, 508u, 0x08816764u>(ctx, &aot_mem) && ctx.pc == 0x088D2DE8u) goto L_088D2DE8;
    return;
L_088D2DE8:
    ctx.set_gpr(19, ctx.gpr[19] + ctx.gpr[2]);
    ctx.set_gpr(2, rt.memory().aot_load32(ctx.gpr[20] + static_cast<std::uint32_t>(20)));
    ctx.set_gpr(16, rt.memory().aot_load32(ctx.gpr[2] + static_cast<std::uint32_t>(8)));
    ctx.set_gpr(18, 0u + 0u);
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_088D2E44;
      }
      goto L_088D2E00;
    }
L_088D2E00:
    ctx.set_gpr(2, rt.memory().aot_load32(ctx.gpr[20] + static_cast<std::uint32_t>(20)));
    ctx.set_gpr(3, ctx.gpr[18] << 2u);
    ctx.set_gpr(2, rt.memory().aot_load32(ctx.gpr[2] + static_cast<std::uint32_t>(16)));
    ctx.set_gpr(2, ctx.gpr[2] + ctx.gpr[3]);
    ctx.set_gpr(17, rt.memory().aot_load32(ctx.gpr[2] + static_cast<std::uint32_t>(0)));
    ctx.set_gpr(3, rt.memory().aot_load32(ctx.gpr[17] + static_cast<std::uint32_t>(60)));
    ctx.set_gpr(2, 0u + static_cast<std::uint32_t>(-2));
    ctx.set_gpr(4, ctx.gpr[3] & ctx.gpr[2]);
    ctx.set_gpr(5, ctx.gpr[19] + 0u);
    ctx.set_gpr(31, 0x088D2E2Cu);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0004_entry, 4u, 480u, 0x08816610u>(ctx, &aot_mem) && ctx.pc == 0x088D2E2Cu) goto L_088D2E2C;
    return;
L_088D2E2C:
    { const bool branch_taken = ctx.gpr[2] != 0u;
    // nop
      if (branch_taken) {
          goto L_088D2E40;
      }
      goto L_088D2E34;
    }
L_088D2E34:
    ctx.set_gpr(2, ctx.gpr[17] + 0u);
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_088D2E54;
      }
      goto L_088D2E40;
    }
L_088D2E40:
    ctx.set_gpr(18, ctx.gpr[18] + static_cast<std::uint32_t>(1));
    goto L_088D2E44;
L_088D2E44:
    ctx.set_gpr(2, static_cast<std::int32_t>(ctx.gpr[18]) < static_cast<std::int32_t>(ctx.gpr[16]) ? 1u : 0u);
    { const bool branch_taken = ctx.gpr[2] != 0u;
    // nop
      if (branch_taken) {
          goto L_088D2E00;
      }
      goto L_088D2E50;
    }
L_088D2E50:
    ctx.set_gpr(2, 0u + 0u);
    goto L_088D2E54;
L_088D2E54:
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
L_088D2E78:
    ctx.set_gpr(29, ctx.gpr[29] + static_cast<std::uint32_t>(-48));
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(28), ctx.gpr[31]);
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(24), ctx.gpr[19]);
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(20), ctx.gpr[18]);
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(16), ctx.gpr[17]);
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(12), ctx.gpr[16]);
    ctx.set_gpr(19, ctx.gpr[4] + 0u);
    ctx.set_gpr(18, ctx.gpr[5] + 0u);
    ctx.set_gpr(17, ctx.gpr[6] + 0u);
    ctx.set_gpr(2, rt.memory().aot_load32(ctx.gpr[6] + static_cast<std::uint32_t>(0)));
    ctx.set_gpr(3, rt.memory().aot_load32(ctx.gpr[2] + static_cast<std::uint32_t>(60)));
    ctx.set_gpr(2, 0u + static_cast<std::uint32_t>(-2));
    ctx.set_gpr(16, ctx.gpr[3] & ctx.gpr[2]);
    ctx.set_gpr(4, ctx.gpr[16] + 0u);
    ctx.set_gpr(31, 0x088D2EB8u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0004_entry, 4u, 508u, 0x08816764u>(ctx, &aot_mem) && ctx.pc == 0x088D2EB8u) goto L_088D2EB8;
    return;
L_088D2EB8:
    ctx.set_gpr(4, ctx.gpr[16] + 0u);
    ctx.set_gpr(5, ctx.gpr[2] + 0u);
    ctx.set_gpr(31, 0x088D2EC8u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0085_entry, 85u, 654u, 0x0895AC28u>(ctx, &aot_mem) && ctx.pc == 0x088D2EC8u) goto L_088D2EC8;
    return;
L_088D2EC8:
    ctx.set_gpr(16, ctx.gpr[2] + 0u);
    ctx.set_gpr(31, 0x088D2ED4u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0078_entry, 78u, 228u, 0x0893CE9Cu>(ctx, &aot_mem) && ctx.pc == 0x088D2ED4u) goto L_088D2ED4;
    return;
L_088D2ED4:
    ctx.set_gpr(4, rt.memory().aot_load32(ctx.gpr[2] + static_cast<std::uint32_t>(0)));
    ctx.set_gpr(31, 0x088D2EE0u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0078_entry, 78u, 199u, 0x0893CC68u>(ctx, &aot_mem) && ctx.pc == 0x088D2EE0u) goto L_088D2EE0;
    return;
L_088D2EE0:
    ctx.set_gpr(3, 2227u << 16u);
    ctx.set_gpr(4, rt.memory().aot_load32(ctx.gpr[3] + static_cast<std::uint32_t>(20244)));
    ctx.set_gpr(5, ctx.gpr[16] + 0u);
    ctx.set_gpr(6, ctx.gpr[2] + 0u);
    ctx.set_gpr(31, 0x088D2EF8u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0085_entry, 85u, 671u, 0x0895AD18u>(ctx, &aot_mem) && ctx.pc == 0x088D2EF8u) goto L_088D2EF8;
    return;
L_088D2EF8:
    ctx.set_gpr(16, ctx.gpr[2] + 0u);
    ctx.set_gpr(4, ctx.gpr[18] + 0u);
    ctx.set_gpr(5, ctx.gpr[16] + 0u);
    ctx.set_gpr(6, 0u + 0u);
    ctx.set_gpr(25, rt.memory().aot_load32(ctx.gpr[18] + static_cast<std::uint32_t>(0)));
    ctx.set_gpr(25, rt.memory().aot_load32(ctx.gpr[25] + static_cast<std::uint32_t>(96)));
    jump_target = ctx.gpr[25];
    ctx.set_gpr(31, 0x088D2F18u);
    // nop
    ctx.pc = jump_target;
    if (rt.invoke_chained_call(ctx, &aot_mem) && ctx.pc == 0x088D2F18u) goto L_088D2F18;
    return;
L_088D2F18:
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(44), ctx.gpr[2]);
    { const bool branch_taken = ctx.gpr[2] == 0u;
    // nop
      if (branch_taken) {
          goto L_088D2F30;
      }
      goto L_088D2F24;
    }
L_088D2F24:
    ctx.set_gpr(3, rt.memory().aot_load32(ctx.gpr[2] + static_cast<std::uint32_t>(4)));
    ctx.set_gpr(3, ctx.gpr[3] + static_cast<std::uint32_t>(1));
    rt.memory().aot_store32(ctx.gpr[2] + static_cast<std::uint32_t>(4), ctx.gpr[3]);
    goto L_088D2F30;
L_088D2F30:
    ctx.set_gpr(2, rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(44)));
    { const bool branch_taken = ctx.gpr[2] != 0u;
    // nop
      if (branch_taken) {
          goto L_088D2F5C;
      }
      goto L_088D2F3C;
    }
L_088D2F3C:
    ctx.set_gpr(5, rt.memory().aot_load32(ctx.gpr[17] + static_cast<std::uint32_t>(0)));
    ctx.set_gpr(4, rt.memory().aot_load32(ctx.gpr[18] + static_cast<std::uint32_t>(20)));
    ctx.set_gpr(31, 0x088D2F4Cu);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0081_entry, 81u, 299u, 0x089494E0u>(ctx, &aot_mem) && ctx.pc == 0x088D2F4Cu) goto L_088D2F4C;
    return;
L_088D2F4C:
    ctx.set_gpr(4, ctx.gpr[29] + static_cast<std::uint32_t>(44));
    ctx.set_gpr(5, rt.memory().aot_load32(ctx.gpr[17] + static_cast<std::uint32_t>(0)));
    ctx.set_gpr(31, 0x088D2F5Cu);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0085_entry, 85u, 61u, 0x089584C4u>(ctx, &aot_mem) && ctx.pc == 0x088D2F5Cu) goto L_088D2F5C;
    return;
L_088D2F5C:
    ctx.set_gpr(31, 0x088D2F64u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0078_entry, 78u, 228u, 0x0893CE9Cu>(ctx, &aot_mem) && ctx.pc == 0x088D2F64u) goto L_088D2F64;
    return;
L_088D2F64:
    ctx.set_gpr(4, rt.memory().aot_load32(ctx.gpr[2] + static_cast<std::uint32_t>(0)));
    ctx.set_gpr(31, 0x088D2F70u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0078_entry, 78u, 199u, 0x0893CC68u>(ctx, &aot_mem) && ctx.pc == 0x088D2F70u) goto L_088D2F70;
    return;
L_088D2F70:
    ctx.set_gpr(4, ctx.gpr[2] + 0u);
    ctx.set_gpr(5, ctx.gpr[16] + 0u);
    ctx.set_gpr(25, rt.memory().aot_load32(ctx.gpr[2] + static_cast<std::uint32_t>(0)));
    ctx.set_gpr(25, rt.memory().aot_load32(ctx.gpr[25] + static_cast<std::uint32_t>(144)));
    jump_target = ctx.gpr[25];
    ctx.set_gpr(31, 0x088D2F88u);
    // nop
    ctx.pc = jump_target;
    if (rt.invoke_chained_call(ctx, &aot_mem) && ctx.pc == 0x088D2F88u) goto L_088D2F88;
    return;
L_088D2F88:
    ctx.set_gpr(3, rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(44)));
    rt.memory().aot_store32(ctx.gpr[19] + static_cast<std::uint32_t>(0), ctx.gpr[3]);
    { const bool branch_taken = ctx.gpr[3] == 0u;
    // nop
      if (branch_taken) {
          goto L_088D2FA4;
      }
      goto L_088D2F98;
    }
L_088D2F98:
    ctx.set_gpr(2, rt.memory().aot_load32(ctx.gpr[3] + static_cast<std::uint32_t>(4)));
    ctx.set_gpr(2, ctx.gpr[2] + static_cast<std::uint32_t>(1));
    rt.memory().aot_store32(ctx.gpr[3] + static_cast<std::uint32_t>(4), ctx.gpr[2]);
    goto L_088D2FA4;
L_088D2FA4:
    ctx.set_gpr(4, rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(44)));
    { const bool branch_taken = ctx.gpr[4] == 0u;
    // nop
      if (branch_taken) {
          goto L_088D2FB8;
      }
      goto L_088D2FB0;
    }
L_088D2FB0:
    ctx.set_gpr(31, 0x088D2FB8u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0014_entry, 14u, 257u, 0x0883D454u>(ctx, &aot_mem) && ctx.pc == 0x088D2FB8u) goto L_088D2FB8;
    return;
L_088D2FB8:
    ctx.set_gpr(2, 0u + 0u);
    ctx.set_gpr(31, rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(28)));
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
L_088D2FDC:
    ctx.set_gpr(29, ctx.gpr[29] + static_cast<std::uint32_t>(-16));
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(12), ctx.gpr[31]);
    ctx.set_gpr(2, ctx.gpr[4] + 0u);
    ctx.set_gpr(4, ctx.gpr[5] + 0u);
    ctx.set_gpr(5, rt.memory().aot_load32(ctx.gpr[2] + static_cast<std::uint32_t>(12)));
    ctx.set_gpr(6, rt.memory().aot_load32(ctx.gpr[2] + static_cast<std::uint32_t>(16)));
    ctx.set_gpr(7, rt.memory().aot_load32(ctx.gpr[2] + static_cast<std::uint32_t>(20)));
    ctx.set_gpr(8, rt.memory().aot_load32(ctx.gpr[2] + static_cast<std::uint32_t>(24)));
    ctx.fpr[12] = std::bit_cast<float>(rt.memory().aot_load32(ctx.gpr[2] + static_cast<std::uint32_t>(32)));
    ctx.fpr[13] = std::bit_cast<float>(rt.memory().aot_load32(ctx.gpr[2] + static_cast<std::uint32_t>(36)));
    ctx.set_gpr(31, 0x088D300Cu);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0117_entry, 117u, 515u, 0x089DBB74u>(ctx, &aot_mem) && ctx.pc == 0x088D300Cu) goto L_088D300C;
    return;
L_088D300C:
    ctx.set_gpr(31, rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(12)));
    ctx.set_gpr(29, ctx.gpr[29] + static_cast<std::uint32_t>(16));
    jump_target = ctx.gpr[31];
    // nop
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_088D301C:
    ctx.set_gpr(29, ctx.gpr[29] + static_cast<std::uint32_t>(-48));
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(12), ctx.gpr[31]);
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(8), ctx.gpr[16]);
    ctx.set_gpr(16, ctx.gpr[4] + 0u);
    ctx.set_gpr(4, ctx.gpr[5] + 0u);
    ctx.set_gpr(5, ctx.gpr[29] + static_cast<std::uint32_t>(44));
    ctx.set_gpr(6, ctx.gpr[29] + static_cast<std::uint32_t>(40));
    ctx.set_gpr(7, ctx.gpr[29] + static_cast<std::uint32_t>(36));
    ctx.set_gpr(8, ctx.gpr[29] + static_cast<std::uint32_t>(32));
    ctx.set_gpr(9, ctx.gpr[29] + static_cast<std::uint32_t>(28));
    ctx.set_gpr(10, ctx.gpr[29] + static_cast<std::uint32_t>(24));
    ctx.set_gpr(25, rt.memory().aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(0)));
    ctx.set_gpr(25, rt.memory().aot_load32(ctx.gpr[25] + static_cast<std::uint32_t>(772)));
    jump_target = ctx.gpr[25];
    ctx.set_gpr(31, 0x088D3058u);
    // nop
    ctx.pc = jump_target;
    if (rt.invoke_chained_call(ctx, &aot_mem) && ctx.pc == 0x088D3058u) goto L_088D3058;
    return;
L_088D3058:
    ctx.set_gpr(3, rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(44)));
    rt.memory().aot_store32(ctx.gpr[16] + static_cast<std::uint32_t>(12), ctx.gpr[3]);
    ctx.set_gpr(3, rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(40)));
    rt.memory().aot_store32(ctx.gpr[16] + static_cast<std::uint32_t>(16), ctx.gpr[3]);
    ctx.set_gpr(3, rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(36)));
    rt.memory().aot_store32(ctx.gpr[16] + static_cast<std::uint32_t>(20), ctx.gpr[3]);
    ctx.set_gpr(3, rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(32)));
    rt.memory().aot_store32(ctx.gpr[16] + static_cast<std::uint32_t>(24), ctx.gpr[3]);
    ctx.fpr[0] = std::bit_cast<float>(rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(28)));
    rt.memory().aot_store32(ctx.gpr[16] + static_cast<std::uint32_t>(32), std::bit_cast<std::uint32_t>(ctx.fpr[0]));
    ctx.fpr[0] = std::bit_cast<float>(rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(24)));
    rt.memory().aot_store32(ctx.gpr[16] + static_cast<std::uint32_t>(36), std::bit_cast<std::uint32_t>(ctx.fpr[0]));
    ctx.set_gpr(31, rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(12)));
    ctx.set_gpr(16, rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(8)));
    ctx.set_gpr(29, ctx.gpr[29] + static_cast<std::uint32_t>(48));
    jump_target = ctx.gpr[31];
    // nop
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_088D309C:
    ctx.set_gpr(29, ctx.gpr[29] + static_cast<std::uint32_t>(-16));
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(12), ctx.gpr[31]);
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(8), ctx.gpr[17]);
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(4), ctx.gpr[16]);
    ctx.set_gpr(17, ctx.gpr[4] + 0u);
    ctx.set_gpr(16, ctx.gpr[5] + 0u);
    ctx.set_gpr(4, ctx.gpr[16] + 0u);
    ctx.set_gpr(5, 0u + static_cast<std::uint32_t>(4));
    ctx.set_gpr(31, 0x088D30C4u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0047_entry, 47u, 670u, 0x088C3CA8u>(ctx, &aot_mem) && ctx.pc == 0x088D30C4u) goto L_088D30C4;
    return;
L_088D30C4:
    ctx.set_gpr(2, rt.memory().aot_load32(ctx.gpr[17] + static_cast<std::uint32_t>(12)));
    rt.memory().aot_store32(ctx.gpr[16] + static_cast<std::uint32_t>(132), ctx.gpr[2]);
    ctx.set_gpr(2, rt.memory().aot_load32(ctx.gpr[17] + static_cast<std::uint32_t>(16)));
    rt.memory().aot_store32(ctx.gpr[16] + static_cast<std::uint32_t>(136), ctx.gpr[2]);
    ctx.set_gpr(2, rt.memory().aot_load32(ctx.gpr[17] + static_cast<std::uint32_t>(20)));
    rt.memory().aot_store32(ctx.gpr[16] + static_cast<std::uint32_t>(140), ctx.gpr[2]);
    ctx.set_gpr(2, rt.memory().aot_load32(ctx.gpr[17] + static_cast<std::uint32_t>(24)));
    rt.memory().aot_store32(ctx.gpr[16] + static_cast<std::uint32_t>(144), ctx.gpr[2]);
    ctx.fpr[0] = std::bit_cast<float>(rt.memory().aot_load32(ctx.gpr[17] + static_cast<std::uint32_t>(32)));
    rt.memory().aot_store32(ctx.gpr[16] + static_cast<std::uint32_t>(20), std::bit_cast<std::uint32_t>(ctx.fpr[0]));
    ctx.fpr[0] = std::bit_cast<float>(rt.memory().aot_load32(ctx.gpr[17] + static_cast<std::uint32_t>(36)));
    rt.memory().aot_store32(ctx.gpr[16] + static_cast<std::uint32_t>(24), std::bit_cast<std::uint32_t>(ctx.fpr[0]));
    ctx.set_gpr(4, ctx.gpr[16] + 0u);
    ctx.set_gpr(5, 0u + static_cast<std::uint32_t>(44));
    ctx.set_gpr(31, 0x088D3104u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0047_entry, 47u, 678u, 0x088C3D30u>(ctx, &aot_mem) && ctx.pc == 0x088D3104u) goto L_088D3104;
    return;
L_088D3104:
    ctx.set_gpr(2, 0u + static_cast<std::uint32_t>(39));
    rt.memory().aot_store32(ctx.gpr[16] + static_cast<std::uint32_t>(0), ctx.gpr[2]);
    ctx.set_gpr(4, ctx.gpr[16] + 0u);
    ctx.set_gpr(5, ctx.gpr[17] + 0u);
    ctx.set_gpr(31, 0x088D311Cu);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0047_entry, 47u, 682u, 0x088C3DC0u>(ctx, &aot_mem) && ctx.pc == 0x088D311Cu) goto L_088D311C;
    return;
L_088D311C:
    ctx.set_gpr(2, 0u + static_cast<std::uint32_t>(1));
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
L_088D3138:
    ctx.set_gpr(29, ctx.gpr[29] + static_cast<std::uint32_t>(-16));
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(12), ctx.gpr[31]);
    ctx.set_gpr(31, 0x088D3148u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0048_entry, 48u, 167u, 0x088C501Cu>(ctx, &aot_mem) && ctx.pc == 0x088D3148u) goto L_088D3148;
    return;
L_088D3148:
    ctx.set_gpr(31, rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(12)));
    ctx.set_gpr(29, ctx.gpr[29] + static_cast<std::uint32_t>(16));
    jump_target = ctx.gpr[31];
    // nop
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_088D3158:
    ctx.set_gpr(29, ctx.gpr[29] + static_cast<std::uint32_t>(-48));
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(28), ctx.gpr[31]);
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(24), ctx.gpr[19]);
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(20), ctx.gpr[18]);
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(16), ctx.gpr[17]);
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(12), ctx.gpr[16]);
    ctx.set_gpr(19, ctx.gpr[4] + 0u);
    ctx.set_gpr(18, ctx.gpr[5] + 0u);
    ctx.set_gpr(16, ctx.gpr[6] + 0u);
    ctx.set_gpr(17, ctx.gpr[7] + 0u);
    { const bool branch_taken = ctx.gpr[16] == 0u;
    // nop
      if (branch_taken) {
          goto L_088D3194;
      }
      goto L_088D3188;
    }
L_088D3188:
    ctx.set_gpr(3, rt.memory().aot_load32(ctx.gpr[18] + static_cast<std::uint32_t>(8)));
    { const bool branch_taken = ctx.gpr[3] != 0u;
    // nop
      if (branch_taken) {
          goto L_088D31B8;
      }
      goto L_088D3194;
    }
L_088D3194:
    rt.memory().aot_store32(ctx.gpr[19] + static_cast<std::uint32_t>(0), 0u);
    ctx.set_gpr(4, 0u + 0u);
    { const bool branch_taken = ctx.gpr[4] == 0u;
    // nop
      if (branch_taken) {
          goto L_088D31B0;
      }
      goto L_088D31A4;
    }
L_088D31A4:
    ctx.set_gpr(3, rt.memory().aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(4)));
    ctx.set_gpr(3, ctx.gpr[3] + static_cast<std::uint32_t>(1));
    rt.memory().aot_store32(ctx.gpr[4] + static_cast<std::uint32_t>(4), ctx.gpr[3]);
    goto L_088D31B0;
L_088D31B0:
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_088D32A4;
      }
      goto L_088D31B8;
    }
L_088D31B8:
    ctx.set_gpr(4, ctx.gpr[18] + 0u);
    ctx.set_gpr(31, 0x088D31C4u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0081_entry, 81u, 41u, 0x0894835Cu>(ctx, &aot_mem) && ctx.pc == 0x088D31C4u) goto L_088D31C4;
    return;
L_088D31C4:
    ctx.set_gpr(4, ctx.gpr[29] + static_cast<std::uint32_t>(44));
    ctx.set_gpr(5, ctx.gpr[16] + 0u);
    ctx.set_gpr(6, ctx.gpr[2] + 0u);
    ctx.set_gpr(31, 0x088D31D8u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0079_entry, 79u, 912u, 0x08943FF8u>(ctx, &aot_mem) && ctx.pc == 0x088D31D8u) goto L_088D31D8;
    return;
L_088D31D8:
    ctx.set_gpr(16, rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(44)));
    { const bool branch_taken = ctx.gpr[16] == 0u;
    // nop
      if (branch_taken) {
          goto L_088D3208;
      }
      goto L_088D31E4;
    }
L_088D31E4:
    ctx.set_gpr(4, ctx.gpr[16] + 0u);
    ctx.set_gpr(2, 2245u << 16u);
    ctx.set_gpr(5, rt.memory().aot_load32(ctx.gpr[2] + static_cast<std::uint32_t>(25616)));
    ctx.set_gpr(31, 0x088D31F8u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0080_entry, 80u, 857u, 0x08947F8Cu>(ctx, &aot_mem) && ctx.pc == 0x088D31F8u) goto L_088D31F8;
    return;
L_088D31F8:
    { const bool branch_taken = ctx.gpr[2] == 0u;
    // nop
      if (branch_taken) {
          goto L_088D3208;
      }
      goto L_088D3200;
    }
L_088D3200:
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_088D320C;
      }
      goto L_088D3208;
    }
L_088D3208:
    ctx.set_gpr(16, 0u + 0u);
    goto L_088D320C;
L_088D320C:
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(40), ctx.gpr[16]);
    { const bool branch_taken = ctx.gpr[16] == 0u;
    // nop
      if (branch_taken) {
          goto L_088D3224;
      }
      goto L_088D3218;
    }
L_088D3218:
    ctx.set_gpr(2, rt.memory().aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(4)));
    ctx.set_gpr(2, ctx.gpr[2] + static_cast<std::uint32_t>(1));
    rt.memory().aot_store32(ctx.gpr[16] + static_cast<std::uint32_t>(4), ctx.gpr[2]);
    goto L_088D3224;
L_088D3224:
    ctx.set_gpr(4, rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(40)));
    { const bool branch_taken = ctx.gpr[4] == 0u;
    // nop
      if (branch_taken) {
          goto L_088D325C;
      }
      goto L_088D3230;
    }
L_088D3230:
    ctx.set_gpr(5, static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int16_t>(ctx.gpr[17]))));
    ctx.set_gpr(25, rt.memory().aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(0)));
    ctx.set_gpr(25, rt.memory().aot_load32(ctx.gpr[25] + static_cast<std::uint32_t>(100)));
    jump_target = ctx.gpr[25];
    ctx.set_gpr(31, 0x088D3244u);
    // nop
    ctx.pc = jump_target;
    if (rt.invoke_chained_call(ctx, &aot_mem) && ctx.pc == 0x088D3244u) goto L_088D3244;
    return;
L_088D3244:
    ctx.set_gpr(4, rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(40)));
    ctx.set_gpr(5, rt.memory().aot_load32(ctx.gpr[18] + static_cast<std::uint32_t>(8)));
    ctx.set_gpr(25, rt.memory().aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(0)));
    ctx.set_gpr(25, rt.memory().aot_load32(ctx.gpr[25] + static_cast<std::uint32_t>(104)));
    jump_target = ctx.gpr[25];
    ctx.set_gpr(31, 0x088D325Cu);
    // nop
    ctx.pc = jump_target;
    if (rt.invoke_chained_call(ctx, &aot_mem) && ctx.pc == 0x088D325Cu) goto L_088D325C;
    return;
L_088D325C:
    ctx.set_gpr(3, rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(40)));
    rt.memory().aot_store32(ctx.gpr[19] + static_cast<std::uint32_t>(0), ctx.gpr[3]);
    { const bool branch_taken = ctx.gpr[3] == 0u;
    // nop
      if (branch_taken) {
          goto L_088D3278;
      }
      goto L_088D326C;
    }
L_088D326C:
    ctx.set_gpr(2, rt.memory().aot_load32(ctx.gpr[3] + static_cast<std::uint32_t>(4)));
    ctx.set_gpr(2, ctx.gpr[2] + static_cast<std::uint32_t>(1));
    rt.memory().aot_store32(ctx.gpr[3] + static_cast<std::uint32_t>(4), ctx.gpr[2]);
    goto L_088D3278;
L_088D3278:
    ctx.set_gpr(4, rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(40)));
    { const bool branch_taken = ctx.gpr[4] == 0u;
    // nop
      if (branch_taken) {
          goto L_088D328C;
      }
      goto L_088D3284;
    }
L_088D3284:
    ctx.set_gpr(31, 0x088D328Cu);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0014_entry, 14u, 257u, 0x0883D454u>(ctx, &aot_mem) && ctx.pc == 0x088D328Cu) goto L_088D328C;
    return;
L_088D328C:
    ctx.set_gpr(4, rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(44)));
    { const bool branch_taken = ctx.gpr[4] == 0u;
    // nop
      if (branch_taken) {
          goto L_088D32A0;
      }
      goto L_088D3298;
    }
L_088D3298:
    ctx.set_gpr(31, 0x088D32A0u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0014_entry, 14u, 257u, 0x0883D454u>(ctx, &aot_mem) && ctx.pc == 0x088D32A0u) goto L_088D32A0;
    return;
L_088D32A0:
    ctx.set_gpr(2, 0u + 0u);
    goto L_088D32A4;
L_088D32A4:
    ctx.set_gpr(31, rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(28)));
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
L_088D32C4:
    jump_target = ctx.gpr[31];
    // nop
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_088D32CC:
    ctx.set_gpr(29, ctx.gpr[29] + static_cast<std::uint32_t>(-32));
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(12), ctx.gpr[31]);
    ctx.set_gpr(6, rt.memory().aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(12)));
    ctx.set_gpr(3, 0u + static_cast<std::uint32_t>(2));
    { const bool branch_taken = ctx.gpr[6] == ctx.gpr[3];
    // nop
      if (branch_taken) {
          goto L_088D335C;
      }
      goto L_088D32E4;
    }
L_088D32E4:
    ctx.set_gpr(3, 0u + static_cast<std::uint32_t>(1));
    { const bool branch_taken = ctx.gpr[6] == ctx.gpr[3];
    // nop
      if (branch_taken) {
          goto L_088D3348;
      }
      goto L_088D32F0;
    }
L_088D32F0:
    { const bool branch_taken = ctx.gpr[6] == 0u;
    // nop
      if (branch_taken) {
          goto L_088D3300;
      }
      goto L_088D32F8;
    }
L_088D32F8:
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_088D339C;
      }
      goto L_088D3300;
    }
L_088D3300:
    ctx.set_gpr(3, rt.memory().aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(16)));
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(28), ctx.gpr[3]);
    { const bool branch_taken = ctx.gpr[3] == 0u;
    // nop
      if (branch_taken) {
          goto L_088D331C;
      }
      goto L_088D3310;
    }
L_088D3310:
    ctx.set_gpr(2, rt.memory().aot_load32(ctx.gpr[3] + static_cast<std::uint32_t>(4)));
    ctx.set_gpr(2, ctx.gpr[2] + static_cast<std::uint32_t>(1));
    rt.memory().aot_store32(ctx.gpr[3] + static_cast<std::uint32_t>(4), ctx.gpr[2]);
    goto L_088D331C;
L_088D331C:
    ctx.set_gpr(4, ctx.gpr[5] + 0u);
    ctx.set_gpr(5, ctx.gpr[29] + static_cast<std::uint32_t>(28));
    ctx.set_gpr(31, 0x088D332Cu);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0112_entry, 112u, 800u, 0x089C7D80u>(ctx, &aot_mem) && ctx.pc == 0x088D332Cu) goto L_088D332C;
    return;
L_088D332C:
    ctx.set_gpr(4, rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(28)));
    { const bool branch_taken = ctx.gpr[4] == 0u;
    // nop
      if (branch_taken) {
          goto L_088D339C;
      }
      goto L_088D3338;
    }
L_088D3338:
    ctx.set_gpr(31, 0x088D3340u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0014_entry, 14u, 257u, 0x0883D454u>(ctx, &aot_mem) && ctx.pc == 0x088D3340u) goto L_088D3340;
    return;
L_088D3340:
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_088D339C;
      }
      goto L_088D3348;
    }
L_088D3348:
    ctx.set_gpr(4, ctx.gpr[5] + 0u);
    ctx.set_gpr(31, 0x088D3354u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0113_entry, 113u, 7u, 0x089C8080u>(ctx, &aot_mem) && ctx.pc == 0x088D3354u) goto L_088D3354;
    return;
L_088D3354:
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_088D339C;
      }
      goto L_088D335C;
    }
L_088D335C:
    ctx.set_gpr(3, rt.memory().aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(16)));
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(24), ctx.gpr[3]);
    { const bool branch_taken = ctx.gpr[3] == 0u;
    // nop
      if (branch_taken) {
          goto L_088D3378;
      }
      goto L_088D336C;
    }
L_088D336C:
    ctx.set_gpr(2, rt.memory().aot_load32(ctx.gpr[3] + static_cast<std::uint32_t>(4)));
    ctx.set_gpr(2, ctx.gpr[2] + static_cast<std::uint32_t>(1));
    rt.memory().aot_store32(ctx.gpr[3] + static_cast<std::uint32_t>(4), ctx.gpr[2]);
    goto L_088D3378;
L_088D3378:
    ctx.set_gpr(4, ctx.gpr[5] + 0u);
    ctx.set_gpr(5, ctx.gpr[29] + static_cast<std::uint32_t>(24));
    ctx.set_gpr(31, 0x088D3388u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0113_entry, 113u, 19u, 0x089C81F0u>(ctx, &aot_mem) && ctx.pc == 0x088D3388u) goto L_088D3388;
    return;
L_088D3388:
    ctx.set_gpr(4, rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(24)));
    { const bool branch_taken = ctx.gpr[4] == 0u;
    // nop
      if (branch_taken) {
          goto L_088D339C;
      }
      goto L_088D3394;
    }
L_088D3394:
    ctx.set_gpr(31, 0x088D339Cu);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0014_entry, 14u, 257u, 0x0883D454u>(ctx, &aot_mem) && ctx.pc == 0x088D339Cu) goto L_088D339C;
    return;
L_088D339C:
    ctx.set_gpr(31, rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(12)));
    ctx.set_gpr(29, ctx.gpr[29] + static_cast<std::uint32_t>(32));
    jump_target = ctx.gpr[31];
    // nop
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_088D33AC:
    ctx.set_gpr(29, ctx.gpr[29] + static_cast<std::uint32_t>(-32));
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(12), ctx.gpr[31]);
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(8), ctx.gpr[16]);
    ctx.set_gpr(16, ctx.gpr[4] + 0u);
    ctx.set_gpr(4, ctx.gpr[29] + static_cast<std::uint32_t>(28));
    ctx.set_gpr(31, 0x088D33C8u);
    // nop
    goto L_088D3400;
L_088D33C8:
    ctx.set_gpr(4, ctx.gpr[16] + static_cast<std::uint32_t>(16));
    ctx.set_gpr(5, rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(28)));
    ctx.set_gpr(31, 0x088D33D8u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0085_entry, 85u, 61u, 0x089584C4u>(ctx, &aot_mem) && ctx.pc == 0x088D33D8u) goto L_088D33D8;
    return;
L_088D33D8:
    ctx.set_gpr(4, rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(28)));
    { const bool branch_taken = ctx.gpr[4] == 0u;
    // nop
      if (branch_taken) {
          goto L_088D33EC;
      }
      goto L_088D33E4;
    }
L_088D33E4:
    ctx.set_gpr(31, 0x088D33ECu);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0014_entry, 14u, 257u, 0x0883D454u>(ctx, &aot_mem) && ctx.pc == 0x088D33ECu) goto L_088D33EC;
    return;
L_088D33EC:
    ctx.set_gpr(31, rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(12)));
    ctx.set_gpr(16, rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(8)));
    ctx.set_gpr(29, ctx.gpr[29] + static_cast<std::uint32_t>(32));
    jump_target = ctx.gpr[31];
    // nop
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_088D3400:
    ctx.set_gpr(5, rt.memory().aot_load32(ctx.gpr[5] + static_cast<std::uint32_t>(816)));
    rt.memory().aot_store32(ctx.gpr[4] + static_cast<std::uint32_t>(0), ctx.gpr[5]);
    { const bool branch_taken = ctx.gpr[5] == 0u;
    // nop
      if (branch_taken) {
          goto L_088D341C;
      }
      goto L_088D3410;
    }
L_088D3410:
    ctx.set_gpr(3, rt.memory().aot_load32(ctx.gpr[5] + static_cast<std::uint32_t>(4)));
    ctx.set_gpr(3, ctx.gpr[3] + static_cast<std::uint32_t>(1));
    rt.memory().aot_store32(ctx.gpr[5] + static_cast<std::uint32_t>(4), ctx.gpr[3]);
    goto L_088D341C;
L_088D341C:
    jump_target = ctx.gpr[31];
    // nop
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_088D3424:
    ctx.set_gpr(29, ctx.gpr[29] + static_cast<std::uint32_t>(-16));
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(12), ctx.gpr[31]);
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(8), ctx.gpr[17]);
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(4), ctx.gpr[16]);
    ctx.set_gpr(17, ctx.gpr[4] + 0u);
    ctx.set_gpr(16, ctx.gpr[5] + 0u);
    ctx.set_gpr(4, ctx.gpr[16] + 0u);
    ctx.set_gpr(5, 0u + static_cast<std::uint32_t>(4));
    ctx.set_gpr(31, 0x088D344Cu);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0047_entry, 47u, 670u, 0x088C3CA8u>(ctx, &aot_mem) && ctx.pc == 0x088D344Cu) goto L_088D344C;
    return;
L_088D344C:
    ctx.set_gpr(4, ctx.gpr[16] + 0u);
    ctx.set_gpr(5, 0u + static_cast<std::uint32_t>(2));
    ctx.set_gpr(31, 0x088D345Cu);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0047_entry, 47u, 678u, 0x088C3D30u>(ctx, &aot_mem) && ctx.pc == 0x088D345Cu) goto L_088D345C;
    return;
L_088D345C:
    ctx.set_gpr(2, 0u + static_cast<std::uint32_t>(1));
    rt.memory().aot_store32(ctx.gpr[16] + static_cast<std::uint32_t>(0), ctx.gpr[2]);
    rt.memory().aot_store8(ctx.gpr[16] + static_cast<std::uint32_t>(316), static_cast<std::uint8_t>(ctx.gpr[2]));
    ctx.set_gpr(4, ctx.gpr[16] + 0u);
    ctx.set_gpr(5, ctx.gpr[17] + 0u);
    ctx.set_gpr(31, 0x088D3478u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0047_entry, 47u, 682u, 0x088C3DC0u>(ctx, &aot_mem) && ctx.pc == 0x088D3478u) goto L_088D3478;
    return;
L_088D3478:
    ctx.set_gpr(2, 0u + static_cast<std::uint32_t>(1));
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
L_088D3494:
    ctx.set_gpr(2, 2245u << 16u);
    ctx.set_gpr(2, rt.memory().aot_load32(ctx.gpr[2] + static_cast<std::uint32_t>(23544)));
    jump_target = ctx.gpr[31];
    // nop
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_088D34A4:
    jump_target = ctx.gpr[31];
    // nop
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_088D34AC:
    jump_target = ctx.gpr[31];
    // nop
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_088D34B4:
    jump_target = ctx.gpr[31];
    // nop
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_088D34BC:
    jump_target = ctx.gpr[31];
    // nop
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_088D34C4:
    jump_target = ctx.gpr[31];
    // nop
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_088D34CC:
    ctx.set_gpr(2, 0u + static_cast<std::uint32_t>(1));
    jump_target = ctx.gpr[31];
    // nop
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_088D34D8:
    ctx.set_gpr(2, 2245u << 16u);
    ctx.set_gpr(2, rt.memory().aot_load32(ctx.gpr[2] + static_cast<std::uint32_t>(23564)));
    jump_target = ctx.gpr[31];
    // nop
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_088D34E8:
    ctx.set_gpr(2, 2245u << 16u);
    ctx.set_gpr(2, rt.memory().aot_load32(ctx.gpr[2] + static_cast<std::uint32_t>(23580)));
    jump_target = ctx.gpr[31];
    // nop
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_088D34F8:
    rt.memory().aot_store32(ctx.gpr[4] + static_cast<std::uint32_t>(12), ctx.gpr[5]);
    rt.memory().aot_store32(ctx.gpr[4] + static_cast<std::uint32_t>(16), ctx.gpr[6]);
    rt.memory().aot_store32(ctx.gpr[4] + static_cast<std::uint32_t>(20), ctx.gpr[7]);
    rt.memory().aot_store32(ctx.gpr[4] + static_cast<std::uint32_t>(24), ctx.gpr[8]);
    rt.memory().aot_store32(ctx.gpr[4] + static_cast<std::uint32_t>(32), std::bit_cast<std::uint32_t>(ctx.fpr[12]));
    rt.memory().aot_store32(ctx.gpr[4] + static_cast<std::uint32_t>(36), std::bit_cast<std::uint32_t>(ctx.fpr[13]));
    jump_target = ctx.gpr[31];
    // nop
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_088D3518:
    ctx.set_gpr(2, 2245u << 16u);
    ctx.set_gpr(2, rt.memory().aot_load32(ctx.gpr[2] + static_cast<std::uint32_t>(23612)));
    jump_target = ctx.gpr[31];
    // nop
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_088D3528:
    ctx.set_gpr(2, 2245u << 16u);
    ctx.set_gpr(2, rt.memory().aot_load32(ctx.gpr[2] + static_cast<std::uint32_t>(23620)));
    jump_target = ctx.gpr[31];
    // nop
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_088D3538:
    ctx.set_gpr(2, 2245u << 16u);
    ctx.set_gpr(2, rt.memory().aot_load32(ctx.gpr[2] + static_cast<std::uint32_t>(23628)));
    jump_target = ctx.gpr[31];
    // nop
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_088D3548:
    ctx.set_gpr(2, 2245u << 16u);
    ctx.set_gpr(2, rt.memory().aot_load32(ctx.gpr[2] + static_cast<std::uint32_t>(23684)));
    jump_target = ctx.gpr[31];
    // nop
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_088D3558:
    ctx.set_gpr(2, 2245u << 16u);
    ctx.set_gpr(2, rt.memory().aot_load32(ctx.gpr[2] + static_cast<std::uint32_t>(23692)));
    jump_target = ctx.gpr[31];
    // nop
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_088D3568:
    ctx.set_gpr(2, 2245u << 16u);
    ctx.set_gpr(2, rt.memory().aot_load32(ctx.gpr[2] + static_cast<std::uint32_t>(23700)));
    jump_target = ctx.gpr[31];
    // nop
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_088D3578:
    ctx.set_gpr(2, 2245u << 16u);
    ctx.set_gpr(2, rt.memory().aot_load32(ctx.gpr[2] + static_cast<std::uint32_t>(23732)));
    jump_target = ctx.gpr[31];
    // nop
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_088D3588:
    ctx.set_gpr(2, 2245u << 16u);
    ctx.set_gpr(2, rt.memory().aot_load32(ctx.gpr[2] + static_cast<std::uint32_t>(23748)));
    jump_target = ctx.gpr[31];
    // nop
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_088D3598:
    ctx.set_gpr(2, 2225u << 16u);
    ctx.set_gpr(2, ctx.gpr[2] + static_cast<std::uint32_t>(31820));
    jump_target = ctx.gpr[31];
    // nop
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_088D35A8:
    ctx.set_gpr(2, 2227u << 16u);
    ctx.set_gpr(2, rt.memory().aot_load32(ctx.gpr[2] + static_cast<std::uint32_t>(20228)));
    jump_target = ctx.gpr[31];
    // nop
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_088D35B8:
    ctx.set_gpr(3, 2227u << 16u);
    rt.memory().aot_store32(ctx.gpr[3] + static_cast<std::uint32_t>(20228), ctx.gpr[5]);
    jump_target = ctx.gpr[31];
    // nop
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_088D35C8:
    ctx.set_gpr(2, 2245u << 16u);
    ctx.set_gpr(2, rt.memory().aot_load32(ctx.gpr[2] + static_cast<std::uint32_t>(26368)));
    jump_target = ctx.gpr[31];
    // nop
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_088D35D8:
    ctx.set_gpr(29, ctx.gpr[29] + static_cast<std::uint32_t>(-16));
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(12), ctx.gpr[31]);
    ctx.set_gpr(4, 2245u << 16u);
    ctx.set_gpr(4, ctx.gpr[4] + static_cast<std::uint32_t>(26368));
    ctx.set_gpr(31, 0x088D35F0u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0085_entry, 85u, 61u, 0x089584C4u>(ctx, &aot_mem) && ctx.pc == 0x088D35F0u) goto L_088D35F0;
    return;
L_088D35F0:
    ctx.set_gpr(31, rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(12)));
    ctx.set_gpr(29, ctx.gpr[29] + static_cast<std::uint32_t>(16));
    jump_target = ctx.gpr[31];
    // nop
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_088D3600:
    ctx.set_gpr(2, 2245u << 16u);
    ctx.set_gpr(2, rt.memory().aot_load32(ctx.gpr[2] + static_cast<std::uint32_t>(23760)));
    jump_target = ctx.gpr[31];
    // nop
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_088D3610:
    ctx.set_gpr(2, 2245u << 16u);
    ctx.set_gpr(2, rt.memory().aot_load32(ctx.gpr[2] + static_cast<std::uint32_t>(23768)));
    jump_target = ctx.gpr[31];
    // nop
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_088D3620:
    ctx.set_gpr(2, 2245u << 16u);
    ctx.set_gpr(2, rt.memory().aot_load32(ctx.gpr[2] + static_cast<std::uint32_t>(23780)));
    jump_target = ctx.gpr[31];
    // nop
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_088D3630:
    rt.memory().aot_store32(ctx.gpr[4] + static_cast<std::uint32_t>(12), ctx.gpr[5]);
    jump_target = ctx.gpr[31];
    // nop
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_088D363C:
    ctx.set_gpr(2, 2245u << 16u);
    ctx.set_gpr(2, rt.memory().aot_load32(ctx.gpr[2] + static_cast<std::uint32_t>(23792)));
    jump_target = ctx.gpr[31];
    // nop
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_088D364C:
    ctx.set_gpr(2, 2245u << 16u);
    ctx.set_gpr(2, rt.memory().aot_load32(ctx.gpr[2] + static_cast<std::uint32_t>(23804)));
    jump_target = ctx.gpr[31];
    // nop
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_088D365C:
    ctx.set_gpr(2, 2245u << 16u);
    ctx.set_gpr(2, rt.memory().aot_load32(ctx.gpr[2] + static_cast<std::uint32_t>(23816)));
    jump_target = ctx.gpr[31];
    // nop
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_088D366C:
    ctx.set_gpr(2, 2245u << 16u);
    ctx.set_gpr(2, rt.memory().aot_load32(ctx.gpr[2] + static_cast<std::uint32_t>(23840)));
    jump_target = ctx.gpr[31];
    // nop
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_088D367C:
    rt.memory().aot_store32(ctx.gpr[4] + static_cast<std::uint32_t>(36), ctx.gpr[5]);
    jump_target = ctx.gpr[31];
    // nop
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_088D3688:
    ctx.set_gpr(2, rt.memory().aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(28)));
    jump_target = ctx.gpr[31];
    // nop
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_088D3694:
    ctx.set_gpr(2, 2245u << 16u);
    ctx.set_gpr(2, rt.memory().aot_load32(ctx.gpr[2] + static_cast<std::uint32_t>(23908)));
    jump_target = ctx.gpr[31];
    // nop
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_088D36A4:
    ctx.set_gpr(2, 2245u << 16u);
    ctx.set_gpr(2, rt.memory().aot_load32(ctx.gpr[2] + static_cast<std::uint32_t>(23920)));
    jump_target = ctx.gpr[31];
    // nop
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_088D36B4:
    rt.memory().aot_store32(ctx.gpr[4] + static_cast<std::uint32_t>(20), ctx.gpr[5]);
    jump_target = ctx.gpr[31];
    // nop
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_088D36C0:
    rt.memory().aot_store32(ctx.gpr[4] + static_cast<std::uint32_t>(24), ctx.gpr[5]);
    jump_target = ctx.gpr[31];
    // nop
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_088D36CC:
    ctx.set_gpr(29, ctx.gpr[29] + static_cast<std::uint32_t>(-16));
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(12), ctx.gpr[31]);
    ctx.set_gpr(4, ctx.gpr[4] + static_cast<std::uint32_t>(12));
    ctx.set_gpr(31, 0x088D36E0u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0085_entry, 85u, 61u, 0x089584C4u>(ctx, &aot_mem) && ctx.pc == 0x088D36E0u) goto L_088D36E0;
    return;
L_088D36E0:
    ctx.set_gpr(31, rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(12)));
    ctx.set_gpr(29, ctx.gpr[29] + static_cast<std::uint32_t>(16));
    jump_target = ctx.gpr[31];
    // nop
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_088D36F0:
    ctx.set_gpr(2, 2245u << 16u);
    ctx.set_gpr(2, rt.memory().aot_load32(ctx.gpr[2] + static_cast<std::uint32_t>(23940)));
    jump_target = ctx.gpr[31];
    // nop
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_088D3700:
    rt.memory().aot_store32(ctx.gpr[4] + static_cast<std::uint32_t>(12), ctx.gpr[5]);
    jump_target = ctx.gpr[31];
    // nop
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_088D370C:
    rt.memory().aot_store32(ctx.gpr[4] + static_cast<std::uint32_t>(16), ctx.gpr[5]);
    jump_target = ctx.gpr[31];
    // nop
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_088D3718:
    ctx.set_gpr(2, 2245u << 16u);
    ctx.set_gpr(2, rt.memory().aot_load32(ctx.gpr[2] + static_cast<std::uint32_t>(23956)));
    jump_target = ctx.gpr[31];
    // nop
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_088D3728:
    ctx.set_gpr(2, 2245u << 16u);
    ctx.set_gpr(2, rt.memory().aot_load32(ctx.gpr[2] + static_cast<std::uint32_t>(23968)));
    jump_target = ctx.gpr[31];
    // nop
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_088D3738:
    ctx.set_gpr(2, 2245u << 16u);
    ctx.set_gpr(2, rt.memory().aot_load32(ctx.gpr[2] + static_cast<std::uint32_t>(23984)));
    jump_target = ctx.gpr[31];
    // nop
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_088D3748:
    ctx.set_gpr(2, 2245u << 16u);
    ctx.set_gpr(2, rt.memory().aot_load32(ctx.gpr[2] + static_cast<std::uint32_t>(24048)));
    jump_target = ctx.gpr[31];
    // nop
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_088D3758:
    rt.memory().aot_store8(ctx.gpr[4] + static_cast<std::uint32_t>(12), static_cast<std::uint8_t>(ctx.gpr[5]));
    jump_target = ctx.gpr[31];
    // nop
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_088D3764:
    ctx.set_gpr(2, 2245u << 16u);
    ctx.set_gpr(2, rt.memory().aot_load32(ctx.gpr[2] + static_cast<std::uint32_t>(24060)));
    jump_target = ctx.gpr[31];
    // nop
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_088D3774:
    ctx.set_gpr(29, ctx.gpr[29] + static_cast<std::uint32_t>(-16));
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(12), ctx.gpr[31]);
    ctx.set_gpr(4, ctx.gpr[4] + static_cast<std::uint32_t>(12));
    ctx.set_gpr(31, 0x088D3788u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0126_entry, 126u, 747u, 0x089FFC4Cu>(ctx, &aot_mem) && ctx.pc == 0x088D3788u) goto L_088D3788;
    return;
L_088D3788:
    ctx.set_gpr(31, rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(12)));
    ctx.set_gpr(29, ctx.gpr[29] + static_cast<std::uint32_t>(16));
    jump_target = ctx.gpr[31];
    // nop
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_088D3798:
    ctx.set_gpr(2, 2245u << 16u);
    ctx.set_gpr(2, rt.memory().aot_load32(ctx.gpr[2] + static_cast<std::uint32_t>(24072)));
    jump_target = ctx.gpr[31];
    // nop
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_088D37A8:
    rt.memory().aot_store8(ctx.gpr[4] + static_cast<std::uint32_t>(12), static_cast<std::uint8_t>(ctx.gpr[5]));
    jump_target = ctx.gpr[31];
    // nop
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_088D37B4:
    ctx.set_gpr(2, 2245u << 16u);
    ctx.set_gpr(2, rt.memory().aot_load32(ctx.gpr[2] + static_cast<std::uint32_t>(24080)));
    jump_target = ctx.gpr[31];
    // nop
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_088D37C4:
    ctx.set_gpr(2, 2245u << 16u);
    ctx.set_gpr(2, rt.memory().aot_load32(ctx.gpr[2] + static_cast<std::uint32_t>(24108)));
    jump_target = ctx.gpr[31];
    // nop
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_088D37D4:
    ctx.set_gpr(2, 2245u << 16u);
    ctx.set_gpr(2, rt.memory().aot_load32(ctx.gpr[2] + static_cast<std::uint32_t>(24116)));
    jump_target = ctx.gpr[31];
    // nop
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_088D37E4:
    rt.memory().aot_store32(ctx.gpr[4] + static_cast<std::uint32_t>(28), ctx.gpr[5]);
    rt.memory().aot_store32(ctx.gpr[4] + static_cast<std::uint32_t>(32), ctx.gpr[6]);
    rt.memory().aot_store32(ctx.gpr[4] + static_cast<std::uint32_t>(36), ctx.gpr[7]);
    jump_target = ctx.gpr[31];
    // nop
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_088D37F8:
    rt.memory().aot_store32(ctx.gpr[4] + static_cast<std::uint32_t>(24), ctx.gpr[5]);
    jump_target = ctx.gpr[31];
    // nop
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_088D3804:
    rt.memory().aot_store32(ctx.gpr[4] + static_cast<std::uint32_t>(20), ctx.gpr[5]);
    jump_target = ctx.gpr[31];
    // nop
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_088D3810:
    ctx.set_gpr(2, 2245u << 16u);
    ctx.set_gpr(2, rt.memory().aot_load32(ctx.gpr[2] + static_cast<std::uint32_t>(24148)));
    jump_target = ctx.gpr[31];
    // nop
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_088D3820:
    jump_target = ctx.gpr[31];
    // nop
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_088D3828:
    ctx.set_gpr(29, ctx.gpr[29] + static_cast<std::uint32_t>(-16));
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(12), ctx.gpr[31]);
    ctx.set_gpr(4, rt.memory().aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(12)));
    { const bool branch_taken = ctx.gpr[4] == 0u;
    // nop
      if (branch_taken) {
          goto L_088D384C;
      }
      goto L_088D383C;
    }
L_088D383C:
    ctx.set_gpr(25, rt.memory().aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(0)));
    ctx.set_gpr(25, rt.memory().aot_load32(ctx.gpr[25] + static_cast<std::uint32_t>(120)));
    jump_target = ctx.gpr[25];
    ctx.set_gpr(31, 0x088D384Cu);
    // nop
    ctx.pc = jump_target;
    if (rt.invoke_chained_call(ctx, &aot_mem) && ctx.pc == 0x088D384Cu) goto L_088D384C;
    return;
L_088D384C:
    ctx.set_gpr(31, rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(12)));
    ctx.set_gpr(29, ctx.gpr[29] + static_cast<std::uint32_t>(16));
    jump_target = ctx.gpr[31];
    // nop
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_088D385C:
    ctx.set_gpr(29, ctx.gpr[29] + static_cast<std::uint32_t>(-16));
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(12), ctx.gpr[31]);
    ctx.set_gpr(3, 2245u << 16u);
    ctx.set_gpr(3, rt.memory().aot_load32(ctx.gpr[3] + static_cast<std::uint32_t>(26140)));
    { const bool branch_taken = ctx.gpr[3] == 0u;
    // nop
      if (branch_taken) {
          goto L_088D387C;
      }
      goto L_088D3874;
    }
L_088D3874:
    ctx.set_gpr(3, 2245u << 16u);
    rt.memory().aot_store32(ctx.gpr[3] + static_cast<std::uint32_t>(26140), 0u);
    goto L_088D387C;
L_088D387C:
    ctx.set_gpr(4, rt.memory().aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(28)));
    { const bool branch_taken = ctx.gpr[4] == 0u;
    // nop
      if (branch_taken) {
          goto L_088D3898;
      }
      goto L_088D3888;
    }
L_088D3888:
    ctx.set_gpr(25, rt.memory().aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(0)));
    ctx.set_gpr(25, rt.memory().aot_load32(ctx.gpr[25] + static_cast<std::uint32_t>(232)));
    jump_target = ctx.gpr[25];
    ctx.set_gpr(31, 0x088D3898u);
    // nop
    ctx.pc = jump_target;
    if (rt.invoke_chained_call(ctx, &aot_mem) && ctx.pc == 0x088D3898u) goto L_088D3898;
    return;
L_088D3898:
    ctx.set_gpr(31, rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(12)));
    ctx.set_gpr(29, ctx.gpr[29] + static_cast<std::uint32_t>(16));
    jump_target = ctx.gpr[31];
    // nop
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_088D38A8:
    ctx.set_gpr(2, 2245u << 16u);
    ctx.set_gpr(2, rt.memory().aot_load32(ctx.gpr[2] + static_cast<std::uint32_t>(24276)));
    jump_target = ctx.gpr[31];
    // nop
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_088D38B8:
    ctx.set_gpr(2, 2245u << 16u);
    ctx.set_gpr(2, rt.memory().aot_load32(ctx.gpr[2] + static_cast<std::uint32_t>(24268)));
    jump_target = ctx.gpr[31];
    // nop
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_088D38C8:
    ctx.set_gpr(2, 2245u << 16u);
    ctx.set_gpr(2, rt.memory().aot_load32(ctx.gpr[2] + static_cast<std::uint32_t>(24260)));
    jump_target = ctx.gpr[31];
    // nop
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_088D38D8:
    ctx.set_gpr(2, 2245u << 16u);
    ctx.set_gpr(2, rt.memory().aot_load32(ctx.gpr[2] + static_cast<std::uint32_t>(24252)));
    jump_target = ctx.gpr[31];
    // nop
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_088D38E8:
    ctx.set_gpr(2, 2245u << 16u);
    ctx.set_gpr(2, rt.memory().aot_load32(ctx.gpr[2] + static_cast<std::uint32_t>(24244)));
    jump_target = ctx.gpr[31];
    // nop
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_088D38F8:
    ctx.set_gpr(2, 2245u << 16u);
    ctx.set_gpr(2, rt.memory().aot_load32(ctx.gpr[2] + static_cast<std::uint32_t>(24236)));
    jump_target = ctx.gpr[31];
    // nop
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_088D3908:
    ctx.set_gpr(2, 2245u << 16u);
    ctx.set_gpr(2, rt.memory().aot_load32(ctx.gpr[2] + static_cast<std::uint32_t>(24228)));
    jump_target = ctx.gpr[31];
    // nop
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_088D3918:
    ctx.set_gpr(2, 2245u << 16u);
    ctx.set_gpr(2, rt.memory().aot_load32(ctx.gpr[2] + static_cast<std::uint32_t>(24220)));
    jump_target = ctx.gpr[31];
    // nop
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_088D3928:
    ctx.set_gpr(2, 2245u << 16u);
    ctx.set_gpr(2, rt.memory().aot_load32(ctx.gpr[2] + static_cast<std::uint32_t>(24292)));
    jump_target = ctx.gpr[31];
    // nop
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_088D3938:
    ctx.set_gpr(2, 2245u << 16u);
    ctx.set_gpr(2, rt.memory().aot_load32(ctx.gpr[2] + static_cast<std::uint32_t>(24300)));
    jump_target = ctx.gpr[31];
    // nop
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_088D3948:
    ctx.set_gpr(2, 2245u << 16u);
    ctx.set_gpr(2, rt.memory().aot_load32(ctx.gpr[2] + static_cast<std::uint32_t>(24312)));
    jump_target = ctx.gpr[31];
    // nop
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_088D3958:
    ctx.set_gpr(2, 2245u << 16u);
    ctx.set_gpr(2, rt.memory().aot_load32(ctx.gpr[2] + static_cast<std::uint32_t>(24320)));
    jump_target = ctx.gpr[31];
    // nop
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_088D3968:
    rt.memory().aot_store32(ctx.gpr[4] + static_cast<std::uint32_t>(16), ctx.gpr[5]);
    rt.memory().aot_store32(ctx.gpr[4] + static_cast<std::uint32_t>(20), ctx.gpr[6]);
    rt.memory().aot_store32(ctx.gpr[4] + static_cast<std::uint32_t>(24), ctx.gpr[7]);
    rt.memory().aot_store32(ctx.gpr[4] + static_cast<std::uint32_t>(28), ctx.gpr[8]);
    jump_target = ctx.gpr[31];
    // nop
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_088D3980:
    ctx.set_gpr(2, 2245u << 16u);
    ctx.set_gpr(2, rt.memory().aot_load32(ctx.gpr[2] + static_cast<std::uint32_t>(24344)));
    jump_target = ctx.gpr[31];
    // nop
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_088D3990:
    ctx.fpr[0] = std::bit_cast<float>(rt.memory().aot_load32(ctx.gpr[5] + static_cast<std::uint32_t>(0)));
    rt.memory().aot_store32(ctx.gpr[4] + static_cast<std::uint32_t>(12), std::bit_cast<std::uint32_t>(ctx.fpr[0]));
    ctx.fpr[0] = std::bit_cast<float>(rt.memory().aot_load32(ctx.gpr[5] + static_cast<std::uint32_t>(4)));
    rt.memory().aot_store32(ctx.gpr[4] + static_cast<std::uint32_t>(16), std::bit_cast<std::uint32_t>(ctx.fpr[0]));
    ctx.fpr[0] = std::bit_cast<float>(rt.memory().aot_load32(ctx.gpr[5] + static_cast<std::uint32_t>(8)));
    rt.memory().aot_store32(ctx.gpr[4] + static_cast<std::uint32_t>(20), std::bit_cast<std::uint32_t>(ctx.fpr[0]));
    ctx.fpr[0] = std::bit_cast<float>(rt.memory().aot_load32(ctx.gpr[5] + static_cast<std::uint32_t>(12)));
    rt.memory().aot_store32(ctx.gpr[4] + static_cast<std::uint32_t>(24), std::bit_cast<std::uint32_t>(ctx.fpr[0]));
    jump_target = ctx.gpr[31];
    // nop
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_088D39B8:
    ctx.set_gpr(2, 2245u << 16u);
    ctx.set_gpr(2, rt.memory().aot_load32(ctx.gpr[2] + static_cast<std::uint32_t>(24352)));
    jump_target = ctx.gpr[31];
    // nop
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_088D39C8:
    ctx.set_gpr(29, ctx.gpr[29] + static_cast<std::uint32_t>(-16));
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(12), ctx.gpr[31]);
    ctx.set_gpr(4, ctx.gpr[4] + static_cast<std::uint32_t>(16));
    ctx.set_gpr(31, 0x088D39DCu);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0085_entry, 85u, 61u, 0x089584C4u>(ctx, &aot_mem) && ctx.pc == 0x088D39DCu) goto L_088D39DC;
    return;
L_088D39DC:
    ctx.set_gpr(31, rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(12)));
    ctx.set_gpr(29, ctx.gpr[29] + static_cast<std::uint32_t>(16));
    jump_target = ctx.gpr[31];
    // nop
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_088D39EC:
    ctx.set_gpr(2, 2245u << 16u);
    ctx.set_gpr(2, rt.memory().aot_load32(ctx.gpr[2] + static_cast<std::uint32_t>(24364)));
    jump_target = ctx.gpr[31];
    // nop
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_088D39FC:
    ctx.set_gpr(2, 2245u << 16u);
    ctx.set_gpr(2, rt.memory().aot_load32(ctx.gpr[2] + static_cast<std::uint32_t>(24432)));
    jump_target = ctx.gpr[31];
    // nop
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_088D3A0C:
    ctx.set_gpr(29, ctx.gpr[29] + static_cast<std::uint32_t>(-16));
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(12), ctx.gpr[31]);
    ctx.set_gpr(4, ctx.gpr[4] + static_cast<std::uint32_t>(12));
    ctx.set_gpr(31, 0x088D3A20u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0085_entry, 85u, 61u, 0x089584C4u>(ctx, &aot_mem) && ctx.pc == 0x088D3A20u) goto L_088D3A20;
    return;
L_088D3A20:
    ctx.set_gpr(31, rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(12)));
    ctx.set_gpr(29, ctx.gpr[29] + static_cast<std::uint32_t>(16));
    jump_target = ctx.gpr[31];
    // nop
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_088D3A30:
    ctx.set_gpr(2, 2245u << 16u);
    ctx.set_gpr(2, rt.memory().aot_load32(ctx.gpr[2] + static_cast<std::uint32_t>(24444)));
    jump_target = ctx.gpr[31];
    // nop
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_088D3A40:
    ctx.set_gpr(2, 2245u << 16u);
    ctx.set_gpr(2, rt.memory().aot_load32(ctx.gpr[2] + static_cast<std::uint32_t>(24452)));
    jump_target = ctx.gpr[31];
    // nop
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_088D3A50:
    rt.memory().aot_store32(ctx.gpr[4] + static_cast<std::uint32_t>(12), std::bit_cast<std::uint32_t>(ctx.fpr[12]));
    jump_target = ctx.gpr[31];
    // nop
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_088D3A5C:
    ctx.set_gpr(3, 2245u << 16u);
    ctx.set_gpr(3, rt.memory().aot_load32(ctx.gpr[3] + static_cast<std::uint32_t>(26104)));
    { const bool branch_taken = ctx.gpr[3] == 0u;
    // nop
      if (branch_taken) {
          goto L_088D3A74;
      }
      goto L_088D3A6C;
    }
L_088D3A6C:
    ctx.set_gpr(3, 2245u << 16u);
    rt.memory().aot_store32(ctx.gpr[3] + static_cast<std::uint32_t>(26104), 0u);
    goto L_088D3A74;
L_088D3A74:
    jump_target = ctx.gpr[31];
    // nop
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_088D3A7C:
    ctx.set_gpr(2, 2245u << 16u);
    ctx.set_gpr(2, rt.memory().aot_load32(ctx.gpr[2] + static_cast<std::uint32_t>(24468)));
    jump_target = ctx.gpr[31];
    // nop
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_088D3A8C:
    ctx.set_gpr(2, 2245u << 16u);
    ctx.set_gpr(2, rt.memory().aot_load32(ctx.gpr[2] + static_cast<std::uint32_t>(24476)));
    jump_target = ctx.gpr[31];
    // nop
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_088D3A9C:
    ctx.set_gpr(2, 2245u << 16u);
    ctx.set_gpr(2, rt.memory().aot_load32(ctx.gpr[2] + static_cast<std::uint32_t>(24484)));
    jump_target = ctx.gpr[31];
    // nop
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_088D3AAC:
    ctx.set_gpr(2, 2245u << 16u);
    ctx.set_gpr(2, rt.memory().aot_load32(ctx.gpr[2] + static_cast<std::uint32_t>(24528)));
    jump_target = ctx.gpr[31];
    // nop
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_088D3ABC:
    ctx.set_gpr(2, 2245u << 16u);
    ctx.set_gpr(2, rt.memory().aot_load32(ctx.gpr[2] + static_cast<std::uint32_t>(24536)));
    jump_target = ctx.gpr[31];
    // nop
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_088D3ACC:
    ctx.set_gpr(2, 2245u << 16u);
    ctx.set_gpr(2, rt.memory().aot_load32(ctx.gpr[2] + static_cast<std::uint32_t>(24548)));
    jump_target = ctx.gpr[31];
    // nop
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_088D3ADC:
    ctx.set_gpr(2, 2245u << 16u);
    ctx.set_gpr(2, rt.memory().aot_load32(ctx.gpr[2] + static_cast<std::uint32_t>(24572)));
    jump_target = ctx.gpr[31];
    // nop
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_088D3AEC:
    ctx.set_gpr(29, ctx.gpr[29] + static_cast<std::uint32_t>(-16));
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(12), ctx.gpr[31]);
    rt.memory().aot_store32(ctx.gpr[4] + static_cast<std::uint32_t>(32), 0u);
    rt.memory().aot_store32(ctx.gpr[4] + static_cast<std::uint32_t>(36), 0u);
    ctx.set_gpr(4, rt.memory().aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(16)));
    { const bool branch_taken = ctx.gpr[4] == 0u;
    // nop
      if (branch_taken) {
          goto L_088D3B18;
      }
      goto L_088D3B08;
    }
L_088D3B08:
    ctx.set_gpr(25, rt.memory().aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(0)));
    ctx.set_gpr(25, rt.memory().aot_load32(ctx.gpr[25] + static_cast<std::uint32_t>(168)));
    jump_target = ctx.gpr[25];
    ctx.set_gpr(31, 0x088D3B18u);
    // nop
    ctx.pc = jump_target;
    if (rt.invoke_chained_call(ctx, &aot_mem) && ctx.pc == 0x088D3B18u) goto L_088D3B18;
    return;
L_088D3B18:
    ctx.set_gpr(31, rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(12)));
    ctx.set_gpr(29, ctx.gpr[29] + static_cast<std::uint32_t>(16));
    jump_target = ctx.gpr[31];
    // nop
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_088D3B28:
    ctx.set_gpr(2, 2245u << 16u);
    ctx.set_gpr(2, rt.memory().aot_load32(ctx.gpr[2] + static_cast<std::uint32_t>(24608)));
    jump_target = ctx.gpr[31];
    // nop
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_088D3B38:
    ctx.set_gpr(29, ctx.gpr[29] + static_cast<std::uint32_t>(-16));
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(12), ctx.gpr[31]);
    rt.memory().aot_store32(ctx.gpr[4] + static_cast<std::uint32_t>(32), 0u);
    rt.memory().aot_store32(ctx.gpr[4] + static_cast<std::uint32_t>(36), 0u);
    ctx.set_gpr(4, rt.memory().aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(16)));
    { const bool branch_taken = ctx.gpr[4] == 0u;
    // nop
      if (branch_taken) {
          goto L_088D3B64;
      }
      goto L_088D3B54;
    }
L_088D3B54:
    ctx.set_gpr(25, rt.memory().aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(0)));
    ctx.set_gpr(25, rt.memory().aot_load32(ctx.gpr[25] + static_cast<std::uint32_t>(156)));
    jump_target = ctx.gpr[25];
    ctx.set_gpr(31, 0x088D3B64u);
    // nop
    ctx.pc = jump_target;
    if (rt.invoke_chained_call(ctx, &aot_mem) && ctx.pc == 0x088D3B64u) goto L_088D3B64;
    return;
L_088D3B64:
    ctx.set_gpr(31, rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(12)));
    ctx.set_gpr(29, ctx.gpr[29] + static_cast<std::uint32_t>(16));
    jump_target = ctx.gpr[31];
    // nop
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_088D3B74:
    ctx.set_gpr(2, 2245u << 16u);
    ctx.set_gpr(2, rt.memory().aot_load32(ctx.gpr[2] + static_cast<std::uint32_t>(24644)));
    jump_target = ctx.gpr[31];
    // nop
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_088D3B84:
    ctx.set_gpr(2, 2245u << 16u);
    ctx.set_gpr(2, rt.memory().aot_load32(ctx.gpr[2] + static_cast<std::uint32_t>(24656)));
    jump_target = ctx.gpr[31];
    // nop
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_088D3B94:
    ctx.set_gpr(2, 2245u << 16u);
    ctx.set_gpr(2, rt.memory().aot_load32(ctx.gpr[2] + static_cast<std::uint32_t>(24664)));
    jump_target = ctx.gpr[31];
    // nop
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_088D3BA4:
    ctx.set_gpr(2, 2245u << 16u);
    ctx.set_gpr(2, rt.memory().aot_load32(ctx.gpr[2] + static_cast<std::uint32_t>(24672)));
    jump_target = ctx.gpr[31];
    // nop
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_088D3BB4:
    rt.memory().aot_store32(ctx.gpr[4] + static_cast<std::uint32_t>(12), ctx.gpr[5]);
    jump_target = ctx.gpr[31];
    // nop
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_088D3BC0:
    ctx.set_gpr(2, 2245u << 16u);
    ctx.set_gpr(2, rt.memory().aot_load32(ctx.gpr[2] + static_cast<std::uint32_t>(24692)));
    jump_target = ctx.gpr[31];
    // nop
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_088D3BD0:
    ctx.set_gpr(2, rt.memory().aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(32)));
    jump_target = ctx.gpr[31];
    // nop
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_088D3BDC:
    ctx.set_gpr(3, rt.memory().aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(28)));
    ctx.set_gpr(6, ctx.gpr[5] << 2u);
    ctx.set_gpr(3, rt.memory().aot_load32(ctx.gpr[3] + static_cast<std::uint32_t>(16)));
    ctx.set_gpr(3, ctx.gpr[3] + ctx.gpr[6]);
    ctx.fpr[0] = std::bit_cast<float>(rt.memory().aot_load32(ctx.gpr[3] + static_cast<std::uint32_t>(0)));
    ctx.fpr[0] = ctx.fpr[0] - ctx.fpr[12];
    ctx.set_fpr_bits(1, ctx.fpr_bits(0) & 0x7FFFFFFFu);
    ctx.fpr[0] = std::bit_cast<float>(rt.memory().aot_load32(ctx.gpr[28] + static_cast<std::uint32_t>(-32416)));
    ctx.set_fpu_condition(((std::isnan(ctx.fpr[1]) || std::isnan(ctx.fpr[0])) || ctx.fpr[1] <= ctx.fpr[0]));
    // nop
    { const bool branch_taken = ctx.fpu_condition();
    // nop
      if (branch_taken) {
          goto L_088D3C44;
      }
      goto L_088D3C0C;
    }
L_088D3C0C:
    ctx.set_gpr(3, 0u + static_cast<std::uint32_t>(1));
    rt.memory().aot_store8(ctx.gpr[4] + static_cast<std::uint32_t>(40), static_cast<std::uint8_t>(ctx.gpr[3]));
    ctx.set_gpr(4, rt.memory().aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(28)));
    ctx.set_gpr(3, rt.memory().aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(8)));
    { const bool branch_taken = ctx.gpr[3] == 0u;
    // nop
      if (branch_taken) {
          goto L_088D3C44;
      }
      goto L_088D3C24;
    }
L_088D3C24:
    { const bool branch_taken = static_cast<std::int32_t>(ctx.gpr[5]) < 0;
    // nop
      if (branch_taken) {
          goto L_088D3C44;
      }
      goto L_088D3C2C;
    }
L_088D3C2C:
    ctx.set_gpr(1, static_cast<std::int32_t>(ctx.gpr[5]) < static_cast<std::int32_t>(ctx.gpr[3]) ? 1u : 0u);
    { const bool branch_taken = ctx.gpr[1] == 0u;
    // nop
      if (branch_taken) {
          goto L_088D3C44;
      }
      goto L_088D3C38;
    }
L_088D3C38:
    ctx.set_gpr(3, rt.memory().aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(16)));
    ctx.set_gpr(3, ctx.gpr[3] + ctx.gpr[6]);
    rt.memory().aot_store32(ctx.gpr[3] + static_cast<std::uint32_t>(0), std::bit_cast<std::uint32_t>(ctx.fpr[12]));
    goto L_088D3C44;
L_088D3C44:
    jump_target = ctx.gpr[31];
    // nop
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_088D3C4C:
    ctx.set_gpr(2, rt.memory().aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(28)));
    ctx.set_gpr(3, ctx.gpr[5] << 2u);
    ctx.set_gpr(2, rt.memory().aot_load32(ctx.gpr[2] + static_cast<std::uint32_t>(16)));
    ctx.set_gpr(2, ctx.gpr[2] + ctx.gpr[3]);
    ctx.fpr[0] = std::bit_cast<float>(rt.memory().aot_load32(ctx.gpr[2] + static_cast<std::uint32_t>(0)));
    jump_target = ctx.gpr[31];
    // nop
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_088D3C68:
    ctx.set_gpr(3, rt.memory().aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(12)));
    ctx.set_gpr(6, ctx.gpr[6] << 2u);
    ctx.set_gpr(3, rt.memory().aot_load32(ctx.gpr[3] + static_cast<std::uint32_t>(16)));
    ctx.set_gpr(3, ctx.gpr[3] + ctx.gpr[6]);
    ctx.set_gpr(3, rt.memory().aot_load32(ctx.gpr[3] + static_cast<std::uint32_t>(0)));
    ctx.set_gpr(6, rt.memory().aot_load32(ctx.gpr[3] + static_cast<std::uint32_t>(16)));
    ctx.set_gpr(3, rt.memory().aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(24)));
    ctx.set_gpr(3, rt.memory().aot_load32(ctx.gpr[3] + static_cast<std::uint32_t>(16)));
    ctx.set_gpr(5, ctx.gpr[5] << 2u);
    ctx.set_gpr(3, ctx.gpr[3] + ctx.gpr[5]);
    ctx.set_gpr(3, rt.memory().aot_load32(ctx.gpr[3] + static_cast<std::uint32_t>(0)));
    { const bool branch_taken = ctx.gpr[6] == ctx.gpr[3];
    // nop
      if (branch_taken) {
          goto L_088D3CB4;
      }
      goto L_088D3C9C;
    }
L_088D3C9C:
    ctx.set_gpr(3, 0u + static_cast<std::uint32_t>(1));
    rt.memory().aot_store8(ctx.gpr[4] + static_cast<std::uint32_t>(40), static_cast<std::uint8_t>(ctx.gpr[3]));
    ctx.set_gpr(3, rt.memory().aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(24)));
    ctx.set_gpr(3, rt.memory().aot_load32(ctx.gpr[3] + static_cast<std::uint32_t>(16)));
    ctx.set_gpr(3, ctx.gpr[3] + ctx.gpr[5]);
    rt.memory().aot_store32(ctx.gpr[3] + static_cast<std::uint32_t>(0), ctx.gpr[6]);
    goto L_088D3CB4;
L_088D3CB4:
    jump_target = ctx.gpr[31];
    // nop
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_088D3CBC:
    ctx.set_gpr(2, 2245u << 16u);
    ctx.set_gpr(2, rt.memory().aot_load32(ctx.gpr[2] + static_cast<std::uint32_t>(24732)));
    jump_target = ctx.gpr[31];
    // nop
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_088D3CCC:
    ctx.set_gpr(2, 2245u << 16u);
    ctx.set_gpr(2, rt.memory().aot_load32(ctx.gpr[2] + static_cast<std::uint32_t>(24744)));
    jump_target = ctx.gpr[31];
    // nop
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_088D3CDC:
    ctx.set_gpr(2, 2245u << 16u);
    ctx.set_gpr(2, rt.memory().aot_load32(ctx.gpr[2] + static_cast<std::uint32_t>(24756)));
    jump_target = ctx.gpr[31];
    // nop
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_088D3CEC:
    ctx.set_gpr(2, 2245u << 16u);
    ctx.set_gpr(2, rt.memory().aot_load32(ctx.gpr[2] + static_cast<std::uint32_t>(24776)));
    jump_target = ctx.gpr[31];
    // nop
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_088D3CFC:
    rt.memory().aot_store32(ctx.gpr[4] + static_cast<std::uint32_t>(16), std::bit_cast<std::uint32_t>(ctx.fpr[12]));
    jump_target = ctx.gpr[31];
    // nop
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_088D3D08:
    ctx.fpr[0] = std::bit_cast<float>(rt.memory().aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(16)));
    jump_target = ctx.gpr[31];
    // nop
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_088D3D14:
    ctx.set_gpr(2, 2245u << 16u);
    ctx.set_gpr(2, rt.memory().aot_load32(ctx.gpr[2] + static_cast<std::uint32_t>(24788)));
    jump_target = ctx.gpr[31];
    // nop
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_088D3D24:
    rt.memory().aot_store8(ctx.gpr[4] + static_cast<std::uint32_t>(12), static_cast<std::uint8_t>(ctx.gpr[5]));
    jump_target = ctx.gpr[31];
    // nop
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_088D3D30:
    ctx.set_gpr(2, 2245u << 16u);
    ctx.set_gpr(2, rt.memory().aot_load32(ctx.gpr[2] + static_cast<std::uint32_t>(24796)));
    jump_target = ctx.gpr[31];
    // nop
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_088D3D40:
    ctx.set_gpr(2, 2225u << 16u);
    ctx.set_gpr(2, ctx.gpr[2] + static_cast<std::uint32_t>(31836));
    jump_target = ctx.gpr[31];
    // nop
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_088D3D50:
    ctx.set_gpr(2, 2227u << 16u);
    ctx.set_gpr(2, rt.memory().aot_load32(ctx.gpr[2] + static_cast<std::uint32_t>(20064)));
    jump_target = ctx.gpr[31];
    // nop
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_088D3D60:
    ctx.set_gpr(3, 2227u << 16u);
    rt.memory().aot_store32(ctx.gpr[3] + static_cast<std::uint32_t>(20064), ctx.gpr[5]);
    jump_target = ctx.gpr[31];
    // nop
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_088D3D70:
    ctx.set_gpr(2, 2245u << 16u);
    ctx.set_gpr(2, rt.memory().aot_load32(ctx.gpr[2] + static_cast<std::uint32_t>(26068)));
    jump_target = ctx.gpr[31];
    // nop
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_088D3D80:
    ctx.set_gpr(29, ctx.gpr[29] + static_cast<std::uint32_t>(-16));
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(12), ctx.gpr[31]);
    ctx.set_gpr(4, 2245u << 16u);
    ctx.set_gpr(4, ctx.gpr[4] + static_cast<std::uint32_t>(26068));
    ctx.set_gpr(31, 0x088D3D98u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0085_entry, 85u, 61u, 0x089584C4u>(ctx, &aot_mem) && ctx.pc == 0x088D3D98u) goto L_088D3D98;
    return;
L_088D3D98:
    ctx.set_gpr(31, rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(12)));
    ctx.set_gpr(29, ctx.gpr[29] + static_cast<std::uint32_t>(16));
    jump_target = ctx.gpr[31];
    // nop
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_088D3DA8:
    ctx.set_gpr(2, 2245u << 16u);
    ctx.set_gpr(2, rt.memory().aot_load32(ctx.gpr[2] + static_cast<std::uint32_t>(24808)));
    jump_target = ctx.gpr[31];
    // nop
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_088D3DB8:
    ctx.set_gpr(2, 2245u << 16u);
    ctx.set_gpr(2, rt.memory().aot_load32(ctx.gpr[2] + static_cast<std::uint32_t>(24816)));
    jump_target = ctx.gpr[31];
    // nop
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_088D3DC8:
    ctx.set_gpr(2, 2245u << 16u);
    ctx.set_gpr(2, rt.memory().aot_load32(ctx.gpr[2] + static_cast<std::uint32_t>(24824)));
    jump_target = ctx.gpr[31];
    // nop
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_088D3DD8:
    ctx.set_gpr(2, 2245u << 16u);
    ctx.set_gpr(2, rt.memory().aot_load32(ctx.gpr[2] + static_cast<std::uint32_t>(24852)));
    jump_target = ctx.gpr[31];
    // nop
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_088D3DE8:
    ctx.set_gpr(2, 2245u << 16u);
    ctx.set_gpr(2, rt.memory().aot_load32(ctx.gpr[2] + static_cast<std::uint32_t>(24872)));
    jump_target = ctx.gpr[31];
    // nop
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_088D3DF8:
    ctx.set_gpr(2, 2245u << 16u);
    ctx.set_gpr(2, rt.memory().aot_load32(ctx.gpr[2] + static_cast<std::uint32_t>(24892)));
    jump_target = ctx.gpr[31];
    // nop
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_088D3E08:
    ctx.set_gpr(2, 2245u << 16u);
    ctx.set_gpr(2, rt.memory().aot_load32(ctx.gpr[2] + static_cast<std::uint32_t>(24900)));
    jump_target = ctx.gpr[31];
    // nop
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_088D3E18:
    ctx.set_gpr(2, 2245u << 16u);
    ctx.set_gpr(2, rt.memory().aot_load32(ctx.gpr[2] + static_cast<std::uint32_t>(24908)));
    jump_target = ctx.gpr[31];
    // nop
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_088D3E28:
    ctx.set_gpr(2, 2245u << 16u);
    ctx.set_gpr(2, rt.memory().aot_load32(ctx.gpr[2] + static_cast<std::uint32_t>(24928)));
    jump_target = ctx.gpr[31];
    // nop
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_088D3E38:
    ctx.set_gpr(29, ctx.gpr[29] + static_cast<std::uint32_t>(-16));
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(12), ctx.gpr[31]);
    ctx.set_gpr(4, ctx.gpr[4] + static_cast<std::uint32_t>(140));
    ctx.set_gpr(31, 0x088D3E4Cu);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0085_entry, 85u, 61u, 0x089584C4u>(ctx, &aot_mem) && ctx.pc == 0x088D3E4Cu) goto L_088D3E4C;
    return;
L_088D3E4C:
    ctx.set_gpr(31, rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(12)));
    ctx.set_gpr(29, ctx.gpr[29] + static_cast<std::uint32_t>(16));
    jump_target = ctx.gpr[31];
    // nop
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_088D3E5C:
    ctx.set_gpr(2, 2245u << 16u);
    ctx.set_gpr(2, rt.memory().aot_load32(ctx.gpr[2] + static_cast<std::uint32_t>(25000)));
    jump_target = ctx.gpr[31];
    // nop
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_088D3E6C:
    rt.memory().aot_store8(ctx.gpr[4] + static_cast<std::uint32_t>(12), static_cast<std::uint8_t>(ctx.gpr[5]));
    jump_target = ctx.gpr[31];
    // nop
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_088D3E78:
    ctx.set_gpr(2, 2245u << 16u);
    ctx.set_gpr(2, rt.memory().aot_load32(ctx.gpr[2] + static_cast<std::uint32_t>(25008)));
    jump_target = ctx.gpr[31];
    // nop
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_088D3E88:
    ctx.set_gpr(2, 2245u << 16u);
    ctx.set_gpr(2, rt.memory().aot_load32(ctx.gpr[2] + static_cast<std::uint32_t>(25036)));
    jump_target = ctx.gpr[31];
    // nop
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_088D3E98:
    ctx.set_gpr(2, 2245u << 16u);
    ctx.set_gpr(2, rt.memory().aot_load32(ctx.gpr[2] + static_cast<std::uint32_t>(25044)));
    jump_target = ctx.gpr[31];
    // nop
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_088D3EA8:
    ctx.set_gpr(5, rt.memory().aot_load32(ctx.gpr[5] + static_cast<std::uint32_t>(20)));
    rt.memory().aot_store32(ctx.gpr[4] + static_cast<std::uint32_t>(0), ctx.gpr[5]);
    { const bool branch_taken = ctx.gpr[5] == 0u;
    // nop
      if (branch_taken) {
          goto L_088D3EC4;
      }
      goto L_088D3EB8;
    }
L_088D3EB8:
    ctx.set_gpr(3, rt.memory().aot_load32(ctx.gpr[5] + static_cast<std::uint32_t>(4)));
    ctx.set_gpr(3, ctx.gpr[3] + static_cast<std::uint32_t>(1));
    rt.memory().aot_store32(ctx.gpr[5] + static_cast<std::uint32_t>(4), ctx.gpr[3]);
    goto L_088D3EC4;
L_088D3EC4:
    jump_target = ctx.gpr[31];
    // nop
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_088D3ECC:
    jump_target = ctx.gpr[31];
    // nop
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_088D3ED4:
    ctx.set_gpr(2, 2245u << 16u);
    ctx.set_gpr(2, rt.memory().aot_load32(ctx.gpr[2] + static_cast<std::uint32_t>(25084)));
    jump_target = ctx.gpr[31];
    // nop
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_088D3EE4:
    ctx.set_gpr(5, rt.memory().aot_load32(ctx.gpr[5] + static_cast<std::uint32_t>(48)));
    rt.memory().aot_store32(ctx.gpr[4] + static_cast<std::uint32_t>(0), ctx.gpr[5]);
    { const bool branch_taken = ctx.gpr[5] == 0u;
    // nop
      if (branch_taken) {
          goto L_088D3F00;
      }
      goto L_088D3EF4;
    }
L_088D3EF4:
    ctx.set_gpr(3, rt.memory().aot_load32(ctx.gpr[5] + static_cast<std::uint32_t>(4)));
    ctx.set_gpr(3, ctx.gpr[3] + static_cast<std::uint32_t>(1));
    rt.memory().aot_store32(ctx.gpr[5] + static_cast<std::uint32_t>(4), ctx.gpr[3]);
    goto L_088D3F00;
L_088D3F00:
    jump_target = ctx.gpr[31];
    // nop
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_088D3F08:
    ctx.set_gpr(29, ctx.gpr[29] + static_cast<std::uint32_t>(-16));
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(12), ctx.gpr[31]);
    ctx.set_gpr(4, rt.memory().aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(48)));
    ctx.set_gpr(25, rt.memory().aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(0)));
    ctx.set_gpr(25, rt.memory().aot_load32(ctx.gpr[25] + static_cast<std::uint32_t>(108)));
    jump_target = ctx.gpr[25];
    ctx.set_gpr(31, 0x088D3F24u);
    // nop
    ctx.pc = jump_target;
    if (rt.invoke_chained_call(ctx, &aot_mem) && ctx.pc == 0x088D3F24u) goto L_088D3F24;
    return;
L_088D3F24:
    ctx.set_gpr(31, rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(12)));
    ctx.set_gpr(29, ctx.gpr[29] + static_cast<std::uint32_t>(16));
    jump_target = ctx.gpr[31];
    // nop
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_088D3F34:
    ctx.set_gpr(2, 2245u << 16u);
    ctx.set_gpr(2, rt.memory().aot_load32(ctx.gpr[2] + static_cast<std::uint32_t>(25092)));
    jump_target = ctx.gpr[31];
    // nop
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_088D3F44:
    ctx.set_gpr(2, 2245u << 16u);
    ctx.set_gpr(2, rt.memory().aot_load32(ctx.gpr[2] + static_cast<std::uint32_t>(25132)));
    jump_target = ctx.gpr[31];
    // nop
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_088D3F54:
    ctx.set_gpr(2, 2245u << 16u);
    ctx.set_gpr(2, rt.memory().aot_load32(ctx.gpr[2] + static_cast<std::uint32_t>(25136)));
    jump_target = ctx.gpr[31];
    // nop
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_088D3F64:
    ctx.set_gpr(2, 2245u << 16u);
    ctx.set_gpr(2, rt.memory().aot_load32(ctx.gpr[2] + static_cast<std::uint32_t>(25144)));
    jump_target = ctx.gpr[31];
    // nop
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_088D3F74:
    ctx.set_gpr(2, 2245u << 16u);
    ctx.set_gpr(2, rt.memory().aot_load32(ctx.gpr[2] + static_cast<std::uint32_t>(25168)));
    jump_target = ctx.gpr[31];
    // nop
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_088D3F84:
    ctx.set_gpr(2, 2225u << 16u);
    ctx.set_gpr(2, ctx.gpr[2] + static_cast<std::uint32_t>(31856));
    jump_target = ctx.gpr[31];
    // nop
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_088D3F94:
    ctx.set_gpr(2, 2227u << 16u);
    ctx.set_gpr(2, rt.memory().aot_load32(ctx.gpr[2] + static_cast<std::uint32_t>(20052)));
    jump_target = ctx.gpr[31];
    // nop
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_088D3FA4:
    ctx.set_gpr(3, 2227u << 16u);
    rt.memory().aot_store32(ctx.gpr[3] + static_cast<std::uint32_t>(20052), ctx.gpr[5]);
    jump_target = ctx.gpr[31];
    // nop
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_088D3FB4:
    ctx.set_gpr(2, 2245u << 16u);
    ctx.set_gpr(2, rt.memory().aot_load32(ctx.gpr[2] + static_cast<std::uint32_t>(25780)));
    jump_target = ctx.gpr[31];
    // nop
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_088D3FC4:
    ctx.set_gpr(29, ctx.gpr[29] + static_cast<std::uint32_t>(-16));
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(12), ctx.gpr[31]);
    ctx.set_gpr(4, 2245u << 16u);
    ctx.set_gpr(4, ctx.gpr[4] + static_cast<std::uint32_t>(25780));
    ctx.set_gpr(31, 0x088D3FDCu);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0085_entry, 85u, 61u, 0x089584C4u>(ctx, &aot_mem) && ctx.pc == 0x088D3FDCu) goto L_088D3FDC;
    return;
L_088D3FDC:
    ctx.set_gpr(31, rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(12)));
    ctx.set_gpr(29, ctx.gpr[29] + static_cast<std::uint32_t>(16));
    jump_target = ctx.gpr[31];
    // nop
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_088D3FEC:
    ctx.set_gpr(2, 2245u << 16u);
    ctx.set_gpr(2, rt.memory().aot_load32(ctx.gpr[2] + static_cast<std::uint32_t>(25180)));
    jump_target = ctx.gpr[31];
    // nop
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_088D3FFC:
    ctx.set_gpr(2, 2245u << 16u);
    ctx.pc = 0x088D4000u; return;
}

void recomp_unit_0051(Runtime &rt, AllegrexContext &ctx) {
    auto aot_mem = rt.memory().aot_fast_view();
    recomp_unit_0051_entry(rt, ctx, 0u, aot_mem);
}

void register_generated_unit_51(Runtime &runtime) {
    runtime.register_generated_unit(51u, 0x088D0000u, 16384u, &recomp_unit_0051, &recomp_unit_0051_entry);
    runtime.register_function(0x088D0000u, &recomp_unit_0051, "recomp_unit_0051");
    runtime.register_function(0x088D000Cu, &recomp_unit_0051, "recomp_unit_0051");
    runtime.register_function(0x088D0018u, &recomp_unit_0051, "recomp_unit_0051");
    runtime.register_function(0x088D0040u, &recomp_unit_0051, "recomp_unit_0051");
    runtime.register_function(0x088D0044u, &recomp_unit_0051, "recomp_unit_0051");
    runtime.register_function(0x088D0054u, &recomp_unit_0051, "recomp_unit_0051");
    runtime.register_function(0x088D0064u, &recomp_unit_0051, "recomp_unit_0051");
    runtime.register_function(0x088D0078u, &recomp_unit_0051, "recomp_unit_0051");
    runtime.register_function(0x088D0090u, &recomp_unit_0051, "recomp_unit_0051");
    runtime.register_function(0x088D00A4u, &recomp_unit_0051, "recomp_unit_0051");
    runtime.register_function(0x088D00B8u, &recomp_unit_0051, "recomp_unit_0051");
    runtime.register_function(0x088D00D4u, &recomp_unit_0051, "recomp_unit_0051");
    runtime.register_function(0x088D00FCu, &recomp_unit_0051, "recomp_unit_0051");
    runtime.register_function(0x088D0108u, &recomp_unit_0051, "recomp_unit_0051");
    runtime.register_function(0x088D0110u, &recomp_unit_0051, "recomp_unit_0051");
    runtime.register_function(0x088D0120u, &recomp_unit_0051, "recomp_unit_0051");
    runtime.register_function(0x088D0130u, &recomp_unit_0051, "recomp_unit_0051");
    runtime.register_function(0x088D0140u, &recomp_unit_0051, "recomp_unit_0051");
    runtime.register_function(0x088D014Cu, &recomp_unit_0051, "recomp_unit_0051");
    runtime.register_function(0x088D0164u, &recomp_unit_0051, "recomp_unit_0051");
    runtime.register_function(0x088D016Cu, &recomp_unit_0051, "recomp_unit_0051");
    runtime.register_function(0x088D0180u, &recomp_unit_0051, "recomp_unit_0051");
    runtime.register_function(0x088D019Cu, &recomp_unit_0051, "recomp_unit_0051");
    runtime.register_function(0x088D01A8u, &recomp_unit_0051, "recomp_unit_0051");
    runtime.register_function(0x088D01B0u, &recomp_unit_0051, "recomp_unit_0051");
    runtime.register_function(0x088D01BCu, &recomp_unit_0051, "recomp_unit_0051");
    runtime.register_function(0x088D01C4u, &recomp_unit_0051, "recomp_unit_0051");
    runtime.register_function(0x088D01D8u, &recomp_unit_0051, "recomp_unit_0051");
    runtime.register_function(0x088D01E0u, &recomp_unit_0051, "recomp_unit_0051");
    runtime.register_function(0x088D01E8u, &recomp_unit_0051, "recomp_unit_0051");
    runtime.register_function(0x088D01F4u, &recomp_unit_0051, "recomp_unit_0051");
    runtime.register_function(0x088D0208u, &recomp_unit_0051, "recomp_unit_0051");
    runtime.register_function(0x088D0210u, &recomp_unit_0051, "recomp_unit_0051");
    runtime.register_function(0x088D0230u, &recomp_unit_0051, "recomp_unit_0051");
    runtime.register_function(0x088D023Cu, &recomp_unit_0051, "recomp_unit_0051");
    runtime.register_function(0x088D0250u, &recomp_unit_0051, "recomp_unit_0051");
    runtime.register_function(0x088D0270u, &recomp_unit_0051, "recomp_unit_0051");
    runtime.register_function(0x088D027Cu, &recomp_unit_0051, "recomp_unit_0051");
    runtime.register_function(0x088D028Cu, &recomp_unit_0051, "recomp_unit_0051");
    runtime.register_function(0x088D02A4u, &recomp_unit_0051, "recomp_unit_0051");
    runtime.register_function(0x088D02B8u, &recomp_unit_0051, "recomp_unit_0051");
    runtime.register_function(0x088D02D8u, &recomp_unit_0051, "recomp_unit_0051");
    runtime.register_function(0x088D02E8u, &recomp_unit_0051, "recomp_unit_0051");
    runtime.register_function(0x088D02F0u, &recomp_unit_0051, "recomp_unit_0051");
    runtime.register_function(0x088D0304u, &recomp_unit_0051, "recomp_unit_0051");
    runtime.register_function(0x088D0314u, &recomp_unit_0051, "recomp_unit_0051");
    runtime.register_function(0x088D0324u, &recomp_unit_0051, "recomp_unit_0051");
    runtime.register_function(0x088D0338u, &recomp_unit_0051, "recomp_unit_0051");
    runtime.register_function(0x088D0348u, &recomp_unit_0051, "recomp_unit_0051");
    runtime.register_function(0x088D0358u, &recomp_unit_0051, "recomp_unit_0051");
    runtime.register_function(0x088D0370u, &recomp_unit_0051, "recomp_unit_0051");
    runtime.register_function(0x088D0380u, &recomp_unit_0051, "recomp_unit_0051");
    runtime.register_function(0x088D0398u, &recomp_unit_0051, "recomp_unit_0051");
    runtime.register_function(0x088D03A4u, &recomp_unit_0051, "recomp_unit_0051");
    runtime.register_function(0x088D03A8u, &recomp_unit_0051, "recomp_unit_0051");
    runtime.register_function(0x088D03BCu, &recomp_unit_0051, "recomp_unit_0051");
    runtime.register_function(0x088D03CCu, &recomp_unit_0051, "recomp_unit_0051");
    runtime.register_function(0x088D03F4u, &recomp_unit_0051, "recomp_unit_0051");
    runtime.register_function(0x088D042Cu, &recomp_unit_0051, "recomp_unit_0051");
    runtime.register_function(0x088D043Cu, &recomp_unit_0051, "recomp_unit_0051");
    runtime.register_function(0x088D044Cu, &recomp_unit_0051, "recomp_unit_0051");
    runtime.register_function(0x088D045Cu, &recomp_unit_0051, "recomp_unit_0051");
    runtime.register_function(0x088D0464u, &recomp_unit_0051, "recomp_unit_0051");
    runtime.register_function(0x088D0474u, &recomp_unit_0051, "recomp_unit_0051");
    runtime.register_function(0x088D0488u, &recomp_unit_0051, "recomp_unit_0051");
    runtime.register_function(0x088D04B0u, &recomp_unit_0051, "recomp_unit_0051");
    runtime.register_function(0x088D04CCu, &recomp_unit_0051, "recomp_unit_0051");
    runtime.register_function(0x088D04DCu, &recomp_unit_0051, "recomp_unit_0051");
    runtime.register_function(0x088D04F4u, &recomp_unit_0051, "recomp_unit_0051");
    runtime.register_function(0x088D0504u, &recomp_unit_0051, "recomp_unit_0051");
    runtime.register_function(0x088D0518u, &recomp_unit_0051, "recomp_unit_0051");
    runtime.register_function(0x088D0530u, &recomp_unit_0051, "recomp_unit_0051");
    runtime.register_function(0x088D0540u, &recomp_unit_0051, "recomp_unit_0051");
    runtime.register_function(0x088D0548u, &recomp_unit_0051, "recomp_unit_0051");
    runtime.register_function(0x088D0570u, &recomp_unit_0051, "recomp_unit_0051");
    runtime.register_function(0x088D05C8u, &recomp_unit_0051, "recomp_unit_0051");
    runtime.register_function(0x088D05D4u, &recomp_unit_0051, "recomp_unit_0051");
    runtime.register_function(0x088D05E4u, &recomp_unit_0051, "recomp_unit_0051");
    runtime.register_function(0x088D05F4u, &recomp_unit_0051, "recomp_unit_0051");
    runtime.register_function(0x088D05FCu, &recomp_unit_0051, "recomp_unit_0051");
    runtime.register_function(0x088D060Cu, &recomp_unit_0051, "recomp_unit_0051");
    runtime.register_function(0x088D061Cu, &recomp_unit_0051, "recomp_unit_0051");
    runtime.register_function(0x088D0634u, &recomp_unit_0051, "recomp_unit_0051");
    runtime.register_function(0x088D0650u, &recomp_unit_0051, "recomp_unit_0051");
    runtime.register_function(0x088D0660u, &recomp_unit_0051, "recomp_unit_0051");
    runtime.register_function(0x088D0670u, &recomp_unit_0051, "recomp_unit_0051");
    runtime.register_function(0x088D0688u, &recomp_unit_0051, "recomp_unit_0051");
    runtime.register_function(0x088D06A0u, &recomp_unit_0051, "recomp_unit_0051");
    runtime.register_function(0x088D06B0u, &recomp_unit_0051, "recomp_unit_0051");
    runtime.register_function(0x088D06B8u, &recomp_unit_0051, "recomp_unit_0051");
    runtime.register_function(0x088D06C0u, &recomp_unit_0051, "recomp_unit_0051");
    runtime.register_function(0x088D06E4u, &recomp_unit_0051, "recomp_unit_0051");
    runtime.register_function(0x088D06F4u, &recomp_unit_0051, "recomp_unit_0051");
    runtime.register_function(0x088D0714u, &recomp_unit_0051, "recomp_unit_0051");
    runtime.register_function(0x088D0724u, &recomp_unit_0051, "recomp_unit_0051");
    runtime.register_function(0x088D0734u, &recomp_unit_0051, "recomp_unit_0051");
    runtime.register_function(0x088D074Cu, &recomp_unit_0051, "recomp_unit_0051");
    runtime.register_function(0x088D075Cu, &recomp_unit_0051, "recomp_unit_0051");
    runtime.register_function(0x088D0770u, &recomp_unit_0051, "recomp_unit_0051");
    runtime.register_function(0x088D0788u, &recomp_unit_0051, "recomp_unit_0051");
    runtime.register_function(0x088D0798u, &recomp_unit_0051, "recomp_unit_0051");
    runtime.register_function(0x088D07D4u, &recomp_unit_0051, "recomp_unit_0051");
    runtime.register_function(0x088D07F8u, &recomp_unit_0051, "recomp_unit_0051");
    runtime.register_function(0x088D0800u, &recomp_unit_0051, "recomp_unit_0051");
    runtime.register_function(0x088D0848u, &recomp_unit_0051, "recomp_unit_0051");
    runtime.register_function(0x088D0858u, &recomp_unit_0051, "recomp_unit_0051");
    runtime.register_function(0x088D0874u, &recomp_unit_0051, "recomp_unit_0051");
    runtime.register_function(0x088D0884u, &recomp_unit_0051, "recomp_unit_0051");
    runtime.register_function(0x088D0894u, &recomp_unit_0051, "recomp_unit_0051");
    runtime.register_function(0x088D08B8u, &recomp_unit_0051, "recomp_unit_0051");
    runtime.register_function(0x088D08C8u, &recomp_unit_0051, "recomp_unit_0051");
    runtime.register_function(0x088D08D4u, &recomp_unit_0051, "recomp_unit_0051");
    runtime.register_function(0x088D08DCu, &recomp_unit_0051, "recomp_unit_0051");
    runtime.register_function(0x088D08E4u, &recomp_unit_0051, "recomp_unit_0051");
    runtime.register_function(0x088D08FCu, &recomp_unit_0051, "recomp_unit_0051");
    runtime.register_function(0x088D0904u, &recomp_unit_0051, "recomp_unit_0051");
    runtime.register_function(0x088D0910u, &recomp_unit_0051, "recomp_unit_0051");
    runtime.register_function(0x088D0920u, &recomp_unit_0051, "recomp_unit_0051");
    runtime.register_function(0x088D0928u, &recomp_unit_0051, "recomp_unit_0051");
    runtime.register_function(0x088D0940u, &recomp_unit_0051, "recomp_unit_0051");
    runtime.register_function(0x088D0948u, &recomp_unit_0051, "recomp_unit_0051");
    runtime.register_function(0x088D0950u, &recomp_unit_0051, "recomp_unit_0051");
    runtime.register_function(0x088D0964u, &recomp_unit_0051, "recomp_unit_0051");
    runtime.register_function(0x088D096Cu, &recomp_unit_0051, "recomp_unit_0051");
    runtime.register_function(0x088D0974u, &recomp_unit_0051, "recomp_unit_0051");
    runtime.register_function(0x088D0980u, &recomp_unit_0051, "recomp_unit_0051");
    runtime.register_function(0x088D0990u, &recomp_unit_0051, "recomp_unit_0051");
    runtime.register_function(0x088D09A8u, &recomp_unit_0051, "recomp_unit_0051");
    runtime.register_function(0x088D09B8u, &recomp_unit_0051, "recomp_unit_0051");
    runtime.register_function(0x088D09C8u, &recomp_unit_0051, "recomp_unit_0051");
    runtime.register_function(0x088D09E8u, &recomp_unit_0051, "recomp_unit_0051");
    runtime.register_function(0x088D09F4u, &recomp_unit_0051, "recomp_unit_0051");
    runtime.register_function(0x088D0A08u, &recomp_unit_0051, "recomp_unit_0051");
    runtime.register_function(0x088D0A18u, &recomp_unit_0051, "recomp_unit_0051");
    runtime.register_function(0x088D0A1Cu, &recomp_unit_0051, "recomp_unit_0051");
    runtime.register_function(0x088D0A28u, &recomp_unit_0051, "recomp_unit_0051");
    runtime.register_function(0x088D0A30u, &recomp_unit_0051, "recomp_unit_0051");
    runtime.register_function(0x088D0A3Cu, &recomp_unit_0051, "recomp_unit_0051");
    runtime.register_function(0x088D0A4Cu, &recomp_unit_0051, "recomp_unit_0051");
    runtime.register_function(0x088D0A64u, &recomp_unit_0051, "recomp_unit_0051");
    runtime.register_function(0x088D0A88u, &recomp_unit_0051, "recomp_unit_0051");
    runtime.register_function(0x088D0A98u, &recomp_unit_0051, "recomp_unit_0051");
    runtime.register_function(0x088D0ABCu, &recomp_unit_0051, "recomp_unit_0051");
    runtime.register_function(0x088D0ACCu, &recomp_unit_0051, "recomp_unit_0051");
    runtime.register_function(0x088D0ADCu, &recomp_unit_0051, "recomp_unit_0051");
    runtime.register_function(0x088D0AF4u, &recomp_unit_0051, "recomp_unit_0051");
    runtime.register_function(0x088D0B04u, &recomp_unit_0051, "recomp_unit_0051");
    runtime.register_function(0x088D0B1Cu, &recomp_unit_0051, "recomp_unit_0051");
    runtime.register_function(0x088D0B2Cu, &recomp_unit_0051, "recomp_unit_0051");
    runtime.register_function(0x088D0B40u, &recomp_unit_0051, "recomp_unit_0051");
    runtime.register_function(0x088D0B5Cu, &recomp_unit_0051, "recomp_unit_0051");
    runtime.register_function(0x088D0B74u, &recomp_unit_0051, "recomp_unit_0051");
    runtime.register_function(0x088D0B9Cu, &recomp_unit_0051, "recomp_unit_0051");
    runtime.register_function(0x088D0BBCu, &recomp_unit_0051, "recomp_unit_0051");
    runtime.register_function(0x088D0BCCu, &recomp_unit_0051, "recomp_unit_0051");
    runtime.register_function(0x088D0BD4u, &recomp_unit_0051, "recomp_unit_0051");
    runtime.register_function(0x088D0BDCu, &recomp_unit_0051, "recomp_unit_0051");
    runtime.register_function(0x088D0BE8u, &recomp_unit_0051, "recomp_unit_0051");
    runtime.register_function(0x088D0BFCu, &recomp_unit_0051, "recomp_unit_0051");
    runtime.register_function(0x088D0C0Cu, &recomp_unit_0051, "recomp_unit_0051");
    runtime.register_function(0x088D0C3Cu, &recomp_unit_0051, "recomp_unit_0051");
    runtime.register_function(0x088D0C50u, &recomp_unit_0051, "recomp_unit_0051");
    runtime.register_function(0x088D0C6Cu, &recomp_unit_0051, "recomp_unit_0051");
    runtime.register_function(0x088D0C74u, &recomp_unit_0051, "recomp_unit_0051");
    runtime.register_function(0x088D0C8Cu, &recomp_unit_0051, "recomp_unit_0051");
    runtime.register_function(0x088D0C98u, &recomp_unit_0051, "recomp_unit_0051");
    runtime.register_function(0x088D0CB8u, &recomp_unit_0051, "recomp_unit_0051");
    runtime.register_function(0x088D0CC8u, &recomp_unit_0051, "recomp_unit_0051");
    runtime.register_function(0x088D0CD8u, &recomp_unit_0051, "recomp_unit_0051");
    runtime.register_function(0x088D0CF8u, &recomp_unit_0051, "recomp_unit_0051");
    runtime.register_function(0x088D0D08u, &recomp_unit_0051, "recomp_unit_0051");
    runtime.register_function(0x088D0D10u, &recomp_unit_0051, "recomp_unit_0051");
    runtime.register_function(0x088D0D18u, &recomp_unit_0051, "recomp_unit_0051");
    runtime.register_function(0x088D0D34u, &recomp_unit_0051, "recomp_unit_0051");
    runtime.register_function(0x088D0D60u, &recomp_unit_0051, "recomp_unit_0051");
    runtime.register_function(0x088D0D8Cu, &recomp_unit_0051, "recomp_unit_0051");
    runtime.register_function(0x088D0DB0u, &recomp_unit_0051, "recomp_unit_0051");
    runtime.register_function(0x088D0DB8u, &recomp_unit_0051, "recomp_unit_0051");
    runtime.register_function(0x088D0DCCu, &recomp_unit_0051, "recomp_unit_0051");
    runtime.register_function(0x088D0DE0u, &recomp_unit_0051, "recomp_unit_0051");
    runtime.register_function(0x088D0E08u, &recomp_unit_0051, "recomp_unit_0051");
    runtime.register_function(0x088D0E18u, &recomp_unit_0051, "recomp_unit_0051");
    runtime.register_function(0x088D0E28u, &recomp_unit_0051, "recomp_unit_0051");
    runtime.register_function(0x088D0E30u, &recomp_unit_0051, "recomp_unit_0051");
    runtime.register_function(0x088D0E3Cu, &recomp_unit_0051, "recomp_unit_0051");
    runtime.register_function(0x088D0E4Cu, &recomp_unit_0051, "recomp_unit_0051");
    runtime.register_function(0x088D0E50u, &recomp_unit_0051, "recomp_unit_0051");
    runtime.register_function(0x088D0E68u, &recomp_unit_0051, "recomp_unit_0051");
    runtime.register_function(0x088D0E78u, &recomp_unit_0051, "recomp_unit_0051");
    runtime.register_function(0x088D0E88u, &recomp_unit_0051, "recomp_unit_0051");
    runtime.register_function(0x088D0E98u, &recomp_unit_0051, "recomp_unit_0051");
    runtime.register_function(0x088D0EB0u, &recomp_unit_0051, "recomp_unit_0051");
    runtime.register_function(0x088D0EC0u, &recomp_unit_0051, "recomp_unit_0051");
    runtime.register_function(0x088D0ED8u, &recomp_unit_0051, "recomp_unit_0051");
    runtime.register_function(0x088D0EE8u, &recomp_unit_0051, "recomp_unit_0051");
    runtime.register_function(0x088D0EFCu, &recomp_unit_0051, "recomp_unit_0051");
    runtime.register_function(0x088D0F18u, &recomp_unit_0051, "recomp_unit_0051");
    runtime.register_function(0x088D0F30u, &recomp_unit_0051, "recomp_unit_0051");
    runtime.register_function(0x088D0F5Cu, &recomp_unit_0051, "recomp_unit_0051");
    runtime.register_function(0x088D0F7Cu, &recomp_unit_0051, "recomp_unit_0051");
    runtime.register_function(0x088D0F8Cu, &recomp_unit_0051, "recomp_unit_0051");
    runtime.register_function(0x088D0F94u, &recomp_unit_0051, "recomp_unit_0051");
    runtime.register_function(0x088D0F9Cu, &recomp_unit_0051, "recomp_unit_0051");
    runtime.register_function(0x088D0FA8u, &recomp_unit_0051, "recomp_unit_0051");
    runtime.register_function(0x088D0FBCu, &recomp_unit_0051, "recomp_unit_0051");
    runtime.register_function(0x088D0FCCu, &recomp_unit_0051, "recomp_unit_0051");
    runtime.register_function(0x088D0FFCu, &recomp_unit_0051, "recomp_unit_0051");
    runtime.register_function(0x088D1010u, &recomp_unit_0051, "recomp_unit_0051");
    runtime.register_function(0x088D102Cu, &recomp_unit_0051, "recomp_unit_0051");
    runtime.register_function(0x088D1034u, &recomp_unit_0051, "recomp_unit_0051");
    runtime.register_function(0x088D104Cu, &recomp_unit_0051, "recomp_unit_0051");
    runtime.register_function(0x088D106Cu, &recomp_unit_0051, "recomp_unit_0051");
    runtime.register_function(0x088D107Cu, &recomp_unit_0051, "recomp_unit_0051");
    runtime.register_function(0x088D1084u, &recomp_unit_0051, "recomp_unit_0051");
    runtime.register_function(0x088D1090u, &recomp_unit_0051, "recomp_unit_0051");
    runtime.register_function(0x088D1094u, &recomp_unit_0051, "recomp_unit_0051");
    runtime.register_function(0x088D10A0u, &recomp_unit_0051, "recomp_unit_0051");
    runtime.register_function(0x088D10A8u, &recomp_unit_0051, "recomp_unit_0051");
    runtime.register_function(0x088D10B0u, &recomp_unit_0051, "recomp_unit_0051");
    runtime.register_function(0x088D10C0u, &recomp_unit_0051, "recomp_unit_0051");
    runtime.register_function(0x088D10E4u, &recomp_unit_0051, "recomp_unit_0051");
    runtime.register_function(0x088D10F8u, &recomp_unit_0051, "recomp_unit_0051");
    runtime.register_function(0x088D1100u, &recomp_unit_0051, "recomp_unit_0051");
    runtime.register_function(0x088D1108u, &recomp_unit_0051, "recomp_unit_0051");
    runtime.register_function(0x088D1124u, &recomp_unit_0051, "recomp_unit_0051");
    runtime.register_function(0x088D1150u, &recomp_unit_0051, "recomp_unit_0051");
    runtime.register_function(0x088D117Cu, &recomp_unit_0051, "recomp_unit_0051");
    runtime.register_function(0x088D11A0u, &recomp_unit_0051, "recomp_unit_0051");
    runtime.register_function(0x088D11A8u, &recomp_unit_0051, "recomp_unit_0051");
    runtime.register_function(0x088D11BCu, &recomp_unit_0051, "recomp_unit_0051");
    runtime.register_function(0x088D11D4u, &recomp_unit_0051, "recomp_unit_0051");
    runtime.register_function(0x088D11FCu, &recomp_unit_0051, "recomp_unit_0051");
    runtime.register_function(0x088D1208u, &recomp_unit_0051, "recomp_unit_0051");
    runtime.register_function(0x088D1218u, &recomp_unit_0051, "recomp_unit_0051");
    runtime.register_function(0x088D1224u, &recomp_unit_0051, "recomp_unit_0051");
    runtime.register_function(0x088D1238u, &recomp_unit_0051, "recomp_unit_0051");
    runtime.register_function(0x088D1244u, &recomp_unit_0051, "recomp_unit_0051");
    runtime.register_function(0x088D126Cu, &recomp_unit_0051, "recomp_unit_0051");
    runtime.register_function(0x088D1274u, &recomp_unit_0051, "recomp_unit_0051");
    runtime.register_function(0x088D1284u, &recomp_unit_0051, "recomp_unit_0051");
    runtime.register_function(0x088D1294u, &recomp_unit_0051, "recomp_unit_0051");
    runtime.register_function(0x088D12A4u, &recomp_unit_0051, "recomp_unit_0051");
    runtime.register_function(0x088D12ACu, &recomp_unit_0051, "recomp_unit_0051");
    runtime.register_function(0x088D12B8u, &recomp_unit_0051, "recomp_unit_0051");
    runtime.register_function(0x088D12C8u, &recomp_unit_0051, "recomp_unit_0051");
    runtime.register_function(0x088D12CCu, &recomp_unit_0051, "recomp_unit_0051");
    runtime.register_function(0x088D12E4u, &recomp_unit_0051, "recomp_unit_0051");
    runtime.register_function(0x088D12F0u, &recomp_unit_0051, "recomp_unit_0051");
    runtime.register_function(0x088D12FCu, &recomp_unit_0051, "recomp_unit_0051");
    runtime.register_function(0x088D130Cu, &recomp_unit_0051, "recomp_unit_0051");
    runtime.register_function(0x088D131Cu, &recomp_unit_0051, "recomp_unit_0051");
    runtime.register_function(0x088D134Cu, &recomp_unit_0051, "recomp_unit_0051");
    runtime.register_function(0x088D1364u, &recomp_unit_0051, "recomp_unit_0051");
    runtime.register_function(0x088D136Cu, &recomp_unit_0051, "recomp_unit_0051");
    runtime.register_function(0x088D137Cu, &recomp_unit_0051, "recomp_unit_0051");
    runtime.register_function(0x088D138Cu, &recomp_unit_0051, "recomp_unit_0051");
    runtime.register_function(0x088D13B0u, &recomp_unit_0051, "recomp_unit_0051");
    runtime.register_function(0x088D13B8u, &recomp_unit_0051, "recomp_unit_0051");
    runtime.register_function(0x088D13D4u, &recomp_unit_0051, "recomp_unit_0051");
    runtime.register_function(0x088D13DCu, &recomp_unit_0051, "recomp_unit_0051");
    runtime.register_function(0x088D13E0u, &recomp_unit_0051, "recomp_unit_0051");
    runtime.register_function(0x088D13F4u, &recomp_unit_0051, "recomp_unit_0051");
    runtime.register_function(0x088D13FCu, &recomp_unit_0051, "recomp_unit_0051");
    runtime.register_function(0x088D1408u, &recomp_unit_0051, "recomp_unit_0051");
    runtime.register_function(0x088D142Cu, &recomp_unit_0051, "recomp_unit_0051");
    runtime.register_function(0x088D1434u, &recomp_unit_0051, "recomp_unit_0051");
    runtime.register_function(0x088D144Cu, &recomp_unit_0051, "recomp_unit_0051");
    runtime.register_function(0x088D1450u, &recomp_unit_0051, "recomp_unit_0051");
    runtime.register_function(0x088D1464u, &recomp_unit_0051, "recomp_unit_0051");
    runtime.register_function(0x088D1468u, &recomp_unit_0051, "recomp_unit_0051");
    runtime.register_function(0x088D1488u, &recomp_unit_0051, "recomp_unit_0051");
    runtime.register_function(0x088D14C8u, &recomp_unit_0051, "recomp_unit_0051");
    runtime.register_function(0x088D14D4u, &recomp_unit_0051, "recomp_unit_0051");
    runtime.register_function(0x088D14E0u, &recomp_unit_0051, "recomp_unit_0051");
    runtime.register_function(0x088D14F4u, &recomp_unit_0051, "recomp_unit_0051");
    runtime.register_function(0x088D14FCu, &recomp_unit_0051, "recomp_unit_0051");
    runtime.register_function(0x088D1504u, &recomp_unit_0051, "recomp_unit_0051");
    runtime.register_function(0x088D1508u, &recomp_unit_0051, "recomp_unit_0051");
    runtime.register_function(0x088D1514u, &recomp_unit_0051, "recomp_unit_0051");
    runtime.register_function(0x088D1520u, &recomp_unit_0051, "recomp_unit_0051");
    runtime.register_function(0x088D1528u, &recomp_unit_0051, "recomp_unit_0051");
    runtime.register_function(0x088D1534u, &recomp_unit_0051, "recomp_unit_0051");
    runtime.register_function(0x088D1544u, &recomp_unit_0051, "recomp_unit_0051");
    runtime.register_function(0x088D155Cu, &recomp_unit_0051, "recomp_unit_0051");
    runtime.register_function(0x088D157Cu, &recomp_unit_0051, "recomp_unit_0051");
    runtime.register_function(0x088D1588u, &recomp_unit_0051, "recomp_unit_0051");
    runtime.register_function(0x088D15A4u, &recomp_unit_0051, "recomp_unit_0051");
    runtime.register_function(0x088D15ACu, &recomp_unit_0051, "recomp_unit_0051");
    runtime.register_function(0x088D15C4u, &recomp_unit_0051, "recomp_unit_0051");
    runtime.register_function(0x088D15C8u, &recomp_unit_0051, "recomp_unit_0051");
    runtime.register_function(0x088D15E0u, &recomp_unit_0051, "recomp_unit_0051");
    runtime.register_function(0x088D15E8u, &recomp_unit_0051, "recomp_unit_0051");
    runtime.register_function(0x088D15F4u, &recomp_unit_0051, "recomp_unit_0051");
    runtime.register_function(0x088D1608u, &recomp_unit_0051, "recomp_unit_0051");
    runtime.register_function(0x088D1610u, &recomp_unit_0051, "recomp_unit_0051");
    runtime.register_function(0x088D1618u, &recomp_unit_0051, "recomp_unit_0051");
    runtime.register_function(0x088D161Cu, &recomp_unit_0051, "recomp_unit_0051");
    runtime.register_function(0x088D1628u, &recomp_unit_0051, "recomp_unit_0051");
    runtime.register_function(0x088D1634u, &recomp_unit_0051, "recomp_unit_0051");
    runtime.register_function(0x088D1644u, &recomp_unit_0051, "recomp_unit_0051");
    runtime.register_function(0x088D165Cu, &recomp_unit_0051, "recomp_unit_0051");
    runtime.register_function(0x088D1668u, &recomp_unit_0051, "recomp_unit_0051");
    runtime.register_function(0x088D167Cu, &recomp_unit_0051, "recomp_unit_0051");
    runtime.register_function(0x088D1684u, &recomp_unit_0051, "recomp_unit_0051");
    runtime.register_function(0x088D168Cu, &recomp_unit_0051, "recomp_unit_0051");
    runtime.register_function(0x088D1690u, &recomp_unit_0051, "recomp_unit_0051");
    runtime.register_function(0x088D1698u, &recomp_unit_0051, "recomp_unit_0051");
    runtime.register_function(0x088D16A4u, &recomp_unit_0051, "recomp_unit_0051");
    runtime.register_function(0x088D16B8u, &recomp_unit_0051, "recomp_unit_0051");
    runtime.register_function(0x088D16C4u, &recomp_unit_0051, "recomp_unit_0051");
    runtime.register_function(0x088D16D0u, &recomp_unit_0051, "recomp_unit_0051");
    runtime.register_function(0x088D16DCu, &recomp_unit_0051, "recomp_unit_0051");
    runtime.register_function(0x088D16F4u, &recomp_unit_0051, "recomp_unit_0051");
    runtime.register_function(0x088D1704u, &recomp_unit_0051, "recomp_unit_0051");
    runtime.register_function(0x088D1718u, &recomp_unit_0051, "recomp_unit_0051");
    runtime.register_function(0x088D1730u, &recomp_unit_0051, "recomp_unit_0051");
    runtime.register_function(0x088D1754u, &recomp_unit_0051, "recomp_unit_0051");
    runtime.register_function(0x088D176Cu, &recomp_unit_0051, "recomp_unit_0051");
    runtime.register_function(0x088D1788u, &recomp_unit_0051, "recomp_unit_0051");
    runtime.register_function(0x088D17A0u, &recomp_unit_0051, "recomp_unit_0051");
    runtime.register_function(0x088D17ACu, &recomp_unit_0051, "recomp_unit_0051");
    runtime.register_function(0x088D17B4u, &recomp_unit_0051, "recomp_unit_0051");
    runtime.register_function(0x088D17C0u, &recomp_unit_0051, "recomp_unit_0051");
    runtime.register_function(0x088D17C8u, &recomp_unit_0051, "recomp_unit_0051");
    runtime.register_function(0x088D17D4u, &recomp_unit_0051, "recomp_unit_0051");
    runtime.register_function(0x088D17DCu, &recomp_unit_0051, "recomp_unit_0051");
    runtime.register_function(0x088D17E8u, &recomp_unit_0051, "recomp_unit_0051");
    runtime.register_function(0x088D17F0u, &recomp_unit_0051, "recomp_unit_0051");
    runtime.register_function(0x088D1820u, &recomp_unit_0051, "recomp_unit_0051");
    runtime.register_function(0x088D184Cu, &recomp_unit_0051, "recomp_unit_0051");
    runtime.register_function(0x088D1858u, &recomp_unit_0051, "recomp_unit_0051");
    runtime.register_function(0x088D1874u, &recomp_unit_0051, "recomp_unit_0051");
    runtime.register_function(0x088D1894u, &recomp_unit_0051, "recomp_unit_0051");
    runtime.register_function(0x088D18A0u, &recomp_unit_0051, "recomp_unit_0051");
    runtime.register_function(0x088D18ACu, &recomp_unit_0051, "recomp_unit_0051");
    runtime.register_function(0x088D18B8u, &recomp_unit_0051, "recomp_unit_0051");
    runtime.register_function(0x088D18C8u, &recomp_unit_0051, "recomp_unit_0051");
    runtime.register_function(0x088D18D8u, &recomp_unit_0051, "recomp_unit_0051");
    runtime.register_function(0x088D18E0u, &recomp_unit_0051, "recomp_unit_0051");
    runtime.register_function(0x088D18ECu, &recomp_unit_0051, "recomp_unit_0051");
    runtime.register_function(0x088D1904u, &recomp_unit_0051, "recomp_unit_0051");
    runtime.register_function(0x088D1914u, &recomp_unit_0051, "recomp_unit_0051");
    runtime.register_function(0x088D1920u, &recomp_unit_0051, "recomp_unit_0051");
    runtime.register_function(0x088D192Cu, &recomp_unit_0051, "recomp_unit_0051");
    runtime.register_function(0x088D1934u, &recomp_unit_0051, "recomp_unit_0051");
    runtime.register_function(0x088D1958u, &recomp_unit_0051, "recomp_unit_0051");
    runtime.register_function(0x088D1980u, &recomp_unit_0051, "recomp_unit_0051");
    runtime.register_function(0x088D1990u, &recomp_unit_0051, "recomp_unit_0051");
    runtime.register_function(0x088D19A0u, &recomp_unit_0051, "recomp_unit_0051");
    runtime.register_function(0x088D19B8u, &recomp_unit_0051, "recomp_unit_0051");
    runtime.register_function(0x088D19C8u, &recomp_unit_0051, "recomp_unit_0051");
    runtime.register_function(0x088D19DCu, &recomp_unit_0051, "recomp_unit_0051");
    runtime.register_function(0x088D19F4u, &recomp_unit_0051, "recomp_unit_0051");
    runtime.register_function(0x088D1A04u, &recomp_unit_0051, "recomp_unit_0051");
    runtime.register_function(0x088D1A28u, &recomp_unit_0051, "recomp_unit_0051");
    runtime.register_function(0x088D1A48u, &recomp_unit_0051, "recomp_unit_0051");
    runtime.register_function(0x088D1A60u, &recomp_unit_0051, "recomp_unit_0051");
    runtime.register_function(0x088D1A78u, &recomp_unit_0051, "recomp_unit_0051");
    runtime.register_function(0x088D1A8Cu, &recomp_unit_0051, "recomp_unit_0051");
    runtime.register_function(0x088D1A9Cu, &recomp_unit_0051, "recomp_unit_0051");
    runtime.register_function(0x088D1ABCu, &recomp_unit_0051, "recomp_unit_0051");
    runtime.register_function(0x088D1ACCu, &recomp_unit_0051, "recomp_unit_0051");
    runtime.register_function(0x088D1AF4u, &recomp_unit_0051, "recomp_unit_0051");
    runtime.register_function(0x088D1B0Cu, &recomp_unit_0051, "recomp_unit_0051");
    runtime.register_function(0x088D1B18u, &recomp_unit_0051, "recomp_unit_0051");
    runtime.register_function(0x088D1B20u, &recomp_unit_0051, "recomp_unit_0051");
    runtime.register_function(0x088D1B24u, &recomp_unit_0051, "recomp_unit_0051");
    runtime.register_function(0x088D1B48u, &recomp_unit_0051, "recomp_unit_0051");
    runtime.register_function(0x088D1B58u, &recomp_unit_0051, "recomp_unit_0051");
    runtime.register_function(0x088D1B74u, &recomp_unit_0051, "recomp_unit_0051");
    runtime.register_function(0x088D1B84u, &recomp_unit_0051, "recomp_unit_0051");
    runtime.register_function(0x088D1B94u, &recomp_unit_0051, "recomp_unit_0051");
    runtime.register_function(0x088D1BA4u, &recomp_unit_0051, "recomp_unit_0051");
    runtime.register_function(0x088D1BACu, &recomp_unit_0051, "recomp_unit_0051");
    runtime.register_function(0x088D1BB4u, &recomp_unit_0051, "recomp_unit_0051");
    runtime.register_function(0x088D1BD4u, &recomp_unit_0051, "recomp_unit_0051");
    runtime.register_function(0x088D1BE4u, &recomp_unit_0051, "recomp_unit_0051");
    runtime.register_function(0x088D1BFCu, &recomp_unit_0051, "recomp_unit_0051");
    runtime.register_function(0x088D1C0Cu, &recomp_unit_0051, "recomp_unit_0051");
    runtime.register_function(0x088D1C20u, &recomp_unit_0051, "recomp_unit_0051");
    runtime.register_function(0x088D1C38u, &recomp_unit_0051, "recomp_unit_0051");
    runtime.register_function(0x088D1C48u, &recomp_unit_0051, "recomp_unit_0051");
    runtime.register_function(0x088D1C70u, &recomp_unit_0051, "recomp_unit_0051");
    runtime.register_function(0x088D1C88u, &recomp_unit_0051, "recomp_unit_0051");
    runtime.register_function(0x088D1C9Cu, &recomp_unit_0051, "recomp_unit_0051");
    runtime.register_function(0x088D1CA8u, &recomp_unit_0051, "recomp_unit_0051");
    runtime.register_function(0x088D1CB4u, &recomp_unit_0051, "recomp_unit_0051");
    runtime.register_function(0x088D1CD4u, &recomp_unit_0051, "recomp_unit_0051");
    runtime.register_function(0x088D1CE4u, &recomp_unit_0051, "recomp_unit_0051");
    runtime.register_function(0x088D1D24u, &recomp_unit_0051, "recomp_unit_0051");
    runtime.register_function(0x088D1D34u, &recomp_unit_0051, "recomp_unit_0051");
    runtime.register_function(0x088D1D50u, &recomp_unit_0051, "recomp_unit_0051");
    runtime.register_function(0x088D1D60u, &recomp_unit_0051, "recomp_unit_0051");
    runtime.register_function(0x088D1D70u, &recomp_unit_0051, "recomp_unit_0051");
    runtime.register_function(0x088D1D80u, &recomp_unit_0051, "recomp_unit_0051");
    runtime.register_function(0x088D1D88u, &recomp_unit_0051, "recomp_unit_0051");
    runtime.register_function(0x088D1D90u, &recomp_unit_0051, "recomp_unit_0051");
    runtime.register_function(0x088D1DB0u, &recomp_unit_0051, "recomp_unit_0051");
    runtime.register_function(0x088D1DC0u, &recomp_unit_0051, "recomp_unit_0051");
    runtime.register_function(0x088D1DD8u, &recomp_unit_0051, "recomp_unit_0051");
    runtime.register_function(0x088D1DE8u, &recomp_unit_0051, "recomp_unit_0051");
    runtime.register_function(0x088D1DFCu, &recomp_unit_0051, "recomp_unit_0051");
    runtime.register_function(0x088D1E14u, &recomp_unit_0051, "recomp_unit_0051");
    runtime.register_function(0x088D1E24u, &recomp_unit_0051, "recomp_unit_0051");
    runtime.register_function(0x088D1E4Cu, &recomp_unit_0051, "recomp_unit_0051");
    runtime.register_function(0x088D1E64u, &recomp_unit_0051, "recomp_unit_0051");
    runtime.register_function(0x088D1E78u, &recomp_unit_0051, "recomp_unit_0051");
    runtime.register_function(0x088D1E98u, &recomp_unit_0051, "recomp_unit_0051");
    runtime.register_function(0x088D1EA8u, &recomp_unit_0051, "recomp_unit_0051");
    runtime.register_function(0x088D1EE8u, &recomp_unit_0051, "recomp_unit_0051");
    runtime.register_function(0x088D1EF8u, &recomp_unit_0051, "recomp_unit_0051");
    runtime.register_function(0x088D1F14u, &recomp_unit_0051, "recomp_unit_0051");
    runtime.register_function(0x088D1F24u, &recomp_unit_0051, "recomp_unit_0051");
    runtime.register_function(0x088D1F34u, &recomp_unit_0051, "recomp_unit_0051");
    runtime.register_function(0x088D1F48u, &recomp_unit_0051, "recomp_unit_0051");
    runtime.register_function(0x088D1F58u, &recomp_unit_0051, "recomp_unit_0051");
    runtime.register_function(0x088D1F68u, &recomp_unit_0051, "recomp_unit_0051");
    runtime.register_function(0x088D1F78u, &recomp_unit_0051, "recomp_unit_0051");
    runtime.register_function(0x088D1F88u, &recomp_unit_0051, "recomp_unit_0051");
    runtime.register_function(0x088D1FA0u, &recomp_unit_0051, "recomp_unit_0051");
    runtime.register_function(0x088D1FB0u, &recomp_unit_0051, "recomp_unit_0051");
    runtime.register_function(0x088D1FC4u, &recomp_unit_0051, "recomp_unit_0051");
    runtime.register_function(0x088D1FDCu, &recomp_unit_0051, "recomp_unit_0051");
    runtime.register_function(0x088D1FECu, &recomp_unit_0051, "recomp_unit_0051");
    runtime.register_function(0x088D1FF4u, &recomp_unit_0051, "recomp_unit_0051");
    runtime.register_function(0x088D2014u, &recomp_unit_0051, "recomp_unit_0051");
    runtime.register_function(0x088D2024u, &recomp_unit_0051, "recomp_unit_0051");
    runtime.register_function(0x088D2048u, &recomp_unit_0051, "recomp_unit_0051");
    runtime.register_function(0x088D2058u, &recomp_unit_0051, "recomp_unit_0051");
    runtime.register_function(0x088D207Cu, &recomp_unit_0051, "recomp_unit_0051");
    runtime.register_function(0x088D208Cu, &recomp_unit_0051, "recomp_unit_0051");
    runtime.register_function(0x088D2094u, &recomp_unit_0051, "recomp_unit_0051");
    runtime.register_function(0x088D209Cu, &recomp_unit_0051, "recomp_unit_0051");
    runtime.register_function(0x088D20B4u, &recomp_unit_0051, "recomp_unit_0051");
    runtime.register_function(0x088D20CCu, &recomp_unit_0051, "recomp_unit_0051");
    runtime.register_function(0x088D20DCu, &recomp_unit_0051, "recomp_unit_0051");
    runtime.register_function(0x088D20F4u, &recomp_unit_0051, "recomp_unit_0051");
    runtime.register_function(0x088D2104u, &recomp_unit_0051, "recomp_unit_0051");
    runtime.register_function(0x088D211Cu, &recomp_unit_0051, "recomp_unit_0051");
    runtime.register_function(0x088D212Cu, &recomp_unit_0051, "recomp_unit_0051");
    runtime.register_function(0x088D2140u, &recomp_unit_0051, "recomp_unit_0051");
    runtime.register_function(0x088D2150u, &recomp_unit_0051, "recomp_unit_0051");
    runtime.register_function(0x088D2160u, &recomp_unit_0051, "recomp_unit_0051");
    runtime.register_function(0x088D2174u, &recomp_unit_0051, "recomp_unit_0051");
    runtime.register_function(0x088D2188u, &recomp_unit_0051, "recomp_unit_0051");
    runtime.register_function(0x088D21B0u, &recomp_unit_0051, "recomp_unit_0051");
    runtime.register_function(0x088D21BCu, &recomp_unit_0051, "recomp_unit_0051");
    runtime.register_function(0x088D21C8u, &recomp_unit_0051, "recomp_unit_0051");
    runtime.register_function(0x088D21D8u, &recomp_unit_0051, "recomp_unit_0051");
    runtime.register_function(0x088D21ECu, &recomp_unit_0051, "recomp_unit_0051");
    runtime.register_function(0x088D21F4u, &recomp_unit_0051, "recomp_unit_0051");
    runtime.register_function(0x088D21FCu, &recomp_unit_0051, "recomp_unit_0051");
    runtime.register_function(0x088D2238u, &recomp_unit_0051, "recomp_unit_0051");
    runtime.register_function(0x088D2250u, &recomp_unit_0051, "recomp_unit_0051");
    runtime.register_function(0x088D2278u, &recomp_unit_0051, "recomp_unit_0051");
    runtime.register_function(0x088D2284u, &recomp_unit_0051, "recomp_unit_0051");
    runtime.register_function(0x088D2290u, &recomp_unit_0051, "recomp_unit_0051");
    runtime.register_function(0x088D22A0u, &recomp_unit_0051, "recomp_unit_0051");
    runtime.register_function(0x088D22B4u, &recomp_unit_0051, "recomp_unit_0051");
    runtime.register_function(0x088D22BCu, &recomp_unit_0051, "recomp_unit_0051");
    runtime.register_function(0x088D22C4u, &recomp_unit_0051, "recomp_unit_0051");
    runtime.register_function(0x088D2300u, &recomp_unit_0051, "recomp_unit_0051");
    runtime.register_function(0x088D2318u, &recomp_unit_0051, "recomp_unit_0051");
    runtime.register_function(0x088D2334u, &recomp_unit_0051, "recomp_unit_0051");
    runtime.register_function(0x088D233Cu, &recomp_unit_0051, "recomp_unit_0051");
    runtime.register_function(0x088D2348u, &recomp_unit_0051, "recomp_unit_0051");
    runtime.register_function(0x088D2354u, &recomp_unit_0051, "recomp_unit_0051");
    runtime.register_function(0x088D2368u, &recomp_unit_0051, "recomp_unit_0051");
    runtime.register_function(0x088D2374u, &recomp_unit_0051, "recomp_unit_0051");
    runtime.register_function(0x088D237Cu, &recomp_unit_0051, "recomp_unit_0051");
    runtime.register_function(0x088D2388u, &recomp_unit_0051, "recomp_unit_0051");
    runtime.register_function(0x088D2394u, &recomp_unit_0051, "recomp_unit_0051");
    runtime.register_function(0x088D23ACu, &recomp_unit_0051, "recomp_unit_0051");
    runtime.register_function(0x088D23B8u, &recomp_unit_0051, "recomp_unit_0051");
    runtime.register_function(0x088D23C0u, &recomp_unit_0051, "recomp_unit_0051");
    runtime.register_function(0x088D23C4u, &recomp_unit_0051, "recomp_unit_0051");
    runtime.register_function(0x088D23CCu, &recomp_unit_0051, "recomp_unit_0051");
    runtime.register_function(0x088D23E0u, &recomp_unit_0051, "recomp_unit_0051");
    runtime.register_function(0x088D23F8u, &recomp_unit_0051, "recomp_unit_0051");
    runtime.register_function(0x088D240Cu, &recomp_unit_0051, "recomp_unit_0051");
    runtime.register_function(0x088D241Cu, &recomp_unit_0051, "recomp_unit_0051");
    runtime.register_function(0x088D2428u, &recomp_unit_0051, "recomp_unit_0051");
    runtime.register_function(0x088D2450u, &recomp_unit_0051, "recomp_unit_0051");
    runtime.register_function(0x088D2460u, &recomp_unit_0051, "recomp_unit_0051");
    runtime.register_function(0x088D2470u, &recomp_unit_0051, "recomp_unit_0051");
    runtime.register_function(0x088D2484u, &recomp_unit_0051, "recomp_unit_0051");
    runtime.register_function(0x088D2494u, &recomp_unit_0051, "recomp_unit_0051");
    runtime.register_function(0x088D24ACu, &recomp_unit_0051, "recomp_unit_0051");
    runtime.register_function(0x088D24BCu, &recomp_unit_0051, "recomp_unit_0051");
    runtime.register_function(0x088D24D0u, &recomp_unit_0051, "recomp_unit_0051");
    runtime.register_function(0x088D24F4u, &recomp_unit_0051, "recomp_unit_0051");
    runtime.register_function(0x088D2514u, &recomp_unit_0051, "recomp_unit_0051");
    runtime.register_function(0x088D252Cu, &recomp_unit_0051, "recomp_unit_0051");
    runtime.register_function(0x088D2544u, &recomp_unit_0051, "recomp_unit_0051");
    runtime.register_function(0x088D2558u, &recomp_unit_0051, "recomp_unit_0051");
    runtime.register_function(0x088D2568u, &recomp_unit_0051, "recomp_unit_0051");
    runtime.register_function(0x088D2588u, &recomp_unit_0051, "recomp_unit_0051");
    runtime.register_function(0x088D2598u, &recomp_unit_0051, "recomp_unit_0051");
    runtime.register_function(0x088D25D8u, &recomp_unit_0051, "recomp_unit_0051");
    runtime.register_function(0x088D25F8u, &recomp_unit_0051, "recomp_unit_0051");
    runtime.register_function(0x088D2614u, &recomp_unit_0051, "recomp_unit_0051");
    runtime.register_function(0x088D2630u, &recomp_unit_0051, "recomp_unit_0051");
    runtime.register_function(0x088D264Cu, &recomp_unit_0051, "recomp_unit_0051");
    runtime.register_function(0x088D2668u, &recomp_unit_0051, "recomp_unit_0051");
    runtime.register_function(0x088D2684u, &recomp_unit_0051, "recomp_unit_0051");
    runtime.register_function(0x088D26A0u, &recomp_unit_0051, "recomp_unit_0051");
    runtime.register_function(0x088D26BCu, &recomp_unit_0051, "recomp_unit_0051");
    runtime.register_function(0x088D26D8u, &recomp_unit_0051, "recomp_unit_0051");
    runtime.register_function(0x088D26F4u, &recomp_unit_0051, "recomp_unit_0051");
    runtime.register_function(0x088D2710u, &recomp_unit_0051, "recomp_unit_0051");
    runtime.register_function(0x088D272Cu, &recomp_unit_0051, "recomp_unit_0051");
    runtime.register_function(0x088D2748u, &recomp_unit_0051, "recomp_unit_0051");
    runtime.register_function(0x088D2764u, &recomp_unit_0051, "recomp_unit_0051");
    runtime.register_function(0x088D2780u, &recomp_unit_0051, "recomp_unit_0051");
    runtime.register_function(0x088D2790u, &recomp_unit_0051, "recomp_unit_0051");
    runtime.register_function(0x088D2794u, &recomp_unit_0051, "recomp_unit_0051");
    runtime.register_function(0x088D27A0u, &recomp_unit_0051, "recomp_unit_0051");
    runtime.register_function(0x088D27B0u, &recomp_unit_0051, "recomp_unit_0051");
    runtime.register_function(0x088D27D0u, &recomp_unit_0051, "recomp_unit_0051");
    runtime.register_function(0x088D2804u, &recomp_unit_0051, "recomp_unit_0051");
    runtime.register_function(0x088D2814u, &recomp_unit_0051, "recomp_unit_0051");
    runtime.register_function(0x088D2820u, &recomp_unit_0051, "recomp_unit_0051");
    runtime.register_function(0x088D2828u, &recomp_unit_0051, "recomp_unit_0051");
    runtime.register_function(0x088D283Cu, &recomp_unit_0051, "recomp_unit_0051");
    runtime.register_function(0x088D2844u, &recomp_unit_0051, "recomp_unit_0051");
    runtime.register_function(0x088D2850u, &recomp_unit_0051, "recomp_unit_0051");
    runtime.register_function(0x088D285Cu, &recomp_unit_0051, "recomp_unit_0051");
    runtime.register_function(0x088D2898u, &recomp_unit_0051, "recomp_unit_0051");
    runtime.register_function(0x088D289Cu, &recomp_unit_0051, "recomp_unit_0051");
    runtime.register_function(0x088D28A8u, &recomp_unit_0051, "recomp_unit_0051");
    runtime.register_function(0x088D28B0u, &recomp_unit_0051, "recomp_unit_0051");
    runtime.register_function(0x088D28BCu, &recomp_unit_0051, "recomp_unit_0051");
    runtime.register_function(0x088D28F4u, &recomp_unit_0051, "recomp_unit_0051");
    runtime.register_function(0x088D28F8u, &recomp_unit_0051, "recomp_unit_0051");
    runtime.register_function(0x088D2904u, &recomp_unit_0051, "recomp_unit_0051");
    runtime.register_function(0x088D2918u, &recomp_unit_0051, "recomp_unit_0051");
    runtime.register_function(0x088D2938u, &recomp_unit_0051, "recomp_unit_0051");
    runtime.register_function(0x088D2940u, &recomp_unit_0051, "recomp_unit_0051");
    runtime.register_function(0x088D295Cu, &recomp_unit_0051, "recomp_unit_0051");
    runtime.register_function(0x088D2968u, &recomp_unit_0051, "recomp_unit_0051");
    runtime.register_function(0x088D297Cu, &recomp_unit_0051, "recomp_unit_0051");
    runtime.register_function(0x088D2984u, &recomp_unit_0051, "recomp_unit_0051");
    runtime.register_function(0x088D298Cu, &recomp_unit_0051, "recomp_unit_0051");
    runtime.register_function(0x088D29A8u, &recomp_unit_0051, "recomp_unit_0051");
    runtime.register_function(0x088D29B8u, &recomp_unit_0051, "recomp_unit_0051");
    runtime.register_function(0x088D29DCu, &recomp_unit_0051, "recomp_unit_0051");
    runtime.register_function(0x088D29F4u, &recomp_unit_0051, "recomp_unit_0051");
    runtime.register_function(0x088D2A08u, &recomp_unit_0051, "recomp_unit_0051");
    runtime.register_function(0x088D2A14u, &recomp_unit_0051, "recomp_unit_0051");
    runtime.register_function(0x088D2A3Cu, &recomp_unit_0051, "recomp_unit_0051");
    runtime.register_function(0x088D2A5Cu, &recomp_unit_0051, "recomp_unit_0051");
    runtime.register_function(0x088D2A78u, &recomp_unit_0051, "recomp_unit_0051");
    runtime.register_function(0x088D2A9Cu, &recomp_unit_0051, "recomp_unit_0051");
    runtime.register_function(0x088D2AACu, &recomp_unit_0051, "recomp_unit_0051");
    runtime.register_function(0x088D2AD0u, &recomp_unit_0051, "recomp_unit_0051");
    runtime.register_function(0x088D2AE8u, &recomp_unit_0051, "recomp_unit_0051");
    runtime.register_function(0x088D2AF0u, &recomp_unit_0051, "recomp_unit_0051");
    runtime.register_function(0x088D2B10u, &recomp_unit_0051, "recomp_unit_0051");
    runtime.register_function(0x088D2B1Cu, &recomp_unit_0051, "recomp_unit_0051");
    runtime.register_function(0x088D2B2Cu, &recomp_unit_0051, "recomp_unit_0051");
    runtime.register_function(0x088D2B34u, &recomp_unit_0051, "recomp_unit_0051");
    runtime.register_function(0x088D2B48u, &recomp_unit_0051, "recomp_unit_0051");
    runtime.register_function(0x088D2B68u, &recomp_unit_0051, "recomp_unit_0051");
    runtime.register_function(0x088D2B78u, &recomp_unit_0051, "recomp_unit_0051");
    runtime.register_function(0x088D2B90u, &recomp_unit_0051, "recomp_unit_0051");
    runtime.register_function(0x088D2BA8u, &recomp_unit_0051, "recomp_unit_0051");
    runtime.register_function(0x088D2BB4u, &recomp_unit_0051, "recomp_unit_0051");
    runtime.register_function(0x088D2BC8u, &recomp_unit_0051, "recomp_unit_0051");
    runtime.register_function(0x088D2BD0u, &recomp_unit_0051, "recomp_unit_0051");
    runtime.register_function(0x088D2BD8u, &recomp_unit_0051, "recomp_unit_0051");
    runtime.register_function(0x088D2BE0u, &recomp_unit_0051, "recomp_unit_0051");
    runtime.register_function(0x088D2C20u, &recomp_unit_0051, "recomp_unit_0051");
    runtime.register_function(0x088D2C2Cu, &recomp_unit_0051, "recomp_unit_0051");
    runtime.register_function(0x088D2C38u, &recomp_unit_0051, "recomp_unit_0051");
    runtime.register_function(0x088D2C44u, &recomp_unit_0051, "recomp_unit_0051");
    runtime.register_function(0x088D2C50u, &recomp_unit_0051, "recomp_unit_0051");
    runtime.register_function(0x088D2C64u, &recomp_unit_0051, "recomp_unit_0051");
    runtime.register_function(0x088D2C6Cu, &recomp_unit_0051, "recomp_unit_0051");
    runtime.register_function(0x088D2C74u, &recomp_unit_0051, "recomp_unit_0051");
    runtime.register_function(0x088D2C78u, &recomp_unit_0051, "recomp_unit_0051");
    runtime.register_function(0x088D2C80u, &recomp_unit_0051, "recomp_unit_0051");
    runtime.register_function(0x088D2C8Cu, &recomp_unit_0051, "recomp_unit_0051");
    runtime.register_function(0x088D2CA4u, &recomp_unit_0051, "recomp_unit_0051");
    runtime.register_function(0x088D2CB0u, &recomp_unit_0051, "recomp_unit_0051");
    runtime.register_function(0x088D2CC8u, &recomp_unit_0051, "recomp_unit_0051");
    runtime.register_function(0x088D2CD8u, &recomp_unit_0051, "recomp_unit_0051");
    runtime.register_function(0x088D2CF0u, &recomp_unit_0051, "recomp_unit_0051");
    runtime.register_function(0x088D2D0Cu, &recomp_unit_0051, "recomp_unit_0051");
    runtime.register_function(0x088D2D28u, &recomp_unit_0051, "recomp_unit_0051");
    runtime.register_function(0x088D2D34u, &recomp_unit_0051, "recomp_unit_0051");
    runtime.register_function(0x088D2D3Cu, &recomp_unit_0051, "recomp_unit_0051");
    runtime.register_function(0x088D2D40u, &recomp_unit_0051, "recomp_unit_0051");
    runtime.register_function(0x088D2D68u, &recomp_unit_0051, "recomp_unit_0051");
    runtime.register_function(0x088D2D9Cu, &recomp_unit_0051, "recomp_unit_0051");
    runtime.register_function(0x088D2DA8u, &recomp_unit_0051, "recomp_unit_0051");
    runtime.register_function(0x088D2DB8u, &recomp_unit_0051, "recomp_unit_0051");
    runtime.register_function(0x088D2DD0u, &recomp_unit_0051, "recomp_unit_0051");
    runtime.register_function(0x088D2DD8u, &recomp_unit_0051, "recomp_unit_0051");
    runtime.register_function(0x088D2DE8u, &recomp_unit_0051, "recomp_unit_0051");
    runtime.register_function(0x088D2E00u, &recomp_unit_0051, "recomp_unit_0051");
    runtime.register_function(0x088D2E2Cu, &recomp_unit_0051, "recomp_unit_0051");
    runtime.register_function(0x088D2E34u, &recomp_unit_0051, "recomp_unit_0051");
    runtime.register_function(0x088D2E40u, &recomp_unit_0051, "recomp_unit_0051");
    runtime.register_function(0x088D2E44u, &recomp_unit_0051, "recomp_unit_0051");
    runtime.register_function(0x088D2E50u, &recomp_unit_0051, "recomp_unit_0051");
    runtime.register_function(0x088D2E54u, &recomp_unit_0051, "recomp_unit_0051");
    runtime.register_function(0x088D2E78u, &recomp_unit_0051, "recomp_unit_0051");
    runtime.register_function(0x088D2EB8u, &recomp_unit_0051, "recomp_unit_0051");
    runtime.register_function(0x088D2EC8u, &recomp_unit_0051, "recomp_unit_0051");
    runtime.register_function(0x088D2ED4u, &recomp_unit_0051, "recomp_unit_0051");
    runtime.register_function(0x088D2EE0u, &recomp_unit_0051, "recomp_unit_0051");
    runtime.register_function(0x088D2EF8u, &recomp_unit_0051, "recomp_unit_0051");
    runtime.register_function(0x088D2F18u, &recomp_unit_0051, "recomp_unit_0051");
    runtime.register_function(0x088D2F24u, &recomp_unit_0051, "recomp_unit_0051");
    runtime.register_function(0x088D2F30u, &recomp_unit_0051, "recomp_unit_0051");
    runtime.register_function(0x088D2F3Cu, &recomp_unit_0051, "recomp_unit_0051");
    runtime.register_function(0x088D2F4Cu, &recomp_unit_0051, "recomp_unit_0051");
    runtime.register_function(0x088D2F5Cu, &recomp_unit_0051, "recomp_unit_0051");
    runtime.register_function(0x088D2F64u, &recomp_unit_0051, "recomp_unit_0051");
    runtime.register_function(0x088D2F70u, &recomp_unit_0051, "recomp_unit_0051");
    runtime.register_function(0x088D2F88u, &recomp_unit_0051, "recomp_unit_0051");
    runtime.register_function(0x088D2F98u, &recomp_unit_0051, "recomp_unit_0051");
    runtime.register_function(0x088D2FA4u, &recomp_unit_0051, "recomp_unit_0051");
    runtime.register_function(0x088D2FB0u, &recomp_unit_0051, "recomp_unit_0051");
    runtime.register_function(0x088D2FB8u, &recomp_unit_0051, "recomp_unit_0051");
    runtime.register_function(0x088D2FDCu, &recomp_unit_0051, "recomp_unit_0051");
    runtime.register_function(0x088D300Cu, &recomp_unit_0051, "recomp_unit_0051");
    runtime.register_function(0x088D301Cu, &recomp_unit_0051, "recomp_unit_0051");
    runtime.register_function(0x088D3058u, &recomp_unit_0051, "recomp_unit_0051");
    runtime.register_function(0x088D309Cu, &recomp_unit_0051, "recomp_unit_0051");
    runtime.register_function(0x088D30C4u, &recomp_unit_0051, "recomp_unit_0051");
    runtime.register_function(0x088D3104u, &recomp_unit_0051, "recomp_unit_0051");
    runtime.register_function(0x088D311Cu, &recomp_unit_0051, "recomp_unit_0051");
    runtime.register_function(0x088D3138u, &recomp_unit_0051, "recomp_unit_0051");
    runtime.register_function(0x088D3148u, &recomp_unit_0051, "recomp_unit_0051");
    runtime.register_function(0x088D3158u, &recomp_unit_0051, "recomp_unit_0051");
    runtime.register_function(0x088D3188u, &recomp_unit_0051, "recomp_unit_0051");
    runtime.register_function(0x088D3194u, &recomp_unit_0051, "recomp_unit_0051");
    runtime.register_function(0x088D31A4u, &recomp_unit_0051, "recomp_unit_0051");
    runtime.register_function(0x088D31B0u, &recomp_unit_0051, "recomp_unit_0051");
    runtime.register_function(0x088D31B8u, &recomp_unit_0051, "recomp_unit_0051");
    runtime.register_function(0x088D31C4u, &recomp_unit_0051, "recomp_unit_0051");
    runtime.register_function(0x088D31D8u, &recomp_unit_0051, "recomp_unit_0051");
    runtime.register_function(0x088D31E4u, &recomp_unit_0051, "recomp_unit_0051");
    runtime.register_function(0x088D31F8u, &recomp_unit_0051, "recomp_unit_0051");
    runtime.register_function(0x088D3200u, &recomp_unit_0051, "recomp_unit_0051");
    runtime.register_function(0x088D3208u, &recomp_unit_0051, "recomp_unit_0051");
    runtime.register_function(0x088D320Cu, &recomp_unit_0051, "recomp_unit_0051");
    runtime.register_function(0x088D3218u, &recomp_unit_0051, "recomp_unit_0051");
    runtime.register_function(0x088D3224u, &recomp_unit_0051, "recomp_unit_0051");
    runtime.register_function(0x088D3230u, &recomp_unit_0051, "recomp_unit_0051");
    runtime.register_function(0x088D3244u, &recomp_unit_0051, "recomp_unit_0051");
    runtime.register_function(0x088D325Cu, &recomp_unit_0051, "recomp_unit_0051");
    runtime.register_function(0x088D326Cu, &recomp_unit_0051, "recomp_unit_0051");
    runtime.register_function(0x088D3278u, &recomp_unit_0051, "recomp_unit_0051");
    runtime.register_function(0x088D3284u, &recomp_unit_0051, "recomp_unit_0051");
    runtime.register_function(0x088D328Cu, &recomp_unit_0051, "recomp_unit_0051");
    runtime.register_function(0x088D3298u, &recomp_unit_0051, "recomp_unit_0051");
    runtime.register_function(0x088D32A0u, &recomp_unit_0051, "recomp_unit_0051");
    runtime.register_function(0x088D32A4u, &recomp_unit_0051, "recomp_unit_0051");
    runtime.register_function(0x088D32C4u, &recomp_unit_0051, "recomp_unit_0051");
    runtime.register_function(0x088D32CCu, &recomp_unit_0051, "recomp_unit_0051");
    runtime.register_function(0x088D32E4u, &recomp_unit_0051, "recomp_unit_0051");
    runtime.register_function(0x088D32F0u, &recomp_unit_0051, "recomp_unit_0051");
    runtime.register_function(0x088D32F8u, &recomp_unit_0051, "recomp_unit_0051");
    runtime.register_function(0x088D3300u, &recomp_unit_0051, "recomp_unit_0051");
    runtime.register_function(0x088D3310u, &recomp_unit_0051, "recomp_unit_0051");
    runtime.register_function(0x088D331Cu, &recomp_unit_0051, "recomp_unit_0051");
    runtime.register_function(0x088D332Cu, &recomp_unit_0051, "recomp_unit_0051");
    runtime.register_function(0x088D3338u, &recomp_unit_0051, "recomp_unit_0051");
    runtime.register_function(0x088D3340u, &recomp_unit_0051, "recomp_unit_0051");
    runtime.register_function(0x088D3348u, &recomp_unit_0051, "recomp_unit_0051");
    runtime.register_function(0x088D3354u, &recomp_unit_0051, "recomp_unit_0051");
    runtime.register_function(0x088D335Cu, &recomp_unit_0051, "recomp_unit_0051");
    runtime.register_function(0x088D336Cu, &recomp_unit_0051, "recomp_unit_0051");
    runtime.register_function(0x088D3378u, &recomp_unit_0051, "recomp_unit_0051");
    runtime.register_function(0x088D3388u, &recomp_unit_0051, "recomp_unit_0051");
    runtime.register_function(0x088D3394u, &recomp_unit_0051, "recomp_unit_0051");
    runtime.register_function(0x088D339Cu, &recomp_unit_0051, "recomp_unit_0051");
    runtime.register_function(0x088D33ACu, &recomp_unit_0051, "recomp_unit_0051");
    runtime.register_function(0x088D33C8u, &recomp_unit_0051, "recomp_unit_0051");
    runtime.register_function(0x088D33D8u, &recomp_unit_0051, "recomp_unit_0051");
    runtime.register_function(0x088D33E4u, &recomp_unit_0051, "recomp_unit_0051");
    runtime.register_function(0x088D33ECu, &recomp_unit_0051, "recomp_unit_0051");
    runtime.register_function(0x088D3400u, &recomp_unit_0051, "recomp_unit_0051");
    runtime.register_function(0x088D3410u, &recomp_unit_0051, "recomp_unit_0051");
    runtime.register_function(0x088D341Cu, &recomp_unit_0051, "recomp_unit_0051");
    runtime.register_function(0x088D3424u, &recomp_unit_0051, "recomp_unit_0051");
    runtime.register_function(0x088D344Cu, &recomp_unit_0051, "recomp_unit_0051");
    runtime.register_function(0x088D345Cu, &recomp_unit_0051, "recomp_unit_0051");
    runtime.register_function(0x088D3478u, &recomp_unit_0051, "recomp_unit_0051");
    runtime.register_function(0x088D3494u, &recomp_unit_0051, "recomp_unit_0051");
    runtime.register_function(0x088D34A4u, &recomp_unit_0051, "recomp_unit_0051");
    runtime.register_function(0x088D34ACu, &recomp_unit_0051, "recomp_unit_0051");
    runtime.register_function(0x088D34B4u, &recomp_unit_0051, "recomp_unit_0051");
    runtime.register_function(0x088D34BCu, &recomp_unit_0051, "recomp_unit_0051");
    runtime.register_function(0x088D34C4u, &recomp_unit_0051, "recomp_unit_0051");
    runtime.register_function(0x088D34CCu, &recomp_unit_0051, "recomp_unit_0051");
    runtime.register_function(0x088D34D8u, &recomp_unit_0051, "recomp_unit_0051");
    runtime.register_function(0x088D34E8u, &recomp_unit_0051, "recomp_unit_0051");
    runtime.register_function(0x088D34F8u, &recomp_unit_0051, "recomp_unit_0051");
    runtime.register_function(0x088D3518u, &recomp_unit_0051, "recomp_unit_0051");
    runtime.register_function(0x088D3528u, &recomp_unit_0051, "recomp_unit_0051");
    runtime.register_function(0x088D3538u, &recomp_unit_0051, "recomp_unit_0051");
    runtime.register_function(0x088D3548u, &recomp_unit_0051, "recomp_unit_0051");
    runtime.register_function(0x088D3558u, &recomp_unit_0051, "recomp_unit_0051");
    runtime.register_function(0x088D3568u, &recomp_unit_0051, "recomp_unit_0051");
    runtime.register_function(0x088D3578u, &recomp_unit_0051, "recomp_unit_0051");
    runtime.register_function(0x088D3588u, &recomp_unit_0051, "recomp_unit_0051");
    runtime.register_function(0x088D3598u, &recomp_unit_0051, "recomp_unit_0051");
    runtime.register_function(0x088D35A8u, &recomp_unit_0051, "recomp_unit_0051");
    runtime.register_function(0x088D35B8u, &recomp_unit_0051, "recomp_unit_0051");
    runtime.register_function(0x088D35C8u, &recomp_unit_0051, "recomp_unit_0051");
    runtime.register_function(0x088D35D8u, &recomp_unit_0051, "recomp_unit_0051");
    runtime.register_function(0x088D35F0u, &recomp_unit_0051, "recomp_unit_0051");
    runtime.register_function(0x088D3600u, &recomp_unit_0051, "recomp_unit_0051");
    runtime.register_function(0x088D3610u, &recomp_unit_0051, "recomp_unit_0051");
    runtime.register_function(0x088D3620u, &recomp_unit_0051, "recomp_unit_0051");
    runtime.register_function(0x088D3630u, &recomp_unit_0051, "recomp_unit_0051");
    runtime.register_function(0x088D363Cu, &recomp_unit_0051, "recomp_unit_0051");
    runtime.register_function(0x088D364Cu, &recomp_unit_0051, "recomp_unit_0051");
    runtime.register_function(0x088D365Cu, &recomp_unit_0051, "recomp_unit_0051");
    runtime.register_function(0x088D366Cu, &recomp_unit_0051, "recomp_unit_0051");
    runtime.register_function(0x088D367Cu, &recomp_unit_0051, "recomp_unit_0051");
    runtime.register_function(0x088D3688u, &recomp_unit_0051, "recomp_unit_0051");
    runtime.register_function(0x088D3694u, &recomp_unit_0051, "recomp_unit_0051");
    runtime.register_function(0x088D36A4u, &recomp_unit_0051, "recomp_unit_0051");
    runtime.register_function(0x088D36B4u, &recomp_unit_0051, "recomp_unit_0051");
    runtime.register_function(0x088D36C0u, &recomp_unit_0051, "recomp_unit_0051");
    runtime.register_function(0x088D36CCu, &recomp_unit_0051, "recomp_unit_0051");
    runtime.register_function(0x088D36E0u, &recomp_unit_0051, "recomp_unit_0051");
    runtime.register_function(0x088D36F0u, &recomp_unit_0051, "recomp_unit_0051");
    runtime.register_function(0x088D3700u, &recomp_unit_0051, "recomp_unit_0051");
    runtime.register_function(0x088D370Cu, &recomp_unit_0051, "recomp_unit_0051");
    runtime.register_function(0x088D3718u, &recomp_unit_0051, "recomp_unit_0051");
    runtime.register_function(0x088D3728u, &recomp_unit_0051, "recomp_unit_0051");
    runtime.register_function(0x088D3738u, &recomp_unit_0051, "recomp_unit_0051");
    runtime.register_function(0x088D3748u, &recomp_unit_0051, "recomp_unit_0051");
    runtime.register_function(0x088D3758u, &recomp_unit_0051, "recomp_unit_0051");
    runtime.register_function(0x088D3764u, &recomp_unit_0051, "recomp_unit_0051");
    runtime.register_function(0x088D3774u, &recomp_unit_0051, "recomp_unit_0051");
    runtime.register_function(0x088D3788u, &recomp_unit_0051, "recomp_unit_0051");
    runtime.register_function(0x088D3798u, &recomp_unit_0051, "recomp_unit_0051");
    runtime.register_function(0x088D37A8u, &recomp_unit_0051, "recomp_unit_0051");
    runtime.register_function(0x088D37B4u, &recomp_unit_0051, "recomp_unit_0051");
    runtime.register_function(0x088D37C4u, &recomp_unit_0051, "recomp_unit_0051");
    runtime.register_function(0x088D37D4u, &recomp_unit_0051, "recomp_unit_0051");
    runtime.register_function(0x088D37E4u, &recomp_unit_0051, "recomp_unit_0051");
    runtime.register_function(0x088D37F8u, &recomp_unit_0051, "recomp_unit_0051");
    runtime.register_function(0x088D3804u, &recomp_unit_0051, "recomp_unit_0051");
    runtime.register_function(0x088D3810u, &recomp_unit_0051, "recomp_unit_0051");
    runtime.register_function(0x088D3820u, &recomp_unit_0051, "recomp_unit_0051");
    runtime.register_function(0x088D3828u, &recomp_unit_0051, "recomp_unit_0051");
    runtime.register_function(0x088D383Cu, &recomp_unit_0051, "recomp_unit_0051");
    runtime.register_function(0x088D384Cu, &recomp_unit_0051, "recomp_unit_0051");
    runtime.register_function(0x088D385Cu, &recomp_unit_0051, "recomp_unit_0051");
    runtime.register_function(0x088D3874u, &recomp_unit_0051, "recomp_unit_0051");
    runtime.register_function(0x088D387Cu, &recomp_unit_0051, "recomp_unit_0051");
    runtime.register_function(0x088D3888u, &recomp_unit_0051, "recomp_unit_0051");
    runtime.register_function(0x088D3898u, &recomp_unit_0051, "recomp_unit_0051");
    runtime.register_function(0x088D38A8u, &recomp_unit_0051, "recomp_unit_0051");
    runtime.register_function(0x088D38B8u, &recomp_unit_0051, "recomp_unit_0051");
    runtime.register_function(0x088D38C8u, &recomp_unit_0051, "recomp_unit_0051");
    runtime.register_function(0x088D38D8u, &recomp_unit_0051, "recomp_unit_0051");
    runtime.register_function(0x088D38E8u, &recomp_unit_0051, "recomp_unit_0051");
    runtime.register_function(0x088D38F8u, &recomp_unit_0051, "recomp_unit_0051");
    runtime.register_function(0x088D3908u, &recomp_unit_0051, "recomp_unit_0051");
    runtime.register_function(0x088D3918u, &recomp_unit_0051, "recomp_unit_0051");
    runtime.register_function(0x088D3928u, &recomp_unit_0051, "recomp_unit_0051");
    runtime.register_function(0x088D3938u, &recomp_unit_0051, "recomp_unit_0051");
    runtime.register_function(0x088D3948u, &recomp_unit_0051, "recomp_unit_0051");
    runtime.register_function(0x088D3958u, &recomp_unit_0051, "recomp_unit_0051");
    runtime.register_function(0x088D3968u, &recomp_unit_0051, "recomp_unit_0051");
    runtime.register_function(0x088D3980u, &recomp_unit_0051, "recomp_unit_0051");
    runtime.register_function(0x088D3990u, &recomp_unit_0051, "recomp_unit_0051");
    runtime.register_function(0x088D39B8u, &recomp_unit_0051, "recomp_unit_0051");
    runtime.register_function(0x088D39C8u, &recomp_unit_0051, "recomp_unit_0051");
    runtime.register_function(0x088D39DCu, &recomp_unit_0051, "recomp_unit_0051");
    runtime.register_function(0x088D39ECu, &recomp_unit_0051, "recomp_unit_0051");
    runtime.register_function(0x088D39FCu, &recomp_unit_0051, "recomp_unit_0051");
    runtime.register_function(0x088D3A0Cu, &recomp_unit_0051, "recomp_unit_0051");
    runtime.register_function(0x088D3A20u, &recomp_unit_0051, "recomp_unit_0051");
    runtime.register_function(0x088D3A30u, &recomp_unit_0051, "recomp_unit_0051");
    runtime.register_function(0x088D3A40u, &recomp_unit_0051, "recomp_unit_0051");
    runtime.register_function(0x088D3A50u, &recomp_unit_0051, "recomp_unit_0051");
    runtime.register_function(0x088D3A5Cu, &recomp_unit_0051, "recomp_unit_0051");
    runtime.register_function(0x088D3A6Cu, &recomp_unit_0051, "recomp_unit_0051");
    runtime.register_function(0x088D3A74u, &recomp_unit_0051, "recomp_unit_0051");
    runtime.register_function(0x088D3A7Cu, &recomp_unit_0051, "recomp_unit_0051");
    runtime.register_function(0x088D3A8Cu, &recomp_unit_0051, "recomp_unit_0051");
    runtime.register_function(0x088D3A9Cu, &recomp_unit_0051, "recomp_unit_0051");
    runtime.register_function(0x088D3AACu, &recomp_unit_0051, "recomp_unit_0051");
    runtime.register_function(0x088D3ABCu, &recomp_unit_0051, "recomp_unit_0051");
    runtime.register_function(0x088D3ACCu, &recomp_unit_0051, "recomp_unit_0051");
    runtime.register_function(0x088D3ADCu, &recomp_unit_0051, "recomp_unit_0051");
    runtime.register_function(0x088D3AECu, &recomp_unit_0051, "recomp_unit_0051");
    runtime.register_function(0x088D3B08u, &recomp_unit_0051, "recomp_unit_0051");
    runtime.register_function(0x088D3B18u, &recomp_unit_0051, "recomp_unit_0051");
    runtime.register_function(0x088D3B28u, &recomp_unit_0051, "recomp_unit_0051");
    runtime.register_function(0x088D3B38u, &recomp_unit_0051, "recomp_unit_0051");
    runtime.register_function(0x088D3B54u, &recomp_unit_0051, "recomp_unit_0051");
    runtime.register_function(0x088D3B64u, &recomp_unit_0051, "recomp_unit_0051");
    runtime.register_function(0x088D3B74u, &recomp_unit_0051, "recomp_unit_0051");
    runtime.register_function(0x088D3B84u, &recomp_unit_0051, "recomp_unit_0051");
    runtime.register_function(0x088D3B94u, &recomp_unit_0051, "recomp_unit_0051");
    runtime.register_function(0x088D3BA4u, &recomp_unit_0051, "recomp_unit_0051");
    runtime.register_function(0x088D3BB4u, &recomp_unit_0051, "recomp_unit_0051");
    runtime.register_function(0x088D3BC0u, &recomp_unit_0051, "recomp_unit_0051");
    runtime.register_function(0x088D3BD0u, &recomp_unit_0051, "recomp_unit_0051");
    runtime.register_function(0x088D3BDCu, &recomp_unit_0051, "recomp_unit_0051");
    runtime.register_function(0x088D3C0Cu, &recomp_unit_0051, "recomp_unit_0051");
    runtime.register_function(0x088D3C24u, &recomp_unit_0051, "recomp_unit_0051");
    runtime.register_function(0x088D3C2Cu, &recomp_unit_0051, "recomp_unit_0051");
    runtime.register_function(0x088D3C38u, &recomp_unit_0051, "recomp_unit_0051");
    runtime.register_function(0x088D3C44u, &recomp_unit_0051, "recomp_unit_0051");
    runtime.register_function(0x088D3C4Cu, &recomp_unit_0051, "recomp_unit_0051");
    runtime.register_function(0x088D3C68u, &recomp_unit_0051, "recomp_unit_0051");
    runtime.register_function(0x088D3C9Cu, &recomp_unit_0051, "recomp_unit_0051");
    runtime.register_function(0x088D3CB4u, &recomp_unit_0051, "recomp_unit_0051");
    runtime.register_function(0x088D3CBCu, &recomp_unit_0051, "recomp_unit_0051");
    runtime.register_function(0x088D3CCCu, &recomp_unit_0051, "recomp_unit_0051");
    runtime.register_function(0x088D3CDCu, &recomp_unit_0051, "recomp_unit_0051");
    runtime.register_function(0x088D3CECu, &recomp_unit_0051, "recomp_unit_0051");
    runtime.register_function(0x088D3CFCu, &recomp_unit_0051, "recomp_unit_0051");
    runtime.register_function(0x088D3D08u, &recomp_unit_0051, "recomp_unit_0051");
    runtime.register_function(0x088D3D14u, &recomp_unit_0051, "recomp_unit_0051");
    runtime.register_function(0x088D3D24u, &recomp_unit_0051, "recomp_unit_0051");
    runtime.register_function(0x088D3D30u, &recomp_unit_0051, "recomp_unit_0051");
    runtime.register_function(0x088D3D40u, &recomp_unit_0051, "recomp_unit_0051");
    runtime.register_function(0x088D3D50u, &recomp_unit_0051, "recomp_unit_0051");
    runtime.register_function(0x088D3D60u, &recomp_unit_0051, "recomp_unit_0051");
    runtime.register_function(0x088D3D70u, &recomp_unit_0051, "recomp_unit_0051");
    runtime.register_function(0x088D3D80u, &recomp_unit_0051, "recomp_unit_0051");
    runtime.register_function(0x088D3D98u, &recomp_unit_0051, "recomp_unit_0051");
    runtime.register_function(0x088D3DA8u, &recomp_unit_0051, "recomp_unit_0051");
    runtime.register_function(0x088D3DB8u, &recomp_unit_0051, "recomp_unit_0051");
    runtime.register_function(0x088D3DC8u, &recomp_unit_0051, "recomp_unit_0051");
    runtime.register_function(0x088D3DD8u, &recomp_unit_0051, "recomp_unit_0051");
    runtime.register_function(0x088D3DE8u, &recomp_unit_0051, "recomp_unit_0051");
    runtime.register_function(0x088D3DF8u, &recomp_unit_0051, "recomp_unit_0051");
    runtime.register_function(0x088D3E08u, &recomp_unit_0051, "recomp_unit_0051");
    runtime.register_function(0x088D3E18u, &recomp_unit_0051, "recomp_unit_0051");
    runtime.register_function(0x088D3E28u, &recomp_unit_0051, "recomp_unit_0051");
    runtime.register_function(0x088D3E38u, &recomp_unit_0051, "recomp_unit_0051");
    runtime.register_function(0x088D3E4Cu, &recomp_unit_0051, "recomp_unit_0051");
    runtime.register_function(0x088D3E5Cu, &recomp_unit_0051, "recomp_unit_0051");
    runtime.register_function(0x088D3E6Cu, &recomp_unit_0051, "recomp_unit_0051");
    runtime.register_function(0x088D3E78u, &recomp_unit_0051, "recomp_unit_0051");
    runtime.register_function(0x088D3E88u, &recomp_unit_0051, "recomp_unit_0051");
    runtime.register_function(0x088D3E98u, &recomp_unit_0051, "recomp_unit_0051");
    runtime.register_function(0x088D3EA8u, &recomp_unit_0051, "recomp_unit_0051");
    runtime.register_function(0x088D3EB8u, &recomp_unit_0051, "recomp_unit_0051");
    runtime.register_function(0x088D3EC4u, &recomp_unit_0051, "recomp_unit_0051");
    runtime.register_function(0x088D3ECCu, &recomp_unit_0051, "recomp_unit_0051");
    runtime.register_function(0x088D3ED4u, &recomp_unit_0051, "recomp_unit_0051");
    runtime.register_function(0x088D3EE4u, &recomp_unit_0051, "recomp_unit_0051");
    runtime.register_function(0x088D3EF4u, &recomp_unit_0051, "recomp_unit_0051");
    runtime.register_function(0x088D3F00u, &recomp_unit_0051, "recomp_unit_0051");
    runtime.register_function(0x088D3F08u, &recomp_unit_0051, "recomp_unit_0051");
    runtime.register_function(0x088D3F24u, &recomp_unit_0051, "recomp_unit_0051");
    runtime.register_function(0x088D3F34u, &recomp_unit_0051, "recomp_unit_0051");
    runtime.register_function(0x088D3F44u, &recomp_unit_0051, "recomp_unit_0051");
    runtime.register_function(0x088D3F54u, &recomp_unit_0051, "recomp_unit_0051");
    runtime.register_function(0x088D3F64u, &recomp_unit_0051, "recomp_unit_0051");
    runtime.register_function(0x088D3F74u, &recomp_unit_0051, "recomp_unit_0051");
    runtime.register_function(0x088D3F84u, &recomp_unit_0051, "recomp_unit_0051");
    runtime.register_function(0x088D3F94u, &recomp_unit_0051, "recomp_unit_0051");
    runtime.register_function(0x088D3FA4u, &recomp_unit_0051, "recomp_unit_0051");
    runtime.register_function(0x088D3FB4u, &recomp_unit_0051, "recomp_unit_0051");
    runtime.register_function(0x088D3FC4u, &recomp_unit_0051, "recomp_unit_0051");
    runtime.register_function(0x088D3FDCu, &recomp_unit_0051, "recomp_unit_0051");
    runtime.register_function(0x088D3FECu, &recomp_unit_0051, "recomp_unit_0051");
    runtime.register_function(0x088D3FFCu, &recomp_unit_0051, "recomp_unit_0051");
}
} // namespace psprecomp
