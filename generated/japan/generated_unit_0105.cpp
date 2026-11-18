#include "psprecomp/runtime.hpp"
#include "generated_units.hpp"
#include <bit>
#include <cmath>
#include <cstdint>
#include <limits>

namespace psprecomp {
static const std::uint16_t kEntryIds_recomp_unit_0105[4091] = {
    1, 0, 0, 2, 0, 3, 0, 0, 0, 0, 0, 0, 4, 0, 0, 0, 5, 0, 0, 0, 0, 0, 6, 0, 0, 0, 0, 0, 0, 0, 0, 7,
    0, 0, 0, 8, 0, 0, 0, 0, 9, 0, 0, 0, 0, 10, 0, 0, 11, 0, 12, 0, 0, 0, 0, 0, 0, 13, 0, 0, 0, 14, 0, 0,
    0, 0, 0, 15, 0, 0, 0, 0, 0, 0, 0, 0, 16, 0, 0, 0, 17, 0, 0, 0, 0, 18, 0, 0, 0, 0, 19, 0, 0, 20, 0, 21,
    0, 0, 0, 0, 0, 0, 22, 0, 0, 0, 23, 0, 0, 0, 0, 0, 24, 0, 0, 0, 0, 0, 0, 0, 0, 25, 0, 0, 0, 26, 0, 0,
    0, 0, 27, 0, 0, 0, 0, 28, 0, 0, 29, 0, 30, 0, 0, 0, 0, 0, 0, 31, 0, 0, 0, 32, 0, 0, 0, 0, 0, 33, 0, 0,
    0, 0, 0, 0, 0, 0, 34, 0, 0, 0, 35, 0, 0, 0, 0, 36, 0, 0, 0, 0, 37, 0, 0, 38, 0, 39, 0, 0, 0, 0, 0, 0,
    40, 0, 0, 0, 41, 0, 0, 0, 0, 0, 42, 0, 0, 0, 0, 0, 0, 0, 0, 43, 0, 0, 0, 44, 0, 0, 0, 0, 45, 0, 0, 0,
    0, 46, 0, 0, 47, 0, 48, 0, 0, 0, 0, 49, 0, 0, 0, 0, 0, 0, 0, 0, 50, 0, 0, 0, 0, 0, 51, 0, 0, 52, 0, 0,
    0, 0, 53, 54, 0, 0, 55, 0, 0, 0, 56, 0, 0, 57, 0, 0, 0, 58, 0, 0, 0, 0, 0, 0, 0, 0, 0, 59, 60, 0, 0, 61,
    62, 0, 0, 63, 0, 0, 0, 0, 64, 0, 0, 0, 65, 0, 0, 0, 0, 0, 66, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 67, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 68, 0, 0, 0, 0, 0, 0, 0, 0, 0, 69, 0, 0, 0,
    70, 0, 0, 0, 0, 0, 71, 0, 0, 0, 0, 0, 0, 0, 0, 0, 72, 0, 0, 0, 73, 0, 0, 0, 0, 74, 0, 0, 0, 0, 0, 75,
    0, 0, 0, 76, 0, 0, 0, 0, 0, 77, 0, 0, 0, 0, 0, 0, 0, 0, 0, 78, 0, 0, 0, 79, 0, 0, 0, 0, 80, 0, 0, 0,
    0, 0, 0, 81, 0, 0, 0, 82, 0, 0, 0, 0, 0, 83, 0, 0, 0, 0, 0, 0, 0, 0, 0, 84, 0, 0, 0, 85, 0, 0, 0, 0,
    86, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 87, 0, 0, 0, 88, 0, 0, 0, 0, 0, 89, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 90, 0, 0, 0, 91, 0, 0, 0, 0, 92, 0, 0, 0, 0, 0, 93, 0, 0, 0, 94, 0, 0, 0, 0, 0, 95, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 96, 0, 0, 0, 97, 0, 0, 0, 0, 98, 0, 0, 0, 0, 0, 0, 99, 0, 0, 0, 100, 0, 0, 0, 0, 0, 101, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 102, 0, 0, 0, 103, 0, 0, 0, 0, 104, 0, 0, 0, 0, 105, 0, 0, 0, 0, 106, 0, 0, 0, 0,
    107, 0, 0, 0, 0, 108, 0, 0, 0, 0, 109, 0, 0, 0, 110, 0, 0, 0, 0, 111, 0, 0, 0, 0, 112, 0, 0, 0, 0, 113, 0, 0,
    114, 0, 0, 0, 115, 0, 0, 0, 0, 0, 0, 0, 0, 0, 116, 0, 0, 0, 117, 0, 0, 0, 0, 0, 118, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 119, 0, 0, 0, 120, 0, 0, 0, 0, 121, 0, 0, 0, 0, 0, 122, 0, 0, 0, 123, 0, 0, 0, 0, 0, 124, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 125, 0, 0, 0, 126, 0, 0, 0, 0, 127, 0, 0, 0, 0, 0, 0, 128, 0, 0, 0, 129, 0, 0, 0, 0, 0, 130,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 131, 0, 0, 0, 132, 0, 0, 0, 0, 133, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 134,
    0, 0, 0, 135, 0, 0, 0, 0, 0, 136, 0, 0, 0, 0, 0, 0, 0, 0, 0, 137, 0, 0, 0, 138, 0, 0, 0, 0, 139, 0, 0, 0,
    0, 0, 140, 0, 0, 0, 141, 0, 0, 0, 0, 0, 142, 0, 0, 0, 0, 0, 0, 0, 0, 0, 143, 0, 0, 0, 144, 0, 0, 0, 0, 145,
    0, 0, 0, 0, 0, 0, 146, 0, 0, 0, 147, 0, 0, 0, 0, 0, 148, 0, 0, 0, 0, 0, 0, 0, 0, 0, 149, 0, 0, 0, 150, 0,
    0, 0, 0, 151, 0, 0, 0, 0, 0, 0, 0, 0, 152, 0, 0, 0, 0, 153, 0, 0, 0, 0, 0, 0, 154, 0, 0, 155, 0, 156, 0, 157,
    0, 0, 158, 0, 0, 159, 0, 160, 0, 161, 0, 0, 0, 162, 0, 0, 0, 0, 0, 0, 0, 163, 0, 0, 0, 0, 0, 0, 164, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 165, 0, 0, 166, 0, 0, 167, 0, 0, 0, 0, 168, 0, 0, 0, 0, 0, 0, 0, 0, 169,
    0, 0, 0, 0, 0, 0, 170, 0, 0, 0, 0, 0, 171, 0, 0, 0, 172, 0, 0, 0, 0, 0, 173, 0, 0, 0, 0, 0, 0, 0, 0, 174,
    0, 0, 0, 175, 0, 0, 0, 0, 176, 0, 0, 0, 0, 0, 177, 0, 0, 0, 178, 0, 0, 0, 0, 0, 179, 0, 0, 0, 0, 0, 0, 0,
    0, 180, 0, 0, 0, 181, 0, 0, 0, 0, 182, 0, 0, 0, 0, 0, 183, 0, 0, 0, 184, 0, 0, 0, 0, 0, 185, 0, 0, 0, 0, 0,
    0, 0, 0, 186, 0, 0, 0, 187, 0, 0, 0, 0, 188, 0, 0, 189, 0, 0, 0, 0, 0, 190, 0, 0, 0, 191, 0, 0, 0, 0, 0, 192,
    0, 0, 0, 0, 0, 0, 0, 0, 193, 0, 0, 0, 194, 0, 0, 0, 0, 195, 0, 0, 0, 0, 0, 196, 0, 0, 0, 197, 0, 0, 0, 0,
    0, 198, 0, 0, 0, 0, 0, 0, 0, 0, 199, 0, 0, 0, 200, 0, 0, 0, 0, 201, 0, 0, 0, 0, 0, 202, 0, 0, 0, 203, 0, 0,
    0, 0, 0, 204, 0, 0, 0, 0, 0, 0, 0, 0, 205, 0, 0, 0, 206, 0, 0, 0, 0, 207, 0, 0, 208, 0, 0, 209, 0, 0, 210, 0,
    0, 211, 0, 0, 212, 0, 0, 213, 0, 0, 0, 0, 214, 0, 0, 0, 215, 0, 0, 0, 0, 0, 0, 216, 0, 0, 0, 217, 0, 0, 0, 0,
    0, 218, 0, 0, 0, 0, 0, 0, 0, 0, 219, 0, 0, 0, 220, 0, 0, 0, 0, 221, 0, 0, 0, 0, 222, 0, 0, 223, 0, 224, 0, 0,
    0, 0, 0, 0, 225, 0, 0, 0, 226, 0, 0, 0, 0, 0, 227, 0, 0, 0, 0, 0, 0, 0, 0, 228, 0, 0, 0, 229, 0, 0, 0, 0,
    230, 0, 0, 0, 0, 231, 0, 0, 232, 0, 233, 0, 0, 0, 0, 0, 0, 234, 0, 0, 0, 235, 0, 0, 0, 0, 0, 236, 0, 0, 0, 0,
    0, 0, 0, 0, 237, 0, 0, 0, 238, 0, 0, 0, 0, 239, 0, 0, 0, 0, 240, 0, 0, 241, 0, 242, 0, 0, 0, 0, 243, 0, 0, 0,
    244, 0, 0, 0, 0, 0, 245, 0, 0, 0, 0, 0, 0, 0, 0, 246, 0, 0, 0, 247, 0, 0, 0, 0, 248, 0, 0, 0, 0, 249, 0, 0,
    250, 0, 251, 0, 0, 252, 0, 0, 253, 0, 0, 0, 254, 0, 0, 255, 0, 0, 256, 0, 0, 0, 0, 0, 257, 0, 0, 0, 0, 0, 0, 0,
    0, 258, 0, 0, 0, 259, 0, 0, 0, 0, 0, 260, 0, 0, 0, 0, 0, 0, 0, 0, 261, 0, 0, 0, 262, 0, 0, 0, 0, 263, 0, 0,
    0, 0, 264, 0, 0, 265, 0, 266, 0, 0, 0, 0, 0, 0, 267, 0, 0, 0, 268, 0, 0, 0, 0, 0, 269, 0, 0, 0, 0, 0, 0, 0,
    0, 270, 0, 0, 0, 271, 0, 0, 0, 0, 272, 0, 0, 0, 0, 273, 0, 0, 274, 0, 275, 0, 0, 0, 0, 0, 0, 276, 0, 0, 0, 277,
    0, 0, 0, 0, 0, 278, 0, 0, 0, 0, 0, 0, 0, 0, 279, 0, 0, 0, 280, 0, 0, 0, 0, 281, 0, 0, 0, 0, 282, 0, 0, 283,
    0, 284, 0, 0, 0, 0, 0, 0, 285, 0, 0, 0, 286, 0, 0, 0, 0, 0, 287, 0, 0, 0, 0, 0, 0, 0, 0, 288, 0, 0, 0, 289,
    0, 0, 0, 0, 290, 0, 0, 0, 0, 291, 0, 0, 292, 0, 293, 0, 0, 0, 0, 0, 0, 294, 0, 0, 0, 295, 0, 0, 0, 0, 0, 296,
    0, 0, 0, 0, 0, 0, 0, 0, 297, 0, 0, 0, 298, 0, 0, 0, 0, 299, 0, 0, 0, 0, 300, 0, 0, 301, 0, 302, 0, 0, 0, 0,
    0, 0, 303, 0, 0, 0, 304, 0, 0, 0, 0, 0, 305, 0, 0, 0, 0, 0, 0, 0, 0, 306, 0, 0, 0, 307, 0, 0, 0, 0, 308, 0,
    0, 0, 0, 309, 0, 0, 310, 0, 311, 0, 312, 0, 0, 313, 314, 0, 0, 0, 0, 315, 0, 0, 0, 0, 0, 0, 0, 0, 316, 0, 0, 0,
    0, 0, 0, 317, 0, 0, 0, 0, 0, 318, 0, 0, 0, 0, 0, 0, 319, 0, 0, 320, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 321,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 322, 0, 0, 323, 0, 0, 324, 0, 325, 326, 0, 327,
    0, 0, 328, 0, 329, 330, 0, 331, 0, 0, 332, 0, 333, 334, 0, 0, 335, 0, 0, 336, 0, 0, 0, 337, 0, 338, 0, 0, 339, 0, 0, 340,
    0, 0, 341, 0, 342, 343, 0, 0, 344, 0, 0, 345, 0, 0, 0, 346, 0, 347, 0, 0, 348, 0, 0, 349, 0, 350, 0, 0, 351, 0, 0, 352,
    0, 0, 0, 353, 0, 0, 0, 0, 0, 0, 354, 0, 0, 0, 0, 0, 0, 0, 355, 0, 0, 0, 0, 356, 0, 357, 0, 358, 0, 0, 359, 0,
    0, 360, 0, 0, 0, 0, 0, 361, 0, 0, 0, 362, 0, 363, 0, 0, 364, 0, 0, 365, 0, 0, 0, 0, 0, 366, 0, 0, 0, 367, 0, 0,
    0, 368, 0, 0, 369, 0, 0, 370, 0, 371, 0, 0, 372, 0, 0, 373, 0, 0, 0, 374, 0, 0, 375, 0, 0, 376, 0, 0, 0, 0, 0, 0,
    377, 378, 0, 0, 379, 0, 0, 380, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 381, 0, 0, 382, 0, 0, 383,
    0, 384, 0, 0, 0, 0, 0, 0, 0, 0, 0, 385, 0, 0, 0, 386, 0, 0, 0, 0, 0, 0, 0, 387, 0, 0, 388, 389, 0, 0, 0, 390,
    0, 0, 391, 0, 0, 0, 392, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 393, 0, 0, 394, 0, 0, 0, 0, 395, 0, 0, 396, 0, 0, 0,
    397, 0, 398, 0, 0, 399, 0, 0, 0, 0, 0, 0, 0, 400, 0, 0, 401, 0, 0, 0, 402, 0, 0, 0, 0, 403, 0, 0, 404, 0, 0, 0,
    405, 406, 0, 0, 407, 408, 0, 0, 409, 0, 0, 410, 0, 0, 0, 411, 0, 0, 0, 0, 0, 412, 0, 0, 0, 0, 413, 0, 0, 414, 0, 415,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 416, 0, 417, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 418, 0, 0, 0, 419, 0, 0,
    0, 0, 0, 420, 0, 0, 0, 0, 0, 0, 0, 0, 0, 421, 0, 0, 0, 422, 0, 0, 0, 0, 423, 0, 0, 0, 0, 0, 424, 0, 0, 0,
    425, 0, 0, 0, 0, 0, 426, 0, 0, 0, 0, 0, 0, 0, 0, 0, 427, 0, 0, 0, 428, 0, 0, 0, 0, 429, 0, 0, 0, 0, 0, 0,
    430, 0, 0, 0, 431, 0, 0, 0, 0, 0, 432, 0, 0, 0, 0, 0, 0, 0, 0, 0, 433, 0, 0, 0, 434, 0, 0, 0, 0, 435, 0, 0,
    0, 0, 0, 0, 0, 436, 0, 0, 437, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 438, 0, 439, 0, 0, 0, 0, 0, 0, 0, 0, 440,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 441, 0, 0, 442, 0, 0, 443, 0, 0, 444, 0, 445, 0, 0, 0, 0, 0, 0, 446, 0, 0, 0,
    0, 447, 0, 0, 448, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 449, 0, 0, 450, 451, 0, 0, 452, 0, 0, 0, 0, 0,
    0, 453, 0, 0, 0, 0, 0, 0, 0, 0, 454, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 455, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 456, 0, 0, 0, 457, 0, 0, 458, 0, 0, 0, 459, 0, 0, 460, 0, 0, 0, 461, 0, 0, 0,
    0, 0, 462, 0, 463, 0, 0, 464, 0, 465, 0, 0, 466, 0, 467, 0, 0, 468, 0, 469, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    470, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 471, 0, 0, 0, 0, 472, 0, 0, 0, 473, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    474, 0, 0, 475, 0, 0, 0, 0, 0, 476, 0, 0, 477, 478, 0, 0, 479, 480, 0, 481, 0, 0, 482, 0, 0, 0, 0, 0, 0, 483, 0, 0,
    484, 485, 0, 0, 486, 487, 0, 488, 0, 489, 0, 0, 0, 0, 490, 0, 0, 0, 491, 0, 0, 0, 0, 492, 0, 0, 0, 493, 0, 0, 0, 0,
    494, 0, 0, 0, 495, 0, 0, 0, 0, 0, 0, 496, 0, 0, 0, 0, 497, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 498, 0, 0, 499, 0, 0, 0, 0, 500, 0, 0, 501, 0, 502, 0, 0, 0, 0, 0, 0, 503, 0, 0, 0, 0, 504, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 505, 0, 0, 506, 0, 0, 0, 0, 507, 0, 0, 508, 0, 509, 0, 0, 0, 0, 0,
    0, 510, 0, 0, 0, 0, 511, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 512, 0, 0, 513, 0, 0, 0, 0, 514, 0, 0, 515, 0, 516,
    0, 0, 0, 0, 0, 0, 517, 0, 0, 0, 0, 518, 0, 0, 519, 0, 0, 0, 520, 0, 0, 0, 0, 0, 521, 0, 0, 0, 0, 0, 0, 522,
    0, 0, 0, 523, 0, 0, 0, 0, 0, 524, 0, 0, 0, 0, 0, 0, 525, 0, 0, 0, 526, 0, 0, 0, 0, 0, 527, 0, 0, 0, 0, 0,
    0, 528, 0, 0, 0, 529, 0, 0, 0, 0, 0, 530, 0, 0, 0, 0, 0, 0, 531, 0, 0, 532, 0, 0, 0, 0, 533, 0, 0, 534, 0, 535,
    0, 0, 0, 0, 0, 0, 536, 0, 0, 0, 0, 537, 0, 0, 0, 0, 538, 0, 0, 539, 0, 0, 0, 0, 540, 0, 0, 541, 0, 542, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 543, 0, 0, 0, 0, 0, 0, 0, 544, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 545, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 546, 0, 0, 0, 547, 0, 0, 548, 0,
    549, 0, 0, 550, 0, 0, 0, 0, 0, 0, 551, 0, 0, 0, 0, 552, 0, 0, 0, 0, 553, 0, 554, 0, 0, 555, 0, 0, 0, 0, 0, 556,
    0, 0, 0, 0, 0, 0, 557, 0, 0, 0, 0, 0, 0, 0, 0, 558, 0, 0, 0, 0, 0, 559, 0, 0, 0, 0, 0, 560, 0, 0, 0, 0,
    0, 561, 0, 0, 0, 0, 0, 0, 562, 0, 0, 0, 0, 0, 563, 0, 0, 0, 0, 564, 0, 0, 565, 0, 0, 0, 0, 0, 0, 566, 0, 0,
    0, 567, 0, 0, 0, 0, 0, 0, 0, 0, 0, 568, 0, 0, 569, 0, 0, 0, 0, 570, 0, 0, 0, 571, 0, 0, 572, 0, 573, 0, 0, 574,
    0, 0, 0, 575, 0, 0, 0, 0, 0, 0, 0, 0, 0, 576, 0, 0, 0, 0, 0, 0, 0, 577, 0, 0, 0, 578, 579, 0, 0, 0, 0, 0,
    0, 580, 0, 0, 581, 0, 0, 0, 0, 582, 0, 0, 583, 0, 584, 0, 0, 0, 585, 0, 0, 0, 0, 586, 0, 0, 587, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 588, 0,
    0, 589, 590, 0, 0, 591, 0, 592, 0, 0, 593, 0, 0, 594, 0, 0, 0, 595, 0, 0, 0, 0, 596, 0, 0, 597, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 598, 0, 0, 599, 600, 0, 0, 601, 0, 602, 0, 0, 603, 0, 0, 604, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 605, 0, 0, 606, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 607, 0, 0, 608, 609, 0, 0, 610, 0, 0, 611, 0, 612,
    0, 0, 613, 0, 614, 0, 0, 0, 0, 615, 0, 0, 0, 0, 616, 0, 0, 617, 0, 0, 618, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 619, 0, 0, 0, 0, 620, 0, 0, 621, 0, 0, 622, 0, 0, 0, 623, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    624, 0, 0, 0, 0, 625, 0, 0, 626, 0, 0, 627, 628, 0, 0, 629, 630, 0, 0, 631, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 632, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 633, 0, 0, 634, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    635, 0, 0, 636, 637, 0, 0, 638, 0, 0, 639, 0, 640, 0, 0, 641, 0, 642, 0, 0, 0, 0, 643, 0, 0, 0, 0, 644, 0, 0, 645, 0,
    0, 646, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 647, 0, 0, 0, 0, 648, 0, 0, 649, 0, 0, 650, 0, 0, 0,
    651, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 652, 0, 0, 0, 0, 653, 0, 0, 654, 0, 0, 655, 656, 0, 0, 657, 658, 0, 0,
    659, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 660, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    661, 0, 0, 0, 662, 663, 0, 0, 664, 0, 0, 665, 0, 0, 666, 0, 0, 0, 0, 667, 0, 0, 0, 0, 668, 0, 0, 669, 0, 0, 0, 670,
    671, 0, 0, 672, 0, 0, 673, 0, 0, 674, 0, 0, 0, 675, 0, 676, 0, 0, 0, 0, 677, 0, 678, 0, 0, 0, 0, 679, 0, 0, 680, 0,
    681, 0, 0, 0, 682, 0, 0, 683, 0, 684, 0, 0, 685, 0, 0, 0, 686, 0, 0, 687, 0, 688, 0, 0, 689, 0, 0, 690, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 691, 0, 0, 0, 0, 692, 0, 0, 0, 0, 693, 0, 0, 694, 0, 0, 0, 0, 0, 695, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 696, 0, 0, 0, 0, 697, 0, 0, 0, 0, 698, 0, 0, 0, 699, 700, 0, 0, 701, 702, 0, 0,
    0, 703, 704, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 705, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 706, 0, 0, 0, 707, 708, 0, 0, 709, 0, 0, 710, 0, 0, 711, 0, 0, 712, 0, 0, 0, 713, 714, 0, 0, 715, 0, 0, 716, 0, 0,
    717, 0, 0, 0, 0, 718, 0, 0, 0, 0, 719, 0, 0, 0, 720, 0, 721, 0, 0, 0, 0, 722, 0, 723, 0, 0, 0, 0, 724, 0, 0, 725,
    0, 726, 0, 0, 0, 727, 0, 0, 728, 0, 729, 0, 730, 0, 731, 0, 0, 732, 0, 0, 733, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 734, 0, 0, 0, 0, 735, 0, 0, 0, 0, 0, 0, 736, 0, 0, 737, 0, 0, 0, 0, 0, 738, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 739, 0, 0, 0, 0, 740, 0, 0, 0, 0, 0, 0, 741, 0, 0, 742, 743, 0, 0, 744, 745, 0, 0, 0,
    746, 747, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 748, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 749, 0, 0, 0, 750, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 751, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 752, 0, 0, 0, 0,
    0, 0, 753, 0, 0, 0, 0, 754, 755, 0, 0, 0, 0, 0, 756, 0, 0, 757, 0, 0, 0, 0, 758, 0, 0, 0, 759, 0, 0, 0, 0, 0,
    760, 0, 0, 0, 0, 0, 0, 0, 0, 0, 761, 0, 0, 0, 762, 0, 0, 0, 0, 0, 763, 0, 0, 0, 0, 0, 0, 0, 0, 0, 764, 0,
    0, 0, 765, 0, 0, 0, 0, 0, 766, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 767, 0, 0, 0, 0, 0, 768, 0, 0, 0,
    769, 0, 0, 0, 0, 770, 771, 0, 0, 772, 0, 0, 773, 0, 0, 0, 0, 774, 0, 0, 0, 775, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 776, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 777, 0, 0, 0, 778, 0, 0, 0, 0, 0, 779, 0, 0, 0, 780, 0, 0,
    0, 0, 0, 0, 781, 0, 0, 0, 0, 0, 782, 0, 0, 0, 0, 0, 0, 0, 0, 0, 783, 0, 0, 784, 0, 785, 0, 0, 0, 0, 0, 0,
    0, 0, 786, 0, 0, 0, 0, 0, 787, 0, 0, 0, 0, 0, 788, 0, 0, 0, 0, 0, 789, 0, 0, 0, 0, 790, 0, 0, 0, 791, 0, 0,
    0, 0, 0, 0, 792, 0, 793, 0, 0, 794, 0, 0, 0, 795, 0, 0, 796, 0, 0, 0, 0, 0, 0, 0, 0, 0, 797, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 798, 0, 0, 0, 799, 0, 0, 0, 0, 0, 0, 800, 0, 0, 0, 801, 0, 0, 0, 0, 0, 0, 802, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 803, 0, 0, 0, 0, 0, 804, 0, 805, 0, 0, 0, 0, 806, 0, 0, 0, 0, 807, 808,
};
void recomp_unit_0105_entry(Runtime &rt, AllegrexContext &ctx, std::uint16_t direct_entry_id, GuestMemory::AotFastView &aot_mem) {
    std::uint32_t jump_target = 0u;
    std::uint32_t local_transfers = 0u;
    std::uint32_t local_pc = ctx.pc;
    std::uint32_t entry_id = direct_entry_id;
LOCAL_DISPATCH:
    {
    if (entry_id == 0u) {
        const std::uint32_t entry_delta = local_pc - 0x089A8000u;
        entry_id = (entry_delta < 16364u && (entry_delta & 3u) == 0u) ? kEntryIds_recomp_unit_0105[entry_delta >> 2u] : 0u;
    }
    switch (entry_id) {
    case 1u: goto L_089A8000;
    case 2u: goto L_089A800C;
    case 3u: goto L_089A8014;
    case 4u: goto L_089A8030;
    case 5u: goto L_089A8040;
    case 6u: goto L_089A8058;
    case 7u: goto L_089A807C;
    case 8u: goto L_089A808C;
    case 9u: goto L_089A80A0;
    case 10u: goto L_089A80B4;
    case 11u: goto L_089A80C0;
    case 12u: goto L_089A80C8;
    case 13u: goto L_089A80E4;
    case 14u: goto L_089A80F4;
    case 15u: goto L_089A810C;
    case 16u: goto L_089A8130;
    case 17u: goto L_089A8140;
    case 18u: goto L_089A8154;
    case 19u: goto L_089A8168;
    case 20u: goto L_089A8174;
    case 21u: goto L_089A817C;
    case 22u: goto L_089A8198;
    case 23u: goto L_089A81A8;
    case 24u: goto L_089A81C0;
    case 25u: goto L_089A81E4;
    case 26u: goto L_089A81F4;
    case 27u: goto L_089A8208;
    case 28u: goto L_089A821C;
    case 29u: goto L_089A8228;
    case 30u: goto L_089A8230;
    case 31u: goto L_089A824C;
    case 32u: goto L_089A825C;
    case 33u: goto L_089A8274;
    case 34u: goto L_089A8298;
    case 35u: goto L_089A82A8;
    case 36u: goto L_089A82BC;
    case 37u: goto L_089A82D0;
    case 38u: goto L_089A82DC;
    case 39u: goto L_089A82E4;
    case 40u: goto L_089A8300;
    case 41u: goto L_089A8310;
    case 42u: goto L_089A8328;
    case 43u: goto L_089A834C;
    case 44u: goto L_089A835C;
    case 45u: goto L_089A8370;
    case 46u: goto L_089A8384;
    case 47u: goto L_089A8390;
    case 48u: goto L_089A8398;
    case 49u: goto L_089A83AC;
    case 50u: goto L_089A83D0;
    case 51u: goto L_089A83E8;
    case 52u: goto L_089A83F4;
    case 53u: goto L_089A8408;
    case 54u: goto L_089A840C;
    case 55u: goto L_089A8418;
    case 56u: goto L_089A8428;
    case 57u: goto L_089A8434;
    case 58u: goto L_089A8444;
    case 59u: goto L_089A846C;
    case 60u: goto L_089A8470;
    case 61u: goto L_089A847C;
    case 62u: goto L_089A8480;
    case 63u: goto L_089A848C;
    case 64u: goto L_089A84A0;
    case 65u: goto L_089A84B0;
    case 66u: goto L_089A84C8;
    case 67u: goto L_089A84F8;
    case 68u: goto L_089A8548;
    case 69u: goto L_089A8570;
    case 70u: goto L_089A8580;
    case 71u: goto L_089A8598;
    case 72u: goto L_089A85C0;
    case 73u: goto L_089A85D0;
    case 74u: goto L_089A85E4;
    case 75u: goto L_089A85FC;
    case 76u: goto L_089A860C;
    case 77u: goto L_089A8624;
    case 78u: goto L_089A864C;
    case 79u: goto L_089A865C;
    case 80u: goto L_089A8670;
    case 81u: goto L_089A868C;
    case 82u: goto L_089A869C;
    case 83u: goto L_089A86B4;
    case 84u: goto L_089A86DC;
    case 85u: goto L_089A86EC;
    case 86u: goto L_089A8700;
    case 87u: goto L_089A8734;
    case 88u: goto L_089A8744;
    case 89u: goto L_089A875C;
    case 90u: goto L_089A8784;
    case 91u: goto L_089A8794;
    case 92u: goto L_089A87A8;
    case 93u: goto L_089A87C0;
    case 94u: goto L_089A87D0;
    case 95u: goto L_089A87E8;
    case 96u: goto L_089A8810;
    case 97u: goto L_089A8820;
    case 98u: goto L_089A8834;
    case 99u: goto L_089A8850;
    case 100u: goto L_089A8860;
    case 101u: goto L_089A8878;
    case 102u: goto L_089A88A0;
    case 103u: goto L_089A88B0;
    case 104u: goto L_089A88C4;
    case 105u: goto L_089A88D8;
    case 106u: goto L_089A88EC;
    case 107u: goto L_089A8900;
    case 108u: goto L_089A8914;
    case 109u: goto L_089A8928;
    case 110u: goto L_089A8938;
    case 111u: goto L_089A894C;
    case 112u: goto L_089A8960;
    case 113u: goto L_089A8974;
    case 114u: goto L_089A8980;
    case 115u: goto L_089A8990;
    case 116u: goto L_089A89B8;
    case 117u: goto L_089A89C8;
    case 118u: goto L_089A89E0;
    case 119u: goto L_089A8A08;
    case 120u: goto L_089A8A18;
    case 121u: goto L_089A8A2C;
    case 122u: goto L_089A8A44;
    case 123u: goto L_089A8A54;
    case 124u: goto L_089A8A6C;
    case 125u: goto L_089A8A94;
    case 126u: goto L_089A8AA4;
    case 127u: goto L_089A8AB8;
    case 128u: goto L_089A8AD4;
    case 129u: goto L_089A8AE4;
    case 130u: goto L_089A8AFC;
    case 131u: goto L_089A8B24;
    case 132u: goto L_089A8B34;
    case 133u: goto L_089A8B48;
    case 134u: goto L_089A8B7C;
    case 135u: goto L_089A8B8C;
    case 136u: goto L_089A8BA4;
    case 137u: goto L_089A8BCC;
    case 138u: goto L_089A8BDC;
    case 139u: goto L_089A8BF0;
    case 140u: goto L_089A8C08;
    case 141u: goto L_089A8C18;
    case 142u: goto L_089A8C30;
    case 143u: goto L_089A8C58;
    case 144u: goto L_089A8C68;
    case 145u: goto L_089A8C7C;
    case 146u: goto L_089A8C98;
    case 147u: goto L_089A8CA8;
    case 148u: goto L_089A8CC0;
    case 149u: goto L_089A8CE8;
    case 150u: goto L_089A8CF8;
    case 151u: goto L_089A8D0C;
    case 152u: goto L_089A8D30;
    case 153u: goto L_089A8D44;
    case 154u: goto L_089A8D60;
    case 155u: goto L_089A8D6C;
    case 156u: goto L_089A8D74;
    case 157u: goto L_089A8D7C;
    case 158u: goto L_089A8D88;
    case 159u: goto L_089A8D94;
    case 160u: goto L_089A8D9C;
    case 161u: goto L_089A8DA4;
    case 162u: goto L_089A8DB4;
    case 163u: goto L_089A8DD4;
    case 164u: goto L_089A8DF0;
    case 165u: goto L_089A8E2C;
    case 166u: goto L_089A8E38;
    case 167u: goto L_089A8E44;
    case 168u: goto L_089A8E58;
    case 169u: goto L_089A8E7C;
    case 170u: goto L_089A8E98;
    case 171u: goto L_089A8EB0;
    case 172u: goto L_089A8EC0;
    case 173u: goto L_089A8ED8;
    case 174u: goto L_089A8EFC;
    case 175u: goto L_089A8F0C;
    case 176u: goto L_089A8F20;
    case 177u: goto L_089A8F38;
    case 178u: goto L_089A8F48;
    case 179u: goto L_089A8F60;
    case 180u: goto L_089A8F84;
    case 181u: goto L_089A8F94;
    case 182u: goto L_089A8FA8;
    case 183u: goto L_089A8FC0;
    case 184u: goto L_089A8FD0;
    case 185u: goto L_089A8FE8;
    case 186u: goto L_089A900C;
    case 187u: goto L_089A901C;
    case 188u: goto L_089A9030;
    case 189u: goto L_089A903C;
    case 190u: goto L_089A9054;
    case 191u: goto L_089A9064;
    case 192u: goto L_089A907C;
    case 193u: goto L_089A90A0;
    case 194u: goto L_089A90B0;
    case 195u: goto L_089A90C4;
    case 196u: goto L_089A90DC;
    case 197u: goto L_089A90EC;
    case 198u: goto L_089A9104;
    case 199u: goto L_089A9128;
    case 200u: goto L_089A9138;
    case 201u: goto L_089A914C;
    case 202u: goto L_089A9164;
    case 203u: goto L_089A9174;
    case 204u: goto L_089A918C;
    case 205u: goto L_089A91B0;
    case 206u: goto L_089A91C0;
    case 207u: goto L_089A91D4;
    case 208u: goto L_089A91E0;
    case 209u: goto L_089A91EC;
    case 210u: goto L_089A91F8;
    case 211u: goto L_089A9204;
    case 212u: goto L_089A9210;
    case 213u: goto L_089A921C;
    case 214u: goto L_089A9230;
    case 215u: goto L_089A9240;
    case 216u: goto L_089A925C;
    case 217u: goto L_089A926C;
    case 218u: goto L_089A9284;
    case 219u: goto L_089A92A8;
    case 220u: goto L_089A92B8;
    case 221u: goto L_089A92CC;
    case 222u: goto L_089A92E0;
    case 223u: goto L_089A92EC;
    case 224u: goto L_089A92F4;
    case 225u: goto L_089A9310;
    case 226u: goto L_089A9320;
    case 227u: goto L_089A9338;
    case 228u: goto L_089A935C;
    case 229u: goto L_089A936C;
    case 230u: goto L_089A9380;
    case 231u: goto L_089A9394;
    case 232u: goto L_089A93A0;
    case 233u: goto L_089A93A8;
    case 234u: goto L_089A93C4;
    case 235u: goto L_089A93D4;
    case 236u: goto L_089A93EC;
    case 237u: goto L_089A9410;
    case 238u: goto L_089A9420;
    case 239u: goto L_089A9434;
    case 240u: goto L_089A9448;
    case 241u: goto L_089A9454;
    case 242u: goto L_089A945C;
    case 243u: goto L_089A9470;
    case 244u: goto L_089A9480;
    case 245u: goto L_089A9498;
    case 246u: goto L_089A94BC;
    case 247u: goto L_089A94CC;
    case 248u: goto L_089A94E0;
    case 249u: goto L_089A94F4;
    case 250u: goto L_089A9500;
    case 251u: goto L_089A9508;
    case 252u: goto L_089A9514;
    case 253u: goto L_089A9520;
    case 254u: goto L_089A9530;
    case 255u: goto L_089A953C;
    case 256u: goto L_089A9548;
    case 257u: goto L_089A9560;
    case 258u: goto L_089A9584;
    case 259u: goto L_089A9594;
    case 260u: goto L_089A95AC;
    case 261u: goto L_089A95D0;
    case 262u: goto L_089A95E0;
    case 263u: goto L_089A95F4;
    case 264u: goto L_089A9608;
    case 265u: goto L_089A9614;
    case 266u: goto L_089A961C;
    case 267u: goto L_089A9638;
    case 268u: goto L_089A9648;
    case 269u: goto L_089A9660;
    case 270u: goto L_089A9684;
    case 271u: goto L_089A9694;
    case 272u: goto L_089A96A8;
    case 273u: goto L_089A96BC;
    case 274u: goto L_089A96C8;
    case 275u: goto L_089A96D0;
    case 276u: goto L_089A96EC;
    case 277u: goto L_089A96FC;
    case 278u: goto L_089A9714;
    case 279u: goto L_089A9738;
    case 280u: goto L_089A9748;
    case 281u: goto L_089A975C;
    case 282u: goto L_089A9770;
    case 283u: goto L_089A977C;
    case 284u: goto L_089A9784;
    case 285u: goto L_089A97A0;
    case 286u: goto L_089A97B0;
    case 287u: goto L_089A97C8;
    case 288u: goto L_089A97EC;
    case 289u: goto L_089A97FC;
    case 290u: goto L_089A9810;
    case 291u: goto L_089A9824;
    case 292u: goto L_089A9830;
    case 293u: goto L_089A9838;
    case 294u: goto L_089A9854;
    case 295u: goto L_089A9864;
    case 296u: goto L_089A987C;
    case 297u: goto L_089A98A0;
    case 298u: goto L_089A98B0;
    case 299u: goto L_089A98C4;
    case 300u: goto L_089A98D8;
    case 301u: goto L_089A98E4;
    case 302u: goto L_089A98EC;
    case 303u: goto L_089A9908;
    case 304u: goto L_089A9918;
    case 305u: goto L_089A9930;
    case 306u: goto L_089A9954;
    case 307u: goto L_089A9964;
    case 308u: goto L_089A9978;
    case 309u: goto L_089A998C;
    case 310u: goto L_089A9998;
    case 311u: goto L_089A99A0;
    case 312u: goto L_089A99A8;
    case 313u: goto L_089A99B4;
    case 314u: goto L_089A99B8;
    case 315u: goto L_089A99CC;
    case 316u: goto L_089A99F0;
    case 317u: goto L_089A9A0C;
    case 318u: goto L_089A9A24;
    case 319u: goto L_089A9A40;
    case 320u: goto L_089A9A4C;
    case 321u: goto L_089A9A7C;
    case 322u: goto L_089A9AD0;
    case 323u: goto L_089A9ADC;
    case 324u: goto L_089A9AE8;
    case 325u: goto L_089A9AF0;
    case 326u: goto L_089A9AF4;
    case 327u: goto L_089A9AFC;
    case 328u: goto L_089A9B08;
    case 329u: goto L_089A9B10;
    case 330u: goto L_089A9B14;
    case 331u: goto L_089A9B1C;
    case 332u: goto L_089A9B28;
    case 333u: goto L_089A9B30;
    case 334u: goto L_089A9B34;
    case 335u: goto L_089A9B40;
    case 336u: goto L_089A9B4C;
    case 337u: goto L_089A9B5C;
    case 338u: goto L_089A9B64;
    case 339u: goto L_089A9B70;
    case 340u: goto L_089A9B7C;
    case 341u: goto L_089A9B88;
    case 342u: goto L_089A9B90;
    case 343u: goto L_089A9B94;
    case 344u: goto L_089A9BA0;
    case 345u: goto L_089A9BAC;
    case 346u: goto L_089A9BBC;
    case 347u: goto L_089A9BC4;
    case 348u: goto L_089A9BD0;
    case 349u: goto L_089A9BDC;
    case 350u: goto L_089A9BE4;
    case 351u: goto L_089A9BF0;
    case 352u: goto L_089A9BFC;
    case 353u: goto L_089A9C0C;
    case 354u: goto L_089A9C28;
    case 355u: goto L_089A9C48;
    case 356u: goto L_089A9C5C;
    case 357u: goto L_089A9C64;
    case 358u: goto L_089A9C6C;
    case 359u: goto L_089A9C78;
    case 360u: goto L_089A9C84;
    case 361u: goto L_089A9C9C;
    case 362u: goto L_089A9CAC;
    case 363u: goto L_089A9CB4;
    case 364u: goto L_089A9CC0;
    case 365u: goto L_089A9CCC;
    case 366u: goto L_089A9CE4;
    case 367u: goto L_089A9CF4;
    case 368u: goto L_089A9D04;
    case 369u: goto L_089A9D10;
    case 370u: goto L_089A9D1C;
    case 371u: goto L_089A9D24;
    case 372u: goto L_089A9D30;
    case 373u: goto L_089A9D3C;
    case 374u: goto L_089A9D4C;
    case 375u: goto L_089A9D58;
    case 376u: goto L_089A9D64;
    case 377u: goto L_089A9D80;
    case 378u: goto L_089A9D84;
    case 379u: goto L_089A9D90;
    case 380u: goto L_089A9D9C;
    case 381u: goto L_089A9DE4;
    case 382u: goto L_089A9DF0;
    case 383u: goto L_089A9DFC;
    case 384u: goto L_089A9E04;
    case 385u: goto L_089A9E2C;
    case 386u: goto L_089A9E3C;
    case 387u: goto L_089A9E5C;
    case 388u: goto L_089A9E68;
    case 389u: goto L_089A9E6C;
    case 390u: goto L_089A9E7C;
    case 391u: goto L_089A9E88;
    case 392u: goto L_089A9E98;
    case 393u: goto L_089A9EC4;
    case 394u: goto L_089A9ED0;
    case 395u: goto L_089A9EE4;
    case 396u: goto L_089A9EF0;
    case 397u: goto L_089A9F00;
    case 398u: goto L_089A9F08;
    case 399u: goto L_089A9F14;
    case 400u: goto L_089A9F34;
    case 401u: goto L_089A9F40;
    case 402u: goto L_089A9F50;
    case 403u: goto L_089A9F64;
    case 404u: goto L_089A9F70;
    case 405u: goto L_089A9F80;
    case 406u: goto L_089A9F84;
    case 407u: goto L_089A9F90;
    case 408u: goto L_089A9F94;
    case 409u: goto L_089A9FA0;
    case 410u: goto L_089A9FAC;
    case 411u: goto L_089A9FBC;
    case 412u: goto L_089A9FD4;
    case 413u: goto L_089A9FE8;
    case 414u: goto L_089A9FF4;
    case 415u: goto L_089A9FFC;
    case 416u: goto L_089AA02C;
    case 417u: goto L_089AA034;
    case 418u: goto L_089AA064;
    case 419u: goto L_089AA074;
    case 420u: goto L_089AA08C;
    case 421u: goto L_089AA0B4;
    case 422u: goto L_089AA0C4;
    case 423u: goto L_089AA0D8;
    case 424u: goto L_089AA0F0;
    case 425u: goto L_089AA100;
    case 426u: goto L_089AA118;
    case 427u: goto L_089AA140;
    case 428u: goto L_089AA150;
    case 429u: goto L_089AA164;
    case 430u: goto L_089AA180;
    case 431u: goto L_089AA190;
    case 432u: goto L_089AA1A8;
    case 433u: goto L_089AA1D0;
    case 434u: goto L_089AA1E0;
    case 435u: goto L_089AA1F4;
    case 436u: goto L_089AA214;
    case 437u: goto L_089AA220;
    case 438u: goto L_089AA250;
    case 439u: goto L_089AA258;
    case 440u: goto L_089AA27C;
    case 441u: goto L_089AA2A8;
    case 442u: goto L_089AA2B4;
    case 443u: goto L_089AA2C0;
    case 444u: goto L_089AA2CC;
    case 445u: goto L_089AA2D4;
    case 446u: goto L_089AA2F0;
    case 447u: goto L_089AA304;
    case 448u: goto L_089AA310;
    case 449u: goto L_089AA34C;
    case 450u: goto L_089AA358;
    case 451u: goto L_089AA35C;
    case 452u: goto L_089AA368;
    case 453u: goto L_089AA384;
    case 454u: goto L_089AA3A8;
    case 455u: goto L_089AA3D8;
    case 456u: goto L_089AA428;
    case 457u: goto L_089AA438;
    case 458u: goto L_089AA444;
    case 459u: goto L_089AA454;
    case 460u: goto L_089AA460;
    case 461u: goto L_089AA470;
    case 462u: goto L_089AA488;
    case 463u: goto L_089AA490;
    case 464u: goto L_089AA49C;
    case 465u: goto L_089AA4A4;
    case 466u: goto L_089AA4B0;
    case 467u: goto L_089AA4B8;
    case 468u: goto L_089AA4C4;
    case 469u: goto L_089AA4CC;
    case 470u: goto L_089AA500;
    case 471u: goto L_089AA530;
    case 472u: goto L_089AA544;
    case 473u: goto L_089AA554;
    case 474u: goto L_089AA580;
    case 475u: goto L_089AA58C;
    case 476u: goto L_089AA5A4;
    case 477u: goto L_089AA5B0;
    case 478u: goto L_089AA5B4;
    case 479u: goto L_089AA5C0;
    case 480u: goto L_089AA5C4;
    case 481u: goto L_089AA5CC;
    case 482u: goto L_089AA5D8;
    case 483u: goto L_089AA5F4;
    case 484u: goto L_089AA600;
    case 485u: goto L_089AA604;
    case 486u: goto L_089AA610;
    case 487u: goto L_089AA614;
    case 488u: goto L_089AA61C;
    case 489u: goto L_089AA624;
    case 490u: goto L_089AA638;
    case 491u: goto L_089AA648;
    case 492u: goto L_089AA65C;
    case 493u: goto L_089AA66C;
    case 494u: goto L_089AA680;
    case 495u: goto L_089AA690;
    case 496u: goto L_089AA6AC;
    case 497u: goto L_089AA6C0;
    case 498u: goto L_089AA708;
    case 499u: goto L_089AA714;
    case 500u: goto L_089AA728;
    case 501u: goto L_089AA734;
    case 502u: goto L_089AA73C;
    case 503u: goto L_089AA758;
    case 504u: goto L_089AA76C;
    case 505u: goto L_089AA7B4;
    case 506u: goto L_089AA7C0;
    case 507u: goto L_089AA7D4;
    case 508u: goto L_089AA7E0;
    case 509u: goto L_089AA7E8;
    case 510u: goto L_089AA804;
    case 511u: goto L_089AA818;
    case 512u: goto L_089AA848;
    case 513u: goto L_089AA854;
    case 514u: goto L_089AA868;
    case 515u: goto L_089AA874;
    case 516u: goto L_089AA87C;
    case 517u: goto L_089AA898;
    case 518u: goto L_089AA8AC;
    case 519u: goto L_089AA8B8;
    case 520u: goto L_089AA8C8;
    case 521u: goto L_089AA8E0;
    case 522u: goto L_089AA8FC;
    case 523u: goto L_089AA90C;
    case 524u: goto L_089AA924;
    case 525u: goto L_089AA940;
    case 526u: goto L_089AA950;
    case 527u: goto L_089AA968;
    case 528u: goto L_089AA984;
    case 529u: goto L_089AA994;
    case 530u: goto L_089AA9AC;
    case 531u: goto L_089AA9C8;
    case 532u: goto L_089AA9D4;
    case 533u: goto L_089AA9E8;
    case 534u: goto L_089AA9F4;
    case 535u: goto L_089AA9FC;
    case 536u: goto L_089AAA18;
    case 537u: goto L_089AAA2C;
    case 538u: goto L_089AAA40;
    case 539u: goto L_089AAA4C;
    case 540u: goto L_089AAA60;
    case 541u: goto L_089AAA6C;
    case 542u: goto L_089AAA74;
    case 543u: goto L_089AAAB0;
    case 544u: goto L_089AAAD0;
    case 545u: goto L_089AAB10;
    case 546u: goto L_089AAB5C;
    case 547u: goto L_089AAB6C;
    case 548u: goto L_089AAB78;
    case 549u: goto L_089AAB80;
    case 550u: goto L_089AAB8C;
    case 551u: goto L_089AABA8;
    case 552u: goto L_089AABBC;
    case 553u: goto L_089AABD0;
    case 554u: goto L_089AABD8;
    case 555u: goto L_089AABE4;
    case 556u: goto L_089AABFC;
    case 557u: goto L_089AAC18;
    case 558u: goto L_089AAC3C;
    case 559u: goto L_089AAC54;
    case 560u: goto L_089AAC6C;
    case 561u: goto L_089AAC84;
    case 562u: goto L_089AACA0;
    case 563u: goto L_089AACB8;
    case 564u: goto L_089AACCC;
    case 565u: goto L_089AACD8;
    case 566u: goto L_089AACF4;
    case 567u: goto L_089AAD04;
    case 568u: goto L_089AAD2C;
    case 569u: goto L_089AAD38;
    case 570u: goto L_089AAD4C;
    case 571u: goto L_089AAD5C;
    case 572u: goto L_089AAD68;
    case 573u: goto L_089AAD70;
    case 574u: goto L_089AAD7C;
    case 575u: goto L_089AAD8C;
    case 576u: goto L_089AADB4;
    case 577u: goto L_089AADD4;
    case 578u: goto L_089AADE4;
    case 579u: goto L_089AADE8;
    case 580u: goto L_089AAE04;
    case 581u: goto L_089AAE10;
    case 582u: goto L_089AAE24;
    case 583u: goto L_089AAE30;
    case 584u: goto L_089AAE38;
    case 585u: goto L_089AAE48;
    case 586u: goto L_089AAE5C;
    case 587u: goto L_089AAE68;
    case 588u: goto L_089AAEF8;
    case 589u: goto L_089AAF04;
    case 590u: goto L_089AAF08;
    case 591u: goto L_089AAF14;
    case 592u: goto L_089AAF1C;
    case 593u: goto L_089AAF28;
    case 594u: goto L_089AAF34;
    case 595u: goto L_089AAF44;
    case 596u: goto L_089AAF58;
    case 597u: goto L_089AAF64;
    case 598u: goto L_089AAF94;
    case 599u: goto L_089AAFA0;
    case 600u: goto L_089AAFA4;
    case 601u: goto L_089AAFB0;
    case 602u: goto L_089AAFB8;
    case 603u: goto L_089AAFC4;
    case 604u: goto L_089AAFD0;
    case 605u: goto L_089AB014;
    case 606u: goto L_089AB020;
    case 607u: goto L_089AB04C;
    case 608u: goto L_089AB058;
    case 609u: goto L_089AB05C;
    case 610u: goto L_089AB068;
    case 611u: goto L_089AB074;
    case 612u: goto L_089AB07C;
    case 613u: goto L_089AB088;
    case 614u: goto L_089AB090;
    case 615u: goto L_089AB0A4;
    case 616u: goto L_089AB0B8;
    case 617u: goto L_089AB0C4;
    case 618u: goto L_089AB0D0;
    case 619u: goto L_089AB110;
    case 620u: goto L_089AB124;
    case 621u: goto L_089AB130;
    case 622u: goto L_089AB13C;
    case 623u: goto L_089AB14C;
    case 624u: goto L_089AB180;
    case 625u: goto L_089AB194;
    case 626u: goto L_089AB1A0;
    case 627u: goto L_089AB1AC;
    case 628u: goto L_089AB1B0;
    case 629u: goto L_089AB1BC;
    case 630u: goto L_089AB1C0;
    case 631u: goto L_089AB1CC;
    case 632u: goto L_089AB204;
    case 633u: goto L_089AB248;
    case 634u: goto L_089AB254;
    case 635u: goto L_089AB280;
    case 636u: goto L_089AB28C;
    case 637u: goto L_089AB290;
    case 638u: goto L_089AB29C;
    case 639u: goto L_089AB2A8;
    case 640u: goto L_089AB2B0;
    case 641u: goto L_089AB2BC;
    case 642u: goto L_089AB2C4;
    case 643u: goto L_089AB2D8;
    case 644u: goto L_089AB2EC;
    case 645u: goto L_089AB2F8;
    case 646u: goto L_089AB304;
    case 647u: goto L_089AB344;
    case 648u: goto L_089AB358;
    case 649u: goto L_089AB364;
    case 650u: goto L_089AB370;
    case 651u: goto L_089AB380;
    case 652u: goto L_089AB3B4;
    case 653u: goto L_089AB3C8;
    case 654u: goto L_089AB3D4;
    case 655u: goto L_089AB3E0;
    case 656u: goto L_089AB3E4;
    case 657u: goto L_089AB3F0;
    case 658u: goto L_089AB3F4;
    case 659u: goto L_089AB400;
    case 660u: goto L_089AB438;
    case 661u: goto L_089AB480;
    case 662u: goto L_089AB490;
    case 663u: goto L_089AB494;
    case 664u: goto L_089AB4A0;
    case 665u: goto L_089AB4AC;
    case 666u: goto L_089AB4B8;
    case 667u: goto L_089AB4CC;
    case 668u: goto L_089AB4E0;
    case 669u: goto L_089AB4EC;
    case 670u: goto L_089AB4FC;
    case 671u: goto L_089AB500;
    case 672u: goto L_089AB50C;
    case 673u: goto L_089AB518;
    case 674u: goto L_089AB524;
    case 675u: goto L_089AB534;
    case 676u: goto L_089AB53C;
    case 677u: goto L_089AB550;
    case 678u: goto L_089AB558;
    case 679u: goto L_089AB56C;
    case 680u: goto L_089AB578;
    case 681u: goto L_089AB580;
    case 682u: goto L_089AB590;
    case 683u: goto L_089AB59C;
    case 684u: goto L_089AB5A4;
    case 685u: goto L_089AB5B0;
    case 686u: goto L_089AB5C0;
    case 687u: goto L_089AB5CC;
    case 688u: goto L_089AB5D4;
    case 689u: goto L_089AB5E0;
    case 690u: goto L_089AB5EC;
    case 691u: goto L_089AB624;
    case 692u: goto L_089AB638;
    case 693u: goto L_089AB64C;
    case 694u: goto L_089AB658;
    case 695u: goto L_089AB670;
    case 696u: goto L_089AB6A8;
    case 697u: goto L_089AB6BC;
    case 698u: goto L_089AB6D0;
    case 699u: goto L_089AB6E0;
    case 700u: goto L_089AB6E4;
    case 701u: goto L_089AB6F0;
    case 702u: goto L_089AB6F4;
    case 703u: goto L_089AB704;
    case 704u: goto L_089AB708;
    case 705u: goto L_089AB73C;
    case 706u: goto L_089AB784;
    case 707u: goto L_089AB794;
    case 708u: goto L_089AB798;
    case 709u: goto L_089AB7A4;
    case 710u: goto L_089AB7B0;
    case 711u: goto L_089AB7BC;
    case 712u: goto L_089AB7C8;
    case 713u: goto L_089AB7D8;
    case 714u: goto L_089AB7DC;
    case 715u: goto L_089AB7E8;
    case 716u: goto L_089AB7F4;
    case 717u: goto L_089AB800;
    case 718u: goto L_089AB814;
    case 719u: goto L_089AB828;
    case 720u: goto L_089AB838;
    case 721u: goto L_089AB840;
    case 722u: goto L_089AB854;
    case 723u: goto L_089AB85C;
    case 724u: goto L_089AB870;
    case 725u: goto L_089AB87C;
    case 726u: goto L_089AB884;
    case 727u: goto L_089AB894;
    case 728u: goto L_089AB8A0;
    case 729u: goto L_089AB8A8;
    case 730u: goto L_089AB8B0;
    case 731u: goto L_089AB8B8;
    case 732u: goto L_089AB8C4;
    case 733u: goto L_089AB8D0;
    case 734u: goto L_089AB90C;
    case 735u: goto L_089AB920;
    case 736u: goto L_089AB93C;
    case 737u: goto L_089AB948;
    case 738u: goto L_089AB960;
    case 739u: goto L_089AB9A0;
    case 740u: goto L_089AB9B4;
    case 741u: goto L_089AB9D0;
    case 742u: goto L_089AB9DC;
    case 743u: goto L_089AB9E0;
    case 744u: goto L_089AB9EC;
    case 745u: goto L_089AB9F0;
    case 746u: goto L_089ABA00;
    case 747u: goto L_089ABA04;
    case 748u: goto L_089ABA38;
    case 749u: goto L_089ABA64;
    case 750u: goto L_089ABA74;
    case 751u: goto L_089ABAB8;
    case 752u: goto L_089ABAEC;
    case 753u: goto L_089ABB08;
    case 754u: goto L_089ABB1C;
    case 755u: goto L_089ABB20;
    case 756u: goto L_089ABB38;
    case 757u: goto L_089ABB44;
    case 758u: goto L_089ABB58;
    case 759u: goto L_089ABB68;
    case 760u: goto L_089ABB80;
    case 761u: goto L_089ABBA8;
    case 762u: goto L_089ABBB8;
    case 763u: goto L_089ABBD0;
    case 764u: goto L_089ABBF8;
    case 765u: goto L_089ABC08;
    case 766u: goto L_089ABC20;
    case 767u: goto L_089ABC58;
    case 768u: goto L_089ABC70;
    case 769u: goto L_089ABC80;
    case 770u: goto L_089ABC94;
    case 771u: goto L_089ABC98;
    case 772u: goto L_089ABCA4;
    case 773u: goto L_089ABCB0;
    case 774u: goto L_089ABCC4;
    case 775u: goto L_089ABCD4;
    case 776u: goto L_089ABD08;
    case 777u: goto L_089ABD3C;
    case 778u: goto L_089ABD4C;
    case 779u: goto L_089ABD64;
    case 780u: goto L_089ABD74;
    case 781u: goto L_089ABD90;
    case 782u: goto L_089ABDA8;
    case 783u: goto L_089ABDD0;
    case 784u: goto L_089ABDDC;
    case 785u: goto L_089ABDE4;
    case 786u: goto L_089ABE08;
    case 787u: goto L_089ABE20;
    case 788u: goto L_089ABE38;
    case 789u: goto L_089ABE50;
    case 790u: goto L_089ABE64;
    case 791u: goto L_089ABE74;
    case 792u: goto L_089ABE90;
    case 793u: goto L_089ABE98;
    case 794u: goto L_089ABEA4;
    case 795u: goto L_089ABEB4;
    case 796u: goto L_089ABEC0;
    case 797u: goto L_089ABEE8;
    case 798u: goto L_089ABF1C;
    case 799u: goto L_089ABF2C;
    case 800u: goto L_089ABF48;
    case 801u: goto L_089ABF58;
    case 802u: goto L_089ABF74;
    case 803u: goto L_089ABF9C;
    case 804u: goto L_089ABFB4;
    case 805u: goto L_089ABFBC;
    case 806u: goto L_089ABFD0;
    case 807u: goto L_089ABFE4;
    case 808u: goto L_089ABFE8;
    default:
        if (local_transfers == 0u) rt.unsupported(ctx.pc, 0u, "invalid internal function entry");
        else ctx.pc = local_pc;
        return;
    }
    }
L_089A8000:
    ctx.set_gpr(1, static_cast<std::int32_t>(ctx.gpr[5]) < 3 ? 1u : 0u);
    { const bool branch_taken = ctx.gpr[1] != 0u;
    // nop
      if (branch_taken) {
          goto L_089A8014;
      }
      goto L_089A800C;
    }
L_089A800C:
    ctx.set_gpr(5, rt.memory().aot_load32(ctx.gpr[20] + static_cast<std::uint32_t>(16)));
    rt.memory().aot_store32(ctx.gpr[5] + static_cast<std::uint32_t>(8), ctx.gpr[6]);
    goto L_089A8014;
L_089A8014:
    ctx.set_gpr(5, ctx.gpr[4] << 2u);
    ctx.set_gpr(6, ctx.gpr[5] + ctx.gpr[4]);
    ctx.set_gpr(5, ctx.gpr[3] << 1u);
    ctx.set_gpr(5, ctx.gpr[6] + ctx.gpr[5]);
    ctx.set_gpr(5, ctx.gpr[5] + static_cast<std::uint32_t>(3));
    { const bool branch_taken = static_cast<std::int32_t>(ctx.gpr[5]) < 0;
    // nop
      if (branch_taken) {
          goto L_089A8040;
      }
      goto L_089A8030;
    }
L_089A8030:
    ctx.fpr[0] = std::bit_cast<float>(ctx.gpr[5]);
    ctx.fpr[1] = static_cast<float>(static_cast<std::int32_t>(ctx.fpr_bits(0)));
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_089A8058;
      }
      goto L_089A8040;
    }
L_089A8040:
    ctx.set_gpr(6, ctx.gpr[5] >> 1u);
    ctx.set_gpr(5, ctx.gpr[5] & 1u);
    ctx.set_gpr(6, ctx.gpr[6] | ctx.gpr[5]);
    ctx.fpr[0] = std::bit_cast<float>(ctx.gpr[6]);
    ctx.fpr[1] = static_cast<float>(static_cast<std::int32_t>(ctx.fpr_bits(0)));
    ctx.fpr[1] = ctx.fpr[1] + ctx.fpr[1];
    goto L_089A8058;
L_089A8058:
    ctx.set_gpr(5, 16608u << 16u);
    ctx.fpr[0] = std::bit_cast<float>(ctx.gpr[5]);
    ctx.fpr[1] = ctx.fpr[1] / ctx.fpr[0];
    ctx.set_gpr(5, 20224u << 16u);
    ctx.fpr[0] = std::bit_cast<float>(ctx.gpr[5]);
    ctx.set_fpu_condition((ctx.fpr[0] <= ctx.fpr[1]));
    // nop
    { const bool branch_taken = ctx.fpu_condition();
    // nop
      if (branch_taken) {
          goto L_089A808C;
      }
      goto L_089A807C;
    }
L_089A807C:
    ctx.set_fpr_bits(0, ctx.fpu_float_to_word(ctx.fpr[1], 1u));
    ctx.set_gpr(5, std::bit_cast<std::uint32_t>(ctx.fpr[0]));
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_089A80A0;
      }
      goto L_089A808C;
    }
L_089A808C:
    ctx.fpr[0] = ctx.fpr[1] - ctx.fpr[0];
    ctx.set_fpr_bits(0, ctx.fpu_float_to_word(ctx.fpr[0], 1u));
    ctx.set_gpr(6, std::bit_cast<std::uint32_t>(ctx.fpr[0]));
    ctx.set_gpr(5, 0u + static_cast<std::uint32_t>(-32768));
    ctx.set_gpr(5, ctx.gpr[6] | ctx.gpr[5]);
    goto L_089A80A0;
L_089A80A0:
    ctx.set_gpr(5, ctx.gpr[5] & 255u);
    ctx.set_gpr(6, ctx.gpr[5] << 24u);
    ctx.set_gpr(5, rt.memory().aot_load32(ctx.gpr[20] + static_cast<std::uint32_t>(8)));
    { const bool branch_taken = ctx.gpr[5] == 0u;
    // nop
      if (branch_taken) {
          goto L_089A80C8;
      }
      goto L_089A80B4;
    }
L_089A80B4:
    ctx.set_gpr(1, static_cast<std::int32_t>(ctx.gpr[5]) < 4 ? 1u : 0u);
    { const bool branch_taken = ctx.gpr[1] != 0u;
    // nop
      if (branch_taken) {
          goto L_089A80C8;
      }
      goto L_089A80C0;
    }
L_089A80C0:
    ctx.set_gpr(5, rt.memory().aot_load32(ctx.gpr[20] + static_cast<std::uint32_t>(16)));
    rt.memory().aot_store32(ctx.gpr[5] + static_cast<std::uint32_t>(12), ctx.gpr[6]);
    goto L_089A80C8;
L_089A80C8:
    ctx.set_gpr(6, ctx.gpr[3] + static_cast<std::uint32_t>(1));
    ctx.set_gpr(5, ctx.gpr[6] << 1u);
    ctx.set_gpr(6, ctx.gpr[5] + ctx.gpr[6]);
    ctx.set_gpr(5, ctx.gpr[4] << 2u);
    ctx.set_gpr(5, ctx.gpr[6] + ctx.gpr[5]);
    { const bool branch_taken = static_cast<std::int32_t>(ctx.gpr[5]) < 0;
    // nop
      if (branch_taken) {
          goto L_089A80F4;
      }
      goto L_089A80E4;
    }
L_089A80E4:
    ctx.fpr[0] = std::bit_cast<float>(ctx.gpr[5]);
    ctx.fpr[1] = static_cast<float>(static_cast<std::int32_t>(ctx.fpr_bits(0)));
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_089A810C;
      }
      goto L_089A80F4;
    }
L_089A80F4:
    ctx.set_gpr(6, ctx.gpr[5] >> 1u);
    ctx.set_gpr(5, ctx.gpr[5] & 1u);
    ctx.set_gpr(6, ctx.gpr[6] | ctx.gpr[5]);
    ctx.fpr[0] = std::bit_cast<float>(ctx.gpr[6]);
    ctx.fpr[1] = static_cast<float>(static_cast<std::int32_t>(ctx.fpr_bits(0)));
    ctx.fpr[1] = ctx.fpr[1] + ctx.fpr[1];
    goto L_089A810C;
L_089A810C:
    ctx.set_gpr(5, 16608u << 16u);
    ctx.fpr[0] = std::bit_cast<float>(ctx.gpr[5]);
    ctx.fpr[1] = ctx.fpr[1] / ctx.fpr[0];
    ctx.set_gpr(5, 20224u << 16u);
    ctx.fpr[0] = std::bit_cast<float>(ctx.gpr[5]);
    ctx.set_fpu_condition((ctx.fpr[0] <= ctx.fpr[1]));
    // nop
    { const bool branch_taken = ctx.fpu_condition();
    // nop
      if (branch_taken) {
          goto L_089A8140;
      }
      goto L_089A8130;
    }
L_089A8130:
    ctx.set_fpr_bits(0, ctx.fpu_float_to_word(ctx.fpr[1], 1u));
    ctx.set_gpr(5, std::bit_cast<std::uint32_t>(ctx.fpr[0]));
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_089A8154;
      }
      goto L_089A8140;
    }
L_089A8140:
    ctx.fpr[0] = ctx.fpr[1] - ctx.fpr[0];
    ctx.set_fpr_bits(0, ctx.fpu_float_to_word(ctx.fpr[0], 1u));
    ctx.set_gpr(6, std::bit_cast<std::uint32_t>(ctx.fpr[0]));
    ctx.set_gpr(5, 0u + static_cast<std::uint32_t>(-32768));
    ctx.set_gpr(5, ctx.gpr[6] | ctx.gpr[5]);
    goto L_089A8154;
L_089A8154:
    ctx.set_gpr(5, ctx.gpr[5] & 255u);
    ctx.set_gpr(6, ctx.gpr[5] << 24u);
    ctx.set_gpr(5, rt.memory().aot_load32(ctx.gpr[20] + static_cast<std::uint32_t>(8)));
    { const bool branch_taken = ctx.gpr[5] == 0u;
    // nop
      if (branch_taken) {
          goto L_089A817C;
      }
      goto L_089A8168;
    }
L_089A8168:
    ctx.set_gpr(1, static_cast<std::int32_t>(ctx.gpr[5]) < 5 ? 1u : 0u);
    { const bool branch_taken = ctx.gpr[1] != 0u;
    // nop
      if (branch_taken) {
          goto L_089A817C;
      }
      goto L_089A8174;
    }
L_089A8174:
    ctx.set_gpr(5, rt.memory().aot_load32(ctx.gpr[20] + static_cast<std::uint32_t>(16)));
    rt.memory().aot_store32(ctx.gpr[5] + static_cast<std::uint32_t>(16), ctx.gpr[6]);
    goto L_089A817C;
L_089A817C:
    ctx.set_gpr(6, ctx.gpr[4] + static_cast<std::uint32_t>(1));
    ctx.set_gpr(5, ctx.gpr[6] << 1u);
    ctx.set_gpr(6, ctx.gpr[5] + ctx.gpr[6]);
    ctx.set_gpr(5, ctx.gpr[3] << 2u);
    ctx.set_gpr(5, ctx.gpr[6] + ctx.gpr[5]);
    { const bool branch_taken = static_cast<std::int32_t>(ctx.gpr[5]) < 0;
    // nop
      if (branch_taken) {
          goto L_089A81A8;
      }
      goto L_089A8198;
    }
L_089A8198:
    ctx.fpr[0] = std::bit_cast<float>(ctx.gpr[5]);
    ctx.fpr[1] = static_cast<float>(static_cast<std::int32_t>(ctx.fpr_bits(0)));
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_089A81C0;
      }
      goto L_089A81A8;
    }
L_089A81A8:
    ctx.set_gpr(6, ctx.gpr[5] >> 1u);
    ctx.set_gpr(5, ctx.gpr[5] & 1u);
    ctx.set_gpr(6, ctx.gpr[6] | ctx.gpr[5]);
    ctx.fpr[0] = std::bit_cast<float>(ctx.gpr[6]);
    ctx.fpr[1] = static_cast<float>(static_cast<std::int32_t>(ctx.fpr_bits(0)));
    ctx.fpr[1] = ctx.fpr[1] + ctx.fpr[1];
    goto L_089A81C0;
L_089A81C0:
    ctx.set_gpr(5, 16608u << 16u);
    ctx.fpr[0] = std::bit_cast<float>(ctx.gpr[5]);
    ctx.fpr[1] = ctx.fpr[1] / ctx.fpr[0];
    ctx.set_gpr(5, 20224u << 16u);
    ctx.fpr[0] = std::bit_cast<float>(ctx.gpr[5]);
    ctx.set_fpu_condition((ctx.fpr[0] <= ctx.fpr[1]));
    // nop
    { const bool branch_taken = ctx.fpu_condition();
    // nop
      if (branch_taken) {
          goto L_089A81F4;
      }
      goto L_089A81E4;
    }
L_089A81E4:
    ctx.set_fpr_bits(0, ctx.fpu_float_to_word(ctx.fpr[1], 1u));
    ctx.set_gpr(5, std::bit_cast<std::uint32_t>(ctx.fpr[0]));
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_089A8208;
      }
      goto L_089A81F4;
    }
L_089A81F4:
    ctx.fpr[0] = ctx.fpr[1] - ctx.fpr[0];
    ctx.set_fpr_bits(0, ctx.fpu_float_to_word(ctx.fpr[0], 1u));
    ctx.set_gpr(6, std::bit_cast<std::uint32_t>(ctx.fpr[0]));
    ctx.set_gpr(5, 0u + static_cast<std::uint32_t>(-32768));
    ctx.set_gpr(5, ctx.gpr[6] | ctx.gpr[5]);
    goto L_089A8208;
L_089A8208:
    ctx.set_gpr(5, ctx.gpr[5] & 255u);
    ctx.set_gpr(6, ctx.gpr[5] << 24u);
    ctx.set_gpr(5, rt.memory().aot_load32(ctx.gpr[20] + static_cast<std::uint32_t>(8)));
    { const bool branch_taken = ctx.gpr[5] == 0u;
    // nop
      if (branch_taken) {
          goto L_089A8230;
      }
      goto L_089A821C;
    }
L_089A821C:
    ctx.set_gpr(1, static_cast<std::int32_t>(ctx.gpr[5]) < 6 ? 1u : 0u);
    { const bool branch_taken = ctx.gpr[1] != 0u;
    // nop
      if (branch_taken) {
          goto L_089A8230;
      }
      goto L_089A8228;
    }
L_089A8228:
    ctx.set_gpr(5, rt.memory().aot_load32(ctx.gpr[20] + static_cast<std::uint32_t>(16)));
    rt.memory().aot_store32(ctx.gpr[5] + static_cast<std::uint32_t>(20), ctx.gpr[6]);
    goto L_089A8230;
L_089A8230:
    ctx.set_gpr(6, ctx.gpr[4] << 1u);
    ctx.set_gpr(5, ctx.gpr[3] << 2u);
    ctx.set_gpr(5, ctx.gpr[5] + ctx.gpr[3]);
    ctx.set_gpr(5, ctx.gpr[6] + ctx.gpr[5]);
    ctx.set_gpr(5, ctx.gpr[5] + static_cast<std::uint32_t>(3));
    { const bool branch_taken = static_cast<std::int32_t>(ctx.gpr[5]) < 0;
    // nop
      if (branch_taken) {
          goto L_089A825C;
      }
      goto L_089A824C;
    }
L_089A824C:
    ctx.fpr[0] = std::bit_cast<float>(ctx.gpr[5]);
    ctx.fpr[1] = static_cast<float>(static_cast<std::int32_t>(ctx.fpr_bits(0)));
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_089A8274;
      }
      goto L_089A825C;
    }
L_089A825C:
    ctx.set_gpr(6, ctx.gpr[5] >> 1u);
    ctx.set_gpr(5, ctx.gpr[5] & 1u);
    ctx.set_gpr(6, ctx.gpr[6] | ctx.gpr[5]);
    ctx.fpr[0] = std::bit_cast<float>(ctx.gpr[6]);
    ctx.fpr[1] = static_cast<float>(static_cast<std::int32_t>(ctx.fpr_bits(0)));
    ctx.fpr[1] = ctx.fpr[1] + ctx.fpr[1];
    goto L_089A8274;
L_089A8274:
    ctx.set_gpr(5, 16608u << 16u);
    ctx.fpr[0] = std::bit_cast<float>(ctx.gpr[5]);
    ctx.fpr[1] = ctx.fpr[1] / ctx.fpr[0];
    ctx.set_gpr(5, 20224u << 16u);
    ctx.fpr[0] = std::bit_cast<float>(ctx.gpr[5]);
    ctx.set_fpu_condition((ctx.fpr[0] <= ctx.fpr[1]));
    // nop
    { const bool branch_taken = ctx.fpu_condition();
    // nop
      if (branch_taken) {
          goto L_089A82A8;
      }
      goto L_089A8298;
    }
L_089A8298:
    ctx.set_fpr_bits(0, ctx.fpu_float_to_word(ctx.fpr[1], 1u));
    ctx.set_gpr(5, std::bit_cast<std::uint32_t>(ctx.fpr[0]));
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_089A82BC;
      }
      goto L_089A82A8;
    }
L_089A82A8:
    ctx.fpr[0] = ctx.fpr[1] - ctx.fpr[0];
    ctx.set_fpr_bits(0, ctx.fpu_float_to_word(ctx.fpr[0], 1u));
    ctx.set_gpr(6, std::bit_cast<std::uint32_t>(ctx.fpr[0]));
    ctx.set_gpr(5, 0u + static_cast<std::uint32_t>(-32768));
    ctx.set_gpr(5, ctx.gpr[6] | ctx.gpr[5]);
    goto L_089A82BC;
L_089A82BC:
    ctx.set_gpr(5, ctx.gpr[5] & 255u);
    ctx.set_gpr(6, ctx.gpr[5] << 24u);
    ctx.set_gpr(5, rt.memory().aot_load32(ctx.gpr[20] + static_cast<std::uint32_t>(8)));
    { const bool branch_taken = ctx.gpr[5] == 0u;
    // nop
      if (branch_taken) {
          goto L_089A82E4;
      }
      goto L_089A82D0;
    }
L_089A82D0:
    ctx.set_gpr(1, static_cast<std::int32_t>(ctx.gpr[5]) < 7 ? 1u : 0u);
    { const bool branch_taken = ctx.gpr[1] != 0u;
    // nop
      if (branch_taken) {
          goto L_089A82E4;
      }
      goto L_089A82DC;
    }
L_089A82DC:
    ctx.set_gpr(5, rt.memory().aot_load32(ctx.gpr[20] + static_cast<std::uint32_t>(16)));
    rt.memory().aot_store32(ctx.gpr[5] + static_cast<std::uint32_t>(24), ctx.gpr[6]);
    goto L_089A82E4;
L_089A82E4:
    ctx.set_gpr(5, ctx.gpr[3] << 1u);
    ctx.set_gpr(3, ctx.gpr[5] + ctx.gpr[3]);
    ctx.set_gpr(3, ctx.gpr[3] << 1u);
    ctx.set_gpr(3, ctx.gpr[4] + ctx.gpr[3]);
    ctx.set_gpr(3, ctx.gpr[3] + static_cast<std::uint32_t>(3));
    { const bool branch_taken = static_cast<std::int32_t>(ctx.gpr[3]) < 0;
    // nop
      if (branch_taken) {
          goto L_089A8310;
      }
      goto L_089A8300;
    }
L_089A8300:
    ctx.fpr[0] = std::bit_cast<float>(ctx.gpr[3]);
    ctx.fpr[1] = static_cast<float>(static_cast<std::int32_t>(ctx.fpr_bits(0)));
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_089A8328;
      }
      goto L_089A8310;
    }
L_089A8310:
    ctx.set_gpr(4, ctx.gpr[3] >> 1u);
    ctx.set_gpr(3, ctx.gpr[3] & 1u);
    ctx.set_gpr(4, ctx.gpr[4] | ctx.gpr[3]);
    ctx.fpr[0] = std::bit_cast<float>(ctx.gpr[4]);
    ctx.fpr[1] = static_cast<float>(static_cast<std::int32_t>(ctx.fpr_bits(0)));
    ctx.fpr[1] = ctx.fpr[1] + ctx.fpr[1];
    goto L_089A8328;
L_089A8328:
    ctx.set_gpr(3, 16608u << 16u);
    ctx.fpr[0] = std::bit_cast<float>(ctx.gpr[3]);
    ctx.fpr[1] = ctx.fpr[1] / ctx.fpr[0];
    ctx.set_gpr(3, 20224u << 16u);
    ctx.fpr[0] = std::bit_cast<float>(ctx.gpr[3]);
    ctx.set_fpu_condition((ctx.fpr[0] <= ctx.fpr[1]));
    // nop
    { const bool branch_taken = ctx.fpu_condition();
    // nop
      if (branch_taken) {
          goto L_089A835C;
      }
      goto L_089A834C;
    }
L_089A834C:
    ctx.set_fpr_bits(0, ctx.fpu_float_to_word(ctx.fpr[1], 1u));
    ctx.set_gpr(3, std::bit_cast<std::uint32_t>(ctx.fpr[0]));
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_089A8370;
      }
      goto L_089A835C;
    }
L_089A835C:
    ctx.fpr[0] = ctx.fpr[1] - ctx.fpr[0];
    ctx.set_fpr_bits(0, ctx.fpu_float_to_word(ctx.fpr[0], 1u));
    ctx.set_gpr(4, std::bit_cast<std::uint32_t>(ctx.fpr[0]));
    ctx.set_gpr(3, 0u + static_cast<std::uint32_t>(-32768));
    ctx.set_gpr(3, ctx.gpr[4] | ctx.gpr[3]);
    goto L_089A8370;
L_089A8370:
    ctx.set_gpr(3, ctx.gpr[3] & 255u);
    ctx.set_gpr(4, ctx.gpr[3] << 24u);
    ctx.set_gpr(3, rt.memory().aot_load32(ctx.gpr[20] + static_cast<std::uint32_t>(8)));
    { const bool branch_taken = ctx.gpr[3] == 0u;
    // nop
      if (branch_taken) {
          goto L_089A8398;
      }
      goto L_089A8384;
    }
L_089A8384:
    ctx.set_gpr(1, static_cast<std::int32_t>(ctx.gpr[3]) < 8 ? 1u : 0u);
    { const bool branch_taken = ctx.gpr[1] != 0u;
    // nop
      if (branch_taken) {
          goto L_089A8398;
      }
      goto L_089A8390;
    }
L_089A8390:
    ctx.set_gpr(3, rt.memory().aot_load32(ctx.gpr[20] + static_cast<std::uint32_t>(16)));
    rt.memory().aot_store32(ctx.gpr[3] + static_cast<std::uint32_t>(28), ctx.gpr[4]);
    goto L_089A8398;
L_089A8398:
    ctx.set_gpr(17, 0u + 0u);
    ctx.set_gpr(16, 0u + 0u);
    ctx.set_gpr(22, 0u + 0u);
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_089A840C;
      }
      goto L_089A83AC;
    }
L_089A83AC:
    ctx.set_gpr(2, ctx.gpr[22] << 2u);
    ctx.set_gpr(2, ctx.gpr[21] + ctx.gpr[2]);
    ctx.set_gpr(4, rt.memory().aot_load32(ctx.gpr[2] + static_cast<std::uint32_t>(0)));
    ctx.set_gpr(5, ctx.gpr[20] + 0u);
    ctx.set_gpr(6, ctx.gpr[29] + static_cast<std::uint32_t>(80));
    ctx.set_gpr(7, rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(64)));
    ctx.set_gpr(8, ctx.gpr[23] + 0u);
    ctx.set_gpr(31, 0x089A83D0u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0104_entry, 104u, 666u, 0x089A704Cu>(ctx, &aot_mem) && ctx.pc == 0x089A83D0u) goto L_089A83D0;
    return;
L_089A83D0:
    ctx.set_gpr(4, rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(80)));
    ctx.set_gpr(5, rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(84)));
    ctx.set_gpr(3, 32767u << 16u);
    ctx.set_gpr(3, ctx.gpr[3] | 65535u);
    { const bool branch_taken = ctx.gpr[5] != ctx.gpr[3];
    // nop
      if (branch_taken) {
          goto L_089A83F4;
      }
      goto L_089A83E8;
    }
L_089A83E8:
    ctx.set_gpr(3, 0u + static_cast<std::uint32_t>(-1));
    { const bool branch_taken = ctx.gpr[4] == ctx.gpr[3];
    // nop
      if (branch_taken) {
          goto L_089A8408;
      }
      goto L_089A83F4;
    }
L_089A83F4:
    ctx.set_gpr(4, ctx.gpr[17] + ctx.gpr[4]);
    ctx.set_gpr(3, ctx.gpr[4] < ctx.gpr[17] ? 1u : 0u);
    ctx.set_gpr(3, ctx.gpr[3] + ctx.gpr[16]);
    ctx.set_gpr(16, ctx.gpr[3] + ctx.gpr[5]);
    ctx.set_gpr(17, ctx.gpr[4] + 0u);
    goto L_089A8408;
L_089A8408:
    ctx.set_gpr(22, ctx.gpr[22] + static_cast<std::uint32_t>(1));
    goto L_089A840C;
L_089A840C:
    ctx.set_gpr(3, static_cast<std::int32_t>(ctx.gpr[22]) < 16 ? 1u : 0u);
    { const bool branch_taken = ctx.gpr[3] != 0u;
    // nop
      if (branch_taken) {
          goto L_089A83AC;
      }
      goto L_089A8418;
    }
L_089A8418:
    ctx.set_gpr(3, rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(60)));
    ctx.set_gpr(1, static_cast<std::int32_t>(ctx.gpr[3]) < static_cast<std::int32_t>(ctx.gpr[16]) ? 1u : 0u);
    { const bool branch_taken = ctx.gpr[1] != 0u;
    // nop
      if (branch_taken) {
          goto L_089A846C;
      }
      goto L_089A8428;
    }
L_089A8428:
    ctx.set_gpr(1, static_cast<std::int32_t>(ctx.gpr[16]) < static_cast<std::int32_t>(ctx.gpr[3]) ? 1u : 0u);
    { const bool branch_taken = ctx.gpr[1] != 0u;
    // nop
      if (branch_taken) {
          goto L_089A8444;
      }
      goto L_089A8434;
    }
L_089A8434:
    ctx.set_gpr(3, rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(56)));
    ctx.set_gpr(1, ctx.gpr[17] < ctx.gpr[3] ? 1u : 0u);
    { const bool branch_taken = ctx.gpr[1] == 0u;
    // nop
      if (branch_taken) {
          goto L_089A846C;
      }
      goto L_089A8444;
    }
L_089A8444:
    ctx.set_gpr(3, rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(48)));
    ctx.set_gpr(4, rt.memory().aot_load32(ctx.gpr[3] + static_cast<std::uint32_t>(0)));
    ctx.set_gpr(3, rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(76)));
    rt.memory().aot_store32(ctx.gpr[3] + static_cast<std::uint32_t>(0), ctx.gpr[4]);
    ctx.set_gpr(3, rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(52)));
    ctx.set_gpr(4, rt.memory().aot_load32(ctx.gpr[3] + static_cast<std::uint32_t>(0)));
    ctx.set_gpr(3, rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(72)));
    rt.memory().aot_store32(ctx.gpr[3] + static_cast<std::uint32_t>(0), ctx.gpr[4]);
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(56), ctx.gpr[17]);
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(60), ctx.gpr[16]);
    goto L_089A846C;
L_089A846C:
    ctx.set_gpr(18, ctx.gpr[18] + static_cast<std::uint32_t>(1));
    goto L_089A8470;
L_089A8470:
    ctx.set_gpr(3, static_cast<std::int32_t>(ctx.gpr[18]) < 16 ? 1u : 0u);
    { const bool branch_taken = ctx.gpr[3] != 0u;
    // nop
      if (branch_taken) {
          (void)rt.invoke_chained_direct<&recomp_unit_0104_entry, 104u, 739u, 0x089A7708u>(ctx, &aot_mem); return;
      }
      goto L_089A847C;
    }
L_089A847C:
    ctx.set_gpr(19, ctx.gpr[19] + static_cast<std::uint32_t>(1));
    goto L_089A8480;
L_089A8480:
    ctx.set_gpr(3, static_cast<std::int32_t>(ctx.gpr[19]) < 15 ? 1u : 0u);
    { const bool branch_taken = ctx.gpr[3] != 0u;
    // nop
      if (branch_taken) {
          (void)rt.invoke_chained_direct<&recomp_unit_0104_entry, 104u, 738u, 0x089A76FCu>(ctx, &aot_mem); return;
      }
      goto L_089A848C;
    }
L_089A848C:
    ctx.set_gpr(3, 32767u << 16u);
    ctx.set_gpr(4, ctx.gpr[3] | 65535u);
    ctx.set_gpr(3, rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(60)));
    { const bool branch_taken = ctx.gpr[3] != ctx.gpr[4];
    // nop
      if (branch_taken) {
          goto L_089A84C8;
      }
      goto L_089A84A0;
    }
L_089A84A0:
    ctx.set_gpr(4, 0u + static_cast<std::uint32_t>(-1));
    ctx.set_gpr(3, rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(56)));
    { const bool branch_taken = ctx.gpr[3] != ctx.gpr[4];
    // nop
      if (branch_taken) {
          goto L_089A84C8;
      }
      goto L_089A84B0;
    }
L_089A84B0:
    ctx.set_gpr(4, rt.memory().aot_load32(ctx.gpr[21] + static_cast<std::uint32_t>(0)));
    ctx.set_gpr(3, rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(76)));
    rt.memory().aot_store32(ctx.gpr[3] + static_cast<std::uint32_t>(0), ctx.gpr[4]);
    ctx.set_gpr(4, rt.memory().aot_load32(ctx.gpr[21] + static_cast<std::uint32_t>(4)));
    ctx.set_gpr(3, rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(72)));
    rt.memory().aot_store32(ctx.gpr[3] + static_cast<std::uint32_t>(0), ctx.gpr[4]);
    goto L_089A84C8;
L_089A84C8:
    ctx.set_gpr(31, rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(44)));
    ctx.set_gpr(23, rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(40)));
    ctx.set_gpr(22, rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(36)));
    ctx.set_gpr(21, rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(32)));
    ctx.set_gpr(20, rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(28)));
    ctx.set_gpr(19, rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(24)));
    ctx.set_gpr(18, rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(20)));
    ctx.set_gpr(17, rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(16)));
    ctx.set_gpr(16, rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(12)));
    ctx.set_gpr(29, ctx.gpr[29] + static_cast<std::uint32_t>(128));
    jump_target = ctx.gpr[31];
    // nop
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_089A84F8:
    ctx.set_gpr(29, ctx.gpr[29] + static_cast<std::uint32_t>(-96));
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(44), ctx.gpr[31]);
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(40), ctx.gpr[23]);
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(36), ctx.gpr[22]);
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(32), ctx.gpr[21]);
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(28), ctx.gpr[20]);
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(24), ctx.gpr[19]);
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(20), ctx.gpr[18]);
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(16), ctx.gpr[17]);
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(12), ctx.gpr[16]);
    ctx.set_gpr(21, ctx.gpr[5] + 0u);
    ctx.set_gpr(20, ctx.gpr[6] + 0u);
    ctx.set_gpr(19, ctx.gpr[7] + 0u);
    ctx.set_gpr(23, ctx.gpr[8] + 0u);
    ctx.set_gpr(18, ctx.gpr[9] + 0u);
    ctx.set_gpr(17, ctx.gpr[10] + 0u);
    ctx.set_gpr(22, ctx.gpr[11] + 0u);
    ctx.set_gpr(16, rt.memory().aot_load8(ctx.gpr[29] + static_cast<std::uint32_t>(96)));
    { const bool branch_taken = ctx.gpr[16] != 0u;
    // nop
      if (branch_taken) {
          goto L_089A8928;
      }
      goto L_089A8548;
    }
L_089A8548:
    ctx.set_gpr(2, 255u << 16u);
    ctx.set_gpr(2, ctx.gpr[20] & ctx.gpr[2]);
    ctx.set_gpr(6, (ctx.gpr[2] >> 16u) & 0x0000FFFFu);
    ctx.set_gpr(2, ctx.gpr[20] & 65280u);
    ctx.set_gpr(7, (ctx.gpr[2] >> 8u) & 0x0000FFFFu);
    ctx.set_gpr(2, ctx.gpr[20] & 255u);
    ctx.set_gpr(3, 16888u << 16u);
    ctx.fpr[1] = std::bit_cast<float>(ctx.gpr[3]);
    { const bool branch_taken = static_cast<std::int32_t>(ctx.gpr[6]) < 0;
    // nop
      if (branch_taken) {
          goto L_089A8580;
      }
      goto L_089A8570;
    }
L_089A8570:
    ctx.fpr[0] = std::bit_cast<float>(ctx.gpr[6]);
    ctx.fpr[0] = static_cast<float>(static_cast<std::int32_t>(ctx.fpr_bits(0)));
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_089A8598;
      }
      goto L_089A8580;
    }
L_089A8580:
    ctx.set_gpr(5, ctx.gpr[6] >> 1u);
    ctx.set_gpr(3, ctx.gpr[6] & 1u);
    ctx.set_gpr(5, ctx.gpr[5] | ctx.gpr[3]);
    ctx.fpr[0] = std::bit_cast<float>(ctx.gpr[5]);
    ctx.fpr[0] = static_cast<float>(static_cast<std::int32_t>(ctx.fpr_bits(0)));
    ctx.fpr[0] = ctx.fpr[0] + ctx.fpr[0];
    goto L_089A8598;
L_089A8598:
    { const float fs = ctx.fpr[1]; const float ft = ctx.fpr[0]; if ((std::isinf(fs) && ft == 0.0f) || (std::isinf(ft) && fs == 0.0f)) ctx.set_fpr_bits(1, 0x7FC00000u); else ctx.fpr[1] = fs * ft; }
    ctx.set_gpr(3, 17279u << 16u);
    ctx.fpr[0] = std::bit_cast<float>(ctx.gpr[3]);
    ctx.fpr[1] = ctx.fpr[1] / ctx.fpr[0];
    ctx.set_gpr(3, 20224u << 16u);
    ctx.fpr[0] = std::bit_cast<float>(ctx.gpr[3]);
    ctx.set_fpu_condition((ctx.fpr[0] <= ctx.fpr[1]));
    // nop
    { const bool branch_taken = ctx.fpu_condition();
    // nop
      if (branch_taken) {
          goto L_089A85D0;
      }
      goto L_089A85C0;
    }
L_089A85C0:
    ctx.set_fpr_bits(0, ctx.fpu_float_to_word(ctx.fpr[1], 1u));
    ctx.set_gpr(3, std::bit_cast<std::uint32_t>(ctx.fpr[0]));
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_089A85E4;
      }
      goto L_089A85D0;
    }
L_089A85D0:
    ctx.fpr[0] = ctx.fpr[1] - ctx.fpr[0];
    ctx.set_fpr_bits(0, ctx.fpu_float_to_word(ctx.fpr[0], 1u));
    ctx.set_gpr(5, std::bit_cast<std::uint32_t>(ctx.fpr[0]));
    ctx.set_gpr(3, 0u + static_cast<std::uint32_t>(-32768));
    ctx.set_gpr(3, ctx.gpr[5] | ctx.gpr[3]);
    goto L_089A85E4;
L_089A85E4:
    ctx.set_gpr(3, ctx.gpr[3] & 65535u);
    ctx.set_gpr(6, ctx.gpr[3] << 11u);
    ctx.set_gpr(3, 17020u << 16u);
    ctx.fpr[1] = std::bit_cast<float>(ctx.gpr[3]);
    { const bool branch_taken = static_cast<std::int32_t>(ctx.gpr[7]) < 0;
    // nop
      if (branch_taken) {
          goto L_089A860C;
      }
      goto L_089A85FC;
    }
L_089A85FC:
    ctx.fpr[0] = std::bit_cast<float>(ctx.gpr[7]);
    ctx.fpr[0] = static_cast<float>(static_cast<std::int32_t>(ctx.fpr_bits(0)));
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_089A8624;
      }
      goto L_089A860C;
    }
L_089A860C:
    ctx.set_gpr(5, ctx.gpr[7] >> 1u);
    ctx.set_gpr(3, ctx.gpr[7] & 1u);
    ctx.set_gpr(5, ctx.gpr[5] | ctx.gpr[3]);
    ctx.fpr[0] = std::bit_cast<float>(ctx.gpr[5]);
    ctx.fpr[0] = static_cast<float>(static_cast<std::int32_t>(ctx.fpr_bits(0)));
    ctx.fpr[0] = ctx.fpr[0] + ctx.fpr[0];
    goto L_089A8624;
L_089A8624:
    { const float fs = ctx.fpr[1]; const float ft = ctx.fpr[0]; if ((std::isinf(fs) && ft == 0.0f) || (std::isinf(ft) && fs == 0.0f)) ctx.set_fpr_bits(1, 0x7FC00000u); else ctx.fpr[1] = fs * ft; }
    ctx.set_gpr(3, 17279u << 16u);
    ctx.fpr[0] = std::bit_cast<float>(ctx.gpr[3]);
    ctx.fpr[1] = ctx.fpr[1] / ctx.fpr[0];
    ctx.set_gpr(3, 20224u << 16u);
    ctx.fpr[0] = std::bit_cast<float>(ctx.gpr[3]);
    ctx.set_fpu_condition((ctx.fpr[0] <= ctx.fpr[1]));
    // nop
    { const bool branch_taken = ctx.fpu_condition();
    // nop
      if (branch_taken) {
          goto L_089A865C;
      }
      goto L_089A864C;
    }
L_089A864C:
    ctx.set_fpr_bits(0, ctx.fpu_float_to_word(ctx.fpr[1], 1u));
    ctx.set_gpr(3, std::bit_cast<std::uint32_t>(ctx.fpr[0]));
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_089A8670;
      }
      goto L_089A865C;
    }
L_089A865C:
    ctx.fpr[0] = ctx.fpr[1] - ctx.fpr[0];
    ctx.set_fpr_bits(0, ctx.fpu_float_to_word(ctx.fpr[0], 1u));
    ctx.set_gpr(5, std::bit_cast<std::uint32_t>(ctx.fpr[0]));
    ctx.set_gpr(3, 0u + static_cast<std::uint32_t>(-32768));
    ctx.set_gpr(3, ctx.gpr[5] | ctx.gpr[3]);
    goto L_089A8670;
L_089A8670:
    ctx.set_gpr(3, ctx.gpr[3] & 65535u);
    ctx.set_gpr(3, ctx.gpr[3] << 5u);
    ctx.set_gpr(5, ctx.gpr[6] | ctx.gpr[3]);
    ctx.set_gpr(3, 16888u << 16u);
    ctx.fpr[1] = std::bit_cast<float>(ctx.gpr[3]);
    { const bool branch_taken = static_cast<std::int32_t>(ctx.gpr[2]) < 0;
    // nop
      if (branch_taken) {
          goto L_089A869C;
      }
      goto L_089A868C;
    }
L_089A868C:
    ctx.fpr[0] = std::bit_cast<float>(ctx.gpr[2]);
    ctx.fpr[0] = static_cast<float>(static_cast<std::int32_t>(ctx.fpr_bits(0)));
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_089A86B4;
      }
      goto L_089A869C;
    }
L_089A869C:
    ctx.set_gpr(3, ctx.gpr[2] >> 1u);
    ctx.set_gpr(2, ctx.gpr[2] & 1u);
    ctx.set_gpr(3, ctx.gpr[3] | ctx.gpr[2]);
    ctx.fpr[0] = std::bit_cast<float>(ctx.gpr[3]);
    ctx.fpr[0] = static_cast<float>(static_cast<std::int32_t>(ctx.fpr_bits(0)));
    ctx.fpr[0] = ctx.fpr[0] + ctx.fpr[0];
    goto L_089A86B4;
L_089A86B4:
    { const float fs = ctx.fpr[1]; const float ft = ctx.fpr[0]; if ((std::isinf(fs) && ft == 0.0f) || (std::isinf(ft) && fs == 0.0f)) ctx.set_fpr_bits(1, 0x7FC00000u); else ctx.fpr[1] = fs * ft; }
    ctx.set_gpr(2, 17279u << 16u);
    ctx.fpr[0] = std::bit_cast<float>(ctx.gpr[2]);
    ctx.fpr[1] = ctx.fpr[1] / ctx.fpr[0];
    ctx.set_gpr(2, 20224u << 16u);
    ctx.fpr[0] = std::bit_cast<float>(ctx.gpr[2]);
    ctx.set_fpu_condition((ctx.fpr[0] <= ctx.fpr[1]));
    // nop
    { const bool branch_taken = ctx.fpu_condition();
    // nop
      if (branch_taken) {
          goto L_089A86EC;
      }
      goto L_089A86DC;
    }
L_089A86DC:
    ctx.set_fpr_bits(0, ctx.fpu_float_to_word(ctx.fpr[1], 1u));
    ctx.set_gpr(2, std::bit_cast<std::uint32_t>(ctx.fpr[0]));
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_089A8700;
      }
      goto L_089A86EC;
    }
L_089A86EC:
    ctx.fpr[0] = ctx.fpr[1] - ctx.fpr[0];
    ctx.set_fpr_bits(0, ctx.fpu_float_to_word(ctx.fpr[0], 1u));
    ctx.set_gpr(3, std::bit_cast<std::uint32_t>(ctx.fpr[0]));
    ctx.set_gpr(2, 0u + static_cast<std::uint32_t>(-32768));
    ctx.set_gpr(2, ctx.gpr[3] | ctx.gpr[2]);
    goto L_089A8700;
L_089A8700:
    ctx.set_gpr(2, ctx.gpr[2] & 65535u);
    ctx.set_gpr(2, ctx.gpr[2] | ctx.gpr[5]);
    ctx.set_gpr(5, ctx.gpr[2] & 65535u);
    ctx.set_gpr(2, 255u << 16u);
    ctx.set_gpr(2, ctx.gpr[19] & ctx.gpr[2]);
    ctx.set_gpr(8, (ctx.gpr[2] >> 16u) & 0x0000FFFFu);
    ctx.set_gpr(2, ctx.gpr[19] & 65280u);
    ctx.set_gpr(3, (ctx.gpr[2] >> 8u) & 0x0000FFFFu);
    ctx.set_gpr(2, ctx.gpr[19] & 255u);
    ctx.set_gpr(6, 16888u << 16u);
    ctx.fpr[1] = std::bit_cast<float>(ctx.gpr[6]);
    { const bool branch_taken = static_cast<std::int32_t>(ctx.gpr[8]) < 0;
    // nop
      if (branch_taken) {
          goto L_089A8744;
      }
      goto L_089A8734;
    }
L_089A8734:
    ctx.fpr[0] = std::bit_cast<float>(ctx.gpr[8]);
    ctx.fpr[0] = static_cast<float>(static_cast<std::int32_t>(ctx.fpr_bits(0)));
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_089A875C;
      }
      goto L_089A8744;
    }
L_089A8744:
    ctx.set_gpr(7, ctx.gpr[8] >> 1u);
    ctx.set_gpr(6, ctx.gpr[8] & 1u);
    ctx.set_gpr(7, ctx.gpr[7] | ctx.gpr[6]);
    ctx.fpr[0] = std::bit_cast<float>(ctx.gpr[7]);
    ctx.fpr[0] = static_cast<float>(static_cast<std::int32_t>(ctx.fpr_bits(0)));
    ctx.fpr[0] = ctx.fpr[0] + ctx.fpr[0];
    goto L_089A875C;
L_089A875C:
    { const float fs = ctx.fpr[1]; const float ft = ctx.fpr[0]; if ((std::isinf(fs) && ft == 0.0f) || (std::isinf(ft) && fs == 0.0f)) ctx.set_fpr_bits(1, 0x7FC00000u); else ctx.fpr[1] = fs * ft; }
    ctx.set_gpr(6, 17279u << 16u);
    ctx.fpr[0] = std::bit_cast<float>(ctx.gpr[6]);
    ctx.fpr[1] = ctx.fpr[1] / ctx.fpr[0];
    ctx.set_gpr(6, 20224u << 16u);
    ctx.fpr[0] = std::bit_cast<float>(ctx.gpr[6]);
    ctx.set_fpu_condition((ctx.fpr[0] <= ctx.fpr[1]));
    // nop
    { const bool branch_taken = ctx.fpu_condition();
    // nop
      if (branch_taken) {
          goto L_089A8794;
      }
      goto L_089A8784;
    }
L_089A8784:
    ctx.set_fpr_bits(0, ctx.fpu_float_to_word(ctx.fpr[1], 1u));
    ctx.set_gpr(6, std::bit_cast<std::uint32_t>(ctx.fpr[0]));
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_089A87A8;
      }
      goto L_089A8794;
    }
L_089A8794:
    ctx.fpr[0] = ctx.fpr[1] - ctx.fpr[0];
    ctx.set_fpr_bits(0, ctx.fpu_float_to_word(ctx.fpr[0], 1u));
    ctx.set_gpr(7, std::bit_cast<std::uint32_t>(ctx.fpr[0]));
    ctx.set_gpr(6, 0u + static_cast<std::uint32_t>(-32768));
    ctx.set_gpr(6, ctx.gpr[7] | ctx.gpr[6]);
    goto L_089A87A8;
L_089A87A8:
    ctx.set_gpr(6, ctx.gpr[6] & 65535u);
    ctx.set_gpr(7, ctx.gpr[6] << 11u);
    ctx.set_gpr(6, 17020u << 16u);
    ctx.fpr[1] = std::bit_cast<float>(ctx.gpr[6]);
    { const bool branch_taken = static_cast<std::int32_t>(ctx.gpr[3]) < 0;
    // nop
      if (branch_taken) {
          goto L_089A87D0;
      }
      goto L_089A87C0;
    }
L_089A87C0:
    ctx.fpr[0] = std::bit_cast<float>(ctx.gpr[3]);
    ctx.fpr[0] = static_cast<float>(static_cast<std::int32_t>(ctx.fpr_bits(0)));
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_089A87E8;
      }
      goto L_089A87D0;
    }
L_089A87D0:
    ctx.set_gpr(6, ctx.gpr[3] >> 1u);
    ctx.set_gpr(3, ctx.gpr[3] & 1u);
    ctx.set_gpr(6, ctx.gpr[6] | ctx.gpr[3]);
    ctx.fpr[0] = std::bit_cast<float>(ctx.gpr[6]);
    ctx.fpr[0] = static_cast<float>(static_cast<std::int32_t>(ctx.fpr_bits(0)));
    ctx.fpr[0] = ctx.fpr[0] + ctx.fpr[0];
    goto L_089A87E8;
L_089A87E8:
    { const float fs = ctx.fpr[1]; const float ft = ctx.fpr[0]; if ((std::isinf(fs) && ft == 0.0f) || (std::isinf(ft) && fs == 0.0f)) ctx.set_fpr_bits(1, 0x7FC00000u); else ctx.fpr[1] = fs * ft; }
    ctx.set_gpr(3, 17279u << 16u);
    ctx.fpr[0] = std::bit_cast<float>(ctx.gpr[3]);
    ctx.fpr[1] = ctx.fpr[1] / ctx.fpr[0];
    ctx.set_gpr(3, 20224u << 16u);
    ctx.fpr[0] = std::bit_cast<float>(ctx.gpr[3]);
    ctx.set_fpu_condition((ctx.fpr[0] <= ctx.fpr[1]));
    // nop
    { const bool branch_taken = ctx.fpu_condition();
    // nop
      if (branch_taken) {
          goto L_089A8820;
      }
      goto L_089A8810;
    }
L_089A8810:
    ctx.set_fpr_bits(0, ctx.fpu_float_to_word(ctx.fpr[1], 1u));
    ctx.set_gpr(3, std::bit_cast<std::uint32_t>(ctx.fpr[0]));
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_089A8834;
      }
      goto L_089A8820;
    }
L_089A8820:
    ctx.fpr[0] = ctx.fpr[1] - ctx.fpr[0];
    ctx.set_fpr_bits(0, ctx.fpu_float_to_word(ctx.fpr[0], 1u));
    ctx.set_gpr(6, std::bit_cast<std::uint32_t>(ctx.fpr[0]));
    ctx.set_gpr(3, 0u + static_cast<std::uint32_t>(-32768));
    ctx.set_gpr(3, ctx.gpr[6] | ctx.gpr[3]);
    goto L_089A8834;
L_089A8834:
    ctx.set_gpr(3, ctx.gpr[3] & 65535u);
    ctx.set_gpr(3, ctx.gpr[3] << 5u);
    ctx.set_gpr(6, ctx.gpr[7] | ctx.gpr[3]);
    ctx.set_gpr(3, 16888u << 16u);
    ctx.fpr[1] = std::bit_cast<float>(ctx.gpr[3]);
    { const bool branch_taken = static_cast<std::int32_t>(ctx.gpr[2]) < 0;
    // nop
      if (branch_taken) {
          goto L_089A8860;
      }
      goto L_089A8850;
    }
L_089A8850:
    ctx.fpr[0] = std::bit_cast<float>(ctx.gpr[2]);
    ctx.fpr[0] = static_cast<float>(static_cast<std::int32_t>(ctx.fpr_bits(0)));
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_089A8878;
      }
      goto L_089A8860;
    }
L_089A8860:
    ctx.set_gpr(3, ctx.gpr[2] >> 1u);
    ctx.set_gpr(2, ctx.gpr[2] & 1u);
    ctx.set_gpr(3, ctx.gpr[3] | ctx.gpr[2]);
    ctx.fpr[0] = std::bit_cast<float>(ctx.gpr[3]);
    ctx.fpr[0] = static_cast<float>(static_cast<std::int32_t>(ctx.fpr_bits(0)));
    ctx.fpr[0] = ctx.fpr[0] + ctx.fpr[0];
    goto L_089A8878;
L_089A8878:
    { const float fs = ctx.fpr[1]; const float ft = ctx.fpr[0]; if ((std::isinf(fs) && ft == 0.0f) || (std::isinf(ft) && fs == 0.0f)) ctx.set_fpr_bits(1, 0x7FC00000u); else ctx.fpr[1] = fs * ft; }
    ctx.set_gpr(2, 17279u << 16u);
    ctx.fpr[0] = std::bit_cast<float>(ctx.gpr[2]);
    ctx.fpr[1] = ctx.fpr[1] / ctx.fpr[0];
    ctx.set_gpr(2, 20224u << 16u);
    ctx.fpr[0] = std::bit_cast<float>(ctx.gpr[2]);
    ctx.set_fpu_condition((ctx.fpr[0] <= ctx.fpr[1]));
    // nop
    { const bool branch_taken = ctx.fpu_condition();
    // nop
      if (branch_taken) {
          goto L_089A88B0;
      }
      goto L_089A88A0;
    }
L_089A88A0:
    ctx.set_fpr_bits(0, ctx.fpu_float_to_word(ctx.fpr[1], 1u));
    ctx.set_gpr(2, std::bit_cast<std::uint32_t>(ctx.fpr[0]));
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_089A88C4;
      }
      goto L_089A88B0;
    }
L_089A88B0:
    ctx.fpr[0] = ctx.fpr[1] - ctx.fpr[0];
    ctx.set_fpr_bits(0, ctx.fpu_float_to_word(ctx.fpr[0], 1u));
    ctx.set_gpr(3, std::bit_cast<std::uint32_t>(ctx.fpr[0]));
    ctx.set_gpr(2, 0u + static_cast<std::uint32_t>(-32768));
    ctx.set_gpr(2, ctx.gpr[3] | ctx.gpr[2]);
    goto L_089A88C4;
L_089A88C4:
    ctx.set_gpr(2, ctx.gpr[2] & 65535u);
    ctx.set_gpr(2, ctx.gpr[2] | ctx.gpr[6]);
    ctx.set_gpr(2, ctx.gpr[2] & 65535u);
    { const bool branch_taken = ctx.gpr[17] == 0u;
    // nop
      if (branch_taken) {
          goto L_089A8900;
      }
      goto L_089A88D8;
    }
L_089A88D8:
    ctx.set_gpr(3, ctx.gpr[5] & 65535u);
    ctx.set_gpr(2, ctx.gpr[2] & 65535u);
    ctx.set_gpr(1, static_cast<std::int32_t>(ctx.gpr[2]) < static_cast<std::int32_t>(ctx.gpr[3]) ? 1u : 0u);
    { const bool branch_taken = ctx.gpr[1] == 0u;
    // nop
      if (branch_taken) {
          goto L_089A8980;
      }
      goto L_089A88EC;
    }
L_089A88EC:
    ctx.set_gpr(2, ctx.gpr[20] + 0u);
    ctx.set_gpr(20, ctx.gpr[19] + 0u);
    ctx.set_gpr(19, ctx.gpr[2] + 0u);
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_089A8980;
      }
      goto L_089A8900;
    }
L_089A8900:
    ctx.set_gpr(3, ctx.gpr[5] & 65535u);
    ctx.set_gpr(2, ctx.gpr[2] & 65535u);
    ctx.set_gpr(1, static_cast<std::int32_t>(ctx.gpr[3]) < static_cast<std::int32_t>(ctx.gpr[2]) ? 1u : 0u);
    { const bool branch_taken = ctx.gpr[1] == 0u;
    // nop
      if (branch_taken) {
          goto L_089A8980;
      }
      goto L_089A8914;
    }
L_089A8914:
    ctx.set_gpr(2, ctx.gpr[20] + 0u);
    ctx.set_gpr(20, ctx.gpr[19] + 0u);
    ctx.set_gpr(19, ctx.gpr[2] + 0u);
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_089A8980;
      }
      goto L_089A8928;
    }
L_089A8928:
    ctx.set_gpr(3, (ctx.gpr[20] >> 24u) & 0x000000FFu);
    ctx.set_gpr(2, (ctx.gpr[19] >> 24u) & 0x000000FFu);
    { const bool branch_taken = ctx.gpr[17] == 0u;
    // nop
      if (branch_taken) {
          goto L_089A8960;
      }
      goto L_089A8938;
    }
L_089A8938:
    ctx.set_gpr(3, ctx.gpr[3] & 255u);
    ctx.set_gpr(2, ctx.gpr[2] & 255u);
    ctx.set_gpr(1, static_cast<std::int32_t>(ctx.gpr[2]) < static_cast<std::int32_t>(ctx.gpr[3]) ? 1u : 0u);
    { const bool branch_taken = ctx.gpr[1] == 0u;
    // nop
      if (branch_taken) {
          goto L_089A8980;
      }
      goto L_089A894C;
    }
L_089A894C:
    ctx.set_gpr(2, ctx.gpr[20] + 0u);
    ctx.set_gpr(20, ctx.gpr[19] + 0u);
    ctx.set_gpr(19, ctx.gpr[2] + 0u);
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_089A8980;
      }
      goto L_089A8960;
    }
L_089A8960:
    ctx.set_gpr(3, ctx.gpr[3] & 255u);
    ctx.set_gpr(2, ctx.gpr[2] & 255u);
    ctx.set_gpr(1, static_cast<std::int32_t>(ctx.gpr[3]) < static_cast<std::int32_t>(ctx.gpr[2]) ? 1u : 0u);
    { const bool branch_taken = ctx.gpr[1] == 0u;
    // nop
      if (branch_taken) {
          goto L_089A8980;
      }
      goto L_089A8974;
    }
L_089A8974:
    ctx.set_gpr(2, ctx.gpr[20] + 0u);
    ctx.set_gpr(20, ctx.gpr[19] + 0u);
    ctx.set_gpr(19, ctx.gpr[2] + 0u);
    goto L_089A8980;
L_089A8980:
    ctx.set_gpr(6, 0u + 0u);
    ctx.set_gpr(5, 0u + 0u);
    { const bool branch_taken = ctx.gpr[16] != 0u;
    // nop
      if (branch_taken) {
          goto L_089A8D30;
      }
      goto L_089A8990;
    }
L_089A8990:
    ctx.set_gpr(2, 255u << 16u);
    ctx.set_gpr(2, ctx.gpr[20] & ctx.gpr[2]);
    ctx.set_gpr(6, (ctx.gpr[2] >> 16u) & 0x0000FFFFu);
    ctx.set_gpr(2, ctx.gpr[20] & 65280u);
    ctx.set_gpr(7, (ctx.gpr[2] >> 8u) & 0x0000FFFFu);
    ctx.set_gpr(2, ctx.gpr[20] & 255u);
    ctx.set_gpr(3, 16888u << 16u);
    ctx.fpr[1] = std::bit_cast<float>(ctx.gpr[3]);
    { const bool branch_taken = static_cast<std::int32_t>(ctx.gpr[6]) < 0;
    // nop
      if (branch_taken) {
          goto L_089A89C8;
      }
      goto L_089A89B8;
    }
L_089A89B8:
    ctx.fpr[0] = std::bit_cast<float>(ctx.gpr[6]);
    ctx.fpr[0] = static_cast<float>(static_cast<std::int32_t>(ctx.fpr_bits(0)));
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_089A89E0;
      }
      goto L_089A89C8;
    }
L_089A89C8:
    ctx.set_gpr(5, ctx.gpr[6] >> 1u);
    ctx.set_gpr(3, ctx.gpr[6] & 1u);
    ctx.set_gpr(5, ctx.gpr[5] | ctx.gpr[3]);
    ctx.fpr[0] = std::bit_cast<float>(ctx.gpr[5]);
    ctx.fpr[0] = static_cast<float>(static_cast<std::int32_t>(ctx.fpr_bits(0)));
    ctx.fpr[0] = ctx.fpr[0] + ctx.fpr[0];
    goto L_089A89E0;
L_089A89E0:
    { const float fs = ctx.fpr[1]; const float ft = ctx.fpr[0]; if ((std::isinf(fs) && ft == 0.0f) || (std::isinf(ft) && fs == 0.0f)) ctx.set_fpr_bits(1, 0x7FC00000u); else ctx.fpr[1] = fs * ft; }
    ctx.set_gpr(3, 17279u << 16u);
    ctx.fpr[0] = std::bit_cast<float>(ctx.gpr[3]);
    ctx.fpr[1] = ctx.fpr[1] / ctx.fpr[0];
    ctx.set_gpr(3, 20224u << 16u);
    ctx.fpr[0] = std::bit_cast<float>(ctx.gpr[3]);
    ctx.set_fpu_condition((ctx.fpr[0] <= ctx.fpr[1]));
    // nop
    { const bool branch_taken = ctx.fpu_condition();
    // nop
      if (branch_taken) {
          goto L_089A8A18;
      }
      goto L_089A8A08;
    }
L_089A8A08:
    ctx.set_fpr_bits(0, ctx.fpu_float_to_word(ctx.fpr[1], 1u));
    ctx.set_gpr(3, std::bit_cast<std::uint32_t>(ctx.fpr[0]));
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_089A8A2C;
      }
      goto L_089A8A18;
    }
L_089A8A18:
    ctx.fpr[0] = ctx.fpr[1] - ctx.fpr[0];
    ctx.set_fpr_bits(0, ctx.fpu_float_to_word(ctx.fpr[0], 1u));
    ctx.set_gpr(5, std::bit_cast<std::uint32_t>(ctx.fpr[0]));
    ctx.set_gpr(3, 0u + static_cast<std::uint32_t>(-32768));
    ctx.set_gpr(3, ctx.gpr[5] | ctx.gpr[3]);
    goto L_089A8A2C;
L_089A8A2C:
    ctx.set_gpr(3, ctx.gpr[3] & 65535u);
    ctx.set_gpr(6, ctx.gpr[3] << 11u);
    ctx.set_gpr(3, 17020u << 16u);
    ctx.fpr[1] = std::bit_cast<float>(ctx.gpr[3]);
    { const bool branch_taken = static_cast<std::int32_t>(ctx.gpr[7]) < 0;
    // nop
      if (branch_taken) {
          goto L_089A8A54;
      }
      goto L_089A8A44;
    }
L_089A8A44:
    ctx.fpr[0] = std::bit_cast<float>(ctx.gpr[7]);
    ctx.fpr[0] = static_cast<float>(static_cast<std::int32_t>(ctx.fpr_bits(0)));
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_089A8A6C;
      }
      goto L_089A8A54;
    }
L_089A8A54:
    ctx.set_gpr(5, ctx.gpr[7] >> 1u);
    ctx.set_gpr(3, ctx.gpr[7] & 1u);
    ctx.set_gpr(5, ctx.gpr[5] | ctx.gpr[3]);
    ctx.fpr[0] = std::bit_cast<float>(ctx.gpr[5]);
    ctx.fpr[0] = static_cast<float>(static_cast<std::int32_t>(ctx.fpr_bits(0)));
    ctx.fpr[0] = ctx.fpr[0] + ctx.fpr[0];
    goto L_089A8A6C;
L_089A8A6C:
    { const float fs = ctx.fpr[1]; const float ft = ctx.fpr[0]; if ((std::isinf(fs) && ft == 0.0f) || (std::isinf(ft) && fs == 0.0f)) ctx.set_fpr_bits(1, 0x7FC00000u); else ctx.fpr[1] = fs * ft; }
    ctx.set_gpr(3, 17279u << 16u);
    ctx.fpr[0] = std::bit_cast<float>(ctx.gpr[3]);
    ctx.fpr[1] = ctx.fpr[1] / ctx.fpr[0];
    ctx.set_gpr(3, 20224u << 16u);
    ctx.fpr[0] = std::bit_cast<float>(ctx.gpr[3]);
    ctx.set_fpu_condition((ctx.fpr[0] <= ctx.fpr[1]));
    // nop
    { const bool branch_taken = ctx.fpu_condition();
    // nop
      if (branch_taken) {
          goto L_089A8AA4;
      }
      goto L_089A8A94;
    }
L_089A8A94:
    ctx.set_fpr_bits(0, ctx.fpu_float_to_word(ctx.fpr[1], 1u));
    ctx.set_gpr(3, std::bit_cast<std::uint32_t>(ctx.fpr[0]));
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_089A8AB8;
      }
      goto L_089A8AA4;
    }
L_089A8AA4:
    ctx.fpr[0] = ctx.fpr[1] - ctx.fpr[0];
    ctx.set_fpr_bits(0, ctx.fpu_float_to_word(ctx.fpr[0], 1u));
    ctx.set_gpr(5, std::bit_cast<std::uint32_t>(ctx.fpr[0]));
    ctx.set_gpr(3, 0u + static_cast<std::uint32_t>(-32768));
    ctx.set_gpr(3, ctx.gpr[5] | ctx.gpr[3]);
    goto L_089A8AB8;
L_089A8AB8:
    ctx.set_gpr(3, ctx.gpr[3] & 65535u);
    ctx.set_gpr(3, ctx.gpr[3] << 5u);
    ctx.set_gpr(5, ctx.gpr[6] | ctx.gpr[3]);
    ctx.set_gpr(3, 16888u << 16u);
    ctx.fpr[1] = std::bit_cast<float>(ctx.gpr[3]);
    { const bool branch_taken = static_cast<std::int32_t>(ctx.gpr[2]) < 0;
    // nop
      if (branch_taken) {
          goto L_089A8AE4;
      }
      goto L_089A8AD4;
    }
L_089A8AD4:
    ctx.fpr[0] = std::bit_cast<float>(ctx.gpr[2]);
    ctx.fpr[0] = static_cast<float>(static_cast<std::int32_t>(ctx.fpr_bits(0)));
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_089A8AFC;
      }
      goto L_089A8AE4;
    }
L_089A8AE4:
    ctx.set_gpr(3, ctx.gpr[2] >> 1u);
    ctx.set_gpr(2, ctx.gpr[2] & 1u);
    ctx.set_gpr(3, ctx.gpr[3] | ctx.gpr[2]);
    ctx.fpr[0] = std::bit_cast<float>(ctx.gpr[3]);
    ctx.fpr[0] = static_cast<float>(static_cast<std::int32_t>(ctx.fpr_bits(0)));
    ctx.fpr[0] = ctx.fpr[0] + ctx.fpr[0];
    goto L_089A8AFC;
L_089A8AFC:
    { const float fs = ctx.fpr[1]; const float ft = ctx.fpr[0]; if ((std::isinf(fs) && ft == 0.0f) || (std::isinf(ft) && fs == 0.0f)) ctx.set_fpr_bits(1, 0x7FC00000u); else ctx.fpr[1] = fs * ft; }
    ctx.set_gpr(2, 17279u << 16u);
    ctx.fpr[0] = std::bit_cast<float>(ctx.gpr[2]);
    ctx.fpr[1] = ctx.fpr[1] / ctx.fpr[0];
    ctx.set_gpr(2, 20224u << 16u);
    ctx.fpr[0] = std::bit_cast<float>(ctx.gpr[2]);
    ctx.set_fpu_condition((ctx.fpr[0] <= ctx.fpr[1]));
    // nop
    { const bool branch_taken = ctx.fpu_condition();
    // nop
      if (branch_taken) {
          goto L_089A8B34;
      }
      goto L_089A8B24;
    }
L_089A8B24:
    ctx.set_fpr_bits(0, ctx.fpu_float_to_word(ctx.fpr[1], 1u));
    ctx.set_gpr(2, std::bit_cast<std::uint32_t>(ctx.fpr[0]));
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_089A8B48;
      }
      goto L_089A8B34;
    }
L_089A8B34:
    ctx.fpr[0] = ctx.fpr[1] - ctx.fpr[0];
    ctx.set_fpr_bits(0, ctx.fpu_float_to_word(ctx.fpr[0], 1u));
    ctx.set_gpr(3, std::bit_cast<std::uint32_t>(ctx.fpr[0]));
    ctx.set_gpr(2, 0u + static_cast<std::uint32_t>(-32768));
    ctx.set_gpr(2, ctx.gpr[3] | ctx.gpr[2]);
    goto L_089A8B48;
L_089A8B48:
    ctx.set_gpr(2, ctx.gpr[2] & 65535u);
    ctx.set_gpr(2, ctx.gpr[2] | ctx.gpr[5]);
    ctx.set_gpr(6, ctx.gpr[2] & 65535u);
    ctx.set_gpr(2, 255u << 16u);
    ctx.set_gpr(2, ctx.gpr[19] & ctx.gpr[2]);
    ctx.set_gpr(8, (ctx.gpr[2] >> 16u) & 0x0000FFFFu);
    ctx.set_gpr(2, ctx.gpr[19] & 65280u);
    ctx.set_gpr(3, (ctx.gpr[2] >> 8u) & 0x0000FFFFu);
    ctx.set_gpr(2, ctx.gpr[19] & 255u);
    ctx.set_gpr(5, 16888u << 16u);
    ctx.fpr[1] = std::bit_cast<float>(ctx.gpr[5]);
    { const bool branch_taken = static_cast<std::int32_t>(ctx.gpr[8]) < 0;
    // nop
      if (branch_taken) {
          goto L_089A8B8C;
      }
      goto L_089A8B7C;
    }
L_089A8B7C:
    ctx.fpr[0] = std::bit_cast<float>(ctx.gpr[8]);
    ctx.fpr[0] = static_cast<float>(static_cast<std::int32_t>(ctx.fpr_bits(0)));
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_089A8BA4;
      }
      goto L_089A8B8C;
    }
L_089A8B8C:
    ctx.set_gpr(7, ctx.gpr[8] >> 1u);
    ctx.set_gpr(5, ctx.gpr[8] & 1u);
    ctx.set_gpr(7, ctx.gpr[7] | ctx.gpr[5]);
    ctx.fpr[0] = std::bit_cast<float>(ctx.gpr[7]);
    ctx.fpr[0] = static_cast<float>(static_cast<std::int32_t>(ctx.fpr_bits(0)));
    ctx.fpr[0] = ctx.fpr[0] + ctx.fpr[0];
    goto L_089A8BA4;
L_089A8BA4:
    { const float fs = ctx.fpr[1]; const float ft = ctx.fpr[0]; if ((std::isinf(fs) && ft == 0.0f) || (std::isinf(ft) && fs == 0.0f)) ctx.set_fpr_bits(1, 0x7FC00000u); else ctx.fpr[1] = fs * ft; }
    ctx.set_gpr(5, 17279u << 16u);
    ctx.fpr[0] = std::bit_cast<float>(ctx.gpr[5]);
    ctx.fpr[1] = ctx.fpr[1] / ctx.fpr[0];
    ctx.set_gpr(5, 20224u << 16u);
    ctx.fpr[0] = std::bit_cast<float>(ctx.gpr[5]);
    ctx.set_fpu_condition((ctx.fpr[0] <= ctx.fpr[1]));
    // nop
    { const bool branch_taken = ctx.fpu_condition();
    // nop
      if (branch_taken) {
          goto L_089A8BDC;
      }
      goto L_089A8BCC;
    }
L_089A8BCC:
    ctx.set_fpr_bits(0, ctx.fpu_float_to_word(ctx.fpr[1], 1u));
    ctx.set_gpr(5, std::bit_cast<std::uint32_t>(ctx.fpr[0]));
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_089A8BF0;
      }
      goto L_089A8BDC;
    }
L_089A8BDC:
    ctx.fpr[0] = ctx.fpr[1] - ctx.fpr[0];
    ctx.set_fpr_bits(0, ctx.fpu_float_to_word(ctx.fpr[0], 1u));
    ctx.set_gpr(7, std::bit_cast<std::uint32_t>(ctx.fpr[0]));
    ctx.set_gpr(5, 0u + static_cast<std::uint32_t>(-32768));
    ctx.set_gpr(5, ctx.gpr[7] | ctx.gpr[5]);
    goto L_089A8BF0;
L_089A8BF0:
    ctx.set_gpr(5, ctx.gpr[5] & 65535u);
    ctx.set_gpr(7, ctx.gpr[5] << 11u);
    ctx.set_gpr(5, 17020u << 16u);
    ctx.fpr[1] = std::bit_cast<float>(ctx.gpr[5]);
    { const bool branch_taken = static_cast<std::int32_t>(ctx.gpr[3]) < 0;
    // nop
      if (branch_taken) {
          goto L_089A8C18;
      }
      goto L_089A8C08;
    }
L_089A8C08:
    ctx.fpr[0] = std::bit_cast<float>(ctx.gpr[3]);
    ctx.fpr[0] = static_cast<float>(static_cast<std::int32_t>(ctx.fpr_bits(0)));
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_089A8C30;
      }
      goto L_089A8C18;
    }
L_089A8C18:
    ctx.set_gpr(5, ctx.gpr[3] >> 1u);
    ctx.set_gpr(3, ctx.gpr[3] & 1u);
    ctx.set_gpr(5, ctx.gpr[5] | ctx.gpr[3]);
    ctx.fpr[0] = std::bit_cast<float>(ctx.gpr[5]);
    ctx.fpr[0] = static_cast<float>(static_cast<std::int32_t>(ctx.fpr_bits(0)));
    ctx.fpr[0] = ctx.fpr[0] + ctx.fpr[0];
    goto L_089A8C30;
L_089A8C30:
    { const float fs = ctx.fpr[1]; const float ft = ctx.fpr[0]; if ((std::isinf(fs) && ft == 0.0f) || (std::isinf(ft) && fs == 0.0f)) ctx.set_fpr_bits(1, 0x7FC00000u); else ctx.fpr[1] = fs * ft; }
    ctx.set_gpr(3, 17279u << 16u);
    ctx.fpr[0] = std::bit_cast<float>(ctx.gpr[3]);
    ctx.fpr[1] = ctx.fpr[1] / ctx.fpr[0];
    ctx.set_gpr(3, 20224u << 16u);
    ctx.fpr[0] = std::bit_cast<float>(ctx.gpr[3]);
    ctx.set_fpu_condition((ctx.fpr[0] <= ctx.fpr[1]));
    // nop
    { const bool branch_taken = ctx.fpu_condition();
    // nop
      if (branch_taken) {
          goto L_089A8C68;
      }
      goto L_089A8C58;
    }
L_089A8C58:
    ctx.set_fpr_bits(0, ctx.fpu_float_to_word(ctx.fpr[1], 1u));
    ctx.set_gpr(3, std::bit_cast<std::uint32_t>(ctx.fpr[0]));
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_089A8C7C;
      }
      goto L_089A8C68;
    }
L_089A8C68:
    ctx.fpr[0] = ctx.fpr[1] - ctx.fpr[0];
    ctx.set_fpr_bits(0, ctx.fpu_float_to_word(ctx.fpr[0], 1u));
    ctx.set_gpr(5, std::bit_cast<std::uint32_t>(ctx.fpr[0]));
    ctx.set_gpr(3, 0u + static_cast<std::uint32_t>(-32768));
    ctx.set_gpr(3, ctx.gpr[5] | ctx.gpr[3]);
    goto L_089A8C7C;
L_089A8C7C:
    ctx.set_gpr(3, ctx.gpr[3] & 65535u);
    ctx.set_gpr(3, ctx.gpr[3] << 5u);
    ctx.set_gpr(5, ctx.gpr[7] | ctx.gpr[3]);
    ctx.set_gpr(3, 16888u << 16u);
    ctx.fpr[1] = std::bit_cast<float>(ctx.gpr[3]);
    { const bool branch_taken = static_cast<std::int32_t>(ctx.gpr[2]) < 0;
    // nop
      if (branch_taken) {
          goto L_089A8CA8;
      }
      goto L_089A8C98;
    }
L_089A8C98:
    ctx.fpr[0] = std::bit_cast<float>(ctx.gpr[2]);
    ctx.fpr[0] = static_cast<float>(static_cast<std::int32_t>(ctx.fpr_bits(0)));
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_089A8CC0;
      }
      goto L_089A8CA8;
    }
L_089A8CA8:
    ctx.set_gpr(3, ctx.gpr[2] >> 1u);
    ctx.set_gpr(2, ctx.gpr[2] & 1u);
    ctx.set_gpr(3, ctx.gpr[3] | ctx.gpr[2]);
    ctx.fpr[0] = std::bit_cast<float>(ctx.gpr[3]);
    ctx.fpr[0] = static_cast<float>(static_cast<std::int32_t>(ctx.fpr_bits(0)));
    ctx.fpr[0] = ctx.fpr[0] + ctx.fpr[0];
    goto L_089A8CC0;
L_089A8CC0:
    { const float fs = ctx.fpr[1]; const float ft = ctx.fpr[0]; if ((std::isinf(fs) && ft == 0.0f) || (std::isinf(ft) && fs == 0.0f)) ctx.set_fpr_bits(1, 0x7FC00000u); else ctx.fpr[1] = fs * ft; }
    ctx.set_gpr(2, 17279u << 16u);
    ctx.fpr[0] = std::bit_cast<float>(ctx.gpr[2]);
    ctx.fpr[1] = ctx.fpr[1] / ctx.fpr[0];
    ctx.set_gpr(2, 20224u << 16u);
    ctx.fpr[0] = std::bit_cast<float>(ctx.gpr[2]);
    ctx.set_fpu_condition((ctx.fpr[0] <= ctx.fpr[1]));
    // nop
    { const bool branch_taken = ctx.fpu_condition();
    // nop
      if (branch_taken) {
          goto L_089A8CF8;
      }
      goto L_089A8CE8;
    }
L_089A8CE8:
    ctx.set_fpr_bits(0, ctx.fpu_float_to_word(ctx.fpr[1], 1u));
    ctx.set_gpr(2, std::bit_cast<std::uint32_t>(ctx.fpr[0]));
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_089A8D0C;
      }
      goto L_089A8CF8;
    }
L_089A8CF8:
    ctx.fpr[0] = ctx.fpr[1] - ctx.fpr[0];
    ctx.set_fpr_bits(0, ctx.fpu_float_to_word(ctx.fpr[0], 1u));
    ctx.set_gpr(3, std::bit_cast<std::uint32_t>(ctx.fpr[0]));
    ctx.set_gpr(2, 0u + static_cast<std::uint32_t>(-32768));
    ctx.set_gpr(2, ctx.gpr[3] | ctx.gpr[2]);
    goto L_089A8D0C;
L_089A8D0C:
    ctx.set_gpr(2, ctx.gpr[2] & 65535u);
    ctx.set_gpr(2, ctx.gpr[2] | ctx.gpr[5]);
    ctx.set_gpr(5, ctx.gpr[2] & 65535u);
    ctx.set_gpr(3, ctx.gpr[5] << 16u);
    ctx.set_gpr(2, ctx.gpr[6] & 65535u);
    ctx.set_gpr(2, ctx.gpr[3] | ctx.gpr[2]);
    rt.memory().aot_store32(ctx.gpr[4] + static_cast<std::uint32_t>(0), ctx.gpr[2]);
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_089A8D44;
      }
      goto L_089A8D30;
    }
L_089A8D30:
    ctx.set_gpr(2, (ctx.gpr[19] >> 24u) & 0x000000FFu);
    ctx.set_gpr(3, ctx.gpr[2] << 8u);
    ctx.set_gpr(2, (ctx.gpr[20] >> 24u) & 0x000000FFu);
    ctx.set_gpr(2, ctx.gpr[3] | ctx.gpr[2]);
    rt.memory().aot_store32(ctx.gpr[4] + static_cast<std::uint32_t>(0), ctx.gpr[2]);
    goto L_089A8D44;
L_089A8D44:
    ctx.set_gpr(4, ctx.gpr[6] + 0u);
    ctx.set_gpr(6, ctx.gpr[17] + 0u);
    ctx.set_gpr(7, ctx.gpr[22] + 0u);
    ctx.set_gpr(8, ctx.gpr[18] + 0u);
    ctx.set_gpr(9, ctx.gpr[16] + 0u);
    ctx.set_gpr(31, 0x089A8D60u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0104_entry, 104u, 684u, 0x089A7204u>(ctx, &aot_mem) && ctx.pc == 0x089A8D60u) goto L_089A8D60;
    return;
L_089A8D60:
    ctx.set_gpr(3, rt.memory().aot_load32(ctx.gpr[18] + static_cast<std::uint32_t>(8)));
    { const bool branch_taken = ctx.gpr[3] == 0u;
    // nop
      if (branch_taken) {
          goto L_089A8D7C;
      }
      goto L_089A8D6C;
    }
L_089A8D6C:
    { const bool branch_taken = static_cast<std::int32_t>(ctx.gpr[3]) <= 0;
    // nop
      if (branch_taken) {
          goto L_089A8D7C;
      }
      goto L_089A8D74;
    }
L_089A8D74:
    ctx.set_gpr(3, rt.memory().aot_load32(ctx.gpr[18] + static_cast<std::uint32_t>(16)));
    rt.memory().aot_store32(ctx.gpr[3] + static_cast<std::uint32_t>(0), ctx.gpr[20]);
    goto L_089A8D7C;
L_089A8D7C:
    ctx.set_gpr(3, rt.memory().aot_load32(ctx.gpr[18] + static_cast<std::uint32_t>(8)));
    { const bool branch_taken = ctx.gpr[3] == 0u;
    // nop
      if (branch_taken) {
          goto L_089A8D9C;
      }
      goto L_089A8D88;
    }
L_089A8D88:
    ctx.set_gpr(1, static_cast<std::int32_t>(ctx.gpr[3]) < 2 ? 1u : 0u);
    { const bool branch_taken = ctx.gpr[1] != 0u;
    // nop
      if (branch_taken) {
          goto L_089A8D9C;
      }
      goto L_089A8D94;
    }
L_089A8D94:
    ctx.set_gpr(3, rt.memory().aot_load32(ctx.gpr[18] + static_cast<std::uint32_t>(16)));
    rt.memory().aot_store32(ctx.gpr[3] + static_cast<std::uint32_t>(4), ctx.gpr[19]);
    goto L_089A8D9C;
L_089A8D9C:
    { const bool branch_taken = ctx.gpr[16] != 0u;
    // nop
      if (branch_taken) {
          goto L_089A9230;
      }
      goto L_089A8DA4;
    }
L_089A8DA4:
    ctx.set_gpr(3, rt.memory().aot_load32(ctx.gpr[18] + static_cast<std::uint32_t>(8)));
    ctx.set_gpr(2, 0u + static_cast<std::uint32_t>(3));
    { const bool branch_taken = ctx.gpr[3] != ctx.gpr[2];
    // nop
      if (branch_taken) {
          goto L_089A8E58;
      }
      goto L_089A8DB4;
    }
L_089A8DB4:
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(92), 0u);
    ctx.set_gpr(2, rt.memory().aot_load32(ctx.gpr[18] + static_cast<std::uint32_t>(16)));
    ctx.set_gpr(4, rt.memory().aot_load32(ctx.gpr[2] + static_cast<std::uint32_t>(0)));
    ctx.set_gpr(5, ctx.gpr[29] + static_cast<std::uint32_t>(88));
    ctx.set_gpr(6, ctx.gpr[29] + static_cast<std::uint32_t>(84));
    ctx.set_gpr(7, ctx.gpr[29] + static_cast<std::uint32_t>(80));
    ctx.set_gpr(31, 0x089A8DD4u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0104_entry, 104u, 664u, 0x089A7010u>(ctx, &aot_mem) && ctx.pc == 0x089A8DD4u) goto L_089A8DD4;
    return;
L_089A8DD4:
    ctx.set_gpr(2, rt.memory().aot_load32(ctx.gpr[18] + static_cast<std::uint32_t>(16)));
    ctx.set_gpr(4, rt.memory().aot_load32(ctx.gpr[2] + static_cast<std::uint32_t>(4)));
    ctx.set_gpr(5, ctx.gpr[29] + static_cast<std::uint32_t>(89));
    ctx.set_gpr(6, ctx.gpr[29] + static_cast<std::uint32_t>(85));
    ctx.set_gpr(7, ctx.gpr[29] + static_cast<std::uint32_t>(81));
    ctx.set_gpr(31, 0x089A8DF0u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0104_entry, 104u, 664u, 0x089A7010u>(ctx, &aot_mem) && ctx.pc == 0x089A8DF0u) goto L_089A8DF0;
    return;
L_089A8DF0:
    ctx.set_gpr(3, rt.memory().aot_load8(ctx.gpr[29] + static_cast<std::uint32_t>(88)));
    ctx.set_gpr(2, rt.memory().aot_load8(ctx.gpr[29] + static_cast<std::uint32_t>(89)));
    ctx.set_gpr(2, ctx.gpr[3] + ctx.gpr[2]);
    ctx.set_gpr(5, (ctx.gpr[2] >> 1u) & 0x000000FFu);
    ctx.set_gpr(3, rt.memory().aot_load8(ctx.gpr[29] + static_cast<std::uint32_t>(84)));
    ctx.set_gpr(2, rt.memory().aot_load8(ctx.gpr[29] + static_cast<std::uint32_t>(85)));
    ctx.set_gpr(2, ctx.gpr[3] + ctx.gpr[2]);
    ctx.set_gpr(6, (ctx.gpr[2] >> 1u) & 0x000000FFu);
    ctx.set_gpr(3, rt.memory().aot_load8(ctx.gpr[29] + static_cast<std::uint32_t>(80)));
    ctx.set_gpr(2, rt.memory().aot_load8(ctx.gpr[29] + static_cast<std::uint32_t>(81)));
    ctx.set_gpr(2, ctx.gpr[3] + ctx.gpr[2]);
    ctx.set_gpr(7, (ctx.gpr[2] >> 1u) & 0x000000FFu);
    ctx.set_gpr(4, ctx.gpr[29] + static_cast<std::uint32_t>(92));
    ctx.set_gpr(31, 0x089A8E2Cu);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0104_entry, 104u, 665u, 0x089A7038u>(ctx, &aot_mem) && ctx.pc == 0x089A8E2Cu) goto L_089A8E2C;
    return;
L_089A8E2C:
    ctx.set_gpr(3, rt.memory().aot_load32(ctx.gpr[18] + static_cast<std::uint32_t>(8)));
    { const bool branch_taken = ctx.gpr[3] == 0u;
    // nop
      if (branch_taken) {
          goto L_089A99A0;
      }
      goto L_089A8E38;
    }
L_089A8E38:
    ctx.set_gpr(1, static_cast<std::int32_t>(ctx.gpr[3]) < 3 ? 1u : 0u);
    { const bool branch_taken = ctx.gpr[1] != 0u;
    // nop
      if (branch_taken) {
          goto L_089A99A0;
      }
      goto L_089A8E44;
    }
L_089A8E44:
    ctx.set_gpr(4, rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(92)));
    ctx.set_gpr(3, rt.memory().aot_load32(ctx.gpr[18] + static_cast<std::uint32_t>(16)));
    rt.memory().aot_store32(ctx.gpr[3] + static_cast<std::uint32_t>(8), ctx.gpr[4]);
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_089A99A0;
      }
      goto L_089A8E58;
    }
L_089A8E58:
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(76), 0u);
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(72), 0u);
    ctx.set_gpr(2, rt.memory().aot_load32(ctx.gpr[18] + static_cast<std::uint32_t>(16)));
    ctx.set_gpr(4, rt.memory().aot_load32(ctx.gpr[2] + static_cast<std::uint32_t>(0)));
    ctx.set_gpr(5, ctx.gpr[29] + static_cast<std::uint32_t>(68));
    ctx.set_gpr(6, ctx.gpr[29] + static_cast<std::uint32_t>(64));
    ctx.set_gpr(7, ctx.gpr[29] + static_cast<std::uint32_t>(60));
    ctx.set_gpr(31, 0x089A8E7Cu);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0104_entry, 104u, 664u, 0x089A7010u>(ctx, &aot_mem) && ctx.pc == 0x089A8E7Cu) goto L_089A8E7C;
    return;
L_089A8E7C:
    ctx.set_gpr(2, rt.memory().aot_load32(ctx.gpr[18] + static_cast<std::uint32_t>(16)));
    ctx.set_gpr(4, rt.memory().aot_load32(ctx.gpr[2] + static_cast<std::uint32_t>(4)));
    ctx.set_gpr(5, ctx.gpr[29] + static_cast<std::uint32_t>(69));
    ctx.set_gpr(6, ctx.gpr[29] + static_cast<std::uint32_t>(65));
    ctx.set_gpr(7, ctx.gpr[29] + static_cast<std::uint32_t>(61));
    ctx.set_gpr(31, 0x089A8E98u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0104_entry, 104u, 664u, 0x089A7010u>(ctx, &aot_mem) && ctx.pc == 0x089A8E98u) goto L_089A8E98;
    return;
L_089A8E98:
    ctx.set_gpr(2, rt.memory().aot_load8(ctx.gpr[29] + static_cast<std::uint32_t>(69)));
    ctx.set_gpr(3, ctx.gpr[2] << 1u);
    ctx.set_gpr(2, rt.memory().aot_load8(ctx.gpr[29] + static_cast<std::uint32_t>(68)));
    ctx.set_gpr(2, ctx.gpr[3] + ctx.gpr[2]);
    { const bool branch_taken = static_cast<std::int32_t>(ctx.gpr[2]) < 0;
    // nop
      if (branch_taken) {
          goto L_089A8EC0;
      }
      goto L_089A8EB0;
    }
L_089A8EB0:
    ctx.fpr[0] = std::bit_cast<float>(ctx.gpr[2]);
    ctx.fpr[1] = static_cast<float>(static_cast<std::int32_t>(ctx.fpr_bits(0)));
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_089A8ED8;
      }
      goto L_089A8EC0;
    }
L_089A8EC0:
    ctx.set_gpr(3, ctx.gpr[2] >> 1u);
    ctx.set_gpr(2, ctx.gpr[2] & 1u);
    ctx.set_gpr(3, ctx.gpr[3] | ctx.gpr[2]);
    ctx.fpr[0] = std::bit_cast<float>(ctx.gpr[3]);
    ctx.fpr[1] = static_cast<float>(static_cast<std::int32_t>(ctx.fpr_bits(0)));
    ctx.fpr[1] = ctx.fpr[1] + ctx.fpr[1];
    goto L_089A8ED8;
L_089A8ED8:
    ctx.set_gpr(2, 16448u << 16u);
    ctx.fpr[0] = std::bit_cast<float>(ctx.gpr[2]);
    ctx.fpr[1] = ctx.fpr[1] / ctx.fpr[0];
    ctx.set_gpr(2, 20224u << 16u);
    ctx.fpr[0] = std::bit_cast<float>(ctx.gpr[2]);
    ctx.set_fpu_condition((ctx.fpr[0] <= ctx.fpr[1]));
    // nop
    { const bool branch_taken = ctx.fpu_condition();
    // nop
      if (branch_taken) {
          goto L_089A8F0C;
      }
      goto L_089A8EFC;
    }
L_089A8EFC:
    ctx.set_fpr_bits(0, ctx.fpu_float_to_word(ctx.fpr[1], 1u));
    ctx.set_gpr(5, std::bit_cast<std::uint32_t>(ctx.fpr[0]));
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_089A8F20;
      }
      goto L_089A8F0C;
    }
L_089A8F0C:
    ctx.fpr[0] = ctx.fpr[1] - ctx.fpr[0];
    ctx.set_fpr_bits(0, ctx.fpu_float_to_word(ctx.fpr[0], 1u));
    ctx.set_gpr(3, std::bit_cast<std::uint32_t>(ctx.fpr[0]));
    ctx.set_gpr(2, 0u + static_cast<std::uint32_t>(-32768));
    ctx.set_gpr(5, ctx.gpr[3] | ctx.gpr[2]);
    goto L_089A8F20;
L_089A8F20:
    ctx.set_gpr(2, rt.memory().aot_load8(ctx.gpr[29] + static_cast<std::uint32_t>(65)));
    ctx.set_gpr(3, ctx.gpr[2] << 1u);
    ctx.set_gpr(2, rt.memory().aot_load8(ctx.gpr[29] + static_cast<std::uint32_t>(64)));
    ctx.set_gpr(2, ctx.gpr[3] + ctx.gpr[2]);
    { const bool branch_taken = static_cast<std::int32_t>(ctx.gpr[2]) < 0;
    // nop
      if (branch_taken) {
          goto L_089A8F48;
      }
      goto L_089A8F38;
    }
L_089A8F38:
    ctx.fpr[0] = std::bit_cast<float>(ctx.gpr[2]);
    ctx.fpr[1] = static_cast<float>(static_cast<std::int32_t>(ctx.fpr_bits(0)));
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_089A8F60;
      }
      goto L_089A8F48;
    }
L_089A8F48:
    ctx.set_gpr(3, ctx.gpr[2] >> 1u);
    ctx.set_gpr(2, ctx.gpr[2] & 1u);
    ctx.set_gpr(3, ctx.gpr[3] | ctx.gpr[2]);
    ctx.fpr[0] = std::bit_cast<float>(ctx.gpr[3]);
    ctx.fpr[1] = static_cast<float>(static_cast<std::int32_t>(ctx.fpr_bits(0)));
    ctx.fpr[1] = ctx.fpr[1] + ctx.fpr[1];
    goto L_089A8F60;
L_089A8F60:
    ctx.set_gpr(2, 16448u << 16u);
    ctx.fpr[0] = std::bit_cast<float>(ctx.gpr[2]);
    ctx.fpr[1] = ctx.fpr[1] / ctx.fpr[0];
    ctx.set_gpr(2, 20224u << 16u);
    ctx.fpr[0] = std::bit_cast<float>(ctx.gpr[2]);
    ctx.set_fpu_condition((ctx.fpr[0] <= ctx.fpr[1]));
    // nop
    { const bool branch_taken = ctx.fpu_condition();
    // nop
      if (branch_taken) {
          goto L_089A8F94;
      }
      goto L_089A8F84;
    }
L_089A8F84:
    ctx.set_fpr_bits(0, ctx.fpu_float_to_word(ctx.fpr[1], 1u));
    ctx.set_gpr(6, std::bit_cast<std::uint32_t>(ctx.fpr[0]));
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_089A8FA8;
      }
      goto L_089A8F94;
    }
L_089A8F94:
    ctx.fpr[0] = ctx.fpr[1] - ctx.fpr[0];
    ctx.set_fpr_bits(0, ctx.fpu_float_to_word(ctx.fpr[0], 1u));
    ctx.set_gpr(3, std::bit_cast<std::uint32_t>(ctx.fpr[0]));
    ctx.set_gpr(2, 0u + static_cast<std::uint32_t>(-32768));
    ctx.set_gpr(6, ctx.gpr[3] | ctx.gpr[2]);
    goto L_089A8FA8;
L_089A8FA8:
    ctx.set_gpr(2, rt.memory().aot_load8(ctx.gpr[29] + static_cast<std::uint32_t>(61)));
    ctx.set_gpr(3, ctx.gpr[2] << 1u);
    ctx.set_gpr(2, rt.memory().aot_load8(ctx.gpr[29] + static_cast<std::uint32_t>(60)));
    ctx.set_gpr(2, ctx.gpr[3] + ctx.gpr[2]);
    { const bool branch_taken = static_cast<std::int32_t>(ctx.gpr[2]) < 0;
    // nop
      if (branch_taken) {
          goto L_089A8FD0;
      }
      goto L_089A8FC0;
    }
L_089A8FC0:
    ctx.fpr[0] = std::bit_cast<float>(ctx.gpr[2]);
    ctx.fpr[1] = static_cast<float>(static_cast<std::int32_t>(ctx.fpr_bits(0)));
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_089A8FE8;
      }
      goto L_089A8FD0;
    }
L_089A8FD0:
    ctx.set_gpr(3, ctx.gpr[2] >> 1u);
    ctx.set_gpr(2, ctx.gpr[2] & 1u);
    ctx.set_gpr(3, ctx.gpr[3] | ctx.gpr[2]);
    ctx.fpr[0] = std::bit_cast<float>(ctx.gpr[3]);
    ctx.fpr[1] = static_cast<float>(static_cast<std::int32_t>(ctx.fpr_bits(0)));
    ctx.fpr[1] = ctx.fpr[1] + ctx.fpr[1];
    goto L_089A8FE8;
L_089A8FE8:
    ctx.set_gpr(2, 16448u << 16u);
    ctx.fpr[0] = std::bit_cast<float>(ctx.gpr[2]);
    ctx.fpr[1] = ctx.fpr[1] / ctx.fpr[0];
    ctx.set_gpr(2, 20224u << 16u);
    ctx.fpr[0] = std::bit_cast<float>(ctx.gpr[2]);
    ctx.set_fpu_condition((ctx.fpr[0] <= ctx.fpr[1]));
    // nop
    { const bool branch_taken = ctx.fpu_condition();
    // nop
      if (branch_taken) {
          goto L_089A901C;
      }
      goto L_089A900C;
    }
L_089A900C:
    ctx.set_fpr_bits(0, ctx.fpu_float_to_word(ctx.fpr[1], 1u));
    ctx.set_gpr(7, std::bit_cast<std::uint32_t>(ctx.fpr[0]));
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_089A9030;
      }
      goto L_089A901C;
    }
L_089A901C:
    ctx.fpr[0] = ctx.fpr[1] - ctx.fpr[0];
    ctx.set_fpr_bits(0, ctx.fpu_float_to_word(ctx.fpr[0], 1u));
    ctx.set_gpr(3, std::bit_cast<std::uint32_t>(ctx.fpr[0]));
    ctx.set_gpr(2, 0u + static_cast<std::uint32_t>(-32768));
    ctx.set_gpr(7, ctx.gpr[3] | ctx.gpr[2]);
    goto L_089A9030;
L_089A9030:
    ctx.set_gpr(4, ctx.gpr[29] + static_cast<std::uint32_t>(76));
    ctx.set_gpr(31, 0x089A903Cu);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0104_entry, 104u, 665u, 0x089A7038u>(ctx, &aot_mem) && ctx.pc == 0x089A903Cu) goto L_089A903C;
    return;
L_089A903C:
    ctx.set_gpr(2, rt.memory().aot_load8(ctx.gpr[29] + static_cast<std::uint32_t>(68)));
    ctx.set_gpr(3, ctx.gpr[2] << 1u);
    ctx.set_gpr(2, rt.memory().aot_load8(ctx.gpr[29] + static_cast<std::uint32_t>(69)));
    ctx.set_gpr(2, ctx.gpr[3] + ctx.gpr[2]);
    { const bool branch_taken = static_cast<std::int32_t>(ctx.gpr[2]) < 0;
    // nop
      if (branch_taken) {
          goto L_089A9064;
      }
      goto L_089A9054;
    }
L_089A9054:
    ctx.fpr[0] = std::bit_cast<float>(ctx.gpr[2]);
    ctx.fpr[1] = static_cast<float>(static_cast<std::int32_t>(ctx.fpr_bits(0)));
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_089A907C;
      }
      goto L_089A9064;
    }
L_089A9064:
    ctx.set_gpr(3, ctx.gpr[2] >> 1u);
    ctx.set_gpr(2, ctx.gpr[2] & 1u);
    ctx.set_gpr(3, ctx.gpr[3] | ctx.gpr[2]);
    ctx.fpr[0] = std::bit_cast<float>(ctx.gpr[3]);
    ctx.fpr[1] = static_cast<float>(static_cast<std::int32_t>(ctx.fpr_bits(0)));
    ctx.fpr[1] = ctx.fpr[1] + ctx.fpr[1];
    goto L_089A907C;
L_089A907C:
    ctx.set_gpr(2, 16448u << 16u);
    ctx.fpr[0] = std::bit_cast<float>(ctx.gpr[2]);
    ctx.fpr[1] = ctx.fpr[1] / ctx.fpr[0];
    ctx.set_gpr(2, 20224u << 16u);
    ctx.fpr[0] = std::bit_cast<float>(ctx.gpr[2]);
    ctx.set_fpu_condition((ctx.fpr[0] <= ctx.fpr[1]));
    // nop
    { const bool branch_taken = ctx.fpu_condition();
    // nop
      if (branch_taken) {
          goto L_089A90B0;
      }
      goto L_089A90A0;
    }
L_089A90A0:
    ctx.set_fpr_bits(0, ctx.fpu_float_to_word(ctx.fpr[1], 1u));
    ctx.set_gpr(5, std::bit_cast<std::uint32_t>(ctx.fpr[0]));
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_089A90C4;
      }
      goto L_089A90B0;
    }
L_089A90B0:
    ctx.fpr[0] = ctx.fpr[1] - ctx.fpr[0];
    ctx.set_fpr_bits(0, ctx.fpu_float_to_word(ctx.fpr[0], 1u));
    ctx.set_gpr(3, std::bit_cast<std::uint32_t>(ctx.fpr[0]));
    ctx.set_gpr(2, 0u + static_cast<std::uint32_t>(-32768));
    ctx.set_gpr(5, ctx.gpr[3] | ctx.gpr[2]);
    goto L_089A90C4;
L_089A90C4:
    ctx.set_gpr(2, rt.memory().aot_load8(ctx.gpr[29] + static_cast<std::uint32_t>(64)));
    ctx.set_gpr(3, ctx.gpr[2] << 1u);
    ctx.set_gpr(2, rt.memory().aot_load8(ctx.gpr[29] + static_cast<std::uint32_t>(65)));
    ctx.set_gpr(2, ctx.gpr[3] + ctx.gpr[2]);
    { const bool branch_taken = static_cast<std::int32_t>(ctx.gpr[2]) < 0;
    // nop
      if (branch_taken) {
          goto L_089A90EC;
      }
      goto L_089A90DC;
    }
L_089A90DC:
    ctx.fpr[0] = std::bit_cast<float>(ctx.gpr[2]);
    ctx.fpr[1] = static_cast<float>(static_cast<std::int32_t>(ctx.fpr_bits(0)));
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_089A9104;
      }
      goto L_089A90EC;
    }
L_089A90EC:
    ctx.set_gpr(3, ctx.gpr[2] >> 1u);
    ctx.set_gpr(2, ctx.gpr[2] & 1u);
    ctx.set_gpr(3, ctx.gpr[3] | ctx.gpr[2]);
    ctx.fpr[0] = std::bit_cast<float>(ctx.gpr[3]);
    ctx.fpr[1] = static_cast<float>(static_cast<std::int32_t>(ctx.fpr_bits(0)));
    ctx.fpr[1] = ctx.fpr[1] + ctx.fpr[1];
    goto L_089A9104;
L_089A9104:
    ctx.set_gpr(2, 16448u << 16u);
    ctx.fpr[0] = std::bit_cast<float>(ctx.gpr[2]);
    ctx.fpr[1] = ctx.fpr[1] / ctx.fpr[0];
    ctx.set_gpr(2, 20224u << 16u);
    ctx.fpr[0] = std::bit_cast<float>(ctx.gpr[2]);
    ctx.set_fpu_condition((ctx.fpr[0] <= ctx.fpr[1]));
    // nop
    { const bool branch_taken = ctx.fpu_condition();
    // nop
      if (branch_taken) {
          goto L_089A9138;
      }
      goto L_089A9128;
    }
L_089A9128:
    ctx.set_fpr_bits(0, ctx.fpu_float_to_word(ctx.fpr[1], 1u));
    ctx.set_gpr(6, std::bit_cast<std::uint32_t>(ctx.fpr[0]));
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_089A914C;
      }
      goto L_089A9138;
    }
L_089A9138:
    ctx.fpr[0] = ctx.fpr[1] - ctx.fpr[0];
    ctx.set_fpr_bits(0, ctx.fpu_float_to_word(ctx.fpr[0], 1u));
    ctx.set_gpr(3, std::bit_cast<std::uint32_t>(ctx.fpr[0]));
    ctx.set_gpr(2, 0u + static_cast<std::uint32_t>(-32768));
    ctx.set_gpr(6, ctx.gpr[3] | ctx.gpr[2]);
    goto L_089A914C;
L_089A914C:
    ctx.set_gpr(2, rt.memory().aot_load8(ctx.gpr[29] + static_cast<std::uint32_t>(60)));
    ctx.set_gpr(3, ctx.gpr[2] << 1u);
    ctx.set_gpr(2, rt.memory().aot_load8(ctx.gpr[29] + static_cast<std::uint32_t>(61)));
    ctx.set_gpr(2, ctx.gpr[3] + ctx.gpr[2]);
    { const bool branch_taken = static_cast<std::int32_t>(ctx.gpr[2]) < 0;
    // nop
      if (branch_taken) {
          goto L_089A9174;
      }
      goto L_089A9164;
    }
L_089A9164:
    ctx.fpr[0] = std::bit_cast<float>(ctx.gpr[2]);
    ctx.fpr[1] = static_cast<float>(static_cast<std::int32_t>(ctx.fpr_bits(0)));
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_089A918C;
      }
      goto L_089A9174;
    }
L_089A9174:
    ctx.set_gpr(3, ctx.gpr[2] >> 1u);
    ctx.set_gpr(2, ctx.gpr[2] & 1u);
    ctx.set_gpr(3, ctx.gpr[3] | ctx.gpr[2]);
    ctx.fpr[0] = std::bit_cast<float>(ctx.gpr[3]);
    ctx.fpr[1] = static_cast<float>(static_cast<std::int32_t>(ctx.fpr_bits(0)));
    ctx.fpr[1] = ctx.fpr[1] + ctx.fpr[1];
    goto L_089A918C;
L_089A918C:
    ctx.set_gpr(2, 16448u << 16u);
    ctx.fpr[0] = std::bit_cast<float>(ctx.gpr[2]);
    ctx.fpr[1] = ctx.fpr[1] / ctx.fpr[0];
    ctx.set_gpr(2, 20224u << 16u);
    ctx.fpr[0] = std::bit_cast<float>(ctx.gpr[2]);
    ctx.set_fpu_condition((ctx.fpr[0] <= ctx.fpr[1]));
    // nop
    { const bool branch_taken = ctx.fpu_condition();
    // nop
      if (branch_taken) {
          goto L_089A91C0;
      }
      goto L_089A91B0;
    }
L_089A91B0:
    ctx.set_fpr_bits(0, ctx.fpu_float_to_word(ctx.fpr[1], 1u));
    ctx.set_gpr(7, std::bit_cast<std::uint32_t>(ctx.fpr[0]));
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_089A91D4;
      }
      goto L_089A91C0;
    }
L_089A91C0:
    ctx.fpr[0] = ctx.fpr[1] - ctx.fpr[0];
    ctx.set_fpr_bits(0, ctx.fpu_float_to_word(ctx.fpr[0], 1u));
    ctx.set_gpr(3, std::bit_cast<std::uint32_t>(ctx.fpr[0]));
    ctx.set_gpr(2, 0u + static_cast<std::uint32_t>(-32768));
    ctx.set_gpr(7, ctx.gpr[3] | ctx.gpr[2]);
    goto L_089A91D4;
L_089A91D4:
    ctx.set_gpr(4, ctx.gpr[29] + static_cast<std::uint32_t>(72));
    ctx.set_gpr(31, 0x089A91E0u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0104_entry, 104u, 665u, 0x089A7038u>(ctx, &aot_mem) && ctx.pc == 0x089A91E0u) goto L_089A91E0;
    return;
L_089A91E0:
    ctx.set_gpr(3, rt.memory().aot_load32(ctx.gpr[18] + static_cast<std::uint32_t>(8)));
    { const bool branch_taken = ctx.gpr[3] == 0u;
    // nop
      if (branch_taken) {
          goto L_089A9204;
      }
      goto L_089A91EC;
    }
L_089A91EC:
    ctx.set_gpr(1, static_cast<std::int32_t>(ctx.gpr[3]) < 3 ? 1u : 0u);
    { const bool branch_taken = ctx.gpr[1] != 0u;
    // nop
      if (branch_taken) {
          goto L_089A9204;
      }
      goto L_089A91F8;
    }
L_089A91F8:
    ctx.set_gpr(4, rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(76)));
    ctx.set_gpr(3, rt.memory().aot_load32(ctx.gpr[18] + static_cast<std::uint32_t>(16)));
    rt.memory().aot_store32(ctx.gpr[3] + static_cast<std::uint32_t>(8), ctx.gpr[4]);
    goto L_089A9204;
L_089A9204:
    ctx.set_gpr(3, rt.memory().aot_load32(ctx.gpr[18] + static_cast<std::uint32_t>(8)));
    { const bool branch_taken = ctx.gpr[3] == 0u;
    // nop
      if (branch_taken) {
          goto L_089A99A0;
      }
      goto L_089A9210;
    }
L_089A9210:
    ctx.set_gpr(1, static_cast<std::int32_t>(ctx.gpr[3]) < 4 ? 1u : 0u);
    { const bool branch_taken = ctx.gpr[1] != 0u;
    // nop
      if (branch_taken) {
          goto L_089A99A0;
      }
      goto L_089A921C;
    }
L_089A921C:
    ctx.set_gpr(4, rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(72)));
    ctx.set_gpr(3, rt.memory().aot_load32(ctx.gpr[18] + static_cast<std::uint32_t>(16)));
    rt.memory().aot_store32(ctx.gpr[3] + static_cast<std::uint32_t>(12), ctx.gpr[4]);
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_089A99A0;
      }
      goto L_089A9230;
    }
L_089A9230:
    ctx.set_gpr(4, (ctx.gpr[20] >> 24u) & 0x000000FFu);
    ctx.set_gpr(3, (ctx.gpr[19] >> 24u) & 0x000000FFu);
    { const bool branch_taken = ctx.gpr[17] == 0u;
    // nop
      if (branch_taken) {
          goto L_089A9560;
      }
      goto L_089A9240;
    }
L_089A9240:
    ctx.set_gpr(4, ctx.gpr[4] & 255u);
    ctx.set_gpr(3, ctx.gpr[3] & 255u);
    ctx.set_gpr(5, ctx.gpr[4] << 2u);
    ctx.set_gpr(5, ctx.gpr[3] + ctx.gpr[5]);
    ctx.set_gpr(5, ctx.gpr[5] + static_cast<std::uint32_t>(2));
    { const bool branch_taken = static_cast<std::int32_t>(ctx.gpr[5]) < 0;
    // nop
      if (branch_taken) {
          goto L_089A926C;
      }
      goto L_089A925C;
    }
L_089A925C:
    ctx.fpr[0] = std::bit_cast<float>(ctx.gpr[5]);
    ctx.fpr[1] = static_cast<float>(static_cast<std::int32_t>(ctx.fpr_bits(0)));
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_089A9284;
      }
      goto L_089A926C;
    }
L_089A926C:
    ctx.set_gpr(6, ctx.gpr[5] >> 1u);
    ctx.set_gpr(5, ctx.gpr[5] & 1u);
    ctx.set_gpr(6, ctx.gpr[6] | ctx.gpr[5]);
    ctx.fpr[0] = std::bit_cast<float>(ctx.gpr[6]);
    ctx.fpr[1] = static_cast<float>(static_cast<std::int32_t>(ctx.fpr_bits(0)));
    ctx.fpr[1] = ctx.fpr[1] + ctx.fpr[1];
    goto L_089A9284;
L_089A9284:
    ctx.set_gpr(5, 16544u << 16u);
    ctx.fpr[0] = std::bit_cast<float>(ctx.gpr[5]);
    ctx.fpr[1] = ctx.fpr[1] / ctx.fpr[0];
    ctx.set_gpr(5, 20224u << 16u);
    ctx.fpr[0] = std::bit_cast<float>(ctx.gpr[5]);
    ctx.set_fpu_condition((ctx.fpr[0] <= ctx.fpr[1]));
    // nop
    { const bool branch_taken = ctx.fpu_condition();
    // nop
      if (branch_taken) {
          goto L_089A92B8;
      }
      goto L_089A92A8;
    }
L_089A92A8:
    ctx.set_fpr_bits(0, ctx.fpu_float_to_word(ctx.fpr[1], 1u));
    ctx.set_gpr(5, std::bit_cast<std::uint32_t>(ctx.fpr[0]));
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_089A92CC;
      }
      goto L_089A92B8;
    }
L_089A92B8:
    ctx.fpr[0] = ctx.fpr[1] - ctx.fpr[0];
    ctx.set_fpr_bits(0, ctx.fpu_float_to_word(ctx.fpr[0], 1u));
    ctx.set_gpr(6, std::bit_cast<std::uint32_t>(ctx.fpr[0]));
    ctx.set_gpr(5, 0u + static_cast<std::uint32_t>(-32768));
    ctx.set_gpr(5, ctx.gpr[6] | ctx.gpr[5]);
    goto L_089A92CC;
L_089A92CC:
    ctx.set_gpr(5, ctx.gpr[5] & 255u);
    ctx.set_gpr(6, ctx.gpr[5] << 24u);
    ctx.set_gpr(5, rt.memory().aot_load32(ctx.gpr[18] + static_cast<std::uint32_t>(8)));
    { const bool branch_taken = ctx.gpr[5] == 0u;
    // nop
      if (branch_taken) {
          goto L_089A92F4;
      }
      goto L_089A92E0;
    }
L_089A92E0:
    ctx.set_gpr(1, static_cast<std::int32_t>(ctx.gpr[5]) < 3 ? 1u : 0u);
    { const bool branch_taken = ctx.gpr[1] != 0u;
    // nop
      if (branch_taken) {
          goto L_089A92F4;
      }
      goto L_089A92EC;
    }
L_089A92EC:
    ctx.set_gpr(5, rt.memory().aot_load32(ctx.gpr[18] + static_cast<std::uint32_t>(16)));
    rt.memory().aot_store32(ctx.gpr[5] + static_cast<std::uint32_t>(8), ctx.gpr[6]);
    goto L_089A92F4;
L_089A92F4:
    ctx.set_gpr(5, ctx.gpr[4] << 1u);
    ctx.set_gpr(6, ctx.gpr[5] + ctx.gpr[4]);
    ctx.set_gpr(5, ctx.gpr[3] << 1u);
    ctx.set_gpr(5, ctx.gpr[6] + ctx.gpr[5]);
    ctx.set_gpr(5, ctx.gpr[5] + static_cast<std::uint32_t>(2));
    { const bool branch_taken = static_cast<std::int32_t>(ctx.gpr[5]) < 0;
    // nop
      if (branch_taken) {
          goto L_089A9320;
      }
      goto L_089A9310;
    }
L_089A9310:
    ctx.fpr[0] = std::bit_cast<float>(ctx.gpr[5]);
    ctx.fpr[1] = static_cast<float>(static_cast<std::int32_t>(ctx.fpr_bits(0)));
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_089A9338;
      }
      goto L_089A9320;
    }
L_089A9320:
    ctx.set_gpr(6, ctx.gpr[5] >> 1u);
    ctx.set_gpr(5, ctx.gpr[5] & 1u);
    ctx.set_gpr(6, ctx.gpr[6] | ctx.gpr[5]);
    ctx.fpr[0] = std::bit_cast<float>(ctx.gpr[6]);
    ctx.fpr[1] = static_cast<float>(static_cast<std::int32_t>(ctx.fpr_bits(0)));
    ctx.fpr[1] = ctx.fpr[1] + ctx.fpr[1];
    goto L_089A9338;
L_089A9338:
    ctx.set_gpr(5, 16544u << 16u);
    ctx.fpr[0] = std::bit_cast<float>(ctx.gpr[5]);
    ctx.fpr[1] = ctx.fpr[1] / ctx.fpr[0];
    ctx.set_gpr(5, 20224u << 16u);
    ctx.fpr[0] = std::bit_cast<float>(ctx.gpr[5]);
    ctx.set_fpu_condition((ctx.fpr[0] <= ctx.fpr[1]));
    // nop
    { const bool branch_taken = ctx.fpu_condition();
    // nop
      if (branch_taken) {
          goto L_089A936C;
      }
      goto L_089A935C;
    }
L_089A935C:
    ctx.set_fpr_bits(0, ctx.fpu_float_to_word(ctx.fpr[1], 1u));
    ctx.set_gpr(5, std::bit_cast<std::uint32_t>(ctx.fpr[0]));
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_089A9380;
      }
      goto L_089A936C;
    }
L_089A936C:
    ctx.fpr[0] = ctx.fpr[1] - ctx.fpr[0];
    ctx.set_fpr_bits(0, ctx.fpu_float_to_word(ctx.fpr[0], 1u));
    ctx.set_gpr(6, std::bit_cast<std::uint32_t>(ctx.fpr[0]));
    ctx.set_gpr(5, 0u + static_cast<std::uint32_t>(-32768));
    ctx.set_gpr(5, ctx.gpr[6] | ctx.gpr[5]);
    goto L_089A9380;
L_089A9380:
    ctx.set_gpr(5, ctx.gpr[5] & 255u);
    ctx.set_gpr(6, ctx.gpr[5] << 24u);
    ctx.set_gpr(5, rt.memory().aot_load32(ctx.gpr[18] + static_cast<std::uint32_t>(8)));
    { const bool branch_taken = ctx.gpr[5] == 0u;
    // nop
      if (branch_taken) {
          goto L_089A93A8;
      }
      goto L_089A9394;
    }
L_089A9394:
    ctx.set_gpr(1, static_cast<std::int32_t>(ctx.gpr[5]) < 4 ? 1u : 0u);
    { const bool branch_taken = ctx.gpr[1] != 0u;
    // nop
      if (branch_taken) {
          goto L_089A93A8;
      }
      goto L_089A93A0;
    }
L_089A93A0:
    ctx.set_gpr(5, rt.memory().aot_load32(ctx.gpr[18] + static_cast<std::uint32_t>(16)));
    rt.memory().aot_store32(ctx.gpr[5] + static_cast<std::uint32_t>(12), ctx.gpr[6]);
    goto L_089A93A8;
L_089A93A8:
    ctx.set_gpr(6, ctx.gpr[4] << 1u);
    ctx.set_gpr(5, ctx.gpr[3] << 1u);
    ctx.set_gpr(5, ctx.gpr[5] + ctx.gpr[3]);
    ctx.set_gpr(5, ctx.gpr[6] + ctx.gpr[5]);
    ctx.set_gpr(5, ctx.gpr[5] + static_cast<std::uint32_t>(2));
    { const bool branch_taken = static_cast<std::int32_t>(ctx.gpr[5]) < 0;
    // nop
      if (branch_taken) {
          goto L_089A93D4;
      }
      goto L_089A93C4;
    }
L_089A93C4:
    ctx.fpr[0] = std::bit_cast<float>(ctx.gpr[5]);
    ctx.fpr[1] = static_cast<float>(static_cast<std::int32_t>(ctx.fpr_bits(0)));
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_089A93EC;
      }
      goto L_089A93D4;
    }
L_089A93D4:
    ctx.set_gpr(6, ctx.gpr[5] >> 1u);
    ctx.set_gpr(5, ctx.gpr[5] & 1u);
    ctx.set_gpr(6, ctx.gpr[6] | ctx.gpr[5]);
    ctx.fpr[0] = std::bit_cast<float>(ctx.gpr[6]);
    ctx.fpr[1] = static_cast<float>(static_cast<std::int32_t>(ctx.fpr_bits(0)));
    ctx.fpr[1] = ctx.fpr[1] + ctx.fpr[1];
    goto L_089A93EC;
L_089A93EC:
    ctx.set_gpr(5, 16544u << 16u);
    ctx.fpr[0] = std::bit_cast<float>(ctx.gpr[5]);
    ctx.fpr[1] = ctx.fpr[1] / ctx.fpr[0];
    ctx.set_gpr(5, 20224u << 16u);
    ctx.fpr[0] = std::bit_cast<float>(ctx.gpr[5]);
    ctx.set_fpu_condition((ctx.fpr[0] <= ctx.fpr[1]));
    // nop
    { const bool branch_taken = ctx.fpu_condition();
    // nop
      if (branch_taken) {
          goto L_089A9420;
      }
      goto L_089A9410;
    }
L_089A9410:
    ctx.set_fpr_bits(0, ctx.fpu_float_to_word(ctx.fpr[1], 1u));
    ctx.set_gpr(5, std::bit_cast<std::uint32_t>(ctx.fpr[0]));
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_089A9434;
      }
      goto L_089A9420;
    }
L_089A9420:
    ctx.fpr[0] = ctx.fpr[1] - ctx.fpr[0];
    ctx.set_fpr_bits(0, ctx.fpu_float_to_word(ctx.fpr[0], 1u));
    ctx.set_gpr(6, std::bit_cast<std::uint32_t>(ctx.fpr[0]));
    ctx.set_gpr(5, 0u + static_cast<std::uint32_t>(-32768));
    ctx.set_gpr(5, ctx.gpr[6] | ctx.gpr[5]);
    goto L_089A9434;
L_089A9434:
    ctx.set_gpr(5, ctx.gpr[5] & 255u);
    ctx.set_gpr(6, ctx.gpr[5] << 24u);
    ctx.set_gpr(5, rt.memory().aot_load32(ctx.gpr[18] + static_cast<std::uint32_t>(8)));
    { const bool branch_taken = ctx.gpr[5] == 0u;
    // nop
      if (branch_taken) {
          goto L_089A945C;
      }
      goto L_089A9448;
    }
L_089A9448:
    ctx.set_gpr(1, static_cast<std::int32_t>(ctx.gpr[5]) < 5 ? 1u : 0u);
    { const bool branch_taken = ctx.gpr[1] != 0u;
    // nop
      if (branch_taken) {
          goto L_089A945C;
      }
      goto L_089A9454;
    }
L_089A9454:
    ctx.set_gpr(5, rt.memory().aot_load32(ctx.gpr[18] + static_cast<std::uint32_t>(16)));
    rt.memory().aot_store32(ctx.gpr[5] + static_cast<std::uint32_t>(16), ctx.gpr[6]);
    goto L_089A945C;
L_089A945C:
    ctx.set_gpr(3, ctx.gpr[3] << 2u);
    ctx.set_gpr(3, ctx.gpr[4] + ctx.gpr[3]);
    ctx.set_gpr(3, ctx.gpr[3] + static_cast<std::uint32_t>(2));
    { const bool branch_taken = static_cast<std::int32_t>(ctx.gpr[3]) < 0;
    // nop
      if (branch_taken) {
          goto L_089A9480;
      }
      goto L_089A9470;
    }
L_089A9470:
    ctx.fpr[0] = std::bit_cast<float>(ctx.gpr[3]);
    ctx.fpr[1] = static_cast<float>(static_cast<std::int32_t>(ctx.fpr_bits(0)));
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_089A9498;
      }
      goto L_089A9480;
    }
L_089A9480:
    ctx.set_gpr(4, ctx.gpr[3] >> 1u);
    ctx.set_gpr(3, ctx.gpr[3] & 1u);
    ctx.set_gpr(4, ctx.gpr[4] | ctx.gpr[3]);
    ctx.fpr[0] = std::bit_cast<float>(ctx.gpr[4]);
    ctx.fpr[1] = static_cast<float>(static_cast<std::int32_t>(ctx.fpr_bits(0)));
    ctx.fpr[1] = ctx.fpr[1] + ctx.fpr[1];
    goto L_089A9498;
L_089A9498:
    ctx.set_gpr(3, 16544u << 16u);
    ctx.fpr[0] = std::bit_cast<float>(ctx.gpr[3]);
    ctx.fpr[1] = ctx.fpr[1] / ctx.fpr[0];
    ctx.set_gpr(3, 20224u << 16u);
    ctx.fpr[0] = std::bit_cast<float>(ctx.gpr[3]);
    ctx.set_fpu_condition((ctx.fpr[0] <= ctx.fpr[1]));
    // nop
    { const bool branch_taken = ctx.fpu_condition();
    // nop
      if (branch_taken) {
          goto L_089A94CC;
      }
      goto L_089A94BC;
    }
L_089A94BC:
    ctx.set_fpr_bits(0, ctx.fpu_float_to_word(ctx.fpr[1], 1u));
    ctx.set_gpr(3, std::bit_cast<std::uint32_t>(ctx.fpr[0]));
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_089A94E0;
      }
      goto L_089A94CC;
    }
L_089A94CC:
    ctx.fpr[0] = ctx.fpr[1] - ctx.fpr[0];
    ctx.set_fpr_bits(0, ctx.fpu_float_to_word(ctx.fpr[0], 1u));
    ctx.set_gpr(4, std::bit_cast<std::uint32_t>(ctx.fpr[0]));
    ctx.set_gpr(3, 0u + static_cast<std::uint32_t>(-32768));
    ctx.set_gpr(3, ctx.gpr[4] | ctx.gpr[3]);
    goto L_089A94E0;
L_089A94E0:
    ctx.set_gpr(3, ctx.gpr[3] & 255u);
    ctx.set_gpr(4, ctx.gpr[3] << 24u);
    ctx.set_gpr(3, rt.memory().aot_load32(ctx.gpr[18] + static_cast<std::uint32_t>(8)));
    { const bool branch_taken = ctx.gpr[3] == 0u;
    // nop
      if (branch_taken) {
          goto L_089A9508;
      }
      goto L_089A94F4;
    }
L_089A94F4:
    ctx.set_gpr(1, static_cast<std::int32_t>(ctx.gpr[3]) < 6 ? 1u : 0u);
    { const bool branch_taken = ctx.gpr[1] != 0u;
    // nop
      if (branch_taken) {
          goto L_089A9508;
      }
      goto L_089A9500;
    }
L_089A9500:
    ctx.set_gpr(3, rt.memory().aot_load32(ctx.gpr[18] + static_cast<std::uint32_t>(16)));
    rt.memory().aot_store32(ctx.gpr[3] + static_cast<std::uint32_t>(20), ctx.gpr[4]);
    goto L_089A9508;
L_089A9508:
    ctx.set_gpr(3, rt.memory().aot_load32(ctx.gpr[18] + static_cast<std::uint32_t>(8)));
    { const bool branch_taken = ctx.gpr[3] == 0u;
    // nop
      if (branch_taken) {
          goto L_089A9530;
      }
      goto L_089A9514;
    }
L_089A9514:
    ctx.set_gpr(1, static_cast<std::int32_t>(ctx.gpr[3]) < 7 ? 1u : 0u);
    { const bool branch_taken = ctx.gpr[1] != 0u;
    // nop
      if (branch_taken) {
          goto L_089A9530;
      }
      goto L_089A9520;
    }
L_089A9520:
    ctx.set_gpr(3, 2229u << 16u);
    ctx.set_gpr(4, rt.memory().aot_load32(ctx.gpr[3] + static_cast<std::uint32_t>(-16324)));
    ctx.set_gpr(3, rt.memory().aot_load32(ctx.gpr[18] + static_cast<std::uint32_t>(16)));
    rt.memory().aot_store32(ctx.gpr[3] + static_cast<std::uint32_t>(24), ctx.gpr[4]);
    goto L_089A9530;
L_089A9530:
    ctx.set_gpr(3, rt.memory().aot_load32(ctx.gpr[18] + static_cast<std::uint32_t>(8)));
    { const bool branch_taken = ctx.gpr[3] == 0u;
    // nop
      if (branch_taken) {
          goto L_089A99A0;
      }
      goto L_089A953C;
    }
L_089A953C:
    ctx.set_gpr(1, static_cast<std::int32_t>(ctx.gpr[3]) < 8 ? 1u : 0u);
    { const bool branch_taken = ctx.gpr[1] != 0u;
    // nop
      if (branch_taken) {
          goto L_089A99A0;
      }
      goto L_089A9548;
    }
L_089A9548:
    ctx.set_gpr(3, 2229u << 16u);
    ctx.set_gpr(4, rt.memory().aot_load32(ctx.gpr[3] + static_cast<std::uint32_t>(-16320)));
    ctx.set_gpr(3, rt.memory().aot_load32(ctx.gpr[18] + static_cast<std::uint32_t>(16)));
    rt.memory().aot_store32(ctx.gpr[3] + static_cast<std::uint32_t>(28), ctx.gpr[4]);
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_089A99A0;
      }
      goto L_089A9560;
    }
L_089A9560:
    ctx.set_gpr(4, ctx.gpr[4] & 255u);
    ctx.set_gpr(3, ctx.gpr[3] & 255u);
    ctx.set_gpr(5, ctx.gpr[4] << 1u);
    ctx.set_gpr(5, ctx.gpr[5] + ctx.gpr[4]);
    ctx.set_gpr(5, ctx.gpr[5] << 1u);
    ctx.set_gpr(5, ctx.gpr[3] + ctx.gpr[5]);
    ctx.set_gpr(5, ctx.gpr[5] + static_cast<std::uint32_t>(3));
    { const bool branch_taken = static_cast<std::int32_t>(ctx.gpr[5]) < 0;
    // nop
      if (branch_taken) {
          goto L_089A9594;
      }
      goto L_089A9584;
    }
L_089A9584:
    ctx.fpr[0] = std::bit_cast<float>(ctx.gpr[5]);
    ctx.fpr[1] = static_cast<float>(static_cast<std::int32_t>(ctx.fpr_bits(0)));
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_089A95AC;
      }
      goto L_089A9594;
    }
L_089A9594:
    ctx.set_gpr(6, ctx.gpr[5] >> 1u);
    ctx.set_gpr(5, ctx.gpr[5] & 1u);
    ctx.set_gpr(6, ctx.gpr[6] | ctx.gpr[5]);
    ctx.fpr[0] = std::bit_cast<float>(ctx.gpr[6]);
    ctx.fpr[1] = static_cast<float>(static_cast<std::int32_t>(ctx.fpr_bits(0)));
    ctx.fpr[1] = ctx.fpr[1] + ctx.fpr[1];
    goto L_089A95AC;
L_089A95AC:
    ctx.set_gpr(5, 16608u << 16u);
    ctx.fpr[0] = std::bit_cast<float>(ctx.gpr[5]);
    ctx.fpr[1] = ctx.fpr[1] / ctx.fpr[0];
    ctx.set_gpr(5, 20224u << 16u);
    ctx.fpr[0] = std::bit_cast<float>(ctx.gpr[5]);
    ctx.set_fpu_condition((ctx.fpr[0] <= ctx.fpr[1]));
    // nop
    { const bool branch_taken = ctx.fpu_condition();
    // nop
      if (branch_taken) {
          goto L_089A95E0;
      }
      goto L_089A95D0;
    }
L_089A95D0:
    ctx.set_fpr_bits(0, ctx.fpu_float_to_word(ctx.fpr[1], 1u));
    ctx.set_gpr(5, std::bit_cast<std::uint32_t>(ctx.fpr[0]));
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_089A95F4;
      }
      goto L_089A95E0;
    }
L_089A95E0:
    ctx.fpr[0] = ctx.fpr[1] - ctx.fpr[0];
    ctx.set_fpr_bits(0, ctx.fpu_float_to_word(ctx.fpr[0], 1u));
    ctx.set_gpr(6, std::bit_cast<std::uint32_t>(ctx.fpr[0]));
    ctx.set_gpr(5, 0u + static_cast<std::uint32_t>(-32768));
    ctx.set_gpr(5, ctx.gpr[6] | ctx.gpr[5]);
    goto L_089A95F4;
L_089A95F4:
    ctx.set_gpr(5, ctx.gpr[5] & 255u);
    ctx.set_gpr(6, ctx.gpr[5] << 24u);
    ctx.set_gpr(5, rt.memory().aot_load32(ctx.gpr[18] + static_cast<std::uint32_t>(8)));
    { const bool branch_taken = ctx.gpr[5] == 0u;
    // nop
      if (branch_taken) {
          goto L_089A961C;
      }
      goto L_089A9608;
    }
L_089A9608:
    ctx.set_gpr(1, static_cast<std::int32_t>(ctx.gpr[5]) < 3 ? 1u : 0u);
    { const bool branch_taken = ctx.gpr[1] != 0u;
    // nop
      if (branch_taken) {
          goto L_089A961C;
      }
      goto L_089A9614;
    }
L_089A9614:
    ctx.set_gpr(5, rt.memory().aot_load32(ctx.gpr[18] + static_cast<std::uint32_t>(16)));
    rt.memory().aot_store32(ctx.gpr[5] + static_cast<std::uint32_t>(8), ctx.gpr[6]);
    goto L_089A961C;
L_089A961C:
    ctx.set_gpr(5, ctx.gpr[4] << 2u);
    ctx.set_gpr(6, ctx.gpr[5] + ctx.gpr[4]);
    ctx.set_gpr(5, ctx.gpr[3] << 1u);
    ctx.set_gpr(5, ctx.gpr[6] + ctx.gpr[5]);
    ctx.set_gpr(5, ctx.gpr[5] + static_cast<std::uint32_t>(3));
    { const bool branch_taken = static_cast<std::int32_t>(ctx.gpr[5]) < 0;
    // nop
      if (branch_taken) {
          goto L_089A9648;
      }
      goto L_089A9638;
    }
L_089A9638:
    ctx.fpr[0] = std::bit_cast<float>(ctx.gpr[5]);
    ctx.fpr[1] = static_cast<float>(static_cast<std::int32_t>(ctx.fpr_bits(0)));
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_089A9660;
      }
      goto L_089A9648;
    }
L_089A9648:
    ctx.set_gpr(6, ctx.gpr[5] >> 1u);
    ctx.set_gpr(5, ctx.gpr[5] & 1u);
    ctx.set_gpr(6, ctx.gpr[6] | ctx.gpr[5]);
    ctx.fpr[0] = std::bit_cast<float>(ctx.gpr[6]);
    ctx.fpr[1] = static_cast<float>(static_cast<std::int32_t>(ctx.fpr_bits(0)));
    ctx.fpr[1] = ctx.fpr[1] + ctx.fpr[1];
    goto L_089A9660;
L_089A9660:
    ctx.set_gpr(5, 16608u << 16u);
    ctx.fpr[0] = std::bit_cast<float>(ctx.gpr[5]);
    ctx.fpr[1] = ctx.fpr[1] / ctx.fpr[0];
    ctx.set_gpr(5, 20224u << 16u);
    ctx.fpr[0] = std::bit_cast<float>(ctx.gpr[5]);
    ctx.set_fpu_condition((ctx.fpr[0] <= ctx.fpr[1]));
    // nop
    { const bool branch_taken = ctx.fpu_condition();
    // nop
      if (branch_taken) {
          goto L_089A9694;
      }
      goto L_089A9684;
    }
L_089A9684:
    ctx.set_fpr_bits(0, ctx.fpu_float_to_word(ctx.fpr[1], 1u));
    ctx.set_gpr(5, std::bit_cast<std::uint32_t>(ctx.fpr[0]));
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_089A96A8;
      }
      goto L_089A9694;
    }
L_089A9694:
    ctx.fpr[0] = ctx.fpr[1] - ctx.fpr[0];
    ctx.set_fpr_bits(0, ctx.fpu_float_to_word(ctx.fpr[0], 1u));
    ctx.set_gpr(6, std::bit_cast<std::uint32_t>(ctx.fpr[0]));
    ctx.set_gpr(5, 0u + static_cast<std::uint32_t>(-32768));
    ctx.set_gpr(5, ctx.gpr[6] | ctx.gpr[5]);
    goto L_089A96A8;
L_089A96A8:
    ctx.set_gpr(5, ctx.gpr[5] & 255u);
    ctx.set_gpr(6, ctx.gpr[5] << 24u);
    ctx.set_gpr(5, rt.memory().aot_load32(ctx.gpr[18] + static_cast<std::uint32_t>(8)));
    { const bool branch_taken = ctx.gpr[5] == 0u;
    // nop
      if (branch_taken) {
          goto L_089A96D0;
      }
      goto L_089A96BC;
    }
L_089A96BC:
    ctx.set_gpr(1, static_cast<std::int32_t>(ctx.gpr[5]) < 4 ? 1u : 0u);
    { const bool branch_taken = ctx.gpr[1] != 0u;
    // nop
      if (branch_taken) {
          goto L_089A96D0;
      }
      goto L_089A96C8;
    }
L_089A96C8:
    ctx.set_gpr(5, rt.memory().aot_load32(ctx.gpr[18] + static_cast<std::uint32_t>(16)));
    rt.memory().aot_store32(ctx.gpr[5] + static_cast<std::uint32_t>(12), ctx.gpr[6]);
    goto L_089A96D0;
L_089A96D0:
    ctx.set_gpr(6, ctx.gpr[3] + static_cast<std::uint32_t>(1));
    ctx.set_gpr(5, ctx.gpr[6] << 1u);
    ctx.set_gpr(6, ctx.gpr[5] + ctx.gpr[6]);
    ctx.set_gpr(5, ctx.gpr[4] << 2u);
    ctx.set_gpr(5, ctx.gpr[6] + ctx.gpr[5]);
    { const bool branch_taken = static_cast<std::int32_t>(ctx.gpr[5]) < 0;
    // nop
      if (branch_taken) {
          goto L_089A96FC;
      }
      goto L_089A96EC;
    }
L_089A96EC:
    ctx.fpr[0] = std::bit_cast<float>(ctx.gpr[5]);
    ctx.fpr[1] = static_cast<float>(static_cast<std::int32_t>(ctx.fpr_bits(0)));
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_089A9714;
      }
      goto L_089A96FC;
    }
L_089A96FC:
    ctx.set_gpr(6, ctx.gpr[5] >> 1u);
    ctx.set_gpr(5, ctx.gpr[5] & 1u);
    ctx.set_gpr(6, ctx.gpr[6] | ctx.gpr[5]);
    ctx.fpr[0] = std::bit_cast<float>(ctx.gpr[6]);
    ctx.fpr[1] = static_cast<float>(static_cast<std::int32_t>(ctx.fpr_bits(0)));
    ctx.fpr[1] = ctx.fpr[1] + ctx.fpr[1];
    goto L_089A9714;
L_089A9714:
    ctx.set_gpr(5, 16608u << 16u);
    ctx.fpr[0] = std::bit_cast<float>(ctx.gpr[5]);
    ctx.fpr[1] = ctx.fpr[1] / ctx.fpr[0];
    ctx.set_gpr(5, 20224u << 16u);
    ctx.fpr[0] = std::bit_cast<float>(ctx.gpr[5]);
    ctx.set_fpu_condition((ctx.fpr[0] <= ctx.fpr[1]));
    // nop
    { const bool branch_taken = ctx.fpu_condition();
    // nop
      if (branch_taken) {
          goto L_089A9748;
      }
      goto L_089A9738;
    }
L_089A9738:
    ctx.set_fpr_bits(0, ctx.fpu_float_to_word(ctx.fpr[1], 1u));
    ctx.set_gpr(5, std::bit_cast<std::uint32_t>(ctx.fpr[0]));
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_089A975C;
      }
      goto L_089A9748;
    }
L_089A9748:
    ctx.fpr[0] = ctx.fpr[1] - ctx.fpr[0];
    ctx.set_fpr_bits(0, ctx.fpu_float_to_word(ctx.fpr[0], 1u));
    ctx.set_gpr(6, std::bit_cast<std::uint32_t>(ctx.fpr[0]));
    ctx.set_gpr(5, 0u + static_cast<std::uint32_t>(-32768));
    ctx.set_gpr(5, ctx.gpr[6] | ctx.gpr[5]);
    goto L_089A975C;
L_089A975C:
    ctx.set_gpr(5, ctx.gpr[5] & 255u);
    ctx.set_gpr(6, ctx.gpr[5] << 24u);
    ctx.set_gpr(5, rt.memory().aot_load32(ctx.gpr[18] + static_cast<std::uint32_t>(8)));
    { const bool branch_taken = ctx.gpr[5] == 0u;
    // nop
      if (branch_taken) {
          goto L_089A9784;
      }
      goto L_089A9770;
    }
L_089A9770:
    ctx.set_gpr(1, static_cast<std::int32_t>(ctx.gpr[5]) < 5 ? 1u : 0u);
    { const bool branch_taken = ctx.gpr[1] != 0u;
    // nop
      if (branch_taken) {
          goto L_089A9784;
      }
      goto L_089A977C;
    }
L_089A977C:
    ctx.set_gpr(5, rt.memory().aot_load32(ctx.gpr[18] + static_cast<std::uint32_t>(16)));
    rt.memory().aot_store32(ctx.gpr[5] + static_cast<std::uint32_t>(16), ctx.gpr[6]);
    goto L_089A9784;
L_089A9784:
    ctx.set_gpr(6, ctx.gpr[4] + static_cast<std::uint32_t>(1));
    ctx.set_gpr(5, ctx.gpr[6] << 1u);
    ctx.set_gpr(6, ctx.gpr[5] + ctx.gpr[6]);
    ctx.set_gpr(5, ctx.gpr[3] << 2u);
    ctx.set_gpr(5, ctx.gpr[6] + ctx.gpr[5]);
    { const bool branch_taken = static_cast<std::int32_t>(ctx.gpr[5]) < 0;
    // nop
      if (branch_taken) {
          goto L_089A97B0;
      }
      goto L_089A97A0;
    }
L_089A97A0:
    ctx.fpr[0] = std::bit_cast<float>(ctx.gpr[5]);
    ctx.fpr[1] = static_cast<float>(static_cast<std::int32_t>(ctx.fpr_bits(0)));
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_089A97C8;
      }
      goto L_089A97B0;
    }
L_089A97B0:
    ctx.set_gpr(6, ctx.gpr[5] >> 1u);
    ctx.set_gpr(5, ctx.gpr[5] & 1u);
    ctx.set_gpr(6, ctx.gpr[6] | ctx.gpr[5]);
    ctx.fpr[0] = std::bit_cast<float>(ctx.gpr[6]);
    ctx.fpr[1] = static_cast<float>(static_cast<std::int32_t>(ctx.fpr_bits(0)));
    ctx.fpr[1] = ctx.fpr[1] + ctx.fpr[1];
    goto L_089A97C8;
L_089A97C8:
    ctx.set_gpr(5, 16608u << 16u);
    ctx.fpr[0] = std::bit_cast<float>(ctx.gpr[5]);
    ctx.fpr[1] = ctx.fpr[1] / ctx.fpr[0];
    ctx.set_gpr(5, 20224u << 16u);
    ctx.fpr[0] = std::bit_cast<float>(ctx.gpr[5]);
    ctx.set_fpu_condition((ctx.fpr[0] <= ctx.fpr[1]));
    // nop
    { const bool branch_taken = ctx.fpu_condition();
    // nop
      if (branch_taken) {
          goto L_089A97FC;
      }
      goto L_089A97EC;
    }
L_089A97EC:
    ctx.set_fpr_bits(0, ctx.fpu_float_to_word(ctx.fpr[1], 1u));
    ctx.set_gpr(5, std::bit_cast<std::uint32_t>(ctx.fpr[0]));
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_089A9810;
      }
      goto L_089A97FC;
    }
L_089A97FC:
    ctx.fpr[0] = ctx.fpr[1] - ctx.fpr[0];
    ctx.set_fpr_bits(0, ctx.fpu_float_to_word(ctx.fpr[0], 1u));
    ctx.set_gpr(6, std::bit_cast<std::uint32_t>(ctx.fpr[0]));
    ctx.set_gpr(5, 0u + static_cast<std::uint32_t>(-32768));
    ctx.set_gpr(5, ctx.gpr[6] | ctx.gpr[5]);
    goto L_089A9810;
L_089A9810:
    ctx.set_gpr(5, ctx.gpr[5] & 255u);
    ctx.set_gpr(6, ctx.gpr[5] << 24u);
    ctx.set_gpr(5, rt.memory().aot_load32(ctx.gpr[18] + static_cast<std::uint32_t>(8)));
    { const bool branch_taken = ctx.gpr[5] == 0u;
    // nop
      if (branch_taken) {
          goto L_089A9838;
      }
      goto L_089A9824;
    }
L_089A9824:
    ctx.set_gpr(1, static_cast<std::int32_t>(ctx.gpr[5]) < 6 ? 1u : 0u);
    { const bool branch_taken = ctx.gpr[1] != 0u;
    // nop
      if (branch_taken) {
          goto L_089A9838;
      }
      goto L_089A9830;
    }
L_089A9830:
    ctx.set_gpr(5, rt.memory().aot_load32(ctx.gpr[18] + static_cast<std::uint32_t>(16)));
    rt.memory().aot_store32(ctx.gpr[5] + static_cast<std::uint32_t>(20), ctx.gpr[6]);
    goto L_089A9838;
L_089A9838:
    ctx.set_gpr(6, ctx.gpr[4] << 1u);
    ctx.set_gpr(5, ctx.gpr[3] << 2u);
    ctx.set_gpr(5, ctx.gpr[5] + ctx.gpr[3]);
    ctx.set_gpr(5, ctx.gpr[6] + ctx.gpr[5]);
    ctx.set_gpr(5, ctx.gpr[5] + static_cast<std::uint32_t>(3));
    { const bool branch_taken = static_cast<std::int32_t>(ctx.gpr[5]) < 0;
    // nop
      if (branch_taken) {
          goto L_089A9864;
      }
      goto L_089A9854;
    }
L_089A9854:
    ctx.fpr[0] = std::bit_cast<float>(ctx.gpr[5]);
    ctx.fpr[1] = static_cast<float>(static_cast<std::int32_t>(ctx.fpr_bits(0)));
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_089A987C;
      }
      goto L_089A9864;
    }
L_089A9864:
    ctx.set_gpr(6, ctx.gpr[5] >> 1u);
    ctx.set_gpr(5, ctx.gpr[5] & 1u);
    ctx.set_gpr(6, ctx.gpr[6] | ctx.gpr[5]);
    ctx.fpr[0] = std::bit_cast<float>(ctx.gpr[6]);
    ctx.fpr[1] = static_cast<float>(static_cast<std::int32_t>(ctx.fpr_bits(0)));
    ctx.fpr[1] = ctx.fpr[1] + ctx.fpr[1];
    goto L_089A987C;
L_089A987C:
    ctx.set_gpr(5, 16608u << 16u);
    ctx.fpr[0] = std::bit_cast<float>(ctx.gpr[5]);
    ctx.fpr[1] = ctx.fpr[1] / ctx.fpr[0];
    ctx.set_gpr(5, 20224u << 16u);
    ctx.fpr[0] = std::bit_cast<float>(ctx.gpr[5]);
    ctx.set_fpu_condition((ctx.fpr[0] <= ctx.fpr[1]));
    // nop
    { const bool branch_taken = ctx.fpu_condition();
    // nop
      if (branch_taken) {
          goto L_089A98B0;
      }
      goto L_089A98A0;
    }
L_089A98A0:
    ctx.set_fpr_bits(0, ctx.fpu_float_to_word(ctx.fpr[1], 1u));
    ctx.set_gpr(5, std::bit_cast<std::uint32_t>(ctx.fpr[0]));
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_089A98C4;
      }
      goto L_089A98B0;
    }
L_089A98B0:
    ctx.fpr[0] = ctx.fpr[1] - ctx.fpr[0];
    ctx.set_fpr_bits(0, ctx.fpu_float_to_word(ctx.fpr[0], 1u));
    ctx.set_gpr(6, std::bit_cast<std::uint32_t>(ctx.fpr[0]));
    ctx.set_gpr(5, 0u + static_cast<std::uint32_t>(-32768));
    ctx.set_gpr(5, ctx.gpr[6] | ctx.gpr[5]);
    goto L_089A98C4;
L_089A98C4:
    ctx.set_gpr(5, ctx.gpr[5] & 255u);
    ctx.set_gpr(6, ctx.gpr[5] << 24u);
    ctx.set_gpr(5, rt.memory().aot_load32(ctx.gpr[18] + static_cast<std::uint32_t>(8)));
    { const bool branch_taken = ctx.gpr[5] == 0u;
    // nop
      if (branch_taken) {
          goto L_089A98EC;
      }
      goto L_089A98D8;
    }
L_089A98D8:
    ctx.set_gpr(1, static_cast<std::int32_t>(ctx.gpr[5]) < 7 ? 1u : 0u);
    { const bool branch_taken = ctx.gpr[1] != 0u;
    // nop
      if (branch_taken) {
          goto L_089A98EC;
      }
      goto L_089A98E4;
    }
L_089A98E4:
    ctx.set_gpr(5, rt.memory().aot_load32(ctx.gpr[18] + static_cast<std::uint32_t>(16)));
    rt.memory().aot_store32(ctx.gpr[5] + static_cast<std::uint32_t>(24), ctx.gpr[6]);
    goto L_089A98EC;
L_089A98EC:
    ctx.set_gpr(5, ctx.gpr[3] << 1u);
    ctx.set_gpr(3, ctx.gpr[5] + ctx.gpr[3]);
    ctx.set_gpr(3, ctx.gpr[3] << 1u);
    ctx.set_gpr(3, ctx.gpr[4] + ctx.gpr[3]);
    ctx.set_gpr(3, ctx.gpr[3] + static_cast<std::uint32_t>(3));
    { const bool branch_taken = static_cast<std::int32_t>(ctx.gpr[3]) < 0;
    // nop
      if (branch_taken) {
          goto L_089A9918;
      }
      goto L_089A9908;
    }
L_089A9908:
    ctx.fpr[0] = std::bit_cast<float>(ctx.gpr[3]);
    ctx.fpr[1] = static_cast<float>(static_cast<std::int32_t>(ctx.fpr_bits(0)));
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_089A9930;
      }
      goto L_089A9918;
    }
L_089A9918:
    ctx.set_gpr(4, ctx.gpr[3] >> 1u);
    ctx.set_gpr(3, ctx.gpr[3] & 1u);
    ctx.set_gpr(4, ctx.gpr[4] | ctx.gpr[3]);
    ctx.fpr[0] = std::bit_cast<float>(ctx.gpr[4]);
    ctx.fpr[1] = static_cast<float>(static_cast<std::int32_t>(ctx.fpr_bits(0)));
    ctx.fpr[1] = ctx.fpr[1] + ctx.fpr[1];
    goto L_089A9930;
L_089A9930:
    ctx.set_gpr(3, 16608u << 16u);
    ctx.fpr[0] = std::bit_cast<float>(ctx.gpr[3]);
    ctx.fpr[1] = ctx.fpr[1] / ctx.fpr[0];
    ctx.set_gpr(3, 20224u << 16u);
    ctx.fpr[0] = std::bit_cast<float>(ctx.gpr[3]);
    ctx.set_fpu_condition((ctx.fpr[0] <= ctx.fpr[1]));
    // nop
    { const bool branch_taken = ctx.fpu_condition();
    // nop
      if (branch_taken) {
          goto L_089A9964;
      }
      goto L_089A9954;
    }
L_089A9954:
    ctx.set_fpr_bits(0, ctx.fpu_float_to_word(ctx.fpr[1], 1u));
    ctx.set_gpr(3, std::bit_cast<std::uint32_t>(ctx.fpr[0]));
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_089A9978;
      }
      goto L_089A9964;
    }
L_089A9964:
    ctx.fpr[0] = ctx.fpr[1] - ctx.fpr[0];
    ctx.set_fpr_bits(0, ctx.fpu_float_to_word(ctx.fpr[0], 1u));
    ctx.set_gpr(4, std::bit_cast<std::uint32_t>(ctx.fpr[0]));
    ctx.set_gpr(3, 0u + static_cast<std::uint32_t>(-32768));
    ctx.set_gpr(3, ctx.gpr[4] | ctx.gpr[3]);
    goto L_089A9978;
L_089A9978:
    ctx.set_gpr(3, ctx.gpr[3] & 255u);
    ctx.set_gpr(4, ctx.gpr[3] << 24u);
    ctx.set_gpr(3, rt.memory().aot_load32(ctx.gpr[18] + static_cast<std::uint32_t>(8)));
    { const bool branch_taken = ctx.gpr[3] == 0u;
    // nop
      if (branch_taken) {
          goto L_089A99A0;
      }
      goto L_089A998C;
    }
L_089A998C:
    ctx.set_gpr(1, static_cast<std::int32_t>(ctx.gpr[3]) < 8 ? 1u : 0u);
    { const bool branch_taken = ctx.gpr[1] != 0u;
    // nop
      if (branch_taken) {
          goto L_089A99A0;
      }
      goto L_089A9998;
    }
L_089A9998:
    ctx.set_gpr(3, rt.memory().aot_load32(ctx.gpr[18] + static_cast<std::uint32_t>(16)));
    rt.memory().aot_store32(ctx.gpr[3] + static_cast<std::uint32_t>(28), ctx.gpr[4]);
    goto L_089A99A0;
L_089A99A0:
    { const bool branch_taken = ctx.gpr[16] == 0u;
    // nop
      if (branch_taken) {
          goto L_089A99B4;
      }
      goto L_089A99A8;
    }
L_089A99A8:
    ctx.set_gpr(17, 0u + static_cast<std::uint32_t>(3));
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_089A99B8;
      }
      goto L_089A99B4;
    }
L_089A99B4:
    ctx.set_gpr(17, 0u + static_cast<std::uint32_t>(2));
    goto L_089A99B8;
L_089A99B8:
    rt.memory().aot_store32(ctx.gpr[21] + static_cast<std::uint32_t>(0), 0u);
    rt.memory().aot_store32(ctx.gpr[21] + static_cast<std::uint32_t>(4), 0u);
    ctx.set_gpr(20, 0u + 0u);
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_089A9A40;
      }
      goto L_089A99CC;
    }
L_089A99CC:
    ctx.set_gpr(2, ctx.gpr[20] << 2u);
    ctx.set_gpr(2, ctx.gpr[23] + ctx.gpr[2]);
    ctx.set_gpr(4, rt.memory().aot_load32(ctx.gpr[2] + static_cast<std::uint32_t>(0)));
    ctx.set_gpr(5, ctx.gpr[18] + 0u);
    ctx.set_gpr(6, ctx.gpr[29] + static_cast<std::uint32_t>(48));
    ctx.set_gpr(7, ctx.gpr[22] + 0u);
    ctx.set_gpr(8, ctx.gpr[16] + 0u);
    ctx.set_gpr(31, 0x089A99F0u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0104_entry, 104u, 666u, 0x089A704Cu>(ctx, &aot_mem) && ctx.pc == 0x089A99F0u) goto L_089A99F0;
    return;
L_089A99F0:
    ctx.set_gpr(19, ctx.gpr[2] + 0u);
    ctx.set_gpr(5, static_cast<std::uint32_t>(static_cast<std::int32_t>(ctx.gpr[17]) >> 31u));
    ctx.set_gpr(7, static_cast<std::uint32_t>(static_cast<std::int32_t>(ctx.gpr[20]) >> 31u));
    ctx.set_gpr(4, ctx.gpr[17] + 0u);
    ctx.set_gpr(6, ctx.gpr[20] + 0u);
    ctx.set_gpr(31, 0x089A9A0Cu);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0006_entry, 6u, 110u, 0x0881C82Cu>(ctx, &aot_mem) && ctx.pc == 0x089A9A0Cu) goto L_089A9A0C;
    return;
L_089A9A0C:
    ctx.set_gpr(5, static_cast<std::uint32_t>(static_cast<std::int32_t>(ctx.gpr[19]) >> 31u));
    ctx.set_gpr(4, ctx.gpr[19] + 0u);
    ctx.set_gpr(6, ctx.gpr[2] + 0u);
    ctx.set_gpr(7, ctx.gpr[3] + 0u);
    ctx.set_gpr(31, 0x089A9A24u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0006_entry, 6u, 111u, 0x0881C858u>(ctx, &aot_mem) && ctx.pc == 0x089A9A24u) goto L_089A9A24;
    return;
L_089A9A24:
    ctx.set_gpr(4, rt.memory().aot_load32(ctx.gpr[21] + static_cast<std::uint32_t>(0)));
    ctx.set_gpr(5, rt.memory().aot_load32(ctx.gpr[21] + static_cast<std::uint32_t>(4)));
    ctx.set_gpr(4, ctx.gpr[4] | ctx.gpr[2]);
    ctx.set_gpr(3, ctx.gpr[5] | ctx.gpr[3]);
    rt.memory().aot_store32(ctx.gpr[21] + static_cast<std::uint32_t>(0), ctx.gpr[4]);
    rt.memory().aot_store32(ctx.gpr[21] + static_cast<std::uint32_t>(4), ctx.gpr[3]);
    ctx.set_gpr(20, ctx.gpr[20] + static_cast<std::uint32_t>(1));
    goto L_089A9A40;
L_089A9A40:
    ctx.set_gpr(3, static_cast<std::int32_t>(ctx.gpr[20]) < 16 ? 1u : 0u);
    { const bool branch_taken = ctx.gpr[3] != 0u;
    // nop
      if (branch_taken) {
          goto L_089A99CC;
      }
      goto L_089A9A4C;
    }
L_089A9A4C:
    ctx.set_gpr(31, rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(44)));
    ctx.set_gpr(23, rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(40)));
    ctx.set_gpr(22, rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(36)));
    ctx.set_gpr(21, rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(32)));
    ctx.set_gpr(20, rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(28)));
    ctx.set_gpr(19, rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(24)));
    ctx.set_gpr(18, rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(20)));
    ctx.set_gpr(17, rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(16)));
    ctx.set_gpr(16, rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(12)));
    ctx.set_gpr(29, ctx.gpr[29] + static_cast<std::uint32_t>(96));
    jump_target = ctx.gpr[31];
    // nop
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_089A9A7C:
    ctx.set_gpr(29, ctx.gpr[29] + static_cast<std::uint32_t>(-224));
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
    ctx.set_gpr(16, ctx.gpr[4] + 0u);
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(92), ctx.gpr[5]);
    ctx.set_gpr(21, ctx.gpr[6] + 0u);
    ctx.set_gpr(20, rt.memory().aot_load32(ctx.gpr[5] + static_cast<std::uint32_t>(52)));
    ctx.set_gpr(19, rt.memory().aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(8)));
    ctx.set_gpr(18, rt.memory().aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(12)));
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(216), 0u);
    ctx.set_gpr(3, 0u + 0u);
    { const bool branch_taken = ctx.gpr[3] == 0u;
    // nop
      if (branch_taken) {
          goto L_089A9ADC;
      }
      goto L_089A9AD0;
    }
L_089A9AD0:
    ctx.set_gpr(2, rt.memory().aot_load32(ctx.gpr[3] + static_cast<std::uint32_t>(4)));
    ctx.set_gpr(2, ctx.gpr[2] + static_cast<std::uint32_t>(1));
    rt.memory().aot_store32(ctx.gpr[3] + static_cast<std::uint32_t>(4), ctx.gpr[2]);
    goto L_089A9ADC;
L_089A9ADC:
    ctx.set_gpr(2, ctx.gpr[19] & 3u);
    { const bool branch_taken = static_cast<std::int32_t>(ctx.gpr[19]) >= 0;
    // nop
      if (branch_taken) {
          goto L_089A9AF4;
      }
      goto L_089A9AE8;
    }
L_089A9AE8:
    { const bool branch_taken = ctx.gpr[2] == 0u;
    // nop
      if (branch_taken) {
          goto L_089A9AF4;
      }
      goto L_089A9AF0;
    }
L_089A9AF0:
    ctx.set_gpr(2, ctx.gpr[2] + static_cast<std::uint32_t>(-4));
    goto L_089A9AF4;
L_089A9AF4:
    { const bool branch_taken = ctx.gpr[2] != 0u;
    // nop
      if (branch_taken) {
          goto L_089A9B1C;
      }
      goto L_089A9AFC;
    }
L_089A9AFC:
    ctx.set_gpr(2, ctx.gpr[18] & 3u);
    { const bool branch_taken = static_cast<std::int32_t>(ctx.gpr[18]) >= 0;
    // nop
      if (branch_taken) {
          goto L_089A9B14;
      }
      goto L_089A9B08;
    }
L_089A9B08:
    { const bool branch_taken = ctx.gpr[2] == 0u;
    // nop
      if (branch_taken) {
          goto L_089A9B14;
      }
      goto L_089A9B10;
    }
L_089A9B10:
    ctx.set_gpr(2, ctx.gpr[2] + static_cast<std::uint32_t>(-4));
    goto L_089A9B14;
L_089A9B14:
    { const bool branch_taken = ctx.gpr[2] == 0u;
    // nop
      if (branch_taken) {
          goto L_089A9C5C;
      }
      goto L_089A9B1C;
    }
L_089A9B1C:
    ctx.set_gpr(1, static_cast<std::int32_t>(ctx.gpr[19]) < 5 ? 1u : 0u);
    { const bool branch_taken = ctx.gpr[1] != 0u;
    // nop
      if (branch_taken) {
          goto L_089A9B30;
      }
      goto L_089A9B28;
    }
L_089A9B28:
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_089A9B34;
      }
      goto L_089A9B30;
    }
L_089A9B30:
    ctx.set_gpr(19, 0u + static_cast<std::uint32_t>(4));
    goto L_089A9B34;
L_089A9B34:
    ctx.set_gpr(1, static_cast<std::int32_t>(ctx.gpr[19]) < 2 ? 1u : 0u);
    { const bool branch_taken = ctx.gpr[1] == 0u;
    // nop
      if (branch_taken) {
          goto L_089A9B4C;
      }
      goto L_089A9B40;
    }
L_089A9B40:
    ctx.set_gpr(19, 0u + static_cast<std::uint32_t>(1));
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_089A9B7C;
      }
      goto L_089A9B4C;
    }
L_089A9B4C:
    ctx.set_gpr(3, ctx.gpr[19] + static_cast<std::uint32_t>(-1));
    ctx.set_gpr(2, 0u + 0u);
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_089A9B64;
      }
      goto L_089A9B5C;
    }
L_089A9B5C:
    ctx.set_gpr(3, static_cast<std::uint32_t>(static_cast<std::int32_t>(ctx.gpr[3]) >> 1u));
    ctx.set_gpr(2, ctx.gpr[2] + static_cast<std::uint32_t>(1));
    goto L_089A9B64;
L_089A9B64:
    ctx.set_gpr(1, static_cast<std::int32_t>(ctx.gpr[3]) < 2 ? 1u : 0u);
    { const bool branch_taken = ctx.gpr[1] == 0u;
    // nop
      if (branch_taken) {
          goto L_089A9B5C;
      }
      goto L_089A9B70;
    }
L_089A9B70:
    ctx.set_gpr(3, ctx.gpr[2] + static_cast<std::uint32_t>(1));
    ctx.set_gpr(2, 0u + static_cast<std::uint32_t>(1));
    ctx.set_gpr(19, ctx.gpr[2] << (ctx.gpr[3] & 31u));
    goto L_089A9B7C;
L_089A9B7C:
    ctx.set_gpr(1, static_cast<std::int32_t>(ctx.gpr[18]) < 5 ? 1u : 0u);
    { const bool branch_taken = ctx.gpr[1] != 0u;
    // nop
      if (branch_taken) {
          goto L_089A9B90;
      }
      goto L_089A9B88;
    }
L_089A9B88:
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_089A9B94;
      }
      goto L_089A9B90;
    }
L_089A9B90:
    ctx.set_gpr(18, 0u + static_cast<std::uint32_t>(4));
    goto L_089A9B94;
L_089A9B94:
    ctx.set_gpr(1, static_cast<std::int32_t>(ctx.gpr[18]) < 2 ? 1u : 0u);
    { const bool branch_taken = ctx.gpr[1] == 0u;
    // nop
      if (branch_taken) {
          goto L_089A9BAC;
      }
      goto L_089A9BA0;
    }
L_089A9BA0:
    ctx.set_gpr(18, 0u + static_cast<std::uint32_t>(1));
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_089A9BDC;
      }
      goto L_089A9BAC;
    }
L_089A9BAC:
    ctx.set_gpr(3, ctx.gpr[18] + static_cast<std::uint32_t>(-1));
    ctx.set_gpr(2, 0u + 0u);
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_089A9BC4;
      }
      goto L_089A9BBC;
    }
L_089A9BBC:
    ctx.set_gpr(3, static_cast<std::uint32_t>(static_cast<std::int32_t>(ctx.gpr[3]) >> 1u));
    ctx.set_gpr(2, ctx.gpr[2] + static_cast<std::uint32_t>(1));
    goto L_089A9BC4;
L_089A9BC4:
    ctx.set_gpr(1, static_cast<std::int32_t>(ctx.gpr[3]) < 2 ? 1u : 0u);
    { const bool branch_taken = ctx.gpr[1] == 0u;
    // nop
      if (branch_taken) {
          goto L_089A9BBC;
      }
      goto L_089A9BD0;
    }
L_089A9BD0:
    ctx.set_gpr(3, ctx.gpr[2] + static_cast<std::uint32_t>(1));
    ctx.set_gpr(2, 0u + static_cast<std::uint32_t>(1));
    ctx.set_gpr(18, ctx.gpr[2] << (ctx.gpr[3] & 31u));
    goto L_089A9BDC;
L_089A9BDC:
    ctx.set_gpr(31, 0x089A9BE4u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0078_entry, 78u, 228u, 0x0893CE9Cu>(ctx, &aot_mem) && ctx.pc == 0x089A9BE4u) goto L_089A9BE4;
    return;
L_089A9BE4:
    ctx.set_gpr(4, rt.memory().aot_load32(ctx.gpr[2] + static_cast<std::uint32_t>(0)));
    ctx.set_gpr(31, 0x089A9BF0u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0078_entry, 78u, 199u, 0x0893CC68u>(ctx, &aot_mem) && ctx.pc == 0x089A9BF0u) goto L_089A9BF0;
    return;
L_089A9BF0:
    ctx.set_gpr(4, ctx.gpr[2] + 0u);
    ctx.set_gpr(31, 0x089A9BFCu);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0100_entry, 100u, 257u, 0x08995790u>(ctx, &aot_mem) && ctx.pc == 0x089A9BFCu) goto L_089A9BFC;
    return;
L_089A9BFC:
    ctx.set_gpr(4, ctx.gpr[29] + static_cast<std::uint32_t>(216));
    ctx.set_gpr(5, ctx.gpr[2] + 0u);
    ctx.set_gpr(31, 0x089A9C0Cu);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0085_entry, 85u, 67u, 0x0895853Cu>(ctx, &aot_mem) && ctx.pc == 0x089A9C0Cu) goto L_089A9C0C;
    return;
L_089A9C0C:
    ctx.set_gpr(4, rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(216)));
    ctx.set_gpr(5, ctx.gpr[16] + 0u);
    ctx.set_gpr(6, 0u + static_cast<std::uint32_t>(1));
    ctx.set_gpr(25, rt.memory().aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(0)));
    ctx.set_gpr(25, rt.memory().aot_load32(ctx.gpr[25] + static_cast<std::uint32_t>(92)));
    jump_target = ctx.gpr[25];
    ctx.set_gpr(31, 0x089A9C28u);
    // nop
    ctx.pc = jump_target;
    if (rt.invoke_chained_call(ctx, &aot_mem) && ctx.pc == 0x089A9C28u) goto L_089A9C28;
    return;
L_089A9C28:
    ctx.set_gpr(4, rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(216)));
    ctx.set_gpr(5, ctx.gpr[19] + 0u);
    ctx.set_gpr(6, ctx.gpr[18] + 0u);
    ctx.set_gpr(7, 0u + 0u);
    ctx.set_gpr(25, rt.memory().aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(0)));
    ctx.set_gpr(25, rt.memory().aot_load32(ctx.gpr[25] + static_cast<std::uint32_t>(100)));
    jump_target = ctx.gpr[25];
    ctx.set_gpr(31, 0x089A9C48u);
    // nop
    ctx.pc = jump_target;
    if (rt.invoke_chained_call(ctx, &aot_mem) && ctx.pc == 0x089A9C48u) goto L_089A9C48;
    return;
L_089A9C48:
    ctx.set_gpr(2, rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(216)));
    ctx.set_gpr(2, rt.memory().aot_load32(ctx.gpr[2] + static_cast<std::uint32_t>(52)));
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(88), ctx.gpr[2]);
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_089A9C64;
      }
      goto L_089A9C5C;
    }
L_089A9C5C:
    ctx.set_gpr(2, rt.memory().aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(52)));
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(88), ctx.gpr[2]);
    goto L_089A9C64;
L_089A9C64:
    ctx.set_gpr(31, 0x089A9C6Cu);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0078_entry, 78u, 228u, 0x0893CE9Cu>(ctx, &aot_mem) && ctx.pc == 0x089A9C6Cu) goto L_089A9C6C;
    return;
L_089A9C6C:
    ctx.set_gpr(4, rt.memory().aot_load32(ctx.gpr[2] + static_cast<std::uint32_t>(0)));
    ctx.set_gpr(31, 0x089A9C78u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0078_entry, 78u, 199u, 0x0893CC68u>(ctx, &aot_mem) && ctx.pc == 0x089A9C78u) goto L_089A9C78;
    return;
L_089A9C78:
    ctx.set_gpr(4, ctx.gpr[2] + 0u);
    ctx.set_gpr(31, 0x089A9C84u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0060_entry, 60u, 599u, 0x088F7284u>(ctx, &aot_mem) && ctx.pc == 0x089A9C84u) goto L_089A9C84;
    return;
L_089A9C84:
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(212), ctx.gpr[2]);
    ctx.set_gpr(4, ctx.gpr[2] + 0u);
    ctx.set_gpr(2, rt.memory().aot_load32(ctx.gpr[2] + static_cast<std::uint32_t>(8)));
    ctx.set_gpr(1, static_cast<std::int32_t>(ctx.gpr[2]) < 17 ? 1u : 0u);
    { const bool branch_taken = ctx.gpr[1] == 0u;
    // nop
      if (branch_taken) {
          goto L_089A9CAC;
      }
      goto L_089A9C9C;
    }
L_089A9C9C:
    ctx.set_gpr(5, 0u + static_cast<std::uint32_t>(16));
    ctx.set_gpr(6, 0u + static_cast<std::uint32_t>(4));
    ctx.set_gpr(31, 0x089A9CACu);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0066_entry, 66u, 785u, 0x0890FA2Cu>(ctx, &aot_mem) && ctx.pc == 0x089A9CACu) goto L_089A9CAC;
    return;
L_089A9CAC:
    ctx.set_gpr(31, 0x089A9CB4u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0078_entry, 78u, 228u, 0x0893CE9Cu>(ctx, &aot_mem) && ctx.pc == 0x089A9CB4u) goto L_089A9CB4;
    return;
L_089A9CB4:
    ctx.set_gpr(4, rt.memory().aot_load32(ctx.gpr[2] + static_cast<std::uint32_t>(0)));
    ctx.set_gpr(31, 0x089A9CC0u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0078_entry, 78u, 199u, 0x0893CC68u>(ctx, &aot_mem) && ctx.pc == 0x089A9CC0u) goto L_089A9CC0;
    return;
L_089A9CC0:
    ctx.set_gpr(4, ctx.gpr[2] + 0u);
    ctx.set_gpr(31, 0x089A9CCCu);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0060_entry, 60u, 599u, 0x088F7284u>(ctx, &aot_mem) && ctx.pc == 0x089A9CCCu) goto L_089A9CCC;
    return;
L_089A9CCC:
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(208), ctx.gpr[2]);
    ctx.set_gpr(4, ctx.gpr[2] + 0u);
    ctx.set_gpr(3, rt.memory().aot_load32(ctx.gpr[2] + static_cast<std::uint32_t>(8)));
    ctx.set_gpr(1, static_cast<std::int32_t>(ctx.gpr[3]) < 9 ? 1u : 0u);
    { const bool branch_taken = ctx.gpr[1] == 0u;
    // nop
      if (branch_taken) {
          goto L_089A9CF4;
      }
      goto L_089A9CE4;
    }
L_089A9CE4:
    ctx.set_gpr(5, 0u + static_cast<std::uint32_t>(8));
    ctx.set_gpr(6, 0u + static_cast<std::uint32_t>(4));
    ctx.set_gpr(31, 0x089A9CF4u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0066_entry, 66u, 785u, 0x0890FA2Cu>(ctx, &aot_mem) && ctx.pc == 0x089A9CF4u) goto L_089A9CF4;
    return;
L_089A9CF4:
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(204), 0u);
    ctx.set_gpr(4, 0u + 0u);
    { const bool branch_taken = ctx.gpr[4] == 0u;
    // nop
      if (branch_taken) {
          goto L_089A9D10;
      }
      goto L_089A9D04;
    }
L_089A9D04:
    ctx.set_gpr(3, rt.memory().aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(4)));
    ctx.set_gpr(3, ctx.gpr[3] + static_cast<std::uint32_t>(1));
    rt.memory().aot_store32(ctx.gpr[4] + static_cast<std::uint32_t>(4), ctx.gpr[3]);
    goto L_089A9D10;
L_089A9D10:
    ctx.set_gpr(3, 0u + static_cast<std::uint32_t>(14));
    { const bool branch_taken = ctx.gpr[21] == ctx.gpr[3];
    // nop
      if (branch_taken) {
          goto L_089A9D4C;
      }
      goto L_089A9D1C;
    }
L_089A9D1C:
    ctx.set_gpr(31, 0x089A9D24u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0078_entry, 78u, 228u, 0x0893CE9Cu>(ctx, &aot_mem) && ctx.pc == 0x089A9D24u) goto L_089A9D24;
    return;
L_089A9D24:
    ctx.set_gpr(4, rt.memory().aot_load32(ctx.gpr[2] + static_cast<std::uint32_t>(0)));
    ctx.set_gpr(31, 0x089A9D30u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0078_entry, 78u, 199u, 0x0893CC68u>(ctx, &aot_mem) && ctx.pc == 0x089A9D30u) goto L_089A9D30;
    return;
L_089A9D30:
    ctx.set_gpr(4, ctx.gpr[2] + 0u);
    ctx.set_gpr(31, 0x089A9D3Cu);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0060_entry, 60u, 747u, 0x088F7F7Cu>(ctx, &aot_mem) && ctx.pc == 0x089A9D3Cu) goto L_089A9D3C;
    return;
L_089A9D3C:
    ctx.set_gpr(4, ctx.gpr[29] + static_cast<std::uint32_t>(204));
    ctx.set_gpr(5, ctx.gpr[2] + 0u);
    ctx.set_gpr(31, 0x089A9D4Cu);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0085_entry, 85u, 67u, 0x0895853Cu>(ctx, &aot_mem) && ctx.pc == 0x089A9D4Cu) goto L_089A9D4C;
    return;
L_089A9D4C:
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(84), 0u);
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_089AA460;
      }
      goto L_089A9D58;
    }
L_089A9D58:
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(80), 0u);
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_089AA444;
      }
      goto L_089A9D64;
    }
L_089A9D64:
    ctx.set_gpr(22, rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(212)));
    ctx.set_gpr(3, rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(204)));
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(76), ctx.gpr[3]);
    ctx.set_gpr(17, 0u + 0u);
    rt.memory().aot_store32(ctx.gpr[22] + static_cast<std::uint32_t>(8), 0u);
    { const bool branch_taken = ctx.gpr[3] == 0u;
    // nop
      if (branch_taken) {
          goto L_089A9D84;
      }
      goto L_089A9D80;
    }
L_089A9D80:
    rt.memory().aot_store32(ctx.gpr[3] + static_cast<std::uint32_t>(8), 0u);
    goto L_089A9D84;
L_089A9D84:
    ctx.set_gpr(23, 0u + 0u);
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_089A9F94;
      }
      goto L_089A9D90;
    }
L_089A9D90:
    ctx.set_gpr(30, 0u + 0u);
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_089A9F84;
      }
      goto L_089A9D9C;
    }
L_089A9D9C:
    ctx.set_gpr(3, ctx.gpr[23] << 2u);
    ctx.set_gpr(16, ctx.gpr[30] + ctx.gpr[3]);
    ctx.set_gpr(3, rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(80)));
    ctx.set_gpr(4, ctx.gpr[3] + ctx.gpr[30]);
    ctx.set_gpr(3, rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(84)));
    ctx.set_gpr(3, ctx.gpr[3] + ctx.gpr[23]);
    { const std::int64_t product = static_cast<std::int64_t>(static_cast<std::int32_t>(ctx.gpr[19])) * static_cast<std::int64_t>(static_cast<std::int32_t>(ctx.gpr[3])); ctx.lo = static_cast<std::uint32_t>(product); ctx.hi = static_cast<std::uint32_t>(static_cast<std::uint64_t>(product) >> 32u); }
    ctx.set_gpr(3, ctx.lo);
    ctx.set_gpr(3, ctx.gpr[4] + ctx.gpr[3]);
    ctx.set_gpr(4, ctx.gpr[3] << 2u);
    ctx.set_gpr(3, rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(88)));
    ctx.set_gpr(3, ctx.gpr[3] + ctx.gpr[4]);
    ctx.set_gpr(3, rt.memory().aot_load32(ctx.gpr[3] + static_cast<std::uint32_t>(0)));
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(68), ctx.gpr[3]);
    rt.memory().aot_store8(ctx.gpr[29] + static_cast<std::uint32_t>(72), static_cast<std::uint8_t>(0u));
    ctx.set_gpr(3, 0u + static_cast<std::uint32_t>(16));
    { const bool branch_taken = ctx.gpr[21] == ctx.gpr[3];
    // nop
      if (branch_taken) {
          goto L_089A9E3C;
      }
      goto L_089A9DE4;
    }
L_089A9DE4:
    ctx.set_gpr(3, 0u + static_cast<std::uint32_t>(15));
    { const bool branch_taken = ctx.gpr[21] == ctx.gpr[3];
    // nop
      if (branch_taken) {
          goto L_089A9E98;
      }
      goto L_089A9DF0;
    }
L_089A9DF0:
    ctx.set_gpr(3, 0u + static_cast<std::uint32_t>(14));
    { const bool branch_taken = ctx.gpr[21] == ctx.gpr[3];
    // nop
      if (branch_taken) {
          goto L_089A9E04;
      }
      goto L_089A9DFC;
    }
L_089A9DFC:
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_089A9E88;
      }
      goto L_089A9E04;
    }
L_089A9E04:
    ctx.set_gpr(3, 65528u << 16u);
    ctx.set_gpr(4, ctx.gpr[3] | 64760u);
    ctx.set_gpr(3, rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(68)));
    ctx.set_gpr(3, ctx.gpr[3] & ctx.gpr[4]);
    ctx.set_gpr(3, ctx.gpr[3] >> 24u);
    ctx.set_gpr(3, ctx.gpr[3] ^ 0u);
    ctx.set_gpr(3, ctx.gpr[3] < static_cast<std::uint32_t>(1) ? 1u : 0u);
    rt.memory().aot_store8(ctx.gpr[29] + static_cast<std::uint32_t>(72), static_cast<std::uint8_t>(ctx.gpr[3]));
    { const bool branch_taken = ctx.gpr[17] != 0u;
    // nop
      if (branch_taken) {
          goto L_089A9E98;
      }
      goto L_089A9E2C;
    }
L_089A9E2C:
    ctx.set_gpr(3, rt.memory().aot_load8(ctx.gpr[29] + static_cast<std::uint32_t>(72)));
    ctx.set_gpr(17, ctx.gpr[3] + 0u);
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_089A9E98;
      }
      goto L_089A9E3C;
    }
L_089A9E3C:
    ctx.set_gpr(5, 0u + static_cast<std::uint32_t>(1));
    ctx.set_gpr(3, 65528u << 16u);
    ctx.set_gpr(4, ctx.gpr[3] | 64760u);
    ctx.set_gpr(3, rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(68)));
    ctx.set_gpr(3, ctx.gpr[3] & ctx.gpr[4]);
    ctx.set_gpr(4, ctx.gpr[3] >> 24u);
    { const bool branch_taken = ctx.gpr[4] == 0u;
    // nop
      if (branch_taken) {
          goto L_089A9E6C;
      }
      goto L_089A9E5C;
    }
L_089A9E5C:
    ctx.set_gpr(3, 0u + static_cast<std::uint32_t>(255));
    { const bool branch_taken = ctx.gpr[4] == ctx.gpr[3];
    // nop
      if (branch_taken) {
          goto L_089A9E6C;
      }
      goto L_089A9E68;
    }
L_089A9E68:
    ctx.set_gpr(5, 0u + 0u);
    goto L_089A9E6C;
L_089A9E6C:
    ctx.set_gpr(3, ctx.gpr[5] & 255u);
    rt.memory().aot_store8(ctx.gpr[29] + static_cast<std::uint32_t>(72), static_cast<std::uint8_t>(ctx.gpr[3]));
    { const bool branch_taken = ctx.gpr[17] != 0u;
    // nop
      if (branch_taken) {
          goto L_089A9E98;
      }
      goto L_089A9E7C;
    }
L_089A9E7C:
    ctx.set_gpr(17, rt.memory().aot_load8(ctx.gpr[29] + static_cast<std::uint32_t>(72)));
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_089A9E98;
      }
      goto L_089A9E88;
    }
L_089A9E88:
    ctx.set_gpr(4, 2226u << 16u);
    ctx.set_gpr(4, ctx.gpr[4] + static_cast<std::uint32_t>(-28464));
    ctx.set_gpr(31, 0x089A9E98u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0084_entry, 84u, 456u, 0x08955F2Cu>(ctx, &aot_mem) && ctx.pc == 0x089A9E98u) goto L_089A9E98;
    return;
L_089A9E98:
    ctx.set_gpr(3, ctx.gpr[16] << 2u);
    ctx.set_gpr(3, ctx.gpr[3] + ctx.gpr[29]);
    ctx.set_gpr(16, ctx.gpr[3] + static_cast<std::uint32_t>(136));
    ctx.set_gpr(3, 65528u << 16u);
    ctx.set_gpr(4, ctx.gpr[3] | 64760u);
    ctx.set_gpr(3, rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(68)));
    ctx.set_gpr(3, ctx.gpr[3] & ctx.gpr[4]);
    rt.memory().aot_store32(ctx.gpr[16] + static_cast<std::uint32_t>(0), ctx.gpr[3]);
    ctx.set_gpr(3, 0u + static_cast<std::uint32_t>(14));
    { const bool branch_taken = ctx.gpr[21] != ctx.gpr[3];
    // nop
      if (branch_taken) {
          goto L_089A9F08;
      }
      goto L_089A9EC4;
    }
L_089A9EC4:
    ctx.set_gpr(3, rt.memory().aot_load8(ctx.gpr[29] + static_cast<std::uint32_t>(72)));
    { const bool branch_taken = ctx.gpr[3] != 0u;
    // nop
      if (branch_taken) {
          goto L_089A9F80;
      }
      goto L_089A9ED0;
    }
L_089A9ED0:
    ctx.set_gpr(4, ctx.gpr[22] + 0u);
    ctx.set_gpr(5, ctx.gpr[16] + 0u);
    ctx.set_gpr(6, 0u + 0u);
    ctx.set_gpr(31, 0x089A9EE4u);
    // nop
    goto L_089AA5CC;
L_089A9EE4:
    ctx.set_gpr(3, 0u + static_cast<std::uint32_t>(-1));
    { const bool branch_taken = ctx.gpr[2] != ctx.gpr[3];
    // nop
      if (branch_taken) {
          goto L_089A9F80;
      }
      goto L_089A9EF0;
    }
L_089A9EF0:
    ctx.set_gpr(4, ctx.gpr[22] + 0u);
    ctx.set_gpr(5, ctx.gpr[16] + 0u);
    ctx.set_gpr(31, 0x089A9F00u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0015_entry, 15u, 449u, 0x08841954u>(ctx, &aot_mem) && ctx.pc == 0x089A9F00u) goto L_089A9F00;
    return;
L_089A9F00:
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_089A9F80;
      }
      goto L_089A9F08;
    }
L_089A9F08:
    ctx.set_gpr(2, 0u + static_cast<std::uint32_t>(16));
    { const bool branch_taken = ctx.gpr[21] != ctx.gpr[2];
    // nop
      if (branch_taken) {
          goto L_089A9F50;
      }
      goto L_089A9F14;
    }
L_089A9F14:
    ctx.set_gpr(2, rt.memory().aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(0)));
    ctx.set_gpr(2, ctx.gpr[2] >> 24u);
    rt.memory().aot_store8(ctx.gpr[29] + static_cast<std::uint32_t>(223), static_cast<std::uint8_t>(ctx.gpr[2]));
    ctx.set_gpr(4, rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(76)));
    ctx.set_gpr(5, ctx.gpr[29] + static_cast<std::uint32_t>(223));
    ctx.set_gpr(6, 0u + 0u);
    ctx.set_gpr(31, 0x089A9F34u);
    // nop
    goto L_089AA580;
L_089A9F34:
    ctx.set_gpr(3, 0u + static_cast<std::uint32_t>(-1));
    { const bool branch_taken = ctx.gpr[2] != ctx.gpr[3];
    // nop
      if (branch_taken) {
          goto L_089A9F50;
      }
      goto L_089A9F40;
    }
L_089A9F40:
    ctx.set_gpr(4, rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(76)));
    ctx.set_gpr(5, ctx.gpr[29] + static_cast<std::uint32_t>(223));
    ctx.set_gpr(31, 0x089A9F50u);
    // nop
    goto L_089AA500;
L_089A9F50:
    ctx.set_gpr(4, ctx.gpr[22] + 0u);
    ctx.set_gpr(5, ctx.gpr[16] + 0u);
    ctx.set_gpr(6, 0u + 0u);
    ctx.set_gpr(31, 0x089A9F64u);
    // nop
    goto L_089AA5CC;
L_089A9F64:
    ctx.set_gpr(3, 0u + static_cast<std::uint32_t>(-1));
    { const bool branch_taken = ctx.gpr[2] != ctx.gpr[3];
    // nop
      if (branch_taken) {
          goto L_089A9F80;
      }
      goto L_089A9F70;
    }
L_089A9F70:
    ctx.set_gpr(4, ctx.gpr[22] + 0u);
    ctx.set_gpr(5, ctx.gpr[16] + 0u);
    ctx.set_gpr(31, 0x089A9F80u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0015_entry, 15u, 449u, 0x08841954u>(ctx, &aot_mem) && ctx.pc == 0x089A9F80u) goto L_089A9F80;
    return;
L_089A9F80:
    ctx.set_gpr(30, ctx.gpr[30] + static_cast<std::uint32_t>(1));
    goto L_089A9F84;
L_089A9F84:
    ctx.set_gpr(3, static_cast<std::int32_t>(ctx.gpr[30]) < 4 ? 1u : 0u);
    { const bool branch_taken = ctx.gpr[3] != 0u;
    // nop
      if (branch_taken) {
          goto L_089A9D9C;
      }
      goto L_089A9F90;
    }
L_089A9F90:
    ctx.set_gpr(23, ctx.gpr[23] + static_cast<std::uint32_t>(1));
    goto L_089A9F94;
L_089A9F94:
    ctx.set_gpr(3, static_cast<std::int32_t>(ctx.gpr[23]) < 4 ? 1u : 0u);
    { const bool branch_taken = ctx.gpr[3] != 0u;
    // nop
      if (branch_taken) {
          goto L_089A9D90;
      }
      goto L_089A9FA0;
    }
L_089A9FA0:
    ctx.set_gpr(3, 0u + static_cast<std::uint32_t>(14));
    { const bool branch_taken = ctx.gpr[21] != ctx.gpr[3];
    // nop
      if (branch_taken) {
          goto L_089A9FD4;
      }
      goto L_089A9FAC;
    }
L_089A9FAC:
    ctx.set_gpr(3, rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(212)));
    ctx.set_gpr(3, rt.memory().aot_load32(ctx.gpr[3] + static_cast<std::uint32_t>(8)));
    { const bool branch_taken = ctx.gpr[3] != 0u;
    // nop
      if (branch_taken) {
          goto L_089A9FD4;
      }
      goto L_089A9FBC;
    }
L_089A9FBC:
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(200), 0u);
    ctx.set_gpr(3, 0u + static_cast<std::uint32_t>(-1));
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(104), ctx.gpr[3]);
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(108), 0u);
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_089AA2A8;
      }
      goto L_089A9FD4;
    }
L_089A9FD4:
    ctx.set_gpr(5, rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(212)));
    ctx.set_gpr(4, rt.memory().aot_load32(ctx.gpr[5] + static_cast<std::uint32_t>(8)));
    ctx.set_gpr(3, 0u + static_cast<std::uint32_t>(1));
    { const bool branch_taken = ctx.gpr[4] != ctx.gpr[3];
    // nop
      if (branch_taken) {
          goto L_089AA214;
      }
      goto L_089A9FE8;
    }
L_089A9FE8:
    ctx.set_gpr(3, 0u + static_cast<std::uint32_t>(14));
    { const bool branch_taken = ctx.gpr[21] != ctx.gpr[3];
    // nop
      if (branch_taken) {
          goto L_089AA034;
      }
      goto L_089A9FF4;
    }
L_089A9FF4:
    { const bool branch_taken = ctx.gpr[17] == 0u;
    // nop
      if (branch_taken) {
          goto L_089AA034;
      }
      goto L_089A9FFC;
    }
L_089A9FFC:
    ctx.set_gpr(2, rt.memory().aot_load32(ctx.gpr[5] + static_cast<std::uint32_t>(16)));
    ctx.set_gpr(6, rt.memory().aot_load32(ctx.gpr[2] + static_cast<std::uint32_t>(0)));
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(0), 0u);
    ctx.set_gpr(4, ctx.gpr[29] + static_cast<std::uint32_t>(200));
    ctx.set_gpr(5, ctx.gpr[29] + static_cast<std::uint32_t>(104));
    ctx.set_gpr(7, ctx.gpr[6] + 0u);
    ctx.set_gpr(8, ctx.gpr[29] + static_cast<std::uint32_t>(136));
    ctx.set_gpr(9, rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(208)));
    ctx.set_gpr(10, ctx.gpr[17] + 0u);
    ctx.set_gpr(11, ctx.gpr[21] + 0u);
    ctx.set_gpr(31, 0x089AA02Cu);
    // nop
    goto L_089A84F8;
L_089AA02C:
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_089AA2A8;
      }
      goto L_089AA034;
    }
L_089AA034:
    ctx.set_gpr(3, rt.memory().aot_load32(ctx.gpr[5] + static_cast<std::uint32_t>(16)));
    ctx.set_gpr(4, rt.memory().aot_load32(ctx.gpr[3] + static_cast<std::uint32_t>(0)));
    ctx.set_gpr(3, 255u << 16u);
    ctx.set_gpr(3, ctx.gpr[4] & ctx.gpr[3]);
    ctx.set_gpr(6, (ctx.gpr[3] >> 16u) & 0x0000FFFFu);
    ctx.set_gpr(3, ctx.gpr[4] & 65280u);
    ctx.set_gpr(7, (ctx.gpr[3] >> 8u) & 0x0000FFFFu);
    ctx.set_gpr(3, ctx.gpr[4] & 255u);
    ctx.set_gpr(4, 16888u << 16u);
    ctx.fpr[1] = std::bit_cast<float>(ctx.gpr[4]);
    { const bool branch_taken = static_cast<std::int32_t>(ctx.gpr[6]) < 0;
    // nop
      if (branch_taken) {
          goto L_089AA074;
      }
      goto L_089AA064;
    }
L_089AA064:
    ctx.fpr[0] = std::bit_cast<float>(ctx.gpr[6]);
    ctx.fpr[0] = static_cast<float>(static_cast<std::int32_t>(ctx.fpr_bits(0)));
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_089AA08C;
      }
      goto L_089AA074;
    }
L_089AA074:
    ctx.set_gpr(5, ctx.gpr[6] >> 1u);
    ctx.set_gpr(4, ctx.gpr[6] & 1u);
    ctx.set_gpr(5, ctx.gpr[5] | ctx.gpr[4]);
    ctx.fpr[0] = std::bit_cast<float>(ctx.gpr[5]);
    ctx.fpr[0] = static_cast<float>(static_cast<std::int32_t>(ctx.fpr_bits(0)));
    ctx.fpr[0] = ctx.fpr[0] + ctx.fpr[0];
    goto L_089AA08C;
L_089AA08C:
    { const float fs = ctx.fpr[1]; const float ft = ctx.fpr[0]; if ((std::isinf(fs) && ft == 0.0f) || (std::isinf(ft) && fs == 0.0f)) ctx.set_fpr_bits(1, 0x7FC00000u); else ctx.fpr[1] = fs * ft; }
    ctx.set_gpr(4, 17279u << 16u);
    ctx.fpr[0] = std::bit_cast<float>(ctx.gpr[4]);
    ctx.fpr[1] = ctx.fpr[1] / ctx.fpr[0];
    ctx.set_gpr(4, 20224u << 16u);
    ctx.fpr[0] = std::bit_cast<float>(ctx.gpr[4]);
    ctx.set_fpu_condition((ctx.fpr[0] <= ctx.fpr[1]));
    // nop
    { const bool branch_taken = ctx.fpu_condition();
    // nop
      if (branch_taken) {
          goto L_089AA0C4;
      }
      goto L_089AA0B4;
    }
L_089AA0B4:
    ctx.set_fpr_bits(0, ctx.fpu_float_to_word(ctx.fpr[1], 1u));
    ctx.set_gpr(4, std::bit_cast<std::uint32_t>(ctx.fpr[0]));
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_089AA0D8;
      }
      goto L_089AA0C4;
    }
L_089AA0C4:
    ctx.fpr[0] = ctx.fpr[1] - ctx.fpr[0];
    ctx.set_fpr_bits(0, ctx.fpu_float_to_word(ctx.fpr[0], 1u));
    ctx.set_gpr(5, std::bit_cast<std::uint32_t>(ctx.fpr[0]));
    ctx.set_gpr(4, 0u + static_cast<std::uint32_t>(-32768));
    ctx.set_gpr(4, ctx.gpr[5] | ctx.gpr[4]);
    goto L_089AA0D8;
L_089AA0D8:
    ctx.set_gpr(4, ctx.gpr[4] & 65535u);
    ctx.set_gpr(6, ctx.gpr[4] << 11u);
    ctx.set_gpr(4, 17020u << 16u);
    ctx.fpr[1] = std::bit_cast<float>(ctx.gpr[4]);
    { const bool branch_taken = static_cast<std::int32_t>(ctx.gpr[7]) < 0;
    // nop
      if (branch_taken) {
          goto L_089AA100;
      }
      goto L_089AA0F0;
    }
L_089AA0F0:
    ctx.fpr[0] = std::bit_cast<float>(ctx.gpr[7]);
    ctx.fpr[0] = static_cast<float>(static_cast<std::int32_t>(ctx.fpr_bits(0)));
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_089AA118;
      }
      goto L_089AA100;
    }
L_089AA100:
    ctx.set_gpr(5, ctx.gpr[7] >> 1u);
    ctx.set_gpr(4, ctx.gpr[7] & 1u);
    ctx.set_gpr(5, ctx.gpr[5] | ctx.gpr[4]);
    ctx.fpr[0] = std::bit_cast<float>(ctx.gpr[5]);
    ctx.fpr[0] = static_cast<float>(static_cast<std::int32_t>(ctx.fpr_bits(0)));
    ctx.fpr[0] = ctx.fpr[0] + ctx.fpr[0];
    goto L_089AA118;
L_089AA118:
    { const float fs = ctx.fpr[1]; const float ft = ctx.fpr[0]; if ((std::isinf(fs) && ft == 0.0f) || (std::isinf(ft) && fs == 0.0f)) ctx.set_fpr_bits(1, 0x7FC00000u); else ctx.fpr[1] = fs * ft; }
    ctx.set_gpr(4, 17279u << 16u);
    ctx.fpr[0] = std::bit_cast<float>(ctx.gpr[4]);
    ctx.fpr[1] = ctx.fpr[1] / ctx.fpr[0];
    ctx.set_gpr(4, 20224u << 16u);
    ctx.fpr[0] = std::bit_cast<float>(ctx.gpr[4]);
    ctx.set_fpu_condition((ctx.fpr[0] <= ctx.fpr[1]));
    // nop
    { const bool branch_taken = ctx.fpu_condition();
    // nop
      if (branch_taken) {
          goto L_089AA150;
      }
      goto L_089AA140;
    }
L_089AA140:
    ctx.set_fpr_bits(0, ctx.fpu_float_to_word(ctx.fpr[1], 1u));
    ctx.set_gpr(4, std::bit_cast<std::uint32_t>(ctx.fpr[0]));
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_089AA164;
      }
      goto L_089AA150;
    }
L_089AA150:
    ctx.fpr[0] = ctx.fpr[1] - ctx.fpr[0];
    ctx.set_fpr_bits(0, ctx.fpu_float_to_word(ctx.fpr[0], 1u));
    ctx.set_gpr(5, std::bit_cast<std::uint32_t>(ctx.fpr[0]));
    ctx.set_gpr(4, 0u + static_cast<std::uint32_t>(-32768));
    ctx.set_gpr(4, ctx.gpr[5] | ctx.gpr[4]);
    goto L_089AA164;
L_089AA164:
    ctx.set_gpr(4, ctx.gpr[4] & 65535u);
    ctx.set_gpr(4, ctx.gpr[4] << 5u);
    ctx.set_gpr(5, ctx.gpr[6] | ctx.gpr[4]);
    ctx.set_gpr(4, 16888u << 16u);
    ctx.fpr[1] = std::bit_cast<float>(ctx.gpr[4]);
    { const bool branch_taken = static_cast<std::int32_t>(ctx.gpr[3]) < 0;
    // nop
      if (branch_taken) {
          goto L_089AA190;
      }
      goto L_089AA180;
    }
L_089AA180:
    ctx.fpr[0] = std::bit_cast<float>(ctx.gpr[3]);
    ctx.fpr[0] = static_cast<float>(static_cast<std::int32_t>(ctx.fpr_bits(0)));
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_089AA1A8;
      }
      goto L_089AA190;
    }
L_089AA190:
    ctx.set_gpr(4, ctx.gpr[3] >> 1u);
    ctx.set_gpr(3, ctx.gpr[3] & 1u);
    ctx.set_gpr(4, ctx.gpr[4] | ctx.gpr[3]);
    ctx.fpr[0] = std::bit_cast<float>(ctx.gpr[4]);
    ctx.fpr[0] = static_cast<float>(static_cast<std::int32_t>(ctx.fpr_bits(0)));
    ctx.fpr[0] = ctx.fpr[0] + ctx.fpr[0];
    goto L_089AA1A8;
L_089AA1A8:
    { const float fs = ctx.fpr[1]; const float ft = ctx.fpr[0]; if ((std::isinf(fs) && ft == 0.0f) || (std::isinf(ft) && fs == 0.0f)) ctx.set_fpr_bits(1, 0x7FC00000u); else ctx.fpr[1] = fs * ft; }
    ctx.set_gpr(3, 17279u << 16u);
    ctx.fpr[0] = std::bit_cast<float>(ctx.gpr[3]);
    ctx.fpr[1] = ctx.fpr[1] / ctx.fpr[0];
    ctx.set_gpr(3, 20224u << 16u);
    ctx.fpr[0] = std::bit_cast<float>(ctx.gpr[3]);
    ctx.set_fpu_condition((ctx.fpr[0] <= ctx.fpr[1]));
    // nop
    { const bool branch_taken = ctx.fpu_condition();
    // nop
      if (branch_taken) {
          goto L_089AA1E0;
      }
      goto L_089AA1D0;
    }
L_089AA1D0:
    ctx.set_fpr_bits(0, ctx.fpu_float_to_word(ctx.fpr[1], 1u));
    ctx.set_gpr(3, std::bit_cast<std::uint32_t>(ctx.fpr[0]));
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_089AA1F4;
      }
      goto L_089AA1E0;
    }
L_089AA1E0:
    ctx.fpr[0] = ctx.fpr[1] - ctx.fpr[0];
    ctx.set_fpr_bits(0, ctx.fpu_float_to_word(ctx.fpr[0], 1u));
    ctx.set_gpr(4, std::bit_cast<std::uint32_t>(ctx.fpr[0]));
    ctx.set_gpr(3, 0u + static_cast<std::uint32_t>(-32768));
    ctx.set_gpr(3, ctx.gpr[4] | ctx.gpr[3]);
    goto L_089AA1F4;
L_089AA1F4:
    ctx.set_gpr(3, ctx.gpr[3] & 65535u);
    ctx.set_gpr(3, ctx.gpr[3] | ctx.gpr[5]);
    ctx.set_gpr(3, ctx.gpr[3] & 65535u);
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(200), ctx.gpr[3]);
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(104), 0u);
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(108), 0u);
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_089AA2A8;
      }
      goto L_089AA214;
    }
L_089AA214:
    ctx.set_gpr(2, 0u + static_cast<std::uint32_t>(2));
    { const bool branch_taken = ctx.gpr[4] != ctx.gpr[2];
    // nop
      if (branch_taken) {
          goto L_089AA258;
      }
      goto L_089AA220;
    }
L_089AA220:
    ctx.set_gpr(2, rt.memory().aot_load32(ctx.gpr[5] + static_cast<std::uint32_t>(16)));
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(0), 0u);
    ctx.set_gpr(4, ctx.gpr[29] + static_cast<std::uint32_t>(200));
    ctx.set_gpr(5, ctx.gpr[29] + static_cast<std::uint32_t>(104));
    ctx.set_gpr(6, rt.memory().aot_load32(ctx.gpr[2] + static_cast<std::uint32_t>(0)));
    ctx.set_gpr(7, rt.memory().aot_load32(ctx.gpr[2] + static_cast<std::uint32_t>(4)));
    ctx.set_gpr(8, ctx.gpr[29] + static_cast<std::uint32_t>(136));
    ctx.set_gpr(9, rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(208)));
    ctx.set_gpr(10, ctx.gpr[17] + 0u);
    ctx.set_gpr(11, ctx.gpr[21] + 0u);
    ctx.set_gpr(31, 0x089AA250u);
    // nop
    goto L_089A84F8;
L_089AA250:
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_089AA2A8;
      }
      goto L_089AA258;
    }
L_089AA258:
    ctx.set_gpr(4, ctx.gpr[29] + static_cast<std::uint32_t>(132));
    ctx.set_gpr(5, ctx.gpr[29] + static_cast<std::uint32_t>(128));
    ctx.set_gpr(6, ctx.gpr[29] + static_cast<std::uint32_t>(136));
    ctx.set_gpr(7, rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(208)));
    ctx.set_gpr(8, ctx.gpr[17] + 0u);
    ctx.set_gpr(9, ctx.gpr[21] + 0u);
    ctx.set_gpr(10, 0u + 0u);
    ctx.set_gpr(31, 0x089AA27Cu);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0104_entry, 104u, 737u, 0x089A7698u>(ctx, &aot_mem) && ctx.pc == 0x089AA27Cu) goto L_089AA27C;
    return;
L_089AA27C:
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(0), 0u);
    ctx.set_gpr(4, ctx.gpr[29] + static_cast<std::uint32_t>(200));
    ctx.set_gpr(5, ctx.gpr[29] + static_cast<std::uint32_t>(104));
    ctx.set_gpr(6, rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(132)));
    ctx.set_gpr(7, rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(128)));
    ctx.set_gpr(8, ctx.gpr[29] + static_cast<std::uint32_t>(136));
    ctx.set_gpr(9, rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(208)));
    ctx.set_gpr(10, ctx.gpr[17] + 0u);
    ctx.set_gpr(11, ctx.gpr[21] + 0u);
    ctx.set_gpr(31, 0x089AA2A8u);
    // nop
    goto L_089A84F8;
L_089AA2A8:
    ctx.set_gpr(3, 0u + static_cast<std::uint32_t>(16));
    { const bool branch_taken = ctx.gpr[21] == ctx.gpr[3];
    // nop
      if (branch_taken) {
          goto L_089AA384;
      }
      goto L_089AA2B4;
    }
L_089AA2B4:
    ctx.set_gpr(3, 0u + static_cast<std::uint32_t>(15));
    { const bool branch_taken = ctx.gpr[21] == ctx.gpr[3];
    // nop
      if (branch_taken) {
          goto L_089AA2F0;
      }
      goto L_089AA2C0;
    }
L_089AA2C0:
    ctx.set_gpr(3, 0u + static_cast<std::uint32_t>(14));
    { const bool branch_taken = ctx.gpr[21] == ctx.gpr[3];
    // nop
      if (branch_taken) {
          goto L_089AA2D4;
      }
      goto L_089AA2CC;
    }
L_089AA2CC:
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_089AA428;
      }
      goto L_089AA2D4;
    }
L_089AA2D4:
    ctx.set_gpr(3, rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(200)));
    rt.memory().aot_store32(ctx.gpr[20] + static_cast<std::uint32_t>(0), ctx.gpr[3]);
    ctx.set_gpr(3, rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(104)));
    rt.memory().aot_store32(ctx.gpr[20] + static_cast<std::uint32_t>(4), ctx.gpr[3]);
    ctx.set_gpr(20, ctx.gpr[20] + static_cast<std::uint32_t>(8));
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_089AA438;
      }
      goto L_089AA2F0;
    }
L_089AA2F0:
    rt.memory().aot_store32(ctx.gpr[20] + static_cast<std::uint32_t>(0), 0u);
    rt.memory().aot_store32(ctx.gpr[20] + static_cast<std::uint32_t>(4), 0u);
    ctx.set_gpr(7, 0u + 0u);
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_089AA35C;
      }
      goto L_089AA304;
    }
L_089AA304:
    ctx.set_gpr(6, 0u + 0u);
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_089AA34C;
      }
      goto L_089AA310;
    }
L_089AA310:
    ctx.set_gpr(3, ctx.gpr[7] << 3u);
    ctx.set_gpr(3, ctx.gpr[6] + ctx.gpr[3]);
    ctx.set_gpr(3, ctx.gpr[3] << 2u);
    ctx.set_gpr(3, ctx.gpr[3] + ctx.gpr[29]);
    ctx.set_gpr(3, rt.memory().aot_load32(ctx.gpr[3] + static_cast<std::uint32_t>(136)));
    ctx.set_gpr(3, (ctx.gpr[3] >> 24u) & 0x000000FFu);
    ctx.set_gpr(4, (ctx.gpr[3] >> 4u) & 0x000000FFu);
    ctx.set_gpr(3, ctx.gpr[6] << 2u);
    ctx.set_gpr(5, ctx.gpr[4] << (ctx.gpr[3] & 31u));
    ctx.set_gpr(3, ctx.gpr[7] << 2u);
    ctx.set_gpr(4, ctx.gpr[20] + ctx.gpr[3]);
    ctx.set_gpr(3, rt.memory().aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(0)));
    ctx.set_gpr(3, ctx.gpr[3] | ctx.gpr[5]);
    rt.memory().aot_store32(ctx.gpr[4] + static_cast<std::uint32_t>(0), ctx.gpr[3]);
    ctx.set_gpr(6, ctx.gpr[6] + static_cast<std::uint32_t>(1));
    goto L_089AA34C;
L_089AA34C:
    ctx.set_gpr(3, static_cast<std::int32_t>(ctx.gpr[6]) < 8 ? 1u : 0u);
    { const bool branch_taken = ctx.gpr[3] != 0u;
    // nop
      if (branch_taken) {
          goto L_089AA310;
      }
      goto L_089AA358;
    }
L_089AA358:
    ctx.set_gpr(7, ctx.gpr[7] + static_cast<std::uint32_t>(1));
    goto L_089AA35C;
L_089AA35C:
    ctx.set_gpr(3, static_cast<std::int32_t>(ctx.gpr[7]) < 2 ? 1u : 0u);
    { const bool branch_taken = ctx.gpr[3] != 0u;
    // nop
      if (branch_taken) {
          goto L_089AA304;
      }
      goto L_089AA368;
    }
L_089AA368:
    ctx.set_gpr(3, rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(200)));
    rt.memory().aot_store32(ctx.gpr[20] + static_cast<std::uint32_t>(8), ctx.gpr[3]);
    ctx.set_gpr(3, rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(104)));
    rt.memory().aot_store32(ctx.gpr[20] + static_cast<std::uint32_t>(12), ctx.gpr[3]);
    ctx.set_gpr(20, ctx.gpr[20] + static_cast<std::uint32_t>(16));
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_089AA438;
      }
      goto L_089AA384;
    }
L_089AA384:
    ctx.set_gpr(4, ctx.gpr[29] + static_cast<std::uint32_t>(124));
    ctx.set_gpr(5, ctx.gpr[29] + static_cast<std::uint32_t>(120));
    ctx.set_gpr(6, ctx.gpr[29] + static_cast<std::uint32_t>(136));
    ctx.set_gpr(7, rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(208)));
    ctx.set_gpr(8, ctx.gpr[17] + 0u);
    ctx.set_gpr(9, ctx.gpr[21] + 0u);
    ctx.set_gpr(10, 0u + static_cast<std::uint32_t>(1));
    ctx.set_gpr(31, 0x089AA3A8u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0104_entry, 104u, 737u, 0x089A7698u>(ctx, &aot_mem) && ctx.pc == 0x089AA3A8u) goto L_089AA3A8;
    return;
L_089AA3A8:
    ctx.set_gpr(2, 0u + static_cast<std::uint32_t>(1));
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(0), ctx.gpr[2]);
    ctx.set_gpr(4, ctx.gpr[29] + static_cast<std::uint32_t>(116));
    ctx.set_gpr(5, ctx.gpr[29] + static_cast<std::uint32_t>(96));
    ctx.set_gpr(6, rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(124)));
    ctx.set_gpr(7, rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(120)));
    ctx.set_gpr(8, ctx.gpr[29] + static_cast<std::uint32_t>(136));
    ctx.set_gpr(9, rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(208)));
    ctx.set_gpr(10, ctx.gpr[17] + 0u);
    ctx.set_gpr(11, ctx.gpr[21] + 0u);
    ctx.set_gpr(31, 0x089AA3D8u);
    // nop
    goto L_089A84F8;
L_089AA3D8:
    ctx.set_gpr(3, rt.memory().aot_load16(ctx.gpr[29] + static_cast<std::uint32_t>(96)));
    ctx.set_gpr(4, ctx.gpr[3] << 16u);
    ctx.set_gpr(3, rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(116)));
    ctx.set_gpr(3, ctx.gpr[4] | ctx.gpr[3]);
    rt.memory().aot_store32(ctx.gpr[20] + static_cast<std::uint32_t>(0), ctx.gpr[3]);
    ctx.set_gpr(4, rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(96)));
    ctx.set_gpr(5, rt.memory().aot_load16(ctx.gpr[29] + static_cast<std::uint32_t>(100)));
    ctx.set_gpr(3, 65535u << 16u);
    ctx.set_gpr(3, ctx.gpr[4] & ctx.gpr[3]);
    ctx.set_gpr(4, ctx.gpr[3] >> 16u);
    ctx.set_gpr(3, ctx.gpr[5] << 16u);
    ctx.set_gpr(3, ctx.gpr[3] | ctx.gpr[4]);
    rt.memory().aot_store32(ctx.gpr[20] + static_cast<std::uint32_t>(4), ctx.gpr[3]);
    ctx.set_gpr(3, rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(200)));
    rt.memory().aot_store32(ctx.gpr[20] + static_cast<std::uint32_t>(8), ctx.gpr[3]);
    ctx.set_gpr(3, rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(104)));
    rt.memory().aot_store32(ctx.gpr[20] + static_cast<std::uint32_t>(12), ctx.gpr[3]);
    ctx.set_gpr(20, ctx.gpr[20] + static_cast<std::uint32_t>(16));
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_089AA438;
      }
      goto L_089AA428;
    }
L_089AA428:
    ctx.set_gpr(4, 2229u << 16u);
    ctx.set_gpr(4, ctx.gpr[4] + static_cast<std::uint32_t>(-16316));
    ctx.set_gpr(31, 0x089AA438u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0084_entry, 84u, 456u, 0x08955F2Cu>(ctx, &aot_mem) && ctx.pc == 0x089AA438u) goto L_089AA438;
    return;
L_089AA438:
    ctx.set_gpr(3, rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(80)));
    ctx.set_gpr(3, ctx.gpr[3] + static_cast<std::uint32_t>(4));
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(80), ctx.gpr[3]);
    goto L_089AA444;
L_089AA444:
    ctx.set_gpr(3, rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(80)));
    ctx.set_gpr(3, static_cast<std::int32_t>(ctx.gpr[3]) < static_cast<std::int32_t>(ctx.gpr[19]) ? 1u : 0u);
    { const bool branch_taken = ctx.gpr[3] != 0u;
    // nop
      if (branch_taken) {
          goto L_089A9D64;
      }
      goto L_089AA454;
    }
L_089AA454:
    ctx.set_gpr(3, rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(84)));
    ctx.set_gpr(3, ctx.gpr[3] + static_cast<std::uint32_t>(4));
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(84), ctx.gpr[3]);
    goto L_089AA460;
L_089AA460:
    ctx.set_gpr(3, rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(84)));
    ctx.set_gpr(3, static_cast<std::int32_t>(ctx.gpr[3]) < static_cast<std::int32_t>(ctx.gpr[18]) ? 1u : 0u);
    { const bool branch_taken = ctx.gpr[3] != 0u;
    // nop
      if (branch_taken) {
          goto L_089A9D58;
      }
      goto L_089AA470;
    }
L_089AA470:
    ctx.set_gpr(4, 0u + static_cast<std::uint32_t>(1));
    ctx.set_gpr(3, rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(92)));
    rt.memory().aot_store8(ctx.gpr[3] + static_cast<std::uint32_t>(80), static_cast<std::uint8_t>(ctx.gpr[4]));
    ctx.set_gpr(4, rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(204)));
    { const bool branch_taken = ctx.gpr[4] == 0u;
    // nop
      if (branch_taken) {
          goto L_089AA490;
      }
      goto L_089AA488;
    }
L_089AA488:
    ctx.set_gpr(31, 0x089AA490u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0014_entry, 14u, 257u, 0x0883D454u>(ctx, &aot_mem) && ctx.pc == 0x089AA490u) goto L_089AA490;
    return;
L_089AA490:
    ctx.set_gpr(4, rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(208)));
    { const bool branch_taken = ctx.gpr[4] == 0u;
    // nop
      if (branch_taken) {
          goto L_089AA4A4;
      }
      goto L_089AA49C;
    }
L_089AA49C:
    ctx.set_gpr(31, 0x089AA4A4u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0014_entry, 14u, 257u, 0x0883D454u>(ctx, &aot_mem) && ctx.pc == 0x089AA4A4u) goto L_089AA4A4;
    return;
L_089AA4A4:
    ctx.set_gpr(4, rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(212)));
    { const bool branch_taken = ctx.gpr[4] == 0u;
    // nop
      if (branch_taken) {
          goto L_089AA4B8;
      }
      goto L_089AA4B0;
    }
L_089AA4B0:
    ctx.set_gpr(31, 0x089AA4B8u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0014_entry, 14u, 257u, 0x0883D454u>(ctx, &aot_mem) && ctx.pc == 0x089AA4B8u) goto L_089AA4B8;
    return;
L_089AA4B8:
    ctx.set_gpr(4, rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(216)));
    { const bool branch_taken = ctx.gpr[4] == 0u;
    // nop
      if (branch_taken) {
          goto L_089AA4CC;
      }
      goto L_089AA4C4;
    }
L_089AA4C4:
    ctx.set_gpr(31, 0x089AA4CCu);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0014_entry, 14u, 257u, 0x0883D454u>(ctx, &aot_mem) && ctx.pc == 0x089AA4CCu) goto L_089AA4CC;
    return;
L_089AA4CC:
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
    ctx.set_gpr(29, ctx.gpr[29] + static_cast<std::uint32_t>(224));
    jump_target = ctx.gpr[31];
    // nop
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_089AA500:
    ctx.set_gpr(29, ctx.gpr[29] + static_cast<std::uint32_t>(-16));
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(12), ctx.gpr[31]);
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(8), ctx.gpr[18]);
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(4), ctx.gpr[17]);
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(0), ctx.gpr[16]);
    ctx.set_gpr(17, ctx.gpr[4] + 0u);
    ctx.set_gpr(18, ctx.gpr[5] + 0u);
    ctx.set_gpr(16, rt.memory().aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(8)));
    ctx.set_gpr(3, rt.memory().aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(12)));
    ctx.set_gpr(1, static_cast<std::int32_t>(ctx.gpr[16]) < static_cast<std::int32_t>(ctx.gpr[3]) ? 1u : 0u);
    { const bool branch_taken = ctx.gpr[1] == 0u;
    // nop
      if (branch_taken) {
          goto L_089AA544;
      }
      goto L_089AA530;
    }
L_089AA530:
    ctx.set_gpr(3, rt.memory().aot_load32(ctx.gpr[17] + static_cast<std::uint32_t>(8)));
    ctx.set_gpr(3, ctx.gpr[3] + static_cast<std::uint32_t>(1));
    rt.memory().aot_store32(ctx.gpr[17] + static_cast<std::uint32_t>(8), ctx.gpr[3]);
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_089AA554;
      }
      goto L_089AA544;
    }
L_089AA544:
    ctx.set_gpr(5, ctx.gpr[16] + static_cast<std::uint32_t>(1));
    ctx.set_gpr(6, 0u + static_cast<std::uint32_t>(1));
    ctx.set_gpr(31, 0x089AA554u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0066_entry, 66u, 795u, 0x0890FB1Cu>(ctx, &aot_mem) && ctx.pc == 0x089AA554u) goto L_089AA554;
    return;
L_089AA554:
    ctx.set_gpr(4, rt.memory().aot_load8(ctx.gpr[18] + static_cast<std::uint32_t>(0)));
    ctx.set_gpr(3, rt.memory().aot_load32(ctx.gpr[17] + static_cast<std::uint32_t>(16)));
    ctx.set_gpr(3, ctx.gpr[16] + ctx.gpr[3]);
    rt.memory().aot_store8(ctx.gpr[3] + static_cast<std::uint32_t>(0), static_cast<std::uint8_t>(ctx.gpr[4]));
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
L_089AA580:
    ctx.set_gpr(7, rt.memory().aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(8)));
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_089AA5B4;
      }
      goto L_089AA58C;
    }
L_089AA58C:
    ctx.set_gpr(3, rt.memory().aot_load8(ctx.gpr[5] + static_cast<std::uint32_t>(0)));
    ctx.set_gpr(2, rt.memory().aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(16)));
    ctx.set_gpr(2, ctx.gpr[6] + ctx.gpr[2]);
    ctx.set_gpr(2, rt.memory().aot_load8(ctx.gpr[2] + static_cast<std::uint32_t>(0)));
    { const bool branch_taken = ctx.gpr[3] != ctx.gpr[2];
    // nop
      if (branch_taken) {
          goto L_089AA5B0;
      }
      goto L_089AA5A4;
    }
L_089AA5A4:
    ctx.set_gpr(2, ctx.gpr[6] + 0u);
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_089AA5C4;
      }
      goto L_089AA5B0;
    }
L_089AA5B0:
    ctx.set_gpr(6, ctx.gpr[6] + static_cast<std::uint32_t>(1));
    goto L_089AA5B4;
L_089AA5B4:
    ctx.set_gpr(2, static_cast<std::int32_t>(ctx.gpr[6]) < static_cast<std::int32_t>(ctx.gpr[7]) ? 1u : 0u);
    { const bool branch_taken = ctx.gpr[2] != 0u;
    // nop
      if (branch_taken) {
          goto L_089AA58C;
      }
      goto L_089AA5C0;
    }
L_089AA5C0:
    ctx.set_gpr(2, 0u + static_cast<std::uint32_t>(-1));
    goto L_089AA5C4;
L_089AA5C4:
    jump_target = ctx.gpr[31];
    // nop
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_089AA5CC:
    ctx.set_gpr(8, rt.memory().aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(8)));
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_089AA604;
      }
      goto L_089AA5D8;
    }
L_089AA5D8:
    ctx.set_gpr(7, rt.memory().aot_load32(ctx.gpr[5] + static_cast<std::uint32_t>(0)));
    ctx.set_gpr(3, ctx.gpr[6] << 2u);
    ctx.set_gpr(2, rt.memory().aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(16)));
    ctx.set_gpr(2, ctx.gpr[2] + ctx.gpr[3]);
    ctx.set_gpr(2, rt.memory().aot_load32(ctx.gpr[2] + static_cast<std::uint32_t>(0)));
    { const bool branch_taken = ctx.gpr[7] != ctx.gpr[2];
    // nop
      if (branch_taken) {
          goto L_089AA600;
      }
      goto L_089AA5F4;
    }
L_089AA5F4:
    ctx.set_gpr(2, ctx.gpr[6] + 0u);
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_089AA614;
      }
      goto L_089AA600;
    }
L_089AA600:
    ctx.set_gpr(6, ctx.gpr[6] + static_cast<std::uint32_t>(1));
    goto L_089AA604;
L_089AA604:
    ctx.set_gpr(2, static_cast<std::int32_t>(ctx.gpr[6]) < static_cast<std::int32_t>(ctx.gpr[8]) ? 1u : 0u);
    { const bool branch_taken = ctx.gpr[2] != 0u;
    // nop
      if (branch_taken) {
          goto L_089AA5D8;
      }
      goto L_089AA610;
    }
L_089AA610:
    ctx.set_gpr(2, 0u + static_cast<std::uint32_t>(-1));
    goto L_089AA614;
L_089AA614:
    jump_target = ctx.gpr[31];
    // nop
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_089AA61C:
    jump_target = ctx.gpr[31];
    // nop
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_089AA624:
    ctx.set_gpr(29, ctx.gpr[29] + static_cast<std::uint32_t>(-16));
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(12), ctx.gpr[31]);
    ctx.set_gpr(6, 0u + static_cast<std::uint32_t>(14));
    ctx.set_gpr(31, 0x089AA638u);
    // nop
    goto L_089A9A7C;
L_089AA638:
    ctx.set_gpr(31, rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(12)));
    ctx.set_gpr(29, ctx.gpr[29] + static_cast<std::uint32_t>(16));
    jump_target = ctx.gpr[31];
    // nop
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_089AA648:
    ctx.set_gpr(29, ctx.gpr[29] + static_cast<std::uint32_t>(-16));
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(12), ctx.gpr[31]);
    ctx.set_gpr(6, 0u + static_cast<std::uint32_t>(15));
    ctx.set_gpr(31, 0x089AA65Cu);
    // nop
    goto L_089A9A7C;
L_089AA65C:
    ctx.set_gpr(31, rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(12)));
    ctx.set_gpr(29, ctx.gpr[29] + static_cast<std::uint32_t>(16));
    jump_target = ctx.gpr[31];
    // nop
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_089AA66C:
    ctx.set_gpr(29, ctx.gpr[29] + static_cast<std::uint32_t>(-16));
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(12), ctx.gpr[31]);
    ctx.set_gpr(6, 0u + static_cast<std::uint32_t>(16));
    ctx.set_gpr(31, 0x089AA680u);
    // nop
    goto L_089A9A7C;
L_089AA680:
    ctx.set_gpr(31, rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(12)));
    ctx.set_gpr(29, ctx.gpr[29] + static_cast<std::uint32_t>(16));
    jump_target = ctx.gpr[31];
    // nop
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_089AA690:
    ctx.set_gpr(12, rt.memory().aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(52)));
    ctx.set_gpr(11, rt.memory().aot_load32(ctx.gpr[5] + static_cast<std::uint32_t>(52)));
    ctx.set_gpr(6, rt.memory().aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(8)));
    ctx.set_gpr(3, rt.memory().aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(12)));
    ctx.set_gpr(10, 0u + 0u);
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_089AA728;
      }
      goto L_089AA6AC;
    }
L_089AA6AC:
    ctx.set_gpr(9, ctx.gpr[11] + 0u);
    ctx.set_gpr(8, ctx.gpr[12] + 0u);
    ctx.set_gpr(7, 0u + 0u);
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_089AA708;
      }
      goto L_089AA6C0;
    }
L_089AA6C0:
    ctx.set_gpr(15, rt.memory().aot_load32(ctx.gpr[8] + static_cast<std::uint32_t>(0)));
    ctx.set_gpr(13, 61440u << 16u);
    ctx.set_gpr(13, ctx.gpr[15] & ctx.gpr[13]);
    ctx.set_gpr(14, ctx.gpr[13] >> 16u);
    ctx.set_gpr(13, 240u << 16u);
    ctx.set_gpr(13, ctx.gpr[15] & ctx.gpr[13]);
    ctx.set_gpr(13, ctx.gpr[13] >> 12u);
    ctx.set_gpr(14, ctx.gpr[14] | ctx.gpr[13]);
    ctx.set_gpr(13, ctx.gpr[15] & 61440u);
    ctx.set_gpr(13, ctx.gpr[13] >> 8u);
    ctx.set_gpr(14, ctx.gpr[13] | ctx.gpr[14]);
    ctx.set_gpr(13, ctx.gpr[15] & 240u);
    ctx.set_gpr(13, ctx.gpr[13] >> 4u);
    ctx.set_gpr(13, ctx.gpr[13] | ctx.gpr[14]);
    rt.memory().aot_store16(ctx.gpr[9] + static_cast<std::uint32_t>(0), static_cast<std::uint16_t>(ctx.gpr[13]));
    ctx.set_gpr(7, ctx.gpr[7] + static_cast<std::uint32_t>(1));
    ctx.set_gpr(9, ctx.gpr[9] + static_cast<std::uint32_t>(2));
    ctx.set_gpr(8, ctx.gpr[8] + static_cast<std::uint32_t>(4));
    goto L_089AA708;
L_089AA708:
    ctx.set_gpr(13, static_cast<std::int32_t>(ctx.gpr[7]) < static_cast<std::int32_t>(ctx.gpr[6]) ? 1u : 0u);
    { const bool branch_taken = ctx.gpr[13] != 0u;
    // nop
      if (branch_taken) {
          goto L_089AA6C0;
      }
      goto L_089AA714;
    }
L_089AA714:
    ctx.set_gpr(10, ctx.gpr[10] + static_cast<std::uint32_t>(1));
    ctx.set_gpr(7, rt.memory().aot_load32(ctx.gpr[5] + static_cast<std::uint32_t>(76)));
    ctx.set_gpr(11, ctx.gpr[11] + ctx.gpr[7]);
    ctx.set_gpr(7, rt.memory().aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(76)));
    ctx.set_gpr(12, ctx.gpr[12] + ctx.gpr[7]);
    goto L_089AA728;
L_089AA728:
    ctx.set_gpr(7, static_cast<std::int32_t>(ctx.gpr[10]) < static_cast<std::int32_t>(ctx.gpr[3]) ? 1u : 0u);
    { const bool branch_taken = ctx.gpr[7] != 0u;
    // nop
      if (branch_taken) {
          goto L_089AA6AC;
      }
      goto L_089AA734;
    }
L_089AA734:
    jump_target = ctx.gpr[31];
    // nop
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_089AA73C:
    ctx.set_gpr(12, rt.memory().aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(52)));
    ctx.set_gpr(11, rt.memory().aot_load32(ctx.gpr[5] + static_cast<std::uint32_t>(52)));
    ctx.set_gpr(6, rt.memory().aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(8)));
    ctx.set_gpr(3, rt.memory().aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(12)));
    ctx.set_gpr(10, 0u + 0u);
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_089AA7D4;
      }
      goto L_089AA758;
    }
L_089AA758:
    ctx.set_gpr(9, ctx.gpr[11] + 0u);
    ctx.set_gpr(8, ctx.gpr[12] + 0u);
    ctx.set_gpr(7, 0u + 0u);
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_089AA7B4;
      }
      goto L_089AA76C;
    }
L_089AA76C:
    ctx.set_gpr(15, rt.memory().aot_load32(ctx.gpr[8] + static_cast<std::uint32_t>(0)));
    ctx.set_gpr(13, 32768u << 16u);
    ctx.set_gpr(13, ctx.gpr[15] & ctx.gpr[13]);
    ctx.set_gpr(14, ctx.gpr[13] >> 16u);
    ctx.set_gpr(13, 248u << 16u);
    ctx.set_gpr(13, ctx.gpr[15] & ctx.gpr[13]);
    ctx.set_gpr(13, ctx.gpr[13] >> 9u);
    ctx.set_gpr(14, ctx.gpr[14] | ctx.gpr[13]);
    ctx.set_gpr(13, ctx.gpr[15] & 63488u);
    ctx.set_gpr(13, ctx.gpr[13] >> 6u);
    ctx.set_gpr(14, ctx.gpr[13] | ctx.gpr[14]);
    ctx.set_gpr(13, ctx.gpr[15] & 248u);
    ctx.set_gpr(13, ctx.gpr[13] >> 3u);
    ctx.set_gpr(13, ctx.gpr[13] | ctx.gpr[14]);
    rt.memory().aot_store16(ctx.gpr[9] + static_cast<std::uint32_t>(0), static_cast<std::uint16_t>(ctx.gpr[13]));
    ctx.set_gpr(7, ctx.gpr[7] + static_cast<std::uint32_t>(1));
    ctx.set_gpr(9, ctx.gpr[9] + static_cast<std::uint32_t>(2));
    ctx.set_gpr(8, ctx.gpr[8] + static_cast<std::uint32_t>(4));
    goto L_089AA7B4;
L_089AA7B4:
    ctx.set_gpr(13, static_cast<std::int32_t>(ctx.gpr[7]) < static_cast<std::int32_t>(ctx.gpr[6]) ? 1u : 0u);
    { const bool branch_taken = ctx.gpr[13] != 0u;
    // nop
      if (branch_taken) {
          goto L_089AA76C;
      }
      goto L_089AA7C0;
    }
L_089AA7C0:
    ctx.set_gpr(10, ctx.gpr[10] + static_cast<std::uint32_t>(1));
    ctx.set_gpr(7, rt.memory().aot_load32(ctx.gpr[5] + static_cast<std::uint32_t>(76)));
    ctx.set_gpr(11, ctx.gpr[11] + ctx.gpr[7]);
    ctx.set_gpr(7, rt.memory().aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(76)));
    ctx.set_gpr(12, ctx.gpr[12] + ctx.gpr[7]);
    goto L_089AA7D4;
L_089AA7D4:
    ctx.set_gpr(7, static_cast<std::int32_t>(ctx.gpr[10]) < static_cast<std::int32_t>(ctx.gpr[3]) ? 1u : 0u);
    { const bool branch_taken = ctx.gpr[7] != 0u;
    // nop
      if (branch_taken) {
          goto L_089AA758;
      }
      goto L_089AA7E0;
    }
L_089AA7E0:
    jump_target = ctx.gpr[31];
    // nop
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_089AA7E8:
    ctx.set_gpr(14, rt.memory().aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(52)));
    ctx.set_gpr(13, rt.memory().aot_load32(ctx.gpr[5] + static_cast<std::uint32_t>(52)));
    ctx.set_gpr(8, rt.memory().aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(8)));
    ctx.set_gpr(7, rt.memory().aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(12)));
    ctx.set_gpr(12, 0u + 0u);
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_089AA868;
      }
      goto L_089AA804;
    }
L_089AA804:
    ctx.set_gpr(11, ctx.gpr[13] + 0u);
    ctx.set_gpr(10, ctx.gpr[14] + 0u);
    ctx.set_gpr(9, 0u + 0u);
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_089AA848;
      }
      goto L_089AA818;
    }
L_089AA818:
    ctx.set_gpr(6, rt.memory().aot_load32(ctx.gpr[10] + static_cast<std::uint32_t>(0)));
    rt.memory().aot_store8(ctx.gpr[11] + static_cast<std::uint32_t>(0), static_cast<std::uint8_t>(ctx.gpr[6]));
    ctx.set_gpr(3, ctx.gpr[6] & 65280u);
    ctx.set_gpr(3, ctx.gpr[3] >> 8u);
    rt.memory().aot_store8(ctx.gpr[11] + static_cast<std::uint32_t>(1), static_cast<std::uint8_t>(ctx.gpr[3]));
    ctx.set_gpr(3, 255u << 16u);
    ctx.set_gpr(3, ctx.gpr[6] & ctx.gpr[3]);
    ctx.set_gpr(3, ctx.gpr[3] >> 16u);
    rt.memory().aot_store8(ctx.gpr[11] + static_cast<std::uint32_t>(2), static_cast<std::uint8_t>(ctx.gpr[3]));
    ctx.set_gpr(9, ctx.gpr[9] + static_cast<std::uint32_t>(1));
    ctx.set_gpr(10, ctx.gpr[10] + static_cast<std::uint32_t>(4));
    ctx.set_gpr(11, ctx.gpr[11] + static_cast<std::uint32_t>(3));
    goto L_089AA848;
L_089AA848:
    ctx.set_gpr(3, static_cast<std::int32_t>(ctx.gpr[9]) < static_cast<std::int32_t>(ctx.gpr[8]) ? 1u : 0u);
    { const bool branch_taken = ctx.gpr[3] != 0u;
    // nop
      if (branch_taken) {
          goto L_089AA818;
      }
      goto L_089AA854;
    }
L_089AA854:
    ctx.set_gpr(12, ctx.gpr[12] + static_cast<std::uint32_t>(1));
    ctx.set_gpr(3, rt.memory().aot_load32(ctx.gpr[5] + static_cast<std::uint32_t>(76)));
    ctx.set_gpr(13, ctx.gpr[13] + ctx.gpr[3]);
    ctx.set_gpr(3, rt.memory().aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(76)));
    ctx.set_gpr(14, ctx.gpr[14] + ctx.gpr[3]);
    goto L_089AA868;
L_089AA868:
    ctx.set_gpr(3, static_cast<std::int32_t>(ctx.gpr[12]) < static_cast<std::int32_t>(ctx.gpr[7]) ? 1u : 0u);
    { const bool branch_taken = ctx.gpr[3] != 0u;
    // nop
      if (branch_taken) {
          goto L_089AA804;
      }
      goto L_089AA874;
    }
L_089AA874:
    jump_target = ctx.gpr[31];
    // nop
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_089AA87C:
    ctx.set_gpr(12, rt.memory().aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(52)));
    ctx.set_gpr(11, rt.memory().aot_load32(ctx.gpr[5] + static_cast<std::uint32_t>(52)));
    ctx.set_gpr(6, rt.memory().aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(8)));
    ctx.set_gpr(3, rt.memory().aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(12)));
    ctx.set_gpr(10, 0u + 0u);
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_089AA9E8;
      }
      goto L_089AA898;
    }
L_089AA898:
    ctx.set_gpr(9, ctx.gpr[11] + 0u);
    ctx.set_gpr(8, ctx.gpr[12] + 0u);
    ctx.set_gpr(7, 0u + 0u);
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_089AA9C8;
      }
      goto L_089AA8AC;
    }
L_089AA8AC:
    ctx.set_gpr(13, rt.memory().aot_load8(ctx.gpr[8] + static_cast<std::uint32_t>(0)));
    { const bool branch_taken = static_cast<std::int32_t>(ctx.gpr[13]) < 0;
    // nop
      if (branch_taken) {
          goto L_089AA8C8;
      }
      goto L_089AA8B8;
    }
L_089AA8B8:
    ctx.fpr[0] = std::bit_cast<float>(ctx.gpr[13]);
    ctx.fpr[1] = static_cast<float>(static_cast<std::int32_t>(ctx.fpr_bits(0)));
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_089AA8E0;
      }
      goto L_089AA8C8;
    }
L_089AA8C8:
    ctx.set_gpr(14, ctx.gpr[13] >> 1u);
    ctx.set_gpr(13, ctx.gpr[13] & 1u);
    ctx.set_gpr(14, ctx.gpr[14] | ctx.gpr[13]);
    ctx.fpr[0] = std::bit_cast<float>(ctx.gpr[14]);
    ctx.fpr[1] = static_cast<float>(static_cast<std::int32_t>(ctx.fpr_bits(0)));
    ctx.fpr[1] = ctx.fpr[1] + ctx.fpr[1];
    goto L_089AA8E0;
L_089AA8E0:
    ctx.set_gpr(13, 17279u << 16u);
    ctx.fpr[0] = std::bit_cast<float>(ctx.gpr[13]);
    ctx.fpr[0] = ctx.fpr[1] / ctx.fpr[0];
    rt.memory().aot_store32(ctx.gpr[9] + static_cast<std::uint32_t>(0), std::bit_cast<std::uint32_t>(ctx.fpr[0]));
    ctx.set_gpr(13, rt.memory().aot_load8(ctx.gpr[8] + static_cast<std::uint32_t>(1)));
    { const bool branch_taken = static_cast<std::int32_t>(ctx.gpr[13]) < 0;
    // nop
      if (branch_taken) {
          goto L_089AA90C;
      }
      goto L_089AA8FC;
    }
L_089AA8FC:
    ctx.fpr[0] = std::bit_cast<float>(ctx.gpr[13]);
    ctx.fpr[1] = static_cast<float>(static_cast<std::int32_t>(ctx.fpr_bits(0)));
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_089AA924;
      }
      goto L_089AA90C;
    }
L_089AA90C:
    ctx.set_gpr(14, ctx.gpr[13] >> 1u);
    ctx.set_gpr(13, ctx.gpr[13] & 1u);
    ctx.set_gpr(14, ctx.gpr[14] | ctx.gpr[13]);
    ctx.fpr[0] = std::bit_cast<float>(ctx.gpr[14]);
    ctx.fpr[1] = static_cast<float>(static_cast<std::int32_t>(ctx.fpr_bits(0)));
    ctx.fpr[1] = ctx.fpr[1] + ctx.fpr[1];
    goto L_089AA924;
L_089AA924:
    ctx.set_gpr(13, 17279u << 16u);
    ctx.fpr[0] = std::bit_cast<float>(ctx.gpr[13]);
    ctx.fpr[0] = ctx.fpr[1] / ctx.fpr[0];
    rt.memory().aot_store32(ctx.gpr[9] + static_cast<std::uint32_t>(4), std::bit_cast<std::uint32_t>(ctx.fpr[0]));
    ctx.set_gpr(13, rt.memory().aot_load8(ctx.gpr[8] + static_cast<std::uint32_t>(2)));
    { const bool branch_taken = static_cast<std::int32_t>(ctx.gpr[13]) < 0;
    // nop
      if (branch_taken) {
          goto L_089AA950;
      }
      goto L_089AA940;
    }
L_089AA940:
    ctx.fpr[0] = std::bit_cast<float>(ctx.gpr[13]);
    ctx.fpr[1] = static_cast<float>(static_cast<std::int32_t>(ctx.fpr_bits(0)));
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_089AA968;
      }
      goto L_089AA950;
    }
L_089AA950:
    ctx.set_gpr(14, ctx.gpr[13] >> 1u);
    ctx.set_gpr(13, ctx.gpr[13] & 1u);
    ctx.set_gpr(14, ctx.gpr[14] | ctx.gpr[13]);
    ctx.fpr[0] = std::bit_cast<float>(ctx.gpr[14]);
    ctx.fpr[1] = static_cast<float>(static_cast<std::int32_t>(ctx.fpr_bits(0)));
    ctx.fpr[1] = ctx.fpr[1] + ctx.fpr[1];
    goto L_089AA968;
L_089AA968:
    ctx.set_gpr(13, 17279u << 16u);
    ctx.fpr[0] = std::bit_cast<float>(ctx.gpr[13]);
    ctx.fpr[0] = ctx.fpr[1] / ctx.fpr[0];
    rt.memory().aot_store32(ctx.gpr[9] + static_cast<std::uint32_t>(8), std::bit_cast<std::uint32_t>(ctx.fpr[0]));
    ctx.set_gpr(13, rt.memory().aot_load8(ctx.gpr[8] + static_cast<std::uint32_t>(3)));
    { const bool branch_taken = static_cast<std::int32_t>(ctx.gpr[13]) < 0;
    // nop
      if (branch_taken) {
          goto L_089AA994;
      }
      goto L_089AA984;
    }
L_089AA984:
    ctx.fpr[0] = std::bit_cast<float>(ctx.gpr[13]);
    ctx.fpr[1] = static_cast<float>(static_cast<std::int32_t>(ctx.fpr_bits(0)));
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_089AA9AC;
      }
      goto L_089AA994;
    }
L_089AA994:
    ctx.set_gpr(14, ctx.gpr[13] >> 1u);
    ctx.set_gpr(13, ctx.gpr[13] & 1u);
    ctx.set_gpr(14, ctx.gpr[14] | ctx.gpr[13]);
    ctx.fpr[0] = std::bit_cast<float>(ctx.gpr[14]);
    ctx.fpr[1] = static_cast<float>(static_cast<std::int32_t>(ctx.fpr_bits(0)));
    ctx.fpr[1] = ctx.fpr[1] + ctx.fpr[1];
    goto L_089AA9AC;
L_089AA9AC:
    ctx.set_gpr(13, 17279u << 16u);
    ctx.fpr[0] = std::bit_cast<float>(ctx.gpr[13]);
    ctx.fpr[0] = ctx.fpr[1] / ctx.fpr[0];
    rt.memory().aot_store32(ctx.gpr[9] + static_cast<std::uint32_t>(12), std::bit_cast<std::uint32_t>(ctx.fpr[0]));
    ctx.set_gpr(7, ctx.gpr[7] + static_cast<std::uint32_t>(1));
    ctx.set_gpr(8, ctx.gpr[8] + static_cast<std::uint32_t>(4));
    ctx.set_gpr(9, ctx.gpr[9] + static_cast<std::uint32_t>(16));
    goto L_089AA9C8;
L_089AA9C8:
    ctx.set_gpr(13, static_cast<std::int32_t>(ctx.gpr[7]) < static_cast<std::int32_t>(ctx.gpr[6]) ? 1u : 0u);
    { const bool branch_taken = ctx.gpr[13] != 0u;
    // nop
      if (branch_taken) {
          goto L_089AA8AC;
      }
      goto L_089AA9D4;
    }
L_089AA9D4:
    ctx.set_gpr(10, ctx.gpr[10] + static_cast<std::uint32_t>(1));
    ctx.set_gpr(7, rt.memory().aot_load32(ctx.gpr[5] + static_cast<std::uint32_t>(76)));
    ctx.set_gpr(11, ctx.gpr[11] + ctx.gpr[7]);
    ctx.set_gpr(7, rt.memory().aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(76)));
    ctx.set_gpr(12, ctx.gpr[12] + ctx.gpr[7]);
    goto L_089AA9E8;
L_089AA9E8:
    ctx.set_gpr(7, static_cast<std::int32_t>(ctx.gpr[10]) < static_cast<std::int32_t>(ctx.gpr[3]) ? 1u : 0u);
    { const bool branch_taken = ctx.gpr[7] != 0u;
    // nop
      if (branch_taken) {
          goto L_089AA898;
      }
      goto L_089AA9F4;
    }
L_089AA9F4:
    jump_target = ctx.gpr[31];
    // nop
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_089AA9FC:
    ctx.set_gpr(13, rt.memory().aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(52)));
    ctx.set_gpr(12, rt.memory().aot_load32(ctx.gpr[5] + static_cast<std::uint32_t>(52)));
    ctx.set_gpr(7, rt.memory().aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(8)));
    ctx.set_gpr(6, rt.memory().aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(12)));
    ctx.set_gpr(11, 0u + 0u);
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_089AAA60;
      }
      goto L_089AAA18;
    }
L_089AAA18:
    ctx.set_gpr(10, ctx.gpr[12] + 0u);
    ctx.set_gpr(9, ctx.gpr[13] + 0u);
    ctx.set_gpr(8, 0u + 0u);
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_089AAA40;
      }
      goto L_089AAA2C;
    }
L_089AAA2C:
    ctx.set_gpr(3, rt.memory().aot_load8(ctx.gpr[9] + static_cast<std::uint32_t>(0)));
    rt.memory().aot_store8(ctx.gpr[10] + static_cast<std::uint32_t>(0), static_cast<std::uint8_t>(ctx.gpr[3]));
    ctx.set_gpr(8, ctx.gpr[8] + static_cast<std::uint32_t>(1));
    ctx.set_gpr(9, ctx.gpr[9] + static_cast<std::uint32_t>(4));
    ctx.set_gpr(10, ctx.gpr[10] + static_cast<std::uint32_t>(1));
    goto L_089AAA40;
L_089AAA40:
    ctx.set_gpr(3, static_cast<std::int32_t>(ctx.gpr[8]) < static_cast<std::int32_t>(ctx.gpr[7]) ? 1u : 0u);
    { const bool branch_taken = ctx.gpr[3] != 0u;
    // nop
      if (branch_taken) {
          goto L_089AAA2C;
      }
      goto L_089AAA4C;
    }
L_089AAA4C:
    ctx.set_gpr(11, ctx.gpr[11] + static_cast<std::uint32_t>(1));
    ctx.set_gpr(3, rt.memory().aot_load32(ctx.gpr[5] + static_cast<std::uint32_t>(76)));
    ctx.set_gpr(12, ctx.gpr[12] + ctx.gpr[3]);
    ctx.set_gpr(3, rt.memory().aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(76)));
    ctx.set_gpr(13, ctx.gpr[13] + ctx.gpr[3]);
    goto L_089AAA60;
L_089AAA60:
    ctx.set_gpr(3, static_cast<std::int32_t>(ctx.gpr[11]) < static_cast<std::int32_t>(ctx.gpr[6]) ? 1u : 0u);
    { const bool branch_taken = ctx.gpr[3] != 0u;
    // nop
      if (branch_taken) {
          goto L_089AAA18;
      }
      goto L_089AAA6C;
    }
L_089AAA6C:
    jump_target = ctx.gpr[31];
    // nop
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_089AAA74:
    ctx.set_gpr(29, ctx.gpr[29] + static_cast<std::uint32_t>(-16));
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(12), ctx.gpr[31]);
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(8), ctx.gpr[18]);
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(4), ctx.gpr[17]);
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(0), ctx.gpr[16]);
    ctx.set_gpr(17, ctx.gpr[5] + 0u);
    ctx.set_gpr(3, rt.memory().aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(8)));
    ctx.set_gpr(2, rt.memory().aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(12)));
    { const std::int64_t product = static_cast<std::int64_t>(static_cast<std::int32_t>(ctx.gpr[3])) * static_cast<std::int64_t>(static_cast<std::int32_t>(ctx.gpr[2])); ctx.lo = static_cast<std::uint32_t>(product); ctx.hi = static_cast<std::uint32_t>(static_cast<std::uint64_t>(product) >> 32u); }
    ctx.set_gpr(16, ctx.lo);
    ctx.set_gpr(5, rt.memory().aot_load32(ctx.gpr[5] + static_cast<std::uint32_t>(52)));
    ctx.set_gpr(3, rt.memory().aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(52)));
    ctx.set_gpr(2, 0u + 0u);
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_089AAB6C;
      }
      goto L_089AAAB0;
    }
L_089AAAB0:
    ctx.set_gpr(4, rt.memory().aot_load32(ctx.gpr[3] + static_cast<std::uint32_t>(0)));
    ctx.set_gpr(10, (ctx.gpr[4] >> 24u) & 0x000000FFu);
    ctx.set_gpr(9, (ctx.gpr[4] >> 16u) & 0x000000FFu);
    ctx.set_gpr(8, (ctx.gpr[4] >> 8u) & 0x000000FFu);
    ctx.set_gpr(7, ctx.gpr[4] & 255u);
    ctx.set_gpr(4, ctx.gpr[10] < static_cast<std::uint32_t>(224) ? 1u : 0u);
    { const bool branch_taken = ctx.gpr[4] != 0u;
    // nop
      if (branch_taken) {
          goto L_089AAB10;
      }
      goto L_089AAAD0;
    }
L_089AAAD0:
    ctx.set_gpr(6, ctx.gpr[9] >> 3u);
    ctx.set_gpr(4, (ctx.gpr[9] >> 7u) & 0x00000001u);
    ctx.set_gpr(9, ctx.gpr[6] | ctx.gpr[4]);
    ctx.set_gpr(6, ctx.gpr[8] >> 3u);
    ctx.set_gpr(4, (ctx.gpr[8] >> 7u) & 0x00000001u);
    ctx.set_gpr(8, ctx.gpr[6] | ctx.gpr[4]);
    ctx.set_gpr(6, ctx.gpr[7] >> 3u);
    ctx.set_gpr(4, (ctx.gpr[7] >> 7u) & 0x00000001u);
    ctx.set_gpr(7, ctx.gpr[6] | ctx.gpr[4]);
    ctx.set_gpr(4, ctx.gpr[9] << 10u);
    ctx.set_gpr(6, ctx.gpr[4] | 32768u);
    ctx.set_gpr(4, ctx.gpr[8] << 5u);
    ctx.set_gpr(4, ctx.gpr[6] | ctx.gpr[4]);
    ctx.set_gpr(4, ctx.gpr[7] | ctx.gpr[4]);
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_089AAB5C;
      }
      goto L_089AAB10;
    }
L_089AAB10:
    ctx.set_gpr(6, ctx.gpr[10] >> 5u);
    ctx.set_gpr(4, (ctx.gpr[10] >> 7u) & 0x00000001u);
    ctx.set_gpr(10, ctx.gpr[6] | ctx.gpr[4]);
    ctx.set_gpr(6, ctx.gpr[9] >> 4u);
    ctx.set_gpr(4, (ctx.gpr[9] >> 7u) & 0x00000001u);
    ctx.set_gpr(9, ctx.gpr[6] | ctx.gpr[4]);
    ctx.set_gpr(6, ctx.gpr[8] >> 4u);
    ctx.set_gpr(4, (ctx.gpr[8] >> 7u) & 0x00000001u);
    ctx.set_gpr(8, ctx.gpr[6] | ctx.gpr[4]);
    ctx.set_gpr(6, ctx.gpr[7] >> 4u);
    ctx.set_gpr(4, (ctx.gpr[7] >> 7u) & 0x00000001u);
    ctx.set_gpr(7, ctx.gpr[6] | ctx.gpr[4]);
    ctx.set_gpr(4, ctx.gpr[10] & 7u);
    ctx.set_gpr(6, ctx.gpr[4] << 12u);
    ctx.set_gpr(4, ctx.gpr[9] << 8u);
    ctx.set_gpr(6, ctx.gpr[6] | ctx.gpr[4]);
    ctx.set_gpr(4, ctx.gpr[8] << 4u);
    ctx.set_gpr(4, ctx.gpr[4] | ctx.gpr[6]);
    ctx.set_gpr(4, ctx.gpr[7] | ctx.gpr[4]);
    goto L_089AAB5C;
L_089AAB5C:
    rt.memory().aot_store16(ctx.gpr[5] + static_cast<std::uint32_t>(0), static_cast<std::uint16_t>(ctx.gpr[4]));
    ctx.set_gpr(2, ctx.gpr[2] + static_cast<std::uint32_t>(1));
    ctx.set_gpr(5, ctx.gpr[5] + static_cast<std::uint32_t>(2));
    ctx.set_gpr(3, ctx.gpr[3] + static_cast<std::uint32_t>(4));
    goto L_089AAB6C;
L_089AAB6C:
    ctx.set_gpr(4, static_cast<std::int32_t>(ctx.gpr[2]) < static_cast<std::int32_t>(ctx.gpr[16]) ? 1u : 0u);
    { const bool branch_taken = ctx.gpr[4] != 0u;
    // nop
      if (branch_taken) {
          goto L_089AAAB0;
      }
      goto L_089AAB78;
    }
L_089AAB78:
    ctx.set_gpr(31, 0x089AAB80u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0078_entry, 78u, 225u, 0x0893CE6Cu>(ctx, &aot_mem) && ctx.pc == 0x089AAB80u) goto L_089AAB80;
    return;
L_089AAB80:
    ctx.set_gpr(4, rt.memory().aot_load32(ctx.gpr[2] + static_cast<std::uint32_t>(0)));
    ctx.set_gpr(31, 0x089AAB8Cu);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0078_entry, 78u, 199u, 0x0893CC68u>(ctx, &aot_mem) && ctx.pc == 0x089AAB8Cu) goto L_089AAB8C;
    return;
L_089AAB8C:
    ctx.set_gpr(4, ctx.gpr[2] + 0u);
    ctx.set_gpr(16, ctx.gpr[16] << 1u);
    ctx.set_gpr(5, ctx.gpr[16] + 0u);
    ctx.set_gpr(25, rt.memory().aot_load32(ctx.gpr[2] + static_cast<std::uint32_t>(0)));
    ctx.set_gpr(25, rt.memory().aot_load32(ctx.gpr[25] + static_cast<std::uint32_t>(92)));
    jump_target = ctx.gpr[25];
    ctx.set_gpr(31, 0x089AABA8u);
    // nop
    ctx.pc = jump_target;
    if (rt.invoke_chained_call(ctx, &aot_mem) && ctx.pc == 0x089AABA8u) goto L_089AABA8;
    return;
L_089AABA8:
    ctx.set_gpr(18, ctx.gpr[2] + 0u);
    ctx.set_gpr(4, ctx.gpr[17] + 0u);
    ctx.set_gpr(5, ctx.gpr[18] + 0u);
    ctx.set_gpr(31, 0x089AABBCu);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0104_entry, 104u, 323u, 0x089A5550u>(ctx, &aot_mem) && ctx.pc == 0x089AABBCu) goto L_089AABBC;
    return;
L_089AABBC:
    ctx.set_gpr(4, rt.memory().aot_load32(ctx.gpr[17] + static_cast<std::uint32_t>(52)));
    ctx.set_gpr(5, ctx.gpr[18] + 0u);
    ctx.set_gpr(6, ctx.gpr[16] + 0u);
    ctx.set_gpr(31, 0x089AABD0u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0003_entry, 3u, 662u, 0x08812B08u>(ctx, &aot_mem) && ctx.pc == 0x089AABD0u) goto L_089AABD0;
    return;
L_089AABD0:
    ctx.set_gpr(31, 0x089AABD8u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0078_entry, 78u, 225u, 0x0893CE6Cu>(ctx, &aot_mem) && ctx.pc == 0x089AABD8u) goto L_089AABD8;
    return;
L_089AABD8:
    ctx.set_gpr(4, rt.memory().aot_load32(ctx.gpr[2] + static_cast<std::uint32_t>(0)));
    ctx.set_gpr(31, 0x089AABE4u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0078_entry, 78u, 199u, 0x0893CC68u>(ctx, &aot_mem) && ctx.pc == 0x089AABE4u) goto L_089AABE4;
    return;
L_089AABE4:
    ctx.set_gpr(4, ctx.gpr[2] + 0u);
    ctx.set_gpr(5, ctx.gpr[18] + 0u);
    ctx.set_gpr(25, rt.memory().aot_load32(ctx.gpr[2] + static_cast<std::uint32_t>(0)));
    ctx.set_gpr(25, rt.memory().aot_load32(ctx.gpr[25] + static_cast<std::uint32_t>(144)));
    jump_target = ctx.gpr[25];
    ctx.set_gpr(31, 0x089AABFCu);
    // nop
    ctx.pc = jump_target;
    if (rt.invoke_chained_call(ctx, &aot_mem) && ctx.pc == 0x089AABFCu) goto L_089AABFC;
    return;
L_089AABFC:
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
L_089AAC18:
    ctx.set_gpr(29, ctx.gpr[29] + static_cast<std::uint32_t>(-16));
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(12), ctx.gpr[31]);
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(8), ctx.gpr[16]);
    ctx.set_gpr(16, ctx.gpr[4] + 0u);
    ctx.set_gpr(5, 0u + static_cast<std::uint32_t>(7));
    ctx.set_gpr(6, 2203u << 16u);
    ctx.set_gpr(6, ctx.gpr[6] + static_cast<std::uint32_t>(-21108));
    ctx.set_gpr(31, 0x089AAC3Cu);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0104_entry, 104u, 513u, 0x089A6434u>(ctx, &aot_mem) && ctx.pc == 0x089AAC3Cu) goto L_089AAC3C;
    return;
L_089AAC3C:
    ctx.set_gpr(4, ctx.gpr[16] + 0u);
    ctx.set_gpr(5, 0u + 0u);
    ctx.set_gpr(6, 2203u << 16u);
    ctx.set_gpr(6, ctx.gpr[6] + static_cast<std::uint32_t>(-17804));
    ctx.set_gpr(31, 0x089AAC54u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0104_entry, 104u, 513u, 0x089A6434u>(ctx, &aot_mem) && ctx.pc == 0x089AAC54u) goto L_089AAC54;
    return;
L_089AAC54:
    ctx.set_gpr(4, ctx.gpr[16] + 0u);
    ctx.set_gpr(5, 0u + static_cast<std::uint32_t>(42));
    ctx.set_gpr(6, 2203u << 16u);
    ctx.set_gpr(6, ctx.gpr[6] + static_cast<std::uint32_t>(-17144));
    ctx.set_gpr(31, 0x089AAC6Cu);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0104_entry, 104u, 513u, 0x089A6434u>(ctx, &aot_mem) && ctx.pc == 0x089AAC6Cu) goto L_089AAC6C;
    return;
L_089AAC6C:
    ctx.set_gpr(4, ctx.gpr[16] + 0u);
    ctx.set_gpr(5, 0u + static_cast<std::uint32_t>(45));
    ctx.set_gpr(6, 2203u << 16u);
    ctx.set_gpr(6, ctx.gpr[6] + static_cast<std::uint32_t>(-17864));
    ctx.set_gpr(31, 0x089AAC84u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0104_entry, 104u, 513u, 0x089A6434u>(ctx, &aot_mem) && ctx.pc == 0x089AAC84u) goto L_089AAC84;
    return;
L_089AAC84:
    ctx.set_gpr(4, ctx.gpr[16] + 0u);
    ctx.set_gpr(2, 1u << 16u);
    ctx.set_gpr(5, ctx.gpr[2] | 1u);
    ctx.set_gpr(6, 2203u << 16u);
    ctx.set_gpr(6, ctx.gpr[6] + static_cast<std::uint32_t>(-17008));
    ctx.set_gpr(31, 0x089AACA0u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0104_entry, 104u, 513u, 0x089A6434u>(ctx, &aot_mem) && ctx.pc == 0x089AACA0u) goto L_089AACA0;
    return;
L_089AACA0:
    ctx.set_gpr(4, ctx.gpr[16] + 0u);
    ctx.set_gpr(5, 0u + static_cast<std::uint32_t>(102));
    ctx.set_gpr(6, 2203u << 16u);
    ctx.set_gpr(6, ctx.gpr[6] + static_cast<std::uint32_t>(-21192));
    ctx.set_gpr(31, 0x089AACB8u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0104_entry, 104u, 594u, 0x089A6A24u>(ctx, &aot_mem) && ctx.pc == 0x089AACB8u) goto L_089AACB8;
    return;
L_089AACB8:
    ctx.set_gpr(31, rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(12)));
    ctx.set_gpr(16, rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(8)));
    ctx.set_gpr(29, ctx.gpr[29] + static_cast<std::uint32_t>(16));
    jump_target = ctx.gpr[31];
    // nop
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_089AACCC:
    ctx.set_gpr(2, 1u << 16u);
    jump_target = ctx.gpr[31];
    // nop
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_089AACD8:
    ctx.set_gpr(29, ctx.gpr[29] + static_cast<std::uint32_t>(-16));
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(12), ctx.gpr[31]);
    ctx.set_gpr(6, ctx.gpr[5] + 0u);
    ctx.set_gpr(5, rt.memory().aot_load32(ctx.gpr[5] + static_cast<std::uint32_t>(8)));
    ctx.set_gpr(4, 0u + static_cast<std::uint32_t>(1));
    ctx.set_gpr(31, 0x089AACF4u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0104_entry, 104u, 418u, 0x089A5D7Cu>(ctx, &aot_mem) && ctx.pc == 0x089AACF4u) goto L_089AACF4;
    return;
L_089AACF4:
    ctx.set_gpr(31, rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(12)));
    ctx.set_gpr(29, ctx.gpr[29] + static_cast<std::uint32_t>(16));
    jump_target = ctx.gpr[31];
    // nop
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_089AAD04:
    rt.memory().aot_store32(ctx.gpr[5] + static_cast<std::uint32_t>(64), 0u);
    ctx.set_gpr(3, 0u + static_cast<std::uint32_t>(8));
    rt.memory().aot_store32(ctx.gpr[5] + static_cast<std::uint32_t>(72), ctx.gpr[3]);
    rt.memory().aot_store32(ctx.gpr[5] + static_cast<std::uint32_t>(28), 0u);
    rt.memory().aot_store32(ctx.gpr[5] + static_cast<std::uint32_t>(32), 0u);
    rt.memory().aot_store32(ctx.gpr[5] + static_cast<std::uint32_t>(36), 0u);
    rt.memory().aot_store32(ctx.gpr[5] + static_cast<std::uint32_t>(40), 0u);
    rt.memory().aot_store32(ctx.gpr[5] + static_cast<std::uint32_t>(84), 0u);
    jump_target = ctx.gpr[31];
    // nop
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_089AAD2C:
    ctx.set_gpr(2, 0u + static_cast<std::uint32_t>(1));
    jump_target = ctx.gpr[31];
    // nop
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_089AAD38:
    ctx.set_gpr(29, ctx.gpr[29] + static_cast<std::uint32_t>(-16));
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(12), ctx.gpr[31]);
    ctx.set_gpr(5, rt.memory().aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(68)));
    { const bool branch_taken = ctx.gpr[5] == 0u;
    // nop
      if (branch_taken) {
          goto L_089AAD7C;
      }
      goto L_089AAD4C;
    }
L_089AAD4C:
    ctx.set_gpr(3, rt.memory().aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(24)));
    ctx.set_gpr(2, 0u + static_cast<std::uint32_t>(100));
    { const bool branch_taken = ctx.gpr[3] != ctx.gpr[2];
    // nop
      if (branch_taken) {
          goto L_089AAD70;
      }
      goto L_089AAD5C;
    }
L_089AAD5C:
    ctx.set_gpr(4, ctx.gpr[5] + 0u);
    ctx.set_gpr(31, 0x089AAD68u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0102_entry, 102u, 586u, 0x0899F154u>(ctx, &aot_mem) && ctx.pc == 0x089AAD68u) goto L_089AAD68;
    return;
L_089AAD68:
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_089AAD7C;
      }
      goto L_089AAD70;
    }
L_089AAD70:
    ctx.set_gpr(4, ctx.gpr[5] + 0u);
    ctx.set_gpr(31, 0x089AAD7Cu);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0102_entry, 102u, 542u, 0x0899EEB0u>(ctx, &aot_mem) && ctx.pc == 0x089AAD7Cu) goto L_089AAD7C;
    return;
L_089AAD7C:
    ctx.set_gpr(31, rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(12)));
    ctx.set_gpr(29, ctx.gpr[29] + static_cast<std::uint32_t>(16));
    jump_target = ctx.gpr[31];
    // nop
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_089AAD8C:
    ctx.set_gpr(8, rt.memory().aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(52)));
    ctx.set_gpr(7, rt.memory().aot_load32(ctx.gpr[5] + static_cast<std::uint32_t>(52)));
    ctx.set_gpr(13, rt.memory().aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(8)));
    ctx.set_gpr(12, rt.memory().aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(12)));
    ctx.set_gpr(3, rt.memory().aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(68)));
    ctx.set_gpr(11, rt.memory().aot_load32(ctx.gpr[3] + static_cast<std::uint32_t>(20)));
    ctx.set_gpr(6, rt.memory().aot_load32(ctx.gpr[3] + static_cast<std::uint32_t>(12)));
    ctx.set_gpr(3, 0u + 0u);
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_089AAE24;
      }
      goto L_089AADB4;
    }
L_089AADB4:
    ctx.set_gpr(9, ctx.gpr[13] << 2u);
    ctx.set_gpr(9, ctx.gpr[7] + ctx.gpr[9]);
    ctx.set_gpr(24, ctx.gpr[9] + static_cast<std::uint32_t>(-4));
    ctx.set_gpr(9, ctx.gpr[8] + ctx.gpr[13]);
    ctx.set_gpr(15, ctx.gpr[9] + static_cast<std::uint32_t>(-1));
    ctx.set_gpr(14, 0u + 0u);
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_089AAE04;
      }
      goto L_089AADD4;
    }
L_089AADD4:
    ctx.set_gpr(10, rt.memory().aot_load8(ctx.gpr[15] + static_cast<std::uint32_t>(0)));
    ctx.set_gpr(9, static_cast<std::int32_t>(ctx.gpr[10]) < static_cast<std::int32_t>(ctx.gpr[6]) ? 1u : 0u);
    { const bool branch_taken = ctx.gpr[9] != 0u;
    // nop
      if (branch_taken) {
          goto L_089AADE8;
      }
      goto L_089AADE4;
    }
L_089AADE4:
    ctx.set_gpr(10, ctx.gpr[6] + 0u);
    goto L_089AADE8;
L_089AADE8:
    ctx.set_gpr(9, ctx.gpr[10] << 2u);
    ctx.set_gpr(9, ctx.gpr[11] + ctx.gpr[9]);
    ctx.set_gpr(9, rt.memory().aot_load32(ctx.gpr[9] + static_cast<std::uint32_t>(0)));
    rt.memory().aot_store32(ctx.gpr[24] + static_cast<std::uint32_t>(0), ctx.gpr[9]);
    ctx.set_gpr(14, ctx.gpr[14] + static_cast<std::uint32_t>(1));
    ctx.set_gpr(24, ctx.gpr[24] + static_cast<std::uint32_t>(-4));
    ctx.set_gpr(15, ctx.gpr[15] + static_cast<std::uint32_t>(-1));
    goto L_089AAE04;
L_089AAE04:
    ctx.set_gpr(9, static_cast<std::int32_t>(ctx.gpr[14]) < static_cast<std::int32_t>(ctx.gpr[13]) ? 1u : 0u);
    { const bool branch_taken = ctx.gpr[9] != 0u;
    // nop
      if (branch_taken) {
          goto L_089AADD4;
      }
      goto L_089AAE10;
    }
L_089AAE10:
    ctx.set_gpr(3, ctx.gpr[3] + static_cast<std::uint32_t>(1));
    ctx.set_gpr(9, rt.memory().aot_load32(ctx.gpr[5] + static_cast<std::uint32_t>(76)));
    ctx.set_gpr(7, ctx.gpr[7] + ctx.gpr[9]);
    ctx.set_gpr(9, rt.memory().aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(76)));
    ctx.set_gpr(8, ctx.gpr[8] + ctx.gpr[9]);
    goto L_089AAE24;
L_089AAE24:
    ctx.set_gpr(9, static_cast<std::int32_t>(ctx.gpr[3]) < static_cast<std::int32_t>(ctx.gpr[12]) ? 1u : 0u);
    { const bool branch_taken = ctx.gpr[9] != 0u;
    // nop
      if (branch_taken) {
          goto L_089AADB4;
      }
      goto L_089AAE30;
    }
L_089AAE30:
    jump_target = ctx.gpr[31];
    // nop
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_089AAE38:
    ctx.set_gpr(2, 0u + 0u);
    ctx.set_gpr(6, 0u + 0u);
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_089AAF1C;
      }
      goto L_089AAE48;
    }
L_089AAE48:
    ctx.set_gpr(3, ctx.gpr[6] & 1u);
    ctx.set_gpr(3, ctx.gpr[3] << 7u);
    ctx.set_gpr(8, 0u + 0u);
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_089AAF08;
      }
      goto L_089AAE5C;
    }
L_089AAE5C:
    ctx.set_gpr(7, 0u + 0u);
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_089AAEF8;
      }
      goto L_089AAE68;
    }
L_089AAE68:
    ctx.set_gpr(9, ctx.gpr[3] << 2u);
    ctx.set_gpr(14, 2229u << 16u);
    ctx.set_gpr(14, ctx.gpr[14] + static_cast<std::uint32_t>(-16292));
    ctx.set_gpr(9, ctx.gpr[14] + ctx.gpr[9]);
    ctx.set_gpr(9, rt.memory().aot_load32(ctx.gpr[9] + static_cast<std::uint32_t>(0)));
    ctx.set_gpr(12, ctx.gpr[9] >> 1u);
    ctx.set_gpr(9, ctx.gpr[9] & 1u);
    ctx.set_gpr(11, ctx.gpr[9] << 2u);
    ctx.set_gpr(13, 0u + static_cast<std::uint32_t>(15));
    ctx.set_gpr(10, ctx.gpr[13] << (ctx.gpr[11] & 31u));
    ctx.set_gpr(9, ctx.gpr[4] + ctx.gpr[12]);
    ctx.set_gpr(9, rt.memory().aot_load8(ctx.gpr[9] + static_cast<std::uint32_t>(0)));
    ctx.set_gpr(9, ctx.gpr[10] & ctx.gpr[9]);
    ctx.set_gpr(9, static_cast<std::uint32_t>(static_cast<std::int32_t>(ctx.gpr[9]) >> (ctx.gpr[11] & 31u)));
    ctx.set_gpr(12, ctx.gpr[9] & 255u);
    ctx.set_gpr(9, ctx.gpr[3] + static_cast<std::uint32_t>(1));
    ctx.set_gpr(9, ctx.gpr[9] << 2u);
    ctx.set_gpr(9, ctx.gpr[14] + ctx.gpr[9]);
    ctx.set_gpr(10, rt.memory().aot_load32(ctx.gpr[9] + static_cast<std::uint32_t>(0)));
    ctx.set_gpr(3, ctx.gpr[3] + static_cast<std::uint32_t>(2));
    ctx.set_gpr(9, ctx.gpr[10] & 1u);
    ctx.set_gpr(11, ctx.gpr[9] << 2u);
    ctx.set_gpr(9, ctx.gpr[10] >> 1u);
    ctx.set_gpr(9, ctx.gpr[4] + ctx.gpr[9]);
    ctx.set_gpr(10, rt.memory().aot_load8(ctx.gpr[9] + static_cast<std::uint32_t>(0)));
    ctx.set_gpr(9, ctx.gpr[13] << (ctx.gpr[11] & 31u));
    ctx.set_gpr(9, ctx.gpr[9] & ctx.gpr[10]);
    ctx.set_gpr(9, static_cast<std::uint32_t>(static_cast<std::int32_t>(ctx.gpr[9]) >> (ctx.gpr[11] & 31u)));
    ctx.set_gpr(9, ctx.gpr[9] & 255u);
    ctx.set_gpr(9, ctx.gpr[9] << 4u);
    ctx.set_gpr(9, ctx.gpr[9] & 240u);
    ctx.set_gpr(10, ctx.gpr[12] | ctx.gpr[9]);
    ctx.set_gpr(9, ctx.gpr[5] + ctx.gpr[2]);
    rt.memory().aot_store8(ctx.gpr[9] + static_cast<std::uint32_t>(0), static_cast<std::uint8_t>(ctx.gpr[10]));
    ctx.set_gpr(2, ctx.gpr[2] + static_cast<std::uint32_t>(1));
    ctx.set_gpr(7, ctx.gpr[7] + static_cast<std::uint32_t>(1));
    goto L_089AAEF8;
L_089AAEF8:
    ctx.set_gpr(9, ctx.gpr[7] < static_cast<std::uint32_t>(4) ? 1u : 0u);
    { const bool branch_taken = ctx.gpr[9] != 0u;
    // nop
      if (branch_taken) {
          goto L_089AAE68;
      }
      goto L_089AAF04;
    }
L_089AAF04:
    ctx.set_gpr(8, ctx.gpr[8] + static_cast<std::uint32_t>(1));
    goto L_089AAF08;
L_089AAF08:
    ctx.set_gpr(7, ctx.gpr[8] < static_cast<std::uint32_t>(16) ? 1u : 0u);
    { const bool branch_taken = ctx.gpr[7] != 0u;
    // nop
      if (branch_taken) {
          goto L_089AAE5C;
      }
      goto L_089AAF14;
    }
L_089AAF14:
    ctx.set_gpr(4, ctx.gpr[4] + static_cast<std::uint32_t>(64));
    ctx.set_gpr(6, ctx.gpr[6] + static_cast<std::uint32_t>(1));
    goto L_089AAF1C;
L_089AAF1C:
    ctx.set_gpr(3, ctx.gpr[6] < static_cast<std::uint32_t>(4) ? 1u : 0u);
    { const bool branch_taken = ctx.gpr[3] != 0u;
    // nop
      if (branch_taken) {
          goto L_089AAE48;
      }
      goto L_089AAF28;
    }
L_089AAF28:
    ctx.set_gpr(2, 0u + 0u);
    jump_target = ctx.gpr[31];
    // nop
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_089AAF34:
    ctx.set_gpr(6, 0u + 0u);
    ctx.set_gpr(8, 0u + 0u);
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_089AAFB8;
      }
      goto L_089AAF44;
    }
L_089AAF44:
    ctx.set_gpr(2, ctx.gpr[8] & 1u);
    ctx.set_gpr(7, ctx.gpr[2] << 6u);
    ctx.set_gpr(10, 0u + 0u);
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_089AAFA4;
      }
      goto L_089AAF58;
    }
L_089AAF58:
    ctx.set_gpr(9, 0u + 0u);
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_089AAF94;
      }
      goto L_089AAF64;
    }
L_089AAF64:
    ctx.set_gpr(3, ctx.gpr[7] << 2u);
    ctx.set_gpr(2, 2229u << 16u);
    ctx.set_gpr(2, ctx.gpr[2] + static_cast<std::uint32_t>(-15268));
    ctx.set_gpr(2, ctx.gpr[2] + ctx.gpr[3]);
    ctx.set_gpr(2, rt.memory().aot_load32(ctx.gpr[2] + static_cast<std::uint32_t>(0)));
    ctx.set_gpr(7, ctx.gpr[7] + static_cast<std::uint32_t>(1));
    ctx.set_gpr(2, ctx.gpr[4] + ctx.gpr[2]);
    ctx.set_gpr(3, rt.memory().aot_load8(ctx.gpr[2] + static_cast<std::uint32_t>(0)));
    ctx.set_gpr(2, ctx.gpr[5] + ctx.gpr[6]);
    rt.memory().aot_store8(ctx.gpr[2] + static_cast<std::uint32_t>(0), static_cast<std::uint8_t>(ctx.gpr[3]));
    ctx.set_gpr(6, ctx.gpr[6] + static_cast<std::uint32_t>(1));
    ctx.set_gpr(9, ctx.gpr[9] + static_cast<std::uint32_t>(1));
    goto L_089AAF94;
L_089AAF94:
    ctx.set_gpr(2, ctx.gpr[9] < static_cast<std::uint32_t>(4) ? 1u : 0u);
    { const bool branch_taken = ctx.gpr[2] != 0u;
    // nop
      if (branch_taken) {
          goto L_089AAF64;
      }
      goto L_089AAFA0;
    }
L_089AAFA0:
    ctx.set_gpr(10, ctx.gpr[10] + static_cast<std::uint32_t>(1));
    goto L_089AAFA4;
L_089AAFA4:
    ctx.set_gpr(2, ctx.gpr[10] < static_cast<std::uint32_t>(16) ? 1u : 0u);
    { const bool branch_taken = ctx.gpr[2] != 0u;
    // nop
      if (branch_taken) {
          goto L_089AAF58;
      }
      goto L_089AAFB0;
    }
L_089AAFB0:
    ctx.set_gpr(4, ctx.gpr[4] + static_cast<std::uint32_t>(64));
    ctx.set_gpr(8, ctx.gpr[8] + static_cast<std::uint32_t>(1));
    goto L_089AAFB8;
L_089AAFB8:
    ctx.set_gpr(2, ctx.gpr[8] < static_cast<std::uint32_t>(4) ? 1u : 0u);
    { const bool branch_taken = ctx.gpr[2] != 0u;
    // nop
      if (branch_taken) {
          goto L_089AAF44;
      }
      goto L_089AAFC4;
    }
L_089AAFC4:
    ctx.set_gpr(2, 0u + 0u);
    jump_target = ctx.gpr[31];
    // nop
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_089AAFD0:
    ctx.set_gpr(29, ctx.gpr[29] + static_cast<std::uint32_t>(-832));
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
    ctx.set_gpr(30, ctx.gpr[6] + 0u);
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(60), ctx.gpr[7]);
    ctx.set_gpr(6, 0u + 0u);
    ctx.set_gpr(19, 0u + 0u);
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_089AB05C;
      }
      goto L_089AB014;
    }
L_089AB014:
    ctx.set_gpr(18, 0u + 0u);
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_089AB04C;
      }
      goto L_089AB020;
    }
L_089AB020:
    ctx.set_gpr(3, ctx.gpr[6] << 2u);
    ctx.set_gpr(2, 2229u << 16u);
    ctx.set_gpr(2, ctx.gpr[2] + static_cast<std::uint32_t>(-14628));
    ctx.set_gpr(2, ctx.gpr[2] + ctx.gpr[3]);
    ctx.set_gpr(2, rt.memory().aot_load32(ctx.gpr[2] + static_cast<std::uint32_t>(0)));
    ctx.set_gpr(2, ctx.gpr[2] << 2u);
    ctx.set_gpr(2, ctx.gpr[2] + ctx.gpr[29]);
    rt.memory().aot_store32(ctx.gpr[2] + static_cast<std::uint32_t>(704), ctx.gpr[18]);
    rt.memory().aot_store32(ctx.gpr[2] + static_cast<std::uint32_t>(576), ctx.gpr[19]);
    ctx.set_gpr(6, ctx.gpr[6] + static_cast<std::uint32_t>(1));
    ctx.set_gpr(18, ctx.gpr[18] + static_cast<std::uint32_t>(1));
    goto L_089AB04C;
L_089AB04C:
    ctx.set_gpr(2, static_cast<std::int32_t>(ctx.gpr[18]) < 8 ? 1u : 0u);
    { const bool branch_taken = ctx.gpr[2] != 0u;
    // nop
      if (branch_taken) {
          goto L_089AB020;
      }
      goto L_089AB058;
    }
L_089AB058:
    ctx.set_gpr(19, ctx.gpr[19] + static_cast<std::uint32_t>(1));
    goto L_089AB05C;
L_089AB05C:
    ctx.set_gpr(2, static_cast<std::int32_t>(ctx.gpr[19]) < 4 ? 1u : 0u);
    { const bool branch_taken = ctx.gpr[2] != 0u;
    // nop
      if (branch_taken) {
          goto L_089AB014;
      }
      goto L_089AB068;
    }
L_089AB068:
    ctx.set_gpr(16, static_cast<std::uint32_t>(static_cast<std::int32_t>(ctx.gpr[4]) >> 5u));
    { const bool branch_taken = static_cast<std::int32_t>(ctx.gpr[4]) >= 0;
    // nop
      if (branch_taken) {
          goto L_089AB07C;
      }
      goto L_089AB074;
    }
L_089AB074:
    ctx.set_gpr(2, ctx.gpr[4] + static_cast<std::uint32_t>(31));
    ctx.set_gpr(16, static_cast<std::uint32_t>(static_cast<std::int32_t>(ctx.gpr[2]) >> 5u));
    goto L_089AB07C;
L_089AB07C:
    ctx.set_gpr(22, static_cast<std::uint32_t>(static_cast<std::int32_t>(ctx.gpr[5]) >> 4u));
    { const bool branch_taken = static_cast<std::int32_t>(ctx.gpr[5]) >= 0;
    // nop
      if (branch_taken) {
          goto L_089AB090;
      }
      goto L_089AB088;
    }
L_089AB088:
    ctx.set_gpr(2, ctx.gpr[5] + static_cast<std::uint32_t>(15));
    ctx.set_gpr(22, static_cast<std::uint32_t>(static_cast<std::int32_t>(ctx.gpr[2]) >> 4u));
    goto L_089AB090;
L_089AB090:
    ctx.set_gpr(4, ctx.gpr[29] + static_cast<std::uint32_t>(320));
    ctx.set_gpr(5, 0u + 0u);
    ctx.set_gpr(6, 0u + static_cast<std::uint32_t>(256));
    ctx.set_gpr(31, 0x089AB0A4u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0003_entry, 3u, 719u, 0x08812EE8u>(ctx, &aot_mem) && ctx.pc == 0x089AB0A4u) goto L_089AB0A4;
    return;
L_089AB0A4:
    ctx.set_gpr(4, ctx.gpr[29] + static_cast<std::uint32_t>(64));
    ctx.set_gpr(5, 0u + 0u);
    ctx.set_gpr(6, 0u + static_cast<std::uint32_t>(256));
    ctx.set_gpr(31, 0x089AB0B8u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0003_entry, 3u, 719u, 0x08812EE8u>(ctx, &aot_mem) && ctx.pc == 0x089AB0B8u) goto L_089AB0B8;
    return;
L_089AB0B8:
    ctx.set_gpr(19, 0u + 0u);
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_089AB1C0;
      }
      goto L_089AB0C4;
    }
L_089AB0C4:
    ctx.set_gpr(18, 0u + 0u);
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_089AB1B0;
      }
      goto L_089AB0D0;
    }
L_089AB0D0:
    ctx.set_gpr(21, ctx.gpr[29] + static_cast<std::uint32_t>(320));
    ctx.set_gpr(2, ctx.gpr[19] << 10u);
    ctx.set_gpr(3, ctx.gpr[30] + ctx.gpr[2]);
    ctx.set_gpr(2, ctx.gpr[18] << 4u);
    ctx.set_gpr(20, ctx.gpr[3] + ctx.gpr[2]);
    { const std::int64_t product = static_cast<std::int64_t>(static_cast<std::int32_t>(ctx.gpr[19])) * static_cast<std::int64_t>(static_cast<std::int32_t>(ctx.gpr[16])); ctx.lo = static_cast<std::uint32_t>(product); ctx.hi = static_cast<std::uint32_t>(static_cast<std::uint64_t>(product) >> 32u); }
    ctx.set_gpr(2, ctx.lo);
    ctx.set_gpr(2, ctx.gpr[18] + ctx.gpr[2]);
    ctx.set_gpr(3, ctx.gpr[2] << 2u);
    ctx.set_gpr(2, 2229u << 16u);
    ctx.set_gpr(2, ctx.gpr[2] + static_cast<std::uint32_t>(-14756));
    ctx.set_gpr(2, ctx.gpr[2] + ctx.gpr[3]);
    ctx.set_gpr(23, rt.memory().aot_load32(ctx.gpr[2] + static_cast<std::uint32_t>(0)));
    ctx.set_gpr(17, 0u + 0u);
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_089AB130;
      }
      goto L_089AB110;
    }
L_089AB110:
    ctx.set_gpr(4, ctx.gpr[21] + 0u);
    ctx.set_gpr(5, ctx.gpr[20] + 0u);
    ctx.set_gpr(6, 0u + static_cast<std::uint32_t>(16));
    ctx.set_gpr(31, 0x089AB124u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0003_entry, 3u, 662u, 0x08812B08u>(ctx, &aot_mem) && ctx.pc == 0x089AB124u) goto L_089AB124;
    return;
L_089AB124:
    ctx.set_gpr(21, ctx.gpr[21] + static_cast<std::uint32_t>(16));
    ctx.set_gpr(20, ctx.gpr[20] + static_cast<std::uint32_t>(64));
    ctx.set_gpr(17, ctx.gpr[17] + static_cast<std::uint32_t>(1));
    goto L_089AB130;
L_089AB130:
    ctx.set_gpr(2, static_cast<std::int32_t>(ctx.gpr[17]) < 16 ? 1u : 0u);
    { const bool branch_taken = ctx.gpr[2] != 0u;
    // nop
      if (branch_taken) {
          goto L_089AB110;
      }
      goto L_089AB13C;
    }
L_089AB13C:
    ctx.set_gpr(4, ctx.gpr[29] + static_cast<std::uint32_t>(320));
    ctx.set_gpr(5, ctx.gpr[29] + static_cast<std::uint32_t>(64));
    ctx.set_gpr(31, 0x089AB14Cu);
    // nop
    goto L_089AAE38;
L_089AB14C:
    ctx.set_gpr(21, ctx.gpr[29] + static_cast<std::uint32_t>(64));
    ctx.set_gpr(2, ctx.gpr[23] << 2u);
    ctx.set_gpr(4, ctx.gpr[2] + ctx.gpr[29]);
    ctx.set_gpr(2, rt.memory().aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(576)));
    ctx.set_gpr(3, ctx.gpr[2] << 11u);
    ctx.set_gpr(2, rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(60)));
    ctx.set_gpr(3, ctx.gpr[2] + ctx.gpr[3]);
    ctx.set_gpr(2, rt.memory().aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(704)));
    ctx.set_gpr(2, ctx.gpr[2] << 5u);
    ctx.set_gpr(20, ctx.gpr[3] + ctx.gpr[2]);
    ctx.set_gpr(17, 0u + 0u);
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_089AB1A0;
      }
      goto L_089AB180;
    }
L_089AB180:
    ctx.set_gpr(4, ctx.gpr[20] + 0u);
    ctx.set_gpr(5, ctx.gpr[21] + 0u);
    ctx.set_gpr(6, 0u + static_cast<std::uint32_t>(32));
    ctx.set_gpr(31, 0x089AB194u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0003_entry, 3u, 662u, 0x08812B08u>(ctx, &aot_mem) && ctx.pc == 0x089AB194u) goto L_089AB194;
    return;
L_089AB194:
    ctx.set_gpr(21, ctx.gpr[21] + static_cast<std::uint32_t>(32));
    ctx.set_gpr(20, ctx.gpr[20] + static_cast<std::uint32_t>(256));
    ctx.set_gpr(17, ctx.gpr[17] + static_cast<std::uint32_t>(1));
    goto L_089AB1A0;
L_089AB1A0:
    ctx.set_gpr(2, static_cast<std::int32_t>(ctx.gpr[17]) < 8 ? 1u : 0u);
    { const bool branch_taken = ctx.gpr[2] != 0u;
    // nop
      if (branch_taken) {
          goto L_089AB180;
      }
      goto L_089AB1AC;
    }
L_089AB1AC:
    ctx.set_gpr(18, ctx.gpr[18] + static_cast<std::uint32_t>(1));
    goto L_089AB1B0;
L_089AB1B0:
    ctx.set_gpr(2, static_cast<std::int32_t>(ctx.gpr[18]) < static_cast<std::int32_t>(ctx.gpr[16]) ? 1u : 0u);
    { const bool branch_taken = ctx.gpr[2] != 0u;
    // nop
      if (branch_taken) {
          goto L_089AB0D0;
      }
      goto L_089AB1BC;
    }
L_089AB1BC:
    ctx.set_gpr(19, ctx.gpr[19] + static_cast<std::uint32_t>(1));
    goto L_089AB1C0;
L_089AB1C0:
    ctx.set_gpr(2, static_cast<std::int32_t>(ctx.gpr[19]) < static_cast<std::int32_t>(ctx.gpr[22]) ? 1u : 0u);
    { const bool branch_taken = ctx.gpr[2] != 0u;
    // nop
      if (branch_taken) {
          goto L_089AB0C4;
      }
      goto L_089AB1CC;
    }
L_089AB1CC:
    ctx.set_gpr(2, 0u + 0u);
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
    ctx.set_gpr(29, ctx.gpr[29] + static_cast<std::uint32_t>(832));
    jump_target = ctx.gpr[31];
    // nop
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_089AB204:
    ctx.set_gpr(29, ctx.gpr[29] + static_cast<std::uint32_t>(-832));
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
    ctx.set_gpr(30, ctx.gpr[6] + 0u);
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(60), ctx.gpr[7]);
    ctx.set_gpr(6, 0u + 0u);
    ctx.set_gpr(19, 0u + 0u);
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_089AB290;
      }
      goto L_089AB248;
    }
L_089AB248:
    ctx.set_gpr(18, 0u + 0u);
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_089AB280;
      }
      goto L_089AB254;
    }
L_089AB254:
    ctx.set_gpr(3, ctx.gpr[6] << 2u);
    ctx.set_gpr(2, 2229u << 16u);
    ctx.set_gpr(2, ctx.gpr[2] + static_cast<std::uint32_t>(-14372));
    ctx.set_gpr(2, ctx.gpr[2] + ctx.gpr[3]);
    ctx.set_gpr(2, rt.memory().aot_load32(ctx.gpr[2] + static_cast<std::uint32_t>(0)));
    ctx.set_gpr(2, ctx.gpr[2] << 2u);
    ctx.set_gpr(2, ctx.gpr[2] + ctx.gpr[29]);
    rt.memory().aot_store32(ctx.gpr[2] + static_cast<std::uint32_t>(704), ctx.gpr[18]);
    rt.memory().aot_store32(ctx.gpr[2] + static_cast<std::uint32_t>(576), ctx.gpr[19]);
    ctx.set_gpr(6, ctx.gpr[6] + static_cast<std::uint32_t>(1));
    ctx.set_gpr(18, ctx.gpr[18] + static_cast<std::uint32_t>(1));
    goto L_089AB280;
L_089AB280:
    ctx.set_gpr(2, static_cast<std::int32_t>(ctx.gpr[18]) < 8 ? 1u : 0u);
    { const bool branch_taken = ctx.gpr[2] != 0u;
    // nop
      if (branch_taken) {
          goto L_089AB254;
      }
      goto L_089AB28C;
    }
L_089AB28C:
    ctx.set_gpr(19, ctx.gpr[19] + static_cast<std::uint32_t>(1));
    goto L_089AB290;
L_089AB290:
    ctx.set_gpr(2, static_cast<std::int32_t>(ctx.gpr[19]) < 4 ? 1u : 0u);
    { const bool branch_taken = ctx.gpr[2] != 0u;
    // nop
      if (branch_taken) {
          goto L_089AB248;
      }
      goto L_089AB29C;
    }
L_089AB29C:
    ctx.set_gpr(16, static_cast<std::uint32_t>(static_cast<std::int32_t>(ctx.gpr[4]) >> 4u));
    { const bool branch_taken = static_cast<std::int32_t>(ctx.gpr[4]) >= 0;
    // nop
      if (branch_taken) {
          goto L_089AB2B0;
      }
      goto L_089AB2A8;
    }
L_089AB2A8:
    ctx.set_gpr(2, ctx.gpr[4] + static_cast<std::uint32_t>(15));
    ctx.set_gpr(16, static_cast<std::uint32_t>(static_cast<std::int32_t>(ctx.gpr[2]) >> 4u));
    goto L_089AB2B0;
L_089AB2B0:
    ctx.set_gpr(22, static_cast<std::uint32_t>(static_cast<std::int32_t>(ctx.gpr[5]) >> 4u));
    { const bool branch_taken = static_cast<std::int32_t>(ctx.gpr[5]) >= 0;
    // nop
      if (branch_taken) {
          goto L_089AB2C4;
      }
      goto L_089AB2BC;
    }
L_089AB2BC:
    ctx.set_gpr(2, ctx.gpr[5] + static_cast<std::uint32_t>(15));
    ctx.set_gpr(22, static_cast<std::uint32_t>(static_cast<std::int32_t>(ctx.gpr[2]) >> 4u));
    goto L_089AB2C4;
L_089AB2C4:
    ctx.set_gpr(4, ctx.gpr[29] + static_cast<std::uint32_t>(320));
    ctx.set_gpr(5, 0u + 0u);
    ctx.set_gpr(6, 0u + static_cast<std::uint32_t>(256));
    ctx.set_gpr(31, 0x089AB2D8u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0003_entry, 3u, 719u, 0x08812EE8u>(ctx, &aot_mem) && ctx.pc == 0x089AB2D8u) goto L_089AB2D8;
    return;
L_089AB2D8:
    ctx.set_gpr(4, ctx.gpr[29] + static_cast<std::uint32_t>(64));
    ctx.set_gpr(5, 0u + 0u);
    ctx.set_gpr(6, 0u + static_cast<std::uint32_t>(256));
    ctx.set_gpr(31, 0x089AB2ECu);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0003_entry, 3u, 719u, 0x08812EE8u>(ctx, &aot_mem) && ctx.pc == 0x089AB2ECu) goto L_089AB2EC;
    return;
L_089AB2EC:
    ctx.set_gpr(19, 0u + 0u);
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_089AB3F4;
      }
      goto L_089AB2F8;
    }
L_089AB2F8:
    ctx.set_gpr(18, 0u + 0u);
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_089AB3E4;
      }
      goto L_089AB304;
    }
L_089AB304:
    ctx.set_gpr(21, ctx.gpr[29] + static_cast<std::uint32_t>(320));
    ctx.set_gpr(2, ctx.gpr[19] << 11u);
    ctx.set_gpr(3, ctx.gpr[30] + ctx.gpr[2]);
    ctx.set_gpr(2, ctx.gpr[18] << 4u);
    ctx.set_gpr(20, ctx.gpr[3] + ctx.gpr[2]);
    { const std::int64_t product = static_cast<std::int64_t>(static_cast<std::int32_t>(ctx.gpr[19])) * static_cast<std::int64_t>(static_cast<std::int32_t>(ctx.gpr[16])); ctx.lo = static_cast<std::uint32_t>(product); ctx.hi = static_cast<std::uint32_t>(static_cast<std::uint64_t>(product) >> 32u); }
    ctx.set_gpr(2, ctx.lo);
    ctx.set_gpr(2, ctx.gpr[18] + ctx.gpr[2]);
    ctx.set_gpr(3, ctx.gpr[2] << 2u);
    ctx.set_gpr(2, 2229u << 16u);
    ctx.set_gpr(2, ctx.gpr[2] + static_cast<std::uint32_t>(-14500));
    ctx.set_gpr(2, ctx.gpr[2] + ctx.gpr[3]);
    ctx.set_gpr(23, rt.memory().aot_load32(ctx.gpr[2] + static_cast<std::uint32_t>(0)));
    ctx.set_gpr(17, 0u + 0u);
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_089AB364;
      }
      goto L_089AB344;
    }
L_089AB344:
    ctx.set_gpr(4, ctx.gpr[21] + 0u);
    ctx.set_gpr(5, ctx.gpr[20] + 0u);
    ctx.set_gpr(6, 0u + static_cast<std::uint32_t>(16));
    ctx.set_gpr(31, 0x089AB358u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0003_entry, 3u, 662u, 0x08812B08u>(ctx, &aot_mem) && ctx.pc == 0x089AB358u) goto L_089AB358;
    return;
L_089AB358:
    ctx.set_gpr(21, ctx.gpr[21] + static_cast<std::uint32_t>(16));
    ctx.set_gpr(20, ctx.gpr[20] + static_cast<std::uint32_t>(128));
    ctx.set_gpr(17, ctx.gpr[17] + static_cast<std::uint32_t>(1));
    goto L_089AB364;
L_089AB364:
    ctx.set_gpr(2, static_cast<std::int32_t>(ctx.gpr[17]) < 16 ? 1u : 0u);
    { const bool branch_taken = ctx.gpr[2] != 0u;
    // nop
      if (branch_taken) {
          goto L_089AB344;
      }
      goto L_089AB370;
    }
L_089AB370:
    ctx.set_gpr(4, ctx.gpr[29] + static_cast<std::uint32_t>(320));
    ctx.set_gpr(5, ctx.gpr[29] + static_cast<std::uint32_t>(64));
    ctx.set_gpr(31, 0x089AB380u);
    // nop
    goto L_089AAF34;
L_089AB380:
    ctx.set_gpr(21, ctx.gpr[29] + static_cast<std::uint32_t>(64));
    ctx.set_gpr(2, ctx.gpr[23] << 2u);
    ctx.set_gpr(4, ctx.gpr[2] + ctx.gpr[29]);
    ctx.set_gpr(2, rt.memory().aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(576)));
    ctx.set_gpr(3, ctx.gpr[2] << 11u);
    ctx.set_gpr(2, rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(60)));
    ctx.set_gpr(3, ctx.gpr[2] + ctx.gpr[3]);
    ctx.set_gpr(2, rt.memory().aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(704)));
    ctx.set_gpr(2, ctx.gpr[2] << 5u);
    ctx.set_gpr(20, ctx.gpr[3] + ctx.gpr[2]);
    ctx.set_gpr(17, 0u + 0u);
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_089AB3D4;
      }
      goto L_089AB3B4;
    }
L_089AB3B4:
    ctx.set_gpr(4, ctx.gpr[20] + 0u);
    ctx.set_gpr(5, ctx.gpr[21] + 0u);
    ctx.set_gpr(6, 0u + static_cast<std::uint32_t>(32));
    ctx.set_gpr(31, 0x089AB3C8u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0003_entry, 3u, 662u, 0x08812B08u>(ctx, &aot_mem) && ctx.pc == 0x089AB3C8u) goto L_089AB3C8;
    return;
L_089AB3C8:
    ctx.set_gpr(21, ctx.gpr[21] + static_cast<std::uint32_t>(32));
    ctx.set_gpr(20, ctx.gpr[20] + static_cast<std::uint32_t>(256));
    ctx.set_gpr(17, ctx.gpr[17] + static_cast<std::uint32_t>(1));
    goto L_089AB3D4;
L_089AB3D4:
    ctx.set_gpr(2, static_cast<std::int32_t>(ctx.gpr[17]) < 8 ? 1u : 0u);
    { const bool branch_taken = ctx.gpr[2] != 0u;
    // nop
      if (branch_taken) {
          goto L_089AB3B4;
      }
      goto L_089AB3E0;
    }
L_089AB3E0:
    ctx.set_gpr(18, ctx.gpr[18] + static_cast<std::uint32_t>(1));
    goto L_089AB3E4;
L_089AB3E4:
    ctx.set_gpr(2, static_cast<std::int32_t>(ctx.gpr[18]) < static_cast<std::int32_t>(ctx.gpr[16]) ? 1u : 0u);
    { const bool branch_taken = ctx.gpr[2] != 0u;
    // nop
      if (branch_taken) {
          goto L_089AB304;
      }
      goto L_089AB3F0;
    }
L_089AB3F0:
    ctx.set_gpr(19, ctx.gpr[19] + static_cast<std::uint32_t>(1));
    goto L_089AB3F4;
L_089AB3F4:
    ctx.set_gpr(2, static_cast<std::int32_t>(ctx.gpr[19]) < static_cast<std::int32_t>(ctx.gpr[22]) ? 1u : 0u);
    { const bool branch_taken = ctx.gpr[2] != 0u;
    // nop
      if (branch_taken) {
          goto L_089AB2F8;
      }
      goto L_089AB400;
    }
L_089AB400:
    ctx.set_gpr(2, 0u + 0u);
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
    ctx.set_gpr(29, ctx.gpr[29] + static_cast<std::uint32_t>(832));
    jump_target = ctx.gpr[31];
    // nop
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_089AB438:
    ctx.set_gpr(29, ctx.gpr[29] + static_cast<std::uint32_t>(-16448));
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
    ctx.set_gpr(21, ctx.gpr[5] + 0u);
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(60), ctx.gpr[6]);
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(56), ctx.gpr[7]);
    ctx.set_gpr(20, 0u + 0u);
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_089AB494;
      }
      goto L_089AB480;
    }
L_089AB480:
    ctx.set_gpr(2, 0u + static_cast<std::uint32_t>(1024));
    ctx.set_gpr(2, static_cast<std::uint32_t>(static_cast<std::int32_t>(ctx.gpr[2]) >> (ctx.gpr[20] & 31u)));
    { const bool branch_taken = ctx.gpr[18] == ctx.gpr[2];
    // nop
      if (branch_taken) {
          goto L_089AB4A0;
      }
      goto L_089AB490;
    }
L_089AB490:
    ctx.set_gpr(20, ctx.gpr[20] + static_cast<std::uint32_t>(1));
    goto L_089AB494;
L_089AB494:
    ctx.set_gpr(2, static_cast<std::int32_t>(ctx.gpr[20]) < 11 ? 1u : 0u);
    { const bool branch_taken = ctx.gpr[2] != 0u;
    // nop
      if (branch_taken) {
          goto L_089AB480;
      }
      goto L_089AB4A0;
    }
L_089AB4A0:
    ctx.set_gpr(2, 0u + static_cast<std::uint32_t>(11));
    { const bool branch_taken = ctx.gpr[20] != ctx.gpr[2];
    // nop
      if (branch_taken) {
          goto L_089AB4B8;
      }
      goto L_089AB4AC;
    }
L_089AB4AC:
    ctx.set_gpr(2, 0u + static_cast<std::uint32_t>(-1));
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_089AB708;
      }
      goto L_089AB4B8;
    }
L_089AB4B8:
    ctx.set_gpr(4, ctx.gpr[29] + static_cast<std::uint32_t>(8256));
    ctx.set_gpr(5, 0u + 0u);
    ctx.set_gpr(6, 0u + static_cast<std::uint32_t>(8192));
    ctx.set_gpr(31, 0x089AB4CCu);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0003_entry, 3u, 719u, 0x08812EE8u>(ctx, &aot_mem) && ctx.pc == 0x089AB4CCu) goto L_089AB4CC;
    return;
L_089AB4CC:
    ctx.set_gpr(4, ctx.gpr[29] + static_cast<std::uint32_t>(64));
    ctx.set_gpr(5, 0u + 0u);
    ctx.set_gpr(6, 0u + static_cast<std::uint32_t>(8192));
    ctx.set_gpr(31, 0x089AB4E0u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0003_entry, 3u, 719u, 0x08812EE8u>(ctx, &aot_mem) && ctx.pc == 0x089AB4E0u) goto L_089AB4E0;
    return;
L_089AB4E0:
    ctx.set_gpr(20, 0u + 0u);
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_089AB500;
      }
      goto L_089AB4EC;
    }
L_089AB4EC:
    ctx.set_gpr(2, 0u + static_cast<std::uint32_t>(1024));
    ctx.set_gpr(2, static_cast<std::uint32_t>(static_cast<std::int32_t>(ctx.gpr[2]) >> (ctx.gpr[20] & 31u)));
    { const bool branch_taken = ctx.gpr[21] == ctx.gpr[2];
    // nop
      if (branch_taken) {
          goto L_089AB50C;
      }
      goto L_089AB4FC;
    }
L_089AB4FC:
    ctx.set_gpr(20, ctx.gpr[20] + static_cast<std::uint32_t>(1));
    goto L_089AB500;
L_089AB500:
    ctx.set_gpr(2, static_cast<std::int32_t>(ctx.gpr[20]) < 11 ? 1u : 0u);
    { const bool branch_taken = ctx.gpr[2] != 0u;
    // nop
      if (branch_taken) {
          goto L_089AB4EC;
      }
      goto L_089AB50C;
    }
L_089AB50C:
    ctx.set_gpr(2, 0u + static_cast<std::uint32_t>(11));
    { const bool branch_taken = ctx.gpr[20] != ctx.gpr[2];
    // nop
      if (branch_taken) {
          goto L_089AB524;
      }
      goto L_089AB518;
    }
L_089AB518:
    ctx.set_gpr(2, 0u + static_cast<std::uint32_t>(-1));
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_089AB708;
      }
      goto L_089AB524;
    }
L_089AB524:
    ctx.set_gpr(3, ctx.gpr[18] + static_cast<std::uint32_t>(-1));
    ctx.set_gpr(2, static_cast<std::uint32_t>(static_cast<std::int32_t>(ctx.gpr[3]) >> 7u));
    { const bool branch_taken = static_cast<std::int32_t>(ctx.gpr[3]) >= 0;
    // nop
      if (branch_taken) {
          goto L_089AB53C;
      }
      goto L_089AB534;
    }
L_089AB534:
    ctx.set_gpr(2, ctx.gpr[3] + static_cast<std::uint32_t>(127));
    ctx.set_gpr(2, static_cast<std::uint32_t>(static_cast<std::int32_t>(ctx.gpr[2]) >> 7u));
    goto L_089AB53C;
L_089AB53C:
    ctx.set_gpr(16, ctx.gpr[2] + static_cast<std::uint32_t>(1));
    ctx.set_gpr(3, ctx.gpr[21] + static_cast<std::uint32_t>(-1));
    ctx.set_gpr(2, static_cast<std::uint32_t>(static_cast<std::int32_t>(ctx.gpr[3]) >> 7u));
    { const bool branch_taken = static_cast<std::int32_t>(ctx.gpr[3]) >= 0;
    // nop
      if (branch_taken) {
          goto L_089AB558;
      }
      goto L_089AB550;
    }
L_089AB550:
    ctx.set_gpr(2, ctx.gpr[3] + static_cast<std::uint32_t>(127));
    ctx.set_gpr(2, static_cast<std::uint32_t>(static_cast<std::int32_t>(ctx.gpr[2]) >> 7u));
    goto L_089AB558;
L_089AB558:
    ctx.set_gpr(2, ctx.gpr[2] + static_cast<std::uint32_t>(1));
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(48), ctx.gpr[2]);
    ctx.set_gpr(2, 0u + static_cast<std::uint32_t>(1));
    { const bool branch_taken = ctx.gpr[16] != ctx.gpr[2];
    // nop
      if (branch_taken) {
          goto L_089AB5A4;
      }
      goto L_089AB56C;
    }
L_089AB56C:
    ctx.set_gpr(17, static_cast<std::uint32_t>(static_cast<std::int32_t>(ctx.gpr[18]) >> 1u));
    { const bool branch_taken = static_cast<std::int32_t>(ctx.gpr[18]) >= 0;
    // nop
      if (branch_taken) {
          goto L_089AB580;
      }
      goto L_089AB578;
    }
L_089AB578:
    ctx.set_gpr(2, ctx.gpr[18] + static_cast<std::uint32_t>(1));
    ctx.set_gpr(17, static_cast<std::uint32_t>(static_cast<std::int32_t>(ctx.gpr[2]) >> 1u));
    goto L_089AB580;
L_089AB580:
    ctx.set_gpr(2, static_cast<std::uint32_t>(static_cast<std::int32_t>(ctx.gpr[18]) >> 2u));
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(52), ctx.gpr[2]);
    { const bool branch_taken = static_cast<std::int32_t>(ctx.gpr[18]) >= 0;
    // nop
      if (branch_taken) {
          goto L_089AB59C;
      }
      goto L_089AB590;
    }
L_089AB590:
    ctx.set_gpr(2, ctx.gpr[18] + static_cast<std::uint32_t>(3));
    ctx.set_gpr(2, static_cast<std::uint32_t>(static_cast<std::int32_t>(ctx.gpr[2]) >> 2u));
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(52), ctx.gpr[2]);
    goto L_089AB59C;
L_089AB59C:
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_089AB5B0;
      }
      goto L_089AB5A4;
    }
L_089AB5A4:
    ctx.set_gpr(17, 0u + static_cast<std::uint32_t>(64));
    ctx.set_gpr(2, 0u + static_cast<std::uint32_t>(32));
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(52), ctx.gpr[2]);
    goto L_089AB5B0;
L_089AB5B0:
    ctx.set_gpr(3, 0u + static_cast<std::uint32_t>(1));
    ctx.set_gpr(2, rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(48)));
    { const bool branch_taken = ctx.gpr[2] != ctx.gpr[3];
    // nop
      if (branch_taken) {
          goto L_089AB5CC;
      }
      goto L_089AB5C0;
    }
L_089AB5C0:
    ctx.set_gpr(22, ctx.gpr[21] << 1u);
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_089AB5D4;
      }
      goto L_089AB5CC;
    }
L_089AB5CC:
    ctx.set_gpr(21, 0u + static_cast<std::uint32_t>(128));
    ctx.set_gpr(22, 0u + static_cast<std::uint32_t>(256));
    goto L_089AB5D4;
L_089AB5D4:
    ctx.set_gpr(20, 0u + 0u);
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_089AB6F4;
      }
      goto L_089AB5E0;
    }
L_089AB5E0:
    ctx.set_gpr(19, 0u + 0u);
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_089AB6E4;
      }
      goto L_089AB5EC;
    }
L_089AB5EC:
    ctx.set_gpr(2, ctx.gpr[17] << 7u);
    { const std::int64_t product = static_cast<std::int64_t>(static_cast<std::int32_t>(ctx.gpr[16])) * static_cast<std::int64_t>(static_cast<std::int32_t>(ctx.gpr[2])); ctx.lo = static_cast<std::uint32_t>(product); ctx.hi = static_cast<std::uint32_t>(static_cast<std::uint64_t>(product) >> 32u); }
    ctx.set_gpr(2, ctx.lo);
    { const std::int64_t product = static_cast<std::int64_t>(static_cast<std::int32_t>(ctx.gpr[20])) * static_cast<std::int64_t>(static_cast<std::int32_t>(ctx.gpr[2])); ctx.lo = static_cast<std::uint32_t>(product); ctx.hi = static_cast<std::uint32_t>(static_cast<std::uint64_t>(product) >> 32u); }
    ctx.set_gpr(3, ctx.lo);
    ctx.set_gpr(2, rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(60)));
    ctx.set_gpr(3, ctx.gpr[2] + ctx.gpr[3]);
    { const std::int64_t product = static_cast<std::int64_t>(static_cast<std::int32_t>(ctx.gpr[17])) * static_cast<std::int64_t>(static_cast<std::int32_t>(ctx.gpr[19])); ctx.lo = static_cast<std::uint32_t>(product); ctx.hi = static_cast<std::uint32_t>(static_cast<std::uint64_t>(product) >> 32u); }
    ctx.set_gpr(2, ctx.lo);
    ctx.set_gpr(23, ctx.gpr[3] + ctx.gpr[2]);
    ctx.set_gpr(30, ctx.gpr[29] + static_cast<std::uint32_t>(8256));
    ctx.set_gpr(18, 0u + 0u);
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_089AB64C;
      }
      goto L_089AB624;
    }
L_089AB624:
    ctx.set_gpr(4, ctx.gpr[30] + 0u);
    ctx.set_gpr(5, ctx.gpr[23] + 0u);
    ctx.set_gpr(6, ctx.gpr[17] + 0u);
    ctx.set_gpr(31, 0x089AB638u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0003_entry, 3u, 662u, 0x08812B08u>(ctx, &aot_mem) && ctx.pc == 0x089AB638u) goto L_089AB638;
    return;
L_089AB638:
    { const std::int64_t product = static_cast<std::int64_t>(static_cast<std::int32_t>(ctx.gpr[17])) * static_cast<std::int64_t>(static_cast<std::int32_t>(ctx.gpr[16])); ctx.lo = static_cast<std::uint32_t>(product); ctx.hi = static_cast<std::uint32_t>(static_cast<std::uint64_t>(product) >> 32u); }
    ctx.set_gpr(2, ctx.lo);
    ctx.set_gpr(23, ctx.gpr[23] + ctx.gpr[2]);
    ctx.set_gpr(30, ctx.gpr[30] + static_cast<std::uint32_t>(64));
    ctx.set_gpr(18, ctx.gpr[18] + static_cast<std::uint32_t>(1));
    goto L_089AB64C;
L_089AB64C:
    ctx.set_gpr(2, static_cast<std::int32_t>(ctx.gpr[18]) < static_cast<std::int32_t>(ctx.gpr[21]) ? 1u : 0u);
    { const bool branch_taken = ctx.gpr[2] != 0u;
    // nop
      if (branch_taken) {
          goto L_089AB624;
      }
      goto L_089AB658;
    }
L_089AB658:
    ctx.set_gpr(4, 0u + static_cast<std::uint32_t>(128));
    ctx.set_gpr(5, ctx.gpr[4] + 0u);
    ctx.set_gpr(6, ctx.gpr[29] + static_cast<std::uint32_t>(8256));
    ctx.set_gpr(7, ctx.gpr[29] + static_cast<std::uint32_t>(64));
    ctx.set_gpr(31, 0x089AB670u);
    // nop
    goto L_089AAFD0;
L_089AB670:
    ctx.set_gpr(2, ctx.gpr[22] << 5u);
    { const std::int64_t product = static_cast<std::int64_t>(static_cast<std::int32_t>(ctx.gpr[16])) * static_cast<std::int64_t>(static_cast<std::int32_t>(ctx.gpr[2])); ctx.lo = static_cast<std::uint32_t>(product); ctx.hi = static_cast<std::uint32_t>(static_cast<std::uint64_t>(product) >> 32u); }
    ctx.set_gpr(2, ctx.lo);
    { const std::int64_t product = static_cast<std::int64_t>(static_cast<std::int32_t>(ctx.gpr[20])) * static_cast<std::int64_t>(static_cast<std::int32_t>(ctx.gpr[2])); ctx.lo = static_cast<std::uint32_t>(product); ctx.hi = static_cast<std::uint32_t>(static_cast<std::uint64_t>(product) >> 32u); }
    ctx.set_gpr(3, ctx.lo);
    ctx.set_gpr(2, rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(56)));
    ctx.set_gpr(3, ctx.gpr[2] + ctx.gpr[3]);
    { const std::int64_t product = static_cast<std::int64_t>(static_cast<std::int32_t>(ctx.gpr[22])) * static_cast<std::int64_t>(static_cast<std::int32_t>(ctx.gpr[19])); ctx.lo = static_cast<std::uint32_t>(product); ctx.hi = static_cast<std::uint32_t>(static_cast<std::uint64_t>(product) >> 32u); }
    ctx.set_gpr(2, ctx.lo);
    ctx.set_gpr(23, ctx.gpr[3] + ctx.gpr[2]);
    ctx.set_gpr(30, ctx.gpr[29] + static_cast<std::uint32_t>(64));
    ctx.set_gpr(18, 0u + 0u);
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_089AB6D0;
      }
      goto L_089AB6A8;
    }
L_089AB6A8:
    ctx.set_gpr(4, ctx.gpr[23] + 0u);
    ctx.set_gpr(5, ctx.gpr[30] + 0u);
    ctx.set_gpr(6, ctx.gpr[22] + 0u);
    ctx.set_gpr(31, 0x089AB6BCu);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0003_entry, 3u, 662u, 0x08812B08u>(ctx, &aot_mem) && ctx.pc == 0x089AB6BCu) goto L_089AB6BC;
    return;
L_089AB6BC:
    { const std::int64_t product = static_cast<std::int64_t>(static_cast<std::int32_t>(ctx.gpr[22])) * static_cast<std::int64_t>(static_cast<std::int32_t>(ctx.gpr[16])); ctx.lo = static_cast<std::uint32_t>(product); ctx.hi = static_cast<std::uint32_t>(static_cast<std::uint64_t>(product) >> 32u); }
    ctx.set_gpr(2, ctx.lo);
    ctx.set_gpr(23, ctx.gpr[23] + ctx.gpr[2]);
    ctx.set_gpr(30, ctx.gpr[30] + static_cast<std::uint32_t>(256));
    ctx.set_gpr(18, ctx.gpr[18] + static_cast<std::uint32_t>(1));
    goto L_089AB6D0;
L_089AB6D0:
    ctx.set_gpr(2, rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(52)));
    ctx.set_gpr(2, static_cast<std::int32_t>(ctx.gpr[18]) < static_cast<std::int32_t>(ctx.gpr[2]) ? 1u : 0u);
    { const bool branch_taken = ctx.gpr[2] != 0u;
    // nop
      if (branch_taken) {
          goto L_089AB6A8;
      }
      goto L_089AB6E0;
    }
L_089AB6E0:
    ctx.set_gpr(19, ctx.gpr[19] + static_cast<std::uint32_t>(1));
    goto L_089AB6E4;
L_089AB6E4:
    ctx.set_gpr(2, static_cast<std::int32_t>(ctx.gpr[19]) < static_cast<std::int32_t>(ctx.gpr[16]) ? 1u : 0u);
    { const bool branch_taken = ctx.gpr[2] != 0u;
    // nop
      if (branch_taken) {
          goto L_089AB5EC;
      }
      goto L_089AB6F0;
    }
L_089AB6F0:
    ctx.set_gpr(20, ctx.gpr[20] + static_cast<std::uint32_t>(1));
    goto L_089AB6F4;
L_089AB6F4:
    ctx.set_gpr(2, rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(48)));
    ctx.set_gpr(2, static_cast<std::int32_t>(ctx.gpr[20]) < static_cast<std::int32_t>(ctx.gpr[2]) ? 1u : 0u);
    { const bool branch_taken = ctx.gpr[2] != 0u;
    // nop
      if (branch_taken) {
          goto L_089AB5E0;
      }
      goto L_089AB704;
    }
L_089AB704:
    ctx.set_gpr(2, 0u + 0u);
    goto L_089AB708;
L_089AB708:
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
    ctx.set_gpr(29, ctx.gpr[29] + static_cast<std::uint32_t>(16448));
    jump_target = ctx.gpr[31];
    // nop
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_089AB73C:
    ctx.set_gpr(29, ctx.gpr[29] + static_cast<std::uint32_t>(-16464));
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
    ctx.set_gpr(20, ctx.gpr[5] + 0u);
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(76), ctx.gpr[6]);
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(72), ctx.gpr[7]);
    ctx.set_gpr(19, 0u + 0u);
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_089AB798;
      }
      goto L_089AB784;
    }
L_089AB784:
    ctx.set_gpr(2, 0u + static_cast<std::uint32_t>(1024));
    ctx.set_gpr(2, static_cast<std::uint32_t>(static_cast<std::int32_t>(ctx.gpr[2]) >> (ctx.gpr[19] & 31u)));
    { const bool branch_taken = ctx.gpr[21] == ctx.gpr[2];
    // nop
      if (branch_taken) {
          goto L_089AB7A4;
      }
      goto L_089AB794;
    }
L_089AB794:
    ctx.set_gpr(19, ctx.gpr[19] + static_cast<std::uint32_t>(1));
    goto L_089AB798;
L_089AB798:
    ctx.set_gpr(2, static_cast<std::int32_t>(ctx.gpr[19]) < 11 ? 1u : 0u);
    { const bool branch_taken = ctx.gpr[2] != 0u;
    // nop
      if (branch_taken) {
          goto L_089AB784;
      }
      goto L_089AB7A4;
    }
L_089AB7A4:
    ctx.set_gpr(2, 0u + static_cast<std::uint32_t>(11));
    { const bool branch_taken = ctx.gpr[19] != ctx.gpr[2];
    // nop
      if (branch_taken) {
          goto L_089AB7BC;
      }
      goto L_089AB7B0;
    }
L_089AB7B0:
    ctx.set_gpr(2, 0u + static_cast<std::uint32_t>(-1));
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_089ABA04;
      }
      goto L_089AB7BC;
    }
L_089AB7BC:
    ctx.set_gpr(19, 0u + 0u);
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_089AB7DC;
      }
      goto L_089AB7C8;
    }
L_089AB7C8:
    ctx.set_gpr(2, 0u + static_cast<std::uint32_t>(1024));
    ctx.set_gpr(2, static_cast<std::uint32_t>(static_cast<std::int32_t>(ctx.gpr[2]) >> (ctx.gpr[19] & 31u)));
    { const bool branch_taken = ctx.gpr[20] == ctx.gpr[2];
    // nop
      if (branch_taken) {
          goto L_089AB7E8;
      }
      goto L_089AB7D8;
    }
L_089AB7D8:
    ctx.set_gpr(19, ctx.gpr[19] + static_cast<std::uint32_t>(1));
    goto L_089AB7DC;
L_089AB7DC:
    ctx.set_gpr(2, static_cast<std::int32_t>(ctx.gpr[19]) < 11 ? 1u : 0u);
    { const bool branch_taken = ctx.gpr[2] != 0u;
    // nop
      if (branch_taken) {
          goto L_089AB7C8;
      }
      goto L_089AB7E8;
    }
L_089AB7E8:
    ctx.set_gpr(2, 0u + static_cast<std::uint32_t>(11));
    { const bool branch_taken = ctx.gpr[19] != ctx.gpr[2];
    // nop
      if (branch_taken) {
          goto L_089AB800;
      }
      goto L_089AB7F4;
    }
L_089AB7F4:
    ctx.set_gpr(2, 0u + static_cast<std::uint32_t>(-1));
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_089ABA04;
      }
      goto L_089AB800;
    }
L_089AB800:
    ctx.set_gpr(4, ctx.gpr[29] + static_cast<std::uint32_t>(8272));
    ctx.set_gpr(5, 0u + 0u);
    ctx.set_gpr(6, 0u + static_cast<std::uint32_t>(8192));
    ctx.set_gpr(31, 0x089AB814u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0003_entry, 3u, 719u, 0x08812EE8u>(ctx, &aot_mem) && ctx.pc == 0x089AB814u) goto L_089AB814;
    return;
L_089AB814:
    ctx.set_gpr(4, ctx.gpr[29] + static_cast<std::uint32_t>(80));
    ctx.set_gpr(5, 0u + 0u);
    ctx.set_gpr(6, 0u + static_cast<std::uint32_t>(8192));
    ctx.set_gpr(31, 0x089AB828u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0003_entry, 3u, 719u, 0x08812EE8u>(ctx, &aot_mem) && ctx.pc == 0x089AB828u) goto L_089AB828;
    return;
L_089AB828:
    ctx.set_gpr(3, ctx.gpr[21] + static_cast<std::uint32_t>(-1));
    ctx.set_gpr(2, static_cast<std::uint32_t>(static_cast<std::int32_t>(ctx.gpr[3]) >> 7u));
    { const bool branch_taken = static_cast<std::int32_t>(ctx.gpr[3]) >= 0;
    // nop
      if (branch_taken) {
          goto L_089AB840;
      }
      goto L_089AB838;
    }
L_089AB838:
    ctx.set_gpr(2, ctx.gpr[3] + static_cast<std::uint32_t>(127));
    ctx.set_gpr(2, static_cast<std::uint32_t>(static_cast<std::int32_t>(ctx.gpr[2]) >> 7u));
    goto L_089AB840;
L_089AB840:
    ctx.set_gpr(16, ctx.gpr[2] + static_cast<std::uint32_t>(1));
    ctx.set_gpr(3, ctx.gpr[20] + static_cast<std::uint32_t>(-1));
    ctx.set_gpr(2, static_cast<std::uint32_t>(static_cast<std::int32_t>(ctx.gpr[3]) >> 6u));
    { const bool branch_taken = static_cast<std::int32_t>(ctx.gpr[3]) >= 0;
    // nop
      if (branch_taken) {
          goto L_089AB85C;
      }
      goto L_089AB854;
    }
L_089AB854:
    ctx.set_gpr(2, ctx.gpr[3] + static_cast<std::uint32_t>(63));
    ctx.set_gpr(2, static_cast<std::uint32_t>(static_cast<std::int32_t>(ctx.gpr[2]) >> 6u));
    goto L_089AB85C;
L_089AB85C:
    ctx.set_gpr(2, ctx.gpr[2] + static_cast<std::uint32_t>(1));
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(60), ctx.gpr[2]);
    ctx.set_gpr(2, 0u + static_cast<std::uint32_t>(1));
    { const bool branch_taken = ctx.gpr[16] != ctx.gpr[2];
    // nop
      if (branch_taken) {
          goto L_089AB87C;
      }
      goto L_089AB870;
    }
L_089AB870:
    ctx.set_gpr(22, ctx.gpr[21] << 1u);
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_089AB884;
      }
      goto L_089AB87C;
    }
L_089AB87C:
    ctx.set_gpr(21, 0u + static_cast<std::uint32_t>(128));
    ctx.set_gpr(22, 0u + static_cast<std::uint32_t>(256));
    goto L_089AB884;
L_089AB884:
    ctx.set_gpr(3, 0u + static_cast<std::uint32_t>(1));
    ctx.set_gpr(2, rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(60)));
    { const bool branch_taken = ctx.gpr[2] != ctx.gpr[3];
    // nop
      if (branch_taken) {
          goto L_089AB8B0;
      }
      goto L_089AB894;
    }
L_089AB894:
    ctx.set_gpr(23, static_cast<std::uint32_t>(static_cast<std::int32_t>(ctx.gpr[20]) >> 1u));
    { const bool branch_taken = static_cast<std::int32_t>(ctx.gpr[20]) >= 0;
    // nop
      if (branch_taken) {
          goto L_089AB8A8;
      }
      goto L_089AB8A0;
    }
L_089AB8A0:
    ctx.set_gpr(2, ctx.gpr[20] + static_cast<std::uint32_t>(1));
    ctx.set_gpr(23, static_cast<std::uint32_t>(static_cast<std::int32_t>(ctx.gpr[2]) >> 1u));
    goto L_089AB8A8;
L_089AB8A8:
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_089AB8B8;
      }
      goto L_089AB8B0;
    }
L_089AB8B0:
    ctx.set_gpr(20, 0u + static_cast<std::uint32_t>(64));
    ctx.set_gpr(23, 0u + static_cast<std::uint32_t>(32));
    goto L_089AB8B8;
L_089AB8B8:
    ctx.set_gpr(19, 0u + 0u);
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_089AB9F0;
      }
      goto L_089AB8C4;
    }
L_089AB8C4:
    ctx.set_gpr(18, 0u + 0u);
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_089AB9E0;
      }
      goto L_089AB8D0;
    }
L_089AB8D0:
    ctx.set_gpr(2, ctx.gpr[21] << 6u);
    { const std::int64_t product = static_cast<std::int64_t>(static_cast<std::int32_t>(ctx.gpr[16])) * static_cast<std::int64_t>(static_cast<std::int32_t>(ctx.gpr[2])); ctx.lo = static_cast<std::uint32_t>(product); ctx.hi = static_cast<std::uint32_t>(static_cast<std::uint64_t>(product) >> 32u); }
    ctx.set_gpr(2, ctx.lo);
    { const std::int64_t product = static_cast<std::int64_t>(static_cast<std::int32_t>(ctx.gpr[19])) * static_cast<std::int64_t>(static_cast<std::int32_t>(ctx.gpr[2])); ctx.lo = static_cast<std::uint32_t>(product); ctx.hi = static_cast<std::uint32_t>(static_cast<std::uint64_t>(product) >> 32u); }
    ctx.set_gpr(3, ctx.lo);
    ctx.set_gpr(2, rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(76)));
    ctx.set_gpr(3, ctx.gpr[2] + ctx.gpr[3]);
    { const std::int64_t product = static_cast<std::int64_t>(static_cast<std::int32_t>(ctx.gpr[21])) * static_cast<std::int64_t>(static_cast<std::int32_t>(ctx.gpr[18])); ctx.lo = static_cast<std::uint32_t>(product); ctx.hi = static_cast<std::uint32_t>(static_cast<std::uint64_t>(product) >> 32u); }
    ctx.set_gpr(2, ctx.lo);
    ctx.set_gpr(30, ctx.gpr[3] + ctx.gpr[2]);
    ctx.set_gpr(2, ctx.gpr[29] + static_cast<std::uint32_t>(8272));
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(68), ctx.gpr[2]);
    ctx.set_gpr(17, 0u + 0u);
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_089AB93C;
      }
      goto L_089AB90C;
    }
L_089AB90C:
    ctx.set_gpr(4, rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(68)));
    ctx.set_gpr(5, ctx.gpr[30] + 0u);
    ctx.set_gpr(6, ctx.gpr[21] + 0u);
    ctx.set_gpr(31, 0x089AB920u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0003_entry, 3u, 662u, 0x08812B08u>(ctx, &aot_mem) && ctx.pc == 0x089AB920u) goto L_089AB920;
    return;
L_089AB920:
    { const std::int64_t product = static_cast<std::int64_t>(static_cast<std::int32_t>(ctx.gpr[21])) * static_cast<std::int64_t>(static_cast<std::int32_t>(ctx.gpr[16])); ctx.lo = static_cast<std::uint32_t>(product); ctx.hi = static_cast<std::uint32_t>(static_cast<std::uint64_t>(product) >> 32u); }
    ctx.set_gpr(2, ctx.lo);
    ctx.set_gpr(30, ctx.gpr[30] + ctx.gpr[2]);
    ctx.set_gpr(2, rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(68)));
    ctx.set_gpr(2, ctx.gpr[2] + static_cast<std::uint32_t>(128));
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(68), ctx.gpr[2]);
    ctx.set_gpr(17, ctx.gpr[17] + static_cast<std::uint32_t>(1));
    goto L_089AB93C;
L_089AB93C:
    ctx.set_gpr(2, static_cast<std::int32_t>(ctx.gpr[17]) < static_cast<std::int32_t>(ctx.gpr[20]) ? 1u : 0u);
    { const bool branch_taken = ctx.gpr[2] != 0u;
    // nop
      if (branch_taken) {
          goto L_089AB90C;
      }
      goto L_089AB948;
    }
L_089AB948:
    ctx.set_gpr(4, 0u + static_cast<std::uint32_t>(128));
    ctx.set_gpr(5, 0u + static_cast<std::uint32_t>(64));
    ctx.set_gpr(6, ctx.gpr[29] + static_cast<std::uint32_t>(8272));
    ctx.set_gpr(7, ctx.gpr[29] + static_cast<std::uint32_t>(80));
    ctx.set_gpr(31, 0x089AB960u);
    // nop
    goto L_089AB204;
L_089AB960:
    { const std::int64_t product = static_cast<std::int64_t>(static_cast<std::int32_t>(ctx.gpr[22])) * static_cast<std::int64_t>(static_cast<std::int32_t>(ctx.gpr[23])); ctx.lo = static_cast<std::uint32_t>(product); ctx.hi = static_cast<std::uint32_t>(static_cast<std::uint64_t>(product) >> 32u); }
    ctx.set_gpr(2, ctx.lo);
    { const std::int64_t product = static_cast<std::int64_t>(static_cast<std::int32_t>(ctx.gpr[16])) * static_cast<std::int64_t>(static_cast<std::int32_t>(ctx.gpr[2])); ctx.lo = static_cast<std::uint32_t>(product); ctx.hi = static_cast<std::uint32_t>(static_cast<std::uint64_t>(product) >> 32u); }
    ctx.set_gpr(2, ctx.lo);
    { const std::int64_t product = static_cast<std::int64_t>(static_cast<std::int32_t>(ctx.gpr[19])) * static_cast<std::int64_t>(static_cast<std::int32_t>(ctx.gpr[2])); ctx.lo = static_cast<std::uint32_t>(product); ctx.hi = static_cast<std::uint32_t>(static_cast<std::uint64_t>(product) >> 32u); }
    ctx.set_gpr(3, ctx.lo);
    ctx.set_gpr(2, rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(72)));
    ctx.set_gpr(3, ctx.gpr[2] + ctx.gpr[3]);
    { const std::int64_t product = static_cast<std::int64_t>(static_cast<std::int32_t>(ctx.gpr[22])) * static_cast<std::int64_t>(static_cast<std::int32_t>(ctx.gpr[18])); ctx.lo = static_cast<std::uint32_t>(product); ctx.hi = static_cast<std::uint32_t>(static_cast<std::uint64_t>(product) >> 32u); }
    ctx.set_gpr(2, ctx.lo);
    ctx.set_gpr(30, ctx.gpr[3] + ctx.gpr[2]);
    ctx.set_gpr(2, ctx.gpr[29] + static_cast<std::uint32_t>(80));
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(64), ctx.gpr[2]);
    ctx.set_gpr(17, 0u + 0u);
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_089AB9D0;
      }
      goto L_089AB9A0;
    }
L_089AB9A0:
    ctx.set_gpr(4, ctx.gpr[30] + 0u);
    ctx.set_gpr(5, rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(64)));
    ctx.set_gpr(6, ctx.gpr[22] + 0u);
    ctx.set_gpr(31, 0x089AB9B4u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0003_entry, 3u, 662u, 0x08812B08u>(ctx, &aot_mem) && ctx.pc == 0x089AB9B4u) goto L_089AB9B4;
    return;
L_089AB9B4:
    { const std::int64_t product = static_cast<std::int64_t>(static_cast<std::int32_t>(ctx.gpr[22])) * static_cast<std::int64_t>(static_cast<std::int32_t>(ctx.gpr[16])); ctx.lo = static_cast<std::uint32_t>(product); ctx.hi = static_cast<std::uint32_t>(static_cast<std::uint64_t>(product) >> 32u); }
    ctx.set_gpr(2, ctx.lo);
    ctx.set_gpr(30, ctx.gpr[30] + ctx.gpr[2]);
    ctx.set_gpr(2, rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(64)));
    ctx.set_gpr(2, ctx.gpr[2] + static_cast<std::uint32_t>(256));
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(64), ctx.gpr[2]);
    ctx.set_gpr(17, ctx.gpr[17] + static_cast<std::uint32_t>(1));
    goto L_089AB9D0;
L_089AB9D0:
    ctx.set_gpr(2, static_cast<std::int32_t>(ctx.gpr[17]) < static_cast<std::int32_t>(ctx.gpr[23]) ? 1u : 0u);
    { const bool branch_taken = ctx.gpr[2] != 0u;
    // nop
      if (branch_taken) {
          goto L_089AB9A0;
      }
      goto L_089AB9DC;
    }
L_089AB9DC:
    ctx.set_gpr(18, ctx.gpr[18] + static_cast<std::uint32_t>(1));
    goto L_089AB9E0;
L_089AB9E0:
    ctx.set_gpr(2, static_cast<std::int32_t>(ctx.gpr[18]) < static_cast<std::int32_t>(ctx.gpr[16]) ? 1u : 0u);
    { const bool branch_taken = ctx.gpr[2] != 0u;
    // nop
      if (branch_taken) {
          goto L_089AB8D0;
      }
      goto L_089AB9EC;
    }
L_089AB9EC:
    ctx.set_gpr(19, ctx.gpr[19] + static_cast<std::uint32_t>(1));
    goto L_089AB9F0;
L_089AB9F0:
    ctx.set_gpr(2, rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(60)));
    ctx.set_gpr(2, static_cast<std::int32_t>(ctx.gpr[19]) < static_cast<std::int32_t>(ctx.gpr[2]) ? 1u : 0u);
    { const bool branch_taken = ctx.gpr[2] != 0u;
    // nop
      if (branch_taken) {
          goto L_089AB8C4;
      }
      goto L_089ABA00;
    }
L_089ABA00:
    ctx.set_gpr(2, 0u + 0u);
    goto L_089ABA04;
L_089ABA04:
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
    ctx.set_gpr(29, ctx.gpr[29] + static_cast<std::uint32_t>(16464));
    jump_target = ctx.gpr[31];
    // nop
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_089ABA38:
    ctx.set_gpr(29, ctx.gpr[29] + static_cast<std::uint32_t>(-16));
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(12), ctx.gpr[31]);
    ctx.set_gpr(6, ctx.gpr[4] + 0u);
    ctx.set_gpr(3, ctx.gpr[5] + 0u);
    ctx.set_gpr(2, rt.memory().aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(8)));
    ctx.set_gpr(5, rt.memory().aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(12)));
    ctx.set_gpr(4, ctx.gpr[2] + 0u);
    ctx.set_gpr(6, rt.memory().aot_load32(ctx.gpr[6] + static_cast<std::uint32_t>(52)));
    ctx.set_gpr(7, rt.memory().aot_load32(ctx.gpr[3] + static_cast<std::uint32_t>(52)));
    ctx.set_gpr(31, 0x089ABA64u);
    // nop
    goto L_089AB73C;
L_089ABA64:
    ctx.set_gpr(31, rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(12)));
    ctx.set_gpr(29, ctx.gpr[29] + static_cast<std::uint32_t>(16));
    jump_target = ctx.gpr[31];
    // nop
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_089ABA74:
    ctx.set_gpr(29, ctx.gpr[29] + static_cast<std::uint32_t>(-64));
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
    ctx.set_gpr(20, ctx.gpr[4] + 0u);
    ctx.set_gpr(19, ctx.gpr[5] + 0u);
    ctx.set_gpr(4, ctx.gpr[19] + 0u);
    ctx.set_gpr(5, 0u + 0u);
    ctx.set_gpr(31, 0x089ABAB8u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0103_entry, 103u, 241u, 0x089A1064u>(ctx, &aot_mem) && ctx.pc == 0x089ABAB8u) goto L_089ABAB8;
    return;
L_089ABAB8:
    ctx.set_gpr(18, rt.memory().aot_load32(ctx.gpr[20] + static_cast<std::uint32_t>(52)));
    ctx.set_gpr(17, rt.memory().aot_load32(ctx.gpr[19] + static_cast<std::uint32_t>(52)));
    ctx.set_gpr(30, rt.memory().aot_load32(ctx.gpr[20] + static_cast<std::uint32_t>(8)));
    ctx.set_gpr(3, rt.memory().aot_load32(ctx.gpr[20] + static_cast<std::uint32_t>(12)));
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(56), ctx.gpr[3]);
    ctx.set_gpr(4, rt.memory().aot_load32(ctx.gpr[20] + static_cast<std::uint32_t>(68)));
    ctx.set_gpr(3, rt.memory().aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(20)));
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(52), ctx.gpr[3]);
    ctx.set_gpr(3, rt.memory().aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(12)));
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(60), ctx.gpr[3]);
    ctx.set_gpr(21, 0u + 0u);
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_089ABCC4;
      }
      goto L_089ABAEC;
    }
L_089ABAEC:
    ctx.set_gpr(3, ctx.gpr[17] + ctx.gpr[30]);
    ctx.set_gpr(16, ctx.gpr[3] + static_cast<std::uint32_t>(-1));
    ctx.set_gpr(3, ctx.gpr[18] + ctx.gpr[30]);
    ctx.set_gpr(22, ctx.gpr[3] + static_cast<std::uint32_t>(-1));
    ctx.set_gpr(23, 0u + 0u);
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_089ABCA4;
      }
      goto L_089ABB08;
    }
L_089ABB08:
    ctx.set_gpr(4, rt.memory().aot_load8(ctx.gpr[22] + static_cast<std::uint32_t>(0)));
    ctx.set_gpr(3, rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(60)));
    ctx.set_gpr(3, static_cast<std::int32_t>(ctx.gpr[4]) < static_cast<std::int32_t>(ctx.gpr[3]) ? 1u : 0u);
    { const bool branch_taken = ctx.gpr[3] != 0u;
    // nop
      if (branch_taken) {
          goto L_089ABB20;
      }
      goto L_089ABB1C;
    }
L_089ABB1C:
    ctx.set_gpr(4, rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(60)));
    goto L_089ABB20;
L_089ABB20:
    ctx.set_gpr(4, ctx.gpr[4] << 2u);
    ctx.set_gpr(3, rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(52)));
    ctx.set_gpr(3, ctx.gpr[3] + ctx.gpr[4]);
    ctx.set_gpr(3, rt.memory().aot_load32(ctx.gpr[3] + static_cast<std::uint32_t>(0)));
    { const bool branch_taken = ctx.gpr[3] != 0u;
    // nop
      if (branch_taken) {
          goto L_089ABB44;
      }
      goto L_089ABB38;
    }
L_089ABB38:
    rt.memory().aot_store8(ctx.gpr[16] + static_cast<std::uint32_t>(0), static_cast<std::uint8_t>(0u));
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_089ABC98;
      }
      goto L_089ABB44;
    }
L_089ABB44:
    ctx.set_gpr(2, 65280u << 16u);
    ctx.set_gpr(2, ctx.gpr[3] & ctx.gpr[2]);
    ctx.set_gpr(2, ctx.gpr[2] >> 24u);
    { const bool branch_taken = static_cast<std::int32_t>(ctx.gpr[2]) < 0;
    // nop
      if (branch_taken) {
          goto L_089ABB68;
      }
      goto L_089ABB58;
    }
L_089ABB58:
    ctx.fpr[0] = std::bit_cast<float>(ctx.gpr[2]);
    ctx.fpr[1] = static_cast<float>(static_cast<std::int32_t>(ctx.fpr_bits(0)));
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_089ABB80;
      }
      goto L_089ABB68;
    }
L_089ABB68:
    ctx.set_gpr(4, ctx.gpr[2] >> 1u);
    ctx.set_gpr(2, ctx.gpr[2] & 1u);
    ctx.set_gpr(4, ctx.gpr[4] | ctx.gpr[2]);
    ctx.fpr[0] = std::bit_cast<float>(ctx.gpr[4]);
    ctx.fpr[1] = static_cast<float>(static_cast<std::int32_t>(ctx.fpr_bits(0)));
    ctx.fpr[1] = ctx.fpr[1] + ctx.fpr[1];
    goto L_089ABB80;
L_089ABB80:
    ctx.set_gpr(2, 17279u << 16u);
    ctx.fpr[0] = std::bit_cast<float>(ctx.gpr[2]);
    ctx.fpr[1] = ctx.fpr[1] / ctx.fpr[0];
    ctx.fpr[0] = std::bit_cast<float>(rt.memory().aot_load32(ctx.gpr[28] + static_cast<std::uint32_t>(-32436)));
    { const float fs = ctx.fpr[0]; const float ft = ctx.fpr[1]; if ((std::isinf(fs) && ft == 0.0f) || (std::isinf(ft) && fs == 0.0f)) ctx.set_fpr_bits(2, 0x7FC00000u); else ctx.fpr[2] = fs * ft; }
    ctx.set_gpr(2, 255u << 16u);
    ctx.set_gpr(2, ctx.gpr[3] & ctx.gpr[2]);
    ctx.set_gpr(2, ctx.gpr[2] >> 16u);
    { const bool branch_taken = static_cast<std::int32_t>(ctx.gpr[2]) < 0;
    // nop
      if (branch_taken) {
          goto L_089ABBB8;
      }
      goto L_089ABBA8;
    }
L_089ABBA8:
    ctx.fpr[0] = std::bit_cast<float>(ctx.gpr[2]);
    ctx.fpr[1] = static_cast<float>(static_cast<std::int32_t>(ctx.fpr_bits(0)));
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_089ABBD0;
      }
      goto L_089ABBB8;
    }
L_089ABBB8:
    ctx.set_gpr(4, ctx.gpr[2] >> 1u);
    ctx.set_gpr(2, ctx.gpr[2] & 1u);
    ctx.set_gpr(4, ctx.gpr[4] | ctx.gpr[2]);
    ctx.fpr[0] = std::bit_cast<float>(ctx.gpr[4]);
    ctx.fpr[1] = static_cast<float>(static_cast<std::int32_t>(ctx.fpr_bits(0)));
    ctx.fpr[1] = ctx.fpr[1] + ctx.fpr[1];
    goto L_089ABBD0;
L_089ABBD0:
    ctx.set_gpr(2, 17279u << 16u);
    ctx.fpr[0] = std::bit_cast<float>(ctx.gpr[2]);
    ctx.fpr[1] = ctx.fpr[1] / ctx.fpr[0];
    ctx.fpr[0] = std::bit_cast<float>(rt.memory().aot_load32(ctx.gpr[28] + static_cast<std::uint32_t>(-32432)));
    { const float fs = ctx.fpr[0]; const float ft = ctx.fpr[1]; if ((std::isinf(fs) && ft == 0.0f) || (std::isinf(ft) && fs == 0.0f)) ctx.set_fpr_bits(0, 0x7FC00000u); else ctx.fpr[0] = fs * ft; }
    ctx.fpr[2] = ctx.fpr[2] + ctx.fpr[0];
    ctx.set_gpr(2, ctx.gpr[3] & 65280u);
    ctx.set_gpr(2, ctx.gpr[2] >> 8u);
    { const bool branch_taken = static_cast<std::int32_t>(ctx.gpr[2]) < 0;
    // nop
      if (branch_taken) {
          goto L_089ABC08;
      }
      goto L_089ABBF8;
    }
L_089ABBF8:
    ctx.fpr[0] = std::bit_cast<float>(ctx.gpr[2]);
    ctx.fpr[1] = static_cast<float>(static_cast<std::int32_t>(ctx.fpr_bits(0)));
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_089ABC20;
      }
      goto L_089ABC08;
    }
L_089ABC08:
    ctx.set_gpr(3, ctx.gpr[2] >> 1u);
    ctx.set_gpr(2, ctx.gpr[2] & 1u);
    ctx.set_gpr(3, ctx.gpr[3] | ctx.gpr[2]);
    ctx.fpr[0] = std::bit_cast<float>(ctx.gpr[3]);
    ctx.fpr[1] = static_cast<float>(static_cast<std::int32_t>(ctx.fpr_bits(0)));
    ctx.fpr[1] = ctx.fpr[1] + ctx.fpr[1];
    goto L_089ABC20;
L_089ABC20:
    ctx.set_gpr(2, 17279u << 16u);
    ctx.fpr[0] = std::bit_cast<float>(ctx.gpr[2]);
    ctx.fpr[1] = ctx.fpr[1] / ctx.fpr[0];
    ctx.fpr[0] = std::bit_cast<float>(rt.memory().aot_load32(ctx.gpr[28] + static_cast<std::uint32_t>(-32428)));
    { const float fs = ctx.fpr[0]; const float ft = ctx.fpr[1]; if ((std::isinf(fs) && ft == 0.0f) || (std::isinf(ft) && fs == 0.0f)) ctx.set_fpr_bits(0, 0x7FC00000u); else ctx.fpr[0] = fs * ft; }
    ctx.fpr[1] = ctx.fpr[0] + ctx.fpr[2];
    ctx.set_gpr(2, 17280u << 16u);
    ctx.fpr[0] = std::bit_cast<float>(ctx.gpr[2]);
    { const float fs = ctx.fpr[0]; const float ft = ctx.fpr[1]; if ((std::isinf(fs) && ft == 0.0f) || (std::isinf(ft) && fs == 0.0f)) ctx.set_fpr_bits(1, 0x7FC00000u); else ctx.fpr[1] = fs * ft; }
    ctx.set_gpr(2, 16128u << 16u);
    ctx.fpr[0] = std::bit_cast<float>(ctx.gpr[2]);
    ctx.fpr[12] = ctx.fpr[0] + ctx.fpr[1];
    ctx.set_gpr(31, 0x089ABC58u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0002_entry, 2u, 379u, 0x0880DEF0u>(ctx, &aot_mem) && ctx.pc == 0x089ABC58u) goto L_089ABC58;
    return;
L_089ABC58:
    ctx.set_gpr(3, 20224u << 16u);
    ctx.fpr[1] = std::bit_cast<float>(ctx.gpr[3]);
    ctx.set_fpu_condition((ctx.fpr[1] <= ctx.fpr[0]));
    // nop
    { const bool branch_taken = ctx.fpu_condition();
    // nop
      if (branch_taken) {
          goto L_089ABC80;
      }
      goto L_089ABC70;
    }
L_089ABC70:
    ctx.set_fpr_bits(0, ctx.fpu_float_to_word(ctx.fpr[0], 1u));
    ctx.set_gpr(3, std::bit_cast<std::uint32_t>(ctx.fpr[0]));
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_089ABC94;
      }
      goto L_089ABC80;
    }
L_089ABC80:
    ctx.fpr[0] = ctx.fpr[0] - ctx.fpr[1];
    ctx.set_fpr_bits(0, ctx.fpu_float_to_word(ctx.fpr[0], 1u));
    ctx.set_gpr(4, std::bit_cast<std::uint32_t>(ctx.fpr[0]));
    ctx.set_gpr(3, 0u + static_cast<std::uint32_t>(-32768));
    ctx.set_gpr(3, ctx.gpr[4] | ctx.gpr[3]);
    goto L_089ABC94;
L_089ABC94:
    rt.memory().aot_store8(ctx.gpr[16] + static_cast<std::uint32_t>(0), static_cast<std::uint8_t>(ctx.gpr[3]));
    goto L_089ABC98;
L_089ABC98:
    ctx.set_gpr(23, ctx.gpr[23] + static_cast<std::uint32_t>(1));
    ctx.set_gpr(16, ctx.gpr[16] + static_cast<std::uint32_t>(-1));
    ctx.set_gpr(22, ctx.gpr[22] + static_cast<std::uint32_t>(-1));
    goto L_089ABCA4;
L_089ABCA4:
    ctx.set_gpr(3, static_cast<std::int32_t>(ctx.gpr[23]) < static_cast<std::int32_t>(ctx.gpr[30]) ? 1u : 0u);
    { const bool branch_taken = ctx.gpr[3] != 0u;
    // nop
      if (branch_taken) {
          goto L_089ABB08;
      }
      goto L_089ABCB0;
    }
L_089ABCB0:
    ctx.set_gpr(21, ctx.gpr[21] + static_cast<std::uint32_t>(1));
    ctx.set_gpr(3, rt.memory().aot_load32(ctx.gpr[19] + static_cast<std::uint32_t>(76)));
    ctx.set_gpr(17, ctx.gpr[17] + ctx.gpr[3]);
    ctx.set_gpr(3, rt.memory().aot_load32(ctx.gpr[20] + static_cast<std::uint32_t>(76)));
    ctx.set_gpr(18, ctx.gpr[18] + ctx.gpr[3]);
    goto L_089ABCC4;
L_089ABCC4:
    ctx.set_gpr(3, rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(56)));
    ctx.set_gpr(3, static_cast<std::int32_t>(ctx.gpr[21]) < static_cast<std::int32_t>(ctx.gpr[3]) ? 1u : 0u);
    { const bool branch_taken = ctx.gpr[3] != 0u;
    // nop
      if (branch_taken) {
          goto L_089ABAEC;
      }
      goto L_089ABCD4;
    }
L_089ABCD4:
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
    ctx.set_gpr(29, ctx.gpr[29] + static_cast<std::uint32_t>(64));
    jump_target = ctx.gpr[31];
    // nop
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_089ABD08:
    ctx.set_gpr(29, ctx.gpr[29] + static_cast<std::uint32_t>(-16));
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(12), ctx.gpr[31]);
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(8), ctx.gpr[18]);
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(4), ctx.gpr[17]);
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(0), ctx.gpr[16]);
    ctx.set_gpr(18, ctx.gpr[4] + 0u);
    ctx.set_gpr(17, ctx.gpr[5] + 0u);
    ctx.set_gpr(16, rt.memory().aot_load32(ctx.gpr[5] + static_cast<std::uint32_t>(52)));
    ctx.set_gpr(5, 0u + static_cast<std::uint32_t>(42));
    ctx.set_gpr(25, rt.memory().aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(0)));
    ctx.set_gpr(25, rt.memory().aot_load32(ctx.gpr[25] + static_cast<std::uint32_t>(120)));
    jump_target = ctx.gpr[25];
    ctx.set_gpr(31, 0x089ABD3Cu);
    // nop
    ctx.pc = jump_target;
    if (rt.invoke_chained_call(ctx, &aot_mem) && ctx.pc == 0x089ABD3Cu) goto L_089ABD3C;
    return;
L_089ABD3C:
    ctx.set_gpr(4, ctx.gpr[18] + 0u);
    ctx.set_gpr(5, ctx.gpr[16] + 0u);
    ctx.set_gpr(31, 0x089ABD4Cu);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0104_entry, 104u, 323u, 0x089A5550u>(ctx, &aot_mem) && ctx.pc == 0x089ABD4Cu) goto L_089ABD4C;
    return;
L_089ABD4C:
    ctx.set_gpr(4, ctx.gpr[18] + 0u);
    ctx.set_gpr(5, 1u << 16u);
    ctx.set_gpr(25, rt.memory().aot_load32(ctx.gpr[18] + static_cast<std::uint32_t>(0)));
    ctx.set_gpr(25, rt.memory().aot_load32(ctx.gpr[25] + static_cast<std::uint32_t>(120)));
    jump_target = ctx.gpr[25];
    ctx.set_gpr(31, 0x089ABD64u);
    // nop
    ctx.pc = jump_target;
    if (rt.invoke_chained_call(ctx, &aot_mem) && ctx.pc == 0x089ABD64u) goto L_089ABD64;
    return;
L_089ABD64:
    ctx.set_gpr(5, rt.memory().aot_load32(ctx.gpr[18] + static_cast<std::uint32_t>(68)));
    ctx.set_gpr(4, ctx.gpr[17] + 0u);
    ctx.set_gpr(31, 0x089ABD74u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0103_entry, 103u, 241u, 0x089A1064u>(ctx, &aot_mem) && ctx.pc == 0x089ABD74u) goto L_089ABD74;
    return;
L_089ABD74:
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
L_089ABD90:
    ctx.set_gpr(8, rt.memory().aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(52)));
    ctx.set_gpr(7, rt.memory().aot_load32(ctx.gpr[5] + static_cast<std::uint32_t>(52)));
    ctx.set_gpr(5, rt.memory().aot_load32(ctx.gpr[5] + static_cast<std::uint32_t>(48)));
    ctx.set_gpr(6, 0u + 0u);
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_089ABDD0;
      }
      goto L_089ABDA8;
    }
L_089ABDA8:
    ctx.set_gpr(3, rt.memory().aot_load8(ctx.gpr[8] + static_cast<std::uint32_t>(1)));
    ctx.set_gpr(3, ctx.gpr[3] << 4u);
    ctx.set_gpr(4, ctx.gpr[3] & 240u);
    ctx.set_gpr(3, rt.memory().aot_load8(ctx.gpr[8] + static_cast<std::uint32_t>(0)));
    ctx.set_gpr(3, ctx.gpr[3] & 15u);
    ctx.set_gpr(3, ctx.gpr[3] | ctx.gpr[4]);
    rt.memory().aot_store8(ctx.gpr[7] + static_cast<std::uint32_t>(0), static_cast<std::uint8_t>(ctx.gpr[3]));
    ctx.set_gpr(8, ctx.gpr[8] + static_cast<std::uint32_t>(2));
    ctx.set_gpr(7, ctx.gpr[7] + static_cast<std::uint32_t>(1));
    ctx.set_gpr(6, ctx.gpr[6] + static_cast<std::uint32_t>(1));
    goto L_089ABDD0;
L_089ABDD0:
    ctx.set_gpr(3, static_cast<std::int32_t>(ctx.gpr[6]) < static_cast<std::int32_t>(ctx.gpr[5]) ? 1u : 0u);
    { const bool branch_taken = ctx.gpr[3] != 0u;
    // nop
      if (branch_taken) {
          goto L_089ABDA8;
      }
      goto L_089ABDDC;
    }
L_089ABDDC:
    jump_target = ctx.gpr[31];
    // nop
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_089ABDE4:
    ctx.set_gpr(29, ctx.gpr[29] + static_cast<std::uint32_t>(-16));
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(12), ctx.gpr[31]);
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(8), ctx.gpr[16]);
    ctx.set_gpr(16, ctx.gpr[4] + 0u);
    ctx.set_gpr(5, 0u + static_cast<std::uint32_t>(7));
    ctx.set_gpr(6, 2203u << 16u);
    ctx.set_gpr(6, ctx.gpr[6] + static_cast<std::uint32_t>(-16524));
    ctx.set_gpr(31, 0x089ABE08u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0104_entry, 104u, 513u, 0x089A6434u>(ctx, &aot_mem) && ctx.pc == 0x089ABE08u) goto L_089ABE08;
    return;
L_089ABE08:
    ctx.set_gpr(4, ctx.gpr[16] + 0u);
    ctx.set_gpr(5, 0u + static_cast<std::uint32_t>(43));
    ctx.set_gpr(6, 2203u << 16u);
    ctx.set_gpr(6, ctx.gpr[6] + static_cast<std::uint32_t>(-16664));
    ctx.set_gpr(31, 0x089ABE20u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0104_entry, 104u, 513u, 0x089A6434u>(ctx, &aot_mem) && ctx.pc == 0x089ABE20u) goto L_089ABE20;
    return;
L_089ABE20:
    ctx.set_gpr(4, ctx.gpr[16] + 0u);
    ctx.set_gpr(5, 0u + static_cast<std::uint32_t>(46));
    ctx.set_gpr(6, 2203u << 16u);
    ctx.set_gpr(6, ctx.gpr[6] + static_cast<std::uint32_t>(-16288));
    ctx.set_gpr(31, 0x089ABE38u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0104_entry, 104u, 513u, 0x089A6434u>(ctx, &aot_mem) && ctx.pc == 0x089ABE38u) goto L_089ABE38;
    return;
L_089ABE38:
    ctx.set_gpr(4, ctx.gpr[16] + 0u);
    ctx.set_gpr(5, 0u + static_cast<std::uint32_t>(103));
    ctx.set_gpr(6, 2203u << 16u);
    ctx.set_gpr(6, ctx.gpr[6] + static_cast<std::uint32_t>(-16228));
    ctx.set_gpr(31, 0x089ABE50u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0104_entry, 104u, 594u, 0x089A6A24u>(ctx, &aot_mem) && ctx.pc == 0x089ABE50u) goto L_089ABE50;
    return;
L_089ABE50:
    ctx.set_gpr(31, rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(12)));
    ctx.set_gpr(16, rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(8)));
    ctx.set_gpr(29, ctx.gpr[29] + static_cast<std::uint32_t>(16));
    jump_target = ctx.gpr[31];
    // nop
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_089ABE64:
    ctx.set_gpr(2, 1u << 16u);
    ctx.set_gpr(2, ctx.gpr[2] | 1u);
    jump_target = ctx.gpr[31];
    // nop
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_089ABE74:
    ctx.set_gpr(29, ctx.gpr[29] + static_cast<std::uint32_t>(-16));
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(12), ctx.gpr[31]);
    ctx.set_gpr(6, ctx.gpr[5] + 0u);
    ctx.set_gpr(2, rt.memory().aot_load32(ctx.gpr[5] + static_cast<std::uint32_t>(8)));
    ctx.set_gpr(5, static_cast<std::uint32_t>(static_cast<std::int32_t>(ctx.gpr[2]) >> 1u));
    { const bool branch_taken = static_cast<std::int32_t>(ctx.gpr[2]) >= 0;
    // nop
      if (branch_taken) {
          goto L_089ABE98;
      }
      goto L_089ABE90;
    }
L_089ABE90:
    ctx.set_gpr(2, ctx.gpr[2] + static_cast<std::uint32_t>(1));
    ctx.set_gpr(5, static_cast<std::uint32_t>(static_cast<std::int32_t>(ctx.gpr[2]) >> 1u));
    goto L_089ABE98;
L_089ABE98:
    ctx.set_gpr(4, 0u + static_cast<std::uint32_t>(1));
    ctx.set_gpr(31, 0x089ABEA4u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0104_entry, 104u, 418u, 0x089A5D7Cu>(ctx, &aot_mem) && ctx.pc == 0x089ABEA4u) goto L_089ABEA4;
    return;
L_089ABEA4:
    ctx.set_gpr(31, rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(12)));
    ctx.set_gpr(29, ctx.gpr[29] + static_cast<std::uint32_t>(16));
    jump_target = ctx.gpr[31];
    // nop
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_089ABEB4:
    ctx.set_gpr(2, 0u + static_cast<std::uint32_t>(1));
    jump_target = ctx.gpr[31];
    // nop
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_089ABEC0:
    rt.memory().aot_store32(ctx.gpr[5] + static_cast<std::uint32_t>(64), 0u);
    ctx.set_gpr(3, 0u + static_cast<std::uint32_t>(4));
    rt.memory().aot_store32(ctx.gpr[5] + static_cast<std::uint32_t>(72), ctx.gpr[3]);
    rt.memory().aot_store32(ctx.gpr[5] + static_cast<std::uint32_t>(28), 0u);
    rt.memory().aot_store32(ctx.gpr[5] + static_cast<std::uint32_t>(32), 0u);
    rt.memory().aot_store32(ctx.gpr[5] + static_cast<std::uint32_t>(36), 0u);
    rt.memory().aot_store32(ctx.gpr[5] + static_cast<std::uint32_t>(40), 0u);
    rt.memory().aot_store32(ctx.gpr[5] + static_cast<std::uint32_t>(84), 0u);
    jump_target = ctx.gpr[31];
    // nop
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_089ABEE8:
    ctx.set_gpr(29, ctx.gpr[29] + static_cast<std::uint32_t>(-16));
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(12), ctx.gpr[31]);
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(8), ctx.gpr[18]);
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(4), ctx.gpr[17]);
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(0), ctx.gpr[16]);
    ctx.set_gpr(18, ctx.gpr[4] + 0u);
    ctx.set_gpr(17, ctx.gpr[5] + 0u);
    ctx.set_gpr(16, rt.memory().aot_load32(ctx.gpr[5] + static_cast<std::uint32_t>(52)));
    ctx.set_gpr(5, 0u + static_cast<std::uint32_t>(43));
    ctx.set_gpr(25, rt.memory().aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(0)));
    ctx.set_gpr(25, rt.memory().aot_load32(ctx.gpr[25] + static_cast<std::uint32_t>(120)));
    jump_target = ctx.gpr[25];
    ctx.set_gpr(31, 0x089ABF1Cu);
    // nop
    ctx.pc = jump_target;
    if (rt.invoke_chained_call(ctx, &aot_mem) && ctx.pc == 0x089ABF1Cu) goto L_089ABF1C;
    return;
L_089ABF1C:
    ctx.set_gpr(4, ctx.gpr[18] + 0u);
    ctx.set_gpr(5, ctx.gpr[16] + 0u);
    ctx.set_gpr(31, 0x089ABF2Cu);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0104_entry, 104u, 323u, 0x089A5550u>(ctx, &aot_mem) && ctx.pc == 0x089ABF2Cu) goto L_089ABF2C;
    return;
L_089ABF2C:
    ctx.set_gpr(4, ctx.gpr[18] + 0u);
    ctx.set_gpr(2, 1u << 16u);
    ctx.set_gpr(5, ctx.gpr[2] | 1u);
    ctx.set_gpr(25, rt.memory().aot_load32(ctx.gpr[18] + static_cast<std::uint32_t>(0)));
    ctx.set_gpr(25, rt.memory().aot_load32(ctx.gpr[25] + static_cast<std::uint32_t>(120)));
    jump_target = ctx.gpr[25];
    ctx.set_gpr(31, 0x089ABF48u);
    // nop
    ctx.pc = jump_target;
    if (rt.invoke_chained_call(ctx, &aot_mem) && ctx.pc == 0x089ABF48u) goto L_089ABF48;
    return;
L_089ABF48:
    ctx.set_gpr(5, rt.memory().aot_load32(ctx.gpr[18] + static_cast<std::uint32_t>(68)));
    ctx.set_gpr(4, ctx.gpr[17] + 0u);
    ctx.set_gpr(31, 0x089ABF58u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0103_entry, 103u, 241u, 0x089A1064u>(ctx, &aot_mem) && ctx.pc == 0x089ABF58u) goto L_089ABF58;
    return;
L_089ABF58:
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
L_089ABF74:
    ctx.set_gpr(15, rt.memory().aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(52)));
    ctx.set_gpr(14, rt.memory().aot_load32(ctx.gpr[5] + static_cast<std::uint32_t>(52)));
    ctx.set_gpr(8, rt.memory().aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(8)));
    ctx.set_gpr(7, rt.memory().aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(12)));
    ctx.set_gpr(3, rt.memory().aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(68)));
    ctx.set_gpr(6, rt.memory().aot_load32(ctx.gpr[3] + static_cast<std::uint32_t>(20)));
    ctx.set_gpr(13, rt.memory().aot_load32(ctx.gpr[3] + static_cast<std::uint32_t>(12)));
    ctx.set_gpr(12, 0u + 0u);
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          (void)rt.invoke_chained_direct<&recomp_unit_0106_entry, 106u, 6u, 0x089AC04Cu>(ctx, &aot_mem); return;
      }
      goto L_089ABF9C;
    }
L_089ABF9C:
    ctx.set_gpr(3, ctx.gpr[8] << 2u);
    ctx.set_gpr(3, ctx.gpr[14] + ctx.gpr[3]);
    ctx.set_gpr(11, ctx.gpr[3] + static_cast<std::uint32_t>(-4));
    ctx.set_gpr(3, static_cast<std::uint32_t>(static_cast<std::int32_t>(ctx.gpr[8]) >> 1u));
    { const bool branch_taken = static_cast<std::int32_t>(ctx.gpr[8]) >= 0;
    // nop
      if (branch_taken) {
          goto L_089ABFBC;
      }
      goto L_089ABFB4;
    }
L_089ABFB4:
    ctx.set_gpr(3, ctx.gpr[8] + static_cast<std::uint32_t>(1));
    ctx.set_gpr(3, static_cast<std::uint32_t>(static_cast<std::int32_t>(ctx.gpr[3]) >> 1u));
    goto L_089ABFBC;
L_089ABFBC:
    ctx.set_gpr(9, ctx.gpr[15] + ctx.gpr[3]);
    ctx.set_gpr(10, ctx.gpr[9] + static_cast<std::uint32_t>(-1));
    ctx.set_gpr(9, 0u + 0u);
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          (void)rt.invoke_chained_direct<&recomp_unit_0106_entry, 106u, 4u, 0x089AC02Cu>(ctx, &aot_mem); return;
      }
      goto L_089ABFD0;
    }
L_089ABFD0:
    ctx.set_gpr(24, rt.memory().aot_load8(ctx.gpr[10] + static_cast<std::uint32_t>(0)));
    ctx.set_gpr(25, static_cast<std::uint32_t>(static_cast<std::int32_t>(ctx.gpr[24]) >> 4u));
    ctx.set_gpr(24, static_cast<std::int32_t>(ctx.gpr[25]) < static_cast<std::int32_t>(ctx.gpr[13]) ? 1u : 0u);
    { const bool branch_taken = ctx.gpr[24] != 0u;
    // nop
      if (branch_taken) {
          goto L_089ABFE8;
      }
      goto L_089ABFE4;
    }
L_089ABFE4:
    ctx.set_gpr(25, ctx.gpr[13] + 0u);
    goto L_089ABFE8;
L_089ABFE8:
    ctx.set_gpr(24, ctx.gpr[25] << 2u);
    ctx.set_gpr(24, ctx.gpr[6] + ctx.gpr[24]);
    ctx.set_gpr(24, rt.memory().aot_load32(ctx.gpr[24] + static_cast<std::uint32_t>(0)));
    rt.memory().aot_store32(ctx.gpr[11] + static_cast<std::uint32_t>(0), ctx.gpr[24]);
    ctx.set_gpr(24, rt.memory().aot_load8(ctx.gpr[10] + static_cast<std::uint32_t>(0)));
    ctx.set_gpr(25, ctx.gpr[24] & 15u);
    ctx.pc = 0x089AC000u; return;
}

void recomp_unit_0105(Runtime &rt, AllegrexContext &ctx) {
    auto aot_mem = rt.memory().aot_fast_view();
    recomp_unit_0105_entry(rt, ctx, 0u, aot_mem);
}

void register_generated_unit_105(Runtime &runtime) {
    runtime.register_generated_unit(105u, 0x089A8000u, 16384u, &recomp_unit_0105, &recomp_unit_0105_entry);
    runtime.register_function(0x089A8000u, &recomp_unit_0105, "recomp_unit_0105");
    runtime.register_function(0x089A800Cu, &recomp_unit_0105, "recomp_unit_0105");
    runtime.register_function(0x089A8014u, &recomp_unit_0105, "recomp_unit_0105");
    runtime.register_function(0x089A8030u, &recomp_unit_0105, "recomp_unit_0105");
    runtime.register_function(0x089A8040u, &recomp_unit_0105, "recomp_unit_0105");
    runtime.register_function(0x089A8058u, &recomp_unit_0105, "recomp_unit_0105");
    runtime.register_function(0x089A807Cu, &recomp_unit_0105, "recomp_unit_0105");
    runtime.register_function(0x089A808Cu, &recomp_unit_0105, "recomp_unit_0105");
    runtime.register_function(0x089A80A0u, &recomp_unit_0105, "recomp_unit_0105");
    runtime.register_function(0x089A80B4u, &recomp_unit_0105, "recomp_unit_0105");
    runtime.register_function(0x089A80C0u, &recomp_unit_0105, "recomp_unit_0105");
    runtime.register_function(0x089A80C8u, &recomp_unit_0105, "recomp_unit_0105");
    runtime.register_function(0x089A80E4u, &recomp_unit_0105, "recomp_unit_0105");
    runtime.register_function(0x089A80F4u, &recomp_unit_0105, "recomp_unit_0105");
    runtime.register_function(0x089A810Cu, &recomp_unit_0105, "recomp_unit_0105");
    runtime.register_function(0x089A8130u, &recomp_unit_0105, "recomp_unit_0105");
    runtime.register_function(0x089A8140u, &recomp_unit_0105, "recomp_unit_0105");
    runtime.register_function(0x089A8154u, &recomp_unit_0105, "recomp_unit_0105");
    runtime.register_function(0x089A8168u, &recomp_unit_0105, "recomp_unit_0105");
    runtime.register_function(0x089A8174u, &recomp_unit_0105, "recomp_unit_0105");
    runtime.register_function(0x089A817Cu, &recomp_unit_0105, "recomp_unit_0105");
    runtime.register_function(0x089A8198u, &recomp_unit_0105, "recomp_unit_0105");
    runtime.register_function(0x089A81A8u, &recomp_unit_0105, "recomp_unit_0105");
    runtime.register_function(0x089A81C0u, &recomp_unit_0105, "recomp_unit_0105");
    runtime.register_function(0x089A81E4u, &recomp_unit_0105, "recomp_unit_0105");
    runtime.register_function(0x089A81F4u, &recomp_unit_0105, "recomp_unit_0105");
    runtime.register_function(0x089A8208u, &recomp_unit_0105, "recomp_unit_0105");
    runtime.register_function(0x089A821Cu, &recomp_unit_0105, "recomp_unit_0105");
    runtime.register_function(0x089A8228u, &recomp_unit_0105, "recomp_unit_0105");
    runtime.register_function(0x089A8230u, &recomp_unit_0105, "recomp_unit_0105");
    runtime.register_function(0x089A824Cu, &recomp_unit_0105, "recomp_unit_0105");
    runtime.register_function(0x089A825Cu, &recomp_unit_0105, "recomp_unit_0105");
    runtime.register_function(0x089A8274u, &recomp_unit_0105, "recomp_unit_0105");
    runtime.register_function(0x089A8298u, &recomp_unit_0105, "recomp_unit_0105");
    runtime.register_function(0x089A82A8u, &recomp_unit_0105, "recomp_unit_0105");
    runtime.register_function(0x089A82BCu, &recomp_unit_0105, "recomp_unit_0105");
    runtime.register_function(0x089A82D0u, &recomp_unit_0105, "recomp_unit_0105");
    runtime.register_function(0x089A82DCu, &recomp_unit_0105, "recomp_unit_0105");
    runtime.register_function(0x089A82E4u, &recomp_unit_0105, "recomp_unit_0105");
    runtime.register_function(0x089A8300u, &recomp_unit_0105, "recomp_unit_0105");
    runtime.register_function(0x089A8310u, &recomp_unit_0105, "recomp_unit_0105");
    runtime.register_function(0x089A8328u, &recomp_unit_0105, "recomp_unit_0105");
    runtime.register_function(0x089A834Cu, &recomp_unit_0105, "recomp_unit_0105");
    runtime.register_function(0x089A835Cu, &recomp_unit_0105, "recomp_unit_0105");
    runtime.register_function(0x089A8370u, &recomp_unit_0105, "recomp_unit_0105");
    runtime.register_function(0x089A8384u, &recomp_unit_0105, "recomp_unit_0105");
    runtime.register_function(0x089A8390u, &recomp_unit_0105, "recomp_unit_0105");
    runtime.register_function(0x089A8398u, &recomp_unit_0105, "recomp_unit_0105");
    runtime.register_function(0x089A83ACu, &recomp_unit_0105, "recomp_unit_0105");
    runtime.register_function(0x089A83D0u, &recomp_unit_0105, "recomp_unit_0105");
    runtime.register_function(0x089A83E8u, &recomp_unit_0105, "recomp_unit_0105");
    runtime.register_function(0x089A83F4u, &recomp_unit_0105, "recomp_unit_0105");
    runtime.register_function(0x089A8408u, &recomp_unit_0105, "recomp_unit_0105");
    runtime.register_function(0x089A840Cu, &recomp_unit_0105, "recomp_unit_0105");
    runtime.register_function(0x089A8418u, &recomp_unit_0105, "recomp_unit_0105");
    runtime.register_function(0x089A8428u, &recomp_unit_0105, "recomp_unit_0105");
    runtime.register_function(0x089A8434u, &recomp_unit_0105, "recomp_unit_0105");
    runtime.register_function(0x089A8444u, &recomp_unit_0105, "recomp_unit_0105");
    runtime.register_function(0x089A846Cu, &recomp_unit_0105, "recomp_unit_0105");
    runtime.register_function(0x089A8470u, &recomp_unit_0105, "recomp_unit_0105");
    runtime.register_function(0x089A847Cu, &recomp_unit_0105, "recomp_unit_0105");
    runtime.register_function(0x089A8480u, &recomp_unit_0105, "recomp_unit_0105");
    runtime.register_function(0x089A848Cu, &recomp_unit_0105, "recomp_unit_0105");
    runtime.register_function(0x089A84A0u, &recomp_unit_0105, "recomp_unit_0105");
    runtime.register_function(0x089A84B0u, &recomp_unit_0105, "recomp_unit_0105");
    runtime.register_function(0x089A84C8u, &recomp_unit_0105, "recomp_unit_0105");
    runtime.register_function(0x089A84F8u, &recomp_unit_0105, "recomp_unit_0105");
    runtime.register_function(0x089A8548u, &recomp_unit_0105, "recomp_unit_0105");
    runtime.register_function(0x089A8570u, &recomp_unit_0105, "recomp_unit_0105");
    runtime.register_function(0x089A8580u, &recomp_unit_0105, "recomp_unit_0105");
    runtime.register_function(0x089A8598u, &recomp_unit_0105, "recomp_unit_0105");
    runtime.register_function(0x089A85C0u, &recomp_unit_0105, "recomp_unit_0105");
    runtime.register_function(0x089A85D0u, &recomp_unit_0105, "recomp_unit_0105");
    runtime.register_function(0x089A85E4u, &recomp_unit_0105, "recomp_unit_0105");
    runtime.register_function(0x089A85FCu, &recomp_unit_0105, "recomp_unit_0105");
    runtime.register_function(0x089A860Cu, &recomp_unit_0105, "recomp_unit_0105");
    runtime.register_function(0x089A8624u, &recomp_unit_0105, "recomp_unit_0105");
    runtime.register_function(0x089A864Cu, &recomp_unit_0105, "recomp_unit_0105");
    runtime.register_function(0x089A865Cu, &recomp_unit_0105, "recomp_unit_0105");
    runtime.register_function(0x089A8670u, &recomp_unit_0105, "recomp_unit_0105");
    runtime.register_function(0x089A868Cu, &recomp_unit_0105, "recomp_unit_0105");
    runtime.register_function(0x089A869Cu, &recomp_unit_0105, "recomp_unit_0105");
    runtime.register_function(0x089A86B4u, &recomp_unit_0105, "recomp_unit_0105");
    runtime.register_function(0x089A86DCu, &recomp_unit_0105, "recomp_unit_0105");
    runtime.register_function(0x089A86ECu, &recomp_unit_0105, "recomp_unit_0105");
    runtime.register_function(0x089A8700u, &recomp_unit_0105, "recomp_unit_0105");
    runtime.register_function(0x089A8734u, &recomp_unit_0105, "recomp_unit_0105");
    runtime.register_function(0x089A8744u, &recomp_unit_0105, "recomp_unit_0105");
    runtime.register_function(0x089A875Cu, &recomp_unit_0105, "recomp_unit_0105");
    runtime.register_function(0x089A8784u, &recomp_unit_0105, "recomp_unit_0105");
    runtime.register_function(0x089A8794u, &recomp_unit_0105, "recomp_unit_0105");
    runtime.register_function(0x089A87A8u, &recomp_unit_0105, "recomp_unit_0105");
    runtime.register_function(0x089A87C0u, &recomp_unit_0105, "recomp_unit_0105");
    runtime.register_function(0x089A87D0u, &recomp_unit_0105, "recomp_unit_0105");
    runtime.register_function(0x089A87E8u, &recomp_unit_0105, "recomp_unit_0105");
    runtime.register_function(0x089A8810u, &recomp_unit_0105, "recomp_unit_0105");
    runtime.register_function(0x089A8820u, &recomp_unit_0105, "recomp_unit_0105");
    runtime.register_function(0x089A8834u, &recomp_unit_0105, "recomp_unit_0105");
    runtime.register_function(0x089A8850u, &recomp_unit_0105, "recomp_unit_0105");
    runtime.register_function(0x089A8860u, &recomp_unit_0105, "recomp_unit_0105");
    runtime.register_function(0x089A8878u, &recomp_unit_0105, "recomp_unit_0105");
    runtime.register_function(0x089A88A0u, &recomp_unit_0105, "recomp_unit_0105");
    runtime.register_function(0x089A88B0u, &recomp_unit_0105, "recomp_unit_0105");
    runtime.register_function(0x089A88C4u, &recomp_unit_0105, "recomp_unit_0105");
    runtime.register_function(0x089A88D8u, &recomp_unit_0105, "recomp_unit_0105");
    runtime.register_function(0x089A88ECu, &recomp_unit_0105, "recomp_unit_0105");
    runtime.register_function(0x089A8900u, &recomp_unit_0105, "recomp_unit_0105");
    runtime.register_function(0x089A8914u, &recomp_unit_0105, "recomp_unit_0105");
    runtime.register_function(0x089A8928u, &recomp_unit_0105, "recomp_unit_0105");
    runtime.register_function(0x089A8938u, &recomp_unit_0105, "recomp_unit_0105");
    runtime.register_function(0x089A894Cu, &recomp_unit_0105, "recomp_unit_0105");
    runtime.register_function(0x089A8960u, &recomp_unit_0105, "recomp_unit_0105");
    runtime.register_function(0x089A8974u, &recomp_unit_0105, "recomp_unit_0105");
    runtime.register_function(0x089A8980u, &recomp_unit_0105, "recomp_unit_0105");
    runtime.register_function(0x089A8990u, &recomp_unit_0105, "recomp_unit_0105");
    runtime.register_function(0x089A89B8u, &recomp_unit_0105, "recomp_unit_0105");
    runtime.register_function(0x089A89C8u, &recomp_unit_0105, "recomp_unit_0105");
    runtime.register_function(0x089A89E0u, &recomp_unit_0105, "recomp_unit_0105");
    runtime.register_function(0x089A8A08u, &recomp_unit_0105, "recomp_unit_0105");
    runtime.register_function(0x089A8A18u, &recomp_unit_0105, "recomp_unit_0105");
    runtime.register_function(0x089A8A2Cu, &recomp_unit_0105, "recomp_unit_0105");
    runtime.register_function(0x089A8A44u, &recomp_unit_0105, "recomp_unit_0105");
    runtime.register_function(0x089A8A54u, &recomp_unit_0105, "recomp_unit_0105");
    runtime.register_function(0x089A8A6Cu, &recomp_unit_0105, "recomp_unit_0105");
    runtime.register_function(0x089A8A94u, &recomp_unit_0105, "recomp_unit_0105");
    runtime.register_function(0x089A8AA4u, &recomp_unit_0105, "recomp_unit_0105");
    runtime.register_function(0x089A8AB8u, &recomp_unit_0105, "recomp_unit_0105");
    runtime.register_function(0x089A8AD4u, &recomp_unit_0105, "recomp_unit_0105");
    runtime.register_function(0x089A8AE4u, &recomp_unit_0105, "recomp_unit_0105");
    runtime.register_function(0x089A8AFCu, &recomp_unit_0105, "recomp_unit_0105");
    runtime.register_function(0x089A8B24u, &recomp_unit_0105, "recomp_unit_0105");
    runtime.register_function(0x089A8B34u, &recomp_unit_0105, "recomp_unit_0105");
    runtime.register_function(0x089A8B48u, &recomp_unit_0105, "recomp_unit_0105");
    runtime.register_function(0x089A8B7Cu, &recomp_unit_0105, "recomp_unit_0105");
    runtime.register_function(0x089A8B8Cu, &recomp_unit_0105, "recomp_unit_0105");
    runtime.register_function(0x089A8BA4u, &recomp_unit_0105, "recomp_unit_0105");
    runtime.register_function(0x089A8BCCu, &recomp_unit_0105, "recomp_unit_0105");
    runtime.register_function(0x089A8BDCu, &recomp_unit_0105, "recomp_unit_0105");
    runtime.register_function(0x089A8BF0u, &recomp_unit_0105, "recomp_unit_0105");
    runtime.register_function(0x089A8C08u, &recomp_unit_0105, "recomp_unit_0105");
    runtime.register_function(0x089A8C18u, &recomp_unit_0105, "recomp_unit_0105");
    runtime.register_function(0x089A8C30u, &recomp_unit_0105, "recomp_unit_0105");
    runtime.register_function(0x089A8C58u, &recomp_unit_0105, "recomp_unit_0105");
    runtime.register_function(0x089A8C68u, &recomp_unit_0105, "recomp_unit_0105");
    runtime.register_function(0x089A8C7Cu, &recomp_unit_0105, "recomp_unit_0105");
    runtime.register_function(0x089A8C98u, &recomp_unit_0105, "recomp_unit_0105");
    runtime.register_function(0x089A8CA8u, &recomp_unit_0105, "recomp_unit_0105");
    runtime.register_function(0x089A8CC0u, &recomp_unit_0105, "recomp_unit_0105");
    runtime.register_function(0x089A8CE8u, &recomp_unit_0105, "recomp_unit_0105");
    runtime.register_function(0x089A8CF8u, &recomp_unit_0105, "recomp_unit_0105");
    runtime.register_function(0x089A8D0Cu, &recomp_unit_0105, "recomp_unit_0105");
    runtime.register_function(0x089A8D30u, &recomp_unit_0105, "recomp_unit_0105");
    runtime.register_function(0x089A8D44u, &recomp_unit_0105, "recomp_unit_0105");
    runtime.register_function(0x089A8D60u, &recomp_unit_0105, "recomp_unit_0105");
    runtime.register_function(0x089A8D6Cu, &recomp_unit_0105, "recomp_unit_0105");
    runtime.register_function(0x089A8D74u, &recomp_unit_0105, "recomp_unit_0105");
    runtime.register_function(0x089A8D7Cu, &recomp_unit_0105, "recomp_unit_0105");
    runtime.register_function(0x089A8D88u, &recomp_unit_0105, "recomp_unit_0105");
    runtime.register_function(0x089A8D94u, &recomp_unit_0105, "recomp_unit_0105");
    runtime.register_function(0x089A8D9Cu, &recomp_unit_0105, "recomp_unit_0105");
    runtime.register_function(0x089A8DA4u, &recomp_unit_0105, "recomp_unit_0105");
    runtime.register_function(0x089A8DB4u, &recomp_unit_0105, "recomp_unit_0105");
    runtime.register_function(0x089A8DD4u, &recomp_unit_0105, "recomp_unit_0105");
    runtime.register_function(0x089A8DF0u, &recomp_unit_0105, "recomp_unit_0105");
    runtime.register_function(0x089A8E2Cu, &recomp_unit_0105, "recomp_unit_0105");
    runtime.register_function(0x089A8E38u, &recomp_unit_0105, "recomp_unit_0105");
    runtime.register_function(0x089A8E44u, &recomp_unit_0105, "recomp_unit_0105");
    runtime.register_function(0x089A8E58u, &recomp_unit_0105, "recomp_unit_0105");
    runtime.register_function(0x089A8E7Cu, &recomp_unit_0105, "recomp_unit_0105");
    runtime.register_function(0x089A8E98u, &recomp_unit_0105, "recomp_unit_0105");
    runtime.register_function(0x089A8EB0u, &recomp_unit_0105, "recomp_unit_0105");
    runtime.register_function(0x089A8EC0u, &recomp_unit_0105, "recomp_unit_0105");
    runtime.register_function(0x089A8ED8u, &recomp_unit_0105, "recomp_unit_0105");
    runtime.register_function(0x089A8EFCu, &recomp_unit_0105, "recomp_unit_0105");
    runtime.register_function(0x089A8F0Cu, &recomp_unit_0105, "recomp_unit_0105");
    runtime.register_function(0x089A8F20u, &recomp_unit_0105, "recomp_unit_0105");
    runtime.register_function(0x089A8F38u, &recomp_unit_0105, "recomp_unit_0105");
    runtime.register_function(0x089A8F48u, &recomp_unit_0105, "recomp_unit_0105");
    runtime.register_function(0x089A8F60u, &recomp_unit_0105, "recomp_unit_0105");
    runtime.register_function(0x089A8F84u, &recomp_unit_0105, "recomp_unit_0105");
    runtime.register_function(0x089A8F94u, &recomp_unit_0105, "recomp_unit_0105");
    runtime.register_function(0x089A8FA8u, &recomp_unit_0105, "recomp_unit_0105");
    runtime.register_function(0x089A8FC0u, &recomp_unit_0105, "recomp_unit_0105");
    runtime.register_function(0x089A8FD0u, &recomp_unit_0105, "recomp_unit_0105");
    runtime.register_function(0x089A8FE8u, &recomp_unit_0105, "recomp_unit_0105");
    runtime.register_function(0x089A900Cu, &recomp_unit_0105, "recomp_unit_0105");
    runtime.register_function(0x089A901Cu, &recomp_unit_0105, "recomp_unit_0105");
    runtime.register_function(0x089A9030u, &recomp_unit_0105, "recomp_unit_0105");
    runtime.register_function(0x089A903Cu, &recomp_unit_0105, "recomp_unit_0105");
    runtime.register_function(0x089A9054u, &recomp_unit_0105, "recomp_unit_0105");
    runtime.register_function(0x089A9064u, &recomp_unit_0105, "recomp_unit_0105");
    runtime.register_function(0x089A907Cu, &recomp_unit_0105, "recomp_unit_0105");
    runtime.register_function(0x089A90A0u, &recomp_unit_0105, "recomp_unit_0105");
    runtime.register_function(0x089A90B0u, &recomp_unit_0105, "recomp_unit_0105");
    runtime.register_function(0x089A90C4u, &recomp_unit_0105, "recomp_unit_0105");
    runtime.register_function(0x089A90DCu, &recomp_unit_0105, "recomp_unit_0105");
    runtime.register_function(0x089A90ECu, &recomp_unit_0105, "recomp_unit_0105");
    runtime.register_function(0x089A9104u, &recomp_unit_0105, "recomp_unit_0105");
    runtime.register_function(0x089A9128u, &recomp_unit_0105, "recomp_unit_0105");
    runtime.register_function(0x089A9138u, &recomp_unit_0105, "recomp_unit_0105");
    runtime.register_function(0x089A914Cu, &recomp_unit_0105, "recomp_unit_0105");
    runtime.register_function(0x089A9164u, &recomp_unit_0105, "recomp_unit_0105");
    runtime.register_function(0x089A9174u, &recomp_unit_0105, "recomp_unit_0105");
    runtime.register_function(0x089A918Cu, &recomp_unit_0105, "recomp_unit_0105");
    runtime.register_function(0x089A91B0u, &recomp_unit_0105, "recomp_unit_0105");
    runtime.register_function(0x089A91C0u, &recomp_unit_0105, "recomp_unit_0105");
    runtime.register_function(0x089A91D4u, &recomp_unit_0105, "recomp_unit_0105");
    runtime.register_function(0x089A91E0u, &recomp_unit_0105, "recomp_unit_0105");
    runtime.register_function(0x089A91ECu, &recomp_unit_0105, "recomp_unit_0105");
    runtime.register_function(0x089A91F8u, &recomp_unit_0105, "recomp_unit_0105");
    runtime.register_function(0x089A9204u, &recomp_unit_0105, "recomp_unit_0105");
    runtime.register_function(0x089A9210u, &recomp_unit_0105, "recomp_unit_0105");
    runtime.register_function(0x089A921Cu, &recomp_unit_0105, "recomp_unit_0105");
    runtime.register_function(0x089A9230u, &recomp_unit_0105, "recomp_unit_0105");
    runtime.register_function(0x089A9240u, &recomp_unit_0105, "recomp_unit_0105");
    runtime.register_function(0x089A925Cu, &recomp_unit_0105, "recomp_unit_0105");
    runtime.register_function(0x089A926Cu, &recomp_unit_0105, "recomp_unit_0105");
    runtime.register_function(0x089A9284u, &recomp_unit_0105, "recomp_unit_0105");
    runtime.register_function(0x089A92A8u, &recomp_unit_0105, "recomp_unit_0105");
    runtime.register_function(0x089A92B8u, &recomp_unit_0105, "recomp_unit_0105");
    runtime.register_function(0x089A92CCu, &recomp_unit_0105, "recomp_unit_0105");
    runtime.register_function(0x089A92E0u, &recomp_unit_0105, "recomp_unit_0105");
    runtime.register_function(0x089A92ECu, &recomp_unit_0105, "recomp_unit_0105");
    runtime.register_function(0x089A92F4u, &recomp_unit_0105, "recomp_unit_0105");
    runtime.register_function(0x089A9310u, &recomp_unit_0105, "recomp_unit_0105");
    runtime.register_function(0x089A9320u, &recomp_unit_0105, "recomp_unit_0105");
    runtime.register_function(0x089A9338u, &recomp_unit_0105, "recomp_unit_0105");
    runtime.register_function(0x089A935Cu, &recomp_unit_0105, "recomp_unit_0105");
    runtime.register_function(0x089A936Cu, &recomp_unit_0105, "recomp_unit_0105");
    runtime.register_function(0x089A9380u, &recomp_unit_0105, "recomp_unit_0105");
    runtime.register_function(0x089A9394u, &recomp_unit_0105, "recomp_unit_0105");
    runtime.register_function(0x089A93A0u, &recomp_unit_0105, "recomp_unit_0105");
    runtime.register_function(0x089A93A8u, &recomp_unit_0105, "recomp_unit_0105");
    runtime.register_function(0x089A93C4u, &recomp_unit_0105, "recomp_unit_0105");
    runtime.register_function(0x089A93D4u, &recomp_unit_0105, "recomp_unit_0105");
    runtime.register_function(0x089A93ECu, &recomp_unit_0105, "recomp_unit_0105");
    runtime.register_function(0x089A9410u, &recomp_unit_0105, "recomp_unit_0105");
    runtime.register_function(0x089A9420u, &recomp_unit_0105, "recomp_unit_0105");
    runtime.register_function(0x089A9434u, &recomp_unit_0105, "recomp_unit_0105");
    runtime.register_function(0x089A9448u, &recomp_unit_0105, "recomp_unit_0105");
    runtime.register_function(0x089A9454u, &recomp_unit_0105, "recomp_unit_0105");
    runtime.register_function(0x089A945Cu, &recomp_unit_0105, "recomp_unit_0105");
    runtime.register_function(0x089A9470u, &recomp_unit_0105, "recomp_unit_0105");
    runtime.register_function(0x089A9480u, &recomp_unit_0105, "recomp_unit_0105");
    runtime.register_function(0x089A9498u, &recomp_unit_0105, "recomp_unit_0105");
    runtime.register_function(0x089A94BCu, &recomp_unit_0105, "recomp_unit_0105");
    runtime.register_function(0x089A94CCu, &recomp_unit_0105, "recomp_unit_0105");
    runtime.register_function(0x089A94E0u, &recomp_unit_0105, "recomp_unit_0105");
    runtime.register_function(0x089A94F4u, &recomp_unit_0105, "recomp_unit_0105");
    runtime.register_function(0x089A9500u, &recomp_unit_0105, "recomp_unit_0105");
    runtime.register_function(0x089A9508u, &recomp_unit_0105, "recomp_unit_0105");
    runtime.register_function(0x089A9514u, &recomp_unit_0105, "recomp_unit_0105");
    runtime.register_function(0x089A9520u, &recomp_unit_0105, "recomp_unit_0105");
    runtime.register_function(0x089A9530u, &recomp_unit_0105, "recomp_unit_0105");
    runtime.register_function(0x089A953Cu, &recomp_unit_0105, "recomp_unit_0105");
    runtime.register_function(0x089A9548u, &recomp_unit_0105, "recomp_unit_0105");
    runtime.register_function(0x089A9560u, &recomp_unit_0105, "recomp_unit_0105");
    runtime.register_function(0x089A9584u, &recomp_unit_0105, "recomp_unit_0105");
    runtime.register_function(0x089A9594u, &recomp_unit_0105, "recomp_unit_0105");
    runtime.register_function(0x089A95ACu, &recomp_unit_0105, "recomp_unit_0105");
    runtime.register_function(0x089A95D0u, &recomp_unit_0105, "recomp_unit_0105");
    runtime.register_function(0x089A95E0u, &recomp_unit_0105, "recomp_unit_0105");
    runtime.register_function(0x089A95F4u, &recomp_unit_0105, "recomp_unit_0105");
    runtime.register_function(0x089A9608u, &recomp_unit_0105, "recomp_unit_0105");
    runtime.register_function(0x089A9614u, &recomp_unit_0105, "recomp_unit_0105");
    runtime.register_function(0x089A961Cu, &recomp_unit_0105, "recomp_unit_0105");
    runtime.register_function(0x089A9638u, &recomp_unit_0105, "recomp_unit_0105");
    runtime.register_function(0x089A9648u, &recomp_unit_0105, "recomp_unit_0105");
    runtime.register_function(0x089A9660u, &recomp_unit_0105, "recomp_unit_0105");
    runtime.register_function(0x089A9684u, &recomp_unit_0105, "recomp_unit_0105");
    runtime.register_function(0x089A9694u, &recomp_unit_0105, "recomp_unit_0105");
    runtime.register_function(0x089A96A8u, &recomp_unit_0105, "recomp_unit_0105");
    runtime.register_function(0x089A96BCu, &recomp_unit_0105, "recomp_unit_0105");
    runtime.register_function(0x089A96C8u, &recomp_unit_0105, "recomp_unit_0105");
    runtime.register_function(0x089A96D0u, &recomp_unit_0105, "recomp_unit_0105");
    runtime.register_function(0x089A96ECu, &recomp_unit_0105, "recomp_unit_0105");
    runtime.register_function(0x089A96FCu, &recomp_unit_0105, "recomp_unit_0105");
    runtime.register_function(0x089A9714u, &recomp_unit_0105, "recomp_unit_0105");
    runtime.register_function(0x089A9738u, &recomp_unit_0105, "recomp_unit_0105");
    runtime.register_function(0x089A9748u, &recomp_unit_0105, "recomp_unit_0105");
    runtime.register_function(0x089A975Cu, &recomp_unit_0105, "recomp_unit_0105");
    runtime.register_function(0x089A9770u, &recomp_unit_0105, "recomp_unit_0105");
    runtime.register_function(0x089A977Cu, &recomp_unit_0105, "recomp_unit_0105");
    runtime.register_function(0x089A9784u, &recomp_unit_0105, "recomp_unit_0105");
    runtime.register_function(0x089A97A0u, &recomp_unit_0105, "recomp_unit_0105");
    runtime.register_function(0x089A97B0u, &recomp_unit_0105, "recomp_unit_0105");
    runtime.register_function(0x089A97C8u, &recomp_unit_0105, "recomp_unit_0105");
    runtime.register_function(0x089A97ECu, &recomp_unit_0105, "recomp_unit_0105");
    runtime.register_function(0x089A97FCu, &recomp_unit_0105, "recomp_unit_0105");
    runtime.register_function(0x089A9810u, &recomp_unit_0105, "recomp_unit_0105");
    runtime.register_function(0x089A9824u, &recomp_unit_0105, "recomp_unit_0105");
    runtime.register_function(0x089A9830u, &recomp_unit_0105, "recomp_unit_0105");
    runtime.register_function(0x089A9838u, &recomp_unit_0105, "recomp_unit_0105");
    runtime.register_function(0x089A9854u, &recomp_unit_0105, "recomp_unit_0105");
    runtime.register_function(0x089A9864u, &recomp_unit_0105, "recomp_unit_0105");
    runtime.register_function(0x089A987Cu, &recomp_unit_0105, "recomp_unit_0105");
    runtime.register_function(0x089A98A0u, &recomp_unit_0105, "recomp_unit_0105");
    runtime.register_function(0x089A98B0u, &recomp_unit_0105, "recomp_unit_0105");
    runtime.register_function(0x089A98C4u, &recomp_unit_0105, "recomp_unit_0105");
    runtime.register_function(0x089A98D8u, &recomp_unit_0105, "recomp_unit_0105");
    runtime.register_function(0x089A98E4u, &recomp_unit_0105, "recomp_unit_0105");
    runtime.register_function(0x089A98ECu, &recomp_unit_0105, "recomp_unit_0105");
    runtime.register_function(0x089A9908u, &recomp_unit_0105, "recomp_unit_0105");
    runtime.register_function(0x089A9918u, &recomp_unit_0105, "recomp_unit_0105");
    runtime.register_function(0x089A9930u, &recomp_unit_0105, "recomp_unit_0105");
    runtime.register_function(0x089A9954u, &recomp_unit_0105, "recomp_unit_0105");
    runtime.register_function(0x089A9964u, &recomp_unit_0105, "recomp_unit_0105");
    runtime.register_function(0x089A9978u, &recomp_unit_0105, "recomp_unit_0105");
    runtime.register_function(0x089A998Cu, &recomp_unit_0105, "recomp_unit_0105");
    runtime.register_function(0x089A9998u, &recomp_unit_0105, "recomp_unit_0105");
    runtime.register_function(0x089A99A0u, &recomp_unit_0105, "recomp_unit_0105");
    runtime.register_function(0x089A99A8u, &recomp_unit_0105, "recomp_unit_0105");
    runtime.register_function(0x089A99B4u, &recomp_unit_0105, "recomp_unit_0105");
    runtime.register_function(0x089A99B8u, &recomp_unit_0105, "recomp_unit_0105");
    runtime.register_function(0x089A99CCu, &recomp_unit_0105, "recomp_unit_0105");
    runtime.register_function(0x089A99F0u, &recomp_unit_0105, "recomp_unit_0105");
    runtime.register_function(0x089A9A0Cu, &recomp_unit_0105, "recomp_unit_0105");
    runtime.register_function(0x089A9A24u, &recomp_unit_0105, "recomp_unit_0105");
    runtime.register_function(0x089A9A40u, &recomp_unit_0105, "recomp_unit_0105");
    runtime.register_function(0x089A9A4Cu, &recomp_unit_0105, "recomp_unit_0105");
    runtime.register_function(0x089A9A7Cu, &recomp_unit_0105, "recomp_unit_0105");
    runtime.register_function(0x089A9AD0u, &recomp_unit_0105, "recomp_unit_0105");
    runtime.register_function(0x089A9ADCu, &recomp_unit_0105, "recomp_unit_0105");
    runtime.register_function(0x089A9AE8u, &recomp_unit_0105, "recomp_unit_0105");
    runtime.register_function(0x089A9AF0u, &recomp_unit_0105, "recomp_unit_0105");
    runtime.register_function(0x089A9AF4u, &recomp_unit_0105, "recomp_unit_0105");
    runtime.register_function(0x089A9AFCu, &recomp_unit_0105, "recomp_unit_0105");
    runtime.register_function(0x089A9B08u, &recomp_unit_0105, "recomp_unit_0105");
    runtime.register_function(0x089A9B10u, &recomp_unit_0105, "recomp_unit_0105");
    runtime.register_function(0x089A9B14u, &recomp_unit_0105, "recomp_unit_0105");
    runtime.register_function(0x089A9B1Cu, &recomp_unit_0105, "recomp_unit_0105");
    runtime.register_function(0x089A9B28u, &recomp_unit_0105, "recomp_unit_0105");
    runtime.register_function(0x089A9B30u, &recomp_unit_0105, "recomp_unit_0105");
    runtime.register_function(0x089A9B34u, &recomp_unit_0105, "recomp_unit_0105");
    runtime.register_function(0x089A9B40u, &recomp_unit_0105, "recomp_unit_0105");
    runtime.register_function(0x089A9B4Cu, &recomp_unit_0105, "recomp_unit_0105");
    runtime.register_function(0x089A9B5Cu, &recomp_unit_0105, "recomp_unit_0105");
    runtime.register_function(0x089A9B64u, &recomp_unit_0105, "recomp_unit_0105");
    runtime.register_function(0x089A9B70u, &recomp_unit_0105, "recomp_unit_0105");
    runtime.register_function(0x089A9B7Cu, &recomp_unit_0105, "recomp_unit_0105");
    runtime.register_function(0x089A9B88u, &recomp_unit_0105, "recomp_unit_0105");
    runtime.register_function(0x089A9B90u, &recomp_unit_0105, "recomp_unit_0105");
    runtime.register_function(0x089A9B94u, &recomp_unit_0105, "recomp_unit_0105");
    runtime.register_function(0x089A9BA0u, &recomp_unit_0105, "recomp_unit_0105");
    runtime.register_function(0x089A9BACu, &recomp_unit_0105, "recomp_unit_0105");
    runtime.register_function(0x089A9BBCu, &recomp_unit_0105, "recomp_unit_0105");
    runtime.register_function(0x089A9BC4u, &recomp_unit_0105, "recomp_unit_0105");
    runtime.register_function(0x089A9BD0u, &recomp_unit_0105, "recomp_unit_0105");
    runtime.register_function(0x089A9BDCu, &recomp_unit_0105, "recomp_unit_0105");
    runtime.register_function(0x089A9BE4u, &recomp_unit_0105, "recomp_unit_0105");
    runtime.register_function(0x089A9BF0u, &recomp_unit_0105, "recomp_unit_0105");
    runtime.register_function(0x089A9BFCu, &recomp_unit_0105, "recomp_unit_0105");
    runtime.register_function(0x089A9C0Cu, &recomp_unit_0105, "recomp_unit_0105");
    runtime.register_function(0x089A9C28u, &recomp_unit_0105, "recomp_unit_0105");
    runtime.register_function(0x089A9C48u, &recomp_unit_0105, "recomp_unit_0105");
    runtime.register_function(0x089A9C5Cu, &recomp_unit_0105, "recomp_unit_0105");
    runtime.register_function(0x089A9C64u, &recomp_unit_0105, "recomp_unit_0105");
    runtime.register_function(0x089A9C6Cu, &recomp_unit_0105, "recomp_unit_0105");
    runtime.register_function(0x089A9C78u, &recomp_unit_0105, "recomp_unit_0105");
    runtime.register_function(0x089A9C84u, &recomp_unit_0105, "recomp_unit_0105");
    runtime.register_function(0x089A9C9Cu, &recomp_unit_0105, "recomp_unit_0105");
    runtime.register_function(0x089A9CACu, &recomp_unit_0105, "recomp_unit_0105");
    runtime.register_function(0x089A9CB4u, &recomp_unit_0105, "recomp_unit_0105");
    runtime.register_function(0x089A9CC0u, &recomp_unit_0105, "recomp_unit_0105");
    runtime.register_function(0x089A9CCCu, &recomp_unit_0105, "recomp_unit_0105");
    runtime.register_function(0x089A9CE4u, &recomp_unit_0105, "recomp_unit_0105");
    runtime.register_function(0x089A9CF4u, &recomp_unit_0105, "recomp_unit_0105");
    runtime.register_function(0x089A9D04u, &recomp_unit_0105, "recomp_unit_0105");
    runtime.register_function(0x089A9D10u, &recomp_unit_0105, "recomp_unit_0105");
    runtime.register_function(0x089A9D1Cu, &recomp_unit_0105, "recomp_unit_0105");
    runtime.register_function(0x089A9D24u, &recomp_unit_0105, "recomp_unit_0105");
    runtime.register_function(0x089A9D30u, &recomp_unit_0105, "recomp_unit_0105");
    runtime.register_function(0x089A9D3Cu, &recomp_unit_0105, "recomp_unit_0105");
    runtime.register_function(0x089A9D4Cu, &recomp_unit_0105, "recomp_unit_0105");
    runtime.register_function(0x089A9D58u, &recomp_unit_0105, "recomp_unit_0105");
    runtime.register_function(0x089A9D64u, &recomp_unit_0105, "recomp_unit_0105");
    runtime.register_function(0x089A9D80u, &recomp_unit_0105, "recomp_unit_0105");
    runtime.register_function(0x089A9D84u, &recomp_unit_0105, "recomp_unit_0105");
    runtime.register_function(0x089A9D90u, &recomp_unit_0105, "recomp_unit_0105");
    runtime.register_function(0x089A9D9Cu, &recomp_unit_0105, "recomp_unit_0105");
    runtime.register_function(0x089A9DE4u, &recomp_unit_0105, "recomp_unit_0105");
    runtime.register_function(0x089A9DF0u, &recomp_unit_0105, "recomp_unit_0105");
    runtime.register_function(0x089A9DFCu, &recomp_unit_0105, "recomp_unit_0105");
    runtime.register_function(0x089A9E04u, &recomp_unit_0105, "recomp_unit_0105");
    runtime.register_function(0x089A9E2Cu, &recomp_unit_0105, "recomp_unit_0105");
    runtime.register_function(0x089A9E3Cu, &recomp_unit_0105, "recomp_unit_0105");
    runtime.register_function(0x089A9E5Cu, &recomp_unit_0105, "recomp_unit_0105");
    runtime.register_function(0x089A9E68u, &recomp_unit_0105, "recomp_unit_0105");
    runtime.register_function(0x089A9E6Cu, &recomp_unit_0105, "recomp_unit_0105");
    runtime.register_function(0x089A9E7Cu, &recomp_unit_0105, "recomp_unit_0105");
    runtime.register_function(0x089A9E88u, &recomp_unit_0105, "recomp_unit_0105");
    runtime.register_function(0x089A9E98u, &recomp_unit_0105, "recomp_unit_0105");
    runtime.register_function(0x089A9EC4u, &recomp_unit_0105, "recomp_unit_0105");
    runtime.register_function(0x089A9ED0u, &recomp_unit_0105, "recomp_unit_0105");
    runtime.register_function(0x089A9EE4u, &recomp_unit_0105, "recomp_unit_0105");
    runtime.register_function(0x089A9EF0u, &recomp_unit_0105, "recomp_unit_0105");
    runtime.register_function(0x089A9F00u, &recomp_unit_0105, "recomp_unit_0105");
    runtime.register_function(0x089A9F08u, &recomp_unit_0105, "recomp_unit_0105");
    runtime.register_function(0x089A9F14u, &recomp_unit_0105, "recomp_unit_0105");
    runtime.register_function(0x089A9F34u, &recomp_unit_0105, "recomp_unit_0105");
    runtime.register_function(0x089A9F40u, &recomp_unit_0105, "recomp_unit_0105");
    runtime.register_function(0x089A9F50u, &recomp_unit_0105, "recomp_unit_0105");
    runtime.register_function(0x089A9F64u, &recomp_unit_0105, "recomp_unit_0105");
    runtime.register_function(0x089A9F70u, &recomp_unit_0105, "recomp_unit_0105");
    runtime.register_function(0x089A9F80u, &recomp_unit_0105, "recomp_unit_0105");
    runtime.register_function(0x089A9F84u, &recomp_unit_0105, "recomp_unit_0105");
    runtime.register_function(0x089A9F90u, &recomp_unit_0105, "recomp_unit_0105");
    runtime.register_function(0x089A9F94u, &recomp_unit_0105, "recomp_unit_0105");
    runtime.register_function(0x089A9FA0u, &recomp_unit_0105, "recomp_unit_0105");
    runtime.register_function(0x089A9FACu, &recomp_unit_0105, "recomp_unit_0105");
    runtime.register_function(0x089A9FBCu, &recomp_unit_0105, "recomp_unit_0105");
    runtime.register_function(0x089A9FD4u, &recomp_unit_0105, "recomp_unit_0105");
    runtime.register_function(0x089A9FE8u, &recomp_unit_0105, "recomp_unit_0105");
    runtime.register_function(0x089A9FF4u, &recomp_unit_0105, "recomp_unit_0105");
    runtime.register_function(0x089A9FFCu, &recomp_unit_0105, "recomp_unit_0105");
    runtime.register_function(0x089AA02Cu, &recomp_unit_0105, "recomp_unit_0105");
    runtime.register_function(0x089AA034u, &recomp_unit_0105, "recomp_unit_0105");
    runtime.register_function(0x089AA064u, &recomp_unit_0105, "recomp_unit_0105");
    runtime.register_function(0x089AA074u, &recomp_unit_0105, "recomp_unit_0105");
    runtime.register_function(0x089AA08Cu, &recomp_unit_0105, "recomp_unit_0105");
    runtime.register_function(0x089AA0B4u, &recomp_unit_0105, "recomp_unit_0105");
    runtime.register_function(0x089AA0C4u, &recomp_unit_0105, "recomp_unit_0105");
    runtime.register_function(0x089AA0D8u, &recomp_unit_0105, "recomp_unit_0105");
    runtime.register_function(0x089AA0F0u, &recomp_unit_0105, "recomp_unit_0105");
    runtime.register_function(0x089AA100u, &recomp_unit_0105, "recomp_unit_0105");
    runtime.register_function(0x089AA118u, &recomp_unit_0105, "recomp_unit_0105");
    runtime.register_function(0x089AA140u, &recomp_unit_0105, "recomp_unit_0105");
    runtime.register_function(0x089AA150u, &recomp_unit_0105, "recomp_unit_0105");
    runtime.register_function(0x089AA164u, &recomp_unit_0105, "recomp_unit_0105");
    runtime.register_function(0x089AA180u, &recomp_unit_0105, "recomp_unit_0105");
    runtime.register_function(0x089AA190u, &recomp_unit_0105, "recomp_unit_0105");
    runtime.register_function(0x089AA1A8u, &recomp_unit_0105, "recomp_unit_0105");
    runtime.register_function(0x089AA1D0u, &recomp_unit_0105, "recomp_unit_0105");
    runtime.register_function(0x089AA1E0u, &recomp_unit_0105, "recomp_unit_0105");
    runtime.register_function(0x089AA1F4u, &recomp_unit_0105, "recomp_unit_0105");
    runtime.register_function(0x089AA214u, &recomp_unit_0105, "recomp_unit_0105");
    runtime.register_function(0x089AA220u, &recomp_unit_0105, "recomp_unit_0105");
    runtime.register_function(0x089AA250u, &recomp_unit_0105, "recomp_unit_0105");
    runtime.register_function(0x089AA258u, &recomp_unit_0105, "recomp_unit_0105");
    runtime.register_function(0x089AA27Cu, &recomp_unit_0105, "recomp_unit_0105");
    runtime.register_function(0x089AA2A8u, &recomp_unit_0105, "recomp_unit_0105");
    runtime.register_function(0x089AA2B4u, &recomp_unit_0105, "recomp_unit_0105");
    runtime.register_function(0x089AA2C0u, &recomp_unit_0105, "recomp_unit_0105");
    runtime.register_function(0x089AA2CCu, &recomp_unit_0105, "recomp_unit_0105");
    runtime.register_function(0x089AA2D4u, &recomp_unit_0105, "recomp_unit_0105");
    runtime.register_function(0x089AA2F0u, &recomp_unit_0105, "recomp_unit_0105");
    runtime.register_function(0x089AA304u, &recomp_unit_0105, "recomp_unit_0105");
    runtime.register_function(0x089AA310u, &recomp_unit_0105, "recomp_unit_0105");
    runtime.register_function(0x089AA34Cu, &recomp_unit_0105, "recomp_unit_0105");
    runtime.register_function(0x089AA358u, &recomp_unit_0105, "recomp_unit_0105");
    runtime.register_function(0x089AA35Cu, &recomp_unit_0105, "recomp_unit_0105");
    runtime.register_function(0x089AA368u, &recomp_unit_0105, "recomp_unit_0105");
    runtime.register_function(0x089AA384u, &recomp_unit_0105, "recomp_unit_0105");
    runtime.register_function(0x089AA3A8u, &recomp_unit_0105, "recomp_unit_0105");
    runtime.register_function(0x089AA3D8u, &recomp_unit_0105, "recomp_unit_0105");
    runtime.register_function(0x089AA428u, &recomp_unit_0105, "recomp_unit_0105");
    runtime.register_function(0x089AA438u, &recomp_unit_0105, "recomp_unit_0105");
    runtime.register_function(0x089AA444u, &recomp_unit_0105, "recomp_unit_0105");
    runtime.register_function(0x089AA454u, &recomp_unit_0105, "recomp_unit_0105");
    runtime.register_function(0x089AA460u, &recomp_unit_0105, "recomp_unit_0105");
    runtime.register_function(0x089AA470u, &recomp_unit_0105, "recomp_unit_0105");
    runtime.register_function(0x089AA488u, &recomp_unit_0105, "recomp_unit_0105");
    runtime.register_function(0x089AA490u, &recomp_unit_0105, "recomp_unit_0105");
    runtime.register_function(0x089AA49Cu, &recomp_unit_0105, "recomp_unit_0105");
    runtime.register_function(0x089AA4A4u, &recomp_unit_0105, "recomp_unit_0105");
    runtime.register_function(0x089AA4B0u, &recomp_unit_0105, "recomp_unit_0105");
    runtime.register_function(0x089AA4B8u, &recomp_unit_0105, "recomp_unit_0105");
    runtime.register_function(0x089AA4C4u, &recomp_unit_0105, "recomp_unit_0105");
    runtime.register_function(0x089AA4CCu, &recomp_unit_0105, "recomp_unit_0105");
    runtime.register_function(0x089AA500u, &recomp_unit_0105, "recomp_unit_0105");
    runtime.register_function(0x089AA530u, &recomp_unit_0105, "recomp_unit_0105");
    runtime.register_function(0x089AA544u, &recomp_unit_0105, "recomp_unit_0105");
    runtime.register_function(0x089AA554u, &recomp_unit_0105, "recomp_unit_0105");
    runtime.register_function(0x089AA580u, &recomp_unit_0105, "recomp_unit_0105");
    runtime.register_function(0x089AA58Cu, &recomp_unit_0105, "recomp_unit_0105");
    runtime.register_function(0x089AA5A4u, &recomp_unit_0105, "recomp_unit_0105");
    runtime.register_function(0x089AA5B0u, &recomp_unit_0105, "recomp_unit_0105");
    runtime.register_function(0x089AA5B4u, &recomp_unit_0105, "recomp_unit_0105");
    runtime.register_function(0x089AA5C0u, &recomp_unit_0105, "recomp_unit_0105");
    runtime.register_function(0x089AA5C4u, &recomp_unit_0105, "recomp_unit_0105");
    runtime.register_function(0x089AA5CCu, &recomp_unit_0105, "recomp_unit_0105");
    runtime.register_function(0x089AA5D8u, &recomp_unit_0105, "recomp_unit_0105");
    runtime.register_function(0x089AA5F4u, &recomp_unit_0105, "recomp_unit_0105");
    runtime.register_function(0x089AA600u, &recomp_unit_0105, "recomp_unit_0105");
    runtime.register_function(0x089AA604u, &recomp_unit_0105, "recomp_unit_0105");
    runtime.register_function(0x089AA610u, &recomp_unit_0105, "recomp_unit_0105");
    runtime.register_function(0x089AA614u, &recomp_unit_0105, "recomp_unit_0105");
    runtime.register_function(0x089AA61Cu, &recomp_unit_0105, "recomp_unit_0105");
    runtime.register_function(0x089AA624u, &recomp_unit_0105, "recomp_unit_0105");
    runtime.register_function(0x089AA638u, &recomp_unit_0105, "recomp_unit_0105");
    runtime.register_function(0x089AA648u, &recomp_unit_0105, "recomp_unit_0105");
    runtime.register_function(0x089AA65Cu, &recomp_unit_0105, "recomp_unit_0105");
    runtime.register_function(0x089AA66Cu, &recomp_unit_0105, "recomp_unit_0105");
    runtime.register_function(0x089AA680u, &recomp_unit_0105, "recomp_unit_0105");
    runtime.register_function(0x089AA690u, &recomp_unit_0105, "recomp_unit_0105");
    runtime.register_function(0x089AA6ACu, &recomp_unit_0105, "recomp_unit_0105");
    runtime.register_function(0x089AA6C0u, &recomp_unit_0105, "recomp_unit_0105");
    runtime.register_function(0x089AA708u, &recomp_unit_0105, "recomp_unit_0105");
    runtime.register_function(0x089AA714u, &recomp_unit_0105, "recomp_unit_0105");
    runtime.register_function(0x089AA728u, &recomp_unit_0105, "recomp_unit_0105");
    runtime.register_function(0x089AA734u, &recomp_unit_0105, "recomp_unit_0105");
    runtime.register_function(0x089AA73Cu, &recomp_unit_0105, "recomp_unit_0105");
    runtime.register_function(0x089AA758u, &recomp_unit_0105, "recomp_unit_0105");
    runtime.register_function(0x089AA76Cu, &recomp_unit_0105, "recomp_unit_0105");
    runtime.register_function(0x089AA7B4u, &recomp_unit_0105, "recomp_unit_0105");
    runtime.register_function(0x089AA7C0u, &recomp_unit_0105, "recomp_unit_0105");
    runtime.register_function(0x089AA7D4u, &recomp_unit_0105, "recomp_unit_0105");
    runtime.register_function(0x089AA7E0u, &recomp_unit_0105, "recomp_unit_0105");
    runtime.register_function(0x089AA7E8u, &recomp_unit_0105, "recomp_unit_0105");
    runtime.register_function(0x089AA804u, &recomp_unit_0105, "recomp_unit_0105");
    runtime.register_function(0x089AA818u, &recomp_unit_0105, "recomp_unit_0105");
    runtime.register_function(0x089AA848u, &recomp_unit_0105, "recomp_unit_0105");
    runtime.register_function(0x089AA854u, &recomp_unit_0105, "recomp_unit_0105");
    runtime.register_function(0x089AA868u, &recomp_unit_0105, "recomp_unit_0105");
    runtime.register_function(0x089AA874u, &recomp_unit_0105, "recomp_unit_0105");
    runtime.register_function(0x089AA87Cu, &recomp_unit_0105, "recomp_unit_0105");
    runtime.register_function(0x089AA898u, &recomp_unit_0105, "recomp_unit_0105");
    runtime.register_function(0x089AA8ACu, &recomp_unit_0105, "recomp_unit_0105");
    runtime.register_function(0x089AA8B8u, &recomp_unit_0105, "recomp_unit_0105");
    runtime.register_function(0x089AA8C8u, &recomp_unit_0105, "recomp_unit_0105");
    runtime.register_function(0x089AA8E0u, &recomp_unit_0105, "recomp_unit_0105");
    runtime.register_function(0x089AA8FCu, &recomp_unit_0105, "recomp_unit_0105");
    runtime.register_function(0x089AA90Cu, &recomp_unit_0105, "recomp_unit_0105");
    runtime.register_function(0x089AA924u, &recomp_unit_0105, "recomp_unit_0105");
    runtime.register_function(0x089AA940u, &recomp_unit_0105, "recomp_unit_0105");
    runtime.register_function(0x089AA950u, &recomp_unit_0105, "recomp_unit_0105");
    runtime.register_function(0x089AA968u, &recomp_unit_0105, "recomp_unit_0105");
    runtime.register_function(0x089AA984u, &recomp_unit_0105, "recomp_unit_0105");
    runtime.register_function(0x089AA994u, &recomp_unit_0105, "recomp_unit_0105");
    runtime.register_function(0x089AA9ACu, &recomp_unit_0105, "recomp_unit_0105");
    runtime.register_function(0x089AA9C8u, &recomp_unit_0105, "recomp_unit_0105");
    runtime.register_function(0x089AA9D4u, &recomp_unit_0105, "recomp_unit_0105");
    runtime.register_function(0x089AA9E8u, &recomp_unit_0105, "recomp_unit_0105");
    runtime.register_function(0x089AA9F4u, &recomp_unit_0105, "recomp_unit_0105");
    runtime.register_function(0x089AA9FCu, &recomp_unit_0105, "recomp_unit_0105");
    runtime.register_function(0x089AAA18u, &recomp_unit_0105, "recomp_unit_0105");
    runtime.register_function(0x089AAA2Cu, &recomp_unit_0105, "recomp_unit_0105");
    runtime.register_function(0x089AAA40u, &recomp_unit_0105, "recomp_unit_0105");
    runtime.register_function(0x089AAA4Cu, &recomp_unit_0105, "recomp_unit_0105");
    runtime.register_function(0x089AAA60u, &recomp_unit_0105, "recomp_unit_0105");
    runtime.register_function(0x089AAA6Cu, &recomp_unit_0105, "recomp_unit_0105");
    runtime.register_function(0x089AAA74u, &recomp_unit_0105, "recomp_unit_0105");
    runtime.register_function(0x089AAAB0u, &recomp_unit_0105, "recomp_unit_0105");
    runtime.register_function(0x089AAAD0u, &recomp_unit_0105, "recomp_unit_0105");
    runtime.register_function(0x089AAB10u, &recomp_unit_0105, "recomp_unit_0105");
    runtime.register_function(0x089AAB5Cu, &recomp_unit_0105, "recomp_unit_0105");
    runtime.register_function(0x089AAB6Cu, &recomp_unit_0105, "recomp_unit_0105");
    runtime.register_function(0x089AAB78u, &recomp_unit_0105, "recomp_unit_0105");
    runtime.register_function(0x089AAB80u, &recomp_unit_0105, "recomp_unit_0105");
    runtime.register_function(0x089AAB8Cu, &recomp_unit_0105, "recomp_unit_0105");
    runtime.register_function(0x089AABA8u, &recomp_unit_0105, "recomp_unit_0105");
    runtime.register_function(0x089AABBCu, &recomp_unit_0105, "recomp_unit_0105");
    runtime.register_function(0x089AABD0u, &recomp_unit_0105, "recomp_unit_0105");
    runtime.register_function(0x089AABD8u, &recomp_unit_0105, "recomp_unit_0105");
    runtime.register_function(0x089AABE4u, &recomp_unit_0105, "recomp_unit_0105");
    runtime.register_function(0x089AABFCu, &recomp_unit_0105, "recomp_unit_0105");
    runtime.register_function(0x089AAC18u, &recomp_unit_0105, "recomp_unit_0105");
    runtime.register_function(0x089AAC3Cu, &recomp_unit_0105, "recomp_unit_0105");
    runtime.register_function(0x089AAC54u, &recomp_unit_0105, "recomp_unit_0105");
    runtime.register_function(0x089AAC6Cu, &recomp_unit_0105, "recomp_unit_0105");
    runtime.register_function(0x089AAC84u, &recomp_unit_0105, "recomp_unit_0105");
    runtime.register_function(0x089AACA0u, &recomp_unit_0105, "recomp_unit_0105");
    runtime.register_function(0x089AACB8u, &recomp_unit_0105, "recomp_unit_0105");
    runtime.register_function(0x089AACCCu, &recomp_unit_0105, "recomp_unit_0105");
    runtime.register_function(0x089AACD8u, &recomp_unit_0105, "recomp_unit_0105");
    runtime.register_function(0x089AACF4u, &recomp_unit_0105, "recomp_unit_0105");
    runtime.register_function(0x089AAD04u, &recomp_unit_0105, "recomp_unit_0105");
    runtime.register_function(0x089AAD2Cu, &recomp_unit_0105, "recomp_unit_0105");
    runtime.register_function(0x089AAD38u, &recomp_unit_0105, "recomp_unit_0105");
    runtime.register_function(0x089AAD4Cu, &recomp_unit_0105, "recomp_unit_0105");
    runtime.register_function(0x089AAD5Cu, &recomp_unit_0105, "recomp_unit_0105");
    runtime.register_function(0x089AAD68u, &recomp_unit_0105, "recomp_unit_0105");
    runtime.register_function(0x089AAD70u, &recomp_unit_0105, "recomp_unit_0105");
    runtime.register_function(0x089AAD7Cu, &recomp_unit_0105, "recomp_unit_0105");
    runtime.register_function(0x089AAD8Cu, &recomp_unit_0105, "recomp_unit_0105");
    runtime.register_function(0x089AADB4u, &recomp_unit_0105, "recomp_unit_0105");
    runtime.register_function(0x089AADD4u, &recomp_unit_0105, "recomp_unit_0105");
    runtime.register_function(0x089AADE4u, &recomp_unit_0105, "recomp_unit_0105");
    runtime.register_function(0x089AADE8u, &recomp_unit_0105, "recomp_unit_0105");
    runtime.register_function(0x089AAE04u, &recomp_unit_0105, "recomp_unit_0105");
    runtime.register_function(0x089AAE10u, &recomp_unit_0105, "recomp_unit_0105");
    runtime.register_function(0x089AAE24u, &recomp_unit_0105, "recomp_unit_0105");
    runtime.register_function(0x089AAE30u, &recomp_unit_0105, "recomp_unit_0105");
    runtime.register_function(0x089AAE38u, &recomp_unit_0105, "recomp_unit_0105");
    runtime.register_function(0x089AAE48u, &recomp_unit_0105, "recomp_unit_0105");
    runtime.register_function(0x089AAE5Cu, &recomp_unit_0105, "recomp_unit_0105");
    runtime.register_function(0x089AAE68u, &recomp_unit_0105, "recomp_unit_0105");
    runtime.register_function(0x089AAEF8u, &recomp_unit_0105, "recomp_unit_0105");
    runtime.register_function(0x089AAF04u, &recomp_unit_0105, "recomp_unit_0105");
    runtime.register_function(0x089AAF08u, &recomp_unit_0105, "recomp_unit_0105");
    runtime.register_function(0x089AAF14u, &recomp_unit_0105, "recomp_unit_0105");
    runtime.register_function(0x089AAF1Cu, &recomp_unit_0105, "recomp_unit_0105");
    runtime.register_function(0x089AAF28u, &recomp_unit_0105, "recomp_unit_0105");
    runtime.register_function(0x089AAF34u, &recomp_unit_0105, "recomp_unit_0105");
    runtime.register_function(0x089AAF44u, &recomp_unit_0105, "recomp_unit_0105");
    runtime.register_function(0x089AAF58u, &recomp_unit_0105, "recomp_unit_0105");
    runtime.register_function(0x089AAF64u, &recomp_unit_0105, "recomp_unit_0105");
    runtime.register_function(0x089AAF94u, &recomp_unit_0105, "recomp_unit_0105");
    runtime.register_function(0x089AAFA0u, &recomp_unit_0105, "recomp_unit_0105");
    runtime.register_function(0x089AAFA4u, &recomp_unit_0105, "recomp_unit_0105");
    runtime.register_function(0x089AAFB0u, &recomp_unit_0105, "recomp_unit_0105");
    runtime.register_function(0x089AAFB8u, &recomp_unit_0105, "recomp_unit_0105");
    runtime.register_function(0x089AAFC4u, &recomp_unit_0105, "recomp_unit_0105");
    runtime.register_function(0x089AAFD0u, &recomp_unit_0105, "recomp_unit_0105");
    runtime.register_function(0x089AB014u, &recomp_unit_0105, "recomp_unit_0105");
    runtime.register_function(0x089AB020u, &recomp_unit_0105, "recomp_unit_0105");
    runtime.register_function(0x089AB04Cu, &recomp_unit_0105, "recomp_unit_0105");
    runtime.register_function(0x089AB058u, &recomp_unit_0105, "recomp_unit_0105");
    runtime.register_function(0x089AB05Cu, &recomp_unit_0105, "recomp_unit_0105");
    runtime.register_function(0x089AB068u, &recomp_unit_0105, "recomp_unit_0105");
    runtime.register_function(0x089AB074u, &recomp_unit_0105, "recomp_unit_0105");
    runtime.register_function(0x089AB07Cu, &recomp_unit_0105, "recomp_unit_0105");
    runtime.register_function(0x089AB088u, &recomp_unit_0105, "recomp_unit_0105");
    runtime.register_function(0x089AB090u, &recomp_unit_0105, "recomp_unit_0105");
    runtime.register_function(0x089AB0A4u, &recomp_unit_0105, "recomp_unit_0105");
    runtime.register_function(0x089AB0B8u, &recomp_unit_0105, "recomp_unit_0105");
    runtime.register_function(0x089AB0C4u, &recomp_unit_0105, "recomp_unit_0105");
    runtime.register_function(0x089AB0D0u, &recomp_unit_0105, "recomp_unit_0105");
    runtime.register_function(0x089AB110u, &recomp_unit_0105, "recomp_unit_0105");
    runtime.register_function(0x089AB124u, &recomp_unit_0105, "recomp_unit_0105");
    runtime.register_function(0x089AB130u, &recomp_unit_0105, "recomp_unit_0105");
    runtime.register_function(0x089AB13Cu, &recomp_unit_0105, "recomp_unit_0105");
    runtime.register_function(0x089AB14Cu, &recomp_unit_0105, "recomp_unit_0105");
    runtime.register_function(0x089AB180u, &recomp_unit_0105, "recomp_unit_0105");
    runtime.register_function(0x089AB194u, &recomp_unit_0105, "recomp_unit_0105");
    runtime.register_function(0x089AB1A0u, &recomp_unit_0105, "recomp_unit_0105");
    runtime.register_function(0x089AB1ACu, &recomp_unit_0105, "recomp_unit_0105");
    runtime.register_function(0x089AB1B0u, &recomp_unit_0105, "recomp_unit_0105");
    runtime.register_function(0x089AB1BCu, &recomp_unit_0105, "recomp_unit_0105");
    runtime.register_function(0x089AB1C0u, &recomp_unit_0105, "recomp_unit_0105");
    runtime.register_function(0x089AB1CCu, &recomp_unit_0105, "recomp_unit_0105");
    runtime.register_function(0x089AB204u, &recomp_unit_0105, "recomp_unit_0105");
    runtime.register_function(0x089AB248u, &recomp_unit_0105, "recomp_unit_0105");
    runtime.register_function(0x089AB254u, &recomp_unit_0105, "recomp_unit_0105");
    runtime.register_function(0x089AB280u, &recomp_unit_0105, "recomp_unit_0105");
    runtime.register_function(0x089AB28Cu, &recomp_unit_0105, "recomp_unit_0105");
    runtime.register_function(0x089AB290u, &recomp_unit_0105, "recomp_unit_0105");
    runtime.register_function(0x089AB29Cu, &recomp_unit_0105, "recomp_unit_0105");
    runtime.register_function(0x089AB2A8u, &recomp_unit_0105, "recomp_unit_0105");
    runtime.register_function(0x089AB2B0u, &recomp_unit_0105, "recomp_unit_0105");
    runtime.register_function(0x089AB2BCu, &recomp_unit_0105, "recomp_unit_0105");
    runtime.register_function(0x089AB2C4u, &recomp_unit_0105, "recomp_unit_0105");
    runtime.register_function(0x089AB2D8u, &recomp_unit_0105, "recomp_unit_0105");
    runtime.register_function(0x089AB2ECu, &recomp_unit_0105, "recomp_unit_0105");
    runtime.register_function(0x089AB2F8u, &recomp_unit_0105, "recomp_unit_0105");
    runtime.register_function(0x089AB304u, &recomp_unit_0105, "recomp_unit_0105");
    runtime.register_function(0x089AB344u, &recomp_unit_0105, "recomp_unit_0105");
    runtime.register_function(0x089AB358u, &recomp_unit_0105, "recomp_unit_0105");
    runtime.register_function(0x089AB364u, &recomp_unit_0105, "recomp_unit_0105");
    runtime.register_function(0x089AB370u, &recomp_unit_0105, "recomp_unit_0105");
    runtime.register_function(0x089AB380u, &recomp_unit_0105, "recomp_unit_0105");
    runtime.register_function(0x089AB3B4u, &recomp_unit_0105, "recomp_unit_0105");
    runtime.register_function(0x089AB3C8u, &recomp_unit_0105, "recomp_unit_0105");
    runtime.register_function(0x089AB3D4u, &recomp_unit_0105, "recomp_unit_0105");
    runtime.register_function(0x089AB3E0u, &recomp_unit_0105, "recomp_unit_0105");
    runtime.register_function(0x089AB3E4u, &recomp_unit_0105, "recomp_unit_0105");
    runtime.register_function(0x089AB3F0u, &recomp_unit_0105, "recomp_unit_0105");
    runtime.register_function(0x089AB3F4u, &recomp_unit_0105, "recomp_unit_0105");
    runtime.register_function(0x089AB400u, &recomp_unit_0105, "recomp_unit_0105");
    runtime.register_function(0x089AB438u, &recomp_unit_0105, "recomp_unit_0105");
    runtime.register_function(0x089AB480u, &recomp_unit_0105, "recomp_unit_0105");
    runtime.register_function(0x089AB490u, &recomp_unit_0105, "recomp_unit_0105");
    runtime.register_function(0x089AB494u, &recomp_unit_0105, "recomp_unit_0105");
    runtime.register_function(0x089AB4A0u, &recomp_unit_0105, "recomp_unit_0105");
    runtime.register_function(0x089AB4ACu, &recomp_unit_0105, "recomp_unit_0105");
    runtime.register_function(0x089AB4B8u, &recomp_unit_0105, "recomp_unit_0105");
    runtime.register_function(0x089AB4CCu, &recomp_unit_0105, "recomp_unit_0105");
    runtime.register_function(0x089AB4E0u, &recomp_unit_0105, "recomp_unit_0105");
    runtime.register_function(0x089AB4ECu, &recomp_unit_0105, "recomp_unit_0105");
    runtime.register_function(0x089AB4FCu, &recomp_unit_0105, "recomp_unit_0105");
    runtime.register_function(0x089AB500u, &recomp_unit_0105, "recomp_unit_0105");
    runtime.register_function(0x089AB50Cu, &recomp_unit_0105, "recomp_unit_0105");
    runtime.register_function(0x089AB518u, &recomp_unit_0105, "recomp_unit_0105");
    runtime.register_function(0x089AB524u, &recomp_unit_0105, "recomp_unit_0105");
    runtime.register_function(0x089AB534u, &recomp_unit_0105, "recomp_unit_0105");
    runtime.register_function(0x089AB53Cu, &recomp_unit_0105, "recomp_unit_0105");
    runtime.register_function(0x089AB550u, &recomp_unit_0105, "recomp_unit_0105");
    runtime.register_function(0x089AB558u, &recomp_unit_0105, "recomp_unit_0105");
    runtime.register_function(0x089AB56Cu, &recomp_unit_0105, "recomp_unit_0105");
    runtime.register_function(0x089AB578u, &recomp_unit_0105, "recomp_unit_0105");
    runtime.register_function(0x089AB580u, &recomp_unit_0105, "recomp_unit_0105");
    runtime.register_function(0x089AB590u, &recomp_unit_0105, "recomp_unit_0105");
    runtime.register_function(0x089AB59Cu, &recomp_unit_0105, "recomp_unit_0105");
    runtime.register_function(0x089AB5A4u, &recomp_unit_0105, "recomp_unit_0105");
    runtime.register_function(0x089AB5B0u, &recomp_unit_0105, "recomp_unit_0105");
    runtime.register_function(0x089AB5C0u, &recomp_unit_0105, "recomp_unit_0105");
    runtime.register_function(0x089AB5CCu, &recomp_unit_0105, "recomp_unit_0105");
    runtime.register_function(0x089AB5D4u, &recomp_unit_0105, "recomp_unit_0105");
    runtime.register_function(0x089AB5E0u, &recomp_unit_0105, "recomp_unit_0105");
    runtime.register_function(0x089AB5ECu, &recomp_unit_0105, "recomp_unit_0105");
    runtime.register_function(0x089AB624u, &recomp_unit_0105, "recomp_unit_0105");
    runtime.register_function(0x089AB638u, &recomp_unit_0105, "recomp_unit_0105");
    runtime.register_function(0x089AB64Cu, &recomp_unit_0105, "recomp_unit_0105");
    runtime.register_function(0x089AB658u, &recomp_unit_0105, "recomp_unit_0105");
    runtime.register_function(0x089AB670u, &recomp_unit_0105, "recomp_unit_0105");
    runtime.register_function(0x089AB6A8u, &recomp_unit_0105, "recomp_unit_0105");
    runtime.register_function(0x089AB6BCu, &recomp_unit_0105, "recomp_unit_0105");
    runtime.register_function(0x089AB6D0u, &recomp_unit_0105, "recomp_unit_0105");
    runtime.register_function(0x089AB6E0u, &recomp_unit_0105, "recomp_unit_0105");
    runtime.register_function(0x089AB6E4u, &recomp_unit_0105, "recomp_unit_0105");
    runtime.register_function(0x089AB6F0u, &recomp_unit_0105, "recomp_unit_0105");
    runtime.register_function(0x089AB6F4u, &recomp_unit_0105, "recomp_unit_0105");
    runtime.register_function(0x089AB704u, &recomp_unit_0105, "recomp_unit_0105");
    runtime.register_function(0x089AB708u, &recomp_unit_0105, "recomp_unit_0105");
    runtime.register_function(0x089AB73Cu, &recomp_unit_0105, "recomp_unit_0105");
    runtime.register_function(0x089AB784u, &recomp_unit_0105, "recomp_unit_0105");
    runtime.register_function(0x089AB794u, &recomp_unit_0105, "recomp_unit_0105");
    runtime.register_function(0x089AB798u, &recomp_unit_0105, "recomp_unit_0105");
    runtime.register_function(0x089AB7A4u, &recomp_unit_0105, "recomp_unit_0105");
    runtime.register_function(0x089AB7B0u, &recomp_unit_0105, "recomp_unit_0105");
    runtime.register_function(0x089AB7BCu, &recomp_unit_0105, "recomp_unit_0105");
    runtime.register_function(0x089AB7C8u, &recomp_unit_0105, "recomp_unit_0105");
    runtime.register_function(0x089AB7D8u, &recomp_unit_0105, "recomp_unit_0105");
    runtime.register_function(0x089AB7DCu, &recomp_unit_0105, "recomp_unit_0105");
    runtime.register_function(0x089AB7E8u, &recomp_unit_0105, "recomp_unit_0105");
    runtime.register_function(0x089AB7F4u, &recomp_unit_0105, "recomp_unit_0105");
    runtime.register_function(0x089AB800u, &recomp_unit_0105, "recomp_unit_0105");
    runtime.register_function(0x089AB814u, &recomp_unit_0105, "recomp_unit_0105");
    runtime.register_function(0x089AB828u, &recomp_unit_0105, "recomp_unit_0105");
    runtime.register_function(0x089AB838u, &recomp_unit_0105, "recomp_unit_0105");
    runtime.register_function(0x089AB840u, &recomp_unit_0105, "recomp_unit_0105");
    runtime.register_function(0x089AB854u, &recomp_unit_0105, "recomp_unit_0105");
    runtime.register_function(0x089AB85Cu, &recomp_unit_0105, "recomp_unit_0105");
    runtime.register_function(0x089AB870u, &recomp_unit_0105, "recomp_unit_0105");
    runtime.register_function(0x089AB87Cu, &recomp_unit_0105, "recomp_unit_0105");
    runtime.register_function(0x089AB884u, &recomp_unit_0105, "recomp_unit_0105");
    runtime.register_function(0x089AB894u, &recomp_unit_0105, "recomp_unit_0105");
    runtime.register_function(0x089AB8A0u, &recomp_unit_0105, "recomp_unit_0105");
    runtime.register_function(0x089AB8A8u, &recomp_unit_0105, "recomp_unit_0105");
    runtime.register_function(0x089AB8B0u, &recomp_unit_0105, "recomp_unit_0105");
    runtime.register_function(0x089AB8B8u, &recomp_unit_0105, "recomp_unit_0105");
    runtime.register_function(0x089AB8C4u, &recomp_unit_0105, "recomp_unit_0105");
    runtime.register_function(0x089AB8D0u, &recomp_unit_0105, "recomp_unit_0105");
    runtime.register_function(0x089AB90Cu, &recomp_unit_0105, "recomp_unit_0105");
    runtime.register_function(0x089AB920u, &recomp_unit_0105, "recomp_unit_0105");
    runtime.register_function(0x089AB93Cu, &recomp_unit_0105, "recomp_unit_0105");
    runtime.register_function(0x089AB948u, &recomp_unit_0105, "recomp_unit_0105");
    runtime.register_function(0x089AB960u, &recomp_unit_0105, "recomp_unit_0105");
    runtime.register_function(0x089AB9A0u, &recomp_unit_0105, "recomp_unit_0105");
    runtime.register_function(0x089AB9B4u, &recomp_unit_0105, "recomp_unit_0105");
    runtime.register_function(0x089AB9D0u, &recomp_unit_0105, "recomp_unit_0105");
    runtime.register_function(0x089AB9DCu, &recomp_unit_0105, "recomp_unit_0105");
    runtime.register_function(0x089AB9E0u, &recomp_unit_0105, "recomp_unit_0105");
    runtime.register_function(0x089AB9ECu, &recomp_unit_0105, "recomp_unit_0105");
    runtime.register_function(0x089AB9F0u, &recomp_unit_0105, "recomp_unit_0105");
    runtime.register_function(0x089ABA00u, &recomp_unit_0105, "recomp_unit_0105");
    runtime.register_function(0x089ABA04u, &recomp_unit_0105, "recomp_unit_0105");
    runtime.register_function(0x089ABA38u, &recomp_unit_0105, "recomp_unit_0105");
    runtime.register_function(0x089ABA64u, &recomp_unit_0105, "recomp_unit_0105");
    runtime.register_function(0x089ABA74u, &recomp_unit_0105, "recomp_unit_0105");
    runtime.register_function(0x089ABAB8u, &recomp_unit_0105, "recomp_unit_0105");
    runtime.register_function(0x089ABAECu, &recomp_unit_0105, "recomp_unit_0105");
    runtime.register_function(0x089ABB08u, &recomp_unit_0105, "recomp_unit_0105");
    runtime.register_function(0x089ABB1Cu, &recomp_unit_0105, "recomp_unit_0105");
    runtime.register_function(0x089ABB20u, &recomp_unit_0105, "recomp_unit_0105");
    runtime.register_function(0x089ABB38u, &recomp_unit_0105, "recomp_unit_0105");
    runtime.register_function(0x089ABB44u, &recomp_unit_0105, "recomp_unit_0105");
    runtime.register_function(0x089ABB58u, &recomp_unit_0105, "recomp_unit_0105");
    runtime.register_function(0x089ABB68u, &recomp_unit_0105, "recomp_unit_0105");
    runtime.register_function(0x089ABB80u, &recomp_unit_0105, "recomp_unit_0105");
    runtime.register_function(0x089ABBA8u, &recomp_unit_0105, "recomp_unit_0105");
    runtime.register_function(0x089ABBB8u, &recomp_unit_0105, "recomp_unit_0105");
    runtime.register_function(0x089ABBD0u, &recomp_unit_0105, "recomp_unit_0105");
    runtime.register_function(0x089ABBF8u, &recomp_unit_0105, "recomp_unit_0105");
    runtime.register_function(0x089ABC08u, &recomp_unit_0105, "recomp_unit_0105");
    runtime.register_function(0x089ABC20u, &recomp_unit_0105, "recomp_unit_0105");
    runtime.register_function(0x089ABC58u, &recomp_unit_0105, "recomp_unit_0105");
    runtime.register_function(0x089ABC70u, &recomp_unit_0105, "recomp_unit_0105");
    runtime.register_function(0x089ABC80u, &recomp_unit_0105, "recomp_unit_0105");
    runtime.register_function(0x089ABC94u, &recomp_unit_0105, "recomp_unit_0105");
    runtime.register_function(0x089ABC98u, &recomp_unit_0105, "recomp_unit_0105");
    runtime.register_function(0x089ABCA4u, &recomp_unit_0105, "recomp_unit_0105");
    runtime.register_function(0x089ABCB0u, &recomp_unit_0105, "recomp_unit_0105");
    runtime.register_function(0x089ABCC4u, &recomp_unit_0105, "recomp_unit_0105");
    runtime.register_function(0x089ABCD4u, &recomp_unit_0105, "recomp_unit_0105");
    runtime.register_function(0x089ABD08u, &recomp_unit_0105, "recomp_unit_0105");
    runtime.register_function(0x089ABD3Cu, &recomp_unit_0105, "recomp_unit_0105");
    runtime.register_function(0x089ABD4Cu, &recomp_unit_0105, "recomp_unit_0105");
    runtime.register_function(0x089ABD64u, &recomp_unit_0105, "recomp_unit_0105");
    runtime.register_function(0x089ABD74u, &recomp_unit_0105, "recomp_unit_0105");
    runtime.register_function(0x089ABD90u, &recomp_unit_0105, "recomp_unit_0105");
    runtime.register_function(0x089ABDA8u, &recomp_unit_0105, "recomp_unit_0105");
    runtime.register_function(0x089ABDD0u, &recomp_unit_0105, "recomp_unit_0105");
    runtime.register_function(0x089ABDDCu, &recomp_unit_0105, "recomp_unit_0105");
    runtime.register_function(0x089ABDE4u, &recomp_unit_0105, "recomp_unit_0105");
    runtime.register_function(0x089ABE08u, &recomp_unit_0105, "recomp_unit_0105");
    runtime.register_function(0x089ABE20u, &recomp_unit_0105, "recomp_unit_0105");
    runtime.register_function(0x089ABE38u, &recomp_unit_0105, "recomp_unit_0105");
    runtime.register_function(0x089ABE50u, &recomp_unit_0105, "recomp_unit_0105");
    runtime.register_function(0x089ABE64u, &recomp_unit_0105, "recomp_unit_0105");
    runtime.register_function(0x089ABE74u, &recomp_unit_0105, "recomp_unit_0105");
    runtime.register_function(0x089ABE90u, &recomp_unit_0105, "recomp_unit_0105");
    runtime.register_function(0x089ABE98u, &recomp_unit_0105, "recomp_unit_0105");
    runtime.register_function(0x089ABEA4u, &recomp_unit_0105, "recomp_unit_0105");
    runtime.register_function(0x089ABEB4u, &recomp_unit_0105, "recomp_unit_0105");
    runtime.register_function(0x089ABEC0u, &recomp_unit_0105, "recomp_unit_0105");
    runtime.register_function(0x089ABEE8u, &recomp_unit_0105, "recomp_unit_0105");
    runtime.register_function(0x089ABF1Cu, &recomp_unit_0105, "recomp_unit_0105");
    runtime.register_function(0x089ABF2Cu, &recomp_unit_0105, "recomp_unit_0105");
    runtime.register_function(0x089ABF48u, &recomp_unit_0105, "recomp_unit_0105");
    runtime.register_function(0x089ABF58u, &recomp_unit_0105, "recomp_unit_0105");
    runtime.register_function(0x089ABF74u, &recomp_unit_0105, "recomp_unit_0105");
    runtime.register_function(0x089ABF9Cu, &recomp_unit_0105, "recomp_unit_0105");
    runtime.register_function(0x089ABFB4u, &recomp_unit_0105, "recomp_unit_0105");
    runtime.register_function(0x089ABFBCu, &recomp_unit_0105, "recomp_unit_0105");
    runtime.register_function(0x089ABFD0u, &recomp_unit_0105, "recomp_unit_0105");
    runtime.register_function(0x089ABFE4u, &recomp_unit_0105, "recomp_unit_0105");
    runtime.register_function(0x089ABFE8u, &recomp_unit_0105, "recomp_unit_0105");
}
} // namespace psprecomp
