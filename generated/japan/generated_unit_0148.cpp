#include "psprecomp/runtime.hpp"
#include "generated_units.hpp"
#include <bit>
#include <cmath>
#include <cstdint>
#include <limits>

namespace psprecomp {
static const std::uint16_t kEntryIds_recomp_unit_0148[4091] = {
    1, 0, 2, 0, 3, 4, 0, 0, 5, 0, 6, 0, 0, 7, 0, 0, 0, 8, 0, 0, 0, 0, 9, 0, 10, 0, 0, 0, 0, 0, 0, 0,
    0, 11, 0, 0, 0, 12, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 13, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 14, 0, 0, 0, 0, 15, 0, 0, 0, 16, 17, 0, 0, 18, 0, 0, 0, 0, 0, 0, 0, 0, 0, 19, 0, 20, 0, 0, 0, 0,
    21, 0, 22, 0, 0, 0, 0, 23, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 24, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 25, 0, 26, 0, 27, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 28,
    0, 29, 30, 0, 0, 0, 31, 32, 0, 0, 0, 33, 34, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 35, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 36, 0, 0, 0, 0, 37, 0, 38, 0, 0, 39, 40, 0, 41, 0, 0, 42, 0, 43,
    0, 0, 0, 0, 44, 0, 45, 0, 46, 47, 0, 0, 0, 0, 0, 0, 48, 0, 0, 49, 0, 0, 0, 50, 0, 0, 51, 0, 0, 52, 0, 53,
    0, 0, 0, 0, 54, 0, 0, 0, 0, 55, 0, 0, 0, 56, 0, 0, 57, 0, 58, 0, 0, 59, 0, 60, 0, 0, 61, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 62, 0, 0, 0, 0, 0, 0, 63, 0, 0, 64, 0, 0, 65, 0, 0, 0, 0, 0, 0, 66, 0, 0,
    67, 0, 0, 68, 0, 0, 0, 0, 0, 0, 69, 70, 0, 0, 0, 0, 0, 71, 0, 0, 0, 72, 0, 0, 73, 0, 74, 0, 75, 0, 76, 0,
    0, 0, 77, 0, 0, 0, 0, 78, 0, 79, 0, 0, 0, 0, 80, 0, 81, 0, 0, 82, 0, 83, 0, 0, 84, 0, 85, 0, 0, 86, 0, 87,
    0, 0, 88, 0, 0, 0, 0, 0, 0, 0, 0, 0, 89, 0, 0, 0, 0, 90, 0, 91, 0, 0, 92, 0, 93, 0, 0, 94, 0, 95, 0, 0,
    96, 0, 97, 0, 0, 98, 0, 0, 99, 0, 0, 0, 0, 100, 0, 101, 0, 102, 103, 0, 104, 0, 0, 105, 0, 0, 106, 0, 107, 0, 0, 108,
    0, 109, 0, 0, 110, 0, 111, 0, 0, 112, 0, 0, 0, 0, 0, 0, 113, 0, 0, 0, 114, 0, 0, 115, 0, 116, 0, 0, 117, 0, 0, 118,
    0, 0, 0, 0, 0, 0, 119, 0, 0, 120, 0, 0, 121, 0, 0, 0, 0, 0, 0, 122, 123, 0, 0, 0, 0, 0, 124, 0, 0, 0, 125, 0,
    0, 126, 0, 127, 0, 0, 128, 0, 129, 0, 130, 0, 0, 131, 0, 132, 0, 0, 133, 0, 134, 0, 0, 135, 0, 0, 136, 0, 0, 0, 0, 137,
    0, 0, 0, 138, 0, 0, 0, 0, 139, 0, 0, 0, 0, 0, 0, 140, 0, 0, 0, 0, 0, 0, 141, 0, 0, 142, 0, 0, 0, 0, 143, 0,
    0, 144, 145, 0, 146, 0, 0, 0, 147, 0, 0, 148, 0, 0, 0, 0, 149, 0, 0, 150, 151, 0, 0, 152, 0, 0, 0, 153, 0, 0, 0, 154,
    0, 0, 155, 0, 0, 156, 0, 0, 157, 0, 158, 0, 0, 0, 0, 0, 0, 159, 0, 160, 0, 161, 0, 0, 0, 0, 0, 0, 162, 0, 163, 0,
    164, 0, 0, 0, 0, 0, 0, 165, 0, 166, 0, 167, 0, 168, 0, 0, 0, 0, 0, 0, 169, 0, 170, 0, 171, 0, 0, 0, 0, 0, 0, 172,
    0, 173, 0, 174, 0, 0, 0, 0, 0, 0, 175, 0, 176, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 177, 0,
    0, 0, 0, 178, 0, 0, 0, 0, 179, 0, 180, 0, 0, 0, 0, 181, 0, 0, 0, 0, 0, 0, 0, 182, 0, 0, 0, 183, 0, 0, 184, 0,
    0, 185, 186, 187, 0, 0, 0, 188, 0, 189, 0, 0, 0, 0, 0, 0, 190, 0, 191, 0, 0, 0, 0, 0, 0, 0, 0, 192, 0, 193, 0, 194,
    0, 0, 0, 0, 0, 0, 0, 0, 195, 0, 0, 196, 0, 197, 0, 0, 198, 0, 199, 200, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    201, 0, 0, 202, 0, 0, 0, 0, 0, 0, 0, 0, 0, 203, 0, 0, 204, 205, 0, 206, 0, 0, 207, 0, 0, 0, 208, 0, 0, 0, 209, 0,
    0, 210, 0, 0, 0, 211, 212, 0, 0, 0, 0, 0, 0, 0, 0, 213, 0, 0, 0, 214, 0, 0, 0, 0, 0, 0, 0, 215, 0, 216, 217, 0,
    0, 0, 0, 0, 0, 218, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 219, 0, 0, 0, 0, 0, 0, 220, 0, 0, 0, 221, 0, 0, 0, 222,
    0, 0, 223, 0, 0, 0, 224, 0, 0, 0, 225, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 226, 0, 0, 0, 0, 0, 0, 0, 0, 227, 0,
    0, 0, 228, 0, 0, 0, 0, 0, 0, 0, 229, 0, 230, 231, 0, 0, 0, 0, 0, 0, 232, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 233, 0, 0, 0, 0, 234, 0, 0, 235, 0, 0, 0, 236, 0, 0, 237, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 238, 0, 0, 0, 0, 0, 0, 0, 0, 0, 239, 0, 240, 0, 0, 0, 0, 241, 0, 0, 0, 0, 242, 0, 0, 0,
    243, 0, 0, 0, 0, 244, 0, 0, 245, 0, 0, 0, 246, 0, 0, 247, 0, 248, 0, 0, 0, 249, 0, 250, 0, 0, 0, 0, 251, 0, 252, 0,
    0, 0, 253, 0, 0, 0, 0, 254, 0, 0, 0, 255, 0, 256, 0, 257, 0, 0, 0, 0, 258, 0, 0, 259, 0, 0, 0, 260, 0, 0, 261, 0,
    262, 0, 0, 0, 263, 264, 0, 0, 265, 0, 266, 0, 0, 0, 267, 268, 0, 0, 269, 0, 270, 0, 0, 271, 0, 272, 0, 0, 273, 0, 0, 0,
    274, 0, 0, 0, 275, 0, 0, 0, 0, 0, 0, 0, 0, 0, 276, 0, 0, 0, 277, 0, 0, 0, 0, 278, 0, 0, 279, 0, 280, 281, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 282, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 283, 0, 0,
    284, 0, 0, 0, 0, 285, 286, 0, 0, 0, 0, 0, 0, 287, 0, 0, 288, 0, 0, 0, 0, 289, 0, 290, 0, 0, 291, 0, 0, 0, 292, 0,
    0, 0, 0, 293, 0, 0, 0, 0, 0, 0, 0, 0, 294, 0, 0, 295, 0, 0, 296, 297, 0, 0, 298, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 299, 0, 300, 0, 0, 0, 0, 0, 0, 301, 0, 302, 0, 0, 0, 0, 0, 303, 0, 0, 0, 0, 0, 0, 304, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 305, 0, 0, 0, 0, 306, 0, 0, 0, 307, 0, 0, 0, 308, 309, 0, 0, 310, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 311, 0, 0, 312, 0, 0, 0, 0, 0, 0, 0, 313, 0, 314, 0, 0, 0, 0, 0, 0, 315, 0, 0, 0, 0, 0, 316,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 317, 0, 0, 0, 0, 0, 0, 0, 0, 318, 319, 0, 0, 320, 0, 0, 0, 0, 0, 0, 321, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 322, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 323, 0, 0, 0, 0, 0, 324,
    0, 0, 0, 0, 0, 0, 0, 325, 0, 0, 0, 0, 0, 326, 327, 0, 0, 328, 0, 0, 0, 0, 0, 0, 0, 0, 329, 0, 0, 0, 330, 0,
    0, 0, 331, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 332, 0, 0, 0, 0, 0, 0, 0, 0, 333, 334, 0, 0, 335, 0, 0, 0, 0, 0,
    0, 336, 0, 0, 0, 0, 0, 337, 0, 0, 0, 338, 0, 339, 0, 0, 340, 341, 0, 342, 0, 0, 0, 0, 343, 0, 0, 0, 0, 0, 0, 344,
    0, 0, 345, 0, 346, 347, 0, 0, 348, 0, 0, 0, 0, 349, 0, 350, 0, 0, 351, 0, 0, 0, 0, 0, 352, 0, 0, 353, 0, 0, 0, 0,
    354, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 355, 0, 0, 0, 0, 356, 0, 0, 357, 0, 0, 0, 0, 358, 0, 0, 359, 360, 0,
    0, 0, 0, 361, 0, 0, 362, 363, 0, 364, 0, 0, 0, 0, 0, 0, 365, 0, 0, 366, 0, 0, 0, 367, 368, 0, 0, 369, 0, 0, 0, 0,
    0, 0, 370, 371, 0, 0, 372, 0, 0, 0, 0, 0, 0, 373, 0, 0, 0, 0, 0, 0, 374, 0, 375, 0, 0, 0, 376, 0, 377, 0, 0, 0,
    0, 378, 0, 0, 379, 0, 0, 0, 0, 0, 380, 0, 381, 0, 0, 382, 0, 0, 0, 383, 0, 384, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 385, 0, 0, 386, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 387, 388, 0, 0, 0, 0, 0, 0, 0, 0, 389,
    0, 0, 0, 0, 0, 0, 0, 390, 0, 0, 0, 0, 0, 0, 0, 0, 391, 0, 0, 0, 0, 0, 392, 0, 0, 0, 0, 393, 0, 0, 0, 0,
    394, 0, 0, 0, 0, 0, 0, 0, 395, 0, 0, 0, 0, 396, 0, 0, 0, 0, 0, 397, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    398, 0, 0, 399, 0, 0, 400, 0, 0, 401, 0, 0, 402, 0, 0, 403, 0, 0, 0, 0, 404, 0, 0, 405, 0, 406, 0, 0, 0, 0, 0, 0,
    0, 407, 0, 0, 0, 0, 0, 0, 408, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 409, 0, 0, 0, 410, 0, 0, 411, 0, 0, 0, 0,
    412, 0, 0, 413, 0, 414, 0, 0, 415, 0, 0, 416, 0, 0, 0, 0, 417, 0, 0, 418, 0, 419, 0, 0, 420, 0, 0, 421, 0, 0, 0, 0,
    422, 0, 0, 423, 0, 424, 0, 0, 425, 0, 0, 0, 426, 0, 0, 427, 0, 0, 0, 428, 0, 0, 429, 0, 0, 0, 430, 0, 0, 431, 0, 0,
    0, 432, 0, 0, 433, 0, 0, 0, 434, 0, 0, 435, 0, 0, 0, 436, 0, 0, 437, 0, 0, 0, 438, 0, 439, 0, 0, 440, 0, 0, 0, 0,
    0, 441, 0, 0, 0, 442, 0, 443, 0, 0, 444, 0, 0, 0, 0, 0, 445, 0, 0, 0, 446, 0, 447, 0, 0, 448, 0, 0, 0, 449, 450, 0,
    0, 451, 0, 0, 452, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 453, 0, 0, 454, 455, 0, 0, 456, 0, 0, 0, 0, 0, 0, 0,
    0, 457, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 458, 0, 459, 0, 0, 0, 0, 0, 0,
    0, 460, 0, 0, 0, 0, 0, 461, 0, 0, 0, 0, 462, 0, 0, 463, 464, 0, 0, 465, 0, 0, 466, 467, 0, 0, 468, 0, 0, 0, 469, 0,
    0, 0, 0, 0, 0, 0, 470, 0, 0, 0, 0, 0, 0, 471, 0, 0, 472, 473, 0, 0, 0, 474, 0, 0, 475, 0, 0, 0, 476, 0, 0, 0,
    0, 0, 0, 0, 477, 0, 0, 0, 0, 0, 0, 478, 0, 0, 479, 480, 0, 0, 0, 481, 0, 0, 482, 0, 0, 483, 0, 0, 484, 0, 0, 485,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 486, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 487, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 488, 0, 0, 0, 0, 0, 489, 0, 0, 0, 490, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 491, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 492, 0, 0, 0, 493, 0, 0, 0, 0, 494, 0, 0, 495, 0, 0, 0, 0, 496, 0, 0,
    497, 0, 0, 498, 0, 0, 0, 0, 0, 0, 0, 0, 0, 499, 0, 0, 0, 0, 0, 0, 0, 500, 0, 0, 0, 0, 0, 501, 0, 0, 0, 0,
    0, 0, 502, 0, 0, 503, 0, 0, 0, 504, 0, 0, 0, 0, 505, 0, 0, 0, 0, 506, 0, 0, 0, 0, 0, 0, 0, 507, 0, 0, 0, 0,
    508, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 509, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    510, 0, 0, 0, 0, 0, 0, 0, 511, 0, 0, 0, 0, 512, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 513,
    0, 0, 0, 0, 514, 0, 0, 0, 0, 0, 0, 0, 515, 0, 516, 0, 0, 517, 0, 0, 0, 518, 0, 0, 0, 0, 0, 0, 0, 0, 519, 0,
    0, 0, 520, 0, 0, 521, 0, 0, 0, 0, 0, 0, 522, 0, 0, 523, 0, 0, 0, 524, 0, 0, 0, 0, 525, 0, 0, 0, 0, 526, 0, 0,
    0, 0, 0, 0, 0, 527, 0, 0, 0, 0, 528, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    529, 0, 0, 0, 0, 0, 0, 0, 0, 0, 530, 0, 0, 0, 0, 0, 0, 0, 531, 0, 0, 0, 0, 532, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 533, 0, 0, 0, 0, 534, 0, 0, 0, 0, 0, 0, 0, 535, 0, 536, 0, 0, 537, 0, 0, 0, 538,
    0, 0, 0, 0, 0, 0, 0, 0, 539, 0, 0, 0, 540, 0, 0, 0, 0, 0, 0, 541, 0, 542, 0, 0, 543, 0, 0, 0, 544, 545, 0, 0,
    0, 546, 0, 0, 547, 0, 0, 548, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 549, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 550, 551, 0, 0, 0, 552, 0, 0, 553, 0, 0, 0, 0, 0, 0, 554, 0, 0, 0,
    0, 0, 0, 555, 0, 0, 556, 0, 0, 0, 0, 0, 0, 557, 0, 0, 0, 0, 0, 0, 558, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 559, 0, 0, 0, 0, 0, 0, 560, 0, 0, 561, 0, 0, 562, 0, 0, 563, 0, 0, 0, 0, 564, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 565, 0, 0, 0, 566, 0, 0, 567, 0, 0, 568, 0, 0, 0, 0, 569, 0, 0, 570, 0, 571, 0, 0, 0, 0, 0, 0, 0,
    0, 572, 0, 0, 0, 0, 0, 0, 0, 0, 573, 0, 0, 0, 0, 0, 0, 574, 0, 0, 0, 0, 575, 0, 0, 576, 0, 0, 0, 577, 0, 0,
    0, 0, 0, 0, 0, 578, 579, 0, 0, 0, 0, 0, 580, 0, 0, 0, 0, 581, 0, 0, 582, 0, 583, 0, 0, 0, 0, 584, 0, 0, 585, 0,
    0, 0, 0, 586, 0, 0, 587, 0, 588, 0, 0, 589, 0, 0, 590, 0, 0, 0, 0, 591, 0, 0, 592, 0, 593, 0, 0, 594, 0, 0, 595, 0,
    0, 0, 0, 596, 0, 0, 597, 0, 598, 0, 0, 599, 0, 0, 0, 600, 0, 0, 601, 0, 0, 0, 602, 0, 0, 603, 0, 0, 0, 604, 0, 0,
    605, 0, 0, 0, 606, 0, 0, 607, 0, 0, 0, 608, 0, 0, 609, 0, 0, 0, 610, 0, 0, 611, 0, 0, 0, 612, 0, 613, 0, 0, 614, 0,
    0, 0, 0, 0, 615, 0, 0, 0, 616, 0, 617, 0, 0, 618, 0, 0, 0, 0, 0, 619, 0, 0, 0, 620, 0, 621, 0, 0, 622, 0, 0, 0,
    623, 624, 0, 0, 625, 0, 626, 0, 0, 0, 0, 0, 627, 0, 0, 0, 628, 0, 0, 629, 0, 0, 630, 0, 0, 0, 0, 631, 0, 0, 0, 0,
    632, 0, 0, 0, 0, 0, 0, 0, 0, 633, 0, 0, 0, 0, 634, 0, 0, 635, 0, 0, 636, 0, 0, 637, 0, 0, 0, 0, 0, 638, 0, 0,
    0, 0, 0, 0, 639, 640, 0, 0, 0, 0, 641, 0, 0, 0, 0, 0, 642, 0, 0, 643, 0, 644, 0, 0, 0, 0, 0, 0, 0, 645, 0, 0,
    0, 0, 0, 0, 646, 0, 0, 0, 647, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 648, 0, 649, 0, 0, 0, 650, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 651, 0, 0, 0, 0, 652, 0, 0, 0, 653, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 654, 0, 655, 0,
    0, 656, 0, 0, 0, 0, 657, 0, 0, 658, 0, 659, 0, 0, 0, 660, 0, 0, 0, 661, 0, 0, 0, 0, 0, 662, 0, 0, 0, 0, 663, 0,
    0, 664, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 665, 0, 0, 0, 666, 0, 0, 667, 0, 0, 0, 668, 0, 0, 669, 0, 0, 670, 0,
    0, 671, 0, 0, 0, 0, 0, 672, 0, 673, 0, 0, 0, 0, 674, 0, 675, 0, 676, 0, 0, 677, 0, 0, 678, 0, 0, 0, 679, 0, 0, 680,
    0, 0, 0, 0, 681, 0, 0, 0, 682, 0, 0, 0, 0, 0, 683, 0, 684, 0, 0, 0, 685, 0, 0, 0, 0, 0, 686, 0, 0, 687, 0, 0,
    688, 0, 0, 0, 0, 0, 0, 0, 689, 0, 0, 690, 0, 0, 0, 0, 0, 0, 0, 691, 0, 0, 0, 0, 0, 0, 0, 0, 0, 692, 693, 0,
    0, 0, 694, 695, 0, 0, 0, 0, 0, 696, 0, 0, 697, 0, 0, 698, 0, 0, 0, 699, 0, 0, 700, 0, 0, 701, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 702, 0, 0, 0, 703, 0, 0, 0, 0, 0, 704, 0, 705, 0, 0, 0, 706, 0, 0, 0, 0, 0, 707, 0, 0, 708, 0, 0,
    709, 0, 0, 0, 0, 0, 0, 0, 710, 0, 0, 711, 0, 0, 0, 0, 0, 0, 0, 712, 0, 0, 0, 0, 0, 0, 0, 0, 0, 713, 714, 0,
    0, 0, 715, 716, 0, 0, 0, 0, 0, 717, 0, 0, 0, 718, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 719, 0, 0, 0, 0, 0, 720, 0,
    0, 0, 0, 721, 0, 0, 0, 0, 722, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 723, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 724, 0, 0, 0, 0, 0, 725, 0, 0, 0, 0, 726, 0, 0, 0, 0, 727, 0, 0, 0, 728, 729, 0, 0, 730, 0, 0, 0,
    0, 0, 0, 731, 0, 0, 0, 0, 0, 0, 0, 0, 0, 732, 0, 0, 733, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    734, 0, 0, 0, 0, 0, 0, 735, 736, 0, 0, 737, 738, 0, 0, 0, 739, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 740, 0, 0, 0, 0,
    0, 0, 741, 0, 0, 742, 0, 0, 743, 0, 0, 0, 0, 744, 0, 745, 0, 0, 746, 0, 0, 0, 0, 0, 0, 0, 0, 747, 0, 0, 0, 748,
    0, 749, 0, 0, 750, 0, 0, 0, 751, 752, 0, 0, 0, 753, 0, 754, 0, 0, 755, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    756, 0, 757, 0, 0, 758, 0, 0, 0, 759, 760, 0, 0, 0, 761, 0, 762, 0, 763, 0, 0, 0, 0, 764, 0, 0, 765, 0, 0, 766, 0, 0,
    0, 767, 0, 0, 0, 0, 0, 0, 768, 0, 0, 769, 0, 0, 0, 770, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 771, 0, 0, 0, 772,
    0, 0, 0, 0, 0, 773, 0, 0, 0, 774, 0, 0, 0, 775, 0, 0, 0, 0, 0, 776, 0, 0, 0, 777, 0, 0, 0, 0, 0, 778, 0, 779,
    0, 0, 0, 780, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 781, 0, 0, 0, 782, 0, 0, 0, 0, 0, 783, 0, 0, 0, 0, 784, 0,
    0, 0, 785, 0, 0, 0, 0, 0, 786, 0, 787, 0, 788, 0, 0, 0, 0, 789, 0, 0, 0, 790, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 791, 0, 0, 792, 0, 0, 793, 0, 0, 0, 0, 794, 0, 795, 0, 0, 0, 0, 0, 0, 796, 0, 0, 0,
    797, 0, 0, 0, 798, 0, 799, 0, 0, 800, 0, 0, 0, 0, 801, 0, 0, 0, 0, 802, 0, 803, 0, 0, 804, 0, 0, 805, 0, 0, 0, 0,
    0, 0, 806, 0, 0, 807, 0, 0, 808, 0, 0, 0, 0, 0, 0, 0, 0, 809, 0, 0, 810, 0, 0, 0, 0, 0, 0, 0, 0, 811, 0, 0,
    812, 0, 0, 0, 0, 0, 0, 0, 813, 0, 814, 0, 0, 0, 0, 0, 815, 0, 0, 0, 816, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 817, 0, 0,
    818, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 819, 0, 0, 0, 0, 0, 820, 0, 0, 821, 0, 822, 0, 0, 823, 0,
    0, 824, 825, 0, 0, 0, 826, 0, 0, 0, 0, 0, 0, 0, 0, 0, 827, 0, 0, 0, 0, 0, 0, 0, 828, 0, 829, 0, 0, 830, 0, 0,
    0, 0, 0, 831, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 832, 0, 0, 0, 833, 0,
    0, 0, 0, 0, 834, 0, 0, 835, 0, 0, 0, 836, 0, 0, 0, 0, 0, 837, 0, 0, 0, 0, 0, 0, 838, 0, 0, 0, 839, 0, 0, 0,
    0, 840, 0, 0, 841, 0, 0, 0, 0, 0, 0, 0, 0, 0, 842, 0, 0, 0, 0, 0, 0, 843, 0, 0, 0, 844, 0, 0, 0, 845, 0, 0,
    0, 846, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 847, 0, 0, 0, 0, 0, 0, 0, 0, 848, 0, 0, 0, 0, 0, 849, 0, 0, 0, 850,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 851, 0, 852, 0, 0, 853, 0, 0, 854, 0, 0, 855, 0, 0, 0, 0, 0, 0, 0, 856, 0, 0, 0,
    0, 0, 0, 0, 857, 0, 0, 0, 0, 0, 0, 0, 0, 0, 858, 0, 859, 0, 0, 860, 0, 0, 0, 861, 0, 0, 862,
};
void recomp_unit_0148_entry(Runtime &rt, AllegrexContext &ctx, std::uint16_t direct_entry_id, GuestMemory::AotFastView &aot_mem) {
    std::uint32_t jump_target = 0u;
    std::uint32_t local_transfers = 0u;
    std::uint32_t local_pc = ctx.pc;
    std::uint32_t entry_id = direct_entry_id;
LOCAL_DISPATCH:
    {
    if (entry_id == 0u) {
        const std::uint32_t entry_delta = local_pc - 0x08A54004u;
        entry_id = (entry_delta < 16364u && (entry_delta & 3u) == 0u) ? kEntryIds_recomp_unit_0148[entry_delta >> 2u] : 0u;
    }
    switch (entry_id) {
    case 1u: goto L_08A54004;
    case 2u: goto L_08A5400C;
    case 3u: goto L_08A54014;
    case 4u: goto L_08A54018;
    case 5u: goto L_08A54024;
    case 6u: goto L_08A5402C;
    case 7u: goto L_08A54038;
    case 8u: goto L_08A54048;
    case 9u: goto L_08A5405C;
    case 10u: goto L_08A54064;
    case 11u: goto L_08A54088;
    case 12u: goto L_08A54098;
    case 13u: goto L_08A540C8;
    case 14u: goto L_08A5410C;
    case 15u: goto L_08A54120;
    case 16u: goto L_08A54130;
    case 17u: goto L_08A54134;
    case 18u: goto L_08A54140;
    case 19u: goto L_08A54168;
    case 20u: goto L_08A54170;
    case 21u: goto L_08A54184;
    case 22u: goto L_08A5418C;
    case 23u: goto L_08A541A0;
    case 24u: goto L_08A541E8;
    case 25u: goto L_08A54240;
    case 26u: goto L_08A54248;
    case 27u: goto L_08A54250;
    case 28u: goto L_08A54280;
    case 29u: goto L_08A54288;
    case 30u: goto L_08A5428C;
    case 31u: goto L_08A5429C;
    case 32u: goto L_08A542A0;
    case 33u: goto L_08A542B0;
    case 34u: goto L_08A542B4;
    case 35u: goto L_08A542E8;
    case 36u: goto L_08A54338;
    case 37u: goto L_08A5434C;
    case 38u: goto L_08A54354;
    case 39u: goto L_08A54360;
    case 40u: goto L_08A54364;
    case 41u: goto L_08A5436C;
    case 42u: goto L_08A54378;
    case 43u: goto L_08A54380;
    case 44u: goto L_08A54394;
    case 45u: goto L_08A5439C;
    case 46u: goto L_08A543A4;
    case 47u: goto L_08A543A8;
    case 48u: goto L_08A543C4;
    case 49u: goto L_08A543D0;
    case 50u: goto L_08A543E0;
    case 51u: goto L_08A543EC;
    case 52u: goto L_08A543F8;
    case 53u: goto L_08A54400;
    case 54u: goto L_08A54414;
    case 55u: goto L_08A54428;
    case 56u: goto L_08A54438;
    case 57u: goto L_08A54444;
    case 58u: goto L_08A5444C;
    case 59u: goto L_08A54458;
    case 60u: goto L_08A54460;
    case 61u: goto L_08A5446C;
    case 62u: goto L_08A544A8;
    case 63u: goto L_08A544C4;
    case 64u: goto L_08A544D0;
    case 65u: goto L_08A544DC;
    case 66u: goto L_08A544F8;
    case 67u: goto L_08A54504;
    case 68u: goto L_08A54510;
    case 69u: goto L_08A5452C;
    case 70u: goto L_08A54530;
    case 71u: goto L_08A54548;
    case 72u: goto L_08A54558;
    case 73u: goto L_08A54564;
    case 74u: goto L_08A5456C;
    case 75u: goto L_08A54574;
    case 76u: goto L_08A5457C;
    case 77u: goto L_08A5458C;
    case 78u: goto L_08A545A0;
    case 79u: goto L_08A545A8;
    case 80u: goto L_08A545BC;
    case 81u: goto L_08A545C4;
    case 82u: goto L_08A545D0;
    case 83u: goto L_08A545D8;
    case 84u: goto L_08A545E4;
    case 85u: goto L_08A545EC;
    case 86u: goto L_08A545F8;
    case 87u: goto L_08A54600;
    case 88u: goto L_08A5460C;
    case 89u: goto L_08A54634;
    case 90u: goto L_08A54648;
    case 91u: goto L_08A54650;
    case 92u: goto L_08A5465C;
    case 93u: goto L_08A54664;
    case 94u: goto L_08A54670;
    case 95u: goto L_08A54678;
    case 96u: goto L_08A54684;
    case 97u: goto L_08A5468C;
    case 98u: goto L_08A54698;
    case 99u: goto L_08A546A4;
    case 100u: goto L_08A546B8;
    case 101u: goto L_08A546C0;
    case 102u: goto L_08A546C8;
    case 103u: goto L_08A546CC;
    case 104u: goto L_08A546D4;
    case 105u: goto L_08A546E0;
    case 106u: goto L_08A546EC;
    case 107u: goto L_08A546F4;
    case 108u: goto L_08A54700;
    case 109u: goto L_08A54708;
    case 110u: goto L_08A54714;
    case 111u: goto L_08A5471C;
    case 112u: goto L_08A54728;
    case 113u: goto L_08A54744;
    case 114u: goto L_08A54754;
    case 115u: goto L_08A54760;
    case 116u: goto L_08A54768;
    case 117u: goto L_08A54774;
    case 118u: goto L_08A54780;
    case 119u: goto L_08A5479C;
    case 120u: goto L_08A547A8;
    case 121u: goto L_08A547B4;
    case 122u: goto L_08A547D0;
    case 123u: goto L_08A547D4;
    case 124u: goto L_08A547EC;
    case 125u: goto L_08A547FC;
    case 126u: goto L_08A54808;
    case 127u: goto L_08A54810;
    case 128u: goto L_08A5481C;
    case 129u: goto L_08A54824;
    case 130u: goto L_08A5482C;
    case 131u: goto L_08A54838;
    case 132u: goto L_08A54840;
    case 133u: goto L_08A5484C;
    case 134u: goto L_08A54854;
    case 135u: goto L_08A54860;
    case 136u: goto L_08A5486C;
    case 137u: goto L_08A54880;
    case 138u: goto L_08A54890;
    case 139u: goto L_08A548A4;
    case 140u: goto L_08A548C0;
    case 141u: goto L_08A548DC;
    case 142u: goto L_08A548E8;
    case 143u: goto L_08A548FC;
    case 144u: goto L_08A54908;
    case 145u: goto L_08A5490C;
    case 146u: goto L_08A54914;
    case 147u: goto L_08A54924;
    case 148u: goto L_08A54930;
    case 149u: goto L_08A54944;
    case 150u: goto L_08A54950;
    case 151u: goto L_08A54954;
    case 152u: goto L_08A54960;
    case 153u: goto L_08A54970;
    case 154u: goto L_08A54980;
    case 155u: goto L_08A5498C;
    case 156u: goto L_08A54998;
    case 157u: goto L_08A549A4;
    case 158u: goto L_08A549AC;
    case 159u: goto L_08A549C8;
    case 160u: goto L_08A549D0;
    case 161u: goto L_08A549D8;
    case 162u: goto L_08A549F4;
    case 163u: goto L_08A549FC;
    case 164u: goto L_08A54A04;
    case 165u: goto L_08A54A20;
    case 166u: goto L_08A54A28;
    case 167u: goto L_08A54A30;
    case 168u: goto L_08A54A38;
    case 169u: goto L_08A54A54;
    case 170u: goto L_08A54A5C;
    case 171u: goto L_08A54A64;
    case 172u: goto L_08A54A80;
    case 173u: goto L_08A54A88;
    case 174u: goto L_08A54A90;
    case 175u: goto L_08A54AAC;
    case 176u: goto L_08A54AB4;
    case 177u: goto L_08A54AFC;
    case 178u: goto L_08A54B10;
    case 179u: goto L_08A54B24;
    case 180u: goto L_08A54B2C;
    case 181u: goto L_08A54B40;
    case 182u: goto L_08A54B60;
    case 183u: goto L_08A54B70;
    case 184u: goto L_08A54B7C;
    case 185u: goto L_08A54B88;
    case 186u: goto L_08A54B8C;
    case 187u: goto L_08A54B90;
    case 188u: goto L_08A54BA0;
    case 189u: goto L_08A54BA8;
    case 190u: goto L_08A54BC4;
    case 191u: goto L_08A54BCC;
    case 192u: goto L_08A54BF0;
    case 193u: goto L_08A54BF8;
    case 194u: goto L_08A54C00;
    case 195u: goto L_08A54C24;
    case 196u: goto L_08A54C30;
    case 197u: goto L_08A54C38;
    case 198u: goto L_08A54C44;
    case 199u: goto L_08A54C4C;
    case 200u: goto L_08A54C50;
    case 201u: goto L_08A54C84;
    case 202u: goto L_08A54C90;
    case 203u: goto L_08A54CB8;
    case 204u: goto L_08A54CC4;
    case 205u: goto L_08A54CC8;
    case 206u: goto L_08A54CD0;
    case 207u: goto L_08A54CDC;
    case 208u: goto L_08A54CEC;
    case 209u: goto L_08A54CFC;
    case 210u: goto L_08A54D08;
    case 211u: goto L_08A54D18;
    case 212u: goto L_08A54D1C;
    case 213u: goto L_08A54D40;
    case 214u: goto L_08A54D50;
    case 215u: goto L_08A54D70;
    case 216u: goto L_08A54D78;
    case 217u: goto L_08A54D7C;
    case 218u: goto L_08A54D98;
    case 219u: goto L_08A54DC4;
    case 220u: goto L_08A54DE0;
    case 221u: goto L_08A54DF0;
    case 222u: goto L_08A54E00;
    case 223u: goto L_08A54E0C;
    case 224u: goto L_08A54E1C;
    case 225u: goto L_08A54E2C;
    case 226u: goto L_08A54E58;
    case 227u: goto L_08A54E7C;
    case 228u: goto L_08A54E8C;
    case 229u: goto L_08A54EAC;
    case 230u: goto L_08A54EB4;
    case 231u: goto L_08A54EB8;
    case 232u: goto L_08A54ED4;
    case 233u: goto L_08A54F10;
    case 234u: goto L_08A54F24;
    case 235u: goto L_08A54F30;
    case 236u: goto L_08A54F40;
    case 237u: goto L_08A54F4C;
    case 238u: goto L_08A54F9C;
    case 239u: goto L_08A54FC4;
    case 240u: goto L_08A54FCC;
    case 241u: goto L_08A54FE0;
    case 242u: goto L_08A54FF4;
    case 243u: goto L_08A55004;
    case 244u: goto L_08A55018;
    case 245u: goto L_08A55024;
    case 246u: goto L_08A55034;
    case 247u: goto L_08A55040;
    case 248u: goto L_08A55048;
    case 249u: goto L_08A55058;
    case 250u: goto L_08A55060;
    case 251u: goto L_08A55074;
    case 252u: goto L_08A5507C;
    case 253u: goto L_08A5508C;
    case 254u: goto L_08A550A0;
    case 255u: goto L_08A550B0;
    case 256u: goto L_08A550B8;
    case 257u: goto L_08A550C0;
    case 258u: goto L_08A550D4;
    case 259u: goto L_08A550E0;
    case 260u: goto L_08A550F0;
    case 261u: goto L_08A550FC;
    case 262u: goto L_08A55104;
    case 263u: goto L_08A55114;
    case 264u: goto L_08A55118;
    case 265u: goto L_08A55124;
    case 266u: goto L_08A5512C;
    case 267u: goto L_08A5513C;
    case 268u: goto L_08A55140;
    case 269u: goto L_08A5514C;
    case 270u: goto L_08A55154;
    case 271u: goto L_08A55160;
    case 272u: goto L_08A55168;
    case 273u: goto L_08A55174;
    case 274u: goto L_08A55184;
    case 275u: goto L_08A55194;
    case 276u: goto L_08A551BC;
    case 277u: goto L_08A551CC;
    case 278u: goto L_08A551E0;
    case 279u: goto L_08A551EC;
    case 280u: goto L_08A551F4;
    case 281u: goto L_08A551F8;
    case 282u: goto L_08A55228;
    case 283u: goto L_08A55278;
    case 284u: goto L_08A55284;
    case 285u: goto L_08A55298;
    case 286u: goto L_08A5529C;
    case 287u: goto L_08A552B8;
    case 288u: goto L_08A552C4;
    case 289u: goto L_08A552D8;
    case 290u: goto L_08A552E0;
    case 291u: goto L_08A552EC;
    case 292u: goto L_08A552FC;
    case 293u: goto L_08A55310;
    case 294u: goto L_08A55334;
    case 295u: goto L_08A55340;
    case 296u: goto L_08A5534C;
    case 297u: goto L_08A55350;
    case 298u: goto L_08A5535C;
    case 299u: goto L_08A5538C;
    case 300u: goto L_08A55394;
    case 301u: goto L_08A553B0;
    case 302u: goto L_08A553B8;
    case 303u: goto L_08A553D0;
    case 304u: goto L_08A553EC;
    case 305u: goto L_08A55420;
    case 306u: goto L_08A55434;
    case 307u: goto L_08A55444;
    case 308u: goto L_08A55454;
    case 309u: goto L_08A55458;
    case 310u: goto L_08A55464;
    case 311u: goto L_08A55498;
    case 312u: goto L_08A554A4;
    case 313u: goto L_08A554C4;
    case 314u: goto L_08A554CC;
    case 315u: goto L_08A554E8;
    case 316u: goto L_08A55500;
    case 317u: goto L_08A5552C;
    case 318u: goto L_08A55550;
    case 319u: goto L_08A55554;
    case 320u: goto L_08A55560;
    case 321u: goto L_08A5557C;
    case 322u: goto L_08A555B4;
    case 323u: goto L_08A555E8;
    case 324u: goto L_08A55600;
    case 325u: goto L_08A55620;
    case 326u: goto L_08A55638;
    case 327u: goto L_08A5563C;
    case 328u: goto L_08A55648;
    case 329u: goto L_08A5566C;
    case 330u: goto L_08A5567C;
    case 331u: goto L_08A5568C;
    case 332u: goto L_08A556B8;
    case 333u: goto L_08A556DC;
    case 334u: goto L_08A556E0;
    case 335u: goto L_08A556EC;
    case 336u: goto L_08A55708;
    case 337u: goto L_08A55720;
    case 338u: goto L_08A55730;
    case 339u: goto L_08A55738;
    case 340u: goto L_08A55744;
    case 341u: goto L_08A55748;
    case 342u: goto L_08A55750;
    case 343u: goto L_08A55764;
    case 344u: goto L_08A55780;
    case 345u: goto L_08A5578C;
    case 346u: goto L_08A55794;
    case 347u: goto L_08A55798;
    case 348u: goto L_08A557A4;
    case 349u: goto L_08A557B8;
    case 350u: goto L_08A557C0;
    case 351u: goto L_08A557CC;
    case 352u: goto L_08A557E4;
    case 353u: goto L_08A557F0;
    case 354u: goto L_08A55804;
    case 355u: goto L_08A55838;
    case 356u: goto L_08A5584C;
    case 357u: goto L_08A55858;
    case 358u: goto L_08A5586C;
    case 359u: goto L_08A55878;
    case 360u: goto L_08A5587C;
    case 361u: goto L_08A55890;
    case 362u: goto L_08A5589C;
    case 363u: goto L_08A558A0;
    case 364u: goto L_08A558A8;
    case 365u: goto L_08A558C4;
    case 366u: goto L_08A558D0;
    case 367u: goto L_08A558E0;
    case 368u: goto L_08A558E4;
    case 369u: goto L_08A558F0;
    case 370u: goto L_08A5590C;
    case 371u: goto L_08A55910;
    case 372u: goto L_08A5591C;
    case 373u: goto L_08A55938;
    case 374u: goto L_08A55954;
    case 375u: goto L_08A5595C;
    case 376u: goto L_08A5596C;
    case 377u: goto L_08A55974;
    case 378u: goto L_08A55988;
    case 379u: goto L_08A55994;
    case 380u: goto L_08A559AC;
    case 381u: goto L_08A559B4;
    case 382u: goto L_08A559C0;
    case 383u: goto L_08A559D0;
    case 384u: goto L_08A559D8;
    case 385u: goto L_08A55A10;
    case 386u: goto L_08A55A1C;
    case 387u: goto L_08A55A58;
    case 388u: goto L_08A55A5C;
    case 389u: goto L_08A55A80;
    case 390u: goto L_08A55AA0;
    case 391u: goto L_08A55AC4;
    case 392u: goto L_08A55ADC;
    case 393u: goto L_08A55AF0;
    case 394u: goto L_08A55B04;
    case 395u: goto L_08A55B24;
    case 396u: goto L_08A55B38;
    case 397u: goto L_08A55B50;
    case 398u: goto L_08A55B84;
    case 399u: goto L_08A55B90;
    case 400u: goto L_08A55B9C;
    case 401u: goto L_08A55BA8;
    case 402u: goto L_08A55BB4;
    case 403u: goto L_08A55BC0;
    case 404u: goto L_08A55BD4;
    case 405u: goto L_08A55BE0;
    case 406u: goto L_08A55BE8;
    case 407u: goto L_08A55C08;
    case 408u: goto L_08A55C24;
    case 409u: goto L_08A55C54;
    case 410u: goto L_08A55C64;
    case 411u: goto L_08A55C70;
    case 412u: goto L_08A55C84;
    case 413u: goto L_08A55C90;
    case 414u: goto L_08A55C98;
    case 415u: goto L_08A55CA4;
    case 416u: goto L_08A55CB0;
    case 417u: goto L_08A55CC4;
    case 418u: goto L_08A55CD0;
    case 419u: goto L_08A55CD8;
    case 420u: goto L_08A55CE4;
    case 421u: goto L_08A55CF0;
    case 422u: goto L_08A55D04;
    case 423u: goto L_08A55D10;
    case 424u: goto L_08A55D18;
    case 425u: goto L_08A55D24;
    case 426u: goto L_08A55D34;
    case 427u: goto L_08A55D40;
    case 428u: goto L_08A55D50;
    case 429u: goto L_08A55D5C;
    case 430u: goto L_08A55D6C;
    case 431u: goto L_08A55D78;
    case 432u: goto L_08A55D88;
    case 433u: goto L_08A55D94;
    case 434u: goto L_08A55DA4;
    case 435u: goto L_08A55DB0;
    case 436u: goto L_08A55DC0;
    case 437u: goto L_08A55DCC;
    case 438u: goto L_08A55DDC;
    case 439u: goto L_08A55DE4;
    case 440u: goto L_08A55DF0;
    case 441u: goto L_08A55E08;
    case 442u: goto L_08A55E18;
    case 443u: goto L_08A55E20;
    case 444u: goto L_08A55E2C;
    case 445u: goto L_08A55E44;
    case 446u: goto L_08A55E54;
    case 447u: goto L_08A55E5C;
    case 448u: goto L_08A55E68;
    case 449u: goto L_08A55E78;
    case 450u: goto L_08A55E7C;
    case 451u: goto L_08A55E88;
    case 452u: goto L_08A55E94;
    case 453u: goto L_08A55EC8;
    case 454u: goto L_08A55ED4;
    case 455u: goto L_08A55ED8;
    case 456u: goto L_08A55EE4;
    case 457u: goto L_08A55F08;
    case 458u: goto L_08A55F60;
    case 459u: goto L_08A55F68;
    case 460u: goto L_08A55F88;
    case 461u: goto L_08A55FA0;
    case 462u: goto L_08A55FB4;
    case 463u: goto L_08A55FC0;
    case 464u: goto L_08A55FC4;
    case 465u: goto L_08A55FD0;
    case 466u: goto L_08A55FDC;
    case 467u: goto L_08A55FE0;
    case 468u: goto L_08A55FEC;
    case 469u: goto L_08A55FFC;
    case 470u: goto L_08A5601C;
    case 471u: goto L_08A56038;
    case 472u: goto L_08A56044;
    case 473u: goto L_08A56048;
    case 474u: goto L_08A56058;
    case 475u: goto L_08A56064;
    case 476u: goto L_08A56074;
    case 477u: goto L_08A56094;
    case 478u: goto L_08A560B0;
    case 479u: goto L_08A560BC;
    case 480u: goto L_08A560C0;
    case 481u: goto L_08A560D0;
    case 482u: goto L_08A560DC;
    case 483u: goto L_08A560E8;
    case 484u: goto L_08A560F4;
    case 485u: goto L_08A56100;
    case 486u: goto L_08A56134;
    case 487u: goto L_08A56160;
    case 488u: goto L_08A5619C;
    case 489u: goto L_08A561B4;
    case 490u: goto L_08A561C4;
    case 491u: goto L_08A561F4;
    case 492u: goto L_08A56234;
    case 493u: goto L_08A56244;
    case 494u: goto L_08A56258;
    case 495u: goto L_08A56264;
    case 496u: goto L_08A56278;
    case 497u: goto L_08A56284;
    case 498u: goto L_08A56290;
    case 499u: goto L_08A562B8;
    case 500u: goto L_08A562D8;
    case 501u: goto L_08A562F0;
    case 502u: goto L_08A5630C;
    case 503u: goto L_08A56318;
    case 504u: goto L_08A56328;
    case 505u: goto L_08A5633C;
    case 506u: goto L_08A56350;
    case 507u: goto L_08A56370;
    case 508u: goto L_08A56384;
    case 509u: goto L_08A563DC;
    case 510u: goto L_08A56404;
    case 511u: goto L_08A56424;
    case 512u: goto L_08A56438;
    case 513u: goto L_08A56480;
    case 514u: goto L_08A56494;
    case 515u: goto L_08A564B4;
    case 516u: goto L_08A564BC;
    case 517u: goto L_08A564C8;
    case 518u: goto L_08A564D8;
    case 519u: goto L_08A564FC;
    case 520u: goto L_08A5650C;
    case 521u: goto L_08A56518;
    case 522u: goto L_08A56534;
    case 523u: goto L_08A56540;
    case 524u: goto L_08A56550;
    case 525u: goto L_08A56564;
    case 526u: goto L_08A56578;
    case 527u: goto L_08A56598;
    case 528u: goto L_08A565AC;
    case 529u: goto L_08A56604;
    case 530u: goto L_08A5662C;
    case 531u: goto L_08A5664C;
    case 532u: goto L_08A56660;
    case 533u: goto L_08A566A8;
    case 534u: goto L_08A566BC;
    case 535u: goto L_08A566DC;
    case 536u: goto L_08A566E4;
    case 537u: goto L_08A566F0;
    case 538u: goto L_08A56700;
    case 539u: goto L_08A56724;
    case 540u: goto L_08A56734;
    case 541u: goto L_08A56750;
    case 542u: goto L_08A56758;
    case 543u: goto L_08A56764;
    case 544u: goto L_08A56774;
    case 545u: goto L_08A56778;
    case 546u: goto L_08A56788;
    case 547u: goto L_08A56794;
    case 548u: goto L_08A567A0;
    case 549u: goto L_08A567D0;
    case 550u: goto L_08A56838;
    case 551u: goto L_08A5683C;
    case 552u: goto L_08A5684C;
    case 553u: goto L_08A56858;
    case 554u: goto L_08A56874;
    case 555u: goto L_08A56890;
    case 556u: goto L_08A5689C;
    case 557u: goto L_08A568B8;
    case 558u: goto L_08A568D4;
    case 559u: goto L_08A56918;
    case 560u: goto L_08A56934;
    case 561u: goto L_08A56940;
    case 562u: goto L_08A5694C;
    case 563u: goto L_08A56958;
    case 564u: goto L_08A5696C;
    case 565u: goto L_08A56994;
    case 566u: goto L_08A569A4;
    case 567u: goto L_08A569B0;
    case 568u: goto L_08A569BC;
    case 569u: goto L_08A569D0;
    case 570u: goto L_08A569DC;
    case 571u: goto L_08A569E4;
    case 572u: goto L_08A56A08;
    case 573u: goto L_08A56A2C;
    case 574u: goto L_08A56A48;
    case 575u: goto L_08A56A5C;
    case 576u: goto L_08A56A68;
    case 577u: goto L_08A56A78;
    case 578u: goto L_08A56A98;
    case 579u: goto L_08A56A9C;
    case 580u: goto L_08A56AB4;
    case 581u: goto L_08A56AC8;
    case 582u: goto L_08A56AD4;
    case 583u: goto L_08A56ADC;
    case 584u: goto L_08A56AF0;
    case 585u: goto L_08A56AFC;
    case 586u: goto L_08A56B10;
    case 587u: goto L_08A56B1C;
    case 588u: goto L_08A56B24;
    case 589u: goto L_08A56B30;
    case 590u: goto L_08A56B3C;
    case 591u: goto L_08A56B50;
    case 592u: goto L_08A56B5C;
    case 593u: goto L_08A56B64;
    case 594u: goto L_08A56B70;
    case 595u: goto L_08A56B7C;
    case 596u: goto L_08A56B90;
    case 597u: goto L_08A56B9C;
    case 598u: goto L_08A56BA4;
    case 599u: goto L_08A56BB0;
    case 600u: goto L_08A56BC0;
    case 601u: goto L_08A56BCC;
    case 602u: goto L_08A56BDC;
    case 603u: goto L_08A56BE8;
    case 604u: goto L_08A56BF8;
    case 605u: goto L_08A56C04;
    case 606u: goto L_08A56C14;
    case 607u: goto L_08A56C20;
    case 608u: goto L_08A56C30;
    case 609u: goto L_08A56C3C;
    case 610u: goto L_08A56C4C;
    case 611u: goto L_08A56C58;
    case 612u: goto L_08A56C68;
    case 613u: goto L_08A56C70;
    case 614u: goto L_08A56C7C;
    case 615u: goto L_08A56C94;
    case 616u: goto L_08A56CA4;
    case 617u: goto L_08A56CAC;
    case 618u: goto L_08A56CB8;
    case 619u: goto L_08A56CD0;
    case 620u: goto L_08A56CE0;
    case 621u: goto L_08A56CE8;
    case 622u: goto L_08A56CF4;
    case 623u: goto L_08A56D04;
    case 624u: goto L_08A56D08;
    case 625u: goto L_08A56D14;
    case 626u: goto L_08A56D1C;
    case 627u: goto L_08A56D34;
    case 628u: goto L_08A56D44;
    case 629u: goto L_08A56D50;
    case 630u: goto L_08A56D5C;
    case 631u: goto L_08A56D70;
    case 632u: goto L_08A56D84;
    case 633u: goto L_08A56DA8;
    case 634u: goto L_08A56DBC;
    case 635u: goto L_08A56DC8;
    case 636u: goto L_08A56DD4;
    case 637u: goto L_08A56DE0;
    case 638u: goto L_08A56DF8;
    case 639u: goto L_08A56E14;
    case 640u: goto L_08A56E18;
    case 641u: goto L_08A56E2C;
    case 642u: goto L_08A56E44;
    case 643u: goto L_08A56E50;
    case 644u: goto L_08A56E58;
    case 645u: goto L_08A56E78;
    case 646u: goto L_08A56E94;
    case 647u: goto L_08A56EA4;
    case 648u: goto L_08A56ED4;
    case 649u: goto L_08A56EDC;
    case 650u: goto L_08A56EEC;
    case 651u: goto L_08A56F18;
    case 652u: goto L_08A56F2C;
    case 653u: goto L_08A56F3C;
    case 654u: goto L_08A56F74;
    case 655u: goto L_08A56F7C;
    case 656u: goto L_08A56F88;
    case 657u: goto L_08A56F9C;
    case 658u: goto L_08A56FA8;
    case 659u: goto L_08A56FB0;
    case 660u: goto L_08A56FC0;
    case 661u: goto L_08A56FD0;
    case 662u: goto L_08A56FE8;
    case 663u: goto L_08A56FFC;
    case 664u: goto L_08A57008;
    case 665u: goto L_08A57038;
    case 666u: goto L_08A57048;
    case 667u: goto L_08A57054;
    case 668u: goto L_08A57064;
    case 669u: goto L_08A57070;
    case 670u: goto L_08A5707C;
    case 671u: goto L_08A57088;
    case 672u: goto L_08A570A0;
    case 673u: goto L_08A570A8;
    case 674u: goto L_08A570BC;
    case 675u: goto L_08A570C4;
    case 676u: goto L_08A570CC;
    case 677u: goto L_08A570D8;
    case 678u: goto L_08A570E4;
    case 679u: goto L_08A570F4;
    case 680u: goto L_08A57100;
    case 681u: goto L_08A57114;
    case 682u: goto L_08A57124;
    case 683u: goto L_08A5713C;
    case 684u: goto L_08A57144;
    case 685u: goto L_08A57154;
    case 686u: goto L_08A5716C;
    case 687u: goto L_08A57178;
    case 688u: goto L_08A57184;
    case 689u: goto L_08A571A4;
    case 690u: goto L_08A571B0;
    case 691u: goto L_08A571D0;
    case 692u: goto L_08A571F8;
    case 693u: goto L_08A571FC;
    case 694u: goto L_08A5720C;
    case 695u: goto L_08A57210;
    case 696u: goto L_08A57228;
    case 697u: goto L_08A57234;
    case 698u: goto L_08A57240;
    case 699u: goto L_08A57250;
    case 700u: goto L_08A5725C;
    case 701u: goto L_08A57268;
    case 702u: goto L_08A57294;
    case 703u: goto L_08A572A4;
    case 704u: goto L_08A572BC;
    case 705u: goto L_08A572C4;
    case 706u: goto L_08A572D4;
    case 707u: goto L_08A572EC;
    case 708u: goto L_08A572F8;
    case 709u: goto L_08A57304;
    case 710u: goto L_08A57324;
    case 711u: goto L_08A57330;
    case 712u: goto L_08A57350;
    case 713u: goto L_08A57378;
    case 714u: goto L_08A5737C;
    case 715u: goto L_08A5738C;
    case 716u: goto L_08A57390;
    case 717u: goto L_08A573A8;
    case 718u: goto L_08A573B8;
    case 719u: goto L_08A573E4;
    case 720u: goto L_08A573FC;
    case 721u: goto L_08A57410;
    case 722u: goto L_08A57424;
    case 723u: goto L_08A57468;
    case 724u: goto L_08A57494;
    case 725u: goto L_08A574AC;
    case 726u: goto L_08A574C0;
    case 727u: goto L_08A574D4;
    case 728u: goto L_08A574E4;
    case 729u: goto L_08A574E8;
    case 730u: goto L_08A574F4;
    case 731u: goto L_08A57510;
    case 732u: goto L_08A57538;
    case 733u: goto L_08A57544;
    case 734u: goto L_08A57584;
    case 735u: goto L_08A575A0;
    case 736u: goto L_08A575A4;
    case 737u: goto L_08A575B0;
    case 738u: goto L_08A575B4;
    case 739u: goto L_08A575C4;
    case 740u: goto L_08A575F0;
    case 741u: goto L_08A5760C;
    case 742u: goto L_08A57618;
    case 743u: goto L_08A57624;
    case 744u: goto L_08A57638;
    case 745u: goto L_08A57640;
    case 746u: goto L_08A5764C;
    case 747u: goto L_08A57670;
    case 748u: goto L_08A57680;
    case 749u: goto L_08A57688;
    case 750u: goto L_08A57694;
    case 751u: goto L_08A576A4;
    case 752u: goto L_08A576A8;
    case 753u: goto L_08A576B8;
    case 754u: goto L_08A576C0;
    case 755u: goto L_08A576CC;
    case 756u: goto L_08A57704;
    case 757u: goto L_08A5770C;
    case 758u: goto L_08A57718;
    case 759u: goto L_08A57728;
    case 760u: goto L_08A5772C;
    case 761u: goto L_08A5773C;
    case 762u: goto L_08A57744;
    case 763u: goto L_08A5774C;
    case 764u: goto L_08A57760;
    case 765u: goto L_08A5776C;
    case 766u: goto L_08A57778;
    case 767u: goto L_08A57788;
    case 768u: goto L_08A577A4;
    case 769u: goto L_08A577B0;
    case 770u: goto L_08A577C0;
    case 771u: goto L_08A577F0;
    case 772u: goto L_08A57800;
    case 773u: goto L_08A57818;
    case 774u: goto L_08A57828;
    case 775u: goto L_08A57838;
    case 776u: goto L_08A57850;
    case 777u: goto L_08A57860;
    case 778u: goto L_08A57878;
    case 779u: goto L_08A57880;
    case 780u: goto L_08A57890;
    case 781u: goto L_08A578C0;
    case 782u: goto L_08A578D0;
    case 783u: goto L_08A578E8;
    case 784u: goto L_08A578FC;
    case 785u: goto L_08A5790C;
    case 786u: goto L_08A57924;
    case 787u: goto L_08A5792C;
    case 788u: goto L_08A57934;
    case 789u: goto L_08A57948;
    case 790u: goto L_08A57958;
    case 791u: goto L_08A579A4;
    case 792u: goto L_08A579B0;
    case 793u: goto L_08A579BC;
    case 794u: goto L_08A579D0;
    case 795u: goto L_08A579D8;
    case 796u: goto L_08A579F4;
    case 797u: goto L_08A57A04;
    case 798u: goto L_08A57A14;
    case 799u: goto L_08A57A1C;
    case 800u: goto L_08A57A28;
    case 801u: goto L_08A57A3C;
    case 802u: goto L_08A57A50;
    case 803u: goto L_08A57A58;
    case 804u: goto L_08A57A64;
    case 805u: goto L_08A57A70;
    case 806u: goto L_08A57A8C;
    case 807u: goto L_08A57A98;
    case 808u: goto L_08A57AA4;
    case 809u: goto L_08A57AC8;
    case 810u: goto L_08A57AD4;
    case 811u: goto L_08A57AF8;
    case 812u: goto L_08A57B04;
    case 813u: goto L_08A57B24;
    case 814u: goto L_08A57B2C;
    case 815u: goto L_08A57B44;
    case 816u: goto L_08A57B54;
    case 817u: goto L_08A57BF8;
    case 818u: goto L_08A57C04;
    case 819u: goto L_08A57C44;
    case 820u: goto L_08A57C5C;
    case 821u: goto L_08A57C68;
    case 822u: goto L_08A57C70;
    case 823u: goto L_08A57C7C;
    case 824u: goto L_08A57C88;
    case 825u: goto L_08A57C8C;
    case 826u: goto L_08A57C9C;
    case 827u: goto L_08A57CC4;
    case 828u: goto L_08A57CE4;
    case 829u: goto L_08A57CEC;
    case 830u: goto L_08A57CF8;
    case 831u: goto L_08A57D10;
    case 832u: goto L_08A57D6C;
    case 833u: goto L_08A57D7C;
    case 834u: goto L_08A57D94;
    case 835u: goto L_08A57DA0;
    case 836u: goto L_08A57DB0;
    case 837u: goto L_08A57DC8;
    case 838u: goto L_08A57DE4;
    case 839u: goto L_08A57DF4;
    case 840u: goto L_08A57E08;
    case 841u: goto L_08A57E14;
    case 842u: goto L_08A57E3C;
    case 843u: goto L_08A57E58;
    case 844u: goto L_08A57E68;
    case 845u: goto L_08A57E78;
    case 846u: goto L_08A57E88;
    case 847u: goto L_08A57EB4;
    case 848u: goto L_08A57ED8;
    case 849u: goto L_08A57EF0;
    case 850u: goto L_08A57F00;
    case 851u: goto L_08A57F28;
    case 852u: goto L_08A57F30;
    case 853u: goto L_08A57F3C;
    case 854u: goto L_08A57F48;
    case 855u: goto L_08A57F54;
    case 856u: goto L_08A57F74;
    case 857u: goto L_08A57F94;
    case 858u: goto L_08A57FBC;
    case 859u: goto L_08A57FC4;
    case 860u: goto L_08A57FD0;
    case 861u: goto L_08A57FE0;
    case 862u: goto L_08A57FEC;
    default:
        if (local_transfers == 0u) rt.unsupported(ctx.pc, 0u, "invalid internal function entry");
        else ctx.pc = local_pc;
        return;
    }
    }
L_08A54004:
    { const bool branch_taken = ctx.gpr[2] == 0u;
    // nop
      if (branch_taken) {
          goto L_08A54014;
      }
      goto L_08A5400C;
    }
L_08A5400C:
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_08A542B4;
      }
      goto L_08A54014;
    }
L_08A54014:
    ctx.set_gpr(17, ctx.gpr[17] + static_cast<std::uint32_t>(1));
    goto L_08A54018;
L_08A54018:
    ctx.set_gpr(2, ctx.gpr[17] < ctx.gpr[23] ? 1u : 0u);
    { const bool branch_taken = ctx.gpr[2] != 0u;
    // nop
      if (branch_taken) {
          (void)rt.invoke_chained_direct<&recomp_unit_0147_entry, 147u, 886u, 0x08A53F88u>(ctx, &aot_mem); return;
      }
      goto L_08A54024;
    }
L_08A54024:
    { const bool branch_taken = ctx.gpr[18] != 0u;
    // nop
      if (branch_taken) {
          goto L_08A54038;
      }
      goto L_08A5402C;
    }
L_08A5402C:
    ctx.set_gpr(2, 0u + static_cast<std::uint32_t>(1));
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_08A542B4;
      }
      goto L_08A54038;
    }
L_08A54038:
    ctx.set_gpr(2, rt.memory().aot_load32(ctx.gpr[21] + static_cast<std::uint32_t>(44)));
    ctx.set_gpr(2, ctx.gpr[2] & 4u);
    { const bool branch_taken = ctx.gpr[2] == 0u;
    // nop
      if (branch_taken) {
          goto L_08A542B0;
      }
      goto L_08A54048;
    }
L_08A54048:
    ctx.set_gpr(4, ctx.gpr[20] + 0u);
    ctx.set_gpr(2, 2246u << 16u);
    ctx.set_gpr(5, rt.memory().aot_load32(ctx.gpr[2] + static_cast<std::uint32_t>(-24260)));
    ctx.set_gpr(31, 0x08A5405Cu);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0080_entry, 80u, 857u, 0x08947F8Cu>(ctx, &aot_mem) && ctx.pc == 0x08A5405Cu) goto L_08A5405C;
    return;
L_08A5405C:
    { const bool branch_taken = ctx.gpr[2] == 0u;
    // nop
      if (branch_taken) {
          goto L_08A542B0;
      }
      goto L_08A54064;
    }
L_08A54064:
    ctx.set_gpr(5, rt.memory().aot_load32(ctx.gpr[21] + static_cast<std::uint32_t>(32)));
    ctx.set_gpr(4, rt.memory().aot_load32(ctx.gpr[5] + static_cast<std::uint32_t>(8)));
    ctx.set_gpr(2, ctx.gpr[4] + static_cast<std::uint32_t>(-1));
    ctx.set_gpr(3, ctx.gpr[2] << 6u);
    ctx.set_gpr(2, rt.memory().aot_load32(ctx.gpr[5] + static_cast<std::uint32_t>(16)));
    ctx.set_gpr(19, ctx.gpr[2] + ctx.gpr[3]);
    ctx.set_gpr(1, static_cast<std::int32_t>(ctx.gpr[4]) < 2 ? 1u : 0u);
    { const bool branch_taken = ctx.gpr[1] != 0u;
    // nop
      if (branch_taken) {
          goto L_08A54098;
      }
      goto L_08A54088;
    }
L_08A54088:
    ctx.set_gpr(4, ctx.gpr[29] + static_cast<std::uint32_t>(160));
    ctx.set_gpr(5, ctx.gpr[19] + 0u);
    ctx.set_gpr(31, 0x08A54098u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0127_entry, 127u, 124u, 0x08A019A0u>(ctx, &aot_mem) && ctx.pc == 0x08A54098u) goto L_08A54098;
    return;
L_08A54098:
    ctx.set_gpr(2, rt.memory().aot_load32(ctx.gpr[20] + static_cast<std::uint32_t>(32)));
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(80), ctx.gpr[2]);
    ctx.set_gpr(2, rt.memory().aot_load32(ctx.gpr[21] + static_cast<std::uint32_t>(40)));
    ctx.set_gpr(30, rt.memory().aot_load32(ctx.gpr[2] + static_cast<std::uint32_t>(12)));
    ctx.set_gpr(2, rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(80)));
    ctx.set_gpr(2, rt.memory().aot_load32(ctx.gpr[2] + static_cast<std::uint32_t>(8)));
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(76), ctx.gpr[2]);
    ctx.set_gpr(2, rt.memory().aot_load32(ctx.gpr[30] + static_cast<std::uint32_t>(8)));
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(72), ctx.gpr[2]);
    ctx.set_gpr(18, 0u + 0u);
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_08A542A0;
      }
      goto L_08A540C8;
    }
L_08A540C8:
    ctx.set_gpr(2, ctx.gpr[18] << 2u);
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(68), ctx.gpr[2]);
    ctx.set_gpr(3, rt.memory().aot_load32(ctx.gpr[30] + static_cast<std::uint32_t>(16)));
    ctx.set_gpr(2, ctx.gpr[3] + ctx.gpr[2]);
    ctx.set_gpr(22, rt.memory().aot_load32(ctx.gpr[2] + static_cast<std::uint32_t>(0)));
    ctx.set_gpr(2, rt.memory().aot_load32(ctx.gpr[21] + static_cast<std::uint32_t>(40)));
    ctx.set_gpr(2, rt.memory().aot_load32(ctx.gpr[2] + static_cast<std::uint32_t>(16)));
    ctx.set_gpr(3, rt.memory().aot_load32(ctx.gpr[2] + static_cast<std::uint32_t>(16)));
    ctx.set_gpr(2, rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(68)));
    ctx.set_gpr(2, ctx.gpr[3] + ctx.gpr[2]);
    ctx.set_gpr(2, rt.memory().aot_load32(ctx.gpr[2] + static_cast<std::uint32_t>(0)));
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(84), ctx.gpr[2]);
    ctx.set_gpr(2, rt.memory().aot_load32(ctx.gpr[21] + static_cast<std::uint32_t>(32)));
    ctx.set_gpr(2, rt.memory().aot_load32(ctx.gpr[2] + static_cast<std::uint32_t>(8)));
    ctx.set_gpr(1, static_cast<std::int32_t>(ctx.gpr[2]) < 2 ? 1u : 0u);
    { const bool branch_taken = ctx.gpr[1] != 0u;
    // nop
      if (branch_taken) {
          goto L_08A54134;
      }
      goto L_08A5410C;
    }
L_08A5410C:
    ctx.set_gpr(4, rt.memory().aot_load32(ctx.gpr[21] + static_cast<std::uint32_t>(56)));
    ctx.set_gpr(5, ctx.gpr[22] + 0u);
    ctx.set_gpr(6, 0u + static_cast<std::uint32_t>(1));
    ctx.set_gpr(31, 0x08A54120u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0080_entry, 80u, 841u, 0x08947E44u>(ctx, &aot_mem) && ctx.pc == 0x08A54120u) goto L_08A54120;
    return;
L_08A54120:
    ctx.set_gpr(4, rt.memory().aot_load32(ctx.gpr[21] + static_cast<std::uint32_t>(56)));
    ctx.set_gpr(5, ctx.gpr[29] + static_cast<std::uint32_t>(160));
    ctx.set_gpr(31, 0x08A54130u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0125_entry, 125u, 780u, 0x089FBDF8u>(ctx, &aot_mem) && ctx.pc == 0x08A54130u) goto L_08A54130;
    return;
L_08A54130:
    ctx.set_gpr(22, rt.memory().aot_load32(ctx.gpr[21] + static_cast<std::uint32_t>(56)));
    goto L_08A54134;
L_08A54134:
    ctx.set_gpr(17, 0u + 0u);
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_08A5428C;
      }
      goto L_08A54140;
    }
L_08A54140:
    ctx.set_gpr(3, ctx.gpr[17] << 2u);
    ctx.set_gpr(2, rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(80)));
    ctx.set_gpr(2, rt.memory().aot_load32(ctx.gpr[2] + static_cast<std::uint32_t>(16)));
    ctx.set_gpr(2, ctx.gpr[2] + ctx.gpr[3]);
    ctx.set_gpr(23, rt.memory().aot_load32(ctx.gpr[2] + static_cast<std::uint32_t>(0)));
    ctx.set_gpr(4, ctx.gpr[23] + 0u);
    ctx.set_gpr(2, 2245u << 16u);
    ctx.set_gpr(5, rt.memory().aot_load32(ctx.gpr[2] + static_cast<std::uint32_t>(25092)));
    ctx.set_gpr(31, 0x08A54168u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0080_entry, 80u, 857u, 0x08947F8Cu>(ctx, &aot_mem) && ctx.pc == 0x08A54168u) goto L_08A54168;
    return;
L_08A54168:
    { const bool branch_taken = ctx.gpr[2] != 0u;
    // nop
      if (branch_taken) {
          goto L_08A5418C;
      }
      goto L_08A54170;
    }
L_08A54170:
    ctx.set_gpr(4, ctx.gpr[23] + 0u);
    ctx.set_gpr(2, 2245u << 16u);
    ctx.set_gpr(5, rt.memory().aot_load32(ctx.gpr[2] + static_cast<std::uint32_t>(25044)));
    ctx.set_gpr(31, 0x08A54184u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0080_entry, 80u, 857u, 0x08947F8Cu>(ctx, &aot_mem) && ctx.pc == 0x08A54184u) goto L_08A54184;
    return;
L_08A54184:
    { const bool branch_taken = ctx.gpr[2] == 0u;
    // nop
      if (branch_taken) {
          goto L_08A54288;
      }
      goto L_08A5418C;
    }
L_08A5418C:
    ctx.set_gpr(2, 0u + static_cast<std::uint32_t>(-1));
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(152), ctx.gpr[2]);
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(156), ctx.gpr[2]);
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_08A54250;
      }
      goto L_08A541A0;
    }
L_08A541A0:
    ctx.set_gpr(3, rt.memory().aot_load32(ctx.gpr[30] + static_cast<std::uint32_t>(16)));
    ctx.set_gpr(2, rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(68)));
    ctx.set_gpr(2, ctx.gpr[3] + ctx.gpr[2]);
    ctx.set_gpr(16, rt.memory().aot_load32(ctx.gpr[2] + static_cast<std::uint32_t>(0)));
    ctx.set_gpr(2, 0u + static_cast<std::uint32_t>(4));
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(88), ctx.gpr[2]);
    ctx.set_gpr(2, rt.memory().aot_load32(ctx.gpr[21] + static_cast<std::uint32_t>(36)));
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(96), ctx.gpr[2]);
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(148), ctx.gpr[17]);
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(100), ctx.gpr[19]);
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(104), ctx.gpr[16]);
    ctx.set_gpr(2, rt.memory().aot_load32(ctx.gpr[21] + static_cast<std::uint32_t>(40)));
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(92), ctx.gpr[2]);
    ctx.set_gpr(4, ctx.gpr[29] + static_cast<std::uint32_t>(112));
    ctx.set_gpr(5, ctx.gpr[29] + static_cast<std::uint32_t>(124));
    ctx.set_gpr(6, ctx.gpr[19] + 0u);
    ctx.set_gpr(31, 0x08A541E8u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0127_entry, 127u, 271u, 0x08A03244u>(ctx, &aot_mem) && ctx.pc == 0x08A541E8u) goto L_08A541E8;
    return;
L_08A541E8:
    ctx.fpr[1] = std::bit_cast<float>(rt.memory().aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(8)));
    ctx.fpr[0] = std::bit_cast<float>(rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(112)));
    ctx.fpr[4] = ctx.fpr[1] - ctx.fpr[0];
    ctx.fpr[1] = std::bit_cast<float>(rt.memory().aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(12)));
    ctx.fpr[0] = std::bit_cast<float>(rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(116)));
    ctx.fpr[3] = ctx.fpr[1] - ctx.fpr[0];
    ctx.fpr[1] = std::bit_cast<float>(rt.memory().aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(16)));
    ctx.fpr[0] = std::bit_cast<float>(rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(120)));
    ctx.fpr[2] = ctx.fpr[1] - ctx.fpr[0];
    { const float fs = ctx.fpr[4]; const float ft = ctx.fpr[4]; if ((std::isinf(fs) && ft == 0.0f) || (std::isinf(ft) && fs == 0.0f)) ctx.set_fpr_bits(1, 0x7FC00000u); else ctx.fpr[1] = fs * ft; }
    { const float fs = ctx.fpr[3]; const float ft = ctx.fpr[3]; if ((std::isinf(fs) && ft == 0.0f) || (std::isinf(ft) && fs == 0.0f)) ctx.set_fpr_bits(0, 0x7FC00000u); else ctx.fpr[0] = fs * ft; }
    ctx.fpr[1] = ctx.fpr[1] + ctx.fpr[0];
    { const float fs = ctx.fpr[2]; const float ft = ctx.fpr[2]; if ((std::isinf(fs) && ft == 0.0f) || (std::isinf(ft) && fs == 0.0f)) ctx.set_fpr_bits(0, 0x7FC00000u); else ctx.fpr[0] = fs * ft; }
    ctx.fpr[0] = ctx.fpr[0] + ctx.fpr[1];
    ctx.fpr[0] = std::sqrt(ctx.fpr[0]);
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(108), std::bit_cast<std::uint32_t>(ctx.fpr[0]));
    ctx.set_gpr(4, ctx.gpr[21] + 0u);
    ctx.set_gpr(5, ctx.gpr[20] + 0u);
    ctx.set_gpr(6, ctx.gpr[29] + static_cast<std::uint32_t>(88));
    ctx.set_gpr(2, rt.memory().aot_load32(ctx.gpr[21] + static_cast<std::uint32_t>(48)));
    jump_target = ctx.gpr[2];
    ctx.set_gpr(31, 0x08A54240u);
    // nop
    ctx.pc = jump_target;
    if (rt.invoke_chained_call(ctx, &aot_mem) && ctx.pc == 0x08A54240u) goto L_08A54240;
    return;
L_08A54240:
    { const bool branch_taken = ctx.gpr[2] == 0u;
    // nop
      if (branch_taken) {
          goto L_08A54250;
      }
      goto L_08A54248;
    }
L_08A54248:
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_08A542B4;
      }
      goto L_08A54250;
    }
L_08A54250:
    ctx.set_gpr(2, 0u + static_cast<std::uint32_t>(1));
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(0), ctx.gpr[2]);
    ctx.set_gpr(4, ctx.gpr[21] + 0u);
    ctx.set_gpr(5, ctx.gpr[23] + 0u);
    ctx.set_gpr(6, ctx.gpr[22] + 0u);
    ctx.set_gpr(7, ctx.gpr[29] + static_cast<std::uint32_t>(124));
    ctx.set_gpr(8, ctx.gpr[29] + static_cast<std::uint32_t>(136));
    ctx.set_gpr(9, ctx.gpr[29] + static_cast<std::uint32_t>(152));
    ctx.set_gpr(10, ctx.gpr[29] + static_cast<std::uint32_t>(156));
    ctx.set_gpr(11, rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(84)));
    ctx.set_gpr(31, 0x08A54280u);
    // nop
    goto L_08A542E8;
L_08A54280:
    { const bool branch_taken = ctx.gpr[2] != 0u;
    // nop
      if (branch_taken) {
          goto L_08A541A0;
      }
      goto L_08A54288;
    }
L_08A54288:
    ctx.set_gpr(17, ctx.gpr[17] + static_cast<std::uint32_t>(1));
    goto L_08A5428C;
L_08A5428C:
    ctx.set_gpr(2, rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(76)));
    ctx.set_gpr(2, ctx.gpr[17] < ctx.gpr[2] ? 1u : 0u);
    { const bool branch_taken = ctx.gpr[2] != 0u;
    // nop
      if (branch_taken) {
          goto L_08A54140;
      }
      goto L_08A5429C;
    }
L_08A5429C:
    ctx.set_gpr(18, ctx.gpr[18] + static_cast<std::uint32_t>(1));
    goto L_08A542A0;
L_08A542A0:
    ctx.set_gpr(2, rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(72)));
    ctx.set_gpr(2, ctx.gpr[18] < ctx.gpr[2] ? 1u : 0u);
    { const bool branch_taken = ctx.gpr[2] != 0u;
    // nop
      if (branch_taken) {
          goto L_08A540C8;
      }
      goto L_08A542B0;
    }
L_08A542B0:
    ctx.set_gpr(2, 0u + 0u);
    goto L_08A542B4;
L_08A542B4:
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
    ctx.set_gpr(29, ctx.gpr[29] + static_cast<std::uint32_t>(368));
    jump_target = ctx.gpr[31];
    // nop
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_08A542E8:
    ctx.set_gpr(29, ctx.gpr[29] + static_cast<std::uint32_t>(-144));
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
    ctx.set_gpr(20, ctx.gpr[5] + 0u);
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(88), ctx.gpr[6]);
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(84), ctx.gpr[7]);
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(80), ctx.gpr[8]);
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(76), ctx.gpr[9]);
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(72), ctx.gpr[10]);
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(68), ctx.gpr[11]);
    { const bool branch_taken = ctx.gpr[20] == 0u;
    // nop
      if (branch_taken) {
          goto L_08A54360;
      }
      goto L_08A54338;
    }
L_08A54338:
    ctx.set_gpr(4, ctx.gpr[20] + 0u);
    ctx.set_gpr(2, 2245u << 16u);
    ctx.set_gpr(5, rt.memory().aot_load32(ctx.gpr[2] + static_cast<std::uint32_t>(25084)));
    ctx.set_gpr(31, 0x08A5434Cu);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0080_entry, 80u, 857u, 0x08947F8Cu>(ctx, &aot_mem) && ctx.pc == 0x08A5434Cu) goto L_08A5434C;
    return;
L_08A5434C:
    { const bool branch_taken = ctx.gpr[2] == 0u;
    // nop
      if (branch_taken) {
          goto L_08A54360;
      }
      goto L_08A54354;
    }
L_08A54354:
    ctx.set_gpr(16, ctx.gpr[20] + 0u);
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_08A54364;
      }
      goto L_08A54360;
    }
L_08A54360:
    ctx.set_gpr(16, 0u + 0u);
    goto L_08A54364;
L_08A54364:
    { const bool branch_taken = ctx.gpr[16] == 0u;
    // nop
      if (branch_taken) {
          goto L_08A54378;
      }
      goto L_08A5436C;
    }
L_08A5436C:
    ctx.set_gpr(20, 0u + 0u);
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_08A543A8;
      }
      goto L_08A54378;
    }
L_08A54378:
    { const bool branch_taken = ctx.gpr[20] == 0u;
    // nop
      if (branch_taken) {
          goto L_08A543A4;
      }
      goto L_08A54380;
    }
L_08A54380:
    ctx.set_gpr(4, ctx.gpr[20] + 0u);
    ctx.set_gpr(2, 2245u << 16u);
    ctx.set_gpr(5, rt.memory().aot_load32(ctx.gpr[2] + static_cast<std::uint32_t>(25044)));
    ctx.set_gpr(31, 0x08A54394u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0080_entry, 80u, 857u, 0x08947F8Cu>(ctx, &aot_mem) && ctx.pc == 0x08A54394u) goto L_08A54394;
    return;
L_08A54394:
    { const bool branch_taken = ctx.gpr[2] == 0u;
    // nop
      if (branch_taken) {
          goto L_08A543A4;
      }
      goto L_08A5439C;
    }
L_08A5439C:
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_08A543A8;
      }
      goto L_08A543A4;
    }
L_08A543A4:
    ctx.set_gpr(20, 0u + 0u);
    goto L_08A543A8;
L_08A543A8:
    rt.memory().aot_store8(ctx.gpr[29] + static_cast<std::uint32_t>(64), static_cast<std::uint8_t>(0u));
    ctx.set_gpr(18, 0u + 0u);
    ctx.set_gpr(17, 0u + 0u);
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(140), 0u);
    ctx.set_gpr(3, 0u + 0u);
    { const bool branch_taken = ctx.gpr[3] == 0u;
    // nop
      if (branch_taken) {
          goto L_08A543D0;
      }
      goto L_08A543C4;
    }
L_08A543C4:
    ctx.set_gpr(2, rt.memory().aot_load32(ctx.gpr[3] + static_cast<std::uint32_t>(4)));
    ctx.set_gpr(2, ctx.gpr[2] + static_cast<std::uint32_t>(1));
    rt.memory().aot_store32(ctx.gpr[3] + static_cast<std::uint32_t>(4), ctx.gpr[2]);
    goto L_08A543D0;
L_08A543D0:
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(136), 0u);
    ctx.set_gpr(3, 0u + 0u);
    { const bool branch_taken = ctx.gpr[3] == 0u;
    // nop
      if (branch_taken) {
          goto L_08A543EC;
      }
      goto L_08A543E0;
    }
L_08A543E0:
    ctx.set_gpr(2, rt.memory().aot_load32(ctx.gpr[3] + static_cast<std::uint32_t>(4)));
    ctx.set_gpr(2, ctx.gpr[2] + static_cast<std::uint32_t>(1));
    rt.memory().aot_store32(ctx.gpr[3] + static_cast<std::uint32_t>(4), ctx.gpr[2]);
    goto L_08A543EC;
L_08A543EC:
    ctx.set_gpr(4, ctx.gpr[29] + static_cast<std::uint32_t>(108));
    ctx.set_gpr(31, 0x08A543F8u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0108_entry, 108u, 623u, 0x089B798Cu>(ctx, &aot_mem) && ctx.pc == 0x08A543F8u) goto L_08A543F8;
    return;
L_08A543F8:
    { const bool branch_taken = ctx.gpr[16] == 0u;
    // nop
      if (branch_taken) {
          goto L_08A54574;
      }
      goto L_08A54400;
    }
L_08A54400:
    ctx.set_gpr(4, rt.memory().aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(12)));
    ctx.set_gpr(25, rt.memory().aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(0)));
    ctx.set_gpr(25, rt.memory().aot_load32(ctx.gpr[25] + static_cast<std::uint32_t>(100)));
    jump_target = ctx.gpr[25];
    ctx.set_gpr(31, 0x08A54414u);
    // nop
    ctx.pc = jump_target;
    if (rt.invoke_chained_call(ctx, &aot_mem) && ctx.pc == 0x08A54414u) goto L_08A54414;
    return;
L_08A54414:
    ctx.set_gpr(3, rt.memory().aot_load32(ctx.gpr[2] + static_cast<std::uint32_t>(0)));
    ctx.set_gpr(2, ctx.gpr[3] & 3840u);
    ctx.set_gpr(2, (ctx.gpr[2] >> 8u) & 0x000000FFu);
    { const bool branch_taken = ctx.gpr[2] != 0u;
    // nop
      if (branch_taken) {
          goto L_08A54438;
      }
      goto L_08A54428;
    }
L_08A54428:
    ctx.set_gpr(2, ctx.gpr[3] & 240u);
    ctx.set_gpr(2, (ctx.gpr[2] >> 4u) & 0x000000FFu);
    { const bool branch_taken = ctx.gpr[2] == 0u;
    // nop
      if (branch_taken) {
          goto L_08A5446C;
      }
      goto L_08A54438;
    }
L_08A54438:
    ctx.set_gpr(4, rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(136)));
    { const bool branch_taken = ctx.gpr[4] == 0u;
    // nop
      if (branch_taken) {
          goto L_08A5444C;
      }
      goto L_08A54444;
    }
L_08A54444:
    ctx.set_gpr(31, 0x08A5444Cu);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0014_entry, 14u, 257u, 0x0883D454u>(ctx, &aot_mem) && ctx.pc == 0x08A5444Cu) goto L_08A5444C;
    return;
L_08A5444C:
    ctx.set_gpr(4, rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(140)));
    { const bool branch_taken = ctx.gpr[4] == 0u;
    // nop
      if (branch_taken) {
          goto L_08A54460;
      }
      goto L_08A54458;
    }
L_08A54458:
    ctx.set_gpr(31, 0x08A54460u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0014_entry, 14u, 257u, 0x0883D454u>(ctx, &aot_mem) && ctx.pc == 0x08A54460u) goto L_08A54460;
    return;
L_08A54460:
    ctx.set_gpr(2, 0u + 0u);
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_08A54C50;
      }
      goto L_08A5446C;
    }
L_08A5446C:
    ctx.set_gpr(19, rt.memory().aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(28)));
    ctx.set_gpr(2, rt.memory().aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(24)));
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(60), ctx.gpr[2]);
    ctx.set_gpr(22, rt.memory().aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(20)));
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(112), 0u);
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(108), 0u);
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(116), 0u);
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(120), 0u);
    ctx.set_gpr(4, rt.memory().aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(12)));
    ctx.set_gpr(5, ctx.gpr[29] + static_cast<std::uint32_t>(108));
    ctx.set_gpr(6, 0u + 0u);
    ctx.set_gpr(25, rt.memory().aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(0)));
    ctx.set_gpr(25, rt.memory().aot_load32(ctx.gpr[25] + static_cast<std::uint32_t>(104)));
    jump_target = ctx.gpr[25];
    ctx.set_gpr(31, 0x08A544A8u);
    // nop
    ctx.pc = jump_target;
    if (rt.invoke_chained_call(ctx, &aot_mem) && ctx.pc == 0x08A544A8u) goto L_08A544A8;
    return;
L_08A544A8:
    ctx.set_gpr(30, rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(124)));
    ctx.set_gpr(2, rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(128)));
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(56), ctx.gpr[2]);
    ctx.set_gpr(5, rt.memory().aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(16)));
    ctx.set_gpr(4, ctx.gpr[29] + static_cast<std::uint32_t>(140));
    ctx.set_gpr(31, 0x08A544C4u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0085_entry, 85u, 61u, 0x089584C4u>(ctx, &aot_mem) && ctx.pc == 0x08A544C4u) goto L_08A544C4;
    return;
L_08A544C4:
    ctx.set_gpr(4, rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(140)));
    { const bool branch_taken = ctx.gpr[4] == 0u;
    // nop
      if (branch_taken) {
          goto L_08A54530;
      }
      goto L_08A544D0;
    }
L_08A544D0:
    ctx.set_gpr(3, rt.memory().aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(20)));
    { const bool branch_taken = ctx.gpr[3] != 0u;
    // nop
      if (branch_taken) {
          goto L_08A54504;
      }
      goto L_08A544DC;
    }
L_08A544DC:
    ctx.set_gpr(5, 0u + 0u);
    ctx.set_gpr(6, 0u + 0u);
    ctx.set_gpr(7, 0u + static_cast<std::uint32_t>(-1));
    ctx.set_gpr(25, rt.memory().aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(0)));
    ctx.set_gpr(25, rt.memory().aot_load32(ctx.gpr[25] + static_cast<std::uint32_t>(104)));
    jump_target = ctx.gpr[25];
    ctx.set_gpr(31, 0x08A544F8u);
    // nop
    ctx.pc = jump_target;
    if (rt.invoke_chained_call(ctx, &aot_mem) && ctx.pc == 0x08A544F8u) goto L_08A544F8;
    return;
L_08A544F8:
    ctx.set_gpr(18, ctx.gpr[2] + 0u);
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_08A54530;
      }
      goto L_08A54504;
    }
L_08A54504:
    ctx.set_gpr(2, 0u + static_cast<std::uint32_t>(1));
    { const bool branch_taken = ctx.gpr[3] != ctx.gpr[2];
    // nop
      if (branch_taken) {
          goto L_08A54530;
      }
      goto L_08A54510;
    }
L_08A54510:
    ctx.set_gpr(5, 0u + 0u);
    ctx.set_gpr(6, 0u + 0u);
    ctx.set_gpr(7, 0u + static_cast<std::uint32_t>(-1));
    ctx.set_gpr(25, rt.memory().aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(0)));
    ctx.set_gpr(25, rt.memory().aot_load32(ctx.gpr[25] + static_cast<std::uint32_t>(108)));
    jump_target = ctx.gpr[25];
    ctx.set_gpr(31, 0x08A5452Cu);
    // nop
    ctx.pc = jump_target;
    if (rt.invoke_chained_call(ctx, &aot_mem) && ctx.pc == 0x08A5452Cu) goto L_08A5452C;
    return;
L_08A5452C:
    ctx.set_gpr(17, ctx.gpr[2] + 0u);
    goto L_08A54530;
L_08A54530:
    ctx.set_gpr(4, ctx.gpr[29] + static_cast<std::uint32_t>(100));
    ctx.set_gpr(5, ctx.gpr[16] + 0u);
    ctx.set_gpr(25, rt.memory().aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(0)));
    ctx.set_gpr(25, rt.memory().aot_load32(ctx.gpr[25] + static_cast<std::uint32_t>(180)));
    jump_target = ctx.gpr[25];
    ctx.set_gpr(31, 0x08A54548u);
    // nop
    ctx.pc = jump_target;
    if (rt.invoke_chained_call(ctx, &aot_mem) && ctx.pc == 0x08A54548u) goto L_08A54548;
    return;
L_08A54548:
    ctx.set_gpr(4, ctx.gpr[29] + static_cast<std::uint32_t>(136));
    ctx.set_gpr(5, rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(100)));
    ctx.set_gpr(31, 0x08A54558u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0085_entry, 85u, 61u, 0x089584C4u>(ctx, &aot_mem) && ctx.pc == 0x08A54558u) goto L_08A54558;
    return;
L_08A54558:
    ctx.set_gpr(4, rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(100)));
    { const bool branch_taken = ctx.gpr[4] == 0u;
    // nop
      if (branch_taken) {
          goto L_08A54860;
      }
      goto L_08A54564;
    }
L_08A54564:
    ctx.set_gpr(31, 0x08A5456Cu);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0014_entry, 14u, 257u, 0x0883D454u>(ctx, &aot_mem) && ctx.pc == 0x08A5456Cu) goto L_08A5456C;
    return;
L_08A5456C:
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_08A54860;
      }
      goto L_08A54574;
    }
L_08A54574:
    { const bool branch_taken = ctx.gpr[20] == 0u;
    // nop
      if (branch_taken) {
          goto L_08A5482C;
      }
      goto L_08A5457C;
    }
L_08A5457C:
    ctx.set_gpr(4, ctx.gpr[29] + static_cast<std::uint32_t>(104));
    ctx.set_gpr(5, ctx.gpr[20] + 0u);
    ctx.set_gpr(31, 0x08A5458Cu);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0123_entry, 123u, 314u, 0x089F26D8u>(ctx, &aot_mem) && ctx.pc == 0x08A5458Cu) goto L_08A5458C;
    return;
L_08A5458C:
    ctx.set_gpr(4, rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(104)));
    ctx.set_gpr(5, 0u + static_cast<std::uint32_t>(6));
    ctx.set_gpr(6, 0u + 0u);
    ctx.set_gpr(31, 0x08A545A0u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0109_entry, 109u, 250u, 0x089B96A0u>(ctx, &aot_mem) && ctx.pc == 0x08A545A0u) goto L_08A545A0;
    return;
L_08A545A0:
    { const bool branch_taken = ctx.gpr[2] != 0u;
    // nop
      if (branch_taken) {
          goto L_08A545C4;
      }
      goto L_08A545A8;
    }
L_08A545A8:
    ctx.set_gpr(4, rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(104)));
    ctx.set_gpr(5, 0u + static_cast<std::uint32_t>(5));
    ctx.set_gpr(6, 0u + 0u);
    ctx.set_gpr(31, 0x08A545BCu);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0109_entry, 109u, 250u, 0x089B96A0u>(ctx, &aot_mem) && ctx.pc == 0x08A545BCu) goto L_08A545BC;
    return;
L_08A545BC:
    { const bool branch_taken = ctx.gpr[2] == 0u;
    // nop
      if (branch_taken) {
          goto L_08A5460C;
      }
      goto L_08A545C4;
    }
L_08A545C4:
    ctx.set_gpr(4, rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(104)));
    { const bool branch_taken = ctx.gpr[4] == 0u;
    // nop
      if (branch_taken) {
          goto L_08A545D8;
      }
      goto L_08A545D0;
    }
L_08A545D0:
    ctx.set_gpr(31, 0x08A545D8u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0014_entry, 14u, 257u, 0x0883D454u>(ctx, &aot_mem) && ctx.pc == 0x08A545D8u) goto L_08A545D8;
    return;
L_08A545D8:
    ctx.set_gpr(4, rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(136)));
    { const bool branch_taken = ctx.gpr[4] == 0u;
    // nop
      if (branch_taken) {
          goto L_08A545EC;
      }
      goto L_08A545E4;
    }
L_08A545E4:
    ctx.set_gpr(31, 0x08A545ECu);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0014_entry, 14u, 257u, 0x0883D454u>(ctx, &aot_mem) && ctx.pc == 0x08A545ECu) goto L_08A545EC;
    return;
L_08A545EC:
    ctx.set_gpr(4, rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(140)));
    { const bool branch_taken = ctx.gpr[4] == 0u;
    // nop
      if (branch_taken) {
          goto L_08A54600;
      }
      goto L_08A545F8;
    }
L_08A545F8:
    ctx.set_gpr(31, 0x08A54600u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0014_entry, 14u, 257u, 0x0883D454u>(ctx, &aot_mem) && ctx.pc == 0x08A54600u) goto L_08A54600;
    return;
L_08A54600:
    ctx.set_gpr(2, 0u + 0u);
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_08A54C50;
      }
      goto L_08A5460C;
    }
L_08A5460C:
    ctx.set_gpr(19, rt.memory().aot_load32(ctx.gpr[20] + static_cast<std::uint32_t>(32)));
    ctx.set_gpr(2, rt.memory().aot_load32(ctx.gpr[20] + static_cast<std::uint32_t>(28)));
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(60), ctx.gpr[2]);
    ctx.set_gpr(22, rt.memory().aot_load32(ctx.gpr[20] + static_cast<std::uint32_t>(24)));
    ctx.set_gpr(4, rt.memory().aot_load32(ctx.gpr[20] + static_cast<std::uint32_t>(12)));
    ctx.set_gpr(5, 0u + 0u);
    ctx.set_gpr(25, rt.memory().aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(0)));
    ctx.set_gpr(25, rt.memory().aot_load32(ctx.gpr[25] + static_cast<std::uint32_t>(100)));
    jump_target = ctx.gpr[25];
    ctx.set_gpr(31, 0x08A54634u);
    // nop
    ctx.pc = jump_target;
    if (rt.invoke_chained_call(ctx, &aot_mem) && ctx.pc == 0x08A54634u) goto L_08A54634;
    return;
L_08A54634:
    ctx.set_gpr(4, rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(104)));
    ctx.set_gpr(5, 0u + static_cast<std::uint32_t>(1));
    ctx.set_gpr(6, 0u + 0u);
    ctx.set_gpr(31, 0x08A54648u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0109_entry, 109u, 250u, 0x089B96A0u>(ctx, &aot_mem) && ctx.pc == 0x08A54648u) goto L_08A54648;
    return;
L_08A54648:
    { const bool branch_taken = ctx.gpr[2] != 0u;
    // nop
      if (branch_taken) {
          goto L_08A54698;
      }
      goto L_08A54650;
    }
L_08A54650:
    ctx.set_gpr(4, rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(104)));
    { const bool branch_taken = ctx.gpr[4] == 0u;
    // nop
      if (branch_taken) {
          goto L_08A54664;
      }
      goto L_08A5465C;
    }
L_08A5465C:
    ctx.set_gpr(31, 0x08A54664u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0014_entry, 14u, 257u, 0x0883D454u>(ctx, &aot_mem) && ctx.pc == 0x08A54664u) goto L_08A54664;
    return;
L_08A54664:
    ctx.set_gpr(4, rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(136)));
    { const bool branch_taken = ctx.gpr[4] == 0u;
    // nop
      if (branch_taken) {
          goto L_08A54678;
      }
      goto L_08A54670;
    }
L_08A54670:
    ctx.set_gpr(31, 0x08A54678u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0014_entry, 14u, 257u, 0x0883D454u>(ctx, &aot_mem) && ctx.pc == 0x08A54678u) goto L_08A54678;
    return;
L_08A54678:
    ctx.set_gpr(4, rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(140)));
    { const bool branch_taken = ctx.gpr[4] == 0u;
    // nop
      if (branch_taken) {
          goto L_08A5468C;
      }
      goto L_08A54684;
    }
L_08A54684:
    ctx.set_gpr(31, 0x08A5468Cu);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0014_entry, 14u, 257u, 0x0883D454u>(ctx, &aot_mem) && ctx.pc == 0x08A5468Cu) goto L_08A5468C;
    return;
L_08A5468C:
    ctx.set_gpr(2, 0u + 0u);
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_08A54C50;
      }
      goto L_08A54698;
    }
L_08A54698:
    ctx.set_gpr(21, rt.memory().aot_load32(ctx.gpr[2] + static_cast<std::uint32_t>(12)));
    { const bool branch_taken = ctx.gpr[21] == 0u;
    // nop
      if (branch_taken) {
          goto L_08A546C8;
      }
      goto L_08A546A4;
    }
L_08A546A4:
    ctx.set_gpr(4, ctx.gpr[21] + 0u);
    ctx.set_gpr(2, 2246u << 16u);
    ctx.set_gpr(5, rt.memory().aot_load32(ctx.gpr[2] + static_cast<std::uint32_t>(-26768)));
    ctx.set_gpr(31, 0x08A546B8u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0080_entry, 80u, 857u, 0x08947F8Cu>(ctx, &aot_mem) && ctx.pc == 0x08A546B8u) goto L_08A546B8;
    return;
L_08A546B8:
    { const bool branch_taken = ctx.gpr[2] == 0u;
    // nop
      if (branch_taken) {
          goto L_08A546C8;
      }
      goto L_08A546C0;
    }
L_08A546C0:
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_08A546CC;
      }
      goto L_08A546C8;
    }
L_08A546C8:
    ctx.set_gpr(21, 0u + 0u);
    goto L_08A546CC;
L_08A546CC:
    { const bool branch_taken = ctx.gpr[21] == 0u;
    // nop
      if (branch_taken) {
          goto L_08A546E0;
      }
      goto L_08A546D4;
    }
L_08A546D4:
    ctx.set_gpr(2, rt.memory().aot_load32(ctx.gpr[21] + static_cast<std::uint32_t>(8)));
    { const bool branch_taken = ctx.gpr[2] != 0u;
    // nop
      if (branch_taken) {
          goto L_08A54728;
      }
      goto L_08A546E0;
    }
L_08A546E0:
    ctx.set_gpr(4, rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(104)));
    { const bool branch_taken = ctx.gpr[4] == 0u;
    // nop
      if (branch_taken) {
          goto L_08A546F4;
      }
      goto L_08A546EC;
    }
L_08A546EC:
    ctx.set_gpr(31, 0x08A546F4u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0014_entry, 14u, 257u, 0x0883D454u>(ctx, &aot_mem) && ctx.pc == 0x08A546F4u) goto L_08A546F4;
    return;
L_08A546F4:
    ctx.set_gpr(4, rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(136)));
    { const bool branch_taken = ctx.gpr[4] == 0u;
    // nop
      if (branch_taken) {
          goto L_08A54708;
      }
      goto L_08A54700;
    }
L_08A54700:
    ctx.set_gpr(31, 0x08A54708u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0014_entry, 14u, 257u, 0x0883D454u>(ctx, &aot_mem) && ctx.pc == 0x08A54708u) goto L_08A54708;
    return;
L_08A54708:
    ctx.set_gpr(4, rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(140)));
    { const bool branch_taken = ctx.gpr[4] == 0u;
    // nop
      if (branch_taken) {
          goto L_08A5471C;
      }
      goto L_08A54714;
    }
L_08A54714:
    ctx.set_gpr(31, 0x08A5471Cu);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0014_entry, 14u, 257u, 0x0883D454u>(ctx, &aot_mem) && ctx.pc == 0x08A5471Cu) goto L_08A5471C;
    return;
L_08A5471C:
    ctx.set_gpr(2, 0u + 0u);
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_08A54C50;
      }
      goto L_08A54728;
    }
L_08A54728:
    ctx.set_gpr(30, rt.memory().aot_load32(ctx.gpr[21] + static_cast<std::uint32_t>(16)));
    ctx.set_gpr(2, 0u + static_cast<std::uint32_t>(12));
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(56), ctx.gpr[2]);
    ctx.set_gpr(4, ctx.gpr[29] + static_cast<std::uint32_t>(96));
    ctx.set_gpr(5, ctx.gpr[20] + 0u);
    ctx.set_gpr(31, 0x08A54744u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0139_entry, 139u, 136u, 0x08A30AC4u>(ctx, &aot_mem) && ctx.pc == 0x08A54744u) goto L_08A54744;
    return;
L_08A54744:
    ctx.set_gpr(4, ctx.gpr[29] + static_cast<std::uint32_t>(140));
    ctx.set_gpr(5, rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(96)));
    ctx.set_gpr(31, 0x08A54754u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0085_entry, 85u, 61u, 0x089584C4u>(ctx, &aot_mem) && ctx.pc == 0x08A54754u) goto L_08A54754;
    return;
L_08A54754:
    ctx.set_gpr(4, rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(96)));
    { const bool branch_taken = ctx.gpr[4] == 0u;
    // nop
      if (branch_taken) {
          goto L_08A54768;
      }
      goto L_08A54760;
    }
L_08A54760:
    ctx.set_gpr(31, 0x08A54768u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0014_entry, 14u, 257u, 0x0883D454u>(ctx, &aot_mem) && ctx.pc == 0x08A54768u) goto L_08A54768;
    return;
L_08A54768:
    ctx.set_gpr(4, rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(140)));
    { const bool branch_taken = ctx.gpr[4] == 0u;
    // nop
      if (branch_taken) {
          goto L_08A547D4;
      }
      goto L_08A54774;
    }
L_08A54774:
    ctx.set_gpr(3, rt.memory().aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(20)));
    { const bool branch_taken = ctx.gpr[3] != 0u;
    // nop
      if (branch_taken) {
          goto L_08A547A8;
      }
      goto L_08A54780;
    }
L_08A54780:
    ctx.set_gpr(5, 0u + 0u);
    ctx.set_gpr(6, 0u + 0u);
    ctx.set_gpr(7, 0u + static_cast<std::uint32_t>(-1));
    ctx.set_gpr(25, rt.memory().aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(0)));
    ctx.set_gpr(25, rt.memory().aot_load32(ctx.gpr[25] + static_cast<std::uint32_t>(104)));
    jump_target = ctx.gpr[25];
    ctx.set_gpr(31, 0x08A5479Cu);
    // nop
    ctx.pc = jump_target;
    if (rt.invoke_chained_call(ctx, &aot_mem) && ctx.pc == 0x08A5479Cu) goto L_08A5479C;
    return;
L_08A5479C:
    ctx.set_gpr(18, ctx.gpr[2] + 0u);
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_08A547D4;
      }
      goto L_08A547A8;
    }
L_08A547A8:
    ctx.set_gpr(2, 0u + static_cast<std::uint32_t>(1));
    { const bool branch_taken = ctx.gpr[3] != ctx.gpr[2];
    // nop
      if (branch_taken) {
          goto L_08A547D4;
      }
      goto L_08A547B4;
    }
L_08A547B4:
    ctx.set_gpr(5, 0u + 0u);
    ctx.set_gpr(6, 0u + 0u);
    ctx.set_gpr(7, 0u + static_cast<std::uint32_t>(-1));
    ctx.set_gpr(25, rt.memory().aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(0)));
    ctx.set_gpr(25, rt.memory().aot_load32(ctx.gpr[25] + static_cast<std::uint32_t>(108)));
    jump_target = ctx.gpr[25];
    ctx.set_gpr(31, 0x08A547D0u);
    // nop
    ctx.pc = jump_target;
    if (rt.invoke_chained_call(ctx, &aot_mem) && ctx.pc == 0x08A547D0u) goto L_08A547D0;
    return;
L_08A547D0:
    ctx.set_gpr(17, ctx.gpr[2] + 0u);
    goto L_08A547D4;
L_08A547D4:
    ctx.set_gpr(4, ctx.gpr[29] + static_cast<std::uint32_t>(92));
    ctx.set_gpr(5, ctx.gpr[20] + 0u);
    ctx.set_gpr(25, rt.memory().aot_load32(ctx.gpr[20] + static_cast<std::uint32_t>(0)));
    ctx.set_gpr(25, rt.memory().aot_load32(ctx.gpr[25] + static_cast<std::uint32_t>(144)));
    jump_target = ctx.gpr[25];
    ctx.set_gpr(31, 0x08A547ECu);
    // nop
    ctx.pc = jump_target;
    if (rt.invoke_chained_call(ctx, &aot_mem) && ctx.pc == 0x08A547ECu) goto L_08A547EC;
    return;
L_08A547EC:
    ctx.set_gpr(4, ctx.gpr[29] + static_cast<std::uint32_t>(136));
    ctx.set_gpr(5, rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(92)));
    ctx.set_gpr(31, 0x08A547FCu);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0085_entry, 85u, 61u, 0x089584C4u>(ctx, &aot_mem) && ctx.pc == 0x08A547FCu) goto L_08A547FC;
    return;
L_08A547FC:
    ctx.set_gpr(4, rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(92)));
    { const bool branch_taken = ctx.gpr[4] == 0u;
    // nop
      if (branch_taken) {
          goto L_08A54810;
      }
      goto L_08A54808;
    }
L_08A54808:
    ctx.set_gpr(31, 0x08A54810u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0014_entry, 14u, 257u, 0x0883D454u>(ctx, &aot_mem) && ctx.pc == 0x08A54810u) goto L_08A54810;
    return;
L_08A54810:
    ctx.set_gpr(4, rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(104)));
    { const bool branch_taken = ctx.gpr[4] == 0u;
    // nop
      if (branch_taken) {
          goto L_08A54860;
      }
      goto L_08A5481C;
    }
L_08A5481C:
    ctx.set_gpr(31, 0x08A54824u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0014_entry, 14u, 257u, 0x0883D454u>(ctx, &aot_mem) && ctx.pc == 0x08A54824u) goto L_08A54824;
    return;
L_08A54824:
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_08A54860;
      }
      goto L_08A5482C;
    }
L_08A5482C:
    ctx.set_gpr(4, rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(136)));
    { const bool branch_taken = ctx.gpr[4] == 0u;
    // nop
      if (branch_taken) {
          goto L_08A54840;
      }
      goto L_08A54838;
    }
L_08A54838:
    ctx.set_gpr(31, 0x08A54840u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0014_entry, 14u, 257u, 0x0883D454u>(ctx, &aot_mem) && ctx.pc == 0x08A54840u) goto L_08A54840;
    return;
L_08A54840:
    ctx.set_gpr(4, rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(140)));
    { const bool branch_taken = ctx.gpr[4] == 0u;
    // nop
      if (branch_taken) {
          goto L_08A54854;
      }
      goto L_08A5484C;
    }
L_08A5484C:
    ctx.set_gpr(31, 0x08A54854u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0014_entry, 14u, 257u, 0x0883D454u>(ctx, &aot_mem) && ctx.pc == 0x08A54854u) goto L_08A54854;
    return;
L_08A54854:
    ctx.set_gpr(2, 0u + 0u);
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_08A54C50;
      }
      goto L_08A54860;
    }
L_08A54860:
    ctx.set_gpr(2, rt.memory().aot_load8(ctx.gpr[29] + static_cast<std::uint32_t>(144)));
    { const bool branch_taken = ctx.gpr[2] == 0u;
    // nop
      if (branch_taken) {
          goto L_08A54890;
      }
      goto L_08A5486C;
    }
L_08A5486C:
    ctx.set_gpr(2, rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(76)));
    ctx.set_gpr(2, rt.memory().aot_load32(ctx.gpr[2] + static_cast<std::uint32_t>(0)));
    ctx.set_gpr(3, 0u + static_cast<std::uint32_t>(-1));
    { const bool branch_taken = ctx.gpr[2] == ctx.gpr[3];
    // nop
      if (branch_taken) {
          goto L_08A54890;
      }
      goto L_08A54880;
    }
L_08A54880:
    ctx.set_gpr(2, rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(72)));
    ctx.set_gpr(2, rt.memory().aot_load32(ctx.gpr[2] + static_cast<std::uint32_t>(0)));
    { const bool branch_taken = ctx.gpr[2] != ctx.gpr[3];
    // nop
      if (branch_taken) {
          goto L_08A548A4;
      }
      goto L_08A54890;
    }
L_08A54890:
    ctx.set_gpr(3, 0u + static_cast<std::uint32_t>(-1));
    ctx.set_gpr(2, rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(76)));
    rt.memory().aot_store32(ctx.gpr[2] + static_cast<std::uint32_t>(0), ctx.gpr[3]);
    ctx.set_gpr(2, rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(72)));
    rt.memory().aot_store32(ctx.gpr[2] + static_cast<std::uint32_t>(0), ctx.gpr[3]);
    goto L_08A548A4;
L_08A548A4:
    ctx.set_gpr(23, 0u + 0u);
    ctx.set_gpr(4, 0u + static_cast<std::uint32_t>(1));
    ctx.set_gpr(5, 0u + static_cast<std::uint32_t>(1));
    rt.memory().aot_store8(ctx.gpr[29] + static_cast<std::uint32_t>(55), static_cast<std::uint8_t>(0u));
    ctx.set_gpr(1, ctx.gpr[22] < static_cast<std::uint32_t>(6) ? 1u : 0u);
    { const bool branch_taken = ctx.gpr[1] == 0u;
    // nop
      if (branch_taken) {
          goto L_08A54908;
      }
      goto L_08A548C0;
    }
L_08A548C0:
    ctx.set_gpr(3, 2226u << 16u);
    ctx.set_gpr(3, ctx.gpr[3] + static_cast<std::uint32_t>(-27268));
    ctx.set_gpr(2, ctx.gpr[22] << 2u);
    ctx.set_gpr(2, ctx.gpr[2] + ctx.gpr[3]);
    ctx.set_gpr(2, rt.memory().aot_load32(ctx.gpr[2] + static_cast<std::uint32_t>(0)));
    jump_target = ctx.gpr[2];
    // nop
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_08A548DC:
    ctx.set_gpr(23, 0u + static_cast<std::uint32_t>(3));
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_08A5490C;
      }
      goto L_08A548E8;
    }
L_08A548E8:
    ctx.set_gpr(23, ctx.gpr[4] + 0u);
    ctx.set_gpr(3, 0u + static_cast<std::uint32_t>(2));
    ctx.set_gpr(2, rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(68)));
    { const bool branch_taken = ctx.gpr[2] == ctx.gpr[3];
    // nop
      if (branch_taken) {
          goto L_08A5490C;
      }
      goto L_08A548FC;
    }
L_08A548FC:
    rt.memory().aot_store8(ctx.gpr[29] + static_cast<std::uint32_t>(55), static_cast<std::uint8_t>(ctx.gpr[5]));
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_08A5490C;
      }
      goto L_08A54908;
    }
L_08A54908:
    ctx.set_gpr(5, 0u + 0u);
    goto L_08A5490C;
L_08A5490C:
    { const bool branch_taken = ctx.gpr[5] == 0u;
    // nop
      if (branch_taken) {
          goto L_08A54BA0;
      }
      goto L_08A54914;
    }
L_08A54914:
    ctx.set_gpr(21, 0u + 0u);
    ctx.set_gpr(20, 0u + 0u);
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_08A54B90;
      }
      goto L_08A54924;
    }
L_08A54924:
    ctx.set_gpr(4, rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(136)));
    { const bool branch_taken = ctx.gpr[4] == 0u;
    // nop
      if (branch_taken) {
          goto L_08A54950;
      }
      goto L_08A54930;
    }
L_08A54930:
    ctx.set_gpr(5, ctx.gpr[21] + 0u);
    ctx.set_gpr(25, rt.memory().aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(0)));
    ctx.set_gpr(25, rt.memory().aot_load32(ctx.gpr[25] + static_cast<std::uint32_t>(108)));
    jump_target = ctx.gpr[25];
    ctx.set_gpr(31, 0x08A54944u);
    // nop
    ctx.pc = jump_target;
    if (rt.invoke_chained_call(ctx, &aot_mem) && ctx.pc == 0x08A54944u) goto L_08A54944;
    return;
L_08A54944:
    ctx.set_gpr(22, ctx.gpr[2] + static_cast<std::uint32_t>(-2));
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_08A54954;
      }
      goto L_08A54950;
    }
L_08A54950:
    ctx.set_gpr(22, 0u + 0u);
    goto L_08A54954;
L_08A54954:
    ctx.set_gpr(2, rt.memory().aot_load8(ctx.gpr[29] + static_cast<std::uint32_t>(55)));
    { const bool branch_taken = ctx.gpr[2] == 0u;
    // nop
      if (branch_taken) {
          goto L_08A54980;
      }
      goto L_08A54960;
    }
L_08A54960:
    ctx.set_gpr(2, ctx.gpr[20] & 1u);
    ctx.set_gpr(4, 0u + static_cast<std::uint32_t>(1));
    { const bool branch_taken = ctx.gpr[2] != ctx.gpr[4];
    // nop
      if (branch_taken) {
          goto L_08A54980;
      }
      goto L_08A54970;
    }
L_08A54970:
    ctx.set_gpr(5, 0u + 0u);
    ctx.set_gpr(2, 0u + static_cast<std::uint32_t>(2));
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_08A5498C;
      }
      goto L_08A54980;
    }
L_08A54980:
    ctx.set_gpr(5, 0u + 0u);
    ctx.set_gpr(2, 0u + static_cast<std::uint32_t>(1));
    ctx.set_gpr(4, 0u + static_cast<std::uint32_t>(2));
    goto L_08A5498C;
L_08A5498C:
    ctx.set_gpr(3, rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(140)));
    { const bool branch_taken = ctx.gpr[3] == 0u;
    // nop
      if (branch_taken) {
          goto L_08A54A30;
      }
      goto L_08A54998;
    }
L_08A54998:
    ctx.set_gpr(3, rt.memory().aot_load32(ctx.gpr[3] + static_cast<std::uint32_t>(20)));
    { const bool branch_taken = ctx.gpr[3] != 0u;
    // nop
      if (branch_taken) {
          goto L_08A54A30;
      }
      goto L_08A549A4;
    }
L_08A549A4:
    { const bool branch_taken = ctx.gpr[18] == 0u;
    // nop
      if (branch_taken) {
          goto L_08A549C8;
      }
      goto L_08A549AC;
    }
L_08A549AC:
    ctx.set_gpr(3, ctx.gpr[20] + ctx.gpr[5]);
    ctx.set_gpr(3, ctx.gpr[19] + ctx.gpr[3]);
    ctx.set_gpr(3, ctx.gpr[3] << 1u);
    ctx.set_gpr(3, ctx.gpr[18] + ctx.gpr[3]);
    ctx.set_gpr(3, rt.memory().aot_load16(ctx.gpr[3] + static_cast<std::uint32_t>(0)));
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_08A549D0;
      }
      goto L_08A549C8;
    }
L_08A549C8:
    ctx.set_gpr(3, ctx.gpr[20] + ctx.gpr[5]);
    ctx.set_gpr(3, ctx.gpr[19] + ctx.gpr[3]);
    goto L_08A549D0;
L_08A549D0:
    { const bool branch_taken = ctx.gpr[18] == 0u;
    // nop
      if (branch_taken) {
          goto L_08A549F4;
      }
      goto L_08A549D8;
    }
L_08A549D8:
    ctx.set_gpr(2, ctx.gpr[20] + ctx.gpr[2]);
    ctx.set_gpr(2, ctx.gpr[19] + ctx.gpr[2]);
    ctx.set_gpr(2, ctx.gpr[2] << 1u);
    ctx.set_gpr(2, ctx.gpr[18] + ctx.gpr[2]);
    ctx.set_gpr(2, rt.memory().aot_load16(ctx.gpr[2] + static_cast<std::uint32_t>(0)));
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_08A549FC;
      }
      goto L_08A549F4;
    }
L_08A549F4:
    ctx.set_gpr(2, ctx.gpr[20] + ctx.gpr[2]);
    ctx.set_gpr(2, ctx.gpr[19] + ctx.gpr[2]);
    goto L_08A549FC;
L_08A549FC:
    { const bool branch_taken = ctx.gpr[18] == 0u;
    // nop
      if (branch_taken) {
          goto L_08A54A20;
      }
      goto L_08A54A04;
    }
L_08A54A04:
    ctx.set_gpr(4, ctx.gpr[20] + ctx.gpr[4]);
    ctx.set_gpr(4, ctx.gpr[19] + ctx.gpr[4]);
    ctx.set_gpr(4, ctx.gpr[4] << 1u);
    ctx.set_gpr(4, ctx.gpr[18] + ctx.gpr[4]);
    ctx.set_gpr(7, rt.memory().aot_load16(ctx.gpr[4] + static_cast<std::uint32_t>(0)));
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_08A54A28;
      }
      goto L_08A54A20;
    }
L_08A54A20:
    ctx.set_gpr(4, ctx.gpr[20] + ctx.gpr[4]);
    ctx.set_gpr(7, ctx.gpr[19] + ctx.gpr[4]);
    goto L_08A54A28;
L_08A54A28:
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_08A54AB4;
      }
      goto L_08A54A30;
    }
L_08A54A30:
    { const bool branch_taken = ctx.gpr[17] == 0u;
    // nop
      if (branch_taken) {
          goto L_08A54A54;
      }
      goto L_08A54A38;
    }
L_08A54A38:
    ctx.set_gpr(3, ctx.gpr[20] + ctx.gpr[5]);
    ctx.set_gpr(3, ctx.gpr[19] + ctx.gpr[3]);
    ctx.set_gpr(3, ctx.gpr[3] << 2u);
    ctx.set_gpr(3, ctx.gpr[17] + ctx.gpr[3]);
    ctx.set_gpr(3, rt.memory().aot_load32(ctx.gpr[3] + static_cast<std::uint32_t>(0)));
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_08A54A5C;
      }
      goto L_08A54A54;
    }
L_08A54A54:
    ctx.set_gpr(3, ctx.gpr[20] + ctx.gpr[5]);
    ctx.set_gpr(3, ctx.gpr[19] + ctx.gpr[3]);
    goto L_08A54A5C;
L_08A54A5C:
    { const bool branch_taken = ctx.gpr[17] == 0u;
    // nop
      if (branch_taken) {
          goto L_08A54A80;
      }
      goto L_08A54A64;
    }
L_08A54A64:
    ctx.set_gpr(2, ctx.gpr[20] + ctx.gpr[2]);
    ctx.set_gpr(2, ctx.gpr[19] + ctx.gpr[2]);
    ctx.set_gpr(2, ctx.gpr[2] << 2u);
    ctx.set_gpr(2, ctx.gpr[17] + ctx.gpr[2]);
    ctx.set_gpr(2, rt.memory().aot_load32(ctx.gpr[2] + static_cast<std::uint32_t>(0)));
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_08A54A88;
      }
      goto L_08A54A80;
    }
L_08A54A80:
    ctx.set_gpr(2, ctx.gpr[20] + ctx.gpr[2]);
    ctx.set_gpr(2, ctx.gpr[19] + ctx.gpr[2]);
    goto L_08A54A88;
L_08A54A88:
    { const bool branch_taken = ctx.gpr[17] == 0u;
    // nop
      if (branch_taken) {
          goto L_08A54AAC;
      }
      goto L_08A54A90;
    }
L_08A54A90:
    ctx.set_gpr(4, ctx.gpr[20] + ctx.gpr[4]);
    ctx.set_gpr(4, ctx.gpr[19] + ctx.gpr[4]);
    ctx.set_gpr(4, ctx.gpr[4] << 2u);
    ctx.set_gpr(4, ctx.gpr[17] + ctx.gpr[4]);
    ctx.set_gpr(7, rt.memory().aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(0)));
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_08A54AB4;
      }
      goto L_08A54AAC;
    }
L_08A54AAC:
    ctx.set_gpr(4, ctx.gpr[20] + ctx.gpr[4]);
    ctx.set_gpr(7, ctx.gpr[19] + ctx.gpr[4]);
    goto L_08A54AB4;
L_08A54AB4:
    ctx.set_gpr(4, rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(56)));
    { const std::int64_t product = static_cast<std::int64_t>(static_cast<std::int32_t>(ctx.gpr[3])) * static_cast<std::int64_t>(static_cast<std::int32_t>(ctx.gpr[4])); ctx.lo = static_cast<std::uint32_t>(product); ctx.hi = static_cast<std::uint32_t>(static_cast<std::uint64_t>(product) >> 32u); }
    ctx.set_gpr(3, ctx.lo);
    ctx.set_gpr(5, ctx.gpr[30] + ctx.gpr[3]);
    ctx.set_gpr(3, ctx.gpr[4] + 0u);
    { const std::int64_t product = static_cast<std::int64_t>(static_cast<std::int32_t>(ctx.gpr[2])) * static_cast<std::int64_t>(static_cast<std::int32_t>(ctx.gpr[3])); ctx.lo = static_cast<std::uint32_t>(product); ctx.hi = static_cast<std::uint32_t>(static_cast<std::uint64_t>(product) >> 32u); }
    ctx.set_gpr(2, ctx.lo);
    ctx.set_gpr(6, ctx.gpr[30] + ctx.gpr[2]);
    ctx.set_gpr(2, ctx.gpr[4] + 0u);
    { const std::int64_t product = static_cast<std::int64_t>(static_cast<std::int32_t>(ctx.gpr[7])) * static_cast<std::int64_t>(static_cast<std::int32_t>(ctx.gpr[2])); ctx.lo = static_cast<std::uint32_t>(product); ctx.hi = static_cast<std::uint32_t>(static_cast<std::uint64_t>(product) >> 32u); }
    ctx.set_gpr(2, ctx.lo);
    ctx.set_gpr(7, ctx.gpr[30] + ctx.gpr[2]);
    ctx.set_gpr(4, rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(88)));
    ctx.set_gpr(8, rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(84)));
    ctx.set_gpr(9, rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(80)));
    ctx.set_gpr(10, rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(68)));
    ctx.set_gpr(31, 0x08A54AFCu);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0125_entry, 125u, 393u, 0x089F9C28u>(ctx, &aot_mem) && ctx.pc == 0x08A54AFCu) goto L_08A54AFC;
    return;
L_08A54AFC:
    ctx.fpr[1] = std::bit_cast<float>(0u);
    ctx.set_fpu_condition(((std::isnan(ctx.fpr[0]) || std::isnan(ctx.fpr[1])) || ctx.fpr[0] < ctx.fpr[1]));
    // nop
    { const bool branch_taken = ctx.fpu_condition();
    // nop
      if (branch_taken) {
          goto L_08A54B60;
      }
      goto L_08A54B10;
    }
L_08A54B10:
    ctx.set_gpr(2, rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(76)));
    ctx.set_gpr(2, rt.memory().aot_load32(ctx.gpr[2] + static_cast<std::uint32_t>(0)));
    ctx.set_gpr(1, static_cast<std::int32_t>(ctx.gpr[2]) < static_cast<std::int32_t>(ctx.gpr[21]) ? 1u : 0u);
    { const bool branch_taken = ctx.gpr[1] != 0u;
    // nop
      if (branch_taken) {
          goto L_08A54B40;
      }
      goto L_08A54B24;
    }
L_08A54B24:
    { const bool branch_taken = ctx.gpr[21] != ctx.gpr[2];
    // nop
      if (branch_taken) {
          goto L_08A54B60;
      }
      goto L_08A54B2C;
    }
L_08A54B2C:
    ctx.set_gpr(2, rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(72)));
    ctx.set_gpr(2, rt.memory().aot_load32(ctx.gpr[2] + static_cast<std::uint32_t>(0)));
    ctx.set_gpr(1, static_cast<std::int32_t>(ctx.gpr[2]) < static_cast<std::int32_t>(ctx.gpr[20]) ? 1u : 0u);
    { const bool branch_taken = ctx.gpr[1] == 0u;
    // nop
      if (branch_taken) {
          goto L_08A54B60;
      }
      goto L_08A54B40;
    }
L_08A54B40:
    ctx.set_gpr(2, 0u + static_cast<std::uint32_t>(1));
    rt.memory().aot_store8(ctx.gpr[29] + static_cast<std::uint32_t>(64), static_cast<std::uint8_t>(ctx.gpr[2]));
    ctx.set_gpr(2, rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(76)));
    rt.memory().aot_store32(ctx.gpr[2] + static_cast<std::uint32_t>(0), ctx.gpr[21]);
    ctx.set_gpr(2, rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(72)));
    rt.memory().aot_store32(ctx.gpr[2] + static_cast<std::uint32_t>(0), ctx.gpr[20]);
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_08A54B70;
      }
      goto L_08A54B60;
    }
L_08A54B60:
    ctx.set_gpr(22, ctx.gpr[22] - ctx.gpr[23]);
    ctx.set_gpr(20, ctx.gpr[20] + ctx.gpr[23]);
    { const bool branch_taken = static_cast<std::int32_t>(ctx.gpr[22]) > 0;
    // nop
      if (branch_taken) {
          goto L_08A54954;
      }
      goto L_08A54B70;
    }
L_08A54B70:
    ctx.set_gpr(2, rt.memory().aot_load8(ctx.gpr[29] + static_cast<std::uint32_t>(64)));
    { const bool branch_taken = ctx.gpr[2] != 0u;
    // nop
      if (branch_taken) {
          goto L_08A54BA0;
      }
      goto L_08A54B7C;
    }
L_08A54B7C:
    ctx.set_gpr(2, rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(136)));
    { const bool branch_taken = ctx.gpr[2] == 0u;
    // nop
      if (branch_taken) {
          goto L_08A54B8C;
      }
      goto L_08A54B88;
    }
L_08A54B88:
    ctx.set_gpr(20, ctx.gpr[20] + static_cast<std::uint32_t>(2));
    goto L_08A54B8C;
L_08A54B8C:
    ctx.set_gpr(21, ctx.gpr[21] + static_cast<std::uint32_t>(1));
    goto L_08A54B90;
L_08A54B90:
    ctx.set_gpr(2, rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(60)));
    ctx.set_gpr(2, ctx.gpr[21] < ctx.gpr[2] ? 1u : 0u);
    { const bool branch_taken = ctx.gpr[2] != 0u;
    // nop
      if (branch_taken) {
          goto L_08A54924;
      }
      goto L_08A54BA0;
    }
L_08A54BA0:
    { const bool branch_taken = ctx.gpr[16] == 0u;
    // nop
      if (branch_taken) {
          goto L_08A54BC4;
      }
      goto L_08A54BA8;
    }
L_08A54BA8:
    ctx.set_gpr(4, rt.memory().aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(12)));
    ctx.set_gpr(5, ctx.gpr[29] + static_cast<std::uint32_t>(108));
    ctx.set_gpr(6, 0u + static_cast<std::uint32_t>(1));
    ctx.set_gpr(25, rt.memory().aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(0)));
    ctx.set_gpr(25, rt.memory().aot_load32(ctx.gpr[25] + static_cast<std::uint32_t>(108)));
    jump_target = ctx.gpr[25];
    ctx.set_gpr(31, 0x08A54BC4u);
    // nop
    ctx.pc = jump_target;
    if (rt.invoke_chained_call(ctx, &aot_mem) && ctx.pc == 0x08A54BC4u) goto L_08A54BC4;
    return;
L_08A54BC4:
    { const bool branch_taken = ctx.gpr[18] == 0u;
    // nop
      if (branch_taken) {
          goto L_08A54BF8;
      }
      goto L_08A54BCC;
    }
L_08A54BCC:
    ctx.set_gpr(4, rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(140)));
    ctx.set_gpr(5, ctx.gpr[18] + 0u);
    ctx.set_gpr(6, 0u + static_cast<std::uint32_t>(1));
    ctx.set_gpr(7, 0u + 0u);
    ctx.set_gpr(8, 0u + static_cast<std::uint32_t>(-1));
    ctx.set_gpr(25, rt.memory().aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(0)));
    ctx.set_gpr(25, rt.memory().aot_load32(ctx.gpr[25] + static_cast<std::uint32_t>(116)));
    jump_target = ctx.gpr[25];
    ctx.set_gpr(31, 0x08A54BF0u);
    // nop
    ctx.pc = jump_target;
    if (rt.invoke_chained_call(ctx, &aot_mem) && ctx.pc == 0x08A54BF0u) goto L_08A54BF0;
    return;
L_08A54BF0:
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_08A54C24;
      }
      goto L_08A54BF8;
    }
L_08A54BF8:
    { const bool branch_taken = ctx.gpr[17] == 0u;
    // nop
      if (branch_taken) {
          goto L_08A54C24;
      }
      goto L_08A54C00;
    }
L_08A54C00:
    ctx.set_gpr(4, rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(140)));
    ctx.set_gpr(5, ctx.gpr[17] + 0u);
    ctx.set_gpr(6, 0u + static_cast<std::uint32_t>(1));
    ctx.set_gpr(7, 0u + 0u);
    ctx.set_gpr(8, 0u + static_cast<std::uint32_t>(-1));
    ctx.set_gpr(25, rt.memory().aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(0)));
    ctx.set_gpr(25, rt.memory().aot_load32(ctx.gpr[25] + static_cast<std::uint32_t>(120)));
    jump_target = ctx.gpr[25];
    ctx.set_gpr(31, 0x08A54C24u);
    // nop
    ctx.pc = jump_target;
    if (rt.invoke_chained_call(ctx, &aot_mem) && ctx.pc == 0x08A54C24u) goto L_08A54C24;
    return;
L_08A54C24:
    ctx.set_gpr(4, rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(136)));
    { const bool branch_taken = ctx.gpr[4] == 0u;
    // nop
      if (branch_taken) {
          goto L_08A54C38;
      }
      goto L_08A54C30;
    }
L_08A54C30:
    ctx.set_gpr(31, 0x08A54C38u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0014_entry, 14u, 257u, 0x0883D454u>(ctx, &aot_mem) && ctx.pc == 0x08A54C38u) goto L_08A54C38;
    return;
L_08A54C38:
    ctx.set_gpr(4, rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(140)));
    { const bool branch_taken = ctx.gpr[4] == 0u;
    // nop
      if (branch_taken) {
          goto L_08A54C4C;
      }
      goto L_08A54C44;
    }
L_08A54C44:
    ctx.set_gpr(31, 0x08A54C4Cu);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0014_entry, 14u, 257u, 0x0883D454u>(ctx, &aot_mem) && ctx.pc == 0x08A54C4Cu) goto L_08A54C4C;
    return;
L_08A54C4C:
    ctx.set_gpr(2, rt.memory().aot_load8(ctx.gpr[29] + static_cast<std::uint32_t>(64)));
    goto L_08A54C50;
L_08A54C50:
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
    ctx.set_gpr(29, ctx.gpr[29] + static_cast<std::uint32_t>(144));
    jump_target = ctx.gpr[31];
    // nop
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_08A54C84:
    ctx.set_gpr(2, 0u + 0u);
    jump_target = ctx.gpr[31];
    // nop
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_08A54C90:
    ctx.set_gpr(29, ctx.gpr[29] + static_cast<std::uint32_t>(-16));
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(12), ctx.gpr[31]);
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(8), ctx.gpr[18]);
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(4), ctx.gpr[17]);
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(0), ctx.gpr[16]);
    ctx.set_gpr(18, ctx.gpr[4] + 0u);
    ctx.set_gpr(16, ctx.gpr[5] + 0u);
    ctx.set_gpr(2, rt.memory().aot_load32(ctx.gpr[5] + static_cast<std::uint32_t>(28)));
    { const bool branch_taken = ctx.gpr[2] == 0u;
    // nop
      if (branch_taken) {
          goto L_08A54CC4;
      }
      goto L_08A54CB8;
    }
L_08A54CB8:
    ctx.set_gpr(2, rt.memory().aot_load32(ctx.gpr[2] + static_cast<std::uint32_t>(8)));
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_08A54CC8;
      }
      goto L_08A54CC4;
    }
L_08A54CC4:
    ctx.set_gpr(2, 0u + 0u);
    goto L_08A54CC8;
L_08A54CC8:
    { const bool branch_taken = ctx.gpr[2] != 0u;
    // nop
      if (branch_taken) {
          goto L_08A54CDC;
      }
      goto L_08A54CD0;
    }
L_08A54CD0:
    ctx.set_gpr(2, 0u + 0u);
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_08A54D7C;
      }
      goto L_08A54CDC;
    }
L_08A54CDC:
    ctx.set_gpr(4, rt.memory().aot_load32(ctx.gpr[18] + static_cast<std::uint32_t>(36)));
    ctx.set_gpr(5, ctx.gpr[16] + 0u);
    ctx.set_gpr(31, 0x08A54CECu);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0081_entry, 81u, 299u, 0x089494E0u>(ctx, &aot_mem) && ctx.pc == 0x08A54CECu) goto L_08A54CEC;
    return;
L_08A54CEC:
    ctx.set_gpr(4, ctx.gpr[18] + 0u);
    ctx.set_gpr(5, ctx.gpr[16] + 0u);
    ctx.set_gpr(31, 0x08A54CFCu);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0147_entry, 147u, 867u, 0x08A53DC4u>(ctx, &aot_mem) && ctx.pc == 0x08A54CFCu) goto L_08A54CFC;
    return;
L_08A54CFC:
    ctx.set_gpr(17, ctx.gpr[2] + 0u);
    { const bool branch_taken = ctx.gpr[17] != 0u;
    // nop
      if (branch_taken) {
          goto L_08A54D1C;
      }
      goto L_08A54D08;
    }
L_08A54D08:
    ctx.set_gpr(4, ctx.gpr[18] + 0u);
    ctx.set_gpr(5, ctx.gpr[16] + 0u);
    ctx.set_gpr(31, 0x08A54D18u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0153_entry, 153u, 354u, 0x08A69FF0u>(ctx, &aot_mem) && ctx.pc == 0x08A54D18u) goto L_08A54D18;
    return;
L_08A54D18:
    ctx.set_gpr(17, ctx.gpr[2] + 0u);
    goto L_08A54D1C;
L_08A54D1C:
    ctx.set_gpr(16, rt.memory().aot_load32(ctx.gpr[18] + static_cast<std::uint32_t>(36)));
    ctx.set_gpr(2, rt.memory().aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(8)));
    ctx.set_gpr(18, ctx.gpr[2] + static_cast<std::uint32_t>(-1));
    ctx.set_gpr(3, ctx.gpr[18] << 2u);
    ctx.set_gpr(2, rt.memory().aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(16)));
    ctx.set_gpr(2, ctx.gpr[2] + ctx.gpr[3]);
    ctx.set_gpr(4, rt.memory().aot_load32(ctx.gpr[2] + static_cast<std::uint32_t>(0)));
    ctx.set_gpr(31, 0x08A54D40u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0014_entry, 14u, 253u, 0x0883D42Cu>(ctx, &aot_mem) && ctx.pc == 0x08A54D40u) goto L_08A54D40;
    return;
L_08A54D40:
    ctx.set_gpr(4, ctx.gpr[16] + 0u);
    ctx.set_gpr(5, ctx.gpr[18] + 0u);
    ctx.set_gpr(31, 0x08A54D50u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0067_entry, 67u, 9u, 0x089100E0u>(ctx, &aot_mem) && ctx.pc == 0x08A54D50u) goto L_08A54D50;
    return;
L_08A54D50:
    ctx.set_gpr(2, rt.memory().aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(8)));
    ctx.set_gpr(3, ctx.gpr[2] << 2u);
    ctx.set_gpr(2, rt.memory().aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(16)));
    ctx.set_gpr(2, ctx.gpr[2] + ctx.gpr[3]);
    rt.memory().aot_store32(ctx.gpr[2] + static_cast<std::uint32_t>(0), 0u);
    ctx.set_gpr(2, 0u + static_cast<std::uint32_t>(2));
    { const bool branch_taken = ctx.gpr[17] != ctx.gpr[2];
    // nop
      if (branch_taken) {
          goto L_08A54D78;
      }
      goto L_08A54D70;
    }
L_08A54D70:
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_08A54D7C;
      }
      goto L_08A54D78;
    }
L_08A54D78:
    ctx.set_gpr(2, 0u + 0u);
    goto L_08A54D7C;
L_08A54D7C:
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
L_08A54D98:
    ctx.set_gpr(29, ctx.gpr[29] + static_cast<std::uint32_t>(-80));
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(12), ctx.gpr[31]);
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(8), ctx.gpr[18]);
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(4), ctx.gpr[17]);
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(0), ctx.gpr[16]);
    ctx.set_gpr(16, ctx.gpr[4] + 0u);
    ctx.set_gpr(18, ctx.gpr[5] + 0u);
    ctx.set_gpr(25, rt.memory().aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(0)));
    ctx.set_gpr(25, rt.memory().aot_load32(ctx.gpr[25] + static_cast<std::uint32_t>(104)));
    jump_target = ctx.gpr[25];
    ctx.set_gpr(31, 0x08A54DC4u);
    // nop
    ctx.pc = jump_target;
    if (rt.invoke_chained_call(ctx, &aot_mem) && ctx.pc == 0x08A54DC4u) goto L_08A54DC4;
    return;
L_08A54DC4:
    ctx.set_gpr(4, ctx.gpr[18] + 0u);
    ctx.set_gpr(6, ctx.gpr[2] + 0u);
    ctx.set_gpr(7, ctx.gpr[3] + 0u);
    ctx.set_gpr(25, rt.memory().aot_load32(ctx.gpr[18] + static_cast<std::uint32_t>(0)));
    ctx.set_gpr(25, rt.memory().aot_load32(ctx.gpr[25] + static_cast<std::uint32_t>(156)));
    jump_target = ctx.gpr[25];
    ctx.set_gpr(31, 0x08A54DE0u);
    // nop
    ctx.pc = jump_target;
    if (rt.invoke_chained_call(ctx, &aot_mem) && ctx.pc == 0x08A54DE0u) goto L_08A54DE0;
    return;
L_08A54DE0:
    ctx.set_gpr(4, rt.memory().aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(36)));
    ctx.set_gpr(5, ctx.gpr[18] + 0u);
    ctx.set_gpr(31, 0x08A54DF0u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0081_entry, 81u, 299u, 0x089494E0u>(ctx, &aot_mem) && ctx.pc == 0x08A54DF0u) goto L_08A54DF0;
    return;
L_08A54DF0:
    ctx.set_gpr(4, ctx.gpr[16] + 0u);
    ctx.set_gpr(5, ctx.gpr[18] + 0u);
    ctx.set_gpr(31, 0x08A54E00u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0147_entry, 147u, 867u, 0x08A53DC4u>(ctx, &aot_mem) && ctx.pc == 0x08A54E00u) goto L_08A54E00;
    return;
L_08A54E00:
    ctx.set_gpr(17, ctx.gpr[2] + 0u);
    { const bool branch_taken = ctx.gpr[17] != 0u;
    // nop
      if (branch_taken) {
          goto L_08A54E58;
      }
      goto L_08A54E0C;
    }
L_08A54E0C:
    ctx.set_gpr(5, ctx.gpr[18] + static_cast<std::uint32_t>(32));
    ctx.set_gpr(4, rt.memory().aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(32)));
    ctx.set_gpr(31, 0x08A54E1Cu);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0157_entry, 157u, 357u, 0x08A7A070u>(ctx, &aot_mem) && ctx.pc == 0x08A54E1Cu) goto L_08A54E1C;
    return;
L_08A54E1C:
    ctx.set_gpr(4, ctx.gpr[16] + 0u);
    ctx.set_gpr(5, ctx.gpr[18] + 0u);
    ctx.set_gpr(31, 0x08A54E2Cu);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0153_entry, 153u, 354u, 0x08A69FF0u>(ctx, &aot_mem) && ctx.pc == 0x08A54E2Cu) goto L_08A54E2C;
    return;
L_08A54E2C:
    ctx.set_gpr(17, ctx.gpr[2] + 0u);
    ctx.set_gpr(4, rt.memory().aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(32)));
    ctx.set_gpr(2, rt.memory().aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(8)));
    ctx.set_gpr(2, ctx.gpr[2] + static_cast<std::uint32_t>(-1));
    rt.memory().aot_store32(ctx.gpr[4] + static_cast<std::uint32_t>(8), ctx.gpr[2]);
    ctx.set_gpr(3, ctx.gpr[2] << 6u);
    ctx.set_gpr(2, rt.memory().aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(16)));
    ctx.set_gpr(5, ctx.gpr[2] + ctx.gpr[3]);
    ctx.set_gpr(4, ctx.gpr[29] + static_cast<std::uint32_t>(16));
    ctx.set_gpr(31, 0x08A54E58u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0126_entry, 126u, 747u, 0x089FFC4Cu>(ctx, &aot_mem) && ctx.pc == 0x08A54E58u) goto L_08A54E58;
    return;
L_08A54E58:
    ctx.set_gpr(16, rt.memory().aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(36)));
    ctx.set_gpr(2, rt.memory().aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(8)));
    ctx.set_gpr(18, ctx.gpr[2] + static_cast<std::uint32_t>(-1));
    ctx.set_gpr(3, ctx.gpr[18] << 2u);
    ctx.set_gpr(2, rt.memory().aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(16)));
    ctx.set_gpr(2, ctx.gpr[2] + ctx.gpr[3]);
    ctx.set_gpr(4, rt.memory().aot_load32(ctx.gpr[2] + static_cast<std::uint32_t>(0)));
    ctx.set_gpr(31, 0x08A54E7Cu);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0014_entry, 14u, 253u, 0x0883D42Cu>(ctx, &aot_mem) && ctx.pc == 0x08A54E7Cu) goto L_08A54E7C;
    return;
L_08A54E7C:
    ctx.set_gpr(4, ctx.gpr[16] + 0u);
    ctx.set_gpr(5, ctx.gpr[18] + 0u);
    ctx.set_gpr(31, 0x08A54E8Cu);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0067_entry, 67u, 9u, 0x089100E0u>(ctx, &aot_mem) && ctx.pc == 0x08A54E8Cu) goto L_08A54E8C;
    return;
L_08A54E8C:
    ctx.set_gpr(2, rt.memory().aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(8)));
    ctx.set_gpr(3, ctx.gpr[2] << 2u);
    ctx.set_gpr(2, rt.memory().aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(16)));
    ctx.set_gpr(2, ctx.gpr[2] + ctx.gpr[3]);
    rt.memory().aot_store32(ctx.gpr[2] + static_cast<std::uint32_t>(0), 0u);
    ctx.set_gpr(2, 0u + static_cast<std::uint32_t>(2));
    { const bool branch_taken = ctx.gpr[17] != ctx.gpr[2];
    // nop
      if (branch_taken) {
          goto L_08A54EB4;
      }
      goto L_08A54EAC;
    }
L_08A54EAC:
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_08A54EB8;
      }
      goto L_08A54EB4;
    }
L_08A54EB4:
    ctx.set_gpr(2, 0u + 0u);
    goto L_08A54EB8;
L_08A54EB8:
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
L_08A54ED4:
    ctx.set_gpr(29, ctx.gpr[29] + static_cast<std::uint32_t>(-80));
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(44), ctx.gpr[31]);
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(40), ctx.gpr[23]);
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(36), ctx.gpr[22]);
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(32), ctx.gpr[21]);
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(28), ctx.gpr[20]);
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(24), ctx.gpr[19]);
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(20), ctx.gpr[18]);
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(16), ctx.gpr[17]);
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(12), ctx.gpr[16]);
    ctx.set_gpr(18, ctx.gpr[4] + 0u);
    ctx.set_gpr(17, ctx.gpr[5] + 0u);
    ctx.set_gpr(16, rt.memory().aot_load32(ctx.gpr[5] + static_cast<std::uint32_t>(12)));
    { const bool branch_taken = ctx.gpr[16] != 0u;
    // nop
      if (branch_taken) {
          goto L_08A55168;
      }
      goto L_08A54F10;
    }
L_08A54F10:
    ctx.set_gpr(2, rt.memory().aot_load32(ctx.gpr[17] + static_cast<std::uint32_t>(32)));
    ctx.set_gpr(23, rt.memory().aot_load32(ctx.gpr[2] + static_cast<std::uint32_t>(8)));
    ctx.set_gpr(4, ctx.gpr[17] + 0u);
    ctx.set_gpr(31, 0x08A54F24u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0081_entry, 81u, 41u, 0x0894835Cu>(ctx, &aot_mem) && ctx.pc == 0x08A54F24u) goto L_08A54F24;
    return;
L_08A54F24:
    ctx.set_gpr(4, ctx.gpr[2] + 0u);
    ctx.set_gpr(31, 0x08A54F30u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0124_entry, 124u, 628u, 0x089F7718u>(ctx, &aot_mem) && ctx.pc == 0x08A54F30u) goto L_08A54F30;
    return;
L_08A54F30:
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(76), ctx.gpr[2]);
    ctx.set_gpr(4, ctx.gpr[17] + 0u);
    ctx.set_gpr(31, 0x08A54F40u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0081_entry, 81u, 41u, 0x0894835Cu>(ctx, &aot_mem) && ctx.pc == 0x08A54F40u) goto L_08A54F40;
    return;
L_08A54F40:
    ctx.set_gpr(4, ctx.gpr[2] + 0u);
    ctx.set_gpr(31, 0x08A54F4Cu);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0124_entry, 124u, 628u, 0x089F7718u>(ctx, &aot_mem) && ctx.pc == 0x08A54F4Cu) goto L_08A54F4C;
    return;
L_08A54F4C:
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(72), ctx.gpr[2]);
    ctx.set_gpr(3, rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(76)));
    ctx.fpr[1] = std::bit_cast<float>(rt.memory().aot_load32(ctx.gpr[28] + static_cast<std::uint32_t>(-32512)));
    rt.memory().aot_store32(ctx.gpr[3] + static_cast<std::uint32_t>(16), std::bit_cast<std::uint32_t>(ctx.fpr[1]));
    rt.memory().aot_store32(ctx.gpr[3] + static_cast<std::uint32_t>(12), std::bit_cast<std::uint32_t>(ctx.fpr[1]));
    rt.memory().aot_store32(ctx.gpr[3] + static_cast<std::uint32_t>(8), std::bit_cast<std::uint32_t>(ctx.fpr[1]));
    ctx.fpr[0] = std::bit_cast<float>(rt.memory().aot_load32(ctx.gpr[28] + static_cast<std::uint32_t>(-32508)));
    rt.memory().aot_store32(ctx.gpr[3] + static_cast<std::uint32_t>(28), std::bit_cast<std::uint32_t>(ctx.fpr[0]));
    rt.memory().aot_store32(ctx.gpr[3] + static_cast<std::uint32_t>(24), std::bit_cast<std::uint32_t>(ctx.fpr[0]));
    rt.memory().aot_store32(ctx.gpr[3] + static_cast<std::uint32_t>(20), std::bit_cast<std::uint32_t>(ctx.fpr[0]));
    rt.memory().aot_store32(ctx.gpr[2] + static_cast<std::uint32_t>(16), std::bit_cast<std::uint32_t>(ctx.fpr[1]));
    rt.memory().aot_store32(ctx.gpr[2] + static_cast<std::uint32_t>(12), std::bit_cast<std::uint32_t>(ctx.fpr[1]));
    rt.memory().aot_store32(ctx.gpr[2] + static_cast<std::uint32_t>(8), std::bit_cast<std::uint32_t>(ctx.fpr[1]));
    rt.memory().aot_store32(ctx.gpr[2] + static_cast<std::uint32_t>(28), std::bit_cast<std::uint32_t>(ctx.fpr[0]));
    rt.memory().aot_store32(ctx.gpr[2] + static_cast<std::uint32_t>(24), std::bit_cast<std::uint32_t>(ctx.fpr[0]));
    rt.memory().aot_store32(ctx.gpr[2] + static_cast<std::uint32_t>(20), std::bit_cast<std::uint32_t>(ctx.fpr[0]));
    ctx.set_gpr(21, 0u + 0u);
    ctx.set_gpr(20, 0u + 0u);
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_08A55118;
      }
      goto L_08A54F9C;
    }
L_08A54F9C:
    ctx.set_gpr(2, rt.memory().aot_load32(ctx.gpr[17] + static_cast<std::uint32_t>(32)));
    ctx.set_gpr(3, ctx.gpr[20] << 2u);
    ctx.set_gpr(2, rt.memory().aot_load32(ctx.gpr[2] + static_cast<std::uint32_t>(16)));
    ctx.set_gpr(2, ctx.gpr[2] + ctx.gpr[3]);
    ctx.set_gpr(19, rt.memory().aot_load32(ctx.gpr[2] + static_cast<std::uint32_t>(0)));
    ctx.set_gpr(4, ctx.gpr[19] + 0u);
    ctx.set_gpr(2, 2245u << 16u);
    ctx.set_gpr(5, rt.memory().aot_load32(ctx.gpr[2] + static_cast<std::uint32_t>(25092)));
    ctx.set_gpr(31, 0x08A54FC4u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0080_entry, 80u, 857u, 0x08947F8Cu>(ctx, &aot_mem) && ctx.pc == 0x08A54FC4u) goto L_08A54FC4;
    return;
L_08A54FC4:
    { const bool branch_taken = ctx.gpr[2] == 0u;
    // nop
      if (branch_taken) {
          goto L_08A55060;
      }
      goto L_08A54FCC;
    }
L_08A54FCC:
    ctx.set_gpr(4, rt.memory().aot_load32(ctx.gpr[19] + static_cast<std::uint32_t>(12)));
    ctx.set_gpr(25, rt.memory().aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(0)));
    ctx.set_gpr(25, rt.memory().aot_load32(ctx.gpr[25] + static_cast<std::uint32_t>(100)));
    jump_target = ctx.gpr[25];
    ctx.set_gpr(31, 0x08A54FE0u);
    // nop
    ctx.pc = jump_target;
    if (rt.invoke_chained_call(ctx, &aot_mem) && ctx.pc == 0x08A54FE0u) goto L_08A54FE0;
    return;
L_08A54FE0:
    ctx.set_gpr(3, rt.memory().aot_load32(ctx.gpr[2] + static_cast<std::uint32_t>(0)));
    ctx.set_gpr(2, ctx.gpr[3] & 3840u);
    ctx.set_gpr(2, (ctx.gpr[2] >> 8u) & 0x000000FFu);
    { const bool branch_taken = ctx.gpr[2] != 0u;
    // nop
      if (branch_taken) {
          goto L_08A55114;
      }
      goto L_08A54FF4;
    }
L_08A54FF4:
    ctx.set_gpr(2, ctx.gpr[3] & 240u);
    ctx.set_gpr(2, (ctx.gpr[2] >> 4u) & 0x000000FFu);
    { const bool branch_taken = ctx.gpr[2] != 0u;
    // nop
      if (branch_taken) {
          goto L_08A55114;
      }
      goto L_08A55004;
    }
L_08A55004:
    ctx.set_gpr(21, 0u + static_cast<std::uint32_t>(1));
    ctx.set_gpr(3, rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(72)));
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(68), ctx.gpr[3]);
    { const bool branch_taken = ctx.gpr[3] == 0u;
    // nop
      if (branch_taken) {
          goto L_08A55024;
      }
      goto L_08A55018;
    }
L_08A55018:
    ctx.set_gpr(2, rt.memory().aot_load32(ctx.gpr[3] + static_cast<std::uint32_t>(4)));
    ctx.set_gpr(2, ctx.gpr[2] + static_cast<std::uint32_t>(1));
    rt.memory().aot_store32(ctx.gpr[3] + static_cast<std::uint32_t>(4), ctx.gpr[2]);
    goto L_08A55024;
L_08A55024:
    ctx.set_gpr(4, ctx.gpr[19] + 0u);
    ctx.set_gpr(5, ctx.gpr[29] + static_cast<std::uint32_t>(68));
    ctx.set_gpr(31, 0x08A55034u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0139_entry, 139u, 11u, 0x08A30084u>(ctx, &aot_mem) && ctx.pc == 0x08A55034u) goto L_08A55034;
    return;
L_08A55034:
    ctx.set_gpr(4, rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(68)));
    { const bool branch_taken = ctx.gpr[4] == 0u;
    // nop
      if (branch_taken) {
          goto L_08A55048;
      }
      goto L_08A55040;
    }
L_08A55040:
    ctx.set_gpr(31, 0x08A55048u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0014_entry, 14u, 257u, 0x0883D454u>(ctx, &aot_mem) && ctx.pc == 0x08A55048u) goto L_08A55048;
    return;
L_08A55048:
    ctx.set_gpr(4, rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(76)));
    ctx.set_gpr(5, rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(72)));
    ctx.set_gpr(31, 0x08A55058u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0126_entry, 126u, 693u, 0x089FF550u>(ctx, &aot_mem) && ctx.pc == 0x08A55058u) goto L_08A55058;
    return;
L_08A55058:
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_08A55114;
      }
      goto L_08A55060;
    }
L_08A55060:
    ctx.set_gpr(4, ctx.gpr[19] + 0u);
    ctx.set_gpr(2, 2245u << 16u);
    ctx.set_gpr(5, rt.memory().aot_load32(ctx.gpr[2] + static_cast<std::uint32_t>(25044)));
    ctx.set_gpr(31, 0x08A55074u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0080_entry, 80u, 857u, 0x08947F8Cu>(ctx, &aot_mem) && ctx.pc == 0x08A55074u) goto L_08A55074;
    return;
L_08A55074:
    { const bool branch_taken = ctx.gpr[2] == 0u;
    // nop
      if (branch_taken) {
          goto L_08A55114;
      }
      goto L_08A5507C;
    }
L_08A5507C:
    ctx.set_gpr(4, ctx.gpr[29] + static_cast<std::uint32_t>(64));
    ctx.set_gpr(5, ctx.gpr[19] + 0u);
    ctx.set_gpr(31, 0x08A5508Cu);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0123_entry, 123u, 314u, 0x089F26D8u>(ctx, &aot_mem) && ctx.pc == 0x08A5508Cu) goto L_08A5508C;
    return;
L_08A5508C:
    ctx.set_gpr(4, rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(64)));
    ctx.set_gpr(5, 0u + static_cast<std::uint32_t>(5));
    ctx.set_gpr(6, 0u + 0u);
    ctx.set_gpr(31, 0x08A550A0u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0109_entry, 109u, 250u, 0x089B96A0u>(ctx, &aot_mem) && ctx.pc == 0x08A550A0u) goto L_08A550A0;
    return;
L_08A550A0:
    ctx.set_gpr(22, ctx.gpr[2] + 0u);
    ctx.set_gpr(4, rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(64)));
    { const bool branch_taken = ctx.gpr[4] == 0u;
    // nop
      if (branch_taken) {
          goto L_08A550B8;
      }
      goto L_08A550B0;
    }
L_08A550B0:
    ctx.set_gpr(31, 0x08A550B8u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0014_entry, 14u, 257u, 0x0883D454u>(ctx, &aot_mem) && ctx.pc == 0x08A550B8u) goto L_08A550B8;
    return;
L_08A550B8:
    { const bool branch_taken = ctx.gpr[22] != 0u;
    // nop
      if (branch_taken) {
          goto L_08A55114;
      }
      goto L_08A550C0;
    }
L_08A550C0:
    ctx.set_gpr(21, 0u + static_cast<std::uint32_t>(1));
    ctx.set_gpr(3, rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(72)));
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(60), ctx.gpr[3]);
    { const bool branch_taken = ctx.gpr[3] == 0u;
    // nop
      if (branch_taken) {
          goto L_08A550E0;
      }
      goto L_08A550D4;
    }
L_08A550D4:
    ctx.set_gpr(2, rt.memory().aot_load32(ctx.gpr[3] + static_cast<std::uint32_t>(4)));
    ctx.set_gpr(2, ctx.gpr[2] + static_cast<std::uint32_t>(1));
    rt.memory().aot_store32(ctx.gpr[3] + static_cast<std::uint32_t>(4), ctx.gpr[2]);
    goto L_08A550E0;
L_08A550E0:
    ctx.set_gpr(4, ctx.gpr[19] + 0u);
    ctx.set_gpr(5, ctx.gpr[29] + static_cast<std::uint32_t>(60));
    ctx.set_gpr(31, 0x08A550F0u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0139_entry, 139u, 98u, 0x08A30814u>(ctx, &aot_mem) && ctx.pc == 0x08A550F0u) goto L_08A550F0;
    return;
L_08A550F0:
    ctx.set_gpr(4, rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(60)));
    { const bool branch_taken = ctx.gpr[4] == 0u;
    // nop
      if (branch_taken) {
          goto L_08A55104;
      }
      goto L_08A550FC;
    }
L_08A550FC:
    ctx.set_gpr(31, 0x08A55104u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0014_entry, 14u, 257u, 0x0883D454u>(ctx, &aot_mem) && ctx.pc == 0x08A55104u) goto L_08A55104;
    return;
L_08A55104:
    ctx.set_gpr(4, rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(76)));
    ctx.set_gpr(5, rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(72)));
    ctx.set_gpr(31, 0x08A55114u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0126_entry, 126u, 693u, 0x089FF550u>(ctx, &aot_mem) && ctx.pc == 0x08A55114u) goto L_08A55114;
    return;
L_08A55114:
    ctx.set_gpr(20, ctx.gpr[20] + static_cast<std::uint32_t>(1));
    goto L_08A55118;
L_08A55118:
    ctx.set_gpr(2, ctx.gpr[20] < ctx.gpr[23] ? 1u : 0u);
    { const bool branch_taken = ctx.gpr[2] != 0u;
    // nop
      if (branch_taken) {
          goto L_08A54F9C;
      }
      goto L_08A55124;
    }
L_08A55124:
    { const bool branch_taken = ctx.gpr[21] == 0u;
    // nop
      if (branch_taken) {
          goto L_08A55140;
      }
      goto L_08A5512C;
    }
L_08A5512C:
    ctx.set_gpr(4, ctx.gpr[17] + static_cast<std::uint32_t>(12));
    ctx.set_gpr(5, rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(76)));
    ctx.set_gpr(31, 0x08A5513Cu);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0085_entry, 85u, 61u, 0x089584C4u>(ctx, &aot_mem) && ctx.pc == 0x08A5513Cu) goto L_08A5513C;
    return;
L_08A5513C:
    ctx.set_gpr(16, rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(76)));
    goto L_08A55140;
L_08A55140:
    ctx.set_gpr(4, rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(72)));
    { const bool branch_taken = ctx.gpr[4] == 0u;
    // nop
      if (branch_taken) {
          goto L_08A55154;
      }
      goto L_08A5514C;
    }
L_08A5514C:
    ctx.set_gpr(31, 0x08A55154u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0014_entry, 14u, 257u, 0x0883D454u>(ctx, &aot_mem) && ctx.pc == 0x08A55154u) goto L_08A55154;
    return;
L_08A55154:
    ctx.set_gpr(4, rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(76)));
    { const bool branch_taken = ctx.gpr[4] == 0u;
    // nop
      if (branch_taken) {
          goto L_08A55168;
      }
      goto L_08A55160;
    }
L_08A55160:
    ctx.set_gpr(31, 0x08A55168u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0014_entry, 14u, 257u, 0x0883D454u>(ctx, &aot_mem) && ctx.pc == 0x08A55168u) goto L_08A55168;
    return;
L_08A55168:
    ctx.set_gpr(19, 0u + 0u);
    { const bool branch_taken = ctx.gpr[16] == 0u;
    // nop
      if (branch_taken) {
          goto L_08A551E0;
      }
      goto L_08A55174;
    }
L_08A55174:
    ctx.set_gpr(4, rt.memory().aot_load32(ctx.gpr[18] + static_cast<std::uint32_t>(36)));
    ctx.set_gpr(5, ctx.gpr[17] + 0u);
    ctx.set_gpr(31, 0x08A55184u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0081_entry, 81u, 299u, 0x089494E0u>(ctx, &aot_mem) && ctx.pc == 0x08A55184u) goto L_08A55184;
    return;
L_08A55184:
    ctx.set_gpr(4, ctx.gpr[18] + 0u);
    ctx.set_gpr(5, ctx.gpr[17] + 0u);
    ctx.set_gpr(31, 0x08A55194u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0147_entry, 147u, 867u, 0x08A53DC4u>(ctx, &aot_mem) && ctx.pc == 0x08A55194u) goto L_08A55194;
    return;
L_08A55194:
    ctx.set_gpr(19, ctx.gpr[2] + 0u);
    ctx.set_gpr(16, rt.memory().aot_load32(ctx.gpr[18] + static_cast<std::uint32_t>(36)));
    ctx.set_gpr(2, rt.memory().aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(8)));
    ctx.set_gpr(17, ctx.gpr[2] + static_cast<std::uint32_t>(-1));
    ctx.set_gpr(3, ctx.gpr[17] << 2u);
    ctx.set_gpr(2, rt.memory().aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(16)));
    ctx.set_gpr(2, ctx.gpr[2] + ctx.gpr[3]);
    ctx.set_gpr(4, rt.memory().aot_load32(ctx.gpr[2] + static_cast<std::uint32_t>(0)));
    ctx.set_gpr(31, 0x08A551BCu);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0014_entry, 14u, 253u, 0x0883D42Cu>(ctx, &aot_mem) && ctx.pc == 0x08A551BCu) goto L_08A551BC;
    return;
L_08A551BC:
    ctx.set_gpr(4, ctx.gpr[16] + 0u);
    ctx.set_gpr(5, ctx.gpr[17] + 0u);
    ctx.set_gpr(31, 0x08A551CCu);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0067_entry, 67u, 9u, 0x089100E0u>(ctx, &aot_mem) && ctx.pc == 0x08A551CCu) goto L_08A551CC;
    return;
L_08A551CC:
    ctx.set_gpr(2, rt.memory().aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(8)));
    ctx.set_gpr(3, ctx.gpr[2] << 2u);
    ctx.set_gpr(2, rt.memory().aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(16)));
    ctx.set_gpr(2, ctx.gpr[2] + ctx.gpr[3]);
    rt.memory().aot_store32(ctx.gpr[2] + static_cast<std::uint32_t>(0), 0u);
    goto L_08A551E0;
L_08A551E0:
    ctx.set_gpr(2, 0u + static_cast<std::uint32_t>(2));
    { const bool branch_taken = ctx.gpr[19] != ctx.gpr[2];
    // nop
      if (branch_taken) {
          goto L_08A551F4;
      }
      goto L_08A551EC;
    }
L_08A551EC:
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_08A551F8;
      }
      goto L_08A551F4;
    }
L_08A551F4:
    ctx.set_gpr(2, 0u + 0u);
    goto L_08A551F8;
L_08A551F8:
    ctx.set_gpr(31, rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(44)));
    ctx.set_gpr(23, rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(40)));
    ctx.set_gpr(22, rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(36)));
    ctx.set_gpr(21, rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(32)));
    ctx.set_gpr(20, rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(28)));
    ctx.set_gpr(19, rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(24)));
    ctx.set_gpr(18, rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(20)));
    ctx.set_gpr(17, rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(16)));
    ctx.set_gpr(16, rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(12)));
    ctx.set_gpr(29, ctx.gpr[29] + static_cast<std::uint32_t>(80));
    jump_target = ctx.gpr[31];
    // nop
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_08A55228:
    ctx.set_gpr(29, ctx.gpr[29] + static_cast<std::uint32_t>(-176));
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
    ctx.set_gpr(17, ctx.gpr[5] + 0u);
    ctx.set_gpr(19, ctx.gpr[6] + 0u);
    ctx.set_gpr(16, ctx.gpr[8] + 0u);
    ctx.set_gpr(23, ctx.gpr[9] + 0u);
    ctx.set_gpr(4, rt.memory().aot_load32(ctx.gpr[5] + static_cast<std::uint32_t>(248)));
    ctx.set_gpr(2, rt.memory().aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(8)));
    { const bool branch_taken = static_cast<std::int32_t>(ctx.gpr[2]) <= 0;
    // nop
      if (branch_taken) {
          goto L_08A55298;
      }
      goto L_08A55278;
    }
L_08A55278:
    ctx.set_gpr(20, ctx.gpr[2] + static_cast<std::uint32_t>(-1));
    ctx.set_gpr(31, 0x08A55284u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0141_entry, 141u, 145u, 0x08A38C00u>(ctx, &aot_mem) && ctx.pc == 0x08A55284u) goto L_08A55284;
    return;
L_08A55284:
    ctx.set_gpr(3, ctx.gpr[20] << 2u);
    ctx.set_gpr(2, ctx.gpr[2] + ctx.gpr[3]);
    ctx.set_gpr(20, rt.memory().aot_load32(ctx.gpr[2] + static_cast<std::uint32_t>(0)));
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_08A5529C;
      }
      goto L_08A55298;
    }
L_08A55298:
    ctx.set_gpr(20, 0u + 0u);
    goto L_08A5529C;
L_08A5529C:
    ctx.set_gpr(4, ctx.gpr[18] + 0u);
    ctx.set_gpr(6, ctx.gpr[16] + 0u);
    ctx.set_gpr(7, ctx.gpr[23] + 0u);
    ctx.set_gpr(25, rt.memory().aot_load32(ctx.gpr[18] + static_cast<std::uint32_t>(0)));
    ctx.set_gpr(25, rt.memory().aot_load32(ctx.gpr[25] + static_cast<std::uint32_t>(156)));
    jump_target = ctx.gpr[25];
    ctx.set_gpr(31, 0x08A552B8u);
    // nop
    ctx.pc = jump_target;
    if (rt.invoke_chained_call(ctx, &aot_mem) && ctx.pc == 0x08A552B8u) goto L_08A552B8;
    return;
L_08A552B8:
    ctx.set_gpr(4, ctx.gpr[29] + static_cast<std::uint32_t>(112));
    ctx.set_gpr(31, 0x08A552C4u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0126_entry, 126u, 723u, 0x089FF868u>(ctx, &aot_mem) && ctx.pc == 0x08A552C4u) goto L_08A552C4;
    return;
L_08A552C4:
    ctx.set_gpr(5, ctx.gpr[18] + static_cast<std::uint32_t>(32));
    ctx.set_gpr(4, ctx.gpr[29] + static_cast<std::uint32_t>(112));
    ctx.set_gpr(6, ctx.gpr[19] + 0u);
    ctx.set_gpr(31, 0x08A552D8u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0126_entry, 126u, 727u, 0x089FF9E0u>(ctx, &aot_mem) && ctx.pc == 0x08A552D8u) goto L_08A552D8;
    return;
L_08A552D8:
    { const bool branch_taken = ctx.gpr[20] == 0u;
    // nop
      if (branch_taken) {
          goto L_08A55310;
      }
      goto L_08A552E0;
    }
L_08A552E0:
    ctx.set_gpr(4, ctx.gpr[29] + static_cast<std::uint32_t>(48));
    ctx.set_gpr(31, 0x08A552ECu);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0126_entry, 126u, 723u, 0x089FF868u>(ctx, &aot_mem) && ctx.pc == 0x08A552ECu) goto L_08A552EC;
    return;
L_08A552EC:
    ctx.set_gpr(4, ctx.gpr[29] + static_cast<std::uint32_t>(48));
    ctx.set_gpr(5, ctx.gpr[20] + 0u);
    ctx.set_gpr(31, 0x08A552FCu);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0127_entry, 127u, 124u, 0x08A019A0u>(ctx, &aot_mem) && ctx.pc == 0x08A552FCu) goto L_08A552FC;
    return;
L_08A552FC:
    ctx.set_gpr(4, ctx.gpr[29] + static_cast<std::uint32_t>(112));
    ctx.set_gpr(5, ctx.gpr[4] + 0u);
    ctx.set_gpr(6, ctx.gpr[29] + static_cast<std::uint32_t>(48));
    ctx.set_gpr(31, 0x08A55310u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0126_entry, 126u, 727u, 0x089FF9E0u>(ctx, &aot_mem) && ctx.pc == 0x08A55310u) goto L_08A55310;
    return;
L_08A55310:
    ctx.set_gpr(3, rt.memory().aot_load32(ctx.gpr[18] + static_cast<std::uint32_t>(168)));
    ctx.set_gpr(2, 2246u << 16u);
    ctx.set_gpr(2, rt.memory().aot_load32(ctx.gpr[2] + static_cast<std::uint32_t>(-20600)));
    ctx.set_gpr(2, rt.memory().aot_load32(ctx.gpr[2] + static_cast<std::uint32_t>(8)));
    ctx.set_gpr(4, ctx.gpr[3] + ctx.gpr[2]);
    ctx.set_gpr(5, ctx.gpr[18] + static_cast<std::uint32_t>(104));
    ctx.set_gpr(6, ctx.gpr[29] + static_cast<std::uint32_t>(112));
    ctx.set_gpr(31, 0x08A55334u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0126_entry, 126u, 727u, 0x089FF9E0u>(ctx, &aot_mem) && ctx.pc == 0x08A55334u) goto L_08A55334;
    return;
L_08A55334:
    ctx.set_gpr(3, rt.memory().aot_load32(ctx.gpr[18] + static_cast<std::uint32_t>(28)));
    { const bool branch_taken = ctx.gpr[3] == 0u;
    // nop
      if (branch_taken) {
          goto L_08A5534C;
      }
      goto L_08A55340;
    }
L_08A55340:
    ctx.set_gpr(30, rt.memory().aot_load32(ctx.gpr[3] + static_cast<std::uint32_t>(8)));
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_08A55350;
      }
      goto L_08A5534C;
    }
L_08A5534C:
    ctx.set_gpr(30, 0u + 0u);
    goto L_08A55350;
L_08A55350:
    ctx.set_gpr(22, 0u + 0u);
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_08A55458;
      }
      goto L_08A5535C;
    }
L_08A5535C:
    ctx.set_gpr(2, rt.memory().aot_load32(ctx.gpr[18] + static_cast<std::uint32_t>(28)));
    ctx.set_gpr(3, ctx.gpr[22] << 2u);
    ctx.set_gpr(2, rt.memory().aot_load32(ctx.gpr[2] + static_cast<std::uint32_t>(16)));
    ctx.set_gpr(2, ctx.gpr[2] + ctx.gpr[3]);
    ctx.set_gpr(19, rt.memory().aot_load32(ctx.gpr[2] + static_cast<std::uint32_t>(0)));
    ctx.set_gpr(2, 2246u << 16u);
    ctx.set_gpr(20, rt.memory().aot_load32(ctx.gpr[2] + static_cast<std::uint32_t>(-24564)));
    ctx.set_gpr(4, ctx.gpr[19] + 0u);
    ctx.set_gpr(25, rt.memory().aot_load32(ctx.gpr[19] + static_cast<std::uint32_t>(0)));
    ctx.set_gpr(25, rt.memory().aot_load32(ctx.gpr[25] + static_cast<std::uint32_t>(88)));
    jump_target = ctx.gpr[25];
    ctx.set_gpr(31, 0x08A5538Cu);
    // nop
    ctx.pc = jump_target;
    if (rt.invoke_chained_call(ctx, &aot_mem) && ctx.pc == 0x08A5538Cu) goto L_08A5538C;
    return;
L_08A5538C:
    { const bool branch_taken = ctx.gpr[20] != ctx.gpr[2];
    // nop
      if (branch_taken) {
          goto L_08A553B8;
      }
      goto L_08A55394;
    }
L_08A55394:
    ctx.set_gpr(4, ctx.gpr[19] + 0u);
    ctx.set_gpr(5, ctx.gpr[17] + 0u);
    ctx.set_gpr(6, ctx.gpr[29] + static_cast<std::uint32_t>(112));
    ctx.set_gpr(8, ctx.gpr[16] + 0u);
    ctx.set_gpr(9, ctx.gpr[23] + 0u);
    ctx.set_gpr(31, 0x08A553B0u);
    // nop
    goto L_08A55228;
L_08A553B0:
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_08A55454;
      }
      goto L_08A553B8;
    }
L_08A553B8:
    ctx.set_gpr(20, rt.memory().aot_load32(ctx.gpr[17] + static_cast<std::uint32_t>(72)));
    ctx.set_gpr(3, rt.memory().aot_load32(ctx.gpr[20] + static_cast<std::uint32_t>(8)));
    ctx.set_gpr(2, rt.memory().aot_load32(ctx.gpr[20] + static_cast<std::uint32_t>(20)));
    ctx.set_gpr(2, static_cast<std::int32_t>(ctx.gpr[2]) < static_cast<std::int32_t>(ctx.gpr[3]) ? 1u : 0u);
    { const bool branch_taken = ctx.gpr[2] != 0u;
    // nop
      if (branch_taken) {
          goto L_08A553EC;
      }
      goto L_08A553D0;
    }
L_08A553D0:
    ctx.set_gpr(2, rt.memory().aot_load32(ctx.gpr[20] + static_cast<std::uint32_t>(24)));
    ctx.set_gpr(5, ctx.gpr[3] + ctx.gpr[2]);
    ctx.set_gpr(4, ctx.gpr[20] + 0u);
    ctx.set_gpr(2, 2245u << 16u);
    ctx.set_gpr(6, rt.memory().aot_load32(ctx.gpr[2] + static_cast<std::uint32_t>(24744)));
    ctx.set_gpr(31, 0x08A553ECu);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0086_entry, 86u, 478u, 0x0895DF98u>(ctx, &aot_mem) && ctx.pc == 0x08A553ECu) goto L_08A553EC;
    return;
L_08A553EC:
    ctx.set_gpr(3, rt.memory().aot_load32(ctx.gpr[20] + static_cast<std::uint32_t>(20)));
    ctx.set_gpr(2, ctx.gpr[3] + static_cast<std::uint32_t>(1));
    rt.memory().aot_store32(ctx.gpr[20] + static_cast<std::uint32_t>(20), ctx.gpr[2]);
    ctx.set_gpr(3, ctx.gpr[3] << 2u);
    ctx.set_gpr(2, rt.memory().aot_load32(ctx.gpr[20] + static_cast<std::uint32_t>(16)));
    ctx.set_gpr(2, ctx.gpr[2] + ctx.gpr[3]);
    ctx.set_gpr(20, rt.memory().aot_load32(ctx.gpr[2] + static_cast<std::uint32_t>(0)));
    ctx.set_gpr(4, ctx.gpr[20] + 0u);
    ctx.set_gpr(5, ctx.gpr[29] + static_cast<std::uint32_t>(112));
    ctx.set_gpr(25, rt.memory().aot_load32(ctx.gpr[20] + static_cast<std::uint32_t>(0)));
    ctx.set_gpr(25, rt.memory().aot_load32(ctx.gpr[25] + static_cast<std::uint32_t>(136)));
    jump_target = ctx.gpr[25];
    ctx.set_gpr(31, 0x08A55420u);
    // nop
    ctx.pc = jump_target;
    if (rt.invoke_chained_call(ctx, &aot_mem) && ctx.pc == 0x08A55420u) goto L_08A55420;
    return;
L_08A55420:
    ctx.set_gpr(21, rt.memory().aot_load32(ctx.gpr[17] + static_cast<std::uint32_t>(52)));
    ctx.set_gpr(4, ctx.gpr[21] + 0u);
    ctx.set_gpr(5, ctx.gpr[20] + 0u);
    ctx.set_gpr(31, 0x08A55434u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0138_entry, 138u, 585u, 0x08A2E9A8u>(ctx, &aot_mem) && ctx.pc == 0x08A55434u) goto L_08A55434;
    return;
L_08A55434:
    ctx.set_gpr(4, ctx.gpr[17] + 0u);
    ctx.set_gpr(5, ctx.gpr[19] + 0u);
    ctx.set_gpr(31, 0x08A55444u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0153_entry, 153u, 317u, 0x08A69C98u>(ctx, &aot_mem) && ctx.pc == 0x08A55444u) goto L_08A55444;
    return;
L_08A55444:
    ctx.set_gpr(4, ctx.gpr[21] + 0u);
    ctx.set_gpr(5, ctx.gpr[20] + 0u);
    ctx.set_gpr(31, 0x08A55454u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0138_entry, 138u, 589u, 0x08A2EA40u>(ctx, &aot_mem) && ctx.pc == 0x08A55454u) goto L_08A55454;
    return;
L_08A55454:
    ctx.set_gpr(22, ctx.gpr[22] + static_cast<std::uint32_t>(1));
    goto L_08A55458;
L_08A55458:
    ctx.set_gpr(3, static_cast<std::int32_t>(ctx.gpr[22]) < static_cast<std::int32_t>(ctx.gpr[30]) ? 1u : 0u);
    { const bool branch_taken = ctx.gpr[3] != 0u;
    // nop
      if (branch_taken) {
          goto L_08A5535C;
      }
      goto L_08A55464;
    }
L_08A55464:
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
    ctx.set_gpr(29, ctx.gpr[29] + static_cast<std::uint32_t>(176));
    jump_target = ctx.gpr[31];
    // nop
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_08A55498:
    ctx.set_gpr(2, 0u + static_cast<std::uint32_t>(1));
    jump_target = ctx.gpr[31];
    // nop
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_08A554A4:
    ctx.set_gpr(29, ctx.gpr[29] + static_cast<std::uint32_t>(-16));
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(12), ctx.gpr[31]);
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(8), ctx.gpr[17]);
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(4), ctx.gpr[16]);
    ctx.set_gpr(17, ctx.gpr[4] + 0u);
    ctx.set_gpr(16, ctx.gpr[5] + 0u);
    ctx.set_gpr(31, 0x08A554C4u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0149_entry, 149u, 217u, 0x08A590A8u>(ctx, &aot_mem) && ctx.pc == 0x08A554C4u) goto L_08A554C4;
    return;
L_08A554C4:
    { const bool branch_taken = ctx.gpr[16] != 0u;
    // nop
      if (branch_taken) {
          goto L_08A554E8;
      }
      goto L_08A554CC;
    }
L_08A554CC:
    ctx.set_gpr(4, ctx.gpr[17] + 0u);
    ctx.set_gpr(5, 0u + static_cast<std::uint32_t>(1));
    ctx.set_gpr(6, ctx.gpr[5] + 0u);
    ctx.set_gpr(25, rt.memory().aot_load32(ctx.gpr[17] + static_cast<std::uint32_t>(0)));
    ctx.set_gpr(25, rt.memory().aot_load32(ctx.gpr[25] + static_cast<std::uint32_t>(112)));
    jump_target = ctx.gpr[25];
    ctx.set_gpr(31, 0x08A554E8u);
    // nop
    ctx.pc = jump_target;
    if (rt.invoke_chained_call(ctx, &aot_mem) && ctx.pc == 0x08A554E8u) goto L_08A554E8;
    return;
L_08A554E8:
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
L_08A55500:
    ctx.set_gpr(29, ctx.gpr[29] + static_cast<std::uint32_t>(-16));
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(12), ctx.gpr[31]);
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(8), ctx.gpr[18]);
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(4), ctx.gpr[17]);
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(0), ctx.gpr[16]);
    ctx.set_gpr(18, ctx.gpr[4] + 0u);
    ctx.set_gpr(3, rt.memory().aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(28)));
    ctx.set_gpr(16, rt.memory().aot_load32(ctx.gpr[3] + static_cast<std::uint32_t>(8)));
    ctx.set_gpr(17, 0u + 0u);
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_08A55554;
      }
      goto L_08A5552C;
    }
L_08A5552C:
    ctx.set_gpr(2, rt.memory().aot_load32(ctx.gpr[18] + static_cast<std::uint32_t>(28)));
    ctx.set_gpr(3, ctx.gpr[17] << 2u);
    ctx.set_gpr(2, rt.memory().aot_load32(ctx.gpr[2] + static_cast<std::uint32_t>(16)));
    ctx.set_gpr(2, ctx.gpr[2] + ctx.gpr[3]);
    ctx.set_gpr(4, rt.memory().aot_load32(ctx.gpr[2] + static_cast<std::uint32_t>(0)));
    ctx.set_gpr(25, rt.memory().aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(0)));
    ctx.set_gpr(25, rt.memory().aot_load32(ctx.gpr[25] + static_cast<std::uint32_t>(112)));
    jump_target = ctx.gpr[25];
    ctx.set_gpr(31, 0x08A55550u);
    // nop
    ctx.pc = jump_target;
    if (rt.invoke_chained_call(ctx, &aot_mem) && ctx.pc == 0x08A55550u) goto L_08A55550;
    return;
L_08A55550:
    ctx.set_gpr(17, ctx.gpr[17] + static_cast<std::uint32_t>(1));
    goto L_08A55554;
L_08A55554:
    ctx.set_gpr(3, ctx.gpr[17] < ctx.gpr[16] ? 1u : 0u);
    { const bool branch_taken = ctx.gpr[3] != 0u;
    // nop
      if (branch_taken) {
          goto L_08A5552C;
      }
      goto L_08A55560;
    }
L_08A55560:
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
L_08A5557C:
    ctx.set_gpr(29, ctx.gpr[29] + static_cast<std::uint32_t>(-64));
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(28), ctx.gpr[31]);
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(24), ctx.gpr[20]);
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(20), ctx.gpr[19]);
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(16), ctx.gpr[18]);
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(12), ctx.gpr[17]);
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(8), ctx.gpr[16]);
    ctx.set_gpr(20, ctx.gpr[4] + 0u);
    ctx.set_gpr(19, ctx.gpr[5] + 0u);
    ctx.set_gpr(3, rt.memory().aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(28)));
    ctx.set_gpr(16, rt.memory().aot_load32(ctx.gpr[3] + static_cast<std::uint32_t>(8)));
    ctx.set_gpr(18, 0u + 0u);
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_08A5563C;
      }
      goto L_08A555B4;
    }
L_08A555B4:
    ctx.set_gpr(2, rt.memory().aot_load32(ctx.gpr[20] + static_cast<std::uint32_t>(28)));
    ctx.set_gpr(3, ctx.gpr[18] << 2u);
    ctx.set_gpr(2, rt.memory().aot_load32(ctx.gpr[2] + static_cast<std::uint32_t>(16)));
    ctx.set_gpr(2, ctx.gpr[2] + ctx.gpr[3]);
    ctx.set_gpr(17, rt.memory().aot_load32(ctx.gpr[2] + static_cast<std::uint32_t>(0)));
    ctx.set_gpr(2, 2245u << 16u);
    ctx.set_gpr(2, rt.memory().aot_load32(ctx.gpr[2] + static_cast<std::uint32_t>(24940)));
    ctx.set_gpr(2, rt.memory().aot_load32(ctx.gpr[2] + static_cast<std::uint32_t>(8)));
    ctx.set_gpr(5, ctx.gpr[17] + ctx.gpr[2]);
    ctx.set_gpr(4, ctx.gpr[29] + static_cast<std::uint32_t>(52));
    ctx.set_gpr(6, ctx.gpr[19] + 0u);
    ctx.set_gpr(31, 0x08A555E8u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0127_entry, 127u, 271u, 0x08A03244u>(ctx, &aot_mem) && ctx.pc == 0x08A555E8u) goto L_08A555E8;
    return;
L_08A555E8:
    ctx.set_gpr(4, ctx.gpr[17] + 0u);
    ctx.set_gpr(5, ctx.gpr[29] + static_cast<std::uint32_t>(52));
    ctx.set_gpr(25, rt.memory().aot_load32(ctx.gpr[17] + static_cast<std::uint32_t>(0)));
    ctx.set_gpr(25, rt.memory().aot_load32(ctx.gpr[25] + static_cast<std::uint32_t>(148)));
    jump_target = ctx.gpr[25];
    ctx.set_gpr(31, 0x08A55600u);
    // nop
    ctx.pc = jump_target;
    if (rt.invoke_chained_call(ctx, &aot_mem) && ctx.pc == 0x08A55600u) goto L_08A55600;
    return;
L_08A55600:
    ctx.set_gpr(2, 2245u << 16u);
    ctx.set_gpr(2, rt.memory().aot_load32(ctx.gpr[2] + static_cast<std::uint32_t>(24956)));
    ctx.set_gpr(2, rt.memory().aot_load32(ctx.gpr[2] + static_cast<std::uint32_t>(8)));
    ctx.set_gpr(5, ctx.gpr[17] + ctx.gpr[2]);
    ctx.set_gpr(4, ctx.gpr[29] + static_cast<std::uint32_t>(40));
    ctx.set_gpr(6, ctx.gpr[19] + 0u);
    ctx.set_gpr(31, 0x08A55620u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0127_entry, 127u, 270u, 0x08A031C4u>(ctx, &aot_mem) && ctx.pc == 0x08A55620u) goto L_08A55620;
    return;
L_08A55620:
    ctx.set_gpr(4, ctx.gpr[17] + 0u);
    ctx.set_gpr(5, ctx.gpr[29] + static_cast<std::uint32_t>(40));
    ctx.set_gpr(25, rt.memory().aot_load32(ctx.gpr[17] + static_cast<std::uint32_t>(0)));
    ctx.set_gpr(25, rt.memory().aot_load32(ctx.gpr[25] + static_cast<std::uint32_t>(152)));
    jump_target = ctx.gpr[25];
    ctx.set_gpr(31, 0x08A55638u);
    // nop
    ctx.pc = jump_target;
    if (rt.invoke_chained_call(ctx, &aot_mem) && ctx.pc == 0x08A55638u) goto L_08A55638;
    return;
L_08A55638:
    ctx.set_gpr(18, ctx.gpr[18] + static_cast<std::uint32_t>(1));
    goto L_08A5563C;
L_08A5563C:
    ctx.set_gpr(3, ctx.gpr[18] < ctx.gpr[16] ? 1u : 0u);
    { const bool branch_taken = ctx.gpr[3] != 0u;
    // nop
      if (branch_taken) {
          goto L_08A555B4;
      }
      goto L_08A55648;
    }
L_08A55648:
    ctx.set_gpr(31, rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(28)));
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
L_08A5566C:
    ctx.set_gpr(29, ctx.gpr[29] + static_cast<std::uint32_t>(-16));
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(12), ctx.gpr[31]);
    ctx.set_gpr(31, 0x08A5567Cu);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0149_entry, 149u, 217u, 0x08A590A8u>(ctx, &aot_mem) && ctx.pc == 0x08A5567Cu) goto L_08A5567C;
    return;
L_08A5567C:
    ctx.set_gpr(31, rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(12)));
    ctx.set_gpr(29, ctx.gpr[29] + static_cast<std::uint32_t>(16));
    jump_target = ctx.gpr[31];
    // nop
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_08A5568C:
    ctx.set_gpr(29, ctx.gpr[29] + static_cast<std::uint32_t>(-16));
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(12), ctx.gpr[31]);
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(8), ctx.gpr[18]);
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(4), ctx.gpr[17]);
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(0), ctx.gpr[16]);
    ctx.set_gpr(18, ctx.gpr[4] + 0u);
    ctx.set_gpr(3, rt.memory().aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(32)));
    ctx.set_gpr(16, rt.memory().aot_load32(ctx.gpr[3] + static_cast<std::uint32_t>(8)));
    ctx.set_gpr(17, 0u + 0u);
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_08A556E0;
      }
      goto L_08A556B8;
    }
L_08A556B8:
    ctx.set_gpr(2, rt.memory().aot_load32(ctx.gpr[18] + static_cast<std::uint32_t>(32)));
    ctx.set_gpr(3, ctx.gpr[17] << 2u);
    ctx.set_gpr(2, rt.memory().aot_load32(ctx.gpr[2] + static_cast<std::uint32_t>(16)));
    ctx.set_gpr(2, ctx.gpr[2] + ctx.gpr[3]);
    ctx.set_gpr(4, rt.memory().aot_load32(ctx.gpr[2] + static_cast<std::uint32_t>(0)));
    ctx.set_gpr(25, rt.memory().aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(0)));
    ctx.set_gpr(25, rt.memory().aot_load32(ctx.gpr[25] + static_cast<std::uint32_t>(112)));
    jump_target = ctx.gpr[25];
    ctx.set_gpr(31, 0x08A556DCu);
    // nop
    ctx.pc = jump_target;
    if (rt.invoke_chained_call(ctx, &aot_mem) && ctx.pc == 0x08A556DCu) goto L_08A556DC;
    return;
L_08A556DC:
    ctx.set_gpr(17, ctx.gpr[17] + static_cast<std::uint32_t>(1));
    goto L_08A556E0;
L_08A556E0:
    ctx.set_gpr(3, ctx.gpr[17] < ctx.gpr[16] ? 1u : 0u);
    { const bool branch_taken = ctx.gpr[3] != 0u;
    // nop
      if (branch_taken) {
          goto L_08A556B8;
      }
      goto L_08A556EC;
    }
L_08A556EC:
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
L_08A55708:
    ctx.set_gpr(29, ctx.gpr[29] + static_cast<std::uint32_t>(-16));
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(12), ctx.gpr[31]);
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(8), ctx.gpr[16]);
    ctx.set_gpr(16, ctx.gpr[4] + 0u);
    { const bool branch_taken = ctx.gpr[16] == 0u;
    // nop
      if (branch_taken) {
          goto L_08A55744;
      }
      goto L_08A55720;
    }
L_08A55720:
    ctx.set_gpr(2, 2246u << 16u);
    ctx.set_gpr(5, rt.memory().aot_load32(ctx.gpr[2] + static_cast<std::uint32_t>(-24580)));
    ctx.set_gpr(31, 0x08A55730u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0080_entry, 80u, 857u, 0x08947F8Cu>(ctx, &aot_mem) && ctx.pc == 0x08A55730u) goto L_08A55730;
    return;
L_08A55730:
    { const bool branch_taken = ctx.gpr[2] == 0u;
    // nop
      if (branch_taken) {
          goto L_08A55744;
      }
      goto L_08A55738;
    }
L_08A55738:
    ctx.set_gpr(2, ctx.gpr[16] + 0u);
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_08A55748;
      }
      goto L_08A55744;
    }
L_08A55744:
    ctx.set_gpr(2, 0u + 0u);
    goto L_08A55748;
L_08A55748:
    { const bool branch_taken = ctx.gpr[2] == 0u;
    // nop
      if (branch_taken) {
          goto L_08A557A4;
      }
      goto L_08A55750;
    }
L_08A55750:
    ctx.set_gpr(5, rt.memory().aot_load32(ctx.gpr[2] + static_cast<std::uint32_t>(32)));
    ctx.set_gpr(4, rt.memory().aot_load32(ctx.gpr[5] + static_cast<std::uint32_t>(8)));
    ctx.set_gpr(6, 0u + 0u);
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_08A55798;
      }
      goto L_08A55764;
    }
L_08A55764:
    ctx.set_gpr(3, ctx.gpr[6] << 2u);
    ctx.set_gpr(2, rt.memory().aot_load32(ctx.gpr[5] + static_cast<std::uint32_t>(16)));
    ctx.set_gpr(2, ctx.gpr[2] + ctx.gpr[3]);
    ctx.set_gpr(3, rt.memory().aot_load32(ctx.gpr[2] + static_cast<std::uint32_t>(0)));
    ctx.set_gpr(2, rt.memory().aot_load8(ctx.gpr[3] + static_cast<std::uint32_t>(20)));
    { const bool branch_taken = ctx.gpr[2] == 0u;
    // nop
      if (branch_taken) {
          goto L_08A55794;
      }
      goto L_08A55780;
    }
L_08A55780:
    ctx.set_gpr(2, rt.memory().aot_load32(ctx.gpr[3] + static_cast<std::uint32_t>(16)));
    { const bool branch_taken = ctx.gpr[2] == 0u;
    // nop
      if (branch_taken) {
          goto L_08A55794;
      }
      goto L_08A5578C;
    }
L_08A5578C:
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_08A557F0;
      }
      goto L_08A55794;
    }
L_08A55794:
    ctx.set_gpr(6, ctx.gpr[6] + static_cast<std::uint32_t>(1));
    goto L_08A55798;
L_08A55798:
    ctx.set_gpr(2, static_cast<std::int32_t>(ctx.gpr[6]) < static_cast<std::int32_t>(ctx.gpr[4]) ? 1u : 0u);
    { const bool branch_taken = ctx.gpr[2] != 0u;
    // nop
      if (branch_taken) {
          goto L_08A55764;
      }
      goto L_08A557A4;
    }
L_08A557A4:
    ctx.set_gpr(4, ctx.gpr[16] + 0u);
    ctx.set_gpr(25, rt.memory().aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(0)));
    ctx.set_gpr(25, rt.memory().aot_load32(ctx.gpr[25] + static_cast<std::uint32_t>(92)));
    jump_target = ctx.gpr[25];
    ctx.set_gpr(31, 0x08A557B8u);
    // nop
    ctx.pc = jump_target;
    if (rt.invoke_chained_call(ctx, &aot_mem) && ctx.pc == 0x08A557B8u) goto L_08A557B8;
    return;
L_08A557B8:
    { const bool branch_taken = static_cast<std::int32_t>(ctx.gpr[2]) > 0;
    // nop
      if (branch_taken) {
          goto L_08A557CC;
      }
      goto L_08A557C0;
    }
L_08A557C0:
    ctx.set_gpr(2, 0u + 0u);
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_08A557F0;
      }
      goto L_08A557CC;
    }
L_08A557CC:
    ctx.set_gpr(4, ctx.gpr[16] + 0u);
    ctx.set_gpr(5, 0u + 0u);
    ctx.set_gpr(25, rt.memory().aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(0)));
    ctx.set_gpr(25, rt.memory().aot_load32(ctx.gpr[25] + static_cast<std::uint32_t>(96)));
    jump_target = ctx.gpr[25];
    ctx.set_gpr(31, 0x08A557E4u);
    // nop
    ctx.pc = jump_target;
    if (rt.invoke_chained_call(ctx, &aot_mem) && ctx.pc == 0x08A557E4u) goto L_08A557E4;
    return;
L_08A557E4:
    ctx.set_gpr(4, ctx.gpr[2] + 0u);
    ctx.set_gpr(31, 0x08A557F0u);
    // nop
    goto L_08A55708;
L_08A557F0:
    ctx.set_gpr(31, rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(12)));
    ctx.set_gpr(16, rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(8)));
    ctx.set_gpr(29, ctx.gpr[29] + static_cast<std::uint32_t>(16));
    jump_target = ctx.gpr[31];
    // nop
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_08A55804:
    ctx.set_gpr(29, ctx.gpr[29] + static_cast<std::uint32_t>(-32));
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(28), ctx.gpr[31]);
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(24), ctx.gpr[20]);
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(20), ctx.gpr[19]);
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(16), ctx.gpr[18]);
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(12), ctx.gpr[17]);
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(8), ctx.gpr[16]);
    ctx.set_gpr(20, ctx.gpr[4] + 0u);
    ctx.fpr[1] = std::bit_cast<float>(rt.memory().aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(44)));
    ctx.set_fpu_condition(((std::isnan(ctx.fpr[12]) || std::isnan(ctx.fpr[1])) || ctx.fpr[12] < ctx.fpr[1]));
    // nop
    { const bool branch_taken = ctx.fpu_condition();
    // nop
      if (branch_taken) {
          goto L_08A55858;
      }
      goto L_08A55838;
    }
L_08A55838:
    ctx.fpr[0] = std::bit_cast<float>(rt.memory().aot_load32(ctx.gpr[20] + static_cast<std::uint32_t>(48)));
    ctx.set_fpu_condition((ctx.fpr[12] < ctx.fpr[0]));
    // nop
    { const bool branch_taken = !ctx.fpu_condition();
    // nop
      if (branch_taken) {
          goto L_08A55858;
      }
      goto L_08A5584C;
    }
L_08A5584C:
    ctx.set_gpr(2, rt.memory().aot_load32(ctx.gpr[20] + static_cast<std::uint32_t>(36)));
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_08A55A5C;
      }
      goto L_08A55858;
    }
L_08A55858:
    ctx.set_gpr(3, rt.memory().aot_load32(ctx.gpr[20] + static_cast<std::uint32_t>(32)));
    ctx.set_gpr(17, rt.memory().aot_load32(ctx.gpr[3] + static_cast<std::uint32_t>(8)));
    ctx.set_gpr(2, rt.memory().aot_load32(ctx.gpr[20] + static_cast<std::uint32_t>(28)));
    { const bool branch_taken = ctx.gpr[2] == 0u;
    // nop
      if (branch_taken) {
          goto L_08A55878;
      }
      goto L_08A5586C;
    }
L_08A5586C:
    ctx.set_gpr(4, rt.memory().aot_load32(ctx.gpr[2] + static_cast<std::uint32_t>(8)));
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_08A5587C;
      }
      goto L_08A55878;
    }
L_08A55878:
    ctx.set_gpr(4, 0u + 0u);
    goto L_08A5587C;
L_08A5587C:
    ctx.set_gpr(16, rt.memory().aot_load32(ctx.gpr[3] + static_cast<std::uint32_t>(16)));
    ctx.set_fpu_condition((ctx.fpr[12] < ctx.fpr[1]));
    // nop
    { const bool branch_taken = !ctx.fpu_condition();
    // nop
      if (branch_taken) {
          goto L_08A558D0;
      }
      goto L_08A55890;
    }
L_08A55890:
    ctx.set_gpr(19, rt.memory().aot_load32(ctx.gpr[20] + static_cast<std::uint32_t>(40)));
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_08A558A0;
      }
      goto L_08A5589C;
    }
L_08A5589C:
    ctx.set_gpr(19, ctx.gpr[19] + static_cast<std::uint32_t>(-1));
    goto L_08A558A0;
L_08A558A0:
    { const bool branch_taken = static_cast<std::int32_t>(ctx.gpr[19]) < 0;
    // nop
      if (branch_taken) {
          goto L_08A558C4;
      }
      goto L_08A558A8;
    }
L_08A558A8:
    ctx.set_gpr(2, ctx.gpr[19] << 2u);
    ctx.set_gpr(2, ctx.gpr[16] + ctx.gpr[2]);
    ctx.fpr[0] = std::bit_cast<float>(rt.memory().aot_load32(ctx.gpr[2] + static_cast<std::uint32_t>(0)));
    ctx.set_fpu_condition((ctx.fpr[12] < ctx.fpr[0]));
    // nop
    { const bool branch_taken = ctx.fpu_condition();
    // nop
      if (branch_taken) {
          goto L_08A5589C;
      }
      goto L_08A558C4;
    }
L_08A558C4:
    ctx.set_gpr(18, ctx.gpr[19] + static_cast<std::uint32_t>(1));
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_08A55910;
      }
      goto L_08A558D0;
    }
L_08A558D0:
    ctx.set_gpr(2, rt.memory().aot_load32(ctx.gpr[20] + static_cast<std::uint32_t>(40)));
    ctx.set_gpr(18, ctx.gpr[2] + static_cast<std::uint32_t>(2));
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_08A558E4;
      }
      goto L_08A558E0;
    }
L_08A558E0:
    ctx.set_gpr(18, ctx.gpr[18] + static_cast<std::uint32_t>(1));
    goto L_08A558E4;
L_08A558E4:
    ctx.set_gpr(1, static_cast<std::int32_t>(ctx.gpr[18]) < static_cast<std::int32_t>(ctx.gpr[17]) ? 1u : 0u);
    { const bool branch_taken = ctx.gpr[1] == 0u;
    // nop
      if (branch_taken) {
          goto L_08A5590C;
      }
      goto L_08A558F0;
    }
L_08A558F0:
    ctx.set_gpr(2, ctx.gpr[18] << 2u);
    ctx.set_gpr(2, ctx.gpr[16] + ctx.gpr[2]);
    ctx.fpr[0] = std::bit_cast<float>(rt.memory().aot_load32(ctx.gpr[2] + static_cast<std::uint32_t>(0)));
    ctx.set_fpu_condition(((std::isnan(ctx.fpr[12]) || std::isnan(ctx.fpr[0])) || ctx.fpr[12] < ctx.fpr[0]));
    // nop
    { const bool branch_taken = !ctx.fpu_condition();
    // nop
      if (branch_taken) {
          goto L_08A558E0;
      }
      goto L_08A5590C;
    }
L_08A5590C:
    ctx.set_gpr(19, ctx.gpr[18] + static_cast<std::uint32_t>(-1));
    goto L_08A55910;
L_08A55910:
    rt.memory().aot_store32(ctx.gpr[20] + static_cast<std::uint32_t>(40), ctx.gpr[19]);
    { const bool branch_taken = static_cast<std::int32_t>(ctx.gpr[19]) < 0;
    // nop
      if (branch_taken) {
          goto L_08A55974;
      }
      goto L_08A5591C;
    }
L_08A5591C:
    ctx.set_gpr(3, ctx.gpr[19] << 2u);
    ctx.set_gpr(2, ctx.gpr[16] + ctx.gpr[3]);
    ctx.fpr[0] = std::bit_cast<float>(rt.memory().aot_load32(ctx.gpr[2] + static_cast<std::uint32_t>(0)));
    rt.memory().aot_store32(ctx.gpr[20] + static_cast<std::uint32_t>(44), std::bit_cast<std::uint32_t>(ctx.fpr[0]));
    ctx.set_gpr(1, static_cast<std::int32_t>(ctx.gpr[19]) < static_cast<std::int32_t>(ctx.gpr[4]) ? 1u : 0u);
    { const bool branch_taken = ctx.gpr[1] == 0u;
    // nop
      if (branch_taken) {
          goto L_08A5595C;
      }
      goto L_08A55938;
    }
L_08A55938:
    ctx.set_gpr(2, rt.memory().aot_load32(ctx.gpr[20] + static_cast<std::uint32_t>(28)));
    ctx.set_gpr(2, rt.memory().aot_load32(ctx.gpr[2] + static_cast<std::uint32_t>(16)));
    ctx.set_gpr(2, ctx.gpr[2] + ctx.gpr[3]);
    ctx.set_gpr(5, rt.memory().aot_load32(ctx.gpr[2] + static_cast<std::uint32_t>(0)));
    ctx.set_gpr(4, ctx.gpr[20] + static_cast<std::uint32_t>(36));
    ctx.set_gpr(31, 0x08A55954u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0085_entry, 85u, 61u, 0x089584C4u>(ctx, &aot_mem) && ctx.pc == 0x08A55954u) goto L_08A55954;
    return;
L_08A55954:
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_08A55988;
      }
      goto L_08A5595C;
    }
L_08A5595C:
    ctx.set_gpr(4, ctx.gpr[20] + static_cast<std::uint32_t>(36));
    ctx.set_gpr(5, 0u + 0u);
    ctx.set_gpr(31, 0x08A5596Cu);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0085_entry, 85u, 61u, 0x089584C4u>(ctx, &aot_mem) && ctx.pc == 0x08A5596Cu) goto L_08A5596C;
    return;
L_08A5596C:
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_08A55988;
      }
      goto L_08A55974;
    }
L_08A55974:
    rt.memory().aot_store32(ctx.gpr[20] + static_cast<std::uint32_t>(44), 0u);
    ctx.set_gpr(4, ctx.gpr[20] + static_cast<std::uint32_t>(36));
    ctx.set_gpr(5, 0u + 0u);
    ctx.set_gpr(31, 0x08A55988u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0085_entry, 85u, 61u, 0x089584C4u>(ctx, &aot_mem) && ctx.pc == 0x08A55988u) goto L_08A55988;
    return;
L_08A55988:
    ctx.set_gpr(1, static_cast<std::int32_t>(ctx.gpr[18]) < static_cast<std::int32_t>(ctx.gpr[17]) ? 1u : 0u);
    { const bool branch_taken = ctx.gpr[1] == 0u;
    // nop
      if (branch_taken) {
          goto L_08A559AC;
      }
      goto L_08A55994;
    }
L_08A55994:
    ctx.set_gpr(2, ctx.gpr[18] << 2u);
    ctx.set_gpr(2, ctx.gpr[16] + ctx.gpr[2]);
    ctx.fpr[0] = std::bit_cast<float>(rt.memory().aot_load32(ctx.gpr[2] + static_cast<std::uint32_t>(0)));
    rt.memory().aot_store32(ctx.gpr[20] + static_cast<std::uint32_t>(48), std::bit_cast<std::uint32_t>(ctx.fpr[0]));
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_08A559B4;
      }
      goto L_08A559AC;
    }
L_08A559AC:
    ctx.fpr[0] = std::bit_cast<float>(rt.memory().aot_load32(ctx.gpr[28] + static_cast<std::uint32_t>(-32512)));
    rt.memory().aot_store32(ctx.gpr[20] + static_cast<std::uint32_t>(48), std::bit_cast<std::uint32_t>(ctx.fpr[0]));
    goto L_08A559B4;
L_08A559B4:
    ctx.set_gpr(2, rt.memory().aot_load32(ctx.gpr[20] + static_cast<std::uint32_t>(64)));
    { const bool branch_taken = ctx.gpr[2] == 0u;
    // nop
      if (branch_taken) {
          goto L_08A55A58;
      }
      goto L_08A559C0;
    }
L_08A559C0:
    ctx.set_gpr(4, rt.memory().aot_load32(ctx.gpr[2] + static_cast<std::uint32_t>(8)));
    ctx.set_gpr(1, static_cast<std::int32_t>(ctx.gpr[19]) < static_cast<std::int32_t>(ctx.gpr[4]) ? 1u : 0u);
    { const bool branch_taken = ctx.gpr[1] == 0u;
    // nop
      if (branch_taken) {
          goto L_08A55A10;
      }
      goto L_08A559D0;
    }
L_08A559D0:
    { const bool branch_taken = static_cast<std::int32_t>(ctx.gpr[19]) < 0;
    // nop
      if (branch_taken) {
          goto L_08A55A10;
      }
      goto L_08A559D8;
    }
L_08A559D8:
    ctx.set_gpr(3, ctx.gpr[19] << 2u);
    ctx.set_gpr(2, rt.memory().aot_load32(ctx.gpr[2] + static_cast<std::uint32_t>(16)));
    ctx.set_gpr(2, ctx.gpr[2] + ctx.gpr[3]);
    ctx.fpr[4] = std::bit_cast<float>(rt.memory().aot_load32(ctx.gpr[2] + static_cast<std::uint32_t>(0)));
    ctx.fpr[3] = std::bit_cast<float>(rt.memory().aot_load32(ctx.gpr[20] + static_cast<std::uint32_t>(44)));
    ctx.fpr[2] = std::sqrt(ctx.fpr[3]);
    { const float fs = ctx.fpr[4]; const float ft = ctx.fpr[4]; if ((std::isinf(fs) && ft == 0.0f) || (std::isinf(ft) && fs == 0.0f)) ctx.set_fpr_bits(1, 0x7FC00000u); else ctx.fpr[1] = fs * ft; }
    ctx.set_gpr(2, 16384u << 16u);
    ctx.fpr[0] = std::bit_cast<float>(ctx.gpr[2]);
    { const float fs = ctx.fpr[0]; const float ft = ctx.fpr[4]; if ((std::isinf(fs) && ft == 0.0f) || (std::isinf(ft) && fs == 0.0f)) ctx.set_fpr_bits(0, 0x7FC00000u); else ctx.fpr[0] = fs * ft; }
    { const float fs = ctx.fpr[0]; const float ft = ctx.fpr[2]; if ((std::isinf(fs) && ft == 0.0f) || (std::isinf(ft) && fs == 0.0f)) ctx.set_fpr_bits(0, 0x7FC00000u); else ctx.fpr[0] = fs * ft; }
    ctx.fpr[0] = ctx.fpr[1] - ctx.fpr[0];
    ctx.fpr[0] = ctx.fpr[3] + ctx.fpr[0];
    rt.memory().aot_store32(ctx.gpr[20] + static_cast<std::uint32_t>(44), std::bit_cast<std::uint32_t>(ctx.fpr[0]));
    goto L_08A55A10;
L_08A55A10:
    ctx.set_gpr(1, static_cast<std::int32_t>(ctx.gpr[18]) < static_cast<std::int32_t>(ctx.gpr[4]) ? 1u : 0u);
    { const bool branch_taken = ctx.gpr[1] == 0u;
    // nop
      if (branch_taken) {
          goto L_08A55A58;
      }
      goto L_08A55A1C;
    }
L_08A55A1C:
    ctx.set_gpr(2, rt.memory().aot_load32(ctx.gpr[20] + static_cast<std::uint32_t>(64)));
    ctx.set_gpr(3, ctx.gpr[18] << 2u);
    ctx.set_gpr(2, rt.memory().aot_load32(ctx.gpr[2] + static_cast<std::uint32_t>(16)));
    ctx.set_gpr(2, ctx.gpr[2] + ctx.gpr[3]);
    ctx.fpr[4] = std::bit_cast<float>(rt.memory().aot_load32(ctx.gpr[2] + static_cast<std::uint32_t>(0)));
    ctx.fpr[3] = std::bit_cast<float>(rt.memory().aot_load32(ctx.gpr[20] + static_cast<std::uint32_t>(48)));
    ctx.fpr[2] = std::sqrt(ctx.fpr[3]);
    { const float fs = ctx.fpr[4]; const float ft = ctx.fpr[4]; if ((std::isinf(fs) && ft == 0.0f) || (std::isinf(ft) && fs == 0.0f)) ctx.set_fpr_bits(1, 0x7FC00000u); else ctx.fpr[1] = fs * ft; }
    ctx.set_gpr(2, 16384u << 16u);
    ctx.fpr[0] = std::bit_cast<float>(ctx.gpr[2]);
    { const float fs = ctx.fpr[0]; const float ft = ctx.fpr[4]; if ((std::isinf(fs) && ft == 0.0f) || (std::isinf(ft) && fs == 0.0f)) ctx.set_fpr_bits(0, 0x7FC00000u); else ctx.fpr[0] = fs * ft; }
    { const float fs = ctx.fpr[0]; const float ft = ctx.fpr[2]; if ((std::isinf(fs) && ft == 0.0f) || (std::isinf(ft) && fs == 0.0f)) ctx.set_fpr_bits(0, 0x7FC00000u); else ctx.fpr[0] = fs * ft; }
    ctx.fpr[0] = ctx.fpr[1] + ctx.fpr[0];
    ctx.fpr[0] = ctx.fpr[3] + ctx.fpr[0];
    rt.memory().aot_store32(ctx.gpr[20] + static_cast<std::uint32_t>(48), std::bit_cast<std::uint32_t>(ctx.fpr[0]));
    goto L_08A55A58;
L_08A55A58:
    ctx.set_gpr(2, rt.memory().aot_load32(ctx.gpr[20] + static_cast<std::uint32_t>(36)));
    goto L_08A55A5C;
L_08A55A5C:
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
L_08A55A80:
    ctx.set_gpr(29, ctx.gpr[29] + static_cast<std::uint32_t>(-16));
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(12), ctx.gpr[31]);
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(8), ctx.gpr[16]);
    ctx.set_gpr(16, ctx.gpr[4] + 0u);
    ctx.set_gpr(4, ctx.gpr[16] + static_cast<std::uint32_t>(36));
    ctx.set_gpr(5, 0u + 0u);
    ctx.set_gpr(31, 0x08A55AA0u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0085_entry, 85u, 61u, 0x089584C4u>(ctx, &aot_mem) && ctx.pc == 0x08A55AA0u) goto L_08A55AA0;
    return;
L_08A55AA0:
    ctx.set_gpr(3, 0u + static_cast<std::uint32_t>(-1));
    rt.memory().aot_store32(ctx.gpr[16] + static_cast<std::uint32_t>(40), ctx.gpr[3]);
    rt.memory().aot_store32(ctx.gpr[16] + static_cast<std::uint32_t>(44), 0u);
    rt.memory().aot_store32(ctx.gpr[16] + static_cast<std::uint32_t>(48), 0u);
    ctx.set_gpr(31, rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(12)));
    ctx.set_gpr(16, rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(8)));
    ctx.set_gpr(29, ctx.gpr[29] + static_cast<std::uint32_t>(16));
    jump_target = ctx.gpr[31];
    // nop
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_08A55AC4:
    ctx.set_gpr(29, ctx.gpr[29] + static_cast<std::uint32_t>(-16));
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(12), ctx.gpr[31]);
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(8), ctx.gpr[16]);
    ctx.set_gpr(16, ctx.gpr[4] + 0u);
    ctx.set_gpr(31, 0x08A55ADCu);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0145_entry, 145u, 180u, 0x08A48ED8u>(ctx, &aot_mem) && ctx.pc == 0x08A55ADCu) goto L_08A55ADC;
    return;
L_08A55ADC:
    ctx.set_gpr(4, ctx.gpr[16] + 0u);
    ctx.set_gpr(25, rt.memory().aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(0)));
    ctx.set_gpr(25, rt.memory().aot_load32(ctx.gpr[25] + static_cast<std::uint32_t>(124)));
    jump_target = ctx.gpr[25];
    ctx.set_gpr(31, 0x08A55AF0u);
    // nop
    ctx.pc = jump_target;
    if (rt.invoke_chained_call(ctx, &aot_mem) && ctx.pc == 0x08A55AF0u) goto L_08A55AF0;
    return;
L_08A55AF0:
    ctx.set_gpr(31, rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(12)));
    ctx.set_gpr(16, rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(8)));
    ctx.set_gpr(29, ctx.gpr[29] + static_cast<std::uint32_t>(16));
    jump_target = ctx.gpr[31];
    // nop
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_08A55B04:
    ctx.set_gpr(29, ctx.gpr[29] + static_cast<std::uint32_t>(-16));
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(12), ctx.gpr[31]);
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(8), ctx.gpr[17]);
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(4), ctx.gpr[16]);
    ctx.set_gpr(17, ctx.gpr[4] + 0u);
    ctx.set_gpr(16, ctx.gpr[5] + 0u);
    ctx.set_gpr(31, 0x08A55B24u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0145_entry, 145u, 301u, 0x08A496BCu>(ctx, &aot_mem) && ctx.pc == 0x08A55B24u) goto L_08A55B24;
    return;
L_08A55B24:
    ctx.set_gpr(4, ctx.gpr[17] + static_cast<std::uint32_t>(52));
    ctx.set_gpr(5, ctx.gpr[4] + 0u);
    ctx.set_gpr(6, ctx.gpr[16] + 0u);
    ctx.set_gpr(31, 0x08A55B38u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0127_entry, 127u, 271u, 0x08A03244u>(ctx, &aot_mem) && ctx.pc == 0x08A55B38u) goto L_08A55B38;
    return;
L_08A55B38:
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
L_08A55B50:
    ctx.set_gpr(29, ctx.gpr[29] + static_cast<std::uint32_t>(-32));
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(12), ctx.gpr[31]);
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(8), ctx.gpr[17]);
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(4), ctx.gpr[16]);
    ctx.set_gpr(17, ctx.gpr[4] + 0u);
    ctx.set_gpr(16, ctx.gpr[6] + 0u);
    rt.memory().aot_store32(ctx.gpr[4] + static_cast<std::uint32_t>(40), ctx.gpr[5]);
    rt.memory().aot_store32(ctx.gpr[4] + static_cast<std::uint32_t>(44), ctx.gpr[16]);
    rt.memory().aot_store32(ctx.gpr[4] + static_cast<std::uint32_t>(48), ctx.gpr[7]);
    ctx.set_gpr(3, rt.memory().aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(40)));
    ctx.set_gpr(2, 0u + static_cast<std::uint32_t>(4));
    { const bool branch_taken = ctx.gpr[3] == ctx.gpr[2];
    // nop
      if (branch_taken) {
          goto L_08A55B9C;
      }
      goto L_08A55B84;
    }
L_08A55B84:
    ctx.set_gpr(2, 0u + static_cast<std::uint32_t>(5));
    { const bool branch_taken = ctx.gpr[3] == ctx.gpr[2];
    // nop
      if (branch_taken) {
          goto L_08A55B9C;
      }
      goto L_08A55B90;
    }
L_08A55B90:
    ctx.set_gpr(2, 0u + static_cast<std::uint32_t>(2));
    { const bool branch_taken = ctx.gpr[3] != ctx.gpr[2];
    // nop
      if (branch_taken) {
          goto L_08A55C08;
      }
      goto L_08A55B9C;
    }
L_08A55B9C:
    ctx.set_gpr(2, rt.memory().aot_load32(ctx.gpr[17] + static_cast<std::uint32_t>(56)));
    { const bool branch_taken = ctx.gpr[2] != 0u;
    // nop
      if (branch_taken) {
          goto L_08A55BE8;
      }
      goto L_08A55BA8;
    }
L_08A55BA8:
    ctx.set_gpr(4, ctx.gpr[17] + 0u);
    ctx.set_gpr(31, 0x08A55BB4u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0081_entry, 81u, 41u, 0x0894835Cu>(ctx, &aot_mem) && ctx.pc == 0x08A55BB4u) goto L_08A55BB4;
    return;
L_08A55BB4:
    ctx.set_gpr(4, ctx.gpr[2] + 0u);
    ctx.set_gpr(31, 0x08A55BC0u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0098_entry, 98u, 705u, 0x0898FEA0u>(ctx, &aot_mem) && ctx.pc == 0x08A55BC0u) goto L_08A55BC0;
    return;
L_08A55BC0:
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(28), ctx.gpr[2]);
    ctx.set_gpr(4, ctx.gpr[17] + static_cast<std::uint32_t>(56));
    ctx.set_gpr(5, ctx.gpr[2] + 0u);
    ctx.set_gpr(31, 0x08A55BD4u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0085_entry, 85u, 61u, 0x089584C4u>(ctx, &aot_mem) && ctx.pc == 0x08A55BD4u) goto L_08A55BD4;
    return;
L_08A55BD4:
    ctx.set_gpr(4, rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(28)));
    { const bool branch_taken = ctx.gpr[4] == 0u;
    // nop
      if (branch_taken) {
          goto L_08A55BE8;
      }
      goto L_08A55BE0;
    }
L_08A55BE0:
    ctx.set_gpr(31, 0x08A55BE8u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0014_entry, 14u, 257u, 0x0883D454u>(ctx, &aot_mem) && ctx.pc == 0x08A55BE8u) goto L_08A55BE8;
    return;
L_08A55BE8:
    ctx.set_gpr(4, rt.memory().aot_load32(ctx.gpr[17] + static_cast<std::uint32_t>(56)));
    ctx.set_gpr(5, ctx.gpr[16] + 0u);
    ctx.set_gpr(6, 0u + static_cast<std::uint32_t>(32));
    ctx.set_gpr(7, 0u + 0u);
    ctx.set_gpr(25, rt.memory().aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(0)));
    ctx.set_gpr(25, rt.memory().aot_load32(ctx.gpr[25] + static_cast<std::uint32_t>(92)));
    jump_target = ctx.gpr[25];
    ctx.set_gpr(31, 0x08A55C08u);
    // nop
    ctx.pc = jump_target;
    if (rt.invoke_chained_call(ctx, &aot_mem) && ctx.pc == 0x08A55C08u) goto L_08A55C08;
    return;
L_08A55C08:
    ctx.set_gpr(2, 0u + static_cast<std::uint32_t>(1));
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
L_08A55C24:
    ctx.set_gpr(29, ctx.gpr[29] + static_cast<std::uint32_t>(-48));
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(28), ctx.gpr[31]);
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(24), ctx.gpr[19]);
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(20), ctx.gpr[18]);
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(16), ctx.gpr[17]);
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(12), ctx.gpr[16]);
    ctx.set_gpr(19, ctx.gpr[4] + 0u);
    ctx.set_gpr(18, ctx.gpr[5] + 0u);
    ctx.set_gpr(17, 0u + 0u);
    ctx.set_gpr(2, rt.memory().aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(52)));
    { const bool branch_taken = ctx.gpr[2] != 0u;
    // nop
      if (branch_taken) {
          goto L_08A55E88;
      }
      goto L_08A55C54;
    }
L_08A55C54:
    ctx.set_gpr(2, rt.memory().aot_load32(ctx.gpr[19] + static_cast<std::uint32_t>(48)));
    ctx.set_gpr(16, rt.memory().aot_load32(ctx.gpr[2] + static_cast<std::uint32_t>(20)));
    ctx.set_gpr(31, 0x08A55C64u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0081_entry, 81u, 41u, 0x0894835Cu>(ctx, &aot_mem) && ctx.pc == 0x08A55C64u) goto L_08A55C64;
    return;
L_08A55C64:
    ctx.set_gpr(4, ctx.gpr[2] + 0u);
    ctx.set_gpr(31, 0x08A55C70u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0061_entry, 61u, 38u, 0x088F8384u>(ctx, &aot_mem) && ctx.pc == 0x08A55C70u) goto L_08A55C70;
    return;
L_08A55C70:
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(44), ctx.gpr[2]);
    ctx.set_gpr(4, ctx.gpr[19] + static_cast<std::uint32_t>(52));
    ctx.set_gpr(5, ctx.gpr[2] + 0u);
    ctx.set_gpr(31, 0x08A55C84u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0085_entry, 85u, 61u, 0x089584C4u>(ctx, &aot_mem) && ctx.pc == 0x08A55C84u) goto L_08A55C84;
    return;
L_08A55C84:
    ctx.set_gpr(4, rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(44)));
    { const bool branch_taken = ctx.gpr[4] == 0u;
    // nop
      if (branch_taken) {
          goto L_08A55C98;
      }
      goto L_08A55C90;
    }
L_08A55C90:
    ctx.set_gpr(31, 0x08A55C98u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0014_entry, 14u, 257u, 0x0883D454u>(ctx, &aot_mem) && ctx.pc == 0x08A55C98u) goto L_08A55C98;
    return;
L_08A55C98:
    ctx.set_gpr(4, ctx.gpr[19] + 0u);
    ctx.set_gpr(31, 0x08A55CA4u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0081_entry, 81u, 41u, 0x0894835Cu>(ctx, &aot_mem) && ctx.pc == 0x08A55CA4u) goto L_08A55CA4;
    return;
L_08A55CA4:
    ctx.set_gpr(4, ctx.gpr[2] + 0u);
    ctx.set_gpr(31, 0x08A55CB0u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0061_entry, 61u, 38u, 0x088F8384u>(ctx, &aot_mem) && ctx.pc == 0x08A55CB0u) goto L_08A55CB0;
    return;
L_08A55CB0:
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(40), ctx.gpr[2]);
    ctx.set_gpr(4, ctx.gpr[19] + static_cast<std::uint32_t>(56));
    ctx.set_gpr(5, ctx.gpr[2] + 0u);
    ctx.set_gpr(31, 0x08A55CC4u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0085_entry, 85u, 61u, 0x089584C4u>(ctx, &aot_mem) && ctx.pc == 0x08A55CC4u) goto L_08A55CC4;
    return;
L_08A55CC4:
    ctx.set_gpr(4, rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(40)));
    { const bool branch_taken = ctx.gpr[4] == 0u;
    // nop
      if (branch_taken) {
          goto L_08A55CD8;
      }
      goto L_08A55CD0;
    }
L_08A55CD0:
    ctx.set_gpr(31, 0x08A55CD8u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0014_entry, 14u, 257u, 0x0883D454u>(ctx, &aot_mem) && ctx.pc == 0x08A55CD8u) goto L_08A55CD8;
    return;
L_08A55CD8:
    ctx.set_gpr(4, ctx.gpr[19] + 0u);
    ctx.set_gpr(31, 0x08A55CE4u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0081_entry, 81u, 41u, 0x0894835Cu>(ctx, &aot_mem) && ctx.pc == 0x08A55CE4u) goto L_08A55CE4;
    return;
L_08A55CE4:
    ctx.set_gpr(4, ctx.gpr[2] + 0u);
    ctx.set_gpr(31, 0x08A55CF0u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0060_entry, 60u, 747u, 0x088F7F7Cu>(ctx, &aot_mem) && ctx.pc == 0x08A55CF0u) goto L_08A55CF0;
    return;
L_08A55CF0:
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(36), ctx.gpr[2]);
    ctx.set_gpr(4, ctx.gpr[19] + static_cast<std::uint32_t>(60));
    ctx.set_gpr(5, ctx.gpr[2] + 0u);
    ctx.set_gpr(31, 0x08A55D04u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0085_entry, 85u, 61u, 0x089584C4u>(ctx, &aot_mem) && ctx.pc == 0x08A55D04u) goto L_08A55D04;
    return;
L_08A55D04:
    ctx.set_gpr(4, rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(36)));
    { const bool branch_taken = ctx.gpr[4] == 0u;
    // nop
      if (branch_taken) {
          goto L_08A55D18;
      }
      goto L_08A55D10;
    }
L_08A55D10:
    ctx.set_gpr(31, 0x08A55D18u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0014_entry, 14u, 257u, 0x0883D454u>(ctx, &aot_mem) && ctx.pc == 0x08A55D18u) goto L_08A55D18;
    return;
L_08A55D18:
    ctx.set_gpr(4, rt.memory().aot_load32(ctx.gpr[19] + static_cast<std::uint32_t>(52)));
    { const bool branch_taken = static_cast<std::int32_t>(ctx.gpr[16]) < 0;
    // nop
      if (branch_taken) {
          goto L_08A55D50;
      }
      goto L_08A55D24;
    }
L_08A55D24:
    ctx.set_gpr(2, rt.memory().aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(12)));
    ctx.set_gpr(1, static_cast<std::int32_t>(ctx.gpr[2]) < static_cast<std::int32_t>(ctx.gpr[16]) ? 1u : 0u);
    { const bool branch_taken = ctx.gpr[1] != 0u;
    // nop
      if (branch_taken) {
          goto L_08A55D40;
      }
      goto L_08A55D34;
    }
L_08A55D34:
    rt.memory().aot_store32(ctx.gpr[4] + static_cast<std::uint32_t>(8), ctx.gpr[16]);
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_08A55D50;
      }
      goto L_08A55D40;
    }
L_08A55D40:
    ctx.set_gpr(5, ctx.gpr[16] + 0u);
    ctx.set_gpr(6, 0u + static_cast<std::uint32_t>(4));
    ctx.set_gpr(31, 0x08A55D50u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0066_entry, 66u, 795u, 0x0890FB1Cu>(ctx, &aot_mem) && ctx.pc == 0x08A55D50u) goto L_08A55D50;
    return;
L_08A55D50:
    ctx.set_gpr(4, rt.memory().aot_load32(ctx.gpr[19] + static_cast<std::uint32_t>(56)));
    { const bool branch_taken = static_cast<std::int32_t>(ctx.gpr[16]) < 0;
    // nop
      if (branch_taken) {
          goto L_08A55D88;
      }
      goto L_08A55D5C;
    }
L_08A55D5C:
    ctx.set_gpr(2, rt.memory().aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(12)));
    ctx.set_gpr(1, static_cast<std::int32_t>(ctx.gpr[2]) < static_cast<std::int32_t>(ctx.gpr[16]) ? 1u : 0u);
    { const bool branch_taken = ctx.gpr[1] != 0u;
    // nop
      if (branch_taken) {
          goto L_08A55D78;
      }
      goto L_08A55D6C;
    }
L_08A55D6C:
    rt.memory().aot_store32(ctx.gpr[4] + static_cast<std::uint32_t>(8), ctx.gpr[16]);
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_08A55D88;
      }
      goto L_08A55D78;
    }
L_08A55D78:
    ctx.set_gpr(5, ctx.gpr[16] + 0u);
    ctx.set_gpr(6, 0u + static_cast<std::uint32_t>(4));
    ctx.set_gpr(31, 0x08A55D88u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0066_entry, 66u, 795u, 0x0890FB1Cu>(ctx, &aot_mem) && ctx.pc == 0x08A55D88u) goto L_08A55D88;
    return;
L_08A55D88:
    ctx.set_gpr(4, rt.memory().aot_load32(ctx.gpr[19] + static_cast<std::uint32_t>(60)));
    { const bool branch_taken = static_cast<std::int32_t>(ctx.gpr[16]) < 0;
    // nop
      if (branch_taken) {
          goto L_08A55DC0;
      }
      goto L_08A55D94;
    }
L_08A55D94:
    ctx.set_gpr(2, rt.memory().aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(12)));
    ctx.set_gpr(1, static_cast<std::int32_t>(ctx.gpr[2]) < static_cast<std::int32_t>(ctx.gpr[16]) ? 1u : 0u);
    { const bool branch_taken = ctx.gpr[1] != 0u;
    // nop
      if (branch_taken) {
          goto L_08A55DB0;
      }
      goto L_08A55DA4;
    }
L_08A55DA4:
    rt.memory().aot_store32(ctx.gpr[4] + static_cast<std::uint32_t>(8), ctx.gpr[16]);
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_08A55DC0;
      }
      goto L_08A55DB0;
    }
L_08A55DB0:
    ctx.set_gpr(5, ctx.gpr[16] + 0u);
    ctx.set_gpr(6, 0u + static_cast<std::uint32_t>(1));
    ctx.set_gpr(31, 0x08A55DC0u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0066_entry, 66u, 795u, 0x0890FB1Cu>(ctx, &aot_mem) && ctx.pc == 0x08A55DC0u) goto L_08A55DC0;
    return;
L_08A55DC0:
    ctx.set_gpr(2, 0u + 0u);
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_08A55E7C;
      }
      goto L_08A55DCC;
    }
L_08A55DCC:
    ctx.set_gpr(5, rt.memory().aot_load32(ctx.gpr[19] + static_cast<std::uint32_t>(52)));
    ctx.set_gpr(3, rt.memory().aot_load32(ctx.gpr[5] + static_cast<std::uint32_t>(8)));
    { const bool branch_taken = ctx.gpr[3] == 0u;
    // nop
      if (branch_taken) {
          goto L_08A55E08;
      }
      goto L_08A55DDC;
    }
L_08A55DDC:
    { const bool branch_taken = static_cast<std::int32_t>(ctx.gpr[2]) < 0;
    // nop
      if (branch_taken) {
          goto L_08A55E08;
      }
      goto L_08A55DE4;
    }
L_08A55DE4:
    ctx.set_gpr(1, static_cast<std::int32_t>(ctx.gpr[2]) < static_cast<std::int32_t>(ctx.gpr[3]) ? 1u : 0u);
    { const bool branch_taken = ctx.gpr[1] == 0u;
    // nop
      if (branch_taken) {
          goto L_08A55E08;
      }
      goto L_08A55DF0;
    }
L_08A55DF0:
    ctx.set_gpr(3, 2229u << 16u);
    ctx.fpr[0] = std::bit_cast<float>(rt.memory().aot_load32(ctx.gpr[3] + static_cast<std::uint32_t>(22684)));
    ctx.set_gpr(4, ctx.gpr[2] << 2u);
    ctx.set_gpr(3, rt.memory().aot_load32(ctx.gpr[5] + static_cast<std::uint32_t>(16)));
    ctx.set_gpr(3, ctx.gpr[3] + ctx.gpr[4]);
    rt.memory().aot_store32(ctx.gpr[3] + static_cast<std::uint32_t>(0), std::bit_cast<std::uint32_t>(ctx.fpr[0]));
    goto L_08A55E08;
L_08A55E08:
    ctx.set_gpr(5, rt.memory().aot_load32(ctx.gpr[19] + static_cast<std::uint32_t>(56)));
    ctx.set_gpr(3, rt.memory().aot_load32(ctx.gpr[5] + static_cast<std::uint32_t>(8)));
    { const bool branch_taken = ctx.gpr[3] == 0u;
    // nop
      if (branch_taken) {
          goto L_08A55E44;
      }
      goto L_08A55E18;
    }
L_08A55E18:
    { const bool branch_taken = static_cast<std::int32_t>(ctx.gpr[2]) < 0;
    // nop
      if (branch_taken) {
          goto L_08A55E44;
      }
      goto L_08A55E20;
    }
L_08A55E20:
    ctx.set_gpr(1, static_cast<std::int32_t>(ctx.gpr[2]) < static_cast<std::int32_t>(ctx.gpr[3]) ? 1u : 0u);
    { const bool branch_taken = ctx.gpr[1] == 0u;
    // nop
      if (branch_taken) {
          goto L_08A55E44;
      }
      goto L_08A55E2C;
    }
L_08A55E2C:
    ctx.set_gpr(3, 2229u << 16u);
    ctx.fpr[0] = std::bit_cast<float>(rt.memory().aot_load32(ctx.gpr[3] + static_cast<std::uint32_t>(22688)));
    ctx.set_gpr(4, ctx.gpr[2] << 2u);
    ctx.set_gpr(3, rt.memory().aot_load32(ctx.gpr[5] + static_cast<std::uint32_t>(16)));
    ctx.set_gpr(3, ctx.gpr[3] + ctx.gpr[4]);
    rt.memory().aot_store32(ctx.gpr[3] + static_cast<std::uint32_t>(0), std::bit_cast<std::uint32_t>(ctx.fpr[0]));
    goto L_08A55E44;
L_08A55E44:
    ctx.set_gpr(5, rt.memory().aot_load32(ctx.gpr[19] + static_cast<std::uint32_t>(60)));
    ctx.set_gpr(3, rt.memory().aot_load32(ctx.gpr[5] + static_cast<std::uint32_t>(8)));
    { const bool branch_taken = ctx.gpr[3] == 0u;
    // nop
      if (branch_taken) {
          goto L_08A55E78;
      }
      goto L_08A55E54;
    }
L_08A55E54:
    { const bool branch_taken = static_cast<std::int32_t>(ctx.gpr[2]) < 0;
    // nop
      if (branch_taken) {
          goto L_08A55E78;
      }
      goto L_08A55E5C;
    }
L_08A55E5C:
    ctx.set_gpr(1, static_cast<std::int32_t>(ctx.gpr[2]) < static_cast<std::int32_t>(ctx.gpr[3]) ? 1u : 0u);
    { const bool branch_taken = ctx.gpr[1] == 0u;
    // nop
      if (branch_taken) {
          goto L_08A55E78;
      }
      goto L_08A55E68;
    }
L_08A55E68:
    ctx.set_gpr(4, rt.memory().aot_load8(ctx.gpr[28] + static_cast<std::uint32_t>(-32588)));
    ctx.set_gpr(3, rt.memory().aot_load32(ctx.gpr[5] + static_cast<std::uint32_t>(16)));
    ctx.set_gpr(3, ctx.gpr[2] + ctx.gpr[3]);
    rt.memory().aot_store8(ctx.gpr[3] + static_cast<std::uint32_t>(0), static_cast<std::uint8_t>(ctx.gpr[4]));
    goto L_08A55E78;
L_08A55E78:
    ctx.set_gpr(2, ctx.gpr[2] + static_cast<std::uint32_t>(1));
    goto L_08A55E7C;
L_08A55E7C:
    ctx.set_gpr(3, static_cast<std::int32_t>(ctx.gpr[2]) < static_cast<std::int32_t>(ctx.gpr[16]) ? 1u : 0u);
    { const bool branch_taken = ctx.gpr[3] != 0u;
    // nop
      if (branch_taken) {
          goto L_08A55DCC;
      }
      goto L_08A55E88;
    }
L_08A55E88:
    ctx.set_gpr(5, 0u + 0u);
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_08A55ED8;
      }
      goto L_08A55E94;
    }
L_08A55E94:
    ctx.set_gpr(2, rt.memory().aot_load32(ctx.gpr[19] + static_cast<std::uint32_t>(52)));
    ctx.set_gpr(4, ctx.gpr[5] << 2u);
    ctx.set_gpr(2, rt.memory().aot_load32(ctx.gpr[2] + static_cast<std::uint32_t>(16)));
    ctx.set_gpr(3, ctx.gpr[2] + ctx.gpr[4]);
    ctx.set_gpr(2, rt.memory().aot_load32(ctx.gpr[19] + static_cast<std::uint32_t>(56)));
    ctx.set_gpr(2, rt.memory().aot_load32(ctx.gpr[2] + static_cast<std::uint32_t>(16)));
    ctx.set_gpr(2, ctx.gpr[2] + ctx.gpr[4]);
    ctx.fpr[1] = std::bit_cast<float>(rt.memory().aot_load32(ctx.gpr[2] + static_cast<std::uint32_t>(0)));
    ctx.fpr[0] = std::bit_cast<float>(rt.memory().aot_load32(ctx.gpr[3] + static_cast<std::uint32_t>(0)));
    ctx.set_fpu_condition((!(std::isnan(ctx.fpr[1]) || std::isnan(ctx.fpr[0])) && ctx.fpr[1] == ctx.fpr[0]));
    // nop
    { const bool branch_taken = ctx.fpu_condition();
    // nop
      if (branch_taken) {
          goto L_08A55ED4;
      }
      goto L_08A55EC8;
    }
L_08A55EC8:
    ctx.set_gpr(17, 0u + static_cast<std::uint32_t>(1));
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_08A55EE4;
      }
      goto L_08A55ED4;
    }
L_08A55ED4:
    ctx.set_gpr(5, ctx.gpr[5] + static_cast<std::uint32_t>(1));
    goto L_08A55ED8;
L_08A55ED8:
    ctx.set_gpr(2, static_cast<std::int32_t>(ctx.gpr[5]) < static_cast<std::int32_t>(ctx.gpr[18]) ? 1u : 0u);
    { const bool branch_taken = ctx.gpr[2] != 0u;
    // nop
      if (branch_taken) {
          goto L_08A55E94;
      }
      goto L_08A55EE4;
    }
L_08A55EE4:
    ctx.set_gpr(2, ctx.gpr[17] + 0u);
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
L_08A55F08:
    ctx.set_gpr(29, ctx.gpr[29] + static_cast<std::uint32_t>(-256));
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
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(12), std::bit_cast<std::uint32_t>(ctx.fpr[21]));
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(8), std::bit_cast<std::uint32_t>(ctx.fpr[20]));
    ctx.set_gpr(21, ctx.gpr[4] + 0u);
    ctx.set_gpr(2, rt.memory().aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(48)));
    ctx.set_gpr(2, rt.memory().aot_load32(ctx.gpr[2] + static_cast<std::uint32_t>(20)));
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(104), ctx.gpr[2]);
    ctx.set_gpr(5, ctx.gpr[2] + 0u);
    ctx.set_gpr(31, 0x08A55F60u);
    // nop
    goto L_08A55C24;
L_08A55F60:
    { const bool branch_taken = ctx.gpr[2] == 0u;
    // nop
      if (branch_taken) {
          goto L_08A568D4;
      }
      goto L_08A55F68;
    }
L_08A55F68:
    ctx.set_gpr(2, rt.memory().aot_load32(ctx.gpr[21] + static_cast<std::uint32_t>(48)));
    ctx.set_gpr(19, rt.memory().aot_load32(ctx.gpr[2] + static_cast<std::uint32_t>(8)));
    ctx.set_gpr(18, rt.memory().aot_load32(ctx.gpr[21] + static_cast<std::uint32_t>(68)));
    ctx.set_gpr(4, ctx.gpr[19] + 0u);
    ctx.set_gpr(25, rt.memory().aot_load32(ctx.gpr[19] + static_cast<std::uint32_t>(0)));
    ctx.set_gpr(25, rt.memory().aot_load32(ctx.gpr[25] + static_cast<std::uint32_t>(100)));
    jump_target = ctx.gpr[25];
    ctx.set_gpr(31, 0x08A55F88u);
    // nop
    ctx.pc = jump_target;
    if (rt.invoke_chained_call(ctx, &aot_mem) && ctx.pc == 0x08A55F88u) goto L_08A55F88;
    return;
L_08A55F88:
    ctx.set_gpr(16, rt.memory().aot_load32(ctx.gpr[2] + static_cast<std::uint32_t>(0)));
    ctx.set_gpr(4, ctx.gpr[18] + 0u);
    ctx.set_gpr(25, rt.memory().aot_load32(ctx.gpr[18] + static_cast<std::uint32_t>(0)));
    ctx.set_gpr(25, rt.memory().aot_load32(ctx.gpr[25] + static_cast<std::uint32_t>(100)));
    jump_target = ctx.gpr[25];
    ctx.set_gpr(31, 0x08A55FA0u);
    // nop
    ctx.pc = jump_target;
    if (rt.invoke_chained_call(ctx, &aot_mem) && ctx.pc == 0x08A55FA0u) goto L_08A55FA0;
    return;
L_08A55FA0:
    ctx.set_gpr(3, rt.memory().aot_load32(ctx.gpr[2] + static_cast<std::uint32_t>(0)));
    ctx.set_gpr(17, 0u + 0u);
    ctx.set_gpr(2, ctx.gpr[16] & 1u);
    { const bool branch_taken = ctx.gpr[2] == 0u;
    // nop
      if (branch_taken) {
          goto L_08A55FC4;
      }
      goto L_08A55FB4;
    }
L_08A55FB4:
    ctx.set_gpr(2, ctx.gpr[3] & 1u);
    { const bool branch_taken = ctx.gpr[2] == 0u;
    // nop
      if (branch_taken) {
          goto L_08A55FC4;
      }
      goto L_08A55FC0;
    }
L_08A55FC0:
    ctx.set_gpr(17, ctx.gpr[17] | 2u);
    goto L_08A55FC4;
L_08A55FC4:
    ctx.set_gpr(2, ctx.gpr[16] & 2u);
    { const bool branch_taken = ctx.gpr[2] == 0u;
    // nop
      if (branch_taken) {
          goto L_08A55FE0;
      }
      goto L_08A55FD0;
    }
L_08A55FD0:
    ctx.set_gpr(2, ctx.gpr[3] & 2u);
    { const bool branch_taken = ctx.gpr[2] == 0u;
    // nop
      if (branch_taken) {
          goto L_08A55FE0;
      }
      goto L_08A55FDC;
    }
L_08A55FDC:
    ctx.set_gpr(17, ctx.gpr[17] | 4u);
    goto L_08A55FE0;
L_08A55FE0:
    ctx.set_gpr(2, ctx.gpr[17] & 2u);
    { const bool branch_taken = ctx.gpr[2] == 0u;
    // nop
      if (branch_taken) {
          goto L_08A56058;
      }
      goto L_08A55FEC;
    }
L_08A55FEC:
    ctx.set_gpr(17, ctx.gpr[17] ^ 2u);
    ctx.set_gpr(20, 0u + 0u);
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_08A56048;
      }
      goto L_08A55FFC;
    }
L_08A55FFC:
    ctx.set_gpr(4, rt.memory().aot_load32(ctx.gpr[21] + static_cast<std::uint32_t>(48)));
    ctx.set_gpr(2, rt.memory().aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(28)));
    ctx.set_gpr(3, ctx.gpr[20] << 2u);
    ctx.set_gpr(2, rt.memory().aot_load32(ctx.gpr[2] + static_cast<std::uint32_t>(16)));
    ctx.set_gpr(2, ctx.gpr[2] + ctx.gpr[3]);
    ctx.set_gpr(2, rt.memory().aot_load32(ctx.gpr[2] + static_cast<std::uint32_t>(0)));
    { const bool branch_taken = ctx.gpr[2] == 0u;
    // nop
      if (branch_taken) {
          goto L_08A56044;
      }
      goto L_08A5601C;
    }
L_08A5601C:
    ctx.set_gpr(2, rt.memory().aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(24)));
    ctx.set_gpr(2, rt.memory().aot_load32(ctx.gpr[2] + static_cast<std::uint32_t>(16)));
    ctx.set_gpr(2, ctx.gpr[2] + ctx.gpr[3]);
    ctx.set_gpr(2, rt.memory().aot_load32(ctx.gpr[2] + static_cast<std::uint32_t>(0)));
    ctx.set_gpr(2, rt.memory().aot_load32(ctx.gpr[2] + static_cast<std::uint32_t>(8)));
    { const bool branch_taken = static_cast<std::int32_t>(ctx.gpr[2]) <= 0;
    // nop
      if (branch_taken) {
          goto L_08A56044;
      }
      goto L_08A56038;
    }
L_08A56038:
    ctx.set_gpr(17, ctx.gpr[17] | 2u);
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_08A56058;
      }
      goto L_08A56044;
    }
L_08A56044:
    ctx.set_gpr(20, ctx.gpr[20] + static_cast<std::uint32_t>(1));
    goto L_08A56048;
L_08A56048:
    ctx.set_gpr(2, rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(104)));
    ctx.set_gpr(2, ctx.gpr[20] < ctx.gpr[2] ? 1u : 0u);
    { const bool branch_taken = ctx.gpr[2] != 0u;
    // nop
      if (branch_taken) {
          goto L_08A55FFC;
      }
      goto L_08A56058;
    }
L_08A56058:
    ctx.set_gpr(2, ctx.gpr[17] & 4u);
    { const bool branch_taken = ctx.gpr[2] == 0u;
    // nop
      if (branch_taken) {
          goto L_08A560D0;
      }
      goto L_08A56064;
    }
L_08A56064:
    ctx.set_gpr(17, ctx.gpr[17] ^ 4u);
    ctx.set_gpr(20, 0u + 0u);
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_08A560C0;
      }
      goto L_08A56074;
    }
L_08A56074:
    ctx.set_gpr(4, rt.memory().aot_load32(ctx.gpr[21] + static_cast<std::uint32_t>(48)));
    ctx.set_gpr(2, rt.memory().aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(36)));
    ctx.set_gpr(3, ctx.gpr[20] << 2u);
    ctx.set_gpr(2, rt.memory().aot_load32(ctx.gpr[2] + static_cast<std::uint32_t>(16)));
    ctx.set_gpr(2, ctx.gpr[2] + ctx.gpr[3]);
    ctx.set_gpr(2, rt.memory().aot_load32(ctx.gpr[2] + static_cast<std::uint32_t>(0)));
    { const bool branch_taken = ctx.gpr[2] == 0u;
    // nop
      if (branch_taken) {
          goto L_08A560BC;
      }
      goto L_08A56094;
    }
L_08A56094:
    ctx.set_gpr(2, rt.memory().aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(32)));
    ctx.set_gpr(2, rt.memory().aot_load32(ctx.gpr[2] + static_cast<std::uint32_t>(16)));
    ctx.set_gpr(2, ctx.gpr[2] + ctx.gpr[3]);
    ctx.set_gpr(2, rt.memory().aot_load32(ctx.gpr[2] + static_cast<std::uint32_t>(0)));
    ctx.set_gpr(2, rt.memory().aot_load32(ctx.gpr[2] + static_cast<std::uint32_t>(8)));
    { const bool branch_taken = static_cast<std::int32_t>(ctx.gpr[2]) <= 0;
    // nop
      if (branch_taken) {
          goto L_08A560BC;
      }
      goto L_08A560B0;
    }
L_08A560B0:
    ctx.set_gpr(17, ctx.gpr[17] | 4u);
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_08A560D0;
      }
      goto L_08A560BC;
    }
L_08A560BC:
    ctx.set_gpr(20, ctx.gpr[20] + static_cast<std::uint32_t>(1));
    goto L_08A560C0;
L_08A560C0:
    ctx.set_gpr(2, rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(104)));
    ctx.set_gpr(2, ctx.gpr[20] < ctx.gpr[2] ? 1u : 0u);
    { const bool branch_taken = ctx.gpr[2] != 0u;
    // nop
      if (branch_taken) {
          goto L_08A56074;
      }
      goto L_08A560D0;
    }
L_08A560D0:
    ctx.set_gpr(4, ctx.gpr[29] + static_cast<std::uint32_t>(228));
    ctx.set_gpr(31, 0x08A560DCu);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0108_entry, 108u, 623u, 0x089B798Cu>(ctx, &aot_mem) && ctx.pc == 0x08A560DCu) goto L_08A560DC;
    return;
L_08A560DC:
    ctx.set_gpr(4, ctx.gpr[29] + static_cast<std::uint32_t>(200));
    ctx.set_gpr(31, 0x08A560E8u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0108_entry, 108u, 623u, 0x089B798Cu>(ctx, &aot_mem) && ctx.pc == 0x08A560E8u) goto L_08A560E8;
    return;
L_08A560E8:
    ctx.set_gpr(4, ctx.gpr[29] + static_cast<std::uint32_t>(172));
    ctx.set_gpr(31, 0x08A560F4u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0108_entry, 108u, 623u, 0x089B798Cu>(ctx, &aot_mem) && ctx.pc == 0x08A560F4u) goto L_08A560F4;
    return;
L_08A560F4:
    ctx.set_gpr(4, ctx.gpr[29] + static_cast<std::uint32_t>(144));
    ctx.set_gpr(31, 0x08A56100u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0108_entry, 108u, 623u, 0x089B798Cu>(ctx, &aot_mem) && ctx.pc == 0x08A56100u) goto L_08A56100;
    return;
L_08A56100:
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(140), 0u);
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(136), 0u);
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(132), 0u);
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(128), 0u);
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(124), 0u);
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(120), 0u);
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(116), 0u);
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(112), 0u);
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(108), 0u);
    ctx.set_gpr(2, ctx.gpr[17] & 2u);
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(100), ctx.gpr[2]);
    { const bool branch_taken = ctx.gpr[2] == 0u;
    // nop
      if (branch_taken) {
          goto L_08A561B4;
      }
      goto L_08A56134;
    }
L_08A56134:
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(240), 0u);
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(236), 0u);
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(232), 0u);
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(228), 0u);
    ctx.set_gpr(4, ctx.gpr[18] + 0u);
    ctx.set_gpr(5, ctx.gpr[29] + static_cast<std::uint32_t>(228));
    ctx.set_gpr(6, 0u + 0u);
    ctx.set_gpr(25, rt.memory().aot_load32(ctx.gpr[18] + static_cast<std::uint32_t>(0)));
    ctx.set_gpr(25, rt.memory().aot_load32(ctx.gpr[25] + static_cast<std::uint32_t>(104)));
    jump_target = ctx.gpr[25];
    ctx.set_gpr(31, 0x08A56160u);
    // nop
    ctx.pc = jump_target;
    if (rt.invoke_chained_call(ctx, &aot_mem) && ctx.pc == 0x08A56160u) goto L_08A56160;
    return;
L_08A56160:
    ctx.set_gpr(2, rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(244)));
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(140), ctx.gpr[2]);
    ctx.set_gpr(2, rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(248)));
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(124), ctx.gpr[2]);
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(212), 0u);
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(208), 0u);
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(204), 0u);
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(200), 0u);
    ctx.set_gpr(4, ctx.gpr[19] + 0u);
    ctx.set_gpr(5, ctx.gpr[29] + static_cast<std::uint32_t>(200));
    ctx.set_gpr(6, 0u + 0u);
    ctx.set_gpr(25, rt.memory().aot_load32(ctx.gpr[19] + static_cast<std::uint32_t>(0)));
    ctx.set_gpr(25, rt.memory().aot_load32(ctx.gpr[25] + static_cast<std::uint32_t>(104)));
    jump_target = ctx.gpr[25];
    ctx.set_gpr(31, 0x08A5619Cu);
    // nop
    ctx.pc = jump_target;
    if (rt.invoke_chained_call(ctx, &aot_mem) && ctx.pc == 0x08A5619Cu) goto L_08A5619C;
    return;
L_08A5619C:
    ctx.set_gpr(2, rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(216)));
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(132), ctx.gpr[2]);
    ctx.set_gpr(2, rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(220)));
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(120), ctx.gpr[2]);
    ctx.set_gpr(2, rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(240)));
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(108), ctx.gpr[2]);
    goto L_08A561B4;
L_08A561B4:
    ctx.set_gpr(2, ctx.gpr[17] & 4u);
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(96), ctx.gpr[2]);
    { const bool branch_taken = ctx.gpr[2] == 0u;
    // nop
      if (branch_taken) {
          goto L_08A56244;
      }
      goto L_08A561C4;
    }
L_08A561C4:
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(184), 0u);
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(180), 0u);
    ctx.set_gpr(2, 0u + static_cast<std::uint32_t>(1));
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(176), ctx.gpr[2]);
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(172), 0u);
    ctx.set_gpr(4, ctx.gpr[18] + 0u);
    ctx.set_gpr(5, ctx.gpr[29] + static_cast<std::uint32_t>(172));
    ctx.set_gpr(6, 0u + 0u);
    ctx.set_gpr(25, rt.memory().aot_load32(ctx.gpr[18] + static_cast<std::uint32_t>(0)));
    ctx.set_gpr(25, rt.memory().aot_load32(ctx.gpr[25] + static_cast<std::uint32_t>(104)));
    jump_target = ctx.gpr[25];
    ctx.set_gpr(31, 0x08A561F4u);
    // nop
    ctx.pc = jump_target;
    if (rt.invoke_chained_call(ctx, &aot_mem) && ctx.pc == 0x08A561F4u) goto L_08A561F4;
    return;
L_08A561F4:
    ctx.set_gpr(2, rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(188)));
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(136), ctx.gpr[2]);
    ctx.set_gpr(2, rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(192)));
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(116), ctx.gpr[2]);
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(156), 0u);
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(152), 0u);
    ctx.set_gpr(2, 0u + static_cast<std::uint32_t>(1));
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(148), ctx.gpr[2]);
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(144), 0u);
    ctx.set_gpr(4, ctx.gpr[19] + 0u);
    ctx.set_gpr(5, ctx.gpr[29] + static_cast<std::uint32_t>(144));
    ctx.set_gpr(6, 0u + 0u);
    ctx.set_gpr(25, rt.memory().aot_load32(ctx.gpr[19] + static_cast<std::uint32_t>(0)));
    ctx.set_gpr(25, rt.memory().aot_load32(ctx.gpr[25] + static_cast<std::uint32_t>(104)));
    jump_target = ctx.gpr[25];
    ctx.set_gpr(31, 0x08A56234u);
    // nop
    ctx.pc = jump_target;
    if (rt.invoke_chained_call(ctx, &aot_mem) && ctx.pc == 0x08A56234u) goto L_08A56234;
    return;
L_08A56234:
    ctx.set_gpr(2, rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(160)));
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(128), ctx.gpr[2]);
    ctx.set_gpr(2, rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(164)));
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(112), ctx.gpr[2]);
    goto L_08A56244;
L_08A56244:
    ctx.set_gpr(2, rt.memory().aot_load32(ctx.gpr[21] + static_cast<std::uint32_t>(68)));
    ctx.set_gpr(5, rt.memory().aot_load32(ctx.gpr[2] + static_cast<std::uint32_t>(12)));
    ctx.set_gpr(4, rt.memory().aot_load32(ctx.gpr[21] + static_cast<std::uint32_t>(64)));
    ctx.set_gpr(31, 0x08A56258u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0065_entry, 65u, 676u, 0x0890AF0Cu>(ctx, &aot_mem) && ctx.pc == 0x08A56258u) goto L_08A56258;
    return;
L_08A56258:
    ctx.set_gpr(4, rt.memory().aot_load32(ctx.gpr[21] + static_cast<std::uint32_t>(64)));
    ctx.set_gpr(31, 0x08A56264u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0065_entry, 65u, 656u, 0x0890AE6Cu>(ctx, &aot_mem) && ctx.pc == 0x08A56264u) goto L_08A56264;
    return;
L_08A56264:
    ctx.set_gpr(2, rt.memory().aot_load32(ctx.gpr[21] + static_cast<std::uint32_t>(68)));
    ctx.set_gpr(5, rt.memory().aot_load32(ctx.gpr[2] + static_cast<std::uint32_t>(12)));
    ctx.set_gpr(4, rt.memory().aot_load32(ctx.gpr[21] + static_cast<std::uint32_t>(80)));
    ctx.set_gpr(31, 0x08A56278u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0065_entry, 65u, 676u, 0x0890AF0Cu>(ctx, &aot_mem) && ctx.pc == 0x08A56278u) goto L_08A56278;
    return;
L_08A56278:
    ctx.set_gpr(4, rt.memory().aot_load32(ctx.gpr[21] + static_cast<std::uint32_t>(80)));
    ctx.set_gpr(31, 0x08A56284u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0065_entry, 65u, 656u, 0x0890AE6Cu>(ctx, &aot_mem) && ctx.pc == 0x08A56284u) goto L_08A56284;
    return;
L_08A56284:
    ctx.set_gpr(20, 0u + 0u);
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_08A56778;
      }
      goto L_08A56290;
    }
L_08A56290:
    ctx.set_gpr(4, rt.memory().aot_load32(ctx.gpr[21] + static_cast<std::uint32_t>(52)));
    ctx.set_gpr(17, ctx.gpr[20] << 2u);
    ctx.set_gpr(3, rt.memory().aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(16)));
    ctx.set_gpr(3, ctx.gpr[3] + ctx.gpr[17]);
    ctx.fpr[1] = std::bit_cast<float>(0u);
    ctx.fpr[0] = std::bit_cast<float>(rt.memory().aot_load32(ctx.gpr[3] + static_cast<std::uint32_t>(0)));
    ctx.set_fpu_condition((!(std::isnan(ctx.fpr[1]) || std::isnan(ctx.fpr[0])) && ctx.fpr[1] == ctx.fpr[0]));
    // nop
    { const bool branch_taken = !ctx.fpu_condition();
    // nop
      if (branch_taken) {
          goto L_08A562D8;
      }
      goto L_08A562B8;
    }
L_08A562B8:
    ctx.set_gpr(3, rt.memory().aot_load32(ctx.gpr[21] + static_cast<std::uint32_t>(56)));
    ctx.set_gpr(3, rt.memory().aot_load32(ctx.gpr[3] + static_cast<std::uint32_t>(16)));
    ctx.set_gpr(3, ctx.gpr[3] + ctx.gpr[17]);
    ctx.fpr[0] = std::bit_cast<float>(rt.memory().aot_load32(ctx.gpr[3] + static_cast<std::uint32_t>(0)));
    ctx.set_fpu_condition((!(std::isnan(ctx.fpr[1]) || std::isnan(ctx.fpr[0])) && ctx.fpr[1] == ctx.fpr[0]));
    // nop
    { const bool branch_taken = ctx.fpu_condition();
    // nop
      if (branch_taken) {
          goto L_08A56734;
      }
      goto L_08A562D8;
    }
L_08A562D8:
    ctx.set_gpr(3, rt.memory().aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(16)));
    ctx.set_gpr(3, ctx.gpr[3] + ctx.gpr[17]);
    ctx.fpr[20] = std::bit_cast<float>(rt.memory().aot_load32(ctx.gpr[3] + static_cast<std::uint32_t>(0)));
    ctx.set_gpr(3, rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(100)));
    { const bool branch_taken = ctx.gpr[3] == 0u;
    // nop
      if (branch_taken) {
          goto L_08A5650C;
      }
      goto L_08A562F0;
    }
L_08A562F0:
    ctx.set_gpr(3, rt.memory().aot_load32(ctx.gpr[21] + static_cast<std::uint32_t>(48)));
    ctx.set_gpr(3, rt.memory().aot_load32(ctx.gpr[3] + static_cast<std::uint32_t>(28)));
    ctx.set_gpr(3, rt.memory().aot_load32(ctx.gpr[3] + static_cast<std::uint32_t>(16)));
    ctx.set_gpr(3, ctx.gpr[3] + ctx.gpr[17]);
    ctx.set_gpr(16, rt.memory().aot_load32(ctx.gpr[3] + static_cast<std::uint32_t>(0)));
    { const bool branch_taken = ctx.gpr[16] == 0u;
    // nop
      if (branch_taken) {
          goto L_08A5650C;
      }
      goto L_08A5630C;
    }
L_08A5630C:
    ctx.set_gpr(22, rt.memory().aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(8)));
    { const bool branch_taken = static_cast<std::int32_t>(ctx.gpr[22]) > 0;
    // nop
      if (branch_taken) {
          goto L_08A56370;
      }
      goto L_08A56318;
    }
L_08A56318:
    ctx.set_gpr(3, rt.memory().aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(12)));
    ctx.set_gpr(1, static_cast<std::int32_t>(ctx.gpr[22]) < static_cast<std::int32_t>(ctx.gpr[3]) ? 1u : 0u);
    { const bool branch_taken = ctx.gpr[1] == 0u;
    // nop
      if (branch_taken) {
          goto L_08A5633C;
      }
      goto L_08A56328;
    }
L_08A56328:
    ctx.set_gpr(3, rt.memory().aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(8)));
    ctx.set_gpr(3, ctx.gpr[3] + static_cast<std::uint32_t>(1));
    rt.memory().aot_store32(ctx.gpr[16] + static_cast<std::uint32_t>(8), ctx.gpr[3]);
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_08A56350;
      }
      goto L_08A5633C;
    }
L_08A5633C:
    ctx.set_gpr(5, ctx.gpr[22] + static_cast<std::uint32_t>(1));
    ctx.set_gpr(4, ctx.gpr[16] + 0u);
    ctx.set_gpr(6, 0u + static_cast<std::uint32_t>(4));
    ctx.set_gpr(31, 0x08A56350u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0066_entry, 66u, 795u, 0x0890FB1Cu>(ctx, &aot_mem) && ctx.pc == 0x08A56350u) goto L_08A56350;
    return;
L_08A56350:
    ctx.set_gpr(3, 2229u << 16u);
    ctx.set_gpr(5, rt.memory().aot_load32(ctx.gpr[3] + static_cast<std::uint32_t>(22692)));
    ctx.set_gpr(4, ctx.gpr[22] << 2u);
    ctx.set_gpr(3, rt.memory().aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(16)));
    ctx.set_gpr(3, ctx.gpr[3] + ctx.gpr[4]);
    rt.memory().aot_store32(ctx.gpr[3] + static_cast<std::uint32_t>(0), ctx.gpr[5]);
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_08A5650C;
      }
      goto L_08A56370;
    }
L_08A56370:
    ctx.set_gpr(3, ctx.gpr[22] + static_cast<std::uint32_t>(-1));
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(92), ctx.gpr[3]);
    ctx.set_gpr(16, 0u + 0u);
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_08A564FC;
      }
      goto L_08A56384;
    }
L_08A56384:
    ctx.set_gpr(2, rt.memory().aot_load32(ctx.gpr[21] + static_cast<std::uint32_t>(48)));
    ctx.set_gpr(3, rt.memory().aot_load32(ctx.gpr[2] + static_cast<std::uint32_t>(28)));
    ctx.set_gpr(3, rt.memory().aot_load32(ctx.gpr[3] + static_cast<std::uint32_t>(16)));
    ctx.set_gpr(3, ctx.gpr[3] + ctx.gpr[17]);
    ctx.set_gpr(3, rt.memory().aot_load32(ctx.gpr[3] + static_cast<std::uint32_t>(0)));
    ctx.set_gpr(4, ctx.gpr[16] << 2u);
    ctx.set_gpr(3, rt.memory().aot_load32(ctx.gpr[3] + static_cast<std::uint32_t>(16)));
    ctx.set_gpr(3, ctx.gpr[3] + ctx.gpr[4]);
    ctx.set_gpr(22, rt.memory().aot_load32(ctx.gpr[3] + static_cast<std::uint32_t>(0)));
    ctx.set_gpr(23, rt.memory().aot_load32(ctx.gpr[21] + static_cast<std::uint32_t>(64)));
    ctx.set_gpr(30, ctx.gpr[22] >> 5u);
    ctx.set_gpr(4, ctx.gpr[30] << 2u);
    ctx.set_gpr(3, rt.memory().aot_load32(ctx.gpr[23] + static_cast<std::uint32_t>(16)));
    ctx.set_gpr(5, ctx.gpr[3] + ctx.gpr[4]);
    ctx.set_gpr(4, ctx.gpr[22] & 31u);
    ctx.set_gpr(3, 0u + static_cast<std::uint32_t>(1));
    ctx.set_gpr(3, ctx.gpr[3] << (ctx.gpr[4] & 31u));
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(88), ctx.gpr[3]);
    ctx.set_gpr(4, rt.memory().aot_load32(ctx.gpr[5] + static_cast<std::uint32_t>(0)));
    ctx.set_gpr(3, ctx.gpr[3] & ctx.gpr[4]);
    { const bool branch_taken = ctx.gpr[3] != 0u;
    // nop
      if (branch_taken) {
          goto L_08A56404;
      }
      goto L_08A563DC;
    }
L_08A563DC:
    ctx.set_gpr(3, rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(120)));
    { const std::int64_t product = static_cast<std::int64_t>(static_cast<std::int32_t>(ctx.gpr[22])) * static_cast<std::int64_t>(static_cast<std::int32_t>(ctx.gpr[3])); ctx.lo = static_cast<std::uint32_t>(product); ctx.hi = static_cast<std::uint32_t>(static_cast<std::uint64_t>(product) >> 32u); }
    ctx.set_gpr(4, ctx.lo);
    ctx.set_gpr(3, rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(132)));
    ctx.set_gpr(3, ctx.gpr[3] + ctx.gpr[4]);
    ctx.fpr[23] = std::bit_cast<float>(rt.memory().aot_load32(ctx.gpr[3] + static_cast<std::uint32_t>(0)));
    ctx.fpr[22] = std::bit_cast<float>(rt.memory().aot_load32(ctx.gpr[3] + static_cast<std::uint32_t>(4)));
    ctx.fpr[21] = std::bit_cast<float>(rt.memory().aot_load32(ctx.gpr[3] + static_cast<std::uint32_t>(8)));
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_08A56424;
      }
      goto L_08A56404;
    }
L_08A56404:
    ctx.set_gpr(3, rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(124)));
    { const std::int64_t product = static_cast<std::int64_t>(static_cast<std::int32_t>(ctx.gpr[22])) * static_cast<std::int64_t>(static_cast<std::int32_t>(ctx.gpr[3])); ctx.lo = static_cast<std::uint32_t>(product); ctx.hi = static_cast<std::uint32_t>(static_cast<std::uint64_t>(product) >> 32u); }
    ctx.set_gpr(4, ctx.lo);
    ctx.set_gpr(3, rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(140)));
    ctx.set_gpr(3, ctx.gpr[3] + ctx.gpr[4]);
    ctx.fpr[23] = std::bit_cast<float>(rt.memory().aot_load32(ctx.gpr[3] + static_cast<std::uint32_t>(0)));
    ctx.fpr[22] = std::bit_cast<float>(rt.memory().aot_load32(ctx.gpr[3] + static_cast<std::uint32_t>(4)));
    ctx.fpr[21] = std::bit_cast<float>(rt.memory().aot_load32(ctx.gpr[3] + static_cast<std::uint32_t>(8)));
    goto L_08A56424;
L_08A56424:
    ctx.fpr[0] = std::bit_cast<float>(0u);
    ctx.set_fpu_condition((!(std::isnan(ctx.fpr[0]) || std::isnan(ctx.fpr[20])) && ctx.fpr[0] == ctx.fpr[20]));
    // nop
    { const bool branch_taken = ctx.fpu_condition();
    // nop
      if (branch_taken) {
          goto L_08A56480;
      }
      goto L_08A56438;
    }
L_08A56438:
    ctx.set_gpr(2, rt.memory().aot_load32(ctx.gpr[2] + static_cast<std::uint32_t>(24)));
    ctx.set_gpr(2, rt.memory().aot_load32(ctx.gpr[2] + static_cast<std::uint32_t>(16)));
    ctx.set_gpr(2, ctx.gpr[2] + ctx.gpr[17]);
    ctx.set_gpr(4, rt.memory().aot_load32(ctx.gpr[2] + static_cast<std::uint32_t>(0)));
    ctx.set_gpr(2, ctx.gpr[16] << 1u);
    ctx.set_gpr(2, ctx.gpr[2] + ctx.gpr[16]);
    ctx.set_gpr(3, ctx.gpr[2] << 2u);
    ctx.set_gpr(2, rt.memory().aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(16)));
    ctx.set_gpr(2, ctx.gpr[2] + ctx.gpr[3]);
    ctx.fpr[2] = std::bit_cast<float>(rt.memory().aot_load32(ctx.gpr[2] + static_cast<std::uint32_t>(0)));
    ctx.fpr[1] = std::bit_cast<float>(rt.memory().aot_load32(ctx.gpr[2] + static_cast<std::uint32_t>(4)));
    ctx.fpr[0] = std::bit_cast<float>(rt.memory().aot_load32(ctx.gpr[2] + static_cast<std::uint32_t>(8)));
    { const float fs = ctx.fpr[2]; const float ft = ctx.fpr[20]; if ((std::isinf(fs) && ft == 0.0f) || (std::isinf(ft) && fs == 0.0f)) ctx.set_fpr_bits(2, 0x7FC00000u); else ctx.fpr[2] = fs * ft; }
    { const float fs = ctx.fpr[1]; const float ft = ctx.fpr[20]; if ((std::isinf(fs) && ft == 0.0f) || (std::isinf(ft) && fs == 0.0f)) ctx.set_fpr_bits(1, 0x7FC00000u); else ctx.fpr[1] = fs * ft; }
    { const float fs = ctx.fpr[0]; const float ft = ctx.fpr[20]; if ((std::isinf(fs) && ft == 0.0f) || (std::isinf(ft) && fs == 0.0f)) ctx.set_fpr_bits(0, 0x7FC00000u); else ctx.fpr[0] = fs * ft; }
    ctx.fpr[23] = ctx.fpr[23] + ctx.fpr[2];
    ctx.fpr[22] = ctx.fpr[22] + ctx.fpr[1];
    ctx.fpr[21] = ctx.fpr[21] + ctx.fpr[0];
    goto L_08A56480;
L_08A56480:
    ctx.set_gpr(2, ctx.gpr[30] << 2u);
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(84), ctx.gpr[2]);
    ctx.set_gpr(4, ctx.gpr[23] + 0u);
    ctx.set_gpr(31, 0x08A56494u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0015_entry, 15u, 454u, 0x088419CCu>(ctx, &aot_mem) && ctx.pc == 0x08A56494u) goto L_08A56494;
    return;
L_08A56494:
    ctx.set_gpr(3, rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(84)));
    ctx.set_gpr(3, ctx.gpr[2] + ctx.gpr[3]);
    ctx.set_gpr(4, rt.memory().aot_load32(ctx.gpr[3] + static_cast<std::uint32_t>(0)));
    ctx.set_gpr(3, rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(88)));
    ctx.set_gpr(5, ctx.gpr[3] | ctx.gpr[4]);
    ctx.set_gpr(3, rt.memory().aot_load32(ctx.gpr[23] + static_cast<std::uint32_t>(8)));
    { const bool branch_taken = ctx.gpr[3] == 0u;
    // nop
      if (branch_taken) {
          goto L_08A564D8;
      }
      goto L_08A564B4;
    }
L_08A564B4:
    { const bool branch_taken = static_cast<std::int32_t>(ctx.gpr[30]) < 0;
    // nop
      if (branch_taken) {
          goto L_08A564D8;
      }
      goto L_08A564BC;
    }
L_08A564BC:
    ctx.set_gpr(1, static_cast<std::int32_t>(ctx.gpr[30]) < static_cast<std::int32_t>(ctx.gpr[3]) ? 1u : 0u);
    { const bool branch_taken = ctx.gpr[1] == 0u;
    // nop
      if (branch_taken) {
          goto L_08A564D8;
      }
      goto L_08A564C8;
    }
L_08A564C8:
    ctx.set_gpr(4, rt.memory().aot_load32(ctx.gpr[23] + static_cast<std::uint32_t>(16)));
    ctx.set_gpr(3, rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(84)));
    ctx.set_gpr(3, ctx.gpr[4] + ctx.gpr[3]);
    rt.memory().aot_store32(ctx.gpr[3] + static_cast<std::uint32_t>(0), ctx.gpr[5]);
    goto L_08A564D8;
L_08A564D8:
    ctx.set_gpr(3, rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(124)));
    { const std::int64_t product = static_cast<std::int64_t>(static_cast<std::int32_t>(ctx.gpr[22])) * static_cast<std::int64_t>(static_cast<std::int32_t>(ctx.gpr[3])); ctx.lo = static_cast<std::uint32_t>(product); ctx.hi = static_cast<std::uint32_t>(static_cast<std::uint64_t>(product) >> 32u); }
    ctx.set_gpr(4, ctx.lo);
    ctx.set_gpr(3, rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(140)));
    ctx.set_gpr(3, ctx.gpr[3] + ctx.gpr[4]);
    rt.memory().aot_store32(ctx.gpr[3] + static_cast<std::uint32_t>(0), std::bit_cast<std::uint32_t>(ctx.fpr[23]));
    rt.memory().aot_store32(ctx.gpr[3] + static_cast<std::uint32_t>(4), std::bit_cast<std::uint32_t>(ctx.fpr[22]));
    rt.memory().aot_store32(ctx.gpr[3] + static_cast<std::uint32_t>(8), std::bit_cast<std::uint32_t>(ctx.fpr[21]));
    ctx.set_gpr(16, ctx.gpr[16] + static_cast<std::uint32_t>(1));
    goto L_08A564FC;
L_08A564FC:
    ctx.set_gpr(3, rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(92)));
    ctx.set_gpr(3, ctx.gpr[16] < ctx.gpr[3] ? 1u : 0u);
    { const bool branch_taken = ctx.gpr[3] != 0u;
    // nop
      if (branch_taken) {
          goto L_08A56384;
      }
      goto L_08A5650C;
    }
L_08A5650C:
    ctx.set_gpr(3, rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(96)));
    { const bool branch_taken = ctx.gpr[3] == 0u;
    // nop
      if (branch_taken) {
          goto L_08A56734;
      }
      goto L_08A56518;
    }
L_08A56518:
    ctx.set_gpr(3, rt.memory().aot_load32(ctx.gpr[21] + static_cast<std::uint32_t>(48)));
    ctx.set_gpr(3, rt.memory().aot_load32(ctx.gpr[3] + static_cast<std::uint32_t>(36)));
    ctx.set_gpr(3, rt.memory().aot_load32(ctx.gpr[3] + static_cast<std::uint32_t>(16)));
    ctx.set_gpr(3, ctx.gpr[3] + ctx.gpr[17]);
    ctx.set_gpr(16, rt.memory().aot_load32(ctx.gpr[3] + static_cast<std::uint32_t>(0)));
    { const bool branch_taken = ctx.gpr[16] == 0u;
    // nop
      if (branch_taken) {
          goto L_08A56734;
      }
      goto L_08A56534;
    }
L_08A56534:
    ctx.set_gpr(22, rt.memory().aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(8)));
    { const bool branch_taken = static_cast<std::int32_t>(ctx.gpr[22]) > 0;
    // nop
      if (branch_taken) {
          goto L_08A56598;
      }
      goto L_08A56540;
    }
L_08A56540:
    ctx.set_gpr(3, rt.memory().aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(12)));
    ctx.set_gpr(1, static_cast<std::int32_t>(ctx.gpr[22]) < static_cast<std::int32_t>(ctx.gpr[3]) ? 1u : 0u);
    { const bool branch_taken = ctx.gpr[1] == 0u;
    // nop
      if (branch_taken) {
          goto L_08A56564;
      }
      goto L_08A56550;
    }
L_08A56550:
    ctx.set_gpr(3, rt.memory().aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(8)));
    ctx.set_gpr(3, ctx.gpr[3] + static_cast<std::uint32_t>(1));
    rt.memory().aot_store32(ctx.gpr[16] + static_cast<std::uint32_t>(8), ctx.gpr[3]);
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_08A56578;
      }
      goto L_08A56564;
    }
L_08A56564:
    ctx.set_gpr(5, ctx.gpr[22] + static_cast<std::uint32_t>(1));
    ctx.set_gpr(4, ctx.gpr[16] + 0u);
    ctx.set_gpr(6, 0u + static_cast<std::uint32_t>(4));
    ctx.set_gpr(31, 0x08A56578u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0066_entry, 66u, 795u, 0x0890FB1Cu>(ctx, &aot_mem) && ctx.pc == 0x08A56578u) goto L_08A56578;
    return;
L_08A56578:
    ctx.set_gpr(3, 2229u << 16u);
    ctx.set_gpr(5, rt.memory().aot_load32(ctx.gpr[3] + static_cast<std::uint32_t>(22696)));
    ctx.set_gpr(4, ctx.gpr[22] << 2u);
    ctx.set_gpr(3, rt.memory().aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(16)));
    ctx.set_gpr(3, ctx.gpr[3] + ctx.gpr[4]);
    rt.memory().aot_store32(ctx.gpr[3] + static_cast<std::uint32_t>(0), ctx.gpr[5]);
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_08A56734;
      }
      goto L_08A56598;
    }
L_08A56598:
    ctx.set_gpr(3, ctx.gpr[22] + static_cast<std::uint32_t>(-1));
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(80), ctx.gpr[3]);
    ctx.set_gpr(16, 0u + 0u);
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_08A56724;
      }
      goto L_08A565AC;
    }
L_08A565AC:
    ctx.set_gpr(2, rt.memory().aot_load32(ctx.gpr[21] + static_cast<std::uint32_t>(48)));
    ctx.set_gpr(3, rt.memory().aot_load32(ctx.gpr[2] + static_cast<std::uint32_t>(36)));
    ctx.set_gpr(3, rt.memory().aot_load32(ctx.gpr[3] + static_cast<std::uint32_t>(16)));
    ctx.set_gpr(3, ctx.gpr[3] + ctx.gpr[17]);
    ctx.set_gpr(3, rt.memory().aot_load32(ctx.gpr[3] + static_cast<std::uint32_t>(0)));
    ctx.set_gpr(4, ctx.gpr[16] << 2u);
    ctx.set_gpr(3, rt.memory().aot_load32(ctx.gpr[3] + static_cast<std::uint32_t>(16)));
    ctx.set_gpr(3, ctx.gpr[3] + ctx.gpr[4]);
    ctx.set_gpr(22, rt.memory().aot_load32(ctx.gpr[3] + static_cast<std::uint32_t>(0)));
    ctx.set_gpr(23, rt.memory().aot_load32(ctx.gpr[21] + static_cast<std::uint32_t>(80)));
    ctx.set_gpr(30, ctx.gpr[22] >> 5u);
    ctx.set_gpr(4, ctx.gpr[30] << 2u);
    ctx.set_gpr(3, rt.memory().aot_load32(ctx.gpr[23] + static_cast<std::uint32_t>(16)));
    ctx.set_gpr(5, ctx.gpr[3] + ctx.gpr[4]);
    ctx.set_gpr(4, ctx.gpr[22] & 31u);
    ctx.set_gpr(3, 0u + static_cast<std::uint32_t>(1));
    ctx.set_gpr(3, ctx.gpr[3] << (ctx.gpr[4] & 31u));
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(76), ctx.gpr[3]);
    ctx.set_gpr(4, rt.memory().aot_load32(ctx.gpr[5] + static_cast<std::uint32_t>(0)));
    ctx.set_gpr(3, ctx.gpr[3] & ctx.gpr[4]);
    { const bool branch_taken = ctx.gpr[3] != 0u;
    // nop
      if (branch_taken) {
          goto L_08A5662C;
      }
      goto L_08A56604;
    }
L_08A56604:
    ctx.set_gpr(3, rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(112)));
    { const std::int64_t product = static_cast<std::int64_t>(static_cast<std::int32_t>(ctx.gpr[22])) * static_cast<std::int64_t>(static_cast<std::int32_t>(ctx.gpr[3])); ctx.lo = static_cast<std::uint32_t>(product); ctx.hi = static_cast<std::uint32_t>(static_cast<std::uint64_t>(product) >> 32u); }
    ctx.set_gpr(4, ctx.lo);
    ctx.set_gpr(3, rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(128)));
    ctx.set_gpr(3, ctx.gpr[3] + ctx.gpr[4]);
    ctx.fpr[23] = std::bit_cast<float>(rt.memory().aot_load32(ctx.gpr[3] + static_cast<std::uint32_t>(0)));
    ctx.fpr[22] = std::bit_cast<float>(rt.memory().aot_load32(ctx.gpr[3] + static_cast<std::uint32_t>(4)));
    ctx.fpr[21] = std::bit_cast<float>(rt.memory().aot_load32(ctx.gpr[3] + static_cast<std::uint32_t>(8)));
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_08A5664C;
      }
      goto L_08A5662C;
    }
L_08A5662C:
    ctx.set_gpr(3, rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(116)));
    { const std::int64_t product = static_cast<std::int64_t>(static_cast<std::int32_t>(ctx.gpr[22])) * static_cast<std::int64_t>(static_cast<std::int32_t>(ctx.gpr[3])); ctx.lo = static_cast<std::uint32_t>(product); ctx.hi = static_cast<std::uint32_t>(static_cast<std::uint64_t>(product) >> 32u); }
    ctx.set_gpr(4, ctx.lo);
    ctx.set_gpr(3, rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(136)));
    ctx.set_gpr(3, ctx.gpr[3] + ctx.gpr[4]);
    ctx.fpr[23] = std::bit_cast<float>(rt.memory().aot_load32(ctx.gpr[3] + static_cast<std::uint32_t>(0)));
    ctx.fpr[22] = std::bit_cast<float>(rt.memory().aot_load32(ctx.gpr[3] + static_cast<std::uint32_t>(4)));
    ctx.fpr[21] = std::bit_cast<float>(rt.memory().aot_load32(ctx.gpr[3] + static_cast<std::uint32_t>(8)));
    goto L_08A5664C;
L_08A5664C:
    ctx.fpr[0] = std::bit_cast<float>(0u);
    ctx.set_fpu_condition((!(std::isnan(ctx.fpr[0]) || std::isnan(ctx.fpr[20])) && ctx.fpr[0] == ctx.fpr[20]));
    // nop
    { const bool branch_taken = ctx.fpu_condition();
    // nop
      if (branch_taken) {
          goto L_08A566A8;
      }
      goto L_08A56660;
    }
L_08A56660:
    ctx.set_gpr(2, rt.memory().aot_load32(ctx.gpr[2] + static_cast<std::uint32_t>(32)));
    ctx.set_gpr(2, rt.memory().aot_load32(ctx.gpr[2] + static_cast<std::uint32_t>(16)));
    ctx.set_gpr(2, ctx.gpr[2] + ctx.gpr[17]);
    ctx.set_gpr(4, rt.memory().aot_load32(ctx.gpr[2] + static_cast<std::uint32_t>(0)));
    ctx.set_gpr(2, ctx.gpr[16] << 1u);
    ctx.set_gpr(2, ctx.gpr[2] + ctx.gpr[16]);
    ctx.set_gpr(3, ctx.gpr[2] << 2u);
    ctx.set_gpr(2, rt.memory().aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(16)));
    ctx.set_gpr(2, ctx.gpr[2] + ctx.gpr[3]);
    ctx.fpr[2] = std::bit_cast<float>(rt.memory().aot_load32(ctx.gpr[2] + static_cast<std::uint32_t>(0)));
    ctx.fpr[1] = std::bit_cast<float>(rt.memory().aot_load32(ctx.gpr[2] + static_cast<std::uint32_t>(4)));
    ctx.fpr[0] = std::bit_cast<float>(rt.memory().aot_load32(ctx.gpr[2] + static_cast<std::uint32_t>(8)));
    { const float fs = ctx.fpr[2]; const float ft = ctx.fpr[20]; if ((std::isinf(fs) && ft == 0.0f) || (std::isinf(ft) && fs == 0.0f)) ctx.set_fpr_bits(2, 0x7FC00000u); else ctx.fpr[2] = fs * ft; }
    { const float fs = ctx.fpr[1]; const float ft = ctx.fpr[20]; if ((std::isinf(fs) && ft == 0.0f) || (std::isinf(ft) && fs == 0.0f)) ctx.set_fpr_bits(1, 0x7FC00000u); else ctx.fpr[1] = fs * ft; }
    { const float fs = ctx.fpr[0]; const float ft = ctx.fpr[20]; if ((std::isinf(fs) && ft == 0.0f) || (std::isinf(ft) && fs == 0.0f)) ctx.set_fpr_bits(0, 0x7FC00000u); else ctx.fpr[0] = fs * ft; }
    ctx.fpr[23] = ctx.fpr[23] + ctx.fpr[2];
    ctx.fpr[22] = ctx.fpr[22] + ctx.fpr[1];
    ctx.fpr[21] = ctx.fpr[21] + ctx.fpr[0];
    goto L_08A566A8;
L_08A566A8:
    ctx.set_gpr(2, ctx.gpr[30] << 2u);
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(72), ctx.gpr[2]);
    ctx.set_gpr(4, ctx.gpr[23] + 0u);
    ctx.set_gpr(31, 0x08A566BCu);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0015_entry, 15u, 454u, 0x088419CCu>(ctx, &aot_mem) && ctx.pc == 0x08A566BCu) goto L_08A566BC;
    return;
L_08A566BC:
    ctx.set_gpr(3, rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(72)));
    ctx.set_gpr(3, ctx.gpr[2] + ctx.gpr[3]);
    ctx.set_gpr(4, rt.memory().aot_load32(ctx.gpr[3] + static_cast<std::uint32_t>(0)));
    ctx.set_gpr(3, rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(76)));
    ctx.set_gpr(5, ctx.gpr[3] | ctx.gpr[4]);
    ctx.set_gpr(3, rt.memory().aot_load32(ctx.gpr[23] + static_cast<std::uint32_t>(8)));
    { const bool branch_taken = ctx.gpr[3] == 0u;
    // nop
      if (branch_taken) {
          goto L_08A56700;
      }
      goto L_08A566DC;
    }
L_08A566DC:
    { const bool branch_taken = static_cast<std::int32_t>(ctx.gpr[30]) < 0;
    // nop
      if (branch_taken) {
          goto L_08A56700;
      }
      goto L_08A566E4;
    }
L_08A566E4:
    ctx.set_gpr(1, static_cast<std::int32_t>(ctx.gpr[30]) < static_cast<std::int32_t>(ctx.gpr[3]) ? 1u : 0u);
    { const bool branch_taken = ctx.gpr[1] == 0u;
    // nop
      if (branch_taken) {
          goto L_08A56700;
      }
      goto L_08A566F0;
    }
L_08A566F0:
    ctx.set_gpr(4, rt.memory().aot_load32(ctx.gpr[23] + static_cast<std::uint32_t>(16)));
    ctx.set_gpr(3, rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(72)));
    ctx.set_gpr(3, ctx.gpr[4] + ctx.gpr[3]);
    rt.memory().aot_store32(ctx.gpr[3] + static_cast<std::uint32_t>(0), ctx.gpr[5]);
    goto L_08A56700;
L_08A56700:
    ctx.set_gpr(3, rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(116)));
    { const std::int64_t product = static_cast<std::int64_t>(static_cast<std::int32_t>(ctx.gpr[22])) * static_cast<std::int64_t>(static_cast<std::int32_t>(ctx.gpr[3])); ctx.lo = static_cast<std::uint32_t>(product); ctx.hi = static_cast<std::uint32_t>(static_cast<std::uint64_t>(product) >> 32u); }
    ctx.set_gpr(4, ctx.lo);
    ctx.set_gpr(3, rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(136)));
    ctx.set_gpr(3, ctx.gpr[3] + ctx.gpr[4]);
    rt.memory().aot_store32(ctx.gpr[3] + static_cast<std::uint32_t>(0), std::bit_cast<std::uint32_t>(ctx.fpr[23]));
    rt.memory().aot_store32(ctx.gpr[3] + static_cast<std::uint32_t>(4), std::bit_cast<std::uint32_t>(ctx.fpr[22]));
    rt.memory().aot_store32(ctx.gpr[3] + static_cast<std::uint32_t>(8), std::bit_cast<std::uint32_t>(ctx.fpr[21]));
    ctx.set_gpr(16, ctx.gpr[16] + static_cast<std::uint32_t>(1));
    goto L_08A56724;
L_08A56724:
    ctx.set_gpr(3, rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(80)));
    ctx.set_gpr(3, ctx.gpr[16] < ctx.gpr[3] ? 1u : 0u);
    { const bool branch_taken = ctx.gpr[3] != 0u;
    // nop
      if (branch_taken) {
          goto L_08A565AC;
      }
      goto L_08A56734;
    }
L_08A56734:
    ctx.set_gpr(3, rt.memory().aot_load32(ctx.gpr[21] + static_cast<std::uint32_t>(52)));
    ctx.set_gpr(3, rt.memory().aot_load32(ctx.gpr[3] + static_cast<std::uint32_t>(16)));
    ctx.set_gpr(5, ctx.gpr[3] + ctx.gpr[17]);
    ctx.set_gpr(4, rt.memory().aot_load32(ctx.gpr[21] + static_cast<std::uint32_t>(56)));
    ctx.set_gpr(3, rt.memory().aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(8)));
    { const bool branch_taken = ctx.gpr[3] == 0u;
    // nop
      if (branch_taken) {
          goto L_08A56774;
      }
      goto L_08A56750;
    }
L_08A56750:
    { const bool branch_taken = static_cast<std::int32_t>(ctx.gpr[20]) < 0;
    // nop
      if (branch_taken) {
          goto L_08A56774;
      }
      goto L_08A56758;
    }
L_08A56758:
    ctx.set_gpr(1, static_cast<std::int32_t>(ctx.gpr[20]) < static_cast<std::int32_t>(ctx.gpr[3]) ? 1u : 0u);
    { const bool branch_taken = ctx.gpr[1] == 0u;
    // nop
      if (branch_taken) {
          goto L_08A56774;
      }
      goto L_08A56764;
    }
L_08A56764:
    ctx.fpr[0] = std::bit_cast<float>(rt.memory().aot_load32(ctx.gpr[5] + static_cast<std::uint32_t>(0)));
    ctx.set_gpr(3, rt.memory().aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(16)));
    ctx.set_gpr(3, ctx.gpr[3] + ctx.gpr[17]);
    rt.memory().aot_store32(ctx.gpr[3] + static_cast<std::uint32_t>(0), std::bit_cast<std::uint32_t>(ctx.fpr[0]));
    goto L_08A56774;
L_08A56774:
    ctx.set_gpr(20, ctx.gpr[20] + static_cast<std::uint32_t>(1));
    goto L_08A56778;
L_08A56778:
    ctx.set_gpr(3, rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(104)));
    ctx.set_gpr(3, ctx.gpr[20] < ctx.gpr[3] ? 1u : 0u);
    { const bool branch_taken = ctx.gpr[3] != 0u;
    // nop
      if (branch_taken) {
          goto L_08A56290;
      }
      goto L_08A56788;
    }
L_08A56788:
    ctx.set_gpr(3, rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(96)));
    { const bool branch_taken = ctx.gpr[3] == 0u;
    // nop
      if (branch_taken) {
          goto L_08A5684C;
      }
      goto L_08A56794;
    }
L_08A56794:
    ctx.set_gpr(6, 0u + 0u);
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_08A5683C;
      }
      goto L_08A567A0;
    }
L_08A567A0:
    ctx.set_gpr(5, rt.memory().aot_load32(ctx.gpr[21] + static_cast<std::uint32_t>(80)));
    ctx.set_gpr(3, ctx.gpr[6] >> 5u);
    ctx.set_gpr(4, ctx.gpr[3] << 2u);
    ctx.set_gpr(3, rt.memory().aot_load32(ctx.gpr[5] + static_cast<std::uint32_t>(16)));
    ctx.set_gpr(5, ctx.gpr[3] + ctx.gpr[4]);
    ctx.set_gpr(4, ctx.gpr[6] & 31u);
    ctx.set_gpr(3, 0u + static_cast<std::uint32_t>(1));
    ctx.set_gpr(4, ctx.gpr[3] << (ctx.gpr[4] & 31u));
    ctx.set_gpr(3, rt.memory().aot_load32(ctx.gpr[5] + static_cast<std::uint32_t>(0)));
    ctx.set_gpr(3, ctx.gpr[4] & ctx.gpr[3]);
    { const bool branch_taken = ctx.gpr[3] == 0u;
    // nop
      if (branch_taken) {
          goto L_08A56838;
      }
      goto L_08A567D0;
    }
L_08A567D0:
    ctx.set_gpr(3, rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(116)));
    { const std::int64_t product = static_cast<std::int64_t>(static_cast<std::int32_t>(ctx.gpr[6])) * static_cast<std::int64_t>(static_cast<std::int32_t>(ctx.gpr[3])); ctx.lo = static_cast<std::uint32_t>(product); ctx.hi = static_cast<std::uint32_t>(static_cast<std::uint64_t>(product) >> 32u); }
    ctx.set_gpr(4, ctx.lo);
    ctx.set_gpr(3, rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(136)));
    ctx.set_gpr(4, ctx.gpr[3] + ctx.gpr[4]);
    ctx.fpr[3] = std::bit_cast<float>(rt.memory().aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(4)));
    ctx.fpr[0] = std::bit_cast<float>(rt.memory().aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(0)));
    ctx.fpr[2] = std::bit_cast<float>(rt.memory().aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(8)));
    { const float fs = ctx.fpr[0]; const float ft = ctx.fpr[0]; if ((std::isinf(fs) && ft == 0.0f) || (std::isinf(ft) && fs == 0.0f)) ctx.set_fpr_bits(1, 0x7FC00000u); else ctx.fpr[1] = fs * ft; }
    { const float fs = ctx.fpr[3]; const float ft = ctx.fpr[3]; if ((std::isinf(fs) && ft == 0.0f) || (std::isinf(ft) && fs == 0.0f)) ctx.set_fpr_bits(0, 0x7FC00000u); else ctx.fpr[0] = fs * ft; }
    ctx.fpr[1] = ctx.fpr[1] + ctx.fpr[0];
    { const float fs = ctx.fpr[2]; const float ft = ctx.fpr[2]; if ((std::isinf(fs) && ft == 0.0f) || (std::isinf(ft) && fs == 0.0f)) ctx.set_fpr_bits(0, 0x7FC00000u); else ctx.fpr[0] = fs * ft; }
    ctx.fpr[0] = ctx.fpr[0] + ctx.fpr[1];
    ctx.fpr[1] = std::sqrt(ctx.fpr[0]);
    ctx.set_gpr(3, 16256u << 16u);
    ctx.fpr[0] = std::bit_cast<float>(ctx.gpr[3]);
    ctx.fpr[1] = ctx.fpr[0] / ctx.fpr[1];
    ctx.fpr[0] = std::bit_cast<float>(rt.memory().aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(0)));
    { const float fs = ctx.fpr[0]; const float ft = ctx.fpr[1]; if ((std::isinf(fs) && ft == 0.0f) || (std::isinf(ft) && fs == 0.0f)) ctx.set_fpr_bits(0, 0x7FC00000u); else ctx.fpr[0] = fs * ft; }
    rt.memory().aot_store32(ctx.gpr[4] + static_cast<std::uint32_t>(0), std::bit_cast<std::uint32_t>(ctx.fpr[0]));
    ctx.fpr[0] = std::bit_cast<float>(rt.memory().aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(4)));
    { const float fs = ctx.fpr[0]; const float ft = ctx.fpr[1]; if ((std::isinf(fs) && ft == 0.0f) || (std::isinf(ft) && fs == 0.0f)) ctx.set_fpr_bits(0, 0x7FC00000u); else ctx.fpr[0] = fs * ft; }
    rt.memory().aot_store32(ctx.gpr[4] + static_cast<std::uint32_t>(4), std::bit_cast<std::uint32_t>(ctx.fpr[0]));
    ctx.fpr[0] = std::bit_cast<float>(rt.memory().aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(8)));
    { const float fs = ctx.fpr[0]; const float ft = ctx.fpr[1]; if ((std::isinf(fs) && ft == 0.0f) || (std::isinf(ft) && fs == 0.0f)) ctx.set_fpr_bits(0, 0x7FC00000u); else ctx.fpr[0] = fs * ft; }
    rt.memory().aot_store32(ctx.gpr[4] + static_cast<std::uint32_t>(8), std::bit_cast<std::uint32_t>(ctx.fpr[0]));
    goto L_08A56838;
L_08A56838:
    ctx.set_gpr(6, ctx.gpr[6] + static_cast<std::uint32_t>(1));
    goto L_08A5683C;
L_08A5683C:
    ctx.set_gpr(3, rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(108)));
    ctx.set_gpr(3, ctx.gpr[6] < ctx.gpr[3] ? 1u : 0u);
    { const bool branch_taken = ctx.gpr[3] != 0u;
    // nop
      if (branch_taken) {
          goto L_08A567A0;
      }
      goto L_08A5684C;
    }
L_08A5684C:
    ctx.set_gpr(3, rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(100)));
    { const bool branch_taken = ctx.gpr[3] == 0u;
    // nop
      if (branch_taken) {
          goto L_08A56890;
      }
      goto L_08A56858;
    }
L_08A56858:
    ctx.set_gpr(4, ctx.gpr[19] + 0u);
    ctx.set_gpr(5, ctx.gpr[29] + static_cast<std::uint32_t>(200));
    ctx.set_gpr(6, 0u + static_cast<std::uint32_t>(1));
    ctx.set_gpr(25, rt.memory().aot_load32(ctx.gpr[19] + static_cast<std::uint32_t>(0)));
    ctx.set_gpr(25, rt.memory().aot_load32(ctx.gpr[25] + static_cast<std::uint32_t>(108)));
    jump_target = ctx.gpr[25];
    ctx.set_gpr(31, 0x08A56874u);
    // nop
    ctx.pc = jump_target;
    if (rt.invoke_chained_call(ctx, &aot_mem) && ctx.pc == 0x08A56874u) goto L_08A56874;
    return;
L_08A56874:
    ctx.set_gpr(4, ctx.gpr[18] + 0u);
    ctx.set_gpr(5, ctx.gpr[29] + static_cast<std::uint32_t>(228));
    ctx.set_gpr(6, 0u + 0u);
    ctx.set_gpr(25, rt.memory().aot_load32(ctx.gpr[18] + static_cast<std::uint32_t>(0)));
    ctx.set_gpr(25, rt.memory().aot_load32(ctx.gpr[25] + static_cast<std::uint32_t>(108)));
    jump_target = ctx.gpr[25];
    ctx.set_gpr(31, 0x08A56890u);
    // nop
    ctx.pc = jump_target;
    if (rt.invoke_chained_call(ctx, &aot_mem) && ctx.pc == 0x08A56890u) goto L_08A56890;
    return;
L_08A56890:
    ctx.set_gpr(3, rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(96)));
    { const bool branch_taken = ctx.gpr[3] == 0u;
    // nop
      if (branch_taken) {
          goto L_08A568D4;
      }
      goto L_08A5689C;
    }
L_08A5689C:
    ctx.set_gpr(4, ctx.gpr[19] + 0u);
    ctx.set_gpr(5, ctx.gpr[29] + static_cast<std::uint32_t>(144));
    ctx.set_gpr(6, 0u + static_cast<std::uint32_t>(1));
    ctx.set_gpr(25, rt.memory().aot_load32(ctx.gpr[19] + static_cast<std::uint32_t>(0)));
    ctx.set_gpr(25, rt.memory().aot_load32(ctx.gpr[25] + static_cast<std::uint32_t>(108)));
    jump_target = ctx.gpr[25];
    ctx.set_gpr(31, 0x08A568B8u);
    // nop
    ctx.pc = jump_target;
    if (rt.invoke_chained_call(ctx, &aot_mem) && ctx.pc == 0x08A568B8u) goto L_08A568B8;
    return;
L_08A568B8:
    ctx.set_gpr(4, ctx.gpr[18] + 0u);
    ctx.set_gpr(5, ctx.gpr[29] + static_cast<std::uint32_t>(172));
    ctx.set_gpr(6, 0u + 0u);
    ctx.set_gpr(25, rt.memory().aot_load32(ctx.gpr[18] + static_cast<std::uint32_t>(0)));
    ctx.set_gpr(25, rt.memory().aot_load32(ctx.gpr[25] + static_cast<std::uint32_t>(108)));
    jump_target = ctx.gpr[25];
    ctx.set_gpr(31, 0x08A568D4u);
    // nop
    ctx.pc = jump_target;
    if (rt.invoke_chained_call(ctx, &aot_mem) && ctx.pc == 0x08A568D4u) goto L_08A568D4;
    return;
L_08A568D4:
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
    ctx.fpr[23] = std::bit_cast<float>(rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(20)));
    ctx.fpr[22] = std::bit_cast<float>(rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(16)));
    ctx.fpr[21] = std::bit_cast<float>(rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(12)));
    ctx.fpr[20] = std::bit_cast<float>(rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(8)));
    ctx.set_gpr(29, ctx.gpr[29] + static_cast<std::uint32_t>(256));
    jump_target = ctx.gpr[31];
    // nop
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_08A56918:
    ctx.set_gpr(29, ctx.gpr[29] + static_cast<std::uint32_t>(-16));
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(12), ctx.gpr[31]);
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(8), ctx.gpr[16]);
    ctx.set_gpr(16, ctx.gpr[4] + 0u);
    ctx.set_gpr(4, rt.memory().aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(72)));
    { const bool branch_taken = ctx.gpr[4] == 0u;
    // nop
      if (branch_taken) {
          goto L_08A56940;
      }
      goto L_08A56934;
    }
L_08A56934:
    ctx.set_gpr(5, ctx.gpr[16] + 0u);
    ctx.set_gpr(31, 0x08A56940u);
    // nop
    goto L_08A57934;
L_08A56940:
    ctx.set_gpr(3, rt.memory().aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(68)));
    { const bool branch_taken = ctx.gpr[3] == 0u;
    // nop
      if (branch_taken) {
          goto L_08A56958;
      }
      goto L_08A5694C;
    }
L_08A5694C:
    ctx.set_gpr(4, ctx.gpr[16] + 0u);
    ctx.set_gpr(31, 0x08A56958u);
    // nop
    goto L_08A55F08;
L_08A56958:
    ctx.set_gpr(31, rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(12)));
    ctx.set_gpr(16, rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(8)));
    ctx.set_gpr(29, ctx.gpr[29] + static_cast<std::uint32_t>(16));
    jump_target = ctx.gpr[31];
    // nop
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_08A5696C:
    ctx.set_gpr(29, ctx.gpr[29] + static_cast<std::uint32_t>(-64));
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(28), ctx.gpr[31]);
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(24), ctx.gpr[19]);
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(20), ctx.gpr[18]);
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(16), ctx.gpr[17]);
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(12), ctx.gpr[16]);
    ctx.set_gpr(18, ctx.gpr[4] + 0u);
    ctx.set_gpr(4, ctx.gpr[18] + static_cast<std::uint32_t>(48));
    ctx.set_gpr(31, 0x08A56994u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0085_entry, 85u, 61u, 0x089584C4u>(ctx, &aot_mem) && ctx.pc == 0x08A56994u) goto L_08A56994;
    return;
L_08A56994:
    ctx.set_gpr(2, rt.memory().aot_load32(ctx.gpr[18] + static_cast<std::uint32_t>(48)));
    ctx.set_gpr(2, rt.memory().aot_load32(ctx.gpr[2] + static_cast<std::uint32_t>(8)));
    { const bool branch_taken = ctx.gpr[2] == 0u;
    // nop
      if (branch_taken) {
          goto L_08A56ADC;
      }
      goto L_08A569A4;
    }
L_08A569A4:
    ctx.set_gpr(4, ctx.gpr[18] + 0u);
    ctx.set_gpr(31, 0x08A569B0u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0081_entry, 81u, 41u, 0x0894835Cu>(ctx, &aot_mem) && ctx.pc == 0x08A569B0u) goto L_08A569B0;
    return;
L_08A569B0:
    ctx.set_gpr(4, ctx.gpr[2] + 0u);
    ctx.set_gpr(31, 0x08A569BCu);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0098_entry, 98u, 421u, 0x0898E544u>(ctx, &aot_mem) && ctx.pc == 0x08A569BCu) goto L_08A569BC;
    return;
L_08A569BC:
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(48), ctx.gpr[2]);
    ctx.set_gpr(4, ctx.gpr[18] + static_cast<std::uint32_t>(68));
    ctx.set_gpr(5, ctx.gpr[2] + 0u);
    ctx.set_gpr(31, 0x08A569D0u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0085_entry, 85u, 61u, 0x089584C4u>(ctx, &aot_mem) && ctx.pc == 0x08A569D0u) goto L_08A569D0;
    return;
L_08A569D0:
    ctx.set_gpr(4, rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(48)));
    { const bool branch_taken = ctx.gpr[4] == 0u;
    // nop
      if (branch_taken) {
          goto L_08A569E4;
      }
      goto L_08A569DC;
    }
L_08A569DC:
    ctx.set_gpr(31, 0x08A569E4u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0014_entry, 14u, 257u, 0x0883D454u>(ctx, &aot_mem) && ctx.pc == 0x08A569E4u) goto L_08A569E4;
    return;
L_08A569E4:
    ctx.set_gpr(2, rt.memory().aot_load32(ctx.gpr[18] + static_cast<std::uint32_t>(48)));
    ctx.set_gpr(4, rt.memory().aot_load32(ctx.gpr[2] + static_cast<std::uint32_t>(8)));
    ctx.set_gpr(16, rt.memory().aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(20)));
    ctx.set_gpr(19, rt.memory().aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(12)));
    ctx.set_gpr(17, rt.memory().aot_load32(ctx.gpr[18] + static_cast<std::uint32_t>(68)));
    ctx.set_gpr(25, rt.memory().aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(0)));
    ctx.set_gpr(25, rt.memory().aot_load32(ctx.gpr[25] + static_cast<std::uint32_t>(100)));
    jump_target = ctx.gpr[25];
    ctx.set_gpr(31, 0x08A56A08u);
    // nop
    ctx.pc = jump_target;
    if (rt.invoke_chained_call(ctx, &aot_mem) && ctx.pc == 0x08A56A08u) goto L_08A56A08;
    return;
L_08A56A08:
    ctx.set_gpr(7, ctx.gpr[16] | 4u);
    ctx.set_gpr(4, ctx.gpr[17] + 0u);
    ctx.set_gpr(5, ctx.gpr[2] + 0u);
    ctx.set_gpr(6, ctx.gpr[19] + 0u);
    ctx.set_gpr(8, 0u + 0u);
    ctx.set_gpr(25, rt.memory().aot_load32(ctx.gpr[17] + static_cast<std::uint32_t>(0)));
    ctx.set_gpr(25, rt.memory().aot_load32(ctx.gpr[25] + static_cast<std::uint32_t>(96)));
    jump_target = ctx.gpr[25];
    ctx.set_gpr(31, 0x08A56A2Cu);
    // nop
    ctx.pc = jump_target;
    if (rt.invoke_chained_call(ctx, &aot_mem) && ctx.pc == 0x08A56A2Cu) goto L_08A56A2C;
    return;
L_08A56A2C:
    ctx.set_gpr(2, rt.memory().aot_load32(ctx.gpr[18] + static_cast<std::uint32_t>(48)));
    ctx.set_gpr(17, rt.memory().aot_load32(ctx.gpr[2] + static_cast<std::uint32_t>(8)));
    ctx.set_gpr(4, ctx.gpr[17] + 0u);
    ctx.set_gpr(25, rt.memory().aot_load32(ctx.gpr[17] + static_cast<std::uint32_t>(0)));
    ctx.set_gpr(25, rt.memory().aot_load32(ctx.gpr[25] + static_cast<std::uint32_t>(100)));
    jump_target = ctx.gpr[25];
    ctx.set_gpr(31, 0x08A56A48u);
    // nop
    ctx.pc = jump_target;
    if (rt.invoke_chained_call(ctx, &aot_mem) && ctx.pc == 0x08A56A48u) goto L_08A56A48;
    return;
L_08A56A48:
    ctx.set_gpr(2, rt.memory().aot_load32(ctx.gpr[2] + static_cast<std::uint32_t>(0)));
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(60), ctx.gpr[2]);
    ctx.set_gpr(4, ctx.gpr[18] + 0u);
    ctx.set_gpr(31, 0x08A56A5Cu);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0081_entry, 81u, 41u, 0x0894835Cu>(ctx, &aot_mem) && ctx.pc == 0x08A56A5Cu) goto L_08A56A5C;
    return;
L_08A56A5C:
    ctx.set_gpr(4, ctx.gpr[2] + 0u);
    ctx.set_gpr(31, 0x08A56A68u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0128_entry, 128u, 335u, 0x08A04EA0u>(ctx, &aot_mem) && ctx.pc == 0x08A56A68u) goto L_08A56A68;
    return;
L_08A56A68:
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(56), ctx.gpr[2]);
    ctx.set_gpr(16, 0u + 0u);
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_08A56A9C;
      }
      goto L_08A56A78;
    }
L_08A56A78:
    ctx.set_gpr(4, rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(56)));
    ctx.set_gpr(5, ctx.gpr[17] + 0u);
    ctx.set_gpr(6, rt.memory().aot_load32(ctx.gpr[18] + static_cast<std::uint32_t>(68)));
    ctx.set_gpr(7, ctx.gpr[16] + 0u);
    ctx.set_gpr(8, ctx.gpr[16] + 0u);
    ctx.set_gpr(9, ctx.gpr[29] + static_cast<std::uint32_t>(60));
    ctx.set_gpr(31, 0x08A56A98u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0153_entry, 153u, 380u, 0x08A6A1B8u>(ctx, &aot_mem) && ctx.pc == 0x08A56A98u) goto L_08A56A98;
    return;
L_08A56A98:
    ctx.set_gpr(16, ctx.gpr[16] + static_cast<std::uint32_t>(1));
    goto L_08A56A9C;
L_08A56A9C:
    ctx.set_gpr(2, rt.memory().aot_load32(ctx.gpr[18] + static_cast<std::uint32_t>(48)));
    ctx.set_gpr(2, rt.memory().aot_load32(ctx.gpr[2] + static_cast<std::uint32_t>(8)));
    ctx.set_gpr(2, rt.memory().aot_load32(ctx.gpr[2] + static_cast<std::uint32_t>(12)));
    ctx.set_gpr(2, ctx.gpr[16] < ctx.gpr[2] ? 1u : 0u);
    { const bool branch_taken = ctx.gpr[2] != 0u;
    // nop
      if (branch_taken) {
          goto L_08A56A78;
      }
      goto L_08A56AB4;
    }
L_08A56AB4:
    ctx.set_gpr(4, rt.memory().aot_load32(ctx.gpr[18] + static_cast<std::uint32_t>(68)));
    ctx.set_gpr(25, rt.memory().aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(0)));
    ctx.set_gpr(25, rt.memory().aot_load32(ctx.gpr[25] + static_cast<std::uint32_t>(184)));
    jump_target = ctx.gpr[25];
    ctx.set_gpr(31, 0x08A56AC8u);
    // nop
    ctx.pc = jump_target;
    if (rt.invoke_chained_call(ctx, &aot_mem) && ctx.pc == 0x08A56AC8u) goto L_08A56AC8;
    return;
L_08A56AC8:
    ctx.set_gpr(4, rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(56)));
    { const bool branch_taken = ctx.gpr[4] == 0u;
    // nop
      if (branch_taken) {
          goto L_08A56ADC;
      }
      goto L_08A56AD4;
    }
L_08A56AD4:
    ctx.set_gpr(31, 0x08A56ADCu);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0014_entry, 14u, 257u, 0x0883D454u>(ctx, &aot_mem) && ctx.pc == 0x08A56ADCu) goto L_08A56ADC;
    return;
L_08A56ADC:
    ctx.set_gpr(2, rt.memory().aot_load32(ctx.gpr[18] + static_cast<std::uint32_t>(48)));
    ctx.set_gpr(16, rt.memory().aot_load32(ctx.gpr[2] + static_cast<std::uint32_t>(20)));
    ctx.set_gpr(4, ctx.gpr[18] + 0u);
    ctx.set_gpr(31, 0x08A56AF0u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0081_entry, 81u, 41u, 0x0894835Cu>(ctx, &aot_mem) && ctx.pc == 0x08A56AF0u) goto L_08A56AF0;
    return;
L_08A56AF0:
    ctx.set_gpr(4, ctx.gpr[2] + 0u);
    ctx.set_gpr(31, 0x08A56AFCu);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0061_entry, 61u, 38u, 0x088F8384u>(ctx, &aot_mem) && ctx.pc == 0x08A56AFCu) goto L_08A56AFC;
    return;
L_08A56AFC:
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(44), ctx.gpr[2]);
    ctx.set_gpr(4, ctx.gpr[18] + static_cast<std::uint32_t>(52));
    ctx.set_gpr(5, ctx.gpr[2] + 0u);
    ctx.set_gpr(31, 0x08A56B10u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0085_entry, 85u, 61u, 0x089584C4u>(ctx, &aot_mem) && ctx.pc == 0x08A56B10u) goto L_08A56B10;
    return;
L_08A56B10:
    ctx.set_gpr(4, rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(44)));
    { const bool branch_taken = ctx.gpr[4] == 0u;
    // nop
      if (branch_taken) {
          goto L_08A56B24;
      }
      goto L_08A56B1C;
    }
L_08A56B1C:
    ctx.set_gpr(31, 0x08A56B24u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0014_entry, 14u, 257u, 0x0883D454u>(ctx, &aot_mem) && ctx.pc == 0x08A56B24u) goto L_08A56B24;
    return;
L_08A56B24:
    ctx.set_gpr(4, ctx.gpr[18] + 0u);
    ctx.set_gpr(31, 0x08A56B30u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0081_entry, 81u, 41u, 0x0894835Cu>(ctx, &aot_mem) && ctx.pc == 0x08A56B30u) goto L_08A56B30;
    return;
L_08A56B30:
    ctx.set_gpr(4, ctx.gpr[2] + 0u);
    ctx.set_gpr(31, 0x08A56B3Cu);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0061_entry, 61u, 38u, 0x088F8384u>(ctx, &aot_mem) && ctx.pc == 0x08A56B3Cu) goto L_08A56B3C;
    return;
L_08A56B3C:
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(40), ctx.gpr[2]);
    ctx.set_gpr(4, ctx.gpr[18] + static_cast<std::uint32_t>(56));
    ctx.set_gpr(5, ctx.gpr[2] + 0u);
    ctx.set_gpr(31, 0x08A56B50u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0085_entry, 85u, 61u, 0x089584C4u>(ctx, &aot_mem) && ctx.pc == 0x08A56B50u) goto L_08A56B50;
    return;
L_08A56B50:
    ctx.set_gpr(4, rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(40)));
    { const bool branch_taken = ctx.gpr[4] == 0u;
    // nop
      if (branch_taken) {
          goto L_08A56B64;
      }
      goto L_08A56B5C;
    }
L_08A56B5C:
    ctx.set_gpr(31, 0x08A56B64u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0014_entry, 14u, 257u, 0x0883D454u>(ctx, &aot_mem) && ctx.pc == 0x08A56B64u) goto L_08A56B64;
    return;
L_08A56B64:
    ctx.set_gpr(4, ctx.gpr[18] + 0u);
    ctx.set_gpr(31, 0x08A56B70u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0081_entry, 81u, 41u, 0x0894835Cu>(ctx, &aot_mem) && ctx.pc == 0x08A56B70u) goto L_08A56B70;
    return;
L_08A56B70:
    ctx.set_gpr(4, ctx.gpr[2] + 0u);
    ctx.set_gpr(31, 0x08A56B7Cu);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0060_entry, 60u, 747u, 0x088F7F7Cu>(ctx, &aot_mem) && ctx.pc == 0x08A56B7Cu) goto L_08A56B7C;
    return;
L_08A56B7C:
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(36), ctx.gpr[2]);
    ctx.set_gpr(4, ctx.gpr[18] + static_cast<std::uint32_t>(60));
    ctx.set_gpr(5, ctx.gpr[2] + 0u);
    ctx.set_gpr(31, 0x08A56B90u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0085_entry, 85u, 61u, 0x089584C4u>(ctx, &aot_mem) && ctx.pc == 0x08A56B90u) goto L_08A56B90;
    return;
L_08A56B90:
    ctx.set_gpr(4, rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(36)));
    { const bool branch_taken = ctx.gpr[4] == 0u;
    // nop
      if (branch_taken) {
          goto L_08A56BA4;
      }
      goto L_08A56B9C;
    }
L_08A56B9C:
    ctx.set_gpr(31, 0x08A56BA4u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0014_entry, 14u, 257u, 0x0883D454u>(ctx, &aot_mem) && ctx.pc == 0x08A56BA4u) goto L_08A56BA4;
    return;
L_08A56BA4:
    ctx.set_gpr(4, rt.memory().aot_load32(ctx.gpr[18] + static_cast<std::uint32_t>(52)));
    { const bool branch_taken = static_cast<std::int32_t>(ctx.gpr[16]) < 0;
    // nop
      if (branch_taken) {
          goto L_08A56BDC;
      }
      goto L_08A56BB0;
    }
L_08A56BB0:
    ctx.set_gpr(2, rt.memory().aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(12)));
    ctx.set_gpr(1, static_cast<std::int32_t>(ctx.gpr[2]) < static_cast<std::int32_t>(ctx.gpr[16]) ? 1u : 0u);
    { const bool branch_taken = ctx.gpr[1] != 0u;
    // nop
      if (branch_taken) {
          goto L_08A56BCC;
      }
      goto L_08A56BC0;
    }
L_08A56BC0:
    rt.memory().aot_store32(ctx.gpr[4] + static_cast<std::uint32_t>(8), ctx.gpr[16]);
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_08A56BDC;
      }
      goto L_08A56BCC;
    }
L_08A56BCC:
    ctx.set_gpr(5, ctx.gpr[16] + 0u);
    ctx.set_gpr(6, 0u + static_cast<std::uint32_t>(4));
    ctx.set_gpr(31, 0x08A56BDCu);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0066_entry, 66u, 795u, 0x0890FB1Cu>(ctx, &aot_mem) && ctx.pc == 0x08A56BDCu) goto L_08A56BDC;
    return;
L_08A56BDC:
    ctx.set_gpr(4, rt.memory().aot_load32(ctx.gpr[18] + static_cast<std::uint32_t>(56)));
    { const bool branch_taken = static_cast<std::int32_t>(ctx.gpr[16]) < 0;
    // nop
      if (branch_taken) {
          goto L_08A56C14;
      }
      goto L_08A56BE8;
    }
L_08A56BE8:
    ctx.set_gpr(2, rt.memory().aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(12)));
    ctx.set_gpr(1, static_cast<std::int32_t>(ctx.gpr[2]) < static_cast<std::int32_t>(ctx.gpr[16]) ? 1u : 0u);
    { const bool branch_taken = ctx.gpr[1] != 0u;
    // nop
      if (branch_taken) {
          goto L_08A56C04;
      }
      goto L_08A56BF8;
    }
L_08A56BF8:
    rt.memory().aot_store32(ctx.gpr[4] + static_cast<std::uint32_t>(8), ctx.gpr[16]);
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_08A56C14;
      }
      goto L_08A56C04;
    }
L_08A56C04:
    ctx.set_gpr(5, ctx.gpr[16] + 0u);
    ctx.set_gpr(6, 0u + static_cast<std::uint32_t>(4));
    ctx.set_gpr(31, 0x08A56C14u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0066_entry, 66u, 795u, 0x0890FB1Cu>(ctx, &aot_mem) && ctx.pc == 0x08A56C14u) goto L_08A56C14;
    return;
L_08A56C14:
    ctx.set_gpr(4, rt.memory().aot_load32(ctx.gpr[18] + static_cast<std::uint32_t>(60)));
    { const bool branch_taken = static_cast<std::int32_t>(ctx.gpr[16]) < 0;
    // nop
      if (branch_taken) {
          goto L_08A56C4C;
      }
      goto L_08A56C20;
    }
L_08A56C20:
    ctx.set_gpr(2, rt.memory().aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(12)));
    ctx.set_gpr(1, static_cast<std::int32_t>(ctx.gpr[2]) < static_cast<std::int32_t>(ctx.gpr[16]) ? 1u : 0u);
    { const bool branch_taken = ctx.gpr[1] != 0u;
    // nop
      if (branch_taken) {
          goto L_08A56C3C;
      }
      goto L_08A56C30;
    }
L_08A56C30:
    rt.memory().aot_store32(ctx.gpr[4] + static_cast<std::uint32_t>(8), ctx.gpr[16]);
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_08A56C4C;
      }
      goto L_08A56C3C;
    }
L_08A56C3C:
    ctx.set_gpr(5, ctx.gpr[16] + 0u);
    ctx.set_gpr(6, 0u + static_cast<std::uint32_t>(1));
    ctx.set_gpr(31, 0x08A56C4Cu);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0066_entry, 66u, 795u, 0x0890FB1Cu>(ctx, &aot_mem) && ctx.pc == 0x08A56C4Cu) goto L_08A56C4C;
    return;
L_08A56C4C:
    ctx.set_gpr(5, 0u + 0u);
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_08A56D08;
      }
      goto L_08A56C58;
    }
L_08A56C58:
    ctx.set_gpr(4, rt.memory().aot_load32(ctx.gpr[18] + static_cast<std::uint32_t>(52)));
    ctx.set_gpr(2, rt.memory().aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(8)));
    { const bool branch_taken = ctx.gpr[2] == 0u;
    // nop
      if (branch_taken) {
          goto L_08A56C94;
      }
      goto L_08A56C68;
    }
L_08A56C68:
    { const bool branch_taken = static_cast<std::int32_t>(ctx.gpr[5]) < 0;
    // nop
      if (branch_taken) {
          goto L_08A56C94;
      }
      goto L_08A56C70;
    }
L_08A56C70:
    ctx.set_gpr(1, static_cast<std::int32_t>(ctx.gpr[5]) < static_cast<std::int32_t>(ctx.gpr[2]) ? 1u : 0u);
    { const bool branch_taken = ctx.gpr[1] == 0u;
    // nop
      if (branch_taken) {
          goto L_08A56C94;
      }
      goto L_08A56C7C;
    }
L_08A56C7C:
    ctx.set_gpr(2, 2229u << 16u);
    ctx.fpr[0] = std::bit_cast<float>(rt.memory().aot_load32(ctx.gpr[2] + static_cast<std::uint32_t>(22700)));
    ctx.set_gpr(3, ctx.gpr[5] << 2u);
    ctx.set_gpr(2, rt.memory().aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(16)));
    ctx.set_gpr(2, ctx.gpr[2] + ctx.gpr[3]);
    rt.memory().aot_store32(ctx.gpr[2] + static_cast<std::uint32_t>(0), std::bit_cast<std::uint32_t>(ctx.fpr[0]));
    goto L_08A56C94;
L_08A56C94:
    ctx.set_gpr(4, rt.memory().aot_load32(ctx.gpr[18] + static_cast<std::uint32_t>(56)));
    ctx.set_gpr(2, rt.memory().aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(8)));
    { const bool branch_taken = ctx.gpr[2] == 0u;
    // nop
      if (branch_taken) {
          goto L_08A56CD0;
      }
      goto L_08A56CA4;
    }
L_08A56CA4:
    { const bool branch_taken = static_cast<std::int32_t>(ctx.gpr[5]) < 0;
    // nop
      if (branch_taken) {
          goto L_08A56CD0;
      }
      goto L_08A56CAC;
    }
L_08A56CAC:
    ctx.set_gpr(1, static_cast<std::int32_t>(ctx.gpr[5]) < static_cast<std::int32_t>(ctx.gpr[2]) ? 1u : 0u);
    { const bool branch_taken = ctx.gpr[1] == 0u;
    // nop
      if (branch_taken) {
          goto L_08A56CD0;
      }
      goto L_08A56CB8;
    }
L_08A56CB8:
    ctx.set_gpr(2, 2229u << 16u);
    ctx.fpr[0] = std::bit_cast<float>(rt.memory().aot_load32(ctx.gpr[2] + static_cast<std::uint32_t>(22704)));
    ctx.set_gpr(3, ctx.gpr[5] << 2u);
    ctx.set_gpr(2, rt.memory().aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(16)));
    ctx.set_gpr(2, ctx.gpr[2] + ctx.gpr[3]);
    rt.memory().aot_store32(ctx.gpr[2] + static_cast<std::uint32_t>(0), std::bit_cast<std::uint32_t>(ctx.fpr[0]));
    goto L_08A56CD0;
L_08A56CD0:
    ctx.set_gpr(4, rt.memory().aot_load32(ctx.gpr[18] + static_cast<std::uint32_t>(60)));
    ctx.set_gpr(2, rt.memory().aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(8)));
    { const bool branch_taken = ctx.gpr[2] == 0u;
    // nop
      if (branch_taken) {
          goto L_08A56D04;
      }
      goto L_08A56CE0;
    }
L_08A56CE0:
    { const bool branch_taken = static_cast<std::int32_t>(ctx.gpr[5]) < 0;
    // nop
      if (branch_taken) {
          goto L_08A56D04;
      }
      goto L_08A56CE8;
    }
L_08A56CE8:
    ctx.set_gpr(1, static_cast<std::int32_t>(ctx.gpr[5]) < static_cast<std::int32_t>(ctx.gpr[2]) ? 1u : 0u);
    { const bool branch_taken = ctx.gpr[1] == 0u;
    // nop
      if (branch_taken) {
          goto L_08A56D04;
      }
      goto L_08A56CF4;
    }
L_08A56CF4:
    ctx.set_gpr(3, rt.memory().aot_load8(ctx.gpr[28] + static_cast<std::uint32_t>(-32584)));
    ctx.set_gpr(2, rt.memory().aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(16)));
    ctx.set_gpr(2, ctx.gpr[5] + ctx.gpr[2]);
    rt.memory().aot_store8(ctx.gpr[2] + static_cast<std::uint32_t>(0), static_cast<std::uint8_t>(ctx.gpr[3]));
    goto L_08A56D04;
L_08A56D04:
    ctx.set_gpr(5, ctx.gpr[5] + static_cast<std::uint32_t>(1));
    goto L_08A56D08;
L_08A56D08:
    ctx.set_gpr(2, static_cast<std::int32_t>(ctx.gpr[5]) < static_cast<std::int32_t>(ctx.gpr[16]) ? 1u : 0u);
    { const bool branch_taken = ctx.gpr[2] != 0u;
    // nop
      if (branch_taken) {
          goto L_08A56C58;
      }
      goto L_08A56D14;
    }
L_08A56D14:
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_08A56D34;
      }
      goto L_08A56D1C;
    }
L_08A56D1C:
    ctx.set_gpr(4, ctx.gpr[18] + 0u);
    ctx.set_gpr(5, 0u + 0u);
    ctx.set_gpr(25, rt.memory().aot_load32(ctx.gpr[18] + static_cast<std::uint32_t>(0)));
    ctx.set_gpr(25, rt.memory().aot_load32(ctx.gpr[25] + static_cast<std::uint32_t>(164)));
    jump_target = ctx.gpr[25];
    ctx.set_gpr(31, 0x08A56D34u);
    // nop
    ctx.pc = jump_target;
    if (rt.invoke_chained_call(ctx, &aot_mem) && ctx.pc == 0x08A56D34u) goto L_08A56D34;
    return;
L_08A56D34:
    ctx.set_gpr(2, rt.memory().aot_load32(ctx.gpr[18] + static_cast<std::uint32_t>(32)));
    ctx.set_gpr(2, rt.memory().aot_load32(ctx.gpr[2] + static_cast<std::uint32_t>(8)));
    { const bool branch_taken = static_cast<std::int32_t>(ctx.gpr[2]) > 0;
    // nop
      if (branch_taken) {
          goto L_08A56D1C;
      }
      goto L_08A56D44;
    }
L_08A56D44:
    ctx.set_gpr(4, ctx.gpr[18] + 0u);
    ctx.set_gpr(31, 0x08A56D50u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0081_entry, 81u, 41u, 0x0894835Cu>(ctx, &aot_mem) && ctx.pc == 0x08A56D50u) goto L_08A56D50;
    return;
L_08A56D50:
    ctx.set_gpr(4, ctx.gpr[2] + 0u);
    ctx.set_gpr(31, 0x08A56D5Cu);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0046_entry, 46u, 266u, 0x088BD7E4u>(ctx, &aot_mem) && ctx.pc == 0x08A56D5Cu) goto L_08A56D5C;
    return;
L_08A56D5C:
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(52), ctx.gpr[2]);
    ctx.set_gpr(5, rt.memory().aot_load32(ctx.gpr[18] + static_cast<std::uint32_t>(68)));
    ctx.set_gpr(4, ctx.gpr[2] + static_cast<std::uint32_t>(12));
    ctx.set_gpr(31, 0x08A56D70u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0085_entry, 85u, 61u, 0x089584C4u>(ctx, &aot_mem) && ctx.pc == 0x08A56D70u) goto L_08A56D70;
    return;
L_08A56D70:
    ctx.set_gpr(2, rt.memory().aot_load32(ctx.gpr[18] + static_cast<std::uint32_t>(48)));
    ctx.set_gpr(5, rt.memory().aot_load32(ctx.gpr[2] + static_cast<std::uint32_t>(12)));
    ctx.set_gpr(4, rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(52)));
    ctx.set_gpr(31, 0x08A56D84u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0049_entry, 49u, 238u, 0x088C90A8u>(ctx, &aot_mem) && ctx.pc == 0x08A56D84u) goto L_08A56D84;
    return;
L_08A56D84:
    ctx.set_gpr(2, rt.memory().aot_load32(ctx.gpr[18] + static_cast<std::uint32_t>(48)));
    ctx.set_gpr(4, rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(52)));
    ctx.set_gpr(5, rt.memory().aot_load32(ctx.gpr[2] + static_cast<std::uint32_t>(40)));
    ctx.set_gpr(6, rt.memory().aot_load32(ctx.gpr[2] + static_cast<std::uint32_t>(44)));
    ctx.set_gpr(7, rt.memory().aot_load32(ctx.gpr[2] + static_cast<std::uint32_t>(48)));
    ctx.set_gpr(25, rt.memory().aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(0)));
    ctx.set_gpr(25, rt.memory().aot_load32(ctx.gpr[25] + static_cast<std::uint32_t>(160)));
    jump_target = ctx.gpr[25];
    ctx.set_gpr(31, 0x08A56DA8u);
    // nop
    ctx.pc = jump_target;
    if (rt.invoke_chained_call(ctx, &aot_mem) && ctx.pc == 0x08A56DA8u) goto L_08A56DA8;
    return;
L_08A56DA8:
    ctx.set_gpr(2, rt.memory().aot_load32(ctx.gpr[18] + static_cast<std::uint32_t>(48)));
    ctx.set_gpr(3, rt.memory().aot_load32(ctx.gpr[2] + static_cast<std::uint32_t>(40)));
    ctx.set_gpr(2, 0u + static_cast<std::uint32_t>(4));
    { const bool branch_taken = ctx.gpr[3] == ctx.gpr[2];
    // nop
      if (branch_taken) {
          goto L_08A56DD4;
      }
      goto L_08A56DBC;
    }
L_08A56DBC:
    ctx.set_gpr(2, 0u + static_cast<std::uint32_t>(5));
    { const bool branch_taken = ctx.gpr[3] == ctx.gpr[2];
    // nop
      if (branch_taken) {
          goto L_08A56DD4;
      }
      goto L_08A56DC8;
    }
L_08A56DC8:
    ctx.set_gpr(2, 0u + static_cast<std::uint32_t>(2));
    { const bool branch_taken = ctx.gpr[3] != ctx.gpr[2];
    // nop
      if (branch_taken) {
          goto L_08A56E2C;
      }
      goto L_08A56DD4;
    }
L_08A56DD4:
    ctx.set_gpr(17, 0u + 0u);
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_08A56E18;
      }
      goto L_08A56DE0;
    }
L_08A56DE0:
    ctx.set_gpr(16, rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(52)));
    ctx.set_gpr(5, ctx.gpr[17] + 0u);
    ctx.set_gpr(25, rt.memory().aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(0)));
    ctx.set_gpr(25, rt.memory().aot_load32(ctx.gpr[25] + static_cast<std::uint32_t>(100)));
    jump_target = ctx.gpr[25];
    ctx.set_gpr(31, 0x08A56DF8u);
    // nop
    ctx.pc = jump_target;
    if (rt.invoke_chained_call(ctx, &aot_mem) && ctx.pc == 0x08A56DF8u) goto L_08A56DF8;
    return;
L_08A56DF8:
    ctx.set_gpr(4, ctx.gpr[16] + 0u);
    ctx.set_gpr(5, ctx.gpr[17] + 0u);
    ctx.set_gpr(6, ctx.gpr[2] + 0u);
    ctx.set_gpr(25, rt.memory().aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(0)));
    ctx.set_gpr(25, rt.memory().aot_load32(ctx.gpr[25] + static_cast<std::uint32_t>(164)));
    jump_target = ctx.gpr[25];
    ctx.set_gpr(31, 0x08A56E14u);
    // nop
    ctx.pc = jump_target;
    if (rt.invoke_chained_call(ctx, &aot_mem) && ctx.pc == 0x08A56E14u) goto L_08A56E14;
    return;
L_08A56E14:
    ctx.set_gpr(17, ctx.gpr[17] + static_cast<std::uint32_t>(1));
    goto L_08A56E18;
L_08A56E18:
    ctx.set_gpr(4, rt.memory().aot_load32(ctx.gpr[18] + static_cast<std::uint32_t>(48)));
    ctx.set_gpr(2, rt.memory().aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(44)));
    ctx.set_gpr(2, ctx.gpr[17] < ctx.gpr[2] ? 1u : 0u);
    { const bool branch_taken = ctx.gpr[2] != 0u;
    // nop
      if (branch_taken) {
          goto L_08A56DE0;
      }
      goto L_08A56E2C;
    }
L_08A56E2C:
    ctx.set_gpr(4, ctx.gpr[18] + 0u);
    ctx.set_gpr(5, rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(52)));
    ctx.set_gpr(25, rt.memory().aot_load32(ctx.gpr[18] + static_cast<std::uint32_t>(0)));
    ctx.set_gpr(25, rt.memory().aot_load32(ctx.gpr[25] + static_cast<std::uint32_t>(156)));
    jump_target = ctx.gpr[25];
    ctx.set_gpr(31, 0x08A56E44u);
    // nop
    ctx.pc = jump_target;
    if (rt.invoke_chained_call(ctx, &aot_mem) && ctx.pc == 0x08A56E44u) goto L_08A56E44;
    return;
L_08A56E44:
    ctx.set_gpr(4, rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(52)));
    { const bool branch_taken = ctx.gpr[4] == 0u;
    // nop
      if (branch_taken) {
          goto L_08A56E58;
      }
      goto L_08A56E50;
    }
L_08A56E50:
    ctx.set_gpr(31, 0x08A56E58u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0014_entry, 14u, 257u, 0x0883D454u>(ctx, &aot_mem) && ctx.pc == 0x08A56E58u) goto L_08A56E58;
    return;
L_08A56E58:
    ctx.set_gpr(31, rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(28)));
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
L_08A56E78:
    ctx.set_gpr(29, ctx.gpr[29] + static_cast<std::uint32_t>(-16));
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(12), ctx.gpr[31]);
    ctx.set_gpr(4, rt.memory().aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(56)));
    ctx.set_gpr(25, rt.memory().aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(0)));
    ctx.set_gpr(25, rt.memory().aot_load32(ctx.gpr[25] + static_cast<std::uint32_t>(108)));
    jump_target = ctx.gpr[25];
    ctx.set_gpr(31, 0x08A56E94u);
    // nop
    ctx.pc = jump_target;
    if (rt.invoke_chained_call(ctx, &aot_mem) && ctx.pc == 0x08A56E94u) goto L_08A56E94;
    return;
L_08A56E94:
    ctx.set_gpr(31, rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(12)));
    ctx.set_gpr(29, ctx.gpr[29] + static_cast<std::uint32_t>(16));
    jump_target = ctx.gpr[31];
    // nop
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_08A56EA4:
    ctx.set_gpr(29, ctx.gpr[29] + static_cast<std::uint32_t>(-16));
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(12), ctx.gpr[31]);
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(8), ctx.gpr[17]);
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(4), ctx.gpr[16]);
    ctx.set_gpr(17, ctx.gpr[5] + 0u);
    ctx.set_gpr(16, rt.memory().aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(32)));
    ctx.set_gpr(3, ctx.gpr[17] << 2u);
    ctx.set_gpr(2, rt.memory().aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(16)));
    ctx.set_gpr(2, ctx.gpr[2] + ctx.gpr[3]);
    ctx.set_gpr(4, rt.memory().aot_load32(ctx.gpr[2] + static_cast<std::uint32_t>(0)));
    { const bool branch_taken = ctx.gpr[4] == 0u;
    // nop
      if (branch_taken) {
          goto L_08A56EDC;
      }
      goto L_08A56ED4;
    }
L_08A56ED4:
    ctx.set_gpr(31, 0x08A56EDCu);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0014_entry, 14u, 257u, 0x0883D454u>(ctx, &aot_mem) && ctx.pc == 0x08A56EDCu) goto L_08A56EDC;
    return;
L_08A56EDC:
    ctx.set_gpr(4, ctx.gpr[16] + 0u);
    ctx.set_gpr(5, ctx.gpr[17] + 0u);
    ctx.set_gpr(31, 0x08A56EECu);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0067_entry, 67u, 9u, 0x089100E0u>(ctx, &aot_mem) && ctx.pc == 0x08A56EECu) goto L_08A56EEC;
    return;
L_08A56EEC:
    ctx.set_gpr(3, rt.memory().aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(8)));
    ctx.set_gpr(4, ctx.gpr[3] << 2u);
    ctx.set_gpr(3, rt.memory().aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(16)));
    ctx.set_gpr(3, ctx.gpr[3] + ctx.gpr[4]);
    rt.memory().aot_store32(ctx.gpr[3] + static_cast<std::uint32_t>(0), 0u);
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
L_08A56F18:
    ctx.set_gpr(29, ctx.gpr[29] + static_cast<std::uint32_t>(-16));
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(12), ctx.gpr[31]);
    ctx.set_gpr(4, ctx.gpr[4] + static_cast<std::uint32_t>(72));
    ctx.set_gpr(31, 0x08A56F2Cu);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0085_entry, 85u, 61u, 0x089584C4u>(ctx, &aot_mem) && ctx.pc == 0x08A56F2Cu) goto L_08A56F2C;
    return;
L_08A56F2C:
    ctx.set_gpr(31, rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(12)));
    ctx.set_gpr(29, ctx.gpr[29] + static_cast<std::uint32_t>(16));
    jump_target = ctx.gpr[31];
    // nop
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_08A56F3C:
    ctx.set_gpr(29, ctx.gpr[29] + static_cast<std::uint32_t>(-160));
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
    ctx.set_gpr(2, rt.memory().aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(76)));
    { const bool branch_taken = ctx.gpr[2] != 0u;
    // nop
      if (branch_taken) {
          goto L_08A56FD0;
      }
      goto L_08A56F74;
    }
L_08A56F74:
    ctx.set_gpr(31, 0x08A56F7Cu);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0081_entry, 81u, 41u, 0x0894835Cu>(ctx, &aot_mem) && ctx.pc == 0x08A56F7Cu) goto L_08A56F7C;
    return;
L_08A56F7C:
    ctx.set_gpr(4, ctx.gpr[2] + 0u);
    ctx.set_gpr(31, 0x08A56F88u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0132_entry, 132u, 302u, 0x08A158E0u>(ctx, &aot_mem) && ctx.pc == 0x08A56F88u) goto L_08A56F88;
    return;
L_08A56F88:
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(36), ctx.gpr[2]);
    ctx.set_gpr(4, ctx.gpr[21] + static_cast<std::uint32_t>(76));
    ctx.set_gpr(5, ctx.gpr[2] + 0u);
    ctx.set_gpr(31, 0x08A56F9Cu);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0085_entry, 85u, 61u, 0x089584C4u>(ctx, &aot_mem) && ctx.pc == 0x08A56F9Cu) goto L_08A56F9C;
    return;
L_08A56F9C:
    ctx.set_gpr(4, rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(36)));
    { const bool branch_taken = ctx.gpr[4] == 0u;
    // nop
      if (branch_taken) {
          goto L_08A56FB0;
      }
      goto L_08A56FA8;
    }
L_08A56FA8:
    ctx.set_gpr(31, 0x08A56FB0u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0014_entry, 14u, 257u, 0x0883D454u>(ctx, &aot_mem) && ctx.pc == 0x08A56FB0u) goto L_08A56FB0;
    return;
L_08A56FB0:
    ctx.set_gpr(4, rt.memory().aot_load32(ctx.gpr[21] + static_cast<std::uint32_t>(76)));
    ctx.set_gpr(5, rt.memory().aot_load32(ctx.gpr[21] + static_cast<std::uint32_t>(48)));
    ctx.set_gpr(31, 0x08A56FC0u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0080_entry, 80u, 769u, 0x08947830u>(ctx, &aot_mem) && ctx.pc == 0x08A56FC0u) goto L_08A56FC0;
    return;
L_08A56FC0:
    ctx.set_gpr(4, ctx.gpr[21] + static_cast<std::uint32_t>(48));
    ctx.set_gpr(5, 0u + 0u);
    ctx.set_gpr(31, 0x08A56FD0u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0085_entry, 85u, 61u, 0x089584C4u>(ctx, &aot_mem) && ctx.pc == 0x08A56FD0u) goto L_08A56FD0;
    return;
L_08A56FD0:
    ctx.set_gpr(2, rt.memory().aot_load32(ctx.gpr[21] + static_cast<std::uint32_t>(76)));
    ctx.set_gpr(4, rt.memory().aot_load32(ctx.gpr[2] + static_cast<std::uint32_t>(8)));
    ctx.set_gpr(25, rt.memory().aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(0)));
    ctx.set_gpr(25, rt.memory().aot_load32(ctx.gpr[25] + static_cast<std::uint32_t>(100)));
    jump_target = ctx.gpr[25];
    ctx.set_gpr(31, 0x08A56FE8u);
    // nop
    ctx.pc = jump_target;
    if (rt.invoke_chained_call(ctx, &aot_mem) && ctx.pc == 0x08A56FE8u) goto L_08A56FE8;
    return;
L_08A56FE8:
    ctx.set_gpr(16, rt.memory().aot_load32(ctx.gpr[2] + static_cast<std::uint32_t>(0)));
    ctx.set_gpr(19, 0u + 0u);
    ctx.set_gpr(2, ctx.gpr[16] & 1u);
    { const bool branch_taken = ctx.gpr[2] == 0u;
    // nop
      if (branch_taken) {
          goto L_08A57228;
      }
      goto L_08A56FFC;
    }
L_08A56FFC:
    ctx.set_gpr(4, ctx.gpr[29] + static_cast<std::uint32_t>(132));
    ctx.set_gpr(31, 0x08A57008u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0108_entry, 108u, 623u, 0x089B798Cu>(ctx, &aot_mem) && ctx.pc == 0x08A57008u) goto L_08A57008;
    return;
L_08A57008:
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(136), 0u);
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(132), 0u);
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(140), 0u);
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(144), 0u);
    ctx.set_gpr(2, rt.memory().aot_load32(ctx.gpr[21] + static_cast<std::uint32_t>(76)));
    ctx.set_gpr(4, rt.memory().aot_load32(ctx.gpr[2] + static_cast<std::uint32_t>(8)));
    ctx.set_gpr(5, ctx.gpr[29] + static_cast<std::uint32_t>(132));
    ctx.set_gpr(6, 0u + 0u);
    ctx.set_gpr(25, rt.memory().aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(0)));
    ctx.set_gpr(25, rt.memory().aot_load32(ctx.gpr[25] + static_cast<std::uint32_t>(104)));
    jump_target = ctx.gpr[25];
    ctx.set_gpr(31, 0x08A57038u);
    // nop
    ctx.pc = jump_target;
    if (rt.invoke_chained_call(ctx, &aot_mem) && ctx.pc == 0x08A57038u) goto L_08A57038;
    return;
L_08A57038:
    ctx.set_gpr(4, rt.memory().aot_load32(ctx.gpr[21] + static_cast<std::uint32_t>(76)));
    ctx.set_gpr(2, rt.memory().aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(12)));
    { const bool branch_taken = ctx.gpr[2] == 0u;
    // nop
      if (branch_taken) {
          goto L_08A57054;
      }
      goto L_08A57048;
    }
L_08A57048:
    ctx.set_gpr(19, rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(144)));
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_08A57114;
      }
      goto L_08A57054;
    }
L_08A57054:
    ctx.set_gpr(3, rt.memory().aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(40)));
    ctx.set_gpr(2, 0u + static_cast<std::uint32_t>(4));
    { const bool branch_taken = ctx.gpr[3] == ctx.gpr[2];
    // nop
      if (branch_taken) {
          goto L_08A5707C;
      }
      goto L_08A57064;
    }
L_08A57064:
    ctx.set_gpr(2, 0u + static_cast<std::uint32_t>(2));
    { const bool branch_taken = ctx.gpr[3] == ctx.gpr[2];
    // nop
      if (branch_taken) {
          goto L_08A5707C;
      }
      goto L_08A57070;
    }
L_08A57070:
    ctx.set_gpr(2, 0u + static_cast<std::uint32_t>(5));
    { const bool branch_taken = ctx.gpr[3] != ctx.gpr[2];
    // nop
      if (branch_taken) {
          goto L_08A570C4;
      }
      goto L_08A5707C;
    }
L_08A5707C:
    ctx.set_gpr(17, 0u + 0u);
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_08A570A8;
      }
      goto L_08A57088;
    }
L_08A57088:
    ctx.set_gpr(4, rt.memory().aot_load32(ctx.gpr[3] + static_cast<std::uint32_t>(56)));
    ctx.set_gpr(5, ctx.gpr[17] + 0u);
    ctx.set_gpr(25, rt.memory().aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(0)));
    ctx.set_gpr(25, rt.memory().aot_load32(ctx.gpr[25] + static_cast<std::uint32_t>(108)));
    jump_target = ctx.gpr[25];
    ctx.set_gpr(31, 0x08A570A0u);
    // nop
    ctx.pc = jump_target;
    if (rt.invoke_chained_call(ctx, &aot_mem) && ctx.pc == 0x08A570A0u) goto L_08A570A0;
    return;
L_08A570A0:
    ctx.set_gpr(19, ctx.gpr[19] + ctx.gpr[2]);
    ctx.set_gpr(17, ctx.gpr[17] + static_cast<std::uint32_t>(1));
    goto L_08A570A8;
L_08A570A8:
    ctx.set_gpr(3, rt.memory().aot_load32(ctx.gpr[21] + static_cast<std::uint32_t>(76)));
    ctx.set_gpr(2, rt.memory().aot_load32(ctx.gpr[3] + static_cast<std::uint32_t>(44)));
    ctx.set_gpr(2, ctx.gpr[17] < ctx.gpr[2] ? 1u : 0u);
    { const bool branch_taken = ctx.gpr[2] != 0u;
    // nop
      if (branch_taken) {
          goto L_08A57088;
      }
      goto L_08A570BC;
    }
L_08A570BC:
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_08A57114;
      }
      goto L_08A570C4;
    }
L_08A570C4:
    { const bool branch_taken = ctx.gpr[3] != 0u;
    // nop
      if (branch_taken) {
          goto L_08A570D8;
      }
      goto L_08A570CC;
    }
L_08A570CC:
    ctx.set_gpr(19, rt.memory().aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(44)));
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_08A57114;
      }
      goto L_08A570D8;
    }
L_08A570D8:
    ctx.set_gpr(2, 0u + static_cast<std::uint32_t>(1));
    { const bool branch_taken = ctx.gpr[3] != ctx.gpr[2];
    // nop
      if (branch_taken) {
          goto L_08A570F4;
      }
      goto L_08A570E4;
    }
L_08A570E4:
    ctx.set_gpr(2, rt.memory().aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(44)));
    ctx.set_gpr(19, ctx.gpr[2] << 1u);
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_08A57114;
      }
      goto L_08A570F4;
    }
L_08A570F4:
    ctx.set_gpr(2, 0u + static_cast<std::uint32_t>(3));
    { const bool branch_taken = ctx.gpr[3] != ctx.gpr[2];
    // nop
      if (branch_taken) {
          goto L_08A57114;
      }
      goto L_08A57100;
    }
L_08A57100:
    ctx.set_gpr(3, rt.memory().aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(44)));
    ctx.set_gpr(2, ctx.gpr[3] << 1u);
    ctx.set_gpr(19, ctx.gpr[2] + ctx.gpr[3]);
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_08A57114;
      }
      goto L_08A57114;
    }
L_08A57114:
    ctx.set_gpr(3, rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(152)));
    ctx.set_gpr(2, 0u + static_cast<std::uint32_t>(12));
    { const bool branch_taken = ctx.gpr[3] != ctx.gpr[2];
    // nop
      if (branch_taken) {
          goto L_08A57144;
      }
      goto L_08A57124;
    }
L_08A57124:
    ctx.set_gpr(5, rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(148)));
    ctx.set_gpr(4, ctx.gpr[20] + 0u);
    ctx.set_gpr(6, ctx.gpr[5] + 0u);
    ctx.set_gpr(7, ctx.gpr[19] + 0u);
    ctx.set_gpr(31, 0x08A5713Cu);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0127_entry, 127u, 147u, 0x08A02034u>(ctx, &aot_mem) && ctx.pc == 0x08A5713Cu) goto L_08A5713C;
    return;
L_08A5713C:
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_08A57184;
      }
      goto L_08A57144;
    }
L_08A57144:
    ctx.set_gpr(18, rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(148)));
    ctx.set_gpr(17, 0u + 0u);
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_08A57178;
      }
      goto L_08A57154;
    }
L_08A57154:
    ctx.set_gpr(4, ctx.gpr[20] + 0u);
    ctx.set_gpr(5, ctx.gpr[18] + 0u);
    ctx.set_gpr(6, ctx.gpr[18] + 0u);
    ctx.set_gpr(7, 0u + static_cast<std::uint32_t>(1));
    ctx.set_gpr(31, 0x08A5716Cu);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0127_entry, 127u, 147u, 0x08A02034u>(ctx, &aot_mem) && ctx.pc == 0x08A5716Cu) goto L_08A5716C;
    return;
L_08A5716C:
    ctx.set_gpr(2, rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(152)));
    ctx.set_gpr(18, ctx.gpr[18] + ctx.gpr[2]);
    ctx.set_gpr(17, ctx.gpr[17] + static_cast<std::uint32_t>(1));
    goto L_08A57178;
L_08A57178:
    ctx.set_gpr(2, ctx.gpr[17] < ctx.gpr[19] ? 1u : 0u);
    { const bool branch_taken = ctx.gpr[2] != 0u;
    // nop
      if (branch_taken) {
          goto L_08A57154;
      }
      goto L_08A57184;
    }
L_08A57184:
    ctx.set_gpr(2, rt.memory().aot_load32(ctx.gpr[21] + static_cast<std::uint32_t>(76)));
    ctx.set_gpr(4, rt.memory().aot_load32(ctx.gpr[2] + static_cast<std::uint32_t>(8)));
    ctx.set_gpr(5, ctx.gpr[29] + static_cast<std::uint32_t>(132));
    ctx.set_gpr(6, 0u + 0u);
    ctx.set_gpr(25, rt.memory().aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(0)));
    ctx.set_gpr(25, rt.memory().aot_load32(ctx.gpr[25] + static_cast<std::uint32_t>(108)));
    jump_target = ctx.gpr[25];
    ctx.set_gpr(31, 0x08A571A4u);
    // nop
    ctx.pc = jump_target;
    if (rt.invoke_chained_call(ctx, &aot_mem) && ctx.pc == 0x08A571A4u) goto L_08A571A4;
    return;
L_08A571A4:
    ctx.set_gpr(18, 0u + 0u);
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_08A57210;
      }
      goto L_08A571B0;
    }
L_08A571B0:
    ctx.set_gpr(2, rt.memory().aot_load32(ctx.gpr[3] + static_cast<std::uint32_t>(24)));
    ctx.set_gpr(3, ctx.gpr[18] << 2u);
    ctx.set_gpr(2, rt.memory().aot_load32(ctx.gpr[2] + static_cast<std::uint32_t>(16)));
    ctx.set_gpr(2, ctx.gpr[2] + ctx.gpr[3]);
    ctx.set_gpr(22, rt.memory().aot_load32(ctx.gpr[2] + static_cast<std::uint32_t>(0)));
    ctx.set_gpr(17, 0u + 0u);
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_08A571FC;
      }
      goto L_08A571D0;
    }
L_08A571D0:
    ctx.set_gpr(2, ctx.gpr[17] << 1u);
    ctx.set_gpr(2, ctx.gpr[2] + ctx.gpr[17]);
    ctx.set_gpr(3, ctx.gpr[2] << 2u);
    ctx.set_gpr(2, rt.memory().aot_load32(ctx.gpr[22] + static_cast<std::uint32_t>(16)));
    ctx.set_gpr(5, ctx.gpr[2] + ctx.gpr[3]);
    ctx.set_gpr(4, ctx.gpr[20] + 0u);
    ctx.set_gpr(6, ctx.gpr[5] + 0u);
    ctx.set_gpr(7, 0u + static_cast<std::uint32_t>(1));
    ctx.set_gpr(31, 0x08A571F8u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0127_entry, 127u, 143u, 0x08A01F84u>(ctx, &aot_mem) && ctx.pc == 0x08A571F8u) goto L_08A571F8;
    return;
L_08A571F8:
    ctx.set_gpr(17, ctx.gpr[17] + static_cast<std::uint32_t>(1));
    goto L_08A571FC;
L_08A571FC:
    ctx.set_gpr(2, rt.memory().aot_load32(ctx.gpr[22] + static_cast<std::uint32_t>(8)));
    ctx.set_gpr(2, static_cast<std::int32_t>(ctx.gpr[17]) < static_cast<std::int32_t>(ctx.gpr[2]) ? 1u : 0u);
    { const bool branch_taken = ctx.gpr[2] != 0u;
    // nop
      if (branch_taken) {
          goto L_08A571D0;
      }
      goto L_08A5720C;
    }
L_08A5720C:
    ctx.set_gpr(18, ctx.gpr[18] + static_cast<std::uint32_t>(1));
    goto L_08A57210;
L_08A57210:
    ctx.set_gpr(3, rt.memory().aot_load32(ctx.gpr[21] + static_cast<std::uint32_t>(76)));
    ctx.set_gpr(2, rt.memory().aot_load32(ctx.gpr[3] + static_cast<std::uint32_t>(24)));
    ctx.set_gpr(2, rt.memory().aot_load32(ctx.gpr[2] + static_cast<std::uint32_t>(8)));
    ctx.set_gpr(2, static_cast<std::int32_t>(ctx.gpr[18]) < static_cast<std::int32_t>(ctx.gpr[2]) ? 1u : 0u);
    { const bool branch_taken = ctx.gpr[2] != 0u;
    // nop
      if (branch_taken) {
          goto L_08A571B0;
      }
      goto L_08A57228;
    }
L_08A57228:
    ctx.set_gpr(2, ctx.gpr[16] & 2u);
    { const bool branch_taken = ctx.gpr[2] == 0u;
    // nop
      if (branch_taken) {
          goto L_08A573A8;
      }
      goto L_08A57234;
    }
L_08A57234:
    ctx.set_gpr(4, ctx.gpr[29] + static_cast<std::uint32_t>(68));
    ctx.set_gpr(31, 0x08A57240u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0126_entry, 126u, 723u, 0x089FF868u>(ctx, &aot_mem) && ctx.pc == 0x08A57240u) goto L_08A57240;
    return;
L_08A57240:
    ctx.set_gpr(4, ctx.gpr[29] + static_cast<std::uint32_t>(68));
    ctx.set_gpr(5, ctx.gpr[20] + 0u);
    ctx.set_gpr(31, 0x08A57250u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0127_entry, 127u, 124u, 0x08A019A0u>(ctx, &aot_mem) && ctx.pc == 0x08A57250u) goto L_08A57250;
    return;
L_08A57250:
    ctx.set_gpr(4, ctx.gpr[29] + static_cast<std::uint32_t>(68));
    ctx.set_gpr(31, 0x08A5725Cu);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0126_entry, 126u, 725u, 0x089FF93Cu>(ctx, &aot_mem) && ctx.pc == 0x08A5725Cu) goto L_08A5725C;
    return;
L_08A5725C:
    ctx.set_gpr(4, ctx.gpr[29] + static_cast<std::uint32_t>(40));
    ctx.set_gpr(31, 0x08A57268u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0108_entry, 108u, 623u, 0x089B798Cu>(ctx, &aot_mem) && ctx.pc == 0x08A57268u) goto L_08A57268;
    return;
L_08A57268:
    ctx.set_gpr(2, 0u + static_cast<std::uint32_t>(1));
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(44), ctx.gpr[2]);
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(40), 0u);
    ctx.set_gpr(2, rt.memory().aot_load32(ctx.gpr[21] + static_cast<std::uint32_t>(76)));
    ctx.set_gpr(4, rt.memory().aot_load32(ctx.gpr[2] + static_cast<std::uint32_t>(8)));
    ctx.set_gpr(5, ctx.gpr[29] + static_cast<std::uint32_t>(40));
    ctx.set_gpr(6, 0u + 0u);
    ctx.set_gpr(25, rt.memory().aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(0)));
    ctx.set_gpr(25, rt.memory().aot_load32(ctx.gpr[25] + static_cast<std::uint32_t>(104)));
    jump_target = ctx.gpr[25];
    ctx.set_gpr(31, 0x08A57294u);
    // nop
    ctx.pc = jump_target;
    if (rt.invoke_chained_call(ctx, &aot_mem) && ctx.pc == 0x08A57294u) goto L_08A57294;
    return;
L_08A57294:
    ctx.set_gpr(3, rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(60)));
    ctx.set_gpr(2, 0u + static_cast<std::uint32_t>(12));
    { const bool branch_taken = ctx.gpr[3] != ctx.gpr[2];
    // nop
      if (branch_taken) {
          goto L_08A572C4;
      }
      goto L_08A572A4;
    }
L_08A572A4:
    ctx.set_gpr(5, rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(56)));
    ctx.set_gpr(4, ctx.gpr[29] + static_cast<std::uint32_t>(68));
    ctx.set_gpr(6, ctx.gpr[5] + 0u);
    ctx.set_gpr(7, ctx.gpr[19] + 0u);
    ctx.set_gpr(31, 0x08A572BCu);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0127_entry, 127u, 143u, 0x08A01F84u>(ctx, &aot_mem) && ctx.pc == 0x08A572BCu) goto L_08A572BC;
    return;
L_08A572BC:
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_08A57304;
      }
      goto L_08A572C4;
    }
L_08A572C4:
    ctx.set_gpr(17, rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(56)));
    ctx.set_gpr(16, 0u + 0u);
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_08A572F8;
      }
      goto L_08A572D4;
    }
L_08A572D4:
    ctx.set_gpr(4, ctx.gpr[29] + static_cast<std::uint32_t>(68));
    ctx.set_gpr(5, ctx.gpr[17] + 0u);
    ctx.set_gpr(6, ctx.gpr[17] + 0u);
    ctx.set_gpr(7, 0u + static_cast<std::uint32_t>(1));
    ctx.set_gpr(31, 0x08A572ECu);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0127_entry, 127u, 143u, 0x08A01F84u>(ctx, &aot_mem) && ctx.pc == 0x08A572ECu) goto L_08A572EC;
    return;
L_08A572EC:
    ctx.set_gpr(2, rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(60)));
    ctx.set_gpr(17, ctx.gpr[17] + ctx.gpr[2]);
    ctx.set_gpr(16, ctx.gpr[16] + static_cast<std::uint32_t>(1));
    goto L_08A572F8;
L_08A572F8:
    ctx.set_gpr(2, ctx.gpr[16] < ctx.gpr[19] ? 1u : 0u);
    { const bool branch_taken = ctx.gpr[2] != 0u;
    // nop
      if (branch_taken) {
          goto L_08A572D4;
      }
      goto L_08A57304;
    }
L_08A57304:
    ctx.set_gpr(2, rt.memory().aot_load32(ctx.gpr[21] + static_cast<std::uint32_t>(76)));
    ctx.set_gpr(4, rt.memory().aot_load32(ctx.gpr[2] + static_cast<std::uint32_t>(8)));
    ctx.set_gpr(5, ctx.gpr[29] + static_cast<std::uint32_t>(40));
    ctx.set_gpr(6, 0u + 0u);
    ctx.set_gpr(25, rt.memory().aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(0)));
    ctx.set_gpr(25, rt.memory().aot_load32(ctx.gpr[25] + static_cast<std::uint32_t>(108)));
    jump_target = ctx.gpr[25];
    ctx.set_gpr(31, 0x08A57324u);
    // nop
    ctx.pc = jump_target;
    if (rt.invoke_chained_call(ctx, &aot_mem) && ctx.pc == 0x08A57324u) goto L_08A57324;
    return;
L_08A57324:
    ctx.set_gpr(18, 0u + 0u);
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_08A57390;
      }
      goto L_08A57330;
    }
L_08A57330:
    ctx.set_gpr(2, rt.memory().aot_load32(ctx.gpr[3] + static_cast<std::uint32_t>(32)));
    ctx.set_gpr(3, ctx.gpr[18] << 2u);
    ctx.set_gpr(2, rt.memory().aot_load32(ctx.gpr[2] + static_cast<std::uint32_t>(16)));
    ctx.set_gpr(2, ctx.gpr[2] + ctx.gpr[3]);
    ctx.set_gpr(16, rt.memory().aot_load32(ctx.gpr[2] + static_cast<std::uint32_t>(0)));
    ctx.set_gpr(17, 0u + 0u);
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_08A5737C;
      }
      goto L_08A57350;
    }
L_08A57350:
    ctx.set_gpr(2, ctx.gpr[17] << 1u);
    ctx.set_gpr(2, ctx.gpr[2] + ctx.gpr[17]);
    ctx.set_gpr(3, ctx.gpr[2] << 2u);
    ctx.set_gpr(2, rt.memory().aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(16)));
    ctx.set_gpr(5, ctx.gpr[2] + ctx.gpr[3]);
    ctx.set_gpr(4, ctx.gpr[29] + static_cast<std::uint32_t>(68));
    ctx.set_gpr(6, ctx.gpr[5] + 0u);
    ctx.set_gpr(7, 0u + static_cast<std::uint32_t>(1));
    ctx.set_gpr(31, 0x08A57378u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0127_entry, 127u, 143u, 0x08A01F84u>(ctx, &aot_mem) && ctx.pc == 0x08A57378u) goto L_08A57378;
    return;
L_08A57378:
    ctx.set_gpr(17, ctx.gpr[17] + static_cast<std::uint32_t>(1));
    goto L_08A5737C;
L_08A5737C:
    ctx.set_gpr(2, rt.memory().aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(8)));
    ctx.set_gpr(2, static_cast<std::int32_t>(ctx.gpr[17]) < static_cast<std::int32_t>(ctx.gpr[2]) ? 1u : 0u);
    { const bool branch_taken = ctx.gpr[2] != 0u;
    // nop
      if (branch_taken) {
          goto L_08A57350;
      }
      goto L_08A5738C;
    }
L_08A5738C:
    ctx.set_gpr(18, ctx.gpr[18] + static_cast<std::uint32_t>(1));
    goto L_08A57390;
L_08A57390:
    ctx.set_gpr(3, rt.memory().aot_load32(ctx.gpr[21] + static_cast<std::uint32_t>(76)));
    ctx.set_gpr(2, rt.memory().aot_load32(ctx.gpr[3] + static_cast<std::uint32_t>(32)));
    ctx.set_gpr(2, rt.memory().aot_load32(ctx.gpr[2] + static_cast<std::uint32_t>(8)));
    ctx.set_gpr(2, static_cast<std::int32_t>(ctx.gpr[18]) < static_cast<std::int32_t>(ctx.gpr[2]) ? 1u : 0u);
    { const bool branch_taken = ctx.gpr[2] != 0u;
    // nop
      if (branch_taken) {
          goto L_08A57330;
      }
      goto L_08A573A8;
    }
L_08A573A8:
    ctx.set_gpr(4, ctx.gpr[21] + 0u);
    ctx.set_gpr(5, rt.memory().aot_load32(ctx.gpr[21] + static_cast<std::uint32_t>(76)));
    ctx.set_gpr(31, 0x08A573B8u);
    // nop
    goto L_08A5696C;
L_08A573B8:
    ctx.set_gpr(31, rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(28)));
    ctx.set_gpr(22, rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(24)));
    ctx.set_gpr(21, rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(20)));
    ctx.set_gpr(20, rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(16)));
    ctx.set_gpr(19, rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(12)));
    ctx.set_gpr(18, rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(8)));
    ctx.set_gpr(17, rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(4)));
    ctx.set_gpr(16, rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(0)));
    ctx.set_gpr(29, ctx.gpr[29] + static_cast<std::uint32_t>(160));
    jump_target = ctx.gpr[31];
    // nop
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_08A573E4:
    ctx.set_gpr(29, ctx.gpr[29] + static_cast<std::uint32_t>(-16));
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(12), ctx.gpr[31]);
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(8), ctx.gpr[16]);
    ctx.set_gpr(16, ctx.gpr[4] + 0u);
    ctx.set_gpr(31, 0x08A573FCu);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0145_entry, 145u, 96u, 0x08A48858u>(ctx, &aot_mem) && ctx.pc == 0x08A573FCu) goto L_08A573FC;
    return;
L_08A573FC:
    ctx.set_gpr(4, ctx.gpr[16] + 0u);
    ctx.set_gpr(5, 0u + static_cast<std::uint32_t>(4));
    ctx.set_gpr(6, 0u + static_cast<std::uint32_t>(1));
    ctx.set_gpr(31, 0x08A57410u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0145_entry, 145u, 147u, 0x08A48BF4u>(ctx, &aot_mem) && ctx.pc == 0x08A57410u) goto L_08A57410;
    return;
L_08A57410:
    ctx.set_gpr(31, rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(12)));
    ctx.set_gpr(16, rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(8)));
    ctx.set_gpr(29, ctx.gpr[29] + static_cast<std::uint32_t>(16));
    jump_target = ctx.gpr[31];
    // nop
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_08A57424:
    ctx.set_gpr(29, ctx.gpr[29] + static_cast<std::uint32_t>(-32));
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(28), ctx.gpr[31]);
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(24), ctx.gpr[22]);
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(20), ctx.gpr[21]);
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(16), ctx.gpr[20]);
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(12), ctx.gpr[19]);
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(8), ctx.gpr[18]);
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(4), ctx.gpr[17]);
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(0), ctx.gpr[16]);
    ctx.set_gpr(16, ctx.gpr[4] + 0u);
    ctx.set_gpr(3, rt.memory().aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(52)));
    rt.memory().aot_store32(ctx.gpr[3] + static_cast<std::uint32_t>(8), 0u);
    ctx.set_gpr(3, rt.memory().aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(48)));
    ctx.set_gpr(19, rt.memory().aot_load32(ctx.gpr[3] + static_cast<std::uint32_t>(8)));
    ctx.set_gpr(20, 0u + 0u);
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_08A574E8;
      }
      goto L_08A57468;
    }
L_08A57468:
    ctx.set_gpr(3, rt.memory().aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(48)));
    ctx.set_gpr(4, ctx.gpr[20] << 2u);
    ctx.set_gpr(3, rt.memory().aot_load32(ctx.gpr[3] + static_cast<std::uint32_t>(16)));
    ctx.set_gpr(3, ctx.gpr[3] + ctx.gpr[4]);
    ctx.fpr[0] = std::bit_cast<float>(rt.memory().aot_load32(ctx.gpr[3] + static_cast<std::uint32_t>(0)));
    ctx.set_fpr_bits(1, ctx.fpr_bits(0) & 0x7FFFFFFFu);
    ctx.fpr[0] = std::bit_cast<float>(rt.memory().aot_load32(ctx.gpr[28] + static_cast<std::uint32_t>(-32416)));
    ctx.set_fpu_condition(((std::isnan(ctx.fpr[1]) || std::isnan(ctx.fpr[0])) || ctx.fpr[1] <= ctx.fpr[0]));
    // nop
    { const bool branch_taken = ctx.fpu_condition();
    // nop
      if (branch_taken) {
          goto L_08A574E4;
      }
      goto L_08A57494;
    }
L_08A57494:
    ctx.set_gpr(18, rt.memory().aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(52)));
    ctx.set_gpr(17, rt.memory().aot_load32(ctx.gpr[18] + static_cast<std::uint32_t>(8)));
    ctx.set_gpr(3, rt.memory().aot_load32(ctx.gpr[18] + static_cast<std::uint32_t>(12)));
    ctx.set_gpr(1, static_cast<std::int32_t>(ctx.gpr[17]) < static_cast<std::int32_t>(ctx.gpr[3]) ? 1u : 0u);
    { const bool branch_taken = ctx.gpr[1] == 0u;
    // nop
      if (branch_taken) {
          goto L_08A574C0;
      }
      goto L_08A574AC;
    }
L_08A574AC:
    ctx.set_gpr(3, rt.memory().aot_load32(ctx.gpr[18] + static_cast<std::uint32_t>(8)));
    ctx.set_gpr(3, ctx.gpr[3] + static_cast<std::uint32_t>(1));
    rt.memory().aot_store32(ctx.gpr[18] + static_cast<std::uint32_t>(8), ctx.gpr[3]);
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_08A574D4;
      }
      goto L_08A574C0;
    }
L_08A574C0:
    ctx.set_gpr(5, ctx.gpr[17] + static_cast<std::uint32_t>(1));
    ctx.set_gpr(4, ctx.gpr[18] + 0u);
    ctx.set_gpr(6, 0u + static_cast<std::uint32_t>(4));
    ctx.set_gpr(31, 0x08A574D4u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0066_entry, 66u, 795u, 0x0890FB1Cu>(ctx, &aot_mem) && ctx.pc == 0x08A574D4u) goto L_08A574D4;
    return;
L_08A574D4:
    ctx.set_gpr(4, ctx.gpr[17] << 2u);
    ctx.set_gpr(3, rt.memory().aot_load32(ctx.gpr[18] + static_cast<std::uint32_t>(16)));
    ctx.set_gpr(3, ctx.gpr[3] + ctx.gpr[4]);
    rt.memory().aot_store32(ctx.gpr[3] + static_cast<std::uint32_t>(0), ctx.gpr[20]);
    goto L_08A574E4;
L_08A574E4:
    ctx.set_gpr(20, ctx.gpr[20] + static_cast<std::uint32_t>(1));
    goto L_08A574E8;
L_08A574E8:
    ctx.set_gpr(3, ctx.gpr[20] < ctx.gpr[19] ? 1u : 0u);
    { const bool branch_taken = ctx.gpr[3] != 0u;
    // nop
      if (branch_taken) {
          goto L_08A57468;
      }
      goto L_08A574F4;
    }
L_08A574F4:
    ctx.set_gpr(3, rt.memory().aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(60)));
    ctx.set_gpr(22, rt.memory().aot_load32(ctx.gpr[3] + static_cast<std::uint32_t>(16)));
    ctx.set_gpr(3, rt.memory().aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(52)));
    ctx.set_gpr(21, rt.memory().aot_load32(ctx.gpr[3] + static_cast<std::uint32_t>(8)));
    ctx.set_gpr(20, 0u + 0u);
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_08A575B4;
      }
      goto L_08A57510;
    }
L_08A57510:
    ctx.set_gpr(3, ctx.gpr[20] << 2u);
    ctx.set_gpr(2, rt.memory().aot_load32(ctx.gpr[22] + static_cast<std::uint32_t>(16)));
    ctx.set_gpr(2, ctx.gpr[2] + ctx.gpr[3]);
    ctx.set_gpr(19, rt.memory().aot_load32(ctx.gpr[2] + static_cast<std::uint32_t>(0)));
    ctx.set_gpr(4, ctx.gpr[19] + 0u);
    ctx.set_gpr(5, ctx.gpr[21] + 0u);
    ctx.set_gpr(25, rt.memory().aot_load32(ctx.gpr[19] + static_cast<std::uint32_t>(0)));
    ctx.set_gpr(25, rt.memory().aot_load32(ctx.gpr[25] + static_cast<std::uint32_t>(96)));
    jump_target = ctx.gpr[25];
    ctx.set_gpr(31, 0x08A57538u);
    // nop
    ctx.pc = jump_target;
    if (rt.invoke_chained_call(ctx, &aot_mem) && ctx.pc == 0x08A57538u) goto L_08A57538;
    return;
L_08A57538:
    ctx.set_gpr(18, 0u + 0u);
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_08A575A4;
      }
      goto L_08A57544;
    }
L_08A57544:
    ctx.set_gpr(2, rt.memory().aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(52)));
    ctx.set_gpr(3, ctx.gpr[18] << 2u);
    ctx.set_gpr(2, rt.memory().aot_load32(ctx.gpr[2] + static_cast<std::uint32_t>(16)));
    ctx.set_gpr(2, ctx.gpr[2] + ctx.gpr[3]);
    ctx.set_gpr(17, rt.memory().aot_load32(ctx.gpr[2] + static_cast<std::uint32_t>(0)));
    ctx.set_gpr(2, rt.memory().aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(48)));
    ctx.set_gpr(3, ctx.gpr[17] << 2u);
    ctx.set_gpr(2, rt.memory().aot_load32(ctx.gpr[2] + static_cast<std::uint32_t>(16)));
    ctx.set_gpr(2, ctx.gpr[2] + ctx.gpr[3]);
    ctx.set_gpr(4, ctx.gpr[19] + 0u);
    ctx.set_gpr(5, ctx.gpr[18] + 0u);
    ctx.fpr[12] = std::bit_cast<float>(rt.memory().aot_load32(ctx.gpr[2] + static_cast<std::uint32_t>(0)));
    ctx.set_gpr(25, rt.memory().aot_load32(ctx.gpr[19] + static_cast<std::uint32_t>(0)));
    ctx.set_gpr(25, rt.memory().aot_load32(ctx.gpr[25] + static_cast<std::uint32_t>(104)));
    jump_target = ctx.gpr[25];
    ctx.set_gpr(31, 0x08A57584u);
    // nop
    ctx.pc = jump_target;
    if (rt.invoke_chained_call(ctx, &aot_mem) && ctx.pc == 0x08A57584u) goto L_08A57584;
    return;
L_08A57584:
    ctx.set_gpr(4, ctx.gpr[19] + 0u);
    ctx.set_gpr(5, ctx.gpr[18] + 0u);
    ctx.set_gpr(6, ctx.gpr[17] + 0u);
    ctx.set_gpr(25, rt.memory().aot_load32(ctx.gpr[19] + static_cast<std::uint32_t>(0)));
    ctx.set_gpr(25, rt.memory().aot_load32(ctx.gpr[25] + static_cast<std::uint32_t>(112)));
    jump_target = ctx.gpr[25];
    ctx.set_gpr(31, 0x08A575A0u);
    // nop
    ctx.pc = jump_target;
    if (rt.invoke_chained_call(ctx, &aot_mem) && ctx.pc == 0x08A575A0u) goto L_08A575A0;
    return;
L_08A575A0:
    ctx.set_gpr(18, ctx.gpr[18] + static_cast<std::uint32_t>(1));
    goto L_08A575A4;
L_08A575A4:
    ctx.set_gpr(3, ctx.gpr[18] < ctx.gpr[21] ? 1u : 0u);
    { const bool branch_taken = ctx.gpr[3] != 0u;
    // nop
      if (branch_taken) {
          goto L_08A57544;
      }
      goto L_08A575B0;
    }
L_08A575B0:
    ctx.set_gpr(20, ctx.gpr[20] + static_cast<std::uint32_t>(1));
    goto L_08A575B4;
L_08A575B4:
    ctx.set_gpr(3, rt.memory().aot_load32(ctx.gpr[22] + static_cast<std::uint32_t>(8)));
    ctx.set_gpr(3, static_cast<std::int32_t>(ctx.gpr[20]) < static_cast<std::int32_t>(ctx.gpr[3]) ? 1u : 0u);
    { const bool branch_taken = ctx.gpr[3] != 0u;
    // nop
      if (branch_taken) {
          goto L_08A57510;
      }
      goto L_08A575C4;
    }
L_08A575C4:
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
L_08A575F0:
    ctx.set_gpr(29, ctx.gpr[29] + static_cast<std::uint32_t>(-16));
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(12), ctx.gpr[31]);
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(8), ctx.gpr[16]);
    ctx.set_gpr(16, ctx.gpr[4] + 0u);
    ctx.set_gpr(4, rt.memory().aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(56)));
    { const bool branch_taken = ctx.gpr[4] == 0u;
    // nop
      if (branch_taken) {
          goto L_08A57618;
      }
      goto L_08A5760C;
    }
L_08A5760C:
    ctx.set_gpr(5, rt.memory().aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(48)));
    ctx.set_gpr(31, 0x08A57618u);
    // nop
    goto L_08A57958;
L_08A57618:
    ctx.set_gpr(4, ctx.gpr[16] + 0u);
    ctx.set_gpr(31, 0x08A57624u);
    // nop
    goto L_08A57424;
L_08A57624:
    ctx.set_gpr(31, rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(12)));
    ctx.set_gpr(16, rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(8)));
    ctx.set_gpr(29, ctx.gpr[29] + static_cast<std::uint32_t>(16));
    jump_target = ctx.gpr[31];
    // nop
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_08A57638:
    { const bool branch_taken = ctx.gpr[6] != 0u;
    // nop
      if (branch_taken) {
          goto L_08A576C0;
      }
      goto L_08A57640;
    }
L_08A57640:
    ctx.set_gpr(3, 0u + 0u);
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_08A576A8;
      }
      goto L_08A5764C;
    }
L_08A5764C:
    ctx.set_gpr(6, rt.memory().aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(36)));
    ctx.set_gpr(8, ctx.gpr[3] << 2u);
    ctx.set_gpr(6, rt.memory().aot_load32(ctx.gpr[6] + static_cast<std::uint32_t>(16)));
    ctx.set_gpr(6, ctx.gpr[6] + ctx.gpr[8]);
    ctx.set_gpr(6, rt.memory().aot_load32(ctx.gpr[6] + static_cast<std::uint32_t>(0)));
    ctx.set_gpr(7, rt.memory().aot_load32(ctx.gpr[6] + static_cast<std::uint32_t>(16)));
    ctx.set_gpr(6, rt.memory().aot_load32(ctx.gpr[7] + static_cast<std::uint32_t>(8)));
    { const bool branch_taken = static_cast<std::int32_t>(ctx.gpr[6]) <= 0;
    // nop
      if (branch_taken) {
          goto L_08A576A4;
      }
      goto L_08A57670;
    }
L_08A57670:
    ctx.set_gpr(7, rt.memory().aot_load32(ctx.gpr[7] + static_cast<std::uint32_t>(16)));
    ctx.set_gpr(6, rt.memory().aot_load32(ctx.gpr[5] + static_cast<std::uint32_t>(8)));
    { const bool branch_taken = ctx.gpr[6] == 0u;
    // nop
      if (branch_taken) {
          goto L_08A576A4;
      }
      goto L_08A57680;
    }
L_08A57680:
    { const bool branch_taken = static_cast<std::int32_t>(ctx.gpr[3]) < 0;
    // nop
      if (branch_taken) {
          goto L_08A576A4;
      }
      goto L_08A57688;
    }
L_08A57688:
    ctx.set_gpr(1, static_cast<std::int32_t>(ctx.gpr[3]) < static_cast<std::int32_t>(ctx.gpr[6]) ? 1u : 0u);
    { const bool branch_taken = ctx.gpr[1] == 0u;
    // nop
      if (branch_taken) {
          goto L_08A576A4;
      }
      goto L_08A57694;
    }
L_08A57694:
    ctx.fpr[0] = std::bit_cast<float>(rt.memory().aot_load32(ctx.gpr[7] + static_cast<std::uint32_t>(0)));
    ctx.set_gpr(6, rt.memory().aot_load32(ctx.gpr[5] + static_cast<std::uint32_t>(16)));
    ctx.set_gpr(6, ctx.gpr[6] + ctx.gpr[8]);
    rt.memory().aot_store32(ctx.gpr[6] + static_cast<std::uint32_t>(0), std::bit_cast<std::uint32_t>(ctx.fpr[0]));
    goto L_08A576A4;
L_08A576A4:
    ctx.set_gpr(3, ctx.gpr[3] + static_cast<std::uint32_t>(1));
    goto L_08A576A8;
L_08A576A8:
    ctx.set_gpr(6, rt.memory().aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(32)));
    ctx.set_gpr(6, static_cast<std::int32_t>(ctx.gpr[3]) < static_cast<std::int32_t>(ctx.gpr[6]) ? 1u : 0u);
    { const bool branch_taken = ctx.gpr[6] != 0u;
    // nop
      if (branch_taken) {
          goto L_08A5764C;
      }
      goto L_08A576B8;
    }
L_08A576B8:
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_08A5773C;
      }
      goto L_08A576C0;
    }
L_08A576C0:
    ctx.set_gpr(3, 0u + 0u);
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_08A5772C;
      }
      goto L_08A576CC;
    }
L_08A576CC:
    ctx.set_gpr(6, rt.memory().aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(36)));
    ctx.set_gpr(9, ctx.gpr[3] << 2u);
    ctx.set_gpr(6, rt.memory().aot_load32(ctx.gpr[6] + static_cast<std::uint32_t>(16)));
    ctx.set_gpr(6, ctx.gpr[6] + ctx.gpr[9]);
    ctx.set_gpr(6, rt.memory().aot_load32(ctx.gpr[6] + static_cast<std::uint32_t>(0)));
    ctx.set_gpr(8, rt.memory().aot_load32(ctx.gpr[6] + static_cast<std::uint32_t>(16)));
    ctx.set_gpr(6, rt.memory().aot_load32(ctx.gpr[8] + static_cast<std::uint32_t>(8)));
    ctx.set_gpr(6, ctx.gpr[6] + static_cast<std::uint32_t>(-1));
    ctx.set_gpr(7, ctx.gpr[6] << 2u);
    ctx.set_gpr(6, rt.memory().aot_load32(ctx.gpr[8] + static_cast<std::uint32_t>(16)));
    ctx.set_gpr(7, ctx.gpr[6] + ctx.gpr[7]);
    ctx.set_gpr(6, rt.memory().aot_load32(ctx.gpr[5] + static_cast<std::uint32_t>(8)));
    { const bool branch_taken = ctx.gpr[6] == 0u;
    // nop
      if (branch_taken) {
          goto L_08A57728;
      }
      goto L_08A57704;
    }
L_08A57704:
    { const bool branch_taken = static_cast<std::int32_t>(ctx.gpr[3]) < 0;
    // nop
      if (branch_taken) {
          goto L_08A57728;
      }
      goto L_08A5770C;
    }
L_08A5770C:
    ctx.set_gpr(1, static_cast<std::int32_t>(ctx.gpr[3]) < static_cast<std::int32_t>(ctx.gpr[6]) ? 1u : 0u);
    { const bool branch_taken = ctx.gpr[1] == 0u;
    // nop
      if (branch_taken) {
          goto L_08A57728;
      }
      goto L_08A57718;
    }
L_08A57718:
    ctx.fpr[0] = std::bit_cast<float>(rt.memory().aot_load32(ctx.gpr[7] + static_cast<std::uint32_t>(0)));
    ctx.set_gpr(6, rt.memory().aot_load32(ctx.gpr[5] + static_cast<std::uint32_t>(16)));
    ctx.set_gpr(6, ctx.gpr[6] + ctx.gpr[9]);
    rt.memory().aot_store32(ctx.gpr[6] + static_cast<std::uint32_t>(0), std::bit_cast<std::uint32_t>(ctx.fpr[0]));
    goto L_08A57728;
L_08A57728:
    ctx.set_gpr(3, ctx.gpr[3] + static_cast<std::uint32_t>(1));
    goto L_08A5772C;
L_08A5772C:
    ctx.set_gpr(6, rt.memory().aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(32)));
    ctx.set_gpr(6, static_cast<std::int32_t>(ctx.gpr[3]) < static_cast<std::int32_t>(ctx.gpr[6]) ? 1u : 0u);
    { const bool branch_taken = ctx.gpr[6] != 0u;
    // nop
      if (branch_taken) {
          goto L_08A576CC;
      }
      goto L_08A5773C;
    }
L_08A5773C:
    jump_target = ctx.gpr[31];
    // nop
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_08A57744:
    { const bool branch_taken = static_cast<std::int32_t>(ctx.gpr[9]) > 0;
    // nop
      if (branch_taken) {
          goto L_08A57760;
      }
      goto L_08A5774C;
    }
L_08A5774C:
    rt.memory().aot_store32(ctx.gpr[5] + static_cast<std::uint32_t>(0), 0u);
    rt.memory().aot_store32(ctx.gpr[6] + static_cast<std::uint32_t>(0), 0u);
    rt.memory().aot_store32(ctx.gpr[7] + static_cast<std::uint32_t>(0), 0u);
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_08A5792C;
      }
      goto L_08A57760;
    }
L_08A57760:
    rt.memory().aot_store32(ctx.gpr[6] + static_cast<std::uint32_t>(0), 0u);
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_08A57778;
      }
      goto L_08A5776C;
    }
L_08A5776C:
    ctx.set_gpr(3, rt.memory().aot_load32(ctx.gpr[6] + static_cast<std::uint32_t>(0)));
    ctx.set_gpr(3, ctx.gpr[3] + static_cast<std::uint32_t>(1));
    rt.memory().aot_store32(ctx.gpr[6] + static_cast<std::uint32_t>(0), ctx.gpr[3]);
    goto L_08A57778;
L_08A57778:
    ctx.set_gpr(12, rt.memory().aot_load32(ctx.gpr[6] + static_cast<std::uint32_t>(0)));
    ctx.set_gpr(1, static_cast<std::int32_t>(ctx.gpr[12]) < static_cast<std::int32_t>(ctx.gpr[9]) ? 1u : 0u);
    { const bool branch_taken = ctx.gpr[1] == 0u;
    // nop
      if (branch_taken) {
          goto L_08A577A4;
      }
      goto L_08A57788;
    }
L_08A57788:
    ctx.set_gpr(11, ctx.gpr[12] << 2u);
    ctx.set_gpr(3, rt.memory().aot_load32(ctx.gpr[8] + static_cast<std::uint32_t>(16)));
    ctx.set_gpr(3, ctx.gpr[3] + ctx.gpr[11]);
    ctx.set_gpr(3, rt.memory().aot_load32(ctx.gpr[3] + static_cast<std::uint32_t>(0)));
    ctx.set_gpr(1, ctx.gpr[3] < ctx.gpr[10] ? 1u : 0u);
    { const bool branch_taken = ctx.gpr[1] != 0u;
    // nop
      if (branch_taken) {
          goto L_08A5776C;
      }
      goto L_08A577A4;
    }
L_08A577A4:
    ctx.set_gpr(3, static_cast<std::int32_t>(ctx.gpr[12]) < static_cast<std::int32_t>(ctx.gpr[9]) ? 1u : 0u);
    { const bool branch_taken = ctx.gpr[3] != 0u;
    // nop
      if (branch_taken) {
          goto L_08A57878;
      }
      goto L_08A577B0;
    }
L_08A577B0:
    ctx.set_gpr(11, rt.memory().aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(24)));
    ctx.set_gpr(3, 0u + static_cast<std::uint32_t>(3));
    { const bool branch_taken = ctx.gpr[11] != ctx.gpr[3];
    // nop
      if (branch_taken) {
          goto L_08A57860;
      }
      goto L_08A577C0;
    }
L_08A577C0:
    ctx.set_gpr(3, ctx.gpr[9] + static_cast<std::uint32_t>(-1));
    rt.memory().aot_store32(ctx.gpr[5] + static_cast<std::uint32_t>(0), ctx.gpr[3]);
    rt.memory().aot_store32(ctx.gpr[6] + static_cast<std::uint32_t>(0), 0u);
    ctx.set_gpr(3, rt.memory().aot_load32(ctx.gpr[5] + static_cast<std::uint32_t>(0)));
    ctx.set_gpr(5, ctx.gpr[3] << 2u);
    ctx.set_gpr(3, rt.memory().aot_load32(ctx.gpr[8] + static_cast<std::uint32_t>(16)));
    ctx.set_gpr(5, ctx.gpr[3] + ctx.gpr[5]);
    ctx.set_gpr(4, rt.memory().aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(56)));
    ctx.set_gpr(3, rt.memory().aot_load32(ctx.gpr[5] + static_cast<std::uint32_t>(0)));
    ctx.set_gpr(3, ctx.gpr[4] - ctx.gpr[3]);
    { const bool branch_taken = static_cast<std::int32_t>(ctx.gpr[3]) < 0;
    // nop
      if (branch_taken) {
          goto L_08A57800;
      }
      goto L_08A577F0;
    }
L_08A577F0:
    ctx.fpr[0] = std::bit_cast<float>(ctx.gpr[3]);
    ctx.fpr[1] = static_cast<float>(static_cast<std::int32_t>(ctx.fpr_bits(0)));
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_08A57818;
      }
      goto L_08A57800;
    }
L_08A57800:
    ctx.set_gpr(4, ctx.gpr[3] >> 1u);
    ctx.set_gpr(3, ctx.gpr[3] & 1u);
    ctx.set_gpr(4, ctx.gpr[4] | ctx.gpr[3]);
    ctx.fpr[0] = std::bit_cast<float>(ctx.gpr[4]);
    ctx.fpr[1] = static_cast<float>(static_cast<std::int32_t>(ctx.fpr_bits(0)));
    ctx.fpr[1] = ctx.fpr[1] + ctx.fpr[1];
    goto L_08A57818;
L_08A57818:
    ctx.set_gpr(3, rt.memory().aot_load32(ctx.gpr[5] + static_cast<std::uint32_t>(0)));
    ctx.set_gpr(3, ctx.gpr[10] - ctx.gpr[3]);
    { const bool branch_taken = static_cast<std::int32_t>(ctx.gpr[3]) < 0;
    // nop
      if (branch_taken) {
          goto L_08A57838;
      }
      goto L_08A57828;
    }
L_08A57828:
    ctx.fpr[0] = std::bit_cast<float>(ctx.gpr[3]);
    ctx.fpr[0] = static_cast<float>(static_cast<std::int32_t>(ctx.fpr_bits(0)));
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_08A57850;
      }
      goto L_08A57838;
    }
L_08A57838:
    ctx.set_gpr(4, ctx.gpr[3] >> 1u);
    ctx.set_gpr(3, ctx.gpr[3] & 1u);
    ctx.set_gpr(4, ctx.gpr[4] | ctx.gpr[3]);
    ctx.fpr[0] = std::bit_cast<float>(ctx.gpr[4]);
    ctx.fpr[0] = static_cast<float>(static_cast<std::int32_t>(ctx.fpr_bits(0)));
    ctx.fpr[0] = ctx.fpr[0] + ctx.fpr[0];
    goto L_08A57850;
L_08A57850:
    ctx.fpr[0] = ctx.fpr[0] / ctx.fpr[1];
    rt.memory().aot_store32(ctx.gpr[7] + static_cast<std::uint32_t>(0), std::bit_cast<std::uint32_t>(ctx.fpr[0]));
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_08A5792C;
      }
      goto L_08A57860;
    }
L_08A57860:
    ctx.set_gpr(3, ctx.gpr[9] + static_cast<std::uint32_t>(-1));
    rt.memory().aot_store32(ctx.gpr[6] + static_cast<std::uint32_t>(0), ctx.gpr[3]);
    rt.memory().aot_store32(ctx.gpr[5] + static_cast<std::uint32_t>(0), ctx.gpr[3]);
    rt.memory().aot_store32(ctx.gpr[7] + static_cast<std::uint32_t>(0), 0u);
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_08A5792C;
      }
      goto L_08A57878;
    }
L_08A57878:
    { const bool branch_taken = ctx.gpr[12] != 0u;
    // nop
      if (branch_taken) {
          goto L_08A57890;
      }
      goto L_08A57880;
    }
L_08A57880:
    rt.memory().aot_store32(ctx.gpr[5] + static_cast<std::uint32_t>(0), ctx.gpr[12]);
    rt.memory().aot_store32(ctx.gpr[7] + static_cast<std::uint32_t>(0), 0u);
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_08A5792C;
      }
      goto L_08A57890;
    }
L_08A57890:
    ctx.set_gpr(3, ctx.gpr[12] + static_cast<std::uint32_t>(-1));
    rt.memory().aot_store32(ctx.gpr[5] + static_cast<std::uint32_t>(0), ctx.gpr[3]);
    ctx.set_gpr(3, ctx.gpr[3] << 2u);
    ctx.set_gpr(4, rt.memory().aot_load32(ctx.gpr[8] + static_cast<std::uint32_t>(16)));
    ctx.set_gpr(8, ctx.gpr[4] + ctx.gpr[3]);
    ctx.set_gpr(3, rt.memory().aot_load32(ctx.gpr[6] + static_cast<std::uint32_t>(0)));
    ctx.set_gpr(3, ctx.gpr[3] << 2u);
    ctx.set_gpr(5, ctx.gpr[4] + ctx.gpr[3]);
    ctx.set_gpr(3, rt.memory().aot_load32(ctx.gpr[8] + static_cast<std::uint32_t>(0)));
    ctx.set_gpr(3, ctx.gpr[10] - ctx.gpr[3]);
    { const bool branch_taken = static_cast<std::int32_t>(ctx.gpr[3]) < 0;
    // nop
      if (branch_taken) {
          goto L_08A578D0;
      }
      goto L_08A578C0;
    }
L_08A578C0:
    ctx.fpr[0] = std::bit_cast<float>(ctx.gpr[3]);
    ctx.fpr[1] = static_cast<float>(static_cast<std::int32_t>(ctx.fpr_bits(0)));
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_08A578E8;
      }
      goto L_08A578D0;
    }
L_08A578D0:
    ctx.set_gpr(4, ctx.gpr[3] >> 1u);
    ctx.set_gpr(3, ctx.gpr[3] & 1u);
    ctx.set_gpr(4, ctx.gpr[4] | ctx.gpr[3]);
    ctx.fpr[0] = std::bit_cast<float>(ctx.gpr[4]);
    ctx.fpr[1] = static_cast<float>(static_cast<std::int32_t>(ctx.fpr_bits(0)));
    ctx.fpr[1] = ctx.fpr[1] + ctx.fpr[1];
    goto L_08A578E8;
L_08A578E8:
    ctx.set_gpr(4, rt.memory().aot_load32(ctx.gpr[5] + static_cast<std::uint32_t>(0)));
    ctx.set_gpr(3, rt.memory().aot_load32(ctx.gpr[8] + static_cast<std::uint32_t>(0)));
    ctx.set_gpr(3, ctx.gpr[4] - ctx.gpr[3]);
    { const bool branch_taken = static_cast<std::int32_t>(ctx.gpr[3]) < 0;
    // nop
      if (branch_taken) {
          goto L_08A5790C;
      }
      goto L_08A578FC;
    }
L_08A578FC:
    ctx.fpr[0] = std::bit_cast<float>(ctx.gpr[3]);
    ctx.fpr[0] = static_cast<float>(static_cast<std::int32_t>(ctx.fpr_bits(0)));
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_08A57924;
      }
      goto L_08A5790C;
    }
L_08A5790C:
    ctx.set_gpr(4, ctx.gpr[3] >> 1u);
    ctx.set_gpr(3, ctx.gpr[3] & 1u);
    ctx.set_gpr(4, ctx.gpr[4] | ctx.gpr[3]);
    ctx.fpr[0] = std::bit_cast<float>(ctx.gpr[4]);
    ctx.fpr[0] = static_cast<float>(static_cast<std::int32_t>(ctx.fpr_bits(0)));
    ctx.fpr[0] = ctx.fpr[0] + ctx.fpr[0];
    goto L_08A57924;
L_08A57924:
    ctx.fpr[0] = ctx.fpr[1] / ctx.fpr[0];
    rt.memory().aot_store32(ctx.gpr[7] + static_cast<std::uint32_t>(0), std::bit_cast<std::uint32_t>(ctx.fpr[0]));
    goto L_08A5792C;
L_08A5792C:
    jump_target = ctx.gpr[31];
    // nop
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_08A57934:
    ctx.set_gpr(29, ctx.gpr[29] + static_cast<std::uint32_t>(-16));
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(12), ctx.gpr[31]);
    ctx.set_gpr(5, rt.memory().aot_load32(ctx.gpr[5] + static_cast<std::uint32_t>(52)));
    ctx.set_gpr(31, 0x08A57948u);
    // nop
    goto L_08A57958;
L_08A57948:
    ctx.set_gpr(31, rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(12)));
    ctx.set_gpr(29, ctx.gpr[29] + static_cast<std::uint32_t>(16));
    jump_target = ctx.gpr[31];
    // nop
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_08A57958:
    ctx.set_gpr(29, ctx.gpr[29] + static_cast<std::uint32_t>(-64));
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(28), ctx.gpr[31]);
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(24), ctx.gpr[21]);
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(20), ctx.gpr[20]);
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(16), ctx.gpr[19]);
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(12), ctx.gpr[18]);
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(8), ctx.gpr[17]);
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(4), ctx.gpr[16]);
    ctx.set_gpr(21, ctx.gpr[4] + 0u);
    ctx.set_gpr(20, ctx.gpr[5] + 0u);
    ctx.set_gpr(3, rt.memory().aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(48)));
    ctx.set_gpr(2, rt.memory().aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(52)));
    ctx.set_gpr(4, ctx.gpr[6] < ctx.gpr[3] ? 1u : 0u);
    ctx.set_gpr(3, ctx.gpr[6] - ctx.gpr[3]);
    ctx.set_gpr(2, ctx.gpr[7] - ctx.gpr[2]);
    ctx.set_gpr(2, ctx.gpr[2] - ctx.gpr[4]);
    ctx.set_gpr(1, static_cast<std::int32_t>(0u) < static_cast<std::int32_t>(ctx.gpr[2]) ? 1u : 0u);
    { const bool branch_taken = ctx.gpr[1] != 0u;
    // nop
      if (branch_taken) {
          goto L_08A579D8;
      }
      goto L_08A579A4;
    }
L_08A579A4:
    ctx.set_gpr(1, static_cast<std::int32_t>(ctx.gpr[2]) < static_cast<std::int32_t>(0u) ? 1u : 0u);
    { const bool branch_taken = ctx.gpr[1] != 0u;
    // nop
      if (branch_taken) {
          goto L_08A579BC;
      }
      goto L_08A579B0;
    }
L_08A579B0:
    ctx.set_gpr(1, 0u < ctx.gpr[3] ? 1u : 0u);
    { const bool branch_taken = ctx.gpr[1] != 0u;
    // nop
      if (branch_taken) {
          goto L_08A579D8;
      }
      goto L_08A579BC;
    }
L_08A579BC:
    ctx.set_gpr(4, ctx.gpr[21] + 0u);
    ctx.set_gpr(5, ctx.gpr[20] + 0u);
    ctx.set_gpr(6, 0u + 0u);
    ctx.set_gpr(31, 0x08A579D0u);
    // nop
    goto L_08A57638;
L_08A579D0:
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_08A57C9C;
      }
      goto L_08A579D8;
    }
L_08A579D8:
    ctx.set_gpr(3, ctx.gpr[3] >> 18u);
    ctx.set_gpr(2, ctx.gpr[2] << 14u);
    ctx.set_gpr(4, ctx.gpr[2] | ctx.gpr[3]);
    ctx.set_gpr(3, rt.memory().aot_load32(ctx.gpr[21] + static_cast<std::uint32_t>(24)));
    ctx.set_gpr(6, 0u + static_cast<std::uint32_t>(1));
    { const bool branch_taken = ctx.gpr[3] != ctx.gpr[6];
    // nop
      if (branch_taken) {
          goto L_08A57A1C;
      }
      goto L_08A579F4;
    }
L_08A579F4:
    ctx.set_gpr(2, rt.memory().aot_load32(ctx.gpr[21] + static_cast<std::uint32_t>(56)));
    ctx.set_gpr(1, ctx.gpr[2] < ctx.gpr[4] ? 1u : 0u);
    { const bool branch_taken = ctx.gpr[1] == 0u;
    // nop
      if (branch_taken) {
          goto L_08A57A1C;
      }
      goto L_08A57A04;
    }
L_08A57A04:
    ctx.set_gpr(4, ctx.gpr[21] + 0u);
    ctx.set_gpr(5, ctx.gpr[20] + 0u);
    ctx.set_gpr(31, 0x08A57A14u);
    // nop
    goto L_08A57638;
L_08A57A14:
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_08A57C9C;
      }
      goto L_08A57A1C;
    }
L_08A57A1C:
    ctx.set_gpr(2, 0u + static_cast<std::uint32_t>(4));
    { const bool branch_taken = ctx.gpr[3] != ctx.gpr[2];
    // nop
      if (branch_taken) {
          goto L_08A57A58;
      }
      goto L_08A57A28;
    }
L_08A57A28:
    ctx.set_gpr(2, rt.memory().aot_load32(ctx.gpr[21] + static_cast<std::uint32_t>(56)));
    ctx.set_gpr(2, ctx.gpr[2] << 1u);
    ctx.set_gpr(2, ctx.gpr[4] < ctx.gpr[2] ? 1u : 0u);
    { const bool branch_taken = ctx.gpr[2] != 0u;
    // nop
      if (branch_taken) {
          goto L_08A57A58;
      }
      goto L_08A57A3C;
    }
L_08A57A3C:
    ctx.set_gpr(4, ctx.gpr[21] + 0u);
    ctx.set_gpr(5, ctx.gpr[20] + 0u);
    ctx.set_gpr(6, 0u + 0u);
    ctx.set_gpr(31, 0x08A57A50u);
    // nop
    goto L_08A57638;
L_08A57A50:
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_08A57C9C;
      }
      goto L_08A57A58;
    }
L_08A57A58:
    ctx.set_gpr(2, 0u + static_cast<std::uint32_t>(2));
    { const bool branch_taken = ctx.gpr[3] == ctx.gpr[2];
    // nop
      if (branch_taken) {
          goto L_08A57A70;
      }
      goto L_08A57A64;
    }
L_08A57A64:
    ctx.set_gpr(2, 0u + static_cast<std::uint32_t>(4));
    { const bool branch_taken = ctx.gpr[3] != ctx.gpr[2];
    // nop
      if (branch_taken) {
          goto L_08A57A98;
      }
      goto L_08A57A70;
    }
L_08A57A70:
    ctx.set_gpr(3, rt.memory().aot_load32(ctx.gpr[21] + static_cast<std::uint32_t>(56)));
    ctx.set_gpr(2, ctx.gpr[3] << 1u);
    { const std::uint32_t dividend = ctx.gpr[4]; const std::uint32_t divisor = ctx.gpr[2]; if (divisor == 0u) { ctx.lo = 0xFFFFFFFFu; ctx.hi = dividend; } else { ctx.lo = dividend / divisor; ctx.hi = dividend % divisor; } }
    ctx.set_gpr(19, ctx.hi);
    ctx.set_gpr(1, ctx.gpr[3] < ctx.gpr[19] ? 1u : 0u);
    { const bool branch_taken = ctx.gpr[1] == 0u;
    // nop
      if (branch_taken) {
          goto L_08A57AA4;
      }
      goto L_08A57A8C;
    }
L_08A57A8C:
    ctx.set_gpr(19, ctx.gpr[2] - ctx.gpr[19]);
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_08A57AA4;
      }
      goto L_08A57A98;
    }
L_08A57A98:
    ctx.set_gpr(2, rt.memory().aot_load32(ctx.gpr[21] + static_cast<std::uint32_t>(56)));
    { const std::uint32_t dividend = ctx.gpr[4]; const std::uint32_t divisor = ctx.gpr[2]; if (divisor == 0u) { ctx.lo = 0xFFFFFFFFu; ctx.hi = dividend; } else { ctx.lo = dividend / divisor; ctx.hi = dividend % divisor; } }
    ctx.set_gpr(19, ctx.hi);
    goto L_08A57AA4;
L_08A57AA4:
    ctx.set_gpr(4, ctx.gpr[21] + 0u);
    ctx.set_gpr(5, ctx.gpr[29] + static_cast<std::uint32_t>(60));
    ctx.set_gpr(6, ctx.gpr[29] + static_cast<std::uint32_t>(56));
    ctx.set_gpr(7, ctx.gpr[29] + static_cast<std::uint32_t>(52));
    ctx.set_gpr(8, rt.memory().aot_load32(ctx.gpr[21] + static_cast<std::uint32_t>(12)));
    ctx.set_gpr(9, rt.memory().aot_load32(ctx.gpr[21] + static_cast<std::uint32_t>(8)));
    ctx.set_gpr(10, ctx.gpr[19] + 0u);
    ctx.set_gpr(31, 0x08A57AC8u);
    // nop
    goto L_08A57744;
L_08A57AC8:
    ctx.set_gpr(18, 0u + 0u);
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_08A57C8C;
      }
      goto L_08A57AD4;
    }
L_08A57AD4:
    ctx.set_gpr(3, rt.memory().aot_load32(ctx.gpr[21] + static_cast<std::uint32_t>(36)));
    ctx.set_gpr(17, ctx.gpr[18] << 2u);
    ctx.set_gpr(3, rt.memory().aot_load32(ctx.gpr[3] + static_cast<std::uint32_t>(16)));
    ctx.set_gpr(3, ctx.gpr[3] + ctx.gpr[17]);
    ctx.set_gpr(16, rt.memory().aot_load32(ctx.gpr[3] + static_cast<std::uint32_t>(0)));
    ctx.set_gpr(3, rt.memory().aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(16)));
    ctx.set_gpr(3, rt.memory().aot_load32(ctx.gpr[3] + static_cast<std::uint32_t>(8)));
    { const bool branch_taken = static_cast<std::int32_t>(ctx.gpr[3]) <= 0;
    // nop
      if (branch_taken) {
          goto L_08A57C88;
      }
      goto L_08A57AF8;
    }
L_08A57AF8:
    ctx.set_gpr(9, rt.memory().aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(8)));
    { const bool branch_taken = static_cast<std::int32_t>(ctx.gpr[9]) <= 0;
    // nop
      if (branch_taken) {
          goto L_08A57B2C;
      }
      goto L_08A57B04;
    }
L_08A57B04:
    ctx.set_gpr(4, ctx.gpr[21] + 0u);
    ctx.set_gpr(5, ctx.gpr[29] + static_cast<std::uint32_t>(48));
    ctx.set_gpr(6, ctx.gpr[29] + static_cast<std::uint32_t>(44));
    ctx.set_gpr(7, ctx.gpr[29] + static_cast<std::uint32_t>(40));
    ctx.set_gpr(8, rt.memory().aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(12)));
    ctx.set_gpr(10, ctx.gpr[19] + 0u);
    ctx.set_gpr(31, 0x08A57B24u);
    // nop
    goto L_08A57744;
L_08A57B24:
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_08A57B44;
      }
      goto L_08A57B2C;
    }
L_08A57B2C:
    ctx.set_gpr(3, rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(60)));
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(48), ctx.gpr[3]);
    ctx.set_gpr(3, rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(56)));
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(44), ctx.gpr[3]);
    ctx.fpr[0] = std::bit_cast<float>(rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(52)));
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(40), std::bit_cast<std::uint32_t>(ctx.fpr[0]));
    goto L_08A57B44;
L_08A57B44:
    ctx.set_gpr(4, rt.memory().aot_load32(ctx.gpr[21] + static_cast<std::uint32_t>(28)));
    ctx.set_gpr(3, 0u + static_cast<std::uint32_t>(2));
    { const bool branch_taken = ctx.gpr[4] != ctx.gpr[3];
    // nop
      if (branch_taken) {
          goto L_08A57BF8;
      }
      goto L_08A57B54;
    }
L_08A57B54:
    ctx.set_gpr(4, rt.memory().aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(16)));
    ctx.set_gpr(3, rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(44)));
    ctx.set_gpr(3, ctx.gpr[3] << 2u);
    ctx.set_gpr(7, rt.memory().aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(16)));
    ctx.set_gpr(6, ctx.gpr[7] + ctx.gpr[3]);
    ctx.set_gpr(4, rt.memory().aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(20)));
    ctx.set_gpr(5, rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(48)));
    ctx.set_gpr(3, ctx.gpr[5] << 1u);
    ctx.set_gpr(3, ctx.gpr[3] + static_cast<std::uint32_t>(1));
    ctx.set_gpr(3, ctx.gpr[3] << 2u);
    ctx.set_gpr(4, rt.memory().aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(16)));
    ctx.set_gpr(3, ctx.gpr[4] + ctx.gpr[3]);
    ctx.fpr[4] = std::bit_cast<float>(rt.memory().aot_load32(ctx.gpr[3] + static_cast<std::uint32_t>(0)));
    ctx.set_gpr(3, ctx.gpr[5] << 3u);
    ctx.set_gpr(3, ctx.gpr[4] + ctx.gpr[3]);
    ctx.fpr[2] = std::bit_cast<float>(rt.memory().aot_load32(ctx.gpr[3] + static_cast<std::uint32_t>(0)));
    ctx.set_gpr(3, ctx.gpr[5] << 2u);
    ctx.set_gpr(3, ctx.gpr[7] + ctx.gpr[3]);
    ctx.fpr[1] = std::bit_cast<float>(rt.memory().aot_load32(ctx.gpr[3] + static_cast<std::uint32_t>(0)));
    ctx.fpr[3] = std::bit_cast<float>(rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(40)));
    ctx.fpr[0] = ctx.fpr[2] - ctx.fpr[1];
    { const float fs = ctx.fpr[3]; const float ft = ctx.fpr[0]; if ((std::isinf(fs) && ft == 0.0f) || (std::isinf(ft) && fs == 0.0f)) ctx.set_fpr_bits(0, 0x7FC00000u); else ctx.fpr[0] = fs * ft; }
    ctx.fpr[1] = ctx.fpr[1] + ctx.fpr[0];
    ctx.fpr[0] = ctx.fpr[4] - ctx.fpr[2];
    { const float fs = ctx.fpr[3]; const float ft = ctx.fpr[0]; if ((std::isinf(fs) && ft == 0.0f) || (std::isinf(ft) && fs == 0.0f)) ctx.set_fpr_bits(0, 0x7FC00000u); else ctx.fpr[0] = fs * ft; }
    ctx.fpr[2] = ctx.fpr[2] + ctx.fpr[0];
    ctx.fpr[0] = ctx.fpr[2] - ctx.fpr[1];
    { const float fs = ctx.fpr[3]; const float ft = ctx.fpr[0]; if ((std::isinf(fs) && ft == 0.0f) || (std::isinf(ft) && fs == 0.0f)) ctx.set_fpr_bits(0, 0x7FC00000u); else ctx.fpr[0] = fs * ft; }
    ctx.fpr[1] = ctx.fpr[1] + ctx.fpr[0];
    ctx.fpr[0] = std::bit_cast<float>(rt.memory().aot_load32(ctx.gpr[6] + static_cast<std::uint32_t>(0)));
    ctx.fpr[0] = ctx.fpr[0] - ctx.fpr[4];
    { const float fs = ctx.fpr[3]; const float ft = ctx.fpr[0]; if ((std::isinf(fs) && ft == 0.0f) || (std::isinf(ft) && fs == 0.0f)) ctx.set_fpr_bits(0, 0x7FC00000u); else ctx.fpr[0] = fs * ft; }
    ctx.fpr[0] = ctx.fpr[4] + ctx.fpr[0];
    ctx.fpr[0] = ctx.fpr[0] - ctx.fpr[2];
    { const float fs = ctx.fpr[3]; const float ft = ctx.fpr[0]; if ((std::isinf(fs) && ft == 0.0f) || (std::isinf(ft) && fs == 0.0f)) ctx.set_fpr_bits(0, 0x7FC00000u); else ctx.fpr[0] = fs * ft; }
    ctx.fpr[0] = ctx.fpr[2] + ctx.fpr[0];
    ctx.fpr[0] = ctx.fpr[0] - ctx.fpr[1];
    { const float fs = ctx.fpr[3]; const float ft = ctx.fpr[0]; if ((std::isinf(fs) && ft == 0.0f) || (std::isinf(ft) && fs == 0.0f)) ctx.set_fpr_bits(0, 0x7FC00000u); else ctx.fpr[0] = fs * ft; }
    ctx.fpr[0] = ctx.fpr[1] + ctx.fpr[0];
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_08A57C5C;
      }
      goto L_08A57BF8;
    }
L_08A57BF8:
    ctx.set_gpr(3, 0u + static_cast<std::uint32_t>(1));
    { const bool branch_taken = ctx.gpr[4] != ctx.gpr[3];
    // nop
      if (branch_taken) {
          goto L_08A57C44;
      }
      goto L_08A57C04;
    }
L_08A57C04:
    ctx.set_gpr(4, rt.memory().aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(16)));
    ctx.set_gpr(3, rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(48)));
    ctx.set_gpr(3, ctx.gpr[3] << 2u);
    ctx.set_gpr(4, rt.memory().aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(16)));
    ctx.set_gpr(3, ctx.gpr[4] + ctx.gpr[3]);
    ctx.fpr[2] = std::bit_cast<float>(rt.memory().aot_load32(ctx.gpr[3] + static_cast<std::uint32_t>(0)));
    ctx.set_gpr(3, rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(44)));
    ctx.set_gpr(3, ctx.gpr[3] << 2u);
    ctx.set_gpr(3, ctx.gpr[4] + ctx.gpr[3]);
    ctx.fpr[0] = std::bit_cast<float>(rt.memory().aot_load32(ctx.gpr[3] + static_cast<std::uint32_t>(0)));
    ctx.fpr[1] = ctx.fpr[0] - ctx.fpr[2];
    ctx.fpr[0] = std::bit_cast<float>(rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(40)));
    { const float fs = ctx.fpr[0]; const float ft = ctx.fpr[1]; if ((std::isinf(fs) && ft == 0.0f) || (std::isinf(ft) && fs == 0.0f)) ctx.set_fpr_bits(0, 0x7FC00000u); else ctx.fpr[0] = fs * ft; }
    ctx.fpr[0] = ctx.fpr[2] + ctx.fpr[0];
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_08A57C5C;
      }
      goto L_08A57C44;
    }
L_08A57C44:
    ctx.set_gpr(5, rt.memory().aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(16)));
    ctx.set_gpr(3, rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(48)));
    ctx.set_gpr(4, ctx.gpr[3] << 2u);
    ctx.set_gpr(3, rt.memory().aot_load32(ctx.gpr[5] + static_cast<std::uint32_t>(16)));
    ctx.set_gpr(3, ctx.gpr[3] + ctx.gpr[4]);
    ctx.fpr[0] = std::bit_cast<float>(rt.memory().aot_load32(ctx.gpr[3] + static_cast<std::uint32_t>(0)));
    goto L_08A57C5C;
L_08A57C5C:
    ctx.set_gpr(3, rt.memory().aot_load32(ctx.gpr[20] + static_cast<std::uint32_t>(8)));
    { const bool branch_taken = ctx.gpr[3] == 0u;
    // nop
      if (branch_taken) {
          goto L_08A57C88;
      }
      goto L_08A57C68;
    }
L_08A57C68:
    { const bool branch_taken = static_cast<std::int32_t>(ctx.gpr[18]) < 0;
    // nop
      if (branch_taken) {
          goto L_08A57C88;
      }
      goto L_08A57C70;
    }
L_08A57C70:
    ctx.set_gpr(1, static_cast<std::int32_t>(ctx.gpr[18]) < static_cast<std::int32_t>(ctx.gpr[3]) ? 1u : 0u);
    { const bool branch_taken = ctx.gpr[1] == 0u;
    // nop
      if (branch_taken) {
          goto L_08A57C88;
      }
      goto L_08A57C7C;
    }
L_08A57C7C:
    ctx.set_gpr(3, rt.memory().aot_load32(ctx.gpr[20] + static_cast<std::uint32_t>(16)));
    ctx.set_gpr(3, ctx.gpr[3] + ctx.gpr[17]);
    rt.memory().aot_store32(ctx.gpr[3] + static_cast<std::uint32_t>(0), std::bit_cast<std::uint32_t>(ctx.fpr[0]));
    goto L_08A57C88;
L_08A57C88:
    ctx.set_gpr(18, ctx.gpr[18] + static_cast<std::uint32_t>(1));
    goto L_08A57C8C;
L_08A57C8C:
    ctx.set_gpr(3, rt.memory().aot_load32(ctx.gpr[21] + static_cast<std::uint32_t>(32)));
    ctx.set_gpr(3, static_cast<std::int32_t>(ctx.gpr[18]) < static_cast<std::int32_t>(ctx.gpr[3]) ? 1u : 0u);
    { const bool branch_taken = ctx.gpr[3] != 0u;
    // nop
      if (branch_taken) {
          goto L_08A57AD4;
      }
      goto L_08A57C9C;
    }
L_08A57C9C:
    ctx.set_gpr(31, rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(28)));
    ctx.set_gpr(21, rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(24)));
    ctx.set_gpr(20, rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(20)));
    ctx.set_gpr(19, rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(16)));
    ctx.set_gpr(18, rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(12)));
    ctx.set_gpr(17, rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(8)));
    ctx.set_gpr(16, rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(4)));
    ctx.set_gpr(29, ctx.gpr[29] + static_cast<std::uint32_t>(64));
    jump_target = ctx.gpr[31];
    // nop
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_08A57CC4:
    ctx.set_gpr(29, ctx.gpr[29] + static_cast<std::uint32_t>(-16));
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(12), ctx.gpr[31]);
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(8), ctx.gpr[17]);
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(4), ctx.gpr[16]);
    ctx.set_gpr(17, ctx.gpr[4] + 0u);
    ctx.set_gpr(16, ctx.gpr[5] + 0u);
    ctx.set_gpr(31, 0x08A57CE4u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0080_entry, 80u, 428u, 0x08945EB4u>(ctx, &aot_mem) && ctx.pc == 0x08A57CE4u) goto L_08A57CE4;
    return;
L_08A57CE4:
    { const bool branch_taken = ctx.gpr[16] != 0u;
    // nop
      if (branch_taken) {
          goto L_08A57CF8;
      }
      goto L_08A57CEC;
    }
L_08A57CEC:
    ctx.set_gpr(3, 16256u << 16u);
    rt.memory().aot_store32(ctx.gpr[17] + static_cast<std::uint32_t>(40), ctx.gpr[3]);
    rt.memory().aot_store32(ctx.gpr[17] + static_cast<std::uint32_t>(68), ctx.gpr[3]);
    goto L_08A57CF8;
L_08A57CF8:
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
L_08A57D10:
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
    ctx.set_gpr(21, ctx.gpr[4] + 0u);
    ctx.set_gpr(3, rt.memory().aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(32)));
    ctx.set_gpr(3, rt.memory().aot_load32(ctx.gpr[3] + static_cast<std::uint32_t>(16)));
    ctx.set_gpr(3, rt.memory().aot_load32(ctx.gpr[3] + static_cast<std::uint32_t>(0)));
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(60), ctx.gpr[3]);
    ctx.set_gpr(3, rt.memory().aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(48)));
    ctx.set_gpr(7, rt.memory().aot_load32(ctx.gpr[3] + static_cast<std::uint32_t>(20)));
    ctx.set_gpr(5, rt.memory().aot_load32(ctx.gpr[3] + static_cast<std::uint32_t>(24)));
    ctx.set_gpr(6, rt.memory().aot_load32(ctx.gpr[3] + static_cast<std::uint32_t>(28)));
    ctx.set_gpr(3, ctx.gpr[6] - ctx.gpr[5]);
    { const bool branch_taken = static_cast<std::int32_t>(ctx.gpr[3]) < 0;
    // nop
      if (branch_taken) {
          goto L_08A57D7C;
      }
      goto L_08A57D6C;
    }
L_08A57D6C:
    ctx.fpr[0] = std::bit_cast<float>(ctx.gpr[3]);
    ctx.fpr[0] = static_cast<float>(static_cast<std::int32_t>(ctx.fpr_bits(0)));
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_08A57D94;
      }
      goto L_08A57D7C;
    }
L_08A57D7C:
    ctx.set_gpr(4, ctx.gpr[3] >> 1u);
    ctx.set_gpr(3, ctx.gpr[3] & 1u);
    ctx.set_gpr(4, ctx.gpr[4] | ctx.gpr[3]);
    ctx.fpr[0] = std::bit_cast<float>(ctx.gpr[4]);
    ctx.fpr[0] = static_cast<float>(static_cast<std::int32_t>(ctx.fpr_bits(0)));
    ctx.fpr[0] = ctx.fpr[0] + ctx.fpr[0];
    goto L_08A57D94;
L_08A57D94:
    { const float fs = ctx.fpr[12]; const float ft = ctx.fpr[0]; if ((std::isinf(fs) && ft == 0.0f) || (std::isinf(ft) && fs == 0.0f)) ctx.set_fpr_bits(1, 0x7FC00000u); else ctx.fpr[1] = fs * ft; }
    { const bool branch_taken = static_cast<std::int32_t>(ctx.gpr[5]) < 0;
    // nop
      if (branch_taken) {
          goto L_08A57DB0;
      }
      goto L_08A57DA0;
    }
L_08A57DA0:
    ctx.fpr[0] = std::bit_cast<float>(ctx.gpr[5]);
    ctx.fpr[0] = static_cast<float>(static_cast<std::int32_t>(ctx.fpr_bits(0)));
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_08A57DC8;
      }
      goto L_08A57DB0;
    }
L_08A57DB0:
    ctx.set_gpr(4, ctx.gpr[5] >> 1u);
    ctx.set_gpr(3, ctx.gpr[5] & 1u);
    ctx.set_gpr(4, ctx.gpr[4] | ctx.gpr[3]);
    ctx.fpr[0] = std::bit_cast<float>(ctx.gpr[4]);
    ctx.fpr[0] = static_cast<float>(static_cast<std::int32_t>(ctx.fpr_bits(0)));
    ctx.fpr[0] = ctx.fpr[0] + ctx.fpr[0];
    goto L_08A57DC8;
L_08A57DC8:
    ctx.fpr[1] = ctx.fpr[0] + ctx.fpr[1];
    ctx.set_gpr(3, 20224u << 16u);
    ctx.fpr[0] = std::bit_cast<float>(ctx.gpr[3]);
    ctx.set_fpu_condition((ctx.fpr[0] <= ctx.fpr[1]));
    // nop
    { const bool branch_taken = ctx.fpu_condition();
    // nop
      if (branch_taken) {
          goto L_08A57DF4;
      }
      goto L_08A57DE4;
    }
L_08A57DE4:
    ctx.set_fpr_bits(0, ctx.fpu_float_to_word(ctx.fpr[1], 1u));
    ctx.set_gpr(3, std::bit_cast<std::uint32_t>(ctx.fpr[0]));
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_08A57E08;
      }
      goto L_08A57DF4;
    }
L_08A57DF4:
    ctx.fpr[0] = ctx.fpr[1] - ctx.fpr[0];
    ctx.set_fpr_bits(0, ctx.fpu_float_to_word(ctx.fpr[0], 1u));
    ctx.set_gpr(4, std::bit_cast<std::uint32_t>(ctx.fpr[0]));
    ctx.set_gpr(3, 0u + static_cast<std::uint32_t>(-32768));
    ctx.set_gpr(3, ctx.gpr[4] | ctx.gpr[3]);
    goto L_08A57E08;
L_08A57E08:
    rt.memory().aot_store32(ctx.gpr[21] + static_cast<std::uint32_t>(68), ctx.gpr[3]);
    { const bool branch_taken = ctx.gpr[3] == ctx.gpr[5];
    // nop
      if (branch_taken) {
          goto L_08A57E68;
      }
      goto L_08A57E14;
    }
L_08A57E14:
    ctx.set_gpr(3, ctx.gpr[3] + static_cast<std::uint32_t>(-1));
    ctx.set_gpr(4, ctx.gpr[3] << 1u);
    ctx.set_gpr(3, rt.memory().aot_load32(ctx.gpr[7] + static_cast<std::uint32_t>(16)));
    ctx.set_gpr(3, ctx.gpr[3] + ctx.gpr[4]);
    ctx.set_gpr(3, rt.memory().aot_load16(ctx.gpr[3] + static_cast<std::uint32_t>(0)));
    rt.memory().aot_store16(ctx.gpr[21] + static_cast<std::uint32_t>(74), static_cast<std::uint16_t>(ctx.gpr[3]));
    ctx.set_gpr(5, rt.memory().aot_load32(ctx.gpr[21] + static_cast<std::uint32_t>(68)));
    ctx.set_gpr(1, ctx.gpr[5] < ctx.gpr[6] ? 1u : 0u);
    { const bool branch_taken = ctx.gpr[1] == 0u;
    // nop
      if (branch_taken) {
          goto L_08A57E78;
      }
      goto L_08A57E3C;
    }
L_08A57E3C:
    ctx.set_gpr(4, ctx.gpr[5] << 1u);
    ctx.set_gpr(3, rt.memory().aot_load32(ctx.gpr[7] + static_cast<std::uint32_t>(16)));
    ctx.set_gpr(3, ctx.gpr[3] + ctx.gpr[4]);
    ctx.set_gpr(4, rt.memory().aot_load16(ctx.gpr[21] + static_cast<std::uint32_t>(74)));
    ctx.set_gpr(3, rt.memory().aot_load16(ctx.gpr[3] + static_cast<std::uint32_t>(0)));
    { const bool branch_taken = ctx.gpr[4] != ctx.gpr[3];
    // nop
      if (branch_taken) {
          goto L_08A57E78;
      }
      goto L_08A57E58;
    }
L_08A57E58:
    ctx.set_gpr(3, ctx.gpr[5] + static_cast<std::uint32_t>(1));
    rt.memory().aot_store32(ctx.gpr[21] + static_cast<std::uint32_t>(68), ctx.gpr[3]);
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_08A57E78;
      }
      goto L_08A57E68;
    }
L_08A57E68:
    ctx.set_gpr(3, rt.memory().aot_load32(ctx.gpr[21] + static_cast<std::uint32_t>(48)));
    ctx.set_gpr(3, rt.memory().aot_load16(ctx.gpr[3] + static_cast<std::uint32_t>(32)));
    ctx.set_gpr(3, ctx.gpr[3] + static_cast<std::uint32_t>(-1));
    rt.memory().aot_store16(ctx.gpr[21] + static_cast<std::uint32_t>(74), static_cast<std::uint16_t>(ctx.gpr[3]));
    goto L_08A57E78;
L_08A57E78:
    ctx.set_gpr(4, rt.memory().aot_load32(ctx.gpr[21] + static_cast<std::uint32_t>(64)));
    ctx.set_gpr(3, rt.memory().aot_load32(ctx.gpr[21] + static_cast<std::uint32_t>(68)));
    { const bool branch_taken = ctx.gpr[4] == ctx.gpr[3];
    // nop
      if (branch_taken) {
          (void)rt.invoke_chained_direct<&recomp_unit_0149_entry, 149u, 20u, 0x08A58178u>(ctx, &aot_mem); return;
      }
      goto L_08A57E88;
    }
L_08A57E88:
    ctx.set_gpr(2, rt.memory().aot_load32(ctx.gpr[21] + static_cast<std::uint32_t>(48)));
    ctx.set_gpr(2, rt.memory().aot_load32(ctx.gpr[2] + static_cast<std::uint32_t>(12)));
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(56), ctx.gpr[2]);
    ctx.set_gpr(4, rt.memory().aot_load32(ctx.gpr[21] + static_cast<std::uint32_t>(52)));
    ctx.set_gpr(5, 0u + 0u);
    ctx.set_gpr(6, 0u + 0u);
    ctx.set_gpr(7, 0u + static_cast<std::uint32_t>(-1));
    ctx.set_gpr(25, rt.memory().aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(0)));
    ctx.set_gpr(25, rt.memory().aot_load32(ctx.gpr[25] + static_cast<std::uint32_t>(104)));
    jump_target = ctx.gpr[25];
    ctx.set_gpr(31, 0x08A57EB4u);
    // nop
    ctx.pc = jump_target;
    if (rt.invoke_chained_call(ctx, &aot_mem) && ctx.pc == 0x08A57EB4u) goto L_08A57EB4;
    return;
L_08A57EB4:
    ctx.set_gpr(19, ctx.gpr[2] + 0u);
    ctx.set_gpr(2, rt.memory().aot_load32(ctx.gpr[21] + static_cast<std::uint32_t>(48)));
    ctx.set_gpr(2, rt.memory().aot_load32(ctx.gpr[2] + static_cast<std::uint32_t>(16)));
    ctx.set_gpr(16, rt.memory().aot_load32(ctx.gpr[2] + static_cast<std::uint32_t>(16)));
    ctx.set_gpr(5, rt.memory().aot_load16(ctx.gpr[21] + static_cast<std::uint32_t>(74)));
    ctx.set_gpr(3, rt.memory().aot_load16(ctx.gpr[21] + static_cast<std::uint32_t>(72)));
    ctx.set_gpr(1, static_cast<std::int32_t>(ctx.gpr[5]) < static_cast<std::int32_t>(ctx.gpr[3]) ? 1u : 0u);
    { const bool branch_taken = ctx.gpr[1] == 0u;
    // nop
      if (branch_taken) {
          goto L_08A57F48;
      }
      goto L_08A57ED8;
    }
L_08A57ED8:
    ctx.set_gpr(3, rt.memory().aot_load32(ctx.gpr[21] + static_cast<std::uint32_t>(68)));
    ctx.set_gpr(2, ctx.gpr[3] << 1u);
    ctx.set_gpr(4, ctx.gpr[2] + ctx.gpr[3]);
    ctx.set_gpr(2, 0u + 0u);
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_08A57F30;
      }
      goto L_08A57EF0;
    }
L_08A57EF0:
    ctx.set_gpr(3, rt.memory().aot_load16(ctx.gpr[19] + static_cast<std::uint32_t>(0)));
    ctx.set_gpr(1, static_cast<std::int32_t>(ctx.gpr[5]) < static_cast<std::int32_t>(ctx.gpr[3]) ? 1u : 0u);
    { const bool branch_taken = ctx.gpr[1] == 0u;
    // nop
      if (branch_taken) {
          goto L_08A57F28;
      }
      goto L_08A57F00;
    }
L_08A57F00:
    ctx.set_gpr(3, ctx.gpr[3] & 65535u);
    ctx.set_gpr(3, ctx.gpr[3] << 1u);
    ctx.set_gpr(3, ctx.gpr[16] + ctx.gpr[3]);
    ctx.set_gpr(3, rt.memory().aot_load16(ctx.gpr[3] + static_cast<std::uint32_t>(0)));
    rt.memory().aot_store16(ctx.gpr[19] + static_cast<std::uint32_t>(0), static_cast<std::uint16_t>(ctx.gpr[3]));
    ctx.set_gpr(5, rt.memory().aot_load16(ctx.gpr[21] + static_cast<std::uint32_t>(74)));
    ctx.set_gpr(3, rt.memory().aot_load16(ctx.gpr[19] + static_cast<std::uint32_t>(0)));
    ctx.set_gpr(1, static_cast<std::int32_t>(ctx.gpr[5]) < static_cast<std::int32_t>(ctx.gpr[3]) ? 1u : 0u);
    { const bool branch_taken = ctx.gpr[1] != 0u;
    // nop
      if (branch_taken) {
          goto L_08A57F00;
      }
      goto L_08A57F28;
    }
L_08A57F28:
    ctx.set_gpr(2, ctx.gpr[2] + static_cast<std::uint32_t>(1));
    ctx.set_gpr(19, ctx.gpr[19] + static_cast<std::uint32_t>(2));
    goto L_08A57F30;
L_08A57F30:
    ctx.set_gpr(3, ctx.gpr[2] < ctx.gpr[4] ? 1u : 0u);
    { const bool branch_taken = ctx.gpr[3] != 0u;
    // nop
      if (branch_taken) {
          goto L_08A57EF0;
      }
      goto L_08A57F3C;
    }
L_08A57F3C:
    rt.memory().aot_store16(ctx.gpr[21] + static_cast<std::uint32_t>(72), static_cast<std::uint16_t>(ctx.gpr[5]));
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          (void)rt.invoke_chained_direct<&recomp_unit_0149_entry, 149u, 18u, 0x08A58128u>(ctx, &aot_mem); return;
      }
      goto L_08A57F48;
    }
L_08A57F48:
    ctx.set_gpr(1, static_cast<std::int32_t>(ctx.gpr[3]) < static_cast<std::int32_t>(ctx.gpr[5]) ? 1u : 0u);
    { const bool branch_taken = ctx.gpr[1] == 0u;
    // nop
      if (branch_taken) {
          (void)rt.invoke_chained_direct<&recomp_unit_0149_entry, 149u, 18u, 0x08A58128u>(ctx, &aot_mem); return;
      }
      goto L_08A57F54;
    }
L_08A57F54:
    ctx.set_gpr(18, ctx.gpr[19] + 0u);
    ctx.set_gpr(2, ctx.gpr[3] << 1u);
    ctx.set_gpr(17, ctx.gpr[16] + ctx.gpr[2]);
    ctx.set_gpr(2, ctx.gpr[5] - ctx.gpr[3]);
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(52), ctx.gpr[2]);
    ctx.set_gpr(20, 0u + 0u);
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_08A57FEC;
      }
      goto L_08A57F74;
    }
L_08A57F74:
    ctx.set_gpr(30, rt.memory().aot_load16(ctx.gpr[17] + static_cast<std::uint32_t>(0)));
    ctx.set_gpr(22, rt.memory().aot_load32(ctx.gpr[21] + static_cast<std::uint32_t>(60)));
    ctx.set_gpr(23, ctx.gpr[30] >> 5u);
    ctx.set_gpr(2, ctx.gpr[23] << 2u);
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(48), ctx.gpr[2]);
    ctx.set_gpr(4, ctx.gpr[22] + 0u);
    ctx.set_gpr(31, 0x08A57F94u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0015_entry, 15u, 454u, 0x088419CCu>(ctx, &aot_mem) && ctx.pc == 0x08A57F94u) goto L_08A57F94;
    return;
L_08A57F94:
    ctx.set_gpr(3, rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(48)));
    ctx.set_gpr(4, ctx.gpr[2] + ctx.gpr[3]);
    ctx.set_gpr(3, ctx.gpr[30] & 31u);
    ctx.set_gpr(2, 0u + static_cast<std::uint32_t>(1));
    ctx.set_gpr(3, ctx.gpr[2] << (ctx.gpr[3] & 31u));
    ctx.set_gpr(2, rt.memory().aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(0)));
    ctx.set_gpr(4, ctx.gpr[3] | ctx.gpr[2]);
    ctx.set_gpr(2, rt.memory().aot_load32(ctx.gpr[22] + static_cast<std::uint32_t>(8)));
    { const bool branch_taken = ctx.gpr[2] == 0u;
    // nop
      if (branch_taken) {
          goto L_08A57FE0;
      }
      goto L_08A57FBC;
    }
L_08A57FBC:
    { const bool branch_taken = static_cast<std::int32_t>(ctx.gpr[23]) < 0;
    // nop
      if (branch_taken) {
          goto L_08A57FE0;
      }
      goto L_08A57FC4;
    }
L_08A57FC4:
    ctx.set_gpr(1, static_cast<std::int32_t>(ctx.gpr[23]) < static_cast<std::int32_t>(ctx.gpr[2]) ? 1u : 0u);
    { const bool branch_taken = ctx.gpr[1] == 0u;
    // nop
      if (branch_taken) {
          goto L_08A57FE0;
      }
      goto L_08A57FD0;
    }
L_08A57FD0:
    ctx.set_gpr(3, rt.memory().aot_load32(ctx.gpr[22] + static_cast<std::uint32_t>(16)));
    ctx.set_gpr(2, rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(48)));
    ctx.set_gpr(2, ctx.gpr[3] + ctx.gpr[2]);
    rt.memory().aot_store32(ctx.gpr[2] + static_cast<std::uint32_t>(0), ctx.gpr[4]);
    goto L_08A57FE0;
L_08A57FE0:
    ctx.set_gpr(2, ctx.gpr[20] + static_cast<std::uint32_t>(1));
    ctx.set_gpr(20, ctx.gpr[2] & 65535u);
    ctx.set_gpr(17, ctx.gpr[17] + static_cast<std::uint32_t>(2));
    goto L_08A57FEC;
L_08A57FEC:
    ctx.set_gpr(3, ctx.gpr[20] & 65535u);
    ctx.set_gpr(2, rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(52)));
    ctx.set_gpr(1, ctx.gpr[2] < ctx.gpr[3] ? 1u : 0u);
    { const bool branch_taken = ctx.gpr[1] == 0u;
    // nop
      if (branch_taken) {
          goto L_08A57F74;
      }
      (void)rt.invoke_chained_direct<&recomp_unit_0149_entry, 149u, 1u, 0x08A58000u>(ctx, &aot_mem); return;
    }
}

void recomp_unit_0148(Runtime &rt, AllegrexContext &ctx) {
    auto aot_mem = rt.memory().aot_fast_view();
    recomp_unit_0148_entry(rt, ctx, 0u, aot_mem);
}

void register_generated_unit_148(Runtime &runtime) {
    runtime.register_generated_unit(148u, 0x08A54000u, 16384u, &recomp_unit_0148, &recomp_unit_0148_entry);
    runtime.register_function(0x08A54004u, &recomp_unit_0148, "recomp_unit_0148");
    runtime.register_function(0x08A5400Cu, &recomp_unit_0148, "recomp_unit_0148");
    runtime.register_function(0x08A54014u, &recomp_unit_0148, "recomp_unit_0148");
    runtime.register_function(0x08A54018u, &recomp_unit_0148, "recomp_unit_0148");
    runtime.register_function(0x08A54024u, &recomp_unit_0148, "recomp_unit_0148");
    runtime.register_function(0x08A5402Cu, &recomp_unit_0148, "recomp_unit_0148");
    runtime.register_function(0x08A54038u, &recomp_unit_0148, "recomp_unit_0148");
    runtime.register_function(0x08A54048u, &recomp_unit_0148, "recomp_unit_0148");
    runtime.register_function(0x08A5405Cu, &recomp_unit_0148, "recomp_unit_0148");
    runtime.register_function(0x08A54064u, &recomp_unit_0148, "recomp_unit_0148");
    runtime.register_function(0x08A54088u, &recomp_unit_0148, "recomp_unit_0148");
    runtime.register_function(0x08A54098u, &recomp_unit_0148, "recomp_unit_0148");
    runtime.register_function(0x08A540C8u, &recomp_unit_0148, "recomp_unit_0148");
    runtime.register_function(0x08A5410Cu, &recomp_unit_0148, "recomp_unit_0148");
    runtime.register_function(0x08A54120u, &recomp_unit_0148, "recomp_unit_0148");
    runtime.register_function(0x08A54130u, &recomp_unit_0148, "recomp_unit_0148");
    runtime.register_function(0x08A54134u, &recomp_unit_0148, "recomp_unit_0148");
    runtime.register_function(0x08A54140u, &recomp_unit_0148, "recomp_unit_0148");
    runtime.register_function(0x08A54168u, &recomp_unit_0148, "recomp_unit_0148");
    runtime.register_function(0x08A54170u, &recomp_unit_0148, "recomp_unit_0148");
    runtime.register_function(0x08A54184u, &recomp_unit_0148, "recomp_unit_0148");
    runtime.register_function(0x08A5418Cu, &recomp_unit_0148, "recomp_unit_0148");
    runtime.register_function(0x08A541A0u, &recomp_unit_0148, "recomp_unit_0148");
    runtime.register_function(0x08A541E8u, &recomp_unit_0148, "recomp_unit_0148");
    runtime.register_function(0x08A54240u, &recomp_unit_0148, "recomp_unit_0148");
    runtime.register_function(0x08A54248u, &recomp_unit_0148, "recomp_unit_0148");
    runtime.register_function(0x08A54250u, &recomp_unit_0148, "recomp_unit_0148");
    runtime.register_function(0x08A54280u, &recomp_unit_0148, "recomp_unit_0148");
    runtime.register_function(0x08A54288u, &recomp_unit_0148, "recomp_unit_0148");
    runtime.register_function(0x08A5428Cu, &recomp_unit_0148, "recomp_unit_0148");
    runtime.register_function(0x08A5429Cu, &recomp_unit_0148, "recomp_unit_0148");
    runtime.register_function(0x08A542A0u, &recomp_unit_0148, "recomp_unit_0148");
    runtime.register_function(0x08A542B0u, &recomp_unit_0148, "recomp_unit_0148");
    runtime.register_function(0x08A542B4u, &recomp_unit_0148, "recomp_unit_0148");
    runtime.register_function(0x08A542E8u, &recomp_unit_0148, "recomp_unit_0148");
    runtime.register_function(0x08A54338u, &recomp_unit_0148, "recomp_unit_0148");
    runtime.register_function(0x08A5434Cu, &recomp_unit_0148, "recomp_unit_0148");
    runtime.register_function(0x08A54354u, &recomp_unit_0148, "recomp_unit_0148");
    runtime.register_function(0x08A54360u, &recomp_unit_0148, "recomp_unit_0148");
    runtime.register_function(0x08A54364u, &recomp_unit_0148, "recomp_unit_0148");
    runtime.register_function(0x08A5436Cu, &recomp_unit_0148, "recomp_unit_0148");
    runtime.register_function(0x08A54378u, &recomp_unit_0148, "recomp_unit_0148");
    runtime.register_function(0x08A54380u, &recomp_unit_0148, "recomp_unit_0148");
    runtime.register_function(0x08A54394u, &recomp_unit_0148, "recomp_unit_0148");
    runtime.register_function(0x08A5439Cu, &recomp_unit_0148, "recomp_unit_0148");
    runtime.register_function(0x08A543A4u, &recomp_unit_0148, "recomp_unit_0148");
    runtime.register_function(0x08A543A8u, &recomp_unit_0148, "recomp_unit_0148");
    runtime.register_function(0x08A543C4u, &recomp_unit_0148, "recomp_unit_0148");
    runtime.register_function(0x08A543D0u, &recomp_unit_0148, "recomp_unit_0148");
    runtime.register_function(0x08A543E0u, &recomp_unit_0148, "recomp_unit_0148");
    runtime.register_function(0x08A543ECu, &recomp_unit_0148, "recomp_unit_0148");
    runtime.register_function(0x08A543F8u, &recomp_unit_0148, "recomp_unit_0148");
    runtime.register_function(0x08A54400u, &recomp_unit_0148, "recomp_unit_0148");
    runtime.register_function(0x08A54414u, &recomp_unit_0148, "recomp_unit_0148");
    runtime.register_function(0x08A54428u, &recomp_unit_0148, "recomp_unit_0148");
    runtime.register_function(0x08A54438u, &recomp_unit_0148, "recomp_unit_0148");
    runtime.register_function(0x08A54444u, &recomp_unit_0148, "recomp_unit_0148");
    runtime.register_function(0x08A5444Cu, &recomp_unit_0148, "recomp_unit_0148");
    runtime.register_function(0x08A54458u, &recomp_unit_0148, "recomp_unit_0148");
    runtime.register_function(0x08A54460u, &recomp_unit_0148, "recomp_unit_0148");
    runtime.register_function(0x08A5446Cu, &recomp_unit_0148, "recomp_unit_0148");
    runtime.register_function(0x08A544A8u, &recomp_unit_0148, "recomp_unit_0148");
    runtime.register_function(0x08A544C4u, &recomp_unit_0148, "recomp_unit_0148");
    runtime.register_function(0x08A544D0u, &recomp_unit_0148, "recomp_unit_0148");
    runtime.register_function(0x08A544DCu, &recomp_unit_0148, "recomp_unit_0148");
    runtime.register_function(0x08A544F8u, &recomp_unit_0148, "recomp_unit_0148");
    runtime.register_function(0x08A54504u, &recomp_unit_0148, "recomp_unit_0148");
    runtime.register_function(0x08A54510u, &recomp_unit_0148, "recomp_unit_0148");
    runtime.register_function(0x08A5452Cu, &recomp_unit_0148, "recomp_unit_0148");
    runtime.register_function(0x08A54530u, &recomp_unit_0148, "recomp_unit_0148");
    runtime.register_function(0x08A54548u, &recomp_unit_0148, "recomp_unit_0148");
    runtime.register_function(0x08A54558u, &recomp_unit_0148, "recomp_unit_0148");
    runtime.register_function(0x08A54564u, &recomp_unit_0148, "recomp_unit_0148");
    runtime.register_function(0x08A5456Cu, &recomp_unit_0148, "recomp_unit_0148");
    runtime.register_function(0x08A54574u, &recomp_unit_0148, "recomp_unit_0148");
    runtime.register_function(0x08A5457Cu, &recomp_unit_0148, "recomp_unit_0148");
    runtime.register_function(0x08A5458Cu, &recomp_unit_0148, "recomp_unit_0148");
    runtime.register_function(0x08A545A0u, &recomp_unit_0148, "recomp_unit_0148");
    runtime.register_function(0x08A545A8u, &recomp_unit_0148, "recomp_unit_0148");
    runtime.register_function(0x08A545BCu, &recomp_unit_0148, "recomp_unit_0148");
    runtime.register_function(0x08A545C4u, &recomp_unit_0148, "recomp_unit_0148");
    runtime.register_function(0x08A545D0u, &recomp_unit_0148, "recomp_unit_0148");
    runtime.register_function(0x08A545D8u, &recomp_unit_0148, "recomp_unit_0148");
    runtime.register_function(0x08A545E4u, &recomp_unit_0148, "recomp_unit_0148");
    runtime.register_function(0x08A545ECu, &recomp_unit_0148, "recomp_unit_0148");
    runtime.register_function(0x08A545F8u, &recomp_unit_0148, "recomp_unit_0148");
    runtime.register_function(0x08A54600u, &recomp_unit_0148, "recomp_unit_0148");
    runtime.register_function(0x08A5460Cu, &recomp_unit_0148, "recomp_unit_0148");
    runtime.register_function(0x08A54634u, &recomp_unit_0148, "recomp_unit_0148");
    runtime.register_function(0x08A54648u, &recomp_unit_0148, "recomp_unit_0148");
    runtime.register_function(0x08A54650u, &recomp_unit_0148, "recomp_unit_0148");
    runtime.register_function(0x08A5465Cu, &recomp_unit_0148, "recomp_unit_0148");
    runtime.register_function(0x08A54664u, &recomp_unit_0148, "recomp_unit_0148");
    runtime.register_function(0x08A54670u, &recomp_unit_0148, "recomp_unit_0148");
    runtime.register_function(0x08A54678u, &recomp_unit_0148, "recomp_unit_0148");
    runtime.register_function(0x08A54684u, &recomp_unit_0148, "recomp_unit_0148");
    runtime.register_function(0x08A5468Cu, &recomp_unit_0148, "recomp_unit_0148");
    runtime.register_function(0x08A54698u, &recomp_unit_0148, "recomp_unit_0148");
    runtime.register_function(0x08A546A4u, &recomp_unit_0148, "recomp_unit_0148");
    runtime.register_function(0x08A546B8u, &recomp_unit_0148, "recomp_unit_0148");
    runtime.register_function(0x08A546C0u, &recomp_unit_0148, "recomp_unit_0148");
    runtime.register_function(0x08A546C8u, &recomp_unit_0148, "recomp_unit_0148");
    runtime.register_function(0x08A546CCu, &recomp_unit_0148, "recomp_unit_0148");
    runtime.register_function(0x08A546D4u, &recomp_unit_0148, "recomp_unit_0148");
    runtime.register_function(0x08A546E0u, &recomp_unit_0148, "recomp_unit_0148");
    runtime.register_function(0x08A546ECu, &recomp_unit_0148, "recomp_unit_0148");
    runtime.register_function(0x08A546F4u, &recomp_unit_0148, "recomp_unit_0148");
    runtime.register_function(0x08A54700u, &recomp_unit_0148, "recomp_unit_0148");
    runtime.register_function(0x08A54708u, &recomp_unit_0148, "recomp_unit_0148");
    runtime.register_function(0x08A54714u, &recomp_unit_0148, "recomp_unit_0148");
    runtime.register_function(0x08A5471Cu, &recomp_unit_0148, "recomp_unit_0148");
    runtime.register_function(0x08A54728u, &recomp_unit_0148, "recomp_unit_0148");
    runtime.register_function(0x08A54744u, &recomp_unit_0148, "recomp_unit_0148");
    runtime.register_function(0x08A54754u, &recomp_unit_0148, "recomp_unit_0148");
    runtime.register_function(0x08A54760u, &recomp_unit_0148, "recomp_unit_0148");
    runtime.register_function(0x08A54768u, &recomp_unit_0148, "recomp_unit_0148");
    runtime.register_function(0x08A54774u, &recomp_unit_0148, "recomp_unit_0148");
    runtime.register_function(0x08A54780u, &recomp_unit_0148, "recomp_unit_0148");
    runtime.register_function(0x08A5479Cu, &recomp_unit_0148, "recomp_unit_0148");
    runtime.register_function(0x08A547A8u, &recomp_unit_0148, "recomp_unit_0148");
    runtime.register_function(0x08A547B4u, &recomp_unit_0148, "recomp_unit_0148");
    runtime.register_function(0x08A547D0u, &recomp_unit_0148, "recomp_unit_0148");
    runtime.register_function(0x08A547D4u, &recomp_unit_0148, "recomp_unit_0148");
    runtime.register_function(0x08A547ECu, &recomp_unit_0148, "recomp_unit_0148");
    runtime.register_function(0x08A547FCu, &recomp_unit_0148, "recomp_unit_0148");
    runtime.register_function(0x08A54808u, &recomp_unit_0148, "recomp_unit_0148");
    runtime.register_function(0x08A54810u, &recomp_unit_0148, "recomp_unit_0148");
    runtime.register_function(0x08A5481Cu, &recomp_unit_0148, "recomp_unit_0148");
    runtime.register_function(0x08A54824u, &recomp_unit_0148, "recomp_unit_0148");
    runtime.register_function(0x08A5482Cu, &recomp_unit_0148, "recomp_unit_0148");
    runtime.register_function(0x08A54838u, &recomp_unit_0148, "recomp_unit_0148");
    runtime.register_function(0x08A54840u, &recomp_unit_0148, "recomp_unit_0148");
    runtime.register_function(0x08A5484Cu, &recomp_unit_0148, "recomp_unit_0148");
    runtime.register_function(0x08A54854u, &recomp_unit_0148, "recomp_unit_0148");
    runtime.register_function(0x08A54860u, &recomp_unit_0148, "recomp_unit_0148");
    runtime.register_function(0x08A5486Cu, &recomp_unit_0148, "recomp_unit_0148");
    runtime.register_function(0x08A54880u, &recomp_unit_0148, "recomp_unit_0148");
    runtime.register_function(0x08A54890u, &recomp_unit_0148, "recomp_unit_0148");
    runtime.register_function(0x08A548A4u, &recomp_unit_0148, "recomp_unit_0148");
    runtime.register_function(0x08A548C0u, &recomp_unit_0148, "recomp_unit_0148");
    runtime.register_function(0x08A548DCu, &recomp_unit_0148, "recomp_unit_0148");
    runtime.register_function(0x08A548E8u, &recomp_unit_0148, "recomp_unit_0148");
    runtime.register_function(0x08A548FCu, &recomp_unit_0148, "recomp_unit_0148");
    runtime.register_function(0x08A54908u, &recomp_unit_0148, "recomp_unit_0148");
    runtime.register_function(0x08A5490Cu, &recomp_unit_0148, "recomp_unit_0148");
    runtime.register_function(0x08A54914u, &recomp_unit_0148, "recomp_unit_0148");
    runtime.register_function(0x08A54924u, &recomp_unit_0148, "recomp_unit_0148");
    runtime.register_function(0x08A54930u, &recomp_unit_0148, "recomp_unit_0148");
    runtime.register_function(0x08A54944u, &recomp_unit_0148, "recomp_unit_0148");
    runtime.register_function(0x08A54950u, &recomp_unit_0148, "recomp_unit_0148");
    runtime.register_function(0x08A54954u, &recomp_unit_0148, "recomp_unit_0148");
    runtime.register_function(0x08A54960u, &recomp_unit_0148, "recomp_unit_0148");
    runtime.register_function(0x08A54970u, &recomp_unit_0148, "recomp_unit_0148");
    runtime.register_function(0x08A54980u, &recomp_unit_0148, "recomp_unit_0148");
    runtime.register_function(0x08A5498Cu, &recomp_unit_0148, "recomp_unit_0148");
    runtime.register_function(0x08A54998u, &recomp_unit_0148, "recomp_unit_0148");
    runtime.register_function(0x08A549A4u, &recomp_unit_0148, "recomp_unit_0148");
    runtime.register_function(0x08A549ACu, &recomp_unit_0148, "recomp_unit_0148");
    runtime.register_function(0x08A549C8u, &recomp_unit_0148, "recomp_unit_0148");
    runtime.register_function(0x08A549D0u, &recomp_unit_0148, "recomp_unit_0148");
    runtime.register_function(0x08A549D8u, &recomp_unit_0148, "recomp_unit_0148");
    runtime.register_function(0x08A549F4u, &recomp_unit_0148, "recomp_unit_0148");
    runtime.register_function(0x08A549FCu, &recomp_unit_0148, "recomp_unit_0148");
    runtime.register_function(0x08A54A04u, &recomp_unit_0148, "recomp_unit_0148");
    runtime.register_function(0x08A54A20u, &recomp_unit_0148, "recomp_unit_0148");
    runtime.register_function(0x08A54A28u, &recomp_unit_0148, "recomp_unit_0148");
    runtime.register_function(0x08A54A30u, &recomp_unit_0148, "recomp_unit_0148");
    runtime.register_function(0x08A54A38u, &recomp_unit_0148, "recomp_unit_0148");
    runtime.register_function(0x08A54A54u, &recomp_unit_0148, "recomp_unit_0148");
    runtime.register_function(0x08A54A5Cu, &recomp_unit_0148, "recomp_unit_0148");
    runtime.register_function(0x08A54A64u, &recomp_unit_0148, "recomp_unit_0148");
    runtime.register_function(0x08A54A80u, &recomp_unit_0148, "recomp_unit_0148");
    runtime.register_function(0x08A54A88u, &recomp_unit_0148, "recomp_unit_0148");
    runtime.register_function(0x08A54A90u, &recomp_unit_0148, "recomp_unit_0148");
    runtime.register_function(0x08A54AACu, &recomp_unit_0148, "recomp_unit_0148");
    runtime.register_function(0x08A54AB4u, &recomp_unit_0148, "recomp_unit_0148");
    runtime.register_function(0x08A54AFCu, &recomp_unit_0148, "recomp_unit_0148");
    runtime.register_function(0x08A54B10u, &recomp_unit_0148, "recomp_unit_0148");
    runtime.register_function(0x08A54B24u, &recomp_unit_0148, "recomp_unit_0148");
    runtime.register_function(0x08A54B2Cu, &recomp_unit_0148, "recomp_unit_0148");
    runtime.register_function(0x08A54B40u, &recomp_unit_0148, "recomp_unit_0148");
    runtime.register_function(0x08A54B60u, &recomp_unit_0148, "recomp_unit_0148");
    runtime.register_function(0x08A54B70u, &recomp_unit_0148, "recomp_unit_0148");
    runtime.register_function(0x08A54B7Cu, &recomp_unit_0148, "recomp_unit_0148");
    runtime.register_function(0x08A54B88u, &recomp_unit_0148, "recomp_unit_0148");
    runtime.register_function(0x08A54B8Cu, &recomp_unit_0148, "recomp_unit_0148");
    runtime.register_function(0x08A54B90u, &recomp_unit_0148, "recomp_unit_0148");
    runtime.register_function(0x08A54BA0u, &recomp_unit_0148, "recomp_unit_0148");
    runtime.register_function(0x08A54BA8u, &recomp_unit_0148, "recomp_unit_0148");
    runtime.register_function(0x08A54BC4u, &recomp_unit_0148, "recomp_unit_0148");
    runtime.register_function(0x08A54BCCu, &recomp_unit_0148, "recomp_unit_0148");
    runtime.register_function(0x08A54BF0u, &recomp_unit_0148, "recomp_unit_0148");
    runtime.register_function(0x08A54BF8u, &recomp_unit_0148, "recomp_unit_0148");
    runtime.register_function(0x08A54C00u, &recomp_unit_0148, "recomp_unit_0148");
    runtime.register_function(0x08A54C24u, &recomp_unit_0148, "recomp_unit_0148");
    runtime.register_function(0x08A54C30u, &recomp_unit_0148, "recomp_unit_0148");
    runtime.register_function(0x08A54C38u, &recomp_unit_0148, "recomp_unit_0148");
    runtime.register_function(0x08A54C44u, &recomp_unit_0148, "recomp_unit_0148");
    runtime.register_function(0x08A54C4Cu, &recomp_unit_0148, "recomp_unit_0148");
    runtime.register_function(0x08A54C50u, &recomp_unit_0148, "recomp_unit_0148");
    runtime.register_function(0x08A54C84u, &recomp_unit_0148, "recomp_unit_0148");
    runtime.register_function(0x08A54C90u, &recomp_unit_0148, "recomp_unit_0148");
    runtime.register_function(0x08A54CB8u, &recomp_unit_0148, "recomp_unit_0148");
    runtime.register_function(0x08A54CC4u, &recomp_unit_0148, "recomp_unit_0148");
    runtime.register_function(0x08A54CC8u, &recomp_unit_0148, "recomp_unit_0148");
    runtime.register_function(0x08A54CD0u, &recomp_unit_0148, "recomp_unit_0148");
    runtime.register_function(0x08A54CDCu, &recomp_unit_0148, "recomp_unit_0148");
    runtime.register_function(0x08A54CECu, &recomp_unit_0148, "recomp_unit_0148");
    runtime.register_function(0x08A54CFCu, &recomp_unit_0148, "recomp_unit_0148");
    runtime.register_function(0x08A54D08u, &recomp_unit_0148, "recomp_unit_0148");
    runtime.register_function(0x08A54D18u, &recomp_unit_0148, "recomp_unit_0148");
    runtime.register_function(0x08A54D1Cu, &recomp_unit_0148, "recomp_unit_0148");
    runtime.register_function(0x08A54D40u, &recomp_unit_0148, "recomp_unit_0148");
    runtime.register_function(0x08A54D50u, &recomp_unit_0148, "recomp_unit_0148");
    runtime.register_function(0x08A54D70u, &recomp_unit_0148, "recomp_unit_0148");
    runtime.register_function(0x08A54D78u, &recomp_unit_0148, "recomp_unit_0148");
    runtime.register_function(0x08A54D7Cu, &recomp_unit_0148, "recomp_unit_0148");
    runtime.register_function(0x08A54D98u, &recomp_unit_0148, "recomp_unit_0148");
    runtime.register_function(0x08A54DC4u, &recomp_unit_0148, "recomp_unit_0148");
    runtime.register_function(0x08A54DE0u, &recomp_unit_0148, "recomp_unit_0148");
    runtime.register_function(0x08A54DF0u, &recomp_unit_0148, "recomp_unit_0148");
    runtime.register_function(0x08A54E00u, &recomp_unit_0148, "recomp_unit_0148");
    runtime.register_function(0x08A54E0Cu, &recomp_unit_0148, "recomp_unit_0148");
    runtime.register_function(0x08A54E1Cu, &recomp_unit_0148, "recomp_unit_0148");
    runtime.register_function(0x08A54E2Cu, &recomp_unit_0148, "recomp_unit_0148");
    runtime.register_function(0x08A54E58u, &recomp_unit_0148, "recomp_unit_0148");
    runtime.register_function(0x08A54E7Cu, &recomp_unit_0148, "recomp_unit_0148");
    runtime.register_function(0x08A54E8Cu, &recomp_unit_0148, "recomp_unit_0148");
    runtime.register_function(0x08A54EACu, &recomp_unit_0148, "recomp_unit_0148");
    runtime.register_function(0x08A54EB4u, &recomp_unit_0148, "recomp_unit_0148");
    runtime.register_function(0x08A54EB8u, &recomp_unit_0148, "recomp_unit_0148");
    runtime.register_function(0x08A54ED4u, &recomp_unit_0148, "recomp_unit_0148");
    runtime.register_function(0x08A54F10u, &recomp_unit_0148, "recomp_unit_0148");
    runtime.register_function(0x08A54F24u, &recomp_unit_0148, "recomp_unit_0148");
    runtime.register_function(0x08A54F30u, &recomp_unit_0148, "recomp_unit_0148");
    runtime.register_function(0x08A54F40u, &recomp_unit_0148, "recomp_unit_0148");
    runtime.register_function(0x08A54F4Cu, &recomp_unit_0148, "recomp_unit_0148");
    runtime.register_function(0x08A54F9Cu, &recomp_unit_0148, "recomp_unit_0148");
    runtime.register_function(0x08A54FC4u, &recomp_unit_0148, "recomp_unit_0148");
    runtime.register_function(0x08A54FCCu, &recomp_unit_0148, "recomp_unit_0148");
    runtime.register_function(0x08A54FE0u, &recomp_unit_0148, "recomp_unit_0148");
    runtime.register_function(0x08A54FF4u, &recomp_unit_0148, "recomp_unit_0148");
    runtime.register_function(0x08A55004u, &recomp_unit_0148, "recomp_unit_0148");
    runtime.register_function(0x08A55018u, &recomp_unit_0148, "recomp_unit_0148");
    runtime.register_function(0x08A55024u, &recomp_unit_0148, "recomp_unit_0148");
    runtime.register_function(0x08A55034u, &recomp_unit_0148, "recomp_unit_0148");
    runtime.register_function(0x08A55040u, &recomp_unit_0148, "recomp_unit_0148");
    runtime.register_function(0x08A55048u, &recomp_unit_0148, "recomp_unit_0148");
    runtime.register_function(0x08A55058u, &recomp_unit_0148, "recomp_unit_0148");
    runtime.register_function(0x08A55060u, &recomp_unit_0148, "recomp_unit_0148");
    runtime.register_function(0x08A55074u, &recomp_unit_0148, "recomp_unit_0148");
    runtime.register_function(0x08A5507Cu, &recomp_unit_0148, "recomp_unit_0148");
    runtime.register_function(0x08A5508Cu, &recomp_unit_0148, "recomp_unit_0148");
    runtime.register_function(0x08A550A0u, &recomp_unit_0148, "recomp_unit_0148");
    runtime.register_function(0x08A550B0u, &recomp_unit_0148, "recomp_unit_0148");
    runtime.register_function(0x08A550B8u, &recomp_unit_0148, "recomp_unit_0148");
    runtime.register_function(0x08A550C0u, &recomp_unit_0148, "recomp_unit_0148");
    runtime.register_function(0x08A550D4u, &recomp_unit_0148, "recomp_unit_0148");
    runtime.register_function(0x08A550E0u, &recomp_unit_0148, "recomp_unit_0148");
    runtime.register_function(0x08A550F0u, &recomp_unit_0148, "recomp_unit_0148");
    runtime.register_function(0x08A550FCu, &recomp_unit_0148, "recomp_unit_0148");
    runtime.register_function(0x08A55104u, &recomp_unit_0148, "recomp_unit_0148");
    runtime.register_function(0x08A55114u, &recomp_unit_0148, "recomp_unit_0148");
    runtime.register_function(0x08A55118u, &recomp_unit_0148, "recomp_unit_0148");
    runtime.register_function(0x08A55124u, &recomp_unit_0148, "recomp_unit_0148");
    runtime.register_function(0x08A5512Cu, &recomp_unit_0148, "recomp_unit_0148");
    runtime.register_function(0x08A5513Cu, &recomp_unit_0148, "recomp_unit_0148");
    runtime.register_function(0x08A55140u, &recomp_unit_0148, "recomp_unit_0148");
    runtime.register_function(0x08A5514Cu, &recomp_unit_0148, "recomp_unit_0148");
    runtime.register_function(0x08A55154u, &recomp_unit_0148, "recomp_unit_0148");
    runtime.register_function(0x08A55160u, &recomp_unit_0148, "recomp_unit_0148");
    runtime.register_function(0x08A55168u, &recomp_unit_0148, "recomp_unit_0148");
    runtime.register_function(0x08A55174u, &recomp_unit_0148, "recomp_unit_0148");
    runtime.register_function(0x08A55184u, &recomp_unit_0148, "recomp_unit_0148");
    runtime.register_function(0x08A55194u, &recomp_unit_0148, "recomp_unit_0148");
    runtime.register_function(0x08A551BCu, &recomp_unit_0148, "recomp_unit_0148");
    runtime.register_function(0x08A551CCu, &recomp_unit_0148, "recomp_unit_0148");
    runtime.register_function(0x08A551E0u, &recomp_unit_0148, "recomp_unit_0148");
    runtime.register_function(0x08A551ECu, &recomp_unit_0148, "recomp_unit_0148");
    runtime.register_function(0x08A551F4u, &recomp_unit_0148, "recomp_unit_0148");
    runtime.register_function(0x08A551F8u, &recomp_unit_0148, "recomp_unit_0148");
    runtime.register_function(0x08A55228u, &recomp_unit_0148, "recomp_unit_0148");
    runtime.register_function(0x08A55278u, &recomp_unit_0148, "recomp_unit_0148");
    runtime.register_function(0x08A55284u, &recomp_unit_0148, "recomp_unit_0148");
    runtime.register_function(0x08A55298u, &recomp_unit_0148, "recomp_unit_0148");
    runtime.register_function(0x08A5529Cu, &recomp_unit_0148, "recomp_unit_0148");
    runtime.register_function(0x08A552B8u, &recomp_unit_0148, "recomp_unit_0148");
    runtime.register_function(0x08A552C4u, &recomp_unit_0148, "recomp_unit_0148");
    runtime.register_function(0x08A552D8u, &recomp_unit_0148, "recomp_unit_0148");
    runtime.register_function(0x08A552E0u, &recomp_unit_0148, "recomp_unit_0148");
    runtime.register_function(0x08A552ECu, &recomp_unit_0148, "recomp_unit_0148");
    runtime.register_function(0x08A552FCu, &recomp_unit_0148, "recomp_unit_0148");
    runtime.register_function(0x08A55310u, &recomp_unit_0148, "recomp_unit_0148");
    runtime.register_function(0x08A55334u, &recomp_unit_0148, "recomp_unit_0148");
    runtime.register_function(0x08A55340u, &recomp_unit_0148, "recomp_unit_0148");
    runtime.register_function(0x08A5534Cu, &recomp_unit_0148, "recomp_unit_0148");
    runtime.register_function(0x08A55350u, &recomp_unit_0148, "recomp_unit_0148");
    runtime.register_function(0x08A5535Cu, &recomp_unit_0148, "recomp_unit_0148");
    runtime.register_function(0x08A5538Cu, &recomp_unit_0148, "recomp_unit_0148");
    runtime.register_function(0x08A55394u, &recomp_unit_0148, "recomp_unit_0148");
    runtime.register_function(0x08A553B0u, &recomp_unit_0148, "recomp_unit_0148");
    runtime.register_function(0x08A553B8u, &recomp_unit_0148, "recomp_unit_0148");
    runtime.register_function(0x08A553D0u, &recomp_unit_0148, "recomp_unit_0148");
    runtime.register_function(0x08A553ECu, &recomp_unit_0148, "recomp_unit_0148");
    runtime.register_function(0x08A55420u, &recomp_unit_0148, "recomp_unit_0148");
    runtime.register_function(0x08A55434u, &recomp_unit_0148, "recomp_unit_0148");
    runtime.register_function(0x08A55444u, &recomp_unit_0148, "recomp_unit_0148");
    runtime.register_function(0x08A55454u, &recomp_unit_0148, "recomp_unit_0148");
    runtime.register_function(0x08A55458u, &recomp_unit_0148, "recomp_unit_0148");
    runtime.register_function(0x08A55464u, &recomp_unit_0148, "recomp_unit_0148");
    runtime.register_function(0x08A55498u, &recomp_unit_0148, "recomp_unit_0148");
    runtime.register_function(0x08A554A4u, &recomp_unit_0148, "recomp_unit_0148");
    runtime.register_function(0x08A554C4u, &recomp_unit_0148, "recomp_unit_0148");
    runtime.register_function(0x08A554CCu, &recomp_unit_0148, "recomp_unit_0148");
    runtime.register_function(0x08A554E8u, &recomp_unit_0148, "recomp_unit_0148");
    runtime.register_function(0x08A55500u, &recomp_unit_0148, "recomp_unit_0148");
    runtime.register_function(0x08A5552Cu, &recomp_unit_0148, "recomp_unit_0148");
    runtime.register_function(0x08A55550u, &recomp_unit_0148, "recomp_unit_0148");
    runtime.register_function(0x08A55554u, &recomp_unit_0148, "recomp_unit_0148");
    runtime.register_function(0x08A55560u, &recomp_unit_0148, "recomp_unit_0148");
    runtime.register_function(0x08A5557Cu, &recomp_unit_0148, "recomp_unit_0148");
    runtime.register_function(0x08A555B4u, &recomp_unit_0148, "recomp_unit_0148");
    runtime.register_function(0x08A555E8u, &recomp_unit_0148, "recomp_unit_0148");
    runtime.register_function(0x08A55600u, &recomp_unit_0148, "recomp_unit_0148");
    runtime.register_function(0x08A55620u, &recomp_unit_0148, "recomp_unit_0148");
    runtime.register_function(0x08A55638u, &recomp_unit_0148, "recomp_unit_0148");
    runtime.register_function(0x08A5563Cu, &recomp_unit_0148, "recomp_unit_0148");
    runtime.register_function(0x08A55648u, &recomp_unit_0148, "recomp_unit_0148");
    runtime.register_function(0x08A5566Cu, &recomp_unit_0148, "recomp_unit_0148");
    runtime.register_function(0x08A5567Cu, &recomp_unit_0148, "recomp_unit_0148");
    runtime.register_function(0x08A5568Cu, &recomp_unit_0148, "recomp_unit_0148");
    runtime.register_function(0x08A556B8u, &recomp_unit_0148, "recomp_unit_0148");
    runtime.register_function(0x08A556DCu, &recomp_unit_0148, "recomp_unit_0148");
    runtime.register_function(0x08A556E0u, &recomp_unit_0148, "recomp_unit_0148");
    runtime.register_function(0x08A556ECu, &recomp_unit_0148, "recomp_unit_0148");
    runtime.register_function(0x08A55708u, &recomp_unit_0148, "recomp_unit_0148");
    runtime.register_function(0x08A55720u, &recomp_unit_0148, "recomp_unit_0148");
    runtime.register_function(0x08A55730u, &recomp_unit_0148, "recomp_unit_0148");
    runtime.register_function(0x08A55738u, &recomp_unit_0148, "recomp_unit_0148");
    runtime.register_function(0x08A55744u, &recomp_unit_0148, "recomp_unit_0148");
    runtime.register_function(0x08A55748u, &recomp_unit_0148, "recomp_unit_0148");
    runtime.register_function(0x08A55750u, &recomp_unit_0148, "recomp_unit_0148");
    runtime.register_function(0x08A55764u, &recomp_unit_0148, "recomp_unit_0148");
    runtime.register_function(0x08A55780u, &recomp_unit_0148, "recomp_unit_0148");
    runtime.register_function(0x08A5578Cu, &recomp_unit_0148, "recomp_unit_0148");
    runtime.register_function(0x08A55794u, &recomp_unit_0148, "recomp_unit_0148");
    runtime.register_function(0x08A55798u, &recomp_unit_0148, "recomp_unit_0148");
    runtime.register_function(0x08A557A4u, &recomp_unit_0148, "recomp_unit_0148");
    runtime.register_function(0x08A557B8u, &recomp_unit_0148, "recomp_unit_0148");
    runtime.register_function(0x08A557C0u, &recomp_unit_0148, "recomp_unit_0148");
    runtime.register_function(0x08A557CCu, &recomp_unit_0148, "recomp_unit_0148");
    runtime.register_function(0x08A557E4u, &recomp_unit_0148, "recomp_unit_0148");
    runtime.register_function(0x08A557F0u, &recomp_unit_0148, "recomp_unit_0148");
    runtime.register_function(0x08A55804u, &recomp_unit_0148, "recomp_unit_0148");
    runtime.register_function(0x08A55838u, &recomp_unit_0148, "recomp_unit_0148");
    runtime.register_function(0x08A5584Cu, &recomp_unit_0148, "recomp_unit_0148");
    runtime.register_function(0x08A55858u, &recomp_unit_0148, "recomp_unit_0148");
    runtime.register_function(0x08A5586Cu, &recomp_unit_0148, "recomp_unit_0148");
    runtime.register_function(0x08A55878u, &recomp_unit_0148, "recomp_unit_0148");
    runtime.register_function(0x08A5587Cu, &recomp_unit_0148, "recomp_unit_0148");
    runtime.register_function(0x08A55890u, &recomp_unit_0148, "recomp_unit_0148");
    runtime.register_function(0x08A5589Cu, &recomp_unit_0148, "recomp_unit_0148");
    runtime.register_function(0x08A558A0u, &recomp_unit_0148, "recomp_unit_0148");
    runtime.register_function(0x08A558A8u, &recomp_unit_0148, "recomp_unit_0148");
    runtime.register_function(0x08A558C4u, &recomp_unit_0148, "recomp_unit_0148");
    runtime.register_function(0x08A558D0u, &recomp_unit_0148, "recomp_unit_0148");
    runtime.register_function(0x08A558E0u, &recomp_unit_0148, "recomp_unit_0148");
    runtime.register_function(0x08A558E4u, &recomp_unit_0148, "recomp_unit_0148");
    runtime.register_function(0x08A558F0u, &recomp_unit_0148, "recomp_unit_0148");
    runtime.register_function(0x08A5590Cu, &recomp_unit_0148, "recomp_unit_0148");
    runtime.register_function(0x08A55910u, &recomp_unit_0148, "recomp_unit_0148");
    runtime.register_function(0x08A5591Cu, &recomp_unit_0148, "recomp_unit_0148");
    runtime.register_function(0x08A55938u, &recomp_unit_0148, "recomp_unit_0148");
    runtime.register_function(0x08A55954u, &recomp_unit_0148, "recomp_unit_0148");
    runtime.register_function(0x08A5595Cu, &recomp_unit_0148, "recomp_unit_0148");
    runtime.register_function(0x08A5596Cu, &recomp_unit_0148, "recomp_unit_0148");
    runtime.register_function(0x08A55974u, &recomp_unit_0148, "recomp_unit_0148");
    runtime.register_function(0x08A55988u, &recomp_unit_0148, "recomp_unit_0148");
    runtime.register_function(0x08A55994u, &recomp_unit_0148, "recomp_unit_0148");
    runtime.register_function(0x08A559ACu, &recomp_unit_0148, "recomp_unit_0148");
    runtime.register_function(0x08A559B4u, &recomp_unit_0148, "recomp_unit_0148");
    runtime.register_function(0x08A559C0u, &recomp_unit_0148, "recomp_unit_0148");
    runtime.register_function(0x08A559D0u, &recomp_unit_0148, "recomp_unit_0148");
    runtime.register_function(0x08A559D8u, &recomp_unit_0148, "recomp_unit_0148");
    runtime.register_function(0x08A55A10u, &recomp_unit_0148, "recomp_unit_0148");
    runtime.register_function(0x08A55A1Cu, &recomp_unit_0148, "recomp_unit_0148");
    runtime.register_function(0x08A55A58u, &recomp_unit_0148, "recomp_unit_0148");
    runtime.register_function(0x08A55A5Cu, &recomp_unit_0148, "recomp_unit_0148");
    runtime.register_function(0x08A55A80u, &recomp_unit_0148, "recomp_unit_0148");
    runtime.register_function(0x08A55AA0u, &recomp_unit_0148, "recomp_unit_0148");
    runtime.register_function(0x08A55AC4u, &recomp_unit_0148, "recomp_unit_0148");
    runtime.register_function(0x08A55ADCu, &recomp_unit_0148, "recomp_unit_0148");
    runtime.register_function(0x08A55AF0u, &recomp_unit_0148, "recomp_unit_0148");
    runtime.register_function(0x08A55B04u, &recomp_unit_0148, "recomp_unit_0148");
    runtime.register_function(0x08A55B24u, &recomp_unit_0148, "recomp_unit_0148");
    runtime.register_function(0x08A55B38u, &recomp_unit_0148, "recomp_unit_0148");
    runtime.register_function(0x08A55B50u, &recomp_unit_0148, "recomp_unit_0148");
    runtime.register_function(0x08A55B84u, &recomp_unit_0148, "recomp_unit_0148");
    runtime.register_function(0x08A55B90u, &recomp_unit_0148, "recomp_unit_0148");
    runtime.register_function(0x08A55B9Cu, &recomp_unit_0148, "recomp_unit_0148");
    runtime.register_function(0x08A55BA8u, &recomp_unit_0148, "recomp_unit_0148");
    runtime.register_function(0x08A55BB4u, &recomp_unit_0148, "recomp_unit_0148");
    runtime.register_function(0x08A55BC0u, &recomp_unit_0148, "recomp_unit_0148");
    runtime.register_function(0x08A55BD4u, &recomp_unit_0148, "recomp_unit_0148");
    runtime.register_function(0x08A55BE0u, &recomp_unit_0148, "recomp_unit_0148");
    runtime.register_function(0x08A55BE8u, &recomp_unit_0148, "recomp_unit_0148");
    runtime.register_function(0x08A55C08u, &recomp_unit_0148, "recomp_unit_0148");
    runtime.register_function(0x08A55C24u, &recomp_unit_0148, "recomp_unit_0148");
    runtime.register_function(0x08A55C54u, &recomp_unit_0148, "recomp_unit_0148");
    runtime.register_function(0x08A55C64u, &recomp_unit_0148, "recomp_unit_0148");
    runtime.register_function(0x08A55C70u, &recomp_unit_0148, "recomp_unit_0148");
    runtime.register_function(0x08A55C84u, &recomp_unit_0148, "recomp_unit_0148");
    runtime.register_function(0x08A55C90u, &recomp_unit_0148, "recomp_unit_0148");
    runtime.register_function(0x08A55C98u, &recomp_unit_0148, "recomp_unit_0148");
    runtime.register_function(0x08A55CA4u, &recomp_unit_0148, "recomp_unit_0148");
    runtime.register_function(0x08A55CB0u, &recomp_unit_0148, "recomp_unit_0148");
    runtime.register_function(0x08A55CC4u, &recomp_unit_0148, "recomp_unit_0148");
    runtime.register_function(0x08A55CD0u, &recomp_unit_0148, "recomp_unit_0148");
    runtime.register_function(0x08A55CD8u, &recomp_unit_0148, "recomp_unit_0148");
    runtime.register_function(0x08A55CE4u, &recomp_unit_0148, "recomp_unit_0148");
    runtime.register_function(0x08A55CF0u, &recomp_unit_0148, "recomp_unit_0148");
    runtime.register_function(0x08A55D04u, &recomp_unit_0148, "recomp_unit_0148");
    runtime.register_function(0x08A55D10u, &recomp_unit_0148, "recomp_unit_0148");
    runtime.register_function(0x08A55D18u, &recomp_unit_0148, "recomp_unit_0148");
    runtime.register_function(0x08A55D24u, &recomp_unit_0148, "recomp_unit_0148");
    runtime.register_function(0x08A55D34u, &recomp_unit_0148, "recomp_unit_0148");
    runtime.register_function(0x08A55D40u, &recomp_unit_0148, "recomp_unit_0148");
    runtime.register_function(0x08A55D50u, &recomp_unit_0148, "recomp_unit_0148");
    runtime.register_function(0x08A55D5Cu, &recomp_unit_0148, "recomp_unit_0148");
    runtime.register_function(0x08A55D6Cu, &recomp_unit_0148, "recomp_unit_0148");
    runtime.register_function(0x08A55D78u, &recomp_unit_0148, "recomp_unit_0148");
    runtime.register_function(0x08A55D88u, &recomp_unit_0148, "recomp_unit_0148");
    runtime.register_function(0x08A55D94u, &recomp_unit_0148, "recomp_unit_0148");
    runtime.register_function(0x08A55DA4u, &recomp_unit_0148, "recomp_unit_0148");
    runtime.register_function(0x08A55DB0u, &recomp_unit_0148, "recomp_unit_0148");
    runtime.register_function(0x08A55DC0u, &recomp_unit_0148, "recomp_unit_0148");
    runtime.register_function(0x08A55DCCu, &recomp_unit_0148, "recomp_unit_0148");
    runtime.register_function(0x08A55DDCu, &recomp_unit_0148, "recomp_unit_0148");
    runtime.register_function(0x08A55DE4u, &recomp_unit_0148, "recomp_unit_0148");
    runtime.register_function(0x08A55DF0u, &recomp_unit_0148, "recomp_unit_0148");
    runtime.register_function(0x08A55E08u, &recomp_unit_0148, "recomp_unit_0148");
    runtime.register_function(0x08A55E18u, &recomp_unit_0148, "recomp_unit_0148");
    runtime.register_function(0x08A55E20u, &recomp_unit_0148, "recomp_unit_0148");
    runtime.register_function(0x08A55E2Cu, &recomp_unit_0148, "recomp_unit_0148");
    runtime.register_function(0x08A55E44u, &recomp_unit_0148, "recomp_unit_0148");
    runtime.register_function(0x08A55E54u, &recomp_unit_0148, "recomp_unit_0148");
    runtime.register_function(0x08A55E5Cu, &recomp_unit_0148, "recomp_unit_0148");
    runtime.register_function(0x08A55E68u, &recomp_unit_0148, "recomp_unit_0148");
    runtime.register_function(0x08A55E78u, &recomp_unit_0148, "recomp_unit_0148");
    runtime.register_function(0x08A55E7Cu, &recomp_unit_0148, "recomp_unit_0148");
    runtime.register_function(0x08A55E88u, &recomp_unit_0148, "recomp_unit_0148");
    runtime.register_function(0x08A55E94u, &recomp_unit_0148, "recomp_unit_0148");
    runtime.register_function(0x08A55EC8u, &recomp_unit_0148, "recomp_unit_0148");
    runtime.register_function(0x08A55ED4u, &recomp_unit_0148, "recomp_unit_0148");
    runtime.register_function(0x08A55ED8u, &recomp_unit_0148, "recomp_unit_0148");
    runtime.register_function(0x08A55EE4u, &recomp_unit_0148, "recomp_unit_0148");
    runtime.register_function(0x08A55F08u, &recomp_unit_0148, "recomp_unit_0148");
    runtime.register_function(0x08A55F60u, &recomp_unit_0148, "recomp_unit_0148");
    runtime.register_function(0x08A55F68u, &recomp_unit_0148, "recomp_unit_0148");
    runtime.register_function(0x08A55F88u, &recomp_unit_0148, "recomp_unit_0148");
    runtime.register_function(0x08A55FA0u, &recomp_unit_0148, "recomp_unit_0148");
    runtime.register_function(0x08A55FB4u, &recomp_unit_0148, "recomp_unit_0148");
    runtime.register_function(0x08A55FC0u, &recomp_unit_0148, "recomp_unit_0148");
    runtime.register_function(0x08A55FC4u, &recomp_unit_0148, "recomp_unit_0148");
    runtime.register_function(0x08A55FD0u, &recomp_unit_0148, "recomp_unit_0148");
    runtime.register_function(0x08A55FDCu, &recomp_unit_0148, "recomp_unit_0148");
    runtime.register_function(0x08A55FE0u, &recomp_unit_0148, "recomp_unit_0148");
    runtime.register_function(0x08A55FECu, &recomp_unit_0148, "recomp_unit_0148");
    runtime.register_function(0x08A55FFCu, &recomp_unit_0148, "recomp_unit_0148");
    runtime.register_function(0x08A5601Cu, &recomp_unit_0148, "recomp_unit_0148");
    runtime.register_function(0x08A56038u, &recomp_unit_0148, "recomp_unit_0148");
    runtime.register_function(0x08A56044u, &recomp_unit_0148, "recomp_unit_0148");
    runtime.register_function(0x08A56048u, &recomp_unit_0148, "recomp_unit_0148");
    runtime.register_function(0x08A56058u, &recomp_unit_0148, "recomp_unit_0148");
    runtime.register_function(0x08A56064u, &recomp_unit_0148, "recomp_unit_0148");
    runtime.register_function(0x08A56074u, &recomp_unit_0148, "recomp_unit_0148");
    runtime.register_function(0x08A56094u, &recomp_unit_0148, "recomp_unit_0148");
    runtime.register_function(0x08A560B0u, &recomp_unit_0148, "recomp_unit_0148");
    runtime.register_function(0x08A560BCu, &recomp_unit_0148, "recomp_unit_0148");
    runtime.register_function(0x08A560C0u, &recomp_unit_0148, "recomp_unit_0148");
    runtime.register_function(0x08A560D0u, &recomp_unit_0148, "recomp_unit_0148");
    runtime.register_function(0x08A560DCu, &recomp_unit_0148, "recomp_unit_0148");
    runtime.register_function(0x08A560E8u, &recomp_unit_0148, "recomp_unit_0148");
    runtime.register_function(0x08A560F4u, &recomp_unit_0148, "recomp_unit_0148");
    runtime.register_function(0x08A56100u, &recomp_unit_0148, "recomp_unit_0148");
    runtime.register_function(0x08A56134u, &recomp_unit_0148, "recomp_unit_0148");
    runtime.register_function(0x08A56160u, &recomp_unit_0148, "recomp_unit_0148");
    runtime.register_function(0x08A5619Cu, &recomp_unit_0148, "recomp_unit_0148");
    runtime.register_function(0x08A561B4u, &recomp_unit_0148, "recomp_unit_0148");
    runtime.register_function(0x08A561C4u, &recomp_unit_0148, "recomp_unit_0148");
    runtime.register_function(0x08A561F4u, &recomp_unit_0148, "recomp_unit_0148");
    runtime.register_function(0x08A56234u, &recomp_unit_0148, "recomp_unit_0148");
    runtime.register_function(0x08A56244u, &recomp_unit_0148, "recomp_unit_0148");
    runtime.register_function(0x08A56258u, &recomp_unit_0148, "recomp_unit_0148");
    runtime.register_function(0x08A56264u, &recomp_unit_0148, "recomp_unit_0148");
    runtime.register_function(0x08A56278u, &recomp_unit_0148, "recomp_unit_0148");
    runtime.register_function(0x08A56284u, &recomp_unit_0148, "recomp_unit_0148");
    runtime.register_function(0x08A56290u, &recomp_unit_0148, "recomp_unit_0148");
    runtime.register_function(0x08A562B8u, &recomp_unit_0148, "recomp_unit_0148");
    runtime.register_function(0x08A562D8u, &recomp_unit_0148, "recomp_unit_0148");
    runtime.register_function(0x08A562F0u, &recomp_unit_0148, "recomp_unit_0148");
    runtime.register_function(0x08A5630Cu, &recomp_unit_0148, "recomp_unit_0148");
    runtime.register_function(0x08A56318u, &recomp_unit_0148, "recomp_unit_0148");
    runtime.register_function(0x08A56328u, &recomp_unit_0148, "recomp_unit_0148");
    runtime.register_function(0x08A5633Cu, &recomp_unit_0148, "recomp_unit_0148");
    runtime.register_function(0x08A56350u, &recomp_unit_0148, "recomp_unit_0148");
    runtime.register_function(0x08A56370u, &recomp_unit_0148, "recomp_unit_0148");
    runtime.register_function(0x08A56384u, &recomp_unit_0148, "recomp_unit_0148");
    runtime.register_function(0x08A563DCu, &recomp_unit_0148, "recomp_unit_0148");
    runtime.register_function(0x08A56404u, &recomp_unit_0148, "recomp_unit_0148");
    runtime.register_function(0x08A56424u, &recomp_unit_0148, "recomp_unit_0148");
    runtime.register_function(0x08A56438u, &recomp_unit_0148, "recomp_unit_0148");
    runtime.register_function(0x08A56480u, &recomp_unit_0148, "recomp_unit_0148");
    runtime.register_function(0x08A56494u, &recomp_unit_0148, "recomp_unit_0148");
    runtime.register_function(0x08A564B4u, &recomp_unit_0148, "recomp_unit_0148");
    runtime.register_function(0x08A564BCu, &recomp_unit_0148, "recomp_unit_0148");
    runtime.register_function(0x08A564C8u, &recomp_unit_0148, "recomp_unit_0148");
    runtime.register_function(0x08A564D8u, &recomp_unit_0148, "recomp_unit_0148");
    runtime.register_function(0x08A564FCu, &recomp_unit_0148, "recomp_unit_0148");
    runtime.register_function(0x08A5650Cu, &recomp_unit_0148, "recomp_unit_0148");
    runtime.register_function(0x08A56518u, &recomp_unit_0148, "recomp_unit_0148");
    runtime.register_function(0x08A56534u, &recomp_unit_0148, "recomp_unit_0148");
    runtime.register_function(0x08A56540u, &recomp_unit_0148, "recomp_unit_0148");
    runtime.register_function(0x08A56550u, &recomp_unit_0148, "recomp_unit_0148");
    runtime.register_function(0x08A56564u, &recomp_unit_0148, "recomp_unit_0148");
    runtime.register_function(0x08A56578u, &recomp_unit_0148, "recomp_unit_0148");
    runtime.register_function(0x08A56598u, &recomp_unit_0148, "recomp_unit_0148");
    runtime.register_function(0x08A565ACu, &recomp_unit_0148, "recomp_unit_0148");
    runtime.register_function(0x08A56604u, &recomp_unit_0148, "recomp_unit_0148");
    runtime.register_function(0x08A5662Cu, &recomp_unit_0148, "recomp_unit_0148");
    runtime.register_function(0x08A5664Cu, &recomp_unit_0148, "recomp_unit_0148");
    runtime.register_function(0x08A56660u, &recomp_unit_0148, "recomp_unit_0148");
    runtime.register_function(0x08A566A8u, &recomp_unit_0148, "recomp_unit_0148");
    runtime.register_function(0x08A566BCu, &recomp_unit_0148, "recomp_unit_0148");
    runtime.register_function(0x08A566DCu, &recomp_unit_0148, "recomp_unit_0148");
    runtime.register_function(0x08A566E4u, &recomp_unit_0148, "recomp_unit_0148");
    runtime.register_function(0x08A566F0u, &recomp_unit_0148, "recomp_unit_0148");
    runtime.register_function(0x08A56700u, &recomp_unit_0148, "recomp_unit_0148");
    runtime.register_function(0x08A56724u, &recomp_unit_0148, "recomp_unit_0148");
    runtime.register_function(0x08A56734u, &recomp_unit_0148, "recomp_unit_0148");
    runtime.register_function(0x08A56750u, &recomp_unit_0148, "recomp_unit_0148");
    runtime.register_function(0x08A56758u, &recomp_unit_0148, "recomp_unit_0148");
    runtime.register_function(0x08A56764u, &recomp_unit_0148, "recomp_unit_0148");
    runtime.register_function(0x08A56774u, &recomp_unit_0148, "recomp_unit_0148");
    runtime.register_function(0x08A56778u, &recomp_unit_0148, "recomp_unit_0148");
    runtime.register_function(0x08A56788u, &recomp_unit_0148, "recomp_unit_0148");
    runtime.register_function(0x08A56794u, &recomp_unit_0148, "recomp_unit_0148");
    runtime.register_function(0x08A567A0u, &recomp_unit_0148, "recomp_unit_0148");
    runtime.register_function(0x08A567D0u, &recomp_unit_0148, "recomp_unit_0148");
    runtime.register_function(0x08A56838u, &recomp_unit_0148, "recomp_unit_0148");
    runtime.register_function(0x08A5683Cu, &recomp_unit_0148, "recomp_unit_0148");
    runtime.register_function(0x08A5684Cu, &recomp_unit_0148, "recomp_unit_0148");
    runtime.register_function(0x08A56858u, &recomp_unit_0148, "recomp_unit_0148");
    runtime.register_function(0x08A56874u, &recomp_unit_0148, "recomp_unit_0148");
    runtime.register_function(0x08A56890u, &recomp_unit_0148, "recomp_unit_0148");
    runtime.register_function(0x08A5689Cu, &recomp_unit_0148, "recomp_unit_0148");
    runtime.register_function(0x08A568B8u, &recomp_unit_0148, "recomp_unit_0148");
    runtime.register_function(0x08A568D4u, &recomp_unit_0148, "recomp_unit_0148");
    runtime.register_function(0x08A56918u, &recomp_unit_0148, "recomp_unit_0148");
    runtime.register_function(0x08A56934u, &recomp_unit_0148, "recomp_unit_0148");
    runtime.register_function(0x08A56940u, &recomp_unit_0148, "recomp_unit_0148");
    runtime.register_function(0x08A5694Cu, &recomp_unit_0148, "recomp_unit_0148");
    runtime.register_function(0x08A56958u, &recomp_unit_0148, "recomp_unit_0148");
    runtime.register_function(0x08A5696Cu, &recomp_unit_0148, "recomp_unit_0148");
    runtime.register_function(0x08A56994u, &recomp_unit_0148, "recomp_unit_0148");
    runtime.register_function(0x08A569A4u, &recomp_unit_0148, "recomp_unit_0148");
    runtime.register_function(0x08A569B0u, &recomp_unit_0148, "recomp_unit_0148");
    runtime.register_function(0x08A569BCu, &recomp_unit_0148, "recomp_unit_0148");
    runtime.register_function(0x08A569D0u, &recomp_unit_0148, "recomp_unit_0148");
    runtime.register_function(0x08A569DCu, &recomp_unit_0148, "recomp_unit_0148");
    runtime.register_function(0x08A569E4u, &recomp_unit_0148, "recomp_unit_0148");
    runtime.register_function(0x08A56A08u, &recomp_unit_0148, "recomp_unit_0148");
    runtime.register_function(0x08A56A2Cu, &recomp_unit_0148, "recomp_unit_0148");
    runtime.register_function(0x08A56A48u, &recomp_unit_0148, "recomp_unit_0148");
    runtime.register_function(0x08A56A5Cu, &recomp_unit_0148, "recomp_unit_0148");
    runtime.register_function(0x08A56A68u, &recomp_unit_0148, "recomp_unit_0148");
    runtime.register_function(0x08A56A78u, &recomp_unit_0148, "recomp_unit_0148");
    runtime.register_function(0x08A56A98u, &recomp_unit_0148, "recomp_unit_0148");
    runtime.register_function(0x08A56A9Cu, &recomp_unit_0148, "recomp_unit_0148");
    runtime.register_function(0x08A56AB4u, &recomp_unit_0148, "recomp_unit_0148");
    runtime.register_function(0x08A56AC8u, &recomp_unit_0148, "recomp_unit_0148");
    runtime.register_function(0x08A56AD4u, &recomp_unit_0148, "recomp_unit_0148");
    runtime.register_function(0x08A56ADCu, &recomp_unit_0148, "recomp_unit_0148");
    runtime.register_function(0x08A56AF0u, &recomp_unit_0148, "recomp_unit_0148");
    runtime.register_function(0x08A56AFCu, &recomp_unit_0148, "recomp_unit_0148");
    runtime.register_function(0x08A56B10u, &recomp_unit_0148, "recomp_unit_0148");
    runtime.register_function(0x08A56B1Cu, &recomp_unit_0148, "recomp_unit_0148");
    runtime.register_function(0x08A56B24u, &recomp_unit_0148, "recomp_unit_0148");
    runtime.register_function(0x08A56B30u, &recomp_unit_0148, "recomp_unit_0148");
    runtime.register_function(0x08A56B3Cu, &recomp_unit_0148, "recomp_unit_0148");
    runtime.register_function(0x08A56B50u, &recomp_unit_0148, "recomp_unit_0148");
    runtime.register_function(0x08A56B5Cu, &recomp_unit_0148, "recomp_unit_0148");
    runtime.register_function(0x08A56B64u, &recomp_unit_0148, "recomp_unit_0148");
    runtime.register_function(0x08A56B70u, &recomp_unit_0148, "recomp_unit_0148");
    runtime.register_function(0x08A56B7Cu, &recomp_unit_0148, "recomp_unit_0148");
    runtime.register_function(0x08A56B90u, &recomp_unit_0148, "recomp_unit_0148");
    runtime.register_function(0x08A56B9Cu, &recomp_unit_0148, "recomp_unit_0148");
    runtime.register_function(0x08A56BA4u, &recomp_unit_0148, "recomp_unit_0148");
    runtime.register_function(0x08A56BB0u, &recomp_unit_0148, "recomp_unit_0148");
    runtime.register_function(0x08A56BC0u, &recomp_unit_0148, "recomp_unit_0148");
    runtime.register_function(0x08A56BCCu, &recomp_unit_0148, "recomp_unit_0148");
    runtime.register_function(0x08A56BDCu, &recomp_unit_0148, "recomp_unit_0148");
    runtime.register_function(0x08A56BE8u, &recomp_unit_0148, "recomp_unit_0148");
    runtime.register_function(0x08A56BF8u, &recomp_unit_0148, "recomp_unit_0148");
    runtime.register_function(0x08A56C04u, &recomp_unit_0148, "recomp_unit_0148");
    runtime.register_function(0x08A56C14u, &recomp_unit_0148, "recomp_unit_0148");
    runtime.register_function(0x08A56C20u, &recomp_unit_0148, "recomp_unit_0148");
    runtime.register_function(0x08A56C30u, &recomp_unit_0148, "recomp_unit_0148");
    runtime.register_function(0x08A56C3Cu, &recomp_unit_0148, "recomp_unit_0148");
    runtime.register_function(0x08A56C4Cu, &recomp_unit_0148, "recomp_unit_0148");
    runtime.register_function(0x08A56C58u, &recomp_unit_0148, "recomp_unit_0148");
    runtime.register_function(0x08A56C68u, &recomp_unit_0148, "recomp_unit_0148");
    runtime.register_function(0x08A56C70u, &recomp_unit_0148, "recomp_unit_0148");
    runtime.register_function(0x08A56C7Cu, &recomp_unit_0148, "recomp_unit_0148");
    runtime.register_function(0x08A56C94u, &recomp_unit_0148, "recomp_unit_0148");
    runtime.register_function(0x08A56CA4u, &recomp_unit_0148, "recomp_unit_0148");
    runtime.register_function(0x08A56CACu, &recomp_unit_0148, "recomp_unit_0148");
    runtime.register_function(0x08A56CB8u, &recomp_unit_0148, "recomp_unit_0148");
    runtime.register_function(0x08A56CD0u, &recomp_unit_0148, "recomp_unit_0148");
    runtime.register_function(0x08A56CE0u, &recomp_unit_0148, "recomp_unit_0148");
    runtime.register_function(0x08A56CE8u, &recomp_unit_0148, "recomp_unit_0148");
    runtime.register_function(0x08A56CF4u, &recomp_unit_0148, "recomp_unit_0148");
    runtime.register_function(0x08A56D04u, &recomp_unit_0148, "recomp_unit_0148");
    runtime.register_function(0x08A56D08u, &recomp_unit_0148, "recomp_unit_0148");
    runtime.register_function(0x08A56D14u, &recomp_unit_0148, "recomp_unit_0148");
    runtime.register_function(0x08A56D1Cu, &recomp_unit_0148, "recomp_unit_0148");
    runtime.register_function(0x08A56D34u, &recomp_unit_0148, "recomp_unit_0148");
    runtime.register_function(0x08A56D44u, &recomp_unit_0148, "recomp_unit_0148");
    runtime.register_function(0x08A56D50u, &recomp_unit_0148, "recomp_unit_0148");
    runtime.register_function(0x08A56D5Cu, &recomp_unit_0148, "recomp_unit_0148");
    runtime.register_function(0x08A56D70u, &recomp_unit_0148, "recomp_unit_0148");
    runtime.register_function(0x08A56D84u, &recomp_unit_0148, "recomp_unit_0148");
    runtime.register_function(0x08A56DA8u, &recomp_unit_0148, "recomp_unit_0148");
    runtime.register_function(0x08A56DBCu, &recomp_unit_0148, "recomp_unit_0148");
    runtime.register_function(0x08A56DC8u, &recomp_unit_0148, "recomp_unit_0148");
    runtime.register_function(0x08A56DD4u, &recomp_unit_0148, "recomp_unit_0148");
    runtime.register_function(0x08A56DE0u, &recomp_unit_0148, "recomp_unit_0148");
    runtime.register_function(0x08A56DF8u, &recomp_unit_0148, "recomp_unit_0148");
    runtime.register_function(0x08A56E14u, &recomp_unit_0148, "recomp_unit_0148");
    runtime.register_function(0x08A56E18u, &recomp_unit_0148, "recomp_unit_0148");
    runtime.register_function(0x08A56E2Cu, &recomp_unit_0148, "recomp_unit_0148");
    runtime.register_function(0x08A56E44u, &recomp_unit_0148, "recomp_unit_0148");
    runtime.register_function(0x08A56E50u, &recomp_unit_0148, "recomp_unit_0148");
    runtime.register_function(0x08A56E58u, &recomp_unit_0148, "recomp_unit_0148");
    runtime.register_function(0x08A56E78u, &recomp_unit_0148, "recomp_unit_0148");
    runtime.register_function(0x08A56E94u, &recomp_unit_0148, "recomp_unit_0148");
    runtime.register_function(0x08A56EA4u, &recomp_unit_0148, "recomp_unit_0148");
    runtime.register_function(0x08A56ED4u, &recomp_unit_0148, "recomp_unit_0148");
    runtime.register_function(0x08A56EDCu, &recomp_unit_0148, "recomp_unit_0148");
    runtime.register_function(0x08A56EECu, &recomp_unit_0148, "recomp_unit_0148");
    runtime.register_function(0x08A56F18u, &recomp_unit_0148, "recomp_unit_0148");
    runtime.register_function(0x08A56F2Cu, &recomp_unit_0148, "recomp_unit_0148");
    runtime.register_function(0x08A56F3Cu, &recomp_unit_0148, "recomp_unit_0148");
    runtime.register_function(0x08A56F74u, &recomp_unit_0148, "recomp_unit_0148");
    runtime.register_function(0x08A56F7Cu, &recomp_unit_0148, "recomp_unit_0148");
    runtime.register_function(0x08A56F88u, &recomp_unit_0148, "recomp_unit_0148");
    runtime.register_function(0x08A56F9Cu, &recomp_unit_0148, "recomp_unit_0148");
    runtime.register_function(0x08A56FA8u, &recomp_unit_0148, "recomp_unit_0148");
    runtime.register_function(0x08A56FB0u, &recomp_unit_0148, "recomp_unit_0148");
    runtime.register_function(0x08A56FC0u, &recomp_unit_0148, "recomp_unit_0148");
    runtime.register_function(0x08A56FD0u, &recomp_unit_0148, "recomp_unit_0148");
    runtime.register_function(0x08A56FE8u, &recomp_unit_0148, "recomp_unit_0148");
    runtime.register_function(0x08A56FFCu, &recomp_unit_0148, "recomp_unit_0148");
    runtime.register_function(0x08A57008u, &recomp_unit_0148, "recomp_unit_0148");
    runtime.register_function(0x08A57038u, &recomp_unit_0148, "recomp_unit_0148");
    runtime.register_function(0x08A57048u, &recomp_unit_0148, "recomp_unit_0148");
    runtime.register_function(0x08A57054u, &recomp_unit_0148, "recomp_unit_0148");
    runtime.register_function(0x08A57064u, &recomp_unit_0148, "recomp_unit_0148");
    runtime.register_function(0x08A57070u, &recomp_unit_0148, "recomp_unit_0148");
    runtime.register_function(0x08A5707Cu, &recomp_unit_0148, "recomp_unit_0148");
    runtime.register_function(0x08A57088u, &recomp_unit_0148, "recomp_unit_0148");
    runtime.register_function(0x08A570A0u, &recomp_unit_0148, "recomp_unit_0148");
    runtime.register_function(0x08A570A8u, &recomp_unit_0148, "recomp_unit_0148");
    runtime.register_function(0x08A570BCu, &recomp_unit_0148, "recomp_unit_0148");
    runtime.register_function(0x08A570C4u, &recomp_unit_0148, "recomp_unit_0148");
    runtime.register_function(0x08A570CCu, &recomp_unit_0148, "recomp_unit_0148");
    runtime.register_function(0x08A570D8u, &recomp_unit_0148, "recomp_unit_0148");
    runtime.register_function(0x08A570E4u, &recomp_unit_0148, "recomp_unit_0148");
    runtime.register_function(0x08A570F4u, &recomp_unit_0148, "recomp_unit_0148");
    runtime.register_function(0x08A57100u, &recomp_unit_0148, "recomp_unit_0148");
    runtime.register_function(0x08A57114u, &recomp_unit_0148, "recomp_unit_0148");
    runtime.register_function(0x08A57124u, &recomp_unit_0148, "recomp_unit_0148");
    runtime.register_function(0x08A5713Cu, &recomp_unit_0148, "recomp_unit_0148");
    runtime.register_function(0x08A57144u, &recomp_unit_0148, "recomp_unit_0148");
    runtime.register_function(0x08A57154u, &recomp_unit_0148, "recomp_unit_0148");
    runtime.register_function(0x08A5716Cu, &recomp_unit_0148, "recomp_unit_0148");
    runtime.register_function(0x08A57178u, &recomp_unit_0148, "recomp_unit_0148");
    runtime.register_function(0x08A57184u, &recomp_unit_0148, "recomp_unit_0148");
    runtime.register_function(0x08A571A4u, &recomp_unit_0148, "recomp_unit_0148");
    runtime.register_function(0x08A571B0u, &recomp_unit_0148, "recomp_unit_0148");
    runtime.register_function(0x08A571D0u, &recomp_unit_0148, "recomp_unit_0148");
    runtime.register_function(0x08A571F8u, &recomp_unit_0148, "recomp_unit_0148");
    runtime.register_function(0x08A571FCu, &recomp_unit_0148, "recomp_unit_0148");
    runtime.register_function(0x08A5720Cu, &recomp_unit_0148, "recomp_unit_0148");
    runtime.register_function(0x08A57210u, &recomp_unit_0148, "recomp_unit_0148");
    runtime.register_function(0x08A57228u, &recomp_unit_0148, "recomp_unit_0148");
    runtime.register_function(0x08A57234u, &recomp_unit_0148, "recomp_unit_0148");
    runtime.register_function(0x08A57240u, &recomp_unit_0148, "recomp_unit_0148");
    runtime.register_function(0x08A57250u, &recomp_unit_0148, "recomp_unit_0148");
    runtime.register_function(0x08A5725Cu, &recomp_unit_0148, "recomp_unit_0148");
    runtime.register_function(0x08A57268u, &recomp_unit_0148, "recomp_unit_0148");
    runtime.register_function(0x08A57294u, &recomp_unit_0148, "recomp_unit_0148");
    runtime.register_function(0x08A572A4u, &recomp_unit_0148, "recomp_unit_0148");
    runtime.register_function(0x08A572BCu, &recomp_unit_0148, "recomp_unit_0148");
    runtime.register_function(0x08A572C4u, &recomp_unit_0148, "recomp_unit_0148");
    runtime.register_function(0x08A572D4u, &recomp_unit_0148, "recomp_unit_0148");
    runtime.register_function(0x08A572ECu, &recomp_unit_0148, "recomp_unit_0148");
    runtime.register_function(0x08A572F8u, &recomp_unit_0148, "recomp_unit_0148");
    runtime.register_function(0x08A57304u, &recomp_unit_0148, "recomp_unit_0148");
    runtime.register_function(0x08A57324u, &recomp_unit_0148, "recomp_unit_0148");
    runtime.register_function(0x08A57330u, &recomp_unit_0148, "recomp_unit_0148");
    runtime.register_function(0x08A57350u, &recomp_unit_0148, "recomp_unit_0148");
    runtime.register_function(0x08A57378u, &recomp_unit_0148, "recomp_unit_0148");
    runtime.register_function(0x08A5737Cu, &recomp_unit_0148, "recomp_unit_0148");
    runtime.register_function(0x08A5738Cu, &recomp_unit_0148, "recomp_unit_0148");
    runtime.register_function(0x08A57390u, &recomp_unit_0148, "recomp_unit_0148");
    runtime.register_function(0x08A573A8u, &recomp_unit_0148, "recomp_unit_0148");
    runtime.register_function(0x08A573B8u, &recomp_unit_0148, "recomp_unit_0148");
    runtime.register_function(0x08A573E4u, &recomp_unit_0148, "recomp_unit_0148");
    runtime.register_function(0x08A573FCu, &recomp_unit_0148, "recomp_unit_0148");
    runtime.register_function(0x08A57410u, &recomp_unit_0148, "recomp_unit_0148");
    runtime.register_function(0x08A57424u, &recomp_unit_0148, "recomp_unit_0148");
    runtime.register_function(0x08A57468u, &recomp_unit_0148, "recomp_unit_0148");
    runtime.register_function(0x08A57494u, &recomp_unit_0148, "recomp_unit_0148");
    runtime.register_function(0x08A574ACu, &recomp_unit_0148, "recomp_unit_0148");
    runtime.register_function(0x08A574C0u, &recomp_unit_0148, "recomp_unit_0148");
    runtime.register_function(0x08A574D4u, &recomp_unit_0148, "recomp_unit_0148");
    runtime.register_function(0x08A574E4u, &recomp_unit_0148, "recomp_unit_0148");
    runtime.register_function(0x08A574E8u, &recomp_unit_0148, "recomp_unit_0148");
    runtime.register_function(0x08A574F4u, &recomp_unit_0148, "recomp_unit_0148");
    runtime.register_function(0x08A57510u, &recomp_unit_0148, "recomp_unit_0148");
    runtime.register_function(0x08A57538u, &recomp_unit_0148, "recomp_unit_0148");
    runtime.register_function(0x08A57544u, &recomp_unit_0148, "recomp_unit_0148");
    runtime.register_function(0x08A57584u, &recomp_unit_0148, "recomp_unit_0148");
    runtime.register_function(0x08A575A0u, &recomp_unit_0148, "recomp_unit_0148");
    runtime.register_function(0x08A575A4u, &recomp_unit_0148, "recomp_unit_0148");
    runtime.register_function(0x08A575B0u, &recomp_unit_0148, "recomp_unit_0148");
    runtime.register_function(0x08A575B4u, &recomp_unit_0148, "recomp_unit_0148");
    runtime.register_function(0x08A575C4u, &recomp_unit_0148, "recomp_unit_0148");
    runtime.register_function(0x08A575F0u, &recomp_unit_0148, "recomp_unit_0148");
    runtime.register_function(0x08A5760Cu, &recomp_unit_0148, "recomp_unit_0148");
    runtime.register_function(0x08A57618u, &recomp_unit_0148, "recomp_unit_0148");
    runtime.register_function(0x08A57624u, &recomp_unit_0148, "recomp_unit_0148");
    runtime.register_function(0x08A57638u, &recomp_unit_0148, "recomp_unit_0148");
    runtime.register_function(0x08A57640u, &recomp_unit_0148, "recomp_unit_0148");
    runtime.register_function(0x08A5764Cu, &recomp_unit_0148, "recomp_unit_0148");
    runtime.register_function(0x08A57670u, &recomp_unit_0148, "recomp_unit_0148");
    runtime.register_function(0x08A57680u, &recomp_unit_0148, "recomp_unit_0148");
    runtime.register_function(0x08A57688u, &recomp_unit_0148, "recomp_unit_0148");
    runtime.register_function(0x08A57694u, &recomp_unit_0148, "recomp_unit_0148");
    runtime.register_function(0x08A576A4u, &recomp_unit_0148, "recomp_unit_0148");
    runtime.register_function(0x08A576A8u, &recomp_unit_0148, "recomp_unit_0148");
    runtime.register_function(0x08A576B8u, &recomp_unit_0148, "recomp_unit_0148");
    runtime.register_function(0x08A576C0u, &recomp_unit_0148, "recomp_unit_0148");
    runtime.register_function(0x08A576CCu, &recomp_unit_0148, "recomp_unit_0148");
    runtime.register_function(0x08A57704u, &recomp_unit_0148, "recomp_unit_0148");
    runtime.register_function(0x08A5770Cu, &recomp_unit_0148, "recomp_unit_0148");
    runtime.register_function(0x08A57718u, &recomp_unit_0148, "recomp_unit_0148");
    runtime.register_function(0x08A57728u, &recomp_unit_0148, "recomp_unit_0148");
    runtime.register_function(0x08A5772Cu, &recomp_unit_0148, "recomp_unit_0148");
    runtime.register_function(0x08A5773Cu, &recomp_unit_0148, "recomp_unit_0148");
    runtime.register_function(0x08A57744u, &recomp_unit_0148, "recomp_unit_0148");
    runtime.register_function(0x08A5774Cu, &recomp_unit_0148, "recomp_unit_0148");
    runtime.register_function(0x08A57760u, &recomp_unit_0148, "recomp_unit_0148");
    runtime.register_function(0x08A5776Cu, &recomp_unit_0148, "recomp_unit_0148");
    runtime.register_function(0x08A57778u, &recomp_unit_0148, "recomp_unit_0148");
    runtime.register_function(0x08A57788u, &recomp_unit_0148, "recomp_unit_0148");
    runtime.register_function(0x08A577A4u, &recomp_unit_0148, "recomp_unit_0148");
    runtime.register_function(0x08A577B0u, &recomp_unit_0148, "recomp_unit_0148");
    runtime.register_function(0x08A577C0u, &recomp_unit_0148, "recomp_unit_0148");
    runtime.register_function(0x08A577F0u, &recomp_unit_0148, "recomp_unit_0148");
    runtime.register_function(0x08A57800u, &recomp_unit_0148, "recomp_unit_0148");
    runtime.register_function(0x08A57818u, &recomp_unit_0148, "recomp_unit_0148");
    runtime.register_function(0x08A57828u, &recomp_unit_0148, "recomp_unit_0148");
    runtime.register_function(0x08A57838u, &recomp_unit_0148, "recomp_unit_0148");
    runtime.register_function(0x08A57850u, &recomp_unit_0148, "recomp_unit_0148");
    runtime.register_function(0x08A57860u, &recomp_unit_0148, "recomp_unit_0148");
    runtime.register_function(0x08A57878u, &recomp_unit_0148, "recomp_unit_0148");
    runtime.register_function(0x08A57880u, &recomp_unit_0148, "recomp_unit_0148");
    runtime.register_function(0x08A57890u, &recomp_unit_0148, "recomp_unit_0148");
    runtime.register_function(0x08A578C0u, &recomp_unit_0148, "recomp_unit_0148");
    runtime.register_function(0x08A578D0u, &recomp_unit_0148, "recomp_unit_0148");
    runtime.register_function(0x08A578E8u, &recomp_unit_0148, "recomp_unit_0148");
    runtime.register_function(0x08A578FCu, &recomp_unit_0148, "recomp_unit_0148");
    runtime.register_function(0x08A5790Cu, &recomp_unit_0148, "recomp_unit_0148");
    runtime.register_function(0x08A57924u, &recomp_unit_0148, "recomp_unit_0148");
    runtime.register_function(0x08A5792Cu, &recomp_unit_0148, "recomp_unit_0148");
    runtime.register_function(0x08A57934u, &recomp_unit_0148, "recomp_unit_0148");
    runtime.register_function(0x08A57948u, &recomp_unit_0148, "recomp_unit_0148");
    runtime.register_function(0x08A57958u, &recomp_unit_0148, "recomp_unit_0148");
    runtime.register_function(0x08A579A4u, &recomp_unit_0148, "recomp_unit_0148");
    runtime.register_function(0x08A579B0u, &recomp_unit_0148, "recomp_unit_0148");
    runtime.register_function(0x08A579BCu, &recomp_unit_0148, "recomp_unit_0148");
    runtime.register_function(0x08A579D0u, &recomp_unit_0148, "recomp_unit_0148");
    runtime.register_function(0x08A579D8u, &recomp_unit_0148, "recomp_unit_0148");
    runtime.register_function(0x08A579F4u, &recomp_unit_0148, "recomp_unit_0148");
    runtime.register_function(0x08A57A04u, &recomp_unit_0148, "recomp_unit_0148");
    runtime.register_function(0x08A57A14u, &recomp_unit_0148, "recomp_unit_0148");
    runtime.register_function(0x08A57A1Cu, &recomp_unit_0148, "recomp_unit_0148");
    runtime.register_function(0x08A57A28u, &recomp_unit_0148, "recomp_unit_0148");
    runtime.register_function(0x08A57A3Cu, &recomp_unit_0148, "recomp_unit_0148");
    runtime.register_function(0x08A57A50u, &recomp_unit_0148, "recomp_unit_0148");
    runtime.register_function(0x08A57A58u, &recomp_unit_0148, "recomp_unit_0148");
    runtime.register_function(0x08A57A64u, &recomp_unit_0148, "recomp_unit_0148");
    runtime.register_function(0x08A57A70u, &recomp_unit_0148, "recomp_unit_0148");
    runtime.register_function(0x08A57A8Cu, &recomp_unit_0148, "recomp_unit_0148");
    runtime.register_function(0x08A57A98u, &recomp_unit_0148, "recomp_unit_0148");
    runtime.register_function(0x08A57AA4u, &recomp_unit_0148, "recomp_unit_0148");
    runtime.register_function(0x08A57AC8u, &recomp_unit_0148, "recomp_unit_0148");
    runtime.register_function(0x08A57AD4u, &recomp_unit_0148, "recomp_unit_0148");
    runtime.register_function(0x08A57AF8u, &recomp_unit_0148, "recomp_unit_0148");
    runtime.register_function(0x08A57B04u, &recomp_unit_0148, "recomp_unit_0148");
    runtime.register_function(0x08A57B24u, &recomp_unit_0148, "recomp_unit_0148");
    runtime.register_function(0x08A57B2Cu, &recomp_unit_0148, "recomp_unit_0148");
    runtime.register_function(0x08A57B44u, &recomp_unit_0148, "recomp_unit_0148");
    runtime.register_function(0x08A57B54u, &recomp_unit_0148, "recomp_unit_0148");
    runtime.register_function(0x08A57BF8u, &recomp_unit_0148, "recomp_unit_0148");
    runtime.register_function(0x08A57C04u, &recomp_unit_0148, "recomp_unit_0148");
    runtime.register_function(0x08A57C44u, &recomp_unit_0148, "recomp_unit_0148");
    runtime.register_function(0x08A57C5Cu, &recomp_unit_0148, "recomp_unit_0148");
    runtime.register_function(0x08A57C68u, &recomp_unit_0148, "recomp_unit_0148");
    runtime.register_function(0x08A57C70u, &recomp_unit_0148, "recomp_unit_0148");
    runtime.register_function(0x08A57C7Cu, &recomp_unit_0148, "recomp_unit_0148");
    runtime.register_function(0x08A57C88u, &recomp_unit_0148, "recomp_unit_0148");
    runtime.register_function(0x08A57C8Cu, &recomp_unit_0148, "recomp_unit_0148");
    runtime.register_function(0x08A57C9Cu, &recomp_unit_0148, "recomp_unit_0148");
    runtime.register_function(0x08A57CC4u, &recomp_unit_0148, "recomp_unit_0148");
    runtime.register_function(0x08A57CE4u, &recomp_unit_0148, "recomp_unit_0148");
    runtime.register_function(0x08A57CECu, &recomp_unit_0148, "recomp_unit_0148");
    runtime.register_function(0x08A57CF8u, &recomp_unit_0148, "recomp_unit_0148");
    runtime.register_function(0x08A57D10u, &recomp_unit_0148, "recomp_unit_0148");
    runtime.register_function(0x08A57D6Cu, &recomp_unit_0148, "recomp_unit_0148");
    runtime.register_function(0x08A57D7Cu, &recomp_unit_0148, "recomp_unit_0148");
    runtime.register_function(0x08A57D94u, &recomp_unit_0148, "recomp_unit_0148");
    runtime.register_function(0x08A57DA0u, &recomp_unit_0148, "recomp_unit_0148");
    runtime.register_function(0x08A57DB0u, &recomp_unit_0148, "recomp_unit_0148");
    runtime.register_function(0x08A57DC8u, &recomp_unit_0148, "recomp_unit_0148");
    runtime.register_function(0x08A57DE4u, &recomp_unit_0148, "recomp_unit_0148");
    runtime.register_function(0x08A57DF4u, &recomp_unit_0148, "recomp_unit_0148");
    runtime.register_function(0x08A57E08u, &recomp_unit_0148, "recomp_unit_0148");
    runtime.register_function(0x08A57E14u, &recomp_unit_0148, "recomp_unit_0148");
    runtime.register_function(0x08A57E3Cu, &recomp_unit_0148, "recomp_unit_0148");
    runtime.register_function(0x08A57E58u, &recomp_unit_0148, "recomp_unit_0148");
    runtime.register_function(0x08A57E68u, &recomp_unit_0148, "recomp_unit_0148");
    runtime.register_function(0x08A57E78u, &recomp_unit_0148, "recomp_unit_0148");
    runtime.register_function(0x08A57E88u, &recomp_unit_0148, "recomp_unit_0148");
    runtime.register_function(0x08A57EB4u, &recomp_unit_0148, "recomp_unit_0148");
    runtime.register_function(0x08A57ED8u, &recomp_unit_0148, "recomp_unit_0148");
    runtime.register_function(0x08A57EF0u, &recomp_unit_0148, "recomp_unit_0148");
    runtime.register_function(0x08A57F00u, &recomp_unit_0148, "recomp_unit_0148");
    runtime.register_function(0x08A57F28u, &recomp_unit_0148, "recomp_unit_0148");
    runtime.register_function(0x08A57F30u, &recomp_unit_0148, "recomp_unit_0148");
    runtime.register_function(0x08A57F3Cu, &recomp_unit_0148, "recomp_unit_0148");
    runtime.register_function(0x08A57F48u, &recomp_unit_0148, "recomp_unit_0148");
    runtime.register_function(0x08A57F54u, &recomp_unit_0148, "recomp_unit_0148");
    runtime.register_function(0x08A57F74u, &recomp_unit_0148, "recomp_unit_0148");
    runtime.register_function(0x08A57F94u, &recomp_unit_0148, "recomp_unit_0148");
    runtime.register_function(0x08A57FBCu, &recomp_unit_0148, "recomp_unit_0148");
    runtime.register_function(0x08A57FC4u, &recomp_unit_0148, "recomp_unit_0148");
    runtime.register_function(0x08A57FD0u, &recomp_unit_0148, "recomp_unit_0148");
    runtime.register_function(0x08A57FE0u, &recomp_unit_0148, "recomp_unit_0148");
    runtime.register_function(0x08A57FECu, &recomp_unit_0148, "recomp_unit_0148");
}
} // namespace psprecomp
