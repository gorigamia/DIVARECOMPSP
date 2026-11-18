#include "psprecomp/runtime.hpp"
#include "generated_units.hpp"
#include <bit>
#include <cmath>
#include <cstdint>
#include <limits>

namespace psprecomp {
static const std::uint16_t kEntryIds_recomp_unit_0166[4092] = {
    1, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 2, 0, 3, 0, 0, 4, 0, 5, 0, 6, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    7, 0, 0, 8, 9, 10, 0, 0, 0, 0, 0, 0, 11, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 12, 0, 0, 0, 13, 0, 0, 0, 14, 0, 15, 0, 16, 0, 17, 0, 0,
    0, 0, 0, 0, 0, 18, 0, 19, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 20, 21, 0, 0, 22, 0, 0, 0,
    0, 23, 0, 0, 0, 0, 24, 0, 0, 0, 0, 25, 26, 0, 27, 0, 0, 0, 28, 29, 0, 30, 0, 0, 0, 0, 0, 31, 0, 0, 32, 33,
    0, 34, 35, 0, 36, 0, 0, 37, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 38, 39, 0, 40, 0, 0, 41, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 42, 0, 43, 0, 0, 44, 0, 0, 0, 0, 0, 0, 0, 0, 45, 0, 0, 0, 46, 0,
    0, 0, 0, 0, 47, 0, 0, 0, 0, 48, 49, 0, 50, 0, 0, 0, 0, 0, 51, 52, 0, 53, 0, 0, 0, 54, 55, 0, 56, 0, 0, 0,
    0, 0, 0, 57, 0, 0, 0, 58, 59, 0, 60, 61, 0, 62, 0, 0, 0, 0, 63, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 64, 65, 0, 66, 0, 0, 0, 0, 67, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 68, 69, 0, 0, 70, 0,
    0, 0, 0, 71, 0, 0, 0, 0, 72, 0, 0, 0, 0, 73, 74, 0, 75, 0, 0, 0, 76, 77, 0, 78, 0, 0, 0, 0, 0, 79, 0, 0,
    80, 81, 0, 82, 83, 0, 84, 0, 0, 0, 0, 85, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 86, 87, 0, 88, 0, 0, 0, 89,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 90, 91, 0, 0, 0, 0, 0, 0, 92, 0, 0, 93, 0, 0, 0,
    0, 0, 94, 0, 0, 0, 0, 95, 96, 0, 97, 0, 0, 0, 0, 0, 0, 98, 99, 0, 100, 0, 0, 0, 0, 101, 102, 0, 103, 0, 0, 0,
    0, 0, 0, 0, 104, 0, 0, 105, 106, 0, 107, 108, 0, 109, 0, 110, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 111, 112, 0, 113, 0, 114, 0, 0, 0, 0, 0, 0, 115, 116, 0, 0, 0, 0, 0, 0, 0,
    117, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 118, 0, 0, 0, 0, 0, 0, 0, 0, 119, 0, 120,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 121, 0, 0, 0, 122, 0, 123, 0, 124, 0, 0, 0, 0, 0, 0, 125, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 126, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 127, 0, 0, 0, 0, 0, 128, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 129, 0, 130, 0, 0, 0, 0, 0, 131, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 132, 0, 133, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 134, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 135, 136, 0, 0, 0, 137, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 138, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 139, 0, 140,
    0, 0, 0, 0, 141, 0, 142, 0, 0, 143, 0, 0, 144, 0, 0, 145, 0, 0, 0, 0, 0, 0, 146, 0, 0, 0, 0, 0, 147, 0, 0, 148,
    0, 149, 0, 0, 0, 0, 0, 0, 150, 0, 0, 151, 0, 152, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 153, 0, 0, 154,
    0, 155, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 156, 0, 0, 0, 157, 0, 0, 0, 0, 158, 0, 0,
    159, 0, 160, 0, 0, 0, 0, 0, 0, 0, 161, 0, 0, 162, 0, 163, 0, 0, 0, 164, 0, 165, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 166, 0, 0, 167, 168, 169, 0, 170, 0, 0, 171, 172, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 173, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 174, 0, 0, 0, 0, 0, 0, 0, 175, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    176, 0, 0, 0, 177, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    178, 0, 0, 179, 0, 180, 0, 0, 181, 0, 182, 0, 0, 0, 0, 0, 183, 0, 184, 0, 0, 0, 0, 185, 0, 186, 0, 0, 0, 0, 187, 0,
    188, 0, 0, 0, 0, 189, 0, 190, 0, 0, 0, 0, 191, 0, 0, 0, 192, 0, 0, 0, 0, 0, 0, 193, 0, 0, 0, 194, 0, 0, 0, 195,
    0, 0, 0, 0, 0, 0, 0, 196, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 197, 0, 0, 0, 198, 0, 199, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 200, 0, 0, 0, 201, 0, 202, 0, 203, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 204, 0, 0, 0, 205, 0, 206, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 207, 0, 208, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 209, 0, 210, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 211, 0, 212, 0, 0, 0, 0, 213, 214, 0, 215, 0, 0, 0,
    0, 216, 0, 0, 0, 217, 0, 218, 0, 0, 0, 0, 219, 0, 220, 0, 0, 0, 0, 221, 0, 222, 0, 0, 0, 0, 223, 0, 224, 0, 0, 225,
    0, 226, 0, 0, 227, 0, 228, 0, 229, 0, 230, 0, 0, 231, 0, 232, 0, 233, 0, 234, 0, 0, 235, 0, 0, 0, 0, 236, 0, 237, 0, 238,
    0, 0, 0, 239, 0, 240, 0, 0, 0, 0, 241, 0, 0, 0, 242, 243, 0, 244, 0, 0, 0, 245, 0, 0, 0, 246, 0, 247, 0, 0, 0, 0,
    248, 0, 249, 0, 0, 0, 0, 250, 0, 251, 0, 0, 0, 0, 252, 0, 253, 0, 0, 0, 254, 0, 255, 0, 256, 0, 0, 0, 257, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 258, 0, 0, 0, 0, 0, 0, 259, 0, 260, 0, 261, 0, 0, 262, 0, 263, 0, 264, 0, 265, 0, 0, 0, 266, 0,
    0, 0, 267, 0, 0, 268, 0, 0, 0, 0, 269, 0, 270, 0, 271, 0, 272, 0, 273, 0, 274, 0, 275, 0, 276, 0, 0, 0, 277, 0, 0, 0,
    0, 0, 0, 0, 278, 0, 279, 0, 0, 0, 280, 0, 0, 0, 0, 0, 281, 0, 282, 0, 0, 0, 283, 0, 284, 0, 285, 0, 286, 0, 287, 0,
    288, 0, 289, 0, 0, 0, 0, 0, 290, 0, 0, 291, 0, 292, 0, 293, 0, 294, 0, 295, 0, 296, 0, 297, 0, 0, 0, 0, 0, 298, 0, 0,
    299, 0, 300, 0, 0, 301, 0, 0, 0, 302, 0, 0, 303, 0, 304, 0, 0, 305, 0, 0, 0, 0, 0, 306, 0, 0, 0, 307, 0, 308, 0, 0,
    309, 0, 310, 0, 311, 0, 0, 0, 0, 0, 312, 313, 0, 0, 0, 0, 314, 0, 0, 0, 0, 315, 0, 0, 0, 0, 0, 0, 0, 316, 0, 0,
    317, 0, 0, 318, 0, 0, 319, 0, 320, 0, 321, 0, 322, 0, 0, 0, 323, 0, 324, 0, 0, 0, 325, 0, 326, 0, 327, 0, 0, 0, 0, 328,
    0, 329, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 330, 0, 331, 0, 0, 0, 332, 0, 0, 333, 0, 334, 0, 0, 0, 335, 0, 0, 0,
    0, 0, 0, 0, 336, 0, 337, 0, 0, 0, 338, 0, 0, 0, 0, 0, 0, 0, 339, 0, 340, 0, 0, 0, 341, 0, 0, 0, 0, 0, 0, 0,
    342, 0, 343, 0, 0, 0, 344, 0, 0, 0, 0, 0, 0, 0, 345, 0, 346, 0, 0, 0, 347, 0, 348, 0, 0, 349, 0, 350, 0, 351, 0, 0,
    0, 0, 0, 352, 0, 353, 0, 0, 354, 0, 355, 0, 0, 0, 356, 0, 357, 0, 0, 358, 0, 359, 0, 360, 0, 0, 0, 361, 0, 362, 0, 363,
    0, 0, 364, 0, 365, 0, 366, 0, 367, 0, 368, 0, 0, 0, 0, 369, 0, 370, 0, 0, 371, 0, 372, 0, 373, 0, 0, 374, 0, 0, 375, 0,
    0, 376, 0, 377, 0, 378, 0, 0, 379, 0, 380, 0, 381, 0, 382, 0, 383, 0, 0, 0, 0, 0, 384, 0, 385, 0, 0, 386, 0, 0, 0, 0,
    0, 387, 0, 388, 0, 0, 389, 0, 390, 0, 391, 0, 392, 0, 393, 0, 394, 0, 0, 395, 0, 0, 0, 396, 0, 397, 0, 398, 0, 0, 399, 0,
    0, 0, 0, 400, 0, 0, 0, 0, 0, 0, 401, 402, 0, 0, 0, 403, 0, 0, 0, 0, 0, 0, 0, 404, 0, 0, 405, 0, 0, 406, 0, 407,
    0, 408, 0, 409, 0, 410, 0, 0, 0, 0, 411, 0, 412, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 413, 0, 414, 0, 0, 0, 415, 0,
    0, 416, 0, 417, 0, 0, 0, 418, 0, 0, 0, 0, 0, 0, 0, 419, 0, 420, 0, 0, 0, 421, 0, 0, 0, 0, 0, 0, 0, 422, 0, 423,
    0, 0, 424, 0, 425, 0, 426, 0, 0, 0, 0, 0, 427, 0, 428, 0, 0, 429, 0, 430, 0, 0, 0, 431, 0, 432, 0, 0, 433, 0, 434, 0,
    435, 0, 0, 436, 0, 0, 437, 0, 0, 438, 0, 439, 0, 440, 0, 0, 441, 0, 0, 0, 0, 0, 442, 0, 443, 0, 0, 444, 0, 0, 0, 0,
    0, 445, 0, 446, 0, 0, 447, 0, 448, 0, 449, 0, 450, 0, 451, 0, 452, 0, 0, 453, 0, 0, 0, 454, 0, 455, 0, 456, 0, 0, 457, 0,
    0, 458, 0, 0, 0, 459, 460, 0, 0, 0, 461, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 462, 0, 0, 463, 0, 464, 0, 465, 0,
    0, 0, 0, 466, 0, 0, 467, 0, 468, 0, 0, 469, 0, 0, 470, 0, 0, 0, 0, 0, 0, 0, 471, 0, 472, 473, 0, 474, 0, 0, 475, 0,
    476, 0, 0, 477, 0, 478, 0, 0, 479, 0, 480, 0, 481, 482, 483, 0, 0, 484, 0, 485, 0, 0, 486, 0, 487, 0, 0, 0, 488, 0, 489, 0,
    0, 490, 0, 491, 0, 0, 0, 0, 0, 0, 0, 492, 0, 0, 493, 0, 0, 494, 0, 495, 0, 0, 0, 0, 496, 0, 497, 0, 0, 0, 0, 498,
    0, 499, 0, 0, 0, 0, 500, 0, 501, 0, 0, 502, 0, 0, 0, 503, 0, 504, 0, 0, 0, 0, 505, 0, 506, 0, 0, 0, 0, 507, 0, 508,
    0, 509, 0, 0, 0, 510, 0, 511, 0, 0, 0, 512, 0, 513, 0, 0, 514, 0, 515, 0, 0, 0, 0, 0, 0, 0, 516, 0, 0, 517, 0, 0,
    0, 518, 0, 519, 0, 0, 0, 0, 0, 0, 0, 0, 0, 520, 0, 521, 0, 0, 0, 0, 0, 0, 522, 0, 523, 524, 0, 0, 0, 0, 0, 525,
    0, 0, 0, 526, 0, 0, 0, 0, 527, 0, 528, 0, 0, 0, 0, 529, 0, 530, 0, 0, 0, 0, 531, 532, 0, 533, 0, 0, 0, 0, 534, 0,
    0, 0, 535, 536, 0, 537, 0, 0, 0, 0, 538, 0, 539, 0, 0, 0, 0, 540, 0, 0, 0, 541, 0, 0, 0, 542, 0, 0, 0, 0, 0, 543,
    0, 0, 0, 0, 0, 544, 0, 0, 0, 0, 545, 0, 546, 0, 547, 0, 0, 0, 0, 0, 548, 0, 0, 0, 0, 549, 550, 0, 0, 0, 0, 551,
    0, 0, 0, 0, 552, 0, 0, 0, 0, 553, 0, 0, 554, 0, 0, 0, 0, 0, 0, 555, 0, 0, 556, 0, 557, 0, 558, 0, 559, 0, 560, 0,
    0, 0, 561, 0, 0, 562, 0, 563, 0, 564, 0, 0, 0, 565, 0, 0, 566, 0, 567, 0, 568, 0, 0, 0, 569, 0, 0, 570, 571, 0, 0, 0,
    572, 0, 0, 0, 0, 0, 0, 573, 0, 574, 0, 0, 0, 0, 575, 0, 0, 576, 0, 577, 0, 578, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 579, 0, 580, 0, 581, 0, 0, 0, 0, 582, 0, 0, 583, 0, 584, 0, 0, 585, 0, 586, 0, 587, 0, 0, 0, 0, 588, 0, 0, 0,
    589, 0, 0, 590, 0, 0, 0, 0, 0, 0, 0, 0, 0, 591, 592, 0, 593, 0, 0, 0, 0, 0, 0, 0, 594, 595, 0, 0, 0, 0, 596, 0,
    597, 0, 0, 598, 0, 599, 600, 0, 601, 0, 0, 602, 0, 603, 0, 604, 0, 0, 0, 0, 605, 0, 0, 606, 0, 0, 607, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 608, 609, 0, 610, 0, 0, 0, 0, 0, 0, 0, 611, 612, 0, 0, 0, 0, 613, 0, 614, 0, 0, 615, 0, 616, 617, 618, 0,
    619, 0, 620, 0, 0, 621, 0, 622, 0, 623, 0, 0, 0, 0, 624, 0, 0, 0, 625, 0, 0, 626, 627, 0, 0, 0, 628, 0, 0, 629, 0, 0,
    0, 630, 631, 0, 632, 0, 633, 0, 0, 634, 0, 635, 0, 636, 0, 0, 0, 0, 637, 0, 0, 0, 638, 0, 0, 639, 640, 0, 0, 0, 641, 0,
    0, 642, 0, 0, 643, 644, 0, 645, 0, 0, 0, 646, 0, 0, 647, 0, 648, 0, 0, 649, 0, 650, 0, 651, 0, 0, 0, 0, 652, 0, 653, 0,
    0, 0, 0, 654, 0, 655, 0, 0, 0, 0, 656, 0, 657, 0, 0, 0, 0, 658, 0, 659, 0, 0, 0, 0, 660, 0, 661, 0, 0, 0, 0, 662,
    0, 0, 0, 0, 0, 0, 663, 0, 0, 664, 0, 0, 0, 665, 0, 666, 0, 0, 667, 0, 668, 0, 0, 669, 0, 0, 0, 0, 670, 0, 671, 0,
    0, 0, 0, 672, 0, 673, 0, 0, 0, 0, 674, 0, 0, 0, 0, 0, 675, 0, 0, 0, 0, 676, 0, 0, 0, 0, 0, 677, 0, 0, 0, 0,
    678, 0, 679, 0, 0, 680, 0, 681, 0, 682, 0, 0, 683, 0, 684, 0, 685, 0, 0, 0, 0, 686, 0, 687, 0, 0, 0, 0, 688, 0, 689, 0,
    0, 0, 0, 690, 0, 691, 0, 0, 0, 0, 692, 0, 0, 0, 0, 0, 0, 0, 0, 0, 693, 0, 694, 0, 0, 695, 0, 696, 0, 697, 0, 0,
    0, 0, 698, 0, 699, 0, 0, 0, 0, 700, 0, 701, 0, 0, 0, 0, 702, 0, 703, 0, 0, 0, 0, 704, 0, 0, 0, 0, 0, 0, 705, 0,
    0, 706, 0, 0, 0, 707, 0, 708, 0, 709, 0, 0, 710, 0, 0, 0, 711, 0, 712, 0, 0, 0, 0, 713, 0, 714, 0, 0, 0, 0, 715, 0,
    0, 0, 0, 0, 716, 0, 0, 0, 0, 717, 0, 0, 0, 0, 0, 718, 0, 0, 0, 0, 719, 0, 0, 720, 0, 0, 721, 0, 0, 0, 722, 0,
    723, 0, 0, 724, 0, 0, 0, 725, 0, 0, 0, 0, 0, 0, 0, 726, 727, 0, 0, 0, 728, 0, 0, 0, 0, 0, 0, 0, 0, 729, 730, 0,
    731, 0, 732, 0, 0, 0, 733, 0, 0, 0, 0, 0, 734, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 735, 0, 736, 0, 0, 737, 0, 0, 738,
    0, 739, 0, 0, 740, 0, 741, 0, 742, 743, 744, 0, 745, 0, 0, 0, 746, 0, 0, 747, 0, 748, 0, 0, 0, 0, 749, 0, 750, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 751, 0, 752, 0, 0, 0, 0, 753, 0, 754, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 755, 0, 756, 0, 0, 0, 0, 0, 757, 758, 0, 0, 0, 759, 760, 0, 0, 0, 0, 0, 761, 0, 0, 0, 0, 762, 0,
    0, 0, 0, 763, 0, 764, 0, 0, 0, 0, 765, 0, 0, 766, 0, 0, 0, 767, 0, 768, 0, 0, 769, 0, 770, 0, 771, 0, 0, 0, 0, 772,
    0, 773, 0, 0, 0, 0, 774, 0, 775, 0, 0, 0, 0, 776, 0, 777, 0, 0, 0, 0, 778, 0, 0, 0, 0, 779, 0, 0, 780, 0, 0, 0,
    781, 0, 782, 0, 783, 0, 0, 784, 0, 785, 0, 786, 0, 0, 787, 0, 788, 0, 789, 0, 0, 0, 0, 790, 0, 791, 0, 0, 0, 0, 792, 0,
    793, 0, 0, 0, 0, 794, 0, 795, 0, 0, 0, 0, 796, 0, 797, 0, 0, 0, 0, 798, 0, 799, 0, 0, 0, 0, 800, 0, 0, 0, 0, 801,
    0, 802, 0, 0, 0, 0, 803, 0, 0, 804, 0, 0, 0, 805, 0, 806, 0, 807, 0, 0, 808, 0, 809, 0, 810, 0, 0, 0, 0, 811, 0, 812,
    0, 0, 0, 0, 813, 0, 814, 0, 0, 0, 0, 815, 0, 816, 0, 0, 0, 0, 817, 0, 0, 0, 0, 0, 0, 818, 0, 819, 0, 820, 0, 821,
    0, 822, 0, 823, 0, 824, 825, 0, 826, 0, 827, 0, 0, 828, 0, 829, 0, 830, 0, 0, 0, 0, 831, 0, 832, 0, 0, 0, 0, 833, 0, 834,
    0, 0, 0, 0, 835, 0, 836, 0, 0, 0, 0, 837, 0, 0, 0, 0, 0, 0, 838, 0, 839, 0, 840, 0, 841, 0, 842, 0, 843, 0, 844, 845,
    0, 846, 0, 847, 0, 0, 848, 0, 849, 0, 850, 0, 0, 0, 0, 851, 0, 0, 0, 852, 0, 853, 0, 854, 0, 855, 0, 856, 0, 857, 0, 858,
    0, 859, 860, 0, 861, 862, 0, 0, 0, 863, 0, 0, 0, 0, 864, 0, 0, 0, 0, 865, 0, 866, 0, 0, 0, 0, 867, 0, 0, 868, 0, 0,
    0, 869, 0, 870, 0, 0, 871, 0, 872, 0, 873, 0, 0, 0, 0, 874, 0, 875, 0, 0, 0, 0, 876, 0, 877, 0, 0, 0, 0, 878, 0, 879,
    0, 0, 0, 0, 880, 0, 0, 0, 0, 881, 0, 0, 882, 0, 0, 0, 883, 0, 884, 0, 885, 0, 0, 886, 0, 887, 0, 888, 0, 0, 889, 0,
    890, 0, 891, 0, 0, 0, 0, 892, 0, 0, 0, 893, 0, 894, 0, 895, 0, 896, 0, 897, 0, 898, 0, 899, 0, 900, 901, 0, 902, 0, 903, 0,
    0, 904, 0, 905, 0, 906, 0, 0, 907, 0, 908, 0, 909, 0, 0, 0, 0, 910, 0, 911, 0, 0, 0, 0, 912, 0, 913, 0, 0, 0, 0, 914,
    0, 915, 0, 0, 0, 0, 916, 0, 917, 0, 0, 0, 0, 918, 0, 919, 0, 0, 0, 0, 920, 0, 0, 0, 0, 921, 0, 922, 0, 0, 0, 0,
    923, 0, 0, 924, 0, 0, 0, 925, 0, 926, 0, 927, 0, 0, 928, 0, 929, 0, 930, 0, 0, 0, 0, 931, 0, 932, 0, 0, 0, 0, 933, 0,
    934, 0, 0, 0, 0, 935, 0, 936, 0, 0, 0, 0, 937, 0, 0, 0, 0, 0, 0, 0, 938, 0, 939, 0, 940, 0, 941, 0, 942, 0, 943, 0,
    944, 945, 0, 946, 947, 0, 0, 0, 948, 0, 0, 0, 0, 949, 0, 0, 0, 0, 0, 0, 0, 950, 0, 951, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 952, 0, 953, 0, 0, 0, 0, 954, 0, 0, 0, 955, 0, 0, 0, 0, 956, 0, 0, 0, 957, 0, 0, 958, 0, 959, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 960, 0, 961, 0, 0, 0, 962, 0, 0, 963, 0, 964, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 965, 0, 966, 0, 0, 0, 967, 0, 0, 968, 0, 969, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 970, 0, 971, 0, 0, 0,
    0, 0, 0, 0, 972, 0, 973, 0, 0, 0, 0, 0, 0, 0, 974, 0, 975, 0, 0, 0, 0, 0, 0, 0, 976, 0, 977, 0, 0, 0, 0, 978,
    0, 979, 0, 0, 0, 0, 980, 0, 981, 0, 0, 0, 0, 982, 0, 983, 0, 0, 0, 0, 0, 0, 0, 0, 0, 984, 0, 985,
};
void recomp_unit_0166_entry(Runtime &rt, AllegrexContext &ctx, std::uint16_t direct_entry_id, GuestMemory::AotFastView &aot_mem) {
    std::uint32_t jump_target = 0u;
    std::uint32_t local_transfers = 0u;
    std::uint32_t local_pc = ctx.pc;
    std::uint32_t entry_id = direct_entry_id;
LOCAL_DISPATCH:
    {
    if (entry_id == 0u) {
        const std::uint32_t entry_delta = local_pc - 0x08A9C000u;
        entry_id = (entry_delta < 16368u && (entry_delta & 3u) == 0u) ? kEntryIds_recomp_unit_0166[entry_delta >> 2u] : 0u;
    }
    switch (entry_id) {
    case 1u: goto L_08A9C000;
    case 2u: goto L_08A9C02C;
    case 3u: goto L_08A9C034;
    case 4u: goto L_08A9C040;
    case 5u: goto L_08A9C048;
    case 6u: goto L_08A9C050;
    case 7u: goto L_08A9C080;
    case 8u: goto L_08A9C08C;
    case 9u: goto L_08A9C090;
    case 10u: goto L_08A9C094;
    case 11u: goto L_08A9C0B0;
    case 12u: goto L_08A9C13C;
    case 13u: goto L_08A9C14C;
    case 14u: goto L_08A9C15C;
    case 15u: goto L_08A9C164;
    case 16u: goto L_08A9C16C;
    case 17u: goto L_08A9C174;
    case 18u: goto L_08A9C194;
    case 19u: goto L_08A9C19C;
    case 20u: goto L_08A9C1E0;
    case 21u: goto L_08A9C1E4;
    case 22u: goto L_08A9C1F0;
    case 23u: goto L_08A9C204;
    case 24u: goto L_08A9C218;
    case 25u: goto L_08A9C22C;
    case 26u: goto L_08A9C230;
    case 27u: goto L_08A9C238;
    case 28u: goto L_08A9C248;
    case 29u: goto L_08A9C24C;
    case 30u: goto L_08A9C254;
    case 31u: goto L_08A9C26C;
    case 32u: goto L_08A9C278;
    case 33u: goto L_08A9C27C;
    case 34u: goto L_08A9C284;
    case 35u: goto L_08A9C288;
    case 36u: goto L_08A9C290;
    case 37u: goto L_08A9C29C;
    case 38u: goto L_08A9C450;
    case 39u: goto L_08A9C454;
    case 40u: goto L_08A9C45C;
    case 41u: goto L_08A9C468;
    case 42u: goto L_08A9C4B0;
    case 43u: goto L_08A9C4B8;
    case 44u: goto L_08A9C4C4;
    case 45u: goto L_08A9C4E8;
    case 46u: goto L_08A9C4F8;
    case 47u: goto L_08A9C510;
    case 48u: goto L_08A9C524;
    case 49u: goto L_08A9C528;
    case 50u: goto L_08A9C530;
    case 51u: goto L_08A9C548;
    case 52u: goto L_08A9C54C;
    case 53u: goto L_08A9C554;
    case 54u: goto L_08A9C564;
    case 55u: goto L_08A9C568;
    case 56u: goto L_08A9C570;
    case 57u: goto L_08A9C58C;
    case 58u: goto L_08A9C59C;
    case 59u: goto L_08A9C5A0;
    case 60u: goto L_08A9C5A8;
    case 61u: goto L_08A9C5AC;
    case 62u: goto L_08A9C5B4;
    case 63u: goto L_08A9C5C8;
    case 64u: goto L_08A9C714;
    case 65u: goto L_08A9C718;
    case 66u: goto L_08A9C720;
    case 67u: goto L_08A9C734;
    case 68u: goto L_08A9C768;
    case 69u: goto L_08A9C76C;
    case 70u: goto L_08A9C778;
    case 71u: goto L_08A9C78C;
    case 72u: goto L_08A9C7A0;
    case 73u: goto L_08A9C7B4;
    case 74u: goto L_08A9C7B8;
    case 75u: goto L_08A9C7C0;
    case 76u: goto L_08A9C7D0;
    case 77u: goto L_08A9C7D4;
    case 78u: goto L_08A9C7DC;
    case 79u: goto L_08A9C7F4;
    case 80u: goto L_08A9C800;
    case 81u: goto L_08A9C804;
    case 82u: goto L_08A9C80C;
    case 83u: goto L_08A9C810;
    case 84u: goto L_08A9C818;
    case 85u: goto L_08A9C82C;
    case 86u: goto L_08A9C9E0;
    case 87u: goto L_08A9C9E4;
    case 88u: goto L_08A9C9EC;
    case 89u: goto L_08A9C9FC;
    case 90u: goto L_08A9CA44;
    case 91u: goto L_08A9CA48;
    case 92u: goto L_08A9CA64;
    case 93u: goto L_08A9CA70;
    case 94u: goto L_08A9CA88;
    case 95u: goto L_08A9CA9C;
    case 96u: goto L_08A9CAA0;
    case 97u: goto L_08A9CAA8;
    case 98u: goto L_08A9CAC4;
    case 99u: goto L_08A9CAC8;
    case 100u: goto L_08A9CAD0;
    case 101u: goto L_08A9CAE4;
    case 102u: goto L_08A9CAE8;
    case 103u: goto L_08A9CAF0;
    case 104u: goto L_08A9CB10;
    case 105u: goto L_08A9CB1C;
    case 106u: goto L_08A9CB20;
    case 107u: goto L_08A9CB28;
    case 108u: goto L_08A9CB2C;
    case 109u: goto L_08A9CB34;
    case 110u: goto L_08A9CB3C;
    case 111u: goto L_08A9CBAC;
    case 112u: goto L_08A9CBB0;
    case 113u: goto L_08A9CBB8;
    case 114u: goto L_08A9CBC0;
    case 115u: goto L_08A9CBDC;
    case 116u: goto L_08A9CBE0;
    case 117u: goto L_08A9CC00;
    case 118u: goto L_08A9CC50;
    case 119u: goto L_08A9CC74;
    case 120u: goto L_08A9CC7C;
    case 121u: goto L_08A9CCA4;
    case 122u: goto L_08A9CCB4;
    case 123u: goto L_08A9CCBC;
    case 124u: goto L_08A9CCC4;
    case 125u: goto L_08A9CCE0;
    case 126u: goto L_08A9CD58;
    case 127u: goto L_08A9CD9C;
    case 128u: goto L_08A9CDB4;
    case 129u: goto L_08A9CE04;
    case 130u: goto L_08A9CE0C;
    case 131u: goto L_08A9CE24;
    case 132u: goto L_08A9CE9C;
    case 133u: goto L_08A9CEA4;
    case 134u: goto L_08A9CF0C;
    case 135u: goto L_08A9CFE0;
    case 136u: goto L_08A9CFE4;
    case 137u: goto L_08A9CFF4;
    case 138u: goto L_08A9D024;
    case 139u: goto L_08A9D074;
    case 140u: goto L_08A9D07C;
    case 141u: goto L_08A9D090;
    case 142u: goto L_08A9D098;
    case 143u: goto L_08A9D0A4;
    case 144u: goto L_08A9D0B0;
    case 145u: goto L_08A9D0BC;
    case 146u: goto L_08A9D0D8;
    case 147u: goto L_08A9D0F0;
    case 148u: goto L_08A9D0FC;
    case 149u: goto L_08A9D104;
    case 150u: goto L_08A9D120;
    case 151u: goto L_08A9D12C;
    case 152u: goto L_08A9D134;
    case 153u: goto L_08A9D170;
    case 154u: goto L_08A9D17C;
    case 155u: goto L_08A9D184;
    case 156u: goto L_08A9D2D0;
    case 157u: goto L_08A9D2E0;
    case 158u: goto L_08A9D2F4;
    case 159u: goto L_08A9D300;
    case 160u: goto L_08A9D308;
    case 161u: goto L_08A9D328;
    case 162u: goto L_08A9D334;
    case 163u: goto L_08A9D33C;
    case 164u: goto L_08A9D34C;
    case 165u: goto L_08A9D354;
    case 166u: goto L_08A9D398;
    case 167u: goto L_08A9D3A4;
    case 168u: goto L_08A9D3A8;
    case 169u: goto L_08A9D3AC;
    case 170u: goto L_08A9D3B4;
    case 171u: goto L_08A9D3C0;
    case 172u: goto L_08A9D3C4;
    case 173u: goto L_08A9D3F0;
    case 174u: goto L_08A9D418;
    case 175u: goto L_08A9D438;
    case 176u: goto L_08A9D480;
    case 177u: goto L_08A9D490;
    case 178u: goto L_08A9D500;
    case 179u: goto L_08A9D50C;
    case 180u: goto L_08A9D514;
    case 181u: goto L_08A9D520;
    case 182u: goto L_08A9D528;
    case 183u: goto L_08A9D540;
    case 184u: goto L_08A9D548;
    case 185u: goto L_08A9D55C;
    case 186u: goto L_08A9D564;
    case 187u: goto L_08A9D578;
    case 188u: goto L_08A9D580;
    case 189u: goto L_08A9D594;
    case 190u: goto L_08A9D59C;
    case 191u: goto L_08A9D5B0;
    case 192u: goto L_08A9D5C0;
    case 193u: goto L_08A9D5DC;
    case 194u: goto L_08A9D5EC;
    case 195u: goto L_08A9D5FC;
    case 196u: goto L_08A9D61C;
    case 197u: goto L_08A9D64C;
    case 198u: goto L_08A9D65C;
    case 199u: goto L_08A9D664;
    case 200u: goto L_08A9D6A4;
    case 201u: goto L_08A9D6B4;
    case 202u: goto L_08A9D6BC;
    case 203u: goto L_08A9D6C4;
    case 204u: goto L_08A9D704;
    case 205u: goto L_08A9D714;
    case 206u: goto L_08A9D71C;
    case 207u: goto L_08A9D750;
    case 208u: goto L_08A9D758;
    case 209u: goto L_08A9D78C;
    case 210u: goto L_08A9D794;
    case 211u: goto L_08A9D7C8;
    case 212u: goto L_08A9D7D0;
    case 213u: goto L_08A9D7E4;
    case 214u: goto L_08A9D7E8;
    case 215u: goto L_08A9D7F0;
    case 216u: goto L_08A9D804;
    case 217u: goto L_08A9D814;
    case 218u: goto L_08A9D81C;
    case 219u: goto L_08A9D830;
    case 220u: goto L_08A9D838;
    case 221u: goto L_08A9D84C;
    case 222u: goto L_08A9D854;
    case 223u: goto L_08A9D868;
    case 224u: goto L_08A9D870;
    case 225u: goto L_08A9D87C;
    case 226u: goto L_08A9D884;
    case 227u: goto L_08A9D890;
    case 228u: goto L_08A9D898;
    case 229u: goto L_08A9D8A0;
    case 230u: goto L_08A9D8A8;
    case 231u: goto L_08A9D8B4;
    case 232u: goto L_08A9D8BC;
    case 233u: goto L_08A9D8C4;
    case 234u: goto L_08A9D8CC;
    case 235u: goto L_08A9D8D8;
    case 236u: goto L_08A9D8EC;
    case 237u: goto L_08A9D8F4;
    case 238u: goto L_08A9D8FC;
    case 239u: goto L_08A9D90C;
    case 240u: goto L_08A9D914;
    case 241u: goto L_08A9D928;
    case 242u: goto L_08A9D938;
    case 243u: goto L_08A9D93C;
    case 244u: goto L_08A9D944;
    case 245u: goto L_08A9D954;
    case 246u: goto L_08A9D964;
    case 247u: goto L_08A9D96C;
    case 248u: goto L_08A9D980;
    case 249u: goto L_08A9D988;
    case 250u: goto L_08A9D99C;
    case 251u: goto L_08A9D9A4;
    case 252u: goto L_08A9D9B8;
    case 253u: goto L_08A9D9C0;
    case 254u: goto L_08A9D9D0;
    case 255u: goto L_08A9D9D8;
    case 256u: goto L_08A9D9E0;
    case 257u: goto L_08A9D9F0;
    case 258u: goto L_08A9DA18;
    case 259u: goto L_08A9DA34;
    case 260u: goto L_08A9DA3C;
    case 261u: goto L_08A9DA44;
    case 262u: goto L_08A9DA50;
    case 263u: goto L_08A9DA58;
    case 264u: goto L_08A9DA60;
    case 265u: goto L_08A9DA68;
    case 266u: goto L_08A9DA78;
    case 267u: goto L_08A9DA88;
    case 268u: goto L_08A9DA94;
    case 269u: goto L_08A9DAA8;
    case 270u: goto L_08A9DAB0;
    case 271u: goto L_08A9DAB8;
    case 272u: goto L_08A9DAC0;
    case 273u: goto L_08A9DAC8;
    case 274u: goto L_08A9DAD0;
    case 275u: goto L_08A9DAD8;
    case 276u: goto L_08A9DAE0;
    case 277u: goto L_08A9DAF0;
    case 278u: goto L_08A9DB10;
    case 279u: goto L_08A9DB18;
    case 280u: goto L_08A9DB28;
    case 281u: goto L_08A9DB40;
    case 282u: goto L_08A9DB48;
    case 283u: goto L_08A9DB58;
    case 284u: goto L_08A9DB60;
    case 285u: goto L_08A9DB68;
    case 286u: goto L_08A9DB70;
    case 287u: goto L_08A9DB78;
    case 288u: goto L_08A9DB80;
    case 289u: goto L_08A9DB88;
    case 290u: goto L_08A9DBA0;
    case 291u: goto L_08A9DBAC;
    case 292u: goto L_08A9DBB4;
    case 293u: goto L_08A9DBBC;
    case 294u: goto L_08A9DBC4;
    case 295u: goto L_08A9DBCC;
    case 296u: goto L_08A9DBD4;
    case 297u: goto L_08A9DBDC;
    case 298u: goto L_08A9DBF4;
    case 299u: goto L_08A9DC00;
    case 300u: goto L_08A9DC08;
    case 301u: goto L_08A9DC14;
    case 302u: goto L_08A9DC24;
    case 303u: goto L_08A9DC30;
    case 304u: goto L_08A9DC38;
    case 305u: goto L_08A9DC44;
    case 306u: goto L_08A9DC5C;
    case 307u: goto L_08A9DC6C;
    case 308u: goto L_08A9DC74;
    case 309u: goto L_08A9DC80;
    case 310u: goto L_08A9DC88;
    case 311u: goto L_08A9DC90;
    case 312u: goto L_08A9DCA8;
    case 313u: goto L_08A9DCAC;
    case 314u: goto L_08A9DCC0;
    case 315u: goto L_08A9DCD4;
    case 316u: goto L_08A9DCF4;
    case 317u: goto L_08A9DD00;
    case 318u: goto L_08A9DD0C;
    case 319u: goto L_08A9DD18;
    case 320u: goto L_08A9DD20;
    case 321u: goto L_08A9DD28;
    case 322u: goto L_08A9DD30;
    case 323u: goto L_08A9DD40;
    case 324u: goto L_08A9DD48;
    case 325u: goto L_08A9DD58;
    case 326u: goto L_08A9DD60;
    case 327u: goto L_08A9DD68;
    case 328u: goto L_08A9DD7C;
    case 329u: goto L_08A9DD84;
    case 330u: goto L_08A9DDB4;
    case 331u: goto L_08A9DDBC;
    case 332u: goto L_08A9DDCC;
    case 333u: goto L_08A9DDD8;
    case 334u: goto L_08A9DDE0;
    case 335u: goto L_08A9DDF0;
    case 336u: goto L_08A9DE10;
    case 337u: goto L_08A9DE18;
    case 338u: goto L_08A9DE28;
    case 339u: goto L_08A9DE48;
    case 340u: goto L_08A9DE50;
    case 341u: goto L_08A9DE60;
    case 342u: goto L_08A9DE80;
    case 343u: goto L_08A9DE88;
    case 344u: goto L_08A9DE98;
    case 345u: goto L_08A9DEB8;
    case 346u: goto L_08A9DEC0;
    case 347u: goto L_08A9DED0;
    case 348u: goto L_08A9DED8;
    case 349u: goto L_08A9DEE4;
    case 350u: goto L_08A9DEEC;
    case 351u: goto L_08A9DEF4;
    case 352u: goto L_08A9DF0C;
    case 353u: goto L_08A9DF14;
    case 354u: goto L_08A9DF20;
    case 355u: goto L_08A9DF28;
    case 356u: goto L_08A9DF38;
    case 357u: goto L_08A9DF40;
    case 358u: goto L_08A9DF4C;
    case 359u: goto L_08A9DF54;
    case 360u: goto L_08A9DF5C;
    case 361u: goto L_08A9DF6C;
    case 362u: goto L_08A9DF74;
    case 363u: goto L_08A9DF7C;
    case 364u: goto L_08A9DF88;
    case 365u: goto L_08A9DF90;
    case 366u: goto L_08A9DF98;
    case 367u: goto L_08A9DFA0;
    case 368u: goto L_08A9DFA8;
    case 369u: goto L_08A9DFBC;
    case 370u: goto L_08A9DFC4;
    case 371u: goto L_08A9DFD0;
    case 372u: goto L_08A9DFD8;
    case 373u: goto L_08A9DFE0;
    case 374u: goto L_08A9DFEC;
    case 375u: goto L_08A9DFF8;
    case 376u: goto L_08A9E004;
    case 377u: goto L_08A9E00C;
    case 378u: goto L_08A9E014;
    case 379u: goto L_08A9E020;
    case 380u: goto L_08A9E028;
    case 381u: goto L_08A9E030;
    case 382u: goto L_08A9E038;
    case 383u: goto L_08A9E040;
    case 384u: goto L_08A9E058;
    case 385u: goto L_08A9E060;
    case 386u: goto L_08A9E06C;
    case 387u: goto L_08A9E084;
    case 388u: goto L_08A9E08C;
    case 389u: goto L_08A9E098;
    case 390u: goto L_08A9E0A0;
    case 391u: goto L_08A9E0A8;
    case 392u: goto L_08A9E0B0;
    case 393u: goto L_08A9E0B8;
    case 394u: goto L_08A9E0C0;
    case 395u: goto L_08A9E0CC;
    case 396u: goto L_08A9E0DC;
    case 397u: goto L_08A9E0E4;
    case 398u: goto L_08A9E0EC;
    case 399u: goto L_08A9E0F8;
    case 400u: goto L_08A9E10C;
    case 401u: goto L_08A9E128;
    case 402u: goto L_08A9E12C;
    case 403u: goto L_08A9E13C;
    case 404u: goto L_08A9E15C;
    case 405u: goto L_08A9E168;
    case 406u: goto L_08A9E174;
    case 407u: goto L_08A9E17C;
    case 408u: goto L_08A9E184;
    case 409u: goto L_08A9E18C;
    case 410u: goto L_08A9E194;
    case 411u: goto L_08A9E1A8;
    case 412u: goto L_08A9E1B0;
    case 413u: goto L_08A9E1E0;
    case 414u: goto L_08A9E1E8;
    case 415u: goto L_08A9E1F8;
    case 416u: goto L_08A9E204;
    case 417u: goto L_08A9E20C;
    case 418u: goto L_08A9E21C;
    case 419u: goto L_08A9E23C;
    case 420u: goto L_08A9E244;
    case 421u: goto L_08A9E254;
    case 422u: goto L_08A9E274;
    case 423u: goto L_08A9E27C;
    case 424u: goto L_08A9E288;
    case 425u: goto L_08A9E290;
    case 426u: goto L_08A9E298;
    case 427u: goto L_08A9E2B0;
    case 428u: goto L_08A9E2B8;
    case 429u: goto L_08A9E2C4;
    case 430u: goto L_08A9E2CC;
    case 431u: goto L_08A9E2DC;
    case 432u: goto L_08A9E2E4;
    case 433u: goto L_08A9E2F0;
    case 434u: goto L_08A9E2F8;
    case 435u: goto L_08A9E300;
    case 436u: goto L_08A9E30C;
    case 437u: goto L_08A9E318;
    case 438u: goto L_08A9E324;
    case 439u: goto L_08A9E32C;
    case 440u: goto L_08A9E334;
    case 441u: goto L_08A9E340;
    case 442u: goto L_08A9E358;
    case 443u: goto L_08A9E360;
    case 444u: goto L_08A9E36C;
    case 445u: goto L_08A9E384;
    case 446u: goto L_08A9E38C;
    case 447u: goto L_08A9E398;
    case 448u: goto L_08A9E3A0;
    case 449u: goto L_08A9E3A8;
    case 450u: goto L_08A9E3B0;
    case 451u: goto L_08A9E3B8;
    case 452u: goto L_08A9E3C0;
    case 453u: goto L_08A9E3CC;
    case 454u: goto L_08A9E3DC;
    case 455u: goto L_08A9E3E4;
    case 456u: goto L_08A9E3EC;
    case 457u: goto L_08A9E3F8;
    case 458u: goto L_08A9E404;
    case 459u: goto L_08A9E414;
    case 460u: goto L_08A9E418;
    case 461u: goto L_08A9E428;
    case 462u: goto L_08A9E45C;
    case 463u: goto L_08A9E468;
    case 464u: goto L_08A9E470;
    case 465u: goto L_08A9E478;
    case 466u: goto L_08A9E48C;
    case 467u: goto L_08A9E498;
    case 468u: goto L_08A9E4A0;
    case 469u: goto L_08A9E4AC;
    case 470u: goto L_08A9E4B8;
    case 471u: goto L_08A9E4D8;
    case 472u: goto L_08A9E4E0;
    case 473u: goto L_08A9E4E4;
    case 474u: goto L_08A9E4EC;
    case 475u: goto L_08A9E4F8;
    case 476u: goto L_08A9E500;
    case 477u: goto L_08A9E50C;
    case 478u: goto L_08A9E514;
    case 479u: goto L_08A9E520;
    case 480u: goto L_08A9E528;
    case 481u: goto L_08A9E530;
    case 482u: goto L_08A9E534;
    case 483u: goto L_08A9E538;
    case 484u: goto L_08A9E544;
    case 485u: goto L_08A9E54C;
    case 486u: goto L_08A9E558;
    case 487u: goto L_08A9E560;
    case 488u: goto L_08A9E570;
    case 489u: goto L_08A9E578;
    case 490u: goto L_08A9E584;
    case 491u: goto L_08A9E58C;
    case 492u: goto L_08A9E5AC;
    case 493u: goto L_08A9E5B8;
    case 494u: goto L_08A9E5C4;
    case 495u: goto L_08A9E5CC;
    case 496u: goto L_08A9E5E0;
    case 497u: goto L_08A9E5E8;
    case 498u: goto L_08A9E5FC;
    case 499u: goto L_08A9E604;
    case 500u: goto L_08A9E618;
    case 501u: goto L_08A9E620;
    case 502u: goto L_08A9E62C;
    case 503u: goto L_08A9E63C;
    case 504u: goto L_08A9E644;
    case 505u: goto L_08A9E658;
    case 506u: goto L_08A9E660;
    case 507u: goto L_08A9E674;
    case 508u: goto L_08A9E67C;
    case 509u: goto L_08A9E684;
    case 510u: goto L_08A9E694;
    case 511u: goto L_08A9E69C;
    case 512u: goto L_08A9E6AC;
    case 513u: goto L_08A9E6B4;
    case 514u: goto L_08A9E6C0;
    case 515u: goto L_08A9E6C8;
    case 516u: goto L_08A9E6E8;
    case 517u: goto L_08A9E6F4;
    case 518u: goto L_08A9E704;
    case 519u: goto L_08A9E70C;
    case 520u: goto L_08A9E734;
    case 521u: goto L_08A9E73C;
    case 522u: goto L_08A9E758;
    case 523u: goto L_08A9E760;
    case 524u: goto L_08A9E764;
    case 525u: goto L_08A9E77C;
    case 526u: goto L_08A9E78C;
    case 527u: goto L_08A9E7A0;
    case 528u: goto L_08A9E7A8;
    case 529u: goto L_08A9E7BC;
    case 530u: goto L_08A9E7C4;
    case 531u: goto L_08A9E7D8;
    case 532u: goto L_08A9E7DC;
    case 533u: goto L_08A9E7E4;
    case 534u: goto L_08A9E7F8;
    case 535u: goto L_08A9E808;
    case 536u: goto L_08A9E80C;
    case 537u: goto L_08A9E814;
    case 538u: goto L_08A9E828;
    case 539u: goto L_08A9E830;
    case 540u: goto L_08A9E844;
    case 541u: goto L_08A9E854;
    case 542u: goto L_08A9E864;
    case 543u: goto L_08A9E87C;
    case 544u: goto L_08A9E894;
    case 545u: goto L_08A9E8A8;
    case 546u: goto L_08A9E8B0;
    case 547u: goto L_08A9E8B8;
    case 548u: goto L_08A9E8D0;
    case 549u: goto L_08A9E8E4;
    case 550u: goto L_08A9E8E8;
    case 551u: goto L_08A9E8FC;
    case 552u: goto L_08A9E910;
    case 553u: goto L_08A9E924;
    case 554u: goto L_08A9E930;
    case 555u: goto L_08A9E94C;
    case 556u: goto L_08A9E958;
    case 557u: goto L_08A9E960;
    case 558u: goto L_08A9E968;
    case 559u: goto L_08A9E970;
    case 560u: goto L_08A9E978;
    case 561u: goto L_08A9E988;
    case 562u: goto L_08A9E994;
    case 563u: goto L_08A9E99C;
    case 564u: goto L_08A9E9A4;
    case 565u: goto L_08A9E9B4;
    case 566u: goto L_08A9E9C0;
    case 567u: goto L_08A9E9C8;
    case 568u: goto L_08A9E9D0;
    case 569u: goto L_08A9E9E0;
    case 570u: goto L_08A9E9EC;
    case 571u: goto L_08A9E9F0;
    case 572u: goto L_08A9EA00;
    case 573u: goto L_08A9EA1C;
    case 574u: goto L_08A9EA24;
    case 575u: goto L_08A9EA38;
    case 576u: goto L_08A9EA44;
    case 577u: goto L_08A9EA4C;
    case 578u: goto L_08A9EA54;
    case 579u: goto L_08A9EA88;
    case 580u: goto L_08A9EA90;
    case 581u: goto L_08A9EA98;
    case 582u: goto L_08A9EAAC;
    case 583u: goto L_08A9EAB8;
    case 584u: goto L_08A9EAC0;
    case 585u: goto L_08A9EACC;
    case 586u: goto L_08A9EAD4;
    case 587u: goto L_08A9EADC;
    case 588u: goto L_08A9EAF0;
    case 589u: goto L_08A9EB00;
    case 590u: goto L_08A9EB0C;
    case 591u: goto L_08A9EB34;
    case 592u: goto L_08A9EB38;
    case 593u: goto L_08A9EB40;
    case 594u: goto L_08A9EB60;
    case 595u: goto L_08A9EB64;
    case 596u: goto L_08A9EB78;
    case 597u: goto L_08A9EB80;
    case 598u: goto L_08A9EB8C;
    case 599u: goto L_08A9EB94;
    case 600u: goto L_08A9EB98;
    case 601u: goto L_08A9EBA0;
    case 602u: goto L_08A9EBAC;
    case 603u: goto L_08A9EBB4;
    case 604u: goto L_08A9EBBC;
    case 605u: goto L_08A9EBD0;
    case 606u: goto L_08A9EBDC;
    case 607u: goto L_08A9EBE8;
    case 608u: goto L_08A9EC10;
    case 609u: goto L_08A9EC14;
    case 610u: goto L_08A9EC1C;
    case 611u: goto L_08A9EC3C;
    case 612u: goto L_08A9EC40;
    case 613u: goto L_08A9EC54;
    case 614u: goto L_08A9EC5C;
    case 615u: goto L_08A9EC68;
    case 616u: goto L_08A9EC70;
    case 617u: goto L_08A9EC74;
    case 618u: goto L_08A9EC78;
    case 619u: goto L_08A9EC80;
    case 620u: goto L_08A9EC88;
    case 621u: goto L_08A9EC94;
    case 622u: goto L_08A9EC9C;
    case 623u: goto L_08A9ECA4;
    case 624u: goto L_08A9ECB8;
    case 625u: goto L_08A9ECC8;
    case 626u: goto L_08A9ECD4;
    case 627u: goto L_08A9ECD8;
    case 628u: goto L_08A9ECE8;
    case 629u: goto L_08A9ECF4;
    case 630u: goto L_08A9ED04;
    case 631u: goto L_08A9ED08;
    case 632u: goto L_08A9ED10;
    case 633u: goto L_08A9ED18;
    case 634u: goto L_08A9ED24;
    case 635u: goto L_08A9ED2C;
    case 636u: goto L_08A9ED34;
    case 637u: goto L_08A9ED48;
    case 638u: goto L_08A9ED58;
    case 639u: goto L_08A9ED64;
    case 640u: goto L_08A9ED68;
    case 641u: goto L_08A9ED78;
    case 642u: goto L_08A9ED84;
    case 643u: goto L_08A9ED90;
    case 644u: goto L_08A9ED94;
    case 645u: goto L_08A9ED9C;
    case 646u: goto L_08A9EDAC;
    case 647u: goto L_08A9EDB8;
    case 648u: goto L_08A9EDC0;
    case 649u: goto L_08A9EDCC;
    case 650u: goto L_08A9EDD4;
    case 651u: goto L_08A9EDDC;
    case 652u: goto L_08A9EDF0;
    case 653u: goto L_08A9EDF8;
    case 654u: goto L_08A9EE0C;
    case 655u: goto L_08A9EE14;
    case 656u: goto L_08A9EE28;
    case 657u: goto L_08A9EE30;
    case 658u: goto L_08A9EE44;
    case 659u: goto L_08A9EE4C;
    case 660u: goto L_08A9EE60;
    case 661u: goto L_08A9EE68;
    case 662u: goto L_08A9EE7C;
    case 663u: goto L_08A9EE98;
    case 664u: goto L_08A9EEA4;
    case 665u: goto L_08A9EEB4;
    case 666u: goto L_08A9EEBC;
    case 667u: goto L_08A9EEC8;
    case 668u: goto L_08A9EED0;
    case 669u: goto L_08A9EEDC;
    case 670u: goto L_08A9EEF0;
    case 671u: goto L_08A9EEF8;
    case 672u: goto L_08A9EF0C;
    case 673u: goto L_08A9EF14;
    case 674u: goto L_08A9EF28;
    case 675u: goto L_08A9EF40;
    case 676u: goto L_08A9EF54;
    case 677u: goto L_08A9EF6C;
    case 678u: goto L_08A9EF80;
    case 679u: goto L_08A9EF88;
    case 680u: goto L_08A9EF94;
    case 681u: goto L_08A9EF9C;
    case 682u: goto L_08A9EFA4;
    case 683u: goto L_08A9EFB0;
    case 684u: goto L_08A9EFB8;
    case 685u: goto L_08A9EFC0;
    case 686u: goto L_08A9EFD4;
    case 687u: goto L_08A9EFDC;
    case 688u: goto L_08A9EFF0;
    case 689u: goto L_08A9EFF8;
    case 690u: goto L_08A9F00C;
    case 691u: goto L_08A9F014;
    case 692u: goto L_08A9F028;
    case 693u: goto L_08A9F050;
    case 694u: goto L_08A9F058;
    case 695u: goto L_08A9F064;
    case 696u: goto L_08A9F06C;
    case 697u: goto L_08A9F074;
    case 698u: goto L_08A9F088;
    case 699u: goto L_08A9F090;
    case 700u: goto L_08A9F0A4;
    case 701u: goto L_08A9F0AC;
    case 702u: goto L_08A9F0C0;
    case 703u: goto L_08A9F0C8;
    case 704u: goto L_08A9F0DC;
    case 705u: goto L_08A9F0F8;
    case 706u: goto L_08A9F104;
    case 707u: goto L_08A9F114;
    case 708u: goto L_08A9F11C;
    case 709u: goto L_08A9F124;
    case 710u: goto L_08A9F130;
    case 711u: goto L_08A9F140;
    case 712u: goto L_08A9F148;
    case 713u: goto L_08A9F15C;
    case 714u: goto L_08A9F164;
    case 715u: goto L_08A9F178;
    case 716u: goto L_08A9F190;
    case 717u: goto L_08A9F1A4;
    case 718u: goto L_08A9F1BC;
    case 719u: goto L_08A9F1D0;
    case 720u: goto L_08A9F1DC;
    case 721u: goto L_08A9F1E8;
    case 722u: goto L_08A9F1F8;
    case 723u: goto L_08A9F200;
    case 724u: goto L_08A9F20C;
    case 725u: goto L_08A9F21C;
    case 726u: goto L_08A9F23C;
    case 727u: goto L_08A9F240;
    case 728u: goto L_08A9F250;
    case 729u: goto L_08A9F274;
    case 730u: goto L_08A9F278;
    case 731u: goto L_08A9F280;
    case 732u: goto L_08A9F288;
    case 733u: goto L_08A9F298;
    case 734u: goto L_08A9F2B0;
    case 735u: goto L_08A9F2DC;
    case 736u: goto L_08A9F2E4;
    case 737u: goto L_08A9F2F0;
    case 738u: goto L_08A9F2FC;
    case 739u: goto L_08A9F304;
    case 740u: goto L_08A9F310;
    case 741u: goto L_08A9F318;
    case 742u: goto L_08A9F320;
    case 743u: goto L_08A9F324;
    case 744u: goto L_08A9F328;
    case 745u: goto L_08A9F330;
    case 746u: goto L_08A9F340;
    case 747u: goto L_08A9F34C;
    case 748u: goto L_08A9F354;
    case 749u: goto L_08A9F368;
    case 750u: goto L_08A9F370;
    case 751u: goto L_08A9F3B0;
    case 752u: goto L_08A9F3B8;
    case 753u: goto L_08A9F3CC;
    case 754u: goto L_08A9F3D4;
    case 755u: goto L_08A9F414;
    case 756u: goto L_08A9F41C;
    case 757u: goto L_08A9F434;
    case 758u: goto L_08A9F438;
    case 759u: goto L_08A9F448;
    case 760u: goto L_08A9F44C;
    case 761u: goto L_08A9F464;
    case 762u: goto L_08A9F478;
    case 763u: goto L_08A9F48C;
    case 764u: goto L_08A9F494;
    case 765u: goto L_08A9F4A8;
    case 766u: goto L_08A9F4B4;
    case 767u: goto L_08A9F4C4;
    case 768u: goto L_08A9F4CC;
    case 769u: goto L_08A9F4D8;
    case 770u: goto L_08A9F4E0;
    case 771u: goto L_08A9F4E8;
    case 772u: goto L_08A9F4FC;
    case 773u: goto L_08A9F504;
    case 774u: goto L_08A9F518;
    case 775u: goto L_08A9F520;
    case 776u: goto L_08A9F534;
    case 777u: goto L_08A9F53C;
    case 778u: goto L_08A9F550;
    case 779u: goto L_08A9F564;
    case 780u: goto L_08A9F570;
    case 781u: goto L_08A9F580;
    case 782u: goto L_08A9F588;
    case 783u: goto L_08A9F590;
    case 784u: goto L_08A9F59C;
    case 785u: goto L_08A9F5A4;
    case 786u: goto L_08A9F5AC;
    case 787u: goto L_08A9F5B8;
    case 788u: goto L_08A9F5C0;
    case 789u: goto L_08A9F5C8;
    case 790u: goto L_08A9F5DC;
    case 791u: goto L_08A9F5E4;
    case 792u: goto L_08A9F5F8;
    case 793u: goto L_08A9F600;
    case 794u: goto L_08A9F614;
    case 795u: goto L_08A9F61C;
    case 796u: goto L_08A9F630;
    case 797u: goto L_08A9F638;
    case 798u: goto L_08A9F64C;
    case 799u: goto L_08A9F654;
    case 800u: goto L_08A9F668;
    case 801u: goto L_08A9F67C;
    case 802u: goto L_08A9F684;
    case 803u: goto L_08A9F698;
    case 804u: goto L_08A9F6A4;
    case 805u: goto L_08A9F6B4;
    case 806u: goto L_08A9F6BC;
    case 807u: goto L_08A9F6C4;
    case 808u: goto L_08A9F6D0;
    case 809u: goto L_08A9F6D8;
    case 810u: goto L_08A9F6E0;
    case 811u: goto L_08A9F6F4;
    case 812u: goto L_08A9F6FC;
    case 813u: goto L_08A9F710;
    case 814u: goto L_08A9F718;
    case 815u: goto L_08A9F72C;
    case 816u: goto L_08A9F734;
    case 817u: goto L_08A9F748;
    case 818u: goto L_08A9F764;
    case 819u: goto L_08A9F76C;
    case 820u: goto L_08A9F774;
    case 821u: goto L_08A9F77C;
    case 822u: goto L_08A9F784;
    case 823u: goto L_08A9F78C;
    case 824u: goto L_08A9F794;
    case 825u: goto L_08A9F798;
    case 826u: goto L_08A9F7A0;
    case 827u: goto L_08A9F7A8;
    case 828u: goto L_08A9F7B4;
    case 829u: goto L_08A9F7BC;
    case 830u: goto L_08A9F7C4;
    case 831u: goto L_08A9F7D8;
    case 832u: goto L_08A9F7E0;
    case 833u: goto L_08A9F7F4;
    case 834u: goto L_08A9F7FC;
    case 835u: goto L_08A9F810;
    case 836u: goto L_08A9F818;
    case 837u: goto L_08A9F82C;
    case 838u: goto L_08A9F848;
    case 839u: goto L_08A9F850;
    case 840u: goto L_08A9F858;
    case 841u: goto L_08A9F860;
    case 842u: goto L_08A9F868;
    case 843u: goto L_08A9F870;
    case 844u: goto L_08A9F878;
    case 845u: goto L_08A9F87C;
    case 846u: goto L_08A9F884;
    case 847u: goto L_08A9F88C;
    case 848u: goto L_08A9F898;
    case 849u: goto L_08A9F8A0;
    case 850u: goto L_08A9F8A8;
    case 851u: goto L_08A9F8BC;
    case 852u: goto L_08A9F8CC;
    case 853u: goto L_08A9F8D4;
    case 854u: goto L_08A9F8DC;
    case 855u: goto L_08A9F8E4;
    case 856u: goto L_08A9F8EC;
    case 857u: goto L_08A9F8F4;
    case 858u: goto L_08A9F8FC;
    case 859u: goto L_08A9F904;
    case 860u: goto L_08A9F908;
    case 861u: goto L_08A9F910;
    case 862u: goto L_08A9F914;
    case 863u: goto L_08A9F924;
    case 864u: goto L_08A9F938;
    case 865u: goto L_08A9F94C;
    case 866u: goto L_08A9F954;
    case 867u: goto L_08A9F968;
    case 868u: goto L_08A9F974;
    case 869u: goto L_08A9F984;
    case 870u: goto L_08A9F98C;
    case 871u: goto L_08A9F998;
    case 872u: goto L_08A9F9A0;
    case 873u: goto L_08A9F9A8;
    case 874u: goto L_08A9F9BC;
    case 875u: goto L_08A9F9C4;
    case 876u: goto L_08A9F9D8;
    case 877u: goto L_08A9F9E0;
    case 878u: goto L_08A9F9F4;
    case 879u: goto L_08A9F9FC;
    case 880u: goto L_08A9FA10;
    case 881u: goto L_08A9FA24;
    case 882u: goto L_08A9FA30;
    case 883u: goto L_08A9FA40;
    case 884u: goto L_08A9FA48;
    case 885u: goto L_08A9FA50;
    case 886u: goto L_08A9FA5C;
    case 887u: goto L_08A9FA64;
    case 888u: goto L_08A9FA6C;
    case 889u: goto L_08A9FA78;
    case 890u: goto L_08A9FA80;
    case 891u: goto L_08A9FA88;
    case 892u: goto L_08A9FA9C;
    case 893u: goto L_08A9FAAC;
    case 894u: goto L_08A9FAB4;
    case 895u: goto L_08A9FABC;
    case 896u: goto L_08A9FAC4;
    case 897u: goto L_08A9FACC;
    case 898u: goto L_08A9FAD4;
    case 899u: goto L_08A9FADC;
    case 900u: goto L_08A9FAE4;
    case 901u: goto L_08A9FAE8;
    case 902u: goto L_08A9FAF0;
    case 903u: goto L_08A9FAF8;
    case 904u: goto L_08A9FB04;
    case 905u: goto L_08A9FB0C;
    case 906u: goto L_08A9FB14;
    case 907u: goto L_08A9FB20;
    case 908u: goto L_08A9FB28;
    case 909u: goto L_08A9FB30;
    case 910u: goto L_08A9FB44;
    case 911u: goto L_08A9FB4C;
    case 912u: goto L_08A9FB60;
    case 913u: goto L_08A9FB68;
    case 914u: goto L_08A9FB7C;
    case 915u: goto L_08A9FB84;
    case 916u: goto L_08A9FB98;
    case 917u: goto L_08A9FBA0;
    case 918u: goto L_08A9FBB4;
    case 919u: goto L_08A9FBBC;
    case 920u: goto L_08A9FBD0;
    case 921u: goto L_08A9FBE4;
    case 922u: goto L_08A9FBEC;
    case 923u: goto L_08A9FC00;
    case 924u: goto L_08A9FC0C;
    case 925u: goto L_08A9FC1C;
    case 926u: goto L_08A9FC24;
    case 927u: goto L_08A9FC2C;
    case 928u: goto L_08A9FC38;
    case 929u: goto L_08A9FC40;
    case 930u: goto L_08A9FC48;
    case 931u: goto L_08A9FC5C;
    case 932u: goto L_08A9FC64;
    case 933u: goto L_08A9FC78;
    case 934u: goto L_08A9FC80;
    case 935u: goto L_08A9FC94;
    case 936u: goto L_08A9FC9C;
    case 937u: goto L_08A9FCB0;
    case 938u: goto L_08A9FCD0;
    case 939u: goto L_08A9FCD8;
    case 940u: goto L_08A9FCE0;
    case 941u: goto L_08A9FCE8;
    case 942u: goto L_08A9FCF0;
    case 943u: goto L_08A9FCF8;
    case 944u: goto L_08A9FD00;
    case 945u: goto L_08A9FD04;
    case 946u: goto L_08A9FD0C;
    case 947u: goto L_08A9FD10;
    case 948u: goto L_08A9FD20;
    case 949u: goto L_08A9FD34;
    case 950u: goto L_08A9FD54;
    case 951u: goto L_08A9FD5C;
    case 952u: goto L_08A9FD84;
    case 953u: goto L_08A9FD8C;
    case 954u: goto L_08A9FDA0;
    case 955u: goto L_08A9FDB0;
    case 956u: goto L_08A9FDC4;
    case 957u: goto L_08A9FDD4;
    case 958u: goto L_08A9FDE0;
    case 959u: goto L_08A9FDE8;
    case 960u: goto L_08A9FE20;
    case 961u: goto L_08A9FE28;
    case 962u: goto L_08A9FE38;
    case 963u: goto L_08A9FE44;
    case 964u: goto L_08A9FE4C;
    case 965u: goto L_08A9FE84;
    case 966u: goto L_08A9FE8C;
    case 967u: goto L_08A9FE9C;
    case 968u: goto L_08A9FEA8;
    case 969u: goto L_08A9FEB0;
    case 970u: goto L_08A9FEE8;
    case 971u: goto L_08A9FEF0;
    case 972u: goto L_08A9FF10;
    case 973u: goto L_08A9FF18;
    case 974u: goto L_08A9FF38;
    case 975u: goto L_08A9FF40;
    case 976u: goto L_08A9FF60;
    case 977u: goto L_08A9FF68;
    case 978u: goto L_08A9FF7C;
    case 979u: goto L_08A9FF84;
    case 980u: goto L_08A9FF98;
    case 981u: goto L_08A9FFA0;
    case 982u: goto L_08A9FFB4;
    case 983u: goto L_08A9FFBC;
    case 984u: goto L_08A9FFE4;
    case 985u: goto L_08A9FFEC;
    default:
        if (local_transfers == 0u) rt.unsupported(ctx.pc, 0u, "invalid internal function entry");
        else ctx.pc = local_pc;
        return;
    }
    }
L_08A9C000:
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(16), ctx.gpr[17]);
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(12), ctx.gpr[16]);
    ctx.set_gpr(16, ctx.gpr[5] << 2u);
    ctx.set_gpr(19, ctx.gpr[4] + 0u);
    ctx.set_gpr(3, ctx.gpr[16] + ctx.gpr[19]);
    ctx.set_gpr(2, 1u << 16u);
    ctx.set_gpr(2, ctx.gpr[3] + ctx.gpr[2]);
    ctx.set_gpr(2, rt.memory().aot_load32(ctx.gpr[2] + static_cast<std::uint32_t>(100)));
    ctx.set_gpr(18, ctx.gpr[6] + 0u);
    { const bool branch_taken = ctx.gpr[2] != 0u;
    ctx.set_gpr(17, 0u + 0u);
      if (branch_taken) {
          goto L_08A9C034;
      }
      goto L_08A9C02C;
    }
L_08A9C02C:
    { const bool branch_taken = 0u == 0u;
    ctx.set_gpr(2, 0u + 0u);
      if (branch_taken) {
          goto L_08A9C094;
      }
      goto L_08A9C034;
    }
L_08A9C034:
    ctx.set_gpr(2, static_cast<std::int32_t>(ctx.gpr[18]) < static_cast<std::int32_t>(ctx.gpr[2]) ? 1u : 0u);
    if (ctx.gpr[2] != 0u) {
    ctx.set_gpr(5, rt.memory().aot_load32(ctx.gpr[19] + static_cast<std::uint32_t>(12)));
        goto L_08A9C048;
    }
    goto L_08A9C040;
L_08A9C040:
    { const bool branch_taken = 0u == 0u;
    ctx.set_gpr(2, 0u + 0u);
      if (branch_taken) {
          goto L_08A9C094;
      }
      goto L_08A9C048;
    }
L_08A9C048:
    ctx.set_gpr(31, 0x08A9C050u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0164_entry, 164u, 150u, 0x08A94B5Cu>(ctx, &aot_mem) && ctx.pc == 0x08A9C050u) goto L_08A9C050;
    return;
L_08A9C050:
    ctx.set_gpr(6, rt.memory().aot_load32(ctx.gpr[19] + static_cast<std::uint32_t>(20)));
    ctx.set_gpr(4, ctx.gpr[16] + ctx.gpr[19]);
    ctx.set_gpr(3, 1u << 16u);
    ctx.set_gpr(3, ctx.gpr[4] + ctx.gpr[3]);
    ctx.set_gpr(6, ctx.gpr[6] + ctx.gpr[2]);
    ctx.set_gpr(2, rt.memory().aot_load32(ctx.gpr[3] + static_cast<std::uint32_t>(76)));
    ctx.set_gpr(5, ctx.gpr[18] << 2u);
    ctx.set_gpr(4, ctx.gpr[2] + ctx.gpr[5]);
    ctx.set_gpr(2, rt.memory().aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(0)));
    ctx.set_gpr(3, 0u + static_cast<std::uint32_t>(1));
    if (ctx.gpr[2] != ctx.gpr[3]) {
    ctx.set_gpr(2, ctx.gpr[17] + 0u);
        goto L_08A9C094;
    }
    goto L_08A9C080;
L_08A9C080:
    ctx.set_gpr(2, rt.memory().aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(4)));
    { const bool branch_taken = ctx.gpr[6] != ctx.gpr[2];
    // nop
      if (branch_taken) {
          goto L_08A9C090;
      }
      goto L_08A9C08C;
    }
L_08A9C08C:
    ctx.set_gpr(17, ctx.gpr[3] & 255u);
    goto L_08A9C090;
L_08A9C090:
    ctx.set_gpr(2, ctx.gpr[17] + 0u);
    goto L_08A9C094;
L_08A9C094:
    ctx.set_gpr(31, rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(28)));
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
L_08A9C0B0:
    ctx.set_gpr(29, ctx.gpr[29] + static_cast<std::uint32_t>(-64));
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(28), ctx.gpr[31]);
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(24), ctx.gpr[20]);
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(20), ctx.gpr[19]);
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(16), ctx.gpr[18]);
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(12), ctx.gpr[17]);
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(8), ctx.gpr[16]);
    ctx.set_gpr(2, 2230u << 16u);
    ctx.fpr[1] = std::bit_cast<float>(rt.memory().aot_load32(ctx.gpr[2] + static_cast<std::uint32_t>(-17652)));
    ctx.set_gpr(17, ctx.gpr[5] + 0u);
    ctx.set_gpr(18, ctx.gpr[4] + 0u);
    ctx.set_gpr(2, 2230u << 16u);
    ctx.fpr[0] = std::bit_cast<float>(rt.memory().aot_load32(ctx.gpr[2] + static_cast<std::uint32_t>(-17648)));
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(40), std::bit_cast<std::uint32_t>(ctx.fpr[1]));
    ctx.set_gpr(2, 2230u << 16u);
    ctx.fpr[1] = std::bit_cast<float>(rt.memory().aot_load32(ctx.gpr[2] + static_cast<std::uint32_t>(-17644)));
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(44), std::bit_cast<std::uint32_t>(ctx.fpr[0]));
    ctx.set_gpr(2, 2230u << 16u);
    ctx.fpr[0] = std::bit_cast<float>(rt.memory().aot_load32(ctx.gpr[2] + static_cast<std::uint32_t>(-17640)));
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(48), std::bit_cast<std::uint32_t>(ctx.fpr[1]));
    ctx.set_gpr(2, 2230u << 16u);
    ctx.fpr[1] = std::bit_cast<float>(rt.memory().aot_load32(ctx.gpr[2] + static_cast<std::uint32_t>(-17636)));
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(52), std::bit_cast<std::uint32_t>(ctx.fpr[0]));
    ctx.set_gpr(2, 2230u << 16u);
    ctx.fpr[0] = std::bit_cast<float>(rt.memory().aot_load32(ctx.gpr[2] + static_cast<std::uint32_t>(-17632)));
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(56), std::bit_cast<std::uint32_t>(ctx.fpr[1]));
    ctx.set_gpr(2, 1u << 16u);
    ctx.set_gpr(2, ctx.gpr[4] + ctx.gpr[2]);
    ctx.set_gpr(3, rt.memory().aot_load32(ctx.gpr[2] + static_cast<std::uint32_t>(144)));
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(60), std::bit_cast<std::uint32_t>(ctx.fpr[0]));
    ctx.set_gpr(2, 1u << 16u);
    ctx.set_gpr(2, ctx.gpr[4] + ctx.gpr[2]);
    ctx.set_gpr(2, rt.memory().aot_load32(ctx.gpr[2] + static_cast<std::uint32_t>(120)));
    { const bool branch_taken = ctx.gpr[6] == 0u;
    ctx.set_gpr(16, ctx.gpr[3] + ctx.gpr[2]);
      if (branch_taken) {
          goto L_08A9C4B8;
      }
      goto L_08A9C13C;
    }
L_08A9C13C:
    ctx.set_gpr(19, ctx.gpr[17] << 2u);
    ctx.set_gpr(2, ctx.gpr[19] + ctx.gpr[29]);
    ctx.set_gpr(31, 0x08A9C14Cu);
    ctx.set_gpr(20, ctx.gpr[2] + static_cast<std::uint32_t>(40));
    if (rt.invoke_chained_direct<&recomp_unit_0164_entry, 164u, 96u, 0x08A946D4u>(ctx, &aot_mem) && ctx.pc == 0x08A9C14Cu) goto L_08A9C14C;
    return;
L_08A9C14C:
    ctx.set_gpr(6, rt.memory().aot_load32(ctx.gpr[20] + static_cast<std::uint32_t>(0)));
    ctx.set_gpr(1, static_cast<std::int32_t>(ctx.gpr[2]) < static_cast<std::int32_t>(ctx.gpr[6]) ? 1u : 0u);
    if (ctx.gpr[1] == 0u) {
    ctx.set_gpr(2, 0u + static_cast<std::uint32_t>(5));
        goto L_08A9C164;
    }
    goto L_08A9C15C;
L_08A9C15C:
    { const bool branch_taken = 0u == 0u;
    ctx.set_gpr(2, 0u + 0u);
      if (branch_taken) {
          goto L_08A9CBE0;
      }
      goto L_08A9C164;
    }
L_08A9C164:
    if (ctx.gpr[17] != ctx.gpr[2]) {
    ctx.set_gpr(1, 1u << 16u);
        goto L_08A9C174;
    }
    goto L_08A9C16C;
L_08A9C16C:
    { const bool branch_taken = 0u == 0u;
    ctx.set_gpr(2, 0u + static_cast<std::uint32_t>(1));
      if (branch_taken) {
          goto L_08A9CBE0;
      }
      goto L_08A9C174;
    }
L_08A9C174:
    ctx.set_gpr(2, ctx.gpr[19] + ctx.gpr[18]);
    ctx.set_gpr(1, ctx.gpr[1] | 128u);
    ctx.set_gpr(5, ctx.gpr[2] + ctx.gpr[1]);
    ctx.set_gpr(2, rt.memory().aot_load32(ctx.gpr[5] + static_cast<std::uint32_t>(0)));
    ctx.set_gpr(8, ctx.gpr[16] + static_cast<std::uint32_t>(-1));
    ctx.set_gpr(2, static_cast<std::int32_t>(ctx.gpr[8]) < static_cast<std::int32_t>(ctx.gpr[2]) ? 1u : 0u);
    if (ctx.gpr[2] != 0u) {
    ctx.set_gpr(4, ctx.gpr[17] + static_cast<std::uint32_t>(1));
        goto L_08A9C1E4;
    }
    goto L_08A9C194;
L_08A9C194:
    ctx.set_gpr(2, ctx.gpr[8] << 2u);
    ctx.set_gpr(7, ctx.gpr[18] + ctx.gpr[2]);
    goto L_08A9C19C;
L_08A9C19C:
    ctx.set_gpr(2, 1u << 16u);
    ctx.set_gpr(2, ctx.gpr[7] + ctx.gpr[2]);
    ctx.set_gpr(4, rt.memory().aot_load32(ctx.gpr[2] + static_cast<std::uint32_t>(-31924)));
    ctx.set_gpr(2, ctx.gpr[8] + ctx.gpr[6]);
    ctx.set_gpr(2, ctx.gpr[2] << 2u);
    ctx.set_gpr(3, ctx.gpr[18] + ctx.gpr[2]);
    ctx.set_gpr(2, 1u << 16u);
    ctx.set_gpr(2, ctx.gpr[3] + ctx.gpr[2]);
    rt.memory().aot_store32(ctx.gpr[2] + static_cast<std::uint32_t>(-31924), ctx.gpr[4]);
    ctx.set_gpr(2, 1u << 16u);
    ctx.set_gpr(2, ctx.gpr[7] + ctx.gpr[2]);
    rt.memory().aot_store32(ctx.gpr[2] + static_cast<std::uint32_t>(-31924), 0u);
    ctx.set_gpr(2, rt.memory().aot_load32(ctx.gpr[5] + static_cast<std::uint32_t>(0)));
    ctx.set_gpr(8, ctx.gpr[8] + static_cast<std::uint32_t>(-1));
    ctx.set_gpr(1, static_cast<std::int32_t>(ctx.gpr[8]) < static_cast<std::int32_t>(ctx.gpr[2]) ? 1u : 0u);
    { const bool branch_taken = ctx.gpr[1] == 0u;
    ctx.set_gpr(7, ctx.gpr[7] + static_cast<std::uint32_t>(-4));
      if (branch_taken) {
          goto L_08A9C19C;
      }
      goto L_08A9C1E0;
    }
L_08A9C1E0:
    ctx.set_gpr(4, ctx.gpr[17] + static_cast<std::uint32_t>(1));
    goto L_08A9C1E4;
L_08A9C1E4:
    ctx.set_gpr(1, static_cast<std::int32_t>(ctx.gpr[4]) < 6 ? 1u : 0u);
    if (ctx.gpr[1] == 0u) {
    ctx.set_gpr(2, 0u + static_cast<std::uint32_t>(1));
        goto L_08A9CBE0;
    }
    goto L_08A9C1F0;
L_08A9C1F0:
    ctx.set_gpr(2, 0u + static_cast<std::uint32_t>(6));
    ctx.set_gpr(5, ctx.gpr[2] - ctx.gpr[4]);
    ctx.set_gpr(1, static_cast<std::int32_t>(ctx.gpr[5]) < 9 ? 1u : 0u);
    if (ctx.gpr[1] != 0u) {
    ctx.set_gpr(1, static_cast<std::int32_t>(ctx.gpr[4]) < 6 ? 1u : 0u);
        goto L_08A9C454;
    }
    goto L_08A9C204;
L_08A9C204:
    ctx.set_gpr(1, static_cast<std::int32_t>(ctx.gpr[4]) < 7 ? 1u : 0u);
    ctx.set_gpr(7, 0u + 0u);
    ctx.set_gpr(6, 0u + 0u);
    { const bool branch_taken = ctx.gpr[1] == 0u;
    ctx.set_gpr(2, 0u + 0u);
      if (branch_taken) {
          goto L_08A9C230;
      }
      goto L_08A9C218;
    }
L_08A9C218:
    ctx.set_gpr(1, 32767u << 16u);
    ctx.set_gpr(1, ctx.gpr[1] | 65535u);
    ctx.set_gpr(1, static_cast<std::int32_t>(ctx.gpr[4]) < static_cast<std::int32_t>(ctx.gpr[1]) ? 1u : 0u);
    { const bool branch_taken = ctx.gpr[1] == 0u;
    // nop
      if (branch_taken) {
          goto L_08A9C230;
      }
      goto L_08A9C22C;
    }
L_08A9C22C:
    ctx.set_gpr(2, 0u + static_cast<std::uint32_t>(1));
    goto L_08A9C230;
L_08A9C230:
    { const bool branch_taken = ctx.gpr[2] == 0u;
    // nop
      if (branch_taken) {
          goto L_08A9C24C;
      }
      goto L_08A9C238;
    }
L_08A9C238:
    ctx.set_gpr(3, ctx.gpr[17] + static_cast<std::uint32_t>(1));
    ctx.set_gpr(2, 32768u << 16u);
    { const bool branch_taken = ctx.gpr[3] == ctx.gpr[2];
    // nop
      if (branch_taken) {
          goto L_08A9C24C;
      }
      goto L_08A9C248;
    }
L_08A9C248:
    ctx.set_gpr(6, 0u + static_cast<std::uint32_t>(1));
    goto L_08A9C24C;
L_08A9C24C:
    { const bool branch_taken = ctx.gpr[6] == 0u;
    // nop
      if (branch_taken) {
          goto L_08A9C288;
      }
      goto L_08A9C254;
    }
L_08A9C254:
    ctx.set_gpr(2, ctx.gpr[17] + static_cast<std::uint32_t>(1));
    ctx.set_gpr(2, 0u - ctx.gpr[2]);
    ctx.set_gpr(3, 32768u << 16u);
    ctx.set_gpr(2, ctx.gpr[2] & ctx.gpr[3]);
    { const bool branch_taken = ctx.gpr[2] != 0u;
    ctx.set_gpr(6, 0u + static_cast<std::uint32_t>(1));
      if (branch_taken) {
          goto L_08A9C27C;
      }
      goto L_08A9C26C;
    }
L_08A9C26C:
    ctx.set_gpr(2, ctx.gpr[5] & ctx.gpr[3]);
    { const bool branch_taken = ctx.gpr[2] == 0u;
    // nop
      if (branch_taken) {
          goto L_08A9C27C;
      }
      goto L_08A9C278;
    }
L_08A9C278:
    ctx.set_gpr(6, 0u + 0u);
    goto L_08A9C27C;
L_08A9C27C:
    { const bool branch_taken = ctx.gpr[6] == 0u;
    // nop
      if (branch_taken) {
          goto L_08A9C288;
      }
      goto L_08A9C284;
    }
L_08A9C284:
    ctx.set_gpr(7, 0u + static_cast<std::uint32_t>(1));
    goto L_08A9C288;
L_08A9C288:
    { const bool branch_taken = ctx.gpr[7] == 0u;
    // nop
      if (branch_taken) {
          goto L_08A9C450;
      }
      goto L_08A9C290;
    }
L_08A9C290:
    ctx.set_gpr(2, ctx.gpr[4] << 2u);
    ctx.set_gpr(3, ctx.gpr[18] + ctx.gpr[2]);
    ctx.set_gpr(2, rt.memory().aot_load32(ctx.gpr[20] + static_cast<std::uint32_t>(0)));
    goto L_08A9C29C;
L_08A9C29C:
    ctx.set_gpr(5, 1u << 16u);
    ctx.set_gpr(5, ctx.gpr[3] + ctx.gpr[5]);
    ctx.set_gpr(6, rt.memory().aot_load32(ctx.gpr[5] + static_cast<std::uint32_t>(124)));
    ctx.set_gpr(1, 1u << 16u);
    ctx.set_gpr(1, ctx.gpr[1] | 128u);
    ctx.set_gpr(5, 1u << 16u);
    ctx.set_gpr(5, ctx.gpr[3] + ctx.gpr[5]);
    ctx.set_gpr(6, ctx.gpr[6] + ctx.gpr[2]);
    rt.memory().aot_store32(ctx.gpr[5] + static_cast<std::uint32_t>(124), ctx.gpr[6]);
    ctx.set_gpr(5, ctx.gpr[6] << 2u);
    ctx.set_gpr(5, ctx.gpr[18] + ctx.gpr[5]);
    ctx.set_gpr(6, ctx.gpr[5] + static_cast<std::uint32_t>(852));
    ctx.set_gpr(5, 1u << 16u);
    ctx.set_gpr(7, ctx.gpr[3] + ctx.gpr[1]);
    ctx.set_gpr(6, ctx.gpr[6] + static_cast<std::uint32_t>(32760));
    ctx.set_gpr(5, ctx.gpr[3] + ctx.gpr[5]);
    rt.memory().aot_store32(ctx.gpr[5] + static_cast<std::uint32_t>(76), ctx.gpr[6]);
    ctx.set_gpr(6, rt.memory().aot_load32(ctx.gpr[7] + static_cast<std::uint32_t>(0)));
    ctx.set_gpr(5, 1u << 16u);
    ctx.set_gpr(1, 1u << 16u);
    ctx.set_gpr(6, ctx.gpr[6] + ctx.gpr[2]);
    rt.memory().aot_store32(ctx.gpr[7] + static_cast<std::uint32_t>(0), ctx.gpr[6]);
    ctx.set_gpr(6, ctx.gpr[6] << 2u);
    ctx.set_gpr(6, ctx.gpr[18] + ctx.gpr[6]);
    ctx.set_gpr(6, ctx.gpr[6] + static_cast<std::uint32_t>(852));
    ctx.set_gpr(1, ctx.gpr[1] | 132u);
    ctx.set_gpr(7, ctx.gpr[3] + ctx.gpr[1]);
    ctx.set_gpr(5, ctx.gpr[3] + ctx.gpr[5]);
    ctx.set_gpr(6, ctx.gpr[6] + static_cast<std::uint32_t>(32760));
    rt.memory().aot_store32(ctx.gpr[5] + static_cast<std::uint32_t>(80), ctx.gpr[6]);
    ctx.set_gpr(6, rt.memory().aot_load32(ctx.gpr[7] + static_cast<std::uint32_t>(0)));
    ctx.set_gpr(5, 1u << 16u);
    ctx.set_gpr(1, 1u << 16u);
    ctx.set_gpr(6, ctx.gpr[6] + ctx.gpr[2]);
    rt.memory().aot_store32(ctx.gpr[7] + static_cast<std::uint32_t>(0), ctx.gpr[6]);
    ctx.set_gpr(6, ctx.gpr[6] << 2u);
    ctx.set_gpr(6, ctx.gpr[18] + ctx.gpr[6]);
    ctx.set_gpr(6, ctx.gpr[6] + static_cast<std::uint32_t>(852));
    ctx.set_gpr(1, ctx.gpr[1] | 136u);
    ctx.set_gpr(7, ctx.gpr[3] + ctx.gpr[1]);
    ctx.set_gpr(5, ctx.gpr[3] + ctx.gpr[5]);
    ctx.set_gpr(6, ctx.gpr[6] + static_cast<std::uint32_t>(32760));
    rt.memory().aot_store32(ctx.gpr[5] + static_cast<std::uint32_t>(84), ctx.gpr[6]);
    ctx.set_gpr(6, rt.memory().aot_load32(ctx.gpr[7] + static_cast<std::uint32_t>(0)));
    ctx.set_gpr(5, 1u << 16u);
    ctx.set_gpr(1, 1u << 16u);
    ctx.set_gpr(6, ctx.gpr[6] + ctx.gpr[2]);
    rt.memory().aot_store32(ctx.gpr[7] + static_cast<std::uint32_t>(0), ctx.gpr[6]);
    ctx.set_gpr(6, ctx.gpr[6] << 2u);
    ctx.set_gpr(6, ctx.gpr[18] + ctx.gpr[6]);
    ctx.set_gpr(6, ctx.gpr[6] + static_cast<std::uint32_t>(852));
    ctx.set_gpr(1, ctx.gpr[1] | 140u);
    ctx.set_gpr(7, ctx.gpr[3] + ctx.gpr[1]);
    ctx.set_gpr(1, 1u << 16u);
    ctx.set_gpr(5, ctx.gpr[3] + ctx.gpr[5]);
    ctx.set_gpr(6, ctx.gpr[6] + static_cast<std::uint32_t>(32760));
    rt.memory().aot_store32(ctx.gpr[5] + static_cast<std::uint32_t>(88), ctx.gpr[6]);
    ctx.set_gpr(6, rt.memory().aot_load32(ctx.gpr[7] + static_cast<std::uint32_t>(0)));
    ctx.set_gpr(5, 1u << 16u);
    ctx.set_gpr(5, ctx.gpr[3] + ctx.gpr[5]);
    ctx.set_gpr(6, ctx.gpr[6] + ctx.gpr[2]);
    rt.memory().aot_store32(ctx.gpr[7] + static_cast<std::uint32_t>(0), ctx.gpr[6]);
    ctx.set_gpr(6, ctx.gpr[6] << 2u);
    ctx.set_gpr(6, ctx.gpr[18] + ctx.gpr[6]);
    ctx.set_gpr(6, ctx.gpr[6] + static_cast<std::uint32_t>(852));
    ctx.set_gpr(6, ctx.gpr[6] + static_cast<std::uint32_t>(32760));
    ctx.set_gpr(1, ctx.gpr[1] | 144u);
    rt.memory().aot_store32(ctx.gpr[5] + static_cast<std::uint32_t>(92), ctx.gpr[6]);
    ctx.set_gpr(7, ctx.gpr[3] + ctx.gpr[1]);
    ctx.set_gpr(6, rt.memory().aot_load32(ctx.gpr[7] + static_cast<std::uint32_t>(0)));
    ctx.set_gpr(5, 1u << 16u);
    ctx.set_gpr(1, 1u << 16u);
    ctx.set_gpr(6, ctx.gpr[6] + ctx.gpr[2]);
    rt.memory().aot_store32(ctx.gpr[7] + static_cast<std::uint32_t>(0), ctx.gpr[6]);
    ctx.set_gpr(6, ctx.gpr[6] << 2u);
    ctx.set_gpr(6, ctx.gpr[18] + ctx.gpr[6]);
    ctx.set_gpr(6, ctx.gpr[6] + static_cast<std::uint32_t>(852));
    ctx.set_gpr(1, ctx.gpr[1] | 148u);
    ctx.set_gpr(7, ctx.gpr[3] + ctx.gpr[1]);
    ctx.set_gpr(1, 1u << 16u);
    ctx.set_gpr(5, ctx.gpr[3] + ctx.gpr[5]);
    ctx.set_gpr(6, ctx.gpr[6] + static_cast<std::uint32_t>(32760));
    rt.memory().aot_store32(ctx.gpr[5] + static_cast<std::uint32_t>(96), ctx.gpr[6]);
    ctx.set_gpr(6, rt.memory().aot_load32(ctx.gpr[7] + static_cast<std::uint32_t>(0)));
    ctx.set_gpr(5, 1u << 16u);
    ctx.set_gpr(5, ctx.gpr[3] + ctx.gpr[5]);
    ctx.set_gpr(6, ctx.gpr[6] + ctx.gpr[2]);
    rt.memory().aot_store32(ctx.gpr[7] + static_cast<std::uint32_t>(0), ctx.gpr[6]);
    ctx.set_gpr(6, ctx.gpr[6] << 2u);
    ctx.set_gpr(6, ctx.gpr[18] + ctx.gpr[6]);
    ctx.set_gpr(6, ctx.gpr[6] + static_cast<std::uint32_t>(852));
    ctx.set_gpr(6, ctx.gpr[6] + static_cast<std::uint32_t>(32760));
    ctx.set_gpr(1, ctx.gpr[1] | 152u);
    rt.memory().aot_store32(ctx.gpr[5] + static_cast<std::uint32_t>(100), ctx.gpr[6]);
    ctx.set_gpr(7, ctx.gpr[3] + ctx.gpr[1]);
    ctx.set_gpr(6, rt.memory().aot_load32(ctx.gpr[7] + static_cast<std::uint32_t>(0)));
    ctx.set_gpr(5, 1u << 16u);
    ctx.set_gpr(5, ctx.gpr[3] + ctx.gpr[5]);
    ctx.set_gpr(6, ctx.gpr[6] + ctx.gpr[2]);
    rt.memory().aot_store32(ctx.gpr[7] + static_cast<std::uint32_t>(0), ctx.gpr[6]);
    ctx.set_gpr(6, ctx.gpr[6] << 2u);
    ctx.set_gpr(6, ctx.gpr[18] + ctx.gpr[6]);
    ctx.set_gpr(6, ctx.gpr[6] + static_cast<std::uint32_t>(852));
    ctx.set_gpr(6, ctx.gpr[6] + static_cast<std::uint32_t>(32760));
    rt.memory().aot_store32(ctx.gpr[5] + static_cast<std::uint32_t>(104), ctx.gpr[6]);
    ctx.set_gpr(4, ctx.gpr[4] + static_cast<std::uint32_t>(8));
    ctx.set_gpr(5, static_cast<std::int32_t>(ctx.gpr[4]) < -2 ? 1u : 0u);
    { const bool branch_taken = ctx.gpr[5] != 0u;
    ctx.set_gpr(3, ctx.gpr[3] + static_cast<std::uint32_t>(32));
      if (branch_taken) {
          goto L_08A9C29C;
      }
      goto L_08A9C450;
    }
L_08A9C450:
    ctx.set_gpr(1, static_cast<std::int32_t>(ctx.gpr[4]) < 6 ? 1u : 0u);
    goto L_08A9C454;
L_08A9C454:
    { const bool branch_taken = ctx.gpr[1] == 0u;
    // nop
      if (branch_taken) {
          goto L_08A9CBDC;
      }
      goto L_08A9C45C;
    }
L_08A9C45C:
    ctx.set_gpr(5, rt.memory().aot_load32(ctx.gpr[20] + static_cast<std::uint32_t>(0)));
    ctx.set_gpr(2, ctx.gpr[4] << 2u);
    ctx.set_gpr(6, ctx.gpr[18] + ctx.gpr[2]);
    goto L_08A9C468;
L_08A9C468:
    ctx.set_gpr(2, 1u << 16u);
    ctx.set_gpr(2, ctx.gpr[6] + ctx.gpr[2]);
    ctx.set_gpr(3, rt.memory().aot_load32(ctx.gpr[2] + static_cast<std::uint32_t>(124)));
    ctx.set_gpr(4, ctx.gpr[4] + static_cast<std::uint32_t>(1));
    ctx.set_gpr(2, 1u << 16u);
    ctx.set_gpr(2, ctx.gpr[6] + ctx.gpr[2]);
    ctx.set_gpr(3, ctx.gpr[3] + ctx.gpr[5]);
    rt.memory().aot_store32(ctx.gpr[2] + static_cast<std::uint32_t>(124), ctx.gpr[3]);
    ctx.set_gpr(2, ctx.gpr[3] << 2u);
    ctx.set_gpr(2, ctx.gpr[18] + ctx.gpr[2]);
    ctx.set_gpr(3, ctx.gpr[2] + static_cast<std::uint32_t>(852));
    ctx.set_gpr(2, 1u << 16u);
    ctx.set_gpr(2, ctx.gpr[6] + ctx.gpr[2]);
    ctx.set_gpr(3, ctx.gpr[3] + static_cast<std::uint32_t>(32760));
    rt.memory().aot_store32(ctx.gpr[2] + static_cast<std::uint32_t>(76), ctx.gpr[3]);
    ctx.set_gpr(2, static_cast<std::int32_t>(ctx.gpr[4]) < 6 ? 1u : 0u);
    { const bool branch_taken = ctx.gpr[2] != 0u;
    ctx.set_gpr(6, ctx.gpr[6] + static_cast<std::uint32_t>(4));
      if (branch_taken) {
          goto L_08A9C468;
      }
      goto L_08A9C4B0;
    }
L_08A9C4B0:
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_08A9CBDC;
      }
      goto L_08A9C4B8;
    }
L_08A9C4B8:
    ctx.set_gpr(2, 0u + static_cast<std::uint32_t>(5));
    if (ctx.gpr[17] == ctx.gpr[2]) {
    ctx.set_gpr(2, ctx.gpr[17] << 2u);
        goto L_08A9CA48;
    }
    goto L_08A9C4C4;
L_08A9C4C4:
    ctx.set_gpr(4, ctx.gpr[17] << 2u);
    ctx.set_gpr(1, 1u << 16u);
    ctx.set_gpr(2, ctx.gpr[4] + ctx.gpr[18]);
    ctx.set_gpr(1, ctx.gpr[1] | 128u);
    ctx.set_gpr(7, ctx.gpr[2] + ctx.gpr[1]);
    ctx.set_gpr(6, rt.memory().aot_load32(ctx.gpr[7] + static_cast<std::uint32_t>(0)));
    ctx.set_gpr(1, static_cast<std::int32_t>(ctx.gpr[6]) < static_cast<std::int32_t>(ctx.gpr[16]) ? 1u : 0u);
    if (ctx.gpr[1] == 0u) {
    ctx.set_gpr(5, ctx.gpr[17] + static_cast<std::uint32_t>(1));
        goto L_08A9C76C;
    }
    goto L_08A9C4E8;
L_08A9C4E8:
    ctx.set_gpr(2, ctx.gpr[16] - ctx.gpr[6]);
    ctx.set_gpr(1, static_cast<std::int32_t>(ctx.gpr[2]) < 9 ? 1u : 0u);
    { const bool branch_taken = ctx.gpr[1] != 0u;
    ctx.set_gpr(3, ctx.gpr[16] + static_cast<std::uint32_t>(-8));
      if (branch_taken) {
          goto L_08A9C714;
      }
      goto L_08A9C4F8;
    }
L_08A9C4F8:
    ctx.set_gpr(1, static_cast<std::int32_t>(ctx.gpr[16]) < static_cast<std::int32_t>(ctx.gpr[6]) ? 1u : 0u);
    ctx.set_gpr(10, 0u + 0u);
    ctx.set_gpr(8, 0u + 0u);
    ctx.set_gpr(5, 0u + 0u);
    { const bool branch_taken = ctx.gpr[1] != 0u;
    ctx.set_gpr(2, 0u + 0u);
      if (branch_taken) {
          goto L_08A9C528;
      }
      goto L_08A9C510;
    }
L_08A9C510:
    ctx.set_gpr(1, 32767u << 16u);
    ctx.set_gpr(1, ctx.gpr[1] | 65535u);
    ctx.set_gpr(1, static_cast<std::int32_t>(ctx.gpr[16]) < static_cast<std::int32_t>(ctx.gpr[1]) ? 1u : 0u);
    { const bool branch_taken = ctx.gpr[1] == 0u;
    // nop
      if (branch_taken) {
          goto L_08A9C528;
      }
      goto L_08A9C524;
    }
L_08A9C524:
    ctx.set_gpr(2, 0u + static_cast<std::uint32_t>(1));
    goto L_08A9C528;
L_08A9C528:
    { const bool branch_taken = ctx.gpr[2] == 0u;
    // nop
      if (branch_taken) {
          goto L_08A9C54C;
      }
      goto L_08A9C530;
    }
L_08A9C530:
    ctx.set_gpr(2, rt.memory().aot_load32(ctx.gpr[7] + static_cast<std::uint32_t>(0)));
    ctx.set_gpr(1, 32767u << 16u);
    ctx.set_gpr(1, ctx.gpr[1] | 65535u);
    ctx.set_gpr(1, static_cast<std::int32_t>(ctx.gpr[2]) < static_cast<std::int32_t>(ctx.gpr[1]) ? 1u : 0u);
    { const bool branch_taken = ctx.gpr[1] == 0u;
    // nop
      if (branch_taken) {
          goto L_08A9C54C;
      }
      goto L_08A9C548;
    }
L_08A9C548:
    ctx.set_gpr(5, 0u + static_cast<std::uint32_t>(1));
    goto L_08A9C54C;
L_08A9C54C:
    { const bool branch_taken = ctx.gpr[5] == 0u;
    // nop
      if (branch_taken) {
          goto L_08A9C568;
      }
      goto L_08A9C554;
    }
L_08A9C554:
    ctx.set_gpr(5, rt.memory().aot_load32(ctx.gpr[7] + static_cast<std::uint32_t>(0)));
    ctx.set_gpr(2, 32768u << 16u);
    { const bool branch_taken = ctx.gpr[5] == ctx.gpr[2];
    // nop
      if (branch_taken) {
          goto L_08A9C568;
      }
      goto L_08A9C564;
    }
L_08A9C564:
    ctx.set_gpr(8, 0u + static_cast<std::uint32_t>(1));
    goto L_08A9C568;
L_08A9C568:
    { const bool branch_taken = ctx.gpr[8] == 0u;
    // nop
      if (branch_taken) {
          goto L_08A9C5AC;
      }
      goto L_08A9C570;
    }
L_08A9C570:
    ctx.set_gpr(8, rt.memory().aot_load32(ctx.gpr[7] + static_cast<std::uint32_t>(0)));
    ctx.set_gpr(7, 32768u << 16u);
    ctx.set_gpr(2, 0u - ctx.gpr[8]);
    ctx.set_gpr(5, ctx.gpr[16] & ctx.gpr[7]);
    ctx.set_gpr(2, ctx.gpr[2] & ctx.gpr[7]);
    { const bool branch_taken = ctx.gpr[5] != ctx.gpr[2];
    ctx.set_gpr(9, 0u + static_cast<std::uint32_t>(1));
      if (branch_taken) {
          goto L_08A9C5A0;
      }
      goto L_08A9C58C;
    }
L_08A9C58C:
    ctx.set_gpr(2, ctx.gpr[16] - ctx.gpr[8]);
    ctx.set_gpr(2, ctx.gpr[2] & ctx.gpr[7]);
    { const bool branch_taken = ctx.gpr[5] == ctx.gpr[2];
    // nop
      if (branch_taken) {
          goto L_08A9C5A0;
      }
      goto L_08A9C59C;
    }
L_08A9C59C:
    ctx.set_gpr(9, 0u + 0u);
    goto L_08A9C5A0;
L_08A9C5A0:
    { const bool branch_taken = ctx.gpr[9] == 0u;
    // nop
      if (branch_taken) {
          goto L_08A9C5AC;
      }
      goto L_08A9C5A8;
    }
L_08A9C5A8:
    ctx.set_gpr(10, 0u + static_cast<std::uint32_t>(1));
    goto L_08A9C5AC;
L_08A9C5AC:
    if (ctx.gpr[10] == 0u) {
    ctx.set_gpr(1, static_cast<std::int32_t>(ctx.gpr[6]) < static_cast<std::int32_t>(ctx.gpr[16]) ? 1u : 0u);
        goto L_08A9C718;
    }
    goto L_08A9C5B4;
L_08A9C5B4:
    ctx.set_gpr(2, ctx.gpr[6] << 2u);
    ctx.set_gpr(5, ctx.gpr[18] + ctx.gpr[2]);
    ctx.set_gpr(2, ctx.gpr[4] + ctx.gpr[29]);
    ctx.set_gpr(2, ctx.gpr[2] + static_cast<std::uint32_t>(40));
    ctx.set_gpr(2, rt.memory().aot_load32(ctx.gpr[2] + static_cast<std::uint32_t>(0)));
    goto L_08A9C5C8;
L_08A9C5C8:
    ctx.set_gpr(7, 1u << 16u);
    ctx.set_gpr(7, ctx.gpr[5] + ctx.gpr[7]);
    ctx.set_gpr(9, rt.memory().aot_load32(ctx.gpr[7] + static_cast<std::uint32_t>(-31924)));
    ctx.set_gpr(7, ctx.gpr[6] - ctx.gpr[2]);
    ctx.set_gpr(7, ctx.gpr[7] << 2u);
    ctx.set_gpr(8, ctx.gpr[18] + ctx.gpr[7]);
    ctx.set_gpr(7, 1u << 16u);
    ctx.set_gpr(7, ctx.gpr[8] + ctx.gpr[7]);
    rt.memory().aot_store32(ctx.gpr[7] + static_cast<std::uint32_t>(-31924), ctx.gpr[9]);
    ctx.set_gpr(7, 1u << 16u);
    ctx.set_gpr(7, ctx.gpr[5] + ctx.gpr[7]);
    ctx.set_gpr(9, rt.memory().aot_load32(ctx.gpr[7] + static_cast<std::uint32_t>(-31920)));
    ctx.set_gpr(7, ctx.gpr[6] + static_cast<std::uint32_t>(1));
    ctx.set_gpr(7, ctx.gpr[7] - ctx.gpr[2]);
    ctx.set_gpr(7, ctx.gpr[7] << 2u);
    ctx.set_gpr(8, ctx.gpr[18] + ctx.gpr[7]);
    ctx.set_gpr(7, 1u << 16u);
    ctx.set_gpr(7, ctx.gpr[8] + ctx.gpr[7]);
    rt.memory().aot_store32(ctx.gpr[7] + static_cast<std::uint32_t>(-31924), ctx.gpr[9]);
    ctx.set_gpr(7, 1u << 16u);
    ctx.set_gpr(7, ctx.gpr[5] + ctx.gpr[7]);
    ctx.set_gpr(9, rt.memory().aot_load32(ctx.gpr[7] + static_cast<std::uint32_t>(-31916)));
    ctx.set_gpr(7, ctx.gpr[6] + static_cast<std::uint32_t>(2));
    ctx.set_gpr(7, ctx.gpr[7] - ctx.gpr[2]);
    ctx.set_gpr(7, ctx.gpr[7] << 2u);
    ctx.set_gpr(8, ctx.gpr[18] + ctx.gpr[7]);
    ctx.set_gpr(7, 1u << 16u);
    ctx.set_gpr(7, ctx.gpr[8] + ctx.gpr[7]);
    rt.memory().aot_store32(ctx.gpr[7] + static_cast<std::uint32_t>(-31924), ctx.gpr[9]);
    ctx.set_gpr(7, 1u << 16u);
    ctx.set_gpr(7, ctx.gpr[5] + ctx.gpr[7]);
    ctx.set_gpr(9, rt.memory().aot_load32(ctx.gpr[7] + static_cast<std::uint32_t>(-31912)));
    ctx.set_gpr(7, ctx.gpr[6] + static_cast<std::uint32_t>(3));
    ctx.set_gpr(7, ctx.gpr[7] - ctx.gpr[2]);
    ctx.set_gpr(7, ctx.gpr[7] << 2u);
    ctx.set_gpr(8, ctx.gpr[18] + ctx.gpr[7]);
    ctx.set_gpr(7, 1u << 16u);
    ctx.set_gpr(7, ctx.gpr[8] + ctx.gpr[7]);
    rt.memory().aot_store32(ctx.gpr[7] + static_cast<std::uint32_t>(-31924), ctx.gpr[9]);
    ctx.set_gpr(7, 1u << 16u);
    ctx.set_gpr(7, ctx.gpr[5] + ctx.gpr[7]);
    ctx.set_gpr(9, rt.memory().aot_load32(ctx.gpr[7] + static_cast<std::uint32_t>(-31908)));
    ctx.set_gpr(7, ctx.gpr[6] + static_cast<std::uint32_t>(4));
    ctx.set_gpr(7, ctx.gpr[7] - ctx.gpr[2]);
    ctx.set_gpr(7, ctx.gpr[7] << 2u);
    ctx.set_gpr(8, ctx.gpr[18] + ctx.gpr[7]);
    ctx.set_gpr(7, 1u << 16u);
    ctx.set_gpr(7, ctx.gpr[8] + ctx.gpr[7]);
    rt.memory().aot_store32(ctx.gpr[7] + static_cast<std::uint32_t>(-31924), ctx.gpr[9]);
    ctx.set_gpr(7, 1u << 16u);
    ctx.set_gpr(7, ctx.gpr[5] + ctx.gpr[7]);
    ctx.set_gpr(9, rt.memory().aot_load32(ctx.gpr[7] + static_cast<std::uint32_t>(-31904)));
    ctx.set_gpr(7, ctx.gpr[6] + static_cast<std::uint32_t>(5));
    ctx.set_gpr(7, ctx.gpr[7] - ctx.gpr[2]);
    ctx.set_gpr(7, ctx.gpr[7] << 2u);
    ctx.set_gpr(8, ctx.gpr[18] + ctx.gpr[7]);
    ctx.set_gpr(7, 1u << 16u);
    ctx.set_gpr(7, ctx.gpr[8] + ctx.gpr[7]);
    rt.memory().aot_store32(ctx.gpr[7] + static_cast<std::uint32_t>(-31924), ctx.gpr[9]);
    ctx.set_gpr(7, 1u << 16u);
    ctx.set_gpr(7, ctx.gpr[5] + ctx.gpr[7]);
    ctx.set_gpr(9, rt.memory().aot_load32(ctx.gpr[7] + static_cast<std::uint32_t>(-31900)));
    ctx.set_gpr(7, ctx.gpr[6] + static_cast<std::uint32_t>(6));
    ctx.set_gpr(7, ctx.gpr[7] - ctx.gpr[2]);
    ctx.set_gpr(7, ctx.gpr[7] << 2u);
    ctx.set_gpr(8, ctx.gpr[18] + ctx.gpr[7]);
    ctx.set_gpr(7, 1u << 16u);
    ctx.set_gpr(7, ctx.gpr[8] + ctx.gpr[7]);
    rt.memory().aot_store32(ctx.gpr[7] + static_cast<std::uint32_t>(-31924), ctx.gpr[9]);
    ctx.set_gpr(7, 1u << 16u);
    ctx.set_gpr(7, ctx.gpr[5] + ctx.gpr[7]);
    ctx.set_gpr(9, rt.memory().aot_load32(ctx.gpr[7] + static_cast<std::uint32_t>(-31896)));
    ctx.set_gpr(7, ctx.gpr[6] + static_cast<std::uint32_t>(7));
    ctx.set_gpr(7, ctx.gpr[7] - ctx.gpr[2]);
    ctx.set_gpr(7, ctx.gpr[7] << 2u);
    ctx.set_gpr(8, ctx.gpr[18] + ctx.gpr[7]);
    ctx.set_gpr(7, 1u << 16u);
    ctx.set_gpr(7, ctx.gpr[8] + ctx.gpr[7]);
    rt.memory().aot_store32(ctx.gpr[7] + static_cast<std::uint32_t>(-31924), ctx.gpr[9]);
    ctx.set_gpr(6, ctx.gpr[6] + static_cast<std::uint32_t>(8));
    ctx.set_gpr(7, static_cast<std::int32_t>(ctx.gpr[6]) < static_cast<std::int32_t>(ctx.gpr[3]) ? 1u : 0u);
    { const bool branch_taken = ctx.gpr[7] != 0u;
    ctx.set_gpr(5, ctx.gpr[5] + static_cast<std::uint32_t>(32));
      if (branch_taken) {
          goto L_08A9C5C8;
      }
      goto L_08A9C714;
    }
L_08A9C714:
    ctx.set_gpr(1, static_cast<std::int32_t>(ctx.gpr[6]) < static_cast<std::int32_t>(ctx.gpr[16]) ? 1u : 0u);
    goto L_08A9C718;
L_08A9C718:
    { const bool branch_taken = ctx.gpr[1] == 0u;
    // nop
      if (branch_taken) {
          goto L_08A9C768;
      }
      goto L_08A9C720;
    }
L_08A9C720:
    ctx.set_gpr(2, ctx.gpr[6] << 2u);
    ctx.set_gpr(8, ctx.gpr[18] + ctx.gpr[2]);
    ctx.set_gpr(2, ctx.gpr[4] + ctx.gpr[29]);
    ctx.set_gpr(2, ctx.gpr[2] + static_cast<std::uint32_t>(40));
    ctx.set_gpr(5, rt.memory().aot_load32(ctx.gpr[2] + static_cast<std::uint32_t>(0)));
    goto L_08A9C734;
L_08A9C734:
    ctx.set_gpr(2, 1u << 16u);
    ctx.set_gpr(2, ctx.gpr[8] + ctx.gpr[2]);
    ctx.set_gpr(7, rt.memory().aot_load32(ctx.gpr[2] + static_cast<std::uint32_t>(-31924)));
    ctx.set_gpr(2, ctx.gpr[6] - ctx.gpr[5]);
    ctx.set_gpr(2, ctx.gpr[2] << 2u);
    ctx.set_gpr(3, ctx.gpr[18] + ctx.gpr[2]);
    ctx.set_gpr(2, 1u << 16u);
    ctx.set_gpr(2, ctx.gpr[3] + ctx.gpr[2]);
    rt.memory().aot_store32(ctx.gpr[2] + static_cast<std::uint32_t>(-31924), ctx.gpr[7]);
    ctx.set_gpr(6, ctx.gpr[6] + static_cast<std::uint32_t>(1));
    ctx.set_gpr(2, static_cast<std::int32_t>(ctx.gpr[6]) < static_cast<std::int32_t>(ctx.gpr[16]) ? 1u : 0u);
    { const bool branch_taken = ctx.gpr[2] != 0u;
    ctx.set_gpr(8, ctx.gpr[8] + static_cast<std::uint32_t>(4));
      if (branch_taken) {
          goto L_08A9C734;
      }
      goto L_08A9C768;
    }
L_08A9C768:
    ctx.set_gpr(5, ctx.gpr[17] + static_cast<std::uint32_t>(1));
    goto L_08A9C76C;
L_08A9C76C:
    ctx.set_gpr(1, static_cast<std::int32_t>(ctx.gpr[5]) < 6 ? 1u : 0u);
    { const bool branch_taken = ctx.gpr[1] == 0u;
    // nop
      if (branch_taken) {
          goto L_08A9CA44;
      }
      goto L_08A9C778;
    }
L_08A9C778:
    ctx.set_gpr(2, 0u + static_cast<std::uint32_t>(6));
    ctx.set_gpr(6, ctx.gpr[2] - ctx.gpr[5]);
    ctx.set_gpr(1, static_cast<std::int32_t>(ctx.gpr[6]) < 9 ? 1u : 0u);
    if (ctx.gpr[1] != 0u) {
    ctx.set_gpr(1, static_cast<std::int32_t>(ctx.gpr[5]) < 6 ? 1u : 0u);
        goto L_08A9C9E4;
    }
    goto L_08A9C78C;
L_08A9C78C:
    ctx.set_gpr(1, static_cast<std::int32_t>(ctx.gpr[5]) < 7 ? 1u : 0u);
    ctx.set_gpr(8, 0u + 0u);
    ctx.set_gpr(7, 0u + 0u);
    { const bool branch_taken = ctx.gpr[1] == 0u;
    ctx.set_gpr(2, 0u + 0u);
      if (branch_taken) {
          goto L_08A9C7B8;
      }
      goto L_08A9C7A0;
    }
L_08A9C7A0:
    ctx.set_gpr(1, 32767u << 16u);
    ctx.set_gpr(1, ctx.gpr[1] | 65535u);
    ctx.set_gpr(1, static_cast<std::int32_t>(ctx.gpr[5]) < static_cast<std::int32_t>(ctx.gpr[1]) ? 1u : 0u);
    { const bool branch_taken = ctx.gpr[1] == 0u;
    // nop
      if (branch_taken) {
          goto L_08A9C7B8;
      }
      goto L_08A9C7B4;
    }
L_08A9C7B4:
    ctx.set_gpr(2, 0u + static_cast<std::uint32_t>(1));
    goto L_08A9C7B8;
L_08A9C7B8:
    { const bool branch_taken = ctx.gpr[2] == 0u;
    // nop
      if (branch_taken) {
          goto L_08A9C7D4;
      }
      goto L_08A9C7C0;
    }
L_08A9C7C0:
    ctx.set_gpr(3, ctx.gpr[17] + static_cast<std::uint32_t>(1));
    ctx.set_gpr(2, 32768u << 16u);
    { const bool branch_taken = ctx.gpr[3] == ctx.gpr[2];
    // nop
      if (branch_taken) {
          goto L_08A9C7D4;
      }
      goto L_08A9C7D0;
    }
L_08A9C7D0:
    ctx.set_gpr(7, 0u + static_cast<std::uint32_t>(1));
    goto L_08A9C7D4;
L_08A9C7D4:
    { const bool branch_taken = ctx.gpr[7] == 0u;
    // nop
      if (branch_taken) {
          goto L_08A9C810;
      }
      goto L_08A9C7DC;
    }
L_08A9C7DC:
    ctx.set_gpr(2, ctx.gpr[17] + static_cast<std::uint32_t>(1));
    ctx.set_gpr(2, 0u - ctx.gpr[2]);
    ctx.set_gpr(3, 32768u << 16u);
    ctx.set_gpr(2, ctx.gpr[2] & ctx.gpr[3]);
    { const bool branch_taken = ctx.gpr[2] != 0u;
    ctx.set_gpr(7, 0u + static_cast<std::uint32_t>(1));
      if (branch_taken) {
          goto L_08A9C804;
      }
      goto L_08A9C7F4;
    }
L_08A9C7F4:
    ctx.set_gpr(2, ctx.gpr[6] & ctx.gpr[3]);
    { const bool branch_taken = ctx.gpr[2] == 0u;
    // nop
      if (branch_taken) {
          goto L_08A9C804;
      }
      goto L_08A9C800;
    }
L_08A9C800:
    ctx.set_gpr(7, 0u + 0u);
    goto L_08A9C804;
L_08A9C804:
    { const bool branch_taken = ctx.gpr[7] == 0u;
    // nop
      if (branch_taken) {
          goto L_08A9C810;
      }
      goto L_08A9C80C;
    }
L_08A9C80C:
    ctx.set_gpr(8, 0u + static_cast<std::uint32_t>(1));
    goto L_08A9C810;
L_08A9C810:
    { const bool branch_taken = ctx.gpr[8] == 0u;
    // nop
      if (branch_taken) {
          goto L_08A9C9E0;
      }
      goto L_08A9C818;
    }
L_08A9C818:
    ctx.set_gpr(2, ctx.gpr[5] << 2u);
    ctx.set_gpr(3, ctx.gpr[18] + ctx.gpr[2]);
    ctx.set_gpr(2, ctx.gpr[4] + ctx.gpr[29]);
    ctx.set_gpr(2, ctx.gpr[2] + static_cast<std::uint32_t>(40));
    ctx.set_gpr(2, rt.memory().aot_load32(ctx.gpr[2] + static_cast<std::uint32_t>(0)));
    goto L_08A9C82C;
L_08A9C82C:
    ctx.set_gpr(6, 1u << 16u);
    ctx.set_gpr(6, ctx.gpr[3] + ctx.gpr[6]);
    ctx.set_gpr(7, rt.memory().aot_load32(ctx.gpr[6] + static_cast<std::uint32_t>(124)));
    ctx.set_gpr(1, 1u << 16u);
    ctx.set_gpr(1, ctx.gpr[1] | 128u);
    ctx.set_gpr(6, 1u << 16u);
    ctx.set_gpr(6, ctx.gpr[3] + ctx.gpr[6]);
    ctx.set_gpr(7, ctx.gpr[7] - ctx.gpr[2]);
    rt.memory().aot_store32(ctx.gpr[6] + static_cast<std::uint32_t>(124), ctx.gpr[7]);
    ctx.set_gpr(6, ctx.gpr[7] << 2u);
    ctx.set_gpr(6, ctx.gpr[18] + ctx.gpr[6]);
    ctx.set_gpr(7, ctx.gpr[6] + static_cast<std::uint32_t>(852));
    ctx.set_gpr(6, 1u << 16u);
    ctx.set_gpr(8, ctx.gpr[3] + ctx.gpr[1]);
    ctx.set_gpr(7, ctx.gpr[7] + static_cast<std::uint32_t>(32760));
    ctx.set_gpr(6, ctx.gpr[3] + ctx.gpr[6]);
    rt.memory().aot_store32(ctx.gpr[6] + static_cast<std::uint32_t>(76), ctx.gpr[7]);
    ctx.set_gpr(7, rt.memory().aot_load32(ctx.gpr[8] + static_cast<std::uint32_t>(0)));
    ctx.set_gpr(6, 1u << 16u);
    ctx.set_gpr(1, 1u << 16u);
    ctx.set_gpr(7, ctx.gpr[7] - ctx.gpr[2]);
    rt.memory().aot_store32(ctx.gpr[8] + static_cast<std::uint32_t>(0), ctx.gpr[7]);
    ctx.set_gpr(7, ctx.gpr[7] << 2u);
    ctx.set_gpr(7, ctx.gpr[18] + ctx.gpr[7]);
    ctx.set_gpr(7, ctx.gpr[7] + static_cast<std::uint32_t>(852));
    ctx.set_gpr(1, ctx.gpr[1] | 132u);
    ctx.set_gpr(8, ctx.gpr[3] + ctx.gpr[1]);
    ctx.set_gpr(6, ctx.gpr[3] + ctx.gpr[6]);
    ctx.set_gpr(7, ctx.gpr[7] + static_cast<std::uint32_t>(32760));
    rt.memory().aot_store32(ctx.gpr[6] + static_cast<std::uint32_t>(80), ctx.gpr[7]);
    ctx.set_gpr(7, rt.memory().aot_load32(ctx.gpr[8] + static_cast<std::uint32_t>(0)));
    ctx.set_gpr(6, 1u << 16u);
    ctx.set_gpr(1, 1u << 16u);
    ctx.set_gpr(7, ctx.gpr[7] - ctx.gpr[2]);
    rt.memory().aot_store32(ctx.gpr[8] + static_cast<std::uint32_t>(0), ctx.gpr[7]);
    ctx.set_gpr(7, ctx.gpr[7] << 2u);
    ctx.set_gpr(7, ctx.gpr[18] + ctx.gpr[7]);
    ctx.set_gpr(7, ctx.gpr[7] + static_cast<std::uint32_t>(852));
    ctx.set_gpr(1, ctx.gpr[1] | 136u);
    ctx.set_gpr(8, ctx.gpr[3] + ctx.gpr[1]);
    ctx.set_gpr(6, ctx.gpr[3] + ctx.gpr[6]);
    ctx.set_gpr(7, ctx.gpr[7] + static_cast<std::uint32_t>(32760));
    rt.memory().aot_store32(ctx.gpr[6] + static_cast<std::uint32_t>(84), ctx.gpr[7]);
    ctx.set_gpr(7, rt.memory().aot_load32(ctx.gpr[8] + static_cast<std::uint32_t>(0)));
    ctx.set_gpr(6, 1u << 16u);
    ctx.set_gpr(1, 1u << 16u);
    ctx.set_gpr(7, ctx.gpr[7] - ctx.gpr[2]);
    rt.memory().aot_store32(ctx.gpr[8] + static_cast<std::uint32_t>(0), ctx.gpr[7]);
    ctx.set_gpr(7, ctx.gpr[7] << 2u);
    ctx.set_gpr(7, ctx.gpr[18] + ctx.gpr[7]);
    ctx.set_gpr(7, ctx.gpr[7] + static_cast<std::uint32_t>(852));
    ctx.set_gpr(1, ctx.gpr[1] | 140u);
    ctx.set_gpr(8, ctx.gpr[3] + ctx.gpr[1]);
    ctx.set_gpr(1, 1u << 16u);
    ctx.set_gpr(6, ctx.gpr[3] + ctx.gpr[6]);
    ctx.set_gpr(7, ctx.gpr[7] + static_cast<std::uint32_t>(32760));
    rt.memory().aot_store32(ctx.gpr[6] + static_cast<std::uint32_t>(88), ctx.gpr[7]);
    ctx.set_gpr(7, rt.memory().aot_load32(ctx.gpr[8] + static_cast<std::uint32_t>(0)));
    ctx.set_gpr(6, 1u << 16u);
    ctx.set_gpr(6, ctx.gpr[3] + ctx.gpr[6]);
    ctx.set_gpr(7, ctx.gpr[7] - ctx.gpr[2]);
    rt.memory().aot_store32(ctx.gpr[8] + static_cast<std::uint32_t>(0), ctx.gpr[7]);
    ctx.set_gpr(7, ctx.gpr[7] << 2u);
    ctx.set_gpr(7, ctx.gpr[18] + ctx.gpr[7]);
    ctx.set_gpr(7, ctx.gpr[7] + static_cast<std::uint32_t>(852));
    ctx.set_gpr(7, ctx.gpr[7] + static_cast<std::uint32_t>(32760));
    ctx.set_gpr(1, ctx.gpr[1] | 144u);
    rt.memory().aot_store32(ctx.gpr[6] + static_cast<std::uint32_t>(92), ctx.gpr[7]);
    ctx.set_gpr(8, ctx.gpr[3] + ctx.gpr[1]);
    ctx.set_gpr(7, rt.memory().aot_load32(ctx.gpr[8] + static_cast<std::uint32_t>(0)));
    ctx.set_gpr(6, 1u << 16u);
    ctx.set_gpr(1, 1u << 16u);
    ctx.set_gpr(7, ctx.gpr[7] - ctx.gpr[2]);
    rt.memory().aot_store32(ctx.gpr[8] + static_cast<std::uint32_t>(0), ctx.gpr[7]);
    ctx.set_gpr(7, ctx.gpr[7] << 2u);
    ctx.set_gpr(7, ctx.gpr[18] + ctx.gpr[7]);
    ctx.set_gpr(7, ctx.gpr[7] + static_cast<std::uint32_t>(852));
    ctx.set_gpr(1, ctx.gpr[1] | 148u);
    ctx.set_gpr(8, ctx.gpr[3] + ctx.gpr[1]);
    ctx.set_gpr(1, 1u << 16u);
    ctx.set_gpr(6, ctx.gpr[3] + ctx.gpr[6]);
    ctx.set_gpr(7, ctx.gpr[7] + static_cast<std::uint32_t>(32760));
    rt.memory().aot_store32(ctx.gpr[6] + static_cast<std::uint32_t>(96), ctx.gpr[7]);
    ctx.set_gpr(7, rt.memory().aot_load32(ctx.gpr[8] + static_cast<std::uint32_t>(0)));
    ctx.set_gpr(6, 1u << 16u);
    ctx.set_gpr(6, ctx.gpr[3] + ctx.gpr[6]);
    ctx.set_gpr(7, ctx.gpr[7] - ctx.gpr[2]);
    rt.memory().aot_store32(ctx.gpr[8] + static_cast<std::uint32_t>(0), ctx.gpr[7]);
    ctx.set_gpr(7, ctx.gpr[7] << 2u);
    ctx.set_gpr(7, ctx.gpr[18] + ctx.gpr[7]);
    ctx.set_gpr(7, ctx.gpr[7] + static_cast<std::uint32_t>(852));
    ctx.set_gpr(7, ctx.gpr[7] + static_cast<std::uint32_t>(32760));
    ctx.set_gpr(1, ctx.gpr[1] | 152u);
    rt.memory().aot_store32(ctx.gpr[6] + static_cast<std::uint32_t>(100), ctx.gpr[7]);
    ctx.set_gpr(8, ctx.gpr[3] + ctx.gpr[1]);
    ctx.set_gpr(7, rt.memory().aot_load32(ctx.gpr[8] + static_cast<std::uint32_t>(0)));
    ctx.set_gpr(6, 1u << 16u);
    ctx.set_gpr(6, ctx.gpr[3] + ctx.gpr[6]);
    ctx.set_gpr(7, ctx.gpr[7] - ctx.gpr[2]);
    rt.memory().aot_store32(ctx.gpr[8] + static_cast<std::uint32_t>(0), ctx.gpr[7]);
    ctx.set_gpr(7, ctx.gpr[7] << 2u);
    ctx.set_gpr(7, ctx.gpr[18] + ctx.gpr[7]);
    ctx.set_gpr(7, ctx.gpr[7] + static_cast<std::uint32_t>(852));
    ctx.set_gpr(7, ctx.gpr[7] + static_cast<std::uint32_t>(32760));
    rt.memory().aot_store32(ctx.gpr[6] + static_cast<std::uint32_t>(104), ctx.gpr[7]);
    ctx.set_gpr(5, ctx.gpr[5] + static_cast<std::uint32_t>(8));
    ctx.set_gpr(6, static_cast<std::int32_t>(ctx.gpr[5]) < -2 ? 1u : 0u);
    { const bool branch_taken = ctx.gpr[6] != 0u;
    ctx.set_gpr(3, ctx.gpr[3] + static_cast<std::uint32_t>(32));
      if (branch_taken) {
          goto L_08A9C82C;
      }
      goto L_08A9C9E0;
    }
L_08A9C9E0:
    ctx.set_gpr(1, static_cast<std::int32_t>(ctx.gpr[5]) < 6 ? 1u : 0u);
    goto L_08A9C9E4;
L_08A9C9E4:
    { const bool branch_taken = ctx.gpr[1] == 0u;
    // nop
      if (branch_taken) {
          goto L_08A9CA44;
      }
      goto L_08A9C9EC;
    }
L_08A9C9EC:
    ctx.set_gpr(2, ctx.gpr[4] + ctx.gpr[29]);
    ctx.set_gpr(4, rt.memory().aot_load32(ctx.gpr[2] + static_cast<std::uint32_t>(40)));
    ctx.set_gpr(2, ctx.gpr[5] << 2u);
    ctx.set_gpr(6, ctx.gpr[18] + ctx.gpr[2]);
    goto L_08A9C9FC;
L_08A9C9FC:
    ctx.set_gpr(2, 1u << 16u);
    ctx.set_gpr(2, ctx.gpr[6] + ctx.gpr[2]);
    ctx.set_gpr(3, rt.memory().aot_load32(ctx.gpr[2] + static_cast<std::uint32_t>(124)));
    ctx.set_gpr(5, ctx.gpr[5] + static_cast<std::uint32_t>(1));
    ctx.set_gpr(2, 1u << 16u);
    ctx.set_gpr(2, ctx.gpr[6] + ctx.gpr[2]);
    ctx.set_gpr(3, ctx.gpr[3] - ctx.gpr[4]);
    rt.memory().aot_store32(ctx.gpr[2] + static_cast<std::uint32_t>(124), ctx.gpr[3]);
    ctx.set_gpr(2, ctx.gpr[3] << 2u);
    ctx.set_gpr(2, ctx.gpr[18] + ctx.gpr[2]);
    ctx.set_gpr(3, ctx.gpr[2] + static_cast<std::uint32_t>(852));
    ctx.set_gpr(2, 1u << 16u);
    ctx.set_gpr(2, ctx.gpr[6] + ctx.gpr[2]);
    ctx.set_gpr(3, ctx.gpr[3] + static_cast<std::uint32_t>(32760));
    rt.memory().aot_store32(ctx.gpr[2] + static_cast<std::uint32_t>(76), ctx.gpr[3]);
    ctx.set_gpr(2, static_cast<std::int32_t>(ctx.gpr[5]) < 6 ? 1u : 0u);
    { const bool branch_taken = ctx.gpr[2] != 0u;
    ctx.set_gpr(6, ctx.gpr[6] + static_cast<std::uint32_t>(4));
      if (branch_taken) {
          goto L_08A9C9FC;
      }
      goto L_08A9CA44;
    }
L_08A9CA44:
    ctx.set_gpr(2, ctx.gpr[17] << 2u);
    goto L_08A9CA48;
L_08A9CA48:
    ctx.set_gpr(2, ctx.gpr[2] + ctx.gpr[29]);
    ctx.set_gpr(6, ctx.gpr[2] + static_cast<std::uint32_t>(40));
    ctx.set_gpr(4, rt.memory().aot_load32(ctx.gpr[6] + static_cast<std::uint32_t>(0)));
    ctx.set_gpr(3, ctx.gpr[16] - ctx.gpr[4]);
    ctx.set_gpr(1, static_cast<std::int32_t>(ctx.gpr[3]) < static_cast<std::int32_t>(ctx.gpr[16]) ? 1u : 0u);
    { const bool branch_taken = ctx.gpr[1] == 0u;
    // nop
      if (branch_taken) {
          goto L_08A9CBDC;
      }
      goto L_08A9CA64;
    }
L_08A9CA64:
    ctx.set_gpr(1, static_cast<std::int32_t>(ctx.gpr[4]) < 9 ? 1u : 0u);
    { const bool branch_taken = ctx.gpr[1] != 0u;
    ctx.set_gpr(2, ctx.gpr[16] + static_cast<std::uint32_t>(-8));
      if (branch_taken) {
          goto L_08A9CBAC;
      }
      goto L_08A9CA70;
    }
L_08A9CA70:
    ctx.set_gpr(4, static_cast<std::int32_t>(ctx.gpr[16]) < static_cast<std::int32_t>(ctx.gpr[3]) ? 1u : 0u);
    ctx.set_gpr(9, 0u + 0u);
    ctx.set_gpr(8, 0u + 0u);
    ctx.set_gpr(7, 0u + 0u);
    { const bool branch_taken = ctx.gpr[4] != 0u;
    ctx.set_gpr(5, 0u + 0u);
      if (branch_taken) {
          goto L_08A9CAA0;
      }
      goto L_08A9CA88;
    }
L_08A9CA88:
    ctx.set_gpr(1, 32767u << 16u);
    ctx.set_gpr(1, ctx.gpr[1] | 65535u);
    ctx.set_gpr(1, static_cast<std::int32_t>(ctx.gpr[16]) < static_cast<std::int32_t>(ctx.gpr[1]) ? 1u : 0u);
    { const bool branch_taken = ctx.gpr[1] == 0u;
    // nop
      if (branch_taken) {
          goto L_08A9CAA0;
      }
      goto L_08A9CA9C;
    }
L_08A9CA9C:
    ctx.set_gpr(5, 0u + static_cast<std::uint32_t>(1));
    goto L_08A9CAA0;
L_08A9CAA0:
    { const bool branch_taken = ctx.gpr[5] == 0u;
    // nop
      if (branch_taken) {
          goto L_08A9CAC8;
      }
      goto L_08A9CAA8;
    }
L_08A9CAA8:
    ctx.set_gpr(4, rt.memory().aot_load32(ctx.gpr[6] + static_cast<std::uint32_t>(0)));
    ctx.set_gpr(1, 32767u << 16u);
    ctx.set_gpr(1, ctx.gpr[1] | 65535u);
    ctx.set_gpr(4, ctx.gpr[16] - ctx.gpr[4]);
    ctx.set_gpr(1, static_cast<std::int32_t>(ctx.gpr[4]) < static_cast<std::int32_t>(ctx.gpr[1]) ? 1u : 0u);
    { const bool branch_taken = ctx.gpr[1] == 0u;
    // nop
      if (branch_taken) {
          goto L_08A9CAC8;
      }
      goto L_08A9CAC4;
    }
L_08A9CAC4:
    ctx.set_gpr(7, 0u + static_cast<std::uint32_t>(1));
    goto L_08A9CAC8;
L_08A9CAC8:
    { const bool branch_taken = ctx.gpr[7] == 0u;
    // nop
      if (branch_taken) {
          goto L_08A9CAE8;
      }
      goto L_08A9CAD0;
    }
L_08A9CAD0:
    ctx.set_gpr(5, rt.memory().aot_load32(ctx.gpr[6] + static_cast<std::uint32_t>(0)));
    ctx.set_gpr(4, 32768u << 16u);
    ctx.set_gpr(5, ctx.gpr[16] - ctx.gpr[5]);
    { const bool branch_taken = ctx.gpr[5] == ctx.gpr[4];
    // nop
      if (branch_taken) {
          goto L_08A9CAE8;
      }
      goto L_08A9CAE4;
    }
L_08A9CAE4:
    ctx.set_gpr(8, 0u + static_cast<std::uint32_t>(1));
    goto L_08A9CAE8;
L_08A9CAE8:
    { const bool branch_taken = ctx.gpr[8] == 0u;
    // nop
      if (branch_taken) {
          goto L_08A9CB2C;
      }
      goto L_08A9CAF0;
    }
L_08A9CAF0:
    ctx.set_gpr(7, rt.memory().aot_load32(ctx.gpr[6] + static_cast<std::uint32_t>(0)));
    ctx.set_gpr(4, ctx.gpr[16] - ctx.gpr[7]);
    ctx.set_gpr(6, 32768u << 16u);
    ctx.set_gpr(4, 0u - ctx.gpr[4]);
    ctx.set_gpr(5, ctx.gpr[16] & ctx.gpr[6]);
    ctx.set_gpr(4, ctx.gpr[4] & ctx.gpr[6]);
    { const bool branch_taken = ctx.gpr[5] != ctx.gpr[4];
    ctx.set_gpr(8, 0u + static_cast<std::uint32_t>(1));
      if (branch_taken) {
          goto L_08A9CB20;
      }
      goto L_08A9CB10;
    }
L_08A9CB10:
    ctx.set_gpr(4, ctx.gpr[7] & ctx.gpr[6]);
    { const bool branch_taken = ctx.gpr[5] == ctx.gpr[4];
    // nop
      if (branch_taken) {
          goto L_08A9CB20;
      }
      goto L_08A9CB1C;
    }
L_08A9CB1C:
    ctx.set_gpr(8, 0u + 0u);
    goto L_08A9CB20;
L_08A9CB20:
    { const bool branch_taken = ctx.gpr[8] == 0u;
    // nop
      if (branch_taken) {
          goto L_08A9CB2C;
      }
      goto L_08A9CB28;
    }
L_08A9CB28:
    ctx.set_gpr(9, 0u + static_cast<std::uint32_t>(1));
    goto L_08A9CB2C;
L_08A9CB2C:
    if (ctx.gpr[9] == 0u) {
    ctx.set_gpr(1, static_cast<std::int32_t>(ctx.gpr[3]) < static_cast<std::int32_t>(ctx.gpr[16]) ? 1u : 0u);
        goto L_08A9CBB0;
    }
    goto L_08A9CB34;
L_08A9CB34:
    ctx.set_gpr(4, ctx.gpr[3] << 2u);
    ctx.set_gpr(5, ctx.gpr[18] + ctx.gpr[4]);
    goto L_08A9CB3C;
L_08A9CB3C:
    ctx.set_gpr(4, 1u << 16u);
    ctx.set_gpr(4, ctx.gpr[5] + ctx.gpr[4]);
    rt.memory().aot_store32(ctx.gpr[4] + static_cast<std::uint32_t>(-31924), 0u);
    ctx.set_gpr(4, 1u << 16u);
    ctx.set_gpr(4, ctx.gpr[5] + ctx.gpr[4]);
    rt.memory().aot_store32(ctx.gpr[4] + static_cast<std::uint32_t>(-31920), 0u);
    ctx.set_gpr(4, 1u << 16u);
    ctx.set_gpr(4, ctx.gpr[5] + ctx.gpr[4]);
    rt.memory().aot_store32(ctx.gpr[4] + static_cast<std::uint32_t>(-31916), 0u);
    ctx.set_gpr(4, 1u << 16u);
    ctx.set_gpr(4, ctx.gpr[5] + ctx.gpr[4]);
    rt.memory().aot_store32(ctx.gpr[4] + static_cast<std::uint32_t>(-31912), 0u);
    ctx.set_gpr(4, 1u << 16u);
    ctx.set_gpr(4, ctx.gpr[5] + ctx.gpr[4]);
    rt.memory().aot_store32(ctx.gpr[4] + static_cast<std::uint32_t>(-31908), 0u);
    ctx.set_gpr(4, 1u << 16u);
    ctx.set_gpr(4, ctx.gpr[5] + ctx.gpr[4]);
    rt.memory().aot_store32(ctx.gpr[4] + static_cast<std::uint32_t>(-31904), 0u);
    ctx.set_gpr(4, 1u << 16u);
    ctx.set_gpr(4, ctx.gpr[5] + ctx.gpr[4]);
    rt.memory().aot_store32(ctx.gpr[4] + static_cast<std::uint32_t>(-31900), 0u);
    ctx.set_gpr(4, 1u << 16u);
    ctx.set_gpr(4, ctx.gpr[5] + ctx.gpr[4]);
    rt.memory().aot_store32(ctx.gpr[4] + static_cast<std::uint32_t>(-31896), 0u);
    ctx.set_gpr(3, ctx.gpr[3] + static_cast<std::uint32_t>(8));
    ctx.set_gpr(4, static_cast<std::int32_t>(ctx.gpr[3]) < static_cast<std::int32_t>(ctx.gpr[2]) ? 1u : 0u);
    { const bool branch_taken = ctx.gpr[4] != 0u;
    ctx.set_gpr(5, ctx.gpr[5] + static_cast<std::uint32_t>(32));
      if (branch_taken) {
          goto L_08A9CB3C;
      }
      goto L_08A9CBAC;
    }
L_08A9CBAC:
    ctx.set_gpr(1, static_cast<std::int32_t>(ctx.gpr[3]) < static_cast<std::int32_t>(ctx.gpr[16]) ? 1u : 0u);
    goto L_08A9CBB0;
L_08A9CBB0:
    { const bool branch_taken = ctx.gpr[1] == 0u;
    // nop
      if (branch_taken) {
          goto L_08A9CBDC;
      }
      goto L_08A9CBB8;
    }
L_08A9CBB8:
    ctx.set_gpr(2, ctx.gpr[3] << 2u);
    ctx.set_gpr(4, ctx.gpr[18] + ctx.gpr[2]);
    goto L_08A9CBC0;
L_08A9CBC0:
    ctx.set_gpr(2, 1u << 16u);
    ctx.set_gpr(2, ctx.gpr[4] + ctx.gpr[2]);
    rt.memory().aot_store32(ctx.gpr[2] + static_cast<std::uint32_t>(-31924), 0u);
    ctx.set_gpr(3, ctx.gpr[3] + static_cast<std::uint32_t>(1));
    ctx.set_gpr(2, static_cast<std::int32_t>(ctx.gpr[3]) < static_cast<std::int32_t>(ctx.gpr[16]) ? 1u : 0u);
    { const bool branch_taken = ctx.gpr[2] != 0u;
    ctx.set_gpr(4, ctx.gpr[4] + static_cast<std::uint32_t>(4));
      if (branch_taken) {
          goto L_08A9CBC0;
      }
      goto L_08A9CBDC;
    }
L_08A9CBDC:
    ctx.set_gpr(2, 0u + static_cast<std::uint32_t>(1));
    goto L_08A9CBE0;
L_08A9CBE0:
    ctx.set_gpr(31, rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(28)));
    ctx.set_gpr(20, rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(24)));
    ctx.set_gpr(19, rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(20)));
    ctx.set_gpr(18, rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(16)));
    ctx.set_gpr(17, rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(12)));
    ctx.set_gpr(16, rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(8)));
    jump_target = ctx.gpr[31];
    ctx.set_gpr(29, ctx.gpr[29] + static_cast<std::uint32_t>(64));
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_08A9CC00:
    ctx.set_gpr(29, ctx.gpr[29] + static_cast<std::uint32_t>(-64));
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(44), ctx.gpr[31]);
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(40), ctx.gpr[30]);
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(36), ctx.gpr[23]);
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(32), ctx.gpr[22]);
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(28), ctx.gpr[21]);
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(24), ctx.gpr[20]);
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(20), ctx.gpr[19]);
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(16), ctx.gpr[18]);
    ctx.set_gpr(18, ctx.gpr[5] + 0u);
    ctx.set_gpr(30, ctx.gpr[6] + 0u);
    ctx.set_gpr(21, ctx.gpr[7] + 0u);
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(12), ctx.gpr[17]);
    ctx.set_gpr(19, ctx.gpr[8] + 0u);
    ctx.set_gpr(20, ctx.gpr[4] + 0u);
    ctx.set_gpr(5, ctx.gpr[21] + 0u);
    ctx.set_gpr(6, ctx.gpr[18] + 0u);
    ctx.set_gpr(7, ctx.gpr[30] + 0u);
    ctx.set_gpr(31, 0x08A9CC50u);
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(8), ctx.gpr[16]);
    if (rt.invoke_chained_direct<&recomp_unit_0165_entry, 165u, 657u, 0x08A9BEE8u>(ctx, &aot_mem) && ctx.pc == 0x08A9CC50u) goto L_08A9CC50;
    return;
L_08A9CC50:
    ctx.set_gpr(16, ctx.gpr[2] + 0u);
    ctx.set_gpr(22, ctx.gpr[21] << 2u);
    ctx.set_gpr(3, ctx.gpr[22] + ctx.gpr[20]);
    ctx.set_gpr(2, 1u << 16u);
    ctx.set_gpr(2, ctx.gpr[3] + ctx.gpr[2]);
    ctx.set_gpr(2, rt.memory().aot_load32(ctx.gpr[2] + static_cast<std::uint32_t>(100)));
    ctx.set_gpr(2, static_cast<std::int32_t>(ctx.gpr[16]) < static_cast<std::int32_t>(ctx.gpr[2]) ? 1u : 0u);
    if (ctx.gpr[2] != 0u) {
    ctx.set_gpr(1, 1u << 16u);
        goto L_08A9CC7C;
    }
    goto L_08A9CC74;
L_08A9CC74:
    { const bool branch_taken = 0u == 0u;
    ctx.set_gpr(2, 0u + 0u);
      if (branch_taken) {
          goto L_08A9CFF4;
      }
      goto L_08A9CC7C;
    }
L_08A9CC7C:
    ctx.set_gpr(1, ctx.gpr[1] | 76u);
    ctx.set_gpr(17, ctx.gpr[3] + ctx.gpr[1]);
    ctx.set_gpr(23, rt.memory().aot_load32(ctx.gpr[17] + static_cast<std::uint32_t>(0)));
    ctx.set_gpr(5, ctx.gpr[18] + 0u);
    ctx.set_gpr(18, ctx.gpr[16] << 2u);
    ctx.set_gpr(2, ctx.gpr[18] + ctx.gpr[23]);
    ctx.set_gpr(2, rt.memory().aot_load32(ctx.gpr[2] + static_cast<std::uint32_t>(4)));
    ctx.set_gpr(4, ctx.gpr[20] + 0u);
    ctx.set_gpr(31, 0x08A9CCA4u);
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(60), ctx.gpr[2]);
    if (rt.invoke_chained_direct<&recomp_unit_0164_entry, 164u, 150u, 0x08A94B5Cu>(ctx, &aot_mem) && ctx.pc == 0x08A9CCA4u) goto L_08A9CCA4;
    return;
L_08A9CCA4:
    ctx.set_gpr(3, ctx.gpr[30] + ctx.gpr[2]);
    ctx.set_gpr(2, rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(60)));
    if (ctx.gpr[2] == ctx.gpr[3]) {
    ctx.set_gpr(1, ctx.gpr[21] < static_cast<std::uint32_t>(6) ? 1u : 0u);
        goto L_08A9CCBC;
    }
    goto L_08A9CCB4;
L_08A9CCB4:
    { const bool branch_taken = 0u == 0u;
    ctx.set_gpr(2, 0u + 0u);
      if (branch_taken) {
          goto L_08A9CFF4;
      }
      goto L_08A9CCBC;
    }
L_08A9CCBC:
    if (ctx.gpr[1] == 0u) {
    ctx.set_gpr(2, ctx.gpr[21] << 3u);
        goto L_08A9CFE4;
    }
    goto L_08A9CCC4;
L_08A9CCC4:
    ctx.set_gpr(3, 2226u << 16u);
    ctx.set_gpr(3, ctx.gpr[3] + static_cast<std::uint32_t>(-26184));
    ctx.set_gpr(2, ctx.gpr[22] + 0u);
    ctx.set_gpr(2, ctx.gpr[2] + ctx.gpr[3]);
    ctx.set_gpr(2, rt.memory().aot_load32(ctx.gpr[2] + static_cast<std::uint32_t>(0)));
    jump_target = ctx.gpr[2];
    // nop
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_08A9CCE0:
    ctx.set_gpr(4, ctx.gpr[16] + static_cast<std::uint32_t>(2));
    ctx.set_gpr(1, 1u << 16u);
    ctx.set_gpr(4, ctx.gpr[4] << 2u);
    ctx.set_gpr(4, ctx.gpr[23] + ctx.gpr[4]);
    ctx.set_gpr(5, rt.memory().aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(0)));
    ctx.set_gpr(2, ctx.gpr[22] + ctx.gpr[20]);
    ctx.set_gpr(1, ctx.gpr[1] | 76u);
    ctx.set_gpr(3, ctx.gpr[2] + ctx.gpr[1]);
    ctx.set_gpr(2, ctx.gpr[19] << 4u);
    ctx.set_gpr(2, ctx.gpr[2] + ctx.gpr[20]);
    ctx.set_gpr(4, ctx.gpr[16] + static_cast<std::uint32_t>(3));
    rt.memory().aot_store32(ctx.gpr[2] + static_cast<std::uint32_t>(80), ctx.gpr[5]);
    ctx.set_gpr(7, ctx.gpr[4] << 2u);
    ctx.set_gpr(4, ctx.gpr[16] + static_cast<std::uint32_t>(4));
    ctx.set_gpr(5, rt.memory().aot_load32(ctx.gpr[3] + static_cast<std::uint32_t>(0)));
    ctx.set_gpr(6, ctx.gpr[4] << 2u);
    ctx.set_gpr(4, ctx.gpr[5] + ctx.gpr[7]);
    ctx.set_gpr(5, rt.memory().aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(0)));
    rt.memory().aot_store32(ctx.gpr[2] + static_cast<std::uint32_t>(84), ctx.gpr[5]);
    ctx.set_gpr(5, rt.memory().aot_load32(ctx.gpr[3] + static_cast<std::uint32_t>(0)));
    ctx.set_gpr(4, ctx.gpr[16] + static_cast<std::uint32_t>(5));
    ctx.set_gpr(4, ctx.gpr[4] << 2u);
    ctx.set_gpr(5, ctx.gpr[5] + ctx.gpr[6]);
    ctx.set_gpr(5, rt.memory().aot_load32(ctx.gpr[5] + static_cast<std::uint32_t>(0)));
    rt.memory().aot_store32(ctx.gpr[2] + static_cast<std::uint32_t>(88), ctx.gpr[5]);
    ctx.set_gpr(3, rt.memory().aot_load32(ctx.gpr[3] + static_cast<std::uint32_t>(0)));
    ctx.set_gpr(3, ctx.gpr[3] + ctx.gpr[4]);
    ctx.set_gpr(3, rt.memory().aot_load32(ctx.gpr[3] + static_cast<std::uint32_t>(0)));
    { const bool branch_taken = 0u == 0u;
    rt.memory().aot_store32(ctx.gpr[2] + static_cast<std::uint32_t>(92), ctx.gpr[3]);
      if (branch_taken) {
          goto L_08A9CFE0;
      }
      goto L_08A9CD58;
    }
L_08A9CD58:
    ctx.set_gpr(2, ctx.gpr[19] << 3u);
    ctx.set_gpr(6, ctx.gpr[2] + ctx.gpr[20]);
    ctx.set_gpr(2, ctx.gpr[16] + static_cast<std::uint32_t>(2));
    ctx.set_gpr(2, ctx.gpr[2] << 2u);
    ctx.set_gpr(2, ctx.gpr[23] + ctx.gpr[2]);
    ctx.set_gpr(5, rt.memory().aot_load32(ctx.gpr[2] + static_cast<std::uint32_t>(0)));
    ctx.set_gpr(4, ctx.gpr[22] + ctx.gpr[20]);
    ctx.set_gpr(2, ctx.gpr[16] + static_cast<std::uint32_t>(3));
    ctx.set_gpr(3, ctx.gpr[2] << 2u);
    ctx.set_gpr(2, 1u << 16u);
    rt.memory().aot_store32(ctx.gpr[6] + static_cast<std::uint32_t>(208), ctx.gpr[5]);
    ctx.set_gpr(2, ctx.gpr[4] + ctx.gpr[2]);
    ctx.set_gpr(2, rt.memory().aot_load32(ctx.gpr[2] + static_cast<std::uint32_t>(76)));
    ctx.set_gpr(2, ctx.gpr[2] + ctx.gpr[3]);
    ctx.set_gpr(2, rt.memory().aot_load32(ctx.gpr[2] + static_cast<std::uint32_t>(0)));
    { const bool branch_taken = 0u == 0u;
    rt.memory().aot_store32(ctx.gpr[6] + static_cast<std::uint32_t>(212), ctx.gpr[2]);
      if (branch_taken) {
          goto L_08A9CFE0;
      }
      goto L_08A9CD9C;
    }
L_08A9CD9C:
    ctx.set_gpr(4, ctx.gpr[19] << 3u);
    ctx.set_gpr(4, ctx.gpr[4] + ctx.gpr[19]);
    ctx.set_gpr(4, ctx.gpr[4] << 2u);
    ctx.set_gpr(3, 0u + 0u);
    ctx.set_gpr(2, 0u + 0u);
    ctx.set_gpr(6, ctx.gpr[20] + ctx.gpr[4]);
    goto L_08A9CDB4;
L_08A9CDB4:
    ctx.set_gpr(5, rt.memory().aot_load32(ctx.gpr[17] + static_cast<std::uint32_t>(0)));
    ctx.set_gpr(3, ctx.gpr[3] + static_cast<std::uint32_t>(3));
    ctx.set_gpr(4, static_cast<std::int32_t>(ctx.gpr[3]) < 9 ? 1u : 0u);
    ctx.set_gpr(5, ctx.gpr[18] + ctx.gpr[5]);
    ctx.set_gpr(5, ctx.gpr[5] + ctx.gpr[2]);
    ctx.set_gpr(5, rt.memory().aot_load32(ctx.gpr[5] + static_cast<std::uint32_t>(8)));
    rt.memory().aot_store32(ctx.gpr[6] + static_cast<std::uint32_t>(272), ctx.gpr[5]);
    ctx.set_gpr(5, rt.memory().aot_load32(ctx.gpr[17] + static_cast<std::uint32_t>(0)));
    ctx.set_gpr(5, ctx.gpr[18] + ctx.gpr[5]);
    ctx.set_gpr(5, ctx.gpr[5] + ctx.gpr[2]);
    ctx.set_gpr(5, rt.memory().aot_load32(ctx.gpr[5] + static_cast<std::uint32_t>(12)));
    rt.memory().aot_store32(ctx.gpr[6] + static_cast<std::uint32_t>(276), ctx.gpr[5]);
    ctx.set_gpr(5, rt.memory().aot_load32(ctx.gpr[17] + static_cast<std::uint32_t>(0)));
    ctx.set_gpr(5, ctx.gpr[18] + ctx.gpr[5]);
    ctx.set_gpr(5, ctx.gpr[5] + ctx.gpr[2]);
    ctx.set_gpr(5, rt.memory().aot_load32(ctx.gpr[5] + static_cast<std::uint32_t>(16)));
    ctx.set_gpr(2, ctx.gpr[2] + static_cast<std::uint32_t>(12));
    rt.memory().aot_store32(ctx.gpr[6] + static_cast<std::uint32_t>(280), ctx.gpr[5]);
    { const bool branch_taken = ctx.gpr[4] != 0u;
    ctx.set_gpr(6, ctx.gpr[6] + static_cast<std::uint32_t>(12));
      if (branch_taken) {
          goto L_08A9CDB4;
      }
      goto L_08A9CE04;
    }
L_08A9CE04:
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_08A9CFE0;
      }
      goto L_08A9CE0C;
    }
L_08A9CE0C:
    ctx.set_gpr(2, ctx.gpr[19] << 2u);
    ctx.set_gpr(2, ctx.gpr[2] + ctx.gpr[19]);
    ctx.set_gpr(2, ctx.gpr[2] << 4u);
    ctx.set_gpr(4, 0u + 0u);
    ctx.set_gpr(3, 0u + 0u);
    ctx.set_gpr(2, ctx.gpr[20] + ctx.gpr[2]);
    goto L_08A9CE24;
L_08A9CE24:
    ctx.set_gpr(6, rt.memory().aot_load32(ctx.gpr[17] + static_cast<std::uint32_t>(0)));
    ctx.set_gpr(4, ctx.gpr[4] + static_cast<std::uint32_t>(5));
    ctx.set_gpr(5, static_cast<std::int32_t>(ctx.gpr[4]) < 20 ? 1u : 0u);
    ctx.set_gpr(6, ctx.gpr[18] + ctx.gpr[6]);
    ctx.set_gpr(6, ctx.gpr[6] + ctx.gpr[3]);
    ctx.set_gpr(6, rt.memory().aot_load32(ctx.gpr[6] + static_cast<std::uint32_t>(8)));
    rt.memory().aot_store32(ctx.gpr[2] + static_cast<std::uint32_t>(560), ctx.gpr[6]);
    ctx.set_gpr(6, rt.memory().aot_load32(ctx.gpr[17] + static_cast<std::uint32_t>(0)));
    ctx.set_gpr(6, ctx.gpr[18] + ctx.gpr[6]);
    ctx.set_gpr(6, ctx.gpr[6] + ctx.gpr[3]);
    ctx.set_gpr(6, rt.memory().aot_load32(ctx.gpr[6] + static_cast<std::uint32_t>(12)));
    rt.memory().aot_store32(ctx.gpr[2] + static_cast<std::uint32_t>(564), ctx.gpr[6]);
    ctx.set_gpr(6, rt.memory().aot_load32(ctx.gpr[17] + static_cast<std::uint32_t>(0)));
    ctx.set_gpr(6, ctx.gpr[18] + ctx.gpr[6]);
    ctx.set_gpr(6, ctx.gpr[6] + ctx.gpr[3]);
    ctx.set_gpr(6, rt.memory().aot_load32(ctx.gpr[6] + static_cast<std::uint32_t>(16)));
    rt.memory().aot_store32(ctx.gpr[2] + static_cast<std::uint32_t>(568), ctx.gpr[6]);
    ctx.set_gpr(6, rt.memory().aot_load32(ctx.gpr[17] + static_cast<std::uint32_t>(0)));
    ctx.set_gpr(6, ctx.gpr[18] + ctx.gpr[6]);
    ctx.set_gpr(6, ctx.gpr[6] + ctx.gpr[3]);
    ctx.set_gpr(6, rt.memory().aot_load32(ctx.gpr[6] + static_cast<std::uint32_t>(20)));
    rt.memory().aot_store32(ctx.gpr[2] + static_cast<std::uint32_t>(572), ctx.gpr[6]);
    ctx.set_gpr(6, rt.memory().aot_load32(ctx.gpr[17] + static_cast<std::uint32_t>(0)));
    ctx.set_gpr(6, ctx.gpr[18] + ctx.gpr[6]);
    ctx.set_gpr(6, ctx.gpr[6] + ctx.gpr[3]);
    ctx.set_gpr(6, rt.memory().aot_load32(ctx.gpr[6] + static_cast<std::uint32_t>(24)));
    ctx.set_gpr(3, ctx.gpr[3] + static_cast<std::uint32_t>(20));
    rt.memory().aot_store32(ctx.gpr[2] + static_cast<std::uint32_t>(576), ctx.gpr[6]);
    { const bool branch_taken = ctx.gpr[5] != 0u;
    ctx.set_gpr(2, ctx.gpr[2] + static_cast<std::uint32_t>(20));
      if (branch_taken) {
          goto L_08A9CE24;
      }
      goto L_08A9CE9C;
    }
L_08A9CE9C:
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_08A9CFE0;
      }
      goto L_08A9CEA4;
    }
L_08A9CEA4:
    ctx.set_gpr(1, 1u << 16u);
    ctx.set_gpr(2, ctx.gpr[22] + ctx.gpr[20]);
    ctx.set_gpr(1, ctx.gpr[1] | 76u);
    ctx.set_gpr(6, ctx.gpr[2] + ctx.gpr[1]);
    ctx.set_gpr(2, ctx.gpr[19] << 1u);
    ctx.set_gpr(2, ctx.gpr[2] + ctx.gpr[19]);
    ctx.set_gpr(2, ctx.gpr[2] << 2u);
    ctx.set_gpr(5, ctx.gpr[2] + ctx.gpr[20]);
    ctx.set_gpr(2, ctx.gpr[16] + static_cast<std::uint32_t>(2));
    ctx.set_gpr(2, ctx.gpr[2] << 2u);
    ctx.set_gpr(2, ctx.gpr[23] + ctx.gpr[2]);
    ctx.set_gpr(3, rt.memory().aot_load32(ctx.gpr[2] + static_cast<std::uint32_t>(0)));
    ctx.set_gpr(2, ctx.gpr[16] + static_cast<std::uint32_t>(3));
    ctx.set_gpr(4, ctx.gpr[2] << 2u);
    rt.memory().aot_store32(ctx.gpr[5] + static_cast<std::uint32_t>(1200), ctx.gpr[3]);
    ctx.set_gpr(2, ctx.gpr[16] + static_cast<std::uint32_t>(4));
    ctx.set_gpr(3, ctx.gpr[2] << 2u);
    ctx.set_gpr(2, rt.memory().aot_load32(ctx.gpr[6] + static_cast<std::uint32_t>(0)));
    ctx.set_gpr(2, ctx.gpr[2] + ctx.gpr[4]);
    ctx.set_gpr(2, rt.memory().aot_load32(ctx.gpr[2] + static_cast<std::uint32_t>(0)));
    rt.memory().aot_store32(ctx.gpr[5] + static_cast<std::uint32_t>(1204), ctx.gpr[2]);
    ctx.set_gpr(2, rt.memory().aot_load32(ctx.gpr[6] + static_cast<std::uint32_t>(0)));
    ctx.set_gpr(2, ctx.gpr[2] + ctx.gpr[3]);
    ctx.set_gpr(2, rt.memory().aot_load32(ctx.gpr[2] + static_cast<std::uint32_t>(0)));
    { const bool branch_taken = 0u == 0u;
    rt.memory().aot_store32(ctx.gpr[5] + static_cast<std::uint32_t>(1208), ctx.gpr[2]);
      if (branch_taken) {
          goto L_08A9CFE0;
      }
      goto L_08A9CF0C;
    }
L_08A9CF0C:
    ctx.set_gpr(4, ctx.gpr[16] + static_cast<std::uint32_t>(2));
    ctx.set_gpr(1, 1u << 16u);
    ctx.set_gpr(4, ctx.gpr[4] << 2u);
    ctx.set_gpr(4, ctx.gpr[23] + ctx.gpr[4]);
    ctx.set_gpr(5, rt.memory().aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(0)));
    ctx.set_gpr(2, ctx.gpr[22] + ctx.gpr[20]);
    ctx.set_gpr(1, ctx.gpr[1] | 76u);
    ctx.set_gpr(3, ctx.gpr[2] + ctx.gpr[1]);
    ctx.set_gpr(2, ctx.gpr[19] << 5u);
    ctx.set_gpr(2, ctx.gpr[2] + ctx.gpr[20]);
    ctx.set_gpr(4, ctx.gpr[16] + static_cast<std::uint32_t>(3));
    rt.memory().aot_store32(ctx.gpr[2] + static_cast<std::uint32_t>(1296), ctx.gpr[5]);
    ctx.set_gpr(7, ctx.gpr[4] << 2u);
    ctx.set_gpr(4, ctx.gpr[16] + static_cast<std::uint32_t>(4));
    ctx.set_gpr(5, rt.memory().aot_load32(ctx.gpr[3] + static_cast<std::uint32_t>(0)));
    ctx.set_gpr(6, ctx.gpr[4] << 2u);
    ctx.set_gpr(4, ctx.gpr[5] + ctx.gpr[7]);
    ctx.set_gpr(5, rt.memory().aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(0)));
    ctx.set_gpr(4, ctx.gpr[16] + static_cast<std::uint32_t>(5));
    rt.memory().aot_store32(ctx.gpr[2] + static_cast<std::uint32_t>(1300), ctx.gpr[5]);
    ctx.set_gpr(9, ctx.gpr[4] << 2u);
    ctx.set_gpr(4, ctx.gpr[16] + static_cast<std::uint32_t>(6));
    ctx.set_gpr(5, rt.memory().aot_load32(ctx.gpr[3] + static_cast<std::uint32_t>(0)));
    ctx.set_gpr(8, ctx.gpr[4] << 2u);
    ctx.set_gpr(4, ctx.gpr[5] + ctx.gpr[6]);
    ctx.set_gpr(5, rt.memory().aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(0)));
    ctx.set_gpr(4, ctx.gpr[16] + static_cast<std::uint32_t>(7));
    rt.memory().aot_store32(ctx.gpr[2] + static_cast<std::uint32_t>(1304), ctx.gpr[5]);
    ctx.set_gpr(7, ctx.gpr[4] << 2u);
    ctx.set_gpr(4, ctx.gpr[16] + static_cast<std::uint32_t>(8));
    ctx.set_gpr(5, rt.memory().aot_load32(ctx.gpr[3] + static_cast<std::uint32_t>(0)));
    ctx.set_gpr(6, ctx.gpr[4] << 2u);
    ctx.set_gpr(4, ctx.gpr[5] + ctx.gpr[9]);
    ctx.set_gpr(5, rt.memory().aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(0)));
    rt.memory().aot_store32(ctx.gpr[2] + static_cast<std::uint32_t>(1308), ctx.gpr[5]);
    ctx.set_gpr(5, rt.memory().aot_load32(ctx.gpr[3] + static_cast<std::uint32_t>(0)));
    ctx.set_gpr(4, ctx.gpr[16] + static_cast<std::uint32_t>(9));
    ctx.set_gpr(4, ctx.gpr[4] << 2u);
    ctx.set_gpr(5, ctx.gpr[5] + ctx.gpr[8]);
    ctx.set_gpr(5, rt.memory().aot_load32(ctx.gpr[5] + static_cast<std::uint32_t>(0)));
    rt.memory().aot_store32(ctx.gpr[2] + static_cast<std::uint32_t>(1312), ctx.gpr[5]);
    ctx.set_gpr(5, rt.memory().aot_load32(ctx.gpr[3] + static_cast<std::uint32_t>(0)));
    ctx.set_gpr(5, ctx.gpr[5] + ctx.gpr[7]);
    ctx.set_gpr(5, rt.memory().aot_load32(ctx.gpr[5] + static_cast<std::uint32_t>(0)));
    rt.memory().aot_store32(ctx.gpr[2] + static_cast<std::uint32_t>(1316), ctx.gpr[5]);
    ctx.set_gpr(5, rt.memory().aot_load32(ctx.gpr[3] + static_cast<std::uint32_t>(0)));
    ctx.set_gpr(5, ctx.gpr[5] + ctx.gpr[6]);
    ctx.set_gpr(5, rt.memory().aot_load32(ctx.gpr[5] + static_cast<std::uint32_t>(0)));
    rt.memory().aot_store32(ctx.gpr[2] + static_cast<std::uint32_t>(1320), ctx.gpr[5]);
    ctx.set_gpr(3, rt.memory().aot_load32(ctx.gpr[3] + static_cast<std::uint32_t>(0)));
    ctx.set_gpr(3, ctx.gpr[3] + ctx.gpr[4]);
    ctx.set_gpr(3, rt.memory().aot_load32(ctx.gpr[3] + static_cast<std::uint32_t>(0)));
    rt.memory().aot_store32(ctx.gpr[2] + static_cast<std::uint32_t>(1324), ctx.gpr[3]);
    goto L_08A9CFE0;
L_08A9CFE0:
    ctx.set_gpr(2, ctx.gpr[21] << 3u);
    goto L_08A9CFE4;
L_08A9CFE4:
    ctx.set_gpr(2, ctx.gpr[2] + ctx.gpr[20]);
    ctx.set_gpr(3, ctx.gpr[19] + ctx.gpr[2]);
    ctx.set_gpr(2, 0u + static_cast<std::uint32_t>(1));
    rt.memory().aot_store8(ctx.gpr[3] + static_cast<std::uint32_t>(32), static_cast<std::uint8_t>(ctx.gpr[2]));
    goto L_08A9CFF4;
L_08A9CFF4:
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
    jump_target = ctx.gpr[31];
    ctx.set_gpr(29, ctx.gpr[29] + static_cast<std::uint32_t>(64));
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_08A9D024:
    ctx.set_gpr(29, ctx.gpr[29] + static_cast<std::uint32_t>(-192));
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(44), ctx.gpr[31]);
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(40), ctx.gpr[23]);
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(36), ctx.gpr[22]);
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(32), ctx.gpr[21]);
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(28), ctx.gpr[20]);
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(24), ctx.gpr[19]);
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(20), ctx.gpr[18]);
    ctx.set_gpr(18, ctx.gpr[7] + 0u);
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(16), ctx.gpr[17]);
    ctx.set_gpr(20, ctx.gpr[4] + 0u);
    ctx.set_gpr(2, ctx.gpr[18] << 3u);
    ctx.set_gpr(17, ctx.gpr[8] + 0u);
    ctx.set_gpr(2, ctx.gpr[2] + ctx.gpr[20]);
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(12), ctx.gpr[16]);
    ctx.set_gpr(2, ctx.gpr[17] + ctx.gpr[2]);
    ctx.set_gpr(2, rt.memory().aot_load8(ctx.gpr[2] + static_cast<std::uint32_t>(32)));
    ctx.set_gpr(19, ctx.gpr[5] + 0u);
    { const bool branch_taken = ctx.gpr[2] != 0u;
    ctx.set_gpr(21, ctx.gpr[6] + 0u);
      if (branch_taken) {
          goto L_08A9D07C;
      }
      goto L_08A9D074;
    }
L_08A9D074:
    { const bool branch_taken = 0u == 0u;
    ctx.set_gpr(2, 0u + static_cast<std::uint32_t>(-1));
      if (branch_taken) {
          goto L_08A9D3C4;
      }
      goto L_08A9D07C;
    }
L_08A9D07C:
    ctx.set_gpr(22, rt.memory().aot_load32(ctx.gpr[20] + static_cast<std::uint32_t>(12)));
    ctx.set_gpr(23, rt.memory().aot_load32(ctx.gpr[20] + static_cast<std::uint32_t>(20)));
    ctx.set_gpr(4, ctx.gpr[29] + static_cast<std::uint32_t>(120));
    ctx.set_gpr(31, 0x08A9D090u);
    ctx.set_gpr(16, 0u + static_cast<std::uint32_t>(1));
    if (rt.invoke_chained_direct<&recomp_unit_0020_entry, 20u, 299u, 0x08855674u>(ctx, &aot_mem) && ctx.pc == 0x08A9D090u) goto L_08A9D090;
    return;
L_08A9D090:
    ctx.set_gpr(31, 0x08A9D098u);
    ctx.set_gpr(4, ctx.gpr[29] + static_cast<std::uint32_t>(156));
    if (rt.invoke_chained_direct<&recomp_unit_0020_entry, 20u, 299u, 0x08855674u>(ctx, &aot_mem) && ctx.pc == 0x08A9D098u) goto L_08A9D098;
    return;
L_08A9D098:
    ctx.set_gpr(4, ctx.gpr[20] + 0u);
    ctx.set_gpr(31, 0x08A9D0A4u);
    ctx.set_gpr(5, ctx.gpr[19] + 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0164_entry, 164u, 155u, 0x08A94BC8u>(ctx, &aot_mem) && ctx.pc == 0x08A9D0A4u) goto L_08A9D0A4;
    return;
L_08A9D0A4:
    ctx.set_gpr(4, ctx.gpr[20] + 0u);
    ctx.set_gpr(31, 0x08A9D0B0u);
    ctx.set_gpr(5, ctx.gpr[21] + 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0164_entry, 164u, 156u, 0x08A94BD4u>(ctx, &aot_mem) && ctx.pc == 0x08A9D0B0u) goto L_08A9D0B0;
    return;
L_08A9D0B0:
    ctx.set_gpr(1, ctx.gpr[18] < static_cast<std::uint32_t>(6) ? 1u : 0u);
    if (ctx.gpr[1] == 0u) {
    ctx.set_gpr(5, ctx.gpr[22] + 0u);
        goto L_08A9D3AC;
    }
    goto L_08A9D0BC;
L_08A9D0BC:
    ctx.set_gpr(3, 2226u << 16u);
    ctx.set_gpr(2, ctx.gpr[18] << 2u);
    ctx.set_gpr(3, ctx.gpr[3] + static_cast<std::uint32_t>(-26160));
    ctx.set_gpr(2, ctx.gpr[2] + ctx.gpr[3]);
    ctx.set_gpr(2, rt.memory().aot_load32(ctx.gpr[2] + static_cast<std::uint32_t>(0)));
    jump_target = ctx.gpr[2];
    // nop
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_08A9D0D8:
    ctx.set_gpr(2, ctx.gpr[17] << 4u);
    ctx.set_gpr(2, ctx.gpr[2] + ctx.gpr[20]);
    ctx.set_gpr(2, rt.memory().aot_load32(ctx.gpr[2] + static_cast<std::uint32_t>(92)));
    ctx.set_gpr(4, ctx.gpr[20] + 0u);
    ctx.set_gpr(31, 0x08A9D0F0u);
    ctx.set_gpr(5, ctx.gpr[2] + static_cast<std::uint32_t>(-1));
    if (rt.invoke_chained_direct<&recomp_unit_0164_entry, 164u, 557u, 0x08A96A7Cu>(ctx, &aot_mem) && ctx.pc == 0x08A9D0F0u) goto L_08A9D0F0;
    return;
L_08A9D0F0:
    ctx.set_gpr(2, ctx.gpr[2] & 255u);
    { const bool branch_taken = ctx.gpr[2] != 0u;
    // nop
      if (branch_taken) {
          goto L_08A9D3A8;
      }
      goto L_08A9D0FC;
    }
L_08A9D0FC:
    { const bool branch_taken = 0u == 0u;
    ctx.set_gpr(16, 0u + static_cast<std::uint32_t>(-2));
      if (branch_taken) {
          goto L_08A9D3A8;
      }
      goto L_08A9D104;
    }
L_08A9D104:
    ctx.set_gpr(2, ctx.gpr[17] << 3u);
    ctx.set_gpr(2, ctx.gpr[2] + ctx.gpr[20]);
    ctx.set_gpr(2, rt.memory().aot_load32(ctx.gpr[2] + static_cast<std::uint32_t>(212)));
    ctx.set_gpr(4, ctx.gpr[20] + 0u);
    ctx.set_gpr(2, ctx.gpr[2] ^ 1u);
    ctx.set_gpr(31, 0x08A9D120u);
    ctx.set_gpr(5, ctx.gpr[2] < static_cast<std::uint32_t>(1) ? 1u : 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0164_entry, 164u, 639u, 0x08A9712Cu>(ctx, &aot_mem) && ctx.pc == 0x08A9D120u) goto L_08A9D120;
    return;
L_08A9D120:
    ctx.set_gpr(2, ctx.gpr[2] & 255u);
    { const bool branch_taken = ctx.gpr[2] != 0u;
    // nop
      if (branch_taken) {
          goto L_08A9D3A8;
      }
      goto L_08A9D12C;
    }
L_08A9D12C:
    { const bool branch_taken = 0u == 0u;
    ctx.set_gpr(16, 0u + static_cast<std::uint32_t>(-2));
      if (branch_taken) {
          goto L_08A9D3A8;
      }
      goto L_08A9D134;
    }
L_08A9D134:
    ctx.set_gpr(2, ctx.gpr[17] << 3u);
    ctx.set_gpr(2, ctx.gpr[2] + ctx.gpr[17]);
    ctx.set_gpr(2, ctx.gpr[2] << 2u);
    ctx.set_gpr(3, ctx.gpr[2] + ctx.gpr[20]);
    ctx.fpr[0] = std::bit_cast<float>(rt.memory().aot_load32(ctx.gpr[3] + static_cast<std::uint32_t>(280)));
    ctx.set_gpr(2, 14979u << 16u);
    ctx.set_gpr(2, ctx.gpr[2] | 4719u);
    ctx.fpr[1] = static_cast<float>(static_cast<std::int32_t>(ctx.fpr_bits(0)));
    ctx.set_gpr(6, rt.memory().aot_load32(ctx.gpr[3] + static_cast<std::uint32_t>(292)));
    ctx.set_gpr(7, rt.memory().aot_load32(ctx.gpr[3] + static_cast<std::uint32_t>(304)));
    ctx.set_gpr(5, rt.memory().aot_load32(ctx.gpr[3] + static_cast<std::uint32_t>(276)));
    ctx.set_gpr(4, ctx.gpr[20] + 0u);
    ctx.fpr[0] = std::bit_cast<float>(ctx.gpr[2]);
    ctx.set_gpr(31, 0x08A9D170u);
    { const float fs = ctx.fpr[0]; const float ft = ctx.fpr[1]; if ((std::isinf(fs) && ft == 0.0f) || (std::isinf(ft) && fs == 0.0f)) ctx.set_fpr_bits(12, 0x7FC00000u); else ctx.fpr[12] = fs * ft; }
    if (rt.invoke_chained_direct<&recomp_unit_0164_entry, 164u, 717u, 0x08A9771Cu>(ctx, &aot_mem) && ctx.pc == 0x08A9D170u) goto L_08A9D170;
    return;
L_08A9D170:
    ctx.set_gpr(2, ctx.gpr[2] & 255u);
    { const bool branch_taken = ctx.gpr[2] != 0u;
    // nop
      if (branch_taken) {
          goto L_08A9D3A8;
      }
      goto L_08A9D17C;
    }
L_08A9D17C:
    { const bool branch_taken = 0u == 0u;
    ctx.set_gpr(16, 0u + static_cast<std::uint32_t>(-2));
      if (branch_taken) {
          goto L_08A9D3A8;
      }
      goto L_08A9D184;
    }
L_08A9D184:
    ctx.set_gpr(2, ctx.gpr[17] << 2u);
    ctx.set_gpr(2, ctx.gpr[2] + ctx.gpr[17]);
    ctx.set_gpr(2, ctx.gpr[2] << 4u);
    ctx.set_gpr(3, ctx.gpr[2] + ctx.gpr[20]);
    ctx.fpr[0] = std::bit_cast<float>(rt.memory().aot_load32(ctx.gpr[3] + static_cast<std::uint32_t>(568)));
    ctx.set_gpr(2, 14979u << 16u);
    ctx.set_gpr(2, ctx.gpr[2] | 4719u);
    ctx.fpr[1] = static_cast<float>(static_cast<std::int32_t>(ctx.fpr_bits(0)));
    ctx.set_gpr(17, rt.memory().aot_load32(ctx.gpr[3] + static_cast<std::uint32_t>(564)));
    ctx.set_gpr(4, ctx.gpr[29] + static_cast<std::uint32_t>(84));
    ctx.set_gpr(5, ctx.gpr[29] + static_cast<std::uint32_t>(120));
    ctx.fpr[0] = std::bit_cast<float>(ctx.gpr[2]);
    { const float fs = ctx.fpr[0]; const float ft = ctx.fpr[1]; if ((std::isinf(fs) && ft == 0.0f) || (std::isinf(ft) && fs == 0.0f)) ctx.set_fpr_bits(1, 0x7FC00000u); else ctx.fpr[1] = fs * ft; }
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(120), std::bit_cast<std::uint32_t>(ctx.fpr[1]));
    ctx.fpr[1] = std::bit_cast<float>(rt.memory().aot_load32(ctx.gpr[3] + static_cast<std::uint32_t>(572)));
    ctx.fpr[1] = static_cast<float>(static_cast<std::int32_t>(ctx.fpr_bits(1)));
    { const float fs = ctx.fpr[0]; const float ft = ctx.fpr[1]; if ((std::isinf(fs) && ft == 0.0f) || (std::isinf(ft) && fs == 0.0f)) ctx.set_fpr_bits(1, 0x7FC00000u); else ctx.fpr[1] = fs * ft; }
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(124), std::bit_cast<std::uint32_t>(ctx.fpr[1]));
    ctx.fpr[1] = std::bit_cast<float>(rt.memory().aot_load32(ctx.gpr[3] + static_cast<std::uint32_t>(576)));
    ctx.fpr[1] = static_cast<float>(static_cast<std::int32_t>(ctx.fpr_bits(1)));
    { const float fs = ctx.fpr[0]; const float ft = ctx.fpr[1]; if ((std::isinf(fs) && ft == 0.0f) || (std::isinf(ft) && fs == 0.0f)) ctx.set_fpr_bits(1, 0x7FC00000u); else ctx.fpr[1] = fs * ft; }
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(128), std::bit_cast<std::uint32_t>(ctx.fpr[1]));
    ctx.fpr[1] = std::bit_cast<float>(rt.memory().aot_load32(ctx.gpr[3] + static_cast<std::uint32_t>(580)));
    ctx.fpr[1] = static_cast<float>(static_cast<std::int32_t>(ctx.fpr_bits(1)));
    { const float fs = ctx.fpr[0]; const float ft = ctx.fpr[1]; if ((std::isinf(fs) && ft == 0.0f) || (std::isinf(ft) && fs == 0.0f)) ctx.set_fpr_bits(1, 0x7FC00000u); else ctx.fpr[1] = fs * ft; }
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(132), std::bit_cast<std::uint32_t>(ctx.fpr[1]));
    ctx.fpr[1] = std::bit_cast<float>(rt.memory().aot_load32(ctx.gpr[3] + static_cast<std::uint32_t>(584)));
    ctx.fpr[1] = static_cast<float>(static_cast<std::int32_t>(ctx.fpr_bits(1)));
    { const float fs = ctx.fpr[0]; const float ft = ctx.fpr[1]; if ((std::isinf(fs) && ft == 0.0f) || (std::isinf(ft) && fs == 0.0f)) ctx.set_fpr_bits(1, 0x7FC00000u); else ctx.fpr[1] = fs * ft; }
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(136), std::bit_cast<std::uint32_t>(ctx.fpr[1]));
    ctx.fpr[1] = std::bit_cast<float>(rt.memory().aot_load32(ctx.gpr[3] + static_cast<std::uint32_t>(588)));
    ctx.fpr[1] = static_cast<float>(static_cast<std::int32_t>(ctx.fpr_bits(1)));
    { const float fs = ctx.fpr[0]; const float ft = ctx.fpr[1]; if ((std::isinf(fs) && ft == 0.0f) || (std::isinf(ft) && fs == 0.0f)) ctx.set_fpr_bits(1, 0x7FC00000u); else ctx.fpr[1] = fs * ft; }
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(140), std::bit_cast<std::uint32_t>(ctx.fpr[1]));
    ctx.fpr[1] = std::bit_cast<float>(rt.memory().aot_load32(ctx.gpr[3] + static_cast<std::uint32_t>(592)));
    ctx.fpr[1] = static_cast<float>(static_cast<std::int32_t>(ctx.fpr_bits(1)));
    { const float fs = ctx.fpr[0]; const float ft = ctx.fpr[1]; if ((std::isinf(fs) && ft == 0.0f) || (std::isinf(ft) && fs == 0.0f)) ctx.set_fpr_bits(1, 0x7FC00000u); else ctx.fpr[1] = fs * ft; }
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(144), std::bit_cast<std::uint32_t>(ctx.fpr[1]));
    ctx.fpr[1] = std::bit_cast<float>(rt.memory().aot_load32(ctx.gpr[3] + static_cast<std::uint32_t>(596)));
    ctx.fpr[1] = static_cast<float>(static_cast<std::int32_t>(ctx.fpr_bits(1)));
    { const float fs = ctx.fpr[0]; const float ft = ctx.fpr[1]; if ((std::isinf(fs) && ft == 0.0f) || (std::isinf(ft) && fs == 0.0f)) ctx.set_fpr_bits(1, 0x7FC00000u); else ctx.fpr[1] = fs * ft; }
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(148), std::bit_cast<std::uint32_t>(ctx.fpr[1]));
    ctx.fpr[1] = std::bit_cast<float>(rt.memory().aot_load32(ctx.gpr[3] + static_cast<std::uint32_t>(600)));
    ctx.fpr[1] = static_cast<float>(static_cast<std::int32_t>(ctx.fpr_bits(1)));
    { const float fs = ctx.fpr[0]; const float ft = ctx.fpr[1]; if ((std::isinf(fs) && ft == 0.0f) || (std::isinf(ft) && fs == 0.0f)) ctx.set_fpr_bits(1, 0x7FC00000u); else ctx.fpr[1] = fs * ft; }
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(152), std::bit_cast<std::uint32_t>(ctx.fpr[1]));
    ctx.fpr[1] = std::bit_cast<float>(rt.memory().aot_load32(ctx.gpr[3] + static_cast<std::uint32_t>(604)));
    ctx.fpr[1] = static_cast<float>(static_cast<std::int32_t>(ctx.fpr_bits(1)));
    { const float fs = ctx.fpr[0]; const float ft = ctx.fpr[1]; if ((std::isinf(fs) && ft == 0.0f) || (std::isinf(ft) && fs == 0.0f)) ctx.set_fpr_bits(1, 0x7FC00000u); else ctx.fpr[1] = fs * ft; }
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(156), std::bit_cast<std::uint32_t>(ctx.fpr[1]));
    ctx.fpr[1] = std::bit_cast<float>(rt.memory().aot_load32(ctx.gpr[3] + static_cast<std::uint32_t>(608)));
    ctx.fpr[1] = static_cast<float>(static_cast<std::int32_t>(ctx.fpr_bits(1)));
    { const float fs = ctx.fpr[0]; const float ft = ctx.fpr[1]; if ((std::isinf(fs) && ft == 0.0f) || (std::isinf(ft) && fs == 0.0f)) ctx.set_fpr_bits(1, 0x7FC00000u); else ctx.fpr[1] = fs * ft; }
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(160), std::bit_cast<std::uint32_t>(ctx.fpr[1]));
    ctx.fpr[1] = std::bit_cast<float>(rt.memory().aot_load32(ctx.gpr[3] + static_cast<std::uint32_t>(612)));
    ctx.fpr[1] = static_cast<float>(static_cast<std::int32_t>(ctx.fpr_bits(1)));
    { const float fs = ctx.fpr[0]; const float ft = ctx.fpr[1]; if ((std::isinf(fs) && ft == 0.0f) || (std::isinf(ft) && fs == 0.0f)) ctx.set_fpr_bits(1, 0x7FC00000u); else ctx.fpr[1] = fs * ft; }
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(164), std::bit_cast<std::uint32_t>(ctx.fpr[1]));
    ctx.fpr[1] = std::bit_cast<float>(rt.memory().aot_load32(ctx.gpr[3] + static_cast<std::uint32_t>(616)));
    ctx.fpr[1] = static_cast<float>(static_cast<std::int32_t>(ctx.fpr_bits(1)));
    { const float fs = ctx.fpr[0]; const float ft = ctx.fpr[1]; if ((std::isinf(fs) && ft == 0.0f) || (std::isinf(ft) && fs == 0.0f)) ctx.set_fpr_bits(1, 0x7FC00000u); else ctx.fpr[1] = fs * ft; }
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(168), std::bit_cast<std::uint32_t>(ctx.fpr[1]));
    ctx.fpr[1] = std::bit_cast<float>(rt.memory().aot_load32(ctx.gpr[3] + static_cast<std::uint32_t>(620)));
    ctx.fpr[1] = static_cast<float>(static_cast<std::int32_t>(ctx.fpr_bits(1)));
    { const float fs = ctx.fpr[0]; const float ft = ctx.fpr[1]; if ((std::isinf(fs) && ft == 0.0f) || (std::isinf(ft) && fs == 0.0f)) ctx.set_fpr_bits(1, 0x7FC00000u); else ctx.fpr[1] = fs * ft; }
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(172), std::bit_cast<std::uint32_t>(ctx.fpr[1]));
    ctx.fpr[1] = std::bit_cast<float>(rt.memory().aot_load32(ctx.gpr[3] + static_cast<std::uint32_t>(624)));
    ctx.fpr[1] = static_cast<float>(static_cast<std::int32_t>(ctx.fpr_bits(1)));
    { const float fs = ctx.fpr[0]; const float ft = ctx.fpr[1]; if ((std::isinf(fs) && ft == 0.0f) || (std::isinf(ft) && fs == 0.0f)) ctx.set_fpr_bits(1, 0x7FC00000u); else ctx.fpr[1] = fs * ft; }
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(176), std::bit_cast<std::uint32_t>(ctx.fpr[1]));
    ctx.fpr[1] = std::bit_cast<float>(rt.memory().aot_load32(ctx.gpr[3] + static_cast<std::uint32_t>(628)));
    ctx.fpr[1] = static_cast<float>(static_cast<std::int32_t>(ctx.fpr_bits(1)));
    { const float fs = ctx.fpr[0]; const float ft = ctx.fpr[1]; if ((std::isinf(fs) && ft == 0.0f) || (std::isinf(ft) && fs == 0.0f)) ctx.set_fpr_bits(1, 0x7FC00000u); else ctx.fpr[1] = fs * ft; }
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(180), std::bit_cast<std::uint32_t>(ctx.fpr[1]));
    ctx.fpr[1] = std::bit_cast<float>(rt.memory().aot_load32(ctx.gpr[3] + static_cast<std::uint32_t>(632)));
    ctx.fpr[1] = static_cast<float>(static_cast<std::int32_t>(ctx.fpr_bits(1)));
    { const float fs = ctx.fpr[0]; const float ft = ctx.fpr[1]; if ((std::isinf(fs) && ft == 0.0f) || (std::isinf(ft) && fs == 0.0f)) ctx.set_fpr_bits(1, 0x7FC00000u); else ctx.fpr[1] = fs * ft; }
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(184), std::bit_cast<std::uint32_t>(ctx.fpr[1]));
    ctx.fpr[1] = std::bit_cast<float>(rt.memory().aot_load32(ctx.gpr[3] + static_cast<std::uint32_t>(636)));
    ctx.fpr[1] = static_cast<float>(static_cast<std::int32_t>(ctx.fpr_bits(1)));
    { const float fs = ctx.fpr[0]; const float ft = ctx.fpr[1]; if ((std::isinf(fs) && ft == 0.0f) || (std::isinf(ft) && fs == 0.0f)) ctx.set_fpr_bits(0, 0x7FC00000u); else ctx.fpr[0] = fs * ft; }
    ctx.set_gpr(31, 0x08A9D2D0u);
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(188), std::bit_cast<std::uint32_t>(ctx.fpr[0]));
    if (rt.invoke_chained_direct<&recomp_unit_0020_entry, 20u, 281u, 0x0885555Cu>(ctx, &aot_mem) && ctx.pc == 0x08A9D2D0u) goto L_08A9D2D0;
    return;
L_08A9D2D0:
    ctx.set_gpr(18, ctx.gpr[2] + 0u);
    ctx.set_gpr(4, ctx.gpr[29] + static_cast<std::uint32_t>(48));
    ctx.set_gpr(31, 0x08A9D2E0u);
    ctx.set_gpr(5, ctx.gpr[29] + static_cast<std::uint32_t>(156));
    if (rt.invoke_chained_direct<&recomp_unit_0020_entry, 20u, 281u, 0x0885555Cu>(ctx, &aot_mem) && ctx.pc == 0x08A9D2E0u) goto L_08A9D2E0;
    return;
L_08A9D2E0:
    ctx.set_gpr(5, ctx.gpr[17] + 0u);
    ctx.set_gpr(6, ctx.gpr[18] + 0u);
    ctx.set_gpr(4, ctx.gpr[20] + 0u);
    ctx.set_gpr(31, 0x08A9D2F4u);
    ctx.set_gpr(7, ctx.gpr[2] + 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0165_entry, 165u, 8u, 0x08A980ECu>(ctx, &aot_mem) && ctx.pc == 0x08A9D2F4u) goto L_08A9D2F4;
    return;
L_08A9D2F4:
    ctx.set_gpr(2, ctx.gpr[2] & 255u);
    { const bool branch_taken = ctx.gpr[2] != 0u;
    // nop
      if (branch_taken) {
          goto L_08A9D3A8;
      }
      goto L_08A9D300;
    }
L_08A9D300:
    { const bool branch_taken = 0u == 0u;
    ctx.set_gpr(16, 0u + static_cast<std::uint32_t>(-2));
      if (branch_taken) {
          goto L_08A9D3A8;
      }
      goto L_08A9D308;
    }
L_08A9D308:
    ctx.set_gpr(2, ctx.gpr[17] << 1u);
    ctx.set_gpr(2, ctx.gpr[2] + ctx.gpr[17]);
    ctx.set_gpr(2, ctx.gpr[2] << 2u);
    ctx.set_gpr(2, ctx.gpr[2] + ctx.gpr[20]);
    ctx.set_gpr(5, rt.memory().aot_load32(ctx.gpr[2] + static_cast<std::uint32_t>(1204)));
    ctx.set_gpr(6, rt.memory().aot_load32(ctx.gpr[2] + static_cast<std::uint32_t>(1208)));
    ctx.set_gpr(31, 0x08A9D328u);
    ctx.set_gpr(4, ctx.gpr[20] + 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0165_entry, 165u, 90u, 0x08A99128u>(ctx, &aot_mem) && ctx.pc == 0x08A9D328u) goto L_08A9D328;
    return;
L_08A9D328:
    ctx.set_gpr(2, ctx.gpr[2] & 255u);
    { const bool branch_taken = ctx.gpr[2] != 0u;
    // nop
      if (branch_taken) {
          goto L_08A9D3A8;
      }
      goto L_08A9D334;
    }
L_08A9D334:
    { const bool branch_taken = 0u == 0u;
    ctx.set_gpr(16, 0u + static_cast<std::uint32_t>(-2));
      if (branch_taken) {
          goto L_08A9D3A8;
      }
      goto L_08A9D33C;
    }
L_08A9D33C:
    ctx.set_gpr(5, ctx.gpr[19] + 0u);
    ctx.set_gpr(6, ctx.gpr[21] + 0u);
    ctx.set_gpr(31, 0x08A9D34Cu);
    ctx.set_gpr(4, ctx.gpr[20] + 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0164_entry, 164u, 451u, 0x08A96144u>(ctx, &aot_mem) && ctx.pc == 0x08A9D34Cu) goto L_08A9D34C;
    return;
L_08A9D34C:
    if (ctx.gpr[2] == 0u) {
    ctx.set_gpr(16, 0u + static_cast<std::uint32_t>(-2));
        goto L_08A9D3A8;
    }
    goto L_08A9D354;
L_08A9D354:
    ctx.set_gpr(2, ctx.gpr[17] << 5u);
    ctx.set_gpr(3, ctx.gpr[2] + ctx.gpr[20]);
    ctx.fpr[0] = std::bit_cast<float>(rt.memory().aot_load32(ctx.gpr[3] + static_cast<std::uint32_t>(1304)));
    ctx.fpr[1] = std::bit_cast<float>(rt.memory().aot_load32(ctx.gpr[3] + static_cast<std::uint32_t>(1308)));
    ctx.set_gpr(2, 14979u << 16u);
    ctx.fpr[3] = static_cast<float>(static_cast<std::int32_t>(ctx.fpr_bits(0)));
    ctx.set_gpr(2, ctx.gpr[2] | 4719u);
    ctx.set_gpr(5, rt.memory().aot_load32(ctx.gpr[3] + static_cast<std::uint32_t>(1300)));
    ctx.set_gpr(4, ctx.gpr[20] + 0u);
    ctx.fpr[0] = std::bit_cast<float>(rt.memory().aot_load32(ctx.gpr[3] + static_cast<std::uint32_t>(1312)));
    ctx.fpr[2] = std::bit_cast<float>(ctx.gpr[2]);
    ctx.fpr[1] = static_cast<float>(static_cast<std::int32_t>(ctx.fpr_bits(1)));
    ctx.fpr[0] = static_cast<float>(static_cast<std::int32_t>(ctx.fpr_bits(0)));
    { const float fs = ctx.fpr[2]; const float ft = ctx.fpr[3]; if ((std::isinf(fs) && ft == 0.0f) || (std::isinf(ft) && fs == 0.0f)) ctx.set_fpr_bits(12, 0x7FC00000u); else ctx.fpr[12] = fs * ft; }
    { const float fs = ctx.fpr[2]; const float ft = ctx.fpr[1]; if ((std::isinf(fs) && ft == 0.0f) || (std::isinf(ft) && fs == 0.0f)) ctx.set_fpr_bits(13, 0x7FC00000u); else ctx.fpr[13] = fs * ft; }
    ctx.set_gpr(31, 0x08A9D398u);
    { const float fs = ctx.fpr[2]; const float ft = ctx.fpr[0]; if ((std::isinf(fs) && ft == 0.0f) || (std::isinf(ft) && fs == 0.0f)) ctx.set_fpr_bits(14, 0x7FC00000u); else ctx.fpr[14] = fs * ft; }
    if (rt.invoke_chained_direct<&recomp_unit_0164_entry, 164u, 487u, 0x08A963CCu>(ctx, &aot_mem) && ctx.pc == 0x08A9D398u) goto L_08A9D398;
    return;
L_08A9D398:
    ctx.set_gpr(2, ctx.gpr[2] & 255u);
    { const bool branch_taken = ctx.gpr[2] != 0u;
    // nop
      if (branch_taken) {
          goto L_08A9D3A8;
      }
      goto L_08A9D3A4;
    }
L_08A9D3A4:
    ctx.set_gpr(16, 0u + static_cast<std::uint32_t>(-2));
    goto L_08A9D3A8;
L_08A9D3A8:
    ctx.set_gpr(5, ctx.gpr[22] + 0u);
    goto L_08A9D3AC;
L_08A9D3AC:
    ctx.set_gpr(31, 0x08A9D3B4u);
    ctx.set_gpr(4, ctx.gpr[20] + 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0164_entry, 164u, 155u, 0x08A94BC8u>(ctx, &aot_mem) && ctx.pc == 0x08A9D3B4u) goto L_08A9D3B4;
    return;
L_08A9D3B4:
    ctx.set_gpr(4, ctx.gpr[20] + 0u);
    ctx.set_gpr(31, 0x08A9D3C0u);
    ctx.set_gpr(5, ctx.gpr[23] + 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0164_entry, 164u, 156u, 0x08A94BD4u>(ctx, &aot_mem) && ctx.pc == 0x08A9D3C0u) goto L_08A9D3C0;
    return;
L_08A9D3C0:
    ctx.set_gpr(2, ctx.gpr[16] + 0u);
    goto L_08A9D3C4;
L_08A9D3C4:
    ctx.set_gpr(31, rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(44)));
    ctx.set_gpr(23, rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(40)));
    ctx.set_gpr(22, rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(36)));
    ctx.set_gpr(21, rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(32)));
    ctx.set_gpr(20, rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(28)));
    ctx.set_gpr(19, rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(24)));
    ctx.set_gpr(18, rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(20)));
    ctx.set_gpr(17, rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(16)));
    ctx.set_gpr(16, rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(12)));
    jump_target = ctx.gpr[31];
    ctx.set_gpr(29, ctx.gpr[29] + static_cast<std::uint32_t>(192));
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_08A9D3F0:
    ctx.set_gpr(2, 17530u << 16u);
    ctx.fpr[0] = std::bit_cast<float>(ctx.gpr[2]);
    { const float fs = ctx.fpr[0]; const float ft = ctx.fpr[12]; if ((std::isinf(fs) && ft == 0.0f) || (std::isinf(ft) && fs == 0.0f)) ctx.set_fpr_bits(0, 0x7FC00000u); else ctx.fpr[0] = fs * ft; }
    ctx.set_gpr(2, 14979u << 16u);
    ctx.set_gpr(2, ctx.gpr[2] | 4719u);
    ctx.set_fpr_bits(0, ctx.fpu_float_to_word(ctx.fpr[0], 1u));
    ctx.fpr[1] = static_cast<float>(static_cast<std::int32_t>(ctx.fpr_bits(0)));
    ctx.fpr[0] = std::bit_cast<float>(ctx.gpr[2]);
    jump_target = ctx.gpr[31];
    { const float fs = ctx.fpr[0]; const float ft = ctx.fpr[1]; if ((std::isinf(fs) && ft == 0.0f) || (std::isinf(ft) && fs == 0.0f)) ctx.set_fpr_bits(0, 0x7FC00000u); else ctx.fpr[0] = fs * ft; }
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_08A9D418:
    ctx.set_gpr(29, ctx.gpr[29] + static_cast<std::uint32_t>(-16));
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(12), ctx.gpr[31]);
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(8), ctx.gpr[16]);
    rt.memory().aot_store32(ctx.gpr[4] + static_cast<std::uint32_t>(0), ctx.gpr[5]);
    rt.memory().aot_store32(ctx.gpr[4] + static_cast<std::uint32_t>(4), ctx.gpr[6]);
    ctx.set_gpr(16, ctx.gpr[4] + 0u);
    ctx.set_gpr(31, 0x08A9D438u);
    ctx.set_gpr(4, ctx.gpr[16] + static_cast<std::uint32_t>(12));
    goto L_08A9D5FC;
L_08A9D438:
    rt.memory().aot_store8(ctx.gpr[16] + static_cast<std::uint32_t>(15288), static_cast<std::uint8_t>(0u));
    rt.memory().aot_store8(ctx.gpr[16] + static_cast<std::uint32_t>(15289), static_cast<std::uint8_t>(0u));
    rt.memory().aot_store32(ctx.gpr[16] + static_cast<std::uint32_t>(15292), 0u);
    rt.memory().aot_store32(ctx.gpr[16] + static_cast<std::uint32_t>(15296), 0u);
    rt.memory().aot_store32(ctx.gpr[16] + static_cast<std::uint32_t>(15300), 0u);
    rt.memory().aot_store32(ctx.gpr[16] + static_cast<std::uint32_t>(15304), 0u);
    ctx.set_gpr(2, 0u + static_cast<std::uint32_t>(-1));
    rt.memory().aot_store32(ctx.gpr[16] + static_cast<std::uint32_t>(15308), ctx.gpr[2]);
    rt.memory().aot_store32(ctx.gpr[16] + static_cast<std::uint32_t>(15312), 0u);
    rt.memory().aot_store32(ctx.gpr[16] + static_cast<std::uint32_t>(15316), 0u);
    rt.memory().aot_store32(ctx.gpr[16] + static_cast<std::uint32_t>(15320), 0u);
    rt.memory().aot_store32(ctx.gpr[16] + static_cast<std::uint32_t>(15324), 0u);
    rt.memory().aot_store8(ctx.gpr[16] + static_cast<std::uint32_t>(15336), static_cast<std::uint8_t>(0u));
    rt.memory().aot_store32(ctx.gpr[16] + static_cast<std::uint32_t>(15352), ctx.gpr[2]);
    rt.memory().aot_store32(ctx.gpr[16] + static_cast<std::uint32_t>(15356), 0u);
    rt.memory().aot_store32(ctx.gpr[16] + static_cast<std::uint32_t>(15360), 0u);
    ctx.set_gpr(31, 0x08A9D480u);
    ctx.set_gpr(4, rt.memory().aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(0)));
    if (rt.invoke_chained_direct<&recomp_unit_0160_entry, 160u, 463u, 0x08A85A3Cu>(ctx, &aot_mem) && ctx.pc == 0x08A9D480u) goto L_08A9D480;
    return;
L_08A9D480:
    rt.memory().aot_store32(ctx.gpr[16] + static_cast<std::uint32_t>(15364), ctx.gpr[2]);
    ctx.set_gpr(4, rt.memory().aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(0)));
    ctx.set_gpr(31, 0x08A9D490u);
    ctx.set_gpr(5, ctx.gpr[2] + 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0164_entry, 164u, 108u, 0x08A947BCu>(ctx, &aot_mem) && ctx.pc == 0x08A9D490u) goto L_08A9D490;
    return;
L_08A9D490:
    rt.memory().aot_store32(ctx.gpr[16] + static_cast<std::uint32_t>(15384), ctx.gpr[2]);
    rt.memory().aot_store8(ctx.gpr[16] + static_cast<std::uint32_t>(15388), static_cast<std::uint8_t>(0u));
    rt.memory().aot_store32(ctx.gpr[16] + static_cast<std::uint32_t>(15376), 0u);
    ctx.set_gpr(2, 0u + static_cast<std::uint32_t>(-1));
    rt.memory().aot_store32(ctx.gpr[16] + static_cast<std::uint32_t>(15368), ctx.gpr[2]);
    rt.memory().aot_store32(ctx.gpr[16] + static_cast<std::uint32_t>(15392), 0u);
    rt.memory().aot_store32(ctx.gpr[16] + static_cast<std::uint32_t>(15396), 0u);
    rt.memory().aot_store32(ctx.gpr[16] + static_cast<std::uint32_t>(15400), 0u);
    rt.memory().aot_store32(ctx.gpr[16] + static_cast<std::uint32_t>(15404), 0u);
    rt.memory().aot_store8(ctx.gpr[16] + static_cast<std::uint32_t>(15389), static_cast<std::uint8_t>(0u));
    rt.memory().aot_store8(ctx.gpr[16] + static_cast<std::uint32_t>(15748), static_cast<std::uint8_t>(0u));
    rt.memory().aot_store8(ctx.gpr[16] + static_cast<std::uint32_t>(15750), static_cast<std::uint8_t>(0u));
    rt.memory().aot_store8(ctx.gpr[16] + static_cast<std::uint32_t>(15749), static_cast<std::uint8_t>(0u));
    rt.memory().aot_store8(ctx.gpr[16] + static_cast<std::uint32_t>(15391), static_cast<std::uint8_t>(0u));
    ctx.set_gpr(2, 0u + static_cast<std::uint32_t>(10));
    rt.memory().aot_store32(ctx.gpr[16] + static_cast<std::uint32_t>(15752), ctx.gpr[2]);
    rt.memory().aot_store32(ctx.gpr[16] + static_cast<std::uint32_t>(15756), 0u);
    rt.memory().aot_store32(ctx.gpr[16] + static_cast<std::uint32_t>(15380), 0u);
    rt.memory().aot_store8(ctx.gpr[16] + static_cast<std::uint32_t>(15390), static_cast<std::uint8_t>(0u));
    rt.memory().aot_store8(ctx.gpr[16] + static_cast<std::uint32_t>(15751), static_cast<std::uint8_t>(0u));
    rt.memory().aot_store8(ctx.gpr[16] + static_cast<std::uint32_t>(15760), static_cast<std::uint8_t>(0u));
    rt.memory().aot_store8(ctx.gpr[16] + static_cast<std::uint32_t>(15761), static_cast<std::uint8_t>(0u));
    rt.memory().aot_store8(ctx.gpr[16] + static_cast<std::uint32_t>(15762), static_cast<std::uint8_t>(0u));
    rt.memory().aot_store8(ctx.gpr[16] + static_cast<std::uint32_t>(15763), static_cast<std::uint8_t>(0u));
    rt.memory().aot_store8(ctx.gpr[16] + static_cast<std::uint32_t>(15764), static_cast<std::uint8_t>(0u));
    ctx.set_gpr(4, rt.memory().aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(0)));
    ctx.set_gpr(31, 0x08A9D500u);
    ctx.set_gpr(5, 0u + static_cast<std::uint32_t>(1));
    if (rt.invoke_chained_direct<&recomp_unit_0164_entry, 164u, 155u, 0x08A94BC8u>(ctx, &aot_mem) && ctx.pc == 0x08A9D500u) goto L_08A9D500;
    return;
L_08A9D500:
    ctx.set_gpr(4, rt.memory().aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(0)));
    ctx.set_gpr(31, 0x08A9D50Cu);
    ctx.set_gpr(5, 0u + 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0164_entry, 164u, 156u, 0x08A94BD4u>(ctx, &aot_mem) && ctx.pc == 0x08A9D50Cu) goto L_08A9D50C;
    return;
L_08A9D50C:
    ctx.set_gpr(31, 0x08A9D514u);
    ctx.set_gpr(4, ctx.gpr[16] + static_cast<std::uint32_t>(36));
    goto L_08A9D5C0;
L_08A9D514:
    ctx.set_gpr(4, ctx.gpr[16] + 0u);
    ctx.set_gpr(31, 0x08A9D520u);
    ctx.set_gpr(5, 0u + 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0168_entry, 168u, 647u, 0x08AA6690u>(ctx, &aot_mem) && ctx.pc == 0x08A9D520u) goto L_08A9D520;
    return;
L_08A9D520:
    ctx.set_gpr(31, 0x08A9D528u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0017_entry, 17u, 180u, 0x08848C00u>(ctx, &aot_mem) && ctx.pc == 0x08A9D528u) goto L_08A9D528;
    return;
L_08A9D528:
    ctx.set_gpr(4, ctx.gpr[2] + 0u);
    ctx.fpr[12] = std::bit_cast<float>(0u);
    ctx.set_gpr(2, 16752u << 16u);
    ctx.fpr[14] = std::bit_cast<float>(ctx.gpr[2]);
    ctx.set_gpr(31, 0x08A9D540u);
    ctx.set_fpr_bits(13, ctx.fpr_bits(12));
    if (rt.invoke_chained_direct<&recomp_unit_0017_entry, 17u, 310u, 0x088494C4u>(ctx, &aot_mem) && ctx.pc == 0x08A9D540u) goto L_08A9D540;
    return;
L_08A9D540:
    ctx.set_gpr(31, 0x08A9D548u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0017_entry, 17u, 180u, 0x08848C00u>(ctx, &aot_mem) && ctx.pc == 0x08A9D548u) goto L_08A9D548;
    return;
L_08A9D548:
    ctx.fpr[12] = std::bit_cast<float>(0u);
    ctx.set_gpr(4, ctx.gpr[2] + 0u);
    ctx.set_fpr_bits(13, ctx.fpr_bits(12));
    ctx.set_gpr(31, 0x08A9D55Cu);
    ctx.set_fpr_bits(14, ctx.fpr_bits(12));
    if (rt.invoke_chained_direct<&recomp_unit_0017_entry, 17u, 309u, 0x088494B4u>(ctx, &aot_mem) && ctx.pc == 0x08A9D55Cu) goto L_08A9D55C;
    return;
L_08A9D55C:
    ctx.set_gpr(31, 0x08A9D564u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0017_entry, 17u, 176u, 0x08848BD0u>(ctx, &aot_mem) && ctx.pc == 0x08A9D564u) goto L_08A9D564;
    return;
L_08A9D564:
    ctx.set_gpr(4, ctx.gpr[2] + 0u);
    ctx.set_gpr(5, 0u + static_cast<std::uint32_t>(15));
    ctx.set_gpr(6, 0u + static_cast<std::uint32_t>(54));
    ctx.set_gpr(31, 0x08A9D578u);
    ctx.set_gpr(7, 0u + 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0018_entry, 18u, 69u, 0x0884C47Cu>(ctx, &aot_mem) && ctx.pc == 0x08A9D578u) goto L_08A9D578;
    return;
L_08A9D578:
    ctx.set_gpr(31, 0x08A9D580u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0017_entry, 17u, 176u, 0x08848BD0u>(ctx, &aot_mem) && ctx.pc == 0x08A9D580u) goto L_08A9D580;
    return;
L_08A9D580:
    ctx.set_gpr(4, ctx.gpr[2] + 0u);
    ctx.set_gpr(5, 0u + static_cast<std::uint32_t>(15));
    ctx.set_gpr(6, 0u + static_cast<std::uint32_t>(52));
    ctx.set_gpr(31, 0x08A9D594u);
    ctx.set_gpr(7, 0u + 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0018_entry, 18u, 69u, 0x0884C47Cu>(ctx, &aot_mem) && ctx.pc == 0x08A9D594u) goto L_08A9D594;
    return;
L_08A9D594:
    ctx.set_gpr(31, 0x08A9D59Cu);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0017_entry, 17u, 176u, 0x08848BD0u>(ctx, &aot_mem) && ctx.pc == 0x08A9D59Cu) goto L_08A9D59C;
    return;
L_08A9D59C:
    ctx.set_gpr(4, ctx.gpr[2] + 0u);
    ctx.set_gpr(5, 0u + static_cast<std::uint32_t>(15));
    ctx.set_gpr(6, 0u + static_cast<std::uint32_t>(53));
    ctx.set_gpr(31, 0x08A9D5B0u);
    ctx.set_gpr(7, 0u + 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0018_entry, 18u, 69u, 0x0884C47Cu>(ctx, &aot_mem) && ctx.pc == 0x08A9D5B0u) goto L_08A9D5B0;
    return;
L_08A9D5B0:
    ctx.set_gpr(31, rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(12)));
    ctx.set_gpr(16, rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(8)));
    jump_target = ctx.gpr[31];
    ctx.set_gpr(29, ctx.gpr[29] + static_cast<std::uint32_t>(16));
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_08A9D5C0:
    ctx.set_gpr(29, ctx.gpr[29] + static_cast<std::uint32_t>(-16));
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(12), ctx.gpr[31]);
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(8), ctx.gpr[16]);
    ctx.set_gpr(16, ctx.gpr[4] + 0u);
    ctx.set_gpr(5, 0u + 0u);
    ctx.set_gpr(31, 0x08A9D5DCu);
    ctx.set_gpr(6, 0u + static_cast<std::uint32_t>(800));
    if (rt.invoke_chained_direct<&recomp_unit_0003_entry, 3u, 719u, 0x08812EE8u>(ctx, &aot_mem) && ctx.pc == 0x08A9D5DCu) goto L_08A9D5DC;
    return;
L_08A9D5DC:
    ctx.set_gpr(4, ctx.gpr[16] + static_cast<std::uint32_t>(800));
    ctx.set_gpr(5, 0u + 0u);
    ctx.set_gpr(31, 0x08A9D5ECu);
    ctx.set_gpr(6, 0u + static_cast<std::uint32_t>(800));
    if (rt.invoke_chained_direct<&recomp_unit_0003_entry, 3u, 719u, 0x08812EE8u>(ctx, &aot_mem) && ctx.pc == 0x08A9D5ECu) goto L_08A9D5EC;
    return;
L_08A9D5EC:
    ctx.set_gpr(31, rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(12)));
    ctx.set_gpr(16, rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(8)));
    jump_target = ctx.gpr[31];
    ctx.set_gpr(29, ctx.gpr[29] + static_cast<std::uint32_t>(16));
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_08A9D5FC:
    rt.memory().aot_store8(ctx.gpr[4] + static_cast<std::uint32_t>(0), static_cast<std::uint8_t>(0u));
    rt.memory().aot_store8(ctx.gpr[4] + static_cast<std::uint32_t>(1), static_cast<std::uint8_t>(0u));
    rt.memory().aot_store32(ctx.gpr[4] + static_cast<std::uint32_t>(4), 0u);
    rt.memory().aot_store32(ctx.gpr[4] + static_cast<std::uint32_t>(8), 0u);
    rt.memory().aot_store32(ctx.gpr[4] + static_cast<std::uint32_t>(12), 0u);
    rt.memory().aot_store32(ctx.gpr[4] + static_cast<std::uint32_t>(16), 0u);
    jump_target = ctx.gpr[31];
    rt.memory().aot_store32(ctx.gpr[4] + static_cast<std::uint32_t>(20), 0u);
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_08A9D61C:
    ctx.set_gpr(29, ctx.gpr[29] + static_cast<std::uint32_t>(-16));
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(12), ctx.gpr[31]);
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(8), ctx.gpr[17]);
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(4), ctx.gpr[16]);
    rt.memory().aot_store32(ctx.gpr[4] + static_cast<std::uint32_t>(15408), 0u);
    rt.memory().aot_store32(ctx.gpr[4] + static_cast<std::uint32_t>(15412), 0u);
    ctx.set_gpr(2, 0u + static_cast<std::uint32_t>(1));
    ctx.set_gpr(16, ctx.gpr[4] + 0u);
    rt.memory().aot_store32(ctx.gpr[4] + static_cast<std::uint32_t>(15416), ctx.gpr[2]);
    ctx.set_gpr(4, rt.memory().aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(0)));
    ctx.set_gpr(31, 0x08A9D64Cu);
    ctx.set_gpr(5, 0u + 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0164_entry, 164u, 108u, 0x08A947BCu>(ctx, &aot_mem) && ctx.pc == 0x08A9D64Cu) goto L_08A9D64C;
    return;
L_08A9D64C:
    rt.memory().aot_store32(ctx.gpr[16] + static_cast<std::uint32_t>(15420), ctx.gpr[2]);
    rt.memory().aot_store32(ctx.gpr[16] + static_cast<std::uint32_t>(15368), 0u);
    ctx.set_gpr(17, 0u + 0u);
    ctx.set_gpr(16, 0u + 0u);
    goto L_08A9D65C;
L_08A9D65C:
    ctx.set_gpr(31, 0x08A9D664u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0017_entry, 17u, 176u, 0x08848BD0u>(ctx, &aot_mem) && ctx.pc == 0x08A9D664u) goto L_08A9D664;
    return;
L_08A9D664:
    ctx.fpr[0] = std::bit_cast<float>(ctx.gpr[16]);
    ctx.fpr[0] = static_cast<float>(static_cast<std::int32_t>(ctx.fpr_bits(0)));
    ctx.set_gpr(4, ctx.gpr[2] + 0u);
    ctx.set_gpr(2, 17008u << 16u);
    ctx.set_gpr(3, 17036u << 16u);
    ctx.set_gpr(5, 0u + static_cast<std::uint32_t>(15));
    ctx.set_gpr(7, ctx.gpr[17] + static_cast<std::uint32_t>(81));
    ctx.fpr[1] = std::bit_cast<float>(ctx.gpr[2]);
    ctx.fpr[12] = ctx.fpr[1] + ctx.fpr[0];
    ctx.set_gpr(2, 17076u << 16u);
    ctx.set_gpr(6, 0u + 0u);
    ctx.set_gpr(8, ctx.gpr[5] + 0u);
    ctx.set_gpr(9, 0u + static_cast<std::uint32_t>(1));
    ctx.fpr[13] = std::bit_cast<float>(ctx.gpr[3]);
    ctx.set_gpr(31, 0x08A9D6A4u);
    ctx.fpr[14] = std::bit_cast<float>(ctx.gpr[2]);
    if (rt.invoke_chained_direct<&recomp_unit_0016_entry, 16u, 558u, 0x08847598u>(ctx, &aot_mem) && ctx.pc == 0x08A9D6A4u) goto L_08A9D6A4;
    return;
L_08A9D6A4:
    ctx.set_gpr(17, ctx.gpr[17] + static_cast<std::uint32_t>(1));
    ctx.set_gpr(2, static_cast<std::int32_t>(ctx.gpr[17]) < 8 ? 1u : 0u);
    { const bool branch_taken = ctx.gpr[2] != 0u;
    ctx.set_gpr(16, ctx.gpr[16] + static_cast<std::uint32_t>(44));
      if (branch_taken) {
          goto L_08A9D65C;
      }
      goto L_08A9D6B4;
    }
L_08A9D6B4:
    ctx.set_gpr(17, 0u + 0u);
    ctx.set_gpr(16, 0u + 0u);
    goto L_08A9D6BC;
L_08A9D6BC:
    ctx.set_gpr(31, 0x08A9D6C4u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0017_entry, 17u, 176u, 0x08848BD0u>(ctx, &aot_mem) && ctx.pc == 0x08A9D6C4u) goto L_08A9D6C4;
    return;
L_08A9D6C4:
    ctx.fpr[0] = std::bit_cast<float>(ctx.gpr[16]);
    ctx.fpr[0] = static_cast<float>(static_cast<std::int32_t>(ctx.fpr_bits(0)));
    ctx.set_gpr(4, ctx.gpr[2] + 0u);
    ctx.set_gpr(2, 17064u << 16u);
    ctx.set_gpr(3, 17080u << 16u);
    ctx.set_gpr(7, ctx.gpr[17] + static_cast<std::uint32_t>(89));
    ctx.set_gpr(5, 0u + static_cast<std::uint32_t>(15));
    ctx.fpr[1] = std::bit_cast<float>(ctx.gpr[2]);
    ctx.fpr[12] = ctx.fpr[1] + ctx.fpr[0];
    ctx.set_gpr(2, 17076u << 16u);
    ctx.set_gpr(6, 0u + static_cast<std::uint32_t>(2));
    ctx.set_gpr(8, 0u + static_cast<std::uint32_t>(16));
    ctx.set_gpr(9, 0u + static_cast<std::uint32_t>(1));
    ctx.fpr[13] = std::bit_cast<float>(ctx.gpr[3]);
    ctx.set_gpr(31, 0x08A9D704u);
    ctx.fpr[14] = std::bit_cast<float>(ctx.gpr[2]);
    if (rt.invoke_chained_direct<&recomp_unit_0016_entry, 16u, 558u, 0x08847598u>(ctx, &aot_mem) && ctx.pc == 0x08A9D704u) goto L_08A9D704;
    return;
L_08A9D704:
    ctx.set_gpr(17, ctx.gpr[17] + static_cast<std::uint32_t>(1));
    ctx.set_gpr(2, static_cast<std::int32_t>(ctx.gpr[17]) < 8 ? 1u : 0u);
    { const bool branch_taken = ctx.gpr[2] != 0u;
    ctx.set_gpr(16, ctx.gpr[16] + static_cast<std::uint32_t>(44));
      if (branch_taken) {
          goto L_08A9D6BC;
      }
      goto L_08A9D714;
    }
L_08A9D714:
    ctx.set_gpr(31, 0x08A9D71Cu);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0017_entry, 17u, 176u, 0x08848BD0u>(ctx, &aot_mem) && ctx.pc == 0x08A9D71Cu) goto L_08A9D71C;
    return;
L_08A9D71C:
    ctx.set_gpr(4, ctx.gpr[2] + 0u);
    ctx.set_gpr(2, 16800u << 16u);
    ctx.fpr[12] = std::bit_cast<float>(ctx.gpr[2]);
    ctx.set_gpr(2, 17076u << 16u);
    ctx.fpr[13] = std::bit_cast<float>(ctx.gpr[2]);
    ctx.set_gpr(2, 16256u << 16u);
    ctx.fpr[14] = std::bit_cast<float>(ctx.gpr[2]);
    ctx.set_gpr(5, 0u + static_cast<std::uint32_t>(15));
    ctx.set_gpr(6, 0u + 0u);
    ctx.set_gpr(7, 0u + static_cast<std::uint32_t>(97));
    ctx.set_gpr(8, 0u + static_cast<std::uint32_t>(10));
    ctx.set_gpr(31, 0x08A9D750u);
    ctx.set_gpr(9, 0u + static_cast<std::uint32_t>(2));
    if (rt.invoke_chained_direct<&recomp_unit_0016_entry, 16u, 558u, 0x08847598u>(ctx, &aot_mem) && ctx.pc == 0x08A9D750u) goto L_08A9D750;
    return;
L_08A9D750:
    ctx.set_gpr(31, 0x08A9D758u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0017_entry, 17u, 176u, 0x08848BD0u>(ctx, &aot_mem) && ctx.pc == 0x08A9D758u) goto L_08A9D758;
    return;
L_08A9D758:
    ctx.set_gpr(4, ctx.gpr[2] + 0u);
    ctx.set_gpr(2, 17382u << 16u);
    ctx.fpr[12] = std::bit_cast<float>(ctx.gpr[2]);
    ctx.set_gpr(2, 17076u << 16u);
    ctx.fpr[13] = std::bit_cast<float>(ctx.gpr[2]);
    ctx.set_gpr(2, 16256u << 16u);
    ctx.fpr[14] = std::bit_cast<float>(ctx.gpr[2]);
    ctx.set_gpr(5, 0u + static_cast<std::uint32_t>(15));
    ctx.set_gpr(6, 0u + 0u);
    ctx.set_gpr(7, 0u + static_cast<std::uint32_t>(98));
    ctx.set_gpr(8, 0u + static_cast<std::uint32_t>(11));
    ctx.set_gpr(31, 0x08A9D78Cu);
    ctx.set_gpr(9, 0u + static_cast<std::uint32_t>(1));
    if (rt.invoke_chained_direct<&recomp_unit_0016_entry, 16u, 558u, 0x08847598u>(ctx, &aot_mem) && ctx.pc == 0x08A9D78Cu) goto L_08A9D78C;
    return;
L_08A9D78C:
    ctx.set_gpr(31, 0x08A9D794u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0017_entry, 17u, 176u, 0x08848BD0u>(ctx, &aot_mem) && ctx.pc == 0x08A9D794u) goto L_08A9D794;
    return;
L_08A9D794:
    ctx.set_gpr(4, ctx.gpr[2] + 0u);
    ctx.set_gpr(2, 16832u << 16u);
    ctx.fpr[12] = std::bit_cast<float>(ctx.gpr[2]);
    ctx.set_gpr(2, 16912u << 16u);
    ctx.fpr[13] = std::bit_cast<float>(ctx.gpr[2]);
    ctx.set_gpr(2, 16256u << 16u);
    ctx.fpr[14] = std::bit_cast<float>(ctx.gpr[2]);
    ctx.set_gpr(5, 0u + static_cast<std::uint32_t>(15));
    ctx.set_gpr(6, 0u + 0u);
    ctx.set_gpr(7, 0u + static_cast<std::uint32_t>(9));
    ctx.set_gpr(8, 0u + 0u);
    ctx.set_gpr(31, 0x08A9D7C8u);
    ctx.set_gpr(9, 0u + static_cast<std::uint32_t>(1));
    if (rt.invoke_chained_direct<&recomp_unit_0016_entry, 16u, 558u, 0x08847598u>(ctx, &aot_mem) && ctx.pc == 0x08A9D7C8u) goto L_08A9D7C8;
    return;
L_08A9D7C8:
    ctx.set_gpr(31, 0x08A9D7D0u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0017_entry, 17u, 176u, 0x08848BD0u>(ctx, &aot_mem) && ctx.pc == 0x08A9D7D0u) goto L_08A9D7D0;
    return;
L_08A9D7D0:
    ctx.set_gpr(4, ctx.gpr[2] + 0u);
    ctx.set_gpr(5, 0u + static_cast<std::uint32_t>(15));
    ctx.set_gpr(6, 0u + static_cast<std::uint32_t>(9));
    ctx.set_gpr(31, 0x08A9D7E4u);
    ctx.set_gpr(7, 0u + static_cast<std::uint32_t>(1));
    if (rt.invoke_chained_direct<&recomp_unit_0022_entry, 22u, 708u, 0x0885EB2Cu>(ctx, &aot_mem) && ctx.pc == 0x08A9D7E4u) goto L_08A9D7E4;
    return;
L_08A9D7E4:
    ctx.set_gpr(16, 0u + 0u);
    goto L_08A9D7E8;
L_08A9D7E8:
    ctx.set_gpr(31, 0x08A9D7F0u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0017_entry, 17u, 176u, 0x08848BD0u>(ctx, &aot_mem) && ctx.pc == 0x08A9D7F0u) goto L_08A9D7F0;
    return;
L_08A9D7F0:
    ctx.set_gpr(4, ctx.gpr[2] + 0u);
    ctx.set_gpr(6, ctx.gpr[16] + static_cast<std::uint32_t>(81));
    ctx.set_gpr(5, 0u + static_cast<std::uint32_t>(15));
    ctx.set_gpr(31, 0x08A9D804u);
    ctx.set_gpr(7, 0u + 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0018_entry, 18u, 69u, 0x0884C47Cu>(ctx, &aot_mem) && ctx.pc == 0x08A9D804u) goto L_08A9D804;
    return;
L_08A9D804:
    ctx.set_gpr(16, ctx.gpr[16] + static_cast<std::uint32_t>(1));
    ctx.set_gpr(2, static_cast<std::int32_t>(ctx.gpr[16]) < 21 ? 1u : 0u);
    { const bool branch_taken = ctx.gpr[2] != 0u;
    // nop
      if (branch_taken) {
          goto L_08A9D7E8;
      }
      goto L_08A9D814;
    }
L_08A9D814:
    ctx.set_gpr(31, 0x08A9D81Cu);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0017_entry, 17u, 176u, 0x08848BD0u>(ctx, &aot_mem) && ctx.pc == 0x08A9D81Cu) goto L_08A9D81C;
    return;
L_08A9D81C:
    ctx.set_gpr(4, ctx.gpr[2] + 0u);
    ctx.set_gpr(5, 0u + static_cast<std::uint32_t>(15));
    ctx.set_gpr(6, 0u + static_cast<std::uint32_t>(54));
    ctx.set_gpr(31, 0x08A9D830u);
    ctx.set_gpr(7, 0u + 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0018_entry, 18u, 69u, 0x0884C47Cu>(ctx, &aot_mem) && ctx.pc == 0x08A9D830u) goto L_08A9D830;
    return;
L_08A9D830:
    ctx.set_gpr(31, 0x08A9D838u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0017_entry, 17u, 176u, 0x08848BD0u>(ctx, &aot_mem) && ctx.pc == 0x08A9D838u) goto L_08A9D838;
    return;
L_08A9D838:
    ctx.set_gpr(4, ctx.gpr[2] + 0u);
    ctx.set_gpr(5, 0u + static_cast<std::uint32_t>(15));
    ctx.set_gpr(6, 0u + static_cast<std::uint32_t>(52));
    ctx.set_gpr(31, 0x08A9D84Cu);
    ctx.set_gpr(7, 0u + 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0018_entry, 18u, 69u, 0x0884C47Cu>(ctx, &aot_mem) && ctx.pc == 0x08A9D84Cu) goto L_08A9D84C;
    return;
L_08A9D84C:
    ctx.set_gpr(31, 0x08A9D854u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0017_entry, 17u, 176u, 0x08848BD0u>(ctx, &aot_mem) && ctx.pc == 0x08A9D854u) goto L_08A9D854;
    return;
L_08A9D854:
    ctx.set_gpr(4, ctx.gpr[2] + 0u);
    ctx.set_gpr(5, 0u + static_cast<std::uint32_t>(15));
    ctx.set_gpr(6, 0u + static_cast<std::uint32_t>(53));
    ctx.set_gpr(31, 0x08A9D868u);
    ctx.set_gpr(7, 0u + 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0018_entry, 18u, 69u, 0x0884C47Cu>(ctx, &aot_mem) && ctx.pc == 0x08A9D868u) goto L_08A9D868;
    return;
L_08A9D868:
    ctx.set_gpr(31, 0x08A9D870u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0017_entry, 17u, 189u, 0x08848C6Cu>(ctx, &aot_mem) && ctx.pc == 0x08A9D870u) goto L_08A9D870;
    return;
L_08A9D870:
    ctx.set_gpr(4, ctx.gpr[2] + 0u);
    ctx.set_gpr(31, 0x08A9D87Cu);
    ctx.set_gpr(5, 0u + static_cast<std::uint32_t>(2));
    goto L_08A9D8F4;
L_08A9D87C:
    ctx.set_gpr(31, 0x08A9D884u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0017_entry, 17u, 190u, 0x08848C78u>(ctx, &aot_mem) && ctx.pc == 0x08A9D884u) goto L_08A9D884;
    return;
L_08A9D884:
    ctx.set_gpr(4, ctx.gpr[2] + 0u);
    ctx.set_gpr(31, 0x08A9D890u);
    ctx.set_gpr(5, 0u + static_cast<std::uint32_t>(2));
    goto L_08A9D8EC;
L_08A9D890:
    ctx.set_gpr(31, 0x08A9D898u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0017_entry, 17u, 189u, 0x08848C6Cu>(ctx, &aot_mem) && ctx.pc == 0x08A9D898u) goto L_08A9D898;
    return;
L_08A9D898:
    ctx.set_gpr(31, 0x08A9D8A0u);
    ctx.set_gpr(4, ctx.gpr[2] + 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0187_entry, 187u, 208u, 0x08AF0DE8u>(ctx, &aot_mem) && ctx.pc == 0x08A9D8A0u) goto L_08A9D8A0;
    return;
L_08A9D8A0:
    ctx.set_gpr(31, 0x08A9D8A8u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0017_entry, 17u, 189u, 0x08848C6Cu>(ctx, &aot_mem) && ctx.pc == 0x08A9D8A8u) goto L_08A9D8A8;
    return;
L_08A9D8A8:
    ctx.set_gpr(4, ctx.gpr[2] + 0u);
    ctx.set_gpr(31, 0x08A9D8B4u);
    ctx.set_gpr(5, 0u + static_cast<std::uint32_t>(2));
    goto L_08A9D8F4;
L_08A9D8B4:
    ctx.set_gpr(31, 0x08A9D8BCu);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0017_entry, 17u, 190u, 0x08848C78u>(ctx, &aot_mem) && ctx.pc == 0x08A9D8BCu) goto L_08A9D8BC;
    return;
L_08A9D8BC:
    ctx.set_gpr(31, 0x08A9D8C4u);
    ctx.set_gpr(4, ctx.gpr[2] + 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0187_entry, 187u, 455u, 0x08AF1C18u>(ctx, &aot_mem) && ctx.pc == 0x08A9D8C4u) goto L_08A9D8C4;
    return;
L_08A9D8C4:
    ctx.set_gpr(31, 0x08A9D8CCu);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0017_entry, 17u, 190u, 0x08848C78u>(ctx, &aot_mem) && ctx.pc == 0x08A9D8CCu) goto L_08A9D8CC;
    return;
L_08A9D8CC:
    ctx.set_gpr(4, ctx.gpr[2] + 0u);
    ctx.set_gpr(31, 0x08A9D8D8u);
    ctx.set_gpr(5, 0u + static_cast<std::uint32_t>(2));
    goto L_08A9D8EC;
L_08A9D8D8:
    ctx.set_gpr(31, rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(12)));
    ctx.set_gpr(17, rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(8)));
    ctx.set_gpr(16, rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(4)));
    jump_target = ctx.gpr[31];
    ctx.set_gpr(29, ctx.gpr[29] + static_cast<std::uint32_t>(16));
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_08A9D8EC:
    jump_target = ctx.gpr[31];
    rt.memory().aot_store32(ctx.gpr[4] + static_cast<std::uint32_t>(4), ctx.gpr[5]);
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_08A9D8F4:
    jump_target = ctx.gpr[31];
    rt.memory().aot_store32(ctx.gpr[4] + static_cast<std::uint32_t>(8), ctx.gpr[5]);
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_08A9D8FC:
    ctx.set_gpr(29, ctx.gpr[29] + static_cast<std::uint32_t>(-16));
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(12), ctx.gpr[31]);
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(8), ctx.gpr[16]);
    ctx.set_gpr(16, 0u + 0u);
    goto L_08A9D90C;
L_08A9D90C:
    ctx.set_gpr(31, 0x08A9D914u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0017_entry, 17u, 176u, 0x08848BD0u>(ctx, &aot_mem) && ctx.pc == 0x08A9D914u) goto L_08A9D914;
    return;
L_08A9D914:
    ctx.set_gpr(4, ctx.gpr[2] + 0u);
    ctx.set_gpr(6, ctx.gpr[16] + static_cast<std::uint32_t>(81));
    ctx.set_gpr(5, 0u + static_cast<std::uint32_t>(15));
    ctx.set_gpr(31, 0x08A9D928u);
    ctx.set_gpr(7, 0u + 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0018_entry, 18u, 69u, 0x0884C47Cu>(ctx, &aot_mem) && ctx.pc == 0x08A9D928u) goto L_08A9D928;
    return;
L_08A9D928:
    ctx.set_gpr(16, ctx.gpr[16] + static_cast<std::uint32_t>(1));
    ctx.set_gpr(2, static_cast<std::int32_t>(ctx.gpr[16]) < 21 ? 1u : 0u);
    { const bool branch_taken = ctx.gpr[2] != 0u;
    // nop
      if (branch_taken) {
          goto L_08A9D90C;
      }
      goto L_08A9D938;
    }
L_08A9D938:
    ctx.set_gpr(16, 0u + 0u);
    goto L_08A9D93C;
L_08A9D93C:
    ctx.set_gpr(31, 0x08A9D944u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0017_entry, 17u, 176u, 0x08848BD0u>(ctx, &aot_mem) && ctx.pc == 0x08A9D944u) goto L_08A9D944;
    return;
L_08A9D944:
    ctx.set_gpr(4, ctx.gpr[2] + 0u);
    ctx.set_gpr(6, ctx.gpr[16] + static_cast<std::uint32_t>(81));
    ctx.set_gpr(31, 0x08A9D954u);
    ctx.set_gpr(5, 0u + static_cast<std::uint32_t>(15));
    if (rt.invoke_chained_direct<&recomp_unit_0016_entry, 16u, 567u, 0x088476B4u>(ctx, &aot_mem) && ctx.pc == 0x08A9D954u) goto L_08A9D954;
    return;
L_08A9D954:
    ctx.set_gpr(16, ctx.gpr[16] + static_cast<std::uint32_t>(1));
    ctx.set_gpr(2, static_cast<std::int32_t>(ctx.gpr[16]) < 21 ? 1u : 0u);
    { const bool branch_taken = ctx.gpr[2] != 0u;
    // nop
      if (branch_taken) {
          goto L_08A9D93C;
      }
      goto L_08A9D964;
    }
L_08A9D964:
    ctx.set_gpr(31, 0x08A9D96Cu);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0017_entry, 17u, 176u, 0x08848BD0u>(ctx, &aot_mem) && ctx.pc == 0x08A9D96Cu) goto L_08A9D96C;
    return;
L_08A9D96C:
    ctx.set_gpr(4, ctx.gpr[2] + 0u);
    ctx.set_gpr(5, 0u + static_cast<std::uint32_t>(15));
    ctx.set_gpr(6, 0u + static_cast<std::uint32_t>(54));
    ctx.set_gpr(31, 0x08A9D980u);
    ctx.set_gpr(7, 0u + 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0018_entry, 18u, 69u, 0x0884C47Cu>(ctx, &aot_mem) && ctx.pc == 0x08A9D980u) goto L_08A9D980;
    return;
L_08A9D980:
    ctx.set_gpr(31, 0x08A9D988u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0017_entry, 17u, 176u, 0x08848BD0u>(ctx, &aot_mem) && ctx.pc == 0x08A9D988u) goto L_08A9D988;
    return;
L_08A9D988:
    ctx.set_gpr(4, ctx.gpr[2] + 0u);
    ctx.set_gpr(5, 0u + static_cast<std::uint32_t>(15));
    ctx.set_gpr(6, 0u + static_cast<std::uint32_t>(52));
    ctx.set_gpr(31, 0x08A9D99Cu);
    ctx.set_gpr(7, 0u + 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0018_entry, 18u, 69u, 0x0884C47Cu>(ctx, &aot_mem) && ctx.pc == 0x08A9D99Cu) goto L_08A9D99C;
    return;
L_08A9D99C:
    ctx.set_gpr(31, 0x08A9D9A4u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0017_entry, 17u, 176u, 0x08848BD0u>(ctx, &aot_mem) && ctx.pc == 0x08A9D9A4u) goto L_08A9D9A4;
    return;
L_08A9D9A4:
    ctx.set_gpr(4, ctx.gpr[2] + 0u);
    ctx.set_gpr(5, 0u + static_cast<std::uint32_t>(15));
    ctx.set_gpr(6, 0u + static_cast<std::uint32_t>(53));
    ctx.set_gpr(31, 0x08A9D9B8u);
    ctx.set_gpr(7, 0u + 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0018_entry, 18u, 69u, 0x0884C47Cu>(ctx, &aot_mem) && ctx.pc == 0x08A9D9B8u) goto L_08A9D9B8;
    return;
L_08A9D9B8:
    ctx.set_gpr(31, 0x08A9D9C0u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0017_entry, 17u, 176u, 0x08848BD0u>(ctx, &aot_mem) && ctx.pc == 0x08A9D9C0u) goto L_08A9D9C0;
    return;
L_08A9D9C0:
    ctx.set_gpr(4, ctx.gpr[2] + 0u);
    ctx.set_gpr(5, 0u + static_cast<std::uint32_t>(15));
    ctx.set_gpr(31, 0x08A9D9D0u);
    ctx.set_gpr(6, 0u + static_cast<std::uint32_t>(9));
    if (rt.invoke_chained_direct<&recomp_unit_0016_entry, 16u, 567u, 0x088476B4u>(ctx, &aot_mem) && ctx.pc == 0x08A9D9D0u) goto L_08A9D9D0;
    return;
L_08A9D9D0:
    ctx.set_gpr(31, 0x08A9D9D8u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0017_entry, 17u, 184u, 0x08848C30u>(ctx, &aot_mem) && ctx.pc == 0x08A9D9D8u) goto L_08A9D9D8;
    return;
L_08A9D9D8:
    ctx.set_gpr(31, 0x08A9D9E0u);
    ctx.set_gpr(4, ctx.gpr[2] + 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0021_entry, 21u, 23u, 0x08858174u>(ctx, &aot_mem) && ctx.pc == 0x08A9D9E0u) goto L_08A9D9E0;
    return;
L_08A9D9E0:
    ctx.set_gpr(31, rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(12)));
    ctx.set_gpr(16, rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(8)));
    jump_target = ctx.gpr[31];
    ctx.set_gpr(29, ctx.gpr[29] + static_cast<std::uint32_t>(16));
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_08A9D9F0:
    ctx.set_gpr(29, ctx.gpr[29] + static_cast<std::uint32_t>(-32));
    ctx.set_gpr(2, 2246u << 16u);
    ctx.set_gpr(2, rt.memory().aot_load32(ctx.gpr[2] + static_cast<std::uint32_t>(-19628)));
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(12), ctx.gpr[31]);
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(8), ctx.gpr[17]);
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(4), ctx.gpr[16]);
    ctx.set_gpr(1, ctx.gpr[2] < static_cast<std::uint32_t>(6) ? 1u : 0u);
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(28), 0u);
    { const bool branch_taken = ctx.gpr[1] == 0u;
    ctx.set_gpr(16, ctx.gpr[4] + 0u);
      if (branch_taken) {
          goto L_08A9DCA8;
      }
      goto L_08A9DA18;
    }
L_08A9DA18:
    ctx.set_gpr(3, 2226u << 16u);
    ctx.set_gpr(2, ctx.gpr[2] << 2u);
    ctx.set_gpr(3, ctx.gpr[3] + static_cast<std::uint32_t>(-26100));
    ctx.set_gpr(2, ctx.gpr[2] + ctx.gpr[3]);
    ctx.set_gpr(2, rt.memory().aot_load32(ctx.gpr[2] + static_cast<std::uint32_t>(0)));
    jump_target = ctx.gpr[2];
    // nop
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_08A9DA34:
    ctx.set_gpr(31, 0x08A9DA3Cu);
    // nop
    goto L_08A9DCD4;
L_08A9DA3C:
    if (ctx.gpr[2] == 0u) {
    ctx.set_gpr(2, 0u + 0u);
        goto L_08A9DCAC;
    }
    goto L_08A9DA44;
L_08A9DA44:
    ctx.set_gpr(2, rt.memory().aot_load8(ctx.gpr[16] + static_cast<std::uint32_t>(15762)));
    if (ctx.gpr[2] == 0u) {
    ctx.set_gpr(2, 2246u << 16u);
        goto L_08A9DAA8;
    }
    goto L_08A9DA50;
L_08A9DA50:
    ctx.set_gpr(17, 0u + 0u);
    ctx.set_gpr(4, rt.memory().aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(0)));
    goto L_08A9DA58;
L_08A9DA58:
    ctx.set_gpr(31, 0x08A9DA60u);
    ctx.set_gpr(5, ctx.gpr[17] + 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0164_entry, 164u, 155u, 0x08A94BC8u>(ctx, &aot_mem) && ctx.pc == 0x08A9DA60u) goto L_08A9DA60;
    return;
L_08A9DA60:
    ctx.set_gpr(31, 0x08A9DA68u);
    ctx.set_gpr(4, rt.memory().aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(0)));
    goto L_08A9DCC0;
L_08A9DA68:
    ctx.set_gpr(2, 0u < ctx.gpr[2] ? 1u : 0u);
    ctx.set_gpr(2, ctx.gpr[2] ^ 1u);
    if (ctx.gpr[2] != 0u) {
    ctx.set_gpr(17, ctx.gpr[17] + static_cast<std::uint32_t>(1));
        goto L_08A9DA88;
    }
    goto L_08A9DA78;
L_08A9DA78:
    ctx.set_gpr(3, 0u + static_cast<std::uint32_t>(1));
    ctx.set_gpr(2, 2246u << 16u);
    { const bool branch_taken = 0u == 0u;
    rt.memory().aot_store8(ctx.gpr[2] + static_cast<std::uint32_t>(-19624), static_cast<std::uint8_t>(ctx.gpr[3]));
      if (branch_taken) {
          goto L_08A9DA94;
      }
      goto L_08A9DA88;
    }
L_08A9DA88:
    ctx.set_gpr(2, static_cast<std::int32_t>(ctx.gpr[17]) < 200 ? 1u : 0u);
    if (ctx.gpr[2] != 0u) {
    ctx.set_gpr(4, rt.memory().aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(0)));
        goto L_08A9DA58;
    }
    goto L_08A9DA94;
L_08A9DA94:
    ctx.set_gpr(3, 0u + static_cast<std::uint32_t>(5));
    ctx.set_gpr(2, 2246u << 16u);
    rt.memory().aot_store8(ctx.gpr[16] + static_cast<std::uint32_t>(15762), static_cast<std::uint8_t>(0u));
    { const bool branch_taken = 0u == 0u;
    rt.memory().aot_store32(ctx.gpr[2] + static_cast<std::uint32_t>(-19628), ctx.gpr[3]);
      if (branch_taken) {
          goto L_08A9DCA8;
      }
      goto L_08A9DAA8;
    }
L_08A9DAA8:
    ctx.set_gpr(31, 0x08A9DAB0u);
    rt.memory().aot_store32(ctx.gpr[2] + static_cast<std::uint32_t>(-19628), 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0017_entry, 17u, 189u, 0x08848C6Cu>(ctx, &aot_mem) && ctx.pc == 0x08A9DAB0u) goto L_08A9DAB0;
    return;
L_08A9DAB0:
    ctx.set_gpr(31, 0x08A9DAB8u);
    ctx.set_gpr(4, ctx.gpr[2] + 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0187_entry, 187u, 208u, 0x08AF0DE8u>(ctx, &aot_mem) && ctx.pc == 0x08A9DAB8u) goto L_08A9DAB8;
    return;
L_08A9DAB8:
    ctx.set_gpr(31, 0x08A9DAC0u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0017_entry, 17u, 190u, 0x08848C78u>(ctx, &aot_mem) && ctx.pc == 0x08A9DAC0u) goto L_08A9DAC0;
    return;
L_08A9DAC0:
    ctx.set_gpr(31, 0x08A9DAC8u);
    ctx.set_gpr(4, ctx.gpr[2] + 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0187_entry, 187u, 455u, 0x08AF1C18u>(ctx, &aot_mem) && ctx.pc == 0x08A9DAC8u) goto L_08A9DAC8;
    return;
L_08A9DAC8:
    ctx.set_gpr(31, 0x08A9DAD0u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0017_entry, 17u, 192u, 0x08848C90u>(ctx, &aot_mem) && ctx.pc == 0x08A9DAD0u) goto L_08A9DAD0;
    return;
L_08A9DAD0:
    ctx.set_gpr(31, 0x08A9DAD8u);
    ctx.set_gpr(4, ctx.gpr[2] + 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0191_entry, 191u, 442u, 0x08B02224u>(ctx, &aot_mem) && ctx.pc == 0x08A9DAD8u) goto L_08A9DAD8;
    return;
L_08A9DAD8:
    { const bool branch_taken = 0u == 0u;
    ctx.set_gpr(2, 0u + static_cast<std::uint32_t>(1));
      if (branch_taken) {
          goto L_08A9DCAC;
      }
      goto L_08A9DAE0;
    }
L_08A9DAE0:
    rt.memory().aot_store32(ctx.gpr[16] + static_cast<std::uint32_t>(15368), 0u);
    ctx.set_gpr(2, 0u + static_cast<std::uint32_t>(1));
    ctx.set_gpr(31, 0x08A9DAF0u);
    rt.memory().aot_store32(ctx.gpr[16] + static_cast<std::uint32_t>(15400), ctx.gpr[2]);
    goto L_08A9D61C;
L_08A9DAF0:
    ctx.set_gpr(2, 0u + static_cast<std::uint32_t>(1));
    rt.memory().aot_store8(ctx.gpr[16] + static_cast<std::uint32_t>(15763), static_cast<std::uint8_t>(ctx.gpr[2]));
    ctx.set_gpr(2, 2246u << 16u);
    ctx.set_gpr(3, rt.memory().aot_load32(ctx.gpr[2] + static_cast<std::uint32_t>(-19628)));
    ctx.set_gpr(2, 2246u << 16u);
    ctx.set_gpr(3, ctx.gpr[3] + static_cast<std::uint32_t>(1));
    { const bool branch_taken = 0u == 0u;
    rt.memory().aot_store32(ctx.gpr[2] + static_cast<std::uint32_t>(-19628), ctx.gpr[3]);
      if (branch_taken) {
          goto L_08A9DCA8;
      }
      goto L_08A9DB10;
    }
L_08A9DB10:
    ctx.set_gpr(31, 0x08A9DB18u);
    ctx.set_gpr(5, ctx.gpr[29] + static_cast<std::uint32_t>(28));
    goto L_08A9E428;
L_08A9DB18:
    ctx.set_gpr(3, rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(28)));
    ctx.set_gpr(2, 0u + static_cast<std::uint32_t>(1));
    if (ctx.gpr[3] != ctx.gpr[2]) {
    ctx.set_gpr(2, 0u + static_cast<std::uint32_t>(-1));
        goto L_08A9DB40;
    }
    goto L_08A9DB28;
L_08A9DB28:
    ctx.set_gpr(2, 2246u << 16u);
    ctx.set_gpr(3, rt.memory().aot_load32(ctx.gpr[2] + static_cast<std::uint32_t>(-19628)));
    ctx.set_gpr(2, 2246u << 16u);
    ctx.set_gpr(3, ctx.gpr[3] + static_cast<std::uint32_t>(1));
    { const bool branch_taken = 0u == 0u;
    rt.memory().aot_store32(ctx.gpr[2] + static_cast<std::uint32_t>(-19628), ctx.gpr[3]);
      if (branch_taken) {
          goto L_08A9DCA8;
      }
      goto L_08A9DB40;
    }
L_08A9DB40:
    { const bool branch_taken = ctx.gpr[3] != ctx.gpr[2];
    // nop
      if (branch_taken) {
          goto L_08A9DCA8;
      }
      goto L_08A9DB48;
    }
L_08A9DB48:
    ctx.set_gpr(3, 0u + static_cast<std::uint32_t>(4));
    ctx.set_gpr(2, 2246u << 16u);
    { const bool branch_taken = 0u == 0u;
    rt.memory().aot_store32(ctx.gpr[2] + static_cast<std::uint32_t>(-19628), ctx.gpr[3]);
      if (branch_taken) {
          goto L_08A9DCA8;
      }
      goto L_08A9DB58;
    }
L_08A9DB58:
    ctx.set_gpr(31, 0x08A9DB60u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0017_entry, 17u, 189u, 0x08848C6Cu>(ctx, &aot_mem) && ctx.pc == 0x08A9DB60u) goto L_08A9DB60;
    return;
L_08A9DB60:
    ctx.set_gpr(31, 0x08A9DB68u);
    ctx.set_gpr(4, ctx.gpr[2] + 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0187_entry, 187u, 208u, 0x08AF0DE8u>(ctx, &aot_mem) && ctx.pc == 0x08A9DB68u) goto L_08A9DB68;
    return;
L_08A9DB68:
    ctx.set_gpr(31, 0x08A9DB70u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0017_entry, 17u, 190u, 0x08848C78u>(ctx, &aot_mem) && ctx.pc == 0x08A9DB70u) goto L_08A9DB70;
    return;
L_08A9DB70:
    ctx.set_gpr(31, 0x08A9DB78u);
    ctx.set_gpr(4, ctx.gpr[2] + 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0187_entry, 187u, 455u, 0x08AF1C18u>(ctx, &aot_mem) && ctx.pc == 0x08A9DB78u) goto L_08A9DB78;
    return;
L_08A9DB78:
    ctx.set_gpr(31, 0x08A9DB80u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0017_entry, 17u, 192u, 0x08848C90u>(ctx, &aot_mem) && ctx.pc == 0x08A9DB80u) goto L_08A9DB80;
    return;
L_08A9DB80:
    ctx.set_gpr(31, 0x08A9DB88u);
    ctx.set_gpr(4, ctx.gpr[2] + 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0191_entry, 191u, 442u, 0x08B02224u>(ctx, &aot_mem) && ctx.pc == 0x08A9DB88u) goto L_08A9DB88;
    return;
L_08A9DB88:
    rt.memory().aot_store8(ctx.gpr[16] + static_cast<std::uint32_t>(15762), static_cast<std::uint8_t>(0u));
    ctx.set_gpr(4, rt.memory().aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(0)));
    ctx.set_gpr(2, 2246u << 16u);
    rt.memory().aot_store32(ctx.gpr[2] + static_cast<std::uint32_t>(-19628), 0u);
    ctx.set_gpr(31, 0x08A9DBA0u);
    ctx.set_gpr(5, 0u + 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0164_entry, 164u, 155u, 0x08A94BC8u>(ctx, &aot_mem) && ctx.pc == 0x08A9DBA0u) goto L_08A9DBA0;
    return;
L_08A9DBA0:
    rt.memory().aot_store8(ctx.gpr[16] + static_cast<std::uint32_t>(15750), static_cast<std::uint8_t>(0u));
    { const bool branch_taken = 0u == 0u;
    ctx.set_gpr(2, 0u + static_cast<std::uint32_t>(1));
      if (branch_taken) {
          goto L_08A9DCAC;
      }
      goto L_08A9DBAC;
    }
L_08A9DBAC:
    ctx.set_gpr(31, 0x08A9DBB4u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0017_entry, 17u, 189u, 0x08848C6Cu>(ctx, &aot_mem) && ctx.pc == 0x08A9DBB4u) goto L_08A9DBB4;
    return;
L_08A9DBB4:
    ctx.set_gpr(31, 0x08A9DBBCu);
    ctx.set_gpr(4, ctx.gpr[2] + 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0187_entry, 187u, 208u, 0x08AF0DE8u>(ctx, &aot_mem) && ctx.pc == 0x08A9DBBCu) goto L_08A9DBBC;
    return;
L_08A9DBBC:
    ctx.set_gpr(31, 0x08A9DBC4u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0017_entry, 17u, 190u, 0x08848C78u>(ctx, &aot_mem) && ctx.pc == 0x08A9DBC4u) goto L_08A9DBC4;
    return;
L_08A9DBC4:
    ctx.set_gpr(31, 0x08A9DBCCu);
    ctx.set_gpr(4, ctx.gpr[2] + 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0187_entry, 187u, 455u, 0x08AF1C18u>(ctx, &aot_mem) && ctx.pc == 0x08A9DBCCu) goto L_08A9DBCC;
    return;
L_08A9DBCC:
    ctx.set_gpr(31, 0x08A9DBD4u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0017_entry, 17u, 192u, 0x08848C90u>(ctx, &aot_mem) && ctx.pc == 0x08A9DBD4u) goto L_08A9DBD4;
    return;
L_08A9DBD4:
    ctx.set_gpr(31, 0x08A9DBDCu);
    ctx.set_gpr(4, ctx.gpr[2] + 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0191_entry, 191u, 442u, 0x08B02224u>(ctx, &aot_mem) && ctx.pc == 0x08A9DBDCu) goto L_08A9DBDC;
    return;
L_08A9DBDC:
    rt.memory().aot_store8(ctx.gpr[16] + static_cast<std::uint32_t>(15762), static_cast<std::uint8_t>(0u));
    ctx.set_gpr(4, rt.memory().aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(0)));
    ctx.set_gpr(2, 2246u << 16u);
    rt.memory().aot_store32(ctx.gpr[2] + static_cast<std::uint32_t>(-19628), 0u);
    ctx.set_gpr(31, 0x08A9DBF4u);
    ctx.set_gpr(5, 0u + 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0164_entry, 164u, 155u, 0x08A94BC8u>(ctx, &aot_mem) && ctx.pc == 0x08A9DBF4u) goto L_08A9DBF4;
    return;
L_08A9DBF4:
    rt.memory().aot_store8(ctx.gpr[16] + static_cast<std::uint32_t>(15750), static_cast<std::uint8_t>(0u));
    { const bool branch_taken = 0u == 0u;
    ctx.set_gpr(2, 0u + static_cast<std::uint32_t>(1));
      if (branch_taken) {
          goto L_08A9DCAC;
      }
      goto L_08A9DC00;
    }
L_08A9DC00:
    ctx.set_gpr(31, 0x08A9DC08u);
    ctx.set_gpr(4, rt.memory().aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(0)));
    if (rt.invoke_chained_direct<&recomp_unit_0164_entry, 164u, 96u, 0x08A946D4u>(ctx, &aot_mem) && ctx.pc == 0x08A9DC08u) goto L_08A9DC08;
    return;
L_08A9DC08:
    ctx.set_gpr(2, static_cast<std::int32_t>(ctx.gpr[2]) < 10 ? 1u : 0u);
    if (ctx.gpr[2] != 0u) {
    ctx.set_gpr(2, 2246u << 16u);
        goto L_08A9DC24;
    }
    goto L_08A9DC14;
L_08A9DC14:
    ctx.set_gpr(3, 0u + static_cast<std::uint32_t>(1));
    ctx.set_gpr(2, 2246u << 16u);
    { const bool branch_taken = 0u == 0u;
    rt.memory().aot_store32(ctx.gpr[2] + static_cast<std::uint32_t>(-19628), ctx.gpr[3]);
      if (branch_taken) {
          goto L_08A9DCA8;
      }
      goto L_08A9DC24;
    }
L_08A9DC24:
    ctx.set_gpr(2, rt.memory().aot_load8(ctx.gpr[2] + static_cast<std::uint32_t>(-19624)));
    { const bool branch_taken = ctx.gpr[2] == 0u;
    // nop
      if (branch_taken) {
          goto L_08A9DC5C;
      }
      goto L_08A9DC30;
    }
L_08A9DC30:
    ctx.set_gpr(31, 0x08A9DC38u);
    ctx.set_gpr(4, rt.memory().aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(0)));
    if (rt.invoke_chained_direct<&recomp_unit_0164_entry, 164u, 96u, 0x08A946D4u>(ctx, &aot_mem) && ctx.pc == 0x08A9DC38u) goto L_08A9DC38;
    return;
L_08A9DC38:
    ctx.set_gpr(1, static_cast<std::int32_t>(ctx.gpr[2]) < 10 ? 1u : 0u);
    { const bool branch_taken = ctx.gpr[1] == 0u;
    // nop
      if (branch_taken) {
          goto L_08A9DC5C;
      }
      goto L_08A9DC44;
    }
L_08A9DC44:
    ctx.set_gpr(3, 0u + static_cast<std::uint32_t>(1));
    ctx.set_gpr(2, 2246u << 16u);
    rt.memory().aot_store32(ctx.gpr[2] + static_cast<std::uint32_t>(-19628), ctx.gpr[3]);
    ctx.set_gpr(2, 2246u << 16u);
    { const bool branch_taken = 0u == 0u;
    rt.memory().aot_store8(ctx.gpr[2] + static_cast<std::uint32_t>(-19624), static_cast<std::uint8_t>(0u));
      if (branch_taken) {
          goto L_08A9DCA8;
      }
      goto L_08A9DC5C;
    }
L_08A9DC5C:
    ctx.set_gpr(2, 2246u << 16u);
    ctx.set_gpr(2, rt.memory().aot_load8(ctx.gpr[2] + static_cast<std::uint32_t>(-19624)));
    { const bool branch_taken = ctx.gpr[2] != 0u;
    // nop
      if (branch_taken) {
          goto L_08A9DCA8;
      }
      goto L_08A9DC6C;
    }
L_08A9DC6C:
    ctx.set_gpr(31, 0x08A9DC74u);
    ctx.set_gpr(4, rt.memory().aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(0)));
    if (rt.invoke_chained_direct<&recomp_unit_0164_entry, 164u, 96u, 0x08A946D4u>(ctx, &aot_mem) && ctx.pc == 0x08A9DC74u) goto L_08A9DC74;
    return;
L_08A9DC74:
    ctx.set_gpr(1, static_cast<std::int32_t>(ctx.gpr[2]) < 10 ? 1u : 0u);
    { const bool branch_taken = ctx.gpr[1] == 0u;
    // nop
      if (branch_taken) {
          goto L_08A9DCA8;
      }
      goto L_08A9DC80;
    }
L_08A9DC80:
    ctx.set_gpr(31, 0x08A9DC88u);
    ctx.set_gpr(4, ctx.gpr[16] + 0u);
    goto L_08A9E13C;
L_08A9DC88:
    { const bool branch_taken = ctx.gpr[2] == 0u;
    // nop
      if (branch_taken) {
          goto L_08A9DCA8;
      }
      goto L_08A9DC90;
    }
L_08A9DC90:
    ctx.set_gpr(2, 2246u << 16u);
    rt.memory().aot_store8(ctx.gpr[16] + static_cast<std::uint32_t>(15762), static_cast<std::uint8_t>(0u));
    rt.memory().aot_store32(ctx.gpr[2] + static_cast<std::uint32_t>(-19628), 0u);
    rt.memory().aot_store8(ctx.gpr[16] + static_cast<std::uint32_t>(15763), static_cast<std::uint8_t>(0u));
    { const bool branch_taken = 0u == 0u;
    ctx.set_gpr(2, 0u + static_cast<std::uint32_t>(1));
      if (branch_taken) {
          goto L_08A9DCAC;
      }
      goto L_08A9DCA8;
    }
L_08A9DCA8:
    ctx.set_gpr(2, 0u + 0u);
    goto L_08A9DCAC;
L_08A9DCAC:
    ctx.set_gpr(31, rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(12)));
    ctx.set_gpr(17, rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(8)));
    ctx.set_gpr(16, rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(4)));
    jump_target = ctx.gpr[31];
    ctx.set_gpr(29, ctx.gpr[29] + static_cast<std::uint32_t>(32));
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_08A9DCC0:
    ctx.set_gpr(2, 1u << 16u);
    ctx.set_gpr(2, ctx.gpr[4] + ctx.gpr[2]);
    ctx.set_gpr(2, rt.memory().aot_load32(ctx.gpr[2] + static_cast<std::uint32_t>(120)));
    jump_target = ctx.gpr[31];
    ctx.set_gpr(2, 0u < ctx.gpr[2] ? 1u : 0u);
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_08A9DCD4:
    ctx.set_gpr(29, ctx.gpr[29] + static_cast<std::uint32_t>(-16));
    ctx.set_gpr(2, 2246u << 16u);
    ctx.set_gpr(3, rt.memory().aot_load32(ctx.gpr[2] + static_cast<std::uint32_t>(-19620)));
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(12), ctx.gpr[31]);
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(8), ctx.gpr[16]);
    ctx.set_gpr(2, 0u + static_cast<std::uint32_t>(4));
    { const bool branch_taken = ctx.gpr[3] == ctx.gpr[2];
    ctx.set_gpr(16, ctx.gpr[4] + 0u);
      if (branch_taken) {
          goto L_08A9E084;
      }
      goto L_08A9DCF4;
    }
L_08A9DCF4:
    ctx.set_gpr(2, 0u + static_cast<std::uint32_t>(3));
    { const bool branch_taken = ctx.gpr[3] == ctx.gpr[2];
    // nop
      if (branch_taken) {
          goto L_08A9DFBC;
      }
      goto L_08A9DD00;
    }
L_08A9DD00:
    ctx.set_gpr(2, 0u + static_cast<std::uint32_t>(2));
    { const bool branch_taken = ctx.gpr[3] == ctx.gpr[2];
    // nop
      if (branch_taken) {
          goto L_08A9DF38;
      }
      goto L_08A9DD0C;
    }
L_08A9DD0C:
    ctx.set_gpr(2, 0u + static_cast<std::uint32_t>(1));
    { const bool branch_taken = ctx.gpr[3] == ctx.gpr[2];
    // nop
      if (branch_taken) {
          goto L_08A9DF0C;
      }
      goto L_08A9DD18;
    }
L_08A9DD18:
    { const bool branch_taken = ctx.gpr[3] == 0u;
    // nop
      if (branch_taken) {
          goto L_08A9DD28;
      }
      goto L_08A9DD20;
    }
L_08A9DD20:
    { const bool branch_taken = 0u == 0u;
    ctx.set_gpr(2, 0u + 0u);
      if (branch_taken) {
          goto L_08A9E12C;
      }
      goto L_08A9DD28;
    }
L_08A9DD28:
    ctx.set_gpr(31, 0x08A9DD30u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0017_entry, 17u, 189u, 0x08848C6Cu>(ctx, &aot_mem) && ctx.pc == 0x08A9DD30u) goto L_08A9DD30;
    return;
L_08A9DD30:
    ctx.set_gpr(4, ctx.gpr[2] + 0u);
    ctx.set_gpr(2, 2229u << 16u);
    ctx.set_gpr(31, 0x08A9DD40u);
    ctx.set_gpr(5, rt.memory().aot_load32(ctx.gpr[2] + static_cast<std::uint32_t>(32224)));
    if (rt.invoke_chained_direct<&recomp_unit_0187_entry, 187u, 197u, 0x08AF0D70u>(ctx, &aot_mem) && ctx.pc == 0x08A9DD40u) goto L_08A9DD40;
    return;
L_08A9DD40:
    ctx.set_gpr(31, 0x08A9DD48u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0017_entry, 17u, 190u, 0x08848C78u>(ctx, &aot_mem) && ctx.pc == 0x08A9DD48u) goto L_08A9DD48;
    return;
L_08A9DD48:
    ctx.set_gpr(5, 2230u << 16u);
    ctx.set_gpr(4, ctx.gpr[2] + 0u);
    ctx.set_gpr(31, 0x08A9DD58u);
    ctx.set_gpr(5, ctx.gpr[5] + static_cast<std::uint32_t>(19648));
    if (rt.invoke_chained_direct<&recomp_unit_0187_entry, 187u, 446u, 0x08AF1BACu>(ctx, &aot_mem) && ctx.pc == 0x08A9DD58u) goto L_08A9DD58;
    return;
L_08A9DD58:
    ctx.set_gpr(31, 0x08A9DD60u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0017_entry, 17u, 182u, 0x08848C18u>(ctx, &aot_mem) && ctx.pc == 0x08A9DD60u) goto L_08A9DD60;
    return;
L_08A9DD60:
    ctx.set_gpr(31, 0x08A9DD68u);
    ctx.set_gpr(4, ctx.gpr[2] + 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0023_entry, 23u, 526u, 0x08861EE8u>(ctx, &aot_mem) && ctx.pc == 0x08A9DD68u) goto L_08A9DD68;
    return;
L_08A9DD68:
    ctx.set_gpr(5, 0u + static_cast<std::uint32_t>(2));
    ctx.set_gpr(4, ctx.gpr[2] + 0u);
    ctx.set_gpr(6, 0u + static_cast<std::uint32_t>(18));
    ctx.set_gpr(31, 0x08A9DD7Cu);
    ctx.set_gpr(7, ctx.gpr[5] + 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0158_entry, 158u, 1029u, 0x08A7F850u>(ctx, &aot_mem) && ctx.pc == 0x08A9DD7Cu) goto L_08A9DD7C;
    return;
L_08A9DD7C:
    ctx.set_gpr(31, 0x08A9DD84u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0017_entry, 17u, 191u, 0x08848C84u>(ctx, &aot_mem) && ctx.pc == 0x08A9DD84u) goto L_08A9DD84;
    return;
L_08A9DD84:
    ctx.set_gpr(4, ctx.gpr[2] + 0u);
    ctx.set_gpr(2, 49024u << 16u);
    ctx.fpr[12] = std::bit_cast<float>(ctx.gpr[2]);
    ctx.set_gpr(8, 0u + static_cast<std::uint32_t>(1));
    ctx.set_gpr(5, 0u + 0u);
    ctx.set_fpr_bits(13, ctx.fpr_bits(12));
    ctx.set_gpr(6, 0u + static_cast<std::uint32_t>(300));
    ctx.set_gpr(7, 0u + static_cast<std::uint32_t>(150));
    ctx.set_gpr(9, 0u + static_cast<std::uint32_t>(4));
    ctx.set_gpr(10, 0u + 0u);
    ctx.set_gpr(31, 0x08A9DDB4u);
    ctx.set_gpr(11, ctx.gpr[8] + 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0189_entry, 189u, 748u, 0x08AFBA10u>(ctx, &aot_mem) && ctx.pc == 0x08A9DDB4u) goto L_08A9DDB4;
    return;
L_08A9DDB4:
    ctx.set_gpr(31, 0x08A9DDBCu);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0017_entry, 17u, 191u, 0x08848C84u>(ctx, &aot_mem) && ctx.pc == 0x08A9DDBCu) goto L_08A9DDBC;
    return;
L_08A9DDBC:
    ctx.set_gpr(4, ctx.gpr[2] + 0u);
    ctx.set_gpr(5, 0u + 0u);
    ctx.set_gpr(31, 0x08A9DDCCu);
    ctx.set_gpr(6, 0u + 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0190_entry, 190u, 75u, 0x08AFC55Cu>(ctx, &aot_mem) && ctx.pc == 0x08A9DDCCu) goto L_08A9DDCC;
    return;
L_08A9DDCC:
    ctx.set_gpr(4, ctx.gpr[2] + 0u);
    ctx.set_gpr(31, 0x08A9DDD8u);
    ctx.set_gpr(5, 0u + static_cast<std::uint32_t>(1));
    if (rt.invoke_chained_direct<&recomp_unit_0024_entry, 24u, 825u, 0x0886697Cu>(ctx, &aot_mem) && ctx.pc == 0x08A9DDD8u) goto L_08A9DDD8;
    return;
L_08A9DDD8:
    ctx.set_gpr(31, 0x08A9DDE0u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0017_entry, 17u, 191u, 0x08848C84u>(ctx, &aot_mem) && ctx.pc == 0x08A9DDE0u) goto L_08A9DDE0;
    return;
L_08A9DDE0:
    ctx.set_gpr(4, ctx.gpr[2] + 0u);
    ctx.set_gpr(5, 0u + 0u);
    ctx.set_gpr(31, 0x08A9DDF0u);
    ctx.set_gpr(6, 0u + 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0190_entry, 190u, 75u, 0x08AFC55Cu>(ctx, &aot_mem) && ctx.pc == 0x08A9DDF0u) goto L_08A9DDF0;
    return;
L_08A9DDF0:
    ctx.set_gpr(4, ctx.gpr[2] + 0u);
    ctx.set_gpr(2, 16256u << 16u);
    ctx.fpr[12] = std::bit_cast<float>(ctx.gpr[2]);
    ctx.set_gpr(5, 2230u << 16u);
    ctx.set_gpr(5, ctx.gpr[5] + static_cast<std::uint32_t>(19668));
    ctx.set_gpr(6, 0u + 0u);
    ctx.set_gpr(31, 0x08A9DE10u);
    ctx.set_fpr_bits(13, ctx.fpr_bits(12));
    if (rt.invoke_chained_direct<&recomp_unit_0187_entry, 187u, 635u, 0x08AF2840u>(ctx, &aot_mem) && ctx.pc == 0x08A9DE10u) goto L_08A9DE10;
    return;
L_08A9DE10:
    ctx.set_gpr(31, 0x08A9DE18u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0017_entry, 17u, 191u, 0x08848C84u>(ctx, &aot_mem) && ctx.pc == 0x08A9DE18u) goto L_08A9DE18;
    return;
L_08A9DE18:
    ctx.set_gpr(4, ctx.gpr[2] + 0u);
    ctx.set_gpr(5, 0u + 0u);
    ctx.set_gpr(31, 0x08A9DE28u);
    ctx.set_gpr(6, 0u + 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0190_entry, 190u, 75u, 0x08AFC55Cu>(ctx, &aot_mem) && ctx.pc == 0x08A9DE28u) goto L_08A9DE28;
    return;
L_08A9DE28:
    ctx.set_gpr(4, ctx.gpr[2] + 0u);
    ctx.set_gpr(2, 16256u << 16u);
    ctx.fpr[12] = std::bit_cast<float>(ctx.gpr[2]);
    ctx.set_gpr(5, 2230u << 16u);
    ctx.set_gpr(5, ctx.gpr[5] + static_cast<std::uint32_t>(19700));
    ctx.set_gpr(6, 0u + 0u);
    ctx.set_gpr(31, 0x08A9DE48u);
    ctx.set_fpr_bits(13, ctx.fpr_bits(12));
    if (rt.invoke_chained_direct<&recomp_unit_0187_entry, 187u, 635u, 0x08AF2840u>(ctx, &aot_mem) && ctx.pc == 0x08A9DE48u) goto L_08A9DE48;
    return;
L_08A9DE48:
    ctx.set_gpr(31, 0x08A9DE50u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0017_entry, 17u, 191u, 0x08848C84u>(ctx, &aot_mem) && ctx.pc == 0x08A9DE50u) goto L_08A9DE50;
    return;
L_08A9DE50:
    ctx.set_gpr(4, ctx.gpr[2] + 0u);
    ctx.set_gpr(5, 0u + 0u);
    ctx.set_gpr(31, 0x08A9DE60u);
    ctx.set_gpr(6, 0u + 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0190_entry, 190u, 75u, 0x08AFC55Cu>(ctx, &aot_mem) && ctx.pc == 0x08A9DE60u) goto L_08A9DE60;
    return;
L_08A9DE60:
    ctx.set_gpr(4, ctx.gpr[2] + 0u);
    ctx.set_gpr(2, 16256u << 16u);
    ctx.fpr[12] = std::bit_cast<float>(ctx.gpr[2]);
    ctx.set_gpr(5, 2230u << 16u);
    ctx.set_gpr(5, ctx.gpr[5] + static_cast<std::uint32_t>(19744));
    ctx.set_gpr(6, 0u + 0u);
    ctx.set_gpr(31, 0x08A9DE80u);
    ctx.set_fpr_bits(13, ctx.fpr_bits(12));
    if (rt.invoke_chained_direct<&recomp_unit_0187_entry, 187u, 635u, 0x08AF2840u>(ctx, &aot_mem) && ctx.pc == 0x08A9DE80u) goto L_08A9DE80;
    return;
L_08A9DE80:
    ctx.set_gpr(31, 0x08A9DE88u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0017_entry, 17u, 191u, 0x08848C84u>(ctx, &aot_mem) && ctx.pc == 0x08A9DE88u) goto L_08A9DE88;
    return;
L_08A9DE88:
    ctx.set_gpr(4, ctx.gpr[2] + 0u);
    ctx.set_gpr(5, 0u + 0u);
    ctx.set_gpr(31, 0x08A9DE98u);
    ctx.set_gpr(6, 0u + 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0190_entry, 190u, 75u, 0x08AFC55Cu>(ctx, &aot_mem) && ctx.pc == 0x08A9DE98u) goto L_08A9DE98;
    return;
L_08A9DE98:
    ctx.set_gpr(4, ctx.gpr[2] + 0u);
    ctx.set_gpr(2, 16256u << 16u);
    ctx.fpr[12] = std::bit_cast<float>(ctx.gpr[2]);
    ctx.set_gpr(5, 2230u << 16u);
    ctx.set_gpr(5, ctx.gpr[5] + static_cast<std::uint32_t>(19772));
    ctx.set_gpr(6, 0u + 0u);
    ctx.set_gpr(31, 0x08A9DEB8u);
    ctx.set_fpr_bits(13, ctx.fpr_bits(12));
    if (rt.invoke_chained_direct<&recomp_unit_0187_entry, 187u, 635u, 0x08AF2840u>(ctx, &aot_mem) && ctx.pc == 0x08A9DEB8u) goto L_08A9DEB8;
    return;
L_08A9DEB8:
    ctx.set_gpr(31, 0x08A9DEC0u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0017_entry, 17u, 191u, 0x08848C84u>(ctx, &aot_mem) && ctx.pc == 0x08A9DEC0u) goto L_08A9DEC0;
    return;
L_08A9DEC0:
    ctx.set_gpr(4, ctx.gpr[2] + 0u);
    ctx.set_gpr(5, 0u + 0u);
    ctx.set_gpr(31, 0x08A9DED0u);
    ctx.set_gpr(6, 0u + static_cast<std::uint32_t>(1));
    if (rt.invoke_chained_direct<&recomp_unit_0190_entry, 190u, 4u, 0x08AFC024u>(ctx, &aot_mem) && ctx.pc == 0x08A9DED0u) goto L_08A9DED0;
    return;
L_08A9DED0:
    ctx.set_gpr(31, 0x08A9DED8u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0017_entry, 17u, 191u, 0x08848C84u>(ctx, &aot_mem) && ctx.pc == 0x08A9DED8u) goto L_08A9DED8;
    return;
L_08A9DED8:
    ctx.set_gpr(4, ctx.gpr[2] + 0u);
    ctx.set_gpr(31, 0x08A9DEE4u);
    ctx.set_gpr(5, 0u + 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0189_entry, 189u, 781u, 0x08AFBD40u>(ctx, &aot_mem) && ctx.pc == 0x08A9DEE4u) goto L_08A9DEE4;
    return;
L_08A9DEE4:
    ctx.set_gpr(31, 0x08A9DEECu);
    rt.memory().aot_store32(ctx.gpr[16] + static_cast<std::uint32_t>(15340), 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0017_entry, 17u, 192u, 0x08848C90u>(ctx, &aot_mem) && ctx.pc == 0x08A9DEECu) goto L_08A9DEEC;
    return;
L_08A9DEEC:
    ctx.set_gpr(31, 0x08A9DEF4u);
    ctx.set_gpr(4, ctx.gpr[2] + 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0191_entry, 191u, 442u, 0x08B02224u>(ctx, &aot_mem) && ctx.pc == 0x08A9DEF4u) goto L_08A9DEF4;
    return;
L_08A9DEF4:
    ctx.set_gpr(2, 2246u << 16u);
    ctx.set_gpr(3, rt.memory().aot_load32(ctx.gpr[2] + static_cast<std::uint32_t>(-19620)));
    ctx.set_gpr(2, 2246u << 16u);
    ctx.set_gpr(3, ctx.gpr[3] + static_cast<std::uint32_t>(1));
    { const bool branch_taken = 0u == 0u;
    rt.memory().aot_store32(ctx.gpr[2] + static_cast<std::uint32_t>(-19620), ctx.gpr[3]);
      if (branch_taken) {
          goto L_08A9E128;
      }
      goto L_08A9DF0C;
    }
L_08A9DF0C:
    ctx.set_gpr(31, 0x08A9DF14u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0017_entry, 17u, 191u, 0x08848C84u>(ctx, &aot_mem) && ctx.pc == 0x08A9DF14u) goto L_08A9DF14;
    return;
L_08A9DF14:
    ctx.set_gpr(4, ctx.gpr[2] + 0u);
    ctx.set_gpr(31, 0x08A9DF20u);
    ctx.set_gpr(5, 0u + 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0190_entry, 190u, 64u, 0x08AFC4A4u>(ctx, &aot_mem) && ctx.pc == 0x08A9DF20u) goto L_08A9DF20;
    return;
L_08A9DF20:
    { const bool branch_taken = ctx.gpr[2] != 0u;
    // nop
      if (branch_taken) {
          goto L_08A9E128;
      }
      goto L_08A9DF28;
    }
L_08A9DF28:
    ctx.set_gpr(3, 0u + static_cast<std::uint32_t>(3));
    ctx.set_gpr(2, 2246u << 16u);
    { const bool branch_taken = 0u == 0u;
    rt.memory().aot_store32(ctx.gpr[2] + static_cast<std::uint32_t>(-19620), ctx.gpr[3]);
      if (branch_taken) {
          goto L_08A9E128;
      }
      goto L_08A9DF38;
    }
L_08A9DF38:
    ctx.set_gpr(31, 0x08A9DF40u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0017_entry, 17u, 191u, 0x08848C84u>(ctx, &aot_mem) && ctx.pc == 0x08A9DF40u) goto L_08A9DF40;
    return;
L_08A9DF40:
    ctx.set_gpr(4, ctx.gpr[2] + 0u);
    ctx.set_gpr(31, 0x08A9DF4Cu);
    ctx.set_gpr(5, 0u + 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0190_entry, 190u, 64u, 0x08AFC4A4u>(ctx, &aot_mem) && ctx.pc == 0x08A9DF4Cu) goto L_08A9DF4C;
    return;
L_08A9DF4C:
    { const bool branch_taken = ctx.gpr[2] != 0u;
    // nop
      if (branch_taken) {
          goto L_08A9E128;
      }
      goto L_08A9DF54;
    }
L_08A9DF54:
    ctx.set_gpr(31, 0x08A9DF5Cu);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0017_entry, 17u, 191u, 0x08848C84u>(ctx, &aot_mem) && ctx.pc == 0x08A9DF5Cu) goto L_08A9DF5C;
    return;
L_08A9DF5C:
    ctx.set_gpr(4, ctx.gpr[2] + 0u);
    ctx.set_gpr(5, 0u + 0u);
    ctx.set_gpr(31, 0x08A9DF6Cu);
    ctx.set_gpr(6, 0u + 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0190_entry, 190u, 75u, 0x08AFC55Cu>(ctx, &aot_mem) && ctx.pc == 0x08A9DF6Cu) goto L_08A9DF6C;
    return;
L_08A9DF6C:
    ctx.set_gpr(31, 0x08A9DF74u);
    ctx.set_gpr(4, ctx.gpr[2] + 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0187_entry, 187u, 583u, 0x08AF2474u>(ctx, &aot_mem) && ctx.pc == 0x08A9DF74u) goto L_08A9DF74;
    return;
L_08A9DF74:
    ctx.set_gpr(31, 0x08A9DF7Cu);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0017_entry, 17u, 191u, 0x08848C84u>(ctx, &aot_mem) && ctx.pc == 0x08A9DF7Cu) goto L_08A9DF7C;
    return;
L_08A9DF7C:
    ctx.set_gpr(4, ctx.gpr[2] + 0u);
    ctx.set_gpr(31, 0x08A9DF88u);
    ctx.set_gpr(5, 0u + 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0189_entry, 189u, 769u, 0x08AFBC7Cu>(ctx, &aot_mem) && ctx.pc == 0x08A9DF88u) goto L_08A9DF88;
    return;
L_08A9DF88:
    ctx.set_gpr(31, 0x08A9DF90u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0017_entry, 17u, 189u, 0x08848C6Cu>(ctx, &aot_mem) && ctx.pc == 0x08A9DF90u) goto L_08A9DF90;
    return;
L_08A9DF90:
    ctx.set_gpr(31, 0x08A9DF98u);
    ctx.set_gpr(4, ctx.gpr[2] + 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0187_entry, 187u, 208u, 0x08AF0DE8u>(ctx, &aot_mem) && ctx.pc == 0x08A9DF98u) goto L_08A9DF98;
    return;
L_08A9DF98:
    ctx.set_gpr(31, 0x08A9DFA0u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0017_entry, 17u, 190u, 0x08848C78u>(ctx, &aot_mem) && ctx.pc == 0x08A9DFA0u) goto L_08A9DFA0;
    return;
L_08A9DFA0:
    ctx.set_gpr(31, 0x08A9DFA8u);
    ctx.set_gpr(4, ctx.gpr[2] + 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0187_entry, 187u, 455u, 0x08AF1C18u>(ctx, &aot_mem) && ctx.pc == 0x08A9DFA8u) goto L_08A9DFA8;
    return;
L_08A9DFA8:
    ctx.set_gpr(2, 2246u << 16u);
    rt.memory().aot_store32(ctx.gpr[2] + static_cast<std::uint32_t>(-19620), 0u);
    rt.memory().aot_store8(ctx.gpr[16] + static_cast<std::uint32_t>(15762), static_cast<std::uint8_t>(0u));
    { const bool branch_taken = 0u == 0u;
    ctx.set_gpr(2, 0u + static_cast<std::uint32_t>(1));
      if (branch_taken) {
          goto L_08A9E12C;
      }
      goto L_08A9DFBC;
    }
L_08A9DFBC:
    ctx.set_gpr(31, 0x08A9DFC4u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0017_entry, 17u, 191u, 0x08848C84u>(ctx, &aot_mem) && ctx.pc == 0x08A9DFC4u) goto L_08A9DFC4;
    return;
L_08A9DFC4:
    ctx.set_gpr(4, ctx.gpr[2] + 0u);
    ctx.set_gpr(31, 0x08A9DFD0u);
    ctx.set_gpr(5, 0u + 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0190_entry, 190u, 62u, 0x08AFC464u>(ctx, &aot_mem) && ctx.pc == 0x08A9DFD0u) goto L_08A9DFD0;
    return;
L_08A9DFD0:
    { const bool branch_taken = ctx.gpr[2] == 0u;
    // nop
      if (branch_taken) {
          goto L_08A9E128;
      }
      goto L_08A9DFD8;
    }
L_08A9DFD8:
    ctx.set_gpr(31, 0x08A9DFE0u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0017_entry, 17u, 191u, 0x08848C84u>(ctx, &aot_mem) && ctx.pc == 0x08A9DFE0u) goto L_08A9DFE0;
    return;
L_08A9DFE0:
    ctx.set_gpr(4, ctx.gpr[2] + 0u);
    ctx.set_gpr(31, 0x08A9DFECu);
    ctx.set_gpr(5, 0u + 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0190_entry, 190u, 62u, 0x08AFC464u>(ctx, &aot_mem) && ctx.pc == 0x08A9DFECu) goto L_08A9DFEC;
    return;
L_08A9DFEC:
    ctx.set_gpr(3, 0u + static_cast<std::uint32_t>(2));
    { const bool branch_taken = ctx.gpr[2] == ctx.gpr[3];
    rt.memory().aot_store32(ctx.gpr[16] + static_cast<std::uint32_t>(15340), ctx.gpr[2]);
      if (branch_taken) {
          goto L_08A9E058;
      }
      goto L_08A9DFF8;
    }
L_08A9DFF8:
    ctx.set_gpr(3, 0u + static_cast<std::uint32_t>(1));
    { const bool branch_taken = ctx.gpr[2] == ctx.gpr[3];
    // nop
      if (branch_taken) {
          goto L_08A9E00C;
      }
      goto L_08A9E004;
    }
L_08A9E004:
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_08A9E128;
      }
      goto L_08A9E00C;
    }
L_08A9E00C:
    ctx.set_gpr(31, 0x08A9E014u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0017_entry, 17u, 191u, 0x08848C84u>(ctx, &aot_mem) && ctx.pc == 0x08A9E014u) goto L_08A9E014;
    return;
L_08A9E014:
    ctx.set_gpr(4, ctx.gpr[2] + 0u);
    ctx.set_gpr(31, 0x08A9E020u);
    ctx.set_gpr(5, 0u + 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0189_entry, 189u, 800u, 0x08AFBE48u>(ctx, &aot_mem) && ctx.pc == 0x08A9E020u) goto L_08A9E020;
    return;
L_08A9E020:
    ctx.set_gpr(31, 0x08A9E028u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0017_entry, 17u, 189u, 0x08848C6Cu>(ctx, &aot_mem) && ctx.pc == 0x08A9E028u) goto L_08A9E028;
    return;
L_08A9E028:
    ctx.set_gpr(31, 0x08A9E030u);
    ctx.set_gpr(4, ctx.gpr[2] + 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0187_entry, 187u, 208u, 0x08AF0DE8u>(ctx, &aot_mem) && ctx.pc == 0x08A9E030u) goto L_08A9E030;
    return;
L_08A9E030:
    ctx.set_gpr(31, 0x08A9E038u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0017_entry, 17u, 190u, 0x08848C78u>(ctx, &aot_mem) && ctx.pc == 0x08A9E038u) goto L_08A9E038;
    return;
L_08A9E038:
    ctx.set_gpr(31, 0x08A9E040u);
    ctx.set_gpr(4, ctx.gpr[2] + 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0187_entry, 187u, 455u, 0x08AF1C18u>(ctx, &aot_mem) && ctx.pc == 0x08A9E040u) goto L_08A9E040;
    return;
L_08A9E040:
    ctx.set_gpr(2, 2246u << 16u);
    ctx.set_gpr(3, rt.memory().aot_load32(ctx.gpr[2] + static_cast<std::uint32_t>(-19620)));
    ctx.set_gpr(2, 2246u << 16u);
    ctx.set_gpr(3, ctx.gpr[3] + static_cast<std::uint32_t>(1));
    { const bool branch_taken = 0u == 0u;
    rt.memory().aot_store32(ctx.gpr[2] + static_cast<std::uint32_t>(-19620), ctx.gpr[3]);
      if (branch_taken) {
          goto L_08A9E128;
      }
      goto L_08A9E058;
    }
L_08A9E058:
    ctx.set_gpr(31, 0x08A9E060u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0017_entry, 17u, 191u, 0x08848C84u>(ctx, &aot_mem) && ctx.pc == 0x08A9E060u) goto L_08A9E060;
    return;
L_08A9E060:
    ctx.set_gpr(4, ctx.gpr[2] + 0u);
    ctx.set_gpr(31, 0x08A9E06Cu);
    ctx.set_gpr(5, 0u + 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0189_entry, 189u, 800u, 0x08AFBE48u>(ctx, &aot_mem) && ctx.pc == 0x08A9E06Cu) goto L_08A9E06C;
    return;
L_08A9E06C:
    ctx.set_gpr(2, 2246u << 16u);
    ctx.set_gpr(3, rt.memory().aot_load32(ctx.gpr[2] + static_cast<std::uint32_t>(-19620)));
    ctx.set_gpr(2, 2246u << 16u);
    ctx.set_gpr(3, ctx.gpr[3] + static_cast<std::uint32_t>(-1));
    { const bool branch_taken = 0u == 0u;
    rt.memory().aot_store32(ctx.gpr[2] + static_cast<std::uint32_t>(-19620), ctx.gpr[3]);
      if (branch_taken) {
          goto L_08A9E128;
      }
      goto L_08A9E084;
    }
L_08A9E084:
    ctx.set_gpr(31, 0x08A9E08Cu);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0017_entry, 17u, 191u, 0x08848C84u>(ctx, &aot_mem) && ctx.pc == 0x08A9E08Cu) goto L_08A9E08C;
    return;
L_08A9E08C:
    ctx.set_gpr(4, ctx.gpr[2] + 0u);
    ctx.set_gpr(31, 0x08A9E098u);
    ctx.set_gpr(5, 0u + 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0190_entry, 190u, 64u, 0x08AFC4A4u>(ctx, &aot_mem) && ctx.pc == 0x08A9E098u) goto L_08A9E098;
    return;
L_08A9E098:
    { const bool branch_taken = ctx.gpr[2] != 0u;
    // nop
      if (branch_taken) {
          goto L_08A9E128;
      }
      goto L_08A9E0A0;
    }
L_08A9E0A0:
    ctx.set_gpr(31, 0x08A9E0A8u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0017_entry, 17u, 189u, 0x08848C6Cu>(ctx, &aot_mem) && ctx.pc == 0x08A9E0A8u) goto L_08A9E0A8;
    return;
L_08A9E0A8:
    ctx.set_gpr(31, 0x08A9E0B0u);
    ctx.set_gpr(4, ctx.gpr[2] + 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0187_entry, 187u, 208u, 0x08AF0DE8u>(ctx, &aot_mem) && ctx.pc == 0x08A9E0B0u) goto L_08A9E0B0;
    return;
L_08A9E0B0:
    ctx.set_gpr(31, 0x08A9E0B8u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0017_entry, 17u, 190u, 0x08848C78u>(ctx, &aot_mem) && ctx.pc == 0x08A9E0B8u) goto L_08A9E0B8;
    return;
L_08A9E0B8:
    ctx.set_gpr(31, 0x08A9E0C0u);
    ctx.set_gpr(4, ctx.gpr[2] + 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0187_entry, 187u, 455u, 0x08AF1C18u>(ctx, &aot_mem) && ctx.pc == 0x08A9E0C0u) goto L_08A9E0C0;
    return;
L_08A9E0C0:
    rt.memory().aot_store8(ctx.gpr[16] + static_cast<std::uint32_t>(15389), static_cast<std::uint8_t>(0u));
    ctx.set_gpr(31, 0x08A9E0CCu);
    rt.memory().aot_store8(ctx.gpr[16] + static_cast<std::uint32_t>(15390), static_cast<std::uint8_t>(0u));
    if (rt.invoke_chained_direct<&recomp_unit_0017_entry, 17u, 191u, 0x08848C84u>(ctx, &aot_mem) && ctx.pc == 0x08A9E0CCu) goto L_08A9E0CC;
    return;
L_08A9E0CC:
    ctx.set_gpr(4, ctx.gpr[2] + 0u);
    ctx.set_gpr(5, 0u + 0u);
    ctx.set_gpr(31, 0x08A9E0DCu);
    ctx.set_gpr(6, 0u + 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0190_entry, 190u, 75u, 0x08AFC55Cu>(ctx, &aot_mem) && ctx.pc == 0x08A9E0DCu) goto L_08A9E0DC;
    return;
L_08A9E0DC:
    ctx.set_gpr(31, 0x08A9E0E4u);
    ctx.set_gpr(4, ctx.gpr[2] + 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0187_entry, 187u, 583u, 0x08AF2474u>(ctx, &aot_mem) && ctx.pc == 0x08A9E0E4u) goto L_08A9E0E4;
    return;
L_08A9E0E4:
    ctx.set_gpr(31, 0x08A9E0ECu);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0017_entry, 17u, 191u, 0x08848C84u>(ctx, &aot_mem) && ctx.pc == 0x08A9E0ECu) goto L_08A9E0EC;
    return;
L_08A9E0EC:
    ctx.set_gpr(4, ctx.gpr[2] + 0u);
    ctx.set_gpr(31, 0x08A9E0F8u);
    ctx.set_gpr(5, 0u + 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0189_entry, 189u, 769u, 0x08AFBC7Cu>(ctx, &aot_mem) && ctx.pc == 0x08A9E0F8u) goto L_08A9E0F8;
    return;
L_08A9E0F8:
    ctx.set_gpr(2, 0u + static_cast<std::uint32_t>(1));
    rt.memory().aot_store8(ctx.gpr[16] + static_cast<std::uint32_t>(15762), static_cast<std::uint8_t>(ctx.gpr[2]));
    ctx.set_gpr(4, rt.memory().aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(0)));
    ctx.set_gpr(31, 0x08A9E10Cu);
    ctx.set_gpr(5, 0u + 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0164_entry, 164u, 155u, 0x08A94BC8u>(ctx, &aot_mem) && ctx.pc == 0x08A9E10Cu) goto L_08A9E10C;
    return;
L_08A9E10C:
    rt.memory().aot_store32(ctx.gpr[16] + static_cast<std::uint32_t>(15368), 0u);
    ctx.set_gpr(2, 0u + static_cast<std::uint32_t>(1));
    rt.memory().aot_store32(ctx.gpr[16] + static_cast<std::uint32_t>(15400), ctx.gpr[2]);
    ctx.set_gpr(3, 2246u << 16u);
    rt.memory().aot_store8(ctx.gpr[16] + static_cast<std::uint32_t>(15763), static_cast<std::uint8_t>(ctx.gpr[2]));
    { const bool branch_taken = 0u == 0u;
    rt.memory().aot_store32(ctx.gpr[3] + static_cast<std::uint32_t>(-19620), 0u);
      if (branch_taken) {
          goto L_08A9E12C;
      }
      goto L_08A9E128;
    }
L_08A9E128:
    ctx.set_gpr(2, 0u + 0u);
    goto L_08A9E12C;
L_08A9E12C:
    ctx.set_gpr(31, rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(12)));
    ctx.set_gpr(16, rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(8)));
    jump_target = ctx.gpr[31];
    ctx.set_gpr(29, ctx.gpr[29] + static_cast<std::uint32_t>(16));
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_08A9E13C:
    ctx.set_gpr(29, ctx.gpr[29] + static_cast<std::uint32_t>(-16));
    ctx.set_gpr(2, 2246u << 16u);
    ctx.set_gpr(3, rt.memory().aot_load32(ctx.gpr[2] + static_cast<std::uint32_t>(-19616)));
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(12), ctx.gpr[31]);
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(8), ctx.gpr[16]);
    ctx.set_gpr(2, 0u + static_cast<std::uint32_t>(3));
    { const bool branch_taken = ctx.gpr[3] == ctx.gpr[2];
    ctx.set_gpr(16, ctx.gpr[4] + 0u);
      if (branch_taken) {
          goto L_08A9E384;
      }
      goto L_08A9E15C;
    }
L_08A9E15C:
    ctx.set_gpr(2, 0u + static_cast<std::uint32_t>(2));
    { const bool branch_taken = ctx.gpr[3] == ctx.gpr[2];
    // nop
      if (branch_taken) {
          goto L_08A9E2DC;
      }
      goto L_08A9E168;
    }
L_08A9E168:
    ctx.set_gpr(2, 0u + static_cast<std::uint32_t>(1));
    { const bool branch_taken = ctx.gpr[3] == ctx.gpr[2];
    // nop
      if (branch_taken) {
          goto L_08A9E2B0;
      }
      goto L_08A9E174;
    }
L_08A9E174:
    { const bool branch_taken = ctx.gpr[3] == 0u;
    // nop
      if (branch_taken) {
          goto L_08A9E184;
      }
      goto L_08A9E17C;
    }
L_08A9E17C:
    { const bool branch_taken = 0u == 0u;
    ctx.set_gpr(2, 0u + 0u);
      if (branch_taken) {
          goto L_08A9E418;
      }
      goto L_08A9E184;
    }
L_08A9E184:
    ctx.set_gpr(31, 0x08A9E18Cu);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0017_entry, 17u, 182u, 0x08848C18u>(ctx, &aot_mem) && ctx.pc == 0x08A9E18Cu) goto L_08A9E18C;
    return;
L_08A9E18C:
    ctx.set_gpr(31, 0x08A9E194u);
    ctx.set_gpr(4, ctx.gpr[2] + 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0023_entry, 23u, 526u, 0x08861EE8u>(ctx, &aot_mem) && ctx.pc == 0x08A9E194u) goto L_08A9E194;
    return;
L_08A9E194:
    ctx.set_gpr(5, 0u + static_cast<std::uint32_t>(2));
    ctx.set_gpr(4, ctx.gpr[2] + 0u);
    ctx.set_gpr(6, 0u + static_cast<std::uint32_t>(18));
    ctx.set_gpr(31, 0x08A9E1A8u);
    ctx.set_gpr(7, ctx.gpr[5] + 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0158_entry, 158u, 1029u, 0x08A7F850u>(ctx, &aot_mem) && ctx.pc == 0x08A9E1A8u) goto L_08A9E1A8;
    return;
L_08A9E1A8:
    ctx.set_gpr(31, 0x08A9E1B0u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0017_entry, 17u, 191u, 0x08848C84u>(ctx, &aot_mem) && ctx.pc == 0x08A9E1B0u) goto L_08A9E1B0;
    return;
L_08A9E1B0:
    ctx.set_gpr(4, ctx.gpr[2] + 0u);
    ctx.set_gpr(2, 49024u << 16u);
    ctx.fpr[12] = std::bit_cast<float>(ctx.gpr[2]);
    ctx.set_gpr(8, 0u + static_cast<std::uint32_t>(1));
    ctx.set_gpr(5, 0u + 0u);
    ctx.set_fpr_bits(13, ctx.fpr_bits(12));
    ctx.set_gpr(6, 0u + static_cast<std::uint32_t>(250));
    ctx.set_gpr(7, 0u + static_cast<std::uint32_t>(150));
    ctx.set_gpr(9, 0u + static_cast<std::uint32_t>(3));
    ctx.set_gpr(10, 0u + 0u);
    ctx.set_gpr(31, 0x08A9E1E0u);
    ctx.set_gpr(11, ctx.gpr[8] + 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0189_entry, 189u, 748u, 0x08AFBA10u>(ctx, &aot_mem) && ctx.pc == 0x08A9E1E0u) goto L_08A9E1E0;
    return;
L_08A9E1E0:
    ctx.set_gpr(31, 0x08A9E1E8u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0017_entry, 17u, 191u, 0x08848C84u>(ctx, &aot_mem) && ctx.pc == 0x08A9E1E8u) goto L_08A9E1E8;
    return;
L_08A9E1E8:
    ctx.set_gpr(4, ctx.gpr[2] + 0u);
    ctx.set_gpr(5, 0u + 0u);
    ctx.set_gpr(31, 0x08A9E1F8u);
    ctx.set_gpr(6, 0u + 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0190_entry, 190u, 75u, 0x08AFC55Cu>(ctx, &aot_mem) && ctx.pc == 0x08A9E1F8u) goto L_08A9E1F8;
    return;
L_08A9E1F8:
    ctx.set_gpr(4, ctx.gpr[2] + 0u);
    ctx.set_gpr(31, 0x08A9E204u);
    ctx.set_gpr(5, 0u + static_cast<std::uint32_t>(1));
    if (rt.invoke_chained_direct<&recomp_unit_0024_entry, 24u, 825u, 0x0886697Cu>(ctx, &aot_mem) && ctx.pc == 0x08A9E204u) goto L_08A9E204;
    return;
L_08A9E204:
    ctx.set_gpr(31, 0x08A9E20Cu);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0017_entry, 17u, 191u, 0x08848C84u>(ctx, &aot_mem) && ctx.pc == 0x08A9E20Cu) goto L_08A9E20C;
    return;
L_08A9E20C:
    ctx.set_gpr(4, ctx.gpr[2] + 0u);
    ctx.set_gpr(5, 0u + 0u);
    ctx.set_gpr(31, 0x08A9E21Cu);
    ctx.set_gpr(6, 0u + 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0190_entry, 190u, 75u, 0x08AFC55Cu>(ctx, &aot_mem) && ctx.pc == 0x08A9E21Cu) goto L_08A9E21C;
    return;
L_08A9E21C:
    ctx.set_gpr(4, ctx.gpr[2] + 0u);
    ctx.set_gpr(2, 16256u << 16u);
    ctx.fpr[12] = std::bit_cast<float>(ctx.gpr[2]);
    ctx.set_gpr(5, 2230u << 16u);
    ctx.set_gpr(5, ctx.gpr[5] + static_cast<std::uint32_t>(19792));
    ctx.set_gpr(6, 0u + 0u);
    ctx.set_gpr(31, 0x08A9E23Cu);
    ctx.set_fpr_bits(13, ctx.fpr_bits(12));
    if (rt.invoke_chained_direct<&recomp_unit_0187_entry, 187u, 635u, 0x08AF2840u>(ctx, &aot_mem) && ctx.pc == 0x08A9E23Cu) goto L_08A9E23C;
    return;
L_08A9E23C:
    ctx.set_gpr(31, 0x08A9E244u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0017_entry, 17u, 191u, 0x08848C84u>(ctx, &aot_mem) && ctx.pc == 0x08A9E244u) goto L_08A9E244;
    return;
L_08A9E244:
    ctx.set_gpr(4, ctx.gpr[2] + 0u);
    ctx.set_gpr(5, 0u + 0u);
    ctx.set_gpr(31, 0x08A9E254u);
    ctx.set_gpr(6, 0u + 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0190_entry, 190u, 75u, 0x08AFC55Cu>(ctx, &aot_mem) && ctx.pc == 0x08A9E254u) goto L_08A9E254;
    return;
L_08A9E254:
    ctx.set_gpr(4, ctx.gpr[2] + 0u);
    ctx.set_gpr(2, 16256u << 16u);
    ctx.fpr[12] = std::bit_cast<float>(ctx.gpr[2]);
    ctx.set_gpr(5, 2230u << 16u);
    ctx.set_gpr(5, ctx.gpr[5] + static_cast<std::uint32_t>(19816));
    ctx.set_gpr(6, 0u + 0u);
    ctx.set_gpr(31, 0x08A9E274u);
    ctx.set_fpr_bits(13, ctx.fpr_bits(12));
    if (rt.invoke_chained_direct<&recomp_unit_0187_entry, 187u, 635u, 0x08AF2840u>(ctx, &aot_mem) && ctx.pc == 0x08A9E274u) goto L_08A9E274;
    return;
L_08A9E274:
    ctx.set_gpr(31, 0x08A9E27Cu);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0017_entry, 17u, 191u, 0x08848C84u>(ctx, &aot_mem) && ctx.pc == 0x08A9E27Cu) goto L_08A9E27C;
    return;
L_08A9E27C:
    ctx.set_gpr(4, ctx.gpr[2] + 0u);
    ctx.set_gpr(31, 0x08A9E288u);
    ctx.set_gpr(5, 0u + 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0189_entry, 189u, 781u, 0x08AFBD40u>(ctx, &aot_mem) && ctx.pc == 0x08A9E288u) goto L_08A9E288;
    return;
L_08A9E288:
    ctx.set_gpr(31, 0x08A9E290u);
    rt.memory().aot_store32(ctx.gpr[16] + static_cast<std::uint32_t>(15340), 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0017_entry, 17u, 192u, 0x08848C90u>(ctx, &aot_mem) && ctx.pc == 0x08A9E290u) goto L_08A9E290;
    return;
L_08A9E290:
    ctx.set_gpr(31, 0x08A9E298u);
    ctx.set_gpr(4, ctx.gpr[2] + 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0191_entry, 191u, 442u, 0x08B02224u>(ctx, &aot_mem) && ctx.pc == 0x08A9E298u) goto L_08A9E298;
    return;
L_08A9E298:
    ctx.set_gpr(2, 2246u << 16u);
    ctx.set_gpr(3, rt.memory().aot_load32(ctx.gpr[2] + static_cast<std::uint32_t>(-19616)));
    ctx.set_gpr(2, 2246u << 16u);
    ctx.set_gpr(3, ctx.gpr[3] + static_cast<std::uint32_t>(1));
    { const bool branch_taken = 0u == 0u;
    rt.memory().aot_store32(ctx.gpr[2] + static_cast<std::uint32_t>(-19616), ctx.gpr[3]);
      if (branch_taken) {
          goto L_08A9E414;
      }
      goto L_08A9E2B0;
    }
L_08A9E2B0:
    ctx.set_gpr(31, 0x08A9E2B8u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0017_entry, 17u, 191u, 0x08848C84u>(ctx, &aot_mem) && ctx.pc == 0x08A9E2B8u) goto L_08A9E2B8;
    return;
L_08A9E2B8:
    ctx.set_gpr(4, ctx.gpr[2] + 0u);
    ctx.set_gpr(31, 0x08A9E2C4u);
    ctx.set_gpr(5, 0u + 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0190_entry, 190u, 64u, 0x08AFC4A4u>(ctx, &aot_mem) && ctx.pc == 0x08A9E2C4u) goto L_08A9E2C4;
    return;
L_08A9E2C4:
    { const bool branch_taken = ctx.gpr[2] != 0u;
    // nop
      if (branch_taken) {
          goto L_08A9E414;
      }
      goto L_08A9E2CC;
    }
L_08A9E2CC:
    ctx.set_gpr(3, 0u + static_cast<std::uint32_t>(2));
    ctx.set_gpr(2, 2246u << 16u);
    { const bool branch_taken = 0u == 0u;
    rt.memory().aot_store32(ctx.gpr[2] + static_cast<std::uint32_t>(-19616), ctx.gpr[3]);
      if (branch_taken) {
          goto L_08A9E414;
      }
      goto L_08A9E2DC;
    }
L_08A9E2DC:
    ctx.set_gpr(31, 0x08A9E2E4u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0017_entry, 17u, 191u, 0x08848C84u>(ctx, &aot_mem) && ctx.pc == 0x08A9E2E4u) goto L_08A9E2E4;
    return;
L_08A9E2E4:
    ctx.set_gpr(4, ctx.gpr[2] + 0u);
    ctx.set_gpr(31, 0x08A9E2F0u);
    ctx.set_gpr(5, 0u + 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0190_entry, 190u, 62u, 0x08AFC464u>(ctx, &aot_mem) && ctx.pc == 0x08A9E2F0u) goto L_08A9E2F0;
    return;
L_08A9E2F0:
    { const bool branch_taken = ctx.gpr[2] == 0u;
    // nop
      if (branch_taken) {
          goto L_08A9E414;
      }
      goto L_08A9E2F8;
    }
L_08A9E2F8:
    ctx.set_gpr(31, 0x08A9E300u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0017_entry, 17u, 191u, 0x08848C84u>(ctx, &aot_mem) && ctx.pc == 0x08A9E300u) goto L_08A9E300;
    return;
L_08A9E300:
    ctx.set_gpr(4, ctx.gpr[2] + 0u);
    ctx.set_gpr(31, 0x08A9E30Cu);
    ctx.set_gpr(5, 0u + 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0190_entry, 190u, 62u, 0x08AFC464u>(ctx, &aot_mem) && ctx.pc == 0x08A9E30Cu) goto L_08A9E30C;
    return;
L_08A9E30C:
    ctx.set_gpr(3, 0u + static_cast<std::uint32_t>(2));
    { const bool branch_taken = ctx.gpr[2] == ctx.gpr[3];
    rt.memory().aot_store32(ctx.gpr[16] + static_cast<std::uint32_t>(15340), ctx.gpr[2]);
      if (branch_taken) {
          goto L_08A9E358;
      }
      goto L_08A9E318;
    }
L_08A9E318:
    ctx.set_gpr(3, 0u + static_cast<std::uint32_t>(1));
    { const bool branch_taken = ctx.gpr[2] == ctx.gpr[3];
    // nop
      if (branch_taken) {
          goto L_08A9E32C;
      }
      goto L_08A9E324;
    }
L_08A9E324:
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_08A9E414;
      }
      goto L_08A9E32C;
    }
L_08A9E32C:
    ctx.set_gpr(31, 0x08A9E334u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0017_entry, 17u, 191u, 0x08848C84u>(ctx, &aot_mem) && ctx.pc == 0x08A9E334u) goto L_08A9E334;
    return;
L_08A9E334:
    ctx.set_gpr(4, ctx.gpr[2] + 0u);
    ctx.set_gpr(31, 0x08A9E340u);
    ctx.set_gpr(5, 0u + 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0189_entry, 189u, 800u, 0x08AFBE48u>(ctx, &aot_mem) && ctx.pc == 0x08A9E340u) goto L_08A9E340;
    return;
L_08A9E340:
    ctx.set_gpr(2, 2246u << 16u);
    ctx.set_gpr(3, rt.memory().aot_load32(ctx.gpr[2] + static_cast<std::uint32_t>(-19616)));
    ctx.set_gpr(2, 2246u << 16u);
    ctx.set_gpr(3, ctx.gpr[3] + static_cast<std::uint32_t>(1));
    { const bool branch_taken = 0u == 0u;
    rt.memory().aot_store32(ctx.gpr[2] + static_cast<std::uint32_t>(-19616), ctx.gpr[3]);
      if (branch_taken) {
          goto L_08A9E414;
      }
      goto L_08A9E358;
    }
L_08A9E358:
    ctx.set_gpr(31, 0x08A9E360u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0017_entry, 17u, 191u, 0x08848C84u>(ctx, &aot_mem) && ctx.pc == 0x08A9E360u) goto L_08A9E360;
    return;
L_08A9E360:
    ctx.set_gpr(4, ctx.gpr[2] + 0u);
    ctx.set_gpr(31, 0x08A9E36Cu);
    ctx.set_gpr(5, 0u + 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0189_entry, 189u, 800u, 0x08AFBE48u>(ctx, &aot_mem) && ctx.pc == 0x08A9E36Cu) goto L_08A9E36C;
    return;
L_08A9E36C:
    ctx.set_gpr(2, 2246u << 16u);
    ctx.set_gpr(3, rt.memory().aot_load32(ctx.gpr[2] + static_cast<std::uint32_t>(-19616)));
    ctx.set_gpr(2, 2246u << 16u);
    ctx.set_gpr(3, ctx.gpr[3] + static_cast<std::uint32_t>(1));
    { const bool branch_taken = 0u == 0u;
    rt.memory().aot_store32(ctx.gpr[2] + static_cast<std::uint32_t>(-19616), ctx.gpr[3]);
      if (branch_taken) {
          goto L_08A9E414;
      }
      goto L_08A9E384;
    }
L_08A9E384:
    ctx.set_gpr(31, 0x08A9E38Cu);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0017_entry, 17u, 191u, 0x08848C84u>(ctx, &aot_mem) && ctx.pc == 0x08A9E38Cu) goto L_08A9E38C;
    return;
L_08A9E38C:
    ctx.set_gpr(4, ctx.gpr[2] + 0u);
    ctx.set_gpr(31, 0x08A9E398u);
    ctx.set_gpr(5, 0u + 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0190_entry, 190u, 64u, 0x08AFC4A4u>(ctx, &aot_mem) && ctx.pc == 0x08A9E398u) goto L_08A9E398;
    return;
L_08A9E398:
    { const bool branch_taken = ctx.gpr[2] != 0u;
    // nop
      if (branch_taken) {
          goto L_08A9E414;
      }
      goto L_08A9E3A0;
    }
L_08A9E3A0:
    ctx.set_gpr(31, 0x08A9E3A8u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0017_entry, 17u, 189u, 0x08848C6Cu>(ctx, &aot_mem) && ctx.pc == 0x08A9E3A8u) goto L_08A9E3A8;
    return;
L_08A9E3A8:
    ctx.set_gpr(31, 0x08A9E3B0u);
    ctx.set_gpr(4, ctx.gpr[2] + 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0187_entry, 187u, 208u, 0x08AF0DE8u>(ctx, &aot_mem) && ctx.pc == 0x08A9E3B0u) goto L_08A9E3B0;
    return;
L_08A9E3B0:
    ctx.set_gpr(31, 0x08A9E3B8u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0017_entry, 17u, 190u, 0x08848C78u>(ctx, &aot_mem) && ctx.pc == 0x08A9E3B8u) goto L_08A9E3B8;
    return;
L_08A9E3B8:
    ctx.set_gpr(31, 0x08A9E3C0u);
    ctx.set_gpr(4, ctx.gpr[2] + 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0187_entry, 187u, 455u, 0x08AF1C18u>(ctx, &aot_mem) && ctx.pc == 0x08A9E3C0u) goto L_08A9E3C0;
    return;
L_08A9E3C0:
    rt.memory().aot_store8(ctx.gpr[16] + static_cast<std::uint32_t>(15389), static_cast<std::uint8_t>(0u));
    ctx.set_gpr(31, 0x08A9E3CCu);
    rt.memory().aot_store8(ctx.gpr[16] + static_cast<std::uint32_t>(15390), static_cast<std::uint8_t>(0u));
    if (rt.invoke_chained_direct<&recomp_unit_0017_entry, 17u, 191u, 0x08848C84u>(ctx, &aot_mem) && ctx.pc == 0x08A9E3CCu) goto L_08A9E3CC;
    return;
L_08A9E3CC:
    ctx.set_gpr(4, ctx.gpr[2] + 0u);
    ctx.set_gpr(5, 0u + 0u);
    ctx.set_gpr(31, 0x08A9E3DCu);
    ctx.set_gpr(6, 0u + 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0190_entry, 190u, 75u, 0x08AFC55Cu>(ctx, &aot_mem) && ctx.pc == 0x08A9E3DCu) goto L_08A9E3DC;
    return;
L_08A9E3DC:
    ctx.set_gpr(31, 0x08A9E3E4u);
    ctx.set_gpr(4, ctx.gpr[2] + 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0187_entry, 187u, 583u, 0x08AF2474u>(ctx, &aot_mem) && ctx.pc == 0x08A9E3E4u) goto L_08A9E3E4;
    return;
L_08A9E3E4:
    ctx.set_gpr(31, 0x08A9E3ECu);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0017_entry, 17u, 191u, 0x08848C84u>(ctx, &aot_mem) && ctx.pc == 0x08A9E3ECu) goto L_08A9E3EC;
    return;
L_08A9E3EC:
    ctx.set_gpr(4, ctx.gpr[2] + 0u);
    ctx.set_gpr(31, 0x08A9E3F8u);
    ctx.set_gpr(5, 0u + 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0189_entry, 189u, 769u, 0x08AFBC7Cu>(ctx, &aot_mem) && ctx.pc == 0x08A9E3F8u) goto L_08A9E3F8;
    return;
L_08A9E3F8:
    ctx.set_gpr(4, rt.memory().aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(0)));
    ctx.set_gpr(31, 0x08A9E404u);
    ctx.set_gpr(5, 0u + 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0164_entry, 164u, 155u, 0x08A94BC8u>(ctx, &aot_mem) && ctx.pc == 0x08A9E404u) goto L_08A9E404;
    return;
L_08A9E404:
    ctx.set_gpr(2, 2246u << 16u);
    rt.memory().aot_store32(ctx.gpr[2] + static_cast<std::uint32_t>(-19616), 0u);
    { const bool branch_taken = 0u == 0u;
    ctx.set_gpr(2, 0u + static_cast<std::uint32_t>(1));
      if (branch_taken) {
          goto L_08A9E418;
      }
      goto L_08A9E414;
    }
L_08A9E414:
    ctx.set_gpr(2, 0u + 0u);
    goto L_08A9E418;
L_08A9E418:
    ctx.set_gpr(31, rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(12)));
    ctx.set_gpr(16, rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(8)));
    jump_target = ctx.gpr[31];
    ctx.set_gpr(29, ctx.gpr[29] + static_cast<std::uint32_t>(16));
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_08A9E428:
    ctx.set_gpr(29, ctx.gpr[29] + static_cast<std::uint32_t>(-32));
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(28), ctx.gpr[31]);
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(24), ctx.gpr[19]);
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(20), ctx.gpr[18]);
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(16), ctx.gpr[17]);
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(12), ctx.gpr[16]);
    ctx.set_gpr(18, ctx.gpr[5] + 0u);
    ctx.set_gpr(5, rt.memory().aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(15412)));
    ctx.set_gpr(3, 0u + static_cast<std::uint32_t>(2));
    ctx.set_gpr(17, ctx.gpr[6] + 0u);
    ctx.set_gpr(16, ctx.gpr[7] + 0u);
    { const bool branch_taken = ctx.gpr[5] == ctx.gpr[3];
    ctx.set_gpr(19, ctx.gpr[4] + 0u);
      if (branch_taken) {
          goto L_08A9E6F4;
      }
      goto L_08A9E45C;
    }
L_08A9E45C:
    ctx.set_gpr(3, 0u + static_cast<std::uint32_t>(1));
    { const bool branch_taken = ctx.gpr[5] == ctx.gpr[3];
    // nop
      if (branch_taken) {
          goto L_08A9E63C;
      }
      goto L_08A9E468;
    }
L_08A9E468:
    if (ctx.gpr[5] == 0u) {
    rt.memory().aot_store32(ctx.gpr[19] + static_cast<std::uint32_t>(15416), ctx.gpr[3]);
        goto L_08A9E478;
    }
    goto L_08A9E470;
L_08A9E470:
    { const bool branch_taken = 0u == 0u;
    ctx.set_gpr(31, rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(28)));
      if (branch_taken) {
          goto L_08A9E764;
      }
      goto L_08A9E478;
    }
L_08A9E478:
    rt.memory().aot_store32(ctx.gpr[19] + static_cast<std::uint32_t>(15368), 0u);
    rt.memory().aot_store32(ctx.gpr[19] + static_cast<std::uint32_t>(15400), ctx.gpr[3]);
    ctx.set_gpr(2, rt.memory().aot_load8(ctx.gpr[19] + static_cast<std::uint32_t>(15763)));
    if (ctx.gpr[2] != 0u) {
    ctx.set_gpr(2, rt.memory().aot_load8(ctx.gpr[19] + static_cast<std::uint32_t>(15750)));
        goto L_08A9E498;
    }
    goto L_08A9E48C;
L_08A9E48C:
    rt.memory().aot_store32(ctx.gpr[19] + static_cast<std::uint32_t>(15392), 0u);
    rt.memory().aot_store32(ctx.gpr[19] + static_cast<std::uint32_t>(15396), 0u);
    ctx.set_gpr(2, rt.memory().aot_load8(ctx.gpr[19] + static_cast<std::uint32_t>(15750)));
    goto L_08A9E498;
L_08A9E498:
    if (ctx.gpr[2] == 0u) {
    rt.memory().aot_store8(ctx.gpr[19] + static_cast<std::uint32_t>(15763), static_cast<std::uint8_t>(0u));
        goto L_08A9E538;
    }
    goto L_08A9E4A0;
L_08A9E4A0:
    ctx.set_gpr(2, rt.memory().aot_load8(ctx.gpr[19] + static_cast<std::uint32_t>(15763)));
    { const bool branch_taken = ctx.gpr[2] != 0u;
    // nop
      if (branch_taken) {
          goto L_08A9E534;
      }
      goto L_08A9E4AC;
    }
L_08A9E4AC:
    ctx.set_gpr(4, ctx.gpr[19] + 0u);
    ctx.set_gpr(31, 0x08A9E4B8u);
    ctx.set_gpr(5, 0u + static_cast<std::uint32_t>(1));
    if (rt.invoke_chained_direct<&recomp_unit_0160_entry, 160u, 449u, 0x08A85954u>(ctx, &aot_mem) && ctx.pc == 0x08A9E4B8u) goto L_08A9E4B8;
    return;
L_08A9E4B8:
    rt.memory().aot_store32(ctx.gpr[19] + static_cast<std::uint32_t>(15368), ctx.gpr[2]);
    ctx.set_gpr(3, rt.memory().aot_load32(ctx.gpr[19] + static_cast<std::uint32_t>(15404)));
    ctx.set_gpr(2, 0u + static_cast<std::uint32_t>(1));
    rt.memory().aot_store32(ctx.gpr[19] + static_cast<std::uint32_t>(15400), ctx.gpr[3]);
    rt.memory().aot_store32(ctx.gpr[19] + static_cast<std::uint32_t>(15404), ctx.gpr[2]);
    ctx.set_gpr(2, rt.memory().aot_load32(ctx.gpr[19] + static_cast<std::uint32_t>(15368)));
    { const bool branch_taken = static_cast<std::int32_t>(ctx.gpr[2]) >= 0;
    ctx.set_gpr(5, ctx.gpr[2] & 3u);
      if (branch_taken) {
          goto L_08A9E4E4;
      }
      goto L_08A9E4D8;
    }
L_08A9E4D8:
    { const bool branch_taken = ctx.gpr[5] == 0u;
    // nop
      if (branch_taken) {
          goto L_08A9E4E4;
      }
      goto L_08A9E4E0;
    }
L_08A9E4E0:
    ctx.set_gpr(5, ctx.gpr[5] + static_cast<std::uint32_t>(-4));
    goto L_08A9E4E4;
L_08A9E4E4:
    if (ctx.gpr[5] != 0u) {
    ctx.set_gpr(4, 0u + static_cast<std::uint32_t>(1));
        goto L_08A9E4F8;
    }
    goto L_08A9E4EC;
L_08A9E4EC:
    rt.memory().aot_store32(ctx.gpr[19] + static_cast<std::uint32_t>(15392), 0u);
    { const bool branch_taken = 0u == 0u;
    rt.memory().aot_store32(ctx.gpr[19] + static_cast<std::uint32_t>(15396), 0u);
      if (branch_taken) {
          goto L_08A9E530;
      }
      goto L_08A9E4F8;
    }
L_08A9E4F8:
    if (ctx.gpr[5] != ctx.gpr[4]) {
    ctx.set_gpr(3, 0u + static_cast<std::uint32_t>(2));
        goto L_08A9E50C;
    }
    goto L_08A9E500;
L_08A9E500:
    rt.memory().aot_store32(ctx.gpr[19] + static_cast<std::uint32_t>(15392), ctx.gpr[4]);
    { const bool branch_taken = 0u == 0u;
    rt.memory().aot_store32(ctx.gpr[19] + static_cast<std::uint32_t>(15396), 0u);
      if (branch_taken) {
          goto L_08A9E530;
      }
      goto L_08A9E50C;
    }
L_08A9E50C:
    if (ctx.gpr[5] != ctx.gpr[3]) {
    ctx.set_gpr(2, 0u + static_cast<std::uint32_t>(3));
        goto L_08A9E520;
    }
    goto L_08A9E514;
L_08A9E514:
    rt.memory().aot_store32(ctx.gpr[19] + static_cast<std::uint32_t>(15392), 0u);
    { const bool branch_taken = 0u == 0u;
    rt.memory().aot_store32(ctx.gpr[19] + static_cast<std::uint32_t>(15396), ctx.gpr[3]);
      if (branch_taken) {
          goto L_08A9E530;
      }
      goto L_08A9E520;
    }
L_08A9E520:
    if (ctx.gpr[5] != ctx.gpr[2]) {
    rt.memory().aot_store8(ctx.gpr[19] + static_cast<std::uint32_t>(15750), static_cast<std::uint8_t>(0u));
        goto L_08A9E534;
    }
    goto L_08A9E528;
L_08A9E528:
    rt.memory().aot_store32(ctx.gpr[19] + static_cast<std::uint32_t>(15392), ctx.gpr[4]);
    rt.memory().aot_store32(ctx.gpr[19] + static_cast<std::uint32_t>(15396), ctx.gpr[3]);
    goto L_08A9E530;
L_08A9E530:
    rt.memory().aot_store8(ctx.gpr[19] + static_cast<std::uint32_t>(15750), static_cast<std::uint8_t>(0u));
    goto L_08A9E534;
L_08A9E534:
    rt.memory().aot_store8(ctx.gpr[19] + static_cast<std::uint32_t>(15763), static_cast<std::uint8_t>(0u));
    goto L_08A9E538;
L_08A9E538:
    ctx.set_gpr(4, rt.memory().aot_load32(ctx.gpr[19] + static_cast<std::uint32_t>(0)));
    ctx.set_gpr(31, 0x08A9E544u);
    ctx.set_gpr(5, 0u + 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0164_entry, 164u, 108u, 0x08A947BCu>(ctx, &aot_mem) && ctx.pc == 0x08A9E544u) goto L_08A9E544;
    return;
L_08A9E544:
    ctx.set_gpr(31, 0x08A9E54Cu);
    rt.memory().aot_store32(ctx.gpr[19] + static_cast<std::uint32_t>(15420), ctx.gpr[2]);
    if (rt.invoke_chained_direct<&recomp_unit_0017_entry, 17u, 189u, 0x08848C6Cu>(ctx, &aot_mem) && ctx.pc == 0x08A9E54Cu) goto L_08A9E54C;
    return;
L_08A9E54C:
    ctx.set_gpr(4, ctx.gpr[2] + 0u);
    ctx.set_gpr(31, 0x08A9E558u);
    ctx.set_gpr(5, 0u + static_cast<std::uint32_t>(2));
    goto L_08A9D8F4;
L_08A9E558:
    ctx.set_gpr(31, 0x08A9E560u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0017_entry, 17u, 189u, 0x08848C6Cu>(ctx, &aot_mem) && ctx.pc == 0x08A9E560u) goto L_08A9E560;
    return;
L_08A9E560:
    ctx.set_gpr(4, ctx.gpr[2] + 0u);
    ctx.set_gpr(2, 2229u << 16u);
    ctx.set_gpr(31, 0x08A9E570u);
    ctx.set_gpr(5, rt.memory().aot_load32(ctx.gpr[2] + static_cast<std::uint32_t>(32224)));
    if (rt.invoke_chained_direct<&recomp_unit_0187_entry, 187u, 197u, 0x08AF0D70u>(ctx, &aot_mem) && ctx.pc == 0x08A9E570u) goto L_08A9E570;
    return;
L_08A9E570:
    ctx.set_gpr(31, 0x08A9E578u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0017_entry, 17u, 190u, 0x08848C78u>(ctx, &aot_mem) && ctx.pc == 0x08A9E578u) goto L_08A9E578;
    return;
L_08A9E578:
    ctx.set_gpr(4, ctx.gpr[2] + 0u);
    ctx.set_gpr(31, 0x08A9E584u);
    ctx.set_gpr(5, 0u + static_cast<std::uint32_t>(2));
    goto L_08A9D8EC;
L_08A9E584:
    ctx.set_gpr(31, 0x08A9E58Cu);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0017_entry, 17u, 190u, 0x08848C78u>(ctx, &aot_mem) && ctx.pc == 0x08A9E58Cu) goto L_08A9E58C;
    return;
L_08A9E58C:
    ctx.set_gpr(3, rt.memory().aot_load32(ctx.gpr[19] + static_cast<std::uint32_t>(15400)));
    ctx.set_gpr(4, ctx.gpr[2] + 0u);
    ctx.set_gpr(2, 2229u << 16u);
    ctx.set_gpr(2, ctx.gpr[2] + static_cast<std::uint32_t>(32224));
    ctx.set_gpr(3, ctx.gpr[3] << 2u);
    ctx.set_gpr(2, ctx.gpr[2] + ctx.gpr[3]);
    ctx.set_gpr(31, 0x08A9E5ACu);
    ctx.set_gpr(5, rt.memory().aot_load32(ctx.gpr[2] + static_cast<std::uint32_t>(0)));
    if (rt.invoke_chained_direct<&recomp_unit_0187_entry, 187u, 446u, 0x08AF1BACu>(ctx, &aot_mem) && ctx.pc == 0x08A9E5ACu) goto L_08A9E5AC;
    return;
L_08A9E5AC:
    ctx.set_gpr(4, ctx.gpr[19] + 0u);
    ctx.set_gpr(31, 0x08A9E5B8u);
    ctx.set_gpr(5, 0u + static_cast<std::uint32_t>(97));
    goto L_08A9FD20;
L_08A9E5B8:
    ctx.set_gpr(4, ctx.gpr[19] + 0u);
    ctx.set_gpr(31, 0x08A9E5C4u);
    ctx.set_gpr(5, 0u + static_cast<std::uint32_t>(98));
    goto L_08A9FD20;
L_08A9E5C4:
    ctx.set_gpr(31, 0x08A9E5CCu);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0017_entry, 17u, 176u, 0x08848BD0u>(ctx, &aot_mem) && ctx.pc == 0x08A9E5CCu) goto L_08A9E5CC;
    return;
L_08A9E5CC:
    ctx.set_gpr(4, ctx.gpr[2] + 0u);
    ctx.set_gpr(5, 0u + static_cast<std::uint32_t>(15));
    ctx.set_gpr(6, 0u + static_cast<std::uint32_t>(54));
    ctx.set_gpr(31, 0x08A9E5E0u);
    ctx.set_gpr(7, 0u + 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0018_entry, 18u, 69u, 0x0884C47Cu>(ctx, &aot_mem) && ctx.pc == 0x08A9E5E0u) goto L_08A9E5E0;
    return;
L_08A9E5E0:
    ctx.set_gpr(31, 0x08A9E5E8u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0017_entry, 17u, 176u, 0x08848BD0u>(ctx, &aot_mem) && ctx.pc == 0x08A9E5E8u) goto L_08A9E5E8;
    return;
L_08A9E5E8:
    ctx.set_gpr(4, ctx.gpr[2] + 0u);
    ctx.set_gpr(5, 0u + static_cast<std::uint32_t>(15));
    ctx.set_gpr(6, 0u + static_cast<std::uint32_t>(52));
    ctx.set_gpr(31, 0x08A9E5FCu);
    ctx.set_gpr(7, 0u + 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0018_entry, 18u, 69u, 0x0884C47Cu>(ctx, &aot_mem) && ctx.pc == 0x08A9E5FCu) goto L_08A9E5FC;
    return;
L_08A9E5FC:
    ctx.set_gpr(31, 0x08A9E604u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0017_entry, 17u, 176u, 0x08848BD0u>(ctx, &aot_mem) && ctx.pc == 0x08A9E604u) goto L_08A9E604;
    return;
L_08A9E604:
    ctx.set_gpr(4, ctx.gpr[2] + 0u);
    ctx.set_gpr(5, 0u + static_cast<std::uint32_t>(15));
    ctx.set_gpr(6, 0u + static_cast<std::uint32_t>(53));
    ctx.set_gpr(31, 0x08A9E618u);
    ctx.set_gpr(7, 0u + 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0018_entry, 18u, 69u, 0x0884C47Cu>(ctx, &aot_mem) && ctx.pc == 0x08A9E618u) goto L_08A9E618;
    return;
L_08A9E618:
    ctx.set_gpr(31, 0x08A9E620u);
    ctx.set_gpr(4, rt.memory().aot_load32(ctx.gpr[19] + static_cast<std::uint32_t>(0)));
    if (rt.invoke_chained_direct<&recomp_unit_0164_entry, 164u, 38u, 0x08A94354u>(ctx, &aot_mem) && ctx.pc == 0x08A9E620u) goto L_08A9E620;
    return;
L_08A9E620:
    ctx.set_gpr(4, ctx.gpr[19] + 0u);
    ctx.set_gpr(31, 0x08A9E62Cu);
    ctx.set_gpr(5, 0u + 0u);
    goto L_08A9FDB0;
L_08A9E62C:
    ctx.set_gpr(3, rt.memory().aot_load32(ctx.gpr[19] + static_cast<std::uint32_t>(15412)));
    ctx.set_gpr(3, ctx.gpr[3] + static_cast<std::uint32_t>(1));
    { const bool branch_taken = 0u == 0u;
    rt.memory().aot_store32(ctx.gpr[19] + static_cast<std::uint32_t>(15412), ctx.gpr[3]);
      if (branch_taken) {
          goto L_08A9E760;
      }
      goto L_08A9E63C;
    }
L_08A9E63C:
    ctx.set_gpr(31, 0x08A9E644u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0017_entry, 17u, 176u, 0x08848BD0u>(ctx, &aot_mem) && ctx.pc == 0x08A9E644u) goto L_08A9E644;
    return;
L_08A9E644:
    ctx.set_gpr(4, ctx.gpr[2] + 0u);
    ctx.set_gpr(5, 0u + static_cast<std::uint32_t>(15));
    ctx.set_gpr(6, 0u + static_cast<std::uint32_t>(9));
    ctx.set_gpr(31, 0x08A9E658u);
    ctx.set_gpr(7, 0u + static_cast<std::uint32_t>(1));
    if (rt.invoke_chained_direct<&recomp_unit_0018_entry, 18u, 69u, 0x0884C47Cu>(ctx, &aot_mem) && ctx.pc == 0x08A9E658u) goto L_08A9E658;
    return;
L_08A9E658:
    ctx.set_gpr(31, 0x08A9E660u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0017_entry, 17u, 176u, 0x08848BD0u>(ctx, &aot_mem) && ctx.pc == 0x08A9E660u) goto L_08A9E660;
    return;
L_08A9E660:
    ctx.set_gpr(4, ctx.gpr[2] + 0u);
    ctx.set_gpr(5, 0u + static_cast<std::uint32_t>(15));
    ctx.set_gpr(6, 0u + static_cast<std::uint32_t>(9));
    ctx.set_gpr(31, 0x08A9E674u);
    ctx.set_gpr(7, 0u + static_cast<std::uint32_t>(1));
    if (rt.invoke_chained_direct<&recomp_unit_0022_entry, 22u, 708u, 0x0885EB2Cu>(ctx, &aot_mem) && ctx.pc == 0x08A9E674u) goto L_08A9E674;
    return;
L_08A9E674:
    ctx.set_gpr(31, 0x08A9E67Cu);
    ctx.set_gpr(4, ctx.gpr[19] + 0u);
    goto L_08A9E77C;
L_08A9E67C:
    ctx.set_gpr(31, 0x08A9E684u);
    ctx.set_gpr(4, rt.memory().aot_load32(ctx.gpr[19] + static_cast<std::uint32_t>(0)));
    if (rt.invoke_chained_direct<&recomp_unit_0164_entry, 164u, 38u, 0x08A94354u>(ctx, &aot_mem) && ctx.pc == 0x08A9E684u) goto L_08A9E684;
    return;
L_08A9E684:
    ctx.set_gpr(6, ctx.gpr[17] + 0u);
    ctx.set_gpr(7, ctx.gpr[16] + 0u);
    ctx.set_gpr(31, 0x08A9E694u);
    ctx.set_gpr(4, ctx.gpr[19] + 0u);
    goto L_08A9E930;
L_08A9E694:
    if (ctx.gpr[2] == 0u) {
    ctx.set_gpr(4, ctx.gpr[19] + 0u);
        goto L_08A9E6AC;
    }
    goto L_08A9E69C;
L_08A9E69C:
    ctx.set_gpr(2, rt.memory().aot_load32(ctx.gpr[19] + static_cast<std::uint32_t>(15412)));
    ctx.set_gpr(2, ctx.gpr[2] + static_cast<std::uint32_t>(1));
    rt.memory().aot_store32(ctx.gpr[19] + static_cast<std::uint32_t>(15412), ctx.gpr[2]);
    ctx.set_gpr(4, ctx.gpr[19] + 0u);
    goto L_08A9E6AC;
L_08A9E6AC:
    ctx.set_gpr(31, 0x08A9E6B4u);
    // nop
    goto L_08A9E864;
L_08A9E6B4:
    ctx.set_gpr(3, rt.memory().aot_load8(ctx.gpr[19] + static_cast<std::uint32_t>(15390)));
    { const bool branch_taken = ctx.gpr[3] != 0u;
    // nop
      if (branch_taken) {
          goto L_08A9E760;
      }
      goto L_08A9E6C0;
    }
L_08A9E6C0:
    ctx.set_gpr(31, 0x08A9E6C8u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0017_entry, 17u, 190u, 0x08848C78u>(ctx, &aot_mem) && ctx.pc == 0x08A9E6C8u) goto L_08A9E6C8;
    return;
L_08A9E6C8:
    ctx.set_gpr(5, rt.memory().aot_load32(ctx.gpr[19] + static_cast<std::uint32_t>(15400)));
    ctx.set_gpr(3, 2229u << 16u);
    ctx.set_gpr(4, ctx.gpr[2] + 0u);
    ctx.set_gpr(3, ctx.gpr[3] + static_cast<std::uint32_t>(32224));
    ctx.set_gpr(2, ctx.gpr[5] << 2u);
    ctx.set_gpr(2, ctx.gpr[3] + ctx.gpr[2]);
    ctx.set_gpr(31, 0x08A9E6E8u);
    ctx.set_gpr(5, rt.memory().aot_load32(ctx.gpr[2] + static_cast<std::uint32_t>(0)));
    if (rt.invoke_chained_direct<&recomp_unit_0187_entry, 187u, 446u, 0x08AF1BACu>(ctx, &aot_mem) && ctx.pc == 0x08A9E6E8u) goto L_08A9E6E8;
    return;
L_08A9E6E8:
    ctx.set_gpr(3, 0u + static_cast<std::uint32_t>(1));
    { const bool branch_taken = 0u == 0u;
    rt.memory().aot_store8(ctx.gpr[19] + static_cast<std::uint32_t>(15390), static_cast<std::uint8_t>(ctx.gpr[3]));
      if (branch_taken) {
          goto L_08A9E760;
      }
      goto L_08A9E6F4;
    }
L_08A9E6F4:
    ctx.set_gpr(3, rt.memory().aot_load32(ctx.gpr[19] + static_cast<std::uint32_t>(15416)));
    ctx.set_gpr(2, 0u + static_cast<std::uint32_t>(1));
    { const bool branch_taken = ctx.gpr[3] != ctx.gpr[2];
    // nop
      if (branch_taken) {
          goto L_08A9E734;
      }
      goto L_08A9E704;
    }
L_08A9E704:
    ctx.set_gpr(31, 0x08A9E70Cu);
    // nop
    goto L_08A9D8FC;
L_08A9E70C:
    rt.memory().aot_store32(ctx.gpr[19] + static_cast<std::uint32_t>(15412), 0u);
    rt.memory().aot_store32(ctx.gpr[19] + static_cast<std::uint32_t>(15416), 0u);
    ctx.set_gpr(5, rt.memory().aot_load32(ctx.gpr[19] + static_cast<std::uint32_t>(15400)));
    ctx.set_gpr(4, 0u + static_cast<std::uint32_t>(-1));
    ctx.set_gpr(3, 0u + static_cast<std::uint32_t>(1));
    rt.memory().aot_store32(ctx.gpr[19] + static_cast<std::uint32_t>(15404), ctx.gpr[5]);
    rt.memory().aot_store32(ctx.gpr[19] + static_cast<std::uint32_t>(15368), ctx.gpr[4]);
    rt.memory().aot_store8(ctx.gpr[19] + static_cast<std::uint32_t>(15750), static_cast<std::uint8_t>(ctx.gpr[3]));
    { const bool branch_taken = 0u == 0u;
    rt.memory().aot_store32(ctx.gpr[18] + static_cast<std::uint32_t>(0), ctx.gpr[3]);
      if (branch_taken) {
          goto L_08A9E760;
      }
      goto L_08A9E734;
    }
L_08A9E734:
    ctx.set_gpr(31, 0x08A9E73Cu);
    // nop
    goto L_08A9D8FC;
L_08A9E73C:
    rt.memory().aot_store32(ctx.gpr[19] + static_cast<std::uint32_t>(15412), 0u);
    rt.memory().aot_store32(ctx.gpr[19] + static_cast<std::uint32_t>(15416), 0u);
    ctx.set_gpr(2, 0u + static_cast<std::uint32_t>(-1));
    rt.memory().aot_store32(ctx.gpr[19] + static_cast<std::uint32_t>(15368), ctx.gpr[2]);
    ctx.set_gpr(5, rt.memory().aot_load32(ctx.gpr[19] + static_cast<std::uint32_t>(15420)));
    ctx.set_gpr(31, 0x08A9E758u);
    ctx.set_gpr(4, ctx.gpr[19] + 0u);
    goto L_08A9F250;
L_08A9E758:
    ctx.set_gpr(3, 0u + static_cast<std::uint32_t>(-1));
    rt.memory().aot_store32(ctx.gpr[18] + static_cast<std::uint32_t>(0), ctx.gpr[3]);
    goto L_08A9E760;
L_08A9E760:
    ctx.set_gpr(31, rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(28)));
    goto L_08A9E764;
L_08A9E764:
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
L_08A9E77C:
    ctx.set_gpr(29, ctx.gpr[29] + static_cast<std::uint32_t>(-16));
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(12), ctx.gpr[31]);
    ctx.set_gpr(31, 0x08A9E78Cu);
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(8), ctx.gpr[16]);
    if (rt.invoke_chained_direct<&recomp_unit_0017_entry, 17u, 176u, 0x08848BD0u>(ctx, &aot_mem) && ctx.pc == 0x08A9E78Cu) goto L_08A9E78C;
    return;
L_08A9E78C:
    ctx.set_gpr(4, ctx.gpr[2] + 0u);
    ctx.set_gpr(5, 0u + static_cast<std::uint32_t>(15));
    ctx.set_gpr(6, 0u + static_cast<std::uint32_t>(54));
    ctx.set_gpr(31, 0x08A9E7A0u);
    ctx.set_gpr(7, 0u + 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0018_entry, 18u, 69u, 0x0884C47Cu>(ctx, &aot_mem) && ctx.pc == 0x08A9E7A0u) goto L_08A9E7A0;
    return;
L_08A9E7A0:
    ctx.set_gpr(31, 0x08A9E7A8u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0017_entry, 17u, 176u, 0x08848BD0u>(ctx, &aot_mem) && ctx.pc == 0x08A9E7A8u) goto L_08A9E7A8;
    return;
L_08A9E7A8:
    ctx.set_gpr(4, ctx.gpr[2] + 0u);
    ctx.set_gpr(5, 0u + static_cast<std::uint32_t>(15));
    ctx.set_gpr(6, 0u + static_cast<std::uint32_t>(52));
    ctx.set_gpr(31, 0x08A9E7BCu);
    ctx.set_gpr(7, 0u + 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0018_entry, 18u, 69u, 0x0884C47Cu>(ctx, &aot_mem) && ctx.pc == 0x08A9E7BCu) goto L_08A9E7BC;
    return;
L_08A9E7BC:
    ctx.set_gpr(31, 0x08A9E7C4u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0017_entry, 17u, 176u, 0x08848BD0u>(ctx, &aot_mem) && ctx.pc == 0x08A9E7C4u) goto L_08A9E7C4;
    return;
L_08A9E7C4:
    ctx.set_gpr(4, ctx.gpr[2] + 0u);
    ctx.set_gpr(5, 0u + static_cast<std::uint32_t>(15));
    ctx.set_gpr(6, 0u + static_cast<std::uint32_t>(53));
    ctx.set_gpr(31, 0x08A9E7D8u);
    ctx.set_gpr(7, 0u + 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0018_entry, 18u, 69u, 0x0884C47Cu>(ctx, &aot_mem) && ctx.pc == 0x08A9E7D8u) goto L_08A9E7D8;
    return;
L_08A9E7D8:
    ctx.set_gpr(16, 0u + 0u);
    goto L_08A9E7DC;
L_08A9E7DC:
    ctx.set_gpr(31, 0x08A9E7E4u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0017_entry, 17u, 176u, 0x08848BD0u>(ctx, &aot_mem) && ctx.pc == 0x08A9E7E4u) goto L_08A9E7E4;
    return;
L_08A9E7E4:
    ctx.set_gpr(4, ctx.gpr[2] + 0u);
    ctx.set_gpr(6, ctx.gpr[16] + static_cast<std::uint32_t>(81));
    ctx.set_gpr(5, 0u + static_cast<std::uint32_t>(15));
    ctx.set_gpr(31, 0x08A9E7F8u);
    ctx.set_gpr(7, 0u + static_cast<std::uint32_t>(1));
    if (rt.invoke_chained_direct<&recomp_unit_0018_entry, 18u, 69u, 0x0884C47Cu>(ctx, &aot_mem) && ctx.pc == 0x08A9E7F8u) goto L_08A9E7F8;
    return;
L_08A9E7F8:
    ctx.set_gpr(16, ctx.gpr[16] + static_cast<std::uint32_t>(1));
    ctx.set_gpr(2, static_cast<std::int32_t>(ctx.gpr[16]) < 21 ? 1u : 0u);
    { const bool branch_taken = ctx.gpr[2] != 0u;
    // nop
      if (branch_taken) {
          goto L_08A9E7DC;
      }
      goto L_08A9E808;
    }
L_08A9E808:
    ctx.set_gpr(16, 0u + 0u);
    goto L_08A9E80C;
L_08A9E80C:
    ctx.set_gpr(31, 0x08A9E814u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0017_entry, 17u, 176u, 0x08848BD0u>(ctx, &aot_mem) && ctx.pc == 0x08A9E814u) goto L_08A9E814;
    return;
L_08A9E814:
    ctx.set_gpr(4, ctx.gpr[2] + 0u);
    ctx.set_gpr(6, ctx.gpr[16] + static_cast<std::uint32_t>(81));
    ctx.set_gpr(5, 0u + static_cast<std::uint32_t>(15));
    ctx.set_gpr(31, 0x08A9E828u);
    ctx.set_gpr(7, 0u + 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0018_entry, 18u, 69u, 0x0884C47Cu>(ctx, &aot_mem) && ctx.pc == 0x08A9E828u) goto L_08A9E828;
    return;
L_08A9E828:
    ctx.set_gpr(31, 0x08A9E830u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0017_entry, 17u, 176u, 0x08848BD0u>(ctx, &aot_mem) && ctx.pc == 0x08A9E830u) goto L_08A9E830;
    return;
L_08A9E830:
    ctx.set_gpr(6, ctx.gpr[16] + static_cast<std::uint32_t>(89));
    ctx.set_gpr(4, ctx.gpr[2] + 0u);
    ctx.set_gpr(5, 0u + static_cast<std::uint32_t>(15));
    ctx.set_gpr(31, 0x08A9E844u);
    ctx.set_gpr(7, 0u + 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0018_entry, 18u, 69u, 0x0884C47Cu>(ctx, &aot_mem) && ctx.pc == 0x08A9E844u) goto L_08A9E844;
    return;
L_08A9E844:
    ctx.set_gpr(16, ctx.gpr[16] + static_cast<std::uint32_t>(1));
    ctx.set_gpr(3, static_cast<std::int32_t>(ctx.gpr[16]) < 8 ? 1u : 0u);
    { const bool branch_taken = ctx.gpr[3] != 0u;
    // nop
      if (branch_taken) {
          goto L_08A9E80C;
      }
      goto L_08A9E854;
    }
L_08A9E854:
    ctx.set_gpr(31, rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(12)));
    ctx.set_gpr(16, rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(8)));
    jump_target = ctx.gpr[31];
    ctx.set_gpr(29, ctx.gpr[29] + static_cast<std::uint32_t>(16));
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_08A9E864:
    ctx.set_gpr(29, ctx.gpr[29] + static_cast<std::uint32_t>(-16));
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(12), ctx.gpr[31]);
    ctx.set_gpr(3, rt.memory().aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(15408)));
    ctx.set_gpr(2, 0u + static_cast<std::uint32_t>(2));
    if (ctx.gpr[3] != ctx.gpr[2]) {
    ctx.set_gpr(2, 0u + static_cast<std::uint32_t>(1));
        goto L_08A9E8B0;
    }
    goto L_08A9E87C;
L_08A9E87C:
    ctx.fpr[12] = std::bit_cast<float>(0u);
    ctx.set_gpr(2, 16256u << 16u);
    ctx.fpr[15] = std::bit_cast<float>(ctx.gpr[2]);
    ctx.set_fpr_bits(13, ctx.fpr_bits(12));
    ctx.set_gpr(31, 0x08A9E894u);
    ctx.set_fpr_bits(14, ctx.fpr_bits(12));
    if (rt.invoke_chained_direct<&recomp_unit_0019_entry, 19u, 568u, 0x08852084u>(ctx, &aot_mem) && ctx.pc == 0x08A9E894u) goto L_08A9E894;
    return;
L_08A9E894:
    ctx.set_gpr(6, 2230u << 16u);
    ctx.set_gpr(4, 0u + static_cast<std::uint32_t>(333));
    ctx.set_gpr(5, 0u + static_cast<std::uint32_t>(212));
    ctx.set_gpr(31, 0x08A9E8A8u);
    ctx.set_gpr(6, ctx.gpr[6] + static_cast<std::uint32_t>(19844));
    if (rt.invoke_chained_direct<&recomp_unit_0019_entry, 19u, 527u, 0x08851CD8u>(ctx, &aot_mem) && ctx.pc == 0x08A9E8A8u) goto L_08A9E8A8;
    return;
L_08A9E8A8:
    { const bool branch_taken = 0u == 0u;
    ctx.set_gpr(2, 16256u << 16u);
      if (branch_taken) {
          goto L_08A9E8E8;
      }
      goto L_08A9E8B0;
    }
L_08A9E8B0:
    { const bool branch_taken = ctx.gpr[3] != ctx.gpr[2];
    // nop
      if (branch_taken) {
          goto L_08A9E8E4;
      }
      goto L_08A9E8B8;
    }
L_08A9E8B8:
    ctx.fpr[12] = std::bit_cast<float>(0u);
    ctx.set_gpr(2, 16256u << 16u);
    ctx.fpr[15] = std::bit_cast<float>(ctx.gpr[2]);
    ctx.set_fpr_bits(13, ctx.fpr_bits(12));
    ctx.set_gpr(31, 0x08A9E8D0u);
    ctx.set_fpr_bits(14, ctx.fpr_bits(12));
    if (rt.invoke_chained_direct<&recomp_unit_0019_entry, 19u, 568u, 0x08852084u>(ctx, &aot_mem) && ctx.pc == 0x08A9E8D0u) goto L_08A9E8D0;
    return;
L_08A9E8D0:
    ctx.set_gpr(6, 2230u << 16u);
    ctx.set_gpr(4, 0u + static_cast<std::uint32_t>(413));
    ctx.set_gpr(5, 0u + static_cast<std::uint32_t>(212));
    ctx.set_gpr(31, 0x08A9E8E4u);
    ctx.set_gpr(6, ctx.gpr[6] + static_cast<std::uint32_t>(19852));
    if (rt.invoke_chained_direct<&recomp_unit_0019_entry, 19u, 527u, 0x08851CD8u>(ctx, &aot_mem) && ctx.pc == 0x08A9E8E4u) goto L_08A9E8E4;
    return;
L_08A9E8E4:
    ctx.set_gpr(2, 16256u << 16u);
    goto L_08A9E8E8;
L_08A9E8E8:
    ctx.fpr[12] = std::bit_cast<float>(ctx.gpr[2]);
    ctx.set_fpr_bits(13, ctx.fpr_bits(12));
    ctx.set_fpr_bits(14, ctx.fpr_bits(12));
    ctx.set_gpr(31, 0x08A9E8FCu);
    ctx.set_fpr_bits(15, ctx.fpr_bits(12));
    if (rt.invoke_chained_direct<&recomp_unit_0019_entry, 19u, 568u, 0x08852084u>(ctx, &aot_mem) && ctx.pc == 0x08A9E8FCu) goto L_08A9E8FC;
    return;
L_08A9E8FC:
    ctx.set_gpr(6, 2230u << 16u);
    ctx.set_gpr(4, 0u + static_cast<std::uint32_t>(332));
    ctx.set_gpr(5, 0u + static_cast<std::uint32_t>(211));
    ctx.set_gpr(31, 0x08A9E910u);
    ctx.set_gpr(6, ctx.gpr[6] + static_cast<std::uint32_t>(19844));
    if (rt.invoke_chained_direct<&recomp_unit_0019_entry, 19u, 527u, 0x08851CD8u>(ctx, &aot_mem) && ctx.pc == 0x08A9E910u) goto L_08A9E910;
    return;
L_08A9E910:
    ctx.set_gpr(6, 2230u << 16u);
    ctx.set_gpr(4, 0u + static_cast<std::uint32_t>(412));
    ctx.set_gpr(5, 0u + static_cast<std::uint32_t>(211));
    ctx.set_gpr(31, 0x08A9E924u);
    ctx.set_gpr(6, ctx.gpr[6] + static_cast<std::uint32_t>(19852));
    if (rt.invoke_chained_direct<&recomp_unit_0019_entry, 19u, 527u, 0x08851CD8u>(ctx, &aot_mem) && ctx.pc == 0x08A9E924u) goto L_08A9E924;
    return;
L_08A9E924:
    ctx.set_gpr(31, rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(12)));
    jump_target = ctx.gpr[31];
    ctx.set_gpr(29, ctx.gpr[29] + static_cast<std::uint32_t>(16));
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_08A9E930:
    ctx.set_gpr(29, ctx.gpr[29] + static_cast<std::uint32_t>(-16));
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(12), ctx.gpr[31]);
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(8), ctx.gpr[16]);
    ctx.set_gpr(3, rt.memory().aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(15408)));
    ctx.set_gpr(2, 0u + static_cast<std::uint32_t>(2));
    { const bool branch_taken = ctx.gpr[3] == ctx.gpr[2];
    ctx.set_gpr(16, ctx.gpr[4] + 0u);
      if (branch_taken) {
          goto L_08A9E9C0;
      }
      goto L_08A9E94C;
    }
L_08A9E94C:
    ctx.set_gpr(2, 0u + static_cast<std::uint32_t>(1));
    { const bool branch_taken = ctx.gpr[3] == ctx.gpr[2];
    // nop
      if (branch_taken) {
          goto L_08A9E994;
      }
      goto L_08A9E958;
    }
L_08A9E958:
    { const bool branch_taken = ctx.gpr[3] == 0u;
    // nop
      if (branch_taken) {
          goto L_08A9E968;
      }
      goto L_08A9E960;
    }
L_08A9E960:
    { const bool branch_taken = 0u == 0u;
    ctx.set_gpr(2, 0u + 0u);
      if (branch_taken) {
          goto L_08A9E9F0;
      }
      goto L_08A9E968;
    }
L_08A9E968:
    ctx.set_gpr(31, 0x08A9E970u);
    // nop
    goto L_08A9EA00;
L_08A9E970:
    { const bool branch_taken = ctx.gpr[2] == 0u;
    // nop
      if (branch_taken) {
          goto L_08A9E9EC;
      }
      goto L_08A9E978;
    }
L_08A9E978:
    ctx.set_gpr(3, rt.memory().aot_load8(ctx.gpr[16] + static_cast<std::uint32_t>(15424)));
    ctx.set_gpr(2, 0u + static_cast<std::uint32_t>(1));
    if (ctx.gpr[3] != ctx.gpr[2]) {
    rt.memory().aot_store32(ctx.gpr[16] + static_cast<std::uint32_t>(15416), 0u);
        goto L_08A9E9F0;
    }
    goto L_08A9E988;
L_08A9E988:
    rt.memory().aot_store32(ctx.gpr[16] + static_cast<std::uint32_t>(15416), ctx.gpr[2]);
    { const bool branch_taken = 0u == 0u;
    rt.memory().aot_store8(ctx.gpr[16] + static_cast<std::uint32_t>(15424), static_cast<std::uint8_t>(0u));
      if (branch_taken) {
          goto L_08A9E9F0;
      }
      goto L_08A9E994;
    }
L_08A9E994:
    ctx.set_gpr(31, 0x08A9E99Cu);
    // nop
    goto L_08A9F924;
L_08A9E99C:
    if (ctx.gpr[2] == 0u) {
    ctx.set_gpr(2, 0u + 0u);
        goto L_08A9E9F0;
    }
    goto L_08A9E9A4;
L_08A9E9A4:
    ctx.set_gpr(3, rt.memory().aot_load8(ctx.gpr[16] + static_cast<std::uint32_t>(15424)));
    ctx.set_gpr(2, 0u + static_cast<std::uint32_t>(1));
    if (ctx.gpr[3] != ctx.gpr[2]) {
    rt.memory().aot_store32(ctx.gpr[16] + static_cast<std::uint32_t>(15416), 0u);
        goto L_08A9E9F0;
    }
    goto L_08A9E9B4;
L_08A9E9B4:
    rt.memory().aot_store32(ctx.gpr[16] + static_cast<std::uint32_t>(15416), ctx.gpr[2]);
    { const bool branch_taken = 0u == 0u;
    rt.memory().aot_store8(ctx.gpr[16] + static_cast<std::uint32_t>(15424), static_cast<std::uint8_t>(0u));
      if (branch_taken) {
          goto L_08A9E9F0;
      }
      goto L_08A9E9C0;
    }
L_08A9E9C0:
    ctx.set_gpr(31, 0x08A9E9C8u);
    // nop
    goto L_08A9F464;
L_08A9E9C8:
    { const bool branch_taken = ctx.gpr[2] == 0u;
    // nop
      if (branch_taken) {
          goto L_08A9E9EC;
      }
      goto L_08A9E9D0;
    }
L_08A9E9D0:
    ctx.set_gpr(3, rt.memory().aot_load8(ctx.gpr[16] + static_cast<std::uint32_t>(15424)));
    ctx.set_gpr(2, 0u + static_cast<std::uint32_t>(1));
    if (ctx.gpr[3] != ctx.gpr[2]) {
    rt.memory().aot_store32(ctx.gpr[16] + static_cast<std::uint32_t>(15416), 0u);
        goto L_08A9E9F0;
    }
    goto L_08A9E9E0;
L_08A9E9E0:
    rt.memory().aot_store32(ctx.gpr[16] + static_cast<std::uint32_t>(15416), ctx.gpr[2]);
    { const bool branch_taken = 0u == 0u;
    rt.memory().aot_store8(ctx.gpr[16] + static_cast<std::uint32_t>(15424), static_cast<std::uint8_t>(0u));
      if (branch_taken) {
          goto L_08A9E9F0;
      }
      goto L_08A9E9EC;
    }
L_08A9E9EC:
    ctx.set_gpr(2, 0u + 0u);
    goto L_08A9E9F0;
L_08A9E9F0:
    ctx.set_gpr(31, rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(12)));
    ctx.set_gpr(16, rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(8)));
    jump_target = ctx.gpr[31];
    ctx.set_gpr(29, ctx.gpr[29] + static_cast<std::uint32_t>(16));
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_08A9EA00:
    ctx.set_gpr(29, ctx.gpr[29] + static_cast<std::uint32_t>(-32));
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(28), ctx.gpr[31]);
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(24), ctx.gpr[16]);
    ctx.set_gpr(16, ctx.gpr[4] + 0u);
    ctx.set_gpr(4, rt.memory().aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(0)));
    ctx.set_gpr(31, 0x08A9EA1Cu);
    ctx.set_gpr(5, 0u + 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0164_entry, 164u, 108u, 0x08A947BCu>(ctx, &aot_mem) && ctx.pc == 0x08A9EA1Cu) goto L_08A9EA1C;
    return;
L_08A9EA1C:
    ctx.set_gpr(31, 0x08A9EA24u);
    rt.memory().aot_store32(ctx.gpr[16] + static_cast<std::uint32_t>(15420), ctx.gpr[2]);
    if (rt.invoke_chained_direct<&recomp_unit_0017_entry, 17u, 179u, 0x08848BF4u>(ctx, &aot_mem) && ctx.pc == 0x08A9EA24u) goto L_08A9EA24;
    return;
L_08A9EA24:
    ctx.set_gpr(4, ctx.gpr[2] + 0u);
    ctx.set_gpr(2, 15820u << 16u);
    ctx.set_gpr(2, ctx.gpr[2] | 52429u);
    ctx.set_gpr(31, 0x08A9EA38u);
    ctx.fpr[12] = std::bit_cast<float>(ctx.gpr[2]);
    if (rt.invoke_chained_direct<&recomp_unit_0158_entry, 158u, 1017u, 0x08A7F7C8u>(ctx, &aot_mem) && ctx.pc == 0x08A9EA38u) goto L_08A9EA38;
    return;
L_08A9EA38:
    ctx.set_gpr(2, rt.memory().aot_load8(ctx.gpr[16] + static_cast<std::uint32_t>(15389)));
    { const bool branch_taken = ctx.gpr[2] != 0u;
    // nop
      if (branch_taken) {
          goto L_08A9EA90;
      }
      goto L_08A9EA44;
    }
L_08A9EA44:
    ctx.set_gpr(31, 0x08A9EA4Cu);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0017_entry, 17u, 182u, 0x08848C18u>(ctx, &aot_mem) && ctx.pc == 0x08A9EA4Cu) goto L_08A9EA4C;
    return;
L_08A9EA4C:
    ctx.set_gpr(31, 0x08A9EA54u);
    ctx.set_gpr(4, ctx.gpr[2] + 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0023_entry, 23u, 526u, 0x08861EE8u>(ctx, &aot_mem) && ctx.pc == 0x08A9EA54u) goto L_08A9EA54;
    return;
L_08A9EA54:
    ctx.set_gpr(4, ctx.gpr[2] + 0u);
    ctx.set_gpr(2, 0u + static_cast<std::uint32_t>(26));
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(0), ctx.gpr[2]);
    ctx.set_gpr(2, 0u + static_cast<std::uint32_t>(27));
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(4), ctx.gpr[2]);
    ctx.set_gpr(5, 0u + static_cast<std::uint32_t>(8));
    ctx.set_gpr(6, 0u + static_cast<std::uint32_t>(41));
    ctx.set_gpr(7, 0u + static_cast<std::uint32_t>(33));
    ctx.set_gpr(8, 0u + static_cast<std::uint32_t>(13));
    ctx.set_gpr(9, 0u + static_cast<std::uint32_t>(6));
    ctx.set_gpr(10, 0u + static_cast<std::uint32_t>(18));
    ctx.set_gpr(31, 0x08A9EA88u);
    ctx.set_gpr(11, 0u + 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0158_entry, 158u, 1029u, 0x08A7F850u>(ctx, &aot_mem) && ctx.pc == 0x08A9EA88u) goto L_08A9EA88;
    return;
L_08A9EA88:
    ctx.set_gpr(2, 0u + static_cast<std::uint32_t>(1));
    rt.memory().aot_store8(ctx.gpr[16] + static_cast<std::uint32_t>(15389), static_cast<std::uint8_t>(ctx.gpr[2]));
    goto L_08A9EA90;
L_08A9EA90:
    ctx.set_gpr(31, 0x08A9EA98u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0017_entry, 17u, 176u, 0x08848BD0u>(ctx, &aot_mem) && ctx.pc == 0x08A9EA98u) goto L_08A9EA98;
    return;
L_08A9EA98:
    ctx.set_gpr(4, ctx.gpr[2] + 0u);
    ctx.set_gpr(5, 0u + static_cast<std::uint32_t>(15));
    ctx.set_gpr(6, 0u + static_cast<std::uint32_t>(101));
    ctx.set_gpr(31, 0x08A9EAACu);
    ctx.set_gpr(7, 0u + 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0018_entry, 18u, 69u, 0x0884C47Cu>(ctx, &aot_mem) && ctx.pc == 0x08A9EAACu) goto L_08A9EAAC;
    return;
L_08A9EAAC:
    ctx.set_gpr(2, rt.memory().aot_load8(ctx.gpr[16] + static_cast<std::uint32_t>(15749)));
    { const bool branch_taken = ctx.gpr[2] != 0u;
    // nop
      if (branch_taken) {
          goto L_08A9F11C;
      }
      goto L_08A9EAB8;
    }
L_08A9EAB8:
    ctx.set_gpr(31, 0x08A9EAC0u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0017_entry, 17u, 179u, 0x08848BF4u>(ctx, &aot_mem) && ctx.pc == 0x08A9EAC0u) goto L_08A9EAC0;
    return;
L_08A9EAC0:
    ctx.set_gpr(4, ctx.gpr[2] + 0u);
    ctx.set_gpr(31, 0x08A9EACCu);
    ctx.set_gpr(5, 0u + static_cast<std::uint32_t>(5));
    if (rt.invoke_chained_direct<&recomp_unit_0017_entry, 17u, 943u, 0x0884B7C0u>(ctx, &aot_mem) && ctx.pc == 0x08A9EACCu) goto L_08A9EACC;
    return;
L_08A9EACC:
    { const bool branch_taken = ctx.gpr[2] == 0u;
    // nop
      if (branch_taken) {
          goto L_08A9EB78;
      }
      goto L_08A9EAD4;
    }
L_08A9EAD4:
    ctx.set_gpr(31, 0x08A9EADCu);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0017_entry, 17u, 185u, 0x08848C3Cu>(ctx, &aot_mem) && ctx.pc == 0x08A9EADCu) goto L_08A9EADC;
    return;
L_08A9EADC:
    ctx.set_gpr(4, ctx.gpr[2] + 0u);
    ctx.set_gpr(5, 0u + 0u);
    ctx.set_gpr(6, 0u + 0u);
    ctx.set_gpr(31, 0x08A9EAF0u);
    ctx.set_gpr(7, 0u + 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0171_entry, 171u, 403u, 0x08AB179Cu>(ctx, &aot_mem) && ctx.pc == 0x08A9EAF0u) goto L_08A9EAF0;
    return;
L_08A9EAF0:
    ctx.set_gpr(2, rt.memory().aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(15368)));
    ctx.set_gpr(1, static_cast<std::int32_t>(ctx.gpr[2]) < 32 ? 1u : 0u);
    if (ctx.gpr[1] == 0u) {
    ctx.set_gpr(1, static_cast<std::int32_t>(ctx.gpr[2]) < 4 ? 1u : 0u);
        goto L_08A9EB38;
    }
    goto L_08A9EB00;
L_08A9EB00:
    ctx.set_gpr(1, static_cast<std::int32_t>(ctx.gpr[2]) < 4 ? 1u : 0u);
    { const bool branch_taken = ctx.gpr[1] != 0u;
    // nop
      if (branch_taken) {
          goto L_08A9EB34;
      }
      goto L_08A9EB0C;
    }
L_08A9EB0C:
    ctx.set_gpr(3, rt.memory().aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(15400)));
    ctx.set_gpr(2, 2226u << 16u);
    ctx.set_gpr(2, ctx.gpr[2] + static_cast<std::uint32_t>(-26136));
    ctx.set_gpr(3, ctx.gpr[3] + static_cast<std::uint32_t>(-1));
    rt.memory().aot_store32(ctx.gpr[16] + static_cast<std::uint32_t>(15400), ctx.gpr[3]);
    ctx.set_gpr(3, ctx.gpr[3] << 2u);
    ctx.set_gpr(2, ctx.gpr[2] + ctx.gpr[3]);
    ctx.set_gpr(2, rt.memory().aot_load32(ctx.gpr[2] + static_cast<std::uint32_t>(0)));
    { const bool branch_taken = 0u == 0u;
    rt.memory().aot_store32(ctx.gpr[16] + static_cast<std::uint32_t>(15368), ctx.gpr[2]);
      if (branch_taken) {
          goto L_08A9EB60;
      }
      goto L_08A9EB34;
    }
L_08A9EB34:
    ctx.set_gpr(1, static_cast<std::int32_t>(ctx.gpr[2]) < 4 ? 1u : 0u);
    goto L_08A9EB38;
L_08A9EB38:
    if (ctx.gpr[1] == 0u) {
    rt.memory().aot_store32(ctx.gpr[16] + static_cast<std::uint32_t>(15392), 0u);
        goto L_08A9EB64;
    }
    goto L_08A9EB40;
L_08A9EB40:
    ctx.set_gpr(2, 0u + static_cast<std::uint32_t>(8));
    rt.memory().aot_store32(ctx.gpr[16] + static_cast<std::uint32_t>(15400), ctx.gpr[2]);
    ctx.set_gpr(2, 2226u << 16u);
    ctx.set_gpr(3, 0u + static_cast<std::uint32_t>(32));
    ctx.set_gpr(2, ctx.gpr[2] + static_cast<std::uint32_t>(-26136));
    ctx.set_gpr(2, ctx.gpr[2] + ctx.gpr[3]);
    ctx.set_gpr(2, rt.memory().aot_load32(ctx.gpr[2] + static_cast<std::uint32_t>(0)));
    rt.memory().aot_store32(ctx.gpr[16] + static_cast<std::uint32_t>(15368), ctx.gpr[2]);
    goto L_08A9EB60;
L_08A9EB60:
    rt.memory().aot_store32(ctx.gpr[16] + static_cast<std::uint32_t>(15392), 0u);
    goto L_08A9EB64;
L_08A9EB64:
    rt.memory().aot_store32(ctx.gpr[16] + static_cast<std::uint32_t>(15396), 0u);
    ctx.set_gpr(2, 0u + static_cast<std::uint32_t>(1));
    rt.memory().aot_store8(ctx.gpr[16] + static_cast<std::uint32_t>(15748), static_cast<std::uint8_t>(ctx.gpr[2]));
    { const bool branch_taken = 0u == 0u;
    rt.memory().aot_store8(ctx.gpr[16] + static_cast<std::uint32_t>(15390), static_cast<std::uint8_t>(0u));
      if (branch_taken) {
          goto L_08A9EB98;
      }
      goto L_08A9EB78;
    }
L_08A9EB78:
    ctx.set_gpr(31, 0x08A9EB80u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0017_entry, 17u, 179u, 0x08848BF4u>(ctx, &aot_mem) && ctx.pc == 0x08A9EB80u) goto L_08A9EB80;
    return;
L_08A9EB80:
    ctx.set_gpr(4, ctx.gpr[2] + 0u);
    ctx.set_gpr(31, 0x08A9EB8Cu);
    ctx.set_gpr(5, 0u + static_cast<std::uint32_t>(5));
    if (rt.invoke_chained_direct<&recomp_unit_0017_entry, 17u, 933u, 0x0884B74Cu>(ctx, &aot_mem) && ctx.pc == 0x08A9EB8Cu) goto L_08A9EB8C;
    return;
L_08A9EB8C:
    { const bool branch_taken = ctx.gpr[2] == 0u;
    // nop
      if (branch_taken) {
          goto L_08A9EB98;
      }
      goto L_08A9EB94;
    }
L_08A9EB94:
    rt.memory().aot_store8(ctx.gpr[16] + static_cast<std::uint32_t>(15748), static_cast<std::uint8_t>(0u));
    goto L_08A9EB98;
L_08A9EB98:
    ctx.set_gpr(31, 0x08A9EBA0u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0017_entry, 17u, 179u, 0x08848BF4u>(ctx, &aot_mem) && ctx.pc == 0x08A9EBA0u) goto L_08A9EBA0;
    return;
L_08A9EBA0:
    ctx.set_gpr(4, ctx.gpr[2] + 0u);
    ctx.set_gpr(31, 0x08A9EBACu);
    ctx.set_gpr(5, 0u + static_cast<std::uint32_t>(3));
    if (rt.invoke_chained_direct<&recomp_unit_0017_entry, 17u, 943u, 0x0884B7C0u>(ctx, &aot_mem) && ctx.pc == 0x08A9EBACu) goto L_08A9EBAC;
    return;
L_08A9EBAC:
    { const bool branch_taken = ctx.gpr[2] == 0u;
    // nop
      if (branch_taken) {
          goto L_08A9EC54;
      }
      goto L_08A9EBB4;
    }
L_08A9EBB4:
    ctx.set_gpr(31, 0x08A9EBBCu);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0017_entry, 17u, 185u, 0x08848C3Cu>(ctx, &aot_mem) && ctx.pc == 0x08A9EBBCu) goto L_08A9EBBC;
    return;
L_08A9EBBC:
    ctx.set_gpr(4, ctx.gpr[2] + 0u);
    ctx.set_gpr(5, 0u + 0u);
    ctx.set_gpr(6, 0u + 0u);
    ctx.set_gpr(31, 0x08A9EBD0u);
    ctx.set_gpr(7, 0u + 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0171_entry, 171u, 403u, 0x08AB179Cu>(ctx, &aot_mem) && ctx.pc == 0x08A9EBD0u) goto L_08A9EBD0;
    return;
L_08A9EBD0:
    ctx.set_gpr(2, rt.memory().aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(15368)));
    if (static_cast<std::int32_t>(ctx.gpr[2]) < 0) {
    ctx.set_gpr(2, static_cast<std::int32_t>(ctx.gpr[2]) < 28 ? 1u : 0u);
        goto L_08A9EC14;
    }
    goto L_08A9EBDC;
L_08A9EBDC:
    ctx.set_gpr(1, static_cast<std::int32_t>(ctx.gpr[2]) < 28 ? 1u : 0u);
    { const bool branch_taken = ctx.gpr[1] == 0u;
    // nop
      if (branch_taken) {
          goto L_08A9EC10;
      }
      goto L_08A9EBE8;
    }
L_08A9EBE8:
    ctx.set_gpr(3, rt.memory().aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(15400)));
    ctx.set_gpr(2, 2226u << 16u);
    ctx.set_gpr(2, ctx.gpr[2] + static_cast<std::uint32_t>(-26136));
    ctx.set_gpr(3, ctx.gpr[3] + static_cast<std::uint32_t>(1));
    rt.memory().aot_store32(ctx.gpr[16] + static_cast<std::uint32_t>(15400), ctx.gpr[3]);
    ctx.set_gpr(3, ctx.gpr[3] << 2u);
    ctx.set_gpr(2, ctx.gpr[2] + ctx.gpr[3]);
    ctx.set_gpr(2, rt.memory().aot_load32(ctx.gpr[2] + static_cast<std::uint32_t>(0)));
    { const bool branch_taken = 0u == 0u;
    rt.memory().aot_store32(ctx.gpr[16] + static_cast<std::uint32_t>(15368), ctx.gpr[2]);
      if (branch_taken) {
          goto L_08A9EC3C;
      }
      goto L_08A9EC10;
    }
L_08A9EC10:
    ctx.set_gpr(2, static_cast<std::int32_t>(ctx.gpr[2]) < 28 ? 1u : 0u);
    goto L_08A9EC14;
L_08A9EC14:
    if (ctx.gpr[2] != 0u) {
    rt.memory().aot_store32(ctx.gpr[16] + static_cast<std::uint32_t>(15392), 0u);
        goto L_08A9EC40;
    }
    goto L_08A9EC1C;
L_08A9EC1C:
    ctx.set_gpr(2, 0u + static_cast<std::uint32_t>(1));
    rt.memory().aot_store32(ctx.gpr[16] + static_cast<std::uint32_t>(15400), ctx.gpr[2]);
    ctx.set_gpr(2, 2226u << 16u);
    ctx.set_gpr(3, 0u + static_cast<std::uint32_t>(4));
    ctx.set_gpr(2, ctx.gpr[2] + static_cast<std::uint32_t>(-26136));
    ctx.set_gpr(2, ctx.gpr[2] + ctx.gpr[3]);
    ctx.set_gpr(2, rt.memory().aot_load32(ctx.gpr[2] + static_cast<std::uint32_t>(0)));
    rt.memory().aot_store32(ctx.gpr[16] + static_cast<std::uint32_t>(15368), ctx.gpr[2]);
    goto L_08A9EC3C;
L_08A9EC3C:
    rt.memory().aot_store32(ctx.gpr[16] + static_cast<std::uint32_t>(15392), 0u);
    goto L_08A9EC40;
L_08A9EC40:
    rt.memory().aot_store32(ctx.gpr[16] + static_cast<std::uint32_t>(15396), 0u);
    ctx.set_gpr(2, 0u + static_cast<std::uint32_t>(1));
    rt.memory().aot_store8(ctx.gpr[16] + static_cast<std::uint32_t>(15748), static_cast<std::uint8_t>(ctx.gpr[2]));
    { const bool branch_taken = 0u == 0u;
    rt.memory().aot_store8(ctx.gpr[16] + static_cast<std::uint32_t>(15390), static_cast<std::uint8_t>(0u));
      if (branch_taken) {
          goto L_08A9EC74;
      }
      goto L_08A9EC54;
    }
L_08A9EC54:
    ctx.set_gpr(31, 0x08A9EC5Cu);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0017_entry, 17u, 179u, 0x08848BF4u>(ctx, &aot_mem) && ctx.pc == 0x08A9EC5Cu) goto L_08A9EC5C;
    return;
L_08A9EC5C:
    ctx.set_gpr(4, ctx.gpr[2] + 0u);
    ctx.set_gpr(31, 0x08A9EC68u);
    ctx.set_gpr(5, 0u + static_cast<std::uint32_t>(3));
    if (rt.invoke_chained_direct<&recomp_unit_0017_entry, 17u, 933u, 0x0884B74Cu>(ctx, &aot_mem) && ctx.pc == 0x08A9EC68u) goto L_08A9EC68;
    return;
L_08A9EC68:
    if (ctx.gpr[2] == 0u) {
    ctx.set_gpr(2, rt.memory().aot_load8(ctx.gpr[16] + static_cast<std::uint32_t>(15748)));
        goto L_08A9EC78;
    }
    goto L_08A9EC70;
L_08A9EC70:
    rt.memory().aot_store8(ctx.gpr[16] + static_cast<std::uint32_t>(15748), static_cast<std::uint8_t>(0u));
    goto L_08A9EC74;
L_08A9EC74:
    ctx.set_gpr(2, rt.memory().aot_load8(ctx.gpr[16] + static_cast<std::uint32_t>(15748)));
    goto L_08A9EC78;
L_08A9EC78:
    if (ctx.gpr[2] != 0u) {
    ctx.set_gpr(2, rt.memory().aot_load8(ctx.gpr[16] + static_cast<std::uint32_t>(15748)));
        goto L_08A9ED08;
    }
    goto L_08A9EC80;
L_08A9EC80:
    ctx.set_gpr(31, 0x08A9EC88u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0017_entry, 17u, 179u, 0x08848BF4u>(ctx, &aot_mem) && ctx.pc == 0x08A9EC88u) goto L_08A9EC88;
    return;
L_08A9EC88:
    ctx.set_gpr(4, ctx.gpr[2] + 0u);
    ctx.set_gpr(31, 0x08A9EC94u);
    ctx.set_gpr(5, 0u + static_cast<std::uint32_t>(9));
    if (rt.invoke_chained_direct<&recomp_unit_0017_entry, 17u, 914u, 0x0884B680u>(ctx, &aot_mem) && ctx.pc == 0x08A9EC94u) goto L_08A9EC94;
    return;
L_08A9EC94:
    { const bool branch_taken = ctx.gpr[2] == 0u;
    // nop
      if (branch_taken) {
          goto L_08A9ED04;
      }
      goto L_08A9EC9C;
    }
L_08A9EC9C:
    ctx.set_gpr(31, 0x08A9ECA4u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0017_entry, 17u, 185u, 0x08848C3Cu>(ctx, &aot_mem) && ctx.pc == 0x08A9ECA4u) goto L_08A9ECA4;
    return;
L_08A9ECA4:
    ctx.set_gpr(4, ctx.gpr[2] + 0u);
    ctx.set_gpr(5, 0u + 0u);
    ctx.set_gpr(6, 0u + 0u);
    ctx.set_gpr(31, 0x08A9ECB8u);
    ctx.set_gpr(7, 0u + 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0171_entry, 171u, 403u, 0x08AB179Cu>(ctx, &aot_mem) && ctx.pc == 0x08A9ECB8u) goto L_08A9ECB8;
    return;
L_08A9ECB8:
    ctx.set_gpr(3, rt.memory().aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(15392)));
    ctx.set_gpr(2, 0u + static_cast<std::uint32_t>(-1));
    if (ctx.gpr[3] != ctx.gpr[2]) {
    ctx.set_gpr(2, ctx.gpr[3] + static_cast<std::uint32_t>(1));
        goto L_08A9ECD4;
    }
    goto L_08A9ECC8;
L_08A9ECC8:
    ctx.set_gpr(2, ctx.gpr[3] + static_cast<std::uint32_t>(2));
    { const bool branch_taken = 0u == 0u;
    rt.memory().aot_store32(ctx.gpr[16] + static_cast<std::uint32_t>(15392), ctx.gpr[2]);
      if (branch_taken) {
          goto L_08A9ECD8;
      }
      goto L_08A9ECD4;
    }
L_08A9ECD4:
    rt.memory().aot_store32(ctx.gpr[16] + static_cast<std::uint32_t>(15392), ctx.gpr[2]);
    goto L_08A9ECD8;
L_08A9ECD8:
    ctx.set_gpr(3, rt.memory().aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(15392)));
    ctx.set_gpr(2, 0u + static_cast<std::uint32_t>(2));
    if (ctx.gpr[3] != ctx.gpr[2]) {
    ctx.set_gpr(3, rt.memory().aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(15368)));
        goto L_08A9ECF4;
    }
    goto L_08A9ECE8;
L_08A9ECE8:
    ctx.set_gpr(2, 0u + static_cast<std::uint32_t>(-1));
    rt.memory().aot_store32(ctx.gpr[16] + static_cast<std::uint32_t>(15392), ctx.gpr[2]);
    ctx.set_gpr(3, rt.memory().aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(15368)));
    goto L_08A9ECF4;
L_08A9ECF4:
    ctx.set_gpr(2, rt.memory().aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(15392)));
    ctx.set_gpr(2, ctx.gpr[3] + ctx.gpr[2]);
    { const bool branch_taken = 0u == 0u;
    rt.memory().aot_store32(ctx.gpr[16] + static_cast<std::uint32_t>(15368), ctx.gpr[2]);
      if (branch_taken) {
          goto L_08A9ED90;
      }
      goto L_08A9ED04;
    }
L_08A9ED04:
    ctx.set_gpr(2, rt.memory().aot_load8(ctx.gpr[16] + static_cast<std::uint32_t>(15748)));
    goto L_08A9ED08;
L_08A9ED08:
    if (ctx.gpr[2] != 0u) {
    ctx.set_gpr(4, rt.memory().aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(0)));
        goto L_08A9ED94;
    }
    goto L_08A9ED10;
L_08A9ED10:
    ctx.set_gpr(31, 0x08A9ED18u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0017_entry, 17u, 179u, 0x08848BF4u>(ctx, &aot_mem) && ctx.pc == 0x08A9ED18u) goto L_08A9ED18;
    return;
L_08A9ED18:
    ctx.set_gpr(4, ctx.gpr[2] + 0u);
    ctx.set_gpr(31, 0x08A9ED24u);
    ctx.set_gpr(5, 0u + static_cast<std::uint32_t>(6));
    if (rt.invoke_chained_direct<&recomp_unit_0017_entry, 17u, 914u, 0x0884B680u>(ctx, &aot_mem) && ctx.pc == 0x08A9ED24u) goto L_08A9ED24;
    return;
L_08A9ED24:
    { const bool branch_taken = ctx.gpr[2] == 0u;
    // nop
      if (branch_taken) {
          goto L_08A9ED90;
      }
      goto L_08A9ED2C;
    }
L_08A9ED2C:
    ctx.set_gpr(31, 0x08A9ED34u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0017_entry, 17u, 185u, 0x08848C3Cu>(ctx, &aot_mem) && ctx.pc == 0x08A9ED34u) goto L_08A9ED34;
    return;
L_08A9ED34:
    ctx.set_gpr(4, ctx.gpr[2] + 0u);
    ctx.set_gpr(5, 0u + 0u);
    ctx.set_gpr(6, 0u + 0u);
    ctx.set_gpr(31, 0x08A9ED48u);
    ctx.set_gpr(7, 0u + 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0171_entry, 171u, 403u, 0x08AB179Cu>(ctx, &aot_mem) && ctx.pc == 0x08A9ED48u) goto L_08A9ED48;
    return;
L_08A9ED48:
    ctx.set_gpr(3, rt.memory().aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(15396)));
    ctx.set_gpr(2, 0u + static_cast<std::uint32_t>(-2));
    if (ctx.gpr[3] != ctx.gpr[2]) {
    ctx.set_gpr(2, ctx.gpr[3] + static_cast<std::uint32_t>(2));
        goto L_08A9ED64;
    }
    goto L_08A9ED58;
L_08A9ED58:
    ctx.set_gpr(2, ctx.gpr[3] + static_cast<std::uint32_t>(4));
    { const bool branch_taken = 0u == 0u;
    rt.memory().aot_store32(ctx.gpr[16] + static_cast<std::uint32_t>(15396), ctx.gpr[2]);
      if (branch_taken) {
          goto L_08A9ED68;
      }
      goto L_08A9ED64;
    }
L_08A9ED64:
    rt.memory().aot_store32(ctx.gpr[16] + static_cast<std::uint32_t>(15396), ctx.gpr[2]);
    goto L_08A9ED68;
L_08A9ED68:
    ctx.set_gpr(3, rt.memory().aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(15396)));
    ctx.set_gpr(2, 0u + static_cast<std::uint32_t>(4));
    if (ctx.gpr[3] != ctx.gpr[2]) {
    ctx.set_gpr(3, rt.memory().aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(15368)));
        goto L_08A9ED84;
    }
    goto L_08A9ED78;
L_08A9ED78:
    ctx.set_gpr(2, 0u + static_cast<std::uint32_t>(-2));
    rt.memory().aot_store32(ctx.gpr[16] + static_cast<std::uint32_t>(15396), ctx.gpr[2]);
    ctx.set_gpr(3, rt.memory().aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(15368)));
    goto L_08A9ED84;
L_08A9ED84:
    ctx.set_gpr(2, rt.memory().aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(15396)));
    ctx.set_gpr(2, ctx.gpr[3] + ctx.gpr[2]);
    rt.memory().aot_store32(ctx.gpr[16] + static_cast<std::uint32_t>(15368), ctx.gpr[2]);
    goto L_08A9ED90;
L_08A9ED90:
    ctx.set_gpr(4, rt.memory().aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(0)));
    goto L_08A9ED94;
L_08A9ED94:
    ctx.set_gpr(31, 0x08A9ED9Cu);
    ctx.set_gpr(5, 0u + 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0164_entry, 164u, 108u, 0x08A947BCu>(ctx, &aot_mem) && ctx.pc == 0x08A9ED9Cu) goto L_08A9ED9C;
    return;
L_08A9ED9C:
    ctx.set_gpr(6, rt.memory().aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(15368)));
    ctx.set_gpr(5, ctx.gpr[2] + 0u);
    ctx.set_gpr(31, 0x08A9EDACu);
    ctx.set_gpr(4, ctx.gpr[16] + 0u);
    goto L_08A9F2B0;
L_08A9EDAC:
    ctx.set_gpr(5, rt.memory().aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(15368)));
    ctx.set_gpr(31, 0x08A9EDB8u);
    ctx.set_gpr(4, rt.memory().aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(0)));
    if (rt.invoke_chained_direct<&recomp_unit_0161_entry, 161u, 862u, 0x08A8AE94u>(ctx, &aot_mem) && ctx.pc == 0x08A9EDB8u) goto L_08A9EDB8;
    return;
L_08A9EDB8:
    ctx.set_gpr(31, 0x08A9EDC0u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0017_entry, 17u, 179u, 0x08848BF4u>(ctx, &aot_mem) && ctx.pc == 0x08A9EDC0u) goto L_08A9EDC0;
    return;
L_08A9EDC0:
    ctx.set_gpr(4, ctx.gpr[2] + 0u);
    ctx.set_gpr(31, 0x08A9EDCCu);
    ctx.set_gpr(5, 0u + static_cast<std::uint32_t>(4));
    if (rt.invoke_chained_direct<&recomp_unit_0017_entry, 17u, 914u, 0x0884B680u>(ctx, &aot_mem) && ctx.pc == 0x08A9EDCCu) goto L_08A9EDCC;
    return;
L_08A9EDCC:
    { const bool branch_taken = ctx.gpr[2] == 0u;
    // nop
      if (branch_taken) {
          goto L_08A9EEB4;
      }
      goto L_08A9EDD4;
    }
L_08A9EDD4:
    ctx.set_gpr(31, 0x08A9EDDCu);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0017_entry, 17u, 185u, 0x08848C3Cu>(ctx, &aot_mem) && ctx.pc == 0x08A9EDDCu) goto L_08A9EDDC;
    return;
L_08A9EDDC:
    ctx.set_gpr(4, ctx.gpr[2] + 0u);
    ctx.set_gpr(5, 0u + 0u);
    ctx.set_gpr(6, 0u + 0u);
    ctx.set_gpr(31, 0x08A9EDF0u);
    ctx.set_gpr(7, 0u + 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0171_entry, 171u, 403u, 0x08AB179Cu>(ctx, &aot_mem) && ctx.pc == 0x08A9EDF0u) goto L_08A9EDF0;
    return;
L_08A9EDF0:
    ctx.set_gpr(31, 0x08A9EDF8u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0017_entry, 17u, 176u, 0x08848BD0u>(ctx, &aot_mem) && ctx.pc == 0x08A9EDF8u) goto L_08A9EDF8;
    return;
L_08A9EDF8:
    ctx.set_gpr(4, ctx.gpr[2] + 0u);
    ctx.set_gpr(5, 0u + static_cast<std::uint32_t>(15));
    ctx.set_gpr(6, 0u + static_cast<std::uint32_t>(54));
    ctx.set_gpr(31, 0x08A9EE0Cu);
    ctx.set_gpr(7, 0u + 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0018_entry, 18u, 69u, 0x0884C47Cu>(ctx, &aot_mem) && ctx.pc == 0x08A9EE0Cu) goto L_08A9EE0C;
    return;
L_08A9EE0C:
    ctx.set_gpr(31, 0x08A9EE14u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0017_entry, 17u, 176u, 0x08848BD0u>(ctx, &aot_mem) && ctx.pc == 0x08A9EE14u) goto L_08A9EE14;
    return;
L_08A9EE14:
    ctx.set_gpr(4, ctx.gpr[2] + 0u);
    ctx.set_gpr(5, 0u + static_cast<std::uint32_t>(15));
    ctx.set_gpr(6, 0u + static_cast<std::uint32_t>(52));
    ctx.set_gpr(31, 0x08A9EE28u);
    ctx.set_gpr(7, 0u + 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0018_entry, 18u, 69u, 0x0884C47Cu>(ctx, &aot_mem) && ctx.pc == 0x08A9EE28u) goto L_08A9EE28;
    return;
L_08A9EE28:
    ctx.set_gpr(31, 0x08A9EE30u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0017_entry, 17u, 176u, 0x08848BD0u>(ctx, &aot_mem) && ctx.pc == 0x08A9EE30u) goto L_08A9EE30;
    return;
L_08A9EE30:
    ctx.set_gpr(4, ctx.gpr[2] + 0u);
    ctx.set_gpr(5, 0u + static_cast<std::uint32_t>(15));
    ctx.set_gpr(6, 0u + static_cast<std::uint32_t>(53));
    ctx.set_gpr(31, 0x08A9EE44u);
    ctx.set_gpr(7, 0u + 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0018_entry, 18u, 69u, 0x0884C47Cu>(ctx, &aot_mem) && ctx.pc == 0x08A9EE44u) goto L_08A9EE44;
    return;
L_08A9EE44:
    ctx.set_gpr(31, 0x08A9EE4Cu);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0017_entry, 17u, 176u, 0x08848BD0u>(ctx, &aot_mem) && ctx.pc == 0x08A9EE4Cu) goto L_08A9EE4C;
    return;
L_08A9EE4C:
    ctx.set_gpr(4, ctx.gpr[2] + 0u);
    ctx.set_gpr(5, 0u + static_cast<std::uint32_t>(15));
    ctx.set_gpr(6, 0u + static_cast<std::uint32_t>(97));
    ctx.set_gpr(31, 0x08A9EE60u);
    ctx.set_gpr(7, 0u + 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0018_entry, 18u, 69u, 0x0884C47Cu>(ctx, &aot_mem) && ctx.pc == 0x08A9EE60u) goto L_08A9EE60;
    return;
L_08A9EE60:
    ctx.set_gpr(31, 0x08A9EE68u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0017_entry, 17u, 176u, 0x08848BD0u>(ctx, &aot_mem) && ctx.pc == 0x08A9EE68u) goto L_08A9EE68;
    return;
L_08A9EE68:
    ctx.set_gpr(4, ctx.gpr[2] + 0u);
    ctx.set_gpr(5, 0u + static_cast<std::uint32_t>(15));
    ctx.set_gpr(6, 0u + static_cast<std::uint32_t>(98));
    ctx.set_gpr(31, 0x08A9EE7Cu);
    ctx.set_gpr(7, 0u + 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0018_entry, 18u, 69u, 0x0884C47Cu>(ctx, &aot_mem) && ctx.pc == 0x08A9EE7Cu) goto L_08A9EE7C;
    return;
L_08A9EE7C:
    ctx.set_gpr(2, rt.memory().aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(15408)));
    ctx.set_gpr(2, ctx.gpr[2] + static_cast<std::uint32_t>(1));
    rt.memory().aot_store32(ctx.gpr[16] + static_cast<std::uint32_t>(15408), ctx.gpr[2]);
    rt.memory().aot_store8(ctx.gpr[16] + static_cast<std::uint32_t>(15389), static_cast<std::uint8_t>(0u));
    ctx.set_gpr(5, rt.memory().aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(15408)));
    ctx.set_gpr(31, 0x08A9EE98u);
    ctx.set_gpr(4, ctx.gpr[16] + 0u);
    goto L_08A9FDB0;
L_08A9EE98:
    ctx.set_gpr(4, rt.memory().aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(0)));
    ctx.set_gpr(31, 0x08A9EEA4u);
    ctx.set_gpr(5, 0u + 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0164_entry, 164u, 108u, 0x08A947BCu>(ctx, &aot_mem) && ctx.pc == 0x08A9EEA4u) goto L_08A9EEA4;
    return;
L_08A9EEA4:
    ctx.set_gpr(6, rt.memory().aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(15368)));
    ctx.set_gpr(5, ctx.gpr[2] + 0u);
    ctx.set_gpr(31, 0x08A9EEB4u);
    ctx.set_gpr(4, ctx.gpr[16] + 0u);
    goto L_08A9F2B0;
L_08A9EEB4:
    ctx.set_gpr(31, 0x08A9EEBCu);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0017_entry, 17u, 179u, 0x08848BF4u>(ctx, &aot_mem) && ctx.pc == 0x08A9EEBCu) goto L_08A9EEBC;
    return;
L_08A9EEBC:
    ctx.set_gpr(4, ctx.gpr[2] + 0u);
    ctx.set_gpr(31, 0x08A9EEC8u);
    ctx.set_gpr(5, 0u + 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0017_entry, 17u, 914u, 0x0884B680u>(ctx, &aot_mem) && ctx.pc == 0x08A9EEC8u) goto L_08A9EEC8;
    return;
L_08A9EEC8:
    { const bool branch_taken = ctx.gpr[2] == 0u;
    // nop
      if (branch_taken) {
          goto L_08A9EF80;
      }
      goto L_08A9EED0;
    }
L_08A9EED0:
    ctx.set_gpr(2, 0u + static_cast<std::uint32_t>(1));
    ctx.set_gpr(31, 0x08A9EEDCu);
    rt.memory().aot_store8(ctx.gpr[16] + static_cast<std::uint32_t>(15749), static_cast<std::uint8_t>(ctx.gpr[2]));
    if (rt.invoke_chained_direct<&recomp_unit_0017_entry, 17u, 185u, 0x08848C3Cu>(ctx, &aot_mem) && ctx.pc == 0x08A9EEDCu) goto L_08A9EEDC;
    return;
L_08A9EEDC:
    ctx.set_gpr(4, ctx.gpr[2] + 0u);
    ctx.set_gpr(5, 0u + static_cast<std::uint32_t>(1));
    ctx.set_gpr(6, 0u + 0u);
    ctx.set_gpr(31, 0x08A9EEF0u);
    ctx.set_gpr(7, 0u + 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0171_entry, 171u, 403u, 0x08AB179Cu>(ctx, &aot_mem) && ctx.pc == 0x08A9EEF0u) goto L_08A9EEF0;
    return;
L_08A9EEF0:
    ctx.set_gpr(31, 0x08A9EEF8u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0017_entry, 17u, 176u, 0x08848BD0u>(ctx, &aot_mem) && ctx.pc == 0x08A9EEF8u) goto L_08A9EEF8;
    return;
L_08A9EEF8:
    ctx.set_gpr(4, ctx.gpr[2] + 0u);
    ctx.set_gpr(5, 0u + static_cast<std::uint32_t>(15));
    ctx.set_gpr(6, 0u + static_cast<std::uint32_t>(97));
    ctx.set_gpr(31, 0x08A9EF0Cu);
    ctx.set_gpr(7, 0u + 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0018_entry, 18u, 69u, 0x0884C47Cu>(ctx, &aot_mem) && ctx.pc == 0x08A9EF0Cu) goto L_08A9EF0C;
    return;
L_08A9EF0C:
    ctx.set_gpr(31, 0x08A9EF14u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0017_entry, 17u, 176u, 0x08848BD0u>(ctx, &aot_mem) && ctx.pc == 0x08A9EF14u) goto L_08A9EF14;
    return;
L_08A9EF14:
    ctx.set_gpr(4, ctx.gpr[2] + 0u);
    ctx.set_gpr(5, 0u + static_cast<std::uint32_t>(15));
    ctx.set_gpr(6, 0u + static_cast<std::uint32_t>(98));
    ctx.set_gpr(31, 0x08A9EF28u);
    ctx.set_gpr(7, 0u + 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0018_entry, 18u, 69u, 0x0884C47Cu>(ctx, &aot_mem) && ctx.pc == 0x08A9EF28u) goto L_08A9EF28;
    return;
L_08A9EF28:
    ctx.fpr[12] = std::bit_cast<float>(0u);
    ctx.set_gpr(2, 16256u << 16u);
    ctx.fpr[15] = std::bit_cast<float>(ctx.gpr[2]);
    ctx.set_fpr_bits(13, ctx.fpr_bits(12));
    ctx.set_gpr(31, 0x08A9EF40u);
    ctx.set_fpr_bits(14, ctx.fpr_bits(12));
    if (rt.invoke_chained_direct<&recomp_unit_0019_entry, 19u, 568u, 0x08852084u>(ctx, &aot_mem) && ctx.pc == 0x08A9EF40u) goto L_08A9EF40;
    return;
L_08A9EF40:
    ctx.set_gpr(6, 2230u << 16u);
    ctx.set_gpr(4, 0u + static_cast<std::uint32_t>(413));
    ctx.set_gpr(5, 0u + static_cast<std::uint32_t>(212));
    ctx.set_gpr(31, 0x08A9EF54u);
    ctx.set_gpr(6, ctx.gpr[6] + static_cast<std::uint32_t>(19852));
    if (rt.invoke_chained_direct<&recomp_unit_0019_entry, 19u, 527u, 0x08851CD8u>(ctx, &aot_mem) && ctx.pc == 0x08A9EF54u) goto L_08A9EF54;
    return;
L_08A9EF54:
    ctx.set_gpr(2, 16256u << 16u);
    ctx.fpr[12] = std::bit_cast<float>(ctx.gpr[2]);
    ctx.set_fpr_bits(13, ctx.fpr_bits(12));
    ctx.set_fpr_bits(14, ctx.fpr_bits(12));
    ctx.set_gpr(31, 0x08A9EF6Cu);
    ctx.set_fpr_bits(15, ctx.fpr_bits(12));
    if (rt.invoke_chained_direct<&recomp_unit_0019_entry, 19u, 568u, 0x08852084u>(ctx, &aot_mem) && ctx.pc == 0x08A9EF6Cu) goto L_08A9EF6C;
    return;
L_08A9EF6C:
    ctx.set_gpr(6, 2230u << 16u);
    ctx.set_gpr(4, 0u + static_cast<std::uint32_t>(412));
    ctx.set_gpr(5, 0u + static_cast<std::uint32_t>(211));
    ctx.set_gpr(31, 0x08A9EF80u);
    ctx.set_gpr(6, ctx.gpr[6] + static_cast<std::uint32_t>(19852));
    if (rt.invoke_chained_direct<&recomp_unit_0019_entry, 19u, 527u, 0x08851CD8u>(ctx, &aot_mem) && ctx.pc == 0x08A9EF80u) goto L_08A9EF80;
    return;
L_08A9EF80:
    ctx.set_gpr(31, 0x08A9EF88u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0017_entry, 17u, 179u, 0x08848BF4u>(ctx, &aot_mem) && ctx.pc == 0x08A9EF88u) goto L_08A9EF88;
    return;
L_08A9EF88:
    ctx.set_gpr(4, ctx.gpr[2] + 0u);
    ctx.set_gpr(31, 0x08A9EF94u);
    ctx.set_gpr(5, 0u + static_cast<std::uint32_t>(1));
    if (rt.invoke_chained_direct<&recomp_unit_0017_entry, 17u, 914u, 0x0884B680u>(ctx, &aot_mem) && ctx.pc == 0x08A9EF94u) goto L_08A9EF94;
    return;
L_08A9EF94:
    { const bool branch_taken = ctx.gpr[2] != 0u;
    // nop
      if (branch_taken) {
          goto L_08A9EFB8;
      }
      goto L_08A9EF9C;
    }
L_08A9EF9C:
    ctx.set_gpr(31, 0x08A9EFA4u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0017_entry, 17u, 179u, 0x08848BF4u>(ctx, &aot_mem) && ctx.pc == 0x08A9EFA4u) goto L_08A9EFA4;
    return;
L_08A9EFA4:
    ctx.set_gpr(4, ctx.gpr[2] + 0u);
    ctx.set_gpr(31, 0x08A9EFB0u);
    ctx.set_gpr(5, 0u + static_cast<std::uint32_t>(8));
    if (rt.invoke_chained_direct<&recomp_unit_0017_entry, 17u, 914u, 0x0884B680u>(ctx, &aot_mem) && ctx.pc == 0x08A9EFB0u) goto L_08A9EFB0;
    return;
L_08A9EFB0:
    { const bool branch_taken = ctx.gpr[2] == 0u;
    // nop
      if (branch_taken) {
          goto L_08A9F050;
      }
      goto L_08A9EFB8;
    }
L_08A9EFB8:
    ctx.set_gpr(31, 0x08A9EFC0u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0017_entry, 17u, 185u, 0x08848C3Cu>(ctx, &aot_mem) && ctx.pc == 0x08A9EFC0u) goto L_08A9EFC0;
    return;
L_08A9EFC0:
    ctx.set_gpr(4, ctx.gpr[2] + 0u);
    ctx.set_gpr(5, 0u + static_cast<std::uint32_t>(2));
    ctx.set_gpr(6, 0u + 0u);
    ctx.set_gpr(31, 0x08A9EFD4u);
    ctx.set_gpr(7, 0u + 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0171_entry, 171u, 403u, 0x08AB179Cu>(ctx, &aot_mem) && ctx.pc == 0x08A9EFD4u) goto L_08A9EFD4;
    return;
L_08A9EFD4:
    ctx.set_gpr(31, 0x08A9EFDCu);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0017_entry, 17u, 176u, 0x08848BD0u>(ctx, &aot_mem) && ctx.pc == 0x08A9EFDCu) goto L_08A9EFDC;
    return;
L_08A9EFDC:
    ctx.set_gpr(4, ctx.gpr[2] + 0u);
    ctx.set_gpr(5, 0u + static_cast<std::uint32_t>(15));
    ctx.set_gpr(6, 0u + static_cast<std::uint32_t>(54));
    ctx.set_gpr(31, 0x08A9EFF0u);
    ctx.set_gpr(7, 0u + 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0018_entry, 18u, 69u, 0x0884C47Cu>(ctx, &aot_mem) && ctx.pc == 0x08A9EFF0u) goto L_08A9EFF0;
    return;
L_08A9EFF0:
    ctx.set_gpr(31, 0x08A9EFF8u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0017_entry, 17u, 176u, 0x08848BD0u>(ctx, &aot_mem) && ctx.pc == 0x08A9EFF8u) goto L_08A9EFF8;
    return;
L_08A9EFF8:
    ctx.set_gpr(4, ctx.gpr[2] + 0u);
    ctx.set_gpr(5, 0u + static_cast<std::uint32_t>(15));
    ctx.set_gpr(6, 0u + static_cast<std::uint32_t>(52));
    ctx.set_gpr(31, 0x08A9F00Cu);
    ctx.set_gpr(7, 0u + 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0018_entry, 18u, 69u, 0x0884C47Cu>(ctx, &aot_mem) && ctx.pc == 0x08A9F00Cu) goto L_08A9F00C;
    return;
L_08A9F00C:
    ctx.set_gpr(31, 0x08A9F014u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0017_entry, 17u, 176u, 0x08848BD0u>(ctx, &aot_mem) && ctx.pc == 0x08A9F014u) goto L_08A9F014;
    return;
L_08A9F014:
    ctx.set_gpr(4, ctx.gpr[2] + 0u);
    ctx.set_gpr(5, 0u + static_cast<std::uint32_t>(15));
    ctx.set_gpr(6, 0u + static_cast<std::uint32_t>(53));
    ctx.set_gpr(31, 0x08A9F028u);
    ctx.set_gpr(7, 0u + 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0018_entry, 18u, 69u, 0x0884C47Cu>(ctx, &aot_mem) && ctx.pc == 0x08A9F028u) goto L_08A9F028;
    return;
L_08A9F028:
    rt.memory().aot_store8(ctx.gpr[16] + static_cast<std::uint32_t>(15424), static_cast<std::uint8_t>(0u));
    ctx.set_gpr(2, 0u + static_cast<std::uint32_t>(-1));
    rt.memory().aot_store32(ctx.gpr[16] + static_cast<std::uint32_t>(15368), ctx.gpr[2]);
    rt.memory().aot_store32(ctx.gpr[16] + static_cast<std::uint32_t>(15392), 0u);
    rt.memory().aot_store32(ctx.gpr[16] + static_cast<std::uint32_t>(15396), 0u);
    ctx.set_gpr(2, 0u + static_cast<std::uint32_t>(1));
    rt.memory().aot_store32(ctx.gpr[16] + static_cast<std::uint32_t>(15400), ctx.gpr[2]);
    rt.memory().aot_store8(ctx.gpr[16] + static_cast<std::uint32_t>(15389), static_cast<std::uint8_t>(0u));
    { const bool branch_taken = 0u == 0u;
    rt.memory().aot_store8(ctx.gpr[16] + static_cast<std::uint32_t>(15389), static_cast<std::uint8_t>(0u));
      if (branch_taken) {
          goto L_08A9F240;
      }
      goto L_08A9F050;
    }
L_08A9F050:
    ctx.set_gpr(31, 0x08A9F058u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0017_entry, 17u, 179u, 0x08848BF4u>(ctx, &aot_mem) && ctx.pc == 0x08A9F058u) goto L_08A9F058;
    return;
L_08A9F058:
    ctx.set_gpr(4, ctx.gpr[2] + 0u);
    ctx.set_gpr(31, 0x08A9F064u);
    ctx.set_gpr(5, 0u + static_cast<std::uint32_t>(7));
    if (rt.invoke_chained_direct<&recomp_unit_0017_entry, 17u, 914u, 0x0884B680u>(ctx, &aot_mem) && ctx.pc == 0x08A9F064u) goto L_08A9F064;
    return;
L_08A9F064:
    if (ctx.gpr[2] == 0u) {
    ctx.set_gpr(2, 0u + 0u);
        goto L_08A9F240;
    }
    goto L_08A9F06C;
L_08A9F06C:
    ctx.set_gpr(31, 0x08A9F074u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0017_entry, 17u, 185u, 0x08848C3Cu>(ctx, &aot_mem) && ctx.pc == 0x08A9F074u) goto L_08A9F074;
    return;
L_08A9F074:
    ctx.set_gpr(4, ctx.gpr[2] + 0u);
    ctx.set_gpr(5, 0u + static_cast<std::uint32_t>(1));
    ctx.set_gpr(6, 0u + 0u);
    ctx.set_gpr(31, 0x08A9F088u);
    ctx.set_gpr(7, 0u + 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0171_entry, 171u, 403u, 0x08AB179Cu>(ctx, &aot_mem) && ctx.pc == 0x08A9F088u) goto L_08A9F088;
    return;
L_08A9F088:
    ctx.set_gpr(31, 0x08A9F090u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0017_entry, 17u, 176u, 0x08848BD0u>(ctx, &aot_mem) && ctx.pc == 0x08A9F090u) goto L_08A9F090;
    return;
L_08A9F090:
    ctx.set_gpr(4, ctx.gpr[2] + 0u);
    ctx.set_gpr(5, 0u + static_cast<std::uint32_t>(15));
    ctx.set_gpr(6, 0u + static_cast<std::uint32_t>(54));
    ctx.set_gpr(31, 0x08A9F0A4u);
    ctx.set_gpr(7, 0u + 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0018_entry, 18u, 69u, 0x0884C47Cu>(ctx, &aot_mem) && ctx.pc == 0x08A9F0A4u) goto L_08A9F0A4;
    return;
L_08A9F0A4:
    ctx.set_gpr(31, 0x08A9F0ACu);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0017_entry, 17u, 176u, 0x08848BD0u>(ctx, &aot_mem) && ctx.pc == 0x08A9F0ACu) goto L_08A9F0AC;
    return;
L_08A9F0AC:
    ctx.set_gpr(4, ctx.gpr[2] + 0u);
    ctx.set_gpr(5, 0u + static_cast<std::uint32_t>(15));
    ctx.set_gpr(6, 0u + static_cast<std::uint32_t>(52));
    ctx.set_gpr(31, 0x08A9F0C0u);
    ctx.set_gpr(7, 0u + 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0018_entry, 18u, 69u, 0x0884C47Cu>(ctx, &aot_mem) && ctx.pc == 0x08A9F0C0u) goto L_08A9F0C0;
    return;
L_08A9F0C0:
    ctx.set_gpr(31, 0x08A9F0C8u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0017_entry, 17u, 176u, 0x08848BD0u>(ctx, &aot_mem) && ctx.pc == 0x08A9F0C8u) goto L_08A9F0C8;
    return;
L_08A9F0C8:
    ctx.set_gpr(4, ctx.gpr[2] + 0u);
    ctx.set_gpr(5, 0u + static_cast<std::uint32_t>(15));
    ctx.set_gpr(6, 0u + static_cast<std::uint32_t>(53));
    ctx.set_gpr(31, 0x08A9F0DCu);
    ctx.set_gpr(7, 0u + 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0018_entry, 18u, 69u, 0x0884C47Cu>(ctx, &aot_mem) && ctx.pc == 0x08A9F0DCu) goto L_08A9F0DC;
    return;
L_08A9F0DC:
    ctx.set_gpr(2, rt.memory().aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(15408)));
    ctx.set_gpr(2, ctx.gpr[2] + static_cast<std::uint32_t>(1));
    rt.memory().aot_store32(ctx.gpr[16] + static_cast<std::uint32_t>(15408), ctx.gpr[2]);
    rt.memory().aot_store8(ctx.gpr[16] + static_cast<std::uint32_t>(15389), static_cast<std::uint8_t>(0u));
    ctx.set_gpr(5, rt.memory().aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(15408)));
    ctx.set_gpr(31, 0x08A9F0F8u);
    ctx.set_gpr(4, ctx.gpr[16] + 0u);
    goto L_08A9FDB0;
L_08A9F0F8:
    ctx.set_gpr(4, rt.memory().aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(0)));
    ctx.set_gpr(31, 0x08A9F104u);
    ctx.set_gpr(5, 0u + 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0164_entry, 164u, 108u, 0x08A947BCu>(ctx, &aot_mem) && ctx.pc == 0x08A9F104u) goto L_08A9F104;
    return;
L_08A9F104:
    ctx.set_gpr(6, rt.memory().aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(15368)));
    ctx.set_gpr(5, ctx.gpr[2] + 0u);
    ctx.set_gpr(31, 0x08A9F114u);
    ctx.set_gpr(4, ctx.gpr[16] + 0u);
    goto L_08A9F2B0;
L_08A9F114:
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_08A9F23C;
      }
      goto L_08A9F11C;
    }
L_08A9F11C:
    { const bool branch_taken = ctx.gpr[2] == 0u;
    // nop
      if (branch_taken) {
          goto L_08A9F23C;
      }
      goto L_08A9F124;
    }
L_08A9F124:
    ctx.set_gpr(4, rt.memory().aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(0)));
    ctx.set_gpr(31, 0x08A9F130u);
    ctx.set_gpr(5, 0u + 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0164_entry, 164u, 108u, 0x08A947BCu>(ctx, &aot_mem) && ctx.pc == 0x08A9F130u) goto L_08A9F130;
    return;
L_08A9F130:
    ctx.set_gpr(6, rt.memory().aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(15368)));
    ctx.set_gpr(5, ctx.gpr[2] + 0u);
    ctx.set_gpr(31, 0x08A9F140u);
    ctx.set_gpr(4, ctx.gpr[16] + 0u);
    goto L_08A9F2B0;
L_08A9F140:
    ctx.set_gpr(31, 0x08A9F148u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0017_entry, 17u, 176u, 0x08848BD0u>(ctx, &aot_mem) && ctx.pc == 0x08A9F148u) goto L_08A9F148;
    return;
L_08A9F148:
    ctx.set_gpr(4, ctx.gpr[2] + 0u);
    ctx.set_gpr(5, 0u + static_cast<std::uint32_t>(15));
    ctx.set_gpr(6, 0u + static_cast<std::uint32_t>(97));
    ctx.set_gpr(31, 0x08A9F15Cu);
    ctx.set_gpr(7, 0u + 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0018_entry, 18u, 69u, 0x0884C47Cu>(ctx, &aot_mem) && ctx.pc == 0x08A9F15Cu) goto L_08A9F15C;
    return;
L_08A9F15C:
    ctx.set_gpr(31, 0x08A9F164u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0017_entry, 17u, 176u, 0x08848BD0u>(ctx, &aot_mem) && ctx.pc == 0x08A9F164u) goto L_08A9F164;
    return;
L_08A9F164:
    ctx.set_gpr(4, ctx.gpr[2] + 0u);
    ctx.set_gpr(5, 0u + static_cast<std::uint32_t>(15));
    ctx.set_gpr(6, 0u + static_cast<std::uint32_t>(98));
    ctx.set_gpr(31, 0x08A9F178u);
    ctx.set_gpr(7, 0u + 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0018_entry, 18u, 69u, 0x0884C47Cu>(ctx, &aot_mem) && ctx.pc == 0x08A9F178u) goto L_08A9F178;
    return;
L_08A9F178:
    ctx.fpr[12] = std::bit_cast<float>(0u);
    ctx.set_gpr(2, 16256u << 16u);
    ctx.fpr[15] = std::bit_cast<float>(ctx.gpr[2]);
    ctx.set_fpr_bits(13, ctx.fpr_bits(12));
    ctx.set_gpr(31, 0x08A9F190u);
    ctx.set_fpr_bits(14, ctx.fpr_bits(12));
    if (rt.invoke_chained_direct<&recomp_unit_0019_entry, 19u, 568u, 0x08852084u>(ctx, &aot_mem) && ctx.pc == 0x08A9F190u) goto L_08A9F190;
    return;
L_08A9F190:
    ctx.set_gpr(6, 2230u << 16u);
    ctx.set_gpr(4, 0u + static_cast<std::uint32_t>(413));
    ctx.set_gpr(5, 0u + static_cast<std::uint32_t>(212));
    ctx.set_gpr(31, 0x08A9F1A4u);
    ctx.set_gpr(6, ctx.gpr[6] + static_cast<std::uint32_t>(19852));
    if (rt.invoke_chained_direct<&recomp_unit_0019_entry, 19u, 527u, 0x08851CD8u>(ctx, &aot_mem) && ctx.pc == 0x08A9F1A4u) goto L_08A9F1A4;
    return;
L_08A9F1A4:
    ctx.set_gpr(2, 16256u << 16u);
    ctx.fpr[12] = std::bit_cast<float>(ctx.gpr[2]);
    ctx.set_fpr_bits(13, ctx.fpr_bits(12));
    ctx.set_fpr_bits(14, ctx.fpr_bits(12));
    ctx.set_gpr(31, 0x08A9F1BCu);
    ctx.set_fpr_bits(15, ctx.fpr_bits(12));
    if (rt.invoke_chained_direct<&recomp_unit_0019_entry, 19u, 568u, 0x08852084u>(ctx, &aot_mem) && ctx.pc == 0x08A9F1BCu) goto L_08A9F1BC;
    return;
L_08A9F1BC:
    ctx.set_gpr(6, 2230u << 16u);
    ctx.set_gpr(4, 0u + static_cast<std::uint32_t>(412));
    ctx.set_gpr(5, 0u + static_cast<std::uint32_t>(211));
    ctx.set_gpr(31, 0x08A9F1D0u);
    ctx.set_gpr(6, ctx.gpr[6] + static_cast<std::uint32_t>(19852));
    if (rt.invoke_chained_direct<&recomp_unit_0019_entry, 19u, 527u, 0x08851CD8u>(ctx, &aot_mem) && ctx.pc == 0x08A9F1D0u) goto L_08A9F1D0;
    return;
L_08A9F1D0:
    ctx.set_gpr(2, rt.memory().aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(15752)));
    { const bool branch_taken = ctx.gpr[2] == 0u;
    // nop
      if (branch_taken) {
          goto L_08A9F1F8;
      }
      goto L_08A9F1DC;
    }
L_08A9F1DC:
    ctx.set_gpr(4, ctx.gpr[16] + 0u);
    ctx.set_gpr(31, 0x08A9F1E8u);
    ctx.set_gpr(5, 0u + static_cast<std::uint32_t>(1));
    goto L_08A9FDB0;
L_08A9F1E8:
    ctx.set_gpr(2, rt.memory().aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(15752)));
    ctx.set_gpr(2, ctx.gpr[2] + static_cast<std::uint32_t>(-1));
    { const bool branch_taken = 0u == 0u;
    rt.memory().aot_store32(ctx.gpr[16] + static_cast<std::uint32_t>(15752), ctx.gpr[2]);
      if (branch_taken) {
          goto L_08A9F23C;
      }
      goto L_08A9F1F8;
    }
L_08A9F1F8:
    { const bool branch_taken = ctx.gpr[2] != 0u;
    // nop
      if (branch_taken) {
          goto L_08A9F23C;
      }
      goto L_08A9F200;
    }
L_08A9F200:
    ctx.set_gpr(4, ctx.gpr[16] + 0u);
    ctx.set_gpr(31, 0x08A9F20Cu);
    ctx.set_gpr(5, 0u + static_cast<std::uint32_t>(1));
    goto L_08A9FDB0;
L_08A9F20C:
    ctx.set_gpr(6, rt.memory().aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(15368)));
    ctx.set_gpr(4, ctx.gpr[16] + 0u);
    ctx.set_gpr(31, 0x08A9F21Cu);
    ctx.set_gpr(5, 0u + static_cast<std::uint32_t>(1));
    if (rt.invoke_chained_direct<&recomp_unit_0168_entry, 168u, 693u, 0x08AA6968u>(ctx, &aot_mem) && ctx.pc == 0x08A9F21Cu) goto L_08A9F21C;
    return;
L_08A9F21C:
    ctx.set_gpr(2, 0u + static_cast<std::uint32_t>(1));
    rt.memory().aot_store8(ctx.gpr[16] + static_cast<std::uint32_t>(15424), static_cast<std::uint8_t>(ctx.gpr[2]));
    rt.memory().aot_store8(ctx.gpr[16] + static_cast<std::uint32_t>(15389), static_cast<std::uint8_t>(0u));
    rt.memory().aot_store8(ctx.gpr[16] + static_cast<std::uint32_t>(15389), static_cast<std::uint8_t>(0u));
    ctx.set_gpr(3, 0u + static_cast<std::uint32_t>(10));
    rt.memory().aot_store32(ctx.gpr[16] + static_cast<std::uint32_t>(15752), ctx.gpr[3]);
    { const bool branch_taken = 0u == 0u;
    rt.memory().aot_store8(ctx.gpr[16] + static_cast<std::uint32_t>(15749), static_cast<std::uint8_t>(0u));
      if (branch_taken) {
          goto L_08A9F240;
      }
      goto L_08A9F23C;
    }
L_08A9F23C:
    ctx.set_gpr(2, 0u + 0u);
    goto L_08A9F240;
L_08A9F240:
    ctx.set_gpr(31, rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(28)));
    ctx.set_gpr(16, rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(24)));
    jump_target = ctx.gpr[31];
    ctx.set_gpr(29, ctx.gpr[29] + static_cast<std::uint32_t>(32));
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_08A9F250:
    ctx.set_gpr(29, ctx.gpr[29] + static_cast<std::uint32_t>(-16));
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(12), ctx.gpr[31]);
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(8), ctx.gpr[18]);
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(4), ctx.gpr[17]);
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(0), ctx.gpr[16]);
    ctx.set_gpr(17, ctx.gpr[5] + 0u);
    ctx.set_gpr(18, ctx.gpr[4] + 0u);
    { const bool branch_taken = static_cast<std::int32_t>(ctx.gpr[17]) <= 0;
    ctx.set_gpr(16, 0u + 0u);
      if (branch_taken) {
          goto L_08A9F298;
      }
      goto L_08A9F274;
    }
L_08A9F274:
    ctx.set_gpr(4, rt.memory().aot_load32(ctx.gpr[18] + static_cast<std::uint32_t>(0)));
    goto L_08A9F278;
L_08A9F278:
    ctx.set_gpr(31, 0x08A9F280u);
    ctx.set_gpr(5, ctx.gpr[16] + 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0164_entry, 164u, 156u, 0x08A94BD4u>(ctx, &aot_mem) && ctx.pc == 0x08A9F280u) goto L_08A9F280;
    return;
L_08A9F280:
    ctx.set_gpr(31, 0x08A9F288u);
    ctx.set_gpr(4, rt.memory().aot_load32(ctx.gpr[18] + static_cast<std::uint32_t>(0)));
    if (rt.invoke_chained_direct<&recomp_unit_0164_entry, 164u, 546u, 0x08A96998u>(ctx, &aot_mem) && ctx.pc == 0x08A9F288u) goto L_08A9F288;
    return;
L_08A9F288:
    ctx.set_gpr(16, ctx.gpr[16] + static_cast<std::uint32_t>(1));
    ctx.set_gpr(3, static_cast<std::int32_t>(ctx.gpr[16]) < static_cast<std::int32_t>(ctx.gpr[17]) ? 1u : 0u);
    if (ctx.gpr[3] != 0u) {
    ctx.set_gpr(4, rt.memory().aot_load32(ctx.gpr[18] + static_cast<std::uint32_t>(0)));
        goto L_08A9F278;
    }
    goto L_08A9F298;
L_08A9F298:
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
L_08A9F2B0:
    ctx.set_gpr(29, ctx.gpr[29] + static_cast<std::uint32_t>(-64));
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(28), ctx.gpr[31]);
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(24), ctx.gpr[19]);
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(20), ctx.gpr[18]);
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(16), ctx.gpr[17]);
    ctx.set_gpr(18, ctx.gpr[4] + 0u);
    ctx.set_gpr(19, ctx.gpr[5] + 0u);
    ctx.set_gpr(17, ctx.gpr[6] + 0u);
    ctx.set_gpr(4, ctx.gpr[29] + static_cast<std::uint32_t>(52));
    ctx.set_gpr(31, 0x08A9F2DCu);
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(12), ctx.gpr[16]);
    if (rt.invoke_chained_direct<&recomp_unit_0016_entry, 16u, 512u, 0x088472A8u>(ctx, &aot_mem) && ctx.pc == 0x08A9F2DCu) goto L_08A9F2DC;
    return;
L_08A9F2DC:
    ctx.set_gpr(31, 0x08A9F2E4u);
    ctx.set_gpr(4, ctx.gpr[29] + static_cast<std::uint32_t>(40));
    if (rt.invoke_chained_direct<&recomp_unit_0016_entry, 16u, 512u, 0x088472A8u>(ctx, &aot_mem) && ctx.pc == 0x08A9F2E4u) goto L_08A9F2E4;
    return;
L_08A9F2E4:
    ctx.set_gpr(4, rt.memory().aot_load32(ctx.gpr[18] + static_cast<std::uint32_t>(0)));
    ctx.set_gpr(31, 0x08A9F2F0u);
    ctx.set_gpr(5, ctx.gpr[17] + 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0161_entry, 161u, 862u, 0x08A8AE94u>(ctx, &aot_mem) && ctx.pc == 0x08A9F2F0u) goto L_08A9F2F0;
    return;
L_08A9F2F0:
    ctx.set_gpr(3, 0u + static_cast<std::uint32_t>(8));
    { const bool branch_taken = ctx.gpr[19] != ctx.gpr[3];
    ctx.set_gpr(18, ctx.gpr[2] + 0u);
      if (branch_taken) {
          goto L_08A9F304;
      }
      goto L_08A9F2FC;
    }
L_08A9F2FC:
    { const bool branch_taken = 0u == 0u;
    ctx.set_gpr(16, 0u + 0u);
      if (branch_taken) {
          goto L_08A9F324;
      }
      goto L_08A9F304;
    }
L_08A9F304:
    ctx.set_gpr(3, 0u + static_cast<std::uint32_t>(6));
    if (ctx.gpr[19] != ctx.gpr[3]) {
    ctx.set_gpr(3, 0u + static_cast<std::uint32_t>(4));
        goto L_08A9F318;
    }
    goto L_08A9F310;
L_08A9F310:
    { const bool branch_taken = 0u == 0u;
    ctx.set_gpr(16, 0u + static_cast<std::uint32_t>(1));
      if (branch_taken) {
          goto L_08A9F324;
      }
      goto L_08A9F318;
    }
L_08A9F318:
    if (ctx.gpr[19] != ctx.gpr[3]) {
    ctx.set_gpr(17, 0u + 0u);
        goto L_08A9F328;
    }
    goto L_08A9F320;
L_08A9F320:
    ctx.set_gpr(16, 0u + static_cast<std::uint32_t>(2));
    goto L_08A9F324;
L_08A9F324:
    ctx.set_gpr(17, 0u + 0u);
    goto L_08A9F328;
L_08A9F328:
    if (static_cast<std::int32_t>(ctx.gpr[19]) <= 0) {
    ctx.set_gpr(31, rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(28)));
        goto L_08A9F44C;
    }
    goto L_08A9F330;
L_08A9F330:
    ctx.set_gpr(3, 2226u << 16u);
    ctx.set_gpr(4, ctx.gpr[16] << 3u);
    ctx.set_gpr(3, ctx.gpr[3] + static_cast<std::uint32_t>(-26076));
    ctx.set_gpr(16, ctx.gpr[3] + ctx.gpr[4]);
    goto L_08A9F340;
L_08A9F340:
    ctx.set_gpr(3, rt.memory().aot_load8(ctx.gpr[16] + static_cast<std::uint32_t>(0)));
    if (ctx.gpr[3] == 0u) {
    ctx.set_gpr(17, ctx.gpr[17] + static_cast<std::uint32_t>(1));
        goto L_08A9F438;
    }
    goto L_08A9F34C;
L_08A9F34C:
    ctx.set_gpr(31, 0x08A9F354u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0017_entry, 17u, 176u, 0x08848BD0u>(ctx, &aot_mem) && ctx.pc == 0x08A9F354u) goto L_08A9F354;
    return;
L_08A9F354:
    ctx.set_gpr(4, ctx.gpr[2] + 0u);
    ctx.set_gpr(6, ctx.gpr[17] + static_cast<std::uint32_t>(81));
    ctx.set_gpr(5, 0u + static_cast<std::uint32_t>(15));
    ctx.set_gpr(31, 0x08A9F368u);
    ctx.set_gpr(7, 0u + static_cast<std::uint32_t>(1));
    if (rt.invoke_chained_direct<&recomp_unit_0018_entry, 18u, 69u, 0x0884C47Cu>(ctx, &aot_mem) && ctx.pc == 0x08A9F368u) goto L_08A9F368;
    return;
L_08A9F368:
    ctx.set_gpr(31, 0x08A9F370u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0017_entry, 17u, 176u, 0x08848BD0u>(ctx, &aot_mem) && ctx.pc == 0x08A9F370u) goto L_08A9F370;
    return;
L_08A9F370:
    ctx.set_gpr(4, ctx.gpr[2] + 0u);
    ctx.set_gpr(2, 16640u << 16u);
    ctx.fpr[0] = std::bit_cast<float>(ctx.gpr[2]);
    ctx.fpr[1] = std::bit_cast<float>(rt.memory().aot_load32(ctx.gpr[18] + static_cast<std::uint32_t>(4)));
    ctx.set_gpr(3, 16832u << 16u);
    ctx.fpr[2] = std::bit_cast<float>(ctx.gpr[3]);
    ctx.fpr[0] = ctx.fpr[0] + ctx.fpr[1];
    ctx.set_gpr(2, 16512u << 16u);
    ctx.set_gpr(6, ctx.gpr[17] + static_cast<std::uint32_t>(81));
    ctx.set_gpr(5, 0u + static_cast<std::uint32_t>(15));
    ctx.fpr[12] = ctx.fpr[0] - ctx.fpr[2];
    ctx.fpr[1] = std::bit_cast<float>(rt.memory().aot_load32(ctx.gpr[18] + static_cast<std::uint32_t>(8)));
    ctx.fpr[0] = std::bit_cast<float>(ctx.gpr[2]);
    ctx.fpr[0] = ctx.fpr[0] + ctx.fpr[1];
    ctx.set_gpr(31, 0x08A9F3B0u);
    ctx.fpr[13] = ctx.fpr[0] - ctx.fpr[2];
    if (rt.invoke_chained_direct<&recomp_unit_0022_entry, 22u, 828u, 0x0885F288u>(ctx, &aot_mem) && ctx.pc == 0x08A9F3B0u) goto L_08A9F3B0;
    return;
L_08A9F3B0:
    ctx.set_gpr(31, 0x08A9F3B8u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0017_entry, 17u, 176u, 0x08848BD0u>(ctx, &aot_mem) && ctx.pc == 0x08A9F3B8u) goto L_08A9F3B8;
    return;
L_08A9F3B8:
    ctx.set_gpr(4, ctx.gpr[2] + 0u);
    ctx.set_gpr(6, ctx.gpr[17] + static_cast<std::uint32_t>(89));
    ctx.set_gpr(5, 0u + static_cast<std::uint32_t>(15));
    ctx.set_gpr(31, 0x08A9F3CCu);
    ctx.set_gpr(7, 0u + static_cast<std::uint32_t>(1));
    if (rt.invoke_chained_direct<&recomp_unit_0018_entry, 18u, 69u, 0x0884C47Cu>(ctx, &aot_mem) && ctx.pc == 0x08A9F3CCu) goto L_08A9F3CC;
    return;
L_08A9F3CC:
    ctx.set_gpr(31, 0x08A9F3D4u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0017_entry, 17u, 176u, 0x08848BD0u>(ctx, &aot_mem) && ctx.pc == 0x08A9F3D4u) goto L_08A9F3D4;
    return;
L_08A9F3D4:
    ctx.set_gpr(4, ctx.gpr[2] + 0u);
    ctx.set_gpr(2, 16688u << 16u);
    ctx.fpr[0] = std::bit_cast<float>(ctx.gpr[2]);
    ctx.fpr[1] = std::bit_cast<float>(rt.memory().aot_load32(ctx.gpr[18] + static_cast<std::uint32_t>(4)));
    ctx.set_gpr(3, 16832u << 16u);
    ctx.fpr[2] = std::bit_cast<float>(ctx.gpr[3]);
    ctx.fpr[0] = ctx.fpr[0] + ctx.fpr[1];
    ctx.set_gpr(2, 16672u << 16u);
    ctx.set_gpr(6, ctx.gpr[17] + static_cast<std::uint32_t>(89));
    ctx.set_gpr(5, 0u + static_cast<std::uint32_t>(15));
    ctx.fpr[12] = ctx.fpr[0] - ctx.fpr[2];
    ctx.fpr[1] = std::bit_cast<float>(rt.memory().aot_load32(ctx.gpr[18] + static_cast<std::uint32_t>(8)));
    ctx.fpr[0] = std::bit_cast<float>(ctx.gpr[2]);
    ctx.fpr[0] = ctx.fpr[0] + ctx.fpr[1];
    ctx.set_gpr(31, 0x08A9F414u);
    ctx.fpr[13] = ctx.fpr[0] - ctx.fpr[2];
    if (rt.invoke_chained_direct<&recomp_unit_0022_entry, 22u, 828u, 0x0885F288u>(ctx, &aot_mem) && ctx.pc == 0x08A9F414u) goto L_08A9F414;
    return;
L_08A9F414:
    ctx.set_gpr(31, 0x08A9F41Cu);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0017_entry, 17u, 176u, 0x08848BD0u>(ctx, &aot_mem) && ctx.pc == 0x08A9F41Cu) goto L_08A9F41C;
    return;
L_08A9F41C:
    ctx.set_gpr(6, ctx.gpr[17] + static_cast<std::uint32_t>(89));
    ctx.set_gpr(8, ctx.gpr[17] + static_cast<std::uint32_t>(16));
    ctx.set_gpr(4, ctx.gpr[2] + 0u);
    ctx.set_gpr(5, 0u + static_cast<std::uint32_t>(15));
    ctx.set_gpr(31, 0x08A9F434u);
    ctx.set_gpr(7, 0u + static_cast<std::uint32_t>(2));
    if (rt.invoke_chained_direct<&recomp_unit_0041_entry, 41u, 864u, 0x088AB5D0u>(ctx, &aot_mem) && ctx.pc == 0x08A9F434u) goto L_08A9F434;
    return;
L_08A9F434:
    ctx.set_gpr(17, ctx.gpr[17] + static_cast<std::uint32_t>(1));
    goto L_08A9F438;
L_08A9F438:
    ctx.set_gpr(3, static_cast<std::int32_t>(ctx.gpr[17]) < static_cast<std::int32_t>(ctx.gpr[19]) ? 1u : 0u);
    ctx.set_gpr(16, ctx.gpr[16] + static_cast<std::uint32_t>(1));
    { const bool branch_taken = ctx.gpr[3] != 0u;
    ctx.set_gpr(18, ctx.gpr[18] + static_cast<std::uint32_t>(16));
      if (branch_taken) {
          goto L_08A9F340;
      }
      goto L_08A9F448;
    }
L_08A9F448:
    ctx.set_gpr(31, rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(28)));
    goto L_08A9F44C;
L_08A9F44C:
    ctx.set_gpr(19, rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(24)));
    ctx.set_gpr(18, rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(20)));
    ctx.set_gpr(17, rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(16)));
    ctx.set_gpr(16, rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(12)));
    jump_target = ctx.gpr[31];
    ctx.set_gpr(29, ctx.gpr[29] + static_cast<std::uint32_t>(64));
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_08A9F464:
    ctx.set_gpr(29, ctx.gpr[29] + static_cast<std::uint32_t>(-16));
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(12), ctx.gpr[31]);
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(8), ctx.gpr[16]);
    ctx.set_gpr(31, 0x08A9F478u);
    ctx.set_gpr(16, ctx.gpr[4] + 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0017_entry, 17u, 176u, 0x08848BD0u>(ctx, &aot_mem) && ctx.pc == 0x08A9F478u) goto L_08A9F478;
    return;
L_08A9F478:
    ctx.set_gpr(4, ctx.gpr[2] + 0u);
    ctx.set_gpr(5, 0u + static_cast<std::uint32_t>(15));
    ctx.set_gpr(6, 0u + static_cast<std::uint32_t>(97));
    ctx.set_gpr(31, 0x08A9F48Cu);
    ctx.set_gpr(7, 0u + 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0018_entry, 18u, 69u, 0x0884C47Cu>(ctx, &aot_mem) && ctx.pc == 0x08A9F48Cu) goto L_08A9F48C;
    return;
L_08A9F48C:
    ctx.set_gpr(31, 0x08A9F494u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0017_entry, 17u, 176u, 0x08848BD0u>(ctx, &aot_mem) && ctx.pc == 0x08A9F494u) goto L_08A9F494;
    return;
L_08A9F494:
    ctx.set_gpr(4, ctx.gpr[2] + 0u);
    ctx.set_gpr(5, 0u + static_cast<std::uint32_t>(15));
    ctx.set_gpr(6, 0u + static_cast<std::uint32_t>(98));
    ctx.set_gpr(31, 0x08A9F4A8u);
    ctx.set_gpr(7, 0u + 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0018_entry, 18u, 69u, 0x0884C47Cu>(ctx, &aot_mem) && ctx.pc == 0x08A9F4A8u) goto L_08A9F4A8;
    return;
L_08A9F4A8:
    ctx.set_gpr(4, rt.memory().aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(0)));
    ctx.set_gpr(31, 0x08A9F4B4u);
    ctx.set_gpr(5, 0u + 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0164_entry, 164u, 108u, 0x08A947BCu>(ctx, &aot_mem) && ctx.pc == 0x08A9F4B4u) goto L_08A9F4B4;
    return;
L_08A9F4B4:
    ctx.set_gpr(6, rt.memory().aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(15368)));
    ctx.set_gpr(5, ctx.gpr[2] + 0u);
    ctx.set_gpr(31, 0x08A9F4C4u);
    ctx.set_gpr(4, ctx.gpr[16] + 0u);
    goto L_08A9F2B0;
L_08A9F4C4:
    ctx.set_gpr(31, 0x08A9F4CCu);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0017_entry, 17u, 179u, 0x08848BF4u>(ctx, &aot_mem) && ctx.pc == 0x08A9F4CCu) goto L_08A9F4CC;
    return;
L_08A9F4CC:
    ctx.set_gpr(4, ctx.gpr[2] + 0u);
    ctx.set_gpr(31, 0x08A9F4D8u);
    ctx.set_gpr(5, 0u + static_cast<std::uint32_t>(3));
    if (rt.invoke_chained_direct<&recomp_unit_0017_entry, 17u, 943u, 0x0884B7C0u>(ctx, &aot_mem) && ctx.pc == 0x08A9F4D8u) goto L_08A9F4D8;
    return;
L_08A9F4D8:
    { const bool branch_taken = ctx.gpr[2] == 0u;
    // nop
      if (branch_taken) {
          goto L_08A9F588;
      }
      goto L_08A9F4E0;
    }
L_08A9F4E0:
    ctx.set_gpr(31, 0x08A9F4E8u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0017_entry, 17u, 185u, 0x08848C3Cu>(ctx, &aot_mem) && ctx.pc == 0x08A9F4E8u) goto L_08A9F4E8;
    return;
L_08A9F4E8:
    ctx.set_gpr(4, ctx.gpr[2] + 0u);
    ctx.set_gpr(5, 0u + 0u);
    ctx.set_gpr(6, 0u + 0u);
    ctx.set_gpr(31, 0x08A9F4FCu);
    ctx.set_gpr(7, 0u + 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0171_entry, 171u, 403u, 0x08AB179Cu>(ctx, &aot_mem) && ctx.pc == 0x08A9F4FCu) goto L_08A9F4FC;
    return;
L_08A9F4FC:
    ctx.set_gpr(31, 0x08A9F504u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0017_entry, 17u, 176u, 0x08848BD0u>(ctx, &aot_mem) && ctx.pc == 0x08A9F504u) goto L_08A9F504;
    return;
L_08A9F504:
    ctx.set_gpr(4, ctx.gpr[2] + 0u);
    ctx.set_gpr(5, 0u + static_cast<std::uint32_t>(15));
    ctx.set_gpr(6, 0u + static_cast<std::uint32_t>(54));
    ctx.set_gpr(31, 0x08A9F518u);
    ctx.set_gpr(7, 0u + 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0018_entry, 18u, 69u, 0x0884C47Cu>(ctx, &aot_mem) && ctx.pc == 0x08A9F518u) goto L_08A9F518;
    return;
L_08A9F518:
    ctx.set_gpr(31, 0x08A9F520u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0017_entry, 17u, 176u, 0x08848BD0u>(ctx, &aot_mem) && ctx.pc == 0x08A9F520u) goto L_08A9F520;
    return;
L_08A9F520:
    ctx.set_gpr(4, ctx.gpr[2] + 0u);
    ctx.set_gpr(5, 0u + static_cast<std::uint32_t>(15));
    ctx.set_gpr(6, 0u + static_cast<std::uint32_t>(52));
    ctx.set_gpr(31, 0x08A9F534u);
    ctx.set_gpr(7, 0u + 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0018_entry, 18u, 69u, 0x0884C47Cu>(ctx, &aot_mem) && ctx.pc == 0x08A9F534u) goto L_08A9F534;
    return;
L_08A9F534:
    ctx.set_gpr(31, 0x08A9F53Cu);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0017_entry, 17u, 176u, 0x08848BD0u>(ctx, &aot_mem) && ctx.pc == 0x08A9F53Cu) goto L_08A9F53C;
    return;
L_08A9F53C:
    ctx.set_gpr(4, ctx.gpr[2] + 0u);
    ctx.set_gpr(5, 0u + static_cast<std::uint32_t>(15));
    ctx.set_gpr(6, 0u + static_cast<std::uint32_t>(53));
    ctx.set_gpr(31, 0x08A9F550u);
    ctx.set_gpr(7, 0u + 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0018_entry, 18u, 69u, 0x0884C47Cu>(ctx, &aot_mem) && ctx.pc == 0x08A9F550u) goto L_08A9F550;
    return;
L_08A9F550:
    ctx.set_gpr(2, rt.memory().aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(15408)));
    ctx.set_gpr(4, ctx.gpr[16] + 0u);
    ctx.set_gpr(5, ctx.gpr[2] + static_cast<std::uint32_t>(-1));
    ctx.set_gpr(31, 0x08A9F564u);
    rt.memory().aot_store32(ctx.gpr[16] + static_cast<std::uint32_t>(15408), ctx.gpr[5]);
    goto L_08A9FDB0;
L_08A9F564:
    ctx.set_gpr(4, rt.memory().aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(0)));
    ctx.set_gpr(31, 0x08A9F570u);
    ctx.set_gpr(5, 0u + 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0164_entry, 164u, 108u, 0x08A947BCu>(ctx, &aot_mem) && ctx.pc == 0x08A9F570u) goto L_08A9F570;
    return;
L_08A9F570:
    ctx.set_gpr(6, rt.memory().aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(15368)));
    ctx.set_gpr(5, ctx.gpr[2] + 0u);
    ctx.set_gpr(31, 0x08A9F580u);
    ctx.set_gpr(4, ctx.gpr[16] + 0u);
    goto L_08A9F2B0;
L_08A9F580:
    { const bool branch_taken = 0u == 0u;
    ctx.set_gpr(2, 0u + 0u);
      if (branch_taken) {
          goto L_08A9F914;
      }
      goto L_08A9F588;
    }
L_08A9F588:
    ctx.set_gpr(31, 0x08A9F590u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0017_entry, 17u, 179u, 0x08848BF4u>(ctx, &aot_mem) && ctx.pc == 0x08A9F590u) goto L_08A9F590;
    return;
L_08A9F590:
    ctx.set_gpr(4, ctx.gpr[2] + 0u);
    ctx.set_gpr(31, 0x08A9F59Cu);
    ctx.set_gpr(5, 0u + static_cast<std::uint32_t>(2));
    if (rt.invoke_chained_direct<&recomp_unit_0017_entry, 17u, 943u, 0x0884B7C0u>(ctx, &aot_mem) && ctx.pc == 0x08A9F59Cu) goto L_08A9F59C;
    return;
L_08A9F59C:
    { const bool branch_taken = ctx.gpr[2] != 0u;
    // nop
      if (branch_taken) {
          goto L_08A9F5C0;
      }
      goto L_08A9F5A4;
    }
L_08A9F5A4:
    ctx.set_gpr(31, 0x08A9F5ACu);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0017_entry, 17u, 179u, 0x08848BF4u>(ctx, &aot_mem) && ctx.pc == 0x08A9F5ACu) goto L_08A9F5AC;
    return;
L_08A9F5AC:
    ctx.set_gpr(4, ctx.gpr[2] + 0u);
    ctx.set_gpr(31, 0x08A9F5B8u);
    ctx.set_gpr(5, 0u + static_cast<std::uint32_t>(8));
    if (rt.invoke_chained_direct<&recomp_unit_0017_entry, 17u, 943u, 0x0884B7C0u>(ctx, &aot_mem) && ctx.pc == 0x08A9F5B8u) goto L_08A9F5B8;
    return;
L_08A9F5B8:
    { const bool branch_taken = ctx.gpr[2] == 0u;
    // nop
      if (branch_taken) {
          goto L_08A9F6BC;
      }
      goto L_08A9F5C0;
    }
L_08A9F5C0:
    ctx.set_gpr(31, 0x08A9F5C8u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0017_entry, 17u, 185u, 0x08848C3Cu>(ctx, &aot_mem) && ctx.pc == 0x08A9F5C8u) goto L_08A9F5C8;
    return;
L_08A9F5C8:
    ctx.set_gpr(4, ctx.gpr[2] + 0u);
    ctx.set_gpr(5, 0u + 0u);
    ctx.set_gpr(6, 0u + 0u);
    ctx.set_gpr(31, 0x08A9F5DCu);
    ctx.set_gpr(7, 0u + 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0171_entry, 171u, 403u, 0x08AB179Cu>(ctx, &aot_mem) && ctx.pc == 0x08A9F5DCu) goto L_08A9F5DC;
    return;
L_08A9F5DC:
    ctx.set_gpr(31, 0x08A9F5E4u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0017_entry, 17u, 176u, 0x08848BD0u>(ctx, &aot_mem) && ctx.pc == 0x08A9F5E4u) goto L_08A9F5E4;
    return;
L_08A9F5E4:
    ctx.set_gpr(4, ctx.gpr[2] + 0u);
    ctx.set_gpr(5, 0u + static_cast<std::uint32_t>(15));
    ctx.set_gpr(6, 0u + static_cast<std::uint32_t>(54));
    ctx.set_gpr(31, 0x08A9F5F8u);
    ctx.set_gpr(7, 0u + 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0018_entry, 18u, 69u, 0x0884C47Cu>(ctx, &aot_mem) && ctx.pc == 0x08A9F5F8u) goto L_08A9F5F8;
    return;
L_08A9F5F8:
    ctx.set_gpr(31, 0x08A9F600u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0017_entry, 17u, 176u, 0x08848BD0u>(ctx, &aot_mem) && ctx.pc == 0x08A9F600u) goto L_08A9F600;
    return;
L_08A9F600:
    ctx.set_gpr(4, ctx.gpr[2] + 0u);
    ctx.set_gpr(5, 0u + static_cast<std::uint32_t>(15));
    ctx.set_gpr(6, 0u + static_cast<std::uint32_t>(52));
    ctx.set_gpr(31, 0x08A9F614u);
    ctx.set_gpr(7, 0u + 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0018_entry, 18u, 69u, 0x0884C47Cu>(ctx, &aot_mem) && ctx.pc == 0x08A9F614u) goto L_08A9F614;
    return;
L_08A9F614:
    ctx.set_gpr(31, 0x08A9F61Cu);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0017_entry, 17u, 176u, 0x08848BD0u>(ctx, &aot_mem) && ctx.pc == 0x08A9F61Cu) goto L_08A9F61C;
    return;
L_08A9F61C:
    ctx.set_gpr(4, ctx.gpr[2] + 0u);
    ctx.set_gpr(5, 0u + static_cast<std::uint32_t>(15));
    ctx.set_gpr(6, 0u + static_cast<std::uint32_t>(53));
    ctx.set_gpr(31, 0x08A9F630u);
    ctx.set_gpr(7, 0u + 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0018_entry, 18u, 69u, 0x0884C47Cu>(ctx, &aot_mem) && ctx.pc == 0x08A9F630u) goto L_08A9F630;
    return;
L_08A9F630:
    ctx.set_gpr(31, 0x08A9F638u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0017_entry, 17u, 176u, 0x08848BD0u>(ctx, &aot_mem) && ctx.pc == 0x08A9F638u) goto L_08A9F638;
    return;
L_08A9F638:
    ctx.set_gpr(4, ctx.gpr[2] + 0u);
    ctx.set_gpr(5, 0u + static_cast<std::uint32_t>(15));
    ctx.set_gpr(6, 0u + static_cast<std::uint32_t>(97));
    ctx.set_gpr(31, 0x08A9F64Cu);
    ctx.set_gpr(7, 0u + static_cast<std::uint32_t>(1));
    if (rt.invoke_chained_direct<&recomp_unit_0018_entry, 18u, 69u, 0x0884C47Cu>(ctx, &aot_mem) && ctx.pc == 0x08A9F64Cu) goto L_08A9F64C;
    return;
L_08A9F64C:
    ctx.set_gpr(31, 0x08A9F654u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0017_entry, 17u, 176u, 0x08848BD0u>(ctx, &aot_mem) && ctx.pc == 0x08A9F654u) goto L_08A9F654;
    return;
L_08A9F654:
    ctx.set_gpr(4, ctx.gpr[2] + 0u);
    ctx.set_gpr(5, 0u + static_cast<std::uint32_t>(15));
    ctx.set_gpr(6, 0u + static_cast<std::uint32_t>(98));
    ctx.set_gpr(31, 0x08A9F668u);
    ctx.set_gpr(7, 0u + static_cast<std::uint32_t>(1));
    if (rt.invoke_chained_direct<&recomp_unit_0018_entry, 18u, 69u, 0x0884C47Cu>(ctx, &aot_mem) && ctx.pc == 0x08A9F668u) goto L_08A9F668;
    return;
L_08A9F668:
    ctx.set_gpr(2, rt.memory().aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(15408)));
    ctx.set_gpr(4, ctx.gpr[16] + 0u);
    ctx.set_gpr(5, ctx.gpr[2] + static_cast<std::uint32_t>(-2));
    ctx.set_gpr(31, 0x08A9F67Cu);
    rt.memory().aot_store32(ctx.gpr[16] + static_cast<std::uint32_t>(15408), ctx.gpr[5]);
    goto L_08A9FDB0;
L_08A9F67C:
    ctx.set_gpr(31, 0x08A9F684u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0017_entry, 17u, 176u, 0x08848BD0u>(ctx, &aot_mem) && ctx.pc == 0x08A9F684u) goto L_08A9F684;
    return;
L_08A9F684:
    ctx.set_gpr(4, ctx.gpr[2] + 0u);
    ctx.set_gpr(5, 0u + static_cast<std::uint32_t>(15));
    ctx.set_gpr(6, 0u + static_cast<std::uint32_t>(101));
    ctx.set_gpr(31, 0x08A9F698u);
    ctx.set_gpr(7, 0u + 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0018_entry, 18u, 69u, 0x0884C47Cu>(ctx, &aot_mem) && ctx.pc == 0x08A9F698u) goto L_08A9F698;
    return;
L_08A9F698:
    ctx.set_gpr(4, rt.memory().aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(0)));
    ctx.set_gpr(31, 0x08A9F6A4u);
    ctx.set_gpr(5, 0u + 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0164_entry, 164u, 108u, 0x08A947BCu>(ctx, &aot_mem) && ctx.pc == 0x08A9F6A4u) goto L_08A9F6A4;
    return;
L_08A9F6A4:
    ctx.set_gpr(6, rt.memory().aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(15368)));
    ctx.set_gpr(5, ctx.gpr[2] + 0u);
    ctx.set_gpr(31, 0x08A9F6B4u);
    ctx.set_gpr(4, ctx.gpr[16] + 0u);
    goto L_08A9F2B0;
L_08A9F6B4:
    { const bool branch_taken = 0u == 0u;
    rt.memory().aot_store8(ctx.gpr[16] + static_cast<std::uint32_t>(15390), static_cast<std::uint8_t>(0u));
      if (branch_taken) {
          goto L_08A9F910;
      }
      goto L_08A9F6BC;
    }
L_08A9F6BC:
    ctx.set_gpr(31, 0x08A9F6C4u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0017_entry, 17u, 179u, 0x08848BF4u>(ctx, &aot_mem) && ctx.pc == 0x08A9F6C4u) goto L_08A9F6C4;
    return;
L_08A9F6C4:
    ctx.set_gpr(4, ctx.gpr[2] + 0u);
    ctx.set_gpr(31, 0x08A9F6D0u);
    ctx.set_gpr(5, 0u + static_cast<std::uint32_t>(7));
    if (rt.invoke_chained_direct<&recomp_unit_0017_entry, 17u, 943u, 0x0884B7C0u>(ctx, &aot_mem) && ctx.pc == 0x08A9F6D0u) goto L_08A9F6D0;
    return;
L_08A9F6D0:
    { const bool branch_taken = ctx.gpr[2] == 0u;
    // nop
      if (branch_taken) {
          goto L_08A9F7A0;
      }
      goto L_08A9F6D8;
    }
L_08A9F6D8:
    ctx.set_gpr(31, 0x08A9F6E0u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0017_entry, 17u, 185u, 0x08848C3Cu>(ctx, &aot_mem) && ctx.pc == 0x08A9F6E0u) goto L_08A9F6E0;
    return;
L_08A9F6E0:
    ctx.set_gpr(4, ctx.gpr[2] + 0u);
    ctx.set_gpr(5, 0u + static_cast<std::uint32_t>(1));
    ctx.set_gpr(6, 0u + 0u);
    ctx.set_gpr(31, 0x08A9F6F4u);
    ctx.set_gpr(7, 0u + 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0171_entry, 171u, 403u, 0x08AB179Cu>(ctx, &aot_mem) && ctx.pc == 0x08A9F6F4u) goto L_08A9F6F4;
    return;
L_08A9F6F4:
    ctx.set_gpr(31, 0x08A9F6FCu);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0017_entry, 17u, 176u, 0x08848BD0u>(ctx, &aot_mem) && ctx.pc == 0x08A9F6FCu) goto L_08A9F6FC;
    return;
L_08A9F6FC:
    ctx.set_gpr(4, ctx.gpr[2] + 0u);
    ctx.set_gpr(5, 0u + static_cast<std::uint32_t>(15));
    ctx.set_gpr(6, 0u + static_cast<std::uint32_t>(54));
    ctx.set_gpr(31, 0x08A9F710u);
    ctx.set_gpr(7, 0u + 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0018_entry, 18u, 69u, 0x0884C47Cu>(ctx, &aot_mem) && ctx.pc == 0x08A9F710u) goto L_08A9F710;
    return;
L_08A9F710:
    ctx.set_gpr(31, 0x08A9F718u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0017_entry, 17u, 176u, 0x08848BD0u>(ctx, &aot_mem) && ctx.pc == 0x08A9F718u) goto L_08A9F718;
    return;
L_08A9F718:
    ctx.set_gpr(4, ctx.gpr[2] + 0u);
    ctx.set_gpr(5, 0u + static_cast<std::uint32_t>(15));
    ctx.set_gpr(6, 0u + static_cast<std::uint32_t>(52));
    ctx.set_gpr(31, 0x08A9F72Cu);
    ctx.set_gpr(7, 0u + 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0018_entry, 18u, 69u, 0x0884C47Cu>(ctx, &aot_mem) && ctx.pc == 0x08A9F72Cu) goto L_08A9F72C;
    return;
L_08A9F72C:
    ctx.set_gpr(31, 0x08A9F734u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0017_entry, 17u, 176u, 0x08848BD0u>(ctx, &aot_mem) && ctx.pc == 0x08A9F734u) goto L_08A9F734;
    return;
L_08A9F734:
    ctx.set_gpr(4, ctx.gpr[2] + 0u);
    ctx.set_gpr(5, 0u + static_cast<std::uint32_t>(15));
    ctx.set_gpr(6, 0u + static_cast<std::uint32_t>(53));
    ctx.set_gpr(31, 0x08A9F748u);
    ctx.set_gpr(7, 0u + 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0018_entry, 18u, 69u, 0x0884C47Cu>(ctx, &aot_mem) && ctx.pc == 0x08A9F748u) goto L_08A9F748;
    return;
L_08A9F748:
    ctx.set_gpr(2, 0u + static_cast<std::uint32_t>(-1));
    rt.memory().aot_store32(ctx.gpr[16] + static_cast<std::uint32_t>(15368), ctx.gpr[2]);
    rt.memory().aot_store32(ctx.gpr[16] + static_cast<std::uint32_t>(15392), 0u);
    rt.memory().aot_store32(ctx.gpr[16] + static_cast<std::uint32_t>(15396), 0u);
    ctx.set_gpr(2, 0u + static_cast<std::uint32_t>(1));
    ctx.set_gpr(31, 0x08A9F764u);
    rt.memory().aot_store32(ctx.gpr[16] + static_cast<std::uint32_t>(15400), ctx.gpr[2]);
    if (rt.invoke_chained_direct<&recomp_unit_0017_entry, 17u, 192u, 0x08848C90u>(ctx, &aot_mem) && ctx.pc == 0x08A9F764u) goto L_08A9F764;
    return;
L_08A9F764:
    ctx.set_gpr(31, 0x08A9F76Cu);
    ctx.set_gpr(4, ctx.gpr[2] + 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0191_entry, 191u, 489u, 0x08B025FCu>(ctx, &aot_mem) && ctx.pc == 0x08A9F76Cu) goto L_08A9F76C;
    return;
L_08A9F76C:
    ctx.set_gpr(31, 0x08A9F774u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0017_entry, 17u, 192u, 0x08848C90u>(ctx, &aot_mem) && ctx.pc == 0x08A9F774u) goto L_08A9F774;
    return;
L_08A9F774:
    ctx.set_gpr(31, 0x08A9F77Cu);
    ctx.set_gpr(4, ctx.gpr[2] + 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0191_entry, 191u, 505u, 0x08B026F8u>(ctx, &aot_mem) && ctx.pc == 0x08A9F77Cu) goto L_08A9F77C;
    return;
L_08A9F77C:
    if (ctx.gpr[2] != 0u) {
    rt.memory().aot_store8(ctx.gpr[16] + static_cast<std::uint32_t>(15424), static_cast<std::uint8_t>(0u));
        goto L_08A9F798;
    }
    goto L_08A9F784;
L_08A9F784:
    ctx.set_gpr(31, 0x08A9F78Cu);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0017_entry, 17u, 192u, 0x08848C90u>(ctx, &aot_mem) && ctx.pc == 0x08A9F78Cu) goto L_08A9F78C;
    return;
L_08A9F78C:
    ctx.set_gpr(31, 0x08A9F794u);
    ctx.set_gpr(4, ctx.gpr[2] + 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0191_entry, 191u, 442u, 0x08B02224u>(ctx, &aot_mem) && ctx.pc == 0x08A9F794u) goto L_08A9F794;
    return;
L_08A9F794:
    rt.memory().aot_store8(ctx.gpr[16] + static_cast<std::uint32_t>(15424), static_cast<std::uint8_t>(0u));
    goto L_08A9F798;
L_08A9F798:
    { const bool branch_taken = 0u == 0u;
    ctx.set_gpr(2, 0u + static_cast<std::uint32_t>(1));
      if (branch_taken) {
          goto L_08A9F914;
      }
      goto L_08A9F7A0;
    }
L_08A9F7A0:
    ctx.set_gpr(31, 0x08A9F7A8u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0017_entry, 17u, 179u, 0x08848BF4u>(ctx, &aot_mem) && ctx.pc == 0x08A9F7A8u) goto L_08A9F7A8;
    return;
L_08A9F7A8:
    ctx.set_gpr(4, ctx.gpr[2] + 0u);
    ctx.set_gpr(31, 0x08A9F7B4u);
    ctx.set_gpr(5, 0u + static_cast<std::uint32_t>(1));
    if (rt.invoke_chained_direct<&recomp_unit_0017_entry, 17u, 943u, 0x0884B7C0u>(ctx, &aot_mem) && ctx.pc == 0x08A9F7B4u) goto L_08A9F7B4;
    return;
L_08A9F7B4:
    { const bool branch_taken = ctx.gpr[2] == 0u;
    // nop
      if (branch_taken) {
          goto L_08A9F884;
      }
      goto L_08A9F7BC;
    }
L_08A9F7BC:
    ctx.set_gpr(31, 0x08A9F7C4u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0017_entry, 17u, 185u, 0x08848C3Cu>(ctx, &aot_mem) && ctx.pc == 0x08A9F7C4u) goto L_08A9F7C4;
    return;
L_08A9F7C4:
    ctx.set_gpr(4, ctx.gpr[2] + 0u);
    ctx.set_gpr(5, 0u + static_cast<std::uint32_t>(2));
    ctx.set_gpr(6, 0u + 0u);
    ctx.set_gpr(31, 0x08A9F7D8u);
    ctx.set_gpr(7, 0u + 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0171_entry, 171u, 403u, 0x08AB179Cu>(ctx, &aot_mem) && ctx.pc == 0x08A9F7D8u) goto L_08A9F7D8;
    return;
L_08A9F7D8:
    ctx.set_gpr(31, 0x08A9F7E0u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0017_entry, 17u, 176u, 0x08848BD0u>(ctx, &aot_mem) && ctx.pc == 0x08A9F7E0u) goto L_08A9F7E0;
    return;
L_08A9F7E0:
    ctx.set_gpr(4, ctx.gpr[2] + 0u);
    ctx.set_gpr(5, 0u + static_cast<std::uint32_t>(15));
    ctx.set_gpr(6, 0u + static_cast<std::uint32_t>(54));
    ctx.set_gpr(31, 0x08A9F7F4u);
    ctx.set_gpr(7, 0u + 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0018_entry, 18u, 69u, 0x0884C47Cu>(ctx, &aot_mem) && ctx.pc == 0x08A9F7F4u) goto L_08A9F7F4;
    return;
L_08A9F7F4:
    ctx.set_gpr(31, 0x08A9F7FCu);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0017_entry, 17u, 176u, 0x08848BD0u>(ctx, &aot_mem) && ctx.pc == 0x08A9F7FCu) goto L_08A9F7FC;
    return;
L_08A9F7FC:
    ctx.set_gpr(4, ctx.gpr[2] + 0u);
    ctx.set_gpr(5, 0u + static_cast<std::uint32_t>(15));
    ctx.set_gpr(6, 0u + static_cast<std::uint32_t>(52));
    ctx.set_gpr(31, 0x08A9F810u);
    ctx.set_gpr(7, 0u + 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0018_entry, 18u, 69u, 0x0884C47Cu>(ctx, &aot_mem) && ctx.pc == 0x08A9F810u) goto L_08A9F810;
    return;
L_08A9F810:
    ctx.set_gpr(31, 0x08A9F818u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0017_entry, 17u, 176u, 0x08848BD0u>(ctx, &aot_mem) && ctx.pc == 0x08A9F818u) goto L_08A9F818;
    return;
L_08A9F818:
    ctx.set_gpr(4, ctx.gpr[2] + 0u);
    ctx.set_gpr(5, 0u + static_cast<std::uint32_t>(15));
    ctx.set_gpr(6, 0u + static_cast<std::uint32_t>(53));
    ctx.set_gpr(31, 0x08A9F82Cu);
    ctx.set_gpr(7, 0u + 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0018_entry, 18u, 69u, 0x0884C47Cu>(ctx, &aot_mem) && ctx.pc == 0x08A9F82Cu) goto L_08A9F82C;
    return;
L_08A9F82C:
    ctx.set_gpr(2, 0u + static_cast<std::uint32_t>(-1));
    rt.memory().aot_store32(ctx.gpr[16] + static_cast<std::uint32_t>(15368), ctx.gpr[2]);
    rt.memory().aot_store32(ctx.gpr[16] + static_cast<std::uint32_t>(15392), 0u);
    rt.memory().aot_store32(ctx.gpr[16] + static_cast<std::uint32_t>(15396), 0u);
    ctx.set_gpr(2, 0u + static_cast<std::uint32_t>(1));
    ctx.set_gpr(31, 0x08A9F848u);
    rt.memory().aot_store32(ctx.gpr[16] + static_cast<std::uint32_t>(15400), ctx.gpr[2]);
    if (rt.invoke_chained_direct<&recomp_unit_0017_entry, 17u, 192u, 0x08848C90u>(ctx, &aot_mem) && ctx.pc == 0x08A9F848u) goto L_08A9F848;
    return;
L_08A9F848:
    ctx.set_gpr(31, 0x08A9F850u);
    ctx.set_gpr(4, ctx.gpr[2] + 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0191_entry, 191u, 489u, 0x08B025FCu>(ctx, &aot_mem) && ctx.pc == 0x08A9F850u) goto L_08A9F850;
    return;
L_08A9F850:
    ctx.set_gpr(31, 0x08A9F858u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0017_entry, 17u, 192u, 0x08848C90u>(ctx, &aot_mem) && ctx.pc == 0x08A9F858u) goto L_08A9F858;
    return;
L_08A9F858:
    ctx.set_gpr(31, 0x08A9F860u);
    ctx.set_gpr(4, ctx.gpr[2] + 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0191_entry, 191u, 505u, 0x08B026F8u>(ctx, &aot_mem) && ctx.pc == 0x08A9F860u) goto L_08A9F860;
    return;
L_08A9F860:
    if (ctx.gpr[2] != 0u) {
    rt.memory().aot_store8(ctx.gpr[16] + static_cast<std::uint32_t>(15424), static_cast<std::uint8_t>(0u));
        goto L_08A9F87C;
    }
    goto L_08A9F868;
L_08A9F868:
    ctx.set_gpr(31, 0x08A9F870u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0017_entry, 17u, 192u, 0x08848C90u>(ctx, &aot_mem) && ctx.pc == 0x08A9F870u) goto L_08A9F870;
    return;
L_08A9F870:
    ctx.set_gpr(31, 0x08A9F878u);
    ctx.set_gpr(4, ctx.gpr[2] + 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0191_entry, 191u, 442u, 0x08B02224u>(ctx, &aot_mem) && ctx.pc == 0x08A9F878u) goto L_08A9F878;
    return;
L_08A9F878:
    rt.memory().aot_store8(ctx.gpr[16] + static_cast<std::uint32_t>(15424), static_cast<std::uint8_t>(0u));
    goto L_08A9F87C;
L_08A9F87C:
    { const bool branch_taken = 0u == 0u;
    ctx.set_gpr(2, 0u + static_cast<std::uint32_t>(1));
      if (branch_taken) {
          goto L_08A9F914;
      }
      goto L_08A9F884;
    }
L_08A9F884:
    ctx.set_gpr(31, 0x08A9F88Cu);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0017_entry, 17u, 179u, 0x08848BF4u>(ctx, &aot_mem) && ctx.pc == 0x08A9F88Cu) goto L_08A9F88C;
    return;
L_08A9F88C:
    ctx.set_gpr(4, ctx.gpr[2] + 0u);
    ctx.set_gpr(31, 0x08A9F898u);
    ctx.set_gpr(5, 0u + 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0017_entry, 17u, 943u, 0x0884B7C0u>(ctx, &aot_mem) && ctx.pc == 0x08A9F898u) goto L_08A9F898;
    return;
L_08A9F898:
    { const bool branch_taken = ctx.gpr[2] == 0u;
    // nop
      if (branch_taken) {
          goto L_08A9F910;
      }
      goto L_08A9F8A0;
    }
L_08A9F8A0:
    ctx.set_gpr(31, 0x08A9F8A8u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0017_entry, 17u, 185u, 0x08848C3Cu>(ctx, &aot_mem) && ctx.pc == 0x08A9F8A8u) goto L_08A9F8A8;
    return;
L_08A9F8A8:
    ctx.set_gpr(4, ctx.gpr[2] + 0u);
    ctx.set_gpr(5, 0u + static_cast<std::uint32_t>(1));
    ctx.set_gpr(6, 0u + 0u);
    ctx.set_gpr(31, 0x08A9F8BCu);
    ctx.set_gpr(7, 0u + 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0171_entry, 171u, 403u, 0x08AB179Cu>(ctx, &aot_mem) && ctx.pc == 0x08A9F8BCu) goto L_08A9F8BC;
    return;
L_08A9F8BC:
    ctx.set_gpr(6, rt.memory().aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(15368)));
    ctx.set_gpr(4, ctx.gpr[16] + 0u);
    ctx.set_gpr(31, 0x08A9F8CCu);
    ctx.set_gpr(5, 0u + static_cast<std::uint32_t>(1));
    if (rt.invoke_chained_direct<&recomp_unit_0168_entry, 168u, 693u, 0x08AA6968u>(ctx, &aot_mem) && ctx.pc == 0x08A9F8CCu) goto L_08A9F8CC;
    return;
L_08A9F8CC:
    ctx.set_gpr(31, 0x08A9F8D4u);
    rt.memory().aot_store8(ctx.gpr[16] + static_cast<std::uint32_t>(15389), static_cast<std::uint8_t>(0u));
    if (rt.invoke_chained_direct<&recomp_unit_0017_entry, 17u, 192u, 0x08848C90u>(ctx, &aot_mem) && ctx.pc == 0x08A9F8D4u) goto L_08A9F8D4;
    return;
L_08A9F8D4:
    ctx.set_gpr(31, 0x08A9F8DCu);
    ctx.set_gpr(4, ctx.gpr[2] + 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0191_entry, 191u, 489u, 0x08B025FCu>(ctx, &aot_mem) && ctx.pc == 0x08A9F8DCu) goto L_08A9F8DC;
    return;
L_08A9F8DC:
    ctx.set_gpr(31, 0x08A9F8E4u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0017_entry, 17u, 192u, 0x08848C90u>(ctx, &aot_mem) && ctx.pc == 0x08A9F8E4u) goto L_08A9F8E4;
    return;
L_08A9F8E4:
    ctx.set_gpr(31, 0x08A9F8ECu);
    ctx.set_gpr(4, ctx.gpr[2] + 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0191_entry, 191u, 505u, 0x08B026F8u>(ctx, &aot_mem) && ctx.pc == 0x08A9F8ECu) goto L_08A9F8EC;
    return;
L_08A9F8EC:
    if (ctx.gpr[2] != 0u) {
    ctx.set_gpr(2, 0u + static_cast<std::uint32_t>(1));
        goto L_08A9F908;
    }
    goto L_08A9F8F4;
L_08A9F8F4:
    ctx.set_gpr(31, 0x08A9F8FCu);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0017_entry, 17u, 192u, 0x08848C90u>(ctx, &aot_mem) && ctx.pc == 0x08A9F8FCu) goto L_08A9F8FC;
    return;
L_08A9F8FC:
    ctx.set_gpr(31, 0x08A9F904u);
    ctx.set_gpr(4, ctx.gpr[2] + 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0191_entry, 191u, 442u, 0x08B02224u>(ctx, &aot_mem) && ctx.pc == 0x08A9F904u) goto L_08A9F904;
    return;
L_08A9F904:
    ctx.set_gpr(2, 0u + static_cast<std::uint32_t>(1));
    goto L_08A9F908;
L_08A9F908:
    { const bool branch_taken = 0u == 0u;
    rt.memory().aot_store8(ctx.gpr[16] + static_cast<std::uint32_t>(15424), static_cast<std::uint8_t>(ctx.gpr[2]));
      if (branch_taken) {
          goto L_08A9F914;
      }
      goto L_08A9F910;
    }
L_08A9F910:
    ctx.set_gpr(2, 0u + 0u);
    goto L_08A9F914;
L_08A9F914:
    ctx.set_gpr(31, rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(12)));
    ctx.set_gpr(16, rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(8)));
    jump_target = ctx.gpr[31];
    ctx.set_gpr(29, ctx.gpr[29] + static_cast<std::uint32_t>(16));
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_08A9F924:
    ctx.set_gpr(29, ctx.gpr[29] + static_cast<std::uint32_t>(-16));
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(12), ctx.gpr[31]);
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(8), ctx.gpr[16]);
    ctx.set_gpr(31, 0x08A9F938u);
    ctx.set_gpr(16, ctx.gpr[4] + 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0017_entry, 17u, 176u, 0x08848BD0u>(ctx, &aot_mem) && ctx.pc == 0x08A9F938u) goto L_08A9F938;
    return;
L_08A9F938:
    ctx.set_gpr(4, ctx.gpr[2] + 0u);
    ctx.set_gpr(5, 0u + static_cast<std::uint32_t>(15));
    ctx.set_gpr(6, 0u + static_cast<std::uint32_t>(97));
    ctx.set_gpr(31, 0x08A9F94Cu);
    ctx.set_gpr(7, 0u + 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0018_entry, 18u, 69u, 0x0884C47Cu>(ctx, &aot_mem) && ctx.pc == 0x08A9F94Cu) goto L_08A9F94C;
    return;
L_08A9F94C:
    ctx.set_gpr(31, 0x08A9F954u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0017_entry, 17u, 176u, 0x08848BD0u>(ctx, &aot_mem) && ctx.pc == 0x08A9F954u) goto L_08A9F954;
    return;
L_08A9F954:
    ctx.set_gpr(4, ctx.gpr[2] + 0u);
    ctx.set_gpr(5, 0u + static_cast<std::uint32_t>(15));
    ctx.set_gpr(6, 0u + static_cast<std::uint32_t>(98));
    ctx.set_gpr(31, 0x08A9F968u);
    ctx.set_gpr(7, 0u + 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0018_entry, 18u, 69u, 0x0884C47Cu>(ctx, &aot_mem) && ctx.pc == 0x08A9F968u) goto L_08A9F968;
    return;
L_08A9F968:
    ctx.set_gpr(4, rt.memory().aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(0)));
    ctx.set_gpr(31, 0x08A9F974u);
    ctx.set_gpr(5, 0u + 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0164_entry, 164u, 108u, 0x08A947BCu>(ctx, &aot_mem) && ctx.pc == 0x08A9F974u) goto L_08A9F974;
    return;
L_08A9F974:
    ctx.set_gpr(6, rt.memory().aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(15368)));
    ctx.set_gpr(5, ctx.gpr[2] + 0u);
    ctx.set_gpr(31, 0x08A9F984u);
    ctx.set_gpr(4, ctx.gpr[16] + 0u);
    goto L_08A9F2B0;
L_08A9F984:
    ctx.set_gpr(31, 0x08A9F98Cu);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0017_entry, 17u, 179u, 0x08848BF4u>(ctx, &aot_mem) && ctx.pc == 0x08A9F98Cu) goto L_08A9F98C;
    return;
L_08A9F98C:
    ctx.set_gpr(4, ctx.gpr[2] + 0u);
    ctx.set_gpr(31, 0x08A9F998u);
    ctx.set_gpr(5, 0u + static_cast<std::uint32_t>(5));
    if (rt.invoke_chained_direct<&recomp_unit_0017_entry, 17u, 943u, 0x0884B7C0u>(ctx, &aot_mem) && ctx.pc == 0x08A9F998u) goto L_08A9F998;
    return;
L_08A9F998:
    { const bool branch_taken = ctx.gpr[2] == 0u;
    // nop
      if (branch_taken) {
          goto L_08A9FA48;
      }
      goto L_08A9F9A0;
    }
L_08A9F9A0:
    ctx.set_gpr(31, 0x08A9F9A8u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0017_entry, 17u, 185u, 0x08848C3Cu>(ctx, &aot_mem) && ctx.pc == 0x08A9F9A8u) goto L_08A9F9A8;
    return;
L_08A9F9A8:
    ctx.set_gpr(4, ctx.gpr[2] + 0u);
    ctx.set_gpr(5, 0u + 0u);
    ctx.set_gpr(6, 0u + 0u);
    ctx.set_gpr(31, 0x08A9F9BCu);
    ctx.set_gpr(7, 0u + 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0171_entry, 171u, 403u, 0x08AB179Cu>(ctx, &aot_mem) && ctx.pc == 0x08A9F9BCu) goto L_08A9F9BC;
    return;
L_08A9F9BC:
    ctx.set_gpr(31, 0x08A9F9C4u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0017_entry, 17u, 176u, 0x08848BD0u>(ctx, &aot_mem) && ctx.pc == 0x08A9F9C4u) goto L_08A9F9C4;
    return;
L_08A9F9C4:
    ctx.set_gpr(4, ctx.gpr[2] + 0u);
    ctx.set_gpr(5, 0u + static_cast<std::uint32_t>(15));
    ctx.set_gpr(6, 0u + static_cast<std::uint32_t>(54));
    ctx.set_gpr(31, 0x08A9F9D8u);
    ctx.set_gpr(7, 0u + 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0018_entry, 18u, 69u, 0x0884C47Cu>(ctx, &aot_mem) && ctx.pc == 0x08A9F9D8u) goto L_08A9F9D8;
    return;
L_08A9F9D8:
    ctx.set_gpr(31, 0x08A9F9E0u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0017_entry, 17u, 176u, 0x08848BD0u>(ctx, &aot_mem) && ctx.pc == 0x08A9F9E0u) goto L_08A9F9E0;
    return;
L_08A9F9E0:
    ctx.set_gpr(4, ctx.gpr[2] + 0u);
    ctx.set_gpr(5, 0u + static_cast<std::uint32_t>(15));
    ctx.set_gpr(6, 0u + static_cast<std::uint32_t>(52));
    ctx.set_gpr(31, 0x08A9F9F4u);
    ctx.set_gpr(7, 0u + 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0018_entry, 18u, 69u, 0x0884C47Cu>(ctx, &aot_mem) && ctx.pc == 0x08A9F9F4u) goto L_08A9F9F4;
    return;
L_08A9F9F4:
    ctx.set_gpr(31, 0x08A9F9FCu);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0017_entry, 17u, 176u, 0x08848BD0u>(ctx, &aot_mem) && ctx.pc == 0x08A9F9FCu) goto L_08A9F9FC;
    return;
L_08A9F9FC:
    ctx.set_gpr(4, ctx.gpr[2] + 0u);
    ctx.set_gpr(5, 0u + static_cast<std::uint32_t>(15));
    ctx.set_gpr(6, 0u + static_cast<std::uint32_t>(53));
    ctx.set_gpr(31, 0x08A9FA10u);
    ctx.set_gpr(7, 0u + 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0018_entry, 18u, 69u, 0x0884C47Cu>(ctx, &aot_mem) && ctx.pc == 0x08A9FA10u) goto L_08A9FA10;
    return;
L_08A9FA10:
    ctx.set_gpr(2, rt.memory().aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(15408)));
    ctx.set_gpr(4, ctx.gpr[16] + 0u);
    ctx.set_gpr(5, ctx.gpr[2] + static_cast<std::uint32_t>(1));
    ctx.set_gpr(31, 0x08A9FA24u);
    rt.memory().aot_store32(ctx.gpr[16] + static_cast<std::uint32_t>(15408), ctx.gpr[5]);
    goto L_08A9FDB0;
L_08A9FA24:
    ctx.set_gpr(4, rt.memory().aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(0)));
    ctx.set_gpr(31, 0x08A9FA30u);
    ctx.set_gpr(5, 0u + 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0164_entry, 164u, 108u, 0x08A947BCu>(ctx, &aot_mem) && ctx.pc == 0x08A9FA30u) goto L_08A9FA30;
    return;
L_08A9FA30:
    ctx.set_gpr(6, rt.memory().aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(15368)));
    ctx.set_gpr(5, ctx.gpr[2] + 0u);
    ctx.set_gpr(31, 0x08A9FA40u);
    ctx.set_gpr(4, ctx.gpr[16] + 0u);
    goto L_08A9F2B0;
L_08A9FA40:
    { const bool branch_taken = 0u == 0u;
    ctx.set_gpr(2, 0u + 0u);
      if (branch_taken) {
          goto L_08A9FD10;
      }
      goto L_08A9FA48;
    }
L_08A9FA48:
    ctx.set_gpr(31, 0x08A9FA50u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0017_entry, 17u, 179u, 0x08848BF4u>(ctx, &aot_mem) && ctx.pc == 0x08A9FA50u) goto L_08A9FA50;
    return;
L_08A9FA50:
    ctx.set_gpr(4, ctx.gpr[2] + 0u);
    ctx.set_gpr(31, 0x08A9FA5Cu);
    ctx.set_gpr(5, 0u + static_cast<std::uint32_t>(7));
    if (rt.invoke_chained_direct<&recomp_unit_0017_entry, 17u, 943u, 0x0884B7C0u>(ctx, &aot_mem) && ctx.pc == 0x08A9FA5Cu) goto L_08A9FA5C;
    return;
L_08A9FA5C:
    { const bool branch_taken = ctx.gpr[2] != 0u;
    // nop
      if (branch_taken) {
          goto L_08A9FA80;
      }
      goto L_08A9FA64;
    }
L_08A9FA64:
    ctx.set_gpr(31, 0x08A9FA6Cu);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0017_entry, 17u, 179u, 0x08848BF4u>(ctx, &aot_mem) && ctx.pc == 0x08A9FA6Cu) goto L_08A9FA6C;
    return;
L_08A9FA6C:
    ctx.set_gpr(4, ctx.gpr[2] + 0u);
    ctx.set_gpr(31, 0x08A9FA78u);
    ctx.set_gpr(5, 0u + 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0017_entry, 17u, 914u, 0x0884B680u>(ctx, &aot_mem) && ctx.pc == 0x08A9FA78u) goto L_08A9FA78;
    return;
L_08A9FA78:
    { const bool branch_taken = ctx.gpr[2] == 0u;
    // nop
      if (branch_taken) {
          goto L_08A9FAF0;
      }
      goto L_08A9FA80;
    }
L_08A9FA80:
    ctx.set_gpr(31, 0x08A9FA88u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0017_entry, 17u, 185u, 0x08848C3Cu>(ctx, &aot_mem) && ctx.pc == 0x08A9FA88u) goto L_08A9FA88;
    return;
L_08A9FA88:
    ctx.set_gpr(4, ctx.gpr[2] + 0u);
    ctx.set_gpr(5, 0u + static_cast<std::uint32_t>(1));
    ctx.set_gpr(6, 0u + 0u);
    ctx.set_gpr(31, 0x08A9FA9Cu);
    ctx.set_gpr(7, 0u + 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0171_entry, 171u, 403u, 0x08AB179Cu>(ctx, &aot_mem) && ctx.pc == 0x08A9FA9Cu) goto L_08A9FA9C;
    return;
L_08A9FA9C:
    ctx.set_gpr(6, rt.memory().aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(15368)));
    ctx.set_gpr(4, ctx.gpr[16] + 0u);
    ctx.set_gpr(31, 0x08A9FAACu);
    ctx.set_gpr(5, 0u + static_cast<std::uint32_t>(1));
    if (rt.invoke_chained_direct<&recomp_unit_0168_entry, 168u, 693u, 0x08AA6968u>(ctx, &aot_mem) && ctx.pc == 0x08A9FAACu) goto L_08A9FAAC;
    return;
L_08A9FAAC:
    ctx.set_gpr(31, 0x08A9FAB4u);
    rt.memory().aot_store8(ctx.gpr[16] + static_cast<std::uint32_t>(15389), static_cast<std::uint8_t>(0u));
    if (rt.invoke_chained_direct<&recomp_unit_0017_entry, 17u, 192u, 0x08848C90u>(ctx, &aot_mem) && ctx.pc == 0x08A9FAB4u) goto L_08A9FAB4;
    return;
L_08A9FAB4:
    ctx.set_gpr(31, 0x08A9FABCu);
    ctx.set_gpr(4, ctx.gpr[2] + 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0191_entry, 191u, 489u, 0x08B025FCu>(ctx, &aot_mem) && ctx.pc == 0x08A9FABCu) goto L_08A9FABC;
    return;
L_08A9FABC:
    ctx.set_gpr(31, 0x08A9FAC4u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0017_entry, 17u, 192u, 0x08848C90u>(ctx, &aot_mem) && ctx.pc == 0x08A9FAC4u) goto L_08A9FAC4;
    return;
L_08A9FAC4:
    ctx.set_gpr(31, 0x08A9FACCu);
    ctx.set_gpr(4, ctx.gpr[2] + 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0191_entry, 191u, 505u, 0x08B026F8u>(ctx, &aot_mem) && ctx.pc == 0x08A9FACCu) goto L_08A9FACC;
    return;
L_08A9FACC:
    if (ctx.gpr[2] != 0u) {
    ctx.set_gpr(2, 0u + static_cast<std::uint32_t>(1));
        goto L_08A9FAE8;
    }
    goto L_08A9FAD4;
L_08A9FAD4:
    ctx.set_gpr(31, 0x08A9FADCu);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0017_entry, 17u, 192u, 0x08848C90u>(ctx, &aot_mem) && ctx.pc == 0x08A9FADCu) goto L_08A9FADC;
    return;
L_08A9FADC:
    ctx.set_gpr(31, 0x08A9FAE4u);
    ctx.set_gpr(4, ctx.gpr[2] + 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0191_entry, 191u, 442u, 0x08B02224u>(ctx, &aot_mem) && ctx.pc == 0x08A9FAE4u) goto L_08A9FAE4;
    return;
L_08A9FAE4:
    ctx.set_gpr(2, 0u + static_cast<std::uint32_t>(1));
    goto L_08A9FAE8;
L_08A9FAE8:
    { const bool branch_taken = 0u == 0u;
    rt.memory().aot_store8(ctx.gpr[16] + static_cast<std::uint32_t>(15424), static_cast<std::uint8_t>(ctx.gpr[2]));
      if (branch_taken) {
          goto L_08A9FD10;
      }
      goto L_08A9FAF0;
    }
L_08A9FAF0:
    ctx.set_gpr(31, 0x08A9FAF8u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0017_entry, 17u, 179u, 0x08848BF4u>(ctx, &aot_mem) && ctx.pc == 0x08A9FAF8u) goto L_08A9FAF8;
    return;
L_08A9FAF8:
    ctx.set_gpr(4, ctx.gpr[2] + 0u);
    ctx.set_gpr(31, 0x08A9FB04u);
    ctx.set_gpr(5, 0u + static_cast<std::uint32_t>(2));
    if (rt.invoke_chained_direct<&recomp_unit_0017_entry, 17u, 914u, 0x0884B680u>(ctx, &aot_mem) && ctx.pc == 0x08A9FB04u) goto L_08A9FB04;
    return;
L_08A9FB04:
    { const bool branch_taken = ctx.gpr[2] != 0u;
    // nop
      if (branch_taken) {
          goto L_08A9FB28;
      }
      goto L_08A9FB0C;
    }
L_08A9FB0C:
    ctx.set_gpr(31, 0x08A9FB14u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0017_entry, 17u, 179u, 0x08848BF4u>(ctx, &aot_mem) && ctx.pc == 0x08A9FB14u) goto L_08A9FB14;
    return;
L_08A9FB14:
    ctx.set_gpr(4, ctx.gpr[2] + 0u);
    ctx.set_gpr(31, 0x08A9FB20u);
    ctx.set_gpr(5, 0u + static_cast<std::uint32_t>(8));
    if (rt.invoke_chained_direct<&recomp_unit_0017_entry, 17u, 914u, 0x0884B680u>(ctx, &aot_mem) && ctx.pc == 0x08A9FB20u) goto L_08A9FB20;
    return;
L_08A9FB20:
    { const bool branch_taken = ctx.gpr[2] == 0u;
    // nop
      if (branch_taken) {
          goto L_08A9FC24;
      }
      goto L_08A9FB28;
    }
L_08A9FB28:
    ctx.set_gpr(31, 0x08A9FB30u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0017_entry, 17u, 185u, 0x08848C3Cu>(ctx, &aot_mem) && ctx.pc == 0x08A9FB30u) goto L_08A9FB30;
    return;
L_08A9FB30:
    ctx.set_gpr(4, ctx.gpr[2] + 0u);
    ctx.set_gpr(5, 0u + 0u);
    ctx.set_gpr(6, 0u + 0u);
    ctx.set_gpr(31, 0x08A9FB44u);
    ctx.set_gpr(7, 0u + 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0171_entry, 171u, 403u, 0x08AB179Cu>(ctx, &aot_mem) && ctx.pc == 0x08A9FB44u) goto L_08A9FB44;
    return;
L_08A9FB44:
    ctx.set_gpr(31, 0x08A9FB4Cu);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0017_entry, 17u, 176u, 0x08848BD0u>(ctx, &aot_mem) && ctx.pc == 0x08A9FB4Cu) goto L_08A9FB4C;
    return;
L_08A9FB4C:
    ctx.set_gpr(4, ctx.gpr[2] + 0u);
    ctx.set_gpr(5, 0u + static_cast<std::uint32_t>(15));
    ctx.set_gpr(6, 0u + static_cast<std::uint32_t>(54));
    ctx.set_gpr(31, 0x08A9FB60u);
    ctx.set_gpr(7, 0u + 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0018_entry, 18u, 69u, 0x0884C47Cu>(ctx, &aot_mem) && ctx.pc == 0x08A9FB60u) goto L_08A9FB60;
    return;
L_08A9FB60:
    ctx.set_gpr(31, 0x08A9FB68u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0017_entry, 17u, 176u, 0x08848BD0u>(ctx, &aot_mem) && ctx.pc == 0x08A9FB68u) goto L_08A9FB68;
    return;
L_08A9FB68:
    ctx.set_gpr(4, ctx.gpr[2] + 0u);
    ctx.set_gpr(5, 0u + static_cast<std::uint32_t>(15));
    ctx.set_gpr(6, 0u + static_cast<std::uint32_t>(52));
    ctx.set_gpr(31, 0x08A9FB7Cu);
    ctx.set_gpr(7, 0u + 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0018_entry, 18u, 69u, 0x0884C47Cu>(ctx, &aot_mem) && ctx.pc == 0x08A9FB7Cu) goto L_08A9FB7C;
    return;
L_08A9FB7C:
    ctx.set_gpr(31, 0x08A9FB84u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0017_entry, 17u, 176u, 0x08848BD0u>(ctx, &aot_mem) && ctx.pc == 0x08A9FB84u) goto L_08A9FB84;
    return;
L_08A9FB84:
    ctx.set_gpr(4, ctx.gpr[2] + 0u);
    ctx.set_gpr(5, 0u + static_cast<std::uint32_t>(15));
    ctx.set_gpr(6, 0u + static_cast<std::uint32_t>(53));
    ctx.set_gpr(31, 0x08A9FB98u);
    ctx.set_gpr(7, 0u + 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0018_entry, 18u, 69u, 0x0884C47Cu>(ctx, &aot_mem) && ctx.pc == 0x08A9FB98u) goto L_08A9FB98;
    return;
L_08A9FB98:
    ctx.set_gpr(31, 0x08A9FBA0u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0017_entry, 17u, 176u, 0x08848BD0u>(ctx, &aot_mem) && ctx.pc == 0x08A9FBA0u) goto L_08A9FBA0;
    return;
L_08A9FBA0:
    ctx.set_gpr(4, ctx.gpr[2] + 0u);
    ctx.set_gpr(5, 0u + static_cast<std::uint32_t>(15));
    ctx.set_gpr(6, 0u + static_cast<std::uint32_t>(97));
    ctx.set_gpr(31, 0x08A9FBB4u);
    ctx.set_gpr(7, 0u + static_cast<std::uint32_t>(1));
    if (rt.invoke_chained_direct<&recomp_unit_0018_entry, 18u, 69u, 0x0884C47Cu>(ctx, &aot_mem) && ctx.pc == 0x08A9FBB4u) goto L_08A9FBB4;
    return;
L_08A9FBB4:
    ctx.set_gpr(31, 0x08A9FBBCu);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0017_entry, 17u, 176u, 0x08848BD0u>(ctx, &aot_mem) && ctx.pc == 0x08A9FBBCu) goto L_08A9FBBC;
    return;
L_08A9FBBC:
    ctx.set_gpr(4, ctx.gpr[2] + 0u);
    ctx.set_gpr(5, 0u + static_cast<std::uint32_t>(15));
    ctx.set_gpr(6, 0u + static_cast<std::uint32_t>(98));
    ctx.set_gpr(31, 0x08A9FBD0u);
    ctx.set_gpr(7, 0u + static_cast<std::uint32_t>(1));
    if (rt.invoke_chained_direct<&recomp_unit_0018_entry, 18u, 69u, 0x0884C47Cu>(ctx, &aot_mem) && ctx.pc == 0x08A9FBD0u) goto L_08A9FBD0;
    return;
L_08A9FBD0:
    ctx.set_gpr(2, rt.memory().aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(15408)));
    ctx.set_gpr(4, ctx.gpr[16] + 0u);
    ctx.set_gpr(5, ctx.gpr[2] + static_cast<std::uint32_t>(-1));
    ctx.set_gpr(31, 0x08A9FBE4u);
    rt.memory().aot_store32(ctx.gpr[16] + static_cast<std::uint32_t>(15408), ctx.gpr[5]);
    goto L_08A9FDB0;
L_08A9FBE4:
    ctx.set_gpr(31, 0x08A9FBECu);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0017_entry, 17u, 176u, 0x08848BD0u>(ctx, &aot_mem) && ctx.pc == 0x08A9FBECu) goto L_08A9FBEC;
    return;
L_08A9FBEC:
    ctx.set_gpr(4, ctx.gpr[2] + 0u);
    ctx.set_gpr(5, 0u + static_cast<std::uint32_t>(15));
    ctx.set_gpr(6, 0u + static_cast<std::uint32_t>(101));
    ctx.set_gpr(31, 0x08A9FC00u);
    ctx.set_gpr(7, 0u + 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0018_entry, 18u, 69u, 0x0884C47Cu>(ctx, &aot_mem) && ctx.pc == 0x08A9FC00u) goto L_08A9FC00;
    return;
L_08A9FC00:
    ctx.set_gpr(4, rt.memory().aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(0)));
    ctx.set_gpr(31, 0x08A9FC0Cu);
    ctx.set_gpr(5, 0u + 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0164_entry, 164u, 108u, 0x08A947BCu>(ctx, &aot_mem) && ctx.pc == 0x08A9FC0Cu) goto L_08A9FC0C;
    return;
L_08A9FC0C:
    ctx.set_gpr(6, rt.memory().aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(15368)));
    ctx.set_gpr(5, ctx.gpr[2] + 0u);
    ctx.set_gpr(31, 0x08A9FC1Cu);
    ctx.set_gpr(4, ctx.gpr[16] + 0u);
    goto L_08A9F2B0;
L_08A9FC1C:
    { const bool branch_taken = 0u == 0u;
    rt.memory().aot_store8(ctx.gpr[16] + static_cast<std::uint32_t>(15390), static_cast<std::uint8_t>(0u));
      if (branch_taken) {
          goto L_08A9FD0C;
      }
      goto L_08A9FC24;
    }
L_08A9FC24:
    ctx.set_gpr(31, 0x08A9FC2Cu);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0017_entry, 17u, 179u, 0x08848BF4u>(ctx, &aot_mem) && ctx.pc == 0x08A9FC2Cu) goto L_08A9FC2C;
    return;
L_08A9FC2C:
    ctx.set_gpr(4, ctx.gpr[2] + 0u);
    ctx.set_gpr(31, 0x08A9FC38u);
    ctx.set_gpr(5, 0u + static_cast<std::uint32_t>(1));
    if (rt.invoke_chained_direct<&recomp_unit_0017_entry, 17u, 943u, 0x0884B7C0u>(ctx, &aot_mem) && ctx.pc == 0x08A9FC38u) goto L_08A9FC38;
    return;
L_08A9FC38:
    { const bool branch_taken = ctx.gpr[2] == 0u;
    // nop
      if (branch_taken) {
          goto L_08A9FD0C;
      }
      goto L_08A9FC40;
    }
L_08A9FC40:
    ctx.set_gpr(31, 0x08A9FC48u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0017_entry, 17u, 185u, 0x08848C3Cu>(ctx, &aot_mem) && ctx.pc == 0x08A9FC48u) goto L_08A9FC48;
    return;
L_08A9FC48:
    ctx.set_gpr(4, ctx.gpr[2] + 0u);
    ctx.set_gpr(5, 0u + static_cast<std::uint32_t>(2));
    ctx.set_gpr(6, 0u + 0u);
    ctx.set_gpr(31, 0x08A9FC5Cu);
    ctx.set_gpr(7, 0u + 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0171_entry, 171u, 403u, 0x08AB179Cu>(ctx, &aot_mem) && ctx.pc == 0x08A9FC5Cu) goto L_08A9FC5C;
    return;
L_08A9FC5C:
    ctx.set_gpr(31, 0x08A9FC64u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0017_entry, 17u, 176u, 0x08848BD0u>(ctx, &aot_mem) && ctx.pc == 0x08A9FC64u) goto L_08A9FC64;
    return;
L_08A9FC64:
    ctx.set_gpr(4, ctx.gpr[2] + 0u);
    ctx.set_gpr(5, 0u + static_cast<std::uint32_t>(15));
    ctx.set_gpr(6, 0u + static_cast<std::uint32_t>(54));
    ctx.set_gpr(31, 0x08A9FC78u);
    ctx.set_gpr(7, 0u + 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0018_entry, 18u, 69u, 0x0884C47Cu>(ctx, &aot_mem) && ctx.pc == 0x08A9FC78u) goto L_08A9FC78;
    return;
L_08A9FC78:
    ctx.set_gpr(31, 0x08A9FC80u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0017_entry, 17u, 176u, 0x08848BD0u>(ctx, &aot_mem) && ctx.pc == 0x08A9FC80u) goto L_08A9FC80;
    return;
L_08A9FC80:
    ctx.set_gpr(4, ctx.gpr[2] + 0u);
    ctx.set_gpr(5, 0u + static_cast<std::uint32_t>(15));
    ctx.set_gpr(6, 0u + static_cast<std::uint32_t>(52));
    ctx.set_gpr(31, 0x08A9FC94u);
    ctx.set_gpr(7, 0u + 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0018_entry, 18u, 69u, 0x0884C47Cu>(ctx, &aot_mem) && ctx.pc == 0x08A9FC94u) goto L_08A9FC94;
    return;
L_08A9FC94:
    ctx.set_gpr(31, 0x08A9FC9Cu);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0017_entry, 17u, 176u, 0x08848BD0u>(ctx, &aot_mem) && ctx.pc == 0x08A9FC9Cu) goto L_08A9FC9C;
    return;
L_08A9FC9C:
    ctx.set_gpr(4, ctx.gpr[2] + 0u);
    ctx.set_gpr(5, 0u + static_cast<std::uint32_t>(15));
    ctx.set_gpr(6, 0u + static_cast<std::uint32_t>(53));
    ctx.set_gpr(31, 0x08A9FCB0u);
    ctx.set_gpr(7, 0u + 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0018_entry, 18u, 69u, 0x0884C47Cu>(ctx, &aot_mem) && ctx.pc == 0x08A9FCB0u) goto L_08A9FCB0;
    return;
L_08A9FCB0:
    ctx.set_gpr(2, 0u + static_cast<std::uint32_t>(-1));
    rt.memory().aot_store32(ctx.gpr[16] + static_cast<std::uint32_t>(15368), ctx.gpr[2]);
    rt.memory().aot_store32(ctx.gpr[16] + static_cast<std::uint32_t>(15392), 0u);
    rt.memory().aot_store32(ctx.gpr[16] + static_cast<std::uint32_t>(15396), 0u);
    ctx.set_gpr(2, 0u + static_cast<std::uint32_t>(1));
    rt.memory().aot_store32(ctx.gpr[16] + static_cast<std::uint32_t>(15400), ctx.gpr[2]);
    ctx.set_gpr(31, 0x08A9FCD0u);
    rt.memory().aot_store8(ctx.gpr[16] + static_cast<std::uint32_t>(15389), static_cast<std::uint8_t>(0u));
    if (rt.invoke_chained_direct<&recomp_unit_0017_entry, 17u, 192u, 0x08848C90u>(ctx, &aot_mem) && ctx.pc == 0x08A9FCD0u) goto L_08A9FCD0;
    return;
L_08A9FCD0:
    ctx.set_gpr(31, 0x08A9FCD8u);
    ctx.set_gpr(4, ctx.gpr[2] + 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0191_entry, 191u, 489u, 0x08B025FCu>(ctx, &aot_mem) && ctx.pc == 0x08A9FCD8u) goto L_08A9FCD8;
    return;
L_08A9FCD8:
    ctx.set_gpr(31, 0x08A9FCE0u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0017_entry, 17u, 192u, 0x08848C90u>(ctx, &aot_mem) && ctx.pc == 0x08A9FCE0u) goto L_08A9FCE0;
    return;
L_08A9FCE0:
    ctx.set_gpr(31, 0x08A9FCE8u);
    ctx.set_gpr(4, ctx.gpr[2] + 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0191_entry, 191u, 505u, 0x08B026F8u>(ctx, &aot_mem) && ctx.pc == 0x08A9FCE8u) goto L_08A9FCE8;
    return;
L_08A9FCE8:
    if (ctx.gpr[2] != 0u) {
    rt.memory().aot_store8(ctx.gpr[16] + static_cast<std::uint32_t>(15424), static_cast<std::uint8_t>(0u));
        goto L_08A9FD04;
    }
    goto L_08A9FCF0;
L_08A9FCF0:
    ctx.set_gpr(31, 0x08A9FCF8u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0017_entry, 17u, 192u, 0x08848C90u>(ctx, &aot_mem) && ctx.pc == 0x08A9FCF8u) goto L_08A9FCF8;
    return;
L_08A9FCF8:
    ctx.set_gpr(31, 0x08A9FD00u);
    ctx.set_gpr(4, ctx.gpr[2] + 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0191_entry, 191u, 442u, 0x08B02224u>(ctx, &aot_mem) && ctx.pc == 0x08A9FD00u) goto L_08A9FD00;
    return;
L_08A9FD00:
    rt.memory().aot_store8(ctx.gpr[16] + static_cast<std::uint32_t>(15424), static_cast<std::uint8_t>(0u));
    goto L_08A9FD04;
L_08A9FD04:
    { const bool branch_taken = 0u == 0u;
    ctx.set_gpr(2, 0u + static_cast<std::uint32_t>(1));
      if (branch_taken) {
          goto L_08A9FD10;
      }
      goto L_08A9FD0C;
    }
L_08A9FD0C:
    ctx.set_gpr(2, 0u + 0u);
    goto L_08A9FD10;
L_08A9FD10:
    ctx.set_gpr(31, rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(12)));
    ctx.set_gpr(16, rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(8)));
    jump_target = ctx.gpr[31];
    ctx.set_gpr(29, ctx.gpr[29] + static_cast<std::uint32_t>(16));
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_08A9FD20:
    ctx.set_gpr(29, ctx.gpr[29] + static_cast<std::uint32_t>(-16));
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(12), ctx.gpr[31]);
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(8), ctx.gpr[16]);
    ctx.set_gpr(31, 0x08A9FD34u);
    ctx.set_gpr(16, ctx.gpr[5] + 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0017_entry, 17u, 176u, 0x08848BD0u>(ctx, &aot_mem) && ctx.pc == 0x08A9FD34u) goto L_08A9FD34;
    return;
L_08A9FD34:
    ctx.set_gpr(7, 0u + static_cast<std::uint32_t>(255));
    ctx.set_gpr(4, ctx.gpr[2] + 0u);
    ctx.set_gpr(5, 0u + static_cast<std::uint32_t>(15));
    ctx.set_gpr(6, ctx.gpr[16] + 0u);
    ctx.set_gpr(8, ctx.gpr[7] + 0u);
    ctx.set_gpr(9, ctx.gpr[7] + 0u);
    ctx.set_gpr(31, 0x08A9FD54u);
    ctx.set_gpr(10, ctx.gpr[7] + 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0018_entry, 18u, 65u, 0x0884C41Cu>(ctx, &aot_mem) && ctx.pc == 0x08A9FD54u) goto L_08A9FD54;
    return;
L_08A9FD54:
    ctx.set_gpr(31, 0x08A9FD5Cu);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0017_entry, 17u, 176u, 0x08848BD0u>(ctx, &aot_mem) && ctx.pc == 0x08A9FD5Cu) goto L_08A9FD5C;
    return;
L_08A9FD5C:
    ctx.set_gpr(4, ctx.gpr[2] + 0u);
    ctx.set_gpr(7, 0u + static_cast<std::uint32_t>(255));
    ctx.set_gpr(2, 16128u << 16u);
    ctx.fpr[12] = std::bit_cast<float>(ctx.gpr[2]);
    ctx.set_gpr(5, 0u + static_cast<std::uint32_t>(15));
    ctx.set_gpr(6, ctx.gpr[16] + 0u);
    ctx.set_gpr(8, ctx.gpr[7] + 0u);
    ctx.set_gpr(9, ctx.gpr[7] + 0u);
    ctx.set_gpr(31, 0x08A9FD84u);
    ctx.set_gpr(10, 0u + static_cast<std::uint32_t>(128));
    if (rt.invoke_chained_direct<&recomp_unit_0018_entry, 18u, 64u, 0x0884C3DCu>(ctx, &aot_mem) && ctx.pc == 0x08A9FD84u) goto L_08A9FD84;
    return;
L_08A9FD84:
    ctx.set_gpr(31, 0x08A9FD8Cu);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0017_entry, 17u, 176u, 0x08848BD0u>(ctx, &aot_mem) && ctx.pc == 0x08A9FD8Cu) goto L_08A9FD8C;
    return;
L_08A9FD8C:
    ctx.set_gpr(6, ctx.gpr[16] + 0u);
    ctx.set_gpr(4, ctx.gpr[2] + 0u);
    ctx.set_gpr(5, 0u + static_cast<std::uint32_t>(15));
    ctx.set_gpr(31, 0x08A9FDA0u);
    ctx.set_gpr(7, 0u + static_cast<std::uint32_t>(1));
    if (rt.invoke_chained_direct<&recomp_unit_0041_entry, 41u, 796u, 0x088AB1ECu>(ctx, &aot_mem) && ctx.pc == 0x08A9FDA0u) goto L_08A9FDA0;
    return;
L_08A9FDA0:
    ctx.set_gpr(31, rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(12)));
    ctx.set_gpr(16, rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(8)));
    jump_target = ctx.gpr[31];
    ctx.set_gpr(29, ctx.gpr[29] + static_cast<std::uint32_t>(16));
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_08A9FDB0:
    ctx.set_gpr(29, ctx.gpr[29] + static_cast<std::uint32_t>(-16));
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(12), ctx.gpr[31]);
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(8), ctx.gpr[16]);
    ctx.set_gpr(31, 0x08A9FDC4u);
    ctx.set_gpr(16, ctx.gpr[5] + 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0017_entry, 17u, 176u, 0x08848BD0u>(ctx, &aot_mem) && ctx.pc == 0x08A9FDC4u) goto L_08A9FDC4;
    return;
L_08A9FDC4:
    ctx.set_gpr(4, ctx.gpr[2] + 0u);
    ctx.set_gpr(5, 0u + static_cast<std::uint32_t>(15));
    ctx.set_gpr(31, 0x08A9FDD4u);
    ctx.set_gpr(6, 0u + static_cast<std::uint32_t>(99));
    if (rt.invoke_chained_direct<&recomp_unit_0041_entry, 41u, 710u, 0x088AAA90u>(ctx, &aot_mem) && ctx.pc == 0x08A9FDD4u) goto L_08A9FDD4;
    return;
L_08A9FDD4:
    ctx.set_gpr(3, 0u + static_cast<std::uint32_t>(-1));
    { const bool branch_taken = ctx.gpr[2] != ctx.gpr[3];
    // nop
      if (branch_taken) {
          goto L_08A9FE20;
      }
      goto L_08A9FDE0;
    }
L_08A9FDE0:
    ctx.set_gpr(31, 0x08A9FDE8u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0017_entry, 17u, 176u, 0x08848BD0u>(ctx, &aot_mem) && ctx.pc == 0x08A9FDE8u) goto L_08A9FDE8;
    return;
L_08A9FDE8:
    ctx.set_gpr(4, ctx.gpr[2] + 0u);
    ctx.set_gpr(2, 17324u << 16u);
    ctx.set_gpr(2, ctx.gpr[2] | 32768u);
    ctx.fpr[12] = std::bit_cast<float>(ctx.gpr[2]);
    ctx.set_gpr(2, 17242u << 16u);
    ctx.fpr[13] = std::bit_cast<float>(ctx.gpr[2]);
    ctx.set_gpr(2, 16256u << 16u);
    ctx.fpr[14] = std::bit_cast<float>(ctx.gpr[2]);
    ctx.set_gpr(5, 0u + static_cast<std::uint32_t>(15));
    ctx.set_gpr(6, 0u + static_cast<std::uint32_t>(3));
    ctx.set_gpr(7, 0u + static_cast<std::uint32_t>(99));
    ctx.set_gpr(8, 0u + static_cast<std::uint32_t>(59));
    ctx.set_gpr(31, 0x08A9FE20u);
    ctx.set_gpr(9, 0u + 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0016_entry, 16u, 558u, 0x08847598u>(ctx, &aot_mem) && ctx.pc == 0x08A9FE20u) goto L_08A9FE20;
    return;
L_08A9FE20:
    ctx.set_gpr(31, 0x08A9FE28u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0017_entry, 17u, 176u, 0x08848BD0u>(ctx, &aot_mem) && ctx.pc == 0x08A9FE28u) goto L_08A9FE28;
    return;
L_08A9FE28:
    ctx.set_gpr(4, ctx.gpr[2] + 0u);
    ctx.set_gpr(5, 0u + static_cast<std::uint32_t>(15));
    ctx.set_gpr(31, 0x08A9FE38u);
    ctx.set_gpr(6, 0u + static_cast<std::uint32_t>(100));
    if (rt.invoke_chained_direct<&recomp_unit_0041_entry, 41u, 710u, 0x088AAA90u>(ctx, &aot_mem) && ctx.pc == 0x08A9FE38u) goto L_08A9FE38;
    return;
L_08A9FE38:
    ctx.set_gpr(3, 0u + static_cast<std::uint32_t>(-1));
    { const bool branch_taken = ctx.gpr[2] != ctx.gpr[3];
    // nop
      if (branch_taken) {
          goto L_08A9FE84;
      }
      goto L_08A9FE44;
    }
L_08A9FE44:
    ctx.set_gpr(31, 0x08A9FE4Cu);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0017_entry, 17u, 176u, 0x08848BD0u>(ctx, &aot_mem) && ctx.pc == 0x08A9FE4Cu) goto L_08A9FE4C;
    return;
L_08A9FE4C:
    ctx.set_gpr(4, ctx.gpr[2] + 0u);
    ctx.set_gpr(2, 17364u << 16u);
    ctx.set_gpr(2, ctx.gpr[2] | 32768u);
    ctx.fpr[12] = std::bit_cast<float>(ctx.gpr[2]);
    ctx.set_gpr(2, 17242u << 16u);
    ctx.fpr[13] = std::bit_cast<float>(ctx.gpr[2]);
    ctx.set_gpr(2, 16256u << 16u);
    ctx.fpr[14] = std::bit_cast<float>(ctx.gpr[2]);
    ctx.set_gpr(5, 0u + static_cast<std::uint32_t>(15));
    ctx.set_gpr(6, 0u + static_cast<std::uint32_t>(3));
    ctx.set_gpr(7, 0u + static_cast<std::uint32_t>(100));
    ctx.set_gpr(8, 0u + static_cast<std::uint32_t>(60));
    ctx.set_gpr(31, 0x08A9FE84u);
    ctx.set_gpr(9, 0u + 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0016_entry, 16u, 558u, 0x08847598u>(ctx, &aot_mem) && ctx.pc == 0x08A9FE84u) goto L_08A9FE84;
    return;
L_08A9FE84:
    ctx.set_gpr(31, 0x08A9FE8Cu);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0017_entry, 17u, 176u, 0x08848BD0u>(ctx, &aot_mem) && ctx.pc == 0x08A9FE8Cu) goto L_08A9FE8C;
    return;
L_08A9FE8C:
    ctx.set_gpr(4, ctx.gpr[2] + 0u);
    ctx.set_gpr(5, 0u + static_cast<std::uint32_t>(15));
    ctx.set_gpr(31, 0x08A9FE9Cu);
    ctx.set_gpr(6, 0u + static_cast<std::uint32_t>(101));
    if (rt.invoke_chained_direct<&recomp_unit_0041_entry, 41u, 710u, 0x088AAA90u>(ctx, &aot_mem) && ctx.pc == 0x08A9FE9Cu) goto L_08A9FE9C;
    return;
L_08A9FE9C:
    ctx.set_gpr(3, 0u + static_cast<std::uint32_t>(-1));
    { const bool branch_taken = ctx.gpr[2] != ctx.gpr[3];
    // nop
      if (branch_taken) {
          goto L_08A9FEE8;
      }
      goto L_08A9FEA8;
    }
L_08A9FEA8:
    ctx.set_gpr(31, 0x08A9FEB0u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0017_entry, 17u, 176u, 0x08848BD0u>(ctx, &aot_mem) && ctx.pc == 0x08A9FEB0u) goto L_08A9FEB0;
    return;
L_08A9FEB0:
    ctx.set_gpr(4, ctx.gpr[2] + 0u);
    ctx.set_gpr(2, 17364u << 16u);
    ctx.set_gpr(2, ctx.gpr[2] | 32768u);
    ctx.fpr[12] = std::bit_cast<float>(ctx.gpr[2]);
    ctx.set_gpr(2, 17242u << 16u);
    ctx.fpr[13] = std::bit_cast<float>(ctx.gpr[2]);
    ctx.set_gpr(2, 16256u << 16u);
    ctx.fpr[14] = std::bit_cast<float>(ctx.gpr[2]);
    ctx.set_gpr(5, 0u + static_cast<std::uint32_t>(15));
    ctx.set_gpr(6, 0u + static_cast<std::uint32_t>(3));
    ctx.set_gpr(7, 0u + static_cast<std::uint32_t>(101));
    ctx.set_gpr(8, 0u + static_cast<std::uint32_t>(61));
    ctx.set_gpr(31, 0x08A9FEE8u);
    ctx.set_gpr(9, 0u + 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0016_entry, 16u, 558u, 0x08847598u>(ctx, &aot_mem) && ctx.pc == 0x08A9FEE8u) goto L_08A9FEE8;
    return;
L_08A9FEE8:
    ctx.set_gpr(31, 0x08A9FEF0u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0017_entry, 17u, 176u, 0x08848BD0u>(ctx, &aot_mem) && ctx.pc == 0x08A9FEF0u) goto L_08A9FEF0;
    return;
L_08A9FEF0:
    ctx.set_gpr(7, 0u + static_cast<std::uint32_t>(255));
    ctx.set_gpr(4, ctx.gpr[2] + 0u);
    ctx.set_gpr(5, 0u + static_cast<std::uint32_t>(15));
    ctx.set_gpr(6, 0u + static_cast<std::uint32_t>(99));
    ctx.set_gpr(8, ctx.gpr[7] + 0u);
    ctx.set_gpr(9, ctx.gpr[7] + 0u);
    ctx.set_gpr(31, 0x08A9FF10u);
    ctx.set_gpr(10, ctx.gpr[7] + 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0018_entry, 18u, 65u, 0x0884C41Cu>(ctx, &aot_mem) && ctx.pc == 0x08A9FF10u) goto L_08A9FF10;
    return;
L_08A9FF10:
    ctx.set_gpr(31, 0x08A9FF18u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0017_entry, 17u, 176u, 0x08848BD0u>(ctx, &aot_mem) && ctx.pc == 0x08A9FF18u) goto L_08A9FF18;
    return;
L_08A9FF18:
    ctx.set_gpr(7, 0u + static_cast<std::uint32_t>(255));
    ctx.set_gpr(4, ctx.gpr[2] + 0u);
    ctx.set_gpr(5, 0u + static_cast<std::uint32_t>(15));
    ctx.set_gpr(6, 0u + static_cast<std::uint32_t>(100));
    ctx.set_gpr(8, ctx.gpr[7] + 0u);
    ctx.set_gpr(9, ctx.gpr[7] + 0u);
    ctx.set_gpr(31, 0x08A9FF38u);
    ctx.set_gpr(10, ctx.gpr[7] + 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0018_entry, 18u, 65u, 0x0884C41Cu>(ctx, &aot_mem) && ctx.pc == 0x08A9FF38u) goto L_08A9FF38;
    return;
L_08A9FF38:
    ctx.set_gpr(31, 0x08A9FF40u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0017_entry, 17u, 176u, 0x08848BD0u>(ctx, &aot_mem) && ctx.pc == 0x08A9FF40u) goto L_08A9FF40;
    return;
L_08A9FF40:
    ctx.set_gpr(7, 0u + static_cast<std::uint32_t>(255));
    ctx.set_gpr(4, ctx.gpr[2] + 0u);
    ctx.set_gpr(5, 0u + static_cast<std::uint32_t>(15));
    ctx.set_gpr(6, 0u + static_cast<std::uint32_t>(101));
    ctx.set_gpr(8, ctx.gpr[7] + 0u);
    ctx.set_gpr(9, ctx.gpr[7] + 0u);
    ctx.set_gpr(31, 0x08A9FF60u);
    ctx.set_gpr(10, ctx.gpr[7] + 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0018_entry, 18u, 65u, 0x0884C41Cu>(ctx, &aot_mem) && ctx.pc == 0x08A9FF60u) goto L_08A9FF60;
    return;
L_08A9FF60:
    ctx.set_gpr(31, 0x08A9FF68u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0017_entry, 17u, 176u, 0x08848BD0u>(ctx, &aot_mem) && ctx.pc == 0x08A9FF68u) goto L_08A9FF68;
    return;
L_08A9FF68:
    ctx.set_gpr(4, ctx.gpr[2] + 0u);
    ctx.set_gpr(5, 0u + static_cast<std::uint32_t>(15));
    ctx.set_gpr(6, 0u + static_cast<std::uint32_t>(99));
    ctx.set_gpr(31, 0x08A9FF7Cu);
    ctx.set_gpr(7, 0u + static_cast<std::uint32_t>(1));
    if (rt.invoke_chained_direct<&recomp_unit_0018_entry, 18u, 69u, 0x0884C47Cu>(ctx, &aot_mem) && ctx.pc == 0x08A9FF7Cu) goto L_08A9FF7C;
    return;
L_08A9FF7C:
    ctx.set_gpr(31, 0x08A9FF84u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0017_entry, 17u, 176u, 0x08848BD0u>(ctx, &aot_mem) && ctx.pc == 0x08A9FF84u) goto L_08A9FF84;
    return;
L_08A9FF84:
    ctx.set_gpr(4, ctx.gpr[2] + 0u);
    ctx.set_gpr(5, 0u + static_cast<std::uint32_t>(15));
    ctx.set_gpr(6, 0u + static_cast<std::uint32_t>(100));
    ctx.set_gpr(31, 0x08A9FF98u);
    ctx.set_gpr(7, 0u + static_cast<std::uint32_t>(1));
    if (rt.invoke_chained_direct<&recomp_unit_0018_entry, 18u, 69u, 0x0884C47Cu>(ctx, &aot_mem) && ctx.pc == 0x08A9FF98u) goto L_08A9FF98;
    return;
L_08A9FF98:
    ctx.set_gpr(31, 0x08A9FFA0u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0017_entry, 17u, 176u, 0x08848BD0u>(ctx, &aot_mem) && ctx.pc == 0x08A9FFA0u) goto L_08A9FFA0;
    return;
L_08A9FFA0:
    ctx.set_gpr(4, ctx.gpr[2] + 0u);
    ctx.set_gpr(5, 0u + static_cast<std::uint32_t>(15));
    ctx.set_gpr(6, 0u + static_cast<std::uint32_t>(101));
    ctx.set_gpr(31, 0x08A9FFB4u);
    ctx.set_gpr(7, 0u + static_cast<std::uint32_t>(1));
    if (rt.invoke_chained_direct<&recomp_unit_0018_entry, 18u, 69u, 0x0884C47Cu>(ctx, &aot_mem) && ctx.pc == 0x08A9FFB4u) goto L_08A9FFB4;
    return;
L_08A9FFB4:
    ctx.set_gpr(31, 0x08A9FFBCu);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0017_entry, 17u, 176u, 0x08848BD0u>(ctx, &aot_mem) && ctx.pc == 0x08A9FFBCu) goto L_08A9FFBC;
    return;
L_08A9FFBC:
    ctx.set_gpr(4, ctx.gpr[2] + 0u);
    ctx.set_gpr(7, 0u + static_cast<std::uint32_t>(255));
    ctx.set_gpr(2, 16128u << 16u);
    ctx.fpr[12] = std::bit_cast<float>(ctx.gpr[2]);
    ctx.set_gpr(5, 0u + static_cast<std::uint32_t>(15));
    ctx.set_gpr(6, 0u + static_cast<std::uint32_t>(101));
    ctx.set_gpr(8, ctx.gpr[7] + 0u);
    ctx.set_gpr(9, ctx.gpr[7] + 0u);
    ctx.set_gpr(31, 0x08A9FFE4u);
    ctx.set_gpr(10, 0u + 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0018_entry, 18u, 64u, 0x0884C3DCu>(ctx, &aot_mem) && ctx.pc == 0x08A9FFE4u) goto L_08A9FFE4;
    return;
L_08A9FFE4:
    ctx.set_gpr(31, 0x08A9FFECu);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0017_entry, 17u, 176u, 0x08848BD0u>(ctx, &aot_mem) && ctx.pc == 0x08A9FFECu) goto L_08A9FFEC;
    return;
L_08A9FFEC:
    ctx.set_gpr(4, ctx.gpr[2] + 0u);
    ctx.set_gpr(5, 0u + static_cast<std::uint32_t>(15));
    ctx.set_gpr(6, 0u + static_cast<std::uint32_t>(101));
    ctx.set_gpr(31, 0x08AA0000u);
    ctx.set_gpr(7, 0u + static_cast<std::uint32_t>(1));
    (void)rt.invoke_chained_direct<&recomp_unit_0041_entry, 41u, 796u, 0x088AB1ECu>(ctx, &aot_mem);
    return;
}

void recomp_unit_0166(Runtime &rt, AllegrexContext &ctx) {
    auto aot_mem = rt.memory().aot_fast_view();
    recomp_unit_0166_entry(rt, ctx, 0u, aot_mem);
}

void register_generated_unit_166(Runtime &runtime) {
    runtime.register_generated_unit(166u, 0x08A9C000u, 16384u, &recomp_unit_0166, &recomp_unit_0166_entry);
    runtime.register_function(0x08A9C000u, &recomp_unit_0166, "recomp_unit_0166");
    runtime.register_function(0x08A9C02Cu, &recomp_unit_0166, "recomp_unit_0166");
    runtime.register_function(0x08A9C034u, &recomp_unit_0166, "recomp_unit_0166");
    runtime.register_function(0x08A9C040u, &recomp_unit_0166, "recomp_unit_0166");
    runtime.register_function(0x08A9C048u, &recomp_unit_0166, "recomp_unit_0166");
    runtime.register_function(0x08A9C050u, &recomp_unit_0166, "recomp_unit_0166");
    runtime.register_function(0x08A9C080u, &recomp_unit_0166, "recomp_unit_0166");
    runtime.register_function(0x08A9C08Cu, &recomp_unit_0166, "recomp_unit_0166");
    runtime.register_function(0x08A9C090u, &recomp_unit_0166, "recomp_unit_0166");
    runtime.register_function(0x08A9C094u, &recomp_unit_0166, "recomp_unit_0166");
    runtime.register_function(0x08A9C0B0u, &recomp_unit_0166, "recomp_unit_0166");
    runtime.register_function(0x08A9C13Cu, &recomp_unit_0166, "recomp_unit_0166");
    runtime.register_function(0x08A9C14Cu, &recomp_unit_0166, "recomp_unit_0166");
    runtime.register_function(0x08A9C15Cu, &recomp_unit_0166, "recomp_unit_0166");
    runtime.register_function(0x08A9C164u, &recomp_unit_0166, "recomp_unit_0166");
    runtime.register_function(0x08A9C16Cu, &recomp_unit_0166, "recomp_unit_0166");
    runtime.register_function(0x08A9C174u, &recomp_unit_0166, "recomp_unit_0166");
    runtime.register_function(0x08A9C194u, &recomp_unit_0166, "recomp_unit_0166");
    runtime.register_function(0x08A9C19Cu, &recomp_unit_0166, "recomp_unit_0166");
    runtime.register_function(0x08A9C1E0u, &recomp_unit_0166, "recomp_unit_0166");
    runtime.register_function(0x08A9C1E4u, &recomp_unit_0166, "recomp_unit_0166");
    runtime.register_function(0x08A9C1F0u, &recomp_unit_0166, "recomp_unit_0166");
    runtime.register_function(0x08A9C204u, &recomp_unit_0166, "recomp_unit_0166");
    runtime.register_function(0x08A9C218u, &recomp_unit_0166, "recomp_unit_0166");
    runtime.register_function(0x08A9C22Cu, &recomp_unit_0166, "recomp_unit_0166");
    runtime.register_function(0x08A9C230u, &recomp_unit_0166, "recomp_unit_0166");
    runtime.register_function(0x08A9C238u, &recomp_unit_0166, "recomp_unit_0166");
    runtime.register_function(0x08A9C248u, &recomp_unit_0166, "recomp_unit_0166");
    runtime.register_function(0x08A9C24Cu, &recomp_unit_0166, "recomp_unit_0166");
    runtime.register_function(0x08A9C254u, &recomp_unit_0166, "recomp_unit_0166");
    runtime.register_function(0x08A9C26Cu, &recomp_unit_0166, "recomp_unit_0166");
    runtime.register_function(0x08A9C278u, &recomp_unit_0166, "recomp_unit_0166");
    runtime.register_function(0x08A9C27Cu, &recomp_unit_0166, "recomp_unit_0166");
    runtime.register_function(0x08A9C284u, &recomp_unit_0166, "recomp_unit_0166");
    runtime.register_function(0x08A9C288u, &recomp_unit_0166, "recomp_unit_0166");
    runtime.register_function(0x08A9C290u, &recomp_unit_0166, "recomp_unit_0166");
    runtime.register_function(0x08A9C29Cu, &recomp_unit_0166, "recomp_unit_0166");
    runtime.register_function(0x08A9C450u, &recomp_unit_0166, "recomp_unit_0166");
    runtime.register_function(0x08A9C454u, &recomp_unit_0166, "recomp_unit_0166");
    runtime.register_function(0x08A9C45Cu, &recomp_unit_0166, "recomp_unit_0166");
    runtime.register_function(0x08A9C468u, &recomp_unit_0166, "recomp_unit_0166");
    runtime.register_function(0x08A9C4B0u, &recomp_unit_0166, "recomp_unit_0166");
    runtime.register_function(0x08A9C4B8u, &recomp_unit_0166, "recomp_unit_0166");
    runtime.register_function(0x08A9C4C4u, &recomp_unit_0166, "recomp_unit_0166");
    runtime.register_function(0x08A9C4E8u, &recomp_unit_0166, "recomp_unit_0166");
    runtime.register_function(0x08A9C4F8u, &recomp_unit_0166, "recomp_unit_0166");
    runtime.register_function(0x08A9C510u, &recomp_unit_0166, "recomp_unit_0166");
    runtime.register_function(0x08A9C524u, &recomp_unit_0166, "recomp_unit_0166");
    runtime.register_function(0x08A9C528u, &recomp_unit_0166, "recomp_unit_0166");
    runtime.register_function(0x08A9C530u, &recomp_unit_0166, "recomp_unit_0166");
    runtime.register_function(0x08A9C548u, &recomp_unit_0166, "recomp_unit_0166");
    runtime.register_function(0x08A9C54Cu, &recomp_unit_0166, "recomp_unit_0166");
    runtime.register_function(0x08A9C554u, &recomp_unit_0166, "recomp_unit_0166");
    runtime.register_function(0x08A9C564u, &recomp_unit_0166, "recomp_unit_0166");
    runtime.register_function(0x08A9C568u, &recomp_unit_0166, "recomp_unit_0166");
    runtime.register_function(0x08A9C570u, &recomp_unit_0166, "recomp_unit_0166");
    runtime.register_function(0x08A9C58Cu, &recomp_unit_0166, "recomp_unit_0166");
    runtime.register_function(0x08A9C59Cu, &recomp_unit_0166, "recomp_unit_0166");
    runtime.register_function(0x08A9C5A0u, &recomp_unit_0166, "recomp_unit_0166");
    runtime.register_function(0x08A9C5A8u, &recomp_unit_0166, "recomp_unit_0166");
    runtime.register_function(0x08A9C5ACu, &recomp_unit_0166, "recomp_unit_0166");
    runtime.register_function(0x08A9C5B4u, &recomp_unit_0166, "recomp_unit_0166");
    runtime.register_function(0x08A9C5C8u, &recomp_unit_0166, "recomp_unit_0166");
    runtime.register_function(0x08A9C714u, &recomp_unit_0166, "recomp_unit_0166");
    runtime.register_function(0x08A9C718u, &recomp_unit_0166, "recomp_unit_0166");
    runtime.register_function(0x08A9C720u, &recomp_unit_0166, "recomp_unit_0166");
    runtime.register_function(0x08A9C734u, &recomp_unit_0166, "recomp_unit_0166");
    runtime.register_function(0x08A9C768u, &recomp_unit_0166, "recomp_unit_0166");
    runtime.register_function(0x08A9C76Cu, &recomp_unit_0166, "recomp_unit_0166");
    runtime.register_function(0x08A9C778u, &recomp_unit_0166, "recomp_unit_0166");
    runtime.register_function(0x08A9C78Cu, &recomp_unit_0166, "recomp_unit_0166");
    runtime.register_function(0x08A9C7A0u, &recomp_unit_0166, "recomp_unit_0166");
    runtime.register_function(0x08A9C7B4u, &recomp_unit_0166, "recomp_unit_0166");
    runtime.register_function(0x08A9C7B8u, &recomp_unit_0166, "recomp_unit_0166");
    runtime.register_function(0x08A9C7C0u, &recomp_unit_0166, "recomp_unit_0166");
    runtime.register_function(0x08A9C7D0u, &recomp_unit_0166, "recomp_unit_0166");
    runtime.register_function(0x08A9C7D4u, &recomp_unit_0166, "recomp_unit_0166");
    runtime.register_function(0x08A9C7DCu, &recomp_unit_0166, "recomp_unit_0166");
    runtime.register_function(0x08A9C7F4u, &recomp_unit_0166, "recomp_unit_0166");
    runtime.register_function(0x08A9C800u, &recomp_unit_0166, "recomp_unit_0166");
    runtime.register_function(0x08A9C804u, &recomp_unit_0166, "recomp_unit_0166");
    runtime.register_function(0x08A9C80Cu, &recomp_unit_0166, "recomp_unit_0166");
    runtime.register_function(0x08A9C810u, &recomp_unit_0166, "recomp_unit_0166");
    runtime.register_function(0x08A9C818u, &recomp_unit_0166, "recomp_unit_0166");
    runtime.register_function(0x08A9C82Cu, &recomp_unit_0166, "recomp_unit_0166");
    runtime.register_function(0x08A9C9E0u, &recomp_unit_0166, "recomp_unit_0166");
    runtime.register_function(0x08A9C9E4u, &recomp_unit_0166, "recomp_unit_0166");
    runtime.register_function(0x08A9C9ECu, &recomp_unit_0166, "recomp_unit_0166");
    runtime.register_function(0x08A9C9FCu, &recomp_unit_0166, "recomp_unit_0166");
    runtime.register_function(0x08A9CA44u, &recomp_unit_0166, "recomp_unit_0166");
    runtime.register_function(0x08A9CA48u, &recomp_unit_0166, "recomp_unit_0166");
    runtime.register_function(0x08A9CA64u, &recomp_unit_0166, "recomp_unit_0166");
    runtime.register_function(0x08A9CA70u, &recomp_unit_0166, "recomp_unit_0166");
    runtime.register_function(0x08A9CA88u, &recomp_unit_0166, "recomp_unit_0166");
    runtime.register_function(0x08A9CA9Cu, &recomp_unit_0166, "recomp_unit_0166");
    runtime.register_function(0x08A9CAA0u, &recomp_unit_0166, "recomp_unit_0166");
    runtime.register_function(0x08A9CAA8u, &recomp_unit_0166, "recomp_unit_0166");
    runtime.register_function(0x08A9CAC4u, &recomp_unit_0166, "recomp_unit_0166");
    runtime.register_function(0x08A9CAC8u, &recomp_unit_0166, "recomp_unit_0166");
    runtime.register_function(0x08A9CAD0u, &recomp_unit_0166, "recomp_unit_0166");
    runtime.register_function(0x08A9CAE4u, &recomp_unit_0166, "recomp_unit_0166");
    runtime.register_function(0x08A9CAE8u, &recomp_unit_0166, "recomp_unit_0166");
    runtime.register_function(0x08A9CAF0u, &recomp_unit_0166, "recomp_unit_0166");
    runtime.register_function(0x08A9CB10u, &recomp_unit_0166, "recomp_unit_0166");
    runtime.register_function(0x08A9CB1Cu, &recomp_unit_0166, "recomp_unit_0166");
    runtime.register_function(0x08A9CB20u, &recomp_unit_0166, "recomp_unit_0166");
    runtime.register_function(0x08A9CB28u, &recomp_unit_0166, "recomp_unit_0166");
    runtime.register_function(0x08A9CB2Cu, &recomp_unit_0166, "recomp_unit_0166");
    runtime.register_function(0x08A9CB34u, &recomp_unit_0166, "recomp_unit_0166");
    runtime.register_function(0x08A9CB3Cu, &recomp_unit_0166, "recomp_unit_0166");
    runtime.register_function(0x08A9CBACu, &recomp_unit_0166, "recomp_unit_0166");
    runtime.register_function(0x08A9CBB0u, &recomp_unit_0166, "recomp_unit_0166");
    runtime.register_function(0x08A9CBB8u, &recomp_unit_0166, "recomp_unit_0166");
    runtime.register_function(0x08A9CBC0u, &recomp_unit_0166, "recomp_unit_0166");
    runtime.register_function(0x08A9CBDCu, &recomp_unit_0166, "recomp_unit_0166");
    runtime.register_function(0x08A9CBE0u, &recomp_unit_0166, "recomp_unit_0166");
    runtime.register_function(0x08A9CC00u, &recomp_unit_0166, "recomp_unit_0166");
    runtime.register_function(0x08A9CC50u, &recomp_unit_0166, "recomp_unit_0166");
    runtime.register_function(0x08A9CC74u, &recomp_unit_0166, "recomp_unit_0166");
    runtime.register_function(0x08A9CC7Cu, &recomp_unit_0166, "recomp_unit_0166");
    runtime.register_function(0x08A9CCA4u, &recomp_unit_0166, "recomp_unit_0166");
    runtime.register_function(0x08A9CCB4u, &recomp_unit_0166, "recomp_unit_0166");
    runtime.register_function(0x08A9CCBCu, &recomp_unit_0166, "recomp_unit_0166");
    runtime.register_function(0x08A9CCC4u, &recomp_unit_0166, "recomp_unit_0166");
    runtime.register_function(0x08A9CCE0u, &recomp_unit_0166, "recomp_unit_0166");
    runtime.register_function(0x08A9CD58u, &recomp_unit_0166, "recomp_unit_0166");
    runtime.register_function(0x08A9CD9Cu, &recomp_unit_0166, "recomp_unit_0166");
    runtime.register_function(0x08A9CDB4u, &recomp_unit_0166, "recomp_unit_0166");
    runtime.register_function(0x08A9CE04u, &recomp_unit_0166, "recomp_unit_0166");
    runtime.register_function(0x08A9CE0Cu, &recomp_unit_0166, "recomp_unit_0166");
    runtime.register_function(0x08A9CE24u, &recomp_unit_0166, "recomp_unit_0166");
    runtime.register_function(0x08A9CE9Cu, &recomp_unit_0166, "recomp_unit_0166");
    runtime.register_function(0x08A9CEA4u, &recomp_unit_0166, "recomp_unit_0166");
    runtime.register_function(0x08A9CF0Cu, &recomp_unit_0166, "recomp_unit_0166");
    runtime.register_function(0x08A9CFE0u, &recomp_unit_0166, "recomp_unit_0166");
    runtime.register_function(0x08A9CFE4u, &recomp_unit_0166, "recomp_unit_0166");
    runtime.register_function(0x08A9CFF4u, &recomp_unit_0166, "recomp_unit_0166");
    runtime.register_function(0x08A9D024u, &recomp_unit_0166, "recomp_unit_0166");
    runtime.register_function(0x08A9D074u, &recomp_unit_0166, "recomp_unit_0166");
    runtime.register_function(0x08A9D07Cu, &recomp_unit_0166, "recomp_unit_0166");
    runtime.register_function(0x08A9D090u, &recomp_unit_0166, "recomp_unit_0166");
    runtime.register_function(0x08A9D098u, &recomp_unit_0166, "recomp_unit_0166");
    runtime.register_function(0x08A9D0A4u, &recomp_unit_0166, "recomp_unit_0166");
    runtime.register_function(0x08A9D0B0u, &recomp_unit_0166, "recomp_unit_0166");
    runtime.register_function(0x08A9D0BCu, &recomp_unit_0166, "recomp_unit_0166");
    runtime.register_function(0x08A9D0D8u, &recomp_unit_0166, "recomp_unit_0166");
    runtime.register_function(0x08A9D0F0u, &recomp_unit_0166, "recomp_unit_0166");
    runtime.register_function(0x08A9D0FCu, &recomp_unit_0166, "recomp_unit_0166");
    runtime.register_function(0x08A9D104u, &recomp_unit_0166, "recomp_unit_0166");
    runtime.register_function(0x08A9D120u, &recomp_unit_0166, "recomp_unit_0166");
    runtime.register_function(0x08A9D12Cu, &recomp_unit_0166, "recomp_unit_0166");
    runtime.register_function(0x08A9D134u, &recomp_unit_0166, "recomp_unit_0166");
    runtime.register_function(0x08A9D170u, &recomp_unit_0166, "recomp_unit_0166");
    runtime.register_function(0x08A9D17Cu, &recomp_unit_0166, "recomp_unit_0166");
    runtime.register_function(0x08A9D184u, &recomp_unit_0166, "recomp_unit_0166");
    runtime.register_function(0x08A9D2D0u, &recomp_unit_0166, "recomp_unit_0166");
    runtime.register_function(0x08A9D2E0u, &recomp_unit_0166, "recomp_unit_0166");
    runtime.register_function(0x08A9D2F4u, &recomp_unit_0166, "recomp_unit_0166");
    runtime.register_function(0x08A9D300u, &recomp_unit_0166, "recomp_unit_0166");
    runtime.register_function(0x08A9D308u, &recomp_unit_0166, "recomp_unit_0166");
    runtime.register_function(0x08A9D328u, &recomp_unit_0166, "recomp_unit_0166");
    runtime.register_function(0x08A9D334u, &recomp_unit_0166, "recomp_unit_0166");
    runtime.register_function(0x08A9D33Cu, &recomp_unit_0166, "recomp_unit_0166");
    runtime.register_function(0x08A9D34Cu, &recomp_unit_0166, "recomp_unit_0166");
    runtime.register_function(0x08A9D354u, &recomp_unit_0166, "recomp_unit_0166");
    runtime.register_function(0x08A9D398u, &recomp_unit_0166, "recomp_unit_0166");
    runtime.register_function(0x08A9D3A4u, &recomp_unit_0166, "recomp_unit_0166");
    runtime.register_function(0x08A9D3A8u, &recomp_unit_0166, "recomp_unit_0166");
    runtime.register_function(0x08A9D3ACu, &recomp_unit_0166, "recomp_unit_0166");
    runtime.register_function(0x08A9D3B4u, &recomp_unit_0166, "recomp_unit_0166");
    runtime.register_function(0x08A9D3C0u, &recomp_unit_0166, "recomp_unit_0166");
    runtime.register_function(0x08A9D3C4u, &recomp_unit_0166, "recomp_unit_0166");
    runtime.register_function(0x08A9D3F0u, &recomp_unit_0166, "recomp_unit_0166");
    runtime.register_function(0x08A9D418u, &recomp_unit_0166, "recomp_unit_0166");
    runtime.register_function(0x08A9D438u, &recomp_unit_0166, "recomp_unit_0166");
    runtime.register_function(0x08A9D480u, &recomp_unit_0166, "recomp_unit_0166");
    runtime.register_function(0x08A9D490u, &recomp_unit_0166, "recomp_unit_0166");
    runtime.register_function(0x08A9D500u, &recomp_unit_0166, "recomp_unit_0166");
    runtime.register_function(0x08A9D50Cu, &recomp_unit_0166, "recomp_unit_0166");
    runtime.register_function(0x08A9D514u, &recomp_unit_0166, "recomp_unit_0166");
    runtime.register_function(0x08A9D520u, &recomp_unit_0166, "recomp_unit_0166");
    runtime.register_function(0x08A9D528u, &recomp_unit_0166, "recomp_unit_0166");
    runtime.register_function(0x08A9D540u, &recomp_unit_0166, "recomp_unit_0166");
    runtime.register_function(0x08A9D548u, &recomp_unit_0166, "recomp_unit_0166");
    runtime.register_function(0x08A9D55Cu, &recomp_unit_0166, "recomp_unit_0166");
    runtime.register_function(0x08A9D564u, &recomp_unit_0166, "recomp_unit_0166");
    runtime.register_function(0x08A9D578u, &recomp_unit_0166, "recomp_unit_0166");
    runtime.register_function(0x08A9D580u, &recomp_unit_0166, "recomp_unit_0166");
    runtime.register_function(0x08A9D594u, &recomp_unit_0166, "recomp_unit_0166");
    runtime.register_function(0x08A9D59Cu, &recomp_unit_0166, "recomp_unit_0166");
    runtime.register_function(0x08A9D5B0u, &recomp_unit_0166, "recomp_unit_0166");
    runtime.register_function(0x08A9D5C0u, &recomp_unit_0166, "recomp_unit_0166");
    runtime.register_function(0x08A9D5DCu, &recomp_unit_0166, "recomp_unit_0166");
    runtime.register_function(0x08A9D5ECu, &recomp_unit_0166, "recomp_unit_0166");
    runtime.register_function(0x08A9D5FCu, &recomp_unit_0166, "recomp_unit_0166");
    runtime.register_function(0x08A9D61Cu, &recomp_unit_0166, "recomp_unit_0166");
    runtime.register_function(0x08A9D64Cu, &recomp_unit_0166, "recomp_unit_0166");
    runtime.register_function(0x08A9D65Cu, &recomp_unit_0166, "recomp_unit_0166");
    runtime.register_function(0x08A9D664u, &recomp_unit_0166, "recomp_unit_0166");
    runtime.register_function(0x08A9D6A4u, &recomp_unit_0166, "recomp_unit_0166");
    runtime.register_function(0x08A9D6B4u, &recomp_unit_0166, "recomp_unit_0166");
    runtime.register_function(0x08A9D6BCu, &recomp_unit_0166, "recomp_unit_0166");
    runtime.register_function(0x08A9D6C4u, &recomp_unit_0166, "recomp_unit_0166");
    runtime.register_function(0x08A9D704u, &recomp_unit_0166, "recomp_unit_0166");
    runtime.register_function(0x08A9D714u, &recomp_unit_0166, "recomp_unit_0166");
    runtime.register_function(0x08A9D71Cu, &recomp_unit_0166, "recomp_unit_0166");
    runtime.register_function(0x08A9D750u, &recomp_unit_0166, "recomp_unit_0166");
    runtime.register_function(0x08A9D758u, &recomp_unit_0166, "recomp_unit_0166");
    runtime.register_function(0x08A9D78Cu, &recomp_unit_0166, "recomp_unit_0166");
    runtime.register_function(0x08A9D794u, &recomp_unit_0166, "recomp_unit_0166");
    runtime.register_function(0x08A9D7C8u, &recomp_unit_0166, "recomp_unit_0166");
    runtime.register_function(0x08A9D7D0u, &recomp_unit_0166, "recomp_unit_0166");
    runtime.register_function(0x08A9D7E4u, &recomp_unit_0166, "recomp_unit_0166");
    runtime.register_function(0x08A9D7E8u, &recomp_unit_0166, "recomp_unit_0166");
    runtime.register_function(0x08A9D7F0u, &recomp_unit_0166, "recomp_unit_0166");
    runtime.register_function(0x08A9D804u, &recomp_unit_0166, "recomp_unit_0166");
    runtime.register_function(0x08A9D814u, &recomp_unit_0166, "recomp_unit_0166");
    runtime.register_function(0x08A9D81Cu, &recomp_unit_0166, "recomp_unit_0166");
    runtime.register_function(0x08A9D830u, &recomp_unit_0166, "recomp_unit_0166");
    runtime.register_function(0x08A9D838u, &recomp_unit_0166, "recomp_unit_0166");
    runtime.register_function(0x08A9D84Cu, &recomp_unit_0166, "recomp_unit_0166");
    runtime.register_function(0x08A9D854u, &recomp_unit_0166, "recomp_unit_0166");
    runtime.register_function(0x08A9D868u, &recomp_unit_0166, "recomp_unit_0166");
    runtime.register_function(0x08A9D870u, &recomp_unit_0166, "recomp_unit_0166");
    runtime.register_function(0x08A9D87Cu, &recomp_unit_0166, "recomp_unit_0166");
    runtime.register_function(0x08A9D884u, &recomp_unit_0166, "recomp_unit_0166");
    runtime.register_function(0x08A9D890u, &recomp_unit_0166, "recomp_unit_0166");
    runtime.register_function(0x08A9D898u, &recomp_unit_0166, "recomp_unit_0166");
    runtime.register_function(0x08A9D8A0u, &recomp_unit_0166, "recomp_unit_0166");
    runtime.register_function(0x08A9D8A8u, &recomp_unit_0166, "recomp_unit_0166");
    runtime.register_function(0x08A9D8B4u, &recomp_unit_0166, "recomp_unit_0166");
    runtime.register_function(0x08A9D8BCu, &recomp_unit_0166, "recomp_unit_0166");
    runtime.register_function(0x08A9D8C4u, &recomp_unit_0166, "recomp_unit_0166");
    runtime.register_function(0x08A9D8CCu, &recomp_unit_0166, "recomp_unit_0166");
    runtime.register_function(0x08A9D8D8u, &recomp_unit_0166, "recomp_unit_0166");
    runtime.register_function(0x08A9D8ECu, &recomp_unit_0166, "recomp_unit_0166");
    runtime.register_function(0x08A9D8F4u, &recomp_unit_0166, "recomp_unit_0166");
    runtime.register_function(0x08A9D8FCu, &recomp_unit_0166, "recomp_unit_0166");
    runtime.register_function(0x08A9D90Cu, &recomp_unit_0166, "recomp_unit_0166");
    runtime.register_function(0x08A9D914u, &recomp_unit_0166, "recomp_unit_0166");
    runtime.register_function(0x08A9D928u, &recomp_unit_0166, "recomp_unit_0166");
    runtime.register_function(0x08A9D938u, &recomp_unit_0166, "recomp_unit_0166");
    runtime.register_function(0x08A9D93Cu, &recomp_unit_0166, "recomp_unit_0166");
    runtime.register_function(0x08A9D944u, &recomp_unit_0166, "recomp_unit_0166");
    runtime.register_function(0x08A9D954u, &recomp_unit_0166, "recomp_unit_0166");
    runtime.register_function(0x08A9D964u, &recomp_unit_0166, "recomp_unit_0166");
    runtime.register_function(0x08A9D96Cu, &recomp_unit_0166, "recomp_unit_0166");
    runtime.register_function(0x08A9D980u, &recomp_unit_0166, "recomp_unit_0166");
    runtime.register_function(0x08A9D988u, &recomp_unit_0166, "recomp_unit_0166");
    runtime.register_function(0x08A9D99Cu, &recomp_unit_0166, "recomp_unit_0166");
    runtime.register_function(0x08A9D9A4u, &recomp_unit_0166, "recomp_unit_0166");
    runtime.register_function(0x08A9D9B8u, &recomp_unit_0166, "recomp_unit_0166");
    runtime.register_function(0x08A9D9C0u, &recomp_unit_0166, "recomp_unit_0166");
    runtime.register_function(0x08A9D9D0u, &recomp_unit_0166, "recomp_unit_0166");
    runtime.register_function(0x08A9D9D8u, &recomp_unit_0166, "recomp_unit_0166");
    runtime.register_function(0x08A9D9E0u, &recomp_unit_0166, "recomp_unit_0166");
    runtime.register_function(0x08A9D9F0u, &recomp_unit_0166, "recomp_unit_0166");
    runtime.register_function(0x08A9DA18u, &recomp_unit_0166, "recomp_unit_0166");
    runtime.register_function(0x08A9DA34u, &recomp_unit_0166, "recomp_unit_0166");
    runtime.register_function(0x08A9DA3Cu, &recomp_unit_0166, "recomp_unit_0166");
    runtime.register_function(0x08A9DA44u, &recomp_unit_0166, "recomp_unit_0166");
    runtime.register_function(0x08A9DA50u, &recomp_unit_0166, "recomp_unit_0166");
    runtime.register_function(0x08A9DA58u, &recomp_unit_0166, "recomp_unit_0166");
    runtime.register_function(0x08A9DA60u, &recomp_unit_0166, "recomp_unit_0166");
    runtime.register_function(0x08A9DA68u, &recomp_unit_0166, "recomp_unit_0166");
    runtime.register_function(0x08A9DA78u, &recomp_unit_0166, "recomp_unit_0166");
    runtime.register_function(0x08A9DA88u, &recomp_unit_0166, "recomp_unit_0166");
    runtime.register_function(0x08A9DA94u, &recomp_unit_0166, "recomp_unit_0166");
    runtime.register_function(0x08A9DAA8u, &recomp_unit_0166, "recomp_unit_0166");
    runtime.register_function(0x08A9DAB0u, &recomp_unit_0166, "recomp_unit_0166");
    runtime.register_function(0x08A9DAB8u, &recomp_unit_0166, "recomp_unit_0166");
    runtime.register_function(0x08A9DAC0u, &recomp_unit_0166, "recomp_unit_0166");
    runtime.register_function(0x08A9DAC8u, &recomp_unit_0166, "recomp_unit_0166");
    runtime.register_function(0x08A9DAD0u, &recomp_unit_0166, "recomp_unit_0166");
    runtime.register_function(0x08A9DAD8u, &recomp_unit_0166, "recomp_unit_0166");
    runtime.register_function(0x08A9DAE0u, &recomp_unit_0166, "recomp_unit_0166");
    runtime.register_function(0x08A9DAF0u, &recomp_unit_0166, "recomp_unit_0166");
    runtime.register_function(0x08A9DB10u, &recomp_unit_0166, "recomp_unit_0166");
    runtime.register_function(0x08A9DB18u, &recomp_unit_0166, "recomp_unit_0166");
    runtime.register_function(0x08A9DB28u, &recomp_unit_0166, "recomp_unit_0166");
    runtime.register_function(0x08A9DB40u, &recomp_unit_0166, "recomp_unit_0166");
    runtime.register_function(0x08A9DB48u, &recomp_unit_0166, "recomp_unit_0166");
    runtime.register_function(0x08A9DB58u, &recomp_unit_0166, "recomp_unit_0166");
    runtime.register_function(0x08A9DB60u, &recomp_unit_0166, "recomp_unit_0166");
    runtime.register_function(0x08A9DB68u, &recomp_unit_0166, "recomp_unit_0166");
    runtime.register_function(0x08A9DB70u, &recomp_unit_0166, "recomp_unit_0166");
    runtime.register_function(0x08A9DB78u, &recomp_unit_0166, "recomp_unit_0166");
    runtime.register_function(0x08A9DB80u, &recomp_unit_0166, "recomp_unit_0166");
    runtime.register_function(0x08A9DB88u, &recomp_unit_0166, "recomp_unit_0166");
    runtime.register_function(0x08A9DBA0u, &recomp_unit_0166, "recomp_unit_0166");
    runtime.register_function(0x08A9DBACu, &recomp_unit_0166, "recomp_unit_0166");
    runtime.register_function(0x08A9DBB4u, &recomp_unit_0166, "recomp_unit_0166");
    runtime.register_function(0x08A9DBBCu, &recomp_unit_0166, "recomp_unit_0166");
    runtime.register_function(0x08A9DBC4u, &recomp_unit_0166, "recomp_unit_0166");
    runtime.register_function(0x08A9DBCCu, &recomp_unit_0166, "recomp_unit_0166");
    runtime.register_function(0x08A9DBD4u, &recomp_unit_0166, "recomp_unit_0166");
    runtime.register_function(0x08A9DBDCu, &recomp_unit_0166, "recomp_unit_0166");
    runtime.register_function(0x08A9DBF4u, &recomp_unit_0166, "recomp_unit_0166");
    runtime.register_function(0x08A9DC00u, &recomp_unit_0166, "recomp_unit_0166");
    runtime.register_function(0x08A9DC08u, &recomp_unit_0166, "recomp_unit_0166");
    runtime.register_function(0x08A9DC14u, &recomp_unit_0166, "recomp_unit_0166");
    runtime.register_function(0x08A9DC24u, &recomp_unit_0166, "recomp_unit_0166");
    runtime.register_function(0x08A9DC30u, &recomp_unit_0166, "recomp_unit_0166");
    runtime.register_function(0x08A9DC38u, &recomp_unit_0166, "recomp_unit_0166");
    runtime.register_function(0x08A9DC44u, &recomp_unit_0166, "recomp_unit_0166");
    runtime.register_function(0x08A9DC5Cu, &recomp_unit_0166, "recomp_unit_0166");
    runtime.register_function(0x08A9DC6Cu, &recomp_unit_0166, "recomp_unit_0166");
    runtime.register_function(0x08A9DC74u, &recomp_unit_0166, "recomp_unit_0166");
    runtime.register_function(0x08A9DC80u, &recomp_unit_0166, "recomp_unit_0166");
    runtime.register_function(0x08A9DC88u, &recomp_unit_0166, "recomp_unit_0166");
    runtime.register_function(0x08A9DC90u, &recomp_unit_0166, "recomp_unit_0166");
    runtime.register_function(0x08A9DCA8u, &recomp_unit_0166, "recomp_unit_0166");
    runtime.register_function(0x08A9DCACu, &recomp_unit_0166, "recomp_unit_0166");
    runtime.register_function(0x08A9DCC0u, &recomp_unit_0166, "recomp_unit_0166");
    runtime.register_function(0x08A9DCD4u, &recomp_unit_0166, "recomp_unit_0166");
    runtime.register_function(0x08A9DCF4u, &recomp_unit_0166, "recomp_unit_0166");
    runtime.register_function(0x08A9DD00u, &recomp_unit_0166, "recomp_unit_0166");
    runtime.register_function(0x08A9DD0Cu, &recomp_unit_0166, "recomp_unit_0166");
    runtime.register_function(0x08A9DD18u, &recomp_unit_0166, "recomp_unit_0166");
    runtime.register_function(0x08A9DD20u, &recomp_unit_0166, "recomp_unit_0166");
    runtime.register_function(0x08A9DD28u, &recomp_unit_0166, "recomp_unit_0166");
    runtime.register_function(0x08A9DD30u, &recomp_unit_0166, "recomp_unit_0166");
    runtime.register_function(0x08A9DD40u, &recomp_unit_0166, "recomp_unit_0166");
    runtime.register_function(0x08A9DD48u, &recomp_unit_0166, "recomp_unit_0166");
    runtime.register_function(0x08A9DD58u, &recomp_unit_0166, "recomp_unit_0166");
    runtime.register_function(0x08A9DD60u, &recomp_unit_0166, "recomp_unit_0166");
    runtime.register_function(0x08A9DD68u, &recomp_unit_0166, "recomp_unit_0166");
    runtime.register_function(0x08A9DD7Cu, &recomp_unit_0166, "recomp_unit_0166");
    runtime.register_function(0x08A9DD84u, &recomp_unit_0166, "recomp_unit_0166");
    runtime.register_function(0x08A9DDB4u, &recomp_unit_0166, "recomp_unit_0166");
    runtime.register_function(0x08A9DDBCu, &recomp_unit_0166, "recomp_unit_0166");
    runtime.register_function(0x08A9DDCCu, &recomp_unit_0166, "recomp_unit_0166");
    runtime.register_function(0x08A9DDD8u, &recomp_unit_0166, "recomp_unit_0166");
    runtime.register_function(0x08A9DDE0u, &recomp_unit_0166, "recomp_unit_0166");
    runtime.register_function(0x08A9DDF0u, &recomp_unit_0166, "recomp_unit_0166");
    runtime.register_function(0x08A9DE10u, &recomp_unit_0166, "recomp_unit_0166");
    runtime.register_function(0x08A9DE18u, &recomp_unit_0166, "recomp_unit_0166");
    runtime.register_function(0x08A9DE28u, &recomp_unit_0166, "recomp_unit_0166");
    runtime.register_function(0x08A9DE48u, &recomp_unit_0166, "recomp_unit_0166");
    runtime.register_function(0x08A9DE50u, &recomp_unit_0166, "recomp_unit_0166");
    runtime.register_function(0x08A9DE60u, &recomp_unit_0166, "recomp_unit_0166");
    runtime.register_function(0x08A9DE80u, &recomp_unit_0166, "recomp_unit_0166");
    runtime.register_function(0x08A9DE88u, &recomp_unit_0166, "recomp_unit_0166");
    runtime.register_function(0x08A9DE98u, &recomp_unit_0166, "recomp_unit_0166");
    runtime.register_function(0x08A9DEB8u, &recomp_unit_0166, "recomp_unit_0166");
    runtime.register_function(0x08A9DEC0u, &recomp_unit_0166, "recomp_unit_0166");
    runtime.register_function(0x08A9DED0u, &recomp_unit_0166, "recomp_unit_0166");
    runtime.register_function(0x08A9DED8u, &recomp_unit_0166, "recomp_unit_0166");
    runtime.register_function(0x08A9DEE4u, &recomp_unit_0166, "recomp_unit_0166");
    runtime.register_function(0x08A9DEECu, &recomp_unit_0166, "recomp_unit_0166");
    runtime.register_function(0x08A9DEF4u, &recomp_unit_0166, "recomp_unit_0166");
    runtime.register_function(0x08A9DF0Cu, &recomp_unit_0166, "recomp_unit_0166");
    runtime.register_function(0x08A9DF14u, &recomp_unit_0166, "recomp_unit_0166");
    runtime.register_function(0x08A9DF20u, &recomp_unit_0166, "recomp_unit_0166");
    runtime.register_function(0x08A9DF28u, &recomp_unit_0166, "recomp_unit_0166");
    runtime.register_function(0x08A9DF38u, &recomp_unit_0166, "recomp_unit_0166");
    runtime.register_function(0x08A9DF40u, &recomp_unit_0166, "recomp_unit_0166");
    runtime.register_function(0x08A9DF4Cu, &recomp_unit_0166, "recomp_unit_0166");
    runtime.register_function(0x08A9DF54u, &recomp_unit_0166, "recomp_unit_0166");
    runtime.register_function(0x08A9DF5Cu, &recomp_unit_0166, "recomp_unit_0166");
    runtime.register_function(0x08A9DF6Cu, &recomp_unit_0166, "recomp_unit_0166");
    runtime.register_function(0x08A9DF74u, &recomp_unit_0166, "recomp_unit_0166");
    runtime.register_function(0x08A9DF7Cu, &recomp_unit_0166, "recomp_unit_0166");
    runtime.register_function(0x08A9DF88u, &recomp_unit_0166, "recomp_unit_0166");
    runtime.register_function(0x08A9DF90u, &recomp_unit_0166, "recomp_unit_0166");
    runtime.register_function(0x08A9DF98u, &recomp_unit_0166, "recomp_unit_0166");
    runtime.register_function(0x08A9DFA0u, &recomp_unit_0166, "recomp_unit_0166");
    runtime.register_function(0x08A9DFA8u, &recomp_unit_0166, "recomp_unit_0166");
    runtime.register_function(0x08A9DFBCu, &recomp_unit_0166, "recomp_unit_0166");
    runtime.register_function(0x08A9DFC4u, &recomp_unit_0166, "recomp_unit_0166");
    runtime.register_function(0x08A9DFD0u, &recomp_unit_0166, "recomp_unit_0166");
    runtime.register_function(0x08A9DFD8u, &recomp_unit_0166, "recomp_unit_0166");
    runtime.register_function(0x08A9DFE0u, &recomp_unit_0166, "recomp_unit_0166");
    runtime.register_function(0x08A9DFECu, &recomp_unit_0166, "recomp_unit_0166");
    runtime.register_function(0x08A9DFF8u, &recomp_unit_0166, "recomp_unit_0166");
    runtime.register_function(0x08A9E004u, &recomp_unit_0166, "recomp_unit_0166");
    runtime.register_function(0x08A9E00Cu, &recomp_unit_0166, "recomp_unit_0166");
    runtime.register_function(0x08A9E014u, &recomp_unit_0166, "recomp_unit_0166");
    runtime.register_function(0x08A9E020u, &recomp_unit_0166, "recomp_unit_0166");
    runtime.register_function(0x08A9E028u, &recomp_unit_0166, "recomp_unit_0166");
    runtime.register_function(0x08A9E030u, &recomp_unit_0166, "recomp_unit_0166");
    runtime.register_function(0x08A9E038u, &recomp_unit_0166, "recomp_unit_0166");
    runtime.register_function(0x08A9E040u, &recomp_unit_0166, "recomp_unit_0166");
    runtime.register_function(0x08A9E058u, &recomp_unit_0166, "recomp_unit_0166");
    runtime.register_function(0x08A9E060u, &recomp_unit_0166, "recomp_unit_0166");
    runtime.register_function(0x08A9E06Cu, &recomp_unit_0166, "recomp_unit_0166");
    runtime.register_function(0x08A9E084u, &recomp_unit_0166, "recomp_unit_0166");
    runtime.register_function(0x08A9E08Cu, &recomp_unit_0166, "recomp_unit_0166");
    runtime.register_function(0x08A9E098u, &recomp_unit_0166, "recomp_unit_0166");
    runtime.register_function(0x08A9E0A0u, &recomp_unit_0166, "recomp_unit_0166");
    runtime.register_function(0x08A9E0A8u, &recomp_unit_0166, "recomp_unit_0166");
    runtime.register_function(0x08A9E0B0u, &recomp_unit_0166, "recomp_unit_0166");
    runtime.register_function(0x08A9E0B8u, &recomp_unit_0166, "recomp_unit_0166");
    runtime.register_function(0x08A9E0C0u, &recomp_unit_0166, "recomp_unit_0166");
    runtime.register_function(0x08A9E0CCu, &recomp_unit_0166, "recomp_unit_0166");
    runtime.register_function(0x08A9E0DCu, &recomp_unit_0166, "recomp_unit_0166");
    runtime.register_function(0x08A9E0E4u, &recomp_unit_0166, "recomp_unit_0166");
    runtime.register_function(0x08A9E0ECu, &recomp_unit_0166, "recomp_unit_0166");
    runtime.register_function(0x08A9E0F8u, &recomp_unit_0166, "recomp_unit_0166");
    runtime.register_function(0x08A9E10Cu, &recomp_unit_0166, "recomp_unit_0166");
    runtime.register_function(0x08A9E128u, &recomp_unit_0166, "recomp_unit_0166");
    runtime.register_function(0x08A9E12Cu, &recomp_unit_0166, "recomp_unit_0166");
    runtime.register_function(0x08A9E13Cu, &recomp_unit_0166, "recomp_unit_0166");
    runtime.register_function(0x08A9E15Cu, &recomp_unit_0166, "recomp_unit_0166");
    runtime.register_function(0x08A9E168u, &recomp_unit_0166, "recomp_unit_0166");
    runtime.register_function(0x08A9E174u, &recomp_unit_0166, "recomp_unit_0166");
    runtime.register_function(0x08A9E17Cu, &recomp_unit_0166, "recomp_unit_0166");
    runtime.register_function(0x08A9E184u, &recomp_unit_0166, "recomp_unit_0166");
    runtime.register_function(0x08A9E18Cu, &recomp_unit_0166, "recomp_unit_0166");
    runtime.register_function(0x08A9E194u, &recomp_unit_0166, "recomp_unit_0166");
    runtime.register_function(0x08A9E1A8u, &recomp_unit_0166, "recomp_unit_0166");
    runtime.register_function(0x08A9E1B0u, &recomp_unit_0166, "recomp_unit_0166");
    runtime.register_function(0x08A9E1E0u, &recomp_unit_0166, "recomp_unit_0166");
    runtime.register_function(0x08A9E1E8u, &recomp_unit_0166, "recomp_unit_0166");
    runtime.register_function(0x08A9E1F8u, &recomp_unit_0166, "recomp_unit_0166");
    runtime.register_function(0x08A9E204u, &recomp_unit_0166, "recomp_unit_0166");
    runtime.register_function(0x08A9E20Cu, &recomp_unit_0166, "recomp_unit_0166");
    runtime.register_function(0x08A9E21Cu, &recomp_unit_0166, "recomp_unit_0166");
    runtime.register_function(0x08A9E23Cu, &recomp_unit_0166, "recomp_unit_0166");
    runtime.register_function(0x08A9E244u, &recomp_unit_0166, "recomp_unit_0166");
    runtime.register_function(0x08A9E254u, &recomp_unit_0166, "recomp_unit_0166");
    runtime.register_function(0x08A9E274u, &recomp_unit_0166, "recomp_unit_0166");
    runtime.register_function(0x08A9E27Cu, &recomp_unit_0166, "recomp_unit_0166");
    runtime.register_function(0x08A9E288u, &recomp_unit_0166, "recomp_unit_0166");
    runtime.register_function(0x08A9E290u, &recomp_unit_0166, "recomp_unit_0166");
    runtime.register_function(0x08A9E298u, &recomp_unit_0166, "recomp_unit_0166");
    runtime.register_function(0x08A9E2B0u, &recomp_unit_0166, "recomp_unit_0166");
    runtime.register_function(0x08A9E2B8u, &recomp_unit_0166, "recomp_unit_0166");
    runtime.register_function(0x08A9E2C4u, &recomp_unit_0166, "recomp_unit_0166");
    runtime.register_function(0x08A9E2CCu, &recomp_unit_0166, "recomp_unit_0166");
    runtime.register_function(0x08A9E2DCu, &recomp_unit_0166, "recomp_unit_0166");
    runtime.register_function(0x08A9E2E4u, &recomp_unit_0166, "recomp_unit_0166");
    runtime.register_function(0x08A9E2F0u, &recomp_unit_0166, "recomp_unit_0166");
    runtime.register_function(0x08A9E2F8u, &recomp_unit_0166, "recomp_unit_0166");
    runtime.register_function(0x08A9E300u, &recomp_unit_0166, "recomp_unit_0166");
    runtime.register_function(0x08A9E30Cu, &recomp_unit_0166, "recomp_unit_0166");
    runtime.register_function(0x08A9E318u, &recomp_unit_0166, "recomp_unit_0166");
    runtime.register_function(0x08A9E324u, &recomp_unit_0166, "recomp_unit_0166");
    runtime.register_function(0x08A9E32Cu, &recomp_unit_0166, "recomp_unit_0166");
    runtime.register_function(0x08A9E334u, &recomp_unit_0166, "recomp_unit_0166");
    runtime.register_function(0x08A9E340u, &recomp_unit_0166, "recomp_unit_0166");
    runtime.register_function(0x08A9E358u, &recomp_unit_0166, "recomp_unit_0166");
    runtime.register_function(0x08A9E360u, &recomp_unit_0166, "recomp_unit_0166");
    runtime.register_function(0x08A9E36Cu, &recomp_unit_0166, "recomp_unit_0166");
    runtime.register_function(0x08A9E384u, &recomp_unit_0166, "recomp_unit_0166");
    runtime.register_function(0x08A9E38Cu, &recomp_unit_0166, "recomp_unit_0166");
    runtime.register_function(0x08A9E398u, &recomp_unit_0166, "recomp_unit_0166");
    runtime.register_function(0x08A9E3A0u, &recomp_unit_0166, "recomp_unit_0166");
    runtime.register_function(0x08A9E3A8u, &recomp_unit_0166, "recomp_unit_0166");
    runtime.register_function(0x08A9E3B0u, &recomp_unit_0166, "recomp_unit_0166");
    runtime.register_function(0x08A9E3B8u, &recomp_unit_0166, "recomp_unit_0166");
    runtime.register_function(0x08A9E3C0u, &recomp_unit_0166, "recomp_unit_0166");
    runtime.register_function(0x08A9E3CCu, &recomp_unit_0166, "recomp_unit_0166");
    runtime.register_function(0x08A9E3DCu, &recomp_unit_0166, "recomp_unit_0166");
    runtime.register_function(0x08A9E3E4u, &recomp_unit_0166, "recomp_unit_0166");
    runtime.register_function(0x08A9E3ECu, &recomp_unit_0166, "recomp_unit_0166");
    runtime.register_function(0x08A9E3F8u, &recomp_unit_0166, "recomp_unit_0166");
    runtime.register_function(0x08A9E404u, &recomp_unit_0166, "recomp_unit_0166");
    runtime.register_function(0x08A9E414u, &recomp_unit_0166, "recomp_unit_0166");
    runtime.register_function(0x08A9E418u, &recomp_unit_0166, "recomp_unit_0166");
    runtime.register_function(0x08A9E428u, &recomp_unit_0166, "recomp_unit_0166");
    runtime.register_function(0x08A9E45Cu, &recomp_unit_0166, "recomp_unit_0166");
    runtime.register_function(0x08A9E468u, &recomp_unit_0166, "recomp_unit_0166");
    runtime.register_function(0x08A9E470u, &recomp_unit_0166, "recomp_unit_0166");
    runtime.register_function(0x08A9E478u, &recomp_unit_0166, "recomp_unit_0166");
    runtime.register_function(0x08A9E48Cu, &recomp_unit_0166, "recomp_unit_0166");
    runtime.register_function(0x08A9E498u, &recomp_unit_0166, "recomp_unit_0166");
    runtime.register_function(0x08A9E4A0u, &recomp_unit_0166, "recomp_unit_0166");
    runtime.register_function(0x08A9E4ACu, &recomp_unit_0166, "recomp_unit_0166");
    runtime.register_function(0x08A9E4B8u, &recomp_unit_0166, "recomp_unit_0166");
    runtime.register_function(0x08A9E4D8u, &recomp_unit_0166, "recomp_unit_0166");
    runtime.register_function(0x08A9E4E0u, &recomp_unit_0166, "recomp_unit_0166");
    runtime.register_function(0x08A9E4E4u, &recomp_unit_0166, "recomp_unit_0166");
    runtime.register_function(0x08A9E4ECu, &recomp_unit_0166, "recomp_unit_0166");
    runtime.register_function(0x08A9E4F8u, &recomp_unit_0166, "recomp_unit_0166");
    runtime.register_function(0x08A9E500u, &recomp_unit_0166, "recomp_unit_0166");
    runtime.register_function(0x08A9E50Cu, &recomp_unit_0166, "recomp_unit_0166");
    runtime.register_function(0x08A9E514u, &recomp_unit_0166, "recomp_unit_0166");
    runtime.register_function(0x08A9E520u, &recomp_unit_0166, "recomp_unit_0166");
    runtime.register_function(0x08A9E528u, &recomp_unit_0166, "recomp_unit_0166");
    runtime.register_function(0x08A9E530u, &recomp_unit_0166, "recomp_unit_0166");
    runtime.register_function(0x08A9E534u, &recomp_unit_0166, "recomp_unit_0166");
    runtime.register_function(0x08A9E538u, &recomp_unit_0166, "recomp_unit_0166");
    runtime.register_function(0x08A9E544u, &recomp_unit_0166, "recomp_unit_0166");
    runtime.register_function(0x08A9E54Cu, &recomp_unit_0166, "recomp_unit_0166");
    runtime.register_function(0x08A9E558u, &recomp_unit_0166, "recomp_unit_0166");
    runtime.register_function(0x08A9E560u, &recomp_unit_0166, "recomp_unit_0166");
    runtime.register_function(0x08A9E570u, &recomp_unit_0166, "recomp_unit_0166");
    runtime.register_function(0x08A9E578u, &recomp_unit_0166, "recomp_unit_0166");
    runtime.register_function(0x08A9E584u, &recomp_unit_0166, "recomp_unit_0166");
    runtime.register_function(0x08A9E58Cu, &recomp_unit_0166, "recomp_unit_0166");
    runtime.register_function(0x08A9E5ACu, &recomp_unit_0166, "recomp_unit_0166");
    runtime.register_function(0x08A9E5B8u, &recomp_unit_0166, "recomp_unit_0166");
    runtime.register_function(0x08A9E5C4u, &recomp_unit_0166, "recomp_unit_0166");
    runtime.register_function(0x08A9E5CCu, &recomp_unit_0166, "recomp_unit_0166");
    runtime.register_function(0x08A9E5E0u, &recomp_unit_0166, "recomp_unit_0166");
    runtime.register_function(0x08A9E5E8u, &recomp_unit_0166, "recomp_unit_0166");
    runtime.register_function(0x08A9E5FCu, &recomp_unit_0166, "recomp_unit_0166");
    runtime.register_function(0x08A9E604u, &recomp_unit_0166, "recomp_unit_0166");
    runtime.register_function(0x08A9E618u, &recomp_unit_0166, "recomp_unit_0166");
    runtime.register_function(0x08A9E620u, &recomp_unit_0166, "recomp_unit_0166");
    runtime.register_function(0x08A9E62Cu, &recomp_unit_0166, "recomp_unit_0166");
    runtime.register_function(0x08A9E63Cu, &recomp_unit_0166, "recomp_unit_0166");
    runtime.register_function(0x08A9E644u, &recomp_unit_0166, "recomp_unit_0166");
    runtime.register_function(0x08A9E658u, &recomp_unit_0166, "recomp_unit_0166");
    runtime.register_function(0x08A9E660u, &recomp_unit_0166, "recomp_unit_0166");
    runtime.register_function(0x08A9E674u, &recomp_unit_0166, "recomp_unit_0166");
    runtime.register_function(0x08A9E67Cu, &recomp_unit_0166, "recomp_unit_0166");
    runtime.register_function(0x08A9E684u, &recomp_unit_0166, "recomp_unit_0166");
    runtime.register_function(0x08A9E694u, &recomp_unit_0166, "recomp_unit_0166");
    runtime.register_function(0x08A9E69Cu, &recomp_unit_0166, "recomp_unit_0166");
    runtime.register_function(0x08A9E6ACu, &recomp_unit_0166, "recomp_unit_0166");
    runtime.register_function(0x08A9E6B4u, &recomp_unit_0166, "recomp_unit_0166");
    runtime.register_function(0x08A9E6C0u, &recomp_unit_0166, "recomp_unit_0166");
    runtime.register_function(0x08A9E6C8u, &recomp_unit_0166, "recomp_unit_0166");
    runtime.register_function(0x08A9E6E8u, &recomp_unit_0166, "recomp_unit_0166");
    runtime.register_function(0x08A9E6F4u, &recomp_unit_0166, "recomp_unit_0166");
    runtime.register_function(0x08A9E704u, &recomp_unit_0166, "recomp_unit_0166");
    runtime.register_function(0x08A9E70Cu, &recomp_unit_0166, "recomp_unit_0166");
    runtime.register_function(0x08A9E734u, &recomp_unit_0166, "recomp_unit_0166");
    runtime.register_function(0x08A9E73Cu, &recomp_unit_0166, "recomp_unit_0166");
    runtime.register_function(0x08A9E758u, &recomp_unit_0166, "recomp_unit_0166");
    runtime.register_function(0x08A9E760u, &recomp_unit_0166, "recomp_unit_0166");
    runtime.register_function(0x08A9E764u, &recomp_unit_0166, "recomp_unit_0166");
    runtime.register_function(0x08A9E77Cu, &recomp_unit_0166, "recomp_unit_0166");
    runtime.register_function(0x08A9E78Cu, &recomp_unit_0166, "recomp_unit_0166");
    runtime.register_function(0x08A9E7A0u, &recomp_unit_0166, "recomp_unit_0166");
    runtime.register_function(0x08A9E7A8u, &recomp_unit_0166, "recomp_unit_0166");
    runtime.register_function(0x08A9E7BCu, &recomp_unit_0166, "recomp_unit_0166");
    runtime.register_function(0x08A9E7C4u, &recomp_unit_0166, "recomp_unit_0166");
    runtime.register_function(0x08A9E7D8u, &recomp_unit_0166, "recomp_unit_0166");
    runtime.register_function(0x08A9E7DCu, &recomp_unit_0166, "recomp_unit_0166");
    runtime.register_function(0x08A9E7E4u, &recomp_unit_0166, "recomp_unit_0166");
    runtime.register_function(0x08A9E7F8u, &recomp_unit_0166, "recomp_unit_0166");
    runtime.register_function(0x08A9E808u, &recomp_unit_0166, "recomp_unit_0166");
    runtime.register_function(0x08A9E80Cu, &recomp_unit_0166, "recomp_unit_0166");
    runtime.register_function(0x08A9E814u, &recomp_unit_0166, "recomp_unit_0166");
    runtime.register_function(0x08A9E828u, &recomp_unit_0166, "recomp_unit_0166");
    runtime.register_function(0x08A9E830u, &recomp_unit_0166, "recomp_unit_0166");
    runtime.register_function(0x08A9E844u, &recomp_unit_0166, "recomp_unit_0166");
    runtime.register_function(0x08A9E854u, &recomp_unit_0166, "recomp_unit_0166");
    runtime.register_function(0x08A9E864u, &recomp_unit_0166, "recomp_unit_0166");
    runtime.register_function(0x08A9E87Cu, &recomp_unit_0166, "recomp_unit_0166");
    runtime.register_function(0x08A9E894u, &recomp_unit_0166, "recomp_unit_0166");
    runtime.register_function(0x08A9E8A8u, &recomp_unit_0166, "recomp_unit_0166");
    runtime.register_function(0x08A9E8B0u, &recomp_unit_0166, "recomp_unit_0166");
    runtime.register_function(0x08A9E8B8u, &recomp_unit_0166, "recomp_unit_0166");
    runtime.register_function(0x08A9E8D0u, &recomp_unit_0166, "recomp_unit_0166");
    runtime.register_function(0x08A9E8E4u, &recomp_unit_0166, "recomp_unit_0166");
    runtime.register_function(0x08A9E8E8u, &recomp_unit_0166, "recomp_unit_0166");
    runtime.register_function(0x08A9E8FCu, &recomp_unit_0166, "recomp_unit_0166");
    runtime.register_function(0x08A9E910u, &recomp_unit_0166, "recomp_unit_0166");
    runtime.register_function(0x08A9E924u, &recomp_unit_0166, "recomp_unit_0166");
    runtime.register_function(0x08A9E930u, &recomp_unit_0166, "recomp_unit_0166");
    runtime.register_function(0x08A9E94Cu, &recomp_unit_0166, "recomp_unit_0166");
    runtime.register_function(0x08A9E958u, &recomp_unit_0166, "recomp_unit_0166");
    runtime.register_function(0x08A9E960u, &recomp_unit_0166, "recomp_unit_0166");
    runtime.register_function(0x08A9E968u, &recomp_unit_0166, "recomp_unit_0166");
    runtime.register_function(0x08A9E970u, &recomp_unit_0166, "recomp_unit_0166");
    runtime.register_function(0x08A9E978u, &recomp_unit_0166, "recomp_unit_0166");
    runtime.register_function(0x08A9E988u, &recomp_unit_0166, "recomp_unit_0166");
    runtime.register_function(0x08A9E994u, &recomp_unit_0166, "recomp_unit_0166");
    runtime.register_function(0x08A9E99Cu, &recomp_unit_0166, "recomp_unit_0166");
    runtime.register_function(0x08A9E9A4u, &recomp_unit_0166, "recomp_unit_0166");
    runtime.register_function(0x08A9E9B4u, &recomp_unit_0166, "recomp_unit_0166");
    runtime.register_function(0x08A9E9C0u, &recomp_unit_0166, "recomp_unit_0166");
    runtime.register_function(0x08A9E9C8u, &recomp_unit_0166, "recomp_unit_0166");
    runtime.register_function(0x08A9E9D0u, &recomp_unit_0166, "recomp_unit_0166");
    runtime.register_function(0x08A9E9E0u, &recomp_unit_0166, "recomp_unit_0166");
    runtime.register_function(0x08A9E9ECu, &recomp_unit_0166, "recomp_unit_0166");
    runtime.register_function(0x08A9E9F0u, &recomp_unit_0166, "recomp_unit_0166");
    runtime.register_function(0x08A9EA00u, &recomp_unit_0166, "recomp_unit_0166");
    runtime.register_function(0x08A9EA1Cu, &recomp_unit_0166, "recomp_unit_0166");
    runtime.register_function(0x08A9EA24u, &recomp_unit_0166, "recomp_unit_0166");
    runtime.register_function(0x08A9EA38u, &recomp_unit_0166, "recomp_unit_0166");
    runtime.register_function(0x08A9EA44u, &recomp_unit_0166, "recomp_unit_0166");
    runtime.register_function(0x08A9EA4Cu, &recomp_unit_0166, "recomp_unit_0166");
    runtime.register_function(0x08A9EA54u, &recomp_unit_0166, "recomp_unit_0166");
    runtime.register_function(0x08A9EA88u, &recomp_unit_0166, "recomp_unit_0166");
    runtime.register_function(0x08A9EA90u, &recomp_unit_0166, "recomp_unit_0166");
    runtime.register_function(0x08A9EA98u, &recomp_unit_0166, "recomp_unit_0166");
    runtime.register_function(0x08A9EAACu, &recomp_unit_0166, "recomp_unit_0166");
    runtime.register_function(0x08A9EAB8u, &recomp_unit_0166, "recomp_unit_0166");
    runtime.register_function(0x08A9EAC0u, &recomp_unit_0166, "recomp_unit_0166");
    runtime.register_function(0x08A9EACCu, &recomp_unit_0166, "recomp_unit_0166");
    runtime.register_function(0x08A9EAD4u, &recomp_unit_0166, "recomp_unit_0166");
    runtime.register_function(0x08A9EADCu, &recomp_unit_0166, "recomp_unit_0166");
    runtime.register_function(0x08A9EAF0u, &recomp_unit_0166, "recomp_unit_0166");
    runtime.register_function(0x08A9EB00u, &recomp_unit_0166, "recomp_unit_0166");
    runtime.register_function(0x08A9EB0Cu, &recomp_unit_0166, "recomp_unit_0166");
    runtime.register_function(0x08A9EB34u, &recomp_unit_0166, "recomp_unit_0166");
    runtime.register_function(0x08A9EB38u, &recomp_unit_0166, "recomp_unit_0166");
    runtime.register_function(0x08A9EB40u, &recomp_unit_0166, "recomp_unit_0166");
    runtime.register_function(0x08A9EB60u, &recomp_unit_0166, "recomp_unit_0166");
    runtime.register_function(0x08A9EB64u, &recomp_unit_0166, "recomp_unit_0166");
    runtime.register_function(0x08A9EB78u, &recomp_unit_0166, "recomp_unit_0166");
    runtime.register_function(0x08A9EB80u, &recomp_unit_0166, "recomp_unit_0166");
    runtime.register_function(0x08A9EB8Cu, &recomp_unit_0166, "recomp_unit_0166");
    runtime.register_function(0x08A9EB94u, &recomp_unit_0166, "recomp_unit_0166");
    runtime.register_function(0x08A9EB98u, &recomp_unit_0166, "recomp_unit_0166");
    runtime.register_function(0x08A9EBA0u, &recomp_unit_0166, "recomp_unit_0166");
    runtime.register_function(0x08A9EBACu, &recomp_unit_0166, "recomp_unit_0166");
    runtime.register_function(0x08A9EBB4u, &recomp_unit_0166, "recomp_unit_0166");
    runtime.register_function(0x08A9EBBCu, &recomp_unit_0166, "recomp_unit_0166");
    runtime.register_function(0x08A9EBD0u, &recomp_unit_0166, "recomp_unit_0166");
    runtime.register_function(0x08A9EBDCu, &recomp_unit_0166, "recomp_unit_0166");
    runtime.register_function(0x08A9EBE8u, &recomp_unit_0166, "recomp_unit_0166");
    runtime.register_function(0x08A9EC10u, &recomp_unit_0166, "recomp_unit_0166");
    runtime.register_function(0x08A9EC14u, &recomp_unit_0166, "recomp_unit_0166");
    runtime.register_function(0x08A9EC1Cu, &recomp_unit_0166, "recomp_unit_0166");
    runtime.register_function(0x08A9EC3Cu, &recomp_unit_0166, "recomp_unit_0166");
    runtime.register_function(0x08A9EC40u, &recomp_unit_0166, "recomp_unit_0166");
    runtime.register_function(0x08A9EC54u, &recomp_unit_0166, "recomp_unit_0166");
    runtime.register_function(0x08A9EC5Cu, &recomp_unit_0166, "recomp_unit_0166");
    runtime.register_function(0x08A9EC68u, &recomp_unit_0166, "recomp_unit_0166");
    runtime.register_function(0x08A9EC70u, &recomp_unit_0166, "recomp_unit_0166");
    runtime.register_function(0x08A9EC74u, &recomp_unit_0166, "recomp_unit_0166");
    runtime.register_function(0x08A9EC78u, &recomp_unit_0166, "recomp_unit_0166");
    runtime.register_function(0x08A9EC80u, &recomp_unit_0166, "recomp_unit_0166");
    runtime.register_function(0x08A9EC88u, &recomp_unit_0166, "recomp_unit_0166");
    runtime.register_function(0x08A9EC94u, &recomp_unit_0166, "recomp_unit_0166");
    runtime.register_function(0x08A9EC9Cu, &recomp_unit_0166, "recomp_unit_0166");
    runtime.register_function(0x08A9ECA4u, &recomp_unit_0166, "recomp_unit_0166");
    runtime.register_function(0x08A9ECB8u, &recomp_unit_0166, "recomp_unit_0166");
    runtime.register_function(0x08A9ECC8u, &recomp_unit_0166, "recomp_unit_0166");
    runtime.register_function(0x08A9ECD4u, &recomp_unit_0166, "recomp_unit_0166");
    runtime.register_function(0x08A9ECD8u, &recomp_unit_0166, "recomp_unit_0166");
    runtime.register_function(0x08A9ECE8u, &recomp_unit_0166, "recomp_unit_0166");
    runtime.register_function(0x08A9ECF4u, &recomp_unit_0166, "recomp_unit_0166");
    runtime.register_function(0x08A9ED04u, &recomp_unit_0166, "recomp_unit_0166");
    runtime.register_function(0x08A9ED08u, &recomp_unit_0166, "recomp_unit_0166");
    runtime.register_function(0x08A9ED10u, &recomp_unit_0166, "recomp_unit_0166");
    runtime.register_function(0x08A9ED18u, &recomp_unit_0166, "recomp_unit_0166");
    runtime.register_function(0x08A9ED24u, &recomp_unit_0166, "recomp_unit_0166");
    runtime.register_function(0x08A9ED2Cu, &recomp_unit_0166, "recomp_unit_0166");
    runtime.register_function(0x08A9ED34u, &recomp_unit_0166, "recomp_unit_0166");
    runtime.register_function(0x08A9ED48u, &recomp_unit_0166, "recomp_unit_0166");
    runtime.register_function(0x08A9ED58u, &recomp_unit_0166, "recomp_unit_0166");
    runtime.register_function(0x08A9ED64u, &recomp_unit_0166, "recomp_unit_0166");
    runtime.register_function(0x08A9ED68u, &recomp_unit_0166, "recomp_unit_0166");
    runtime.register_function(0x08A9ED78u, &recomp_unit_0166, "recomp_unit_0166");
    runtime.register_function(0x08A9ED84u, &recomp_unit_0166, "recomp_unit_0166");
    runtime.register_function(0x08A9ED90u, &recomp_unit_0166, "recomp_unit_0166");
    runtime.register_function(0x08A9ED94u, &recomp_unit_0166, "recomp_unit_0166");
    runtime.register_function(0x08A9ED9Cu, &recomp_unit_0166, "recomp_unit_0166");
    runtime.register_function(0x08A9EDACu, &recomp_unit_0166, "recomp_unit_0166");
    runtime.register_function(0x08A9EDB8u, &recomp_unit_0166, "recomp_unit_0166");
    runtime.register_function(0x08A9EDC0u, &recomp_unit_0166, "recomp_unit_0166");
    runtime.register_function(0x08A9EDCCu, &recomp_unit_0166, "recomp_unit_0166");
    runtime.register_function(0x08A9EDD4u, &recomp_unit_0166, "recomp_unit_0166");
    runtime.register_function(0x08A9EDDCu, &recomp_unit_0166, "recomp_unit_0166");
    runtime.register_function(0x08A9EDF0u, &recomp_unit_0166, "recomp_unit_0166");
    runtime.register_function(0x08A9EDF8u, &recomp_unit_0166, "recomp_unit_0166");
    runtime.register_function(0x08A9EE0Cu, &recomp_unit_0166, "recomp_unit_0166");
    runtime.register_function(0x08A9EE14u, &recomp_unit_0166, "recomp_unit_0166");
    runtime.register_function(0x08A9EE28u, &recomp_unit_0166, "recomp_unit_0166");
    runtime.register_function(0x08A9EE30u, &recomp_unit_0166, "recomp_unit_0166");
    runtime.register_function(0x08A9EE44u, &recomp_unit_0166, "recomp_unit_0166");
    runtime.register_function(0x08A9EE4Cu, &recomp_unit_0166, "recomp_unit_0166");
    runtime.register_function(0x08A9EE60u, &recomp_unit_0166, "recomp_unit_0166");
    runtime.register_function(0x08A9EE68u, &recomp_unit_0166, "recomp_unit_0166");
    runtime.register_function(0x08A9EE7Cu, &recomp_unit_0166, "recomp_unit_0166");
    runtime.register_function(0x08A9EE98u, &recomp_unit_0166, "recomp_unit_0166");
    runtime.register_function(0x08A9EEA4u, &recomp_unit_0166, "recomp_unit_0166");
    runtime.register_function(0x08A9EEB4u, &recomp_unit_0166, "recomp_unit_0166");
    runtime.register_function(0x08A9EEBCu, &recomp_unit_0166, "recomp_unit_0166");
    runtime.register_function(0x08A9EEC8u, &recomp_unit_0166, "recomp_unit_0166");
    runtime.register_function(0x08A9EED0u, &recomp_unit_0166, "recomp_unit_0166");
    runtime.register_function(0x08A9EEDCu, &recomp_unit_0166, "recomp_unit_0166");
    runtime.register_function(0x08A9EEF0u, &recomp_unit_0166, "recomp_unit_0166");
    runtime.register_function(0x08A9EEF8u, &recomp_unit_0166, "recomp_unit_0166");
    runtime.register_function(0x08A9EF0Cu, &recomp_unit_0166, "recomp_unit_0166");
    runtime.register_function(0x08A9EF14u, &recomp_unit_0166, "recomp_unit_0166");
    runtime.register_function(0x08A9EF28u, &recomp_unit_0166, "recomp_unit_0166");
    runtime.register_function(0x08A9EF40u, &recomp_unit_0166, "recomp_unit_0166");
    runtime.register_function(0x08A9EF54u, &recomp_unit_0166, "recomp_unit_0166");
    runtime.register_function(0x08A9EF6Cu, &recomp_unit_0166, "recomp_unit_0166");
    runtime.register_function(0x08A9EF80u, &recomp_unit_0166, "recomp_unit_0166");
    runtime.register_function(0x08A9EF88u, &recomp_unit_0166, "recomp_unit_0166");
    runtime.register_function(0x08A9EF94u, &recomp_unit_0166, "recomp_unit_0166");
    runtime.register_function(0x08A9EF9Cu, &recomp_unit_0166, "recomp_unit_0166");
    runtime.register_function(0x08A9EFA4u, &recomp_unit_0166, "recomp_unit_0166");
    runtime.register_function(0x08A9EFB0u, &recomp_unit_0166, "recomp_unit_0166");
    runtime.register_function(0x08A9EFB8u, &recomp_unit_0166, "recomp_unit_0166");
    runtime.register_function(0x08A9EFC0u, &recomp_unit_0166, "recomp_unit_0166");
    runtime.register_function(0x08A9EFD4u, &recomp_unit_0166, "recomp_unit_0166");
    runtime.register_function(0x08A9EFDCu, &recomp_unit_0166, "recomp_unit_0166");
    runtime.register_function(0x08A9EFF0u, &recomp_unit_0166, "recomp_unit_0166");
    runtime.register_function(0x08A9EFF8u, &recomp_unit_0166, "recomp_unit_0166");
    runtime.register_function(0x08A9F00Cu, &recomp_unit_0166, "recomp_unit_0166");
    runtime.register_function(0x08A9F014u, &recomp_unit_0166, "recomp_unit_0166");
    runtime.register_function(0x08A9F028u, &recomp_unit_0166, "recomp_unit_0166");
    runtime.register_function(0x08A9F050u, &recomp_unit_0166, "recomp_unit_0166");
    runtime.register_function(0x08A9F058u, &recomp_unit_0166, "recomp_unit_0166");
    runtime.register_function(0x08A9F064u, &recomp_unit_0166, "recomp_unit_0166");
    runtime.register_function(0x08A9F06Cu, &recomp_unit_0166, "recomp_unit_0166");
    runtime.register_function(0x08A9F074u, &recomp_unit_0166, "recomp_unit_0166");
    runtime.register_function(0x08A9F088u, &recomp_unit_0166, "recomp_unit_0166");
    runtime.register_function(0x08A9F090u, &recomp_unit_0166, "recomp_unit_0166");
    runtime.register_function(0x08A9F0A4u, &recomp_unit_0166, "recomp_unit_0166");
    runtime.register_function(0x08A9F0ACu, &recomp_unit_0166, "recomp_unit_0166");
    runtime.register_function(0x08A9F0C0u, &recomp_unit_0166, "recomp_unit_0166");
    runtime.register_function(0x08A9F0C8u, &recomp_unit_0166, "recomp_unit_0166");
    runtime.register_function(0x08A9F0DCu, &recomp_unit_0166, "recomp_unit_0166");
    runtime.register_function(0x08A9F0F8u, &recomp_unit_0166, "recomp_unit_0166");
    runtime.register_function(0x08A9F104u, &recomp_unit_0166, "recomp_unit_0166");
    runtime.register_function(0x08A9F114u, &recomp_unit_0166, "recomp_unit_0166");
    runtime.register_function(0x08A9F11Cu, &recomp_unit_0166, "recomp_unit_0166");
    runtime.register_function(0x08A9F124u, &recomp_unit_0166, "recomp_unit_0166");
    runtime.register_function(0x08A9F130u, &recomp_unit_0166, "recomp_unit_0166");
    runtime.register_function(0x08A9F140u, &recomp_unit_0166, "recomp_unit_0166");
    runtime.register_function(0x08A9F148u, &recomp_unit_0166, "recomp_unit_0166");
    runtime.register_function(0x08A9F15Cu, &recomp_unit_0166, "recomp_unit_0166");
    runtime.register_function(0x08A9F164u, &recomp_unit_0166, "recomp_unit_0166");
    runtime.register_function(0x08A9F178u, &recomp_unit_0166, "recomp_unit_0166");
    runtime.register_function(0x08A9F190u, &recomp_unit_0166, "recomp_unit_0166");
    runtime.register_function(0x08A9F1A4u, &recomp_unit_0166, "recomp_unit_0166");
    runtime.register_function(0x08A9F1BCu, &recomp_unit_0166, "recomp_unit_0166");
    runtime.register_function(0x08A9F1D0u, &recomp_unit_0166, "recomp_unit_0166");
    runtime.register_function(0x08A9F1DCu, &recomp_unit_0166, "recomp_unit_0166");
    runtime.register_function(0x08A9F1E8u, &recomp_unit_0166, "recomp_unit_0166");
    runtime.register_function(0x08A9F1F8u, &recomp_unit_0166, "recomp_unit_0166");
    runtime.register_function(0x08A9F200u, &recomp_unit_0166, "recomp_unit_0166");
    runtime.register_function(0x08A9F20Cu, &recomp_unit_0166, "recomp_unit_0166");
    runtime.register_function(0x08A9F21Cu, &recomp_unit_0166, "recomp_unit_0166");
    runtime.register_function(0x08A9F23Cu, &recomp_unit_0166, "recomp_unit_0166");
    runtime.register_function(0x08A9F240u, &recomp_unit_0166, "recomp_unit_0166");
    runtime.register_function(0x08A9F250u, &recomp_unit_0166, "recomp_unit_0166");
    runtime.register_function(0x08A9F274u, &recomp_unit_0166, "recomp_unit_0166");
    runtime.register_function(0x08A9F278u, &recomp_unit_0166, "recomp_unit_0166");
    runtime.register_function(0x08A9F280u, &recomp_unit_0166, "recomp_unit_0166");
    runtime.register_function(0x08A9F288u, &recomp_unit_0166, "recomp_unit_0166");
    runtime.register_function(0x08A9F298u, &recomp_unit_0166, "recomp_unit_0166");
    runtime.register_function(0x08A9F2B0u, &recomp_unit_0166, "recomp_unit_0166");
    runtime.register_function(0x08A9F2DCu, &recomp_unit_0166, "recomp_unit_0166");
    runtime.register_function(0x08A9F2E4u, &recomp_unit_0166, "recomp_unit_0166");
    runtime.register_function(0x08A9F2F0u, &recomp_unit_0166, "recomp_unit_0166");
    runtime.register_function(0x08A9F2FCu, &recomp_unit_0166, "recomp_unit_0166");
    runtime.register_function(0x08A9F304u, &recomp_unit_0166, "recomp_unit_0166");
    runtime.register_function(0x08A9F310u, &recomp_unit_0166, "recomp_unit_0166");
    runtime.register_function(0x08A9F318u, &recomp_unit_0166, "recomp_unit_0166");
    runtime.register_function(0x08A9F320u, &recomp_unit_0166, "recomp_unit_0166");
    runtime.register_function(0x08A9F324u, &recomp_unit_0166, "recomp_unit_0166");
    runtime.register_function(0x08A9F328u, &recomp_unit_0166, "recomp_unit_0166");
    runtime.register_function(0x08A9F330u, &recomp_unit_0166, "recomp_unit_0166");
    runtime.register_function(0x08A9F340u, &recomp_unit_0166, "recomp_unit_0166");
    runtime.register_function(0x08A9F34Cu, &recomp_unit_0166, "recomp_unit_0166");
    runtime.register_function(0x08A9F354u, &recomp_unit_0166, "recomp_unit_0166");
    runtime.register_function(0x08A9F368u, &recomp_unit_0166, "recomp_unit_0166");
    runtime.register_function(0x08A9F370u, &recomp_unit_0166, "recomp_unit_0166");
    runtime.register_function(0x08A9F3B0u, &recomp_unit_0166, "recomp_unit_0166");
    runtime.register_function(0x08A9F3B8u, &recomp_unit_0166, "recomp_unit_0166");
    runtime.register_function(0x08A9F3CCu, &recomp_unit_0166, "recomp_unit_0166");
    runtime.register_function(0x08A9F3D4u, &recomp_unit_0166, "recomp_unit_0166");
    runtime.register_function(0x08A9F414u, &recomp_unit_0166, "recomp_unit_0166");
    runtime.register_function(0x08A9F41Cu, &recomp_unit_0166, "recomp_unit_0166");
    runtime.register_function(0x08A9F434u, &recomp_unit_0166, "recomp_unit_0166");
    runtime.register_function(0x08A9F438u, &recomp_unit_0166, "recomp_unit_0166");
    runtime.register_function(0x08A9F448u, &recomp_unit_0166, "recomp_unit_0166");
    runtime.register_function(0x08A9F44Cu, &recomp_unit_0166, "recomp_unit_0166");
    runtime.register_function(0x08A9F464u, &recomp_unit_0166, "recomp_unit_0166");
    runtime.register_function(0x08A9F478u, &recomp_unit_0166, "recomp_unit_0166");
    runtime.register_function(0x08A9F48Cu, &recomp_unit_0166, "recomp_unit_0166");
    runtime.register_function(0x08A9F494u, &recomp_unit_0166, "recomp_unit_0166");
    runtime.register_function(0x08A9F4A8u, &recomp_unit_0166, "recomp_unit_0166");
    runtime.register_function(0x08A9F4B4u, &recomp_unit_0166, "recomp_unit_0166");
    runtime.register_function(0x08A9F4C4u, &recomp_unit_0166, "recomp_unit_0166");
    runtime.register_function(0x08A9F4CCu, &recomp_unit_0166, "recomp_unit_0166");
    runtime.register_function(0x08A9F4D8u, &recomp_unit_0166, "recomp_unit_0166");
    runtime.register_function(0x08A9F4E0u, &recomp_unit_0166, "recomp_unit_0166");
    runtime.register_function(0x08A9F4E8u, &recomp_unit_0166, "recomp_unit_0166");
    runtime.register_function(0x08A9F4FCu, &recomp_unit_0166, "recomp_unit_0166");
    runtime.register_function(0x08A9F504u, &recomp_unit_0166, "recomp_unit_0166");
    runtime.register_function(0x08A9F518u, &recomp_unit_0166, "recomp_unit_0166");
    runtime.register_function(0x08A9F520u, &recomp_unit_0166, "recomp_unit_0166");
    runtime.register_function(0x08A9F534u, &recomp_unit_0166, "recomp_unit_0166");
    runtime.register_function(0x08A9F53Cu, &recomp_unit_0166, "recomp_unit_0166");
    runtime.register_function(0x08A9F550u, &recomp_unit_0166, "recomp_unit_0166");
    runtime.register_function(0x08A9F564u, &recomp_unit_0166, "recomp_unit_0166");
    runtime.register_function(0x08A9F570u, &recomp_unit_0166, "recomp_unit_0166");
    runtime.register_function(0x08A9F580u, &recomp_unit_0166, "recomp_unit_0166");
    runtime.register_function(0x08A9F588u, &recomp_unit_0166, "recomp_unit_0166");
    runtime.register_function(0x08A9F590u, &recomp_unit_0166, "recomp_unit_0166");
    runtime.register_function(0x08A9F59Cu, &recomp_unit_0166, "recomp_unit_0166");
    runtime.register_function(0x08A9F5A4u, &recomp_unit_0166, "recomp_unit_0166");
    runtime.register_function(0x08A9F5ACu, &recomp_unit_0166, "recomp_unit_0166");
    runtime.register_function(0x08A9F5B8u, &recomp_unit_0166, "recomp_unit_0166");
    runtime.register_function(0x08A9F5C0u, &recomp_unit_0166, "recomp_unit_0166");
    runtime.register_function(0x08A9F5C8u, &recomp_unit_0166, "recomp_unit_0166");
    runtime.register_function(0x08A9F5DCu, &recomp_unit_0166, "recomp_unit_0166");
    runtime.register_function(0x08A9F5E4u, &recomp_unit_0166, "recomp_unit_0166");
    runtime.register_function(0x08A9F5F8u, &recomp_unit_0166, "recomp_unit_0166");
    runtime.register_function(0x08A9F600u, &recomp_unit_0166, "recomp_unit_0166");
    runtime.register_function(0x08A9F614u, &recomp_unit_0166, "recomp_unit_0166");
    runtime.register_function(0x08A9F61Cu, &recomp_unit_0166, "recomp_unit_0166");
    runtime.register_function(0x08A9F630u, &recomp_unit_0166, "recomp_unit_0166");
    runtime.register_function(0x08A9F638u, &recomp_unit_0166, "recomp_unit_0166");
    runtime.register_function(0x08A9F64Cu, &recomp_unit_0166, "recomp_unit_0166");
    runtime.register_function(0x08A9F654u, &recomp_unit_0166, "recomp_unit_0166");
    runtime.register_function(0x08A9F668u, &recomp_unit_0166, "recomp_unit_0166");
    runtime.register_function(0x08A9F67Cu, &recomp_unit_0166, "recomp_unit_0166");
    runtime.register_function(0x08A9F684u, &recomp_unit_0166, "recomp_unit_0166");
    runtime.register_function(0x08A9F698u, &recomp_unit_0166, "recomp_unit_0166");
    runtime.register_function(0x08A9F6A4u, &recomp_unit_0166, "recomp_unit_0166");
    runtime.register_function(0x08A9F6B4u, &recomp_unit_0166, "recomp_unit_0166");
    runtime.register_function(0x08A9F6BCu, &recomp_unit_0166, "recomp_unit_0166");
    runtime.register_function(0x08A9F6C4u, &recomp_unit_0166, "recomp_unit_0166");
    runtime.register_function(0x08A9F6D0u, &recomp_unit_0166, "recomp_unit_0166");
    runtime.register_function(0x08A9F6D8u, &recomp_unit_0166, "recomp_unit_0166");
    runtime.register_function(0x08A9F6E0u, &recomp_unit_0166, "recomp_unit_0166");
    runtime.register_function(0x08A9F6F4u, &recomp_unit_0166, "recomp_unit_0166");
    runtime.register_function(0x08A9F6FCu, &recomp_unit_0166, "recomp_unit_0166");
    runtime.register_function(0x08A9F710u, &recomp_unit_0166, "recomp_unit_0166");
    runtime.register_function(0x08A9F718u, &recomp_unit_0166, "recomp_unit_0166");
    runtime.register_function(0x08A9F72Cu, &recomp_unit_0166, "recomp_unit_0166");
    runtime.register_function(0x08A9F734u, &recomp_unit_0166, "recomp_unit_0166");
    runtime.register_function(0x08A9F748u, &recomp_unit_0166, "recomp_unit_0166");
    runtime.register_function(0x08A9F764u, &recomp_unit_0166, "recomp_unit_0166");
    runtime.register_function(0x08A9F76Cu, &recomp_unit_0166, "recomp_unit_0166");
    runtime.register_function(0x08A9F774u, &recomp_unit_0166, "recomp_unit_0166");
    runtime.register_function(0x08A9F77Cu, &recomp_unit_0166, "recomp_unit_0166");
    runtime.register_function(0x08A9F784u, &recomp_unit_0166, "recomp_unit_0166");
    runtime.register_function(0x08A9F78Cu, &recomp_unit_0166, "recomp_unit_0166");
    runtime.register_function(0x08A9F794u, &recomp_unit_0166, "recomp_unit_0166");
    runtime.register_function(0x08A9F798u, &recomp_unit_0166, "recomp_unit_0166");
    runtime.register_function(0x08A9F7A0u, &recomp_unit_0166, "recomp_unit_0166");
    runtime.register_function(0x08A9F7A8u, &recomp_unit_0166, "recomp_unit_0166");
    runtime.register_function(0x08A9F7B4u, &recomp_unit_0166, "recomp_unit_0166");
    runtime.register_function(0x08A9F7BCu, &recomp_unit_0166, "recomp_unit_0166");
    runtime.register_function(0x08A9F7C4u, &recomp_unit_0166, "recomp_unit_0166");
    runtime.register_function(0x08A9F7D8u, &recomp_unit_0166, "recomp_unit_0166");
    runtime.register_function(0x08A9F7E0u, &recomp_unit_0166, "recomp_unit_0166");
    runtime.register_function(0x08A9F7F4u, &recomp_unit_0166, "recomp_unit_0166");
    runtime.register_function(0x08A9F7FCu, &recomp_unit_0166, "recomp_unit_0166");
    runtime.register_function(0x08A9F810u, &recomp_unit_0166, "recomp_unit_0166");
    runtime.register_function(0x08A9F818u, &recomp_unit_0166, "recomp_unit_0166");
    runtime.register_function(0x08A9F82Cu, &recomp_unit_0166, "recomp_unit_0166");
    runtime.register_function(0x08A9F848u, &recomp_unit_0166, "recomp_unit_0166");
    runtime.register_function(0x08A9F850u, &recomp_unit_0166, "recomp_unit_0166");
    runtime.register_function(0x08A9F858u, &recomp_unit_0166, "recomp_unit_0166");
    runtime.register_function(0x08A9F860u, &recomp_unit_0166, "recomp_unit_0166");
    runtime.register_function(0x08A9F868u, &recomp_unit_0166, "recomp_unit_0166");
    runtime.register_function(0x08A9F870u, &recomp_unit_0166, "recomp_unit_0166");
    runtime.register_function(0x08A9F878u, &recomp_unit_0166, "recomp_unit_0166");
    runtime.register_function(0x08A9F87Cu, &recomp_unit_0166, "recomp_unit_0166");
    runtime.register_function(0x08A9F884u, &recomp_unit_0166, "recomp_unit_0166");
    runtime.register_function(0x08A9F88Cu, &recomp_unit_0166, "recomp_unit_0166");
    runtime.register_function(0x08A9F898u, &recomp_unit_0166, "recomp_unit_0166");
    runtime.register_function(0x08A9F8A0u, &recomp_unit_0166, "recomp_unit_0166");
    runtime.register_function(0x08A9F8A8u, &recomp_unit_0166, "recomp_unit_0166");
    runtime.register_function(0x08A9F8BCu, &recomp_unit_0166, "recomp_unit_0166");
    runtime.register_function(0x08A9F8CCu, &recomp_unit_0166, "recomp_unit_0166");
    runtime.register_function(0x08A9F8D4u, &recomp_unit_0166, "recomp_unit_0166");
    runtime.register_function(0x08A9F8DCu, &recomp_unit_0166, "recomp_unit_0166");
    runtime.register_function(0x08A9F8E4u, &recomp_unit_0166, "recomp_unit_0166");
    runtime.register_function(0x08A9F8ECu, &recomp_unit_0166, "recomp_unit_0166");
    runtime.register_function(0x08A9F8F4u, &recomp_unit_0166, "recomp_unit_0166");
    runtime.register_function(0x08A9F8FCu, &recomp_unit_0166, "recomp_unit_0166");
    runtime.register_function(0x08A9F904u, &recomp_unit_0166, "recomp_unit_0166");
    runtime.register_function(0x08A9F908u, &recomp_unit_0166, "recomp_unit_0166");
    runtime.register_function(0x08A9F910u, &recomp_unit_0166, "recomp_unit_0166");
    runtime.register_function(0x08A9F914u, &recomp_unit_0166, "recomp_unit_0166");
    runtime.register_function(0x08A9F924u, &recomp_unit_0166, "recomp_unit_0166");
    runtime.register_function(0x08A9F938u, &recomp_unit_0166, "recomp_unit_0166");
    runtime.register_function(0x08A9F94Cu, &recomp_unit_0166, "recomp_unit_0166");
    runtime.register_function(0x08A9F954u, &recomp_unit_0166, "recomp_unit_0166");
    runtime.register_function(0x08A9F968u, &recomp_unit_0166, "recomp_unit_0166");
    runtime.register_function(0x08A9F974u, &recomp_unit_0166, "recomp_unit_0166");
    runtime.register_function(0x08A9F984u, &recomp_unit_0166, "recomp_unit_0166");
    runtime.register_function(0x08A9F98Cu, &recomp_unit_0166, "recomp_unit_0166");
    runtime.register_function(0x08A9F998u, &recomp_unit_0166, "recomp_unit_0166");
    runtime.register_function(0x08A9F9A0u, &recomp_unit_0166, "recomp_unit_0166");
    runtime.register_function(0x08A9F9A8u, &recomp_unit_0166, "recomp_unit_0166");
    runtime.register_function(0x08A9F9BCu, &recomp_unit_0166, "recomp_unit_0166");
    runtime.register_function(0x08A9F9C4u, &recomp_unit_0166, "recomp_unit_0166");
    runtime.register_function(0x08A9F9D8u, &recomp_unit_0166, "recomp_unit_0166");
    runtime.register_function(0x08A9F9E0u, &recomp_unit_0166, "recomp_unit_0166");
    runtime.register_function(0x08A9F9F4u, &recomp_unit_0166, "recomp_unit_0166");
    runtime.register_function(0x08A9F9FCu, &recomp_unit_0166, "recomp_unit_0166");
    runtime.register_function(0x08A9FA10u, &recomp_unit_0166, "recomp_unit_0166");
    runtime.register_function(0x08A9FA24u, &recomp_unit_0166, "recomp_unit_0166");
    runtime.register_function(0x08A9FA30u, &recomp_unit_0166, "recomp_unit_0166");
    runtime.register_function(0x08A9FA40u, &recomp_unit_0166, "recomp_unit_0166");
    runtime.register_function(0x08A9FA48u, &recomp_unit_0166, "recomp_unit_0166");
    runtime.register_function(0x08A9FA50u, &recomp_unit_0166, "recomp_unit_0166");
    runtime.register_function(0x08A9FA5Cu, &recomp_unit_0166, "recomp_unit_0166");
    runtime.register_function(0x08A9FA64u, &recomp_unit_0166, "recomp_unit_0166");
    runtime.register_function(0x08A9FA6Cu, &recomp_unit_0166, "recomp_unit_0166");
    runtime.register_function(0x08A9FA78u, &recomp_unit_0166, "recomp_unit_0166");
    runtime.register_function(0x08A9FA80u, &recomp_unit_0166, "recomp_unit_0166");
    runtime.register_function(0x08A9FA88u, &recomp_unit_0166, "recomp_unit_0166");
    runtime.register_function(0x08A9FA9Cu, &recomp_unit_0166, "recomp_unit_0166");
    runtime.register_function(0x08A9FAACu, &recomp_unit_0166, "recomp_unit_0166");
    runtime.register_function(0x08A9FAB4u, &recomp_unit_0166, "recomp_unit_0166");
    runtime.register_function(0x08A9FABCu, &recomp_unit_0166, "recomp_unit_0166");
    runtime.register_function(0x08A9FAC4u, &recomp_unit_0166, "recomp_unit_0166");
    runtime.register_function(0x08A9FACCu, &recomp_unit_0166, "recomp_unit_0166");
    runtime.register_function(0x08A9FAD4u, &recomp_unit_0166, "recomp_unit_0166");
    runtime.register_function(0x08A9FADCu, &recomp_unit_0166, "recomp_unit_0166");
    runtime.register_function(0x08A9FAE4u, &recomp_unit_0166, "recomp_unit_0166");
    runtime.register_function(0x08A9FAE8u, &recomp_unit_0166, "recomp_unit_0166");
    runtime.register_function(0x08A9FAF0u, &recomp_unit_0166, "recomp_unit_0166");
    runtime.register_function(0x08A9FAF8u, &recomp_unit_0166, "recomp_unit_0166");
    runtime.register_function(0x08A9FB04u, &recomp_unit_0166, "recomp_unit_0166");
    runtime.register_function(0x08A9FB0Cu, &recomp_unit_0166, "recomp_unit_0166");
    runtime.register_function(0x08A9FB14u, &recomp_unit_0166, "recomp_unit_0166");
    runtime.register_function(0x08A9FB20u, &recomp_unit_0166, "recomp_unit_0166");
    runtime.register_function(0x08A9FB28u, &recomp_unit_0166, "recomp_unit_0166");
    runtime.register_function(0x08A9FB30u, &recomp_unit_0166, "recomp_unit_0166");
    runtime.register_function(0x08A9FB44u, &recomp_unit_0166, "recomp_unit_0166");
    runtime.register_function(0x08A9FB4Cu, &recomp_unit_0166, "recomp_unit_0166");
    runtime.register_function(0x08A9FB60u, &recomp_unit_0166, "recomp_unit_0166");
    runtime.register_function(0x08A9FB68u, &recomp_unit_0166, "recomp_unit_0166");
    runtime.register_function(0x08A9FB7Cu, &recomp_unit_0166, "recomp_unit_0166");
    runtime.register_function(0x08A9FB84u, &recomp_unit_0166, "recomp_unit_0166");
    runtime.register_function(0x08A9FB98u, &recomp_unit_0166, "recomp_unit_0166");
    runtime.register_function(0x08A9FBA0u, &recomp_unit_0166, "recomp_unit_0166");
    runtime.register_function(0x08A9FBB4u, &recomp_unit_0166, "recomp_unit_0166");
    runtime.register_function(0x08A9FBBCu, &recomp_unit_0166, "recomp_unit_0166");
    runtime.register_function(0x08A9FBD0u, &recomp_unit_0166, "recomp_unit_0166");
    runtime.register_function(0x08A9FBE4u, &recomp_unit_0166, "recomp_unit_0166");
    runtime.register_function(0x08A9FBECu, &recomp_unit_0166, "recomp_unit_0166");
    runtime.register_function(0x08A9FC00u, &recomp_unit_0166, "recomp_unit_0166");
    runtime.register_function(0x08A9FC0Cu, &recomp_unit_0166, "recomp_unit_0166");
    runtime.register_function(0x08A9FC1Cu, &recomp_unit_0166, "recomp_unit_0166");
    runtime.register_function(0x08A9FC24u, &recomp_unit_0166, "recomp_unit_0166");
    runtime.register_function(0x08A9FC2Cu, &recomp_unit_0166, "recomp_unit_0166");
    runtime.register_function(0x08A9FC38u, &recomp_unit_0166, "recomp_unit_0166");
    runtime.register_function(0x08A9FC40u, &recomp_unit_0166, "recomp_unit_0166");
    runtime.register_function(0x08A9FC48u, &recomp_unit_0166, "recomp_unit_0166");
    runtime.register_function(0x08A9FC5Cu, &recomp_unit_0166, "recomp_unit_0166");
    runtime.register_function(0x08A9FC64u, &recomp_unit_0166, "recomp_unit_0166");
    runtime.register_function(0x08A9FC78u, &recomp_unit_0166, "recomp_unit_0166");
    runtime.register_function(0x08A9FC80u, &recomp_unit_0166, "recomp_unit_0166");
    runtime.register_function(0x08A9FC94u, &recomp_unit_0166, "recomp_unit_0166");
    runtime.register_function(0x08A9FC9Cu, &recomp_unit_0166, "recomp_unit_0166");
    runtime.register_function(0x08A9FCB0u, &recomp_unit_0166, "recomp_unit_0166");
    runtime.register_function(0x08A9FCD0u, &recomp_unit_0166, "recomp_unit_0166");
    runtime.register_function(0x08A9FCD8u, &recomp_unit_0166, "recomp_unit_0166");
    runtime.register_function(0x08A9FCE0u, &recomp_unit_0166, "recomp_unit_0166");
    runtime.register_function(0x08A9FCE8u, &recomp_unit_0166, "recomp_unit_0166");
    runtime.register_function(0x08A9FCF0u, &recomp_unit_0166, "recomp_unit_0166");
    runtime.register_function(0x08A9FCF8u, &recomp_unit_0166, "recomp_unit_0166");
    runtime.register_function(0x08A9FD00u, &recomp_unit_0166, "recomp_unit_0166");
    runtime.register_function(0x08A9FD04u, &recomp_unit_0166, "recomp_unit_0166");
    runtime.register_function(0x08A9FD0Cu, &recomp_unit_0166, "recomp_unit_0166");
    runtime.register_function(0x08A9FD10u, &recomp_unit_0166, "recomp_unit_0166");
    runtime.register_function(0x08A9FD20u, &recomp_unit_0166, "recomp_unit_0166");
    runtime.register_function(0x08A9FD34u, &recomp_unit_0166, "recomp_unit_0166");
    runtime.register_function(0x08A9FD54u, &recomp_unit_0166, "recomp_unit_0166");
    runtime.register_function(0x08A9FD5Cu, &recomp_unit_0166, "recomp_unit_0166");
    runtime.register_function(0x08A9FD84u, &recomp_unit_0166, "recomp_unit_0166");
    runtime.register_function(0x08A9FD8Cu, &recomp_unit_0166, "recomp_unit_0166");
    runtime.register_function(0x08A9FDA0u, &recomp_unit_0166, "recomp_unit_0166");
    runtime.register_function(0x08A9FDB0u, &recomp_unit_0166, "recomp_unit_0166");
    runtime.register_function(0x08A9FDC4u, &recomp_unit_0166, "recomp_unit_0166");
    runtime.register_function(0x08A9FDD4u, &recomp_unit_0166, "recomp_unit_0166");
    runtime.register_function(0x08A9FDE0u, &recomp_unit_0166, "recomp_unit_0166");
    runtime.register_function(0x08A9FDE8u, &recomp_unit_0166, "recomp_unit_0166");
    runtime.register_function(0x08A9FE20u, &recomp_unit_0166, "recomp_unit_0166");
    runtime.register_function(0x08A9FE28u, &recomp_unit_0166, "recomp_unit_0166");
    runtime.register_function(0x08A9FE38u, &recomp_unit_0166, "recomp_unit_0166");
    runtime.register_function(0x08A9FE44u, &recomp_unit_0166, "recomp_unit_0166");
    runtime.register_function(0x08A9FE4Cu, &recomp_unit_0166, "recomp_unit_0166");
    runtime.register_function(0x08A9FE84u, &recomp_unit_0166, "recomp_unit_0166");
    runtime.register_function(0x08A9FE8Cu, &recomp_unit_0166, "recomp_unit_0166");
    runtime.register_function(0x08A9FE9Cu, &recomp_unit_0166, "recomp_unit_0166");
    runtime.register_function(0x08A9FEA8u, &recomp_unit_0166, "recomp_unit_0166");
    runtime.register_function(0x08A9FEB0u, &recomp_unit_0166, "recomp_unit_0166");
    runtime.register_function(0x08A9FEE8u, &recomp_unit_0166, "recomp_unit_0166");
    runtime.register_function(0x08A9FEF0u, &recomp_unit_0166, "recomp_unit_0166");
    runtime.register_function(0x08A9FF10u, &recomp_unit_0166, "recomp_unit_0166");
    runtime.register_function(0x08A9FF18u, &recomp_unit_0166, "recomp_unit_0166");
    runtime.register_function(0x08A9FF38u, &recomp_unit_0166, "recomp_unit_0166");
    runtime.register_function(0x08A9FF40u, &recomp_unit_0166, "recomp_unit_0166");
    runtime.register_function(0x08A9FF60u, &recomp_unit_0166, "recomp_unit_0166");
    runtime.register_function(0x08A9FF68u, &recomp_unit_0166, "recomp_unit_0166");
    runtime.register_function(0x08A9FF7Cu, &recomp_unit_0166, "recomp_unit_0166");
    runtime.register_function(0x08A9FF84u, &recomp_unit_0166, "recomp_unit_0166");
    runtime.register_function(0x08A9FF98u, &recomp_unit_0166, "recomp_unit_0166");
    runtime.register_function(0x08A9FFA0u, &recomp_unit_0166, "recomp_unit_0166");
    runtime.register_function(0x08A9FFB4u, &recomp_unit_0166, "recomp_unit_0166");
    runtime.register_function(0x08A9FFBCu, &recomp_unit_0166, "recomp_unit_0166");
    runtime.register_function(0x08A9FFE4u, &recomp_unit_0166, "recomp_unit_0166");
    runtime.register_function(0x08A9FFECu, &recomp_unit_0166, "recomp_unit_0166");
}
} // namespace psprecomp
