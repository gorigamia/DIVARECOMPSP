#include "psprecomp/runtime.hpp"
#include "generated_units.hpp"
#include <bit>
#include <cmath>
#include <cstdint>
#include <limits>

namespace psprecomp {
static const std::uint16_t kEntryIds_recomp_unit_0071[4092] = {
    1, 0, 0, 0, 2, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 3, 0, 0, 0, 0, 0, 0, 0, 4, 0, 5, 0, 6, 0, 0, 0, 7,
    0, 0, 0, 8, 0, 0, 0, 0, 9, 0, 0, 0, 0, 0, 0, 0, 10, 0, 11, 0, 0, 12, 0, 0, 0, 13, 0, 0, 0, 14, 0, 0,
    15, 0, 0, 0, 0, 0, 0, 16, 0, 0, 17, 0, 18, 0, 0, 0, 0, 0, 0, 0, 0, 0, 19, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 20, 0, 0, 21, 0, 0, 0, 0, 0, 0, 0, 22, 0, 0, 0, 0, 0, 0, 0, 0, 0, 23, 0, 0, 0, 0, 24, 0, 0, 25,
    0, 0, 26, 0, 0, 0, 0, 0, 0, 27, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 28, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    29, 0, 0, 0, 30, 0, 0, 31, 0, 0, 0, 0, 32, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 33, 0, 0, 34, 0, 0, 35, 0, 0,
    36, 0, 0, 37, 0, 0, 0, 0, 0, 0, 38, 0, 39, 40, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 41, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 42, 0, 0, 0, 43, 0, 0, 44, 0, 0, 0, 45, 0, 0, 0, 46, 0, 0, 47, 0, 0, 0, 0, 0, 0, 48, 0,
    0, 0, 0, 49, 0, 0, 0, 50, 0, 0, 0, 0, 0, 0, 51, 0, 52, 0, 0, 0, 53, 0, 0, 0, 0, 0, 0, 0, 54, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 55, 0, 0, 0, 0, 0, 0, 56, 0, 0, 0, 0, 0, 0, 0, 57, 0, 0, 0, 0, 0, 0, 0, 0,
    58, 0, 0, 0, 0, 59, 0, 0, 60, 0, 0, 61, 0, 0, 0, 0, 0, 0, 62, 0, 0, 0, 0, 0, 0, 0, 63, 0, 0, 0, 0, 0,
    0, 0, 64, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 65, 0, 0, 66, 0, 67, 0, 0, 68, 0, 0, 0, 69, 0, 0, 0, 70, 0,
    0, 0, 71, 0, 0, 72, 0, 0, 73, 0, 0, 74, 0, 0, 75, 0, 0, 0, 76, 0, 0, 77, 0, 0, 78, 0, 0, 0, 79, 0, 0, 0,
    80, 0, 0, 0, 0, 0, 0, 0, 0, 0, 81, 0, 82, 0, 0, 0, 83, 0, 0, 84, 0, 0, 0, 85, 0, 0, 0, 0, 0, 86, 0, 0,
    0, 0, 87, 0, 88, 0, 0, 89, 0, 0, 90, 0, 0, 0, 0, 0, 91, 0, 0, 0, 0, 0, 92, 0, 0, 0, 0, 0, 0, 93, 0, 0,
    0, 94, 0, 95, 0, 0, 0, 0, 96, 0, 97, 0, 0, 0, 0, 98, 99, 0, 0, 100, 0, 0, 101, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    102, 0, 0, 0, 103, 0, 0, 0, 104, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 105, 0, 0, 0, 0, 0, 106, 0, 0, 0, 107, 0,
    0, 0, 108, 0, 0, 109, 0, 0, 0, 0, 0, 0, 110, 0, 0, 0, 0, 111, 0, 0, 0, 0, 0, 0, 0, 0, 0, 112, 0, 113, 0, 0,
    0, 114, 0, 0, 0, 0, 0, 0, 0, 115, 0, 0, 0, 0, 0, 0, 0, 116, 0, 0, 0, 0, 0, 0, 117, 0, 0, 0, 0, 0, 118, 0,
    0, 0, 119, 0, 0, 0, 0, 0, 120, 121, 0, 0, 122, 0, 0, 0, 0, 0, 0, 0, 123, 0, 0, 0, 0, 0, 0, 124, 0, 0, 0, 0,
    0, 0, 125, 0, 0, 0, 0, 0, 126, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 127, 0, 128, 0, 0, 129, 0, 130, 0, 0, 131, 0, 132, 0, 0, 133, 0, 134, 0, 0, 0, 135, 0, 0, 0, 0, 0, 0, 136, 0,
    0, 0, 0, 0, 0, 0, 137, 0, 0, 138, 0, 0, 0, 0, 0, 139, 0, 0, 0, 0, 0, 0, 140, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 141, 0, 0, 0, 0, 0, 0, 0, 142, 0, 0, 0, 0, 0, 0, 0, 0, 143, 0, 0, 0, 0, 0, 0, 0, 0, 144, 0, 0,
    0, 145, 0, 0, 0, 0, 0, 0, 146, 0, 0, 147, 0, 0, 0, 0, 0, 148, 149, 0, 0, 0, 150, 0, 0, 0, 0, 0, 0, 0, 151, 152,
    0, 0, 0, 0, 0, 0, 0, 153, 0, 0, 0, 154, 0, 0, 0, 0, 0, 0, 155, 0, 0, 0, 0, 0, 0, 0, 156, 0, 0, 0, 0, 157,
    0, 0, 158, 0, 0, 0, 0, 0, 0, 0, 0, 0, 159, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 160, 0, 0, 0, 0, 0, 0, 0, 161,
    0, 0, 0, 0, 0, 162, 0, 0, 0, 0, 0, 0, 0, 0, 163, 0, 0, 164, 165, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 166, 0,
    0, 0, 0, 167, 0, 168, 0, 0, 0, 0, 169, 0, 0, 0, 0, 0, 0, 170, 0, 0, 0, 0, 0, 171, 0, 0, 0, 172, 0, 0, 0, 0,
    0, 173, 0, 0, 0, 174, 0, 0, 0, 0, 0, 175, 0, 0, 0, 176, 0, 0, 0, 0, 0, 177, 0, 0, 0, 178, 0, 0, 0, 0, 0, 179,
    0, 0, 0, 180, 0, 0, 181, 0, 0, 0, 0, 0, 182, 0, 0, 0, 183, 0, 0, 184, 0, 0, 0, 0, 0, 185, 186, 0, 0, 0, 187, 0,
    0, 0, 0, 0, 0, 188, 0, 0, 0, 0, 0, 0, 0, 189, 0, 0, 0, 190, 0, 0, 191, 0, 0, 0, 0, 0, 192, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 193, 0, 0, 0, 0, 0, 0, 0, 0, 194, 0, 0, 0, 195, 0, 0, 196, 0, 0, 197, 0, 0, 198, 0,
    0, 199, 0, 0, 200, 0, 0, 0, 0, 201, 0, 202, 0, 0, 0, 203, 0, 204, 0, 0, 0, 205, 0, 0, 206, 0, 0, 207, 0, 0, 208, 0,
    0, 209, 0, 0, 210, 0, 0, 211, 0, 0, 0, 212, 0, 0, 0, 213, 0, 0, 0, 0, 0, 0, 0, 214, 0, 0, 0, 0, 0, 215, 0, 0,
    0, 0, 0, 0, 216, 0, 0, 0, 0, 0, 217, 0, 0, 0, 0, 218, 0, 0, 0, 219, 0, 0, 0, 220, 0, 0, 0, 221, 0, 0, 0, 0,
    0, 222, 0, 223, 0, 0, 0, 0, 0, 0, 224, 0, 0, 0, 0, 0, 225, 226, 0, 227, 0, 0, 228, 0, 0, 0, 229, 0, 0, 0, 230, 0,
    0, 0, 0, 0, 231, 232, 0, 233, 0, 0, 0, 0, 0, 234, 0, 0, 235, 236, 0, 0, 237, 238, 0, 0, 239, 0, 0, 240, 0, 0, 241, 0,
    0, 242, 0, 0, 243, 0, 0, 244, 0, 0, 245, 0, 0, 246, 0, 0, 247, 0, 0, 248, 0, 0, 249, 0, 0, 250, 0, 0, 251, 0, 0, 252,
    0, 0, 253, 0, 0, 254, 0, 0, 255, 0, 0, 256, 0, 0, 257, 0, 0, 258, 0, 0, 259, 0, 0, 260, 0, 0, 261, 0, 0, 262, 0, 0,
    263, 0, 0, 264, 0, 0, 265, 0, 0, 266, 0, 0, 267, 0, 0, 268, 0, 0, 269, 0, 0, 270, 0, 0, 271, 0, 0, 272, 0, 0, 273, 0,
    0, 274, 0, 0, 275, 0, 0, 276, 0, 0, 277, 0, 0, 278, 0, 0, 279, 0, 0, 280, 0, 0, 281, 0, 0, 282, 0, 0, 283, 0, 0, 284,
    0, 0, 285, 0, 0, 286, 0, 0, 0, 0, 287, 288, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 289, 0, 0, 0, 0, 0, 0, 0, 0,
    290, 0, 291, 0, 0, 292, 0, 293, 0, 0, 0, 0, 294, 0, 0, 295, 0, 296, 0, 0, 0, 297, 0, 0, 298, 299, 0, 0, 300, 0, 0, 301,
    0, 0, 302, 0, 0, 0, 303, 304, 0, 0, 0, 0, 0, 305, 0, 0, 0, 0, 0, 0, 0, 306, 0, 0, 307, 0, 0, 308, 0, 0, 0, 0,
    0, 0, 0, 0, 309, 0, 310, 0, 0, 0, 311, 0, 312, 0, 0, 0, 313, 0, 0, 0, 314, 0, 0, 0, 0, 0, 0, 315, 0, 0, 0, 316,
    0, 0, 0, 317, 318, 0, 0, 0, 319, 0, 0, 320, 0, 0, 0, 0, 321, 0, 0, 322, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 323, 0, 0, 0, 324, 325, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 326, 0, 0, 0, 0, 0, 327, 0, 0, 0, 0, 0, 0, 328, 0, 0, 329, 0, 0, 330, 0, 0, 0, 0,
    0, 331, 0, 0, 0, 0, 0, 332, 0, 333, 0, 0, 334, 335, 0, 0, 0, 0, 336, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    337, 0, 0, 338, 0, 0, 0, 0, 339, 0, 0, 340, 0, 341, 0, 0, 0, 0, 0, 342, 0, 0, 343, 0, 0, 0, 0, 344, 0, 0, 0, 0,
    345, 0, 0, 0, 0, 0, 0, 346, 0, 0, 347, 0, 0, 0, 0, 348, 0, 0, 349, 0, 350, 0, 0, 0, 0, 0, 351, 0, 0, 352, 0, 0,
    353, 0, 0, 354, 0, 0, 0, 355, 0, 0, 0, 0, 0, 356, 0, 0, 357, 0, 0, 358, 0, 0, 0, 0, 0, 0, 0, 0, 359, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 360, 0, 0, 361, 0, 0, 362, 0, 0, 363, 364, 0, 0, 365, 0, 0, 0, 366, 0, 0, 0, 367, 0, 0,
    368, 0, 0, 369, 0, 0, 370, 0, 0, 0, 0, 0, 0, 371, 0, 0, 372, 0, 0, 0, 373, 0, 0, 0, 0, 374, 0, 375, 0, 0, 0, 0,
    0, 0, 0, 0, 376, 0, 0, 0, 0, 377, 0, 0, 0, 0, 0, 0, 378, 0, 0, 379, 380, 381, 0, 0, 382, 0, 0, 383, 0, 0, 0, 0,
    0, 384, 385, 0, 0, 386, 0, 0, 0, 0, 0, 387, 0, 0, 0, 0, 0, 0, 388, 0, 0, 0, 389, 0, 0, 390, 0, 0, 0, 0, 0, 0,
    391, 0, 0, 0, 0, 0, 0, 392, 0, 0, 0, 0, 393, 0, 0, 0, 0, 394, 0, 0, 0, 0, 0, 395, 0, 0, 0, 396, 0, 0, 0, 0,
    0, 397, 0, 0, 0, 0, 398, 0, 0, 0, 0, 399, 0, 0, 0, 0, 0, 0, 400, 0, 401, 0, 402, 0, 0, 403, 0, 404, 0, 0, 405, 0,
    0, 406, 0, 0, 407, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 408, 0, 0, 409, 0, 410, 0, 0, 411, 0, 0,
    412, 0, 0, 0, 413, 0, 0, 0, 414, 0, 0, 415, 0, 0, 0, 0, 416, 0, 0, 0, 417, 0, 0, 0, 418, 0, 0, 0, 0, 419, 0, 420,
    0, 0, 0, 0, 0, 0, 0, 0, 421, 0, 0, 422, 0, 0, 0, 0, 0, 423, 0, 0, 0, 424, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 425, 0, 0, 426, 0, 0, 427, 0, 0, 0, 0, 0, 0, 0, 0, 0, 428, 0, 0, 0, 0, 0, 0, 0, 429, 0, 0, 0, 430, 431, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 432, 0, 0, 0, 0, 433, 0, 0, 0, 434, 0, 0, 0, 435, 0, 0, 0, 0, 436, 0, 0, 437,
    0, 0, 0, 438, 0, 0, 0, 0, 0, 0, 0, 0, 439, 0, 0, 0, 0, 0, 0, 0, 0, 440, 0, 0, 0, 441, 442, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 443, 0, 0, 0, 0, 0, 0, 444, 0, 0, 445, 0, 0, 0, 0, 446, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 447, 0, 0, 0, 448, 0, 449, 0, 0, 0, 450, 0, 0, 0, 0, 451, 0, 0, 0, 0, 0, 0, 452, 0, 0, 453, 454, 455, 0, 0,
    456, 0, 0, 457, 0, 0, 0, 0, 458, 0, 0, 459, 0, 0, 0, 0, 460, 0, 0, 0, 0, 0, 0, 0, 461, 462, 0, 0, 463, 0, 0, 0,
    0, 0, 464, 0, 0, 0, 0, 0, 0, 465, 0, 0, 0, 466, 0, 0, 0, 467, 0, 0, 0, 0, 0, 0, 468, 0, 0, 0, 0, 0, 0, 469,
    0, 0, 0, 0, 470, 0, 0, 0, 0, 471, 0, 0, 0, 0, 0, 0, 0, 472, 0, 0, 0, 473, 0, 0, 0, 0, 0, 474, 0, 0, 0, 0,
    475, 0, 0, 0, 0, 476, 0, 0, 0, 0, 0, 0, 0, 477, 0, 478, 0, 479, 0, 0, 480, 0, 0, 481, 0, 482, 0, 0, 483, 0, 0, 484,
    0, 485, 0, 0, 486, 0, 0, 0, 0, 487, 0, 0, 0, 0, 488, 0, 0, 0, 0, 489, 0, 0, 0, 0, 490, 0, 0, 491, 0, 0, 0, 492,
    0, 0, 493, 0, 0, 494, 0, 0, 0, 495, 0, 0, 0, 496, 0, 0, 0, 497, 0, 0, 498, 0, 0, 499, 0, 0, 0, 500, 0, 0, 0, 0,
    501, 0, 0, 0, 0, 0, 0, 0, 0, 0, 502, 0, 0, 0, 503, 0, 0, 504, 0, 0, 505, 0, 0, 0, 0, 0, 0, 0, 0, 506, 0, 0,
    0, 0, 0, 507, 0, 508, 509, 0, 0, 510, 0, 0, 511, 0, 0, 0, 0, 0, 0, 512, 0, 0, 513, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 514, 0, 0, 0, 0, 0, 515, 0, 0, 0, 0, 516, 517, 0, 0, 518, 0, 0, 0, 519, 0, 0, 0, 520, 0, 0, 0, 0, 0,
    521, 0, 0, 522, 0, 0, 0, 0, 523, 0, 524, 0, 0, 0, 525, 0, 0, 0, 0, 0, 0, 526, 527, 0, 0, 0, 528, 0, 0, 0, 0, 529,
    0, 0, 0, 530, 0, 0, 0, 0, 531, 0, 0, 532, 0, 0, 0, 0, 533, 0, 0, 534, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 535, 536,
    0, 0, 0, 537, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 538, 0, 539, 540, 0, 0, 0, 541, 0, 0, 0, 542, 0, 543, 544, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 545, 0, 0, 0, 546, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 547, 0, 0, 0, 0, 0, 548, 0,
    0, 0, 549, 0, 550, 0, 0, 0, 0, 0, 551, 0, 0, 552, 0, 0, 553, 0, 0, 554, 0, 555, 0, 556, 0, 0, 0, 0, 0, 0, 557, 0,
    0, 0, 0, 558, 0, 0, 0, 0, 0, 0, 0, 0, 0, 559, 0, 0, 0, 0, 0, 0, 0, 0, 560, 0, 0, 0, 0, 0, 0, 0, 0, 561,
    0, 0, 0, 0, 562, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 563, 0, 0, 0, 0, 564, 0, 0, 0, 0, 0, 0, 0, 0, 565, 0,
    566, 0, 567, 0, 0, 0, 0, 0, 0, 0, 568, 0, 0, 569, 0, 0, 570, 0, 571, 0, 0, 0, 0, 0, 572, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 573, 0, 0, 0, 574, 0, 0, 0, 0, 0, 0, 0, 0, 575, 0, 0, 576, 0, 0, 577, 0, 0, 0, 578,
    0, 0, 579, 0, 580, 0, 0, 0, 0, 0, 0, 0, 581, 0, 582, 0, 0, 0, 0, 0, 0, 583, 0, 0, 0, 0, 0, 0, 0, 0, 584, 0,
    0, 0, 585, 0, 0, 586, 0, 0, 0, 0, 587, 0, 588, 0, 589, 590, 0, 0, 591, 0, 0, 592, 0, 0, 0, 0, 0, 0, 0, 593, 0, 594,
    0, 0, 0, 595, 0, 0, 0, 596, 0, 0, 0, 0, 0, 0, 597, 0, 598, 0, 0, 0, 0, 0, 0, 599, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 600, 0, 0, 601, 0, 0, 602, 0, 603, 604, 0, 0, 0, 0, 0, 0, 0, 605, 0, 0, 0,
    0, 0, 0, 0, 0, 606, 607, 0, 608, 0, 0, 0, 0, 0, 0, 609, 0, 0, 610, 0, 0, 611, 612, 0, 0, 0, 613, 0, 0, 0, 0, 0,
    0, 0, 614, 0, 0, 0, 0, 0, 615, 0, 0, 0, 0, 0, 616, 0, 0, 0, 0, 0, 0, 617, 618, 0, 0, 0, 0, 0, 0, 0, 619, 0,
    0, 620, 0, 0, 621, 622, 623, 0, 0, 0, 0, 0, 624, 0, 0, 0, 0, 0, 0, 0, 625, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 626, 0, 0, 0, 627, 0, 0, 0, 628, 0, 0, 0, 629, 0, 0, 0, 0, 630, 0, 0, 631, 0, 0, 0, 632, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 633, 0, 634, 0, 0, 635, 0, 0, 636, 0, 0, 0, 637, 0, 0, 0, 0, 0, 0, 638, 0, 0, 639, 0, 0, 640, 0, 0,
    641, 0, 0, 642, 0, 643, 0, 0, 644, 0, 0, 0, 645, 0, 0, 646, 0, 647, 0, 0, 648, 0, 649, 0, 0, 0, 0, 650, 0, 0, 0, 0,
    651, 0, 652, 0, 0, 653, 0, 0, 0, 0, 0, 654, 0, 0, 655, 0, 656, 0, 657, 0, 0, 658, 0, 0, 659, 0, 0, 0, 660, 0, 0, 661,
    0, 662, 0, 663, 0, 0, 0, 664, 0, 665, 0, 0, 0, 666, 0, 0, 0, 0, 0, 667, 668, 0, 669, 0, 0, 0, 0, 0, 670, 0, 0, 671,
    0, 672, 0, 0, 0, 0, 673, 0, 674, 0, 0, 675, 0, 0, 0, 0, 0, 0, 676, 0, 0, 677, 0, 678, 0, 679, 0, 0, 680, 0, 0, 681,
    0, 0, 0, 682, 0, 0, 683, 0, 684, 0, 685, 0, 0, 0, 686, 0, 687, 0, 0, 0, 688, 0, 0, 0, 0, 0, 689, 690, 0, 691, 0, 0,
    0, 0, 0, 692, 0, 0, 693, 694, 0, 0, 0, 0, 0, 0, 695, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 696, 0, 0,
    0, 0, 0, 0, 0, 697, 0, 0, 698, 0, 0, 0, 0, 0, 0, 699, 0, 0, 0, 0, 0, 0, 700, 0, 0, 0, 701, 0, 0, 702, 0, 0,
    703, 0, 0, 0, 704, 0, 0, 0, 0, 705, 0, 0, 706, 0, 0, 707, 0, 0, 708, 0, 0, 0, 709, 0, 0, 710, 0, 0, 711, 712, 0, 0,
    0, 713, 0, 0, 714, 0, 0, 0, 0, 0, 715, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 716, 0, 0, 0, 0, 0, 0, 0,
    717, 0, 0, 0, 0, 718, 0, 719, 0, 0, 0, 720, 0, 0, 0, 721, 0, 0, 0, 0, 0, 722, 723, 0, 724, 0, 0, 0, 0, 0, 725, 0,
    0, 726, 727, 0, 0, 0, 728, 0, 0, 729, 0, 0, 0, 0, 0, 0, 730, 0, 0, 0, 0, 0, 0, 731, 0, 0, 0, 0, 0, 0, 0, 732,
    0, 0, 0, 0, 0, 0, 0, 733, 0, 0, 734, 0, 0, 0, 0, 735, 0, 0, 0, 0, 0, 0, 736, 0, 737, 738, 0, 0, 0, 739, 0, 0,
    0, 0, 0, 0, 740, 0, 0, 0, 0, 0, 0, 0, 741, 0, 0, 0, 0, 742, 0, 0, 0, 0, 0, 0, 743, 0, 0, 0, 744, 0, 0, 0,
    0, 0, 745, 746, 0, 747, 0, 0, 0, 0, 0, 748, 0, 0, 749, 750, 0, 0, 0, 751, 0, 0, 0, 0, 0, 0, 0, 752, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 753, 0, 0, 754, 0, 0, 0, 755, 0, 0, 0, 756, 0, 0, 757, 0, 0, 758, 0, 0, 759, 0, 0, 760,
    0, 0, 0, 761, 0, 0, 762, 0, 763, 0, 764, 0, 0, 765, 0, 0, 766, 0, 0, 767, 0, 0, 0, 768, 0, 0, 769, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 770, 0, 771, 0, 0, 0, 0, 772, 0, 0, 0, 0, 773, 0, 774, 0, 0, 0, 0, 0, 775, 0, 776, 0, 0, 0, 0, 777,
    0, 0, 778, 0, 779, 780, 0, 0, 0, 781, 782, 0, 0, 0, 0, 0, 0, 783, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 784, 0, 0, 0, 0, 0, 0, 0, 785, 0, 0, 786, 0, 0, 0, 0, 0, 0, 787, 0, 0, 0, 0, 0, 0, 788, 0, 0,
    0, 789, 0, 0, 790, 0, 0, 791, 0, 0, 0, 0, 792, 0, 793, 0, 0, 0, 0, 0, 0, 794, 795, 0, 0, 0, 0, 0, 0, 0, 0, 796,
    0, 0, 797, 0, 0, 0, 0, 0, 0, 798, 0, 0, 0, 0, 799, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 800, 0, 801, 0, 0, 0,
    0, 0, 0, 802, 0, 803, 0, 0, 0, 0, 804, 805, 0, 0, 806, 807, 0, 0, 0, 808, 809, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 810,
    0, 0, 0, 0, 0, 0, 0, 0, 811, 0, 0, 812, 0, 0, 0, 813, 0, 0, 814, 0, 0, 0, 815, 0, 0, 816, 0, 0, 0, 817, 0, 0,
    818, 0, 0, 0, 819, 0, 0, 0, 0, 0, 820, 0, 821, 0, 822, 0, 0, 0, 823, 0, 0, 0, 0, 0, 824, 825, 0, 826, 0, 827, 828, 0,
    0, 829, 0, 0, 830, 0, 0, 831, 832, 0, 0, 0, 0, 0, 0, 833, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 834, 0, 835,
    0, 0, 836, 0, 0, 0, 837, 0, 0, 0, 838, 0, 0, 0, 839, 0, 0, 840, 0, 0, 841, 0, 0, 842, 0, 0, 843, 0, 0, 0, 844, 0,
    0, 845, 0, 0, 846, 0, 0, 847, 0, 0, 0, 848, 0, 0, 849, 0, 0, 0, 850, 0, 0, 851, 0, 852, 0, 853, 0, 0, 854, 0, 0, 0,
    0, 855, 0, 856, 0, 0, 0, 0, 0, 857, 0, 858, 0, 0, 0, 0, 859, 0, 0, 860, 0, 0, 861, 0, 0, 0, 0, 862, 0, 0, 863, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 864, 0, 865, 0, 0, 0, 0, 0, 866, 0, 0, 0, 0, 0, 867, 0, 868, 0, 869, 0, 0, 0, 0, 0,
    870, 871, 0, 872, 0, 0, 873, 0, 874, 0, 875, 0, 0, 876, 0, 0, 0, 0, 0, 877, 0, 878, 0, 0, 879, 0, 0, 880, 0, 0, 0, 0,
    0, 881, 0, 0, 0, 0, 0, 882, 0, 0, 0, 0, 0, 0, 0, 883, 0, 0, 0, 884, 0, 885, 0, 0, 0, 0, 886, 0, 887, 0, 0, 0,
    0, 888, 0, 0, 889, 0, 890, 891, 0, 0, 0, 892, 893, 0, 0, 0, 0, 0, 0, 894, 0, 0, 0, 0, 895, 0, 0, 0, 0, 896, 897, 0,
    898, 0, 0, 0, 0, 0, 0, 0, 0, 899, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 900, 0, 0, 0, 0, 0, 901, 0, 902, 0, 903,
    0, 904, 0, 0, 0, 0, 0, 0, 0, 0, 905, 0, 0, 906, 0, 907, 908, 0, 0, 0, 0, 909, 0, 0, 0, 0, 0, 910,
};
void recomp_unit_0071_entry(Runtime &rt, AllegrexContext &ctx, std::uint16_t direct_entry_id, GuestMemory::AotFastView &aot_mem) {
    std::uint32_t jump_target = 0u;
    std::uint32_t local_transfers = 0u;
    std::uint32_t local_pc = ctx.pc;
    std::uint32_t entry_id = direct_entry_id;
LOCAL_DISPATCH:
    {
    if (entry_id == 0u) {
        const std::uint32_t entry_delta = local_pc - 0x08920000u;
        entry_id = (entry_delta < 16368u && (entry_delta & 3u) == 0u) ? kEntryIds_recomp_unit_0071[entry_delta >> 2u] : 0u;
    }
    switch (entry_id) {
    case 1u: goto L_08920000;
    case 2u: goto L_08920010;
    case 3u: goto L_0892003C;
    case 4u: goto L_0892005C;
    case 5u: goto L_08920064;
    case 6u: goto L_0892006C;
    case 7u: goto L_0892007C;
    case 8u: goto L_0892008C;
    case 9u: goto L_089200A0;
    case 10u: goto L_089200C0;
    case 11u: goto L_089200C8;
    case 12u: goto L_089200D4;
    case 13u: goto L_089200E4;
    case 14u: goto L_089200F4;
    case 15u: goto L_08920100;
    case 16u: goto L_0892011C;
    case 17u: goto L_08920128;
    case 18u: goto L_08920130;
    case 19u: goto L_08920158;
    case 20u: goto L_08920188;
    case 21u: goto L_08920194;
    case 22u: goto L_089201B4;
    case 23u: goto L_089201DC;
    case 24u: goto L_089201F0;
    case 25u: goto L_089201FC;
    case 26u: goto L_08920208;
    case 27u: goto L_08920224;
    case 28u: goto L_08920258;
    case 29u: goto L_08920280;
    case 30u: goto L_08920290;
    case 31u: goto L_0892029C;
    case 32u: goto L_089202B0;
    case 33u: goto L_089202DC;
    case 34u: goto L_089202E8;
    case 35u: goto L_089202F4;
    case 36u: goto L_08920300;
    case 37u: goto L_0892030C;
    case 38u: goto L_08920328;
    case 39u: goto L_08920330;
    case 40u: goto L_08920334;
    case 41u: goto L_08920360;
    case 42u: goto L_08920394;
    case 43u: goto L_089203A4;
    case 44u: goto L_089203B0;
    case 45u: goto L_089203C0;
    case 46u: goto L_089203D0;
    case 47u: goto L_089203DC;
    case 48u: goto L_089203F8;
    case 49u: goto L_0892040C;
    case 50u: goto L_0892041C;
    case 51u: goto L_08920438;
    case 52u: goto L_08920440;
    case 53u: goto L_08920450;
    case 54u: goto L_08920470;
    case 55u: goto L_089204A0;
    case 56u: goto L_089204BC;
    case 57u: goto L_089204DC;
    case 58u: goto L_08920500;
    case 59u: goto L_08920514;
    case 60u: goto L_08920520;
    case 61u: goto L_0892052C;
    case 62u: goto L_08920548;
    case 63u: goto L_08920568;
    case 64u: goto L_08920588;
    case 65u: goto L_089205B8;
    case 66u: goto L_089205C4;
    case 67u: goto L_089205CC;
    case 68u: goto L_089205D8;
    case 69u: goto L_089205E8;
    case 70u: goto L_089205F8;
    case 71u: goto L_08920608;
    case 72u: goto L_08920614;
    case 73u: goto L_08920620;
    case 74u: goto L_0892062C;
    case 75u: goto L_08920638;
    case 76u: goto L_08920648;
    case 77u: goto L_08920654;
    case 78u: goto L_08920660;
    case 79u: goto L_08920670;
    case 80u: goto L_08920680;
    case 81u: goto L_089206A8;
    case 82u: goto L_089206B0;
    case 83u: goto L_089206C0;
    case 84u: goto L_089206CC;
    case 85u: goto L_089206DC;
    case 86u: goto L_089206F4;
    case 87u: goto L_08920708;
    case 88u: goto L_08920710;
    case 89u: goto L_0892071C;
    case 90u: goto L_08920728;
    case 91u: goto L_08920740;
    case 92u: goto L_08920758;
    case 93u: goto L_08920774;
    case 94u: goto L_08920784;
    case 95u: goto L_0892078C;
    case 96u: goto L_089207A0;
    case 97u: goto L_089207A8;
    case 98u: goto L_089207BC;
    case 99u: goto L_089207C0;
    case 100u: goto L_089207CC;
    case 101u: goto L_089207D8;
    case 102u: goto L_08920800;
    case 103u: goto L_08920810;
    case 104u: goto L_08920820;
    case 105u: goto L_08920850;
    case 106u: goto L_08920868;
    case 107u: goto L_08920878;
    case 108u: goto L_08920888;
    case 109u: goto L_08920894;
    case 110u: goto L_089208B0;
    case 111u: goto L_089208C4;
    case 112u: goto L_089208EC;
    case 113u: goto L_089208F4;
    case 114u: goto L_08920904;
    case 115u: goto L_08920924;
    case 116u: goto L_08920944;
    case 117u: goto L_08920960;
    case 118u: goto L_08920978;
    case 119u: goto L_08920988;
    case 120u: goto L_089209A0;
    case 121u: goto L_089209A4;
    case 122u: goto L_089209B0;
    case 123u: goto L_089209D0;
    case 124u: goto L_089209EC;
    case 125u: goto L_08920A08;
    case 126u: goto L_08920A20;
    case 127u: goto L_08920A88;
    case 128u: goto L_08920A90;
    case 129u: goto L_08920A9C;
    case 130u: goto L_08920AA4;
    case 131u: goto L_08920AB0;
    case 132u: goto L_08920AB8;
    case 133u: goto L_08920AC4;
    case 134u: goto L_08920ACC;
    case 135u: goto L_08920ADC;
    case 136u: goto L_08920AF8;
    case 137u: goto L_08920B18;
    case 138u: goto L_08920B24;
    case 139u: goto L_08920B3C;
    case 140u: goto L_08920B58;
    case 141u: goto L_08920B8C;
    case 142u: goto L_08920BAC;
    case 143u: goto L_08920BD0;
    case 144u: goto L_08920BF4;
    case 145u: goto L_08920C04;
    case 146u: goto L_08920C20;
    case 147u: goto L_08920C2C;
    case 148u: goto L_08920C44;
    case 149u: goto L_08920C48;
    case 150u: goto L_08920C58;
    case 151u: goto L_08920C78;
    case 152u: goto L_08920C7C;
    case 153u: goto L_08920C9C;
    case 154u: goto L_08920CAC;
    case 155u: goto L_08920CC8;
    case 156u: goto L_08920CE8;
    case 157u: goto L_08920CFC;
    case 158u: goto L_08920D08;
    case 159u: goto L_08920D30;
    case 160u: goto L_08920D5C;
    case 161u: goto L_08920D7C;
    case 162u: goto L_08920D94;
    case 163u: goto L_08920DB8;
    case 164u: goto L_08920DC4;
    case 165u: goto L_08920DC8;
    case 166u: goto L_08920DF8;
    case 167u: goto L_08920E0C;
    case 168u: goto L_08920E14;
    case 169u: goto L_08920E28;
    case 170u: goto L_08920E44;
    case 171u: goto L_08920E5C;
    case 172u: goto L_08920E6C;
    case 173u: goto L_08920E84;
    case 174u: goto L_08920E94;
    case 175u: goto L_08920EAC;
    case 176u: goto L_08920EBC;
    case 177u: goto L_08920ED4;
    case 178u: goto L_08920EE4;
    case 179u: goto L_08920EFC;
    case 180u: goto L_08920F0C;
    case 181u: goto L_08920F18;
    case 182u: goto L_08920F30;
    case 183u: goto L_08920F40;
    case 184u: goto L_08920F4C;
    case 185u: goto L_08920F64;
    case 186u: goto L_08920F68;
    case 187u: goto L_08920F78;
    case 188u: goto L_08920F94;
    case 189u: goto L_08920FB4;
    case 190u: goto L_08920FC4;
    case 191u: goto L_08920FD0;
    case 192u: goto L_08920FE8;
    case 193u: goto L_08921020;
    case 194u: goto L_08921044;
    case 195u: goto L_08921054;
    case 196u: goto L_08921060;
    case 197u: goto L_0892106C;
    case 198u: goto L_08921078;
    case 199u: goto L_08921084;
    case 200u: goto L_08921090;
    case 201u: goto L_089210A4;
    case 202u: goto L_089210AC;
    case 203u: goto L_089210BC;
    case 204u: goto L_089210C4;
    case 205u: goto L_089210D4;
    case 206u: goto L_089210E0;
    case 207u: goto L_089210EC;
    case 208u: goto L_089210F8;
    case 209u: goto L_08921104;
    case 210u: goto L_08921110;
    case 211u: goto L_0892111C;
    case 212u: goto L_0892112C;
    case 213u: goto L_0892113C;
    case 214u: goto L_0892115C;
    case 215u: goto L_08921174;
    case 216u: goto L_08921190;
    case 217u: goto L_089211A8;
    case 218u: goto L_089211BC;
    case 219u: goto L_089211CC;
    case 220u: goto L_089211DC;
    case 221u: goto L_089211EC;
    case 222u: goto L_08921204;
    case 223u: goto L_0892120C;
    case 224u: goto L_08921228;
    case 225u: goto L_08921240;
    case 226u: goto L_08921244;
    case 227u: goto L_0892124C;
    case 228u: goto L_08921258;
    case 229u: goto L_08921268;
    case 230u: goto L_08921278;
    case 231u: goto L_08921290;
    case 232u: goto L_08921294;
    case 233u: goto L_0892129C;
    case 234u: goto L_089212B4;
    case 235u: goto L_089212C0;
    case 236u: goto L_089212C4;
    case 237u: goto L_089212D0;
    case 238u: goto L_089212D4;
    case 239u: goto L_089212E0;
    case 240u: goto L_089212EC;
    case 241u: goto L_089212F8;
    case 242u: goto L_08921304;
    case 243u: goto L_08921310;
    case 244u: goto L_0892131C;
    case 245u: goto L_08921328;
    case 246u: goto L_08921334;
    case 247u: goto L_08921340;
    case 248u: goto L_0892134C;
    case 249u: goto L_08921358;
    case 250u: goto L_08921364;
    case 251u: goto L_08921370;
    case 252u: goto L_0892137C;
    case 253u: goto L_08921388;
    case 254u: goto L_08921394;
    case 255u: goto L_089213A0;
    case 256u: goto L_089213AC;
    case 257u: goto L_089213B8;
    case 258u: goto L_089213C4;
    case 259u: goto L_089213D0;
    case 260u: goto L_089213DC;
    case 261u: goto L_089213E8;
    case 262u: goto L_089213F4;
    case 263u: goto L_08921400;
    case 264u: goto L_0892140C;
    case 265u: goto L_08921418;
    case 266u: goto L_08921424;
    case 267u: goto L_08921430;
    case 268u: goto L_0892143C;
    case 269u: goto L_08921448;
    case 270u: goto L_08921454;
    case 271u: goto L_08921460;
    case 272u: goto L_0892146C;
    case 273u: goto L_08921478;
    case 274u: goto L_08921484;
    case 275u: goto L_08921490;
    case 276u: goto L_0892149C;
    case 277u: goto L_089214A8;
    case 278u: goto L_089214B4;
    case 279u: goto L_089214C0;
    case 280u: goto L_089214CC;
    case 281u: goto L_089214D8;
    case 282u: goto L_089214E4;
    case 283u: goto L_089214F0;
    case 284u: goto L_089214FC;
    case 285u: goto L_08921508;
    case 286u: goto L_08921514;
    case 287u: goto L_08921528;
    case 288u: goto L_0892152C;
    case 289u: goto L_0892155C;
    case 290u: goto L_08921580;
    case 291u: goto L_08921588;
    case 292u: goto L_08921594;
    case 293u: goto L_0892159C;
    case 294u: goto L_089215B0;
    case 295u: goto L_089215BC;
    case 296u: goto L_089215C4;
    case 297u: goto L_089215D4;
    case 298u: goto L_089215E0;
    case 299u: goto L_089215E4;
    case 300u: goto L_089215F0;
    case 301u: goto L_089215FC;
    case 302u: goto L_08921608;
    case 303u: goto L_08921618;
    case 304u: goto L_0892161C;
    case 305u: goto L_08921634;
    case 306u: goto L_08921654;
    case 307u: goto L_08921660;
    case 308u: goto L_0892166C;
    case 309u: goto L_08921690;
    case 310u: goto L_08921698;
    case 311u: goto L_089216A8;
    case 312u: goto L_089216B0;
    case 313u: goto L_089216C0;
    case 314u: goto L_089216D0;
    case 315u: goto L_089216EC;
    case 316u: goto L_089216FC;
    case 317u: goto L_0892170C;
    case 318u: goto L_08921710;
    case 319u: goto L_08921720;
    case 320u: goto L_0892172C;
    case 321u: goto L_08921740;
    case 322u: goto L_0892174C;
    case 323u: goto L_089217B8;
    case 324u: goto L_089217C8;
    case 325u: goto L_089217CC;
    case 326u: goto L_08921820;
    case 327u: goto L_08921838;
    case 328u: goto L_08921854;
    case 329u: goto L_08921860;
    case 330u: goto L_0892186C;
    case 331u: goto L_08921884;
    case 332u: goto L_0892189C;
    case 333u: goto L_089218A4;
    case 334u: goto L_089218B0;
    case 335u: goto L_089218B4;
    case 336u: goto L_089218C8;
    case 337u: goto L_08921900;
    case 338u: goto L_0892190C;
    case 339u: goto L_08921920;
    case 340u: goto L_0892192C;
    case 341u: goto L_08921934;
    case 342u: goto L_0892194C;
    case 343u: goto L_08921958;
    case 344u: goto L_0892196C;
    case 345u: goto L_08921980;
    case 346u: goto L_0892199C;
    case 347u: goto L_089219A8;
    case 348u: goto L_089219BC;
    case 349u: goto L_089219C8;
    case 350u: goto L_089219D0;
    case 351u: goto L_089219E8;
    case 352u: goto L_089219F4;
    case 353u: goto L_08921A00;
    case 354u: goto L_08921A0C;
    case 355u: goto L_08921A1C;
    case 356u: goto L_08921A34;
    case 357u: goto L_08921A40;
    case 358u: goto L_08921A4C;
    case 359u: goto L_08921A70;
    case 360u: goto L_08921AA0;
    case 361u: goto L_08921AAC;
    case 362u: goto L_08921AB8;
    case 363u: goto L_08921AC4;
    case 364u: goto L_08921AC8;
    case 365u: goto L_08921AD4;
    case 366u: goto L_08921AE4;
    case 367u: goto L_08921AF4;
    case 368u: goto L_08921B00;
    case 369u: goto L_08921B0C;
    case 370u: goto L_08921B18;
    case 371u: goto L_08921B34;
    case 372u: goto L_08921B40;
    case 373u: goto L_08921B50;
    case 374u: goto L_08921B64;
    case 375u: goto L_08921B6C;
    case 376u: goto L_08921B90;
    case 377u: goto L_08921BA4;
    case 378u: goto L_08921BC0;
    case 379u: goto L_08921BCC;
    case 380u: goto L_08921BD0;
    case 381u: goto L_08921BD4;
    case 382u: goto L_08921BE0;
    case 383u: goto L_08921BEC;
    case 384u: goto L_08921C04;
    case 385u: goto L_08921C08;
    case 386u: goto L_08921C14;
    case 387u: goto L_08921C2C;
    case 388u: goto L_08921C48;
    case 389u: goto L_08921C58;
    case 390u: goto L_08921C64;
    case 391u: goto L_08921C80;
    case 392u: goto L_08921C9C;
    case 393u: goto L_08921CB0;
    case 394u: goto L_08921CC4;
    case 395u: goto L_08921CDC;
    case 396u: goto L_08921CEC;
    case 397u: goto L_08921D04;
    case 398u: goto L_08921D18;
    case 399u: goto L_08921D2C;
    case 400u: goto L_08921D48;
    case 401u: goto L_08921D50;
    case 402u: goto L_08921D58;
    case 403u: goto L_08921D64;
    case 404u: goto L_08921D6C;
    case 405u: goto L_08921D78;
    case 406u: goto L_08921D84;
    case 407u: goto L_08921D90;
    case 408u: goto L_08921DD4;
    case 409u: goto L_08921DE0;
    case 410u: goto L_08921DE8;
    case 411u: goto L_08921DF4;
    case 412u: goto L_08921E00;
    case 413u: goto L_08921E10;
    case 414u: goto L_08921E20;
    case 415u: goto L_08921E2C;
    case 416u: goto L_08921E40;
    case 417u: goto L_08921E50;
    case 418u: goto L_08921E60;
    case 419u: goto L_08921E74;
    case 420u: goto L_08921E7C;
    case 421u: goto L_08921EA0;
    case 422u: goto L_08921EAC;
    case 423u: goto L_08921EC4;
    case 424u: goto L_08921ED4;
    case 425u: goto L_08921F04;
    case 426u: goto L_08921F10;
    case 427u: goto L_08921F1C;
    case 428u: goto L_08921F44;
    case 429u: goto L_08921F64;
    case 430u: goto L_08921F74;
    case 431u: goto L_08921F78;
    case 432u: goto L_08921FA8;
    case 433u: goto L_08921FBC;
    case 434u: goto L_08921FCC;
    case 435u: goto L_08921FDC;
    case 436u: goto L_08921FF0;
    case 437u: goto L_08921FFC;
    case 438u: goto L_0892200C;
    case 439u: goto L_08922030;
    case 440u: goto L_08922054;
    case 441u: goto L_08922064;
    case 442u: goto L_08922068;
    case 443u: goto L_08922098;
    case 444u: goto L_089220B4;
    case 445u: goto L_089220C0;
    case 446u: goto L_089220D4;
    case 447u: goto L_08922108;
    case 448u: goto L_08922118;
    case 449u: goto L_08922120;
    case 450u: goto L_08922130;
    case 451u: goto L_08922144;
    case 452u: goto L_08922160;
    case 453u: goto L_0892216C;
    case 454u: goto L_08922170;
    case 455u: goto L_08922174;
    case 456u: goto L_08922180;
    case 457u: goto L_0892218C;
    case 458u: goto L_089221A0;
    case 459u: goto L_089221AC;
    case 460u: goto L_089221C0;
    case 461u: goto L_089221E0;
    case 462u: goto L_089221E4;
    case 463u: goto L_089221F0;
    case 464u: goto L_08922208;
    case 465u: goto L_08922224;
    case 466u: goto L_08922234;
    case 467u: goto L_08922244;
    case 468u: goto L_08922260;
    case 469u: goto L_0892227C;
    case 470u: goto L_08922290;
    case 471u: goto L_089222A4;
    case 472u: goto L_089222C4;
    case 473u: goto L_089222D4;
    case 474u: goto L_089222EC;
    case 475u: goto L_08922300;
    case 476u: goto L_08922314;
    case 477u: goto L_08922334;
    case 478u: goto L_0892233C;
    case 479u: goto L_08922344;
    case 480u: goto L_08922350;
    case 481u: goto L_0892235C;
    case 482u: goto L_08922364;
    case 483u: goto L_08922370;
    case 484u: goto L_0892237C;
    case 485u: goto L_08922384;
    case 486u: goto L_08922390;
    case 487u: goto L_089223A4;
    case 488u: goto L_089223B8;
    case 489u: goto L_089223CC;
    case 490u: goto L_089223E0;
    case 491u: goto L_089223EC;
    case 492u: goto L_089223FC;
    case 493u: goto L_08922408;
    case 494u: goto L_08922414;
    case 495u: goto L_08922424;
    case 496u: goto L_08922434;
    case 497u: goto L_08922444;
    case 498u: goto L_08922450;
    case 499u: goto L_0892245C;
    case 500u: goto L_0892246C;
    case 501u: goto L_08922480;
    case 502u: goto L_089224A8;
    case 503u: goto L_089224B8;
    case 504u: goto L_089224C4;
    case 505u: goto L_089224D0;
    case 506u: goto L_089224F4;
    case 507u: goto L_0892250C;
    case 508u: goto L_08922514;
    case 509u: goto L_08922518;
    case 510u: goto L_08922524;
    case 511u: goto L_08922530;
    case 512u: goto L_0892254C;
    case 513u: goto L_08922558;
    case 514u: goto L_0892258C;
    case 515u: goto L_089225A4;
    case 516u: goto L_089225B8;
    case 517u: goto L_089225BC;
    case 518u: goto L_089225C8;
    case 519u: goto L_089225D8;
    case 520u: goto L_089225E8;
    case 521u: goto L_08922600;
    case 522u: goto L_0892260C;
    case 523u: goto L_08922620;
    case 524u: goto L_08922628;
    case 525u: goto L_08922638;
    case 526u: goto L_08922654;
    case 527u: goto L_08922658;
    case 528u: goto L_08922668;
    case 529u: goto L_0892267C;
    case 530u: goto L_0892268C;
    case 531u: goto L_089226A0;
    case 532u: goto L_089226AC;
    case 533u: goto L_089226C0;
    case 534u: goto L_089226CC;
    case 535u: goto L_089226F8;
    case 536u: goto L_089226FC;
    case 537u: goto L_0892270C;
    case 538u: goto L_08922738;
    case 539u: goto L_08922740;
    case 540u: goto L_08922744;
    case 541u: goto L_08922754;
    case 542u: goto L_08922764;
    case 543u: goto L_0892276C;
    case 544u: goto L_08922770;
    case 545u: goto L_089227A4;
    case 546u: goto L_089227B4;
    case 547u: goto L_089227E0;
    case 548u: goto L_089227F8;
    case 549u: goto L_08922808;
    case 550u: goto L_08922810;
    case 551u: goto L_08922828;
    case 552u: goto L_08922834;
    case 553u: goto L_08922840;
    case 554u: goto L_0892284C;
    case 555u: goto L_08922854;
    case 556u: goto L_0892285C;
    case 557u: goto L_08922878;
    case 558u: goto L_0892288C;
    case 559u: goto L_089228B4;
    case 560u: goto L_089228D8;
    case 561u: goto L_089228FC;
    case 562u: goto L_08922910;
    case 563u: goto L_08922940;
    case 564u: goto L_08922954;
    case 565u: goto L_08922978;
    case 566u: goto L_08922980;
    case 567u: goto L_08922988;
    case 568u: goto L_089229A8;
    case 569u: goto L_089229B4;
    case 570u: goto L_089229C0;
    case 571u: goto L_089229C8;
    case 572u: goto L_089229E0;
    case 573u: goto L_08922A20;
    case 574u: goto L_08922A30;
    case 575u: goto L_08922A54;
    case 576u: goto L_08922A60;
    case 577u: goto L_08922A6C;
    case 578u: goto L_08922A7C;
    case 579u: goto L_08922A88;
    case 580u: goto L_08922A90;
    case 581u: goto L_08922AB0;
    case 582u: goto L_08922AB8;
    case 583u: goto L_08922AD4;
    case 584u: goto L_08922AF8;
    case 585u: goto L_08922B08;
    case 586u: goto L_08922B14;
    case 587u: goto L_08922B28;
    case 588u: goto L_08922B30;
    case 589u: goto L_08922B38;
    case 590u: goto L_08922B3C;
    case 591u: goto L_08922B48;
    case 592u: goto L_08922B54;
    case 593u: goto L_08922B74;
    case 594u: goto L_08922B7C;
    case 595u: goto L_08922B8C;
    case 596u: goto L_08922B9C;
    case 597u: goto L_08922BB8;
    case 598u: goto L_08922BC0;
    case 599u: goto L_08922BDC;
    case 600u: goto L_08922C2C;
    case 601u: goto L_08922C38;
    case 602u: goto L_08922C44;
    case 603u: goto L_08922C4C;
    case 604u: goto L_08922C50;
    case 605u: goto L_08922C70;
    case 606u: goto L_08922C94;
    case 607u: goto L_08922C98;
    case 608u: goto L_08922CA0;
    case 609u: goto L_08922CBC;
    case 610u: goto L_08922CC8;
    case 611u: goto L_08922CD4;
    case 612u: goto L_08922CD8;
    case 613u: goto L_08922CE8;
    case 614u: goto L_08922D08;
    case 615u: goto L_08922D20;
    case 616u: goto L_08922D38;
    case 617u: goto L_08922D54;
    case 618u: goto L_08922D58;
    case 619u: goto L_08922D78;
    case 620u: goto L_08922D84;
    case 621u: goto L_08922D90;
    case 622u: goto L_08922D94;
    case 623u: goto L_08922D98;
    case 624u: goto L_08922DB0;
    case 625u: goto L_08922DD0;
    case 626u: goto L_08922E08;
    case 627u: goto L_08922E18;
    case 628u: goto L_08922E28;
    case 629u: goto L_08922E38;
    case 630u: goto L_08922E4C;
    case 631u: goto L_08922E58;
    case 632u: goto L_08922E68;
    case 633u: goto L_08922E90;
    case 634u: goto L_08922E98;
    case 635u: goto L_08922EA4;
    case 636u: goto L_08922EB0;
    case 637u: goto L_08922EC0;
    case 638u: goto L_08922EDC;
    case 639u: goto L_08922EE8;
    case 640u: goto L_08922EF4;
    case 641u: goto L_08922F00;
    case 642u: goto L_08922F0C;
    case 643u: goto L_08922F14;
    case 644u: goto L_08922F20;
    case 645u: goto L_08922F30;
    case 646u: goto L_08922F3C;
    case 647u: goto L_08922F44;
    case 648u: goto L_08922F50;
    case 649u: goto L_08922F58;
    case 650u: goto L_08922F6C;
    case 651u: goto L_08922F80;
    case 652u: goto L_08922F88;
    case 653u: goto L_08922F94;
    case 654u: goto L_08922FAC;
    case 655u: goto L_08922FB8;
    case 656u: goto L_08922FC0;
    case 657u: goto L_08922FC8;
    case 658u: goto L_08922FD4;
    case 659u: goto L_08922FE0;
    case 660u: goto L_08922FF0;
    case 661u: goto L_08922FFC;
    case 662u: goto L_08923004;
    case 663u: goto L_0892300C;
    case 664u: goto L_0892301C;
    case 665u: goto L_08923024;
    case 666u: goto L_08923034;
    case 667u: goto L_0892304C;
    case 668u: goto L_08923050;
    case 669u: goto L_08923058;
    case 670u: goto L_08923070;
    case 671u: goto L_0892307C;
    case 672u: goto L_08923084;
    case 673u: goto L_08923098;
    case 674u: goto L_089230A0;
    case 675u: goto L_089230AC;
    case 676u: goto L_089230C8;
    case 677u: goto L_089230D4;
    case 678u: goto L_089230DC;
    case 679u: goto L_089230E4;
    case 680u: goto L_089230F0;
    case 681u: goto L_089230FC;
    case 682u: goto L_0892310C;
    case 683u: goto L_08923118;
    case 684u: goto L_08923120;
    case 685u: goto L_08923128;
    case 686u: goto L_08923138;
    case 687u: goto L_08923140;
    case 688u: goto L_08923150;
    case 689u: goto L_08923168;
    case 690u: goto L_0892316C;
    case 691u: goto L_08923174;
    case 692u: goto L_0892318C;
    case 693u: goto L_08923198;
    case 694u: goto L_0892319C;
    case 695u: goto L_089231B8;
    case 696u: goto L_089231F4;
    case 697u: goto L_08923214;
    case 698u: goto L_08923220;
    case 699u: goto L_0892323C;
    case 700u: goto L_08923258;
    case 701u: goto L_08923268;
    case 702u: goto L_08923274;
    case 703u: goto L_08923280;
    case 704u: goto L_08923290;
    case 705u: goto L_089232A4;
    case 706u: goto L_089232B0;
    case 707u: goto L_089232BC;
    case 708u: goto L_089232C8;
    case 709u: goto L_089232D8;
    case 710u: goto L_089232E4;
    case 711u: goto L_089232F0;
    case 712u: goto L_089232F4;
    case 713u: goto L_08923304;
    case 714u: goto L_08923310;
    case 715u: goto L_08923328;
    case 716u: goto L_08923360;
    case 717u: goto L_08923380;
    case 718u: goto L_08923394;
    case 719u: goto L_0892339C;
    case 720u: goto L_089233AC;
    case 721u: goto L_089233BC;
    case 722u: goto L_089233D4;
    case 723u: goto L_089233D8;
    case 724u: goto L_089233E0;
    case 725u: goto L_089233F8;
    case 726u: goto L_08923404;
    case 727u: goto L_08923408;
    case 728u: goto L_08923418;
    case 729u: goto L_08923424;
    case 730u: goto L_08923440;
    case 731u: goto L_0892345C;
    case 732u: goto L_0892347C;
    case 733u: goto L_0892349C;
    case 734u: goto L_089234A8;
    case 735u: goto L_089234BC;
    case 736u: goto L_089234D8;
    case 737u: goto L_089234E0;
    case 738u: goto L_089234E4;
    case 739u: goto L_089234F4;
    case 740u: goto L_08923510;
    case 741u: goto L_08923530;
    case 742u: goto L_08923544;
    case 743u: goto L_08923560;
    case 744u: goto L_08923570;
    case 745u: goto L_08923588;
    case 746u: goto L_0892358C;
    case 747u: goto L_08923594;
    case 748u: goto L_089235AC;
    case 749u: goto L_089235B8;
    case 750u: goto L_089235BC;
    case 751u: goto L_089235CC;
    case 752u: goto L_089235EC;
    case 753u: goto L_08923620;
    case 754u: goto L_0892362C;
    case 755u: goto L_0892363C;
    case 756u: goto L_0892364C;
    case 757u: goto L_08923658;
    case 758u: goto L_08923664;
    case 759u: goto L_08923670;
    case 760u: goto L_0892367C;
    case 761u: goto L_0892368C;
    case 762u: goto L_08923698;
    case 763u: goto L_089236A0;
    case 764u: goto L_089236A8;
    case 765u: goto L_089236B4;
    case 766u: goto L_089236C0;
    case 767u: goto L_089236CC;
    case 768u: goto L_089236DC;
    case 769u: goto L_089236E8;
    case 770u: goto L_08923710;
    case 771u: goto L_08923718;
    case 772u: goto L_0892372C;
    case 773u: goto L_08923740;
    case 774u: goto L_08923748;
    case 775u: goto L_08923760;
    case 776u: goto L_08923768;
    case 777u: goto L_0892377C;
    case 778u: goto L_08923788;
    case 779u: goto L_08923790;
    case 780u: goto L_08923794;
    case 781u: goto L_089237A4;
    case 782u: goto L_089237A8;
    case 783u: goto L_089237C4;
    case 784u: goto L_08923810;
    case 785u: goto L_08923830;
    case 786u: goto L_0892383C;
    case 787u: goto L_08923858;
    case 788u: goto L_08923874;
    case 789u: goto L_08923884;
    case 790u: goto L_08923890;
    case 791u: goto L_0892389C;
    case 792u: goto L_089238B0;
    case 793u: goto L_089238B8;
    case 794u: goto L_089238D4;
    case 795u: goto L_089238D8;
    case 796u: goto L_089238FC;
    case 797u: goto L_08923908;
    case 798u: goto L_08923924;
    case 799u: goto L_08923938;
    case 800u: goto L_08923968;
    case 801u: goto L_08923970;
    case 802u: goto L_0892398C;
    case 803u: goto L_08923994;
    case 804u: goto L_089239A8;
    case 805u: goto L_089239AC;
    case 806u: goto L_089239B8;
    case 807u: goto L_089239BC;
    case 808u: goto L_089239CC;
    case 809u: goto L_089239D0;
    case 810u: goto L_089239FC;
    case 811u: goto L_08923A20;
    case 812u: goto L_08923A2C;
    case 813u: goto L_08923A3C;
    case 814u: goto L_08923A48;
    case 815u: goto L_08923A58;
    case 816u: goto L_08923A64;
    case 817u: goto L_08923A74;
    case 818u: goto L_08923A80;
    case 819u: goto L_08923A90;
    case 820u: goto L_08923AA8;
    case 821u: goto L_08923AB0;
    case 822u: goto L_08923AB8;
    case 823u: goto L_08923AC8;
    case 824u: goto L_08923AE0;
    case 825u: goto L_08923AE4;
    case 826u: goto L_08923AEC;
    case 827u: goto L_08923AF4;
    case 828u: goto L_08923AF8;
    case 829u: goto L_08923B04;
    case 830u: goto L_08923B10;
    case 831u: goto L_08923B1C;
    case 832u: goto L_08923B20;
    case 833u: goto L_08923B3C;
    case 834u: goto L_08923B74;
    case 835u: goto L_08923B7C;
    case 836u: goto L_08923B88;
    case 837u: goto L_08923B98;
    case 838u: goto L_08923BA8;
    case 839u: goto L_08923BB8;
    case 840u: goto L_08923BC4;
    case 841u: goto L_08923BD0;
    case 842u: goto L_08923BDC;
    case 843u: goto L_08923BE8;
    case 844u: goto L_08923BF8;
    case 845u: goto L_08923C04;
    case 846u: goto L_08923C10;
    case 847u: goto L_08923C1C;
    case 848u: goto L_08923C2C;
    case 849u: goto L_08923C38;
    case 850u: goto L_08923C48;
    case 851u: goto L_08923C54;
    case 852u: goto L_08923C5C;
    case 853u: goto L_08923C64;
    case 854u: goto L_08923C70;
    case 855u: goto L_08923C84;
    case 856u: goto L_08923C8C;
    case 857u: goto L_08923CA4;
    case 858u: goto L_08923CAC;
    case 859u: goto L_08923CC0;
    case 860u: goto L_08923CCC;
    case 861u: goto L_08923CD8;
    case 862u: goto L_08923CEC;
    case 863u: goto L_08923CF8;
    case 864u: goto L_08923D20;
    case 865u: goto L_08923D28;
    case 866u: goto L_08923D40;
    case 867u: goto L_08923D58;
    case 868u: goto L_08923D60;
    case 869u: goto L_08923D68;
    case 870u: goto L_08923D80;
    case 871u: goto L_08923D84;
    case 872u: goto L_08923D8C;
    case 873u: goto L_08923D98;
    case 874u: goto L_08923DA0;
    case 875u: goto L_08923DA8;
    case 876u: goto L_08923DB4;
    case 877u: goto L_08923DCC;
    case 878u: goto L_08923DD4;
    case 879u: goto L_08923DE0;
    case 880u: goto L_08923DEC;
    case 881u: goto L_08923E04;
    case 882u: goto L_08923E1C;
    case 883u: goto L_08923E3C;
    case 884u: goto L_08923E4C;
    case 885u: goto L_08923E54;
    case 886u: goto L_08923E68;
    case 887u: goto L_08923E70;
    case 888u: goto L_08923E84;
    case 889u: goto L_08923E90;
    case 890u: goto L_08923E98;
    case 891u: goto L_08923E9C;
    case 892u: goto L_08923EAC;
    case 893u: goto L_08923EB0;
    case 894u: goto L_08923ECC;
    case 895u: goto L_08923EE0;
    case 896u: goto L_08923EF4;
    case 897u: goto L_08923EF8;
    case 898u: goto L_08923F00;
    case 899u: goto L_08923F24;
    case 900u: goto L_08923F54;
    case 901u: goto L_08923F6C;
    case 902u: goto L_08923F74;
    case 903u: goto L_08923F7C;
    case 904u: goto L_08923F84;
    case 905u: goto L_08923FA8;
    case 906u: goto L_08923FB4;
    case 907u: goto L_08923FBC;
    case 908u: goto L_08923FC0;
    case 909u: goto L_08923FD4;
    case 910u: goto L_08923FEC;
    default:
        if (local_transfers == 0u) rt.unsupported(ctx.pc, 0u, "invalid internal function entry");
        else ctx.pc = local_pc;
        return;
    }
    }
L_08920000:
    ctx.set_gpr(25, rt.memory().aot_load32(ctx.gpr[2] + static_cast<std::uint32_t>(0)));
    ctx.set_gpr(25, rt.memory().aot_load32(ctx.gpr[25] + static_cast<std::uint32_t>(96)));
    jump_target = ctx.gpr[25];
    ctx.set_gpr(31, 0x08920010u);
    // nop
    ctx.pc = jump_target;
    if (rt.invoke_chained_call(ctx, &aot_mem) && ctx.pc == 0x08920010u) goto L_08920010;
    return;
L_08920010:
    rt.memory().aot_store32(ctx.gpr[20] + static_cast<std::uint32_t>(276), ctx.gpr[2]);
    ctx.set_gpr(3, rt.memory().aot_load32(ctx.gpr[20] + static_cast<std::uint32_t>(280)));
    rt.memory().aot_store32(ctx.gpr[2] + static_cast<std::uint32_t>(0), ctx.gpr[3]);
    ctx.set_gpr(3, 0u + static_cast<std::uint32_t>(1));
    rt.memory().aot_store32(ctx.gpr[2] + static_cast<std::uint32_t>(4), ctx.gpr[3]);
    ctx.set_gpr(3, rt.memory().aot_load32(ctx.gpr[20] + static_cast<std::uint32_t>(288)));
    rt.memory().aot_store32(ctx.gpr[2] + static_cast<std::uint32_t>(8), ctx.gpr[3]);
    ctx.set_gpr(17, ctx.gpr[2] + static_cast<std::uint32_t>(12));
    ctx.set_gpr(19, 0u + 0u);
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_0892007C;
      }
      goto L_0892003C;
    }
L_0892003C:
    ctx.set_gpr(2, rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(44)));
    ctx.set_gpr(16, ctx.gpr[19] << 2u);
    ctx.set_gpr(2, rt.memory().aot_load32(ctx.gpr[2] + static_cast<std::uint32_t>(16)));
    ctx.set_gpr(2, ctx.gpr[2] + ctx.gpr[16]);
    ctx.set_gpr(2, rt.memory().aot_load32(ctx.gpr[2] + static_cast<std::uint32_t>(0)));
    ctx.set_gpr(4, rt.memory().aot_load32(ctx.gpr[2] + static_cast<std::uint32_t>(8)));
    { const bool branch_taken = ctx.gpr[4] != 0u;
    // nop
      if (branch_taken) {
          goto L_08920064;
      }
      goto L_0892005C;
    }
L_0892005C:
    ctx.set_gpr(2, 2228u << 16u);
    ctx.set_gpr(4, rt.memory().aot_load32(ctx.gpr[2] + static_cast<std::uint32_t>(-1368)));
    goto L_08920064;
L_08920064:
    ctx.set_gpr(31, 0x0892006Cu);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0004_entry, 4u, 508u, 0x08816764u>(ctx, &aot_mem) && ctx.pc == 0x0892006Cu) goto L_0892006C;
    return;
L_0892006C:
    ctx.set_gpr(3, ctx.gpr[2] + static_cast<std::uint32_t>(1));
    ctx.set_gpr(2, ctx.gpr[17] + ctx.gpr[16]);
    rt.memory().aot_store32(ctx.gpr[2] + static_cast<std::uint32_t>(0), ctx.gpr[3]);
    ctx.set_gpr(19, ctx.gpr[19] + static_cast<std::uint32_t>(1));
    goto L_0892007C;
L_0892007C:
    ctx.set_gpr(3, rt.memory().aot_load32(ctx.gpr[20] + static_cast<std::uint32_t>(288)));
    ctx.set_gpr(2, static_cast<std::int32_t>(ctx.gpr[19]) < static_cast<std::int32_t>(ctx.gpr[3]) ? 1u : 0u);
    { const bool branch_taken = ctx.gpr[2] != 0u;
    // nop
      if (branch_taken) {
          goto L_0892003C;
      }
      goto L_0892008C;
    }
L_0892008C:
    ctx.set_gpr(2, ctx.gpr[3] << 2u);
    ctx.set_gpr(18, ctx.gpr[17] + ctx.gpr[2]);
    ctx.set_gpr(19, 0u + 0u);
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_089200E4;
      }
      goto L_089200A0;
    }
L_089200A0:
    ctx.set_gpr(2, rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(44)));
    ctx.set_gpr(16, ctx.gpr[19] << 2u);
    ctx.set_gpr(2, rt.memory().aot_load32(ctx.gpr[2] + static_cast<std::uint32_t>(16)));
    ctx.set_gpr(2, ctx.gpr[2] + ctx.gpr[16]);
    ctx.set_gpr(2, rt.memory().aot_load32(ctx.gpr[2] + static_cast<std::uint32_t>(0)));
    ctx.set_gpr(5, rt.memory().aot_load32(ctx.gpr[2] + static_cast<std::uint32_t>(8)));
    { const bool branch_taken = ctx.gpr[5] != 0u;
    // nop
      if (branch_taken) {
          goto L_089200C8;
      }
      goto L_089200C0;
    }
L_089200C0:
    ctx.set_gpr(2, 2228u << 16u);
    ctx.set_gpr(5, rt.memory().aot_load32(ctx.gpr[2] + static_cast<std::uint32_t>(-1368)));
    goto L_089200C8;
L_089200C8:
    ctx.set_gpr(4, ctx.gpr[18] + 0u);
    ctx.set_gpr(31, 0x089200D4u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0004_entry, 4u, 490u, 0x0881667Cu>(ctx, &aot_mem) && ctx.pc == 0x089200D4u) goto L_089200D4;
    return;
L_089200D4:
    ctx.set_gpr(2, ctx.gpr[17] + ctx.gpr[16]);
    ctx.set_gpr(2, rt.memory().aot_load32(ctx.gpr[2] + static_cast<std::uint32_t>(0)));
    ctx.set_gpr(18, ctx.gpr[18] + ctx.gpr[2]);
    ctx.set_gpr(19, ctx.gpr[19] + static_cast<std::uint32_t>(1));
    goto L_089200E4;
L_089200E4:
    ctx.set_gpr(3, rt.memory().aot_load32(ctx.gpr[20] + static_cast<std::uint32_t>(288)));
    ctx.set_gpr(2, static_cast<std::int32_t>(ctx.gpr[19]) < static_cast<std::int32_t>(ctx.gpr[3]) ? 1u : 0u);
    { const bool branch_taken = ctx.gpr[2] != 0u;
    // nop
      if (branch_taken) {
          goto L_089200A0;
      }
      goto L_089200F4;
    }
L_089200F4:
    ctx.set_gpr(2, rt.memory().aot_load8(ctx.gpr[20] + static_cast<std::uint32_t>(204)));
    { const bool branch_taken = ctx.gpr[2] == 0u;
    // nop
      if (branch_taken) {
          goto L_0892011C;
      }
      goto L_08920100;
    }
L_08920100:
    ctx.set_gpr(4, rt.memory().aot_load32(ctx.gpr[20] + static_cast<std::uint32_t>(244)));
    ctx.set_gpr(6, ctx.gpr[3] + static_cast<std::uint32_t>(3));
    ctx.set_gpr(5, rt.memory().aot_load32(ctx.gpr[20] + static_cast<std::uint32_t>(276)));
    ctx.set_gpr(25, rt.memory().aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(0)));
    ctx.set_gpr(25, rt.memory().aot_load32(ctx.gpr[25] + static_cast<std::uint32_t>(220)));
    jump_target = ctx.gpr[25];
    ctx.set_gpr(31, 0x0892011Cu);
    // nop
    ctx.pc = jump_target;
    if (rt.invoke_chained_call(ctx, &aot_mem) && ctx.pc == 0x0892011Cu) goto L_0892011C;
    return;
L_0892011C:
    ctx.set_gpr(4, rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(44)));
    { const bool branch_taken = ctx.gpr[4] == 0u;
    // nop
      if (branch_taken) {
          goto L_08920130;
      }
      goto L_08920128;
    }
L_08920128:
    ctx.set_gpr(31, 0x08920130u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0014_entry, 14u, 257u, 0x0883D454u>(ctx, &aot_mem) && ctx.pc == 0x08920130u) goto L_08920130;
    return;
L_08920130:
    ctx.set_gpr(2, 0u + 0u);
    ctx.set_gpr(31, rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(28)));
    ctx.set_gpr(20, rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(24)));
    ctx.set_gpr(19, rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(20)));
    ctx.set_gpr(18, rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(16)));
    ctx.set_gpr(17, rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(12)));
    ctx.set_gpr(16, rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(8)));
    ctx.set_gpr(29, ctx.gpr[29] + static_cast<std::uint32_t>(48));
    jump_target = ctx.gpr[31];
    // nop
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_08920158:
    ctx.set_gpr(29, ctx.gpr[29] + static_cast<std::uint32_t>(-32));
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(28), ctx.gpr[31]);
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(24), ctx.gpr[21]);
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(20), ctx.gpr[20]);
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(16), ctx.gpr[19]);
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(12), ctx.gpr[18]);
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(8), ctx.gpr[17]);
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(4), ctx.gpr[16]);
    ctx.set_gpr(17, ctx.gpr[4] + 0u);
    ctx.set_gpr(2, rt.memory().aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(24)));
    { const bool branch_taken = ctx.gpr[2] == 0u;
    // nop
      if (branch_taken) {
          goto L_08920330;
      }
      goto L_08920188;
    }
L_08920188:
    ctx.set_gpr(21, rt.memory().aot_load32(ctx.gpr[2] + static_cast<std::uint32_t>(8)));
    { const bool branch_taken = static_cast<std::int32_t>(ctx.gpr[21]) <= 0;
    // nop
      if (branch_taken) {
          goto L_08920330;
      }
      goto L_08920194;
    }
L_08920194:
    ctx.set_gpr(2, 0u + static_cast<std::uint32_t>(1));
    rt.memory().aot_store8(ctx.gpr[17] + static_cast<std::uint32_t>(253), static_cast<std::uint8_t>(ctx.gpr[2]));
    ctx.set_gpr(2, ctx.gpr[21] + static_cast<std::uint32_t>(3));
    ctx.set_gpr(20, ctx.gpr[2] << 2u);
    rt.memory().aot_store32(ctx.gpr[17] + static_cast<std::uint32_t>(268), ctx.gpr[20]);
    ctx.set_gpr(16, 0u + 0u);
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_089201F0;
      }
      goto L_089201B4;
    }
L_089201B4:
    ctx.set_gpr(2, rt.memory().aot_load32(ctx.gpr[17] + static_cast<std::uint32_t>(24)));
    ctx.set_gpr(3, ctx.gpr[16] << 2u);
    ctx.set_gpr(2, rt.memory().aot_load32(ctx.gpr[2] + static_cast<std::uint32_t>(16)));
    ctx.set_gpr(2, ctx.gpr[2] + ctx.gpr[3]);
    ctx.set_gpr(2, rt.memory().aot_load32(ctx.gpr[2] + static_cast<std::uint32_t>(0)));
    ctx.set_gpr(3, rt.memory().aot_load32(ctx.gpr[2] + static_cast<std::uint32_t>(20)));
    ctx.set_gpr(2, 0u + static_cast<std::uint32_t>(-2));
    ctx.set_gpr(4, ctx.gpr[3] & ctx.gpr[2]);
    ctx.set_gpr(31, 0x089201DCu);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0004_entry, 4u, 508u, 0x08816764u>(ctx, &aot_mem) && ctx.pc == 0x089201DCu) goto L_089201DC;
    return;
L_089201DC:
    ctx.set_gpr(3, ctx.gpr[2] + static_cast<std::uint32_t>(1));
    ctx.set_gpr(2, rt.memory().aot_load32(ctx.gpr[17] + static_cast<std::uint32_t>(268)));
    ctx.set_gpr(2, ctx.gpr[2] + ctx.gpr[3]);
    rt.memory().aot_store32(ctx.gpr[17] + static_cast<std::uint32_t>(268), ctx.gpr[2]);
    ctx.set_gpr(16, ctx.gpr[16] + static_cast<std::uint32_t>(1));
    goto L_089201F0;
L_089201F0:
    ctx.set_gpr(2, static_cast<std::int32_t>(ctx.gpr[16]) < static_cast<std::int32_t>(ctx.gpr[21]) ? 1u : 0u);
    { const bool branch_taken = ctx.gpr[2] != 0u;
    // nop
      if (branch_taken) {
          goto L_089201B4;
      }
      goto L_089201FC;
    }
L_089201FC:
    ctx.set_gpr(4, ctx.gpr[17] + 0u);
    ctx.set_gpr(31, 0x08920208u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0072_entry, 72u, 568u, 0x089267ECu>(ctx, &aot_mem) && ctx.pc == 0x08920208u) goto L_08920208;
    return;
L_08920208:
    ctx.set_gpr(5, rt.memory().aot_load32(ctx.gpr[17] + static_cast<std::uint32_t>(268)));
    ctx.set_gpr(4, ctx.gpr[2] + 0u);
    ctx.set_gpr(6, 0u + static_cast<std::uint32_t>(16));
    ctx.set_gpr(25, rt.memory().aot_load32(ctx.gpr[2] + static_cast<std::uint32_t>(0)));
    ctx.set_gpr(25, rt.memory().aot_load32(ctx.gpr[25] + static_cast<std::uint32_t>(96)));
    jump_target = ctx.gpr[25];
    ctx.set_gpr(31, 0x08920224u);
    // nop
    ctx.pc = jump_target;
    if (rt.invoke_chained_call(ctx, &aot_mem) && ctx.pc == 0x08920224u) goto L_08920224;
    return;
L_08920224:
    rt.memory().aot_store32(ctx.gpr[17] + static_cast<std::uint32_t>(264), ctx.gpr[2]);
    ctx.set_gpr(3, rt.memory().aot_load32(ctx.gpr[17] + static_cast<std::uint32_t>(268)));
    rt.memory().aot_store32(ctx.gpr[2] + static_cast<std::uint32_t>(0), ctx.gpr[3]);
    ctx.set_gpr(3, 0u + static_cast<std::uint32_t>(1));
    ctx.set_gpr(2, rt.memory().aot_load32(ctx.gpr[17] + static_cast<std::uint32_t>(264)));
    rt.memory().aot_store32(ctx.gpr[2] + static_cast<std::uint32_t>(4), ctx.gpr[3]);
    ctx.set_gpr(2, rt.memory().aot_load32(ctx.gpr[17] + static_cast<std::uint32_t>(264)));
    rt.memory().aot_store32(ctx.gpr[2] + static_cast<std::uint32_t>(8), ctx.gpr[21]);
    ctx.set_gpr(2, rt.memory().aot_load32(ctx.gpr[17] + static_cast<std::uint32_t>(264)));
    ctx.set_gpr(19, ctx.gpr[2] + static_cast<std::uint32_t>(12));
    ctx.set_gpr(16, 0u + 0u);
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_08920290;
      }
      goto L_08920258;
    }
L_08920258:
    ctx.set_gpr(2, rt.memory().aot_load32(ctx.gpr[17] + static_cast<std::uint32_t>(24)));
    ctx.set_gpr(18, ctx.gpr[16] << 2u);
    ctx.set_gpr(2, rt.memory().aot_load32(ctx.gpr[2] + static_cast<std::uint32_t>(16)));
    ctx.set_gpr(2, ctx.gpr[2] + ctx.gpr[18]);
    ctx.set_gpr(2, rt.memory().aot_load32(ctx.gpr[2] + static_cast<std::uint32_t>(0)));
    ctx.set_gpr(3, rt.memory().aot_load32(ctx.gpr[2] + static_cast<std::uint32_t>(20)));
    ctx.set_gpr(2, 0u + static_cast<std::uint32_t>(-2));
    ctx.set_gpr(4, ctx.gpr[3] & ctx.gpr[2]);
    ctx.set_gpr(31, 0x08920280u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0004_entry, 4u, 508u, 0x08816764u>(ctx, &aot_mem) && ctx.pc == 0x08920280u) goto L_08920280;
    return;
L_08920280:
    ctx.set_gpr(3, ctx.gpr[2] + static_cast<std::uint32_t>(1));
    ctx.set_gpr(2, ctx.gpr[19] + ctx.gpr[18]);
    rt.memory().aot_store32(ctx.gpr[2] + static_cast<std::uint32_t>(0), ctx.gpr[3]);
    ctx.set_gpr(16, ctx.gpr[16] + static_cast<std::uint32_t>(1));
    goto L_08920290;
L_08920290:
    ctx.set_gpr(2, static_cast<std::int32_t>(ctx.gpr[16]) < static_cast<std::int32_t>(ctx.gpr[21]) ? 1u : 0u);
    { const bool branch_taken = ctx.gpr[2] != 0u;
    // nop
      if (branch_taken) {
          goto L_08920258;
      }
      goto L_0892029C;
    }
L_0892029C:
    ctx.set_gpr(2, rt.memory().aot_load32(ctx.gpr[17] + static_cast<std::uint32_t>(264)));
    ctx.set_gpr(18, ctx.gpr[2] + ctx.gpr[20]);
    ctx.set_gpr(16, 0u + 0u);
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_089202F4;
      }
      goto L_089202B0;
    }
L_089202B0:
    ctx.set_gpr(2, rt.memory().aot_load32(ctx.gpr[17] + static_cast<std::uint32_t>(24)));
    ctx.set_gpr(3, ctx.gpr[16] << 2u);
    ctx.set_gpr(2, rt.memory().aot_load32(ctx.gpr[2] + static_cast<std::uint32_t>(16)));
    ctx.set_gpr(2, ctx.gpr[2] + ctx.gpr[3]);
    ctx.set_gpr(2, rt.memory().aot_load32(ctx.gpr[2] + static_cast<std::uint32_t>(0)));
    ctx.set_gpr(3, rt.memory().aot_load32(ctx.gpr[2] + static_cast<std::uint32_t>(20)));
    ctx.set_gpr(2, 0u + static_cast<std::uint32_t>(-2));
    ctx.set_gpr(5, ctx.gpr[3] & ctx.gpr[2]);
    ctx.set_gpr(4, ctx.gpr[18] + 0u);
    ctx.set_gpr(31, 0x089202DCu);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0004_entry, 4u, 490u, 0x0881667Cu>(ctx, &aot_mem) && ctx.pc == 0x089202DCu) goto L_089202DC;
    return;
L_089202DC:
    ctx.set_gpr(4, ctx.gpr[18] + 0u);
    ctx.set_gpr(31, 0x089202E8u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0004_entry, 4u, 508u, 0x08816764u>(ctx, &aot_mem) && ctx.pc == 0x089202E8u) goto L_089202E8;
    return;
L_089202E8:
    ctx.set_gpr(2, ctx.gpr[2] + static_cast<std::uint32_t>(1));
    ctx.set_gpr(18, ctx.gpr[18] + ctx.gpr[2]);
    ctx.set_gpr(16, ctx.gpr[16] + static_cast<std::uint32_t>(1));
    goto L_089202F4;
L_089202F4:
    ctx.set_gpr(2, static_cast<std::int32_t>(ctx.gpr[16]) < static_cast<std::int32_t>(ctx.gpr[21]) ? 1u : 0u);
    { const bool branch_taken = ctx.gpr[2] != 0u;
    // nop
      if (branch_taken) {
          goto L_089202B0;
      }
      goto L_08920300;
    }
L_08920300:
    ctx.set_gpr(2, rt.memory().aot_load8(ctx.gpr[17] + static_cast<std::uint32_t>(204)));
    { const bool branch_taken = ctx.gpr[2] == 0u;
    // nop
      if (branch_taken) {
          goto L_08920334;
      }
      goto L_0892030C;
    }
L_0892030C:
    ctx.set_gpr(4, rt.memory().aot_load32(ctx.gpr[17] + static_cast<std::uint32_t>(244)));
    ctx.set_gpr(6, ctx.gpr[21] + static_cast<std::uint32_t>(2));
    ctx.set_gpr(5, rt.memory().aot_load32(ctx.gpr[17] + static_cast<std::uint32_t>(264)));
    ctx.set_gpr(25, rt.memory().aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(0)));
    ctx.set_gpr(25, rt.memory().aot_load32(ctx.gpr[25] + static_cast<std::uint32_t>(220)));
    jump_target = ctx.gpr[25];
    ctx.set_gpr(31, 0x08920328u);
    // nop
    ctx.pc = jump_target;
    if (rt.invoke_chained_call(ctx, &aot_mem) && ctx.pc == 0x08920328u) goto L_08920328;
    return;
L_08920328:
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_08920334;
      }
      goto L_08920330;
    }
L_08920330:
    rt.memory().aot_store8(ctx.gpr[17] + static_cast<std::uint32_t>(253), static_cast<std::uint8_t>(0u));
    goto L_08920334;
L_08920334:
    ctx.set_gpr(2, 0u + 0u);
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
L_08920360:
    ctx.set_gpr(29, ctx.gpr[29] + static_cast<std::uint32_t>(-16));
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(12), ctx.gpr[31]);
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(8), ctx.gpr[18]);
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(4), ctx.gpr[17]);
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(0), ctx.gpr[16]);
    ctx.set_gpr(17, ctx.gpr[4] + 0u);
    rt.memory().aot_store32(ctx.gpr[4] + static_cast<std::uint32_t>(160), 0u);
    ctx.set_gpr(2, rt.memory().aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(40)));
    ctx.set_gpr(2, rt.memory().aot_load32(ctx.gpr[2] + static_cast<std::uint32_t>(8)));
    rt.memory().aot_store32(ctx.gpr[4] + static_cast<std::uint32_t>(140), ctx.gpr[2]);
    ctx.set_gpr(16, 0u + 0u);
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_089203C0;
      }
      goto L_08920394;
    }
L_08920394:
    ctx.set_gpr(4, rt.memory().aot_load32(ctx.gpr[17] + static_cast<std::uint32_t>(40)));
    ctx.set_gpr(5, ctx.gpr[16] + 0u);
    ctx.set_gpr(31, 0x089203A4u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0067_entry, 67u, 141u, 0x08910940u>(ctx, &aot_mem) && ctx.pc == 0x089203A4u) goto L_089203A4;
    return;
L_089203A4:
    ctx.set_gpr(4, ctx.gpr[2] + 0u);
    ctx.set_gpr(31, 0x089203B0u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0080_entry, 80u, 627u, 0x08946DE8u>(ctx, &aot_mem) && ctx.pc == 0x089203B0u) goto L_089203B0;
    return;
L_089203B0:
    ctx.set_gpr(3, rt.memory().aot_load32(ctx.gpr[17] + static_cast<std::uint32_t>(160)));
    ctx.set_gpr(2, ctx.gpr[3] + ctx.gpr[2]);
    rt.memory().aot_store32(ctx.gpr[17] + static_cast<std::uint32_t>(160), ctx.gpr[2]);
    ctx.set_gpr(16, ctx.gpr[16] + static_cast<std::uint32_t>(1));
    goto L_089203C0;
L_089203C0:
    ctx.set_gpr(2, rt.memory().aot_load32(ctx.gpr[17] + static_cast<std::uint32_t>(140)));
    ctx.set_gpr(2, static_cast<std::int32_t>(ctx.gpr[16]) < static_cast<std::int32_t>(ctx.gpr[2]) ? 1u : 0u);
    { const bool branch_taken = ctx.gpr[2] != 0u;
    // nop
      if (branch_taken) {
          goto L_08920394;
      }
      goto L_089203D0;
    }
L_089203D0:
    ctx.set_gpr(4, ctx.gpr[17] + 0u);
    ctx.set_gpr(31, 0x089203DCu);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0072_entry, 72u, 568u, 0x089267ECu>(ctx, &aot_mem) && ctx.pc == 0x089203DCu) goto L_089203DC;
    return;
L_089203DC:
    ctx.set_gpr(5, rt.memory().aot_load32(ctx.gpr[17] + static_cast<std::uint32_t>(160)));
    ctx.set_gpr(4, ctx.gpr[2] + 0u);
    ctx.set_gpr(6, 0u + static_cast<std::uint32_t>(16));
    ctx.set_gpr(25, rt.memory().aot_load32(ctx.gpr[2] + static_cast<std::uint32_t>(0)));
    ctx.set_gpr(25, rt.memory().aot_load32(ctx.gpr[25] + static_cast<std::uint32_t>(96)));
    jump_target = ctx.gpr[25];
    ctx.set_gpr(31, 0x089203F8u);
    // nop
    ctx.pc = jump_target;
    if (rt.invoke_chained_call(ctx, &aot_mem) && ctx.pc == 0x089203F8u) goto L_089203F8;
    return;
L_089203F8:
    rt.memory().aot_store32(ctx.gpr[17] + static_cast<std::uint32_t>(212), ctx.gpr[2]);
    ctx.set_gpr(18, ctx.gpr[2] + 0u);
    ctx.set_gpr(16, 0u + 0u);
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_08920440;
      }
      goto L_0892040C;
    }
L_0892040C:
    ctx.set_gpr(4, rt.memory().aot_load32(ctx.gpr[17] + static_cast<std::uint32_t>(40)));
    ctx.set_gpr(5, ctx.gpr[16] + 0u);
    ctx.set_gpr(31, 0x0892041Cu);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0067_entry, 67u, 141u, 0x08910940u>(ctx, &aot_mem) && ctx.pc == 0x0892041Cu) goto L_0892041C;
    return;
L_0892041C:
    ctx.set_gpr(4, ctx.gpr[2] + 0u);
    ctx.set_gpr(5, ctx.gpr[18] + 0u);
    ctx.set_gpr(6, ctx.gpr[17] + 0u);
    ctx.set_gpr(7, rt.memory().aot_load32(ctx.gpr[17] + static_cast<std::uint32_t>(232)));
    ctx.set_gpr(8, rt.memory().aot_load8(ctx.gpr[17] + static_cast<std::uint32_t>(204)));
    ctx.set_gpr(31, 0x08920438u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0080_entry, 80u, 642u, 0x08946EE0u>(ctx, &aot_mem) && ctx.pc == 0x08920438u) goto L_08920438;
    return;
L_08920438:
    ctx.set_gpr(18, ctx.gpr[18] + ctx.gpr[2]);
    ctx.set_gpr(16, ctx.gpr[16] + static_cast<std::uint32_t>(1));
    goto L_08920440;
L_08920440:
    ctx.set_gpr(2, rt.memory().aot_load32(ctx.gpr[17] + static_cast<std::uint32_t>(140)));
    ctx.set_gpr(2, static_cast<std::int32_t>(ctx.gpr[16]) < static_cast<std::int32_t>(ctx.gpr[2]) ? 1u : 0u);
    { const bool branch_taken = ctx.gpr[2] != 0u;
    // nop
      if (branch_taken) {
          goto L_0892040C;
      }
      goto L_08920450;
    }
L_08920450:
    ctx.set_gpr(2, 0u + 0u);
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
L_08920470:
    ctx.set_gpr(29, ctx.gpr[29] + static_cast<std::uint32_t>(-32));
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(12), ctx.gpr[31]);
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(8), ctx.gpr[18]);
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(4), ctx.gpr[17]);
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(0), ctx.gpr[16]);
    ctx.set_gpr(18, ctx.gpr[4] + 0u);
    ctx.set_gpr(16, rt.memory().aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(8)));
    ctx.set_gpr(2, ctx.gpr[16] << 1u);
    ctx.set_gpr(2, ctx.gpr[2] + static_cast<std::uint32_t>(8));
    rt.memory().aot_store32(ctx.gpr[4] + static_cast<std::uint32_t>(144), ctx.gpr[2]);
    ctx.set_gpr(31, 0x089204A0u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0072_entry, 72u, 568u, 0x089267ECu>(ctx, &aot_mem) && ctx.pc == 0x089204A0u) goto L_089204A0;
    return;
L_089204A0:
    ctx.set_gpr(5, rt.memory().aot_load32(ctx.gpr[18] + static_cast<std::uint32_t>(144)));
    ctx.set_gpr(4, ctx.gpr[2] + 0u);
    ctx.set_gpr(6, 0u + static_cast<std::uint32_t>(16));
    ctx.set_gpr(25, rt.memory().aot_load32(ctx.gpr[2] + static_cast<std::uint32_t>(0)));
    ctx.set_gpr(25, rt.memory().aot_load32(ctx.gpr[25] + static_cast<std::uint32_t>(96)));
    jump_target = ctx.gpr[25];
    ctx.set_gpr(31, 0x089204BCu);
    // nop
    ctx.pc = jump_target;
    if (rt.invoke_chained_call(ctx, &aot_mem) && ctx.pc == 0x089204BCu) goto L_089204BC;
    return;
L_089204BC:
    rt.memory().aot_store32(ctx.gpr[18] + static_cast<std::uint32_t>(148), ctx.gpr[2]);
    ctx.set_gpr(3, rt.memory().aot_load32(ctx.gpr[18] + static_cast<std::uint32_t>(144)));
    rt.memory().aot_store32(ctx.gpr[2] + static_cast<std::uint32_t>(0), ctx.gpr[3]);
    ctx.set_gpr(2, rt.memory().aot_load32(ctx.gpr[18] + static_cast<std::uint32_t>(148)));
    rt.memory().aot_store32(ctx.gpr[2] + static_cast<std::uint32_t>(4), ctx.gpr[16]);
    ctx.set_gpr(17, 0u + 0u);
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_08920514;
      }
      goto L_089204DC;
    }
L_089204DC:
    ctx.set_gpr(3, ctx.gpr[17] << 2u);
    ctx.set_gpr(2, rt.memory().aot_load32(ctx.gpr[18] + static_cast<std::uint32_t>(16)));
    ctx.set_gpr(2, ctx.gpr[2] + ctx.gpr[3]);
    ctx.set_gpr(2, rt.memory().aot_load32(ctx.gpr[2] + static_cast<std::uint32_t>(0)));
    ctx.set_gpr(4, rt.memory().aot_load32(ctx.gpr[18] + static_cast<std::uint32_t>(40)));
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(28), ctx.gpr[2]);
    ctx.set_gpr(5, ctx.gpr[29] + static_cast<std::uint32_t>(28));
    ctx.set_gpr(31, 0x08920500u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0048_entry, 48u, 250u, 0x088C5528u>(ctx, &aot_mem) && ctx.pc == 0x08920500u) goto L_08920500;
    return;
L_08920500:
    ctx.set_gpr(4, rt.memory().aot_load32(ctx.gpr[18] + static_cast<std::uint32_t>(148)));
    ctx.set_gpr(3, ctx.gpr[17] << 1u);
    ctx.set_gpr(3, ctx.gpr[3] + ctx.gpr[4]);
    rt.memory().aot_store16(ctx.gpr[3] + static_cast<std::uint32_t>(8), static_cast<std::uint16_t>(ctx.gpr[2]));
    ctx.set_gpr(17, ctx.gpr[17] + static_cast<std::uint32_t>(1));
    goto L_08920514;
L_08920514:
    ctx.set_gpr(2, static_cast<std::int32_t>(ctx.gpr[17]) < static_cast<std::int32_t>(ctx.gpr[16]) ? 1u : 0u);
    { const bool branch_taken = ctx.gpr[2] != 0u;
    // nop
      if (branch_taken) {
          goto L_089204DC;
      }
      goto L_08920520;
    }
L_08920520:
    ctx.set_gpr(2, rt.memory().aot_load8(ctx.gpr[18] + static_cast<std::uint32_t>(204)));
    { const bool branch_taken = ctx.gpr[2] == 0u;
    // nop
      if (branch_taken) {
          goto L_08920568;
      }
      goto L_0892052C;
    }
L_0892052C:
    ctx.set_gpr(4, rt.memory().aot_load32(ctx.gpr[18] + static_cast<std::uint32_t>(244)));
    ctx.set_gpr(5, rt.memory().aot_load32(ctx.gpr[18] + static_cast<std::uint32_t>(148)));
    ctx.set_gpr(6, 0u + static_cast<std::uint32_t>(2));
    ctx.set_gpr(25, rt.memory().aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(0)));
    ctx.set_gpr(25, rt.memory().aot_load32(ctx.gpr[25] + static_cast<std::uint32_t>(220)));
    jump_target = ctx.gpr[25];
    ctx.set_gpr(31, 0x08920548u);
    // nop
    ctx.pc = jump_target;
    if (rt.invoke_chained_call(ctx, &aot_mem) && ctx.pc == 0x08920548u) goto L_08920548;
    return;
L_08920548:
    ctx.set_gpr(4, rt.memory().aot_load32(ctx.gpr[18] + static_cast<std::uint32_t>(248)));
    ctx.set_gpr(2, rt.memory().aot_load32(ctx.gpr[18] + static_cast<std::uint32_t>(148)));
    ctx.set_gpr(5, ctx.gpr[2] + static_cast<std::uint32_t>(8));
    ctx.set_gpr(6, ctx.gpr[16] + 0u);
    ctx.set_gpr(25, rt.memory().aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(0)));
    ctx.set_gpr(25, rt.memory().aot_load32(ctx.gpr[25] + static_cast<std::uint32_t>(220)));
    jump_target = ctx.gpr[25];
    ctx.set_gpr(31, 0x08920568u);
    // nop
    ctx.pc = jump_target;
    if (rt.invoke_chained_call(ctx, &aot_mem) && ctx.pc == 0x08920568u) goto L_08920568;
    return;
L_08920568:
    ctx.set_gpr(2, 0u + 0u);
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
L_08920588:
    ctx.set_gpr(29, ctx.gpr[29] + static_cast<std::uint32_t>(-48));
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(28), ctx.gpr[31]);
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(24), ctx.gpr[21]);
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(20), ctx.gpr[20]);
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(16), ctx.gpr[19]);
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(12), ctx.gpr[18]);
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(8), ctx.gpr[17]);
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(4), ctx.gpr[16]);
    ctx.set_gpr(20, ctx.gpr[4] + 0u);
    ctx.set_gpr(2, rt.memory().aot_load8(ctx.gpr[4] + static_cast<std::uint32_t>(254)));
    { const bool branch_taken = ctx.gpr[2] == 0u;
    // nop
      if (branch_taken) {
          goto L_089205C4;
      }
      goto L_089205B8;
    }
L_089205B8:
    ctx.set_gpr(2, 0u + 0u);
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_089207D8;
      }
      goto L_089205C4;
    }
L_089205C4:
    ctx.set_gpr(31, 0x089205CCu);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0072_entry, 72u, 568u, 0x089267ECu>(ctx, &aot_mem) && ctx.pc == 0x089205CCu) goto L_089205CC;
    return;
L_089205CC:
    ctx.set_gpr(4, ctx.gpr[2] + 0u);
    ctx.set_gpr(31, 0x089205D8u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0061_entry, 61u, 111u, 0x088F8A08u>(ctx, &aot_mem) && ctx.pc == 0x089205D8u) goto L_089205D8;
    return;
L_089205D8:
    ctx.set_gpr(4, ctx.gpr[20] + static_cast<std::uint32_t>(44));
    ctx.set_gpr(5, ctx.gpr[2] + 0u);
    ctx.set_gpr(31, 0x089205E8u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0085_entry, 85u, 67u, 0x0895853Cu>(ctx, &aot_mem) && ctx.pc == 0x089205E8u) goto L_089205E8;
    return;
L_089205E8:
    ctx.set_gpr(5, rt.memory().aot_load32(ctx.gpr[20] + static_cast<std::uint32_t>(8)));
    ctx.set_gpr(4, rt.memory().aot_load32(ctx.gpr[20] + static_cast<std::uint32_t>(44)));
    { const bool branch_taken = static_cast<std::int32_t>(ctx.gpr[5]) < 0;
    // nop
      if (branch_taken) {
          goto L_08920620;
      }
      goto L_089205F8;
    }
L_089205F8:
    ctx.set_gpr(2, rt.memory().aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(12)));
    ctx.set_gpr(1, static_cast<std::int32_t>(ctx.gpr[2]) < static_cast<std::int32_t>(ctx.gpr[5]) ? 1u : 0u);
    { const bool branch_taken = ctx.gpr[1] != 0u;
    // nop
      if (branch_taken) {
          goto L_08920614;
      }
      goto L_08920608;
    }
L_08920608:
    rt.memory().aot_store32(ctx.gpr[4] + static_cast<std::uint32_t>(8), ctx.gpr[5]);
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_08920620;
      }
      goto L_08920614;
    }
L_08920614:
    ctx.set_gpr(6, 0u + static_cast<std::uint32_t>(4));
    ctx.set_gpr(31, 0x08920620u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0066_entry, 66u, 795u, 0x0890FB1Cu>(ctx, &aot_mem) && ctx.pc == 0x08920620u) goto L_08920620;
    return;
L_08920620:
    ctx.set_gpr(4, ctx.gpr[20] + 0u);
    ctx.set_gpr(31, 0x0892062Cu);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0072_entry, 72u, 568u, 0x089267ECu>(ctx, &aot_mem) && ctx.pc == 0x0892062Cu) goto L_0892062C;
    return;
L_0892062C:
    ctx.set_gpr(4, ctx.gpr[2] + 0u);
    ctx.set_gpr(31, 0x08920638u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0058_entry, 58u, 119u, 0x088ECA5Cu>(ctx, &aot_mem) && ctx.pc == 0x08920638u) goto L_08920638;
    return;
L_08920638:
    ctx.set_gpr(4, ctx.gpr[20] + static_cast<std::uint32_t>(96));
    ctx.set_gpr(5, ctx.gpr[2] + 0u);
    ctx.set_gpr(31, 0x08920648u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0085_entry, 85u, 67u, 0x0895853Cu>(ctx, &aot_mem) && ctx.pc == 0x08920648u) goto L_08920648;
    return;
L_08920648:
    ctx.set_gpr(4, ctx.gpr[20] + 0u);
    ctx.set_gpr(31, 0x08920654u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0072_entry, 72u, 568u, 0x089267ECu>(ctx, &aot_mem) && ctx.pc == 0x08920654u) goto L_08920654;
    return;
L_08920654:
    ctx.set_gpr(4, ctx.gpr[2] + 0u);
    ctx.set_gpr(31, 0x08920660u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0060_entry, 60u, 88u, 0x088F4808u>(ctx, &aot_mem) && ctx.pc == 0x08920660u) goto L_08920660;
    return;
L_08920660:
    ctx.set_gpr(4, ctx.gpr[20] + static_cast<std::uint32_t>(40));
    ctx.set_gpr(5, ctx.gpr[2] + 0u);
    ctx.set_gpr(31, 0x08920670u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0085_entry, 85u, 67u, 0x0895853Cu>(ctx, &aot_mem) && ctx.pc == 0x08920670u) goto L_08920670;
    return;
L_08920670:
    ctx.set_gpr(17, rt.memory().aot_load32(ctx.gpr[20] + static_cast<std::uint32_t>(8)));
    ctx.set_gpr(19, 0u + 0u);
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_089207C0;
      }
      goto L_08920680;
    }
L_08920680:
    ctx.set_gpr(16, ctx.gpr[19] << 2u);
    ctx.set_gpr(2, rt.memory().aot_load32(ctx.gpr[20] + static_cast<std::uint32_t>(16)));
    ctx.set_gpr(2, ctx.gpr[2] + ctx.gpr[16]);
    ctx.set_gpr(18, rt.memory().aot_load32(ctx.gpr[2] + static_cast<std::uint32_t>(0)));
    ctx.set_gpr(4, ctx.gpr[18] + 0u);
    ctx.set_gpr(5, ctx.gpr[20] + 0u);
    ctx.set_gpr(25, rt.memory().aot_load32(ctx.gpr[18] + static_cast<std::uint32_t>(0)));
    ctx.set_gpr(25, rt.memory().aot_load32(ctx.gpr[25] + static_cast<std::uint32_t>(104)));
    jump_target = ctx.gpr[25];
    ctx.set_gpr(31, 0x089206A8u);
    // nop
    ctx.pc = jump_target;
    if (rt.invoke_chained_call(ctx, &aot_mem) && ctx.pc == 0x089206A8u) goto L_089206A8;
    return;
L_089206A8:
    { const bool branch_taken = ctx.gpr[18] != ctx.gpr[2];
    // nop
      if (branch_taken) {
          goto L_089206F4;
      }
      goto L_089206B0;
    }
L_089206B0:
    ctx.set_gpr(21, rt.memory().aot_load32(ctx.gpr[20] + static_cast<std::uint32_t>(40)));
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(44), ctx.gpr[18]);
    { const bool branch_taken = ctx.gpr[18] == 0u;
    // nop
      if (branch_taken) {
          goto L_089206CC;
      }
      goto L_089206C0;
    }
L_089206C0:
    ctx.set_gpr(4, ctx.gpr[18] + 0u);
    ctx.set_gpr(31, 0x089206CCu);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0014_entry, 14u, 274u, 0x0883D588u>(ctx, &aot_mem) && ctx.pc == 0x089206CCu) goto L_089206CC;
    return;
L_089206CC:
    ctx.set_gpr(4, ctx.gpr[21] + 0u);
    ctx.set_gpr(5, ctx.gpr[29] + static_cast<std::uint32_t>(44));
    ctx.set_gpr(31, 0x089206DCu);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0052_entry, 52u, 81u, 0x088D44E0u>(ctx, &aot_mem) && ctx.pc == 0x089206DCu) goto L_089206DC;
    return;
L_089206DC:
    ctx.set_gpr(4, ctx.gpr[21] + 0u);
    ctx.set_gpr(5, ctx.gpr[2] + 0u);
    ctx.set_gpr(6, 0u + static_cast<std::uint32_t>(1));
    ctx.set_gpr(7, ctx.gpr[29] + static_cast<std::uint32_t>(44));
    ctx.set_gpr(31, 0x089206F4u);
    // nop
    goto L_08920800;
L_089206F4:
    ctx.set_gpr(4, rt.memory().aot_load32(ctx.gpr[18] + static_cast<std::uint32_t>(24)));
    ctx.set_gpr(3, rt.memory().aot_load32(ctx.gpr[20] + static_cast<std::uint32_t>(44)));
    ctx.set_gpr(2, rt.memory().aot_load32(ctx.gpr[3] + static_cast<std::uint32_t>(8)));
    { const bool branch_taken = ctx.gpr[2] == 0u;
    // nop
      if (branch_taken) {
          goto L_08920728;
      }
      goto L_08920708;
    }
L_08920708:
    { const bool branch_taken = static_cast<std::int32_t>(ctx.gpr[19]) < 0;
    // nop
      if (branch_taken) {
          goto L_08920728;
      }
      goto L_08920710;
    }
L_08920710:
    ctx.set_gpr(1, static_cast<std::int32_t>(ctx.gpr[19]) < static_cast<std::int32_t>(ctx.gpr[2]) ? 1u : 0u);
    { const bool branch_taken = ctx.gpr[1] == 0u;
    // nop
      if (branch_taken) {
          goto L_08920728;
      }
      goto L_0892071C;
    }
L_0892071C:
    ctx.set_gpr(2, rt.memory().aot_load32(ctx.gpr[3] + static_cast<std::uint32_t>(16)));
    ctx.set_gpr(2, ctx.gpr[2] + ctx.gpr[16]);
    rt.memory().aot_store32(ctx.gpr[2] + static_cast<std::uint32_t>(0), ctx.gpr[4]);
    goto L_08920728;
L_08920728:
    ctx.set_gpr(4, ctx.gpr[18] + 0u);
    ctx.set_gpr(5, rt.memory().aot_load32(ctx.gpr[18] + static_cast<std::uint32_t>(24)));
    ctx.set_gpr(25, rt.memory().aot_load32(ctx.gpr[18] + static_cast<std::uint32_t>(0)));
    ctx.set_gpr(25, rt.memory().aot_load32(ctx.gpr[25] + static_cast<std::uint32_t>(108)));
    jump_target = ctx.gpr[25];
    ctx.set_gpr(31, 0x08920740u);
    // nop
    ctx.pc = jump_target;
    if (rt.invoke_chained_call(ctx, &aot_mem) && ctx.pc == 0x08920740u) goto L_08920740;
    return;
L_08920740:
    ctx.set_gpr(4, ctx.gpr[18] + 0u);
    ctx.set_gpr(5, 0u + 0u);
    ctx.set_gpr(25, rt.memory().aot_load32(ctx.gpr[18] + static_cast<std::uint32_t>(0)));
    ctx.set_gpr(25, rt.memory().aot_load32(ctx.gpr[25] + static_cast<std::uint32_t>(92)));
    jump_target = ctx.gpr[25];
    ctx.set_gpr(31, 0x08920758u);
    // nop
    ctx.pc = jump_target;
    if (rt.invoke_chained_call(ctx, &aot_mem) && ctx.pc == 0x08920758u) goto L_08920758;
    return;
L_08920758:
    rt.memory().aot_store32(ctx.gpr[18] + static_cast<std::uint32_t>(12), ctx.gpr[19]);
    ctx.set_gpr(4, ctx.gpr[18] + 0u);
    ctx.set_gpr(5, ctx.gpr[20] + 0u);
    ctx.set_gpr(25, rt.memory().aot_load32(ctx.gpr[18] + static_cast<std::uint32_t>(0)));
    ctx.set_gpr(25, rt.memory().aot_load32(ctx.gpr[25] + static_cast<std::uint32_t>(104)));
    jump_target = ctx.gpr[25];
    ctx.set_gpr(31, 0x08920774u);
    // nop
    ctx.pc = jump_target;
    if (rt.invoke_chained_call(ctx, &aot_mem) && ctx.pc == 0x08920774u) goto L_08920774;
    return;
L_08920774:
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(40), ctx.gpr[2]);
    ctx.set_gpr(4, ctx.gpr[2] + 0u);
    { const bool branch_taken = ctx.gpr[2] == 0u;
    // nop
      if (branch_taken) {
          goto L_0892078C;
      }
      goto L_08920784;
    }
L_08920784:
    ctx.set_gpr(31, 0x0892078Cu);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0014_entry, 14u, 274u, 0x0883D588u>(ctx, &aot_mem) && ctx.pc == 0x0892078Cu) goto L_0892078C;
    return;
L_0892078C:
    ctx.set_gpr(2, rt.memory().aot_load32(ctx.gpr[20] + static_cast<std::uint32_t>(16)));
    ctx.set_gpr(2, ctx.gpr[2] + ctx.gpr[16]);
    ctx.set_gpr(4, rt.memory().aot_load32(ctx.gpr[2] + static_cast<std::uint32_t>(0)));
    { const bool branch_taken = ctx.gpr[4] == 0u;
    // nop
      if (branch_taken) {
          goto L_089207A8;
      }
      goto L_089207A0;
    }
L_089207A0:
    ctx.set_gpr(31, 0x089207A8u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0014_entry, 14u, 257u, 0x0883D454u>(ctx, &aot_mem) && ctx.pc == 0x089207A8u) goto L_089207A8;
    return;
L_089207A8:
    ctx.set_gpr(4, ctx.gpr[20] + 0u);
    ctx.set_gpr(5, ctx.gpr[19] + 0u);
    ctx.set_gpr(6, ctx.gpr[29] + static_cast<std::uint32_t>(40));
    ctx.set_gpr(31, 0x089207BCu);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0051_entry, 51u, 23u, 0x088D019Cu>(ctx, &aot_mem) && ctx.pc == 0x089207BCu) goto L_089207BC;
    return;
L_089207BC:
    ctx.set_gpr(19, ctx.gpr[19] + static_cast<std::uint32_t>(1));
    goto L_089207C0;
L_089207C0:
    ctx.set_gpr(2, static_cast<std::int32_t>(ctx.gpr[19]) < static_cast<std::int32_t>(ctx.gpr[17]) ? 1u : 0u);
    { const bool branch_taken = ctx.gpr[2] != 0u;
    // nop
      if (branch_taken) {
          goto L_08920680;
      }
      goto L_089207CC;
    }
L_089207CC:
    ctx.set_gpr(2, 0u + static_cast<std::uint32_t>(1));
    rt.memory().aot_store8(ctx.gpr[20] + static_cast<std::uint32_t>(254), static_cast<std::uint8_t>(ctx.gpr[2]));
    ctx.set_gpr(2, 0u + 0u);
    goto L_089207D8;
L_089207D8:
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
L_08920800:
    ctx.set_gpr(29, ctx.gpr[29] + static_cast<std::uint32_t>(-16));
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(12), ctx.gpr[31]);
    ctx.set_gpr(31, 0x08920810u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0066_entry, 66u, 837u, 0x0890FF10u>(ctx, &aot_mem) && ctx.pc == 0x08920810u) goto L_08920810;
    return;
L_08920810:
    ctx.set_gpr(31, rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(12)));
    ctx.set_gpr(29, ctx.gpr[29] + static_cast<std::uint32_t>(16));
    jump_target = ctx.gpr[31];
    // nop
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_08920820:
    ctx.set_gpr(29, ctx.gpr[29] + static_cast<std::uint32_t>(-16));
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(12), ctx.gpr[31]);
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(8), ctx.gpr[18]);
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(4), ctx.gpr[17]);
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(0), ctx.gpr[16]);
    ctx.set_gpr(18, ctx.gpr[4] + 0u);
    rt.memory().aot_store32(ctx.gpr[4] + static_cast<std::uint32_t>(160), 0u);
    ctx.set_gpr(2, rt.memory().aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(8)));
    rt.memory().aot_store32(ctx.gpr[4] + static_cast<std::uint32_t>(140), ctx.gpr[2]);
    ctx.set_gpr(17, 0u + 0u);
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_08920878;
      }
      goto L_08920850;
    }
L_08920850:
    ctx.set_gpr(3, ctx.gpr[17] << 2u);
    ctx.set_gpr(2, rt.memory().aot_load32(ctx.gpr[18] + static_cast<std::uint32_t>(16)));
    ctx.set_gpr(2, ctx.gpr[2] + ctx.gpr[3]);
    ctx.set_gpr(4, rt.memory().aot_load32(ctx.gpr[2] + static_cast<std::uint32_t>(0)));
    ctx.set_gpr(31, 0x08920868u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0080_entry, 80u, 627u, 0x08946DE8u>(ctx, &aot_mem) && ctx.pc == 0x08920868u) goto L_08920868;
    return;
L_08920868:
    ctx.set_gpr(3, rt.memory().aot_load32(ctx.gpr[18] + static_cast<std::uint32_t>(160)));
    ctx.set_gpr(2, ctx.gpr[3] + ctx.gpr[2]);
    rt.memory().aot_store32(ctx.gpr[18] + static_cast<std::uint32_t>(160), ctx.gpr[2]);
    ctx.set_gpr(17, ctx.gpr[17] + static_cast<std::uint32_t>(1));
    goto L_08920878;
L_08920878:
    ctx.set_gpr(2, rt.memory().aot_load32(ctx.gpr[18] + static_cast<std::uint32_t>(140)));
    ctx.set_gpr(2, static_cast<std::int32_t>(ctx.gpr[17]) < static_cast<std::int32_t>(ctx.gpr[2]) ? 1u : 0u);
    { const bool branch_taken = ctx.gpr[2] != 0u;
    // nop
      if (branch_taken) {
          goto L_08920850;
      }
      goto L_08920888;
    }
L_08920888:
    ctx.set_gpr(4, ctx.gpr[18] + 0u);
    ctx.set_gpr(31, 0x08920894u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0072_entry, 72u, 568u, 0x089267ECu>(ctx, &aot_mem) && ctx.pc == 0x08920894u) goto L_08920894;
    return;
L_08920894:
    ctx.set_gpr(5, rt.memory().aot_load32(ctx.gpr[18] + static_cast<std::uint32_t>(160)));
    ctx.set_gpr(4, ctx.gpr[2] + 0u);
    ctx.set_gpr(6, 0u + static_cast<std::uint32_t>(16));
    ctx.set_gpr(25, rt.memory().aot_load32(ctx.gpr[2] + static_cast<std::uint32_t>(0)));
    ctx.set_gpr(25, rt.memory().aot_load32(ctx.gpr[25] + static_cast<std::uint32_t>(96)));
    jump_target = ctx.gpr[25];
    ctx.set_gpr(31, 0x089208B0u);
    // nop
    ctx.pc = jump_target;
    if (rt.invoke_chained_call(ctx, &aot_mem) && ctx.pc == 0x089208B0u) goto L_089208B0;
    return;
L_089208B0:
    rt.memory().aot_store32(ctx.gpr[18] + static_cast<std::uint32_t>(212), ctx.gpr[2]);
    ctx.set_gpr(16, ctx.gpr[2] + 0u);
    ctx.set_gpr(17, 0u + 0u);
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_089208F4;
      }
      goto L_089208C4;
    }
L_089208C4:
    ctx.set_gpr(3, ctx.gpr[17] << 2u);
    ctx.set_gpr(2, rt.memory().aot_load32(ctx.gpr[18] + static_cast<std::uint32_t>(16)));
    ctx.set_gpr(2, ctx.gpr[2] + ctx.gpr[3]);
    ctx.set_gpr(4, rt.memory().aot_load32(ctx.gpr[2] + static_cast<std::uint32_t>(0)));
    ctx.set_gpr(5, ctx.gpr[16] + 0u);
    ctx.set_gpr(6, 0u + 0u);
    ctx.set_gpr(7, rt.memory().aot_load32(ctx.gpr[18] + static_cast<std::uint32_t>(232)));
    ctx.set_gpr(8, rt.memory().aot_load8(ctx.gpr[18] + static_cast<std::uint32_t>(204)));
    ctx.set_gpr(31, 0x089208ECu);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0080_entry, 80u, 642u, 0x08946EE0u>(ctx, &aot_mem) && ctx.pc == 0x089208ECu) goto L_089208EC;
    return;
L_089208EC:
    ctx.set_gpr(16, ctx.gpr[16] + ctx.gpr[2]);
    ctx.set_gpr(17, ctx.gpr[17] + static_cast<std::uint32_t>(1));
    goto L_089208F4;
L_089208F4:
    ctx.set_gpr(2, rt.memory().aot_load32(ctx.gpr[18] + static_cast<std::uint32_t>(140)));
    ctx.set_gpr(2, static_cast<std::int32_t>(ctx.gpr[17]) < static_cast<std::int32_t>(ctx.gpr[2]) ? 1u : 0u);
    { const bool branch_taken = ctx.gpr[2] != 0u;
    // nop
      if (branch_taken) {
          goto L_089208C4;
      }
      goto L_08920904;
    }
L_08920904:
    ctx.set_gpr(2, 0u + 0u);
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
L_08920924:
    ctx.set_gpr(29, ctx.gpr[29] + static_cast<std::uint32_t>(-16));
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(12), ctx.gpr[31]);
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(8), ctx.gpr[18]);
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(4), ctx.gpr[17]);
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(0), ctx.gpr[16]);
    ctx.set_gpr(18, ctx.gpr[4] + 0u);
    ctx.set_gpr(31, 0x08920944u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0072_entry, 72u, 568u, 0x089267ECu>(ctx, &aot_mem) && ctx.pc == 0x08920944u) goto L_08920944;
    return;
L_08920944:
    ctx.set_gpr(5, rt.memory().aot_load32(ctx.gpr[18] + static_cast<std::uint32_t>(184)));
    ctx.set_gpr(4, ctx.gpr[2] + 0u);
    ctx.set_gpr(6, 0u + static_cast<std::uint32_t>(16));
    ctx.set_gpr(25, rt.memory().aot_load32(ctx.gpr[2] + static_cast<std::uint32_t>(0)));
    ctx.set_gpr(25, rt.memory().aot_load32(ctx.gpr[25] + static_cast<std::uint32_t>(96)));
    jump_target = ctx.gpr[25];
    ctx.set_gpr(31, 0x08920960u);
    // nop
    ctx.pc = jump_target;
    if (rt.invoke_chained_call(ctx, &aot_mem) && ctx.pc == 0x08920960u) goto L_08920960;
    return;
L_08920960:
    rt.memory().aot_store32(ctx.gpr[18] + static_cast<std::uint32_t>(216), ctx.gpr[2]);
    rt.memory().aot_store32(ctx.gpr[18] + static_cast<std::uint32_t>(292), ctx.gpr[2]);
    ctx.set_gpr(16, rt.memory().aot_load32(ctx.gpr[18] + static_cast<std::uint32_t>(8)));
    ctx.set_gpr(17, 0u + 0u);
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_089209A4;
      }
      goto L_08920978;
    }
L_08920978:
    ctx.set_gpr(4, ctx.gpr[18] + 0u);
    ctx.set_gpr(5, ctx.gpr[17] + 0u);
    ctx.set_gpr(31, 0x08920988u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0067_entry, 67u, 141u, 0x08910940u>(ctx, &aot_mem) && ctx.pc == 0x08920988u) goto L_08920988;
    return;
L_08920988:
    ctx.set_gpr(4, ctx.gpr[2] + 0u);
    ctx.set_gpr(5, ctx.gpr[18] + 0u);
    ctx.set_gpr(25, rt.memory().aot_load32(ctx.gpr[2] + static_cast<std::uint32_t>(0)));
    ctx.set_gpr(25, rt.memory().aot_load32(ctx.gpr[25] + static_cast<std::uint32_t>(164)));
    jump_target = ctx.gpr[25];
    ctx.set_gpr(31, 0x089209A0u);
    // nop
    ctx.pc = jump_target;
    if (rt.invoke_chained_call(ctx, &aot_mem) && ctx.pc == 0x089209A0u) goto L_089209A0;
    return;
L_089209A0:
    ctx.set_gpr(17, ctx.gpr[17] + static_cast<std::uint32_t>(1));
    goto L_089209A4;
L_089209A4:
    ctx.set_gpr(2, static_cast<std::int32_t>(ctx.gpr[17]) < static_cast<std::int32_t>(ctx.gpr[16]) ? 1u : 0u);
    { const bool branch_taken = ctx.gpr[2] != 0u;
    // nop
      if (branch_taken) {
          goto L_08920978;
      }
      goto L_089209B0;
    }
L_089209B0:
    ctx.set_gpr(2, 0u + 0u);
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
L_089209D0:
    ctx.set_gpr(29, ctx.gpr[29] + static_cast<std::uint32_t>(-16));
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(12), ctx.gpr[31]);
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(8), ctx.gpr[17]);
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(4), ctx.gpr[16]);
    ctx.set_gpr(17, ctx.gpr[4] + 0u);
    ctx.set_gpr(31, 0x089209ECu);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0072_entry, 72u, 568u, 0x089267ECu>(ctx, &aot_mem) && ctx.pc == 0x089209ECu) goto L_089209EC;
    return;
L_089209EC:
    ctx.set_gpr(4, ctx.gpr[2] + 0u);
    ctx.set_gpr(5, 0u + static_cast<std::uint32_t>(48));
    ctx.set_gpr(6, 0u + static_cast<std::uint32_t>(16));
    ctx.set_gpr(25, rt.memory().aot_load32(ctx.gpr[2] + static_cast<std::uint32_t>(0)));
    ctx.set_gpr(25, rt.memory().aot_load32(ctx.gpr[25] + static_cast<std::uint32_t>(96)));
    jump_target = ctx.gpr[25];
    ctx.set_gpr(31, 0x08920A08u);
    // nop
    ctx.pc = jump_target;
    if (rt.invoke_chained_call(ctx, &aot_mem) && ctx.pc == 0x08920A08u) goto L_08920A08;
    return;
L_08920A08:
    ctx.set_gpr(16, ctx.gpr[2] + 0u);
    ctx.set_gpr(4, ctx.gpr[16] + 0u);
    ctx.set_gpr(5, 0u + 0u);
    ctx.set_gpr(6, 0u + static_cast<std::uint32_t>(48));
    ctx.set_gpr(31, 0x08920A20u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0003_entry, 3u, 719u, 0x08812EE8u>(ctx, &aot_mem) && ctx.pc == 0x08920A20u) goto L_08920A20;
    return;
L_08920A20:
    ctx.set_gpr(2, rt.memory().aot_load32(ctx.gpr[17] + static_cast<std::uint32_t>(160)));
    rt.memory().aot_store32(ctx.gpr[16] + static_cast<std::uint32_t>(0), ctx.gpr[2]);
    ctx.set_gpr(2, rt.memory().aot_load32(ctx.gpr[17] + static_cast<std::uint32_t>(140)));
    rt.memory().aot_store32(ctx.gpr[16] + static_cast<std::uint32_t>(4), ctx.gpr[2]);
    ctx.set_gpr(2, rt.memory().aot_load32(ctx.gpr[17] + static_cast<std::uint32_t>(168)));
    rt.memory().aot_store32(ctx.gpr[16] + static_cast<std::uint32_t>(8), ctx.gpr[2]);
    ctx.set_gpr(2, rt.memory().aot_load32(ctx.gpr[17] + static_cast<std::uint32_t>(164)));
    rt.memory().aot_store32(ctx.gpr[16] + static_cast<std::uint32_t>(12), ctx.gpr[2]);
    ctx.set_gpr(2, rt.memory().aot_load32(ctx.gpr[17] + static_cast<std::uint32_t>(184)));
    rt.memory().aot_store32(ctx.gpr[16] + static_cast<std::uint32_t>(16), ctx.gpr[2]);
    ctx.set_gpr(2, rt.memory().aot_load32(ctx.gpr[17] + static_cast<std::uint32_t>(180)));
    rt.memory().aot_store32(ctx.gpr[16] + static_cast<std::uint32_t>(20), ctx.gpr[2]);
    ctx.set_gpr(2, rt.memory().aot_load32(ctx.gpr[17] + static_cast<std::uint32_t>(192)));
    rt.memory().aot_store32(ctx.gpr[16] + static_cast<std::uint32_t>(24), ctx.gpr[2]);
    ctx.set_gpr(2, rt.memory().aot_load32(ctx.gpr[17] + static_cast<std::uint32_t>(188)));
    rt.memory().aot_store32(ctx.gpr[16] + static_cast<std::uint32_t>(28), ctx.gpr[2]);
    ctx.set_gpr(2, rt.memory().aot_load32(ctx.gpr[17] + static_cast<std::uint32_t>(176)));
    rt.memory().aot_store32(ctx.gpr[16] + static_cast<std::uint32_t>(32), ctx.gpr[2]);
    ctx.set_gpr(2, rt.memory().aot_load32(ctx.gpr[17] + static_cast<std::uint32_t>(172)));
    rt.memory().aot_store32(ctx.gpr[16] + static_cast<std::uint32_t>(36), ctx.gpr[2]);
    ctx.set_gpr(2, rt.memory().aot_load32(ctx.gpr[17] + static_cast<std::uint32_t>(124)));
    rt.memory().aot_store32(ctx.gpr[16] + static_cast<std::uint32_t>(40), ctx.gpr[2]);
    ctx.set_gpr(3, rt.memory().aot_load32(ctx.gpr[17] + static_cast<std::uint32_t>(128)));
    ctx.set_gpr(2, rt.memory().aot_load8(ctx.gpr[17] + static_cast<std::uint32_t>(252)));
    { const bool branch_taken = ctx.gpr[2] == 0u;
    // nop
      if (branch_taken) {
          goto L_08920A90;
      }
      goto L_08920A88;
    }
L_08920A88:
    ctx.set_gpr(2, 32768u << 16u);
    ctx.set_gpr(3, ctx.gpr[3] | ctx.gpr[2]);
    goto L_08920A90;
L_08920A90:
    ctx.set_gpr(2, rt.memory().aot_load8(ctx.gpr[17] + static_cast<std::uint32_t>(253)));
    { const bool branch_taken = ctx.gpr[2] == 0u;
    // nop
      if (branch_taken) {
          goto L_08920AA4;
      }
      goto L_08920A9C;
    }
L_08920A9C:
    ctx.set_gpr(2, 16384u << 16u);
    ctx.set_gpr(3, ctx.gpr[3] | ctx.gpr[2]);
    goto L_08920AA4;
L_08920AA4:
    ctx.set_gpr(2, rt.memory().aot_load8(ctx.gpr[17] + static_cast<std::uint32_t>(36)));
    { const bool branch_taken = ctx.gpr[2] == 0u;
    // nop
      if (branch_taken) {
          goto L_08920AB8;
      }
      goto L_08920AB0;
    }
L_08920AB0:
    ctx.set_gpr(2, 8192u << 16u);
    ctx.set_gpr(3, ctx.gpr[3] | ctx.gpr[2]);
    goto L_08920AB8;
L_08920AB8:
    ctx.set_gpr(2, rt.memory().aot_load8(ctx.gpr[17] + static_cast<std::uint32_t>(69)));
    { const bool branch_taken = ctx.gpr[2] == 0u;
    // nop
      if (branch_taken) {
          goto L_08920ACC;
      }
      goto L_08920AC4;
    }
L_08920AC4:
    ctx.set_gpr(2, 4096u << 16u);
    ctx.set_gpr(3, ctx.gpr[3] | ctx.gpr[2]);
    goto L_08920ACC;
L_08920ACC:
    rt.memory().aot_store32(ctx.gpr[16] + static_cast<std::uint32_t>(44), ctx.gpr[3]);
    ctx.set_gpr(2, rt.memory().aot_load8(ctx.gpr[17] + static_cast<std::uint32_t>(204)));
    { const bool branch_taken = ctx.gpr[2] == 0u;
    // nop
      if (branch_taken) {
          goto L_08920AF8;
      }
      goto L_08920ADC;
    }
L_08920ADC:
    ctx.set_gpr(4, rt.memory().aot_load32(ctx.gpr[17] + static_cast<std::uint32_t>(244)));
    ctx.set_gpr(5, ctx.gpr[16] + 0u);
    ctx.set_gpr(6, 0u + static_cast<std::uint32_t>(12));
    ctx.set_gpr(25, rt.memory().aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(0)));
    ctx.set_gpr(25, rt.memory().aot_load32(ctx.gpr[25] + static_cast<std::uint32_t>(220)));
    jump_target = ctx.gpr[25];
    ctx.set_gpr(31, 0x08920AF8u);
    // nop
    ctx.pc = jump_target;
    if (rt.invoke_chained_call(ctx, &aot_mem) && ctx.pc == 0x08920AF8u) goto L_08920AF8;
    return;
L_08920AF8:
    ctx.set_gpr(4, rt.memory().aot_load32(ctx.gpr[17] + static_cast<std::uint32_t>(132)));
    ctx.set_gpr(5, ctx.gpr[16] + 0u);
    ctx.set_gpr(6, 0u + static_cast<std::uint32_t>(4));
    ctx.set_gpr(7, 0u + static_cast<std::uint32_t>(12));
    ctx.set_gpr(25, rt.memory().aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(0)));
    ctx.set_gpr(25, rt.memory().aot_load32(ctx.gpr[25] + static_cast<std::uint32_t>(116)));
    jump_target = ctx.gpr[25];
    ctx.set_gpr(31, 0x08920B18u);
    // nop
    ctx.pc = jump_target;
    if (rt.invoke_chained_call(ctx, &aot_mem) && ctx.pc == 0x08920B18u) goto L_08920B18;
    return;
L_08920B18:
    ctx.set_gpr(4, ctx.gpr[17] + 0u);
    ctx.set_gpr(31, 0x08920B24u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0072_entry, 72u, 568u, 0x089267ECu>(ctx, &aot_mem) && ctx.pc == 0x08920B24u) goto L_08920B24;
    return;
L_08920B24:
    ctx.set_gpr(4, ctx.gpr[2] + 0u);
    ctx.set_gpr(5, ctx.gpr[16] + 0u);
    ctx.set_gpr(25, rt.memory().aot_load32(ctx.gpr[2] + static_cast<std::uint32_t>(0)));
    ctx.set_gpr(25, rt.memory().aot_load32(ctx.gpr[25] + static_cast<std::uint32_t>(144)));
    jump_target = ctx.gpr[25];
    ctx.set_gpr(31, 0x08920B3Cu);
    // nop
    ctx.pc = jump_target;
    if (rt.invoke_chained_call(ctx, &aot_mem) && ctx.pc == 0x08920B3Cu) goto L_08920B3C;
    return;
L_08920B3C:
    ctx.set_gpr(2, 0u + 0u);
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
L_08920B58:
    ctx.set_gpr(29, ctx.gpr[29] + static_cast<std::uint32_t>(-48));
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
    ctx.set_gpr(31, 0x08920B8Cu);
    // nop
    goto L_08923328;
L_08920B8C:
    ctx.set_gpr(4, rt.memory().aot_load32(ctx.gpr[21] + static_cast<std::uint32_t>(132)));
    ctx.set_gpr(5, rt.memory().aot_load32(ctx.gpr[21] + static_cast<std::uint32_t>(220)));
    ctx.set_gpr(6, rt.memory().aot_load32(ctx.gpr[21] + static_cast<std::uint32_t>(176)));
    ctx.set_gpr(7, 0u + static_cast<std::uint32_t>(1));
    ctx.set_gpr(25, rt.memory().aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(0)));
    ctx.set_gpr(25, rt.memory().aot_load32(ctx.gpr[25] + static_cast<std::uint32_t>(116)));
    jump_target = ctx.gpr[25];
    ctx.set_gpr(31, 0x08920BACu);
    // nop
    ctx.pc = jump_target;
    if (rt.invoke_chained_call(ctx, &aot_mem) && ctx.pc == 0x08920BACu) goto L_08920BAC;
    return;
L_08920BAC:
    ctx.set_gpr(19, ctx.gpr[2] + 0u);
    ctx.set_gpr(4, rt.memory().aot_load32(ctx.gpr[21] + static_cast<std::uint32_t>(132)));
    ctx.set_gpr(5, rt.memory().aot_load32(ctx.gpr[21] + static_cast<std::uint32_t>(276)));
    ctx.set_gpr(6, rt.memory().aot_load32(ctx.gpr[21] + static_cast<std::uint32_t>(280)));
    ctx.set_gpr(7, 0u + static_cast<std::uint32_t>(1));
    ctx.set_gpr(25, rt.memory().aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(0)));
    ctx.set_gpr(25, rt.memory().aot_load32(ctx.gpr[25] + static_cast<std::uint32_t>(116)));
    jump_target = ctx.gpr[25];
    ctx.set_gpr(31, 0x08920BD0u);
    // nop
    ctx.pc = jump_target;
    if (rt.invoke_chained_call(ctx, &aot_mem) && ctx.pc == 0x08920BD0u) goto L_08920BD0;
    return;
L_08920BD0:
    ctx.set_gpr(18, ctx.gpr[2] + 0u);
    ctx.set_gpr(4, rt.memory().aot_load32(ctx.gpr[21] + static_cast<std::uint32_t>(132)));
    ctx.set_gpr(5, rt.memory().aot_load32(ctx.gpr[21] + static_cast<std::uint32_t>(208)));
    ctx.set_gpr(6, rt.memory().aot_load32(ctx.gpr[21] + static_cast<std::uint32_t>(168)));
    ctx.set_gpr(7, 0u + static_cast<std::uint32_t>(1));
    ctx.set_gpr(25, rt.memory().aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(0)));
    ctx.set_gpr(25, rt.memory().aot_load32(ctx.gpr[25] + static_cast<std::uint32_t>(116)));
    jump_target = ctx.gpr[25];
    ctx.set_gpr(31, 0x08920BF4u);
    // nop
    ctx.pc = jump_target;
    if (rt.invoke_chained_call(ctx, &aot_mem) && ctx.pc == 0x08920BF4u) goto L_08920BF4;
    return;
L_08920BF4:
    ctx.set_gpr(17, ctx.gpr[2] + 0u);
    ctx.set_gpr(5, rt.memory().aot_load32(ctx.gpr[21] + static_cast<std::uint32_t>(264)));
    { const bool branch_taken = ctx.gpr[5] == 0u;
    // nop
      if (branch_taken) {
          goto L_08920C48;
      }
      goto L_08920C04;
    }
L_08920C04:
    ctx.set_gpr(4, rt.memory().aot_load32(ctx.gpr[21] + static_cast<std::uint32_t>(132)));
    ctx.set_gpr(6, rt.memory().aot_load32(ctx.gpr[21] + static_cast<std::uint32_t>(268)));
    ctx.set_gpr(7, 0u + static_cast<std::uint32_t>(1));
    ctx.set_gpr(25, rt.memory().aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(0)));
    ctx.set_gpr(25, rt.memory().aot_load32(ctx.gpr[25] + static_cast<std::uint32_t>(116)));
    jump_target = ctx.gpr[25];
    ctx.set_gpr(31, 0x08920C20u);
    // nop
    ctx.pc = jump_target;
    if (rt.invoke_chained_call(ctx, &aot_mem) && ctx.pc == 0x08920C20u) goto L_08920C20;
    return;
L_08920C20:
    ctx.set_gpr(4, ctx.gpr[21] + 0u);
    ctx.set_gpr(31, 0x08920C2Cu);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0072_entry, 72u, 568u, 0x089267ECu>(ctx, &aot_mem) && ctx.pc == 0x08920C2Cu) goto L_08920C2C;
    return;
L_08920C2C:
    ctx.set_gpr(4, ctx.gpr[2] + 0u);
    ctx.set_gpr(5, rt.memory().aot_load32(ctx.gpr[21] + static_cast<std::uint32_t>(264)));
    ctx.set_gpr(25, rt.memory().aot_load32(ctx.gpr[2] + static_cast<std::uint32_t>(0)));
    ctx.set_gpr(25, rt.memory().aot_load32(ctx.gpr[25] + static_cast<std::uint32_t>(144)));
    jump_target = ctx.gpr[25];
    ctx.set_gpr(31, 0x08920C44u);
    // nop
    ctx.pc = jump_target;
    if (rt.invoke_chained_call(ctx, &aot_mem) && ctx.pc == 0x08920C44u) goto L_08920C44;
    return;
L_08920C44:
    rt.memory().aot_store32(ctx.gpr[21] + static_cast<std::uint32_t>(264), 0u);
    goto L_08920C48;
L_08920C48:
    ctx.set_gpr(20, 0u + static_cast<std::uint32_t>(1));
    ctx.set_gpr(2, rt.memory().aot_load8(ctx.gpr[21] + static_cast<std::uint32_t>(69)));
    { const bool branch_taken = ctx.gpr[2] == 0u;
    // nop
      if (branch_taken) {
          goto L_08920C7C;
      }
      goto L_08920C58;
    }
L_08920C58:
    ctx.set_gpr(4, rt.memory().aot_load32(ctx.gpr[21] + static_cast<std::uint32_t>(132)));
    ctx.set_gpr(5, rt.memory().aot_load32(ctx.gpr[21] + static_cast<std::uint32_t>(340)));
    ctx.set_gpr(6, rt.memory().aot_load32(ctx.gpr[21] + static_cast<std::uint32_t>(336)));
    ctx.set_gpr(7, ctx.gpr[20] + 0u);
    ctx.set_gpr(25, rt.memory().aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(0)));
    ctx.set_gpr(25, rt.memory().aot_load32(ctx.gpr[25] + static_cast<std::uint32_t>(116)));
    jump_target = ctx.gpr[25];
    ctx.set_gpr(31, 0x08920C78u);
    // nop
    ctx.pc = jump_target;
    if (rt.invoke_chained_call(ctx, &aot_mem) && ctx.pc == 0x08920C78u) goto L_08920C78;
    return;
L_08920C78:
    ctx.set_gpr(20, ctx.gpr[2] + 0u);
    goto L_08920C7C;
L_08920C7C:
    ctx.set_gpr(4, rt.memory().aot_load32(ctx.gpr[21] + static_cast<std::uint32_t>(132)));
    ctx.set_gpr(5, rt.memory().aot_load32(ctx.gpr[21] + static_cast<std::uint32_t>(212)));
    ctx.set_gpr(6, rt.memory().aot_load32(ctx.gpr[21] + static_cast<std::uint32_t>(160)));
    ctx.set_gpr(7, 0u + static_cast<std::uint32_t>(1));
    ctx.set_gpr(25, rt.memory().aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(0)));
    ctx.set_gpr(25, rt.memory().aot_load32(ctx.gpr[25] + static_cast<std::uint32_t>(116)));
    jump_target = ctx.gpr[25];
    ctx.set_gpr(31, 0x08920C9Cu);
    // nop
    ctx.pc = jump_target;
    if (rt.invoke_chained_call(ctx, &aot_mem) && ctx.pc == 0x08920C9Cu) goto L_08920C9C;
    return;
L_08920C9C:
    ctx.set_gpr(16, ctx.gpr[2] + 0u);
    ctx.set_gpr(2, rt.memory().aot_load8(ctx.gpr[21] + static_cast<std::uint32_t>(204)));
    { const bool branch_taken = ctx.gpr[2] == 0u;
    // nop
      if (branch_taken) {
          goto L_08920CC8;
      }
      goto L_08920CAC;
    }
L_08920CAC:
    ctx.set_gpr(4, rt.memory().aot_load32(ctx.gpr[21] + static_cast<std::uint32_t>(244)));
    ctx.set_gpr(5, rt.memory().aot_load32(ctx.gpr[21] + static_cast<std::uint32_t>(148)));
    ctx.set_gpr(6, 0u + static_cast<std::uint32_t>(2));
    ctx.set_gpr(25, rt.memory().aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(0)));
    ctx.set_gpr(25, rt.memory().aot_load32(ctx.gpr[25] + static_cast<std::uint32_t>(220)));
    jump_target = ctx.gpr[25];
    ctx.set_gpr(31, 0x08920CC8u);
    // nop
    ctx.pc = jump_target;
    if (rt.invoke_chained_call(ctx, &aot_mem) && ctx.pc == 0x08920CC8u) goto L_08920CC8;
    return;
L_08920CC8:
    ctx.set_gpr(4, rt.memory().aot_load32(ctx.gpr[21] + static_cast<std::uint32_t>(132)));
    ctx.set_gpr(5, rt.memory().aot_load32(ctx.gpr[21] + static_cast<std::uint32_t>(148)));
    ctx.set_gpr(6, rt.memory().aot_load32(ctx.gpr[21] + static_cast<std::uint32_t>(144)));
    ctx.set_gpr(7, 0u + static_cast<std::uint32_t>(1));
    ctx.set_gpr(25, rt.memory().aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(0)));
    ctx.set_gpr(25, rt.memory().aot_load32(ctx.gpr[25] + static_cast<std::uint32_t>(116)));
    jump_target = ctx.gpr[25];
    ctx.set_gpr(31, 0x08920CE8u);
    // nop
    ctx.pc = jump_target;
    if (rt.invoke_chained_call(ctx, &aot_mem) && ctx.pc == 0x08920CE8u) goto L_08920CE8;
    return;
L_08920CE8:
    ctx.set_gpr(22, ctx.gpr[2] + 0u);
    ctx.set_gpr(2, rt.memory().aot_load32(ctx.gpr[21] + static_cast<std::uint32_t>(260)));
    ctx.set_gpr(1, static_cast<std::int32_t>(ctx.gpr[2]) < 0 ? 1u : 0u);
    { const bool branch_taken = ctx.gpr[1] != 0u;
    // nop
      if (branch_taken) {
          goto L_08920D5C;
      }
      goto L_08920CFC;
    }
L_08920CFC:
    ctx.set_gpr(2, rt.memory().aot_load8(ctx.gpr[21] + static_cast<std::uint32_t>(204)));
    { const bool branch_taken = ctx.gpr[2] == 0u;
    // nop
      if (branch_taken) {
          goto L_08920D30;
      }
      goto L_08920D08;
    }
L_08920D08:
    ctx.set_gpr(2, 2245u << 16u);
    ctx.set_gpr(2, rt.memory().aot_load32(ctx.gpr[2] + static_cast<std::uint32_t>(27588)));
    ctx.set_gpr(2, rt.memory().aot_load32(ctx.gpr[2] + static_cast<std::uint32_t>(8)));
    ctx.set_gpr(5, ctx.gpr[21] + ctx.gpr[2]);
    ctx.set_gpr(4, rt.memory().aot_load32(ctx.gpr[21] + static_cast<std::uint32_t>(244)));
    ctx.set_gpr(6, 0u + static_cast<std::uint32_t>(1));
    ctx.set_gpr(25, rt.memory().aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(0)));
    ctx.set_gpr(25, rt.memory().aot_load32(ctx.gpr[25] + static_cast<std::uint32_t>(220)));
    jump_target = ctx.gpr[25];
    ctx.set_gpr(31, 0x08920D30u);
    // nop
    ctx.pc = jump_target;
    if (rt.invoke_chained_call(ctx, &aot_mem) && ctx.pc == 0x08920D30u) goto L_08920D30;
    return;
L_08920D30:
    ctx.set_gpr(2, 2245u << 16u);
    ctx.set_gpr(2, rt.memory().aot_load32(ctx.gpr[2] + static_cast<std::uint32_t>(27588)));
    ctx.set_gpr(2, rt.memory().aot_load32(ctx.gpr[2] + static_cast<std::uint32_t>(8)));
    ctx.set_gpr(5, ctx.gpr[21] + ctx.gpr[2]);
    ctx.set_gpr(4, rt.memory().aot_load32(ctx.gpr[21] + static_cast<std::uint32_t>(132)));
    ctx.set_gpr(6, 0u + static_cast<std::uint32_t>(4));
    ctx.set_gpr(7, 0u + static_cast<std::uint32_t>(1));
    ctx.set_gpr(25, rt.memory().aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(0)));
    ctx.set_gpr(25, rt.memory().aot_load32(ctx.gpr[25] + static_cast<std::uint32_t>(116)));
    jump_target = ctx.gpr[25];
    ctx.set_gpr(31, 0x08920D5Cu);
    // nop
    ctx.pc = jump_target;
    if (rt.invoke_chained_call(ctx, &aot_mem) && ctx.pc == 0x08920D5Cu) goto L_08920D5C;
    return;
L_08920D5C:
    ctx.set_gpr(4, rt.memory().aot_load32(ctx.gpr[21] + static_cast<std::uint32_t>(132)));
    ctx.set_gpr(5, rt.memory().aot_load32(ctx.gpr[21] + static_cast<std::uint32_t>(216)));
    ctx.set_gpr(6, rt.memory().aot_load32(ctx.gpr[21] + static_cast<std::uint32_t>(184)));
    ctx.set_gpr(7, 0u + static_cast<std::uint32_t>(1));
    ctx.set_gpr(25, rt.memory().aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(0)));
    ctx.set_gpr(25, rt.memory().aot_load32(ctx.gpr[25] + static_cast<std::uint32_t>(116)));
    jump_target = ctx.gpr[25];
    ctx.set_gpr(31, 0x08920D7Cu);
    // nop
    ctx.pc = jump_target;
    if (rt.invoke_chained_call(ctx, &aot_mem) && ctx.pc == 0x08920D7Cu) goto L_08920D7C;
    return;
L_08920D7C:
    ctx.set_gpr(23, ctx.gpr[2] + 0u);
    ctx.set_gpr(4, ctx.gpr[21] + 0u);
    ctx.set_gpr(25, rt.memory().aot_load32(ctx.gpr[21] + static_cast<std::uint32_t>(0)));
    ctx.set_gpr(25, rt.memory().aot_load32(ctx.gpr[25] + static_cast<std::uint32_t>(144)));
    jump_target = ctx.gpr[25];
    ctx.set_gpr(31, 0x08920D94u);
    // nop
    ctx.pc = jump_target;
    if (rt.invoke_chained_call(ctx, &aot_mem) && ctx.pc == 0x08920D94u) goto L_08920D94;
    return;
L_08920D94:
    ctx.set_gpr(3, ctx.gpr[17] + ctx.gpr[20]);
    ctx.set_gpr(3, ctx.gpr[16] + ctx.gpr[3]);
    ctx.set_gpr(3, ctx.gpr[23] + ctx.gpr[3]);
    ctx.set_gpr(2, ctx.gpr[2] + ctx.gpr[3]);
    ctx.set_gpr(2, ctx.gpr[19] + ctx.gpr[2]);
    ctx.set_gpr(2, ctx.gpr[18] + ctx.gpr[2]);
    ctx.set_gpr(2, ctx.gpr[22] + ctx.gpr[2]);
    { const bool branch_taken = ctx.gpr[2] != 0u;
    // nop
      if (branch_taken) {
          goto L_08920DC4;
      }
      goto L_08920DB8;
    }
L_08920DB8:
    ctx.set_gpr(2, 0u + static_cast<std::uint32_t>(1));
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_08920DC8;
      }
      goto L_08920DC4;
    }
L_08920DC4:
    ctx.set_gpr(2, 0u + 0u);
    goto L_08920DC8;
L_08920DC8:
    ctx.set_gpr(31, rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(44)));
    ctx.set_gpr(23, rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(40)));
    ctx.set_gpr(22, rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(36)));
    ctx.set_gpr(21, rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(32)));
    ctx.set_gpr(20, rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(28)));
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
L_08920DF8:
    ctx.set_gpr(29, ctx.gpr[29] + static_cast<std::uint32_t>(-16));
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(12), ctx.gpr[31]);
    ctx.set_gpr(2, rt.memory().aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(236)));
    { const bool branch_taken = ctx.gpr[2] == 0u;
    // nop
      if (branch_taken) {
          goto L_08920E14;
      }
      goto L_08920E0C;
    }
L_08920E0C:
    ctx.set_gpr(31, 0x08920E14u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0070_entry, 70u, 686u, 0x0891F1BCu>(ctx, &aot_mem) && ctx.pc == 0x08920E14u) goto L_08920E14;
    return;
L_08920E14:
    ctx.set_gpr(2, 0u + 0u);
    ctx.set_gpr(31, rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(12)));
    ctx.set_gpr(29, ctx.gpr[29] + static_cast<std::uint32_t>(16));
    jump_target = ctx.gpr[31];
    // nop
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_08920E28:
    ctx.set_gpr(29, ctx.gpr[29] + static_cast<std::uint32_t>(-16));
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(12), ctx.gpr[31]);
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(8), ctx.gpr[17]);
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(4), ctx.gpr[16]);
    ctx.set_gpr(17, ctx.gpr[4] + 0u);
    ctx.set_gpr(31, 0x08920E44u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0072_entry, 72u, 568u, 0x089267ECu>(ctx, &aot_mem) && ctx.pc == 0x08920E44u) goto L_08920E44;
    return;
L_08920E44:
    ctx.set_gpr(4, ctx.gpr[2] + 0u);
    ctx.set_gpr(5, rt.memory().aot_load32(ctx.gpr[17] + static_cast<std::uint32_t>(208)));
    ctx.set_gpr(25, rt.memory().aot_load32(ctx.gpr[2] + static_cast<std::uint32_t>(0)));
    ctx.set_gpr(25, rt.memory().aot_load32(ctx.gpr[25] + static_cast<std::uint32_t>(144)));
    jump_target = ctx.gpr[25];
    ctx.set_gpr(31, 0x08920E5Cu);
    // nop
    ctx.pc = jump_target;
    if (rt.invoke_chained_call(ctx, &aot_mem) && ctx.pc == 0x08920E5Cu) goto L_08920E5C;
    return;
L_08920E5C:
    rt.memory().aot_store32(ctx.gpr[17] + static_cast<std::uint32_t>(208), 0u);
    ctx.set_gpr(4, ctx.gpr[17] + 0u);
    ctx.set_gpr(31, 0x08920E6Cu);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0072_entry, 72u, 568u, 0x089267ECu>(ctx, &aot_mem) && ctx.pc == 0x08920E6Cu) goto L_08920E6C;
    return;
L_08920E6C:
    ctx.set_gpr(4, ctx.gpr[2] + 0u);
    ctx.set_gpr(5, rt.memory().aot_load32(ctx.gpr[17] + static_cast<std::uint32_t>(212)));
    ctx.set_gpr(25, rt.memory().aot_load32(ctx.gpr[2] + static_cast<std::uint32_t>(0)));
    ctx.set_gpr(25, rt.memory().aot_load32(ctx.gpr[25] + static_cast<std::uint32_t>(144)));
    jump_target = ctx.gpr[25];
    ctx.set_gpr(31, 0x08920E84u);
    // nop
    ctx.pc = jump_target;
    if (rt.invoke_chained_call(ctx, &aot_mem) && ctx.pc == 0x08920E84u) goto L_08920E84;
    return;
L_08920E84:
    rt.memory().aot_store32(ctx.gpr[17] + static_cast<std::uint32_t>(212), 0u);
    ctx.set_gpr(4, ctx.gpr[17] + 0u);
    ctx.set_gpr(31, 0x08920E94u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0072_entry, 72u, 568u, 0x089267ECu>(ctx, &aot_mem) && ctx.pc == 0x08920E94u) goto L_08920E94;
    return;
L_08920E94:
    ctx.set_gpr(4, ctx.gpr[2] + 0u);
    ctx.set_gpr(5, rt.memory().aot_load32(ctx.gpr[17] + static_cast<std::uint32_t>(216)));
    ctx.set_gpr(25, rt.memory().aot_load32(ctx.gpr[2] + static_cast<std::uint32_t>(0)));
    ctx.set_gpr(25, rt.memory().aot_load32(ctx.gpr[25] + static_cast<std::uint32_t>(144)));
    jump_target = ctx.gpr[25];
    ctx.set_gpr(31, 0x08920EACu);
    // nop
    ctx.pc = jump_target;
    if (rt.invoke_chained_call(ctx, &aot_mem) && ctx.pc == 0x08920EACu) goto L_08920EAC;
    return;
L_08920EAC:
    rt.memory().aot_store32(ctx.gpr[17] + static_cast<std::uint32_t>(216), 0u);
    ctx.set_gpr(4, ctx.gpr[17] + 0u);
    ctx.set_gpr(31, 0x08920EBCu);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0072_entry, 72u, 568u, 0x089267ECu>(ctx, &aot_mem) && ctx.pc == 0x08920EBCu) goto L_08920EBC;
    return;
L_08920EBC:
    ctx.set_gpr(4, ctx.gpr[2] + 0u);
    ctx.set_gpr(5, rt.memory().aot_load32(ctx.gpr[17] + static_cast<std::uint32_t>(220)));
    ctx.set_gpr(25, rt.memory().aot_load32(ctx.gpr[2] + static_cast<std::uint32_t>(0)));
    ctx.set_gpr(25, rt.memory().aot_load32(ctx.gpr[25] + static_cast<std::uint32_t>(144)));
    jump_target = ctx.gpr[25];
    ctx.set_gpr(31, 0x08920ED4u);
    // nop
    ctx.pc = jump_target;
    if (rt.invoke_chained_call(ctx, &aot_mem) && ctx.pc == 0x08920ED4u) goto L_08920ED4;
    return;
L_08920ED4:
    rt.memory().aot_store32(ctx.gpr[17] + static_cast<std::uint32_t>(220), 0u);
    ctx.set_gpr(4, ctx.gpr[17] + 0u);
    ctx.set_gpr(31, 0x08920EE4u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0072_entry, 72u, 568u, 0x089267ECu>(ctx, &aot_mem) && ctx.pc == 0x08920EE4u) goto L_08920EE4;
    return;
L_08920EE4:
    ctx.set_gpr(4, ctx.gpr[2] + 0u);
    ctx.set_gpr(5, rt.memory().aot_load32(ctx.gpr[17] + static_cast<std::uint32_t>(276)));
    ctx.set_gpr(25, rt.memory().aot_load32(ctx.gpr[2] + static_cast<std::uint32_t>(0)));
    ctx.set_gpr(25, rt.memory().aot_load32(ctx.gpr[25] + static_cast<std::uint32_t>(144)));
    jump_target = ctx.gpr[25];
    ctx.set_gpr(31, 0x08920EFCu);
    // nop
    ctx.pc = jump_target;
    if (rt.invoke_chained_call(ctx, &aot_mem) && ctx.pc == 0x08920EFCu) goto L_08920EFC;
    return;
L_08920EFC:
    rt.memory().aot_store32(ctx.gpr[17] + static_cast<std::uint32_t>(276), 0u);
    ctx.set_gpr(16, rt.memory().aot_load32(ctx.gpr[17] + static_cast<std::uint32_t>(148)));
    { const bool branch_taken = ctx.gpr[16] == 0u;
    // nop
      if (branch_taken) {
          goto L_08920F30;
      }
      goto L_08920F0C;
    }
L_08920F0C:
    ctx.set_gpr(4, ctx.gpr[17] + 0u);
    ctx.set_gpr(31, 0x08920F18u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0072_entry, 72u, 568u, 0x089267ECu>(ctx, &aot_mem) && ctx.pc == 0x08920F18u) goto L_08920F18;
    return;
L_08920F18:
    ctx.set_gpr(4, ctx.gpr[2] + 0u);
    ctx.set_gpr(5, ctx.gpr[16] + 0u);
    ctx.set_gpr(25, rt.memory().aot_load32(ctx.gpr[2] + static_cast<std::uint32_t>(0)));
    ctx.set_gpr(25, rt.memory().aot_load32(ctx.gpr[25] + static_cast<std::uint32_t>(144)));
    jump_target = ctx.gpr[25];
    ctx.set_gpr(31, 0x08920F30u);
    // nop
    ctx.pc = jump_target;
    if (rt.invoke_chained_call(ctx, &aot_mem) && ctx.pc == 0x08920F30u) goto L_08920F30;
    return;
L_08920F30:
    rt.memory().aot_store32(ctx.gpr[17] + static_cast<std::uint32_t>(336), 0u);
    ctx.set_gpr(16, rt.memory().aot_load32(ctx.gpr[17] + static_cast<std::uint32_t>(340)));
    { const bool branch_taken = ctx.gpr[16] == 0u;
    // nop
      if (branch_taken) {
          goto L_08920F68;
      }
      goto L_08920F40;
    }
L_08920F40:
    ctx.set_gpr(4, ctx.gpr[17] + 0u);
    ctx.set_gpr(31, 0x08920F4Cu);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0072_entry, 72u, 568u, 0x089267ECu>(ctx, &aot_mem) && ctx.pc == 0x08920F4Cu) goto L_08920F4C;
    return;
L_08920F4C:
    ctx.set_gpr(4, ctx.gpr[2] + 0u);
    ctx.set_gpr(5, ctx.gpr[16] + 0u);
    ctx.set_gpr(25, rt.memory().aot_load32(ctx.gpr[2] + static_cast<std::uint32_t>(0)));
    ctx.set_gpr(25, rt.memory().aot_load32(ctx.gpr[25] + static_cast<std::uint32_t>(144)));
    jump_target = ctx.gpr[25];
    ctx.set_gpr(31, 0x08920F64u);
    // nop
    ctx.pc = jump_target;
    if (rt.invoke_chained_call(ctx, &aot_mem) && ctx.pc == 0x08920F64u) goto L_08920F64;
    return;
L_08920F64:
    rt.memory().aot_store32(ctx.gpr[17] + static_cast<std::uint32_t>(340), 0u);
    goto L_08920F68;
L_08920F68:
    ctx.set_gpr(4, ctx.gpr[17] + static_cast<std::uint32_t>(344));
    ctx.set_gpr(5, 0u + 0u);
    ctx.set_gpr(31, 0x08920F78u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0085_entry, 85u, 61u, 0x089584C4u>(ctx, &aot_mem) && ctx.pc == 0x08920F78u) goto L_08920F78;
    return;
L_08920F78:
    ctx.set_gpr(2, 0u + 0u);
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
L_08920F94:
    ctx.set_gpr(29, ctx.gpr[29] + static_cast<std::uint32_t>(-16));
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(12), ctx.gpr[31]);
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(8), ctx.gpr[16]);
    ctx.set_gpr(16, ctx.gpr[4] + 0u);
    ctx.set_gpr(5, rt.memory().aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(28)));
    ctx.set_gpr(2, rt.memory().aot_load32(ctx.gpr[5] + static_cast<std::uint32_t>(8)));
    { const bool branch_taken = static_cast<std::int32_t>(ctx.gpr[2]) <= 0;
    // nop
      if (branch_taken) {
          goto L_08920FD0;
      }
      goto L_08920FB4;
    }
L_08920FB4:
    ctx.set_gpr(6, 0u + 0u);
    ctx.set_gpr(7, 0u + 0u);
    ctx.set_gpr(31, 0x08920FC4u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0067_entry, 67u, 321u, 0x089114CCu>(ctx, &aot_mem) && ctx.pc == 0x08920FC4u) goto L_08920FC4;
    return;
L_08920FC4:
    rt.memory().aot_store32(ctx.gpr[16] + static_cast<std::uint32_t>(260), ctx.gpr[2]);
    ctx.set_gpr(2, 0u + static_cast<std::uint32_t>(1));
    rt.memory().aot_store8(ctx.gpr[16] + static_cast<std::uint32_t>(252), static_cast<std::uint8_t>(ctx.gpr[2]));
    goto L_08920FD0;
L_08920FD0:
    ctx.set_gpr(2, 0u + 0u);
    ctx.set_gpr(31, rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(12)));
    ctx.set_gpr(16, rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(8)));
    ctx.set_gpr(29, ctx.gpr[29] + static_cast<std::uint32_t>(16));
    jump_target = ctx.gpr[31];
    // nop
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_08920FE8:
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
    ctx.set_gpr(16, ctx.gpr[5] + 0u);
    ctx.set_gpr(31, 0x08921020u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0064_entry, 64u, 444u, 0x08905FF0u>(ctx, &aot_mem) && ctx.pc == 0x08921020u) goto L_08921020;
    return;
L_08921020:
    ctx.set_gpr(4, rt.memory().aot_load32(ctx.gpr[2] + static_cast<std::uint32_t>(64)));
    ctx.set_gpr(5, 0u + static_cast<std::uint32_t>(2));
    ctx.set_gpr(6, 2228u << 16u);
    ctx.set_gpr(6, ctx.gpr[6] + static_cast<std::uint32_t>(-11892));
    ctx.set_gpr(7, ctx.gpr[21] + static_cast<std::uint32_t>(70));
    ctx.set_gpr(8, rt.memory().aot_load8(ctx.gpr[21] + static_cast<std::uint32_t>(70)));
    ctx.set_gpr(9, 0u + 0u);
    ctx.set_gpr(31, 0x08921044u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0083_entry, 83u, 813u, 0x089537E4u>(ctx, &aot_mem) && ctx.pc == 0x08921044u) goto L_08921044;
    return;
L_08921044:
    ctx.set_gpr(4, ctx.gpr[21] + 0u);
    ctx.set_gpr(5, ctx.gpr[16] + 0u);
    ctx.set_gpr(31, 0x08921054u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0070_entry, 70u, 712u, 0x0891F34Cu>(ctx, &aot_mem) && ctx.pc == 0x08921054u) goto L_08921054;
    return;
L_08921054:
    ctx.set_gpr(3, 0u + static_cast<std::uint32_t>(1));
    { const bool branch_taken = ctx.gpr[2] != ctx.gpr[3];
    // nop
      if (branch_taken) {
          goto L_0892106C;
      }
      goto L_08921060;
    }
L_08921060:
    ctx.set_gpr(2, 0u + 0u);
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_0892152C;
      }
      goto L_0892106C;
    }
L_0892106C:
    ctx.set_gpr(4, ctx.gpr[21] + 0u);
    ctx.set_gpr(31, 0x08921078u);
    // nop
    goto L_08920F94;
L_08921078:
    ctx.set_gpr(3, 0u + static_cast<std::uint32_t>(1));
    { const bool branch_taken = ctx.gpr[2] != ctx.gpr[3];
    // nop
      if (branch_taken) {
          goto L_08921090;
      }
      goto L_08921084;
    }
L_08921084:
    ctx.set_gpr(2, 0u + 0u);
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_0892152C;
      }
      goto L_08921090;
    }
L_08921090:
    ctx.set_gpr(4, ctx.gpr[21] + 0u);
    ctx.set_gpr(2, 2245u << 16u);
    ctx.set_gpr(5, rt.memory().aot_load32(ctx.gpr[2] + static_cast<std::uint32_t>(29872)));
    ctx.set_gpr(31, 0x089210A4u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0081_entry, 81u, 414u, 0x08949CF4u>(ctx, &aot_mem) && ctx.pc == 0x089210A4u) goto L_089210A4;
    return;
L_089210A4:
    ctx.set_gpr(31, 0x089210ACu);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0053_entry, 53u, 415u, 0x088DA21Cu>(ctx, &aot_mem) && ctx.pc == 0x089210ACu) goto L_089210AC;
    return;
L_089210AC:
    ctx.set_gpr(4, ctx.gpr[21] + static_cast<std::uint32_t>(244));
    ctx.set_gpr(5, ctx.gpr[2] + 0u);
    ctx.set_gpr(31, 0x089210BCu);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0085_entry, 85u, 61u, 0x089584C4u>(ctx, &aot_mem) && ctx.pc == 0x089210BCu) goto L_089210BC;
    return;
L_089210BC:
    ctx.set_gpr(31, 0x089210C4u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0054_entry, 54u, 201u, 0x088DD050u>(ctx, &aot_mem) && ctx.pc == 0x089210C4u) goto L_089210C4;
    return;
L_089210C4:
    ctx.set_gpr(4, ctx.gpr[21] + static_cast<std::uint32_t>(248));
    ctx.set_gpr(5, ctx.gpr[2] + 0u);
    ctx.set_gpr(31, 0x089210D4u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0085_entry, 85u, 61u, 0x089584C4u>(ctx, &aot_mem) && ctx.pc == 0x089210D4u) goto L_089210D4;
    return;
L_089210D4:
    ctx.set_gpr(4, ctx.gpr[21] + 0u);
    ctx.set_gpr(31, 0x089210E0u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0070_entry, 70u, 728u, 0x0891F424u>(ctx, &aot_mem) && ctx.pc == 0x089210E0u) goto L_089210E0;
    return;
L_089210E0:
    ctx.set_gpr(3, 0u + static_cast<std::uint32_t>(1));
    { const bool branch_taken = ctx.gpr[2] != ctx.gpr[3];
    // nop
      if (branch_taken) {
          goto L_089210F8;
      }
      goto L_089210EC;
    }
L_089210EC:
    ctx.set_gpr(2, 0u + 0u);
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_0892152C;
      }
      goto L_089210F8;
    }
L_089210F8:
    ctx.set_gpr(4, ctx.gpr[21] + 0u);
    ctx.set_gpr(31, 0x08921104u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0070_entry, 70u, 741u, 0x0891F508u>(ctx, &aot_mem) && ctx.pc == 0x08921104u) goto L_08921104;
    return;
L_08921104:
    ctx.set_gpr(3, 0u + static_cast<std::uint32_t>(1));
    { const bool branch_taken = ctx.gpr[2] != ctx.gpr[3];
    // nop
      if (branch_taken) {
          goto L_0892111C;
      }
      goto L_08921110;
    }
L_08921110:
    ctx.set_gpr(2, 0u + 0u);
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_0892152C;
      }
      goto L_0892111C;
    }
L_0892111C:
    ctx.set_gpr(22, rt.memory().aot_load32(ctx.gpr[21] + static_cast<std::uint32_t>(8)));
    ctx.set_gpr(20, 0u + 0u);
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_089212D4;
      }
      goto L_0892112C;
    }
L_0892112C:
    ctx.set_gpr(4, ctx.gpr[21] + 0u);
    ctx.set_gpr(5, ctx.gpr[20] + 0u);
    ctx.set_gpr(31, 0x0892113Cu);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0067_entry, 67u, 141u, 0x08910940u>(ctx, &aot_mem) && ctx.pc == 0x0892113Cu) goto L_0892113C;
    return;
L_0892113C:
    ctx.set_gpr(19, ctx.gpr[2] + 0u);
    ctx.set_gpr(3, 2245u << 16u);
    ctx.set_gpr(16, rt.memory().aot_load32(ctx.gpr[3] + static_cast<std::uint32_t>(28840)));
    ctx.set_gpr(4, ctx.gpr[19] + 0u);
    ctx.set_gpr(25, rt.memory().aot_load32(ctx.gpr[2] + static_cast<std::uint32_t>(0)));
    ctx.set_gpr(25, rt.memory().aot_load32(ctx.gpr[25] + static_cast<std::uint32_t>(88)));
    jump_target = ctx.gpr[25];
    ctx.set_gpr(31, 0x0892115Cu);
    // nop
    ctx.pc = jump_target;
    if (rt.invoke_chained_call(ctx, &aot_mem) && ctx.pc == 0x0892115Cu) goto L_0892115C;
    return;
L_0892115C:
    ctx.set_gpr(2, ctx.gpr[16] ^ ctx.gpr[2]);
    ctx.set_gpr(2, ctx.gpr[2] < static_cast<std::uint32_t>(1) ? 1u : 0u);
    ctx.set_gpr(2, 0u < ctx.gpr[2] ? 1u : 0u);
    ctx.set_gpr(2, ctx.gpr[2] ^ 1u);
    { const bool branch_taken = ctx.gpr[2] != 0u;
    // nop
      if (branch_taken) {
          goto L_089211A8;
      }
      goto L_08921174;
    }
L_08921174:
    ctx.set_gpr(2, 2245u << 16u);
    ctx.set_gpr(16, rt.memory().aot_load32(ctx.gpr[2] + static_cast<std::uint32_t>(29148)));
    ctx.set_gpr(4, ctx.gpr[19] + 0u);
    ctx.set_gpr(25, rt.memory().aot_load32(ctx.gpr[19] + static_cast<std::uint32_t>(0)));
    ctx.set_gpr(25, rt.memory().aot_load32(ctx.gpr[25] + static_cast<std::uint32_t>(88)));
    jump_target = ctx.gpr[25];
    ctx.set_gpr(31, 0x08921190u);
    // nop
    ctx.pc = jump_target;
    if (rt.invoke_chained_call(ctx, &aot_mem) && ctx.pc == 0x08921190u) goto L_08921190;
    return;
L_08921190:
    ctx.set_gpr(2, ctx.gpr[16] ^ ctx.gpr[2]);
    ctx.set_gpr(2, ctx.gpr[2] < static_cast<std::uint32_t>(1) ? 1u : 0u);
    ctx.set_gpr(2, 0u < ctx.gpr[2] ? 1u : 0u);
    ctx.set_gpr(2, ctx.gpr[2] ^ 1u);
    { const bool branch_taken = ctx.gpr[2] == 0u;
    // nop
      if (branch_taken) {
          goto L_089212D0;
      }
      goto L_089211A8;
    }
L_089211A8:
    ctx.set_gpr(4, ctx.gpr[19] + 0u);
    ctx.set_gpr(25, rt.memory().aot_load32(ctx.gpr[19] + static_cast<std::uint32_t>(0)));
    ctx.set_gpr(25, rt.memory().aot_load32(ctx.gpr[25] + static_cast<std::uint32_t>(88)));
    jump_target = ctx.gpr[25];
    ctx.set_gpr(31, 0x089211BCu);
    // nop
    ctx.pc = jump_target;
    if (rt.invoke_chained_call(ctx, &aot_mem) && ctx.pc == 0x089211BCu) goto L_089211BC;
    return;
L_089211BC:
    ctx.set_gpr(18, ctx.gpr[2] + 0u);
    ctx.set_gpr(4, ctx.gpr[18] + 0u);
    ctx.set_gpr(31, 0x089211CCu);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0080_entry, 80u, 236u, 0x089451A8u>(ctx, &aot_mem) && ctx.pc == 0x089211CCu) goto L_089211CC;
    return;
L_089211CC:
    ctx.set_gpr(23, ctx.gpr[2] + 0u);
    ctx.set_gpr(17, 0u + 0u);
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_089212C4;
      }
      goto L_089211DC;
    }
L_089211DC:
    ctx.set_gpr(4, ctx.gpr[18] + 0u);
    ctx.set_gpr(5, ctx.gpr[17] + 0u);
    ctx.set_gpr(31, 0x089211ECu);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0080_entry, 80u, 148u, 0x08944B4Cu>(ctx, &aot_mem) && ctx.pc == 0x089211ECu) goto L_089211EC;
    return;
L_089211EC:
    ctx.set_gpr(16, ctx.gpr[2] + 0u);
    ctx.set_gpr(4, ctx.gpr[16] + 0u);
    ctx.set_gpr(2, 2245u << 16u);
    ctx.set_gpr(5, rt.memory().aot_load32(ctx.gpr[2] + static_cast<std::uint32_t>(27072)));
    ctx.set_gpr(31, 0x08921204u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0080_entry, 80u, 857u, 0x08947F8Cu>(ctx, &aot_mem) && ctx.pc == 0x08921204u) goto L_08921204;
    return;
L_08921204:
    { const bool branch_taken = ctx.gpr[2] == 0u;
    // nop
      if (branch_taken) {
          goto L_089212C0;
      }
      goto L_0892120C;
    }
L_0892120C:
    ctx.set_gpr(2, rt.memory().aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(8)));
    ctx.set_gpr(2, ctx.gpr[19] + ctx.gpr[2]);
    ctx.set_gpr(3, rt.memory().aot_load32(ctx.gpr[2] + static_cast<std::uint32_t>(0)));
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(60), ctx.gpr[3]);
    ctx.set_gpr(4, 0u + 0u);
    { const bool branch_taken = ctx.gpr[3] == 0u;
    // nop
      if (branch_taken) {
          goto L_08921244;
      }
      goto L_08921228;
    }
L_08921228:
    ctx.set_gpr(2, ctx.gpr[3] & 1u);
    ctx.set_gpr(2, ctx.gpr[2] ^ 1u);
    ctx.set_gpr(2, ctx.gpr[2] < static_cast<std::uint32_t>(1) ? 1u : 0u);
    ctx.set_gpr(2, ctx.gpr[2] ^ 1u);
    { const bool branch_taken = ctx.gpr[2] == 0u;
    // nop
      if (branch_taken) {
          goto L_08921244;
      }
      goto L_08921240;
    }
L_08921240:
    ctx.set_gpr(4, 0u + static_cast<std::uint32_t>(1));
    goto L_08921244;
L_08921244:
    { const bool branch_taken = ctx.gpr[4] == 0u;
    // nop
      if (branch_taken) {
          goto L_08921258;
      }
      goto L_0892124C;
    }
L_0892124C:
    ctx.set_gpr(2, rt.memory().aot_load32(ctx.gpr[3] + static_cast<std::uint32_t>(-4)));
    ctx.set_gpr(2, ctx.gpr[2] + static_cast<std::uint32_t>(1));
    rt.memory().aot_store32(ctx.gpr[3] + static_cast<std::uint32_t>(-4), ctx.gpr[2]);
    goto L_08921258;
L_08921258:
    ctx.set_gpr(4, ctx.gpr[21] + 0u);
    ctx.set_gpr(5, ctx.gpr[29] + static_cast<std::uint32_t>(60));
    ctx.set_gpr(31, 0x08921268u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0067_entry, 67u, 153u, 0x08910A24u>(ctx, &aot_mem) && ctx.pc == 0x08921268u) goto L_08921268;
    return;
L_08921268:
    ctx.set_gpr(4, 0u + 0u);
    ctx.set_gpr(3, rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(60)));
    { const bool branch_taken = ctx.gpr[3] == 0u;
    // nop
      if (branch_taken) {
          goto L_08921294;
      }
      goto L_08921278;
    }
L_08921278:
    ctx.set_gpr(2, ctx.gpr[3] & 1u);
    ctx.set_gpr(2, ctx.gpr[2] ^ 1u);
    ctx.set_gpr(2, ctx.gpr[2] < static_cast<std::uint32_t>(1) ? 1u : 0u);
    ctx.set_gpr(2, ctx.gpr[2] ^ 1u);
    { const bool branch_taken = ctx.gpr[2] == 0u;
    // nop
      if (branch_taken) {
          goto L_08921294;
      }
      goto L_08921290;
    }
L_08921290:
    ctx.set_gpr(4, 0u + static_cast<std::uint32_t>(1));
    goto L_08921294;
L_08921294:
    { const bool branch_taken = ctx.gpr[4] == 0u;
    // nop
      if (branch_taken) {
          goto L_089212C0;
      }
      goto L_0892129C;
    }
L_0892129C:
    ctx.set_gpr(5, ctx.gpr[3] + static_cast<std::uint32_t>(-8));
    ctx.set_gpr(2, rt.memory().aot_load32(ctx.gpr[3] + static_cast<std::uint32_t>(-4)));
    ctx.set_gpr(2, ctx.gpr[2] + static_cast<std::uint32_t>(-1));
    rt.memory().aot_store32(ctx.gpr[3] + static_cast<std::uint32_t>(-4), ctx.gpr[2]);
    { const bool branch_taken = ctx.gpr[2] != 0u;
    // nop
      if (branch_taken) {
          goto L_089212C0;
      }
      goto L_089212B4;
    }
L_089212B4:
    ctx.set_gpr(4, rt.memory().aot_load32(ctx.gpr[5] + static_cast<std::uint32_t>(0)));
    ctx.set_gpr(31, 0x089212C0u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0085_entry, 85u, 887u, 0x0895BD2Cu>(ctx, &aot_mem) && ctx.pc == 0x089212C0u) goto L_089212C0;
    return;
L_089212C0:
    ctx.set_gpr(17, ctx.gpr[17] + static_cast<std::uint32_t>(1));
    goto L_089212C4;
L_089212C4:
    ctx.set_gpr(2, static_cast<std::int32_t>(ctx.gpr[17]) < static_cast<std::int32_t>(ctx.gpr[23]) ? 1u : 0u);
    { const bool branch_taken = ctx.gpr[2] != 0u;
    // nop
      if (branch_taken) {
          goto L_089211DC;
      }
      goto L_089212D0;
    }
L_089212D0:
    ctx.set_gpr(20, ctx.gpr[20] + static_cast<std::uint32_t>(1));
    goto L_089212D4;
L_089212D4:
    ctx.set_gpr(2, static_cast<std::int32_t>(ctx.gpr[20]) < static_cast<std::int32_t>(ctx.gpr[22]) ? 1u : 0u);
    { const bool branch_taken = ctx.gpr[2] != 0u;
    // nop
      if (branch_taken) {
          goto L_0892112C;
      }
      goto L_089212E0;
    }
L_089212E0:
    ctx.set_gpr(4, ctx.gpr[21] + 0u);
    ctx.set_gpr(31, 0x089212ECu);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0070_entry, 70u, 746u, 0x0891F58Cu>(ctx, &aot_mem) && ctx.pc == 0x089212ECu) goto L_089212EC;
    return;
L_089212EC:
    ctx.set_gpr(3, 0u + static_cast<std::uint32_t>(1));
    { const bool branch_taken = ctx.gpr[2] != ctx.gpr[3];
    // nop
      if (branch_taken) {
          goto L_08921304;
      }
      goto L_089212F8;
    }
L_089212F8:
    ctx.set_gpr(2, 0u + 0u);
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_0892152C;
      }
      goto L_08921304;
    }
L_08921304:
    ctx.set_gpr(4, ctx.gpr[21] + 0u);
    ctx.set_gpr(31, 0x08921310u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0070_entry, 70u, 762u, 0x0891F6DCu>(ctx, &aot_mem) && ctx.pc == 0x08921310u) goto L_08921310;
    return;
L_08921310:
    ctx.set_gpr(3, 0u + static_cast<std::uint32_t>(1));
    { const bool branch_taken = ctx.gpr[2] != ctx.gpr[3];
    // nop
      if (branch_taken) {
          goto L_08921328;
      }
      goto L_0892131C;
    }
L_0892131C:
    ctx.set_gpr(2, 0u + 0u);
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_0892152C;
      }
      goto L_08921328;
    }
L_08921328:
    ctx.set_gpr(4, ctx.gpr[21] + 0u);
    ctx.set_gpr(31, 0x08921334u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0070_entry, 70u, 767u, 0x0891F760u>(ctx, &aot_mem) && ctx.pc == 0x08921334u) goto L_08921334;
    return;
L_08921334:
    ctx.set_gpr(3, 0u + static_cast<std::uint32_t>(1));
    { const bool branch_taken = ctx.gpr[2] != ctx.gpr[3];
    // nop
      if (branch_taken) {
          goto L_0892134C;
      }
      goto L_08921340;
    }
L_08921340:
    ctx.set_gpr(2, 0u + 0u);
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_0892152C;
      }
      goto L_0892134C;
    }
L_0892134C:
    ctx.set_gpr(4, ctx.gpr[21] + 0u);
    ctx.set_gpr(31, 0x08921358u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0070_entry, 70u, 825u, 0x0891FC94u>(ctx, &aot_mem) && ctx.pc == 0x08921358u) goto L_08921358;
    return;
L_08921358:
    ctx.set_gpr(3, 0u + static_cast<std::uint32_t>(1));
    { const bool branch_taken = ctx.gpr[2] != ctx.gpr[3];
    // nop
      if (branch_taken) {
          goto L_08921370;
      }
      goto L_08921364;
    }
L_08921364:
    ctx.set_gpr(2, 0u + 0u);
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_0892152C;
      }
      goto L_08921370;
    }
L_08921370:
    ctx.set_gpr(4, ctx.gpr[21] + 0u);
    ctx.set_gpr(31, 0x0892137Cu);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0070_entry, 70u, 851u, 0x0891FF18u>(ctx, &aot_mem) && ctx.pc == 0x0892137Cu) goto L_0892137C;
    return;
L_0892137C:
    ctx.set_gpr(3, 0u + static_cast<std::uint32_t>(1));
    { const bool branch_taken = ctx.gpr[2] != ctx.gpr[3];
    // nop
      if (branch_taken) {
          goto L_08921394;
      }
      goto L_08921388;
    }
L_08921388:
    ctx.set_gpr(2, 0u + 0u);
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_0892152C;
      }
      goto L_08921394;
    }
L_08921394:
    ctx.set_gpr(4, ctx.gpr[21] + 0u);
    ctx.set_gpr(31, 0x089213A0u);
    // nop
    goto L_08920158;
L_089213A0:
    ctx.set_gpr(3, 0u + static_cast<std::uint32_t>(1));
    { const bool branch_taken = ctx.gpr[2] != ctx.gpr[3];
    // nop
      if (branch_taken) {
          goto L_089213B8;
      }
      goto L_089213AC;
    }
L_089213AC:
    ctx.set_gpr(2, 0u + 0u);
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_0892152C;
      }
      goto L_089213B8;
    }
L_089213B8:
    ctx.set_gpr(2, rt.memory().aot_load8(ctx.gpr[21] + static_cast<std::uint32_t>(36)));
    { const bool branch_taken = ctx.gpr[2] != 0u;
    // nop
      if (branch_taken) {
          goto L_089213E8;
      }
      goto L_089213C4;
    }
L_089213C4:
    ctx.set_gpr(4, ctx.gpr[21] + 0u);
    ctx.set_gpr(31, 0x089213D0u);
    // nop
    goto L_08920820;
L_089213D0:
    ctx.set_gpr(3, 0u + static_cast<std::uint32_t>(1));
    { const bool branch_taken = ctx.gpr[2] != ctx.gpr[3];
    // nop
      if (branch_taken) {
          goto L_08921454;
      }
      goto L_089213DC;
    }
L_089213DC:
    ctx.set_gpr(2, 0u + 0u);
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_0892152C;
      }
      goto L_089213E8;
    }
L_089213E8:
    ctx.set_gpr(4, ctx.gpr[21] + 0u);
    ctx.set_gpr(31, 0x089213F4u);
    // nop
    goto L_08920588;
L_089213F4:
    ctx.set_gpr(3, 0u + static_cast<std::uint32_t>(1));
    { const bool branch_taken = ctx.gpr[2] != ctx.gpr[3];
    // nop
      if (branch_taken) {
          goto L_0892140C;
      }
      goto L_08921400;
    }
L_08921400:
    ctx.set_gpr(2, 0u + 0u);
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_0892152C;
      }
      goto L_0892140C;
    }
L_0892140C:
    ctx.set_gpr(4, ctx.gpr[21] + 0u);
    ctx.set_gpr(31, 0x08921418u);
    // nop
    goto L_08920360;
L_08921418:
    ctx.set_gpr(3, 0u + static_cast<std::uint32_t>(1));
    { const bool branch_taken = ctx.gpr[2] != ctx.gpr[3];
    // nop
      if (branch_taken) {
          goto L_08921430;
      }
      goto L_08921424;
    }
L_08921424:
    ctx.set_gpr(2, 0u + 0u);
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_0892152C;
      }
      goto L_08921430;
    }
L_08921430:
    ctx.set_gpr(4, ctx.gpr[21] + 0u);
    ctx.set_gpr(31, 0x0892143Cu);
    // nop
    goto L_08920470;
L_0892143C:
    ctx.set_gpr(3, 0u + static_cast<std::uint32_t>(1));
    { const bool branch_taken = ctx.gpr[2] != ctx.gpr[3];
    // nop
      if (branch_taken) {
          goto L_08921454;
      }
      goto L_08921448;
    }
L_08921448:
    ctx.set_gpr(2, 0u + 0u);
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_0892152C;
      }
      goto L_08921454;
    }
L_08921454:
    ctx.set_gpr(4, ctx.gpr[21] + 0u);
    ctx.set_gpr(31, 0x08921460u);
    // nop
    goto L_08920924;
L_08921460:
    ctx.set_gpr(3, 0u + static_cast<std::uint32_t>(1));
    { const bool branch_taken = ctx.gpr[2] != ctx.gpr[3];
    // nop
      if (branch_taken) {
          goto L_08921478;
      }
      goto L_0892146C;
    }
L_0892146C:
    ctx.set_gpr(2, 0u + 0u);
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_0892152C;
      }
      goto L_08921478;
    }
L_08921478:
    ctx.set_gpr(4, ctx.gpr[21] + 0u);
    ctx.set_gpr(31, 0x08921484u);
    // nop
    goto L_089209D0;
L_08921484:
    ctx.set_gpr(3, 0u + static_cast<std::uint32_t>(1));
    { const bool branch_taken = ctx.gpr[2] != ctx.gpr[3];
    // nop
      if (branch_taken) {
          goto L_0892149C;
      }
      goto L_08921490;
    }
L_08921490:
    ctx.set_gpr(2, 0u + 0u);
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_0892152C;
      }
      goto L_0892149C;
    }
L_0892149C:
    ctx.set_gpr(4, ctx.gpr[21] + 0u);
    ctx.set_gpr(31, 0x089214A8u);
    // nop
    goto L_08920B58;
L_089214A8:
    ctx.set_gpr(3, 0u + static_cast<std::uint32_t>(1));
    { const bool branch_taken = ctx.gpr[2] != ctx.gpr[3];
    // nop
      if (branch_taken) {
          goto L_089214C0;
      }
      goto L_089214B4;
    }
L_089214B4:
    ctx.set_gpr(2, 0u + 0u);
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_0892152C;
      }
      goto L_089214C0;
    }
L_089214C0:
    ctx.set_gpr(4, ctx.gpr[21] + 0u);
    ctx.set_gpr(31, 0x089214CCu);
    // nop
    goto L_08920DF8;
L_089214CC:
    ctx.set_gpr(3, 0u + static_cast<std::uint32_t>(1));
    { const bool branch_taken = ctx.gpr[2] != ctx.gpr[3];
    // nop
      if (branch_taken) {
          goto L_089214E4;
      }
      goto L_089214D8;
    }
L_089214D8:
    ctx.set_gpr(2, 0u + 0u);
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_0892152C;
      }
      goto L_089214E4;
    }
L_089214E4:
    ctx.set_gpr(4, ctx.gpr[21] + 0u);
    ctx.set_gpr(31, 0x089214F0u);
    // nop
    goto L_08920E28;
L_089214F0:
    ctx.set_gpr(3, 0u + static_cast<std::uint32_t>(1));
    { const bool branch_taken = ctx.gpr[2] != ctx.gpr[3];
    // nop
      if (branch_taken) {
          goto L_08921508;
      }
      goto L_089214FC;
    }
L_089214FC:
    ctx.set_gpr(2, 0u + 0u);
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_0892152C;
      }
      goto L_08921508;
    }
L_08921508:
    ctx.set_gpr(2, rt.memory().aot_load8(ctx.gpr[21] + static_cast<std::uint32_t>(318)));
    { const bool branch_taken = ctx.gpr[2] != ctx.gpr[3];
    // nop
      if (branch_taken) {
          goto L_08921528;
      }
      goto L_08921514;
    }
L_08921514:
    ctx.set_gpr(4, ctx.gpr[21] + 0u);
    ctx.set_gpr(25, rt.memory().aot_load32(ctx.gpr[21] + static_cast<std::uint32_t>(0)));
    ctx.set_gpr(25, rt.memory().aot_load32(ctx.gpr[25] + static_cast<std::uint32_t>(136)));
    jump_target = ctx.gpr[25];
    ctx.set_gpr(31, 0x08921528u);
    // nop
    ctx.pc = jump_target;
    if (rt.invoke_chained_call(ctx, &aot_mem) && ctx.pc == 0x08921528u) goto L_08921528;
    return;
L_08921528:
    ctx.set_gpr(2, rt.memory().aot_load32(ctx.gpr[21] + static_cast<std::uint32_t>(8)));
    goto L_0892152C;
L_0892152C:
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
L_0892155C:
    ctx.set_gpr(29, ctx.gpr[29] + static_cast<std::uint32_t>(-16));
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(12), ctx.gpr[31]);
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(8), ctx.gpr[17]);
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(4), ctx.gpr[16]);
    ctx.set_gpr(17, ctx.gpr[4] + 0u);
    ctx.set_gpr(16, ctx.gpr[5] + 0u);
    ctx.set_gpr(2, rt.memory().aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(132)));
    { const bool branch_taken = ctx.gpr[2] != 0u;
    // nop
      if (branch_taken) {
          goto L_08921594;
      }
      goto L_08921580;
    }
L_08921580:
    { const bool branch_taken = ctx.gpr[16] != 0u;
    // nop
      if (branch_taken) {
          goto L_08921594;
      }
      goto L_08921588;
    }
L_08921588:
    ctx.set_gpr(2, 0u + static_cast<std::uint32_t>(1));
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_0892161C;
      }
      goto L_08921594;
    }
L_08921594:
    { const bool branch_taken = ctx.gpr[2] != 0u;
    // nop
      if (branch_taken) {
          goto L_089215E4;
      }
      goto L_0892159C;
    }
L_0892159C:
    ctx.set_gpr(4, ctx.gpr[17] + 0u);
    ctx.set_gpr(5, ctx.gpr[16] + 0u);
    ctx.set_gpr(6, 0u + static_cast<std::uint32_t>(4));
    ctx.set_gpr(31, 0x089215B0u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0070_entry, 70u, 658u, 0x0891F020u>(ctx, &aot_mem) && ctx.pc == 0x089215B0u) goto L_089215B0;
    return;
L_089215B0:
    ctx.set_gpr(3, 0u + static_cast<std::uint32_t>(1));
    { const bool branch_taken = ctx.gpr[2] != ctx.gpr[3];
    // nop
      if (branch_taken) {
          goto L_089215E0;
      }
      goto L_089215BC;
    }
L_089215BC:
    { const bool branch_taken = ctx.gpr[16] == 0u;
    // nop
      if (branch_taken) {
          goto L_089215D4;
      }
      goto L_089215C4;
    }
L_089215C4:
    ctx.set_gpr(4, ctx.gpr[17] + static_cast<std::uint32_t>(132));
    ctx.set_gpr(5, 0u + 0u);
    ctx.set_gpr(31, 0x089215D4u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0085_entry, 85u, 61u, 0x089584C4u>(ctx, &aot_mem) && ctx.pc == 0x089215D4u) goto L_089215D4;
    return;
L_089215D4:
    ctx.set_gpr(2, 0u + static_cast<std::uint32_t>(1));
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_0892161C;
      }
      goto L_089215E0;
    }
L_089215E0:
    rt.memory().aot_store32(ctx.gpr[17] + static_cast<std::uint32_t>(236), ctx.gpr[3]);
    goto L_089215E4;
L_089215E4:
    ctx.set_gpr(2, rt.memory().aot_load32(ctx.gpr[17] + static_cast<std::uint32_t>(132)));
    { const bool branch_taken = ctx.gpr[2] != 0u;
    // nop
      if (branch_taken) {
          goto L_089215FC;
      }
      goto L_089215F0;
    }
L_089215F0:
    ctx.set_gpr(2, 0u + static_cast<std::uint32_t>(1));
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_0892161C;
      }
      goto L_089215FC;
    }
L_089215FC:
    ctx.set_gpr(4, ctx.gpr[17] + 0u);
    ctx.set_gpr(31, 0x08921608u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0070_entry, 70u, 690u, 0x0891F20Cu>(ctx, &aot_mem) && ctx.pc == 0x08921608u) goto L_08921608;
    return;
L_08921608:
    ctx.set_gpr(4, rt.memory().aot_load32(ctx.gpr[17] + static_cast<std::uint32_t>(132)));
    ctx.set_gpr(5, 0u + static_cast<std::uint32_t>(4));
    ctx.set_gpr(31, 0x08921618u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0070_entry, 70u, 246u, 0x0891D1DCu>(ctx, &aot_mem) && ctx.pc == 0x08921618u) goto L_08921618;
    return;
L_08921618:
    ctx.set_gpr(2, 0u + 0u);
    goto L_0892161C;
L_0892161C:
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
L_08921634:
    ctx.set_gpr(29, ctx.gpr[29] + static_cast<std::uint32_t>(-16));
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(12), ctx.gpr[31]);
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(8), ctx.gpr[17]);
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(4), ctx.gpr[16]);
    ctx.set_gpr(17, ctx.gpr[4] + 0u);
    ctx.set_gpr(5, 0u + static_cast<std::uint32_t>(48));
    ctx.set_gpr(31, 0x08921654u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0072_entry, 72u, 546u, 0x08926644u>(ctx, &aot_mem) && ctx.pc == 0x08921654u) goto L_08921654;
    return;
L_08921654:
    ctx.set_gpr(3, 0u + static_cast<std::uint32_t>(1));
    { const bool branch_taken = ctx.gpr[2] != ctx.gpr[3];
    // nop
      if (branch_taken) {
          goto L_0892166C;
      }
      goto L_08921660;
    }
L_08921660:
    ctx.set_gpr(2, ctx.gpr[3] + 0u);
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_08921820;
      }
      goto L_0892166C;
    }
L_0892166C:
    ctx.set_gpr(16, rt.memory().aot_load32(ctx.gpr[17] + static_cast<std::uint32_t>(304)));
    ctx.set_gpr(4, rt.memory().aot_load32(ctx.gpr[17] + static_cast<std::uint32_t>(132)));
    ctx.set_gpr(5, ctx.gpr[16] + 0u);
    ctx.set_gpr(6, 0u + static_cast<std::uint32_t>(4));
    ctx.set_gpr(7, 0u + static_cast<std::uint32_t>(12));
    ctx.set_gpr(25, rt.memory().aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(0)));
    ctx.set_gpr(25, rt.memory().aot_load32(ctx.gpr[25] + static_cast<std::uint32_t>(108)));
    jump_target = ctx.gpr[25];
    ctx.set_gpr(31, 0x08921690u);
    // nop
    ctx.pc = jump_target;
    if (rt.invoke_chained_call(ctx, &aot_mem) && ctx.pc == 0x08921690u) goto L_08921690;
    return;
L_08921690:
    ctx.set_gpr(31, 0x08921698u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0053_entry, 53u, 415u, 0x088DA21Cu>(ctx, &aot_mem) && ctx.pc == 0x08921698u) goto L_08921698;
    return;
L_08921698:
    ctx.set_gpr(4, ctx.gpr[17] + static_cast<std::uint32_t>(244));
    ctx.set_gpr(5, ctx.gpr[2] + 0u);
    ctx.set_gpr(31, 0x089216A8u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0085_entry, 85u, 61u, 0x089584C4u>(ctx, &aot_mem) && ctx.pc == 0x089216A8u) goto L_089216A8;
    return;
L_089216A8:
    ctx.set_gpr(31, 0x089216B0u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0054_entry, 54u, 201u, 0x088DD050u>(ctx, &aot_mem) && ctx.pc == 0x089216B0u) goto L_089216B0;
    return;
L_089216B0:
    ctx.set_gpr(4, ctx.gpr[17] + static_cast<std::uint32_t>(248));
    ctx.set_gpr(5, ctx.gpr[2] + 0u);
    ctx.set_gpr(31, 0x089216C0u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0085_entry, 85u, 61u, 0x089584C4u>(ctx, &aot_mem) && ctx.pc == 0x089216C0u) goto L_089216C0;
    return;
L_089216C0:
    ctx.set_gpr(3, rt.memory().aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(40)));
    ctx.set_gpr(2, rt.memory().aot_load32(ctx.gpr[17] + static_cast<std::uint32_t>(124)));
    { const bool branch_taken = ctx.gpr[3] == ctx.gpr[2];
    // nop
      if (branch_taken) {
          goto L_0892170C;
      }
      goto L_089216D0;
    }
L_089216D0:
    ctx.set_gpr(4, rt.memory().aot_load32(ctx.gpr[17] + static_cast<std::uint32_t>(244)));
    ctx.set_gpr(5, ctx.gpr[16] + 0u);
    ctx.set_gpr(6, 0u + static_cast<std::uint32_t>(12));
    ctx.set_gpr(25, rt.memory().aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(0)));
    ctx.set_gpr(25, rt.memory().aot_load32(ctx.gpr[25] + static_cast<std::uint32_t>(220)));
    jump_target = ctx.gpr[25];
    ctx.set_gpr(31, 0x089216ECu);
    // nop
    ctx.pc = jump_target;
    if (rt.invoke_chained_call(ctx, &aot_mem) && ctx.pc == 0x089216ECu) goto L_089216EC;
    return;
L_089216EC:
    ctx.set_gpr(3, rt.memory().aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(40)));
    ctx.set_gpr(2, rt.memory().aot_load32(ctx.gpr[17] + static_cast<std::uint32_t>(124)));
    { const bool branch_taken = ctx.gpr[3] != ctx.gpr[2];
    // nop
      if (branch_taken) {
          goto L_08921710;
      }
      goto L_089216FC;
    }
L_089216FC:
    ctx.set_gpr(2, 0u + static_cast<std::uint32_t>(1));
    rt.memory().aot_store8(ctx.gpr[17] + static_cast<std::uint32_t>(204), static_cast<std::uint8_t>(ctx.gpr[2]));
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_08921710;
      }
      goto L_0892170C;
    }
L_0892170C:
    rt.memory().aot_store8(ctx.gpr[17] + static_cast<std::uint32_t>(204), static_cast<std::uint8_t>(0u));
    goto L_08921710;
L_08921710:
    ctx.set_gpr(3, rt.memory().aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(40)));
    ctx.set_gpr(2, rt.memory().aot_load32(ctx.gpr[17] + static_cast<std::uint32_t>(124)));
    { const bool branch_taken = ctx.gpr[3] == ctx.gpr[2];
    // nop
      if (branch_taken) {
          goto L_0892172C;
      }
      goto L_08921720;
    }
L_08921720:
    ctx.set_gpr(2, 0u + static_cast<std::uint32_t>(1));
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_08921820;
      }
      goto L_0892172C;
    }
L_0892172C:
    ctx.set_gpr(2, rt.memory().aot_load16(ctx.gpr[16] + static_cast<std::uint32_t>(44)));
    rt.memory().aot_store32(ctx.gpr[17] + static_cast<std::uint32_t>(128), ctx.gpr[2]);
    ctx.set_gpr(1, static_cast<std::int32_t>(ctx.gpr[2]) < 9 ? 1u : 0u);
    { const bool branch_taken = ctx.gpr[1] != 0u;
    // nop
      if (branch_taken) {
          goto L_0892174C;
      }
      goto L_08921740;
    }
L_08921740:
    ctx.set_gpr(2, 0u + static_cast<std::uint32_t>(1));
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_08921820;
      }
      goto L_0892174C;
    }
L_0892174C:
    ctx.set_gpr(3, rt.memory().aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(44)));
    ctx.set_gpr(2, 32768u << 16u);
    ctx.set_gpr(2, ctx.gpr[3] & ctx.gpr[2]);
    ctx.set_gpr(2, 0u < ctx.gpr[2] ? 1u : 0u);
    rt.memory().aot_store8(ctx.gpr[17] + static_cast<std::uint32_t>(252), static_cast<std::uint8_t>(ctx.gpr[2]));
    ctx.set_gpr(3, rt.memory().aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(44)));
    ctx.set_gpr(2, 16384u << 16u);
    ctx.set_gpr(2, ctx.gpr[3] & ctx.gpr[2]);
    ctx.set_gpr(2, static_cast<std::int32_t>(0u) < static_cast<std::int32_t>(ctx.gpr[2]) ? 1u : 0u);
    rt.memory().aot_store8(ctx.gpr[17] + static_cast<std::uint32_t>(253), static_cast<std::uint8_t>(ctx.gpr[2]));
    ctx.set_gpr(3, rt.memory().aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(44)));
    ctx.set_gpr(2, 8192u << 16u);
    ctx.set_gpr(2, ctx.gpr[3] & ctx.gpr[2]);
    ctx.set_gpr(2, static_cast<std::int32_t>(0u) < static_cast<std::int32_t>(ctx.gpr[2]) ? 1u : 0u);
    rt.memory().aot_store8(ctx.gpr[17] + static_cast<std::uint32_t>(254), static_cast<std::uint8_t>(ctx.gpr[2]));
    ctx.set_gpr(2, rt.memory().aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(44)));
    ctx.set_gpr(2, ctx.gpr[2] ^ 1u);
    ctx.set_gpr(2, ctx.gpr[2] < static_cast<std::uint32_t>(1) ? 1u : 0u);
    rt.memory().aot_store8(ctx.gpr[17] + static_cast<std::uint32_t>(255), static_cast<std::uint8_t>(ctx.gpr[2]));
    ctx.set_gpr(3, rt.memory().aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(44)));
    ctx.set_gpr(2, 4096u << 16u);
    ctx.set_gpr(2, ctx.gpr[3] & ctx.gpr[2]);
    ctx.set_gpr(2, static_cast<std::int32_t>(0u) < static_cast<std::int32_t>(ctx.gpr[2]) ? 1u : 0u);
    rt.memory().aot_store8(ctx.gpr[17] + static_cast<std::uint32_t>(332), static_cast<std::uint8_t>(ctx.gpr[2]));
    ctx.set_gpr(2, rt.memory().aot_load8(ctx.gpr[17] + static_cast<std::uint32_t>(255)));
    { const bool branch_taken = ctx.gpr[2] == 0u;
    // nop
      if (branch_taken) {
          goto L_089217C8;
      }
      goto L_089217B8;
    }
L_089217B8:
    ctx.set_gpr(2, 0u + static_cast<std::uint32_t>(1));
    rt.memory().aot_store32(ctx.gpr[17] + static_cast<std::uint32_t>(256), ctx.gpr[2]);
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_089217CC;
      }
      goto L_089217C8;
    }
L_089217C8:
    rt.memory().aot_store32(ctx.gpr[17] + static_cast<std::uint32_t>(256), 0u);
    goto L_089217CC;
L_089217CC:
    ctx.set_gpr(2, rt.memory().aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(0)));
    rt.memory().aot_store32(ctx.gpr[17] + static_cast<std::uint32_t>(160), ctx.gpr[2]);
    ctx.set_gpr(2, rt.memory().aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(4)));
    rt.memory().aot_store32(ctx.gpr[17] + static_cast<std::uint32_t>(140), ctx.gpr[2]);
    ctx.set_gpr(2, rt.memory().aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(8)));
    rt.memory().aot_store32(ctx.gpr[17] + static_cast<std::uint32_t>(168), ctx.gpr[2]);
    ctx.set_gpr(2, rt.memory().aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(12)));
    rt.memory().aot_store32(ctx.gpr[17] + static_cast<std::uint32_t>(164), ctx.gpr[2]);
    ctx.set_gpr(2, rt.memory().aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(16)));
    rt.memory().aot_store32(ctx.gpr[17] + static_cast<std::uint32_t>(184), ctx.gpr[2]);
    ctx.set_gpr(2, rt.memory().aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(20)));
    rt.memory().aot_store32(ctx.gpr[17] + static_cast<std::uint32_t>(180), ctx.gpr[2]);
    ctx.set_gpr(2, rt.memory().aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(24)));
    rt.memory().aot_store32(ctx.gpr[17] + static_cast<std::uint32_t>(192), ctx.gpr[2]);
    ctx.set_gpr(2, rt.memory().aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(28)));
    rt.memory().aot_store32(ctx.gpr[17] + static_cast<std::uint32_t>(188), ctx.gpr[2]);
    ctx.set_gpr(2, rt.memory().aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(32)));
    rt.memory().aot_store32(ctx.gpr[17] + static_cast<std::uint32_t>(176), ctx.gpr[2]);
    ctx.set_gpr(2, rt.memory().aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(36)));
    rt.memory().aot_store32(ctx.gpr[17] + static_cast<std::uint32_t>(172), ctx.gpr[2]);
    ctx.set_gpr(2, 0u + 0u);
    goto L_08921820;
L_08921820:
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
L_08921838:
    ctx.set_gpr(29, ctx.gpr[29] + static_cast<std::uint32_t>(-16));
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(12), ctx.gpr[31]);
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(8), ctx.gpr[16]);
    ctx.set_gpr(16, ctx.gpr[4] + 0u);
    ctx.set_gpr(5, rt.memory().aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(168)));
    ctx.set_gpr(31, 0x08921854u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0072_entry, 72u, 546u, 0x08926644u>(ctx, &aot_mem) && ctx.pc == 0x08921854u) goto L_08921854;
    return;
L_08921854:
    ctx.set_gpr(7, 0u + static_cast<std::uint32_t>(1));
    { const bool branch_taken = ctx.gpr[2] != ctx.gpr[7];
    // nop
      if (branch_taken) {
          goto L_0892186C;
      }
      goto L_08921860;
    }
L_08921860:
    ctx.set_gpr(2, ctx.gpr[7] + 0u);
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_089218B4;
      }
      goto L_0892186C;
    }
L_0892186C:
    ctx.set_gpr(2, rt.memory().aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(304)));
    rt.memory().aot_store32(ctx.gpr[16] + static_cast<std::uint32_t>(208), ctx.gpr[2]);
    ctx.set_gpr(3, ctx.gpr[7] & 255u);
    ctx.set_gpr(6, rt.memory().aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(168)));
    { const bool branch_taken = ctx.gpr[6] == 0u;
    // nop
      if (branch_taken) {
          goto L_089218A4;
      }
      goto L_08921884;
    }
L_08921884:
    ctx.set_gpr(4, rt.memory().aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(132)));
    ctx.set_gpr(5, rt.memory().aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(208)));
    ctx.set_gpr(25, rt.memory().aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(0)));
    ctx.set_gpr(25, rt.memory().aot_load32(ctx.gpr[25] + static_cast<std::uint32_t>(108)));
    jump_target = ctx.gpr[25];
    ctx.set_gpr(31, 0x0892189Cu);
    // nop
    ctx.pc = jump_target;
    if (rt.invoke_chained_call(ctx, &aot_mem) && ctx.pc == 0x0892189Cu) goto L_0892189C;
    return;
L_0892189C:
    ctx.set_gpr(2, ctx.gpr[2] ^ 1u);
    ctx.set_gpr(3, ctx.gpr[2] < static_cast<std::uint32_t>(1) ? 1u : 0u);
    goto L_089218A4;
L_089218A4:
    ctx.set_gpr(2, 0u + 0u);
    { const bool branch_taken = ctx.gpr[3] != 0u;
    // nop
      if (branch_taken) {
          goto L_089218B4;
      }
      goto L_089218B0;
    }
L_089218B0:
    ctx.set_gpr(2, 0u + static_cast<std::uint32_t>(1));
    goto L_089218B4;
L_089218B4:
    ctx.set_gpr(31, rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(12)));
    ctx.set_gpr(16, rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(8)));
    ctx.set_gpr(29, ctx.gpr[29] + static_cast<std::uint32_t>(16));
    jump_target = ctx.gpr[31];
    // nop
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_089218C8:
    ctx.set_gpr(29, ctx.gpr[29] + static_cast<std::uint32_t>(-160));
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
    ctx.set_gpr(19, ctx.gpr[4] + 0u);
    ctx.set_gpr(31, 0x08921900u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0072_entry, 72u, 568u, 0x089267ECu>(ctx, &aot_mem) && ctx.pc == 0x08921900u) goto L_08921900;
    return;
L_08921900:
    ctx.set_gpr(4, ctx.gpr[2] + 0u);
    ctx.set_gpr(31, 0x0892190Cu);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0061_entry, 61u, 162u, 0x088F8E68u>(ctx, &aot_mem) && ctx.pc == 0x0892190Cu) goto L_0892190C;
    return;
L_0892190C:
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(140), ctx.gpr[2]);
    ctx.set_gpr(4, ctx.gpr[19] + static_cast<std::uint32_t>(232));
    ctx.set_gpr(5, ctx.gpr[2] + 0u);
    ctx.set_gpr(31, 0x08921920u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0085_entry, 85u, 61u, 0x089584C4u>(ctx, &aot_mem) && ctx.pc == 0x08921920u) goto L_08921920;
    return;
L_08921920:
    ctx.set_gpr(4, rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(140)));
    { const bool branch_taken = ctx.gpr[4] == 0u;
    // nop
      if (branch_taken) {
          goto L_08921934;
      }
      goto L_0892192C;
    }
L_0892192C:
    ctx.set_gpr(31, 0x08921934u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0014_entry, 14u, 257u, 0x0883D454u>(ctx, &aot_mem) && ctx.pc == 0x08921934u) goto L_08921934;
    return;
L_08921934:
    ctx.set_gpr(5, rt.memory().aot_load32(ctx.gpr[19] + static_cast<std::uint32_t>(164)));
    ctx.set_gpr(4, rt.memory().aot_load32(ctx.gpr[19] + static_cast<std::uint32_t>(232)));
    ctx.set_gpr(2, rt.memory().aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(8)));
    ctx.set_gpr(2, static_cast<std::int32_t>(ctx.gpr[5]) < static_cast<std::int32_t>(ctx.gpr[2]) ? 1u : 0u);
    { const bool branch_taken = ctx.gpr[2] != 0u;
    // nop
      if (branch_taken) {
          goto L_08921958;
      }
      goto L_0892194C;
    }
L_0892194C:
    ctx.set_gpr(6, 0u + static_cast<std::uint32_t>(4));
    ctx.set_gpr(31, 0x08921958u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0066_entry, 66u, 785u, 0x0890FA2Cu>(ctx, &aot_mem) && ctx.pc == 0x08921958u) goto L_08921958;
    return;
L_08921958:
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(156), 0u);
    ctx.set_gpr(2, rt.memory().aot_load32(ctx.gpr[19] + static_cast<std::uint32_t>(128)));
    ctx.set_gpr(1, static_cast<std::int32_t>(ctx.gpr[2]) < 4 ? 1u : 0u);
    { const bool branch_taken = ctx.gpr[1] == 0u;
    // nop
      if (branch_taken) {
          goto L_08921980;
      }
      goto L_0892196C;
    }
L_0892196C:
    ctx.set_gpr(23, 0u + static_cast<std::uint32_t>(3));
    ctx.set_gpr(30, 0u + 0u);
    rt.memory().aot_store8(ctx.gpr[29] + static_cast<std::uint32_t>(128), static_cast<std::uint8_t>(0u));
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_08921A40;
      }
      goto L_08921980;
    }
L_08921980:
    ctx.set_gpr(23, 0u + static_cast<std::uint32_t>(6));
    ctx.set_gpr(30, 0u + static_cast<std::uint32_t>(3));
    ctx.set_gpr(2, 0u + static_cast<std::uint32_t>(1));
    rt.memory().aot_store8(ctx.gpr[29] + static_cast<std::uint32_t>(128), static_cast<std::uint8_t>(ctx.gpr[2]));
    ctx.set_gpr(4, ctx.gpr[19] + 0u);
    ctx.set_gpr(31, 0x0892199Cu);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0072_entry, 72u, 568u, 0x089267ECu>(ctx, &aot_mem) && ctx.pc == 0x0892199Cu) goto L_0892199C;
    return;
L_0892199C:
    ctx.set_gpr(4, ctx.gpr[2] + 0u);
    ctx.set_gpr(31, 0x089219A8u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0060_entry, 60u, 724u, 0x088F7D98u>(ctx, &aot_mem) && ctx.pc == 0x089219A8u) goto L_089219A8;
    return;
L_089219A8:
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(136), ctx.gpr[2]);
    ctx.set_gpr(4, ctx.gpr[19] + static_cast<std::uint32_t>(64));
    ctx.set_gpr(5, ctx.gpr[2] + 0u);
    ctx.set_gpr(31, 0x089219BCu);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0085_entry, 85u, 61u, 0x089584C4u>(ctx, &aot_mem) && ctx.pc == 0x089219BCu) goto L_089219BC;
    return;
L_089219BC:
    ctx.set_gpr(4, rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(136)));
    { const bool branch_taken = ctx.gpr[4] == 0u;
    // nop
      if (branch_taken) {
          goto L_089219D0;
      }
      goto L_089219C8;
    }
L_089219C8:
    ctx.set_gpr(31, 0x089219D0u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0014_entry, 14u, 257u, 0x0883D454u>(ctx, &aot_mem) && ctx.pc == 0x089219D0u) goto L_089219D0;
    return;
L_089219D0:
    ctx.set_gpr(5, rt.memory().aot_load32(ctx.gpr[19] + static_cast<std::uint32_t>(164)));
    ctx.set_gpr(4, rt.memory().aot_load32(ctx.gpr[19] + static_cast<std::uint32_t>(64)));
    ctx.set_gpr(2, rt.memory().aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(8)));
    ctx.set_gpr(2, static_cast<std::int32_t>(ctx.gpr[5]) < static_cast<std::int32_t>(ctx.gpr[2]) ? 1u : 0u);
    { const bool branch_taken = ctx.gpr[2] != 0u;
    // nop
      if (branch_taken) {
          goto L_089219F4;
      }
      goto L_089219E8;
    }
L_089219E8:
    ctx.set_gpr(6, 0u + static_cast<std::uint32_t>(4));
    ctx.set_gpr(31, 0x089219F4u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0066_entry, 66u, 785u, 0x0890FA2Cu>(ctx, &aot_mem) && ctx.pc == 0x089219F4u) goto L_089219F4;
    return;
L_089219F4:
    ctx.set_gpr(4, ctx.gpr[19] + 0u);
    ctx.set_gpr(31, 0x08921A00u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0072_entry, 72u, 568u, 0x089267ECu>(ctx, &aot_mem) && ctx.pc == 0x08921A00u) goto L_08921A00;
    return;
L_08921A00:
    ctx.set_gpr(4, ctx.gpr[2] + 0u);
    ctx.set_gpr(31, 0x08921A0Cu);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0060_entry, 60u, 699u, 0x088F7B34u>(ctx, &aot_mem) && ctx.pc == 0x08921A0Cu) goto L_08921A0C;
    return;
L_08921A0C:
    ctx.set_gpr(4, ctx.gpr[29] + static_cast<std::uint32_t>(156));
    ctx.set_gpr(5, ctx.gpr[2] + 0u);
    ctx.set_gpr(31, 0x08921A1Cu);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0085_entry, 85u, 67u, 0x0895853Cu>(ctx, &aot_mem) && ctx.pc == 0x08921A1Cu) goto L_08921A1C;
    return;
L_08921A1C:
    ctx.set_gpr(5, rt.memory().aot_load32(ctx.gpr[19] + static_cast<std::uint32_t>(164)));
    ctx.set_gpr(4, rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(156)));
    ctx.set_gpr(2, rt.memory().aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(8)));
    ctx.set_gpr(2, static_cast<std::int32_t>(ctx.gpr[5]) < static_cast<std::int32_t>(ctx.gpr[2]) ? 1u : 0u);
    { const bool branch_taken = ctx.gpr[2] != 0u;
    // nop
      if (branch_taken) {
          goto L_08921A40;
      }
      goto L_08921A34;
    }
L_08921A34:
    ctx.set_gpr(6, 0u + static_cast<std::uint32_t>(2));
    ctx.set_gpr(31, 0x08921A40u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0066_entry, 66u, 785u, 0x0890FA2Cu>(ctx, &aot_mem) && ctx.pc == 0x08921A40u) goto L_08921A40;
    return;
L_08921A40:
    ctx.set_gpr(2, rt.memory().aot_load8(ctx.gpr[19] + static_cast<std::uint32_t>(204)));
    { const bool branch_taken = ctx.gpr[2] == 0u;
    // nop
      if (branch_taken) {
          goto L_08921A70;
      }
      goto L_08921A4C;
    }
L_08921A4C:
    ctx.set_gpr(4, rt.memory().aot_load32(ctx.gpr[19] + static_cast<std::uint32_t>(244)));
    ctx.set_gpr(2, rt.memory().aot_load32(ctx.gpr[19] + static_cast<std::uint32_t>(164)));
    { const std::int64_t product = static_cast<std::int64_t>(static_cast<std::int32_t>(ctx.gpr[23])) * static_cast<std::int64_t>(static_cast<std::int32_t>(ctx.gpr[2])); ctx.lo = static_cast<std::uint32_t>(product); ctx.hi = static_cast<std::uint32_t>(static_cast<std::uint64_t>(product) >> 32u); }
    ctx.set_gpr(6, ctx.lo);
    ctx.set_gpr(5, rt.memory().aot_load32(ctx.gpr[19] + static_cast<std::uint32_t>(208)));
    ctx.set_gpr(25, rt.memory().aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(0)));
    ctx.set_gpr(25, rt.memory().aot_load32(ctx.gpr[25] + static_cast<std::uint32_t>(220)));
    jump_target = ctx.gpr[25];
    ctx.set_gpr(31, 0x08921A70u);
    // nop
    ctx.pc = jump_target;
    if (rt.invoke_chained_call(ctx, &aot_mem) && ctx.pc == 0x08921A70u) goto L_08921A70;
    return;
L_08921A70:
    ctx.set_gpr(2, rt.memory().aot_load32(ctx.gpr[19] + static_cast<std::uint32_t>(208)));
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(108), ctx.gpr[2]);
    ctx.set_gpr(18, ctx.gpr[2] + 0u);
    ctx.set_gpr(2, rt.memory().aot_load32(ctx.gpr[19] + static_cast<std::uint32_t>(164)));
    { const std::int64_t product = static_cast<std::int64_t>(static_cast<std::int32_t>(ctx.gpr[23])) * static_cast<std::int64_t>(static_cast<std::int32_t>(ctx.gpr[2])); ctx.lo = static_cast<std::uint32_t>(product); ctx.hi = static_cast<std::uint32_t>(static_cast<std::uint64_t>(product) >> 32u); }
    ctx.set_gpr(2, ctx.lo);
    ctx.set_gpr(3, ctx.gpr[2] << 2u);
    ctx.set_gpr(2, rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(108)));
    ctx.set_gpr(21, ctx.gpr[2] + ctx.gpr[3]);
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(132), 0u);
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_089223CC;
      }
      goto L_08921AA0;
    }
L_08921AA0:
    ctx.set_gpr(4, ctx.gpr[21] + 0u);
    ctx.set_gpr(31, 0x08921AACu);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0080_entry, 80u, 233u, 0x0894516Cu>(ctx, &aot_mem) && ctx.pc == 0x08921AACu) goto L_08921AAC;
    return;
L_08921AAC:
    ctx.set_gpr(16, ctx.gpr[2] + 0u);
    { const bool branch_taken = ctx.gpr[16] == 0u;
    // nop
      if (branch_taken) {
          goto L_08921D78;
      }
      goto L_08921AB8;
    }
L_08921AB8:
    ctx.set_gpr(3, rt.memory().aot_load32(ctx.gpr[18] + static_cast<std::uint32_t>(4)));
    { const bool branch_taken = ctx.gpr[3] != 0u;
    // nop
      if (branch_taken) {
          goto L_08921AC8;
      }
      goto L_08921AC4;
    }
L_08921AC4:
    ctx.set_gpr(3, 0u + static_cast<std::uint32_t>(1));
    goto L_08921AC8;
L_08921AC8:
    ctx.set_gpr(2, rt.memory().aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(16)));
    { const bool branch_taken = ctx.gpr[3] != ctx.gpr[2];
    // nop
      if (branch_taken) {
          goto L_08921D58;
      }
      goto L_08921AD4;
    }
L_08921AD4:
    ctx.set_gpr(3, rt.memory().aot_load32(ctx.gpr[18] + static_cast<std::uint32_t>(8)));
    ctx.set_gpr(2, rt.memory().aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(20)));
    { const bool branch_taken = ctx.gpr[3] != ctx.gpr[2];
    // nop
      if (branch_taken) {
          goto L_08921D58;
      }
      goto L_08921AE4;
    }
L_08921AE4:
    ctx.set_gpr(4, rt.memory().aot_load32(ctx.gpr[19] + static_cast<std::uint32_t>(232)));
    ctx.set_gpr(5, ctx.gpr[16] + 0u);
    ctx.set_gpr(31, 0x08921AF4u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0081_entry, 81u, 299u, 0x089494E0u>(ctx, &aot_mem) && ctx.pc == 0x08921AF4u) goto L_08921AF4;
    return;
L_08921AF4:
    ctx.set_gpr(2, rt.memory().aot_load8(ctx.gpr[29] + static_cast<std::uint32_t>(128)));
    { const bool branch_taken = ctx.gpr[2] == 0u;
    // nop
      if (branch_taken) {
          goto L_08922390;
      }
      goto L_08921B00;
    }
L_08921B00:
    ctx.set_gpr(4, ctx.gpr[19] + 0u);
    ctx.set_gpr(31, 0x08921B0Cu);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0072_entry, 72u, 568u, 0x089267ECu>(ctx, &aot_mem) && ctx.pc == 0x08921B0Cu) goto L_08921B0C;
    return;
L_08921B0C:
    ctx.set_gpr(4, ctx.gpr[2] + 0u);
    ctx.set_gpr(31, 0x08921B18u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0060_entry, 60u, 699u, 0x088F7B34u>(ctx, &aot_mem) && ctx.pc == 0x08921B18u) goto L_08921B18;
    return;
L_08921B18:
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(152), ctx.gpr[2]);
    ctx.set_gpr(5, rt.memory().aot_load32(ctx.gpr[18] + static_cast<std::uint32_t>(12)));
    ctx.set_gpr(4, ctx.gpr[2] + 0u);
    ctx.set_gpr(2, rt.memory().aot_load32(ctx.gpr[2] + static_cast<std::uint32_t>(8)));
    ctx.set_gpr(2, static_cast<std::int32_t>(ctx.gpr[5]) < static_cast<std::int32_t>(ctx.gpr[2]) ? 1u : 0u);
    { const bool branch_taken = ctx.gpr[2] != 0u;
    // nop
      if (branch_taken) {
          goto L_08921B40;
      }
      goto L_08921B34;
    }
L_08921B34:
    ctx.set_gpr(6, 0u + static_cast<std::uint32_t>(2));
    ctx.set_gpr(31, 0x08921B40u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0066_entry, 66u, 785u, 0x0890FA2Cu>(ctx, &aot_mem) && ctx.pc == 0x08921B40u) goto L_08921B40;
    return;
L_08921B40:
    ctx.set_gpr(5, rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(152)));
    ctx.set_gpr(4, rt.memory().aot_load32(ctx.gpr[19] + static_cast<std::uint32_t>(64)));
    ctx.set_gpr(31, 0x08921B50u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0081_entry, 81u, 299u, 0x089494E0u>(ctx, &aot_mem) && ctx.pc == 0x08921B50u) goto L_08921B50;
    return;
L_08921B50:
    ctx.set_gpr(2, rt.memory().aot_load32(ctx.gpr[18] + static_cast<std::uint32_t>(0)));
    ctx.set_gpr(17, ctx.gpr[21] + ctx.gpr[2]);
    ctx.set_gpr(2, rt.memory().aot_load8(ctx.gpr[19] + static_cast<std::uint32_t>(204)));
    { const bool branch_taken = ctx.gpr[2] == 0u;
    // nop
      if (branch_taken) {
          goto L_08921B90;
      }
      goto L_08921B64;
    }
L_08921B64:
    ctx.set_gpr(31, 0x08921B6Cu);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0054_entry, 54u, 201u, 0x088DD050u>(ctx, &aot_mem) && ctx.pc == 0x08921B6Cu) goto L_08921B6C;
    return;
L_08921B6C:
    ctx.set_gpr(3, rt.memory().aot_load32(ctx.gpr[18] + static_cast<std::uint32_t>(12)));
    { const std::int64_t product = static_cast<std::int64_t>(static_cast<std::int32_t>(ctx.gpr[30])) * static_cast<std::int64_t>(static_cast<std::int32_t>(ctx.gpr[3])); ctx.lo = static_cast<std::uint32_t>(product); ctx.hi = static_cast<std::uint32_t>(static_cast<std::uint64_t>(product) >> 32u); }
    ctx.set_gpr(6, ctx.lo);
    ctx.set_gpr(4, ctx.gpr[2] + 0u);
    ctx.set_gpr(5, ctx.gpr[17] + 0u);
    ctx.set_gpr(25, rt.memory().aot_load32(ctx.gpr[2] + static_cast<std::uint32_t>(0)));
    ctx.set_gpr(25, rt.memory().aot_load32(ctx.gpr[25] + static_cast<std::uint32_t>(220)));
    jump_target = ctx.gpr[25];
    ctx.set_gpr(31, 0x08921B90u);
    // nop
    ctx.pc = jump_target;
    if (rt.invoke_chained_call(ctx, &aot_mem) && ctx.pc == 0x08921B90u) goto L_08921B90;
    return;
L_08921B90:
    ctx.set_gpr(20, 0u + 0u);
    ctx.set_gpr(22, rt.memory().aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(40)));
    ctx.set_gpr(17, 0u + 0u);
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_08921BD4;
      }
      goto L_08921BA4;
    }
L_08921BA4:
    ctx.set_gpr(3, ctx.gpr[17] << 2u);
    ctx.set_gpr(2, rt.memory().aot_load32(ctx.gpr[22] + static_cast<std::uint32_t>(8)));
    ctx.set_gpr(2, ctx.gpr[2] + ctx.gpr[3]);
    ctx.set_gpr(3, rt.memory().aot_load32(ctx.gpr[2] + static_cast<std::uint32_t>(0)));
    ctx.set_gpr(2, rt.memory().aot_load8(ctx.gpr[3] + static_cast<std::uint32_t>(38)));
    { const bool branch_taken = ctx.gpr[2] == 0u;
    // nop
      if (branch_taken) {
          goto L_08921BD0;
      }
      goto L_08921BC0;
    }
L_08921BC0:
    ctx.set_gpr(2, rt.memory().aot_load8(ctx.gpr[3] + static_cast<std::uint32_t>(37)));
    { const bool branch_taken = ctx.gpr[2] != 0u;
    // nop
      if (branch_taken) {
          goto L_08921BD0;
      }
      goto L_08921BCC;
    }
L_08921BCC:
    ctx.set_gpr(20, ctx.gpr[20] + static_cast<std::uint32_t>(1));
    goto L_08921BD0;
L_08921BD0:
    ctx.set_gpr(17, ctx.gpr[17] + static_cast<std::uint32_t>(1));
    goto L_08921BD4;
L_08921BD4:
    ctx.set_gpr(4, ctx.gpr[16] + 0u);
    ctx.set_gpr(31, 0x08921BE0u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0080_entry, 80u, 236u, 0x089451A8u>(ctx, &aot_mem) && ctx.pc == 0x08921BE0u) goto L_08921BE0;
    return;
L_08921BE0:
    ctx.set_gpr(2, static_cast<std::int32_t>(ctx.gpr[17]) < static_cast<std::int32_t>(ctx.gpr[2]) ? 1u : 0u);
    { const bool branch_taken = ctx.gpr[2] != 0u;
    // nop
      if (branch_taken) {
          goto L_08921BA4;
      }
      goto L_08921BEC;
    }
L_08921BEC:
    ctx.set_gpr(2, rt.memory().aot_load32(ctx.gpr[18] + static_cast<std::uint32_t>(12)));
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(104), ctx.gpr[2]);
    ctx.set_gpr(2, ctx.gpr[20] - ctx.gpr[2]);
    ctx.set_gpr(22, static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int16_t>(ctx.gpr[2]))));
    { const bool branch_taken = static_cast<std::int32_t>(ctx.gpr[22]) >= 0;
    // nop
      if (branch_taken) {
          goto L_08921C08;
      }
      goto L_08921C04;
    }
L_08921C04:
    ctx.set_gpr(22, 0u + 0u);
    goto L_08921C08;
L_08921C08:
    ctx.set_gpr(17, 0u + 0u);
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_08921CDC;
      }
      goto L_08921C14;
    }
L_08921C14:
    ctx.set_gpr(20, static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int16_t>(ctx.gpr[17]))));
    ctx.set_gpr(5, ctx.gpr[18] + 0u);
    ctx.set_gpr(3, rt.memory().aot_load32(ctx.gpr[18] + static_cast<std::uint32_t>(12)));
    ctx.set_gpr(4, rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(132)));
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_08921C48;
      }
      goto L_08921C2C;
    }
L_08921C2C:
    ctx.set_gpr(4, rt.memory().aot_load32(ctx.gpr[5] + static_cast<std::uint32_t>(16)));
    { const std::int64_t product = static_cast<std::int64_t>(static_cast<std::int32_t>(ctx.gpr[4])) * static_cast<std::int64_t>(static_cast<std::int32_t>(ctx.gpr[23])); ctx.lo = static_cast<std::uint32_t>(product); ctx.hi = static_cast<std::uint32_t>(static_cast<std::uint64_t>(product) >> 32u); }
    ctx.set_gpr(2, ctx.lo);
    ctx.set_gpr(3, ctx.gpr[2] << 2u);
    ctx.set_gpr(2, rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(108)));
    ctx.set_gpr(5, ctx.gpr[2] + ctx.gpr[3]);
    ctx.set_gpr(3, rt.memory().aot_load32(ctx.gpr[5] + static_cast<std::uint32_t>(12)));
    goto L_08921C48;
L_08921C48:
    ctx.set_gpr(2, static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int16_t>(ctx.gpr[20]))));
    ctx.set_gpr(2, static_cast<std::int32_t>(ctx.gpr[2]) < static_cast<std::int32_t>(ctx.gpr[3]) ? 1u : 0u);
    { const bool branch_taken = ctx.gpr[2] != 0u;
    // nop
      if (branch_taken) {
          goto L_08921C2C;
      }
      goto L_08921C58;
    }
L_08921C58:
    ctx.set_gpr(2, static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int16_t>(ctx.gpr[22]))));
    { const bool branch_taken = ctx.gpr[2] == 0u;
    // nop
      if (branch_taken) {
          goto L_08921C80;
      }
      goto L_08921C64;
    }
L_08921C64:
    ctx.set_gpr(2, rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(156)));
    ctx.set_gpr(3, ctx.gpr[4] << 1u);
    ctx.set_gpr(2, rt.memory().aot_load32(ctx.gpr[2] + static_cast<std::uint32_t>(16)));
    ctx.set_gpr(2, ctx.gpr[2] + ctx.gpr[3]);
    ctx.set_gpr(2, static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int16_t>(rt.memory().aot_load16(ctx.gpr[2] + static_cast<std::uint32_t>(0))))));
    ctx.set_gpr(2, ctx.gpr[20] + ctx.gpr[2]);
    ctx.set_gpr(20, static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int16_t>(ctx.gpr[2]))));
    goto L_08921C80;
L_08921C80:
    ctx.set_gpr(16, rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(152)));
    ctx.set_gpr(2, rt.memory().aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(8)));
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(100), ctx.gpr[2]);
    ctx.set_gpr(3, rt.memory().aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(12)));
    ctx.set_gpr(1, static_cast<std::int32_t>(ctx.gpr[2]) < static_cast<std::int32_t>(ctx.gpr[3]) ? 1u : 0u);
    { const bool branch_taken = ctx.gpr[1] == 0u;
    // nop
      if (branch_taken) {
          goto L_08921CB0;
      }
      goto L_08921C9C;
    }
L_08921C9C:
    ctx.set_gpr(2, rt.memory().aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(8)));
    ctx.set_gpr(2, ctx.gpr[2] + static_cast<std::uint32_t>(1));
    rt.memory().aot_store32(ctx.gpr[16] + static_cast<std::uint32_t>(8), ctx.gpr[2]);
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_08921CC4;
      }
      goto L_08921CB0;
    }
L_08921CB0:
    ctx.set_gpr(5, ctx.gpr[2] + static_cast<std::uint32_t>(1));
    ctx.set_gpr(4, ctx.gpr[16] + 0u);
    ctx.set_gpr(6, 0u + static_cast<std::uint32_t>(2));
    ctx.set_gpr(31, 0x08921CC4u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0066_entry, 66u, 795u, 0x0890FB1Cu>(ctx, &aot_mem) && ctx.pc == 0x08921CC4u) goto L_08921CC4;
    return;
L_08921CC4:
    ctx.set_gpr(2, rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(100)));
    ctx.set_gpr(3, ctx.gpr[2] << 1u);
    ctx.set_gpr(2, rt.memory().aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(16)));
    ctx.set_gpr(2, ctx.gpr[2] + ctx.gpr[3]);
    rt.memory().aot_store16(ctx.gpr[2] + static_cast<std::uint32_t>(0), static_cast<std::uint16_t>(ctx.gpr[20]));
    ctx.set_gpr(17, ctx.gpr[17] + static_cast<std::uint32_t>(1));
    goto L_08921CDC;
L_08921CDC:
    ctx.set_gpr(2, rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(104)));
    ctx.set_gpr(2, static_cast<std::int32_t>(ctx.gpr[17]) < static_cast<std::int32_t>(ctx.gpr[2]) ? 1u : 0u);
    { const bool branch_taken = ctx.gpr[2] != 0u;
    // nop
      if (branch_taken) {
          goto L_08921C14;
      }
      goto L_08921CEC;
    }
L_08921CEC:
    ctx.set_gpr(16, rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(156)));
    ctx.set_gpr(17, rt.memory().aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(8)));
    ctx.set_gpr(2, rt.memory().aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(12)));
    ctx.set_gpr(1, static_cast<std::int32_t>(ctx.gpr[17]) < static_cast<std::int32_t>(ctx.gpr[2]) ? 1u : 0u);
    { const bool branch_taken = ctx.gpr[1] == 0u;
    // nop
      if (branch_taken) {
          goto L_08921D18;
      }
      goto L_08921D04;
    }
L_08921D04:
    ctx.set_gpr(2, rt.memory().aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(8)));
    ctx.set_gpr(2, ctx.gpr[2] + static_cast<std::uint32_t>(1));
    rt.memory().aot_store32(ctx.gpr[16] + static_cast<std::uint32_t>(8), ctx.gpr[2]);
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_08921D2C;
      }
      goto L_08921D18;
    }
L_08921D18:
    ctx.set_gpr(5, ctx.gpr[17] + static_cast<std::uint32_t>(1));
    ctx.set_gpr(4, ctx.gpr[16] + 0u);
    ctx.set_gpr(6, 0u + static_cast<std::uint32_t>(2));
    ctx.set_gpr(31, 0x08921D2Cu);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0066_entry, 66u, 795u, 0x0890FB1Cu>(ctx, &aot_mem) && ctx.pc == 0x08921D2Cu) goto L_08921D2C;
    return;
L_08921D2C:
    ctx.set_gpr(3, ctx.gpr[17] << 1u);
    ctx.set_gpr(2, rt.memory().aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(16)));
    ctx.set_gpr(2, ctx.gpr[2] + ctx.gpr[3]);
    rt.memory().aot_store16(ctx.gpr[2] + static_cast<std::uint32_t>(0), static_cast<std::uint16_t>(ctx.gpr[22]));
    ctx.set_gpr(4, rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(152)));
    { const bool branch_taken = ctx.gpr[4] == 0u;
    // nop
      if (branch_taken) {
          goto L_08922390;
      }
      goto L_08921D48;
    }
L_08921D48:
    ctx.set_gpr(31, 0x08921D50u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0014_entry, 14u, 257u, 0x0883D454u>(ctx, &aot_mem) && ctx.pc == 0x08921D50u) goto L_08921D50;
    return;
L_08921D50:
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_08922390;
      }
      goto L_08921D58;
    }
L_08921D58:
    ctx.set_gpr(4, rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(156)));
    { const bool branch_taken = ctx.gpr[4] == 0u;
    // nop
      if (branch_taken) {
          goto L_08921D6C;
      }
      goto L_08921D64;
    }
L_08921D64:
    ctx.set_gpr(31, 0x08921D6Cu);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0014_entry, 14u, 257u, 0x0883D454u>(ctx, &aot_mem) && ctx.pc == 0x08921D6Cu) goto L_08921D6C;
    return;
L_08921D6C:
    ctx.set_gpr(2, 0u + static_cast<std::uint32_t>(1));
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_08922770;
      }
      goto L_08921D78;
    }
L_08921D78:
    ctx.set_gpr(2, rt.memory().aot_load8(ctx.gpr[29] + static_cast<std::uint32_t>(128)));
    { const bool branch_taken = ctx.gpr[2] == 0u;
    // nop
      if (branch_taken) {
          goto L_08922344;
      }
      goto L_08921D84;
    }
L_08921D84:
    ctx.set_gpr(2, rt.memory().aot_load8(ctx.gpr[28] + static_cast<std::uint32_t>(-32198)));
    { const bool branch_taken = ctx.gpr[2] == 0u;
    // nop
      if (branch_taken) {
          goto L_08922344;
      }
      goto L_08921D90;
    }
L_08921D90:
    ctx.set_gpr(2, rt.memory().aot_load32(ctx.gpr[18] + static_cast<std::uint32_t>(16)));
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(96), ctx.gpr[2]);
    { const std::int64_t product = static_cast<std::int64_t>(static_cast<std::int32_t>(ctx.gpr[2])) * static_cast<std::int64_t>(static_cast<std::int32_t>(ctx.gpr[23])); ctx.lo = static_cast<std::uint32_t>(product); ctx.hi = static_cast<std::uint32_t>(static_cast<std::uint64_t>(product) >> 32u); }
    ctx.set_gpr(2, ctx.lo);
    ctx.set_gpr(3, ctx.gpr[2] << 2u);
    ctx.set_gpr(2, rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(108)));
    ctx.set_gpr(2, ctx.gpr[2] + ctx.gpr[3]);
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(92), ctx.gpr[2]);
    ctx.set_gpr(4, rt.memory().aot_load32(ctx.gpr[19] + static_cast<std::uint32_t>(232)));
    ctx.set_gpr(2, rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(96)));
    ctx.set_gpr(3, ctx.gpr[2] << 2u);
    ctx.set_gpr(2, rt.memory().aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(16)));
    ctx.set_gpr(2, ctx.gpr[2] + ctx.gpr[3]);
    ctx.set_gpr(16, rt.memory().aot_load32(ctx.gpr[2] + static_cast<std::uint32_t>(0)));
    ctx.set_gpr(2, rt.memory().aot_load8(ctx.gpr[16] + static_cast<std::uint32_t>(26)));
    { const bool branch_taken = ctx.gpr[2] == 0u;
    // nop
      if (branch_taken) {
          goto L_08921DF4;
      }
      goto L_08921DD4;
    }
L_08921DD4:
    ctx.set_gpr(4, rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(156)));
    { const bool branch_taken = ctx.gpr[4] == 0u;
    // nop
      if (branch_taken) {
          goto L_08921DE8;
      }
      goto L_08921DE0;
    }
L_08921DE0:
    ctx.set_gpr(31, 0x08921DE8u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0014_entry, 14u, 257u, 0x0883D454u>(ctx, &aot_mem) && ctx.pc == 0x08921DE8u) goto L_08921DE8;
    return;
L_08921DE8:
    ctx.set_gpr(2, 0u + static_cast<std::uint32_t>(1));
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_08922770;
      }
      goto L_08921DF4;
    }
L_08921DF4:
    ctx.set_gpr(4, ctx.gpr[16] + 0u);
    ctx.set_gpr(31, 0x08921E00u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0080_entry, 80u, 254u, 0x08945308u>(ctx, &aot_mem) && ctx.pc == 0x08921E00u) goto L_08921E00;
    return;
L_08921E00:
    ctx.set_gpr(22, ctx.gpr[2] + 0u);
    ctx.set_gpr(4, ctx.gpr[16] + 0u);
    ctx.set_gpr(31, 0x08921E10u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0080_entry, 80u, 236u, 0x089451A8u>(ctx, &aot_mem) && ctx.pc == 0x08921E10u) goto L_08921E10;
    return;
L_08921E10:
    ctx.set_gpr(2, ctx.gpr[2] - ctx.gpr[22]);
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(88), ctx.gpr[2]);
    ctx.set_gpr(31, 0x08921E20u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0074_entry, 74u, 428u, 0x0892DD50u>(ctx, &aot_mem) && ctx.pc == 0x08921E20u) goto L_08921E20;
    return;
L_08921E20:
    ctx.set_gpr(4, ctx.gpr[2] + 0u);
    ctx.set_gpr(31, 0x08921E2Cu);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0052_entry, 52u, 732u, 0x088D6FE8u>(ctx, &aot_mem) && ctx.pc == 0x08921E2Cu) goto L_08921E2C;
    return;
L_08921E2C:
    ctx.set_gpr(17, ctx.gpr[2] + 0u);
    ctx.set_gpr(4, ctx.gpr[17] + 0u);
    ctx.set_gpr(5, ctx.gpr[21] + 0u);
    ctx.set_gpr(31, 0x08921E40u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0080_entry, 80u, 125u, 0x08944950u>(ctx, &aot_mem) && ctx.pc == 0x08921E40u) goto L_08921E40;
    return;
L_08921E40:
    ctx.set_gpr(4, ctx.gpr[17] + 0u);
    ctx.set_gpr(5, ctx.gpr[16] + 0u);
    ctx.set_gpr(31, 0x08921E50u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0080_entry, 80u, 104u, 0x089447A4u>(ctx, &aot_mem) && ctx.pc == 0x08921E50u) goto L_08921E50;
    return;
L_08921E50:
    ctx.set_gpr(4, rt.memory().aot_load32(ctx.gpr[19] + static_cast<std::uint32_t>(232)));
    ctx.set_gpr(5, ctx.gpr[17] + 0u);
    ctx.set_gpr(31, 0x08921E60u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0081_entry, 81u, 299u, 0x089494E0u>(ctx, &aot_mem) && ctx.pc == 0x08921E60u) goto L_08921E60;
    return;
L_08921E60:
    ctx.set_gpr(2, rt.memory().aot_load32(ctx.gpr[18] + static_cast<std::uint32_t>(0)));
    ctx.set_gpr(16, ctx.gpr[21] + ctx.gpr[2]);
    ctx.set_gpr(2, rt.memory().aot_load8(ctx.gpr[19] + static_cast<std::uint32_t>(204)));
    { const bool branch_taken = ctx.gpr[2] == 0u;
    // nop
      if (branch_taken) {
          goto L_08921EA0;
      }
      goto L_08921E74;
    }
L_08921E74:
    ctx.set_gpr(31, 0x08921E7Cu);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0054_entry, 54u, 201u, 0x088DD050u>(ctx, &aot_mem) && ctx.pc == 0x08921E7Cu) goto L_08921E7C;
    return;
L_08921E7C:
    ctx.set_gpr(3, rt.memory().aot_load32(ctx.gpr[18] + static_cast<std::uint32_t>(12)));
    { const std::int64_t product = static_cast<std::int64_t>(static_cast<std::int32_t>(ctx.gpr[30])) * static_cast<std::int64_t>(static_cast<std::int32_t>(ctx.gpr[3])); ctx.lo = static_cast<std::uint32_t>(product); ctx.hi = static_cast<std::uint32_t>(static_cast<std::uint64_t>(product) >> 32u); }
    ctx.set_gpr(6, ctx.lo);
    ctx.set_gpr(4, ctx.gpr[2] + 0u);
    ctx.set_gpr(5, ctx.gpr[16] + 0u);
    ctx.set_gpr(25, rt.memory().aot_load32(ctx.gpr[2] + static_cast<std::uint32_t>(0)));
    ctx.set_gpr(25, rt.memory().aot_load32(ctx.gpr[25] + static_cast<std::uint32_t>(220)));
    jump_target = ctx.gpr[25];
    ctx.set_gpr(31, 0x08921EA0u);
    // nop
    ctx.pc = jump_target;
    if (rt.invoke_chained_call(ctx, &aot_mem) && ctx.pc == 0x08921EA0u) goto L_08921EA0;
    return;
L_08921EA0:
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(124), 0u);
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_089220C0;
      }
      goto L_08921EAC;
    }
L_08921EAC:
    ctx.set_gpr(5, static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int16_t>(rt.memory().aot_load16(ctx.gpr[16] + static_cast<std::uint32_t>(2))))));
    ctx.set_gpr(2, rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(92)));
    ctx.set_gpr(2, rt.memory().aot_load32(ctx.gpr[2] + static_cast<std::uint32_t>(20)));
    ctx.set_gpr(1, static_cast<std::int32_t>(ctx.gpr[5]) < static_cast<std::int32_t>(ctx.gpr[2]) ? 1u : 0u);
    { const bool branch_taken = ctx.gpr[1] == 0u;
    // nop
      if (branch_taken) {
          goto L_08921ED4;
      }
      goto L_08921EC4;
    }
L_08921EC4:
    ctx.set_gpr(2, ctx.gpr[30] << 1u);
    ctx.set_gpr(16, ctx.gpr[16] + ctx.gpr[2]);
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_089220B4;
      }
      goto L_08921ED4;
    }
L_08921ED4:
    ctx.set_gpr(4, rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(156)));
    ctx.set_gpr(2, rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(96)));
    ctx.set_gpr(3, ctx.gpr[2] << 1u);
    ctx.set_gpr(2, rt.memory().aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(16)));
    ctx.set_gpr(2, ctx.gpr[2] + ctx.gpr[3]);
    ctx.set_gpr(2, static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int16_t>(rt.memory().aot_load16(ctx.gpr[2] + static_cast<std::uint32_t>(0))))));
    ctx.set_gpr(3, ctx.gpr[5] + ctx.gpr[2]);
    ctx.set_gpr(2, rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(88)));
    ctx.set_gpr(2, ctx.gpr[3] - ctx.gpr[2]);
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(84), ctx.gpr[2]);
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_08921FBC;
      }
      goto L_08921F04;
    }
L_08921F04:
    ctx.set_gpr(4, ctx.gpr[19] + 0u);
    ctx.set_gpr(31, 0x08921F10u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0072_entry, 72u, 568u, 0x089267ECu>(ctx, &aot_mem) && ctx.pc == 0x08921F10u) goto L_08921F10;
    return;
L_08921F10:
    ctx.set_gpr(4, ctx.gpr[2] + 0u);
    ctx.set_gpr(31, 0x08921F1Cu);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0053_entry, 53u, 11u, 0x088D80BCu>(ctx, &aot_mem) && ctx.pc == 0x08921F1Cu) goto L_08921F1C;
    return;
L_08921F1C:
    ctx.set_gpr(20, ctx.gpr[2] + 0u);
    rt.memory().aot_store8(ctx.gpr[2] + static_cast<std::uint32_t>(38), static_cast<std::uint8_t>(0u));
    ctx.set_gpr(4, ctx.gpr[20] + 0u);
    ctx.set_gpr(5, 2228u << 16u);
    ctx.set_gpr(5, ctx.gpr[5] + static_cast<std::uint32_t>(-11852));
    ctx.set_gpr(6, 0u + 0u);
    ctx.set_gpr(7, 0u + static_cast<std::uint32_t>(-1));
    ctx.set_gpr(8, ctx.gpr[17] + 0u);
    ctx.set_gpr(31, 0x08921F44u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0079_entry, 79u, 547u, 0x0894265Cu>(ctx, &aot_mem) && ctx.pc == 0x08921F44u) goto L_08921F44;
    return;
L_08921F44:
    rt.memory().aot_store16(ctx.gpr[20] + static_cast<std::uint32_t>(18), static_cast<std::uint16_t>(ctx.gpr[22]));
    ctx.set_gpr(2, 0u + static_cast<std::uint32_t>(1));
    rt.memory().aot_store16(ctx.gpr[20] + static_cast<std::uint32_t>(20), static_cast<std::uint16_t>(ctx.gpr[2]));
    ctx.set_gpr(4, ctx.gpr[20] + 0u);
    ctx.set_gpr(25, rt.memory().aot_load32(ctx.gpr[20] + static_cast<std::uint32_t>(0)));
    ctx.set_gpr(25, rt.memory().aot_load32(ctx.gpr[25] + static_cast<std::uint32_t>(112)));
    jump_target = ctx.gpr[25];
    ctx.set_gpr(31, 0x08921F64u);
    // nop
    ctx.pc = jump_target;
    if (rt.invoke_chained_call(ctx, &aot_mem) && ctx.pc == 0x08921F64u) goto L_08921F64;
    return;
L_08921F64:
    ctx.set_gpr(3, rt.memory().aot_load16(ctx.gpr[17] + static_cast<std::uint32_t>(88)));
    ctx.set_gpr(1, static_cast<std::int32_t>(ctx.gpr[3]) < static_cast<std::int32_t>(ctx.gpr[2]) ? 1u : 0u);
    { const bool branch_taken = ctx.gpr[1] == 0u;
    // nop
      if (branch_taken) {
          goto L_08921F78;
      }
      goto L_08921F74;
    }
L_08921F74:
    ctx.set_gpr(3, ctx.gpr[2] + 0u);
    goto L_08921F78;
L_08921F78:
    rt.memory().aot_store16(ctx.gpr[17] + static_cast<std::uint32_t>(88), static_cast<std::uint16_t>(ctx.gpr[3]));
    ctx.set_gpr(3, rt.memory().aot_load32(ctx.gpr[17] + static_cast<std::uint32_t>(72)));
    ctx.set_gpr(3, ctx.gpr[2] + ctx.gpr[3]);
    ctx.set_gpr(3, ctx.gpr[3] + static_cast<std::uint32_t>(-1));
    ctx.set_gpr(2, ctx.gpr[2] + static_cast<std::uint32_t>(-1));
    ctx.set_gpr(2, ~(ctx.gpr[2] | 0u));
    ctx.set_gpr(2, ctx.gpr[2] & ctx.gpr[3]);
    rt.memory().aot_store32(ctx.gpr[20] + static_cast<std::uint32_t>(8), ctx.gpr[2]);
    ctx.set_gpr(4, ctx.gpr[17] + 0u);
    ctx.set_gpr(5, ctx.gpr[20] + 0u);
    ctx.set_gpr(31, 0x08921FA8u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0080_entry, 80u, 142u, 0x08944AA4u>(ctx, &aot_mem) && ctx.pc == 0x08921FA8u) goto L_08921FA8;
    return;
L_08921FA8:
    ctx.set_gpr(3, rt.memory().aot_load32(ctx.gpr[20] + static_cast<std::uint32_t>(8)));
    ctx.set_gpr(2, rt.memory().aot_load16(ctx.gpr[20] + static_cast<std::uint32_t>(20)));
    ctx.set_gpr(2, ctx.gpr[3] + ctx.gpr[2]);
    rt.memory().aot_store32(ctx.gpr[17] + static_cast<std::uint32_t>(72), ctx.gpr[2]);
    ctx.set_gpr(22, ctx.gpr[22] + static_cast<std::uint32_t>(1));
    goto L_08921FBC;
L_08921FBC:
    ctx.set_gpr(2, rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(84)));
    ctx.set_gpr(2, static_cast<std::int32_t>(ctx.gpr[22]) < static_cast<std::int32_t>(ctx.gpr[2]) ? 1u : 0u);
    { const bool branch_taken = ctx.gpr[2] != 0u;
    // nop
      if (branch_taken) {
          goto L_08921F04;
      }
      goto L_08921FCC;
    }
L_08921FCC:
    ctx.set_gpr(5, static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int16_t>(rt.memory().aot_load16(ctx.gpr[16] + static_cast<std::uint32_t>(0))))));
    ctx.set_gpr(4, ctx.gpr[19] + 0u);
    ctx.set_gpr(31, 0x08921FDCu);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0072_entry, 72u, 61u, 0x08924400u>(ctx, &aot_mem) && ctx.pc == 0x08921FDCu) goto L_08921FDC;
    return;
L_08921FDC:
    ctx.set_gpr(4, ctx.gpr[2] + 0u);
    ctx.set_gpr(25, rt.memory().aot_load32(ctx.gpr[2] + static_cast<std::uint32_t>(0)));
    ctx.set_gpr(25, rt.memory().aot_load32(ctx.gpr[25] + static_cast<std::uint32_t>(88)));
    jump_target = ctx.gpr[25];
    ctx.set_gpr(31, 0x08921FF0u);
    // nop
    ctx.pc = jump_target;
    if (rt.invoke_chained_call(ctx, &aot_mem) && ctx.pc == 0x08921FF0u) goto L_08921FF0;
    return;
L_08921FF0:
    ctx.set_gpr(20, ctx.gpr[2] + 0u);
    ctx.set_gpr(31, 0x08921FFCu);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0074_entry, 74u, 428u, 0x0892DD50u>(ctx, &aot_mem) && ctx.pc == 0x08921FFCu) goto L_08921FFC;
    return;
L_08921FFC:
    ctx.set_gpr(4, ctx.gpr[20] + 0u);
    ctx.set_gpr(5, ctx.gpr[2] + 0u);
    ctx.set_gpr(31, 0x0892200Cu);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0080_entry, 80u, 50u, 0x089443D4u>(ctx, &aot_mem) && ctx.pc == 0x0892200Cu) goto L_0892200C;
    return;
L_0892200C:
    ctx.set_gpr(20, ctx.gpr[2] + 0u);
    ctx.set_gpr(4, ctx.gpr[20] + 0u);
    ctx.set_gpr(5, 2228u << 16u);
    ctx.set_gpr(5, ctx.gpr[5] + static_cast<std::uint32_t>(-11840));
    ctx.set_gpr(6, 0u + 0u);
    ctx.set_gpr(7, 0u + static_cast<std::uint32_t>(-1));
    ctx.set_gpr(8, ctx.gpr[17] + 0u);
    ctx.set_gpr(31, 0x08922030u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0079_entry, 79u, 547u, 0x0894265Cu>(ctx, &aot_mem) && ctx.pc == 0x08922030u) goto L_08922030;
    return;
L_08922030:
    ctx.set_gpr(2, rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(84)));
    rt.memory().aot_store16(ctx.gpr[20] + static_cast<std::uint32_t>(18), static_cast<std::uint16_t>(ctx.gpr[2]));
    ctx.set_gpr(2, static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int16_t>(rt.memory().aot_load16(ctx.gpr[16] + static_cast<std::uint32_t>(4))))));
    rt.memory().aot_store16(ctx.gpr[20] + static_cast<std::uint32_t>(20), static_cast<std::uint16_t>(ctx.gpr[2]));
    ctx.set_gpr(4, ctx.gpr[20] + 0u);
    ctx.set_gpr(25, rt.memory().aot_load32(ctx.gpr[20] + static_cast<std::uint32_t>(0)));
    ctx.set_gpr(25, rt.memory().aot_load32(ctx.gpr[25] + static_cast<std::uint32_t>(112)));
    jump_target = ctx.gpr[25];
    ctx.set_gpr(31, 0x08922054u);
    // nop
    ctx.pc = jump_target;
    if (rt.invoke_chained_call(ctx, &aot_mem) && ctx.pc == 0x08922054u) goto L_08922054;
    return;
L_08922054:
    ctx.set_gpr(3, rt.memory().aot_load16(ctx.gpr[17] + static_cast<std::uint32_t>(88)));
    ctx.set_gpr(1, static_cast<std::int32_t>(ctx.gpr[3]) < static_cast<std::int32_t>(ctx.gpr[2]) ? 1u : 0u);
    { const bool branch_taken = ctx.gpr[1] == 0u;
    // nop
      if (branch_taken) {
          goto L_08922068;
      }
      goto L_08922064;
    }
L_08922064:
    ctx.set_gpr(3, ctx.gpr[2] + 0u);
    goto L_08922068;
L_08922068:
    rt.memory().aot_store16(ctx.gpr[17] + static_cast<std::uint32_t>(88), static_cast<std::uint16_t>(ctx.gpr[3]));
    ctx.set_gpr(3, rt.memory().aot_load32(ctx.gpr[17] + static_cast<std::uint32_t>(72)));
    ctx.set_gpr(3, ctx.gpr[2] + ctx.gpr[3]);
    ctx.set_gpr(3, ctx.gpr[3] + static_cast<std::uint32_t>(-1));
    ctx.set_gpr(2, ctx.gpr[2] + static_cast<std::uint32_t>(-1));
    ctx.set_gpr(2, ~(ctx.gpr[2] | 0u));
    ctx.set_gpr(2, ctx.gpr[2] & ctx.gpr[3]);
    rt.memory().aot_store32(ctx.gpr[20] + static_cast<std::uint32_t>(8), ctx.gpr[2]);
    ctx.set_gpr(4, ctx.gpr[17] + 0u);
    ctx.set_gpr(5, ctx.gpr[20] + 0u);
    ctx.set_gpr(31, 0x08922098u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0080_entry, 80u, 142u, 0x08944AA4u>(ctx, &aot_mem) && ctx.pc == 0x08922098u) goto L_08922098;
    return;
L_08922098:
    ctx.set_gpr(3, rt.memory().aot_load32(ctx.gpr[20] + static_cast<std::uint32_t>(8)));
    ctx.set_gpr(2, rt.memory().aot_load16(ctx.gpr[20] + static_cast<std::uint32_t>(20)));
    ctx.set_gpr(2, ctx.gpr[3] + ctx.gpr[2]);
    rt.memory().aot_store32(ctx.gpr[17] + static_cast<std::uint32_t>(72), ctx.gpr[2]);
    ctx.set_gpr(2, ctx.gpr[30] << 1u);
    ctx.set_gpr(16, ctx.gpr[16] + ctx.gpr[2]);
    ctx.set_gpr(22, ctx.gpr[22] + static_cast<std::uint32_t>(1));
    goto L_089220B4;
L_089220B4:
    ctx.set_gpr(2, rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(124)));
    ctx.set_gpr(2, ctx.gpr[2] + static_cast<std::uint32_t>(1));
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(124), ctx.gpr[2]);
    goto L_089220C0;
L_089220C0:
    ctx.set_gpr(3, rt.memory().aot_load32(ctx.gpr[18] + static_cast<std::uint32_t>(12)));
    ctx.set_gpr(2, rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(124)));
    ctx.set_gpr(2, static_cast<std::int32_t>(ctx.gpr[2]) < static_cast<std::int32_t>(ctx.gpr[3]) ? 1u : 0u);
    { const bool branch_taken = ctx.gpr[2] != 0u;
    // nop
      if (branch_taken) {
          goto L_08921EAC;
      }
      goto L_089220D4;
    }
L_089220D4:
    ctx.set_gpr(4, rt.memory().aot_load16(ctx.gpr[17] + static_cast<std::uint32_t>(88)));
    ctx.set_gpr(2, rt.memory().aot_load32(ctx.gpr[17] + static_cast<std::uint32_t>(72)));
    ctx.set_gpr(2, ctx.gpr[2] + ctx.gpr[4]);
    ctx.set_gpr(3, ctx.gpr[2] + static_cast<std::uint32_t>(-1));
    ctx.set_gpr(2, ctx.gpr[4] + static_cast<std::uint32_t>(-1));
    ctx.set_gpr(2, ~(ctx.gpr[2] | 0u));
    ctx.set_gpr(2, ctx.gpr[2] & ctx.gpr[3]);
    rt.memory().aot_store32(ctx.gpr[17] + static_cast<std::uint32_t>(72), ctx.gpr[2]);
    ctx.set_gpr(2, rt.memory().aot_load32(ctx.gpr[17] + static_cast<std::uint32_t>(36)));
    ctx.set_gpr(2, ctx.gpr[2] | 4u);
    rt.memory().aot_store32(ctx.gpr[17] + static_cast<std::uint32_t>(36), ctx.gpr[2]);
    ctx.set_gpr(31, 0x08922108u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0064_entry, 64u, 444u, 0x08905FF0u>(ctx, &aot_mem) && ctx.pc == 0x08922108u) goto L_08922108;
    return;
L_08922108:
    ctx.set_gpr(4, ctx.gpr[2] + 0u);
    ctx.set_gpr(5, ctx.gpr[17] + 0u);
    ctx.set_gpr(31, 0x08922118u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0064_entry, 64u, 688u, 0x08906FFCu>(ctx, &aot_mem) && ctx.pc == 0x08922118u) goto L_08922118;
    return;
L_08922118:
    ctx.set_gpr(31, 0x08922120u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0064_entry, 64u, 444u, 0x08905FF0u>(ctx, &aot_mem) && ctx.pc == 0x08922120u) goto L_08922120;
    return;
L_08922120:
    ctx.set_gpr(4, ctx.gpr[2] + 0u);
    ctx.set_gpr(5, ctx.gpr[17] + 0u);
    ctx.set_gpr(31, 0x08922130u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0064_entry, 64u, 705u, 0x08907134u>(ctx, &aot_mem) && ctx.pc == 0x08922130u) goto L_08922130;
    return;
L_08922130:
    ctx.set_gpr(20, 0u + 0u);
    ctx.set_gpr(22, rt.memory().aot_load32(ctx.gpr[17] + static_cast<std::uint32_t>(40)));
    ctx.set_gpr(16, 0u + 0u);
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_08922174;
      }
      goto L_08922144;
    }
L_08922144:
    ctx.set_gpr(3, ctx.gpr[16] << 2u);
    ctx.set_gpr(2, rt.memory().aot_load32(ctx.gpr[22] + static_cast<std::uint32_t>(8)));
    ctx.set_gpr(2, ctx.gpr[2] + ctx.gpr[3]);
    ctx.set_gpr(3, rt.memory().aot_load32(ctx.gpr[2] + static_cast<std::uint32_t>(0)));
    ctx.set_gpr(2, rt.memory().aot_load8(ctx.gpr[3] + static_cast<std::uint32_t>(38)));
    { const bool branch_taken = ctx.gpr[2] == 0u;
    // nop
      if (branch_taken) {
          goto L_08922170;
      }
      goto L_08922160;
    }
L_08922160:
    ctx.set_gpr(2, rt.memory().aot_load8(ctx.gpr[3] + static_cast<std::uint32_t>(37)));
    { const bool branch_taken = ctx.gpr[2] != 0u;
    // nop
      if (branch_taken) {
          goto L_08922170;
      }
      goto L_0892216C;
    }
L_0892216C:
    ctx.set_gpr(20, ctx.gpr[20] + static_cast<std::uint32_t>(1));
    goto L_08922170;
L_08922170:
    ctx.set_gpr(16, ctx.gpr[16] + static_cast<std::uint32_t>(1));
    goto L_08922174;
L_08922174:
    ctx.set_gpr(4, ctx.gpr[17] + 0u);
    ctx.set_gpr(31, 0x08922180u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0080_entry, 80u, 236u, 0x089451A8u>(ctx, &aot_mem) && ctx.pc == 0x08922180u) goto L_08922180;
    return;
L_08922180:
    ctx.set_gpr(2, static_cast<std::int32_t>(ctx.gpr[16]) < static_cast<std::int32_t>(ctx.gpr[2]) ? 1u : 0u);
    { const bool branch_taken = ctx.gpr[2] != 0u;
    // nop
      if (branch_taken) {
          goto L_08922144;
      }
      goto L_0892218C;
    }
L_0892218C:
    ctx.set_gpr(2, rt.memory().aot_load32(ctx.gpr[18] + static_cast<std::uint32_t>(0)));
    ctx.set_gpr(16, ctx.gpr[21] + ctx.gpr[2]);
    ctx.set_gpr(4, ctx.gpr[19] + 0u);
    ctx.set_gpr(31, 0x089221A0u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0072_entry, 72u, 568u, 0x089267ECu>(ctx, &aot_mem) && ctx.pc == 0x089221A0u) goto L_089221A0;
    return;
L_089221A0:
    ctx.set_gpr(4, ctx.gpr[2] + 0u);
    ctx.set_gpr(31, 0x089221ACu);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0060_entry, 60u, 699u, 0x088F7B34u>(ctx, &aot_mem) && ctx.pc == 0x089221ACu) goto L_089221AC;
    return;
L_089221AC:
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(148), ctx.gpr[2]);
    ctx.set_gpr(4, rt.memory().aot_load32(ctx.gpr[19] + static_cast<std::uint32_t>(64)));
    ctx.set_gpr(5, ctx.gpr[2] + 0u);
    ctx.set_gpr(31, 0x089221C0u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0081_entry, 81u, 299u, 0x089494E0u>(ctx, &aot_mem) && ctx.pc == 0x089221C0u) goto L_089221C0;
    return;
L_089221C0:
    ctx.set_gpr(2, rt.memory().aot_load32(ctx.gpr[18] + static_cast<std::uint32_t>(12)));
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(80), ctx.gpr[2]);
    ctx.set_gpr(2, ctx.gpr[20] - ctx.gpr[2]);
    ctx.set_gpr(2, static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int16_t>(ctx.gpr[2]))));
    rt.memory().aot_store16(ctx.gpr[29] + static_cast<std::uint32_t>(120), static_cast<std::uint16_t>(ctx.gpr[2]));
    ctx.set_gpr(2, ctx.gpr[2] + 0u);
    { const bool branch_taken = static_cast<std::int32_t>(ctx.gpr[2]) >= 0;
    // nop
      if (branch_taken) {
          goto L_089221E4;
      }
      goto L_089221E0;
    }
L_089221E0:
    rt.memory().aot_store16(ctx.gpr[29] + static_cast<std::uint32_t>(120), static_cast<std::uint16_t>(0u));
    goto L_089221E4;
L_089221E4:
    ctx.set_gpr(20, 0u + 0u);
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_089222C4;
      }
      goto L_089221F0;
    }
L_089221F0:
    ctx.set_gpr(22, static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int16_t>(ctx.gpr[20]))));
    ctx.set_gpr(5, ctx.gpr[18] + 0u);
    ctx.set_gpr(3, rt.memory().aot_load32(ctx.gpr[18] + static_cast<std::uint32_t>(12)));
    ctx.set_gpr(4, rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(132)));
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_08922224;
      }
      goto L_08922208;
    }
L_08922208:
    ctx.set_gpr(4, rt.memory().aot_load32(ctx.gpr[5] + static_cast<std::uint32_t>(16)));
    { const std::int64_t product = static_cast<std::int64_t>(static_cast<std::int32_t>(ctx.gpr[4])) * static_cast<std::int64_t>(static_cast<std::int32_t>(ctx.gpr[23])); ctx.lo = static_cast<std::uint32_t>(product); ctx.hi = static_cast<std::uint32_t>(static_cast<std::uint64_t>(product) >> 32u); }
    ctx.set_gpr(2, ctx.lo);
    ctx.set_gpr(3, ctx.gpr[2] << 2u);
    ctx.set_gpr(2, rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(108)));
    ctx.set_gpr(5, ctx.gpr[2] + ctx.gpr[3]);
    ctx.set_gpr(3, rt.memory().aot_load32(ctx.gpr[5] + static_cast<std::uint32_t>(12)));
    goto L_08922224;
L_08922224:
    ctx.set_gpr(2, static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int16_t>(ctx.gpr[22]))));
    ctx.set_gpr(2, static_cast<std::int32_t>(ctx.gpr[2]) < static_cast<std::int32_t>(ctx.gpr[3]) ? 1u : 0u);
    { const bool branch_taken = ctx.gpr[2] != 0u;
    // nop
      if (branch_taken) {
          goto L_08922208;
      }
      goto L_08922234;
    }
L_08922234:
    ctx.set_gpr(2, static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int16_t>(rt.memory().aot_load16(ctx.gpr[29] + static_cast<std::uint32_t>(120))))));
    ctx.set_gpr(2, ctx.gpr[2] + 0u);
    { const bool branch_taken = ctx.gpr[2] == 0u;
    // nop
      if (branch_taken) {
          goto L_08922260;
      }
      goto L_08922244;
    }
L_08922244:
    ctx.set_gpr(2, rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(156)));
    ctx.set_gpr(3, ctx.gpr[4] << 1u);
    ctx.set_gpr(2, rt.memory().aot_load32(ctx.gpr[2] + static_cast<std::uint32_t>(16)));
    ctx.set_gpr(2, ctx.gpr[2] + ctx.gpr[3]);
    ctx.set_gpr(2, static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int16_t>(rt.memory().aot_load16(ctx.gpr[2] + static_cast<std::uint32_t>(0))))));
    ctx.set_gpr(2, ctx.gpr[22] + ctx.gpr[2]);
    ctx.set_gpr(22, static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int16_t>(ctx.gpr[2]))));
    goto L_08922260;
L_08922260:
    ctx.set_gpr(17, rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(148)));
    ctx.set_gpr(2, rt.memory().aot_load32(ctx.gpr[17] + static_cast<std::uint32_t>(8)));
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(76), ctx.gpr[2]);
    ctx.set_gpr(3, rt.memory().aot_load32(ctx.gpr[17] + static_cast<std::uint32_t>(12)));
    ctx.set_gpr(1, static_cast<std::int32_t>(ctx.gpr[2]) < static_cast<std::int32_t>(ctx.gpr[3]) ? 1u : 0u);
    { const bool branch_taken = ctx.gpr[1] == 0u;
    // nop
      if (branch_taken) {
          goto L_08922290;
      }
      goto L_0892227C;
    }
L_0892227C:
    ctx.set_gpr(2, rt.memory().aot_load32(ctx.gpr[17] + static_cast<std::uint32_t>(8)));
    ctx.set_gpr(2, ctx.gpr[2] + static_cast<std::uint32_t>(1));
    rt.memory().aot_store32(ctx.gpr[17] + static_cast<std::uint32_t>(8), ctx.gpr[2]);
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_089222A4;
      }
      goto L_08922290;
    }
L_08922290:
    ctx.set_gpr(5, ctx.gpr[2] + static_cast<std::uint32_t>(1));
    ctx.set_gpr(4, ctx.gpr[17] + 0u);
    ctx.set_gpr(6, 0u + static_cast<std::uint32_t>(2));
    ctx.set_gpr(31, 0x089222A4u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0066_entry, 66u, 795u, 0x0890FB1Cu>(ctx, &aot_mem) && ctx.pc == 0x089222A4u) goto L_089222A4;
    return;
L_089222A4:
    ctx.set_gpr(2, rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(76)));
    ctx.set_gpr(3, ctx.gpr[2] << 1u);
    ctx.set_gpr(2, rt.memory().aot_load32(ctx.gpr[17] + static_cast<std::uint32_t>(16)));
    ctx.set_gpr(2, ctx.gpr[2] + ctx.gpr[3]);
    rt.memory().aot_store16(ctx.gpr[2] + static_cast<std::uint32_t>(0), static_cast<std::uint16_t>(ctx.gpr[22]));
    ctx.set_gpr(2, ctx.gpr[30] << 1u);
    ctx.set_gpr(16, ctx.gpr[16] + ctx.gpr[2]);
    ctx.set_gpr(20, ctx.gpr[20] + static_cast<std::uint32_t>(1));
    goto L_089222C4;
L_089222C4:
    ctx.set_gpr(2, rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(80)));
    ctx.set_gpr(2, static_cast<std::int32_t>(ctx.gpr[20]) < static_cast<std::int32_t>(ctx.gpr[2]) ? 1u : 0u);
    { const bool branch_taken = ctx.gpr[2] != 0u;
    // nop
      if (branch_taken) {
          goto L_089221F0;
      }
      goto L_089222D4;
    }
L_089222D4:
    ctx.set_gpr(16, rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(156)));
    ctx.set_gpr(17, rt.memory().aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(8)));
    ctx.set_gpr(2, rt.memory().aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(12)));
    ctx.set_gpr(1, static_cast<std::int32_t>(ctx.gpr[17]) < static_cast<std::int32_t>(ctx.gpr[2]) ? 1u : 0u);
    { const bool branch_taken = ctx.gpr[1] == 0u;
    // nop
      if (branch_taken) {
          goto L_08922300;
      }
      goto L_089222EC;
    }
L_089222EC:
    ctx.set_gpr(2, rt.memory().aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(8)));
    ctx.set_gpr(2, ctx.gpr[2] + static_cast<std::uint32_t>(1));
    rt.memory().aot_store32(ctx.gpr[16] + static_cast<std::uint32_t>(8), ctx.gpr[2]);
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_08922314;
      }
      goto L_08922300;
    }
L_08922300:
    ctx.set_gpr(5, ctx.gpr[17] + static_cast<std::uint32_t>(1));
    ctx.set_gpr(4, ctx.gpr[16] + 0u);
    ctx.set_gpr(6, 0u + static_cast<std::uint32_t>(2));
    ctx.set_gpr(31, 0x08922314u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0066_entry, 66u, 795u, 0x0890FB1Cu>(ctx, &aot_mem) && ctx.pc == 0x08922314u) goto L_08922314;
    return;
L_08922314:
    ctx.set_gpr(3, ctx.gpr[17] << 1u);
    ctx.set_gpr(2, rt.memory().aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(16)));
    ctx.set_gpr(3, ctx.gpr[2] + ctx.gpr[3]);
    ctx.set_gpr(2, static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int16_t>(rt.memory().aot_load16(ctx.gpr[29] + static_cast<std::uint32_t>(120))))));
    rt.memory().aot_store16(ctx.gpr[3] + static_cast<std::uint32_t>(0), static_cast<std::uint16_t>(ctx.gpr[2]));
    ctx.set_gpr(4, rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(148)));
    { const bool branch_taken = ctx.gpr[4] == 0u;
    // nop
      if (branch_taken) {
          goto L_08922390;
      }
      goto L_08922334;
    }
L_08922334:
    ctx.set_gpr(31, 0x0892233Cu);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0014_entry, 14u, 257u, 0x0883D454u>(ctx, &aot_mem) && ctx.pc == 0x0892233Cu) goto L_0892233C;
    return;
L_0892233C:
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_08922390;
      }
      goto L_08922344;
    }
L_08922344:
    ctx.set_gpr(2, rt.memory().aot_load8(ctx.gpr[29] + static_cast<std::uint32_t>(128)));
    { const bool branch_taken = ctx.gpr[2] == 0u;
    // nop
      if (branch_taken) {
          goto L_08922370;
      }
      goto L_08922350;
    }
L_08922350:
    ctx.set_gpr(4, rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(156)));
    { const bool branch_taken = ctx.gpr[4] == 0u;
    // nop
      if (branch_taken) {
          goto L_08922364;
      }
      goto L_0892235C;
    }
L_0892235C:
    ctx.set_gpr(31, 0x08922364u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0014_entry, 14u, 257u, 0x0883D454u>(ctx, &aot_mem) && ctx.pc == 0x08922364u) goto L_08922364;
    return;
L_08922364:
    ctx.set_gpr(2, 0u + static_cast<std::uint32_t>(1));
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_08922770;
      }
      goto L_08922370;
    }
L_08922370:
    ctx.set_gpr(4, rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(156)));
    { const bool branch_taken = ctx.gpr[4] == 0u;
    // nop
      if (branch_taken) {
          goto L_08922384;
      }
      goto L_0892237C;
    }
L_0892237C:
    ctx.set_gpr(31, 0x08922384u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0014_entry, 14u, 257u, 0x0883D454u>(ctx, &aot_mem) && ctx.pc == 0x08922384u) goto L_08922384;
    return;
L_08922384:
    ctx.set_gpr(2, 0u + static_cast<std::uint32_t>(1));
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_08922770;
      }
      goto L_08922390;
    }
L_08922390:
    ctx.set_gpr(2, rt.memory().aot_load32(ctx.gpr[18] + static_cast<std::uint32_t>(0)));
    ctx.set_gpr(21, ctx.gpr[21] + ctx.gpr[2]);
    ctx.set_gpr(2, rt.memory().aot_load8(ctx.gpr[29] + static_cast<std::uint32_t>(128)));
    { const bool branch_taken = ctx.gpr[2] == 0u;
    // nop
      if (branch_taken) {
          goto L_089223B8;
      }
      goto L_089223A4;
    }
L_089223A4:
    ctx.set_gpr(2, rt.memory().aot_load32(ctx.gpr[18] + static_cast<std::uint32_t>(12)));
    ctx.set_gpr(2, ctx.gpr[2] << 1u);
    { const std::int64_t product = static_cast<std::int64_t>(static_cast<std::int32_t>(ctx.gpr[30])) * static_cast<std::int64_t>(static_cast<std::int32_t>(ctx.gpr[2])); ctx.lo = static_cast<std::uint32_t>(product); ctx.hi = static_cast<std::uint32_t>(static_cast<std::uint64_t>(product) >> 32u); }
    ctx.set_gpr(2, ctx.lo);
    ctx.set_gpr(21, ctx.gpr[21] + ctx.gpr[2]);
    goto L_089223B8;
L_089223B8:
    ctx.set_gpr(2, ctx.gpr[23] << 2u);
    ctx.set_gpr(18, ctx.gpr[18] + ctx.gpr[2]);
    ctx.set_gpr(2, rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(132)));
    ctx.set_gpr(2, ctx.gpr[2] + static_cast<std::uint32_t>(1));
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(132), ctx.gpr[2]);
    goto L_089223CC;
L_089223CC:
    ctx.set_gpr(5, rt.memory().aot_load32(ctx.gpr[19] + static_cast<std::uint32_t>(164)));
    ctx.set_gpr(2, rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(132)));
    ctx.set_gpr(2, static_cast<std::int32_t>(ctx.gpr[2]) < static_cast<std::int32_t>(ctx.gpr[5]) ? 1u : 0u);
    { const bool branch_taken = ctx.gpr[2] != 0u;
    // nop
      if (branch_taken) {
          goto L_08921AA0;
      }
      goto L_089223E0;
    }
L_089223E0:
    ctx.set_gpr(2, rt.memory().aot_load8(ctx.gpr[19] + static_cast<std::uint32_t>(116)));
    { const bool branch_taken = ctx.gpr[2] == 0u;
    // nop
      if (branch_taken) {
          goto L_08922754;
      }
      goto L_089223EC;
    }
L_089223EC:
    ctx.set_gpr(4, 2228u << 16u);
    ctx.set_gpr(4, ctx.gpr[4] + static_cast<std::uint32_t>(-11828));
    ctx.set_gpr(31, 0x089223FCu);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0084_entry, 84u, 441u, 0x08955DC4u>(ctx, &aot_mem) && ctx.pc == 0x089223FCu) goto L_089223FC;
    return;
L_089223FC:
    ctx.set_gpr(4, ctx.gpr[19] + 0u);
    ctx.set_gpr(31, 0x08922408u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0072_entry, 72u, 568u, 0x089267ECu>(ctx, &aot_mem) && ctx.pc == 0x08922408u) goto L_08922408;
    return;
L_08922408:
    ctx.set_gpr(4, ctx.gpr[2] + 0u);
    ctx.set_gpr(31, 0x08922414u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0055_entry, 55u, 219u, 0x088E112Cu>(ctx, &aot_mem) && ctx.pc == 0x08922414u) goto L_08922414;
    return;
L_08922414:
    ctx.set_gpr(4, ctx.gpr[19] + static_cast<std::uint32_t>(112));
    ctx.set_gpr(5, ctx.gpr[2] + 0u);
    ctx.set_gpr(31, 0x08922424u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0085_entry, 85u, 67u, 0x0895853Cu>(ctx, &aot_mem) && ctx.pc == 0x08922424u) goto L_08922424;
    return;
L_08922424:
    ctx.set_gpr(5, rt.memory().aot_load32(ctx.gpr[19] + static_cast<std::uint32_t>(164)));
    ctx.set_gpr(4, rt.memory().aot_load32(ctx.gpr[19] + static_cast<std::uint32_t>(112)));
    { const bool branch_taken = static_cast<std::int32_t>(ctx.gpr[5]) < 0;
    // nop
      if (branch_taken) {
          goto L_0892245C;
      }
      goto L_08922434;
    }
L_08922434:
    ctx.set_gpr(2, rt.memory().aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(12)));
    ctx.set_gpr(1, static_cast<std::int32_t>(ctx.gpr[2]) < static_cast<std::int32_t>(ctx.gpr[5]) ? 1u : 0u);
    { const bool branch_taken = ctx.gpr[1] != 0u;
    // nop
      if (branch_taken) {
          goto L_08922450;
      }
      goto L_08922444;
    }
L_08922444:
    rt.memory().aot_store32(ctx.gpr[4] + static_cast<std::uint32_t>(8), ctx.gpr[5]);
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_0892245C;
      }
      goto L_08922450;
    }
L_08922450:
    ctx.set_gpr(6, 0u + static_cast<std::uint32_t>(16));
    ctx.set_gpr(31, 0x0892245Cu);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0066_entry, 66u, 795u, 0x0890FB1Cu>(ctx, &aot_mem) && ctx.pc == 0x0892245Cu) goto L_0892245C;
    return;
L_0892245C:
    ctx.set_gpr(3, rt.memory().aot_load32(ctx.gpr[19] + static_cast<std::uint32_t>(112)));
    ctx.set_gpr(2, rt.memory().aot_load32(ctx.gpr[3] + static_cast<std::uint32_t>(8)));
    { const bool branch_taken = ctx.gpr[2] == 0u;
    // nop
      if (branch_taken) {
          goto L_08922480;
      }
      goto L_0892246C;
    }
L_0892246C:
    ctx.set_gpr(6, ctx.gpr[2] << 4u);
    ctx.set_gpr(4, rt.memory().aot_load32(ctx.gpr[3] + static_cast<std::uint32_t>(16)));
    ctx.set_gpr(5, 0u + 0u);
    ctx.set_gpr(31, 0x08922480u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0003_entry, 3u, 719u, 0x08812EE8u>(ctx, &aot_mem) && ctx.pc == 0x08922480u) goto L_08922480;
    return;
L_08922480:
    ctx.set_gpr(2, rt.memory().aot_load32(ctx.gpr[19] + static_cast<std::uint32_t>(112)));
    ctx.set_gpr(2, rt.memory().aot_load32(ctx.gpr[2] + static_cast<std::uint32_t>(16)));
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(72), ctx.gpr[2]);
    ctx.set_gpr(2, rt.memory().aot_load32(ctx.gpr[19] + static_cast<std::uint32_t>(232)));
    ctx.set_gpr(2, rt.memory().aot_load32(ctx.gpr[2] + static_cast<std::uint32_t>(16)));
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(68), ctx.gpr[2]);
    ctx.set_gpr(2, 2245u << 16u);
    ctx.set_gpr(4, rt.memory().aot_load32(ctx.gpr[2] + static_cast<std::uint32_t>(31368)));
    ctx.set_gpr(31, 0x089224A8u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0080_entry, 80u, 236u, 0x089451A8u>(ctx, &aot_mem) && ctx.pc == 0x089224A8u) goto L_089224A8;
    return;
L_089224A8:
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(116), ctx.gpr[2]);
    ctx.set_gpr(21, 0u + 0u);
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_08922744;
      }
      goto L_089224B8;
    }
L_089224B8:
    ctx.set_gpr(4, ctx.gpr[19] + 0u);
    ctx.set_gpr(31, 0x089224C4u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0072_entry, 72u, 568u, 0x089267ECu>(ctx, &aot_mem) && ctx.pc == 0x089224C4u) goto L_089224C4;
    return;
L_089224C4:
    ctx.set_gpr(4, ctx.gpr[2] + 0u);
    ctx.set_gpr(31, 0x089224D0u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0061_entry, 61u, 199u, 0x088F9198u>(ctx, &aot_mem) && ctx.pc == 0x089224D0u) goto L_089224D0;
    return;
L_089224D0:
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(144), ctx.gpr[2]);
    ctx.set_gpr(4, ctx.gpr[21] << 4u);
    ctx.set_gpr(3, rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(72)));
    ctx.set_gpr(3, ctx.gpr[3] + ctx.gpr[4]);
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(64), ctx.gpr[3]);
    ctx.set_gpr(4, ctx.gpr[3] + static_cast<std::uint32_t>(12));
    ctx.set_gpr(5, ctx.gpr[2] + 0u);
    ctx.set_gpr(31, 0x089224F4u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0085_entry, 85u, 61u, 0x089584C4u>(ctx, &aot_mem) && ctx.pc == 0x089224F4u) goto L_089224F4;
    return;
L_089224F4:
    ctx.set_gpr(17, ctx.gpr[21] << 2u);
    ctx.set_gpr(2, rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(68)));
    ctx.set_gpr(2, ctx.gpr[2] + ctx.gpr[17]);
    ctx.set_gpr(20, rt.memory().aot_load32(ctx.gpr[2] + static_cast<std::uint32_t>(0)));
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_08922518;
      }
      goto L_0892250C;
    }
L_0892250C:
    jump_target = ctx.gpr[2];
    ctx.set_gpr(31, 0x08922514u);
    // nop
    ctx.pc = jump_target;
    if (rt.invoke_chained_call(ctx, &aot_mem) && ctx.pc == 0x08922514u) goto L_08922514;
    return;
L_08922514:
    ctx.set_gpr(20, ctx.gpr[2] + 0u);
    goto L_08922518;
L_08922518:
    ctx.set_gpr(2, rt.memory().aot_load32(ctx.gpr[20] + static_cast<std::uint32_t>(60)));
    { const bool branch_taken = ctx.gpr[2] != 0u;
    // nop
      if (branch_taken) {
          goto L_0892250C;
      }
      goto L_08922524;
    }
L_08922524:
    ctx.set_gpr(4, ctx.gpr[20] + 0u);
    ctx.set_gpr(31, 0x08922530u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0080_entry, 80u, 236u, 0x089451A8u>(ctx, &aot_mem) && ctx.pc == 0x08922530u) goto L_08922530;
    return;
L_08922530:
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(60), ctx.gpr[2]);
    ctx.set_gpr(4, rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(144)));
    ctx.set_gpr(3, ctx.gpr[2] + 0u);
    ctx.set_gpr(2, rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(116)));
    ctx.set_gpr(5, ctx.gpr[3] - ctx.gpr[2]);
    ctx.set_gpr(31, 0x0892254Cu);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0081_entry, 81u, 312u, 0x089495E8u>(ctx, &aot_mem) && ctx.pc == 0x0892254Cu) goto L_0892254C;
    return;
L_0892254C:
    ctx.set_gpr(4, rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(144)));
    ctx.set_gpr(31, 0x08922558u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0081_entry, 81u, 291u, 0x0894944Cu>(ctx, &aot_mem) && ctx.pc == 0x08922558u) goto L_08922558;
    return;
L_08922558:
    ctx.set_gpr(2, rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(144)));
    ctx.set_gpr(16, rt.memory().aot_load32(ctx.gpr[2] + static_cast<std::uint32_t>(16)));
    ctx.set_gpr(2, rt.memory().aot_load32(ctx.gpr[19] + static_cast<std::uint32_t>(64)));
    ctx.set_gpr(2, rt.memory().aot_load32(ctx.gpr[2] + static_cast<std::uint32_t>(16)));
    ctx.set_gpr(2, ctx.gpr[2] + ctx.gpr[17]);
    ctx.set_gpr(2, rt.memory().aot_load32(ctx.gpr[2] + static_cast<std::uint32_t>(0)));
    ctx.set_gpr(23, rt.memory().aot_load32(ctx.gpr[2] + static_cast<std::uint32_t>(8)));
    ctx.set_gpr(22, 0u + 0u);
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(112), 0u);
    ctx.set_gpr(18, rt.memory().aot_load32(ctx.gpr[2] + static_cast<std::uint32_t>(16)));
    ctx.set_gpr(17, 0u + 0u);
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_089225BC;
      }
      goto L_0892258C;
    }
L_0892258C:
    ctx.set_gpr(2, ctx.gpr[17] << 1u);
    ctx.set_gpr(2, ctx.gpr[18] + ctx.gpr[2]);
    ctx.set_gpr(5, static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int16_t>(rt.memory().aot_load16(ctx.gpr[2] + static_cast<std::uint32_t>(0))))));
    ctx.set_gpr(4, ctx.gpr[20] + 0u);
    ctx.set_gpr(31, 0x089225A4u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0080_entry, 80u, 148u, 0x08944B4Cu>(ctx, &aot_mem) && ctx.pc == 0x089225A4u) goto L_089225A4;
    return;
L_089225A4:
    ctx.set_gpr(3, ctx.gpr[17] << 2u);
    ctx.set_gpr(4, ctx.gpr[16] + ctx.gpr[3]);
    ctx.set_gpr(5, ctx.gpr[2] + 0u);
    ctx.set_gpr(31, 0x089225B8u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0085_entry, 85u, 61u, 0x089584C4u>(ctx, &aot_mem) && ctx.pc == 0x089225B8u) goto L_089225B8;
    return;
L_089225B8:
    ctx.set_gpr(17, ctx.gpr[17] + static_cast<std::uint32_t>(1));
    goto L_089225BC;
L_089225BC:
    ctx.set_gpr(2, static_cast<std::int32_t>(ctx.gpr[17]) < static_cast<std::int32_t>(ctx.gpr[23]) ? 1u : 0u);
    { const bool branch_taken = ctx.gpr[2] != 0u;
    // nop
      if (branch_taken) {
          goto L_0892258C;
      }
      goto L_089225C8;
    }
L_089225C8:
    ctx.set_gpr(18, 0u + 0u);
    ctx.set_gpr(17, rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(116)));
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_08922658;
      }
      goto L_089225D8;
    }
L_089225D8:
    ctx.set_gpr(4, ctx.gpr[20] + 0u);
    ctx.set_gpr(5, ctx.gpr[17] + 0u);
    ctx.set_gpr(31, 0x089225E8u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0080_entry, 80u, 148u, 0x08944B4Cu>(ctx, &aot_mem) && ctx.pc == 0x089225E8u) goto L_089225E8;
    return;
L_089225E8:
    ctx.set_gpr(30, ctx.gpr[2] + 0u);
    ctx.set_gpr(2, ctx.gpr[18] << 2u);
    ctx.set_gpr(2, ctx.gpr[16] + ctx.gpr[2]);
    ctx.set_gpr(2, rt.memory().aot_load32(ctx.gpr[2] + static_cast<std::uint32_t>(0)));
    { const bool branch_taken = ctx.gpr[30] != ctx.gpr[2];
    // nop
      if (branch_taken) {
          goto L_0892260C;
      }
      goto L_08922600;
    }
L_08922600:
    ctx.set_gpr(18, ctx.gpr[18] + static_cast<std::uint32_t>(1));
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_08922654;
      }
      goto L_0892260C;
    }
L_0892260C:
    ctx.set_gpr(4, ctx.gpr[30] + 0u);
    ctx.set_gpr(2, 2245u << 16u);
    ctx.set_gpr(5, rt.memory().aot_load32(ctx.gpr[2] + static_cast<std::uint32_t>(27024)));
    ctx.set_gpr(31, 0x08922620u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0080_entry, 80u, 857u, 0x08947F8Cu>(ctx, &aot_mem) && ctx.pc == 0x08922620u) goto L_08922620;
    return;
L_08922620:
    { const bool branch_taken = ctx.gpr[2] == 0u;
    // nop
      if (branch_taken) {
          goto L_08922654;
      }
      goto L_08922628;
    }
L_08922628:
    ctx.set_gpr(3, rt.memory().aot_load8(ctx.gpr[30] + static_cast<std::uint32_t>(48)));
    ctx.set_gpr(2, 0u + static_cast<std::uint32_t>(1));
    { const bool branch_taken = ctx.gpr[3] != ctx.gpr[2];
    // nop
      if (branch_taken) {
          goto L_08922654;
      }
      goto L_08922638;
    }
L_08922638:
    ctx.set_gpr(2, ctx.gpr[23] + ctx.gpr[22]);
    ctx.set_gpr(2, ctx.gpr[2] << 2u);
    ctx.set_gpr(4, ctx.gpr[16] + ctx.gpr[2]);
    ctx.set_gpr(22, ctx.gpr[22] + static_cast<std::uint32_t>(1));
    ctx.set_gpr(5, ctx.gpr[30] + 0u);
    ctx.set_gpr(31, 0x08922654u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0085_entry, 85u, 61u, 0x089584C4u>(ctx, &aot_mem) && ctx.pc == 0x08922654u) goto L_08922654;
    return;
L_08922654:
    ctx.set_gpr(17, ctx.gpr[17] + static_cast<std::uint32_t>(1));
    goto L_08922658;
L_08922658:
    ctx.set_gpr(2, rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(60)));
    ctx.set_gpr(2, static_cast<std::int32_t>(ctx.gpr[17]) < static_cast<std::int32_t>(ctx.gpr[2]) ? 1u : 0u);
    { const bool branch_taken = ctx.gpr[2] != 0u;
    // nop
      if (branch_taken) {
          goto L_089225D8;
      }
      goto L_08922668;
    }
L_08922668:
    ctx.set_gpr(18, 0u + 0u);
    ctx.set_gpr(30, ctx.gpr[23] + 0u);
    ctx.set_gpr(17, rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(116)));
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_089226FC;
      }
      goto L_0892267C;
    }
L_0892267C:
    ctx.set_gpr(4, ctx.gpr[20] + 0u);
    ctx.set_gpr(5, ctx.gpr[17] + 0u);
    ctx.set_gpr(31, 0x0892268Cu);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0080_entry, 80u, 148u, 0x08944B4Cu>(ctx, &aot_mem) && ctx.pc == 0x0892268Cu) goto L_0892268C;
    return;
L_0892268C:
    ctx.set_gpr(3, ctx.gpr[18] << 2u);
    ctx.set_gpr(3, ctx.gpr[16] + ctx.gpr[3]);
    ctx.set_gpr(3, rt.memory().aot_load32(ctx.gpr[3] + static_cast<std::uint32_t>(0)));
    { const bool branch_taken = ctx.gpr[2] != ctx.gpr[3];
    // nop
      if (branch_taken) {
          goto L_089226AC;
      }
      goto L_089226A0;
    }
L_089226A0:
    ctx.set_gpr(18, ctx.gpr[18] + static_cast<std::uint32_t>(1));
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_089226F8;
      }
      goto L_089226AC;
    }
L_089226AC:
    ctx.set_gpr(3, ctx.gpr[30] << 2u);
    ctx.set_gpr(3, ctx.gpr[16] + ctx.gpr[3]);
    ctx.set_gpr(3, rt.memory().aot_load32(ctx.gpr[3] + static_cast<std::uint32_t>(0)));
    { const bool branch_taken = ctx.gpr[2] != ctx.gpr[3];
    // nop
      if (branch_taken) {
          goto L_089226CC;
      }
      goto L_089226C0;
    }
L_089226C0:
    ctx.set_gpr(30, ctx.gpr[30] + static_cast<std::uint32_t>(1));
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_089226F8;
      }
      goto L_089226CC;
    }
L_089226CC:
    ctx.set_gpr(4, ctx.gpr[23] + ctx.gpr[22]);
    ctx.set_gpr(3, rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(112)));
    ctx.set_gpr(3, ctx.gpr[3] + ctx.gpr[4]);
    ctx.set_gpr(3, ctx.gpr[3] << 2u);
    ctx.set_gpr(4, ctx.gpr[16] + ctx.gpr[3]);
    ctx.set_gpr(3, rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(112)));
    ctx.set_gpr(3, ctx.gpr[3] + static_cast<std::uint32_t>(1));
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(112), ctx.gpr[3]);
    ctx.set_gpr(5, ctx.gpr[2] + 0u);
    ctx.set_gpr(31, 0x089226F8u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0085_entry, 85u, 61u, 0x089584C4u>(ctx, &aot_mem) && ctx.pc == 0x089226F8u) goto L_089226F8;
    return;
L_089226F8:
    ctx.set_gpr(17, ctx.gpr[17] + static_cast<std::uint32_t>(1));
    goto L_089226FC;
L_089226FC:
    ctx.set_gpr(2, rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(60)));
    ctx.set_gpr(2, static_cast<std::int32_t>(ctx.gpr[17]) < static_cast<std::int32_t>(ctx.gpr[2]) ? 1u : 0u);
    { const bool branch_taken = ctx.gpr[2] != 0u;
    // nop
      if (branch_taken) {
          goto L_0892267C;
      }
      goto L_0892270C;
    }
L_0892270C:
    ctx.set_gpr(3, ctx.gpr[21] << 4u);
    ctx.set_gpr(2, rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(64)));
    rt.memory().aot_store32(ctx.gpr[2] + static_cast<std::uint32_t>(0), ctx.gpr[23]);
    ctx.set_gpr(2, rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(72)));
    ctx.set_gpr(3, ctx.gpr[3] + ctx.gpr[2]);
    rt.memory().aot_store32(ctx.gpr[3] + static_cast<std::uint32_t>(4), ctx.gpr[22]);
    ctx.set_gpr(2, rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(112)));
    rt.memory().aot_store32(ctx.gpr[3] + static_cast<std::uint32_t>(8), ctx.gpr[2]);
    ctx.set_gpr(4, rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(144)));
    { const bool branch_taken = ctx.gpr[4] == 0u;
    // nop
      if (branch_taken) {
          goto L_08922740;
      }
      goto L_08922738;
    }
L_08922738:
    ctx.set_gpr(31, 0x08922740u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0014_entry, 14u, 257u, 0x0883D454u>(ctx, &aot_mem) && ctx.pc == 0x08922740u) goto L_08922740;
    return;
L_08922740:
    ctx.set_gpr(21, ctx.gpr[21] + static_cast<std::uint32_t>(1));
    goto L_08922744;
L_08922744:
    ctx.set_gpr(2, rt.memory().aot_load32(ctx.gpr[19] + static_cast<std::uint32_t>(164)));
    ctx.set_gpr(2, static_cast<std::int32_t>(ctx.gpr[21]) < static_cast<std::int32_t>(ctx.gpr[2]) ? 1u : 0u);
    { const bool branch_taken = ctx.gpr[2] != 0u;
    // nop
      if (branch_taken) {
          goto L_089224B8;
      }
      goto L_08922754;
    }
L_08922754:
    rt.memory().aot_store32(ctx.gpr[19] + static_cast<std::uint32_t>(208), 0u);
    ctx.set_gpr(4, rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(156)));
    { const bool branch_taken = ctx.gpr[4] == 0u;
    // nop
      if (branch_taken) {
          goto L_0892276C;
      }
      goto L_08922764;
    }
L_08922764:
    ctx.set_gpr(31, 0x0892276Cu);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0014_entry, 14u, 257u, 0x0883D454u>(ctx, &aot_mem) && ctx.pc == 0x0892276Cu) goto L_0892276C;
    return;
L_0892276C:
    ctx.set_gpr(2, 0u + 0u);
    goto L_08922770;
L_08922770:
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
    ctx.set_gpr(29, ctx.gpr[29] + static_cast<std::uint32_t>(160));
    jump_target = ctx.gpr[31];
    // nop
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_089227A4:
    ctx.set_gpr(2, 2245u << 16u);
    ctx.set_gpr(2, rt.memory().aot_load32(ctx.gpr[2] + static_cast<std::uint32_t>(26896)));
    jump_target = ctx.gpr[31];
    // nop
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_089227B4:
    ctx.set_gpr(29, ctx.gpr[29] + static_cast<std::uint32_t>(-16));
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(12), ctx.gpr[31]);
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(8), ctx.gpr[17]);
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(4), ctx.gpr[16]);
    ctx.set_gpr(16, ctx.gpr[4] + 0u);
    ctx.set_gpr(2, rt.memory().aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(132)));
    ctx.set_gpr(3, rt.memory().aot_load32(ctx.gpr[2] + static_cast<std::uint32_t>(12)));
    ctx.set_gpr(2, 0u + static_cast<std::uint32_t>(-2));
    ctx.set_gpr(17, ctx.gpr[3] & ctx.gpr[2]);
    ctx.set_gpr(31, 0x089227E0u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0072_entry, 72u, 568u, 0x089267ECu>(ctx, &aot_mem) && ctx.pc == 0x089227E0u) goto L_089227E0;
    return;
L_089227E0:
    ctx.set_gpr(4, ctx.gpr[2] + 0u);
    ctx.set_gpr(5, ctx.gpr[17] + 0u);
    ctx.set_gpr(25, rt.memory().aot_load32(ctx.gpr[2] + static_cast<std::uint32_t>(0)));
    ctx.set_gpr(25, rt.memory().aot_load32(ctx.gpr[25] + static_cast<std::uint32_t>(120)));
    jump_target = ctx.gpr[25];
    ctx.set_gpr(31, 0x089227F8u);
    // nop
    ctx.pc = jump_target;
    if (rt.invoke_chained_call(ctx, &aot_mem) && ctx.pc == 0x089227F8u) goto L_089227F8;
    return;
L_089227F8:
    rt.memory().aot_store32(ctx.gpr[16] + static_cast<std::uint32_t>(240), ctx.gpr[2]);
    ctx.set_gpr(4, ctx.gpr[2] + 0u);
    ctx.set_gpr(31, 0x08922808u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0004_entry, 4u, 508u, 0x08816764u>(ctx, &aot_mem) && ctx.pc == 0x08922808u) goto L_08922808;
    return;
L_08922808:
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_08922840;
      }
      goto L_08922810;
    }
L_08922810:
    ctx.set_gpr(3, rt.memory().aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(240)));
    ctx.set_gpr(5, ctx.gpr[3] + ctx.gpr[2]);
    ctx.set_gpr(4, static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int8_t>(rt.memory().aot_load8(ctx.gpr[5] + static_cast<std::uint32_t>(0))))));
    ctx.set_gpr(3, 0u + static_cast<std::uint32_t>(47));
    { const bool branch_taken = ctx.gpr[4] == ctx.gpr[3];
    // nop
      if (branch_taken) {
          goto L_08922834;
      }
      goto L_08922828;
    }
L_08922828:
    ctx.set_gpr(3, 0u + static_cast<std::uint32_t>(92));
    { const bool branch_taken = ctx.gpr[4] != ctx.gpr[3];
    // nop
      if (branch_taken) {
          goto L_08922840;
      }
      goto L_08922834;
    }
L_08922834:
    rt.memory().aot_store8(ctx.gpr[5] + static_cast<std::uint32_t>(0), static_cast<std::uint8_t>(0u));
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_0892284C;
      }
      goto L_08922840;
    }
L_08922840:
    ctx.set_gpr(2, ctx.gpr[2] + static_cast<std::uint32_t>(-1));
    { const bool branch_taken = static_cast<std::int32_t>(ctx.gpr[2]) >= 0;
    // nop
      if (branch_taken) {
          goto L_08922810;
      }
      goto L_0892284C;
    }
L_0892284C:
    { const bool branch_taken = static_cast<std::int32_t>(ctx.gpr[2]) >= 0;
    // nop
      if (branch_taken) {
          goto L_0892285C;
      }
      goto L_08922854;
    }
L_08922854:
    ctx.set_gpr(2, rt.memory().aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(240)));
    rt.memory().aot_store8(ctx.gpr[2] + static_cast<std::uint32_t>(0), static_cast<std::uint8_t>(0u));
    goto L_0892285C;
L_0892285C:
    ctx.set_gpr(2, 0u + 0u);
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
L_08922878:
    ctx.set_gpr(29, ctx.gpr[29] + static_cast<std::uint32_t>(-16));
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(12), ctx.gpr[31]);
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(8), ctx.gpr[16]);
    ctx.set_gpr(31, 0x0892288Cu);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0064_entry, 64u, 444u, 0x08905FF0u>(ctx, &aot_mem) && ctx.pc == 0x0892288Cu) goto L_0892288C;
    return;
L_0892288C:
    ctx.set_gpr(16, rt.memory().aot_load32(ctx.gpr[2] + static_cast<std::uint32_t>(64)));
    ctx.set_gpr(4, ctx.gpr[16] + 0u);
    ctx.set_gpr(5, 0u + static_cast<std::uint32_t>(2));
    ctx.set_gpr(6, 2228u << 16u);
    ctx.set_gpr(6, ctx.gpr[6] + static_cast<std::uint32_t>(-11800));
    ctx.set_gpr(7, ctx.gpr[28] + static_cast<std::uint32_t>(-32198));
    ctx.set_gpr(8, 0u + 0u);
    ctx.set_gpr(9, 0u + 0u);
    ctx.set_gpr(31, 0x089228B4u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0083_entry, 83u, 813u, 0x089537E4u>(ctx, &aot_mem) && ctx.pc == 0x089228B4u) goto L_089228B4;
    return;
L_089228B4:
    ctx.set_gpr(4, ctx.gpr[16] + 0u);
    ctx.set_gpr(5, 0u + static_cast<std::uint32_t>(2));
    ctx.set_gpr(6, 2228u << 16u);
    ctx.set_gpr(6, ctx.gpr[6] + static_cast<std::uint32_t>(-11784));
    ctx.set_gpr(7, ctx.gpr[28] + static_cast<std::uint32_t>(-32200));
    ctx.set_gpr(8, 0u + static_cast<std::uint32_t>(1));
    ctx.set_gpr(9, 0u + 0u);
    ctx.set_gpr(31, 0x089228D8u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0083_entry, 83u, 813u, 0x089537E4u>(ctx, &aot_mem) && ctx.pc == 0x089228D8u) goto L_089228D8;
    return;
L_089228D8:
    ctx.set_gpr(4, ctx.gpr[16] + 0u);
    ctx.set_gpr(5, 0u + static_cast<std::uint32_t>(2));
    ctx.set_gpr(6, 2228u << 16u);
    ctx.set_gpr(6, ctx.gpr[6] + static_cast<std::uint32_t>(-11768));
    ctx.set_gpr(7, ctx.gpr[28] + static_cast<std::uint32_t>(-32199));
    ctx.set_gpr(8, 0u + 0u);
    ctx.set_gpr(9, 0u + 0u);
    ctx.set_gpr(31, 0x089228FCu);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0083_entry, 83u, 813u, 0x089537E4u>(ctx, &aot_mem) && ctx.pc == 0x089228FCu) goto L_089228FC;
    return;
L_089228FC:
    ctx.set_gpr(31, rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(12)));
    ctx.set_gpr(16, rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(8)));
    ctx.set_gpr(29, ctx.gpr[29] + static_cast<std::uint32_t>(16));
    jump_target = ctx.gpr[31];
    // nop
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_08922910:
    ctx.set_gpr(29, ctx.gpr[29] + static_cast<std::uint32_t>(-16));
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(12), ctx.gpr[31]);
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(8), ctx.gpr[17]);
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(4), ctx.gpr[16]);
    ctx.set_gpr(17, ctx.gpr[4] + 0u);
    ctx.set_gpr(5, rt.memory().aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(84)));
    ctx.set_gpr(3, rt.memory().aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(300)));
    ctx.set_gpr(2, ctx.gpr[3] - ctx.gpr[5]);
    { const std::int32_t dividend = static_cast<std::int32_t>(ctx.gpr[2]); const std::int32_t divisor = static_cast<std::int32_t>(ctx.gpr[3]); if (divisor == 0) { ctx.lo = dividend >= 0 ? 0xFFFFFFFFu : 1u; ctx.hi = static_cast<std::uint32_t>(dividend); } else if (dividend == static_cast<std::int32_t>(0x80000000u) && divisor == -1) { ctx.lo = 0x80000000u; ctx.hi = 0u; } else { ctx.lo = static_cast<std::uint32_t>(dividend / divisor); ctx.hi = static_cast<std::uint32_t>(dividend % divisor); } }
    ctx.set_gpr(16, ctx.hi);
    { const bool branch_taken = static_cast<std::int32_t>(ctx.gpr[16]) <= 0;
    // nop
      if (branch_taken) {
          goto L_08922954;
      }
      goto L_08922940;
    }
L_08922940:
    ctx.set_gpr(4, rt.memory().aot_load32(ctx.gpr[17] + static_cast<std::uint32_t>(304)));
    ctx.set_gpr(5, ctx.gpr[4] + ctx.gpr[5]);
    ctx.set_gpr(6, ctx.gpr[16] + 0u);
    ctx.set_gpr(31, 0x08922954u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0003_entry, 3u, 662u, 0x08812B08u>(ctx, &aot_mem) && ctx.pc == 0x08922954u) goto L_08922954;
    return;
L_08922954:
    ctx.set_gpr(2, rt.memory().aot_load32(ctx.gpr[17] + static_cast<std::uint32_t>(300)));
    ctx.set_gpr(6, ctx.gpr[2] - ctx.gpr[16]);
    ctx.set_gpr(4, rt.memory().aot_load32(ctx.gpr[17] + static_cast<std::uint32_t>(88)));
    ctx.set_gpr(3, rt.memory().aot_load32(ctx.gpr[17] + static_cast<std::uint32_t>(92)));
    ctx.set_gpr(2, ctx.gpr[4] + ctx.gpr[6]);
    ctx.set_gpr(2, ctx.gpr[16] + ctx.gpr[2]);
    ctx.set_gpr(1, static_cast<std::int32_t>(ctx.gpr[3]) < static_cast<std::int32_t>(ctx.gpr[2]) ? 1u : 0u);
    { const bool branch_taken = ctx.gpr[1] == 0u;
    // nop
      if (branch_taken) {
          goto L_08922980;
      }
      goto L_08922978;
    }
L_08922978:
    ctx.set_gpr(2, ctx.gpr[3] - ctx.gpr[4]);
    ctx.set_gpr(6, ctx.gpr[2] - ctx.gpr[16]);
    goto L_08922980;
L_08922980:
    { const bool branch_taken = ctx.gpr[6] == 0u;
    // nop
      if (branch_taken) {
          goto L_089229C0;
      }
      goto L_08922988;
    }
L_08922988:
    ctx.set_gpr(4, rt.memory().aot_load32(ctx.gpr[17] + static_cast<std::uint32_t>(132)));
    ctx.set_gpr(2, rt.memory().aot_load32(ctx.gpr[17] + static_cast<std::uint32_t>(304)));
    ctx.set_gpr(5, ctx.gpr[2] + ctx.gpr[16]);
    ctx.set_gpr(7, 0u + static_cast<std::uint32_t>(1));
    ctx.set_gpr(25, rt.memory().aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(0)));
    ctx.set_gpr(25, rt.memory().aot_load32(ctx.gpr[25] + static_cast<std::uint32_t>(108)));
    jump_target = ctx.gpr[25];
    ctx.set_gpr(31, 0x089229A8u);
    // nop
    ctx.pc = jump_target;
    if (rt.invoke_chained_call(ctx, &aot_mem) && ctx.pc == 0x089229A8u) goto L_089229A8;
    return;
L_089229A8:
    ctx.set_gpr(3, 0u + static_cast<std::uint32_t>(1));
    { const bool branch_taken = ctx.gpr[2] == ctx.gpr[3];
    // nop
      if (branch_taken) {
          goto L_089229C0;
      }
      goto L_089229B4;
    }
L_089229B4:
    ctx.set_gpr(2, ctx.gpr[3] + 0u);
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_089229C8;
      }
      goto L_089229C0;
    }
L_089229C0:
    rt.memory().aot_store32(ctx.gpr[17] + static_cast<std::uint32_t>(84), 0u);
    ctx.set_gpr(2, 0u + 0u);
    goto L_089229C8;
L_089229C8:
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
L_089229E0:
    ctx.set_gpr(29, ctx.gpr[29] + static_cast<std::uint32_t>(-48));
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(28), ctx.gpr[31]);
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(24), ctx.gpr[19]);
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(20), ctx.gpr[18]);
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(16), ctx.gpr[17]);
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(12), ctx.gpr[16]);
    ctx.set_gpr(19, ctx.gpr[4] + 0u);
    ctx.set_gpr(18, ctx.gpr[5] + 0u);
    ctx.set_gpr(4, rt.memory().aot_load32(ctx.gpr[5] + static_cast<std::uint32_t>(84)));
    ctx.set_gpr(2, rt.memory().aot_load32(ctx.gpr[5] + static_cast<std::uint32_t>(304)));
    ctx.set_gpr(3, ctx.gpr[2] + ctx.gpr[4]);
    ctx.set_gpr(2, rt.memory().aot_load32(ctx.gpr[5] + static_cast<std::uint32_t>(300)));
    ctx.set_gpr(2, ctx.gpr[2] + static_cast<std::uint32_t>(-9));
    ctx.set_gpr(1, static_cast<std::int32_t>(ctx.gpr[2]) < static_cast<std::int32_t>(ctx.gpr[4]) ? 1u : 0u);
    { const bool branch_taken = ctx.gpr[1] != 0u;
    // nop
      if (branch_taken) {
          goto L_08922A54;
      }
      goto L_08922A20;
    }
L_08922A20:
    ctx.set_gpr(4, ctx.gpr[18] + 0u);
    ctx.set_gpr(5, ctx.gpr[3] + 0u);
    ctx.set_gpr(31, 0x08922A30u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0070_entry, 70u, 654u, 0x0891EFCCu>(ctx, &aot_mem) && ctx.pc == 0x08922A30u) goto L_08922A30;
    return;
L_08922A30:
    ctx.set_gpr(3, rt.memory().aot_load32(ctx.gpr[18] + static_cast<std::uint32_t>(84)));
    ctx.set_gpr(3, ctx.gpr[3] + ctx.gpr[2]);
    ctx.set_gpr(2, rt.memory().aot_load32(ctx.gpr[18] + static_cast<std::uint32_t>(256)));
    ctx.set_gpr(2, ctx.gpr[2] << 2u);
    ctx.set_gpr(3, ctx.gpr[2] + ctx.gpr[3]);
    ctx.set_gpr(2, rt.memory().aot_load32(ctx.gpr[18] + static_cast<std::uint32_t>(300)));
    ctx.set_gpr(1, static_cast<std::int32_t>(ctx.gpr[2]) < static_cast<std::int32_t>(ctx.gpr[3]) ? 1u : 0u);
    { const bool branch_taken = ctx.gpr[1] == 0u;
    // nop
      if (branch_taken) {
          goto L_08922A90;
      }
      goto L_08922A54;
    }
L_08922A54:
    ctx.set_gpr(4, ctx.gpr[18] + 0u);
    ctx.set_gpr(31, 0x08922A60u);
    // nop
    goto L_08922910;
L_08922A60:
    ctx.set_gpr(3, 0u + static_cast<std::uint32_t>(1));
    { const bool branch_taken = ctx.gpr[2] != ctx.gpr[3];
    // nop
      if (branch_taken) {
          goto L_08922A90;
      }
      goto L_08922A6C;
    }
L_08922A6C:
    rt.memory().aot_store32(ctx.gpr[19] + static_cast<std::uint32_t>(0), 0u);
    ctx.set_gpr(4, 0u + 0u);
    { const bool branch_taken = ctx.gpr[4] == 0u;
    // nop
      if (branch_taken) {
          goto L_08922A88;
      }
      goto L_08922A7C;
    }
L_08922A7C:
    ctx.set_gpr(3, rt.memory().aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(4)));
    ctx.set_gpr(3, ctx.gpr[3] + static_cast<std::uint32_t>(1));
    rt.memory().aot_store32(ctx.gpr[4] + static_cast<std::uint32_t>(4), ctx.gpr[3]);
    goto L_08922A88;
L_08922A88:
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_08922C50;
      }
      goto L_08922A90;
    }
L_08922A90:
    ctx.set_gpr(3, rt.memory().aot_load32(ctx.gpr[18] + static_cast<std::uint32_t>(304)));
    ctx.set_gpr(2, rt.memory().aot_load32(ctx.gpr[18] + static_cast<std::uint32_t>(84)));
    ctx.set_gpr(17, ctx.gpr[3] + ctx.gpr[2]);
    ctx.set_gpr(2, rt.memory().aot_load32(ctx.gpr[17] + static_cast<std::uint32_t>(0)));
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(44), ctx.gpr[2]);
    ctx.set_gpr(2, rt.memory().aot_load8(ctx.gpr[18] + static_cast<std::uint32_t>(204)));
    { const bool branch_taken = ctx.gpr[2] == 0u;
    // nop
      if (branch_taken) {
          goto L_08922AD4;
      }
      goto L_08922AB0;
    }
L_08922AB0:
    ctx.set_gpr(31, 0x08922AB8u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0053_entry, 53u, 415u, 0x088DA21Cu>(ctx, &aot_mem) && ctx.pc == 0x08922AB8u) goto L_08922AB8;
    return;
L_08922AB8:
    ctx.set_gpr(4, ctx.gpr[2] + 0u);
    ctx.set_gpr(5, ctx.gpr[29] + static_cast<std::uint32_t>(44));
    ctx.set_gpr(6, 0u + static_cast<std::uint32_t>(1));
    ctx.set_gpr(25, rt.memory().aot_load32(ctx.gpr[2] + static_cast<std::uint32_t>(0)));
    ctx.set_gpr(25, rt.memory().aot_load32(ctx.gpr[25] + static_cast<std::uint32_t>(220)));
    jump_target = ctx.gpr[25];
    ctx.set_gpr(31, 0x08922AD4u);
    // nop
    ctx.pc = jump_target;
    if (rt.invoke_chained_call(ctx, &aot_mem) && ctx.pc == 0x08922AD4u) goto L_08922AD4;
    return;
L_08922AD4:
    ctx.set_gpr(4, rt.memory().aot_load32(ctx.gpr[18] + static_cast<std::uint32_t>(232)));
    ctx.set_gpr(2, rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(44)));
    ctx.set_gpr(3, ctx.gpr[2] << 2u);
    ctx.set_gpr(2, rt.memory().aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(16)));
    ctx.set_gpr(2, ctx.gpr[2] + ctx.gpr[3]);
    ctx.set_gpr(16, rt.memory().aot_load32(ctx.gpr[2] + static_cast<std::uint32_t>(0)));
    ctx.set_gpr(4, ctx.gpr[18] + 0u);
    ctx.set_gpr(31, 0x08922AF8u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0072_entry, 72u, 568u, 0x089267ECu>(ctx, &aot_mem) && ctx.pc == 0x08922AF8u) goto L_08922AF8;
    return;
L_08922AF8:
    ctx.set_gpr(4, ctx.gpr[16] + 0u);
    ctx.set_gpr(5, ctx.gpr[2] + 0u);
    ctx.set_gpr(31, 0x08922B08u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0080_entry, 80u, 76u, 0x089445ACu>(ctx, &aot_mem) && ctx.pc == 0x08922B08u) goto L_08922B08;
    return;
L_08922B08:
    ctx.set_gpr(16, ctx.gpr[2] + 0u);
    { const bool branch_taken = ctx.gpr[16] == 0u;
    // nop
      if (branch_taken) {
          goto L_08922B38;
      }
      goto L_08922B14;
    }
L_08922B14:
    ctx.set_gpr(4, ctx.gpr[16] + 0u);
    ctx.set_gpr(2, 2245u << 16u);
    ctx.set_gpr(5, rt.memory().aot_load32(ctx.gpr[2] + static_cast<std::uint32_t>(29856)));
    ctx.set_gpr(31, 0x08922B28u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0080_entry, 80u, 857u, 0x08947F8Cu>(ctx, &aot_mem) && ctx.pc == 0x08922B28u) goto L_08922B28;
    return;
L_08922B28:
    { const bool branch_taken = ctx.gpr[2] == 0u;
    // nop
      if (branch_taken) {
          goto L_08922B38;
      }
      goto L_08922B30;
    }
L_08922B30:
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_08922B3C;
      }
      goto L_08922B38;
    }
L_08922B38:
    ctx.set_gpr(16, 0u + 0u);
    goto L_08922B3C;
L_08922B3C:
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(40), ctx.gpr[16]);
    { const bool branch_taken = ctx.gpr[16] == 0u;
    // nop
      if (branch_taken) {
          goto L_08922B54;
      }
      goto L_08922B48;
    }
L_08922B48:
    ctx.set_gpr(2, rt.memory().aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(4)));
    ctx.set_gpr(2, ctx.gpr[2] + static_cast<std::uint32_t>(1));
    rt.memory().aot_store32(ctx.gpr[16] + static_cast<std::uint32_t>(4), ctx.gpr[2]);
    goto L_08922B54;
L_08922B54:
    ctx.set_gpr(4, rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(40)));
    ctx.set_gpr(2, rt.memory().aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(4)));
    ctx.set_gpr(2, ctx.gpr[2] + static_cast<std::uint32_t>(-1));
    rt.memory().aot_store32(ctx.gpr[4] + static_cast<std::uint32_t>(4), ctx.gpr[2]);
    ctx.set_gpr(2, ctx.gpr[2] << 10u);
    ctx.set_gpr(2, ctx.gpr[2] >> 10u);
    { const bool branch_taken = ctx.gpr[2] != 0u;
    // nop
      if (branch_taken) {
          goto L_08922B7C;
      }
      goto L_08922B74;
    }
L_08922B74:
    ctx.set_gpr(31, 0x08922B7Cu);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0080_entry, 80u, 556u, 0x089467C8u>(ctx, &aot_mem) && ctx.pc == 0x08922B7Cu) goto L_08922B7C;
    return;
L_08922B7C:
    ctx.set_gpr(4, rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(40)));
    ctx.set_gpr(5, 0u + 0u);
    ctx.set_gpr(31, 0x08922B8Cu);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0080_entry, 80u, 473u, 0x08946224u>(ctx, &aot_mem) && ctx.pc == 0x08922B8Cu) goto L_08922B8C;
    return;
L_08922B8C:
    ctx.set_gpr(2, rt.memory().aot_load32(ctx.gpr[18] + static_cast<std::uint32_t>(128)));
    ctx.set_gpr(1, static_cast<std::int32_t>(ctx.gpr[2]) < 4 ? 1u : 0u);
    { const bool branch_taken = ctx.gpr[1] == 0u;
    // nop
      if (branch_taken) {
          goto L_08922BC0;
      }
      goto L_08922B9C;
    }
L_08922B9C:
    ctx.set_gpr(4, rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(40)));
    ctx.set_gpr(5, ctx.gpr[17] + 0u);
    ctx.set_gpr(6, ctx.gpr[18] + 0u);
    ctx.set_gpr(7, rt.memory().aot_load32(ctx.gpr[18] + static_cast<std::uint32_t>(232)));
    ctx.set_gpr(8, rt.memory().aot_load8(ctx.gpr[18] + static_cast<std::uint32_t>(204)));
    ctx.set_gpr(31, 0x08922BB8u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0080_entry, 80u, 669u, 0x089470B0u>(ctx, &aot_mem) && ctx.pc == 0x08922BB8u) goto L_08922BB8;
    return;
L_08922BB8:
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_08922BDC;
      }
      goto L_08922BC0;
    }
L_08922BC0:
    ctx.set_gpr(4, rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(40)));
    ctx.set_gpr(5, ctx.gpr[17] + 0u);
    ctx.set_gpr(6, ctx.gpr[18] + 0u);
    ctx.set_gpr(7, rt.memory().aot_load32(ctx.gpr[18] + static_cast<std::uint32_t>(232)));
    ctx.set_gpr(8, rt.memory().aot_load8(ctx.gpr[18] + static_cast<std::uint32_t>(204)));
    ctx.set_gpr(31, 0x08922BDCu);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0080_entry, 80u, 716u, 0x089473D8u>(ctx, &aot_mem) && ctx.pc == 0x08922BDCu) goto L_08922BDC;
    return;
L_08922BDC:
    ctx.set_gpr(3, rt.memory().aot_load32(ctx.gpr[18] + static_cast<std::uint32_t>(84)));
    ctx.set_gpr(3, ctx.gpr[3] + ctx.gpr[2]);
    rt.memory().aot_store32(ctx.gpr[18] + static_cast<std::uint32_t>(84), ctx.gpr[3]);
    ctx.set_gpr(3, rt.memory().aot_load32(ctx.gpr[18] + static_cast<std::uint32_t>(88)));
    ctx.set_gpr(2, ctx.gpr[3] + ctx.gpr[2]);
    rt.memory().aot_store32(ctx.gpr[18] + static_cast<std::uint32_t>(88), ctx.gpr[2]);
    ctx.set_gpr(2, rt.memory().aot_load32(ctx.gpr[18] + static_cast<std::uint32_t>(256)));
    ctx.set_gpr(3, ctx.gpr[2] << 2u);
    ctx.set_gpr(2, rt.memory().aot_load32(ctx.gpr[18] + static_cast<std::uint32_t>(84)));
    ctx.set_gpr(2, ctx.gpr[2] + ctx.gpr[3]);
    rt.memory().aot_store32(ctx.gpr[18] + static_cast<std::uint32_t>(84), ctx.gpr[2]);
    ctx.set_gpr(2, rt.memory().aot_load32(ctx.gpr[18] + static_cast<std::uint32_t>(256)));
    ctx.set_gpr(3, ctx.gpr[2] << 2u);
    ctx.set_gpr(2, rt.memory().aot_load32(ctx.gpr[18] + static_cast<std::uint32_t>(88)));
    ctx.set_gpr(2, ctx.gpr[2] + ctx.gpr[3]);
    rt.memory().aot_store32(ctx.gpr[18] + static_cast<std::uint32_t>(88), ctx.gpr[2]);
    ctx.set_gpr(3, rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(40)));
    rt.memory().aot_store32(ctx.gpr[19] + static_cast<std::uint32_t>(0), ctx.gpr[3]);
    { const bool branch_taken = ctx.gpr[3] == 0u;
    // nop
      if (branch_taken) {
          goto L_08922C38;
      }
      goto L_08922C2C;
    }
L_08922C2C:
    ctx.set_gpr(2, rt.memory().aot_load32(ctx.gpr[3] + static_cast<std::uint32_t>(4)));
    ctx.set_gpr(2, ctx.gpr[2] + static_cast<std::uint32_t>(1));
    rt.memory().aot_store32(ctx.gpr[3] + static_cast<std::uint32_t>(4), ctx.gpr[2]);
    goto L_08922C38;
L_08922C38:
    ctx.set_gpr(4, rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(40)));
    { const bool branch_taken = ctx.gpr[4] == 0u;
    // nop
      if (branch_taken) {
          goto L_08922C4C;
      }
      goto L_08922C44;
    }
L_08922C44:
    ctx.set_gpr(31, 0x08922C4Cu);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0014_entry, 14u, 257u, 0x0883D454u>(ctx, &aot_mem) && ctx.pc == 0x08922C4Cu) goto L_08922C4C;
    return;
L_08922C4C:
    ctx.set_gpr(2, 0u + 0u);
    goto L_08922C50;
L_08922C50:
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
L_08922C70:
    ctx.set_gpr(29, ctx.gpr[29] + static_cast<std::uint32_t>(-16));
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(12), ctx.gpr[31]);
    ctx.set_gpr(2, ctx.gpr[4] + 0u);
    rt.memory().aot_store32(ctx.gpr[4] + static_cast<std::uint32_t>(84), 0u);
    rt.memory().aot_store32(ctx.gpr[4] + static_cast<std::uint32_t>(92), ctx.gpr[5]);
    ctx.set_gpr(6, rt.memory().aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(300)));
    ctx.set_gpr(1, static_cast<std::int32_t>(ctx.gpr[5]) < static_cast<std::int32_t>(ctx.gpr[6]) ? 1u : 0u);
    { const bool branch_taken = ctx.gpr[1] == 0u;
    // nop
      if (branch_taken) {
          goto L_08922C98;
      }
      goto L_08922C94;
    }
L_08922C94:
    ctx.set_gpr(6, ctx.gpr[5] + 0u);
    goto L_08922C98;
L_08922C98:
    { const bool branch_taken = ctx.gpr[6] == 0u;
    // nop
      if (branch_taken) {
          goto L_08922CD4;
      }
      goto L_08922CA0;
    }
L_08922CA0:
    ctx.set_gpr(4, rt.memory().aot_load32(ctx.gpr[2] + static_cast<std::uint32_t>(132)));
    ctx.set_gpr(5, rt.memory().aot_load32(ctx.gpr[2] + static_cast<std::uint32_t>(304)));
    ctx.set_gpr(7, 0u + static_cast<std::uint32_t>(1));
    ctx.set_gpr(25, rt.memory().aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(0)));
    ctx.set_gpr(25, rt.memory().aot_load32(ctx.gpr[25] + static_cast<std::uint32_t>(108)));
    jump_target = ctx.gpr[25];
    ctx.set_gpr(31, 0x08922CBCu);
    // nop
    ctx.pc = jump_target;
    if (rt.invoke_chained_call(ctx, &aot_mem) && ctx.pc == 0x08922CBCu) goto L_08922CBC;
    return;
L_08922CBC:
    ctx.set_gpr(3, 0u + static_cast<std::uint32_t>(1));
    { const bool branch_taken = ctx.gpr[2] == ctx.gpr[3];
    // nop
      if (branch_taken) {
          goto L_08922CD4;
      }
      goto L_08922CC8;
    }
L_08922CC8:
    ctx.set_gpr(2, ctx.gpr[3] + 0u);
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_08922CD8;
      }
      goto L_08922CD4;
    }
L_08922CD4:
    ctx.set_gpr(2, 0u + 0u);
    goto L_08922CD8;
L_08922CD8:
    ctx.set_gpr(31, rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(12)));
    ctx.set_gpr(29, ctx.gpr[29] + static_cast<std::uint32_t>(16));
    jump_target = ctx.gpr[31];
    // nop
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_08922CE8:
    ctx.set_gpr(29, ctx.gpr[29] + static_cast<std::uint32_t>(-16));
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(12), ctx.gpr[31]);
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(8), ctx.gpr[17]);
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(4), ctx.gpr[16]);
    ctx.set_gpr(16, ctx.gpr[4] + 0u);
    ctx.set_gpr(17, ctx.gpr[5] + 0u);
    ctx.set_gpr(31, 0x08922D08u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0072_entry, 72u, 546u, 0x08926644u>(ctx, &aot_mem) && ctx.pc == 0x08922D08u) goto L_08922D08;
    return;
L_08922D08:
    ctx.set_gpr(5, rt.memory().aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(84)));
    ctx.set_gpr(3, rt.memory().aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(300)));
    ctx.set_gpr(2, ctx.gpr[5] + ctx.gpr[17]);
    ctx.set_gpr(1, static_cast<std::int32_t>(ctx.gpr[3]) < static_cast<std::int32_t>(ctx.gpr[2]) ? 1u : 0u);
    { const bool branch_taken = ctx.gpr[1] == 0u;
    // nop
      if (branch_taken) {
          goto L_08922D94;
      }
      goto L_08922D20;
    }
L_08922D20:
    ctx.set_gpr(17, ctx.gpr[3] - ctx.gpr[5]);
    ctx.set_gpr(4, rt.memory().aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(304)));
    ctx.set_gpr(5, ctx.gpr[4] + ctx.gpr[5]);
    ctx.set_gpr(6, ctx.gpr[17] + 0u);
    ctx.set_gpr(31, 0x08922D38u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0003_entry, 3u, 662u, 0x08812B08u>(ctx, &aot_mem) && ctx.pc == 0x08922D38u) goto L_08922D38;
    return;
L_08922D38:
    ctx.set_gpr(2, rt.memory().aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(300)));
    ctx.set_gpr(6, ctx.gpr[2] - ctx.gpr[17]);
    ctx.set_gpr(2, rt.memory().aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(92)));
    ctx.set_gpr(2, ctx.gpr[2] - ctx.gpr[17]);
    ctx.set_gpr(1, static_cast<std::int32_t>(ctx.gpr[2]) < static_cast<std::int32_t>(ctx.gpr[6]) ? 1u : 0u);
    { const bool branch_taken = ctx.gpr[1] == 0u;
    // nop
      if (branch_taken) {
          goto L_08922D58;
      }
      goto L_08922D54;
    }
L_08922D54:
    ctx.set_gpr(6, ctx.gpr[2] + 0u);
    goto L_08922D58;
L_08922D58:
    ctx.set_gpr(4, rt.memory().aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(132)));
    ctx.set_gpr(2, rt.memory().aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(304)));
    ctx.set_gpr(5, ctx.gpr[2] + ctx.gpr[17]);
    ctx.set_gpr(7, 0u + static_cast<std::uint32_t>(1));
    ctx.set_gpr(25, rt.memory().aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(0)));
    ctx.set_gpr(25, rt.memory().aot_load32(ctx.gpr[25] + static_cast<std::uint32_t>(108)));
    jump_target = ctx.gpr[25];
    ctx.set_gpr(31, 0x08922D78u);
    // nop
    ctx.pc = jump_target;
    if (rt.invoke_chained_call(ctx, &aot_mem) && ctx.pc == 0x08922D78u) goto L_08922D78;
    return;
L_08922D78:
    ctx.set_gpr(3, 0u + static_cast<std::uint32_t>(1));
    { const bool branch_taken = ctx.gpr[2] == ctx.gpr[3];
    // nop
      if (branch_taken) {
          goto L_08922D90;
      }
      goto L_08922D84;
    }
L_08922D84:
    ctx.set_gpr(2, ctx.gpr[3] + 0u);
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_08922D98;
      }
      goto L_08922D90;
    }
L_08922D90:
    rt.memory().aot_store32(ctx.gpr[16] + static_cast<std::uint32_t>(84), 0u);
    goto L_08922D94;
L_08922D94:
    ctx.set_gpr(2, 0u + 0u);
    goto L_08922D98;
L_08922D98:
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
L_08922DB0:
    ctx.set_gpr(29, ctx.gpr[29] + static_cast<std::uint32_t>(-16));
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(12), ctx.gpr[31]);
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(8), ctx.gpr[17]);
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(4), ctx.gpr[16]);
    ctx.set_gpr(17, ctx.gpr[4] + 0u);
    ctx.set_gpr(16, ctx.gpr[5] + 0u);
    ctx.set_gpr(31, 0x08922DD0u);
    // nop
    goto L_08922CE8;
L_08922DD0:
    ctx.set_gpr(2, rt.memory().aot_load32(ctx.gpr[17] + static_cast<std::uint32_t>(304)));
    ctx.set_gpr(3, rt.memory().aot_load32(ctx.gpr[17] + static_cast<std::uint32_t>(84)));
    ctx.set_gpr(2, ctx.gpr[2] + ctx.gpr[3]);
    ctx.set_gpr(3, ctx.gpr[3] + ctx.gpr[16]);
    rt.memory().aot_store32(ctx.gpr[17] + static_cast<std::uint32_t>(84), ctx.gpr[3]);
    ctx.set_gpr(3, rt.memory().aot_load32(ctx.gpr[17] + static_cast<std::uint32_t>(92)));
    ctx.set_gpr(3, ctx.gpr[3] - ctx.gpr[16]);
    rt.memory().aot_store32(ctx.gpr[17] + static_cast<std::uint32_t>(92), ctx.gpr[3]);
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
L_08922E08:
    ctx.set_gpr(29, ctx.gpr[29] + static_cast<std::uint32_t>(-16));
    ctx.set_gpr(2, ctx.gpr[4] & 3u);
    { const bool branch_taken = ctx.gpr[2] != 0u;
    // nop
      if (branch_taken) {
          goto L_08922E28;
      }
      goto L_08922E18;
    }
L_08922E18:
    ctx.set_gpr(2, rt.memory().aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(0)));
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(12), ctx.gpr[2]);
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_08922E58;
      }
      goto L_08922E28;
    }
L_08922E28:
    ctx.set_gpr(5, ctx.gpr[29] + static_cast<std::uint32_t>(12));
    ctx.set_gpr(6, 0u + 0u);
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_08922E4C;
      }
      goto L_08922E38;
    }
L_08922E38:
    ctx.set_gpr(2, ctx.gpr[4] + ctx.gpr[6]);
    ctx.set_gpr(3, rt.memory().aot_load8(ctx.gpr[2] + static_cast<std::uint32_t>(0)));
    ctx.set_gpr(2, ctx.gpr[5] + ctx.gpr[6]);
    rt.memory().aot_store8(ctx.gpr[2] + static_cast<std::uint32_t>(0), static_cast<std::uint8_t>(ctx.gpr[3]));
    ctx.set_gpr(6, ctx.gpr[6] + static_cast<std::uint32_t>(1));
    goto L_08922E4C;
L_08922E4C:
    ctx.set_gpr(2, ctx.gpr[6] < static_cast<std::uint32_t>(4) ? 1u : 0u);
    { const bool branch_taken = ctx.gpr[2] != 0u;
    // nop
      if (branch_taken) {
          goto L_08922E38;
      }
      goto L_08922E58;
    }
L_08922E58:
    ctx.set_gpr(2, rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(12)));
    ctx.set_gpr(29, ctx.gpr[29] + static_cast<std::uint32_t>(16));
    jump_target = ctx.gpr[31];
    // nop
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_08922E68:
    ctx.set_gpr(29, ctx.gpr[29] + static_cast<std::uint32_t>(-32));
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(12), ctx.gpr[31]);
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(8), ctx.gpr[18]);
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(4), ctx.gpr[17]);
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(0), ctx.gpr[16]);
    ctx.set_gpr(18, ctx.gpr[4] + 0u);
    ctx.set_gpr(17, ctx.gpr[5] + 0u);
    ctx.set_gpr(5, 0u + static_cast<std::uint32_t>(4));
    ctx.set_gpr(31, 0x08922E90u);
    // nop
    goto L_08922DB0;
L_08922E90:
    { const bool branch_taken = ctx.gpr[2] != 0u;
    // nop
      if (branch_taken) {
          goto L_08922EA4;
      }
      goto L_08922E98;
    }
L_08922E98:
    ctx.set_gpr(2, 0u + static_cast<std::uint32_t>(1));
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_0892319C;
      }
      goto L_08922EA4;
    }
L_08922EA4:
    ctx.set_gpr(4, ctx.gpr[2] + 0u);
    ctx.set_gpr(31, 0x08922EB0u);
    // nop
    goto L_08922E08;
L_08922EB0:
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(28), ctx.gpr[2]);
    ctx.set_gpr(2, rt.memory().aot_load8(ctx.gpr[18] + static_cast<std::uint32_t>(204)));
    { const bool branch_taken = ctx.gpr[2] == 0u;
    // nop
      if (branch_taken) {
          goto L_08922EDC;
      }
      goto L_08922EC0;
    }
L_08922EC0:
    ctx.set_gpr(4, rt.memory().aot_load32(ctx.gpr[18] + static_cast<std::uint32_t>(244)));
    ctx.set_gpr(5, ctx.gpr[29] + static_cast<std::uint32_t>(28));
    ctx.set_gpr(6, 0u + static_cast<std::uint32_t>(1));
    ctx.set_gpr(25, rt.memory().aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(0)));
    ctx.set_gpr(25, rt.memory().aot_load32(ctx.gpr[25] + static_cast<std::uint32_t>(220)));
    jump_target = ctx.gpr[25];
    ctx.set_gpr(31, 0x08922EDCu);
    // nop
    ctx.pc = jump_target;
    if (rt.invoke_chained_call(ctx, &aot_mem) && ctx.pc == 0x08922EDCu) goto L_08922EDC;
    return;
L_08922EDC:
    ctx.set_gpr(5, rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(28)));
    { const bool branch_taken = static_cast<std::int32_t>(ctx.gpr[5]) <= 0;
    // nop
      if (branch_taken) {
          goto L_08923084;
      }
      goto L_08922EE8;
    }
L_08922EE8:
    ctx.set_gpr(4, ctx.gpr[18] + 0u);
    ctx.set_gpr(31, 0x08922EF4u);
    // nop
    goto L_08922DB0;
L_08922EF4:
    ctx.set_gpr(16, ctx.gpr[2] + 0u);
    { const bool branch_taken = ctx.gpr[16] != 0u;
    // nop
      if (branch_taken) {
          goto L_08922F0C;
      }
      goto L_08922F00;
    }
L_08922F00:
    ctx.set_gpr(2, 0u + static_cast<std::uint32_t>(1));
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_0892319C;
      }
      goto L_08922F0C;
    }
L_08922F0C:
    { const bool branch_taken = ctx.gpr[16] != 0u;
    // nop
      if (branch_taken) {
          goto L_08922F20;
      }
      goto L_08922F14;
    }
L_08922F14:
    ctx.set_gpr(2, 0u + 0u);
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_08922F6C;
      }
      goto L_08922F20;
    }
L_08922F20:
    ctx.set_gpr(2, 2245u << 16u);
    ctx.set_gpr(2, rt.memory().aot_load32(ctx.gpr[2] + static_cast<std::uint32_t>(30776)));
    { const bool branch_taken = ctx.gpr[2] != 0u;
    // nop
      if (branch_taken) {
          goto L_08922F58;
      }
      goto L_08922F30;
    }
L_08922F30:
    ctx.set_gpr(4, 0u + static_cast<std::uint32_t>(16));
    ctx.set_gpr(31, 0x08922F3Cu);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0072_entry, 72u, 788u, 0x089277A0u>(ctx, &aot_mem) && ctx.pc == 0x08922F3Cu) goto L_08922F3C;
    return;
L_08922F3C:
    { const bool branch_taken = ctx.gpr[2] == 0u;
    // nop
      if (branch_taken) {
          goto L_08922F50;
      }
      goto L_08922F44;
    }
L_08922F44:
    ctx.set_gpr(4, ctx.gpr[2] + 0u);
    ctx.set_gpr(31, 0x08922F50u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0072_entry, 72u, 762u, 0x089275E8u>(ctx, &aot_mem) && ctx.pc == 0x08922F50u) goto L_08922F50;
    return;
L_08922F50:
    ctx.set_gpr(3, 2245u << 16u);
    rt.memory().aot_store32(ctx.gpr[3] + static_cast<std::uint32_t>(30776), ctx.gpr[2]);
    goto L_08922F58;
L_08922F58:
    ctx.set_gpr(2, 2245u << 16u);
    ctx.set_gpr(4, rt.memory().aot_load32(ctx.gpr[2] + static_cast<std::uint32_t>(30776)));
    ctx.set_gpr(5, ctx.gpr[16] + 0u);
    ctx.set_gpr(31, 0x08922F6Cu);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0072_entry, 72u, 784u, 0x08927768u>(ctx, &aot_mem) && ctx.pc == 0x08922F6Cu) goto L_08922F6C;
    return;
L_08922F6C:
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(24), ctx.gpr[2]);
    ctx.set_gpr(5, rt.memory().aot_load32(ctx.gpr[18] + static_cast<std::uint32_t>(72)));
    ctx.set_gpr(3, rt.memory().aot_load32(ctx.gpr[5] + static_cast<std::uint32_t>(8)));
    { const bool branch_taken = ctx.gpr[3] == 0u;
    // nop
      if (branch_taken) {
          goto L_08923024;
      }
      goto L_08922F80;
    }
L_08922F80:
    { const bool branch_taken = static_cast<std::int32_t>(ctx.gpr[17]) < 0;
    // nop
      if (branch_taken) {
          goto L_08923024;
      }
      goto L_08922F88;
    }
L_08922F88:
    ctx.set_gpr(1, static_cast<std::int32_t>(ctx.gpr[17]) < static_cast<std::int32_t>(ctx.gpr[3]) ? 1u : 0u);
    { const bool branch_taken = ctx.gpr[1] == 0u;
    // nop
      if (branch_taken) {
          goto L_08923024;
      }
      goto L_08922F94;
    }
L_08922F94:
    ctx.set_gpr(4, ctx.gpr[17] << 2u);
    ctx.set_gpr(3, rt.memory().aot_load32(ctx.gpr[5] + static_cast<std::uint32_t>(16)));
    ctx.set_gpr(16, ctx.gpr[3] + ctx.gpr[4]);
    ctx.set_gpr(2, 0u < ctx.gpr[2] ? 1u : 0u);
    { const bool branch_taken = ctx.gpr[2] == 0u;
    // nop
      if (branch_taken) {
          goto L_08922FC0;
      }
      goto L_08922FAC;
    }
L_08922FAC:
    ctx.set_gpr(4, ctx.gpr[29] + static_cast<std::uint32_t>(24));
    ctx.set_gpr(31, 0x08922FB8u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0019_entry, 19u, 781u, 0x0885315Cu>(ctx, &aot_mem) && ctx.pc == 0x08922FB8u) goto L_08922FB8;
    return;
L_08922FB8:
    ctx.set_gpr(2, 0u < ctx.gpr[2] ? 1u : 0u);
    ctx.set_gpr(2, ctx.gpr[2] ^ 1u);
    goto L_08922FC0;
L_08922FC0:
    { const bool branch_taken = ctx.gpr[2] == 0u;
    // nop
      if (branch_taken) {
          goto L_08922FE0;
      }
      goto L_08922FC8;
    }
L_08922FC8:
    ctx.set_gpr(4, ctx.gpr[29] + static_cast<std::uint32_t>(24));
    ctx.set_gpr(31, 0x08922FD4u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0019_entry, 19u, 776u, 0x0885311Cu>(ctx, &aot_mem) && ctx.pc == 0x08922FD4u) goto L_08922FD4;
    return;
L_08922FD4:
    ctx.set_gpr(4, ctx.gpr[2] + static_cast<std::uint32_t>(4));
    ctx.set_gpr(31, 0x08922FE0u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0064_entry, 64u, 102u, 0x08904690u>(ctx, &aot_mem) && ctx.pc == 0x08922FE0u) goto L_08922FE0;
    return;
L_08922FE0:
    ctx.set_gpr(2, rt.memory().aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(0)));
    ctx.set_gpr(2, 0u < ctx.gpr[2] ? 1u : 0u);
    { const bool branch_taken = ctx.gpr[2] == 0u;
    // nop
      if (branch_taken) {
          goto L_08923004;
      }
      goto L_08922FF0;
    }
L_08922FF0:
    ctx.set_gpr(4, ctx.gpr[16] + 0u);
    ctx.set_gpr(31, 0x08922FFCu);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0019_entry, 19u, 781u, 0x0885315Cu>(ctx, &aot_mem) && ctx.pc == 0x08922FFCu) goto L_08922FFC;
    return;
L_08922FFC:
    ctx.set_gpr(2, 0u < ctx.gpr[2] ? 1u : 0u);
    ctx.set_gpr(2, ctx.gpr[2] ^ 1u);
    goto L_08923004;
L_08923004:
    { const bool branch_taken = ctx.gpr[2] == 0u;
    // nop
      if (branch_taken) {
          goto L_0892301C;
      }
      goto L_0892300C;
    }
L_0892300C:
    ctx.set_gpr(2, rt.memory().aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(0)));
    ctx.set_gpr(4, ctx.gpr[2] + static_cast<std::uint32_t>(-8));
    ctx.set_gpr(31, 0x0892301Cu);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0019_entry, 19u, 770u, 0x088530D0u>(ctx, &aot_mem) && ctx.pc == 0x0892301Cu) goto L_0892301C;
    return;
L_0892301C:
    ctx.set_gpr(2, rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(24)));
    rt.memory().aot_store32(ctx.gpr[16] + static_cast<std::uint32_t>(0), ctx.gpr[2]);
    goto L_08923024;
L_08923024:
    ctx.set_gpr(4, 0u + 0u);
    ctx.set_gpr(3, rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(24)));
    { const bool branch_taken = ctx.gpr[3] == 0u;
    // nop
      if (branch_taken) {
          goto L_08923050;
      }
      goto L_08923034;
    }
L_08923034:
    ctx.set_gpr(2, ctx.gpr[3] & 1u);
    ctx.set_gpr(2, ctx.gpr[2] ^ 1u);
    ctx.set_gpr(2, ctx.gpr[2] < static_cast<std::uint32_t>(1) ? 1u : 0u);
    ctx.set_gpr(2, ctx.gpr[2] ^ 1u);
    { const bool branch_taken = ctx.gpr[2] == 0u;
    // nop
      if (branch_taken) {
          goto L_08923050;
      }
      goto L_0892304C;
    }
L_0892304C:
    ctx.set_gpr(4, 0u + static_cast<std::uint32_t>(1));
    goto L_08923050;
L_08923050:
    { const bool branch_taken = ctx.gpr[4] == 0u;
    // nop
      if (branch_taken) {
          goto L_08923198;
      }
      goto L_08923058;
    }
L_08923058:
    ctx.set_gpr(5, ctx.gpr[3] + static_cast<std::uint32_t>(-8));
    ctx.set_gpr(2, rt.memory().aot_load32(ctx.gpr[3] + static_cast<std::uint32_t>(-4)));
    ctx.set_gpr(2, ctx.gpr[2] + static_cast<std::uint32_t>(-1));
    rt.memory().aot_store32(ctx.gpr[3] + static_cast<std::uint32_t>(-4), ctx.gpr[2]);
    { const bool branch_taken = ctx.gpr[2] != 0u;
    // nop
      if (branch_taken) {
          goto L_08923198;
      }
      goto L_08923070;
    }
L_08923070:
    ctx.set_gpr(4, rt.memory().aot_load32(ctx.gpr[5] + static_cast<std::uint32_t>(0)));
    ctx.set_gpr(31, 0x0892307Cu);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0085_entry, 85u, 887u, 0x0895BD2Cu>(ctx, &aot_mem) && ctx.pc == 0x0892307Cu) goto L_0892307C;
    return;
L_0892307C:
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_08923198;
      }
      goto L_08923084;
    }
L_08923084:
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(20), 0u);
    ctx.set_gpr(4, rt.memory().aot_load32(ctx.gpr[18] + static_cast<std::uint32_t>(72)));
    ctx.set_gpr(2, rt.memory().aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(8)));
    { const bool branch_taken = ctx.gpr[2] == 0u;
    // nop
      if (branch_taken) {
          goto L_08923140;
      }
      goto L_08923098;
    }
L_08923098:
    { const bool branch_taken = static_cast<std::int32_t>(ctx.gpr[17]) < 0;
    // nop
      if (branch_taken) {
          goto L_08923140;
      }
      goto L_089230A0;
    }
L_089230A0:
    ctx.set_gpr(1, static_cast<std::int32_t>(ctx.gpr[17]) < static_cast<std::int32_t>(ctx.gpr[2]) ? 1u : 0u);
    { const bool branch_taken = ctx.gpr[1] == 0u;
    // nop
      if (branch_taken) {
          goto L_08923140;
      }
      goto L_089230AC;
    }
L_089230AC:
    ctx.set_gpr(3, ctx.gpr[17] << 2u);
    ctx.set_gpr(2, rt.memory().aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(16)));
    ctx.set_gpr(16, ctx.gpr[2] + ctx.gpr[3]);
    ctx.set_gpr(2, 0u + 0u);
    ctx.set_gpr(2, 0u < ctx.gpr[2] ? 1u : 0u);
    { const bool branch_taken = ctx.gpr[2] == 0u;
    // nop
      if (branch_taken) {
          goto L_089230DC;
      }
      goto L_089230C8;
    }
L_089230C8:
    ctx.set_gpr(4, ctx.gpr[29] + static_cast<std::uint32_t>(20));
    ctx.set_gpr(31, 0x089230D4u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0019_entry, 19u, 781u, 0x0885315Cu>(ctx, &aot_mem) && ctx.pc == 0x089230D4u) goto L_089230D4;
    return;
L_089230D4:
    ctx.set_gpr(2, 0u < ctx.gpr[2] ? 1u : 0u);
    ctx.set_gpr(2, ctx.gpr[2] ^ 1u);
    goto L_089230DC;
L_089230DC:
    { const bool branch_taken = ctx.gpr[2] == 0u;
    // nop
      if (branch_taken) {
          goto L_089230FC;
      }
      goto L_089230E4;
    }
L_089230E4:
    ctx.set_gpr(4, ctx.gpr[29] + static_cast<std::uint32_t>(20));
    ctx.set_gpr(31, 0x089230F0u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0019_entry, 19u, 776u, 0x0885311Cu>(ctx, &aot_mem) && ctx.pc == 0x089230F0u) goto L_089230F0;
    return;
L_089230F0:
    ctx.set_gpr(4, ctx.gpr[2] + static_cast<std::uint32_t>(4));
    ctx.set_gpr(31, 0x089230FCu);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0064_entry, 64u, 102u, 0x08904690u>(ctx, &aot_mem) && ctx.pc == 0x089230FCu) goto L_089230FC;
    return;
L_089230FC:
    ctx.set_gpr(2, rt.memory().aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(0)));
    ctx.set_gpr(2, 0u < ctx.gpr[2] ? 1u : 0u);
    { const bool branch_taken = ctx.gpr[2] == 0u;
    // nop
      if (branch_taken) {
          goto L_08923120;
      }
      goto L_0892310C;
    }
L_0892310C:
    ctx.set_gpr(4, ctx.gpr[16] + 0u);
    ctx.set_gpr(31, 0x08923118u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0019_entry, 19u, 781u, 0x0885315Cu>(ctx, &aot_mem) && ctx.pc == 0x08923118u) goto L_08923118;
    return;
L_08923118:
    ctx.set_gpr(2, 0u < ctx.gpr[2] ? 1u : 0u);
    ctx.set_gpr(2, ctx.gpr[2] ^ 1u);
    goto L_08923120;
L_08923120:
    { const bool branch_taken = ctx.gpr[2] == 0u;
    // nop
      if (branch_taken) {
          goto L_08923138;
      }
      goto L_08923128;
    }
L_08923128:
    ctx.set_gpr(2, rt.memory().aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(0)));
    ctx.set_gpr(4, ctx.gpr[2] + static_cast<std::uint32_t>(-8));
    ctx.set_gpr(31, 0x08923138u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0019_entry, 19u, 770u, 0x088530D0u>(ctx, &aot_mem) && ctx.pc == 0x08923138u) goto L_08923138;
    return;
L_08923138:
    ctx.set_gpr(2, rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(20)));
    rt.memory().aot_store32(ctx.gpr[16] + static_cast<std::uint32_t>(0), ctx.gpr[2]);
    goto L_08923140;
L_08923140:
    ctx.set_gpr(4, 0u + 0u);
    ctx.set_gpr(3, rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(20)));
    { const bool branch_taken = ctx.gpr[3] == 0u;
    // nop
      if (branch_taken) {
          goto L_0892316C;
      }
      goto L_08923150;
    }
L_08923150:
    ctx.set_gpr(2, ctx.gpr[3] & 1u);
    ctx.set_gpr(2, ctx.gpr[2] ^ 1u);
    ctx.set_gpr(2, ctx.gpr[2] < static_cast<std::uint32_t>(1) ? 1u : 0u);
    ctx.set_gpr(2, ctx.gpr[2] ^ 1u);
    { const bool branch_taken = ctx.gpr[2] == 0u;
    // nop
      if (branch_taken) {
          goto L_0892316C;
      }
      goto L_08923168;
    }
L_08923168:
    ctx.set_gpr(4, 0u + static_cast<std::uint32_t>(1));
    goto L_0892316C;
L_0892316C:
    { const bool branch_taken = ctx.gpr[4] == 0u;
    // nop
      if (branch_taken) {
          goto L_08923198;
      }
      goto L_08923174;
    }
L_08923174:
    ctx.set_gpr(5, ctx.gpr[3] + static_cast<std::uint32_t>(-8));
    ctx.set_gpr(2, rt.memory().aot_load32(ctx.gpr[3] + static_cast<std::uint32_t>(-4)));
    ctx.set_gpr(2, ctx.gpr[2] + static_cast<std::uint32_t>(-1));
    rt.memory().aot_store32(ctx.gpr[3] + static_cast<std::uint32_t>(-4), ctx.gpr[2]);
    { const bool branch_taken = ctx.gpr[2] != 0u;
    // nop
      if (branch_taken) {
          goto L_08923198;
      }
      goto L_0892318C;
    }
L_0892318C:
    ctx.set_gpr(4, rt.memory().aot_load32(ctx.gpr[5] + static_cast<std::uint32_t>(0)));
    ctx.set_gpr(31, 0x08923198u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0085_entry, 85u, 887u, 0x0895BD2Cu>(ctx, &aot_mem) && ctx.pc == 0x08923198u) goto L_08923198;
    return;
L_08923198:
    ctx.set_gpr(2, 0u + 0u);
    goto L_0892319C;
L_0892319C:
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
L_089231B8:
    ctx.set_gpr(29, ctx.gpr[29] + static_cast<std::uint32_t>(-32));
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(12), ctx.gpr[31]);
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(8), ctx.gpr[17]);
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(4), ctx.gpr[16]);
    ctx.set_gpr(16, ctx.gpr[4] + 0u);
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(28), 0u);
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(24), 0u);
    ctx.set_gpr(4, rt.memory().aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(132)));
    ctx.set_gpr(5, ctx.gpr[29] + static_cast<std::uint32_t>(24));
    ctx.set_gpr(6, 0u + static_cast<std::uint32_t>(4));
    ctx.set_gpr(7, 0u + static_cast<std::uint32_t>(1));
    ctx.set_gpr(25, rt.memory().aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(0)));
    ctx.set_gpr(25, rt.memory().aot_load32(ctx.gpr[25] + static_cast<std::uint32_t>(108)));
    jump_target = ctx.gpr[25];
    ctx.set_gpr(31, 0x089231F4u);
    // nop
    ctx.pc = jump_target;
    if (rt.invoke_chained_call(ctx, &aot_mem) && ctx.pc == 0x089231F4u) goto L_089231F4;
    return;
L_089231F4:
    ctx.set_gpr(4, rt.memory().aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(132)));
    ctx.set_gpr(5, ctx.gpr[29] + static_cast<std::uint32_t>(28));
    ctx.set_gpr(6, 0u + static_cast<std::uint32_t>(4));
    ctx.set_gpr(7, 0u + static_cast<std::uint32_t>(1));
    ctx.set_gpr(25, rt.memory().aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(0)));
    ctx.set_gpr(25, rt.memory().aot_load32(ctx.gpr[25] + static_cast<std::uint32_t>(108)));
    jump_target = ctx.gpr[25];
    ctx.set_gpr(31, 0x08923214u);
    // nop
    ctx.pc = jump_target;
    if (rt.invoke_chained_call(ctx, &aot_mem) && ctx.pc == 0x08923214u) goto L_08923214;
    return;
L_08923214:
    ctx.set_gpr(2, rt.memory().aot_load8(ctx.gpr[16] + static_cast<std::uint32_t>(204)));
    { const bool branch_taken = ctx.gpr[2] == 0u;
    // nop
      if (branch_taken) {
          goto L_08923258;
      }
      goto L_08923220;
    }
L_08923220:
    ctx.set_gpr(4, rt.memory().aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(244)));
    ctx.set_gpr(5, ctx.gpr[29] + static_cast<std::uint32_t>(24));
    ctx.set_gpr(6, 0u + static_cast<std::uint32_t>(1));
    ctx.set_gpr(25, rt.memory().aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(0)));
    ctx.set_gpr(25, rt.memory().aot_load32(ctx.gpr[25] + static_cast<std::uint32_t>(220)));
    jump_target = ctx.gpr[25];
    ctx.set_gpr(31, 0x0892323Cu);
    // nop
    ctx.pc = jump_target;
    if (rt.invoke_chained_call(ctx, &aot_mem) && ctx.pc == 0x0892323Cu) goto L_0892323C;
    return;
L_0892323C:
    ctx.set_gpr(4, rt.memory().aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(244)));
    ctx.set_gpr(5, ctx.gpr[29] + static_cast<std::uint32_t>(28));
    ctx.set_gpr(6, 0u + static_cast<std::uint32_t>(1));
    ctx.set_gpr(25, rt.memory().aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(0)));
    ctx.set_gpr(25, rt.memory().aot_load32(ctx.gpr[25] + static_cast<std::uint32_t>(220)));
    jump_target = ctx.gpr[25];
    ctx.set_gpr(31, 0x08923258u);
    // nop
    ctx.pc = jump_target;
    if (rt.invoke_chained_call(ctx, &aot_mem) && ctx.pc == 0x08923258u) goto L_08923258;
    return;
L_08923258:
    ctx.set_gpr(4, ctx.gpr[16] + 0u);
    ctx.set_gpr(5, 0u + static_cast<std::uint32_t>(4096));
    ctx.set_gpr(31, 0x08923268u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0072_entry, 72u, 546u, 0x08926644u>(ctx, &aot_mem) && ctx.pc == 0x08923268u) goto L_08923268;
    return;
L_08923268:
    ctx.set_gpr(3, 0u + static_cast<std::uint32_t>(1));
    { const bool branch_taken = ctx.gpr[2] != ctx.gpr[3];
    // nop
      if (branch_taken) {
          goto L_08923280;
      }
      goto L_08923274;
    }
L_08923274:
    ctx.set_gpr(2, ctx.gpr[3] + 0u);
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_08923310;
      }
      goto L_08923280;
    }
L_08923280:
    ctx.set_gpr(4, rt.memory().aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(72)));
    ctx.set_gpr(5, rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(28)));
    ctx.set_gpr(31, 0x08923290u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0086_entry, 86u, 79u, 0x0895C4C8u>(ctx, &aot_mem) && ctx.pc == 0x08923290u) goto L_08923290;
    return;
L_08923290:
    ctx.set_gpr(2, rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(24)));
    ctx.set_gpr(5, ctx.gpr[2] + static_cast<std::uint32_t>(-8));
    ctx.set_gpr(4, ctx.gpr[16] + 0u);
    ctx.set_gpr(31, 0x089232A4u);
    // nop
    goto L_08922C70;
L_089232A4:
    ctx.set_gpr(3, 0u + static_cast<std::uint32_t>(1));
    { const bool branch_taken = ctx.gpr[2] != ctx.gpr[3];
    // nop
      if (branch_taken) {
          goto L_089232BC;
      }
      goto L_089232B0;
    }
L_089232B0:
    ctx.set_gpr(2, ctx.gpr[3] + 0u);
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_08923310;
      }
      goto L_089232BC;
    }
L_089232BC:
    ctx.set_gpr(17, 0u + 0u);
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_089232F4;
      }
      goto L_089232C8;
    }
L_089232C8:
    ctx.set_gpr(4, ctx.gpr[16] + 0u);
    ctx.set_gpr(5, ctx.gpr[17] + 0u);
    ctx.set_gpr(31, 0x089232D8u);
    // nop
    goto L_08922E68;
L_089232D8:
    ctx.set_gpr(3, 0u + static_cast<std::uint32_t>(1));
    { const bool branch_taken = ctx.gpr[2] != ctx.gpr[3];
    // nop
      if (branch_taken) {
          goto L_089232F0;
      }
      goto L_089232E4;
    }
L_089232E4:
    ctx.set_gpr(2, ctx.gpr[3] + 0u);
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_08923310;
      }
      goto L_089232F0;
    }
L_089232F0:
    ctx.set_gpr(17, ctx.gpr[17] + static_cast<std::uint32_t>(1));
    goto L_089232F4;
L_089232F4:
    ctx.set_gpr(2, rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(28)));
    ctx.set_gpr(2, static_cast<std::int32_t>(ctx.gpr[17]) < static_cast<std::int32_t>(ctx.gpr[2]) ? 1u : 0u);
    { const bool branch_taken = ctx.gpr[2] != 0u;
    // nop
      if (branch_taken) {
          goto L_089232C8;
      }
      goto L_08923304;
    }
L_08923304:
    ctx.set_gpr(2, rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(24)));
    rt.memory().aot_store32(ctx.gpr[16] + static_cast<std::uint32_t>(152), ctx.gpr[2]);
    ctx.set_gpr(2, 0u + 0u);
    goto L_08923310;
L_08923310:
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
L_08923328:
    ctx.set_gpr(29, ctx.gpr[29] + static_cast<std::uint32_t>(-48));
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(12), ctx.gpr[31]);
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(8), ctx.gpr[18]);
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(4), ctx.gpr[17]);
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(0), ctx.gpr[16]);
    ctx.set_gpr(18, ctx.gpr[4] + 0u);
    ctx.set_gpr(2, rt.memory().aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(72)));
    ctx.set_gpr(2, rt.memory().aot_load32(ctx.gpr[2] + static_cast<std::uint32_t>(8)));
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(44), ctx.gpr[2]);
    ctx.set_gpr(2, 0u + static_cast<std::uint32_t>(8));
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(40), ctx.gpr[2]);
    ctx.set_gpr(17, 0u + 0u);
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_08923408;
      }
      goto L_08923360;
    }
L_08923360:
    ctx.set_gpr(2, rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(40)));
    ctx.set_gpr(2, ctx.gpr[2] + static_cast<std::uint32_t>(4));
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(40), ctx.gpr[2]);
    ctx.set_gpr(4, ctx.gpr[29] + static_cast<std::uint32_t>(36));
    ctx.set_gpr(5, ctx.gpr[18] + 0u);
    ctx.set_gpr(6, ctx.gpr[17] + 0u);
    ctx.set_gpr(31, 0x08923380u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0067_entry, 67u, 147u, 0x089109C8u>(ctx, &aot_mem) && ctx.pc == 0x08923380u) goto L_08923380;
    return;
L_08923380:
    ctx.set_gpr(3, rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(36)));
    ctx.set_gpr(2, 0u + static_cast<std::uint32_t>(-2));
    ctx.set_gpr(4, ctx.gpr[3] & ctx.gpr[2]);
    { const bool branch_taken = ctx.gpr[4] == 0u;
    // nop
      if (branch_taken) {
          goto L_089233AC;
      }
      goto L_08923394;
    }
L_08923394:
    ctx.set_gpr(31, 0x0892339Cu);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0004_entry, 4u, 508u, 0x08816764u>(ctx, &aot_mem) && ctx.pc == 0x0892339Cu) goto L_0892339C;
    return;
L_0892339C:
    ctx.set_gpr(3, ctx.gpr[2] + static_cast<std::uint32_t>(1));
    ctx.set_gpr(2, rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(40)));
    ctx.set_gpr(2, ctx.gpr[2] + ctx.gpr[3]);
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(40), ctx.gpr[2]);
    goto L_089233AC;
L_089233AC:
    ctx.set_gpr(4, 0u + 0u);
    ctx.set_gpr(3, rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(36)));
    { const bool branch_taken = ctx.gpr[3] == 0u;
    // nop
      if (branch_taken) {
          goto L_089233D8;
      }
      goto L_089233BC;
    }
L_089233BC:
    ctx.set_gpr(2, ctx.gpr[3] & 1u);
    ctx.set_gpr(2, ctx.gpr[2] ^ 1u);
    ctx.set_gpr(2, ctx.gpr[2] < static_cast<std::uint32_t>(1) ? 1u : 0u);
    ctx.set_gpr(2, ctx.gpr[2] ^ 1u);
    { const bool branch_taken = ctx.gpr[2] == 0u;
    // nop
      if (branch_taken) {
          goto L_089233D8;
      }
      goto L_089233D4;
    }
L_089233D4:
    ctx.set_gpr(4, 0u + static_cast<std::uint32_t>(1));
    goto L_089233D8;
L_089233D8:
    { const bool branch_taken = ctx.gpr[4] == 0u;
    // nop
      if (branch_taken) {
          goto L_08923404;
      }
      goto L_089233E0;
    }
L_089233E0:
    ctx.set_gpr(5, ctx.gpr[3] + static_cast<std::uint32_t>(-8));
    ctx.set_gpr(2, rt.memory().aot_load32(ctx.gpr[3] + static_cast<std::uint32_t>(-4)));
    ctx.set_gpr(2, ctx.gpr[2] + static_cast<std::uint32_t>(-1));
    rt.memory().aot_store32(ctx.gpr[3] + static_cast<std::uint32_t>(-4), ctx.gpr[2]);
    { const bool branch_taken = ctx.gpr[2] != 0u;
    // nop
      if (branch_taken) {
          goto L_08923404;
      }
      goto L_089233F8;
    }
L_089233F8:
    ctx.set_gpr(4, rt.memory().aot_load32(ctx.gpr[5] + static_cast<std::uint32_t>(0)));
    ctx.set_gpr(31, 0x08923404u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0085_entry, 85u, 887u, 0x0895BD2Cu>(ctx, &aot_mem) && ctx.pc == 0x08923404u) goto L_08923404;
    return;
L_08923404:
    ctx.set_gpr(17, ctx.gpr[17] + static_cast<std::uint32_t>(1));
    goto L_08923408;
L_08923408:
    ctx.set_gpr(2, rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(44)));
    ctx.set_gpr(2, static_cast<std::int32_t>(ctx.gpr[17]) < static_cast<std::int32_t>(ctx.gpr[2]) ? 1u : 0u);
    { const bool branch_taken = ctx.gpr[2] != 0u;
    // nop
      if (branch_taken) {
          goto L_08923360;
      }
      goto L_08923418;
    }
L_08923418:
    ctx.set_gpr(2, rt.memory().aot_load8(ctx.gpr[18] + static_cast<std::uint32_t>(204)));
    { const bool branch_taken = ctx.gpr[2] == 0u;
    // nop
      if (branch_taken) {
          goto L_0892345C;
      }
      goto L_08923424;
    }
L_08923424:
    ctx.set_gpr(4, rt.memory().aot_load32(ctx.gpr[18] + static_cast<std::uint32_t>(244)));
    ctx.set_gpr(5, ctx.gpr[29] + static_cast<std::uint32_t>(40));
    ctx.set_gpr(6, 0u + static_cast<std::uint32_t>(1));
    ctx.set_gpr(25, rt.memory().aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(0)));
    ctx.set_gpr(25, rt.memory().aot_load32(ctx.gpr[25] + static_cast<std::uint32_t>(220)));
    jump_target = ctx.gpr[25];
    ctx.set_gpr(31, 0x08923440u);
    // nop
    ctx.pc = jump_target;
    if (rt.invoke_chained_call(ctx, &aot_mem) && ctx.pc == 0x08923440u) goto L_08923440;
    return;
L_08923440:
    ctx.set_gpr(4, rt.memory().aot_load32(ctx.gpr[18] + static_cast<std::uint32_t>(244)));
    ctx.set_gpr(5, ctx.gpr[29] + static_cast<std::uint32_t>(44));
    ctx.set_gpr(6, 0u + static_cast<std::uint32_t>(1));
    ctx.set_gpr(25, rt.memory().aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(0)));
    ctx.set_gpr(25, rt.memory().aot_load32(ctx.gpr[25] + static_cast<std::uint32_t>(220)));
    jump_target = ctx.gpr[25];
    ctx.set_gpr(31, 0x0892345Cu);
    // nop
    ctx.pc = jump_target;
    if (rt.invoke_chained_call(ctx, &aot_mem) && ctx.pc == 0x0892345Cu) goto L_0892345C;
    return;
L_0892345C:
    ctx.set_gpr(4, rt.memory().aot_load32(ctx.gpr[18] + static_cast<std::uint32_t>(132)));
    ctx.set_gpr(5, ctx.gpr[29] + static_cast<std::uint32_t>(40));
    ctx.set_gpr(6, 0u + static_cast<std::uint32_t>(4));
    ctx.set_gpr(7, 0u + static_cast<std::uint32_t>(1));
    ctx.set_gpr(25, rt.memory().aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(0)));
    ctx.set_gpr(25, rt.memory().aot_load32(ctx.gpr[25] + static_cast<std::uint32_t>(116)));
    jump_target = ctx.gpr[25];
    ctx.set_gpr(31, 0x0892347Cu);
    // nop
    ctx.pc = jump_target;
    if (rt.invoke_chained_call(ctx, &aot_mem) && ctx.pc == 0x0892347Cu) goto L_0892347C;
    return;
L_0892347C:
    ctx.set_gpr(4, rt.memory().aot_load32(ctx.gpr[18] + static_cast<std::uint32_t>(132)));
    ctx.set_gpr(5, ctx.gpr[29] + static_cast<std::uint32_t>(44));
    ctx.set_gpr(6, 0u + static_cast<std::uint32_t>(4));
    ctx.set_gpr(7, 0u + static_cast<std::uint32_t>(1));
    ctx.set_gpr(25, rt.memory().aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(0)));
    ctx.set_gpr(25, rt.memory().aot_load32(ctx.gpr[25] + static_cast<std::uint32_t>(116)));
    jump_target = ctx.gpr[25];
    ctx.set_gpr(31, 0x0892349Cu);
    // nop
    ctx.pc = jump_target;
    if (rt.invoke_chained_call(ctx, &aot_mem) && ctx.pc == 0x0892349Cu) goto L_0892349C;
    return;
L_0892349C:
    ctx.set_gpr(17, 0u + 0u);
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_089235BC;
      }
      goto L_089234A8;
    }
L_089234A8:
    ctx.set_gpr(4, ctx.gpr[29] + static_cast<std::uint32_t>(32));
    ctx.set_gpr(5, ctx.gpr[18] + 0u);
    ctx.set_gpr(6, ctx.gpr[17] + 0u);
    ctx.set_gpr(31, 0x089234BCu);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0067_entry, 67u, 147u, 0x089109C8u>(ctx, &aot_mem) && ctx.pc == 0x089234BCu) goto L_089234BC;
    return;
L_089234BC:
    ctx.set_gpr(16, 0u + 0u);
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(28), 0u);
    ctx.set_gpr(3, rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(32)));
    ctx.set_gpr(2, 0u + static_cast<std::uint32_t>(-2));
    ctx.set_gpr(4, ctx.gpr[3] & ctx.gpr[2]);
    { const bool branch_taken = ctx.gpr[4] == 0u;
    // nop
      if (branch_taken) {
          goto L_089234E4;
      }
      goto L_089234D8;
    }
L_089234D8:
    ctx.set_gpr(31, 0x089234E0u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0004_entry, 4u, 508u, 0x08816764u>(ctx, &aot_mem) && ctx.pc == 0x089234E0u) goto L_089234E0;
    return;
L_089234E0:
    ctx.set_gpr(16, ctx.gpr[2] + static_cast<std::uint32_t>(1));
    goto L_089234E4;
L_089234E4:
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(28), ctx.gpr[16]);
    ctx.set_gpr(2, rt.memory().aot_load8(ctx.gpr[18] + static_cast<std::uint32_t>(204)));
    { const bool branch_taken = ctx.gpr[2] == 0u;
    // nop
      if (branch_taken) {
          goto L_08923510;
      }
      goto L_089234F4;
    }
L_089234F4:
    ctx.set_gpr(4, rt.memory().aot_load32(ctx.gpr[18] + static_cast<std::uint32_t>(244)));
    ctx.set_gpr(5, ctx.gpr[29] + static_cast<std::uint32_t>(28));
    ctx.set_gpr(6, 0u + static_cast<std::uint32_t>(1));
    ctx.set_gpr(25, rt.memory().aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(0)));
    ctx.set_gpr(25, rt.memory().aot_load32(ctx.gpr[25] + static_cast<std::uint32_t>(220)));
    jump_target = ctx.gpr[25];
    ctx.set_gpr(31, 0x08923510u);
    // nop
    ctx.pc = jump_target;
    if (rt.invoke_chained_call(ctx, &aot_mem) && ctx.pc == 0x08923510u) goto L_08923510;
    return;
L_08923510:
    ctx.set_gpr(4, rt.memory().aot_load32(ctx.gpr[18] + static_cast<std::uint32_t>(132)));
    ctx.set_gpr(5, ctx.gpr[29] + static_cast<std::uint32_t>(28));
    ctx.set_gpr(6, 0u + static_cast<std::uint32_t>(4));
    ctx.set_gpr(7, 0u + static_cast<std::uint32_t>(1));
    ctx.set_gpr(25, rt.memory().aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(0)));
    ctx.set_gpr(25, rt.memory().aot_load32(ctx.gpr[25] + static_cast<std::uint32_t>(116)));
    jump_target = ctx.gpr[25];
    ctx.set_gpr(31, 0x08923530u);
    // nop
    ctx.pc = jump_target;
    if (rt.invoke_chained_call(ctx, &aot_mem) && ctx.pc == 0x08923530u) goto L_08923530;
    return;
L_08923530:
    ctx.set_gpr(3, rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(32)));
    ctx.set_gpr(2, 0u + static_cast<std::uint32_t>(-2));
    ctx.set_gpr(5, ctx.gpr[3] & ctx.gpr[2]);
    { const bool branch_taken = static_cast<std::int32_t>(ctx.gpr[16]) <= 0;
    // nop
      if (branch_taken) {
          goto L_08923560;
      }
      goto L_08923544;
    }
L_08923544:
    ctx.set_gpr(4, rt.memory().aot_load32(ctx.gpr[18] + static_cast<std::uint32_t>(132)));
    ctx.set_gpr(6, ctx.gpr[16] + 0u);
    ctx.set_gpr(7, 0u + static_cast<std::uint32_t>(1));
    ctx.set_gpr(25, rt.memory().aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(0)));
    ctx.set_gpr(25, rt.memory().aot_load32(ctx.gpr[25] + static_cast<std::uint32_t>(116)));
    jump_target = ctx.gpr[25];
    ctx.set_gpr(31, 0x08923560u);
    // nop
    ctx.pc = jump_target;
    if (rt.invoke_chained_call(ctx, &aot_mem) && ctx.pc == 0x08923560u) goto L_08923560;
    return;
L_08923560:
    ctx.set_gpr(4, 0u + 0u);
    ctx.set_gpr(3, rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(32)));
    { const bool branch_taken = ctx.gpr[3] == 0u;
    // nop
      if (branch_taken) {
          goto L_0892358C;
      }
      goto L_08923570;
    }
L_08923570:
    ctx.set_gpr(2, ctx.gpr[3] & 1u);
    ctx.set_gpr(2, ctx.gpr[2] ^ 1u);
    ctx.set_gpr(2, ctx.gpr[2] < static_cast<std::uint32_t>(1) ? 1u : 0u);
    ctx.set_gpr(2, ctx.gpr[2] ^ 1u);
    { const bool branch_taken = ctx.gpr[2] == 0u;
    // nop
      if (branch_taken) {
          goto L_0892358C;
      }
      goto L_08923588;
    }
L_08923588:
    ctx.set_gpr(4, 0u + static_cast<std::uint32_t>(1));
    goto L_0892358C;
L_0892358C:
    { const bool branch_taken = ctx.gpr[4] == 0u;
    // nop
      if (branch_taken) {
          goto L_089235B8;
      }
      goto L_08923594;
    }
L_08923594:
    ctx.set_gpr(5, ctx.gpr[3] + static_cast<std::uint32_t>(-8));
    ctx.set_gpr(2, rt.memory().aot_load32(ctx.gpr[3] + static_cast<std::uint32_t>(-4)));
    ctx.set_gpr(2, ctx.gpr[2] + static_cast<std::uint32_t>(-1));
    rt.memory().aot_store32(ctx.gpr[3] + static_cast<std::uint32_t>(-4), ctx.gpr[2]);
    { const bool branch_taken = ctx.gpr[2] != 0u;
    // nop
      if (branch_taken) {
          goto L_089235B8;
      }
      goto L_089235AC;
    }
L_089235AC:
    ctx.set_gpr(4, rt.memory().aot_load32(ctx.gpr[5] + static_cast<std::uint32_t>(0)));
    ctx.set_gpr(31, 0x089235B8u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0085_entry, 85u, 887u, 0x0895BD2Cu>(ctx, &aot_mem) && ctx.pc == 0x089235B8u) goto L_089235B8;
    return;
L_089235B8:
    ctx.set_gpr(17, ctx.gpr[17] + static_cast<std::uint32_t>(1));
    goto L_089235BC;
L_089235BC:
    ctx.set_gpr(2, rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(44)));
    ctx.set_gpr(2, static_cast<std::int32_t>(ctx.gpr[17]) < static_cast<std::int32_t>(ctx.gpr[2]) ? 1u : 0u);
    { const bool branch_taken = ctx.gpr[2] != 0u;
    // nop
      if (branch_taken) {
          goto L_089234A8;
      }
      goto L_089235CC;
    }
L_089235CC:
    ctx.set_gpr(2, 0u + 0u);
    ctx.set_gpr(31, rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(12)));
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
L_089235EC:
    ctx.set_gpr(29, ctx.gpr[29] + static_cast<std::uint32_t>(-32));
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(12), ctx.gpr[31]);
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(8), ctx.gpr[18]);
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(4), ctx.gpr[17]);
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(0), ctx.gpr[16]);
    ctx.set_gpr(17, ctx.gpr[4] + 0u);
    ctx.set_gpr(2, rt.memory().aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(300)));
    rt.memory().aot_store32(ctx.gpr[4] + static_cast<std::uint32_t>(84), ctx.gpr[2]);
    rt.memory().aot_store32(ctx.gpr[4] + static_cast<std::uint32_t>(88), 0u);
    ctx.set_gpr(2, rt.memory().aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(160)));
    rt.memory().aot_store32(ctx.gpr[4] + static_cast<std::uint32_t>(92), ctx.gpr[2]);
    ctx.set_gpr(31, 0x08923620u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0072_entry, 72u, 568u, 0x089267ECu>(ctx, &aot_mem) && ctx.pc == 0x08923620u) goto L_08923620;
    return;
L_08923620:
    ctx.set_gpr(4, ctx.gpr[2] + 0u);
    ctx.set_gpr(31, 0x0892362Cu);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0060_entry, 60u, 88u, 0x088F4808u>(ctx, &aot_mem) && ctx.pc == 0x0892362Cu) goto L_0892362C;
    return;
L_0892362C:
    ctx.set_gpr(4, ctx.gpr[17] + static_cast<std::uint32_t>(40));
    ctx.set_gpr(5, ctx.gpr[2] + 0u);
    ctx.set_gpr(31, 0x0892363Cu);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0085_entry, 85u, 67u, 0x0895853Cu>(ctx, &aot_mem) && ctx.pc == 0x0892363Cu) goto L_0892363C;
    return;
L_0892363C:
    ctx.set_gpr(4, rt.memory().aot_load32(ctx.gpr[17] + static_cast<std::uint32_t>(40)));
    ctx.set_gpr(5, rt.memory().aot_load32(ctx.gpr[17] + static_cast<std::uint32_t>(140)));
    ctx.set_gpr(31, 0x0892364Cu);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0081_entry, 81u, 312u, 0x089495E8u>(ctx, &aot_mem) && ctx.pc == 0x0892364Cu) goto L_0892364C;
    return;
L_0892364C:
    ctx.set_gpr(4, ctx.gpr[17] + 0u);
    ctx.set_gpr(31, 0x08923658u);
    // nop
    goto L_08922910;
L_08923658:
    ctx.set_gpr(3, 0u + static_cast<std::uint32_t>(1));
    { const bool branch_taken = ctx.gpr[2] != ctx.gpr[3];
    // nop
      if (branch_taken) {
          goto L_08923670;
      }
      goto L_08923664;
    }
L_08923664:
    ctx.set_gpr(2, ctx.gpr[3] + 0u);
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_089237A8;
      }
      goto L_08923670;
    }
L_08923670:
    ctx.set_gpr(16, 0u + 0u);
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_08923794;
      }
      goto L_0892367C;
    }
L_0892367C:
    ctx.set_gpr(4, ctx.gpr[29] + static_cast<std::uint32_t>(28));
    ctx.set_gpr(5, ctx.gpr[17] + 0u);
    ctx.set_gpr(31, 0x0892368Cu);
    // nop
    goto L_089229E0;
L_0892368C:
    ctx.set_gpr(4, rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(28)));
    { const bool branch_taken = ctx.gpr[4] != 0u;
    // nop
      if (branch_taken) {
          goto L_089236B4;
      }
      goto L_08923698;
    }
L_08923698:
    { const bool branch_taken = ctx.gpr[4] == 0u;
    // nop
      if (branch_taken) {
          goto L_089236A8;
      }
      goto L_089236A0;
    }
L_089236A0:
    ctx.set_gpr(31, 0x089236A8u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0014_entry, 14u, 257u, 0x0883D454u>(ctx, &aot_mem) && ctx.pc == 0x089236A8u) goto L_089236A8;
    return;
L_089236A8:
    ctx.set_gpr(2, 0u + static_cast<std::uint32_t>(1));
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_089237A8;
      }
      goto L_089236B4;
    }
L_089236B4:
    ctx.set_gpr(2, rt.memory().aot_load8(ctx.gpr[17] + static_cast<std::uint32_t>(69)));
    { const bool branch_taken = ctx.gpr[2] == 0u;
    // nop
      if (branch_taken) {
          goto L_08923718;
      }
      goto L_089236C0;
    }
L_089236C0:
    ctx.set_gpr(2, rt.memory().aot_load32(ctx.gpr[17] + static_cast<std::uint32_t>(344)));
    { const bool branch_taken = ctx.gpr[2] == 0u;
    // nop
      if (branch_taken) {
          goto L_08923718;
      }
      goto L_089236CC;
    }
L_089236CC:
    ctx.set_gpr(25, rt.memory().aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(0)));
    ctx.set_gpr(25, rt.memory().aot_load32(ctx.gpr[25] + static_cast<std::uint32_t>(120)));
    jump_target = ctx.gpr[25];
    ctx.set_gpr(31, 0x089236DCu);
    // nop
    ctx.pc = jump_target;
    if (rt.invoke_chained_call(ctx, &aot_mem) && ctx.pc == 0x089236DCu) goto L_089236DC;
    return;
L_089236DC:
    ctx.set_gpr(3, static_cast<std::int32_t>(ctx.gpr[2]) < 6 ? 1u : 0u);
    { const bool branch_taken = ctx.gpr[3] != 0u;
    // nop
      if (branch_taken) {
          goto L_0892372C;
      }
      goto L_089236E8;
    }
L_089236E8:
    ctx.set_gpr(4, rt.memory().aot_load32(ctx.gpr[17] + static_cast<std::uint32_t>(344)));
    ctx.set_gpr(3, ctx.gpr[2] << 2u);
    ctx.set_gpr(2, rt.memory().aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(16)));
    ctx.set_gpr(2, ctx.gpr[2] + ctx.gpr[3]);
    ctx.set_gpr(5, rt.memory().aot_load32(ctx.gpr[2] + static_cast<std::uint32_t>(0)));
    ctx.set_gpr(4, rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(28)));
    ctx.set_gpr(25, rt.memory().aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(0)));
    ctx.set_gpr(25, rt.memory().aot_load32(ctx.gpr[25] + static_cast<std::uint32_t>(116)));
    jump_target = ctx.gpr[25];
    ctx.set_gpr(31, 0x08923710u);
    // nop
    ctx.pc = jump_target;
    if (rt.invoke_chained_call(ctx, &aot_mem) && ctx.pc == 0x08923710u) goto L_08923710;
    return;
L_08923710:
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_0892372C;
      }
      goto L_08923718;
    }
L_08923718:
    ctx.set_gpr(5, 0u + static_cast<std::uint32_t>(-1));
    ctx.set_gpr(25, rt.memory().aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(0)));
    ctx.set_gpr(25, rt.memory().aot_load32(ctx.gpr[25] + static_cast<std::uint32_t>(116)));
    jump_target = ctx.gpr[25];
    ctx.set_gpr(31, 0x0892372Cu);
    // nop
    ctx.pc = jump_target;
    if (rt.invoke_chained_call(ctx, &aot_mem) && ctx.pc == 0x0892372Cu) goto L_0892372C;
    return;
L_0892372C:
    ctx.set_gpr(4, rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(28)));
    ctx.set_gpr(18, rt.memory().aot_load32(ctx.gpr[17] + static_cast<std::uint32_t>(40)));
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(24), ctx.gpr[4]);
    { const bool branch_taken = ctx.gpr[4] == 0u;
    // nop
      if (branch_taken) {
          goto L_08923748;
      }
      goto L_08923740;
    }
L_08923740:
    ctx.set_gpr(31, 0x08923748u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0014_entry, 14u, 274u, 0x0883D588u>(ctx, &aot_mem) && ctx.pc == 0x08923748u) goto L_08923748;
    return;
L_08923748:
    ctx.set_gpr(3, ctx.gpr[16] << 2u);
    ctx.set_gpr(2, rt.memory().aot_load32(ctx.gpr[18] + static_cast<std::uint32_t>(16)));
    ctx.set_gpr(2, ctx.gpr[2] + ctx.gpr[3]);
    ctx.set_gpr(4, rt.memory().aot_load32(ctx.gpr[2] + static_cast<std::uint32_t>(0)));
    { const bool branch_taken = ctx.gpr[4] == 0u;
    // nop
      if (branch_taken) {
          goto L_08923768;
      }
      goto L_08923760;
    }
L_08923760:
    ctx.set_gpr(31, 0x08923768u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0014_entry, 14u, 257u, 0x0883D454u>(ctx, &aot_mem) && ctx.pc == 0x08923768u) goto L_08923768;
    return;
L_08923768:
    ctx.set_gpr(4, ctx.gpr[18] + 0u);
    ctx.set_gpr(5, ctx.gpr[16] + 0u);
    ctx.set_gpr(6, ctx.gpr[29] + static_cast<std::uint32_t>(24));
    ctx.set_gpr(31, 0x0892377Cu);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0051_entry, 51u, 23u, 0x088D019Cu>(ctx, &aot_mem) && ctx.pc == 0x0892377Cu) goto L_0892377C;
    return;
L_0892377C:
    ctx.set_gpr(4, rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(28)));
    { const bool branch_taken = ctx.gpr[4] == 0u;
    // nop
      if (branch_taken) {
          goto L_08923790;
      }
      goto L_08923788;
    }
L_08923788:
    ctx.set_gpr(31, 0x08923790u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0014_entry, 14u, 257u, 0x0883D454u>(ctx, &aot_mem) && ctx.pc == 0x08923790u) goto L_08923790;
    return;
L_08923790:
    ctx.set_gpr(16, ctx.gpr[16] + static_cast<std::uint32_t>(1));
    goto L_08923794;
L_08923794:
    ctx.set_gpr(2, rt.memory().aot_load32(ctx.gpr[17] + static_cast<std::uint32_t>(140)));
    ctx.set_gpr(2, static_cast<std::int32_t>(ctx.gpr[16]) < static_cast<std::int32_t>(ctx.gpr[2]) ? 1u : 0u);
    { const bool branch_taken = ctx.gpr[2] != 0u;
    // nop
      if (branch_taken) {
          goto L_0892367C;
      }
      goto L_089237A4;
    }
L_089237A4:
    ctx.set_gpr(2, rt.memory().aot_load8(ctx.gpr[17] + static_cast<std::uint32_t>(316)));
    goto L_089237A8;
L_089237A8:
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
L_089237C4:
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
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(44), 0u);
    ctx.set_gpr(4, rt.memory().aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(132)));
    ctx.set_gpr(5, ctx.gpr[21] + static_cast<std::uint32_t>(144));
    ctx.set_gpr(6, 0u + static_cast<std::uint32_t>(4));
    ctx.set_gpr(7, 0u + static_cast<std::uint32_t>(1));
    ctx.set_gpr(25, rt.memory().aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(0)));
    ctx.set_gpr(25, rt.memory().aot_load32(ctx.gpr[25] + static_cast<std::uint32_t>(108)));
    jump_target = ctx.gpr[25];
    ctx.set_gpr(31, 0x08923810u);
    // nop
    ctx.pc = jump_target;
    if (rt.invoke_chained_call(ctx, &aot_mem) && ctx.pc == 0x08923810u) goto L_08923810;
    return;
L_08923810:
    ctx.set_gpr(4, rt.memory().aot_load32(ctx.gpr[21] + static_cast<std::uint32_t>(132)));
    ctx.set_gpr(5, ctx.gpr[29] + static_cast<std::uint32_t>(44));
    ctx.set_gpr(6, 0u + static_cast<std::uint32_t>(4));
    ctx.set_gpr(7, 0u + static_cast<std::uint32_t>(1));
    ctx.set_gpr(25, rt.memory().aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(0)));
    ctx.set_gpr(25, rt.memory().aot_load32(ctx.gpr[25] + static_cast<std::uint32_t>(108)));
    jump_target = ctx.gpr[25];
    ctx.set_gpr(31, 0x08923830u);
    // nop
    ctx.pc = jump_target;
    if (rt.invoke_chained_call(ctx, &aot_mem) && ctx.pc == 0x08923830u) goto L_08923830;
    return;
L_08923830:
    ctx.set_gpr(2, rt.memory().aot_load8(ctx.gpr[21] + static_cast<std::uint32_t>(204)));
    { const bool branch_taken = ctx.gpr[2] == 0u;
    // nop
      if (branch_taken) {
          goto L_08923874;
      }
      goto L_0892383C;
    }
L_0892383C:
    ctx.set_gpr(4, rt.memory().aot_load32(ctx.gpr[21] + static_cast<std::uint32_t>(244)));
    ctx.set_gpr(5, ctx.gpr[21] + static_cast<std::uint32_t>(144));
    ctx.set_gpr(6, 0u + static_cast<std::uint32_t>(1));
    ctx.set_gpr(25, rt.memory().aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(0)));
    ctx.set_gpr(25, rt.memory().aot_load32(ctx.gpr[25] + static_cast<std::uint32_t>(220)));
    jump_target = ctx.gpr[25];
    ctx.set_gpr(31, 0x08923858u);
    // nop
    ctx.pc = jump_target;
    if (rt.invoke_chained_call(ctx, &aot_mem) && ctx.pc == 0x08923858u) goto L_08923858;
    return;
L_08923858:
    ctx.set_gpr(4, rt.memory().aot_load32(ctx.gpr[21] + static_cast<std::uint32_t>(244)));
    ctx.set_gpr(5, ctx.gpr[29] + static_cast<std::uint32_t>(44));
    ctx.set_gpr(6, 0u + static_cast<std::uint32_t>(1));
    ctx.set_gpr(25, rt.memory().aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(0)));
    ctx.set_gpr(25, rt.memory().aot_load32(ctx.gpr[25] + static_cast<std::uint32_t>(220)));
    jump_target = ctx.gpr[25];
    ctx.set_gpr(31, 0x08923874u);
    // nop
    ctx.pc = jump_target;
    if (rt.invoke_chained_call(ctx, &aot_mem) && ctx.pc == 0x08923874u) goto L_08923874;
    return;
L_08923874:
    ctx.set_gpr(4, ctx.gpr[21] + 0u);
    ctx.set_gpr(5, 0u + static_cast<std::uint32_t>(4096));
    ctx.set_gpr(31, 0x08923884u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0072_entry, 72u, 546u, 0x08926644u>(ctx, &aot_mem) && ctx.pc == 0x08923884u) goto L_08923884;
    return;
L_08923884:
    ctx.set_gpr(3, 0u + static_cast<std::uint32_t>(1));
    { const bool branch_taken = ctx.gpr[2] != ctx.gpr[3];
    // nop
      if (branch_taken) {
          goto L_0892389C;
      }
      goto L_08923890;
    }
L_08923890:
    ctx.set_gpr(2, ctx.gpr[3] + 0u);
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_089239D0;
      }
      goto L_0892389C;
    }
L_0892389C:
    ctx.set_gpr(20, 0u + static_cast<std::uint32_t>(8));
    ctx.set_gpr(4, ctx.gpr[21] + 0u);
    ctx.set_gpr(5, rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(44)));
    ctx.set_gpr(31, 0x089238B0u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0081_entry, 81u, 312u, 0x089495E8u>(ctx, &aot_mem) && ctx.pc == 0x089238B0u) goto L_089238B0;
    return;
L_089238B0:
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_089239BC;
      }
      goto L_089238B8;
    }
L_089238B8:
    ctx.set_gpr(4, rt.memory().aot_load32(ctx.gpr[21] + static_cast<std::uint32_t>(300)));
    ctx.set_gpr(2, 0u + static_cast<std::uint32_t>(-2));
    ctx.set_gpr(19, ctx.gpr[4] & ctx.gpr[2]);
    ctx.set_gpr(2, ctx.gpr[3] - ctx.gpr[20]);
    ctx.set_gpr(1, static_cast<std::int32_t>(ctx.gpr[2]) < static_cast<std::int32_t>(ctx.gpr[19]) ? 1u : 0u);
    { const bool branch_taken = ctx.gpr[1] == 0u;
    // nop
      if (branch_taken) {
          goto L_089238D8;
      }
      goto L_089238D4;
    }
L_089238D4:
    ctx.set_gpr(19, ctx.gpr[2] + 0u);
    goto L_089238D8;
L_089238D8:
    ctx.set_gpr(18, static_cast<std::uint32_t>(static_cast<std::int32_t>(ctx.gpr[19]) >> 1u));
    ctx.set_gpr(4, rt.memory().aot_load32(ctx.gpr[21] + static_cast<std::uint32_t>(132)));
    ctx.set_gpr(5, rt.memory().aot_load32(ctx.gpr[21] + static_cast<std::uint32_t>(304)));
    ctx.set_gpr(6, ctx.gpr[19] + 0u);
    ctx.set_gpr(7, 0u + static_cast<std::uint32_t>(1));
    ctx.set_gpr(25, rt.memory().aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(0)));
    ctx.set_gpr(25, rt.memory().aot_load32(ctx.gpr[25] + static_cast<std::uint32_t>(108)));
    jump_target = ctx.gpr[25];
    ctx.set_gpr(31, 0x089238FCu);
    // nop
    ctx.pc = jump_target;
    if (rt.invoke_chained_call(ctx, &aot_mem) && ctx.pc == 0x089238FCu) goto L_089238FC;
    return;
L_089238FC:
    ctx.set_gpr(2, rt.memory().aot_load8(ctx.gpr[21] + static_cast<std::uint32_t>(204)));
    { const bool branch_taken = ctx.gpr[2] == 0u;
    // nop
      if (branch_taken) {
          goto L_08923924;
      }
      goto L_08923908;
    }
L_08923908:
    ctx.set_gpr(4, rt.memory().aot_load32(ctx.gpr[21] + static_cast<std::uint32_t>(248)));
    ctx.set_gpr(5, rt.memory().aot_load32(ctx.gpr[21] + static_cast<std::uint32_t>(304)));
    ctx.set_gpr(6, ctx.gpr[18] + 0u);
    ctx.set_gpr(25, rt.memory().aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(0)));
    ctx.set_gpr(25, rt.memory().aot_load32(ctx.gpr[25] + static_cast<std::uint32_t>(220)));
    jump_target = ctx.gpr[25];
    ctx.set_gpr(31, 0x08923924u);
    // nop
    ctx.pc = jump_target;
    if (rt.invoke_chained_call(ctx, &aot_mem) && ctx.pc == 0x08923924u) goto L_08923924;
    return;
L_08923924:
    ctx.set_gpr(2, ctx.gpr[20] + static_cast<std::uint32_t>(-8));
    ctx.set_gpr(22, ctx.gpr[2] >> 1u);
    ctx.set_gpr(17, 0u + 0u);
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_089239AC;
      }
      goto L_08923938;
    }
L_08923938:
    ctx.set_gpr(4, rt.memory().aot_load32(ctx.gpr[21] + static_cast<std::uint32_t>(40)));
    ctx.set_gpr(3, ctx.gpr[17] << 1u);
    ctx.set_gpr(2, rt.memory().aot_load32(ctx.gpr[21] + static_cast<std::uint32_t>(304)));
    ctx.set_gpr(2, ctx.gpr[2] + ctx.gpr[3]);
    ctx.set_gpr(2, static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int16_t>(rt.memory().aot_load16(ctx.gpr[2] + static_cast<std::uint32_t>(0))))));
    ctx.set_gpr(3, ctx.gpr[2] << 2u);
    ctx.set_gpr(2, rt.memory().aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(16)));
    ctx.set_gpr(2, ctx.gpr[2] + ctx.gpr[3]);
    ctx.set_gpr(4, rt.memory().aot_load32(ctx.gpr[2] + static_cast<std::uint32_t>(0)));
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(40), ctx.gpr[4]);
    { const bool branch_taken = ctx.gpr[4] == 0u;
    // nop
      if (branch_taken) {
          goto L_08923970;
      }
      goto L_08923968;
    }
L_08923968:
    ctx.set_gpr(31, 0x08923970u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0014_entry, 14u, 274u, 0x0883D588u>(ctx, &aot_mem) && ctx.pc == 0x08923970u) goto L_08923970;
    return;
L_08923970:
    ctx.set_gpr(16, ctx.gpr[17] + ctx.gpr[22]);
    ctx.set_gpr(3, ctx.gpr[16] << 2u);
    ctx.set_gpr(2, rt.memory().aot_load32(ctx.gpr[21] + static_cast<std::uint32_t>(16)));
    ctx.set_gpr(2, ctx.gpr[2] + ctx.gpr[3]);
    ctx.set_gpr(4, rt.memory().aot_load32(ctx.gpr[2] + static_cast<std::uint32_t>(0)));
    { const bool branch_taken = ctx.gpr[4] == 0u;
    // nop
      if (branch_taken) {
          goto L_08923994;
      }
      goto L_0892398C;
    }
L_0892398C:
    ctx.set_gpr(31, 0x08923994u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0014_entry, 14u, 257u, 0x0883D454u>(ctx, &aot_mem) && ctx.pc == 0x08923994u) goto L_08923994;
    return;
L_08923994:
    ctx.set_gpr(4, ctx.gpr[21] + 0u);
    ctx.set_gpr(5, ctx.gpr[16] + 0u);
    ctx.set_gpr(6, ctx.gpr[29] + static_cast<std::uint32_t>(40));
    ctx.set_gpr(31, 0x089239A8u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0051_entry, 51u, 23u, 0x088D019Cu>(ctx, &aot_mem) && ctx.pc == 0x089239A8u) goto L_089239A8;
    return;
L_089239A8:
    ctx.set_gpr(17, ctx.gpr[17] + static_cast<std::uint32_t>(1));
    goto L_089239AC;
L_089239AC:
    ctx.set_gpr(2, static_cast<std::int32_t>(ctx.gpr[17]) < static_cast<std::int32_t>(ctx.gpr[18]) ? 1u : 0u);
    { const bool branch_taken = ctx.gpr[2] != 0u;
    // nop
      if (branch_taken) {
          goto L_08923938;
      }
      goto L_089239B8;
    }
L_089239B8:
    ctx.set_gpr(20, ctx.gpr[20] + ctx.gpr[19]);
    goto L_089239BC;
L_089239BC:
    ctx.set_gpr(3, rt.memory().aot_load32(ctx.gpr[21] + static_cast<std::uint32_t>(144)));
    ctx.set_gpr(2, static_cast<std::int32_t>(ctx.gpr[20]) < static_cast<std::int32_t>(ctx.gpr[3]) ? 1u : 0u);
    { const bool branch_taken = ctx.gpr[2] != 0u;
    // nop
      if (branch_taken) {
          goto L_089238B8;
      }
      goto L_089239CC;
    }
L_089239CC:
    ctx.set_gpr(2, 0u + 0u);
    goto L_089239D0;
L_089239D0:
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
L_089239FC:
    ctx.set_gpr(29, ctx.gpr[29] + static_cast<std::uint32_t>(-16));
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(12), ctx.gpr[31]);
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(8), ctx.gpr[18]);
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(4), ctx.gpr[17]);
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(0), ctx.gpr[16]);
    ctx.set_gpr(18, ctx.gpr[4] + 0u);
    ctx.set_gpr(16, rt.memory().aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(8)));
    ctx.set_gpr(31, 0x08923A20u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0072_entry, 72u, 568u, 0x089267ECu>(ctx, &aot_mem) && ctx.pc == 0x08923A20u) goto L_08923A20;
    return;
L_08923A20:
    ctx.set_gpr(4, ctx.gpr[2] + 0u);
    ctx.set_gpr(31, 0x08923A2Cu);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0061_entry, 61u, 111u, 0x088F8A08u>(ctx, &aot_mem) && ctx.pc == 0x08923A2Cu) goto L_08923A2C;
    return;
L_08923A2C:
    ctx.set_gpr(4, ctx.gpr[18] + static_cast<std::uint32_t>(44));
    ctx.set_gpr(5, ctx.gpr[2] + 0u);
    ctx.set_gpr(31, 0x08923A3Cu);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0085_entry, 85u, 67u, 0x0895853Cu>(ctx, &aot_mem) && ctx.pc == 0x08923A3Cu) goto L_08923A3C;
    return;
L_08923A3C:
    ctx.set_gpr(4, rt.memory().aot_load32(ctx.gpr[18] + static_cast<std::uint32_t>(44)));
    { const bool branch_taken = static_cast<std::int32_t>(ctx.gpr[16]) < 0;
    // nop
      if (branch_taken) {
          goto L_08923A74;
      }
      goto L_08923A48;
    }
L_08923A48:
    ctx.set_gpr(2, rt.memory().aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(12)));
    ctx.set_gpr(1, static_cast<std::int32_t>(ctx.gpr[2]) < static_cast<std::int32_t>(ctx.gpr[16]) ? 1u : 0u);
    { const bool branch_taken = ctx.gpr[1] != 0u;
    // nop
      if (branch_taken) {
          goto L_08923A64;
      }
      goto L_08923A58;
    }
L_08923A58:
    rt.memory().aot_store32(ctx.gpr[4] + static_cast<std::uint32_t>(8), ctx.gpr[16]);
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_08923A74;
      }
      goto L_08923A64;
    }
L_08923A64:
    ctx.set_gpr(5, ctx.gpr[16] + 0u);
    ctx.set_gpr(6, 0u + static_cast<std::uint32_t>(4));
    ctx.set_gpr(31, 0x08923A74u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0066_entry, 66u, 795u, 0x0890FB1Cu>(ctx, &aot_mem) && ctx.pc == 0x08923A74u) goto L_08923A74;
    return;
L_08923A74:
    ctx.set_gpr(17, 0u + 0u);
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_08923AF8;
      }
      goto L_08923A80;
    }
L_08923A80:
    ctx.set_gpr(4, ctx.gpr[18] + 0u);
    ctx.set_gpr(5, ctx.gpr[17] + 0u);
    ctx.set_gpr(31, 0x08923A90u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0067_entry, 67u, 141u, 0x08910940u>(ctx, &aot_mem) && ctx.pc == 0x08923A90u) goto L_08923A90;
    return;
L_08923A90:
    ctx.set_gpr(4, ctx.gpr[2] + 0u);
    ctx.set_gpr(5, ctx.gpr[18] + 0u);
    ctx.set_gpr(25, rt.memory().aot_load32(ctx.gpr[2] + static_cast<std::uint32_t>(0)));
    ctx.set_gpr(25, rt.memory().aot_load32(ctx.gpr[25] + static_cast<std::uint32_t>(124)));
    jump_target = ctx.gpr[25];
    ctx.set_gpr(31, 0x08923AA8u);
    // nop
    ctx.pc = jump_target;
    if (rt.invoke_chained_call(ctx, &aot_mem) && ctx.pc == 0x08923AA8u) goto L_08923AA8;
    return;
L_08923AA8:
    { const bool branch_taken = ctx.gpr[2] == 0u;
    // nop
      if (branch_taken) {
          goto L_08923AF4;
      }
      goto L_08923AB0;
    }
L_08923AB0:
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_08923AE4;
      }
      goto L_08923AB8;
    }
L_08923AB8:
    ctx.set_gpr(4, ctx.gpr[18] + 0u);
    ctx.set_gpr(5, ctx.gpr[17] + 0u);
    ctx.set_gpr(31, 0x08923AC8u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0067_entry, 67u, 141u, 0x08910940u>(ctx, &aot_mem) && ctx.pc == 0x08923AC8u) goto L_08923AC8;
    return;
L_08923AC8:
    ctx.set_gpr(4, ctx.gpr[2] + 0u);
    ctx.set_gpr(5, ctx.gpr[18] + 0u);
    ctx.set_gpr(25, rt.memory().aot_load32(ctx.gpr[2] + static_cast<std::uint32_t>(0)));
    ctx.set_gpr(25, rt.memory().aot_load32(ctx.gpr[25] + static_cast<std::uint32_t>(184)));
    jump_target = ctx.gpr[25];
    ctx.set_gpr(31, 0x08923AE0u);
    // nop
    ctx.pc = jump_target;
    if (rt.invoke_chained_call(ctx, &aot_mem) && ctx.pc == 0x08923AE0u) goto L_08923AE0;
    return;
L_08923AE0:
    ctx.set_gpr(17, ctx.gpr[17] + static_cast<std::uint32_t>(-1));
    goto L_08923AE4;
L_08923AE4:
    { const bool branch_taken = static_cast<std::int32_t>(ctx.gpr[17]) >= 0;
    // nop
      if (branch_taken) {
          goto L_08923AB8;
      }
      goto L_08923AEC;
    }
L_08923AEC:
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_08923B04;
      }
      goto L_08923AF4;
    }
L_08923AF4:
    ctx.set_gpr(17, ctx.gpr[17] + static_cast<std::uint32_t>(1));
    goto L_08923AF8;
L_08923AF8:
    ctx.set_gpr(2, static_cast<std::int32_t>(ctx.gpr[17]) < static_cast<std::int32_t>(ctx.gpr[16]) ? 1u : 0u);
    { const bool branch_taken = ctx.gpr[2] != 0u;
    // nop
      if (branch_taken) {
          goto L_08923A80;
      }
      goto L_08923B04;
    }
L_08923B04:
    ctx.set_gpr(2, rt.memory().aot_load8(ctx.gpr[18] + static_cast<std::uint32_t>(316)));
    { const bool branch_taken = ctx.gpr[2] == 0u;
    // nop
      if (branch_taken) {
          goto L_08923B1C;
      }
      goto L_08923B10;
    }
L_08923B10:
    ctx.set_gpr(2, 0u + static_cast<std::uint32_t>(1));
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_08923B20;
      }
      goto L_08923B1C;
    }
L_08923B1C:
    ctx.set_gpr(2, 0u + 0u);
    goto L_08923B20;
L_08923B20:
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
L_08923B3C:
    ctx.set_gpr(29, ctx.gpr[29] + static_cast<std::uint32_t>(-32));
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(12), ctx.gpr[31]);
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(8), ctx.gpr[18]);
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(4), ctx.gpr[17]);
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(0), ctx.gpr[16]);
    ctx.set_gpr(18, ctx.gpr[4] + 0u);
    ctx.set_gpr(2, rt.memory().aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(300)));
    rt.memory().aot_store32(ctx.gpr[4] + static_cast<std::uint32_t>(84), ctx.gpr[2]);
    rt.memory().aot_store32(ctx.gpr[4] + static_cast<std::uint32_t>(88), 0u);
    ctx.set_gpr(2, rt.memory().aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(160)));
    rt.memory().aot_store32(ctx.gpr[4] + static_cast<std::uint32_t>(92), ctx.gpr[2]);
    ctx.set_gpr(2, rt.memory().aot_load8(ctx.gpr[4] + static_cast<std::uint32_t>(36)));
    { const bool branch_taken = ctx.gpr[2] == 0u;
    // nop
      if (branch_taken) {
          goto L_08923BF8;
      }
      goto L_08923B74;
    }
L_08923B74:
    ctx.set_gpr(31, 0x08923B7Cu);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0072_entry, 72u, 568u, 0x089267ECu>(ctx, &aot_mem) && ctx.pc == 0x08923B7Cu) goto L_08923B7C;
    return;
L_08923B7C:
    ctx.set_gpr(4, ctx.gpr[2] + 0u);
    ctx.set_gpr(31, 0x08923B88u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0061_entry, 61u, 111u, 0x088F8A08u>(ctx, &aot_mem) && ctx.pc == 0x08923B88u) goto L_08923B88;
    return;
L_08923B88:
    ctx.set_gpr(4, ctx.gpr[18] + static_cast<std::uint32_t>(44));
    ctx.set_gpr(5, ctx.gpr[2] + 0u);
    ctx.set_gpr(31, 0x08923B98u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0085_entry, 85u, 67u, 0x0895853Cu>(ctx, &aot_mem) && ctx.pc == 0x08923B98u) goto L_08923B98;
    return;
L_08923B98:
    ctx.set_gpr(5, rt.memory().aot_load32(ctx.gpr[18] + static_cast<std::uint32_t>(140)));
    ctx.set_gpr(4, rt.memory().aot_load32(ctx.gpr[18] + static_cast<std::uint32_t>(44)));
    { const bool branch_taken = static_cast<std::int32_t>(ctx.gpr[5]) < 0;
    // nop
      if (branch_taken) {
          goto L_08923BD0;
      }
      goto L_08923BA8;
    }
L_08923BA8:
    ctx.set_gpr(2, rt.memory().aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(12)));
    ctx.set_gpr(1, static_cast<std::int32_t>(ctx.gpr[2]) < static_cast<std::int32_t>(ctx.gpr[5]) ? 1u : 0u);
    { const bool branch_taken = ctx.gpr[1] != 0u;
    // nop
      if (branch_taken) {
          goto L_08923BC4;
      }
      goto L_08923BB8;
    }
L_08923BB8:
    rt.memory().aot_store32(ctx.gpr[4] + static_cast<std::uint32_t>(8), ctx.gpr[5]);
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_08923BD0;
      }
      goto L_08923BC4;
    }
L_08923BC4:
    ctx.set_gpr(6, 0u + static_cast<std::uint32_t>(4));
    ctx.set_gpr(31, 0x08923BD0u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0066_entry, 66u, 795u, 0x0890FB1Cu>(ctx, &aot_mem) && ctx.pc == 0x08923BD0u) goto L_08923BD0;
    return;
L_08923BD0:
    ctx.set_gpr(4, ctx.gpr[18] + 0u);
    ctx.set_gpr(31, 0x08923BDCu);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0072_entry, 72u, 568u, 0x089267ECu>(ctx, &aot_mem) && ctx.pc == 0x08923BDCu) goto L_08923BDC;
    return;
L_08923BDC:
    ctx.set_gpr(4, ctx.gpr[2] + 0u);
    ctx.set_gpr(31, 0x08923BE8u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0058_entry, 58u, 119u, 0x088ECA5Cu>(ctx, &aot_mem) && ctx.pc == 0x08923BE8u) goto L_08923BE8;
    return;
L_08923BE8:
    ctx.set_gpr(4, ctx.gpr[18] + static_cast<std::uint32_t>(96));
    ctx.set_gpr(5, ctx.gpr[2] + 0u);
    ctx.set_gpr(31, 0x08923BF8u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0085_entry, 85u, 67u, 0x0895853Cu>(ctx, &aot_mem) && ctx.pc == 0x08923BF8u) goto L_08923BF8;
    return;
L_08923BF8:
    ctx.set_gpr(4, ctx.gpr[18] + 0u);
    ctx.set_gpr(31, 0x08923C04u);
    // nop
    goto L_08922910;
L_08923C04:
    ctx.set_gpr(3, 0u + static_cast<std::uint32_t>(1));
    { const bool branch_taken = ctx.gpr[2] != ctx.gpr[3];
    // nop
      if (branch_taken) {
          goto L_08923C1C;
      }
      goto L_08923C10;
    }
L_08923C10:
    ctx.set_gpr(2, ctx.gpr[3] + 0u);
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_08923EB0;
      }
      goto L_08923C1C;
    }
L_08923C1C:
    ctx.set_gpr(4, ctx.gpr[18] + 0u);
    ctx.set_gpr(5, rt.memory().aot_load32(ctx.gpr[18] + static_cast<std::uint32_t>(140)));
    ctx.set_gpr(31, 0x08923C2Cu);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0081_entry, 81u, 312u, 0x089495E8u>(ctx, &aot_mem) && ctx.pc == 0x08923C2Cu) goto L_08923C2C;
    return;
L_08923C2C:
    ctx.set_gpr(17, 0u + 0u);
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_08923E9C;
      }
      goto L_08923C38;
    }
L_08923C38:
    ctx.set_gpr(4, ctx.gpr[29] + static_cast<std::uint32_t>(28));
    ctx.set_gpr(5, ctx.gpr[18] + 0u);
    ctx.set_gpr(31, 0x08923C48u);
    // nop
    goto L_089229E0;
L_08923C48:
    ctx.set_gpr(4, rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(28)));
    { const bool branch_taken = ctx.gpr[4] != 0u;
    // nop
      if (branch_taken) {
          goto L_08923C70;
      }
      goto L_08923C54;
    }
L_08923C54:
    { const bool branch_taken = ctx.gpr[4] == 0u;
    // nop
      if (branch_taken) {
          goto L_08923C64;
      }
      goto L_08923C5C;
    }
L_08923C5C:
    ctx.set_gpr(31, 0x08923C64u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0014_entry, 14u, 257u, 0x0883D454u>(ctx, &aot_mem) && ctx.pc == 0x08923C64u) goto L_08923C64;
    return;
L_08923C64:
    ctx.set_gpr(2, 0u + static_cast<std::uint32_t>(1));
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_08923EB0;
      }
      goto L_08923C70;
    }
L_08923C70:
    rt.memory().aot_store32(ctx.gpr[4] + static_cast<std::uint32_t>(12), ctx.gpr[17]);
    ctx.set_gpr(4, rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(28)));
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(24), ctx.gpr[4]);
    { const bool branch_taken = ctx.gpr[4] == 0u;
    // nop
      if (branch_taken) {
          goto L_08923C8C;
      }
      goto L_08923C84;
    }
L_08923C84:
    ctx.set_gpr(31, 0x08923C8Cu);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0014_entry, 14u, 274u, 0x0883D588u>(ctx, &aot_mem) && ctx.pc == 0x08923C8Cu) goto L_08923C8C;
    return;
L_08923C8C:
    ctx.set_gpr(16, ctx.gpr[17] << 2u);
    ctx.set_gpr(2, rt.memory().aot_load32(ctx.gpr[18] + static_cast<std::uint32_t>(16)));
    ctx.set_gpr(2, ctx.gpr[2] + ctx.gpr[16]);
    ctx.set_gpr(4, rt.memory().aot_load32(ctx.gpr[2] + static_cast<std::uint32_t>(0)));
    { const bool branch_taken = ctx.gpr[4] == 0u;
    // nop
      if (branch_taken) {
          goto L_08923CAC;
      }
      goto L_08923CA4;
    }
L_08923CA4:
    ctx.set_gpr(31, 0x08923CACu);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0014_entry, 14u, 257u, 0x0883D454u>(ctx, &aot_mem) && ctx.pc == 0x08923CACu) goto L_08923CAC;
    return;
L_08923CAC:
    ctx.set_gpr(4, ctx.gpr[18] + 0u);
    ctx.set_gpr(5, ctx.gpr[17] + 0u);
    ctx.set_gpr(6, ctx.gpr[29] + static_cast<std::uint32_t>(24));
    ctx.set_gpr(31, 0x08923CC0u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0051_entry, 51u, 23u, 0x088D019Cu>(ctx, &aot_mem) && ctx.pc == 0x08923CC0u) goto L_08923CC0;
    return;
L_08923CC0:
    ctx.set_gpr(2, rt.memory().aot_load8(ctx.gpr[18] + static_cast<std::uint32_t>(69)));
    { const bool branch_taken = ctx.gpr[2] == 0u;
    // nop
      if (branch_taken) {
          goto L_08923D28;
      }
      goto L_08923CCC;
    }
L_08923CCC:
    ctx.set_gpr(2, rt.memory().aot_load32(ctx.gpr[18] + static_cast<std::uint32_t>(344)));
    { const bool branch_taken = ctx.gpr[2] == 0u;
    // nop
      if (branch_taken) {
          goto L_08923D28;
      }
      goto L_08923CD8;
    }
L_08923CD8:
    ctx.set_gpr(4, rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(28)));
    ctx.set_gpr(25, rt.memory().aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(0)));
    ctx.set_gpr(25, rt.memory().aot_load32(ctx.gpr[25] + static_cast<std::uint32_t>(120)));
    jump_target = ctx.gpr[25];
    ctx.set_gpr(31, 0x08923CECu);
    // nop
    ctx.pc = jump_target;
    if (rt.invoke_chained_call(ctx, &aot_mem) && ctx.pc == 0x08923CECu) goto L_08923CEC;
    return;
L_08923CEC:
    ctx.set_gpr(3, static_cast<std::int32_t>(ctx.gpr[2]) < 6 ? 1u : 0u);
    { const bool branch_taken = ctx.gpr[3] != 0u;
    // nop
      if (branch_taken) {
          goto L_08923D40;
      }
      goto L_08923CF8;
    }
L_08923CF8:
    ctx.set_gpr(4, rt.memory().aot_load32(ctx.gpr[18] + static_cast<std::uint32_t>(344)));
    ctx.set_gpr(3, ctx.gpr[2] << 2u);
    ctx.set_gpr(2, rt.memory().aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(16)));
    ctx.set_gpr(2, ctx.gpr[2] + ctx.gpr[3]);
    ctx.set_gpr(5, rt.memory().aot_load32(ctx.gpr[2] + static_cast<std::uint32_t>(0)));
    ctx.set_gpr(4, rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(28)));
    ctx.set_gpr(25, rt.memory().aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(0)));
    ctx.set_gpr(25, rt.memory().aot_load32(ctx.gpr[25] + static_cast<std::uint32_t>(116)));
    jump_target = ctx.gpr[25];
    ctx.set_gpr(31, 0x08923D20u);
    // nop
    ctx.pc = jump_target;
    if (rt.invoke_chained_call(ctx, &aot_mem) && ctx.pc == 0x08923D20u) goto L_08923D20;
    return;
L_08923D20:
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_08923D40;
      }
      goto L_08923D28;
    }
L_08923D28:
    ctx.set_gpr(4, rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(28)));
    ctx.set_gpr(5, 0u + static_cast<std::uint32_t>(-1));
    ctx.set_gpr(25, rt.memory().aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(0)));
    ctx.set_gpr(25, rt.memory().aot_load32(ctx.gpr[25] + static_cast<std::uint32_t>(116)));
    jump_target = ctx.gpr[25];
    ctx.set_gpr(31, 0x08923D40u);
    // nop
    ctx.pc = jump_target;
    if (rt.invoke_chained_call(ctx, &aot_mem) && ctx.pc == 0x08923D40u) goto L_08923D40;
    return;
L_08923D40:
    ctx.set_gpr(4, rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(28)));
    ctx.set_gpr(5, ctx.gpr[18] + 0u);
    ctx.set_gpr(25, rt.memory().aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(0)));
    ctx.set_gpr(25, rt.memory().aot_load32(ctx.gpr[25] + static_cast<std::uint32_t>(124)));
    jump_target = ctx.gpr[25];
    ctx.set_gpr(31, 0x08923D58u);
    // nop
    ctx.pc = jump_target;
    if (rt.invoke_chained_call(ctx, &aot_mem) && ctx.pc == 0x08923D58u) goto L_08923D58;
    return;
L_08923D58:
    { const bool branch_taken = ctx.gpr[2] == 0u;
    // nop
      if (branch_taken) {
          goto L_08923DA8;
      }
      goto L_08923D60;
    }
L_08923D60:
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_08923D84;
      }
      goto L_08923D68;
    }
L_08923D68:
    ctx.set_gpr(4, rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(28)));
    ctx.set_gpr(5, ctx.gpr[18] + 0u);
    ctx.set_gpr(25, rt.memory().aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(0)));
    ctx.set_gpr(25, rt.memory().aot_load32(ctx.gpr[25] + static_cast<std::uint32_t>(184)));
    jump_target = ctx.gpr[25];
    ctx.set_gpr(31, 0x08923D80u);
    // nop
    ctx.pc = jump_target;
    if (rt.invoke_chained_call(ctx, &aot_mem) && ctx.pc == 0x08923D80u) goto L_08923D80;
    return;
L_08923D80:
    ctx.set_gpr(17, ctx.gpr[17] + static_cast<std::uint32_t>(-1));
    goto L_08923D84;
L_08923D84:
    { const bool branch_taken = static_cast<std::int32_t>(ctx.gpr[17]) >= 0;
    // nop
      if (branch_taken) {
          goto L_08923D68;
      }
      goto L_08923D8C;
    }
L_08923D8C:
    ctx.set_gpr(4, rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(28)));
    { const bool branch_taken = ctx.gpr[4] == 0u;
    // nop
      if (branch_taken) {
          goto L_08923EAC;
      }
      goto L_08923D98;
    }
L_08923D98:
    ctx.set_gpr(31, 0x08923DA0u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0014_entry, 14u, 257u, 0x0883D454u>(ctx, &aot_mem) && ctx.pc == 0x08923DA0u) goto L_08923DA0;
    return;
L_08923DA0:
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_08923EAC;
      }
      goto L_08923DA8;
    }
L_08923DA8:
    ctx.set_gpr(2, rt.memory().aot_load8(ctx.gpr[18] + static_cast<std::uint32_t>(36)));
    { const bool branch_taken = ctx.gpr[2] == 0u;
    // nop
      if (branch_taken) {
          goto L_08923E84;
      }
      goto L_08923DB4;
    }
L_08923DB4:
    ctx.set_gpr(2, rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(28)));
    ctx.set_gpr(4, rt.memory().aot_load32(ctx.gpr[2] + static_cast<std::uint32_t>(24)));
    ctx.set_gpr(3, rt.memory().aot_load32(ctx.gpr[18] + static_cast<std::uint32_t>(44)));
    ctx.set_gpr(2, rt.memory().aot_load32(ctx.gpr[3] + static_cast<std::uint32_t>(8)));
    { const bool branch_taken = ctx.gpr[2] == 0u;
    // nop
      if (branch_taken) {
          goto L_08923DEC;
      }
      goto L_08923DCC;
    }
L_08923DCC:
    { const bool branch_taken = static_cast<std::int32_t>(ctx.gpr[17]) < 0;
    // nop
      if (branch_taken) {
          goto L_08923DEC;
      }
      goto L_08923DD4;
    }
L_08923DD4:
    ctx.set_gpr(1, static_cast<std::int32_t>(ctx.gpr[17]) < static_cast<std::int32_t>(ctx.gpr[2]) ? 1u : 0u);
    { const bool branch_taken = ctx.gpr[1] == 0u;
    // nop
      if (branch_taken) {
          goto L_08923DEC;
      }
      goto L_08923DE0;
    }
L_08923DE0:
    ctx.set_gpr(2, rt.memory().aot_load32(ctx.gpr[3] + static_cast<std::uint32_t>(16)));
    ctx.set_gpr(2, ctx.gpr[2] + ctx.gpr[16]);
    rt.memory().aot_store32(ctx.gpr[2] + static_cast<std::uint32_t>(0), ctx.gpr[4]);
    goto L_08923DEC;
L_08923DEC:
    ctx.set_gpr(4, rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(28)));
    ctx.set_gpr(5, rt.memory().aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(24)));
    ctx.set_gpr(25, rt.memory().aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(0)));
    ctx.set_gpr(25, rt.memory().aot_load32(ctx.gpr[25] + static_cast<std::uint32_t>(108)));
    jump_target = ctx.gpr[25];
    ctx.set_gpr(31, 0x08923E04u);
    // nop
    ctx.pc = jump_target;
    if (rt.invoke_chained_call(ctx, &aot_mem) && ctx.pc == 0x08923E04u) goto L_08923E04;
    return;
L_08923E04:
    ctx.set_gpr(4, rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(28)));
    ctx.set_gpr(5, 0u + 0u);
    ctx.set_gpr(25, rt.memory().aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(0)));
    ctx.set_gpr(25, rt.memory().aot_load32(ctx.gpr[25] + static_cast<std::uint32_t>(92)));
    jump_target = ctx.gpr[25];
    ctx.set_gpr(31, 0x08923E1Cu);
    // nop
    ctx.pc = jump_target;
    if (rt.invoke_chained_call(ctx, &aot_mem) && ctx.pc == 0x08923E1Cu) goto L_08923E1C;
    return;
L_08923E1C:
    ctx.set_gpr(2, rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(28)));
    rt.memory().aot_store32(ctx.gpr[2] + static_cast<std::uint32_t>(12), ctx.gpr[17]);
    ctx.set_gpr(4, rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(28)));
    ctx.set_gpr(5, ctx.gpr[18] + 0u);
    ctx.set_gpr(25, rt.memory().aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(0)));
    ctx.set_gpr(25, rt.memory().aot_load32(ctx.gpr[25] + static_cast<std::uint32_t>(104)));
    jump_target = ctx.gpr[25];
    ctx.set_gpr(31, 0x08923E3Cu);
    // nop
    ctx.pc = jump_target;
    if (rt.invoke_chained_call(ctx, &aot_mem) && ctx.pc == 0x08923E3Cu) goto L_08923E3C;
    return;
L_08923E3C:
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(20), ctx.gpr[2]);
    ctx.set_gpr(4, ctx.gpr[2] + 0u);
    { const bool branch_taken = ctx.gpr[2] == 0u;
    // nop
      if (branch_taken) {
          goto L_08923E54;
      }
      goto L_08923E4C;
    }
L_08923E4C:
    ctx.set_gpr(31, 0x08923E54u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0014_entry, 14u, 274u, 0x0883D588u>(ctx, &aot_mem) && ctx.pc == 0x08923E54u) goto L_08923E54;
    return;
L_08923E54:
    ctx.set_gpr(2, rt.memory().aot_load32(ctx.gpr[18] + static_cast<std::uint32_t>(16)));
    ctx.set_gpr(2, ctx.gpr[2] + ctx.gpr[16]);
    ctx.set_gpr(4, rt.memory().aot_load32(ctx.gpr[2] + static_cast<std::uint32_t>(0)));
    { const bool branch_taken = ctx.gpr[4] == 0u;
    // nop
      if (branch_taken) {
          goto L_08923E70;
      }
      goto L_08923E68;
    }
L_08923E68:
    ctx.set_gpr(31, 0x08923E70u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0014_entry, 14u, 257u, 0x0883D454u>(ctx, &aot_mem) && ctx.pc == 0x08923E70u) goto L_08923E70;
    return;
L_08923E70:
    ctx.set_gpr(4, ctx.gpr[18] + 0u);
    ctx.set_gpr(5, ctx.gpr[17] + 0u);
    ctx.set_gpr(6, ctx.gpr[29] + static_cast<std::uint32_t>(20));
    ctx.set_gpr(31, 0x08923E84u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0051_entry, 51u, 23u, 0x088D019Cu>(ctx, &aot_mem) && ctx.pc == 0x08923E84u) goto L_08923E84;
    return;
L_08923E84:
    ctx.set_gpr(4, rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(28)));
    { const bool branch_taken = ctx.gpr[4] == 0u;
    // nop
      if (branch_taken) {
          goto L_08923E98;
      }
      goto L_08923E90;
    }
L_08923E90:
    ctx.set_gpr(31, 0x08923E98u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0014_entry, 14u, 257u, 0x0883D454u>(ctx, &aot_mem) && ctx.pc == 0x08923E98u) goto L_08923E98;
    return;
L_08923E98:
    ctx.set_gpr(17, ctx.gpr[17] + static_cast<std::uint32_t>(1));
    goto L_08923E9C;
L_08923E9C:
    ctx.set_gpr(2, rt.memory().aot_load32(ctx.gpr[18] + static_cast<std::uint32_t>(140)));
    ctx.set_gpr(2, static_cast<std::int32_t>(ctx.gpr[17]) < static_cast<std::int32_t>(ctx.gpr[2]) ? 1u : 0u);
    { const bool branch_taken = ctx.gpr[2] != 0u;
    // nop
      if (branch_taken) {
          goto L_08923C38;
      }
      goto L_08923EAC;
    }
L_08923EAC:
    ctx.set_gpr(2, rt.memory().aot_load8(ctx.gpr[18] + static_cast<std::uint32_t>(316)));
    goto L_08923EB0;
L_08923EB0:
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
L_08923ECC:
    ctx.set_gpr(2, rt.memory().aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(132)));
    ctx.set_gpr(3, rt.memory().aot_load32(ctx.gpr[2] + static_cast<std::uint32_t>(20)));
    ctx.set_gpr(2, 0u + static_cast<std::uint32_t>(4));
    { const bool branch_taken = ctx.gpr[3] != ctx.gpr[2];
    // nop
      if (branch_taken) {
          goto L_08923EF4;
      }
      goto L_08923EE0;
    }
L_08923EE0:
    ctx.set_gpr(3, rt.memory().aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(304)));
    ctx.set_gpr(2, rt.memory().aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(84)));
    ctx.set_gpr(2, ctx.gpr[3] + ctx.gpr[2]);
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_08923EF8;
      }
      goto L_08923EF4;
    }
L_08923EF4:
    ctx.set_gpr(2, rt.memory().aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(292)));
    goto L_08923EF8;
L_08923EF8:
    jump_target = ctx.gpr[31];
    // nop
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_08923F00:
    ctx.set_gpr(29, ctx.gpr[29] + static_cast<std::uint32_t>(-16));
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(12), ctx.gpr[31]);
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(8), ctx.gpr[16]);
    ctx.set_gpr(16, ctx.gpr[4] + 0u);
    ctx.set_gpr(3, rt.memory().aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(132)));
    ctx.set_gpr(6, rt.memory().aot_load32(ctx.gpr[3] + static_cast<std::uint32_t>(20)));
    ctx.set_gpr(3, 0u + static_cast<std::uint32_t>(4));
    { const bool branch_taken = ctx.gpr[6] != ctx.gpr[3];
    // nop
      if (branch_taken) {
          goto L_08923FBC;
      }
      goto L_08923F24;
    }
L_08923F24:
    ctx.set_gpr(7, rt.memory().aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(304)));
    ctx.set_gpr(3, rt.memory().aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(84)));
    ctx.set_gpr(3, ctx.gpr[7] + ctx.gpr[3]);
    ctx.set_gpr(6, ctx.gpr[5] - ctx.gpr[3]);
    ctx.set_gpr(3, ctx.gpr[5] - ctx.gpr[7]);
    rt.memory().aot_store32(ctx.gpr[16] + static_cast<std::uint32_t>(84), ctx.gpr[3]);
    ctx.set_gpr(3, rt.memory().aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(88)));
    ctx.set_gpr(6, ctx.gpr[3] + ctx.gpr[6]);
    rt.memory().aot_store32(ctx.gpr[16] + static_cast<std::uint32_t>(88), ctx.gpr[6]);
    ctx.set_gpr(3, rt.memory().aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(92)));
    { const bool branch_taken = ctx.gpr[6] == ctx.gpr[3];
    // nop
      if (branch_taken) {
          goto L_08923FC0;
      }
      goto L_08923F54;
    }
L_08923F54:
    ctx.set_gpr(3, rt.memory().aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(84)));
    ctx.set_gpr(2, rt.memory().aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(300)));
    ctx.set_gpr(2, ctx.gpr[2] + static_cast<std::uint32_t>(-9));
    ctx.set_gpr(1, static_cast<std::int32_t>(ctx.gpr[2]) < static_cast<std::int32_t>(ctx.gpr[3]) ? 1u : 0u);
    { const bool branch_taken = ctx.gpr[1] == 0u;
    // nop
      if (branch_taken) {
          goto L_08923F7C;
      }
      goto L_08923F6C;
    }
L_08923F6C:
    ctx.set_gpr(31, 0x08923F74u);
    // nop
    goto L_08922910;
L_08923F74:
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_08923FC0;
      }
      goto L_08923F7C;
    }
L_08923F7C:
    ctx.set_gpr(31, 0x08923F84u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0070_entry, 70u, 654u, 0x0891EFCCu>(ctx, &aot_mem) && ctx.pc == 0x08923F84u) goto L_08923F84;
    return;
L_08923F84:
    ctx.set_gpr(3, rt.memory().aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(256)));
    ctx.set_gpr(3, ctx.gpr[3] << 2u);
    ctx.set_gpr(4, ctx.gpr[3] + ctx.gpr[2]);
    ctx.set_gpr(3, rt.memory().aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(84)));
    ctx.set_gpr(4, ctx.gpr[3] + ctx.gpr[4]);
    ctx.set_gpr(3, rt.memory().aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(300)));
    ctx.set_gpr(1, static_cast<std::int32_t>(ctx.gpr[3]) < static_cast<std::int32_t>(ctx.gpr[4]) ? 1u : 0u);
    { const bool branch_taken = ctx.gpr[1] == 0u;
    // nop
      if (branch_taken) {
          goto L_08923FC0;
      }
      goto L_08923FA8;
    }
L_08923FA8:
    ctx.set_gpr(4, ctx.gpr[16] + 0u);
    ctx.set_gpr(31, 0x08923FB4u);
    // nop
    goto L_08922910;
L_08923FB4:
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_08923FC0;
      }
      goto L_08923FBC;
    }
L_08923FBC:
    rt.memory().aot_store32(ctx.gpr[16] + static_cast<std::uint32_t>(292), ctx.gpr[5]);
    goto L_08923FC0;
L_08923FC0:
    ctx.set_gpr(31, rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(12)));
    ctx.set_gpr(16, rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(8)));
    ctx.set_gpr(29, ctx.gpr[29] + static_cast<std::uint32_t>(16));
    jump_target = ctx.gpr[31];
    // nop
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_08923FD4:
    ctx.set_gpr(29, ctx.gpr[29] + static_cast<std::uint32_t>(-16));
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(12), ctx.gpr[31]);
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(8), ctx.gpr[16]);
    ctx.set_gpr(16, ctx.gpr[4] + 0u);
    ctx.set_gpr(31, 0x08923FECu);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0072_entry, 72u, 568u, 0x089267ECu>(ctx, &aot_mem) && ctx.pc == 0x08923FECu) goto L_08923FEC;
    return;
L_08923FEC:
    ctx.set_gpr(4, ctx.gpr[2] + 0u);
    ctx.set_gpr(5, rt.memory().aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(240)));
    ctx.set_gpr(25, rt.memory().aot_load32(ctx.gpr[2] + static_cast<std::uint32_t>(0)));
    ctx.set_gpr(25, rt.memory().aot_load32(ctx.gpr[25] + static_cast<std::uint32_t>(144)));
    jump_target = ctx.gpr[25];
    ctx.set_gpr(31, 0x08924004u);
    // nop
    ctx.pc = jump_target;
    (void)rt.invoke_chained_call(ctx, &aot_mem);
    return;
}

void recomp_unit_0071(Runtime &rt, AllegrexContext &ctx) {
    auto aot_mem = rt.memory().aot_fast_view();
    recomp_unit_0071_entry(rt, ctx, 0u, aot_mem);
}

void register_generated_unit_71(Runtime &runtime) {
    runtime.register_generated_unit(71u, 0x08920000u, 16384u, &recomp_unit_0071, &recomp_unit_0071_entry);
    runtime.register_function(0x08920000u, &recomp_unit_0071, "recomp_unit_0071");
    runtime.register_function(0x08920010u, &recomp_unit_0071, "recomp_unit_0071");
    runtime.register_function(0x0892003Cu, &recomp_unit_0071, "recomp_unit_0071");
    runtime.register_function(0x0892005Cu, &recomp_unit_0071, "recomp_unit_0071");
    runtime.register_function(0x08920064u, &recomp_unit_0071, "recomp_unit_0071");
    runtime.register_function(0x0892006Cu, &recomp_unit_0071, "recomp_unit_0071");
    runtime.register_function(0x0892007Cu, &recomp_unit_0071, "recomp_unit_0071");
    runtime.register_function(0x0892008Cu, &recomp_unit_0071, "recomp_unit_0071");
    runtime.register_function(0x089200A0u, &recomp_unit_0071, "recomp_unit_0071");
    runtime.register_function(0x089200C0u, &recomp_unit_0071, "recomp_unit_0071");
    runtime.register_function(0x089200C8u, &recomp_unit_0071, "recomp_unit_0071");
    runtime.register_function(0x089200D4u, &recomp_unit_0071, "recomp_unit_0071");
    runtime.register_function(0x089200E4u, &recomp_unit_0071, "recomp_unit_0071");
    runtime.register_function(0x089200F4u, &recomp_unit_0071, "recomp_unit_0071");
    runtime.register_function(0x08920100u, &recomp_unit_0071, "recomp_unit_0071");
    runtime.register_function(0x0892011Cu, &recomp_unit_0071, "recomp_unit_0071");
    runtime.register_function(0x08920128u, &recomp_unit_0071, "recomp_unit_0071");
    runtime.register_function(0x08920130u, &recomp_unit_0071, "recomp_unit_0071");
    runtime.register_function(0x08920158u, &recomp_unit_0071, "recomp_unit_0071");
    runtime.register_function(0x08920188u, &recomp_unit_0071, "recomp_unit_0071");
    runtime.register_function(0x08920194u, &recomp_unit_0071, "recomp_unit_0071");
    runtime.register_function(0x089201B4u, &recomp_unit_0071, "recomp_unit_0071");
    runtime.register_function(0x089201DCu, &recomp_unit_0071, "recomp_unit_0071");
    runtime.register_function(0x089201F0u, &recomp_unit_0071, "recomp_unit_0071");
    runtime.register_function(0x089201FCu, &recomp_unit_0071, "recomp_unit_0071");
    runtime.register_function(0x08920208u, &recomp_unit_0071, "recomp_unit_0071");
    runtime.register_function(0x08920224u, &recomp_unit_0071, "recomp_unit_0071");
    runtime.register_function(0x08920258u, &recomp_unit_0071, "recomp_unit_0071");
    runtime.register_function(0x08920280u, &recomp_unit_0071, "recomp_unit_0071");
    runtime.register_function(0x08920290u, &recomp_unit_0071, "recomp_unit_0071");
    runtime.register_function(0x0892029Cu, &recomp_unit_0071, "recomp_unit_0071");
    runtime.register_function(0x089202B0u, &recomp_unit_0071, "recomp_unit_0071");
    runtime.register_function(0x089202DCu, &recomp_unit_0071, "recomp_unit_0071");
    runtime.register_function(0x089202E8u, &recomp_unit_0071, "recomp_unit_0071");
    runtime.register_function(0x089202F4u, &recomp_unit_0071, "recomp_unit_0071");
    runtime.register_function(0x08920300u, &recomp_unit_0071, "recomp_unit_0071");
    runtime.register_function(0x0892030Cu, &recomp_unit_0071, "recomp_unit_0071");
    runtime.register_function(0x08920328u, &recomp_unit_0071, "recomp_unit_0071");
    runtime.register_function(0x08920330u, &recomp_unit_0071, "recomp_unit_0071");
    runtime.register_function(0x08920334u, &recomp_unit_0071, "recomp_unit_0071");
    runtime.register_function(0x08920360u, &recomp_unit_0071, "recomp_unit_0071");
    runtime.register_function(0x08920394u, &recomp_unit_0071, "recomp_unit_0071");
    runtime.register_function(0x089203A4u, &recomp_unit_0071, "recomp_unit_0071");
    runtime.register_function(0x089203B0u, &recomp_unit_0071, "recomp_unit_0071");
    runtime.register_function(0x089203C0u, &recomp_unit_0071, "recomp_unit_0071");
    runtime.register_function(0x089203D0u, &recomp_unit_0071, "recomp_unit_0071");
    runtime.register_function(0x089203DCu, &recomp_unit_0071, "recomp_unit_0071");
    runtime.register_function(0x089203F8u, &recomp_unit_0071, "recomp_unit_0071");
    runtime.register_function(0x0892040Cu, &recomp_unit_0071, "recomp_unit_0071");
    runtime.register_function(0x0892041Cu, &recomp_unit_0071, "recomp_unit_0071");
    runtime.register_function(0x08920438u, &recomp_unit_0071, "recomp_unit_0071");
    runtime.register_function(0x08920440u, &recomp_unit_0071, "recomp_unit_0071");
    runtime.register_function(0x08920450u, &recomp_unit_0071, "recomp_unit_0071");
    runtime.register_function(0x08920470u, &recomp_unit_0071, "recomp_unit_0071");
    runtime.register_function(0x089204A0u, &recomp_unit_0071, "recomp_unit_0071");
    runtime.register_function(0x089204BCu, &recomp_unit_0071, "recomp_unit_0071");
    runtime.register_function(0x089204DCu, &recomp_unit_0071, "recomp_unit_0071");
    runtime.register_function(0x08920500u, &recomp_unit_0071, "recomp_unit_0071");
    runtime.register_function(0x08920514u, &recomp_unit_0071, "recomp_unit_0071");
    runtime.register_function(0x08920520u, &recomp_unit_0071, "recomp_unit_0071");
    runtime.register_function(0x0892052Cu, &recomp_unit_0071, "recomp_unit_0071");
    runtime.register_function(0x08920548u, &recomp_unit_0071, "recomp_unit_0071");
    runtime.register_function(0x08920568u, &recomp_unit_0071, "recomp_unit_0071");
    runtime.register_function(0x08920588u, &recomp_unit_0071, "recomp_unit_0071");
    runtime.register_function(0x089205B8u, &recomp_unit_0071, "recomp_unit_0071");
    runtime.register_function(0x089205C4u, &recomp_unit_0071, "recomp_unit_0071");
    runtime.register_function(0x089205CCu, &recomp_unit_0071, "recomp_unit_0071");
    runtime.register_function(0x089205D8u, &recomp_unit_0071, "recomp_unit_0071");
    runtime.register_function(0x089205E8u, &recomp_unit_0071, "recomp_unit_0071");
    runtime.register_function(0x089205F8u, &recomp_unit_0071, "recomp_unit_0071");
    runtime.register_function(0x08920608u, &recomp_unit_0071, "recomp_unit_0071");
    runtime.register_function(0x08920614u, &recomp_unit_0071, "recomp_unit_0071");
    runtime.register_function(0x08920620u, &recomp_unit_0071, "recomp_unit_0071");
    runtime.register_function(0x0892062Cu, &recomp_unit_0071, "recomp_unit_0071");
    runtime.register_function(0x08920638u, &recomp_unit_0071, "recomp_unit_0071");
    runtime.register_function(0x08920648u, &recomp_unit_0071, "recomp_unit_0071");
    runtime.register_function(0x08920654u, &recomp_unit_0071, "recomp_unit_0071");
    runtime.register_function(0x08920660u, &recomp_unit_0071, "recomp_unit_0071");
    runtime.register_function(0x08920670u, &recomp_unit_0071, "recomp_unit_0071");
    runtime.register_function(0x08920680u, &recomp_unit_0071, "recomp_unit_0071");
    runtime.register_function(0x089206A8u, &recomp_unit_0071, "recomp_unit_0071");
    runtime.register_function(0x089206B0u, &recomp_unit_0071, "recomp_unit_0071");
    runtime.register_function(0x089206C0u, &recomp_unit_0071, "recomp_unit_0071");
    runtime.register_function(0x089206CCu, &recomp_unit_0071, "recomp_unit_0071");
    runtime.register_function(0x089206DCu, &recomp_unit_0071, "recomp_unit_0071");
    runtime.register_function(0x089206F4u, &recomp_unit_0071, "recomp_unit_0071");
    runtime.register_function(0x08920708u, &recomp_unit_0071, "recomp_unit_0071");
    runtime.register_function(0x08920710u, &recomp_unit_0071, "recomp_unit_0071");
    runtime.register_function(0x0892071Cu, &recomp_unit_0071, "recomp_unit_0071");
    runtime.register_function(0x08920728u, &recomp_unit_0071, "recomp_unit_0071");
    runtime.register_function(0x08920740u, &recomp_unit_0071, "recomp_unit_0071");
    runtime.register_function(0x08920758u, &recomp_unit_0071, "recomp_unit_0071");
    runtime.register_function(0x08920774u, &recomp_unit_0071, "recomp_unit_0071");
    runtime.register_function(0x08920784u, &recomp_unit_0071, "recomp_unit_0071");
    runtime.register_function(0x0892078Cu, &recomp_unit_0071, "recomp_unit_0071");
    runtime.register_function(0x089207A0u, &recomp_unit_0071, "recomp_unit_0071");
    runtime.register_function(0x089207A8u, &recomp_unit_0071, "recomp_unit_0071");
    runtime.register_function(0x089207BCu, &recomp_unit_0071, "recomp_unit_0071");
    runtime.register_function(0x089207C0u, &recomp_unit_0071, "recomp_unit_0071");
    runtime.register_function(0x089207CCu, &recomp_unit_0071, "recomp_unit_0071");
    runtime.register_function(0x089207D8u, &recomp_unit_0071, "recomp_unit_0071");
    runtime.register_function(0x08920800u, &recomp_unit_0071, "recomp_unit_0071");
    runtime.register_function(0x08920810u, &recomp_unit_0071, "recomp_unit_0071");
    runtime.register_function(0x08920820u, &recomp_unit_0071, "recomp_unit_0071");
    runtime.register_function(0x08920850u, &recomp_unit_0071, "recomp_unit_0071");
    runtime.register_function(0x08920868u, &recomp_unit_0071, "recomp_unit_0071");
    runtime.register_function(0x08920878u, &recomp_unit_0071, "recomp_unit_0071");
    runtime.register_function(0x08920888u, &recomp_unit_0071, "recomp_unit_0071");
    runtime.register_function(0x08920894u, &recomp_unit_0071, "recomp_unit_0071");
    runtime.register_function(0x089208B0u, &recomp_unit_0071, "recomp_unit_0071");
    runtime.register_function(0x089208C4u, &recomp_unit_0071, "recomp_unit_0071");
    runtime.register_function(0x089208ECu, &recomp_unit_0071, "recomp_unit_0071");
    runtime.register_function(0x089208F4u, &recomp_unit_0071, "recomp_unit_0071");
    runtime.register_function(0x08920904u, &recomp_unit_0071, "recomp_unit_0071");
    runtime.register_function(0x08920924u, &recomp_unit_0071, "recomp_unit_0071");
    runtime.register_function(0x08920944u, &recomp_unit_0071, "recomp_unit_0071");
    runtime.register_function(0x08920960u, &recomp_unit_0071, "recomp_unit_0071");
    runtime.register_function(0x08920978u, &recomp_unit_0071, "recomp_unit_0071");
    runtime.register_function(0x08920988u, &recomp_unit_0071, "recomp_unit_0071");
    runtime.register_function(0x089209A0u, &recomp_unit_0071, "recomp_unit_0071");
    runtime.register_function(0x089209A4u, &recomp_unit_0071, "recomp_unit_0071");
    runtime.register_function(0x089209B0u, &recomp_unit_0071, "recomp_unit_0071");
    runtime.register_function(0x089209D0u, &recomp_unit_0071, "recomp_unit_0071");
    runtime.register_function(0x089209ECu, &recomp_unit_0071, "recomp_unit_0071");
    runtime.register_function(0x08920A08u, &recomp_unit_0071, "recomp_unit_0071");
    runtime.register_function(0x08920A20u, &recomp_unit_0071, "recomp_unit_0071");
    runtime.register_function(0x08920A88u, &recomp_unit_0071, "recomp_unit_0071");
    runtime.register_function(0x08920A90u, &recomp_unit_0071, "recomp_unit_0071");
    runtime.register_function(0x08920A9Cu, &recomp_unit_0071, "recomp_unit_0071");
    runtime.register_function(0x08920AA4u, &recomp_unit_0071, "recomp_unit_0071");
    runtime.register_function(0x08920AB0u, &recomp_unit_0071, "recomp_unit_0071");
    runtime.register_function(0x08920AB8u, &recomp_unit_0071, "recomp_unit_0071");
    runtime.register_function(0x08920AC4u, &recomp_unit_0071, "recomp_unit_0071");
    runtime.register_function(0x08920ACCu, &recomp_unit_0071, "recomp_unit_0071");
    runtime.register_function(0x08920ADCu, &recomp_unit_0071, "recomp_unit_0071");
    runtime.register_function(0x08920AF8u, &recomp_unit_0071, "recomp_unit_0071");
    runtime.register_function(0x08920B18u, &recomp_unit_0071, "recomp_unit_0071");
    runtime.register_function(0x08920B24u, &recomp_unit_0071, "recomp_unit_0071");
    runtime.register_function(0x08920B3Cu, &recomp_unit_0071, "recomp_unit_0071");
    runtime.register_function(0x08920B58u, &recomp_unit_0071, "recomp_unit_0071");
    runtime.register_function(0x08920B8Cu, &recomp_unit_0071, "recomp_unit_0071");
    runtime.register_function(0x08920BACu, &recomp_unit_0071, "recomp_unit_0071");
    runtime.register_function(0x08920BD0u, &recomp_unit_0071, "recomp_unit_0071");
    runtime.register_function(0x08920BF4u, &recomp_unit_0071, "recomp_unit_0071");
    runtime.register_function(0x08920C04u, &recomp_unit_0071, "recomp_unit_0071");
    runtime.register_function(0x08920C20u, &recomp_unit_0071, "recomp_unit_0071");
    runtime.register_function(0x08920C2Cu, &recomp_unit_0071, "recomp_unit_0071");
    runtime.register_function(0x08920C44u, &recomp_unit_0071, "recomp_unit_0071");
    runtime.register_function(0x08920C48u, &recomp_unit_0071, "recomp_unit_0071");
    runtime.register_function(0x08920C58u, &recomp_unit_0071, "recomp_unit_0071");
    runtime.register_function(0x08920C78u, &recomp_unit_0071, "recomp_unit_0071");
    runtime.register_function(0x08920C7Cu, &recomp_unit_0071, "recomp_unit_0071");
    runtime.register_function(0x08920C9Cu, &recomp_unit_0071, "recomp_unit_0071");
    runtime.register_function(0x08920CACu, &recomp_unit_0071, "recomp_unit_0071");
    runtime.register_function(0x08920CC8u, &recomp_unit_0071, "recomp_unit_0071");
    runtime.register_function(0x08920CE8u, &recomp_unit_0071, "recomp_unit_0071");
    runtime.register_function(0x08920CFCu, &recomp_unit_0071, "recomp_unit_0071");
    runtime.register_function(0x08920D08u, &recomp_unit_0071, "recomp_unit_0071");
    runtime.register_function(0x08920D30u, &recomp_unit_0071, "recomp_unit_0071");
    runtime.register_function(0x08920D5Cu, &recomp_unit_0071, "recomp_unit_0071");
    runtime.register_function(0x08920D7Cu, &recomp_unit_0071, "recomp_unit_0071");
    runtime.register_function(0x08920D94u, &recomp_unit_0071, "recomp_unit_0071");
    runtime.register_function(0x08920DB8u, &recomp_unit_0071, "recomp_unit_0071");
    runtime.register_function(0x08920DC4u, &recomp_unit_0071, "recomp_unit_0071");
    runtime.register_function(0x08920DC8u, &recomp_unit_0071, "recomp_unit_0071");
    runtime.register_function(0x08920DF8u, &recomp_unit_0071, "recomp_unit_0071");
    runtime.register_function(0x08920E0Cu, &recomp_unit_0071, "recomp_unit_0071");
    runtime.register_function(0x08920E14u, &recomp_unit_0071, "recomp_unit_0071");
    runtime.register_function(0x08920E28u, &recomp_unit_0071, "recomp_unit_0071");
    runtime.register_function(0x08920E44u, &recomp_unit_0071, "recomp_unit_0071");
    runtime.register_function(0x08920E5Cu, &recomp_unit_0071, "recomp_unit_0071");
    runtime.register_function(0x08920E6Cu, &recomp_unit_0071, "recomp_unit_0071");
    runtime.register_function(0x08920E84u, &recomp_unit_0071, "recomp_unit_0071");
    runtime.register_function(0x08920E94u, &recomp_unit_0071, "recomp_unit_0071");
    runtime.register_function(0x08920EACu, &recomp_unit_0071, "recomp_unit_0071");
    runtime.register_function(0x08920EBCu, &recomp_unit_0071, "recomp_unit_0071");
    runtime.register_function(0x08920ED4u, &recomp_unit_0071, "recomp_unit_0071");
    runtime.register_function(0x08920EE4u, &recomp_unit_0071, "recomp_unit_0071");
    runtime.register_function(0x08920EFCu, &recomp_unit_0071, "recomp_unit_0071");
    runtime.register_function(0x08920F0Cu, &recomp_unit_0071, "recomp_unit_0071");
    runtime.register_function(0x08920F18u, &recomp_unit_0071, "recomp_unit_0071");
    runtime.register_function(0x08920F30u, &recomp_unit_0071, "recomp_unit_0071");
    runtime.register_function(0x08920F40u, &recomp_unit_0071, "recomp_unit_0071");
    runtime.register_function(0x08920F4Cu, &recomp_unit_0071, "recomp_unit_0071");
    runtime.register_function(0x08920F64u, &recomp_unit_0071, "recomp_unit_0071");
    runtime.register_function(0x08920F68u, &recomp_unit_0071, "recomp_unit_0071");
    runtime.register_function(0x08920F78u, &recomp_unit_0071, "recomp_unit_0071");
    runtime.register_function(0x08920F94u, &recomp_unit_0071, "recomp_unit_0071");
    runtime.register_function(0x08920FB4u, &recomp_unit_0071, "recomp_unit_0071");
    runtime.register_function(0x08920FC4u, &recomp_unit_0071, "recomp_unit_0071");
    runtime.register_function(0x08920FD0u, &recomp_unit_0071, "recomp_unit_0071");
    runtime.register_function(0x08920FE8u, &recomp_unit_0071, "recomp_unit_0071");
    runtime.register_function(0x08921020u, &recomp_unit_0071, "recomp_unit_0071");
    runtime.register_function(0x08921044u, &recomp_unit_0071, "recomp_unit_0071");
    runtime.register_function(0x08921054u, &recomp_unit_0071, "recomp_unit_0071");
    runtime.register_function(0x08921060u, &recomp_unit_0071, "recomp_unit_0071");
    runtime.register_function(0x0892106Cu, &recomp_unit_0071, "recomp_unit_0071");
    runtime.register_function(0x08921078u, &recomp_unit_0071, "recomp_unit_0071");
    runtime.register_function(0x08921084u, &recomp_unit_0071, "recomp_unit_0071");
    runtime.register_function(0x08921090u, &recomp_unit_0071, "recomp_unit_0071");
    runtime.register_function(0x089210A4u, &recomp_unit_0071, "recomp_unit_0071");
    runtime.register_function(0x089210ACu, &recomp_unit_0071, "recomp_unit_0071");
    runtime.register_function(0x089210BCu, &recomp_unit_0071, "recomp_unit_0071");
    runtime.register_function(0x089210C4u, &recomp_unit_0071, "recomp_unit_0071");
    runtime.register_function(0x089210D4u, &recomp_unit_0071, "recomp_unit_0071");
    runtime.register_function(0x089210E0u, &recomp_unit_0071, "recomp_unit_0071");
    runtime.register_function(0x089210ECu, &recomp_unit_0071, "recomp_unit_0071");
    runtime.register_function(0x089210F8u, &recomp_unit_0071, "recomp_unit_0071");
    runtime.register_function(0x08921104u, &recomp_unit_0071, "recomp_unit_0071");
    runtime.register_function(0x08921110u, &recomp_unit_0071, "recomp_unit_0071");
    runtime.register_function(0x0892111Cu, &recomp_unit_0071, "recomp_unit_0071");
    runtime.register_function(0x0892112Cu, &recomp_unit_0071, "recomp_unit_0071");
    runtime.register_function(0x0892113Cu, &recomp_unit_0071, "recomp_unit_0071");
    runtime.register_function(0x0892115Cu, &recomp_unit_0071, "recomp_unit_0071");
    runtime.register_function(0x08921174u, &recomp_unit_0071, "recomp_unit_0071");
    runtime.register_function(0x08921190u, &recomp_unit_0071, "recomp_unit_0071");
    runtime.register_function(0x089211A8u, &recomp_unit_0071, "recomp_unit_0071");
    runtime.register_function(0x089211BCu, &recomp_unit_0071, "recomp_unit_0071");
    runtime.register_function(0x089211CCu, &recomp_unit_0071, "recomp_unit_0071");
    runtime.register_function(0x089211DCu, &recomp_unit_0071, "recomp_unit_0071");
    runtime.register_function(0x089211ECu, &recomp_unit_0071, "recomp_unit_0071");
    runtime.register_function(0x08921204u, &recomp_unit_0071, "recomp_unit_0071");
    runtime.register_function(0x0892120Cu, &recomp_unit_0071, "recomp_unit_0071");
    runtime.register_function(0x08921228u, &recomp_unit_0071, "recomp_unit_0071");
    runtime.register_function(0x08921240u, &recomp_unit_0071, "recomp_unit_0071");
    runtime.register_function(0x08921244u, &recomp_unit_0071, "recomp_unit_0071");
    runtime.register_function(0x0892124Cu, &recomp_unit_0071, "recomp_unit_0071");
    runtime.register_function(0x08921258u, &recomp_unit_0071, "recomp_unit_0071");
    runtime.register_function(0x08921268u, &recomp_unit_0071, "recomp_unit_0071");
    runtime.register_function(0x08921278u, &recomp_unit_0071, "recomp_unit_0071");
    runtime.register_function(0x08921290u, &recomp_unit_0071, "recomp_unit_0071");
    runtime.register_function(0x08921294u, &recomp_unit_0071, "recomp_unit_0071");
    runtime.register_function(0x0892129Cu, &recomp_unit_0071, "recomp_unit_0071");
    runtime.register_function(0x089212B4u, &recomp_unit_0071, "recomp_unit_0071");
    runtime.register_function(0x089212C0u, &recomp_unit_0071, "recomp_unit_0071");
    runtime.register_function(0x089212C4u, &recomp_unit_0071, "recomp_unit_0071");
    runtime.register_function(0x089212D0u, &recomp_unit_0071, "recomp_unit_0071");
    runtime.register_function(0x089212D4u, &recomp_unit_0071, "recomp_unit_0071");
    runtime.register_function(0x089212E0u, &recomp_unit_0071, "recomp_unit_0071");
    runtime.register_function(0x089212ECu, &recomp_unit_0071, "recomp_unit_0071");
    runtime.register_function(0x089212F8u, &recomp_unit_0071, "recomp_unit_0071");
    runtime.register_function(0x08921304u, &recomp_unit_0071, "recomp_unit_0071");
    runtime.register_function(0x08921310u, &recomp_unit_0071, "recomp_unit_0071");
    runtime.register_function(0x0892131Cu, &recomp_unit_0071, "recomp_unit_0071");
    runtime.register_function(0x08921328u, &recomp_unit_0071, "recomp_unit_0071");
    runtime.register_function(0x08921334u, &recomp_unit_0071, "recomp_unit_0071");
    runtime.register_function(0x08921340u, &recomp_unit_0071, "recomp_unit_0071");
    runtime.register_function(0x0892134Cu, &recomp_unit_0071, "recomp_unit_0071");
    runtime.register_function(0x08921358u, &recomp_unit_0071, "recomp_unit_0071");
    runtime.register_function(0x08921364u, &recomp_unit_0071, "recomp_unit_0071");
    runtime.register_function(0x08921370u, &recomp_unit_0071, "recomp_unit_0071");
    runtime.register_function(0x0892137Cu, &recomp_unit_0071, "recomp_unit_0071");
    runtime.register_function(0x08921388u, &recomp_unit_0071, "recomp_unit_0071");
    runtime.register_function(0x08921394u, &recomp_unit_0071, "recomp_unit_0071");
    runtime.register_function(0x089213A0u, &recomp_unit_0071, "recomp_unit_0071");
    runtime.register_function(0x089213ACu, &recomp_unit_0071, "recomp_unit_0071");
    runtime.register_function(0x089213B8u, &recomp_unit_0071, "recomp_unit_0071");
    runtime.register_function(0x089213C4u, &recomp_unit_0071, "recomp_unit_0071");
    runtime.register_function(0x089213D0u, &recomp_unit_0071, "recomp_unit_0071");
    runtime.register_function(0x089213DCu, &recomp_unit_0071, "recomp_unit_0071");
    runtime.register_function(0x089213E8u, &recomp_unit_0071, "recomp_unit_0071");
    runtime.register_function(0x089213F4u, &recomp_unit_0071, "recomp_unit_0071");
    runtime.register_function(0x08921400u, &recomp_unit_0071, "recomp_unit_0071");
    runtime.register_function(0x0892140Cu, &recomp_unit_0071, "recomp_unit_0071");
    runtime.register_function(0x08921418u, &recomp_unit_0071, "recomp_unit_0071");
    runtime.register_function(0x08921424u, &recomp_unit_0071, "recomp_unit_0071");
    runtime.register_function(0x08921430u, &recomp_unit_0071, "recomp_unit_0071");
    runtime.register_function(0x0892143Cu, &recomp_unit_0071, "recomp_unit_0071");
    runtime.register_function(0x08921448u, &recomp_unit_0071, "recomp_unit_0071");
    runtime.register_function(0x08921454u, &recomp_unit_0071, "recomp_unit_0071");
    runtime.register_function(0x08921460u, &recomp_unit_0071, "recomp_unit_0071");
    runtime.register_function(0x0892146Cu, &recomp_unit_0071, "recomp_unit_0071");
    runtime.register_function(0x08921478u, &recomp_unit_0071, "recomp_unit_0071");
    runtime.register_function(0x08921484u, &recomp_unit_0071, "recomp_unit_0071");
    runtime.register_function(0x08921490u, &recomp_unit_0071, "recomp_unit_0071");
    runtime.register_function(0x0892149Cu, &recomp_unit_0071, "recomp_unit_0071");
    runtime.register_function(0x089214A8u, &recomp_unit_0071, "recomp_unit_0071");
    runtime.register_function(0x089214B4u, &recomp_unit_0071, "recomp_unit_0071");
    runtime.register_function(0x089214C0u, &recomp_unit_0071, "recomp_unit_0071");
    runtime.register_function(0x089214CCu, &recomp_unit_0071, "recomp_unit_0071");
    runtime.register_function(0x089214D8u, &recomp_unit_0071, "recomp_unit_0071");
    runtime.register_function(0x089214E4u, &recomp_unit_0071, "recomp_unit_0071");
    runtime.register_function(0x089214F0u, &recomp_unit_0071, "recomp_unit_0071");
    runtime.register_function(0x089214FCu, &recomp_unit_0071, "recomp_unit_0071");
    runtime.register_function(0x08921508u, &recomp_unit_0071, "recomp_unit_0071");
    runtime.register_function(0x08921514u, &recomp_unit_0071, "recomp_unit_0071");
    runtime.register_function(0x08921528u, &recomp_unit_0071, "recomp_unit_0071");
    runtime.register_function(0x0892152Cu, &recomp_unit_0071, "recomp_unit_0071");
    runtime.register_function(0x0892155Cu, &recomp_unit_0071, "recomp_unit_0071");
    runtime.register_function(0x08921580u, &recomp_unit_0071, "recomp_unit_0071");
    runtime.register_function(0x08921588u, &recomp_unit_0071, "recomp_unit_0071");
    runtime.register_function(0x08921594u, &recomp_unit_0071, "recomp_unit_0071");
    runtime.register_function(0x0892159Cu, &recomp_unit_0071, "recomp_unit_0071");
    runtime.register_function(0x089215B0u, &recomp_unit_0071, "recomp_unit_0071");
    runtime.register_function(0x089215BCu, &recomp_unit_0071, "recomp_unit_0071");
    runtime.register_function(0x089215C4u, &recomp_unit_0071, "recomp_unit_0071");
    runtime.register_function(0x089215D4u, &recomp_unit_0071, "recomp_unit_0071");
    runtime.register_function(0x089215E0u, &recomp_unit_0071, "recomp_unit_0071");
    runtime.register_function(0x089215E4u, &recomp_unit_0071, "recomp_unit_0071");
    runtime.register_function(0x089215F0u, &recomp_unit_0071, "recomp_unit_0071");
    runtime.register_function(0x089215FCu, &recomp_unit_0071, "recomp_unit_0071");
    runtime.register_function(0x08921608u, &recomp_unit_0071, "recomp_unit_0071");
    runtime.register_function(0x08921618u, &recomp_unit_0071, "recomp_unit_0071");
    runtime.register_function(0x0892161Cu, &recomp_unit_0071, "recomp_unit_0071");
    runtime.register_function(0x08921634u, &recomp_unit_0071, "recomp_unit_0071");
    runtime.register_function(0x08921654u, &recomp_unit_0071, "recomp_unit_0071");
    runtime.register_function(0x08921660u, &recomp_unit_0071, "recomp_unit_0071");
    runtime.register_function(0x0892166Cu, &recomp_unit_0071, "recomp_unit_0071");
    runtime.register_function(0x08921690u, &recomp_unit_0071, "recomp_unit_0071");
    runtime.register_function(0x08921698u, &recomp_unit_0071, "recomp_unit_0071");
    runtime.register_function(0x089216A8u, &recomp_unit_0071, "recomp_unit_0071");
    runtime.register_function(0x089216B0u, &recomp_unit_0071, "recomp_unit_0071");
    runtime.register_function(0x089216C0u, &recomp_unit_0071, "recomp_unit_0071");
    runtime.register_function(0x089216D0u, &recomp_unit_0071, "recomp_unit_0071");
    runtime.register_function(0x089216ECu, &recomp_unit_0071, "recomp_unit_0071");
    runtime.register_function(0x089216FCu, &recomp_unit_0071, "recomp_unit_0071");
    runtime.register_function(0x0892170Cu, &recomp_unit_0071, "recomp_unit_0071");
    runtime.register_function(0x08921710u, &recomp_unit_0071, "recomp_unit_0071");
    runtime.register_function(0x08921720u, &recomp_unit_0071, "recomp_unit_0071");
    runtime.register_function(0x0892172Cu, &recomp_unit_0071, "recomp_unit_0071");
    runtime.register_function(0x08921740u, &recomp_unit_0071, "recomp_unit_0071");
    runtime.register_function(0x0892174Cu, &recomp_unit_0071, "recomp_unit_0071");
    runtime.register_function(0x089217B8u, &recomp_unit_0071, "recomp_unit_0071");
    runtime.register_function(0x089217C8u, &recomp_unit_0071, "recomp_unit_0071");
    runtime.register_function(0x089217CCu, &recomp_unit_0071, "recomp_unit_0071");
    runtime.register_function(0x08921820u, &recomp_unit_0071, "recomp_unit_0071");
    runtime.register_function(0x08921838u, &recomp_unit_0071, "recomp_unit_0071");
    runtime.register_function(0x08921854u, &recomp_unit_0071, "recomp_unit_0071");
    runtime.register_function(0x08921860u, &recomp_unit_0071, "recomp_unit_0071");
    runtime.register_function(0x0892186Cu, &recomp_unit_0071, "recomp_unit_0071");
    runtime.register_function(0x08921884u, &recomp_unit_0071, "recomp_unit_0071");
    runtime.register_function(0x0892189Cu, &recomp_unit_0071, "recomp_unit_0071");
    runtime.register_function(0x089218A4u, &recomp_unit_0071, "recomp_unit_0071");
    runtime.register_function(0x089218B0u, &recomp_unit_0071, "recomp_unit_0071");
    runtime.register_function(0x089218B4u, &recomp_unit_0071, "recomp_unit_0071");
    runtime.register_function(0x089218C8u, &recomp_unit_0071, "recomp_unit_0071");
    runtime.register_function(0x08921900u, &recomp_unit_0071, "recomp_unit_0071");
    runtime.register_function(0x0892190Cu, &recomp_unit_0071, "recomp_unit_0071");
    runtime.register_function(0x08921920u, &recomp_unit_0071, "recomp_unit_0071");
    runtime.register_function(0x0892192Cu, &recomp_unit_0071, "recomp_unit_0071");
    runtime.register_function(0x08921934u, &recomp_unit_0071, "recomp_unit_0071");
    runtime.register_function(0x0892194Cu, &recomp_unit_0071, "recomp_unit_0071");
    runtime.register_function(0x08921958u, &recomp_unit_0071, "recomp_unit_0071");
    runtime.register_function(0x0892196Cu, &recomp_unit_0071, "recomp_unit_0071");
    runtime.register_function(0x08921980u, &recomp_unit_0071, "recomp_unit_0071");
    runtime.register_function(0x0892199Cu, &recomp_unit_0071, "recomp_unit_0071");
    runtime.register_function(0x089219A8u, &recomp_unit_0071, "recomp_unit_0071");
    runtime.register_function(0x089219BCu, &recomp_unit_0071, "recomp_unit_0071");
    runtime.register_function(0x089219C8u, &recomp_unit_0071, "recomp_unit_0071");
    runtime.register_function(0x089219D0u, &recomp_unit_0071, "recomp_unit_0071");
    runtime.register_function(0x089219E8u, &recomp_unit_0071, "recomp_unit_0071");
    runtime.register_function(0x089219F4u, &recomp_unit_0071, "recomp_unit_0071");
    runtime.register_function(0x08921A00u, &recomp_unit_0071, "recomp_unit_0071");
    runtime.register_function(0x08921A0Cu, &recomp_unit_0071, "recomp_unit_0071");
    runtime.register_function(0x08921A1Cu, &recomp_unit_0071, "recomp_unit_0071");
    runtime.register_function(0x08921A34u, &recomp_unit_0071, "recomp_unit_0071");
    runtime.register_function(0x08921A40u, &recomp_unit_0071, "recomp_unit_0071");
    runtime.register_function(0x08921A4Cu, &recomp_unit_0071, "recomp_unit_0071");
    runtime.register_function(0x08921A70u, &recomp_unit_0071, "recomp_unit_0071");
    runtime.register_function(0x08921AA0u, &recomp_unit_0071, "recomp_unit_0071");
    runtime.register_function(0x08921AACu, &recomp_unit_0071, "recomp_unit_0071");
    runtime.register_function(0x08921AB8u, &recomp_unit_0071, "recomp_unit_0071");
    runtime.register_function(0x08921AC4u, &recomp_unit_0071, "recomp_unit_0071");
    runtime.register_function(0x08921AC8u, &recomp_unit_0071, "recomp_unit_0071");
    runtime.register_function(0x08921AD4u, &recomp_unit_0071, "recomp_unit_0071");
    runtime.register_function(0x08921AE4u, &recomp_unit_0071, "recomp_unit_0071");
    runtime.register_function(0x08921AF4u, &recomp_unit_0071, "recomp_unit_0071");
    runtime.register_function(0x08921B00u, &recomp_unit_0071, "recomp_unit_0071");
    runtime.register_function(0x08921B0Cu, &recomp_unit_0071, "recomp_unit_0071");
    runtime.register_function(0x08921B18u, &recomp_unit_0071, "recomp_unit_0071");
    runtime.register_function(0x08921B34u, &recomp_unit_0071, "recomp_unit_0071");
    runtime.register_function(0x08921B40u, &recomp_unit_0071, "recomp_unit_0071");
    runtime.register_function(0x08921B50u, &recomp_unit_0071, "recomp_unit_0071");
    runtime.register_function(0x08921B64u, &recomp_unit_0071, "recomp_unit_0071");
    runtime.register_function(0x08921B6Cu, &recomp_unit_0071, "recomp_unit_0071");
    runtime.register_function(0x08921B90u, &recomp_unit_0071, "recomp_unit_0071");
    runtime.register_function(0x08921BA4u, &recomp_unit_0071, "recomp_unit_0071");
    runtime.register_function(0x08921BC0u, &recomp_unit_0071, "recomp_unit_0071");
    runtime.register_function(0x08921BCCu, &recomp_unit_0071, "recomp_unit_0071");
    runtime.register_function(0x08921BD0u, &recomp_unit_0071, "recomp_unit_0071");
    runtime.register_function(0x08921BD4u, &recomp_unit_0071, "recomp_unit_0071");
    runtime.register_function(0x08921BE0u, &recomp_unit_0071, "recomp_unit_0071");
    runtime.register_function(0x08921BECu, &recomp_unit_0071, "recomp_unit_0071");
    runtime.register_function(0x08921C04u, &recomp_unit_0071, "recomp_unit_0071");
    runtime.register_function(0x08921C08u, &recomp_unit_0071, "recomp_unit_0071");
    runtime.register_function(0x08921C14u, &recomp_unit_0071, "recomp_unit_0071");
    runtime.register_function(0x08921C2Cu, &recomp_unit_0071, "recomp_unit_0071");
    runtime.register_function(0x08921C48u, &recomp_unit_0071, "recomp_unit_0071");
    runtime.register_function(0x08921C58u, &recomp_unit_0071, "recomp_unit_0071");
    runtime.register_function(0x08921C64u, &recomp_unit_0071, "recomp_unit_0071");
    runtime.register_function(0x08921C80u, &recomp_unit_0071, "recomp_unit_0071");
    runtime.register_function(0x08921C9Cu, &recomp_unit_0071, "recomp_unit_0071");
    runtime.register_function(0x08921CB0u, &recomp_unit_0071, "recomp_unit_0071");
    runtime.register_function(0x08921CC4u, &recomp_unit_0071, "recomp_unit_0071");
    runtime.register_function(0x08921CDCu, &recomp_unit_0071, "recomp_unit_0071");
    runtime.register_function(0x08921CECu, &recomp_unit_0071, "recomp_unit_0071");
    runtime.register_function(0x08921D04u, &recomp_unit_0071, "recomp_unit_0071");
    runtime.register_function(0x08921D18u, &recomp_unit_0071, "recomp_unit_0071");
    runtime.register_function(0x08921D2Cu, &recomp_unit_0071, "recomp_unit_0071");
    runtime.register_function(0x08921D48u, &recomp_unit_0071, "recomp_unit_0071");
    runtime.register_function(0x08921D50u, &recomp_unit_0071, "recomp_unit_0071");
    runtime.register_function(0x08921D58u, &recomp_unit_0071, "recomp_unit_0071");
    runtime.register_function(0x08921D64u, &recomp_unit_0071, "recomp_unit_0071");
    runtime.register_function(0x08921D6Cu, &recomp_unit_0071, "recomp_unit_0071");
    runtime.register_function(0x08921D78u, &recomp_unit_0071, "recomp_unit_0071");
    runtime.register_function(0x08921D84u, &recomp_unit_0071, "recomp_unit_0071");
    runtime.register_function(0x08921D90u, &recomp_unit_0071, "recomp_unit_0071");
    runtime.register_function(0x08921DD4u, &recomp_unit_0071, "recomp_unit_0071");
    runtime.register_function(0x08921DE0u, &recomp_unit_0071, "recomp_unit_0071");
    runtime.register_function(0x08921DE8u, &recomp_unit_0071, "recomp_unit_0071");
    runtime.register_function(0x08921DF4u, &recomp_unit_0071, "recomp_unit_0071");
    runtime.register_function(0x08921E00u, &recomp_unit_0071, "recomp_unit_0071");
    runtime.register_function(0x08921E10u, &recomp_unit_0071, "recomp_unit_0071");
    runtime.register_function(0x08921E20u, &recomp_unit_0071, "recomp_unit_0071");
    runtime.register_function(0x08921E2Cu, &recomp_unit_0071, "recomp_unit_0071");
    runtime.register_function(0x08921E40u, &recomp_unit_0071, "recomp_unit_0071");
    runtime.register_function(0x08921E50u, &recomp_unit_0071, "recomp_unit_0071");
    runtime.register_function(0x08921E60u, &recomp_unit_0071, "recomp_unit_0071");
    runtime.register_function(0x08921E74u, &recomp_unit_0071, "recomp_unit_0071");
    runtime.register_function(0x08921E7Cu, &recomp_unit_0071, "recomp_unit_0071");
    runtime.register_function(0x08921EA0u, &recomp_unit_0071, "recomp_unit_0071");
    runtime.register_function(0x08921EACu, &recomp_unit_0071, "recomp_unit_0071");
    runtime.register_function(0x08921EC4u, &recomp_unit_0071, "recomp_unit_0071");
    runtime.register_function(0x08921ED4u, &recomp_unit_0071, "recomp_unit_0071");
    runtime.register_function(0x08921F04u, &recomp_unit_0071, "recomp_unit_0071");
    runtime.register_function(0x08921F10u, &recomp_unit_0071, "recomp_unit_0071");
    runtime.register_function(0x08921F1Cu, &recomp_unit_0071, "recomp_unit_0071");
    runtime.register_function(0x08921F44u, &recomp_unit_0071, "recomp_unit_0071");
    runtime.register_function(0x08921F64u, &recomp_unit_0071, "recomp_unit_0071");
    runtime.register_function(0x08921F74u, &recomp_unit_0071, "recomp_unit_0071");
    runtime.register_function(0x08921F78u, &recomp_unit_0071, "recomp_unit_0071");
    runtime.register_function(0x08921FA8u, &recomp_unit_0071, "recomp_unit_0071");
    runtime.register_function(0x08921FBCu, &recomp_unit_0071, "recomp_unit_0071");
    runtime.register_function(0x08921FCCu, &recomp_unit_0071, "recomp_unit_0071");
    runtime.register_function(0x08921FDCu, &recomp_unit_0071, "recomp_unit_0071");
    runtime.register_function(0x08921FF0u, &recomp_unit_0071, "recomp_unit_0071");
    runtime.register_function(0x08921FFCu, &recomp_unit_0071, "recomp_unit_0071");
    runtime.register_function(0x0892200Cu, &recomp_unit_0071, "recomp_unit_0071");
    runtime.register_function(0x08922030u, &recomp_unit_0071, "recomp_unit_0071");
    runtime.register_function(0x08922054u, &recomp_unit_0071, "recomp_unit_0071");
    runtime.register_function(0x08922064u, &recomp_unit_0071, "recomp_unit_0071");
    runtime.register_function(0x08922068u, &recomp_unit_0071, "recomp_unit_0071");
    runtime.register_function(0x08922098u, &recomp_unit_0071, "recomp_unit_0071");
    runtime.register_function(0x089220B4u, &recomp_unit_0071, "recomp_unit_0071");
    runtime.register_function(0x089220C0u, &recomp_unit_0071, "recomp_unit_0071");
    runtime.register_function(0x089220D4u, &recomp_unit_0071, "recomp_unit_0071");
    runtime.register_function(0x08922108u, &recomp_unit_0071, "recomp_unit_0071");
    runtime.register_function(0x08922118u, &recomp_unit_0071, "recomp_unit_0071");
    runtime.register_function(0x08922120u, &recomp_unit_0071, "recomp_unit_0071");
    runtime.register_function(0x08922130u, &recomp_unit_0071, "recomp_unit_0071");
    runtime.register_function(0x08922144u, &recomp_unit_0071, "recomp_unit_0071");
    runtime.register_function(0x08922160u, &recomp_unit_0071, "recomp_unit_0071");
    runtime.register_function(0x0892216Cu, &recomp_unit_0071, "recomp_unit_0071");
    runtime.register_function(0x08922170u, &recomp_unit_0071, "recomp_unit_0071");
    runtime.register_function(0x08922174u, &recomp_unit_0071, "recomp_unit_0071");
    runtime.register_function(0x08922180u, &recomp_unit_0071, "recomp_unit_0071");
    runtime.register_function(0x0892218Cu, &recomp_unit_0071, "recomp_unit_0071");
    runtime.register_function(0x089221A0u, &recomp_unit_0071, "recomp_unit_0071");
    runtime.register_function(0x089221ACu, &recomp_unit_0071, "recomp_unit_0071");
    runtime.register_function(0x089221C0u, &recomp_unit_0071, "recomp_unit_0071");
    runtime.register_function(0x089221E0u, &recomp_unit_0071, "recomp_unit_0071");
    runtime.register_function(0x089221E4u, &recomp_unit_0071, "recomp_unit_0071");
    runtime.register_function(0x089221F0u, &recomp_unit_0071, "recomp_unit_0071");
    runtime.register_function(0x08922208u, &recomp_unit_0071, "recomp_unit_0071");
    runtime.register_function(0x08922224u, &recomp_unit_0071, "recomp_unit_0071");
    runtime.register_function(0x08922234u, &recomp_unit_0071, "recomp_unit_0071");
    runtime.register_function(0x08922244u, &recomp_unit_0071, "recomp_unit_0071");
    runtime.register_function(0x08922260u, &recomp_unit_0071, "recomp_unit_0071");
    runtime.register_function(0x0892227Cu, &recomp_unit_0071, "recomp_unit_0071");
    runtime.register_function(0x08922290u, &recomp_unit_0071, "recomp_unit_0071");
    runtime.register_function(0x089222A4u, &recomp_unit_0071, "recomp_unit_0071");
    runtime.register_function(0x089222C4u, &recomp_unit_0071, "recomp_unit_0071");
    runtime.register_function(0x089222D4u, &recomp_unit_0071, "recomp_unit_0071");
    runtime.register_function(0x089222ECu, &recomp_unit_0071, "recomp_unit_0071");
    runtime.register_function(0x08922300u, &recomp_unit_0071, "recomp_unit_0071");
    runtime.register_function(0x08922314u, &recomp_unit_0071, "recomp_unit_0071");
    runtime.register_function(0x08922334u, &recomp_unit_0071, "recomp_unit_0071");
    runtime.register_function(0x0892233Cu, &recomp_unit_0071, "recomp_unit_0071");
    runtime.register_function(0x08922344u, &recomp_unit_0071, "recomp_unit_0071");
    runtime.register_function(0x08922350u, &recomp_unit_0071, "recomp_unit_0071");
    runtime.register_function(0x0892235Cu, &recomp_unit_0071, "recomp_unit_0071");
    runtime.register_function(0x08922364u, &recomp_unit_0071, "recomp_unit_0071");
    runtime.register_function(0x08922370u, &recomp_unit_0071, "recomp_unit_0071");
    runtime.register_function(0x0892237Cu, &recomp_unit_0071, "recomp_unit_0071");
    runtime.register_function(0x08922384u, &recomp_unit_0071, "recomp_unit_0071");
    runtime.register_function(0x08922390u, &recomp_unit_0071, "recomp_unit_0071");
    runtime.register_function(0x089223A4u, &recomp_unit_0071, "recomp_unit_0071");
    runtime.register_function(0x089223B8u, &recomp_unit_0071, "recomp_unit_0071");
    runtime.register_function(0x089223CCu, &recomp_unit_0071, "recomp_unit_0071");
    runtime.register_function(0x089223E0u, &recomp_unit_0071, "recomp_unit_0071");
    runtime.register_function(0x089223ECu, &recomp_unit_0071, "recomp_unit_0071");
    runtime.register_function(0x089223FCu, &recomp_unit_0071, "recomp_unit_0071");
    runtime.register_function(0x08922408u, &recomp_unit_0071, "recomp_unit_0071");
    runtime.register_function(0x08922414u, &recomp_unit_0071, "recomp_unit_0071");
    runtime.register_function(0x08922424u, &recomp_unit_0071, "recomp_unit_0071");
    runtime.register_function(0x08922434u, &recomp_unit_0071, "recomp_unit_0071");
    runtime.register_function(0x08922444u, &recomp_unit_0071, "recomp_unit_0071");
    runtime.register_function(0x08922450u, &recomp_unit_0071, "recomp_unit_0071");
    runtime.register_function(0x0892245Cu, &recomp_unit_0071, "recomp_unit_0071");
    runtime.register_function(0x0892246Cu, &recomp_unit_0071, "recomp_unit_0071");
    runtime.register_function(0x08922480u, &recomp_unit_0071, "recomp_unit_0071");
    runtime.register_function(0x089224A8u, &recomp_unit_0071, "recomp_unit_0071");
    runtime.register_function(0x089224B8u, &recomp_unit_0071, "recomp_unit_0071");
    runtime.register_function(0x089224C4u, &recomp_unit_0071, "recomp_unit_0071");
    runtime.register_function(0x089224D0u, &recomp_unit_0071, "recomp_unit_0071");
    runtime.register_function(0x089224F4u, &recomp_unit_0071, "recomp_unit_0071");
    runtime.register_function(0x0892250Cu, &recomp_unit_0071, "recomp_unit_0071");
    runtime.register_function(0x08922514u, &recomp_unit_0071, "recomp_unit_0071");
    runtime.register_function(0x08922518u, &recomp_unit_0071, "recomp_unit_0071");
    runtime.register_function(0x08922524u, &recomp_unit_0071, "recomp_unit_0071");
    runtime.register_function(0x08922530u, &recomp_unit_0071, "recomp_unit_0071");
    runtime.register_function(0x0892254Cu, &recomp_unit_0071, "recomp_unit_0071");
    runtime.register_function(0x08922558u, &recomp_unit_0071, "recomp_unit_0071");
    runtime.register_function(0x0892258Cu, &recomp_unit_0071, "recomp_unit_0071");
    runtime.register_function(0x089225A4u, &recomp_unit_0071, "recomp_unit_0071");
    runtime.register_function(0x089225B8u, &recomp_unit_0071, "recomp_unit_0071");
    runtime.register_function(0x089225BCu, &recomp_unit_0071, "recomp_unit_0071");
    runtime.register_function(0x089225C8u, &recomp_unit_0071, "recomp_unit_0071");
    runtime.register_function(0x089225D8u, &recomp_unit_0071, "recomp_unit_0071");
    runtime.register_function(0x089225E8u, &recomp_unit_0071, "recomp_unit_0071");
    runtime.register_function(0x08922600u, &recomp_unit_0071, "recomp_unit_0071");
    runtime.register_function(0x0892260Cu, &recomp_unit_0071, "recomp_unit_0071");
    runtime.register_function(0x08922620u, &recomp_unit_0071, "recomp_unit_0071");
    runtime.register_function(0x08922628u, &recomp_unit_0071, "recomp_unit_0071");
    runtime.register_function(0x08922638u, &recomp_unit_0071, "recomp_unit_0071");
    runtime.register_function(0x08922654u, &recomp_unit_0071, "recomp_unit_0071");
    runtime.register_function(0x08922658u, &recomp_unit_0071, "recomp_unit_0071");
    runtime.register_function(0x08922668u, &recomp_unit_0071, "recomp_unit_0071");
    runtime.register_function(0x0892267Cu, &recomp_unit_0071, "recomp_unit_0071");
    runtime.register_function(0x0892268Cu, &recomp_unit_0071, "recomp_unit_0071");
    runtime.register_function(0x089226A0u, &recomp_unit_0071, "recomp_unit_0071");
    runtime.register_function(0x089226ACu, &recomp_unit_0071, "recomp_unit_0071");
    runtime.register_function(0x089226C0u, &recomp_unit_0071, "recomp_unit_0071");
    runtime.register_function(0x089226CCu, &recomp_unit_0071, "recomp_unit_0071");
    runtime.register_function(0x089226F8u, &recomp_unit_0071, "recomp_unit_0071");
    runtime.register_function(0x089226FCu, &recomp_unit_0071, "recomp_unit_0071");
    runtime.register_function(0x0892270Cu, &recomp_unit_0071, "recomp_unit_0071");
    runtime.register_function(0x08922738u, &recomp_unit_0071, "recomp_unit_0071");
    runtime.register_function(0x08922740u, &recomp_unit_0071, "recomp_unit_0071");
    runtime.register_function(0x08922744u, &recomp_unit_0071, "recomp_unit_0071");
    runtime.register_function(0x08922754u, &recomp_unit_0071, "recomp_unit_0071");
    runtime.register_function(0x08922764u, &recomp_unit_0071, "recomp_unit_0071");
    runtime.register_function(0x0892276Cu, &recomp_unit_0071, "recomp_unit_0071");
    runtime.register_function(0x08922770u, &recomp_unit_0071, "recomp_unit_0071");
    runtime.register_function(0x089227A4u, &recomp_unit_0071, "recomp_unit_0071");
    runtime.register_function(0x089227B4u, &recomp_unit_0071, "recomp_unit_0071");
    runtime.register_function(0x089227E0u, &recomp_unit_0071, "recomp_unit_0071");
    runtime.register_function(0x089227F8u, &recomp_unit_0071, "recomp_unit_0071");
    runtime.register_function(0x08922808u, &recomp_unit_0071, "recomp_unit_0071");
    runtime.register_function(0x08922810u, &recomp_unit_0071, "recomp_unit_0071");
    runtime.register_function(0x08922828u, &recomp_unit_0071, "recomp_unit_0071");
    runtime.register_function(0x08922834u, &recomp_unit_0071, "recomp_unit_0071");
    runtime.register_function(0x08922840u, &recomp_unit_0071, "recomp_unit_0071");
    runtime.register_function(0x0892284Cu, &recomp_unit_0071, "recomp_unit_0071");
    runtime.register_function(0x08922854u, &recomp_unit_0071, "recomp_unit_0071");
    runtime.register_function(0x0892285Cu, &recomp_unit_0071, "recomp_unit_0071");
    runtime.register_function(0x08922878u, &recomp_unit_0071, "recomp_unit_0071");
    runtime.register_function(0x0892288Cu, &recomp_unit_0071, "recomp_unit_0071");
    runtime.register_function(0x089228B4u, &recomp_unit_0071, "recomp_unit_0071");
    runtime.register_function(0x089228D8u, &recomp_unit_0071, "recomp_unit_0071");
    runtime.register_function(0x089228FCu, &recomp_unit_0071, "recomp_unit_0071");
    runtime.register_function(0x08922910u, &recomp_unit_0071, "recomp_unit_0071");
    runtime.register_function(0x08922940u, &recomp_unit_0071, "recomp_unit_0071");
    runtime.register_function(0x08922954u, &recomp_unit_0071, "recomp_unit_0071");
    runtime.register_function(0x08922978u, &recomp_unit_0071, "recomp_unit_0071");
    runtime.register_function(0x08922980u, &recomp_unit_0071, "recomp_unit_0071");
    runtime.register_function(0x08922988u, &recomp_unit_0071, "recomp_unit_0071");
    runtime.register_function(0x089229A8u, &recomp_unit_0071, "recomp_unit_0071");
    runtime.register_function(0x089229B4u, &recomp_unit_0071, "recomp_unit_0071");
    runtime.register_function(0x089229C0u, &recomp_unit_0071, "recomp_unit_0071");
    runtime.register_function(0x089229C8u, &recomp_unit_0071, "recomp_unit_0071");
    runtime.register_function(0x089229E0u, &recomp_unit_0071, "recomp_unit_0071");
    runtime.register_function(0x08922A20u, &recomp_unit_0071, "recomp_unit_0071");
    runtime.register_function(0x08922A30u, &recomp_unit_0071, "recomp_unit_0071");
    runtime.register_function(0x08922A54u, &recomp_unit_0071, "recomp_unit_0071");
    runtime.register_function(0x08922A60u, &recomp_unit_0071, "recomp_unit_0071");
    runtime.register_function(0x08922A6Cu, &recomp_unit_0071, "recomp_unit_0071");
    runtime.register_function(0x08922A7Cu, &recomp_unit_0071, "recomp_unit_0071");
    runtime.register_function(0x08922A88u, &recomp_unit_0071, "recomp_unit_0071");
    runtime.register_function(0x08922A90u, &recomp_unit_0071, "recomp_unit_0071");
    runtime.register_function(0x08922AB0u, &recomp_unit_0071, "recomp_unit_0071");
    runtime.register_function(0x08922AB8u, &recomp_unit_0071, "recomp_unit_0071");
    runtime.register_function(0x08922AD4u, &recomp_unit_0071, "recomp_unit_0071");
    runtime.register_function(0x08922AF8u, &recomp_unit_0071, "recomp_unit_0071");
    runtime.register_function(0x08922B08u, &recomp_unit_0071, "recomp_unit_0071");
    runtime.register_function(0x08922B14u, &recomp_unit_0071, "recomp_unit_0071");
    runtime.register_function(0x08922B28u, &recomp_unit_0071, "recomp_unit_0071");
    runtime.register_function(0x08922B30u, &recomp_unit_0071, "recomp_unit_0071");
    runtime.register_function(0x08922B38u, &recomp_unit_0071, "recomp_unit_0071");
    runtime.register_function(0x08922B3Cu, &recomp_unit_0071, "recomp_unit_0071");
    runtime.register_function(0x08922B48u, &recomp_unit_0071, "recomp_unit_0071");
    runtime.register_function(0x08922B54u, &recomp_unit_0071, "recomp_unit_0071");
    runtime.register_function(0x08922B74u, &recomp_unit_0071, "recomp_unit_0071");
    runtime.register_function(0x08922B7Cu, &recomp_unit_0071, "recomp_unit_0071");
    runtime.register_function(0x08922B8Cu, &recomp_unit_0071, "recomp_unit_0071");
    runtime.register_function(0x08922B9Cu, &recomp_unit_0071, "recomp_unit_0071");
    runtime.register_function(0x08922BB8u, &recomp_unit_0071, "recomp_unit_0071");
    runtime.register_function(0x08922BC0u, &recomp_unit_0071, "recomp_unit_0071");
    runtime.register_function(0x08922BDCu, &recomp_unit_0071, "recomp_unit_0071");
    runtime.register_function(0x08922C2Cu, &recomp_unit_0071, "recomp_unit_0071");
    runtime.register_function(0x08922C38u, &recomp_unit_0071, "recomp_unit_0071");
    runtime.register_function(0x08922C44u, &recomp_unit_0071, "recomp_unit_0071");
    runtime.register_function(0x08922C4Cu, &recomp_unit_0071, "recomp_unit_0071");
    runtime.register_function(0x08922C50u, &recomp_unit_0071, "recomp_unit_0071");
    runtime.register_function(0x08922C70u, &recomp_unit_0071, "recomp_unit_0071");
    runtime.register_function(0x08922C94u, &recomp_unit_0071, "recomp_unit_0071");
    runtime.register_function(0x08922C98u, &recomp_unit_0071, "recomp_unit_0071");
    runtime.register_function(0x08922CA0u, &recomp_unit_0071, "recomp_unit_0071");
    runtime.register_function(0x08922CBCu, &recomp_unit_0071, "recomp_unit_0071");
    runtime.register_function(0x08922CC8u, &recomp_unit_0071, "recomp_unit_0071");
    runtime.register_function(0x08922CD4u, &recomp_unit_0071, "recomp_unit_0071");
    runtime.register_function(0x08922CD8u, &recomp_unit_0071, "recomp_unit_0071");
    runtime.register_function(0x08922CE8u, &recomp_unit_0071, "recomp_unit_0071");
    runtime.register_function(0x08922D08u, &recomp_unit_0071, "recomp_unit_0071");
    runtime.register_function(0x08922D20u, &recomp_unit_0071, "recomp_unit_0071");
    runtime.register_function(0x08922D38u, &recomp_unit_0071, "recomp_unit_0071");
    runtime.register_function(0x08922D54u, &recomp_unit_0071, "recomp_unit_0071");
    runtime.register_function(0x08922D58u, &recomp_unit_0071, "recomp_unit_0071");
    runtime.register_function(0x08922D78u, &recomp_unit_0071, "recomp_unit_0071");
    runtime.register_function(0x08922D84u, &recomp_unit_0071, "recomp_unit_0071");
    runtime.register_function(0x08922D90u, &recomp_unit_0071, "recomp_unit_0071");
    runtime.register_function(0x08922D94u, &recomp_unit_0071, "recomp_unit_0071");
    runtime.register_function(0x08922D98u, &recomp_unit_0071, "recomp_unit_0071");
    runtime.register_function(0x08922DB0u, &recomp_unit_0071, "recomp_unit_0071");
    runtime.register_function(0x08922DD0u, &recomp_unit_0071, "recomp_unit_0071");
    runtime.register_function(0x08922E08u, &recomp_unit_0071, "recomp_unit_0071");
    runtime.register_function(0x08922E18u, &recomp_unit_0071, "recomp_unit_0071");
    runtime.register_function(0x08922E28u, &recomp_unit_0071, "recomp_unit_0071");
    runtime.register_function(0x08922E38u, &recomp_unit_0071, "recomp_unit_0071");
    runtime.register_function(0x08922E4Cu, &recomp_unit_0071, "recomp_unit_0071");
    runtime.register_function(0x08922E58u, &recomp_unit_0071, "recomp_unit_0071");
    runtime.register_function(0x08922E68u, &recomp_unit_0071, "recomp_unit_0071");
    runtime.register_function(0x08922E90u, &recomp_unit_0071, "recomp_unit_0071");
    runtime.register_function(0x08922E98u, &recomp_unit_0071, "recomp_unit_0071");
    runtime.register_function(0x08922EA4u, &recomp_unit_0071, "recomp_unit_0071");
    runtime.register_function(0x08922EB0u, &recomp_unit_0071, "recomp_unit_0071");
    runtime.register_function(0x08922EC0u, &recomp_unit_0071, "recomp_unit_0071");
    runtime.register_function(0x08922EDCu, &recomp_unit_0071, "recomp_unit_0071");
    runtime.register_function(0x08922EE8u, &recomp_unit_0071, "recomp_unit_0071");
    runtime.register_function(0x08922EF4u, &recomp_unit_0071, "recomp_unit_0071");
    runtime.register_function(0x08922F00u, &recomp_unit_0071, "recomp_unit_0071");
    runtime.register_function(0x08922F0Cu, &recomp_unit_0071, "recomp_unit_0071");
    runtime.register_function(0x08922F14u, &recomp_unit_0071, "recomp_unit_0071");
    runtime.register_function(0x08922F20u, &recomp_unit_0071, "recomp_unit_0071");
    runtime.register_function(0x08922F30u, &recomp_unit_0071, "recomp_unit_0071");
    runtime.register_function(0x08922F3Cu, &recomp_unit_0071, "recomp_unit_0071");
    runtime.register_function(0x08922F44u, &recomp_unit_0071, "recomp_unit_0071");
    runtime.register_function(0x08922F50u, &recomp_unit_0071, "recomp_unit_0071");
    runtime.register_function(0x08922F58u, &recomp_unit_0071, "recomp_unit_0071");
    runtime.register_function(0x08922F6Cu, &recomp_unit_0071, "recomp_unit_0071");
    runtime.register_function(0x08922F80u, &recomp_unit_0071, "recomp_unit_0071");
    runtime.register_function(0x08922F88u, &recomp_unit_0071, "recomp_unit_0071");
    runtime.register_function(0x08922F94u, &recomp_unit_0071, "recomp_unit_0071");
    runtime.register_function(0x08922FACu, &recomp_unit_0071, "recomp_unit_0071");
    runtime.register_function(0x08922FB8u, &recomp_unit_0071, "recomp_unit_0071");
    runtime.register_function(0x08922FC0u, &recomp_unit_0071, "recomp_unit_0071");
    runtime.register_function(0x08922FC8u, &recomp_unit_0071, "recomp_unit_0071");
    runtime.register_function(0x08922FD4u, &recomp_unit_0071, "recomp_unit_0071");
    runtime.register_function(0x08922FE0u, &recomp_unit_0071, "recomp_unit_0071");
    runtime.register_function(0x08922FF0u, &recomp_unit_0071, "recomp_unit_0071");
    runtime.register_function(0x08922FFCu, &recomp_unit_0071, "recomp_unit_0071");
    runtime.register_function(0x08923004u, &recomp_unit_0071, "recomp_unit_0071");
    runtime.register_function(0x0892300Cu, &recomp_unit_0071, "recomp_unit_0071");
    runtime.register_function(0x0892301Cu, &recomp_unit_0071, "recomp_unit_0071");
    runtime.register_function(0x08923024u, &recomp_unit_0071, "recomp_unit_0071");
    runtime.register_function(0x08923034u, &recomp_unit_0071, "recomp_unit_0071");
    runtime.register_function(0x0892304Cu, &recomp_unit_0071, "recomp_unit_0071");
    runtime.register_function(0x08923050u, &recomp_unit_0071, "recomp_unit_0071");
    runtime.register_function(0x08923058u, &recomp_unit_0071, "recomp_unit_0071");
    runtime.register_function(0x08923070u, &recomp_unit_0071, "recomp_unit_0071");
    runtime.register_function(0x0892307Cu, &recomp_unit_0071, "recomp_unit_0071");
    runtime.register_function(0x08923084u, &recomp_unit_0071, "recomp_unit_0071");
    runtime.register_function(0x08923098u, &recomp_unit_0071, "recomp_unit_0071");
    runtime.register_function(0x089230A0u, &recomp_unit_0071, "recomp_unit_0071");
    runtime.register_function(0x089230ACu, &recomp_unit_0071, "recomp_unit_0071");
    runtime.register_function(0x089230C8u, &recomp_unit_0071, "recomp_unit_0071");
    runtime.register_function(0x089230D4u, &recomp_unit_0071, "recomp_unit_0071");
    runtime.register_function(0x089230DCu, &recomp_unit_0071, "recomp_unit_0071");
    runtime.register_function(0x089230E4u, &recomp_unit_0071, "recomp_unit_0071");
    runtime.register_function(0x089230F0u, &recomp_unit_0071, "recomp_unit_0071");
    runtime.register_function(0x089230FCu, &recomp_unit_0071, "recomp_unit_0071");
    runtime.register_function(0x0892310Cu, &recomp_unit_0071, "recomp_unit_0071");
    runtime.register_function(0x08923118u, &recomp_unit_0071, "recomp_unit_0071");
    runtime.register_function(0x08923120u, &recomp_unit_0071, "recomp_unit_0071");
    runtime.register_function(0x08923128u, &recomp_unit_0071, "recomp_unit_0071");
    runtime.register_function(0x08923138u, &recomp_unit_0071, "recomp_unit_0071");
    runtime.register_function(0x08923140u, &recomp_unit_0071, "recomp_unit_0071");
    runtime.register_function(0x08923150u, &recomp_unit_0071, "recomp_unit_0071");
    runtime.register_function(0x08923168u, &recomp_unit_0071, "recomp_unit_0071");
    runtime.register_function(0x0892316Cu, &recomp_unit_0071, "recomp_unit_0071");
    runtime.register_function(0x08923174u, &recomp_unit_0071, "recomp_unit_0071");
    runtime.register_function(0x0892318Cu, &recomp_unit_0071, "recomp_unit_0071");
    runtime.register_function(0x08923198u, &recomp_unit_0071, "recomp_unit_0071");
    runtime.register_function(0x0892319Cu, &recomp_unit_0071, "recomp_unit_0071");
    runtime.register_function(0x089231B8u, &recomp_unit_0071, "recomp_unit_0071");
    runtime.register_function(0x089231F4u, &recomp_unit_0071, "recomp_unit_0071");
    runtime.register_function(0x08923214u, &recomp_unit_0071, "recomp_unit_0071");
    runtime.register_function(0x08923220u, &recomp_unit_0071, "recomp_unit_0071");
    runtime.register_function(0x0892323Cu, &recomp_unit_0071, "recomp_unit_0071");
    runtime.register_function(0x08923258u, &recomp_unit_0071, "recomp_unit_0071");
    runtime.register_function(0x08923268u, &recomp_unit_0071, "recomp_unit_0071");
    runtime.register_function(0x08923274u, &recomp_unit_0071, "recomp_unit_0071");
    runtime.register_function(0x08923280u, &recomp_unit_0071, "recomp_unit_0071");
    runtime.register_function(0x08923290u, &recomp_unit_0071, "recomp_unit_0071");
    runtime.register_function(0x089232A4u, &recomp_unit_0071, "recomp_unit_0071");
    runtime.register_function(0x089232B0u, &recomp_unit_0071, "recomp_unit_0071");
    runtime.register_function(0x089232BCu, &recomp_unit_0071, "recomp_unit_0071");
    runtime.register_function(0x089232C8u, &recomp_unit_0071, "recomp_unit_0071");
    runtime.register_function(0x089232D8u, &recomp_unit_0071, "recomp_unit_0071");
    runtime.register_function(0x089232E4u, &recomp_unit_0071, "recomp_unit_0071");
    runtime.register_function(0x089232F0u, &recomp_unit_0071, "recomp_unit_0071");
    runtime.register_function(0x089232F4u, &recomp_unit_0071, "recomp_unit_0071");
    runtime.register_function(0x08923304u, &recomp_unit_0071, "recomp_unit_0071");
    runtime.register_function(0x08923310u, &recomp_unit_0071, "recomp_unit_0071");
    runtime.register_function(0x08923328u, &recomp_unit_0071, "recomp_unit_0071");
    runtime.register_function(0x08923360u, &recomp_unit_0071, "recomp_unit_0071");
    runtime.register_function(0x08923380u, &recomp_unit_0071, "recomp_unit_0071");
    runtime.register_function(0x08923394u, &recomp_unit_0071, "recomp_unit_0071");
    runtime.register_function(0x0892339Cu, &recomp_unit_0071, "recomp_unit_0071");
    runtime.register_function(0x089233ACu, &recomp_unit_0071, "recomp_unit_0071");
    runtime.register_function(0x089233BCu, &recomp_unit_0071, "recomp_unit_0071");
    runtime.register_function(0x089233D4u, &recomp_unit_0071, "recomp_unit_0071");
    runtime.register_function(0x089233D8u, &recomp_unit_0071, "recomp_unit_0071");
    runtime.register_function(0x089233E0u, &recomp_unit_0071, "recomp_unit_0071");
    runtime.register_function(0x089233F8u, &recomp_unit_0071, "recomp_unit_0071");
    runtime.register_function(0x08923404u, &recomp_unit_0071, "recomp_unit_0071");
    runtime.register_function(0x08923408u, &recomp_unit_0071, "recomp_unit_0071");
    runtime.register_function(0x08923418u, &recomp_unit_0071, "recomp_unit_0071");
    runtime.register_function(0x08923424u, &recomp_unit_0071, "recomp_unit_0071");
    runtime.register_function(0x08923440u, &recomp_unit_0071, "recomp_unit_0071");
    runtime.register_function(0x0892345Cu, &recomp_unit_0071, "recomp_unit_0071");
    runtime.register_function(0x0892347Cu, &recomp_unit_0071, "recomp_unit_0071");
    runtime.register_function(0x0892349Cu, &recomp_unit_0071, "recomp_unit_0071");
    runtime.register_function(0x089234A8u, &recomp_unit_0071, "recomp_unit_0071");
    runtime.register_function(0x089234BCu, &recomp_unit_0071, "recomp_unit_0071");
    runtime.register_function(0x089234D8u, &recomp_unit_0071, "recomp_unit_0071");
    runtime.register_function(0x089234E0u, &recomp_unit_0071, "recomp_unit_0071");
    runtime.register_function(0x089234E4u, &recomp_unit_0071, "recomp_unit_0071");
    runtime.register_function(0x089234F4u, &recomp_unit_0071, "recomp_unit_0071");
    runtime.register_function(0x08923510u, &recomp_unit_0071, "recomp_unit_0071");
    runtime.register_function(0x08923530u, &recomp_unit_0071, "recomp_unit_0071");
    runtime.register_function(0x08923544u, &recomp_unit_0071, "recomp_unit_0071");
    runtime.register_function(0x08923560u, &recomp_unit_0071, "recomp_unit_0071");
    runtime.register_function(0x08923570u, &recomp_unit_0071, "recomp_unit_0071");
    runtime.register_function(0x08923588u, &recomp_unit_0071, "recomp_unit_0071");
    runtime.register_function(0x0892358Cu, &recomp_unit_0071, "recomp_unit_0071");
    runtime.register_function(0x08923594u, &recomp_unit_0071, "recomp_unit_0071");
    runtime.register_function(0x089235ACu, &recomp_unit_0071, "recomp_unit_0071");
    runtime.register_function(0x089235B8u, &recomp_unit_0071, "recomp_unit_0071");
    runtime.register_function(0x089235BCu, &recomp_unit_0071, "recomp_unit_0071");
    runtime.register_function(0x089235CCu, &recomp_unit_0071, "recomp_unit_0071");
    runtime.register_function(0x089235ECu, &recomp_unit_0071, "recomp_unit_0071");
    runtime.register_function(0x08923620u, &recomp_unit_0071, "recomp_unit_0071");
    runtime.register_function(0x0892362Cu, &recomp_unit_0071, "recomp_unit_0071");
    runtime.register_function(0x0892363Cu, &recomp_unit_0071, "recomp_unit_0071");
    runtime.register_function(0x0892364Cu, &recomp_unit_0071, "recomp_unit_0071");
    runtime.register_function(0x08923658u, &recomp_unit_0071, "recomp_unit_0071");
    runtime.register_function(0x08923664u, &recomp_unit_0071, "recomp_unit_0071");
    runtime.register_function(0x08923670u, &recomp_unit_0071, "recomp_unit_0071");
    runtime.register_function(0x0892367Cu, &recomp_unit_0071, "recomp_unit_0071");
    runtime.register_function(0x0892368Cu, &recomp_unit_0071, "recomp_unit_0071");
    runtime.register_function(0x08923698u, &recomp_unit_0071, "recomp_unit_0071");
    runtime.register_function(0x089236A0u, &recomp_unit_0071, "recomp_unit_0071");
    runtime.register_function(0x089236A8u, &recomp_unit_0071, "recomp_unit_0071");
    runtime.register_function(0x089236B4u, &recomp_unit_0071, "recomp_unit_0071");
    runtime.register_function(0x089236C0u, &recomp_unit_0071, "recomp_unit_0071");
    runtime.register_function(0x089236CCu, &recomp_unit_0071, "recomp_unit_0071");
    runtime.register_function(0x089236DCu, &recomp_unit_0071, "recomp_unit_0071");
    runtime.register_function(0x089236E8u, &recomp_unit_0071, "recomp_unit_0071");
    runtime.register_function(0x08923710u, &recomp_unit_0071, "recomp_unit_0071");
    runtime.register_function(0x08923718u, &recomp_unit_0071, "recomp_unit_0071");
    runtime.register_function(0x0892372Cu, &recomp_unit_0071, "recomp_unit_0071");
    runtime.register_function(0x08923740u, &recomp_unit_0071, "recomp_unit_0071");
    runtime.register_function(0x08923748u, &recomp_unit_0071, "recomp_unit_0071");
    runtime.register_function(0x08923760u, &recomp_unit_0071, "recomp_unit_0071");
    runtime.register_function(0x08923768u, &recomp_unit_0071, "recomp_unit_0071");
    runtime.register_function(0x0892377Cu, &recomp_unit_0071, "recomp_unit_0071");
    runtime.register_function(0x08923788u, &recomp_unit_0071, "recomp_unit_0071");
    runtime.register_function(0x08923790u, &recomp_unit_0071, "recomp_unit_0071");
    runtime.register_function(0x08923794u, &recomp_unit_0071, "recomp_unit_0071");
    runtime.register_function(0x089237A4u, &recomp_unit_0071, "recomp_unit_0071");
    runtime.register_function(0x089237A8u, &recomp_unit_0071, "recomp_unit_0071");
    runtime.register_function(0x089237C4u, &recomp_unit_0071, "recomp_unit_0071");
    runtime.register_function(0x08923810u, &recomp_unit_0071, "recomp_unit_0071");
    runtime.register_function(0x08923830u, &recomp_unit_0071, "recomp_unit_0071");
    runtime.register_function(0x0892383Cu, &recomp_unit_0071, "recomp_unit_0071");
    runtime.register_function(0x08923858u, &recomp_unit_0071, "recomp_unit_0071");
    runtime.register_function(0x08923874u, &recomp_unit_0071, "recomp_unit_0071");
    runtime.register_function(0x08923884u, &recomp_unit_0071, "recomp_unit_0071");
    runtime.register_function(0x08923890u, &recomp_unit_0071, "recomp_unit_0071");
    runtime.register_function(0x0892389Cu, &recomp_unit_0071, "recomp_unit_0071");
    runtime.register_function(0x089238B0u, &recomp_unit_0071, "recomp_unit_0071");
    runtime.register_function(0x089238B8u, &recomp_unit_0071, "recomp_unit_0071");
    runtime.register_function(0x089238D4u, &recomp_unit_0071, "recomp_unit_0071");
    runtime.register_function(0x089238D8u, &recomp_unit_0071, "recomp_unit_0071");
    runtime.register_function(0x089238FCu, &recomp_unit_0071, "recomp_unit_0071");
    runtime.register_function(0x08923908u, &recomp_unit_0071, "recomp_unit_0071");
    runtime.register_function(0x08923924u, &recomp_unit_0071, "recomp_unit_0071");
    runtime.register_function(0x08923938u, &recomp_unit_0071, "recomp_unit_0071");
    runtime.register_function(0x08923968u, &recomp_unit_0071, "recomp_unit_0071");
    runtime.register_function(0x08923970u, &recomp_unit_0071, "recomp_unit_0071");
    runtime.register_function(0x0892398Cu, &recomp_unit_0071, "recomp_unit_0071");
    runtime.register_function(0x08923994u, &recomp_unit_0071, "recomp_unit_0071");
    runtime.register_function(0x089239A8u, &recomp_unit_0071, "recomp_unit_0071");
    runtime.register_function(0x089239ACu, &recomp_unit_0071, "recomp_unit_0071");
    runtime.register_function(0x089239B8u, &recomp_unit_0071, "recomp_unit_0071");
    runtime.register_function(0x089239BCu, &recomp_unit_0071, "recomp_unit_0071");
    runtime.register_function(0x089239CCu, &recomp_unit_0071, "recomp_unit_0071");
    runtime.register_function(0x089239D0u, &recomp_unit_0071, "recomp_unit_0071");
    runtime.register_function(0x089239FCu, &recomp_unit_0071, "recomp_unit_0071");
    runtime.register_function(0x08923A20u, &recomp_unit_0071, "recomp_unit_0071");
    runtime.register_function(0x08923A2Cu, &recomp_unit_0071, "recomp_unit_0071");
    runtime.register_function(0x08923A3Cu, &recomp_unit_0071, "recomp_unit_0071");
    runtime.register_function(0x08923A48u, &recomp_unit_0071, "recomp_unit_0071");
    runtime.register_function(0x08923A58u, &recomp_unit_0071, "recomp_unit_0071");
    runtime.register_function(0x08923A64u, &recomp_unit_0071, "recomp_unit_0071");
    runtime.register_function(0x08923A74u, &recomp_unit_0071, "recomp_unit_0071");
    runtime.register_function(0x08923A80u, &recomp_unit_0071, "recomp_unit_0071");
    runtime.register_function(0x08923A90u, &recomp_unit_0071, "recomp_unit_0071");
    runtime.register_function(0x08923AA8u, &recomp_unit_0071, "recomp_unit_0071");
    runtime.register_function(0x08923AB0u, &recomp_unit_0071, "recomp_unit_0071");
    runtime.register_function(0x08923AB8u, &recomp_unit_0071, "recomp_unit_0071");
    runtime.register_function(0x08923AC8u, &recomp_unit_0071, "recomp_unit_0071");
    runtime.register_function(0x08923AE0u, &recomp_unit_0071, "recomp_unit_0071");
    runtime.register_function(0x08923AE4u, &recomp_unit_0071, "recomp_unit_0071");
    runtime.register_function(0x08923AECu, &recomp_unit_0071, "recomp_unit_0071");
    runtime.register_function(0x08923AF4u, &recomp_unit_0071, "recomp_unit_0071");
    runtime.register_function(0x08923AF8u, &recomp_unit_0071, "recomp_unit_0071");
    runtime.register_function(0x08923B04u, &recomp_unit_0071, "recomp_unit_0071");
    runtime.register_function(0x08923B10u, &recomp_unit_0071, "recomp_unit_0071");
    runtime.register_function(0x08923B1Cu, &recomp_unit_0071, "recomp_unit_0071");
    runtime.register_function(0x08923B20u, &recomp_unit_0071, "recomp_unit_0071");
    runtime.register_function(0x08923B3Cu, &recomp_unit_0071, "recomp_unit_0071");
    runtime.register_function(0x08923B74u, &recomp_unit_0071, "recomp_unit_0071");
    runtime.register_function(0x08923B7Cu, &recomp_unit_0071, "recomp_unit_0071");
    runtime.register_function(0x08923B88u, &recomp_unit_0071, "recomp_unit_0071");
    runtime.register_function(0x08923B98u, &recomp_unit_0071, "recomp_unit_0071");
    runtime.register_function(0x08923BA8u, &recomp_unit_0071, "recomp_unit_0071");
    runtime.register_function(0x08923BB8u, &recomp_unit_0071, "recomp_unit_0071");
    runtime.register_function(0x08923BC4u, &recomp_unit_0071, "recomp_unit_0071");
    runtime.register_function(0x08923BD0u, &recomp_unit_0071, "recomp_unit_0071");
    runtime.register_function(0x08923BDCu, &recomp_unit_0071, "recomp_unit_0071");
    runtime.register_function(0x08923BE8u, &recomp_unit_0071, "recomp_unit_0071");
    runtime.register_function(0x08923BF8u, &recomp_unit_0071, "recomp_unit_0071");
    runtime.register_function(0x08923C04u, &recomp_unit_0071, "recomp_unit_0071");
    runtime.register_function(0x08923C10u, &recomp_unit_0071, "recomp_unit_0071");
    runtime.register_function(0x08923C1Cu, &recomp_unit_0071, "recomp_unit_0071");
    runtime.register_function(0x08923C2Cu, &recomp_unit_0071, "recomp_unit_0071");
    runtime.register_function(0x08923C38u, &recomp_unit_0071, "recomp_unit_0071");
    runtime.register_function(0x08923C48u, &recomp_unit_0071, "recomp_unit_0071");
    runtime.register_function(0x08923C54u, &recomp_unit_0071, "recomp_unit_0071");
    runtime.register_function(0x08923C5Cu, &recomp_unit_0071, "recomp_unit_0071");
    runtime.register_function(0x08923C64u, &recomp_unit_0071, "recomp_unit_0071");
    runtime.register_function(0x08923C70u, &recomp_unit_0071, "recomp_unit_0071");
    runtime.register_function(0x08923C84u, &recomp_unit_0071, "recomp_unit_0071");
    runtime.register_function(0x08923C8Cu, &recomp_unit_0071, "recomp_unit_0071");
    runtime.register_function(0x08923CA4u, &recomp_unit_0071, "recomp_unit_0071");
    runtime.register_function(0x08923CACu, &recomp_unit_0071, "recomp_unit_0071");
    runtime.register_function(0x08923CC0u, &recomp_unit_0071, "recomp_unit_0071");
    runtime.register_function(0x08923CCCu, &recomp_unit_0071, "recomp_unit_0071");
    runtime.register_function(0x08923CD8u, &recomp_unit_0071, "recomp_unit_0071");
    runtime.register_function(0x08923CECu, &recomp_unit_0071, "recomp_unit_0071");
    runtime.register_function(0x08923CF8u, &recomp_unit_0071, "recomp_unit_0071");
    runtime.register_function(0x08923D20u, &recomp_unit_0071, "recomp_unit_0071");
    runtime.register_function(0x08923D28u, &recomp_unit_0071, "recomp_unit_0071");
    runtime.register_function(0x08923D40u, &recomp_unit_0071, "recomp_unit_0071");
    runtime.register_function(0x08923D58u, &recomp_unit_0071, "recomp_unit_0071");
    runtime.register_function(0x08923D60u, &recomp_unit_0071, "recomp_unit_0071");
    runtime.register_function(0x08923D68u, &recomp_unit_0071, "recomp_unit_0071");
    runtime.register_function(0x08923D80u, &recomp_unit_0071, "recomp_unit_0071");
    runtime.register_function(0x08923D84u, &recomp_unit_0071, "recomp_unit_0071");
    runtime.register_function(0x08923D8Cu, &recomp_unit_0071, "recomp_unit_0071");
    runtime.register_function(0x08923D98u, &recomp_unit_0071, "recomp_unit_0071");
    runtime.register_function(0x08923DA0u, &recomp_unit_0071, "recomp_unit_0071");
    runtime.register_function(0x08923DA8u, &recomp_unit_0071, "recomp_unit_0071");
    runtime.register_function(0x08923DB4u, &recomp_unit_0071, "recomp_unit_0071");
    runtime.register_function(0x08923DCCu, &recomp_unit_0071, "recomp_unit_0071");
    runtime.register_function(0x08923DD4u, &recomp_unit_0071, "recomp_unit_0071");
    runtime.register_function(0x08923DE0u, &recomp_unit_0071, "recomp_unit_0071");
    runtime.register_function(0x08923DECu, &recomp_unit_0071, "recomp_unit_0071");
    runtime.register_function(0x08923E04u, &recomp_unit_0071, "recomp_unit_0071");
    runtime.register_function(0x08923E1Cu, &recomp_unit_0071, "recomp_unit_0071");
    runtime.register_function(0x08923E3Cu, &recomp_unit_0071, "recomp_unit_0071");
    runtime.register_function(0x08923E4Cu, &recomp_unit_0071, "recomp_unit_0071");
    runtime.register_function(0x08923E54u, &recomp_unit_0071, "recomp_unit_0071");
    runtime.register_function(0x08923E68u, &recomp_unit_0071, "recomp_unit_0071");
    runtime.register_function(0x08923E70u, &recomp_unit_0071, "recomp_unit_0071");
    runtime.register_function(0x08923E84u, &recomp_unit_0071, "recomp_unit_0071");
    runtime.register_function(0x08923E90u, &recomp_unit_0071, "recomp_unit_0071");
    runtime.register_function(0x08923E98u, &recomp_unit_0071, "recomp_unit_0071");
    runtime.register_function(0x08923E9Cu, &recomp_unit_0071, "recomp_unit_0071");
    runtime.register_function(0x08923EACu, &recomp_unit_0071, "recomp_unit_0071");
    runtime.register_function(0x08923EB0u, &recomp_unit_0071, "recomp_unit_0071");
    runtime.register_function(0x08923ECCu, &recomp_unit_0071, "recomp_unit_0071");
    runtime.register_function(0x08923EE0u, &recomp_unit_0071, "recomp_unit_0071");
    runtime.register_function(0x08923EF4u, &recomp_unit_0071, "recomp_unit_0071");
    runtime.register_function(0x08923EF8u, &recomp_unit_0071, "recomp_unit_0071");
    runtime.register_function(0x08923F00u, &recomp_unit_0071, "recomp_unit_0071");
    runtime.register_function(0x08923F24u, &recomp_unit_0071, "recomp_unit_0071");
    runtime.register_function(0x08923F54u, &recomp_unit_0071, "recomp_unit_0071");
    runtime.register_function(0x08923F6Cu, &recomp_unit_0071, "recomp_unit_0071");
    runtime.register_function(0x08923F74u, &recomp_unit_0071, "recomp_unit_0071");
    runtime.register_function(0x08923F7Cu, &recomp_unit_0071, "recomp_unit_0071");
    runtime.register_function(0x08923F84u, &recomp_unit_0071, "recomp_unit_0071");
    runtime.register_function(0x08923FA8u, &recomp_unit_0071, "recomp_unit_0071");
    runtime.register_function(0x08923FB4u, &recomp_unit_0071, "recomp_unit_0071");
    runtime.register_function(0x08923FBCu, &recomp_unit_0071, "recomp_unit_0071");
    runtime.register_function(0x08923FC0u, &recomp_unit_0071, "recomp_unit_0071");
    runtime.register_function(0x08923FD4u, &recomp_unit_0071, "recomp_unit_0071");
    runtime.register_function(0x08923FECu, &recomp_unit_0071, "recomp_unit_0071");
}
} // namespace psprecomp
