#include "psprecomp/runtime.hpp"
#include "generated_units.hpp"
#include <bit>
#include <cmath>
#include <cstdint>
#include <limits>

namespace psprecomp {
static const std::uint16_t kEntryIds_recomp_unit_0125[4091] = {
    1, 0, 0, 0, 0, 2, 0, 0, 0, 0, 0, 3, 4, 0, 5, 0, 0, 0, 0, 0, 6, 7, 0, 8, 0, 0, 0, 0, 0, 9, 10, 0,
    11, 0, 0, 0, 0, 0, 12, 0, 0, 13, 0, 0, 14, 0, 0, 0, 0, 0, 0, 0, 0, 15, 0, 0, 0, 0, 16, 0, 0, 0, 0, 17,
    0, 0, 18, 19, 0, 0, 20, 0, 0, 0, 0, 0, 21, 22, 0, 23, 0, 0, 0, 0, 0, 24, 25, 0, 26, 0, 0, 0, 0, 0, 27, 28,
    0, 29, 0, 0, 0, 0, 0, 30, 31, 0, 32, 0, 0, 0, 0, 0, 33, 34, 0, 35, 0, 0, 0, 0, 0, 36, 37, 0, 38, 0, 0, 0,
    0, 0, 39, 40, 0, 41, 0, 0, 0, 0, 0, 0, 42, 0, 0, 0, 43, 0, 0, 0, 0, 0, 0, 0, 0, 0, 44, 45, 0, 46, 0, 0,
    0, 0, 0, 47, 48, 0, 49, 0, 0, 0, 0, 0, 50, 51, 0, 52, 0, 0, 53, 0, 0, 0, 0, 0, 0, 0, 0, 54, 0, 0, 0, 55,
    0, 56, 0, 0, 0, 0, 57, 0, 0, 0, 0, 0, 0, 0, 0, 58, 0, 0, 59, 0, 0, 60, 0, 0, 0, 0, 61, 0, 0, 0, 0, 0,
    0, 0, 0, 62, 0, 0, 0, 0, 0, 0, 63, 0, 0, 0, 0, 64, 0, 0, 65, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 66,
    0, 67, 0, 0, 0, 68, 69, 0, 0, 0, 70, 71, 0, 0, 0, 72, 0, 0, 0, 0, 73, 0, 0, 74, 75, 0, 0, 76, 0, 0, 0, 0,
    0, 77, 78, 0, 0, 0, 0, 0, 79, 0, 0, 0, 0, 0, 0, 0, 0, 80, 81, 0, 82, 0, 0, 0, 0, 0, 83, 84, 0, 85, 0, 0,
    0, 0, 0, 86, 87, 0, 88, 0, 0, 89, 0, 0, 0, 90, 0, 0, 91, 0, 0, 92, 93, 0, 0, 0, 94, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 95, 96, 0, 97, 0, 0, 0, 0, 0, 98, 99, 0, 100, 0, 0, 0, 0, 0, 101, 102, 0, 103, 0, 0, 0, 0, 0, 104,
    105, 0, 106, 0, 0, 0, 0, 0, 107, 108, 0, 109, 0, 0, 0, 0, 0, 110, 111, 0, 112, 0, 0, 113, 0, 0, 0, 114, 0, 115, 0, 0,
    0, 0, 0, 116, 0, 0, 0, 0, 0, 117, 0, 0, 0, 0, 0, 118, 0, 0, 0, 0, 0, 119, 0, 0, 0, 0, 0, 120, 0, 0, 0, 0,
    0, 121, 0, 0, 122, 0, 0, 123, 124, 0, 0, 0, 0, 0, 125, 0, 0, 0, 0, 0, 0, 126, 0, 0, 0, 127, 0, 0, 0, 0, 0, 0,
    0, 128, 0, 129, 0, 0, 130, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 131, 0, 0, 0, 132, 0, 0, 0, 133, 0, 0, 0, 134, 0, 0, 0, 135, 0, 0, 0, 136, 0, 0, 137, 138, 0, 0, 0, 0, 0, 139,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 140, 141, 0, 142, 0, 0, 0, 0, 0, 143, 144, 0, 145, 0, 0, 0, 0, 0, 146, 147,
    0, 148, 0, 0, 149, 0, 0, 0, 150, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 151, 0, 0,
    152, 0, 153, 0, 0, 154, 0, 155, 0, 156, 0, 0, 0, 157, 0, 158, 0, 0, 159, 160, 0, 0, 0, 0, 0, 0, 161, 0, 0, 0, 0, 0,
    162, 0, 0, 0, 0, 163, 0, 0, 0, 0, 0, 164, 0, 0, 0, 0, 165, 0, 0, 0, 0, 0, 166, 0, 0, 0, 0, 167, 0, 0, 168, 169,
    0, 170, 0, 0, 0, 0, 0, 0, 0, 0, 171, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 172, 0,
    0, 0, 0, 0, 173, 0, 0, 0, 0, 0, 174, 175, 0, 0, 0, 0, 0, 176, 177, 0, 0, 0, 0, 0, 178, 179, 0, 0, 0, 0, 0, 180,
    181, 0, 0, 0, 0, 0, 182, 183, 0, 0, 0, 0, 0, 184, 185, 0, 186, 0, 0, 0, 0, 0, 0, 0, 0, 187, 0, 0, 188, 0, 0, 0,
    0, 0, 0, 0, 189, 190, 0, 0, 191, 0, 0, 0, 0, 0, 192, 0, 0, 0, 0, 0, 193, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 194, 195, 0, 0, 0, 0, 196, 197, 0, 0, 0, 0, 198, 199, 0, 0, 0, 0, 200, 201, 0, 0, 0, 0, 202, 203, 0, 0, 0, 0,
    204, 205, 0, 206, 0, 0, 0, 0, 0, 207, 208, 0, 0, 0, 0, 0, 209, 210, 0, 0, 0, 0, 0, 211, 212, 0, 0, 0, 0, 0, 213, 214,
    0, 0, 0, 0, 0, 215, 216, 0, 0, 0, 0, 0, 217, 218, 0, 219, 0, 0, 0, 220, 0, 0, 0, 221, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 222, 0, 0, 0, 0, 0, 223, 224, 0, 225, 0, 0, 0, 0, 0, 226, 227, 0, 228, 0, 0, 0, 0, 0, 229, 230, 0, 231, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 232, 0, 0, 0, 0, 0, 0, 0, 0, 233, 0, 234, 0, 0,
    0, 0, 0, 0, 235, 0, 236, 0, 0, 0, 0, 0, 0, 237, 0, 238, 0, 0, 0, 0, 0, 0, 239, 0, 0, 0, 0, 0, 0, 240, 0, 0,
    0, 0, 0, 0, 0, 241, 0, 0, 0, 0, 0, 0, 0, 242, 0, 0, 0, 0, 0, 0, 0, 243, 0, 0, 0, 0, 0, 0, 244, 0, 0, 0,
    0, 0, 0, 0, 245, 0, 0, 0, 0, 0, 0, 0, 246, 0, 0, 0, 0, 0, 247, 0, 0, 0, 0, 0, 248, 0, 0, 0, 0, 0, 249, 0,
    0, 0, 0, 0, 250, 0, 0, 0, 0, 0, 251, 0, 0, 0, 0, 0, 252, 0, 0, 0, 0, 0, 253, 0, 0, 0, 0, 0, 254, 0, 0, 0,
    255, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 256, 0, 0, 0, 0, 0, 257, 0, 0, 0, 0, 0, 258, 0, 0, 0, 0, 0, 259, 0,
    0, 0, 0, 0, 260, 0, 0, 0, 0, 0, 261, 0, 0, 0, 0, 0, 262, 0, 0, 0, 0, 0, 263, 0, 0, 0, 0, 0, 264, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 265, 0, 0, 0, 0, 0, 266, 267, 0, 0, 268, 0, 0, 0, 0, 0, 0, 269, 0, 0, 0, 270, 0, 0, 0, 0,
    271, 0, 0, 0, 272, 0, 0, 0, 0, 273, 0, 0, 0, 274, 0, 0, 0, 0, 275, 0, 0, 0, 276, 0, 0, 0, 0, 277, 0, 0, 0, 278,
    0, 0, 0, 0, 279, 0, 0, 0, 0, 0, 0, 280, 0, 0, 0, 0, 281, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 282, 0, 0, 0, 0, 283, 0, 0, 0, 284, 285, 0, 0, 286, 0, 0, 287, 0, 0, 288, 0, 289,
    0, 0, 290, 291, 0, 0, 0, 0, 292, 0, 0, 0, 0, 293, 0, 0, 294, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 295, 0, 0, 0, 0, 296, 0, 0, 0, 297, 298, 0, 0, 299, 300, 0, 0, 301, 0, 0, 302, 0, 0,
    303, 0, 304, 0, 0, 305, 306, 0, 307, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 308, 309, 0, 310, 0, 0, 0, 0, 0, 311, 312, 0, 313,
    0, 0, 0, 0, 0, 314, 315, 0, 316, 0, 0, 317, 0, 0, 318, 0, 0, 0, 319, 0, 0, 0, 0, 320, 0, 0, 0, 0, 0, 0, 0, 321,
    0, 0, 0, 322, 0, 0, 0, 0, 323, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 324, 0, 0, 325, 0, 0, 326, 0, 0, 0,
    327, 0, 0, 0, 0, 0, 328, 0, 329, 0, 0, 330, 331, 0, 0, 332, 333, 0, 0, 0, 0, 0, 0, 0, 334, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 335, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 336, 0, 0, 337, 0, 338, 0, 0, 339,
    0, 340, 0, 341, 0, 0, 0, 342, 0, 343, 0, 0, 344, 345, 0, 0, 0, 0, 0, 0, 346, 0, 0, 0, 347, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 348, 0, 0, 349, 350, 0, 0, 351, 0, 0, 352, 0, 0, 353, 354, 0, 355, 0, 0,
    0, 0, 0, 0, 0, 0, 356, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 357, 0, 0, 0, 0, 0,
    358, 0, 0, 0, 0, 0, 0, 0, 0, 0, 359, 0, 0, 0, 0, 0, 360, 361, 0, 0, 362, 0, 0, 0, 0, 0, 0, 363, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 364, 0, 0, 365, 0, 0, 366, 0, 0, 0, 0, 0, 0, 0, 0, 0, 367, 368, 0, 0, 369, 370, 0, 0, 371, 0, 0,
    0, 0, 0, 0, 372, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 373, 0, 0, 374, 0, 0, 0, 0, 0, 375, 376, 0, 0, 377, 0,
    0, 0, 0, 0, 0, 378, 0, 0, 0, 0, 0, 0, 0, 0, 0, 379, 0, 0, 0, 0, 0, 380, 381, 0, 0, 382, 0, 0, 0, 0, 0, 0,
    383, 0, 0, 0, 384, 0, 0, 0, 385, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 386, 0, 0, 0, 0, 0, 0, 0, 0, 387, 0,
    0, 0, 0, 0, 0, 0, 0, 388, 0, 0, 0, 0, 0, 0, 0, 0, 389, 0, 0, 0, 0, 0, 0, 0, 0, 390, 0, 0, 0, 0, 0, 0,
    0, 0, 391, 0, 0, 0, 0, 392, 0, 0, 393, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 394, 0, 0, 0, 0, 0, 0, 0, 0, 395, 0,
    0, 0, 0, 0, 0, 396, 397, 0, 398, 0, 0, 0, 0, 0, 0, 399, 400, 0, 401, 0, 0, 0, 402, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 403, 0,
    0, 404, 0, 0, 0, 0, 0, 0, 0, 0, 0, 405, 0, 406, 0, 0, 0, 0, 0, 407, 0, 0, 408, 0, 0, 0, 409, 0, 0, 0, 410, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 411, 0, 0, 0, 0, 412,
    0, 0, 0, 413, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 414, 0, 0, 0, 0, 415, 0, 0, 0, 0, 416, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 417, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 418, 0, 0, 419, 0, 420, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 421,
    0, 0, 0, 422, 0, 423, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 424, 0, 0, 0, 425, 0, 0, 0, 426, 0, 427, 0, 428, 0, 429, 0,
    430, 0, 431, 0, 432, 0, 433, 0, 434, 0, 435, 0, 436, 0, 437, 0, 438, 0, 439, 0, 440, 0, 441, 0, 0, 0, 442, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 443, 0, 444, 0, 445, 0, 446, 0, 0, 447, 448, 0, 0, 449, 0, 0,
    450, 0, 451, 0, 0, 0, 452, 0, 0, 453, 0, 0, 454, 0, 0, 455, 0, 456, 0, 0, 0, 457, 0, 0, 0, 458, 0, 0, 0, 459, 0, 0,
    0, 460, 461, 0, 0, 462, 0, 0, 463, 0, 464, 0, 0, 465, 0, 466, 0, 0, 0, 467, 0, 468, 0, 0, 469, 0, 0, 470, 0, 0, 0, 0,
    471, 472, 0, 0, 473, 0, 474, 0, 475, 0, 0, 0, 476, 0, 477, 478, 0, 0, 479, 0, 0, 480, 0, 481, 0, 482, 0, 0, 0, 483, 0, 0,
    484, 485, 0, 0, 486, 0, 0, 487, 0, 488, 0, 0, 0, 489, 0, 0, 490, 0, 0, 0, 0, 491, 0, 0, 492, 493, 0, 0, 494, 0, 495, 0,
    496, 497, 0, 0, 498, 0, 0, 499, 0, 500, 0, 0, 0, 0, 0, 501, 0, 0, 0, 0, 502, 0, 0, 0, 0, 503, 0, 0, 0, 0, 0, 504,
    0, 505, 0, 0, 506, 0, 0, 507, 0, 508, 0, 0, 0, 509, 0, 0, 510, 0, 0, 0, 0, 0, 511, 0, 0, 0, 0, 0, 512, 0, 513, 0,
    0, 514, 0, 0, 515, 0, 0, 516, 0, 0, 517, 0, 518, 0, 0, 0, 519, 0, 0, 0, 520, 0, 0, 0, 521, 0, 0, 0, 522, 0, 0, 0,
    523, 524, 0, 0, 525, 0, 0, 526, 0, 527, 0, 528, 0, 529, 0, 0, 0, 530, 0, 0, 531, 0, 532, 0, 0, 0, 533, 0, 534, 0, 0, 0,
    535, 0, 536, 0, 0, 0, 537, 538, 539, 0, 540, 541, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 542, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 543, 0, 0, 0, 0, 0, 0, 0, 0, 0, 544, 0, 0, 0, 0, 0, 0, 545, 0, 0, 0, 0, 0, 0, 0, 546, 0, 0, 0, 547,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 548, 0, 0, 0, 0, 549, 0, 0, 0, 0, 550, 0, 0, 0, 0, 551, 0,
    0, 0, 0, 552, 0, 0, 0, 0, 553, 0, 0, 0, 0, 554, 0, 0, 0, 0, 555, 0, 0, 0, 0, 556, 0, 0, 0, 0, 557, 0, 0, 0,
    0, 558, 0, 0, 0, 0, 559, 0, 0, 0, 0, 560, 0, 0, 0, 0, 561, 0, 0, 0, 0, 562, 0, 0, 0, 0, 563, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 564, 0, 0, 565, 0, 0, 566, 0, 0, 0,
    567, 0, 0, 568, 0, 569, 0, 0, 570, 0, 571, 0, 0, 0, 0, 572, 573, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 574, 0,
    0, 575, 0, 0, 0, 0, 0, 576, 0, 0, 0, 577, 0, 0, 578, 0, 0, 0, 579, 0, 0, 0, 0, 0, 0, 580, 0, 0, 0, 0, 0, 0,
    581, 0, 582, 0, 0, 0, 0, 0, 0, 583, 0, 0, 0, 0, 0, 0, 0, 584, 0, 0, 0, 0, 0, 0, 585, 0, 0, 0, 0, 0, 0, 0,
    586, 0, 0, 0, 0, 0, 0, 587, 0, 0, 0, 0, 0, 0, 0, 588, 0, 0, 0, 0, 0, 0, 0, 589, 0, 0, 0, 0, 0, 590, 0, 0,
    0, 0, 0, 591, 0, 0, 0, 0, 0, 592, 0, 0, 0, 0, 0, 593, 0, 0, 0, 0, 0, 594, 0, 0, 0, 0, 0, 595, 0, 0, 0, 0,
    0, 596, 0, 0, 0, 0, 0, 597, 0, 0, 0, 0, 0, 598, 0, 0, 0, 599, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 600, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 601, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 602, 0, 0, 0,
    0, 0, 0, 603, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 604, 0, 0, 0, 0, 0, 605, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 606, 0, 0, 607, 0, 0, 0, 0, 608, 0, 0, 0,
    0, 609, 0, 0, 0, 0, 610, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 611, 0, 0, 0, 0, 0, 0, 0, 612, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 613, 614, 0, 615, 0, 0, 0, 0, 0, 616, 617, 0, 618, 0, 0, 0, 0, 0, 619, 620, 0, 621, 0, 0, 622, 0, 0,
    0, 0, 0, 0, 0, 0, 623, 0, 0, 0, 624, 0, 625, 0, 0, 0, 0, 626, 0, 0, 0, 0, 0, 627, 0, 0, 628, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 629, 630, 0, 631, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 632, 0, 0, 0, 0, 0, 0, 0, 633, 634, 0, 635, 636, 0, 637, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 638, 0, 0, 639, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 640, 641, 0, 642, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 643, 0, 0, 0, 0, 0, 644, 0, 0, 645, 646, 0, 647, 0, 0, 0, 0, 0, 648, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 649, 0, 650, 0, 0, 651, 652, 0, 653, 654, 0, 0, 0, 655, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 656, 0, 0, 0, 0, 0, 657, 658, 0, 659, 0, 0, 0, 0, 0, 660, 661, 0, 662, 0, 0, 663, 0, 0, 0, 664, 0, 0, 0,
    0, 0, 0, 665, 0, 0, 0, 666, 0, 667, 0, 0, 668, 0, 0, 0, 669, 0, 670, 0, 0, 671, 672, 0, 673, 0, 0, 0, 0, 0, 0, 0,
    0, 674, 0, 675, 0, 0, 676, 0, 0, 0, 0, 0, 0, 0, 0, 0, 677, 0, 678, 0, 0, 679, 680, 0, 681, 0, 0, 0, 0, 0, 0, 0,
    0, 682, 0, 683, 0, 0, 684, 0, 0, 0, 0, 0, 0, 0, 0, 0, 685, 0, 686, 0, 0, 687, 688, 0, 689, 0, 0, 0, 0, 0, 0, 0,
    0, 690, 0, 691, 0, 0, 692, 0, 0, 0, 0, 0, 0, 0, 0, 0, 693, 0, 694, 0, 0, 695, 696, 0, 697, 0, 0, 0, 0, 0, 0, 0,
    0, 698, 0, 699, 0, 0, 700, 0, 0, 0, 0, 0, 0, 0, 0, 0, 701, 0, 702, 0, 0, 703, 704, 0, 705, 0, 0, 0, 0, 0, 0, 0,
    0, 706, 0, 707, 0, 0, 708, 0, 0, 0, 0, 0, 0, 0, 0, 0, 709, 0, 710, 0, 0, 711, 712, 0, 713, 0, 0, 0, 0, 0, 0, 0,
    0, 714, 0, 715, 0, 0, 716, 0, 0, 0, 0, 0, 0, 0, 0, 0, 717, 0, 718, 0, 0, 719, 720, 0, 721, 0, 0, 0, 722, 0, 723, 0,
    0, 724, 0, 0, 0, 725, 0, 726, 0, 0, 727, 728, 0, 729, 730, 0, 0, 0, 0, 0, 731, 0, 0, 0, 0, 0, 732, 0, 0, 733, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 734, 0, 0, 735, 0, 0, 0, 736, 0, 0, 737, 738, 0, 739, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 740, 0, 0, 0, 0, 0, 741, 0, 0, 0, 742, 0, 743, 0, 0, 744,
    0, 745, 0, 746, 0, 0, 747, 748, 0, 0, 0, 0, 0, 749, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 750,
    0, 0, 751, 752, 0, 753, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 754, 755, 0, 756, 0, 757, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 758, 759, 0, 760, 0, 0, 0, 0, 0, 761, 762, 0, 763, 0, 0, 0, 0, 0, 764, 765, 0, 766, 0, 0, 767, 0, 0,
    0, 0, 768, 0, 0, 0, 0, 769, 0, 0, 0, 0, 0, 0, 0, 770, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 771, 0, 0, 0, 772, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 773, 0, 0, 0,
    774, 0, 0, 0, 0, 775, 0, 0, 0, 776, 0, 0, 0, 777, 0, 778, 0, 0, 779, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 780, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 781, 0, 0, 0, 0, 782, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 783, 0, 0, 0, 784, 0, 0, 0, 0, 0, 0, 785, 0, 786, 0, 0, 0, 0, 0, 0, 787, 0, 0, 0, 0, 0,
    0, 788, 0, 0, 0, 0, 0, 0, 0, 789, 0, 0, 0, 0, 0, 0, 0, 790, 0, 0, 0, 0, 0, 0, 791, 0, 792,
};
void recomp_unit_0125_entry(Runtime &rt, AllegrexContext &ctx, std::uint16_t direct_entry_id, GuestMemory::AotFastView &aot_mem) {
    std::uint32_t jump_target = 0u;
    std::uint32_t local_transfers = 0u;
    std::uint32_t local_pc = ctx.pc;
    std::uint32_t entry_id = direct_entry_id;
LOCAL_DISPATCH:
    {
    if (entry_id == 0u) {
        const std::uint32_t entry_delta = local_pc - 0x089F8000u;
        entry_id = (entry_delta < 16364u && (entry_delta & 3u) == 0u) ? kEntryIds_recomp_unit_0125[entry_delta >> 2u] : 0u;
    }
    switch (entry_id) {
    case 1u: goto L_089F8000;
    case 2u: goto L_089F8014;
    case 3u: goto L_089F802C;
    case 4u: goto L_089F8030;
    case 5u: goto L_089F8038;
    case 6u: goto L_089F8050;
    case 7u: goto L_089F8054;
    case 8u: goto L_089F805C;
    case 9u: goto L_089F8074;
    case 10u: goto L_089F8078;
    case 11u: goto L_089F8080;
    case 12u: goto L_089F8098;
    case 13u: goto L_089F80A4;
    case 14u: goto L_089F80B0;
    case 15u: goto L_089F80D4;
    case 16u: goto L_089F80E8;
    case 17u: goto L_089F80FC;
    case 18u: goto L_089F8108;
    case 19u: goto L_089F810C;
    case 20u: goto L_089F8118;
    case 21u: goto L_089F8130;
    case 22u: goto L_089F8134;
    case 23u: goto L_089F813C;
    case 24u: goto L_089F8154;
    case 25u: goto L_089F8158;
    case 26u: goto L_089F8160;
    case 27u: goto L_089F8178;
    case 28u: goto L_089F817C;
    case 29u: goto L_089F8184;
    case 30u: goto L_089F819C;
    case 31u: goto L_089F81A0;
    case 32u: goto L_089F81A8;
    case 33u: goto L_089F81C0;
    case 34u: goto L_089F81C4;
    case 35u: goto L_089F81CC;
    case 36u: goto L_089F81E4;
    case 37u: goto L_089F81E8;
    case 38u: goto L_089F81F0;
    case 39u: goto L_089F8208;
    case 40u: goto L_089F820C;
    case 41u: goto L_089F8214;
    case 42u: goto L_089F8230;
    case 43u: goto L_089F8240;
    case 44u: goto L_089F8268;
    case 45u: goto L_089F826C;
    case 46u: goto L_089F8274;
    case 47u: goto L_089F828C;
    case 48u: goto L_089F8290;
    case 49u: goto L_089F8298;
    case 50u: goto L_089F82B0;
    case 51u: goto L_089F82B4;
    case 52u: goto L_089F82BC;
    case 53u: goto L_089F82C8;
    case 54u: goto L_089F82EC;
    case 55u: goto L_089F82FC;
    case 56u: goto L_089F8304;
    case 57u: goto L_089F8318;
    case 58u: goto L_089F833C;
    case 59u: goto L_089F8348;
    case 60u: goto L_089F8354;
    case 61u: goto L_089F8368;
    case 62u: goto L_089F838C;
    case 63u: goto L_089F83A8;
    case 64u: goto L_089F83BC;
    case 65u: goto L_089F83C8;
    case 66u: goto L_089F83FC;
    case 67u: goto L_089F8404;
    case 68u: goto L_089F8414;
    case 69u: goto L_089F8418;
    case 70u: goto L_089F8428;
    case 71u: goto L_089F842C;
    case 72u: goto L_089F843C;
    case 73u: goto L_089F8450;
    case 74u: goto L_089F845C;
    case 75u: goto L_089F8460;
    case 76u: goto L_089F846C;
    case 77u: goto L_089F8484;
    case 78u: goto L_089F8488;
    case 79u: goto L_089F84A0;
    case 80u: goto L_089F84C4;
    case 81u: goto L_089F84C8;
    case 82u: goto L_089F84D0;
    case 83u: goto L_089F84E8;
    case 84u: goto L_089F84EC;
    case 85u: goto L_089F84F4;
    case 86u: goto L_089F850C;
    case 87u: goto L_089F8510;
    case 88u: goto L_089F8518;
    case 89u: goto L_089F8524;
    case 90u: goto L_089F8534;
    case 91u: goto L_089F8540;
    case 92u: goto L_089F854C;
    case 93u: goto L_089F8550;
    case 94u: goto L_089F8560;
    case 95u: goto L_089F8590;
    case 96u: goto L_089F8594;
    case 97u: goto L_089F859C;
    case 98u: goto L_089F85B4;
    case 99u: goto L_089F85B8;
    case 100u: goto L_089F85C0;
    case 101u: goto L_089F85D8;
    case 102u: goto L_089F85DC;
    case 103u: goto L_089F85E4;
    case 104u: goto L_089F85FC;
    case 105u: goto L_089F8600;
    case 106u: goto L_089F8608;
    case 107u: goto L_089F8620;
    case 108u: goto L_089F8624;
    case 109u: goto L_089F862C;
    case 110u: goto L_089F8644;
    case 111u: goto L_089F8648;
    case 112u: goto L_089F8650;
    case 113u: goto L_089F865C;
    case 114u: goto L_089F866C;
    case 115u: goto L_089F8674;
    case 116u: goto L_089F868C;
    case 117u: goto L_089F86A4;
    case 118u: goto L_089F86BC;
    case 119u: goto L_089F86D4;
    case 120u: goto L_089F86EC;
    case 121u: goto L_089F8704;
    case 122u: goto L_089F8710;
    case 123u: goto L_089F871C;
    case 124u: goto L_089F8720;
    case 125u: goto L_089F8738;
    case 126u: goto L_089F8754;
    case 127u: goto L_089F8764;
    case 128u: goto L_089F8784;
    case 129u: goto L_089F878C;
    case 130u: goto L_089F8798;
    case 131u: goto L_089F8804;
    case 132u: goto L_089F8814;
    case 133u: goto L_089F8824;
    case 134u: goto L_089F8834;
    case 135u: goto L_089F8844;
    case 136u: goto L_089F8854;
    case 137u: goto L_089F8860;
    case 138u: goto L_089F8864;
    case 139u: goto L_089F887C;
    case 140u: goto L_089F88B0;
    case 141u: goto L_089F88B4;
    case 142u: goto L_089F88BC;
    case 143u: goto L_089F88D4;
    case 144u: goto L_089F88D8;
    case 145u: goto L_089F88E0;
    case 146u: goto L_089F88F8;
    case 147u: goto L_089F88FC;
    case 148u: goto L_089F8904;
    case 149u: goto L_089F8910;
    case 150u: goto L_089F8920;
    case 151u: goto L_089F8974;
    case 152u: goto L_089F8980;
    case 153u: goto L_089F8988;
    case 154u: goto L_089F8994;
    case 155u: goto L_089F899C;
    case 156u: goto L_089F89A4;
    case 157u: goto L_089F89B4;
    case 158u: goto L_089F89BC;
    case 159u: goto L_089F89C8;
    case 160u: goto L_089F89CC;
    case 161u: goto L_089F89E8;
    case 162u: goto L_089F8A00;
    case 163u: goto L_089F8A14;
    case 164u: goto L_089F8A2C;
    case 165u: goto L_089F8A40;
    case 166u: goto L_089F8A58;
    case 167u: goto L_089F8A6C;
    case 168u: goto L_089F8A78;
    case 169u: goto L_089F8A7C;
    case 170u: goto L_089F8A84;
    case 171u: goto L_089F8AA8;
    case 172u: goto L_089F8AF8;
    case 173u: goto L_089F8B10;
    case 174u: goto L_089F8B28;
    case 175u: goto L_089F8B2C;
    case 176u: goto L_089F8B44;
    case 177u: goto L_089F8B48;
    case 178u: goto L_089F8B60;
    case 179u: goto L_089F8B64;
    case 180u: goto L_089F8B7C;
    case 181u: goto L_089F8B80;
    case 182u: goto L_089F8B98;
    case 183u: goto L_089F8B9C;
    case 184u: goto L_089F8BB4;
    case 185u: goto L_089F8BB8;
    case 186u: goto L_089F8BC0;
    case 187u: goto L_089F8BE4;
    case 188u: goto L_089F8BF0;
    case 189u: goto L_089F8C10;
    case 190u: goto L_089F8C14;
    case 191u: goto L_089F8C20;
    case 192u: goto L_089F8C38;
    case 193u: goto L_089F8C50;
    case 194u: goto L_089F8C88;
    case 195u: goto L_089F8C8C;
    case 196u: goto L_089F8CA0;
    case 197u: goto L_089F8CA4;
    case 198u: goto L_089F8CB8;
    case 199u: goto L_089F8CBC;
    case 200u: goto L_089F8CD0;
    case 201u: goto L_089F8CD4;
    case 202u: goto L_089F8CE8;
    case 203u: goto L_089F8CEC;
    case 204u: goto L_089F8D00;
    case 205u: goto L_089F8D04;
    case 206u: goto L_089F8D0C;
    case 207u: goto L_089F8D24;
    case 208u: goto L_089F8D28;
    case 209u: goto L_089F8D40;
    case 210u: goto L_089F8D44;
    case 211u: goto L_089F8D5C;
    case 212u: goto L_089F8D60;
    case 213u: goto L_089F8D78;
    case 214u: goto L_089F8D7C;
    case 215u: goto L_089F8D94;
    case 216u: goto L_089F8D98;
    case 217u: goto L_089F8DB0;
    case 218u: goto L_089F8DB4;
    case 219u: goto L_089F8DBC;
    case 220u: goto L_089F8DCC;
    case 221u: goto L_089F8DDC;
    case 222u: goto L_089F8E04;
    case 223u: goto L_089F8E1C;
    case 224u: goto L_089F8E20;
    case 225u: goto L_089F8E28;
    case 226u: goto L_089F8E40;
    case 227u: goto L_089F8E44;
    case 228u: goto L_089F8E4C;
    case 229u: goto L_089F8E64;
    case 230u: goto L_089F8E68;
    case 231u: goto L_089F8E70;
    case 232u: goto L_089F8EC8;
    case 233u: goto L_089F8EEC;
    case 234u: goto L_089F8EF4;
    case 235u: goto L_089F8F10;
    case 236u: goto L_089F8F18;
    case 237u: goto L_089F8F34;
    case 238u: goto L_089F8F3C;
    case 239u: goto L_089F8F58;
    case 240u: goto L_089F8F74;
    case 241u: goto L_089F8F94;
    case 242u: goto L_089F8FB4;
    case 243u: goto L_089F8FD4;
    case 244u: goto L_089F8FF0;
    case 245u: goto L_089F9010;
    case 246u: goto L_089F9030;
    case 247u: goto L_089F9048;
    case 248u: goto L_089F9060;
    case 249u: goto L_089F9078;
    case 250u: goto L_089F9090;
    case 251u: goto L_089F90A8;
    case 252u: goto L_089F90C0;
    case 253u: goto L_089F90D8;
    case 254u: goto L_089F90F0;
    case 255u: goto L_089F9100;
    case 256u: goto L_089F9130;
    case 257u: goto L_089F9148;
    case 258u: goto L_089F9160;
    case 259u: goto L_089F9178;
    case 260u: goto L_089F9190;
    case 261u: goto L_089F91A8;
    case 262u: goto L_089F91C0;
    case 263u: goto L_089F91D8;
    case 264u: goto L_089F91F0;
    case 265u: goto L_089F9218;
    case 266u: goto L_089F9230;
    case 267u: goto L_089F9234;
    case 268u: goto L_089F9240;
    case 269u: goto L_089F925C;
    case 270u: goto L_089F926C;
    case 271u: goto L_089F9280;
    case 272u: goto L_089F9290;
    case 273u: goto L_089F92A4;
    case 274u: goto L_089F92B4;
    case 275u: goto L_089F92C8;
    case 276u: goto L_089F92D8;
    case 277u: goto L_089F92EC;
    case 278u: goto L_089F92FC;
    case 279u: goto L_089F9310;
    case 280u: goto L_089F932C;
    case 281u: goto L_089F9340;
    case 282u: goto L_089F93A8;
    case 283u: goto L_089F93BC;
    case 284u: goto L_089F93CC;
    case 285u: goto L_089F93D0;
    case 286u: goto L_089F93DC;
    case 287u: goto L_089F93E8;
    case 288u: goto L_089F93F4;
    case 289u: goto L_089F93FC;
    case 290u: goto L_089F9408;
    case 291u: goto L_089F940C;
    case 292u: goto L_089F9420;
    case 293u: goto L_089F9434;
    case 294u: goto L_089F9440;
    case 295u: goto L_089F94A4;
    case 296u: goto L_089F94B8;
    case 297u: goto L_089F94C8;
    case 298u: goto L_089F94CC;
    case 299u: goto L_089F94D8;
    case 300u: goto L_089F94DC;
    case 301u: goto L_089F94E8;
    case 302u: goto L_089F94F4;
    case 303u: goto L_089F9500;
    case 304u: goto L_089F9508;
    case 305u: goto L_089F9514;
    case 306u: goto L_089F9518;
    case 307u: goto L_089F9520;
    case 308u: goto L_089F954C;
    case 309u: goto L_089F9550;
    case 310u: goto L_089F9558;
    case 311u: goto L_089F9570;
    case 312u: goto L_089F9574;
    case 313u: goto L_089F957C;
    case 314u: goto L_089F9594;
    case 315u: goto L_089F9598;
    case 316u: goto L_089F95A0;
    case 317u: goto L_089F95AC;
    case 318u: goto L_089F95B8;
    case 319u: goto L_089F95C8;
    case 320u: goto L_089F95DC;
    case 321u: goto L_089F95FC;
    case 322u: goto L_089F960C;
    case 323u: goto L_089F9620;
    case 324u: goto L_089F9658;
    case 325u: goto L_089F9664;
    case 326u: goto L_089F9670;
    case 327u: goto L_089F9680;
    case 328u: goto L_089F9698;
    case 329u: goto L_089F96A0;
    case 330u: goto L_089F96AC;
    case 331u: goto L_089F96B0;
    case 332u: goto L_089F96BC;
    case 333u: goto L_089F96C0;
    case 334u: goto L_089F96E0;
    case 335u: goto L_089F9708;
    case 336u: goto L_089F975C;
    case 337u: goto L_089F9768;
    case 338u: goto L_089F9770;
    case 339u: goto L_089F977C;
    case 340u: goto L_089F9784;
    case 341u: goto L_089F978C;
    case 342u: goto L_089F979C;
    case 343u: goto L_089F97A4;
    case 344u: goto L_089F97B0;
    case 345u: goto L_089F97B4;
    case 346u: goto L_089F97D0;
    case 347u: goto L_089F97E0;
    case 348u: goto L_089F9834;
    case 349u: goto L_089F9840;
    case 350u: goto L_089F9844;
    case 351u: goto L_089F9850;
    case 352u: goto L_089F985C;
    case 353u: goto L_089F9868;
    case 354u: goto L_089F986C;
    case 355u: goto L_089F9874;
    case 356u: goto L_089F9898;
    case 357u: goto L_089F98E8;
    case 358u: goto L_089F9900;
    case 359u: goto L_089F9928;
    case 360u: goto L_089F9940;
    case 361u: goto L_089F9944;
    case 362u: goto L_089F9950;
    case 363u: goto L_089F996C;
    case 364u: goto L_089F9994;
    case 365u: goto L_089F99A0;
    case 366u: goto L_089F99AC;
    case 367u: goto L_089F99D4;
    case 368u: goto L_089F99D8;
    case 369u: goto L_089F99E4;
    case 370u: goto L_089F99E8;
    case 371u: goto L_089F99F4;
    case 372u: goto L_089F9A10;
    case 373u: goto L_089F9A44;
    case 374u: goto L_089F9A50;
    case 375u: goto L_089F9A68;
    case 376u: goto L_089F9A6C;
    case 377u: goto L_089F9A78;
    case 378u: goto L_089F9A94;
    case 379u: goto L_089F9ABC;
    case 380u: goto L_089F9AD4;
    case 381u: goto L_089F9AD8;
    case 382u: goto L_089F9AE4;
    case 383u: goto L_089F9B00;
    case 384u: goto L_089F9B10;
    case 385u: goto L_089F9B20;
    case 386u: goto L_089F9B54;
    case 387u: goto L_089F9B78;
    case 388u: goto L_089F9B9C;
    case 389u: goto L_089F9BC0;
    case 390u: goto L_089F9BE4;
    case 391u: goto L_089F9C08;
    case 392u: goto L_089F9C1C;
    case 393u: goto L_089F9C28;
    case 394u: goto L_089F9CD4;
    case 395u: goto L_089F9CF8;
    case 396u: goto L_089F9D14;
    case 397u: goto L_089F9D18;
    case 398u: goto L_089F9D20;
    case 399u: goto L_089F9D3C;
    case 400u: goto L_089F9D40;
    case 401u: goto L_089F9D48;
    case 402u: goto L_089F9D58;
    case 403u: goto L_089F9DF8;
    case 404u: goto L_089F9E04;
    case 405u: goto L_089F9E2C;
    case 406u: goto L_089F9E34;
    case 407u: goto L_089F9E4C;
    case 408u: goto L_089F9E58;
    case 409u: goto L_089F9E68;
    case 410u: goto L_089F9E78;
    case 411u: goto L_089F9EE8;
    case 412u: goto L_089F9EFC;
    case 413u: goto L_089F9F0C;
    case 414u: goto L_089F9FD0;
    case 415u: goto L_089F9FE4;
    case 416u: goto L_089F9FF8;
    case 417u: goto L_089FA0BC;
    case 418u: goto L_089FA138;
    case 419u: goto L_089FA144;
    case 420u: goto L_089FA14C;
    case 421u: goto L_089FA17C;
    case 422u: goto L_089FA18C;
    case 423u: goto L_089FA194;
    case 424u: goto L_089FA1C0;
    case 425u: goto L_089FA1D0;
    case 426u: goto L_089FA1E0;
    case 427u: goto L_089FA1E8;
    case 428u: goto L_089FA1F0;
    case 429u: goto L_089FA1F8;
    case 430u: goto L_089FA200;
    case 431u: goto L_089FA208;
    case 432u: goto L_089FA210;
    case 433u: goto L_089FA218;
    case 434u: goto L_089FA220;
    case 435u: goto L_089FA228;
    case 436u: goto L_089FA230;
    case 437u: goto L_089FA238;
    case 438u: goto L_089FA240;
    case 439u: goto L_089FA248;
    case 440u: goto L_089FA250;
    case 441u: goto L_089FA258;
    case 442u: goto L_089FA268;
    case 443u: goto L_089FA2C0;
    case 444u: goto L_089FA2C8;
    case 445u: goto L_089FA2D0;
    case 446u: goto L_089FA2D8;
    case 447u: goto L_089FA2E4;
    case 448u: goto L_089FA2E8;
    case 449u: goto L_089FA2F4;
    case 450u: goto L_089FA300;
    case 451u: goto L_089FA308;
    case 452u: goto L_089FA318;
    case 453u: goto L_089FA324;
    case 454u: goto L_089FA330;
    case 455u: goto L_089FA33C;
    case 456u: goto L_089FA344;
    case 457u: goto L_089FA354;
    case 458u: goto L_089FA364;
    case 459u: goto L_089FA374;
    case 460u: goto L_089FA384;
    case 461u: goto L_089FA388;
    case 462u: goto L_089FA394;
    case 463u: goto L_089FA3A0;
    case 464u: goto L_089FA3A8;
    case 465u: goto L_089FA3B4;
    case 466u: goto L_089FA3BC;
    case 467u: goto L_089FA3CC;
    case 468u: goto L_089FA3D4;
    case 469u: goto L_089FA3E0;
    case 470u: goto L_089FA3EC;
    case 471u: goto L_089FA400;
    case 472u: goto L_089FA404;
    case 473u: goto L_089FA410;
    case 474u: goto L_089FA418;
    case 475u: goto L_089FA420;
    case 476u: goto L_089FA430;
    case 477u: goto L_089FA438;
    case 478u: goto L_089FA43C;
    case 479u: goto L_089FA448;
    case 480u: goto L_089FA454;
    case 481u: goto L_089FA45C;
    case 482u: goto L_089FA464;
    case 483u: goto L_089FA474;
    case 484u: goto L_089FA480;
    case 485u: goto L_089FA484;
    case 486u: goto L_089FA490;
    case 487u: goto L_089FA49C;
    case 488u: goto L_089FA4A4;
    case 489u: goto L_089FA4B4;
    case 490u: goto L_089FA4C0;
    case 491u: goto L_089FA4D4;
    case 492u: goto L_089FA4E0;
    case 493u: goto L_089FA4E4;
    case 494u: goto L_089FA4F0;
    case 495u: goto L_089FA4F8;
    case 496u: goto L_089FA500;
    case 497u: goto L_089FA504;
    case 498u: goto L_089FA510;
    case 499u: goto L_089FA51C;
    case 500u: goto L_089FA524;
    case 501u: goto L_089FA53C;
    case 502u: goto L_089FA550;
    case 503u: goto L_089FA564;
    case 504u: goto L_089FA57C;
    case 505u: goto L_089FA584;
    case 506u: goto L_089FA590;
    case 507u: goto L_089FA59C;
    case 508u: goto L_089FA5A4;
    case 509u: goto L_089FA5B4;
    case 510u: goto L_089FA5C0;
    case 511u: goto L_089FA5D8;
    case 512u: goto L_089FA5F0;
    case 513u: goto L_089FA5F8;
    case 514u: goto L_089FA604;
    case 515u: goto L_089FA610;
    case 516u: goto L_089FA61C;
    case 517u: goto L_089FA628;
    case 518u: goto L_089FA630;
    case 519u: goto L_089FA640;
    case 520u: goto L_089FA650;
    case 521u: goto L_089FA660;
    case 522u: goto L_089FA670;
    case 523u: goto L_089FA680;
    case 524u: goto L_089FA684;
    case 525u: goto L_089FA690;
    case 526u: goto L_089FA69C;
    case 527u: goto L_089FA6A4;
    case 528u: goto L_089FA6AC;
    case 529u: goto L_089FA6B4;
    case 530u: goto L_089FA6C4;
    case 531u: goto L_089FA6D0;
    case 532u: goto L_089FA6D8;
    case 533u: goto L_089FA6E8;
    case 534u: goto L_089FA6F0;
    case 535u: goto L_089FA700;
    case 536u: goto L_089FA708;
    case 537u: goto L_089FA718;
    case 538u: goto L_089FA71C;
    case 539u: goto L_089FA720;
    case 540u: goto L_089FA728;
    case 541u: goto L_089FA72C;
    case 542u: goto L_089FA760;
    case 543u: goto L_089FA788;
    case 544u: goto L_089FA7B0;
    case 545u: goto L_089FA7CC;
    case 546u: goto L_089FA7EC;
    case 547u: goto L_089FA7FC;
    case 548u: goto L_089FA83C;
    case 549u: goto L_089FA850;
    case 550u: goto L_089FA864;
    case 551u: goto L_089FA878;
    case 552u: goto L_089FA88C;
    case 553u: goto L_089FA8A0;
    case 554u: goto L_089FA8B4;
    case 555u: goto L_089FA8C8;
    case 556u: goto L_089FA8DC;
    case 557u: goto L_089FA8F0;
    case 558u: goto L_089FA904;
    case 559u: goto L_089FA918;
    case 560u: goto L_089FA92C;
    case 561u: goto L_089FA940;
    case 562u: goto L_089FA954;
    case 563u: goto L_089FA968;
    case 564u: goto L_089FAA58;
    case 565u: goto L_089FAA64;
    case 566u: goto L_089FAA70;
    case 567u: goto L_089FAA80;
    case 568u: goto L_089FAA8C;
    case 569u: goto L_089FAA94;
    case 570u: goto L_089FAAA0;
    case 571u: goto L_089FAAA8;
    case 572u: goto L_089FAABC;
    case 573u: goto L_089FAAC0;
    case 574u: goto L_089FAAF8;
    case 575u: goto L_089FAB04;
    case 576u: goto L_089FAB1C;
    case 577u: goto L_089FAB2C;
    case 578u: goto L_089FAB38;
    case 579u: goto L_089FAB48;
    case 580u: goto L_089FAB64;
    case 581u: goto L_089FAB80;
    case 582u: goto L_089FAB88;
    case 583u: goto L_089FABA4;
    case 584u: goto L_089FABC4;
    case 585u: goto L_089FABE0;
    case 586u: goto L_089FAC00;
    case 587u: goto L_089FAC1C;
    case 588u: goto L_089FAC3C;
    case 589u: goto L_089FAC5C;
    case 590u: goto L_089FAC74;
    case 591u: goto L_089FAC8C;
    case 592u: goto L_089FACA4;
    case 593u: goto L_089FACBC;
    case 594u: goto L_089FACD4;
    case 595u: goto L_089FACEC;
    case 596u: goto L_089FAD04;
    case 597u: goto L_089FAD1C;
    case 598u: goto L_089FAD34;
    case 599u: goto L_089FAD44;
    case 600u: goto L_089FAD98;
    case 601u: goto L_089FAE60;
    case 602u: goto L_089FAEF0;
    case 603u: goto L_089FAF0C;
    case 604u: goto L_089FAF98;
    case 605u: goto L_089FAFB0;
    case 606u: goto L_089FB050;
    case 607u: goto L_089FB05C;
    case 608u: goto L_089FB070;
    case 609u: goto L_089FB084;
    case 610u: goto L_089FB098;
    case 611u: goto L_089FB1C8;
    case 612u: goto L_089FB1E8;
    case 613u: goto L_089FB214;
    case 614u: goto L_089FB218;
    case 615u: goto L_089FB220;
    case 616u: goto L_089FB238;
    case 617u: goto L_089FB23C;
    case 618u: goto L_089FB244;
    case 619u: goto L_089FB25C;
    case 620u: goto L_089FB260;
    case 621u: goto L_089FB268;
    case 622u: goto L_089FB274;
    case 623u: goto L_089FB298;
    case 624u: goto L_089FB2A8;
    case 625u: goto L_089FB2B0;
    case 626u: goto L_089FB2C4;
    case 627u: goto L_089FB2DC;
    case 628u: goto L_089FB2E8;
    case 629u: goto L_089FB32C;
    case 630u: goto L_089FB330;
    case 631u: goto L_089FB338;
    case 632u: goto L_089FB384;
    case 633u: goto L_089FB3A4;
    case 634u: goto L_089FB3A8;
    case 635u: goto L_089FB3B0;
    case 636u: goto L_089FB3B4;
    case 637u: goto L_089FB3BC;
    case 638u: goto L_089FB404;
    case 639u: goto L_089FB410;
    case 640u: goto L_089FB44C;
    case 641u: goto L_089FB450;
    case 642u: goto L_089FB458;
    case 643u: goto L_089FB4B0;
    case 644u: goto L_089FB4C8;
    case 645u: goto L_089FB4D4;
    case 646u: goto L_089FB4D8;
    case 647u: goto L_089FB4E0;
    case 648u: goto L_089FB4F8;
    case 649u: goto L_089FB520;
    case 650u: goto L_089FB528;
    case 651u: goto L_089FB534;
    case 652u: goto L_089FB538;
    case 653u: goto L_089FB540;
    case 654u: goto L_089FB544;
    case 655u: goto L_089FB554;
    case 656u: goto L_089FB58C;
    case 657u: goto L_089FB5A4;
    case 658u: goto L_089FB5A8;
    case 659u: goto L_089FB5B0;
    case 660u: goto L_089FB5C8;
    case 661u: goto L_089FB5CC;
    case 662u: goto L_089FB5D4;
    case 663u: goto L_089FB5E0;
    case 664u: goto L_089FB5F0;
    case 665u: goto L_089FB60C;
    case 666u: goto L_089FB61C;
    case 667u: goto L_089FB624;
    case 668u: goto L_089FB630;
    case 669u: goto L_089FB640;
    case 670u: goto L_089FB648;
    case 671u: goto L_089FB654;
    case 672u: goto L_089FB658;
    case 673u: goto L_089FB660;
    case 674u: goto L_089FB684;
    case 675u: goto L_089FB68C;
    case 676u: goto L_089FB698;
    case 677u: goto L_089FB6C0;
    case 678u: goto L_089FB6C8;
    case 679u: goto L_089FB6D4;
    case 680u: goto L_089FB6D8;
    case 681u: goto L_089FB6E0;
    case 682u: goto L_089FB704;
    case 683u: goto L_089FB70C;
    case 684u: goto L_089FB718;
    case 685u: goto L_089FB740;
    case 686u: goto L_089FB748;
    case 687u: goto L_089FB754;
    case 688u: goto L_089FB758;
    case 689u: goto L_089FB760;
    case 690u: goto L_089FB784;
    case 691u: goto L_089FB78C;
    case 692u: goto L_089FB798;
    case 693u: goto L_089FB7C0;
    case 694u: goto L_089FB7C8;
    case 695u: goto L_089FB7D4;
    case 696u: goto L_089FB7D8;
    case 697u: goto L_089FB7E0;
    case 698u: goto L_089FB804;
    case 699u: goto L_089FB80C;
    case 700u: goto L_089FB818;
    case 701u: goto L_089FB840;
    case 702u: goto L_089FB848;
    case 703u: goto L_089FB854;
    case 704u: goto L_089FB858;
    case 705u: goto L_089FB860;
    case 706u: goto L_089FB884;
    case 707u: goto L_089FB88C;
    case 708u: goto L_089FB898;
    case 709u: goto L_089FB8C0;
    case 710u: goto L_089FB8C8;
    case 711u: goto L_089FB8D4;
    case 712u: goto L_089FB8D8;
    case 713u: goto L_089FB8E0;
    case 714u: goto L_089FB904;
    case 715u: goto L_089FB90C;
    case 716u: goto L_089FB918;
    case 717u: goto L_089FB940;
    case 718u: goto L_089FB948;
    case 719u: goto L_089FB954;
    case 720u: goto L_089FB958;
    case 721u: goto L_089FB960;
    case 722u: goto L_089FB970;
    case 723u: goto L_089FB978;
    case 724u: goto L_089FB984;
    case 725u: goto L_089FB994;
    case 726u: goto L_089FB99C;
    case 727u: goto L_089FB9A8;
    case 728u: goto L_089FB9AC;
    case 729u: goto L_089FB9B4;
    case 730u: goto L_089FB9B8;
    case 731u: goto L_089FB9D0;
    case 732u: goto L_089FB9E8;
    case 733u: goto L_089FB9F4;
    case 734u: goto L_089FBA3C;
    case 735u: goto L_089FBA48;
    case 736u: goto L_089FBA58;
    case 737u: goto L_089FBA64;
    case 738u: goto L_089FBA68;
    case 739u: goto L_089FBA70;
    case 740u: goto L_089FBAC0;
    case 741u: goto L_089FBAD8;
    case 742u: goto L_089FBAE8;
    case 743u: goto L_089FBAF0;
    case 744u: goto L_089FBAFC;
    case 745u: goto L_089FBB04;
    case 746u: goto L_089FBB0C;
    case 747u: goto L_089FBB18;
    case 748u: goto L_089FBB1C;
    case 749u: goto L_089FBB34;
    case 750u: goto L_089FBB7C;
    case 751u: goto L_089FBB88;
    case 752u: goto L_089FBB8C;
    case 753u: goto L_089FBB94;
    case 754u: goto L_089FBBD4;
    case 755u: goto L_089FBBD8;
    case 756u: goto L_089FBBE0;
    case 757u: goto L_089FBBE8;
    case 758u: goto L_089FBC14;
    case 759u: goto L_089FBC18;
    case 760u: goto L_089FBC20;
    case 761u: goto L_089FBC38;
    case 762u: goto L_089FBC3C;
    case 763u: goto L_089FBC44;
    case 764u: goto L_089FBC5C;
    case 765u: goto L_089FBC60;
    case 766u: goto L_089FBC68;
    case 767u: goto L_089FBC74;
    case 768u: goto L_089FBC88;
    case 769u: goto L_089FBC9C;
    case 770u: goto L_089FBCBC;
    case 771u: goto L_089FBD04;
    case 772u: goto L_089FBD14;
    case 773u: goto L_089FBD70;
    case 774u: goto L_089FBD80;
    case 775u: goto L_089FBD94;
    case 776u: goto L_089FBDA4;
    case 777u: goto L_089FBDB4;
    case 778u: goto L_089FBDBC;
    case 779u: goto L_089FBDC8;
    case 780u: goto L_089FBDF8;
    case 781u: goto L_089FBE64;
    case 782u: goto L_089FBE78;
    case 783u: goto L_089FBF18;
    case 784u: goto L_089FBF28;
    case 785u: goto L_089FBF44;
    case 786u: goto L_089FBF4C;
    case 787u: goto L_089FBF68;
    case 788u: goto L_089FBF84;
    case 789u: goto L_089FBFA4;
    case 790u: goto L_089FBFC4;
    case 791u: goto L_089FBFE0;
    case 792u: goto L_089FBFE8;
    default:
        if (local_transfers == 0u) rt.unsupported(ctx.pc, 0u, "invalid internal function entry");
        else ctx.pc = local_pc;
        return;
    }
    }
L_089F8000:
    ctx.set_gpr(17, rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(16)));
    ctx.set_gpr(16, rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(12)));
    ctx.set_gpr(29, ctx.gpr[29] + static_cast<std::uint32_t>(80));
    jump_target = ctx.gpr[31];
    // nop
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_089F8014:
    ctx.fpr[1] = std::bit_cast<float>(rt.memory().aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(8)));
    ctx.fpr[0] = std::bit_cast<float>(rt.memory().aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(20)));
    ctx.set_fpu_condition(((std::isnan(ctx.fpr[1]) || std::isnan(ctx.fpr[0])) || ctx.fpr[1] <= ctx.fpr[0]));
    ctx.set_gpr(2, 0u + static_cast<std::uint32_t>(1));
    { const bool branch_taken = !ctx.fpu_condition();
    // nop
      if (branch_taken) {
          goto L_089F8030;
      }
      goto L_089F802C;
    }
L_089F802C:
    ctx.set_gpr(2, 0u + 0u);
    goto L_089F8030;
L_089F8030:
    { const bool branch_taken = ctx.gpr[2] != 0u;
    // nop
      if (branch_taken) {
          goto L_089F8054;
      }
      goto L_089F8038;
    }
L_089F8038:
    ctx.fpr[1] = std::bit_cast<float>(rt.memory().aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(12)));
    ctx.fpr[0] = std::bit_cast<float>(rt.memory().aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(24)));
    ctx.set_fpu_condition(((std::isnan(ctx.fpr[1]) || std::isnan(ctx.fpr[0])) || ctx.fpr[1] <= ctx.fpr[0]));
    ctx.set_gpr(2, 0u + static_cast<std::uint32_t>(1));
    { const bool branch_taken = !ctx.fpu_condition();
    // nop
      if (branch_taken) {
          goto L_089F8054;
      }
      goto L_089F8050;
    }
L_089F8050:
    ctx.set_gpr(2, 0u + 0u);
    goto L_089F8054;
L_089F8054:
    { const bool branch_taken = ctx.gpr[2] != 0u;
    // nop
      if (branch_taken) {
          goto L_089F8078;
      }
      goto L_089F805C;
    }
L_089F805C:
    ctx.fpr[1] = std::bit_cast<float>(rt.memory().aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(16)));
    ctx.fpr[0] = std::bit_cast<float>(rt.memory().aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(28)));
    ctx.set_fpu_condition(((std::isnan(ctx.fpr[1]) || std::isnan(ctx.fpr[0])) || ctx.fpr[1] <= ctx.fpr[0]));
    ctx.set_gpr(2, 0u + static_cast<std::uint32_t>(1));
    { const bool branch_taken = !ctx.fpu_condition();
    // nop
      if (branch_taken) {
          goto L_089F8078;
      }
      goto L_089F8074;
    }
L_089F8074:
    ctx.set_gpr(2, 0u + 0u);
    goto L_089F8078;
L_089F8078:
    { const bool branch_taken = ctx.gpr[2] != 0u;
    // nop
      if (branch_taken) {
          goto L_089F8098;
      }
      goto L_089F8080;
    }
L_089F8080:
    ctx.fpr[0] = std::bit_cast<float>(rt.memory().aot_load32(ctx.gpr[5] + static_cast<std::uint32_t>(20)));
    ctx.fpr[2] = std::bit_cast<float>(0u);
    ctx.set_fpu_condition((ctx.fpr[0] < ctx.fpr[2]));
    // nop
    { const bool branch_taken = !ctx.fpu_condition();
    // nop
      if (branch_taken) {
          goto L_089F80A4;
      }
      goto L_089F8098;
    }
L_089F8098:
    ctx.set_gpr(2, 0u + 0u);
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_089F8134;
      }
      goto L_089F80A4;
    }
L_089F80A4:
    ctx.set_gpr(6, 0u + 0u);
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_089F810C;
      }
      goto L_089F80B0;
    }
L_089F80B0:
    ctx.set_gpr(2, ctx.gpr[6] << 2u);
    ctx.set_gpr(3, ctx.gpr[2] + ctx.gpr[4]);
    ctx.fpr[0] = std::bit_cast<float>(rt.memory().aot_load32(ctx.gpr[3] + static_cast<std::uint32_t>(8)));
    ctx.set_gpr(2, ctx.gpr[2] + ctx.gpr[5]);
    ctx.fpr[1] = std::bit_cast<float>(rt.memory().aot_load32(ctx.gpr[2] + static_cast<std::uint32_t>(8)));
    ctx.set_fpu_condition((ctx.fpr[1] < ctx.fpr[0]));
    // nop
    { const bool branch_taken = !ctx.fpu_condition();
    // nop
      if (branch_taken) {
          goto L_089F80E8;
      }
      goto L_089F80D4;
    }
L_089F80D4:
    ctx.fpr[0] = ctx.fpr[1] - ctx.fpr[0];
    { const float fs = ctx.fpr[0]; const float ft = ctx.fpr[0]; if ((std::isinf(fs) && ft == 0.0f) || (std::isinf(ft) && fs == 0.0f)) ctx.set_fpr_bits(0, 0x7FC00000u); else ctx.fpr[0] = fs * ft; }
    ctx.fpr[2] = ctx.fpr[2] + ctx.fpr[0];
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_089F8108;
      }
      goto L_089F80E8;
    }
L_089F80E8:
    ctx.fpr[0] = std::bit_cast<float>(rt.memory().aot_load32(ctx.gpr[3] + static_cast<std::uint32_t>(20)));
    ctx.set_fpu_condition((ctx.fpr[0] < ctx.fpr[1]));
    // nop
    { const bool branch_taken = !ctx.fpu_condition();
    // nop
      if (branch_taken) {
          goto L_089F8108;
      }
      goto L_089F80FC;
    }
L_089F80FC:
    ctx.fpr[0] = ctx.fpr[1] - ctx.fpr[0];
    { const float fs = ctx.fpr[0]; const float ft = ctx.fpr[0]; if ((std::isinf(fs) && ft == 0.0f) || (std::isinf(ft) && fs == 0.0f)) ctx.set_fpr_bits(0, 0x7FC00000u); else ctx.fpr[0] = fs * ft; }
    ctx.fpr[2] = ctx.fpr[2] + ctx.fpr[0];
    goto L_089F8108;
L_089F8108:
    ctx.set_gpr(6, ctx.gpr[6] + static_cast<std::uint32_t>(1));
    goto L_089F810C;
L_089F810C:
    ctx.set_gpr(2, static_cast<std::int32_t>(ctx.gpr[6]) < 3 ? 1u : 0u);
    { const bool branch_taken = ctx.gpr[2] != 0u;
    // nop
      if (branch_taken) {
          goto L_089F80B0;
      }
      goto L_089F8118;
    }
L_089F8118:
    ctx.fpr[0] = std::bit_cast<float>(rt.memory().aot_load32(ctx.gpr[5] + static_cast<std::uint32_t>(20)));
    { const float fs = ctx.fpr[0]; const float ft = ctx.fpr[0]; if ((std::isinf(fs) && ft == 0.0f) || (std::isinf(ft) && fs == 0.0f)) ctx.set_fpr_bits(0, 0x7FC00000u); else ctx.fpr[0] = fs * ft; }
    ctx.set_fpu_condition((ctx.fpr[2] <= ctx.fpr[0]));
    ctx.set_gpr(2, 0u + static_cast<std::uint32_t>(1));
    { const bool branch_taken = ctx.fpu_condition();
    // nop
      if (branch_taken) {
          goto L_089F8134;
      }
      goto L_089F8130;
    }
L_089F8130:
    ctx.set_gpr(2, 0u + 0u);
    goto L_089F8134;
L_089F8134:
    jump_target = ctx.gpr[31];
    // nop
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_089F813C:
    ctx.fpr[1] = std::bit_cast<float>(rt.memory().aot_load32(ctx.gpr[5] + static_cast<std::uint32_t>(8)));
    ctx.fpr[0] = std::bit_cast<float>(rt.memory().aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(20)));
    ctx.set_fpu_condition((ctx.fpr[1] <= ctx.fpr[0]));
    ctx.set_gpr(2, 0u + static_cast<std::uint32_t>(1));
    { const bool branch_taken = ctx.fpu_condition();
    // nop
      if (branch_taken) {
          goto L_089F8158;
      }
      goto L_089F8154;
    }
L_089F8154:
    ctx.set_gpr(2, 0u + 0u);
    goto L_089F8158;
L_089F8158:
    { const bool branch_taken = ctx.gpr[2] == 0u;
    // nop
      if (branch_taken) {
          goto L_089F817C;
      }
      goto L_089F8160;
    }
L_089F8160:
    ctx.fpr[1] = std::bit_cast<float>(rt.memory().aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(8)));
    ctx.fpr[0] = std::bit_cast<float>(rt.memory().aot_load32(ctx.gpr[5] + static_cast<std::uint32_t>(20)));
    ctx.set_fpu_condition((ctx.fpr[1] <= ctx.fpr[0]));
    ctx.set_gpr(2, 0u + static_cast<std::uint32_t>(1));
    { const bool branch_taken = ctx.fpu_condition();
    // nop
      if (branch_taken) {
          goto L_089F817C;
      }
      goto L_089F8178;
    }
L_089F8178:
    ctx.set_gpr(2, 0u + 0u);
    goto L_089F817C;
L_089F817C:
    { const bool branch_taken = ctx.gpr[2] == 0u;
    // nop
      if (branch_taken) {
          goto L_089F81A0;
      }
      goto L_089F8184;
    }
L_089F8184:
    ctx.fpr[1] = std::bit_cast<float>(rt.memory().aot_load32(ctx.gpr[5] + static_cast<std::uint32_t>(12)));
    ctx.fpr[0] = std::bit_cast<float>(rt.memory().aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(24)));
    ctx.set_fpu_condition((ctx.fpr[1] <= ctx.fpr[0]));
    ctx.set_gpr(2, 0u + static_cast<std::uint32_t>(1));
    { const bool branch_taken = ctx.fpu_condition();
    // nop
      if (branch_taken) {
          goto L_089F81A0;
      }
      goto L_089F819C;
    }
L_089F819C:
    ctx.set_gpr(2, 0u + 0u);
    goto L_089F81A0;
L_089F81A0:
    { const bool branch_taken = ctx.gpr[2] == 0u;
    // nop
      if (branch_taken) {
          goto L_089F81C4;
      }
      goto L_089F81A8;
    }
L_089F81A8:
    ctx.fpr[1] = std::bit_cast<float>(rt.memory().aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(12)));
    ctx.fpr[0] = std::bit_cast<float>(rt.memory().aot_load32(ctx.gpr[5] + static_cast<std::uint32_t>(24)));
    ctx.set_fpu_condition((ctx.fpr[1] <= ctx.fpr[0]));
    ctx.set_gpr(2, 0u + static_cast<std::uint32_t>(1));
    { const bool branch_taken = ctx.fpu_condition();
    // nop
      if (branch_taken) {
          goto L_089F81C4;
      }
      goto L_089F81C0;
    }
L_089F81C0:
    ctx.set_gpr(2, 0u + 0u);
    goto L_089F81C4;
L_089F81C4:
    { const bool branch_taken = ctx.gpr[2] == 0u;
    // nop
      if (branch_taken) {
          goto L_089F81E8;
      }
      goto L_089F81CC;
    }
L_089F81CC:
    ctx.fpr[1] = std::bit_cast<float>(rt.memory().aot_load32(ctx.gpr[5] + static_cast<std::uint32_t>(16)));
    ctx.fpr[0] = std::bit_cast<float>(rt.memory().aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(28)));
    ctx.set_fpu_condition((ctx.fpr[1] <= ctx.fpr[0]));
    ctx.set_gpr(2, 0u + static_cast<std::uint32_t>(1));
    { const bool branch_taken = ctx.fpu_condition();
    // nop
      if (branch_taken) {
          goto L_089F81E8;
      }
      goto L_089F81E4;
    }
L_089F81E4:
    ctx.set_gpr(2, 0u + 0u);
    goto L_089F81E8;
L_089F81E8:
    { const bool branch_taken = ctx.gpr[2] == 0u;
    // nop
      if (branch_taken) {
          goto L_089F820C;
      }
      goto L_089F81F0;
    }
L_089F81F0:
    ctx.fpr[1] = std::bit_cast<float>(rt.memory().aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(16)));
    ctx.fpr[0] = std::bit_cast<float>(rt.memory().aot_load32(ctx.gpr[5] + static_cast<std::uint32_t>(28)));
    ctx.set_fpu_condition((ctx.fpr[1] <= ctx.fpr[0]));
    ctx.set_gpr(2, 0u + static_cast<std::uint32_t>(1));
    { const bool branch_taken = ctx.fpu_condition();
    // nop
      if (branch_taken) {
          goto L_089F820C;
      }
      goto L_089F8208;
    }
L_089F8208:
    ctx.set_gpr(2, 0u + 0u);
    goto L_089F820C;
L_089F820C:
    jump_target = ctx.gpr[31];
    // nop
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_089F8214:
    ctx.set_gpr(29, ctx.gpr[29] + static_cast<std::uint32_t>(-16));
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(12), ctx.gpr[31]);
    ctx.set_gpr(2, ctx.gpr[4] + 0u);
    ctx.set_gpr(4, ctx.gpr[5] + 0u);
    ctx.set_gpr(5, ctx.gpr[2] + 0u);
    ctx.set_gpr(31, 0x089F8230u);
    // nop
    goto L_089F92A4;
L_089F8230:
    ctx.set_gpr(31, rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(12)));
    ctx.set_gpr(29, ctx.gpr[29] + static_cast<std::uint32_t>(16));
    jump_target = ctx.gpr[31];
    // nop
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_089F8240:
    ctx.set_gpr(29, ctx.gpr[29] + static_cast<std::uint32_t>(-32));
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(12), ctx.gpr[31]);
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(8), ctx.gpr[16]);
    ctx.set_gpr(16, ctx.gpr[5] + 0u);
    ctx.fpr[1] = std::bit_cast<float>(rt.memory().aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(8)));
    ctx.fpr[0] = std::bit_cast<float>(rt.memory().aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(20)));
    ctx.set_fpu_condition(((std::isnan(ctx.fpr[1]) || std::isnan(ctx.fpr[0])) || ctx.fpr[1] <= ctx.fpr[0]));
    ctx.set_gpr(2, 0u + static_cast<std::uint32_t>(1));
    { const bool branch_taken = !ctx.fpu_condition();
    // nop
      if (branch_taken) {
          goto L_089F826C;
      }
      goto L_089F8268;
    }
L_089F8268:
    ctx.set_gpr(2, 0u + 0u);
    goto L_089F826C;
L_089F826C:
    { const bool branch_taken = ctx.gpr[2] != 0u;
    // nop
      if (branch_taken) {
          goto L_089F8290;
      }
      goto L_089F8274;
    }
L_089F8274:
    ctx.fpr[1] = std::bit_cast<float>(rt.memory().aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(12)));
    ctx.fpr[0] = std::bit_cast<float>(rt.memory().aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(24)));
    ctx.set_fpu_condition(((std::isnan(ctx.fpr[1]) || std::isnan(ctx.fpr[0])) || ctx.fpr[1] <= ctx.fpr[0]));
    ctx.set_gpr(2, 0u + static_cast<std::uint32_t>(1));
    { const bool branch_taken = !ctx.fpu_condition();
    // nop
      if (branch_taken) {
          goto L_089F8290;
      }
      goto L_089F828C;
    }
L_089F828C:
    ctx.set_gpr(2, 0u + 0u);
    goto L_089F8290;
L_089F8290:
    { const bool branch_taken = ctx.gpr[2] != 0u;
    // nop
      if (branch_taken) {
          goto L_089F82B4;
      }
      goto L_089F8298;
    }
L_089F8298:
    ctx.fpr[1] = std::bit_cast<float>(rt.memory().aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(16)));
    ctx.fpr[0] = std::bit_cast<float>(rt.memory().aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(28)));
    ctx.set_fpu_condition(((std::isnan(ctx.fpr[1]) || std::isnan(ctx.fpr[0])) || ctx.fpr[1] <= ctx.fpr[0]));
    ctx.set_gpr(2, 0u + static_cast<std::uint32_t>(1));
    { const bool branch_taken = !ctx.fpu_condition();
    // nop
      if (branch_taken) {
          goto L_089F82B4;
      }
      goto L_089F82B0;
    }
L_089F82B0:
    ctx.set_gpr(2, 0u + 0u);
    goto L_089F82B4;
L_089F82B4:
    { const bool branch_taken = ctx.gpr[2] == 0u;
    // nop
      if (branch_taken) {
          goto L_089F82C8;
      }
      goto L_089F82BC;
    }
L_089F82BC:
    ctx.set_gpr(2, 0u + 0u);
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_089F8304;
      }
      goto L_089F82C8;
    }
L_089F82C8:
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(20), 0u);
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(24), 0u);
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(28), 0u);
    ctx.set_gpr(2, rt.memory().aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(24)));
    ctx.set_gpr(2, ~(ctx.gpr[2] | 0u));
    ctx.set_gpr(5, ctx.gpr[2] & 7u);
    ctx.set_gpr(6, ctx.gpr[29] + static_cast<std::uint32_t>(20));
    ctx.set_gpr(31, 0x089F82ECu);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0124_entry, 124u, 686u, 0x089F7D1Cu>(ctx, &aot_mem) && ctx.pc == 0x089F82ECu) goto L_089F82EC;
    return;
L_089F82EC:
    ctx.set_gpr(4, ctx.gpr[16] + 0u);
    ctx.set_gpr(5, ctx.gpr[29] + static_cast<std::uint32_t>(20));
    ctx.set_gpr(31, 0x089F82FCu);
    // nop
    goto L_089FBB34;
L_089F82FC:
    ctx.set_gpr(2, ctx.gpr[2] ^ 2u);
    ctx.set_gpr(2, ctx.gpr[2] < static_cast<std::uint32_t>(1) ? 1u : 0u);
    goto L_089F8304;
L_089F8304:
    ctx.set_gpr(31, rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(12)));
    ctx.set_gpr(16, rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(8)));
    ctx.set_gpr(29, ctx.gpr[29] + static_cast<std::uint32_t>(32));
    jump_target = ctx.gpr[31];
    // nop
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_089F8318:
    ctx.set_gpr(29, ctx.gpr[29] + static_cast<std::uint32_t>(-16));
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(12), ctx.gpr[31]);
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(8), ctx.gpr[17]);
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(4), ctx.gpr[16]);
    ctx.set_gpr(17, ctx.gpr[4] + 0u);
    ctx.set_gpr(16, ctx.gpr[5] + 0u);
    ctx.set_gpr(5, ctx.gpr[16] + static_cast<std::uint32_t>(8));
    ctx.set_gpr(31, 0x089F833Cu);
    // nop
    goto L_089F89E8;
L_089F833C:
    ctx.set_gpr(3, 0u + static_cast<std::uint32_t>(2));
    { const bool branch_taken = ctx.gpr[2] != ctx.gpr[3];
    // nop
      if (branch_taken) {
          goto L_089F8354;
      }
      goto L_089F8348;
    }
L_089F8348:
    ctx.set_gpr(2, 0u + static_cast<std::uint32_t>(1));
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_089F8488;
      }
      goto L_089F8354;
    }
L_089F8354:
    ctx.fpr[6] = std::bit_cast<float>(rt.memory().aot_load32(ctx.gpr[28] + static_cast<std::uint32_t>(-32508)));
    ctx.fpr[5] = std::bit_cast<float>(rt.memory().aot_load32(ctx.gpr[28] + static_cast<std::uint32_t>(-32512)));
    ctx.set_gpr(4, 0u + 0u);
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_089F8460;
      }
      goto L_089F8368;
    }
L_089F8368:
    ctx.set_gpr(3, ctx.gpr[4] << 2u);
    ctx.set_gpr(2, ctx.gpr[3] + ctx.gpr[16]);
    ctx.fpr[3] = std::bit_cast<float>(rt.memory().aot_load32(ctx.gpr[2] + static_cast<std::uint32_t>(20)));
    ctx.set_fpr_bits(1, ctx.fpr_bits(3) & 0x7FFFFFFFu);
    ctx.fpr[0] = std::bit_cast<float>(rt.memory().aot_load32(ctx.gpr[28] + static_cast<std::uint32_t>(-32516)));
    ctx.set_fpu_condition((ctx.fpr[1] < ctx.fpr[0]));
    // nop
    { const bool branch_taken = !ctx.fpu_condition();
    // nop
      if (branch_taken) {
          goto L_089F83C8;
      }
      goto L_089F838C;
    }
L_089F838C:
    ctx.fpr[1] = std::bit_cast<float>(rt.memory().aot_load32(ctx.gpr[2] + static_cast<std::uint32_t>(8)));
    ctx.set_gpr(2, ctx.gpr[3] + ctx.gpr[17]);
    ctx.fpr[0] = std::bit_cast<float>(rt.memory().aot_load32(ctx.gpr[2] + static_cast<std::uint32_t>(20)));
    ctx.set_fpu_condition((ctx.fpr[0] < ctx.fpr[1]));
    // nop
    { const bool branch_taken = ctx.fpu_condition();
    // nop
      if (branch_taken) {
          goto L_089F83BC;
      }
      goto L_089F83A8;
    }
L_089F83A8:
    ctx.fpr[0] = std::bit_cast<float>(rt.memory().aot_load32(ctx.gpr[2] + static_cast<std::uint32_t>(8)));
    ctx.set_fpu_condition((ctx.fpr[1] < ctx.fpr[0]));
    // nop
    { const bool branch_taken = !ctx.fpu_condition();
    // nop
      if (branch_taken) {
          goto L_089F845C;
      }
      goto L_089F83BC;
    }
L_089F83BC:
    ctx.set_gpr(2, 0u + 0u);
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_089F8488;
      }
      goto L_089F83C8;
    }
L_089F83C8:
    ctx.fpr[2] = std::bit_cast<float>(rt.memory().aot_load32(ctx.gpr[2] + static_cast<std::uint32_t>(8)));
    ctx.set_gpr(2, ctx.gpr[3] + ctx.gpr[17]);
    ctx.fpr[0] = std::bit_cast<float>(rt.memory().aot_load32(ctx.gpr[2] + static_cast<std::uint32_t>(8)));
    ctx.fpr[0] = ctx.fpr[0] - ctx.fpr[2];
    ctx.fpr[1] = ctx.fpr[0] / ctx.fpr[3];
    ctx.set_fpr_bits(4, ctx.fpr_bits(1));
    ctx.fpr[0] = std::bit_cast<float>(rt.memory().aot_load32(ctx.gpr[2] + static_cast<std::uint32_t>(20)));
    ctx.fpr[0] = ctx.fpr[0] - ctx.fpr[2];
    ctx.fpr[0] = ctx.fpr[0] / ctx.fpr[3];
    ctx.set_fpu_condition(((std::isnan(ctx.fpr[1]) || std::isnan(ctx.fpr[0])) || ctx.fpr[1] <= ctx.fpr[0]));
    // nop
    { const bool branch_taken = ctx.fpu_condition();
    // nop
      if (branch_taken) {
          goto L_089F8404;
      }
      goto L_089F83FC;
    }
L_089F83FC:
    ctx.set_fpr_bits(4, ctx.fpr_bits(0));
    ctx.set_fpr_bits(0, ctx.fpr_bits(1));
    goto L_089F8404;
L_089F8404:
    ctx.set_fpu_condition(((std::isnan(ctx.fpr[4]) || std::isnan(ctx.fpr[6])) || ctx.fpr[4] <= ctx.fpr[6]));
    // nop
    { const bool branch_taken = ctx.fpu_condition();
    // nop
      if (branch_taken) {
          goto L_089F8418;
      }
      goto L_089F8414;
    }
L_089F8414:
    ctx.set_fpr_bits(6, ctx.fpr_bits(4));
    goto L_089F8418;
L_089F8418:
    ctx.set_fpu_condition((ctx.fpr[0] < ctx.fpr[5]));
    // nop
    { const bool branch_taken = !ctx.fpu_condition();
    // nop
      if (branch_taken) {
          goto L_089F842C;
      }
      goto L_089F8428;
    }
L_089F8428:
    ctx.set_fpr_bits(5, ctx.fpr_bits(0));
    goto L_089F842C;
L_089F842C:
    ctx.set_fpu_condition(((std::isnan(ctx.fpr[6]) || std::isnan(ctx.fpr[5])) || ctx.fpr[6] <= ctx.fpr[5]));
    // nop
    { const bool branch_taken = !ctx.fpu_condition();
    // nop
      if (branch_taken) {
          goto L_089F8450;
      }
      goto L_089F843C;
    }
L_089F843C:
    ctx.fpr[0] = std::bit_cast<float>(0u);
    ctx.set_fpu_condition((ctx.fpr[5] < ctx.fpr[0]));
    // nop
    { const bool branch_taken = !ctx.fpu_condition();
    // nop
      if (branch_taken) {
          goto L_089F845C;
      }
      goto L_089F8450;
    }
L_089F8450:
    ctx.set_gpr(2, 0u + 0u);
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_089F8488;
      }
      goto L_089F845C;
    }
L_089F845C:
    ctx.set_gpr(4, ctx.gpr[4] + static_cast<std::uint32_t>(1));
    goto L_089F8460;
L_089F8460:
    ctx.set_gpr(2, static_cast<std::int32_t>(ctx.gpr[4]) < 3 ? 1u : 0u);
    { const bool branch_taken = ctx.gpr[2] != 0u;
    // nop
      if (branch_taken) {
          goto L_089F8368;
      }
      goto L_089F846C;
    }
L_089F846C:
    ctx.set_fpr_bits(1, ctx.fpr_bits(6) & 0x7FFFFFFFu);
    ctx.fpr[0] = std::bit_cast<float>(rt.memory().aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(32)));
    ctx.set_fpu_condition((ctx.fpr[1] <= ctx.fpr[0]));
    ctx.set_gpr(2, 0u + static_cast<std::uint32_t>(1));
    { const bool branch_taken = ctx.fpu_condition();
    // nop
      if (branch_taken) {
          goto L_089F8488;
      }
      goto L_089F8484;
    }
L_089F8484:
    ctx.set_gpr(2, 0u + 0u);
    goto L_089F8488;
L_089F8488:
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
L_089F84A0:
    ctx.set_gpr(29, ctx.gpr[29] + static_cast<std::uint32_t>(-16));
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(12), ctx.gpr[31]);
    ctx.set_gpr(3, ctx.gpr[4] + 0u);
    ctx.fpr[1] = std::bit_cast<float>(rt.memory().aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(8)));
    ctx.fpr[0] = std::bit_cast<float>(rt.memory().aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(20)));
    ctx.set_fpu_condition(((std::isnan(ctx.fpr[1]) || std::isnan(ctx.fpr[0])) || ctx.fpr[1] <= ctx.fpr[0]));
    ctx.set_gpr(2, 0u + static_cast<std::uint32_t>(1));
    { const bool branch_taken = !ctx.fpu_condition();
    // nop
      if (branch_taken) {
          goto L_089F84C8;
      }
      goto L_089F84C4;
    }
L_089F84C4:
    ctx.set_gpr(2, 0u + 0u);
    goto L_089F84C8;
L_089F84C8:
    { const bool branch_taken = ctx.gpr[2] != 0u;
    // nop
      if (branch_taken) {
          goto L_089F84EC;
      }
      goto L_089F84D0;
    }
L_089F84D0:
    ctx.fpr[1] = std::bit_cast<float>(rt.memory().aot_load32(ctx.gpr[3] + static_cast<std::uint32_t>(12)));
    ctx.fpr[0] = std::bit_cast<float>(rt.memory().aot_load32(ctx.gpr[3] + static_cast<std::uint32_t>(24)));
    ctx.set_fpu_condition(((std::isnan(ctx.fpr[1]) || std::isnan(ctx.fpr[0])) || ctx.fpr[1] <= ctx.fpr[0]));
    ctx.set_gpr(2, 0u + static_cast<std::uint32_t>(1));
    { const bool branch_taken = !ctx.fpu_condition();
    // nop
      if (branch_taken) {
          goto L_089F84EC;
      }
      goto L_089F84E8;
    }
L_089F84E8:
    ctx.set_gpr(2, 0u + 0u);
    goto L_089F84EC;
L_089F84EC:
    { const bool branch_taken = ctx.gpr[2] != 0u;
    // nop
      if (branch_taken) {
          goto L_089F8510;
      }
      goto L_089F84F4;
    }
L_089F84F4:
    ctx.fpr[1] = std::bit_cast<float>(rt.memory().aot_load32(ctx.gpr[3] + static_cast<std::uint32_t>(16)));
    ctx.fpr[0] = std::bit_cast<float>(rt.memory().aot_load32(ctx.gpr[3] + static_cast<std::uint32_t>(28)));
    ctx.set_fpu_condition(((std::isnan(ctx.fpr[1]) || std::isnan(ctx.fpr[0])) || ctx.fpr[1] <= ctx.fpr[0]));
    ctx.set_gpr(2, 0u + static_cast<std::uint32_t>(1));
    { const bool branch_taken = !ctx.fpu_condition();
    // nop
      if (branch_taken) {
          goto L_089F8510;
      }
      goto L_089F850C;
    }
L_089F850C:
    ctx.set_gpr(2, 0u + 0u);
    goto L_089F8510;
L_089F8510:
    { const bool branch_taken = ctx.gpr[2] == 0u;
    // nop
      if (branch_taken) {
          goto L_089F8524;
      }
      goto L_089F8518;
    }
L_089F8518:
    ctx.set_gpr(2, 0u + 0u);
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_089F8550;
      }
      goto L_089F8524;
    }
L_089F8524:
    ctx.set_gpr(4, ctx.gpr[5] + 0u);
    ctx.set_gpr(5, ctx.gpr[3] + 0u);
    ctx.set_gpr(31, 0x089F8534u);
    // nop
    goto L_089FB1E8;
L_089F8534:
    ctx.set_gpr(2, ctx.gpr[2] & 255u);
    { const bool branch_taken = ctx.gpr[2] == 0u;
    // nop
      if (branch_taken) {
          goto L_089F854C;
      }
      goto L_089F8540;
    }
L_089F8540:
    ctx.set_gpr(2, 0u + static_cast<std::uint32_t>(1));
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_089F8550;
      }
      goto L_089F854C;
    }
L_089F854C:
    ctx.set_gpr(2, 0u + 0u);
    goto L_089F8550;
L_089F8550:
    ctx.set_gpr(31, rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(12)));
    ctx.set_gpr(29, ctx.gpr[29] + static_cast<std::uint32_t>(16));
    jump_target = ctx.gpr[31];
    // nop
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_089F8560:
    ctx.set_gpr(29, ctx.gpr[29] + static_cast<std::uint32_t>(-16));
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(12), ctx.gpr[31]);
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(8), ctx.gpr[17]);
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(4), ctx.gpr[16]);
    ctx.set_gpr(17, ctx.gpr[4] + 0u);
    ctx.set_gpr(16, ctx.gpr[5] + 0u);
    ctx.fpr[1] = std::bit_cast<float>(rt.memory().aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(8)));
    ctx.fpr[0] = std::bit_cast<float>(rt.memory().aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(20)));
    ctx.set_fpu_condition(((std::isnan(ctx.fpr[1]) || std::isnan(ctx.fpr[0])) || ctx.fpr[1] <= ctx.fpr[0]));
    ctx.set_gpr(2, 0u + static_cast<std::uint32_t>(1));
    { const bool branch_taken = !ctx.fpu_condition();
    // nop
      if (branch_taken) {
          goto L_089F8594;
      }
      goto L_089F8590;
    }
L_089F8590:
    ctx.set_gpr(2, 0u + 0u);
    goto L_089F8594;
L_089F8594:
    { const bool branch_taken = ctx.gpr[2] != 0u;
    // nop
      if (branch_taken) {
          goto L_089F85B8;
      }
      goto L_089F859C;
    }
L_089F859C:
    ctx.fpr[1] = std::bit_cast<float>(rt.memory().aot_load32(ctx.gpr[17] + static_cast<std::uint32_t>(12)));
    ctx.fpr[0] = std::bit_cast<float>(rt.memory().aot_load32(ctx.gpr[17] + static_cast<std::uint32_t>(24)));
    ctx.set_fpu_condition(((std::isnan(ctx.fpr[1]) || std::isnan(ctx.fpr[0])) || ctx.fpr[1] <= ctx.fpr[0]));
    ctx.set_gpr(2, 0u + static_cast<std::uint32_t>(1));
    { const bool branch_taken = !ctx.fpu_condition();
    // nop
      if (branch_taken) {
          goto L_089F85B8;
      }
      goto L_089F85B4;
    }
L_089F85B4:
    ctx.set_gpr(2, 0u + 0u);
    goto L_089F85B8;
L_089F85B8:
    { const bool branch_taken = ctx.gpr[2] != 0u;
    // nop
      if (branch_taken) {
          goto L_089F85DC;
      }
      goto L_089F85C0;
    }
L_089F85C0:
    ctx.fpr[1] = std::bit_cast<float>(rt.memory().aot_load32(ctx.gpr[17] + static_cast<std::uint32_t>(16)));
    ctx.fpr[0] = std::bit_cast<float>(rt.memory().aot_load32(ctx.gpr[17] + static_cast<std::uint32_t>(28)));
    ctx.set_fpu_condition(((std::isnan(ctx.fpr[1]) || std::isnan(ctx.fpr[0])) || ctx.fpr[1] <= ctx.fpr[0]));
    ctx.set_gpr(2, 0u + static_cast<std::uint32_t>(1));
    { const bool branch_taken = !ctx.fpu_condition();
    // nop
      if (branch_taken) {
          goto L_089F85DC;
      }
      goto L_089F85D8;
    }
L_089F85D8:
    ctx.set_gpr(2, 0u + 0u);
    goto L_089F85DC;
L_089F85DC:
    { const bool branch_taken = ctx.gpr[2] != 0u;
    // nop
      if (branch_taken) {
          goto L_089F8650;
      }
      goto L_089F85E4;
    }
L_089F85E4:
    ctx.fpr[1] = std::bit_cast<float>(rt.memory().aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(8)));
    ctx.fpr[0] = std::bit_cast<float>(rt.memory().aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(20)));
    ctx.set_fpu_condition(((std::isnan(ctx.fpr[1]) || std::isnan(ctx.fpr[0])) || ctx.fpr[1] <= ctx.fpr[0]));
    ctx.set_gpr(2, 0u + static_cast<std::uint32_t>(1));
    { const bool branch_taken = !ctx.fpu_condition();
    // nop
      if (branch_taken) {
          goto L_089F8600;
      }
      goto L_089F85FC;
    }
L_089F85FC:
    ctx.set_gpr(2, 0u + 0u);
    goto L_089F8600;
L_089F8600:
    { const bool branch_taken = ctx.gpr[2] != 0u;
    // nop
      if (branch_taken) {
          goto L_089F8624;
      }
      goto L_089F8608;
    }
L_089F8608:
    ctx.fpr[1] = std::bit_cast<float>(rt.memory().aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(12)));
    ctx.fpr[0] = std::bit_cast<float>(rt.memory().aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(24)));
    ctx.set_fpu_condition(((std::isnan(ctx.fpr[1]) || std::isnan(ctx.fpr[0])) || ctx.fpr[1] <= ctx.fpr[0]));
    ctx.set_gpr(2, 0u + static_cast<std::uint32_t>(1));
    { const bool branch_taken = !ctx.fpu_condition();
    // nop
      if (branch_taken) {
          goto L_089F8624;
      }
      goto L_089F8620;
    }
L_089F8620:
    ctx.set_gpr(2, 0u + 0u);
    goto L_089F8624;
L_089F8624:
    { const bool branch_taken = ctx.gpr[2] != 0u;
    // nop
      if (branch_taken) {
          goto L_089F8648;
      }
      goto L_089F862C;
    }
L_089F862C:
    ctx.fpr[1] = std::bit_cast<float>(rt.memory().aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(16)));
    ctx.fpr[0] = std::bit_cast<float>(rt.memory().aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(28)));
    ctx.set_fpu_condition(((std::isnan(ctx.fpr[1]) || std::isnan(ctx.fpr[0])) || ctx.fpr[1] <= ctx.fpr[0]));
    ctx.set_gpr(2, 0u + static_cast<std::uint32_t>(1));
    { const bool branch_taken = !ctx.fpu_condition();
    // nop
      if (branch_taken) {
          goto L_089F8648;
      }
      goto L_089F8644;
    }
L_089F8644:
    ctx.set_gpr(2, 0u + 0u);
    goto L_089F8648;
L_089F8648:
    { const bool branch_taken = ctx.gpr[2] == 0u;
    // nop
      if (branch_taken) {
          goto L_089F865C;
      }
      goto L_089F8650;
    }
L_089F8650:
    ctx.set_gpr(2, 0u + 0u);
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_089F8720;
      }
      goto L_089F865C;
    }
L_089F865C:
    ctx.set_gpr(4, ctx.gpr[17] + 0u);
    ctx.set_gpr(5, ctx.gpr[16] + 0u);
    ctx.set_gpr(31, 0x089F866Cu);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0126_entry, 126u, 684u, 0x089FF474u>(ctx, &aot_mem) && ctx.pc == 0x089F866Cu) goto L_089F866C;
    return;
L_089F866C:
    { const bool branch_taken = ctx.gpr[2] == 0u;
    // nop
      if (branch_taken) {
          goto L_089F871C;
      }
      goto L_089F8674;
    }
L_089F8674:
    ctx.fpr[1] = std::bit_cast<float>(rt.memory().aot_load32(ctx.gpr[17] + static_cast<std::uint32_t>(8)));
    ctx.fpr[0] = std::bit_cast<float>(rt.memory().aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(8)));
    ctx.set_fpu_condition((ctx.fpr[1] <= ctx.fpr[0]));
    // nop
    { const bool branch_taken = !ctx.fpu_condition();
    // nop
      if (branch_taken) {
          goto L_089F8710;
      }
      goto L_089F868C;
    }
L_089F868C:
    ctx.fpr[1] = std::bit_cast<float>(rt.memory().aot_load32(ctx.gpr[17] + static_cast<std::uint32_t>(20)));
    ctx.fpr[0] = std::bit_cast<float>(rt.memory().aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(20)));
    ctx.set_fpu_condition(((std::isnan(ctx.fpr[1]) || std::isnan(ctx.fpr[0])) || ctx.fpr[1] < ctx.fpr[0]));
    // nop
    { const bool branch_taken = ctx.fpu_condition();
    // nop
      if (branch_taken) {
          goto L_089F8710;
      }
      goto L_089F86A4;
    }
L_089F86A4:
    ctx.fpr[1] = std::bit_cast<float>(rt.memory().aot_load32(ctx.gpr[17] + static_cast<std::uint32_t>(12)));
    ctx.fpr[0] = std::bit_cast<float>(rt.memory().aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(12)));
    ctx.set_fpu_condition((ctx.fpr[1] <= ctx.fpr[0]));
    // nop
    { const bool branch_taken = !ctx.fpu_condition();
    // nop
      if (branch_taken) {
          goto L_089F8710;
      }
      goto L_089F86BC;
    }
L_089F86BC:
    ctx.fpr[1] = std::bit_cast<float>(rt.memory().aot_load32(ctx.gpr[17] + static_cast<std::uint32_t>(24)));
    ctx.fpr[0] = std::bit_cast<float>(rt.memory().aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(24)));
    ctx.set_fpu_condition(((std::isnan(ctx.fpr[1]) || std::isnan(ctx.fpr[0])) || ctx.fpr[1] < ctx.fpr[0]));
    // nop
    { const bool branch_taken = ctx.fpu_condition();
    // nop
      if (branch_taken) {
          goto L_089F8710;
      }
      goto L_089F86D4;
    }
L_089F86D4:
    ctx.fpr[1] = std::bit_cast<float>(rt.memory().aot_load32(ctx.gpr[17] + static_cast<std::uint32_t>(16)));
    ctx.fpr[0] = std::bit_cast<float>(rt.memory().aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(16)));
    ctx.set_fpu_condition((ctx.fpr[1] <= ctx.fpr[0]));
    // nop
    { const bool branch_taken = !ctx.fpu_condition();
    // nop
      if (branch_taken) {
          goto L_089F8710;
      }
      goto L_089F86EC;
    }
L_089F86EC:
    ctx.fpr[1] = std::bit_cast<float>(rt.memory().aot_load32(ctx.gpr[17] + static_cast<std::uint32_t>(28)));
    ctx.fpr[0] = std::bit_cast<float>(rt.memory().aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(28)));
    ctx.set_fpu_condition(((std::isnan(ctx.fpr[1]) || std::isnan(ctx.fpr[0])) || ctx.fpr[1] < ctx.fpr[0]));
    // nop
    { const bool branch_taken = ctx.fpu_condition();
    // nop
      if (branch_taken) {
          goto L_089F8710;
      }
      goto L_089F8704;
    }
L_089F8704:
    ctx.set_gpr(2, 0u + static_cast<std::uint32_t>(2));
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_089F8720;
      }
      goto L_089F8710;
    }
L_089F8710:
    ctx.set_gpr(2, 0u + static_cast<std::uint32_t>(1));
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_089F8720;
      }
      goto L_089F871C;
    }
L_089F871C:
    ctx.set_gpr(2, 0u + 0u);
    goto L_089F8720;
L_089F8720:
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
L_089F8738:
    ctx.set_gpr(29, ctx.gpr[29] + static_cast<std::uint32_t>(-16));
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(12), ctx.gpr[31]);
    ctx.set_gpr(2, ctx.gpr[4] + 0u);
    ctx.set_gpr(4, ctx.gpr[5] + 0u);
    ctx.set_gpr(5, ctx.gpr[2] + 0u);
    ctx.set_gpr(31, 0x089F8754u);
    // nop
    goto L_089F9520;
L_089F8754:
    ctx.set_gpr(31, rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(12)));
    ctx.set_gpr(29, ctx.gpr[29] + static_cast<std::uint32_t>(16));
    jump_target = ctx.gpr[31];
    // nop
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_089F8764:
    ctx.set_gpr(29, ctx.gpr[29] + static_cast<std::uint32_t>(-16));
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(12), ctx.gpr[31]);
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(8), ctx.gpr[17]);
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(4), ctx.gpr[16]);
    ctx.set_gpr(17, ctx.gpr[4] + 0u);
    ctx.set_gpr(16, ctx.gpr[5] + 0u);
    ctx.set_gpr(31, 0x089F8784u);
    // nop
    goto L_089F8014;
L_089F8784:
    { const bool branch_taken = ctx.gpr[2] != 0u;
    // nop
      if (branch_taken) {
          goto L_089F8798;
      }
      goto L_089F878C;
    }
L_089F878C:
    ctx.set_gpr(2, 0u + 0u);
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_089F8864;
      }
      goto L_089F8798;
    }
L_089F8798:
    ctx.fpr[2] = std::bit_cast<float>(rt.memory().aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(8)));
    ctx.fpr[0] = std::bit_cast<float>(rt.memory().aot_load32(ctx.gpr[17] + static_cast<std::uint32_t>(8)));
    ctx.fpr[6] = ctx.fpr[2] - ctx.fpr[0];
    ctx.fpr[1] = std::bit_cast<float>(rt.memory().aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(12)));
    ctx.fpr[0] = std::bit_cast<float>(rt.memory().aot_load32(ctx.gpr[17] + static_cast<std::uint32_t>(12)));
    ctx.fpr[5] = ctx.fpr[1] - ctx.fpr[0];
    ctx.fpr[4] = std::bit_cast<float>(rt.memory().aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(16)));
    ctx.fpr[0] = std::bit_cast<float>(rt.memory().aot_load32(ctx.gpr[17] + static_cast<std::uint32_t>(16)));
    ctx.fpr[3] = ctx.fpr[4] - ctx.fpr[0];
    ctx.fpr[0] = std::bit_cast<float>(rt.memory().aot_load32(ctx.gpr[17] + static_cast<std::uint32_t>(20)));
    ctx.fpr[2] = ctx.fpr[2] - ctx.fpr[0];
    ctx.fpr[0] = std::bit_cast<float>(rt.memory().aot_load32(ctx.gpr[17] + static_cast<std::uint32_t>(24)));
    ctx.fpr[1] = ctx.fpr[1] - ctx.fpr[0];
    ctx.fpr[0] = std::bit_cast<float>(rt.memory().aot_load32(ctx.gpr[17] + static_cast<std::uint32_t>(28)));
    ctx.fpr[0] = ctx.fpr[4] - ctx.fpr[0];
    { const float fs = ctx.fpr[6]; const float ft = ctx.fpr[6]; if ((std::isinf(fs) && ft == 0.0f) || (std::isinf(ft) && fs == 0.0f)) ctx.set_fpr_bits(6, 0x7FC00000u); else ctx.fpr[6] = fs * ft; }
    { const float fs = ctx.fpr[5]; const float ft = ctx.fpr[5]; if ((std::isinf(fs) && ft == 0.0f) || (std::isinf(ft) && fs == 0.0f)) ctx.set_fpr_bits(5, 0x7FC00000u); else ctx.fpr[5] = fs * ft; }
    { const float fs = ctx.fpr[3]; const float ft = ctx.fpr[3]; if ((std::isinf(fs) && ft == 0.0f) || (std::isinf(ft) && fs == 0.0f)) ctx.set_fpr_bits(4, 0x7FC00000u); else ctx.fpr[4] = fs * ft; }
    { const float fs = ctx.fpr[2]; const float ft = ctx.fpr[2]; if ((std::isinf(fs) && ft == 0.0f) || (std::isinf(ft) && fs == 0.0f)) ctx.set_fpr_bits(3, 0x7FC00000u); else ctx.fpr[3] = fs * ft; }
    { const float fs = ctx.fpr[1]; const float ft = ctx.fpr[1]; if ((std::isinf(fs) && ft == 0.0f) || (std::isinf(ft) && fs == 0.0f)) ctx.set_fpr_bits(2, 0x7FC00000u); else ctx.fpr[2] = fs * ft; }
    { const float fs = ctx.fpr[0]; const float ft = ctx.fpr[0]; if ((std::isinf(fs) && ft == 0.0f) || (std::isinf(ft) && fs == 0.0f)) ctx.set_fpr_bits(1, 0x7FC00000u); else ctx.fpr[1] = fs * ft; }
    ctx.fpr[0] = std::bit_cast<float>(rt.memory().aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(20)));
    { const float fs = ctx.fpr[0]; const float ft = ctx.fpr[0]; if ((std::isinf(fs) && ft == 0.0f) || (std::isinf(ft) && fs == 0.0f)) ctx.set_fpr_bits(0, 0x7FC00000u); else ctx.fpr[0] = fs * ft; }
    ctx.set_fpu_condition(((std::isnan(ctx.fpr[0]) || std::isnan(ctx.fpr[6])) || ctx.fpr[0] <= ctx.fpr[6]));
    // nop
    { const bool branch_taken = !ctx.fpu_condition();
    // nop
      if (branch_taken) {
          goto L_089F8854;
      }
      goto L_089F8804;
    }
L_089F8804:
    ctx.set_fpu_condition(((std::isnan(ctx.fpr[0]) || std::isnan(ctx.fpr[5])) || ctx.fpr[0] <= ctx.fpr[5]));
    // nop
    { const bool branch_taken = !ctx.fpu_condition();
    // nop
      if (branch_taken) {
          goto L_089F8854;
      }
      goto L_089F8814;
    }
L_089F8814:
    ctx.set_fpu_condition(((std::isnan(ctx.fpr[0]) || std::isnan(ctx.fpr[4])) || ctx.fpr[0] <= ctx.fpr[4]));
    // nop
    { const bool branch_taken = !ctx.fpu_condition();
    // nop
      if (branch_taken) {
          goto L_089F8854;
      }
      goto L_089F8824;
    }
L_089F8824:
    ctx.set_fpu_condition(((std::isnan(ctx.fpr[0]) || std::isnan(ctx.fpr[3])) || ctx.fpr[0] <= ctx.fpr[3]));
    // nop
    { const bool branch_taken = !ctx.fpu_condition();
    // nop
      if (branch_taken) {
          goto L_089F8854;
      }
      goto L_089F8834;
    }
L_089F8834:
    ctx.set_fpu_condition(((std::isnan(ctx.fpr[0]) || std::isnan(ctx.fpr[2])) || ctx.fpr[0] <= ctx.fpr[2]));
    // nop
    { const bool branch_taken = !ctx.fpu_condition();
    // nop
      if (branch_taken) {
          goto L_089F8854;
      }
      goto L_089F8844;
    }
L_089F8844:
    ctx.set_fpu_condition(((std::isnan(ctx.fpr[0]) || std::isnan(ctx.fpr[1])) || ctx.fpr[0] <= ctx.fpr[1]));
    // nop
    { const bool branch_taken = ctx.fpu_condition();
    // nop
      if (branch_taken) {
          goto L_089F8860;
      }
      goto L_089F8854;
    }
L_089F8854:
    ctx.set_gpr(2, 0u + static_cast<std::uint32_t>(1));
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_089F8864;
      }
      goto L_089F8860;
    }
L_089F8860:
    ctx.set_gpr(2, 0u + static_cast<std::uint32_t>(2));
    goto L_089F8864;
L_089F8864:
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
L_089F887C:
    ctx.set_gpr(29, ctx.gpr[29] + static_cast<std::uint32_t>(-32));
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(12), ctx.gpr[31]);
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(8), ctx.gpr[18]);
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(4), ctx.gpr[17]);
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(0), ctx.gpr[16]);
    ctx.set_gpr(18, ctx.gpr[5] + 0u);
    ctx.set_gpr(17, ctx.gpr[4] + 0u);
    ctx.fpr[1] = std::bit_cast<float>(rt.memory().aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(8)));
    ctx.fpr[0] = std::bit_cast<float>(rt.memory().aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(20)));
    ctx.set_fpu_condition(((std::isnan(ctx.fpr[1]) || std::isnan(ctx.fpr[0])) || ctx.fpr[1] <= ctx.fpr[0]));
    ctx.set_gpr(2, 0u + static_cast<std::uint32_t>(1));
    { const bool branch_taken = !ctx.fpu_condition();
    // nop
      if (branch_taken) {
          goto L_089F88B4;
      }
      goto L_089F88B0;
    }
L_089F88B0:
    ctx.set_gpr(2, 0u + 0u);
    goto L_089F88B4;
L_089F88B4:
    { const bool branch_taken = ctx.gpr[2] != 0u;
    // nop
      if (branch_taken) {
          goto L_089F88D8;
      }
      goto L_089F88BC;
    }
L_089F88BC:
    ctx.fpr[1] = std::bit_cast<float>(rt.memory().aot_load32(ctx.gpr[17] + static_cast<std::uint32_t>(12)));
    ctx.fpr[0] = std::bit_cast<float>(rt.memory().aot_load32(ctx.gpr[17] + static_cast<std::uint32_t>(24)));
    ctx.set_fpu_condition(((std::isnan(ctx.fpr[1]) || std::isnan(ctx.fpr[0])) || ctx.fpr[1] <= ctx.fpr[0]));
    ctx.set_gpr(2, 0u + static_cast<std::uint32_t>(1));
    { const bool branch_taken = !ctx.fpu_condition();
    // nop
      if (branch_taken) {
          goto L_089F88D8;
      }
      goto L_089F88D4;
    }
L_089F88D4:
    ctx.set_gpr(2, 0u + 0u);
    goto L_089F88D8;
L_089F88D8:
    { const bool branch_taken = ctx.gpr[2] != 0u;
    // nop
      if (branch_taken) {
          goto L_089F88FC;
      }
      goto L_089F88E0;
    }
L_089F88E0:
    ctx.fpr[1] = std::bit_cast<float>(rt.memory().aot_load32(ctx.gpr[17] + static_cast<std::uint32_t>(16)));
    ctx.fpr[0] = std::bit_cast<float>(rt.memory().aot_load32(ctx.gpr[17] + static_cast<std::uint32_t>(28)));
    ctx.set_fpu_condition(((std::isnan(ctx.fpr[1]) || std::isnan(ctx.fpr[0])) || ctx.fpr[1] <= ctx.fpr[0]));
    ctx.set_gpr(2, 0u + static_cast<std::uint32_t>(1));
    { const bool branch_taken = !ctx.fpu_condition();
    // nop
      if (branch_taken) {
          goto L_089F88FC;
      }
      goto L_089F88F8;
    }
L_089F88F8:
    ctx.set_gpr(2, 0u + 0u);
    goto L_089F88FC;
L_089F88FC:
    { const bool branch_taken = ctx.gpr[2] == 0u;
    // nop
      if (branch_taken) {
          goto L_089F8910;
      }
      goto L_089F8904;
    }
L_089F8904:
    ctx.set_gpr(2, 0u + 0u);
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_089F89CC;
      }
      goto L_089F8910;
    }
L_089F8910:
    ctx.set_gpr(4, ctx.gpr[17] + 0u);
    ctx.set_gpr(5, ctx.gpr[18] + static_cast<std::uint32_t>(8));
    ctx.set_gpr(31, 0x089F8920u);
    // nop
    goto L_089F89E8;
L_089F8920:
    ctx.set_gpr(16, 0u < ctx.gpr[2] ? 1u : 0u);
    ctx.fpr[2] = std::bit_cast<float>(rt.memory().aot_load32(ctx.gpr[18] + static_cast<std::uint32_t>(32)));
    ctx.fpr[1] = std::bit_cast<float>(rt.memory().aot_load32(ctx.gpr[18] + static_cast<std::uint32_t>(8)));
    ctx.fpr[0] = std::bit_cast<float>(rt.memory().aot_load32(ctx.gpr[18] + static_cast<std::uint32_t>(20)));
    { const float fs = ctx.fpr[2]; const float ft = ctx.fpr[0]; if ((std::isinf(fs) && ft == 0.0f) || (std::isinf(ft) && fs == 0.0f)) ctx.set_fpr_bits(0, 0x7FC00000u); else ctx.fpr[0] = fs * ft; }
    ctx.fpr[0] = ctx.fpr[1] + ctx.fpr[0];
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(20), std::bit_cast<std::uint32_t>(ctx.fpr[0]));
    ctx.fpr[1] = std::bit_cast<float>(rt.memory().aot_load32(ctx.gpr[18] + static_cast<std::uint32_t>(12)));
    ctx.fpr[0] = std::bit_cast<float>(rt.memory().aot_load32(ctx.gpr[18] + static_cast<std::uint32_t>(24)));
    { const float fs = ctx.fpr[2]; const float ft = ctx.fpr[0]; if ((std::isinf(fs) && ft == 0.0f) || (std::isinf(ft) && fs == 0.0f)) ctx.set_fpr_bits(0, 0x7FC00000u); else ctx.fpr[0] = fs * ft; }
    ctx.fpr[0] = ctx.fpr[1] + ctx.fpr[0];
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(24), std::bit_cast<std::uint32_t>(ctx.fpr[0]));
    ctx.fpr[1] = std::bit_cast<float>(rt.memory().aot_load32(ctx.gpr[18] + static_cast<std::uint32_t>(16)));
    ctx.fpr[0] = std::bit_cast<float>(rt.memory().aot_load32(ctx.gpr[18] + static_cast<std::uint32_t>(28)));
    { const float fs = ctx.fpr[2]; const float ft = ctx.fpr[0]; if ((std::isinf(fs) && ft == 0.0f) || (std::isinf(ft) && fs == 0.0f)) ctx.set_fpr_bits(0, 0x7FC00000u); else ctx.fpr[0] = fs * ft; }
    ctx.fpr[0] = ctx.fpr[1] + ctx.fpr[0];
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(28), std::bit_cast<std::uint32_t>(ctx.fpr[0]));
    ctx.set_gpr(4, ctx.gpr[17] + 0u);
    ctx.set_gpr(5, ctx.gpr[29] + static_cast<std::uint32_t>(20));
    ctx.set_gpr(31, 0x089F8974u);
    // nop
    goto L_089F89E8;
L_089F8974:
    ctx.set_gpr(2, 0u < ctx.gpr[2] ? 1u : 0u);
    { const bool branch_taken = ctx.gpr[16] == 0u;
    // nop
      if (branch_taken) {
          goto L_089F8994;
      }
      goto L_089F8980;
    }
L_089F8980:
    { const bool branch_taken = ctx.gpr[2] == 0u;
    // nop
      if (branch_taken) {
          goto L_089F8994;
      }
      goto L_089F8988;
    }
L_089F8988:
    ctx.set_gpr(2, 0u + static_cast<std::uint32_t>(2));
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_089F89CC;
      }
      goto L_089F8994;
    }
L_089F8994:
    { const bool branch_taken = ctx.gpr[16] != 0u;
    // nop
      if (branch_taken) {
          goto L_089F89BC;
      }
      goto L_089F899C;
    }
L_089F899C:
    { const bool branch_taken = ctx.gpr[2] != 0u;
    // nop
      if (branch_taken) {
          goto L_089F89BC;
      }
      goto L_089F89A4;
    }
L_089F89A4:
    ctx.set_gpr(4, ctx.gpr[17] + 0u);
    ctx.set_gpr(5, ctx.gpr[18] + 0u);
    ctx.set_gpr(31, 0x089F89B4u);
    // nop
    goto L_089F8318;
L_089F89B4:
    { const bool branch_taken = ctx.gpr[2] == 0u;
    // nop
      if (branch_taken) {
          goto L_089F89C8;
      }
      goto L_089F89BC;
    }
L_089F89BC:
    ctx.set_gpr(2, 0u + static_cast<std::uint32_t>(1));
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_089F89CC;
      }
      goto L_089F89C8;
    }
L_089F89C8:
    ctx.set_gpr(2, 0u + 0u);
    goto L_089F89CC;
L_089F89CC:
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
L_089F89E8:
    ctx.fpr[1] = std::bit_cast<float>(rt.memory().aot_load32(ctx.gpr[5] + static_cast<std::uint32_t>(0)));
    ctx.fpr[0] = std::bit_cast<float>(rt.memory().aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(8)));
    ctx.set_fpu_condition((ctx.fpr[0] <= ctx.fpr[1]));
    // nop
    { const bool branch_taken = !ctx.fpu_condition();
    // nop
      if (branch_taken) {
          goto L_089F8A78;
      }
      goto L_089F8A00;
    }
L_089F8A00:
    ctx.fpr[0] = std::bit_cast<float>(rt.memory().aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(20)));
    ctx.set_fpu_condition((ctx.fpr[1] <= ctx.fpr[0]));
    // nop
    { const bool branch_taken = !ctx.fpu_condition();
    // nop
      if (branch_taken) {
          goto L_089F8A78;
      }
      goto L_089F8A14;
    }
L_089F8A14:
    ctx.fpr[1] = std::bit_cast<float>(rt.memory().aot_load32(ctx.gpr[5] + static_cast<std::uint32_t>(4)));
    ctx.fpr[0] = std::bit_cast<float>(rt.memory().aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(12)));
    ctx.set_fpu_condition((ctx.fpr[0] <= ctx.fpr[1]));
    // nop
    { const bool branch_taken = !ctx.fpu_condition();
    // nop
      if (branch_taken) {
          goto L_089F8A78;
      }
      goto L_089F8A2C;
    }
L_089F8A2C:
    ctx.fpr[0] = std::bit_cast<float>(rt.memory().aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(24)));
    ctx.set_fpu_condition((ctx.fpr[1] <= ctx.fpr[0]));
    // nop
    { const bool branch_taken = !ctx.fpu_condition();
    // nop
      if (branch_taken) {
          goto L_089F8A78;
      }
      goto L_089F8A40;
    }
L_089F8A40:
    ctx.fpr[1] = std::bit_cast<float>(rt.memory().aot_load32(ctx.gpr[5] + static_cast<std::uint32_t>(8)));
    ctx.fpr[0] = std::bit_cast<float>(rt.memory().aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(16)));
    ctx.set_fpu_condition((ctx.fpr[0] <= ctx.fpr[1]));
    // nop
    { const bool branch_taken = !ctx.fpu_condition();
    // nop
      if (branch_taken) {
          goto L_089F8A78;
      }
      goto L_089F8A58;
    }
L_089F8A58:
    ctx.fpr[0] = std::bit_cast<float>(rt.memory().aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(28)));
    ctx.set_fpu_condition((ctx.fpr[1] <= ctx.fpr[0]));
    // nop
    { const bool branch_taken = !ctx.fpu_condition();
    // nop
      if (branch_taken) {
          goto L_089F8A78;
      }
      goto L_089F8A6C;
    }
L_089F8A6C:
    ctx.set_gpr(2, 0u + static_cast<std::uint32_t>(2));
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_089F8A7C;
      }
      goto L_089F8A78;
    }
L_089F8A78:
    ctx.set_gpr(2, 0u + 0u);
    goto L_089F8A7C;
L_089F8A7C:
    jump_target = ctx.gpr[31];
    // nop
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_089F8A84:
    ctx.set_gpr(29, ctx.gpr[29] + static_cast<std::uint32_t>(-32));
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(12), ctx.gpr[31]);
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(8), ctx.gpr[17]);
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(4), ctx.gpr[16]);
    ctx.set_gpr(17, ctx.gpr[5] + 0u);
    ctx.set_gpr(16, ctx.gpr[4] + 0u);
    ctx.set_gpr(5, ctx.gpr[17] + static_cast<std::uint32_t>(8));
    ctx.set_gpr(31, 0x089F8AA8u);
    // nop
    goto L_089F8D0C;
L_089F8AA8:
    ctx.fpr[2] = std::bit_cast<float>(rt.memory().aot_load32(ctx.gpr[17] + static_cast<std::uint32_t>(32)));
    ctx.fpr[1] = std::bit_cast<float>(rt.memory().aot_load32(ctx.gpr[17] + static_cast<std::uint32_t>(8)));
    ctx.fpr[0] = std::bit_cast<float>(rt.memory().aot_load32(ctx.gpr[17] + static_cast<std::uint32_t>(20)));
    { const float fs = ctx.fpr[2]; const float ft = ctx.fpr[0]; if ((std::isinf(fs) && ft == 0.0f) || (std::isinf(ft) && fs == 0.0f)) ctx.set_fpr_bits(0, 0x7FC00000u); else ctx.fpr[0] = fs * ft; }
    ctx.fpr[0] = ctx.fpr[1] + ctx.fpr[0];
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(20), std::bit_cast<std::uint32_t>(ctx.fpr[0]));
    ctx.fpr[1] = std::bit_cast<float>(rt.memory().aot_load32(ctx.gpr[17] + static_cast<std::uint32_t>(12)));
    ctx.fpr[0] = std::bit_cast<float>(rt.memory().aot_load32(ctx.gpr[17] + static_cast<std::uint32_t>(24)));
    { const float fs = ctx.fpr[2]; const float ft = ctx.fpr[0]; if ((std::isinf(fs) && ft == 0.0f) || (std::isinf(ft) && fs == 0.0f)) ctx.set_fpr_bits(0, 0x7FC00000u); else ctx.fpr[0] = fs * ft; }
    ctx.fpr[0] = ctx.fpr[1] + ctx.fpr[0];
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(24), std::bit_cast<std::uint32_t>(ctx.fpr[0]));
    ctx.fpr[1] = std::bit_cast<float>(rt.memory().aot_load32(ctx.gpr[17] + static_cast<std::uint32_t>(16)));
    ctx.fpr[0] = std::bit_cast<float>(rt.memory().aot_load32(ctx.gpr[17] + static_cast<std::uint32_t>(28)));
    { const float fs = ctx.fpr[2]; const float ft = ctx.fpr[0]; if ((std::isinf(fs) && ft == 0.0f) || (std::isinf(ft) && fs == 0.0f)) ctx.set_fpr_bits(0, 0x7FC00000u); else ctx.fpr[0] = fs * ft; }
    ctx.fpr[0] = ctx.fpr[1] + ctx.fpr[0];
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(28), std::bit_cast<std::uint32_t>(ctx.fpr[0]));
    ctx.set_gpr(4, ctx.gpr[16] + 0u);
    ctx.set_gpr(5, ctx.gpr[29] + static_cast<std::uint32_t>(20));
    ctx.set_gpr(31, 0x089F8AF8u);
    // nop
    goto L_089F8D0C;
L_089F8AF8:
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
L_089F8B10:
    ctx.fpr[1] = std::bit_cast<float>(rt.memory().aot_load32(ctx.gpr[5] + static_cast<std::uint32_t>(8)));
    ctx.fpr[0] = std::bit_cast<float>(rt.memory().aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(8)));
    ctx.set_fpu_condition(((std::isnan(ctx.fpr[0]) || std::isnan(ctx.fpr[1])) || ctx.fpr[0] <= ctx.fpr[1]));
    // nop
    { const bool branch_taken = ctx.fpu_condition();
    // nop
      if (branch_taken) {
          goto L_089F8B2C;
      }
      goto L_089F8B28;
    }
L_089F8B28:
    rt.memory().aot_store32(ctx.gpr[4] + static_cast<std::uint32_t>(8), std::bit_cast<std::uint32_t>(ctx.fpr[1]));
    goto L_089F8B2C;
L_089F8B2C:
    ctx.fpr[1] = std::bit_cast<float>(rt.memory().aot_load32(ctx.gpr[5] + static_cast<std::uint32_t>(12)));
    ctx.fpr[0] = std::bit_cast<float>(rt.memory().aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(12)));
    ctx.set_fpu_condition(((std::isnan(ctx.fpr[0]) || std::isnan(ctx.fpr[1])) || ctx.fpr[0] <= ctx.fpr[1]));
    // nop
    { const bool branch_taken = ctx.fpu_condition();
    // nop
      if (branch_taken) {
          goto L_089F8B48;
      }
      goto L_089F8B44;
    }
L_089F8B44:
    rt.memory().aot_store32(ctx.gpr[4] + static_cast<std::uint32_t>(12), std::bit_cast<std::uint32_t>(ctx.fpr[1]));
    goto L_089F8B48;
L_089F8B48:
    ctx.fpr[1] = std::bit_cast<float>(rt.memory().aot_load32(ctx.gpr[5] + static_cast<std::uint32_t>(16)));
    ctx.fpr[0] = std::bit_cast<float>(rt.memory().aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(16)));
    ctx.set_fpu_condition(((std::isnan(ctx.fpr[0]) || std::isnan(ctx.fpr[1])) || ctx.fpr[0] <= ctx.fpr[1]));
    // nop
    { const bool branch_taken = ctx.fpu_condition();
    // nop
      if (branch_taken) {
          goto L_089F8B64;
      }
      goto L_089F8B60;
    }
L_089F8B60:
    rt.memory().aot_store32(ctx.gpr[4] + static_cast<std::uint32_t>(16), std::bit_cast<std::uint32_t>(ctx.fpr[1]));
    goto L_089F8B64;
L_089F8B64:
    ctx.fpr[1] = std::bit_cast<float>(rt.memory().aot_load32(ctx.gpr[5] + static_cast<std::uint32_t>(20)));
    ctx.fpr[0] = std::bit_cast<float>(rt.memory().aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(20)));
    ctx.set_fpu_condition((ctx.fpr[0] < ctx.fpr[1]));
    // nop
    { const bool branch_taken = !ctx.fpu_condition();
    // nop
      if (branch_taken) {
          goto L_089F8B80;
      }
      goto L_089F8B7C;
    }
L_089F8B7C:
    rt.memory().aot_store32(ctx.gpr[4] + static_cast<std::uint32_t>(20), std::bit_cast<std::uint32_t>(ctx.fpr[1]));
    goto L_089F8B80;
L_089F8B80:
    ctx.fpr[1] = std::bit_cast<float>(rt.memory().aot_load32(ctx.gpr[5] + static_cast<std::uint32_t>(24)));
    ctx.fpr[0] = std::bit_cast<float>(rt.memory().aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(24)));
    ctx.set_fpu_condition((ctx.fpr[0] < ctx.fpr[1]));
    // nop
    { const bool branch_taken = !ctx.fpu_condition();
    // nop
      if (branch_taken) {
          goto L_089F8B9C;
      }
      goto L_089F8B98;
    }
L_089F8B98:
    rt.memory().aot_store32(ctx.gpr[4] + static_cast<std::uint32_t>(24), std::bit_cast<std::uint32_t>(ctx.fpr[1]));
    goto L_089F8B9C;
L_089F8B9C:
    ctx.fpr[1] = std::bit_cast<float>(rt.memory().aot_load32(ctx.gpr[5] + static_cast<std::uint32_t>(28)));
    ctx.fpr[0] = std::bit_cast<float>(rt.memory().aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(28)));
    ctx.set_fpu_condition((ctx.fpr[0] < ctx.fpr[1]));
    // nop
    { const bool branch_taken = !ctx.fpu_condition();
    // nop
      if (branch_taken) {
          goto L_089F8BB8;
      }
      goto L_089F8BB4;
    }
L_089F8BB4:
    rt.memory().aot_store32(ctx.gpr[4] + static_cast<std::uint32_t>(28), std::bit_cast<std::uint32_t>(ctx.fpr[1]));
    goto L_089F8BB8;
L_089F8BB8:
    jump_target = ctx.gpr[31];
    // nop
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_089F8BC0:
    ctx.set_gpr(29, ctx.gpr[29] + static_cast<std::uint32_t>(-112));
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(12), ctx.gpr[31]);
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(8), ctx.gpr[17]);
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(4), ctx.gpr[16]);
    ctx.set_gpr(16, ctx.gpr[4] + 0u);
    ctx.set_gpr(4, ctx.gpr[5] + 0u);
    ctx.set_gpr(5, ctx.gpr[29] + static_cast<std::uint32_t>(16));
    ctx.set_gpr(31, 0x089F8BE4u);
    // nop
    goto L_089F9100;
L_089F8BE4:
    ctx.set_gpr(17, 0u + 0u);
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_089F8C14;
      }
      goto L_089F8BF0;
    }
L_089F8BF0:
    ctx.set_gpr(2, ctx.gpr[17] << 1u);
    ctx.set_gpr(2, ctx.gpr[2] + ctx.gpr[17]);
    ctx.set_gpr(2, ctx.gpr[2] << 2u);
    ctx.set_gpr(2, ctx.gpr[2] + ctx.gpr[29]);
    ctx.set_gpr(4, ctx.gpr[16] + 0u);
    ctx.set_gpr(5, ctx.gpr[2] + static_cast<std::uint32_t>(16));
    ctx.set_gpr(31, 0x089F8C10u);
    // nop
    goto L_089F8D0C;
L_089F8C10:
    ctx.set_gpr(17, ctx.gpr[17] + static_cast<std::uint32_t>(1));
    goto L_089F8C14;
L_089F8C14:
    ctx.set_gpr(3, ctx.gpr[17] < static_cast<std::uint32_t>(8) ? 1u : 0u);
    { const bool branch_taken = ctx.gpr[3] != 0u;
    // nop
      if (branch_taken) {
          goto L_089F8BF0;
      }
      goto L_089F8C20;
    }
L_089F8C20:
    ctx.set_gpr(31, rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(12)));
    ctx.set_gpr(17, rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(8)));
    ctx.set_gpr(16, rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(4)));
    ctx.set_gpr(29, ctx.gpr[29] + static_cast<std::uint32_t>(112));
    jump_target = ctx.gpr[31];
    // nop
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_089F8C38:
    ctx.fpr[4] = std::bit_cast<float>(rt.memory().aot_load32(ctx.gpr[5] + static_cast<std::uint32_t>(20)));
    ctx.fpr[0] = std::bit_cast<float>(0u);
    ctx.set_fpu_condition((ctx.fpr[4] < ctx.fpr[0]));
    // nop
    { const bool branch_taken = ctx.fpu_condition();
    // nop
      if (branch_taken) {
          goto L_089F8D04;
      }
      goto L_089F8C50;
    }
L_089F8C50:
    ctx.fpr[3] = std::bit_cast<float>(rt.memory().aot_load32(ctx.gpr[5] + static_cast<std::uint32_t>(8)));
    ctx.fpr[2] = ctx.fpr[3] - ctx.fpr[4];
    ctx.fpr[1] = std::bit_cast<float>(rt.memory().aot_load32(ctx.gpr[5] + static_cast<std::uint32_t>(12)));
    ctx.fpr[7] = ctx.fpr[1] - ctx.fpr[4];
    ctx.fpr[0] = std::bit_cast<float>(rt.memory().aot_load32(ctx.gpr[5] + static_cast<std::uint32_t>(16)));
    ctx.fpr[6] = ctx.fpr[0] - ctx.fpr[4];
    ctx.fpr[5] = ctx.fpr[3] + ctx.fpr[4];
    ctx.fpr[3] = ctx.fpr[1] + ctx.fpr[4];
    ctx.fpr[1] = ctx.fpr[0] + ctx.fpr[4];
    ctx.fpr[0] = std::bit_cast<float>(rt.memory().aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(8)));
    ctx.set_fpu_condition(((std::isnan(ctx.fpr[0]) || std::isnan(ctx.fpr[2])) || ctx.fpr[0] <= ctx.fpr[2]));
    // nop
    { const bool branch_taken = ctx.fpu_condition();
    // nop
      if (branch_taken) {
          goto L_089F8C8C;
      }
      goto L_089F8C88;
    }
L_089F8C88:
    rt.memory().aot_store32(ctx.gpr[4] + static_cast<std::uint32_t>(8), std::bit_cast<std::uint32_t>(ctx.fpr[2]));
    goto L_089F8C8C;
L_089F8C8C:
    ctx.fpr[0] = std::bit_cast<float>(rt.memory().aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(12)));
    ctx.set_fpu_condition(((std::isnan(ctx.fpr[0]) || std::isnan(ctx.fpr[7])) || ctx.fpr[0] <= ctx.fpr[7]));
    // nop
    { const bool branch_taken = ctx.fpu_condition();
    // nop
      if (branch_taken) {
          goto L_089F8CA4;
      }
      goto L_089F8CA0;
    }
L_089F8CA0:
    rt.memory().aot_store32(ctx.gpr[4] + static_cast<std::uint32_t>(12), std::bit_cast<std::uint32_t>(ctx.fpr[7]));
    goto L_089F8CA4;
L_089F8CA4:
    ctx.fpr[0] = std::bit_cast<float>(rt.memory().aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(16)));
    ctx.set_fpu_condition(((std::isnan(ctx.fpr[0]) || std::isnan(ctx.fpr[6])) || ctx.fpr[0] <= ctx.fpr[6]));
    // nop
    { const bool branch_taken = ctx.fpu_condition();
    // nop
      if (branch_taken) {
          goto L_089F8CBC;
      }
      goto L_089F8CB8;
    }
L_089F8CB8:
    rt.memory().aot_store32(ctx.gpr[4] + static_cast<std::uint32_t>(16), std::bit_cast<std::uint32_t>(ctx.fpr[6]));
    goto L_089F8CBC;
L_089F8CBC:
    ctx.fpr[0] = std::bit_cast<float>(rt.memory().aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(20)));
    ctx.set_fpu_condition((ctx.fpr[0] < ctx.fpr[5]));
    // nop
    { const bool branch_taken = !ctx.fpu_condition();
    // nop
      if (branch_taken) {
          goto L_089F8CD4;
      }
      goto L_089F8CD0;
    }
L_089F8CD0:
    rt.memory().aot_store32(ctx.gpr[4] + static_cast<std::uint32_t>(20), std::bit_cast<std::uint32_t>(ctx.fpr[5]));
    goto L_089F8CD4;
L_089F8CD4:
    ctx.fpr[0] = std::bit_cast<float>(rt.memory().aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(24)));
    ctx.set_fpu_condition((ctx.fpr[0] < ctx.fpr[3]));
    // nop
    { const bool branch_taken = !ctx.fpu_condition();
    // nop
      if (branch_taken) {
          goto L_089F8CEC;
      }
      goto L_089F8CE8;
    }
L_089F8CE8:
    rt.memory().aot_store32(ctx.gpr[4] + static_cast<std::uint32_t>(24), std::bit_cast<std::uint32_t>(ctx.fpr[3]));
    goto L_089F8CEC;
L_089F8CEC:
    ctx.fpr[0] = std::bit_cast<float>(rt.memory().aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(28)));
    ctx.set_fpu_condition((ctx.fpr[0] < ctx.fpr[1]));
    // nop
    { const bool branch_taken = !ctx.fpu_condition();
    // nop
      if (branch_taken) {
          goto L_089F8D04;
      }
      goto L_089F8D00;
    }
L_089F8D00:
    rt.memory().aot_store32(ctx.gpr[4] + static_cast<std::uint32_t>(28), std::bit_cast<std::uint32_t>(ctx.fpr[1]));
    goto L_089F8D04;
L_089F8D04:
    jump_target = ctx.gpr[31];
    // nop
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_089F8D0C:
    ctx.fpr[1] = std::bit_cast<float>(rt.memory().aot_load32(ctx.gpr[5] + static_cast<std::uint32_t>(0)));
    ctx.fpr[0] = std::bit_cast<float>(rt.memory().aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(8)));
    ctx.set_fpu_condition(((std::isnan(ctx.fpr[0]) || std::isnan(ctx.fpr[1])) || ctx.fpr[0] <= ctx.fpr[1]));
    // nop
    { const bool branch_taken = ctx.fpu_condition();
    // nop
      if (branch_taken) {
          goto L_089F8D28;
      }
      goto L_089F8D24;
    }
L_089F8D24:
    rt.memory().aot_store32(ctx.gpr[4] + static_cast<std::uint32_t>(8), std::bit_cast<std::uint32_t>(ctx.fpr[1]));
    goto L_089F8D28;
L_089F8D28:
    ctx.fpr[1] = std::bit_cast<float>(rt.memory().aot_load32(ctx.gpr[5] + static_cast<std::uint32_t>(4)));
    ctx.fpr[0] = std::bit_cast<float>(rt.memory().aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(12)));
    ctx.set_fpu_condition(((std::isnan(ctx.fpr[0]) || std::isnan(ctx.fpr[1])) || ctx.fpr[0] <= ctx.fpr[1]));
    // nop
    { const bool branch_taken = ctx.fpu_condition();
    // nop
      if (branch_taken) {
          goto L_089F8D44;
      }
      goto L_089F8D40;
    }
L_089F8D40:
    rt.memory().aot_store32(ctx.gpr[4] + static_cast<std::uint32_t>(12), std::bit_cast<std::uint32_t>(ctx.fpr[1]));
    goto L_089F8D44;
L_089F8D44:
    ctx.fpr[1] = std::bit_cast<float>(rt.memory().aot_load32(ctx.gpr[5] + static_cast<std::uint32_t>(8)));
    ctx.fpr[0] = std::bit_cast<float>(rt.memory().aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(16)));
    ctx.set_fpu_condition(((std::isnan(ctx.fpr[0]) || std::isnan(ctx.fpr[1])) || ctx.fpr[0] <= ctx.fpr[1]));
    // nop
    { const bool branch_taken = ctx.fpu_condition();
    // nop
      if (branch_taken) {
          goto L_089F8D60;
      }
      goto L_089F8D5C;
    }
L_089F8D5C:
    rt.memory().aot_store32(ctx.gpr[4] + static_cast<std::uint32_t>(16), std::bit_cast<std::uint32_t>(ctx.fpr[1]));
    goto L_089F8D60;
L_089F8D60:
    ctx.fpr[1] = std::bit_cast<float>(rt.memory().aot_load32(ctx.gpr[5] + static_cast<std::uint32_t>(0)));
    ctx.fpr[0] = std::bit_cast<float>(rt.memory().aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(20)));
    ctx.set_fpu_condition((ctx.fpr[0] < ctx.fpr[1]));
    // nop
    { const bool branch_taken = !ctx.fpu_condition();
    // nop
      if (branch_taken) {
          goto L_089F8D7C;
      }
      goto L_089F8D78;
    }
L_089F8D78:
    rt.memory().aot_store32(ctx.gpr[4] + static_cast<std::uint32_t>(20), std::bit_cast<std::uint32_t>(ctx.fpr[1]));
    goto L_089F8D7C;
L_089F8D7C:
    ctx.fpr[1] = std::bit_cast<float>(rt.memory().aot_load32(ctx.gpr[5] + static_cast<std::uint32_t>(4)));
    ctx.fpr[0] = std::bit_cast<float>(rt.memory().aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(24)));
    ctx.set_fpu_condition((ctx.fpr[0] < ctx.fpr[1]));
    // nop
    { const bool branch_taken = !ctx.fpu_condition();
    // nop
      if (branch_taken) {
          goto L_089F8D98;
      }
      goto L_089F8D94;
    }
L_089F8D94:
    rt.memory().aot_store32(ctx.gpr[4] + static_cast<std::uint32_t>(24), std::bit_cast<std::uint32_t>(ctx.fpr[1]));
    goto L_089F8D98;
L_089F8D98:
    ctx.fpr[1] = std::bit_cast<float>(rt.memory().aot_load32(ctx.gpr[5] + static_cast<std::uint32_t>(8)));
    ctx.fpr[0] = std::bit_cast<float>(rt.memory().aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(28)));
    ctx.set_fpu_condition((ctx.fpr[0] < ctx.fpr[1]));
    // nop
    { const bool branch_taken = !ctx.fpu_condition();
    // nop
      if (branch_taken) {
          goto L_089F8DB4;
      }
      goto L_089F8DB0;
    }
L_089F8DB0:
    rt.memory().aot_store32(ctx.gpr[4] + static_cast<std::uint32_t>(28), std::bit_cast<std::uint32_t>(ctx.fpr[1]));
    goto L_089F8DB4;
L_089F8DB4:
    jump_target = ctx.gpr[31];
    // nop
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_089F8DBC:
    ctx.set_gpr(29, ctx.gpr[29] + static_cast<std::uint32_t>(-16));
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(12), ctx.gpr[31]);
    ctx.set_gpr(31, 0x089F8DCCu);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0124_entry, 124u, 697u, 0x089F7E44u>(ctx, &aot_mem) && ctx.pc == 0x089F8DCCu) goto L_089F8DCC;
    return;
L_089F8DCC:
    ctx.set_gpr(31, rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(12)));
    ctx.set_gpr(29, ctx.gpr[29] + static_cast<std::uint32_t>(16));
    jump_target = ctx.gpr[31];
    // nop
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_089F8DDC:
    ctx.fpr[0] = std::bit_cast<float>(rt.memory().aot_load32(ctx.gpr[28] + static_cast<std::uint32_t>(-32512)));
    rt.memory().aot_store32(ctx.gpr[4] + static_cast<std::uint32_t>(16), std::bit_cast<std::uint32_t>(ctx.fpr[0]));
    rt.memory().aot_store32(ctx.gpr[4] + static_cast<std::uint32_t>(12), std::bit_cast<std::uint32_t>(ctx.fpr[0]));
    rt.memory().aot_store32(ctx.gpr[4] + static_cast<std::uint32_t>(8), std::bit_cast<std::uint32_t>(ctx.fpr[0]));
    ctx.fpr[0] = std::bit_cast<float>(rt.memory().aot_load32(ctx.gpr[28] + static_cast<std::uint32_t>(-32508)));
    rt.memory().aot_store32(ctx.gpr[4] + static_cast<std::uint32_t>(28), std::bit_cast<std::uint32_t>(ctx.fpr[0]));
    rt.memory().aot_store32(ctx.gpr[4] + static_cast<std::uint32_t>(24), std::bit_cast<std::uint32_t>(ctx.fpr[0]));
    rt.memory().aot_store32(ctx.gpr[4] + static_cast<std::uint32_t>(20), std::bit_cast<std::uint32_t>(ctx.fpr[0]));
    jump_target = ctx.gpr[31];
    // nop
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_089F8E04:
    ctx.fpr[1] = std::bit_cast<float>(rt.memory().aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(8)));
    ctx.fpr[0] = std::bit_cast<float>(rt.memory().aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(20)));
    ctx.set_fpu_condition(((std::isnan(ctx.fpr[1]) || std::isnan(ctx.fpr[0])) || ctx.fpr[1] <= ctx.fpr[0]));
    ctx.set_gpr(2, 0u + static_cast<std::uint32_t>(1));
    { const bool branch_taken = !ctx.fpu_condition();
    // nop
      if (branch_taken) {
          goto L_089F8E20;
      }
      goto L_089F8E1C;
    }
L_089F8E1C:
    ctx.set_gpr(2, 0u + 0u);
    goto L_089F8E20;
L_089F8E20:
    { const bool branch_taken = ctx.gpr[2] != 0u;
    // nop
      if (branch_taken) {
          goto L_089F8E44;
      }
      goto L_089F8E28;
    }
L_089F8E28:
    ctx.fpr[1] = std::bit_cast<float>(rt.memory().aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(12)));
    ctx.fpr[0] = std::bit_cast<float>(rt.memory().aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(24)));
    ctx.set_fpu_condition(((std::isnan(ctx.fpr[1]) || std::isnan(ctx.fpr[0])) || ctx.fpr[1] <= ctx.fpr[0]));
    ctx.set_gpr(2, 0u + static_cast<std::uint32_t>(1));
    { const bool branch_taken = !ctx.fpu_condition();
    // nop
      if (branch_taken) {
          goto L_089F8E44;
      }
      goto L_089F8E40;
    }
L_089F8E40:
    ctx.set_gpr(2, 0u + 0u);
    goto L_089F8E44;
L_089F8E44:
    { const bool branch_taken = ctx.gpr[2] != 0u;
    // nop
      if (branch_taken) {
          goto L_089F8E68;
      }
      goto L_089F8E4C;
    }
L_089F8E4C:
    ctx.fpr[1] = std::bit_cast<float>(rt.memory().aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(16)));
    ctx.fpr[0] = std::bit_cast<float>(rt.memory().aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(28)));
    ctx.set_fpu_condition(((std::isnan(ctx.fpr[1]) || std::isnan(ctx.fpr[0])) || ctx.fpr[1] <= ctx.fpr[0]));
    ctx.set_gpr(2, 0u + static_cast<std::uint32_t>(1));
    { const bool branch_taken = !ctx.fpu_condition();
    // nop
      if (branch_taken) {
          goto L_089F8E68;
      }
      goto L_089F8E64;
    }
L_089F8E64:
    ctx.set_gpr(2, 0u + 0u);
    goto L_089F8E68;
L_089F8E68:
    jump_target = ctx.gpr[31];
    // nop
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_089F8E70:
    ctx.set_gpr(3, 16128u << 16u);
    ctx.fpr[2] = std::bit_cast<float>(ctx.gpr[3]);
    ctx.fpr[0] = std::bit_cast<float>(rt.memory().aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(8)));
    { const float fs = ctx.fpr[2]; const float ft = ctx.fpr[0]; if ((std::isinf(fs) && ft == 0.0f) || (std::isinf(ft) && fs == 0.0f)) ctx.set_fpr_bits(1, 0x7FC00000u); else ctx.fpr[1] = fs * ft; }
    ctx.fpr[0] = std::bit_cast<float>(rt.memory().aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(20)));
    { const float fs = ctx.fpr[2]; const float ft = ctx.fpr[0]; if ((std::isinf(fs) && ft == 0.0f) || (std::isinf(ft) && fs == 0.0f)) ctx.set_fpr_bits(0, 0x7FC00000u); else ctx.fpr[0] = fs * ft; }
    ctx.fpr[0] = ctx.fpr[1] + ctx.fpr[0];
    rt.memory().aot_store32(ctx.gpr[5] + static_cast<std::uint32_t>(0), std::bit_cast<std::uint32_t>(ctx.fpr[0]));
    ctx.fpr[0] = std::bit_cast<float>(rt.memory().aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(12)));
    { const float fs = ctx.fpr[2]; const float ft = ctx.fpr[0]; if ((std::isinf(fs) && ft == 0.0f) || (std::isinf(ft) && fs == 0.0f)) ctx.set_fpr_bits(1, 0x7FC00000u); else ctx.fpr[1] = fs * ft; }
    ctx.fpr[0] = std::bit_cast<float>(rt.memory().aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(24)));
    { const float fs = ctx.fpr[2]; const float ft = ctx.fpr[0]; if ((std::isinf(fs) && ft == 0.0f) || (std::isinf(ft) && fs == 0.0f)) ctx.set_fpr_bits(0, 0x7FC00000u); else ctx.fpr[0] = fs * ft; }
    ctx.fpr[0] = ctx.fpr[1] + ctx.fpr[0];
    rt.memory().aot_store32(ctx.gpr[5] + static_cast<std::uint32_t>(4), std::bit_cast<std::uint32_t>(ctx.fpr[0]));
    ctx.fpr[0] = std::bit_cast<float>(rt.memory().aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(16)));
    { const float fs = ctx.fpr[2]; const float ft = ctx.fpr[0]; if ((std::isinf(fs) && ft == 0.0f) || (std::isinf(ft) && fs == 0.0f)) ctx.set_fpr_bits(1, 0x7FC00000u); else ctx.fpr[1] = fs * ft; }
    ctx.fpr[0] = std::bit_cast<float>(rt.memory().aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(28)));
    { const float fs = ctx.fpr[2]; const float ft = ctx.fpr[0]; if ((std::isinf(fs) && ft == 0.0f) || (std::isinf(ft) && fs == 0.0f)) ctx.set_fpr_bits(0, 0x7FC00000u); else ctx.fpr[0] = fs * ft; }
    ctx.fpr[0] = ctx.fpr[1] + ctx.fpr[0];
    rt.memory().aot_store32(ctx.gpr[5] + static_cast<std::uint32_t>(8), std::bit_cast<std::uint32_t>(ctx.fpr[0]));
    jump_target = ctx.gpr[31];
    // nop
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_089F8EC8:
    ctx.set_gpr(29, ctx.gpr[29] + static_cast<std::uint32_t>(-16));
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(12), ctx.gpr[31]);
    ctx.set_gpr(2, 2246u << 16u);
    ctx.set_gpr(4, rt.memory().aot_load32(ctx.gpr[2] + static_cast<std::uint32_t>(-26668)));
    ctx.set_gpr(5, ctx.gpr[4] + 0u);
    ctx.set_gpr(6, 2208u << 16u);
    ctx.set_gpr(6, ctx.gpr[6] + static_cast<std::uint32_t>(-28032));
    ctx.set_gpr(31, 0x089F8EECu);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0126_entry, 126u, 606u, 0x089FEFCCu>(ctx, &aot_mem) && ctx.pc == 0x089F8EECu) goto L_089F8EEC;
    return;
L_089F8EEC:
    ctx.set_gpr(31, 0x089F8EF4u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0124_entry, 124u, 637u, 0x089F77B0u>(ctx, &aot_mem) && ctx.pc == 0x089F8EF4u) goto L_089F8EF4;
    return;
L_089F8EF4:
    ctx.set_gpr(3, 2246u << 16u);
    ctx.set_gpr(4, rt.memory().aot_load32(ctx.gpr[3] + static_cast<std::uint32_t>(-26668)));
    ctx.set_gpr(5, ctx.gpr[2] + 0u);
    ctx.set_gpr(6, 2208u << 16u);
    ctx.set_gpr(6, ctx.gpr[6] + static_cast<std::uint32_t>(-27996));
    ctx.set_gpr(31, 0x089F8F10u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0126_entry, 126u, 606u, 0x089FEFCCu>(ctx, &aot_mem) && ctx.pc == 0x089F8F10u) goto L_089F8F10;
    return;
L_089F8F10:
    ctx.set_gpr(31, 0x089F8F18u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0123_entry, 123u, 508u, 0x089F3674u>(ctx, &aot_mem) && ctx.pc == 0x089F8F18u) goto L_089F8F18;
    return;
L_089F8F18:
    ctx.set_gpr(3, 2246u << 16u);
    ctx.set_gpr(4, rt.memory().aot_load32(ctx.gpr[3] + static_cast<std::uint32_t>(-26668)));
    ctx.set_gpr(5, ctx.gpr[2] + 0u);
    ctx.set_gpr(6, 2208u << 16u);
    ctx.set_gpr(6, ctx.gpr[6] + static_cast<std::uint32_t>(-27960));
    ctx.set_gpr(31, 0x089F8F34u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0126_entry, 126u, 606u, 0x089FEFCCu>(ctx, &aot_mem) && ctx.pc == 0x089F8F34u) goto L_089F8F34;
    return;
L_089F8F34:
    ctx.set_gpr(31, 0x089F8F3Cu);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0123_entry, 123u, 429u, 0x089F2FA4u>(ctx, &aot_mem) && ctx.pc == 0x089F8F3Cu) goto L_089F8F3C;
    return;
L_089F8F3C:
    ctx.set_gpr(3, 2246u << 16u);
    ctx.set_gpr(4, rt.memory().aot_load32(ctx.gpr[3] + static_cast<std::uint32_t>(-26668)));
    ctx.set_gpr(5, ctx.gpr[2] + 0u);
    ctx.set_gpr(6, 2208u << 16u);
    ctx.set_gpr(6, ctx.gpr[6] + static_cast<std::uint32_t>(-28068));
    ctx.set_gpr(31, 0x089F8F58u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0126_entry, 126u, 606u, 0x089FEFCCu>(ctx, &aot_mem) && ctx.pc == 0x089F8F58u) goto L_089F8F58;
    return;
L_089F8F58:
    ctx.set_gpr(2, 2246u << 16u);
    ctx.set_gpr(4, rt.memory().aot_load32(ctx.gpr[2] + static_cast<std::uint32_t>(-26668)));
    ctx.set_gpr(5, ctx.gpr[4] + 0u);
    ctx.set_gpr(6, 2208u << 16u);
    ctx.set_gpr(6, ctx.gpr[6] + static_cast<std::uint32_t>(-27172));
    ctx.set_gpr(31, 0x089F8F74u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0126_entry, 126u, 622u, 0x089FF0BCu>(ctx, &aot_mem) && ctx.pc == 0x089F8F74u) goto L_089F8F74;
    return;
L_089F8F74:
    ctx.set_gpr(2, 2246u << 16u);
    ctx.set_gpr(4, rt.memory().aot_load32(ctx.gpr[2] + static_cast<std::uint32_t>(-26668)));
    ctx.set_gpr(2, 2246u << 16u);
    ctx.set_gpr(5, rt.memory().aot_load32(ctx.gpr[2] + static_cast<std::uint32_t>(-26660)));
    ctx.set_gpr(6, 2208u << 16u);
    ctx.set_gpr(6, ctx.gpr[6] + static_cast<std::uint32_t>(-27360));
    ctx.set_gpr(31, 0x089F8F94u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0126_entry, 126u, 622u, 0x089FF0BCu>(ctx, &aot_mem) && ctx.pc == 0x089F8F94u) goto L_089F8F94;
    return;
L_089F8F94:
    ctx.set_gpr(2, 2246u << 16u);
    ctx.set_gpr(4, rt.memory().aot_load32(ctx.gpr[2] + static_cast<std::uint32_t>(-26668)));
    ctx.set_gpr(2, 2246u << 16u);
    ctx.set_gpr(5, rt.memory().aot_load32(ctx.gpr[2] + static_cast<std::uint32_t>(-26860)));
    ctx.set_gpr(6, 2208u << 16u);
    ctx.set_gpr(6, ctx.gpr[6] + static_cast<std::uint32_t>(-27888));
    ctx.set_gpr(31, 0x089F8FB4u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0126_entry, 126u, 622u, 0x089FF0BCu>(ctx, &aot_mem) && ctx.pc == 0x089F8FB4u) goto L_089F8FB4;
    return;
L_089F8FB4:
    ctx.set_gpr(2, 2246u << 16u);
    ctx.set_gpr(4, rt.memory().aot_load32(ctx.gpr[2] + static_cast<std::uint32_t>(-26668)));
    ctx.set_gpr(2, 2246u << 16u);
    ctx.set_gpr(5, rt.memory().aot_load32(ctx.gpr[2] + static_cast<std::uint32_t>(-26892)));
    ctx.set_gpr(6, 2208u << 16u);
    ctx.set_gpr(6, ctx.gpr[6] + static_cast<std::uint32_t>(-27104));
    ctx.set_gpr(31, 0x089F8FD4u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0126_entry, 126u, 622u, 0x089FF0BCu>(ctx, &aot_mem) && ctx.pc == 0x089F8FD4u) goto L_089F8FD4;
    return;
L_089F8FD4:
    ctx.set_gpr(2, 2246u << 16u);
    ctx.set_gpr(4, rt.memory().aot_load32(ctx.gpr[2] + static_cast<std::uint32_t>(-26668)));
    ctx.set_gpr(5, ctx.gpr[4] + 0u);
    ctx.set_gpr(6, 2208u << 16u);
    ctx.set_gpr(6, ctx.gpr[6] + static_cast<std::uint32_t>(-26260));
    ctx.set_gpr(31, 0x089F8FF0u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0126_entry, 126u, 614u, 0x089FF044u>(ctx, &aot_mem) && ctx.pc == 0x089F8FF0u) goto L_089F8FF0;
    return;
L_089F8FF0:
    ctx.set_gpr(2, 2246u << 16u);
    ctx.set_gpr(4, rt.memory().aot_load32(ctx.gpr[2] + static_cast<std::uint32_t>(-26668)));
    ctx.set_gpr(2, 2246u << 16u);
    ctx.set_gpr(5, rt.memory().aot_load32(ctx.gpr[2] + static_cast<std::uint32_t>(-26660)));
    ctx.set_gpr(6, 2208u << 16u);
    ctx.set_gpr(6, ctx.gpr[6] + static_cast<std::uint32_t>(-26368));
    ctx.set_gpr(31, 0x089F9010u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0126_entry, 126u, 614u, 0x089FF044u>(ctx, &aot_mem) && ctx.pc == 0x089F9010u) goto L_089F9010;
    return;
L_089F9010:
    ctx.set_gpr(2, 2246u << 16u);
    ctx.set_gpr(4, rt.memory().aot_load32(ctx.gpr[2] + static_cast<std::uint32_t>(-26668)));
    ctx.set_gpr(2, 2246u << 16u);
    ctx.set_gpr(5, rt.memory().aot_load32(ctx.gpr[2] + static_cast<std::uint32_t>(-26892)));
    ctx.set_gpr(6, 2208u << 16u);
    ctx.set_gpr(6, ctx.gpr[6] + static_cast<std::uint32_t>(-26096));
    ctx.set_gpr(31, 0x089F9030u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0126_entry, 126u, 614u, 0x089FF044u>(ctx, &aot_mem) && ctx.pc == 0x089F9030u) goto L_089F9030;
    return;
L_089F9030:
    ctx.set_gpr(2, 2246u << 16u);
    ctx.set_gpr(4, rt.memory().aot_load32(ctx.gpr[2] + static_cast<std::uint32_t>(-26668)));
    ctx.set_gpr(5, 2208u << 16u);
    ctx.set_gpr(5, ctx.gpr[5] + static_cast<std::uint32_t>(-27924));
    ctx.set_gpr(31, 0x089F9048u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0126_entry, 126u, 630u, 0x089FF134u>(ctx, &aot_mem) && ctx.pc == 0x089F9048u) goto L_089F9048;
    return;
L_089F9048:
    ctx.set_gpr(2, 2246u << 16u);
    ctx.set_gpr(4, rt.memory().aot_load32(ctx.gpr[2] + static_cast<std::uint32_t>(-26668)));
    ctx.set_gpr(5, 2208u << 16u);
    ctx.set_gpr(5, ctx.gpr[5] + static_cast<std::uint32_t>(-26912));
    ctx.set_gpr(31, 0x089F9060u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0126_entry, 126u, 640u, 0x089FF1BCu>(ctx, &aot_mem) && ctx.pc == 0x089F9060u) goto L_089F9060;
    return;
L_089F9060:
    ctx.set_gpr(2, 2246u << 16u);
    ctx.set_gpr(4, rt.memory().aot_load32(ctx.gpr[2] + static_cast<std::uint32_t>(-26668)));
    ctx.set_gpr(5, 2208u << 16u);
    ctx.set_gpr(5, ctx.gpr[5] + static_cast<std::uint32_t>(-26508));
    ctx.set_gpr(31, 0x089F9078u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0126_entry, 126u, 635u, 0x089FF178u>(ctx, &aot_mem) && ctx.pc == 0x089F9078u) goto L_089F9078;
    return;
L_089F9078:
    ctx.set_gpr(2, 2246u << 16u);
    ctx.set_gpr(4, rt.memory().aot_load32(ctx.gpr[2] + static_cast<std::uint32_t>(-26668)));
    ctx.set_gpr(5, 2208u << 16u);
    ctx.set_gpr(5, ctx.gpr[5] + static_cast<std::uint32_t>(-26672));
    ctx.set_gpr(31, 0x089F9090u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0126_entry, 126u, 650u, 0x089FF244u>(ctx, &aot_mem) && ctx.pc == 0x089F9090u) goto L_089F9090;
    return;
L_089F9090:
    ctx.set_gpr(2, 2246u << 16u);
    ctx.set_gpr(4, rt.memory().aot_load32(ctx.gpr[2] + static_cast<std::uint32_t>(-26668)));
    ctx.set_gpr(5, 2208u << 16u);
    ctx.set_gpr(5, ctx.gpr[5] + static_cast<std::uint32_t>(-25964));
    ctx.set_gpr(31, 0x089F90A8u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0126_entry, 126u, 645u, 0x089FF200u>(ctx, &aot_mem) && ctx.pc == 0x089F90A8u) goto L_089F90A8;
    return;
L_089F90A8:
    ctx.set_gpr(2, 2246u << 16u);
    ctx.set_gpr(4, rt.memory().aot_load32(ctx.gpr[2] + static_cast<std::uint32_t>(-26668)));
    ctx.set_gpr(5, 2208u << 16u);
    ctx.set_gpr(5, ctx.gpr[5] + static_cast<std::uint32_t>(-25856));
    ctx.set_gpr(31, 0x089F90C0u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0126_entry, 126u, 655u, 0x089FF288u>(ctx, &aot_mem) && ctx.pc == 0x089F90C0u) goto L_089F90C0;
    return;
L_089F90C0:
    ctx.set_gpr(2, 2246u << 16u);
    ctx.set_gpr(4, rt.memory().aot_load32(ctx.gpr[2] + static_cast<std::uint32_t>(-26668)));
    ctx.set_gpr(5, 2208u << 16u);
    ctx.set_gpr(5, ctx.gpr[5] + static_cast<std::uint32_t>(-25824));
    ctx.set_gpr(31, 0x089F90D8u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0126_entry, 126u, 660u, 0x089FF2CCu>(ctx, &aot_mem) && ctx.pc == 0x089F90D8u) goto L_089F90D8;
    return;
L_089F90D8:
    ctx.set_gpr(2, 2246u << 16u);
    ctx.set_gpr(4, rt.memory().aot_load32(ctx.gpr[2] + static_cast<std::uint32_t>(-26668)));
    ctx.set_gpr(5, 2208u << 16u);
    ctx.set_gpr(5, ctx.gpr[5] + static_cast<std::uint32_t>(-25572));
    ctx.set_gpr(31, 0x089F90F0u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0126_entry, 126u, 665u, 0x089FF310u>(ctx, &aot_mem) && ctx.pc == 0x089F90F0u) goto L_089F90F0;
    return;
L_089F90F0:
    ctx.set_gpr(31, rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(12)));
    ctx.set_gpr(29, ctx.gpr[29] + static_cast<std::uint32_t>(16));
    jump_target = ctx.gpr[31];
    // nop
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_089F9100:
    ctx.set_gpr(29, ctx.gpr[29] + static_cast<std::uint32_t>(-16));
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(12), ctx.gpr[31]);
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(8), ctx.gpr[17]);
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(4), ctx.gpr[16]);
    ctx.set_gpr(17, ctx.gpr[4] + 0u);
    ctx.set_gpr(16, ctx.gpr[5] + 0u);
    ctx.set_gpr(4, rt.memory().aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(8)));
    ctx.set_gpr(5, rt.memory().aot_load32(ctx.gpr[17] + static_cast<std::uint32_t>(16)));
    ctx.set_gpr(6, rt.memory().aot_load32(ctx.gpr[17] + static_cast<std::uint32_t>(24)));
    ctx.set_gpr(7, ctx.gpr[16] + 0u);
    ctx.set_gpr(31, 0x089F9130u);
    // nop
    goto L_089FAFB0;
L_089F9130:
    ctx.set_gpr(4, rt.memory().aot_load32(ctx.gpr[17] + static_cast<std::uint32_t>(8)));
    ctx.set_gpr(5, rt.memory().aot_load32(ctx.gpr[17] + static_cast<std::uint32_t>(16)));
    ctx.set_gpr(6, rt.memory().aot_load32(ctx.gpr[17] + static_cast<std::uint32_t>(28)));
    ctx.set_gpr(7, ctx.gpr[16] + static_cast<std::uint32_t>(12));
    ctx.set_gpr(31, 0x089F9148u);
    // nop
    goto L_089FAFB0;
L_089F9148:
    ctx.set_gpr(4, rt.memory().aot_load32(ctx.gpr[17] + static_cast<std::uint32_t>(8)));
    ctx.set_gpr(5, rt.memory().aot_load32(ctx.gpr[17] + static_cast<std::uint32_t>(20)));
    ctx.set_gpr(6, rt.memory().aot_load32(ctx.gpr[17] + static_cast<std::uint32_t>(24)));
    ctx.set_gpr(7, ctx.gpr[16] + static_cast<std::uint32_t>(24));
    ctx.set_gpr(31, 0x089F9160u);
    // nop
    goto L_089FAFB0;
L_089F9160:
    ctx.set_gpr(4, rt.memory().aot_load32(ctx.gpr[17] + static_cast<std::uint32_t>(8)));
    ctx.set_gpr(5, rt.memory().aot_load32(ctx.gpr[17] + static_cast<std::uint32_t>(20)));
    ctx.set_gpr(6, rt.memory().aot_load32(ctx.gpr[17] + static_cast<std::uint32_t>(28)));
    ctx.set_gpr(7, ctx.gpr[16] + static_cast<std::uint32_t>(36));
    ctx.set_gpr(31, 0x089F9178u);
    // nop
    goto L_089FAFB0;
L_089F9178:
    ctx.set_gpr(4, rt.memory().aot_load32(ctx.gpr[17] + static_cast<std::uint32_t>(12)));
    ctx.set_gpr(5, rt.memory().aot_load32(ctx.gpr[17] + static_cast<std::uint32_t>(16)));
    ctx.set_gpr(6, rt.memory().aot_load32(ctx.gpr[17] + static_cast<std::uint32_t>(24)));
    ctx.set_gpr(7, ctx.gpr[16] + static_cast<std::uint32_t>(48));
    ctx.set_gpr(31, 0x089F9190u);
    // nop
    goto L_089FAFB0;
L_089F9190:
    ctx.set_gpr(4, rt.memory().aot_load32(ctx.gpr[17] + static_cast<std::uint32_t>(12)));
    ctx.set_gpr(5, rt.memory().aot_load32(ctx.gpr[17] + static_cast<std::uint32_t>(16)));
    ctx.set_gpr(6, rt.memory().aot_load32(ctx.gpr[17] + static_cast<std::uint32_t>(28)));
    ctx.set_gpr(7, ctx.gpr[16] + static_cast<std::uint32_t>(60));
    ctx.set_gpr(31, 0x089F91A8u);
    // nop
    goto L_089FAFB0;
L_089F91A8:
    ctx.set_gpr(4, rt.memory().aot_load32(ctx.gpr[17] + static_cast<std::uint32_t>(12)));
    ctx.set_gpr(5, rt.memory().aot_load32(ctx.gpr[17] + static_cast<std::uint32_t>(20)));
    ctx.set_gpr(6, rt.memory().aot_load32(ctx.gpr[17] + static_cast<std::uint32_t>(24)));
    ctx.set_gpr(7, ctx.gpr[16] + static_cast<std::uint32_t>(72));
    ctx.set_gpr(31, 0x089F91C0u);
    // nop
    goto L_089FAFB0;
L_089F91C0:
    ctx.set_gpr(4, rt.memory().aot_load32(ctx.gpr[17] + static_cast<std::uint32_t>(12)));
    ctx.set_gpr(5, rt.memory().aot_load32(ctx.gpr[17] + static_cast<std::uint32_t>(20)));
    ctx.set_gpr(6, rt.memory().aot_load32(ctx.gpr[17] + static_cast<std::uint32_t>(28)));
    ctx.set_gpr(7, ctx.gpr[16] + static_cast<std::uint32_t>(84));
    ctx.set_gpr(31, 0x089F91D8u);
    // nop
    goto L_089FAFB0;
L_089F91D8:
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
L_089F91F0:
    ctx.set_gpr(29, ctx.gpr[29] + static_cast<std::uint32_t>(-16));
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(12), ctx.gpr[31]);
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(8), ctx.gpr[18]);
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(4), ctx.gpr[17]);
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(0), ctx.gpr[16]);
    ctx.set_gpr(18, ctx.gpr[4] + 0u);
    ctx.set_gpr(17, ctx.gpr[5] + 0u);
    ctx.set_gpr(16, 0u + 0u);
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_089F9234;
      }
      goto L_089F9218;
    }
L_089F9218:
    ctx.set_gpr(2, ctx.gpr[16] << 2u);
    ctx.set_gpr(2, ctx.gpr[2] + ctx.gpr[18]);
    ctx.set_gpr(4, rt.memory().aot_load32(ctx.gpr[2] + static_cast<std::uint32_t>(8)));
    ctx.set_gpr(5, ctx.gpr[17] + 0u);
    ctx.set_gpr(31, 0x089F9230u);
    // nop
    goto L_089FAD44;
L_089F9230:
    ctx.set_gpr(16, ctx.gpr[16] + static_cast<std::uint32_t>(1));
    goto L_089F9234;
L_089F9234:
    ctx.set_gpr(3, ctx.gpr[16] < static_cast<std::uint32_t>(6) ? 1u : 0u);
    { const bool branch_taken = ctx.gpr[3] != 0u;
    // nop
      if (branch_taken) {
          goto L_089F9218;
      }
      goto L_089F9240;
    }
L_089F9240:
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
L_089F925C:
    ctx.set_gpr(29, ctx.gpr[29] + static_cast<std::uint32_t>(-16));
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(12), ctx.gpr[31]);
    ctx.set_gpr(31, 0x089F926Cu);
    // nop
    goto L_089F9620;
L_089F926C:
    ctx.set_gpr(2, 0u < ctx.gpr[2] ? 1u : 0u);
    ctx.set_gpr(31, rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(12)));
    ctx.set_gpr(29, ctx.gpr[29] + static_cast<std::uint32_t>(16));
    jump_target = ctx.gpr[31];
    // nop
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_089F9280:
    ctx.set_gpr(29, ctx.gpr[29] + static_cast<std::uint32_t>(-16));
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(12), ctx.gpr[31]);
    ctx.set_gpr(31, 0x089F9290u);
    // nop
    goto L_089F95DC;
L_089F9290:
    ctx.set_gpr(2, 0u < ctx.gpr[2] ? 1u : 0u);
    ctx.set_gpr(31, rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(12)));
    ctx.set_gpr(29, ctx.gpr[29] + static_cast<std::uint32_t>(16));
    jump_target = ctx.gpr[31];
    // nop
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_089F92A4:
    ctx.set_gpr(29, ctx.gpr[29] + static_cast<std::uint32_t>(-16));
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(12), ctx.gpr[31]);
    ctx.set_gpr(31, 0x089F92B4u);
    // nop
    goto L_089F9520;
L_089F92B4:
    ctx.set_gpr(2, 0u < ctx.gpr[2] ? 1u : 0u);
    ctx.set_gpr(31, rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(12)));
    ctx.set_gpr(29, ctx.gpr[29] + static_cast<std::uint32_t>(16));
    jump_target = ctx.gpr[31];
    // nop
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_089F92C8:
    ctx.set_gpr(29, ctx.gpr[29] + static_cast<std::uint32_t>(-16));
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(12), ctx.gpr[31]);
    ctx.set_gpr(31, 0x089F92D8u);
    // nop
    goto L_089F9310;
L_089F92D8:
    ctx.set_gpr(2, 0u < ctx.gpr[2] ? 1u : 0u);
    ctx.set_gpr(31, rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(12)));
    ctx.set_gpr(29, ctx.gpr[29] + static_cast<std::uint32_t>(16));
    jump_target = ctx.gpr[31];
    // nop
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_089F92EC:
    ctx.set_gpr(29, ctx.gpr[29] + static_cast<std::uint32_t>(-16));
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(12), ctx.gpr[31]);
    ctx.set_gpr(31, 0x089F92FCu);
    // nop
    goto L_089F96E0;
L_089F92FC:
    ctx.set_gpr(2, 0u < ctx.gpr[2] ? 1u : 0u);
    ctx.set_gpr(31, rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(12)));
    ctx.set_gpr(29, ctx.gpr[29] + static_cast<std::uint32_t>(16));
    jump_target = ctx.gpr[31];
    // nop
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_089F9310:
    ctx.set_gpr(29, ctx.gpr[29] + static_cast<std::uint32_t>(-144));
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(12), ctx.gpr[31]);
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(8), ctx.gpr[16]);
    ctx.set_gpr(16, ctx.gpr[5] + 0u);
    ctx.set_gpr(5, ctx.gpr[29] + static_cast<std::uint32_t>(48));
    ctx.set_gpr(31, 0x089F932Cu);
    // nop
    goto L_089F9100;
L_089F932C:
    ctx.set_gpr(7, 0u + static_cast<std::uint32_t>(255));
    ctx.set_gpr(6, 0u + 0u);
    ctx.set_gpr(5, 0u + 0u);
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_089F93D0;
      }
      goto L_089F9340;
    }
L_089F9340:
    ctx.set_gpr(2, ctx.gpr[5] << 1u);
    ctx.set_gpr(2, ctx.gpr[2] + ctx.gpr[5]);
    ctx.set_gpr(4, ctx.gpr[2] << 2u);
    ctx.set_gpr(2, ctx.gpr[5] << 2u);
    ctx.set_gpr(2, ctx.gpr[2] + ctx.gpr[29]);
    ctx.set_gpr(3, ctx.gpr[2] + static_cast<std::uint32_t>(16));
    ctx.set_gpr(2, ctx.gpr[4] + ctx.gpr[29]);
    ctx.fpr[1] = std::bit_cast<float>(rt.memory().aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(8)));
    ctx.fpr[0] = std::bit_cast<float>(rt.memory().aot_load32(ctx.gpr[2] + static_cast<std::uint32_t>(48)));
    { const float fs = ctx.fpr[1]; const float ft = ctx.fpr[0]; if ((std::isinf(fs) && ft == 0.0f) || (std::isinf(ft) && fs == 0.0f)) ctx.set_fpr_bits(2, 0x7FC00000u); else ctx.fpr[2] = fs * ft; }
    ctx.fpr[1] = std::bit_cast<float>(rt.memory().aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(12)));
    ctx.fpr[0] = std::bit_cast<float>(rt.memory().aot_load32(ctx.gpr[2] + static_cast<std::uint32_t>(52)));
    { const float fs = ctx.fpr[1]; const float ft = ctx.fpr[0]; if ((std::isinf(fs) && ft == 0.0f) || (std::isinf(ft) && fs == 0.0f)) ctx.set_fpr_bits(0, 0x7FC00000u); else ctx.fpr[0] = fs * ft; }
    ctx.fpr[2] = ctx.fpr[2] + ctx.fpr[0];
    ctx.fpr[1] = std::bit_cast<float>(rt.memory().aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(16)));
    ctx.fpr[0] = std::bit_cast<float>(rt.memory().aot_load32(ctx.gpr[2] + static_cast<std::uint32_t>(56)));
    { const float fs = ctx.fpr[1]; const float ft = ctx.fpr[0]; if ((std::isinf(fs) && ft == 0.0f) || (std::isinf(ft) && fs == 0.0f)) ctx.set_fpr_bits(0, 0x7FC00000u); else ctx.fpr[0] = fs * ft; }
    ctx.fpr[1] = ctx.fpr[0] + ctx.fpr[2];
    ctx.fpr[0] = std::bit_cast<float>(rt.memory().aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(20)));
    ctx.fpr[1] = ctx.fpr[1] - ctx.fpr[0];
    rt.memory().aot_store32(ctx.gpr[3] + static_cast<std::uint32_t>(0), std::bit_cast<std::uint32_t>(ctx.fpr[1]));
    ctx.fpr[0] = std::bit_cast<float>(0u);
    ctx.set_fpu_condition((ctx.fpr[1] <= ctx.fpr[0]));
    // nop
    { const bool branch_taken = !ctx.fpu_condition();
    // nop
      if (branch_taken) {
          goto L_089F93BC;
      }
      goto L_089F93A8;
    }
L_089F93A8:
    ctx.set_gpr(2, 0u + static_cast<std::uint32_t>(1));
    ctx.set_gpr(2, ctx.gpr[2] << (ctx.gpr[5] & 31u));
    ctx.set_gpr(6, ctx.gpr[6] | ctx.gpr[2]);
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_089F93CC;
      }
      goto L_089F93BC;
    }
L_089F93BC:
    ctx.set_gpr(2, 0u + static_cast<std::uint32_t>(1));
    ctx.set_gpr(2, ctx.gpr[2] << (ctx.gpr[5] & 31u));
    ctx.set_gpr(2, ~(ctx.gpr[2] | 0u));
    ctx.set_gpr(7, ctx.gpr[7] & ctx.gpr[2]);
    goto L_089F93CC;
L_089F93CC:
    ctx.set_gpr(5, ctx.gpr[5] + static_cast<std::uint32_t>(1));
    goto L_089F93D0;
L_089F93D0:
    ctx.set_gpr(2, ctx.gpr[5] < static_cast<std::uint32_t>(8) ? 1u : 0u);
    { const bool branch_taken = ctx.gpr[2] != 0u;
    // nop
      if (branch_taken) {
          goto L_089F9340;
      }
      goto L_089F93DC;
    }
L_089F93DC:
    ctx.set_gpr(2, 0u + static_cast<std::uint32_t>(255));
    { const bool branch_taken = ctx.gpr[6] != ctx.gpr[2];
    // nop
      if (branch_taken) {
          goto L_089F93F4;
      }
      goto L_089F93E8;
    }
L_089F93E8:
    ctx.set_gpr(2, 0u + static_cast<std::uint32_t>(2));
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_089F940C;
      }
      goto L_089F93F4;
    }
L_089F93F4:
    { const bool branch_taken = ctx.gpr[7] != 0u;
    // nop
      if (branch_taken) {
          goto L_089F9408;
      }
      goto L_089F93FC;
    }
L_089F93FC:
    ctx.set_gpr(2, 0u + 0u);
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_089F940C;
      }
      goto L_089F9408;
    }
L_089F9408:
    ctx.set_gpr(2, 0u + static_cast<std::uint32_t>(1));
    goto L_089F940C;
L_089F940C:
    ctx.set_gpr(31, rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(12)));
    ctx.set_gpr(16, rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(8)));
    ctx.set_gpr(29, ctx.gpr[29] + static_cast<std::uint32_t>(144));
    jump_target = ctx.gpr[31];
    // nop
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_089F9420:
    ctx.set_gpr(9, 0u + 0u);
    ctx.set_gpr(8, 0u + static_cast<std::uint32_t>(63));
    ctx.set_gpr(7, 0u + 0u);
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_089F94DC;
      }
      goto L_089F9434;
    }
L_089F9434:
    ctx.set_gpr(6, 0u + 0u);
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_089F94CC;
      }
      goto L_089F9440;
    }
L_089F9440:
    ctx.set_gpr(2, ctx.gpr[6] << 2u);
    ctx.set_gpr(2, ctx.gpr[2] + ctx.gpr[4]);
    ctx.set_gpr(3, rt.memory().aot_load32(ctx.gpr[2] + static_cast<std::uint32_t>(8)));
    ctx.set_gpr(2, ctx.gpr[7] << 1u);
    ctx.set_gpr(2, ctx.gpr[2] + ctx.gpr[7]);
    ctx.set_gpr(2, ctx.gpr[2] << 2u);
    ctx.set_gpr(2, ctx.gpr[5] + ctx.gpr[2]);
    ctx.fpr[1] = std::bit_cast<float>(rt.memory().aot_load32(ctx.gpr[3] + static_cast<std::uint32_t>(8)));
    ctx.fpr[0] = std::bit_cast<float>(rt.memory().aot_load32(ctx.gpr[2] + static_cast<std::uint32_t>(0)));
    { const float fs = ctx.fpr[1]; const float ft = ctx.fpr[0]; if ((std::isinf(fs) && ft == 0.0f) || (std::isinf(ft) && fs == 0.0f)) ctx.set_fpr_bits(2, 0x7FC00000u); else ctx.fpr[2] = fs * ft; }
    ctx.fpr[1] = std::bit_cast<float>(rt.memory().aot_load32(ctx.gpr[3] + static_cast<std::uint32_t>(12)));
    ctx.fpr[0] = std::bit_cast<float>(rt.memory().aot_load32(ctx.gpr[2] + static_cast<std::uint32_t>(4)));
    { const float fs = ctx.fpr[1]; const float ft = ctx.fpr[0]; if ((std::isinf(fs) && ft == 0.0f) || (std::isinf(ft) && fs == 0.0f)) ctx.set_fpr_bits(0, 0x7FC00000u); else ctx.fpr[0] = fs * ft; }
    ctx.fpr[2] = ctx.fpr[2] + ctx.fpr[0];
    ctx.fpr[1] = std::bit_cast<float>(rt.memory().aot_load32(ctx.gpr[3] + static_cast<std::uint32_t>(16)));
    ctx.fpr[0] = std::bit_cast<float>(rt.memory().aot_load32(ctx.gpr[2] + static_cast<std::uint32_t>(8)));
    { const float fs = ctx.fpr[1]; const float ft = ctx.fpr[0]; if ((std::isinf(fs) && ft == 0.0f) || (std::isinf(ft) && fs == 0.0f)) ctx.set_fpr_bits(0, 0x7FC00000u); else ctx.fpr[0] = fs * ft; }
    ctx.fpr[1] = ctx.fpr[0] + ctx.fpr[2];
    ctx.fpr[0] = std::bit_cast<float>(rt.memory().aot_load32(ctx.gpr[3] + static_cast<std::uint32_t>(20)));
    ctx.fpr[1] = ctx.fpr[1] - ctx.fpr[0];
    ctx.fpr[0] = std::bit_cast<float>(0u);
    ctx.set_fpu_condition((ctx.fpr[1] <= ctx.fpr[0]));
    // nop
    { const bool branch_taken = !ctx.fpu_condition();
    // nop
      if (branch_taken) {
          goto L_089F94B8;
      }
      goto L_089F94A4;
    }
L_089F94A4:
    ctx.set_gpr(2, 0u + static_cast<std::uint32_t>(1));
    ctx.set_gpr(2, ctx.gpr[2] << (ctx.gpr[6] & 31u));
    ctx.set_gpr(9, ctx.gpr[9] | ctx.gpr[2]);
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_089F94C8;
      }
      goto L_089F94B8;
    }
L_089F94B8:
    ctx.set_gpr(2, 0u + static_cast<std::uint32_t>(1));
    ctx.set_gpr(2, ctx.gpr[2] << (ctx.gpr[6] & 31u));
    ctx.set_gpr(2, ~(ctx.gpr[2] | 0u));
    ctx.set_gpr(8, ctx.gpr[8] & ctx.gpr[2]);
    goto L_089F94C8;
L_089F94C8:
    ctx.set_gpr(6, ctx.gpr[6] + static_cast<std::uint32_t>(1));
    goto L_089F94CC;
L_089F94CC:
    ctx.set_gpr(2, ctx.gpr[6] < static_cast<std::uint32_t>(6) ? 1u : 0u);
    { const bool branch_taken = ctx.gpr[2] != 0u;
    // nop
      if (branch_taken) {
          goto L_089F9440;
      }
      goto L_089F94D8;
    }
L_089F94D8:
    ctx.set_gpr(7, ctx.gpr[7] + static_cast<std::uint32_t>(1));
    goto L_089F94DC;
L_089F94DC:
    ctx.set_gpr(2, ctx.gpr[7] < static_cast<std::uint32_t>(8) ? 1u : 0u);
    { const bool branch_taken = ctx.gpr[2] != 0u;
    // nop
      if (branch_taken) {
          goto L_089F9434;
      }
      goto L_089F94E8;
    }
L_089F94E8:
    ctx.set_gpr(2, 0u + static_cast<std::uint32_t>(63));
    { const bool branch_taken = ctx.gpr[8] != ctx.gpr[2];
    // nop
      if (branch_taken) {
          goto L_089F9500;
      }
      goto L_089F94F4;
    }
L_089F94F4:
    ctx.set_gpr(2, 0u + static_cast<std::uint32_t>(2));
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_089F9518;
      }
      goto L_089F9500;
    }
L_089F9500:
    { const bool branch_taken = ctx.gpr[9] == ctx.gpr[2];
    // nop
      if (branch_taken) {
          goto L_089F9514;
      }
      goto L_089F9508;
    }
L_089F9508:
    ctx.set_gpr(2, 0u + 0u);
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_089F9518;
      }
      goto L_089F9514;
    }
L_089F9514:
    ctx.set_gpr(2, 0u + static_cast<std::uint32_t>(1));
    goto L_089F9518;
L_089F9518:
    jump_target = ctx.gpr[31];
    // nop
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_089F9520:
    ctx.set_gpr(29, ctx.gpr[29] + static_cast<std::uint32_t>(-112));
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(12), ctx.gpr[31]);
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(8), ctx.gpr[16]);
    ctx.set_gpr(16, ctx.gpr[4] + 0u);
    ctx.set_gpr(4, ctx.gpr[5] + 0u);
    ctx.fpr[1] = std::bit_cast<float>(rt.memory().aot_load32(ctx.gpr[5] + static_cast<std::uint32_t>(8)));
    ctx.fpr[0] = std::bit_cast<float>(rt.memory().aot_load32(ctx.gpr[5] + static_cast<std::uint32_t>(20)));
    ctx.set_fpu_condition(((std::isnan(ctx.fpr[1]) || std::isnan(ctx.fpr[0])) || ctx.fpr[1] <= ctx.fpr[0]));
    ctx.set_gpr(2, 0u + static_cast<std::uint32_t>(1));
    { const bool branch_taken = !ctx.fpu_condition();
    // nop
      if (branch_taken) {
          goto L_089F9550;
      }
      goto L_089F954C;
    }
L_089F954C:
    ctx.set_gpr(2, 0u + 0u);
    goto L_089F9550;
L_089F9550:
    { const bool branch_taken = ctx.gpr[2] != 0u;
    // nop
      if (branch_taken) {
          goto L_089F9574;
      }
      goto L_089F9558;
    }
L_089F9558:
    ctx.fpr[1] = std::bit_cast<float>(rt.memory().aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(12)));
    ctx.fpr[0] = std::bit_cast<float>(rt.memory().aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(24)));
    ctx.set_fpu_condition(((std::isnan(ctx.fpr[1]) || std::isnan(ctx.fpr[0])) || ctx.fpr[1] <= ctx.fpr[0]));
    ctx.set_gpr(2, 0u + static_cast<std::uint32_t>(1));
    { const bool branch_taken = !ctx.fpu_condition();
    // nop
      if (branch_taken) {
          goto L_089F9574;
      }
      goto L_089F9570;
    }
L_089F9570:
    ctx.set_gpr(2, 0u + 0u);
    goto L_089F9574;
L_089F9574:
    { const bool branch_taken = ctx.gpr[2] != 0u;
    // nop
      if (branch_taken) {
          goto L_089F9598;
      }
      goto L_089F957C;
    }
L_089F957C:
    ctx.fpr[1] = std::bit_cast<float>(rt.memory().aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(16)));
    ctx.fpr[0] = std::bit_cast<float>(rt.memory().aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(28)));
    ctx.set_fpu_condition(((std::isnan(ctx.fpr[1]) || std::isnan(ctx.fpr[0])) || ctx.fpr[1] <= ctx.fpr[0]));
    ctx.set_gpr(2, 0u + static_cast<std::uint32_t>(1));
    { const bool branch_taken = !ctx.fpu_condition();
    // nop
      if (branch_taken) {
          goto L_089F9598;
      }
      goto L_089F9594;
    }
L_089F9594:
    ctx.set_gpr(2, 0u + 0u);
    goto L_089F9598;
L_089F9598:
    { const bool branch_taken = ctx.gpr[2] == 0u;
    // nop
      if (branch_taken) {
          goto L_089F95AC;
      }
      goto L_089F95A0;
    }
L_089F95A0:
    ctx.set_gpr(2, 0u + 0u);
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_089F95C8;
      }
      goto L_089F95AC;
    }
L_089F95AC:
    ctx.set_gpr(5, ctx.gpr[29] + static_cast<std::uint32_t>(16));
    ctx.set_gpr(31, 0x089F95B8u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0124_entry, 124u, 685u, 0x089F7C54u>(ctx, &aot_mem) && ctx.pc == 0x089F95B8u) goto L_089F95B8;
    return;
L_089F95B8:
    ctx.set_gpr(4, ctx.gpr[16] + 0u);
    ctx.set_gpr(5, ctx.gpr[29] + static_cast<std::uint32_t>(16));
    ctx.set_gpr(31, 0x089F95C8u);
    // nop
    goto L_089F9420;
L_089F95C8:
    ctx.set_gpr(31, rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(12)));
    ctx.set_gpr(16, rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(8)));
    ctx.set_gpr(29, ctx.gpr[29] + static_cast<std::uint32_t>(112));
    jump_target = ctx.gpr[31];
    // nop
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_089F95DC:
    ctx.set_gpr(29, ctx.gpr[29] + static_cast<std::uint32_t>(-112));
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(12), ctx.gpr[31]);
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(8), ctx.gpr[16]);
    ctx.set_gpr(16, ctx.gpr[4] + 0u);
    ctx.set_gpr(4, ctx.gpr[5] + 0u);
    ctx.set_gpr(5, ctx.gpr[29] + static_cast<std::uint32_t>(16));
    ctx.set_gpr(31, 0x089F95FCu);
    // nop
    goto L_089F9100;
L_089F95FC:
    ctx.set_gpr(4, ctx.gpr[16] + 0u);
    ctx.set_gpr(5, ctx.gpr[29] + static_cast<std::uint32_t>(16));
    ctx.set_gpr(31, 0x089F960Cu);
    // nop
    goto L_089F9420;
L_089F960C:
    ctx.set_gpr(31, rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(12)));
    ctx.set_gpr(16, rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(8)));
    ctx.set_gpr(29, ctx.gpr[29] + static_cast<std::uint32_t>(112));
    jump_target = ctx.gpr[31];
    // nop
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_089F9620:
    ctx.set_gpr(29, ctx.gpr[29] + static_cast<std::uint32_t>(-32));
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(28), ctx.gpr[31]);
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(24), ctx.gpr[19]);
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(20), ctx.gpr[18]);
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(16), ctx.gpr[17]);
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(12), ctx.gpr[16]);
    ctx.set_gpr(19, ctx.gpr[4] + 0u);
    ctx.set_gpr(18, ctx.gpr[5] + 0u);
    ctx.fpr[1] = std::bit_cast<float>(rt.memory().aot_load32(ctx.gpr[5] + static_cast<std::uint32_t>(20)));
    ctx.fpr[0] = std::bit_cast<float>(0u);
    ctx.set_fpu_condition((ctx.fpr[1] < ctx.fpr[0]));
    // nop
    { const bool branch_taken = !ctx.fpu_condition();
    // nop
      if (branch_taken) {
          goto L_089F9664;
      }
      goto L_089F9658;
    }
L_089F9658:
    ctx.set_gpr(2, 0u + 0u);
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_089F96C0;
      }
      goto L_089F9664;
    }
L_089F9664:
    ctx.set_gpr(4, rt.memory().aot_load32(ctx.gpr[19] + static_cast<std::uint32_t>(8)));
    ctx.set_gpr(31, 0x089F9670u);
    // nop
    goto L_089FB9D0;
L_089F9670:
    ctx.set_gpr(17, ctx.gpr[2] + 0u);
    ctx.set_gpr(16, 0u + static_cast<std::uint32_t>(1));
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_089F96B0;
      }
      goto L_089F9680;
    }
L_089F9680:
    ctx.set_gpr(2, ctx.gpr[16] << 2u);
    ctx.set_gpr(2, ctx.gpr[2] + ctx.gpr[19]);
    ctx.set_gpr(4, rt.memory().aot_load32(ctx.gpr[2] + static_cast<std::uint32_t>(8)));
    ctx.set_gpr(5, ctx.gpr[18] + 0u);
    ctx.set_gpr(31, 0x089F9698u);
    // nop
    goto L_089FB9D0;
L_089F9698:
    { const bool branch_taken = ctx.gpr[2] == ctx.gpr[17];
    // nop
      if (branch_taken) {
          goto L_089F96AC;
      }
      goto L_089F96A0;
    }
L_089F96A0:
    ctx.set_gpr(2, 0u + static_cast<std::uint32_t>(1));
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_089F96C0;
      }
      goto L_089F96AC;
    }
L_089F96AC:
    ctx.set_gpr(16, ctx.gpr[16] + static_cast<std::uint32_t>(1));
    goto L_089F96B0;
L_089F96B0:
    ctx.set_gpr(2, static_cast<std::int32_t>(ctx.gpr[16]) < 6 ? 1u : 0u);
    { const bool branch_taken = ctx.gpr[2] != 0u;
    // nop
      if (branch_taken) {
          goto L_089F9680;
      }
      goto L_089F96BC;
    }
L_089F96BC:
    ctx.set_gpr(2, ctx.gpr[17] + 0u);
    goto L_089F96C0;
L_089F96C0:
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
L_089F96E0:
    ctx.set_gpr(29, ctx.gpr[29] + static_cast<std::uint32_t>(-32));
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(12), ctx.gpr[31]);
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(8), ctx.gpr[18]);
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(4), ctx.gpr[17]);
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(0), ctx.gpr[16]);
    ctx.set_gpr(18, ctx.gpr[5] + 0u);
    ctx.set_gpr(17, ctx.gpr[4] + 0u);
    ctx.set_gpr(5, ctx.gpr[18] + static_cast<std::uint32_t>(8));
    ctx.set_gpr(31, 0x089F9708u);
    // nop
    goto L_089F97D0;
L_089F9708:
    ctx.set_gpr(16, 0u < ctx.gpr[2] ? 1u : 0u);
    ctx.fpr[2] = std::bit_cast<float>(rt.memory().aot_load32(ctx.gpr[18] + static_cast<std::uint32_t>(32)));
    ctx.fpr[1] = std::bit_cast<float>(rt.memory().aot_load32(ctx.gpr[18] + static_cast<std::uint32_t>(8)));
    ctx.fpr[0] = std::bit_cast<float>(rt.memory().aot_load32(ctx.gpr[18] + static_cast<std::uint32_t>(20)));
    { const float fs = ctx.fpr[2]; const float ft = ctx.fpr[0]; if ((std::isinf(fs) && ft == 0.0f) || (std::isinf(ft) && fs == 0.0f)) ctx.set_fpr_bits(0, 0x7FC00000u); else ctx.fpr[0] = fs * ft; }
    ctx.fpr[0] = ctx.fpr[1] + ctx.fpr[0];
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(20), std::bit_cast<std::uint32_t>(ctx.fpr[0]));
    ctx.fpr[1] = std::bit_cast<float>(rt.memory().aot_load32(ctx.gpr[18] + static_cast<std::uint32_t>(12)));
    ctx.fpr[0] = std::bit_cast<float>(rt.memory().aot_load32(ctx.gpr[18] + static_cast<std::uint32_t>(24)));
    { const float fs = ctx.fpr[2]; const float ft = ctx.fpr[0]; if ((std::isinf(fs) && ft == 0.0f) || (std::isinf(ft) && fs == 0.0f)) ctx.set_fpr_bits(0, 0x7FC00000u); else ctx.fpr[0] = fs * ft; }
    ctx.fpr[0] = ctx.fpr[1] + ctx.fpr[0];
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(24), std::bit_cast<std::uint32_t>(ctx.fpr[0]));
    ctx.fpr[1] = std::bit_cast<float>(rt.memory().aot_load32(ctx.gpr[18] + static_cast<std::uint32_t>(16)));
    ctx.fpr[0] = std::bit_cast<float>(rt.memory().aot_load32(ctx.gpr[18] + static_cast<std::uint32_t>(28)));
    { const float fs = ctx.fpr[2]; const float ft = ctx.fpr[0]; if ((std::isinf(fs) && ft == 0.0f) || (std::isinf(ft) && fs == 0.0f)) ctx.set_fpr_bits(0, 0x7FC00000u); else ctx.fpr[0] = fs * ft; }
    ctx.fpr[0] = ctx.fpr[1] + ctx.fpr[0];
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(28), std::bit_cast<std::uint32_t>(ctx.fpr[0]));
    ctx.set_gpr(4, ctx.gpr[17] + 0u);
    ctx.set_gpr(5, ctx.gpr[29] + static_cast<std::uint32_t>(20));
    ctx.set_gpr(31, 0x089F975Cu);
    // nop
    goto L_089F97D0;
L_089F975C:
    ctx.set_gpr(2, 0u < ctx.gpr[2] ? 1u : 0u);
    { const bool branch_taken = ctx.gpr[16] == 0u;
    // nop
      if (branch_taken) {
          goto L_089F977C;
      }
      goto L_089F9768;
    }
L_089F9768:
    { const bool branch_taken = ctx.gpr[2] == 0u;
    // nop
      if (branch_taken) {
          goto L_089F977C;
      }
      goto L_089F9770;
    }
L_089F9770:
    ctx.set_gpr(2, 0u + static_cast<std::uint32_t>(2));
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_089F97B4;
      }
      goto L_089F977C;
    }
L_089F977C:
    { const bool branch_taken = ctx.gpr[16] != 0u;
    // nop
      if (branch_taken) {
          goto L_089F97A4;
      }
      goto L_089F9784;
    }
L_089F9784:
    { const bool branch_taken = ctx.gpr[2] != 0u;
    // nop
      if (branch_taken) {
          goto L_089F97A4;
      }
      goto L_089F978C;
    }
L_089F978C:
    ctx.set_gpr(4, ctx.gpr[17] + 0u);
    ctx.set_gpr(5, ctx.gpr[18] + 0u);
    ctx.set_gpr(31, 0x089F979Cu);
    // nop
    goto L_089F92EC;
L_089F979C:
    { const bool branch_taken = ctx.gpr[2] == 0u;
    // nop
      if (branch_taken) {
          goto L_089F97B0;
      }
      goto L_089F97A4;
    }
L_089F97A4:
    ctx.set_gpr(2, 0u + static_cast<std::uint32_t>(1));
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_089F97B4;
      }
      goto L_089F97B0;
    }
L_089F97B0:
    ctx.set_gpr(2, 0u + 0u);
    goto L_089F97B4;
L_089F97B4:
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
L_089F97D0:
    ctx.set_gpr(6, 0u + 0u);
    ctx.set_gpr(3, 0u + 0u);
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_089F9844;
      }
      goto L_089F97E0;
    }
L_089F97E0:
    ctx.set_gpr(2, ctx.gpr[3] << 2u);
    ctx.set_gpr(2, ctx.gpr[2] + ctx.gpr[4]);
    ctx.set_gpr(2, rt.memory().aot_load32(ctx.gpr[2] + static_cast<std::uint32_t>(8)));
    ctx.fpr[1] = std::bit_cast<float>(rt.memory().aot_load32(ctx.gpr[2] + static_cast<std::uint32_t>(8)));
    ctx.fpr[0] = std::bit_cast<float>(rt.memory().aot_load32(ctx.gpr[5] + static_cast<std::uint32_t>(0)));
    { const float fs = ctx.fpr[1]; const float ft = ctx.fpr[0]; if ((std::isinf(fs) && ft == 0.0f) || (std::isinf(ft) && fs == 0.0f)) ctx.set_fpr_bits(2, 0x7FC00000u); else ctx.fpr[2] = fs * ft; }
    ctx.fpr[1] = std::bit_cast<float>(rt.memory().aot_load32(ctx.gpr[2] + static_cast<std::uint32_t>(12)));
    ctx.fpr[0] = std::bit_cast<float>(rt.memory().aot_load32(ctx.gpr[5] + static_cast<std::uint32_t>(4)));
    { const float fs = ctx.fpr[1]; const float ft = ctx.fpr[0]; if ((std::isinf(fs) && ft == 0.0f) || (std::isinf(ft) && fs == 0.0f)) ctx.set_fpr_bits(0, 0x7FC00000u); else ctx.fpr[0] = fs * ft; }
    ctx.fpr[2] = ctx.fpr[2] + ctx.fpr[0];
    ctx.fpr[1] = std::bit_cast<float>(rt.memory().aot_load32(ctx.gpr[2] + static_cast<std::uint32_t>(16)));
    ctx.fpr[0] = std::bit_cast<float>(rt.memory().aot_load32(ctx.gpr[5] + static_cast<std::uint32_t>(8)));
    { const float fs = ctx.fpr[1]; const float ft = ctx.fpr[0]; if ((std::isinf(fs) && ft == 0.0f) || (std::isinf(ft) && fs == 0.0f)) ctx.set_fpr_bits(0, 0x7FC00000u); else ctx.fpr[0] = fs * ft; }
    ctx.fpr[1] = ctx.fpr[0] + ctx.fpr[2];
    ctx.fpr[0] = std::bit_cast<float>(rt.memory().aot_load32(ctx.gpr[2] + static_cast<std::uint32_t>(20)));
    ctx.fpr[1] = ctx.fpr[1] - ctx.fpr[0];
    ctx.fpr[0] = std::bit_cast<float>(0u);
    ctx.set_fpu_condition((ctx.fpr[1] <= ctx.fpr[0]));
    // nop
    { const bool branch_taken = !ctx.fpu_condition();
    // nop
      if (branch_taken) {
          goto L_089F9840;
      }
      goto L_089F9834;
    }
L_089F9834:
    ctx.set_gpr(2, 0u + static_cast<std::uint32_t>(1));
    ctx.set_gpr(2, ctx.gpr[2] << (ctx.gpr[3] & 31u));
    ctx.set_gpr(6, ctx.gpr[6] | ctx.gpr[2]);
    goto L_089F9840;
L_089F9840:
    ctx.set_gpr(3, ctx.gpr[3] + static_cast<std::uint32_t>(1));
    goto L_089F9844;
L_089F9844:
    ctx.set_gpr(2, ctx.gpr[3] < static_cast<std::uint32_t>(6) ? 1u : 0u);
    { const bool branch_taken = ctx.gpr[2] != 0u;
    // nop
      if (branch_taken) {
          goto L_089F97E0;
      }
      goto L_089F9850;
    }
L_089F9850:
    ctx.set_gpr(2, 0u + static_cast<std::uint32_t>(63));
    { const bool branch_taken = ctx.gpr[6] == ctx.gpr[2];
    // nop
      if (branch_taken) {
          goto L_089F9868;
      }
      goto L_089F985C;
    }
L_089F985C:
    ctx.set_gpr(2, 0u + 0u);
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_089F986C;
      }
      goto L_089F9868;
    }
L_089F9868:
    ctx.set_gpr(2, 0u + static_cast<std::uint32_t>(2));
    goto L_089F986C;
L_089F986C:
    jump_target = ctx.gpr[31];
    // nop
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_089F9874:
    ctx.set_gpr(29, ctx.gpr[29] + static_cast<std::uint32_t>(-32));
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(12), ctx.gpr[31]);
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(8), ctx.gpr[17]);
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(4), ctx.gpr[16]);
    ctx.set_gpr(17, ctx.gpr[5] + 0u);
    ctx.set_gpr(16, ctx.gpr[4] + 0u);
    ctx.set_gpr(5, ctx.gpr[17] + static_cast<std::uint32_t>(8));
    ctx.set_gpr(31, 0x089F9898u);
    // nop
    goto L_089F9A94;
L_089F9898:
    ctx.fpr[2] = std::bit_cast<float>(rt.memory().aot_load32(ctx.gpr[17] + static_cast<std::uint32_t>(32)));
    ctx.fpr[1] = std::bit_cast<float>(rt.memory().aot_load32(ctx.gpr[17] + static_cast<std::uint32_t>(8)));
    ctx.fpr[0] = std::bit_cast<float>(rt.memory().aot_load32(ctx.gpr[17] + static_cast<std::uint32_t>(20)));
    { const float fs = ctx.fpr[2]; const float ft = ctx.fpr[0]; if ((std::isinf(fs) && ft == 0.0f) || (std::isinf(ft) && fs == 0.0f)) ctx.set_fpr_bits(0, 0x7FC00000u); else ctx.fpr[0] = fs * ft; }
    ctx.fpr[0] = ctx.fpr[1] + ctx.fpr[0];
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(20), std::bit_cast<std::uint32_t>(ctx.fpr[0]));
    ctx.fpr[1] = std::bit_cast<float>(rt.memory().aot_load32(ctx.gpr[17] + static_cast<std::uint32_t>(12)));
    ctx.fpr[0] = std::bit_cast<float>(rt.memory().aot_load32(ctx.gpr[17] + static_cast<std::uint32_t>(24)));
    { const float fs = ctx.fpr[2]; const float ft = ctx.fpr[0]; if ((std::isinf(fs) && ft == 0.0f) || (std::isinf(ft) && fs == 0.0f)) ctx.set_fpr_bits(0, 0x7FC00000u); else ctx.fpr[0] = fs * ft; }
    ctx.fpr[0] = ctx.fpr[1] + ctx.fpr[0];
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(24), std::bit_cast<std::uint32_t>(ctx.fpr[0]));
    ctx.fpr[1] = std::bit_cast<float>(rt.memory().aot_load32(ctx.gpr[17] + static_cast<std::uint32_t>(16)));
    ctx.fpr[0] = std::bit_cast<float>(rt.memory().aot_load32(ctx.gpr[17] + static_cast<std::uint32_t>(28)));
    { const float fs = ctx.fpr[2]; const float ft = ctx.fpr[0]; if ((std::isinf(fs) && ft == 0.0f) || (std::isinf(ft) && fs == 0.0f)) ctx.set_fpr_bits(0, 0x7FC00000u); else ctx.fpr[0] = fs * ft; }
    ctx.fpr[0] = ctx.fpr[1] + ctx.fpr[0];
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(28), std::bit_cast<std::uint32_t>(ctx.fpr[0]));
    ctx.set_gpr(4, ctx.gpr[16] + 0u);
    ctx.set_gpr(5, ctx.gpr[29] + static_cast<std::uint32_t>(20));
    ctx.set_gpr(31, 0x089F98E8u);
    // nop
    goto L_089F9A94;
L_089F98E8:
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
L_089F9900:
    ctx.set_gpr(29, ctx.gpr[29] + static_cast<std::uint32_t>(-16));
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(12), ctx.gpr[31]);
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(8), ctx.gpr[18]);
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(4), ctx.gpr[17]);
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(0), ctx.gpr[16]);
    ctx.set_gpr(18, ctx.gpr[4] + 0u);
    ctx.set_gpr(17, ctx.gpr[5] + 0u);
    ctx.set_gpr(16, 0u + 0u);
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_089F9944;
      }
      goto L_089F9928;
    }
L_089F9928:
    ctx.set_gpr(2, ctx.gpr[16] << 2u);
    ctx.set_gpr(2, ctx.gpr[2] + ctx.gpr[18]);
    ctx.set_gpr(4, rt.memory().aot_load32(ctx.gpr[2] + static_cast<std::uint32_t>(8)));
    ctx.set_gpr(5, ctx.gpr[17] + 0u);
    ctx.set_gpr(31, 0x089F9940u);
    // nop
    goto L_089FBBE8;
L_089F9940:
    ctx.set_gpr(16, ctx.gpr[16] + static_cast<std::uint32_t>(1));
    goto L_089F9944;
L_089F9944:
    ctx.set_gpr(3, ctx.gpr[16] < static_cast<std::uint32_t>(6) ? 1u : 0u);
    { const bool branch_taken = ctx.gpr[3] != 0u;
    // nop
      if (branch_taken) {
          goto L_089F9928;
      }
      goto L_089F9950;
    }
L_089F9950:
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
L_089F996C:
    ctx.set_gpr(29, ctx.gpr[29] + static_cast<std::uint32_t>(-112));
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(12), ctx.gpr[31]);
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(8), ctx.gpr[18]);
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(4), ctx.gpr[17]);
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(0), ctx.gpr[16]);
    ctx.set_gpr(18, ctx.gpr[4] + 0u);
    ctx.set_gpr(4, ctx.gpr[5] + 0u);
    ctx.set_gpr(5, ctx.gpr[29] + static_cast<std::uint32_t>(16));
    ctx.set_gpr(31, 0x089F9994u);
    // nop
    goto L_089F9100;
L_089F9994:
    ctx.set_gpr(17, 0u + 0u);
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_089F99E8;
      }
      goto L_089F99A0;
    }
L_089F99A0:
    ctx.set_gpr(16, 0u + 0u);
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_089F99D8;
      }
      goto L_089F99AC;
    }
L_089F99AC:
    ctx.set_gpr(2, ctx.gpr[17] << 2u);
    ctx.set_gpr(3, ctx.gpr[2] + ctx.gpr[18]);
    ctx.set_gpr(2, ctx.gpr[16] << 1u);
    ctx.set_gpr(2, ctx.gpr[2] + ctx.gpr[16]);
    ctx.set_gpr(2, ctx.gpr[2] << 2u);
    ctx.set_gpr(2, ctx.gpr[2] + ctx.gpr[29]);
    ctx.set_gpr(4, rt.memory().aot_load32(ctx.gpr[3] + static_cast<std::uint32_t>(8)));
    ctx.set_gpr(5, ctx.gpr[2] + static_cast<std::uint32_t>(16));
    ctx.set_gpr(31, 0x089F99D4u);
    // nop
    goto L_089FBB94;
L_089F99D4:
    ctx.set_gpr(16, ctx.gpr[16] + static_cast<std::uint32_t>(1));
    goto L_089F99D8;
L_089F99D8:
    ctx.set_gpr(3, ctx.gpr[16] < static_cast<std::uint32_t>(8) ? 1u : 0u);
    { const bool branch_taken = ctx.gpr[3] != 0u;
    // nop
      if (branch_taken) {
          goto L_089F99AC;
      }
      goto L_089F99E4;
    }
L_089F99E4:
    ctx.set_gpr(17, ctx.gpr[17] + static_cast<std::uint32_t>(1));
    goto L_089F99E8;
L_089F99E8:
    ctx.set_gpr(3, ctx.gpr[17] < static_cast<std::uint32_t>(6) ? 1u : 0u);
    { const bool branch_taken = ctx.gpr[3] != 0u;
    // nop
      if (branch_taken) {
          goto L_089F99A0;
      }
      goto L_089F99F4;
    }
L_089F99F4:
    ctx.set_gpr(31, rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(12)));
    ctx.set_gpr(18, rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(8)));
    ctx.set_gpr(17, rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(4)));
    ctx.set_gpr(16, rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(0)));
    ctx.set_gpr(29, ctx.gpr[29] + static_cast<std::uint32_t>(112));
    jump_target = ctx.gpr[31];
    // nop
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_089F9A10:
    ctx.set_gpr(29, ctx.gpr[29] + static_cast<std::uint32_t>(-16));
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(12), ctx.gpr[31]);
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(8), ctx.gpr[18]);
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(4), ctx.gpr[17]);
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(0), ctx.gpr[16]);
    ctx.set_gpr(18, ctx.gpr[4] + 0u);
    ctx.set_gpr(17, ctx.gpr[5] + 0u);
    ctx.fpr[1] = std::bit_cast<float>(rt.memory().aot_load32(ctx.gpr[5] + static_cast<std::uint32_t>(20)));
    ctx.fpr[0] = std::bit_cast<float>(0u);
    ctx.set_fpu_condition((ctx.fpr[1] < ctx.fpr[0]));
    // nop
    { const bool branch_taken = ctx.fpu_condition();
    // nop
      if (branch_taken) {
          goto L_089F9A78;
      }
      goto L_089F9A44;
    }
L_089F9A44:
    ctx.set_gpr(16, 0u + 0u);
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_089F9A6C;
      }
      goto L_089F9A50;
    }
L_089F9A50:
    ctx.set_gpr(2, ctx.gpr[16] << 2u);
    ctx.set_gpr(2, ctx.gpr[2] + ctx.gpr[18]);
    ctx.set_gpr(4, rt.memory().aot_load32(ctx.gpr[2] + static_cast<std::uint32_t>(8)));
    ctx.set_gpr(5, ctx.gpr[17] + 0u);
    ctx.set_gpr(31, 0x089F9A68u);
    // nop
    goto L_089FBC9C;
L_089F9A68:
    ctx.set_gpr(16, ctx.gpr[16] + static_cast<std::uint32_t>(1));
    goto L_089F9A6C;
L_089F9A6C:
    ctx.set_gpr(3, ctx.gpr[16] < static_cast<std::uint32_t>(6) ? 1u : 0u);
    { const bool branch_taken = ctx.gpr[3] != 0u;
    // nop
      if (branch_taken) {
          goto L_089F9A50;
      }
      goto L_089F9A78;
    }
L_089F9A78:
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
L_089F9A94:
    ctx.set_gpr(29, ctx.gpr[29] + static_cast<std::uint32_t>(-16));
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(12), ctx.gpr[31]);
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(8), ctx.gpr[18]);
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(4), ctx.gpr[17]);
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(0), ctx.gpr[16]);
    ctx.set_gpr(18, ctx.gpr[4] + 0u);
    ctx.set_gpr(17, ctx.gpr[5] + 0u);
    ctx.set_gpr(16, 0u + 0u);
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_089F9AD8;
      }
      goto L_089F9ABC;
    }
L_089F9ABC:
    ctx.set_gpr(2, ctx.gpr[16] << 2u);
    ctx.set_gpr(2, ctx.gpr[2] + ctx.gpr[18]);
    ctx.set_gpr(4, rt.memory().aot_load32(ctx.gpr[2] + static_cast<std::uint32_t>(8)));
    ctx.set_gpr(5, ctx.gpr[17] + 0u);
    ctx.set_gpr(31, 0x089F9AD4u);
    // nop
    goto L_089FBB94;
L_089F9AD4:
    ctx.set_gpr(16, ctx.gpr[16] + static_cast<std::uint32_t>(1));
    goto L_089F9AD8;
L_089F9AD8:
    ctx.set_gpr(3, ctx.gpr[16] < static_cast<std::uint32_t>(6) ? 1u : 0u);
    { const bool branch_taken = ctx.gpr[3] != 0u;
    // nop
      if (branch_taken) {
          goto L_089F9ABC;
      }
      goto L_089F9AE4;
    }
L_089F9AE4:
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
L_089F9B00:
    ctx.set_gpr(29, ctx.gpr[29] + static_cast<std::uint32_t>(-16));
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(12), ctx.gpr[31]);
    ctx.set_gpr(31, 0x089F9B10u);
    // nop
    goto L_089F91F0;
L_089F9B10:
    ctx.set_gpr(31, rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(12)));
    ctx.set_gpr(29, ctx.gpr[29] + static_cast<std::uint32_t>(16));
    jump_target = ctx.gpr[31];
    // nop
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_089F9B20:
    ctx.set_gpr(29, ctx.gpr[29] + static_cast<std::uint32_t>(-96));
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(12), ctx.gpr[31]);
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(8), ctx.gpr[16]);
    ctx.set_gpr(16, ctx.gpr[4] + 0u);
    ctx.set_gpr(2, 16256u << 16u);
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(84), ctx.gpr[2]);
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(88), 0u);
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(92), 0u);
    ctx.set_gpr(4, rt.memory().aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(8)));
    ctx.set_gpr(5, ctx.gpr[29] + static_cast<std::uint32_t>(84));
    ctx.fpr[12] = std::bit_cast<float>(rt.memory().aot_load32(ctx.gpr[28] + static_cast<std::uint32_t>(-32508)));
    ctx.set_gpr(31, 0x089F9B54u);
    // nop
    goto L_089FAF0C;
L_089F9B54:
    ctx.set_gpr(2, 49024u << 16u);
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(72), ctx.gpr[2]);
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(76), 0u);
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(80), 0u);
    ctx.set_gpr(4, rt.memory().aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(12)));
    ctx.set_gpr(5, ctx.gpr[29] + static_cast<std::uint32_t>(72));
    ctx.fpr[12] = std::bit_cast<float>(rt.memory().aot_load32(ctx.gpr[28] + static_cast<std::uint32_t>(-32508)));
    ctx.set_gpr(31, 0x089F9B78u);
    // nop
    goto L_089FAF0C;
L_089F9B78:
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(60), 0u);
    ctx.set_gpr(2, 16256u << 16u);
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(64), ctx.gpr[2]);
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(68), 0u);
    ctx.set_gpr(4, rt.memory().aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(16)));
    ctx.set_gpr(5, ctx.gpr[29] + static_cast<std::uint32_t>(60));
    ctx.fpr[12] = std::bit_cast<float>(rt.memory().aot_load32(ctx.gpr[28] + static_cast<std::uint32_t>(-32508)));
    ctx.set_gpr(31, 0x089F9B9Cu);
    // nop
    goto L_089FAF0C;
L_089F9B9C:
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(48), 0u);
    ctx.set_gpr(2, 49024u << 16u);
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(52), ctx.gpr[2]);
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(56), 0u);
    ctx.set_gpr(4, rt.memory().aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(20)));
    ctx.set_gpr(5, ctx.gpr[29] + static_cast<std::uint32_t>(48));
    ctx.fpr[12] = std::bit_cast<float>(rt.memory().aot_load32(ctx.gpr[28] + static_cast<std::uint32_t>(-32508)));
    ctx.set_gpr(31, 0x089F9BC0u);
    // nop
    goto L_089FAF0C;
L_089F9BC0:
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(36), 0u);
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(40), 0u);
    ctx.set_gpr(2, 16256u << 16u);
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(44), ctx.gpr[2]);
    ctx.set_gpr(4, rt.memory().aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(24)));
    ctx.set_gpr(5, ctx.gpr[29] + static_cast<std::uint32_t>(36));
    ctx.fpr[12] = std::bit_cast<float>(rt.memory().aot_load32(ctx.gpr[28] + static_cast<std::uint32_t>(-32508)));
    ctx.set_gpr(31, 0x089F9BE4u);
    // nop
    goto L_089FAF0C;
L_089F9BE4:
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(24), 0u);
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(28), 0u);
    ctx.set_gpr(2, 49024u << 16u);
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(32), ctx.gpr[2]);
    ctx.set_gpr(4, rt.memory().aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(28)));
    ctx.set_gpr(5, ctx.gpr[29] + static_cast<std::uint32_t>(24));
    ctx.fpr[12] = std::bit_cast<float>(rt.memory().aot_load32(ctx.gpr[28] + static_cast<std::uint32_t>(-32508)));
    ctx.set_gpr(31, 0x089F9C08u);
    // nop
    goto L_089FAF0C;
L_089F9C08:
    ctx.set_gpr(31, rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(12)));
    ctx.set_gpr(16, rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(8)));
    ctx.set_gpr(29, ctx.gpr[29] + static_cast<std::uint32_t>(96));
    jump_target = ctx.gpr[31];
    // nop
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_089F9C1C:
    ctx.set_gpr(2, 0u + 0u);
    jump_target = ctx.gpr[31];
    // nop
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_089F9C28:
    ctx.set_gpr(29, ctx.gpr[29] + static_cast<std::uint32_t>(-192));
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(44), ctx.gpr[31]);
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(40), ctx.gpr[22]);
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(36), ctx.gpr[21]);
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(32), ctx.gpr[20]);
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(28), ctx.gpr[19]);
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(24), ctx.gpr[18]);
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(20), ctx.gpr[17]);
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(16), ctx.gpr[16]);
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(8), std::bit_cast<std::uint32_t>(ctx.fpr[20]));
    ctx.set_gpr(20, ctx.gpr[4] + 0u);
    ctx.set_gpr(19, ctx.gpr[5] + 0u);
    ctx.set_gpr(18, ctx.gpr[6] + 0u);
    ctx.set_gpr(21, ctx.gpr[7] + 0u);
    ctx.set_gpr(17, ctx.gpr[8] + 0u);
    ctx.set_gpr(16, ctx.gpr[9] + 0u);
    ctx.set_gpr(22, ctx.gpr[10] + 0u);
    ctx.fpr[0] = std::bit_cast<float>(rt.memory().aot_load32(ctx.gpr[6] + static_cast<std::uint32_t>(0)));
    ctx.fpr[3] = std::bit_cast<float>(rt.memory().aot_load32(ctx.gpr[5] + static_cast<std::uint32_t>(0)));
    ctx.fpr[0] = ctx.fpr[0] - ctx.fpr[3];
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(180), std::bit_cast<std::uint32_t>(ctx.fpr[0]));
    ctx.fpr[0] = std::bit_cast<float>(rt.memory().aot_load32(ctx.gpr[6] + static_cast<std::uint32_t>(4)));
    ctx.fpr[2] = std::bit_cast<float>(rt.memory().aot_load32(ctx.gpr[5] + static_cast<std::uint32_t>(4)));
    ctx.fpr[0] = ctx.fpr[0] - ctx.fpr[2];
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(184), std::bit_cast<std::uint32_t>(ctx.fpr[0]));
    ctx.fpr[0] = std::bit_cast<float>(rt.memory().aot_load32(ctx.gpr[6] + static_cast<std::uint32_t>(8)));
    ctx.fpr[1] = std::bit_cast<float>(rt.memory().aot_load32(ctx.gpr[5] + static_cast<std::uint32_t>(8)));
    ctx.fpr[0] = ctx.fpr[0] - ctx.fpr[1];
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(188), std::bit_cast<std::uint32_t>(ctx.fpr[0]));
    ctx.fpr[0] = std::bit_cast<float>(rt.memory().aot_load32(ctx.gpr[7] + static_cast<std::uint32_t>(0)));
    ctx.fpr[0] = ctx.fpr[0] - ctx.fpr[3];
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(168), std::bit_cast<std::uint32_t>(ctx.fpr[0]));
    ctx.fpr[0] = std::bit_cast<float>(rt.memory().aot_load32(ctx.gpr[7] + static_cast<std::uint32_t>(4)));
    ctx.fpr[0] = ctx.fpr[0] - ctx.fpr[2];
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(172), std::bit_cast<std::uint32_t>(ctx.fpr[0]));
    ctx.fpr[0] = std::bit_cast<float>(rt.memory().aot_load32(ctx.gpr[7] + static_cast<std::uint32_t>(8)));
    ctx.fpr[0] = ctx.fpr[0] - ctx.fpr[1];
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(176), std::bit_cast<std::uint32_t>(ctx.fpr[0]));
    ctx.set_gpr(4, ctx.gpr[16] + 0u);
    ctx.set_gpr(5, ctx.gpr[29] + static_cast<std::uint32_t>(180));
    ctx.set_gpr(6, ctx.gpr[29] + static_cast<std::uint32_t>(168));
    ctx.set_gpr(31, 0x089F9CD4u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0127_entry, 127u, 206u, 0x08A02C7Cu>(ctx, &aot_mem) && ctx.pc == 0x089F9CD4u) goto L_089F9CD4;
    return;
L_089F9CD4:
    ctx.set_gpr(4, 0u + 0u);
    ctx.set_gpr(3, 0u + 0u);
    ctx.fpr[1] = std::bit_cast<float>(rt.memory().aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(0)));
    ctx.set_gpr(2, 2226u << 16u);
    ctx.fpr[0] = std::bit_cast<float>(rt.memory().aot_load32(ctx.gpr[2] + static_cast<std::uint32_t>(-27776)));
    ctx.set_fpu_condition((!(std::isnan(ctx.fpr[1]) || std::isnan(ctx.fpr[0])) && ctx.fpr[1] == ctx.fpr[0]));
    // nop
    { const bool branch_taken = !ctx.fpu_condition();
    // nop
      if (branch_taken) {
          goto L_089F9D18;
      }
      goto L_089F9CF8;
    }
L_089F9CF8:
    ctx.fpr[1] = std::bit_cast<float>(rt.memory().aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(4)));
    ctx.set_gpr(2, 2226u << 16u);
    ctx.fpr[0] = std::bit_cast<float>(rt.memory().aot_load32(ctx.gpr[2] + static_cast<std::uint32_t>(-27772)));
    ctx.set_fpu_condition((!(std::isnan(ctx.fpr[1]) || std::isnan(ctx.fpr[0])) && ctx.fpr[1] == ctx.fpr[0]));
    // nop
    { const bool branch_taken = !ctx.fpu_condition();
    // nop
      if (branch_taken) {
          goto L_089F9D18;
      }
      goto L_089F9D14;
    }
L_089F9D14:
    ctx.set_gpr(3, 0u + static_cast<std::uint32_t>(1));
    goto L_089F9D18;
L_089F9D18:
    { const bool branch_taken = ctx.gpr[3] == 0u;
    // nop
      if (branch_taken) {
          goto L_089F9D40;
      }
      goto L_089F9D20;
    }
L_089F9D20:
    ctx.fpr[1] = std::bit_cast<float>(rt.memory().aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(8)));
    ctx.set_gpr(2, 2226u << 16u);
    ctx.fpr[0] = std::bit_cast<float>(rt.memory().aot_load32(ctx.gpr[2] + static_cast<std::uint32_t>(-27768)));
    ctx.set_fpu_condition((!(std::isnan(ctx.fpr[1]) || std::isnan(ctx.fpr[0])) && ctx.fpr[1] == ctx.fpr[0]));
    // nop
    { const bool branch_taken = !ctx.fpu_condition();
    // nop
      if (branch_taken) {
          goto L_089F9D40;
      }
      goto L_089F9D3C;
    }
L_089F9D3C:
    ctx.set_gpr(4, 0u + static_cast<std::uint32_t>(1));
    goto L_089F9D40;
L_089F9D40:
    { const bool branch_taken = ctx.gpr[4] == 0u;
    // nop
      if (branch_taken) {
          goto L_089F9D58;
      }
      goto L_089F9D48;
    }
L_089F9D48:
    ctx.set_gpr(2, 49024u << 16u);
    ctx.fpr[0] = std::bit_cast<float>(ctx.gpr[2]);
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_089FA14C;
      }
      goto L_089F9D58;
    }
L_089F9D58:
    ctx.fpr[3] = std::bit_cast<float>(rt.memory().aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(4)));
    ctx.fpr[0] = std::bit_cast<float>(rt.memory().aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(0)));
    ctx.fpr[2] = std::bit_cast<float>(rt.memory().aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(8)));
    { const float fs = ctx.fpr[0]; const float ft = ctx.fpr[0]; if ((std::isinf(fs) && ft == 0.0f) || (std::isinf(ft) && fs == 0.0f)) ctx.set_fpr_bits(1, 0x7FC00000u); else ctx.fpr[1] = fs * ft; }
    { const float fs = ctx.fpr[3]; const float ft = ctx.fpr[3]; if ((std::isinf(fs) && ft == 0.0f) || (std::isinf(ft) && fs == 0.0f)) ctx.set_fpr_bits(0, 0x7FC00000u); else ctx.fpr[0] = fs * ft; }
    ctx.fpr[1] = ctx.fpr[1] + ctx.fpr[0];
    { const float fs = ctx.fpr[2]; const float ft = ctx.fpr[2]; if ((std::isinf(fs) && ft == 0.0f) || (std::isinf(ft) && fs == 0.0f)) ctx.set_fpr_bits(0, 0x7FC00000u); else ctx.fpr[0] = fs * ft; }
    ctx.fpr[0] = ctx.fpr[0] + ctx.fpr[1];
    ctx.fpr[1] = std::sqrt(ctx.fpr[0]);
    ctx.set_gpr(2, 16256u << 16u);
    ctx.fpr[0] = std::bit_cast<float>(ctx.gpr[2]);
    ctx.fpr[1] = ctx.fpr[0] / ctx.fpr[1];
    ctx.fpr[0] = std::bit_cast<float>(rt.memory().aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(0)));
    { const float fs = ctx.fpr[0]; const float ft = ctx.fpr[1]; if ((std::isinf(fs) && ft == 0.0f) || (std::isinf(ft) && fs == 0.0f)) ctx.set_fpr_bits(0, 0x7FC00000u); else ctx.fpr[0] = fs * ft; }
    rt.memory().aot_store32(ctx.gpr[16] + static_cast<std::uint32_t>(0), std::bit_cast<std::uint32_t>(ctx.fpr[0]));
    ctx.fpr[0] = std::bit_cast<float>(rt.memory().aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(4)));
    { const float fs = ctx.fpr[0]; const float ft = ctx.fpr[1]; if ((std::isinf(fs) && ft == 0.0f) || (std::isinf(ft) && fs == 0.0f)) ctx.set_fpr_bits(0, 0x7FC00000u); else ctx.fpr[0] = fs * ft; }
    rt.memory().aot_store32(ctx.gpr[16] + static_cast<std::uint32_t>(4), std::bit_cast<std::uint32_t>(ctx.fpr[0]));
    ctx.fpr[0] = std::bit_cast<float>(rt.memory().aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(8)));
    { const float fs = ctx.fpr[0]; const float ft = ctx.fpr[1]; if ((std::isinf(fs) && ft == 0.0f) || (std::isinf(ft) && fs == 0.0f)) ctx.set_fpr_bits(0, 0x7FC00000u); else ctx.fpr[0] = fs * ft; }
    rt.memory().aot_store32(ctx.gpr[16] + static_cast<std::uint32_t>(8), std::bit_cast<std::uint32_t>(ctx.fpr[0]));
    ctx.fpr[1] = std::bit_cast<float>(rt.memory().aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(0)));
    ctx.fpr[0] = std::bit_cast<float>(rt.memory().aot_load32(ctx.gpr[20] + static_cast<std::uint32_t>(20)));
    { const float fs = ctx.fpr[1]; const float ft = ctx.fpr[0]; if ((std::isinf(fs) && ft == 0.0f) || (std::isinf(ft) && fs == 0.0f)) ctx.set_fpr_bits(2, 0x7FC00000u); else ctx.fpr[2] = fs * ft; }
    ctx.fpr[1] = std::bit_cast<float>(rt.memory().aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(4)));
    ctx.fpr[0] = std::bit_cast<float>(rt.memory().aot_load32(ctx.gpr[20] + static_cast<std::uint32_t>(24)));
    { const float fs = ctx.fpr[1]; const float ft = ctx.fpr[0]; if ((std::isinf(fs) && ft == 0.0f) || (std::isinf(ft) && fs == 0.0f)) ctx.set_fpr_bits(0, 0x7FC00000u); else ctx.fpr[0] = fs * ft; }
    ctx.fpr[2] = ctx.fpr[2] + ctx.fpr[0];
    ctx.fpr[1] = std::bit_cast<float>(rt.memory().aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(8)));
    ctx.fpr[0] = std::bit_cast<float>(rt.memory().aot_load32(ctx.gpr[20] + static_cast<std::uint32_t>(28)));
    { const float fs = ctx.fpr[1]; const float ft = ctx.fpr[0]; if ((std::isinf(fs) && ft == 0.0f) || (std::isinf(ft) && fs == 0.0f)) ctx.set_fpr_bits(0, 0x7FC00000u); else ctx.fpr[0] = fs * ft; }
    ctx.fpr[5] = ctx.fpr[0] + ctx.fpr[2];
    ctx.fpr[0] = std::bit_cast<float>(0u);
    ctx.fpr[0] = ctx.fpr[5] - ctx.fpr[0];
    ctx.set_fpr_bits(1, ctx.fpr_bits(0) & 0x7FFFFFFFu);
    ctx.fpr[0] = std::bit_cast<float>(rt.memory().aot_load32(ctx.gpr[28] + static_cast<std::uint32_t>(-32416)));
    ctx.set_fpu_condition((ctx.fpr[1] <= ctx.fpr[0]));
    // nop
    { const bool branch_taken = ctx.fpu_condition();
    // nop
      if (branch_taken) {
          goto L_089F9E68;
      }
      goto L_089F9DF8;
    }
L_089F9DF8:
    ctx.set_gpr(2, 0u + static_cast<std::uint32_t>(2));
    { const bool branch_taken = ctx.gpr[22] == ctx.gpr[2];
    // nop
      if (branch_taken) {
          goto L_089F9E78;
      }
      goto L_089F9E04;
    }
L_089F9E04:
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(60), std::bit_cast<std::uint32_t>(ctx.fpr[5]));
    ctx.set_gpr(2, rt.memory().aot_load8(ctx.gpr[29] + static_cast<std::uint32_t>(63)));
    ctx.set_gpr(2, ctx.gpr[2] << 24u);
    ctx.set_gpr(2, ctx.gpr[2] >> 31u);
    ctx.set_gpr(2, 0u < ctx.gpr[2] ? 1u : 0u);
    ctx.set_gpr(2, ctx.gpr[2] & 255u);
    ctx.set_gpr(2, 0u < ctx.gpr[2] ? 1u : 0u);
    ctx.set_gpr(2, ctx.gpr[2] ^ 1u);
    { const bool branch_taken = ctx.gpr[2] == 0u;
    // nop
      if (branch_taken) {
          goto L_089F9E34;
      }
      goto L_089F9E2C;
    }
L_089F9E2C:
    { const bool branch_taken = ctx.gpr[22] == 0u;
    // nop
      if (branch_taken) {
          goto L_089F9E68;
      }
      goto L_089F9E34;
    }
L_089F9E34:
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(80), std::bit_cast<std::uint32_t>(ctx.fpr[5]));
    ctx.set_gpr(2, rt.memory().aot_load8(ctx.gpr[29] + static_cast<std::uint32_t>(83)));
    ctx.set_gpr(2, ctx.gpr[2] << 24u);
    ctx.set_gpr(2, ctx.gpr[2] >> 31u);
    { const bool branch_taken = ctx.gpr[2] == 0u;
    // nop
      if (branch_taken) {
          goto L_089F9E58;
      }
      goto L_089F9E4C;
    }
L_089F9E4C:
    ctx.set_gpr(2, 0u + static_cast<std::uint32_t>(1));
    { const bool branch_taken = ctx.gpr[22] == ctx.gpr[2];
    // nop
      if (branch_taken) {
          goto L_089F9E68;
      }
      goto L_089F9E58;
    }
L_089F9E58:
    ctx.set_fpu_condition((!(std::isnan(ctx.fpr[5]) || std::isnan(ctx.fpr[5])) && ctx.fpr[5] == ctx.fpr[5]));
    // nop
    { const bool branch_taken = ctx.fpu_condition();
    // nop
      if (branch_taken) {
          goto L_089F9E78;
      }
      goto L_089F9E68;
    }
L_089F9E68:
    ctx.set_gpr(2, 49152u << 16u);
    ctx.fpr[0] = std::bit_cast<float>(ctx.gpr[2]);
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_089FA14C;
      }
      goto L_089F9E78;
    }
L_089F9E78:
    ctx.fpr[1] = std::bit_cast<float>(rt.memory().aot_load32(ctx.gpr[20] + static_cast<std::uint32_t>(16)));
    ctx.fpr[0] = std::bit_cast<float>(rt.memory().aot_load32(ctx.gpr[19] + static_cast<std::uint32_t>(8)));
    ctx.fpr[4] = ctx.fpr[1] - ctx.fpr[0];
    ctx.fpr[1] = std::bit_cast<float>(rt.memory().aot_load32(ctx.gpr[20] + static_cast<std::uint32_t>(12)));
    ctx.fpr[0] = std::bit_cast<float>(rt.memory().aot_load32(ctx.gpr[19] + static_cast<std::uint32_t>(4)));
    ctx.fpr[3] = ctx.fpr[1] - ctx.fpr[0];
    ctx.fpr[2] = std::bit_cast<float>(rt.memory().aot_load32(ctx.gpr[20] + static_cast<std::uint32_t>(8)));
    ctx.fpr[0] = std::bit_cast<float>(rt.memory().aot_load32(ctx.gpr[19] + static_cast<std::uint32_t>(0)));
    ctx.fpr[1] = ctx.fpr[2] - ctx.fpr[0];
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(84), std::bit_cast<std::uint32_t>(ctx.fpr[1]));
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(88), std::bit_cast<std::uint32_t>(ctx.fpr[3]));
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(92), std::bit_cast<std::uint32_t>(ctx.fpr[4]));
    ctx.fpr[0] = std::bit_cast<float>(rt.memory().aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(0)));
    { const float fs = ctx.fpr[0]; const float ft = ctx.fpr[1]; if ((std::isinf(fs) && ft == 0.0f) || (std::isinf(ft) && fs == 0.0f)) ctx.set_fpr_bits(1, 0x7FC00000u); else ctx.fpr[1] = fs * ft; }
    ctx.fpr[0] = std::bit_cast<float>(rt.memory().aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(4)));
    { const float fs = ctx.fpr[0]; const float ft = ctx.fpr[3]; if ((std::isinf(fs) && ft == 0.0f) || (std::isinf(ft) && fs == 0.0f)) ctx.set_fpr_bits(0, 0x7FC00000u); else ctx.fpr[0] = fs * ft; }
    ctx.fpr[1] = ctx.fpr[1] + ctx.fpr[0];
    ctx.fpr[0] = std::bit_cast<float>(rt.memory().aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(8)));
    { const float fs = ctx.fpr[0]; const float ft = ctx.fpr[4]; if ((std::isinf(fs) && ft == 0.0f) || (std::isinf(ft) && fs == 0.0f)) ctx.set_fpr_bits(0, 0x7FC00000u); else ctx.fpr[0] = fs * ft; }
    ctx.fpr[0] = ctx.fpr[0] + ctx.fpr[1];
    ctx.set_fpr_bits(0, ctx.fpr_bits(0) ^ 0x80000000u);
    ctx.fpr[20] = ctx.fpr[0] / ctx.fpr[5];
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(76), std::bit_cast<std::uint32_t>(ctx.fpr[20]));
    ctx.set_gpr(2, rt.memory().aot_load8(ctx.gpr[29] + static_cast<std::uint32_t>(79)));
    ctx.set_gpr(2, ctx.gpr[2] << 24u);
    ctx.set_gpr(2, ctx.gpr[2] >> 31u);
    { const bool branch_taken = ctx.gpr[2] != 0u;
    // nop
      if (branch_taken) {
          goto L_089F9EFC;
      }
      goto L_089F9EE8;
    }
L_089F9EE8:
    ctx.fpr[0] = std::bit_cast<float>(rt.memory().aot_load32(ctx.gpr[20] + static_cast<std::uint32_t>(32)));
    ctx.set_fpu_condition(((std::isnan(ctx.fpr[20]) || std::isnan(ctx.fpr[0])) || ctx.fpr[20] <= ctx.fpr[0]));
    // nop
    { const bool branch_taken = ctx.fpu_condition();
    // nop
      if (branch_taken) {
          goto L_089F9F0C;
      }
      goto L_089F9EFC;
    }
L_089F9EFC:
    ctx.set_gpr(2, 49216u << 16u);
    ctx.fpr[0] = std::bit_cast<float>(ctx.gpr[2]);
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_089FA14C;
      }
      goto L_089F9F0C;
    }
L_089F9F0C:
    ctx.fpr[0] = std::bit_cast<float>(rt.memory().aot_load32(ctx.gpr[20] + static_cast<std::uint32_t>(20)));
    { const float fs = ctx.fpr[20]; const float ft = ctx.fpr[0]; if ((std::isinf(fs) && ft == 0.0f) || (std::isinf(ft) && fs == 0.0f)) ctx.set_fpr_bits(0, 0x7FC00000u); else ctx.fpr[0] = fs * ft; }
    ctx.fpr[0] = ctx.fpr[2] + ctx.fpr[0];
    rt.memory().aot_store32(ctx.gpr[17] + static_cast<std::uint32_t>(0), std::bit_cast<std::uint32_t>(ctx.fpr[0]));
    ctx.fpr[0] = std::bit_cast<float>(rt.memory().aot_load32(ctx.gpr[20] + static_cast<std::uint32_t>(24)));
    { const float fs = ctx.fpr[20]; const float ft = ctx.fpr[0]; if ((std::isinf(fs) && ft == 0.0f) || (std::isinf(ft) && fs == 0.0f)) ctx.set_fpr_bits(1, 0x7FC00000u); else ctx.fpr[1] = fs * ft; }
    ctx.fpr[0] = std::bit_cast<float>(rt.memory().aot_load32(ctx.gpr[20] + static_cast<std::uint32_t>(12)));
    ctx.fpr[0] = ctx.fpr[0] + ctx.fpr[1];
    rt.memory().aot_store32(ctx.gpr[17] + static_cast<std::uint32_t>(4), std::bit_cast<std::uint32_t>(ctx.fpr[0]));
    ctx.fpr[0] = std::bit_cast<float>(rt.memory().aot_load32(ctx.gpr[20] + static_cast<std::uint32_t>(28)));
    { const float fs = ctx.fpr[20]; const float ft = ctx.fpr[0]; if ((std::isinf(fs) && ft == 0.0f) || (std::isinf(ft) && fs == 0.0f)) ctx.set_fpr_bits(1, 0x7FC00000u); else ctx.fpr[1] = fs * ft; }
    ctx.fpr[0] = std::bit_cast<float>(rt.memory().aot_load32(ctx.gpr[20] + static_cast<std::uint32_t>(16)));
    ctx.fpr[0] = ctx.fpr[0] + ctx.fpr[1];
    rt.memory().aot_store32(ctx.gpr[17] + static_cast<std::uint32_t>(8), std::bit_cast<std::uint32_t>(ctx.fpr[0]));
    ctx.fpr[0] = std::bit_cast<float>(rt.memory().aot_load32(ctx.gpr[19] + static_cast<std::uint32_t>(0)));
    ctx.fpr[3] = std::bit_cast<float>(rt.memory().aot_load32(ctx.gpr[17] + static_cast<std::uint32_t>(0)));
    ctx.fpr[0] = ctx.fpr[0] - ctx.fpr[3];
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(156), std::bit_cast<std::uint32_t>(ctx.fpr[0]));
    ctx.fpr[0] = std::bit_cast<float>(rt.memory().aot_load32(ctx.gpr[19] + static_cast<std::uint32_t>(4)));
    ctx.fpr[2] = std::bit_cast<float>(rt.memory().aot_load32(ctx.gpr[17] + static_cast<std::uint32_t>(4)));
    ctx.fpr[0] = ctx.fpr[0] - ctx.fpr[2];
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(160), std::bit_cast<std::uint32_t>(ctx.fpr[0]));
    ctx.fpr[0] = std::bit_cast<float>(rt.memory().aot_load32(ctx.gpr[19] + static_cast<std::uint32_t>(8)));
    ctx.fpr[1] = std::bit_cast<float>(rt.memory().aot_load32(ctx.gpr[17] + static_cast<std::uint32_t>(8)));
    ctx.fpr[0] = ctx.fpr[0] - ctx.fpr[1];
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(164), std::bit_cast<std::uint32_t>(ctx.fpr[0]));
    ctx.fpr[0] = std::bit_cast<float>(rt.memory().aot_load32(ctx.gpr[18] + static_cast<std::uint32_t>(0)));
    ctx.fpr[0] = ctx.fpr[0] - ctx.fpr[3];
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(144), std::bit_cast<std::uint32_t>(ctx.fpr[0]));
    ctx.fpr[0] = std::bit_cast<float>(rt.memory().aot_load32(ctx.gpr[18] + static_cast<std::uint32_t>(4)));
    ctx.fpr[0] = ctx.fpr[0] - ctx.fpr[2];
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(148), std::bit_cast<std::uint32_t>(ctx.fpr[0]));
    ctx.fpr[0] = std::bit_cast<float>(rt.memory().aot_load32(ctx.gpr[18] + static_cast<std::uint32_t>(8)));
    ctx.fpr[0] = ctx.fpr[0] - ctx.fpr[1];
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(152), std::bit_cast<std::uint32_t>(ctx.fpr[0]));
    ctx.fpr[0] = std::bit_cast<float>(rt.memory().aot_load32(ctx.gpr[21] + static_cast<std::uint32_t>(0)));
    ctx.fpr[0] = ctx.fpr[0] - ctx.fpr[3];
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(132), std::bit_cast<std::uint32_t>(ctx.fpr[0]));
    ctx.fpr[0] = std::bit_cast<float>(rt.memory().aot_load32(ctx.gpr[21] + static_cast<std::uint32_t>(4)));
    ctx.fpr[0] = ctx.fpr[0] - ctx.fpr[2];
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(136), std::bit_cast<std::uint32_t>(ctx.fpr[0]));
    ctx.fpr[0] = std::bit_cast<float>(rt.memory().aot_load32(ctx.gpr[21] + static_cast<std::uint32_t>(8)));
    ctx.fpr[0] = ctx.fpr[0] - ctx.fpr[1];
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(140), std::bit_cast<std::uint32_t>(ctx.fpr[0]));
    ctx.set_gpr(4, ctx.gpr[29] + static_cast<std::uint32_t>(120));
    ctx.set_gpr(5, ctx.gpr[29] + static_cast<std::uint32_t>(156));
    ctx.set_gpr(6, ctx.gpr[29] + static_cast<std::uint32_t>(144));
    ctx.set_gpr(31, 0x089F9FD0u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0127_entry, 127u, 206u, 0x08A02C7Cu>(ctx, &aot_mem) && ctx.pc == 0x089F9FD0u) goto L_089F9FD0;
    return;
L_089F9FD0:
    ctx.set_gpr(4, ctx.gpr[29] + static_cast<std::uint32_t>(108));
    ctx.set_gpr(5, ctx.gpr[29] + static_cast<std::uint32_t>(144));
    ctx.set_gpr(6, ctx.gpr[29] + static_cast<std::uint32_t>(132));
    ctx.set_gpr(31, 0x089F9FE4u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0127_entry, 127u, 206u, 0x08A02C7Cu>(ctx, &aot_mem) && ctx.pc == 0x089F9FE4u) goto L_089F9FE4;
    return;
L_089F9FE4:
    ctx.set_gpr(4, ctx.gpr[29] + static_cast<std::uint32_t>(96));
    ctx.set_gpr(5, ctx.gpr[29] + static_cast<std::uint32_t>(132));
    ctx.set_gpr(6, ctx.gpr[29] + static_cast<std::uint32_t>(156));
    ctx.set_gpr(31, 0x089F9FF8u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0127_entry, 127u, 206u, 0x08A02C7Cu>(ctx, &aot_mem) && ctx.pc == 0x089F9FF8u) goto L_089F9FF8;
    return;
L_089F9FF8:
    ctx.fpr[6] = std::bit_cast<float>(rt.memory().aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(4)));
    ctx.fpr[5] = std::bit_cast<float>(rt.memory().aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(0)));
    ctx.fpr[4] = std::bit_cast<float>(rt.memory().aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(8)));
    ctx.fpr[0] = std::bit_cast<float>(rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(120)));
    { const float fs = ctx.fpr[0]; const float ft = ctx.fpr[5]; if ((std::isinf(fs) && ft == 0.0f) || (std::isinf(ft) && fs == 0.0f)) ctx.set_fpr_bits(1, 0x7FC00000u); else ctx.fpr[1] = fs * ft; }
    ctx.fpr[0] = std::bit_cast<float>(rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(124)));
    { const float fs = ctx.fpr[0]; const float ft = ctx.fpr[6]; if ((std::isinf(fs) && ft == 0.0f) || (std::isinf(ft) && fs == 0.0f)) ctx.set_fpr_bits(0, 0x7FC00000u); else ctx.fpr[0] = fs * ft; }
    ctx.fpr[1] = ctx.fpr[1] + ctx.fpr[0];
    ctx.fpr[0] = std::bit_cast<float>(rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(128)));
    { const float fs = ctx.fpr[0]; const float ft = ctx.fpr[4]; if ((std::isinf(fs) && ft == 0.0f) || (std::isinf(ft) && fs == 0.0f)) ctx.set_fpr_bits(0, 0x7FC00000u); else ctx.fpr[0] = fs * ft; }
    ctx.fpr[3] = ctx.fpr[0] + ctx.fpr[1];
    ctx.fpr[0] = std::bit_cast<float>(rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(108)));
    { const float fs = ctx.fpr[0]; const float ft = ctx.fpr[5]; if ((std::isinf(fs) && ft == 0.0f) || (std::isinf(ft) && fs == 0.0f)) ctx.set_fpr_bits(1, 0x7FC00000u); else ctx.fpr[1] = fs * ft; }
    ctx.fpr[0] = std::bit_cast<float>(rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(112)));
    { const float fs = ctx.fpr[0]; const float ft = ctx.fpr[6]; if ((std::isinf(fs) && ft == 0.0f) || (std::isinf(ft) && fs == 0.0f)) ctx.set_fpr_bits(0, 0x7FC00000u); else ctx.fpr[0] = fs * ft; }
    ctx.fpr[1] = ctx.fpr[1] + ctx.fpr[0];
    ctx.fpr[0] = std::bit_cast<float>(rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(116)));
    { const float fs = ctx.fpr[0]; const float ft = ctx.fpr[4]; if ((std::isinf(fs) && ft == 0.0f) || (std::isinf(ft) && fs == 0.0f)) ctx.set_fpr_bits(0, 0x7FC00000u); else ctx.fpr[0] = fs * ft; }
    ctx.fpr[2] = ctx.fpr[0] + ctx.fpr[1];
    ctx.fpr[0] = std::bit_cast<float>(rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(96)));
    { const float fs = ctx.fpr[0]; const float ft = ctx.fpr[5]; if ((std::isinf(fs) && ft == 0.0f) || (std::isinf(ft) && fs == 0.0f)) ctx.set_fpr_bits(1, 0x7FC00000u); else ctx.fpr[1] = fs * ft; }
    ctx.fpr[0] = std::bit_cast<float>(rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(100)));
    { const float fs = ctx.fpr[0]; const float ft = ctx.fpr[6]; if ((std::isinf(fs) && ft == 0.0f) || (std::isinf(ft) && fs == 0.0f)) ctx.set_fpr_bits(0, 0x7FC00000u); else ctx.fpr[0] = fs * ft; }
    ctx.fpr[1] = ctx.fpr[1] + ctx.fpr[0];
    ctx.fpr[0] = std::bit_cast<float>(rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(104)));
    { const float fs = ctx.fpr[0]; const float ft = ctx.fpr[4]; if ((std::isinf(fs) && ft == 0.0f) || (std::isinf(ft) && fs == 0.0f)) ctx.set_fpr_bits(0, 0x7FC00000u); else ctx.fpr[0] = fs * ft; }
    ctx.fpr[0] = ctx.fpr[0] + ctx.fpr[1];
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(64), std::bit_cast<std::uint32_t>(ctx.fpr[2]));
    ctx.set_gpr(2, rt.memory().aot_load8(ctx.gpr[29] + static_cast<std::uint32_t>(67)));
    ctx.set_gpr(2, ctx.gpr[2] << 24u);
    ctx.set_gpr(2, ctx.gpr[2] >> 31u);
    ctx.set_gpr(2, 0u < ctx.gpr[2] ? 1u : 0u);
    ctx.set_gpr(5, ctx.gpr[2] & 255u);
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(68), std::bit_cast<std::uint32_t>(ctx.fpr[3]));
    ctx.set_gpr(2, rt.memory().aot_load8(ctx.gpr[29] + static_cast<std::uint32_t>(71)));
    ctx.set_gpr(2, ctx.gpr[2] << 24u);
    ctx.set_gpr(2, ctx.gpr[2] >> 31u);
    ctx.set_gpr(2, 0u < ctx.gpr[2] ? 1u : 0u);
    ctx.set_gpr(4, ctx.gpr[2] & 255u);
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(72), std::bit_cast<std::uint32_t>(ctx.fpr[0]));
    ctx.set_gpr(2, rt.memory().aot_load8(ctx.gpr[29] + static_cast<std::uint32_t>(75)));
    ctx.set_gpr(2, ctx.gpr[2] << 24u);
    ctx.set_gpr(2, ctx.gpr[2] >> 31u);
    ctx.set_gpr(2, 0u < ctx.gpr[2] ? 1u : 0u);
    ctx.set_gpr(3, ctx.gpr[2] & 255u);
    ctx.set_gpr(2, ctx.gpr[4] & ctx.gpr[5]);
    ctx.set_gpr(2, ctx.gpr[3] & ctx.gpr[2]);
    { const bool branch_taken = ctx.gpr[2] != 0u;
    // nop
      if (branch_taken) {
          goto L_089FA138;
      }
      goto L_089FA0BC;
    }
L_089FA0BC:
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(48), std::bit_cast<std::uint32_t>(ctx.fpr[2]));
    ctx.set_gpr(2, rt.memory().aot_load8(ctx.gpr[29] + static_cast<std::uint32_t>(51)));
    ctx.set_gpr(2, ctx.gpr[2] << 24u);
    ctx.set_gpr(2, ctx.gpr[2] >> 31u);
    ctx.set_gpr(2, 0u < ctx.gpr[2] ? 1u : 0u);
    ctx.set_gpr(5, ctx.gpr[2] & 255u);
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(52), std::bit_cast<std::uint32_t>(ctx.fpr[3]));
    ctx.set_gpr(2, rt.memory().aot_load8(ctx.gpr[29] + static_cast<std::uint32_t>(55)));
    ctx.set_gpr(2, ctx.gpr[2] << 24u);
    ctx.set_gpr(2, ctx.gpr[2] >> 31u);
    ctx.set_gpr(2, 0u < ctx.gpr[2] ? 1u : 0u);
    ctx.set_gpr(3, ctx.gpr[2] & 255u);
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(56), std::bit_cast<std::uint32_t>(ctx.fpr[0]));
    ctx.set_gpr(2, rt.memory().aot_load8(ctx.gpr[29] + static_cast<std::uint32_t>(59)));
    ctx.set_gpr(2, ctx.gpr[2] << 24u);
    ctx.set_gpr(2, ctx.gpr[2] >> 31u);
    ctx.set_gpr(2, 0u < ctx.gpr[2] ? 1u : 0u);
    ctx.set_gpr(4, ctx.gpr[2] & 255u);
    ctx.set_gpr(2, 0u < ctx.gpr[3] ? 1u : 0u);
    ctx.set_gpr(2, ctx.gpr[2] ^ 1u);
    ctx.set_gpr(3, ctx.gpr[2] & 255u);
    ctx.set_gpr(2, 0u < ctx.gpr[5] ? 1u : 0u);
    ctx.set_gpr(2, ctx.gpr[2] ^ 1u);
    ctx.set_gpr(2, ctx.gpr[2] & 255u);
    ctx.set_gpr(3, ctx.gpr[3] & ctx.gpr[2]);
    ctx.set_gpr(2, 0u < ctx.gpr[4] ? 1u : 0u);
    ctx.set_gpr(2, ctx.gpr[2] ^ 1u);
    ctx.set_gpr(2, ctx.gpr[2] & 255u);
    ctx.set_gpr(2, ctx.gpr[2] & ctx.gpr[3]);
    { const bool branch_taken = ctx.gpr[2] == 0u;
    // nop
      if (branch_taken) {
          goto L_089FA144;
      }
      goto L_089FA138;
    }
L_089FA138:
    ctx.set_fpr_bits(0, ctx.fpr_bits(20));
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_089FA14C;
      }
      goto L_089FA144;
    }
L_089FA144:
    ctx.set_gpr(2, 49280u << 16u);
    ctx.fpr[0] = std::bit_cast<float>(ctx.gpr[2]);
    goto L_089FA14C;
L_089FA14C:
    ctx.set_gpr(31, rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(44)));
    ctx.set_gpr(22, rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(40)));
    ctx.set_gpr(21, rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(36)));
    ctx.set_gpr(20, rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(32)));
    ctx.set_gpr(19, rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(28)));
    ctx.set_gpr(18, rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(24)));
    ctx.set_gpr(17, rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(20)));
    ctx.set_gpr(16, rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(16)));
    ctx.fpr[20] = std::bit_cast<float>(rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(8)));
    ctx.set_gpr(29, ctx.gpr[29] + static_cast<std::uint32_t>(192));
    jump_target = ctx.gpr[31];
    // nop
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_089FA17C:
    ctx.set_gpr(29, ctx.gpr[29] + static_cast<std::uint32_t>(-16));
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(12), ctx.gpr[31]);
    ctx.set_gpr(31, 0x089FA18Cu);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0126_entry, 126u, 722u, 0x089FF860u>(ctx, &aot_mem) && ctx.pc == 0x089FA18Cu) goto L_089FA18C;
    return;
L_089FA18C:
    ctx.set_gpr(31, 0x089FA194u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0064_entry, 64u, 444u, 0x08905FF0u>(ctx, &aot_mem) && ctx.pc == 0x089FA194u) goto L_089FA194;
    return;
L_089FA194:
    ctx.set_gpr(4, rt.memory().aot_load32(ctx.gpr[2] + static_cast<std::uint32_t>(64)));
    ctx.set_gpr(5, 0u + static_cast<std::uint32_t>(5));
    ctx.set_gpr(6, 2229u << 16u);
    ctx.set_gpr(6, ctx.gpr[6] + static_cast<std::uint32_t>(-10572));
    ctx.set_gpr(7, 2229u << 16u);
    ctx.set_gpr(7, ctx.gpr[7] + static_cast<std::uint32_t>(-10408));
    ctx.set_gpr(2, 2229u << 16u);
    ctx.fpr[12] = std::bit_cast<float>(rt.memory().aot_load32(ctx.gpr[2] + static_cast<std::uint32_t>(-10408)));
    ctx.set_gpr(8, 0u + 0u);
    ctx.set_gpr(31, 0x089FA1C0u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0083_entry, 83u, 677u, 0x08952EF4u>(ctx, &aot_mem) && ctx.pc == 0x089FA1C0u) goto L_089FA1C0;
    return;
L_089FA1C0:
    ctx.set_gpr(31, rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(12)));
    ctx.set_gpr(29, ctx.gpr[29] + static_cast<std::uint32_t>(16));
    jump_target = ctx.gpr[31];
    // nop
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_089FA1D0:
    ctx.set_gpr(29, ctx.gpr[29] + static_cast<std::uint32_t>(-16));
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(12), ctx.gpr[31]);
    ctx.set_gpr(31, 0x089FA1E0u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0123_entry, 123u, 374u, 0x089F2AFCu>(ctx, &aot_mem) && ctx.pc == 0x089FA1E0u) goto L_089FA1E0;
    return;
L_089FA1E0:
    ctx.set_gpr(31, 0x089FA1E8u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0123_entry, 123u, 515u, 0x089F3704u>(ctx, &aot_mem) && ctx.pc == 0x089FA1E8u) goto L_089FA1E8;
    return;
L_089FA1E8:
    ctx.set_gpr(31, 0x089FA1F0u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0124_entry, 124u, 644u, 0x089F7840u>(ctx, &aot_mem) && ctx.pc == 0x089FA1F0u) goto L_089FA1F0;
    return;
L_089FA1F0:
    ctx.set_gpr(31, 0x089FA1F8u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0123_entry, 123u, 436u, 0x089F3034u>(ctx, &aot_mem) && ctx.pc == 0x089FA1F8u) goto L_089FA1F8;
    return;
L_089FA1F8:
    ctx.set_gpr(31, 0x089FA200u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0123_entry, 123u, 467u, 0x089F32E0u>(ctx, &aot_mem) && ctx.pc == 0x089FA200u) goto L_089FA200;
    return;
L_089FA200:
    ctx.set_gpr(31, 0x089FA208u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0060_entry, 60u, 449u, 0x088F6564u>(ctx, &aot_mem) && ctx.pc == 0x089FA208u) goto L_089FA208;
    return;
L_089FA208:
    ctx.set_gpr(31, 0x089FA210u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0061_entry, 61u, 9u, 0x088F80A4u>(ctx, &aot_mem) && ctx.pc == 0x089FA210u) goto L_089FA210;
    return;
L_089FA210:
    ctx.set_gpr(31, 0x089FA218u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0060_entry, 60u, 709u, 0x088F7C04u>(ctx, &aot_mem) && ctx.pc == 0x089FA218u) goto L_089FA218;
    return;
L_089FA218:
    ctx.set_gpr(31, 0x089FA220u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0060_entry, 60u, 670u, 0x088F7854u>(ctx, &aot_mem) && ctx.pc == 0x089FA220u) goto L_089FA220;
    return;
L_089FA220:
    ctx.set_gpr(31, 0x089FA228u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0060_entry, 60u, 615u, 0x088F73ACu>(ctx, &aot_mem) && ctx.pc == 0x089FA228u) goto L_089FA228;
    return;
L_089FA228:
    ctx.set_gpr(31, 0x089FA230u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0061_entry, 61u, 54u, 0x088F84ACu>(ctx, &aot_mem) && ctx.pc == 0x089FA230u) goto L_089FA230;
    return;
L_089FA230:
    ctx.set_gpr(31, 0x089FA238u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0124_entry, 124u, 186u, 0x089F4F40u>(ctx, &aot_mem) && ctx.pc == 0x089FA238u) goto L_089FA238;
    return;
L_089FA238:
    ctx.set_gpr(31, 0x089FA240u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0124_entry, 124u, 217u, 0x089F51FCu>(ctx, &aot_mem) && ctx.pc == 0x089FA240u) goto L_089FA240;
    return;
L_089FA240:
    ctx.set_gpr(31, 0x089FA248u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0124_entry, 124u, 287u, 0x089F5840u>(ctx, &aot_mem) && ctx.pc == 0x089FA248u) goto L_089FA248;
    return;
L_089FA248:
    ctx.set_gpr(31, 0x089FA250u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0124_entry, 124u, 239u, 0x089F5420u>(ctx, &aot_mem) && ctx.pc == 0x089FA250u) goto L_089FA250;
    return;
L_089FA250:
    ctx.set_gpr(31, 0x089FA258u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0124_entry, 124u, 309u, 0x089F5A64u>(ctx, &aot_mem) && ctx.pc == 0x089FA258u) goto L_089FA258;
    return;
L_089FA258:
    ctx.set_gpr(31, rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(12)));
    ctx.set_gpr(29, ctx.gpr[29] + static_cast<std::uint32_t>(16));
    jump_target = ctx.gpr[31];
    // nop
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_089FA268:
    ctx.set_gpr(29, ctx.gpr[29] + static_cast<std::uint32_t>(-592));
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
    ctx.set_gpr(22, ctx.gpr[4] + 0u);
    ctx.set_gpr(21, ctx.gpr[5] + 0u);
    ctx.set_gpr(20, ctx.gpr[6] + 0u);
    ctx.set_gpr(19, ctx.gpr[7] + 0u);
    ctx.set_gpr(18, ctx.gpr[8] + 0u);
    ctx.set_gpr(17, ctx.gpr[22] + 0u);
    ctx.set_gpr(16, 0u + 0u);
    ctx.set_gpr(23, 0u + 0u);
    ctx.set_gpr(30, 0u + 0u);
    { const bool branch_taken = ctx.gpr[22] == 0u;
    // nop
      if (branch_taken) {
          goto L_089FA2D8;
      }
      goto L_089FA2C0;
    }
L_089FA2C0:
    { const bool branch_taken = ctx.gpr[21] == 0u;
    // nop
      if (branch_taken) {
          goto L_089FA2D8;
      }
      goto L_089FA2C8;
    }
L_089FA2C8:
    { const bool branch_taken = ctx.gpr[20] == 0u;
    // nop
      if (branch_taken) {
          goto L_089FA2D8;
      }
      goto L_089FA2D0;
    }
L_089FA2D0:
    { const bool branch_taken = ctx.gpr[19] != 0u;
    // nop
      if (branch_taken) {
          goto L_089FA2E8;
      }
      goto L_089FA2D8;
    }
L_089FA2D8:
    ctx.set_gpr(2, 0u + 0u);
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_089FA72C;
      }
      goto L_089FA2E4;
    }
L_089FA2E4:
    ctx.set_gpr(17, ctx.gpr[17] + static_cast<std::uint32_t>(1));
    goto L_089FA2E8;
L_089FA2E8:
    ctx.set_gpr(2, static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int8_t>(rt.memory().aot_load8(ctx.gpr[17] + static_cast<std::uint32_t>(0))))));
    { const bool branch_taken = ctx.gpr[2] == 0u;
    // nop
      if (branch_taken) {
          goto L_089FA308;
      }
      goto L_089FA2F4;
    }
L_089FA2F4:
    ctx.set_gpr(4, static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int8_t>(ctx.gpr[2]))));
    ctx.set_gpr(31, 0x089FA300u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0003_entry, 3u, 447u, 0x08811C9Cu>(ctx, &aot_mem) && ctx.pc == 0x089FA300u) goto L_089FA300;
    return;
L_089FA300:
    { const bool branch_taken = ctx.gpr[2] != 0u;
    // nop
      if (branch_taken) {
          goto L_089FA2E4;
      }
      goto L_089FA308;
    }
L_089FA308:
    ctx.set_gpr(3, static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int8_t>(rt.memory().aot_load8(ctx.gpr[17] + static_cast<std::uint32_t>(0))))));
    ctx.set_gpr(2, 0u + static_cast<std::uint32_t>(123));
    { const bool branch_taken = ctx.gpr[3] == ctx.gpr[2];
    // nop
      if (branch_taken) {
          goto L_089FA374;
      }
      goto L_089FA318;
    }
L_089FA318:
    ctx.set_gpr(2, 0u + static_cast<std::uint32_t>(91));
    { const bool branch_taken = ctx.gpr[3] == ctx.gpr[2];
    // nop
      if (branch_taken) {
          goto L_089FA364;
      }
      goto L_089FA324;
    }
L_089FA324:
    ctx.set_gpr(2, 0u + static_cast<std::uint32_t>(60));
    { const bool branch_taken = ctx.gpr[3] == ctx.gpr[2];
    // nop
      if (branch_taken) {
          goto L_089FA354;
      }
      goto L_089FA330;
    }
L_089FA330:
    ctx.set_gpr(2, 0u + static_cast<std::uint32_t>(40));
    { const bool branch_taken = ctx.gpr[3] == ctx.gpr[2];
    // nop
      if (branch_taken) {
          goto L_089FA344;
      }
      goto L_089FA33C;
    }
L_089FA33C:
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_089FA720;
      }
      goto L_089FA344;
    }
L_089FA344:
    ctx.set_gpr(16, 0u + static_cast<std::uint32_t>(41));
    ctx.set_gpr(17, ctx.gpr[17] + static_cast<std::uint32_t>(1));
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_089FA720;
      }
      goto L_089FA354;
    }
L_089FA354:
    ctx.set_gpr(16, 0u + static_cast<std::uint32_t>(62));
    ctx.set_gpr(17, ctx.gpr[17] + static_cast<std::uint32_t>(1));
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_089FA720;
      }
      goto L_089FA364;
    }
L_089FA364:
    ctx.set_gpr(16, 0u + static_cast<std::uint32_t>(93));
    ctx.set_gpr(17, ctx.gpr[17] + static_cast<std::uint32_t>(1));
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_089FA720;
      }
      goto L_089FA374;
    }
L_089FA374:
    ctx.set_gpr(16, 0u + static_cast<std::uint32_t>(125));
    ctx.set_gpr(17, ctx.gpr[17] + static_cast<std::uint32_t>(1));
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_089FA720;
      }
      goto L_089FA384;
    }
L_089FA384:
    ctx.set_gpr(17, ctx.gpr[17] + static_cast<std::uint32_t>(1));
    goto L_089FA388;
L_089FA388:
    ctx.set_gpr(2, static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int8_t>(rt.memory().aot_load8(ctx.gpr[17] + static_cast<std::uint32_t>(0))))));
    { const bool branch_taken = ctx.gpr[2] == 0u;
    // nop
      if (branch_taken) {
          goto L_089FA3A8;
      }
      goto L_089FA394;
    }
L_089FA394:
    ctx.set_gpr(4, static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int8_t>(ctx.gpr[2]))));
    ctx.set_gpr(31, 0x089FA3A0u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0003_entry, 3u, 447u, 0x08811C9Cu>(ctx, &aot_mem) && ctx.pc == 0x089FA3A0u) goto L_089FA3A0;
    return;
L_089FA3A0:
    { const bool branch_taken = ctx.gpr[2] != 0u;
    // nop
      if (branch_taken) {
          goto L_089FA384;
      }
      goto L_089FA3A8;
    }
L_089FA3A8:
    ctx.set_gpr(4, static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int8_t>(rt.memory().aot_load8(ctx.gpr[17] + static_cast<std::uint32_t>(0))))));
    ctx.set_gpr(31, 0x089FA3B4u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0003_entry, 3u, 446u, 0x08811C84u>(ctx, &aot_mem) && ctx.pc == 0x089FA3B4u) goto L_089FA3B4;
    return;
L_089FA3B4:
    { const bool branch_taken = ctx.gpr[2] != 0u;
    // nop
      if (branch_taken) {
          goto L_089FA3EC;
      }
      goto L_089FA3BC;
    }
L_089FA3BC:
    ctx.set_gpr(3, static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int8_t>(rt.memory().aot_load8(ctx.gpr[17] + static_cast<std::uint32_t>(0))))));
    ctx.set_gpr(2, 0u + static_cast<std::uint32_t>(45));
    { const bool branch_taken = ctx.gpr[3] == ctx.gpr[2];
    // nop
      if (branch_taken) {
          goto L_089FA3EC;
      }
      goto L_089FA3CC;
    }
L_089FA3CC:
    { const bool branch_taken = ctx.gpr[18] == 0u;
    // nop
      if (branch_taken) {
          goto L_089FA3E0;
      }
      goto L_089FA3D4;
    }
L_089FA3D4:
    ctx.set_gpr(2, 0u + static_cast<std::uint32_t>(46));
    { const bool branch_taken = ctx.gpr[3] == ctx.gpr[2];
    // nop
      if (branch_taken) {
          goto L_089FA3EC;
      }
      goto L_089FA3E0;
    }
L_089FA3E0:
    ctx.set_gpr(2, 0u + 0u);
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_089FA72C;
      }
      goto L_089FA3EC;
    }
L_089FA3EC:
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(60), ctx.gpr[17]);
    ctx.set_gpr(3, static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int8_t>(rt.memory().aot_load8(ctx.gpr[17] + static_cast<std::uint32_t>(0))))));
    ctx.set_gpr(2, 0u + static_cast<std::uint32_t>(45));
    { const bool branch_taken = ctx.gpr[3] != ctx.gpr[2];
    // nop
      if (branch_taken) {
          goto L_089FA404;
      }
      goto L_089FA400;
    }
L_089FA400:
    ctx.set_gpr(17, ctx.gpr[17] + static_cast<std::uint32_t>(1));
    goto L_089FA404;
L_089FA404:
    ctx.set_gpr(4, static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int8_t>(rt.memory().aot_load8(ctx.gpr[17] + static_cast<std::uint32_t>(0))))));
    ctx.set_gpr(31, 0x089FA410u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0003_entry, 3u, 446u, 0x08811C84u>(ctx, &aot_mem) && ctx.pc == 0x089FA410u) goto L_089FA410;
    return;
L_089FA410:
    { const bool branch_taken = ctx.gpr[2] != 0u;
    // nop
      if (branch_taken) {
          goto L_089FA43C;
      }
      goto L_089FA418;
    }
L_089FA418:
    { const bool branch_taken = ctx.gpr[18] == 0u;
    // nop
      if (branch_taken) {
          goto L_089FA3E0;
      }
      goto L_089FA420;
    }
L_089FA420:
    ctx.set_gpr(3, static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int8_t>(rt.memory().aot_load8(ctx.gpr[17] + static_cast<std::uint32_t>(0))))));
    ctx.set_gpr(2, 0u + static_cast<std::uint32_t>(46));
    { const bool branch_taken = ctx.gpr[3] == ctx.gpr[2];
    // nop
      if (branch_taken) {
          goto L_089FA43C;
      }
      goto L_089FA430;
    }
L_089FA430:
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_089FA3E0;
      }
      goto L_089FA438;
    }
L_089FA438:
    ctx.set_gpr(17, ctx.gpr[17] + static_cast<std::uint32_t>(1));
    goto L_089FA43C;
L_089FA43C:
    ctx.set_gpr(2, static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int8_t>(rt.memory().aot_load8(ctx.gpr[17] + static_cast<std::uint32_t>(0))))));
    { const bool branch_taken = ctx.gpr[2] == 0u;
    // nop
      if (branch_taken) {
          goto L_089FA45C;
      }
      goto L_089FA448;
    }
L_089FA448:
    ctx.set_gpr(4, static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int8_t>(ctx.gpr[2]))));
    ctx.set_gpr(31, 0x089FA454u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0003_entry, 3u, 446u, 0x08811C84u>(ctx, &aot_mem) && ctx.pc == 0x089FA454u) goto L_089FA454;
    return;
L_089FA454:
    { const bool branch_taken = ctx.gpr[2] != 0u;
    // nop
      if (branch_taken) {
          goto L_089FA438;
      }
      goto L_089FA45C;
    }
L_089FA45C:
    { const bool branch_taken = ctx.gpr[18] == 0u;
    // nop
      if (branch_taken) {
          goto L_089FA524;
      }
      goto L_089FA464;
    }
L_089FA464:
    ctx.set_gpr(3, static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int8_t>(rt.memory().aot_load8(ctx.gpr[17] + static_cast<std::uint32_t>(0))))));
    ctx.set_gpr(2, 0u + static_cast<std::uint32_t>(46));
    { const bool branch_taken = ctx.gpr[3] != ctx.gpr[2];
    // nop
      if (branch_taken) {
          goto L_089FA484;
      }
      goto L_089FA474;
    }
L_089FA474:
    ctx.set_gpr(17, ctx.gpr[17] + static_cast<std::uint32_t>(1));
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_089FA484;
      }
      goto L_089FA480;
    }
L_089FA480:
    ctx.set_gpr(17, ctx.gpr[17] + static_cast<std::uint32_t>(1));
    goto L_089FA484;
L_089FA484:
    ctx.set_gpr(2, static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int8_t>(rt.memory().aot_load8(ctx.gpr[17] + static_cast<std::uint32_t>(0))))));
    { const bool branch_taken = ctx.gpr[2] == 0u;
    // nop
      if (branch_taken) {
          goto L_089FA4A4;
      }
      goto L_089FA490;
    }
L_089FA490:
    ctx.set_gpr(4, static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int8_t>(ctx.gpr[2]))));
    ctx.set_gpr(31, 0x089FA49Cu);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0003_entry, 3u, 446u, 0x08811C84u>(ctx, &aot_mem) && ctx.pc == 0x089FA49Cu) goto L_089FA49C;
    return;
L_089FA49C:
    { const bool branch_taken = ctx.gpr[2] != 0u;
    // nop
      if (branch_taken) {
          goto L_089FA480;
      }
      goto L_089FA4A4;
    }
L_089FA4A4:
    ctx.set_gpr(3, static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int8_t>(rt.memory().aot_load8(ctx.gpr[17] + static_cast<std::uint32_t>(0))))));
    ctx.set_gpr(2, 0u + static_cast<std::uint32_t>(101));
    { const bool branch_taken = ctx.gpr[3] == ctx.gpr[2];
    // nop
      if (branch_taken) {
          goto L_089FA4C0;
      }
      goto L_089FA4B4;
    }
L_089FA4B4:
    ctx.set_gpr(2, 0u + static_cast<std::uint32_t>(69));
    { const bool branch_taken = ctx.gpr[3] != ctx.gpr[2];
    // nop
      if (branch_taken) {
          goto L_089FA524;
      }
      goto L_089FA4C0;
    }
L_089FA4C0:
    ctx.set_gpr(17, ctx.gpr[17] + static_cast<std::uint32_t>(1));
    ctx.set_gpr(3, static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int8_t>(rt.memory().aot_load8(ctx.gpr[17] + static_cast<std::uint32_t>(0))))));
    ctx.set_gpr(2, 0u + static_cast<std::uint32_t>(43));
    { const bool branch_taken = ctx.gpr[3] == ctx.gpr[2];
    // nop
      if (branch_taken) {
          goto L_089FA4E0;
      }
      goto L_089FA4D4;
    }
L_089FA4D4:
    ctx.set_gpr(2, 0u + static_cast<std::uint32_t>(45));
    { const bool branch_taken = ctx.gpr[3] != ctx.gpr[2];
    // nop
      if (branch_taken) {
          goto L_089FA4E4;
      }
      goto L_089FA4E0;
    }
L_089FA4E0:
    ctx.set_gpr(17, ctx.gpr[17] + static_cast<std::uint32_t>(1));
    goto L_089FA4E4;
L_089FA4E4:
    ctx.set_gpr(4, static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int8_t>(rt.memory().aot_load8(ctx.gpr[17] + static_cast<std::uint32_t>(0))))));
    ctx.set_gpr(31, 0x089FA4F0u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0003_entry, 3u, 446u, 0x08811C84u>(ctx, &aot_mem) && ctx.pc == 0x089FA4F0u) goto L_089FA4F0;
    return;
L_089FA4F0:
    { const bool branch_taken = ctx.gpr[2] != 0u;
    // nop
      if (branch_taken) {
          goto L_089FA504;
      }
      goto L_089FA4F8;
    }
L_089FA4F8:
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_089FA3E0;
      }
      goto L_089FA500;
    }
L_089FA500:
    ctx.set_gpr(17, ctx.gpr[17] + static_cast<std::uint32_t>(1));
    goto L_089FA504;
L_089FA504:
    ctx.set_gpr(2, static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int8_t>(rt.memory().aot_load8(ctx.gpr[17] + static_cast<std::uint32_t>(0))))));
    { const bool branch_taken = ctx.gpr[2] == 0u;
    // nop
      if (branch_taken) {
          goto L_089FA524;
      }
      goto L_089FA510;
    }
L_089FA510:
    ctx.set_gpr(4, static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int8_t>(ctx.gpr[2]))));
    ctx.set_gpr(31, 0x089FA51Cu);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0003_entry, 3u, 446u, 0x08811C84u>(ctx, &aot_mem) && ctx.pc == 0x089FA51Cu) goto L_089FA51C;
    return;
L_089FA51C:
    { const bool branch_taken = ctx.gpr[2] != 0u;
    // nop
      if (branch_taken) {
          goto L_089FA500;
      }
      goto L_089FA524;
    }
L_089FA524:
    ctx.set_gpr(2, rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(60)));
    ctx.set_gpr(2, ctx.gpr[17] - ctx.gpr[2]);
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(56), ctx.gpr[2]);
    ctx.set_gpr(1, static_cast<std::int32_t>(ctx.gpr[2]) < 512 ? 1u : 0u);
    { const bool branch_taken = ctx.gpr[1] == 0u;
    // nop
      if (branch_taken) {
          goto L_089FA3E0;
      }
      goto L_089FA53C;
    }
L_089FA53C:
    ctx.set_gpr(4, ctx.gpr[29] + static_cast<std::uint32_t>(80));
    ctx.set_gpr(5, rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(60)));
    ctx.set_gpr(6, ctx.gpr[2] + 0u);
    ctx.set_gpr(31, 0x089FA550u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0003_entry, 3u, 662u, 0x08812B08u>(ctx, &aot_mem) && ctx.pc == 0x089FA550u) goto L_089FA550;
    return;
L_089FA550:
    ctx.set_gpr(2, rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(56)));
    ctx.set_gpr(2, ctx.gpr[2] + ctx.gpr[29]);
    rt.memory().aot_store8(ctx.gpr[2] + static_cast<std::uint32_t>(80), static_cast<std::uint8_t>(0u));
    { const bool branch_taken = ctx.gpr[18] == 0u;
    // nop
      if (branch_taken) {
          goto L_089FA5D8;
      }
      goto L_089FA564;
    }
L_089FA564:
    ctx.set_gpr(4, ctx.gpr[29] + static_cast<std::uint32_t>(80));
    ctx.set_gpr(5, 2229u << 16u);
    ctx.set_gpr(5, ctx.gpr[5] + static_cast<std::uint32_t>(-10544));
    ctx.set_gpr(6, ctx.gpr[29] + static_cast<std::uint32_t>(64));
    ctx.set_gpr(31, 0x089FA57Cu);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0004_entry, 4u, 427u, 0x08816084u>(ctx, &aot_mem) && ctx.pc == 0x089FA57Cu) goto L_089FA57C;
    return;
L_089FA57C:
    { const bool branch_taken = ctx.gpr[2] == 0u;
    // nop
      if (branch_taken) {
          goto L_089FA3E0;
      }
      goto L_089FA584;
    }
L_089FA584:
    ctx.set_gpr(2, 0u + static_cast<std::uint32_t>(8));
    { const bool branch_taken = ctx.gpr[19] == ctx.gpr[2];
    // nop
      if (branch_taken) {
          goto L_089FA5C0;
      }
      goto L_089FA590;
    }
L_089FA590:
    ctx.set_gpr(2, 0u + static_cast<std::uint32_t>(4));
    { const bool branch_taken = ctx.gpr[19] == ctx.gpr[2];
    // nop
      if (branch_taken) {
          goto L_089FA5A4;
      }
      goto L_089FA59C;
    }
L_089FA59C:
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_089FA3E0;
      }
      goto L_089FA5A4;
    }
L_089FA5A4:
    ctx.set_gpr(4, rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(64)));
    ctx.set_gpr(5, rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(68)));
    ctx.set_gpr(31, 0x089FA5B4u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0007_entry, 7u, 18u, 0x08820104u>(ctx, &aot_mem) && ctx.pc == 0x089FA5B4u) goto L_089FA5B4;
    return;
L_089FA5B4:
    rt.memory().aot_store32(ctx.gpr[21] + static_cast<std::uint32_t>(0), std::bit_cast<std::uint32_t>(ctx.fpr[0]));
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_089FA670;
      }
      goto L_089FA5C0;
    }
L_089FA5C0:
    ctx.set_gpr(3, rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(64)));
    ctx.set_gpr(2, rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(68)));
    rt.memory().aot_store32(ctx.gpr[21] + static_cast<std::uint32_t>(0), ctx.gpr[3]);
    rt.memory().aot_store32(ctx.gpr[21] + static_cast<std::uint32_t>(4), ctx.gpr[2]);
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_089FA670;
      }
      goto L_089FA5D8;
    }
L_089FA5D8:
    ctx.set_gpr(4, ctx.gpr[29] + static_cast<std::uint32_t>(80));
    ctx.set_gpr(5, 2229u << 16u);
    ctx.set_gpr(5, ctx.gpr[5] + static_cast<std::uint32_t>(-10540));
    ctx.set_gpr(6, ctx.gpr[29] + static_cast<std::uint32_t>(76));
    ctx.set_gpr(31, 0x089FA5F0u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0004_entry, 4u, 427u, 0x08816084u>(ctx, &aot_mem) && ctx.pc == 0x089FA5F0u) goto L_089FA5F0;
    return;
L_089FA5F0:
    { const bool branch_taken = ctx.gpr[2] == 0u;
    // nop
      if (branch_taken) {
          goto L_089FA3E0;
      }
      goto L_089FA5F8;
    }
L_089FA5F8:
    ctx.set_gpr(2, 0u + static_cast<std::uint32_t>(8));
    { const bool branch_taken = ctx.gpr[19] == ctx.gpr[2];
    // nop
      if (branch_taken) {
          goto L_089FA660;
      }
      goto L_089FA604;
    }
L_089FA604:
    ctx.set_gpr(2, 0u + static_cast<std::uint32_t>(4));
    { const bool branch_taken = ctx.gpr[19] == ctx.gpr[2];
    // nop
      if (branch_taken) {
          goto L_089FA650;
      }
      goto L_089FA610;
    }
L_089FA610:
    ctx.set_gpr(2, 0u + static_cast<std::uint32_t>(2));
    { const bool branch_taken = ctx.gpr[19] == ctx.gpr[2];
    // nop
      if (branch_taken) {
          goto L_089FA640;
      }
      goto L_089FA61C;
    }
L_089FA61C:
    ctx.set_gpr(2, 0u + static_cast<std::uint32_t>(1));
    { const bool branch_taken = ctx.gpr[19] == ctx.gpr[2];
    // nop
      if (branch_taken) {
          goto L_089FA630;
      }
      goto L_089FA628;
    }
L_089FA628:
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_089FA3E0;
      }
      goto L_089FA630;
    }
L_089FA630:
    ctx.set_gpr(2, rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(76)));
    rt.memory().aot_store8(ctx.gpr[21] + static_cast<std::uint32_t>(0), static_cast<std::uint8_t>(ctx.gpr[2]));
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_089FA670;
      }
      goto L_089FA640;
    }
L_089FA640:
    ctx.set_gpr(2, rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(76)));
    rt.memory().aot_store16(ctx.gpr[21] + static_cast<std::uint32_t>(0), static_cast<std::uint16_t>(ctx.gpr[2]));
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_089FA670;
      }
      goto L_089FA650;
    }
L_089FA650:
    ctx.set_gpr(2, rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(76)));
    rt.memory().aot_store32(ctx.gpr[21] + static_cast<std::uint32_t>(0), ctx.gpr[2]);
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_089FA670;
      }
      goto L_089FA660;
    }
L_089FA660:
    ctx.set_gpr(3, rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(76)));
    ctx.set_gpr(2, static_cast<std::uint32_t>(static_cast<std::int32_t>(ctx.gpr[3]) >> 31u));
    rt.memory().aot_store32(ctx.gpr[21] + static_cast<std::uint32_t>(0), ctx.gpr[3]);
    rt.memory().aot_store32(ctx.gpr[21] + static_cast<std::uint32_t>(4), ctx.gpr[2]);
    goto L_089FA670;
L_089FA670:
    ctx.set_gpr(21, ctx.gpr[21] + ctx.gpr[19]);
    ctx.set_gpr(20, ctx.gpr[20] + static_cast<std::uint32_t>(-1));
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_089FA684;
      }
      goto L_089FA680;
    }
L_089FA680:
    ctx.set_gpr(17, ctx.gpr[17] + static_cast<std::uint32_t>(1));
    goto L_089FA684;
L_089FA684:
    ctx.set_gpr(2, static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int8_t>(rt.memory().aot_load8(ctx.gpr[17] + static_cast<std::uint32_t>(0))))));
    { const bool branch_taken = ctx.gpr[2] == 0u;
    // nop
      if (branch_taken) {
          goto L_089FA6A4;
      }
      goto L_089FA690;
    }
L_089FA690:
    ctx.set_gpr(4, static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int8_t>(ctx.gpr[2]))));
    ctx.set_gpr(31, 0x089FA69Cu);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0003_entry, 3u, 447u, 0x08811C9Cu>(ctx, &aot_mem) && ctx.pc == 0x089FA69Cu) goto L_089FA69C;
    return;
L_089FA69C:
    { const bool branch_taken = ctx.gpr[2] != 0u;
    // nop
      if (branch_taken) {
          goto L_089FA680;
      }
      goto L_089FA6A4;
    }
L_089FA6A4:
    { const bool branch_taken = ctx.gpr[20] != 0u;
    // nop
      if (branch_taken) {
          goto L_089FA6D0;
      }
      goto L_089FA6AC;
    }
L_089FA6AC:
    { const bool branch_taken = ctx.gpr[16] == 0u;
    // nop
      if (branch_taken) {
          goto L_089FA71C;
      }
      goto L_089FA6B4;
    }
L_089FA6B4:
    ctx.set_gpr(3, static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int8_t>(rt.memory().aot_load8(ctx.gpr[17] + static_cast<std::uint32_t>(0))))));
    ctx.set_gpr(2, static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int8_t>(ctx.gpr[16]))));
    { const bool branch_taken = ctx.gpr[3] != ctx.gpr[2];
    // nop
      if (branch_taken) {
          goto L_089FA3E0;
      }
      goto L_089FA6C4;
    }
L_089FA6C4:
    ctx.set_gpr(17, ctx.gpr[17] + static_cast<std::uint32_t>(1));
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_089FA71C;
      }
      goto L_089FA6D0;
    }
L_089FA6D0:
    { const bool branch_taken = ctx.gpr[30] != 0u;
    // nop
      if (branch_taken) {
          goto L_089FA700;
      }
      goto L_089FA6D8;
    }
L_089FA6D8:
    ctx.set_gpr(3, static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int8_t>(rt.memory().aot_load8(ctx.gpr[17] + static_cast<std::uint32_t>(0))))));
    ctx.set_gpr(2, 0u + static_cast<std::uint32_t>(44));
    { const bool branch_taken = ctx.gpr[3] == ctx.gpr[2];
    // nop
      if (branch_taken) {
          goto L_089FA6F0;
      }
      goto L_089FA6E8;
    }
L_089FA6E8:
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_089FA71C;
      }
      goto L_089FA6F0;
    }
L_089FA6F0:
    ctx.set_gpr(23, static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int8_t>(ctx.gpr[2]))));
    ctx.set_gpr(17, ctx.gpr[17] + static_cast<std::uint32_t>(1));
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_089FA71C;
      }
      goto L_089FA700;
    }
L_089FA700:
    { const bool branch_taken = ctx.gpr[23] == 0u;
    // nop
      if (branch_taken) {
          goto L_089FA71C;
      }
      goto L_089FA708;
    }
L_089FA708:
    ctx.set_gpr(3, static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int8_t>(rt.memory().aot_load8(ctx.gpr[17] + static_cast<std::uint32_t>(0))))));
    ctx.set_gpr(2, static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int8_t>(ctx.gpr[23]))));
    { const bool branch_taken = ctx.gpr[3] != ctx.gpr[2];
    // nop
      if (branch_taken) {
          goto L_089FA3E0;
      }
      goto L_089FA718;
    }
L_089FA718:
    ctx.set_gpr(17, ctx.gpr[17] + static_cast<std::uint32_t>(1));
    goto L_089FA71C;
L_089FA71C:
    ctx.set_gpr(30, ctx.gpr[30] + static_cast<std::uint32_t>(1));
    goto L_089FA720;
L_089FA720:
    { const bool branch_taken = ctx.gpr[20] != 0u;
    // nop
      if (branch_taken) {
          goto L_089FA388;
      }
      goto L_089FA728;
    }
L_089FA728:
    ctx.set_gpr(2, ctx.gpr[17] - ctx.gpr[22]);
    goto L_089FA72C;
L_089FA72C:
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
    ctx.set_gpr(29, ctx.gpr[29] + static_cast<std::uint32_t>(592));
    jump_target = ctx.gpr[31];
    // nop
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_089FA760:
    ctx.set_gpr(29, ctx.gpr[29] + static_cast<std::uint32_t>(-16));
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(12), ctx.gpr[31]);
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(8), ctx.gpr[18]);
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(4), ctx.gpr[17]);
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(0), ctx.gpr[16]);
    ctx.set_gpr(18, ctx.gpr[4] + 0u);
    ctx.set_gpr(17, ctx.gpr[5] + 0u);
    ctx.set_gpr(16, ctx.gpr[6] + 0u);
    ctx.set_gpr(31, 0x089FA788u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0053_entry, 53u, 328u, 0x088D9B14u>(ctx, &aot_mem) && ctx.pc == 0x089FA788u) goto L_089FA788;
    return;
L_089FA788:
    ctx.set_gpr(3, rt.memory().aot_load16(ctx.gpr[18] + static_cast<std::uint32_t>(20)));
    ctx.set_gpr(3, ctx.gpr[3] >> 2u);
    { const std::int64_t product = static_cast<std::int64_t>(static_cast<std::int32_t>(ctx.gpr[16])) * static_cast<std::int64_t>(static_cast<std::int32_t>(ctx.gpr[3])); ctx.lo = static_cast<std::uint32_t>(product); ctx.hi = static_cast<std::uint32_t>(static_cast<std::uint64_t>(product) >> 32u); }
    ctx.set_gpr(6, ctx.lo);
    ctx.set_gpr(4, ctx.gpr[2] + 0u);
    ctx.set_gpr(5, ctx.gpr[17] + 0u);
    ctx.set_gpr(25, rt.memory().aot_load32(ctx.gpr[2] + static_cast<std::uint32_t>(0)));
    ctx.set_gpr(25, rt.memory().aot_load32(ctx.gpr[25] + static_cast<std::uint32_t>(220)));
    jump_target = ctx.gpr[25];
    ctx.set_gpr(31, 0x089FA7B0u);
    // nop
    ctx.pc = jump_target;
    if (rt.invoke_chained_call(ctx, &aot_mem) && ctx.pc == 0x089FA7B0u) goto L_089FA7B0;
    return;
L_089FA7B0:
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
L_089FA7CC:
    ctx.set_gpr(29, ctx.gpr[29] + static_cast<std::uint32_t>(-16));
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(12), ctx.gpr[31]);
    ctx.set_gpr(4, ctx.gpr[6] + 0u);
    ctx.set_gpr(6, 0u + static_cast<std::uint32_t>(16));
    ctx.set_gpr(7, 0u + static_cast<std::uint32_t>(4));
    ctx.set_gpr(8, 0u + static_cast<std::uint32_t>(1));
    ctx.set_gpr(31, 0x089FA7ECu);
    // nop
    goto L_089FA268;
L_089FA7EC:
    ctx.set_gpr(31, rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(12)));
    ctx.set_gpr(29, ctx.gpr[29] + static_cast<std::uint32_t>(16));
    jump_target = ctx.gpr[31];
    // nop
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_089FA7FC:
    ctx.set_gpr(29, ctx.gpr[29] + static_cast<std::uint32_t>(-1280));
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(156), ctx.gpr[31]);
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(152), ctx.gpr[30]);
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(148), ctx.gpr[23]);
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(144), ctx.gpr[22]);
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(140), ctx.gpr[21]);
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(136), ctx.gpr[20]);
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(132), ctx.gpr[19]);
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(128), ctx.gpr[18]);
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(124), ctx.gpr[17]);
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(120), ctx.gpr[16]);
    ctx.set_gpr(21, ctx.gpr[4] + 0u);
    ctx.set_gpr(20, ctx.gpr[6] + 0u);
    ctx.fpr[12] = std::bit_cast<float>(rt.memory().aot_load32(ctx.gpr[6] + static_cast<std::uint32_t>(0)));
    ctx.set_gpr(31, 0x089FA83Cu);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0006_entry, 6u, 675u, 0x0881EBD0u>(ctx, &aot_mem) && ctx.pc == 0x089FA83Cu) goto L_089FA83C;
    return;
L_089FA83C:
    ctx.set_gpr(19, ctx.gpr[2] + 0u);
    ctx.set_gpr(18, ctx.gpr[3] + 0u);
    ctx.fpr[12] = std::bit_cast<float>(rt.memory().aot_load32(ctx.gpr[20] + static_cast<std::uint32_t>(4)));
    ctx.set_gpr(31, 0x089FA850u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0006_entry, 6u, 675u, 0x0881EBD0u>(ctx, &aot_mem) && ctx.pc == 0x089FA850u) goto L_089FA850;
    return;
L_089FA850:
    ctx.set_gpr(17, ctx.gpr[2] + 0u);
    ctx.set_gpr(16, ctx.gpr[3] + 0u);
    ctx.fpr[12] = std::bit_cast<float>(rt.memory().aot_load32(ctx.gpr[20] + static_cast<std::uint32_t>(8)));
    ctx.set_gpr(31, 0x089FA864u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0006_entry, 6u, 675u, 0x0881EBD0u>(ctx, &aot_mem) && ctx.pc == 0x089FA864u) goto L_089FA864;
    return;
L_089FA864:
    ctx.set_gpr(22, ctx.gpr[2] + 0u);
    ctx.set_gpr(23, ctx.gpr[3] + 0u);
    ctx.fpr[12] = std::bit_cast<float>(rt.memory().aot_load32(ctx.gpr[20] + static_cast<std::uint32_t>(12)));
    ctx.set_gpr(31, 0x089FA878u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0006_entry, 6u, 675u, 0x0881EBD0u>(ctx, &aot_mem) && ctx.pc == 0x089FA878u) goto L_089FA878;
    return;
L_089FA878:
    ctx.set_gpr(30, ctx.gpr[2] + 0u);
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(252), ctx.gpr[3]);
    ctx.fpr[12] = std::bit_cast<float>(rt.memory().aot_load32(ctx.gpr[20] + static_cast<std::uint32_t>(16)));
    ctx.set_gpr(31, 0x089FA88Cu);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0006_entry, 6u, 675u, 0x0881EBD0u>(ctx, &aot_mem) && ctx.pc == 0x089FA88Cu) goto L_089FA88C;
    return;
L_089FA88C:
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(248), ctx.gpr[2]);
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(244), ctx.gpr[3]);
    ctx.fpr[12] = std::bit_cast<float>(rt.memory().aot_load32(ctx.gpr[20] + static_cast<std::uint32_t>(20)));
    ctx.set_gpr(31, 0x089FA8A0u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0006_entry, 6u, 675u, 0x0881EBD0u>(ctx, &aot_mem) && ctx.pc == 0x089FA8A0u) goto L_089FA8A0;
    return;
L_089FA8A0:
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(240), ctx.gpr[2]);
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(236), ctx.gpr[3]);
    ctx.fpr[12] = std::bit_cast<float>(rt.memory().aot_load32(ctx.gpr[20] + static_cast<std::uint32_t>(24)));
    ctx.set_gpr(31, 0x089FA8B4u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0006_entry, 6u, 675u, 0x0881EBD0u>(ctx, &aot_mem) && ctx.pc == 0x089FA8B4u) goto L_089FA8B4;
    return;
L_089FA8B4:
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(232), ctx.gpr[2]);
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(228), ctx.gpr[3]);
    ctx.fpr[12] = std::bit_cast<float>(rt.memory().aot_load32(ctx.gpr[20] + static_cast<std::uint32_t>(28)));
    ctx.set_gpr(31, 0x089FA8C8u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0006_entry, 6u, 675u, 0x0881EBD0u>(ctx, &aot_mem) && ctx.pc == 0x089FA8C8u) goto L_089FA8C8;
    return;
L_089FA8C8:
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(224), ctx.gpr[2]);
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(220), ctx.gpr[3]);
    ctx.fpr[12] = std::bit_cast<float>(rt.memory().aot_load32(ctx.gpr[20] + static_cast<std::uint32_t>(32)));
    ctx.set_gpr(31, 0x089FA8DCu);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0006_entry, 6u, 675u, 0x0881EBD0u>(ctx, &aot_mem) && ctx.pc == 0x089FA8DCu) goto L_089FA8DC;
    return;
L_089FA8DC:
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(216), ctx.gpr[2]);
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(212), ctx.gpr[3]);
    ctx.fpr[12] = std::bit_cast<float>(rt.memory().aot_load32(ctx.gpr[20] + static_cast<std::uint32_t>(36)));
    ctx.set_gpr(31, 0x089FA8F0u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0006_entry, 6u, 675u, 0x0881EBD0u>(ctx, &aot_mem) && ctx.pc == 0x089FA8F0u) goto L_089FA8F0;
    return;
L_089FA8F0:
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(208), ctx.gpr[2]);
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(204), ctx.gpr[3]);
    ctx.fpr[12] = std::bit_cast<float>(rt.memory().aot_load32(ctx.gpr[20] + static_cast<std::uint32_t>(40)));
    ctx.set_gpr(31, 0x089FA904u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0006_entry, 6u, 675u, 0x0881EBD0u>(ctx, &aot_mem) && ctx.pc == 0x089FA904u) goto L_089FA904;
    return;
L_089FA904:
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(200), ctx.gpr[2]);
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(196), ctx.gpr[3]);
    ctx.fpr[12] = std::bit_cast<float>(rt.memory().aot_load32(ctx.gpr[20] + static_cast<std::uint32_t>(44)));
    ctx.set_gpr(31, 0x089FA918u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0006_entry, 6u, 675u, 0x0881EBD0u>(ctx, &aot_mem) && ctx.pc == 0x089FA918u) goto L_089FA918;
    return;
L_089FA918:
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(192), ctx.gpr[2]);
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(188), ctx.gpr[3]);
    ctx.fpr[12] = std::bit_cast<float>(rt.memory().aot_load32(ctx.gpr[20] + static_cast<std::uint32_t>(48)));
    ctx.set_gpr(31, 0x089FA92Cu);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0006_entry, 6u, 675u, 0x0881EBD0u>(ctx, &aot_mem) && ctx.pc == 0x089FA92Cu) goto L_089FA92C;
    return;
L_089FA92C:
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(184), ctx.gpr[2]);
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(180), ctx.gpr[3]);
    ctx.fpr[12] = std::bit_cast<float>(rt.memory().aot_load32(ctx.gpr[20] + static_cast<std::uint32_t>(52)));
    ctx.set_gpr(31, 0x089FA940u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0006_entry, 6u, 675u, 0x0881EBD0u>(ctx, &aot_mem) && ctx.pc == 0x089FA940u) goto L_089FA940;
    return;
L_089FA940:
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(176), ctx.gpr[2]);
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(172), ctx.gpr[3]);
    ctx.fpr[12] = std::bit_cast<float>(rt.memory().aot_load32(ctx.gpr[20] + static_cast<std::uint32_t>(56)));
    ctx.set_gpr(31, 0x089FA954u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0006_entry, 6u, 675u, 0x0881EBD0u>(ctx, &aot_mem) && ctx.pc == 0x089FA954u) goto L_089FA954;
    return;
L_089FA954:
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(168), ctx.gpr[2]);
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(164), ctx.gpr[3]);
    ctx.fpr[12] = std::bit_cast<float>(rt.memory().aot_load32(ctx.gpr[20] + static_cast<std::uint32_t>(60)));
    ctx.set_gpr(31, 0x089FA968u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0006_entry, 6u, 675u, 0x0881EBD0u>(ctx, &aot_mem) && ctx.pc == 0x089FA968u) goto L_089FA968;
    return;
L_089FA968:
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(0), ctx.gpr[30]);
    ctx.set_gpr(4, rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(252)));
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(4), ctx.gpr[4]);
    ctx.set_gpr(4, rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(248)));
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(8), ctx.gpr[4]);
    ctx.set_gpr(4, rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(244)));
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(12), ctx.gpr[4]);
    ctx.set_gpr(4, rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(240)));
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(16), ctx.gpr[4]);
    ctx.set_gpr(4, rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(236)));
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(20), ctx.gpr[4]);
    ctx.set_gpr(4, rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(232)));
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(24), ctx.gpr[4]);
    ctx.set_gpr(4, rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(228)));
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(28), ctx.gpr[4]);
    ctx.set_gpr(4, rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(224)));
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(32), ctx.gpr[4]);
    ctx.set_gpr(4, rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(220)));
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(36), ctx.gpr[4]);
    ctx.set_gpr(4, rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(216)));
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(40), ctx.gpr[4]);
    ctx.set_gpr(4, rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(212)));
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(44), ctx.gpr[4]);
    ctx.set_gpr(4, rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(208)));
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(48), ctx.gpr[4]);
    ctx.set_gpr(4, rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(204)));
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(52), ctx.gpr[4]);
    ctx.set_gpr(4, rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(200)));
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(56), ctx.gpr[4]);
    ctx.set_gpr(4, rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(196)));
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(60), ctx.gpr[4]);
    ctx.set_gpr(4, rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(192)));
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(64), ctx.gpr[4]);
    ctx.set_gpr(4, rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(188)));
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(68), ctx.gpr[4]);
    ctx.set_gpr(4, rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(184)));
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(72), ctx.gpr[4]);
    ctx.set_gpr(4, rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(180)));
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(76), ctx.gpr[4]);
    ctx.set_gpr(4, rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(176)));
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(80), ctx.gpr[4]);
    ctx.set_gpr(4, rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(172)));
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(84), ctx.gpr[4]);
    ctx.set_gpr(4, rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(168)));
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(88), ctx.gpr[4]);
    ctx.set_gpr(4, rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(164)));
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(92), ctx.gpr[4]);
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(96), ctx.gpr[2]);
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(100), ctx.gpr[3]);
    ctx.set_gpr(4, ctx.gpr[29] + static_cast<std::uint32_t>(256));
    ctx.set_gpr(5, 2229u << 16u);
    ctx.set_gpr(5, ctx.gpr[5] + static_cast<std::uint32_t>(-10536));
    ctx.set_gpr(6, ctx.gpr[19] + 0u);
    ctx.set_gpr(7, ctx.gpr[18] + 0u);
    ctx.set_gpr(8, ctx.gpr[17] + 0u);
    ctx.set_gpr(9, ctx.gpr[16] + 0u);
    ctx.set_gpr(10, ctx.gpr[22] + 0u);
    ctx.set_gpr(11, ctx.gpr[23] + 0u);
    ctx.set_gpr(31, 0x089FAA58u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0004_entry, 4u, 423u, 0x08815FF4u>(ctx, &aot_mem) && ctx.pc == 0x089FAA58u) goto L_089FAA58;
    return;
L_089FAA58:
    ctx.set_gpr(3, ctx.gpr[29] + static_cast<std::uint32_t>(256));
    { const bool branch_taken = ctx.gpr[3] != 0u;
    // nop
      if (branch_taken) {
          goto L_089FAA70;
      }
      goto L_089FAA64;
    }
L_089FAA64:
    ctx.set_gpr(3, 0u + 0u);
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_089FAAC0;
      }
      goto L_089FAA70;
    }
L_089FAA70:
    ctx.set_gpr(2, 2245u << 16u);
    ctx.set_gpr(2, rt.memory().aot_load32(ctx.gpr[2] + static_cast<std::uint32_t>(30776)));
    { const bool branch_taken = ctx.gpr[2] != 0u;
    // nop
      if (branch_taken) {
          goto L_089FAAA8;
      }
      goto L_089FAA80;
    }
L_089FAA80:
    ctx.set_gpr(4, 0u + static_cast<std::uint32_t>(16));
    ctx.set_gpr(31, 0x089FAA8Cu);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0072_entry, 72u, 788u, 0x089277A0u>(ctx, &aot_mem) && ctx.pc == 0x089FAA8Cu) goto L_089FAA8C;
    return;
L_089FAA8C:
    { const bool branch_taken = ctx.gpr[2] == 0u;
    // nop
      if (branch_taken) {
          goto L_089FAAA0;
      }
      goto L_089FAA94;
    }
L_089FAA94:
    ctx.set_gpr(4, ctx.gpr[2] + 0u);
    ctx.set_gpr(31, 0x089FAAA0u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0072_entry, 72u, 762u, 0x089275E8u>(ctx, &aot_mem) && ctx.pc == 0x089FAAA0u) goto L_089FAAA0;
    return;
L_089FAAA0:
    ctx.set_gpr(3, 2245u << 16u);
    rt.memory().aot_store32(ctx.gpr[3] + static_cast<std::uint32_t>(30776), ctx.gpr[2]);
    goto L_089FAAA8;
L_089FAAA8:
    ctx.set_gpr(2, 2245u << 16u);
    ctx.set_gpr(4, rt.memory().aot_load32(ctx.gpr[2] + static_cast<std::uint32_t>(30776)));
    ctx.set_gpr(5, ctx.gpr[29] + static_cast<std::uint32_t>(256));
    ctx.set_gpr(31, 0x089FAABCu);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0072_entry, 72u, 784u, 0x08927768u>(ctx, &aot_mem) && ctx.pc == 0x089FAABCu) goto L_089FAABC;
    return;
L_089FAABC:
    ctx.set_gpr(3, ctx.gpr[2] + 0u);
    goto L_089FAAC0;
L_089FAAC0:
    rt.memory().aot_store32(ctx.gpr[21] + static_cast<std::uint32_t>(0), ctx.gpr[3]);
    ctx.set_gpr(31, rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(156)));
    ctx.set_gpr(30, rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(152)));
    ctx.set_gpr(23, rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(148)));
    ctx.set_gpr(22, rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(144)));
    ctx.set_gpr(21, rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(140)));
    ctx.set_gpr(20, rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(136)));
    ctx.set_gpr(19, rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(132)));
    ctx.set_gpr(18, rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(128)));
    ctx.set_gpr(17, rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(124)));
    ctx.set_gpr(16, rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(120)));
    ctx.set_gpr(29, ctx.gpr[29] + static_cast<std::uint32_t>(1280));
    jump_target = ctx.gpr[31];
    // nop
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_089FAAF8:
    ctx.set_gpr(2, 0u + static_cast<std::uint32_t>(64));
    jump_target = ctx.gpr[31];
    // nop
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_089FAB04:
    ctx.set_gpr(29, ctx.gpr[29] + static_cast<std::uint32_t>(-16));
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(12), ctx.gpr[31]);
    ctx.set_gpr(25, rt.memory().aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(0)));
    ctx.set_gpr(25, rt.memory().aot_load32(ctx.gpr[25] + static_cast<std::uint32_t>(144)));
    jump_target = ctx.gpr[25];
    ctx.set_gpr(31, 0x089FAB1Cu);
    // nop
    ctx.pc = jump_target;
    if (rt.invoke_chained_call(ctx, &aot_mem) && ctx.pc == 0x089FAB1Cu) goto L_089FAB1C;
    return;
L_089FAB1C:
    ctx.set_gpr(31, rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(12)));
    ctx.set_gpr(29, ctx.gpr[29] + static_cast<std::uint32_t>(16));
    jump_target = ctx.gpr[31];
    // nop
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_089FAB2C:
    ctx.set_gpr(2, 0u + static_cast<std::uint32_t>(16));
    jump_target = ctx.gpr[31];
    // nop
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_089FAB38:
    ctx.set_gpr(29, ctx.gpr[29] + static_cast<std::uint32_t>(-16));
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(12), ctx.gpr[31]);
    ctx.set_gpr(31, 0x089FAB48u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0124_entry, 124u, 637u, 0x089F77B0u>(ctx, &aot_mem) && ctx.pc == 0x089FAB48u) goto L_089FAB48;
    return;
L_089FAB48:
    ctx.set_gpr(3, 2246u << 16u);
    ctx.set_gpr(4, rt.memory().aot_load32(ctx.gpr[3] + static_cast<std::uint32_t>(-26860)));
    ctx.set_gpr(5, ctx.gpr[2] + 0u);
    ctx.set_gpr(6, 2208u << 16u);
    ctx.set_gpr(6, ctx.gpr[6] + static_cast<std::uint32_t>(-19992));
    ctx.set_gpr(31, 0x089FAB64u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0126_entry, 126u, 606u, 0x089FEFCCu>(ctx, &aot_mem) && ctx.pc == 0x089FAB64u) goto L_089FAB64;
    return;
L_089FAB64:
    ctx.set_gpr(2, 2246u << 16u);
    ctx.set_gpr(4, rt.memory().aot_load32(ctx.gpr[2] + static_cast<std::uint32_t>(-26860)));
    ctx.set_gpr(5, ctx.gpr[4] + 0u);
    ctx.set_gpr(6, 2208u << 16u);
    ctx.set_gpr(6, ctx.gpr[6] + static_cast<std::uint32_t>(-19656));
    ctx.set_gpr(31, 0x089FAB80u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0126_entry, 126u, 606u, 0x089FEFCCu>(ctx, &aot_mem) && ctx.pc == 0x089FAB80u) goto L_089FAB80;
    return;
L_089FAB80:
    ctx.set_gpr(31, 0x089FAB88u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0123_entry, 123u, 429u, 0x089F2FA4u>(ctx, &aot_mem) && ctx.pc == 0x089FAB88u) goto L_089FAB88;
    return;
L_089FAB88:
    ctx.set_gpr(3, 2246u << 16u);
    ctx.set_gpr(4, rt.memory().aot_load32(ctx.gpr[3] + static_cast<std::uint32_t>(-26860)));
    ctx.set_gpr(5, ctx.gpr[2] + 0u);
    ctx.set_gpr(6, 2208u << 16u);
    ctx.set_gpr(6, ctx.gpr[6] + static_cast<std::uint32_t>(-19772));
    ctx.set_gpr(31, 0x089FABA4u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0126_entry, 126u, 606u, 0x089FEFCCu>(ctx, &aot_mem) && ctx.pc == 0x089FABA4u) goto L_089FABA4;
    return;
L_089FABA4:
    ctx.set_gpr(2, 2246u << 16u);
    ctx.set_gpr(4, rt.memory().aot_load32(ctx.gpr[2] + static_cast<std::uint32_t>(-26860)));
    ctx.set_gpr(2, 2246u << 16u);
    ctx.set_gpr(5, rt.memory().aot_load32(ctx.gpr[2] + static_cast<std::uint32_t>(-26660)));
    ctx.set_gpr(6, 2208u << 16u);
    ctx.set_gpr(6, ctx.gpr[6] + static_cast<std::uint32_t>(-19116));
    ctx.set_gpr(31, 0x089FABC4u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0126_entry, 126u, 622u, 0x089FF0BCu>(ctx, &aot_mem) && ctx.pc == 0x089FABC4u) goto L_089FABC4;
    return;
L_089FABC4:
    ctx.set_gpr(2, 2246u << 16u);
    ctx.set_gpr(4, rt.memory().aot_load32(ctx.gpr[2] + static_cast<std::uint32_t>(-26860)));
    ctx.set_gpr(5, ctx.gpr[4] + 0u);
    ctx.set_gpr(6, 2208u << 16u);
    ctx.set_gpr(6, ctx.gpr[6] + static_cast<std::uint32_t>(-19368));
    ctx.set_gpr(31, 0x089FABE0u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0126_entry, 126u, 622u, 0x089FF0BCu>(ctx, &aot_mem) && ctx.pc == 0x089FABE0u) goto L_089FABE0;
    return;
L_089FABE0:
    ctx.set_gpr(2, 2246u << 16u);
    ctx.set_gpr(4, rt.memory().aot_load32(ctx.gpr[2] + static_cast<std::uint32_t>(-26860)));
    ctx.set_gpr(2, 2246u << 16u);
    ctx.set_gpr(5, rt.memory().aot_load32(ctx.gpr[2] + static_cast<std::uint32_t>(-26892)));
    ctx.set_gpr(6, 2208u << 16u);
    ctx.set_gpr(6, ctx.gpr[6] + static_cast<std::uint32_t>(-17968));
    ctx.set_gpr(31, 0x089FAC00u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0126_entry, 126u, 622u, 0x089FF0BCu>(ctx, &aot_mem) && ctx.pc == 0x089FAC00u) goto L_089FAC00;
    return;
L_089FAC00:
    ctx.set_gpr(2, 2246u << 16u);
    ctx.set_gpr(4, rt.memory().aot_load32(ctx.gpr[2] + static_cast<std::uint32_t>(-26860)));
    ctx.set_gpr(5, ctx.gpr[4] + 0u);
    ctx.set_gpr(6, 2208u << 16u);
    ctx.set_gpr(6, ctx.gpr[6] + static_cast<std::uint32_t>(-17440));
    ctx.set_gpr(31, 0x089FAC1Cu);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0126_entry, 126u, 614u, 0x089FF044u>(ctx, &aot_mem) && ctx.pc == 0x089FAC1Cu) goto L_089FAC1C;
    return;
L_089FAC1C:
    ctx.set_gpr(2, 2246u << 16u);
    ctx.set_gpr(4, rt.memory().aot_load32(ctx.gpr[2] + static_cast<std::uint32_t>(-26860)));
    ctx.set_gpr(2, 2246u << 16u);
    ctx.set_gpr(5, rt.memory().aot_load32(ctx.gpr[2] + static_cast<std::uint32_t>(-26660)));
    ctx.set_gpr(6, 2208u << 16u);
    ctx.set_gpr(6, ctx.gpr[6] + static_cast<std::uint32_t>(-17432));
    ctx.set_gpr(31, 0x089FAC3Cu);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0126_entry, 126u, 614u, 0x089FF044u>(ctx, &aot_mem) && ctx.pc == 0x089FAC3Cu) goto L_089FAC3C;
    return;
L_089FAC3C:
    ctx.set_gpr(2, 2246u << 16u);
    ctx.set_gpr(4, rt.memory().aot_load32(ctx.gpr[2] + static_cast<std::uint32_t>(-26860)));
    ctx.set_gpr(2, 2246u << 16u);
    ctx.set_gpr(5, rt.memory().aot_load32(ctx.gpr[2] + static_cast<std::uint32_t>(-26892)));
    ctx.set_gpr(6, 2208u << 16u);
    ctx.set_gpr(6, ctx.gpr[6] + static_cast<std::uint32_t>(-17252));
    ctx.set_gpr(31, 0x089FAC5Cu);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0126_entry, 126u, 614u, 0x089FF044u>(ctx, &aot_mem) && ctx.pc == 0x089FAC5Cu) goto L_089FAC5C;
    return;
L_089FAC5C:
    ctx.set_gpr(2, 2246u << 16u);
    ctx.set_gpr(4, rt.memory().aot_load32(ctx.gpr[2] + static_cast<std::uint32_t>(-26860)));
    ctx.set_gpr(5, 2208u << 16u);
    ctx.set_gpr(5, ctx.gpr[5] + static_cast<std::uint32_t>(-19524));
    ctx.set_gpr(31, 0x089FAC74u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0126_entry, 126u, 630u, 0x089FF134u>(ctx, &aot_mem) && ctx.pc == 0x089FAC74u) goto L_089FAC74;
    return;
L_089FAC74:
    ctx.set_gpr(2, 2246u << 16u);
    ctx.set_gpr(4, rt.memory().aot_load32(ctx.gpr[2] + static_cast<std::uint32_t>(-26860)));
    ctx.set_gpr(5, 2208u << 16u);
    ctx.set_gpr(5, ctx.gpr[5] + static_cast<std::uint32_t>(-17808));
    ctx.set_gpr(31, 0x089FAC8Cu);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0126_entry, 126u, 640u, 0x089FF1BCu>(ctx, &aot_mem) && ctx.pc == 0x089FAC8Cu) goto L_089FAC8C;
    return;
L_089FAC8C:
    ctx.set_gpr(2, 2246u << 16u);
    ctx.set_gpr(4, rt.memory().aot_load32(ctx.gpr[2] + static_cast<std::uint32_t>(-26860)));
    ctx.set_gpr(5, 2208u << 16u);
    ctx.set_gpr(5, ctx.gpr[5] + static_cast<std::uint32_t>(-17132));
    ctx.set_gpr(31, 0x089FACA4u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0126_entry, 126u, 635u, 0x089FF178u>(ctx, &aot_mem) && ctx.pc == 0x089FACA4u) goto L_089FACA4;
    return;
L_089FACA4:
    ctx.set_gpr(2, 2246u << 16u);
    ctx.set_gpr(4, rt.memory().aot_load32(ctx.gpr[2] + static_cast<std::uint32_t>(-26860)));
    ctx.set_gpr(5, 2208u << 16u);
    ctx.set_gpr(5, ctx.gpr[5] + static_cast<std::uint32_t>(-17612));
    ctx.set_gpr(31, 0x089FACBCu);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0126_entry, 126u, 650u, 0x089FF244u>(ctx, &aot_mem) && ctx.pc == 0x089FACBCu) goto L_089FACBC;
    return;
L_089FACBC:
    ctx.set_gpr(2, 2246u << 16u);
    ctx.set_gpr(4, rt.memory().aot_load32(ctx.gpr[2] + static_cast<std::uint32_t>(-26860)));
    ctx.set_gpr(5, 2208u << 16u);
    ctx.set_gpr(5, ctx.gpr[5] + static_cast<std::uint32_t>(-17516));
    ctx.set_gpr(31, 0x089FACD4u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0126_entry, 126u, 645u, 0x089FF200u>(ctx, &aot_mem) && ctx.pc == 0x089FACD4u) goto L_089FACD4;
    return;
L_089FACD4:
    ctx.set_gpr(2, 2246u << 16u);
    ctx.set_gpr(4, rt.memory().aot_load32(ctx.gpr[2] + static_cast<std::uint32_t>(-26860)));
    ctx.set_gpr(5, 2208u << 16u);
    ctx.set_gpr(5, ctx.gpr[5] + static_cast<std::uint32_t>(-17004));
    ctx.set_gpr(31, 0x089FACECu);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0126_entry, 126u, 655u, 0x089FF288u>(ctx, &aot_mem) && ctx.pc == 0x089FACECu) goto L_089FACEC;
    return;
L_089FACEC:
    ctx.set_gpr(2, 2246u << 16u);
    ctx.set_gpr(4, rt.memory().aot_load32(ctx.gpr[2] + static_cast<std::uint32_t>(-26860)));
    ctx.set_gpr(5, 2208u << 16u);
    ctx.set_gpr(5, ctx.gpr[5] + static_cast<std::uint32_t>(-16972));
    ctx.set_gpr(31, 0x089FAD04u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0126_entry, 126u, 660u, 0x089FF2CCu>(ctx, &aot_mem) && ctx.pc == 0x089FAD04u) goto L_089FAD04;
    return;
L_089FAD04:
    ctx.set_gpr(2, 2246u << 16u);
    ctx.set_gpr(4, rt.memory().aot_load32(ctx.gpr[2] + static_cast<std::uint32_t>(-26860)));
    ctx.set_gpr(5, 2208u << 16u);
    ctx.set_gpr(5, ctx.gpr[5] + static_cast<std::uint32_t>(-16964));
    ctx.set_gpr(31, 0x089FAD1Cu);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0126_entry, 126u, 665u, 0x089FF310u>(ctx, &aot_mem) && ctx.pc == 0x089FAD1Cu) goto L_089FAD1C;
    return;
L_089FAD1C:
    ctx.set_gpr(2, 2246u << 16u);
    ctx.set_gpr(4, rt.memory().aot_load32(ctx.gpr[2] + static_cast<std::uint32_t>(-26860)));
    ctx.set_gpr(5, 2208u << 16u);
    ctx.set_gpr(5, ctx.gpr[5] + static_cast<std::uint32_t>(-16952));
    ctx.set_gpr(31, 0x089FAD34u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0126_entry, 126u, 670u, 0x089FF354u>(ctx, &aot_mem) && ctx.pc == 0x089FAD34u) goto L_089FAD34;
    return;
L_089FAD34:
    ctx.set_gpr(31, rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(12)));
    ctx.set_gpr(29, ctx.gpr[29] + static_cast<std::uint32_t>(16));
    jump_target = ctx.gpr[31];
    // nop
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_089FAD44:
    ctx.set_gpr(29, ctx.gpr[29] + static_cast<std::uint32_t>(-96));
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(12), ctx.gpr[31]);
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(8), ctx.gpr[17]);
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(4), ctx.gpr[16]);
    ctx.set_gpr(17, ctx.gpr[4] + 0u);
    ctx.set_gpr(16, ctx.gpr[5] + 0u);
    ctx.fpr[1] = std::bit_cast<float>(rt.memory().aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(20)));
    ctx.fpr[0] = std::bit_cast<float>(rt.memory().aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(8)));
    { const float fs = ctx.fpr[1]; const float ft = ctx.fpr[0]; if ((std::isinf(fs) && ft == 0.0f) || (std::isinf(ft) && fs == 0.0f)) ctx.set_fpr_bits(0, 0x7FC00000u); else ctx.fpr[0] = fs * ft; }
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(84), std::bit_cast<std::uint32_t>(ctx.fpr[0]));
    ctx.fpr[0] = std::bit_cast<float>(rt.memory().aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(12)));
    { const float fs = ctx.fpr[1]; const float ft = ctx.fpr[0]; if ((std::isinf(fs) && ft == 0.0f) || (std::isinf(ft) && fs == 0.0f)) ctx.set_fpr_bits(0, 0x7FC00000u); else ctx.fpr[0] = fs * ft; }
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(88), std::bit_cast<std::uint32_t>(ctx.fpr[0]));
    ctx.fpr[0] = std::bit_cast<float>(rt.memory().aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(16)));
    { const float fs = ctx.fpr[1]; const float ft = ctx.fpr[0]; if ((std::isinf(fs) && ft == 0.0f) || (std::isinf(ft) && fs == 0.0f)) ctx.set_fpr_bits(0, 0x7FC00000u); else ctx.fpr[0] = fs * ft; }
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(92), std::bit_cast<std::uint32_t>(ctx.fpr[0]));
    ctx.set_gpr(4, ctx.gpr[29] + static_cast<std::uint32_t>(84));
    ctx.set_gpr(5, ctx.gpr[4] + 0u);
    ctx.set_gpr(6, ctx.gpr[16] + 0u);
    ctx.set_gpr(31, 0x089FAD98u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0127_entry, 127u, 271u, 0x08A03244u>(ctx, &aot_mem) && ctx.pc == 0x089FAD98u) goto L_089FAD98;
    return;
L_089FAD98:
    ctx.fpr[0] = std::bit_cast<float>(rt.memory().aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(20)));
    ctx.fpr[10] = std::bit_cast<float>(rt.memory().aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(40)));
    { const float fs = ctx.fpr[0]; const float ft = ctx.fpr[10]; if ((std::isinf(fs) && ft == 0.0f) || (std::isinf(ft) && fs == 0.0f)) ctx.set_fpr_bits(2, 0x7FC00000u); else ctx.fpr[2] = fs * ft; }
    ctx.fpr[9] = std::bit_cast<float>(rt.memory().aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(24)));
    ctx.fpr[8] = std::bit_cast<float>(rt.memory().aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(36)));
    { const float fs = ctx.fpr[9]; const float ft = ctx.fpr[8]; if ((std::isinf(fs) && ft == 0.0f) || (std::isinf(ft) && fs == 0.0f)) ctx.set_fpr_bits(1, 0x7FC00000u); else ctx.fpr[1] = fs * ft; }
    ctx.fpr[1] = ctx.fpr[2] - ctx.fpr[1];
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(20), std::bit_cast<std::uint32_t>(ctx.fpr[1]));
    ctx.fpr[7] = std::bit_cast<float>(rt.memory().aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(32)));
    { const float fs = ctx.fpr[9]; const float ft = ctx.fpr[7]; if ((std::isinf(fs) && ft == 0.0f) || (std::isinf(ft) && fs == 0.0f)) ctx.set_fpr_bits(2, 0x7FC00000u); else ctx.fpr[2] = fs * ft; }
    ctx.fpr[6] = std::bit_cast<float>(rt.memory().aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(16)));
    { const float fs = ctx.fpr[6]; const float ft = ctx.fpr[10]; if ((std::isinf(fs) && ft == 0.0f) || (std::isinf(ft) && fs == 0.0f)) ctx.set_fpr_bits(1, 0x7FC00000u); else ctx.fpr[1] = fs * ft; }
    ctx.fpr[1] = ctx.fpr[2] - ctx.fpr[1];
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(24), std::bit_cast<std::uint32_t>(ctx.fpr[1]));
    { const float fs = ctx.fpr[6]; const float ft = ctx.fpr[8]; if ((std::isinf(fs) && ft == 0.0f) || (std::isinf(ft) && fs == 0.0f)) ctx.set_fpr_bits(2, 0x7FC00000u); else ctx.fpr[2] = fs * ft; }
    { const float fs = ctx.fpr[0]; const float ft = ctx.fpr[7]; if ((std::isinf(fs) && ft == 0.0f) || (std::isinf(ft) && fs == 0.0f)) ctx.set_fpr_bits(1, 0x7FC00000u); else ctx.fpr[1] = fs * ft; }
    ctx.fpr[1] = ctx.fpr[2] - ctx.fpr[1];
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(28), std::bit_cast<std::uint32_t>(ctx.fpr[1]));
    ctx.fpr[5] = std::bit_cast<float>(rt.memory().aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(8)));
    { const float fs = ctx.fpr[8]; const float ft = ctx.fpr[5]; if ((std::isinf(fs) && ft == 0.0f) || (std::isinf(ft) && fs == 0.0f)) ctx.set_fpr_bits(2, 0x7FC00000u); else ctx.fpr[2] = fs * ft; }
    ctx.fpr[4] = std::bit_cast<float>(rt.memory().aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(4)));
    { const float fs = ctx.fpr[10]; const float ft = ctx.fpr[4]; if ((std::isinf(fs) && ft == 0.0f) || (std::isinf(ft) && fs == 0.0f)) ctx.set_fpr_bits(1, 0x7FC00000u); else ctx.fpr[1] = fs * ft; }
    ctx.fpr[1] = ctx.fpr[2] - ctx.fpr[1];
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(36), std::bit_cast<std::uint32_t>(ctx.fpr[1]));
    ctx.fpr[3] = std::bit_cast<float>(rt.memory().aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(0)));
    { const float fs = ctx.fpr[10]; const float ft = ctx.fpr[3]; if ((std::isinf(fs) && ft == 0.0f) || (std::isinf(ft) && fs == 0.0f)) ctx.set_fpr_bits(2, 0x7FC00000u); else ctx.fpr[2] = fs * ft; }
    { const float fs = ctx.fpr[7]; const float ft = ctx.fpr[5]; if ((std::isinf(fs) && ft == 0.0f) || (std::isinf(ft) && fs == 0.0f)) ctx.set_fpr_bits(1, 0x7FC00000u); else ctx.fpr[1] = fs * ft; }
    ctx.fpr[1] = ctx.fpr[2] - ctx.fpr[1];
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(40), std::bit_cast<std::uint32_t>(ctx.fpr[1]));
    { const float fs = ctx.fpr[7]; const float ft = ctx.fpr[4]; if ((std::isinf(fs) && ft == 0.0f) || (std::isinf(ft) && fs == 0.0f)) ctx.set_fpr_bits(2, 0x7FC00000u); else ctx.fpr[2] = fs * ft; }
    { const float fs = ctx.fpr[8]; const float ft = ctx.fpr[3]; if ((std::isinf(fs) && ft == 0.0f) || (std::isinf(ft) && fs == 0.0f)) ctx.set_fpr_bits(1, 0x7FC00000u); else ctx.fpr[1] = fs * ft; }
    ctx.fpr[1] = ctx.fpr[2] - ctx.fpr[1];
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(44), std::bit_cast<std::uint32_t>(ctx.fpr[1]));
    { const float fs = ctx.fpr[4]; const float ft = ctx.fpr[9]; if ((std::isinf(fs) && ft == 0.0f) || (std::isinf(ft) && fs == 0.0f)) ctx.set_fpr_bits(2, 0x7FC00000u); else ctx.fpr[2] = fs * ft; }
    { const float fs = ctx.fpr[5]; const float ft = ctx.fpr[0]; if ((std::isinf(fs) && ft == 0.0f) || (std::isinf(ft) && fs == 0.0f)) ctx.set_fpr_bits(1, 0x7FC00000u); else ctx.fpr[1] = fs * ft; }
    ctx.fpr[1] = ctx.fpr[2] - ctx.fpr[1];
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(52), std::bit_cast<std::uint32_t>(ctx.fpr[1]));
    { const float fs = ctx.fpr[5]; const float ft = ctx.fpr[6]; if ((std::isinf(fs) && ft == 0.0f) || (std::isinf(ft) && fs == 0.0f)) ctx.set_fpr_bits(2, 0x7FC00000u); else ctx.fpr[2] = fs * ft; }
    { const float fs = ctx.fpr[3]; const float ft = ctx.fpr[9]; if ((std::isinf(fs) && ft == 0.0f) || (std::isinf(ft) && fs == 0.0f)) ctx.set_fpr_bits(1, 0x7FC00000u); else ctx.fpr[1] = fs * ft; }
    ctx.fpr[1] = ctx.fpr[2] - ctx.fpr[1];
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(56), std::bit_cast<std::uint32_t>(ctx.fpr[1]));
    { const float fs = ctx.fpr[3]; const float ft = ctx.fpr[0]; if ((std::isinf(fs) && ft == 0.0f) || (std::isinf(ft) && fs == 0.0f)) ctx.set_fpr_bits(1, 0x7FC00000u); else ctx.fpr[1] = fs * ft; }
    { const float fs = ctx.fpr[4]; const float ft = ctx.fpr[6]; if ((std::isinf(fs) && ft == 0.0f) || (std::isinf(ft) && fs == 0.0f)) ctx.set_fpr_bits(0, 0x7FC00000u); else ctx.fpr[0] = fs * ft; }
    ctx.fpr[0] = ctx.fpr[1] - ctx.fpr[0];
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(60), std::bit_cast<std::uint32_t>(ctx.fpr[0]));
    ctx.set_gpr(4, ctx.gpr[17] + static_cast<std::uint32_t>(8));
    ctx.set_gpr(5, ctx.gpr[4] + 0u);
    ctx.set_gpr(6, ctx.gpr[29] + static_cast<std::uint32_t>(20));
    ctx.set_gpr(31, 0x089FAE60u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0127_entry, 127u, 270u, 0x08A031C4u>(ctx, &aot_mem) && ctx.pc == 0x089FAE60u) goto L_089FAE60;
    return;
L_089FAE60:
    ctx.fpr[3] = std::bit_cast<float>(rt.memory().aot_load32(ctx.gpr[17] + static_cast<std::uint32_t>(12)));
    ctx.fpr[0] = std::bit_cast<float>(rt.memory().aot_load32(ctx.gpr[17] + static_cast<std::uint32_t>(8)));
    ctx.fpr[2] = std::bit_cast<float>(rt.memory().aot_load32(ctx.gpr[17] + static_cast<std::uint32_t>(16)));
    { const float fs = ctx.fpr[0]; const float ft = ctx.fpr[0]; if ((std::isinf(fs) && ft == 0.0f) || (std::isinf(ft) && fs == 0.0f)) ctx.set_fpr_bits(1, 0x7FC00000u); else ctx.fpr[1] = fs * ft; }
    { const float fs = ctx.fpr[3]; const float ft = ctx.fpr[3]; if ((std::isinf(fs) && ft == 0.0f) || (std::isinf(ft) && fs == 0.0f)) ctx.set_fpr_bits(0, 0x7FC00000u); else ctx.fpr[0] = fs * ft; }
    ctx.fpr[1] = ctx.fpr[1] + ctx.fpr[0];
    { const float fs = ctx.fpr[2]; const float ft = ctx.fpr[2]; if ((std::isinf(fs) && ft == 0.0f) || (std::isinf(ft) && fs == 0.0f)) ctx.set_fpr_bits(0, 0x7FC00000u); else ctx.fpr[0] = fs * ft; }
    ctx.fpr[0] = ctx.fpr[0] + ctx.fpr[1];
    ctx.fpr[1] = std::sqrt(ctx.fpr[0]);
    ctx.set_gpr(2, 16256u << 16u);
    ctx.fpr[0] = std::bit_cast<float>(ctx.gpr[2]);
    ctx.fpr[1] = ctx.fpr[0] / ctx.fpr[1];
    ctx.fpr[0] = std::bit_cast<float>(rt.memory().aot_load32(ctx.gpr[17] + static_cast<std::uint32_t>(8)));
    { const float fs = ctx.fpr[0]; const float ft = ctx.fpr[1]; if ((std::isinf(fs) && ft == 0.0f) || (std::isinf(ft) && fs == 0.0f)) ctx.set_fpr_bits(0, 0x7FC00000u); else ctx.fpr[0] = fs * ft; }
    rt.memory().aot_store32(ctx.gpr[17] + static_cast<std::uint32_t>(8), std::bit_cast<std::uint32_t>(ctx.fpr[0]));
    ctx.fpr[0] = std::bit_cast<float>(rt.memory().aot_load32(ctx.gpr[17] + static_cast<std::uint32_t>(12)));
    { const float fs = ctx.fpr[0]; const float ft = ctx.fpr[1]; if ((std::isinf(fs) && ft == 0.0f) || (std::isinf(ft) && fs == 0.0f)) ctx.set_fpr_bits(0, 0x7FC00000u); else ctx.fpr[0] = fs * ft; }
    rt.memory().aot_store32(ctx.gpr[17] + static_cast<std::uint32_t>(12), std::bit_cast<std::uint32_t>(ctx.fpr[0]));
    ctx.fpr[0] = std::bit_cast<float>(rt.memory().aot_load32(ctx.gpr[17] + static_cast<std::uint32_t>(16)));
    { const float fs = ctx.fpr[0]; const float ft = ctx.fpr[1]; if ((std::isinf(fs) && ft == 0.0f) || (std::isinf(ft) && fs == 0.0f)) ctx.set_fpr_bits(0, 0x7FC00000u); else ctx.fpr[0] = fs * ft; }
    rt.memory().aot_store32(ctx.gpr[17] + static_cast<std::uint32_t>(16), std::bit_cast<std::uint32_t>(ctx.fpr[0]));
    ctx.fpr[1] = std::bit_cast<float>(rt.memory().aot_load32(ctx.gpr[17] + static_cast<std::uint32_t>(8)));
    ctx.fpr[0] = std::bit_cast<float>(rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(84)));
    { const float fs = ctx.fpr[1]; const float ft = ctx.fpr[0]; if ((std::isinf(fs) && ft == 0.0f) || (std::isinf(ft) && fs == 0.0f)) ctx.set_fpr_bits(2, 0x7FC00000u); else ctx.fpr[2] = fs * ft; }
    ctx.fpr[1] = std::bit_cast<float>(rt.memory().aot_load32(ctx.gpr[17] + static_cast<std::uint32_t>(12)));
    ctx.fpr[0] = std::bit_cast<float>(rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(88)));
    { const float fs = ctx.fpr[1]; const float ft = ctx.fpr[0]; if ((std::isinf(fs) && ft == 0.0f) || (std::isinf(ft) && fs == 0.0f)) ctx.set_fpr_bits(0, 0x7FC00000u); else ctx.fpr[0] = fs * ft; }
    ctx.fpr[2] = ctx.fpr[2] + ctx.fpr[0];
    ctx.fpr[1] = std::bit_cast<float>(rt.memory().aot_load32(ctx.gpr[17] + static_cast<std::uint32_t>(16)));
    ctx.fpr[0] = std::bit_cast<float>(rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(92)));
    { const float fs = ctx.fpr[1]; const float ft = ctx.fpr[0]; if ((std::isinf(fs) && ft == 0.0f) || (std::isinf(ft) && fs == 0.0f)) ctx.set_fpr_bits(0, 0x7FC00000u); else ctx.fpr[0] = fs * ft; }
    ctx.fpr[0] = ctx.fpr[0] + ctx.fpr[2];
    rt.memory().aot_store32(ctx.gpr[17] + static_cast<std::uint32_t>(20), std::bit_cast<std::uint32_t>(ctx.fpr[0]));
    ctx.set_gpr(4, ctx.gpr[17] + static_cast<std::uint32_t>(8));
    ctx.set_gpr(31, 0x089FAEF0u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0127_entry, 127u, 250u, 0x08A03084u>(ctx, &aot_mem) && ctx.pc == 0x089FAEF0u) goto L_089FAEF0;
    return;
L_089FAEF0:
    rt.memory().aot_store32(ctx.gpr[17] + static_cast<std::uint32_t>(24), ctx.gpr[2]);
    ctx.set_gpr(31, rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(12)));
    ctx.set_gpr(17, rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(8)));
    ctx.set_gpr(16, rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(4)));
    ctx.set_gpr(29, ctx.gpr[29] + static_cast<std::uint32_t>(96));
    jump_target = ctx.gpr[31];
    // nop
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_089FAF0C:
    ctx.set_gpr(29, ctx.gpr[29] + static_cast<std::uint32_t>(-16));
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(12), ctx.gpr[31]);
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(8), ctx.gpr[16]);
    ctx.set_gpr(16, ctx.gpr[4] + 0u);
    ctx.fpr[0] = std::bit_cast<float>(rt.memory().aot_load32(ctx.gpr[5] + static_cast<std::uint32_t>(0)));
    rt.memory().aot_store32(ctx.gpr[4] + static_cast<std::uint32_t>(8), std::bit_cast<std::uint32_t>(ctx.fpr[0]));
    ctx.fpr[0] = std::bit_cast<float>(rt.memory().aot_load32(ctx.gpr[5] + static_cast<std::uint32_t>(4)));
    rt.memory().aot_store32(ctx.gpr[4] + static_cast<std::uint32_t>(12), std::bit_cast<std::uint32_t>(ctx.fpr[0]));
    ctx.fpr[0] = std::bit_cast<float>(rt.memory().aot_load32(ctx.gpr[5] + static_cast<std::uint32_t>(8)));
    rt.memory().aot_store32(ctx.gpr[4] + static_cast<std::uint32_t>(16), std::bit_cast<std::uint32_t>(ctx.fpr[0]));
    ctx.fpr[3] = std::bit_cast<float>(rt.memory().aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(12)));
    ctx.fpr[0] = std::bit_cast<float>(rt.memory().aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(8)));
    ctx.fpr[2] = std::bit_cast<float>(rt.memory().aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(16)));
    { const float fs = ctx.fpr[0]; const float ft = ctx.fpr[0]; if ((std::isinf(fs) && ft == 0.0f) || (std::isinf(ft) && fs == 0.0f)) ctx.set_fpr_bits(1, 0x7FC00000u); else ctx.fpr[1] = fs * ft; }
    { const float fs = ctx.fpr[3]; const float ft = ctx.fpr[3]; if ((std::isinf(fs) && ft == 0.0f) || (std::isinf(ft) && fs == 0.0f)) ctx.set_fpr_bits(0, 0x7FC00000u); else ctx.fpr[0] = fs * ft; }
    ctx.fpr[1] = ctx.fpr[1] + ctx.fpr[0];
    { const float fs = ctx.fpr[2]; const float ft = ctx.fpr[2]; if ((std::isinf(fs) && ft == 0.0f) || (std::isinf(ft) && fs == 0.0f)) ctx.set_fpr_bits(0, 0x7FC00000u); else ctx.fpr[0] = fs * ft; }
    ctx.fpr[0] = ctx.fpr[0] + ctx.fpr[1];
    ctx.fpr[1] = std::sqrt(ctx.fpr[0]);
    ctx.set_gpr(2, 16256u << 16u);
    ctx.fpr[0] = std::bit_cast<float>(ctx.gpr[2]);
    ctx.fpr[1] = ctx.fpr[0] / ctx.fpr[1];
    ctx.fpr[0] = std::bit_cast<float>(rt.memory().aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(8)));
    { const float fs = ctx.fpr[0]; const float ft = ctx.fpr[1]; if ((std::isinf(fs) && ft == 0.0f) || (std::isinf(ft) && fs == 0.0f)) ctx.set_fpr_bits(0, 0x7FC00000u); else ctx.fpr[0] = fs * ft; }
    rt.memory().aot_store32(ctx.gpr[4] + static_cast<std::uint32_t>(8), std::bit_cast<std::uint32_t>(ctx.fpr[0]));
    ctx.fpr[0] = std::bit_cast<float>(rt.memory().aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(12)));
    { const float fs = ctx.fpr[0]; const float ft = ctx.fpr[1]; if ((std::isinf(fs) && ft == 0.0f) || (std::isinf(ft) && fs == 0.0f)) ctx.set_fpr_bits(0, 0x7FC00000u); else ctx.fpr[0] = fs * ft; }
    rt.memory().aot_store32(ctx.gpr[4] + static_cast<std::uint32_t>(12), std::bit_cast<std::uint32_t>(ctx.fpr[0]));
    ctx.fpr[0] = std::bit_cast<float>(rt.memory().aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(16)));
    { const float fs = ctx.fpr[0]; const float ft = ctx.fpr[1]; if ((std::isinf(fs) && ft == 0.0f) || (std::isinf(ft) && fs == 0.0f)) ctx.set_fpr_bits(0, 0x7FC00000u); else ctx.fpr[0] = fs * ft; }
    rt.memory().aot_store32(ctx.gpr[4] + static_cast<std::uint32_t>(16), std::bit_cast<std::uint32_t>(ctx.fpr[0]));
    rt.memory().aot_store32(ctx.gpr[4] + static_cast<std::uint32_t>(20), std::bit_cast<std::uint32_t>(ctx.fpr[12]));
    ctx.set_gpr(4, ctx.gpr[16] + static_cast<std::uint32_t>(8));
    ctx.set_gpr(31, 0x089FAF98u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0127_entry, 127u, 250u, 0x08A03084u>(ctx, &aot_mem) && ctx.pc == 0x089FAF98u) goto L_089FAF98;
    return;
L_089FAF98:
    rt.memory().aot_store32(ctx.gpr[16] + static_cast<std::uint32_t>(24), ctx.gpr[2]);
    ctx.set_gpr(31, rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(12)));
    ctx.set_gpr(16, rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(8)));
    ctx.set_gpr(29, ctx.gpr[29] + static_cast<std::uint32_t>(16));
    jump_target = ctx.gpr[31];
    // nop
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_089FAFB0:
    ctx.set_gpr(29, ctx.gpr[29] + static_cast<std::uint32_t>(-80));
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(28), ctx.gpr[31]);
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(24), ctx.gpr[19]);
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(20), ctx.gpr[18]);
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(16), ctx.gpr[17]);
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(12), ctx.gpr[16]);
    ctx.set_gpr(19, ctx.gpr[4] + 0u);
    ctx.set_gpr(18, ctx.gpr[5] + 0u);
    ctx.set_gpr(17, ctx.gpr[6] + 0u);
    ctx.set_gpr(16, ctx.gpr[7] + 0u);
    ctx.fpr[10] = std::bit_cast<float>(rt.memory().aot_load32(ctx.gpr[6] + static_cast<std::uint32_t>(16)));
    ctx.fpr[9] = std::bit_cast<float>(rt.memory().aot_load32(ctx.gpr[6] + static_cast<std::uint32_t>(12)));
    ctx.fpr[8] = std::bit_cast<float>(rt.memory().aot_load32(ctx.gpr[6] + static_cast<std::uint32_t>(8)));
    ctx.fpr[7] = std::bit_cast<float>(rt.memory().aot_load32(ctx.gpr[5] + static_cast<std::uint32_t>(16)));
    ctx.fpr[6] = std::bit_cast<float>(rt.memory().aot_load32(ctx.gpr[5] + static_cast<std::uint32_t>(12)));
    ctx.fpr[5] = std::bit_cast<float>(rt.memory().aot_load32(ctx.gpr[5] + static_cast<std::uint32_t>(8)));
    ctx.fpr[4] = std::bit_cast<float>(rt.memory().aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(16)));
    ctx.fpr[3] = std::bit_cast<float>(rt.memory().aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(12)));
    ctx.fpr[2] = std::bit_cast<float>(rt.memory().aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(8)));
    { const float fs = ctx.fpr[6]; const float ft = ctx.fpr[10]; if ((std::isinf(fs) && ft == 0.0f) || (std::isinf(ft) && fs == 0.0f)) ctx.set_fpr_bits(1, 0x7FC00000u); else ctx.fpr[1] = fs * ft; }
    { const float fs = ctx.fpr[7]; const float ft = ctx.fpr[9]; if ((std::isinf(fs) && ft == 0.0f) || (std::isinf(ft) && fs == 0.0f)) ctx.set_fpr_bits(0, 0x7FC00000u); else ctx.fpr[0] = fs * ft; }
    ctx.fpr[0] = ctx.fpr[1] - ctx.fpr[0];
    { const float fs = ctx.fpr[2]; const float ft = ctx.fpr[0]; if ((std::isinf(fs) && ft == 0.0f) || (std::isinf(ft) && fs == 0.0f)) ctx.set_fpr_bits(2, 0x7FC00000u); else ctx.fpr[2] = fs * ft; }
    { const float fs = ctx.fpr[3]; const float ft = ctx.fpr[10]; if ((std::isinf(fs) && ft == 0.0f) || (std::isinf(ft) && fs == 0.0f)) ctx.set_fpr_bits(1, 0x7FC00000u); else ctx.fpr[1] = fs * ft; }
    { const float fs = ctx.fpr[4]; const float ft = ctx.fpr[9]; if ((std::isinf(fs) && ft == 0.0f) || (std::isinf(ft) && fs == 0.0f)) ctx.set_fpr_bits(0, 0x7FC00000u); else ctx.fpr[0] = fs * ft; }
    ctx.fpr[0] = ctx.fpr[1] - ctx.fpr[0];
    { const float fs = ctx.fpr[5]; const float ft = ctx.fpr[0]; if ((std::isinf(fs) && ft == 0.0f) || (std::isinf(ft) && fs == 0.0f)) ctx.set_fpr_bits(0, 0x7FC00000u); else ctx.fpr[0] = fs * ft; }
    ctx.fpr[2] = ctx.fpr[2] - ctx.fpr[0];
    { const float fs = ctx.fpr[3]; const float ft = ctx.fpr[7]; if ((std::isinf(fs) && ft == 0.0f) || (std::isinf(ft) && fs == 0.0f)) ctx.set_fpr_bits(1, 0x7FC00000u); else ctx.fpr[1] = fs * ft; }
    { const float fs = ctx.fpr[4]; const float ft = ctx.fpr[6]; if ((std::isinf(fs) && ft == 0.0f) || (std::isinf(ft) && fs == 0.0f)) ctx.set_fpr_bits(0, 0x7FC00000u); else ctx.fpr[0] = fs * ft; }
    ctx.fpr[0] = ctx.fpr[1] - ctx.fpr[0];
    { const float fs = ctx.fpr[8]; const float ft = ctx.fpr[0]; if ((std::isinf(fs) && ft == 0.0f) || (std::isinf(ft) && fs == 0.0f)) ctx.set_fpr_bits(0, 0x7FC00000u); else ctx.fpr[0] = fs * ft; }
    ctx.fpr[0] = ctx.fpr[0] + ctx.fpr[2];
    ctx.set_fpr_bits(1, ctx.fpr_bits(0) & 0x7FFFFFFFu);
    ctx.set_gpr(2, 128u << 16u);
    ctx.fpr[0] = std::bit_cast<float>(ctx.gpr[2]);
    ctx.set_fpu_condition((ctx.fpr[1] < ctx.fpr[0]));
    // nop
    { const bool branch_taken = !ctx.fpu_condition();
    // nop
      if (branch_taken) {
          goto L_089FB05C;
      }
      goto L_089FB050;
    }
L_089FB050:
    ctx.set_gpr(2, 0u + 0u);
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_089FB1C8;
      }
      goto L_089FB05C;
    }
L_089FB05C:
    ctx.set_gpr(4, ctx.gpr[29] + static_cast<std::uint32_t>(68));
    ctx.set_gpr(5, ctx.gpr[18] + static_cast<std::uint32_t>(8));
    ctx.set_gpr(6, ctx.gpr[17] + static_cast<std::uint32_t>(8));
    ctx.set_gpr(31, 0x089FB070u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0127_entry, 127u, 206u, 0x08A02C7Cu>(ctx, &aot_mem) && ctx.pc == 0x089FB070u) goto L_089FB070;
    return;
L_089FB070:
    ctx.set_gpr(4, ctx.gpr[29] + static_cast<std::uint32_t>(56));
    ctx.set_gpr(5, ctx.gpr[17] + static_cast<std::uint32_t>(8));
    ctx.set_gpr(6, ctx.gpr[19] + static_cast<std::uint32_t>(8));
    ctx.set_gpr(31, 0x089FB084u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0127_entry, 127u, 206u, 0x08A02C7Cu>(ctx, &aot_mem) && ctx.pc == 0x089FB084u) goto L_089FB084;
    return;
L_089FB084:
    ctx.set_gpr(4, ctx.gpr[29] + static_cast<std::uint32_t>(44));
    ctx.set_gpr(5, ctx.gpr[19] + static_cast<std::uint32_t>(8));
    ctx.set_gpr(6, ctx.gpr[18] + static_cast<std::uint32_t>(8));
    ctx.set_gpr(31, 0x089FB098u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0127_entry, 127u, 206u, 0x08A02C7Cu>(ctx, &aot_mem) && ctx.pc == 0x089FB098u) goto L_089FB098;
    return;
L_089FB098:
    ctx.fpr[1] = std::bit_cast<float>(rt.memory().aot_load32(ctx.gpr[19] + static_cast<std::uint32_t>(8)));
    ctx.fpr[0] = std::bit_cast<float>(rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(68)));
    { const float fs = ctx.fpr[1]; const float ft = ctx.fpr[0]; if ((std::isinf(fs) && ft == 0.0f) || (std::isinf(ft) && fs == 0.0f)) ctx.set_fpr_bits(2, 0x7FC00000u); else ctx.fpr[2] = fs * ft; }
    ctx.fpr[1] = std::bit_cast<float>(rt.memory().aot_load32(ctx.gpr[19] + static_cast<std::uint32_t>(12)));
    ctx.fpr[0] = std::bit_cast<float>(rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(72)));
    { const float fs = ctx.fpr[1]; const float ft = ctx.fpr[0]; if ((std::isinf(fs) && ft == 0.0f) || (std::isinf(ft) && fs == 0.0f)) ctx.set_fpr_bits(0, 0x7FC00000u); else ctx.fpr[0] = fs * ft; }
    ctx.fpr[2] = ctx.fpr[2] + ctx.fpr[0];
    ctx.fpr[1] = std::bit_cast<float>(rt.memory().aot_load32(ctx.gpr[19] + static_cast<std::uint32_t>(16)));
    ctx.fpr[0] = std::bit_cast<float>(rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(76)));
    { const float fs = ctx.fpr[1]; const float ft = ctx.fpr[0]; if ((std::isinf(fs) && ft == 0.0f) || (std::isinf(ft) && fs == 0.0f)) ctx.set_fpr_bits(0, 0x7FC00000u); else ctx.fpr[0] = fs * ft; }
    ctx.fpr[0] = ctx.fpr[0] + ctx.fpr[2];
    ctx.fpr[2] = std::bit_cast<float>(rt.memory().aot_load32(ctx.gpr[19] + static_cast<std::uint32_t>(20)));
    ctx.fpr[1] = std::bit_cast<float>(rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(68)));
    { const float fs = ctx.fpr[1]; const float ft = ctx.fpr[2]; if ((std::isinf(fs) && ft == 0.0f) || (std::isinf(ft) && fs == 0.0f)) ctx.set_fpr_bits(4, 0x7FC00000u); else ctx.fpr[4] = fs * ft; }
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(68), std::bit_cast<std::uint32_t>(ctx.fpr[4]));
    ctx.fpr[1] = std::bit_cast<float>(rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(72)));
    { const float fs = ctx.fpr[1]; const float ft = ctx.fpr[2]; if ((std::isinf(fs) && ft == 0.0f) || (std::isinf(ft) && fs == 0.0f)) ctx.set_fpr_bits(1, 0x7FC00000u); else ctx.fpr[1] = fs * ft; }
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(72), std::bit_cast<std::uint32_t>(ctx.fpr[1]));
    ctx.fpr[1] = std::bit_cast<float>(rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(76)));
    { const float fs = ctx.fpr[1]; const float ft = ctx.fpr[2]; if ((std::isinf(fs) && ft == 0.0f) || (std::isinf(ft) && fs == 0.0f)) ctx.set_fpr_bits(1, 0x7FC00000u); else ctx.fpr[1] = fs * ft; }
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(76), std::bit_cast<std::uint32_t>(ctx.fpr[1]));
    ctx.fpr[2] = std::bit_cast<float>(rt.memory().aot_load32(ctx.gpr[18] + static_cast<std::uint32_t>(20)));
    ctx.fpr[1] = std::bit_cast<float>(rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(56)));
    { const float fs = ctx.fpr[1]; const float ft = ctx.fpr[2]; if ((std::isinf(fs) && ft == 0.0f) || (std::isinf(ft) && fs == 0.0f)) ctx.set_fpr_bits(3, 0x7FC00000u); else ctx.fpr[3] = fs * ft; }
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(56), std::bit_cast<std::uint32_t>(ctx.fpr[3]));
    ctx.fpr[1] = std::bit_cast<float>(rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(60)));
    { const float fs = ctx.fpr[1]; const float ft = ctx.fpr[2]; if ((std::isinf(fs) && ft == 0.0f) || (std::isinf(ft) && fs == 0.0f)) ctx.set_fpr_bits(1, 0x7FC00000u); else ctx.fpr[1] = fs * ft; }
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(60), std::bit_cast<std::uint32_t>(ctx.fpr[1]));
    ctx.fpr[1] = std::bit_cast<float>(rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(64)));
    { const float fs = ctx.fpr[1]; const float ft = ctx.fpr[2]; if ((std::isinf(fs) && ft == 0.0f) || (std::isinf(ft) && fs == 0.0f)) ctx.set_fpr_bits(1, 0x7FC00000u); else ctx.fpr[1] = fs * ft; }
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(64), std::bit_cast<std::uint32_t>(ctx.fpr[1]));
    ctx.fpr[2] = std::bit_cast<float>(rt.memory().aot_load32(ctx.gpr[17] + static_cast<std::uint32_t>(20)));
    ctx.fpr[1] = std::bit_cast<float>(rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(44)));
    { const float fs = ctx.fpr[1]; const float ft = ctx.fpr[2]; if ((std::isinf(fs) && ft == 0.0f) || (std::isinf(ft) && fs == 0.0f)) ctx.set_fpr_bits(1, 0x7FC00000u); else ctx.fpr[1] = fs * ft; }
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(44), std::bit_cast<std::uint32_t>(ctx.fpr[1]));
    ctx.fpr[1] = std::bit_cast<float>(rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(48)));
    { const float fs = ctx.fpr[1]; const float ft = ctx.fpr[2]; if ((std::isinf(fs) && ft == 0.0f) || (std::isinf(ft) && fs == 0.0f)) ctx.set_fpr_bits(1, 0x7FC00000u); else ctx.fpr[1] = fs * ft; }
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(48), std::bit_cast<std::uint32_t>(ctx.fpr[1]));
    ctx.fpr[1] = std::bit_cast<float>(rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(52)));
    { const float fs = ctx.fpr[1]; const float ft = ctx.fpr[2]; if ((std::isinf(fs) && ft == 0.0f) || (std::isinf(ft) && fs == 0.0f)) ctx.set_fpr_bits(1, 0x7FC00000u); else ctx.fpr[1] = fs * ft; }
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(52), std::bit_cast<std::uint32_t>(ctx.fpr[1]));
    ctx.fpr[1] = ctx.fpr[4] + ctx.fpr[3];
    rt.memory().aot_store32(ctx.gpr[16] + static_cast<std::uint32_t>(0), std::bit_cast<std::uint32_t>(ctx.fpr[1]));
    ctx.fpr[2] = std::bit_cast<float>(rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(72)));
    ctx.fpr[1] = std::bit_cast<float>(rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(60)));
    ctx.fpr[1] = ctx.fpr[2] + ctx.fpr[1];
    rt.memory().aot_store32(ctx.gpr[16] + static_cast<std::uint32_t>(4), std::bit_cast<std::uint32_t>(ctx.fpr[1]));
    ctx.fpr[2] = std::bit_cast<float>(rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(76)));
    ctx.fpr[1] = std::bit_cast<float>(rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(64)));
    ctx.fpr[1] = ctx.fpr[2] + ctx.fpr[1];
    rt.memory().aot_store32(ctx.gpr[16] + static_cast<std::uint32_t>(8), std::bit_cast<std::uint32_t>(ctx.fpr[1]));
    ctx.fpr[2] = std::bit_cast<float>(rt.memory().aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(0)));
    ctx.fpr[1] = std::bit_cast<float>(rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(44)));
    ctx.fpr[1] = ctx.fpr[2] + ctx.fpr[1];
    rt.memory().aot_store32(ctx.gpr[16] + static_cast<std::uint32_t>(0), std::bit_cast<std::uint32_t>(ctx.fpr[1]));
    ctx.fpr[2] = std::bit_cast<float>(rt.memory().aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(4)));
    ctx.fpr[1] = std::bit_cast<float>(rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(48)));
    ctx.fpr[1] = ctx.fpr[2] + ctx.fpr[1];
    rt.memory().aot_store32(ctx.gpr[16] + static_cast<std::uint32_t>(4), std::bit_cast<std::uint32_t>(ctx.fpr[1]));
    ctx.fpr[2] = std::bit_cast<float>(rt.memory().aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(8)));
    ctx.fpr[1] = std::bit_cast<float>(rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(52)));
    ctx.fpr[1] = ctx.fpr[2] + ctx.fpr[1];
    rt.memory().aot_store32(ctx.gpr[16] + static_cast<std::uint32_t>(8), std::bit_cast<std::uint32_t>(ctx.fpr[1]));
    ctx.set_gpr(2, 16256u << 16u);
    ctx.fpr[1] = std::bit_cast<float>(ctx.gpr[2]);
    ctx.fpr[1] = ctx.fpr[1] / ctx.fpr[0];
    ctx.fpr[0] = std::bit_cast<float>(rt.memory().aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(0)));
    { const float fs = ctx.fpr[0]; const float ft = ctx.fpr[1]; if ((std::isinf(fs) && ft == 0.0f) || (std::isinf(ft) && fs == 0.0f)) ctx.set_fpr_bits(0, 0x7FC00000u); else ctx.fpr[0] = fs * ft; }
    rt.memory().aot_store32(ctx.gpr[16] + static_cast<std::uint32_t>(0), std::bit_cast<std::uint32_t>(ctx.fpr[0]));
    ctx.fpr[0] = std::bit_cast<float>(rt.memory().aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(4)));
    { const float fs = ctx.fpr[0]; const float ft = ctx.fpr[1]; if ((std::isinf(fs) && ft == 0.0f) || (std::isinf(ft) && fs == 0.0f)) ctx.set_fpr_bits(0, 0x7FC00000u); else ctx.fpr[0] = fs * ft; }
    rt.memory().aot_store32(ctx.gpr[16] + static_cast<std::uint32_t>(4), std::bit_cast<std::uint32_t>(ctx.fpr[0]));
    ctx.fpr[0] = std::bit_cast<float>(rt.memory().aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(8)));
    { const float fs = ctx.fpr[0]; const float ft = ctx.fpr[1]; if ((std::isinf(fs) && ft == 0.0f) || (std::isinf(ft) && fs == 0.0f)) ctx.set_fpr_bits(0, 0x7FC00000u); else ctx.fpr[0] = fs * ft; }
    rt.memory().aot_store32(ctx.gpr[16] + static_cast<std::uint32_t>(8), std::bit_cast<std::uint32_t>(ctx.fpr[0]));
    ctx.set_gpr(2, 0u + static_cast<std::uint32_t>(1));
    goto L_089FB1C8;
L_089FB1C8:
    ctx.set_gpr(31, rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(28)));
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
L_089FB1E8:
    ctx.set_gpr(29, ctx.gpr[29] + static_cast<std::uint32_t>(-32));
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(12), ctx.gpr[31]);
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(8), ctx.gpr[16]);
    ctx.set_gpr(16, ctx.gpr[4] + 0u);
    ctx.set_gpr(4, ctx.gpr[5] + 0u);
    ctx.fpr[1] = std::bit_cast<float>(rt.memory().aot_load32(ctx.gpr[5] + static_cast<std::uint32_t>(8)));
    ctx.fpr[0] = std::bit_cast<float>(rt.memory().aot_load32(ctx.gpr[5] + static_cast<std::uint32_t>(20)));
    ctx.set_fpu_condition(((std::isnan(ctx.fpr[1]) || std::isnan(ctx.fpr[0])) || ctx.fpr[1] <= ctx.fpr[0]));
    ctx.set_gpr(2, 0u + static_cast<std::uint32_t>(1));
    { const bool branch_taken = !ctx.fpu_condition();
    // nop
      if (branch_taken) {
          goto L_089FB218;
      }
      goto L_089FB214;
    }
L_089FB214:
    ctx.set_gpr(2, 0u + 0u);
    goto L_089FB218;
L_089FB218:
    { const bool branch_taken = ctx.gpr[2] != 0u;
    // nop
      if (branch_taken) {
          goto L_089FB23C;
      }
      goto L_089FB220;
    }
L_089FB220:
    ctx.fpr[1] = std::bit_cast<float>(rt.memory().aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(12)));
    ctx.fpr[0] = std::bit_cast<float>(rt.memory().aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(24)));
    ctx.set_fpu_condition(((std::isnan(ctx.fpr[1]) || std::isnan(ctx.fpr[0])) || ctx.fpr[1] <= ctx.fpr[0]));
    ctx.set_gpr(2, 0u + static_cast<std::uint32_t>(1));
    { const bool branch_taken = !ctx.fpu_condition();
    // nop
      if (branch_taken) {
          goto L_089FB23C;
      }
      goto L_089FB238;
    }
L_089FB238:
    ctx.set_gpr(2, 0u + 0u);
    goto L_089FB23C;
L_089FB23C:
    { const bool branch_taken = ctx.gpr[2] != 0u;
    // nop
      if (branch_taken) {
          goto L_089FB260;
      }
      goto L_089FB244;
    }
L_089FB244:
    ctx.fpr[1] = std::bit_cast<float>(rt.memory().aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(16)));
    ctx.fpr[0] = std::bit_cast<float>(rt.memory().aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(28)));
    ctx.set_fpu_condition(((std::isnan(ctx.fpr[1]) || std::isnan(ctx.fpr[0])) || ctx.fpr[1] <= ctx.fpr[0]));
    ctx.set_gpr(2, 0u + static_cast<std::uint32_t>(1));
    { const bool branch_taken = !ctx.fpu_condition();
    // nop
      if (branch_taken) {
          goto L_089FB260;
      }
      goto L_089FB25C;
    }
L_089FB25C:
    ctx.set_gpr(2, 0u + 0u);
    goto L_089FB260;
L_089FB260:
    { const bool branch_taken = ctx.gpr[2] == 0u;
    // nop
      if (branch_taken) {
          goto L_089FB274;
      }
      goto L_089FB268;
    }
L_089FB268:
    ctx.set_gpr(2, 0u + 0u);
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_089FB2B0;
      }
      goto L_089FB274;
    }
L_089FB274:
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(20), 0u);
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(24), 0u);
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(28), 0u);
    ctx.set_gpr(2, rt.memory().aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(24)));
    ctx.set_gpr(2, ~(ctx.gpr[2] | 0u));
    ctx.set_gpr(5, ctx.gpr[2] & 7u);
    ctx.set_gpr(6, ctx.gpr[29] + static_cast<std::uint32_t>(20));
    ctx.set_gpr(31, 0x089FB298u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0124_entry, 124u, 686u, 0x089F7D1Cu>(ctx, &aot_mem) && ctx.pc == 0x089FB298u) goto L_089FB298;
    return;
L_089FB298:
    ctx.set_gpr(4, ctx.gpr[16] + 0u);
    ctx.set_gpr(5, ctx.gpr[29] + static_cast<std::uint32_t>(20));
    ctx.set_gpr(31, 0x089FB2A8u);
    // nop
    goto L_089FBB34;
L_089FB2A8:
    ctx.set_gpr(2, ctx.gpr[2] ^ 2u);
    ctx.set_gpr(2, ctx.gpr[2] < static_cast<std::uint32_t>(1) ? 1u : 0u);
    goto L_089FB2B0;
L_089FB2B0:
    ctx.set_gpr(31, rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(12)));
    ctx.set_gpr(16, rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(8)));
    ctx.set_gpr(29, ctx.gpr[29] + static_cast<std::uint32_t>(32));
    jump_target = ctx.gpr[31];
    // nop
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_089FB2C4:
    ctx.fpr[3] = std::bit_cast<float>(rt.memory().aot_load32(ctx.gpr[5] + static_cast<std::uint32_t>(20)));
    ctx.fpr[0] = std::bit_cast<float>(0u);
    ctx.set_fpu_condition((ctx.fpr[3] < ctx.fpr[0]));
    // nop
    { const bool branch_taken = !ctx.fpu_condition();
    // nop
      if (branch_taken) {
          goto L_089FB2E8;
      }
      goto L_089FB2DC;
    }
L_089FB2DC:
    ctx.set_gpr(2, 0u + 0u);
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_089FB330;
      }
      goto L_089FB2E8;
    }
L_089FB2E8:
    ctx.fpr[1] = std::bit_cast<float>(rt.memory().aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(8)));
    ctx.fpr[0] = std::bit_cast<float>(rt.memory().aot_load32(ctx.gpr[5] + static_cast<std::uint32_t>(8)));
    { const float fs = ctx.fpr[1]; const float ft = ctx.fpr[0]; if ((std::isinf(fs) && ft == 0.0f) || (std::isinf(ft) && fs == 0.0f)) ctx.set_fpr_bits(2, 0x7FC00000u); else ctx.fpr[2] = fs * ft; }
    ctx.fpr[1] = std::bit_cast<float>(rt.memory().aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(12)));
    ctx.fpr[0] = std::bit_cast<float>(rt.memory().aot_load32(ctx.gpr[5] + static_cast<std::uint32_t>(12)));
    { const float fs = ctx.fpr[1]; const float ft = ctx.fpr[0]; if ((std::isinf(fs) && ft == 0.0f) || (std::isinf(ft) && fs == 0.0f)) ctx.set_fpr_bits(0, 0x7FC00000u); else ctx.fpr[0] = fs * ft; }
    ctx.fpr[2] = ctx.fpr[2] + ctx.fpr[0];
    ctx.fpr[1] = std::bit_cast<float>(rt.memory().aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(16)));
    ctx.fpr[0] = std::bit_cast<float>(rt.memory().aot_load32(ctx.gpr[5] + static_cast<std::uint32_t>(16)));
    { const float fs = ctx.fpr[1]; const float ft = ctx.fpr[0]; if ((std::isinf(fs) && ft == 0.0f) || (std::isinf(ft) && fs == 0.0f)) ctx.set_fpr_bits(0, 0x7FC00000u); else ctx.fpr[0] = fs * ft; }
    ctx.fpr[1] = ctx.fpr[0] + ctx.fpr[2];
    ctx.fpr[0] = std::bit_cast<float>(rt.memory().aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(20)));
    ctx.fpr[0] = ctx.fpr[1] - ctx.fpr[0];
    ctx.set_fpu_condition((ctx.fpr[0] <= ctx.fpr[3]));
    ctx.set_gpr(2, 0u + static_cast<std::uint32_t>(1));
    { const bool branch_taken = ctx.fpu_condition();
    // nop
      if (branch_taken) {
          goto L_089FB330;
      }
      goto L_089FB32C;
    }
L_089FB32C:
    ctx.set_gpr(2, 0u + 0u);
    goto L_089FB330;
L_089FB330:
    jump_target = ctx.gpr[31];
    // nop
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_089FB338:
    ctx.fpr[1] = std::bit_cast<float>(rt.memory().aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(8)));
    ctx.fpr[0] = std::bit_cast<float>(rt.memory().aot_load32(ctx.gpr[5] + static_cast<std::uint32_t>(8)));
    ctx.fpr[4] = ctx.fpr[1] + ctx.fpr[0];
    ctx.fpr[1] = std::bit_cast<float>(rt.memory().aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(12)));
    ctx.fpr[0] = std::bit_cast<float>(rt.memory().aot_load32(ctx.gpr[5] + static_cast<std::uint32_t>(12)));
    ctx.fpr[3] = ctx.fpr[1] + ctx.fpr[0];
    ctx.fpr[1] = std::bit_cast<float>(rt.memory().aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(16)));
    ctx.fpr[0] = std::bit_cast<float>(rt.memory().aot_load32(ctx.gpr[5] + static_cast<std::uint32_t>(16)));
    ctx.fpr[2] = ctx.fpr[1] + ctx.fpr[0];
    { const float fs = ctx.fpr[4]; const float ft = ctx.fpr[4]; if ((std::isinf(fs) && ft == 0.0f) || (std::isinf(ft) && fs == 0.0f)) ctx.set_fpr_bits(1, 0x7FC00000u); else ctx.fpr[1] = fs * ft; }
    { const float fs = ctx.fpr[3]; const float ft = ctx.fpr[3]; if ((std::isinf(fs) && ft == 0.0f) || (std::isinf(ft) && fs == 0.0f)) ctx.set_fpr_bits(0, 0x7FC00000u); else ctx.fpr[0] = fs * ft; }
    ctx.fpr[1] = ctx.fpr[1] + ctx.fpr[0];
    { const float fs = ctx.fpr[2]; const float ft = ctx.fpr[2]; if ((std::isinf(fs) && ft == 0.0f) || (std::isinf(ft) && fs == 0.0f)) ctx.set_fpr_bits(0, 0x7FC00000u); else ctx.fpr[0] = fs * ft; }
    ctx.fpr[1] = ctx.fpr[0] + ctx.fpr[1];
    ctx.fpr[0] = std::bit_cast<float>(rt.memory().aot_load32(ctx.gpr[28] + static_cast<std::uint32_t>(-32516)));
    ctx.set_fpu_condition((ctx.fpr[1] < ctx.fpr[0]));
    // nop
    { const bool branch_taken = !ctx.fpu_condition();
    // nop
      if (branch_taken) {
          goto L_089FB3B0;
      }
      goto L_089FB384;
    }
L_089FB384:
    ctx.fpr[1] = std::bit_cast<float>(rt.memory().aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(20)));
    ctx.fpr[0] = std::bit_cast<float>(rt.memory().aot_load32(ctx.gpr[5] + static_cast<std::uint32_t>(20)));
    ctx.fpr[1] = ctx.fpr[1] + ctx.fpr[0];
    ctx.fpr[0] = std::bit_cast<float>(0u);
    ctx.set_fpu_condition((ctx.fpr[0] <= ctx.fpr[1]));
    ctx.set_gpr(2, 0u + static_cast<std::uint32_t>(1));
    { const bool branch_taken = ctx.fpu_condition();
    // nop
      if (branch_taken) {
          goto L_089FB3A8;
      }
      goto L_089FB3A4;
    }
L_089FB3A4:
    ctx.set_gpr(2, 0u + 0u);
    goto L_089FB3A8;
L_089FB3A8:
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_089FB3B4;
      }
      goto L_089FB3B0;
    }
L_089FB3B0:
    ctx.set_gpr(2, 0u + static_cast<std::uint32_t>(1));
    goto L_089FB3B4;
L_089FB3B4:
    jump_target = ctx.gpr[31];
    // nop
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_089FB3BC:
    ctx.fpr[6] = std::bit_cast<float>(rt.memory().aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(12)));
    ctx.fpr[5] = std::bit_cast<float>(rt.memory().aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(8)));
    ctx.fpr[4] = std::bit_cast<float>(rt.memory().aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(16)));
    ctx.fpr[0] = std::bit_cast<float>(rt.memory().aot_load32(ctx.gpr[5] + static_cast<std::uint32_t>(8)));
    { const float fs = ctx.fpr[5]; const float ft = ctx.fpr[0]; if ((std::isinf(fs) && ft == 0.0f) || (std::isinf(ft) && fs == 0.0f)) ctx.set_fpr_bits(1, 0x7FC00000u); else ctx.fpr[1] = fs * ft; }
    ctx.fpr[0] = std::bit_cast<float>(rt.memory().aot_load32(ctx.gpr[5] + static_cast<std::uint32_t>(12)));
    { const float fs = ctx.fpr[6]; const float ft = ctx.fpr[0]; if ((std::isinf(fs) && ft == 0.0f) || (std::isinf(ft) && fs == 0.0f)) ctx.set_fpr_bits(0, 0x7FC00000u); else ctx.fpr[0] = fs * ft; }
    ctx.fpr[1] = ctx.fpr[1] + ctx.fpr[0];
    ctx.fpr[0] = std::bit_cast<float>(rt.memory().aot_load32(ctx.gpr[5] + static_cast<std::uint32_t>(16)));
    { const float fs = ctx.fpr[4]; const float ft = ctx.fpr[0]; if ((std::isinf(fs) && ft == 0.0f) || (std::isinf(ft) && fs == 0.0f)) ctx.set_fpr_bits(0, 0x7FC00000u); else ctx.fpr[0] = fs * ft; }
    ctx.fpr[1] = ctx.fpr[0] + ctx.fpr[1];
    ctx.fpr[0] = std::bit_cast<float>(rt.memory().aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(20)));
    ctx.fpr[3] = ctx.fpr[1] - ctx.fpr[0];
    ctx.fpr[2] = std::bit_cast<float>(0u);
    ctx.set_fpu_condition((ctx.fpr[3] <= ctx.fpr[2]));
    // nop
    { const bool branch_taken = !ctx.fpu_condition();
    // nop
      if (branch_taken) {
          goto L_089FB410;
      }
      goto L_089FB404;
    }
L_089FB404:
    ctx.set_gpr(2, 0u + static_cast<std::uint32_t>(1));
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_089FB450;
      }
      goto L_089FB410;
    }
L_089FB410:
    ctx.fpr[0] = std::bit_cast<float>(rt.memory().aot_load32(ctx.gpr[5] + static_cast<std::uint32_t>(20)));
    { const float fs = ctx.fpr[5]; const float ft = ctx.fpr[0]; if ((std::isinf(fs) && ft == 0.0f) || (std::isinf(ft) && fs == 0.0f)) ctx.set_fpr_bits(1, 0x7FC00000u); else ctx.fpr[1] = fs * ft; }
    ctx.fpr[0] = std::bit_cast<float>(rt.memory().aot_load32(ctx.gpr[5] + static_cast<std::uint32_t>(24)));
    { const float fs = ctx.fpr[6]; const float ft = ctx.fpr[0]; if ((std::isinf(fs) && ft == 0.0f) || (std::isinf(ft) && fs == 0.0f)) ctx.set_fpr_bits(0, 0x7FC00000u); else ctx.fpr[0] = fs * ft; }
    ctx.fpr[1] = ctx.fpr[1] + ctx.fpr[0];
    ctx.fpr[0] = std::bit_cast<float>(rt.memory().aot_load32(ctx.gpr[5] + static_cast<std::uint32_t>(28)));
    { const float fs = ctx.fpr[4]; const float ft = ctx.fpr[0]; if ((std::isinf(fs) && ft == 0.0f) || (std::isinf(ft) && fs == 0.0f)) ctx.set_fpr_bits(0, 0x7FC00000u); else ctx.fpr[0] = fs * ft; }
    ctx.fpr[1] = ctx.fpr[0] + ctx.fpr[1];
    ctx.fpr[0] = std::bit_cast<float>(rt.memory().aot_load32(ctx.gpr[5] + static_cast<std::uint32_t>(32)));
    { const float fs = ctx.fpr[0]; const float ft = ctx.fpr[1]; if ((std::isinf(fs) && ft == 0.0f) || (std::isinf(ft) && fs == 0.0f)) ctx.set_fpr_bits(0, 0x7FC00000u); else ctx.fpr[0] = fs * ft; }
    ctx.fpr[0] = ctx.fpr[3] + ctx.fpr[0];
    ctx.set_fpu_condition((ctx.fpr[0] <= ctx.fpr[2]));
    ctx.set_gpr(2, 0u + static_cast<std::uint32_t>(1));
    { const bool branch_taken = ctx.fpu_condition();
    // nop
      if (branch_taken) {
          goto L_089FB450;
      }
      goto L_089FB44C;
    }
L_089FB44C:
    ctx.set_gpr(2, 0u + 0u);
    goto L_089FB450;
L_089FB450:
    jump_target = ctx.gpr[31];
    // nop
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_089FB458:
    ctx.set_gpr(29, ctx.gpr[29] + static_cast<std::uint32_t>(-32));
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(12), ctx.gpr[31]);
    ctx.fpr[6] = std::bit_cast<float>(rt.memory().aot_load32(ctx.gpr[5] + static_cast<std::uint32_t>(8)));
    ctx.fpr[0] = std::bit_cast<float>(rt.memory().aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(12)));
    ctx.fpr[5] = std::bit_cast<float>(rt.memory().aot_load32(ctx.gpr[5] + static_cast<std::uint32_t>(12)));
    { const float fs = ctx.fpr[0]; const float ft = ctx.fpr[5]; if ((std::isinf(fs) && ft == 0.0f) || (std::isinf(ft) && fs == 0.0f)) ctx.set_fpr_bits(1, 0x7FC00000u); else ctx.fpr[1] = fs * ft; }
    ctx.fpr[0] = std::bit_cast<float>(rt.memory().aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(8)));
    { const float fs = ctx.fpr[0]; const float ft = ctx.fpr[6]; if ((std::isinf(fs) && ft == 0.0f) || (std::isinf(ft) && fs == 0.0f)) ctx.set_fpr_bits(0, 0x7FC00000u); else ctx.fpr[0] = fs * ft; }
    ctx.fpr[1] = ctx.fpr[0] + ctx.fpr[1];
    ctx.fpr[0] = std::bit_cast<float>(rt.memory().aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(16)));
    ctx.fpr[4] = std::bit_cast<float>(rt.memory().aot_load32(ctx.gpr[5] + static_cast<std::uint32_t>(16)));
    { const float fs = ctx.fpr[0]; const float ft = ctx.fpr[4]; if ((std::isinf(fs) && ft == 0.0f) || (std::isinf(ft) && fs == 0.0f)) ctx.set_fpr_bits(0, 0x7FC00000u); else ctx.fpr[0] = fs * ft; }
    ctx.fpr[3] = ctx.fpr[0] + ctx.fpr[1];
    ctx.set_gpr(2, 16256u << 16u);
    ctx.fpr[2] = std::bit_cast<float>(ctx.gpr[2]);
    ctx.fpr[0] = ctx.fpr[3] - ctx.fpr[2];
    ctx.set_fpr_bits(0, ctx.fpr_bits(0) & 0x7FFFFFFFu);
    ctx.fpr[1] = std::bit_cast<float>(rt.memory().aot_load32(ctx.gpr[28] + static_cast<std::uint32_t>(-32516)));
    ctx.set_fpu_condition((ctx.fpr[0] < ctx.fpr[1]));
    // nop
    { const bool branch_taken = !ctx.fpu_condition();
    // nop
      if (branch_taken) {
          goto L_089FB4E0;
      }
      goto L_089FB4B0;
    }
L_089FB4B0:
    ctx.fpr[1] = std::bit_cast<float>(rt.memory().aot_load32(ctx.gpr[5] + static_cast<std::uint32_t>(20)));
    ctx.fpr[0] = std::bit_cast<float>(rt.memory().aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(20)));
    ctx.set_fpu_condition(((std::isnan(ctx.fpr[1]) || std::isnan(ctx.fpr[0])) || ctx.fpr[1] <= ctx.fpr[0]));
    // nop
    { const bool branch_taken = ctx.fpu_condition();
    // nop
      if (branch_taken) {
          goto L_089FB4D4;
      }
      goto L_089FB4C8;
    }
L_089FB4C8:
    ctx.set_gpr(2, 0u + static_cast<std::uint32_t>(2));
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_089FB4D8;
      }
      goto L_089FB4D4;
    }
L_089FB4D4:
    ctx.set_gpr(2, 0u + 0u);
    goto L_089FB4D8;
L_089FB4D8:
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_089FB544;
      }
      goto L_089FB4E0;
    }
L_089FB4E0:
    ctx.fpr[0] = ctx.fpr[2] + ctx.fpr[3];
    ctx.set_fpr_bits(0, ctx.fpr_bits(0) & 0x7FFFFFFFu);
    ctx.set_fpu_condition((ctx.fpr[0] < ctx.fpr[1]));
    // nop
    { const bool branch_taken = !ctx.fpu_condition();
    // nop
      if (branch_taken) {
          goto L_089FB540;
      }
      goto L_089FB4F8;
    }
L_089FB4F8:
    ctx.fpr[1] = std::bit_cast<float>(rt.memory().aot_load32(ctx.gpr[5] + static_cast<std::uint32_t>(20)));
    { const float fs = ctx.fpr[1]; const float ft = ctx.fpr[6]; if ((std::isinf(fs) && ft == 0.0f) || (std::isinf(ft) && fs == 0.0f)) ctx.set_fpr_bits(0, 0x7FC00000u); else ctx.fpr[0] = fs * ft; }
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(20), std::bit_cast<std::uint32_t>(ctx.fpr[0]));
    { const float fs = ctx.fpr[1]; const float ft = ctx.fpr[5]; if ((std::isinf(fs) && ft == 0.0f) || (std::isinf(ft) && fs == 0.0f)) ctx.set_fpr_bits(0, 0x7FC00000u); else ctx.fpr[0] = fs * ft; }
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(24), std::bit_cast<std::uint32_t>(ctx.fpr[0]));
    { const float fs = ctx.fpr[1]; const float ft = ctx.fpr[4]; if ((std::isinf(fs) && ft == 0.0f) || (std::isinf(ft) && fs == 0.0f)) ctx.set_fpr_bits(0, 0x7FC00000u); else ctx.fpr[0] = fs * ft; }
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(28), std::bit_cast<std::uint32_t>(ctx.fpr[0]));
    ctx.set_gpr(5, ctx.gpr[29] + static_cast<std::uint32_t>(20));
    ctx.set_gpr(31, 0x089FB520u);
    // nop
    goto L_089FBB34;
L_089FB520:
    { const bool branch_taken = ctx.gpr[2] == 0u;
    // nop
      if (branch_taken) {
          goto L_089FB534;
      }
      goto L_089FB528;
    }
L_089FB528:
    ctx.set_gpr(2, 0u + static_cast<std::uint32_t>(2));
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_089FB538;
      }
      goto L_089FB534;
    }
L_089FB534:
    ctx.set_gpr(2, 0u + 0u);
    goto L_089FB538;
L_089FB538:
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_089FB544;
      }
      goto L_089FB540;
    }
L_089FB540:
    ctx.set_gpr(2, 0u + static_cast<std::uint32_t>(1));
    goto L_089FB544;
L_089FB544:
    ctx.set_gpr(31, rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(12)));
    ctx.set_gpr(29, ctx.gpr[29] + static_cast<std::uint32_t>(32));
    jump_target = ctx.gpr[31];
    // nop
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_089FB554:
    ctx.set_gpr(29, ctx.gpr[29] + static_cast<std::uint32_t>(-160));
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(12), ctx.gpr[31]);
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(8), ctx.gpr[17]);
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(4), ctx.gpr[16]);
    ctx.set_gpr(17, ctx.gpr[5] + 0u);
    ctx.set_gpr(16, ctx.gpr[4] + 0u);
    ctx.set_gpr(3, 0u + static_cast<std::uint32_t>(1));
    ctx.set_gpr(2, ctx.gpr[3] + 0u);
    ctx.fpr[2] = std::bit_cast<float>(rt.memory().aot_load32(ctx.gpr[5] + static_cast<std::uint32_t>(20)));
    ctx.fpr[3] = std::bit_cast<float>(rt.memory().aot_load32(ctx.gpr[5] + static_cast<std::uint32_t>(8)));
    ctx.set_fpu_condition(((std::isnan(ctx.fpr[3]) || std::isnan(ctx.fpr[2])) || ctx.fpr[3] <= ctx.fpr[2]));
    // nop
    { const bool branch_taken = !ctx.fpu_condition();
    // nop
      if (branch_taken) {
          goto L_089FB5A8;
      }
      goto L_089FB58C;
    }
L_089FB58C:
    ctx.fpr[1] = std::bit_cast<float>(rt.memory().aot_load32(ctx.gpr[17] + static_cast<std::uint32_t>(12)));
    ctx.fpr[0] = std::bit_cast<float>(rt.memory().aot_load32(ctx.gpr[17] + static_cast<std::uint32_t>(24)));
    ctx.set_fpu_condition(((std::isnan(ctx.fpr[1]) || std::isnan(ctx.fpr[0])) || ctx.fpr[1] <= ctx.fpr[0]));
    // nop
    { const bool branch_taken = !ctx.fpu_condition();
    // nop
      if (branch_taken) {
          goto L_089FB5A8;
      }
      goto L_089FB5A4;
    }
L_089FB5A4:
    ctx.set_gpr(2, 0u + 0u);
    goto L_089FB5A8;
L_089FB5A8:
    { const bool branch_taken = ctx.gpr[2] != 0u;
    // nop
      if (branch_taken) {
          goto L_089FB5CC;
      }
      goto L_089FB5B0;
    }
L_089FB5B0:
    ctx.fpr[1] = std::bit_cast<float>(rt.memory().aot_load32(ctx.gpr[17] + static_cast<std::uint32_t>(16)));
    ctx.fpr[0] = std::bit_cast<float>(rt.memory().aot_load32(ctx.gpr[17] + static_cast<std::uint32_t>(28)));
    ctx.set_fpu_condition(((std::isnan(ctx.fpr[1]) || std::isnan(ctx.fpr[0])) || ctx.fpr[1] <= ctx.fpr[0]));
    // nop
    { const bool branch_taken = !ctx.fpu_condition();
    // nop
      if (branch_taken) {
          goto L_089FB5CC;
      }
      goto L_089FB5C8;
    }
L_089FB5C8:
    ctx.set_gpr(3, 0u + 0u);
    goto L_089FB5CC;
L_089FB5CC:
    { const bool branch_taken = ctx.gpr[3] == 0u;
    // nop
      if (branch_taken) {
          goto L_089FB5E0;
      }
      goto L_089FB5D4;
    }
L_089FB5D4:
    ctx.set_gpr(2, 0u + 0u);
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_089FB9B8;
      }
      goto L_089FB5E0;
    }
L_089FB5E0:
    ctx.set_gpr(2, rt.memory().aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(24)));
    ctx.set_gpr(1, ctx.gpr[2] < static_cast<std::uint32_t>(8) ? 1u : 0u);
    { const bool branch_taken = ctx.gpr[1] == 0u;
    // nop
      if (branch_taken) {
          goto L_089FB9B4;
      }
      goto L_089FB5F0;
    }
L_089FB5F0:
    ctx.set_gpr(3, 2226u << 16u);
    ctx.set_gpr(3, ctx.gpr[3] + static_cast<std::uint32_t>(-28408));
    ctx.set_gpr(2, ctx.gpr[2] << 2u);
    ctx.set_gpr(2, ctx.gpr[2] + ctx.gpr[3]);
    ctx.set_gpr(2, rt.memory().aot_load32(ctx.gpr[2] + static_cast<std::uint32_t>(0)));
    jump_target = ctx.gpr[2];
    // nop
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_089FB60C:
    ctx.set_gpr(4, ctx.gpr[16] + 0u);
    ctx.set_gpr(5, ctx.gpr[17] + static_cast<std::uint32_t>(8));
    ctx.set_gpr(31, 0x089FB61Cu);
    // nop
    goto L_089FBB34;
L_089FB61C:
    { const bool branch_taken = ctx.gpr[2] == 0u;
    // nop
      if (branch_taken) {
          goto L_089FB630;
      }
      goto L_089FB624;
    }
L_089FB624:
    ctx.set_gpr(2, 0u + static_cast<std::uint32_t>(2));
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_089FB9B8;
      }
      goto L_089FB630;
    }
L_089FB630:
    ctx.set_gpr(4, ctx.gpr[16] + 0u);
    ctx.set_gpr(5, ctx.gpr[17] + static_cast<std::uint32_t>(20));
    ctx.set_gpr(31, 0x089FB640u);
    // nop
    goto L_089FBB34;
L_089FB640:
    { const bool branch_taken = ctx.gpr[2] == 0u;
    // nop
      if (branch_taken) {
          goto L_089FB654;
      }
      goto L_089FB648;
    }
L_089FB648:
    ctx.set_gpr(2, 0u + static_cast<std::uint32_t>(1));
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_089FB658;
      }
      goto L_089FB654;
    }
L_089FB654:
    ctx.set_gpr(2, 0u + 0u);
    goto L_089FB658;
L_089FB658:
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_089FB9B8;
      }
      goto L_089FB660;
    }
L_089FB660:
    ctx.fpr[1] = std::bit_cast<float>(rt.memory().aot_load32(ctx.gpr[17] + static_cast<std::uint32_t>(28)));
    ctx.fpr[0] = std::bit_cast<float>(rt.memory().aot_load32(ctx.gpr[17] + static_cast<std::uint32_t>(12)));
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(148), std::bit_cast<std::uint32_t>(ctx.fpr[3]));
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(152), std::bit_cast<std::uint32_t>(ctx.fpr[0]));
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(156), std::bit_cast<std::uint32_t>(ctx.fpr[1]));
    ctx.set_gpr(4, ctx.gpr[16] + 0u);
    ctx.set_gpr(5, ctx.gpr[29] + static_cast<std::uint32_t>(148));
    ctx.set_gpr(31, 0x089FB684u);
    // nop
    goto L_089FBB34;
L_089FB684:
    { const bool branch_taken = ctx.gpr[2] == 0u;
    // nop
      if (branch_taken) {
          goto L_089FB698;
      }
      goto L_089FB68C;
    }
L_089FB68C:
    ctx.set_gpr(2, 0u + static_cast<std::uint32_t>(2));
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_089FB9B8;
      }
      goto L_089FB698;
    }
L_089FB698:
    ctx.fpr[2] = std::bit_cast<float>(rt.memory().aot_load32(ctx.gpr[17] + static_cast<std::uint32_t>(16)));
    ctx.fpr[1] = std::bit_cast<float>(rt.memory().aot_load32(ctx.gpr[17] + static_cast<std::uint32_t>(24)));
    ctx.fpr[0] = std::bit_cast<float>(rt.memory().aot_load32(ctx.gpr[17] + static_cast<std::uint32_t>(20)));
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(136), std::bit_cast<std::uint32_t>(ctx.fpr[0]));
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(140), std::bit_cast<std::uint32_t>(ctx.fpr[1]));
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(144), std::bit_cast<std::uint32_t>(ctx.fpr[2]));
    ctx.set_gpr(4, ctx.gpr[16] + 0u);
    ctx.set_gpr(5, ctx.gpr[29] + static_cast<std::uint32_t>(136));
    ctx.set_gpr(31, 0x089FB6C0u);
    // nop
    goto L_089FBB34;
L_089FB6C0:
    { const bool branch_taken = ctx.gpr[2] == 0u;
    // nop
      if (branch_taken) {
          goto L_089FB6D4;
      }
      goto L_089FB6C8;
    }
L_089FB6C8:
    ctx.set_gpr(2, 0u + static_cast<std::uint32_t>(1));
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_089FB6D8;
      }
      goto L_089FB6D4;
    }
L_089FB6D4:
    ctx.set_gpr(2, 0u + 0u);
    goto L_089FB6D8;
L_089FB6D8:
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_089FB9B8;
      }
      goto L_089FB6E0;
    }
L_089FB6E0:
    ctx.fpr[1] = std::bit_cast<float>(rt.memory().aot_load32(ctx.gpr[17] + static_cast<std::uint32_t>(16)));
    ctx.fpr[0] = std::bit_cast<float>(rt.memory().aot_load32(ctx.gpr[17] + static_cast<std::uint32_t>(24)));
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(124), std::bit_cast<std::uint32_t>(ctx.fpr[3]));
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(128), std::bit_cast<std::uint32_t>(ctx.fpr[0]));
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(132), std::bit_cast<std::uint32_t>(ctx.fpr[1]));
    ctx.set_gpr(4, ctx.gpr[16] + 0u);
    ctx.set_gpr(5, ctx.gpr[29] + static_cast<std::uint32_t>(124));
    ctx.set_gpr(31, 0x089FB704u);
    // nop
    goto L_089FBB34;
L_089FB704:
    { const bool branch_taken = ctx.gpr[2] == 0u;
    // nop
      if (branch_taken) {
          goto L_089FB718;
      }
      goto L_089FB70C;
    }
L_089FB70C:
    ctx.set_gpr(2, 0u + static_cast<std::uint32_t>(2));
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_089FB9B8;
      }
      goto L_089FB718;
    }
L_089FB718:
    ctx.fpr[2] = std::bit_cast<float>(rt.memory().aot_load32(ctx.gpr[17] + static_cast<std::uint32_t>(28)));
    ctx.fpr[1] = std::bit_cast<float>(rt.memory().aot_load32(ctx.gpr[17] + static_cast<std::uint32_t>(12)));
    ctx.fpr[0] = std::bit_cast<float>(rt.memory().aot_load32(ctx.gpr[17] + static_cast<std::uint32_t>(20)));
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(112), std::bit_cast<std::uint32_t>(ctx.fpr[0]));
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(116), std::bit_cast<std::uint32_t>(ctx.fpr[1]));
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(120), std::bit_cast<std::uint32_t>(ctx.fpr[2]));
    ctx.set_gpr(4, ctx.gpr[16] + 0u);
    ctx.set_gpr(5, ctx.gpr[29] + static_cast<std::uint32_t>(112));
    ctx.set_gpr(31, 0x089FB740u);
    // nop
    goto L_089FBB34;
L_089FB740:
    { const bool branch_taken = ctx.gpr[2] == 0u;
    // nop
      if (branch_taken) {
          goto L_089FB754;
      }
      goto L_089FB748;
    }
L_089FB748:
    ctx.set_gpr(2, 0u + static_cast<std::uint32_t>(1));
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_089FB758;
      }
      goto L_089FB754;
    }
L_089FB754:
    ctx.set_gpr(2, 0u + 0u);
    goto L_089FB758;
L_089FB758:
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_089FB9B8;
      }
      goto L_089FB760;
    }
L_089FB760:
    ctx.fpr[1] = std::bit_cast<float>(rt.memory().aot_load32(ctx.gpr[17] + static_cast<std::uint32_t>(28)));
    ctx.fpr[0] = std::bit_cast<float>(rt.memory().aot_load32(ctx.gpr[17] + static_cast<std::uint32_t>(24)));
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(100), std::bit_cast<std::uint32_t>(ctx.fpr[3]));
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(104), std::bit_cast<std::uint32_t>(ctx.fpr[0]));
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(108), std::bit_cast<std::uint32_t>(ctx.fpr[1]));
    ctx.set_gpr(4, ctx.gpr[16] + 0u);
    ctx.set_gpr(5, ctx.gpr[29] + static_cast<std::uint32_t>(100));
    ctx.set_gpr(31, 0x089FB784u);
    // nop
    goto L_089FBB34;
L_089FB784:
    { const bool branch_taken = ctx.gpr[2] == 0u;
    // nop
      if (branch_taken) {
          goto L_089FB798;
      }
      goto L_089FB78C;
    }
L_089FB78C:
    ctx.set_gpr(2, 0u + static_cast<std::uint32_t>(2));
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_089FB9B8;
      }
      goto L_089FB798;
    }
L_089FB798:
    ctx.fpr[2] = std::bit_cast<float>(rt.memory().aot_load32(ctx.gpr[17] + static_cast<std::uint32_t>(16)));
    ctx.fpr[1] = std::bit_cast<float>(rt.memory().aot_load32(ctx.gpr[17] + static_cast<std::uint32_t>(12)));
    ctx.fpr[0] = std::bit_cast<float>(rt.memory().aot_load32(ctx.gpr[17] + static_cast<std::uint32_t>(20)));
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(88), std::bit_cast<std::uint32_t>(ctx.fpr[0]));
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(92), std::bit_cast<std::uint32_t>(ctx.fpr[1]));
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(96), std::bit_cast<std::uint32_t>(ctx.fpr[2]));
    ctx.set_gpr(4, ctx.gpr[16] + 0u);
    ctx.set_gpr(5, ctx.gpr[29] + static_cast<std::uint32_t>(88));
    ctx.set_gpr(31, 0x089FB7C0u);
    // nop
    goto L_089FBB34;
L_089FB7C0:
    { const bool branch_taken = ctx.gpr[2] == 0u;
    // nop
      if (branch_taken) {
          goto L_089FB7D4;
      }
      goto L_089FB7C8;
    }
L_089FB7C8:
    ctx.set_gpr(2, 0u + static_cast<std::uint32_t>(1));
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_089FB7D8;
      }
      goto L_089FB7D4;
    }
L_089FB7D4:
    ctx.set_gpr(2, 0u + 0u);
    goto L_089FB7D8;
L_089FB7D8:
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_089FB9B8;
      }
      goto L_089FB7E0;
    }
L_089FB7E0:
    ctx.fpr[1] = std::bit_cast<float>(rt.memory().aot_load32(ctx.gpr[17] + static_cast<std::uint32_t>(16)));
    ctx.fpr[0] = std::bit_cast<float>(rt.memory().aot_load32(ctx.gpr[17] + static_cast<std::uint32_t>(12)));
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(76), std::bit_cast<std::uint32_t>(ctx.fpr[2]));
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(80), std::bit_cast<std::uint32_t>(ctx.fpr[0]));
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(84), std::bit_cast<std::uint32_t>(ctx.fpr[1]));
    ctx.set_gpr(4, ctx.gpr[16] + 0u);
    ctx.set_gpr(5, ctx.gpr[29] + static_cast<std::uint32_t>(76));
    ctx.set_gpr(31, 0x089FB804u);
    // nop
    goto L_089FBB34;
L_089FB804:
    { const bool branch_taken = ctx.gpr[2] == 0u;
    // nop
      if (branch_taken) {
          goto L_089FB818;
      }
      goto L_089FB80C;
    }
L_089FB80C:
    ctx.set_gpr(2, 0u + static_cast<std::uint32_t>(2));
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_089FB9B8;
      }
      goto L_089FB818;
    }
L_089FB818:
    ctx.fpr[2] = std::bit_cast<float>(rt.memory().aot_load32(ctx.gpr[17] + static_cast<std::uint32_t>(28)));
    ctx.fpr[1] = std::bit_cast<float>(rt.memory().aot_load32(ctx.gpr[17] + static_cast<std::uint32_t>(24)));
    ctx.fpr[0] = std::bit_cast<float>(rt.memory().aot_load32(ctx.gpr[17] + static_cast<std::uint32_t>(8)));
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(64), std::bit_cast<std::uint32_t>(ctx.fpr[0]));
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(68), std::bit_cast<std::uint32_t>(ctx.fpr[1]));
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(72), std::bit_cast<std::uint32_t>(ctx.fpr[2]));
    ctx.set_gpr(4, ctx.gpr[16] + 0u);
    ctx.set_gpr(5, ctx.gpr[29] + static_cast<std::uint32_t>(64));
    ctx.set_gpr(31, 0x089FB840u);
    // nop
    goto L_089FBB34;
L_089FB840:
    { const bool branch_taken = ctx.gpr[2] == 0u;
    // nop
      if (branch_taken) {
          goto L_089FB854;
      }
      goto L_089FB848;
    }
L_089FB848:
    ctx.set_gpr(2, 0u + static_cast<std::uint32_t>(1));
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_089FB858;
      }
      goto L_089FB854;
    }
L_089FB854:
    ctx.set_gpr(2, 0u + 0u);
    goto L_089FB858;
L_089FB858:
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_089FB9B8;
      }
      goto L_089FB860;
    }
L_089FB860:
    ctx.fpr[1] = std::bit_cast<float>(rt.memory().aot_load32(ctx.gpr[17] + static_cast<std::uint32_t>(28)));
    ctx.fpr[0] = std::bit_cast<float>(rt.memory().aot_load32(ctx.gpr[17] + static_cast<std::uint32_t>(12)));
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(52), std::bit_cast<std::uint32_t>(ctx.fpr[2]));
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(56), std::bit_cast<std::uint32_t>(ctx.fpr[0]));
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(60), std::bit_cast<std::uint32_t>(ctx.fpr[1]));
    ctx.set_gpr(4, ctx.gpr[16] + 0u);
    ctx.set_gpr(5, ctx.gpr[29] + static_cast<std::uint32_t>(52));
    ctx.set_gpr(31, 0x089FB884u);
    // nop
    goto L_089FBB34;
L_089FB884:
    { const bool branch_taken = ctx.gpr[2] == 0u;
    // nop
      if (branch_taken) {
          goto L_089FB898;
      }
      goto L_089FB88C;
    }
L_089FB88C:
    ctx.set_gpr(2, 0u + static_cast<std::uint32_t>(2));
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_089FB9B8;
      }
      goto L_089FB898;
    }
L_089FB898:
    ctx.fpr[2] = std::bit_cast<float>(rt.memory().aot_load32(ctx.gpr[17] + static_cast<std::uint32_t>(16)));
    ctx.fpr[1] = std::bit_cast<float>(rt.memory().aot_load32(ctx.gpr[17] + static_cast<std::uint32_t>(24)));
    ctx.fpr[0] = std::bit_cast<float>(rt.memory().aot_load32(ctx.gpr[17] + static_cast<std::uint32_t>(8)));
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(40), std::bit_cast<std::uint32_t>(ctx.fpr[0]));
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(44), std::bit_cast<std::uint32_t>(ctx.fpr[1]));
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(48), std::bit_cast<std::uint32_t>(ctx.fpr[2]));
    ctx.set_gpr(4, ctx.gpr[16] + 0u);
    ctx.set_gpr(5, ctx.gpr[29] + static_cast<std::uint32_t>(40));
    ctx.set_gpr(31, 0x089FB8C0u);
    // nop
    goto L_089FBB34;
L_089FB8C0:
    { const bool branch_taken = ctx.gpr[2] == 0u;
    // nop
      if (branch_taken) {
          goto L_089FB8D4;
      }
      goto L_089FB8C8;
    }
L_089FB8C8:
    ctx.set_gpr(2, 0u + static_cast<std::uint32_t>(1));
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_089FB8D8;
      }
      goto L_089FB8D4;
    }
L_089FB8D4:
    ctx.set_gpr(2, 0u + 0u);
    goto L_089FB8D8;
L_089FB8D8:
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_089FB9B8;
      }
      goto L_089FB8E0;
    }
L_089FB8E0:
    ctx.fpr[1] = std::bit_cast<float>(rt.memory().aot_load32(ctx.gpr[17] + static_cast<std::uint32_t>(16)));
    ctx.fpr[0] = std::bit_cast<float>(rt.memory().aot_load32(ctx.gpr[17] + static_cast<std::uint32_t>(24)));
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(28), std::bit_cast<std::uint32_t>(ctx.fpr[2]));
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(32), std::bit_cast<std::uint32_t>(ctx.fpr[0]));
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(36), std::bit_cast<std::uint32_t>(ctx.fpr[1]));
    ctx.set_gpr(4, ctx.gpr[16] + 0u);
    ctx.set_gpr(5, ctx.gpr[29] + static_cast<std::uint32_t>(28));
    ctx.set_gpr(31, 0x089FB904u);
    // nop
    goto L_089FBB34;
L_089FB904:
    { const bool branch_taken = ctx.gpr[2] == 0u;
    // nop
      if (branch_taken) {
          goto L_089FB918;
      }
      goto L_089FB90C;
    }
L_089FB90C:
    ctx.set_gpr(2, 0u + static_cast<std::uint32_t>(2));
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_089FB9B8;
      }
      goto L_089FB918;
    }
L_089FB918:
    ctx.fpr[2] = std::bit_cast<float>(rt.memory().aot_load32(ctx.gpr[17] + static_cast<std::uint32_t>(28)));
    ctx.fpr[1] = std::bit_cast<float>(rt.memory().aot_load32(ctx.gpr[17] + static_cast<std::uint32_t>(12)));
    ctx.fpr[0] = std::bit_cast<float>(rt.memory().aot_load32(ctx.gpr[17] + static_cast<std::uint32_t>(8)));
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(16), std::bit_cast<std::uint32_t>(ctx.fpr[0]));
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(20), std::bit_cast<std::uint32_t>(ctx.fpr[1]));
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(24), std::bit_cast<std::uint32_t>(ctx.fpr[2]));
    ctx.set_gpr(4, ctx.gpr[16] + 0u);
    ctx.set_gpr(5, ctx.gpr[29] + static_cast<std::uint32_t>(16));
    ctx.set_gpr(31, 0x089FB940u);
    // nop
    goto L_089FBB34;
L_089FB940:
    { const bool branch_taken = ctx.gpr[2] == 0u;
    // nop
      if (branch_taken) {
          goto L_089FB954;
      }
      goto L_089FB948;
    }
L_089FB948:
    ctx.set_gpr(2, 0u + static_cast<std::uint32_t>(1));
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_089FB958;
      }
      goto L_089FB954;
    }
L_089FB954:
    ctx.set_gpr(2, 0u + 0u);
    goto L_089FB958;
L_089FB958:
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_089FB9B8;
      }
      goto L_089FB960;
    }
L_089FB960:
    ctx.set_gpr(4, ctx.gpr[16] + 0u);
    ctx.set_gpr(5, ctx.gpr[17] + static_cast<std::uint32_t>(20));
    ctx.set_gpr(31, 0x089FB970u);
    // nop
    goto L_089FBB34;
L_089FB970:
    { const bool branch_taken = ctx.gpr[2] == 0u;
    // nop
      if (branch_taken) {
          goto L_089FB984;
      }
      goto L_089FB978;
    }
L_089FB978:
    ctx.set_gpr(2, 0u + static_cast<std::uint32_t>(2));
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_089FB9B8;
      }
      goto L_089FB984;
    }
L_089FB984:
    ctx.set_gpr(4, ctx.gpr[16] + 0u);
    ctx.set_gpr(5, ctx.gpr[17] + static_cast<std::uint32_t>(8));
    ctx.set_gpr(31, 0x089FB994u);
    // nop
    goto L_089FBB34;
L_089FB994:
    { const bool branch_taken = ctx.gpr[2] == 0u;
    // nop
      if (branch_taken) {
          goto L_089FB9A8;
      }
      goto L_089FB99C;
    }
L_089FB99C:
    ctx.set_gpr(2, 0u + static_cast<std::uint32_t>(1));
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_089FB9AC;
      }
      goto L_089FB9A8;
    }
L_089FB9A8:
    ctx.set_gpr(2, 0u + 0u);
    goto L_089FB9AC;
L_089FB9AC:
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_089FB9B8;
      }
      goto L_089FB9B4;
    }
L_089FB9B4:
    ctx.set_gpr(2, 0u + 0u);
    goto L_089FB9B8;
L_089FB9B8:
    ctx.set_gpr(31, rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(12)));
    ctx.set_gpr(17, rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(8)));
    ctx.set_gpr(16, rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(4)));
    ctx.set_gpr(29, ctx.gpr[29] + static_cast<std::uint32_t>(160));
    jump_target = ctx.gpr[31];
    // nop
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_089FB9D0:
    ctx.fpr[3] = std::bit_cast<float>(rt.memory().aot_load32(ctx.gpr[5] + static_cast<std::uint32_t>(20)));
    ctx.fpr[0] = std::bit_cast<float>(0u);
    ctx.set_fpu_condition((ctx.fpr[3] < ctx.fpr[0]));
    // nop
    { const bool branch_taken = !ctx.fpu_condition();
    // nop
      if (branch_taken) {
          goto L_089FB9F4;
      }
      goto L_089FB9E8;
    }
L_089FB9E8:
    ctx.set_gpr(2, 0u + 0u);
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_089FBA68;
      }
      goto L_089FB9F4;
    }
L_089FB9F4:
    ctx.fpr[1] = std::bit_cast<float>(rt.memory().aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(8)));
    ctx.fpr[0] = std::bit_cast<float>(rt.memory().aot_load32(ctx.gpr[5] + static_cast<std::uint32_t>(8)));
    { const float fs = ctx.fpr[1]; const float ft = ctx.fpr[0]; if ((std::isinf(fs) && ft == 0.0f) || (std::isinf(ft) && fs == 0.0f)) ctx.set_fpr_bits(2, 0x7FC00000u); else ctx.fpr[2] = fs * ft; }
    ctx.fpr[1] = std::bit_cast<float>(rt.memory().aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(12)));
    ctx.fpr[0] = std::bit_cast<float>(rt.memory().aot_load32(ctx.gpr[5] + static_cast<std::uint32_t>(12)));
    { const float fs = ctx.fpr[1]; const float ft = ctx.fpr[0]; if ((std::isinf(fs) && ft == 0.0f) || (std::isinf(ft) && fs == 0.0f)) ctx.set_fpr_bits(0, 0x7FC00000u); else ctx.fpr[0] = fs * ft; }
    ctx.fpr[2] = ctx.fpr[2] + ctx.fpr[0];
    ctx.fpr[1] = std::bit_cast<float>(rt.memory().aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(16)));
    ctx.fpr[0] = std::bit_cast<float>(rt.memory().aot_load32(ctx.gpr[5] + static_cast<std::uint32_t>(16)));
    { const float fs = ctx.fpr[1]; const float ft = ctx.fpr[0]; if ((std::isinf(fs) && ft == 0.0f) || (std::isinf(ft) && fs == 0.0f)) ctx.set_fpr_bits(0, 0x7FC00000u); else ctx.fpr[0] = fs * ft; }
    ctx.fpr[1] = ctx.fpr[0] + ctx.fpr[2];
    ctx.fpr[0] = std::bit_cast<float>(rt.memory().aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(20)));
    ctx.fpr[1] = ctx.fpr[1] - ctx.fpr[0];
    ctx.set_fpr_bits(0, ctx.fpr_bits(3) ^ 0x80000000u);
    ctx.set_fpu_condition((ctx.fpr[1] <= ctx.fpr[0]));
    // nop
    { const bool branch_taken = !ctx.fpu_condition();
    // nop
      if (branch_taken) {
          goto L_089FBA48;
      }
      goto L_089FBA3C;
    }
L_089FBA3C:
    ctx.set_gpr(2, 0u + static_cast<std::uint32_t>(2));
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_089FBA68;
      }
      goto L_089FBA48;
    }
L_089FBA48:
    ctx.set_fpu_condition((ctx.fpr[1] <= ctx.fpr[3]));
    // nop
    { const bool branch_taken = !ctx.fpu_condition();
    // nop
      if (branch_taken) {
          goto L_089FBA64;
      }
      goto L_089FBA58;
    }
L_089FBA58:
    ctx.set_gpr(2, 0u + static_cast<std::uint32_t>(1));
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_089FBA68;
      }
      goto L_089FBA64;
    }
L_089FBA64:
    ctx.set_gpr(2, 0u + 0u);
    goto L_089FBA68;
L_089FBA68:
    jump_target = ctx.gpr[31];
    // nop
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_089FBA70:
    ctx.set_gpr(29, ctx.gpr[29] + static_cast<std::uint32_t>(-32));
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(12), ctx.gpr[31]);
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(8), ctx.gpr[17]);
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(4), ctx.gpr[16]);
    ctx.set_gpr(17, ctx.gpr[4] + 0u);
    ctx.fpr[1] = std::bit_cast<float>(rt.memory().aot_load32(ctx.gpr[5] + static_cast<std::uint32_t>(8)));
    ctx.fpr[0] = std::bit_cast<float>(rt.memory().aot_load32(ctx.gpr[5] + static_cast<std::uint32_t>(20)));
    ctx.fpr[0] = ctx.fpr[1] + ctx.fpr[0];
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(20), std::bit_cast<std::uint32_t>(ctx.fpr[0]));
    ctx.fpr[1] = std::bit_cast<float>(rt.memory().aot_load32(ctx.gpr[5] + static_cast<std::uint32_t>(12)));
    ctx.fpr[0] = std::bit_cast<float>(rt.memory().aot_load32(ctx.gpr[5] + static_cast<std::uint32_t>(24)));
    ctx.fpr[0] = ctx.fpr[1] + ctx.fpr[0];
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(24), std::bit_cast<std::uint32_t>(ctx.fpr[0]));
    ctx.fpr[1] = std::bit_cast<float>(rt.memory().aot_load32(ctx.gpr[5] + static_cast<std::uint32_t>(16)));
    ctx.fpr[0] = std::bit_cast<float>(rt.memory().aot_load32(ctx.gpr[5] + static_cast<std::uint32_t>(28)));
    ctx.fpr[0] = ctx.fpr[1] + ctx.fpr[0];
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(28), std::bit_cast<std::uint32_t>(ctx.fpr[0]));
    ctx.set_gpr(5, ctx.gpr[5] + static_cast<std::uint32_t>(8));
    ctx.set_gpr(31, 0x089FBAC0u);
    // nop
    goto L_089FBB34;
L_089FBAC0:
    ctx.set_gpr(2, ctx.gpr[2] ^ 2u);
    ctx.set_gpr(16, ctx.gpr[2] < static_cast<std::uint32_t>(1) ? 1u : 0u);
    ctx.set_gpr(4, ctx.gpr[17] + 0u);
    ctx.set_gpr(5, ctx.gpr[29] + static_cast<std::uint32_t>(20));
    ctx.set_gpr(31, 0x089FBAD8u);
    // nop
    goto L_089FBB34;
L_089FBAD8:
    ctx.set_gpr(2, ctx.gpr[2] ^ 2u);
    ctx.set_gpr(2, ctx.gpr[2] < static_cast<std::uint32_t>(1) ? 1u : 0u);
    { const bool branch_taken = ctx.gpr[16] == 0u;
    // nop
      if (branch_taken) {
          goto L_089FBAFC;
      }
      goto L_089FBAE8;
    }
L_089FBAE8:
    { const bool branch_taken = ctx.gpr[2] == 0u;
    // nop
      if (branch_taken) {
          goto L_089FBAFC;
      }
      goto L_089FBAF0;
    }
L_089FBAF0:
    ctx.set_gpr(2, 0u + static_cast<std::uint32_t>(2));
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_089FBB1C;
      }
      goto L_089FBAFC;
    }
L_089FBAFC:
    { const bool branch_taken = ctx.gpr[16] != 0u;
    // nop
      if (branch_taken) {
          goto L_089FBB0C;
      }
      goto L_089FBB04;
    }
L_089FBB04:
    { const bool branch_taken = ctx.gpr[2] == 0u;
    // nop
      if (branch_taken) {
          goto L_089FBB18;
      }
      goto L_089FBB0C;
    }
L_089FBB0C:
    ctx.set_gpr(2, 0u + static_cast<std::uint32_t>(1));
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_089FBB1C;
      }
      goto L_089FBB18;
    }
L_089FBB18:
    ctx.set_gpr(2, 0u + 0u);
    goto L_089FBB1C;
L_089FBB1C:
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
L_089FBB34:
    ctx.fpr[1] = std::bit_cast<float>(rt.memory().aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(8)));
    ctx.fpr[0] = std::bit_cast<float>(rt.memory().aot_load32(ctx.gpr[5] + static_cast<std::uint32_t>(0)));
    { const float fs = ctx.fpr[1]; const float ft = ctx.fpr[0]; if ((std::isinf(fs) && ft == 0.0f) || (std::isinf(ft) && fs == 0.0f)) ctx.set_fpr_bits(2, 0x7FC00000u); else ctx.fpr[2] = fs * ft; }
    ctx.fpr[1] = std::bit_cast<float>(rt.memory().aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(12)));
    ctx.fpr[0] = std::bit_cast<float>(rt.memory().aot_load32(ctx.gpr[5] + static_cast<std::uint32_t>(4)));
    { const float fs = ctx.fpr[1]; const float ft = ctx.fpr[0]; if ((std::isinf(fs) && ft == 0.0f) || (std::isinf(ft) && fs == 0.0f)) ctx.set_fpr_bits(0, 0x7FC00000u); else ctx.fpr[0] = fs * ft; }
    ctx.fpr[2] = ctx.fpr[2] + ctx.fpr[0];
    ctx.fpr[1] = std::bit_cast<float>(rt.memory().aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(16)));
    ctx.fpr[0] = std::bit_cast<float>(rt.memory().aot_load32(ctx.gpr[5] + static_cast<std::uint32_t>(8)));
    { const float fs = ctx.fpr[1]; const float ft = ctx.fpr[0]; if ((std::isinf(fs) && ft == 0.0f) || (std::isinf(ft) && fs == 0.0f)) ctx.set_fpr_bits(0, 0x7FC00000u); else ctx.fpr[0] = fs * ft; }
    ctx.fpr[1] = ctx.fpr[0] + ctx.fpr[2];
    ctx.fpr[0] = std::bit_cast<float>(rt.memory().aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(20)));
    ctx.fpr[1] = ctx.fpr[1] - ctx.fpr[0];
    ctx.fpr[0] = std::bit_cast<float>(0u);
    ctx.set_fpu_condition((ctx.fpr[1] <= ctx.fpr[0]));
    // nop
    { const bool branch_taken = !ctx.fpu_condition();
    // nop
      if (branch_taken) {
          goto L_089FBB88;
      }
      goto L_089FBB7C;
    }
L_089FBB7C:
    ctx.set_gpr(2, 0u + static_cast<std::uint32_t>(2));
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_089FBB8C;
      }
      goto L_089FBB88;
    }
L_089FBB88:
    ctx.set_gpr(2, 0u + 0u);
    goto L_089FBB8C;
L_089FBB8C:
    jump_target = ctx.gpr[31];
    // nop
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_089FBB94:
    ctx.fpr[1] = std::bit_cast<float>(rt.memory().aot_load32(ctx.gpr[5] + static_cast<std::uint32_t>(0)));
    ctx.fpr[0] = std::bit_cast<float>(rt.memory().aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(8)));
    { const float fs = ctx.fpr[1]; const float ft = ctx.fpr[0]; if ((std::isinf(fs) && ft == 0.0f) || (std::isinf(ft) && fs == 0.0f)) ctx.set_fpr_bits(2, 0x7FC00000u); else ctx.fpr[2] = fs * ft; }
    ctx.fpr[1] = std::bit_cast<float>(rt.memory().aot_load32(ctx.gpr[5] + static_cast<std::uint32_t>(4)));
    ctx.fpr[0] = std::bit_cast<float>(rt.memory().aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(12)));
    { const float fs = ctx.fpr[1]; const float ft = ctx.fpr[0]; if ((std::isinf(fs) && ft == 0.0f) || (std::isinf(ft) && fs == 0.0f)) ctx.set_fpr_bits(0, 0x7FC00000u); else ctx.fpr[0] = fs * ft; }
    ctx.fpr[2] = ctx.fpr[2] + ctx.fpr[0];
    ctx.fpr[1] = std::bit_cast<float>(rt.memory().aot_load32(ctx.gpr[5] + static_cast<std::uint32_t>(8)));
    ctx.fpr[0] = std::bit_cast<float>(rt.memory().aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(16)));
    { const float fs = ctx.fpr[1]; const float ft = ctx.fpr[0]; if ((std::isinf(fs) && ft == 0.0f) || (std::isinf(ft) && fs == 0.0f)) ctx.set_fpr_bits(0, 0x7FC00000u); else ctx.fpr[0] = fs * ft; }
    ctx.fpr[1] = ctx.fpr[0] + ctx.fpr[2];
    ctx.fpr[0] = std::bit_cast<float>(rt.memory().aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(20)));
    ctx.set_fpu_condition((ctx.fpr[0] < ctx.fpr[1]));
    // nop
    { const bool branch_taken = !ctx.fpu_condition();
    // nop
      if (branch_taken) {
          goto L_089FBBD8;
      }
      goto L_089FBBD4;
    }
L_089FBBD4:
    rt.memory().aot_store32(ctx.gpr[4] + static_cast<std::uint32_t>(20), std::bit_cast<std::uint32_t>(ctx.fpr[1]));
    goto L_089FBBD8;
L_089FBBD8:
    jump_target = ctx.gpr[31];
    // nop
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_089FBBE0:
    jump_target = ctx.gpr[31];
    // nop
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_089FBBE8:
    ctx.set_gpr(29, ctx.gpr[29] + static_cast<std::uint32_t>(-112));
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(12), ctx.gpr[31]);
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(8), ctx.gpr[16]);
    ctx.set_gpr(16, ctx.gpr[4] + 0u);
    ctx.set_gpr(4, ctx.gpr[5] + 0u);
    ctx.fpr[1] = std::bit_cast<float>(rt.memory().aot_load32(ctx.gpr[5] + static_cast<std::uint32_t>(8)));
    ctx.fpr[0] = std::bit_cast<float>(rt.memory().aot_load32(ctx.gpr[5] + static_cast<std::uint32_t>(20)));
    ctx.set_fpu_condition(((std::isnan(ctx.fpr[1]) || std::isnan(ctx.fpr[0])) || ctx.fpr[1] <= ctx.fpr[0]));
    ctx.set_gpr(3, 0u + static_cast<std::uint32_t>(1));
    { const bool branch_taken = !ctx.fpu_condition();
    // nop
      if (branch_taken) {
          goto L_089FBC18;
      }
      goto L_089FBC14;
    }
L_089FBC14:
    ctx.set_gpr(3, 0u + 0u);
    goto L_089FBC18;
L_089FBC18:
    { const bool branch_taken = ctx.gpr[3] != 0u;
    // nop
      if (branch_taken) {
          goto L_089FBC3C;
      }
      goto L_089FBC20;
    }
L_089FBC20:
    ctx.fpr[1] = std::bit_cast<float>(rt.memory().aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(12)));
    ctx.fpr[0] = std::bit_cast<float>(rt.memory().aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(24)));
    ctx.set_fpu_condition(((std::isnan(ctx.fpr[1]) || std::isnan(ctx.fpr[0])) || ctx.fpr[1] <= ctx.fpr[0]));
    ctx.set_gpr(3, 0u + static_cast<std::uint32_t>(1));
    { const bool branch_taken = !ctx.fpu_condition();
    // nop
      if (branch_taken) {
          goto L_089FBC3C;
      }
      goto L_089FBC38;
    }
L_089FBC38:
    ctx.set_gpr(3, 0u + 0u);
    goto L_089FBC3C;
L_089FBC3C:
    { const bool branch_taken = ctx.gpr[3] != 0u;
    // nop
      if (branch_taken) {
          goto L_089FBC60;
      }
      goto L_089FBC44;
    }
L_089FBC44:
    ctx.fpr[1] = std::bit_cast<float>(rt.memory().aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(16)));
    ctx.fpr[0] = std::bit_cast<float>(rt.memory().aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(28)));
    ctx.set_fpu_condition(((std::isnan(ctx.fpr[1]) || std::isnan(ctx.fpr[0])) || ctx.fpr[1] <= ctx.fpr[0]));
    ctx.set_gpr(3, 0u + static_cast<std::uint32_t>(1));
    { const bool branch_taken = !ctx.fpu_condition();
    // nop
      if (branch_taken) {
          goto L_089FBC60;
      }
      goto L_089FBC5C;
    }
L_089FBC5C:
    ctx.set_gpr(3, 0u + 0u);
    goto L_089FBC60;
L_089FBC60:
    { const bool branch_taken = ctx.gpr[3] != 0u;
    // nop
      if (branch_taken) {
          goto L_089FBC88;
      }
      goto L_089FBC68;
    }
L_089FBC68:
    ctx.set_gpr(5, ctx.gpr[29] + static_cast<std::uint32_t>(16));
    ctx.set_gpr(31, 0x089FBC74u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0124_entry, 124u, 685u, 0x089F7C54u>(ctx, &aot_mem) && ctx.pc == 0x089FBC74u) goto L_089FBC74;
    return;
L_089FBC74:
    ctx.set_gpr(4, ctx.gpr[16] + 0u);
    ctx.set_gpr(5, ctx.gpr[29] + static_cast<std::uint32_t>(16));
    ctx.set_gpr(6, 0u + static_cast<std::uint32_t>(8));
    ctx.set_gpr(31, 0x089FBC88u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0126_entry, 126u, 702u, 0x089FF62Cu>(ctx, &aot_mem) && ctx.pc == 0x089FBC88u) goto L_089FBC88;
    return;
L_089FBC88:
    ctx.set_gpr(31, rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(12)));
    ctx.set_gpr(16, rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(8)));
    ctx.set_gpr(29, ctx.gpr[29] + static_cast<std::uint32_t>(112));
    jump_target = ctx.gpr[31];
    // nop
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_089FBC9C:
    ctx.set_gpr(29, ctx.gpr[29] + static_cast<std::uint32_t>(-32));
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(12), ctx.gpr[31]);
    ctx.fpr[2] = std::bit_cast<float>(rt.memory().aot_load32(ctx.gpr[5] + static_cast<std::uint32_t>(20)));
    ctx.fpr[0] = std::bit_cast<float>(0u);
    ctx.set_fpu_condition((ctx.fpr[2] < ctx.fpr[0]));
    // nop
    { const bool branch_taken = ctx.fpu_condition();
    // nop
      if (branch_taken) {
          goto L_089FBD04;
      }
      goto L_089FBCBC;
    }
L_089FBCBC:
    ctx.fpr[1] = std::bit_cast<float>(rt.memory().aot_load32(ctx.gpr[5] + static_cast<std::uint32_t>(8)));
    ctx.fpr[0] = std::bit_cast<float>(rt.memory().aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(8)));
    { const float fs = ctx.fpr[2]; const float ft = ctx.fpr[0]; if ((std::isinf(fs) && ft == 0.0f) || (std::isinf(ft) && fs == 0.0f)) ctx.set_fpr_bits(0, 0x7FC00000u); else ctx.fpr[0] = fs * ft; }
    ctx.fpr[0] = ctx.fpr[1] + ctx.fpr[0];
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(20), std::bit_cast<std::uint32_t>(ctx.fpr[0]));
    ctx.fpr[1] = std::bit_cast<float>(rt.memory().aot_load32(ctx.gpr[5] + static_cast<std::uint32_t>(12)));
    ctx.fpr[0] = std::bit_cast<float>(rt.memory().aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(12)));
    { const float fs = ctx.fpr[2]; const float ft = ctx.fpr[0]; if ((std::isinf(fs) && ft == 0.0f) || (std::isinf(ft) && fs == 0.0f)) ctx.set_fpr_bits(0, 0x7FC00000u); else ctx.fpr[0] = fs * ft; }
    ctx.fpr[0] = ctx.fpr[1] + ctx.fpr[0];
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(24), std::bit_cast<std::uint32_t>(ctx.fpr[0]));
    ctx.fpr[1] = std::bit_cast<float>(rt.memory().aot_load32(ctx.gpr[5] + static_cast<std::uint32_t>(16)));
    ctx.fpr[0] = std::bit_cast<float>(rt.memory().aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(16)));
    { const float fs = ctx.fpr[2]; const float ft = ctx.fpr[0]; if ((std::isinf(fs) && ft == 0.0f) || (std::isinf(ft) && fs == 0.0f)) ctx.set_fpr_bits(0, 0x7FC00000u); else ctx.fpr[0] = fs * ft; }
    ctx.fpr[0] = ctx.fpr[1] + ctx.fpr[0];
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(28), std::bit_cast<std::uint32_t>(ctx.fpr[0]));
    ctx.set_gpr(5, ctx.gpr[29] + static_cast<std::uint32_t>(20));
    ctx.set_gpr(31, 0x089FBD04u);
    // nop
    goto L_089FBB94;
L_089FBD04:
    ctx.set_gpr(31, rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(12)));
    ctx.set_gpr(29, ctx.gpr[29] + static_cast<std::uint32_t>(32));
    jump_target = ctx.gpr[31];
    // nop
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_089FBD14:
    ctx.set_gpr(29, ctx.gpr[29] + static_cast<std::uint32_t>(-32));
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(12), ctx.gpr[31]);
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(8), ctx.gpr[16]);
    ctx.set_gpr(16, ctx.gpr[4] + 0u);
    ctx.fpr[2] = std::bit_cast<float>(rt.memory().aot_load32(ctx.gpr[5] + static_cast<std::uint32_t>(32)));
    ctx.fpr[1] = std::bit_cast<float>(rt.memory().aot_load32(ctx.gpr[5] + static_cast<std::uint32_t>(8)));
    ctx.fpr[0] = std::bit_cast<float>(rt.memory().aot_load32(ctx.gpr[5] + static_cast<std::uint32_t>(20)));
    { const float fs = ctx.fpr[2]; const float ft = ctx.fpr[0]; if ((std::isinf(fs) && ft == 0.0f) || (std::isinf(ft) && fs == 0.0f)) ctx.set_fpr_bits(0, 0x7FC00000u); else ctx.fpr[0] = fs * ft; }
    ctx.fpr[0] = ctx.fpr[1] + ctx.fpr[0];
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(20), std::bit_cast<std::uint32_t>(ctx.fpr[0]));
    ctx.fpr[1] = std::bit_cast<float>(rt.memory().aot_load32(ctx.gpr[5] + static_cast<std::uint32_t>(12)));
    ctx.fpr[0] = std::bit_cast<float>(rt.memory().aot_load32(ctx.gpr[5] + static_cast<std::uint32_t>(24)));
    { const float fs = ctx.fpr[2]; const float ft = ctx.fpr[0]; if ((std::isinf(fs) && ft == 0.0f) || (std::isinf(ft) && fs == 0.0f)) ctx.set_fpr_bits(0, 0x7FC00000u); else ctx.fpr[0] = fs * ft; }
    ctx.fpr[0] = ctx.fpr[1] + ctx.fpr[0];
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(24), std::bit_cast<std::uint32_t>(ctx.fpr[0]));
    ctx.fpr[1] = std::bit_cast<float>(rt.memory().aot_load32(ctx.gpr[5] + static_cast<std::uint32_t>(16)));
    ctx.fpr[0] = std::bit_cast<float>(rt.memory().aot_load32(ctx.gpr[5] + static_cast<std::uint32_t>(28)));
    { const float fs = ctx.fpr[2]; const float ft = ctx.fpr[0]; if ((std::isinf(fs) && ft == 0.0f) || (std::isinf(ft) && fs == 0.0f)) ctx.set_fpr_bits(0, 0x7FC00000u); else ctx.fpr[0] = fs * ft; }
    ctx.fpr[0] = ctx.fpr[1] + ctx.fpr[0];
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(28), std::bit_cast<std::uint32_t>(ctx.fpr[0]));
    ctx.set_gpr(5, ctx.gpr[5] + static_cast<std::uint32_t>(8));
    ctx.set_gpr(31, 0x089FBD70u);
    // nop
    goto L_089FBB94;
L_089FBD70:
    ctx.set_gpr(4, ctx.gpr[16] + 0u);
    ctx.set_gpr(5, ctx.gpr[29] + static_cast<std::uint32_t>(20));
    ctx.set_gpr(31, 0x089FBD80u);
    // nop
    goto L_089FBB94;
L_089FBD80:
    ctx.set_gpr(31, rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(12)));
    ctx.set_gpr(16, rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(8)));
    ctx.set_gpr(29, ctx.gpr[29] + static_cast<std::uint32_t>(32));
    jump_target = ctx.gpr[31];
    // nop
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_089FBD94:
    ctx.set_gpr(29, ctx.gpr[29] + static_cast<std::uint32_t>(-16));
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(12), ctx.gpr[31]);
    ctx.set_gpr(31, 0x089FBDA4u);
    // nop
    goto L_089FAD44;
L_089FBDA4:
    ctx.set_gpr(31, rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(12)));
    ctx.set_gpr(29, ctx.gpr[29] + static_cast<std::uint32_t>(16));
    jump_target = ctx.gpr[31];
    // nop
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_089FBDB4:
    jump_target = ctx.gpr[31];
    // nop
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_089FBDBC:
    ctx.set_gpr(2, 0u + 0u);
    jump_target = ctx.gpr[31];
    // nop
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_089FBDC8:
    ctx.fpr[1] = std::bit_cast<float>(rt.memory().aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(20)));
    ctx.fpr[0] = std::bit_cast<float>(rt.memory().aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(8)));
    { const float fs = ctx.fpr[1]; const float ft = ctx.fpr[0]; if ((std::isinf(fs) && ft == 0.0f) || (std::isinf(ft) && fs == 0.0f)) ctx.set_fpr_bits(0, 0x7FC00000u); else ctx.fpr[0] = fs * ft; }
    rt.memory().aot_store32(ctx.gpr[5] + static_cast<std::uint32_t>(0), std::bit_cast<std::uint32_t>(ctx.fpr[0]));
    ctx.fpr[0] = std::bit_cast<float>(rt.memory().aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(12)));
    { const float fs = ctx.fpr[1]; const float ft = ctx.fpr[0]; if ((std::isinf(fs) && ft == 0.0f) || (std::isinf(ft) && fs == 0.0f)) ctx.set_fpr_bits(0, 0x7FC00000u); else ctx.fpr[0] = fs * ft; }
    rt.memory().aot_store32(ctx.gpr[5] + static_cast<std::uint32_t>(4), std::bit_cast<std::uint32_t>(ctx.fpr[0]));
    ctx.fpr[0] = std::bit_cast<float>(rt.memory().aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(16)));
    { const float fs = ctx.fpr[1]; const float ft = ctx.fpr[0]; if ((std::isinf(fs) && ft == 0.0f) || (std::isinf(ft) && fs == 0.0f)) ctx.set_fpr_bits(0, 0x7FC00000u); else ctx.fpr[0] = fs * ft; }
    rt.memory().aot_store32(ctx.gpr[5] + static_cast<std::uint32_t>(8), std::bit_cast<std::uint32_t>(ctx.fpr[0]));
    jump_target = ctx.gpr[31];
    // nop
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_089FBDF8:
    ctx.set_gpr(29, ctx.gpr[29] + static_cast<std::uint32_t>(-32));
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(12), ctx.gpr[31]);
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(8), ctx.gpr[17]);
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(4), ctx.gpr[16]);
    ctx.set_gpr(17, ctx.gpr[4] + 0u);
    ctx.set_gpr(16, ctx.gpr[5] + 0u);
    ctx.fpr[2] = std::bit_cast<float>(rt.memory().aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(32)));
    ctx.fpr[1] = std::bit_cast<float>(rt.memory().aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(8)));
    ctx.fpr[0] = std::bit_cast<float>(rt.memory().aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(20)));
    { const float fs = ctx.fpr[2]; const float ft = ctx.fpr[0]; if ((std::isinf(fs) && ft == 0.0f) || (std::isinf(ft) && fs == 0.0f)) ctx.set_fpr_bits(0, 0x7FC00000u); else ctx.fpr[0] = fs * ft; }
    ctx.fpr[0] = ctx.fpr[1] + ctx.fpr[0];
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(20), std::bit_cast<std::uint32_t>(ctx.fpr[0]));
    ctx.fpr[1] = std::bit_cast<float>(rt.memory().aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(12)));
    ctx.fpr[0] = std::bit_cast<float>(rt.memory().aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(24)));
    { const float fs = ctx.fpr[2]; const float ft = ctx.fpr[0]; if ((std::isinf(fs) && ft == 0.0f) || (std::isinf(ft) && fs == 0.0f)) ctx.set_fpr_bits(0, 0x7FC00000u); else ctx.fpr[0] = fs * ft; }
    ctx.fpr[0] = ctx.fpr[1] + ctx.fpr[0];
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(24), std::bit_cast<std::uint32_t>(ctx.fpr[0]));
    ctx.fpr[1] = std::bit_cast<float>(rt.memory().aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(16)));
    ctx.fpr[0] = std::bit_cast<float>(rt.memory().aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(28)));
    { const float fs = ctx.fpr[2]; const float ft = ctx.fpr[0]; if ((std::isinf(fs) && ft == 0.0f) || (std::isinf(ft) && fs == 0.0f)) ctx.set_fpr_bits(0, 0x7FC00000u); else ctx.fpr[0] = fs * ft; }
    ctx.fpr[0] = ctx.fpr[1] + ctx.fpr[0];
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(28), std::bit_cast<std::uint32_t>(ctx.fpr[0]));
    ctx.set_gpr(4, ctx.gpr[17] + static_cast<std::uint32_t>(8));
    ctx.set_gpr(5, ctx.gpr[4] + 0u);
    ctx.set_gpr(6, ctx.gpr[16] + 0u);
    ctx.set_gpr(31, 0x089FBE64u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0127_entry, 127u, 271u, 0x08A03244u>(ctx, &aot_mem) && ctx.pc == 0x089FBE64u) goto L_089FBE64;
    return;
L_089FBE64:
    ctx.set_gpr(4, ctx.gpr[29] + static_cast<std::uint32_t>(20));
    ctx.set_gpr(5, ctx.gpr[4] + 0u);
    ctx.set_gpr(6, ctx.gpr[16] + 0u);
    ctx.set_gpr(31, 0x089FBE78u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0127_entry, 127u, 271u, 0x08A03244u>(ctx, &aot_mem) && ctx.pc == 0x089FBE78u) goto L_089FBE78;
    return;
L_089FBE78:
    ctx.fpr[1] = std::bit_cast<float>(rt.memory().aot_load32(ctx.gpr[17] + static_cast<std::uint32_t>(8)));
    ctx.fpr[0] = std::bit_cast<float>(rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(20)));
    ctx.fpr[0] = ctx.fpr[0] - ctx.fpr[1];
    rt.memory().aot_store32(ctx.gpr[17] + static_cast<std::uint32_t>(20), std::bit_cast<std::uint32_t>(ctx.fpr[0]));
    ctx.fpr[1] = std::bit_cast<float>(rt.memory().aot_load32(ctx.gpr[17] + static_cast<std::uint32_t>(12)));
    ctx.fpr[0] = std::bit_cast<float>(rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(24)));
    ctx.fpr[0] = ctx.fpr[0] - ctx.fpr[1];
    rt.memory().aot_store32(ctx.gpr[17] + static_cast<std::uint32_t>(24), std::bit_cast<std::uint32_t>(ctx.fpr[0]));
    ctx.fpr[1] = std::bit_cast<float>(rt.memory().aot_load32(ctx.gpr[17] + static_cast<std::uint32_t>(16)));
    ctx.fpr[0] = std::bit_cast<float>(rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(28)));
    ctx.fpr[0] = ctx.fpr[0] - ctx.fpr[1];
    rt.memory().aot_store32(ctx.gpr[17] + static_cast<std::uint32_t>(28), std::bit_cast<std::uint32_t>(ctx.fpr[0]));
    ctx.fpr[3] = std::bit_cast<float>(rt.memory().aot_load32(ctx.gpr[17] + static_cast<std::uint32_t>(24)));
    ctx.fpr[0] = std::bit_cast<float>(rt.memory().aot_load32(ctx.gpr[17] + static_cast<std::uint32_t>(20)));
    ctx.fpr[2] = std::bit_cast<float>(rt.memory().aot_load32(ctx.gpr[17] + static_cast<std::uint32_t>(28)));
    { const float fs = ctx.fpr[0]; const float ft = ctx.fpr[0]; if ((std::isinf(fs) && ft == 0.0f) || (std::isinf(ft) && fs == 0.0f)) ctx.set_fpr_bits(1, 0x7FC00000u); else ctx.fpr[1] = fs * ft; }
    { const float fs = ctx.fpr[3]; const float ft = ctx.fpr[3]; if ((std::isinf(fs) && ft == 0.0f) || (std::isinf(ft) && fs == 0.0f)) ctx.set_fpr_bits(0, 0x7FC00000u); else ctx.fpr[0] = fs * ft; }
    ctx.fpr[1] = ctx.fpr[1] + ctx.fpr[0];
    { const float fs = ctx.fpr[2]; const float ft = ctx.fpr[2]; if ((std::isinf(fs) && ft == 0.0f) || (std::isinf(ft) && fs == 0.0f)) ctx.set_fpr_bits(0, 0x7FC00000u); else ctx.fpr[0] = fs * ft; }
    ctx.fpr[0] = ctx.fpr[0] + ctx.fpr[1];
    ctx.fpr[2] = std::sqrt(ctx.fpr[0]);
    ctx.set_gpr(3, 16256u << 16u);
    ctx.fpr[0] = std::bit_cast<float>(ctx.gpr[3]);
    ctx.fpr[1] = ctx.fpr[0] / ctx.fpr[2];
    ctx.fpr[0] = std::bit_cast<float>(rt.memory().aot_load32(ctx.gpr[17] + static_cast<std::uint32_t>(20)));
    { const float fs = ctx.fpr[0]; const float ft = ctx.fpr[1]; if ((std::isinf(fs) && ft == 0.0f) || (std::isinf(ft) && fs == 0.0f)) ctx.set_fpr_bits(0, 0x7FC00000u); else ctx.fpr[0] = fs * ft; }
    rt.memory().aot_store32(ctx.gpr[17] + static_cast<std::uint32_t>(20), std::bit_cast<std::uint32_t>(ctx.fpr[0]));
    ctx.fpr[0] = std::bit_cast<float>(rt.memory().aot_load32(ctx.gpr[17] + static_cast<std::uint32_t>(24)));
    { const float fs = ctx.fpr[0]; const float ft = ctx.fpr[1]; if ((std::isinf(fs) && ft == 0.0f) || (std::isinf(ft) && fs == 0.0f)) ctx.set_fpr_bits(0, 0x7FC00000u); else ctx.fpr[0] = fs * ft; }
    rt.memory().aot_store32(ctx.gpr[17] + static_cast<std::uint32_t>(24), std::bit_cast<std::uint32_t>(ctx.fpr[0]));
    ctx.fpr[0] = std::bit_cast<float>(rt.memory().aot_load32(ctx.gpr[17] + static_cast<std::uint32_t>(28)));
    { const float fs = ctx.fpr[0]; const float ft = ctx.fpr[1]; if ((std::isinf(fs) && ft == 0.0f) || (std::isinf(ft) && fs == 0.0f)) ctx.set_fpr_bits(0, 0x7FC00000u); else ctx.fpr[0] = fs * ft; }
    rt.memory().aot_store32(ctx.gpr[17] + static_cast<std::uint32_t>(28), std::bit_cast<std::uint32_t>(ctx.fpr[0]));
    rt.memory().aot_store32(ctx.gpr[17] + static_cast<std::uint32_t>(32), std::bit_cast<std::uint32_t>(ctx.fpr[2]));
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
L_089FBF18:
    ctx.set_gpr(29, ctx.gpr[29] + static_cast<std::uint32_t>(-16));
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(12), ctx.gpr[31]);
    ctx.set_gpr(31, 0x089FBF28u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0124_entry, 124u, 637u, 0x089F77B0u>(ctx, &aot_mem) && ctx.pc == 0x089FBF28u) goto L_089FBF28;
    return;
L_089FBF28:
    ctx.set_gpr(3, 2246u << 16u);
    ctx.set_gpr(4, rt.memory().aot_load32(ctx.gpr[3] + static_cast<std::uint32_t>(-26892)));
    ctx.set_gpr(5, ctx.gpr[2] + 0u);
    ctx.set_gpr(6, 2208u << 16u);
    ctx.set_gpr(6, ctx.gpr[6] + static_cast<std::uint32_t>(-15820));
    ctx.set_gpr(31, 0x089FBF44u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0126_entry, 126u, 606u, 0x089FEFCCu>(ctx, &aot_mem) && ctx.pc == 0x089FBF44u) goto L_089FBF44;
    return;
L_089FBF44:
    ctx.set_gpr(31, 0x089FBF4Cu);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0123_entry, 123u, 508u, 0x089F3674u>(ctx, &aot_mem) && ctx.pc == 0x089FBF4Cu) goto L_089FBF4C;
    return;
L_089FBF4C:
    ctx.set_gpr(3, 2246u << 16u);
    ctx.set_gpr(4, rt.memory().aot_load32(ctx.gpr[3] + static_cast<std::uint32_t>(-26892)));
    ctx.set_gpr(5, ctx.gpr[2] + 0u);
    ctx.set_gpr(6, 2208u << 16u);
    ctx.set_gpr(6, ctx.gpr[6] + static_cast<std::uint32_t>(-15524));
    ctx.set_gpr(31, 0x089FBF68u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0126_entry, 126u, 606u, 0x089FEFCCu>(ctx, &aot_mem) && ctx.pc == 0x089FBF68u) goto L_089FBF68;
    return;
L_089FBF68:
    ctx.set_gpr(2, 2246u << 16u);
    ctx.set_gpr(4, rt.memory().aot_load32(ctx.gpr[2] + static_cast<std::uint32_t>(-26892)));
    ctx.set_gpr(5, ctx.gpr[4] + 0u);
    ctx.set_gpr(6, 2208u << 16u);
    ctx.set_gpr(6, ctx.gpr[6] + static_cast<std::uint32_t>(-15404));
    ctx.set_gpr(31, 0x089FBF84u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0126_entry, 126u, 606u, 0x089FEFCCu>(ctx, &aot_mem) && ctx.pc == 0x089FBF84u) goto L_089FBF84;
    return;
L_089FBF84:
    ctx.set_gpr(2, 2246u << 16u);
    ctx.set_gpr(4, rt.memory().aot_load32(ctx.gpr[2] + static_cast<std::uint32_t>(-26892)));
    ctx.set_gpr(2, 2246u << 16u);
    ctx.set_gpr(5, rt.memory().aot_load32(ctx.gpr[2] + static_cast<std::uint32_t>(-26660)));
    ctx.set_gpr(6, 2208u << 16u);
    ctx.set_gpr(6, ctx.gpr[6] + static_cast<std::uint32_t>(-14860));
    ctx.set_gpr(31, 0x089FBFA4u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0126_entry, 126u, 622u, 0x089FF0BCu>(ctx, &aot_mem) && ctx.pc == 0x089FBFA4u) goto L_089FBFA4;
    return;
L_089FBFA4:
    ctx.set_gpr(2, 2246u << 16u);
    ctx.set_gpr(4, rt.memory().aot_load32(ctx.gpr[2] + static_cast<std::uint32_t>(-26892)));
    ctx.set_gpr(2, 2246u << 16u);
    ctx.set_gpr(5, rt.memory().aot_load32(ctx.gpr[2] + static_cast<std::uint32_t>(-26860)));
    ctx.set_gpr(6, 2208u << 16u);
    ctx.set_gpr(6, ctx.gpr[6] + static_cast<std::uint32_t>(-14964));
    ctx.set_gpr(31, 0x089FBFC4u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0126_entry, 126u, 622u, 0x089FF0BCu>(ctx, &aot_mem) && ctx.pc == 0x089FBFC4u) goto L_089FBFC4;
    return;
L_089FBFC4:
    ctx.set_gpr(2, 2246u << 16u);
    ctx.set_gpr(4, rt.memory().aot_load32(ctx.gpr[2] + static_cast<std::uint32_t>(-26892)));
    ctx.set_gpr(5, ctx.gpr[4] + 0u);
    ctx.set_gpr(6, 2208u << 16u);
    ctx.set_gpr(6, ctx.gpr[6] + static_cast<std::uint32_t>(-14328));
    ctx.set_gpr(31, 0x089FBFE0u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0126_entry, 126u, 622u, 0x089FF0BCu>(ctx, &aot_mem) && ctx.pc == 0x089FBFE0u) goto L_089FBFE0;
    return;
L_089FBFE0:
    ctx.set_gpr(31, 0x089FBFE8u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0124_entry, 124u, 596u, 0x089F73F8u>(ctx, &aot_mem) && ctx.pc == 0x089FBFE8u) goto L_089FBFE8;
    return;
L_089FBFE8:
    ctx.set_gpr(3, 2246u << 16u);
    ctx.set_gpr(4, rt.memory().aot_load32(ctx.gpr[3] + static_cast<std::uint32_t>(-26892)));
    ctx.set_gpr(5, ctx.gpr[2] + 0u);
    ctx.set_gpr(6, 2208u << 16u);
    ctx.set_gpr(6, ctx.gpr[6] + static_cast<std::uint32_t>(-14520));
    ctx.set_gpr(31, 0x089FC004u);
    // nop
    (void)rt.invoke_chained_direct<&recomp_unit_0126_entry, 126u, 622u, 0x089FF0BCu>(ctx, &aot_mem);
    return;
}

void recomp_unit_0125(Runtime &rt, AllegrexContext &ctx) {
    auto aot_mem = rt.memory().aot_fast_view();
    recomp_unit_0125_entry(rt, ctx, 0u, aot_mem);
}

void register_generated_unit_125(Runtime &runtime) {
    runtime.register_generated_unit(125u, 0x089F8000u, 16384u, &recomp_unit_0125, &recomp_unit_0125_entry);
    runtime.register_function(0x089F8000u, &recomp_unit_0125, "recomp_unit_0125");
    runtime.register_function(0x089F8014u, &recomp_unit_0125, "recomp_unit_0125");
    runtime.register_function(0x089F802Cu, &recomp_unit_0125, "recomp_unit_0125");
    runtime.register_function(0x089F8030u, &recomp_unit_0125, "recomp_unit_0125");
    runtime.register_function(0x089F8038u, &recomp_unit_0125, "recomp_unit_0125");
    runtime.register_function(0x089F8050u, &recomp_unit_0125, "recomp_unit_0125");
    runtime.register_function(0x089F8054u, &recomp_unit_0125, "recomp_unit_0125");
    runtime.register_function(0x089F805Cu, &recomp_unit_0125, "recomp_unit_0125");
    runtime.register_function(0x089F8074u, &recomp_unit_0125, "recomp_unit_0125");
    runtime.register_function(0x089F8078u, &recomp_unit_0125, "recomp_unit_0125");
    runtime.register_function(0x089F8080u, &recomp_unit_0125, "recomp_unit_0125");
    runtime.register_function(0x089F8098u, &recomp_unit_0125, "recomp_unit_0125");
    runtime.register_function(0x089F80A4u, &recomp_unit_0125, "recomp_unit_0125");
    runtime.register_function(0x089F80B0u, &recomp_unit_0125, "recomp_unit_0125");
    runtime.register_function(0x089F80D4u, &recomp_unit_0125, "recomp_unit_0125");
    runtime.register_function(0x089F80E8u, &recomp_unit_0125, "recomp_unit_0125");
    runtime.register_function(0x089F80FCu, &recomp_unit_0125, "recomp_unit_0125");
    runtime.register_function(0x089F8108u, &recomp_unit_0125, "recomp_unit_0125");
    runtime.register_function(0x089F810Cu, &recomp_unit_0125, "recomp_unit_0125");
    runtime.register_function(0x089F8118u, &recomp_unit_0125, "recomp_unit_0125");
    runtime.register_function(0x089F8130u, &recomp_unit_0125, "recomp_unit_0125");
    runtime.register_function(0x089F8134u, &recomp_unit_0125, "recomp_unit_0125");
    runtime.register_function(0x089F813Cu, &recomp_unit_0125, "recomp_unit_0125");
    runtime.register_function(0x089F8154u, &recomp_unit_0125, "recomp_unit_0125");
    runtime.register_function(0x089F8158u, &recomp_unit_0125, "recomp_unit_0125");
    runtime.register_function(0x089F8160u, &recomp_unit_0125, "recomp_unit_0125");
    runtime.register_function(0x089F8178u, &recomp_unit_0125, "recomp_unit_0125");
    runtime.register_function(0x089F817Cu, &recomp_unit_0125, "recomp_unit_0125");
    runtime.register_function(0x089F8184u, &recomp_unit_0125, "recomp_unit_0125");
    runtime.register_function(0x089F819Cu, &recomp_unit_0125, "recomp_unit_0125");
    runtime.register_function(0x089F81A0u, &recomp_unit_0125, "recomp_unit_0125");
    runtime.register_function(0x089F81A8u, &recomp_unit_0125, "recomp_unit_0125");
    runtime.register_function(0x089F81C0u, &recomp_unit_0125, "recomp_unit_0125");
    runtime.register_function(0x089F81C4u, &recomp_unit_0125, "recomp_unit_0125");
    runtime.register_function(0x089F81CCu, &recomp_unit_0125, "recomp_unit_0125");
    runtime.register_function(0x089F81E4u, &recomp_unit_0125, "recomp_unit_0125");
    runtime.register_function(0x089F81E8u, &recomp_unit_0125, "recomp_unit_0125");
    runtime.register_function(0x089F81F0u, &recomp_unit_0125, "recomp_unit_0125");
    runtime.register_function(0x089F8208u, &recomp_unit_0125, "recomp_unit_0125");
    runtime.register_function(0x089F820Cu, &recomp_unit_0125, "recomp_unit_0125");
    runtime.register_function(0x089F8214u, &recomp_unit_0125, "recomp_unit_0125");
    runtime.register_function(0x089F8230u, &recomp_unit_0125, "recomp_unit_0125");
    runtime.register_function(0x089F8240u, &recomp_unit_0125, "recomp_unit_0125");
    runtime.register_function(0x089F8268u, &recomp_unit_0125, "recomp_unit_0125");
    runtime.register_function(0x089F826Cu, &recomp_unit_0125, "recomp_unit_0125");
    runtime.register_function(0x089F8274u, &recomp_unit_0125, "recomp_unit_0125");
    runtime.register_function(0x089F828Cu, &recomp_unit_0125, "recomp_unit_0125");
    runtime.register_function(0x089F8290u, &recomp_unit_0125, "recomp_unit_0125");
    runtime.register_function(0x089F8298u, &recomp_unit_0125, "recomp_unit_0125");
    runtime.register_function(0x089F82B0u, &recomp_unit_0125, "recomp_unit_0125");
    runtime.register_function(0x089F82B4u, &recomp_unit_0125, "recomp_unit_0125");
    runtime.register_function(0x089F82BCu, &recomp_unit_0125, "recomp_unit_0125");
    runtime.register_function(0x089F82C8u, &recomp_unit_0125, "recomp_unit_0125");
    runtime.register_function(0x089F82ECu, &recomp_unit_0125, "recomp_unit_0125");
    runtime.register_function(0x089F82FCu, &recomp_unit_0125, "recomp_unit_0125");
    runtime.register_function(0x089F8304u, &recomp_unit_0125, "recomp_unit_0125");
    runtime.register_function(0x089F8318u, &recomp_unit_0125, "recomp_unit_0125");
    runtime.register_function(0x089F833Cu, &recomp_unit_0125, "recomp_unit_0125");
    runtime.register_function(0x089F8348u, &recomp_unit_0125, "recomp_unit_0125");
    runtime.register_function(0x089F8354u, &recomp_unit_0125, "recomp_unit_0125");
    runtime.register_function(0x089F8368u, &recomp_unit_0125, "recomp_unit_0125");
    runtime.register_function(0x089F838Cu, &recomp_unit_0125, "recomp_unit_0125");
    runtime.register_function(0x089F83A8u, &recomp_unit_0125, "recomp_unit_0125");
    runtime.register_function(0x089F83BCu, &recomp_unit_0125, "recomp_unit_0125");
    runtime.register_function(0x089F83C8u, &recomp_unit_0125, "recomp_unit_0125");
    runtime.register_function(0x089F83FCu, &recomp_unit_0125, "recomp_unit_0125");
    runtime.register_function(0x089F8404u, &recomp_unit_0125, "recomp_unit_0125");
    runtime.register_function(0x089F8414u, &recomp_unit_0125, "recomp_unit_0125");
    runtime.register_function(0x089F8418u, &recomp_unit_0125, "recomp_unit_0125");
    runtime.register_function(0x089F8428u, &recomp_unit_0125, "recomp_unit_0125");
    runtime.register_function(0x089F842Cu, &recomp_unit_0125, "recomp_unit_0125");
    runtime.register_function(0x089F843Cu, &recomp_unit_0125, "recomp_unit_0125");
    runtime.register_function(0x089F8450u, &recomp_unit_0125, "recomp_unit_0125");
    runtime.register_function(0x089F845Cu, &recomp_unit_0125, "recomp_unit_0125");
    runtime.register_function(0x089F8460u, &recomp_unit_0125, "recomp_unit_0125");
    runtime.register_function(0x089F846Cu, &recomp_unit_0125, "recomp_unit_0125");
    runtime.register_function(0x089F8484u, &recomp_unit_0125, "recomp_unit_0125");
    runtime.register_function(0x089F8488u, &recomp_unit_0125, "recomp_unit_0125");
    runtime.register_function(0x089F84A0u, &recomp_unit_0125, "recomp_unit_0125");
    runtime.register_function(0x089F84C4u, &recomp_unit_0125, "recomp_unit_0125");
    runtime.register_function(0x089F84C8u, &recomp_unit_0125, "recomp_unit_0125");
    runtime.register_function(0x089F84D0u, &recomp_unit_0125, "recomp_unit_0125");
    runtime.register_function(0x089F84E8u, &recomp_unit_0125, "recomp_unit_0125");
    runtime.register_function(0x089F84ECu, &recomp_unit_0125, "recomp_unit_0125");
    runtime.register_function(0x089F84F4u, &recomp_unit_0125, "recomp_unit_0125");
    runtime.register_function(0x089F850Cu, &recomp_unit_0125, "recomp_unit_0125");
    runtime.register_function(0x089F8510u, &recomp_unit_0125, "recomp_unit_0125");
    runtime.register_function(0x089F8518u, &recomp_unit_0125, "recomp_unit_0125");
    runtime.register_function(0x089F8524u, &recomp_unit_0125, "recomp_unit_0125");
    runtime.register_function(0x089F8534u, &recomp_unit_0125, "recomp_unit_0125");
    runtime.register_function(0x089F8540u, &recomp_unit_0125, "recomp_unit_0125");
    runtime.register_function(0x089F854Cu, &recomp_unit_0125, "recomp_unit_0125");
    runtime.register_function(0x089F8550u, &recomp_unit_0125, "recomp_unit_0125");
    runtime.register_function(0x089F8560u, &recomp_unit_0125, "recomp_unit_0125");
    runtime.register_function(0x089F8590u, &recomp_unit_0125, "recomp_unit_0125");
    runtime.register_function(0x089F8594u, &recomp_unit_0125, "recomp_unit_0125");
    runtime.register_function(0x089F859Cu, &recomp_unit_0125, "recomp_unit_0125");
    runtime.register_function(0x089F85B4u, &recomp_unit_0125, "recomp_unit_0125");
    runtime.register_function(0x089F85B8u, &recomp_unit_0125, "recomp_unit_0125");
    runtime.register_function(0x089F85C0u, &recomp_unit_0125, "recomp_unit_0125");
    runtime.register_function(0x089F85D8u, &recomp_unit_0125, "recomp_unit_0125");
    runtime.register_function(0x089F85DCu, &recomp_unit_0125, "recomp_unit_0125");
    runtime.register_function(0x089F85E4u, &recomp_unit_0125, "recomp_unit_0125");
    runtime.register_function(0x089F85FCu, &recomp_unit_0125, "recomp_unit_0125");
    runtime.register_function(0x089F8600u, &recomp_unit_0125, "recomp_unit_0125");
    runtime.register_function(0x089F8608u, &recomp_unit_0125, "recomp_unit_0125");
    runtime.register_function(0x089F8620u, &recomp_unit_0125, "recomp_unit_0125");
    runtime.register_function(0x089F8624u, &recomp_unit_0125, "recomp_unit_0125");
    runtime.register_function(0x089F862Cu, &recomp_unit_0125, "recomp_unit_0125");
    runtime.register_function(0x089F8644u, &recomp_unit_0125, "recomp_unit_0125");
    runtime.register_function(0x089F8648u, &recomp_unit_0125, "recomp_unit_0125");
    runtime.register_function(0x089F8650u, &recomp_unit_0125, "recomp_unit_0125");
    runtime.register_function(0x089F865Cu, &recomp_unit_0125, "recomp_unit_0125");
    runtime.register_function(0x089F866Cu, &recomp_unit_0125, "recomp_unit_0125");
    runtime.register_function(0x089F8674u, &recomp_unit_0125, "recomp_unit_0125");
    runtime.register_function(0x089F868Cu, &recomp_unit_0125, "recomp_unit_0125");
    runtime.register_function(0x089F86A4u, &recomp_unit_0125, "recomp_unit_0125");
    runtime.register_function(0x089F86BCu, &recomp_unit_0125, "recomp_unit_0125");
    runtime.register_function(0x089F86D4u, &recomp_unit_0125, "recomp_unit_0125");
    runtime.register_function(0x089F86ECu, &recomp_unit_0125, "recomp_unit_0125");
    runtime.register_function(0x089F8704u, &recomp_unit_0125, "recomp_unit_0125");
    runtime.register_function(0x089F8710u, &recomp_unit_0125, "recomp_unit_0125");
    runtime.register_function(0x089F871Cu, &recomp_unit_0125, "recomp_unit_0125");
    runtime.register_function(0x089F8720u, &recomp_unit_0125, "recomp_unit_0125");
    runtime.register_function(0x089F8738u, &recomp_unit_0125, "recomp_unit_0125");
    runtime.register_function(0x089F8754u, &recomp_unit_0125, "recomp_unit_0125");
    runtime.register_function(0x089F8764u, &recomp_unit_0125, "recomp_unit_0125");
    runtime.register_function(0x089F8784u, &recomp_unit_0125, "recomp_unit_0125");
    runtime.register_function(0x089F878Cu, &recomp_unit_0125, "recomp_unit_0125");
    runtime.register_function(0x089F8798u, &recomp_unit_0125, "recomp_unit_0125");
    runtime.register_function(0x089F8804u, &recomp_unit_0125, "recomp_unit_0125");
    runtime.register_function(0x089F8814u, &recomp_unit_0125, "recomp_unit_0125");
    runtime.register_function(0x089F8824u, &recomp_unit_0125, "recomp_unit_0125");
    runtime.register_function(0x089F8834u, &recomp_unit_0125, "recomp_unit_0125");
    runtime.register_function(0x089F8844u, &recomp_unit_0125, "recomp_unit_0125");
    runtime.register_function(0x089F8854u, &recomp_unit_0125, "recomp_unit_0125");
    runtime.register_function(0x089F8860u, &recomp_unit_0125, "recomp_unit_0125");
    runtime.register_function(0x089F8864u, &recomp_unit_0125, "recomp_unit_0125");
    runtime.register_function(0x089F887Cu, &recomp_unit_0125, "recomp_unit_0125");
    runtime.register_function(0x089F88B0u, &recomp_unit_0125, "recomp_unit_0125");
    runtime.register_function(0x089F88B4u, &recomp_unit_0125, "recomp_unit_0125");
    runtime.register_function(0x089F88BCu, &recomp_unit_0125, "recomp_unit_0125");
    runtime.register_function(0x089F88D4u, &recomp_unit_0125, "recomp_unit_0125");
    runtime.register_function(0x089F88D8u, &recomp_unit_0125, "recomp_unit_0125");
    runtime.register_function(0x089F88E0u, &recomp_unit_0125, "recomp_unit_0125");
    runtime.register_function(0x089F88F8u, &recomp_unit_0125, "recomp_unit_0125");
    runtime.register_function(0x089F88FCu, &recomp_unit_0125, "recomp_unit_0125");
    runtime.register_function(0x089F8904u, &recomp_unit_0125, "recomp_unit_0125");
    runtime.register_function(0x089F8910u, &recomp_unit_0125, "recomp_unit_0125");
    runtime.register_function(0x089F8920u, &recomp_unit_0125, "recomp_unit_0125");
    runtime.register_function(0x089F8974u, &recomp_unit_0125, "recomp_unit_0125");
    runtime.register_function(0x089F8980u, &recomp_unit_0125, "recomp_unit_0125");
    runtime.register_function(0x089F8988u, &recomp_unit_0125, "recomp_unit_0125");
    runtime.register_function(0x089F8994u, &recomp_unit_0125, "recomp_unit_0125");
    runtime.register_function(0x089F899Cu, &recomp_unit_0125, "recomp_unit_0125");
    runtime.register_function(0x089F89A4u, &recomp_unit_0125, "recomp_unit_0125");
    runtime.register_function(0x089F89B4u, &recomp_unit_0125, "recomp_unit_0125");
    runtime.register_function(0x089F89BCu, &recomp_unit_0125, "recomp_unit_0125");
    runtime.register_function(0x089F89C8u, &recomp_unit_0125, "recomp_unit_0125");
    runtime.register_function(0x089F89CCu, &recomp_unit_0125, "recomp_unit_0125");
    runtime.register_function(0x089F89E8u, &recomp_unit_0125, "recomp_unit_0125");
    runtime.register_function(0x089F8A00u, &recomp_unit_0125, "recomp_unit_0125");
    runtime.register_function(0x089F8A14u, &recomp_unit_0125, "recomp_unit_0125");
    runtime.register_function(0x089F8A2Cu, &recomp_unit_0125, "recomp_unit_0125");
    runtime.register_function(0x089F8A40u, &recomp_unit_0125, "recomp_unit_0125");
    runtime.register_function(0x089F8A58u, &recomp_unit_0125, "recomp_unit_0125");
    runtime.register_function(0x089F8A6Cu, &recomp_unit_0125, "recomp_unit_0125");
    runtime.register_function(0x089F8A78u, &recomp_unit_0125, "recomp_unit_0125");
    runtime.register_function(0x089F8A7Cu, &recomp_unit_0125, "recomp_unit_0125");
    runtime.register_function(0x089F8A84u, &recomp_unit_0125, "recomp_unit_0125");
    runtime.register_function(0x089F8AA8u, &recomp_unit_0125, "recomp_unit_0125");
    runtime.register_function(0x089F8AF8u, &recomp_unit_0125, "recomp_unit_0125");
    runtime.register_function(0x089F8B10u, &recomp_unit_0125, "recomp_unit_0125");
    runtime.register_function(0x089F8B28u, &recomp_unit_0125, "recomp_unit_0125");
    runtime.register_function(0x089F8B2Cu, &recomp_unit_0125, "recomp_unit_0125");
    runtime.register_function(0x089F8B44u, &recomp_unit_0125, "recomp_unit_0125");
    runtime.register_function(0x089F8B48u, &recomp_unit_0125, "recomp_unit_0125");
    runtime.register_function(0x089F8B60u, &recomp_unit_0125, "recomp_unit_0125");
    runtime.register_function(0x089F8B64u, &recomp_unit_0125, "recomp_unit_0125");
    runtime.register_function(0x089F8B7Cu, &recomp_unit_0125, "recomp_unit_0125");
    runtime.register_function(0x089F8B80u, &recomp_unit_0125, "recomp_unit_0125");
    runtime.register_function(0x089F8B98u, &recomp_unit_0125, "recomp_unit_0125");
    runtime.register_function(0x089F8B9Cu, &recomp_unit_0125, "recomp_unit_0125");
    runtime.register_function(0x089F8BB4u, &recomp_unit_0125, "recomp_unit_0125");
    runtime.register_function(0x089F8BB8u, &recomp_unit_0125, "recomp_unit_0125");
    runtime.register_function(0x089F8BC0u, &recomp_unit_0125, "recomp_unit_0125");
    runtime.register_function(0x089F8BE4u, &recomp_unit_0125, "recomp_unit_0125");
    runtime.register_function(0x089F8BF0u, &recomp_unit_0125, "recomp_unit_0125");
    runtime.register_function(0x089F8C10u, &recomp_unit_0125, "recomp_unit_0125");
    runtime.register_function(0x089F8C14u, &recomp_unit_0125, "recomp_unit_0125");
    runtime.register_function(0x089F8C20u, &recomp_unit_0125, "recomp_unit_0125");
    runtime.register_function(0x089F8C38u, &recomp_unit_0125, "recomp_unit_0125");
    runtime.register_function(0x089F8C50u, &recomp_unit_0125, "recomp_unit_0125");
    runtime.register_function(0x089F8C88u, &recomp_unit_0125, "recomp_unit_0125");
    runtime.register_function(0x089F8C8Cu, &recomp_unit_0125, "recomp_unit_0125");
    runtime.register_function(0x089F8CA0u, &recomp_unit_0125, "recomp_unit_0125");
    runtime.register_function(0x089F8CA4u, &recomp_unit_0125, "recomp_unit_0125");
    runtime.register_function(0x089F8CB8u, &recomp_unit_0125, "recomp_unit_0125");
    runtime.register_function(0x089F8CBCu, &recomp_unit_0125, "recomp_unit_0125");
    runtime.register_function(0x089F8CD0u, &recomp_unit_0125, "recomp_unit_0125");
    runtime.register_function(0x089F8CD4u, &recomp_unit_0125, "recomp_unit_0125");
    runtime.register_function(0x089F8CE8u, &recomp_unit_0125, "recomp_unit_0125");
    runtime.register_function(0x089F8CECu, &recomp_unit_0125, "recomp_unit_0125");
    runtime.register_function(0x089F8D00u, &recomp_unit_0125, "recomp_unit_0125");
    runtime.register_function(0x089F8D04u, &recomp_unit_0125, "recomp_unit_0125");
    runtime.register_function(0x089F8D0Cu, &recomp_unit_0125, "recomp_unit_0125");
    runtime.register_function(0x089F8D24u, &recomp_unit_0125, "recomp_unit_0125");
    runtime.register_function(0x089F8D28u, &recomp_unit_0125, "recomp_unit_0125");
    runtime.register_function(0x089F8D40u, &recomp_unit_0125, "recomp_unit_0125");
    runtime.register_function(0x089F8D44u, &recomp_unit_0125, "recomp_unit_0125");
    runtime.register_function(0x089F8D5Cu, &recomp_unit_0125, "recomp_unit_0125");
    runtime.register_function(0x089F8D60u, &recomp_unit_0125, "recomp_unit_0125");
    runtime.register_function(0x089F8D78u, &recomp_unit_0125, "recomp_unit_0125");
    runtime.register_function(0x089F8D7Cu, &recomp_unit_0125, "recomp_unit_0125");
    runtime.register_function(0x089F8D94u, &recomp_unit_0125, "recomp_unit_0125");
    runtime.register_function(0x089F8D98u, &recomp_unit_0125, "recomp_unit_0125");
    runtime.register_function(0x089F8DB0u, &recomp_unit_0125, "recomp_unit_0125");
    runtime.register_function(0x089F8DB4u, &recomp_unit_0125, "recomp_unit_0125");
    runtime.register_function(0x089F8DBCu, &recomp_unit_0125, "recomp_unit_0125");
    runtime.register_function(0x089F8DCCu, &recomp_unit_0125, "recomp_unit_0125");
    runtime.register_function(0x089F8DDCu, &recomp_unit_0125, "recomp_unit_0125");
    runtime.register_function(0x089F8E04u, &recomp_unit_0125, "recomp_unit_0125");
    runtime.register_function(0x089F8E1Cu, &recomp_unit_0125, "recomp_unit_0125");
    runtime.register_function(0x089F8E20u, &recomp_unit_0125, "recomp_unit_0125");
    runtime.register_function(0x089F8E28u, &recomp_unit_0125, "recomp_unit_0125");
    runtime.register_function(0x089F8E40u, &recomp_unit_0125, "recomp_unit_0125");
    runtime.register_function(0x089F8E44u, &recomp_unit_0125, "recomp_unit_0125");
    runtime.register_function(0x089F8E4Cu, &recomp_unit_0125, "recomp_unit_0125");
    runtime.register_function(0x089F8E64u, &recomp_unit_0125, "recomp_unit_0125");
    runtime.register_function(0x089F8E68u, &recomp_unit_0125, "recomp_unit_0125");
    runtime.register_function(0x089F8E70u, &recomp_unit_0125, "recomp_unit_0125");
    runtime.register_function(0x089F8EC8u, &recomp_unit_0125, "recomp_unit_0125");
    runtime.register_function(0x089F8EECu, &recomp_unit_0125, "recomp_unit_0125");
    runtime.register_function(0x089F8EF4u, &recomp_unit_0125, "recomp_unit_0125");
    runtime.register_function(0x089F8F10u, &recomp_unit_0125, "recomp_unit_0125");
    runtime.register_function(0x089F8F18u, &recomp_unit_0125, "recomp_unit_0125");
    runtime.register_function(0x089F8F34u, &recomp_unit_0125, "recomp_unit_0125");
    runtime.register_function(0x089F8F3Cu, &recomp_unit_0125, "recomp_unit_0125");
    runtime.register_function(0x089F8F58u, &recomp_unit_0125, "recomp_unit_0125");
    runtime.register_function(0x089F8F74u, &recomp_unit_0125, "recomp_unit_0125");
    runtime.register_function(0x089F8F94u, &recomp_unit_0125, "recomp_unit_0125");
    runtime.register_function(0x089F8FB4u, &recomp_unit_0125, "recomp_unit_0125");
    runtime.register_function(0x089F8FD4u, &recomp_unit_0125, "recomp_unit_0125");
    runtime.register_function(0x089F8FF0u, &recomp_unit_0125, "recomp_unit_0125");
    runtime.register_function(0x089F9010u, &recomp_unit_0125, "recomp_unit_0125");
    runtime.register_function(0x089F9030u, &recomp_unit_0125, "recomp_unit_0125");
    runtime.register_function(0x089F9048u, &recomp_unit_0125, "recomp_unit_0125");
    runtime.register_function(0x089F9060u, &recomp_unit_0125, "recomp_unit_0125");
    runtime.register_function(0x089F9078u, &recomp_unit_0125, "recomp_unit_0125");
    runtime.register_function(0x089F9090u, &recomp_unit_0125, "recomp_unit_0125");
    runtime.register_function(0x089F90A8u, &recomp_unit_0125, "recomp_unit_0125");
    runtime.register_function(0x089F90C0u, &recomp_unit_0125, "recomp_unit_0125");
    runtime.register_function(0x089F90D8u, &recomp_unit_0125, "recomp_unit_0125");
    runtime.register_function(0x089F90F0u, &recomp_unit_0125, "recomp_unit_0125");
    runtime.register_function(0x089F9100u, &recomp_unit_0125, "recomp_unit_0125");
    runtime.register_function(0x089F9130u, &recomp_unit_0125, "recomp_unit_0125");
    runtime.register_function(0x089F9148u, &recomp_unit_0125, "recomp_unit_0125");
    runtime.register_function(0x089F9160u, &recomp_unit_0125, "recomp_unit_0125");
    runtime.register_function(0x089F9178u, &recomp_unit_0125, "recomp_unit_0125");
    runtime.register_function(0x089F9190u, &recomp_unit_0125, "recomp_unit_0125");
    runtime.register_function(0x089F91A8u, &recomp_unit_0125, "recomp_unit_0125");
    runtime.register_function(0x089F91C0u, &recomp_unit_0125, "recomp_unit_0125");
    runtime.register_function(0x089F91D8u, &recomp_unit_0125, "recomp_unit_0125");
    runtime.register_function(0x089F91F0u, &recomp_unit_0125, "recomp_unit_0125");
    runtime.register_function(0x089F9218u, &recomp_unit_0125, "recomp_unit_0125");
    runtime.register_function(0x089F9230u, &recomp_unit_0125, "recomp_unit_0125");
    runtime.register_function(0x089F9234u, &recomp_unit_0125, "recomp_unit_0125");
    runtime.register_function(0x089F9240u, &recomp_unit_0125, "recomp_unit_0125");
    runtime.register_function(0x089F925Cu, &recomp_unit_0125, "recomp_unit_0125");
    runtime.register_function(0x089F926Cu, &recomp_unit_0125, "recomp_unit_0125");
    runtime.register_function(0x089F9280u, &recomp_unit_0125, "recomp_unit_0125");
    runtime.register_function(0x089F9290u, &recomp_unit_0125, "recomp_unit_0125");
    runtime.register_function(0x089F92A4u, &recomp_unit_0125, "recomp_unit_0125");
    runtime.register_function(0x089F92B4u, &recomp_unit_0125, "recomp_unit_0125");
    runtime.register_function(0x089F92C8u, &recomp_unit_0125, "recomp_unit_0125");
    runtime.register_function(0x089F92D8u, &recomp_unit_0125, "recomp_unit_0125");
    runtime.register_function(0x089F92ECu, &recomp_unit_0125, "recomp_unit_0125");
    runtime.register_function(0x089F92FCu, &recomp_unit_0125, "recomp_unit_0125");
    runtime.register_function(0x089F9310u, &recomp_unit_0125, "recomp_unit_0125");
    runtime.register_function(0x089F932Cu, &recomp_unit_0125, "recomp_unit_0125");
    runtime.register_function(0x089F9340u, &recomp_unit_0125, "recomp_unit_0125");
    runtime.register_function(0x089F93A8u, &recomp_unit_0125, "recomp_unit_0125");
    runtime.register_function(0x089F93BCu, &recomp_unit_0125, "recomp_unit_0125");
    runtime.register_function(0x089F93CCu, &recomp_unit_0125, "recomp_unit_0125");
    runtime.register_function(0x089F93D0u, &recomp_unit_0125, "recomp_unit_0125");
    runtime.register_function(0x089F93DCu, &recomp_unit_0125, "recomp_unit_0125");
    runtime.register_function(0x089F93E8u, &recomp_unit_0125, "recomp_unit_0125");
    runtime.register_function(0x089F93F4u, &recomp_unit_0125, "recomp_unit_0125");
    runtime.register_function(0x089F93FCu, &recomp_unit_0125, "recomp_unit_0125");
    runtime.register_function(0x089F9408u, &recomp_unit_0125, "recomp_unit_0125");
    runtime.register_function(0x089F940Cu, &recomp_unit_0125, "recomp_unit_0125");
    runtime.register_function(0x089F9420u, &recomp_unit_0125, "recomp_unit_0125");
    runtime.register_function(0x089F9434u, &recomp_unit_0125, "recomp_unit_0125");
    runtime.register_function(0x089F9440u, &recomp_unit_0125, "recomp_unit_0125");
    runtime.register_function(0x089F94A4u, &recomp_unit_0125, "recomp_unit_0125");
    runtime.register_function(0x089F94B8u, &recomp_unit_0125, "recomp_unit_0125");
    runtime.register_function(0x089F94C8u, &recomp_unit_0125, "recomp_unit_0125");
    runtime.register_function(0x089F94CCu, &recomp_unit_0125, "recomp_unit_0125");
    runtime.register_function(0x089F94D8u, &recomp_unit_0125, "recomp_unit_0125");
    runtime.register_function(0x089F94DCu, &recomp_unit_0125, "recomp_unit_0125");
    runtime.register_function(0x089F94E8u, &recomp_unit_0125, "recomp_unit_0125");
    runtime.register_function(0x089F94F4u, &recomp_unit_0125, "recomp_unit_0125");
    runtime.register_function(0x089F9500u, &recomp_unit_0125, "recomp_unit_0125");
    runtime.register_function(0x089F9508u, &recomp_unit_0125, "recomp_unit_0125");
    runtime.register_function(0x089F9514u, &recomp_unit_0125, "recomp_unit_0125");
    runtime.register_function(0x089F9518u, &recomp_unit_0125, "recomp_unit_0125");
    runtime.register_function(0x089F9520u, &recomp_unit_0125, "recomp_unit_0125");
    runtime.register_function(0x089F954Cu, &recomp_unit_0125, "recomp_unit_0125");
    runtime.register_function(0x089F9550u, &recomp_unit_0125, "recomp_unit_0125");
    runtime.register_function(0x089F9558u, &recomp_unit_0125, "recomp_unit_0125");
    runtime.register_function(0x089F9570u, &recomp_unit_0125, "recomp_unit_0125");
    runtime.register_function(0x089F9574u, &recomp_unit_0125, "recomp_unit_0125");
    runtime.register_function(0x089F957Cu, &recomp_unit_0125, "recomp_unit_0125");
    runtime.register_function(0x089F9594u, &recomp_unit_0125, "recomp_unit_0125");
    runtime.register_function(0x089F9598u, &recomp_unit_0125, "recomp_unit_0125");
    runtime.register_function(0x089F95A0u, &recomp_unit_0125, "recomp_unit_0125");
    runtime.register_function(0x089F95ACu, &recomp_unit_0125, "recomp_unit_0125");
    runtime.register_function(0x089F95B8u, &recomp_unit_0125, "recomp_unit_0125");
    runtime.register_function(0x089F95C8u, &recomp_unit_0125, "recomp_unit_0125");
    runtime.register_function(0x089F95DCu, &recomp_unit_0125, "recomp_unit_0125");
    runtime.register_function(0x089F95FCu, &recomp_unit_0125, "recomp_unit_0125");
    runtime.register_function(0x089F960Cu, &recomp_unit_0125, "recomp_unit_0125");
    runtime.register_function(0x089F9620u, &recomp_unit_0125, "recomp_unit_0125");
    runtime.register_function(0x089F9658u, &recomp_unit_0125, "recomp_unit_0125");
    runtime.register_function(0x089F9664u, &recomp_unit_0125, "recomp_unit_0125");
    runtime.register_function(0x089F9670u, &recomp_unit_0125, "recomp_unit_0125");
    runtime.register_function(0x089F9680u, &recomp_unit_0125, "recomp_unit_0125");
    runtime.register_function(0x089F9698u, &recomp_unit_0125, "recomp_unit_0125");
    runtime.register_function(0x089F96A0u, &recomp_unit_0125, "recomp_unit_0125");
    runtime.register_function(0x089F96ACu, &recomp_unit_0125, "recomp_unit_0125");
    runtime.register_function(0x089F96B0u, &recomp_unit_0125, "recomp_unit_0125");
    runtime.register_function(0x089F96BCu, &recomp_unit_0125, "recomp_unit_0125");
    runtime.register_function(0x089F96C0u, &recomp_unit_0125, "recomp_unit_0125");
    runtime.register_function(0x089F96E0u, &recomp_unit_0125, "recomp_unit_0125");
    runtime.register_function(0x089F9708u, &recomp_unit_0125, "recomp_unit_0125");
    runtime.register_function(0x089F975Cu, &recomp_unit_0125, "recomp_unit_0125");
    runtime.register_function(0x089F9768u, &recomp_unit_0125, "recomp_unit_0125");
    runtime.register_function(0x089F9770u, &recomp_unit_0125, "recomp_unit_0125");
    runtime.register_function(0x089F977Cu, &recomp_unit_0125, "recomp_unit_0125");
    runtime.register_function(0x089F9784u, &recomp_unit_0125, "recomp_unit_0125");
    runtime.register_function(0x089F978Cu, &recomp_unit_0125, "recomp_unit_0125");
    runtime.register_function(0x089F979Cu, &recomp_unit_0125, "recomp_unit_0125");
    runtime.register_function(0x089F97A4u, &recomp_unit_0125, "recomp_unit_0125");
    runtime.register_function(0x089F97B0u, &recomp_unit_0125, "recomp_unit_0125");
    runtime.register_function(0x089F97B4u, &recomp_unit_0125, "recomp_unit_0125");
    runtime.register_function(0x089F97D0u, &recomp_unit_0125, "recomp_unit_0125");
    runtime.register_function(0x089F97E0u, &recomp_unit_0125, "recomp_unit_0125");
    runtime.register_function(0x089F9834u, &recomp_unit_0125, "recomp_unit_0125");
    runtime.register_function(0x089F9840u, &recomp_unit_0125, "recomp_unit_0125");
    runtime.register_function(0x089F9844u, &recomp_unit_0125, "recomp_unit_0125");
    runtime.register_function(0x089F9850u, &recomp_unit_0125, "recomp_unit_0125");
    runtime.register_function(0x089F985Cu, &recomp_unit_0125, "recomp_unit_0125");
    runtime.register_function(0x089F9868u, &recomp_unit_0125, "recomp_unit_0125");
    runtime.register_function(0x089F986Cu, &recomp_unit_0125, "recomp_unit_0125");
    runtime.register_function(0x089F9874u, &recomp_unit_0125, "recomp_unit_0125");
    runtime.register_function(0x089F9898u, &recomp_unit_0125, "recomp_unit_0125");
    runtime.register_function(0x089F98E8u, &recomp_unit_0125, "recomp_unit_0125");
    runtime.register_function(0x089F9900u, &recomp_unit_0125, "recomp_unit_0125");
    runtime.register_function(0x089F9928u, &recomp_unit_0125, "recomp_unit_0125");
    runtime.register_function(0x089F9940u, &recomp_unit_0125, "recomp_unit_0125");
    runtime.register_function(0x089F9944u, &recomp_unit_0125, "recomp_unit_0125");
    runtime.register_function(0x089F9950u, &recomp_unit_0125, "recomp_unit_0125");
    runtime.register_function(0x089F996Cu, &recomp_unit_0125, "recomp_unit_0125");
    runtime.register_function(0x089F9994u, &recomp_unit_0125, "recomp_unit_0125");
    runtime.register_function(0x089F99A0u, &recomp_unit_0125, "recomp_unit_0125");
    runtime.register_function(0x089F99ACu, &recomp_unit_0125, "recomp_unit_0125");
    runtime.register_function(0x089F99D4u, &recomp_unit_0125, "recomp_unit_0125");
    runtime.register_function(0x089F99D8u, &recomp_unit_0125, "recomp_unit_0125");
    runtime.register_function(0x089F99E4u, &recomp_unit_0125, "recomp_unit_0125");
    runtime.register_function(0x089F99E8u, &recomp_unit_0125, "recomp_unit_0125");
    runtime.register_function(0x089F99F4u, &recomp_unit_0125, "recomp_unit_0125");
    runtime.register_function(0x089F9A10u, &recomp_unit_0125, "recomp_unit_0125");
    runtime.register_function(0x089F9A44u, &recomp_unit_0125, "recomp_unit_0125");
    runtime.register_function(0x089F9A50u, &recomp_unit_0125, "recomp_unit_0125");
    runtime.register_function(0x089F9A68u, &recomp_unit_0125, "recomp_unit_0125");
    runtime.register_function(0x089F9A6Cu, &recomp_unit_0125, "recomp_unit_0125");
    runtime.register_function(0x089F9A78u, &recomp_unit_0125, "recomp_unit_0125");
    runtime.register_function(0x089F9A94u, &recomp_unit_0125, "recomp_unit_0125");
    runtime.register_function(0x089F9ABCu, &recomp_unit_0125, "recomp_unit_0125");
    runtime.register_function(0x089F9AD4u, &recomp_unit_0125, "recomp_unit_0125");
    runtime.register_function(0x089F9AD8u, &recomp_unit_0125, "recomp_unit_0125");
    runtime.register_function(0x089F9AE4u, &recomp_unit_0125, "recomp_unit_0125");
    runtime.register_function(0x089F9B00u, &recomp_unit_0125, "recomp_unit_0125");
    runtime.register_function(0x089F9B10u, &recomp_unit_0125, "recomp_unit_0125");
    runtime.register_function(0x089F9B20u, &recomp_unit_0125, "recomp_unit_0125");
    runtime.register_function(0x089F9B54u, &recomp_unit_0125, "recomp_unit_0125");
    runtime.register_function(0x089F9B78u, &recomp_unit_0125, "recomp_unit_0125");
    runtime.register_function(0x089F9B9Cu, &recomp_unit_0125, "recomp_unit_0125");
    runtime.register_function(0x089F9BC0u, &recomp_unit_0125, "recomp_unit_0125");
    runtime.register_function(0x089F9BE4u, &recomp_unit_0125, "recomp_unit_0125");
    runtime.register_function(0x089F9C08u, &recomp_unit_0125, "recomp_unit_0125");
    runtime.register_function(0x089F9C1Cu, &recomp_unit_0125, "recomp_unit_0125");
    runtime.register_function(0x089F9C28u, &recomp_unit_0125, "recomp_unit_0125");
    runtime.register_function(0x089F9CD4u, &recomp_unit_0125, "recomp_unit_0125");
    runtime.register_function(0x089F9CF8u, &recomp_unit_0125, "recomp_unit_0125");
    runtime.register_function(0x089F9D14u, &recomp_unit_0125, "recomp_unit_0125");
    runtime.register_function(0x089F9D18u, &recomp_unit_0125, "recomp_unit_0125");
    runtime.register_function(0x089F9D20u, &recomp_unit_0125, "recomp_unit_0125");
    runtime.register_function(0x089F9D3Cu, &recomp_unit_0125, "recomp_unit_0125");
    runtime.register_function(0x089F9D40u, &recomp_unit_0125, "recomp_unit_0125");
    runtime.register_function(0x089F9D48u, &recomp_unit_0125, "recomp_unit_0125");
    runtime.register_function(0x089F9D58u, &recomp_unit_0125, "recomp_unit_0125");
    runtime.register_function(0x089F9DF8u, &recomp_unit_0125, "recomp_unit_0125");
    runtime.register_function(0x089F9E04u, &recomp_unit_0125, "recomp_unit_0125");
    runtime.register_function(0x089F9E2Cu, &recomp_unit_0125, "recomp_unit_0125");
    runtime.register_function(0x089F9E34u, &recomp_unit_0125, "recomp_unit_0125");
    runtime.register_function(0x089F9E4Cu, &recomp_unit_0125, "recomp_unit_0125");
    runtime.register_function(0x089F9E58u, &recomp_unit_0125, "recomp_unit_0125");
    runtime.register_function(0x089F9E68u, &recomp_unit_0125, "recomp_unit_0125");
    runtime.register_function(0x089F9E78u, &recomp_unit_0125, "recomp_unit_0125");
    runtime.register_function(0x089F9EE8u, &recomp_unit_0125, "recomp_unit_0125");
    runtime.register_function(0x089F9EFCu, &recomp_unit_0125, "recomp_unit_0125");
    runtime.register_function(0x089F9F0Cu, &recomp_unit_0125, "recomp_unit_0125");
    runtime.register_function(0x089F9FD0u, &recomp_unit_0125, "recomp_unit_0125");
    runtime.register_function(0x089F9FE4u, &recomp_unit_0125, "recomp_unit_0125");
    runtime.register_function(0x089F9FF8u, &recomp_unit_0125, "recomp_unit_0125");
    runtime.register_function(0x089FA0BCu, &recomp_unit_0125, "recomp_unit_0125");
    runtime.register_function(0x089FA138u, &recomp_unit_0125, "recomp_unit_0125");
    runtime.register_function(0x089FA144u, &recomp_unit_0125, "recomp_unit_0125");
    runtime.register_function(0x089FA14Cu, &recomp_unit_0125, "recomp_unit_0125");
    runtime.register_function(0x089FA17Cu, &recomp_unit_0125, "recomp_unit_0125");
    runtime.register_function(0x089FA18Cu, &recomp_unit_0125, "recomp_unit_0125");
    runtime.register_function(0x089FA194u, &recomp_unit_0125, "recomp_unit_0125");
    runtime.register_function(0x089FA1C0u, &recomp_unit_0125, "recomp_unit_0125");
    runtime.register_function(0x089FA1D0u, &recomp_unit_0125, "recomp_unit_0125");
    runtime.register_function(0x089FA1E0u, &recomp_unit_0125, "recomp_unit_0125");
    runtime.register_function(0x089FA1E8u, &recomp_unit_0125, "recomp_unit_0125");
    runtime.register_function(0x089FA1F0u, &recomp_unit_0125, "recomp_unit_0125");
    runtime.register_function(0x089FA1F8u, &recomp_unit_0125, "recomp_unit_0125");
    runtime.register_function(0x089FA200u, &recomp_unit_0125, "recomp_unit_0125");
    runtime.register_function(0x089FA208u, &recomp_unit_0125, "recomp_unit_0125");
    runtime.register_function(0x089FA210u, &recomp_unit_0125, "recomp_unit_0125");
    runtime.register_function(0x089FA218u, &recomp_unit_0125, "recomp_unit_0125");
    runtime.register_function(0x089FA220u, &recomp_unit_0125, "recomp_unit_0125");
    runtime.register_function(0x089FA228u, &recomp_unit_0125, "recomp_unit_0125");
    runtime.register_function(0x089FA230u, &recomp_unit_0125, "recomp_unit_0125");
    runtime.register_function(0x089FA238u, &recomp_unit_0125, "recomp_unit_0125");
    runtime.register_function(0x089FA240u, &recomp_unit_0125, "recomp_unit_0125");
    runtime.register_function(0x089FA248u, &recomp_unit_0125, "recomp_unit_0125");
    runtime.register_function(0x089FA250u, &recomp_unit_0125, "recomp_unit_0125");
    runtime.register_function(0x089FA258u, &recomp_unit_0125, "recomp_unit_0125");
    runtime.register_function(0x089FA268u, &recomp_unit_0125, "recomp_unit_0125");
    runtime.register_function(0x089FA2C0u, &recomp_unit_0125, "recomp_unit_0125");
    runtime.register_function(0x089FA2C8u, &recomp_unit_0125, "recomp_unit_0125");
    runtime.register_function(0x089FA2D0u, &recomp_unit_0125, "recomp_unit_0125");
    runtime.register_function(0x089FA2D8u, &recomp_unit_0125, "recomp_unit_0125");
    runtime.register_function(0x089FA2E4u, &recomp_unit_0125, "recomp_unit_0125");
    runtime.register_function(0x089FA2E8u, &recomp_unit_0125, "recomp_unit_0125");
    runtime.register_function(0x089FA2F4u, &recomp_unit_0125, "recomp_unit_0125");
    runtime.register_function(0x089FA300u, &recomp_unit_0125, "recomp_unit_0125");
    runtime.register_function(0x089FA308u, &recomp_unit_0125, "recomp_unit_0125");
    runtime.register_function(0x089FA318u, &recomp_unit_0125, "recomp_unit_0125");
    runtime.register_function(0x089FA324u, &recomp_unit_0125, "recomp_unit_0125");
    runtime.register_function(0x089FA330u, &recomp_unit_0125, "recomp_unit_0125");
    runtime.register_function(0x089FA33Cu, &recomp_unit_0125, "recomp_unit_0125");
    runtime.register_function(0x089FA344u, &recomp_unit_0125, "recomp_unit_0125");
    runtime.register_function(0x089FA354u, &recomp_unit_0125, "recomp_unit_0125");
    runtime.register_function(0x089FA364u, &recomp_unit_0125, "recomp_unit_0125");
    runtime.register_function(0x089FA374u, &recomp_unit_0125, "recomp_unit_0125");
    runtime.register_function(0x089FA384u, &recomp_unit_0125, "recomp_unit_0125");
    runtime.register_function(0x089FA388u, &recomp_unit_0125, "recomp_unit_0125");
    runtime.register_function(0x089FA394u, &recomp_unit_0125, "recomp_unit_0125");
    runtime.register_function(0x089FA3A0u, &recomp_unit_0125, "recomp_unit_0125");
    runtime.register_function(0x089FA3A8u, &recomp_unit_0125, "recomp_unit_0125");
    runtime.register_function(0x089FA3B4u, &recomp_unit_0125, "recomp_unit_0125");
    runtime.register_function(0x089FA3BCu, &recomp_unit_0125, "recomp_unit_0125");
    runtime.register_function(0x089FA3CCu, &recomp_unit_0125, "recomp_unit_0125");
    runtime.register_function(0x089FA3D4u, &recomp_unit_0125, "recomp_unit_0125");
    runtime.register_function(0x089FA3E0u, &recomp_unit_0125, "recomp_unit_0125");
    runtime.register_function(0x089FA3ECu, &recomp_unit_0125, "recomp_unit_0125");
    runtime.register_function(0x089FA400u, &recomp_unit_0125, "recomp_unit_0125");
    runtime.register_function(0x089FA404u, &recomp_unit_0125, "recomp_unit_0125");
    runtime.register_function(0x089FA410u, &recomp_unit_0125, "recomp_unit_0125");
    runtime.register_function(0x089FA418u, &recomp_unit_0125, "recomp_unit_0125");
    runtime.register_function(0x089FA420u, &recomp_unit_0125, "recomp_unit_0125");
    runtime.register_function(0x089FA430u, &recomp_unit_0125, "recomp_unit_0125");
    runtime.register_function(0x089FA438u, &recomp_unit_0125, "recomp_unit_0125");
    runtime.register_function(0x089FA43Cu, &recomp_unit_0125, "recomp_unit_0125");
    runtime.register_function(0x089FA448u, &recomp_unit_0125, "recomp_unit_0125");
    runtime.register_function(0x089FA454u, &recomp_unit_0125, "recomp_unit_0125");
    runtime.register_function(0x089FA45Cu, &recomp_unit_0125, "recomp_unit_0125");
    runtime.register_function(0x089FA464u, &recomp_unit_0125, "recomp_unit_0125");
    runtime.register_function(0x089FA474u, &recomp_unit_0125, "recomp_unit_0125");
    runtime.register_function(0x089FA480u, &recomp_unit_0125, "recomp_unit_0125");
    runtime.register_function(0x089FA484u, &recomp_unit_0125, "recomp_unit_0125");
    runtime.register_function(0x089FA490u, &recomp_unit_0125, "recomp_unit_0125");
    runtime.register_function(0x089FA49Cu, &recomp_unit_0125, "recomp_unit_0125");
    runtime.register_function(0x089FA4A4u, &recomp_unit_0125, "recomp_unit_0125");
    runtime.register_function(0x089FA4B4u, &recomp_unit_0125, "recomp_unit_0125");
    runtime.register_function(0x089FA4C0u, &recomp_unit_0125, "recomp_unit_0125");
    runtime.register_function(0x089FA4D4u, &recomp_unit_0125, "recomp_unit_0125");
    runtime.register_function(0x089FA4E0u, &recomp_unit_0125, "recomp_unit_0125");
    runtime.register_function(0x089FA4E4u, &recomp_unit_0125, "recomp_unit_0125");
    runtime.register_function(0x089FA4F0u, &recomp_unit_0125, "recomp_unit_0125");
    runtime.register_function(0x089FA4F8u, &recomp_unit_0125, "recomp_unit_0125");
    runtime.register_function(0x089FA500u, &recomp_unit_0125, "recomp_unit_0125");
    runtime.register_function(0x089FA504u, &recomp_unit_0125, "recomp_unit_0125");
    runtime.register_function(0x089FA510u, &recomp_unit_0125, "recomp_unit_0125");
    runtime.register_function(0x089FA51Cu, &recomp_unit_0125, "recomp_unit_0125");
    runtime.register_function(0x089FA524u, &recomp_unit_0125, "recomp_unit_0125");
    runtime.register_function(0x089FA53Cu, &recomp_unit_0125, "recomp_unit_0125");
    runtime.register_function(0x089FA550u, &recomp_unit_0125, "recomp_unit_0125");
    runtime.register_function(0x089FA564u, &recomp_unit_0125, "recomp_unit_0125");
    runtime.register_function(0x089FA57Cu, &recomp_unit_0125, "recomp_unit_0125");
    runtime.register_function(0x089FA584u, &recomp_unit_0125, "recomp_unit_0125");
    runtime.register_function(0x089FA590u, &recomp_unit_0125, "recomp_unit_0125");
    runtime.register_function(0x089FA59Cu, &recomp_unit_0125, "recomp_unit_0125");
    runtime.register_function(0x089FA5A4u, &recomp_unit_0125, "recomp_unit_0125");
    runtime.register_function(0x089FA5B4u, &recomp_unit_0125, "recomp_unit_0125");
    runtime.register_function(0x089FA5C0u, &recomp_unit_0125, "recomp_unit_0125");
    runtime.register_function(0x089FA5D8u, &recomp_unit_0125, "recomp_unit_0125");
    runtime.register_function(0x089FA5F0u, &recomp_unit_0125, "recomp_unit_0125");
    runtime.register_function(0x089FA5F8u, &recomp_unit_0125, "recomp_unit_0125");
    runtime.register_function(0x089FA604u, &recomp_unit_0125, "recomp_unit_0125");
    runtime.register_function(0x089FA610u, &recomp_unit_0125, "recomp_unit_0125");
    runtime.register_function(0x089FA61Cu, &recomp_unit_0125, "recomp_unit_0125");
    runtime.register_function(0x089FA628u, &recomp_unit_0125, "recomp_unit_0125");
    runtime.register_function(0x089FA630u, &recomp_unit_0125, "recomp_unit_0125");
    runtime.register_function(0x089FA640u, &recomp_unit_0125, "recomp_unit_0125");
    runtime.register_function(0x089FA650u, &recomp_unit_0125, "recomp_unit_0125");
    runtime.register_function(0x089FA660u, &recomp_unit_0125, "recomp_unit_0125");
    runtime.register_function(0x089FA670u, &recomp_unit_0125, "recomp_unit_0125");
    runtime.register_function(0x089FA680u, &recomp_unit_0125, "recomp_unit_0125");
    runtime.register_function(0x089FA684u, &recomp_unit_0125, "recomp_unit_0125");
    runtime.register_function(0x089FA690u, &recomp_unit_0125, "recomp_unit_0125");
    runtime.register_function(0x089FA69Cu, &recomp_unit_0125, "recomp_unit_0125");
    runtime.register_function(0x089FA6A4u, &recomp_unit_0125, "recomp_unit_0125");
    runtime.register_function(0x089FA6ACu, &recomp_unit_0125, "recomp_unit_0125");
    runtime.register_function(0x089FA6B4u, &recomp_unit_0125, "recomp_unit_0125");
    runtime.register_function(0x089FA6C4u, &recomp_unit_0125, "recomp_unit_0125");
    runtime.register_function(0x089FA6D0u, &recomp_unit_0125, "recomp_unit_0125");
    runtime.register_function(0x089FA6D8u, &recomp_unit_0125, "recomp_unit_0125");
    runtime.register_function(0x089FA6E8u, &recomp_unit_0125, "recomp_unit_0125");
    runtime.register_function(0x089FA6F0u, &recomp_unit_0125, "recomp_unit_0125");
    runtime.register_function(0x089FA700u, &recomp_unit_0125, "recomp_unit_0125");
    runtime.register_function(0x089FA708u, &recomp_unit_0125, "recomp_unit_0125");
    runtime.register_function(0x089FA718u, &recomp_unit_0125, "recomp_unit_0125");
    runtime.register_function(0x089FA71Cu, &recomp_unit_0125, "recomp_unit_0125");
    runtime.register_function(0x089FA720u, &recomp_unit_0125, "recomp_unit_0125");
    runtime.register_function(0x089FA728u, &recomp_unit_0125, "recomp_unit_0125");
    runtime.register_function(0x089FA72Cu, &recomp_unit_0125, "recomp_unit_0125");
    runtime.register_function(0x089FA760u, &recomp_unit_0125, "recomp_unit_0125");
    runtime.register_function(0x089FA788u, &recomp_unit_0125, "recomp_unit_0125");
    runtime.register_function(0x089FA7B0u, &recomp_unit_0125, "recomp_unit_0125");
    runtime.register_function(0x089FA7CCu, &recomp_unit_0125, "recomp_unit_0125");
    runtime.register_function(0x089FA7ECu, &recomp_unit_0125, "recomp_unit_0125");
    runtime.register_function(0x089FA7FCu, &recomp_unit_0125, "recomp_unit_0125");
    runtime.register_function(0x089FA83Cu, &recomp_unit_0125, "recomp_unit_0125");
    runtime.register_function(0x089FA850u, &recomp_unit_0125, "recomp_unit_0125");
    runtime.register_function(0x089FA864u, &recomp_unit_0125, "recomp_unit_0125");
    runtime.register_function(0x089FA878u, &recomp_unit_0125, "recomp_unit_0125");
    runtime.register_function(0x089FA88Cu, &recomp_unit_0125, "recomp_unit_0125");
    runtime.register_function(0x089FA8A0u, &recomp_unit_0125, "recomp_unit_0125");
    runtime.register_function(0x089FA8B4u, &recomp_unit_0125, "recomp_unit_0125");
    runtime.register_function(0x089FA8C8u, &recomp_unit_0125, "recomp_unit_0125");
    runtime.register_function(0x089FA8DCu, &recomp_unit_0125, "recomp_unit_0125");
    runtime.register_function(0x089FA8F0u, &recomp_unit_0125, "recomp_unit_0125");
    runtime.register_function(0x089FA904u, &recomp_unit_0125, "recomp_unit_0125");
    runtime.register_function(0x089FA918u, &recomp_unit_0125, "recomp_unit_0125");
    runtime.register_function(0x089FA92Cu, &recomp_unit_0125, "recomp_unit_0125");
    runtime.register_function(0x089FA940u, &recomp_unit_0125, "recomp_unit_0125");
    runtime.register_function(0x089FA954u, &recomp_unit_0125, "recomp_unit_0125");
    runtime.register_function(0x089FA968u, &recomp_unit_0125, "recomp_unit_0125");
    runtime.register_function(0x089FAA58u, &recomp_unit_0125, "recomp_unit_0125");
    runtime.register_function(0x089FAA64u, &recomp_unit_0125, "recomp_unit_0125");
    runtime.register_function(0x089FAA70u, &recomp_unit_0125, "recomp_unit_0125");
    runtime.register_function(0x089FAA80u, &recomp_unit_0125, "recomp_unit_0125");
    runtime.register_function(0x089FAA8Cu, &recomp_unit_0125, "recomp_unit_0125");
    runtime.register_function(0x089FAA94u, &recomp_unit_0125, "recomp_unit_0125");
    runtime.register_function(0x089FAAA0u, &recomp_unit_0125, "recomp_unit_0125");
    runtime.register_function(0x089FAAA8u, &recomp_unit_0125, "recomp_unit_0125");
    runtime.register_function(0x089FAABCu, &recomp_unit_0125, "recomp_unit_0125");
    runtime.register_function(0x089FAAC0u, &recomp_unit_0125, "recomp_unit_0125");
    runtime.register_function(0x089FAAF8u, &recomp_unit_0125, "recomp_unit_0125");
    runtime.register_function(0x089FAB04u, &recomp_unit_0125, "recomp_unit_0125");
    runtime.register_function(0x089FAB1Cu, &recomp_unit_0125, "recomp_unit_0125");
    runtime.register_function(0x089FAB2Cu, &recomp_unit_0125, "recomp_unit_0125");
    runtime.register_function(0x089FAB38u, &recomp_unit_0125, "recomp_unit_0125");
    runtime.register_function(0x089FAB48u, &recomp_unit_0125, "recomp_unit_0125");
    runtime.register_function(0x089FAB64u, &recomp_unit_0125, "recomp_unit_0125");
    runtime.register_function(0x089FAB80u, &recomp_unit_0125, "recomp_unit_0125");
    runtime.register_function(0x089FAB88u, &recomp_unit_0125, "recomp_unit_0125");
    runtime.register_function(0x089FABA4u, &recomp_unit_0125, "recomp_unit_0125");
    runtime.register_function(0x089FABC4u, &recomp_unit_0125, "recomp_unit_0125");
    runtime.register_function(0x089FABE0u, &recomp_unit_0125, "recomp_unit_0125");
    runtime.register_function(0x089FAC00u, &recomp_unit_0125, "recomp_unit_0125");
    runtime.register_function(0x089FAC1Cu, &recomp_unit_0125, "recomp_unit_0125");
    runtime.register_function(0x089FAC3Cu, &recomp_unit_0125, "recomp_unit_0125");
    runtime.register_function(0x089FAC5Cu, &recomp_unit_0125, "recomp_unit_0125");
    runtime.register_function(0x089FAC74u, &recomp_unit_0125, "recomp_unit_0125");
    runtime.register_function(0x089FAC8Cu, &recomp_unit_0125, "recomp_unit_0125");
    runtime.register_function(0x089FACA4u, &recomp_unit_0125, "recomp_unit_0125");
    runtime.register_function(0x089FACBCu, &recomp_unit_0125, "recomp_unit_0125");
    runtime.register_function(0x089FACD4u, &recomp_unit_0125, "recomp_unit_0125");
    runtime.register_function(0x089FACECu, &recomp_unit_0125, "recomp_unit_0125");
    runtime.register_function(0x089FAD04u, &recomp_unit_0125, "recomp_unit_0125");
    runtime.register_function(0x089FAD1Cu, &recomp_unit_0125, "recomp_unit_0125");
    runtime.register_function(0x089FAD34u, &recomp_unit_0125, "recomp_unit_0125");
    runtime.register_function(0x089FAD44u, &recomp_unit_0125, "recomp_unit_0125");
    runtime.register_function(0x089FAD98u, &recomp_unit_0125, "recomp_unit_0125");
    runtime.register_function(0x089FAE60u, &recomp_unit_0125, "recomp_unit_0125");
    runtime.register_function(0x089FAEF0u, &recomp_unit_0125, "recomp_unit_0125");
    runtime.register_function(0x089FAF0Cu, &recomp_unit_0125, "recomp_unit_0125");
    runtime.register_function(0x089FAF98u, &recomp_unit_0125, "recomp_unit_0125");
    runtime.register_function(0x089FAFB0u, &recomp_unit_0125, "recomp_unit_0125");
    runtime.register_function(0x089FB050u, &recomp_unit_0125, "recomp_unit_0125");
    runtime.register_function(0x089FB05Cu, &recomp_unit_0125, "recomp_unit_0125");
    runtime.register_function(0x089FB070u, &recomp_unit_0125, "recomp_unit_0125");
    runtime.register_function(0x089FB084u, &recomp_unit_0125, "recomp_unit_0125");
    runtime.register_function(0x089FB098u, &recomp_unit_0125, "recomp_unit_0125");
    runtime.register_function(0x089FB1C8u, &recomp_unit_0125, "recomp_unit_0125");
    runtime.register_function(0x089FB1E8u, &recomp_unit_0125, "recomp_unit_0125");
    runtime.register_function(0x089FB214u, &recomp_unit_0125, "recomp_unit_0125");
    runtime.register_function(0x089FB218u, &recomp_unit_0125, "recomp_unit_0125");
    runtime.register_function(0x089FB220u, &recomp_unit_0125, "recomp_unit_0125");
    runtime.register_function(0x089FB238u, &recomp_unit_0125, "recomp_unit_0125");
    runtime.register_function(0x089FB23Cu, &recomp_unit_0125, "recomp_unit_0125");
    runtime.register_function(0x089FB244u, &recomp_unit_0125, "recomp_unit_0125");
    runtime.register_function(0x089FB25Cu, &recomp_unit_0125, "recomp_unit_0125");
    runtime.register_function(0x089FB260u, &recomp_unit_0125, "recomp_unit_0125");
    runtime.register_function(0x089FB268u, &recomp_unit_0125, "recomp_unit_0125");
    runtime.register_function(0x089FB274u, &recomp_unit_0125, "recomp_unit_0125");
    runtime.register_function(0x089FB298u, &recomp_unit_0125, "recomp_unit_0125");
    runtime.register_function(0x089FB2A8u, &recomp_unit_0125, "recomp_unit_0125");
    runtime.register_function(0x089FB2B0u, &recomp_unit_0125, "recomp_unit_0125");
    runtime.register_function(0x089FB2C4u, &recomp_unit_0125, "recomp_unit_0125");
    runtime.register_function(0x089FB2DCu, &recomp_unit_0125, "recomp_unit_0125");
    runtime.register_function(0x089FB2E8u, &recomp_unit_0125, "recomp_unit_0125");
    runtime.register_function(0x089FB32Cu, &recomp_unit_0125, "recomp_unit_0125");
    runtime.register_function(0x089FB330u, &recomp_unit_0125, "recomp_unit_0125");
    runtime.register_function(0x089FB338u, &recomp_unit_0125, "recomp_unit_0125");
    runtime.register_function(0x089FB384u, &recomp_unit_0125, "recomp_unit_0125");
    runtime.register_function(0x089FB3A4u, &recomp_unit_0125, "recomp_unit_0125");
    runtime.register_function(0x089FB3A8u, &recomp_unit_0125, "recomp_unit_0125");
    runtime.register_function(0x089FB3B0u, &recomp_unit_0125, "recomp_unit_0125");
    runtime.register_function(0x089FB3B4u, &recomp_unit_0125, "recomp_unit_0125");
    runtime.register_function(0x089FB3BCu, &recomp_unit_0125, "recomp_unit_0125");
    runtime.register_function(0x089FB404u, &recomp_unit_0125, "recomp_unit_0125");
    runtime.register_function(0x089FB410u, &recomp_unit_0125, "recomp_unit_0125");
    runtime.register_function(0x089FB44Cu, &recomp_unit_0125, "recomp_unit_0125");
    runtime.register_function(0x089FB450u, &recomp_unit_0125, "recomp_unit_0125");
    runtime.register_function(0x089FB458u, &recomp_unit_0125, "recomp_unit_0125");
    runtime.register_function(0x089FB4B0u, &recomp_unit_0125, "recomp_unit_0125");
    runtime.register_function(0x089FB4C8u, &recomp_unit_0125, "recomp_unit_0125");
    runtime.register_function(0x089FB4D4u, &recomp_unit_0125, "recomp_unit_0125");
    runtime.register_function(0x089FB4D8u, &recomp_unit_0125, "recomp_unit_0125");
    runtime.register_function(0x089FB4E0u, &recomp_unit_0125, "recomp_unit_0125");
    runtime.register_function(0x089FB4F8u, &recomp_unit_0125, "recomp_unit_0125");
    runtime.register_function(0x089FB520u, &recomp_unit_0125, "recomp_unit_0125");
    runtime.register_function(0x089FB528u, &recomp_unit_0125, "recomp_unit_0125");
    runtime.register_function(0x089FB534u, &recomp_unit_0125, "recomp_unit_0125");
    runtime.register_function(0x089FB538u, &recomp_unit_0125, "recomp_unit_0125");
    runtime.register_function(0x089FB540u, &recomp_unit_0125, "recomp_unit_0125");
    runtime.register_function(0x089FB544u, &recomp_unit_0125, "recomp_unit_0125");
    runtime.register_function(0x089FB554u, &recomp_unit_0125, "recomp_unit_0125");
    runtime.register_function(0x089FB58Cu, &recomp_unit_0125, "recomp_unit_0125");
    runtime.register_function(0x089FB5A4u, &recomp_unit_0125, "recomp_unit_0125");
    runtime.register_function(0x089FB5A8u, &recomp_unit_0125, "recomp_unit_0125");
    runtime.register_function(0x089FB5B0u, &recomp_unit_0125, "recomp_unit_0125");
    runtime.register_function(0x089FB5C8u, &recomp_unit_0125, "recomp_unit_0125");
    runtime.register_function(0x089FB5CCu, &recomp_unit_0125, "recomp_unit_0125");
    runtime.register_function(0x089FB5D4u, &recomp_unit_0125, "recomp_unit_0125");
    runtime.register_function(0x089FB5E0u, &recomp_unit_0125, "recomp_unit_0125");
    runtime.register_function(0x089FB5F0u, &recomp_unit_0125, "recomp_unit_0125");
    runtime.register_function(0x089FB60Cu, &recomp_unit_0125, "recomp_unit_0125");
    runtime.register_function(0x089FB61Cu, &recomp_unit_0125, "recomp_unit_0125");
    runtime.register_function(0x089FB624u, &recomp_unit_0125, "recomp_unit_0125");
    runtime.register_function(0x089FB630u, &recomp_unit_0125, "recomp_unit_0125");
    runtime.register_function(0x089FB640u, &recomp_unit_0125, "recomp_unit_0125");
    runtime.register_function(0x089FB648u, &recomp_unit_0125, "recomp_unit_0125");
    runtime.register_function(0x089FB654u, &recomp_unit_0125, "recomp_unit_0125");
    runtime.register_function(0x089FB658u, &recomp_unit_0125, "recomp_unit_0125");
    runtime.register_function(0x089FB660u, &recomp_unit_0125, "recomp_unit_0125");
    runtime.register_function(0x089FB684u, &recomp_unit_0125, "recomp_unit_0125");
    runtime.register_function(0x089FB68Cu, &recomp_unit_0125, "recomp_unit_0125");
    runtime.register_function(0x089FB698u, &recomp_unit_0125, "recomp_unit_0125");
    runtime.register_function(0x089FB6C0u, &recomp_unit_0125, "recomp_unit_0125");
    runtime.register_function(0x089FB6C8u, &recomp_unit_0125, "recomp_unit_0125");
    runtime.register_function(0x089FB6D4u, &recomp_unit_0125, "recomp_unit_0125");
    runtime.register_function(0x089FB6D8u, &recomp_unit_0125, "recomp_unit_0125");
    runtime.register_function(0x089FB6E0u, &recomp_unit_0125, "recomp_unit_0125");
    runtime.register_function(0x089FB704u, &recomp_unit_0125, "recomp_unit_0125");
    runtime.register_function(0x089FB70Cu, &recomp_unit_0125, "recomp_unit_0125");
    runtime.register_function(0x089FB718u, &recomp_unit_0125, "recomp_unit_0125");
    runtime.register_function(0x089FB740u, &recomp_unit_0125, "recomp_unit_0125");
    runtime.register_function(0x089FB748u, &recomp_unit_0125, "recomp_unit_0125");
    runtime.register_function(0x089FB754u, &recomp_unit_0125, "recomp_unit_0125");
    runtime.register_function(0x089FB758u, &recomp_unit_0125, "recomp_unit_0125");
    runtime.register_function(0x089FB760u, &recomp_unit_0125, "recomp_unit_0125");
    runtime.register_function(0x089FB784u, &recomp_unit_0125, "recomp_unit_0125");
    runtime.register_function(0x089FB78Cu, &recomp_unit_0125, "recomp_unit_0125");
    runtime.register_function(0x089FB798u, &recomp_unit_0125, "recomp_unit_0125");
    runtime.register_function(0x089FB7C0u, &recomp_unit_0125, "recomp_unit_0125");
    runtime.register_function(0x089FB7C8u, &recomp_unit_0125, "recomp_unit_0125");
    runtime.register_function(0x089FB7D4u, &recomp_unit_0125, "recomp_unit_0125");
    runtime.register_function(0x089FB7D8u, &recomp_unit_0125, "recomp_unit_0125");
    runtime.register_function(0x089FB7E0u, &recomp_unit_0125, "recomp_unit_0125");
    runtime.register_function(0x089FB804u, &recomp_unit_0125, "recomp_unit_0125");
    runtime.register_function(0x089FB80Cu, &recomp_unit_0125, "recomp_unit_0125");
    runtime.register_function(0x089FB818u, &recomp_unit_0125, "recomp_unit_0125");
    runtime.register_function(0x089FB840u, &recomp_unit_0125, "recomp_unit_0125");
    runtime.register_function(0x089FB848u, &recomp_unit_0125, "recomp_unit_0125");
    runtime.register_function(0x089FB854u, &recomp_unit_0125, "recomp_unit_0125");
    runtime.register_function(0x089FB858u, &recomp_unit_0125, "recomp_unit_0125");
    runtime.register_function(0x089FB860u, &recomp_unit_0125, "recomp_unit_0125");
    runtime.register_function(0x089FB884u, &recomp_unit_0125, "recomp_unit_0125");
    runtime.register_function(0x089FB88Cu, &recomp_unit_0125, "recomp_unit_0125");
    runtime.register_function(0x089FB898u, &recomp_unit_0125, "recomp_unit_0125");
    runtime.register_function(0x089FB8C0u, &recomp_unit_0125, "recomp_unit_0125");
    runtime.register_function(0x089FB8C8u, &recomp_unit_0125, "recomp_unit_0125");
    runtime.register_function(0x089FB8D4u, &recomp_unit_0125, "recomp_unit_0125");
    runtime.register_function(0x089FB8D8u, &recomp_unit_0125, "recomp_unit_0125");
    runtime.register_function(0x089FB8E0u, &recomp_unit_0125, "recomp_unit_0125");
    runtime.register_function(0x089FB904u, &recomp_unit_0125, "recomp_unit_0125");
    runtime.register_function(0x089FB90Cu, &recomp_unit_0125, "recomp_unit_0125");
    runtime.register_function(0x089FB918u, &recomp_unit_0125, "recomp_unit_0125");
    runtime.register_function(0x089FB940u, &recomp_unit_0125, "recomp_unit_0125");
    runtime.register_function(0x089FB948u, &recomp_unit_0125, "recomp_unit_0125");
    runtime.register_function(0x089FB954u, &recomp_unit_0125, "recomp_unit_0125");
    runtime.register_function(0x089FB958u, &recomp_unit_0125, "recomp_unit_0125");
    runtime.register_function(0x089FB960u, &recomp_unit_0125, "recomp_unit_0125");
    runtime.register_function(0x089FB970u, &recomp_unit_0125, "recomp_unit_0125");
    runtime.register_function(0x089FB978u, &recomp_unit_0125, "recomp_unit_0125");
    runtime.register_function(0x089FB984u, &recomp_unit_0125, "recomp_unit_0125");
    runtime.register_function(0x089FB994u, &recomp_unit_0125, "recomp_unit_0125");
    runtime.register_function(0x089FB99Cu, &recomp_unit_0125, "recomp_unit_0125");
    runtime.register_function(0x089FB9A8u, &recomp_unit_0125, "recomp_unit_0125");
    runtime.register_function(0x089FB9ACu, &recomp_unit_0125, "recomp_unit_0125");
    runtime.register_function(0x089FB9B4u, &recomp_unit_0125, "recomp_unit_0125");
    runtime.register_function(0x089FB9B8u, &recomp_unit_0125, "recomp_unit_0125");
    runtime.register_function(0x089FB9D0u, &recomp_unit_0125, "recomp_unit_0125");
    runtime.register_function(0x089FB9E8u, &recomp_unit_0125, "recomp_unit_0125");
    runtime.register_function(0x089FB9F4u, &recomp_unit_0125, "recomp_unit_0125");
    runtime.register_function(0x089FBA3Cu, &recomp_unit_0125, "recomp_unit_0125");
    runtime.register_function(0x089FBA48u, &recomp_unit_0125, "recomp_unit_0125");
    runtime.register_function(0x089FBA58u, &recomp_unit_0125, "recomp_unit_0125");
    runtime.register_function(0x089FBA64u, &recomp_unit_0125, "recomp_unit_0125");
    runtime.register_function(0x089FBA68u, &recomp_unit_0125, "recomp_unit_0125");
    runtime.register_function(0x089FBA70u, &recomp_unit_0125, "recomp_unit_0125");
    runtime.register_function(0x089FBAC0u, &recomp_unit_0125, "recomp_unit_0125");
    runtime.register_function(0x089FBAD8u, &recomp_unit_0125, "recomp_unit_0125");
    runtime.register_function(0x089FBAE8u, &recomp_unit_0125, "recomp_unit_0125");
    runtime.register_function(0x089FBAF0u, &recomp_unit_0125, "recomp_unit_0125");
    runtime.register_function(0x089FBAFCu, &recomp_unit_0125, "recomp_unit_0125");
    runtime.register_function(0x089FBB04u, &recomp_unit_0125, "recomp_unit_0125");
    runtime.register_function(0x089FBB0Cu, &recomp_unit_0125, "recomp_unit_0125");
    runtime.register_function(0x089FBB18u, &recomp_unit_0125, "recomp_unit_0125");
    runtime.register_function(0x089FBB1Cu, &recomp_unit_0125, "recomp_unit_0125");
    runtime.register_function(0x089FBB34u, &recomp_unit_0125, "recomp_unit_0125");
    runtime.register_function(0x089FBB7Cu, &recomp_unit_0125, "recomp_unit_0125");
    runtime.register_function(0x089FBB88u, &recomp_unit_0125, "recomp_unit_0125");
    runtime.register_function(0x089FBB8Cu, &recomp_unit_0125, "recomp_unit_0125");
    runtime.register_function(0x089FBB94u, &recomp_unit_0125, "recomp_unit_0125");
    runtime.register_function(0x089FBBD4u, &recomp_unit_0125, "recomp_unit_0125");
    runtime.register_function(0x089FBBD8u, &recomp_unit_0125, "recomp_unit_0125");
    runtime.register_function(0x089FBBE0u, &recomp_unit_0125, "recomp_unit_0125");
    runtime.register_function(0x089FBBE8u, &recomp_unit_0125, "recomp_unit_0125");
    runtime.register_function(0x089FBC14u, &recomp_unit_0125, "recomp_unit_0125");
    runtime.register_function(0x089FBC18u, &recomp_unit_0125, "recomp_unit_0125");
    runtime.register_function(0x089FBC20u, &recomp_unit_0125, "recomp_unit_0125");
    runtime.register_function(0x089FBC38u, &recomp_unit_0125, "recomp_unit_0125");
    runtime.register_function(0x089FBC3Cu, &recomp_unit_0125, "recomp_unit_0125");
    runtime.register_function(0x089FBC44u, &recomp_unit_0125, "recomp_unit_0125");
    runtime.register_function(0x089FBC5Cu, &recomp_unit_0125, "recomp_unit_0125");
    runtime.register_function(0x089FBC60u, &recomp_unit_0125, "recomp_unit_0125");
    runtime.register_function(0x089FBC68u, &recomp_unit_0125, "recomp_unit_0125");
    runtime.register_function(0x089FBC74u, &recomp_unit_0125, "recomp_unit_0125");
    runtime.register_function(0x089FBC88u, &recomp_unit_0125, "recomp_unit_0125");
    runtime.register_function(0x089FBC9Cu, &recomp_unit_0125, "recomp_unit_0125");
    runtime.register_function(0x089FBCBCu, &recomp_unit_0125, "recomp_unit_0125");
    runtime.register_function(0x089FBD04u, &recomp_unit_0125, "recomp_unit_0125");
    runtime.register_function(0x089FBD14u, &recomp_unit_0125, "recomp_unit_0125");
    runtime.register_function(0x089FBD70u, &recomp_unit_0125, "recomp_unit_0125");
    runtime.register_function(0x089FBD80u, &recomp_unit_0125, "recomp_unit_0125");
    runtime.register_function(0x089FBD94u, &recomp_unit_0125, "recomp_unit_0125");
    runtime.register_function(0x089FBDA4u, &recomp_unit_0125, "recomp_unit_0125");
    runtime.register_function(0x089FBDB4u, &recomp_unit_0125, "recomp_unit_0125");
    runtime.register_function(0x089FBDBCu, &recomp_unit_0125, "recomp_unit_0125");
    runtime.register_function(0x089FBDC8u, &recomp_unit_0125, "recomp_unit_0125");
    runtime.register_function(0x089FBDF8u, &recomp_unit_0125, "recomp_unit_0125");
    runtime.register_function(0x089FBE64u, &recomp_unit_0125, "recomp_unit_0125");
    runtime.register_function(0x089FBE78u, &recomp_unit_0125, "recomp_unit_0125");
    runtime.register_function(0x089FBF18u, &recomp_unit_0125, "recomp_unit_0125");
    runtime.register_function(0x089FBF28u, &recomp_unit_0125, "recomp_unit_0125");
    runtime.register_function(0x089FBF44u, &recomp_unit_0125, "recomp_unit_0125");
    runtime.register_function(0x089FBF4Cu, &recomp_unit_0125, "recomp_unit_0125");
    runtime.register_function(0x089FBF68u, &recomp_unit_0125, "recomp_unit_0125");
    runtime.register_function(0x089FBF84u, &recomp_unit_0125, "recomp_unit_0125");
    runtime.register_function(0x089FBFA4u, &recomp_unit_0125, "recomp_unit_0125");
    runtime.register_function(0x089FBFC4u, &recomp_unit_0125, "recomp_unit_0125");
    runtime.register_function(0x089FBFE0u, &recomp_unit_0125, "recomp_unit_0125");
    runtime.register_function(0x089FBFE8u, &recomp_unit_0125, "recomp_unit_0125");
}
} // namespace psprecomp
