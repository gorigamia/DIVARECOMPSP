#include "psprecomp/runtime.hpp"
#include "generated_units.hpp"
#include <bit>
#include <cmath>
#include <cstdint>
#include <limits>

namespace psprecomp {
static const std::uint16_t kEntryIds_recomp_unit_0002[4095] = {
    1, 0, 0, 0, 2, 0, 0, 0, 0, 0, 0, 0, 0, 3, 0, 0, 0, 0, 0, 0, 0, 4, 0, 5, 0, 0, 6, 0, 7, 0, 0, 0,
    0, 0, 8, 9, 0, 10, 0, 0, 0, 0, 0, 0, 11, 0, 0, 0, 12, 13, 0, 0, 14, 0, 15, 0, 0, 0, 0, 0, 0, 0, 16, 0,
    0, 0, 0, 0, 0, 0, 0, 17, 0, 18, 19, 0, 0, 0, 20, 0, 0, 21, 0, 22, 0, 0, 0, 0, 0, 23, 0, 0, 0, 0, 0, 0,
    0, 0, 24, 0, 25, 0, 0, 0, 0, 26, 0, 0, 0, 27, 0, 28, 0, 29, 0, 0, 0, 0, 30, 0, 0, 0, 0, 31, 0, 32, 33, 0,
    0, 0, 0, 34, 0, 35, 0, 0, 0, 0, 0, 36, 0, 37, 0, 38, 39, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 40, 0, 41,
    0, 0, 0, 42, 0, 0, 0, 0, 0, 0, 43, 0, 0, 0, 0, 0, 44, 0, 0, 0, 0, 45, 0, 46, 0, 0, 0, 0, 47, 0, 48, 0,
    0, 0, 0, 49, 0, 50, 0, 0, 51, 0, 52, 0, 0, 0, 0, 53, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 54, 0, 0, 55, 0,
    0, 0, 0, 0, 0, 0, 56, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 57, 0, 0, 58, 0, 0, 0, 0, 59, 0, 60, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 61, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 62, 0, 0, 63, 0, 64, 0, 65, 0, 0,
    0, 0, 66, 0, 0, 0, 0, 67, 0, 68, 0, 0, 69, 0, 0, 0, 0, 0, 70, 0, 0, 0, 0, 0, 0, 71, 0, 0, 0, 72, 73, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 74, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 75, 0,
    76, 0, 0, 0, 0, 0, 0, 0, 77, 0, 0, 0, 0, 0, 0, 0, 0, 0, 78, 0, 0, 0, 79, 80, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 81, 0, 0, 82, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 83, 0, 0, 0, 84, 0, 0, 0, 0, 85, 0, 86, 0, 0, 0, 0, 0, 0, 0, 0, 87, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 88, 0, 0, 89, 0, 90, 0, 0, 0, 0, 0, 91, 0,
    92, 0, 0, 0, 0, 0, 0, 93, 0, 94, 0, 0, 0, 0, 95, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 96, 0, 0, 0, 97, 0, 98, 0, 99, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 100, 0, 0, 0, 0, 101, 0, 0, 0, 102,
    103, 0, 0, 0, 0, 104, 0, 0, 0, 0, 0, 0, 105, 0, 0, 0, 0, 0, 0, 0, 106, 0, 0, 0, 0, 0, 107, 0, 0, 0, 0, 108,
    0, 0, 0, 0, 0, 109, 0, 0, 0, 0, 110, 0, 0, 0, 0, 0, 111, 0, 0, 0, 0, 112, 0, 0, 0, 0, 0, 113, 0, 0, 0, 0,
    114, 0, 0, 0, 0, 0, 115, 0, 0, 0, 0, 116, 0, 0, 0, 0, 0, 0, 0, 117, 0, 0, 0, 0, 0, 118, 0, 0, 0, 0, 119, 0,
    0, 0, 0, 0, 120, 0, 0, 0, 0, 121, 0, 0, 0, 0, 0, 122, 0, 0, 0, 0, 123, 0, 0, 0, 0, 0, 124, 0, 0, 0, 0, 125,
    0, 126, 0, 0, 0, 127, 0, 0, 0, 0, 128, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 129, 0, 0, 0, 0, 130, 0, 0, 0, 0,
    131, 0, 0, 132, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 133, 0, 134, 0, 135, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 136, 0, 0, 137, 0, 0, 0, 0, 0, 138, 0, 139, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 140, 0,
    141, 0, 0, 0, 0, 0, 142, 0, 0, 0, 0, 143, 0, 0, 0, 0, 0, 0, 144, 0, 0, 0, 0, 0, 0, 145, 0, 146, 0, 147, 0, 0,
    148, 0, 0, 149, 0, 150, 0, 151, 0, 0, 0, 152, 0, 0, 0, 0, 153, 0, 0, 0, 0, 154, 0, 0, 155, 0, 0, 0, 0, 156, 0, 0,
    0, 0, 0, 157, 0, 0, 0, 158, 0, 0, 0, 0, 0, 0, 0, 0, 159, 0, 0, 0, 160, 0, 0, 0, 0, 0, 161, 0, 0, 0, 0, 0,
    0, 0, 0, 162, 0, 0, 0, 0, 0, 0, 163, 0, 0, 0, 0, 0, 0, 164, 0, 0, 0, 0, 0, 165, 0, 0, 0, 166, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 167, 0, 168, 0, 0, 0, 0, 0, 0, 169, 0, 0, 0, 170, 0, 0, 0,
    0, 171, 0, 172, 0, 173, 0, 174, 0, 0, 175, 176, 177, 178, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 179, 0, 0, 180, 0, 0,
    0, 0, 0, 181, 0, 0, 0, 0, 182, 0, 0, 0, 0, 183, 0, 184, 0, 185, 0, 186, 0, 0, 0, 0, 0, 0, 187, 0, 0, 188, 0, 0,
    189, 0, 190, 0, 191, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 192, 0, 0, 0, 0, 0, 193, 0, 0, 0, 0, 194,
    0, 195, 0, 0, 196, 0, 0, 197, 0, 0, 0, 0, 198, 0, 0, 0, 0, 199, 0, 0, 0, 0, 0, 0, 0, 200, 0, 0, 0, 0, 0, 0,
    0, 201, 0, 0, 0, 0, 202, 0, 203, 0, 204, 0, 0, 0, 0, 205, 0, 206, 0, 0, 0, 207, 0, 208, 0, 209, 0, 0, 0, 210, 0, 0,
    211, 0, 0, 212, 0, 0, 0, 0, 0, 0, 213, 0, 0, 0, 0, 0, 214, 0, 0, 0, 215, 0, 0, 0, 0, 216, 0, 0, 217, 0, 0, 0,
    218, 0, 0, 0, 219, 0, 0, 0, 0, 220, 0, 0, 0, 0, 221, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 222, 0, 223, 0, 0, 0, 0, 0, 0, 224, 0, 0, 0, 225, 0, 0, 0, 0, 226, 0, 227, 0, 228, 0, 229, 230, 231, 232, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 233, 0, 0, 234, 0, 0, 0, 0, 0, 235, 0, 0, 0, 0, 236, 0, 0, 0, 0, 237, 0, 238,
    0, 239, 0, 0, 240, 0, 241, 0, 242, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 243, 0, 0, 0, 0, 0, 244, 0,
    0, 0, 0, 245, 0, 246, 0, 0, 247, 0, 0, 0, 248, 0, 0, 249, 0, 0, 0, 0, 0, 0, 250, 0, 0, 251, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 252, 0, 0, 0, 0, 253, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 254, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 255, 0, 256, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 257, 0, 258, 0, 0, 0, 0, 0, 259, 0, 0, 0, 0, 260, 0,
    0, 261, 0, 0, 0, 262, 263, 0, 0, 0, 0, 0, 0, 0, 0, 0, 264, 0, 0, 0, 0, 0, 0, 0, 265, 0, 266, 267, 0, 0, 0, 0,
    0, 0, 268, 0, 0, 269, 0, 0, 0, 0, 0, 270, 0, 0, 271, 0, 0, 0, 0, 0, 272, 0, 273, 0, 274, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 275, 0, 0, 0, 0, 276, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 277, 0, 0, 0, 0, 0,
    0, 0, 278, 0, 0, 0, 0, 0, 0, 279, 0, 280, 0, 0, 0, 0, 0, 0, 0, 0, 0, 281, 0, 0, 0, 282, 0, 0, 283, 0, 0, 0,
    0, 0, 0, 0, 0, 284, 0, 0, 285, 0, 0, 286, 0, 287, 0, 0, 0, 288, 0, 0, 0, 0, 0, 0, 289, 0, 0, 0, 0, 290, 0, 0,
    0, 0, 0, 0, 0, 0, 291, 0, 0, 0, 0, 0, 292, 0, 0, 0, 0, 0, 0, 0, 0, 293, 0, 294, 0, 0, 0, 0, 295, 0, 0, 0,
    0, 296, 0, 0, 0, 0, 0, 0, 0, 0, 297, 0, 298, 0, 0, 0, 299, 0, 0, 0, 300, 0, 0, 0, 0, 0, 0, 0, 0, 301, 0, 0,
    302, 0, 0, 0, 0, 0, 0, 0, 303, 0, 0, 0, 0, 304, 0, 305, 0, 306, 0, 0, 0, 0, 307, 0, 308, 0, 0, 0, 309, 0, 310, 0,
    311, 0, 0, 0, 0, 312, 0, 0, 313, 0, 0, 0, 314, 0, 0, 0, 0, 0, 0, 315, 0, 0, 0, 0, 316, 0, 0, 317, 0, 0, 318, 0,
    0, 0, 319, 0, 0, 0, 0, 320, 0, 0, 0, 321, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 322, 0, 0, 0, 323, 324, 0, 0, 0,
    0, 0, 325, 0, 0, 0, 0, 326, 0, 0, 0, 327, 328, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 329, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 330, 0, 0, 0, 0, 0, 0, 331, 0, 332, 0, 0, 0, 0, 0, 0, 0, 0, 0, 333, 0, 0, 0,
    0, 0, 0, 0, 334, 0, 0, 0, 0, 335, 0, 336, 0, 0, 0, 0, 337, 0, 0, 0, 0, 338, 0, 0, 0, 0, 0, 0, 339, 0, 0, 0,
    0, 0, 340, 0, 0, 0, 341, 0, 0, 0, 0, 342, 0, 0, 0, 0, 343, 0, 0, 0, 0, 0, 0, 0, 0, 344, 0, 0, 0, 0, 0, 0,
    0, 0, 345, 0, 0, 0, 0, 0, 0, 346, 0, 347, 0, 0, 0, 0, 348, 0, 0, 0, 0, 0, 0, 349, 0, 350, 0, 351, 0, 0, 352, 0,
    353, 0, 0, 0, 0, 354, 0, 0, 355, 0, 0, 0, 0, 0, 0, 0, 356, 0, 357, 0, 358, 0, 0, 359, 0, 360, 0, 0, 0, 0, 0, 0,
    361, 0, 0, 0, 0, 0, 0, 0, 362, 0, 0, 0, 0, 363, 0, 0, 364, 0, 365, 0, 0, 0, 366, 0, 367, 0, 368, 0, 0, 369, 0, 0,
    370, 0, 371, 0, 0, 372, 0, 0, 0, 373, 0, 0, 0, 374, 0, 375, 0, 0, 376, 0, 377, 0, 0, 0, 378, 0, 0, 0, 379, 0, 0, 0,
    0, 0, 0, 380, 0, 381, 0, 0, 0, 0, 382, 0, 0, 0, 0, 0, 0, 383, 0, 384, 385, 386, 0, 387, 0, 0, 0, 0, 388, 0, 0, 389,
    0, 0, 0, 0, 0, 0, 0, 390, 0, 391, 0, 0, 392, 0, 0, 0, 0, 0, 393, 0, 394, 0, 0, 395, 0, 0, 0, 0, 396, 0, 0, 0,
    0, 0, 0, 0, 397, 0, 0, 0, 0, 398, 0, 0, 0, 0, 399, 0, 0, 0, 0, 0, 0, 0, 0, 0, 400, 0, 0, 401, 0, 0, 0, 0,
    402, 0, 0, 0, 0, 403, 404, 0, 0, 405, 0, 406, 0, 0, 0, 0, 0, 0, 0, 407, 0, 0, 0, 408, 0, 409, 0, 0, 410, 0, 0, 0,
    411, 0, 0, 0, 0, 412, 0, 413, 0, 0, 0, 0, 0, 0, 0, 414, 0, 0, 0, 0, 0, 0, 0, 415, 0, 0, 0, 0, 416, 0, 0, 417,
    0, 418, 0, 0, 0, 419, 0, 420, 0, 421, 0, 422, 0, 0, 423, 0, 0, 424, 0, 0, 425, 0, 0, 426, 0, 0, 427, 0, 428, 0, 0, 0,
    429, 0, 0, 430, 0, 0, 0, 431, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 432, 0, 433, 0, 0, 0, 434, 0, 435, 0, 0, 0,
    0, 0, 436, 0, 437, 0, 0, 438, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 439, 0, 0, 0, 0, 0, 0, 440, 0, 441, 0,
    442, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 443, 0, 444, 0, 445, 0, 0, 0, 446, 0, 447, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    448, 0, 449, 0, 450, 0, 451, 0, 0, 452, 0, 453, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 454, 0, 0, 0, 0, 455, 0, 0, 0,
    456, 0, 457, 0, 0, 458, 0, 459, 0, 0, 0, 0, 460, 0, 0, 0, 0, 0, 0, 0, 0, 0, 461, 0, 0, 0, 0, 0, 0, 462, 0, 463,
    0, 464, 0, 0, 0, 465, 0, 466, 0, 0, 0, 0, 0, 0, 0, 0, 0, 467, 0, 0, 0, 0, 0, 0, 0, 468, 0, 0, 0, 0, 469, 0,
    0, 0, 0, 470, 0, 471, 0, 0, 472, 0, 473, 0, 474, 0, 0, 475, 0, 476, 0, 0, 0, 0, 0, 0, 0, 0, 0, 477, 0, 0, 478, 0,
    479, 0, 0, 480, 0, 0, 0, 0, 0, 0, 0, 481, 0, 482, 0, 0, 0, 0, 483, 0, 484, 0, 0, 485, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 486, 0, 0, 0, 0, 0, 0, 487, 0, 488, 0, 489, 490, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 491, 0, 492, 0,
    493, 0, 0, 0, 0, 494, 0, 495, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 496, 0, 497, 0, 498, 499, 0, 500, 0, 501, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 502, 0, 0, 0, 503, 0, 504, 0, 0, 0, 505, 0, 506, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 507, 0, 0, 0, 0, 0, 508, 0, 509, 0, 0, 0, 0, 510, 0, 0, 511, 0, 512, 513, 0, 0, 0, 514, 0, 515, 0, 0, 516, 0, 517,
    0, 0, 518, 0, 519, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 520, 521, 0, 522, 0, 523, 0, 524, 0, 525, 0, 0, 526, 0, 0, 527, 0,
    528, 0, 0, 0, 529, 0, 530, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 531, 0, 0, 0, 0, 0, 0, 0, 0, 532, 0, 533, 0, 0, 534,
    0, 535, 0, 536, 0, 0, 537, 0, 538, 0, 539, 0, 540, 0, 0, 0, 0, 0, 0, 0, 0, 0, 541, 0, 0, 0, 0, 542, 0, 0, 0, 543,
    0, 544, 0, 0, 545, 0, 0, 546, 0, 0, 0, 0, 0, 0, 0, 0, 0, 547, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 548, 0, 0, 0,
    0, 0, 0, 549, 0, 550, 0, 551, 0, 0, 0, 0, 552, 0, 553, 0, 0, 0, 0, 554, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 555, 0, 0, 0, 0, 0, 0, 556, 0, 557, 0, 0, 558, 0, 0, 0, 0, 559, 0, 560, 0, 0, 0, 0, 0, 0, 0, 561, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 562, 0, 0, 0, 0, 0, 0, 563, 0, 564, 0, 565, 0, 0, 0, 566, 0, 567, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 568, 0, 0, 0, 0, 0, 0, 0, 0, 0, 569, 0, 570, 0, 571, 0, 572, 0, 0, 573, 0, 574, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 575, 0, 0, 0, 0, 576, 0, 0, 0, 577, 0, 578, 0, 0, 579, 0, 580, 0, 0, 0, 0, 581, 0, 0, 0, 0, 0, 0, 582, 0, 0,
    0, 0, 583, 0, 584, 0, 585, 0, 0, 0, 0, 0, 0, 586, 0, 587, 0, 0, 0, 0, 0, 588, 0, 0, 0, 0, 0, 0, 589, 0, 0, 0,
    0, 0, 0, 0, 590, 0, 591, 0, 592, 0, 0, 593, 0, 594, 595, 0, 0, 0, 0, 0, 0, 596, 0, 597, 0, 0, 0, 0, 598, 0, 599, 0,
    600, 0, 0, 601, 0, 0, 0, 0, 0, 0, 602, 0, 0, 0, 0, 603, 0, 604, 0, 605, 0, 0, 0, 0, 0, 0, 606, 0, 607, 0, 0, 0,
    0, 0, 608, 0, 0, 0, 0, 0, 0, 609, 0, 0, 0, 0, 0, 0, 0, 610, 0, 611, 0, 612, 0, 0, 613, 0, 614, 615, 0, 0, 0, 0,
    0, 0, 616, 0, 617, 0, 0, 0, 0, 618, 0, 619, 0, 620, 0, 0, 621, 0, 0, 0, 0, 0, 0, 0, 0, 622, 0, 0, 0, 0, 623, 0,
    624, 0, 625, 626, 0, 0, 0, 0, 0, 0, 627, 0, 628, 0, 629, 0, 0, 0, 630, 0, 0, 0, 631, 0, 632, 0, 0, 0, 633, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 634, 0, 635, 0, 636, 0, 0, 637, 0, 638, 0, 639, 0, 640, 0, 0, 0, 0, 641, 0, 642, 0, 643, 0,
    0, 644, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 645, 0, 0, 0, 0, 646, 0, 647, 0, 648, 0, 0, 0, 0, 0, 0, 0, 0, 0, 649,
    0, 650, 0, 651, 0, 0, 0, 652, 0, 0, 0, 0, 0, 0, 653, 0, 0, 0, 0, 0, 654, 0, 0, 655, 0, 656, 0, 657, 0, 658, 0, 0,
    659, 0, 660, 661, 0, 0, 0, 0, 0, 0, 0, 0, 0, 662, 0, 0, 0, 0, 663, 0, 0, 0, 664, 0, 665, 0, 0, 666, 0, 667, 0, 0,
    0, 0, 668, 0, 669, 0, 0, 0, 670, 0, 671, 0, 0, 672, 0, 0, 0, 0, 0, 0, 0, 673, 0, 674, 0, 0, 0, 675, 0, 0, 0, 676,
    0, 0, 0, 0, 0, 0, 677, 678, 0, 0, 0, 0, 0, 0, 679, 0, 0, 680, 0, 681, 0, 0, 682, 0, 0, 683, 0, 684, 0, 0, 0, 0,
    0, 0, 0, 685, 0, 0, 0, 0, 0, 686, 0, 0, 0, 0, 0, 0, 687, 0, 0, 0, 0, 0, 0, 0, 688, 0, 0, 0, 0, 0, 689, 0,
    690, 0, 0, 0, 0, 0, 0, 0, 0, 691, 0, 0, 692, 0, 0, 693, 0, 0, 0, 0, 694, 0, 0, 0, 0, 695, 0, 0, 0, 0, 696, 0,
    0, 0, 697, 0, 698, 0, 0, 0, 0, 699, 0, 0, 0, 0, 0, 0, 0, 0, 700, 0, 0, 0, 701, 702, 0, 0, 0, 0, 703, 0, 704, 0,
    0, 0, 0, 0, 0, 705, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 706, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    707, 708, 0, 0, 709, 710, 0, 711, 0, 712, 0, 0, 713, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 714, 0, 0, 0, 0, 715, 716, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 717, 0, 0, 0, 718, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 719, 0, 720, 0, 0, 0, 721, 0, 0, 722, 723,
    0, 0, 724, 0, 0, 725, 0, 726, 0, 0, 727, 0, 0, 728, 729, 0, 0, 730, 0, 0, 731, 0, 732, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 733, 0, 0, 0, 0, 0, 0, 0, 734, 735, 0, 736, 737, 0, 0, 0, 738, 0, 0, 0, 0, 0,
    739, 0, 740, 0, 0, 0, 741, 0, 0, 0, 0, 0, 742, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 743, 0, 0, 0, 0, 0, 744,
    0, 0, 745, 0, 0, 0, 0, 0, 0, 0, 0, 746, 0, 0, 0, 747, 0, 0, 0, 0, 0, 748, 0, 0, 0, 0, 0, 749, 0, 0, 0, 750,
    0, 0, 0, 0, 0, 751, 0, 0, 0, 0, 752, 0, 0, 0, 0, 753, 0, 0, 0, 0, 0, 754, 0, 755, 0, 0, 0, 0, 756, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 757, 0, 758, 0, 0, 0, 759, 760, 0, 0, 0, 761, 0, 0, 762, 0, 0, 0, 763, 0, 0, 0, 764, 0, 0, 765,
    0, 0, 766, 0, 0, 0, 767, 0, 0, 0, 0, 0, 0, 768, 0, 0, 0, 769, 770, 771, 0, 0, 772, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 773, 0, 0, 774, 0, 0, 0, 775, 0, 0, 776, 0, 0, 0, 0, 0, 0, 0, 777, 0, 0, 0, 0, 778,
    0, 779, 0, 0, 780, 0, 0, 0, 0, 0, 781, 782, 0, 0, 0, 0, 0, 0, 783, 0, 0, 784, 0, 785, 0, 0, 0, 0, 786, 787, 0, 0,
    788, 0, 0, 0, 0, 0, 789, 0, 790, 0, 0, 791, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 792, 0, 0, 0, 0, 0, 0, 0, 793, 0,
    794, 0, 795, 0, 796, 0, 0, 797, 0, 0, 0, 0, 798, 0, 0, 0, 799, 0, 800, 801, 0, 0, 0, 802, 0, 803, 0, 0, 804, 0, 0, 0,
    0, 0, 805, 0, 806, 807, 0, 808, 0, 809, 0, 0, 0, 0, 810, 0, 0, 0, 0, 0, 811, 0, 0, 0, 812, 0, 0, 0, 0, 0, 813, 0,
    0, 0, 0, 0, 0, 814, 0, 0, 815, 0, 0, 0, 0, 0, 816, 0, 817, 818, 819, 0, 0, 0, 0, 0, 820, 0, 0, 821, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 822, 0, 0, 0, 0, 823, 0, 0, 0, 0, 824, 0, 0, 825, 0, 0, 0, 0, 826, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 827, 0, 828, 0, 0, 0, 0, 0, 829, 0, 0, 0, 0, 830, 0, 831, 0, 0, 832, 833, 0, 0, 0, 0, 0, 0, 834, 0, 0, 0,
    0, 0, 0, 835, 0, 0, 0, 0, 836, 0, 0, 837, 0, 0, 0, 0, 0, 838, 0, 0, 0, 0, 0, 0, 0, 0, 839, 0, 840, 0, 0, 0,
    0, 841, 0, 0, 0, 0, 842, 0, 843, 0, 844, 845, 846, 847, 0, 848, 0, 0, 849, 0, 0, 0, 0, 0, 0, 0, 850, 851, 0, 0, 0, 852,
    0, 0, 0, 853, 0, 0, 0, 0, 0, 0, 854, 0, 855, 0, 0, 0, 0, 856, 0, 0, 857, 0, 0, 858, 0, 0, 0, 0, 859, 0, 0, 0,
    0, 860, 0, 0, 0, 0, 0, 0, 861, 0, 0, 862, 0, 0, 0, 0, 0, 0, 863, 0, 864, 0, 0, 0, 0, 865, 0, 866, 0, 0, 867, 868,
    869, 870, 871, 0, 0, 0, 872, 0, 0, 0, 0, 873, 0, 0, 0, 0, 0, 874, 0, 0, 0, 0, 875, 876, 0, 877, 0, 0, 0, 0, 878,
};
void recomp_unit_0002_entry(Runtime &rt, AllegrexContext &ctx, std::uint16_t direct_entry_id, GuestMemory::AotFastView &aot_mem) {
    std::uint32_t jump_target = 0u;
    std::uint32_t local_transfers = 0u;
    std::uint32_t local_pc = ctx.pc;
    std::uint32_t entry_id = direct_entry_id;
LOCAL_DISPATCH:
    {
    if (entry_id == 0u) {
        const std::uint32_t entry_delta = local_pc - 0x0880C000u;
        entry_id = (entry_delta < 16380u && (entry_delta & 3u) == 0u) ? kEntryIds_recomp_unit_0002[entry_delta >> 2u] : 0u;
    }
    switch (entry_id) {
    case 1u: goto L_0880C000;
    case 2u: goto L_0880C010;
    case 3u: goto L_0880C034;
    case 4u: goto L_0880C054;
    case 5u: goto L_0880C05C;
    case 6u: goto L_0880C068;
    case 7u: goto L_0880C070;
    case 8u: goto L_0880C088;
    case 9u: goto L_0880C08C;
    case 10u: goto L_0880C094;
    case 11u: goto L_0880C0B0;
    case 12u: goto L_0880C0C0;
    case 13u: goto L_0880C0C4;
    case 14u: goto L_0880C0D0;
    case 15u: goto L_0880C0D8;
    case 16u: goto L_0880C0F8;
    case 17u: goto L_0880C11C;
    case 18u: goto L_0880C124;
    case 19u: goto L_0880C128;
    case 20u: goto L_0880C138;
    case 21u: goto L_0880C144;
    case 22u: goto L_0880C14C;
    case 23u: goto L_0880C164;
    case 24u: goto L_0880C188;
    case 25u: goto L_0880C190;
    case 26u: goto L_0880C1A4;
    case 27u: goto L_0880C1B4;
    case 28u: goto L_0880C1BC;
    case 29u: goto L_0880C1C4;
    case 30u: goto L_0880C1D8;
    case 31u: goto L_0880C1EC;
    case 32u: goto L_0880C1F4;
    case 33u: goto L_0880C1F8;
    case 34u: goto L_0880C20C;
    case 35u: goto L_0880C214;
    case 36u: goto L_0880C22C;
    case 37u: goto L_0880C234;
    case 38u: goto L_0880C23C;
    case 39u: goto L_0880C240;
    case 40u: goto L_0880C274;
    case 41u: goto L_0880C27C;
    case 42u: goto L_0880C28C;
    case 43u: goto L_0880C2A8;
    case 44u: goto L_0880C2C0;
    case 45u: goto L_0880C2D4;
    case 46u: goto L_0880C2DC;
    case 47u: goto L_0880C2F0;
    case 48u: goto L_0880C2F8;
    case 49u: goto L_0880C30C;
    case 50u: goto L_0880C314;
    case 51u: goto L_0880C320;
    case 52u: goto L_0880C328;
    case 53u: goto L_0880C33C;
    case 54u: goto L_0880C36C;
    case 55u: goto L_0880C378;
    case 56u: goto L_0880C398;
    case 57u: goto L_0880C3C4;
    case 58u: goto L_0880C3D0;
    case 59u: goto L_0880C3E4;
    case 60u: goto L_0880C3EC;
    case 61u: goto L_0880C414;
    case 62u: goto L_0880C458;
    case 63u: goto L_0880C464;
    case 64u: goto L_0880C46C;
    case 65u: goto L_0880C474;
    case 66u: goto L_0880C488;
    case 67u: goto L_0880C49C;
    case 68u: goto L_0880C4A4;
    case 69u: goto L_0880C4B0;
    case 70u: goto L_0880C4C8;
    case 71u: goto L_0880C4E4;
    case 72u: goto L_0880C4F4;
    case 73u: goto L_0880C4F8;
    case 74u: goto L_0880C548;
    case 75u: goto L_0880C578;
    case 76u: goto L_0880C580;
    case 77u: goto L_0880C5A0;
    case 78u: goto L_0880C5C8;
    case 79u: goto L_0880C5D8;
    case 80u: goto L_0880C5DC;
    case 81u: goto L_0880C6D0;
    case 82u: goto L_0880C6DC;
    case 83u: goto L_0880C724;
    case 84u: goto L_0880C734;
    case 85u: goto L_0880C748;
    case 86u: goto L_0880C750;
    case 87u: goto L_0880C774;
    case 88u: goto L_0880C7CC;
    case 89u: goto L_0880C7D8;
    case 90u: goto L_0880C7E0;
    case 91u: goto L_0880C7F8;
    case 92u: goto L_0880C800;
    case 93u: goto L_0880C81C;
    case 94u: goto L_0880C824;
    case 95u: goto L_0880C838;
    case 96u: goto L_0880C884;
    case 97u: goto L_0880C894;
    case 98u: goto L_0880C89C;
    case 99u: goto L_0880C8A4;
    case 100u: goto L_0880C8D8;
    case 101u: goto L_0880C8EC;
    case 102u: goto L_0880C8FC;
    case 103u: goto L_0880C900;
    case 104u: goto L_0880C914;
    case 105u: goto L_0880C930;
    case 106u: goto L_0880C950;
    case 107u: goto L_0880C968;
    case 108u: goto L_0880C97C;
    case 109u: goto L_0880C994;
    case 110u: goto L_0880C9A8;
    case 111u: goto L_0880C9C0;
    case 112u: goto L_0880C9D4;
    case 113u: goto L_0880C9EC;
    case 114u: goto L_0880CA00;
    case 115u: goto L_0880CA18;
    case 116u: goto L_0880CA2C;
    case 117u: goto L_0880CA4C;
    case 118u: goto L_0880CA64;
    case 119u: goto L_0880CA78;
    case 120u: goto L_0880CA90;
    case 121u: goto L_0880CAA4;
    case 122u: goto L_0880CABC;
    case 123u: goto L_0880CAD0;
    case 124u: goto L_0880CAE8;
    case 125u: goto L_0880CAFC;
    case 126u: goto L_0880CB04;
    case 127u: goto L_0880CB14;
    case 128u: goto L_0880CB28;
    case 129u: goto L_0880CB58;
    case 130u: goto L_0880CB6C;
    case 131u: goto L_0880CB80;
    case 132u: goto L_0880CB8C;
    case 133u: goto L_0880CBD0;
    case 134u: goto L_0880CBD8;
    case 135u: goto L_0880CBE0;
    case 136u: goto L_0880CC1C;
    case 137u: goto L_0880CC28;
    case 138u: goto L_0880CC40;
    case 139u: goto L_0880CC48;
    case 140u: goto L_0880CC78;
    case 141u: goto L_0880CC80;
    case 142u: goto L_0880CC98;
    case 143u: goto L_0880CCAC;
    case 144u: goto L_0880CCC8;
    case 145u: goto L_0880CCE4;
    case 146u: goto L_0880CCEC;
    case 147u: goto L_0880CCF4;
    case 148u: goto L_0880CD00;
    case 149u: goto L_0880CD0C;
    case 150u: goto L_0880CD14;
    case 151u: goto L_0880CD1C;
    case 152u: goto L_0880CD2C;
    case 153u: goto L_0880CD40;
    case 154u: goto L_0880CD54;
    case 155u: goto L_0880CD60;
    case 156u: goto L_0880CD74;
    case 157u: goto L_0880CD8C;
    case 158u: goto L_0880CD9C;
    case 159u: goto L_0880CDC0;
    case 160u: goto L_0880CDD0;
    case 161u: goto L_0880CDE8;
    case 162u: goto L_0880CE0C;
    case 163u: goto L_0880CE28;
    case 164u: goto L_0880CE44;
    case 165u: goto L_0880CE5C;
    case 166u: goto L_0880CE6C;
    case 167u: goto L_0880CEBC;
    case 168u: goto L_0880CEC4;
    case 169u: goto L_0880CEE0;
    case 170u: goto L_0880CEF0;
    case 171u: goto L_0880CF04;
    case 172u: goto L_0880CF0C;
    case 173u: goto L_0880CF14;
    case 174u: goto L_0880CF1C;
    case 175u: goto L_0880CF28;
    case 176u: goto L_0880CF2C;
    case 177u: goto L_0880CF30;
    case 178u: goto L_0880CF34;
    case 179u: goto L_0880CF68;
    case 180u: goto L_0880CF74;
    case 181u: goto L_0880CF8C;
    case 182u: goto L_0880CFA0;
    case 183u: goto L_0880CFB4;
    case 184u: goto L_0880CFBC;
    case 185u: goto L_0880CFC4;
    case 186u: goto L_0880CFCC;
    case 187u: goto L_0880CFE8;
    case 188u: goto L_0880CFF4;
    case 189u: goto L_0880D000;
    case 190u: goto L_0880D008;
    case 191u: goto L_0880D010;
    case 192u: goto L_0880D050;
    case 193u: goto L_0880D068;
    case 194u: goto L_0880D07C;
    case 195u: goto L_0880D084;
    case 196u: goto L_0880D090;
    case 197u: goto L_0880D09C;
    case 198u: goto L_0880D0B0;
    case 199u: goto L_0880D0C4;
    case 200u: goto L_0880D0E4;
    case 201u: goto L_0880D104;
    case 202u: goto L_0880D118;
    case 203u: goto L_0880D120;
    case 204u: goto L_0880D128;
    case 205u: goto L_0880D13C;
    case 206u: goto L_0880D144;
    case 207u: goto L_0880D154;
    case 208u: goto L_0880D15C;
    case 209u: goto L_0880D164;
    case 210u: goto L_0880D174;
    case 211u: goto L_0880D180;
    case 212u: goto L_0880D18C;
    case 213u: goto L_0880D1A8;
    case 214u: goto L_0880D1C0;
    case 215u: goto L_0880D1D0;
    case 216u: goto L_0880D1E4;
    case 217u: goto L_0880D1F0;
    case 218u: goto L_0880D200;
    case 219u: goto L_0880D210;
    case 220u: goto L_0880D224;
    case 221u: goto L_0880D238;
    case 222u: goto L_0880D288;
    case 223u: goto L_0880D290;
    case 224u: goto L_0880D2AC;
    case 225u: goto L_0880D2BC;
    case 226u: goto L_0880D2D0;
    case 227u: goto L_0880D2D8;
    case 228u: goto L_0880D2E0;
    case 229u: goto L_0880D2E8;
    case 230u: goto L_0880D2EC;
    case 231u: goto L_0880D2F0;
    case 232u: goto L_0880D2F4;
    case 233u: goto L_0880D328;
    case 234u: goto L_0880D334;
    case 235u: goto L_0880D34C;
    case 236u: goto L_0880D360;
    case 237u: goto L_0880D374;
    case 238u: goto L_0880D37C;
    case 239u: goto L_0880D384;
    case 240u: goto L_0880D390;
    case 241u: goto L_0880D398;
    case 242u: goto L_0880D3A0;
    case 243u: goto L_0880D3E0;
    case 244u: goto L_0880D3F8;
    case 245u: goto L_0880D40C;
    case 246u: goto L_0880D414;
    case 247u: goto L_0880D420;
    case 248u: goto L_0880D430;
    case 249u: goto L_0880D43C;
    case 250u: goto L_0880D458;
    case 251u: goto L_0880D464;
    case 252u: goto L_0880D490;
    case 253u: goto L_0880D4A4;
    case 254u: goto L_0880D4DC;
    case 255u: goto L_0880D504;
    case 256u: goto L_0880D50C;
    case 257u: goto L_0880D544;
    case 258u: goto L_0880D54C;
    case 259u: goto L_0880D564;
    case 260u: goto L_0880D578;
    case 261u: goto L_0880D584;
    case 262u: goto L_0880D594;
    case 263u: goto L_0880D598;
    case 264u: goto L_0880D5C0;
    case 265u: goto L_0880D5E0;
    case 266u: goto L_0880D5E8;
    case 267u: goto L_0880D5EC;
    case 268u: goto L_0880D608;
    case 269u: goto L_0880D614;
    case 270u: goto L_0880D62C;
    case 271u: goto L_0880D638;
    case 272u: goto L_0880D650;
    case 273u: goto L_0880D658;
    case 274u: goto L_0880D660;
    case 275u: goto L_0880D688;
    case 276u: goto L_0880D69C;
    case 277u: goto L_0880D6E8;
    case 278u: goto L_0880D708;
    case 279u: goto L_0880D724;
    case 280u: goto L_0880D72C;
    case 281u: goto L_0880D754;
    case 282u: goto L_0880D764;
    case 283u: goto L_0880D770;
    case 284u: goto L_0880D794;
    case 285u: goto L_0880D7A0;
    case 286u: goto L_0880D7AC;
    case 287u: goto L_0880D7B4;
    case 288u: goto L_0880D7C4;
    case 289u: goto L_0880D7E0;
    case 290u: goto L_0880D7F4;
    case 291u: goto L_0880D818;
    case 292u: goto L_0880D830;
    case 293u: goto L_0880D854;
    case 294u: goto L_0880D85C;
    case 295u: goto L_0880D870;
    case 296u: goto L_0880D884;
    case 297u: goto L_0880D8A8;
    case 298u: goto L_0880D8B0;
    case 299u: goto L_0880D8C0;
    case 300u: goto L_0880D8D0;
    case 301u: goto L_0880D8F4;
    case 302u: goto L_0880D900;
    case 303u: goto L_0880D920;
    case 304u: goto L_0880D934;
    case 305u: goto L_0880D93C;
    case 306u: goto L_0880D944;
    case 307u: goto L_0880D958;
    case 308u: goto L_0880D960;
    case 309u: goto L_0880D970;
    case 310u: goto L_0880D978;
    case 311u: goto L_0880D980;
    case 312u: goto L_0880D994;
    case 313u: goto L_0880D9A0;
    case 314u: goto L_0880D9B0;
    case 315u: goto L_0880D9CC;
    case 316u: goto L_0880D9E0;
    case 317u: goto L_0880D9EC;
    case 318u: goto L_0880D9F8;
    case 319u: goto L_0880DA08;
    case 320u: goto L_0880DA1C;
    case 321u: goto L_0880DA2C;
    case 322u: goto L_0880DA5C;
    case 323u: goto L_0880DA6C;
    case 324u: goto L_0880DA70;
    case 325u: goto L_0880DA88;
    case 326u: goto L_0880DA9C;
    case 327u: goto L_0880DAAC;
    case 328u: goto L_0880DAB0;
    case 329u: goto L_0880DB64;
    case 330u: goto L_0880DBA4;
    case 331u: goto L_0880DBC0;
    case 332u: goto L_0880DBC8;
    case 333u: goto L_0880DBF0;
    case 334u: goto L_0880DC10;
    case 335u: goto L_0880DC24;
    case 336u: goto L_0880DC2C;
    case 337u: goto L_0880DC40;
    case 338u: goto L_0880DC54;
    case 339u: goto L_0880DC70;
    case 340u: goto L_0880DC88;
    case 341u: goto L_0880DC98;
    case 342u: goto L_0880DCAC;
    case 343u: goto L_0880DCC0;
    case 344u: goto L_0880DCE4;
    case 345u: goto L_0880DD08;
    case 346u: goto L_0880DD24;
    case 347u: goto L_0880DD2C;
    case 348u: goto L_0880DD40;
    case 349u: goto L_0880DD5C;
    case 350u: goto L_0880DD64;
    case 351u: goto L_0880DD6C;
    case 352u: goto L_0880DD78;
    case 353u: goto L_0880DD80;
    case 354u: goto L_0880DD94;
    case 355u: goto L_0880DDA0;
    case 356u: goto L_0880DDC0;
    case 357u: goto L_0880DDC8;
    case 358u: goto L_0880DDD0;
    case 359u: goto L_0880DDDC;
    case 360u: goto L_0880DDE4;
    case 361u: goto L_0880DE00;
    case 362u: goto L_0880DE20;
    case 363u: goto L_0880DE34;
    case 364u: goto L_0880DE40;
    case 365u: goto L_0880DE48;
    case 366u: goto L_0880DE58;
    case 367u: goto L_0880DE60;
    case 368u: goto L_0880DE68;
    case 369u: goto L_0880DE74;
    case 370u: goto L_0880DE80;
    case 371u: goto L_0880DE88;
    case 372u: goto L_0880DE94;
    case 373u: goto L_0880DEA4;
    case 374u: goto L_0880DEB4;
    case 375u: goto L_0880DEBC;
    case 376u: goto L_0880DEC8;
    case 377u: goto L_0880DED0;
    case 378u: goto L_0880DEE0;
    case 379u: goto L_0880DEF0;
    case 380u: goto L_0880DF0C;
    case 381u: goto L_0880DF14;
    case 382u: goto L_0880DF28;
    case 383u: goto L_0880DF44;
    case 384u: goto L_0880DF4C;
    case 385u: goto L_0880DF50;
    case 386u: goto L_0880DF54;
    case 387u: goto L_0880DF5C;
    case 388u: goto L_0880DF70;
    case 389u: goto L_0880DF7C;
    case 390u: goto L_0880DF9C;
    case 391u: goto L_0880DFA4;
    case 392u: goto L_0880DFB0;
    case 393u: goto L_0880DFC8;
    case 394u: goto L_0880DFD0;
    case 395u: goto L_0880DFDC;
    case 396u: goto L_0880DFF0;
    case 397u: goto L_0880E010;
    case 398u: goto L_0880E024;
    case 399u: goto L_0880E038;
    case 400u: goto L_0880E060;
    case 401u: goto L_0880E06C;
    case 402u: goto L_0880E080;
    case 403u: goto L_0880E094;
    case 404u: goto L_0880E098;
    case 405u: goto L_0880E0A4;
    case 406u: goto L_0880E0AC;
    case 407u: goto L_0880E0CC;
    case 408u: goto L_0880E0DC;
    case 409u: goto L_0880E0E4;
    case 410u: goto L_0880E0F0;
    case 411u: goto L_0880E100;
    case 412u: goto L_0880E114;
    case 413u: goto L_0880E11C;
    case 414u: goto L_0880E13C;
    case 415u: goto L_0880E15C;
    case 416u: goto L_0880E170;
    case 417u: goto L_0880E17C;
    case 418u: goto L_0880E184;
    case 419u: goto L_0880E194;
    case 420u: goto L_0880E19C;
    case 421u: goto L_0880E1A4;
    case 422u: goto L_0880E1AC;
    case 423u: goto L_0880E1B8;
    case 424u: goto L_0880E1C4;
    case 425u: goto L_0880E1D0;
    case 426u: goto L_0880E1DC;
    case 427u: goto L_0880E1E8;
    case 428u: goto L_0880E1F0;
    case 429u: goto L_0880E200;
    case 430u: goto L_0880E20C;
    case 431u: goto L_0880E21C;
    case 432u: goto L_0880E250;
    case 433u: goto L_0880E258;
    case 434u: goto L_0880E268;
    case 435u: goto L_0880E270;
    case 436u: goto L_0880E288;
    case 437u: goto L_0880E290;
    case 438u: goto L_0880E29C;
    case 439u: goto L_0880E2D4;
    case 440u: goto L_0880E2F0;
    case 441u: goto L_0880E2F8;
    case 442u: goto L_0880E300;
    case 443u: goto L_0880E330;
    case 444u: goto L_0880E338;
    case 445u: goto L_0880E340;
    case 446u: goto L_0880E350;
    case 447u: goto L_0880E358;
    case 448u: goto L_0880E380;
    case 449u: goto L_0880E388;
    case 450u: goto L_0880E390;
    case 451u: goto L_0880E398;
    case 452u: goto L_0880E3A4;
    case 453u: goto L_0880E3AC;
    case 454u: goto L_0880E3DC;
    case 455u: goto L_0880E3F0;
    case 456u: goto L_0880E400;
    case 457u: goto L_0880E408;
    case 458u: goto L_0880E414;
    case 459u: goto L_0880E41C;
    case 460u: goto L_0880E430;
    case 461u: goto L_0880E458;
    case 462u: goto L_0880E474;
    case 463u: goto L_0880E47C;
    case 464u: goto L_0880E484;
    case 465u: goto L_0880E494;
    case 466u: goto L_0880E49C;
    case 467u: goto L_0880E4C4;
    case 468u: goto L_0880E4E4;
    case 469u: goto L_0880E4F8;
    case 470u: goto L_0880E50C;
    case 471u: goto L_0880E514;
    case 472u: goto L_0880E520;
    case 473u: goto L_0880E528;
    case 474u: goto L_0880E530;
    case 475u: goto L_0880E53C;
    case 476u: goto L_0880E544;
    case 477u: goto L_0880E56C;
    case 478u: goto L_0880E578;
    case 479u: goto L_0880E580;
    case 480u: goto L_0880E58C;
    case 481u: goto L_0880E5AC;
    case 482u: goto L_0880E5B4;
    case 483u: goto L_0880E5C8;
    case 484u: goto L_0880E5D0;
    case 485u: goto L_0880E5DC;
    case 486u: goto L_0880E614;
    case 487u: goto L_0880E630;
    case 488u: goto L_0880E638;
    case 489u: goto L_0880E640;
    case 490u: goto L_0880E644;
    case 491u: goto L_0880E670;
    case 492u: goto L_0880E678;
    case 493u: goto L_0880E680;
    case 494u: goto L_0880E694;
    case 495u: goto L_0880E69C;
    case 496u: goto L_0880E6D0;
    case 497u: goto L_0880E6D8;
    case 498u: goto L_0880E6E0;
    case 499u: goto L_0880E6E4;
    case 500u: goto L_0880E6EC;
    case 501u: goto L_0880E6F4;
    case 502u: goto L_0880E724;
    case 503u: goto L_0880E734;
    case 504u: goto L_0880E73C;
    case 505u: goto L_0880E74C;
    case 506u: goto L_0880E754;
    case 507u: goto L_0880E784;
    case 508u: goto L_0880E79C;
    case 509u: goto L_0880E7A4;
    case 510u: goto L_0880E7B8;
    case 511u: goto L_0880E7C4;
    case 512u: goto L_0880E7CC;
    case 513u: goto L_0880E7D0;
    case 514u: goto L_0880E7E0;
    case 515u: goto L_0880E7E8;
    case 516u: goto L_0880E7F4;
    case 517u: goto L_0880E7FC;
    case 518u: goto L_0880E808;
    case 519u: goto L_0880E810;
    case 520u: goto L_0880E83C;
    case 521u: goto L_0880E840;
    case 522u: goto L_0880E848;
    case 523u: goto L_0880E850;
    case 524u: goto L_0880E858;
    case 525u: goto L_0880E860;
    case 526u: goto L_0880E86C;
    case 527u: goto L_0880E878;
    case 528u: goto L_0880E880;
    case 529u: goto L_0880E890;
    case 530u: goto L_0880E898;
    case 531u: goto L_0880E8C4;
    case 532u: goto L_0880E8E8;
    case 533u: goto L_0880E8F0;
    case 534u: goto L_0880E8FC;
    case 535u: goto L_0880E904;
    case 536u: goto L_0880E90C;
    case 537u: goto L_0880E918;
    case 538u: goto L_0880E920;
    case 539u: goto L_0880E928;
    case 540u: goto L_0880E930;
    case 541u: goto L_0880E958;
    case 542u: goto L_0880E96C;
    case 543u: goto L_0880E97C;
    case 544u: goto L_0880E984;
    case 545u: goto L_0880E990;
    case 546u: goto L_0880E99C;
    case 547u: goto L_0880E9C4;
    case 548u: goto L_0880E9F0;
    case 549u: goto L_0880EA0C;
    case 550u: goto L_0880EA14;
    case 551u: goto L_0880EA1C;
    case 552u: goto L_0880EA30;
    case 553u: goto L_0880EA38;
    case 554u: goto L_0880EA4C;
    case 555u: goto L_0880EA88;
    case 556u: goto L_0880EAA4;
    case 557u: goto L_0880EAAC;
    case 558u: goto L_0880EAB8;
    case 559u: goto L_0880EACC;
    case 560u: goto L_0880EAD4;
    case 561u: goto L_0880EAF4;
    case 562u: goto L_0880EB1C;
    case 563u: goto L_0880EB38;
    case 564u: goto L_0880EB40;
    case 565u: goto L_0880EB48;
    case 566u: goto L_0880EB58;
    case 567u: goto L_0880EB60;
    case 568u: goto L_0880EB88;
    case 569u: goto L_0880EBB0;
    case 570u: goto L_0880EBB8;
    case 571u: goto L_0880EBC0;
    case 572u: goto L_0880EBC8;
    case 573u: goto L_0880EBD4;
    case 574u: goto L_0880EBDC;
    case 575u: goto L_0880EC04;
    case 576u: goto L_0880EC18;
    case 577u: goto L_0880EC28;
    case 578u: goto L_0880EC30;
    case 579u: goto L_0880EC3C;
    case 580u: goto L_0880EC44;
    case 581u: goto L_0880EC58;
    case 582u: goto L_0880EC74;
    case 583u: goto L_0880EC88;
    case 584u: goto L_0880EC90;
    case 585u: goto L_0880EC98;
    case 586u: goto L_0880ECB4;
    case 587u: goto L_0880ECBC;
    case 588u: goto L_0880ECD4;
    case 589u: goto L_0880ECF0;
    case 590u: goto L_0880ED10;
    case 591u: goto L_0880ED18;
    case 592u: goto L_0880ED20;
    case 593u: goto L_0880ED2C;
    case 594u: goto L_0880ED34;
    case 595u: goto L_0880ED38;
    case 596u: goto L_0880ED54;
    case 597u: goto L_0880ED5C;
    case 598u: goto L_0880ED70;
    case 599u: goto L_0880ED78;
    case 600u: goto L_0880ED80;
    case 601u: goto L_0880ED8C;
    case 602u: goto L_0880EDA8;
    case 603u: goto L_0880EDBC;
    case 604u: goto L_0880EDC4;
    case 605u: goto L_0880EDCC;
    case 606u: goto L_0880EDE8;
    case 607u: goto L_0880EDF0;
    case 608u: goto L_0880EE08;
    case 609u: goto L_0880EE24;
    case 610u: goto L_0880EE44;
    case 611u: goto L_0880EE4C;
    case 612u: goto L_0880EE54;
    case 613u: goto L_0880EE60;
    case 614u: goto L_0880EE68;
    case 615u: goto L_0880EE6C;
    case 616u: goto L_0880EE88;
    case 617u: goto L_0880EE90;
    case 618u: goto L_0880EEA4;
    case 619u: goto L_0880EEAC;
    case 620u: goto L_0880EEB4;
    case 621u: goto L_0880EEC0;
    case 622u: goto L_0880EEE4;
    case 623u: goto L_0880EEF8;
    case 624u: goto L_0880EF00;
    case 625u: goto L_0880EF08;
    case 626u: goto L_0880EF0C;
    case 627u: goto L_0880EF28;
    case 628u: goto L_0880EF30;
    case 629u: goto L_0880EF38;
    case 630u: goto L_0880EF48;
    case 631u: goto L_0880EF58;
    case 632u: goto L_0880EF60;
    case 633u: goto L_0880EF70;
    case 634u: goto L_0880EFA0;
    case 635u: goto L_0880EFA8;
    case 636u: goto L_0880EFB0;
    case 637u: goto L_0880EFBC;
    case 638u: goto L_0880EFC4;
    case 639u: goto L_0880EFCC;
    case 640u: goto L_0880EFD4;
    case 641u: goto L_0880EFE8;
    case 642u: goto L_0880EFF0;
    case 643u: goto L_0880EFF8;
    case 644u: goto L_0880F004;
    case 645u: goto L_0880F030;
    case 646u: goto L_0880F044;
    case 647u: goto L_0880F04C;
    case 648u: goto L_0880F054;
    case 649u: goto L_0880F07C;
    case 650u: goto L_0880F084;
    case 651u: goto L_0880F08C;
    case 652u: goto L_0880F09C;
    case 653u: goto L_0880F0B8;
    case 654u: goto L_0880F0D0;
    case 655u: goto L_0880F0DC;
    case 656u: goto L_0880F0E4;
    case 657u: goto L_0880F0EC;
    case 658u: goto L_0880F0F4;
    case 659u: goto L_0880F100;
    case 660u: goto L_0880F108;
    case 661u: goto L_0880F10C;
    case 662u: goto L_0880F134;
    case 663u: goto L_0880F148;
    case 664u: goto L_0880F158;
    case 665u: goto L_0880F160;
    case 666u: goto L_0880F16C;
    case 667u: goto L_0880F174;
    case 668u: goto L_0880F188;
    case 669u: goto L_0880F190;
    case 670u: goto L_0880F1A0;
    case 671u: goto L_0880F1A8;
    case 672u: goto L_0880F1B4;
    case 673u: goto L_0880F1D4;
    case 674u: goto L_0880F1DC;
    case 675u: goto L_0880F1EC;
    case 676u: goto L_0880F1FC;
    case 677u: goto L_0880F218;
    case 678u: goto L_0880F21C;
    case 679u: goto L_0880F238;
    case 680u: goto L_0880F244;
    case 681u: goto L_0880F24C;
    case 682u: goto L_0880F258;
    case 683u: goto L_0880F264;
    case 684u: goto L_0880F26C;
    case 685u: goto L_0880F28C;
    case 686u: goto L_0880F2A4;
    case 687u: goto L_0880F2C0;
    case 688u: goto L_0880F2E0;
    case 689u: goto L_0880F2F8;
    case 690u: goto L_0880F300;
    case 691u: goto L_0880F324;
    case 692u: goto L_0880F330;
    case 693u: goto L_0880F33C;
    case 694u: goto L_0880F350;
    case 695u: goto L_0880F364;
    case 696u: goto L_0880F378;
    case 697u: goto L_0880F388;
    case 698u: goto L_0880F390;
    case 699u: goto L_0880F3A4;
    case 700u: goto L_0880F3C8;
    case 701u: goto L_0880F3D8;
    case 702u: goto L_0880F3DC;
    case 703u: goto L_0880F3F0;
    case 704u: goto L_0880F3F8;
    case 705u: goto L_0880F414;
    case 706u: goto L_0880F454;
    case 707u: goto L_0880F480;
    case 708u: goto L_0880F484;
    case 709u: goto L_0880F490;
    case 710u: goto L_0880F494;
    case 711u: goto L_0880F49C;
    case 712u: goto L_0880F4A4;
    case 713u: goto L_0880F4B0;
    case 714u: goto L_0880F510;
    case 715u: goto L_0880F524;
    case 716u: goto L_0880F528;
    case 717u: goto L_0880F554;
    case 718u: goto L_0880F564;
    case 719u: goto L_0880F5D4;
    case 720u: goto L_0880F5DC;
    case 721u: goto L_0880F5EC;
    case 722u: goto L_0880F5F8;
    case 723u: goto L_0880F5FC;
    case 724u: goto L_0880F608;
    case 725u: goto L_0880F614;
    case 726u: goto L_0880F61C;
    case 727u: goto L_0880F628;
    case 728u: goto L_0880F634;
    case 729u: goto L_0880F638;
    case 730u: goto L_0880F644;
    case 731u: goto L_0880F650;
    case 732u: goto L_0880F658;
    case 733u: goto L_0880F6A8;
    case 734u: goto L_0880F6C8;
    case 735u: goto L_0880F6CC;
    case 736u: goto L_0880F6D4;
    case 737u: goto L_0880F6D8;
    case 738u: goto L_0880F6E8;
    case 739u: goto L_0880F700;
    case 740u: goto L_0880F708;
    case 741u: goto L_0880F718;
    case 742u: goto L_0880F730;
    case 743u: goto L_0880F764;
    case 744u: goto L_0880F77C;
    case 745u: goto L_0880F788;
    case 746u: goto L_0880F7AC;
    case 747u: goto L_0880F7BC;
    case 748u: goto L_0880F7D4;
    case 749u: goto L_0880F7EC;
    case 750u: goto L_0880F7FC;
    case 751u: goto L_0880F814;
    case 752u: goto L_0880F828;
    case 753u: goto L_0880F83C;
    case 754u: goto L_0880F854;
    case 755u: goto L_0880F85C;
    case 756u: goto L_0880F870;
    case 757u: goto L_0880F898;
    case 758u: goto L_0880F8A0;
    case 759u: goto L_0880F8B0;
    case 760u: goto L_0880F8B4;
    case 761u: goto L_0880F8C4;
    case 762u: goto L_0880F8D0;
    case 763u: goto L_0880F8E0;
    case 764u: goto L_0880F8F0;
    case 765u: goto L_0880F8FC;
    case 766u: goto L_0880F908;
    case 767u: goto L_0880F918;
    case 768u: goto L_0880F934;
    case 769u: goto L_0880F944;
    case 770u: goto L_0880F948;
    case 771u: goto L_0880F94C;
    case 772u: goto L_0880F958;
    case 773u: goto L_0880F9A0;
    case 774u: goto L_0880F9AC;
    case 775u: goto L_0880F9BC;
    case 776u: goto L_0880F9C8;
    case 777u: goto L_0880F9E8;
    case 778u: goto L_0880F9FC;
    case 779u: goto L_0880FA04;
    case 780u: goto L_0880FA10;
    case 781u: goto L_0880FA28;
    case 782u: goto L_0880FA2C;
    case 783u: goto L_0880FA48;
    case 784u: goto L_0880FA54;
    case 785u: goto L_0880FA5C;
    case 786u: goto L_0880FA70;
    case 787u: goto L_0880FA74;
    case 788u: goto L_0880FA80;
    case 789u: goto L_0880FA98;
    case 790u: goto L_0880FAA0;
    case 791u: goto L_0880FAAC;
    case 792u: goto L_0880FAD8;
    case 793u: goto L_0880FAF8;
    case 794u: goto L_0880FB00;
    case 795u: goto L_0880FB08;
    case 796u: goto L_0880FB10;
    case 797u: goto L_0880FB1C;
    case 798u: goto L_0880FB30;
    case 799u: goto L_0880FB40;
    case 800u: goto L_0880FB48;
    case 801u: goto L_0880FB4C;
    case 802u: goto L_0880FB5C;
    case 803u: goto L_0880FB64;
    case 804u: goto L_0880FB70;
    case 805u: goto L_0880FB88;
    case 806u: goto L_0880FB90;
    case 807u: goto L_0880FB94;
    case 808u: goto L_0880FB9C;
    case 809u: goto L_0880FBA4;
    case 810u: goto L_0880FBB8;
    case 811u: goto L_0880FBD0;
    case 812u: goto L_0880FBE0;
    case 813u: goto L_0880FBF8;
    case 814u: goto L_0880FC14;
    case 815u: goto L_0880FC20;
    case 816u: goto L_0880FC38;
    case 817u: goto L_0880FC40;
    case 818u: goto L_0880FC44;
    case 819u: goto L_0880FC48;
    case 820u: goto L_0880FC60;
    case 821u: goto L_0880FC6C;
    case 822u: goto L_0880FC98;
    case 823u: goto L_0880FCAC;
    case 824u: goto L_0880FCC0;
    case 825u: goto L_0880FCCC;
    case 826u: goto L_0880FCE0;
    case 827u: goto L_0880FD08;
    case 828u: goto L_0880FD10;
    case 829u: goto L_0880FD28;
    case 830u: goto L_0880FD3C;
    case 831u: goto L_0880FD44;
    case 832u: goto L_0880FD50;
    case 833u: goto L_0880FD54;
    case 834u: goto L_0880FD70;
    case 835u: goto L_0880FD8C;
    case 836u: goto L_0880FDA0;
    case 837u: goto L_0880FDAC;
    case 838u: goto L_0880FDC4;
    case 839u: goto L_0880FDE8;
    case 840u: goto L_0880FDF0;
    case 841u: goto L_0880FE04;
    case 842u: goto L_0880FE18;
    case 843u: goto L_0880FE20;
    case 844u: goto L_0880FE28;
    case 845u: goto L_0880FE2C;
    case 846u: goto L_0880FE30;
    case 847u: goto L_0880FE34;
    case 848u: goto L_0880FE3C;
    case 849u: goto L_0880FE48;
    case 850u: goto L_0880FE68;
    case 851u: goto L_0880FE6C;
    case 852u: goto L_0880FE7C;
    case 853u: goto L_0880FE8C;
    case 854u: goto L_0880FEA8;
    case 855u: goto L_0880FEB0;
    case 856u: goto L_0880FEC4;
    case 857u: goto L_0880FED0;
    case 858u: goto L_0880FEDC;
    case 859u: goto L_0880FEF0;
    case 860u: goto L_0880FF04;
    case 861u: goto L_0880FF20;
    case 862u: goto L_0880FF2C;
    case 863u: goto L_0880FF48;
    case 864u: goto L_0880FF50;
    case 865u: goto L_0880FF64;
    case 866u: goto L_0880FF6C;
    case 867u: goto L_0880FF78;
    case 868u: goto L_0880FF7C;
    case 869u: goto L_0880FF80;
    case 870u: goto L_0880FF84;
    case 871u: goto L_0880FF88;
    case 872u: goto L_0880FF98;
    case 873u: goto L_0880FFAC;
    case 874u: goto L_0880FFC4;
    case 875u: goto L_0880FFD8;
    case 876u: goto L_0880FFDC;
    case 877u: goto L_0880FFE4;
    case 878u: goto L_0880FFF8;
    default:
        if (local_transfers == 0u) rt.unsupported(ctx.pc, 0u, "invalid internal function entry");
        else ctx.pc = local_pc;
        return;
    }
    }
L_0880C000:
    ctx.set_gpr(2, ctx.gpr[6] << 2u);
    ctx.set_gpr(4, ctx.gpr[11] + ctx.gpr[2]);
    ctx.set_gpr(3, ctx.gpr[23] + 0u);
    ctx.set_gpr(5, 0u + 0u);
    goto L_0880C010;
L_0880C010:
    ctx.fpr[0] = std::bit_cast<float>(rt.memory().aot_load32(ctx.gpr[3] + static_cast<std::uint32_t>(0)));
    ctx.fpr[1] = std::bit_cast<float>(rt.memory().aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(0)));
    ctx.set_gpr(5, ctx.gpr[5] + static_cast<std::uint32_t>(1));
    ctx.set_gpr(2, static_cast<std::int32_t>(ctx.gpr[17]) < static_cast<std::int32_t>(ctx.gpr[5]) ? 1u : 0u);
    { const float fs = ctx.fpr[0]; const float ft = ctx.fpr[1]; if ((std::isinf(fs) && ft == 0.0f) || (std::isinf(ft) && fs == 0.0f)) ctx.set_fpr_bits(0, 0x7FC00000u); else ctx.fpr[0] = fs * ft; }
    ctx.set_gpr(3, ctx.gpr[3] + static_cast<std::uint32_t>(4));
    ctx.set_gpr(4, ctx.gpr[4] + static_cast<std::uint32_t>(-4));
    { const bool branch_taken = ctx.gpr[2] == 0u;
    ctx.fpr[2] = ctx.fpr[2] + ctx.fpr[0];
      if (branch_taken) {
          goto L_0880C010;
      }
      goto L_0880C034;
    }
L_0880C034:
    ctx.set_gpr(7, ctx.gpr[7] + static_cast<std::uint32_t>(1));
    ctx.set_gpr(2, static_cast<std::int32_t>(ctx.gpr[16]) < static_cast<std::int32_t>(ctx.gpr[7]) ? 1u : 0u);
    rt.memory().aot_store32(ctx.gpr[10] + static_cast<std::uint32_t>(0), std::bit_cast<std::uint32_t>(ctx.fpr[2]));
    ctx.set_gpr(9, ctx.gpr[9] + static_cast<std::uint32_t>(4));
    ctx.set_gpr(8, ctx.gpr[8] + static_cast<std::uint32_t>(4));
    ctx.set_gpr(10, ctx.gpr[10] + static_cast<std::uint32_t>(4));
    { const bool branch_taken = ctx.gpr[2] == 0u;
    ctx.set_gpr(6, ctx.gpr[6] + static_cast<std::uint32_t>(1));
      if (branch_taken) {
          (void)rt.invoke_chained_direct<&recomp_unit_0001_entry, 1u, 723u, 0x0880BFECu>(ctx, &aot_mem); return;
      }
      goto L_0880C054;
    }
L_0880C054:
    ctx.set_gpr(20, ctx.gpr[16] << 2u);
    (void)rt.invoke_chained_direct<&recomp_unit_0001_entry, 1u, 692u, 0x0880BDD0u>(ctx, &aot_mem); return;
L_0880C05C:
    ctx.fpr[12] = std::bit_cast<float>(rt.memory().aot_load32(ctx.gpr[2] + static_cast<std::uint32_t>(-780)));
    { const bool branch_taken = ctx.gpr[8] == 0u;
    ctx.fpr[20] = ctx.fpr[12] - ctx.fpr[20];
      if (branch_taken) {
          (void)rt.invoke_chained_direct<&recomp_unit_0001_entry, 1u, 711u, 0x0880BF2Cu>(ctx, &aot_mem); return;
      }
      goto L_0880C068;
    }
L_0880C068:
    ctx.set_gpr(31, 0x0880C070u);
    ctx.set_gpr(4, ctx.gpr[19] + 0u);
    goto L_0880DFF0;
L_0880C070:
    ctx.fpr[20] = ctx.fpr[20] - ctx.fpr[0];
    ctx.fpr[0] = std::bit_cast<float>(0u);
    ctx.set_fpu_condition((!(std::isnan(ctx.fpr[20]) || std::isnan(ctx.fpr[0])) && ctx.fpr[20] == ctx.fpr[0]));
    // nop
    { const bool branch_taken = ctx.fpu_condition();
    ctx.set_gpr(7, ctx.gpr[16] + static_cast<std::uint32_t>(-1));
      if (branch_taken) {
          (void)rt.invoke_chained_direct<&recomp_unit_0001_entry, 1u, 714u, 0x0880BF44u>(ctx, &aot_mem); return;
      }
      goto L_0880C088;
    }
L_0880C088:
    ctx.set_fpr_bits(12, ctx.fpr_bits(20));
    goto L_0880C08C;
L_0880C08C:
    ctx.set_gpr(31, 0x0880C094u);
    ctx.set_gpr(4, 0u - ctx.gpr[19]);
    goto L_0880DFF0;
L_0880C094:
    ctx.set_fpr_bits(4, ctx.fpr_bits(0));
    ctx.set_gpr(2, 2225u << 16u);
    ctx.fpr[0] = std::bit_cast<float>(rt.memory().aot_load32(ctx.gpr[2] + static_cast<std::uint32_t>(-776)));
    ctx.set_fpu_condition((ctx.fpr[0] <= ctx.fpr[4]));
    // nop
    { const bool branch_taken = ctx.fpu_condition();
    ctx.set_gpr(2, 2225u << 16u);
      if (branch_taken) {
          goto L_0880C414;
      }
      goto L_0880C0B0;
    }
L_0880C0B0:
    ctx.set_fpr_bits(0, ctx.fpu_float_to_word(ctx.fpr[4], 1u));
    ctx.set_gpr(2, ctx.gpr[20] + ctx.gpr[29]);
    ctx.set_gpr(30, ctx.gpr[19] + 0u);
    rt.memory().aot_store32(ctx.gpr[2] + static_cast<std::uint32_t>(0), std::bit_cast<std::uint32_t>(ctx.fpr[0]));
    goto L_0880C0C0;
L_0880C0C0:
    ctx.set_gpr(3, 2225u << 16u);
    goto L_0880C0C4;
L_0880C0C4:
    ctx.fpr[12] = std::bit_cast<float>(rt.memory().aot_load32(ctx.gpr[3] + static_cast<std::uint32_t>(-780)));
    ctx.set_gpr(31, 0x0880C0D0u);
    ctx.set_gpr(4, ctx.gpr[30] + 0u);
    goto L_0880DFF0;
L_0880C0D0:
    { const bool branch_taken = static_cast<std::int32_t>(ctx.gpr[16]) < 0;
    ctx.set_fpr_bits(2, ctx.fpr_bits(0));
      if (branch_taken) {
          goto L_0880C1A4;
      }
      goto L_0880C0D8;
    }
L_0880C0D8:
    ctx.set_gpr(2, 2225u << 16u);
    ctx.set_gpr(20, ctx.gpr[16] << 2u);
    ctx.set_gpr(9, ctx.gpr[29] + static_cast<std::uint32_t>(240));
    ctx.fpr[3] = std::bit_cast<float>(rt.memory().aot_load32(ctx.gpr[2] + static_cast<std::uint32_t>(-800)));
    ctx.set_gpr(3, ctx.gpr[9] + ctx.gpr[20]);
    ctx.set_gpr(2, ctx.gpr[29] + ctx.gpr[20]);
    ctx.set_gpr(8, 0u + 0u);
    ctx.set_gpr(4, ctx.gpr[16] + static_cast<std::uint32_t>(1));
    goto L_0880C0F8;
L_0880C0F8:
    ctx.fpr[1] = std::bit_cast<float>(rt.memory().aot_load32(ctx.gpr[2] + static_cast<std::uint32_t>(0)));
    ctx.set_gpr(8, ctx.gpr[8] + static_cast<std::uint32_t>(1));
    ctx.set_gpr(2, ctx.gpr[2] + static_cast<std::uint32_t>(-4));
    ctx.fpr[0] = static_cast<float>(static_cast<std::int32_t>(ctx.fpr_bits(1)));
    { const float fs = ctx.fpr[2]; const float ft = ctx.fpr[0]; if ((std::isinf(fs) && ft == 0.0f) || (std::isinf(ft) && fs == 0.0f)) ctx.set_fpr_bits(0, 0x7FC00000u); else ctx.fpr[0] = fs * ft; }
    { const float fs = ctx.fpr[2]; const float ft = ctx.fpr[3]; if ((std::isinf(fs) && ft == 0.0f) || (std::isinf(ft) && fs == 0.0f)) ctx.set_fpr_bits(2, 0x7FC00000u); else ctx.fpr[2] = fs * ft; }
    rt.memory().aot_store32(ctx.gpr[3] + static_cast<std::uint32_t>(0), std::bit_cast<std::uint32_t>(ctx.fpr[0]));
    { const bool branch_taken = ctx.gpr[8] != ctx.gpr[4];
    ctx.set_gpr(3, ctx.gpr[3] + static_cast<std::uint32_t>(-4));
      if (branch_taken) {
          goto L_0880C0F8;
      }
      goto L_0880C11C;
    }
L_0880C11C:
    ctx.set_gpr(7, 0u + 0u);
    goto L_0880C138;
L_0880C124:
    ctx.set_gpr(2, ctx.gpr[7] << 2u);
    goto L_0880C128;
L_0880C128:
    ctx.set_gpr(2, ctx.gpr[2] + ctx.gpr[29]);
    ctx.set_gpr(7, ctx.gpr[7] + static_cast<std::uint32_t>(1));
    { const bool branch_taken = ctx.gpr[7] == ctx.gpr[8];
    rt.memory().aot_store32(ctx.gpr[2] + static_cast<std::uint32_t>(160), std::bit_cast<std::uint32_t>(ctx.fpr[2]));
      if (branch_taken) {
          goto L_0880C1A4;
      }
      goto L_0880C138;
    }
L_0880C138:
    ctx.set_gpr(2, ctx.gpr[16] - ctx.gpr[7]);
    { const bool branch_taken = static_cast<std::int32_t>(ctx.gpr[18]) < 0;
    ctx.fpr[2] = std::bit_cast<float>(0u);
      if (branch_taken) {
          goto L_0880C124;
      }
      goto L_0880C144;
    }
L_0880C144:
    if (static_cast<std::int32_t>(ctx.gpr[7]) < 0) {
    ctx.set_gpr(2, ctx.gpr[7] << 2u);
        goto L_0880C128;
    }
    goto L_0880C14C;
L_0880C14C:
    ctx.set_gpr(2, ctx.gpr[2] << 2u);
    ctx.set_gpr(3, 2225u << 16u);
    ctx.set_gpr(5, ctx.gpr[9] + ctx.gpr[2]);
    ctx.set_gpr(3, ctx.gpr[3] + static_cast<std::uint32_t>(-856));
    ctx.set_gpr(4, 0u + 0u);
    ctx.fpr[0] = std::bit_cast<float>(rt.memory().aot_load32(ctx.gpr[3] + static_cast<std::uint32_t>(0)));
    goto L_0880C164;
L_0880C164:
    ctx.fpr[1] = std::bit_cast<float>(rt.memory().aot_load32(ctx.gpr[5] + static_cast<std::uint32_t>(0)));
    ctx.set_gpr(4, ctx.gpr[4] + static_cast<std::uint32_t>(1));
    ctx.set_gpr(2, static_cast<std::int32_t>(ctx.gpr[18]) < static_cast<std::int32_t>(ctx.gpr[4]) ? 1u : 0u);
    { const float fs = ctx.fpr[0]; const float ft = ctx.fpr[1]; if ((std::isinf(fs) && ft == 0.0f) || (std::isinf(ft) && fs == 0.0f)) ctx.set_fpr_bits(0, 0x7FC00000u); else ctx.fpr[0] = fs * ft; }
    ctx.set_gpr(6, static_cast<std::int32_t>(ctx.gpr[7]) < static_cast<std::int32_t>(ctx.gpr[4]) ? 1u : 0u);
    ctx.set_gpr(3, ctx.gpr[3] + static_cast<std::uint32_t>(4));
    ctx.set_gpr(5, ctx.gpr[5] + static_cast<std::uint32_t>(4));
    { const bool branch_taken = ctx.gpr[2] != 0u;
    ctx.fpr[2] = ctx.fpr[2] + ctx.fpr[0];
      if (branch_taken) {
          goto L_0880C124;
      }
      goto L_0880C188;
    }
L_0880C188:
    if (ctx.gpr[6] == 0u) {
    ctx.fpr[0] = std::bit_cast<float>(rt.memory().aot_load32(ctx.gpr[3] + static_cast<std::uint32_t>(0)));
        goto L_0880C164;
    }
    goto L_0880C190;
L_0880C190:
    ctx.set_gpr(2, ctx.gpr[7] << 2u);
    ctx.set_gpr(2, ctx.gpr[2] + ctx.gpr[29]);
    ctx.set_gpr(7, ctx.gpr[7] + static_cast<std::uint32_t>(1));
    { const bool branch_taken = ctx.gpr[7] != ctx.gpr[8];
    rt.memory().aot_store32(ctx.gpr[2] + static_cast<std::uint32_t>(160), std::bit_cast<std::uint32_t>(ctx.fpr[2]));
      if (branch_taken) {
          goto L_0880C138;
      }
      goto L_0880C1A4;
    }
L_0880C1A4:
    ctx.set_gpr(4, rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(328)));
    ctx.set_gpr(2, static_cast<std::int32_t>(ctx.gpr[4]) < 3 ? 1u : 0u);
    if (ctx.gpr[2] == 0u) {
    ctx.set_gpr(3, rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(328)));
        goto L_0880C314;
    }
    goto L_0880C1B4;
L_0880C1B4:
    { const bool branch_taken = static_cast<std::int32_t>(ctx.gpr[4]) <= 0;
    // nop
      if (branch_taken) {
          goto L_0880C464;
      }
      goto L_0880C1BC;
    }
L_0880C1BC:
    { const bool branch_taken = static_cast<std::int32_t>(ctx.gpr[16]) < 0;
    ctx.fpr[1] = std::bit_cast<float>(0u);
      if (branch_taken) {
          goto L_0880C1EC;
      }
      goto L_0880C1C4;
    }
L_0880C1C4:
    ctx.set_gpr(3, ctx.gpr[16] << 2u);
    ctx.set_gpr(2, ctx.gpr[29] + static_cast<std::uint32_t>(160));
    ctx.set_gpr(2, ctx.gpr[2] + ctx.gpr[3]);
    ctx.set_gpr(4, ctx.gpr[16] + static_cast<std::uint32_t>(1));
    ctx.set_gpr(3, 0u + 0u);
    goto L_0880C1D8;
L_0880C1D8:
    ctx.fpr[0] = std::bit_cast<float>(rt.memory().aot_load32(ctx.gpr[2] + static_cast<std::uint32_t>(0)));
    ctx.set_gpr(3, ctx.gpr[3] + static_cast<std::uint32_t>(1));
    ctx.set_gpr(2, ctx.gpr[2] + static_cast<std::uint32_t>(-4));
    { const bool branch_taken = ctx.gpr[4] != ctx.gpr[3];
    ctx.fpr[1] = ctx.fpr[1] + ctx.fpr[0];
      if (branch_taken) {
          goto L_0880C1D8;
      }
      goto L_0880C1EC;
    }
L_0880C1EC:
    { const bool branch_taken = ctx.gpr[22] == 0u;
    ctx.set_fpr_bits(2, ctx.fpr_bits(1));
      if (branch_taken) {
          goto L_0880C1F8;
      }
      goto L_0880C1F4;
    }
L_0880C1F4:
    ctx.set_fpr_bits(2, ctx.fpr_bits(1) ^ 0x80000000u);
    goto L_0880C1F8;
L_0880C1F8:
    ctx.fpr[0] = std::bit_cast<float>(rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(160)));
    ctx.set_gpr(2, rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(324)));
    ctx.fpr[1] = ctx.fpr[0] - ctx.fpr[1];
    { const bool branch_taken = static_cast<std::int32_t>(ctx.gpr[16]) <= 0;
    rt.memory().aot_store32(ctx.gpr[2] + static_cast<std::uint32_t>(0), std::bit_cast<std::uint32_t>(ctx.fpr[2]));
      if (branch_taken) {
          goto L_0880C22C;
      }
      goto L_0880C20C;
    }
L_0880C20C:
    ctx.set_gpr(4, 0u + static_cast<std::uint32_t>(1));
    ctx.set_gpr(3, ctx.gpr[29] + static_cast<std::uint32_t>(164));
    goto L_0880C214;
L_0880C214:
    ctx.fpr[0] = std::bit_cast<float>(rt.memory().aot_load32(ctx.gpr[3] + static_cast<std::uint32_t>(0)));
    ctx.set_gpr(4, ctx.gpr[4] + static_cast<std::uint32_t>(1));
    ctx.set_gpr(2, static_cast<std::int32_t>(ctx.gpr[16]) < static_cast<std::int32_t>(ctx.gpr[4]) ? 1u : 0u);
    ctx.fpr[1] = ctx.fpr[1] + ctx.fpr[0];
    { const bool branch_taken = ctx.gpr[2] == 0u;
    ctx.set_gpr(3, ctx.gpr[3] + static_cast<std::uint32_t>(4));
      if (branch_taken) {
          goto L_0880C214;
      }
      goto L_0880C22C;
    }
L_0880C22C:
    if (ctx.gpr[22] != 0u) {
    ctx.set_fpr_bits(1, ctx.fpr_bits(1) ^ 0x80000000u);
        goto L_0880C234;
    }
    goto L_0880C234;
L_0880C234:
    ctx.set_gpr(3, rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(324)));
    rt.memory().aot_store32(ctx.gpr[3] + static_cast<std::uint32_t>(4), std::bit_cast<std::uint32_t>(ctx.fpr[1]));
    goto L_0880C23C;
L_0880C23C:
    ctx.set_gpr(2, ctx.gpr[21] & 7u);
    goto L_0880C240;
L_0880C240:
    ctx.set_gpr(31, rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(372)));
    ctx.set_gpr(30, rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(368)));
    ctx.set_gpr(23, rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(364)));
    ctx.set_gpr(22, rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(360)));
    ctx.set_gpr(21, rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(356)));
    ctx.set_gpr(20, rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(352)));
    ctx.set_gpr(19, rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(348)));
    ctx.set_gpr(18, rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(344)));
    ctx.set_gpr(17, rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(340)));
    ctx.set_gpr(16, rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(336)));
    ctx.fpr[20] = std::bit_cast<float>(rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(384)));
    jump_target = ctx.gpr[31];
    ctx.set_gpr(29, ctx.gpr[29] + static_cast<std::uint32_t>(400));
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_0880C274:
    { const bool branch_taken = ctx.gpr[19] != 0u;
    ctx.set_gpr(2, 2225u << 16u);
      if (branch_taken) {
          goto L_0880C2C0;
      }
      goto L_0880C27C;
    }
L_0880C27C:
    ctx.set_gpr(2, ctx.gpr[20] + ctx.gpr[29]);
    ctx.set_gpr(3, rt.memory().aot_load32(ctx.gpr[2] + static_cast<std::uint32_t>(-4)));
    ctx.set_gpr(22, static_cast<std::uint32_t>(static_cast<std::int32_t>(ctx.gpr[3]) >> 8u));
    (void)rt.invoke_chained_direct<&recomp_unit_0001_entry, 1u, 699u, 0x0880BEA8u>(ctx, &aot_mem); return;
L_0880C28C:
    ctx.set_gpr(3, ctx.gpr[16] + static_cast<std::uint32_t>(-1));
    ctx.set_gpr(3, ctx.gpr[3] << 2u);
    ctx.set_gpr(3, ctx.gpr[3] + ctx.gpr[29]);
    ctx.set_gpr(2, rt.memory().aot_load32(ctx.gpr[3] + static_cast<std::uint32_t>(0)));
    ctx.set_gpr(2, ctx.gpr[2] & 127u);
    rt.memory().aot_store32(ctx.gpr[3] + static_cast<std::uint32_t>(0), ctx.gpr[2]);
    (void)rt.invoke_chained_direct<&recomp_unit_0001_entry, 1u, 710u, 0x0880BF20u>(ctx, &aot_mem); return;
L_0880C2A8:
    ctx.set_gpr(3, ctx.gpr[3] << 2u);
    ctx.set_gpr(3, ctx.gpr[3] + ctx.gpr[29]);
    ctx.set_gpr(2, rt.memory().aot_load32(ctx.gpr[3] + static_cast<std::uint32_t>(0)));
    ctx.set_gpr(2, ctx.gpr[2] & 63u);
    rt.memory().aot_store32(ctx.gpr[3] + static_cast<std::uint32_t>(0), ctx.gpr[2]);
    (void)rt.invoke_chained_direct<&recomp_unit_0001_entry, 1u, 710u, 0x0880BF20u>(ctx, &aot_mem); return;
L_0880C2C0:
    ctx.fpr[0] = std::bit_cast<float>(rt.memory().aot_load32(ctx.gpr[2] + static_cast<std::uint32_t>(-784)));
    ctx.set_fpu_condition((ctx.fpr[0] <= ctx.fpr[20]));
    // nop
    { const bool branch_taken = !ctx.fpu_condition();
    ctx.set_gpr(22, 0u + 0u);
      if (branch_taken) {
          (void)rt.invoke_chained_direct<&recomp_unit_0001_entry, 1u, 711u, 0x0880BF2Cu>(ctx, &aot_mem); return;
      }
      goto L_0880C2D4;
    }
L_0880C2D4:
    ctx.set_gpr(22, 0u + static_cast<std::uint32_t>(2));
    (void)rt.invoke_chained_direct<&recomp_unit_0001_entry, 1u, 700u, 0x0880BEB0u>(ctx, &aot_mem); return;
L_0880C2DC:
    ctx.set_gpr(2, ctx.gpr[8] + ctx.gpr[29]);
    ctx.set_gpr(3, rt.memory().aot_load32(ctx.gpr[2] + static_cast<std::uint32_t>(0)));
    ctx.set_gpr(30, ctx.gpr[30] + static_cast<std::uint32_t>(-16));
    { const bool branch_taken = ctx.gpr[3] != 0u;
    ctx.set_gpr(16, ctx.gpr[7] + 0u);
      if (branch_taken) {
          goto L_0880C0C0;
      }
      goto L_0880C2F0;
    }
L_0880C2F0:
    ctx.set_gpr(2, ctx.gpr[8] + static_cast<std::uint32_t>(-4));
    ctx.set_gpr(3, ctx.gpr[29] + ctx.gpr[2]);
    goto L_0880C2F8;
L_0880C2F8:
    ctx.set_gpr(2, rt.memory().aot_load32(ctx.gpr[3] + static_cast<std::uint32_t>(0)));
    ctx.set_gpr(16, ctx.gpr[16] + static_cast<std::uint32_t>(-1));
    ctx.set_gpr(30, ctx.gpr[30] + static_cast<std::uint32_t>(-8));
    { const bool branch_taken = ctx.gpr[2] == 0u;
    ctx.set_gpr(3, ctx.gpr[3] + static_cast<std::uint32_t>(-4));
      if (branch_taken) {
          goto L_0880C2F8;
      }
      goto L_0880C30C;
    }
L_0880C30C:
    ctx.set_gpr(3, 2225u << 16u);
    goto L_0880C0C4;
L_0880C314:
    ctx.set_gpr(2, 0u + static_cast<std::uint32_t>(3));
    { const bool branch_taken = ctx.gpr[3] != ctx.gpr[2];
    ctx.set_gpr(2, ctx.gpr[21] & 7u);
      if (branch_taken) {
          goto L_0880C240;
      }
      goto L_0880C320;
    }
L_0880C320:
    { const bool branch_taken = static_cast<std::int32_t>(ctx.gpr[16]) <= 0;
    ctx.set_gpr(2, ctx.gpr[16] + static_cast<std::uint32_t>(-1));
      if (branch_taken) {
          goto L_0880C36C;
      }
      goto L_0880C328;
    }
L_0880C328:
    ctx.set_gpr(5, ctx.gpr[2] << 2u);
    ctx.set_gpr(6, ctx.gpr[29] + static_cast<std::uint32_t>(160));
    ctx.set_gpr(3, ctx.gpr[6] + ctx.gpr[5]);
    ctx.set_gpr(4, 0u + 0u);
    ctx.set_gpr(20, ctx.gpr[16] << 2u);
    goto L_0880C33C;
L_0880C33C:
    ctx.set_gpr(2, ctx.gpr[20] - ctx.gpr[5]);
    ctx.set_gpr(2, ctx.gpr[3] + ctx.gpr[2]);
    ctx.fpr[0] = std::bit_cast<float>(rt.memory().aot_load32(ctx.gpr[3] + static_cast<std::uint32_t>(0)));
    ctx.fpr[1] = std::bit_cast<float>(rt.memory().aot_load32(ctx.gpr[2] + static_cast<std::uint32_t>(0)));
    ctx.set_gpr(4, ctx.gpr[4] + static_cast<std::uint32_t>(1));
    ctx.fpr[2] = ctx.fpr[0] + ctx.fpr[1];
    ctx.fpr[0] = ctx.fpr[0] - ctx.fpr[2];
    ctx.fpr[1] = ctx.fpr[1] + ctx.fpr[0];
    rt.memory().aot_store32(ctx.gpr[2] + static_cast<std::uint32_t>(0), std::bit_cast<std::uint32_t>(ctx.fpr[1]));
    rt.memory().aot_store32(ctx.gpr[3] + static_cast<std::uint32_t>(0), std::bit_cast<std::uint32_t>(ctx.fpr[2]));
    { const bool branch_taken = ctx.gpr[4] != ctx.gpr[16];
    ctx.set_gpr(3, ctx.gpr[3] + static_cast<std::uint32_t>(-4));
      if (branch_taken) {
          goto L_0880C33C;
      }
      goto L_0880C36C;
    }
L_0880C36C:
    ctx.set_gpr(2, static_cast<std::int32_t>(ctx.gpr[16]) < 2 ? 1u : 0u);
    { const bool branch_taken = ctx.gpr[2] != 0u;
    ctx.fpr[2] = std::bit_cast<float>(0u);
      if (branch_taken) {
          goto L_0880C3E4;
      }
      goto L_0880C378;
    }
L_0880C378:
    ctx.set_gpr(7, ctx.gpr[16] + static_cast<std::uint32_t>(-1));
    ctx.set_gpr(6, ctx.gpr[29] + static_cast<std::uint32_t>(160));
    ctx.set_gpr(20, ctx.gpr[16] << 2u);
    ctx.set_gpr(2, ctx.gpr[7] << 2u);
    ctx.set_gpr(3, ctx.gpr[6] + ctx.gpr[20]);
    ctx.set_gpr(5, ctx.gpr[6] + ctx.gpr[2]);
    ctx.set_gpr(8, ctx.gpr[3] - ctx.gpr[5]);
    ctx.set_gpr(6, 0u + 0u);
    goto L_0880C398;
L_0880C398:
    ctx.set_gpr(2, ctx.gpr[8] + ctx.gpr[5]);
    ctx.fpr[0] = std::bit_cast<float>(rt.memory().aot_load32(ctx.gpr[5] + static_cast<std::uint32_t>(0)));
    ctx.fpr[1] = std::bit_cast<float>(rt.memory().aot_load32(ctx.gpr[2] + static_cast<std::uint32_t>(0)));
    ctx.set_gpr(6, ctx.gpr[6] + static_cast<std::uint32_t>(1));
    ctx.fpr[2] = ctx.fpr[0] + ctx.fpr[1];
    ctx.fpr[0] = ctx.fpr[0] - ctx.fpr[2];
    ctx.fpr[1] = ctx.fpr[1] + ctx.fpr[0];
    rt.memory().aot_store32(ctx.gpr[2] + static_cast<std::uint32_t>(0), std::bit_cast<std::uint32_t>(ctx.fpr[1]));
    rt.memory().aot_store32(ctx.gpr[5] + static_cast<std::uint32_t>(0), std::bit_cast<std::uint32_t>(ctx.fpr[2]));
    { const bool branch_taken = ctx.gpr[7] != ctx.gpr[6];
    ctx.set_gpr(5, ctx.gpr[5] + static_cast<std::uint32_t>(-4));
      if (branch_taken) {
          goto L_0880C398;
      }
      goto L_0880C3C4;
    }
L_0880C3C4:
    ctx.fpr[2] = std::bit_cast<float>(0u);
    ctx.set_gpr(2, ctx.gpr[3] + 0u);
    ctx.set_gpr(3, 0u + 0u);
    goto L_0880C3D0;
L_0880C3D0:
    ctx.fpr[0] = std::bit_cast<float>(rt.memory().aot_load32(ctx.gpr[2] + static_cast<std::uint32_t>(0)));
    ctx.set_gpr(3, ctx.gpr[3] + static_cast<std::uint32_t>(1));
    ctx.set_gpr(2, ctx.gpr[2] + static_cast<std::uint32_t>(-4));
    { const bool branch_taken = ctx.gpr[7] != ctx.gpr[3];
    ctx.fpr[2] = ctx.fpr[2] + ctx.fpr[0];
      if (branch_taken) {
          goto L_0880C3D0;
      }
      goto L_0880C3E4;
    }
L_0880C3E4:
    { const bool branch_taken = ctx.gpr[22] == 0u;
    ctx.fpr[0] = std::bit_cast<float>(rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(160)));
      if (branch_taken) {
          goto L_0880C4B0;
      }
      goto L_0880C3EC;
    }
L_0880C3EC:
    ctx.fpr[1] = std::bit_cast<float>(rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(160)));
    ctx.fpr[0] = std::bit_cast<float>(rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(164)));
    ctx.set_fpr_bits(2, ctx.fpr_bits(2) ^ 0x80000000u);
    ctx.set_fpr_bits(1, ctx.fpr_bits(1) ^ 0x80000000u);
    ctx.set_fpr_bits(0, ctx.fpr_bits(0) ^ 0x80000000u);
    ctx.set_gpr(4, rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(324)));
    rt.memory().aot_store32(ctx.gpr[4] + static_cast<std::uint32_t>(8), std::bit_cast<std::uint32_t>(ctx.fpr[2]));
    rt.memory().aot_store32(ctx.gpr[4] + static_cast<std::uint32_t>(0), std::bit_cast<std::uint32_t>(ctx.fpr[1]));
    rt.memory().aot_store32(ctx.gpr[4] + static_cast<std::uint32_t>(4), std::bit_cast<std::uint32_t>(ctx.fpr[0]));
    goto L_0880C23C;
L_0880C414:
    ctx.fpr[0] = std::bit_cast<float>(rt.memory().aot_load32(ctx.gpr[2] + static_cast<std::uint32_t>(-800)));
    ctx.set_gpr(2, 2225u << 16u);
    ctx.set_gpr(16, ctx.gpr[16] + static_cast<std::uint32_t>(1));
    { const float fs = ctx.fpr[4]; const float ft = ctx.fpr[0]; if ((std::isinf(fs) && ft == 0.0f) || (std::isinf(ft) && fs == 0.0f)) ctx.set_fpr_bits(0, 0x7FC00000u); else ctx.fpr[0] = fs * ft; }
    ctx.set_gpr(4, ctx.gpr[20] + ctx.gpr[29]);
    ctx.set_gpr(20, ctx.gpr[16] << 2u);
    ctx.set_gpr(3, ctx.gpr[20] + ctx.gpr[29]);
    ctx.set_fpr_bits(1, ctx.fpu_float_to_word(ctx.fpr[0], 1u));
    ctx.fpr[0] = std::bit_cast<float>(rt.memory().aot_load32(ctx.gpr[2] + static_cast<std::uint32_t>(-796)));
    ctx.fpr[2] = static_cast<float>(static_cast<std::int32_t>(ctx.fpr_bits(1)));
    { const float fs = ctx.fpr[2]; const float ft = ctx.fpr[0]; if ((std::isinf(fs) && ft == 0.0f) || (std::isinf(ft) && fs == 0.0f)) ctx.set_fpr_bits(0, 0x7FC00000u); else ctx.fpr[0] = fs * ft; }
    ctx.set_fpr_bits(3, ctx.fpu_float_to_word(ctx.fpr[2], 1u));
    ctx.fpr[0] = ctx.fpr[4] + ctx.fpr[0];
    ctx.set_fpr_bits(1, ctx.fpu_float_to_word(ctx.fpr[0], 1u));
    rt.memory().aot_store32(ctx.gpr[4] + static_cast<std::uint32_t>(0), std::bit_cast<std::uint32_t>(ctx.fpr[1]));
    rt.memory().aot_store32(ctx.gpr[3] + static_cast<std::uint32_t>(0), std::bit_cast<std::uint32_t>(ctx.fpr[3]));
    goto L_0880C0C0;
L_0880C458:
    ctx.set_gpr(2, 0u + 0u);
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(320), 0u);
    (void)rt.invoke_chained_direct<&recomp_unit_0001_entry, 1u, 681u, 0x0880BD0Cu>(ctx, &aot_mem); return;
L_0880C464:
    { const bool branch_taken = ctx.gpr[4] != 0u;
    ctx.set_gpr(2, ctx.gpr[21] & 7u);
      if (branch_taken) {
          goto L_0880C240;
      }
      goto L_0880C46C;
    }
L_0880C46C:
    { const bool branch_taken = static_cast<std::int32_t>(ctx.gpr[16]) < 0;
    ctx.fpr[1] = std::bit_cast<float>(0u);
      if (branch_taken) {
          goto L_0880C49C;
      }
      goto L_0880C474;
    }
L_0880C474:
    ctx.set_gpr(3, ctx.gpr[16] << 2u);
    ctx.set_gpr(2, ctx.gpr[29] + static_cast<std::uint32_t>(160));
    ctx.set_gpr(2, ctx.gpr[2] + ctx.gpr[3]);
    ctx.set_gpr(4, ctx.gpr[16] + static_cast<std::uint32_t>(1));
    ctx.set_gpr(3, 0u + 0u);
    goto L_0880C488;
L_0880C488:
    ctx.fpr[0] = std::bit_cast<float>(rt.memory().aot_load32(ctx.gpr[2] + static_cast<std::uint32_t>(0)));
    ctx.set_gpr(3, ctx.gpr[3] + static_cast<std::uint32_t>(1));
    ctx.set_gpr(2, ctx.gpr[2] + static_cast<std::uint32_t>(-4));
    { const bool branch_taken = ctx.gpr[4] != ctx.gpr[3];
    ctx.fpr[1] = ctx.fpr[1] + ctx.fpr[0];
      if (branch_taken) {
          goto L_0880C488;
      }
      goto L_0880C49C;
    }
L_0880C49C:
    if (ctx.gpr[22] != 0u) {
    ctx.set_fpr_bits(1, ctx.fpr_bits(1) ^ 0x80000000u);
        goto L_0880C4A4;
    }
    goto L_0880C4A4;
L_0880C4A4:
    ctx.set_gpr(4, rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(324)));
    rt.memory().aot_store32(ctx.gpr[4] + static_cast<std::uint32_t>(0), std::bit_cast<std::uint32_t>(ctx.fpr[1]));
    goto L_0880C23C;
L_0880C4B0:
    ctx.fpr[1] = std::bit_cast<float>(rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(164)));
    ctx.set_gpr(2, rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(324)));
    rt.memory().aot_store32(ctx.gpr[2] + static_cast<std::uint32_t>(8), std::bit_cast<std::uint32_t>(ctx.fpr[2]));
    rt.memory().aot_store32(ctx.gpr[2] + static_cast<std::uint32_t>(0), std::bit_cast<std::uint32_t>(ctx.fpr[0]));
    rt.memory().aot_store32(ctx.gpr[2] + static_cast<std::uint32_t>(4), std::bit_cast<std::uint32_t>(ctx.fpr[1]));
    goto L_0880C23C;
L_0880C4C8:
    ctx.set_gpr(3, std::bit_cast<std::uint32_t>(ctx.fpr[12]));
    ctx.set_gpr(2, 12799u << 16u);
    ctx.set_gpr(2, ctx.gpr[2] | 65535u);
    ctx.set_gpr(3, (ctx.gpr[3] & ~0x80000000u) | ((0u & 0x00000001u) << 31u));
    ctx.set_gpr(3, static_cast<std::int32_t>(ctx.gpr[2]) < static_cast<std::int32_t>(ctx.gpr[3]) ? 1u : 0u);
    if (ctx.gpr[3] != 0u) {
    { const float fs = ctx.fpr[12]; const float ft = ctx.fpr[12]; if ((std::isinf(fs) && ft == 0.0f) || (std::isinf(ft) && fs == 0.0f)) ctx.set_fpr_bits(3, 0x7FC00000u); else ctx.fpr[3] = fs * ft; }
        goto L_0880C4F8;
    }
    goto L_0880C4E4;
L_0880C4E4:
    ctx.set_fpr_bits(0, ctx.fpu_float_to_word(ctx.fpr[12], 1u));
    ctx.set_gpr(2, std::bit_cast<std::uint32_t>(ctx.fpr[0]));
    { const bool branch_taken = ctx.gpr[2] == 0u;
    // nop
      if (branch_taken) {
          goto L_0880C578;
      }
      goto L_0880C4F4;
    }
L_0880C4F4:
    { const float fs = ctx.fpr[12]; const float ft = ctx.fpr[12]; if ((std::isinf(fs) && ft == 0.0f) || (std::isinf(ft) && fs == 0.0f)) ctx.set_fpr_bits(3, 0x7FC00000u); else ctx.fpr[3] = fs * ft; }
    goto L_0880C4F8;
L_0880C4F8:
    ctx.set_gpr(2, 2225u << 16u);
    ctx.fpr[0] = std::bit_cast<float>(rt.memory().aot_load32(ctx.gpr[2] + static_cast<std::uint32_t>(-772)));
    ctx.set_gpr(2, 2225u << 16u);
    ctx.fpr[1] = std::bit_cast<float>(rt.memory().aot_load32(ctx.gpr[2] + static_cast<std::uint32_t>(-768)));
    { const float fs = ctx.fpr[3]; const float ft = ctx.fpr[0]; if ((std::isinf(fs) && ft == 0.0f) || (std::isinf(ft) && fs == 0.0f)) ctx.set_fpr_bits(0, 0x7FC00000u); else ctx.fpr[0] = fs * ft; }
    ctx.set_gpr(2, 2225u << 16u);
    { const float fs = ctx.fpr[12]; const float ft = ctx.fpr[3]; if ((std::isinf(fs) && ft == 0.0f) || (std::isinf(ft) && fs == 0.0f)) ctx.set_fpr_bits(4, 0x7FC00000u); else ctx.fpr[4] = fs * ft; }
    ctx.fpr[0] = ctx.fpr[0] - ctx.fpr[1];
    ctx.fpr[1] = std::bit_cast<float>(rt.memory().aot_load32(ctx.gpr[2] + static_cast<std::uint32_t>(-764)));
    ctx.set_gpr(2, 2225u << 16u);
    { const float fs = ctx.fpr[3]; const float ft = ctx.fpr[0]; if ((std::isinf(fs) && ft == 0.0f) || (std::isinf(ft) && fs == 0.0f)) ctx.set_fpr_bits(0, 0x7FC00000u); else ctx.fpr[0] = fs * ft; }
    ctx.fpr[0] = ctx.fpr[0] + ctx.fpr[1];
    ctx.fpr[1] = std::bit_cast<float>(rt.memory().aot_load32(ctx.gpr[2] + static_cast<std::uint32_t>(-760)));
    ctx.set_gpr(2, 2225u << 16u);
    { const float fs = ctx.fpr[3]; const float ft = ctx.fpr[0]; if ((std::isinf(fs) && ft == 0.0f) || (std::isinf(ft) && fs == 0.0f)) ctx.set_fpr_bits(0, 0x7FC00000u); else ctx.fpr[0] = fs * ft; }
    ctx.fpr[0] = ctx.fpr[0] - ctx.fpr[1];
    ctx.fpr[1] = std::bit_cast<float>(rt.memory().aot_load32(ctx.gpr[2] + static_cast<std::uint32_t>(-756)));
    { const float fs = ctx.fpr[3]; const float ft = ctx.fpr[0]; if ((std::isinf(fs) && ft == 0.0f) || (std::isinf(ft) && fs == 0.0f)) ctx.set_fpr_bits(0, 0x7FC00000u); else ctx.fpr[0] = fs * ft; }
    { const bool branch_taken = ctx.gpr[4] == 0u;
    ctx.fpr[0] = ctx.fpr[0] + ctx.fpr[1];
      if (branch_taken) {
          goto L_0880C580;
      }
      goto L_0880C548;
    }
L_0880C548:
    ctx.set_gpr(2, 2225u << 16u);
    { const float fs = ctx.fpr[4]; const float ft = ctx.fpr[0]; if ((std::isinf(fs) && ft == 0.0f) || (std::isinf(ft) && fs == 0.0f)) ctx.set_fpr_bits(2, 0x7FC00000u); else ctx.fpr[2] = fs * ft; }
    ctx.fpr[0] = std::bit_cast<float>(rt.memory().aot_load32(ctx.gpr[2] + static_cast<std::uint32_t>(-748)));
    ctx.set_gpr(2, 2225u << 16u);
    ctx.fpr[1] = std::bit_cast<float>(rt.memory().aot_load32(ctx.gpr[2] + static_cast<std::uint32_t>(-752)));
    { const float fs = ctx.fpr[13]; const float ft = ctx.fpr[0]; if ((std::isinf(fs) && ft == 0.0f) || (std::isinf(ft) && fs == 0.0f)) ctx.set_fpr_bits(0, 0x7FC00000u); else ctx.fpr[0] = fs * ft; }
    { const float fs = ctx.fpr[4]; const float ft = ctx.fpr[1]; if ((std::isinf(fs) && ft == 0.0f) || (std::isinf(ft) && fs == 0.0f)) ctx.set_fpr_bits(1, 0x7FC00000u); else ctx.fpr[1] = fs * ft; }
    ctx.fpr[0] = ctx.fpr[0] - ctx.fpr[2];
    { const float fs = ctx.fpr[3]; const float ft = ctx.fpr[0]; if ((std::isinf(fs) && ft == 0.0f) || (std::isinf(ft) && fs == 0.0f)) ctx.set_fpr_bits(0, 0x7FC00000u); else ctx.fpr[0] = fs * ft; }
    ctx.fpr[0] = ctx.fpr[0] - ctx.fpr[13];
    ctx.fpr[0] = ctx.fpr[0] + ctx.fpr[1];
    ctx.fpr[12] = ctx.fpr[12] - ctx.fpr[0];
    goto L_0880C578;
L_0880C578:
    jump_target = ctx.gpr[31];
    ctx.set_fpr_bits(0, ctx.fpr_bits(12));
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_0880C580:
    { const float fs = ctx.fpr[3]; const float ft = ctx.fpr[0]; if ((std::isinf(fs) && ft == 0.0f) || (std::isinf(ft) && fs == 0.0f)) ctx.set_fpr_bits(0, 0x7FC00000u); else ctx.fpr[0] = fs * ft; }
    ctx.set_gpr(2, 2225u << 16u);
    ctx.fpr[1] = std::bit_cast<float>(rt.memory().aot_load32(ctx.gpr[2] + static_cast<std::uint32_t>(-752)));
    ctx.fpr[0] = ctx.fpr[0] - ctx.fpr[1];
    { const float fs = ctx.fpr[4]; const float ft = ctx.fpr[0]; if ((std::isinf(fs) && ft == 0.0f) || (std::isinf(ft) && fs == 0.0f)) ctx.set_fpr_bits(0, 0x7FC00000u); else ctx.fpr[0] = fs * ft; }
    ctx.fpr[12] = ctx.fpr[12] + ctx.fpr[0];
    jump_target = ctx.gpr[31];
    ctx.set_fpr_bits(0, ctx.fpr_bits(12));
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_0880C5A0:
    ctx.set_gpr(3, std::bit_cast<std::uint32_t>(ctx.fpr[12]));
    ctx.set_gpr(2, 12671u << 16u);
    ctx.set_gpr(2, ctx.gpr[2] | 65535u);
    ctx.set_gpr(3, (ctx.gpr[3] & ~0x80000000u) | ((0u & 0x00000001u) << 31u));
    ctx.set_gpr(29, ctx.gpr[29] + static_cast<std::uint32_t>(-16));
    ctx.set_gpr(2, static_cast<std::int32_t>(ctx.gpr[2]) < static_cast<std::int32_t>(ctx.gpr[3]) ? 1u : 0u);
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(0), ctx.gpr[31]);
    ctx.set_fpr_bits(6, ctx.fpr_bits(12));
    { const bool branch_taken = ctx.gpr[2] != 0u;
    ctx.set_gpr(5, std::bit_cast<std::uint32_t>(ctx.fpr[12]));
      if (branch_taken) {
          goto L_0880C734;
      }
      goto L_0880C5C8;
    }
L_0880C5C8:
    ctx.set_fpr_bits(0, ctx.fpu_float_to_word(ctx.fpr[12], 1u));
    ctx.set_gpr(2, std::bit_cast<std::uint32_t>(ctx.fpr[0]));
    { const bool branch_taken = ctx.gpr[2] == 0u;
    ctx.set_gpr(2, ctx.gpr[4] + static_cast<std::uint32_t>(1));
      if (branch_taken) {
          goto L_0880C7CC;
      }
      goto L_0880C5D8;
    }
L_0880C5D8:
    { const float fs = ctx.fpr[6]; const float ft = ctx.fpr[6]; if ((std::isinf(fs) && ft == 0.0f) || (std::isinf(ft) && fs == 0.0f)) ctx.set_fpr_bits(4, 0x7FC00000u); else ctx.fpr[4] = fs * ft; }
    goto L_0880C5DC;
L_0880C5DC:
    ctx.set_gpr(2, 2225u << 16u);
    ctx.fpr[1] = std::bit_cast<float>(rt.memory().aot_load32(ctx.gpr[2] + static_cast<std::uint32_t>(-704)));
    ctx.set_gpr(2, 2225u << 16u);
    { const float fs = ctx.fpr[4]; const float ft = ctx.fpr[4]; if ((std::isinf(fs) && ft == 0.0f) || (std::isinf(ft) && fs == 0.0f)) ctx.set_fpr_bits(3, 0x7FC00000u); else ctx.fpr[3] = fs * ft; }
    ctx.fpr[0] = std::bit_cast<float>(rt.memory().aot_load32(ctx.gpr[2] + static_cast<std::uint32_t>(-728)));
    ctx.set_gpr(2, 2225u << 16u);
    ctx.fpr[2] = std::bit_cast<float>(rt.memory().aot_load32(ctx.gpr[2] + static_cast<std::uint32_t>(-700)));
    { const float fs = ctx.fpr[3]; const float ft = ctx.fpr[1]; if ((std::isinf(fs) && ft == 0.0f) || (std::isinf(ft) && fs == 0.0f)) ctx.set_fpr_bits(1, 0x7FC00000u); else ctx.fpr[1] = fs * ft; }
    { const float fs = ctx.fpr[3]; const float ft = ctx.fpr[0]; if ((std::isinf(fs) && ft == 0.0f) || (std::isinf(ft) && fs == 0.0f)) ctx.set_fpr_bits(0, 0x7FC00000u); else ctx.fpr[0] = fs * ft; }
    ctx.set_gpr(2, 2225u << 16u);
    ctx.fpr[1] = ctx.fpr[1] + ctx.fpr[2];
    ctx.fpr[2] = std::bit_cast<float>(rt.memory().aot_load32(ctx.gpr[2] + static_cast<std::uint32_t>(-724)));
    ctx.set_gpr(2, 2225u << 16u);
    ctx.fpr[0] = ctx.fpr[0] + ctx.fpr[2];
    { const float fs = ctx.fpr[3]; const float ft = ctx.fpr[1]; if ((std::isinf(fs) && ft == 0.0f) || (std::isinf(ft) && fs == 0.0f)) ctx.set_fpr_bits(1, 0x7FC00000u); else ctx.fpr[1] = fs * ft; }
    ctx.fpr[2] = std::bit_cast<float>(rt.memory().aot_load32(ctx.gpr[2] + static_cast<std::uint32_t>(-696)));
    ctx.set_gpr(2, 2225u << 16u);
    { const float fs = ctx.fpr[3]; const float ft = ctx.fpr[0]; if ((std::isinf(fs) && ft == 0.0f) || (std::isinf(ft) && fs == 0.0f)) ctx.set_fpr_bits(0, 0x7FC00000u); else ctx.fpr[0] = fs * ft; }
    ctx.fpr[1] = ctx.fpr[1] + ctx.fpr[2];
    ctx.fpr[2] = std::bit_cast<float>(rt.memory().aot_load32(ctx.gpr[2] + static_cast<std::uint32_t>(-720)));
    ctx.set_gpr(2, 2225u << 16u);
    ctx.fpr[0] = ctx.fpr[0] + ctx.fpr[2];
    { const float fs = ctx.fpr[3]; const float ft = ctx.fpr[1]; if ((std::isinf(fs) && ft == 0.0f) || (std::isinf(ft) && fs == 0.0f)) ctx.set_fpr_bits(1, 0x7FC00000u); else ctx.fpr[1] = fs * ft; }
    ctx.fpr[2] = std::bit_cast<float>(rt.memory().aot_load32(ctx.gpr[2] + static_cast<std::uint32_t>(-692)));
    ctx.set_gpr(2, 2225u << 16u);
    { const float fs = ctx.fpr[3]; const float ft = ctx.fpr[0]; if ((std::isinf(fs) && ft == 0.0f) || (std::isinf(ft) && fs == 0.0f)) ctx.set_fpr_bits(0, 0x7FC00000u); else ctx.fpr[0] = fs * ft; }
    ctx.fpr[1] = ctx.fpr[1] + ctx.fpr[2];
    ctx.fpr[2] = std::bit_cast<float>(rt.memory().aot_load32(ctx.gpr[2] + static_cast<std::uint32_t>(-716)));
    ctx.set_gpr(2, 2225u << 16u);
    ctx.fpr[0] = ctx.fpr[0] + ctx.fpr[2];
    { const float fs = ctx.fpr[3]; const float ft = ctx.fpr[1]; if ((std::isinf(fs) && ft == 0.0f) || (std::isinf(ft) && fs == 0.0f)) ctx.set_fpr_bits(1, 0x7FC00000u); else ctx.fpr[1] = fs * ft; }
    ctx.fpr[2] = std::bit_cast<float>(rt.memory().aot_load32(ctx.gpr[2] + static_cast<std::uint32_t>(-688)));
    ctx.set_gpr(2, 2225u << 16u);
    { const float fs = ctx.fpr[3]; const float ft = ctx.fpr[0]; if ((std::isinf(fs) && ft == 0.0f) || (std::isinf(ft) && fs == 0.0f)) ctx.set_fpr_bits(0, 0x7FC00000u); else ctx.fpr[0] = fs * ft; }
    ctx.fpr[1] = ctx.fpr[1] + ctx.fpr[2];
    ctx.fpr[2] = std::bit_cast<float>(rt.memory().aot_load32(ctx.gpr[2] + static_cast<std::uint32_t>(-712)));
    ctx.set_gpr(2, 2225u << 16u);
    ctx.fpr[0] = ctx.fpr[0] + ctx.fpr[2];
    { const float fs = ctx.fpr[3]; const float ft = ctx.fpr[1]; if ((std::isinf(fs) && ft == 0.0f) || (std::isinf(ft) && fs == 0.0f)) ctx.set_fpr_bits(1, 0x7FC00000u); else ctx.fpr[1] = fs * ft; }
    { const float fs = ctx.fpr[6]; const float ft = ctx.fpr[4]; if ((std::isinf(fs) && ft == 0.0f) || (std::isinf(ft) && fs == 0.0f)) ctx.set_fpr_bits(2, 0x7FC00000u); else ctx.fpr[2] = fs * ft; }
    { const float fs = ctx.fpr[3]; const float ft = ctx.fpr[0]; if ((std::isinf(fs) && ft == 0.0f) || (std::isinf(ft) && fs == 0.0f)) ctx.set_fpr_bits(3, 0x7FC00000u); else ctx.fpr[3] = fs * ft; }
    ctx.fpr[0] = std::bit_cast<float>(rt.memory().aot_load32(ctx.gpr[2] + static_cast<std::uint32_t>(-684)));
    ctx.set_gpr(2, 2225u << 16u);
    ctx.fpr[1] = ctx.fpr[1] + ctx.fpr[0];
    ctx.fpr[0] = std::bit_cast<float>(rt.memory().aot_load32(ctx.gpr[2] + static_cast<std::uint32_t>(-708)));
    ctx.set_gpr(2, 2225u << 16u);
    ctx.fpr[3] = ctx.fpr[3] + ctx.fpr[0];
    { const float fs = ctx.fpr[4]; const float ft = ctx.fpr[1]; if ((std::isinf(fs) && ft == 0.0f) || (std::isinf(ft) && fs == 0.0f)) ctx.set_fpr_bits(1, 0x7FC00000u); else ctx.fpr[1] = fs * ft; }
    ctx.fpr[0] = std::bit_cast<float>(rt.memory().aot_load32(ctx.gpr[2] + static_cast<std::uint32_t>(-680)));
    ctx.set_gpr(2, 16172u << 16u);
    ctx.set_gpr(2, ctx.gpr[2] | 41279u);
    ctx.fpr[3] = ctx.fpr[3] + ctx.fpr[1];
    { const float fs = ctx.fpr[2]; const float ft = ctx.fpr[0]; if ((std::isinf(fs) && ft == 0.0f) || (std::isinf(ft) && fs == 0.0f)) ctx.set_fpr_bits(0, 0x7FC00000u); else ctx.fpr[0] = fs * ft; }
    ctx.set_gpr(2, static_cast<std::int32_t>(ctx.gpr[2]) < static_cast<std::int32_t>(ctx.gpr[3]) ? 1u : 0u);
    { const float fs = ctx.fpr[2]; const float ft = ctx.fpr[3]; if ((std::isinf(fs) && ft == 0.0f) || (std::isinf(ft) && fs == 0.0f)) ctx.set_fpr_bits(2, 0x7FC00000u); else ctx.fpr[2] = fs * ft; }
    ctx.fpr[2] = ctx.fpr[13] + ctx.fpr[2];
    { const float fs = ctx.fpr[4]; const float ft = ctx.fpr[2]; if ((std::isinf(fs) && ft == 0.0f) || (std::isinf(ft) && fs == 0.0f)) ctx.set_fpr_bits(4, 0x7FC00000u); else ctx.fpr[4] = fs * ft; }
    ctx.fpr[4] = ctx.fpr[13] + ctx.fpr[4];
    ctx.fpr[4] = ctx.fpr[4] + ctx.fpr[0];
    { const bool branch_taken = ctx.gpr[2] != 0u;
    ctx.fpr[5] = ctx.fpr[6] + ctx.fpr[4];
      if (branch_taken) {
          goto L_0880C774;
      }
      goto L_0880C6D0;
    }
L_0880C6D0:
    ctx.set_gpr(2, 0u + static_cast<std::uint32_t>(1));
    { const bool branch_taken = ctx.gpr[4] == ctx.gpr[2];
    ctx.set_gpr(2, 2225u << 16u);
      if (branch_taken) {
          goto L_0880C824;
      }
      goto L_0880C6DC;
    }
L_0880C6DC:
    ctx.fpr[3] = std::bit_cast<float>(rt.memory().aot_load32(ctx.gpr[2] + static_cast<std::uint32_t>(-740)));
    ctx.set_gpr(2, std::bit_cast<std::uint32_t>(ctx.fpr[5]));
    ctx.fpr[3] = ctx.fpr[3] / ctx.fpr[5];
    ctx.set_gpr(2, (ctx.gpr[2] & ~0x00000FFFu) | ((0u & 0x00000FFFu) << 0u));
    ctx.fpr[0] = std::bit_cast<float>(ctx.gpr[2]);
    ctx.fpr[2] = ctx.fpr[0] - ctx.fpr[6];
    ctx.fpr[2] = ctx.fpr[4] - ctx.fpr[2];
    ctx.set_gpr(2, std::bit_cast<std::uint32_t>(ctx.fpr[3]));
    ctx.set_gpr(2, (ctx.gpr[2] & ~0x00000FFFu) | ((0u & 0x00000FFFu) << 0u));
    ctx.fpr[4] = std::bit_cast<float>(ctx.gpr[2]);
    ctx.set_gpr(2, 2225u << 16u);
    ctx.fpr[1] = std::bit_cast<float>(rt.memory().aot_load32(ctx.gpr[2] + static_cast<std::uint32_t>(-744)));
    { const float fs = ctx.fpr[0]; const float ft = ctx.fpr[4]; if ((std::isinf(fs) && ft == 0.0f) || (std::isinf(ft) && fs == 0.0f)) ctx.set_fpr_bits(0, 0x7FC00000u); else ctx.fpr[0] = fs * ft; }
    { const float fs = ctx.fpr[2]; const float ft = ctx.fpr[4]; if ((std::isinf(fs) && ft == 0.0f) || (std::isinf(ft) && fs == 0.0f)) ctx.set_fpr_bits(2, 0x7FC00000u); else ctx.fpr[2] = fs * ft; }
    ctx.fpr[0] = ctx.fpr[0] + ctx.fpr[1];
    ctx.fpr[0] = ctx.fpr[0] + ctx.fpr[2];
    { const float fs = ctx.fpr[3]; const float ft = ctx.fpr[0]; if ((std::isinf(fs) && ft == 0.0f) || (std::isinf(ft) && fs == 0.0f)) ctx.set_fpr_bits(3, 0x7FC00000u); else ctx.fpr[3] = fs * ft; }
    ctx.fpr[6] = ctx.fpr[4] + ctx.fpr[3];
    goto L_0880C724;
L_0880C724:
    ctx.set_fpr_bits(0, ctx.fpr_bits(6));
    ctx.set_gpr(31, rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(0)));
    jump_target = ctx.gpr[31];
    ctx.set_gpr(29, ctx.gpr[29] + static_cast<std::uint32_t>(16));
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_0880C734:
    ctx.set_gpr(2, 16172u << 16u);
    ctx.set_gpr(2, ctx.gpr[2] | 41279u);
    ctx.set_gpr(2, static_cast<std::int32_t>(ctx.gpr[2]) < static_cast<std::int32_t>(ctx.gpr[3]) ? 1u : 0u);
    if (ctx.gpr[2] == 0u) {
    { const float fs = ctx.fpr[6]; const float ft = ctx.fpr[6]; if ((std::isinf(fs) && ft == 0.0f) || (std::isinf(ft) && fs == 0.0f)) ctx.set_fpr_bits(4, 0x7FC00000u); else ctx.fpr[4] = fs * ft; }
        goto L_0880C5DC;
    }
    goto L_0880C748;
L_0880C748:
    if (static_cast<std::int32_t>(ctx.gpr[5]) < 0) {
    ctx.set_fpr_bits(6, ctx.fpr_bits(12) ^ 0x80000000u);
        goto L_0880C81C;
    }
    goto L_0880C750;
L_0880C750:
    ctx.set_gpr(2, 2225u << 16u);
    ctx.fpr[1] = std::bit_cast<float>(rt.memory().aot_load32(ctx.gpr[2] + static_cast<std::uint32_t>(-736)));
    ctx.set_gpr(2, 2225u << 16u);
    ctx.fpr[0] = std::bit_cast<float>(rt.memory().aot_load32(ctx.gpr[2] + static_cast<std::uint32_t>(-732)));
    ctx.fpr[1] = ctx.fpr[1] - ctx.fpr[6];
    ctx.fpr[0] = ctx.fpr[0] - ctx.fpr[13];
    ctx.fpr[13] = std::bit_cast<float>(0u);
    ctx.fpr[6] = ctx.fpr[1] + ctx.fpr[0];
    goto L_0880C5D8;
L_0880C774:
    ctx.fpr[0] = std::bit_cast<float>(ctx.gpr[4]);
    ctx.set_gpr(2, static_cast<std::uint32_t>(static_cast<std::int32_t>(ctx.gpr[5]) >> 30u));
    ctx.set_gpr(2, ctx.gpr[2] & 2u);
    ctx.fpr[2] = static_cast<float>(static_cast<std::int32_t>(ctx.fpr_bits(0)));
    { const float fs = ctx.fpr[5]; const float ft = ctx.fpr[5]; if ((std::isinf(fs) && ft == 0.0f) || (std::isinf(ft) && fs == 0.0f)) ctx.set_fpr_bits(0, 0x7FC00000u); else ctx.fpr[0] = fs * ft; }
    ctx.set_gpr(3, 0u + static_cast<std::uint32_t>(1));
    ctx.set_gpr(3, ctx.gpr[3] - ctx.gpr[2]);
    ctx.fpr[1] = ctx.fpr[5] + ctx.fpr[2];
    ctx.set_gpr(2, 2225u << 16u);
    ctx.set_gpr(31, rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(0)));
    ctx.set_gpr(29, ctx.gpr[29] + static_cast<std::uint32_t>(16));
    ctx.fpr[0] = ctx.fpr[0] / ctx.fpr[1];
    ctx.fpr[1] = std::bit_cast<float>(ctx.gpr[3]);
    ctx.fpr[3] = static_cast<float>(static_cast<std::int32_t>(ctx.fpr_bits(1)));
    ctx.fpr[1] = std::bit_cast<float>(rt.memory().aot_load32(ctx.gpr[2] + static_cast<std::uint32_t>(-676)));
    ctx.fpr[0] = ctx.fpr[0] - ctx.fpr[4];
    ctx.fpr[0] = ctx.fpr[6] - ctx.fpr[0];
    { const float fs = ctx.fpr[0]; const float ft = ctx.fpr[1]; if ((std::isinf(fs) && ft == 0.0f) || (std::isinf(ft) && fs == 0.0f)) ctx.set_fpr_bits(0, 0x7FC00000u); else ctx.fpr[0] = fs * ft; }
    ctx.fpr[2] = ctx.fpr[2] + ctx.fpr[0];
    { const float fs = ctx.fpr[3]; const float ft = ctx.fpr[2]; if ((std::isinf(fs) && ft == 0.0f) || (std::isinf(ft) && fs == 0.0f)) ctx.set_fpr_bits(6, 0x7FC00000u); else ctx.fpr[6] = fs * ft; }
    jump_target = ctx.gpr[31];
    ctx.set_fpr_bits(0, ctx.fpr_bits(6));
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_0880C7CC:
    ctx.set_gpr(2, ctx.gpr[3] | ctx.gpr[2]);
    { const bool branch_taken = ctx.gpr[2] == 0u;
    ctx.set_gpr(2, 0u + static_cast<std::uint32_t>(1));
      if (branch_taken) {
          goto L_0880C7F8;
      }
      goto L_0880C7D8;
    }
L_0880C7D8:
    { const bool branch_taken = ctx.gpr[4] == ctx.gpr[2];
    ctx.set_gpr(2, 2225u << 16u);
      if (branch_taken) {
          goto L_0880C724;
      }
      goto L_0880C7E0;
    }
L_0880C7E0:
    ctx.fpr[0] = std::bit_cast<float>(rt.memory().aot_load32(ctx.gpr[2] + static_cast<std::uint32_t>(-740)));
    ctx.set_gpr(31, rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(0)));
    ctx.set_gpr(29, ctx.gpr[29] + static_cast<std::uint32_t>(16));
    ctx.fpr[6] = ctx.fpr[0] / ctx.fpr[12];
    jump_target = ctx.gpr[31];
    ctx.set_fpr_bits(0, ctx.fpr_bits(6));
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_0880C7F8:
    ctx.set_gpr(31, 0x0880C800u);
    // nop
    goto L_0880DEE0;
L_0880C800:
    ctx.set_gpr(2, 2225u << 16u);
    ctx.fpr[1] = std::bit_cast<float>(rt.memory().aot_load32(ctx.gpr[2] + static_cast<std::uint32_t>(-744)));
    ctx.set_gpr(31, rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(0)));
    ctx.set_gpr(29, ctx.gpr[29] + static_cast<std::uint32_t>(16));
    ctx.fpr[6] = ctx.fpr[1] / ctx.fpr[0];
    jump_target = ctx.gpr[31];
    ctx.set_fpr_bits(0, ctx.fpr_bits(6));
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_0880C81C:
    ctx.set_fpr_bits(13, ctx.fpr_bits(13) ^ 0x80000000u);
    goto L_0880C750;
L_0880C824:
    ctx.set_fpr_bits(6, ctx.fpr_bits(5));
    ctx.set_gpr(31, rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(0)));
    ctx.set_gpr(29, ctx.gpr[29] + static_cast<std::uint32_t>(16));
    jump_target = ctx.gpr[31];
    ctx.set_fpr_bits(0, ctx.fpr_bits(6));
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_0880C838:
    ctx.set_gpr(29, ctx.gpr[29] + static_cast<std::uint32_t>(-48));
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(0), ctx.gpr[16]);
    ctx.set_gpr(2, 17423u << 16u);
    ctx.set_gpr(16, ctx.gpr[5] + 0u);
    ctx.set_gpr(16, (ctx.gpr[16] & ~0x80000000u) | ((0u & 0x00000001u) << 31u));
    ctx.set_gpr(2, ctx.gpr[2] | 65535u);
    ctx.set_gpr(2, static_cast<std::int32_t>(ctx.gpr[2]) < static_cast<std::int32_t>(ctx.gpr[16]) ? 1u : 0u);
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(24), ctx.gpr[22]);
    ctx.set_gpr(22, ctx.gpr[5] + 0u);
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(20), ctx.gpr[21]);
    ctx.set_gpr(21, ctx.gpr[5] + 0u);
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(16), ctx.gpr[20]);
    ctx.set_gpr(20, ctx.gpr[4] + 0u);
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(32), ctx.gpr[31]);
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(28), ctx.gpr[23]);
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(12), ctx.gpr[19]);
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(8), ctx.gpr[18]);
    { const bool branch_taken = ctx.gpr[2] == 0u;
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(4), ctx.gpr[17]);
      if (branch_taken) {
          goto L_0880C8D8;
      }
      goto L_0880C884;
    }
L_0880C884:
    ctx.set_gpr(7, 32752u << 16u);
    ctx.set_gpr(6, static_cast<std::int32_t>(ctx.gpr[7]) < static_cast<std::int32_t>(ctx.gpr[16]) ? 1u : 0u);
    { const bool branch_taken = ctx.gpr[6] == 0u;
    ctx.set_gpr(6, ctx.gpr[20] + 0u);
      if (branch_taken) {
          goto L_0880CBD0;
      }
      goto L_0880C894;
    }
L_0880C894:
    ctx.set_gpr(31, 0x0880C89Cu);
    ctx.set_gpr(7, ctx.gpr[21] + 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0006_entry, 6u, 773u, 0x0881F3E0u>(ctx, &aot_mem) && ctx.pc == 0x0880C89Cu) goto L_0880C89C;
    return;
L_0880C89C:
    ctx.set_gpr(20, ctx.gpr[2] + 0u);
    ctx.set_gpr(21, ctx.gpr[3] + 0u);
    goto L_0880C8A4;
L_0880C8A4:
    ctx.set_gpr(2, ctx.gpr[20] + 0u);
    ctx.set_gpr(3, ctx.gpr[21] + 0u);
    ctx.set_gpr(31, rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(32)));
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
L_0880C8D8:
    ctx.set_gpr(2, 16347u << 16u);
    ctx.set_gpr(2, ctx.gpr[2] | 65535u);
    ctx.set_gpr(2, static_cast<std::int32_t>(ctx.gpr[2]) < static_cast<std::int32_t>(ctx.gpr[16]) ? 1u : 0u);
    { const bool branch_taken = ctx.gpr[2] != 0u;
    ctx.set_gpr(2, 15903u << 16u);
      if (branch_taken) {
          goto L_0880CC78;
      }
      goto L_0880C8EC;
    }
L_0880C8EC:
    ctx.set_gpr(2, ctx.gpr[2] | 65535u);
    ctx.set_gpr(2, static_cast<std::int32_t>(ctx.gpr[2]) < static_cast<std::int32_t>(ctx.gpr[16]) ? 1u : 0u);
    { const bool branch_taken = ctx.gpr[2] == 0u;
    ctx.set_gpr(2, 2225u << 16u);
      if (branch_taken) {
          goto L_0880CC1C;
      }
      goto L_0880C8FC;
    }
L_0880C8FC:
    ctx.set_gpr(23, 0u + static_cast<std::uint32_t>(-1));
    goto L_0880C900;
L_0880C900:
    ctx.set_gpr(4, ctx.gpr[20] + 0u);
    ctx.set_gpr(5, ctx.gpr[21] + 0u);
    ctx.set_gpr(6, ctx.gpr[20] + 0u);
    ctx.set_gpr(31, 0x0880C914u);
    ctx.set_gpr(7, ctx.gpr[21] + 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0006_entry, 6u, 778u, 0x0881F44Cu>(ctx, &aot_mem) && ctx.pc == 0x0880C914u) goto L_0880C914;
    return;
L_0880C914:
    ctx.set_gpr(4, ctx.gpr[2] + 0u);
    ctx.set_gpr(5, ctx.gpr[3] + 0u);
    ctx.set_gpr(6, ctx.gpr[2] + 0u);
    ctx.set_gpr(7, ctx.gpr[3] + 0u);
    ctx.set_gpr(18, ctx.gpr[2] + 0u);
    ctx.set_gpr(31, 0x0880C930u);
    ctx.set_gpr(19, ctx.gpr[3] + 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0006_entry, 6u, 778u, 0x0881F44Cu>(ctx, &aot_mem) && ctx.pc == 0x0880C930u) goto L_0880C930;
    return;
L_0880C930:
    ctx.set_gpr(16, ctx.gpr[2] + 0u);
    ctx.set_gpr(2, 2225u << 16u);
    ctx.set_gpr(6, rt.memory().aot_load32(ctx.gpr[2] + static_cast<std::uint32_t>(-472)));
    ctx.set_gpr(7, rt.memory().aot_load32(ctx.gpr[2] + static_cast<std::uint32_t>(-468)));
    ctx.set_gpr(4, ctx.gpr[16] + 0u);
    ctx.set_gpr(5, ctx.gpr[3] + 0u);
    ctx.set_gpr(31, 0x0880C950u);
    ctx.set_gpr(17, ctx.gpr[3] + 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0006_entry, 6u, 778u, 0x0881F44Cu>(ctx, &aot_mem) && ctx.pc == 0x0880C950u) goto L_0880C950;
    return;
L_0880C950:
    ctx.set_gpr(6, 2225u << 16u);
    ctx.set_gpr(4, rt.memory().aot_load32(ctx.gpr[6] + static_cast<std::uint32_t>(-464)));
    ctx.set_gpr(5, rt.memory().aot_load32(ctx.gpr[6] + static_cast<std::uint32_t>(-460)));
    ctx.set_gpr(7, ctx.gpr[3] + 0u);
    ctx.set_gpr(31, 0x0880C968u);
    ctx.set_gpr(6, ctx.gpr[2] + 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0006_entry, 6u, 773u, 0x0881F3E0u>(ctx, &aot_mem) && ctx.pc == 0x0880C968u) goto L_0880C968;
    return;
L_0880C968:
    ctx.set_gpr(6, ctx.gpr[2] + 0u);
    ctx.set_gpr(4, ctx.gpr[16] + 0u);
    ctx.set_gpr(5, ctx.gpr[17] + 0u);
    ctx.set_gpr(31, 0x0880C97Cu);
    ctx.set_gpr(7, ctx.gpr[3] + 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0006_entry, 6u, 778u, 0x0881F44Cu>(ctx, &aot_mem) && ctx.pc == 0x0880C97Cu) goto L_0880C97C;
    return;
L_0880C97C:
    ctx.set_gpr(6, 2225u << 16u);
    ctx.set_gpr(4, rt.memory().aot_load32(ctx.gpr[6] + static_cast<std::uint32_t>(-456)));
    ctx.set_gpr(5, rt.memory().aot_load32(ctx.gpr[6] + static_cast<std::uint32_t>(-452)));
    ctx.set_gpr(7, ctx.gpr[3] + 0u);
    ctx.set_gpr(31, 0x0880C994u);
    ctx.set_gpr(6, ctx.gpr[2] + 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0006_entry, 6u, 773u, 0x0881F3E0u>(ctx, &aot_mem) && ctx.pc == 0x0880C994u) goto L_0880C994;
    return;
L_0880C994:
    ctx.set_gpr(6, ctx.gpr[2] + 0u);
    ctx.set_gpr(4, ctx.gpr[16] + 0u);
    ctx.set_gpr(5, ctx.gpr[17] + 0u);
    ctx.set_gpr(31, 0x0880C9A8u);
    ctx.set_gpr(7, ctx.gpr[3] + 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0006_entry, 6u, 778u, 0x0881F44Cu>(ctx, &aot_mem) && ctx.pc == 0x0880C9A8u) goto L_0880C9A8;
    return;
L_0880C9A8:
    ctx.set_gpr(6, 2225u << 16u);
    ctx.set_gpr(4, rt.memory().aot_load32(ctx.gpr[6] + static_cast<std::uint32_t>(-448)));
    ctx.set_gpr(5, rt.memory().aot_load32(ctx.gpr[6] + static_cast<std::uint32_t>(-444)));
    ctx.set_gpr(7, ctx.gpr[3] + 0u);
    ctx.set_gpr(31, 0x0880C9C0u);
    ctx.set_gpr(6, ctx.gpr[2] + 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0006_entry, 6u, 773u, 0x0881F3E0u>(ctx, &aot_mem) && ctx.pc == 0x0880C9C0u) goto L_0880C9C0;
    return;
L_0880C9C0:
    ctx.set_gpr(6, ctx.gpr[2] + 0u);
    ctx.set_gpr(4, ctx.gpr[16] + 0u);
    ctx.set_gpr(5, ctx.gpr[17] + 0u);
    ctx.set_gpr(31, 0x0880C9D4u);
    ctx.set_gpr(7, ctx.gpr[3] + 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0006_entry, 6u, 778u, 0x0881F44Cu>(ctx, &aot_mem) && ctx.pc == 0x0880C9D4u) goto L_0880C9D4;
    return;
L_0880C9D4:
    ctx.set_gpr(6, 2225u << 16u);
    ctx.set_gpr(4, rt.memory().aot_load32(ctx.gpr[6] + static_cast<std::uint32_t>(-440)));
    ctx.set_gpr(5, rt.memory().aot_load32(ctx.gpr[6] + static_cast<std::uint32_t>(-436)));
    ctx.set_gpr(7, ctx.gpr[3] + 0u);
    ctx.set_gpr(31, 0x0880C9ECu);
    ctx.set_gpr(6, ctx.gpr[2] + 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0006_entry, 6u, 773u, 0x0881F3E0u>(ctx, &aot_mem) && ctx.pc == 0x0880C9ECu) goto L_0880C9EC;
    return;
L_0880C9EC:
    ctx.set_gpr(6, ctx.gpr[2] + 0u);
    ctx.set_gpr(4, ctx.gpr[16] + 0u);
    ctx.set_gpr(5, ctx.gpr[17] + 0u);
    ctx.set_gpr(31, 0x0880CA00u);
    ctx.set_gpr(7, ctx.gpr[3] + 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0006_entry, 6u, 778u, 0x0881F44Cu>(ctx, &aot_mem) && ctx.pc == 0x0880CA00u) goto L_0880CA00;
    return;
L_0880CA00:
    ctx.set_gpr(6, 2225u << 16u);
    ctx.set_gpr(4, rt.memory().aot_load32(ctx.gpr[6] + static_cast<std::uint32_t>(-432)));
    ctx.set_gpr(5, rt.memory().aot_load32(ctx.gpr[6] + static_cast<std::uint32_t>(-428)));
    ctx.set_gpr(7, ctx.gpr[3] + 0u);
    ctx.set_gpr(31, 0x0880CA18u);
    ctx.set_gpr(6, ctx.gpr[2] + 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0006_entry, 6u, 773u, 0x0881F3E0u>(ctx, &aot_mem) && ctx.pc == 0x0880CA18u) goto L_0880CA18;
    return;
L_0880CA18:
    ctx.set_gpr(6, ctx.gpr[2] + 0u);
    ctx.set_gpr(4, ctx.gpr[18] + 0u);
    ctx.set_gpr(5, ctx.gpr[19] + 0u);
    ctx.set_gpr(31, 0x0880CA2Cu);
    ctx.set_gpr(7, ctx.gpr[3] + 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0006_entry, 6u, 778u, 0x0881F44Cu>(ctx, &aot_mem) && ctx.pc == 0x0880CA2Cu) goto L_0880CA2C;
    return;
L_0880CA2C:
    ctx.set_gpr(18, ctx.gpr[2] + 0u);
    ctx.set_gpr(2, 2225u << 16u);
    ctx.set_gpr(6, rt.memory().aot_load32(ctx.gpr[2] + static_cast<std::uint32_t>(-424)));
    ctx.set_gpr(7, rt.memory().aot_load32(ctx.gpr[2] + static_cast<std::uint32_t>(-420)));
    ctx.set_gpr(4, ctx.gpr[16] + 0u);
    ctx.set_gpr(5, ctx.gpr[17] + 0u);
    ctx.set_gpr(31, 0x0880CA4Cu);
    ctx.set_gpr(19, ctx.gpr[3] + 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0006_entry, 6u, 778u, 0x0881F44Cu>(ctx, &aot_mem) && ctx.pc == 0x0880CA4Cu) goto L_0880CA4C;
    return;
L_0880CA4C:
    ctx.set_gpr(6, 2225u << 16u);
    ctx.set_gpr(4, rt.memory().aot_load32(ctx.gpr[6] + static_cast<std::uint32_t>(-416)));
    ctx.set_gpr(5, rt.memory().aot_load32(ctx.gpr[6] + static_cast<std::uint32_t>(-412)));
    ctx.set_gpr(7, ctx.gpr[3] + 0u);
    ctx.set_gpr(31, 0x0880CA64u);
    ctx.set_gpr(6, ctx.gpr[2] + 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0006_entry, 6u, 773u, 0x0881F3E0u>(ctx, &aot_mem) && ctx.pc == 0x0880CA64u) goto L_0880CA64;
    return;
L_0880CA64:
    ctx.set_gpr(6, ctx.gpr[2] + 0u);
    ctx.set_gpr(4, ctx.gpr[16] + 0u);
    ctx.set_gpr(5, ctx.gpr[17] + 0u);
    ctx.set_gpr(31, 0x0880CA78u);
    ctx.set_gpr(7, ctx.gpr[3] + 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0006_entry, 6u, 778u, 0x0881F44Cu>(ctx, &aot_mem) && ctx.pc == 0x0880CA78u) goto L_0880CA78;
    return;
L_0880CA78:
    ctx.set_gpr(6, 2225u << 16u);
    ctx.set_gpr(4, rt.memory().aot_load32(ctx.gpr[6] + static_cast<std::uint32_t>(-408)));
    ctx.set_gpr(5, rt.memory().aot_load32(ctx.gpr[6] + static_cast<std::uint32_t>(-404)));
    ctx.set_gpr(7, ctx.gpr[3] + 0u);
    ctx.set_gpr(31, 0x0880CA90u);
    ctx.set_gpr(6, ctx.gpr[2] + 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0006_entry, 6u, 773u, 0x0881F3E0u>(ctx, &aot_mem) && ctx.pc == 0x0880CA90u) goto L_0880CA90;
    return;
L_0880CA90:
    ctx.set_gpr(6, ctx.gpr[2] + 0u);
    ctx.set_gpr(4, ctx.gpr[16] + 0u);
    ctx.set_gpr(5, ctx.gpr[17] + 0u);
    ctx.set_gpr(31, 0x0880CAA4u);
    ctx.set_gpr(7, ctx.gpr[3] + 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0006_entry, 6u, 778u, 0x0881F44Cu>(ctx, &aot_mem) && ctx.pc == 0x0880CAA4u) goto L_0880CAA4;
    return;
L_0880CAA4:
    ctx.set_gpr(6, 2225u << 16u);
    ctx.set_gpr(4, rt.memory().aot_load32(ctx.gpr[6] + static_cast<std::uint32_t>(-400)));
    ctx.set_gpr(5, rt.memory().aot_load32(ctx.gpr[6] + static_cast<std::uint32_t>(-396)));
    ctx.set_gpr(7, ctx.gpr[3] + 0u);
    ctx.set_gpr(31, 0x0880CABCu);
    ctx.set_gpr(6, ctx.gpr[2] + 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0006_entry, 6u, 773u, 0x0881F3E0u>(ctx, &aot_mem) && ctx.pc == 0x0880CABCu) goto L_0880CABC;
    return;
L_0880CABC:
    ctx.set_gpr(6, ctx.gpr[2] + 0u);
    ctx.set_gpr(4, ctx.gpr[16] + 0u);
    ctx.set_gpr(5, ctx.gpr[17] + 0u);
    ctx.set_gpr(31, 0x0880CAD0u);
    ctx.set_gpr(7, ctx.gpr[3] + 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0006_entry, 6u, 778u, 0x0881F44Cu>(ctx, &aot_mem) && ctx.pc == 0x0880CAD0u) goto L_0880CAD0;
    return;
L_0880CAD0:
    ctx.set_gpr(6, 2225u << 16u);
    ctx.set_gpr(4, rt.memory().aot_load32(ctx.gpr[6] + static_cast<std::uint32_t>(-392)));
    ctx.set_gpr(5, rt.memory().aot_load32(ctx.gpr[6] + static_cast<std::uint32_t>(-388)));
    ctx.set_gpr(7, ctx.gpr[3] + 0u);
    ctx.set_gpr(31, 0x0880CAE8u);
    ctx.set_gpr(6, ctx.gpr[2] + 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0006_entry, 6u, 773u, 0x0881F3E0u>(ctx, &aot_mem) && ctx.pc == 0x0880CAE8u) goto L_0880CAE8;
    return;
L_0880CAE8:
    ctx.set_gpr(6, ctx.gpr[2] + 0u);
    ctx.set_gpr(4, ctx.gpr[16] + 0u);
    ctx.set_gpr(5, ctx.gpr[17] + 0u);
    ctx.set_gpr(31, 0x0880CAFCu);
    ctx.set_gpr(7, ctx.gpr[3] + 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0006_entry, 6u, 778u, 0x0881F44Cu>(ctx, &aot_mem) && ctx.pc == 0x0880CAFCu) goto L_0880CAFC;
    return;
L_0880CAFC:
    { const bool branch_taken = static_cast<std::int32_t>(ctx.gpr[23]) < 0;
    ctx.set_gpr(4, ctx.gpr[18] + 0u);
      if (branch_taken) {
          goto L_0880CD1C;
      }
      goto L_0880CB04;
    }
L_0880CB04:
    ctx.set_gpr(5, ctx.gpr[19] + 0u);
    ctx.set_gpr(6, ctx.gpr[2] + 0u);
    ctx.set_gpr(31, 0x0880CB14u);
    ctx.set_gpr(7, ctx.gpr[3] + 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0006_entry, 6u, 773u, 0x0881F3E0u>(ctx, &aot_mem) && ctx.pc == 0x0880CB14u) goto L_0880CB14;
    return;
L_0880CB14:
    ctx.set_gpr(6, ctx.gpr[2] + 0u);
    ctx.set_gpr(4, ctx.gpr[20] + 0u);
    ctx.set_gpr(5, ctx.gpr[21] + 0u);
    ctx.set_gpr(31, 0x0880CB28u);
    ctx.set_gpr(7, ctx.gpr[3] + 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0006_entry, 6u, 778u, 0x0881F44Cu>(ctx, &aot_mem) && ctx.pc == 0x0880CB28u) goto L_0880CB28;
    return;
L_0880CB28:
    ctx.set_gpr(17, 2225u << 16u);
    ctx.set_gpr(4, 2225u << 16u);
    ctx.set_gpr(16, ctx.gpr[23] << 3u);
    ctx.set_gpr(4, ctx.gpr[4] + static_cast<std::uint32_t>(-584));
    ctx.set_gpr(17, ctx.gpr[17] + static_cast<std::uint32_t>(-552));
    ctx.set_gpr(17, ctx.gpr[16] + ctx.gpr[17]);
    ctx.set_gpr(16, ctx.gpr[16] + ctx.gpr[4]);
    ctx.set_gpr(6, rt.memory().aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(0)));
    ctx.set_gpr(7, rt.memory().aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(4)));
    ctx.set_gpr(4, ctx.gpr[2] + 0u);
    ctx.set_gpr(31, 0x0880CB58u);
    ctx.set_gpr(5, ctx.gpr[3] + 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0006_entry, 6u, 768u, 0x0881F368u>(ctx, &aot_mem) && ctx.pc == 0x0880CB58u) goto L_0880CB58;
    return;
L_0880CB58:
    ctx.set_gpr(4, ctx.gpr[2] + 0u);
    ctx.set_gpr(6, ctx.gpr[20] + 0u);
    ctx.set_gpr(7, ctx.gpr[21] + 0u);
    ctx.set_gpr(31, 0x0880CB6Cu);
    ctx.set_gpr(5, ctx.gpr[3] + 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0006_entry, 6u, 768u, 0x0881F368u>(ctx, &aot_mem) && ctx.pc == 0x0880CB6Cu) goto L_0880CB6C;
    return;
L_0880CB6C:
    ctx.set_gpr(4, rt.memory().aot_load32(ctx.gpr[17] + static_cast<std::uint32_t>(0)));
    ctx.set_gpr(5, rt.memory().aot_load32(ctx.gpr[17] + static_cast<std::uint32_t>(4)));
    ctx.set_gpr(6, ctx.gpr[2] + 0u);
    ctx.set_gpr(31, 0x0880CB80u);
    ctx.set_gpr(7, ctx.gpr[3] + 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0006_entry, 6u, 768u, 0x0881F368u>(ctx, &aot_mem) && ctx.pc == 0x0880CB80u) goto L_0880CB80;
    return;
L_0880CB80:
    ctx.set_gpr(20, ctx.gpr[2] + 0u);
    { const bool branch_taken = static_cast<std::int32_t>(ctx.gpr[22]) >= 0;
    ctx.set_gpr(21, ctx.gpr[3] + 0u);
      if (branch_taken) {
          goto L_0880C8A4;
      }
      goto L_0880CB8C;
    }
L_0880CB8C:
    ctx.set_gpr(4, 32768u << 16u);
    ctx.set_gpr(3, ctx.gpr[3] ^ ctx.gpr[4]);
    ctx.set_gpr(20, ctx.gpr[2] + 0u);
    ctx.set_gpr(21, ctx.gpr[3] + 0u);
    ctx.set_gpr(2, ctx.gpr[20] + 0u);
    ctx.set_gpr(3, ctx.gpr[21] + 0u);
    ctx.set_gpr(31, rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(32)));
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
L_0880CBD0:
    { const bool branch_taken = ctx.gpr[16] == ctx.gpr[7];
    // nop
      if (branch_taken) {
          goto L_0880CD0C;
      }
      goto L_0880CBD8;
    }
L_0880CBD8:
    { const bool branch_taken = static_cast<std::int32_t>(ctx.gpr[22]) <= 0;
    ctx.set_gpr(2, 2225u << 16u);
      if (branch_taken) {
          goto L_0880CD9C;
      }
      goto L_0880CBE0;
    }
L_0880CBE0:
    ctx.set_gpr(21, rt.memory().aot_load32(ctx.gpr[2] + static_cast<std::uint32_t>(-516)));
    ctx.set_gpr(20, rt.memory().aot_load32(ctx.gpr[2] + static_cast<std::uint32_t>(-520)));
    ctx.set_gpr(31, rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(32)));
    ctx.set_gpr(3, ctx.gpr[21] + 0u);
    ctx.set_gpr(2, ctx.gpr[20] + 0u);
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
L_0880CC1C:
    ctx.set_gpr(6, rt.memory().aot_load32(ctx.gpr[2] + static_cast<std::uint32_t>(-512)));
    ctx.set_gpr(31, 0x0880CC28u);
    ctx.set_gpr(7, rt.memory().aot_load32(ctx.gpr[2] + static_cast<std::uint32_t>(-508)));
    if (rt.invoke_chained_direct<&recomp_unit_0006_entry, 6u, 773u, 0x0881F3E0u>(ctx, &aot_mem) && ctx.pc == 0x0880CC28u) goto L_0880CC28;
    return;
L_0880CC28:
    ctx.set_gpr(4, 2225u << 16u);
    ctx.set_gpr(6, rt.memory().aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(-504)));
    ctx.set_gpr(7, rt.memory().aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(-500)));
    ctx.set_gpr(5, ctx.gpr[3] + 0u);
    ctx.set_gpr(31, 0x0880CC40u);
    ctx.set_gpr(4, ctx.gpr[2] + 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0006_entry, 6u, 913u, 0x0881FCCCu>(ctx, &aot_mem) && ctx.pc == 0x0880CC40u) goto L_0880CC40;
    return;
L_0880CC40:
    { const bool branch_taken = static_cast<std::int32_t>(ctx.gpr[2]) <= 0;
    ctx.set_gpr(2, ctx.gpr[20] + 0u);
      if (branch_taken) {
          goto L_0880C8FC;
      }
      goto L_0880CC48;
    }
L_0880CC48:
    ctx.set_gpr(3, ctx.gpr[21] + 0u);
    ctx.set_gpr(31, rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(32)));
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
L_0880CC78:
    ctx.set_gpr(31, 0x0880CC80u);
    // nop
    goto L_0880D210;
L_0880CC80:
    ctx.set_gpr(20, ctx.gpr[2] + 0u);
    ctx.set_gpr(2, 16370u << 16u);
    ctx.set_gpr(2, ctx.gpr[2] | 65535u);
    ctx.set_gpr(2, static_cast<std::int32_t>(ctx.gpr[2]) < static_cast<std::int32_t>(ctx.gpr[16]) ? 1u : 0u);
    { const bool branch_taken = ctx.gpr[2] != 0u;
    ctx.set_gpr(21, ctx.gpr[3] + 0u);
      if (branch_taken) {
          goto L_0880CD60;
      }
      goto L_0880CC98;
    }
L_0880CC98:
    ctx.set_gpr(2, 16357u << 16u);
    ctx.set_gpr(2, ctx.gpr[2] | 65535u);
    ctx.set_gpr(2, static_cast<std::int32_t>(ctx.gpr[2]) < static_cast<std::int32_t>(ctx.gpr[16]) ? 1u : 0u);
    { const bool branch_taken = ctx.gpr[2] == 0u;
    ctx.set_gpr(4, ctx.gpr[20] + 0u);
      if (branch_taken) {
          goto L_0880CDC0;
      }
      goto L_0880CCAC;
    }
L_0880CCAC:
    ctx.set_gpr(2, 2225u << 16u);
    ctx.set_gpr(18, rt.memory().aot_load32(ctx.gpr[2] + static_cast<std::uint32_t>(-504)));
    ctx.set_gpr(19, rt.memory().aot_load32(ctx.gpr[2] + static_cast<std::uint32_t>(-500)));
    ctx.set_gpr(5, ctx.gpr[3] + 0u);
    ctx.set_gpr(6, ctx.gpr[18] + 0u);
    ctx.set_gpr(31, 0x0880CCC8u);
    ctx.set_gpr(7, ctx.gpr[19] + 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0006_entry, 6u, 768u, 0x0881F368u>(ctx, &aot_mem) && ctx.pc == 0x0880CCC8u) goto L_0880CCC8;
    return;
L_0880CCC8:
    ctx.set_gpr(23, 0u + static_cast<std::uint32_t>(1));
    ctx.set_gpr(16, ctx.gpr[2] + 0u);
    ctx.set_gpr(17, ctx.gpr[3] + 0u);
    ctx.set_gpr(4, ctx.gpr[20] + 0u);
    ctx.set_gpr(5, ctx.gpr[21] + 0u);
    ctx.set_gpr(6, ctx.gpr[18] + 0u);
    ctx.set_gpr(7, ctx.gpr[19] + 0u);
    goto L_0880CCE4;
L_0880CCE4:
    ctx.set_gpr(31, 0x0880CCECu);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0006_entry, 6u, 773u, 0x0881F3E0u>(ctx, &aot_mem) && ctx.pc == 0x0880CCECu) goto L_0880CCEC;
    return;
L_0880CCEC:
    ctx.set_gpr(4, ctx.gpr[16] + 0u);
    ctx.set_gpr(5, ctx.gpr[17] + 0u);
    goto L_0880CCF4;
L_0880CCF4:
    ctx.set_gpr(6, ctx.gpr[2] + 0u);
    ctx.set_gpr(31, 0x0880CD00u);
    ctx.set_gpr(7, ctx.gpr[3] + 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0006_entry, 6u, 827u, 0x0881F7D8u>(ctx, &aot_mem) && ctx.pc == 0x0880CD00u) goto L_0880CD00;
    return;
L_0880CD00:
    ctx.set_gpr(20, ctx.gpr[2] + 0u);
    ctx.set_gpr(21, ctx.gpr[3] + 0u);
    goto L_0880C900;
L_0880CD0C:
    { const bool branch_taken = ctx.gpr[4] == 0u;
    ctx.set_gpr(6, ctx.gpr[20] + 0u);
      if (branch_taken) {
          goto L_0880CBD8;
      }
      goto L_0880CD14;
    }
L_0880CD14:
    // nop
    goto L_0880C894;
L_0880CD1C:
    ctx.set_gpr(5, ctx.gpr[19] + 0u);
    ctx.set_gpr(6, ctx.gpr[2] + 0u);
    ctx.set_gpr(31, 0x0880CD2Cu);
    ctx.set_gpr(7, ctx.gpr[3] + 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0006_entry, 6u, 773u, 0x0881F3E0u>(ctx, &aot_mem) && ctx.pc == 0x0880CD2Cu) goto L_0880CD2C;
    return;
L_0880CD2C:
    ctx.set_gpr(6, ctx.gpr[2] + 0u);
    ctx.set_gpr(4, ctx.gpr[20] + 0u);
    ctx.set_gpr(5, ctx.gpr[21] + 0u);
    ctx.set_gpr(31, 0x0880CD40u);
    ctx.set_gpr(7, ctx.gpr[3] + 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0006_entry, 6u, 778u, 0x0881F44Cu>(ctx, &aot_mem) && ctx.pc == 0x0880CD40u) goto L_0880CD40;
    return;
L_0880CD40:
    ctx.set_gpr(6, ctx.gpr[2] + 0u);
    ctx.set_gpr(4, ctx.gpr[20] + 0u);
    ctx.set_gpr(5, ctx.gpr[21] + 0u);
    ctx.set_gpr(31, 0x0880CD54u);
    ctx.set_gpr(7, ctx.gpr[3] + 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0006_entry, 6u, 768u, 0x0881F368u>(ctx, &aot_mem) && ctx.pc == 0x0880CD54u) goto L_0880CD54;
    return;
L_0880CD54:
    ctx.set_gpr(20, ctx.gpr[2] + 0u);
    ctx.set_gpr(21, ctx.gpr[3] + 0u);
    goto L_0880C8A4;
L_0880CD60:
    ctx.set_gpr(2, 16387u << 16u);
    ctx.set_gpr(2, ctx.gpr[2] | 32767u);
    ctx.set_gpr(2, static_cast<std::int32_t>(ctx.gpr[2]) < static_cast<std::int32_t>(ctx.gpr[16]) ? 1u : 0u);
    { const bool branch_taken = ctx.gpr[2] == 0u;
    ctx.set_gpr(2, 2225u << 16u);
      if (branch_taken) {
          goto L_0880CE0C;
      }
      goto L_0880CD74;
    }
L_0880CD74:
    ctx.set_gpr(2, 2225u << 16u);
    ctx.set_gpr(4, rt.memory().aot_load32(ctx.gpr[2] + static_cast<std::uint32_t>(-480)));
    ctx.set_gpr(5, rt.memory().aot_load32(ctx.gpr[2] + static_cast<std::uint32_t>(-476)));
    ctx.set_gpr(6, ctx.gpr[20] + 0u);
    ctx.set_gpr(31, 0x0880CD8Cu);
    ctx.set_gpr(7, ctx.gpr[3] + 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0006_entry, 6u, 827u, 0x0881F7D8u>(ctx, &aot_mem) && ctx.pc == 0x0880CD8Cu) goto L_0880CD8C;
    return;
L_0880CD8C:
    ctx.set_gpr(23, 0u + static_cast<std::uint32_t>(3));
    ctx.set_gpr(20, ctx.gpr[2] + 0u);
    ctx.set_gpr(21, ctx.gpr[3] + 0u);
    goto L_0880C900;
L_0880CD9C:
    ctx.set_gpr(4, 21572u << 16u);
    ctx.set_gpr(2, ctx.gpr[4] | 11544u);
    ctx.set_gpr(4, 16377u << 16u);
    ctx.set_gpr(5, 32768u << 16u);
    ctx.set_gpr(4, ctx.gpr[4] | 8699u);
    ctx.set_gpr(3, ctx.gpr[5] ^ ctx.gpr[4]);
    ctx.set_gpr(20, ctx.gpr[2] + 0u);
    ctx.set_gpr(21, ctx.gpr[3] + 0u);
    goto L_0880C8A4;
L_0880CDC0:
    ctx.set_gpr(5, ctx.gpr[3] + 0u);
    ctx.set_gpr(6, ctx.gpr[20] + 0u);
    ctx.set_gpr(31, 0x0880CDD0u);
    ctx.set_gpr(7, ctx.gpr[3] + 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0006_entry, 6u, 773u, 0x0881F3E0u>(ctx, &aot_mem) && ctx.pc == 0x0880CDD0u) goto L_0880CDD0;
    return;
L_0880CDD0:
    ctx.set_gpr(4, 2225u << 16u);
    ctx.set_gpr(6, rt.memory().aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(-504)));
    ctx.set_gpr(7, rt.memory().aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(-500)));
    ctx.set_gpr(5, ctx.gpr[3] + 0u);
    ctx.set_gpr(31, 0x0880CDE8u);
    ctx.set_gpr(4, ctx.gpr[2] + 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0006_entry, 6u, 768u, 0x0881F368u>(ctx, &aot_mem) && ctx.pc == 0x0880CDE8u) goto L_0880CDE8;
    return;
L_0880CDE8:
    ctx.set_gpr(16, ctx.gpr[2] + 0u);
    ctx.set_gpr(2, 2225u << 16u);
    ctx.set_gpr(6, rt.memory().aot_load32(ctx.gpr[2] + static_cast<std::uint32_t>(-496)));
    ctx.set_gpr(7, rt.memory().aot_load32(ctx.gpr[2] + static_cast<std::uint32_t>(-492)));
    ctx.set_gpr(23, 0u + 0u);
    ctx.set_gpr(17, ctx.gpr[3] + 0u);
    ctx.set_gpr(4, ctx.gpr[20] + 0u);
    ctx.set_gpr(5, ctx.gpr[21] + 0u);
    goto L_0880CCE4;
L_0880CE0C:
    ctx.set_gpr(16, rt.memory().aot_load32(ctx.gpr[2] + static_cast<std::uint32_t>(-488)));
    ctx.set_gpr(17, rt.memory().aot_load32(ctx.gpr[2] + static_cast<std::uint32_t>(-484)));
    ctx.set_gpr(4, ctx.gpr[20] + 0u);
    ctx.set_gpr(5, ctx.gpr[3] + 0u);
    ctx.set_gpr(6, ctx.gpr[16] + 0u);
    ctx.set_gpr(31, 0x0880CE28u);
    ctx.set_gpr(7, ctx.gpr[17] + 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0006_entry, 6u, 768u, 0x0881F368u>(ctx, &aot_mem) && ctx.pc == 0x0880CE28u) goto L_0880CE28;
    return;
L_0880CE28:
    ctx.set_gpr(4, ctx.gpr[20] + 0u);
    ctx.set_gpr(5, ctx.gpr[21] + 0u);
    ctx.set_gpr(6, ctx.gpr[16] + 0u);
    ctx.set_gpr(7, ctx.gpr[17] + 0u);
    ctx.set_gpr(18, ctx.gpr[2] + 0u);
    ctx.set_gpr(31, 0x0880CE44u);
    ctx.set_gpr(19, ctx.gpr[3] + 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0006_entry, 6u, 778u, 0x0881F44Cu>(ctx, &aot_mem) && ctx.pc == 0x0880CE44u) goto L_0880CE44;
    return;
L_0880CE44:
    ctx.set_gpr(4, 2225u << 16u);
    ctx.set_gpr(6, rt.memory().aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(-504)));
    ctx.set_gpr(7, rt.memory().aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(-500)));
    ctx.set_gpr(5, ctx.gpr[3] + 0u);
    ctx.set_gpr(31, 0x0880CE5Cu);
    ctx.set_gpr(4, ctx.gpr[2] + 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0006_entry, 6u, 773u, 0x0881F3E0u>(ctx, &aot_mem) && ctx.pc == 0x0880CE5Cu) goto L_0880CE5C;
    return;
L_0880CE5C:
    ctx.set_gpr(23, 0u + static_cast<std::uint32_t>(2));
    ctx.set_gpr(4, ctx.gpr[18] + 0u);
    ctx.set_gpr(5, ctx.gpr[19] + 0u);
    goto L_0880CCF4;
L_0880CE6C:
    ctx.set_gpr(29, ctx.gpr[29] + static_cast<std::uint32_t>(-48));
    ctx.set_gpr(3, (ctx.gpr[5] >> 20u) & 0x000007FFu);
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(8), ctx.gpr[18]);
    ctx.set_gpr(18, ctx.gpr[3] + static_cast<std::uint32_t>(-1023));
    ctx.set_gpr(2, static_cast<std::int32_t>(ctx.gpr[18]) < 20 ? 1u : 0u);
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(20), ctx.gpr[21]);
    ctx.set_gpr(6, ctx.gpr[4] + 0u);
    ctx.set_gpr(7, ctx.gpr[5] + 0u);
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(4), ctx.gpr[17]);
    ctx.set_gpr(21, ctx.gpr[5] + 0u);
    ctx.set_gpr(17, ctx.gpr[5] + 0u);
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(0), ctx.gpr[16]);
    ctx.set_gpr(16, ctx.gpr[4] + 0u);
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(36), ctx.gpr[31]);
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(32), ctx.gpr[30]);
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(28), ctx.gpr[23]);
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(24), ctx.gpr[22]);
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(16), ctx.gpr[20]);
    { const bool branch_taken = ctx.gpr[2] == 0u;
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(12), ctx.gpr[19]);
      if (branch_taken) {
          goto L_0880CF68;
      }
      goto L_0880CEBC;
    }
L_0880CEBC:
    { const bool branch_taken = static_cast<std::int32_t>(ctx.gpr[18]) < 0;
    ctx.set_gpr(2, 15u << 16u);
      if (branch_taken) {
          goto L_0880D050;
      }
      goto L_0880CEC4;
    }
L_0880CEC4:
    ctx.set_gpr(2, ctx.gpr[2] | 65535u);
    ctx.set_gpr(21, static_cast<std::uint32_t>(static_cast<std::int32_t>(ctx.gpr[2]) >> (ctx.gpr[18] & 31u)));
    ctx.set_gpr(2, ctx.gpr[21] & ctx.gpr[5]);
    ctx.set_gpr(2, ctx.gpr[2] | ctx.gpr[4]);
    ctx.set_gpr(19, ctx.gpr[5] + 0u);
    { const bool branch_taken = ctx.gpr[2] == 0u;
    ctx.set_gpr(20, ctx.gpr[4] + 0u);
      if (branch_taken) {
          goto L_0880CF30;
      }
      goto L_0880CEE0;
    }
L_0880CEE0:
    ctx.set_gpr(2, 2225u << 16u);
    ctx.set_gpr(6, rt.memory().aot_load32(ctx.gpr[2] + static_cast<std::uint32_t>(-384)));
    ctx.set_gpr(31, 0x0880CEF0u);
    ctx.set_gpr(7, rt.memory().aot_load32(ctx.gpr[2] + static_cast<std::uint32_t>(-380)));
    if (rt.invoke_chained_direct<&recomp_unit_0006_entry, 6u, 773u, 0x0881F3E0u>(ctx, &aot_mem) && ctx.pc == 0x0880CEF0u) goto L_0880CEF0;
    return;
L_0880CEF0:
    ctx.set_gpr(4, ctx.gpr[2] + 0u);
    ctx.set_gpr(5, ctx.gpr[3] + 0u);
    ctx.set_gpr(6, 0u + 0u);
    ctx.set_gpr(31, 0x0880CF04u);
    ctx.set_gpr(7, 0u + 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0006_entry, 6u, 913u, 0x0881FCCCu>(ctx, &aot_mem) && ctx.pc == 0x0880CF04u) goto L_0880CF04;
    return;
L_0880CF04:
    { const bool branch_taken = static_cast<std::int32_t>(ctx.gpr[2]) <= 0;
    ctx.set_gpr(6, ctx.gpr[20] + 0u);
      if (branch_taken) {
          goto L_0880CF2C;
      }
      goto L_0880CF0C;
    }
L_0880CF0C:
    { const bool branch_taken = static_cast<std::int32_t>(ctx.gpr[17]) <= 0;
    ctx.set_gpr(2, 16u << 16u);
      if (branch_taken) {
          goto L_0880CF1C;
      }
      goto L_0880CF14;
    }
L_0880CF14:
    ctx.set_gpr(2, static_cast<std::uint32_t>(static_cast<std::int32_t>(ctx.gpr[2]) >> (ctx.gpr[18] & 31u)));
    ctx.set_gpr(19, ctx.gpr[17] + ctx.gpr[2]);
    goto L_0880CF1C;
L_0880CF1C:
    ctx.set_gpr(2, ~(0u | ctx.gpr[21]));
    ctx.set_gpr(19, ctx.gpr[19] & ctx.gpr[2]);
    ctx.set_gpr(20, 0u + 0u);
    goto L_0880CF28;
L_0880CF28:
    ctx.set_gpr(6, ctx.gpr[20] + 0u);
    goto L_0880CF2C;
L_0880CF2C:
    ctx.set_gpr(7, ctx.gpr[19] + 0u);
    goto L_0880CF30;
L_0880CF30:
    ctx.set_gpr(31, rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(36)));
    goto L_0880CF34;
L_0880CF34:
    ctx.set_gpr(30, rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(32)));
    ctx.set_gpr(23, rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(28)));
    ctx.set_gpr(22, rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(24)));
    ctx.set_gpr(21, rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(20)));
    ctx.set_gpr(20, rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(16)));
    ctx.set_gpr(19, rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(12)));
    ctx.set_gpr(18, rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(8)));
    ctx.set_gpr(17, rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(4)));
    ctx.set_gpr(16, rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(0)));
    ctx.set_gpr(2, ctx.gpr[6] + 0u);
    ctx.set_gpr(3, ctx.gpr[7] + 0u);
    jump_target = ctx.gpr[31];
    ctx.set_gpr(29, ctx.gpr[29] + static_cast<std::uint32_t>(48));
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_0880CF68:
    ctx.set_gpr(2, static_cast<std::int32_t>(ctx.gpr[18]) < 52 ? 1u : 0u);
    { const bool branch_taken = ctx.gpr[2] == 0u;
    ctx.set_gpr(2, 0u + static_cast<std::uint32_t>(1024));
      if (branch_taken) {
          goto L_0880D000;
      }
      goto L_0880CF74;
    }
L_0880CF74:
    ctx.set_gpr(2, ctx.gpr[3] + static_cast<std::uint32_t>(-1043));
    ctx.set_gpr(3, 0u + static_cast<std::uint32_t>(-1));
    ctx.set_gpr(30, ctx.gpr[3] >> (ctx.gpr[2] & 31u));
    ctx.set_gpr(2, ctx.gpr[30] & ctx.gpr[4]);
    { const bool branch_taken = ctx.gpr[2] == 0u;
    ctx.set_gpr(20, ctx.gpr[4] + 0u);
      if (branch_taken) {
          goto L_0880CF30;
      }
      goto L_0880CF8C;
    }
L_0880CF8C:
    ctx.set_gpr(2, 2225u << 16u);
    ctx.set_gpr(6, rt.memory().aot_load32(ctx.gpr[2] + static_cast<std::uint32_t>(-384)));
    ctx.set_gpr(7, rt.memory().aot_load32(ctx.gpr[2] + static_cast<std::uint32_t>(-380)));
    ctx.set_gpr(31, 0x0880CFA0u);
    ctx.set_gpr(19, ctx.gpr[5] + 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0006_entry, 6u, 773u, 0x0881F3E0u>(ctx, &aot_mem) && ctx.pc == 0x0880CFA0u) goto L_0880CFA0;
    return;
L_0880CFA0:
    ctx.set_gpr(4, ctx.gpr[2] + 0u);
    ctx.set_gpr(5, ctx.gpr[3] + 0u);
    ctx.set_gpr(6, 0u + 0u);
    ctx.set_gpr(31, 0x0880CFB4u);
    ctx.set_gpr(7, 0u + 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0006_entry, 6u, 913u, 0x0881FCCCu>(ctx, &aot_mem) && ctx.pc == 0x0880CFB4u) goto L_0880CFB4;
    return;
L_0880CFB4:
    { const bool branch_taken = static_cast<std::int32_t>(ctx.gpr[2]) <= 0;
    ctx.set_gpr(6, ctx.gpr[20] + 0u);
      if (branch_taken) {
          goto L_0880CF2C;
      }
      goto L_0880CFBC;
    }
L_0880CFBC:
    { const bool branch_taken = static_cast<std::int32_t>(ctx.gpr[17]) <= 0;
    ctx.set_gpr(2, 0u + static_cast<std::uint32_t>(20));
      if (branch_taken) {
          goto L_0880CFE8;
      }
      goto L_0880CFC4;
    }
L_0880CFC4:
    { const bool branch_taken = ctx.gpr[18] == ctx.gpr[2];
    ctx.set_gpr(2, 0u + static_cast<std::uint32_t>(52));
      if (branch_taken) {
          goto L_0880D0B0;
      }
      goto L_0880CFCC;
    }
L_0880CFCC:
    ctx.set_gpr(2, ctx.gpr[2] - ctx.gpr[18]);
    ctx.set_gpr(3, 0u + static_cast<std::uint32_t>(1));
    ctx.set_gpr(3, ctx.gpr[3] << (ctx.gpr[2] & 31u));
    ctx.set_gpr(3, ctx.gpr[16] + ctx.gpr[3]);
    ctx.set_gpr(2, ctx.gpr[3] < ctx.gpr[16] ? 1u : 0u);
    ctx.set_gpr(21, ctx.gpr[17] + ctx.gpr[2]);
    ctx.set_gpr(20, ctx.gpr[3] + 0u);
    goto L_0880CFE8;
L_0880CFE8:
    ctx.set_gpr(2, ~(0u | ctx.gpr[30]));
    ctx.set_gpr(20, ctx.gpr[20] & ctx.gpr[2]);
    ctx.set_gpr(19, ctx.gpr[21] + 0u);
    goto L_0880CFF4;
L_0880CFF4:
    ctx.set_gpr(6, ctx.gpr[20] + 0u);
    ctx.set_gpr(7, ctx.gpr[19] + 0u);
    goto L_0880CF30;
L_0880D000:
    { const bool branch_taken = ctx.gpr[18] != ctx.gpr[2];
    ctx.set_gpr(31, rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(36)));
      if (branch_taken) {
          goto L_0880CF34;
      }
      goto L_0880D008;
    }
L_0880D008:
    ctx.set_gpr(31, 0x0880D010u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0006_entry, 6u, 773u, 0x0881F3E0u>(ctx, &aot_mem) && ctx.pc == 0x0880D010u) goto L_0880D010;
    return;
L_0880D010:
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
    ctx.set_gpr(6, ctx.gpr[2] + 0u);
    ctx.set_gpr(7, ctx.gpr[3] + 0u);
    ctx.set_gpr(2, ctx.gpr[6] + 0u);
    ctx.set_gpr(3, ctx.gpr[7] + 0u);
    jump_target = ctx.gpr[31];
    ctx.set_gpr(29, ctx.gpr[29] + static_cast<std::uint32_t>(48));
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_0880D050:
    ctx.set_gpr(2, 2225u << 16u);
    ctx.set_gpr(6, rt.memory().aot_load32(ctx.gpr[2] + static_cast<std::uint32_t>(-384)));
    ctx.set_gpr(7, rt.memory().aot_load32(ctx.gpr[2] + static_cast<std::uint32_t>(-380)));
    ctx.set_gpr(19, ctx.gpr[5] + 0u);
    ctx.set_gpr(31, 0x0880D068u);
    ctx.set_gpr(20, ctx.gpr[4] + 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0006_entry, 6u, 773u, 0x0881F3E0u>(ctx, &aot_mem) && ctx.pc == 0x0880D068u) goto L_0880D068;
    return;
L_0880D068:
    ctx.set_gpr(4, ctx.gpr[2] + 0u);
    ctx.set_gpr(5, ctx.gpr[3] + 0u);
    ctx.set_gpr(6, 0u + 0u);
    ctx.set_gpr(31, 0x0880D07Cu);
    ctx.set_gpr(7, 0u + 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0006_entry, 6u, 913u, 0x0881FCCCu>(ctx, &aot_mem) && ctx.pc == 0x0880D07Cu) goto L_0880D07C;
    return;
L_0880D07C:
    { const bool branch_taken = static_cast<std::int32_t>(ctx.gpr[2]) <= 0;
    ctx.set_gpr(6, ctx.gpr[20] + 0u);
      if (branch_taken) {
          goto L_0880CF2C;
      }
      goto L_0880D084;
    }
L_0880D084:
    ctx.set_gpr(19, 32768u << 16u);
    { const bool branch_taken = static_cast<std::int32_t>(ctx.gpr[17]) < 0;
    ctx.set_gpr(20, 0u + 0u);
      if (branch_taken) {
          goto L_0880CF28;
      }
      goto L_0880D090;
    }
L_0880D090:
    ctx.set_gpr(2, ctx.gpr[17] | ctx.gpr[16]);
    { const bool branch_taken = ctx.gpr[2] != 0u;
    ctx.set_gpr(19, 16368u << 16u);
      if (branch_taken) {
          goto L_0880CF28;
      }
      goto L_0880D09C;
    }
L_0880D09C:
    ctx.set_gpr(20, ctx.gpr[16] + 0u);
    ctx.set_gpr(19, ctx.gpr[17] + 0u);
    ctx.set_gpr(6, ctx.gpr[20] + 0u);
    ctx.set_gpr(7, ctx.gpr[19] + 0u);
    goto L_0880CF30;
L_0880D0B0:
    ctx.set_gpr(21, ctx.gpr[17] + static_cast<std::uint32_t>(1));
    ctx.set_gpr(2, ~(0u | ctx.gpr[30]));
    ctx.set_gpr(20, ctx.gpr[20] & ctx.gpr[2]);
    ctx.set_gpr(19, ctx.gpr[21] + 0u);
    goto L_0880CFF4;
L_0880D0C4:
    ctx.set_gpr(8, ctx.gpr[4] + 0u);
    ctx.set_gpr(4, ctx.gpr[5] + 0u);
    ctx.set_gpr(4, (ctx.gpr[4] & ~0x80000000u) | ((0u & 0x00000001u) << 31u));
    ctx.set_gpr(7, (ctx.gpr[7] & ~0x7FFFFFFFu) | ((0u & 0x7FFFFFFFu) << 0u));
    ctx.set_gpr(9, ctx.gpr[4] | ctx.gpr[7]);
    ctx.set_gpr(2, ctx.gpr[8] + 0u);
    jump_target = ctx.gpr[31];
    ctx.set_gpr(3, ctx.gpr[9] + 0u);
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_0880D0E4:
    ctx.set_gpr(3, ctx.gpr[5] + 0u);
    ctx.set_gpr(6, 16361u << 16u);
    ctx.set_gpr(3, (ctx.gpr[3] & ~0x80000000u) | ((0u & 0x00000001u) << 31u));
    ctx.set_gpr(6, ctx.gpr[6] | 8699u);
    ctx.set_gpr(29, ctx.gpr[29] + static_cast<std::uint32_t>(-32));
    ctx.set_gpr(6, static_cast<std::int32_t>(ctx.gpr[6]) < static_cast<std::int32_t>(ctx.gpr[3]) ? 1u : 0u);
    { const bool branch_taken = ctx.gpr[6] == 0u;
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(16), ctx.gpr[31]);
      if (branch_taken) {
          goto L_0880D180;
      }
      goto L_0880D104;
    }
L_0880D104:
    ctx.set_gpr(2, 32751u << 16u);
    ctx.set_gpr(2, ctx.gpr[2] | 65535u);
    ctx.set_gpr(2, static_cast<std::int32_t>(ctx.gpr[2]) < static_cast<std::int32_t>(ctx.gpr[3]) ? 1u : 0u);
    { const bool branch_taken = ctx.gpr[2] == 0u;
    ctx.set_gpr(6, ctx.gpr[4] + 0u);
      if (branch_taken) {
          goto L_0880D13C;
      }
      goto L_0880D118;
    }
L_0880D118:
    ctx.set_gpr(31, 0x0880D120u);
    ctx.set_gpr(7, ctx.gpr[5] + 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0006_entry, 6u, 768u, 0x0881F368u>(ctx, &aot_mem) && ctx.pc == 0x0880D120u) goto L_0880D120;
    return;
L_0880D120:
    ctx.set_gpr(6, ctx.gpr[2] + 0u);
    ctx.set_gpr(7, ctx.gpr[3] + 0u);
    goto L_0880D128;
L_0880D128:
    ctx.set_gpr(31, rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(16)));
    ctx.set_gpr(2, ctx.gpr[6] + 0u);
    ctx.set_gpr(3, ctx.gpr[7] + 0u);
    jump_target = ctx.gpr[31];
    ctx.set_gpr(29, ctx.gpr[29] + static_cast<std::uint32_t>(32));
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_0880D13C:
    ctx.set_gpr(31, 0x0880D144u);
    ctx.set_gpr(6, ctx.gpr[29] + 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0001_entry, 1u, 145u, 0x08808CA4u>(ctx, &aot_mem) && ctx.pc == 0x0880D144u) goto L_0880D144;
    return;
L_0880D144:
    ctx.set_gpr(3, ctx.gpr[2] & 3u);
    ctx.set_gpr(2, 0u + static_cast<std::uint32_t>(1));
    { const bool branch_taken = ctx.gpr[3] == ctx.gpr[2];
    ctx.set_gpr(2, 0u + static_cast<std::uint32_t>(2));
      if (branch_taken) {
          goto L_0880D1A8;
      }
      goto L_0880D154;
    }
L_0880D154:
    { const bool branch_taken = ctx.gpr[3] == ctx.gpr[2];
    ctx.set_gpr(4, rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(0)));
      if (branch_taken) {
          goto L_0880D1F0;
      }
      goto L_0880D15C;
    }
L_0880D15C:
    { const bool branch_taken = ctx.gpr[3] != 0u;
    ctx.set_gpr(6, rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(8)));
      if (branch_taken) {
          goto L_0880D1D0;
      }
      goto L_0880D164;
    }
L_0880D164:
    ctx.set_gpr(7, rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(12)));
    ctx.set_gpr(4, rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(0)));
    ctx.set_gpr(31, 0x0880D174u);
    ctx.set_gpr(5, rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(4)));
    if (rt.invoke_chained_direct<&recomp_unit_0001_entry, 1u, 443u, 0x0880A728u>(ctx, &aot_mem) && ctx.pc == 0x0880D174u) goto L_0880D174;
    return;
L_0880D174:
    ctx.set_gpr(6, ctx.gpr[2] + 0u);
    ctx.set_gpr(7, ctx.gpr[3] + 0u);
    goto L_0880D128;
L_0880D180:
    ctx.set_gpr(6, 0u + 0u);
    ctx.set_gpr(31, 0x0880D18Cu);
    ctx.set_gpr(7, 0u + 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0001_entry, 1u, 443u, 0x0880A728u>(ctx, &aot_mem) && ctx.pc == 0x0880D18Cu) goto L_0880D18C;
    return;
L_0880D18C:
    ctx.set_gpr(31, rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(16)));
    ctx.set_gpr(6, ctx.gpr[2] + 0u);
    ctx.set_gpr(7, ctx.gpr[3] + 0u);
    ctx.set_gpr(2, ctx.gpr[6] + 0u);
    ctx.set_gpr(3, ctx.gpr[7] + 0u);
    jump_target = ctx.gpr[31];
    ctx.set_gpr(29, ctx.gpr[29] + static_cast<std::uint32_t>(32));
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_0880D1A8:
    ctx.set_gpr(4, rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(0)));
    ctx.set_gpr(6, rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(8)));
    ctx.set_gpr(7, rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(12)));
    ctx.set_gpr(5, rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(4)));
    ctx.set_gpr(31, 0x0880D1C0u);
    ctx.set_gpr(8, 0u + static_cast<std::uint32_t>(1));
    if (rt.invoke_chained_direct<&recomp_unit_0001_entry, 1u, 643u, 0x0880B854u>(ctx, &aot_mem) && ctx.pc == 0x0880D1C0u) goto L_0880D1C0;
    return;
L_0880D1C0:
    ctx.set_gpr(4, 32768u << 16u);
    ctx.set_gpr(6, ctx.gpr[2] + 0u);
    ctx.set_gpr(7, ctx.gpr[3] ^ ctx.gpr[4]);
    goto L_0880D128;
L_0880D1D0:
    ctx.set_gpr(7, rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(12)));
    ctx.set_gpr(4, rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(0)));
    ctx.set_gpr(5, rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(4)));
    ctx.set_gpr(31, 0x0880D1E4u);
    ctx.set_gpr(8, 0u + static_cast<std::uint32_t>(1));
    if (rt.invoke_chained_direct<&recomp_unit_0001_entry, 1u, 643u, 0x0880B854u>(ctx, &aot_mem) && ctx.pc == 0x0880D1E4u) goto L_0880D1E4;
    return;
L_0880D1E4:
    ctx.set_gpr(6, ctx.gpr[2] + 0u);
    ctx.set_gpr(7, ctx.gpr[3] + 0u);
    goto L_0880D128;
L_0880D1F0:
    ctx.set_gpr(6, rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(8)));
    ctx.set_gpr(7, rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(12)));
    ctx.set_gpr(31, 0x0880D200u);
    ctx.set_gpr(5, rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(4)));
    if (rt.invoke_chained_direct<&recomp_unit_0001_entry, 1u, 443u, 0x0880A728u>(ctx, &aot_mem) && ctx.pc == 0x0880D200u) goto L_0880D200;
    return;
L_0880D200:
    ctx.set_gpr(4, 32768u << 16u);
    ctx.set_gpr(6, ctx.gpr[2] + 0u);
    ctx.set_gpr(7, ctx.gpr[3] ^ ctx.gpr[4]);
    goto L_0880D128;
L_0880D210:
    ctx.set_gpr(7, ctx.gpr[5] + 0u);
    ctx.set_gpr(7, (ctx.gpr[7] & ~0x80000000u) | ((0u & 0x00000001u) << 31u));
    ctx.set_gpr(2, ctx.gpr[4] + 0u);
    jump_target = ctx.gpr[31];
    ctx.set_gpr(3, ctx.gpr[7] + 0u);
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_0880D224:
    ctx.set_gpr(2, 32784u << 16u);
    ctx.set_gpr(5, (ctx.gpr[5] & ~0x80000000u) | ((0u & 0x00000001u) << 31u));
    ctx.set_gpr(5, ctx.gpr[5] + ctx.gpr[2]);
    jump_target = ctx.gpr[31];
    ctx.set_gpr(2, ctx.gpr[5] >> 31u);
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_0880D238:
    ctx.set_gpr(29, ctx.gpr[29] + static_cast<std::uint32_t>(-48));
    ctx.set_gpr(3, (ctx.gpr[5] >> 20u) & 0x000007FFu);
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(8), ctx.gpr[18]);
    ctx.set_gpr(18, ctx.gpr[3] + static_cast<std::uint32_t>(-1023));
    ctx.set_gpr(2, static_cast<std::int32_t>(ctx.gpr[18]) < 20 ? 1u : 0u);
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(20), ctx.gpr[21]);
    ctx.set_gpr(6, ctx.gpr[4] + 0u);
    ctx.set_gpr(7, ctx.gpr[5] + 0u);
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(4), ctx.gpr[17]);
    ctx.set_gpr(21, ctx.gpr[5] + 0u);
    ctx.set_gpr(17, ctx.gpr[5] + 0u);
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(0), ctx.gpr[16]);
    ctx.set_gpr(16, ctx.gpr[4] + 0u);
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(36), ctx.gpr[31]);
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(32), ctx.gpr[30]);
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(28), ctx.gpr[23]);
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(24), ctx.gpr[22]);
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(16), ctx.gpr[20]);
    { const bool branch_taken = ctx.gpr[2] == 0u;
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(12), ctx.gpr[19]);
      if (branch_taken) {
          goto L_0880D328;
      }
      goto L_0880D288;
    }
L_0880D288:
    { const bool branch_taken = static_cast<std::int32_t>(ctx.gpr[18]) < 0;
    ctx.set_gpr(2, 15u << 16u);
      if (branch_taken) {
          goto L_0880D3E0;
      }
      goto L_0880D290;
    }
L_0880D290:
    ctx.set_gpr(2, ctx.gpr[2] | 65535u);
    ctx.set_gpr(21, static_cast<std::uint32_t>(static_cast<std::int32_t>(ctx.gpr[2]) >> (ctx.gpr[18] & 31u)));
    ctx.set_gpr(2, ctx.gpr[21] & ctx.gpr[5]);
    ctx.set_gpr(2, ctx.gpr[2] | ctx.gpr[4]);
    ctx.set_gpr(19, ctx.gpr[5] + 0u);
    { const bool branch_taken = ctx.gpr[2] == 0u;
    ctx.set_gpr(20, ctx.gpr[4] + 0u);
      if (branch_taken) {
          goto L_0880D2F0;
      }
      goto L_0880D2AC;
    }
L_0880D2AC:
    ctx.set_gpr(2, 2225u << 16u);
    ctx.set_gpr(6, rt.memory().aot_load32(ctx.gpr[2] + static_cast<std::uint32_t>(-376)));
    ctx.set_gpr(31, 0x0880D2BCu);
    ctx.set_gpr(7, rt.memory().aot_load32(ctx.gpr[2] + static_cast<std::uint32_t>(-372)));
    if (rt.invoke_chained_direct<&recomp_unit_0006_entry, 6u, 773u, 0x0881F3E0u>(ctx, &aot_mem) && ctx.pc == 0x0880D2BCu) goto L_0880D2BC;
    return;
L_0880D2BC:
    ctx.set_gpr(4, ctx.gpr[2] + 0u);
    ctx.set_gpr(5, ctx.gpr[3] + 0u);
    ctx.set_gpr(6, 0u + 0u);
    ctx.set_gpr(31, 0x0880D2D0u);
    ctx.set_gpr(7, 0u + 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0006_entry, 6u, 913u, 0x0881FCCCu>(ctx, &aot_mem) && ctx.pc == 0x0880D2D0u) goto L_0880D2D0;
    return;
L_0880D2D0:
    { const bool branch_taken = static_cast<std::int32_t>(ctx.gpr[2]) <= 0;
    ctx.set_gpr(6, ctx.gpr[20] + 0u);
      if (branch_taken) {
          goto L_0880D2EC;
      }
      goto L_0880D2D8;
    }
L_0880D2D8:
    { const bool branch_taken = static_cast<std::int32_t>(ctx.gpr[17]) < 0;
    ctx.set_gpr(2, ~(0u | ctx.gpr[21]));
      if (branch_taken) {
          goto L_0880D43C;
      }
      goto L_0880D2E0;
    }
L_0880D2E0:
    ctx.set_gpr(19, ctx.gpr[19] & ctx.gpr[2]);
    ctx.set_gpr(20, 0u + 0u);
    goto L_0880D2E8;
L_0880D2E8:
    ctx.set_gpr(6, ctx.gpr[20] + 0u);
    goto L_0880D2EC;
L_0880D2EC:
    ctx.set_gpr(7, ctx.gpr[19] + 0u);
    goto L_0880D2F0;
L_0880D2F0:
    ctx.set_gpr(31, rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(36)));
    goto L_0880D2F4;
L_0880D2F4:
    ctx.set_gpr(30, rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(32)));
    ctx.set_gpr(23, rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(28)));
    ctx.set_gpr(22, rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(24)));
    ctx.set_gpr(21, rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(20)));
    ctx.set_gpr(20, rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(16)));
    ctx.set_gpr(19, rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(12)));
    ctx.set_gpr(18, rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(8)));
    ctx.set_gpr(17, rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(4)));
    ctx.set_gpr(16, rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(0)));
    ctx.set_gpr(2, ctx.gpr[6] + 0u);
    ctx.set_gpr(3, ctx.gpr[7] + 0u);
    jump_target = ctx.gpr[31];
    ctx.set_gpr(29, ctx.gpr[29] + static_cast<std::uint32_t>(48));
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_0880D328:
    ctx.set_gpr(2, static_cast<std::int32_t>(ctx.gpr[18]) < 52 ? 1u : 0u);
    { const bool branch_taken = ctx.gpr[2] == 0u;
    ctx.set_gpr(2, 0u + static_cast<std::uint32_t>(1024));
      if (branch_taken) {
          goto L_0880D390;
      }
      goto L_0880D334;
    }
L_0880D334:
    ctx.set_gpr(2, ctx.gpr[3] + static_cast<std::uint32_t>(-1043));
    ctx.set_gpr(3, 0u + static_cast<std::uint32_t>(-1));
    ctx.set_gpr(30, ctx.gpr[3] >> (ctx.gpr[2] & 31u));
    ctx.set_gpr(2, ctx.gpr[30] & ctx.gpr[4]);
    { const bool branch_taken = ctx.gpr[2] == 0u;
    ctx.set_gpr(20, ctx.gpr[4] + 0u);
      if (branch_taken) {
          goto L_0880D2F0;
      }
      goto L_0880D34C;
    }
L_0880D34C:
    ctx.set_gpr(2, 2225u << 16u);
    ctx.set_gpr(6, rt.memory().aot_load32(ctx.gpr[2] + static_cast<std::uint32_t>(-376)));
    ctx.set_gpr(7, rt.memory().aot_load32(ctx.gpr[2] + static_cast<std::uint32_t>(-372)));
    ctx.set_gpr(31, 0x0880D360u);
    ctx.set_gpr(19, ctx.gpr[5] + 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0006_entry, 6u, 773u, 0x0881F3E0u>(ctx, &aot_mem) && ctx.pc == 0x0880D360u) goto L_0880D360;
    return;
L_0880D360:
    ctx.set_gpr(4, ctx.gpr[2] + 0u);
    ctx.set_gpr(5, ctx.gpr[3] + 0u);
    ctx.set_gpr(6, 0u + 0u);
    ctx.set_gpr(31, 0x0880D374u);
    ctx.set_gpr(7, 0u + 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0006_entry, 6u, 913u, 0x0881FCCCu>(ctx, &aot_mem) && ctx.pc == 0x0880D374u) goto L_0880D374;
    return;
L_0880D374:
    { const bool branch_taken = static_cast<std::int32_t>(ctx.gpr[2]) <= 0;
    ctx.set_gpr(6, ctx.gpr[20] + 0u);
      if (branch_taken) {
          goto L_0880D2EC;
      }
      goto L_0880D37C;
    }
L_0880D37C:
    { const bool branch_taken = static_cast<std::int32_t>(ctx.gpr[17]) < 0;
    ctx.set_gpr(2, ~(0u | ctx.gpr[30]));
      if (branch_taken) {
          goto L_0880D458;
      }
      goto L_0880D384;
    }
L_0880D384:
    ctx.set_gpr(20, ctx.gpr[20] & ctx.gpr[2]);
    ctx.set_gpr(19, ctx.gpr[21] + 0u);
    goto L_0880D2E8;
L_0880D390:
    { const bool branch_taken = ctx.gpr[18] != ctx.gpr[2];
    ctx.set_gpr(31, rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(36)));
      if (branch_taken) {
          goto L_0880D2F4;
      }
      goto L_0880D398;
    }
L_0880D398:
    ctx.set_gpr(31, 0x0880D3A0u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0006_entry, 6u, 773u, 0x0881F3E0u>(ctx, &aot_mem) && ctx.pc == 0x0880D3A0u) goto L_0880D3A0;
    return;
L_0880D3A0:
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
    ctx.set_gpr(6, ctx.gpr[2] + 0u);
    ctx.set_gpr(7, ctx.gpr[3] + 0u);
    ctx.set_gpr(2, ctx.gpr[6] + 0u);
    ctx.set_gpr(3, ctx.gpr[7] + 0u);
    jump_target = ctx.gpr[31];
    ctx.set_gpr(29, ctx.gpr[29] + static_cast<std::uint32_t>(48));
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_0880D3E0:
    ctx.set_gpr(2, 2225u << 16u);
    ctx.set_gpr(6, rt.memory().aot_load32(ctx.gpr[2] + static_cast<std::uint32_t>(-376)));
    ctx.set_gpr(7, rt.memory().aot_load32(ctx.gpr[2] + static_cast<std::uint32_t>(-372)));
    ctx.set_gpr(19, ctx.gpr[5] + 0u);
    ctx.set_gpr(31, 0x0880D3F8u);
    ctx.set_gpr(20, ctx.gpr[4] + 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0006_entry, 6u, 773u, 0x0881F3E0u>(ctx, &aot_mem) && ctx.pc == 0x0880D3F8u) goto L_0880D3F8;
    return;
L_0880D3F8:
    ctx.set_gpr(4, ctx.gpr[2] + 0u);
    ctx.set_gpr(5, ctx.gpr[3] + 0u);
    ctx.set_gpr(6, 0u + 0u);
    ctx.set_gpr(31, 0x0880D40Cu);
    ctx.set_gpr(7, 0u + 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0006_entry, 6u, 913u, 0x0881FCCCu>(ctx, &aot_mem) && ctx.pc == 0x0880D40Cu) goto L_0880D40C;
    return;
L_0880D40C:
    { const bool branch_taken = static_cast<std::int32_t>(ctx.gpr[2]) <= 0;
    ctx.set_gpr(6, ctx.gpr[20] + 0u);
      if (branch_taken) {
          goto L_0880D2EC;
      }
      goto L_0880D414;
    }
L_0880D414:
    ctx.set_gpr(19, 0u + 0u);
    { const bool branch_taken = static_cast<std::int32_t>(ctx.gpr[17]) >= 0;
    ctx.set_gpr(20, 0u + 0u);
      if (branch_taken) {
          goto L_0880D2E8;
      }
      goto L_0880D420;
    }
L_0880D420:
    ctx.set_gpr(21, (ctx.gpr[21] & ~0x80000000u) | ((0u & 0x00000001u) << 31u));
    ctx.set_gpr(2, ctx.gpr[16] | ctx.gpr[21]);
    { const bool branch_taken = ctx.gpr[2] != 0u;
    ctx.set_gpr(19, 49136u << 16u);
      if (branch_taken) {
          goto L_0880D2E8;
      }
      goto L_0880D430;
    }
L_0880D430:
    ctx.set_gpr(20, ctx.gpr[16] + 0u);
    ctx.set_gpr(19, ctx.gpr[17] + 0u);
    goto L_0880D2E8;
L_0880D43C:
    ctx.set_gpr(2, 16u << 16u);
    ctx.set_gpr(2, static_cast<std::uint32_t>(static_cast<std::int32_t>(ctx.gpr[2]) >> (ctx.gpr[18] & 31u)));
    ctx.set_gpr(19, ctx.gpr[17] + ctx.gpr[2]);
    ctx.set_gpr(2, ~(0u | ctx.gpr[21]));
    ctx.set_gpr(19, ctx.gpr[19] & ctx.gpr[2]);
    ctx.set_gpr(20, 0u + 0u);
    goto L_0880D2E8;
L_0880D458:
    ctx.set_gpr(2, 0u + static_cast<std::uint32_t>(20));
    { const bool branch_taken = ctx.gpr[18] == ctx.gpr[2];
    ctx.set_gpr(2, 0u + static_cast<std::uint32_t>(52));
      if (branch_taken) {
          goto L_0880D490;
      }
      goto L_0880D464;
    }
L_0880D464:
    ctx.set_gpr(2, ctx.gpr[2] - ctx.gpr[18]);
    ctx.set_gpr(3, 0u + static_cast<std::uint32_t>(1));
    ctx.set_gpr(3, ctx.gpr[3] << (ctx.gpr[2] & 31u));
    ctx.set_gpr(3, ctx.gpr[16] + ctx.gpr[3]);
    ctx.set_gpr(2, ctx.gpr[3] < ctx.gpr[16] ? 1u : 0u);
    ctx.set_gpr(21, ctx.gpr[17] + ctx.gpr[2]);
    ctx.set_gpr(20, ctx.gpr[3] + 0u);
    ctx.set_gpr(2, ~(0u | ctx.gpr[30]));
    ctx.set_gpr(20, ctx.gpr[20] & ctx.gpr[2]);
    ctx.set_gpr(19, ctx.gpr[21] + 0u);
    goto L_0880D2E8;
L_0880D490:
    ctx.set_gpr(21, ctx.gpr[17] + static_cast<std::uint32_t>(1));
    ctx.set_gpr(2, ~(0u | ctx.gpr[30]));
    ctx.set_gpr(20, ctx.gpr[20] & ctx.gpr[2]);
    ctx.set_gpr(19, ctx.gpr[21] + 0u);
    goto L_0880D2E8;
L_0880D4A4:
    ctx.set_gpr(2, ctx.gpr[4] + 0u);
    ctx.set_gpr(4, 0u - ctx.gpr[4]);
    ctx.set_gpr(4, ctx.gpr[4] | ctx.gpr[2]);
    ctx.set_gpr(5, (ctx.gpr[5] & ~0x80000000u) | ((0u & 0x00000001u) << 31u));
    ctx.set_gpr(4, ctx.gpr[4] >> 31u);
    ctx.set_gpr(4, ctx.gpr[4] | ctx.gpr[5]);
    ctx.set_gpr(2, 32752u << 16u);
    ctx.set_gpr(2, ctx.gpr[2] - ctx.gpr[4]);
    ctx.set_gpr(3, 0u - ctx.gpr[2]);
    ctx.set_gpr(2, ctx.gpr[2] | ctx.gpr[3]);
    ctx.set_gpr(2, ctx.gpr[2] >> 31u);
    ctx.set_gpr(3, 0u + static_cast<std::uint32_t>(1));
    jump_target = ctx.gpr[31];
    ctx.set_gpr(2, ctx.gpr[3] - ctx.gpr[2]);
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_0880D4DC:
    ctx.set_gpr(2, ctx.gpr[4] + 0u);
    ctx.set_gpr(4, 0u - ctx.gpr[4]);
    ctx.set_gpr(4, ctx.gpr[4] | ctx.gpr[2]);
    ctx.set_gpr(5, (ctx.gpr[5] & ~0x80000000u) | ((0u & 0x00000001u) << 31u));
    ctx.set_gpr(4, ctx.gpr[4] >> 31u);
    ctx.set_gpr(4, ctx.gpr[4] | ctx.gpr[5]);
    ctx.set_gpr(2, 32752u << 16u);
    ctx.set_gpr(2, ctx.gpr[2] - ctx.gpr[4]);
    jump_target = ctx.gpr[31];
    ctx.set_gpr(2, ctx.gpr[2] >> 31u);
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_0880D504:
    jump_target = ctx.gpr[31];
    ctx.set_gpr(2, 0u + 0u);
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_0880D50C:
    ctx.set_gpr(3, (ctx.gpr[5] >> 20u) & 0x000007FFu);
    ctx.set_gpr(10, ctx.gpr[3] + static_cast<std::uint32_t>(-1023));
    ctx.set_gpr(29, ctx.gpr[29] + static_cast<std::uint32_t>(-32));
    ctx.set_gpr(2, static_cast<std::int32_t>(ctx.gpr[10]) < 20 ? 1u : 0u);
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(24), ctx.gpr[18]);
    ctx.set_gpr(6, ctx.gpr[4] + 0u);
    ctx.set_gpr(7, ctx.gpr[5] + 0u);
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(28), ctx.gpr[31]);
    ctx.set_gpr(11, ctx.gpr[5] + 0u);
    ctx.set_gpr(12, ctx.gpr[4] + 0u);
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(20), ctx.gpr[17]);
    ctx.set_gpr(18, ctx.gpr[5] >> 31u);
    { const bool branch_taken = ctx.gpr[2] == 0u;
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(16), ctx.gpr[16]);
      if (branch_taken) {
          goto L_0880D608;
      }
      goto L_0880D544;
    }
L_0880D544:
    { const bool branch_taken = static_cast<std::int32_t>(ctx.gpr[10]) < 0;
    ctx.set_gpr(2, 15u << 16u);
      if (branch_taken) {
          goto L_0880D688;
      }
      goto L_0880D54C;
    }
L_0880D54C:
    ctx.set_gpr(2, ctx.gpr[2] | 65535u);
    ctx.set_gpr(3, static_cast<std::uint32_t>(static_cast<std::int32_t>(ctx.gpr[2]) >> (ctx.gpr[10] & 31u)));
    ctx.set_gpr(2, ctx.gpr[3] & ctx.gpr[5]);
    ctx.set_gpr(2, ctx.gpr[6] | ctx.gpr[2]);
    { const bool branch_taken = ctx.gpr[2] == 0u;
    ctx.set_gpr(4, ctx.gpr[5] + 0u);
      if (branch_taken) {
          goto L_0880D5E8;
      }
      goto L_0880D564;
    }
L_0880D564:
    ctx.set_gpr(3, ctx.gpr[3] >> 1u);
    ctx.set_gpr(2, ctx.gpr[5] & ctx.gpr[3]);
    ctx.set_gpr(2, ctx.gpr[6] | ctx.gpr[2]);
    { const bool branch_taken = ctx.gpr[2] == 0u;
    ctx.set_gpr(2, 2225u << 16u);
      if (branch_taken) {
          goto L_0880D598;
      }
      goto L_0880D578;
    }
L_0880D578:
    ctx.set_gpr(2, 0u + static_cast<std::uint32_t>(19));
    { const bool branch_taken = ctx.gpr[10] == ctx.gpr[2];
    ctx.set_gpr(3, ~(0u | ctx.gpr[3]));
      if (branch_taken) {
          goto L_0880D724;
      }
      goto L_0880D584;
    }
L_0880D584:
    ctx.set_gpr(2, 2u << 16u);
    ctx.set_gpr(3, ctx.gpr[5] & ctx.gpr[3]);
    ctx.set_gpr(2, static_cast<std::uint32_t>(static_cast<std::int32_t>(ctx.gpr[2]) >> (ctx.gpr[10] & 31u)));
    ctx.set_gpr(4, ctx.gpr[3] | ctx.gpr[2]);
    goto L_0880D594;
L_0880D594:
    ctx.set_gpr(2, 2225u << 16u);
    goto L_0880D598;
L_0880D598:
    ctx.set_gpr(2, ctx.gpr[2] + static_cast<std::uint32_t>(-352));
    ctx.set_gpr(3, ctx.gpr[18] << 3u);
    ctx.set_gpr(3, ctx.gpr[3] + ctx.gpr[2]);
    ctx.set_gpr(16, rt.memory().aot_load32(ctx.gpr[3] + static_cast<std::uint32_t>(0)));
    ctx.set_gpr(17, rt.memory().aot_load32(ctx.gpr[3] + static_cast<std::uint32_t>(4)));
    ctx.set_gpr(6, ctx.gpr[12] + 0u);
    ctx.set_gpr(7, ctx.gpr[4] + 0u);
    ctx.set_gpr(5, ctx.gpr[17] + 0u);
    ctx.set_gpr(31, 0x0880D5C0u);
    ctx.set_gpr(4, ctx.gpr[16] + 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0006_entry, 6u, 773u, 0x0881F3E0u>(ctx, &aot_mem) && ctx.pc == 0x0880D5C0u) goto L_0880D5C0;
    return;
L_0880D5C0:
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(0), ctx.gpr[2]);
    ctx.set_gpr(6, ctx.gpr[16] + 0u);
    ctx.set_gpr(7, ctx.gpr[17] + 0u);
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(4), ctx.gpr[3]);
    ctx.set_gpr(4, rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(0)));
    ctx.set_gpr(5, rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(4)));
    ctx.set_gpr(31, 0x0880D5E0u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0006_entry, 6u, 768u, 0x0881F368u>(ctx, &aot_mem) && ctx.pc == 0x0880D5E0u) goto L_0880D5E0;
    return;
L_0880D5E0:
    ctx.set_gpr(6, ctx.gpr[2] + 0u);
    ctx.set_gpr(7, ctx.gpr[3] + 0u);
    goto L_0880D5E8;
L_0880D5E8:
    ctx.set_gpr(31, rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(28)));
    goto L_0880D5EC;
L_0880D5EC:
    ctx.set_gpr(18, rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(24)));
    ctx.set_gpr(17, rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(20)));
    ctx.set_gpr(16, rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(16)));
    ctx.set_gpr(2, ctx.gpr[6] + 0u);
    ctx.set_gpr(3, ctx.gpr[7] + 0u);
    jump_target = ctx.gpr[31];
    ctx.set_gpr(29, ctx.gpr[29] + static_cast<std::uint32_t>(32));
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_0880D608:
    ctx.set_gpr(2, static_cast<std::int32_t>(ctx.gpr[10]) < 52 ? 1u : 0u);
    { const bool branch_taken = ctx.gpr[2] == 0u;
    ctx.set_gpr(2, 0u + static_cast<std::uint32_t>(1024));
      if (branch_taken) {
          goto L_0880D650;
      }
      goto L_0880D614;
    }
L_0880D614:
    ctx.set_gpr(5, ctx.gpr[3] + static_cast<std::uint32_t>(-1043));
    ctx.set_gpr(2, 0u + static_cast<std::uint32_t>(-1));
    ctx.set_gpr(2, ctx.gpr[2] >> (ctx.gpr[5] & 31u));
    ctx.set_gpr(3, ctx.gpr[4] & ctx.gpr[2]);
    { const bool branch_taken = ctx.gpr[3] == 0u;
    ctx.set_gpr(3, ctx.gpr[2] >> 1u);
      if (branch_taken) {
          goto L_0880D5E8;
      }
      goto L_0880D62C;
    }
L_0880D62C:
    ctx.set_gpr(2, ctx.gpr[4] & ctx.gpr[3]);
    { const bool branch_taken = ctx.gpr[2] == 0u;
    ctx.set_gpr(4, ctx.gpr[7] + 0u);
      if (branch_taken) {
          goto L_0880D594;
      }
      goto L_0880D638;
    }
L_0880D638:
    ctx.set_gpr(3, ~(0u | ctx.gpr[3]));
    ctx.set_gpr(2, 16384u << 16u);
    ctx.set_gpr(3, ctx.gpr[6] & ctx.gpr[3]);
    ctx.set_gpr(2, static_cast<std::uint32_t>(static_cast<std::int32_t>(ctx.gpr[2]) >> (ctx.gpr[5] & 31u)));
    ctx.set_gpr(12, ctx.gpr[3] | ctx.gpr[2]);
    goto L_0880D594;
L_0880D650:
    { const bool branch_taken = ctx.gpr[10] != ctx.gpr[2];
    ctx.set_gpr(31, rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(28)));
      if (branch_taken) {
          goto L_0880D5EC;
      }
      goto L_0880D658;
    }
L_0880D658:
    ctx.set_gpr(31, 0x0880D660u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0006_entry, 6u, 773u, 0x0881F3E0u>(ctx, &aot_mem) && ctx.pc == 0x0880D660u) goto L_0880D660;
    return;
L_0880D660:
    ctx.set_gpr(31, rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(28)));
    ctx.set_gpr(18, rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(24)));
    ctx.set_gpr(17, rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(20)));
    ctx.set_gpr(16, rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(16)));
    ctx.set_gpr(6, ctx.gpr[2] + 0u);
    ctx.set_gpr(7, ctx.gpr[3] + 0u);
    ctx.set_gpr(2, ctx.gpr[6] + 0u);
    ctx.set_gpr(3, ctx.gpr[7] + 0u);
    jump_target = ctx.gpr[31];
    ctx.set_gpr(29, ctx.gpr[29] + static_cast<std::uint32_t>(32));
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_0880D688:
    ctx.set_gpr(2, ctx.gpr[5] + 0u);
    ctx.set_gpr(2, (ctx.gpr[2] & ~0x80000000u) | ((0u & 0x00000001u) << 31u));
    ctx.set_gpr(2, ctx.gpr[4] | ctx.gpr[2]);
    { const bool branch_taken = ctx.gpr[2] == 0u;
    ctx.set_gpr(4, ctx.gpr[5] + 0u);
      if (branch_taken) {
          goto L_0880D5E8;
      }
      goto L_0880D69C;
    }
L_0880D69C:
    ctx.set_gpr(4, (ctx.gpr[4] & ~0xFFF00000u) | ((0u & 0x00000FFFu) << 20u));
    ctx.set_gpr(4, ctx.gpr[6] | ctx.gpr[4]);
    ctx.set_gpr(2, 2225u << 16u);
    ctx.set_gpr(5, 0u - ctx.gpr[4]);
    ctx.set_gpr(2, ctx.gpr[2] + static_cast<std::uint32_t>(-352));
    ctx.set_gpr(3, ctx.gpr[18] << 3u);
    ctx.set_gpr(3, ctx.gpr[3] + ctx.gpr[2]);
    ctx.set_gpr(4, ctx.gpr[4] | ctx.gpr[5]);
    ctx.set_gpr(16, rt.memory().aot_load32(ctx.gpr[3] + static_cast<std::uint32_t>(0)));
    ctx.set_gpr(17, rt.memory().aot_load32(ctx.gpr[3] + static_cast<std::uint32_t>(4)));
    ctx.set_gpr(5, 8u << 16u);
    ctx.set_gpr(4, ctx.gpr[4] >> 12u);
    ctx.set_gpr(4, ctx.gpr[4] & ctx.gpr[5]);
    ctx.set_gpr(11, (ctx.gpr[11] & ~0x0001FFFFu) | ((0u & 0x0001FFFFu) << 0u));
    ctx.set_gpr(3, ctx.gpr[4] | ctx.gpr[11]);
    ctx.set_gpr(7, ctx.gpr[3] + 0u);
    ctx.set_gpr(4, ctx.gpr[16] + 0u);
    ctx.set_gpr(31, 0x0880D6E8u);
    ctx.set_gpr(5, ctx.gpr[17] + 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0006_entry, 6u, 773u, 0x0881F3E0u>(ctx, &aot_mem) && ctx.pc == 0x0880D6E8u) goto L_0880D6E8;
    return;
L_0880D6E8:
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(0), ctx.gpr[2]);
    ctx.set_gpr(6, ctx.gpr[16] + 0u);
    ctx.set_gpr(7, ctx.gpr[17] + 0u);
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(4), ctx.gpr[3]);
    ctx.set_gpr(4, rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(0)));
    ctx.set_gpr(5, rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(4)));
    ctx.set_gpr(31, 0x0880D708u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0006_entry, 6u, 768u, 0x0881F368u>(ctx, &aot_mem) && ctx.pc == 0x0880D708u) goto L_0880D708;
    return;
L_0880D708:
    ctx.set_gpr(4, ctx.gpr[2] + 0u);
    ctx.set_gpr(3, (ctx.gpr[3] & ~0x80000000u) | ((0u & 0x00000001u) << 31u));
    ctx.set_gpr(2, ctx.gpr[18] << 31u);
    ctx.set_gpr(5, ctx.gpr[3] | ctx.gpr[2]);
    ctx.set_gpr(6, ctx.gpr[4] + 0u);
    ctx.set_gpr(7, ctx.gpr[5] + 0u);
    goto L_0880D5E8;
L_0880D724:
    ctx.set_gpr(12, 16384u << 16u);
    goto L_0880D594;
L_0880D72C:
    ctx.set_gpr(29, ctx.gpr[29] + static_cast<std::uint32_t>(-16));
    ctx.set_gpr(7, (ctx.gpr[5] >> 20u) & 0x000007FFu);
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(0), ctx.gpr[16]);
    ctx.set_gpr(8, ctx.gpr[4] + 0u);
    ctx.set_gpr(9, ctx.gpr[5] + 0u);
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(8), ctx.gpr[31]);
    ctx.set_gpr(10, ctx.gpr[5] + 0u);
    ctx.set_gpr(16, ctx.gpr[6] + 0u);
    { const bool branch_taken = ctx.gpr[7] != 0u;
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(4), ctx.gpr[17]);
      if (branch_taken) {
          goto L_0880D794;
      }
      goto L_0880D754;
    }
L_0880D754:
    ctx.set_gpr(10, (ctx.gpr[10] & ~0x80000000u) | ((0u & 0x00000001u) << 31u));
    ctx.set_gpr(2, ctx.gpr[4] | ctx.gpr[10]);
    { const bool branch_taken = ctx.gpr[2] == 0u;
    ctx.set_gpr(2, 2225u << 16u);
      if (branch_taken) {
          goto L_0880D7C4;
      }
      goto L_0880D764;
    }
L_0880D764:
    ctx.set_gpr(7, rt.memory().aot_load32(ctx.gpr[2] + static_cast<std::uint32_t>(-332)));
    ctx.set_gpr(31, 0x0880D770u);
    ctx.set_gpr(6, rt.memory().aot_load32(ctx.gpr[2] + static_cast<std::uint32_t>(-336)));
    if (rt.invoke_chained_direct<&recomp_unit_0006_entry, 6u, 778u, 0x0881F44Cu>(ctx, &aot_mem) && ctx.pc == 0x0880D770u) goto L_0880D770;
    return;
L_0880D770:
    ctx.set_gpr(4, 65535u << 16u);
    ctx.set_gpr(4, ctx.gpr[4] | 15536u);
    ctx.set_gpr(8, ctx.gpr[2] + 0u);
    ctx.set_gpr(4, static_cast<std::int32_t>(ctx.gpr[16]) < static_cast<std::int32_t>(ctx.gpr[4]) ? 1u : 0u);
    ctx.set_gpr(2, (ctx.gpr[3] >> 20u) & 0x000007FFu);
    ctx.set_gpr(9, ctx.gpr[3] + 0u);
    ctx.set_gpr(10, ctx.gpr[3] + 0u);
    { const bool branch_taken = ctx.gpr[4] != 0u;
    ctx.set_gpr(7, ctx.gpr[2] + static_cast<std::uint32_t>(-54));
      if (branch_taken) {
          goto L_0880D818;
      }
      goto L_0880D794;
    }
L_0880D794:
    ctx.set_gpr(2, 0u + static_cast<std::uint32_t>(2047));
    { const bool branch_taken = ctx.gpr[7] == ctx.gpr[2];
    ctx.set_gpr(4, ctx.gpr[7] + ctx.gpr[16]);
      if (branch_taken) {
          goto L_0880D7E0;
      }
      goto L_0880D7A0;
    }
L_0880D7A0:
    ctx.set_gpr(2, static_cast<std::int32_t>(ctx.gpr[4]) < 2047 ? 1u : 0u);
    { const bool branch_taken = ctx.gpr[2] == 0u;
    ctx.set_gpr(2, 2225u << 16u);
      if (branch_taken) {
          goto L_0880D854;
      }
      goto L_0880D7AC;
    }
L_0880D7AC:
    { const bool branch_taken = static_cast<std::int32_t>(ctx.gpr[4]) <= 0;
    ctx.set_gpr(2, static_cast<std::int32_t>(ctx.gpr[4]) < -53 ? 1u : 0u);
      if (branch_taken) {
          goto L_0880D8A8;
      }
      goto L_0880D7B4;
    }
L_0880D7B4:
    ctx.set_gpr(10, (ctx.gpr[10] & ~0x7FF00000u) | ((0u & 0x000007FFu) << 20u));
    ctx.set_gpr(4, ctx.gpr[4] << 20u);
    ctx.set_gpr(3, ctx.gpr[10] | ctx.gpr[4]);
    ctx.set_gpr(9, ctx.gpr[3] + 0u);
    goto L_0880D7C4;
L_0880D7C4:
    ctx.set_gpr(31, rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(8)));
    ctx.set_gpr(17, rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(4)));
    ctx.set_gpr(16, rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(0)));
    ctx.set_gpr(2, ctx.gpr[8] + 0u);
    ctx.set_gpr(3, ctx.gpr[9] + 0u);
    jump_target = ctx.gpr[31];
    ctx.set_gpr(29, ctx.gpr[29] + static_cast<std::uint32_t>(16));
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_0880D7E0:
    ctx.set_gpr(4, ctx.gpr[8] + 0u);
    ctx.set_gpr(5, ctx.gpr[9] + 0u);
    ctx.set_gpr(6, ctx.gpr[8] + 0u);
    ctx.set_gpr(31, 0x0880D7F4u);
    ctx.set_gpr(7, ctx.gpr[9] + 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0006_entry, 6u, 773u, 0x0881F3E0u>(ctx, &aot_mem) && ctx.pc == 0x0880D7F4u) goto L_0880D7F4;
    return;
L_0880D7F4:
    ctx.set_gpr(31, rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(8)));
    ctx.set_gpr(17, rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(4)));
    ctx.set_gpr(16, rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(0)));
    ctx.set_gpr(8, ctx.gpr[2] + 0u);
    ctx.set_gpr(9, ctx.gpr[3] + 0u);
    ctx.set_gpr(2, ctx.gpr[8] + 0u);
    ctx.set_gpr(3, ctx.gpr[9] + 0u);
    jump_target = ctx.gpr[31];
    ctx.set_gpr(29, ctx.gpr[29] + static_cast<std::uint32_t>(16));
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_0880D818:
    ctx.set_gpr(2, 2225u << 16u);
    ctx.set_gpr(6, rt.memory().aot_load32(ctx.gpr[2] + static_cast<std::uint32_t>(-328)));
    ctx.set_gpr(7, rt.memory().aot_load32(ctx.gpr[2] + static_cast<std::uint32_t>(-324)));
    ctx.set_gpr(4, ctx.gpr[8] + 0u);
    ctx.set_gpr(31, 0x0880D830u);
    ctx.set_gpr(5, ctx.gpr[9] + 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0006_entry, 6u, 778u, 0x0881F44Cu>(ctx, &aot_mem) && ctx.pc == 0x0880D830u) goto L_0880D830;
    return;
L_0880D830:
    ctx.set_gpr(31, rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(8)));
    ctx.set_gpr(17, rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(4)));
    ctx.set_gpr(16, rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(0)));
    ctx.set_gpr(8, ctx.gpr[2] + 0u);
    ctx.set_gpr(9, ctx.gpr[3] + 0u);
    ctx.set_gpr(2, ctx.gpr[8] + 0u);
    ctx.set_gpr(3, ctx.gpr[9] + 0u);
    jump_target = ctx.gpr[31];
    ctx.set_gpr(29, ctx.gpr[29] + static_cast<std::uint32_t>(16));
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_0880D854:
    ctx.set_gpr(16, rt.memory().aot_load32(ctx.gpr[2] + static_cast<std::uint32_t>(-320)));
    ctx.set_gpr(17, rt.memory().aot_load32(ctx.gpr[2] + static_cast<std::uint32_t>(-316)));
    goto L_0880D85C;
L_0880D85C:
    ctx.set_gpr(6, ctx.gpr[8] + 0u);
    ctx.set_gpr(7, ctx.gpr[9] + 0u);
    ctx.set_gpr(4, ctx.gpr[16] + 0u);
    ctx.set_gpr(31, 0x0880D870u);
    ctx.set_gpr(5, ctx.gpr[17] + 0u);
    goto L_0880D0C4;
L_0880D870:
    ctx.set_gpr(4, ctx.gpr[2] + 0u);
    ctx.set_gpr(6, ctx.gpr[16] + 0u);
    ctx.set_gpr(7, ctx.gpr[17] + 0u);
    ctx.set_gpr(31, 0x0880D884u);
    ctx.set_gpr(5, ctx.gpr[3] + 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0006_entry, 6u, 778u, 0x0881F44Cu>(ctx, &aot_mem) && ctx.pc == 0x0880D884u) goto L_0880D884;
    return;
L_0880D884:
    ctx.set_gpr(31, rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(8)));
    ctx.set_gpr(17, rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(4)));
    ctx.set_gpr(16, rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(0)));
    ctx.set_gpr(8, ctx.gpr[2] + 0u);
    ctx.set_gpr(9, ctx.gpr[3] + 0u);
    ctx.set_gpr(2, ctx.gpr[8] + 0u);
    ctx.set_gpr(3, ctx.gpr[9] + 0u);
    jump_target = ctx.gpr[31];
    ctx.set_gpr(29, ctx.gpr[29] + static_cast<std::uint32_t>(16));
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_0880D8A8:
    { const bool branch_taken = ctx.gpr[2] == 0u;
    ctx.set_gpr(5, 2225u << 16u);
      if (branch_taken) {
          goto L_0880D8D0;
      }
      goto L_0880D8B0;
    }
L_0880D8B0:
    ctx.set_gpr(2, 0u | 50000u);
    ctx.set_gpr(2, static_cast<std::int32_t>(ctx.gpr[2]) < static_cast<std::int32_t>(ctx.gpr[16]) ? 1u : 0u);
    { const bool branch_taken = ctx.gpr[2] != 0u;
    ctx.set_gpr(2, 2225u << 16u);
      if (branch_taken) {
          goto L_0880D854;
      }
      goto L_0880D8C0;
    }
L_0880D8C0:
    ctx.set_gpr(2, 2225u << 16u);
    ctx.set_gpr(16, rt.memory().aot_load32(ctx.gpr[2] + static_cast<std::uint32_t>(-328)));
    ctx.set_gpr(17, rt.memory().aot_load32(ctx.gpr[2] + static_cast<std::uint32_t>(-324)));
    goto L_0880D85C;
L_0880D8D0:
    ctx.set_gpr(4, ctx.gpr[4] + static_cast<std::uint32_t>(54));
    ctx.set_gpr(10, (ctx.gpr[10] & ~0x7FF00000u) | ((0u & 0x000007FFu) << 20u));
    ctx.set_gpr(4, ctx.gpr[4] << 20u);
    ctx.set_gpr(6, rt.memory().aot_load32(ctx.gpr[5] + static_cast<std::uint32_t>(-312)));
    ctx.set_gpr(7, rt.memory().aot_load32(ctx.gpr[5] + static_cast<std::uint32_t>(-308)));
    ctx.set_gpr(3, ctx.gpr[10] | ctx.gpr[4]);
    ctx.set_gpr(5, ctx.gpr[3] + 0u);
    ctx.set_gpr(31, 0x0880D8F4u);
    ctx.set_gpr(4, ctx.gpr[8] + 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0006_entry, 6u, 778u, 0x0881F44Cu>(ctx, &aot_mem) && ctx.pc == 0x0880D8F4u) goto L_0880D8F4;
    return;
L_0880D8F4:
    ctx.set_gpr(8, ctx.gpr[2] + 0u);
    ctx.set_gpr(9, ctx.gpr[3] + 0u);
    goto L_0880D7C4;
L_0880D900:
    ctx.set_gpr(3, ctx.gpr[5] + 0u);
    ctx.set_gpr(6, 16361u << 16u);
    ctx.set_gpr(3, (ctx.gpr[3] & ~0x80000000u) | ((0u & 0x00000001u) << 31u));
    ctx.set_gpr(6, ctx.gpr[6] | 8699u);
    ctx.set_gpr(29, ctx.gpr[29] + static_cast<std::uint32_t>(-32));
    ctx.set_gpr(6, static_cast<std::int32_t>(ctx.gpr[6]) < static_cast<std::int32_t>(ctx.gpr[3]) ? 1u : 0u);
    { const bool branch_taken = ctx.gpr[6] == 0u;
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(16), ctx.gpr[31]);
      if (branch_taken) {
          goto L_0880D9A0;
      }
      goto L_0880D920;
    }
L_0880D920:
    ctx.set_gpr(2, 32751u << 16u);
    ctx.set_gpr(2, ctx.gpr[2] | 65535u);
    ctx.set_gpr(2, static_cast<std::int32_t>(ctx.gpr[2]) < static_cast<std::int32_t>(ctx.gpr[3]) ? 1u : 0u);
    { const bool branch_taken = ctx.gpr[2] == 0u;
    ctx.set_gpr(6, ctx.gpr[4] + 0u);
      if (branch_taken) {
          goto L_0880D958;
      }
      goto L_0880D934;
    }
L_0880D934:
    ctx.set_gpr(31, 0x0880D93Cu);
    ctx.set_gpr(7, ctx.gpr[5] + 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0006_entry, 6u, 768u, 0x0881F368u>(ctx, &aot_mem) && ctx.pc == 0x0880D93Cu) goto L_0880D93C;
    return;
L_0880D93C:
    ctx.set_gpr(6, ctx.gpr[2] + 0u);
    ctx.set_gpr(7, ctx.gpr[3] + 0u);
    goto L_0880D944;
L_0880D944:
    ctx.set_gpr(31, rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(16)));
    ctx.set_gpr(2, ctx.gpr[6] + 0u);
    ctx.set_gpr(3, ctx.gpr[7] + 0u);
    jump_target = ctx.gpr[31];
    ctx.set_gpr(29, ctx.gpr[29] + static_cast<std::uint32_t>(32));
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_0880D958:
    ctx.set_gpr(31, 0x0880D960u);
    ctx.set_gpr(6, ctx.gpr[29] + 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0001_entry, 1u, 145u, 0x08808CA4u>(ctx, &aot_mem) && ctx.pc == 0x0880D960u) goto L_0880D960;
    return;
L_0880D960:
    ctx.set_gpr(3, ctx.gpr[2] & 3u);
    ctx.set_gpr(2, 0u + static_cast<std::uint32_t>(1));
    { const bool branch_taken = ctx.gpr[3] == ctx.gpr[2];
    ctx.set_gpr(2, 0u + static_cast<std::uint32_t>(2));
      if (branch_taken) {
          goto L_0880D9CC;
      }
      goto L_0880D970;
    }
L_0880D970:
    { const bool branch_taken = ctx.gpr[3] == ctx.gpr[2];
    ctx.set_gpr(4, rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(0)));
      if (branch_taken) {
          goto L_0880DA08;
      }
      goto L_0880D978;
    }
L_0880D978:
    { const bool branch_taken = ctx.gpr[3] != 0u;
    ctx.set_gpr(6, rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(8)));
      if (branch_taken) {
          goto L_0880D9EC;
      }
      goto L_0880D980;
    }
L_0880D980:
    ctx.set_gpr(7, rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(12)));
    ctx.set_gpr(4, rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(0)));
    ctx.set_gpr(5, rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(4)));
    ctx.set_gpr(31, 0x0880D994u);
    ctx.set_gpr(8, 0u + static_cast<std::uint32_t>(1));
    if (rt.invoke_chained_direct<&recomp_unit_0001_entry, 1u, 643u, 0x0880B854u>(ctx, &aot_mem) && ctx.pc == 0x0880D994u) goto L_0880D994;
    return;
L_0880D994:
    ctx.set_gpr(6, ctx.gpr[2] + 0u);
    ctx.set_gpr(7, ctx.gpr[3] + 0u);
    goto L_0880D944;
L_0880D9A0:
    ctx.set_gpr(6, 0u + 0u);
    ctx.set_gpr(7, 0u + 0u);
    ctx.set_gpr(31, 0x0880D9B0u);
    ctx.set_gpr(8, 0u + 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0001_entry, 1u, 643u, 0x0880B854u>(ctx, &aot_mem) && ctx.pc == 0x0880D9B0u) goto L_0880D9B0;
    return;
L_0880D9B0:
    ctx.set_gpr(31, rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(16)));
    ctx.set_gpr(6, ctx.gpr[2] + 0u);
    ctx.set_gpr(7, ctx.gpr[3] + 0u);
    ctx.set_gpr(2, ctx.gpr[6] + 0u);
    ctx.set_gpr(3, ctx.gpr[7] + 0u);
    jump_target = ctx.gpr[31];
    ctx.set_gpr(29, ctx.gpr[29] + static_cast<std::uint32_t>(32));
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_0880D9CC:
    ctx.set_gpr(6, rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(8)));
    ctx.set_gpr(7, rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(12)));
    ctx.set_gpr(4, rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(0)));
    ctx.set_gpr(31, 0x0880D9E0u);
    ctx.set_gpr(5, rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(4)));
    if (rt.invoke_chained_direct<&recomp_unit_0001_entry, 1u, 443u, 0x0880A728u>(ctx, &aot_mem) && ctx.pc == 0x0880D9E0u) goto L_0880D9E0;
    return;
L_0880D9E0:
    ctx.set_gpr(6, ctx.gpr[2] + 0u);
    ctx.set_gpr(7, ctx.gpr[3] + 0u);
    goto L_0880D944;
L_0880D9EC:
    ctx.set_gpr(7, rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(12)));
    ctx.set_gpr(31, 0x0880D9F8u);
    ctx.set_gpr(5, rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(4)));
    if (rt.invoke_chained_direct<&recomp_unit_0001_entry, 1u, 443u, 0x0880A728u>(ctx, &aot_mem) && ctx.pc == 0x0880D9F8u) goto L_0880D9F8;
    return;
L_0880D9F8:
    ctx.set_gpr(4, 32768u << 16u);
    ctx.set_gpr(6, ctx.gpr[2] + 0u);
    ctx.set_gpr(7, ctx.gpr[3] ^ ctx.gpr[4]);
    goto L_0880D944;
L_0880DA08:
    ctx.set_gpr(6, rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(8)));
    ctx.set_gpr(7, rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(12)));
    ctx.set_gpr(5, rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(4)));
    ctx.set_gpr(31, 0x0880DA1Cu);
    ctx.set_gpr(8, 0u + static_cast<std::uint32_t>(1));
    if (rt.invoke_chained_direct<&recomp_unit_0001_entry, 1u, 643u, 0x0880B854u>(ctx, &aot_mem) && ctx.pc == 0x0880DA1Cu) goto L_0880DA1C;
    return;
L_0880DA1C:
    ctx.set_gpr(4, 32768u << 16u);
    ctx.set_gpr(6, ctx.gpr[2] + 0u);
    ctx.set_gpr(7, ctx.gpr[3] ^ ctx.gpr[4]);
    goto L_0880D944;
L_0880DA2C:
    ctx.set_gpr(29, ctx.gpr[29] + static_cast<std::uint32_t>(-16));
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(0), ctx.gpr[16]);
    ctx.set_gpr(16, std::bit_cast<std::uint32_t>(ctx.fpr[12]));
    ctx.set_gpr(2, 20607u << 16u);
    ctx.set_gpr(2, ctx.gpr[2] | 65535u);
    ctx.set_gpr(16, (ctx.gpr[16] & ~0x80000000u) | ((0u & 0x00000001u) << 31u));
    ctx.set_gpr(2, static_cast<std::int32_t>(ctx.gpr[2]) < static_cast<std::int32_t>(ctx.gpr[16]) ? 1u : 0u);
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(4), ctx.gpr[17]);
    ctx.set_fpr_bits(5, ctx.fpr_bits(12));
    ctx.set_gpr(17, std::bit_cast<std::uint32_t>(ctx.fpr[12]));
    { const bool branch_taken = ctx.gpr[2] == 0u;
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(8), ctx.gpr[31]);
      if (branch_taken) {
          goto L_0880DA88;
      }
      goto L_0880DA5C;
    }
L_0880DA5C:
    ctx.set_gpr(2, 32640u << 16u);
    ctx.set_gpr(2, static_cast<std::int32_t>(ctx.gpr[2]) < static_cast<std::int32_t>(ctx.gpr[16]) ? 1u : 0u);
    { const bool branch_taken = ctx.gpr[2] == 0u;
    // nop
      if (branch_taken) {
          goto L_0880DBC0;
      }
      goto L_0880DA6C;
    }
L_0880DA6C:
    ctx.fpr[5] = ctx.fpr[12] + ctx.fpr[12];
    goto L_0880DA70;
L_0880DA70:
    ctx.set_fpr_bits(0, ctx.fpr_bits(5));
    ctx.set_gpr(31, rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(8)));
    ctx.set_gpr(17, rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(4)));
    ctx.set_gpr(16, rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(0)));
    jump_target = ctx.gpr[31];
    ctx.set_gpr(29, ctx.gpr[29] + static_cast<std::uint32_t>(16));
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_0880DA88:
    ctx.set_gpr(2, 16095u << 16u);
    ctx.set_gpr(2, ctx.gpr[2] | 65535u);
    ctx.set_gpr(2, static_cast<std::int32_t>(ctx.gpr[2]) < static_cast<std::int32_t>(ctx.gpr[16]) ? 1u : 0u);
    { const bool branch_taken = ctx.gpr[2] != 0u;
    ctx.set_gpr(2, 12543u << 16u);
      if (branch_taken) {
          goto L_0880DC24;
      }
      goto L_0880DA9C;
    }
L_0880DA9C:
    ctx.set_gpr(2, ctx.gpr[2] | 65535u);
    ctx.set_gpr(2, static_cast<std::int32_t>(ctx.gpr[2]) < static_cast<std::int32_t>(ctx.gpr[16]) ? 1u : 0u);
    { const bool branch_taken = ctx.gpr[2] == 0u;
    ctx.set_gpr(2, 2225u << 16u);
      if (branch_taken) {
          goto L_0880DBF0;
      }
      goto L_0880DAAC;
    }
L_0880DAAC:
    ctx.set_gpr(3, 0u + static_cast<std::uint32_t>(-1));
    goto L_0880DAB0;
L_0880DAB0:
    { const float fs = ctx.fpr[5]; const float ft = ctx.fpr[5]; if ((std::isinf(fs) && ft == 0.0f) || (std::isinf(ft) && fs == 0.0f)) ctx.set_fpr_bits(4, 0x7FC00000u); else ctx.fpr[4] = fs * ft; }
    ctx.set_gpr(2, 2225u << 16u);
    ctx.fpr[0] = std::bit_cast<float>(rt.memory().aot_load32(ctx.gpr[2] + static_cast<std::uint32_t>(-200)));
    ctx.set_gpr(2, 2225u << 16u);
    { const float fs = ctx.fpr[4]; const float ft = ctx.fpr[4]; if ((std::isinf(fs) && ft == 0.0f) || (std::isinf(ft) && fs == 0.0f)) ctx.set_fpr_bits(3, 0x7FC00000u); else ctx.fpr[3] = fs * ft; }
    ctx.fpr[1] = std::bit_cast<float>(rt.memory().aot_load32(ctx.gpr[2] + static_cast<std::uint32_t>(-176)));
    ctx.set_gpr(2, 2225u << 16u);
    ctx.fpr[2] = std::bit_cast<float>(rt.memory().aot_load32(ctx.gpr[2] + static_cast<std::uint32_t>(-196)));
    { const float fs = ctx.fpr[3]; const float ft = ctx.fpr[0]; if ((std::isinf(fs) && ft == 0.0f) || (std::isinf(ft) && fs == 0.0f)) ctx.set_fpr_bits(0, 0x7FC00000u); else ctx.fpr[0] = fs * ft; }
    ctx.set_gpr(2, 2225u << 16u);
    { const float fs = ctx.fpr[3]; const float ft = ctx.fpr[1]; if ((std::isinf(fs) && ft == 0.0f) || (std::isinf(ft) && fs == 0.0f)) ctx.set_fpr_bits(1, 0x7FC00000u); else ctx.fpr[1] = fs * ft; }
    ctx.fpr[0] = ctx.fpr[0] + ctx.fpr[2];
    ctx.fpr[2] = std::bit_cast<float>(rt.memory().aot_load32(ctx.gpr[2] + static_cast<std::uint32_t>(-172)));
    ctx.set_gpr(2, 2225u << 16u);
    { const float fs = ctx.fpr[3]; const float ft = ctx.fpr[0]; if ((std::isinf(fs) && ft == 0.0f) || (std::isinf(ft) && fs == 0.0f)) ctx.set_fpr_bits(0, 0x7FC00000u); else ctx.fpr[0] = fs * ft; }
    ctx.fpr[1] = ctx.fpr[1] + ctx.fpr[2];
    ctx.fpr[2] = std::bit_cast<float>(rt.memory().aot_load32(ctx.gpr[2] + static_cast<std::uint32_t>(-192)));
    ctx.set_gpr(2, 2225u << 16u);
    ctx.fpr[0] = ctx.fpr[0] + ctx.fpr[2];
    { const float fs = ctx.fpr[3]; const float ft = ctx.fpr[1]; if ((std::isinf(fs) && ft == 0.0f) || (std::isinf(ft) && fs == 0.0f)) ctx.set_fpr_bits(1, 0x7FC00000u); else ctx.fpr[1] = fs * ft; }
    ctx.fpr[2] = std::bit_cast<float>(rt.memory().aot_load32(ctx.gpr[2] + static_cast<std::uint32_t>(-168)));
    ctx.set_gpr(2, 2225u << 16u);
    { const float fs = ctx.fpr[3]; const float ft = ctx.fpr[0]; if ((std::isinf(fs) && ft == 0.0f) || (std::isinf(ft) && fs == 0.0f)) ctx.set_fpr_bits(0, 0x7FC00000u); else ctx.fpr[0] = fs * ft; }
    ctx.fpr[1] = ctx.fpr[1] + ctx.fpr[2];
    ctx.fpr[2] = std::bit_cast<float>(rt.memory().aot_load32(ctx.gpr[2] + static_cast<std::uint32_t>(-188)));
    ctx.set_gpr(2, 2225u << 16u);
    ctx.fpr[0] = ctx.fpr[0] + ctx.fpr[2];
    { const float fs = ctx.fpr[3]; const float ft = ctx.fpr[1]; if ((std::isinf(fs) && ft == 0.0f) || (std::isinf(ft) && fs == 0.0f)) ctx.set_fpr_bits(1, 0x7FC00000u); else ctx.fpr[1] = fs * ft; }
    ctx.fpr[2] = std::bit_cast<float>(rt.memory().aot_load32(ctx.gpr[2] + static_cast<std::uint32_t>(-164)));
    ctx.set_gpr(2, 2225u << 16u);
    { const float fs = ctx.fpr[3]; const float ft = ctx.fpr[0]; if ((std::isinf(fs) && ft == 0.0f) || (std::isinf(ft) && fs == 0.0f)) ctx.set_fpr_bits(0, 0x7FC00000u); else ctx.fpr[0] = fs * ft; }
    ctx.fpr[1] = ctx.fpr[1] + ctx.fpr[2];
    ctx.fpr[2] = std::bit_cast<float>(rt.memory().aot_load32(ctx.gpr[2] + static_cast<std::uint32_t>(-184)));
    ctx.set_gpr(2, 2225u << 16u);
    ctx.fpr[0] = ctx.fpr[0] + ctx.fpr[2];
    { const float fs = ctx.fpr[3]; const float ft = ctx.fpr[1]; if ((std::isinf(fs) && ft == 0.0f) || (std::isinf(ft) && fs == 0.0f)) ctx.set_fpr_bits(1, 0x7FC00000u); else ctx.fpr[1] = fs * ft; }
    ctx.fpr[2] = std::bit_cast<float>(rt.memory().aot_load32(ctx.gpr[2] + static_cast<std::uint32_t>(-160)));
    ctx.set_gpr(2, 2225u << 16u);
    { const float fs = ctx.fpr[3]; const float ft = ctx.fpr[0]; if ((std::isinf(fs) && ft == 0.0f) || (std::isinf(ft) && fs == 0.0f)) ctx.set_fpr_bits(0, 0x7FC00000u); else ctx.fpr[0] = fs * ft; }
    ctx.fpr[1] = ctx.fpr[1] + ctx.fpr[2];
    ctx.fpr[2] = std::bit_cast<float>(rt.memory().aot_load32(ctx.gpr[2] + static_cast<std::uint32_t>(-180)));
    ctx.fpr[0] = ctx.fpr[0] + ctx.fpr[2];
    { const float fs = ctx.fpr[3]; const float ft = ctx.fpr[1]; if ((std::isinf(fs) && ft == 0.0f) || (std::isinf(ft) && fs == 0.0f)) ctx.set_fpr_bits(1, 0x7FC00000u); else ctx.fpr[1] = fs * ft; }
    { const bool branch_taken = static_cast<std::int32_t>(ctx.gpr[3]) < 0;
    { const float fs = ctx.fpr[4]; const float ft = ctx.fpr[0]; if ((std::isinf(fs) && ft == 0.0f) || (std::isinf(ft) && fs == 0.0f)) ctx.set_fpr_bits(0, 0x7FC00000u); else ctx.fpr[0] = fs * ft; }
      if (branch_taken) {
          goto L_0880DC88;
      }
      goto L_0880DB64;
    }
L_0880DB64:
    ctx.fpr[1] = ctx.fpr[0] + ctx.fpr[1];
    ctx.set_gpr(2, 2225u << 16u);
    ctx.set_gpr(3, ctx.gpr[3] << 2u);
    ctx.set_gpr(2, ctx.gpr[2] + static_cast<std::uint32_t>(-260));
    ctx.set_gpr(2, ctx.gpr[3] + ctx.gpr[2]);
    { const float fs = ctx.fpr[5]; const float ft = ctx.fpr[1]; if ((std::isinf(fs) && ft == 0.0f) || (std::isinf(ft) && fs == 0.0f)) ctx.set_fpr_bits(1, 0x7FC00000u); else ctx.fpr[1] = fs * ft; }
    ctx.fpr[0] = std::bit_cast<float>(rt.memory().aot_load32(ctx.gpr[2] + static_cast<std::uint32_t>(0)));
    ctx.set_gpr(2, 2225u << 16u);
    ctx.set_gpr(2, ctx.gpr[2] + static_cast<std::uint32_t>(-244));
    ctx.fpr[1] = ctx.fpr[1] - ctx.fpr[0];
    ctx.set_gpr(3, ctx.gpr[3] + ctx.gpr[2]);
    ctx.fpr[0] = std::bit_cast<float>(rt.memory().aot_load32(ctx.gpr[3] + static_cast<std::uint32_t>(0)));
    ctx.fpr[1] = ctx.fpr[1] - ctx.fpr[5];
    ctx.fpr[0] = ctx.fpr[0] - ctx.fpr[1];
    { const bool branch_taken = static_cast<std::int32_t>(ctx.gpr[17]) >= 0;
    ctx.set_fpr_bits(5, ctx.fpr_bits(0));
      if (branch_taken) {
          goto L_0880DA70;
      }
      goto L_0880DBA4;
    }
L_0880DBA4:
    ctx.set_fpr_bits(5, ctx.fpr_bits(0) ^ 0x80000000u);
    ctx.set_gpr(31, rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(8)));
    ctx.set_gpr(17, rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(4)));
    ctx.set_gpr(16, rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(0)));
    ctx.set_fpr_bits(0, ctx.fpr_bits(5));
    jump_target = ctx.gpr[31];
    ctx.set_gpr(29, ctx.gpr[29] + static_cast<std::uint32_t>(16));
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_0880DBC0:
    { const bool branch_taken = static_cast<std::int32_t>(ctx.gpr[17]) <= 0;
    ctx.set_gpr(2, 2225u << 16u);
      if (branch_taken) {
          goto L_0880DC70;
      }
      goto L_0880DBC8;
    }
L_0880DBC8:
    ctx.set_gpr(3, 2225u << 16u);
    ctx.fpr[0] = std::bit_cast<float>(rt.memory().aot_load32(ctx.gpr[3] + static_cast<std::uint32_t>(-224)));
    ctx.fpr[1] = std::bit_cast<float>(rt.memory().aot_load32(ctx.gpr[2] + static_cast<std::uint32_t>(-228)));
    ctx.set_gpr(31, rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(8)));
    ctx.set_gpr(17, rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(4)));
    ctx.fpr[5] = ctx.fpr[1] + ctx.fpr[0];
    ctx.set_gpr(16, rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(0)));
    ctx.set_gpr(29, ctx.gpr[29] + static_cast<std::uint32_t>(16));
    jump_target = ctx.gpr[31];
    ctx.set_fpr_bits(0, ctx.fpr_bits(5));
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_0880DBF0:
    ctx.fpr[0] = std::bit_cast<float>(rt.memory().aot_load32(ctx.gpr[2] + static_cast<std::uint32_t>(-220)));
    ctx.set_gpr(2, 2225u << 16u);
    ctx.fpr[1] = std::bit_cast<float>(rt.memory().aot_load32(ctx.gpr[2] + static_cast<std::uint32_t>(-216)));
    ctx.fpr[0] = ctx.fpr[12] + ctx.fpr[0];
    ctx.set_fpu_condition((ctx.fpr[1] < ctx.fpr[0]));
    // nop
    { const bool branch_taken = !ctx.fpu_condition();
    ctx.set_gpr(31, rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(8)));
      if (branch_taken) {
          goto L_0880DAAC;
      }
      goto L_0880DC10;
    }
L_0880DC10:
    ctx.set_fpr_bits(0, ctx.fpr_bits(5));
    ctx.set_gpr(17, rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(4)));
    ctx.set_gpr(16, rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(0)));
    jump_target = ctx.gpr[31];
    ctx.set_gpr(29, ctx.gpr[29] + static_cast<std::uint32_t>(16));
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_0880DC24:
    ctx.set_gpr(31, 0x0880DC2Cu);
    // nop
    goto L_0880DEE0;
L_0880DC2C:
    ctx.set_gpr(2, 16279u << 16u);
    ctx.set_gpr(2, ctx.gpr[2] | 65535u);
    ctx.set_gpr(2, static_cast<std::int32_t>(ctx.gpr[2]) < static_cast<std::int32_t>(ctx.gpr[16]) ? 1u : 0u);
    { const bool branch_taken = ctx.gpr[2] != 0u;
    ctx.set_fpr_bits(4, ctx.fpr_bits(0));
      if (branch_taken) {
          goto L_0880DC98;
      }
      goto L_0880DC40;
    }
L_0880DC40:
    ctx.set_gpr(2, 16175u << 16u);
    ctx.set_gpr(2, ctx.gpr[2] | 65535u);
    ctx.set_gpr(2, static_cast<std::int32_t>(ctx.gpr[2]) < static_cast<std::int32_t>(ctx.gpr[16]) ? 1u : 0u);
    if (ctx.gpr[2] == 0u) {
    ctx.fpr[1] = ctx.fpr[0] + ctx.fpr[0];
        goto L_0880DCE4;
    }
    goto L_0880DC54;
L_0880DC54:
    ctx.set_gpr(2, 2225u << 16u);
    ctx.fpr[0] = std::bit_cast<float>(rt.memory().aot_load32(ctx.gpr[2] + static_cast<std::uint32_t>(-216)));
    ctx.set_gpr(3, 0u + static_cast<std::uint32_t>(1));
    ctx.fpr[1] = ctx.fpr[4] + ctx.fpr[0];
    ctx.fpr[0] = ctx.fpr[4] - ctx.fpr[0];
    ctx.fpr[5] = ctx.fpr[0] / ctx.fpr[1];
    goto L_0880DAB0;
L_0880DC70:
    ctx.fpr[0] = std::bit_cast<float>(rt.memory().aot_load32(ctx.gpr[2] + static_cast<std::uint32_t>(-228)));
    ctx.set_gpr(2, 2225u << 16u);
    ctx.fpr[1] = std::bit_cast<float>(rt.memory().aot_load32(ctx.gpr[2] + static_cast<std::uint32_t>(-224)));
    ctx.set_fpr_bits(0, ctx.fpr_bits(0) ^ 0x80000000u);
    ctx.fpr[5] = ctx.fpr[0] - ctx.fpr[1];
    goto L_0880DA70;
L_0880DC88:
    ctx.fpr[0] = ctx.fpr[0] + ctx.fpr[1];
    { const float fs = ctx.fpr[5]; const float ft = ctx.fpr[0]; if ((std::isinf(fs) && ft == 0.0f) || (std::isinf(ft) && fs == 0.0f)) ctx.set_fpr_bits(0, 0x7FC00000u); else ctx.fpr[0] = fs * ft; }
    ctx.fpr[5] = ctx.fpr[5] - ctx.fpr[0];
    goto L_0880DA70;
L_0880DC98:
    ctx.set_gpr(2, 16411u << 16u);
    ctx.set_gpr(2, ctx.gpr[2] | 65535u);
    ctx.set_gpr(2, static_cast<std::int32_t>(ctx.gpr[2]) < static_cast<std::int32_t>(ctx.gpr[16]) ? 1u : 0u);
    { const bool branch_taken = ctx.gpr[2] == 0u;
    ctx.set_gpr(2, 2225u << 16u);
      if (branch_taken) {
          goto L_0880DCC0;
      }
      goto L_0880DCAC;
    }
L_0880DCAC:
    ctx.set_gpr(2, 2225u << 16u);
    ctx.fpr[0] = std::bit_cast<float>(rt.memory().aot_load32(ctx.gpr[2] + static_cast<std::uint32_t>(-204)));
    ctx.set_gpr(3, 0u + static_cast<std::uint32_t>(3));
    ctx.fpr[5] = ctx.fpr[0] / ctx.fpr[4];
    goto L_0880DAB0;
L_0880DCC0:
    ctx.fpr[1] = std::bit_cast<float>(rt.memory().aot_load32(ctx.gpr[2] + static_cast<std::uint32_t>(-208)));
    ctx.set_gpr(2, 2225u << 16u);
    ctx.set_gpr(3, 0u + static_cast<std::uint32_t>(2));
    { const float fs = ctx.fpr[0]; const float ft = ctx.fpr[1]; if ((std::isinf(fs) && ft == 0.0f) || (std::isinf(ft) && fs == 0.0f)) ctx.set_fpr_bits(2, 0x7FC00000u); else ctx.fpr[2] = fs * ft; }
    ctx.fpr[1] = ctx.fpr[0] - ctx.fpr[1];
    ctx.fpr[0] = std::bit_cast<float>(rt.memory().aot_load32(ctx.gpr[2] + static_cast<std::uint32_t>(-216)));
    ctx.fpr[2] = ctx.fpr[2] + ctx.fpr[0];
    ctx.fpr[5] = ctx.fpr[1] / ctx.fpr[2];
    goto L_0880DAB0;
L_0880DCE4:
    ctx.set_gpr(2, 2225u << 16u);
    ctx.fpr[0] = std::bit_cast<float>(rt.memory().aot_load32(ctx.gpr[2] + static_cast<std::uint32_t>(-216)));
    ctx.set_gpr(2, 2225u << 16u);
    ctx.set_gpr(3, 0u + 0u);
    ctx.fpr[1] = ctx.fpr[1] - ctx.fpr[0];
    ctx.fpr[0] = std::bit_cast<float>(rt.memory().aot_load32(ctx.gpr[2] + static_cast<std::uint32_t>(-212)));
    ctx.fpr[0] = ctx.fpr[4] + ctx.fpr[0];
    ctx.fpr[5] = ctx.fpr[1] / ctx.fpr[0];
    goto L_0880DAB0;
L_0880DD08:
    ctx.set_gpr(5, std::bit_cast<std::uint32_t>(ctx.fpr[12]));
    ctx.set_gpr(5, (ctx.gpr[5] & ~0x80000000u) | ((0u & 0x00000001u) << 31u));
    ctx.set_gpr(2, ctx.gpr[5] >> 23u);
    ctx.set_gpr(4, ctx.gpr[2] + static_cast<std::uint32_t>(-127));
    ctx.set_gpr(3, static_cast<std::int32_t>(ctx.gpr[4]) < 23 ? 1u : 0u);
    { const bool branch_taken = ctx.gpr[3] == 0u;
    ctx.set_gpr(6, std::bit_cast<std::uint32_t>(ctx.fpr[12]));
      if (branch_taken) {
          goto L_0880DD80;
      }
      goto L_0880DD24;
    }
L_0880DD24:
    { const bool branch_taken = static_cast<std::int32_t>(ctx.gpr[4]) < 0;
    ctx.set_gpr(2, 127u << 16u);
      if (branch_taken) {
          goto L_0880DDA0;
      }
      goto L_0880DD2C;
    }
L_0880DD2C:
    ctx.set_gpr(2, ctx.gpr[2] | 65535u);
    ctx.set_gpr(5, static_cast<std::uint32_t>(static_cast<std::int32_t>(ctx.gpr[2]) >> (ctx.gpr[4] & 31u)));
    ctx.set_gpr(3, ctx.gpr[6] & ctx.gpr[5]);
    { const bool branch_taken = ctx.gpr[3] == 0u;
    ctx.set_gpr(2, 2225u << 16u);
      if (branch_taken) {
          goto L_0880DD78;
      }
      goto L_0880DD40;
    }
L_0880DD40:
    ctx.fpr[0] = std::bit_cast<float>(rt.memory().aot_load32(ctx.gpr[2] + static_cast<std::uint32_t>(-156)));
    ctx.fpr[1] = std::bit_cast<float>(0u);
    ctx.fpr[0] = ctx.fpr[12] + ctx.fpr[0];
    ctx.set_fpu_condition((ctx.fpr[1] < ctx.fpr[0]));
    // nop
    { const bool branch_taken = !ctx.fpu_condition();
    ctx.fpr[12] = std::bit_cast<float>(ctx.gpr[6]);
      if (branch_taken) {
          goto L_0880DD78;
      }
      goto L_0880DD5C;
    }
L_0880DD5C:
    { const bool branch_taken = static_cast<std::int32_t>(ctx.gpr[6]) <= 0;
    ctx.set_gpr(2, 128u << 16u);
      if (branch_taken) {
          goto L_0880DD6C;
      }
      goto L_0880DD64;
    }
L_0880DD64:
    ctx.set_gpr(2, static_cast<std::uint32_t>(static_cast<std::int32_t>(ctx.gpr[2]) >> (ctx.gpr[4] & 31u)));
    ctx.set_gpr(6, ctx.gpr[6] + ctx.gpr[2]);
    goto L_0880DD6C;
L_0880DD6C:
    ctx.set_gpr(2, ~(0u | ctx.gpr[5]));
    ctx.set_gpr(6, ctx.gpr[6] & ctx.gpr[2]);
    ctx.fpr[12] = std::bit_cast<float>(ctx.gpr[6]);
    goto L_0880DD78;
L_0880DD78:
    jump_target = ctx.gpr[31];
    ctx.set_fpr_bits(0, ctx.fpr_bits(12));
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_0880DD80:
    ctx.set_gpr(2, 32639u << 16u);
    ctx.set_gpr(2, ctx.gpr[2] | 65535u);
    ctx.set_gpr(2, ctx.gpr[2] < ctx.gpr[5] ? 1u : 0u);
    { const bool branch_taken = ctx.gpr[2] == 0u;
    // nop
      if (branch_taken) {
          goto L_0880DD78;
      }
      goto L_0880DD94;
    }
L_0880DD94:
    ctx.fpr[12] = ctx.fpr[12] + ctx.fpr[12];
    jump_target = ctx.gpr[31];
    ctx.set_fpr_bits(0, ctx.fpr_bits(12));
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_0880DDA0:
    ctx.set_gpr(2, 2225u << 16u);
    ctx.fpr[0] = std::bit_cast<float>(rt.memory().aot_load32(ctx.gpr[2] + static_cast<std::uint32_t>(-156)));
    ctx.fpr[1] = std::bit_cast<float>(0u);
    ctx.fpr[0] = ctx.fpr[12] + ctx.fpr[0];
    ctx.set_fpu_condition((ctx.fpr[1] < ctx.fpr[0]));
    // nop
    if (!ctx.fpu_condition()) {
    ctx.fpr[12] = std::bit_cast<float>(ctx.gpr[6]);
        goto L_0880DD78;
    }
    goto L_0880DDC0;
L_0880DDC0:
    if (static_cast<std::int32_t>(ctx.gpr[6]) < 0) {
    ctx.set_gpr(6, 32768u << 16u);
        goto L_0880DDDC;
    }
    goto L_0880DDC8;
L_0880DDC8:
    if (ctx.gpr[5] == 0u) {
    ctx.fpr[12] = std::bit_cast<float>(ctx.gpr[6]);
        goto L_0880DD78;
    }
    goto L_0880DDD0;
L_0880DDD0:
    ctx.set_gpr(6, 16256u << 16u);
    ctx.fpr[12] = std::bit_cast<float>(ctx.gpr[6]);
    goto L_0880DD78;
L_0880DDDC:
    ctx.fpr[12] = std::bit_cast<float>(ctx.gpr[6]);
    goto L_0880DD78;
L_0880DDE4:
    ctx.set_gpr(2, std::bit_cast<std::uint32_t>(ctx.fpr[12]));
    ctx.set_gpr(3, std::bit_cast<std::uint32_t>(ctx.fpr[13]));
    ctx.set_gpr(2, (ctx.gpr[2] & ~0x80000000u) | ((0u & 0x00000001u) << 31u));
    ctx.set_gpr(3, (ctx.gpr[3] & ~0x7FFFFFFFu) | ((0u & 0x7FFFFFFFu) << 0u));
    ctx.set_gpr(2, ctx.gpr[2] | ctx.gpr[3]);
    jump_target = ctx.gpr[31];
    ctx.fpr[0] = std::bit_cast<float>(ctx.gpr[2]);
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_0880DE00:
    ctx.set_gpr(3, std::bit_cast<std::uint32_t>(ctx.fpr[12]));
    ctx.set_gpr(2, 16201u << 16u);
    ctx.set_gpr(2, ctx.gpr[2] | 4056u);
    ctx.set_gpr(3, (ctx.gpr[3] & ~0x80000000u) | ((0u & 0x00000001u) << 31u));
    ctx.set_gpr(29, ctx.gpr[29] + static_cast<std::uint32_t>(-32));
    ctx.set_gpr(2, static_cast<std::int32_t>(ctx.gpr[2]) < static_cast<std::int32_t>(ctx.gpr[3]) ? 1u : 0u);
    { const bool branch_taken = ctx.gpr[2] == 0u;
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(16), ctx.gpr[31]);
      if (branch_taken) {
          goto L_0880DE80;
      }
      goto L_0880DE20;
    }
L_0880DE20:
    ctx.set_gpr(2, 32639u << 16u);
    ctx.set_gpr(2, ctx.gpr[2] | 65535u);
    ctx.set_gpr(2, static_cast<std::int32_t>(ctx.gpr[2]) < static_cast<std::int32_t>(ctx.gpr[3]) ? 1u : 0u);
    { const bool branch_taken = ctx.gpr[2] == 0u;
    ctx.set_gpr(31, rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(16)));
      if (branch_taken) {
          goto L_0880DE40;
      }
      goto L_0880DE34;
    }
L_0880DE34:
    ctx.fpr[0] = ctx.fpr[12] - ctx.fpr[12];
    jump_target = ctx.gpr[31];
    ctx.set_gpr(29, ctx.gpr[29] + static_cast<std::uint32_t>(32));
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_0880DE40:
    ctx.set_gpr(31, 0x0880DE48u);
    ctx.set_gpr(4, ctx.gpr[29] + 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0001_entry, 1u, 392u, 0x0880A260u>(ctx, &aot_mem) && ctx.pc == 0x0880DE48u) goto L_0880DE48;
    return;
L_0880DE48:
    ctx.set_gpr(3, ctx.gpr[2] & 3u);
    ctx.set_gpr(2, 0u + static_cast<std::uint32_t>(1));
    { const bool branch_taken = ctx.gpr[3] == ctx.gpr[2];
    ctx.set_gpr(2, 0u + static_cast<std::uint32_t>(2));
      if (branch_taken) {
          goto L_0880DE94;
      }
      goto L_0880DE58;
    }
L_0880DE58:
    { const bool branch_taken = ctx.gpr[3] == ctx.gpr[2];
    ctx.fpr[12] = std::bit_cast<float>(rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(0)));
      if (branch_taken) {
          goto L_0880DEC8;
      }
      goto L_0880DE60;
    }
L_0880DE60:
    { const bool branch_taken = ctx.gpr[3] != 0u;
    ctx.fpr[13] = std::bit_cast<float>(rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(4)));
      if (branch_taken) {
          goto L_0880DEB4;
      }
      goto L_0880DE68;
    }
L_0880DE68:
    ctx.fpr[12] = std::bit_cast<float>(rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(0)));
    ctx.set_gpr(31, 0x0880DE74u);
    ctx.fpr[13] = std::bit_cast<float>(rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(4)));
    if (rt.invoke_chained_direct<&recomp_unit_0001_entry, 1u, 672u, 0x0880BB34u>(ctx, &aot_mem) && ctx.pc == 0x0880DE74u) goto L_0880DE74;
    return;
L_0880DE74:
    ctx.set_gpr(31, rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(16)));
    jump_target = ctx.gpr[31];
    ctx.set_gpr(29, ctx.gpr[29] + static_cast<std::uint32_t>(32));
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_0880DE80:
    ctx.set_gpr(31, 0x0880DE88u);
    ctx.fpr[13] = std::bit_cast<float>(0u);
    if (rt.invoke_chained_direct<&recomp_unit_0001_entry, 1u, 672u, 0x0880BB34u>(ctx, &aot_mem) && ctx.pc == 0x0880DE88u) goto L_0880DE88;
    return;
L_0880DE88:
    ctx.set_gpr(31, rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(16)));
    jump_target = ctx.gpr[31];
    ctx.set_gpr(29, ctx.gpr[29] + static_cast<std::uint32_t>(32));
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_0880DE94:
    ctx.fpr[12] = std::bit_cast<float>(rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(0)));
    ctx.fpr[13] = std::bit_cast<float>(rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(4)));
    ctx.set_gpr(31, 0x0880DEA4u);
    ctx.set_gpr(4, 0u + static_cast<std::uint32_t>(1));
    goto L_0880C4C8;
L_0880DEA4:
    ctx.set_fpr_bits(0, ctx.fpr_bits(0) ^ 0x80000000u);
    ctx.set_gpr(31, rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(16)));
    jump_target = ctx.gpr[31];
    ctx.set_gpr(29, ctx.gpr[29] + static_cast<std::uint32_t>(32));
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_0880DEB4:
    ctx.set_gpr(31, 0x0880DEBCu);
    ctx.set_gpr(4, 0u + static_cast<std::uint32_t>(1));
    goto L_0880C4C8;
L_0880DEBC:
    ctx.set_gpr(31, rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(16)));
    jump_target = ctx.gpr[31];
    ctx.set_gpr(29, ctx.gpr[29] + static_cast<std::uint32_t>(32));
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_0880DEC8:
    ctx.set_gpr(31, 0x0880DED0u);
    ctx.fpr[13] = std::bit_cast<float>(rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(4)));
    if (rt.invoke_chained_direct<&recomp_unit_0001_entry, 1u, 672u, 0x0880BB34u>(ctx, &aot_mem) && ctx.pc == 0x0880DED0u) goto L_0880DED0;
    return;
L_0880DED0:
    ctx.set_fpr_bits(0, ctx.fpr_bits(0) ^ 0x80000000u);
    ctx.set_gpr(31, rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(16)));
    jump_target = ctx.gpr[31];
    ctx.set_gpr(29, ctx.gpr[29] + static_cast<std::uint32_t>(32));
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_0880DEE0:
    ctx.set_gpr(2, std::bit_cast<std::uint32_t>(ctx.fpr[12]));
    ctx.set_gpr(2, (ctx.gpr[2] & ~0x80000000u) | ((0u & 0x00000001u) << 31u));
    jump_target = ctx.gpr[31];
    ctx.fpr[0] = std::bit_cast<float>(ctx.gpr[2]);
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_0880DEF0:
    ctx.set_gpr(5, std::bit_cast<std::uint32_t>(ctx.fpr[12]));
    ctx.set_gpr(5, (ctx.gpr[5] & ~0x80000000u) | ((0u & 0x00000001u) << 31u));
    ctx.set_gpr(2, ctx.gpr[5] >> 23u);
    ctx.set_gpr(4, ctx.gpr[2] + static_cast<std::uint32_t>(-127));
    ctx.set_gpr(3, static_cast<std::int32_t>(ctx.gpr[4]) < 23 ? 1u : 0u);
    { const bool branch_taken = ctx.gpr[3] == 0u;
    ctx.set_gpr(6, std::bit_cast<std::uint32_t>(ctx.fpr[12]));
      if (branch_taken) {
          goto L_0880DF5C;
      }
      goto L_0880DF0C;
    }
L_0880DF0C:
    { const bool branch_taken = static_cast<std::int32_t>(ctx.gpr[4]) < 0;
    ctx.set_gpr(2, 127u << 16u);
      if (branch_taken) {
          goto L_0880DF7C;
      }
      goto L_0880DF14;
    }
L_0880DF14:
    ctx.set_gpr(2, ctx.gpr[2] | 65535u);
    ctx.set_gpr(5, static_cast<std::uint32_t>(static_cast<std::int32_t>(ctx.gpr[2]) >> (ctx.gpr[4] & 31u)));
    ctx.set_gpr(3, ctx.gpr[6] & ctx.gpr[5]);
    { const bool branch_taken = ctx.gpr[3] == 0u;
    ctx.set_gpr(2, 2225u << 16u);
      if (branch_taken) {
          goto L_0880DF54;
      }
      goto L_0880DF28;
    }
L_0880DF28:
    ctx.fpr[0] = std::bit_cast<float>(rt.memory().aot_load32(ctx.gpr[2] + static_cast<std::uint32_t>(-152)));
    ctx.fpr[1] = std::bit_cast<float>(0u);
    ctx.fpr[0] = ctx.fpr[12] + ctx.fpr[0];
    ctx.set_fpu_condition((ctx.fpr[1] < ctx.fpr[0]));
    // nop
    { const bool branch_taken = !ctx.fpu_condition();
    ctx.fpr[12] = std::bit_cast<float>(ctx.gpr[6]);
      if (branch_taken) {
          goto L_0880DF54;
      }
      goto L_0880DF44;
    }
L_0880DF44:
    { const bool branch_taken = static_cast<std::int32_t>(ctx.gpr[6]) < 0;
    ctx.set_gpr(2, ~(0u | ctx.gpr[5]));
      if (branch_taken) {
          goto L_0880DFB0;
      }
      goto L_0880DF4C;
    }
L_0880DF4C:
    ctx.set_gpr(6, ctx.gpr[6] & ctx.gpr[2]);
    goto L_0880DF50;
L_0880DF50:
    ctx.fpr[12] = std::bit_cast<float>(ctx.gpr[6]);
    goto L_0880DF54;
L_0880DF54:
    jump_target = ctx.gpr[31];
    ctx.set_fpr_bits(0, ctx.fpr_bits(12));
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_0880DF5C:
    ctx.set_gpr(2, 32639u << 16u);
    ctx.set_gpr(2, ctx.gpr[2] | 65535u);
    ctx.set_gpr(2, ctx.gpr[2] < ctx.gpr[5] ? 1u : 0u);
    { const bool branch_taken = ctx.gpr[2] == 0u;
    // nop
      if (branch_taken) {
          goto L_0880DF54;
      }
      goto L_0880DF70;
    }
L_0880DF70:
    ctx.fpr[12] = ctx.fpr[12] + ctx.fpr[12];
    jump_target = ctx.gpr[31];
    ctx.set_fpr_bits(0, ctx.fpr_bits(12));
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_0880DF7C:
    ctx.set_gpr(2, 2225u << 16u);
    ctx.fpr[0] = std::bit_cast<float>(rt.memory().aot_load32(ctx.gpr[2] + static_cast<std::uint32_t>(-152)));
    ctx.fpr[1] = std::bit_cast<float>(0u);
    ctx.fpr[0] = ctx.fpr[12] + ctx.fpr[0];
    ctx.set_fpu_condition((ctx.fpr[1] < ctx.fpr[0]));
    // nop
    { const bool branch_taken = !ctx.fpu_condition();
    ctx.fpr[12] = std::bit_cast<float>(ctx.gpr[6]);
      if (branch_taken) {
          goto L_0880DF54;
      }
      goto L_0880DF9C;
    }
L_0880DF9C:
    { const bool branch_taken = static_cast<std::int32_t>(ctx.gpr[6]) < 0;
    // nop
      if (branch_taken) {
          goto L_0880DFC8;
      }
      goto L_0880DFA4;
    }
L_0880DFA4:
    ctx.set_gpr(6, 0u + 0u);
    ctx.fpr[12] = std::bit_cast<float>(ctx.gpr[6]);
    goto L_0880DF54;
L_0880DFB0:
    ctx.set_gpr(2, 128u << 16u);
    ctx.set_gpr(2, static_cast<std::uint32_t>(static_cast<std::int32_t>(ctx.gpr[2]) >> (ctx.gpr[4] & 31u)));
    ctx.set_gpr(6, ctx.gpr[6] + ctx.gpr[2]);
    ctx.set_gpr(2, ~(0u | ctx.gpr[5]));
    ctx.set_gpr(6, ctx.gpr[6] & ctx.gpr[2]);
    goto L_0880DF50;
L_0880DFC8:
    if (ctx.gpr[5] == 0u) {
    ctx.fpr[12] = std::bit_cast<float>(ctx.gpr[6]);
        goto L_0880DF54;
    }
    goto L_0880DFD0;
L_0880DFD0:
    ctx.set_gpr(6, 49024u << 16u);
    ctx.fpr[12] = std::bit_cast<float>(ctx.gpr[6]);
    goto L_0880DF54;
L_0880DFDC:
    ctx.set_gpr(2, std::bit_cast<std::uint32_t>(ctx.fpr[12]));
    ctx.set_gpr(3, 32640u << 16u);
    ctx.set_gpr(2, (ctx.gpr[2] & ~0x80000000u) | ((0u & 0x00000001u) << 31u));
    jump_target = ctx.gpr[31];
    ctx.set_gpr(2, static_cast<std::int32_t>(ctx.gpr[3]) < static_cast<std::int32_t>(ctx.gpr[2]) ? 1u : 0u);
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_0880DFF0:
    ctx.set_gpr(3, std::bit_cast<std::uint32_t>(ctx.fpr[12]));
    ctx.set_gpr(29, ctx.gpr[29] + static_cast<std::uint32_t>(-32));
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(0), ctx.gpr[31]);
    ctx.set_gpr(3, (ctx.gpr[3] & ~0x80000000u) | ((0u & 0x00000001u) << 31u));
    ctx.set_gpr(5, std::bit_cast<std::uint32_t>(ctx.fpr[12]));
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(16), std::bit_cast<std::uint32_t>(ctx.fpr[20]));
    { const bool branch_taken = ctx.gpr[3] == 0u;
    ctx.set_gpr(6, ctx.gpr[3] >> 23u);
      if (branch_taken) {
          goto L_0880E06C;
      }
      goto L_0880E010;
    }
L_0880E010:
    ctx.set_gpr(2, 32639u << 16u);
    ctx.set_gpr(2, ctx.gpr[2] | 65535u);
    ctx.set_gpr(2, ctx.gpr[2] < ctx.gpr[3] ? 1u : 0u);
    if (ctx.gpr[2] != 0u) {
    ctx.fpr[12] = ctx.fpr[12] + ctx.fpr[12];
        goto L_0880E080;
    }
    goto L_0880E024;
L_0880E024:
    ctx.set_gpr(2, 127u << 16u);
    ctx.set_gpr(2, ctx.gpr[2] | 65535u);
    ctx.set_gpr(2, ctx.gpr[2] < ctx.gpr[3] ? 1u : 0u);
    { const bool branch_taken = ctx.gpr[2] != 0u;
    ctx.set_gpr(3, ctx.gpr[6] + ctx.gpr[4]);
      if (branch_taken) {
          goto L_0880E098;
      }
      goto L_0880E038;
    }
L_0880E038:
    ctx.set_gpr(2, 2225u << 16u);
    ctx.fpr[0] = std::bit_cast<float>(rt.memory().aot_load32(ctx.gpr[2] + static_cast<std::uint32_t>(-148)));
    ctx.set_gpr(3, 65535u << 16u);
    ctx.set_gpr(3, ctx.gpr[3] | 15536u);
    { const float fs = ctx.fpr[12]; const float ft = ctx.fpr[0]; if ((std::isinf(fs) && ft == 0.0f) || (std::isinf(ft) && fs == 0.0f)) ctx.set_fpr_bits(12, 0x7FC00000u); else ctx.fpr[12] = fs * ft; }
    ctx.set_gpr(3, static_cast<std::int32_t>(ctx.gpr[4]) < static_cast<std::int32_t>(ctx.gpr[3]) ? 1u : 0u);
    ctx.set_gpr(5, std::bit_cast<std::uint32_t>(ctx.fpr[12]));
    ctx.set_gpr(2, (ctx.gpr[5] >> 23u) & 0x000000FFu);
    { const bool branch_taken = ctx.gpr[3] == 0u;
    ctx.set_gpr(6, ctx.gpr[2] + static_cast<std::uint32_t>(-25));
      if (branch_taken) {
          goto L_0880E094;
      }
      goto L_0880E060;
    }
L_0880E060:
    ctx.set_gpr(2, 2225u << 16u);
    ctx.fpr[0] = std::bit_cast<float>(rt.memory().aot_load32(ctx.gpr[2] + static_cast<std::uint32_t>(-144)));
    { const float fs = ctx.fpr[12]; const float ft = ctx.fpr[0]; if ((std::isinf(fs) && ft == 0.0f) || (std::isinf(ft) && fs == 0.0f)) ctx.set_fpr_bits(12, 0x7FC00000u); else ctx.fpr[12] = fs * ft; }
    goto L_0880E06C;
L_0880E06C:
    ctx.set_fpr_bits(0, ctx.fpr_bits(12));
    ctx.set_gpr(31, rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(0)));
    ctx.fpr[20] = std::bit_cast<float>(rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(16)));
    jump_target = ctx.gpr[31];
    ctx.set_gpr(29, ctx.gpr[29] + static_cast<std::uint32_t>(32));
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_0880E080:
    ctx.set_gpr(31, rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(0)));
    ctx.fpr[20] = std::bit_cast<float>(rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(16)));
    ctx.set_gpr(29, ctx.gpr[29] + static_cast<std::uint32_t>(32));
    jump_target = ctx.gpr[31];
    ctx.set_fpr_bits(0, ctx.fpr_bits(12));
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_0880E094:
    ctx.set_gpr(3, ctx.gpr[6] + ctx.gpr[4]);
    goto L_0880E098;
L_0880E098:
    ctx.set_gpr(2, static_cast<std::int32_t>(ctx.gpr[3]) < 255 ? 1u : 0u);
    { const bool branch_taken = ctx.gpr[2] == 0u;
    ctx.set_gpr(2, 2225u << 16u);
      if (branch_taken) {
          goto L_0880E0CC;
      }
      goto L_0880E0A4;
    }
L_0880E0A4:
    { const bool branch_taken = static_cast<std::int32_t>(ctx.gpr[3]) <= 0;
    ctx.set_gpr(2, ctx.gpr[3] << 23u);
      if (branch_taken) {
          goto L_0880E0E4;
      }
      goto L_0880E0AC;
    }
L_0880E0AC:
    ctx.set_gpr(5, (ctx.gpr[5] & ~0x7F800000u) | ((0u & 0x000000FFu) << 23u));
    ctx.set_gpr(5, ctx.gpr[5] | ctx.gpr[2]);
    ctx.fpr[12] = std::bit_cast<float>(ctx.gpr[5]);
    ctx.set_gpr(31, rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(0)));
    ctx.fpr[20] = std::bit_cast<float>(rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(16)));
    ctx.set_fpr_bits(0, ctx.fpr_bits(12));
    jump_target = ctx.gpr[31];
    ctx.set_gpr(29, ctx.gpr[29] + static_cast<std::uint32_t>(32));
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_0880E0CC:
    ctx.fpr[20] = std::bit_cast<float>(rt.memory().aot_load32(ctx.gpr[2] + static_cast<std::uint32_t>(-140)));
    ctx.set_fpr_bits(13, ctx.fpr_bits(12));
    ctx.set_gpr(31, 0x0880E0DCu);
    ctx.set_fpr_bits(12, ctx.fpr_bits(20));
    goto L_0880DDE4;
L_0880E0DC:
    { const float fs = ctx.fpr[0]; const float ft = ctx.fpr[20]; if ((std::isinf(fs) && ft == 0.0f) || (std::isinf(ft) && fs == 0.0f)) ctx.set_fpr_bits(12, 0x7FC00000u); else ctx.fpr[12] = fs * ft; }
    goto L_0880E06C;
L_0880E0E4:
    ctx.set_gpr(2, static_cast<std::int32_t>(ctx.gpr[3]) < -22 ? 1u : 0u);
    { const bool branch_taken = ctx.gpr[2] == 0u;
    ctx.set_gpr(2, ctx.gpr[3] + static_cast<std::uint32_t>(25));
      if (branch_taken) {
          goto L_0880E11C;
      }
      goto L_0880E0F0;
    }
L_0880E0F0:
    ctx.set_gpr(2, 0u | 50000u);
    ctx.set_gpr(2, static_cast<std::int32_t>(ctx.gpr[2]) < static_cast<std::int32_t>(ctx.gpr[4]) ? 1u : 0u);
    { const bool branch_taken = ctx.gpr[2] != 0u;
    ctx.set_gpr(2, 2225u << 16u);
      if (branch_taken) {
          goto L_0880E0CC;
      }
      goto L_0880E100;
    }
L_0880E100:
    ctx.set_gpr(2, 2225u << 16u);
    ctx.fpr[20] = std::bit_cast<float>(rt.memory().aot_load32(ctx.gpr[2] + static_cast<std::uint32_t>(-144)));
    ctx.set_fpr_bits(13, ctx.fpr_bits(12));
    ctx.set_gpr(31, 0x0880E114u);
    ctx.set_fpr_bits(12, ctx.fpr_bits(20));
    goto L_0880DDE4;
L_0880E114:
    { const float fs = ctx.fpr[0]; const float ft = ctx.fpr[20]; if ((std::isinf(fs) && ft == 0.0f) || (std::isinf(ft) && fs == 0.0f)) ctx.set_fpr_bits(12, 0x7FC00000u); else ctx.fpr[12] = fs * ft; }
    goto L_0880E06C;
L_0880E11C:
    ctx.set_gpr(5, (ctx.gpr[5] & ~0x7F800000u) | ((0u & 0x000000FFu) << 23u));
    ctx.set_gpr(2, ctx.gpr[2] << 23u);
    ctx.set_gpr(5, ctx.gpr[5] | ctx.gpr[2]);
    ctx.set_gpr(3, 2225u << 16u);
    ctx.fpr[1] = std::bit_cast<float>(ctx.gpr[5]);
    ctx.fpr[0] = std::bit_cast<float>(rt.memory().aot_load32(ctx.gpr[3] + static_cast<std::uint32_t>(-136)));
    { const float fs = ctx.fpr[1]; const float ft = ctx.fpr[0]; if ((std::isinf(fs) && ft == 0.0f) || (std::isinf(ft) && fs == 0.0f)) ctx.set_fpr_bits(12, 0x7FC00000u); else ctx.fpr[12] = fs * ft; }
    goto L_0880E06C;
L_0880E13C:
    ctx.set_gpr(3, std::bit_cast<std::uint32_t>(ctx.fpr[12]));
    ctx.set_gpr(2, 16201u << 16u);
    ctx.set_gpr(2, ctx.gpr[2] | 4056u);
    ctx.set_gpr(3, (ctx.gpr[3] & ~0x80000000u) | ((0u & 0x00000001u) << 31u));
    ctx.set_gpr(29, ctx.gpr[29] + static_cast<std::uint32_t>(-32));
    ctx.set_gpr(2, static_cast<std::int32_t>(ctx.gpr[2]) < static_cast<std::int32_t>(ctx.gpr[3]) ? 1u : 0u);
    { const bool branch_taken = ctx.gpr[2] == 0u;
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(16), ctx.gpr[31]);
      if (branch_taken) {
          goto L_0880E1B8;
      }
      goto L_0880E15C;
    }
L_0880E15C:
    ctx.set_gpr(2, 32639u << 16u);
    ctx.set_gpr(2, ctx.gpr[2] | 65535u);
    ctx.set_gpr(2, static_cast<std::int32_t>(ctx.gpr[2]) < static_cast<std::int32_t>(ctx.gpr[3]) ? 1u : 0u);
    { const bool branch_taken = ctx.gpr[2] == 0u;
    ctx.set_gpr(31, rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(16)));
      if (branch_taken) {
          goto L_0880E17C;
      }
      goto L_0880E170;
    }
L_0880E170:
    ctx.fpr[0] = ctx.fpr[12] - ctx.fpr[12];
    jump_target = ctx.gpr[31];
    ctx.set_gpr(29, ctx.gpr[29] + static_cast<std::uint32_t>(32));
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_0880E17C:
    ctx.set_gpr(31, 0x0880E184u);
    ctx.set_gpr(4, ctx.gpr[29] + 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0001_entry, 1u, 392u, 0x0880A260u>(ctx, &aot_mem) && ctx.pc == 0x0880E184u) goto L_0880E184;
    return;
L_0880E184:
    ctx.set_gpr(3, ctx.gpr[2] & 3u);
    ctx.set_gpr(2, 0u + static_cast<std::uint32_t>(1));
    { const bool branch_taken = ctx.gpr[3] == ctx.gpr[2];
    ctx.set_gpr(2, 0u + static_cast<std::uint32_t>(2));
      if (branch_taken) {
          goto L_0880E1D0;
      }
      goto L_0880E194;
    }
L_0880E194:
    { const bool branch_taken = ctx.gpr[3] == ctx.gpr[2];
    ctx.fpr[12] = std::bit_cast<float>(rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(0)));
      if (branch_taken) {
          goto L_0880E200;
      }
      goto L_0880E19C;
    }
L_0880E19C:
    { const bool branch_taken = ctx.gpr[3] != 0u;
    ctx.fpr[13] = std::bit_cast<float>(rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(4)));
      if (branch_taken) {
          goto L_0880E1E8;
      }
      goto L_0880E1A4;
    }
L_0880E1A4:
    ctx.set_gpr(31, 0x0880E1ACu);
    ctx.set_gpr(4, 0u + static_cast<std::uint32_t>(1));
    goto L_0880C4C8;
L_0880E1AC:
    ctx.set_gpr(31, rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(16)));
    jump_target = ctx.gpr[31];
    ctx.set_gpr(29, ctx.gpr[29] + static_cast<std::uint32_t>(32));
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_0880E1B8:
    ctx.fpr[13] = std::bit_cast<float>(0u);
    ctx.set_gpr(31, 0x0880E1C4u);
    ctx.set_gpr(4, 0u + 0u);
    goto L_0880C4C8;
L_0880E1C4:
    ctx.set_gpr(31, rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(16)));
    jump_target = ctx.gpr[31];
    ctx.set_gpr(29, ctx.gpr[29] + static_cast<std::uint32_t>(32));
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_0880E1D0:
    ctx.fpr[12] = std::bit_cast<float>(rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(0)));
    ctx.set_gpr(31, 0x0880E1DCu);
    ctx.fpr[13] = std::bit_cast<float>(rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(4)));
    if (rt.invoke_chained_direct<&recomp_unit_0001_entry, 1u, 672u, 0x0880BB34u>(ctx, &aot_mem) && ctx.pc == 0x0880E1DCu) goto L_0880E1DC;
    return;
L_0880E1DC:
    ctx.set_gpr(31, rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(16)));
    jump_target = ctx.gpr[31];
    ctx.set_gpr(29, ctx.gpr[29] + static_cast<std::uint32_t>(32));
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_0880E1E8:
    ctx.set_gpr(31, 0x0880E1F0u);
    ctx.fpr[13] = std::bit_cast<float>(rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(4)));
    if (rt.invoke_chained_direct<&recomp_unit_0001_entry, 1u, 672u, 0x0880BB34u>(ctx, &aot_mem) && ctx.pc == 0x0880E1F0u) goto L_0880E1F0;
    return;
L_0880E1F0:
    ctx.set_fpr_bits(0, ctx.fpr_bits(0) ^ 0x80000000u);
    ctx.set_gpr(31, rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(16)));
    jump_target = ctx.gpr[31];
    ctx.set_gpr(29, ctx.gpr[29] + static_cast<std::uint32_t>(32));
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_0880E200:
    ctx.fpr[13] = std::bit_cast<float>(rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(4)));
    ctx.set_gpr(31, 0x0880E20Cu);
    ctx.set_gpr(4, 0u + static_cast<std::uint32_t>(1));
    goto L_0880C4C8;
L_0880E20C:
    ctx.set_fpr_bits(0, ctx.fpr_bits(0) ^ 0x80000000u);
    ctx.set_gpr(31, rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(16)));
    jump_target = ctx.gpr[31];
    ctx.set_gpr(29, ctx.gpr[29] + static_cast<std::uint32_t>(32));
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_0880E21C:
    ctx.set_gpr(5, std::bit_cast<std::uint32_t>(ctx.fpr[12]));
    ctx.set_gpr(2, 32639u << 16u);
    ctx.set_gpr(3, 16201u << 16u);
    ctx.set_gpr(5, (ctx.gpr[5] & ~0x80000000u) | ((0u & 0x00000001u) << 31u));
    ctx.set_gpr(2, ctx.gpr[2] | 65535u);
    ctx.set_gpr(3, ctx.gpr[3] | 4058u);
    ctx.set_gpr(29, ctx.gpr[29] + static_cast<std::uint32_t>(-32));
    ctx.set_gpr(2, static_cast<std::int32_t>(ctx.gpr[2]) < static_cast<std::int32_t>(ctx.gpr[5]) ? 1u : 0u);
    ctx.set_gpr(5, static_cast<std::int32_t>(ctx.gpr[3]) < static_cast<std::int32_t>(ctx.gpr[5]) ? 1u : 0u);
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(16), ctx.gpr[31]);
    ctx.fpr[13] = std::bit_cast<float>(0u);
    { const bool branch_taken = ctx.gpr[5] == 0u;
    ctx.set_gpr(4, 0u + static_cast<std::uint32_t>(1));
      if (branch_taken) {
          goto L_0880E288;
      }
      goto L_0880E250;
    }
L_0880E250:
    { const bool branch_taken = ctx.gpr[2] == 0u;
    ctx.set_gpr(4, ctx.gpr[29] + 0u);
      if (branch_taken) {
          goto L_0880E268;
      }
      goto L_0880E258;
    }
L_0880E258:
    ctx.fpr[0] = ctx.fpr[12] - ctx.fpr[12];
    ctx.set_gpr(31, rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(16)));
    jump_target = ctx.gpr[31];
    ctx.set_gpr(29, ctx.gpr[29] + static_cast<std::uint32_t>(32));
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_0880E268:
    ctx.set_gpr(31, 0x0880E270u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0001_entry, 1u, 392u, 0x0880A260u>(ctx, &aot_mem) && ctx.pc == 0x0880E270u) goto L_0880E270;
    return;
L_0880E270:
    ctx.set_gpr(2, ctx.gpr[2] & 1u);
    ctx.fpr[12] = std::bit_cast<float>(rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(0)));
    ctx.fpr[13] = std::bit_cast<float>(rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(4)));
    ctx.set_gpr(2, ctx.gpr[2] << 1u);
    ctx.set_gpr(4, 0u + static_cast<std::uint32_t>(1));
    ctx.set_gpr(4, ctx.gpr[4] - ctx.gpr[2]);
    goto L_0880E288;
L_0880E288:
    ctx.set_gpr(31, 0x0880E290u);
    // nop
    goto L_0880C5A0;
L_0880E290:
    ctx.set_gpr(31, rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(16)));
    jump_target = ctx.gpr[31];
    ctx.set_gpr(29, ctx.gpr[29] + static_cast<std::uint32_t>(32));
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_0880E29C:
    ctx.set_gpr(29, ctx.gpr[29] + static_cast<std::uint32_t>(-80));
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(72), ctx.gpr[22]);
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(68), ctx.gpr[21]);
    ctx.set_gpr(21, ctx.gpr[5] + 0u);
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(64), ctx.gpr[20]);
    ctx.set_gpr(20, ctx.gpr[4] + 0u);
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(60), ctx.gpr[19]);
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(56), ctx.gpr[18]);
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(52), ctx.gpr[17]);
    ctx.set_gpr(17, ctx.gpr[7] + 0u);
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(48), ctx.gpr[16]);
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(76), ctx.gpr[31]);
    ctx.set_gpr(31, 0x0880E2D4u);
    ctx.set_gpr(16, ctx.gpr[6] + 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0000_entry, 0u, 732u, 0x08806E50u>(ctx, &aot_mem) && ctx.pc == 0x0880E2D4u) goto L_0880E2D4;
    return;
L_0880E2D4:
    ctx.set_gpr(18, ctx.gpr[2] + 0u);
    ctx.set_gpr(2, 2225u << 16u);
    ctx.set_gpr(22, rt.memory().aot_load32(ctx.gpr[2] + static_cast<std::uint32_t>(-360)));
    ctx.set_gpr(19, ctx.gpr[3] + 0u);
    ctx.set_gpr(3, 0u + static_cast<std::uint32_t>(-1));
    { const bool branch_taken = ctx.gpr[22] == ctx.gpr[3];
    ctx.set_gpr(4, ctx.gpr[16] + 0u);
      if (branch_taken) {
          goto L_0880E300;
      }
      goto L_0880E2F0;
    }
L_0880E2F0:
    ctx.set_gpr(31, 0x0880E2F8u);
    ctx.set_gpr(5, ctx.gpr[17] + 0u);
    goto L_0880D4DC;
L_0880E2F8:
    { const bool branch_taken = ctx.gpr[2] == 0u;
    ctx.set_gpr(4, ctx.gpr[20] + 0u);
      if (branch_taken) {
          goto L_0880E330;
      }
      goto L_0880E300;
    }
L_0880E300:
    ctx.set_gpr(2, ctx.gpr[18] + 0u);
    ctx.set_gpr(3, ctx.gpr[19] + 0u);
    ctx.set_gpr(31, rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(76)));
    ctx.set_gpr(22, rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(72)));
    ctx.set_gpr(21, rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(68)));
    ctx.set_gpr(20, rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(64)));
    ctx.set_gpr(19, rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(60)));
    ctx.set_gpr(18, rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(56)));
    ctx.set_gpr(17, rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(52)));
    ctx.set_gpr(16, rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(48)));
    jump_target = ctx.gpr[31];
    ctx.set_gpr(29, ctx.gpr[29] + static_cast<std::uint32_t>(80));
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_0880E330:
    ctx.set_gpr(31, 0x0880E338u);
    ctx.set_gpr(5, ctx.gpr[21] + 0u);
    goto L_0880D4DC;
L_0880E338:
    { const bool branch_taken = ctx.gpr[2] != 0u;
    ctx.set_gpr(4, ctx.gpr[16] + 0u);
      if (branch_taken) {
          goto L_0880E300;
      }
      goto L_0880E340;
    }
L_0880E340:
    ctx.set_gpr(5, ctx.gpr[17] + 0u);
    ctx.set_gpr(6, 0u + 0u);
    ctx.set_gpr(31, 0x0880E350u);
    ctx.set_gpr(7, 0u + 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0006_entry, 6u, 899u, 0x0881FBBCu>(ctx, &aot_mem) && ctx.pc == 0x0880E350u) goto L_0880E350;
    return;
L_0880E350:
    { const bool branch_taken = ctx.gpr[2] != 0u;
    ctx.set_gpr(2, 2225u << 16u);
      if (branch_taken) {
          goto L_0880E300;
      }
      goto L_0880E358;
    }
L_0880E358:
    ctx.set_gpr(3, 0u + static_cast<std::uint32_t>(1));
    ctx.set_gpr(2, ctx.gpr[2] + static_cast<std::uint32_t>(-132));
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(0), ctx.gpr[3]);
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(4), ctx.gpr[2]);
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(16), ctx.gpr[16]);
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(20), ctx.gpr[17]);
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(8), ctx.gpr[20]);
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(12), ctx.gpr[21]);
    { const bool branch_taken = ctx.gpr[22] != 0u;
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(32), 0u);
      if (branch_taken) {
          goto L_0880E3DC;
      }
      goto L_0880E380;
    }
L_0880E380:
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(24), ctx.gpr[20]);
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(28), ctx.gpr[21]);
    goto L_0880E388;
L_0880E388:
    ctx.set_gpr(31, 0x0880E390u);
    ctx.set_gpr(4, ctx.gpr[29] + 0u);
    goto L_0880D504;
L_0880E390:
    { const bool branch_taken = ctx.gpr[2] == 0u;
    // nop
      if (branch_taken) {
          goto L_0880E400;
      }
      goto L_0880E398;
    }
L_0880E398:
    ctx.set_gpr(2, rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(32)));
    { const bool branch_taken = ctx.gpr[2] != 0u;
    // nop
      if (branch_taken) {
          goto L_0880E414;
      }
      goto L_0880E3A4;
    }
L_0880E3A4:
    ctx.set_gpr(18, rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(24)));
    ctx.set_gpr(19, rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(28)));
    goto L_0880E3AC;
L_0880E3AC:
    ctx.set_gpr(2, ctx.gpr[18] + 0u);
    ctx.set_gpr(3, ctx.gpr[19] + 0u);
    ctx.set_gpr(31, rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(76)));
    ctx.set_gpr(22, rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(72)));
    ctx.set_gpr(21, rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(68)));
    ctx.set_gpr(20, rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(64)));
    ctx.set_gpr(19, rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(60)));
    ctx.set_gpr(18, rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(56)));
    ctx.set_gpr(17, rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(52)));
    ctx.set_gpr(16, rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(48)));
    jump_target = ctx.gpr[31];
    ctx.set_gpr(29, ctx.gpr[29] + static_cast<std::uint32_t>(80));
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_0880E3DC:
    ctx.set_gpr(4, 0u + 0u);
    ctx.set_gpr(5, 0u + 0u);
    ctx.set_gpr(6, ctx.gpr[4] + 0u);
    ctx.set_gpr(31, 0x0880E3F0u);
    ctx.set_gpr(7, ctx.gpr[5] + 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0006_entry, 6u, 827u, 0x0881F7D8u>(ctx, &aot_mem) && ctx.pc == 0x0880E3F0u) goto L_0880E3F0;
    return;
L_0880E3F0:
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(24), ctx.gpr[2]);
    ctx.set_gpr(2, 0u + static_cast<std::uint32_t>(2));
    { const bool branch_taken = ctx.gpr[22] != ctx.gpr[2];
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(28), ctx.gpr[3]);
      if (branch_taken) {
          goto L_0880E388;
      }
      goto L_0880E400;
    }
L_0880E400:
    ctx.set_gpr(31, 0x0880E408u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0003_entry, 3u, 213u, 0x08810BBCu>(ctx, &aot_mem) && ctx.pc == 0x0880E408u) goto L_0880E408;
    return;
L_0880E408:
    ctx.set_gpr(3, 0u + static_cast<std::uint32_t>(33));
    rt.memory().aot_store32(ctx.gpr[2] + static_cast<std::uint32_t>(0), ctx.gpr[3]);
    goto L_0880E398;
L_0880E414:
    ctx.set_gpr(31, 0x0880E41Cu);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0003_entry, 3u, 213u, 0x08810BBCu>(ctx, &aot_mem) && ctx.pc == 0x0880E41Cu) goto L_0880E41C;
    return;
L_0880E41C:
    ctx.set_gpr(3, rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(32)));
    ctx.set_gpr(18, rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(24)));
    ctx.set_gpr(19, rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(28)));
    rt.memory().aot_store32(ctx.gpr[2] + static_cast<std::uint32_t>(0), ctx.gpr[3]);
    goto L_0880E3AC;
L_0880E430:
    ctx.set_gpr(29, ctx.gpr[29] + static_cast<std::uint32_t>(-80));
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(64), ctx.gpr[20]);
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(60), ctx.gpr[19]);
    ctx.set_gpr(19, ctx.gpr[5] + 0u);
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(56), ctx.gpr[18]);
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(52), ctx.gpr[17]);
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(48), ctx.gpr[16]);
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(68), ctx.gpr[31]);
    ctx.set_gpr(31, 0x0880E458u);
    ctx.set_gpr(18, ctx.gpr[4] + 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0000_entry, 0u, 877u, 0x088078E4u>(ctx, &aot_mem) && ctx.pc == 0x0880E458u) goto L_0880E458;
    return;
L_0880E458:
    ctx.set_gpr(16, ctx.gpr[2] + 0u);
    ctx.set_gpr(2, 2225u << 16u);
    ctx.set_gpr(20, rt.memory().aot_load32(ctx.gpr[2] + static_cast<std::uint32_t>(-360)));
    ctx.set_gpr(17, ctx.gpr[3] + 0u);
    ctx.set_gpr(3, 0u + static_cast<std::uint32_t>(-1));
    { const bool branch_taken = ctx.gpr[20] == ctx.gpr[3];
    ctx.set_gpr(4, ctx.gpr[18] + 0u);
      if (branch_taken) {
          goto L_0880E49C;
      }
      goto L_0880E474;
    }
L_0880E474:
    ctx.set_gpr(31, 0x0880E47Cu);
    ctx.set_gpr(5, ctx.gpr[19] + 0u);
    goto L_0880D4DC;
L_0880E47C:
    { const bool branch_taken = ctx.gpr[2] != 0u;
    ctx.set_gpr(4, ctx.gpr[18] + 0u);
      if (branch_taken) {
          goto L_0880E49C;
      }
      goto L_0880E484;
    }
L_0880E484:
    ctx.set_gpr(5, ctx.gpr[19] + 0u);
    ctx.set_gpr(6, 0u + 0u);
    ctx.set_gpr(31, 0x0880E494u);
    ctx.set_gpr(7, 0u + 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0006_entry, 6u, 934u, 0x0881FE94u>(ctx, &aot_mem) && ctx.pc == 0x0880E494u) goto L_0880E494;
    return;
L_0880E494:
    { const bool branch_taken = static_cast<std::int32_t>(ctx.gpr[2]) <= 0;
    ctx.set_gpr(2, 2225u << 16u);
      if (branch_taken) {
          goto L_0880E4C4;
      }
      goto L_0880E49C;
    }
L_0880E49C:
    ctx.set_gpr(2, ctx.gpr[16] + 0u);
    ctx.set_gpr(3, ctx.gpr[17] + 0u);
    ctx.set_gpr(31, rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(68)));
    ctx.set_gpr(20, rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(64)));
    ctx.set_gpr(19, rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(60)));
    ctx.set_gpr(18, rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(56)));
    ctx.set_gpr(17, rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(52)));
    ctx.set_gpr(16, rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(48)));
    jump_target = ctx.gpr[31];
    ctx.set_gpr(29, ctx.gpr[29] + static_cast<std::uint32_t>(80));
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_0880E4C4:
    ctx.set_gpr(2, ctx.gpr[2] + static_cast<std::uint32_t>(-124));
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(4), ctx.gpr[2]);
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(32), 0u);
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(8), ctx.gpr[18]);
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(12), ctx.gpr[19]);
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(16), ctx.gpr[18]);
    { const bool branch_taken = ctx.gpr[20] != 0u;
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(20), ctx.gpr[19]);
      if (branch_taken) {
          goto L_0880E58C;
      }
      goto L_0880E4E4;
    }
L_0880E4E4:
    ctx.set_gpr(4, 2225u << 16u);
    ctx.set_gpr(2, rt.memory().aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(-112)));
    ctx.set_gpr(3, rt.memory().aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(-108)));
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(24), ctx.gpr[2]);
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(28), ctx.gpr[3]);
    goto L_0880E4F8;
L_0880E4F8:
    ctx.set_gpr(4, ctx.gpr[18] + 0u);
    ctx.set_gpr(5, ctx.gpr[19] + 0u);
    ctx.set_gpr(6, 0u + 0u);
    ctx.set_gpr(31, 0x0880E50Cu);
    ctx.set_gpr(7, 0u + 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0006_entry, 6u, 899u, 0x0881FBBCu>(ctx, &aot_mem) && ctx.pc == 0x0880E50Cu) goto L_0880E50C;
    return;
L_0880E50C:
    { const bool branch_taken = ctx.gpr[2] != 0u;
    ctx.set_gpr(2, 0u + static_cast<std::uint32_t>(1));
      if (branch_taken) {
          goto L_0880E56C;
      }
      goto L_0880E514;
    }
L_0880E514:
    ctx.set_gpr(2, 0u + static_cast<std::uint32_t>(2));
    { const bool branch_taken = ctx.gpr[20] == ctx.gpr[2];
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(0), ctx.gpr[2]);
      if (branch_taken) {
          goto L_0880E5C8;
      }
      goto L_0880E520;
    }
L_0880E520:
    ctx.set_gpr(31, 0x0880E528u);
    ctx.set_gpr(4, ctx.gpr[29] + 0u);
    goto L_0880D504;
L_0880E528:
    { const bool branch_taken = ctx.gpr[2] == 0u;
    // nop
      if (branch_taken) {
          goto L_0880E578;
      }
      goto L_0880E530;
    }
L_0880E530:
    ctx.set_gpr(2, rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(32)));
    { const bool branch_taken = ctx.gpr[2] != 0u;
    // nop
      if (branch_taken) {
          goto L_0880E5AC;
      }
      goto L_0880E53C;
    }
L_0880E53C:
    ctx.set_gpr(16, rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(24)));
    ctx.set_gpr(17, rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(28)));
    goto L_0880E544;
L_0880E544:
    ctx.set_gpr(2, ctx.gpr[16] + 0u);
    ctx.set_gpr(3, ctx.gpr[17] + 0u);
    ctx.set_gpr(31, rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(68)));
    ctx.set_gpr(20, rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(64)));
    ctx.set_gpr(19, rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(60)));
    ctx.set_gpr(18, rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(56)));
    ctx.set_gpr(17, rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(52)));
    ctx.set_gpr(16, rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(48)));
    jump_target = ctx.gpr[31];
    ctx.set_gpr(29, ctx.gpr[29] + static_cast<std::uint32_t>(80));
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_0880E56C:
    ctx.set_gpr(3, 0u + static_cast<std::uint32_t>(2));
    { const bool branch_taken = ctx.gpr[20] != ctx.gpr[3];
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(0), ctx.gpr[2]);
      if (branch_taken) {
          goto L_0880E520;
      }
      goto L_0880E578;
    }
L_0880E578:
    ctx.set_gpr(31, 0x0880E580u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0003_entry, 3u, 213u, 0x08810BBCu>(ctx, &aot_mem) && ctx.pc == 0x0880E580u) goto L_0880E580;
    return;
L_0880E580:
    ctx.set_gpr(3, 0u + static_cast<std::uint32_t>(33));
    rt.memory().aot_store32(ctx.gpr[2] + static_cast<std::uint32_t>(0), ctx.gpr[3]);
    goto L_0880E530;
L_0880E58C:
    ctx.set_gpr(4, 2225u << 16u);
    ctx.set_gpr(7, rt.memory().aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(-364)));
    ctx.set_gpr(6, rt.memory().aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(-368)));
    ctx.set_gpr(4, 32768u << 16u);
    ctx.set_gpr(3, ctx.gpr[7] ^ ctx.gpr[4]);
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(24), ctx.gpr[6]);
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(28), ctx.gpr[3]);
    goto L_0880E4F8;
L_0880E5AC:
    ctx.set_gpr(31, 0x0880E5B4u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0003_entry, 3u, 213u, 0x08810BBCu>(ctx, &aot_mem) && ctx.pc == 0x0880E5B4u) goto L_0880E5B4;
    return;
L_0880E5B4:
    ctx.set_gpr(3, rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(32)));
    ctx.set_gpr(16, rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(24)));
    ctx.set_gpr(17, rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(28)));
    rt.memory().aot_store32(ctx.gpr[2] + static_cast<std::uint32_t>(0), ctx.gpr[3]);
    goto L_0880E544;
L_0880E5C8:
    ctx.set_gpr(31, 0x0880E5D0u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0003_entry, 3u, 213u, 0x08810BBCu>(ctx, &aot_mem) && ctx.pc == 0x0880E5D0u) goto L_0880E5D0;
    return;
L_0880E5D0:
    ctx.set_gpr(3, 0u + static_cast<std::uint32_t>(34));
    rt.memory().aot_store32(ctx.gpr[2] + static_cast<std::uint32_t>(0), ctx.gpr[3]);
    goto L_0880E530;
L_0880E5DC:
    ctx.set_gpr(29, ctx.gpr[29] + static_cast<std::uint32_t>(-96));
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(88), ctx.gpr[22]);
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(84), ctx.gpr[21]);
    ctx.set_gpr(21, ctx.gpr[5] + 0u);
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(80), ctx.gpr[20]);
    ctx.set_gpr(20, ctx.gpr[4] + 0u);
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(76), ctx.gpr[19]);
    ctx.set_gpr(19, ctx.gpr[7] + 0u);
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(72), ctx.gpr[18]);
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(68), ctx.gpr[17]);
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(64), ctx.gpr[16]);
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(92), ctx.gpr[31]);
    ctx.set_gpr(31, 0x0880E614u);
    ctx.set_gpr(18, ctx.gpr[6] + 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0000_entry, 0u, 899u, 0x08807AF8u>(ctx, &aot_mem) && ctx.pc == 0x0880E614u) goto L_0880E614;
    return;
L_0880E614:
    ctx.set_gpr(16, ctx.gpr[2] + 0u);
    ctx.set_gpr(2, 2225u << 16u);
    ctx.set_gpr(22, rt.memory().aot_load32(ctx.gpr[2] + static_cast<std::uint32_t>(-360)));
    ctx.set_gpr(17, ctx.gpr[3] + 0u);
    ctx.set_gpr(3, 0u + static_cast<std::uint32_t>(-1));
    { const bool branch_taken = ctx.gpr[22] == ctx.gpr[3];
    ctx.set_gpr(4, ctx.gpr[18] + 0u);
      if (branch_taken) {
          goto L_0880E640;
      }
      goto L_0880E630;
    }
L_0880E630:
    ctx.set_gpr(31, 0x0880E638u);
    ctx.set_gpr(5, ctx.gpr[19] + 0u);
    goto L_0880D4DC;
L_0880E638:
    { const bool branch_taken = ctx.gpr[2] == 0u;
    ctx.set_gpr(4, ctx.gpr[20] + 0u);
      if (branch_taken) {
          goto L_0880E670;
      }
      goto L_0880E640;
    }
L_0880E640:
    ctx.set_gpr(2, ctx.gpr[16] + 0u);
    goto L_0880E644;
L_0880E644:
    ctx.set_gpr(3, ctx.gpr[17] + 0u);
    ctx.set_gpr(31, rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(92)));
    ctx.set_gpr(22, rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(88)));
    ctx.set_gpr(21, rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(84)));
    ctx.set_gpr(20, rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(80)));
    ctx.set_gpr(19, rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(76)));
    ctx.set_gpr(18, rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(72)));
    ctx.set_gpr(17, rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(68)));
    ctx.set_gpr(16, rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(64)));
    jump_target = ctx.gpr[31];
    ctx.set_gpr(29, ctx.gpr[29] + static_cast<std::uint32_t>(96));
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_0880E670:
    ctx.set_gpr(31, 0x0880E678u);
    ctx.set_gpr(5, ctx.gpr[21] + 0u);
    goto L_0880D4DC;
L_0880E678:
    { const bool branch_taken = ctx.gpr[2] == 0u;
    ctx.set_gpr(4, ctx.gpr[20] + 0u);
      if (branch_taken) {
          goto L_0880E724;
      }
      goto L_0880E680;
    }
L_0880E680:
    ctx.set_gpr(4, ctx.gpr[18] + 0u);
    ctx.set_gpr(5, ctx.gpr[19] + 0u);
    ctx.set_gpr(6, 0u + 0u);
    ctx.set_gpr(31, 0x0880E694u);
    ctx.set_gpr(7, 0u + 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0006_entry, 6u, 899u, 0x0881FBBCu>(ctx, &aot_mem) && ctx.pc == 0x0880E694u) goto L_0880E694;
    return;
L_0880E694:
    { const bool branch_taken = ctx.gpr[2] != 0u;
    ctx.set_gpr(2, 0u + static_cast<std::uint32_t>(1));
      if (branch_taken) {
          goto L_0880E640;
      }
      goto L_0880E69C;
    }
L_0880E69C:
    ctx.set_gpr(3, 2225u << 16u);
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(0), ctx.gpr[2]);
    ctx.set_gpr(3, ctx.gpr[3] + static_cast<std::uint32_t>(-104));
    ctx.set_gpr(2, 0u + static_cast<std::uint32_t>(2));
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(4), ctx.gpr[3]);
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(16), ctx.gpr[18]);
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(20), ctx.gpr[19]);
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(24), ctx.gpr[20]);
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(28), ctx.gpr[21]);
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(32), 0u);
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(8), ctx.gpr[20]);
    { const bool branch_taken = ctx.gpr[22] == ctx.gpr[2];
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(12), ctx.gpr[21]);
      if (branch_taken) {
          goto L_0880E784;
      }
      goto L_0880E6D0;
    }
L_0880E6D0:
    ctx.set_gpr(31, 0x0880E6D8u);
    ctx.set_gpr(4, ctx.gpr[29] + 0u);
    goto L_0880D504;
L_0880E6D8:
    { const bool branch_taken = ctx.gpr[2] == 0u;
    // nop
      if (branch_taken) {
          goto L_0880E8E8;
      }
      goto L_0880E6E0;
    }
L_0880E6E0:
    ctx.set_gpr(2, rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(32)));
    goto L_0880E6E4;
L_0880E6E4:
    { const bool branch_taken = ctx.gpr[2] != 0u;
    // nop
      if (branch_taken) {
          goto L_0880E79C;
      }
      goto L_0880E6EC;
    }
L_0880E6EC:
    ctx.set_gpr(16, rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(24)));
    ctx.set_gpr(17, rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(28)));
    goto L_0880E6F4;
L_0880E6F4:
    ctx.set_gpr(2, ctx.gpr[16] + 0u);
    ctx.set_gpr(3, ctx.gpr[17] + 0u);
    ctx.set_gpr(31, rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(92)));
    ctx.set_gpr(22, rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(88)));
    ctx.set_gpr(21, rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(84)));
    ctx.set_gpr(20, rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(80)));
    ctx.set_gpr(19, rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(76)));
    ctx.set_gpr(18, rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(72)));
    ctx.set_gpr(17, rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(68)));
    ctx.set_gpr(16, rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(64)));
    jump_target = ctx.gpr[31];
    ctx.set_gpr(29, ctx.gpr[29] + static_cast<std::uint32_t>(96));
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_0880E724:
    ctx.set_gpr(5, ctx.gpr[21] + 0u);
    ctx.set_gpr(6, 0u + 0u);
    ctx.set_gpr(31, 0x0880E734u);
    ctx.set_gpr(7, 0u + 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0006_entry, 6u, 899u, 0x0881FBBCu>(ctx, &aot_mem) && ctx.pc == 0x0880E734u) goto L_0880E734;
    return;
L_0880E734:
    { const bool branch_taken = ctx.gpr[2] != 0u;
    ctx.set_gpr(4, ctx.gpr[18] + 0u);
      if (branch_taken) {
          goto L_0880E7B8;
      }
      goto L_0880E73C;
    }
L_0880E73C:
    ctx.set_gpr(5, ctx.gpr[19] + 0u);
    ctx.set_gpr(6, 0u + 0u);
    ctx.set_gpr(31, 0x0880E74Cu);
    ctx.set_gpr(7, 0u + 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0006_entry, 6u, 899u, 0x0881FBBCu>(ctx, &aot_mem) && ctx.pc == 0x0880E74Cu) goto L_0880E74C;
    return;
L_0880E74C:
    { const bool branch_taken = ctx.gpr[2] != 0u;
    ctx.set_gpr(2, 2225u << 16u);
      if (branch_taken) {
          goto L_0880E86C;
      }
      goto L_0880E754;
    }
L_0880E754:
    ctx.set_gpr(3, 0u + static_cast<std::uint32_t>(1));
    ctx.set_gpr(2, ctx.gpr[2] + static_cast<std::uint32_t>(-104));
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(0), ctx.gpr[3]);
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(4), ctx.gpr[2]);
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(8), ctx.gpr[20]);
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(12), ctx.gpr[21]);
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(16), ctx.gpr[18]);
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(20), ctx.gpr[19]);
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(32), 0u);
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(24), 0u);
    { const bool branch_taken = ctx.gpr[22] == 0u;
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(28), 0u);
      if (branch_taken) {
          goto L_0880E6D0;
      }
      goto L_0880E784;
    }
L_0880E784:
    ctx.set_gpr(4, 2225u << 16u);
    ctx.set_gpr(2, rt.memory().aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(-96)));
    ctx.set_gpr(3, rt.memory().aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(-92)));
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(24), ctx.gpr[2]);
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(28), ctx.gpr[3]);
    goto L_0880E6E0;
L_0880E79C:
    ctx.set_gpr(31, 0x0880E7A4u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0003_entry, 3u, 213u, 0x08810BBCu>(ctx, &aot_mem) && ctx.pc == 0x0880E7A4u) goto L_0880E7A4;
    return;
L_0880E7A4:
    ctx.set_gpr(3, rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(32)));
    ctx.set_gpr(16, rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(24)));
    ctx.set_gpr(17, rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(28)));
    rt.memory().aot_store32(ctx.gpr[2] + static_cast<std::uint32_t>(0), ctx.gpr[3]);
    goto L_0880E6F4;
L_0880E7B8:
    ctx.set_gpr(4, ctx.gpr[16] + 0u);
    ctx.set_gpr(31, 0x0880E7C4u);
    ctx.set_gpr(5, ctx.gpr[17] + 0u);
    goto L_0880D224;
L_0880E7C4:
    { const bool branch_taken = ctx.gpr[2] == 0u;
    ctx.set_gpr(4, ctx.gpr[20] + 0u);
      if (branch_taken) {
          goto L_0880E8FC;
      }
      goto L_0880E7CC;
    }
L_0880E7CC:
    ctx.set_gpr(4, ctx.gpr[16] + 0u);
    goto L_0880E7D0;
L_0880E7D0:
    ctx.set_gpr(5, ctx.gpr[17] + 0u);
    ctx.set_gpr(6, 0u + 0u);
    ctx.set_gpr(31, 0x0880E7E0u);
    ctx.set_gpr(7, 0u + 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0006_entry, 6u, 899u, 0x0881FBBCu>(ctx, &aot_mem) && ctx.pc == 0x0880E7E0u) goto L_0880E7E0;
    return;
L_0880E7E0:
    { const bool branch_taken = ctx.gpr[2] != 0u;
    ctx.set_gpr(2, ctx.gpr[16] + 0u);
      if (branch_taken) {
          goto L_0880E644;
      }
      goto L_0880E7E8;
    }
L_0880E7E8:
    ctx.set_gpr(4, ctx.gpr[20] + 0u);
    ctx.set_gpr(31, 0x0880E7F4u);
    ctx.set_gpr(5, ctx.gpr[21] + 0u);
    goto L_0880D224;
L_0880E7F4:
    { const bool branch_taken = ctx.gpr[2] == 0u;
    ctx.set_gpr(2, ctx.gpr[16] + 0u);
      if (branch_taken) {
          goto L_0880E644;
      }
      goto L_0880E7FC;
    }
L_0880E7FC:
    ctx.set_gpr(4, ctx.gpr[18] + 0u);
    ctx.set_gpr(31, 0x0880E808u);
    ctx.set_gpr(5, ctx.gpr[19] + 0u);
    goto L_0880D224;
L_0880E808:
    { const bool branch_taken = ctx.gpr[2] == 0u;
    ctx.set_gpr(3, 2225u << 16u);
      if (branch_taken) {
          goto L_0880E640;
      }
      goto L_0880E810;
    }
L_0880E810:
    ctx.set_gpr(2, 0u + static_cast<std::uint32_t>(4));
    ctx.set_gpr(3, ctx.gpr[3] + static_cast<std::uint32_t>(-104));
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(0), ctx.gpr[2]);
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(4), ctx.gpr[3]);
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(8), ctx.gpr[20]);
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(12), ctx.gpr[21]);
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(16), ctx.gpr[18]);
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(20), ctx.gpr[19]);
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(32), 0u);
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(24), 0u);
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(28), 0u);
    goto L_0880E83C;
L_0880E83C:
    ctx.set_gpr(2, 0u + static_cast<std::uint32_t>(2));
    goto L_0880E840;
L_0880E840:
    { const bool branch_taken = ctx.gpr[22] == ctx.gpr[2];
    // nop
      if (branch_taken) {
          goto L_0880E858;
      }
      goto L_0880E848;
    }
L_0880E848:
    ctx.set_gpr(31, 0x0880E850u);
    ctx.set_gpr(4, ctx.gpr[29] + 0u);
    goto L_0880D504;
L_0880E850:
    { const bool branch_taken = ctx.gpr[2] != 0u;
    ctx.set_gpr(2, rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(32)));
      if (branch_taken) {
          goto L_0880E6E4;
      }
      goto L_0880E858;
    }
L_0880E858:
    ctx.set_gpr(31, 0x0880E860u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0003_entry, 3u, 213u, 0x08810BBCu>(ctx, &aot_mem) && ctx.pc == 0x0880E860u) goto L_0880E860;
    return;
L_0880E860:
    ctx.set_gpr(3, 0u + static_cast<std::uint32_t>(34));
    rt.memory().aot_store32(ctx.gpr[2] + static_cast<std::uint32_t>(0), ctx.gpr[3]);
    goto L_0880E6E0;
L_0880E86C:
    ctx.set_gpr(4, ctx.gpr[18] + 0u);
    ctx.set_gpr(31, 0x0880E878u);
    ctx.set_gpr(5, ctx.gpr[19] + 0u);
    goto L_0880D224;
L_0880E878:
    { const bool branch_taken = ctx.gpr[2] == 0u;
    ctx.set_gpr(4, ctx.gpr[18] + 0u);
      if (branch_taken) {
          goto L_0880E640;
      }
      goto L_0880E880;
    }
L_0880E880:
    ctx.set_gpr(5, ctx.gpr[19] + 0u);
    ctx.set_gpr(6, 0u + 0u);
    ctx.set_gpr(31, 0x0880E890u);
    ctx.set_gpr(7, 0u + 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0006_entry, 6u, 927u, 0x0881FE0Cu>(ctx, &aot_mem) && ctx.pc == 0x0880E890u) goto L_0880E890;
    return;
L_0880E890:
    { const bool branch_taken = static_cast<std::int32_t>(ctx.gpr[2]) >= 0;
    ctx.set_gpr(2, ctx.gpr[16] + 0u);
      if (branch_taken) {
          goto L_0880E644;
      }
      goto L_0880E898;
    }
L_0880E898:
    ctx.set_gpr(2, 2225u << 16u);
    ctx.set_gpr(3, 0u + static_cast<std::uint32_t>(1));
    ctx.set_gpr(2, ctx.gpr[2] + static_cast<std::uint32_t>(-104));
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(0), ctx.gpr[3]);
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(4), ctx.gpr[2]);
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(8), ctx.gpr[20]);
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(12), ctx.gpr[21]);
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(16), ctx.gpr[18]);
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(20), ctx.gpr[19]);
    { const bool branch_taken = ctx.gpr[22] == 0u;
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(32), 0u);
      if (branch_taken) {
          goto L_0880E990;
      }
      goto L_0880E8C4;
    }
L_0880E8C4:
    ctx.set_gpr(4, 2225u << 16u);
    ctx.set_gpr(7, rt.memory().aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(-364)));
    ctx.set_gpr(6, rt.memory().aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(-368)));
    ctx.set_gpr(4, 32768u << 16u);
    ctx.set_gpr(3, ctx.gpr[7] ^ ctx.gpr[4]);
    ctx.set_gpr(4, 0u + static_cast<std::uint32_t>(2));
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(24), ctx.gpr[6]);
    { const bool branch_taken = ctx.gpr[22] != ctx.gpr[4];
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(28), ctx.gpr[3]);
      if (branch_taken) {
          goto L_0880E6D0;
      }
      goto L_0880E8E8;
    }
L_0880E8E8:
    ctx.set_gpr(31, 0x0880E8F0u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0003_entry, 3u, 213u, 0x08810BBCu>(ctx, &aot_mem) && ctx.pc == 0x0880E8F0u) goto L_0880E8F0;
    return;
L_0880E8F0:
    ctx.set_gpr(3, 0u + static_cast<std::uint32_t>(33));
    rt.memory().aot_store32(ctx.gpr[2] + static_cast<std::uint32_t>(0), ctx.gpr[3]);
    goto L_0880E6E0;
L_0880E8FC:
    ctx.set_gpr(31, 0x0880E904u);
    ctx.set_gpr(5, ctx.gpr[21] + 0u);
    goto L_0880D224;
L_0880E904:
    { const bool branch_taken = ctx.gpr[2] == 0u;
    ctx.set_gpr(4, ctx.gpr[16] + 0u);
      if (branch_taken) {
          goto L_0880E7D0;
      }
      goto L_0880E90C;
    }
L_0880E90C:
    ctx.set_gpr(4, ctx.gpr[18] + 0u);
    ctx.set_gpr(31, 0x0880E918u);
    ctx.set_gpr(5, ctx.gpr[19] + 0u);
    goto L_0880D224;
L_0880E918:
    { const bool branch_taken = ctx.gpr[2] == 0u;
    ctx.set_gpr(4, ctx.gpr[16] + 0u);
      if (branch_taken) {
          goto L_0880E7D0;
      }
      goto L_0880E920;
    }
L_0880E920:
    ctx.set_gpr(31, 0x0880E928u);
    ctx.set_gpr(5, ctx.gpr[17] + 0u);
    goto L_0880D4DC;
L_0880E928:
    { const bool branch_taken = ctx.gpr[2] == 0u;
    ctx.set_gpr(2, 2225u << 16u);
      if (branch_taken) {
          goto L_0880E99C;
      }
      goto L_0880E930;
    }
L_0880E930:
    ctx.set_gpr(3, 0u + static_cast<std::uint32_t>(1));
    ctx.set_gpr(2, ctx.gpr[2] + static_cast<std::uint32_t>(-104));
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(0), ctx.gpr[3]);
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(4), ctx.gpr[2]);
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(8), ctx.gpr[20]);
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(12), ctx.gpr[21]);
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(16), ctx.gpr[18]);
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(20), ctx.gpr[19]);
    { const bool branch_taken = ctx.gpr[22] == 0u;
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(32), 0u);
      if (branch_taken) {
          goto L_0880E990;
      }
      goto L_0880E958;
    }
L_0880E958:
    ctx.set_gpr(4, 0u + 0u);
    ctx.set_gpr(5, 0u + 0u);
    ctx.set_gpr(6, ctx.gpr[4] + 0u);
    ctx.set_gpr(31, 0x0880E96Cu);
    ctx.set_gpr(7, ctx.gpr[5] + 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0006_entry, 6u, 827u, 0x0881F7D8u>(ctx, &aot_mem) && ctx.pc == 0x0880E96Cu) goto L_0880E96C;
    return;
L_0880E96C:
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(24), ctx.gpr[2]);
    ctx.set_gpr(2, 0u + static_cast<std::uint32_t>(2));
    { const bool branch_taken = ctx.gpr[22] != ctx.gpr[2];
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(28), ctx.gpr[3]);
      if (branch_taken) {
          goto L_0880E6D0;
      }
      goto L_0880E97C;
    }
L_0880E97C:
    ctx.set_gpr(31, 0x0880E984u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0003_entry, 3u, 213u, 0x08810BBCu>(ctx, &aot_mem) && ctx.pc == 0x0880E984u) goto L_0880E984;
    return;
L_0880E984:
    ctx.set_gpr(3, 0u + static_cast<std::uint32_t>(33));
    rt.memory().aot_store32(ctx.gpr[2] + static_cast<std::uint32_t>(0), ctx.gpr[3]);
    goto L_0880E6E0;
L_0880E990:
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(24), 0u);
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(28), 0u);
    goto L_0880E6D0;
L_0880E99C:
    ctx.set_gpr(3, 0u + static_cast<std::uint32_t>(3));
    ctx.set_gpr(2, ctx.gpr[2] + static_cast<std::uint32_t>(-104));
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(0), ctx.gpr[3]);
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(4), ctx.gpr[2]);
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(32), 0u);
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(8), ctx.gpr[20]);
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(12), ctx.gpr[21]);
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(16), ctx.gpr[18]);
    { const bool branch_taken = ctx.gpr[22] != 0u;
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(20), ctx.gpr[19]);
      if (branch_taken) {
          goto L_0880EA4C;
      }
      goto L_0880E9C4;
    }
L_0880E9C4:
    ctx.set_gpr(2, 2225u << 16u);
    ctx.set_gpr(8, 2225u << 16u);
    ctx.set_gpr(6, rt.memory().aot_load32(ctx.gpr[2] + static_cast<std::uint32_t>(-80)));
    ctx.set_gpr(7, rt.memory().aot_load32(ctx.gpr[2] + static_cast<std::uint32_t>(-76)));
    ctx.set_gpr(3, rt.memory().aot_load32(ctx.gpr[8] + static_cast<std::uint32_t>(-84)));
    ctx.set_gpr(2, rt.memory().aot_load32(ctx.gpr[8] + static_cast<std::uint32_t>(-88)));
    ctx.set_gpr(4, ctx.gpr[18] + 0u);
    ctx.set_gpr(5, ctx.gpr[19] + 0u);
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(24), ctx.gpr[2]);
    ctx.set_gpr(31, 0x0880E9F0u);
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(28), ctx.gpr[3]);
    if (rt.invoke_chained_direct<&recomp_unit_0006_entry, 6u, 778u, 0x0881F44Cu>(ctx, &aot_mem) && ctx.pc == 0x0880E9F0u) goto L_0880E9F0;
    return;
L_0880E9F0:
    ctx.set_gpr(4, ctx.gpr[20] + 0u);
    ctx.set_gpr(5, ctx.gpr[21] + 0u);
    ctx.set_gpr(6, 0u + 0u);
    ctx.set_gpr(7, 0u + 0u);
    ctx.set_gpr(16, ctx.gpr[2] + 0u);
    ctx.set_gpr(31, 0x0880EA0Cu);
    ctx.set_gpr(17, ctx.gpr[3] + 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0006_entry, 6u, 927u, 0x0881FE0Cu>(ctx, &aot_mem) && ctx.pc == 0x0880EA0Cu) goto L_0880EA0C;
    return;
L_0880EA0C:
    { const bool branch_taken = static_cast<std::int32_t>(ctx.gpr[2]) >= 0;
    ctx.set_gpr(4, ctx.gpr[16] + 0u);
      if (branch_taken) {
          goto L_0880E848;
      }
      goto L_0880EA14;
    }
L_0880EA14:
    ctx.set_gpr(31, 0x0880EA1Cu);
    ctx.set_gpr(5, ctx.gpr[17] + 0u);
    goto L_0880D50C;
L_0880EA1C:
    ctx.set_gpr(6, ctx.gpr[2] + 0u);
    ctx.set_gpr(4, ctx.gpr[16] + 0u);
    ctx.set_gpr(5, ctx.gpr[17] + 0u);
    ctx.set_gpr(31, 0x0880EA30u);
    ctx.set_gpr(7, ctx.gpr[3] + 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0006_entry, 6u, 906u, 0x0881FC44u>(ctx, &aot_mem) && ctx.pc == 0x0880EA30u) goto L_0880EA30;
    return;
L_0880EA30:
    { const bool branch_taken = ctx.gpr[2] == 0u;
    ctx.set_gpr(4, 2225u << 16u);
      if (branch_taken) {
          goto L_0880E848;
      }
      goto L_0880EA38;
    }
L_0880EA38:
    ctx.set_gpr(2, rt.memory().aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(-72)));
    ctx.set_gpr(3, rt.memory().aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(-68)));
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(24), ctx.gpr[2]);
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(28), ctx.gpr[3]);
    goto L_0880E848;
L_0880EA4C:
    ctx.set_gpr(2, 2225u << 16u);
    ctx.set_gpr(4, rt.memory().aot_load32(ctx.gpr[2] + static_cast<std::uint32_t>(-368)));
    ctx.set_gpr(5, rt.memory().aot_load32(ctx.gpr[2] + static_cast<std::uint32_t>(-364)));
    ctx.set_gpr(3, 2225u << 16u);
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(48), ctx.gpr[4]);
    ctx.set_gpr(4, ctx.gpr[18] + 0u);
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(52), ctx.gpr[5]);
    ctx.set_gpr(5, ctx.gpr[19] + 0u);
    ctx.set_gpr(6, rt.memory().aot_load32(ctx.gpr[3] + static_cast<std::uint32_t>(-80)));
    ctx.set_gpr(7, rt.memory().aot_load32(ctx.gpr[3] + static_cast<std::uint32_t>(-76)));
    ctx.set_gpr(2, rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(48)));
    ctx.set_gpr(3, rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(52)));
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(24), ctx.gpr[2]);
    ctx.set_gpr(31, 0x0880EA88u);
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(28), ctx.gpr[3]);
    if (rt.invoke_chained_direct<&recomp_unit_0006_entry, 6u, 778u, 0x0881F44Cu>(ctx, &aot_mem) && ctx.pc == 0x0880EA88u) goto L_0880EA88;
    return;
L_0880EA88:
    ctx.set_gpr(4, ctx.gpr[20] + 0u);
    ctx.set_gpr(5, ctx.gpr[21] + 0u);
    ctx.set_gpr(6, 0u + 0u);
    ctx.set_gpr(7, 0u + 0u);
    ctx.set_gpr(16, ctx.gpr[2] + 0u);
    ctx.set_gpr(31, 0x0880EAA4u);
    ctx.set_gpr(17, ctx.gpr[3] + 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0006_entry, 6u, 927u, 0x0881FE0Cu>(ctx, &aot_mem) && ctx.pc == 0x0880EAA4u) goto L_0880EAA4;
    return;
L_0880EAA4:
    { const bool branch_taken = static_cast<std::int32_t>(ctx.gpr[2]) >= 0;
    ctx.set_gpr(2, 0u + static_cast<std::uint32_t>(2));
      if (branch_taken) {
          goto L_0880E840;
      }
      goto L_0880EAAC;
    }
L_0880EAAC:
    ctx.set_gpr(4, ctx.gpr[16] + 0u);
    ctx.set_gpr(31, 0x0880EAB8u);
    ctx.set_gpr(5, ctx.gpr[17] + 0u);
    goto L_0880D50C;
L_0880EAB8:
    ctx.set_gpr(6, ctx.gpr[2] + 0u);
    ctx.set_gpr(4, ctx.gpr[16] + 0u);
    ctx.set_gpr(5, ctx.gpr[17] + 0u);
    ctx.set_gpr(31, 0x0880EACCu);
    ctx.set_gpr(7, ctx.gpr[3] + 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0006_entry, 6u, 906u, 0x0881FC44u>(ctx, &aot_mem) && ctx.pc == 0x0880EACCu) goto L_0880EACC;
    return;
L_0880EACC:
    { const bool branch_taken = ctx.gpr[2] == 0u;
    ctx.set_gpr(2, 0u + static_cast<std::uint32_t>(2));
      if (branch_taken) {
          goto L_0880E840;
      }
      goto L_0880EAD4;
    }
L_0880EAD4:
    ctx.set_gpr(4, rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(48)));
    ctx.set_gpr(5, rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(52)));
    ctx.set_gpr(2, ctx.gpr[4] + 0u);
    ctx.set_gpr(4, 32768u << 16u);
    ctx.set_gpr(3, ctx.gpr[5] ^ ctx.gpr[4]);
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(24), ctx.gpr[2]);
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(28), ctx.gpr[3]);
    goto L_0880E83C;
L_0880EAF4:
    ctx.set_gpr(29, ctx.gpr[29] + static_cast<std::uint32_t>(-80));
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(64), ctx.gpr[20]);
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(60), ctx.gpr[19]);
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(56), ctx.gpr[18]);
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(52), ctx.gpr[17]);
    ctx.set_gpr(17, ctx.gpr[5] + 0u);
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(48), ctx.gpr[16]);
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(68), ctx.gpr[31]);
    ctx.set_gpr(31, 0x0880EB1Cu);
    ctx.set_gpr(16, ctx.gpr[4] + 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0001_entry, 1u, 223u, 0x08809404u>(ctx, &aot_mem) && ctx.pc == 0x0880EB1Cu) goto L_0880EB1C;
    return;
L_0880EB1C:
    ctx.set_gpr(18, ctx.gpr[2] + 0u);
    ctx.set_gpr(2, 2225u << 16u);
    ctx.set_gpr(20, rt.memory().aot_load32(ctx.gpr[2] + static_cast<std::uint32_t>(-360)));
    ctx.set_gpr(19, ctx.gpr[3] + 0u);
    ctx.set_gpr(3, 0u + static_cast<std::uint32_t>(-1));
    { const bool branch_taken = ctx.gpr[20] == ctx.gpr[3];
    ctx.set_gpr(4, ctx.gpr[16] + 0u);
      if (branch_taken) {
          goto L_0880EB60;
      }
      goto L_0880EB38;
    }
L_0880EB38:
    ctx.set_gpr(31, 0x0880EB40u);
    ctx.set_gpr(5, ctx.gpr[17] + 0u);
    goto L_0880D4DC;
L_0880EB40:
    { const bool branch_taken = ctx.gpr[2] != 0u;
    ctx.set_gpr(4, ctx.gpr[16] + 0u);
      if (branch_taken) {
          goto L_0880EB60;
      }
      goto L_0880EB48;
    }
L_0880EB48:
    ctx.set_gpr(5, ctx.gpr[17] + 0u);
    ctx.set_gpr(6, 0u + 0u);
    ctx.set_gpr(31, 0x0880EB58u);
    ctx.set_gpr(7, 0u + 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0006_entry, 6u, 927u, 0x0881FE0Cu>(ctx, &aot_mem) && ctx.pc == 0x0880EB58u) goto L_0880EB58;
    return;
L_0880EB58:
    { const bool branch_taken = static_cast<std::int32_t>(ctx.gpr[2]) < 0;
    ctx.set_gpr(2, 2225u << 16u);
      if (branch_taken) {
          goto L_0880EB88;
      }
      goto L_0880EB60;
    }
L_0880EB60:
    ctx.set_gpr(2, ctx.gpr[18] + 0u);
    ctx.set_gpr(3, ctx.gpr[19] + 0u);
    ctx.set_gpr(31, rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(68)));
    ctx.set_gpr(20, rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(64)));
    ctx.set_gpr(19, rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(60)));
    ctx.set_gpr(18, rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(56)));
    ctx.set_gpr(17, rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(52)));
    ctx.set_gpr(16, rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(48)));
    jump_target = ctx.gpr[31];
    ctx.set_gpr(29, ctx.gpr[29] + static_cast<std::uint32_t>(80));
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_0880EB88:
    ctx.set_gpr(3, 0u + static_cast<std::uint32_t>(1));
    ctx.set_gpr(2, ctx.gpr[2] + static_cast<std::uint32_t>(-64));
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(0), ctx.gpr[3]);
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(4), ctx.gpr[2]);
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(8), ctx.gpr[16]);
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(12), ctx.gpr[17]);
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(32), 0u);
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(16), ctx.gpr[16]);
    { const bool branch_taken = ctx.gpr[20] != 0u;
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(20), ctx.gpr[17]);
      if (branch_taken) {
          goto L_0880EC04;
      }
      goto L_0880EBB0;
    }
L_0880EBB0:
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(24), 0u);
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(28), 0u);
    goto L_0880EBB8;
L_0880EBB8:
    ctx.set_gpr(31, 0x0880EBC0u);
    ctx.set_gpr(4, ctx.gpr[29] + 0u);
    goto L_0880D504;
L_0880EBC0:
    { const bool branch_taken = ctx.gpr[2] == 0u;
    // nop
      if (branch_taken) {
          goto L_0880EC28;
      }
      goto L_0880EBC8;
    }
L_0880EBC8:
    ctx.set_gpr(2, rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(32)));
    { const bool branch_taken = ctx.gpr[2] != 0u;
    // nop
      if (branch_taken) {
          goto L_0880EC3C;
      }
      goto L_0880EBD4;
    }
L_0880EBD4:
    ctx.set_gpr(18, rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(24)));
    ctx.set_gpr(19, rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(28)));
    goto L_0880EBDC;
L_0880EBDC:
    ctx.set_gpr(2, ctx.gpr[18] + 0u);
    ctx.set_gpr(3, ctx.gpr[19] + 0u);
    ctx.set_gpr(31, rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(68)));
    ctx.set_gpr(20, rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(64)));
    ctx.set_gpr(19, rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(60)));
    ctx.set_gpr(18, rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(56)));
    ctx.set_gpr(17, rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(52)));
    ctx.set_gpr(16, rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(48)));
    jump_target = ctx.gpr[31];
    ctx.set_gpr(29, ctx.gpr[29] + static_cast<std::uint32_t>(80));
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_0880EC04:
    ctx.set_gpr(4, 0u + 0u);
    ctx.set_gpr(5, 0u + 0u);
    ctx.set_gpr(6, ctx.gpr[4] + 0u);
    ctx.set_gpr(31, 0x0880EC18u);
    ctx.set_gpr(7, ctx.gpr[5] + 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0006_entry, 6u, 827u, 0x0881F7D8u>(ctx, &aot_mem) && ctx.pc == 0x0880EC18u) goto L_0880EC18;
    return;
L_0880EC18:
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(24), ctx.gpr[2]);
    ctx.set_gpr(2, 0u + static_cast<std::uint32_t>(2));
    { const bool branch_taken = ctx.gpr[20] != ctx.gpr[2];
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(28), ctx.gpr[3]);
      if (branch_taken) {
          goto L_0880EBB8;
      }
      goto L_0880EC28;
    }
L_0880EC28:
    ctx.set_gpr(31, 0x0880EC30u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0003_entry, 3u, 213u, 0x08810BBCu>(ctx, &aot_mem) && ctx.pc == 0x0880EC30u) goto L_0880EC30;
    return;
L_0880EC30:
    ctx.set_gpr(3, 0u + static_cast<std::uint32_t>(33));
    rt.memory().aot_store32(ctx.gpr[2] + static_cast<std::uint32_t>(0), ctx.gpr[3]);
    goto L_0880EBC8;
L_0880EC3C:
    ctx.set_gpr(31, 0x0880EC44u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0003_entry, 3u, 213u, 0x08810BBCu>(ctx, &aot_mem) && ctx.pc == 0x0880EC44u) goto L_0880EC44;
    return;
L_0880EC44:
    ctx.set_gpr(3, rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(32)));
    ctx.set_gpr(18, rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(24)));
    ctx.set_gpr(19, rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(28)));
    rt.memory().aot_store32(ctx.gpr[2] + static_cast<std::uint32_t>(0), ctx.gpr[3]);
    goto L_0880EBDC;
L_0880EC58:
    ctx.set_gpr(29, ctx.gpr[29] + static_cast<std::uint32_t>(-80));
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(48), ctx.gpr[16]);
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(68), std::bit_cast<std::uint32_t>(ctx.fpr[21]));
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(64), std::bit_cast<std::uint32_t>(ctx.fpr[20]));
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(52), ctx.gpr[31]);
    ctx.set_gpr(31, 0x0880EC74u);
    ctx.set_fpr_bits(20, ctx.fpr_bits(12));
    if (rt.invoke_chained_direct<&recomp_unit_0001_entry, 1u, 271u, 0x088096F4u>(ctx, &aot_mem) && ctx.pc == 0x0880EC74u) goto L_0880EC74;
    return;
L_0880EC74:
    ctx.set_gpr(2, 2225u << 16u);
    ctx.set_gpr(16, rt.memory().aot_load32(ctx.gpr[2] + static_cast<std::uint32_t>(-360)));
    ctx.set_gpr(3, 0u + static_cast<std::uint32_t>(-1));
    { const bool branch_taken = ctx.gpr[16] == ctx.gpr[3];
    ctx.set_fpr_bits(21, ctx.fpr_bits(0));
      if (branch_taken) {
          goto L_0880EC98;
      }
      goto L_0880EC88;
    }
L_0880EC88:
    ctx.set_gpr(31, 0x0880EC90u);
    ctx.set_fpr_bits(12, ctx.fpr_bits(20));
    goto L_0880DFDC;
L_0880EC90:
    { const bool branch_taken = ctx.gpr[2] == 0u;
    // nop
      if (branch_taken) {
          goto L_0880ECB4;
      }
      goto L_0880EC98;
    }
L_0880EC98:
    ctx.set_fpr_bits(0, ctx.fpr_bits(21));
    ctx.set_gpr(31, rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(52)));
    ctx.set_gpr(16, rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(48)));
    ctx.fpr[21] = std::bit_cast<float>(rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(68)));
    ctx.fpr[20] = std::bit_cast<float>(rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(64)));
    jump_target = ctx.gpr[31];
    ctx.set_gpr(29, ctx.gpr[29] + static_cast<std::uint32_t>(80));
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_0880ECB4:
    ctx.set_gpr(31, 0x0880ECBCu);
    ctx.set_fpr_bits(12, ctx.fpr_bits(20));
    goto L_0880DEE0;
L_0880ECBC:
    ctx.set_gpr(2, 2225u << 16u);
    ctx.fpr[1] = std::bit_cast<float>(rt.memory().aot_load32(ctx.gpr[2] + static_cast<std::uint32_t>(-48)));
    ctx.set_fpu_condition((ctx.fpr[1] < ctx.fpr[0]));
    // nop
    { const bool branch_taken = !ctx.fpu_condition();
    ctx.set_gpr(2, 2225u << 16u);
      if (branch_taken) {
          goto L_0880EC98;
      }
      goto L_0880ECD4;
    }
L_0880ECD4:
    ctx.set_fpr_bits(12, ctx.fpr_bits(20));
    ctx.set_gpr(3, 0u + static_cast<std::uint32_t>(1));
    ctx.set_gpr(2, ctx.gpr[2] + static_cast<std::uint32_t>(-56));
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(0), ctx.gpr[3]);
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(4), ctx.gpr[2]);
    ctx.set_gpr(31, 0x0880ECF0u);
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(32), 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0006_entry, 6u, 675u, 0x0881EBD0u>(ctx, &aot_mem) && ctx.pc == 0x0880ECF0u) goto L_0880ECF0;
    return;
L_0880ECF0:
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(8), ctx.gpr[2]);
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(16), ctx.gpr[2]);
    ctx.set_gpr(2, 0u + static_cast<std::uint32_t>(2));
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(12), ctx.gpr[3]);
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(20), ctx.gpr[3]);
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(24), 0u);
    { const bool branch_taken = ctx.gpr[16] == ctx.gpr[2];
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(28), 0u);
      if (branch_taken) {
          goto L_0880ED78;
      }
      goto L_0880ED10;
    }
L_0880ED10:
    ctx.set_gpr(31, 0x0880ED18u);
    ctx.set_gpr(4, ctx.gpr[29] + 0u);
    goto L_0880D504;
L_0880ED18:
    { const bool branch_taken = ctx.gpr[2] == 0u;
    // nop
      if (branch_taken) {
          goto L_0880ED78;
      }
      goto L_0880ED20;
    }
L_0880ED20:
    ctx.set_gpr(2, rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(32)));
    { const bool branch_taken = ctx.gpr[2] != 0u;
    ctx.set_gpr(4, rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(24)));
      if (branch_taken) {
          goto L_0880ED54;
      }
      goto L_0880ED2C;
    }
L_0880ED2C:
    ctx.set_gpr(31, 0x0880ED34u);
    ctx.set_gpr(5, rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(28)));
    if (rt.invoke_chained_direct<&recomp_unit_0007_entry, 7u, 18u, 0x08820104u>(ctx, &aot_mem) && ctx.pc == 0x0880ED34u) goto L_0880ED34;
    return;
L_0880ED34:
    ctx.set_fpr_bits(21, ctx.fpr_bits(0));
    goto L_0880ED38;
L_0880ED38:
    ctx.set_fpr_bits(0, ctx.fpr_bits(21));
    ctx.set_gpr(31, rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(52)));
    ctx.set_gpr(16, rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(48)));
    ctx.fpr[21] = std::bit_cast<float>(rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(68)));
    ctx.fpr[20] = std::bit_cast<float>(rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(64)));
    jump_target = ctx.gpr[31];
    ctx.set_gpr(29, ctx.gpr[29] + static_cast<std::uint32_t>(80));
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_0880ED54:
    ctx.set_gpr(31, 0x0880ED5Cu);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0003_entry, 3u, 213u, 0x08810BBCu>(ctx, &aot_mem) && ctx.pc == 0x0880ED5Cu) goto L_0880ED5C;
    return;
L_0880ED5C:
    ctx.set_gpr(3, rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(32)));
    ctx.set_gpr(4, rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(24)));
    ctx.set_gpr(5, rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(28)));
    ctx.set_gpr(31, 0x0880ED70u);
    rt.memory().aot_store32(ctx.gpr[2] + static_cast<std::uint32_t>(0), ctx.gpr[3]);
    if (rt.invoke_chained_direct<&recomp_unit_0007_entry, 7u, 18u, 0x08820104u>(ctx, &aot_mem) && ctx.pc == 0x0880ED70u) goto L_0880ED70;
    return;
L_0880ED70:
    ctx.set_fpr_bits(21, ctx.fpr_bits(0));
    goto L_0880ED38;
L_0880ED78:
    ctx.set_gpr(31, 0x0880ED80u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0003_entry, 3u, 213u, 0x08810BBCu>(ctx, &aot_mem) && ctx.pc == 0x0880ED80u) goto L_0880ED80;
    return;
L_0880ED80:
    ctx.set_gpr(3, 0u + static_cast<std::uint32_t>(33));
    rt.memory().aot_store32(ctx.gpr[2] + static_cast<std::uint32_t>(0), ctx.gpr[3]);
    goto L_0880ED20;
L_0880ED8C:
    ctx.set_gpr(29, ctx.gpr[29] + static_cast<std::uint32_t>(-80));
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(48), ctx.gpr[16]);
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(68), std::bit_cast<std::uint32_t>(ctx.fpr[21]));
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(64), std::bit_cast<std::uint32_t>(ctx.fpr[20]));
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(52), ctx.gpr[31]);
    ctx.set_gpr(31, 0x0880EDA8u);
    ctx.set_fpr_bits(20, ctx.fpr_bits(12));
    if (rt.invoke_chained_direct<&recomp_unit_0001_entry, 1u, 286u, 0x08809A48u>(ctx, &aot_mem) && ctx.pc == 0x0880EDA8u) goto L_0880EDA8;
    return;
L_0880EDA8:
    ctx.set_gpr(2, 2225u << 16u);
    ctx.set_gpr(16, rt.memory().aot_load32(ctx.gpr[2] + static_cast<std::uint32_t>(-360)));
    ctx.set_gpr(3, 0u + static_cast<std::uint32_t>(-1));
    { const bool branch_taken = ctx.gpr[16] == ctx.gpr[3];
    ctx.set_fpr_bits(21, ctx.fpr_bits(0));
      if (branch_taken) {
          goto L_0880EDCC;
      }
      goto L_0880EDBC;
    }
L_0880EDBC:
    ctx.set_gpr(31, 0x0880EDC4u);
    ctx.set_fpr_bits(12, ctx.fpr_bits(20));
    goto L_0880DFDC;
L_0880EDC4:
    { const bool branch_taken = ctx.gpr[2] == 0u;
    // nop
      if (branch_taken) {
          goto L_0880EDE8;
      }
      goto L_0880EDCC;
    }
L_0880EDCC:
    ctx.set_fpr_bits(0, ctx.fpr_bits(21));
    ctx.set_gpr(31, rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(52)));
    ctx.set_gpr(16, rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(48)));
    ctx.fpr[21] = std::bit_cast<float>(rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(68)));
    ctx.fpr[20] = std::bit_cast<float>(rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(64)));
    jump_target = ctx.gpr[31];
    ctx.set_gpr(29, ctx.gpr[29] + static_cast<std::uint32_t>(80));
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_0880EDE8:
    ctx.set_gpr(31, 0x0880EDF0u);
    ctx.set_fpr_bits(12, ctx.fpr_bits(20));
    goto L_0880DEE0;
L_0880EDF0:
    ctx.set_gpr(2, 2225u << 16u);
    ctx.fpr[1] = std::bit_cast<float>(rt.memory().aot_load32(ctx.gpr[2] + static_cast<std::uint32_t>(-36)));
    ctx.set_fpu_condition((ctx.fpr[1] < ctx.fpr[0]));
    // nop
    { const bool branch_taken = !ctx.fpu_condition();
    ctx.set_gpr(2, 2225u << 16u);
      if (branch_taken) {
          goto L_0880EDCC;
      }
      goto L_0880EE08;
    }
L_0880EE08:
    ctx.set_fpr_bits(12, ctx.fpr_bits(20));
    ctx.set_gpr(3, 0u + static_cast<std::uint32_t>(1));
    ctx.set_gpr(2, ctx.gpr[2] + static_cast<std::uint32_t>(-44));
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(0), ctx.gpr[3]);
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(4), ctx.gpr[2]);
    ctx.set_gpr(31, 0x0880EE24u);
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(32), 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0006_entry, 6u, 675u, 0x0881EBD0u>(ctx, &aot_mem) && ctx.pc == 0x0880EE24u) goto L_0880EE24;
    return;
L_0880EE24:
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(8), ctx.gpr[2]);
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(16), ctx.gpr[2]);
    ctx.set_gpr(2, 0u + static_cast<std::uint32_t>(2));
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(12), ctx.gpr[3]);
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(20), ctx.gpr[3]);
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(24), 0u);
    { const bool branch_taken = ctx.gpr[16] == ctx.gpr[2];
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(28), 0u);
      if (branch_taken) {
          goto L_0880EEAC;
      }
      goto L_0880EE44;
    }
L_0880EE44:
    ctx.set_gpr(31, 0x0880EE4Cu);
    ctx.set_gpr(4, ctx.gpr[29] + 0u);
    goto L_0880D504;
L_0880EE4C:
    { const bool branch_taken = ctx.gpr[2] == 0u;
    // nop
      if (branch_taken) {
          goto L_0880EEAC;
      }
      goto L_0880EE54;
    }
L_0880EE54:
    ctx.set_gpr(2, rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(32)));
    { const bool branch_taken = ctx.gpr[2] != 0u;
    ctx.set_gpr(4, rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(24)));
      if (branch_taken) {
          goto L_0880EE88;
      }
      goto L_0880EE60;
    }
L_0880EE60:
    ctx.set_gpr(31, 0x0880EE68u);
    ctx.set_gpr(5, rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(28)));
    if (rt.invoke_chained_direct<&recomp_unit_0007_entry, 7u, 18u, 0x08820104u>(ctx, &aot_mem) && ctx.pc == 0x0880EE68u) goto L_0880EE68;
    return;
L_0880EE68:
    ctx.set_fpr_bits(21, ctx.fpr_bits(0));
    goto L_0880EE6C;
L_0880EE6C:
    ctx.set_fpr_bits(0, ctx.fpr_bits(21));
    ctx.set_gpr(31, rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(52)));
    ctx.set_gpr(16, rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(48)));
    ctx.fpr[21] = std::bit_cast<float>(rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(68)));
    ctx.fpr[20] = std::bit_cast<float>(rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(64)));
    jump_target = ctx.gpr[31];
    ctx.set_gpr(29, ctx.gpr[29] + static_cast<std::uint32_t>(80));
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_0880EE88:
    ctx.set_gpr(31, 0x0880EE90u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0003_entry, 3u, 213u, 0x08810BBCu>(ctx, &aot_mem) && ctx.pc == 0x0880EE90u) goto L_0880EE90;
    return;
L_0880EE90:
    ctx.set_gpr(3, rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(32)));
    ctx.set_gpr(4, rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(24)));
    ctx.set_gpr(5, rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(28)));
    ctx.set_gpr(31, 0x0880EEA4u);
    rt.memory().aot_store32(ctx.gpr[2] + static_cast<std::uint32_t>(0), ctx.gpr[3]);
    if (rt.invoke_chained_direct<&recomp_unit_0007_entry, 7u, 18u, 0x08820104u>(ctx, &aot_mem) && ctx.pc == 0x0880EEA4u) goto L_0880EEA4;
    return;
L_0880EEA4:
    ctx.set_fpr_bits(21, ctx.fpr_bits(0));
    goto L_0880EE6C;
L_0880EEAC:
    ctx.set_gpr(31, 0x0880EEB4u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0003_entry, 3u, 213u, 0x08810BBCu>(ctx, &aot_mem) && ctx.pc == 0x0880EEB4u) goto L_0880EEB4;
    return;
L_0880EEB4:
    ctx.set_gpr(3, 0u + static_cast<std::uint32_t>(33));
    rt.memory().aot_store32(ctx.gpr[2] + static_cast<std::uint32_t>(0), ctx.gpr[3]);
    goto L_0880EE54;
L_0880EEC0:
    ctx.set_gpr(29, ctx.gpr[29] + static_cast<std::uint32_t>(-80));
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(48), ctx.gpr[16]);
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(72), std::bit_cast<std::uint32_t>(ctx.fpr[22]));
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(68), std::bit_cast<std::uint32_t>(ctx.fpr[21]));
    ctx.set_fpr_bits(21, ctx.fpr_bits(12));
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(64), std::bit_cast<std::uint32_t>(ctx.fpr[20]));
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(52), ctx.gpr[31]);
    ctx.set_gpr(31, 0x0880EEE4u);
    ctx.set_fpr_bits(20, ctx.fpr_bits(13));
    if (rt.invoke_chained_direct<&recomp_unit_0001_entry, 1u, 304u, 0x08809D8Cu>(ctx, &aot_mem) && ctx.pc == 0x0880EEE4u) goto L_0880EEE4;
    return;
L_0880EEE4:
    ctx.set_gpr(2, 2225u << 16u);
    ctx.set_gpr(16, rt.memory().aot_load32(ctx.gpr[2] + static_cast<std::uint32_t>(-360)));
    ctx.set_gpr(3, 0u + static_cast<std::uint32_t>(-1));
    { const bool branch_taken = ctx.gpr[16] == ctx.gpr[3];
    ctx.set_fpr_bits(22, ctx.fpr_bits(0));
      if (branch_taken) {
          goto L_0880EF08;
      }
      goto L_0880EEF8;
    }
L_0880EEF8:
    ctx.set_gpr(31, 0x0880EF00u);
    ctx.set_fpr_bits(12, ctx.fpr_bits(20));
    goto L_0880DFDC;
L_0880EF00:
    { const bool branch_taken = ctx.gpr[2] == 0u;
    // nop
      if (branch_taken) {
          goto L_0880EF28;
      }
      goto L_0880EF08;
    }
L_0880EF08:
    ctx.set_fpr_bits(0, ctx.fpr_bits(22));
    goto L_0880EF0C;
L_0880EF0C:
    ctx.set_gpr(31, rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(52)));
    ctx.set_gpr(16, rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(48)));
    ctx.fpr[22] = std::bit_cast<float>(rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(72)));
    ctx.fpr[21] = std::bit_cast<float>(rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(68)));
    ctx.fpr[20] = std::bit_cast<float>(rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(64)));
    jump_target = ctx.gpr[31];
    ctx.set_gpr(29, ctx.gpr[29] + static_cast<std::uint32_t>(80));
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_0880EF28:
    ctx.set_gpr(31, 0x0880EF30u);
    ctx.set_fpr_bits(12, ctx.fpr_bits(21));
    goto L_0880DFDC;
L_0880EF30:
    { const bool branch_taken = ctx.gpr[2] != 0u;
    ctx.fpr[0] = std::bit_cast<float>(0u);
      if (branch_taken) {
          goto L_0880EF08;
      }
      goto L_0880EF38;
    }
L_0880EF38:
    ctx.set_fpu_condition((!(std::isnan(ctx.fpr[20]) || std::isnan(ctx.fpr[0])) && ctx.fpr[20] == ctx.fpr[0]));
    // nop
    if (!ctx.fpu_condition()) {
    ctx.set_fpr_bits(0, ctx.fpr_bits(22));
        goto L_0880EF0C;
    }
    goto L_0880EF48;
L_0880EF48:
    ctx.set_fpu_condition((!(std::isnan(ctx.fpr[21]) || std::isnan(ctx.fpr[0])) && ctx.fpr[21] == ctx.fpr[0]));
    // nop
    { const bool branch_taken = !ctx.fpu_condition();
    ctx.set_fpr_bits(0, ctx.fpr_bits(22));
      if (branch_taken) {
          goto L_0880EF0C;
      }
      goto L_0880EF58;
    }
L_0880EF58:
    ctx.set_gpr(31, 0x0880EF60u);
    ctx.set_fpr_bits(12, ctx.fpr_bits(21));
    if (rt.invoke_chained_direct<&recomp_unit_0006_entry, 6u, 675u, 0x0881EBD0u>(ctx, &aot_mem) && ctx.pc == 0x0880EF60u) goto L_0880EF60;
    return;
L_0880EF60:
    ctx.set_fpr_bits(12, ctx.fpr_bits(20));
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(8), ctx.gpr[2]);
    ctx.set_gpr(31, 0x0880EF70u);
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(12), ctx.gpr[3]);
    if (rt.invoke_chained_direct<&recomp_unit_0006_entry, 6u, 675u, 0x0881EBD0u>(ctx, &aot_mem) && ctx.pc == 0x0880EF70u) goto L_0880EF70;
    return;
L_0880EF70:
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(16), ctx.gpr[2]);
    ctx.set_gpr(2, 0u + static_cast<std::uint32_t>(1));
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(20), ctx.gpr[3]);
    ctx.set_gpr(3, 2225u << 16u);
    ctx.set_gpr(3, ctx.gpr[3] + static_cast<std::uint32_t>(-32));
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(0), ctx.gpr[2]);
    ctx.set_gpr(2, 0u + static_cast<std::uint32_t>(2));
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(4), ctx.gpr[3]);
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(32), 0u);
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(24), 0u);
    { const bool branch_taken = ctx.gpr[16] == ctx.gpr[2];
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(28), 0u);
      if (branch_taken) {
          goto L_0880EFF0;
      }
      goto L_0880EFA0;
    }
L_0880EFA0:
    ctx.set_gpr(31, 0x0880EFA8u);
    ctx.set_gpr(4, ctx.gpr[29] + 0u);
    goto L_0880D504;
L_0880EFA8:
    { const bool branch_taken = ctx.gpr[2] == 0u;
    // nop
      if (branch_taken) {
          goto L_0880EFF0;
      }
      goto L_0880EFB0;
    }
L_0880EFB0:
    ctx.set_gpr(2, rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(32)));
    { const bool branch_taken = ctx.gpr[2] != 0u;
    ctx.set_gpr(4, rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(24)));
      if (branch_taken) {
          goto L_0880EFCC;
      }
      goto L_0880EFBC;
    }
L_0880EFBC:
    ctx.set_gpr(31, 0x0880EFC4u);
    ctx.set_gpr(5, rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(28)));
    if (rt.invoke_chained_direct<&recomp_unit_0007_entry, 7u, 18u, 0x08820104u>(ctx, &aot_mem) && ctx.pc == 0x0880EFC4u) goto L_0880EFC4;
    return;
L_0880EFC4:
    ctx.set_fpr_bits(22, ctx.fpr_bits(0));
    goto L_0880EF08;
L_0880EFCC:
    ctx.set_gpr(31, 0x0880EFD4u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0003_entry, 3u, 213u, 0x08810BBCu>(ctx, &aot_mem) && ctx.pc == 0x0880EFD4u) goto L_0880EFD4;
    return;
L_0880EFD4:
    ctx.set_gpr(3, rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(32)));
    ctx.set_gpr(4, rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(24)));
    ctx.set_gpr(5, rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(28)));
    ctx.set_gpr(31, 0x0880EFE8u);
    rt.memory().aot_store32(ctx.gpr[2] + static_cast<std::uint32_t>(0), ctx.gpr[3]);
    if (rt.invoke_chained_direct<&recomp_unit_0007_entry, 7u, 18u, 0x08820104u>(ctx, &aot_mem) && ctx.pc == 0x0880EFE8u) goto L_0880EFE8;
    return;
L_0880EFE8:
    ctx.set_fpr_bits(22, ctx.fpr_bits(0));
    goto L_0880EF08;
L_0880EFF0:
    ctx.set_gpr(31, 0x0880EFF8u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0003_entry, 3u, 213u, 0x08810BBCu>(ctx, &aot_mem) && ctx.pc == 0x0880EFF8u) goto L_0880EFF8;
    return;
L_0880EFF8:
    ctx.set_gpr(3, 0u + static_cast<std::uint32_t>(33));
    rt.memory().aot_store32(ctx.gpr[2] + static_cast<std::uint32_t>(0), ctx.gpr[3]);
    goto L_0880EFB0;
L_0880F004:
    ctx.set_gpr(29, ctx.gpr[29] + static_cast<std::uint32_t>(-80));
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(56), ctx.gpr[18]);
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(72), std::bit_cast<std::uint32_t>(ctx.fpr[22]));
    ctx.set_fpr_bits(22, ctx.fpr_bits(12));
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(68), std::bit_cast<std::uint32_t>(ctx.fpr[21]));
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(64), std::bit_cast<std::uint32_t>(ctx.fpr[20]));
    ctx.set_fpr_bits(20, ctx.fpr_bits(13));
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(60), ctx.gpr[31]);
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(52), ctx.gpr[17]);
    ctx.set_gpr(31, 0x0880F030u);
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(48), ctx.gpr[16]);
    if (rt.invoke_chained_direct<&recomp_unit_0001_entry, 1u, 358u, 0x0880A078u>(ctx, &aot_mem) && ctx.pc == 0x0880F030u) goto L_0880F030;
    return;
L_0880F030:
    ctx.set_gpr(2, 2225u << 16u);
    ctx.set_gpr(18, rt.memory().aot_load32(ctx.gpr[2] + static_cast<std::uint32_t>(-360)));
    ctx.set_gpr(3, 0u + static_cast<std::uint32_t>(-1));
    { const bool branch_taken = ctx.gpr[18] == ctx.gpr[3];
    ctx.set_fpr_bits(21, ctx.fpr_bits(0));
      if (branch_taken) {
          goto L_0880F054;
      }
      goto L_0880F044;
    }
L_0880F044:
    ctx.set_gpr(31, 0x0880F04Cu);
    ctx.set_fpr_bits(12, ctx.fpr_bits(20));
    goto L_0880DFDC;
L_0880F04C:
    { const bool branch_taken = ctx.gpr[2] == 0u;
    // nop
      if (branch_taken) {
          goto L_0880F07C;
      }
      goto L_0880F054;
    }
L_0880F054:
    ctx.set_fpr_bits(0, ctx.fpr_bits(21));
    ctx.set_gpr(31, rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(60)));
    ctx.set_gpr(18, rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(56)));
    ctx.set_gpr(17, rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(52)));
    ctx.set_gpr(16, rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(48)));
    ctx.fpr[22] = std::bit_cast<float>(rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(72)));
    ctx.fpr[21] = std::bit_cast<float>(rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(68)));
    ctx.fpr[20] = std::bit_cast<float>(rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(64)));
    jump_target = ctx.gpr[31];
    ctx.set_gpr(29, ctx.gpr[29] + static_cast<std::uint32_t>(80));
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_0880F07C:
    ctx.set_gpr(31, 0x0880F084u);
    ctx.set_fpr_bits(12, ctx.fpr_bits(22));
    goto L_0880DFDC;
L_0880F084:
    { const bool branch_taken = ctx.gpr[2] != 0u;
    ctx.fpr[0] = std::bit_cast<float>(0u);
      if (branch_taken) {
          goto L_0880F054;
      }
      goto L_0880F08C;
    }
L_0880F08C:
    ctx.set_fpu_condition((!(std::isnan(ctx.fpr[20]) || std::isnan(ctx.fpr[0])) && ctx.fpr[20] == ctx.fpr[0]));
    // nop
    { const bool branch_taken = !ctx.fpu_condition();
    ctx.set_gpr(2, 2225u << 16u);
      if (branch_taken) {
          goto L_0880F054;
      }
      goto L_0880F09C;
    }
L_0880F09C:
    ctx.set_fpr_bits(12, ctx.fpr_bits(22));
    ctx.set_gpr(3, 0u + static_cast<std::uint32_t>(1));
    ctx.set_gpr(2, ctx.gpr[2] + static_cast<std::uint32_t>(-24));
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(0), ctx.gpr[3]);
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(4), ctx.gpr[2]);
    ctx.set_gpr(31, 0x0880F0B8u);
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(32), 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0006_entry, 6u, 675u, 0x0881EBD0u>(ctx, &aot_mem) && ctx.pc == 0x0880F0B8u) goto L_0880F0B8;
    return;
L_0880F0B8:
    ctx.set_fpr_bits(12, ctx.fpr_bits(20));
    ctx.set_gpr(16, ctx.gpr[2] + 0u);
    ctx.set_gpr(17, ctx.gpr[3] + 0u);
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(8), ctx.gpr[2]);
    ctx.set_gpr(31, 0x0880F0D0u);
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(12), ctx.gpr[3]);
    if (rt.invoke_chained_direct<&recomp_unit_0006_entry, 6u, 675u, 0x0881EBD0u>(ctx, &aot_mem) && ctx.pc == 0x0880F0D0u) goto L_0880F0D0;
    return;
L_0880F0D0:
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(16), ctx.gpr[2]);
    { const bool branch_taken = ctx.gpr[18] != 0u;
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(20), ctx.gpr[3]);
      if (branch_taken) {
          goto L_0880F134;
      }
      goto L_0880F0DC;
    }
L_0880F0DC:
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(24), ctx.gpr[16]);
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(28), ctx.gpr[17]);
    goto L_0880F0E4;
L_0880F0E4:
    ctx.set_gpr(31, 0x0880F0ECu);
    ctx.set_gpr(4, ctx.gpr[29] + 0u);
    goto L_0880D504;
L_0880F0EC:
    { const bool branch_taken = ctx.gpr[2] == 0u;
    // nop
      if (branch_taken) {
          goto L_0880F158;
      }
      goto L_0880F0F4;
    }
L_0880F0F4:
    ctx.set_gpr(2, rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(32)));
    { const bool branch_taken = ctx.gpr[2] != 0u;
    ctx.set_gpr(4, rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(24)));
      if (branch_taken) {
          goto L_0880F16C;
      }
      goto L_0880F100;
    }
L_0880F100:
    ctx.set_gpr(31, 0x0880F108u);
    ctx.set_gpr(5, rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(28)));
    if (rt.invoke_chained_direct<&recomp_unit_0007_entry, 7u, 18u, 0x08820104u>(ctx, &aot_mem) && ctx.pc == 0x0880F108u) goto L_0880F108;
    return;
L_0880F108:
    ctx.set_fpr_bits(21, ctx.fpr_bits(0));
    goto L_0880F10C;
L_0880F10C:
    ctx.set_fpr_bits(0, ctx.fpr_bits(21));
    ctx.set_gpr(31, rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(60)));
    ctx.set_gpr(18, rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(56)));
    ctx.set_gpr(17, rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(52)));
    ctx.set_gpr(16, rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(48)));
    ctx.fpr[22] = std::bit_cast<float>(rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(72)));
    ctx.fpr[21] = std::bit_cast<float>(rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(68)));
    ctx.fpr[20] = std::bit_cast<float>(rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(64)));
    jump_target = ctx.gpr[31];
    ctx.set_gpr(29, ctx.gpr[29] + static_cast<std::uint32_t>(80));
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_0880F134:
    ctx.set_gpr(4, 0u + 0u);
    ctx.set_gpr(5, 0u + 0u);
    ctx.set_gpr(6, ctx.gpr[4] + 0u);
    ctx.set_gpr(31, 0x0880F148u);
    ctx.set_gpr(7, ctx.gpr[5] + 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0006_entry, 6u, 827u, 0x0881F7D8u>(ctx, &aot_mem) && ctx.pc == 0x0880F148u) goto L_0880F148;
    return;
L_0880F148:
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(24), ctx.gpr[2]);
    ctx.set_gpr(2, 0u + static_cast<std::uint32_t>(2));
    { const bool branch_taken = ctx.gpr[18] != ctx.gpr[2];
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(28), ctx.gpr[3]);
      if (branch_taken) {
          goto L_0880F0E4;
      }
      goto L_0880F158;
    }
L_0880F158:
    ctx.set_gpr(31, 0x0880F160u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0003_entry, 3u, 213u, 0x08810BBCu>(ctx, &aot_mem) && ctx.pc == 0x0880F160u) goto L_0880F160;
    return;
L_0880F160:
    ctx.set_gpr(3, 0u + static_cast<std::uint32_t>(33));
    rt.memory().aot_store32(ctx.gpr[2] + static_cast<std::uint32_t>(0), ctx.gpr[3]);
    goto L_0880F0F4;
L_0880F16C:
    ctx.set_gpr(31, 0x0880F174u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0003_entry, 3u, 213u, 0x08810BBCu>(ctx, &aot_mem) && ctx.pc == 0x0880F174u) goto L_0880F174;
    return;
L_0880F174:
    ctx.set_gpr(3, rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(32)));
    ctx.set_gpr(4, rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(24)));
    ctx.set_gpr(5, rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(28)));
    ctx.set_gpr(31, 0x0880F188u);
    rt.memory().aot_store32(ctx.gpr[2] + static_cast<std::uint32_t>(0), ctx.gpr[3]);
    if (rt.invoke_chained_direct<&recomp_unit_0007_entry, 7u, 18u, 0x08820104u>(ctx, &aot_mem) && ctx.pc == 0x0880F188u) goto L_0880F188;
    return;
L_0880F188:
    ctx.set_fpr_bits(21, ctx.fpr_bits(0));
    goto L_0880F10C;
L_0880F190:
    ctx.set_gpr(29, ctx.gpr[29] + static_cast<std::uint32_t>(-16));
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(0), ctx.gpr[31]);
    ctx.set_gpr(31, 0x0880F1A0u);
    ctx.set_gpr(4, 0u + static_cast<std::uint32_t>(6));
    if (rt.invoke_chained_direct<&recomp_unit_0004_entry, 4u, 409u, 0x08815D50u>(ctx, &aot_mem) && ctx.pc == 0x0880F1A0u) goto L_0880F1A0;
    return;
L_0880F1A0:
    ctx.set_gpr(31, 0x0880F1A8u);
    ctx.set_gpr(4, 0u + static_cast<std::uint32_t>(1));
    if (rt.invoke_chained_direct<&recomp_unit_0000_entry, 0u, 78u, 0x0880459Cu>(ctx, &aot_mem) && ctx.pc == 0x0880F1A8u) goto L_0880F1A8;
    return;
L_0880F1A8:
    ctx.set_gpr(2, 0u - ctx.gpr[4]);
    jump_target = ctx.gpr[31];
    ctx.set_gpr(2, static_cast<std::int32_t>(ctx.gpr[2]) > static_cast<std::int32_t>(ctx.gpr[4]) ? ctx.gpr[2] : ctx.gpr[4]);
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_0880F1B4:
    ctx.set_gpr(29, ctx.gpr[29] + static_cast<std::uint32_t>(-32));
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(16), ctx.gpr[31]);
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(12), ctx.gpr[19]);
    ctx.set_gpr(19, ctx.gpr[4] + 0u);
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(8), ctx.gpr[18]);
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(4), ctx.gpr[17]);
    ctx.set_gpr(31, 0x0880F1D4u);
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(0), ctx.gpr[16]);
    ctx.pc = 0x08B0DC94u;
    return;
L_0880F1D4:
    ctx.set_gpr(31, 0x0880F1DCu);
    ctx.set_gpr(17, ctx.gpr[2] + 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0003_entry, 3u, 743u, 0x08813024u>(ctx, &aot_mem) && ctx.pc == 0x0880F1DCu) goto L_0880F1DC;
    return;
L_0880F1DC:
    ctx.set_gpr(16, rt.memory().aot_load32(ctx.gpr[2] + static_cast<std::uint32_t>(328)));
    ctx.set_gpr(18, ctx.gpr[2] + 0u);
    { const bool branch_taken = ctx.gpr[16] == 0u;
    ctx.set_gpr(4, ctx.gpr[17] + 0u);
      if (branch_taken) {
          goto L_0880F238;
      }
      goto L_0880F1EC;
    }
L_0880F1EC:
    ctx.set_gpr(3, rt.memory().aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(4)));
    ctx.set_gpr(2, static_cast<std::int32_t>(ctx.gpr[3]) < 32 ? 1u : 0u);
    { const bool branch_taken = ctx.gpr[2] == 0u;
    // nop
      if (branch_taken) {
          goto L_0880F244;
      }
      goto L_0880F1FC;
    }
L_0880F1FC:
    ctx.set_gpr(2, ctx.gpr[3] << 2u);
    ctx.set_gpr(2, ctx.gpr[2] + ctx.gpr[16]);
    ctx.set_gpr(3, ctx.gpr[3] + static_cast<std::uint32_t>(1));
    rt.memory().aot_store32(ctx.gpr[2] + static_cast<std::uint32_t>(8), ctx.gpr[19]);
    ctx.set_gpr(4, ctx.gpr[17] + 0u);
    ctx.set_gpr(31, 0x0880F218u);
    rt.memory().aot_store32(ctx.gpr[16] + static_cast<std::uint32_t>(4), ctx.gpr[3]);
    ctx.pc = 0x08B0DCACu;
    return;
L_0880F218:
    ctx.set_gpr(2, 0u + 0u);
    goto L_0880F21C;
L_0880F21C:
    ctx.set_gpr(31, rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(16)));
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
L_0880F238:
    ctx.set_gpr(16, ctx.gpr[2] + static_cast<std::uint32_t>(332));
    rt.memory().aot_store32(ctx.gpr[2] + static_cast<std::uint32_t>(328), ctx.gpr[16]);
    goto L_0880F1EC;
L_0880F244:
    ctx.set_gpr(31, 0x0880F24Cu);
    // nop
    ctx.pc = 0x08B0DCACu;
    return;
L_0880F24C:
    ctx.set_gpr(4, ctx.gpr[18] + 0u);
    ctx.set_gpr(31, 0x0880F258u);
    ctx.set_gpr(5, 0u + static_cast<std::uint32_t>(268));
    if (rt.invoke_chained_direct<&recomp_unit_0003_entry, 3u, 491u, 0x08812074u>(ctx, &aot_mem) && ctx.pc == 0x0880F258u) goto L_0880F258;
    return;
L_0880F258:
    ctx.set_gpr(16, ctx.gpr[2] + 0u);
    { const bool branch_taken = ctx.gpr[16] == 0u;
    ctx.set_gpr(2, 0u + static_cast<std::uint32_t>(-1));
      if (branch_taken) {
          goto L_0880F21C;
      }
      goto L_0880F264;
    }
L_0880F264:
    ctx.set_gpr(31, 0x0880F26Cu);
    // nop
    ctx.pc = 0x08B0DC94u;
    return;
L_0880F26C:
    ctx.set_gpr(17, ctx.gpr[2] + 0u);
    ctx.set_gpr(2, rt.memory().aot_load32(ctx.gpr[18] + static_cast<std::uint32_t>(328)));
    ctx.set_gpr(3, 0u + 0u);
    rt.memory().aot_store32(ctx.gpr[16] + static_cast<std::uint32_t>(4), 0u);
    rt.memory().aot_store32(ctx.gpr[16] + static_cast<std::uint32_t>(0), ctx.gpr[2]);
    rt.memory().aot_store32(ctx.gpr[16] + static_cast<std::uint32_t>(264), 0u);
    rt.memory().aot_store32(ctx.gpr[18] + static_cast<std::uint32_t>(328), ctx.gpr[16]);
    goto L_0880F1FC;
L_0880F28C:
    ctx.set_gpr(5, 0u + 0u);
    ctx.set_gpr(6, 0u + static_cast<std::uint32_t>(10));
    (void)rt.invoke_chained_direct<&recomp_unit_0005_entry, 5u, 61u, 0x08818298u>(ctx, &aot_mem); return;
L_0880F2A4:
    ctx.set_gpr(29, ctx.gpr[29] + static_cast<std::uint32_t>(-16));
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(8), ctx.gpr[31]);
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(4), ctx.gpr[17]);
    ctx.set_gpr(17, ctx.gpr[5] + 0u);
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(0), ctx.gpr[16]);
    ctx.set_gpr(31, 0x0880F2C0u);
    ctx.set_gpr(16, ctx.gpr[4] + 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0003_entry, 3u, 442u, 0x08811C60u>(ctx, &aot_mem) && ctx.pc == 0x0880F2C0u) goto L_0880F2C0;
    return;
L_0880F2C0:
    ctx.set_gpr(4, ctx.gpr[2] + 0u);
    ctx.set_gpr(5, ctx.gpr[16] + 0u);
    ctx.set_gpr(6, ctx.gpr[17] + 0u);
    ctx.set_gpr(31, rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(8)));
    ctx.set_gpr(17, rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(4)));
    ctx.set_gpr(16, rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(0)));
    ctx.set_gpr(29, ctx.gpr[29] + static_cast<std::uint32_t>(16));
    goto L_0880F2E0;
L_0880F2E0:
    { const std::int64_t product = static_cast<std::int64_t>(static_cast<std::int32_t>(ctx.gpr[5])) * static_cast<std::int64_t>(static_cast<std::int32_t>(ctx.gpr[6])); ctx.lo = static_cast<std::uint32_t>(product); ctx.hi = static_cast<std::uint32_t>(static_cast<std::uint64_t>(product) >> 32u); }
    ctx.set_gpr(29, ctx.gpr[29] + static_cast<std::uint32_t>(-16));
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(0), ctx.gpr[16]);
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(4), ctx.gpr[31]);
    ctx.set_gpr(31, 0x0880F2F8u);
    ctx.set_gpr(5, ctx.lo);
    if (rt.invoke_chained_direct<&recomp_unit_0003_entry, 3u, 491u, 0x08812074u>(ctx, &aot_mem) && ctx.pc == 0x0880F2F8u) goto L_0880F2F8;
    return;
L_0880F2F8:
    { const bool branch_taken = ctx.gpr[2] == 0u;
    ctx.set_gpr(16, ctx.gpr[2] + 0u);
      if (branch_taken) {
          goto L_0880F33C;
      }
      goto L_0880F300;
    }
L_0880F300:
    ctx.set_gpr(2, rt.memory().aot_load32(ctx.gpr[2] + static_cast<std::uint32_t>(-4)));
    ctx.set_gpr(4, ctx.gpr[16] + 0u);
    ctx.set_gpr(5, 0u + 0u);
    ctx.set_gpr(2, (ctx.gpr[2] & ~0x00000003u) | ((0u & 0x00000003u) << 0u));
    ctx.set_gpr(3, ctx.gpr[2] + static_cast<std::uint32_t>(-4));
    ctx.set_gpr(2, ctx.gpr[3] < static_cast<std::uint32_t>(37) ? 1u : 0u);
    ctx.set_gpr(6, ctx.gpr[3] + 0u);
    { const bool branch_taken = ctx.gpr[2] == 0u;
    ctx.set_gpr(7, ctx.gpr[3] < static_cast<std::uint32_t>(20) ? 1u : 0u);
      if (branch_taken) {
          goto L_0880F388;
      }
      goto L_0880F324;
    }
L_0880F324:
    ctx.set_gpr(2, ctx.gpr[16] + static_cast<std::uint32_t>(8));
    { const bool branch_taken = ctx.gpr[7] == 0u;
    ctx.set_gpr(5, ctx.gpr[3] < static_cast<std::uint32_t>(28) ? 1u : 0u);
      if (branch_taken) {
          goto L_0880F350;
      }
      goto L_0880F330;
    }
L_0880F330:
    rt.memory().aot_store32(ctx.gpr[4] + static_cast<std::uint32_t>(8), 0u);
    rt.memory().aot_store32(ctx.gpr[4] + static_cast<std::uint32_t>(0), 0u);
    rt.memory().aot_store32(ctx.gpr[4] + static_cast<std::uint32_t>(4), 0u);
    goto L_0880F33C;
L_0880F33C:
    ctx.set_gpr(2, ctx.gpr[16] + 0u);
    ctx.set_gpr(31, rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(4)));
    ctx.set_gpr(16, rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(0)));
    jump_target = ctx.gpr[31];
    ctx.set_gpr(29, ctx.gpr[29] + static_cast<std::uint32_t>(16));
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_0880F350:
    ctx.set_gpr(6, ctx.gpr[16] + static_cast<std::uint32_t>(16));
    rt.memory().aot_store32(ctx.gpr[16] + static_cast<std::uint32_t>(0), 0u);
    ctx.set_gpr(4, ctx.gpr[2] + 0u);
    { const bool branch_taken = ctx.gpr[5] != 0u;
    rt.memory().aot_store32(ctx.gpr[16] + static_cast<std::uint32_t>(4), 0u);
      if (branch_taken) {
          goto L_0880F330;
      }
      goto L_0880F364;
    }
L_0880F364:
    ctx.set_gpr(2, 0u + static_cast<std::uint32_t>(36));
    ctx.set_gpr(4, ctx.gpr[6] + 0u);
    rt.memory().aot_store32(ctx.gpr[16] + static_cast<std::uint32_t>(8), 0u);
    { const bool branch_taken = ctx.gpr[3] != ctx.gpr[2];
    rt.memory().aot_store32(ctx.gpr[16] + static_cast<std::uint32_t>(12), 0u);
      if (branch_taken) {
          goto L_0880F330;
      }
      goto L_0880F378;
    }
L_0880F378:
    ctx.set_gpr(4, ctx.gpr[16] + static_cast<std::uint32_t>(24));
    rt.memory().aot_store32(ctx.gpr[16] + static_cast<std::uint32_t>(16), 0u);
    rt.memory().aot_store32(ctx.gpr[16] + static_cast<std::uint32_t>(20), 0u);
    goto L_0880F330;
L_0880F388:
    ctx.set_gpr(31, 0x0880F390u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0003_entry, 3u, 719u, 0x08812EE8u>(ctx, &aot_mem) && ctx.pc == 0x0880F390u) goto L_0880F390;
    return;
L_0880F390:
    ctx.set_gpr(2, ctx.gpr[16] + 0u);
    ctx.set_gpr(31, rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(4)));
    ctx.set_gpr(16, rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(0)));
    jump_target = ctx.gpr[31];
    ctx.set_gpr(29, ctx.gpr[29] + static_cast<std::uint32_t>(16));
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_0880F3A4:
    ctx.set_gpr(29, ctx.gpr[29] + static_cast<std::uint32_t>(-16));
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(4), ctx.gpr[17]);
    ctx.set_gpr(17, ctx.gpr[4] + 0u);
    ctx.set_gpr(4, ctx.gpr[5] + 0u);
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(0), ctx.gpr[16]);
    ctx.set_gpr(16, 2247u << 16u);
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(8), ctx.gpr[31]);
    ctx.set_gpr(31, 0x0880F3C8u);
    rt.memory().aot_store32(ctx.gpr[16] + static_cast<std::uint32_t>(-23024), 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0000_entry, 0u, 138u, 0x0880489Cu>(ctx, &aot_mem) && ctx.pc == 0x0880F3C8u) goto L_0880F3C8;
    return;
L_0880F3C8:
    ctx.set_gpr(3, ctx.gpr[2] + 0u);
    ctx.set_gpr(2, 0u + static_cast<std::uint32_t>(-1));
    { const bool branch_taken = ctx.gpr[3] == ctx.gpr[2];
    ctx.set_gpr(2, rt.memory().aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(-23024)));
      if (branch_taken) {
          goto L_0880F3F0;
      }
      goto L_0880F3D8;
    }
L_0880F3D8:
    ctx.set_gpr(31, rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(8)));
    goto L_0880F3DC;
L_0880F3DC:
    ctx.set_gpr(17, rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(4)));
    ctx.set_gpr(16, rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(0)));
    ctx.set_gpr(2, ctx.gpr[3] + 0u);
    jump_target = ctx.gpr[31];
    ctx.set_gpr(29, ctx.gpr[29] + static_cast<std::uint32_t>(16));
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_0880F3F0:
    { const bool branch_taken = ctx.gpr[2] == 0u;
    ctx.set_gpr(31, rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(8)));
      if (branch_taken) {
          goto L_0880F3DC;
      }
      goto L_0880F3F8;
    }
L_0880F3F8:
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
L_0880F414:
    ctx.set_gpr(29, ctx.gpr[29] + static_cast<std::uint32_t>(-32));
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(20), ctx.gpr[21]);
    ctx.set_gpr(13, ctx.gpr[5] + 0u);
    ctx.set_gpr(21, ctx.gpr[4] + 0u);
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(28), ctx.gpr[31]);
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(24), ctx.gpr[22]);
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(16), ctx.gpr[20]);
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(12), ctx.gpr[19]);
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(8), ctx.gpr[18]);
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(4), ctx.gpr[17]);
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(0), ctx.gpr[16]);
    ctx.set_gpr(2, rt.memory().aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(16)));
    ctx.set_gpr(3, rt.memory().aot_load32(ctx.gpr[5] + static_cast<std::uint32_t>(16)));
    ctx.set_gpr(2, static_cast<std::int32_t>(ctx.gpr[2]) < static_cast<std::int32_t>(ctx.gpr[3]) ? 1u : 0u);
    { const bool branch_taken = ctx.gpr[2] != 0u;
    ctx.set_gpr(4, 0u + 0u);
      if (branch_taken) {
          goto L_0880F528;
      }
      goto L_0880F454;
    }
L_0880F454:
    ctx.set_gpr(20, ctx.gpr[3] + static_cast<std::uint32_t>(-1));
    ctx.set_gpr(2, ctx.gpr[20] << 2u);
    ctx.set_gpr(16, ctx.gpr[5] + static_cast<std::uint32_t>(20));
    ctx.set_gpr(18, ctx.gpr[16] + ctx.gpr[2]);
    ctx.set_gpr(19, ctx.gpr[21] + static_cast<std::uint32_t>(20));
    ctx.set_gpr(14, ctx.gpr[2] + ctx.gpr[19]);
    ctx.set_gpr(3, rt.memory().aot_load32(ctx.gpr[18] + static_cast<std::uint32_t>(0)));
    ctx.set_gpr(12, rt.memory().aot_load32(ctx.gpr[14] + static_cast<std::uint32_t>(0)));
    ctx.set_gpr(3, ctx.gpr[3] + static_cast<std::uint32_t>(1));
    { const bool branch_taken = ctx.gpr[3] != 0u;
    { const std::uint32_t dividend = ctx.gpr[12]; const std::uint32_t divisor = ctx.gpr[3]; if (divisor == 0u) { ctx.lo = 0xFFFFFFFFu; ctx.hi = dividend; } else { ctx.lo = dividend / divisor; ctx.hi = dividend % divisor; } }
      if (branch_taken) {
          goto L_0880F484;
      }
      goto L_0880F480;
    }
L_0880F480:
    ctx.pc = 0x0880F480u; rt.stop("Allegrex BREAK code 7 at 0x0880F480"); return;
    goto L_0880F484;
L_0880F484:
    ctx.set_gpr(17, ctx.lo);
    { const bool branch_taken = ctx.gpr[17] != 0u;
    ctx.set_gpr(22, ctx.gpr[17] + 0u);
      if (branch_taken) {
          goto L_0880F554;
      }
      goto L_0880F490;
    }
L_0880F490:
    ctx.set_gpr(5, ctx.gpr[13] + 0u);
    goto L_0880F494;
L_0880F494:
    ctx.set_gpr(31, 0x0880F49Cu);
    ctx.set_gpr(4, ctx.gpr[21] + 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0003_entry, 3u, 885u, 0x08813BF4u>(ctx, &aot_mem) && ctx.pc == 0x0880F49Cu) goto L_0880F49C;
    return;
L_0880F49C:
    { const bool branch_taken = static_cast<std::int32_t>(ctx.gpr[2]) < 0;
    ctx.set_gpr(3, 0u + 0u);
      if (branch_taken) {
          goto L_0880F524;
      }
      goto L_0880F4A4;
    }
L_0880F4A4:
    ctx.set_gpr(22, ctx.gpr[17] + static_cast<std::uint32_t>(1));
    ctx.set_gpr(7, ctx.gpr[19] + 0u);
    ctx.set_gpr(8, 0u + 0u);
    goto L_0880F4B0;
L_0880F4B0:
    ctx.set_gpr(5, rt.memory().aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(0)));
    ctx.set_gpr(4, rt.memory().aot_load32(ctx.gpr[7] + static_cast<std::uint32_t>(0)));
    ctx.set_gpr(16, ctx.gpr[16] + static_cast<std::uint32_t>(4));
    ctx.set_gpr(2, ctx.gpr[5] & 65535u);
    ctx.set_gpr(2, ctx.gpr[3] + ctx.gpr[2]);
    ctx.set_gpr(3, ctx.gpr[2] & 65535u);
    ctx.set_gpr(6, ctx.gpr[4] & 65535u);
    ctx.set_gpr(2, ctx.gpr[2] >> 16u);
    ctx.set_gpr(5, ctx.gpr[5] >> 16u);
    ctx.set_gpr(5, ctx.gpr[5] + ctx.gpr[2]);
    ctx.set_gpr(6, ctx.gpr[6] - ctx.gpr[3]);
    ctx.set_gpr(6, ctx.gpr[6] + ctx.gpr[8]);
    ctx.set_gpr(2, ctx.gpr[5] & 65535u);
    ctx.set_gpr(4, ctx.gpr[4] >> 16u);
    ctx.set_gpr(4, ctx.gpr[4] - ctx.gpr[2]);
    ctx.set_gpr(3, static_cast<std::uint32_t>(static_cast<std::int32_t>(ctx.gpr[6]) >> 16u));
    ctx.set_gpr(4, ctx.gpr[4] + ctx.gpr[3]);
    ctx.set_gpr(2, ctx.gpr[18] < ctx.gpr[16] ? 1u : 0u);
    rt.memory().aot_store16(ctx.gpr[7] + static_cast<std::uint32_t>(2), static_cast<std::uint16_t>(ctx.gpr[4]));
    ctx.set_gpr(3, ctx.gpr[5] >> 16u);
    ctx.set_gpr(8, static_cast<std::uint32_t>(static_cast<std::int32_t>(ctx.gpr[4]) >> 16u));
    rt.memory().aot_store16(ctx.gpr[7] + static_cast<std::uint32_t>(0), static_cast<std::uint16_t>(ctx.gpr[6]));
    { const bool branch_taken = ctx.gpr[2] == 0u;
    ctx.set_gpr(7, ctx.gpr[7] + static_cast<std::uint32_t>(4));
      if (branch_taken) {
          goto L_0880F4B0;
      }
      goto L_0880F510;
    }
L_0880F510:
    ctx.set_gpr(2, ctx.gpr[20] << 2u);
    ctx.set_gpr(4, ctx.gpr[19] + ctx.gpr[2]);
    ctx.set_gpr(3, rt.memory().aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(0)));
    { const bool branch_taken = ctx.gpr[3] == 0u;
    ctx.set_gpr(5, ctx.gpr[4] + static_cast<std::uint32_t>(-4));
      if (branch_taken) {
          goto L_0880F61C;
      }
      goto L_0880F524;
    }
L_0880F524:
    ctx.set_gpr(4, ctx.gpr[22] + 0u);
    goto L_0880F528;
L_0880F528:
    ctx.set_gpr(31, rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(28)));
    ctx.set_gpr(22, rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(24)));
    ctx.set_gpr(21, rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(20)));
    ctx.set_gpr(20, rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(16)));
    ctx.set_gpr(19, rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(12)));
    ctx.set_gpr(18, rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(8)));
    ctx.set_gpr(17, rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(4)));
    ctx.set_gpr(16, rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(0)));
    ctx.set_gpr(2, ctx.gpr[4] + 0u);
    jump_target = ctx.gpr[31];
    ctx.set_gpr(29, ctx.gpr[29] + static_cast<std::uint32_t>(32));
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_0880F554:
    ctx.set_gpr(10, ctx.gpr[16] + 0u);
    ctx.set_gpr(9, ctx.gpr[19] + 0u);
    ctx.set_gpr(11, 0u + 0u);
    ctx.set_gpr(6, 0u + 0u);
    goto L_0880F564;
L_0880F564:
    ctx.set_gpr(5, rt.memory().aot_load32(ctx.gpr[10] + static_cast<std::uint32_t>(0)));
    ctx.lo = ctx.gpr[6];
    ctx.set_gpr(3, rt.memory().aot_load32(ctx.gpr[9] + static_cast<std::uint32_t>(0)));
    ctx.set_gpr(2, ctx.gpr[5] & 65535u);
    ctx.execute_madd(17u, 2u);
    ctx.set_gpr(5, ctx.gpr[5] >> 16u);
    ctx.set_gpr(7, ctx.gpr[3] & 65535u);
    ctx.set_gpr(3, ctx.gpr[3] >> 16u);
    ctx.set_gpr(10, ctx.gpr[10] + static_cast<std::uint32_t>(4));
    ctx.set_gpr(4, ctx.lo);
    ctx.set_gpr(6, ctx.gpr[4] >> 16u);
    ctx.lo = ctx.gpr[6];
    ctx.execute_madd(17u, 5u);
    ctx.set_gpr(4, ctx.gpr[4] & 65535u);
    ctx.set_gpr(7, ctx.gpr[7] - ctx.gpr[4]);
    ctx.set_gpr(7, ctx.gpr[7] + ctx.gpr[11]);
    ctx.set_gpr(4, static_cast<std::uint32_t>(static_cast<std::int32_t>(ctx.gpr[7]) >> 16u));
    ctx.set_gpr(6, ctx.lo);
    ctx.set_gpr(2, ctx.gpr[6] & 65535u);
    ctx.set_gpr(3, ctx.gpr[3] - ctx.gpr[2]);
    ctx.set_gpr(3, ctx.gpr[3] + ctx.gpr[4]);
    ctx.set_gpr(8, ctx.gpr[18] < ctx.gpr[10] ? 1u : 0u);
    rt.memory().aot_store16(ctx.gpr[9] + static_cast<std::uint32_t>(2), static_cast<std::uint16_t>(ctx.gpr[3]));
    ctx.set_gpr(6, ctx.gpr[6] >> 16u);
    ctx.set_gpr(11, static_cast<std::uint32_t>(static_cast<std::int32_t>(ctx.gpr[3]) >> 16u));
    rt.memory().aot_store16(ctx.gpr[9] + static_cast<std::uint32_t>(0), static_cast<std::uint16_t>(ctx.gpr[7]));
    { const bool branch_taken = ctx.gpr[8] == 0u;
    ctx.set_gpr(9, ctx.gpr[9] + static_cast<std::uint32_t>(4));
      if (branch_taken) {
          goto L_0880F564;
      }
      goto L_0880F5D4;
    }
L_0880F5D4:
    if (ctx.gpr[12] != 0u) {
    ctx.set_gpr(5, ctx.gpr[13] + 0u);
        goto L_0880F494;
    }
    goto L_0880F5DC;
L_0880F5DC:
    ctx.set_gpr(3, ctx.gpr[14] + static_cast<std::uint32_t>(-4));
    ctx.set_gpr(2, ctx.gpr[19] < ctx.gpr[3] ? 1u : 0u);
    if (ctx.gpr[2] == 0u) {
    rt.memory().aot_store32(ctx.gpr[21] + static_cast<std::uint32_t>(16), ctx.gpr[20]);
        goto L_0880F490;
    }
    goto L_0880F5EC;
L_0880F5EC:
    ctx.set_gpr(2, rt.memory().aot_load32(ctx.gpr[14] + static_cast<std::uint32_t>(-4)));
    if (ctx.gpr[2] != 0u) {
    rt.memory().aot_store32(ctx.gpr[21] + static_cast<std::uint32_t>(16), ctx.gpr[20]);
        goto L_0880F490;
    }
    goto L_0880F5F8;
L_0880F5F8:
    ctx.set_gpr(3, ctx.gpr[3] + static_cast<std::uint32_t>(-4));
    goto L_0880F5FC;
L_0880F5FC:
    ctx.set_gpr(2, ctx.gpr[19] < ctx.gpr[3] ? 1u : 0u);
    { const bool branch_taken = ctx.gpr[2] == 0u;
    ctx.set_gpr(20, ctx.gpr[20] + static_cast<std::uint32_t>(-1));
      if (branch_taken) {
          goto L_0880F614;
      }
      goto L_0880F608;
    }
L_0880F608:
    ctx.set_gpr(2, rt.memory().aot_load32(ctx.gpr[3] + static_cast<std::uint32_t>(0)));
    { const bool branch_taken = ctx.gpr[2] == 0u;
    ctx.set_gpr(3, ctx.gpr[3] + static_cast<std::uint32_t>(-4));
      if (branch_taken) {
          goto L_0880F5FC;
      }
      goto L_0880F614;
    }
L_0880F614:
    rt.memory().aot_store32(ctx.gpr[21] + static_cast<std::uint32_t>(16), ctx.gpr[20]);
    goto L_0880F490;
L_0880F61C:
    ctx.set_gpr(2, ctx.gpr[19] < ctx.gpr[5] ? 1u : 0u);
    if (ctx.gpr[2] == 0u) {
    rt.memory().aot_store32(ctx.gpr[21] + static_cast<std::uint32_t>(16), ctx.gpr[20]);
        goto L_0880F524;
    }
    goto L_0880F628;
L_0880F628:
    ctx.set_gpr(2, rt.memory().aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(-4)));
    if (ctx.gpr[2] != 0u) {
    rt.memory().aot_store32(ctx.gpr[21] + static_cast<std::uint32_t>(16), ctx.gpr[20]);
        goto L_0880F524;
    }
    goto L_0880F634;
L_0880F634:
    ctx.set_gpr(5, ctx.gpr[5] + static_cast<std::uint32_t>(-4));
    goto L_0880F638;
L_0880F638:
    ctx.set_gpr(2, ctx.gpr[19] < ctx.gpr[5] ? 1u : 0u);
    { const bool branch_taken = ctx.gpr[2] == 0u;
    ctx.set_gpr(20, ctx.gpr[20] + static_cast<std::uint32_t>(-1));
      if (branch_taken) {
          goto L_0880F650;
      }
      goto L_0880F644;
    }
L_0880F644:
    ctx.set_gpr(2, rt.memory().aot_load32(ctx.gpr[5] + static_cast<std::uint32_t>(0)));
    if (ctx.gpr[2] == 0u) {
    ctx.set_gpr(5, ctx.gpr[5] + static_cast<std::uint32_t>(-4));
        goto L_0880F638;
    }
    goto L_0880F650;
L_0880F650:
    rt.memory().aot_store32(ctx.gpr[21] + static_cast<std::uint32_t>(16), ctx.gpr[20]);
    goto L_0880F524;
L_0880F658:
    ctx.set_gpr(29, ctx.gpr[29] + static_cast<std::uint32_t>(-176));
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(156), ctx.gpr[23]);
    ctx.set_gpr(23, ctx.gpr[4] + 0u);
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(140), ctx.gpr[19]);
    ctx.set_gpr(19, ctx.gpr[7] + 0u);
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(136), ctx.gpr[18]);
    ctx.set_gpr(18, ctx.gpr[6] + 0u);
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(128), ctx.gpr[16]);
    ctx.set_gpr(16, ctx.gpr[11] + 0u);
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(164), ctx.gpr[31]);
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(160), ctx.gpr[30]);
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(152), ctx.gpr[22]);
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(148), ctx.gpr[21]);
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(144), ctx.gpr[20]);
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(132), ctx.gpr[17]);
    ctx.set_gpr(12, rt.memory().aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(64)));
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(112), ctx.gpr[8]);
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(116), ctx.gpr[9]);
    { const bool branch_taken = ctx.gpr[12] == 0u;
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(120), ctx.gpr[10]);
      if (branch_taken) {
          goto L_0880F6CC;
      }
      goto L_0880F6A8;
    }
L_0880F6A8:
    ctx.set_gpr(2, rt.memory().aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(68)));
    ctx.set_gpr(5, ctx.gpr[12] + 0u);
    rt.memory().aot_store32(ctx.gpr[12] + static_cast<std::uint32_t>(4), ctx.gpr[2]);
    ctx.set_gpr(2, 0u + static_cast<std::uint32_t>(1));
    ctx.set_gpr(3, rt.memory().aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(68)));
    ctx.set_gpr(2, ctx.gpr[2] << (ctx.gpr[3] & 31u));
    ctx.set_gpr(31, 0x0880F6C8u);
    rt.memory().aot_store32(ctx.gpr[12] + static_cast<std::uint32_t>(8), ctx.gpr[2]);
    if (rt.invoke_chained_direct<&recomp_unit_0004_entry, 4u, 37u, 0x08814400u>(ctx, &aot_mem) && ctx.pc == 0x0880F6C8u) goto L_0880F6C8;
    return;
L_0880F6C8:
    rt.memory().aot_store32(ctx.gpr[23] + static_cast<std::uint32_t>(64), 0u);
    goto L_0880F6CC;
L_0880F6CC:
    { const bool branch_taken = static_cast<std::int32_t>(ctx.gpr[19]) < 0;
    ctx.set_gpr(2, 0u + static_cast<std::uint32_t>(1));
      if (branch_taken) {
          goto L_0880F9A0;
      }
      goto L_0880F6D4;
    }
L_0880F6D4:
    rt.memory().aot_store32(ctx.gpr[16] + static_cast<std::uint32_t>(0), 0u);
    goto L_0880F6D8;
L_0880F6D8:
    ctx.set_gpr(3, 32752u << 16u);
    ctx.set_gpr(2, ctx.gpr[19] & ctx.gpr[3]);
    { const bool branch_taken = ctx.gpr[2] == ctx.gpr[3];
    ctx.set_gpr(4, ctx.gpr[18] + 0u);
      if (branch_taken) {
          goto L_0880F934;
      }
      goto L_0880F6E8;
    }
L_0880F6E8:
    ctx.set_gpr(5, ctx.gpr[19] + 0u);
    ctx.set_gpr(6, 0u + 0u);
    ctx.set_gpr(7, 0u + 0u);
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(104), ctx.gpr[18]);
    ctx.set_gpr(31, 0x0880F700u);
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(108), ctx.gpr[19]);
    if (rt.invoke_chained_direct<&recomp_unit_0006_entry, 6u, 906u, 0x0881FC44u>(ctx, &aot_mem) && ctx.pc == 0x0880F700u) goto L_0880F700;
    return;
L_0880F700:
    { const bool branch_taken = ctx.gpr[2] != 0u;
    ctx.set_gpr(3, rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(120)));
      if (branch_taken) {
          goto L_0880F764;
      }
      goto L_0880F708;
    }
L_0880F708:
    ctx.set_gpr(4, rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(176)));
    ctx.set_gpr(2, 0u + static_cast<std::uint32_t>(1));
    { const bool branch_taken = ctx.gpr[4] == 0u;
    rt.memory().aot_store32(ctx.gpr[3] + static_cast<std::uint32_t>(0), ctx.gpr[2]);
      if (branch_taken) {
          (void)rt.invoke_chained_direct<&recomp_unit_0003_entry, 3u, 96u, 0x088104ECu>(ctx, &aot_mem); return;
      }
      goto L_0880F718;
    }
L_0880F718:
    ctx.set_gpr(3, 2225u << 16u);
    ctx.set_gpr(5, ctx.gpr[3] + static_cast<std::uint32_t>(644));
    ctx.set_gpr(3, rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(176)));
    ctx.set_gpr(2, 2225u << 16u);
    ctx.set_gpr(2, ctx.gpr[2] + static_cast<std::uint32_t>(645));
    rt.memory().aot_store32(ctx.gpr[3] + static_cast<std::uint32_t>(0), ctx.gpr[2]);
    goto L_0880F730;
L_0880F730:
    ctx.set_gpr(31, rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(164)));
    ctx.set_gpr(30, rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(160)));
    ctx.set_gpr(23, rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(156)));
    ctx.set_gpr(22, rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(152)));
    ctx.set_gpr(21, rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(148)));
    ctx.set_gpr(20, rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(144)));
    ctx.set_gpr(19, rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(140)));
    ctx.set_gpr(18, rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(136)));
    ctx.set_gpr(17, rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(132)));
    ctx.set_gpr(16, rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(128)));
    ctx.set_gpr(2, ctx.gpr[5] + 0u);
    jump_target = ctx.gpr[31];
    ctx.set_gpr(29, ctx.gpr[29] + static_cast<std::uint32_t>(176));
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_0880F764:
    ctx.set_gpr(6, rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(104)));
    ctx.set_gpr(7, rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(108)));
    ctx.set_gpr(4, ctx.gpr[23] + 0u);
    ctx.set_gpr(8, ctx.gpr[29] + static_cast<std::uint32_t>(4));
    ctx.set_gpr(31, 0x0880F77Cu);
    ctx.set_gpr(9, ctx.gpr[29] + 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0004_entry, 4u, 4u, 0x08814028u>(ctx, &aot_mem) && ctx.pc == 0x0880F77Cu) goto L_0880F77C;
    return;
L_0880F77C:
    ctx.set_gpr(6, (ctx.gpr[19] >> 20u) & 0x000007FFu);
    { const bool branch_taken = ctx.gpr[6] == 0u;
    ctx.set_gpr(30, ctx.gpr[2] + 0u);
      if (branch_taken) {
          goto L_0880F9C8;
      }
      goto L_0880F788;
    }
L_0880F788:
    ctx.set_gpr(5, rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(108)));
    ctx.set_gpr(4, rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(104)));
    ctx.set_gpr(21, rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(0)));
    ctx.set_gpr(3, ctx.gpr[5] + 0u);
    ctx.set_gpr(3, (ctx.gpr[3] & ~0xFFF00000u) | ((0u & 0x00000FFFu) << 20u));
    ctx.set_gpr(2, 16368u << 16u);
    ctx.set_gpr(5, ctx.gpr[3] | ctx.gpr[2]);
    ctx.set_gpr(20, ctx.gpr[6] + static_cast<std::uint32_t>(-1023));
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(40), 0u);
    goto L_0880F7AC;
L_0880F7AC:
    ctx.set_gpr(2, 2225u << 16u);
    ctx.set_gpr(6, rt.memory().aot_load32(ctx.gpr[2] + static_cast<std::uint32_t>(656)));
    ctx.set_gpr(31, 0x0880F7BCu);
    ctx.set_gpr(7, rt.memory().aot_load32(ctx.gpr[2] + static_cast<std::uint32_t>(660)));
    if (rt.invoke_chained_direct<&recomp_unit_0006_entry, 6u, 768u, 0x0881F368u>(ctx, &aot_mem) && ctx.pc == 0x0880F7BCu) goto L_0880F7BC;
    return;
L_0880F7BC:
    ctx.set_gpr(4, 2225u << 16u);
    ctx.set_gpr(6, rt.memory().aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(664)));
    ctx.set_gpr(7, rt.memory().aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(668)));
    ctx.set_gpr(5, ctx.gpr[3] + 0u);
    ctx.set_gpr(31, 0x0880F7D4u);
    ctx.set_gpr(4, ctx.gpr[2] + 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0006_entry, 6u, 778u, 0x0881F44Cu>(ctx, &aot_mem) && ctx.pc == 0x0880F7D4u) goto L_0880F7D4;
    return;
L_0880F7D4:
    ctx.set_gpr(4, 2225u << 16u);
    ctx.set_gpr(6, rt.memory().aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(672)));
    ctx.set_gpr(7, rt.memory().aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(676)));
    ctx.set_gpr(5, ctx.gpr[3] + 0u);
    ctx.set_gpr(31, 0x0880F7ECu);
    ctx.set_gpr(4, ctx.gpr[2] + 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0006_entry, 6u, 773u, 0x0881F3E0u>(ctx, &aot_mem) && ctx.pc == 0x0880F7ECu) goto L_0880F7EC;
    return;
L_0880F7EC:
    ctx.set_gpr(4, ctx.gpr[20] + 0u);
    ctx.set_gpr(16, ctx.gpr[2] + 0u);
    ctx.set_gpr(31, 0x0880F7FCu);
    ctx.set_gpr(17, ctx.gpr[3] + 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0006_entry, 6u, 941u, 0x0881FF1Cu>(ctx, &aot_mem) && ctx.pc == 0x0880F7FCu) goto L_0880F7FC;
    return;
L_0880F7FC:
    ctx.set_gpr(4, 2225u << 16u);
    ctx.set_gpr(6, rt.memory().aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(680)));
    ctx.set_gpr(7, rt.memory().aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(684)));
    ctx.set_gpr(5, ctx.gpr[3] + 0u);
    ctx.set_gpr(31, 0x0880F814u);
    ctx.set_gpr(4, ctx.gpr[2] + 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0006_entry, 6u, 778u, 0x0881F44Cu>(ctx, &aot_mem) && ctx.pc == 0x0880F814u) goto L_0880F814;
    return;
L_0880F814:
    ctx.set_gpr(6, ctx.gpr[2] + 0u);
    ctx.set_gpr(4, ctx.gpr[16] + 0u);
    ctx.set_gpr(5, ctx.gpr[17] + 0u);
    ctx.set_gpr(31, 0x0880F828u);
    ctx.set_gpr(7, ctx.gpr[3] + 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0006_entry, 6u, 773u, 0x0881F3E0u>(ctx, &aot_mem) && ctx.pc == 0x0880F828u) goto L_0880F828;
    return;
L_0880F828:
    ctx.set_gpr(16, ctx.gpr[2] + 0u);
    ctx.set_gpr(17, ctx.gpr[3] + 0u);
    ctx.set_gpr(4, ctx.gpr[2] + 0u);
    ctx.set_gpr(31, 0x0880F83Cu);
    ctx.set_gpr(5, ctx.gpr[3] + 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0007_entry, 7u, 2u, 0x08820004u>(ctx, &aot_mem) && ctx.pc == 0x0880F83Cu) goto L_0880F83C;
    return;
L_0880F83C:
    ctx.set_gpr(4, ctx.gpr[16] + 0u);
    ctx.set_gpr(5, ctx.gpr[17] + 0u);
    ctx.set_gpr(6, 0u + 0u);
    ctx.set_gpr(7, 0u + 0u);
    ctx.set_gpr(31, 0x0880F854u);
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(60), ctx.gpr[2]);
    if (rt.invoke_chained_direct<&recomp_unit_0006_entry, 6u, 927u, 0x0881FE0Cu>(ctx, &aot_mem) && ctx.pc == 0x0880F854u) goto L_0880F854;
    return;
L_0880F854:
    { const bool branch_taken = static_cast<std::int32_t>(ctx.gpr[2]) < 0;
    // nop
      if (branch_taken) {
          (void)rt.invoke_chained_direct<&recomp_unit_0003_entry, 3u, 156u, 0x08810868u>(ctx, &aot_mem); return;
      }
      goto L_0880F85C;
    }
L_0880F85C:
    ctx.set_gpr(4, rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(60)));
    ctx.set_gpr(3, 0u + static_cast<std::uint32_t>(1));
    ctx.set_gpr(2, ctx.gpr[4] < static_cast<std::uint32_t>(23) ? 1u : 0u);
    { const bool branch_taken = ctx.gpr[2] == 0u;
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(56), ctx.gpr[3]);
      if (branch_taken) {
          goto L_0880F8B0;
      }
      goto L_0880F870;
    }
L_0880F870:
    ctx.set_gpr(2, 2225u << 16u);
    ctx.set_gpr(3, ctx.gpr[4] << 3u);
    ctx.set_gpr(2, ctx.gpr[2] + static_cast<std::uint32_t>(1000));
    ctx.set_gpr(3, ctx.gpr[3] + ctx.gpr[2]);
    ctx.set_gpr(6, rt.memory().aot_load32(ctx.gpr[3] + static_cast<std::uint32_t>(0)));
    ctx.set_gpr(7, rt.memory().aot_load32(ctx.gpr[3] + static_cast<std::uint32_t>(4)));
    ctx.set_gpr(4, rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(104)));
    ctx.set_gpr(5, rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(108)));
    ctx.set_gpr(31, 0x0880F898u);
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(56), 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0006_entry, 6u, 927u, 0x0881FE0Cu>(ctx, &aot_mem) && ctx.pc == 0x0880F898u) goto L_0880F898;
    return;
L_0880F898:
    { const bool branch_taken = static_cast<std::int32_t>(ctx.gpr[2]) >= 0;
    ctx.set_gpr(2, ctx.gpr[21] - ctx.gpr[20]);
      if (branch_taken) {
          goto L_0880F8B4;
      }
      goto L_0880F8A0;
    }
L_0880F8A0:
    ctx.set_gpr(4, rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(60)));
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(56), 0u);
    ctx.set_gpr(4, ctx.gpr[4] + static_cast<std::uint32_t>(-1));
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(60), ctx.gpr[4]);
    goto L_0880F8B0;
L_0880F8B0:
    ctx.set_gpr(2, ctx.gpr[21] - ctx.gpr[20]);
    goto L_0880F8B4;
L_0880F8B4:
    ctx.set_gpr(2, ctx.gpr[2] + static_cast<std::uint32_t>(-1));
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(48), ctx.gpr[2]);
    { const bool branch_taken = static_cast<std::int32_t>(ctx.gpr[2]) < 0;
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(76), 0u);
      if (branch_taken) {
          (void)rt.invoke_chained_direct<&recomp_unit_0003_entry, 3u, 160u, 0x088108B8u>(ctx, &aot_mem); return;
      }
      goto L_0880F8C4;
    }
L_0880F8C4:
    ctx.set_gpr(2, rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(60)));
    { const bool branch_taken = static_cast<std::int32_t>(ctx.gpr[2]) < 0;
    ctx.set_gpr(3, rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(48)));
      if (branch_taken) {
          (void)rt.invoke_chained_direct<&recomp_unit_0003_entry, 3u, 159u, 0x08810898u>(ctx, &aot_mem); return;
      }
      goto L_0880F8D0;
    }
L_0880F8D0:
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(44), ctx.gpr[2]);
    ctx.set_gpr(3, ctx.gpr[3] + ctx.gpr[2]);
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(48), ctx.gpr[3]);
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(72), 0u);
    goto L_0880F8E0;
L_0880F8E0:
    ctx.set_gpr(4, rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(112)));
    ctx.set_gpr(2, ctx.gpr[4] < static_cast<std::uint32_t>(10) ? 1u : 0u);
    if (ctx.gpr[2] == 0u) {
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(112), 0u);
        goto L_0880FA28;
    }
    goto L_0880F8F0;
L_0880F8F0:
    ctx.set_gpr(2, static_cast<std::int32_t>(ctx.gpr[4]) < 6 ? 1u : 0u);
    { const bool branch_taken = ctx.gpr[2] != 0u;
    ctx.set_gpr(16, 0u + static_cast<std::uint32_t>(1));
      if (branch_taken) {
          goto L_0880F908;
      }
      goto L_0880F8FC;
    }
L_0880F8FC:
    ctx.set_gpr(4, ctx.gpr[4] + static_cast<std::uint32_t>(-4));
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(112), ctx.gpr[4]);
    ctx.set_gpr(16, 0u + 0u);
    goto L_0880F908;
L_0880F908:
    ctx.set_gpr(3, rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(112)));
    ctx.set_gpr(2, ctx.gpr[3] < static_cast<std::uint32_t>(6) ? 1u : 0u);
    if (ctx.gpr[2] == 0u) {
    ctx.set_gpr(3, 0u + static_cast<std::uint32_t>(-1));
        (void)rt.invoke_chained_direct<&recomp_unit_0003_entry, 3u, 87u, 0x08810450u>(ctx, &aot_mem); return;
    }
    goto L_0880F918;
L_0880F918:
    ctx.set_gpr(2, ctx.gpr[3] << 2u);
    ctx.set_gpr(3, 2225u << 16u);
    ctx.set_gpr(3, ctx.gpr[3] + static_cast<std::uint32_t>(728));
    ctx.set_gpr(2, ctx.gpr[2] + ctx.gpr[3]);
    ctx.set_gpr(4, rt.memory().aot_load32(ctx.gpr[2] + static_cast<std::uint32_t>(0)));
    jump_target = ctx.gpr[4];
    // nop
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_0880F934:
    ctx.set_gpr(3, rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(120)));
    ctx.set_gpr(2, 0u + static_cast<std::uint32_t>(9999));
    { const bool branch_taken = ctx.gpr[18] == 0u;
    rt.memory().aot_store32(ctx.gpr[3] + static_cast<std::uint32_t>(0), ctx.gpr[2]);
      if (branch_taken) {
          goto L_0880F9AC;
      }
      goto L_0880F944;
    }
L_0880F944:
    ctx.set_gpr(2, 2225u << 16u);
    goto L_0880F948;
L_0880F948:
    ctx.set_gpr(5, ctx.gpr[2] + static_cast<std::uint32_t>(640));
    goto L_0880F94C;
L_0880F94C:
    ctx.set_gpr(4, rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(176)));
    { const bool branch_taken = ctx.gpr[4] == 0u;
    ctx.set_gpr(3, ctx.gpr[5] + static_cast<std::uint32_t>(3));
      if (branch_taken) {
          goto L_0880F730;
      }
      goto L_0880F958;
    }
L_0880F958:
    ctx.set_gpr(2, static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int8_t>(rt.memory().aot_load8(ctx.gpr[5] + static_cast<std::uint32_t>(3))))));
    ctx.set_gpr(4, ctx.gpr[5] + static_cast<std::uint32_t>(8));
    if (ctx.gpr[2] != 0u) ctx.set_gpr(3, ctx.gpr[4]);
    ctx.set_gpr(2, rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(176)));
    rt.memory().aot_store32(ctx.gpr[2] + static_cast<std::uint32_t>(0), ctx.gpr[3]);
    ctx.set_gpr(2, ctx.gpr[5] + 0u);
    ctx.set_gpr(31, rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(164)));
    ctx.set_gpr(30, rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(160)));
    ctx.set_gpr(23, rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(156)));
    ctx.set_gpr(22, rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(152)));
    ctx.set_gpr(21, rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(148)));
    ctx.set_gpr(20, rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(144)));
    ctx.set_gpr(19, rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(140)));
    ctx.set_gpr(18, rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(136)));
    ctx.set_gpr(17, rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(132)));
    ctx.set_gpr(16, rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(128)));
    jump_target = ctx.gpr[31];
    ctx.set_gpr(29, ctx.gpr[29] + static_cast<std::uint32_t>(176));
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_0880F9A0:
    ctx.set_gpr(19, (ctx.gpr[19] & ~0x80000000u) | ((0u & 0x00000001u) << 31u));
    rt.memory().aot_store32(ctx.gpr[16] + static_cast<std::uint32_t>(0), ctx.gpr[2]);
    goto L_0880F6D8;
L_0880F9AC:
    ctx.set_gpr(2, ctx.gpr[19] + 0u);
    ctx.set_gpr(2, (ctx.gpr[2] & ~0xFFF00000u) | ((0u & 0x00000FFFu) << 20u));
    { const bool branch_taken = ctx.gpr[2] != 0u;
    ctx.set_gpr(2, 2225u << 16u);
      if (branch_taken) {
          goto L_0880F948;
      }
      goto L_0880F9BC;
    }
L_0880F9BC:
    ctx.set_gpr(2, 2225u << 16u);
    ctx.set_gpr(5, ctx.gpr[2] + static_cast<std::uint32_t>(628));
    goto L_0880F94C;
L_0880F9C8:
    ctx.set_gpr(2, rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(4)));
    ctx.set_gpr(21, rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(0)));
    ctx.set_gpr(20, ctx.gpr[21] + ctx.gpr[2]);
    ctx.set_gpr(5, ctx.gpr[20] + static_cast<std::uint32_t>(1074));
    ctx.set_gpr(2, 0u - ctx.gpr[5]);
    ctx.set_gpr(3, static_cast<std::int32_t>(ctx.gpr[5]) < 33 ? 1u : 0u);
    { const bool branch_taken = ctx.gpr[3] != 0u;
    ctx.set_gpr(17, ctx.gpr[18] << (ctx.gpr[2] & 31u));
      if (branch_taken) {
          goto L_0880F9FC;
      }
      goto L_0880F9E8;
    }
L_0880F9E8:
    ctx.set_gpr(3, ctx.gpr[2] + 0u);
    ctx.set_gpr(2, ctx.gpr[20] + static_cast<std::uint32_t>(1042));
    ctx.set_gpr(3, ctx.gpr[19] << (ctx.gpr[3] & 31u));
    ctx.set_gpr(2, ctx.gpr[18] >> (ctx.gpr[2] & 31u));
    ctx.set_gpr(17, ctx.gpr[3] | ctx.gpr[2]);
    goto L_0880F9FC;
L_0880F9FC:
    ctx.set_gpr(31, 0x0880FA04u);
    ctx.set_gpr(4, ctx.gpr[17] + 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0006_entry, 6u, 941u, 0x0881FF1Cu>(ctx, &aot_mem) && ctx.pc == 0x0880FA04u) goto L_0880FA04;
    return;
L_0880FA04:
    ctx.set_gpr(4, ctx.gpr[2] + 0u);
    { const bool branch_taken = static_cast<std::int32_t>(ctx.gpr[17]) < 0;
    ctx.set_gpr(5, ctx.gpr[3] + 0u);
      if (branch_taken) {
          (void)rt.invoke_chained_direct<&recomp_unit_0003_entry, 3u, 103u, 0x08810560u>(ctx, &aot_mem); return;
      }
      goto L_0880FA10;
    }
L_0880FA10:
    ctx.set_gpr(2, 65040u << 16u);
    ctx.set_gpr(5, ctx.gpr[2] + ctx.gpr[5]);
    ctx.set_gpr(20, ctx.gpr[20] + static_cast<std::uint32_t>(-1));
    ctx.set_gpr(2, 0u + static_cast<std::uint32_t>(1));
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(40), ctx.gpr[2]);
    goto L_0880F7AC;
L_0880FA28:
    ctx.set_gpr(16, 0u + static_cast<std::uint32_t>(1));
    goto L_0880FA2C;
L_0880FA2C:
    ctx.set_gpr(4, 0u + static_cast<std::uint32_t>(-1));
    ctx.set_gpr(3, 0u + static_cast<std::uint32_t>(1));
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(64), ctx.gpr[4]);
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(68), ctx.gpr[4]);
    ctx.set_gpr(4, 0u + static_cast<std::uint32_t>(18));
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(52), ctx.gpr[3]);
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(116), 0u);
    goto L_0880FA48;
L_0880FA48:
    ctx.set_gpr(2, ctx.gpr[4] < static_cast<std::uint32_t>(24) ? 1u : 0u);
    { const bool branch_taken = ctx.gpr[2] != 0u;
    rt.memory().aot_store32(ctx.gpr[23] + static_cast<std::uint32_t>(68), 0u);
      if (branch_taken) {
          goto L_0880FA74;
      }
      goto L_0880FA54;
    }
L_0880FA54:
    ctx.set_gpr(3, 0u + static_cast<std::uint32_t>(4));
    ctx.set_gpr(5, 0u + 0u);
    goto L_0880FA5C;
L_0880FA5C:
    ctx.set_gpr(3, ctx.gpr[3] << 1u);
    ctx.set_gpr(2, ctx.gpr[3] + static_cast<std::uint32_t>(20));
    ctx.set_gpr(2, ctx.gpr[4] < ctx.gpr[2] ? 1u : 0u);
    { const bool branch_taken = ctx.gpr[2] == 0u;
    ctx.set_gpr(5, ctx.gpr[5] + static_cast<std::uint32_t>(1));
      if (branch_taken) {
          goto L_0880FA5C;
      }
      goto L_0880FA70;
    }
L_0880FA70:
    rt.memory().aot_store32(ctx.gpr[23] + static_cast<std::uint32_t>(68), ctx.gpr[5]);
    goto L_0880FA74;
L_0880FA74:
    ctx.set_gpr(5, rt.memory().aot_load32(ctx.gpr[23] + static_cast<std::uint32_t>(68)));
    ctx.set_gpr(31, 0x0880FA80u);
    ctx.set_gpr(4, ctx.gpr[23] + 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0004_entry, 4u, 26u, 0x08814348u>(ctx, &aot_mem) && ctx.pc == 0x0880FA80u) goto L_0880FA80;
    return;
L_0880FA80:
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(96), ctx.gpr[2]);
    ctx.set_gpr(3, rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(68)));
    ctx.set_gpr(4, rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(96)));
    ctx.set_gpr(2, ctx.gpr[3] < static_cast<std::uint32_t>(15) ? 1u : 0u);
    { const bool branch_taken = ctx.gpr[2] == 0u;
    rt.memory().aot_store32(ctx.gpr[23] + static_cast<std::uint32_t>(64), ctx.gpr[4]);
      if (branch_taken) {
          goto L_0880FE30;
      }
      goto L_0880FA98;
    }
L_0880FA98:
    { const bool branch_taken = ctx.gpr[16] == 0u;
    ctx.set_gpr(3, rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(4)));
      if (branch_taken) {
          goto L_0880FE34;
      }
      goto L_0880FAA0;
    }
L_0880FAA0:
    ctx.set_gpr(2, rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(60)));
    { const bool branch_taken = static_cast<std::int32_t>(ctx.gpr[2]) <= 0;
    ctx.set_gpr(3, rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(60)));
      if (branch_taken) {
          (void)rt.invoke_chained_direct<&recomp_unit_0003_entry, 3u, 129u, 0x088106D8u>(ctx, &aot_mem); return;
      }
      goto L_0880FAAC;
    }
L_0880FAAC:
    ctx.set_gpr(2, ctx.gpr[2] & 15u);
    ctx.set_gpr(2, ctx.gpr[2] << 3u);
    ctx.set_gpr(16, static_cast<std::uint32_t>(static_cast<std::int32_t>(ctx.gpr[3]) >> 4u));
    ctx.set_gpr(3, 2225u << 16u);
    ctx.set_gpr(3, ctx.gpr[3] + static_cast<std::uint32_t>(1000));
    ctx.set_gpr(2, ctx.gpr[2] + ctx.gpr[3]);
    ctx.set_gpr(4, ctx.gpr[16] & 16u);
    ctx.set_gpr(20, rt.memory().aot_load32(ctx.gpr[2] + static_cast<std::uint32_t>(0)));
    ctx.set_gpr(21, rt.memory().aot_load32(ctx.gpr[2] + static_cast<std::uint32_t>(4)));
    { const bool branch_taken = ctx.gpr[4] == 0u;
    ctx.set_gpr(22, 0u + static_cast<std::uint32_t>(2));
      if (branch_taken) {
          goto L_0880FB00;
      }
      goto L_0880FAD8;
    }
L_0880FAD8:
    ctx.set_gpr(2, 2225u << 16u);
    ctx.set_gpr(6, rt.memory().aot_load32(ctx.gpr[2] + static_cast<std::uint32_t>(992)));
    ctx.set_gpr(7, rt.memory().aot_load32(ctx.gpr[2] + static_cast<std::uint32_t>(996)));
    ctx.set_gpr(4, rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(104)));
    ctx.set_gpr(5, rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(108)));
    ctx.set_gpr(16, ctx.gpr[16] & 15u);
    ctx.set_gpr(31, 0x0880FAF8u);
    ctx.set_gpr(22, 0u + static_cast<std::uint32_t>(3));
    if (rt.invoke_chained_direct<&recomp_unit_0006_entry, 6u, 827u, 0x0881F7D8u>(ctx, &aot_mem) && ctx.pc == 0x0880FAF8u) goto L_0880FAF8;
    return;
L_0880FAF8:
    ctx.set_gpr(18, ctx.gpr[2] + 0u);
    ctx.set_gpr(19, ctx.gpr[3] + 0u);
    goto L_0880FB00;
L_0880FB00:
    { const bool branch_taken = ctx.gpr[16] == 0u;
    ctx.set_gpr(4, ctx.gpr[18] + 0u);
      if (branch_taken) {
          goto L_0880FB4C;
      }
      goto L_0880FB08;
    }
L_0880FB08:
    ctx.set_gpr(2, 2225u << 16u);
    ctx.set_gpr(17, ctx.gpr[2] + static_cast<std::uint32_t>(960));
    goto L_0880FB10;
L_0880FB10:
    ctx.set_gpr(2, ctx.gpr[16] & 1u);
    if (ctx.gpr[2] == 0u) {
    ctx.set_gpr(16, static_cast<std::uint32_t>(static_cast<std::int32_t>(ctx.gpr[16]) >> 1u));
        goto L_0880FB40;
    }
    goto L_0880FB1C;
L_0880FB1C:
    ctx.set_gpr(6, rt.memory().aot_load32(ctx.gpr[17] + static_cast<std::uint32_t>(0)));
    ctx.set_gpr(7, rt.memory().aot_load32(ctx.gpr[17] + static_cast<std::uint32_t>(4)));
    ctx.set_gpr(4, ctx.gpr[20] + 0u);
    ctx.set_gpr(31, 0x0880FB30u);
    ctx.set_gpr(5, ctx.gpr[21] + 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0006_entry, 6u, 778u, 0x0881F44Cu>(ctx, &aot_mem) && ctx.pc == 0x0880FB30u) goto L_0880FB30;
    return;
L_0880FB30:
    ctx.set_gpr(22, ctx.gpr[22] + static_cast<std::uint32_t>(1));
    ctx.set_gpr(20, ctx.gpr[2] + 0u);
    ctx.set_gpr(21, ctx.gpr[3] + 0u);
    ctx.set_gpr(16, static_cast<std::uint32_t>(static_cast<std::int32_t>(ctx.gpr[16]) >> 1u));
    goto L_0880FB40;
L_0880FB40:
    { const bool branch_taken = ctx.gpr[16] != 0u;
    ctx.set_gpr(17, ctx.gpr[17] + static_cast<std::uint32_t>(8));
      if (branch_taken) {
          goto L_0880FB10;
      }
      goto L_0880FB48;
    }
L_0880FB48:
    ctx.set_gpr(4, ctx.gpr[18] + 0u);
    goto L_0880FB4C;
L_0880FB4C:
    ctx.set_gpr(5, ctx.gpr[19] + 0u);
    ctx.set_gpr(6, ctx.gpr[20] + 0u);
    ctx.set_gpr(31, 0x0880FB5Cu);
    ctx.set_gpr(7, ctx.gpr[21] + 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0006_entry, 6u, 827u, 0x0881F7D8u>(ctx, &aot_mem) && ctx.pc == 0x0880FB5Cu) goto L_0880FB5C;
    return;
L_0880FB5C:
    ctx.set_gpr(18, ctx.gpr[2] + 0u);
    ctx.set_gpr(19, ctx.gpr[3] + 0u);
    goto L_0880FB64;
L_0880FB64:
    ctx.set_gpr(2, rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(56)));
    { const bool branch_taken = ctx.gpr[2] == 0u;
    ctx.set_gpr(4, rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(60)));
      if (branch_taken) {
          goto L_0880FB94;
      }
      goto L_0880FB70;
    }
L_0880FB70:
    ctx.set_gpr(2, 2225u << 16u);
    ctx.set_gpr(6, rt.memory().aot_load32(ctx.gpr[2] + static_cast<std::uint32_t>(688)));
    ctx.set_gpr(7, rt.memory().aot_load32(ctx.gpr[2] + static_cast<std::uint32_t>(692)));
    ctx.set_gpr(4, ctx.gpr[18] + 0u);
    ctx.set_gpr(31, 0x0880FB88u);
    ctx.set_gpr(5, ctx.gpr[19] + 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0006_entry, 6u, 927u, 0x0881FE0Cu>(ctx, &aot_mem) && ctx.pc == 0x0880FB88u) goto L_0880FB88;
    return;
L_0880FB88:
    { const bool branch_taken = static_cast<std::int32_t>(ctx.gpr[2]) < 0;
    ctx.set_gpr(3, rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(68)));
      if (branch_taken) {
          (void)rt.invoke_chained_direct<&recomp_unit_0003_entry, 3u, 148u, 0x088107F0u>(ctx, &aot_mem); return;
      }
      goto L_0880FB90;
    }
L_0880FB90:
    ctx.set_gpr(4, rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(60)));
    goto L_0880FB94;
L_0880FB94:
    ctx.set_gpr(20, rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(68)));
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(16), ctx.gpr[4]);
    goto L_0880FB9C;
L_0880FB9C:
    ctx.set_gpr(31, 0x0880FBA4u);
    ctx.set_gpr(4, ctx.gpr[22] + 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0006_entry, 6u, 941u, 0x0881FF1Cu>(ctx, &aot_mem) && ctx.pc == 0x0880FBA4u) goto L_0880FBA4;
    return;
L_0880FBA4:
    ctx.set_gpr(4, ctx.gpr[2] + 0u);
    ctx.set_gpr(5, ctx.gpr[3] + 0u);
    ctx.set_gpr(6, ctx.gpr[18] + 0u);
    ctx.set_gpr(31, 0x0880FBB8u);
    ctx.set_gpr(7, ctx.gpr[19] + 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0006_entry, 6u, 778u, 0x0881F44Cu>(ctx, &aot_mem) && ctx.pc == 0x0880FBB8u) goto L_0880FBB8;
    return;
L_0880FBB8:
    ctx.set_gpr(4, 2225u << 16u);
    ctx.set_gpr(6, rt.memory().aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(704)));
    ctx.set_gpr(7, rt.memory().aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(708)));
    ctx.set_gpr(5, ctx.gpr[3] + 0u);
    ctx.set_gpr(31, 0x0880FBD0u);
    ctx.set_gpr(4, ctx.gpr[2] + 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0006_entry, 6u, 773u, 0x0881F3E0u>(ctx, &aot_mem) && ctx.pc == 0x0880FBD0u) goto L_0880FBD0;
    return;
L_0880FBD0:
    ctx.set_gpr(16, ctx.gpr[2] + 0u);
    ctx.set_gpr(2, 64704u << 16u);
    { const bool branch_taken = ctx.gpr[20] != 0u;
    ctx.set_gpr(17, ctx.gpr[2] + ctx.gpr[3]);
      if (branch_taken) {
          goto L_0880FC60;
      }
      goto L_0880FBE0;
    }
L_0880FBE0:
    ctx.set_gpr(2, 2225u << 16u);
    ctx.set_gpr(6, rt.memory().aot_load32(ctx.gpr[2] + static_cast<std::uint32_t>(712)));
    ctx.set_gpr(7, rt.memory().aot_load32(ctx.gpr[2] + static_cast<std::uint32_t>(716)));
    ctx.set_gpr(4, ctx.gpr[18] + 0u);
    ctx.set_gpr(31, 0x0880FBF8u);
    ctx.set_gpr(5, ctx.gpr[19] + 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0006_entry, 6u, 768u, 0x0881F368u>(ctx, &aot_mem) && ctx.pc == 0x0880FBF8u) goto L_0880FBF8;
    return;
L_0880FBF8:
    ctx.set_gpr(4, ctx.gpr[2] + 0u);
    ctx.set_gpr(5, ctx.gpr[3] + 0u);
    ctx.set_gpr(6, ctx.gpr[16] + 0u);
    ctx.set_gpr(7, ctx.gpr[17] + 0u);
    ctx.set_gpr(18, ctx.gpr[2] + 0u);
    ctx.set_gpr(31, 0x0880FC14u);
    ctx.set_gpr(19, ctx.gpr[3] + 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0006_entry, 6u, 913u, 0x0881FCCCu>(ctx, &aot_mem) && ctx.pc == 0x0880FC14u) goto L_0880FC14;
    return;
L_0880FC14:
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(20), 0u);
    { const bool branch_taken = static_cast<std::int32_t>(ctx.gpr[2]) > 0;
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(32), 0u);
      if (branch_taken) {
          (void)rt.invoke_chained_direct<&recomp_unit_0003_entry, 3u, 117u, 0x0881063Cu>(ctx, &aot_mem); return;
      }
      goto L_0880FC20;
    }
L_0880FC20:
    ctx.set_gpr(2, 32768u << 16u);
    ctx.set_gpr(6, ctx.gpr[16] + 0u);
    ctx.set_gpr(7, ctx.gpr[17] ^ ctx.gpr[2]);
    ctx.set_gpr(4, ctx.gpr[18] + 0u);
    ctx.set_gpr(31, 0x0880FC38u);
    ctx.set_gpr(5, ctx.gpr[19] + 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0006_entry, 6u, 927u, 0x0881FE0Cu>(ctx, &aot_mem) && ctx.pc == 0x0880FC38u) goto L_0880FC38;
    return;
L_0880FC38:
    { const bool branch_taken = static_cast<std::int32_t>(ctx.gpr[2]) >= 0;
    ctx.set_gpr(18, rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(104)));
      if (branch_taken) {
          goto L_0880FE2C;
      }
      goto L_0880FC40;
    }
L_0880FC40:
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(20), 0u);
    goto L_0880FC44;
L_0880FC44:
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(32), 0u);
    goto L_0880FC48;
L_0880FC48:
    ctx.set_gpr(4, rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(116)));
    ctx.set_gpr(22, rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(96)));
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(36), 0u);
    ctx.set_gpr(4, ~(0u | ctx.gpr[4]));
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(16), ctx.gpr[4]);
    (void)rt.invoke_chained_direct<&recomp_unit_0003_entry, 3u, 75u, 0x088103ACu>(ctx, &aot_mem); return;
L_0880FC60:
    ctx.set_gpr(2, rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(52)));
    { const bool branch_taken = ctx.gpr[2] == 0u;
    ctx.set_gpr(2, 2225u << 16u);
      if (branch_taken) {
          (void)rt.invoke_chained_direct<&recomp_unit_0003_entry, 3u, 182u, 0x088109BCu>(ctx, &aot_mem); return;
      }
      goto L_0880FC6C;
    }
L_0880FC6C:
    ctx.set_gpr(2, ctx.gpr[2] + static_cast<std::uint32_t>(1000));
    ctx.set_gpr(8, ctx.gpr[20] << 3u);
    ctx.set_gpr(8, ctx.gpr[8] + ctx.gpr[2]);
    ctx.set_gpr(3, 2225u << 16u);
    ctx.set_gpr(6, rt.memory().aot_load32(ctx.gpr[8] + static_cast<std::uint32_t>(-8)));
    ctx.set_gpr(7, rt.memory().aot_load32(ctx.gpr[8] + static_cast<std::uint32_t>(-4)));
    ctx.set_gpr(4, rt.memory().aot_load32(ctx.gpr[3] + static_cast<std::uint32_t>(720)));
    ctx.set_gpr(5, rt.memory().aot_load32(ctx.gpr[3] + static_cast<std::uint32_t>(724)));
    ctx.set_gpr(3, rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(96)));
    ctx.set_gpr(31, 0x0880FC98u);
    ctx.set_gpr(22, ctx.gpr[3] + static_cast<std::uint32_t>(1));
    if (rt.invoke_chained_direct<&recomp_unit_0006_entry, 6u, 827u, 0x0881F7D8u>(ctx, &aot_mem) && ctx.pc == 0x0880FC98u) goto L_0880FC98;
    return;
L_0880FC98:
    ctx.set_gpr(4, ctx.gpr[2] + 0u);
    ctx.set_gpr(6, ctx.gpr[16] + 0u);
    ctx.set_gpr(7, ctx.gpr[17] + 0u);
    ctx.set_gpr(31, 0x0880FCACu);
    ctx.set_gpr(5, ctx.gpr[3] + 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0006_entry, 6u, 768u, 0x0881F368u>(ctx, &aot_mem) && ctx.pc == 0x0880FCACu) goto L_0880FCAC;
    return;
L_0880FCAC:
    ctx.set_gpr(5, ctx.gpr[19] + 0u);
    ctx.set_gpr(4, ctx.gpr[18] + 0u);
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(28), ctx.gpr[3]);
    ctx.set_gpr(31, 0x0880FCC0u);
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(24), ctx.gpr[2]);
    if (rt.invoke_chained_direct<&recomp_unit_0007_entry, 7u, 2u, 0x08820004u>(ctx, &aot_mem) && ctx.pc == 0x0880FCC0u) goto L_0880FCC0;
    return;
L_0880FCC0:
    ctx.set_gpr(4, ctx.gpr[2] + 0u);
    ctx.set_gpr(31, 0x0880FCCCu);
    ctx.set_gpr(16, ctx.gpr[2] + 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0006_entry, 6u, 941u, 0x0881FF1Cu>(ctx, &aot_mem) && ctx.pc == 0x0880FCCCu) goto L_0880FCCC;
    return;
L_0880FCCC:
    ctx.set_gpr(6, ctx.gpr[2] + 0u);
    ctx.set_gpr(4, ctx.gpr[18] + 0u);
    ctx.set_gpr(5, ctx.gpr[19] + 0u);
    ctx.set_gpr(31, 0x0880FCE0u);
    ctx.set_gpr(7, ctx.gpr[3] + 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0006_entry, 6u, 768u, 0x0881F368u>(ctx, &aot_mem) && ctx.pc == 0x0880FCE0u) goto L_0880FCE0;
    return;
L_0880FCE0:
    ctx.set_gpr(4, rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(96)));
    ctx.set_gpr(16, ctx.gpr[16] + static_cast<std::uint32_t>(48));
    ctx.set_gpr(6, ctx.gpr[2] + 0u);
    rt.memory().aot_store8(ctx.gpr[4] + static_cast<std::uint32_t>(0), static_cast<std::uint8_t>(ctx.gpr[16]));
    ctx.set_gpr(7, ctx.gpr[3] + 0u);
    ctx.set_gpr(18, ctx.gpr[2] + 0u);
    ctx.set_gpr(4, rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(24)));
    ctx.set_gpr(5, rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(28)));
    ctx.set_gpr(31, 0x0880FD08u);
    ctx.set_gpr(19, ctx.gpr[3] + 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0006_entry, 6u, 913u, 0x0881FCCCu>(ctx, &aot_mem) && ctx.pc == 0x0880FD08u) goto L_0880FD08;
    return;
L_0880FD08:
    { const bool branch_taken = static_cast<std::int32_t>(ctx.gpr[2]) > 0;
    ctx.set_gpr(4, ctx.gpr[23] + 0u);
      if (branch_taken) {
          (void)rt.invoke_chained_direct<&recomp_unit_0003_entry, 3u, 84u, 0x088103F0u>(ctx, &aot_mem); return;
      }
      goto L_0880FD10;
    }
L_0880FD10:
    ctx.set_gpr(2, 2225u << 16u);
    ctx.set_gpr(4, rt.memory().aot_load32(ctx.gpr[2] + static_cast<std::uint32_t>(688)));
    ctx.set_gpr(5, rt.memory().aot_load32(ctx.gpr[2] + static_cast<std::uint32_t>(692)));
    ctx.set_gpr(6, ctx.gpr[18] + 0u);
    ctx.set_gpr(31, 0x0880FD28u);
    ctx.set_gpr(7, ctx.gpr[19] + 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0006_entry, 6u, 768u, 0x0881F368u>(ctx, &aot_mem) && ctx.pc == 0x0880FD28u) goto L_0880FD28;
    return;
L_0880FD28:
    ctx.set_gpr(4, rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(24)));
    ctx.set_gpr(5, rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(28)));
    ctx.set_gpr(6, ctx.gpr[2] + 0u);
    ctx.set_gpr(31, 0x0880FD3Cu);
    ctx.set_gpr(7, ctx.gpr[3] + 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0006_entry, 6u, 913u, 0x0881FCCCu>(ctx, &aot_mem) && ctx.pc == 0x0880FD3Cu) goto L_0880FD3C;
    return;
L_0880FD3C:
    { const bool branch_taken = static_cast<std::int32_t>(ctx.gpr[2]) > 0;
    ctx.set_gpr(5, ctx.gpr[22] + 0u);
      if (branch_taken) {
          goto L_0880FF84;
      }
      goto L_0880FD44;
    }
L_0880FD44:
    ctx.set_gpr(2, static_cast<std::int32_t>(ctx.gpr[20]) < 2 ? 1u : 0u);
    { const bool branch_taken = ctx.gpr[2] != 0u;
    ctx.set_gpr(21, 0u + static_cast<std::uint32_t>(1));
      if (branch_taken) {
          goto L_0880FE28;
      }
      goto L_0880FD50;
    }
L_0880FD50:
    ctx.set_gpr(3, 2225u << 16u);
    goto L_0880FD54;
L_0880FD54:
    ctx.set_gpr(16, rt.memory().aot_load32(ctx.gpr[3] + static_cast<std::uint32_t>(696)));
    ctx.set_gpr(17, rt.memory().aot_load32(ctx.gpr[3] + static_cast<std::uint32_t>(700)));
    ctx.set_gpr(4, rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(24)));
    ctx.set_gpr(5, rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(28)));
    ctx.set_gpr(6, ctx.gpr[16] + 0u);
    ctx.set_gpr(31, 0x0880FD70u);
    ctx.set_gpr(7, ctx.gpr[17] + 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0006_entry, 6u, 778u, 0x0881F44Cu>(ctx, &aot_mem) && ctx.pc == 0x0880FD70u) goto L_0880FD70;
    return;
L_0880FD70:
    ctx.set_gpr(6, ctx.gpr[16] + 0u);
    ctx.set_gpr(7, ctx.gpr[17] + 0u);
    ctx.set_gpr(4, ctx.gpr[18] + 0u);
    ctx.set_gpr(5, ctx.gpr[19] + 0u);
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(24), ctx.gpr[2]);
    ctx.set_gpr(31, 0x0880FD8Cu);
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(28), ctx.gpr[3]);
    if (rt.invoke_chained_direct<&recomp_unit_0006_entry, 6u, 778u, 0x0881F44Cu>(ctx, &aot_mem) && ctx.pc == 0x0880FD8Cu) goto L_0880FD8C;
    return;
L_0880FD8C:
    ctx.set_gpr(5, ctx.gpr[3] + 0u);
    ctx.set_gpr(4, ctx.gpr[2] + 0u);
    ctx.set_gpr(19, ctx.gpr[3] + 0u);
    ctx.set_gpr(31, 0x0880FDA0u);
    ctx.set_gpr(18, ctx.gpr[2] + 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0007_entry, 7u, 2u, 0x08820004u>(ctx, &aot_mem) && ctx.pc == 0x0880FDA0u) goto L_0880FDA0;
    return;
L_0880FDA0:
    ctx.set_gpr(4, ctx.gpr[2] + 0u);
    ctx.set_gpr(31, 0x0880FDACu);
    ctx.set_gpr(16, ctx.gpr[2] + 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0006_entry, 6u, 941u, 0x0881FF1Cu>(ctx, &aot_mem) && ctx.pc == 0x0880FDACu) goto L_0880FDAC;
    return;
L_0880FDAC:
    ctx.set_gpr(6, ctx.gpr[2] + 0u);
    ctx.set_gpr(4, ctx.gpr[18] + 0u);
    ctx.set_gpr(5, ctx.gpr[19] + 0u);
    ctx.set_gpr(7, ctx.gpr[3] + 0u);
    ctx.set_gpr(31, 0x0880FDC4u);
    ctx.set_gpr(16, ctx.gpr[16] + static_cast<std::uint32_t>(48));
    if (rt.invoke_chained_direct<&recomp_unit_0006_entry, 6u, 768u, 0x0881F368u>(ctx, &aot_mem) && ctx.pc == 0x0880FDC4u) goto L_0880FDC4;
    return;
L_0880FDC4:
    rt.memory().aot_store8(ctx.gpr[22] + static_cast<std::uint32_t>(0), static_cast<std::uint8_t>(ctx.gpr[16]));
    ctx.set_gpr(6, ctx.gpr[2] + 0u);
    ctx.set_gpr(7, ctx.gpr[3] + 0u);
    ctx.set_gpr(4, rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(24)));
    ctx.set_gpr(5, rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(28)));
    ctx.set_gpr(18, ctx.gpr[2] + 0u);
    ctx.set_gpr(19, ctx.gpr[3] + 0u);
    ctx.set_gpr(31, 0x0880FDE8u);
    ctx.set_gpr(22, ctx.gpr[22] + static_cast<std::uint32_t>(1));
    if (rt.invoke_chained_direct<&recomp_unit_0006_entry, 6u, 913u, 0x0881FCCCu>(ctx, &aot_mem) && ctx.pc == 0x0880FDE8u) goto L_0880FDE8;
    return;
L_0880FDE8:
    { const bool branch_taken = static_cast<std::int32_t>(ctx.gpr[2]) > 0;
    ctx.set_gpr(2, 2225u << 16u);
      if (branch_taken) {
          (void)rt.invoke_chained_direct<&recomp_unit_0003_entry, 3u, 83u, 0x088103ECu>(ctx, &aot_mem); return;
      }
      goto L_0880FDF0;
    }
L_0880FDF0:
    ctx.set_gpr(4, rt.memory().aot_load32(ctx.gpr[2] + static_cast<std::uint32_t>(688)));
    ctx.set_gpr(5, rt.memory().aot_load32(ctx.gpr[2] + static_cast<std::uint32_t>(692)));
    ctx.set_gpr(6, ctx.gpr[18] + 0u);
    ctx.set_gpr(31, 0x0880FE04u);
    ctx.set_gpr(7, ctx.gpr[19] + 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0006_entry, 6u, 768u, 0x0881F368u>(ctx, &aot_mem) && ctx.pc == 0x0880FE04u) goto L_0880FE04;
    return;
L_0880FE04:
    ctx.set_gpr(4, rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(24)));
    ctx.set_gpr(5, rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(28)));
    ctx.set_gpr(6, ctx.gpr[2] + 0u);
    ctx.set_gpr(31, 0x0880FE18u);
    ctx.set_gpr(7, ctx.gpr[3] + 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0006_entry, 6u, 913u, 0x0881FCCCu>(ctx, &aot_mem) && ctx.pc == 0x0880FE18u) goto L_0880FE18;
    return;
L_0880FE18:
    { const bool branch_taken = static_cast<std::int32_t>(ctx.gpr[2]) > 0;
    ctx.set_gpr(21, ctx.gpr[21] + static_cast<std::uint32_t>(1));
      if (branch_taken) {
          goto L_0880FF80;
      }
      goto L_0880FE20;
    }
L_0880FE20:
    { const bool branch_taken = ctx.gpr[20] != ctx.gpr[21];
    ctx.set_gpr(3, 2225u << 16u);
      if (branch_taken) {
          goto L_0880FD54;
      }
      goto L_0880FE28;
    }
L_0880FE28:
    ctx.set_gpr(18, rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(104)));
    goto L_0880FE2C;
L_0880FE2C:
    ctx.set_gpr(19, rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(108)));
    goto L_0880FE30;
L_0880FE30:
    ctx.set_gpr(3, rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(4)));
    goto L_0880FE34;
L_0880FE34:
    { const bool branch_taken = static_cast<std::int32_t>(ctx.gpr[3]) < 0;
    ctx.set_gpr(4, rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(60)));
      if (branch_taken) {
          goto L_0880FFD8;
      }
      goto L_0880FE3C;
    }
L_0880FE3C:
    ctx.set_gpr(2, static_cast<std::int32_t>(ctx.gpr[4]) < 15 ? 1u : 0u);
    if (ctx.gpr[2] == 0u) {
    ctx.set_gpr(4, rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(52)));
        goto L_0880FFDC;
    }
    goto L_0880FE48;
L_0880FE48:
    ctx.set_gpr(2, 2225u << 16u);
    ctx.set_gpr(2, ctx.gpr[2] + static_cast<std::uint32_t>(1000));
    ctx.set_gpr(3, ctx.gpr[4] << 3u);
    ctx.set_gpr(3, ctx.gpr[3] + ctx.gpr[2]);
    ctx.set_gpr(2, rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(116)));
    ctx.set_gpr(20, rt.memory().aot_load32(ctx.gpr[3] + static_cast<std::uint32_t>(0)));
    { const bool branch_taken = static_cast<std::int32_t>(ctx.gpr[2]) < 0;
    ctx.set_gpr(21, rt.memory().aot_load32(ctx.gpr[3] + static_cast<std::uint32_t>(4)));
      if (branch_taken) {
          (void)rt.invoke_chained_direct<&recomp_unit_0003_entry, 3u, 111u, 0x088105E8u>(ctx, &aot_mem); return;
      }
      goto L_0880FE68;
    }
L_0880FE68:
    ctx.set_gpr(22, rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(96)));
    goto L_0880FE6C;
L_0880FE6C:
    ctx.set_gpr(17, ctx.gpr[19] + 0u);
    ctx.set_gpr(16, ctx.gpr[18] + 0u);
    ctx.set_gpr(19, 0u + static_cast<std::uint32_t>(1));
    goto L_0880FEB0;
L_0880FE7C:
    ctx.set_gpr(2, 2225u << 16u);
    ctx.set_gpr(6, rt.memory().aot_load32(ctx.gpr[2] + static_cast<std::uint32_t>(696)));
    ctx.set_gpr(31, 0x0880FE8Cu);
    ctx.set_gpr(7, rt.memory().aot_load32(ctx.gpr[2] + static_cast<std::uint32_t>(700)));
    if (rt.invoke_chained_direct<&recomp_unit_0006_entry, 6u, 778u, 0x0881F44Cu>(ctx, &aot_mem) && ctx.pc == 0x0880FE8Cu) goto L_0880FE8C;
    return;
L_0880FE8C:
    ctx.set_gpr(4, ctx.gpr[2] + 0u);
    ctx.set_gpr(5, ctx.gpr[3] + 0u);
    ctx.set_gpr(6, 0u + 0u);
    ctx.set_gpr(7, 0u + 0u);
    ctx.set_gpr(16, ctx.gpr[2] + 0u);
    ctx.set_gpr(31, 0x0880FEA8u);
    ctx.set_gpr(17, ctx.gpr[3] + 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0006_entry, 6u, 906u, 0x0881FC44u>(ctx, &aot_mem) && ctx.pc == 0x0880FEA8u) goto L_0880FEA8;
    return;
L_0880FEA8:
    { const bool branch_taken = ctx.gpr[2] == 0u;
    ctx.set_gpr(19, ctx.gpr[19] + static_cast<std::uint32_t>(1));
      if (branch_taken) {
          (void)rt.invoke_chained_direct<&recomp_unit_0003_entry, 3u, 152u, 0x08810838u>(ctx, &aot_mem); return;
      }
      goto L_0880FEB0;
    }
L_0880FEB0:
    ctx.set_gpr(6, ctx.gpr[20] + 0u);
    ctx.set_gpr(7, ctx.gpr[21] + 0u);
    ctx.set_gpr(4, ctx.gpr[16] + 0u);
    ctx.set_gpr(31, 0x0880FEC4u);
    ctx.set_gpr(5, ctx.gpr[17] + 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0006_entry, 6u, 827u, 0x0881F7D8u>(ctx, &aot_mem) && ctx.pc == 0x0880FEC4u) goto L_0880FEC4;
    return;
L_0880FEC4:
    ctx.set_gpr(5, ctx.gpr[3] + 0u);
    ctx.set_gpr(31, 0x0880FED0u);
    ctx.set_gpr(4, ctx.gpr[2] + 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0007_entry, 7u, 2u, 0x08820004u>(ctx, &aot_mem) && ctx.pc == 0x0880FED0u) goto L_0880FED0;
    return;
L_0880FED0:
    ctx.set_gpr(4, ctx.gpr[2] + 0u);
    ctx.set_gpr(31, 0x0880FEDCu);
    ctx.set_gpr(18, ctx.gpr[2] + 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0006_entry, 6u, 941u, 0x0881FF1Cu>(ctx, &aot_mem) && ctx.pc == 0x0880FEDCu) goto L_0880FEDC;
    return;
L_0880FEDC:
    ctx.set_gpr(6, ctx.gpr[2] + 0u);
    ctx.set_gpr(4, ctx.gpr[20] + 0u);
    ctx.set_gpr(5, ctx.gpr[21] + 0u);
    ctx.set_gpr(31, 0x0880FEF0u);
    ctx.set_gpr(7, ctx.gpr[3] + 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0006_entry, 6u, 778u, 0x0881F44Cu>(ctx, &aot_mem) && ctx.pc == 0x0880FEF0u) goto L_0880FEF0;
    return;
L_0880FEF0:
    ctx.set_gpr(6, ctx.gpr[2] + 0u);
    ctx.set_gpr(4, ctx.gpr[16] + 0u);
    ctx.set_gpr(5, ctx.gpr[17] + 0u);
    ctx.set_gpr(31, 0x0880FF04u);
    ctx.set_gpr(7, ctx.gpr[3] + 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0006_entry, 6u, 768u, 0x0881F368u>(ctx, &aot_mem) && ctx.pc == 0x0880FF04u) goto L_0880FF04;
    return;
L_0880FF04:
    ctx.set_gpr(4, ctx.gpr[2] + 0u);
    ctx.set_gpr(2, ctx.gpr[18] + static_cast<std::uint32_t>(48));
    rt.memory().aot_store8(ctx.gpr[22] + static_cast<std::uint32_t>(0), static_cast<std::uint8_t>(ctx.gpr[2]));
    ctx.set_gpr(5, ctx.gpr[3] + 0u);
    ctx.set_gpr(2, rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(68)));
    { const bool branch_taken = ctx.gpr[19] != ctx.gpr[2];
    ctx.set_gpr(22, ctx.gpr[22] + static_cast<std::uint32_t>(1));
      if (branch_taken) {
          goto L_0880FE7C;
      }
      goto L_0880FF20;
    }
L_0880FF20:
    ctx.set_gpr(6, ctx.gpr[4] + 0u);
    ctx.set_gpr(31, 0x0880FF2Cu);
    ctx.set_gpr(7, ctx.gpr[3] + 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0006_entry, 6u, 773u, 0x0881F3E0u>(ctx, &aot_mem) && ctx.pc == 0x0880FF2Cu) goto L_0880FF2C;
    return;
L_0880FF2C:
    ctx.set_gpr(6, ctx.gpr[2] + 0u);
    ctx.set_gpr(4, ctx.gpr[20] + 0u);
    ctx.set_gpr(5, ctx.gpr[21] + 0u);
    ctx.set_gpr(7, ctx.gpr[3] + 0u);
    ctx.set_gpr(16, ctx.gpr[2] + 0u);
    ctx.set_gpr(31, 0x0880FF48u);
    ctx.set_gpr(17, ctx.gpr[3] + 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0006_entry, 6u, 927u, 0x0881FE0Cu>(ctx, &aot_mem) && ctx.pc == 0x0880FF48u) goto L_0880FF48;
    return;
L_0880FF48:
    { const bool branch_taken = static_cast<std::int32_t>(ctx.gpr[2]) < 0;
    ctx.set_gpr(2, rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(60)));
      if (branch_taken) {
          goto L_0880FF7C;
      }
      goto L_0880FF50;
    }
L_0880FF50:
    ctx.set_gpr(4, ctx.gpr[20] + 0u);
    ctx.set_gpr(5, ctx.gpr[21] + 0u);
    ctx.set_gpr(6, ctx.gpr[16] + 0u);
    ctx.set_gpr(31, 0x0880FF64u);
    ctx.set_gpr(7, ctx.gpr[17] + 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0006_entry, 6u, 899u, 0x0881FBBCu>(ctx, &aot_mem) && ctx.pc == 0x0880FF64u) goto L_0880FF64;
    return;
L_0880FF64:
    { const bool branch_taken = ctx.gpr[2] != 0u;
    ctx.set_gpr(3, rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(60)));
      if (branch_taken) {
          (void)rt.invoke_chained_direct<&recomp_unit_0003_entry, 3u, 153u, 0x0881083Cu>(ctx, &aot_mem); return;
      }
      goto L_0880FF6C;
    }
L_0880FF6C:
    ctx.set_gpr(2, ctx.gpr[18] & 1u);
    if (ctx.gpr[2] == 0u) {
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(16), ctx.gpr[3]);
        (void)rt.invoke_chained_direct<&recomp_unit_0003_entry, 3u, 83u, 0x088103ECu>(ctx, &aot_mem); return;
    }
    goto L_0880FF78;
L_0880FF78:
    ctx.set_gpr(2, rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(60)));
    goto L_0880FF7C;
L_0880FF7C:
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(16), ctx.gpr[2]);
    goto L_0880FF80;
L_0880FF80:
    ctx.set_gpr(5, ctx.gpr[22] + 0u);
    goto L_0880FF84;
L_0880FF84:
    ctx.set_gpr(4, 0u + 0u);
    goto L_0880FF88;
L_0880FF88:
    ctx.set_gpr(3, static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int8_t>(rt.memory().aot_load8(ctx.gpr[5] + static_cast<std::uint32_t>(-1))))));
    ctx.set_gpr(2, 0u + static_cast<std::uint32_t>(57));
    { const bool branch_taken = ctx.gpr[3] != ctx.gpr[2];
    ctx.set_gpr(6, ctx.gpr[5] + static_cast<std::uint32_t>(-1));
      if (branch_taken) {
          goto L_0880FFC4;
      }
      goto L_0880FF98;
    }
L_0880FF98:
    ctx.set_gpr(3, rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(96)));
    ctx.set_gpr(4, ctx.gpr[4] + static_cast<std::uint32_t>(1));
    ctx.set_gpr(2, ctx.gpr[22] - ctx.gpr[3]);
    if (ctx.gpr[2] != ctx.gpr[4]) {
    ctx.set_gpr(5, ctx.gpr[6] + 0u);
        goto L_0880FF88;
    }
    goto L_0880FFAC;
L_0880FFAC:
    ctx.set_gpr(4, rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(16)));
    ctx.set_gpr(6, rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(96)));
    ctx.set_gpr(2, 0u + static_cast<std::uint32_t>(48));
    ctx.set_gpr(4, ctx.gpr[4] + static_cast<std::uint32_t>(1));
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(16), ctx.gpr[4]);
    rt.memory().aot_store8(ctx.gpr[6] + static_cast<std::uint32_t>(0), static_cast<std::uint8_t>(ctx.gpr[2]));
    goto L_0880FFC4;
L_0880FFC4:
    ctx.set_gpr(2, rt.memory().aot_load8(ctx.gpr[6] + static_cast<std::uint32_t>(0)));
    ctx.set_gpr(22, ctx.gpr[5] + 0u);
    ctx.set_gpr(2, ctx.gpr[2] + static_cast<std::uint32_t>(1));
    rt.memory().aot_store8(ctx.gpr[6] + static_cast<std::uint32_t>(0), static_cast<std::uint8_t>(ctx.gpr[2]));
    (void)rt.invoke_chained_direct<&recomp_unit_0003_entry, 3u, 83u, 0x088103ECu>(ctx, &aot_mem); return;
L_0880FFD8:
    ctx.set_gpr(4, rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(52)));
    goto L_0880FFDC;
L_0880FFDC:
    { const bool branch_taken = ctx.gpr[4] != 0u;
    ctx.set_gpr(4, rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(112)));
      if (branch_taken) {
          (void)rt.invoke_chained_direct<&recomp_unit_0003_entry, 3u, 90u, 0x08810478u>(ctx, &aot_mem); return;
      }
      goto L_0880FFE4;
    }
L_0880FFE4:
    ctx.set_gpr(2, rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(112)));
    ctx.set_gpr(20, rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(76)));
    ctx.set_gpr(17, rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(72)));
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(20), 0u);
    ctx.set_gpr(21, static_cast<std::int32_t>(ctx.gpr[2]) < 2 ? 1u : 0u);
    goto L_0880FFF8;
L_0880FFF8:
    { const bool branch_taken = static_cast<std::int32_t>(ctx.gpr[20]) <= 0;
    ctx.set_gpr(3, rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(48)));
      if (branch_taken) {
          (void)rt.invoke_chained_direct<&recomp_unit_0003_entry, 3u, 3u, 0x08810020u>(ctx, &aot_mem); return;
      }
      (void)rt.invoke_chained_direct<&recomp_unit_0003_entry, 3u, 1u, 0x08810000u>(ctx, &aot_mem); return;
    }
}

void recomp_unit_0002(Runtime &rt, AllegrexContext &ctx) {
    auto aot_mem = rt.memory().aot_fast_view();
    recomp_unit_0002_entry(rt, ctx, 0u, aot_mem);
}

void register_generated_unit_2(Runtime &runtime) {
    runtime.register_generated_unit(2u, 0x0880C000u, 16384u, &recomp_unit_0002, &recomp_unit_0002_entry);
    runtime.register_function(0x0880C000u, &recomp_unit_0002, "recomp_unit_0002");
    runtime.register_function(0x0880C010u, &recomp_unit_0002, "recomp_unit_0002");
    runtime.register_function(0x0880C034u, &recomp_unit_0002, "recomp_unit_0002");
    runtime.register_function(0x0880C054u, &recomp_unit_0002, "recomp_unit_0002");
    runtime.register_function(0x0880C05Cu, &recomp_unit_0002, "recomp_unit_0002");
    runtime.register_function(0x0880C068u, &recomp_unit_0002, "recomp_unit_0002");
    runtime.register_function(0x0880C070u, &recomp_unit_0002, "recomp_unit_0002");
    runtime.register_function(0x0880C088u, &recomp_unit_0002, "recomp_unit_0002");
    runtime.register_function(0x0880C08Cu, &recomp_unit_0002, "recomp_unit_0002");
    runtime.register_function(0x0880C094u, &recomp_unit_0002, "recomp_unit_0002");
    runtime.register_function(0x0880C0B0u, &recomp_unit_0002, "recomp_unit_0002");
    runtime.register_function(0x0880C0C0u, &recomp_unit_0002, "recomp_unit_0002");
    runtime.register_function(0x0880C0C4u, &recomp_unit_0002, "recomp_unit_0002");
    runtime.register_function(0x0880C0D0u, &recomp_unit_0002, "recomp_unit_0002");
    runtime.register_function(0x0880C0D8u, &recomp_unit_0002, "recomp_unit_0002");
    runtime.register_function(0x0880C0F8u, &recomp_unit_0002, "recomp_unit_0002");
    runtime.register_function(0x0880C11Cu, &recomp_unit_0002, "recomp_unit_0002");
    runtime.register_function(0x0880C124u, &recomp_unit_0002, "recomp_unit_0002");
    runtime.register_function(0x0880C128u, &recomp_unit_0002, "recomp_unit_0002");
    runtime.register_function(0x0880C138u, &recomp_unit_0002, "recomp_unit_0002");
    runtime.register_function(0x0880C144u, &recomp_unit_0002, "recomp_unit_0002");
    runtime.register_function(0x0880C14Cu, &recomp_unit_0002, "recomp_unit_0002");
    runtime.register_function(0x0880C164u, &recomp_unit_0002, "recomp_unit_0002");
    runtime.register_function(0x0880C188u, &recomp_unit_0002, "recomp_unit_0002");
    runtime.register_function(0x0880C190u, &recomp_unit_0002, "recomp_unit_0002");
    runtime.register_function(0x0880C1A4u, &recomp_unit_0002, "recomp_unit_0002");
    runtime.register_function(0x0880C1B4u, &recomp_unit_0002, "recomp_unit_0002");
    runtime.register_function(0x0880C1BCu, &recomp_unit_0002, "recomp_unit_0002");
    runtime.register_function(0x0880C1C4u, &recomp_unit_0002, "recomp_unit_0002");
    runtime.register_function(0x0880C1D8u, &recomp_unit_0002, "recomp_unit_0002");
    runtime.register_function(0x0880C1ECu, &recomp_unit_0002, "recomp_unit_0002");
    runtime.register_function(0x0880C1F4u, &recomp_unit_0002, "recomp_unit_0002");
    runtime.register_function(0x0880C1F8u, &recomp_unit_0002, "recomp_unit_0002");
    runtime.register_function(0x0880C20Cu, &recomp_unit_0002, "recomp_unit_0002");
    runtime.register_function(0x0880C214u, &recomp_unit_0002, "recomp_unit_0002");
    runtime.register_function(0x0880C22Cu, &recomp_unit_0002, "recomp_unit_0002");
    runtime.register_function(0x0880C234u, &recomp_unit_0002, "recomp_unit_0002");
    runtime.register_function(0x0880C23Cu, &recomp_unit_0002, "recomp_unit_0002");
    runtime.register_function(0x0880C240u, &recomp_unit_0002, "recomp_unit_0002");
    runtime.register_function(0x0880C274u, &recomp_unit_0002, "recomp_unit_0002");
    runtime.register_function(0x0880C27Cu, &recomp_unit_0002, "recomp_unit_0002");
    runtime.register_function(0x0880C28Cu, &recomp_unit_0002, "recomp_unit_0002");
    runtime.register_function(0x0880C2A8u, &recomp_unit_0002, "recomp_unit_0002");
    runtime.register_function(0x0880C2C0u, &recomp_unit_0002, "recomp_unit_0002");
    runtime.register_function(0x0880C2D4u, &recomp_unit_0002, "recomp_unit_0002");
    runtime.register_function(0x0880C2DCu, &recomp_unit_0002, "recomp_unit_0002");
    runtime.register_function(0x0880C2F0u, &recomp_unit_0002, "recomp_unit_0002");
    runtime.register_function(0x0880C2F8u, &recomp_unit_0002, "recomp_unit_0002");
    runtime.register_function(0x0880C30Cu, &recomp_unit_0002, "recomp_unit_0002");
    runtime.register_function(0x0880C314u, &recomp_unit_0002, "recomp_unit_0002");
    runtime.register_function(0x0880C320u, &recomp_unit_0002, "recomp_unit_0002");
    runtime.register_function(0x0880C328u, &recomp_unit_0002, "recomp_unit_0002");
    runtime.register_function(0x0880C33Cu, &recomp_unit_0002, "recomp_unit_0002");
    runtime.register_function(0x0880C36Cu, &recomp_unit_0002, "recomp_unit_0002");
    runtime.register_function(0x0880C378u, &recomp_unit_0002, "recomp_unit_0002");
    runtime.register_function(0x0880C398u, &recomp_unit_0002, "recomp_unit_0002");
    runtime.register_function(0x0880C3C4u, &recomp_unit_0002, "recomp_unit_0002");
    runtime.register_function(0x0880C3D0u, &recomp_unit_0002, "recomp_unit_0002");
    runtime.register_function(0x0880C3E4u, &recomp_unit_0002, "recomp_unit_0002");
    runtime.register_function(0x0880C3ECu, &recomp_unit_0002, "recomp_unit_0002");
    runtime.register_function(0x0880C414u, &recomp_unit_0002, "recomp_unit_0002");
    runtime.register_function(0x0880C458u, &recomp_unit_0002, "recomp_unit_0002");
    runtime.register_function(0x0880C464u, &recomp_unit_0002, "recomp_unit_0002");
    runtime.register_function(0x0880C46Cu, &recomp_unit_0002, "recomp_unit_0002");
    runtime.register_function(0x0880C474u, &recomp_unit_0002, "recomp_unit_0002");
    runtime.register_function(0x0880C488u, &recomp_unit_0002, "recomp_unit_0002");
    runtime.register_function(0x0880C49Cu, &recomp_unit_0002, "recomp_unit_0002");
    runtime.register_function(0x0880C4A4u, &recomp_unit_0002, "recomp_unit_0002");
    runtime.register_function(0x0880C4B0u, &recomp_unit_0002, "recomp_unit_0002");
    runtime.register_function(0x0880C4C8u, &recomp_unit_0002, "recomp_unit_0002");
    runtime.register_function(0x0880C4E4u, &recomp_unit_0002, "recomp_unit_0002");
    runtime.register_function(0x0880C4F4u, &recomp_unit_0002, "recomp_unit_0002");
    runtime.register_function(0x0880C4F8u, &recomp_unit_0002, "recomp_unit_0002");
    runtime.register_function(0x0880C548u, &recomp_unit_0002, "recomp_unit_0002");
    runtime.register_function(0x0880C578u, &recomp_unit_0002, "recomp_unit_0002");
    runtime.register_function(0x0880C580u, &recomp_unit_0002, "recomp_unit_0002");
    runtime.register_function(0x0880C5A0u, &recomp_unit_0002, "recomp_unit_0002");
    runtime.register_function(0x0880C5C8u, &recomp_unit_0002, "recomp_unit_0002");
    runtime.register_function(0x0880C5D8u, &recomp_unit_0002, "recomp_unit_0002");
    runtime.register_function(0x0880C5DCu, &recomp_unit_0002, "recomp_unit_0002");
    runtime.register_function(0x0880C6D0u, &recomp_unit_0002, "recomp_unit_0002");
    runtime.register_function(0x0880C6DCu, &recomp_unit_0002, "recomp_unit_0002");
    runtime.register_function(0x0880C724u, &recomp_unit_0002, "recomp_unit_0002");
    runtime.register_function(0x0880C734u, &recomp_unit_0002, "recomp_unit_0002");
    runtime.register_function(0x0880C748u, &recomp_unit_0002, "recomp_unit_0002");
    runtime.register_function(0x0880C750u, &recomp_unit_0002, "recomp_unit_0002");
    runtime.register_function(0x0880C774u, &recomp_unit_0002, "recomp_unit_0002");
    runtime.register_function(0x0880C7CCu, &recomp_unit_0002, "recomp_unit_0002");
    runtime.register_function(0x0880C7D8u, &recomp_unit_0002, "recomp_unit_0002");
    runtime.register_function(0x0880C7E0u, &recomp_unit_0002, "recomp_unit_0002");
    runtime.register_function(0x0880C7F8u, &recomp_unit_0002, "recomp_unit_0002");
    runtime.register_function(0x0880C800u, &recomp_unit_0002, "recomp_unit_0002");
    runtime.register_function(0x0880C81Cu, &recomp_unit_0002, "recomp_unit_0002");
    runtime.register_function(0x0880C824u, &recomp_unit_0002, "recomp_unit_0002");
    runtime.register_function(0x0880C838u, &recomp_unit_0002, "recomp_unit_0002");
    runtime.register_function(0x0880C884u, &recomp_unit_0002, "recomp_unit_0002");
    runtime.register_function(0x0880C894u, &recomp_unit_0002, "recomp_unit_0002");
    runtime.register_function(0x0880C89Cu, &recomp_unit_0002, "recomp_unit_0002");
    runtime.register_function(0x0880C8A4u, &recomp_unit_0002, "recomp_unit_0002");
    runtime.register_function(0x0880C8D8u, &recomp_unit_0002, "recomp_unit_0002");
    runtime.register_function(0x0880C8ECu, &recomp_unit_0002, "recomp_unit_0002");
    runtime.register_function(0x0880C8FCu, &recomp_unit_0002, "recomp_unit_0002");
    runtime.register_function(0x0880C900u, &recomp_unit_0002, "recomp_unit_0002");
    runtime.register_function(0x0880C914u, &recomp_unit_0002, "recomp_unit_0002");
    runtime.register_function(0x0880C930u, &recomp_unit_0002, "recomp_unit_0002");
    runtime.register_function(0x0880C950u, &recomp_unit_0002, "recomp_unit_0002");
    runtime.register_function(0x0880C968u, &recomp_unit_0002, "recomp_unit_0002");
    runtime.register_function(0x0880C97Cu, &recomp_unit_0002, "recomp_unit_0002");
    runtime.register_function(0x0880C994u, &recomp_unit_0002, "recomp_unit_0002");
    runtime.register_function(0x0880C9A8u, &recomp_unit_0002, "recomp_unit_0002");
    runtime.register_function(0x0880C9C0u, &recomp_unit_0002, "recomp_unit_0002");
    runtime.register_function(0x0880C9D4u, &recomp_unit_0002, "recomp_unit_0002");
    runtime.register_function(0x0880C9ECu, &recomp_unit_0002, "recomp_unit_0002");
    runtime.register_function(0x0880CA00u, &recomp_unit_0002, "recomp_unit_0002");
    runtime.register_function(0x0880CA18u, &recomp_unit_0002, "recomp_unit_0002");
    runtime.register_function(0x0880CA2Cu, &recomp_unit_0002, "recomp_unit_0002");
    runtime.register_function(0x0880CA4Cu, &recomp_unit_0002, "recomp_unit_0002");
    runtime.register_function(0x0880CA64u, &recomp_unit_0002, "recomp_unit_0002");
    runtime.register_function(0x0880CA78u, &recomp_unit_0002, "recomp_unit_0002");
    runtime.register_function(0x0880CA90u, &recomp_unit_0002, "recomp_unit_0002");
    runtime.register_function(0x0880CAA4u, &recomp_unit_0002, "recomp_unit_0002");
    runtime.register_function(0x0880CABCu, &recomp_unit_0002, "recomp_unit_0002");
    runtime.register_function(0x0880CAD0u, &recomp_unit_0002, "recomp_unit_0002");
    runtime.register_function(0x0880CAE8u, &recomp_unit_0002, "recomp_unit_0002");
    runtime.register_function(0x0880CAFCu, &recomp_unit_0002, "recomp_unit_0002");
    runtime.register_function(0x0880CB04u, &recomp_unit_0002, "recomp_unit_0002");
    runtime.register_function(0x0880CB14u, &recomp_unit_0002, "recomp_unit_0002");
    runtime.register_function(0x0880CB28u, &recomp_unit_0002, "recomp_unit_0002");
    runtime.register_function(0x0880CB58u, &recomp_unit_0002, "recomp_unit_0002");
    runtime.register_function(0x0880CB6Cu, &recomp_unit_0002, "recomp_unit_0002");
    runtime.register_function(0x0880CB80u, &recomp_unit_0002, "recomp_unit_0002");
    runtime.register_function(0x0880CB8Cu, &recomp_unit_0002, "recomp_unit_0002");
    runtime.register_function(0x0880CBD0u, &recomp_unit_0002, "recomp_unit_0002");
    runtime.register_function(0x0880CBD8u, &recomp_unit_0002, "recomp_unit_0002");
    runtime.register_function(0x0880CBE0u, &recomp_unit_0002, "recomp_unit_0002");
    runtime.register_function(0x0880CC1Cu, &recomp_unit_0002, "recomp_unit_0002");
    runtime.register_function(0x0880CC28u, &recomp_unit_0002, "recomp_unit_0002");
    runtime.register_function(0x0880CC40u, &recomp_unit_0002, "recomp_unit_0002");
    runtime.register_function(0x0880CC48u, &recomp_unit_0002, "recomp_unit_0002");
    runtime.register_function(0x0880CC78u, &recomp_unit_0002, "recomp_unit_0002");
    runtime.register_function(0x0880CC80u, &recomp_unit_0002, "recomp_unit_0002");
    runtime.register_function(0x0880CC98u, &recomp_unit_0002, "recomp_unit_0002");
    runtime.register_function(0x0880CCACu, &recomp_unit_0002, "recomp_unit_0002");
    runtime.register_function(0x0880CCC8u, &recomp_unit_0002, "recomp_unit_0002");
    runtime.register_function(0x0880CCE4u, &recomp_unit_0002, "recomp_unit_0002");
    runtime.register_function(0x0880CCECu, &recomp_unit_0002, "recomp_unit_0002");
    runtime.register_function(0x0880CCF4u, &recomp_unit_0002, "recomp_unit_0002");
    runtime.register_function(0x0880CD00u, &recomp_unit_0002, "recomp_unit_0002");
    runtime.register_function(0x0880CD0Cu, &recomp_unit_0002, "recomp_unit_0002");
    runtime.register_function(0x0880CD14u, &recomp_unit_0002, "recomp_unit_0002");
    runtime.register_function(0x0880CD1Cu, &recomp_unit_0002, "recomp_unit_0002");
    runtime.register_function(0x0880CD2Cu, &recomp_unit_0002, "recomp_unit_0002");
    runtime.register_function(0x0880CD40u, &recomp_unit_0002, "recomp_unit_0002");
    runtime.register_function(0x0880CD54u, &recomp_unit_0002, "recomp_unit_0002");
    runtime.register_function(0x0880CD60u, &recomp_unit_0002, "recomp_unit_0002");
    runtime.register_function(0x0880CD74u, &recomp_unit_0002, "recomp_unit_0002");
    runtime.register_function(0x0880CD8Cu, &recomp_unit_0002, "recomp_unit_0002");
    runtime.register_function(0x0880CD9Cu, &recomp_unit_0002, "recomp_unit_0002");
    runtime.register_function(0x0880CDC0u, &recomp_unit_0002, "recomp_unit_0002");
    runtime.register_function(0x0880CDD0u, &recomp_unit_0002, "recomp_unit_0002");
    runtime.register_function(0x0880CDE8u, &recomp_unit_0002, "recomp_unit_0002");
    runtime.register_function(0x0880CE0Cu, &recomp_unit_0002, "recomp_unit_0002");
    runtime.register_function(0x0880CE28u, &recomp_unit_0002, "recomp_unit_0002");
    runtime.register_function(0x0880CE44u, &recomp_unit_0002, "recomp_unit_0002");
    runtime.register_function(0x0880CE5Cu, &recomp_unit_0002, "recomp_unit_0002");
    runtime.register_function(0x0880CE6Cu, &recomp_unit_0002, "recomp_unit_0002");
    runtime.register_function(0x0880CEBCu, &recomp_unit_0002, "recomp_unit_0002");
    runtime.register_function(0x0880CEC4u, &recomp_unit_0002, "recomp_unit_0002");
    runtime.register_function(0x0880CEE0u, &recomp_unit_0002, "recomp_unit_0002");
    runtime.register_function(0x0880CEF0u, &recomp_unit_0002, "recomp_unit_0002");
    runtime.register_function(0x0880CF04u, &recomp_unit_0002, "recomp_unit_0002");
    runtime.register_function(0x0880CF0Cu, &recomp_unit_0002, "recomp_unit_0002");
    runtime.register_function(0x0880CF14u, &recomp_unit_0002, "recomp_unit_0002");
    runtime.register_function(0x0880CF1Cu, &recomp_unit_0002, "recomp_unit_0002");
    runtime.register_function(0x0880CF28u, &recomp_unit_0002, "recomp_unit_0002");
    runtime.register_function(0x0880CF2Cu, &recomp_unit_0002, "recomp_unit_0002");
    runtime.register_function(0x0880CF30u, &recomp_unit_0002, "recomp_unit_0002");
    runtime.register_function(0x0880CF34u, &recomp_unit_0002, "recomp_unit_0002");
    runtime.register_function(0x0880CF68u, &recomp_unit_0002, "recomp_unit_0002");
    runtime.register_function(0x0880CF74u, &recomp_unit_0002, "recomp_unit_0002");
    runtime.register_function(0x0880CF8Cu, &recomp_unit_0002, "recomp_unit_0002");
    runtime.register_function(0x0880CFA0u, &recomp_unit_0002, "recomp_unit_0002");
    runtime.register_function(0x0880CFB4u, &recomp_unit_0002, "recomp_unit_0002");
    runtime.register_function(0x0880CFBCu, &recomp_unit_0002, "recomp_unit_0002");
    runtime.register_function(0x0880CFC4u, &recomp_unit_0002, "recomp_unit_0002");
    runtime.register_function(0x0880CFCCu, &recomp_unit_0002, "recomp_unit_0002");
    runtime.register_function(0x0880CFE8u, &recomp_unit_0002, "recomp_unit_0002");
    runtime.register_function(0x0880CFF4u, &recomp_unit_0002, "recomp_unit_0002");
    runtime.register_function(0x0880D000u, &recomp_unit_0002, "recomp_unit_0002");
    runtime.register_function(0x0880D008u, &recomp_unit_0002, "recomp_unit_0002");
    runtime.register_function(0x0880D010u, &recomp_unit_0002, "recomp_unit_0002");
    runtime.register_function(0x0880D050u, &recomp_unit_0002, "recomp_unit_0002");
    runtime.register_function(0x0880D068u, &recomp_unit_0002, "recomp_unit_0002");
    runtime.register_function(0x0880D07Cu, &recomp_unit_0002, "recomp_unit_0002");
    runtime.register_function(0x0880D084u, &recomp_unit_0002, "recomp_unit_0002");
    runtime.register_function(0x0880D090u, &recomp_unit_0002, "recomp_unit_0002");
    runtime.register_function(0x0880D09Cu, &recomp_unit_0002, "recomp_unit_0002");
    runtime.register_function(0x0880D0B0u, &recomp_unit_0002, "recomp_unit_0002");
    runtime.register_function(0x0880D0C4u, &recomp_unit_0002, "recomp_unit_0002");
    runtime.register_function(0x0880D0E4u, &recomp_unit_0002, "recomp_unit_0002");
    runtime.register_function(0x0880D104u, &recomp_unit_0002, "recomp_unit_0002");
    runtime.register_function(0x0880D118u, &recomp_unit_0002, "recomp_unit_0002");
    runtime.register_function(0x0880D120u, &recomp_unit_0002, "recomp_unit_0002");
    runtime.register_function(0x0880D128u, &recomp_unit_0002, "recomp_unit_0002");
    runtime.register_function(0x0880D13Cu, &recomp_unit_0002, "recomp_unit_0002");
    runtime.register_function(0x0880D144u, &recomp_unit_0002, "recomp_unit_0002");
    runtime.register_function(0x0880D154u, &recomp_unit_0002, "recomp_unit_0002");
    runtime.register_function(0x0880D15Cu, &recomp_unit_0002, "recomp_unit_0002");
    runtime.register_function(0x0880D164u, &recomp_unit_0002, "recomp_unit_0002");
    runtime.register_function(0x0880D174u, &recomp_unit_0002, "recomp_unit_0002");
    runtime.register_function(0x0880D180u, &recomp_unit_0002, "recomp_unit_0002");
    runtime.register_function(0x0880D18Cu, &recomp_unit_0002, "recomp_unit_0002");
    runtime.register_function(0x0880D1A8u, &recomp_unit_0002, "recomp_unit_0002");
    runtime.register_function(0x0880D1C0u, &recomp_unit_0002, "recomp_unit_0002");
    runtime.register_function(0x0880D1D0u, &recomp_unit_0002, "recomp_unit_0002");
    runtime.register_function(0x0880D1E4u, &recomp_unit_0002, "recomp_unit_0002");
    runtime.register_function(0x0880D1F0u, &recomp_unit_0002, "recomp_unit_0002");
    runtime.register_function(0x0880D200u, &recomp_unit_0002, "recomp_unit_0002");
    runtime.register_function(0x0880D210u, &recomp_unit_0002, "recomp_unit_0002");
    runtime.register_function(0x0880D224u, &recomp_unit_0002, "recomp_unit_0002");
    runtime.register_function(0x0880D238u, &recomp_unit_0002, "recomp_unit_0002");
    runtime.register_function(0x0880D288u, &recomp_unit_0002, "recomp_unit_0002");
    runtime.register_function(0x0880D290u, &recomp_unit_0002, "recomp_unit_0002");
    runtime.register_function(0x0880D2ACu, &recomp_unit_0002, "recomp_unit_0002");
    runtime.register_function(0x0880D2BCu, &recomp_unit_0002, "recomp_unit_0002");
    runtime.register_function(0x0880D2D0u, &recomp_unit_0002, "recomp_unit_0002");
    runtime.register_function(0x0880D2D8u, &recomp_unit_0002, "recomp_unit_0002");
    runtime.register_function(0x0880D2E0u, &recomp_unit_0002, "recomp_unit_0002");
    runtime.register_function(0x0880D2E8u, &recomp_unit_0002, "recomp_unit_0002");
    runtime.register_function(0x0880D2ECu, &recomp_unit_0002, "recomp_unit_0002");
    runtime.register_function(0x0880D2F0u, &recomp_unit_0002, "recomp_unit_0002");
    runtime.register_function(0x0880D2F4u, &recomp_unit_0002, "recomp_unit_0002");
    runtime.register_function(0x0880D328u, &recomp_unit_0002, "recomp_unit_0002");
    runtime.register_function(0x0880D334u, &recomp_unit_0002, "recomp_unit_0002");
    runtime.register_function(0x0880D34Cu, &recomp_unit_0002, "recomp_unit_0002");
    runtime.register_function(0x0880D360u, &recomp_unit_0002, "recomp_unit_0002");
    runtime.register_function(0x0880D374u, &recomp_unit_0002, "recomp_unit_0002");
    runtime.register_function(0x0880D37Cu, &recomp_unit_0002, "recomp_unit_0002");
    runtime.register_function(0x0880D384u, &recomp_unit_0002, "recomp_unit_0002");
    runtime.register_function(0x0880D390u, &recomp_unit_0002, "recomp_unit_0002");
    runtime.register_function(0x0880D398u, &recomp_unit_0002, "recomp_unit_0002");
    runtime.register_function(0x0880D3A0u, &recomp_unit_0002, "recomp_unit_0002");
    runtime.register_function(0x0880D3E0u, &recomp_unit_0002, "recomp_unit_0002");
    runtime.register_function(0x0880D3F8u, &recomp_unit_0002, "recomp_unit_0002");
    runtime.register_function(0x0880D40Cu, &recomp_unit_0002, "recomp_unit_0002");
    runtime.register_function(0x0880D414u, &recomp_unit_0002, "recomp_unit_0002");
    runtime.register_function(0x0880D420u, &recomp_unit_0002, "recomp_unit_0002");
    runtime.register_function(0x0880D430u, &recomp_unit_0002, "recomp_unit_0002");
    runtime.register_function(0x0880D43Cu, &recomp_unit_0002, "recomp_unit_0002");
    runtime.register_function(0x0880D458u, &recomp_unit_0002, "recomp_unit_0002");
    runtime.register_function(0x0880D464u, &recomp_unit_0002, "recomp_unit_0002");
    runtime.register_function(0x0880D490u, &recomp_unit_0002, "recomp_unit_0002");
    runtime.register_function(0x0880D4A4u, &recomp_unit_0002, "recomp_unit_0002");
    runtime.register_function(0x0880D4DCu, &recomp_unit_0002, "recomp_unit_0002");
    runtime.register_function(0x0880D504u, &recomp_unit_0002, "recomp_unit_0002");
    runtime.register_function(0x0880D50Cu, &recomp_unit_0002, "recomp_unit_0002");
    runtime.register_function(0x0880D544u, &recomp_unit_0002, "recomp_unit_0002");
    runtime.register_function(0x0880D54Cu, &recomp_unit_0002, "recomp_unit_0002");
    runtime.register_function(0x0880D564u, &recomp_unit_0002, "recomp_unit_0002");
    runtime.register_function(0x0880D578u, &recomp_unit_0002, "recomp_unit_0002");
    runtime.register_function(0x0880D584u, &recomp_unit_0002, "recomp_unit_0002");
    runtime.register_function(0x0880D594u, &recomp_unit_0002, "recomp_unit_0002");
    runtime.register_function(0x0880D598u, &recomp_unit_0002, "recomp_unit_0002");
    runtime.register_function(0x0880D5C0u, &recomp_unit_0002, "recomp_unit_0002");
    runtime.register_function(0x0880D5E0u, &recomp_unit_0002, "recomp_unit_0002");
    runtime.register_function(0x0880D5E8u, &recomp_unit_0002, "recomp_unit_0002");
    runtime.register_function(0x0880D5ECu, &recomp_unit_0002, "recomp_unit_0002");
    runtime.register_function(0x0880D608u, &recomp_unit_0002, "recomp_unit_0002");
    runtime.register_function(0x0880D614u, &recomp_unit_0002, "recomp_unit_0002");
    runtime.register_function(0x0880D62Cu, &recomp_unit_0002, "recomp_unit_0002");
    runtime.register_function(0x0880D638u, &recomp_unit_0002, "recomp_unit_0002");
    runtime.register_function(0x0880D650u, &recomp_unit_0002, "recomp_unit_0002");
    runtime.register_function(0x0880D658u, &recomp_unit_0002, "recomp_unit_0002");
    runtime.register_function(0x0880D660u, &recomp_unit_0002, "recomp_unit_0002");
    runtime.register_function(0x0880D688u, &recomp_unit_0002, "recomp_unit_0002");
    runtime.register_function(0x0880D69Cu, &recomp_unit_0002, "recomp_unit_0002");
    runtime.register_function(0x0880D6E8u, &recomp_unit_0002, "recomp_unit_0002");
    runtime.register_function(0x0880D708u, &recomp_unit_0002, "recomp_unit_0002");
    runtime.register_function(0x0880D724u, &recomp_unit_0002, "recomp_unit_0002");
    runtime.register_function(0x0880D72Cu, &recomp_unit_0002, "recomp_unit_0002");
    runtime.register_function(0x0880D754u, &recomp_unit_0002, "recomp_unit_0002");
    runtime.register_function(0x0880D764u, &recomp_unit_0002, "recomp_unit_0002");
    runtime.register_function(0x0880D770u, &recomp_unit_0002, "recomp_unit_0002");
    runtime.register_function(0x0880D794u, &recomp_unit_0002, "recomp_unit_0002");
    runtime.register_function(0x0880D7A0u, &recomp_unit_0002, "recomp_unit_0002");
    runtime.register_function(0x0880D7ACu, &recomp_unit_0002, "recomp_unit_0002");
    runtime.register_function(0x0880D7B4u, &recomp_unit_0002, "recomp_unit_0002");
    runtime.register_function(0x0880D7C4u, &recomp_unit_0002, "recomp_unit_0002");
    runtime.register_function(0x0880D7E0u, &recomp_unit_0002, "recomp_unit_0002");
    runtime.register_function(0x0880D7F4u, &recomp_unit_0002, "recomp_unit_0002");
    runtime.register_function(0x0880D818u, &recomp_unit_0002, "recomp_unit_0002");
    runtime.register_function(0x0880D830u, &recomp_unit_0002, "recomp_unit_0002");
    runtime.register_function(0x0880D854u, &recomp_unit_0002, "recomp_unit_0002");
    runtime.register_function(0x0880D85Cu, &recomp_unit_0002, "recomp_unit_0002");
    runtime.register_function(0x0880D870u, &recomp_unit_0002, "recomp_unit_0002");
    runtime.register_function(0x0880D884u, &recomp_unit_0002, "recomp_unit_0002");
    runtime.register_function(0x0880D8A8u, &recomp_unit_0002, "recomp_unit_0002");
    runtime.register_function(0x0880D8B0u, &recomp_unit_0002, "recomp_unit_0002");
    runtime.register_function(0x0880D8C0u, &recomp_unit_0002, "recomp_unit_0002");
    runtime.register_function(0x0880D8D0u, &recomp_unit_0002, "recomp_unit_0002");
    runtime.register_function(0x0880D8F4u, &recomp_unit_0002, "recomp_unit_0002");
    runtime.register_function(0x0880D900u, &recomp_unit_0002, "recomp_unit_0002");
    runtime.register_function(0x0880D920u, &recomp_unit_0002, "recomp_unit_0002");
    runtime.register_function(0x0880D934u, &recomp_unit_0002, "recomp_unit_0002");
    runtime.register_function(0x0880D93Cu, &recomp_unit_0002, "recomp_unit_0002");
    runtime.register_function(0x0880D944u, &recomp_unit_0002, "recomp_unit_0002");
    runtime.register_function(0x0880D958u, &recomp_unit_0002, "recomp_unit_0002");
    runtime.register_function(0x0880D960u, &recomp_unit_0002, "recomp_unit_0002");
    runtime.register_function(0x0880D970u, &recomp_unit_0002, "recomp_unit_0002");
    runtime.register_function(0x0880D978u, &recomp_unit_0002, "recomp_unit_0002");
    runtime.register_function(0x0880D980u, &recomp_unit_0002, "recomp_unit_0002");
    runtime.register_function(0x0880D994u, &recomp_unit_0002, "recomp_unit_0002");
    runtime.register_function(0x0880D9A0u, &recomp_unit_0002, "recomp_unit_0002");
    runtime.register_function(0x0880D9B0u, &recomp_unit_0002, "recomp_unit_0002");
    runtime.register_function(0x0880D9CCu, &recomp_unit_0002, "recomp_unit_0002");
    runtime.register_function(0x0880D9E0u, &recomp_unit_0002, "recomp_unit_0002");
    runtime.register_function(0x0880D9ECu, &recomp_unit_0002, "recomp_unit_0002");
    runtime.register_function(0x0880D9F8u, &recomp_unit_0002, "recomp_unit_0002");
    runtime.register_function(0x0880DA08u, &recomp_unit_0002, "recomp_unit_0002");
    runtime.register_function(0x0880DA1Cu, &recomp_unit_0002, "recomp_unit_0002");
    runtime.register_function(0x0880DA2Cu, &recomp_unit_0002, "recomp_unit_0002");
    runtime.register_function(0x0880DA5Cu, &recomp_unit_0002, "recomp_unit_0002");
    runtime.register_function(0x0880DA6Cu, &recomp_unit_0002, "recomp_unit_0002");
    runtime.register_function(0x0880DA70u, &recomp_unit_0002, "recomp_unit_0002");
    runtime.register_function(0x0880DA88u, &recomp_unit_0002, "recomp_unit_0002");
    runtime.register_function(0x0880DA9Cu, &recomp_unit_0002, "recomp_unit_0002");
    runtime.register_function(0x0880DAACu, &recomp_unit_0002, "recomp_unit_0002");
    runtime.register_function(0x0880DAB0u, &recomp_unit_0002, "recomp_unit_0002");
    runtime.register_function(0x0880DB64u, &recomp_unit_0002, "recomp_unit_0002");
    runtime.register_function(0x0880DBA4u, &recomp_unit_0002, "recomp_unit_0002");
    runtime.register_function(0x0880DBC0u, &recomp_unit_0002, "recomp_unit_0002");
    runtime.register_function(0x0880DBC8u, &recomp_unit_0002, "recomp_unit_0002");
    runtime.register_function(0x0880DBF0u, &recomp_unit_0002, "recomp_unit_0002");
    runtime.register_function(0x0880DC10u, &recomp_unit_0002, "recomp_unit_0002");
    runtime.register_function(0x0880DC24u, &recomp_unit_0002, "recomp_unit_0002");
    runtime.register_function(0x0880DC2Cu, &recomp_unit_0002, "recomp_unit_0002");
    runtime.register_function(0x0880DC40u, &recomp_unit_0002, "recomp_unit_0002");
    runtime.register_function(0x0880DC54u, &recomp_unit_0002, "recomp_unit_0002");
    runtime.register_function(0x0880DC70u, &recomp_unit_0002, "recomp_unit_0002");
    runtime.register_function(0x0880DC88u, &recomp_unit_0002, "recomp_unit_0002");
    runtime.register_function(0x0880DC98u, &recomp_unit_0002, "recomp_unit_0002");
    runtime.register_function(0x0880DCACu, &recomp_unit_0002, "recomp_unit_0002");
    runtime.register_function(0x0880DCC0u, &recomp_unit_0002, "recomp_unit_0002");
    runtime.register_function(0x0880DCE4u, &recomp_unit_0002, "recomp_unit_0002");
    runtime.register_function(0x0880DD08u, &recomp_unit_0002, "recomp_unit_0002");
    runtime.register_function(0x0880DD24u, &recomp_unit_0002, "recomp_unit_0002");
    runtime.register_function(0x0880DD2Cu, &recomp_unit_0002, "recomp_unit_0002");
    runtime.register_function(0x0880DD40u, &recomp_unit_0002, "recomp_unit_0002");
    runtime.register_function(0x0880DD5Cu, &recomp_unit_0002, "recomp_unit_0002");
    runtime.register_function(0x0880DD64u, &recomp_unit_0002, "recomp_unit_0002");
    runtime.register_function(0x0880DD6Cu, &recomp_unit_0002, "recomp_unit_0002");
    runtime.register_function(0x0880DD78u, &recomp_unit_0002, "recomp_unit_0002");
    runtime.register_function(0x0880DD80u, &recomp_unit_0002, "recomp_unit_0002");
    runtime.register_function(0x0880DD94u, &recomp_unit_0002, "recomp_unit_0002");
    runtime.register_function(0x0880DDA0u, &recomp_unit_0002, "recomp_unit_0002");
    runtime.register_function(0x0880DDC0u, &recomp_unit_0002, "recomp_unit_0002");
    runtime.register_function(0x0880DDC8u, &recomp_unit_0002, "recomp_unit_0002");
    runtime.register_function(0x0880DDD0u, &recomp_unit_0002, "recomp_unit_0002");
    runtime.register_function(0x0880DDDCu, &recomp_unit_0002, "recomp_unit_0002");
    runtime.register_function(0x0880DDE4u, &recomp_unit_0002, "recomp_unit_0002");
    runtime.register_function(0x0880DE00u, &recomp_unit_0002, "recomp_unit_0002");
    runtime.register_function(0x0880DE20u, &recomp_unit_0002, "recomp_unit_0002");
    runtime.register_function(0x0880DE34u, &recomp_unit_0002, "recomp_unit_0002");
    runtime.register_function(0x0880DE40u, &recomp_unit_0002, "recomp_unit_0002");
    runtime.register_function(0x0880DE48u, &recomp_unit_0002, "recomp_unit_0002");
    runtime.register_function(0x0880DE58u, &recomp_unit_0002, "recomp_unit_0002");
    runtime.register_function(0x0880DE60u, &recomp_unit_0002, "recomp_unit_0002");
    runtime.register_function(0x0880DE68u, &recomp_unit_0002, "recomp_unit_0002");
    runtime.register_function(0x0880DE74u, &recomp_unit_0002, "recomp_unit_0002");
    runtime.register_function(0x0880DE80u, &recomp_unit_0002, "recomp_unit_0002");
    runtime.register_function(0x0880DE88u, &recomp_unit_0002, "recomp_unit_0002");
    runtime.register_function(0x0880DE94u, &recomp_unit_0002, "recomp_unit_0002");
    runtime.register_function(0x0880DEA4u, &recomp_unit_0002, "recomp_unit_0002");
    runtime.register_function(0x0880DEB4u, &recomp_unit_0002, "recomp_unit_0002");
    runtime.register_function(0x0880DEBCu, &recomp_unit_0002, "recomp_unit_0002");
    runtime.register_function(0x0880DEC8u, &recomp_unit_0002, "recomp_unit_0002");
    runtime.register_function(0x0880DED0u, &recomp_unit_0002, "recomp_unit_0002");
    runtime.register_function(0x0880DEE0u, &recomp_unit_0002, "recomp_unit_0002");
    runtime.register_function(0x0880DEF0u, &recomp_unit_0002, "recomp_unit_0002");
    runtime.register_function(0x0880DF0Cu, &recomp_unit_0002, "recomp_unit_0002");
    runtime.register_function(0x0880DF14u, &recomp_unit_0002, "recomp_unit_0002");
    runtime.register_function(0x0880DF28u, &recomp_unit_0002, "recomp_unit_0002");
    runtime.register_function(0x0880DF44u, &recomp_unit_0002, "recomp_unit_0002");
    runtime.register_function(0x0880DF4Cu, &recomp_unit_0002, "recomp_unit_0002");
    runtime.register_function(0x0880DF50u, &recomp_unit_0002, "recomp_unit_0002");
    runtime.register_function(0x0880DF54u, &recomp_unit_0002, "recomp_unit_0002");
    runtime.register_function(0x0880DF5Cu, &recomp_unit_0002, "recomp_unit_0002");
    runtime.register_function(0x0880DF70u, &recomp_unit_0002, "recomp_unit_0002");
    runtime.register_function(0x0880DF7Cu, &recomp_unit_0002, "recomp_unit_0002");
    runtime.register_function(0x0880DF9Cu, &recomp_unit_0002, "recomp_unit_0002");
    runtime.register_function(0x0880DFA4u, &recomp_unit_0002, "recomp_unit_0002");
    runtime.register_function(0x0880DFB0u, &recomp_unit_0002, "recomp_unit_0002");
    runtime.register_function(0x0880DFC8u, &recomp_unit_0002, "recomp_unit_0002");
    runtime.register_function(0x0880DFD0u, &recomp_unit_0002, "recomp_unit_0002");
    runtime.register_function(0x0880DFDCu, &recomp_unit_0002, "recomp_unit_0002");
    runtime.register_function(0x0880DFF0u, &recomp_unit_0002, "recomp_unit_0002");
    runtime.register_function(0x0880E010u, &recomp_unit_0002, "recomp_unit_0002");
    runtime.register_function(0x0880E024u, &recomp_unit_0002, "recomp_unit_0002");
    runtime.register_function(0x0880E038u, &recomp_unit_0002, "recomp_unit_0002");
    runtime.register_function(0x0880E060u, &recomp_unit_0002, "recomp_unit_0002");
    runtime.register_function(0x0880E06Cu, &recomp_unit_0002, "recomp_unit_0002");
    runtime.register_function(0x0880E080u, &recomp_unit_0002, "recomp_unit_0002");
    runtime.register_function(0x0880E094u, &recomp_unit_0002, "recomp_unit_0002");
    runtime.register_function(0x0880E098u, &recomp_unit_0002, "recomp_unit_0002");
    runtime.register_function(0x0880E0A4u, &recomp_unit_0002, "recomp_unit_0002");
    runtime.register_function(0x0880E0ACu, &recomp_unit_0002, "recomp_unit_0002");
    runtime.register_function(0x0880E0CCu, &recomp_unit_0002, "recomp_unit_0002");
    runtime.register_function(0x0880E0DCu, &recomp_unit_0002, "recomp_unit_0002");
    runtime.register_function(0x0880E0E4u, &recomp_unit_0002, "recomp_unit_0002");
    runtime.register_function(0x0880E0F0u, &recomp_unit_0002, "recomp_unit_0002");
    runtime.register_function(0x0880E100u, &recomp_unit_0002, "recomp_unit_0002");
    runtime.register_function(0x0880E114u, &recomp_unit_0002, "recomp_unit_0002");
    runtime.register_function(0x0880E11Cu, &recomp_unit_0002, "recomp_unit_0002");
    runtime.register_function(0x0880E13Cu, &recomp_unit_0002, "recomp_unit_0002");
    runtime.register_function(0x0880E15Cu, &recomp_unit_0002, "recomp_unit_0002");
    runtime.register_function(0x0880E170u, &recomp_unit_0002, "recomp_unit_0002");
    runtime.register_function(0x0880E17Cu, &recomp_unit_0002, "recomp_unit_0002");
    runtime.register_function(0x0880E184u, &recomp_unit_0002, "recomp_unit_0002");
    runtime.register_function(0x0880E194u, &recomp_unit_0002, "recomp_unit_0002");
    runtime.register_function(0x0880E19Cu, &recomp_unit_0002, "recomp_unit_0002");
    runtime.register_function(0x0880E1A4u, &recomp_unit_0002, "recomp_unit_0002");
    runtime.register_function(0x0880E1ACu, &recomp_unit_0002, "recomp_unit_0002");
    runtime.register_function(0x0880E1B8u, &recomp_unit_0002, "recomp_unit_0002");
    runtime.register_function(0x0880E1C4u, &recomp_unit_0002, "recomp_unit_0002");
    runtime.register_function(0x0880E1D0u, &recomp_unit_0002, "recomp_unit_0002");
    runtime.register_function(0x0880E1DCu, &recomp_unit_0002, "recomp_unit_0002");
    runtime.register_function(0x0880E1E8u, &recomp_unit_0002, "recomp_unit_0002");
    runtime.register_function(0x0880E1F0u, &recomp_unit_0002, "recomp_unit_0002");
    runtime.register_function(0x0880E200u, &recomp_unit_0002, "recomp_unit_0002");
    runtime.register_function(0x0880E20Cu, &recomp_unit_0002, "recomp_unit_0002");
    runtime.register_function(0x0880E21Cu, &recomp_unit_0002, "recomp_unit_0002");
    runtime.register_function(0x0880E250u, &recomp_unit_0002, "recomp_unit_0002");
    runtime.register_function(0x0880E258u, &recomp_unit_0002, "recomp_unit_0002");
    runtime.register_function(0x0880E268u, &recomp_unit_0002, "recomp_unit_0002");
    runtime.register_function(0x0880E270u, &recomp_unit_0002, "recomp_unit_0002");
    runtime.register_function(0x0880E288u, &recomp_unit_0002, "recomp_unit_0002");
    runtime.register_function(0x0880E290u, &recomp_unit_0002, "recomp_unit_0002");
    runtime.register_function(0x0880E29Cu, &recomp_unit_0002, "recomp_unit_0002");
    runtime.register_function(0x0880E2D4u, &recomp_unit_0002, "recomp_unit_0002");
    runtime.register_function(0x0880E2F0u, &recomp_unit_0002, "recomp_unit_0002");
    runtime.register_function(0x0880E2F8u, &recomp_unit_0002, "recomp_unit_0002");
    runtime.register_function(0x0880E300u, &recomp_unit_0002, "recomp_unit_0002");
    runtime.register_function(0x0880E330u, &recomp_unit_0002, "recomp_unit_0002");
    runtime.register_function(0x0880E338u, &recomp_unit_0002, "recomp_unit_0002");
    runtime.register_function(0x0880E340u, &recomp_unit_0002, "recomp_unit_0002");
    runtime.register_function(0x0880E350u, &recomp_unit_0002, "recomp_unit_0002");
    runtime.register_function(0x0880E358u, &recomp_unit_0002, "recomp_unit_0002");
    runtime.register_function(0x0880E380u, &recomp_unit_0002, "recomp_unit_0002");
    runtime.register_function(0x0880E388u, &recomp_unit_0002, "recomp_unit_0002");
    runtime.register_function(0x0880E390u, &recomp_unit_0002, "recomp_unit_0002");
    runtime.register_function(0x0880E398u, &recomp_unit_0002, "recomp_unit_0002");
    runtime.register_function(0x0880E3A4u, &recomp_unit_0002, "recomp_unit_0002");
    runtime.register_function(0x0880E3ACu, &recomp_unit_0002, "recomp_unit_0002");
    runtime.register_function(0x0880E3DCu, &recomp_unit_0002, "recomp_unit_0002");
    runtime.register_function(0x0880E3F0u, &recomp_unit_0002, "recomp_unit_0002");
    runtime.register_function(0x0880E400u, &recomp_unit_0002, "recomp_unit_0002");
    runtime.register_function(0x0880E408u, &recomp_unit_0002, "recomp_unit_0002");
    runtime.register_function(0x0880E414u, &recomp_unit_0002, "recomp_unit_0002");
    runtime.register_function(0x0880E41Cu, &recomp_unit_0002, "recomp_unit_0002");
    runtime.register_function(0x0880E430u, &recomp_unit_0002, "recomp_unit_0002");
    runtime.register_function(0x0880E458u, &recomp_unit_0002, "recomp_unit_0002");
    runtime.register_function(0x0880E474u, &recomp_unit_0002, "recomp_unit_0002");
    runtime.register_function(0x0880E47Cu, &recomp_unit_0002, "recomp_unit_0002");
    runtime.register_function(0x0880E484u, &recomp_unit_0002, "recomp_unit_0002");
    runtime.register_function(0x0880E494u, &recomp_unit_0002, "recomp_unit_0002");
    runtime.register_function(0x0880E49Cu, &recomp_unit_0002, "recomp_unit_0002");
    runtime.register_function(0x0880E4C4u, &recomp_unit_0002, "recomp_unit_0002");
    runtime.register_function(0x0880E4E4u, &recomp_unit_0002, "recomp_unit_0002");
    runtime.register_function(0x0880E4F8u, &recomp_unit_0002, "recomp_unit_0002");
    runtime.register_function(0x0880E50Cu, &recomp_unit_0002, "recomp_unit_0002");
    runtime.register_function(0x0880E514u, &recomp_unit_0002, "recomp_unit_0002");
    runtime.register_function(0x0880E520u, &recomp_unit_0002, "recomp_unit_0002");
    runtime.register_function(0x0880E528u, &recomp_unit_0002, "recomp_unit_0002");
    runtime.register_function(0x0880E530u, &recomp_unit_0002, "recomp_unit_0002");
    runtime.register_function(0x0880E53Cu, &recomp_unit_0002, "recomp_unit_0002");
    runtime.register_function(0x0880E544u, &recomp_unit_0002, "recomp_unit_0002");
    runtime.register_function(0x0880E56Cu, &recomp_unit_0002, "recomp_unit_0002");
    runtime.register_function(0x0880E578u, &recomp_unit_0002, "recomp_unit_0002");
    runtime.register_function(0x0880E580u, &recomp_unit_0002, "recomp_unit_0002");
    runtime.register_function(0x0880E58Cu, &recomp_unit_0002, "recomp_unit_0002");
    runtime.register_function(0x0880E5ACu, &recomp_unit_0002, "recomp_unit_0002");
    runtime.register_function(0x0880E5B4u, &recomp_unit_0002, "recomp_unit_0002");
    runtime.register_function(0x0880E5C8u, &recomp_unit_0002, "recomp_unit_0002");
    runtime.register_function(0x0880E5D0u, &recomp_unit_0002, "recomp_unit_0002");
    runtime.register_function(0x0880E5DCu, &recomp_unit_0002, "recomp_unit_0002");
    runtime.register_function(0x0880E614u, &recomp_unit_0002, "recomp_unit_0002");
    runtime.register_function(0x0880E630u, &recomp_unit_0002, "recomp_unit_0002");
    runtime.register_function(0x0880E638u, &recomp_unit_0002, "recomp_unit_0002");
    runtime.register_function(0x0880E640u, &recomp_unit_0002, "recomp_unit_0002");
    runtime.register_function(0x0880E644u, &recomp_unit_0002, "recomp_unit_0002");
    runtime.register_function(0x0880E670u, &recomp_unit_0002, "recomp_unit_0002");
    runtime.register_function(0x0880E678u, &recomp_unit_0002, "recomp_unit_0002");
    runtime.register_function(0x0880E680u, &recomp_unit_0002, "recomp_unit_0002");
    runtime.register_function(0x0880E694u, &recomp_unit_0002, "recomp_unit_0002");
    runtime.register_function(0x0880E69Cu, &recomp_unit_0002, "recomp_unit_0002");
    runtime.register_function(0x0880E6D0u, &recomp_unit_0002, "recomp_unit_0002");
    runtime.register_function(0x0880E6D8u, &recomp_unit_0002, "recomp_unit_0002");
    runtime.register_function(0x0880E6E0u, &recomp_unit_0002, "recomp_unit_0002");
    runtime.register_function(0x0880E6E4u, &recomp_unit_0002, "recomp_unit_0002");
    runtime.register_function(0x0880E6ECu, &recomp_unit_0002, "recomp_unit_0002");
    runtime.register_function(0x0880E6F4u, &recomp_unit_0002, "recomp_unit_0002");
    runtime.register_function(0x0880E724u, &recomp_unit_0002, "recomp_unit_0002");
    runtime.register_function(0x0880E734u, &recomp_unit_0002, "recomp_unit_0002");
    runtime.register_function(0x0880E73Cu, &recomp_unit_0002, "recomp_unit_0002");
    runtime.register_function(0x0880E74Cu, &recomp_unit_0002, "recomp_unit_0002");
    runtime.register_function(0x0880E754u, &recomp_unit_0002, "recomp_unit_0002");
    runtime.register_function(0x0880E784u, &recomp_unit_0002, "recomp_unit_0002");
    runtime.register_function(0x0880E79Cu, &recomp_unit_0002, "recomp_unit_0002");
    runtime.register_function(0x0880E7A4u, &recomp_unit_0002, "recomp_unit_0002");
    runtime.register_function(0x0880E7B8u, &recomp_unit_0002, "recomp_unit_0002");
    runtime.register_function(0x0880E7C4u, &recomp_unit_0002, "recomp_unit_0002");
    runtime.register_function(0x0880E7CCu, &recomp_unit_0002, "recomp_unit_0002");
    runtime.register_function(0x0880E7D0u, &recomp_unit_0002, "recomp_unit_0002");
    runtime.register_function(0x0880E7E0u, &recomp_unit_0002, "recomp_unit_0002");
    runtime.register_function(0x0880E7E8u, &recomp_unit_0002, "recomp_unit_0002");
    runtime.register_function(0x0880E7F4u, &recomp_unit_0002, "recomp_unit_0002");
    runtime.register_function(0x0880E7FCu, &recomp_unit_0002, "recomp_unit_0002");
    runtime.register_function(0x0880E808u, &recomp_unit_0002, "recomp_unit_0002");
    runtime.register_function(0x0880E810u, &recomp_unit_0002, "recomp_unit_0002");
    runtime.register_function(0x0880E83Cu, &recomp_unit_0002, "recomp_unit_0002");
    runtime.register_function(0x0880E840u, &recomp_unit_0002, "recomp_unit_0002");
    runtime.register_function(0x0880E848u, &recomp_unit_0002, "recomp_unit_0002");
    runtime.register_function(0x0880E850u, &recomp_unit_0002, "recomp_unit_0002");
    runtime.register_function(0x0880E858u, &recomp_unit_0002, "recomp_unit_0002");
    runtime.register_function(0x0880E860u, &recomp_unit_0002, "recomp_unit_0002");
    runtime.register_function(0x0880E86Cu, &recomp_unit_0002, "recomp_unit_0002");
    runtime.register_function(0x0880E878u, &recomp_unit_0002, "recomp_unit_0002");
    runtime.register_function(0x0880E880u, &recomp_unit_0002, "recomp_unit_0002");
    runtime.register_function(0x0880E890u, &recomp_unit_0002, "recomp_unit_0002");
    runtime.register_function(0x0880E898u, &recomp_unit_0002, "recomp_unit_0002");
    runtime.register_function(0x0880E8C4u, &recomp_unit_0002, "recomp_unit_0002");
    runtime.register_function(0x0880E8E8u, &recomp_unit_0002, "recomp_unit_0002");
    runtime.register_function(0x0880E8F0u, &recomp_unit_0002, "recomp_unit_0002");
    runtime.register_function(0x0880E8FCu, &recomp_unit_0002, "recomp_unit_0002");
    runtime.register_function(0x0880E904u, &recomp_unit_0002, "recomp_unit_0002");
    runtime.register_function(0x0880E90Cu, &recomp_unit_0002, "recomp_unit_0002");
    runtime.register_function(0x0880E918u, &recomp_unit_0002, "recomp_unit_0002");
    runtime.register_function(0x0880E920u, &recomp_unit_0002, "recomp_unit_0002");
    runtime.register_function(0x0880E928u, &recomp_unit_0002, "recomp_unit_0002");
    runtime.register_function(0x0880E930u, &recomp_unit_0002, "recomp_unit_0002");
    runtime.register_function(0x0880E958u, &recomp_unit_0002, "recomp_unit_0002");
    runtime.register_function(0x0880E96Cu, &recomp_unit_0002, "recomp_unit_0002");
    runtime.register_function(0x0880E97Cu, &recomp_unit_0002, "recomp_unit_0002");
    runtime.register_function(0x0880E984u, &recomp_unit_0002, "recomp_unit_0002");
    runtime.register_function(0x0880E990u, &recomp_unit_0002, "recomp_unit_0002");
    runtime.register_function(0x0880E99Cu, &recomp_unit_0002, "recomp_unit_0002");
    runtime.register_function(0x0880E9C4u, &recomp_unit_0002, "recomp_unit_0002");
    runtime.register_function(0x0880E9F0u, &recomp_unit_0002, "recomp_unit_0002");
    runtime.register_function(0x0880EA0Cu, &recomp_unit_0002, "recomp_unit_0002");
    runtime.register_function(0x0880EA14u, &recomp_unit_0002, "recomp_unit_0002");
    runtime.register_function(0x0880EA1Cu, &recomp_unit_0002, "recomp_unit_0002");
    runtime.register_function(0x0880EA30u, &recomp_unit_0002, "recomp_unit_0002");
    runtime.register_function(0x0880EA38u, &recomp_unit_0002, "recomp_unit_0002");
    runtime.register_function(0x0880EA4Cu, &recomp_unit_0002, "recomp_unit_0002");
    runtime.register_function(0x0880EA88u, &recomp_unit_0002, "recomp_unit_0002");
    runtime.register_function(0x0880EAA4u, &recomp_unit_0002, "recomp_unit_0002");
    runtime.register_function(0x0880EAACu, &recomp_unit_0002, "recomp_unit_0002");
    runtime.register_function(0x0880EAB8u, &recomp_unit_0002, "recomp_unit_0002");
    runtime.register_function(0x0880EACCu, &recomp_unit_0002, "recomp_unit_0002");
    runtime.register_function(0x0880EAD4u, &recomp_unit_0002, "recomp_unit_0002");
    runtime.register_function(0x0880EAF4u, &recomp_unit_0002, "recomp_unit_0002");
    runtime.register_function(0x0880EB1Cu, &recomp_unit_0002, "recomp_unit_0002");
    runtime.register_function(0x0880EB38u, &recomp_unit_0002, "recomp_unit_0002");
    runtime.register_function(0x0880EB40u, &recomp_unit_0002, "recomp_unit_0002");
    runtime.register_function(0x0880EB48u, &recomp_unit_0002, "recomp_unit_0002");
    runtime.register_function(0x0880EB58u, &recomp_unit_0002, "recomp_unit_0002");
    runtime.register_function(0x0880EB60u, &recomp_unit_0002, "recomp_unit_0002");
    runtime.register_function(0x0880EB88u, &recomp_unit_0002, "recomp_unit_0002");
    runtime.register_function(0x0880EBB0u, &recomp_unit_0002, "recomp_unit_0002");
    runtime.register_function(0x0880EBB8u, &recomp_unit_0002, "recomp_unit_0002");
    runtime.register_function(0x0880EBC0u, &recomp_unit_0002, "recomp_unit_0002");
    runtime.register_function(0x0880EBC8u, &recomp_unit_0002, "recomp_unit_0002");
    runtime.register_function(0x0880EBD4u, &recomp_unit_0002, "recomp_unit_0002");
    runtime.register_function(0x0880EBDCu, &recomp_unit_0002, "recomp_unit_0002");
    runtime.register_function(0x0880EC04u, &recomp_unit_0002, "recomp_unit_0002");
    runtime.register_function(0x0880EC18u, &recomp_unit_0002, "recomp_unit_0002");
    runtime.register_function(0x0880EC28u, &recomp_unit_0002, "recomp_unit_0002");
    runtime.register_function(0x0880EC30u, &recomp_unit_0002, "recomp_unit_0002");
    runtime.register_function(0x0880EC3Cu, &recomp_unit_0002, "recomp_unit_0002");
    runtime.register_function(0x0880EC44u, &recomp_unit_0002, "recomp_unit_0002");
    runtime.register_function(0x0880EC58u, &recomp_unit_0002, "recomp_unit_0002");
    runtime.register_function(0x0880EC74u, &recomp_unit_0002, "recomp_unit_0002");
    runtime.register_function(0x0880EC88u, &recomp_unit_0002, "recomp_unit_0002");
    runtime.register_function(0x0880EC90u, &recomp_unit_0002, "recomp_unit_0002");
    runtime.register_function(0x0880EC98u, &recomp_unit_0002, "recomp_unit_0002");
    runtime.register_function(0x0880ECB4u, &recomp_unit_0002, "recomp_unit_0002");
    runtime.register_function(0x0880ECBCu, &recomp_unit_0002, "recomp_unit_0002");
    runtime.register_function(0x0880ECD4u, &recomp_unit_0002, "recomp_unit_0002");
    runtime.register_function(0x0880ECF0u, &recomp_unit_0002, "recomp_unit_0002");
    runtime.register_function(0x0880ED10u, &recomp_unit_0002, "recomp_unit_0002");
    runtime.register_function(0x0880ED18u, &recomp_unit_0002, "recomp_unit_0002");
    runtime.register_function(0x0880ED20u, &recomp_unit_0002, "recomp_unit_0002");
    runtime.register_function(0x0880ED2Cu, &recomp_unit_0002, "recomp_unit_0002");
    runtime.register_function(0x0880ED34u, &recomp_unit_0002, "recomp_unit_0002");
    runtime.register_function(0x0880ED38u, &recomp_unit_0002, "recomp_unit_0002");
    runtime.register_function(0x0880ED54u, &recomp_unit_0002, "recomp_unit_0002");
    runtime.register_function(0x0880ED5Cu, &recomp_unit_0002, "recomp_unit_0002");
    runtime.register_function(0x0880ED70u, &recomp_unit_0002, "recomp_unit_0002");
    runtime.register_function(0x0880ED78u, &recomp_unit_0002, "recomp_unit_0002");
    runtime.register_function(0x0880ED80u, &recomp_unit_0002, "recomp_unit_0002");
    runtime.register_function(0x0880ED8Cu, &recomp_unit_0002, "recomp_unit_0002");
    runtime.register_function(0x0880EDA8u, &recomp_unit_0002, "recomp_unit_0002");
    runtime.register_function(0x0880EDBCu, &recomp_unit_0002, "recomp_unit_0002");
    runtime.register_function(0x0880EDC4u, &recomp_unit_0002, "recomp_unit_0002");
    runtime.register_function(0x0880EDCCu, &recomp_unit_0002, "recomp_unit_0002");
    runtime.register_function(0x0880EDE8u, &recomp_unit_0002, "recomp_unit_0002");
    runtime.register_function(0x0880EDF0u, &recomp_unit_0002, "recomp_unit_0002");
    runtime.register_function(0x0880EE08u, &recomp_unit_0002, "recomp_unit_0002");
    runtime.register_function(0x0880EE24u, &recomp_unit_0002, "recomp_unit_0002");
    runtime.register_function(0x0880EE44u, &recomp_unit_0002, "recomp_unit_0002");
    runtime.register_function(0x0880EE4Cu, &recomp_unit_0002, "recomp_unit_0002");
    runtime.register_function(0x0880EE54u, &recomp_unit_0002, "recomp_unit_0002");
    runtime.register_function(0x0880EE60u, &recomp_unit_0002, "recomp_unit_0002");
    runtime.register_function(0x0880EE68u, &recomp_unit_0002, "recomp_unit_0002");
    runtime.register_function(0x0880EE6Cu, &recomp_unit_0002, "recomp_unit_0002");
    runtime.register_function(0x0880EE88u, &recomp_unit_0002, "recomp_unit_0002");
    runtime.register_function(0x0880EE90u, &recomp_unit_0002, "recomp_unit_0002");
    runtime.register_function(0x0880EEA4u, &recomp_unit_0002, "recomp_unit_0002");
    runtime.register_function(0x0880EEACu, &recomp_unit_0002, "recomp_unit_0002");
    runtime.register_function(0x0880EEB4u, &recomp_unit_0002, "recomp_unit_0002");
    runtime.register_function(0x0880EEC0u, &recomp_unit_0002, "recomp_unit_0002");
    runtime.register_function(0x0880EEE4u, &recomp_unit_0002, "recomp_unit_0002");
    runtime.register_function(0x0880EEF8u, &recomp_unit_0002, "recomp_unit_0002");
    runtime.register_function(0x0880EF00u, &recomp_unit_0002, "recomp_unit_0002");
    runtime.register_function(0x0880EF08u, &recomp_unit_0002, "recomp_unit_0002");
    runtime.register_function(0x0880EF0Cu, &recomp_unit_0002, "recomp_unit_0002");
    runtime.register_function(0x0880EF28u, &recomp_unit_0002, "recomp_unit_0002");
    runtime.register_function(0x0880EF30u, &recomp_unit_0002, "recomp_unit_0002");
    runtime.register_function(0x0880EF38u, &recomp_unit_0002, "recomp_unit_0002");
    runtime.register_function(0x0880EF48u, &recomp_unit_0002, "recomp_unit_0002");
    runtime.register_function(0x0880EF58u, &recomp_unit_0002, "recomp_unit_0002");
    runtime.register_function(0x0880EF60u, &recomp_unit_0002, "recomp_unit_0002");
    runtime.register_function(0x0880EF70u, &recomp_unit_0002, "recomp_unit_0002");
    runtime.register_function(0x0880EFA0u, &recomp_unit_0002, "recomp_unit_0002");
    runtime.register_function(0x0880EFA8u, &recomp_unit_0002, "recomp_unit_0002");
    runtime.register_function(0x0880EFB0u, &recomp_unit_0002, "recomp_unit_0002");
    runtime.register_function(0x0880EFBCu, &recomp_unit_0002, "recomp_unit_0002");
    runtime.register_function(0x0880EFC4u, &recomp_unit_0002, "recomp_unit_0002");
    runtime.register_function(0x0880EFCCu, &recomp_unit_0002, "recomp_unit_0002");
    runtime.register_function(0x0880EFD4u, &recomp_unit_0002, "recomp_unit_0002");
    runtime.register_function(0x0880EFE8u, &recomp_unit_0002, "recomp_unit_0002");
    runtime.register_function(0x0880EFF0u, &recomp_unit_0002, "recomp_unit_0002");
    runtime.register_function(0x0880EFF8u, &recomp_unit_0002, "recomp_unit_0002");
    runtime.register_function(0x0880F004u, &recomp_unit_0002, "recomp_unit_0002");
    runtime.register_function(0x0880F030u, &recomp_unit_0002, "recomp_unit_0002");
    runtime.register_function(0x0880F044u, &recomp_unit_0002, "recomp_unit_0002");
    runtime.register_function(0x0880F04Cu, &recomp_unit_0002, "recomp_unit_0002");
    runtime.register_function(0x0880F054u, &recomp_unit_0002, "recomp_unit_0002");
    runtime.register_function(0x0880F07Cu, &recomp_unit_0002, "recomp_unit_0002");
    runtime.register_function(0x0880F084u, &recomp_unit_0002, "recomp_unit_0002");
    runtime.register_function(0x0880F08Cu, &recomp_unit_0002, "recomp_unit_0002");
    runtime.register_function(0x0880F09Cu, &recomp_unit_0002, "recomp_unit_0002");
    runtime.register_function(0x0880F0B8u, &recomp_unit_0002, "recomp_unit_0002");
    runtime.register_function(0x0880F0D0u, &recomp_unit_0002, "recomp_unit_0002");
    runtime.register_function(0x0880F0DCu, &recomp_unit_0002, "recomp_unit_0002");
    runtime.register_function(0x0880F0E4u, &recomp_unit_0002, "recomp_unit_0002");
    runtime.register_function(0x0880F0ECu, &recomp_unit_0002, "recomp_unit_0002");
    runtime.register_function(0x0880F0F4u, &recomp_unit_0002, "recomp_unit_0002");
    runtime.register_function(0x0880F100u, &recomp_unit_0002, "recomp_unit_0002");
    runtime.register_function(0x0880F108u, &recomp_unit_0002, "recomp_unit_0002");
    runtime.register_function(0x0880F10Cu, &recomp_unit_0002, "recomp_unit_0002");
    runtime.register_function(0x0880F134u, &recomp_unit_0002, "recomp_unit_0002");
    runtime.register_function(0x0880F148u, &recomp_unit_0002, "recomp_unit_0002");
    runtime.register_function(0x0880F158u, &recomp_unit_0002, "recomp_unit_0002");
    runtime.register_function(0x0880F160u, &recomp_unit_0002, "recomp_unit_0002");
    runtime.register_function(0x0880F16Cu, &recomp_unit_0002, "recomp_unit_0002");
    runtime.register_function(0x0880F174u, &recomp_unit_0002, "recomp_unit_0002");
    runtime.register_function(0x0880F188u, &recomp_unit_0002, "recomp_unit_0002");
    runtime.register_function(0x0880F190u, &recomp_unit_0002, "recomp_unit_0002");
    runtime.register_function(0x0880F1A0u, &recomp_unit_0002, "recomp_unit_0002");
    runtime.register_function(0x0880F1A8u, &recomp_unit_0002, "recomp_unit_0002");
    runtime.register_function(0x0880F1B4u, &recomp_unit_0002, "recomp_unit_0002");
    runtime.register_function(0x0880F1D4u, &recomp_unit_0002, "recomp_unit_0002");
    runtime.register_function(0x0880F1DCu, &recomp_unit_0002, "recomp_unit_0002");
    runtime.register_function(0x0880F1ECu, &recomp_unit_0002, "recomp_unit_0002");
    runtime.register_function(0x0880F1FCu, &recomp_unit_0002, "recomp_unit_0002");
    runtime.register_function(0x0880F218u, &recomp_unit_0002, "recomp_unit_0002");
    runtime.register_function(0x0880F21Cu, &recomp_unit_0002, "recomp_unit_0002");
    runtime.register_function(0x0880F238u, &recomp_unit_0002, "recomp_unit_0002");
    runtime.register_function(0x0880F244u, &recomp_unit_0002, "recomp_unit_0002");
    runtime.register_function(0x0880F24Cu, &recomp_unit_0002, "recomp_unit_0002");
    runtime.register_function(0x0880F258u, &recomp_unit_0002, "recomp_unit_0002");
    runtime.register_function(0x0880F264u, &recomp_unit_0002, "recomp_unit_0002");
    runtime.register_function(0x0880F26Cu, &recomp_unit_0002, "recomp_unit_0002");
    runtime.register_function(0x0880F28Cu, &recomp_unit_0002, "recomp_unit_0002");
    runtime.register_function(0x0880F2A4u, &recomp_unit_0002, "recomp_unit_0002");
    runtime.register_function(0x0880F2C0u, &recomp_unit_0002, "recomp_unit_0002");
    runtime.register_function(0x0880F2E0u, &recomp_unit_0002, "recomp_unit_0002");
    runtime.register_function(0x0880F2F8u, &recomp_unit_0002, "recomp_unit_0002");
    runtime.register_function(0x0880F300u, &recomp_unit_0002, "recomp_unit_0002");
    runtime.register_function(0x0880F324u, &recomp_unit_0002, "recomp_unit_0002");
    runtime.register_function(0x0880F330u, &recomp_unit_0002, "recomp_unit_0002");
    runtime.register_function(0x0880F33Cu, &recomp_unit_0002, "recomp_unit_0002");
    runtime.register_function(0x0880F350u, &recomp_unit_0002, "recomp_unit_0002");
    runtime.register_function(0x0880F364u, &recomp_unit_0002, "recomp_unit_0002");
    runtime.register_function(0x0880F378u, &recomp_unit_0002, "recomp_unit_0002");
    runtime.register_function(0x0880F388u, &recomp_unit_0002, "recomp_unit_0002");
    runtime.register_function(0x0880F390u, &recomp_unit_0002, "recomp_unit_0002");
    runtime.register_function(0x0880F3A4u, &recomp_unit_0002, "recomp_unit_0002");
    runtime.register_function(0x0880F3C8u, &recomp_unit_0002, "recomp_unit_0002");
    runtime.register_function(0x0880F3D8u, &recomp_unit_0002, "recomp_unit_0002");
    runtime.register_function(0x0880F3DCu, &recomp_unit_0002, "recomp_unit_0002");
    runtime.register_function(0x0880F3F0u, &recomp_unit_0002, "recomp_unit_0002");
    runtime.register_function(0x0880F3F8u, &recomp_unit_0002, "recomp_unit_0002");
    runtime.register_function(0x0880F414u, &recomp_unit_0002, "recomp_unit_0002");
    runtime.register_function(0x0880F454u, &recomp_unit_0002, "recomp_unit_0002");
    runtime.register_function(0x0880F480u, &recomp_unit_0002, "recomp_unit_0002");
    runtime.register_function(0x0880F484u, &recomp_unit_0002, "recomp_unit_0002");
    runtime.register_function(0x0880F490u, &recomp_unit_0002, "recomp_unit_0002");
    runtime.register_function(0x0880F494u, &recomp_unit_0002, "recomp_unit_0002");
    runtime.register_function(0x0880F49Cu, &recomp_unit_0002, "recomp_unit_0002");
    runtime.register_function(0x0880F4A4u, &recomp_unit_0002, "recomp_unit_0002");
    runtime.register_function(0x0880F4B0u, &recomp_unit_0002, "recomp_unit_0002");
    runtime.register_function(0x0880F510u, &recomp_unit_0002, "recomp_unit_0002");
    runtime.register_function(0x0880F524u, &recomp_unit_0002, "recomp_unit_0002");
    runtime.register_function(0x0880F528u, &recomp_unit_0002, "recomp_unit_0002");
    runtime.register_function(0x0880F554u, &recomp_unit_0002, "recomp_unit_0002");
    runtime.register_function(0x0880F564u, &recomp_unit_0002, "recomp_unit_0002");
    runtime.register_function(0x0880F5D4u, &recomp_unit_0002, "recomp_unit_0002");
    runtime.register_function(0x0880F5DCu, &recomp_unit_0002, "recomp_unit_0002");
    runtime.register_function(0x0880F5ECu, &recomp_unit_0002, "recomp_unit_0002");
    runtime.register_function(0x0880F5F8u, &recomp_unit_0002, "recomp_unit_0002");
    runtime.register_function(0x0880F5FCu, &recomp_unit_0002, "recomp_unit_0002");
    runtime.register_function(0x0880F608u, &recomp_unit_0002, "recomp_unit_0002");
    runtime.register_function(0x0880F614u, &recomp_unit_0002, "recomp_unit_0002");
    runtime.register_function(0x0880F61Cu, &recomp_unit_0002, "recomp_unit_0002");
    runtime.register_function(0x0880F628u, &recomp_unit_0002, "recomp_unit_0002");
    runtime.register_function(0x0880F634u, &recomp_unit_0002, "recomp_unit_0002");
    runtime.register_function(0x0880F638u, &recomp_unit_0002, "recomp_unit_0002");
    runtime.register_function(0x0880F644u, &recomp_unit_0002, "recomp_unit_0002");
    runtime.register_function(0x0880F650u, &recomp_unit_0002, "recomp_unit_0002");
    runtime.register_function(0x0880F658u, &recomp_unit_0002, "recomp_unit_0002");
    runtime.register_function(0x0880F6A8u, &recomp_unit_0002, "recomp_unit_0002");
    runtime.register_function(0x0880F6C8u, &recomp_unit_0002, "recomp_unit_0002");
    runtime.register_function(0x0880F6CCu, &recomp_unit_0002, "recomp_unit_0002");
    runtime.register_function(0x0880F6D4u, &recomp_unit_0002, "recomp_unit_0002");
    runtime.register_function(0x0880F6D8u, &recomp_unit_0002, "recomp_unit_0002");
    runtime.register_function(0x0880F6E8u, &recomp_unit_0002, "recomp_unit_0002");
    runtime.register_function(0x0880F700u, &recomp_unit_0002, "recomp_unit_0002");
    runtime.register_function(0x0880F708u, &recomp_unit_0002, "recomp_unit_0002");
    runtime.register_function(0x0880F718u, &recomp_unit_0002, "recomp_unit_0002");
    runtime.register_function(0x0880F730u, &recomp_unit_0002, "recomp_unit_0002");
    runtime.register_function(0x0880F764u, &recomp_unit_0002, "recomp_unit_0002");
    runtime.register_function(0x0880F77Cu, &recomp_unit_0002, "recomp_unit_0002");
    runtime.register_function(0x0880F788u, &recomp_unit_0002, "recomp_unit_0002");
    runtime.register_function(0x0880F7ACu, &recomp_unit_0002, "recomp_unit_0002");
    runtime.register_function(0x0880F7BCu, &recomp_unit_0002, "recomp_unit_0002");
    runtime.register_function(0x0880F7D4u, &recomp_unit_0002, "recomp_unit_0002");
    runtime.register_function(0x0880F7ECu, &recomp_unit_0002, "recomp_unit_0002");
    runtime.register_function(0x0880F7FCu, &recomp_unit_0002, "recomp_unit_0002");
    runtime.register_function(0x0880F814u, &recomp_unit_0002, "recomp_unit_0002");
    runtime.register_function(0x0880F828u, &recomp_unit_0002, "recomp_unit_0002");
    runtime.register_function(0x0880F83Cu, &recomp_unit_0002, "recomp_unit_0002");
    runtime.register_function(0x0880F854u, &recomp_unit_0002, "recomp_unit_0002");
    runtime.register_function(0x0880F85Cu, &recomp_unit_0002, "recomp_unit_0002");
    runtime.register_function(0x0880F870u, &recomp_unit_0002, "recomp_unit_0002");
    runtime.register_function(0x0880F898u, &recomp_unit_0002, "recomp_unit_0002");
    runtime.register_function(0x0880F8A0u, &recomp_unit_0002, "recomp_unit_0002");
    runtime.register_function(0x0880F8B0u, &recomp_unit_0002, "recomp_unit_0002");
    runtime.register_function(0x0880F8B4u, &recomp_unit_0002, "recomp_unit_0002");
    runtime.register_function(0x0880F8C4u, &recomp_unit_0002, "recomp_unit_0002");
    runtime.register_function(0x0880F8D0u, &recomp_unit_0002, "recomp_unit_0002");
    runtime.register_function(0x0880F8E0u, &recomp_unit_0002, "recomp_unit_0002");
    runtime.register_function(0x0880F8F0u, &recomp_unit_0002, "recomp_unit_0002");
    runtime.register_function(0x0880F8FCu, &recomp_unit_0002, "recomp_unit_0002");
    runtime.register_function(0x0880F908u, &recomp_unit_0002, "recomp_unit_0002");
    runtime.register_function(0x0880F918u, &recomp_unit_0002, "recomp_unit_0002");
    runtime.register_function(0x0880F934u, &recomp_unit_0002, "recomp_unit_0002");
    runtime.register_function(0x0880F944u, &recomp_unit_0002, "recomp_unit_0002");
    runtime.register_function(0x0880F948u, &recomp_unit_0002, "recomp_unit_0002");
    runtime.register_function(0x0880F94Cu, &recomp_unit_0002, "recomp_unit_0002");
    runtime.register_function(0x0880F958u, &recomp_unit_0002, "recomp_unit_0002");
    runtime.register_function(0x0880F9A0u, &recomp_unit_0002, "recomp_unit_0002");
    runtime.register_function(0x0880F9ACu, &recomp_unit_0002, "recomp_unit_0002");
    runtime.register_function(0x0880F9BCu, &recomp_unit_0002, "recomp_unit_0002");
    runtime.register_function(0x0880F9C8u, &recomp_unit_0002, "recomp_unit_0002");
    runtime.register_function(0x0880F9E8u, &recomp_unit_0002, "recomp_unit_0002");
    runtime.register_function(0x0880F9FCu, &recomp_unit_0002, "recomp_unit_0002");
    runtime.register_function(0x0880FA04u, &recomp_unit_0002, "recomp_unit_0002");
    runtime.register_function(0x0880FA10u, &recomp_unit_0002, "recomp_unit_0002");
    runtime.register_function(0x0880FA28u, &recomp_unit_0002, "recomp_unit_0002");
    runtime.register_function(0x0880FA2Cu, &recomp_unit_0002, "recomp_unit_0002");
    runtime.register_function(0x0880FA48u, &recomp_unit_0002, "recomp_unit_0002");
    runtime.register_function(0x0880FA54u, &recomp_unit_0002, "recomp_unit_0002");
    runtime.register_function(0x0880FA5Cu, &recomp_unit_0002, "recomp_unit_0002");
    runtime.register_function(0x0880FA70u, &recomp_unit_0002, "recomp_unit_0002");
    runtime.register_function(0x0880FA74u, &recomp_unit_0002, "recomp_unit_0002");
    runtime.register_function(0x0880FA80u, &recomp_unit_0002, "recomp_unit_0002");
    runtime.register_function(0x0880FA98u, &recomp_unit_0002, "recomp_unit_0002");
    runtime.register_function(0x0880FAA0u, &recomp_unit_0002, "recomp_unit_0002");
    runtime.register_function(0x0880FAACu, &recomp_unit_0002, "recomp_unit_0002");
    runtime.register_function(0x0880FAD8u, &recomp_unit_0002, "recomp_unit_0002");
    runtime.register_function(0x0880FAF8u, &recomp_unit_0002, "recomp_unit_0002");
    runtime.register_function(0x0880FB00u, &recomp_unit_0002, "recomp_unit_0002");
    runtime.register_function(0x0880FB08u, &recomp_unit_0002, "recomp_unit_0002");
    runtime.register_function(0x0880FB10u, &recomp_unit_0002, "recomp_unit_0002");
    runtime.register_function(0x0880FB1Cu, &recomp_unit_0002, "recomp_unit_0002");
    runtime.register_function(0x0880FB30u, &recomp_unit_0002, "recomp_unit_0002");
    runtime.register_function(0x0880FB40u, &recomp_unit_0002, "recomp_unit_0002");
    runtime.register_function(0x0880FB48u, &recomp_unit_0002, "recomp_unit_0002");
    runtime.register_function(0x0880FB4Cu, &recomp_unit_0002, "recomp_unit_0002");
    runtime.register_function(0x0880FB5Cu, &recomp_unit_0002, "recomp_unit_0002");
    runtime.register_function(0x0880FB64u, &recomp_unit_0002, "recomp_unit_0002");
    runtime.register_function(0x0880FB70u, &recomp_unit_0002, "recomp_unit_0002");
    runtime.register_function(0x0880FB88u, &recomp_unit_0002, "recomp_unit_0002");
    runtime.register_function(0x0880FB90u, &recomp_unit_0002, "recomp_unit_0002");
    runtime.register_function(0x0880FB94u, &recomp_unit_0002, "recomp_unit_0002");
    runtime.register_function(0x0880FB9Cu, &recomp_unit_0002, "recomp_unit_0002");
    runtime.register_function(0x0880FBA4u, &recomp_unit_0002, "recomp_unit_0002");
    runtime.register_function(0x0880FBB8u, &recomp_unit_0002, "recomp_unit_0002");
    runtime.register_function(0x0880FBD0u, &recomp_unit_0002, "recomp_unit_0002");
    runtime.register_function(0x0880FBE0u, &recomp_unit_0002, "recomp_unit_0002");
    runtime.register_function(0x0880FBF8u, &recomp_unit_0002, "recomp_unit_0002");
    runtime.register_function(0x0880FC14u, &recomp_unit_0002, "recomp_unit_0002");
    runtime.register_function(0x0880FC20u, &recomp_unit_0002, "recomp_unit_0002");
    runtime.register_function(0x0880FC38u, &recomp_unit_0002, "recomp_unit_0002");
    runtime.register_function(0x0880FC40u, &recomp_unit_0002, "recomp_unit_0002");
    runtime.register_function(0x0880FC44u, &recomp_unit_0002, "recomp_unit_0002");
    runtime.register_function(0x0880FC48u, &recomp_unit_0002, "recomp_unit_0002");
    runtime.register_function(0x0880FC60u, &recomp_unit_0002, "recomp_unit_0002");
    runtime.register_function(0x0880FC6Cu, &recomp_unit_0002, "recomp_unit_0002");
    runtime.register_function(0x0880FC98u, &recomp_unit_0002, "recomp_unit_0002");
    runtime.register_function(0x0880FCACu, &recomp_unit_0002, "recomp_unit_0002");
    runtime.register_function(0x0880FCC0u, &recomp_unit_0002, "recomp_unit_0002");
    runtime.register_function(0x0880FCCCu, &recomp_unit_0002, "recomp_unit_0002");
    runtime.register_function(0x0880FCE0u, &recomp_unit_0002, "recomp_unit_0002");
    runtime.register_function(0x0880FD08u, &recomp_unit_0002, "recomp_unit_0002");
    runtime.register_function(0x0880FD10u, &recomp_unit_0002, "recomp_unit_0002");
    runtime.register_function(0x0880FD28u, &recomp_unit_0002, "recomp_unit_0002");
    runtime.register_function(0x0880FD3Cu, &recomp_unit_0002, "recomp_unit_0002");
    runtime.register_function(0x0880FD44u, &recomp_unit_0002, "recomp_unit_0002");
    runtime.register_function(0x0880FD50u, &recomp_unit_0002, "recomp_unit_0002");
    runtime.register_function(0x0880FD54u, &recomp_unit_0002, "recomp_unit_0002");
    runtime.register_function(0x0880FD70u, &recomp_unit_0002, "recomp_unit_0002");
    runtime.register_function(0x0880FD8Cu, &recomp_unit_0002, "recomp_unit_0002");
    runtime.register_function(0x0880FDA0u, &recomp_unit_0002, "recomp_unit_0002");
    runtime.register_function(0x0880FDACu, &recomp_unit_0002, "recomp_unit_0002");
    runtime.register_function(0x0880FDC4u, &recomp_unit_0002, "recomp_unit_0002");
    runtime.register_function(0x0880FDE8u, &recomp_unit_0002, "recomp_unit_0002");
    runtime.register_function(0x0880FDF0u, &recomp_unit_0002, "recomp_unit_0002");
    runtime.register_function(0x0880FE04u, &recomp_unit_0002, "recomp_unit_0002");
    runtime.register_function(0x0880FE18u, &recomp_unit_0002, "recomp_unit_0002");
    runtime.register_function(0x0880FE20u, &recomp_unit_0002, "recomp_unit_0002");
    runtime.register_function(0x0880FE28u, &recomp_unit_0002, "recomp_unit_0002");
    runtime.register_function(0x0880FE2Cu, &recomp_unit_0002, "recomp_unit_0002");
    runtime.register_function(0x0880FE30u, &recomp_unit_0002, "recomp_unit_0002");
    runtime.register_function(0x0880FE34u, &recomp_unit_0002, "recomp_unit_0002");
    runtime.register_function(0x0880FE3Cu, &recomp_unit_0002, "recomp_unit_0002");
    runtime.register_function(0x0880FE48u, &recomp_unit_0002, "recomp_unit_0002");
    runtime.register_function(0x0880FE68u, &recomp_unit_0002, "recomp_unit_0002");
    runtime.register_function(0x0880FE6Cu, &recomp_unit_0002, "recomp_unit_0002");
    runtime.register_function(0x0880FE7Cu, &recomp_unit_0002, "recomp_unit_0002");
    runtime.register_function(0x0880FE8Cu, &recomp_unit_0002, "recomp_unit_0002");
    runtime.register_function(0x0880FEA8u, &recomp_unit_0002, "recomp_unit_0002");
    runtime.register_function(0x0880FEB0u, &recomp_unit_0002, "recomp_unit_0002");
    runtime.register_function(0x0880FEC4u, &recomp_unit_0002, "recomp_unit_0002");
    runtime.register_function(0x0880FED0u, &recomp_unit_0002, "recomp_unit_0002");
    runtime.register_function(0x0880FEDCu, &recomp_unit_0002, "recomp_unit_0002");
    runtime.register_function(0x0880FEF0u, &recomp_unit_0002, "recomp_unit_0002");
    runtime.register_function(0x0880FF04u, &recomp_unit_0002, "recomp_unit_0002");
    runtime.register_function(0x0880FF20u, &recomp_unit_0002, "recomp_unit_0002");
    runtime.register_function(0x0880FF2Cu, &recomp_unit_0002, "recomp_unit_0002");
    runtime.register_function(0x0880FF48u, &recomp_unit_0002, "recomp_unit_0002");
    runtime.register_function(0x0880FF50u, &recomp_unit_0002, "recomp_unit_0002");
    runtime.register_function(0x0880FF64u, &recomp_unit_0002, "recomp_unit_0002");
    runtime.register_function(0x0880FF6Cu, &recomp_unit_0002, "recomp_unit_0002");
    runtime.register_function(0x0880FF78u, &recomp_unit_0002, "recomp_unit_0002");
    runtime.register_function(0x0880FF7Cu, &recomp_unit_0002, "recomp_unit_0002");
    runtime.register_function(0x0880FF80u, &recomp_unit_0002, "recomp_unit_0002");
    runtime.register_function(0x0880FF84u, &recomp_unit_0002, "recomp_unit_0002");
    runtime.register_function(0x0880FF88u, &recomp_unit_0002, "recomp_unit_0002");
    runtime.register_function(0x0880FF98u, &recomp_unit_0002, "recomp_unit_0002");
    runtime.register_function(0x0880FFACu, &recomp_unit_0002, "recomp_unit_0002");
    runtime.register_function(0x0880FFC4u, &recomp_unit_0002, "recomp_unit_0002");
    runtime.register_function(0x0880FFD8u, &recomp_unit_0002, "recomp_unit_0002");
    runtime.register_function(0x0880FFDCu, &recomp_unit_0002, "recomp_unit_0002");
    runtime.register_function(0x0880FFE4u, &recomp_unit_0002, "recomp_unit_0002");
    runtime.register_function(0x0880FFF8u, &recomp_unit_0002, "recomp_unit_0002");
}
} // namespace psprecomp
