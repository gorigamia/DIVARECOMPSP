#include "psprecomp/runtime.hpp"
#include "generated_units.hpp"
#include <bit>
#include <cmath>
#include <cstdint>
#include <limits>

namespace psprecomp {
static const std::uint16_t kEntryIds_recomp_unit_0149[4093] = {
    1, 0, 0, 0, 0, 0, 0, 0, 2, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 3, 0, 0, 4, 0, 0, 0, 5, 0, 0, 0,
    0, 6, 7, 0, 0, 8, 0, 0, 9, 0, 0, 0, 0, 0, 0, 0, 10, 0, 0, 11, 0, 0, 12, 0, 0, 0, 13, 0, 0, 0, 0, 14,
    0, 0, 15, 0, 0, 16, 0, 0, 17, 0, 18, 0, 0, 0, 0, 0, 0, 0, 0, 19, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 20, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 21, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 22, 0, 0, 23, 0, 0, 24, 0, 25, 0,
    26, 0, 0, 0, 0, 0, 0, 27, 0, 0, 0, 0, 0, 28, 0, 29, 0, 0, 30, 0, 0, 0, 0, 0, 0, 31, 0, 0, 0, 0, 0, 32,
    0, 33, 0, 0, 34, 0, 0, 0, 0, 0, 0, 35, 0, 0, 0, 0, 0, 36, 0, 37, 0, 0, 0, 0, 0, 0, 0, 38, 0, 0, 0, 0,
    0, 39, 0, 0, 0, 0, 0, 0, 40, 0, 0, 0, 0, 41, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 42, 0, 0, 0,
    0, 0, 43, 0, 44, 45, 0, 0, 46, 0, 0, 0, 47, 0, 0, 0, 0, 48, 0, 0, 49, 0, 0, 0, 50, 0, 0, 0, 0, 0, 0, 0,
    51, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 52, 0, 0, 53, 0, 0, 0, 0, 0, 0, 0, 54, 0, 0, 0, 0,
    55, 0, 0, 56, 0, 0, 57, 0, 58, 0, 0, 0, 59, 0, 0, 60, 61, 0, 0, 0, 62, 0, 0, 63, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 64, 65, 66, 0, 0, 0, 67, 0, 0, 68, 0, 0, 0, 0, 0, 0, 0, 69, 70, 0, 0, 0, 71, 0, 0, 0, 0, 0, 72, 0, 0,
    73, 0, 0, 74, 0, 0, 75, 0, 0, 0, 0, 0, 76, 0, 77, 0, 0, 0, 0, 0, 78, 0, 79, 0, 0, 0, 0, 80, 0, 0, 0, 81,
    0, 0, 82, 0, 83, 84, 0, 0, 0, 0, 85, 0, 0, 0, 86, 0, 0, 87, 0, 0, 0, 88, 0, 0, 89, 0, 0, 0, 0, 90, 0, 0,
    0, 0, 0, 91, 0, 0, 0, 0, 0, 92, 0, 0, 0, 0, 0, 93, 0, 0, 0, 0, 0, 94, 0, 0, 95, 0, 0, 0, 0, 0, 96, 0,
    0, 97, 0, 0, 98, 0, 0, 0, 0, 0, 0, 99, 0, 0, 0, 0, 0, 100, 0, 0, 101, 0, 0, 102, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 103, 0, 0, 0, 0, 0, 104, 0, 0, 0, 0, 0, 105, 0, 0, 0, 0,
    0, 106, 0, 0, 0, 0, 0, 107, 0, 0, 0, 0, 0, 108, 0, 0, 0, 0, 0, 109, 0, 0, 0, 0, 0, 110, 111, 0, 0, 0, 112, 0,
    0, 0, 113, 0, 0, 114, 0, 0, 0, 0, 0, 0, 115, 0, 0, 0, 116, 0, 117, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 118, 0, 0, 119, 0, 0, 0, 120, 0, 0, 121, 0, 0, 0, 0, 0, 0, 0, 122, 0, 0, 0, 0, 0, 0,
    0, 0, 123, 0, 0, 0, 0, 0, 0, 124, 0, 0, 0, 0, 0, 0, 125, 0, 0, 0, 0, 0, 126, 0, 0, 0, 0, 0, 0, 127, 0, 0,
    0, 0, 0, 128, 0, 0, 0, 0, 0, 0, 129, 0, 0, 0, 0, 0, 130, 0, 0, 0, 0, 0, 0, 131, 0, 0, 0, 0, 0, 132, 0, 0,
    0, 0, 0, 0, 133, 0, 0, 0, 134, 0, 0, 0, 135, 0, 0, 0, 0, 0, 0, 136, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 137, 0, 0, 0, 0, 0, 0, 0, 0, 138, 0, 0, 0, 0, 0, 139, 0, 0, 0, 0, 0,
    0, 0, 140, 0, 0, 0, 0, 0, 141, 0, 0, 0, 0, 0, 0, 0, 142, 0, 0, 0, 0, 0, 143, 0, 0, 0, 0, 0, 0, 0, 144, 0,
    0, 145, 0, 0, 0, 0, 146, 147, 0, 0, 0, 148, 0, 0, 149, 0, 0, 0, 0, 0, 0, 150, 0, 0, 151, 0, 0, 0, 152, 0, 153, 0,
    0, 154, 0, 155, 0, 0, 156, 0, 0, 0, 157, 0, 0, 0, 0, 158, 0, 159, 0, 0, 160, 0, 161, 0, 0, 162, 0, 163, 0, 0, 164, 0,
    165, 0, 0, 166, 0, 167, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 168, 0, 0, 0, 0, 0, 0, 0, 169, 0, 0, 170, 0, 0,
    0, 0, 0, 0, 171, 0, 172, 0, 0, 173, 0, 0, 174, 0, 0, 0, 0, 0, 0, 175, 0, 0, 176, 0, 0, 177, 178, 0, 179, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 180, 0, 0, 0, 181, 0, 0, 0, 0, 0, 182, 0, 183, 0, 0, 184, 0, 0, 185, 0, 186, 187, 188, 0, 0, 0,
    0, 189, 0, 0, 190, 0, 0, 0, 0, 0, 0, 0, 191, 0, 0, 0, 0, 0, 0, 192, 0, 0, 0, 0, 0, 0, 0, 0, 193, 0, 0, 0,
    0, 194, 0, 0, 0, 0, 195, 0, 0, 0, 0, 196, 0, 0, 0, 197, 0, 0, 0, 0, 0, 0, 0, 198, 0, 0, 0, 0, 0, 199, 0, 0,
    0, 0, 0, 0, 200, 0, 201, 0, 0, 0, 202, 0, 0, 203, 204, 0, 0, 0, 205, 206, 0, 0, 0, 0, 207, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 208, 0, 0, 0, 0, 209, 0, 0, 0, 0, 0, 210, 0, 0, 0, 211, 212, 0, 0, 0, 0, 213, 0, 0, 214, 0, 0, 0,
    0, 0, 215, 0, 0, 0, 216, 0, 0, 0, 217, 0, 0, 0, 0, 0, 0, 0, 218, 0, 219, 0, 0, 0, 0, 220, 0, 0, 0, 0, 0, 0,
    221, 0, 0, 0, 0, 0, 222, 0, 0, 223, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 224, 0, 225, 0, 0, 0, 0, 226, 0, 0,
    227, 0, 228, 0, 229, 0, 230, 0, 231, 0, 232, 0, 0, 233, 0, 234, 0, 0, 235, 0, 0, 0, 0, 236, 0, 237, 0, 0, 238, 0, 0, 239,
    240, 0, 0, 241, 0, 0, 0, 0, 0, 0, 0, 0, 242, 0, 243, 0, 244, 245, 0, 0, 246, 247, 0, 0, 0, 0, 0, 0, 0, 0, 248, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 249, 0, 0, 250, 0, 0, 0, 0, 251, 0, 0, 252, 0, 0, 0, 0, 0, 253, 0, 0, 0, 0, 0,
    0, 254, 0, 0, 0, 0, 0, 0, 255, 0, 0, 0, 256, 257, 0, 258, 0, 0, 0, 259, 0, 0, 260, 0, 261, 0, 0, 0, 0, 0, 0, 0,
    262, 0, 0, 0, 0, 0, 263, 0, 0, 0, 0, 264, 0, 0, 0, 0, 0, 0, 265, 0, 0, 0, 0, 0, 266, 0, 0, 0, 0, 267, 0, 0,
    0, 0, 0, 0, 268, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 269, 0, 270, 0, 0, 0, 271,
    0, 0, 0, 272, 0, 273, 274, 0, 275, 276, 0, 277, 0, 0, 278, 0, 0, 279, 0, 280, 0, 0, 0, 0, 281, 0, 0, 282, 0, 283, 0, 284,
    0, 285, 0, 286, 0, 287, 0, 0, 288, 0, 289, 290, 0, 291, 0, 292, 0, 0, 293, 294, 0, 295, 0, 0, 0, 0, 296, 0, 297, 0, 0, 298,
    0, 0, 299, 300, 0, 0, 301, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 302, 0, 303, 0, 304, 0, 0, 305, 306, 307, 0, 0, 308, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 309, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 310, 0, 311, 0, 312, 0, 0, 0, 0,
    313, 0, 0, 0, 314, 0, 0, 315, 0, 0, 316, 0, 0, 0, 317, 0, 0, 0, 0, 318, 0, 0, 319, 0, 0, 320, 0, 0, 0, 321, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 322, 0, 323, 0, 0, 0, 324, 0, 325, 326, 0, 0, 327, 0, 0, 328, 0, 0, 0, 0, 329, 0, 0, 0, 330,
    0, 0, 0, 331, 0, 0, 0, 0, 0, 0, 0, 0, 332, 0, 0, 0, 333, 0, 0, 334, 0, 335, 0, 0, 336, 0, 337, 0, 0, 338, 0, 339,
    0, 0, 0, 340, 0, 0, 0, 0, 341, 0, 342, 0, 0, 0, 0, 0, 0, 0, 0, 343, 0, 0, 0, 0, 0, 0, 0, 0, 0, 344, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 345, 0, 0, 346, 0, 0, 0, 0, 0, 0, 347, 0, 0, 0, 0, 0, 0,
    348, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 349, 0, 0, 0, 0, 350, 0, 0, 0, 351, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 352, 0, 0, 0,
    0, 0, 353, 0, 0, 354, 0, 0, 0, 0, 0, 0, 355, 356, 0, 0, 0, 0, 357, 0, 0, 358, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 359, 0, 0, 0, 0, 0, 360, 0, 0, 361, 0, 0, 0, 0, 0, 0, 362, 363, 0, 0, 0, 0, 364, 0, 0, 0, 0, 0,
    0, 365, 0, 0, 0, 0, 0, 0, 366, 0, 0, 367, 0, 0, 368, 0, 0, 369, 0, 0, 0, 370, 371, 0, 0, 0, 0, 372, 0, 0, 0, 0,
    373, 0, 0, 0, 374, 0, 0, 0, 0, 0, 0, 375, 0, 376, 0, 377, 0, 0, 0, 378, 0, 0, 0, 0, 0, 0, 379, 0, 380, 0, 381, 0,
    0, 0, 382, 0, 0, 0, 0, 0, 0, 383, 0, 384, 0, 385, 0, 0, 0, 386, 0, 0, 0, 0, 0, 0, 387, 0, 388, 0, 389, 0, 0, 0,
    390, 0, 0, 0, 0, 0, 0, 391, 0, 392, 0, 393, 0, 0, 0, 394, 0, 0, 0, 0, 0, 0, 395, 0, 396, 0, 397, 0, 0, 0, 398, 0,
    0, 0, 0, 0, 0, 399, 0, 400, 0, 401, 0, 0, 0, 402, 0, 0, 0, 0, 0, 0, 403, 0, 404, 0, 405, 0, 0, 0, 406, 0, 0, 0,
    0, 0, 0, 407, 0, 408, 0, 409, 0, 0, 0, 0, 410, 0, 0, 0, 411, 0, 0, 412, 0, 0, 413, 0, 0, 0, 414, 0, 0, 415, 0, 0,
    416, 0, 0, 0, 0, 0, 0, 0, 417, 0, 0, 0, 0, 0, 0, 418, 0, 419, 0, 0, 420, 0, 0, 421, 0, 0, 0, 0, 0, 0, 0, 422,
    0, 423, 0, 0, 424, 0, 0, 425, 0, 0, 0, 0, 0, 0, 0, 426, 0, 427, 0, 0, 428, 0, 0, 429, 0, 0, 0, 0, 0, 0, 0, 430,
    0, 431, 0, 0, 432, 0, 0, 433, 0, 0, 0, 0, 0, 0, 0, 434, 0, 435, 0, 0, 436, 0, 0, 437, 0, 0, 0, 0, 0, 438, 0, 0,
    439, 0, 0, 440, 0, 0, 0, 0, 0, 0, 0, 441, 0, 0, 0, 0, 0, 0, 442, 0, 0, 0, 0, 0, 0, 0, 0, 443, 0, 444, 0, 0,
    445, 0, 0, 446, 0, 0, 0, 0, 0, 0, 0, 447, 0, 0, 0, 0, 0, 448, 0, 0, 0, 0, 0, 449, 0, 0, 0, 0, 450, 0, 0, 0,
    451, 0, 452, 0, 0, 453, 0, 0, 0, 0, 454, 0, 0, 0, 455, 0, 0, 0, 0, 0, 0, 0, 456, 0, 0, 0, 457, 0, 458, 0, 0, 459,
    0, 0, 460, 0, 0, 0, 0, 461, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 462, 0, 0, 0, 463, 0, 0, 0, 464, 0, 0, 0, 0, 0,
    0, 465, 0, 0, 0, 0, 0, 0, 0, 466, 0, 0, 0, 0, 0, 0, 0, 467, 0, 0, 0, 0, 0, 0, 468, 0, 0, 0, 0, 0, 0, 469,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 470, 471, 0, 0, 0, 0, 472, 0, 0, 0, 0, 0, 473, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    474, 0, 475, 0, 0, 0, 0, 0, 0, 476, 0, 0, 0, 0, 0, 477, 0, 0, 0, 0, 478, 0, 0, 0, 0, 479, 0, 0, 0, 0, 480, 0,
    0, 0, 481, 0, 0, 0, 0, 482, 0, 0, 0, 0, 483, 0, 0, 0, 484, 0, 0, 0, 0, 485, 0, 0, 0, 0, 486, 0, 0, 487, 0, 0,
    0, 0, 488, 0, 489, 0, 0, 0, 0, 490, 0, 0, 0, 491, 0, 0, 492, 0, 0, 0, 0, 0, 0, 493, 0, 494, 0, 0, 0, 0, 0, 0,
    0, 0, 495, 0, 0, 0, 0, 496, 0, 0, 0, 0, 497, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 498, 0, 0, 0, 0,
    0, 499, 0, 0, 500, 0, 0, 0, 0, 0, 0, 501, 502, 0, 0, 0, 0, 0, 503, 0, 0, 0, 0, 0, 0, 504, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 505, 0, 0, 0, 506, 0, 0, 0, 507, 0, 0, 0, 508, 509, 0, 0, 0, 0, 510, 0, 0, 511, 0, 0, 0, 0, 512,
    0, 513, 0, 0, 0, 0, 514, 0, 0, 0, 0, 515, 0, 0, 0, 0, 516, 0, 0, 0, 517, 0, 0, 0, 0, 518, 0, 0, 0, 0, 519, 0,
    0, 0, 520, 0, 0, 0, 0, 521, 0, 0, 0, 0, 522, 0, 0, 0, 0, 523, 0, 0, 0, 0, 0, 0, 0, 0, 0, 524, 0, 0, 0, 525,
    0, 0, 526, 0, 0, 527, 0, 0, 0, 0, 528, 0, 529, 0, 0, 530, 0, 0, 531, 0, 0, 0, 0, 532, 0, 533, 0, 0, 534, 0, 0, 535,
    0, 0, 0, 0, 536, 0, 537, 0, 0, 538, 0, 0, 539, 0, 0, 0, 0, 540, 0, 541, 0, 0, 542, 0, 0, 543, 0, 0, 0, 0, 544, 0,
    545, 0, 0, 546, 0, 0, 547, 0, 0, 0, 0, 548, 0, 549, 0, 0, 550, 0, 0, 551, 0, 0, 0, 0, 552, 0, 553, 0, 0, 554, 0, 0,
    555, 0, 0, 0, 0, 556, 0, 557, 0, 0, 558, 0, 0, 559, 0, 0, 0, 0, 560, 0, 561, 0, 0, 562, 0, 0, 563, 0, 0, 0, 0, 564,
    0, 565, 0, 0, 566, 0, 0, 567, 0, 0, 0, 0, 568, 0, 569, 0, 0, 570, 0, 0, 571, 0, 0, 0, 0, 572, 0, 573, 0, 0, 574, 0,
    0, 575, 0, 0, 0, 0, 576, 0, 577, 0, 0, 578, 0, 0, 579, 0, 0, 0, 0, 580, 0, 581, 0, 0, 582, 0, 0, 583, 0, 0, 0, 0,
    584, 0, 585, 0, 0, 586, 0, 0, 587, 0, 0, 0, 0, 588, 0, 589, 0, 0, 590, 0, 0, 591, 0, 0, 0, 0, 592, 0, 593, 0, 0, 594,
    0, 0, 595, 0, 0, 0, 0, 596, 0, 597, 0, 0, 598, 0, 0, 599, 0, 0, 0, 0, 600, 0, 601, 0, 0, 602, 0, 0, 603, 0, 0, 0,
    0, 604, 0, 605, 0, 0, 606, 0, 0, 607, 0, 0, 0, 0, 608, 0, 609, 0, 0, 610, 0, 0, 611, 0, 0, 0, 0, 612, 0, 613, 0, 0,
    614, 0, 0, 615, 0, 0, 0, 0, 616, 0, 0, 0, 617, 0, 0, 0, 0, 0, 618, 0, 0, 0, 0, 619, 0, 0, 0, 620, 0, 621, 0, 622,
    0, 0, 0, 0, 623, 0, 0, 0, 624, 0, 0, 0, 0, 0, 0, 625, 0, 626, 0, 0, 0, 0, 0, 0, 627, 0, 628, 0, 0, 629, 0, 0,
    630, 0, 0, 0, 0, 0, 0, 0, 631, 0, 632, 0, 0, 633, 0, 0, 634, 0, 0, 0, 0, 0, 635, 0, 0, 0, 0, 0, 636, 0, 0, 0,
    0, 0, 637, 0, 0, 0, 0, 0, 638, 0, 0, 0, 0, 639, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 640, 0, 0, 0, 0, 0, 641,
    0, 0, 0, 0, 0, 642, 0, 0, 0, 0, 0, 643, 0, 0, 644, 0, 645, 0, 0, 646, 0, 647, 0, 0, 0, 0, 0, 0, 648, 0, 0, 0,
    0, 0, 0, 649, 0, 0, 0, 0, 0, 0, 650, 0, 0, 0, 0, 0, 0, 651, 0, 0, 0, 0, 0, 0, 652, 0, 0, 0, 0, 0, 0, 653,
    0, 0, 0, 0, 0, 0, 654, 0, 0, 0, 0, 0, 0, 655, 0, 0, 0, 0, 0, 0, 656, 0, 0, 0, 0, 0, 0, 657, 0, 0, 0, 0,
    0, 0, 658, 0, 0, 0, 0, 0, 0, 659, 0, 0, 0, 0, 0, 0, 660, 0, 0, 0, 0, 0, 0, 661, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 662, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 663, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 664, 0, 0, 0, 0, 0, 0, 665, 0, 0, 0, 0, 0, 0, 666, 0, 0, 0, 0,
    0, 0, 667, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 668, 0, 0, 0, 0, 0, 0, 0, 0, 0, 669, 0, 0, 0, 0, 0, 0, 670, 0,
    0, 0, 0, 0, 0, 671, 0, 0, 0, 0, 0, 0, 672, 0, 0, 0, 0, 0, 0, 673, 0, 0, 0, 0, 0, 0, 674, 0, 0, 0, 0, 0,
    0, 675, 0, 0, 0, 0, 0, 0, 676, 0, 0, 0, 0, 0, 0, 677, 0, 0, 0, 0, 678, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 679, 0, 0, 0, 0, 0, 0, 0, 0, 680, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 681, 0, 0, 0, 0, 0, 0, 682, 0, 683, 0, 684, 0, 0, 685,
    0, 0, 686, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 687, 0, 0, 0, 0, 0, 0, 0, 688,
    0, 0, 689, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 690, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 691, 0, 0,
    692, 0, 0, 0, 693, 0, 0, 0, 694, 0, 695, 0, 0, 0, 0, 0, 696, 0, 0, 697, 0, 0, 0, 698, 0, 0, 0, 699, 0, 700, 0, 0,
    701, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 702, 0, 0, 0, 0, 0, 0, 0, 703, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 704, 705, 0, 0, 706, 707, 0, 0, 708, 709, 0, 710,
    0, 0, 0, 711, 0, 0, 712, 0, 0, 713, 0, 714, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 715, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 716, 0, 0, 0, 0, 0, 717, 0, 0, 0, 0, 0, 0, 718, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 719, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 720, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 721, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 722, 0, 0, 0, 0, 0, 0, 0, 723, 0, 0, 0, 0, 0, 724, 0, 0,
    0, 0, 0, 725, 0, 0, 0, 0, 0, 726, 0, 0, 0, 0, 0, 727, 0, 0, 0, 0, 0, 728, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    729, 0, 0, 0, 0, 0, 730, 0, 0, 0, 0, 0, 731, 0, 0, 0, 0, 0, 732, 0, 0, 0, 0, 0, 733, 0, 0, 0, 0, 0, 734, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 735, 0, 0, 0, 0, 0, 736, 0, 0, 0, 0, 737, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 738, 0, 0, 0, 0, 0, 739, 0, 0, 0, 0, 740, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 741, 0, 0, 742, 0, 743, 0, 0, 0, 0, 744, 0, 0, 0, 0, 0, 0, 745, 0, 0, 0, 0, 746, 0, 0, 0,
    0, 747, 0, 0, 0, 0, 748, 0, 0, 0, 0, 749, 0, 0, 0, 0, 750, 0, 0, 0, 0, 751, 0, 0, 0, 0, 752, 0, 0, 0, 0, 753,
    0, 0, 0, 0, 754, 0, 0, 0, 0, 755, 0, 0, 0, 0, 756, 0, 0, 0, 0, 757, 0, 0, 0, 0, 758, 0, 0, 0, 0, 759, 0, 0,
    0, 0, 760, 0, 0, 0, 0, 761, 0, 0, 0, 0, 762, 0, 0, 0, 0, 763, 0, 0, 0, 0, 764, 0, 0, 0, 0, 765, 0, 0, 0, 0,
    766, 0, 0, 0, 0, 767, 0, 0, 0, 768, 0, 0, 0, 0, 0, 0, 0, 769, 0, 0, 0, 770, 0, 771, 0, 772, 0, 0, 773, 0, 0, 0,
    0, 774, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 775, 0, 0, 0, 0, 0, 776, 0, 0, 0, 0, 777, 0, 0, 0, 778, 0,
    0, 0, 0, 779, 0, 0, 0, 0, 780, 0, 0, 0, 781, 0, 0, 0, 0, 782, 0, 0, 0, 0, 783, 0, 0, 0, 0, 784, 0, 0, 0, 785,
    0, 0, 0, 0, 786, 0, 0, 0, 0, 787, 0, 0, 0, 0, 788, 0, 0, 0, 789, 0, 0, 0, 0, 790, 0, 0, 0, 0, 791,
};
void recomp_unit_0149_entry(Runtime &rt, AllegrexContext &ctx, std::uint16_t direct_entry_id, GuestMemory::AotFastView &aot_mem) {
    std::uint32_t jump_target = 0u;
    std::uint32_t local_transfers = 0u;
    std::uint32_t local_pc = ctx.pc;
    std::uint32_t entry_id = direct_entry_id;
LOCAL_DISPATCH:
    {
    if (entry_id == 0u) {
        const std::uint32_t entry_delta = local_pc - 0x08A58000u;
        entry_id = (entry_delta < 16372u && (entry_delta & 3u) == 0u) ? kEntryIds_recomp_unit_0149[entry_delta >> 2u] : 0u;
    }
    switch (entry_id) {
    case 1u: goto L_08A58000;
    case 2u: goto L_08A58020;
    case 3u: goto L_08A58054;
    case 4u: goto L_08A58060;
    case 5u: goto L_08A58070;
    case 6u: goto L_08A58084;
    case 7u: goto L_08A58088;
    case 8u: goto L_08A58094;
    case 9u: goto L_08A580A0;
    case 10u: goto L_08A580C0;
    case 11u: goto L_08A580CC;
    case 12u: goto L_08A580D8;
    case 13u: goto L_08A580E8;
    case 14u: goto L_08A580FC;
    case 15u: goto L_08A58108;
    case 16u: goto L_08A58114;
    case 17u: goto L_08A58120;
    case 18u: goto L_08A58128;
    case 19u: goto L_08A5814C;
    case 20u: goto L_08A58178;
    case 21u: goto L_08A581AC;
    case 22u: goto L_08A581D8;
    case 23u: goto L_08A581E4;
    case 24u: goto L_08A581F0;
    case 25u: goto L_08A581F8;
    case 26u: goto L_08A58200;
    case 27u: goto L_08A5821C;
    case 28u: goto L_08A58234;
    case 29u: goto L_08A5823C;
    case 30u: goto L_08A58248;
    case 31u: goto L_08A58264;
    case 32u: goto L_08A5827C;
    case 33u: goto L_08A58284;
    case 34u: goto L_08A58290;
    case 35u: goto L_08A582AC;
    case 36u: goto L_08A582C4;
    case 37u: goto L_08A582CC;
    case 38u: goto L_08A582EC;
    case 39u: goto L_08A58304;
    case 40u: goto L_08A58320;
    case 41u: goto L_08A58334;
    case 42u: goto L_08A58370;
    case 43u: goto L_08A58388;
    case 44u: goto L_08A58390;
    case 45u: goto L_08A58394;
    case 46u: goto L_08A583A0;
    case 47u: goto L_08A583B0;
    case 48u: goto L_08A583C4;
    case 49u: goto L_08A583D0;
    case 50u: goto L_08A583E0;
    case 51u: goto L_08A58400;
    case 52u: goto L_08A58440;
    case 53u: goto L_08A5844C;
    case 54u: goto L_08A5846C;
    case 55u: goto L_08A58480;
    case 56u: goto L_08A5848C;
    case 57u: goto L_08A58498;
    case 58u: goto L_08A584A0;
    case 59u: goto L_08A584B0;
    case 60u: goto L_08A584BC;
    case 61u: goto L_08A584C0;
    case 62u: goto L_08A584D0;
    case 63u: goto L_08A584DC;
    case 64u: goto L_08A58504;
    case 65u: goto L_08A58508;
    case 66u: goto L_08A5850C;
    case 67u: goto L_08A5851C;
    case 68u: goto L_08A58528;
    case 69u: goto L_08A58548;
    case 70u: goto L_08A5854C;
    case 71u: goto L_08A5855C;
    case 72u: goto L_08A58574;
    case 73u: goto L_08A58580;
    case 74u: goto L_08A5858C;
    case 75u: goto L_08A58598;
    case 76u: goto L_08A585B0;
    case 77u: goto L_08A585B8;
    case 78u: goto L_08A585D0;
    case 79u: goto L_08A585D8;
    case 80u: goto L_08A585EC;
    case 81u: goto L_08A585FC;
    case 82u: goto L_08A58608;
    case 83u: goto L_08A58610;
    case 84u: goto L_08A58614;
    case 85u: goto L_08A58628;
    case 86u: goto L_08A58638;
    case 87u: goto L_08A58644;
    case 88u: goto L_08A58654;
    case 89u: goto L_08A58660;
    case 90u: goto L_08A58674;
    case 91u: goto L_08A5868C;
    case 92u: goto L_08A586A4;
    case 93u: goto L_08A586BC;
    case 94u: goto L_08A586D4;
    case 95u: goto L_08A586E0;
    case 96u: goto L_08A586F8;
    case 97u: goto L_08A58704;
    case 98u: goto L_08A58710;
    case 99u: goto L_08A5872C;
    case 100u: goto L_08A58744;
    case 101u: goto L_08A58750;
    case 102u: goto L_08A5875C;
    case 103u: goto L_08A587BC;
    case 104u: goto L_08A587D4;
    case 105u: goto L_08A587EC;
    case 106u: goto L_08A58804;
    case 107u: goto L_08A5881C;
    case 108u: goto L_08A58834;
    case 109u: goto L_08A5884C;
    case 110u: goto L_08A58864;
    case 111u: goto L_08A58868;
    case 112u: goto L_08A58878;
    case 113u: goto L_08A58888;
    case 114u: goto L_08A58894;
    case 115u: goto L_08A588B0;
    case 116u: goto L_08A588C0;
    case 117u: goto L_08A588C8;
    case 118u: goto L_08A5891C;
    case 119u: goto L_08A58928;
    case 120u: goto L_08A58938;
    case 121u: goto L_08A58944;
    case 122u: goto L_08A58964;
    case 123u: goto L_08A58988;
    case 124u: goto L_08A589A4;
    case 125u: goto L_08A589C0;
    case 126u: goto L_08A589D8;
    case 127u: goto L_08A589F4;
    case 128u: goto L_08A58A0C;
    case 129u: goto L_08A58A28;
    case 130u: goto L_08A58A40;
    case 131u: goto L_08A58A5C;
    case 132u: goto L_08A58A74;
    case 133u: goto L_08A58A90;
    case 134u: goto L_08A58AA0;
    case 135u: goto L_08A58AB0;
    case 136u: goto L_08A58ACC;
    case 137u: goto L_08A58B2C;
    case 138u: goto L_08A58B50;
    case 139u: goto L_08A58B68;
    case 140u: goto L_08A58B88;
    case 141u: goto L_08A58BA0;
    case 142u: goto L_08A58BC0;
    case 143u: goto L_08A58BD8;
    case 144u: goto L_08A58BF8;
    case 145u: goto L_08A58C04;
    case 146u: goto L_08A58C18;
    case 147u: goto L_08A58C1C;
    case 148u: goto L_08A58C2C;
    case 149u: goto L_08A58C38;
    case 150u: goto L_08A58C54;
    case 151u: goto L_08A58C60;
    case 152u: goto L_08A58C70;
    case 153u: goto L_08A58C78;
    case 154u: goto L_08A58C84;
    case 155u: goto L_08A58C8C;
    case 156u: goto L_08A58C98;
    case 157u: goto L_08A58CA8;
    case 158u: goto L_08A58CBC;
    case 159u: goto L_08A58CC4;
    case 160u: goto L_08A58CD0;
    case 161u: goto L_08A58CD8;
    case 162u: goto L_08A58CE4;
    case 163u: goto L_08A58CEC;
    case 164u: goto L_08A58CF8;
    case 165u: goto L_08A58D00;
    case 166u: goto L_08A58D0C;
    case 167u: goto L_08A58D14;
    case 168u: goto L_08A58D48;
    case 169u: goto L_08A58D68;
    case 170u: goto L_08A58D74;
    case 171u: goto L_08A58D90;
    case 172u: goto L_08A58D98;
    case 173u: goto L_08A58DA4;
    case 174u: goto L_08A58DB0;
    case 175u: goto L_08A58DCC;
    case 176u: goto L_08A58DD8;
    case 177u: goto L_08A58DE4;
    case 178u: goto L_08A58DE8;
    case 179u: goto L_08A58DF0;
    case 180u: goto L_08A58E18;
    case 181u: goto L_08A58E28;
    case 182u: goto L_08A58E40;
    case 183u: goto L_08A58E48;
    case 184u: goto L_08A58E54;
    case 185u: goto L_08A58E60;
    case 186u: goto L_08A58E68;
    case 187u: goto L_08A58E6C;
    case 188u: goto L_08A58E70;
    case 189u: goto L_08A58E84;
    case 190u: goto L_08A58E90;
    case 191u: goto L_08A58EB0;
    case 192u: goto L_08A58ECC;
    case 193u: goto L_08A58EF0;
    case 194u: goto L_08A58F04;
    case 195u: goto L_08A58F18;
    case 196u: goto L_08A58F2C;
    case 197u: goto L_08A58F3C;
    case 198u: goto L_08A58F5C;
    case 199u: goto L_08A58F74;
    case 200u: goto L_08A58F90;
    case 201u: goto L_08A58F98;
    case 202u: goto L_08A58FA8;
    case 203u: goto L_08A58FB4;
    case 204u: goto L_08A58FB8;
    case 205u: goto L_08A58FC8;
    case 206u: goto L_08A58FCC;
    case 207u: goto L_08A58FE0;
    case 208u: goto L_08A59010;
    case 209u: goto L_08A59024;
    case 210u: goto L_08A5903C;
    case 211u: goto L_08A5904C;
    case 212u: goto L_08A59050;
    case 213u: goto L_08A59064;
    case 214u: goto L_08A59070;
    case 215u: goto L_08A59088;
    case 216u: goto L_08A59098;
    case 217u: goto L_08A590A8;
    case 218u: goto L_08A590C8;
    case 219u: goto L_08A590D0;
    case 220u: goto L_08A590E4;
    case 221u: goto L_08A59100;
    case 222u: goto L_08A59118;
    case 223u: goto L_08A59124;
    case 224u: goto L_08A59158;
    case 225u: goto L_08A59160;
    case 226u: goto L_08A59174;
    case 227u: goto L_08A59180;
    case 228u: goto L_08A59188;
    case 229u: goto L_08A59190;
    case 230u: goto L_08A59198;
    case 231u: goto L_08A591A0;
    case 232u: goto L_08A591A8;
    case 233u: goto L_08A591B4;
    case 234u: goto L_08A591BC;
    case 235u: goto L_08A591C8;
    case 236u: goto L_08A591DC;
    case 237u: goto L_08A591E4;
    case 238u: goto L_08A591F0;
    case 239u: goto L_08A591FC;
    case 240u: goto L_08A59200;
    case 241u: goto L_08A5920C;
    case 242u: goto L_08A59230;
    case 243u: goto L_08A59238;
    case 244u: goto L_08A59240;
    case 245u: goto L_08A59244;
    case 246u: goto L_08A59250;
    case 247u: goto L_08A59254;
    case 248u: goto L_08A59278;
    case 249u: goto L_08A592A4;
    case 250u: goto L_08A592B0;
    case 251u: goto L_08A592C4;
    case 252u: goto L_08A592D0;
    case 253u: goto L_08A592E8;
    case 254u: goto L_08A59304;
    case 255u: goto L_08A59320;
    case 256u: goto L_08A59330;
    case 257u: goto L_08A59334;
    case 258u: goto L_08A5933C;
    case 259u: goto L_08A5934C;
    case 260u: goto L_08A59358;
    case 261u: goto L_08A59360;
    case 262u: goto L_08A59380;
    case 263u: goto L_08A59398;
    case 264u: goto L_08A593AC;
    case 265u: goto L_08A593C8;
    case 266u: goto L_08A593E0;
    case 267u: goto L_08A593F4;
    case 268u: goto L_08A59410;
    case 269u: goto L_08A59464;
    case 270u: goto L_08A5946C;
    case 271u: goto L_08A5947C;
    case 272u: goto L_08A5948C;
    case 273u: goto L_08A59494;
    case 274u: goto L_08A59498;
    case 275u: goto L_08A594A0;
    case 276u: goto L_08A594A4;
    case 277u: goto L_08A594AC;
    case 278u: goto L_08A594B8;
    case 279u: goto L_08A594C4;
    case 280u: goto L_08A594CC;
    case 281u: goto L_08A594E0;
    case 282u: goto L_08A594EC;
    case 283u: goto L_08A594F4;
    case 284u: goto L_08A594FC;
    case 285u: goto L_08A59504;
    case 286u: goto L_08A5950C;
    case 287u: goto L_08A59514;
    case 288u: goto L_08A59520;
    case 289u: goto L_08A59528;
    case 290u: goto L_08A5952C;
    case 291u: goto L_08A59534;
    case 292u: goto L_08A5953C;
    case 293u: goto L_08A59548;
    case 294u: goto L_08A5954C;
    case 295u: goto L_08A59554;
    case 296u: goto L_08A59568;
    case 297u: goto L_08A59570;
    case 298u: goto L_08A5957C;
    case 299u: goto L_08A59588;
    case 300u: goto L_08A5958C;
    case 301u: goto L_08A59598;
    case 302u: goto L_08A595C4;
    case 303u: goto L_08A595CC;
    case 304u: goto L_08A595D4;
    case 305u: goto L_08A595E0;
    case 306u: goto L_08A595E4;
    case 307u: goto L_08A595E8;
    case 308u: goto L_08A595F4;
    case 309u: goto L_08A59628;
    case 310u: goto L_08A5965C;
    case 311u: goto L_08A59664;
    case 312u: goto L_08A5966C;
    case 313u: goto L_08A59680;
    case 314u: goto L_08A59690;
    case 315u: goto L_08A5969C;
    case 316u: goto L_08A596A8;
    case 317u: goto L_08A596B8;
    case 318u: goto L_08A596CC;
    case 319u: goto L_08A596D8;
    case 320u: goto L_08A596E4;
    case 321u: goto L_08A596F4;
    case 322u: goto L_08A5971C;
    case 323u: goto L_08A59724;
    case 324u: goto L_08A59734;
    case 325u: goto L_08A5973C;
    case 326u: goto L_08A59740;
    case 327u: goto L_08A5974C;
    case 328u: goto L_08A59758;
    case 329u: goto L_08A5976C;
    case 330u: goto L_08A5977C;
    case 331u: goto L_08A5978C;
    case 332u: goto L_08A597B0;
    case 333u: goto L_08A597C0;
    case 334u: goto L_08A597CC;
    case 335u: goto L_08A597D4;
    case 336u: goto L_08A597E0;
    case 337u: goto L_08A597E8;
    case 338u: goto L_08A597F4;
    case 339u: goto L_08A597FC;
    case 340u: goto L_08A5980C;
    case 341u: goto L_08A59820;
    case 342u: goto L_08A59828;
    case 343u: goto L_08A5984C;
    case 344u: goto L_08A59874;
    case 345u: goto L_08A598BC;
    case 346u: goto L_08A598C8;
    case 347u: goto L_08A598E4;
    case 348u: goto L_08A59900;
    case 349u: goto L_08A59A10;
    case 350u: goto L_08A59A24;
    case 351u: goto L_08A59A34;
    case 352u: goto L_08A59A70;
    case 353u: goto L_08A59A88;
    case 354u: goto L_08A59A94;
    case 355u: goto L_08A59AB0;
    case 356u: goto L_08A59AB4;
    case 357u: goto L_08A59AC8;
    case 358u: goto L_08A59AD4;
    case 359u: goto L_08A59B10;
    case 360u: goto L_08A59B28;
    case 361u: goto L_08A59B34;
    case 362u: goto L_08A59B50;
    case 363u: goto L_08A59B54;
    case 364u: goto L_08A59B68;
    case 365u: goto L_08A59B84;
    case 366u: goto L_08A59BA0;
    case 367u: goto L_08A59BAC;
    case 368u: goto L_08A59BB8;
    case 369u: goto L_08A59BC4;
    case 370u: goto L_08A59BD4;
    case 371u: goto L_08A59BD8;
    case 372u: goto L_08A59BEC;
    case 373u: goto L_08A59C00;
    case 374u: goto L_08A59C10;
    case 375u: goto L_08A59C2C;
    case 376u: goto L_08A59C34;
    case 377u: goto L_08A59C3C;
    case 378u: goto L_08A59C4C;
    case 379u: goto L_08A59C68;
    case 380u: goto L_08A59C70;
    case 381u: goto L_08A59C78;
    case 382u: goto L_08A59C88;
    case 383u: goto L_08A59CA4;
    case 384u: goto L_08A59CAC;
    case 385u: goto L_08A59CB4;
    case 386u: goto L_08A59CC4;
    case 387u: goto L_08A59CE0;
    case 388u: goto L_08A59CE8;
    case 389u: goto L_08A59CF0;
    case 390u: goto L_08A59D00;
    case 391u: goto L_08A59D1C;
    case 392u: goto L_08A59D24;
    case 393u: goto L_08A59D2C;
    case 394u: goto L_08A59D3C;
    case 395u: goto L_08A59D58;
    case 396u: goto L_08A59D60;
    case 397u: goto L_08A59D68;
    case 398u: goto L_08A59D78;
    case 399u: goto L_08A59D94;
    case 400u: goto L_08A59D9C;
    case 401u: goto L_08A59DA4;
    case 402u: goto L_08A59DB4;
    case 403u: goto L_08A59DD0;
    case 404u: goto L_08A59DD8;
    case 405u: goto L_08A59DE0;
    case 406u: goto L_08A59DF0;
    case 407u: goto L_08A59E0C;
    case 408u: goto L_08A59E14;
    case 409u: goto L_08A59E1C;
    case 410u: goto L_08A59E30;
    case 411u: goto L_08A59E40;
    case 412u: goto L_08A59E4C;
    case 413u: goto L_08A59E58;
    case 414u: goto L_08A59E68;
    case 415u: goto L_08A59E74;
    case 416u: goto L_08A59E80;
    case 417u: goto L_08A59EA0;
    case 418u: goto L_08A59EBC;
    case 419u: goto L_08A59EC4;
    case 420u: goto L_08A59ED0;
    case 421u: goto L_08A59EDC;
    case 422u: goto L_08A59EFC;
    case 423u: goto L_08A59F04;
    case 424u: goto L_08A59F10;
    case 425u: goto L_08A59F1C;
    case 426u: goto L_08A59F3C;
    case 427u: goto L_08A59F44;
    case 428u: goto L_08A59F50;
    case 429u: goto L_08A59F5C;
    case 430u: goto L_08A59F7C;
    case 431u: goto L_08A59F84;
    case 432u: goto L_08A59F90;
    case 433u: goto L_08A59F9C;
    case 434u: goto L_08A59FBC;
    case 435u: goto L_08A59FC4;
    case 436u: goto L_08A59FD0;
    case 437u: goto L_08A59FDC;
    case 438u: goto L_08A59FF4;
    case 439u: goto L_08A5A000;
    case 440u: goto L_08A5A00C;
    case 441u: goto L_08A5A02C;
    case 442u: goto L_08A5A048;
    case 443u: goto L_08A5A06C;
    case 444u: goto L_08A5A074;
    case 445u: goto L_08A5A080;
    case 446u: goto L_08A5A08C;
    case 447u: goto L_08A5A0AC;
    case 448u: goto L_08A5A0C4;
    case 449u: goto L_08A5A0DC;
    case 450u: goto L_08A5A0F0;
    case 451u: goto L_08A5A100;
    case 452u: goto L_08A5A108;
    case 453u: goto L_08A5A114;
    case 454u: goto L_08A5A128;
    case 455u: goto L_08A5A138;
    case 456u: goto L_08A5A158;
    case 457u: goto L_08A5A168;
    case 458u: goto L_08A5A170;
    case 459u: goto L_08A5A17C;
    case 460u: goto L_08A5A188;
    case 461u: goto L_08A5A19C;
    case 462u: goto L_08A5A1C8;
    case 463u: goto L_08A5A1D8;
    case 464u: goto L_08A5A1E8;
    case 465u: goto L_08A5A204;
    case 466u: goto L_08A5A224;
    case 467u: goto L_08A5A244;
    case 468u: goto L_08A5A260;
    case 469u: goto L_08A5A27C;
    case 470u: goto L_08A5A39C;
    case 471u: goto L_08A5A3A0;
    case 472u: goto L_08A5A3B4;
    case 473u: goto L_08A5A3CC;
    case 474u: goto L_08A5A400;
    case 475u: goto L_08A5A408;
    case 476u: goto L_08A5A424;
    case 477u: goto L_08A5A43C;
    case 478u: goto L_08A5A450;
    case 479u: goto L_08A5A464;
    case 480u: goto L_08A5A478;
    case 481u: goto L_08A5A488;
    case 482u: goto L_08A5A49C;
    case 483u: goto L_08A5A4B0;
    case 484u: goto L_08A5A4C0;
    case 485u: goto L_08A5A4D4;
    case 486u: goto L_08A5A4E8;
    case 487u: goto L_08A5A4F4;
    case 488u: goto L_08A5A508;
    case 489u: goto L_08A5A510;
    case 490u: goto L_08A5A524;
    case 491u: goto L_08A5A534;
    case 492u: goto L_08A5A540;
    case 493u: goto L_08A5A55C;
    case 494u: goto L_08A5A564;
    case 495u: goto L_08A5A588;
    case 496u: goto L_08A5A59C;
    case 497u: goto L_08A5A5B0;
    case 498u: goto L_08A5A5EC;
    case 499u: goto L_08A5A604;
    case 500u: goto L_08A5A610;
    case 501u: goto L_08A5A62C;
    case 502u: goto L_08A5A630;
    case 503u: goto L_08A5A648;
    case 504u: goto L_08A5A664;
    case 505u: goto L_08A5A694;
    case 506u: goto L_08A5A6A4;
    case 507u: goto L_08A5A6B4;
    case 508u: goto L_08A5A6C4;
    case 509u: goto L_08A5A6C8;
    case 510u: goto L_08A5A6DC;
    case 511u: goto L_08A5A6E8;
    case 512u: goto L_08A5A6FC;
    case 513u: goto L_08A5A704;
    case 514u: goto L_08A5A718;
    case 515u: goto L_08A5A72C;
    case 516u: goto L_08A5A740;
    case 517u: goto L_08A5A750;
    case 518u: goto L_08A5A764;
    case 519u: goto L_08A5A778;
    case 520u: goto L_08A5A788;
    case 521u: goto L_08A5A79C;
    case 522u: goto L_08A5A7B0;
    case 523u: goto L_08A5A7C4;
    case 524u: goto L_08A5A7EC;
    case 525u: goto L_08A5A7FC;
    case 526u: goto L_08A5A808;
    case 527u: goto L_08A5A814;
    case 528u: goto L_08A5A828;
    case 529u: goto L_08A5A830;
    case 530u: goto L_08A5A83C;
    case 531u: goto L_08A5A848;
    case 532u: goto L_08A5A85C;
    case 533u: goto L_08A5A864;
    case 534u: goto L_08A5A870;
    case 535u: goto L_08A5A87C;
    case 536u: goto L_08A5A890;
    case 537u: goto L_08A5A898;
    case 538u: goto L_08A5A8A4;
    case 539u: goto L_08A5A8B0;
    case 540u: goto L_08A5A8C4;
    case 541u: goto L_08A5A8CC;
    case 542u: goto L_08A5A8D8;
    case 543u: goto L_08A5A8E4;
    case 544u: goto L_08A5A8F8;
    case 545u: goto L_08A5A900;
    case 546u: goto L_08A5A90C;
    case 547u: goto L_08A5A918;
    case 548u: goto L_08A5A92C;
    case 549u: goto L_08A5A934;
    case 550u: goto L_08A5A940;
    case 551u: goto L_08A5A94C;
    case 552u: goto L_08A5A960;
    case 553u: goto L_08A5A968;
    case 554u: goto L_08A5A974;
    case 555u: goto L_08A5A980;
    case 556u: goto L_08A5A994;
    case 557u: goto L_08A5A99C;
    case 558u: goto L_08A5A9A8;
    case 559u: goto L_08A5A9B4;
    case 560u: goto L_08A5A9C8;
    case 561u: goto L_08A5A9D0;
    case 562u: goto L_08A5A9DC;
    case 563u: goto L_08A5A9E8;
    case 564u: goto L_08A5A9FC;
    case 565u: goto L_08A5AA04;
    case 566u: goto L_08A5AA10;
    case 567u: goto L_08A5AA1C;
    case 568u: goto L_08A5AA30;
    case 569u: goto L_08A5AA38;
    case 570u: goto L_08A5AA44;
    case 571u: goto L_08A5AA50;
    case 572u: goto L_08A5AA64;
    case 573u: goto L_08A5AA6C;
    case 574u: goto L_08A5AA78;
    case 575u: goto L_08A5AA84;
    case 576u: goto L_08A5AA98;
    case 577u: goto L_08A5AAA0;
    case 578u: goto L_08A5AAAC;
    case 579u: goto L_08A5AAB8;
    case 580u: goto L_08A5AACC;
    case 581u: goto L_08A5AAD4;
    case 582u: goto L_08A5AAE0;
    case 583u: goto L_08A5AAEC;
    case 584u: goto L_08A5AB00;
    case 585u: goto L_08A5AB08;
    case 586u: goto L_08A5AB14;
    case 587u: goto L_08A5AB20;
    case 588u: goto L_08A5AB34;
    case 589u: goto L_08A5AB3C;
    case 590u: goto L_08A5AB48;
    case 591u: goto L_08A5AB54;
    case 592u: goto L_08A5AB68;
    case 593u: goto L_08A5AB70;
    case 594u: goto L_08A5AB7C;
    case 595u: goto L_08A5AB88;
    case 596u: goto L_08A5AB9C;
    case 597u: goto L_08A5ABA4;
    case 598u: goto L_08A5ABB0;
    case 599u: goto L_08A5ABBC;
    case 600u: goto L_08A5ABD0;
    case 601u: goto L_08A5ABD8;
    case 602u: goto L_08A5ABE4;
    case 603u: goto L_08A5ABF0;
    case 604u: goto L_08A5AC04;
    case 605u: goto L_08A5AC0C;
    case 606u: goto L_08A5AC18;
    case 607u: goto L_08A5AC24;
    case 608u: goto L_08A5AC38;
    case 609u: goto L_08A5AC40;
    case 610u: goto L_08A5AC4C;
    case 611u: goto L_08A5AC58;
    case 612u: goto L_08A5AC6C;
    case 613u: goto L_08A5AC74;
    case 614u: goto L_08A5AC80;
    case 615u: goto L_08A5AC8C;
    case 616u: goto L_08A5ACA0;
    case 617u: goto L_08A5ACB0;
    case 618u: goto L_08A5ACC8;
    case 619u: goto L_08A5ACDC;
    case 620u: goto L_08A5ACEC;
    case 621u: goto L_08A5ACF4;
    case 622u: goto L_08A5ACFC;
    case 623u: goto L_08A5AD10;
    case 624u: goto L_08A5AD20;
    case 625u: goto L_08A5AD3C;
    case 626u: goto L_08A5AD44;
    case 627u: goto L_08A5AD60;
    case 628u: goto L_08A5AD68;
    case 629u: goto L_08A5AD74;
    case 630u: goto L_08A5AD80;
    case 631u: goto L_08A5ADA0;
    case 632u: goto L_08A5ADA8;
    case 633u: goto L_08A5ADB4;
    case 634u: goto L_08A5ADC0;
    case 635u: goto L_08A5ADD8;
    case 636u: goto L_08A5ADF0;
    case 637u: goto L_08A5AE08;
    case 638u: goto L_08A5AE20;
    case 639u: goto L_08A5AE34;
    case 640u: goto L_08A5AE64;
    case 641u: goto L_08A5AE7C;
    case 642u: goto L_08A5AE94;
    case 643u: goto L_08A5AEAC;
    case 644u: goto L_08A5AEB8;
    case 645u: goto L_08A5AEC0;
    case 646u: goto L_08A5AECC;
    case 647u: goto L_08A5AED4;
    case 648u: goto L_08A5AEF0;
    case 649u: goto L_08A5AF0C;
    case 650u: goto L_08A5AF28;
    case 651u: goto L_08A5AF44;
    case 652u: goto L_08A5AF60;
    case 653u: goto L_08A5AF7C;
    case 654u: goto L_08A5AF98;
    case 655u: goto L_08A5AFB4;
    case 656u: goto L_08A5AFD0;
    case 657u: goto L_08A5AFEC;
    case 658u: goto L_08A5B008;
    case 659u: goto L_08A5B024;
    case 660u: goto L_08A5B040;
    case 661u: goto L_08A5B05C;
    case 662u: goto L_08A5B0CC;
    case 663u: goto L_08A5B108;
    case 664u: goto L_08A5B134;
    case 665u: goto L_08A5B150;
    case 666u: goto L_08A5B16C;
    case 667u: goto L_08A5B188;
    case 668u: goto L_08A5B1B4;
    case 669u: goto L_08A5B1DC;
    case 670u: goto L_08A5B1F8;
    case 671u: goto L_08A5B214;
    case 672u: goto L_08A5B230;
    case 673u: goto L_08A5B24C;
    case 674u: goto L_08A5B268;
    case 675u: goto L_08A5B284;
    case 676u: goto L_08A5B2A0;
    case 677u: goto L_08A5B2BC;
    case 678u: goto L_08A5B2D0;
    case 679u: goto L_08A5B340;
    case 680u: goto L_08A5B364;
    case 681u: goto L_08A5B3C4;
    case 682u: goto L_08A5B3E0;
    case 683u: goto L_08A5B3E8;
    case 684u: goto L_08A5B3F0;
    case 685u: goto L_08A5B3FC;
    case 686u: goto L_08A5B408;
    case 687u: goto L_08A5B45C;
    case 688u: goto L_08A5B47C;
    case 689u: goto L_08A5B488;
    case 690u: goto L_08A5B4CC;
    case 691u: goto L_08A5B574;
    case 692u: goto L_08A5B580;
    case 693u: goto L_08A5B590;
    case 694u: goto L_08A5B5A0;
    case 695u: goto L_08A5B5A8;
    case 696u: goto L_08A5B5C0;
    case 697u: goto L_08A5B5CC;
    case 698u: goto L_08A5B5DC;
    case 699u: goto L_08A5B5EC;
    case 700u: goto L_08A5B5F4;
    case 701u: goto L_08A5B600;
    case 702u: goto L_08A5B638;
    case 703u: goto L_08A5B658;
    case 704u: goto L_08A5B6D0;
    case 705u: goto L_08A5B6D4;
    case 706u: goto L_08A5B6E0;
    case 707u: goto L_08A5B6E4;
    case 708u: goto L_08A5B6F0;
    case 709u: goto L_08A5B6F4;
    case 710u: goto L_08A5B6FC;
    case 711u: goto L_08A5B70C;
    case 712u: goto L_08A5B718;
    case 713u: goto L_08A5B724;
    case 714u: goto L_08A5B72C;
    case 715u: goto L_08A5B774;
    case 716u: goto L_08A5B7A4;
    case 717u: goto L_08A5B7BC;
    case 718u: goto L_08A5B7D8;
    case 719u: goto L_08A5B830;
    case 720u: goto L_08A5B86C;
    case 721u: goto L_08A5B974;
    case 722u: goto L_08A5B9BC;
    case 723u: goto L_08A5B9DC;
    case 724u: goto L_08A5B9F4;
    case 725u: goto L_08A5BA0C;
    case 726u: goto L_08A5BA24;
    case 727u: goto L_08A5BA3C;
    case 728u: goto L_08A5BA54;
    case 729u: goto L_08A5BA80;
    case 730u: goto L_08A5BA98;
    case 731u: goto L_08A5BAB0;
    case 732u: goto L_08A5BAC8;
    case 733u: goto L_08A5BAE0;
    case 734u: goto L_08A5BAF8;
    case 735u: goto L_08A5BB40;
    case 736u: goto L_08A5BB58;
    case 737u: goto L_08A5BB6C;
    case 738u: goto L_08A5BBC4;
    case 739u: goto L_08A5BBDC;
    case 740u: goto L_08A5BBF0;
    case 741u: goto L_08A5BC18;
    case 742u: goto L_08A5BC24;
    case 743u: goto L_08A5BC2C;
    case 744u: goto L_08A5BC40;
    case 745u: goto L_08A5BC5C;
    case 746u: goto L_08A5BC70;
    case 747u: goto L_08A5BC84;
    case 748u: goto L_08A5BC98;
    case 749u: goto L_08A5BCAC;
    case 750u: goto L_08A5BCC0;
    case 751u: goto L_08A5BCD4;
    case 752u: goto L_08A5BCE8;
    case 753u: goto L_08A5BCFC;
    case 754u: goto L_08A5BD10;
    case 755u: goto L_08A5BD24;
    case 756u: goto L_08A5BD38;
    case 757u: goto L_08A5BD4C;
    case 758u: goto L_08A5BD60;
    case 759u: goto L_08A5BD74;
    case 760u: goto L_08A5BD88;
    case 761u: goto L_08A5BD9C;
    case 762u: goto L_08A5BDB0;
    case 763u: goto L_08A5BDC4;
    case 764u: goto L_08A5BDD8;
    case 765u: goto L_08A5BDEC;
    case 766u: goto L_08A5BE00;
    case 767u: goto L_08A5BE14;
    case 768u: goto L_08A5BE24;
    case 769u: goto L_08A5BE44;
    case 770u: goto L_08A5BE54;
    case 771u: goto L_08A5BE5C;
    case 772u: goto L_08A5BE64;
    case 773u: goto L_08A5BE70;
    case 774u: goto L_08A5BE84;
    case 775u: goto L_08A5BEBC;
    case 776u: goto L_08A5BED4;
    case 777u: goto L_08A5BEE8;
    case 778u: goto L_08A5BEF8;
    case 779u: goto L_08A5BF0C;
    case 780u: goto L_08A5BF20;
    case 781u: goto L_08A5BF30;
    case 782u: goto L_08A5BF44;
    case 783u: goto L_08A5BF58;
    case 784u: goto L_08A5BF6C;
    case 785u: goto L_08A5BF7C;
    case 786u: goto L_08A5BF90;
    case 787u: goto L_08A5BFA4;
    case 788u: goto L_08A5BFB8;
    case 789u: goto L_08A5BFC8;
    case 790u: goto L_08A5BFDC;
    case 791u: goto L_08A5BFF0;
    default:
        if (local_transfers == 0u) rt.unsupported(ctx.pc, 0u, "invalid internal function entry");
        else ctx.pc = local_pc;
        return;
    }
    }
L_08A58000:
    ctx.set_gpr(2, rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(56)));
    ctx.set_gpr(5, rt.memory().aot_load32(ctx.gpr[2] + static_cast<std::uint32_t>(12)));
    ctx.set_gpr(3, rt.memory().aot_load32(ctx.gpr[21] + static_cast<std::uint32_t>(64)));
    ctx.set_gpr(2, ctx.gpr[3] << 1u);
    ctx.set_gpr(17, ctx.gpr[2] + ctx.gpr[3]);
    ctx.set_gpr(2, 0u + 0u);
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_08A58094;
      }
      goto L_08A58020;
    }
L_08A58020:
    ctx.set_gpr(7, rt.memory().aot_load16(ctx.gpr[18] + static_cast<std::uint32_t>(0)));
    ctx.set_gpr(6, rt.memory().aot_load32(ctx.gpr[21] + static_cast<std::uint32_t>(60)));
    ctx.set_gpr(3, ctx.gpr[7] >> 5u);
    ctx.set_gpr(4, ctx.gpr[3] << 2u);
    ctx.set_gpr(3, rt.memory().aot_load32(ctx.gpr[6] + static_cast<std::uint32_t>(16)));
    ctx.set_gpr(6, ctx.gpr[3] + ctx.gpr[4]);
    ctx.set_gpr(4, ctx.gpr[7] & 31u);
    ctx.set_gpr(3, 0u + static_cast<std::uint32_t>(1));
    ctx.set_gpr(4, ctx.gpr[3] << (ctx.gpr[4] & 31u));
    ctx.set_gpr(3, rt.memory().aot_load32(ctx.gpr[6] + static_cast<std::uint32_t>(0)));
    ctx.set_gpr(3, ctx.gpr[4] & ctx.gpr[3]);
    { const bool branch_taken = ctx.gpr[3] == 0u;
    // nop
      if (branch_taken) {
          goto L_08A58088;
      }
      goto L_08A58054;
    }
L_08A58054:
    ctx.set_gpr(20, rt.memory().aot_load16(ctx.gpr[5] + static_cast<std::uint32_t>(0)));
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_08A58070;
      }
      goto L_08A58060;
    }
L_08A58060:
    ctx.set_gpr(3, ctx.gpr[20] & 65535u);
    ctx.set_gpr(3, ctx.gpr[3] << 1u);
    ctx.set_gpr(3, ctx.gpr[16] + ctx.gpr[3]);
    ctx.set_gpr(20, rt.memory().aot_load16(ctx.gpr[3] + static_cast<std::uint32_t>(0)));
    goto L_08A58070;
L_08A58070:
    ctx.set_gpr(4, ctx.gpr[20] & 65535u);
    ctx.set_gpr(3, rt.memory().aot_load16(ctx.gpr[21] + static_cast<std::uint32_t>(74)));
    ctx.set_gpr(1, static_cast<std::int32_t>(ctx.gpr[3]) < static_cast<std::int32_t>(ctx.gpr[4]) ? 1u : 0u);
    { const bool branch_taken = ctx.gpr[1] != 0u;
    // nop
      if (branch_taken) {
          goto L_08A58060;
      }
      goto L_08A58084;
    }
L_08A58084:
    rt.memory().aot_store16(ctx.gpr[18] + static_cast<std::uint32_t>(0), static_cast<std::uint16_t>(ctx.gpr[20]));
    goto L_08A58088;
L_08A58088:
    ctx.set_gpr(2, ctx.gpr[2] + static_cast<std::uint32_t>(1));
    ctx.set_gpr(18, ctx.gpr[18] + static_cast<std::uint32_t>(2));
    ctx.set_gpr(5, ctx.gpr[5] + static_cast<std::uint32_t>(2));
    goto L_08A58094;
L_08A58094:
    ctx.set_gpr(3, ctx.gpr[2] < ctx.gpr[17] ? 1u : 0u);
    { const bool branch_taken = ctx.gpr[3] != 0u;
    // nop
      if (branch_taken) {
          goto L_08A58020;
      }
      goto L_08A580A0;
    }
L_08A580A0:
    ctx.set_gpr(3, rt.memory().aot_load32(ctx.gpr[21] + static_cast<std::uint32_t>(68)));
    ctx.set_gpr(2, ctx.gpr[3] << 1u);
    ctx.set_gpr(22, ctx.gpr[2] + ctx.gpr[3]);
    ctx.set_gpr(2, ctx.gpr[22] - ctx.gpr[17]);
    ctx.set_gpr(6, ctx.gpr[2] << 1u);
    ctx.set_gpr(4, ctx.gpr[18] + 0u);
    ctx.set_gpr(31, 0x08A580C0u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0003_entry, 3u, 662u, 0x08812B08u>(ctx, &aot_mem) && ctx.pc == 0x08A580C0u) goto L_08A580C0;
    return;
L_08A580C0:
    ctx.set_gpr(2, ctx.gpr[17] + 0u);
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_08A58108;
      }
      goto L_08A580CC;
    }
L_08A580CC:
    ctx.set_gpr(20, rt.memory().aot_load16(ctx.gpr[18] + static_cast<std::uint32_t>(0)));
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_08A580E8;
      }
      goto L_08A580D8;
    }
L_08A580D8:
    ctx.set_gpr(3, ctx.gpr[20] & 65535u);
    ctx.set_gpr(3, ctx.gpr[3] << 1u);
    ctx.set_gpr(3, ctx.gpr[16] + ctx.gpr[3]);
    ctx.set_gpr(20, rt.memory().aot_load16(ctx.gpr[3] + static_cast<std::uint32_t>(0)));
    goto L_08A580E8;
L_08A580E8:
    ctx.set_gpr(4, ctx.gpr[20] & 65535u);
    ctx.set_gpr(3, rt.memory().aot_load16(ctx.gpr[21] + static_cast<std::uint32_t>(74)));
    ctx.set_gpr(1, static_cast<std::int32_t>(ctx.gpr[3]) < static_cast<std::int32_t>(ctx.gpr[4]) ? 1u : 0u);
    { const bool branch_taken = ctx.gpr[1] != 0u;
    // nop
      if (branch_taken) {
          goto L_08A580D8;
      }
      goto L_08A580FC;
    }
L_08A580FC:
    rt.memory().aot_store16(ctx.gpr[18] + static_cast<std::uint32_t>(0), static_cast<std::uint16_t>(ctx.gpr[20]));
    ctx.set_gpr(2, ctx.gpr[2] + static_cast<std::uint32_t>(1));
    ctx.set_gpr(18, ctx.gpr[18] + static_cast<std::uint32_t>(2));
    goto L_08A58108;
L_08A58108:
    ctx.set_gpr(3, ctx.gpr[2] < ctx.gpr[22] ? 1u : 0u);
    { const bool branch_taken = ctx.gpr[3] != 0u;
    // nop
      if (branch_taken) {
          goto L_08A580CC;
      }
      goto L_08A58114;
    }
L_08A58114:
    ctx.set_gpr(4, rt.memory().aot_load32(ctx.gpr[21] + static_cast<std::uint32_t>(60)));
    ctx.set_gpr(31, 0x08A58120u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0065_entry, 65u, 656u, 0x0890AE6Cu>(ctx, &aot_mem) && ctx.pc == 0x08A58120u) goto L_08A58120;
    return;
L_08A58120:
    ctx.set_gpr(2, rt.memory().aot_load16(ctx.gpr[21] + static_cast<std::uint32_t>(74)));
    rt.memory().aot_store16(ctx.gpr[21] + static_cast<std::uint32_t>(72), static_cast<std::uint16_t>(ctx.gpr[2]));
    goto L_08A58128;
L_08A58128:
    ctx.set_gpr(4, rt.memory().aot_load32(ctx.gpr[21] + static_cast<std::uint32_t>(52)));
    ctx.set_gpr(5, ctx.gpr[19] + 0u);
    ctx.set_gpr(6, 0u + 0u);
    ctx.set_gpr(7, 0u + 0u);
    ctx.set_gpr(8, 0u + static_cast<std::uint32_t>(-1));
    ctx.set_gpr(25, rt.memory().aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(0)));
    ctx.set_gpr(25, rt.memory().aot_load32(ctx.gpr[25] + static_cast<std::uint32_t>(116)));
    jump_target = ctx.gpr[25];
    ctx.set_gpr(31, 0x08A5814Cu);
    // nop
    ctx.pc = jump_target;
    if (rt.invoke_chained_call(ctx, &aot_mem) && ctx.pc == 0x08A5814Cu) goto L_08A5814C;
    return;
L_08A5814C:
    ctx.set_gpr(2, rt.memory().aot_load32(ctx.gpr[21] + static_cast<std::uint32_t>(68)));
    rt.memory().aot_store32(ctx.gpr[21] + static_cast<std::uint32_t>(64), ctx.gpr[2]);
    ctx.set_gpr(4, rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(60)));
    ctx.set_gpr(5, 0u + static_cast<std::uint32_t>(3));
    ctx.set_gpr(6, rt.memory().aot_load32(ctx.gpr[21] + static_cast<std::uint32_t>(68)));
    ctx.set_gpr(7, 0u + 0u);
    ctx.set_gpr(2, ctx.gpr[4] + 0u);
    ctx.set_gpr(25, rt.memory().aot_load32(ctx.gpr[2] + static_cast<std::uint32_t>(0)));
    ctx.set_gpr(25, rt.memory().aot_load32(ctx.gpr[25] + static_cast<std::uint32_t>(160)));
    jump_target = ctx.gpr[25];
    ctx.set_gpr(31, 0x08A58178u);
    // nop
    ctx.pc = jump_target;
    if (rt.invoke_chained_call(ctx, &aot_mem) && ctx.pc == 0x08A58178u) goto L_08A58178;
    return;
L_08A58178:
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
L_08A581AC:
    ctx.set_gpr(29, ctx.gpr[29] + static_cast<std::uint32_t>(-16));
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(12), ctx.gpr[31]);
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(8), ctx.gpr[17]);
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(4), ctx.gpr[16]);
    ctx.set_gpr(17, ctx.gpr[7] + 0u);
    ctx.set_gpr(2, rt.memory().aot_load32(ctx.gpr[5] + static_cast<std::uint32_t>(12)));
    rt.memory().aot_store32(ctx.gpr[6] + static_cast<std::uint32_t>(12), ctx.gpr[2]);
    ctx.set_gpr(3, rt.memory().aot_load32(ctx.gpr[5] + static_cast<std::uint32_t>(12)));
    ctx.set_gpr(2, 0u + static_cast<std::uint32_t>(11));
    { const bool branch_taken = ctx.gpr[3] == ctx.gpr[2];
    // nop
      if (branch_taken) {
          goto L_08A58284;
      }
      goto L_08A581D8;
    }
L_08A581D8:
    ctx.set_gpr(16, 0u + static_cast<std::uint32_t>(2));
    { const bool branch_taken = ctx.gpr[3] == ctx.gpr[16];
    // nop
      if (branch_taken) {
          goto L_08A5823C;
      }
      goto L_08A581E4;
    }
L_08A581E4:
    ctx.set_gpr(2, 0u + static_cast<std::uint32_t>(1));
    { const bool branch_taken = ctx.gpr[3] == ctx.gpr[2];
    // nop
      if (branch_taken) {
          goto L_08A581F8;
      }
      goto L_08A581F0;
    }
L_08A581F0:
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_08A582CC;
      }
      goto L_08A581F8;
    }
L_08A581F8:
    { const bool branch_taken = ctx.gpr[8] != 0u;
    // nop
      if (branch_taken) {
          goto L_08A58304;
      }
      goto L_08A58200;
    }
L_08A58200:
    rt.memory().aot_store32(ctx.gpr[6] + static_cast<std::uint32_t>(12), 0u);
    ctx.set_gpr(4, ctx.gpr[17] + 0u);
    ctx.set_gpr(5, 0u + static_cast<std::uint32_t>(6));
    ctx.set_gpr(25, rt.memory().aot_load32(ctx.gpr[17] + static_cast<std::uint32_t>(0)));
    ctx.set_gpr(25, rt.memory().aot_load32(ctx.gpr[25] + static_cast<std::uint32_t>(136)));
    jump_target = ctx.gpr[25];
    ctx.set_gpr(31, 0x08A5821Cu);
    // nop
    ctx.pc = jump_target;
    if (rt.invoke_chained_call(ctx, &aot_mem) && ctx.pc == 0x08A5821Cu) goto L_08A5821C;
    return;
L_08A5821C:
    ctx.set_gpr(4, ctx.gpr[17] + 0u);
    ctx.set_gpr(5, 0u + 0u);
    ctx.set_gpr(25, rt.memory().aot_load32(ctx.gpr[17] + static_cast<std::uint32_t>(0)));
    ctx.set_gpr(25, rt.memory().aot_load32(ctx.gpr[25] + static_cast<std::uint32_t>(140)));
    jump_target = ctx.gpr[25];
    ctx.set_gpr(31, 0x08A58234u);
    // nop
    ctx.pc = jump_target;
    if (rt.invoke_chained_call(ctx, &aot_mem) && ctx.pc == 0x08A58234u) goto L_08A58234;
    return;
L_08A58234:
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_08A58304;
      }
      goto L_08A5823C;
    }
L_08A5823C:
    ctx.set_gpr(16, 0u + static_cast<std::uint32_t>(1));
    { const bool branch_taken = ctx.gpr[8] != 0u;
    // nop
      if (branch_taken) {
          goto L_08A58304;
      }
      goto L_08A58248;
    }
L_08A58248:
    rt.memory().aot_store32(ctx.gpr[6] + static_cast<std::uint32_t>(12), 0u);
    ctx.set_gpr(4, ctx.gpr[17] + 0u);
    ctx.set_gpr(5, ctx.gpr[16] + 0u);
    ctx.set_gpr(25, rt.memory().aot_load32(ctx.gpr[17] + static_cast<std::uint32_t>(0)));
    ctx.set_gpr(25, rt.memory().aot_load32(ctx.gpr[25] + static_cast<std::uint32_t>(136)));
    jump_target = ctx.gpr[25];
    ctx.set_gpr(31, 0x08A58264u);
    // nop
    ctx.pc = jump_target;
    if (rt.invoke_chained_call(ctx, &aot_mem) && ctx.pc == 0x08A58264u) goto L_08A58264;
    return;
L_08A58264:
    ctx.set_gpr(4, ctx.gpr[17] + 0u);
    ctx.set_gpr(5, ctx.gpr[16] + 0u);
    ctx.set_gpr(25, rt.memory().aot_load32(ctx.gpr[17] + static_cast<std::uint32_t>(0)));
    ctx.set_gpr(25, rt.memory().aot_load32(ctx.gpr[25] + static_cast<std::uint32_t>(140)));
    jump_target = ctx.gpr[25];
    ctx.set_gpr(31, 0x08A5827Cu);
    // nop
    ctx.pc = jump_target;
    if (rt.invoke_chained_call(ctx, &aot_mem) && ctx.pc == 0x08A5827Cu) goto L_08A5827C;
    return;
L_08A5827C:
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_08A58304;
      }
      goto L_08A58284;
    }
L_08A58284:
    ctx.set_gpr(16, 0u + static_cast<std::uint32_t>(9));
    { const bool branch_taken = ctx.gpr[8] != 0u;
    // nop
      if (branch_taken) {
          goto L_08A58304;
      }
      goto L_08A58290;
    }
L_08A58290:
    rt.memory().aot_store32(ctx.gpr[6] + static_cast<std::uint32_t>(12), 0u);
    ctx.set_gpr(4, ctx.gpr[17] + 0u);
    ctx.set_gpr(5, 0u + static_cast<std::uint32_t>(4));
    ctx.set_gpr(25, rt.memory().aot_load32(ctx.gpr[17] + static_cast<std::uint32_t>(0)));
    ctx.set_gpr(25, rt.memory().aot_load32(ctx.gpr[25] + static_cast<std::uint32_t>(136)));
    jump_target = ctx.gpr[25];
    ctx.set_gpr(31, 0x08A582ACu);
    // nop
    ctx.pc = jump_target;
    if (rt.invoke_chained_call(ctx, &aot_mem) && ctx.pc == 0x08A582ACu) goto L_08A582AC;
    return;
L_08A582AC:
    ctx.set_gpr(4, ctx.gpr[17] + 0u);
    ctx.set_gpr(5, 0u + static_cast<std::uint32_t>(5));
    ctx.set_gpr(25, rt.memory().aot_load32(ctx.gpr[17] + static_cast<std::uint32_t>(0)));
    ctx.set_gpr(25, rt.memory().aot_load32(ctx.gpr[25] + static_cast<std::uint32_t>(140)));
    jump_target = ctx.gpr[25];
    ctx.set_gpr(31, 0x08A582C4u);
    // nop
    ctx.pc = jump_target;
    if (rt.invoke_chained_call(ctx, &aot_mem) && ctx.pc == 0x08A582C4u) goto L_08A582C4;
    return;
L_08A582C4:
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_08A58304;
      }
      goto L_08A582CC;
    }
L_08A582CC:
    ctx.set_gpr(16, 0u + static_cast<std::uint32_t>(9));
    rt.memory().aot_store32(ctx.gpr[6] + static_cast<std::uint32_t>(12), 0u);
    ctx.set_gpr(4, ctx.gpr[17] + 0u);
    ctx.set_gpr(5, 0u + static_cast<std::uint32_t>(4));
    ctx.set_gpr(25, rt.memory().aot_load32(ctx.gpr[17] + static_cast<std::uint32_t>(0)));
    ctx.set_gpr(25, rt.memory().aot_load32(ctx.gpr[25] + static_cast<std::uint32_t>(136)));
    jump_target = ctx.gpr[25];
    ctx.set_gpr(31, 0x08A582ECu);
    // nop
    ctx.pc = jump_target;
    if (rt.invoke_chained_call(ctx, &aot_mem) && ctx.pc == 0x08A582ECu) goto L_08A582EC;
    return;
L_08A582EC:
    ctx.set_gpr(4, ctx.gpr[17] + 0u);
    ctx.set_gpr(5, 0u + static_cast<std::uint32_t>(5));
    ctx.set_gpr(25, rt.memory().aot_load32(ctx.gpr[17] + static_cast<std::uint32_t>(0)));
    ctx.set_gpr(25, rt.memory().aot_load32(ctx.gpr[25] + static_cast<std::uint32_t>(140)));
    jump_target = ctx.gpr[25];
    ctx.set_gpr(31, 0x08A58304u);
    // nop
    ctx.pc = jump_target;
    if (rt.invoke_chained_call(ctx, &aot_mem) && ctx.pc == 0x08A58304u) goto L_08A58304;
    return;
L_08A58304:
    ctx.set_gpr(2, ctx.gpr[16] + 0u);
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
L_08A58320:
    ctx.set_gpr(3, 0u + static_cast<std::uint32_t>(1));
    rt.memory().aot_store16(ctx.gpr[4] + static_cast<std::uint32_t>(60), static_cast<std::uint16_t>(ctx.gpr[3]));
    rt.memory().aot_store8(ctx.gpr[4] + static_cast<std::uint32_t>(64), static_cast<std::uint8_t>(0u));
    jump_target = ctx.gpr[31];
    // nop
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_08A58334:
    ctx.set_gpr(29, ctx.gpr[29] + static_cast<std::uint32_t>(-32));
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(28), ctx.gpr[31]);
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(24), ctx.gpr[19]);
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(20), ctx.gpr[18]);
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(16), ctx.gpr[17]);
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(12), ctx.gpr[16]);
    ctx.set_gpr(19, ctx.gpr[4] + 0u);
    ctx.set_gpr(2, 0u + static_cast<std::uint32_t>(1));
    rt.memory().aot_store16(ctx.gpr[4] + static_cast<std::uint32_t>(60), static_cast<std::uint16_t>(ctx.gpr[2]));
    rt.memory().aot_store8(ctx.gpr[4] + static_cast<std::uint32_t>(64), static_cast<std::uint8_t>(0u));
    ctx.set_gpr(17, rt.memory().aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(68)));
    ctx.set_gpr(16, rt.memory().aot_load32(ctx.gpr[17] + static_cast<std::uint32_t>(8)));
    ctx.set_gpr(18, 0u + 0u);
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_08A58394;
      }
      goto L_08A58370;
    }
L_08A58370:
    ctx.set_gpr(3, ctx.gpr[18] << 2u);
    ctx.set_gpr(2, rt.memory().aot_load32(ctx.gpr[17] + static_cast<std::uint32_t>(16)));
    ctx.set_gpr(2, ctx.gpr[2] + ctx.gpr[3]);
    ctx.set_gpr(4, rt.memory().aot_load32(ctx.gpr[2] + static_cast<std::uint32_t>(0)));
    { const bool branch_taken = ctx.gpr[4] == 0u;
    // nop
      if (branch_taken) {
          goto L_08A58390;
      }
      goto L_08A58388;
    }
L_08A58388:
    ctx.set_gpr(31, 0x08A58390u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0014_entry, 14u, 257u, 0x0883D454u>(ctx, &aot_mem) && ctx.pc == 0x08A58390u) goto L_08A58390;
    return;
L_08A58390:
    ctx.set_gpr(18, ctx.gpr[18] + static_cast<std::uint32_t>(1));
    goto L_08A58394;
L_08A58394:
    ctx.set_gpr(2, static_cast<std::int32_t>(ctx.gpr[18]) < static_cast<std::int32_t>(ctx.gpr[16]) ? 1u : 0u);
    { const bool branch_taken = ctx.gpr[2] != 0u;
    // nop
      if (branch_taken) {
          goto L_08A58370;
      }
      goto L_08A583A0;
    }
L_08A583A0:
    ctx.set_gpr(4, rt.memory().aot_load32(ctx.gpr[17] + static_cast<std::uint32_t>(8)));
    ctx.set_gpr(5, 0u + 0u);
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_08A583C4;
      }
      goto L_08A583B0;
    }
L_08A583B0:
    ctx.set_gpr(3, ctx.gpr[5] << 2u);
    ctx.set_gpr(2, rt.memory().aot_load32(ctx.gpr[17] + static_cast<std::uint32_t>(16)));
    ctx.set_gpr(2, ctx.gpr[2] + ctx.gpr[3]);
    rt.memory().aot_store32(ctx.gpr[2] + static_cast<std::uint32_t>(0), 0u);
    ctx.set_gpr(5, ctx.gpr[5] + static_cast<std::uint32_t>(1));
    goto L_08A583C4;
L_08A583C4:
    ctx.set_gpr(2, static_cast<std::int32_t>(ctx.gpr[5]) < static_cast<std::int32_t>(ctx.gpr[4]) ? 1u : 0u);
    { const bool branch_taken = ctx.gpr[2] != 0u;
    // nop
      if (branch_taken) {
          goto L_08A583B0;
      }
      goto L_08A583D0;
    }
L_08A583D0:
    rt.memory().aot_store32(ctx.gpr[17] + static_cast<std::uint32_t>(8), 0u);
    ctx.set_gpr(4, ctx.gpr[19] + 0u);
    ctx.set_gpr(31, 0x08A583E0u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0150_entry, 150u, 601u, 0x08A5E8ACu>(ctx, &aot_mem) && ctx.pc == 0x08A583E0u) goto L_08A583E0;
    return;
L_08A583E0:
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
L_08A58400:
    ctx.set_gpr(29, ctx.gpr[29] + static_cast<std::uint32_t>(-96));
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
    ctx.set_gpr(18, 0u + 0u);
    ctx.set_gpr(20, 0u + 0u);
    ctx.set_gpr(31, 0x08A58440u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0081_entry, 81u, 41u, 0x0894835Cu>(ctx, &aot_mem) && ctx.pc == 0x08A58440u) goto L_08A58440;
    return;
L_08A58440:
    ctx.set_gpr(4, ctx.gpr[2] + 0u);
    ctx.set_gpr(31, 0x08A5844Cu);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0047_entry, 47u, 534u, 0x088C2F6Cu>(ctx, &aot_mem) && ctx.pc == 0x08A5844Cu) goto L_08A5844C;
    return;
L_08A5844C:
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(92), ctx.gpr[2]);
    ctx.set_gpr(2, rt.memory().aot_load32(ctx.gpr[21] + static_cast<std::uint32_t>(32)));
    ctx.set_gpr(2, rt.memory().aot_load32(ctx.gpr[2] + static_cast<std::uint32_t>(8)));
    rt.memory().aot_store16(ctx.gpr[21] + static_cast<std::uint32_t>(62), static_cast<std::uint16_t>(ctx.gpr[2]));
    ctx.set_gpr(16, 0u + 0u);
    ctx.set_gpr(17, 0u + 0u);
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_08A584C0;
      }
      goto L_08A5846C;
    }
L_08A5846C:
    ctx.set_gpr(4, ctx.gpr[21] + 0u);
    ctx.set_gpr(5, ctx.gpr[17] + 0u);
    ctx.set_gpr(6, 0u + static_cast<std::uint32_t>(2));
    ctx.set_gpr(31, 0x08A58480u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0150_entry, 150u, 597u, 0x08A5E818u>(ctx, &aot_mem) && ctx.pc == 0x08A58480u) goto L_08A58480;
    return;
L_08A58480:
    ctx.set_gpr(4, rt.memory().aot_load32(ctx.gpr[2] + static_cast<std::uint32_t>(12)));
    { const bool branch_taken = ctx.gpr[4] == 0u;
    // nop
      if (branch_taken) {
          goto L_08A584BC;
      }
      goto L_08A5848C;
    }
L_08A5848C:
    ctx.set_gpr(5, 0u + 0u);
    ctx.set_gpr(31, 0x08A58498u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0051_entry, 51u, 29u, 0x088D01E0u>(ctx, &aot_mem) && ctx.pc == 0x08A58498u) goto L_08A58498;
    return;
L_08A58498:
    { const bool branch_taken = ctx.gpr[2] == 0u;
    // nop
      if (branch_taken) {
          goto L_08A584BC;
      }
      goto L_08A584A0;
    }
L_08A584A0:
    ctx.set_gpr(2, rt.memory().aot_load32(ctx.gpr[2] + static_cast<std::uint32_t>(16)));
    ctx.set_gpr(1, static_cast<std::int32_t>(ctx.gpr[2]) < 4 ? 1u : 0u);
    { const bool branch_taken = ctx.gpr[1] != 0u;
    // nop
      if (branch_taken) {
          goto L_08A584BC;
      }
      goto L_08A584B0;
    }
L_08A584B0:
    ctx.set_gpr(16, 0u + static_cast<std::uint32_t>(1));
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_08A584D0;
      }
      goto L_08A584BC;
    }
L_08A584BC:
    ctx.set_gpr(17, ctx.gpr[17] + static_cast<std::uint32_t>(1));
    goto L_08A584C0;
L_08A584C0:
    ctx.set_gpr(2, rt.memory().aot_load16(ctx.gpr[21] + static_cast<std::uint32_t>(62)));
    ctx.set_gpr(2, static_cast<std::int32_t>(ctx.gpr[17]) < static_cast<std::int32_t>(ctx.gpr[2]) ? 1u : 0u);
    { const bool branch_taken = ctx.gpr[2] != 0u;
    // nop
      if (branch_taken) {
          goto L_08A5846C;
      }
      goto L_08A584D0;
    }
L_08A584D0:
    ctx.set_gpr(19, 0u + static_cast<std::uint32_t>(1));
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_08A5850C;
      }
      goto L_08A584DC;
    }
L_08A584DC:
    ctx.set_gpr(2, rt.memory().aot_load32(ctx.gpr[21] + static_cast<std::uint32_t>(32)));
    ctx.set_gpr(3, ctx.gpr[19] << 2u);
    ctx.set_gpr(2, rt.memory().aot_load32(ctx.gpr[2] + static_cast<std::uint32_t>(16)));
    ctx.set_gpr(2, ctx.gpr[2] + ctx.gpr[3]);
    ctx.set_gpr(2, rt.memory().aot_load32(ctx.gpr[2] + static_cast<std::uint32_t>(0)));
    ctx.set_gpr(2, rt.memory().aot_load32(ctx.gpr[2] + static_cast<std::uint32_t>(16)));
    ctx.set_gpr(2, rt.memory().aot_load32(ctx.gpr[2] + static_cast<std::uint32_t>(0)));
    ctx.set_gpr(2, rt.memory().aot_load32(ctx.gpr[2] + static_cast<std::uint32_t>(12)));
    { const bool branch_taken = ctx.gpr[2] != 0u;
    // nop
      if (branch_taken) {
          goto L_08A58508;
      }
      goto L_08A58504;
    }
L_08A58504:
    ctx.set_gpr(18, ctx.gpr[19] + 0u);
    goto L_08A58508;
L_08A58508:
    ctx.set_gpr(19, ctx.gpr[19] + static_cast<std::uint32_t>(1));
    goto L_08A5850C;
L_08A5850C:
    ctx.set_gpr(2, rt.memory().aot_load16(ctx.gpr[21] + static_cast<std::uint32_t>(62)));
    ctx.set_gpr(2, static_cast<std::int32_t>(ctx.gpr[19]) < static_cast<std::int32_t>(ctx.gpr[2]) ? 1u : 0u);
    { const bool branch_taken = ctx.gpr[2] != 0u;
    // nop
      if (branch_taken) {
          goto L_08A584DC;
      }
      goto L_08A5851C;
    }
L_08A5851C:
    ctx.set_gpr(19, ctx.gpr[18] + 0u);
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_08A5854C;
      }
      goto L_08A58528;
    }
L_08A58528:
    ctx.set_gpr(2, rt.memory().aot_load32(ctx.gpr[21] + static_cast<std::uint32_t>(32)));
    ctx.set_gpr(3, ctx.gpr[18] << 2u);
    ctx.set_gpr(2, rt.memory().aot_load32(ctx.gpr[2] + static_cast<std::uint32_t>(16)));
    ctx.set_gpr(2, ctx.gpr[2] + ctx.gpr[3]);
    ctx.set_gpr(5, rt.memory().aot_load32(ctx.gpr[2] + static_cast<std::uint32_t>(0)));
    ctx.set_gpr(4, rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(92)));
    ctx.set_gpr(31, 0x08A58548u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0081_entry, 81u, 305u, 0x08949578u>(ctx, &aot_mem) && ctx.pc == 0x08A58548u) goto L_08A58548;
    return;
L_08A58548:
    ctx.set_gpr(18, ctx.gpr[18] + static_cast<std::uint32_t>(1));
    goto L_08A5854C;
L_08A5854C:
    ctx.set_gpr(3, rt.memory().aot_load16(ctx.gpr[21] + static_cast<std::uint32_t>(62)));
    ctx.set_gpr(2, static_cast<std::int32_t>(ctx.gpr[18]) < static_cast<std::int32_t>(ctx.gpr[3]) ? 1u : 0u);
    { const bool branch_taken = ctx.gpr[2] != 0u;
    // nop
      if (branch_taken) {
          goto L_08A58528;
      }
      goto L_08A5855C;
    }
L_08A5855C:
    ctx.set_gpr(2, ctx.gpr[3] - ctx.gpr[19]);
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(56), ctx.gpr[2]);
    ctx.set_gpr(4, rt.memory().aot_load32(ctx.gpr[21] + static_cast<std::uint32_t>(68)));
    ctx.set_gpr(5, ctx.gpr[2] + 0u);
    ctx.set_gpr(31, 0x08A58574u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0081_entry, 81u, 312u, 0x089495E8u>(ctx, &aot_mem) && ctx.pc == 0x08A58574u) goto L_08A58574;
    return;
L_08A58574:
    ctx.set_gpr(18, 0u + 0u);
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_08A58614;
      }
      goto L_08A58580;
    }
L_08A58580:
    ctx.set_gpr(4, ctx.gpr[21] + 0u);
    ctx.set_gpr(31, 0x08A5858Cu);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0081_entry, 81u, 41u, 0x0894835Cu>(ctx, &aot_mem) && ctx.pc == 0x08A5858Cu) goto L_08A5858C;
    return;
L_08A5858C:
    ctx.set_gpr(4, ctx.gpr[2] + 0u);
    ctx.set_gpr(31, 0x08A58598u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0047_entry, 47u, 534u, 0x088C2F6Cu>(ctx, &aot_mem) && ctx.pc == 0x08A58598u) goto L_08A58598;
    return;
L_08A58598:
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(88), ctx.gpr[2]);
    ctx.set_gpr(17, rt.memory().aot_load32(ctx.gpr[21] + static_cast<std::uint32_t>(68)));
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(60), ctx.gpr[2]);
    ctx.set_gpr(4, ctx.gpr[2] + 0u);
    { const bool branch_taken = ctx.gpr[2] == 0u;
    // nop
      if (branch_taken) {
          goto L_08A585B8;
      }
      goto L_08A585B0;
    }
L_08A585B0:
    ctx.set_gpr(31, 0x08A585B8u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0014_entry, 14u, 274u, 0x0883D588u>(ctx, &aot_mem) && ctx.pc == 0x08A585B8u) goto L_08A585B8;
    return;
L_08A585B8:
    ctx.set_gpr(3, ctx.gpr[18] << 2u);
    ctx.set_gpr(2, rt.memory().aot_load32(ctx.gpr[17] + static_cast<std::uint32_t>(16)));
    ctx.set_gpr(2, ctx.gpr[2] + ctx.gpr[3]);
    ctx.set_gpr(4, rt.memory().aot_load32(ctx.gpr[2] + static_cast<std::uint32_t>(0)));
    { const bool branch_taken = ctx.gpr[4] == 0u;
    // nop
      if (branch_taken) {
          goto L_08A585D8;
      }
      goto L_08A585D0;
    }
L_08A585D0:
    ctx.set_gpr(31, 0x08A585D8u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0014_entry, 14u, 257u, 0x0883D454u>(ctx, &aot_mem) && ctx.pc == 0x08A585D8u) goto L_08A585D8;
    return;
L_08A585D8:
    ctx.set_gpr(4, ctx.gpr[17] + 0u);
    ctx.set_gpr(5, ctx.gpr[18] + 0u);
    ctx.set_gpr(6, ctx.gpr[29] + static_cast<std::uint32_t>(60));
    ctx.set_gpr(31, 0x08A585ECu);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0051_entry, 51u, 23u, 0x088D019Cu>(ctx, &aot_mem) && ctx.pc == 0x08A585ECu) goto L_08A585EC;
    return;
L_08A585EC:
    ctx.set_gpr(4, ctx.gpr[29] + static_cast<std::uint32_t>(88));
    ctx.set_gpr(5, 0u + 0u);
    ctx.set_gpr(31, 0x08A585FCu);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0085_entry, 85u, 61u, 0x089584C4u>(ctx, &aot_mem) && ctx.pc == 0x08A585FCu) goto L_08A585FC;
    return;
L_08A585FC:
    ctx.set_gpr(4, rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(88)));
    { const bool branch_taken = ctx.gpr[4] == 0u;
    // nop
      if (branch_taken) {
          goto L_08A58610;
      }
      goto L_08A58608;
    }
L_08A58608:
    ctx.set_gpr(31, 0x08A58610u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0014_entry, 14u, 257u, 0x0883D454u>(ctx, &aot_mem) && ctx.pc == 0x08A58610u) goto L_08A58610;
    return;
L_08A58610:
    ctx.set_gpr(18, ctx.gpr[18] + static_cast<std::uint32_t>(1));
    goto L_08A58614;
L_08A58614:
    ctx.set_gpr(2, rt.memory().aot_load16(ctx.gpr[21] + static_cast<std::uint32_t>(62)));
    ctx.set_gpr(3, ctx.gpr[2] - ctx.gpr[19]);
    ctx.set_gpr(2, static_cast<std::int32_t>(ctx.gpr[18]) < static_cast<std::int32_t>(ctx.gpr[3]) ? 1u : 0u);
    { const bool branch_taken = ctx.gpr[2] != 0u;
    // nop
      if (branch_taken) {
          goto L_08A58580;
      }
      goto L_08A58628;
    }
L_08A58628:
    ctx.set_gpr(30, ctx.gpr[3] << 2u);
    ctx.set_gpr(4, ctx.gpr[21] + 0u);
    ctx.set_gpr(31, 0x08A58638u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0081_entry, 81u, 41u, 0x0894835Cu>(ctx, &aot_mem) && ctx.pc == 0x08A58638u) goto L_08A58638;
    return;
L_08A58638:
    ctx.set_gpr(4, ctx.gpr[2] + 0u);
    ctx.set_gpr(31, 0x08A58644u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0047_entry, 47u, 298u, 0x088C1B10u>(ctx, &aot_mem) && ctx.pc == 0x08A58644u) goto L_08A58644;
    return;
L_08A58644:
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(84), ctx.gpr[2]);
    ctx.set_gpr(4, ctx.gpr[21] + 0u);
    ctx.set_gpr(31, 0x08A58654u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0081_entry, 81u, 41u, 0x0894835Cu>(ctx, &aot_mem) && ctx.pc == 0x08A58654u) goto L_08A58654;
    return;
L_08A58654:
    ctx.set_gpr(4, ctx.gpr[2] + 0u);
    ctx.set_gpr(31, 0x08A58660u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0047_entry, 47u, 194u, 0x088C11E0u>(ctx, &aot_mem) && ctx.pc == 0x08A58660u) goto L_08A58660;
    return;
L_08A58660:
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(80), ctx.gpr[2]);
    ctx.set_gpr(17, ctx.gpr[16] & 255u);
    ctx.set_gpr(2, 0u + static_cast<std::uint32_t>(1));
    { const bool branch_taken = ctx.gpr[17] != ctx.gpr[2];
    // nop
      if (branch_taken) {
          goto L_08A586A4;
      }
      goto L_08A58674;
    }
L_08A58674:
    ctx.set_gpr(4, rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(84)));
    ctx.set_gpr(5, 0u + static_cast<std::uint32_t>(4));
    ctx.set_gpr(25, rt.memory().aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(0)));
    ctx.set_gpr(25, rt.memory().aot_load32(ctx.gpr[25] + static_cast<std::uint32_t>(136)));
    jump_target = ctx.gpr[25];
    ctx.set_gpr(31, 0x08A5868Cu);
    // nop
    ctx.pc = jump_target;
    if (rt.invoke_chained_call(ctx, &aot_mem) && ctx.pc == 0x08A5868Cu) goto L_08A5868C;
    return;
L_08A5868C:
    ctx.set_gpr(4, rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(84)));
    ctx.set_gpr(5, 0u + static_cast<std::uint32_t>(5));
    ctx.set_gpr(25, rt.memory().aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(0)));
    ctx.set_gpr(25, rt.memory().aot_load32(ctx.gpr[25] + static_cast<std::uint32_t>(140)));
    jump_target = ctx.gpr[25];
    ctx.set_gpr(31, 0x08A586A4u);
    // nop
    ctx.pc = jump_target;
    if (rt.invoke_chained_call(ctx, &aot_mem) && ctx.pc == 0x08A586A4u) goto L_08A586A4;
    return;
L_08A586A4:
    ctx.set_gpr(4, rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(80)));
    ctx.set_gpr(5, ctx.gpr[16] + 0u);
    ctx.set_gpr(25, rt.memory().aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(0)));
    ctx.set_gpr(25, rt.memory().aot_load32(ctx.gpr[25] + static_cast<std::uint32_t>(136)));
    jump_target = ctx.gpr[25];
    ctx.set_gpr(31, 0x08A586BCu);
    // nop
    ctx.pc = jump_target;
    if (rt.invoke_chained_call(ctx, &aot_mem) && ctx.pc == 0x08A586BCu) goto L_08A586BC;
    return;
L_08A586BC:
    ctx.set_gpr(2, rt.memory().aot_load32(ctx.gpr[21] + static_cast<std::uint32_t>(68)));
    ctx.set_gpr(2, rt.memory().aot_load32(ctx.gpr[2] + static_cast<std::uint32_t>(16)));
    ctx.set_gpr(4, rt.memory().aot_load32(ctx.gpr[2] + static_cast<std::uint32_t>(0)));
    ctx.set_gpr(5, rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(80)));
    ctx.set_gpr(31, 0x08A586D4u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0081_entry, 81u, 299u, 0x089494E0u>(ctx, &aot_mem) && ctx.pc == 0x08A586D4u) goto L_08A586D4;
    return;
L_08A586D4:
    ctx.set_gpr(2, 0u + static_cast<std::uint32_t>(1));
    { const bool branch_taken = ctx.gpr[17] != ctx.gpr[2];
    // nop
      if (branch_taken) {
          goto L_08A586F8;
      }
      goto L_08A586E0;
    }
L_08A586E0:
    ctx.set_gpr(2, rt.memory().aot_load32(ctx.gpr[21] + static_cast<std::uint32_t>(68)));
    ctx.set_gpr(2, rt.memory().aot_load32(ctx.gpr[2] + static_cast<std::uint32_t>(16)));
    ctx.set_gpr(4, rt.memory().aot_load32(ctx.gpr[2] + static_cast<std::uint32_t>(0)));
    ctx.set_gpr(5, rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(84)));
    ctx.set_gpr(31, 0x08A586F8u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0081_entry, 81u, 299u, 0x089494E0u>(ctx, &aot_mem) && ctx.pc == 0x08A586F8u) goto L_08A586F8;
    return;
L_08A586F8:
    ctx.set_gpr(4, ctx.gpr[21] + 0u);
    ctx.set_gpr(31, 0x08A58704u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0081_entry, 81u, 41u, 0x0894835Cu>(ctx, &aot_mem) && ctx.pc == 0x08A58704u) goto L_08A58704;
    return;
L_08A58704:
    ctx.set_gpr(4, ctx.gpr[2] + 0u);
    ctx.set_gpr(31, 0x08A58710u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0047_entry, 47u, 618u, 0x088C368Cu>(ctx, &aot_mem) && ctx.pc == 0x08A58710u) goto L_08A58710;
    return;
L_08A58710:
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(76), ctx.gpr[2]);
    ctx.set_gpr(4, ctx.gpr[2] + 0u);
    ctx.set_gpr(5, 0u + 0u);
    ctx.set_gpr(25, rt.memory().aot_load32(ctx.gpr[2] + static_cast<std::uint32_t>(0)));
    ctx.set_gpr(25, rt.memory().aot_load32(ctx.gpr[25] + static_cast<std::uint32_t>(136)));
    jump_target = ctx.gpr[25];
    ctx.set_gpr(31, 0x08A5872Cu);
    // nop
    ctx.pc = jump_target;
    if (rt.invoke_chained_call(ctx, &aot_mem) && ctx.pc == 0x08A5872Cu) goto L_08A5872C;
    return;
L_08A5872C:
    ctx.set_gpr(2, rt.memory().aot_load32(ctx.gpr[21] + static_cast<std::uint32_t>(68)));
    ctx.set_gpr(2, rt.memory().aot_load32(ctx.gpr[2] + static_cast<std::uint32_t>(16)));
    ctx.set_gpr(4, rt.memory().aot_load32(ctx.gpr[2] + static_cast<std::uint32_t>(0)));
    ctx.set_gpr(5, rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(76)));
    ctx.set_gpr(31, 0x08A58744u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0081_entry, 81u, 299u, 0x089494E0u>(ctx, &aot_mem) && ctx.pc == 0x08A58744u) goto L_08A58744;
    return;
L_08A58744:
    ctx.set_gpr(22, 0u + 0u);
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_08A58868;
      }
      goto L_08A58750;
    }
L_08A58750:
    ctx.set_gpr(1, static_cast<std::int32_t>(ctx.gpr[20]) < static_cast<std::int32_t>(ctx.gpr[30]) ? 1u : 0u);
    { const bool branch_taken = ctx.gpr[1] == 0u;
    // nop
      if (branch_taken) {
          goto L_08A58878;
      }
      goto L_08A5875C;
    }
L_08A5875C:
    ctx.set_gpr(3, rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(92)));
    ctx.set_gpr(2, ctx.gpr[20] << 2u);
    ctx.set_gpr(3, rt.memory().aot_load32(ctx.gpr[3] + static_cast<std::uint32_t>(16)));
    ctx.set_gpr(2, ctx.gpr[3] + ctx.gpr[2]);
    ctx.set_gpr(16, rt.memory().aot_load32(ctx.gpr[2] + static_cast<std::uint32_t>(0)));
    ctx.set_gpr(2, ctx.gpr[20] + static_cast<std::uint32_t>(1));
    ctx.set_gpr(2, ctx.gpr[2] << 2u);
    ctx.set_gpr(2, ctx.gpr[3] + ctx.gpr[2]);
    ctx.set_gpr(17, rt.memory().aot_load32(ctx.gpr[2] + static_cast<std::uint32_t>(0)));
    ctx.set_gpr(2, ctx.gpr[20] + static_cast<std::uint32_t>(2));
    ctx.set_gpr(2, ctx.gpr[2] << 2u);
    ctx.set_gpr(2, ctx.gpr[3] + ctx.gpr[2]);
    ctx.set_gpr(19, rt.memory().aot_load32(ctx.gpr[2] + static_cast<std::uint32_t>(0)));
    ctx.set_gpr(2, ctx.gpr[20] + static_cast<std::uint32_t>(3));
    ctx.set_gpr(20, ctx.gpr[20] + static_cast<std::uint32_t>(4));
    ctx.set_gpr(2, ctx.gpr[2] << 2u);
    ctx.set_gpr(2, ctx.gpr[3] + ctx.gpr[2]);
    ctx.set_gpr(18, rt.memory().aot_load32(ctx.gpr[2] + static_cast<std::uint32_t>(0)));
    ctx.set_gpr(5, static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int16_t>(ctx.gpr[22]))));
    ctx.set_gpr(4, ctx.gpr[16] + 0u);
    ctx.set_gpr(25, rt.memory().aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(0)));
    ctx.set_gpr(25, rt.memory().aot_load32(ctx.gpr[25] + static_cast<std::uint32_t>(100)));
    jump_target = ctx.gpr[25];
    ctx.set_gpr(31, 0x08A587BCu);
    // nop
    ctx.pc = jump_target;
    if (rt.invoke_chained_call(ctx, &aot_mem) && ctx.pc == 0x08A587BCu) goto L_08A587BC;
    return;
L_08A587BC:
    ctx.set_gpr(2, rt.memory().aot_load32(ctx.gpr[21] + static_cast<std::uint32_t>(68)));
    ctx.set_gpr(2, rt.memory().aot_load32(ctx.gpr[2] + static_cast<std::uint32_t>(16)));
    ctx.set_gpr(4, rt.memory().aot_load32(ctx.gpr[2] + static_cast<std::uint32_t>(0)));
    ctx.set_gpr(5, ctx.gpr[16] + 0u);
    ctx.set_gpr(31, 0x08A587D4u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0081_entry, 81u, 299u, 0x089494E0u>(ctx, &aot_mem) && ctx.pc == 0x08A587D4u) goto L_08A587D4;
    return;
L_08A587D4:
    ctx.set_gpr(5, static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int16_t>(ctx.gpr[22]))));
    ctx.set_gpr(4, ctx.gpr[17] + 0u);
    ctx.set_gpr(25, rt.memory().aot_load32(ctx.gpr[17] + static_cast<std::uint32_t>(0)));
    ctx.set_gpr(25, rt.memory().aot_load32(ctx.gpr[25] + static_cast<std::uint32_t>(100)));
    jump_target = ctx.gpr[25];
    ctx.set_gpr(31, 0x08A587ECu);
    // nop
    ctx.pc = jump_target;
    if (rt.invoke_chained_call(ctx, &aot_mem) && ctx.pc == 0x08A587ECu) goto L_08A587EC;
    return;
L_08A587EC:
    ctx.set_gpr(2, rt.memory().aot_load32(ctx.gpr[21] + static_cast<std::uint32_t>(68)));
    ctx.set_gpr(2, rt.memory().aot_load32(ctx.gpr[2] + static_cast<std::uint32_t>(16)));
    ctx.set_gpr(4, rt.memory().aot_load32(ctx.gpr[2] + static_cast<std::uint32_t>(0)));
    ctx.set_gpr(5, ctx.gpr[17] + 0u);
    ctx.set_gpr(31, 0x08A58804u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0081_entry, 81u, 299u, 0x089494E0u>(ctx, &aot_mem) && ctx.pc == 0x08A58804u) goto L_08A58804;
    return;
L_08A58804:
    ctx.set_gpr(5, static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int16_t>(ctx.gpr[22]))));
    ctx.set_gpr(4, ctx.gpr[19] + 0u);
    ctx.set_gpr(25, rt.memory().aot_load32(ctx.gpr[19] + static_cast<std::uint32_t>(0)));
    ctx.set_gpr(25, rt.memory().aot_load32(ctx.gpr[25] + static_cast<std::uint32_t>(100)));
    jump_target = ctx.gpr[25];
    ctx.set_gpr(31, 0x08A5881Cu);
    // nop
    ctx.pc = jump_target;
    if (rt.invoke_chained_call(ctx, &aot_mem) && ctx.pc == 0x08A5881Cu) goto L_08A5881C;
    return;
L_08A5881C:
    ctx.set_gpr(2, rt.memory().aot_load32(ctx.gpr[21] + static_cast<std::uint32_t>(68)));
    ctx.set_gpr(2, rt.memory().aot_load32(ctx.gpr[2] + static_cast<std::uint32_t>(16)));
    ctx.set_gpr(4, rt.memory().aot_load32(ctx.gpr[2] + static_cast<std::uint32_t>(0)));
    ctx.set_gpr(5, ctx.gpr[19] + 0u);
    ctx.set_gpr(31, 0x08A58834u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0081_entry, 81u, 299u, 0x089494E0u>(ctx, &aot_mem) && ctx.pc == 0x08A58834u) goto L_08A58834;
    return;
L_08A58834:
    ctx.set_gpr(5, static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int16_t>(ctx.gpr[22]))));
    ctx.set_gpr(4, ctx.gpr[18] + 0u);
    ctx.set_gpr(25, rt.memory().aot_load32(ctx.gpr[18] + static_cast<std::uint32_t>(0)));
    ctx.set_gpr(25, rt.memory().aot_load32(ctx.gpr[25] + static_cast<std::uint32_t>(100)));
    jump_target = ctx.gpr[25];
    ctx.set_gpr(31, 0x08A5884Cu);
    // nop
    ctx.pc = jump_target;
    if (rt.invoke_chained_call(ctx, &aot_mem) && ctx.pc == 0x08A5884Cu) goto L_08A5884C;
    return;
L_08A5884C:
    ctx.set_gpr(2, rt.memory().aot_load32(ctx.gpr[21] + static_cast<std::uint32_t>(68)));
    ctx.set_gpr(2, rt.memory().aot_load32(ctx.gpr[2] + static_cast<std::uint32_t>(16)));
    ctx.set_gpr(4, rt.memory().aot_load32(ctx.gpr[2] + static_cast<std::uint32_t>(0)));
    ctx.set_gpr(5, ctx.gpr[18] + 0u);
    ctx.set_gpr(31, 0x08A58864u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0081_entry, 81u, 299u, 0x089494E0u>(ctx, &aot_mem) && ctx.pc == 0x08A58864u) goto L_08A58864;
    return;
L_08A58864:
    ctx.set_gpr(22, ctx.gpr[22] + static_cast<std::uint32_t>(1));
    goto L_08A58868;
L_08A58868:
    ctx.set_gpr(2, rt.memory().aot_load16(ctx.gpr[21] + static_cast<std::uint32_t>(60)));
    ctx.set_gpr(2, static_cast<std::int32_t>(ctx.gpr[22]) < static_cast<std::int32_t>(ctx.gpr[2]) ? 1u : 0u);
    { const bool branch_taken = ctx.gpr[2] != 0u;
    // nop
      if (branch_taken) {
          goto L_08A58750;
      }
      goto L_08A58878;
    }
L_08A58878:
    ctx.set_gpr(23, 0u + static_cast<std::uint32_t>(1));
    ctx.set_gpr(4, ctx.gpr[21] + 0u);
    ctx.set_gpr(31, 0x08A58888u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0081_entry, 81u, 41u, 0x0894835Cu>(ctx, &aot_mem) && ctx.pc == 0x08A58888u) goto L_08A58888;
    return;
L_08A58888:
    ctx.set_gpr(4, ctx.gpr[2] + 0u);
    ctx.set_gpr(31, 0x08A58894u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0047_entry, 47u, 194u, 0x088C11E0u>(ctx, &aot_mem) && ctx.pc == 0x08A58894u) goto L_08A58894;
    return;
L_08A58894:
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(72), ctx.gpr[2]);
    ctx.set_gpr(4, ctx.gpr[2] + 0u);
    ctx.set_gpr(5, ctx.gpr[23] + 0u);
    ctx.set_gpr(25, rt.memory().aot_load32(ctx.gpr[2] + static_cast<std::uint32_t>(0)));
    ctx.set_gpr(25, rt.memory().aot_load32(ctx.gpr[25] + static_cast<std::uint32_t>(136)));
    jump_target = ctx.gpr[25];
    ctx.set_gpr(31, 0x08A588B0u);
    // nop
    ctx.pc = jump_target;
    if (rt.invoke_chained_call(ctx, &aot_mem) && ctx.pc == 0x08A588B0u) goto L_08A588B0;
    return;
L_08A588B0:
    ctx.set_gpr(2, rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(56)));
    ctx.set_gpr(1, static_cast<std::int32_t>(ctx.gpr[2]) < 2 ? 1u : 0u);
    { const bool branch_taken = ctx.gpr[1] != 0u;
    // nop
      if (branch_taken) {
          goto L_08A58C98;
      }
      goto L_08A588C0;
    }
L_08A588C0:
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_08A58C8C;
      }
      goto L_08A588C8;
    }
L_08A588C8:
    ctx.set_gpr(3, rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(92)));
    ctx.set_gpr(2, ctx.gpr[20] << 2u);
    ctx.set_gpr(3, rt.memory().aot_load32(ctx.gpr[3] + static_cast<std::uint32_t>(16)));
    ctx.set_gpr(2, ctx.gpr[3] + ctx.gpr[2]);
    ctx.set_gpr(16, rt.memory().aot_load32(ctx.gpr[2] + static_cast<std::uint32_t>(0)));
    ctx.set_gpr(2, ctx.gpr[20] + static_cast<std::uint32_t>(1));
    ctx.set_gpr(2, ctx.gpr[2] << 2u);
    ctx.set_gpr(2, ctx.gpr[3] + ctx.gpr[2]);
    ctx.set_gpr(17, rt.memory().aot_load32(ctx.gpr[2] + static_cast<std::uint32_t>(0)));
    ctx.set_gpr(2, ctx.gpr[20] + static_cast<std::uint32_t>(2));
    ctx.set_gpr(2, ctx.gpr[2] << 2u);
    ctx.set_gpr(2, ctx.gpr[3] + ctx.gpr[2]);
    ctx.set_gpr(19, rt.memory().aot_load32(ctx.gpr[2] + static_cast<std::uint32_t>(0)));
    ctx.set_gpr(2, ctx.gpr[20] + static_cast<std::uint32_t>(3));
    ctx.set_gpr(20, ctx.gpr[20] + static_cast<std::uint32_t>(4));
    ctx.set_gpr(2, ctx.gpr[2] << 2u);
    ctx.set_gpr(2, ctx.gpr[3] + ctx.gpr[2]);
    ctx.set_gpr(18, rt.memory().aot_load32(ctx.gpr[2] + static_cast<std::uint32_t>(0)));
    ctx.set_gpr(4, ctx.gpr[21] + 0u);
    ctx.set_gpr(31, 0x08A5891Cu);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0081_entry, 81u, 41u, 0x0894835Cu>(ctx, &aot_mem) && ctx.pc == 0x08A5891Cu) goto L_08A5891C;
    return;
L_08A5891C:
    ctx.set_gpr(4, ctx.gpr[2] + 0u);
    ctx.set_gpr(31, 0x08A58928u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0047_entry, 47u, 298u, 0x088C1B10u>(ctx, &aot_mem) && ctx.pc == 0x08A58928u) goto L_08A58928;
    return;
L_08A58928:
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(68), ctx.gpr[2]);
    ctx.set_gpr(4, ctx.gpr[21] + 0u);
    ctx.set_gpr(31, 0x08A58938u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0081_entry, 81u, 41u, 0x0894835Cu>(ctx, &aot_mem) && ctx.pc == 0x08A58938u) goto L_08A58938;
    return;
L_08A58938:
    ctx.set_gpr(4, ctx.gpr[2] + 0u);
    ctx.set_gpr(31, 0x08A58944u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0043_entry, 43u, 170u, 0x088B1000u>(ctx, &aot_mem) && ctx.pc == 0x08A58944u) goto L_08A58944;
    return;
L_08A58944:
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(64), ctx.gpr[2]);
    ctx.set_gpr(4, ctx.gpr[21] + 0u);
    ctx.set_gpr(5, ctx.gpr[16] + 0u);
    ctx.set_gpr(6, ctx.gpr[2] + 0u);
    ctx.set_gpr(7, rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(68)));
    ctx.set_gpr(8, 0u + 0u);
    ctx.set_gpr(31, 0x08A58964u);
    // nop
    goto L_08A581AC;
L_08A58964:
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(52), ctx.gpr[2]);
    ctx.set_gpr(2, rt.memory().aot_load32(ctx.gpr[21] + static_cast<std::uint32_t>(68)));
    ctx.set_gpr(16, ctx.gpr[23] << 2u);
    ctx.set_gpr(2, rt.memory().aot_load32(ctx.gpr[2] + static_cast<std::uint32_t>(16)));
    ctx.set_gpr(2, ctx.gpr[2] + ctx.gpr[16]);
    ctx.set_gpr(4, rt.memory().aot_load32(ctx.gpr[2] + static_cast<std::uint32_t>(0)));
    ctx.set_gpr(5, rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(72)));
    ctx.set_gpr(31, 0x08A58988u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0081_entry, 81u, 299u, 0x089494E0u>(ctx, &aot_mem) && ctx.pc == 0x08A58988u) goto L_08A58988;
    return;
L_08A58988:
    ctx.set_gpr(2, rt.memory().aot_load32(ctx.gpr[21] + static_cast<std::uint32_t>(68)));
    ctx.set_gpr(2, rt.memory().aot_load32(ctx.gpr[2] + static_cast<std::uint32_t>(16)));
    ctx.set_gpr(2, ctx.gpr[2] + ctx.gpr[16]);
    ctx.set_gpr(4, rt.memory().aot_load32(ctx.gpr[2] + static_cast<std::uint32_t>(0)));
    ctx.set_gpr(5, rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(68)));
    ctx.set_gpr(31, 0x08A589A4u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0081_entry, 81u, 299u, 0x089494E0u>(ctx, &aot_mem) && ctx.pc == 0x08A589A4u) goto L_08A589A4;
    return;
L_08A589A4:
    ctx.set_gpr(2, rt.memory().aot_load32(ctx.gpr[21] + static_cast<std::uint32_t>(68)));
    ctx.set_gpr(2, rt.memory().aot_load32(ctx.gpr[2] + static_cast<std::uint32_t>(16)));
    ctx.set_gpr(2, ctx.gpr[2] + ctx.gpr[16]);
    ctx.set_gpr(4, rt.memory().aot_load32(ctx.gpr[2] + static_cast<std::uint32_t>(0)));
    ctx.set_gpr(5, rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(76)));
    ctx.set_gpr(31, 0x08A589C0u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0081_entry, 81u, 299u, 0x089494E0u>(ctx, &aot_mem) && ctx.pc == 0x08A589C0u) goto L_08A589C0;
    return;
L_08A589C0:
    ctx.set_gpr(4, rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(64)));
    ctx.set_gpr(5, 0u + 0u);
    ctx.set_gpr(25, rt.memory().aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(0)));
    ctx.set_gpr(25, rt.memory().aot_load32(ctx.gpr[25] + static_cast<std::uint32_t>(100)));
    jump_target = ctx.gpr[25];
    ctx.set_gpr(31, 0x08A589D8u);
    // nop
    ctx.pc = jump_target;
    if (rt.invoke_chained_call(ctx, &aot_mem) && ctx.pc == 0x08A589D8u) goto L_08A589D8;
    return;
L_08A589D8:
    ctx.set_gpr(2, rt.memory().aot_load32(ctx.gpr[21] + static_cast<std::uint32_t>(68)));
    ctx.set_gpr(2, rt.memory().aot_load32(ctx.gpr[2] + static_cast<std::uint32_t>(16)));
    ctx.set_gpr(2, ctx.gpr[2] + ctx.gpr[16]);
    ctx.set_gpr(4, rt.memory().aot_load32(ctx.gpr[2] + static_cast<std::uint32_t>(0)));
    ctx.set_gpr(5, rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(64)));
    ctx.set_gpr(31, 0x08A589F4u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0081_entry, 81u, 299u, 0x089494E0u>(ctx, &aot_mem) && ctx.pc == 0x08A589F4u) goto L_08A589F4;
    return;
L_08A589F4:
    ctx.set_gpr(4, ctx.gpr[17] + 0u);
    ctx.set_gpr(5, 0u + 0u);
    ctx.set_gpr(25, rt.memory().aot_load32(ctx.gpr[17] + static_cast<std::uint32_t>(0)));
    ctx.set_gpr(25, rt.memory().aot_load32(ctx.gpr[25] + static_cast<std::uint32_t>(100)));
    jump_target = ctx.gpr[25];
    ctx.set_gpr(31, 0x08A58A0Cu);
    // nop
    ctx.pc = jump_target;
    if (rt.invoke_chained_call(ctx, &aot_mem) && ctx.pc == 0x08A58A0Cu) goto L_08A58A0C;
    return;
L_08A58A0C:
    ctx.set_gpr(2, rt.memory().aot_load32(ctx.gpr[21] + static_cast<std::uint32_t>(68)));
    ctx.set_gpr(2, rt.memory().aot_load32(ctx.gpr[2] + static_cast<std::uint32_t>(16)));
    ctx.set_gpr(2, ctx.gpr[2] + ctx.gpr[16]);
    ctx.set_gpr(4, rt.memory().aot_load32(ctx.gpr[2] + static_cast<std::uint32_t>(0)));
    ctx.set_gpr(5, ctx.gpr[17] + 0u);
    ctx.set_gpr(31, 0x08A58A28u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0081_entry, 81u, 299u, 0x089494E0u>(ctx, &aot_mem) && ctx.pc == 0x08A58A28u) goto L_08A58A28;
    return;
L_08A58A28:
    ctx.set_gpr(4, ctx.gpr[19] + 0u);
    ctx.set_gpr(5, 0u + 0u);
    ctx.set_gpr(25, rt.memory().aot_load32(ctx.gpr[19] + static_cast<std::uint32_t>(0)));
    ctx.set_gpr(25, rt.memory().aot_load32(ctx.gpr[25] + static_cast<std::uint32_t>(100)));
    jump_target = ctx.gpr[25];
    ctx.set_gpr(31, 0x08A58A40u);
    // nop
    ctx.pc = jump_target;
    if (rt.invoke_chained_call(ctx, &aot_mem) && ctx.pc == 0x08A58A40u) goto L_08A58A40;
    return;
L_08A58A40:
    ctx.set_gpr(2, rt.memory().aot_load32(ctx.gpr[21] + static_cast<std::uint32_t>(68)));
    ctx.set_gpr(2, rt.memory().aot_load32(ctx.gpr[2] + static_cast<std::uint32_t>(16)));
    ctx.set_gpr(2, ctx.gpr[2] + ctx.gpr[16]);
    ctx.set_gpr(4, rt.memory().aot_load32(ctx.gpr[2] + static_cast<std::uint32_t>(0)));
    ctx.set_gpr(5, ctx.gpr[19] + 0u);
    ctx.set_gpr(31, 0x08A58A5Cu);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0081_entry, 81u, 299u, 0x089494E0u>(ctx, &aot_mem) && ctx.pc == 0x08A58A5Cu) goto L_08A58A5C;
    return;
L_08A58A5C:
    ctx.set_gpr(4, ctx.gpr[18] + 0u);
    ctx.set_gpr(5, 0u + 0u);
    ctx.set_gpr(25, rt.memory().aot_load32(ctx.gpr[18] + static_cast<std::uint32_t>(0)));
    ctx.set_gpr(25, rt.memory().aot_load32(ctx.gpr[25] + static_cast<std::uint32_t>(100)));
    jump_target = ctx.gpr[25];
    ctx.set_gpr(31, 0x08A58A74u);
    // nop
    ctx.pc = jump_target;
    if (rt.invoke_chained_call(ctx, &aot_mem) && ctx.pc == 0x08A58A74u) goto L_08A58A74;
    return;
L_08A58A74:
    ctx.set_gpr(2, rt.memory().aot_load32(ctx.gpr[21] + static_cast<std::uint32_t>(68)));
    ctx.set_gpr(2, rt.memory().aot_load32(ctx.gpr[2] + static_cast<std::uint32_t>(16)));
    ctx.set_gpr(2, ctx.gpr[2] + ctx.gpr[16]);
    ctx.set_gpr(4, rt.memory().aot_load32(ctx.gpr[2] + static_cast<std::uint32_t>(0)));
    ctx.set_gpr(5, ctx.gpr[18] + 0u);
    ctx.set_gpr(31, 0x08A58A90u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0081_entry, 81u, 299u, 0x089494E0u>(ctx, &aot_mem) && ctx.pc == 0x08A58A90u) goto L_08A58A90;
    return;
L_08A58A90:
    ctx.set_gpr(22, 0u + static_cast<std::uint32_t>(1));
    ctx.set_gpr(1, static_cast<std::int32_t>(ctx.gpr[20]) < static_cast<std::int32_t>(ctx.gpr[30]) ? 1u : 0u);
    { const bool branch_taken = ctx.gpr[1] == 0u;
    // nop
      if (branch_taken) {
          goto L_08A58C60;
      }
      goto L_08A58AA0;
    }
L_08A58AA0:
    ctx.set_gpr(3, 0u + static_cast<std::uint32_t>(9));
    ctx.set_gpr(2, rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(52)));
    { const bool branch_taken = ctx.gpr[2] == ctx.gpr[3];
    // nop
      if (branch_taken) {
          goto L_08A58C60;
      }
      goto L_08A58AB0;
    }
L_08A58AB0:
    ctx.set_gpr(2, rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(92)));
    ctx.set_gpr(3, ctx.gpr[20] << 2u);
    ctx.set_gpr(2, rt.memory().aot_load32(ctx.gpr[2] + static_cast<std::uint32_t>(16)));
    ctx.set_gpr(2, ctx.gpr[2] + ctx.gpr[3]);
    ctx.set_gpr(16, rt.memory().aot_load32(ctx.gpr[2] + static_cast<std::uint32_t>(0)));
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_08A58C1C;
      }
      goto L_08A58ACC;
    }
L_08A58ACC:
    ctx.set_gpr(3, rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(92)));
    ctx.set_gpr(2, ctx.gpr[20] << 2u);
    ctx.set_gpr(3, rt.memory().aot_load32(ctx.gpr[3] + static_cast<std::uint32_t>(16)));
    ctx.set_gpr(2, ctx.gpr[3] + ctx.gpr[2]);
    ctx.set_gpr(16, rt.memory().aot_load32(ctx.gpr[2] + static_cast<std::uint32_t>(0)));
    ctx.set_gpr(2, ctx.gpr[20] + static_cast<std::uint32_t>(1));
    ctx.set_gpr(2, ctx.gpr[2] << 2u);
    ctx.set_gpr(2, ctx.gpr[3] + ctx.gpr[2]);
    ctx.set_gpr(17, rt.memory().aot_load32(ctx.gpr[2] + static_cast<std::uint32_t>(0)));
    ctx.set_gpr(2, ctx.gpr[20] + static_cast<std::uint32_t>(2));
    ctx.set_gpr(2, ctx.gpr[2] << 2u);
    ctx.set_gpr(2, ctx.gpr[3] + ctx.gpr[2]);
    ctx.set_gpr(19, rt.memory().aot_load32(ctx.gpr[2] + static_cast<std::uint32_t>(0)));
    ctx.set_gpr(2, ctx.gpr[20] + static_cast<std::uint32_t>(3));
    ctx.set_gpr(20, ctx.gpr[20] + static_cast<std::uint32_t>(4));
    ctx.set_gpr(2, ctx.gpr[2] << 2u);
    ctx.set_gpr(2, ctx.gpr[3] + ctx.gpr[2]);
    ctx.set_gpr(18, rt.memory().aot_load32(ctx.gpr[2] + static_cast<std::uint32_t>(0)));
    ctx.set_gpr(5, static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int16_t>(ctx.gpr[22]))));
    ctx.set_gpr(4, ctx.gpr[16] + 0u);
    ctx.set_gpr(25, rt.memory().aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(0)));
    ctx.set_gpr(25, rt.memory().aot_load32(ctx.gpr[25] + static_cast<std::uint32_t>(100)));
    jump_target = ctx.gpr[25];
    ctx.set_gpr(31, 0x08A58B2Cu);
    // nop
    ctx.pc = jump_target;
    if (rt.invoke_chained_call(ctx, &aot_mem) && ctx.pc == 0x08A58B2Cu) goto L_08A58B2C;
    return;
L_08A58B2C:
    ctx.set_gpr(3, rt.memory().aot_load32(ctx.gpr[21] + static_cast<std::uint32_t>(68)));
    ctx.set_gpr(2, ctx.gpr[23] << 2u);
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(48), ctx.gpr[2]);
    ctx.set_gpr(3, rt.memory().aot_load32(ctx.gpr[3] + static_cast<std::uint32_t>(16)));
    ctx.set_gpr(2, ctx.gpr[3] + ctx.gpr[2]);
    ctx.set_gpr(4, rt.memory().aot_load32(ctx.gpr[2] + static_cast<std::uint32_t>(0)));
    ctx.set_gpr(5, ctx.gpr[16] + 0u);
    ctx.set_gpr(31, 0x08A58B50u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0081_entry, 81u, 299u, 0x089494E0u>(ctx, &aot_mem) && ctx.pc == 0x08A58B50u) goto L_08A58B50;
    return;
L_08A58B50:
    ctx.set_gpr(5, static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int16_t>(ctx.gpr[22]))));
    ctx.set_gpr(4, ctx.gpr[17] + 0u);
    ctx.set_gpr(25, rt.memory().aot_load32(ctx.gpr[17] + static_cast<std::uint32_t>(0)));
    ctx.set_gpr(25, rt.memory().aot_load32(ctx.gpr[25] + static_cast<std::uint32_t>(100)));
    jump_target = ctx.gpr[25];
    ctx.set_gpr(31, 0x08A58B68u);
    // nop
    ctx.pc = jump_target;
    if (rt.invoke_chained_call(ctx, &aot_mem) && ctx.pc == 0x08A58B68u) goto L_08A58B68;
    return;
L_08A58B68:
    ctx.set_gpr(2, rt.memory().aot_load32(ctx.gpr[21] + static_cast<std::uint32_t>(68)));
    ctx.set_gpr(3, rt.memory().aot_load32(ctx.gpr[2] + static_cast<std::uint32_t>(16)));
    ctx.set_gpr(2, rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(48)));
    ctx.set_gpr(2, ctx.gpr[3] + ctx.gpr[2]);
    ctx.set_gpr(4, rt.memory().aot_load32(ctx.gpr[2] + static_cast<std::uint32_t>(0)));
    ctx.set_gpr(5, ctx.gpr[17] + 0u);
    ctx.set_gpr(31, 0x08A58B88u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0081_entry, 81u, 299u, 0x089494E0u>(ctx, &aot_mem) && ctx.pc == 0x08A58B88u) goto L_08A58B88;
    return;
L_08A58B88:
    ctx.set_gpr(5, static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int16_t>(ctx.gpr[22]))));
    ctx.set_gpr(4, ctx.gpr[19] + 0u);
    ctx.set_gpr(25, rt.memory().aot_load32(ctx.gpr[19] + static_cast<std::uint32_t>(0)));
    ctx.set_gpr(25, rt.memory().aot_load32(ctx.gpr[25] + static_cast<std::uint32_t>(100)));
    jump_target = ctx.gpr[25];
    ctx.set_gpr(31, 0x08A58BA0u);
    // nop
    ctx.pc = jump_target;
    if (rt.invoke_chained_call(ctx, &aot_mem) && ctx.pc == 0x08A58BA0u) goto L_08A58BA0;
    return;
L_08A58BA0:
    ctx.set_gpr(2, rt.memory().aot_load32(ctx.gpr[21] + static_cast<std::uint32_t>(68)));
    ctx.set_gpr(3, rt.memory().aot_load32(ctx.gpr[2] + static_cast<std::uint32_t>(16)));
    ctx.set_gpr(2, rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(48)));
    ctx.set_gpr(2, ctx.gpr[3] + ctx.gpr[2]);
    ctx.set_gpr(4, rt.memory().aot_load32(ctx.gpr[2] + static_cast<std::uint32_t>(0)));
    ctx.set_gpr(5, ctx.gpr[19] + 0u);
    ctx.set_gpr(31, 0x08A58BC0u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0081_entry, 81u, 299u, 0x089494E0u>(ctx, &aot_mem) && ctx.pc == 0x08A58BC0u) goto L_08A58BC0;
    return;
L_08A58BC0:
    ctx.set_gpr(5, static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int16_t>(ctx.gpr[22]))));
    ctx.set_gpr(4, ctx.gpr[18] + 0u);
    ctx.set_gpr(25, rt.memory().aot_load32(ctx.gpr[18] + static_cast<std::uint32_t>(0)));
    ctx.set_gpr(25, rt.memory().aot_load32(ctx.gpr[25] + static_cast<std::uint32_t>(100)));
    jump_target = ctx.gpr[25];
    ctx.set_gpr(31, 0x08A58BD8u);
    // nop
    ctx.pc = jump_target;
    if (rt.invoke_chained_call(ctx, &aot_mem) && ctx.pc == 0x08A58BD8u) goto L_08A58BD8;
    return;
L_08A58BD8:
    ctx.set_gpr(2, rt.memory().aot_load32(ctx.gpr[21] + static_cast<std::uint32_t>(68)));
    ctx.set_gpr(3, rt.memory().aot_load32(ctx.gpr[2] + static_cast<std::uint32_t>(16)));
    ctx.set_gpr(2, rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(48)));
    ctx.set_gpr(2, ctx.gpr[3] + ctx.gpr[2]);
    ctx.set_gpr(4, rt.memory().aot_load32(ctx.gpr[2] + static_cast<std::uint32_t>(0)));
    ctx.set_gpr(5, ctx.gpr[18] + 0u);
    ctx.set_gpr(31, 0x08A58BF8u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0081_entry, 81u, 299u, 0x089494E0u>(ctx, &aot_mem) && ctx.pc == 0x08A58BF8u) goto L_08A58BF8;
    return;
L_08A58BF8:
    ctx.set_gpr(1, static_cast<std::int32_t>(ctx.gpr[20]) < static_cast<std::int32_t>(ctx.gpr[30]) ? 1u : 0u);
    { const bool branch_taken = ctx.gpr[1] == 0u;
    // nop
      if (branch_taken) {
          goto L_08A58C18;
      }
      goto L_08A58C04;
    }
L_08A58C04:
    ctx.set_gpr(2, rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(92)));
    ctx.set_gpr(3, ctx.gpr[20] << 2u);
    ctx.set_gpr(2, rt.memory().aot_load32(ctx.gpr[2] + static_cast<std::uint32_t>(16)));
    ctx.set_gpr(2, ctx.gpr[2] + ctx.gpr[3]);
    ctx.set_gpr(16, rt.memory().aot_load32(ctx.gpr[2] + static_cast<std::uint32_t>(0)));
    goto L_08A58C18;
L_08A58C18:
    ctx.set_gpr(22, ctx.gpr[22] + static_cast<std::uint32_t>(1));
    goto L_08A58C1C;
L_08A58C1C:
    ctx.set_gpr(2, rt.memory().aot_load16(ctx.gpr[21] + static_cast<std::uint32_t>(60)));
    ctx.set_gpr(1, static_cast<std::int32_t>(ctx.gpr[22]) < static_cast<std::int32_t>(ctx.gpr[2]) ? 1u : 0u);
    { const bool branch_taken = ctx.gpr[1] == 0u;
    // nop
      if (branch_taken) {
          goto L_08A58C60;
      }
      goto L_08A58C2C;
    }
L_08A58C2C:
    ctx.set_gpr(1, static_cast<std::int32_t>(ctx.gpr[20]) < static_cast<std::int32_t>(ctx.gpr[30]) ? 1u : 0u);
    { const bool branch_taken = ctx.gpr[1] == 0u;
    // nop
      if (branch_taken) {
          goto L_08A58C60;
      }
      goto L_08A58C38;
    }
L_08A58C38:
    ctx.set_gpr(4, ctx.gpr[21] + 0u);
    ctx.set_gpr(5, ctx.gpr[16] + 0u);
    ctx.set_gpr(6, 0u + 0u);
    ctx.set_gpr(7, 0u + 0u);
    ctx.set_gpr(8, 0u + static_cast<std::uint32_t>(1));
    ctx.set_gpr(31, 0x08A58C54u);
    // nop
    goto L_08A581AC;
L_08A58C54:
    ctx.set_gpr(3, rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(52)));
    { const bool branch_taken = ctx.gpr[3] == ctx.gpr[2];
    // nop
      if (branch_taken) {
          goto L_08A58ACC;
      }
      goto L_08A58C60;
    }
L_08A58C60:
    ctx.set_gpr(23, ctx.gpr[23] + static_cast<std::uint32_t>(1));
    ctx.set_gpr(4, rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(64)));
    { const bool branch_taken = ctx.gpr[4] == 0u;
    // nop
      if (branch_taken) {
          goto L_08A58C78;
      }
      goto L_08A58C70;
    }
L_08A58C70:
    ctx.set_gpr(31, 0x08A58C78u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0014_entry, 14u, 257u, 0x0883D454u>(ctx, &aot_mem) && ctx.pc == 0x08A58C78u) goto L_08A58C78;
    return;
L_08A58C78:
    ctx.set_gpr(4, rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(68)));
    { const bool branch_taken = ctx.gpr[4] == 0u;
    // nop
      if (branch_taken) {
          goto L_08A58C8C;
      }
      goto L_08A58C84;
    }
L_08A58C84:
    ctx.set_gpr(31, 0x08A58C8Cu);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0014_entry, 14u, 257u, 0x0883D454u>(ctx, &aot_mem) && ctx.pc == 0x08A58C8Cu) goto L_08A58C8C;
    return;
L_08A58C8C:
    ctx.set_gpr(2, static_cast<std::int32_t>(ctx.gpr[20]) < static_cast<std::int32_t>(ctx.gpr[30]) ? 1u : 0u);
    { const bool branch_taken = ctx.gpr[2] != 0u;
    // nop
      if (branch_taken) {
          goto L_08A588C8;
      }
      goto L_08A58C98;
    }
L_08A58C98:
    ctx.set_gpr(4, rt.memory().aot_load32(ctx.gpr[21] + static_cast<std::uint32_t>(68)));
    ctx.set_gpr(5, ctx.gpr[23] + 0u);
    ctx.set_gpr(31, 0x08A58CA8u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0081_entry, 81u, 312u, 0x089495E8u>(ctx, &aot_mem) && ctx.pc == 0x08A58CA8u) goto L_08A58CA8;
    return;
L_08A58CA8:
    ctx.set_gpr(3, 0u + static_cast<std::uint32_t>(1));
    rt.memory().aot_store8(ctx.gpr[21] + static_cast<std::uint32_t>(64), static_cast<std::uint8_t>(ctx.gpr[3]));
    ctx.set_gpr(4, rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(72)));
    { const bool branch_taken = ctx.gpr[4] == 0u;
    // nop
      if (branch_taken) {
          goto L_08A58CC4;
      }
      goto L_08A58CBC;
    }
L_08A58CBC:
    ctx.set_gpr(31, 0x08A58CC4u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0014_entry, 14u, 257u, 0x0883D454u>(ctx, &aot_mem) && ctx.pc == 0x08A58CC4u) goto L_08A58CC4;
    return;
L_08A58CC4:
    ctx.set_gpr(4, rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(76)));
    { const bool branch_taken = ctx.gpr[4] == 0u;
    // nop
      if (branch_taken) {
          goto L_08A58CD8;
      }
      goto L_08A58CD0;
    }
L_08A58CD0:
    ctx.set_gpr(31, 0x08A58CD8u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0014_entry, 14u, 257u, 0x0883D454u>(ctx, &aot_mem) && ctx.pc == 0x08A58CD8u) goto L_08A58CD8;
    return;
L_08A58CD8:
    ctx.set_gpr(4, rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(80)));
    { const bool branch_taken = ctx.gpr[4] == 0u;
    // nop
      if (branch_taken) {
          goto L_08A58CEC;
      }
      goto L_08A58CE4;
    }
L_08A58CE4:
    ctx.set_gpr(31, 0x08A58CECu);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0014_entry, 14u, 257u, 0x0883D454u>(ctx, &aot_mem) && ctx.pc == 0x08A58CECu) goto L_08A58CEC;
    return;
L_08A58CEC:
    ctx.set_gpr(4, rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(84)));
    { const bool branch_taken = ctx.gpr[4] == 0u;
    // nop
      if (branch_taken) {
          goto L_08A58D00;
      }
      goto L_08A58CF8;
    }
L_08A58CF8:
    ctx.set_gpr(31, 0x08A58D00u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0014_entry, 14u, 257u, 0x0883D454u>(ctx, &aot_mem) && ctx.pc == 0x08A58D00u) goto L_08A58D00;
    return;
L_08A58D00:
    ctx.set_gpr(4, rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(92)));
    { const bool branch_taken = ctx.gpr[4] == 0u;
    // nop
      if (branch_taken) {
          goto L_08A58D14;
      }
      goto L_08A58D0C;
    }
L_08A58D0C:
    ctx.set_gpr(31, 0x08A58D14u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0014_entry, 14u, 257u, 0x0883D454u>(ctx, &aot_mem) && ctx.pc == 0x08A58D14u) goto L_08A58D14;
    return;
L_08A58D14:
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
    ctx.set_gpr(29, ctx.gpr[29] + static_cast<std::uint32_t>(96));
    jump_target = ctx.gpr[31];
    // nop
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_08A58D48:
    ctx.set_gpr(29, ctx.gpr[29] + static_cast<std::uint32_t>(-16));
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(12), ctx.gpr[31]);
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(8), ctx.gpr[17]);
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(4), ctx.gpr[16]);
    ctx.set_gpr(17, ctx.gpr[4] + 0u);
    ctx.set_gpr(16, ctx.gpr[5] + 0u);
    { const bool branch_taken = ctx.gpr[17] == 0u;
    // nop
      if (branch_taken) {
          goto L_08A58DB0;
      }
      goto L_08A58D68;
    }
L_08A58D68:
    ctx.set_gpr(4, rt.memory().aot_load32(ctx.gpr[17] + static_cast<std::uint32_t>(0)));
    { const bool branch_taken = ctx.gpr[4] == 0u;
    // nop
      if (branch_taken) {
          goto L_08A58D98;
      }
      goto L_08A58D74;
    }
L_08A58D74:
    ctx.set_gpr(2, rt.memory().aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(4)));
    ctx.set_gpr(2, ctx.gpr[2] + static_cast<std::uint32_t>(-1));
    rt.memory().aot_store32(ctx.gpr[4] + static_cast<std::uint32_t>(4), ctx.gpr[2]);
    ctx.set_gpr(2, ctx.gpr[2] << 10u);
    ctx.set_gpr(2, ctx.gpr[2] >> 10u);
    { const bool branch_taken = ctx.gpr[2] != 0u;
    // nop
      if (branch_taken) {
          goto L_08A58D98;
      }
      goto L_08A58D90;
    }
L_08A58D90:
    ctx.set_gpr(31, 0x08A58D98u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0080_entry, 80u, 556u, 0x089467C8u>(ctx, &aot_mem) && ctx.pc == 0x08A58D98u) goto L_08A58D98;
    return;
L_08A58D98:
    ctx.set_gpr(2, static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int16_t>(ctx.gpr[16]))));
    { const bool branch_taken = static_cast<std::int32_t>(ctx.gpr[2]) <= 0;
    // nop
      if (branch_taken) {
          goto L_08A58DB0;
      }
      goto L_08A58DA4;
    }
L_08A58DA4:
    ctx.set_gpr(4, ctx.gpr[17] + 0u);
    ctx.set_gpr(31, 0x08A58DB0u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0000_entry, 0u, 201u, 0x08804D84u>(ctx, &aot_mem) && ctx.pc == 0x08A58DB0u) goto L_08A58DB0;
    return;
L_08A58DB0:
    ctx.set_gpr(2, ctx.gpr[17] + 0u);
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
L_08A58DCC:
    ctx.set_gpr(2, rt.memory().aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(16)));
    { const bool branch_taken = ctx.gpr[2] == 0u;
    // nop
      if (branch_taken) {
          goto L_08A58DE4;
      }
      goto L_08A58DD8;
    }
L_08A58DD8:
    ctx.set_gpr(2, rt.memory().aot_load32(ctx.gpr[2] + static_cast<std::uint32_t>(8)));
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_08A58DE8;
      }
      goto L_08A58DE4;
    }
L_08A58DE4:
    ctx.set_gpr(2, 0u + 0u);
    goto L_08A58DE8;
L_08A58DE8:
    jump_target = ctx.gpr[31];
    // nop
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_08A58DF0:
    ctx.set_gpr(29, ctx.gpr[29] + static_cast<std::uint32_t>(-16));
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(12), ctx.gpr[31]);
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(8), ctx.gpr[18]);
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(4), ctx.gpr[17]);
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(0), ctx.gpr[16]);
    ctx.set_gpr(18, ctx.gpr[4] + 0u);
    ctx.set_gpr(25, rt.memory().aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(0)));
    ctx.set_gpr(25, rt.memory().aot_load32(ctx.gpr[25] + static_cast<std::uint32_t>(92)));
    jump_target = ctx.gpr[25];
    ctx.set_gpr(31, 0x08A58E18u);
    // nop
    ctx.pc = jump_target;
    if (rt.invoke_chained_call(ctx, &aot_mem) && ctx.pc == 0x08A58E18u) goto L_08A58E18;
    return;
L_08A58E18:
    ctx.set_gpr(17, ctx.gpr[2] + 0u);
    ctx.set_gpr(16, 0u + 0u);
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_08A58E70;
      }
      goto L_08A58E28;
    }
L_08A58E28:
    ctx.set_gpr(4, ctx.gpr[18] + 0u);
    ctx.set_gpr(5, ctx.gpr[16] + 0u);
    ctx.set_gpr(25, rt.memory().aot_load32(ctx.gpr[18] + static_cast<std::uint32_t>(0)));
    ctx.set_gpr(25, rt.memory().aot_load32(ctx.gpr[25] + static_cast<std::uint32_t>(96)));
    jump_target = ctx.gpr[25];
    ctx.set_gpr(31, 0x08A58E40u);
    // nop
    ctx.pc = jump_target;
    if (rt.invoke_chained_call(ctx, &aot_mem) && ctx.pc == 0x08A58E40u) goto L_08A58E40;
    return;
L_08A58E40:
    { const bool branch_taken = ctx.gpr[2] == 0u;
    // nop
      if (branch_taken) {
          goto L_08A58E6C;
      }
      goto L_08A58E48;
    }
L_08A58E48:
    ctx.set_gpr(4, ctx.gpr[2] + 0u);
    ctx.set_gpr(31, 0x08A58E54u);
    // nop
    goto L_08A58DF0;
L_08A58E54:
    ctx.set_gpr(1, static_cast<std::int32_t>(ctx.gpr[2]) < static_cast<std::int32_t>(ctx.gpr[17]) ? 1u : 0u);
    { const bool branch_taken = ctx.gpr[1] == 0u;
    // nop
      if (branch_taken) {
          goto L_08A58E68;
      }
      goto L_08A58E60;
    }
L_08A58E60:
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_08A58E6C;
      }
      goto L_08A58E68;
    }
L_08A58E68:
    ctx.set_gpr(17, ctx.gpr[2] + 0u);
    goto L_08A58E6C;
L_08A58E6C:
    ctx.set_gpr(16, ctx.gpr[16] + static_cast<std::uint32_t>(1));
    goto L_08A58E70;
L_08A58E70:
    ctx.set_gpr(4, ctx.gpr[18] + 0u);
    ctx.set_gpr(25, rt.memory().aot_load32(ctx.gpr[18] + static_cast<std::uint32_t>(0)));
    ctx.set_gpr(25, rt.memory().aot_load32(ctx.gpr[25] + static_cast<std::uint32_t>(92)));
    jump_target = ctx.gpr[25];
    ctx.set_gpr(31, 0x08A58E84u);
    // nop
    ctx.pc = jump_target;
    if (rt.invoke_chained_call(ctx, &aot_mem) && ctx.pc == 0x08A58E84u) goto L_08A58E84;
    return;
L_08A58E84:
    ctx.set_gpr(2, static_cast<std::int32_t>(ctx.gpr[16]) < static_cast<std::int32_t>(ctx.gpr[2]) ? 1u : 0u);
    { const bool branch_taken = ctx.gpr[2] != 0u;
    // nop
      if (branch_taken) {
          goto L_08A58E28;
      }
      goto L_08A58E90;
    }
L_08A58E90:
    ctx.set_gpr(2, ctx.gpr[17] + 0u);
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
L_08A58EB0:
    ctx.set_gpr(2, rt.memory().aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(16)));
    ctx.set_gpr(3, ctx.gpr[5] << 2u);
    ctx.set_gpr(2, rt.memory().aot_load32(ctx.gpr[2] + static_cast<std::uint32_t>(16)));
    ctx.set_gpr(2, ctx.gpr[2] + ctx.gpr[3]);
    ctx.set_gpr(2, rt.memory().aot_load32(ctx.gpr[2] + static_cast<std::uint32_t>(0)));
    jump_target = ctx.gpr[31];
    // nop
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_08A58ECC:
    ctx.set_gpr(29, ctx.gpr[29] + static_cast<std::uint32_t>(-16));
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(12), ctx.gpr[31]);
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(8), ctx.gpr[18]);
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(4), ctx.gpr[17]);
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(0), ctx.gpr[16]);
    ctx.set_gpr(17, ctx.gpr[5] + 0u);
    ctx.set_gpr(16, rt.memory().aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(16)));
    { const bool branch_taken = ctx.gpr[16] == 0u;
    // nop
      if (branch_taken) {
          goto L_08A58F3C;
      }
      goto L_08A58EF0;
    }
L_08A58EF0:
    ctx.set_gpr(18, rt.memory().aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(8)));
    ctx.set_gpr(2, rt.memory().aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(12)));
    ctx.set_gpr(1, static_cast<std::int32_t>(ctx.gpr[18]) < static_cast<std::int32_t>(ctx.gpr[2]) ? 1u : 0u);
    { const bool branch_taken = ctx.gpr[1] == 0u;
    // nop
      if (branch_taken) {
          goto L_08A58F18;
      }
      goto L_08A58F04;
    }
L_08A58F04:
    ctx.set_gpr(2, rt.memory().aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(8)));
    ctx.set_gpr(2, ctx.gpr[2] + static_cast<std::uint32_t>(1));
    rt.memory().aot_store32(ctx.gpr[16] + static_cast<std::uint32_t>(8), ctx.gpr[2]);
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_08A58F2C;
      }
      goto L_08A58F18;
    }
L_08A58F18:
    ctx.set_gpr(5, ctx.gpr[18] + static_cast<std::uint32_t>(1));
    ctx.set_gpr(4, ctx.gpr[16] + 0u);
    ctx.set_gpr(6, 0u + static_cast<std::uint32_t>(4));
    ctx.set_gpr(31, 0x08A58F2Cu);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0066_entry, 66u, 795u, 0x0890FB1Cu>(ctx, &aot_mem) && ctx.pc == 0x08A58F2Cu) goto L_08A58F2C;
    return;
L_08A58F2C:
    ctx.set_gpr(3, ctx.gpr[18] << 2u);
    ctx.set_gpr(2, rt.memory().aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(16)));
    ctx.set_gpr(2, ctx.gpr[2] + ctx.gpr[3]);
    rt.memory().aot_store32(ctx.gpr[2] + static_cast<std::uint32_t>(0), ctx.gpr[17]);
    goto L_08A58F3C;
L_08A58F3C:
    ctx.set_gpr(2, 0u + static_cast<std::uint32_t>(1));
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
L_08A58F5C:
    ctx.set_gpr(29, ctx.gpr[29] + static_cast<std::uint32_t>(-32));
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(12), ctx.gpr[31]);
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(8), ctx.gpr[16]);
    ctx.set_gpr(2, rt.memory().aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(16)));
    { const bool branch_taken = ctx.gpr[2] == 0u;
    // nop
      if (branch_taken) {
          goto L_08A58FC8;
      }
      goto L_08A58F74;
    }
L_08A58F74:
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(28), ctx.gpr[5]);
    ctx.set_gpr(16, rt.memory().aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(16)));
    ctx.set_gpr(4, ctx.gpr[16] + 0u);
    ctx.set_gpr(5, ctx.gpr[29] + static_cast<std::uint32_t>(28));
    ctx.set_gpr(6, 0u + 0u);
    ctx.set_gpr(31, 0x08A58F90u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0018_entry, 18u, 462u, 0x0884D888u>(ctx, &aot_mem) && ctx.pc == 0x08A58F90u) goto L_08A58F90;
    return;
L_08A58F90:
    { const bool branch_taken = static_cast<std::int32_t>(ctx.gpr[2]) < 0;
    // nop
      if (branch_taken) {
          goto L_08A58FB4;
      }
      goto L_08A58F98;
    }
L_08A58F98:
    ctx.set_gpr(4, ctx.gpr[16] + 0u);
    ctx.set_gpr(5, ctx.gpr[2] + 0u);
    ctx.set_gpr(31, 0x08A58FA8u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0067_entry, 67u, 9u, 0x089100E0u>(ctx, &aot_mem) && ctx.pc == 0x08A58FA8u) goto L_08A58FA8;
    return;
L_08A58FA8:
    ctx.set_gpr(2, 0u + 0u);
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_08A58FB8;
      }
      goto L_08A58FB4;
    }
L_08A58FB4:
    ctx.set_gpr(2, 0u + static_cast<std::uint32_t>(1));
    goto L_08A58FB8;
L_08A58FB8:
    ctx.set_gpr(2, ctx.gpr[2] ^ 0u);
    ctx.set_gpr(2, ctx.gpr[2] < static_cast<std::uint32_t>(1) ? 1u : 0u);
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_08A58FCC;
      }
      goto L_08A58FC8;
    }
L_08A58FC8:
    ctx.set_gpr(2, 0u + 0u);
    goto L_08A58FCC;
L_08A58FCC:
    ctx.set_gpr(31, rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(12)));
    ctx.set_gpr(16, rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(8)));
    ctx.set_gpr(29, ctx.gpr[29] + static_cast<std::uint32_t>(32));
    jump_target = ctx.gpr[31];
    // nop
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_08A58FE0:
    ctx.set_gpr(29, ctx.gpr[29] + static_cast<std::uint32_t>(-16));
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(12), ctx.gpr[31]);
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(8), ctx.gpr[17]);
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(4), ctx.gpr[16]);
    ctx.set_gpr(16, ctx.gpr[4] + 0u);
    ctx.set_gpr(3, 2229u << 16u);
    ctx.set_gpr(3, rt.memory().aot_load32(ctx.gpr[3] + static_cast<std::uint32_t>(22708)));
    ctx.set_gpr(5, ctx.gpr[5] & ctx.gpr[3]);
    ctx.set_gpr(4, rt.memory().aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(20)));
    ctx.set_gpr(3, ctx.gpr[5] & ctx.gpr[4]);
    { const bool branch_taken = ctx.gpr[5] == ctx.gpr[3];
    // nop
      if (branch_taken) {
          goto L_08A59070;
      }
      goto L_08A59010;
    }
L_08A59010:
    ctx.set_gpr(2, ctx.gpr[4] | ctx.gpr[5]);
    rt.memory().aot_store32(ctx.gpr[16] + static_cast<std::uint32_t>(20), ctx.gpr[2]);
    ctx.set_gpr(17, 0u + 0u);
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_08A59050;
      }
      goto L_08A59024;
    }
L_08A59024:
    ctx.set_gpr(4, ctx.gpr[16] + 0u);
    ctx.set_gpr(5, ctx.gpr[17] + 0u);
    ctx.set_gpr(25, rt.memory().aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(0)));
    ctx.set_gpr(25, rt.memory().aot_load32(ctx.gpr[25] + static_cast<std::uint32_t>(96)));
    jump_target = ctx.gpr[25];
    ctx.set_gpr(31, 0x08A5903Cu);
    // nop
    ctx.pc = jump_target;
    if (rt.invoke_chained_call(ctx, &aot_mem) && ctx.pc == 0x08A5903Cu) goto L_08A5903C;
    return;
L_08A5903C:
    ctx.set_gpr(5, rt.memory().aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(20)));
    ctx.set_gpr(4, ctx.gpr[2] + 0u);
    ctx.set_gpr(31, 0x08A5904Cu);
    // nop
    goto L_08A58FE0;
L_08A5904C:
    ctx.set_gpr(17, ctx.gpr[17] + static_cast<std::uint32_t>(1));
    goto L_08A59050;
L_08A59050:
    ctx.set_gpr(4, ctx.gpr[16] + 0u);
    ctx.set_gpr(25, rt.memory().aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(0)));
    ctx.set_gpr(25, rt.memory().aot_load32(ctx.gpr[25] + static_cast<std::uint32_t>(92)));
    jump_target = ctx.gpr[25];
    ctx.set_gpr(31, 0x08A59064u);
    // nop
    ctx.pc = jump_target;
    if (rt.invoke_chained_call(ctx, &aot_mem) && ctx.pc == 0x08A59064u) goto L_08A59064;
    return;
L_08A59064:
    ctx.set_gpr(3, static_cast<std::int32_t>(ctx.gpr[17]) < static_cast<std::int32_t>(ctx.gpr[2]) ? 1u : 0u);
    { const bool branch_taken = ctx.gpr[3] != 0u;
    // nop
      if (branch_taken) {
          goto L_08A59024;
      }
      goto L_08A59070;
    }
L_08A59070:
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
L_08A59088:
    ctx.set_gpr(29, ctx.gpr[29] + static_cast<std::uint32_t>(-16));
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(12), ctx.gpr[31]);
    ctx.set_gpr(31, 0x08A59098u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0080_entry, 80u, 429u, 0x08945EBCu>(ctx, &aot_mem) && ctx.pc == 0x08A59098u) goto L_08A59098;
    return;
L_08A59098:
    ctx.set_gpr(31, rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(12)));
    ctx.set_gpr(29, ctx.gpr[29] + static_cast<std::uint32_t>(16));
    jump_target = ctx.gpr[31];
    // nop
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_08A590A8:
    ctx.set_gpr(29, ctx.gpr[29] + static_cast<std::uint32_t>(-16));
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(12), ctx.gpr[31]);
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(8), ctx.gpr[17]);
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(4), ctx.gpr[16]);
    ctx.set_gpr(17, ctx.gpr[4] + 0u);
    ctx.set_gpr(16, ctx.gpr[5] + 0u);
    ctx.set_gpr(31, 0x08A590C8u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0080_entry, 80u, 428u, 0x08945EB4u>(ctx, &aot_mem) && ctx.pc == 0x08A590C8u) goto L_08A590C8;
    return;
L_08A590C8:
    { const bool branch_taken = ctx.gpr[16] != 0u;
    // nop
      if (branch_taken) {
          goto L_08A59100;
      }
      goto L_08A590D0;
    }
L_08A590D0:
    ctx.set_gpr(4, ctx.gpr[17] + 0u);
    ctx.set_gpr(25, rt.memory().aot_load32(ctx.gpr[17] + static_cast<std::uint32_t>(0)));
    ctx.set_gpr(25, rt.memory().aot_load32(ctx.gpr[25] + static_cast<std::uint32_t>(120)));
    jump_target = ctx.gpr[25];
    ctx.set_gpr(31, 0x08A590E4u);
    // nop
    ctx.pc = jump_target;
    if (rt.invoke_chained_call(ctx, &aot_mem) && ctx.pc == 0x08A590E4u) goto L_08A590E4;
    return;
L_08A590E4:
    ctx.set_gpr(4, ctx.gpr[17] + 0u);
    ctx.set_gpr(5, ctx.gpr[2] + 0u);
    ctx.set_gpr(6, 0u + static_cast<std::uint32_t>(1));
    ctx.set_gpr(25, rt.memory().aot_load32(ctx.gpr[17] + static_cast<std::uint32_t>(0)));
    ctx.set_gpr(25, rt.memory().aot_load32(ctx.gpr[25] + static_cast<std::uint32_t>(112)));
    jump_target = ctx.gpr[25];
    ctx.set_gpr(31, 0x08A59100u);
    // nop
    ctx.pc = jump_target;
    if (rt.invoke_chained_call(ctx, &aot_mem) && ctx.pc == 0x08A59100u) goto L_08A59100;
    return;
L_08A59100:
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
L_08A59118:
    ctx.set_gpr(2, 0u + 0u);
    jump_target = ctx.gpr[31];
    // nop
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_08A59124:
    ctx.set_gpr(29, ctx.gpr[29] + static_cast<std::uint32_t>(-32));
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(28), ctx.gpr[31]);
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(24), ctx.gpr[20]);
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(20), ctx.gpr[19]);
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(16), ctx.gpr[18]);
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(12), ctx.gpr[17]);
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(8), ctx.gpr[16]);
    ctx.set_gpr(20, ctx.gpr[4] + 0u);
    ctx.set_gpr(19, ctx.gpr[5] + 0u);
    ctx.set_gpr(18, ctx.gpr[6] + 0u);
    ctx.set_gpr(5, ctx.gpr[18] + 0u);
    ctx.set_gpr(31, 0x08A59158u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0080_entry, 80u, 857u, 0x08947F8Cu>(ctx, &aot_mem) && ctx.pc == 0x08A59158u) goto L_08A59158;
    return;
L_08A59158:
    { const bool branch_taken = ctx.gpr[2] == 0u;
    // nop
      if (branch_taken) {
          goto L_08A591C8;
      }
      goto L_08A59160;
    }
L_08A59160:
    ctx.set_gpr(3, rt.memory().aot_load32(ctx.gpr[20] + static_cast<std::uint32_t>(8)));
    ctx.set_gpr(2, 0u + static_cast<std::uint32_t>(-2));
    ctx.set_gpr(4, ctx.gpr[3] & ctx.gpr[2]);
    { const bool branch_taken = ctx.gpr[4] == 0u;
    // nop
      if (branch_taken) {
          goto L_08A59180;
      }
      goto L_08A59174;
    }
L_08A59174:
    ctx.set_gpr(2, ctx.gpr[4] + 0u);
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_08A59188;
      }
      goto L_08A59180;
    }
L_08A59180:
    ctx.set_gpr(2, 2225u << 16u);
    ctx.set_gpr(2, ctx.gpr[2] + static_cast<std::uint32_t>(8240));
    goto L_08A59188;
L_08A59188:
    { const bool branch_taken = ctx.gpr[2] == 0u;
    // nop
      if (branch_taken) {
          goto L_08A591C8;
      }
      goto L_08A59190;
    }
L_08A59190:
    { const bool branch_taken = ctx.gpr[4] == 0u;
    // nop
      if (branch_taken) {
          goto L_08A591A0;
      }
      goto L_08A59198;
    }
L_08A59198:
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_08A591A8;
      }
      goto L_08A591A0;
    }
L_08A591A0:
    ctx.set_gpr(4, 2225u << 16u);
    ctx.set_gpr(4, ctx.gpr[4] + static_cast<std::uint32_t>(8240));
    goto L_08A591A8;
L_08A591A8:
    ctx.set_gpr(5, ctx.gpr[19] + 0u);
    ctx.set_gpr(31, 0x08A591B4u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0004_entry, 4u, 480u, 0x08816610u>(ctx, &aot_mem) && ctx.pc == 0x08A591B4u) goto L_08A591B4;
    return;
L_08A591B4:
    { const bool branch_taken = ctx.gpr[2] != 0u;
    // nop
      if (branch_taken) {
          goto L_08A591C8;
      }
      goto L_08A591BC;
    }
L_08A591BC:
    ctx.set_gpr(2, ctx.gpr[20] + 0u);
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_08A59254;
      }
      goto L_08A591C8;
    }
L_08A591C8:
    ctx.set_gpr(4, ctx.gpr[20] + 0u);
    ctx.set_gpr(2, 2246u << 16u);
    ctx.set_gpr(5, rt.memory().aot_load32(ctx.gpr[2] + static_cast<std::uint32_t>(-24288)));
    ctx.set_gpr(31, 0x08A591DCu);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0080_entry, 80u, 857u, 0x08947F8Cu>(ctx, &aot_mem) && ctx.pc == 0x08A591DCu) goto L_08A591DC;
    return;
L_08A591DC:
    { const bool branch_taken = ctx.gpr[2] == 0u;
    // nop
      if (branch_taken) {
          goto L_08A59250;
      }
      goto L_08A591E4;
    }
L_08A591E4:
    ctx.set_gpr(2, rt.memory().aot_load32(ctx.gpr[20] + static_cast<std::uint32_t>(28)));
    { const bool branch_taken = ctx.gpr[2] == 0u;
    // nop
      if (branch_taken) {
          goto L_08A591FC;
      }
      goto L_08A591F0;
    }
L_08A591F0:
    ctx.set_gpr(16, rt.memory().aot_load32(ctx.gpr[2] + static_cast<std::uint32_t>(8)));
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_08A59200;
      }
      goto L_08A591FC;
    }
L_08A591FC:
    ctx.set_gpr(16, 0u + 0u);
    goto L_08A59200;
L_08A59200:
    ctx.set_gpr(17, 0u + 0u);
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_08A59244;
      }
      goto L_08A5920C;
    }
L_08A5920C:
    ctx.set_gpr(2, rt.memory().aot_load32(ctx.gpr[20] + static_cast<std::uint32_t>(28)));
    ctx.set_gpr(3, ctx.gpr[17] << 2u);
    ctx.set_gpr(2, rt.memory().aot_load32(ctx.gpr[2] + static_cast<std::uint32_t>(16)));
    ctx.set_gpr(2, ctx.gpr[2] + ctx.gpr[3]);
    ctx.set_gpr(4, rt.memory().aot_load32(ctx.gpr[2] + static_cast<std::uint32_t>(0)));
    ctx.set_gpr(5, ctx.gpr[19] + 0u);
    ctx.set_gpr(6, ctx.gpr[18] + 0u);
    ctx.set_gpr(31, 0x08A59230u);
    // nop
    goto L_08A59124;
L_08A59230:
    { const bool branch_taken = ctx.gpr[2] == 0u;
    // nop
      if (branch_taken) {
          goto L_08A59240;
      }
      goto L_08A59238;
    }
L_08A59238:
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_08A59254;
      }
      goto L_08A59240;
    }
L_08A59240:
    ctx.set_gpr(17, ctx.gpr[17] + static_cast<std::uint32_t>(1));
    goto L_08A59244;
L_08A59244:
    ctx.set_gpr(2, ctx.gpr[17] < ctx.gpr[16] ? 1u : 0u);
    { const bool branch_taken = ctx.gpr[2] != 0u;
    // nop
      if (branch_taken) {
          goto L_08A5920C;
      }
      goto L_08A59250;
    }
L_08A59250:
    ctx.set_gpr(2, 0u + 0u);
    goto L_08A59254;
L_08A59254:
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
L_08A59278:
    ctx.set_gpr(29, ctx.gpr[29] + static_cast<std::uint32_t>(-48));
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(28), ctx.gpr[31]);
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(24), ctx.gpr[19]);
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(20), ctx.gpr[18]);
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(16), ctx.gpr[17]);
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(12), ctx.gpr[16]);
    ctx.set_gpr(19, ctx.gpr[4] + 0u);
    ctx.set_gpr(18, ctx.gpr[5] + 0u);
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(44), ctx.gpr[19]);
    { const bool branch_taken = ctx.gpr[19] == 0u;
    // nop
      if (branch_taken) {
          goto L_08A592B0;
      }
      goto L_08A592A4;
    }
L_08A592A4:
    ctx.set_gpr(2, rt.memory().aot_load32(ctx.gpr[19] + static_cast<std::uint32_t>(4)));
    ctx.set_gpr(2, ctx.gpr[2] + static_cast<std::uint32_t>(1));
    rt.memory().aot_store32(ctx.gpr[19] + static_cast<std::uint32_t>(4), ctx.gpr[2]);
    goto L_08A592B0;
L_08A592B0:
    ctx.set_gpr(4, ctx.gpr[19] + 0u);
    ctx.set_gpr(25, rt.memory().aot_load32(ctx.gpr[19] + static_cast<std::uint32_t>(0)));
    ctx.set_gpr(25, rt.memory().aot_load32(ctx.gpr[25] + static_cast<std::uint32_t>(92)));
    jump_target = ctx.gpr[25];
    ctx.set_gpr(31, 0x08A592C4u);
    // nop
    ctx.pc = jump_target;
    if (rt.invoke_chained_call(ctx, &aot_mem) && ctx.pc == 0x08A592C4u) goto L_08A592C4;
    return;
L_08A592C4:
    ctx.set_gpr(17, ctx.gpr[2] + static_cast<std::uint32_t>(-1));
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_08A59334;
      }
      goto L_08A592D0;
    }
L_08A592D0:
    ctx.set_gpr(4, ctx.gpr[19] + 0u);
    ctx.set_gpr(5, ctx.gpr[17] + 0u);
    ctx.set_gpr(25, rt.memory().aot_load32(ctx.gpr[19] + static_cast<std::uint32_t>(0)));
    ctx.set_gpr(25, rt.memory().aot_load32(ctx.gpr[25] + static_cast<std::uint32_t>(96)));
    jump_target = ctx.gpr[25];
    ctx.set_gpr(31, 0x08A592E8u);
    // nop
    ctx.pc = jump_target;
    if (rt.invoke_chained_call(ctx, &aot_mem) && ctx.pc == 0x08A592E8u) goto L_08A592E8;
    return;
L_08A592E8:
    ctx.set_gpr(16, ctx.gpr[2] + 0u);
    ctx.set_gpr(4, rt.memory().aot_load32(ctx.gpr[2] + static_cast<std::uint32_t>(28)));
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(40), ctx.gpr[19]);
    ctx.set_gpr(5, ctx.gpr[29] + static_cast<std::uint32_t>(40));
    ctx.set_gpr(6, 0u + 0u);
    ctx.set_gpr(31, 0x08A59304u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0018_entry, 18u, 462u, 0x0884D888u>(ctx, &aot_mem) && ctx.pc == 0x08A59304u) goto L_08A59304;
    return;
L_08A59304:
    ctx.set_gpr(4, ctx.gpr[16] + 0u);
    ctx.set_gpr(5, ctx.gpr[2] + 0u);
    ctx.set_gpr(6, ctx.gpr[18] + 0u);
    ctx.set_gpr(25, rt.memory().aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(0)));
    ctx.set_gpr(25, rt.memory().aot_load32(ctx.gpr[25] + static_cast<std::uint32_t>(140)));
    jump_target = ctx.gpr[25];
    ctx.set_gpr(31, 0x08A59320u);
    // nop
    ctx.pc = jump_target;
    if (rt.invoke_chained_call(ctx, &aot_mem) && ctx.pc == 0x08A59320u) goto L_08A59320;
    return;
L_08A59320:
    ctx.set_gpr(4, ctx.gpr[16] + 0u);
    ctx.set_gpr(5, ctx.gpr[19] + 0u);
    ctx.set_gpr(31, 0x08A59330u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0145_entry, 145u, 253u, 0x08A493B8u>(ctx, &aot_mem) && ctx.pc == 0x08A59330u) goto L_08A59330;
    return;
L_08A59330:
    ctx.set_gpr(17, ctx.gpr[17] + static_cast<std::uint32_t>(-1));
    goto L_08A59334;
L_08A59334:
    { const bool branch_taken = static_cast<std::int32_t>(ctx.gpr[17]) >= 0;
    // nop
      if (branch_taken) {
          goto L_08A592D0;
      }
      goto L_08A5933C;
    }
L_08A5933C:
    ctx.set_gpr(4, ctx.gpr[18] + 0u);
    ctx.set_gpr(5, ctx.gpr[19] + 0u);
    ctx.set_gpr(31, 0x08A5934Cu);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0145_entry, 145u, 207u, 0x08A49074u>(ctx, &aot_mem) && ctx.pc == 0x08A5934Cu) goto L_08A5934C;
    return;
L_08A5934C:
    ctx.set_gpr(4, rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(44)));
    { const bool branch_taken = ctx.gpr[4] == 0u;
    // nop
      if (branch_taken) {
          goto L_08A59360;
      }
      goto L_08A59358;
    }
L_08A59358:
    ctx.set_gpr(31, 0x08A59360u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0014_entry, 14u, 257u, 0x0883D454u>(ctx, &aot_mem) && ctx.pc == 0x08A59360u) goto L_08A59360;
    return;
L_08A59360:
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
L_08A59380:
    ctx.set_gpr(29, ctx.gpr[29] + static_cast<std::uint32_t>(-16));
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(12), ctx.gpr[31]);
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(8), ctx.gpr[16]);
    ctx.set_gpr(16, ctx.gpr[4] + 0u);
    ctx.set_gpr(31, 0x08A59398u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0080_entry, 80u, 433u, 0x08945EE4u>(ctx, &aot_mem) && ctx.pc == 0x08A59398u) goto L_08A59398;
    return;
L_08A59398:
    ctx.set_gpr(4, ctx.gpr[16] + 0u);
    ctx.set_gpr(25, rt.memory().aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(0)));
    ctx.set_gpr(25, rt.memory().aot_load32(ctx.gpr[25] + static_cast<std::uint32_t>(88)));
    jump_target = ctx.gpr[25];
    ctx.set_gpr(31, 0x08A593ACu);
    // nop
    ctx.pc = jump_target;
    if (rt.invoke_chained_call(ctx, &aot_mem) && ctx.pc == 0x08A593ACu) goto L_08A593AC;
    return;
L_08A593AC:
    ctx.set_gpr(3, rt.memory().aot_load32(ctx.gpr[2] + static_cast<std::uint32_t>(8)));
    rt.memory().aot_store32(ctx.gpr[16] + static_cast<std::uint32_t>(24), ctx.gpr[3]);
    ctx.set_gpr(31, rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(12)));
    ctx.set_gpr(16, rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(8)));
    ctx.set_gpr(29, ctx.gpr[29] + static_cast<std::uint32_t>(16));
    jump_target = ctx.gpr[31];
    // nop
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_08A593C8:
    ctx.set_gpr(29, ctx.gpr[29] + static_cast<std::uint32_t>(-16));
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(12), ctx.gpr[31]);
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(8), ctx.gpr[16]);
    ctx.set_gpr(16, ctx.gpr[4] + 0u);
    ctx.set_gpr(31, 0x08A593E0u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0080_entry, 80u, 438u, 0x08945F0Cu>(ctx, &aot_mem) && ctx.pc == 0x08A593E0u) goto L_08A593E0;
    return;
L_08A593E0:
    ctx.set_gpr(4, ctx.gpr[16] + 0u);
    ctx.set_gpr(25, rt.memory().aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(0)));
    ctx.set_gpr(25, rt.memory().aot_load32(ctx.gpr[25] + static_cast<std::uint32_t>(88)));
    jump_target = ctx.gpr[25];
    ctx.set_gpr(31, 0x08A593F4u);
    // nop
    ctx.pc = jump_target;
    if (rt.invoke_chained_call(ctx, &aot_mem) && ctx.pc == 0x08A593F4u) goto L_08A593F4;
    return;
L_08A593F4:
    ctx.set_gpr(3, rt.memory().aot_load32(ctx.gpr[2] + static_cast<std::uint32_t>(8)));
    rt.memory().aot_store32(ctx.gpr[16] + static_cast<std::uint32_t>(24), ctx.gpr[3]);
    ctx.set_gpr(31, rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(12)));
    ctx.set_gpr(16, rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(8)));
    ctx.set_gpr(29, ctx.gpr[29] + static_cast<std::uint32_t>(16));
    jump_target = ctx.gpr[31];
    // nop
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_08A59410:
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
    ctx.set_gpr(20, ctx.gpr[4] + 0u);
    ctx.set_gpr(19, ctx.gpr[5] + 0u);
    ctx.set_gpr(18, ctx.gpr[6] + 0u);
    ctx.set_gpr(17, ctx.gpr[7] + 0u);
    ctx.set_gpr(23, ctx.gpr[8] + 0u);
    ctx.set_gpr(16, 0u + 0u);
    ctx.set_gpr(21, 0u + static_cast<std::uint32_t>(1));
    ctx.set_gpr(2, 0u < ctx.gpr[19] ? 1u : 0u);
    ctx.set_gpr(2, ctx.gpr[2] ^ 1u);
    { const bool branch_taken = ctx.gpr[2] != 0u;
    // nop
      if (branch_taken) {
          goto L_08A594A4;
      }
      goto L_08A59464;
    }
L_08A59464:
    { const bool branch_taken = ctx.gpr[23] == 0u;
    // nop
      if (branch_taken) {
          goto L_08A5948C;
      }
      goto L_08A5946C;
    }
L_08A5946C:
    ctx.set_gpr(25, rt.memory().aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(0)));
    ctx.set_gpr(25, rt.memory().aot_load32(ctx.gpr[25] + static_cast<std::uint32_t>(88)));
    jump_target = ctx.gpr[25];
    ctx.set_gpr(31, 0x08A5947Cu);
    // nop
    ctx.pc = jump_target;
    if (rt.invoke_chained_call(ctx, &aot_mem) && ctx.pc == 0x08A5947Cu) goto L_08A5947C;
    return;
L_08A5947C:
    ctx.set_gpr(2, ctx.gpr[19] ^ ctx.gpr[2]);
    ctx.set_gpr(2, ctx.gpr[2] < static_cast<std::uint32_t>(1) ? 1u : 0u);
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_08A59498;
      }
      goto L_08A5948C;
    }
L_08A5948C:
    ctx.set_gpr(31, 0x08A59494u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0080_entry, 80u, 857u, 0x08947F8Cu>(ctx, &aot_mem) && ctx.pc == 0x08A59494u) goto L_08A59494;
    return;
L_08A59494:
    ctx.set_gpr(2, ctx.gpr[2] & 255u);
    goto L_08A59498;
L_08A59498:
    { const bool branch_taken = ctx.gpr[2] != 0u;
    // nop
      if (branch_taken) {
          goto L_08A594A4;
      }
      goto L_08A594A0;
    }
L_08A594A0:
    ctx.set_gpr(21, 0u + 0u);
    goto L_08A594A4;
L_08A594A4:
    { const bool branch_taken = ctx.gpr[21] == 0u;
    // nop
      if (branch_taken) {
          goto L_08A5954C;
      }
      goto L_08A594AC;
    }
L_08A594AC:
    ctx.set_gpr(21, 0u + 0u);
    { const bool branch_taken = ctx.gpr[18] != 0u;
    // nop
      if (branch_taken) {
          goto L_08A594C4;
      }
      goto L_08A594B8;
    }
L_08A594B8:
    ctx.set_gpr(21, ctx.gpr[20] + 0u);
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_08A5952C;
      }
      goto L_08A594C4;
    }
L_08A594C4:
    { const bool branch_taken = ctx.gpr[18] == 0u;
    // nop
      if (branch_taken) {
          goto L_08A5952C;
      }
      goto L_08A594CC;
    }
L_08A594CC:
    ctx.set_gpr(3, rt.memory().aot_load32(ctx.gpr[20] + static_cast<std::uint32_t>(8)));
    ctx.set_gpr(2, 0u + static_cast<std::uint32_t>(-2));
    ctx.set_gpr(5, ctx.gpr[3] & ctx.gpr[2]);
    { const bool branch_taken = ctx.gpr[5] == 0u;
    // nop
      if (branch_taken) {
          goto L_08A594EC;
      }
      goto L_08A594E0;
    }
L_08A594E0:
    ctx.set_gpr(2, ctx.gpr[5] + 0u);
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_08A594F4;
      }
      goto L_08A594EC;
    }
L_08A594EC:
    ctx.set_gpr(2, 2225u << 16u);
    ctx.set_gpr(2, ctx.gpr[2] + static_cast<std::uint32_t>(8240));
    goto L_08A594F4;
L_08A594F4:
    { const bool branch_taken = ctx.gpr[2] == 0u;
    // nop
      if (branch_taken) {
          goto L_08A5952C;
      }
      goto L_08A594FC;
    }
L_08A594FC:
    { const bool branch_taken = ctx.gpr[5] == 0u;
    // nop
      if (branch_taken) {
          goto L_08A5950C;
      }
      goto L_08A59504;
    }
L_08A59504:
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_08A59514;
      }
      goto L_08A5950C;
    }
L_08A5950C:
    ctx.set_gpr(5, 2225u << 16u);
    ctx.set_gpr(5, ctx.gpr[5] + static_cast<std::uint32_t>(8240));
    goto L_08A59514;
L_08A59514:
    ctx.set_gpr(4, ctx.gpr[18] + 0u);
    ctx.set_gpr(31, 0x08A59520u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0004_entry, 4u, 480u, 0x08816610u>(ctx, &aot_mem) && ctx.pc == 0x08A59520u) goto L_08A59520;
    return;
L_08A59520:
    { const bool branch_taken = ctx.gpr[2] != 0u;
    // nop
      if (branch_taken) {
          goto L_08A5952C;
      }
      goto L_08A59528;
    }
L_08A59528:
    ctx.set_gpr(21, ctx.gpr[20] + 0u);
    goto L_08A5952C;
L_08A5952C:
    { const bool branch_taken = ctx.gpr[21] == 0u;
    // nop
      if (branch_taken) {
          goto L_08A5954C;
      }
      goto L_08A59534;
    }
L_08A59534:
    { const bool branch_taken = ctx.gpr[17] != 0u;
    // nop
      if (branch_taken) {
          goto L_08A59548;
      }
      goto L_08A5953C;
    }
L_08A5953C:
    ctx.set_gpr(16, ctx.gpr[21] + 0u);
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_08A5954C;
      }
      goto L_08A59548;
    }
L_08A59548:
    ctx.set_gpr(17, ctx.gpr[17] + static_cast<std::uint32_t>(-1));
    goto L_08A5954C;
L_08A5954C:
    { const bool branch_taken = ctx.gpr[16] != 0u;
    // nop
      if (branch_taken) {
          goto L_08A595F4;
      }
      goto L_08A59554;
    }
L_08A59554:
    ctx.set_gpr(4, ctx.gpr[20] + 0u);
    ctx.set_gpr(2, 2246u << 16u);
    ctx.set_gpr(5, rt.memory().aot_load32(ctx.gpr[2] + static_cast<std::uint32_t>(-24288)));
    ctx.set_gpr(31, 0x08A59568u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0080_entry, 80u, 857u, 0x08947F8Cu>(ctx, &aot_mem) && ctx.pc == 0x08A59568u) goto L_08A59568;
    return;
L_08A59568:
    { const bool branch_taken = ctx.gpr[2] == 0u;
    // nop
      if (branch_taken) {
          goto L_08A595F4;
      }
      goto L_08A59570;
    }
L_08A59570:
    ctx.set_gpr(2, rt.memory().aot_load32(ctx.gpr[20] + static_cast<std::uint32_t>(28)));
    { const bool branch_taken = ctx.gpr[2] == 0u;
    // nop
      if (branch_taken) {
          goto L_08A59588;
      }
      goto L_08A5957C;
    }
L_08A5957C:
    ctx.set_gpr(21, rt.memory().aot_load32(ctx.gpr[2] + static_cast<std::uint32_t>(8)));
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_08A5958C;
      }
      goto L_08A59588;
    }
L_08A59588:
    ctx.set_gpr(21, 0u + 0u);
    goto L_08A5958C;
L_08A5958C:
    ctx.set_gpr(22, 0u + 0u);
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_08A595E8;
      }
      goto L_08A59598;
    }
L_08A59598:
    ctx.set_gpr(2, rt.memory().aot_load32(ctx.gpr[20] + static_cast<std::uint32_t>(28)));
    ctx.set_gpr(3, ctx.gpr[22] << 2u);
    ctx.set_gpr(2, rt.memory().aot_load32(ctx.gpr[2] + static_cast<std::uint32_t>(16)));
    ctx.set_gpr(2, ctx.gpr[2] + ctx.gpr[3]);
    ctx.set_gpr(4, rt.memory().aot_load32(ctx.gpr[2] + static_cast<std::uint32_t>(0)));
    ctx.set_gpr(5, ctx.gpr[19] + 0u);
    ctx.set_gpr(6, ctx.gpr[18] + 0u);
    ctx.set_gpr(7, ctx.gpr[17] + 0u);
    ctx.set_gpr(8, ctx.gpr[23] + 0u);
    ctx.set_gpr(31, 0x08A595C4u);
    // nop
    goto L_08A59410;
L_08A595C4:
    { const bool branch_taken = ctx.gpr[2] == 0u;
    // nop
      if (branch_taken) {
          goto L_08A595E4;
      }
      goto L_08A595CC;
    }
L_08A595CC:
    { const bool branch_taken = ctx.gpr[17] != 0u;
    // nop
      if (branch_taken) {
          goto L_08A595E0;
      }
      goto L_08A595D4;
    }
L_08A595D4:
    ctx.set_gpr(16, ctx.gpr[2] + 0u);
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_08A595F4;
      }
      goto L_08A595E0;
    }
L_08A595E0:
    ctx.set_gpr(17, ctx.gpr[17] + static_cast<std::uint32_t>(-1));
    goto L_08A595E4;
L_08A595E4:
    ctx.set_gpr(22, ctx.gpr[22] + static_cast<std::uint32_t>(1));
    goto L_08A595E8;
L_08A595E8:
    ctx.set_gpr(2, static_cast<std::int32_t>(ctx.gpr[22]) < static_cast<std::int32_t>(ctx.gpr[21]) ? 1u : 0u);
    { const bool branch_taken = ctx.gpr[2] != 0u;
    // nop
      if (branch_taken) {
          goto L_08A59598;
      }
      goto L_08A595F4;
    }
L_08A595F4:
    ctx.set_gpr(2, ctx.gpr[16] + 0u);
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
L_08A59628:
    ctx.set_gpr(29, ctx.gpr[29] + static_cast<std::uint32_t>(-48));
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(28), ctx.gpr[31]);
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(24), ctx.gpr[19]);
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(20), ctx.gpr[18]);
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(16), ctx.gpr[17]);
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(12), ctx.gpr[16]);
    ctx.set_gpr(18, ctx.gpr[4] + 0u);
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(44), 0u);
    ctx.set_gpr(3, rt.memory().aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(20)));
    ctx.set_gpr(2, 0u + static_cast<std::uint32_t>(-2));
    ctx.set_gpr(4, ctx.gpr[3] & ctx.gpr[2]);
    { const bool branch_taken = ctx.gpr[4] == 0u;
    // nop
      if (branch_taken) {
          goto L_08A597FC;
      }
      goto L_08A5965C;
    }
L_08A5965C:
    ctx.set_gpr(31, 0x08A59664u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0004_entry, 4u, 508u, 0x08816764u>(ctx, &aot_mem) && ctx.pc == 0x08A59664u) goto L_08A59664;
    return;
L_08A59664:
    { const bool branch_taken = ctx.gpr[2] == 0u;
    // nop
      if (branch_taken) {
          goto L_08A597FC;
      }
      goto L_08A5966C;
    }
L_08A5966C:
    ctx.set_gpr(3, rt.memory().aot_load32(ctx.gpr[18] + static_cast<std::uint32_t>(20)));
    ctx.set_gpr(2, 0u + static_cast<std::uint32_t>(-2));
    ctx.set_gpr(16, ctx.gpr[3] & ctx.gpr[2]);
    ctx.set_gpr(31, 0x08A59680u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0064_entry, 64u, 445u, 0x08906000u>(ctx, &aot_mem) && ctx.pc == 0x08A59680u) goto L_08A59680;
    return;
L_08A59680:
    ctx.set_gpr(4, ctx.gpr[2] + 0u);
    ctx.set_gpr(5, ctx.gpr[16] + 0u);
    ctx.set_gpr(31, 0x08A59690u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0084_entry, 84u, 707u, 0x08956F2Cu>(ctx, &aot_mem) && ctx.pc == 0x08A59690u) goto L_08A59690;
    return;
L_08A59690:
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(40), ctx.gpr[2]);
    { const bool branch_taken = ctx.gpr[2] == 0u;
    // nop
      if (branch_taken) {
          goto L_08A596A8;
      }
      goto L_08A5969C;
    }
L_08A5969C:
    ctx.set_gpr(3, rt.memory().aot_load32(ctx.gpr[2] + static_cast<std::uint32_t>(4)));
    ctx.set_gpr(3, ctx.gpr[3] + static_cast<std::uint32_t>(1));
    rt.memory().aot_store32(ctx.gpr[2] + static_cast<std::uint32_t>(4), ctx.gpr[3]);
    goto L_08A596A8;
L_08A596A8:
    ctx.set_gpr(3, rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(40)));
    ctx.set_gpr(2, rt.memory().aot_load8(ctx.gpr[3] + static_cast<std::uint32_t>(50)));
    { const bool branch_taken = ctx.gpr[2] == 0u;
    // nop
      if (branch_taken) {
          goto L_08A597E8;
      }
      goto L_08A596B8;
    }
L_08A596B8:
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(36), 0u);
    ctx.set_gpr(3, rt.memory().aot_load32(ctx.gpr[3] + static_cast<std::uint32_t>(28)));
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(32), ctx.gpr[3]);
    { const bool branch_taken = ctx.gpr[3] == 0u;
    // nop
      if (branch_taken) {
          goto L_08A596D8;
      }
      goto L_08A596CC;
    }
L_08A596CC:
    ctx.set_gpr(2, rt.memory().aot_load32(ctx.gpr[3] + static_cast<std::uint32_t>(4)));
    ctx.set_gpr(2, ctx.gpr[2] + static_cast<std::uint32_t>(1));
    rt.memory().aot_store32(ctx.gpr[3] + static_cast<std::uint32_t>(4), ctx.gpr[2]);
    goto L_08A596D8;
L_08A596D8:
    ctx.set_gpr(2, rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(32)));
    { const bool branch_taken = ctx.gpr[2] == 0u;
    // nop
      if (branch_taken) {
          goto L_08A5974C;
      }
      goto L_08A596E4;
    }
L_08A596E4:
    ctx.set_gpr(16, rt.memory().aot_load32(ctx.gpr[2] + static_cast<std::uint32_t>(8)));
    ctx.set_gpr(17, 0u + 0u);
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_08A59740;
      }
      goto L_08A596F4;
    }
L_08A596F4:
    ctx.set_gpr(2, rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(32)));
    ctx.set_gpr(3, ctx.gpr[17] << 2u);
    ctx.set_gpr(2, rt.memory().aot_load32(ctx.gpr[2] + static_cast<std::uint32_t>(16)));
    ctx.set_gpr(2, ctx.gpr[2] + ctx.gpr[3]);
    ctx.set_gpr(19, rt.memory().aot_load32(ctx.gpr[2] + static_cast<std::uint32_t>(0)));
    ctx.set_gpr(4, ctx.gpr[19] + 0u);
    ctx.set_gpr(2, 2246u << 16u);
    ctx.set_gpr(5, rt.memory().aot_load32(ctx.gpr[2] + static_cast<std::uint32_t>(-25500)));
    ctx.set_gpr(31, 0x08A5971Cu);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0080_entry, 80u, 857u, 0x08947F8Cu>(ctx, &aot_mem) && ctx.pc == 0x08A5971Cu) goto L_08A5971C;
    return;
L_08A5971C:
    { const bool branch_taken = ctx.gpr[2] == 0u;
    // nop
      if (branch_taken) {
          goto L_08A5973C;
      }
      goto L_08A59724;
    }
L_08A59724:
    ctx.set_gpr(4, ctx.gpr[29] + static_cast<std::uint32_t>(36));
    ctx.set_gpr(5, ctx.gpr[19] + 0u);
    ctx.set_gpr(31, 0x08A59734u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0085_entry, 85u, 61u, 0x089584C4u>(ctx, &aot_mem) && ctx.pc == 0x08A59734u) goto L_08A59734;
    return;
L_08A59734:
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_08A5974C;
      }
      goto L_08A5973C;
    }
L_08A5973C:
    ctx.set_gpr(17, ctx.gpr[17] + static_cast<std::uint32_t>(1));
    goto L_08A59740;
L_08A59740:
    ctx.set_gpr(2, static_cast<std::int32_t>(ctx.gpr[17]) < static_cast<std::int32_t>(ctx.gpr[16]) ? 1u : 0u);
    { const bool branch_taken = ctx.gpr[2] != 0u;
    // nop
      if (branch_taken) {
          goto L_08A596F4;
      }
      goto L_08A5974C;
    }
L_08A5974C:
    ctx.set_gpr(2, rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(36)));
    { const bool branch_taken = ctx.gpr[2] == 0u;
    // nop
      if (branch_taken) {
          goto L_08A597C0;
      }
      goto L_08A59758;
    }
L_08A59758:
    ctx.set_gpr(3, rt.memory().aot_load32(ctx.gpr[18] + static_cast<std::uint32_t>(20)));
    ctx.set_gpr(2, 0u + static_cast<std::uint32_t>(-2));
    ctx.set_gpr(16, ctx.gpr[3] & ctx.gpr[2]);
    ctx.set_gpr(31, 0x08A5976Cu);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0064_entry, 64u, 445u, 0x08906000u>(ctx, &aot_mem) && ctx.pc == 0x08A5976Cu) goto L_08A5976C;
    return;
L_08A5976C:
    ctx.set_gpr(4, ctx.gpr[2] + 0u);
    ctx.set_gpr(5, ctx.gpr[16] + 0u);
    ctx.set_gpr(31, 0x08A5977Cu);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0084_entry, 84u, 806u, 0x089574D8u>(ctx, &aot_mem) && ctx.pc == 0x08A5977Cu) goto L_08A5977C;
    return;
L_08A5977C:
    ctx.set_gpr(2, rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(36)));
    ctx.set_gpr(4, rt.memory().aot_load32(ctx.gpr[2] + static_cast<std::uint32_t>(20)));
    { const bool branch_taken = ctx.gpr[4] == 0u;
    // nop
      if (branch_taken) {
          goto L_08A597C0;
      }
      goto L_08A5978C;
    }
L_08A5978C:
    ctx.set_gpr(3, rt.memory().aot_load32(ctx.gpr[18] + static_cast<std::uint32_t>(24)));
    ctx.set_gpr(2, 0u + static_cast<std::uint32_t>(-2));
    ctx.set_gpr(6, ctx.gpr[3] & ctx.gpr[2]);
    ctx.set_gpr(2, rt.memory().aot_load32(ctx.gpr[18] + static_cast<std::uint32_t>(36)));
    ctx.set_gpr(7, ctx.gpr[2] + static_cast<std::uint32_t>(-1));
    ctx.set_gpr(5, rt.memory().aot_load32(ctx.gpr[18] + static_cast<std::uint32_t>(28)));
    ctx.set_gpr(8, rt.memory().aot_load8(ctx.gpr[18] + static_cast<std::uint32_t>(32)));
    ctx.set_gpr(31, 0x08A597B0u);
    // nop
    goto L_08A59410;
L_08A597B0:
    ctx.set_gpr(4, ctx.gpr[29] + static_cast<std::uint32_t>(44));
    ctx.set_gpr(5, ctx.gpr[2] + 0u);
    ctx.set_gpr(31, 0x08A597C0u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0085_entry, 85u, 61u, 0x089584C4u>(ctx, &aot_mem) && ctx.pc == 0x08A597C0u) goto L_08A597C0;
    return;
L_08A597C0:
    ctx.set_gpr(4, rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(32)));
    { const bool branch_taken = ctx.gpr[4] == 0u;
    // nop
      if (branch_taken) {
          goto L_08A597D4;
      }
      goto L_08A597CC;
    }
L_08A597CC:
    ctx.set_gpr(31, 0x08A597D4u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0014_entry, 14u, 257u, 0x0883D454u>(ctx, &aot_mem) && ctx.pc == 0x08A597D4u) goto L_08A597D4;
    return;
L_08A597D4:
    ctx.set_gpr(4, rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(36)));
    { const bool branch_taken = ctx.gpr[4] == 0u;
    // nop
      if (branch_taken) {
          goto L_08A597E8;
      }
      goto L_08A597E0;
    }
L_08A597E0:
    ctx.set_gpr(31, 0x08A597E8u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0014_entry, 14u, 257u, 0x0883D454u>(ctx, &aot_mem) && ctx.pc == 0x08A597E8u) goto L_08A597E8;
    return;
L_08A597E8:
    ctx.set_gpr(4, rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(40)));
    { const bool branch_taken = ctx.gpr[4] == 0u;
    // nop
      if (branch_taken) {
          goto L_08A597FC;
      }
      goto L_08A597F4;
    }
L_08A597F4:
    ctx.set_gpr(31, 0x08A597FCu);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0014_entry, 14u, 257u, 0x0883D454u>(ctx, &aot_mem) && ctx.pc == 0x08A597FCu) goto L_08A597FC;
    return;
L_08A597FC:
    ctx.set_gpr(4, ctx.gpr[18] + static_cast<std::uint32_t>(16));
    ctx.set_gpr(5, rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(44)));
    ctx.set_gpr(31, 0x08A5980Cu);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0085_entry, 85u, 61u, 0x089584C4u>(ctx, &aot_mem) && ctx.pc == 0x08A5980Cu) goto L_08A5980C;
    return;
L_08A5980C:
    ctx.set_gpr(2, rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(44)));
    ctx.set_gpr(16, 0u < ctx.gpr[2] ? 1u : 0u);
    ctx.set_gpr(4, rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(44)));
    { const bool branch_taken = ctx.gpr[4] == 0u;
    // nop
      if (branch_taken) {
          goto L_08A59828;
      }
      goto L_08A59820;
    }
L_08A59820:
    ctx.set_gpr(31, 0x08A59828u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0014_entry, 14u, 257u, 0x0883D454u>(ctx, &aot_mem) && ctx.pc == 0x08A59828u) goto L_08A59828;
    return;
L_08A59828:
    ctx.set_gpr(2, ctx.gpr[16] + 0u);
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
L_08A5984C:
    ctx.set_gpr(29, ctx.gpr[29] + static_cast<std::uint32_t>(-80));
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(12), ctx.gpr[31]);
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(8), ctx.gpr[18]);
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(4), ctx.gpr[17]);
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(0), ctx.gpr[16]);
    ctx.set_gpr(17, ctx.gpr[4] + 0u);
    ctx.set_gpr(16, ctx.gpr[6] + 0u);
    ctx.set_gpr(2, rt.memory().aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(60)));
    { const bool branch_taken = ctx.gpr[2] == 0u;
    // nop
      if (branch_taken) {
          goto L_08A598BC;
      }
      goto L_08A59874;
    }
L_08A59874:
    ctx.set_gpr(2, rt.memory().aot_load32(ctx.gpr[2] + static_cast<std::uint32_t>(12)));
    ctx.set_gpr(2, ctx.gpr[2] ^ 1u);
    ctx.set_gpr(2, ctx.gpr[2] < static_cast<std::uint32_t>(1) ? 1u : 0u);
    rt.memory().aot_store8(ctx.gpr[17] + static_cast<std::uint32_t>(56), static_cast<std::uint8_t>(ctx.gpr[2]));
    ctx.set_gpr(2, rt.memory().aot_load32(ctx.gpr[17] + static_cast<std::uint32_t>(60)));
    ctx.fpr[0] = std::bit_cast<float>(rt.memory().aot_load32(ctx.gpr[2] + static_cast<std::uint32_t>(116)));
    rt.memory().aot_store32(ctx.gpr[17] + static_cast<std::uint32_t>(32), std::bit_cast<std::uint32_t>(ctx.fpr[0]));
    ctx.fpr[0] = std::bit_cast<float>(rt.memory().aot_load32(ctx.gpr[2] + static_cast<std::uint32_t>(120)));
    rt.memory().aot_store32(ctx.gpr[17] + static_cast<std::uint32_t>(36), std::bit_cast<std::uint32_t>(ctx.fpr[0]));
    ctx.fpr[0] = std::bit_cast<float>(rt.memory().aot_load32(ctx.gpr[2] + static_cast<std::uint32_t>(124)));
    rt.memory().aot_store32(ctx.gpr[17] + static_cast<std::uint32_t>(40), std::bit_cast<std::uint32_t>(ctx.fpr[0]));
    ctx.set_gpr(2, rt.memory().aot_load32(ctx.gpr[17] + static_cast<std::uint32_t>(60)));
    ctx.fpr[0] = std::bit_cast<float>(rt.memory().aot_load32(ctx.gpr[2] + static_cast<std::uint32_t>(128)));
    rt.memory().aot_store32(ctx.gpr[17] + static_cast<std::uint32_t>(44), std::bit_cast<std::uint32_t>(ctx.fpr[0]));
    ctx.fpr[0] = std::bit_cast<float>(rt.memory().aot_load32(ctx.gpr[2] + static_cast<std::uint32_t>(132)));
    rt.memory().aot_store32(ctx.gpr[17] + static_cast<std::uint32_t>(48), std::bit_cast<std::uint32_t>(ctx.fpr[0]));
    ctx.fpr[0] = std::bit_cast<float>(rt.memory().aot_load32(ctx.gpr[2] + static_cast<std::uint32_t>(136)));
    rt.memory().aot_store32(ctx.gpr[17] + static_cast<std::uint32_t>(52), std::bit_cast<std::uint32_t>(ctx.fpr[0]));
    goto L_08A598BC;
L_08A598BC:
    ctx.set_gpr(2, rt.memory().aot_load8(ctx.gpr[17] + static_cast<std::uint32_t>(56)));
    { const bool branch_taken = ctx.gpr[2] == 0u;
    // nop
      if (branch_taken) {
          goto L_08A598E4;
      }
      goto L_08A598C8;
    }
L_08A598C8:
    ctx.fpr[7] = std::bit_cast<float>(rt.memory().aot_load32(ctx.gpr[17] + static_cast<std::uint32_t>(32)));
    ctx.fpr[2] = std::bit_cast<float>(rt.memory().aot_load32(ctx.gpr[17] + static_cast<std::uint32_t>(36)));
    ctx.fpr[6] = std::bit_cast<float>(rt.memory().aot_load32(ctx.gpr[17] + static_cast<std::uint32_t>(40)));
    ctx.set_gpr(2, 16256u << 16u);
    ctx.fpr[19] = std::bit_cast<float>(ctx.gpr[2]);
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_08A59900;
      }
      goto L_08A598E4;
    }
L_08A598E4:
    ctx.fpr[0] = std::bit_cast<float>(rt.memory().aot_load32(ctx.gpr[17] + static_cast<std::uint32_t>(32)));
    ctx.set_fpr_bits(7, ctx.fpr_bits(0) ^ 0x80000000u);
    ctx.fpr[0] = std::bit_cast<float>(rt.memory().aot_load32(ctx.gpr[17] + static_cast<std::uint32_t>(36)));
    ctx.set_fpr_bits(2, ctx.fpr_bits(0) ^ 0x80000000u);
    ctx.fpr[0] = std::bit_cast<float>(rt.memory().aot_load32(ctx.gpr[17] + static_cast<std::uint32_t>(40)));
    ctx.set_fpr_bits(6, ctx.fpr_bits(0) ^ 0x80000000u);
    ctx.fpr[19] = std::bit_cast<float>(0u);
    goto L_08A59900;
L_08A59900:
    ctx.fpr[0] = std::bit_cast<float>(rt.memory().aot_load32(ctx.gpr[17] + static_cast<std::uint32_t>(16)));
    { const float fs = ctx.fpr[0]; const float ft = ctx.fpr[7]; if ((std::isinf(fs) && ft == 0.0f) || (std::isinf(ft) && fs == 0.0f)) ctx.set_fpr_bits(1, 0x7FC00000u); else ctx.fpr[1] = fs * ft; }
    ctx.fpr[0] = std::bit_cast<float>(rt.memory().aot_load32(ctx.gpr[17] + static_cast<std::uint32_t>(20)));
    { const float fs = ctx.fpr[0]; const float ft = ctx.fpr[2]; if ((std::isinf(fs) && ft == 0.0f) || (std::isinf(ft) && fs == 0.0f)) ctx.set_fpr_bits(0, 0x7FC00000u); else ctx.fpr[0] = fs * ft; }
    ctx.fpr[1] = ctx.fpr[1] + ctx.fpr[0];
    ctx.fpr[0] = std::bit_cast<float>(rt.memory().aot_load32(ctx.gpr[17] + static_cast<std::uint32_t>(24)));
    { const float fs = ctx.fpr[0]; const float ft = ctx.fpr[6]; if ((std::isinf(fs) && ft == 0.0f) || (std::isinf(ft) && fs == 0.0f)) ctx.set_fpr_bits(0, 0x7FC00000u); else ctx.fpr[0] = fs * ft; }
    ctx.fpr[1] = ctx.fpr[0] + ctx.fpr[1];
    ctx.fpr[0] = std::bit_cast<float>(rt.memory().aot_load32(ctx.gpr[17] + static_cast<std::uint32_t>(28)));
    { const float fs = ctx.fpr[0]; const float ft = ctx.fpr[19]; if ((std::isinf(fs) && ft == 0.0f) || (std::isinf(ft) && fs == 0.0f)) ctx.set_fpr_bits(0, 0x7FC00000u); else ctx.fpr[0] = fs * ft; }
    ctx.fpr[0] = ctx.fpr[0] + ctx.fpr[1];
    ctx.fpr[1] = std::bit_cast<float>(rt.memory().aot_load32(ctx.gpr[17] + static_cast<std::uint32_t>(16)));
    { const float fs = ctx.fpr[7]; const float ft = ctx.fpr[1]; if ((std::isinf(fs) && ft == 0.0f) || (std::isinf(ft) && fs == 0.0f)) ctx.set_fpr_bits(18, 0x7FC00000u); else ctx.fpr[18] = fs * ft; }
    ctx.fpr[5] = std::bit_cast<float>(rt.memory().aot_load32(ctx.gpr[17] + static_cast<std::uint32_t>(20)));
    { const float fs = ctx.fpr[7]; const float ft = ctx.fpr[5]; if ((std::isinf(fs) && ft == 0.0f) || (std::isinf(ft) && fs == 0.0f)) ctx.set_fpr_bits(17, 0x7FC00000u); else ctx.fpr[17] = fs * ft; }
    ctx.fpr[4] = std::bit_cast<float>(rt.memory().aot_load32(ctx.gpr[17] + static_cast<std::uint32_t>(24)));
    { const float fs = ctx.fpr[7]; const float ft = ctx.fpr[4]; if ((std::isinf(fs) && ft == 0.0f) || (std::isinf(ft) && fs == 0.0f)) ctx.set_fpr_bits(16, 0x7FC00000u); else ctx.fpr[16] = fs * ft; }
    ctx.fpr[3] = std::bit_cast<float>(rt.memory().aot_load32(ctx.gpr[17] + static_cast<std::uint32_t>(28)));
    { const float fs = ctx.fpr[7]; const float ft = ctx.fpr[3]; if ((std::isinf(fs) && ft == 0.0f) || (std::isinf(ft) && fs == 0.0f)) ctx.set_fpr_bits(15, 0x7FC00000u); else ctx.fpr[15] = fs * ft; }
    { const float fs = ctx.fpr[2]; const float ft = ctx.fpr[1]; if ((std::isinf(fs) && ft == 0.0f) || (std::isinf(ft) && fs == 0.0f)) ctx.set_fpr_bits(14, 0x7FC00000u); else ctx.fpr[14] = fs * ft; }
    { const float fs = ctx.fpr[2]; const float ft = ctx.fpr[5]; if ((std::isinf(fs) && ft == 0.0f) || (std::isinf(ft) && fs == 0.0f)) ctx.set_fpr_bits(13, 0x7FC00000u); else ctx.fpr[13] = fs * ft; }
    { const float fs = ctx.fpr[2]; const float ft = ctx.fpr[4]; if ((std::isinf(fs) && ft == 0.0f) || (std::isinf(ft) && fs == 0.0f)) ctx.set_fpr_bits(12, 0x7FC00000u); else ctx.fpr[12] = fs * ft; }
    { const float fs = ctx.fpr[2]; const float ft = ctx.fpr[3]; if ((std::isinf(fs) && ft == 0.0f) || (std::isinf(ft) && fs == 0.0f)) ctx.set_fpr_bits(11, 0x7FC00000u); else ctx.fpr[11] = fs * ft; }
    { const float fs = ctx.fpr[6]; const float ft = ctx.fpr[1]; if ((std::isinf(fs) && ft == 0.0f) || (std::isinf(ft) && fs == 0.0f)) ctx.set_fpr_bits(2, 0x7FC00000u); else ctx.fpr[2] = fs * ft; }
    { const float fs = ctx.fpr[6]; const float ft = ctx.fpr[5]; if ((std::isinf(fs) && ft == 0.0f) || (std::isinf(ft) && fs == 0.0f)) ctx.set_fpr_bits(10, 0x7FC00000u); else ctx.fpr[10] = fs * ft; }
    { const float fs = ctx.fpr[6]; const float ft = ctx.fpr[4]; if ((std::isinf(fs) && ft == 0.0f) || (std::isinf(ft) && fs == 0.0f)) ctx.set_fpr_bits(9, 0x7FC00000u); else ctx.fpr[9] = fs * ft; }
    { const float fs = ctx.fpr[6]; const float ft = ctx.fpr[3]; if ((std::isinf(fs) && ft == 0.0f) || (std::isinf(ft) && fs == 0.0f)) ctx.set_fpr_bits(8, 0x7FC00000u); else ctx.fpr[8] = fs * ft; }
    { const float fs = ctx.fpr[19]; const float ft = ctx.fpr[1]; if ((std::isinf(fs) && ft == 0.0f) || (std::isinf(ft) && fs == 0.0f)) ctx.set_fpr_bits(1, 0x7FC00000u); else ctx.fpr[1] = fs * ft; }
    { const float fs = ctx.fpr[19]; const float ft = ctx.fpr[5]; if ((std::isinf(fs) && ft == 0.0f) || (std::isinf(ft) && fs == 0.0f)) ctx.set_fpr_bits(7, 0x7FC00000u); else ctx.fpr[7] = fs * ft; }
    { const float fs = ctx.fpr[19]; const float ft = ctx.fpr[4]; if ((std::isinf(fs) && ft == 0.0f) || (std::isinf(ft) && fs == 0.0f)) ctx.set_fpr_bits(6, 0x7FC00000u); else ctx.fpr[6] = fs * ft; }
    { const float fs = ctx.fpr[19]; const float ft = ctx.fpr[3]; if ((std::isinf(fs) && ft == 0.0f) || (std::isinf(ft) && fs == 0.0f)) ctx.set_fpr_bits(5, 0x7FC00000u); else ctx.fpr[5] = fs * ft; }
    ctx.set_fpr_bits(4, ctx.fpr_bits(1) ^ 0x80000000u);
    ctx.set_fpr_bits(3, ctx.fpr_bits(2) ^ 0x80000000u);
    ctx.set_fpr_bits(2, ctx.fpr_bits(14) ^ 0x80000000u);
    ctx.fpr[1] = ctx.fpr[0] - ctx.fpr[18];
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(16), std::bit_cast<std::uint32_t>(ctx.fpr[1]));
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(20), std::bit_cast<std::uint32_t>(ctx.fpr[2]));
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(24), std::bit_cast<std::uint32_t>(ctx.fpr[3]));
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(28), std::bit_cast<std::uint32_t>(ctx.fpr[4]));
    ctx.set_fpr_bits(4, ctx.fpr_bits(7) ^ 0x80000000u);
    ctx.set_fpr_bits(3, ctx.fpr_bits(10) ^ 0x80000000u);
    ctx.fpr[2] = ctx.fpr[0] - ctx.fpr[13];
    ctx.set_fpr_bits(1, ctx.fpr_bits(17) ^ 0x80000000u);
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(32), std::bit_cast<std::uint32_t>(ctx.fpr[1]));
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(36), std::bit_cast<std::uint32_t>(ctx.fpr[2]));
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(40), std::bit_cast<std::uint32_t>(ctx.fpr[3]));
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(44), std::bit_cast<std::uint32_t>(ctx.fpr[4]));
    ctx.set_fpr_bits(4, ctx.fpr_bits(6) ^ 0x80000000u);
    ctx.fpr[3] = ctx.fpr[0] - ctx.fpr[9];
    ctx.set_fpr_bits(2, ctx.fpr_bits(12) ^ 0x80000000u);
    ctx.set_fpr_bits(1, ctx.fpr_bits(16) ^ 0x80000000u);
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(48), std::bit_cast<std::uint32_t>(ctx.fpr[1]));
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(52), std::bit_cast<std::uint32_t>(ctx.fpr[2]));
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(56), std::bit_cast<std::uint32_t>(ctx.fpr[3]));
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(60), std::bit_cast<std::uint32_t>(ctx.fpr[4]));
    ctx.fpr[3] = ctx.fpr[0] - ctx.fpr[5];
    ctx.set_fpr_bits(2, ctx.fpr_bits(8) ^ 0x80000000u);
    ctx.set_fpr_bits(1, ctx.fpr_bits(11) ^ 0x80000000u);
    ctx.set_fpr_bits(0, ctx.fpr_bits(15) ^ 0x80000000u);
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(64), std::bit_cast<std::uint32_t>(ctx.fpr[0]));
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(68), std::bit_cast<std::uint32_t>(ctx.fpr[1]));
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(72), std::bit_cast<std::uint32_t>(ctx.fpr[2]));
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(76), std::bit_cast<std::uint32_t>(ctx.fpr[3]));
    ctx.set_gpr(5, ctx.gpr[16] + static_cast<std::uint32_t>(164));
    ctx.set_gpr(18, ctx.gpr[16] + static_cast<std::uint32_t>(100));
    ctx.set_gpr(4, ctx.gpr[29] + static_cast<std::uint32_t>(16));
    ctx.set_gpr(31, 0x08A59A10u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0126_entry, 126u, 737u, 0x089FFB18u>(ctx, &aot_mem) && ctx.pc == 0x08A59A10u) goto L_08A59A10;
    return;
L_08A59A10:
    ctx.set_gpr(4, ctx.gpr[29] + static_cast<std::uint32_t>(16));
    ctx.set_gpr(5, ctx.gpr[4] + 0u);
    ctx.set_gpr(6, ctx.gpr[18] + 0u);
    ctx.set_gpr(31, 0x08A59A24u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0126_entry, 126u, 727u, 0x089FF9E0u>(ctx, &aot_mem) && ctx.pc == 0x08A59A24u) goto L_08A59A24;
    return;
L_08A59A24:
    ctx.set_gpr(16, rt.memory().aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(52)));
    ctx.set_gpr(3, rt.memory().aot_load32(ctx.gpr[17] + static_cast<std::uint32_t>(8)));
    { const bool branch_taken = ctx.gpr[3] == 0u;
    // nop
      if (branch_taken) {
          goto L_08A59AC8;
      }
      goto L_08A59A34;
    }
L_08A59A34:
    ctx.set_gpr(2, 2245u << 16u);
    ctx.set_gpr(2, rt.memory().aot_load32(ctx.gpr[2] + static_cast<std::uint32_t>(24744)));
    ctx.set_gpr(2, rt.memory().aot_load32(ctx.gpr[2] + static_cast<std::uint32_t>(8)));
    ctx.set_gpr(4, ctx.gpr[2] << 2u);
    ctx.set_gpr(2, rt.memory().aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(68)));
    ctx.set_gpr(2, ctx.gpr[2] + ctx.gpr[4]);
    ctx.set_gpr(4, rt.memory().aot_load32(ctx.gpr[2] + static_cast<std::uint32_t>(0)));
    ctx.set_gpr(2, rt.memory().aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(16)));
    ctx.set_gpr(4, ctx.gpr[4] << 2u);
    ctx.set_gpr(2, rt.memory().aot_load32(ctx.gpr[2] + static_cast<std::uint32_t>(16)));
    ctx.set_gpr(2, ctx.gpr[2] + ctx.gpr[4]);
    ctx.set_gpr(5, rt.memory().aot_load32(ctx.gpr[2] + static_cast<std::uint32_t>(0)));
    ctx.set_gpr(2, rt.memory().aot_load32(ctx.gpr[5] + static_cast<std::uint32_t>(24)));
    { const bool branch_taken = static_cast<std::int32_t>(ctx.gpr[2]) < 0;
    // nop
      if (branch_taken) {
          goto L_08A59A88;
      }
      goto L_08A59A70;
    }
L_08A59A70:
    ctx.set_gpr(4, ctx.gpr[2] << 2u);
    ctx.set_gpr(2, rt.memory().aot_load32(ctx.gpr[5] + static_cast<std::uint32_t>(16)));
    ctx.set_gpr(2, ctx.gpr[2] + ctx.gpr[4]);
    ctx.set_gpr(2, rt.memory().aot_load32(ctx.gpr[2] + static_cast<std::uint32_t>(0)));
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_08A59AB4;
      }
      goto L_08A59A88;
    }
L_08A59A88:
    ctx.set_gpr(2, rt.memory().aot_load32(ctx.gpr[5] + static_cast<std::uint32_t>(8)));
    { const bool branch_taken = ctx.gpr[2] == 0u;
    // nop
      if (branch_taken) {
          goto L_08A59AB0;
      }
      goto L_08A59A94;
    }
L_08A59A94:
    ctx.set_gpr(2, ctx.gpr[2] + static_cast<std::uint32_t>(-1));
    ctx.set_gpr(4, ctx.gpr[2] << 2u);
    ctx.set_gpr(2, rt.memory().aot_load32(ctx.gpr[5] + static_cast<std::uint32_t>(16)));
    ctx.set_gpr(2, ctx.gpr[2] + ctx.gpr[4]);
    ctx.set_gpr(2, rt.memory().aot_load32(ctx.gpr[2] + static_cast<std::uint32_t>(0)));
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_08A59AB4;
      }
      goto L_08A59AB0;
    }
L_08A59AB0:
    ctx.set_gpr(2, rt.memory().aot_load32(ctx.gpr[5] + static_cast<std::uint32_t>(20)));
    goto L_08A59AB4;
L_08A59AB4:
    ctx.set_gpr(4, ctx.gpr[3] + static_cast<std::uint32_t>(12));
    ctx.set_gpr(5, ctx.gpr[2] + static_cast<std::uint32_t>(12));
    ctx.set_gpr(6, ctx.gpr[29] + static_cast<std::uint32_t>(16));
    ctx.set_gpr(31, 0x08A59AC8u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0126_entry, 126u, 727u, 0x089FF9E0u>(ctx, &aot_mem) && ctx.pc == 0x08A59AC8u) goto L_08A59AC8;
    return;
L_08A59AC8:
    ctx.set_gpr(5, rt.memory().aot_load32(ctx.gpr[17] + static_cast<std::uint32_t>(12)));
    { const bool branch_taken = ctx.gpr[5] == 0u;
    // nop
      if (branch_taken) {
          goto L_08A59B68;
      }
      goto L_08A59AD4;
    }
L_08A59AD4:
    ctx.set_gpr(2, 2245u << 16u);
    ctx.set_gpr(2, rt.memory().aot_load32(ctx.gpr[2] + static_cast<std::uint32_t>(24444)));
    ctx.set_gpr(2, rt.memory().aot_load32(ctx.gpr[2] + static_cast<std::uint32_t>(8)));
    ctx.set_gpr(3, ctx.gpr[2] << 2u);
    ctx.set_gpr(2, rt.memory().aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(68)));
    ctx.set_gpr(2, ctx.gpr[2] + ctx.gpr[3]);
    ctx.set_gpr(3, rt.memory().aot_load32(ctx.gpr[2] + static_cast<std::uint32_t>(0)));
    ctx.set_gpr(2, rt.memory().aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(16)));
    ctx.set_gpr(3, ctx.gpr[3] << 2u);
    ctx.set_gpr(2, rt.memory().aot_load32(ctx.gpr[2] + static_cast<std::uint32_t>(16)));
    ctx.set_gpr(2, ctx.gpr[2] + ctx.gpr[3]);
    ctx.set_gpr(4, rt.memory().aot_load32(ctx.gpr[2] + static_cast<std::uint32_t>(0)));
    ctx.set_gpr(2, rt.memory().aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(24)));
    { const bool branch_taken = static_cast<std::int32_t>(ctx.gpr[2]) < 0;
    // nop
      if (branch_taken) {
          goto L_08A59B28;
      }
      goto L_08A59B10;
    }
L_08A59B10:
    ctx.set_gpr(3, ctx.gpr[2] << 2u);
    ctx.set_gpr(2, rt.memory().aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(16)));
    ctx.set_gpr(2, ctx.gpr[2] + ctx.gpr[3]);
    ctx.set_gpr(2, rt.memory().aot_load32(ctx.gpr[2] + static_cast<std::uint32_t>(0)));
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_08A59B54;
      }
      goto L_08A59B28;
    }
L_08A59B28:
    ctx.set_gpr(2, rt.memory().aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(8)));
    { const bool branch_taken = ctx.gpr[2] == 0u;
    // nop
      if (branch_taken) {
          goto L_08A59B50;
      }
      goto L_08A59B34;
    }
L_08A59B34:
    ctx.set_gpr(2, ctx.gpr[2] + static_cast<std::uint32_t>(-1));
    ctx.set_gpr(3, ctx.gpr[2] << 2u);
    ctx.set_gpr(2, rt.memory().aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(16)));
    ctx.set_gpr(2, ctx.gpr[2] + ctx.gpr[3]);
    ctx.set_gpr(2, rt.memory().aot_load32(ctx.gpr[2] + static_cast<std::uint32_t>(0)));
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_08A59B54;
      }
      goto L_08A59B50;
    }
L_08A59B50:
    ctx.set_gpr(2, rt.memory().aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(20)));
    goto L_08A59B54;
L_08A59B54:
    ctx.set_gpr(4, ctx.gpr[5] + static_cast<std::uint32_t>(12));
    ctx.set_gpr(5, ctx.gpr[29] + static_cast<std::uint32_t>(16));
    ctx.set_gpr(6, ctx.gpr[2] + static_cast<std::uint32_t>(12));
    ctx.set_gpr(31, 0x08A59B68u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0126_entry, 126u, 727u, 0x089FF9E0u>(ctx, &aot_mem) && ctx.pc == 0x08A59B68u) goto L_08A59B68;
    return;
L_08A59B68:
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
L_08A59B84:
    ctx.set_gpr(29, ctx.gpr[29] + static_cast<std::uint32_t>(-16));
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(12), ctx.gpr[31]);
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(8), ctx.gpr[16]);
    ctx.set_gpr(16, ctx.gpr[4] + 0u);
    ctx.set_gpr(2, rt.memory().aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(12)));
    { const bool branch_taken = ctx.gpr[2] != 0u;
    // nop
      if (branch_taken) {
          goto L_08A59BB8;
      }
      goto L_08A59BA0;
    }
L_08A59BA0:
    ctx.set_gpr(2, rt.memory().aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(8)));
    { const bool branch_taken = ctx.gpr[2] != 0u;
    // nop
      if (branch_taken) {
          goto L_08A59BB8;
      }
      goto L_08A59BAC;
    }
L_08A59BAC:
    ctx.set_gpr(2, 0u + 0u);
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_08A59BD8;
      }
      goto L_08A59BB8;
    }
L_08A59BB8:
    ctx.set_gpr(4, ctx.gpr[5] + 0u);
    ctx.set_gpr(31, 0x08A59BC4u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0148_entry, 148u, 336u, 0x08A55708u>(ctx, &aot_mem) && ctx.pc == 0x08A59BC4u) goto L_08A59BC4;
    return;
L_08A59BC4:
    ctx.set_gpr(4, ctx.gpr[16] + static_cast<std::uint32_t>(60));
    ctx.set_gpr(5, ctx.gpr[2] + 0u);
    ctx.set_gpr(31, 0x08A59BD4u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0085_entry, 85u, 61u, 0x089584C4u>(ctx, &aot_mem) && ctx.pc == 0x08A59BD4u) goto L_08A59BD4;
    return;
L_08A59BD4:
    ctx.set_gpr(2, 0u + static_cast<std::uint32_t>(1));
    goto L_08A59BD8;
L_08A59BD8:
    ctx.set_gpr(31, rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(12)));
    ctx.set_gpr(16, rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(8)));
    ctx.set_gpr(29, ctx.gpr[29] + static_cast<std::uint32_t>(16));
    jump_target = ctx.gpr[31];
    // nop
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_08A59BEC:
    ctx.set_gpr(29, ctx.gpr[29] + static_cast<std::uint32_t>(-16));
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(12), ctx.gpr[31]);
    ctx.set_gpr(3, rt.memory().aot_load8(ctx.gpr[28] + static_cast<std::uint32_t>(-32149)));
    { const bool branch_taken = ctx.gpr[3] == 0u;
    // nop
      if (branch_taken) {
          goto L_08A59E1C;
      }
      goto L_08A59C00;
    }
L_08A59C00:
    ctx.set_gpr(3, 2246u << 16u);
    ctx.set_gpr(4, rt.memory().aot_load32(ctx.gpr[3] + static_cast<std::uint32_t>(-21748)));
    { const bool branch_taken = ctx.gpr[4] == 0u;
    // nop
      if (branch_taken) {
          goto L_08A59C3C;
      }
      goto L_08A59C10;
    }
L_08A59C10:
    ctx.set_gpr(3, rt.memory().aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(4)));
    ctx.set_gpr(3, ctx.gpr[3] + static_cast<std::uint32_t>(-1));
    rt.memory().aot_store32(ctx.gpr[4] + static_cast<std::uint32_t>(4), ctx.gpr[3]);
    ctx.set_gpr(3, ctx.gpr[3] << 10u);
    ctx.set_gpr(3, ctx.gpr[3] >> 10u);
    { const bool branch_taken = ctx.gpr[3] != 0u;
    // nop
      if (branch_taken) {
          goto L_08A59C34;
      }
      goto L_08A59C2C;
    }
L_08A59C2C:
    ctx.set_gpr(31, 0x08A59C34u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0080_entry, 80u, 556u, 0x089467C8u>(ctx, &aot_mem) && ctx.pc == 0x08A59C34u) goto L_08A59C34;
    return;
L_08A59C34:
    ctx.set_gpr(3, 2246u << 16u);
    rt.memory().aot_store32(ctx.gpr[3] + static_cast<std::uint32_t>(-21748), 0u);
    goto L_08A59C3C;
L_08A59C3C:
    ctx.set_gpr(3, 2246u << 16u);
    ctx.set_gpr(4, rt.memory().aot_load32(ctx.gpr[3] + static_cast<std::uint32_t>(-21744)));
    { const bool branch_taken = ctx.gpr[4] == 0u;
    // nop
      if (branch_taken) {
          goto L_08A59C78;
      }
      goto L_08A59C4C;
    }
L_08A59C4C:
    ctx.set_gpr(3, rt.memory().aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(4)));
    ctx.set_gpr(3, ctx.gpr[3] + static_cast<std::uint32_t>(-1));
    rt.memory().aot_store32(ctx.gpr[4] + static_cast<std::uint32_t>(4), ctx.gpr[3]);
    ctx.set_gpr(3, ctx.gpr[3] << 10u);
    ctx.set_gpr(3, ctx.gpr[3] >> 10u);
    { const bool branch_taken = ctx.gpr[3] != 0u;
    // nop
      if (branch_taken) {
          goto L_08A59C70;
      }
      goto L_08A59C68;
    }
L_08A59C68:
    ctx.set_gpr(31, 0x08A59C70u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0080_entry, 80u, 556u, 0x089467C8u>(ctx, &aot_mem) && ctx.pc == 0x08A59C70u) goto L_08A59C70;
    return;
L_08A59C70:
    ctx.set_gpr(3, 2246u << 16u);
    rt.memory().aot_store32(ctx.gpr[3] + static_cast<std::uint32_t>(-21744), 0u);
    goto L_08A59C78;
L_08A59C78:
    ctx.set_gpr(3, 2246u << 16u);
    ctx.set_gpr(4, rt.memory().aot_load32(ctx.gpr[3] + static_cast<std::uint32_t>(-21740)));
    { const bool branch_taken = ctx.gpr[4] == 0u;
    // nop
      if (branch_taken) {
          goto L_08A59CB4;
      }
      goto L_08A59C88;
    }
L_08A59C88:
    ctx.set_gpr(3, rt.memory().aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(4)));
    ctx.set_gpr(3, ctx.gpr[3] + static_cast<std::uint32_t>(-1));
    rt.memory().aot_store32(ctx.gpr[4] + static_cast<std::uint32_t>(4), ctx.gpr[3]);
    ctx.set_gpr(3, ctx.gpr[3] << 10u);
    ctx.set_gpr(3, ctx.gpr[3] >> 10u);
    { const bool branch_taken = ctx.gpr[3] != 0u;
    // nop
      if (branch_taken) {
          goto L_08A59CAC;
      }
      goto L_08A59CA4;
    }
L_08A59CA4:
    ctx.set_gpr(31, 0x08A59CACu);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0080_entry, 80u, 556u, 0x089467C8u>(ctx, &aot_mem) && ctx.pc == 0x08A59CACu) goto L_08A59CAC;
    return;
L_08A59CAC:
    ctx.set_gpr(3, 2246u << 16u);
    rt.memory().aot_store32(ctx.gpr[3] + static_cast<std::uint32_t>(-21740), 0u);
    goto L_08A59CB4;
L_08A59CB4:
    ctx.set_gpr(3, 2246u << 16u);
    ctx.set_gpr(4, rt.memory().aot_load32(ctx.gpr[3] + static_cast<std::uint32_t>(-21736)));
    { const bool branch_taken = ctx.gpr[4] == 0u;
    // nop
      if (branch_taken) {
          goto L_08A59CF0;
      }
      goto L_08A59CC4;
    }
L_08A59CC4:
    ctx.set_gpr(3, rt.memory().aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(4)));
    ctx.set_gpr(3, ctx.gpr[3] + static_cast<std::uint32_t>(-1));
    rt.memory().aot_store32(ctx.gpr[4] + static_cast<std::uint32_t>(4), ctx.gpr[3]);
    ctx.set_gpr(3, ctx.gpr[3] << 10u);
    ctx.set_gpr(3, ctx.gpr[3] >> 10u);
    { const bool branch_taken = ctx.gpr[3] != 0u;
    // nop
      if (branch_taken) {
          goto L_08A59CE8;
      }
      goto L_08A59CE0;
    }
L_08A59CE0:
    ctx.set_gpr(31, 0x08A59CE8u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0080_entry, 80u, 556u, 0x089467C8u>(ctx, &aot_mem) && ctx.pc == 0x08A59CE8u) goto L_08A59CE8;
    return;
L_08A59CE8:
    ctx.set_gpr(3, 2246u << 16u);
    rt.memory().aot_store32(ctx.gpr[3] + static_cast<std::uint32_t>(-21736), 0u);
    goto L_08A59CF0;
L_08A59CF0:
    ctx.set_gpr(3, 2246u << 16u);
    ctx.set_gpr(4, rt.memory().aot_load32(ctx.gpr[3] + static_cast<std::uint32_t>(-21732)));
    { const bool branch_taken = ctx.gpr[4] == 0u;
    // nop
      if (branch_taken) {
          goto L_08A59D2C;
      }
      goto L_08A59D00;
    }
L_08A59D00:
    ctx.set_gpr(3, rt.memory().aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(4)));
    ctx.set_gpr(3, ctx.gpr[3] + static_cast<std::uint32_t>(-1));
    rt.memory().aot_store32(ctx.gpr[4] + static_cast<std::uint32_t>(4), ctx.gpr[3]);
    ctx.set_gpr(3, ctx.gpr[3] << 10u);
    ctx.set_gpr(3, ctx.gpr[3] >> 10u);
    { const bool branch_taken = ctx.gpr[3] != 0u;
    // nop
      if (branch_taken) {
          goto L_08A59D24;
      }
      goto L_08A59D1C;
    }
L_08A59D1C:
    ctx.set_gpr(31, 0x08A59D24u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0080_entry, 80u, 556u, 0x089467C8u>(ctx, &aot_mem) && ctx.pc == 0x08A59D24u) goto L_08A59D24;
    return;
L_08A59D24:
    ctx.set_gpr(3, 2246u << 16u);
    rt.memory().aot_store32(ctx.gpr[3] + static_cast<std::uint32_t>(-21732), 0u);
    goto L_08A59D2C;
L_08A59D2C:
    ctx.set_gpr(3, 2246u << 16u);
    ctx.set_gpr(4, rt.memory().aot_load32(ctx.gpr[3] + static_cast<std::uint32_t>(-21724)));
    { const bool branch_taken = ctx.gpr[4] == 0u;
    // nop
      if (branch_taken) {
          goto L_08A59D68;
      }
      goto L_08A59D3C;
    }
L_08A59D3C:
    ctx.set_gpr(3, rt.memory().aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(4)));
    ctx.set_gpr(3, ctx.gpr[3] + static_cast<std::uint32_t>(-1));
    rt.memory().aot_store32(ctx.gpr[4] + static_cast<std::uint32_t>(4), ctx.gpr[3]);
    ctx.set_gpr(3, ctx.gpr[3] << 10u);
    ctx.set_gpr(3, ctx.gpr[3] >> 10u);
    { const bool branch_taken = ctx.gpr[3] != 0u;
    // nop
      if (branch_taken) {
          goto L_08A59D60;
      }
      goto L_08A59D58;
    }
L_08A59D58:
    ctx.set_gpr(31, 0x08A59D60u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0080_entry, 80u, 556u, 0x089467C8u>(ctx, &aot_mem) && ctx.pc == 0x08A59D60u) goto L_08A59D60;
    return;
L_08A59D60:
    ctx.set_gpr(3, 2246u << 16u);
    rt.memory().aot_store32(ctx.gpr[3] + static_cast<std::uint32_t>(-21724), 0u);
    goto L_08A59D68;
L_08A59D68:
    ctx.set_gpr(3, 2246u << 16u);
    ctx.set_gpr(4, rt.memory().aot_load32(ctx.gpr[3] + static_cast<std::uint32_t>(-21728)));
    { const bool branch_taken = ctx.gpr[4] == 0u;
    // nop
      if (branch_taken) {
          goto L_08A59DA4;
      }
      goto L_08A59D78;
    }
L_08A59D78:
    ctx.set_gpr(3, rt.memory().aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(4)));
    ctx.set_gpr(3, ctx.gpr[3] + static_cast<std::uint32_t>(-1));
    rt.memory().aot_store32(ctx.gpr[4] + static_cast<std::uint32_t>(4), ctx.gpr[3]);
    ctx.set_gpr(3, ctx.gpr[3] << 10u);
    ctx.set_gpr(3, ctx.gpr[3] >> 10u);
    { const bool branch_taken = ctx.gpr[3] != 0u;
    // nop
      if (branch_taken) {
          goto L_08A59D9C;
      }
      goto L_08A59D94;
    }
L_08A59D94:
    ctx.set_gpr(31, 0x08A59D9Cu);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0080_entry, 80u, 556u, 0x089467C8u>(ctx, &aot_mem) && ctx.pc == 0x08A59D9Cu) goto L_08A59D9C;
    return;
L_08A59D9C:
    ctx.set_gpr(3, 2246u << 16u);
    rt.memory().aot_store32(ctx.gpr[3] + static_cast<std::uint32_t>(-21728), 0u);
    goto L_08A59DA4;
L_08A59DA4:
    ctx.set_gpr(3, 2246u << 16u);
    ctx.set_gpr(4, rt.memory().aot_load32(ctx.gpr[3] + static_cast<std::uint32_t>(-21720)));
    { const bool branch_taken = ctx.gpr[4] == 0u;
    // nop
      if (branch_taken) {
          goto L_08A59DE0;
      }
      goto L_08A59DB4;
    }
L_08A59DB4:
    ctx.set_gpr(3, rt.memory().aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(4)));
    ctx.set_gpr(3, ctx.gpr[3] + static_cast<std::uint32_t>(-1));
    rt.memory().aot_store32(ctx.gpr[4] + static_cast<std::uint32_t>(4), ctx.gpr[3]);
    ctx.set_gpr(3, ctx.gpr[3] << 10u);
    ctx.set_gpr(3, ctx.gpr[3] >> 10u);
    { const bool branch_taken = ctx.gpr[3] != 0u;
    // nop
      if (branch_taken) {
          goto L_08A59DD8;
      }
      goto L_08A59DD0;
    }
L_08A59DD0:
    ctx.set_gpr(31, 0x08A59DD8u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0080_entry, 80u, 556u, 0x089467C8u>(ctx, &aot_mem) && ctx.pc == 0x08A59DD8u) goto L_08A59DD8;
    return;
L_08A59DD8:
    ctx.set_gpr(3, 2246u << 16u);
    rt.memory().aot_store32(ctx.gpr[3] + static_cast<std::uint32_t>(-21720), 0u);
    goto L_08A59DE0;
L_08A59DE0:
    ctx.set_gpr(3, 2246u << 16u);
    ctx.set_gpr(4, rt.memory().aot_load32(ctx.gpr[3] + static_cast<std::uint32_t>(-21716)));
    { const bool branch_taken = ctx.gpr[4] == 0u;
    // nop
      if (branch_taken) {
          goto L_08A59E1C;
      }
      goto L_08A59DF0;
    }
L_08A59DF0:
    ctx.set_gpr(3, rt.memory().aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(4)));
    ctx.set_gpr(3, ctx.gpr[3] + static_cast<std::uint32_t>(-1));
    rt.memory().aot_store32(ctx.gpr[4] + static_cast<std::uint32_t>(4), ctx.gpr[3]);
    ctx.set_gpr(3, ctx.gpr[3] << 10u);
    ctx.set_gpr(3, ctx.gpr[3] >> 10u);
    { const bool branch_taken = ctx.gpr[3] != 0u;
    // nop
      if (branch_taken) {
          goto L_08A59E14;
      }
      goto L_08A59E0C;
    }
L_08A59E0C:
    ctx.set_gpr(31, 0x08A59E14u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0080_entry, 80u, 556u, 0x089467C8u>(ctx, &aot_mem) && ctx.pc == 0x08A59E14u) goto L_08A59E14;
    return;
L_08A59E14:
    ctx.set_gpr(3, 2246u << 16u);
    rt.memory().aot_store32(ctx.gpr[3] + static_cast<std::uint32_t>(-21716), 0u);
    goto L_08A59E1C;
L_08A59E1C:
    rt.memory().aot_store8(ctx.gpr[28] + static_cast<std::uint32_t>(-32149), static_cast<std::uint8_t>(0u));
    ctx.set_gpr(31, rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(12)));
    ctx.set_gpr(29, ctx.gpr[29] + static_cast<std::uint32_t>(16));
    jump_target = ctx.gpr[31];
    // nop
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_08A59E30:
    ctx.set_gpr(29, ctx.gpr[29] + static_cast<std::uint32_t>(-16));
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(12), ctx.gpr[31]);
    ctx.set_gpr(31, 0x08A59E40u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0078_entry, 78u, 216u, 0x0893CDDCu>(ctx, &aot_mem) && ctx.pc == 0x08A59E40u) goto L_08A59E40;
    return;
L_08A59E40:
    ctx.set_gpr(4, rt.memory().aot_load32(ctx.gpr[2] + static_cast<std::uint32_t>(0)));
    ctx.set_gpr(31, 0x08A59E4Cu);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0078_entry, 78u, 199u, 0x0893CC68u>(ctx, &aot_mem) && ctx.pc == 0x08A59E4Cu) goto L_08A59E4C;
    return;
L_08A59E4C:
    ctx.set_gpr(4, ctx.gpr[2] + 0u);
    ctx.set_gpr(31, 0x08A59E58u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0047_entry, 47u, 298u, 0x088C1B10u>(ctx, &aot_mem) && ctx.pc == 0x08A59E58u) goto L_08A59E58;
    return;
L_08A59E58:
    ctx.set_gpr(3, 2246u << 16u);
    rt.memory().aot_store32(ctx.gpr[3] + static_cast<std::uint32_t>(-21748), ctx.gpr[2]);
    ctx.set_gpr(31, 0x08A59E68u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0078_entry, 78u, 216u, 0x0893CDDCu>(ctx, &aot_mem) && ctx.pc == 0x08A59E68u) goto L_08A59E68;
    return;
L_08A59E68:
    ctx.set_gpr(4, rt.memory().aot_load32(ctx.gpr[2] + static_cast<std::uint32_t>(0)));
    ctx.set_gpr(31, 0x08A59E74u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0078_entry, 78u, 199u, 0x0893CC68u>(ctx, &aot_mem) && ctx.pc == 0x08A59E74u) goto L_08A59E74;
    return;
L_08A59E74:
    ctx.set_gpr(4, ctx.gpr[2] + 0u);
    ctx.set_gpr(31, 0x08A59E80u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0047_entry, 47u, 298u, 0x088C1B10u>(ctx, &aot_mem) && ctx.pc == 0x08A59E80u) goto L_08A59E80;
    return;
L_08A59E80:
    ctx.set_gpr(3, 2246u << 16u);
    rt.memory().aot_store32(ctx.gpr[3] + static_cast<std::uint32_t>(-21744), ctx.gpr[2]);
    ctx.set_gpr(4, ctx.gpr[2] + 0u);
    ctx.set_gpr(5, 0u + 0u);
    ctx.set_gpr(25, rt.memory().aot_load32(ctx.gpr[2] + static_cast<std::uint32_t>(0)));
    ctx.set_gpr(25, rt.memory().aot_load32(ctx.gpr[25] + static_cast<std::uint32_t>(136)));
    jump_target = ctx.gpr[25];
    ctx.set_gpr(31, 0x08A59EA0u);
    // nop
    ctx.pc = jump_target;
    if (rt.invoke_chained_call(ctx, &aot_mem) && ctx.pc == 0x08A59EA0u) goto L_08A59EA0;
    return;
L_08A59EA0:
    ctx.set_gpr(2, 2246u << 16u);
    ctx.set_gpr(4, rt.memory().aot_load32(ctx.gpr[2] + static_cast<std::uint32_t>(-21744)));
    ctx.set_gpr(5, 0u + 0u);
    ctx.set_gpr(25, rt.memory().aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(0)));
    ctx.set_gpr(25, rt.memory().aot_load32(ctx.gpr[25] + static_cast<std::uint32_t>(140)));
    jump_target = ctx.gpr[25];
    ctx.set_gpr(31, 0x08A59EBCu);
    // nop
    ctx.pc = jump_target;
    if (rt.invoke_chained_call(ctx, &aot_mem) && ctx.pc == 0x08A59EBCu) goto L_08A59EBC;
    return;
L_08A59EBC:
    ctx.set_gpr(31, 0x08A59EC4u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0078_entry, 78u, 216u, 0x0893CDDCu>(ctx, &aot_mem) && ctx.pc == 0x08A59EC4u) goto L_08A59EC4;
    return;
L_08A59EC4:
    ctx.set_gpr(4, rt.memory().aot_load32(ctx.gpr[2] + static_cast<std::uint32_t>(0)));
    ctx.set_gpr(31, 0x08A59ED0u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0078_entry, 78u, 199u, 0x0893CC68u>(ctx, &aot_mem) && ctx.pc == 0x08A59ED0u) goto L_08A59ED0;
    return;
L_08A59ED0:
    ctx.set_gpr(4, ctx.gpr[2] + 0u);
    ctx.set_gpr(31, 0x08A59EDCu);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0047_entry, 47u, 194u, 0x088C11E0u>(ctx, &aot_mem) && ctx.pc == 0x08A59EDCu) goto L_08A59EDC;
    return;
L_08A59EDC:
    ctx.set_gpr(3, 2246u << 16u);
    rt.memory().aot_store32(ctx.gpr[3] + static_cast<std::uint32_t>(-21740), ctx.gpr[2]);
    ctx.set_gpr(4, ctx.gpr[2] + 0u);
    ctx.set_gpr(5, 0u + static_cast<std::uint32_t>(1));
    ctx.set_gpr(25, rt.memory().aot_load32(ctx.gpr[2] + static_cast<std::uint32_t>(0)));
    ctx.set_gpr(25, rt.memory().aot_load32(ctx.gpr[25] + static_cast<std::uint32_t>(136)));
    jump_target = ctx.gpr[25];
    ctx.set_gpr(31, 0x08A59EFCu);
    // nop
    ctx.pc = jump_target;
    if (rt.invoke_chained_call(ctx, &aot_mem) && ctx.pc == 0x08A59EFCu) goto L_08A59EFC;
    return;
L_08A59EFC:
    ctx.set_gpr(31, 0x08A59F04u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0078_entry, 78u, 216u, 0x0893CDDCu>(ctx, &aot_mem) && ctx.pc == 0x08A59F04u) goto L_08A59F04;
    return;
L_08A59F04:
    ctx.set_gpr(4, rt.memory().aot_load32(ctx.gpr[2] + static_cast<std::uint32_t>(0)));
    ctx.set_gpr(31, 0x08A59F10u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0078_entry, 78u, 199u, 0x0893CC68u>(ctx, &aot_mem) && ctx.pc == 0x08A59F10u) goto L_08A59F10;
    return;
L_08A59F10:
    ctx.set_gpr(4, ctx.gpr[2] + 0u);
    ctx.set_gpr(31, 0x08A59F1Cu);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0045_entry, 45u, 631u, 0x088BBA54u>(ctx, &aot_mem) && ctx.pc == 0x08A59F1Cu) goto L_08A59F1C;
    return;
L_08A59F1C:
    ctx.set_gpr(3, 2246u << 16u);
    rt.memory().aot_store32(ctx.gpr[3] + static_cast<std::uint32_t>(-21736), ctx.gpr[2]);
    ctx.set_gpr(4, ctx.gpr[2] + 0u);
    ctx.set_gpr(5, 0u + 0u);
    ctx.set_gpr(25, rt.memory().aot_load32(ctx.gpr[2] + static_cast<std::uint32_t>(0)));
    ctx.set_gpr(25, rt.memory().aot_load32(ctx.gpr[25] + static_cast<std::uint32_t>(136)));
    jump_target = ctx.gpr[25];
    ctx.set_gpr(31, 0x08A59F3Cu);
    // nop
    ctx.pc = jump_target;
    if (rt.invoke_chained_call(ctx, &aot_mem) && ctx.pc == 0x08A59F3Cu) goto L_08A59F3C;
    return;
L_08A59F3C:
    ctx.set_gpr(31, 0x08A59F44u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0078_entry, 78u, 216u, 0x0893CDDCu>(ctx, &aot_mem) && ctx.pc == 0x08A59F44u) goto L_08A59F44;
    return;
L_08A59F44:
    ctx.set_gpr(4, rt.memory().aot_load32(ctx.gpr[2] + static_cast<std::uint32_t>(0)));
    ctx.set_gpr(31, 0x08A59F50u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0078_entry, 78u, 199u, 0x0893CC68u>(ctx, &aot_mem) && ctx.pc == 0x08A59F50u) goto L_08A59F50;
    return;
L_08A59F50:
    ctx.set_gpr(4, ctx.gpr[2] + 0u);
    ctx.set_gpr(31, 0x08A59F5Cu);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0043_entry, 43u, 45u, 0x088B0444u>(ctx, &aot_mem) && ctx.pc == 0x08A59F5Cu) goto L_08A59F5C;
    return;
L_08A59F5C:
    ctx.set_gpr(3, 2246u << 16u);
    rt.memory().aot_store32(ctx.gpr[3] + static_cast<std::uint32_t>(-21732), ctx.gpr[2]);
    ctx.set_gpr(4, ctx.gpr[2] + 0u);
    ctx.set_gpr(5, 0u + 0u);
    ctx.set_gpr(25, rt.memory().aot_load32(ctx.gpr[2] + static_cast<std::uint32_t>(0)));
    ctx.set_gpr(25, rt.memory().aot_load32(ctx.gpr[25] + static_cast<std::uint32_t>(136)));
    jump_target = ctx.gpr[25];
    ctx.set_gpr(31, 0x08A59F7Cu);
    // nop
    ctx.pc = jump_target;
    if (rt.invoke_chained_call(ctx, &aot_mem) && ctx.pc == 0x08A59F7Cu) goto L_08A59F7C;
    return;
L_08A59F7C:
    ctx.set_gpr(31, 0x08A59F84u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0078_entry, 78u, 216u, 0x0893CDDCu>(ctx, &aot_mem) && ctx.pc == 0x08A59F84u) goto L_08A59F84;
    return;
L_08A59F84:
    ctx.set_gpr(4, rt.memory().aot_load32(ctx.gpr[2] + static_cast<std::uint32_t>(0)));
    ctx.set_gpr(31, 0x08A59F90u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0078_entry, 78u, 199u, 0x0893CC68u>(ctx, &aot_mem) && ctx.pc == 0x08A59F90u) goto L_08A59F90;
    return;
L_08A59F90:
    ctx.set_gpr(4, ctx.gpr[2] + 0u);
    ctx.set_gpr(31, 0x08A59F9Cu);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0047_entry, 47u, 618u, 0x088C368Cu>(ctx, &aot_mem) && ctx.pc == 0x08A59F9Cu) goto L_08A59F9C;
    return;
L_08A59F9C:
    ctx.set_gpr(3, 2246u << 16u);
    rt.memory().aot_store32(ctx.gpr[3] + static_cast<std::uint32_t>(-21724), ctx.gpr[2]);
    ctx.set_gpr(4, ctx.gpr[2] + 0u);
    ctx.set_gpr(5, 0u + 0u);
    ctx.set_gpr(25, rt.memory().aot_load32(ctx.gpr[2] + static_cast<std::uint32_t>(0)));
    ctx.set_gpr(25, rt.memory().aot_load32(ctx.gpr[25] + static_cast<std::uint32_t>(136)));
    jump_target = ctx.gpr[25];
    ctx.set_gpr(31, 0x08A59FBCu);
    // nop
    ctx.pc = jump_target;
    if (rt.invoke_chained_call(ctx, &aot_mem) && ctx.pc == 0x08A59FBCu) goto L_08A59FBC;
    return;
L_08A59FBC:
    ctx.set_gpr(31, 0x08A59FC4u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0078_entry, 78u, 216u, 0x0893CDDCu>(ctx, &aot_mem) && ctx.pc == 0x08A59FC4u) goto L_08A59FC4;
    return;
L_08A59FC4:
    ctx.set_gpr(4, rt.memory().aot_load32(ctx.gpr[2] + static_cast<std::uint32_t>(0)));
    ctx.set_gpr(31, 0x08A59FD0u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0078_entry, 78u, 199u, 0x0893CC68u>(ctx, &aot_mem) && ctx.pc == 0x08A59FD0u) goto L_08A59FD0;
    return;
L_08A59FD0:
    ctx.set_gpr(4, ctx.gpr[2] + 0u);
    ctx.set_gpr(31, 0x08A59FDCu);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0046_entry, 46u, 151u, 0x088BCE24u>(ctx, &aot_mem) && ctx.pc == 0x08A59FDCu) goto L_08A59FDC;
    return;
L_08A59FDC:
    ctx.set_gpr(3, 2246u << 16u);
    rt.memory().aot_store32(ctx.gpr[3] + static_cast<std::uint32_t>(-21728), ctx.gpr[2]);
    ctx.set_gpr(3, 0u + static_cast<std::uint32_t>(1));
    rt.memory().aot_store32(ctx.gpr[2] + static_cast<std::uint32_t>(12), ctx.gpr[3]);
    ctx.set_gpr(31, 0x08A59FF4u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0078_entry, 78u, 216u, 0x0893CDDCu>(ctx, &aot_mem) && ctx.pc == 0x08A59FF4u) goto L_08A59FF4;
    return;
L_08A59FF4:
    ctx.set_gpr(4, rt.memory().aot_load32(ctx.gpr[2] + static_cast<std::uint32_t>(0)));
    ctx.set_gpr(31, 0x08A5A000u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0078_entry, 78u, 199u, 0x0893CC68u>(ctx, &aot_mem) && ctx.pc == 0x08A5A000u) goto L_08A5A000;
    return;
L_08A5A000:
    ctx.set_gpr(4, ctx.gpr[2] + 0u);
    ctx.set_gpr(31, 0x08A5A00Cu);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0043_entry, 43u, 596u, 0x088B3744u>(ctx, &aot_mem) && ctx.pc == 0x08A5A00Cu) goto L_08A5A00C;
    return;
L_08A5A00C:
    ctx.set_gpr(3, 2246u << 16u);
    rt.memory().aot_store32(ctx.gpr[3] + static_cast<std::uint32_t>(-21720), ctx.gpr[2]);
    ctx.set_gpr(4, ctx.gpr[2] + 0u);
    ctx.set_gpr(5, 0u + 0u);
    ctx.set_gpr(25, rt.memory().aot_load32(ctx.gpr[2] + static_cast<std::uint32_t>(0)));
    ctx.set_gpr(25, rt.memory().aot_load32(ctx.gpr[25] + static_cast<std::uint32_t>(140)));
    jump_target = ctx.gpr[25];
    ctx.set_gpr(31, 0x08A5A02Cu);
    // nop
    ctx.pc = jump_target;
    if (rt.invoke_chained_call(ctx, &aot_mem) && ctx.pc == 0x08A5A02Cu) goto L_08A5A02C;
    return;
L_08A5A02C:
    ctx.set_gpr(2, 2246u << 16u);
    ctx.set_gpr(4, rt.memory().aot_load32(ctx.gpr[2] + static_cast<std::uint32_t>(-21720)));
    ctx.set_gpr(5, 0u + static_cast<std::uint32_t>(2));
    ctx.set_gpr(25, rt.memory().aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(0)));
    ctx.set_gpr(25, rt.memory().aot_load32(ctx.gpr[25] + static_cast<std::uint32_t>(148)));
    jump_target = ctx.gpr[25];
    ctx.set_gpr(31, 0x08A5A048u);
    // nop
    ctx.pc = jump_target;
    if (rt.invoke_chained_call(ctx, &aot_mem) && ctx.pc == 0x08A5A048u) goto L_08A5A048;
    return;
L_08A5A048:
    ctx.set_gpr(2, 2246u << 16u);
    ctx.set_gpr(4, rt.memory().aot_load32(ctx.gpr[2] + static_cast<std::uint32_t>(-21720)));
    ctx.set_gpr(5, 0u + 0u);
    ctx.set_gpr(6, 0u + static_cast<std::uint32_t>(3));
    ctx.set_gpr(7, ctx.gpr[6] + 0u);
    ctx.set_gpr(25, rt.memory().aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(0)));
    ctx.set_gpr(25, rt.memory().aot_load32(ctx.gpr[25] + static_cast<std::uint32_t>(152)));
    jump_target = ctx.gpr[25];
    ctx.set_gpr(31, 0x08A5A06Cu);
    // nop
    ctx.pc = jump_target;
    if (rt.invoke_chained_call(ctx, &aot_mem) && ctx.pc == 0x08A5A06Cu) goto L_08A5A06C;
    return;
L_08A5A06C:
    ctx.set_gpr(31, 0x08A5A074u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0078_entry, 78u, 216u, 0x0893CDDCu>(ctx, &aot_mem) && ctx.pc == 0x08A5A074u) goto L_08A5A074;
    return;
L_08A5A074:
    ctx.set_gpr(4, rt.memory().aot_load32(ctx.gpr[2] + static_cast<std::uint32_t>(0)));
    ctx.set_gpr(31, 0x08A5A080u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0078_entry, 78u, 199u, 0x0893CC68u>(ctx, &aot_mem) && ctx.pc == 0x08A5A080u) goto L_08A5A080;
    return;
L_08A5A080:
    ctx.set_gpr(4, ctx.gpr[2] + 0u);
    ctx.set_gpr(31, 0x08A5A08Cu);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0046_entry, 46u, 648u, 0x088BFB6Cu>(ctx, &aot_mem) && ctx.pc == 0x08A5A08Cu) goto L_08A5A08C;
    return;
L_08A5A08C:
    ctx.set_gpr(3, 2246u << 16u);
    rt.memory().aot_store32(ctx.gpr[3] + static_cast<std::uint32_t>(-21716), ctx.gpr[2]);
    ctx.set_gpr(4, ctx.gpr[2] + 0u);
    ctx.set_gpr(5, 0u + 0u);
    ctx.set_gpr(25, rt.memory().aot_load32(ctx.gpr[2] + static_cast<std::uint32_t>(0)));
    ctx.set_gpr(25, rt.memory().aot_load32(ctx.gpr[25] + static_cast<std::uint32_t>(140)));
    jump_target = ctx.gpr[25];
    ctx.set_gpr(31, 0x08A5A0ACu);
    // nop
    ctx.pc = jump_target;
    if (rt.invoke_chained_call(ctx, &aot_mem) && ctx.pc == 0x08A5A0ACu) goto L_08A5A0AC;
    return;
L_08A5A0AC:
    ctx.set_gpr(3, 0u + static_cast<std::uint32_t>(1));
    rt.memory().aot_store8(ctx.gpr[28] + static_cast<std::uint32_t>(-32149), static_cast<std::uint8_t>(ctx.gpr[3]));
    ctx.set_gpr(31, rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(12)));
    ctx.set_gpr(29, ctx.gpr[29] + static_cast<std::uint32_t>(16));
    jump_target = ctx.gpr[31];
    // nop
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_08A5A0C4:
    ctx.set_gpr(29, ctx.gpr[29] + static_cast<std::uint32_t>(-16));
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(12), ctx.gpr[31]);
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(8), ctx.gpr[16]);
    ctx.set_gpr(16, ctx.gpr[4] + 0u);
    ctx.set_gpr(31, 0x08A5A0DCu);
    // nop
    goto L_08A590A8;
L_08A5A0DC:
    ctx.set_gpr(4, ctx.gpr[16] + 0u);
    ctx.set_gpr(25, rt.memory().aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(0)));
    ctx.set_gpr(25, rt.memory().aot_load32(ctx.gpr[25] + static_cast<std::uint32_t>(88)));
    jump_target = ctx.gpr[25];
    ctx.set_gpr(31, 0x08A5A0F0u);
    // nop
    ctx.pc = jump_target;
    if (rt.invoke_chained_call(ctx, &aot_mem) && ctx.pc == 0x08A5A0F0u) goto L_08A5A0F0;
    return;
L_08A5A0F0:
    ctx.set_gpr(4, ctx.gpr[2] + 0u);
    ctx.set_gpr(5, 0u + static_cast<std::uint32_t>(1));
    ctx.set_gpr(31, 0x08A5A100u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0080_entry, 80u, 118u, 0x089448B4u>(ctx, &aot_mem) && ctx.pc == 0x08A5A100u) goto L_08A5A100;
    return;
L_08A5A100:
    { const bool branch_taken = ctx.gpr[2] != 0u;
    // nop
      if (branch_taken) {
          goto L_08A5A114;
      }
      goto L_08A5A108;
    }
L_08A5A108:
    ctx.set_gpr(4, ctx.gpr[16] + 0u);
    ctx.set_gpr(31, 0x08A5A114u);
    // nop
    goto L_08A59E30;
L_08A5A114:
    ctx.set_gpr(31, rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(12)));
    ctx.set_gpr(16, rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(8)));
    ctx.set_gpr(29, ctx.gpr[29] + static_cast<std::uint32_t>(16));
    jump_target = ctx.gpr[31];
    // nop
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_08A5A128:
    ctx.set_gpr(2, 2246u << 16u);
    ctx.set_gpr(2, rt.memory().aot_load32(ctx.gpr[2] + static_cast<std::uint32_t>(-25204)));
    jump_target = ctx.gpr[31];
    // nop
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_08A5A138:
    ctx.set_gpr(29, ctx.gpr[29] + static_cast<std::uint32_t>(-16));
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(12), ctx.gpr[31]);
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(8), ctx.gpr[16]);
    ctx.set_gpr(16, ctx.gpr[4] + 0u);
    ctx.set_gpr(25, rt.memory().aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(0)));
    ctx.set_gpr(25, rt.memory().aot_load32(ctx.gpr[25] + static_cast<std::uint32_t>(88)));
    jump_target = ctx.gpr[25];
    ctx.set_gpr(31, 0x08A5A158u);
    // nop
    ctx.pc = jump_target;
    if (rt.invoke_chained_call(ctx, &aot_mem) && ctx.pc == 0x08A5A158u) goto L_08A5A158;
    return;
L_08A5A158:
    ctx.set_gpr(4, ctx.gpr[2] + 0u);
    ctx.set_gpr(5, 0u + static_cast<std::uint32_t>(1));
    ctx.set_gpr(31, 0x08A5A168u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0080_entry, 80u, 118u, 0x089448B4u>(ctx, &aot_mem) && ctx.pc == 0x08A5A168u) goto L_08A5A168;
    return;
L_08A5A168:
    { const bool branch_taken = ctx.gpr[2] != 0u;
    // nop
      if (branch_taken) {
          goto L_08A5A17C;
      }
      goto L_08A5A170;
    }
L_08A5A170:
    ctx.set_gpr(4, ctx.gpr[16] + 0u);
    ctx.set_gpr(31, 0x08A5A17Cu);
    // nop
    goto L_08A59BEC;
L_08A5A17C:
    ctx.set_gpr(4, ctx.gpr[16] + 0u);
    ctx.set_gpr(31, 0x08A5A188u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0145_entry, 145u, 225u, 0x08A491B0u>(ctx, &aot_mem) && ctx.pc == 0x08A5A188u) goto L_08A5A188;
    return;
L_08A5A188:
    ctx.set_gpr(31, rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(12)));
    ctx.set_gpr(16, rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(8)));
    ctx.set_gpr(29, ctx.gpr[29] + static_cast<std::uint32_t>(16));
    jump_target = ctx.gpr[31];
    // nop
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_08A5A19C:
    ctx.set_gpr(29, ctx.gpr[29] + static_cast<std::uint32_t>(-16));
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(12), ctx.gpr[31]);
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(8), ctx.gpr[18]);
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(4), ctx.gpr[17]);
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(0), ctx.gpr[16]);
    ctx.set_gpr(18, ctx.gpr[4] + 0u);
    ctx.set_gpr(17, ctx.gpr[6] + 0u);
    ctx.set_gpr(16, ctx.gpr[7] + 0u);
    ctx.set_gpr(4, rt.memory().aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(84)));
    ctx.set_gpr(31, 0x08A5A1C8u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0081_entry, 81u, 299u, 0x089494E0u>(ctx, &aot_mem) && ctx.pc == 0x08A5A1C8u) goto L_08A5A1C8;
    return;
L_08A5A1C8:
    ctx.set_gpr(4, rt.memory().aot_load32(ctx.gpr[18] + static_cast<std::uint32_t>(80)));
    ctx.set_gpr(5, ctx.gpr[17] + 0u);
    ctx.set_gpr(31, 0x08A5A1D8u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0081_entry, 81u, 299u, 0x089494E0u>(ctx, &aot_mem) && ctx.pc == 0x08A5A1D8u) goto L_08A5A1D8;
    return;
L_08A5A1D8:
    ctx.set_gpr(4, rt.memory().aot_load32(ctx.gpr[18] + static_cast<std::uint32_t>(88)));
    ctx.set_gpr(5, ctx.gpr[16] + 0u);
    ctx.set_gpr(31, 0x08A5A1E8u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0081_entry, 81u, 299u, 0x089494E0u>(ctx, &aot_mem) && ctx.pc == 0x08A5A1E8u) goto L_08A5A1E8;
    return;
L_08A5A1E8:
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
L_08A5A204:
    ctx.set_gpr(29, ctx.gpr[29] + static_cast<std::uint32_t>(-80));
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(12), ctx.gpr[31]);
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(8), ctx.gpr[17]);
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(4), ctx.gpr[16]);
    ctx.set_gpr(17, ctx.gpr[4] + 0u);
    ctx.set_gpr(16, 0u + 0u);
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_08A5A3A0;
      }
      goto L_08A5A224;
    }
L_08A5A224:
    ctx.set_gpr(5, ctx.gpr[16] << 2u);
    ctx.set_gpr(2, rt.memory().aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(16)));
    ctx.set_gpr(2, ctx.gpr[2] + ctx.gpr[5]);
    ctx.set_gpr(4, rt.memory().aot_load32(ctx.gpr[2] + static_cast<std::uint32_t>(0)));
    ctx.set_gpr(3, rt.memory().aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(12)));
    ctx.set_gpr(2, 0u + static_cast<std::uint32_t>(1));
    { const bool branch_taken = ctx.gpr[3] != ctx.gpr[2];
    // nop
      if (branch_taken) {
          goto L_08A5A260;
      }
      goto L_08A5A244;
    }
L_08A5A244:
    ctx.fpr[4] = std::bit_cast<float>(rt.memory().aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(116)));
    ctx.fpr[3] = std::bit_cast<float>(rt.memory().aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(120)));
    ctx.fpr[2] = std::bit_cast<float>(rt.memory().aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(124)));
    ctx.set_gpr(2, 16256u << 16u);
    ctx.fpr[19] = std::bit_cast<float>(ctx.gpr[2]);
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_08A5A27C;
      }
      goto L_08A5A260;
    }
L_08A5A260:
    ctx.fpr[0] = std::bit_cast<float>(rt.memory().aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(128)));
    ctx.set_fpr_bits(4, ctx.fpr_bits(0) ^ 0x80000000u);
    ctx.fpr[0] = std::bit_cast<float>(rt.memory().aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(132)));
    ctx.set_fpr_bits(3, ctx.fpr_bits(0) ^ 0x80000000u);
    ctx.fpr[0] = std::bit_cast<float>(rt.memory().aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(136)));
    ctx.set_fpr_bits(2, ctx.fpr_bits(0) ^ 0x80000000u);
    ctx.fpr[19] = std::bit_cast<float>(0u);
    goto L_08A5A27C;
L_08A5A27C:
    ctx.fpr[0] = std::bit_cast<float>(rt.memory().aot_load32(ctx.gpr[17] + static_cast<std::uint32_t>(48)));
    { const float fs = ctx.fpr[0]; const float ft = ctx.fpr[4]; if ((std::isinf(fs) && ft == 0.0f) || (std::isinf(ft) && fs == 0.0f)) ctx.set_fpr_bits(1, 0x7FC00000u); else ctx.fpr[1] = fs * ft; }
    ctx.fpr[0] = std::bit_cast<float>(rt.memory().aot_load32(ctx.gpr[17] + static_cast<std::uint32_t>(52)));
    { const float fs = ctx.fpr[0]; const float ft = ctx.fpr[3]; if ((std::isinf(fs) && ft == 0.0f) || (std::isinf(ft) && fs == 0.0f)) ctx.set_fpr_bits(0, 0x7FC00000u); else ctx.fpr[0] = fs * ft; }
    ctx.fpr[1] = ctx.fpr[1] + ctx.fpr[0];
    ctx.fpr[0] = std::bit_cast<float>(rt.memory().aot_load32(ctx.gpr[17] + static_cast<std::uint32_t>(56)));
    { const float fs = ctx.fpr[0]; const float ft = ctx.fpr[2]; if ((std::isinf(fs) && ft == 0.0f) || (std::isinf(ft) && fs == 0.0f)) ctx.set_fpr_bits(0, 0x7FC00000u); else ctx.fpr[0] = fs * ft; }
    ctx.fpr[1] = ctx.fpr[0] + ctx.fpr[1];
    ctx.fpr[0] = std::bit_cast<float>(rt.memory().aot_load32(ctx.gpr[17] + static_cast<std::uint32_t>(60)));
    { const float fs = ctx.fpr[0]; const float ft = ctx.fpr[19]; if ((std::isinf(fs) && ft == 0.0f) || (std::isinf(ft) && fs == 0.0f)) ctx.set_fpr_bits(0, 0x7FC00000u); else ctx.fpr[0] = fs * ft; }
    ctx.fpr[1] = ctx.fpr[0] + ctx.fpr[1];
    ctx.fpr[7] = std::bit_cast<float>(rt.memory().aot_load32(ctx.gpr[17] + static_cast<std::uint32_t>(52)));
    { const float fs = ctx.fpr[4]; const float ft = ctx.fpr[7]; if ((std::isinf(fs) && ft == 0.0f) || (std::isinf(ft) && fs == 0.0f)) ctx.set_fpr_bits(18, 0x7FC00000u); else ctx.fpr[18] = fs * ft; }
    ctx.fpr[6] = std::bit_cast<float>(rt.memory().aot_load32(ctx.gpr[17] + static_cast<std::uint32_t>(56)));
    { const float fs = ctx.fpr[4]; const float ft = ctx.fpr[6]; if ((std::isinf(fs) && ft == 0.0f) || (std::isinf(ft) && fs == 0.0f)) ctx.set_fpr_bits(17, 0x7FC00000u); else ctx.fpr[17] = fs * ft; }
    ctx.fpr[5] = std::bit_cast<float>(rt.memory().aot_load32(ctx.gpr[17] + static_cast<std::uint32_t>(60)));
    { const float fs = ctx.fpr[4]; const float ft = ctx.fpr[5]; if ((std::isinf(fs) && ft == 0.0f) || (std::isinf(ft) && fs == 0.0f)) ctx.set_fpr_bits(0, 0x7FC00000u); else ctx.fpr[0] = fs * ft; }
    { const float fs = ctx.fpr[3]; const float ft = ctx.fpr[7]; if ((std::isinf(fs) && ft == 0.0f) || (std::isinf(ft) && fs == 0.0f)) ctx.set_fpr_bits(16, 0x7FC00000u); else ctx.fpr[16] = fs * ft; }
    { const float fs = ctx.fpr[3]; const float ft = ctx.fpr[6]; if ((std::isinf(fs) && ft == 0.0f) || (std::isinf(ft) && fs == 0.0f)) ctx.set_fpr_bits(15, 0x7FC00000u); else ctx.fpr[15] = fs * ft; }
    { const float fs = ctx.fpr[3]; const float ft = ctx.fpr[5]; if ((std::isinf(fs) && ft == 0.0f) || (std::isinf(ft) && fs == 0.0f)) ctx.set_fpr_bits(14, 0x7FC00000u); else ctx.fpr[14] = fs * ft; }
    { const float fs = ctx.fpr[2]; const float ft = ctx.fpr[7]; if ((std::isinf(fs) && ft == 0.0f) || (std::isinf(ft) && fs == 0.0f)) ctx.set_fpr_bits(13, 0x7FC00000u); else ctx.fpr[13] = fs * ft; }
    { const float fs = ctx.fpr[2]; const float ft = ctx.fpr[6]; if ((std::isinf(fs) && ft == 0.0f) || (std::isinf(ft) && fs == 0.0f)) ctx.set_fpr_bits(12, 0x7FC00000u); else ctx.fpr[12] = fs * ft; }
    { const float fs = ctx.fpr[2]; const float ft = ctx.fpr[5]; if ((std::isinf(fs) && ft == 0.0f) || (std::isinf(ft) && fs == 0.0f)) ctx.set_fpr_bits(11, 0x7FC00000u); else ctx.fpr[11] = fs * ft; }
    { const float fs = ctx.fpr[19]; const float ft = ctx.fpr[7]; if ((std::isinf(fs) && ft == 0.0f) || (std::isinf(ft) && fs == 0.0f)) ctx.set_fpr_bits(10, 0x7FC00000u); else ctx.fpr[10] = fs * ft; }
    { const float fs = ctx.fpr[19]; const float ft = ctx.fpr[6]; if ((std::isinf(fs) && ft == 0.0f) || (std::isinf(ft) && fs == 0.0f)) ctx.set_fpr_bits(9, 0x7FC00000u); else ctx.fpr[9] = fs * ft; }
    { const float fs = ctx.fpr[19]; const float ft = ctx.fpr[5]; if ((std::isinf(fs) && ft == 0.0f) || (std::isinf(ft) && fs == 0.0f)) ctx.set_fpr_bits(8, 0x7FC00000u); else ctx.fpr[8] = fs * ft; }
    ctx.fpr[7] = std::bit_cast<float>(rt.memory().aot_load32(ctx.gpr[17] + static_cast<std::uint32_t>(48)));
    { const float fs = ctx.fpr[19]; const float ft = ctx.fpr[7]; if ((std::isinf(fs) && ft == 0.0f) || (std::isinf(ft) && fs == 0.0f)) ctx.set_fpr_bits(5, 0x7FC00000u); else ctx.fpr[5] = fs * ft; }
    ctx.set_fpr_bits(6, ctx.fpr_bits(5) ^ 0x80000000u);
    { const float fs = ctx.fpr[2]; const float ft = ctx.fpr[7]; if ((std::isinf(fs) && ft == 0.0f) || (std::isinf(ft) && fs == 0.0f)) ctx.set_fpr_bits(2, 0x7FC00000u); else ctx.fpr[2] = fs * ft; }
    ctx.set_fpr_bits(5, ctx.fpr_bits(2) ^ 0x80000000u);
    { const float fs = ctx.fpr[3]; const float ft = ctx.fpr[7]; if ((std::isinf(fs) && ft == 0.0f) || (std::isinf(ft) && fs == 0.0f)) ctx.set_fpr_bits(2, 0x7FC00000u); else ctx.fpr[2] = fs * ft; }
    ctx.set_fpr_bits(3, ctx.fpr_bits(2) ^ 0x80000000u);
    { const float fs = ctx.fpr[4]; const float ft = ctx.fpr[7]; if ((std::isinf(fs) && ft == 0.0f) || (std::isinf(ft) && fs == 0.0f)) ctx.set_fpr_bits(2, 0x7FC00000u); else ctx.fpr[2] = fs * ft; }
    ctx.fpr[2] = ctx.fpr[1] - ctx.fpr[2];
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(16), std::bit_cast<std::uint32_t>(ctx.fpr[2]));
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(20), std::bit_cast<std::uint32_t>(ctx.fpr[3]));
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(24), std::bit_cast<std::uint32_t>(ctx.fpr[5]));
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(28), std::bit_cast<std::uint32_t>(ctx.fpr[6]));
    ctx.set_fpr_bits(5, ctx.fpr_bits(10) ^ 0x80000000u);
    ctx.set_fpr_bits(4, ctx.fpr_bits(13) ^ 0x80000000u);
    ctx.fpr[3] = ctx.fpr[1] - ctx.fpr[16];
    ctx.set_fpr_bits(2, ctx.fpr_bits(18) ^ 0x80000000u);
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(32), std::bit_cast<std::uint32_t>(ctx.fpr[2]));
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(36), std::bit_cast<std::uint32_t>(ctx.fpr[3]));
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(40), std::bit_cast<std::uint32_t>(ctx.fpr[4]));
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(44), std::bit_cast<std::uint32_t>(ctx.fpr[5]));
    ctx.set_fpr_bits(5, ctx.fpr_bits(9) ^ 0x80000000u);
    ctx.fpr[4] = ctx.fpr[1] - ctx.fpr[12];
    ctx.set_fpr_bits(3, ctx.fpr_bits(15) ^ 0x80000000u);
    ctx.set_fpr_bits(2, ctx.fpr_bits(17) ^ 0x80000000u);
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(48), std::bit_cast<std::uint32_t>(ctx.fpr[2]));
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(52), std::bit_cast<std::uint32_t>(ctx.fpr[3]));
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(56), std::bit_cast<std::uint32_t>(ctx.fpr[4]));
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(60), std::bit_cast<std::uint32_t>(ctx.fpr[5]));
    ctx.fpr[3] = ctx.fpr[1] - ctx.fpr[8];
    ctx.set_fpr_bits(2, ctx.fpr_bits(11) ^ 0x80000000u);
    ctx.set_fpr_bits(1, ctx.fpr_bits(14) ^ 0x80000000u);
    ctx.set_fpr_bits(0, ctx.fpr_bits(0) ^ 0x80000000u);
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(64), std::bit_cast<std::uint32_t>(ctx.fpr[0]));
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(68), std::bit_cast<std::uint32_t>(ctx.fpr[1]));
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(72), std::bit_cast<std::uint32_t>(ctx.fpr[2]));
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(76), std::bit_cast<std::uint32_t>(ctx.fpr[3]));
    ctx.set_gpr(2, rt.memory().aot_load32(ctx.gpr[17] + static_cast<std::uint32_t>(44)));
    ctx.set_gpr(2, rt.memory().aot_load32(ctx.gpr[2] + static_cast<std::uint32_t>(16)));
    ctx.set_gpr(2, ctx.gpr[2] + ctx.gpr[5]);
    ctx.set_gpr(4, rt.memory().aot_load32(ctx.gpr[2] + static_cast<std::uint32_t>(0)));
    ctx.set_gpr(5, ctx.gpr[29] + static_cast<std::uint32_t>(16));
    ctx.set_gpr(25, rt.memory().aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(0)));
    ctx.set_gpr(25, rt.memory().aot_load32(ctx.gpr[25] + static_cast<std::uint32_t>(136)));
    jump_target = ctx.gpr[25];
    ctx.set_gpr(31, 0x08A5A39Cu);
    // nop
    ctx.pc = jump_target;
    if (rt.invoke_chained_call(ctx, &aot_mem) && ctx.pc == 0x08A5A39Cu) goto L_08A5A39C;
    return;
L_08A5A39C:
    ctx.set_gpr(16, ctx.gpr[16] + static_cast<std::uint32_t>(1));
    goto L_08A5A3A0;
L_08A5A3A0:
    ctx.set_gpr(4, rt.memory().aot_load32(ctx.gpr[17] + static_cast<std::uint32_t>(40)));
    ctx.set_gpr(3, rt.memory().aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(8)));
    ctx.set_gpr(3, static_cast<std::int32_t>(ctx.gpr[16]) < static_cast<std::int32_t>(ctx.gpr[3]) ? 1u : 0u);
    { const bool branch_taken = ctx.gpr[3] != 0u;
    // nop
      if (branch_taken) {
          goto L_08A5A224;
      }
      goto L_08A5A3B4;
    }
L_08A5A3B4:
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
L_08A5A3CC:
    ctx.set_gpr(29, ctx.gpr[29] + static_cast<std::uint32_t>(-96));
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(28), ctx.gpr[31]);
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(24), ctx.gpr[21]);
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(20), ctx.gpr[20]);
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(16), ctx.gpr[19]);
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(12), ctx.gpr[18]);
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(8), ctx.gpr[17]);
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(4), ctx.gpr[16]);
    ctx.set_gpr(18, ctx.gpr[4] + 0u);
    ctx.set_gpr(17, ctx.gpr[5] + 0u);
    ctx.set_gpr(2, rt.memory().aot_load8(ctx.gpr[28] + static_cast<std::uint32_t>(-32149)));
    { const bool branch_taken = ctx.gpr[2] != 0u;
    // nop
      if (branch_taken) {
          goto L_08A5A408;
      }
      goto L_08A5A400;
    }
L_08A5A400:
    ctx.set_gpr(31, 0x08A5A408u);
    // nop
    goto L_08A59E30;
L_08A5A408:
    ctx.set_gpr(16, rt.memory().aot_load32(ctx.gpr[17] + static_cast<std::uint32_t>(52)));
    ctx.set_gpr(4, rt.memory().aot_load32(ctx.gpr[18] + static_cast<std::uint32_t>(100)));
    ctx.set_gpr(5, ctx.gpr[18] + static_cast<std::uint32_t>(64));
    ctx.set_gpr(25, rt.memory().aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(0)));
    ctx.set_gpr(25, rt.memory().aot_load32(ctx.gpr[25] + static_cast<std::uint32_t>(136)));
    jump_target = ctx.gpr[25];
    ctx.set_gpr(31, 0x08A5A424u);
    // nop
    ctx.pc = jump_target;
    if (rt.invoke_chained_call(ctx, &aot_mem) && ctx.pc == 0x08A5A424u) goto L_08A5A424;
    return;
L_08A5A424:
    ctx.set_gpr(4, rt.memory().aot_load32(ctx.gpr[18] + static_cast<std::uint32_t>(104)));
    ctx.set_gpr(5, rt.memory().aot_load8(ctx.gpr[18] + static_cast<std::uint32_t>(109)));
    ctx.set_gpr(25, rt.memory().aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(0)));
    ctx.set_gpr(25, rt.memory().aot_load32(ctx.gpr[25] + static_cast<std::uint32_t>(136)));
    jump_target = ctx.gpr[25];
    ctx.set_gpr(31, 0x08A5A43Cu);
    // nop
    ctx.pc = jump_target;
    if (rt.invoke_chained_call(ctx, &aot_mem) && ctx.pc == 0x08A5A43Cu) goto L_08A5A43C;
    return;
L_08A5A43C:
    ctx.set_gpr(4, ctx.gpr[16] + 0u);
    ctx.set_gpr(2, 2246u << 16u);
    ctx.set_gpr(5, rt.memory().aot_load32(ctx.gpr[2] + static_cast<std::uint32_t>(-21740)));
    ctx.set_gpr(31, 0x08A5A450u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0138_entry, 138u, 605u, 0x08A2EC74u>(ctx, &aot_mem) && ctx.pc == 0x08A5A450u) goto L_08A5A450;
    return;
L_08A5A450:
    ctx.set_gpr(4, ctx.gpr[16] + 0u);
    ctx.set_gpr(2, 2246u << 16u);
    ctx.set_gpr(5, rt.memory().aot_load32(ctx.gpr[2] + static_cast<std::uint32_t>(-21736)));
    ctx.set_gpr(31, 0x08A5A464u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0138_entry, 138u, 605u, 0x08A2EC74u>(ctx, &aot_mem) && ctx.pc == 0x08A5A464u) goto L_08A5A464;
    return;
L_08A5A464:
    ctx.set_gpr(4, ctx.gpr[16] + 0u);
    ctx.set_gpr(2, 2246u << 16u);
    ctx.set_gpr(5, rt.memory().aot_load32(ctx.gpr[2] + static_cast<std::uint32_t>(-21732)));
    ctx.set_gpr(31, 0x08A5A478u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0138_entry, 138u, 605u, 0x08A2EC74u>(ctx, &aot_mem) && ctx.pc == 0x08A5A478u) goto L_08A5A478;
    return;
L_08A5A478:
    ctx.set_gpr(4, ctx.gpr[16] + 0u);
    ctx.set_gpr(5, rt.memory().aot_load32(ctx.gpr[18] + static_cast<std::uint32_t>(100)));
    ctx.set_gpr(31, 0x08A5A488u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0138_entry, 138u, 605u, 0x08A2EC74u>(ctx, &aot_mem) && ctx.pc == 0x08A5A488u) goto L_08A5A488;
    return;
L_08A5A488:
    ctx.set_gpr(4, ctx.gpr[16] + 0u);
    ctx.set_gpr(2, 2246u << 16u);
    ctx.set_gpr(5, rt.memory().aot_load32(ctx.gpr[2] + static_cast<std::uint32_t>(-21724)));
    ctx.set_gpr(31, 0x08A5A49Cu);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0138_entry, 138u, 605u, 0x08A2EC74u>(ctx, &aot_mem) && ctx.pc == 0x08A5A49Cu) goto L_08A5A49C;
    return;
L_08A5A49C:
    ctx.set_gpr(4, ctx.gpr[16] + 0u);
    ctx.set_gpr(2, 2246u << 16u);
    ctx.set_gpr(5, rt.memory().aot_load32(ctx.gpr[2] + static_cast<std::uint32_t>(-21728)));
    ctx.set_gpr(31, 0x08A5A4B0u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0138_entry, 138u, 605u, 0x08A2EC74u>(ctx, &aot_mem) && ctx.pc == 0x08A5A4B0u) goto L_08A5A4B0;
    return;
L_08A5A4B0:
    ctx.set_gpr(4, ctx.gpr[16] + 0u);
    ctx.set_gpr(5, rt.memory().aot_load32(ctx.gpr[18] + static_cast<std::uint32_t>(104)));
    ctx.set_gpr(31, 0x08A5A4C0u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0138_entry, 138u, 605u, 0x08A2EC74u>(ctx, &aot_mem) && ctx.pc == 0x08A5A4C0u) goto L_08A5A4C0;
    return;
L_08A5A4C0:
    ctx.set_gpr(4, ctx.gpr[16] + 0u);
    ctx.set_gpr(2, 2246u << 16u);
    ctx.set_gpr(5, rt.memory().aot_load32(ctx.gpr[2] + static_cast<std::uint32_t>(-21720)));
    ctx.set_gpr(31, 0x08A5A4D4u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0138_entry, 138u, 605u, 0x08A2EC74u>(ctx, &aot_mem) && ctx.pc == 0x08A5A4D4u) goto L_08A5A4D4;
    return;
L_08A5A4D4:
    ctx.set_gpr(4, ctx.gpr[16] + 0u);
    ctx.set_gpr(2, 2246u << 16u);
    ctx.set_gpr(5, rt.memory().aot_load32(ctx.gpr[2] + static_cast<std::uint32_t>(-21716)));
    ctx.set_gpr(31, 0x08A5A4E8u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0138_entry, 138u, 605u, 0x08A2EC74u>(ctx, &aot_mem) && ctx.pc == 0x08A5A4E8u) goto L_08A5A4E8;
    return;
L_08A5A4E8:
    ctx.set_gpr(2, rt.memory().aot_load8(ctx.gpr[18] + static_cast<std::uint32_t>(108)));
    { const bool branch_taken = ctx.gpr[2] == 0u;
    // nop
      if (branch_taken) {
          goto L_08A5A510;
      }
      goto L_08A5A4F4;
    }
L_08A5A4F4:
    ctx.set_gpr(4, ctx.gpr[16] + 0u);
    ctx.set_gpr(2, 2246u << 16u);
    ctx.set_gpr(5, rt.memory().aot_load32(ctx.gpr[2] + static_cast<std::uint32_t>(-21748)));
    ctx.set_gpr(31, 0x08A5A508u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0138_entry, 138u, 605u, 0x08A2EC74u>(ctx, &aot_mem) && ctx.pc == 0x08A5A508u) goto L_08A5A508;
    return;
L_08A5A508:
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_08A5A524;
      }
      goto L_08A5A510;
    }
L_08A5A510:
    ctx.set_gpr(4, ctx.gpr[16] + 0u);
    ctx.set_gpr(2, 2246u << 16u);
    ctx.set_gpr(5, rt.memory().aot_load32(ctx.gpr[2] + static_cast<std::uint32_t>(-21744)));
    ctx.set_gpr(31, 0x08A5A524u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0138_entry, 138u, 605u, 0x08A2EC74u>(ctx, &aot_mem) && ctx.pc == 0x08A5A524u) goto L_08A5A524;
    return;
L_08A5A524:
    ctx.set_gpr(4, ctx.gpr[18] + 0u);
    ctx.set_gpr(5, ctx.gpr[17] + 0u);
    ctx.set_gpr(31, 0x08A5A534u);
    // nop
    goto L_08A5A204;
L_08A5A534:
    ctx.set_gpr(21, 0u + 0u);
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_08A5A6C8;
      }
      goto L_08A5A540;
    }
L_08A5A540:
    ctx.set_gpr(19, ctx.gpr[21] << 2u);
    ctx.set_gpr(2, rt.memory().aot_load32(ctx.gpr[3] + static_cast<std::uint32_t>(16)));
    ctx.set_gpr(2, ctx.gpr[2] + ctx.gpr[19]);
    ctx.set_gpr(5, rt.memory().aot_load32(ctx.gpr[2] + static_cast<std::uint32_t>(0)));
    ctx.set_gpr(4, ctx.gpr[16] + 0u);
    ctx.set_gpr(31, 0x08A5A55Cu);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0138_entry, 138u, 572u, 0x08A2E89Cu>(ctx, &aot_mem) && ctx.pc == 0x08A5A55Cu) goto L_08A5A55C;
    return;
L_08A5A55C:
    { const bool branch_taken = ctx.gpr[2] == 0u;
    // nop
      if (branch_taken) {
          goto L_08A5A6C4;
      }
      goto L_08A5A564;
    }
L_08A5A564:
    ctx.set_gpr(2, rt.memory().aot_load32(ctx.gpr[18] + static_cast<std::uint32_t>(44)));
    ctx.set_gpr(2, rt.memory().aot_load32(ctx.gpr[2] + static_cast<std::uint32_t>(16)));
    ctx.set_gpr(2, ctx.gpr[2] + ctx.gpr[19]);
    ctx.set_gpr(19, rt.memory().aot_load32(ctx.gpr[2] + static_cast<std::uint32_t>(0)));
    ctx.set_gpr(5, ctx.gpr[17] + static_cast<std::uint32_t>(164));
    ctx.set_gpr(20, ctx.gpr[17] + static_cast<std::uint32_t>(100));
    ctx.set_gpr(4, ctx.gpr[29] + static_cast<std::uint32_t>(32));
    ctx.set_gpr(31, 0x08A5A588u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0126_entry, 126u, 747u, 0x089FFC4Cu>(ctx, &aot_mem) && ctx.pc == 0x08A5A588u) goto L_08A5A588;
    return;
L_08A5A588:
    ctx.set_gpr(6, ctx.gpr[19] + static_cast<std::uint32_t>(12));
    ctx.set_gpr(4, ctx.gpr[29] + static_cast<std::uint32_t>(32));
    ctx.set_gpr(5, ctx.gpr[4] + 0u);
    ctx.set_gpr(31, 0x08A5A59Cu);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0126_entry, 126u, 727u, 0x089FF9E0u>(ctx, &aot_mem) && ctx.pc == 0x08A5A59Cu) goto L_08A5A59C;
    return;
L_08A5A59C:
    ctx.set_gpr(4, ctx.gpr[29] + static_cast<std::uint32_t>(32));
    ctx.set_gpr(5, ctx.gpr[4] + 0u);
    ctx.set_gpr(6, ctx.gpr[20] + 0u);
    ctx.set_gpr(31, 0x08A5A5B0u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0126_entry, 126u, 727u, 0x089FF9E0u>(ctx, &aot_mem) && ctx.pc == 0x08A5A5B0u) goto L_08A5A5B0;
    return;
L_08A5A5B0:
    ctx.set_gpr(2, 2245u << 16u);
    ctx.set_gpr(2, rt.memory().aot_load32(ctx.gpr[2] + static_cast<std::uint32_t>(24444)));
    ctx.set_gpr(2, rt.memory().aot_load32(ctx.gpr[2] + static_cast<std::uint32_t>(8)));
    ctx.set_gpr(3, ctx.gpr[2] << 2u);
    ctx.set_gpr(2, rt.memory().aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(68)));
    ctx.set_gpr(2, ctx.gpr[2] + ctx.gpr[3]);
    ctx.set_gpr(3, rt.memory().aot_load32(ctx.gpr[2] + static_cast<std::uint32_t>(0)));
    ctx.set_gpr(2, rt.memory().aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(16)));
    ctx.set_gpr(3, ctx.gpr[3] << 2u);
    ctx.set_gpr(2, rt.memory().aot_load32(ctx.gpr[2] + static_cast<std::uint32_t>(16)));
    ctx.set_gpr(2, ctx.gpr[2] + ctx.gpr[3]);
    ctx.set_gpr(4, rt.memory().aot_load32(ctx.gpr[2] + static_cast<std::uint32_t>(0)));
    ctx.set_gpr(2, rt.memory().aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(24)));
    { const bool branch_taken = static_cast<std::int32_t>(ctx.gpr[2]) < 0;
    // nop
      if (branch_taken) {
          goto L_08A5A604;
      }
      goto L_08A5A5EC;
    }
L_08A5A5EC:
    ctx.set_gpr(3, ctx.gpr[2] << 2u);
    ctx.set_gpr(2, rt.memory().aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(16)));
    ctx.set_gpr(2, ctx.gpr[2] + ctx.gpr[3]);
    ctx.set_gpr(20, rt.memory().aot_load32(ctx.gpr[2] + static_cast<std::uint32_t>(0)));
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_08A5A630;
      }
      goto L_08A5A604;
    }
L_08A5A604:
    ctx.set_gpr(2, rt.memory().aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(8)));
    { const bool branch_taken = ctx.gpr[2] == 0u;
    // nop
      if (branch_taken) {
          goto L_08A5A62C;
      }
      goto L_08A5A610;
    }
L_08A5A610:
    ctx.set_gpr(2, ctx.gpr[2] + static_cast<std::uint32_t>(-1));
    ctx.set_gpr(3, ctx.gpr[2] << 2u);
    ctx.set_gpr(2, rt.memory().aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(16)));
    ctx.set_gpr(2, ctx.gpr[2] + ctx.gpr[3]);
    ctx.set_gpr(20, rt.memory().aot_load32(ctx.gpr[2] + static_cast<std::uint32_t>(0)));
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_08A5A630;
      }
      goto L_08A5A62C;
    }
L_08A5A62C:
    ctx.set_gpr(20, rt.memory().aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(20)));
    goto L_08A5A630;
L_08A5A630:
    ctx.set_gpr(19, rt.memory().aot_load32(ctx.gpr[17] + static_cast<std::uint32_t>(96)));
    ctx.set_gpr(3, rt.memory().aot_load32(ctx.gpr[19] + static_cast<std::uint32_t>(8)));
    ctx.set_gpr(2, rt.memory().aot_load32(ctx.gpr[19] + static_cast<std::uint32_t>(20)));
    ctx.set_gpr(2, static_cast<std::int32_t>(ctx.gpr[2]) < static_cast<std::int32_t>(ctx.gpr[3]) ? 1u : 0u);
    { const bool branch_taken = ctx.gpr[2] != 0u;
    // nop
      if (branch_taken) {
          goto L_08A5A664;
      }
      goto L_08A5A648;
    }
L_08A5A648:
    ctx.set_gpr(2, rt.memory().aot_load32(ctx.gpr[19] + static_cast<std::uint32_t>(24)));
    ctx.set_gpr(5, ctx.gpr[3] + ctx.gpr[2]);
    ctx.set_gpr(4, ctx.gpr[19] + 0u);
    ctx.set_gpr(2, 2245u << 16u);
    ctx.set_gpr(6, rt.memory().aot_load32(ctx.gpr[2] + static_cast<std::uint32_t>(24444)));
    ctx.set_gpr(31, 0x08A5A664u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0086_entry, 86u, 478u, 0x0895DF98u>(ctx, &aot_mem) && ctx.pc == 0x08A5A664u) goto L_08A5A664;
    return;
L_08A5A664:
    ctx.set_gpr(3, rt.memory().aot_load32(ctx.gpr[19] + static_cast<std::uint32_t>(20)));
    ctx.set_gpr(2, ctx.gpr[3] + static_cast<std::uint32_t>(1));
    rt.memory().aot_store32(ctx.gpr[19] + static_cast<std::uint32_t>(20), ctx.gpr[2]);
    ctx.set_gpr(3, ctx.gpr[3] << 2u);
    ctx.set_gpr(2, rt.memory().aot_load32(ctx.gpr[19] + static_cast<std::uint32_t>(16)));
    ctx.set_gpr(2, ctx.gpr[2] + ctx.gpr[3]);
    ctx.set_gpr(19, rt.memory().aot_load32(ctx.gpr[2] + static_cast<std::uint32_t>(0)));
    ctx.set_gpr(4, ctx.gpr[19] + static_cast<std::uint32_t>(12));
    ctx.set_gpr(5, ctx.gpr[29] + static_cast<std::uint32_t>(32));
    ctx.set_gpr(6, ctx.gpr[20] + static_cast<std::uint32_t>(12));
    ctx.set_gpr(31, 0x08A5A694u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0126_entry, 126u, 727u, 0x089FF9E0u>(ctx, &aot_mem) && ctx.pc == 0x08A5A694u) goto L_08A5A694;
    return;
L_08A5A694:
    ctx.set_gpr(4, ctx.gpr[16] + 0u);
    ctx.set_gpr(5, ctx.gpr[19] + 0u);
    ctx.set_gpr(31, 0x08A5A6A4u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0138_entry, 138u, 585u, 0x08A2E9A8u>(ctx, &aot_mem) && ctx.pc == 0x08A5A6A4u) goto L_08A5A6A4;
    return;
L_08A5A6A4:
    ctx.set_gpr(4, ctx.gpr[17] + 0u);
    ctx.set_gpr(5, ctx.gpr[18] + 0u);
    ctx.set_gpr(31, 0x08A5A6B4u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0153_entry, 153u, 354u, 0x08A69FF0u>(ctx, &aot_mem) && ctx.pc == 0x08A5A6B4u) goto L_08A5A6B4;
    return;
L_08A5A6B4:
    ctx.set_gpr(4, ctx.gpr[16] + 0u);
    ctx.set_gpr(5, ctx.gpr[19] + 0u);
    ctx.set_gpr(31, 0x08A5A6C4u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0138_entry, 138u, 589u, 0x08A2EA40u>(ctx, &aot_mem) && ctx.pc == 0x08A5A6C4u) goto L_08A5A6C4;
    return;
L_08A5A6C4:
    ctx.set_gpr(21, ctx.gpr[21] + static_cast<std::uint32_t>(1));
    goto L_08A5A6C8;
L_08A5A6C8:
    ctx.set_gpr(3, rt.memory().aot_load32(ctx.gpr[18] + static_cast<std::uint32_t>(40)));
    ctx.set_gpr(2, rt.memory().aot_load32(ctx.gpr[3] + static_cast<std::uint32_t>(8)));
    ctx.set_gpr(2, static_cast<std::int32_t>(ctx.gpr[21]) < static_cast<std::int32_t>(ctx.gpr[2]) ? 1u : 0u);
    { const bool branch_taken = ctx.gpr[2] != 0u;
    // nop
      if (branch_taken) {
          goto L_08A5A540;
      }
      goto L_08A5A6DC;
    }
L_08A5A6DC:
    ctx.set_gpr(2, rt.memory().aot_load8(ctx.gpr[18] + static_cast<std::uint32_t>(108)));
    { const bool branch_taken = ctx.gpr[2] == 0u;
    // nop
      if (branch_taken) {
          goto L_08A5A704;
      }
      goto L_08A5A6E8;
    }
L_08A5A6E8:
    ctx.set_gpr(4, ctx.gpr[16] + 0u);
    ctx.set_gpr(2, 2246u << 16u);
    ctx.set_gpr(5, rt.memory().aot_load32(ctx.gpr[2] + static_cast<std::uint32_t>(-21748)));
    ctx.set_gpr(31, 0x08A5A6FCu);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0138_entry, 138u, 615u, 0x08A2ED9Cu>(ctx, &aot_mem) && ctx.pc == 0x08A5A6FCu) goto L_08A5A6FC;
    return;
L_08A5A6FC:
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_08A5A718;
      }
      goto L_08A5A704;
    }
L_08A5A704:
    ctx.set_gpr(4, ctx.gpr[16] + 0u);
    ctx.set_gpr(2, 2246u << 16u);
    ctx.set_gpr(5, rt.memory().aot_load32(ctx.gpr[2] + static_cast<std::uint32_t>(-21744)));
    ctx.set_gpr(31, 0x08A5A718u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0138_entry, 138u, 615u, 0x08A2ED9Cu>(ctx, &aot_mem) && ctx.pc == 0x08A5A718u) goto L_08A5A718;
    return;
L_08A5A718:
    ctx.set_gpr(4, ctx.gpr[16] + 0u);
    ctx.set_gpr(2, 2246u << 16u);
    ctx.set_gpr(5, rt.memory().aot_load32(ctx.gpr[2] + static_cast<std::uint32_t>(-21716)));
    ctx.set_gpr(31, 0x08A5A72Cu);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0138_entry, 138u, 615u, 0x08A2ED9Cu>(ctx, &aot_mem) && ctx.pc == 0x08A5A72Cu) goto L_08A5A72C;
    return;
L_08A5A72C:
    ctx.set_gpr(4, ctx.gpr[16] + 0u);
    ctx.set_gpr(2, 2246u << 16u);
    ctx.set_gpr(5, rt.memory().aot_load32(ctx.gpr[2] + static_cast<std::uint32_t>(-21720)));
    ctx.set_gpr(31, 0x08A5A740u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0138_entry, 138u, 615u, 0x08A2ED9Cu>(ctx, &aot_mem) && ctx.pc == 0x08A5A740u) goto L_08A5A740;
    return;
L_08A5A740:
    ctx.set_gpr(4, ctx.gpr[16] + 0u);
    ctx.set_gpr(5, rt.memory().aot_load32(ctx.gpr[18] + static_cast<std::uint32_t>(104)));
    ctx.set_gpr(31, 0x08A5A750u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0138_entry, 138u, 615u, 0x08A2ED9Cu>(ctx, &aot_mem) && ctx.pc == 0x08A5A750u) goto L_08A5A750;
    return;
L_08A5A750:
    ctx.set_gpr(4, ctx.gpr[16] + 0u);
    ctx.set_gpr(2, 2246u << 16u);
    ctx.set_gpr(5, rt.memory().aot_load32(ctx.gpr[2] + static_cast<std::uint32_t>(-21728)));
    ctx.set_gpr(31, 0x08A5A764u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0138_entry, 138u, 615u, 0x08A2ED9Cu>(ctx, &aot_mem) && ctx.pc == 0x08A5A764u) goto L_08A5A764;
    return;
L_08A5A764:
    ctx.set_gpr(4, ctx.gpr[16] + 0u);
    ctx.set_gpr(2, 2246u << 16u);
    ctx.set_gpr(5, rt.memory().aot_load32(ctx.gpr[2] + static_cast<std::uint32_t>(-21724)));
    ctx.set_gpr(31, 0x08A5A778u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0138_entry, 138u, 615u, 0x08A2ED9Cu>(ctx, &aot_mem) && ctx.pc == 0x08A5A778u) goto L_08A5A778;
    return;
L_08A5A778:
    ctx.set_gpr(4, ctx.gpr[16] + 0u);
    ctx.set_gpr(5, rt.memory().aot_load32(ctx.gpr[18] + static_cast<std::uint32_t>(100)));
    ctx.set_gpr(31, 0x08A5A788u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0138_entry, 138u, 615u, 0x08A2ED9Cu>(ctx, &aot_mem) && ctx.pc == 0x08A5A788u) goto L_08A5A788;
    return;
L_08A5A788:
    ctx.set_gpr(4, ctx.gpr[16] + 0u);
    ctx.set_gpr(2, 2246u << 16u);
    ctx.set_gpr(5, rt.memory().aot_load32(ctx.gpr[2] + static_cast<std::uint32_t>(-21732)));
    ctx.set_gpr(31, 0x08A5A79Cu);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0138_entry, 138u, 615u, 0x08A2ED9Cu>(ctx, &aot_mem) && ctx.pc == 0x08A5A79Cu) goto L_08A5A79C;
    return;
L_08A5A79C:
    ctx.set_gpr(4, ctx.gpr[16] + 0u);
    ctx.set_gpr(2, 2246u << 16u);
    ctx.set_gpr(5, rt.memory().aot_load32(ctx.gpr[2] + static_cast<std::uint32_t>(-21736)));
    ctx.set_gpr(31, 0x08A5A7B0u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0138_entry, 138u, 615u, 0x08A2ED9Cu>(ctx, &aot_mem) && ctx.pc == 0x08A5A7B0u) goto L_08A5A7B0;
    return;
L_08A5A7B0:
    ctx.set_gpr(4, ctx.gpr[16] + 0u);
    ctx.set_gpr(2, 2246u << 16u);
    ctx.set_gpr(5, rt.memory().aot_load32(ctx.gpr[2] + static_cast<std::uint32_t>(-21740)));
    ctx.set_gpr(31, 0x08A5A7C4u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0138_entry, 138u, 615u, 0x08A2ED9Cu>(ctx, &aot_mem) && ctx.pc == 0x08A5A7C4u) goto L_08A5A7C4;
    return;
L_08A5A7C4:
    ctx.set_gpr(31, rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(28)));
    ctx.set_gpr(21, rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(24)));
    ctx.set_gpr(20, rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(20)));
    ctx.set_gpr(19, rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(16)));
    ctx.set_gpr(18, rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(12)));
    ctx.set_gpr(17, rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(8)));
    ctx.set_gpr(16, rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(4)));
    ctx.set_gpr(29, ctx.gpr[29] + static_cast<std::uint32_t>(96));
    jump_target = ctx.gpr[31];
    // nop
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_08A5A7EC:
    ctx.set_gpr(29, ctx.gpr[29] + static_cast<std::uint32_t>(-16));
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(12), ctx.gpr[31]);
    ctx.set_gpr(31, 0x08A5A7FCu);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0078_entry, 78u, 216u, 0x0893CDDCu>(ctx, &aot_mem) && ctx.pc == 0x08A5A7FCu) goto L_08A5A7FC;
    return;
L_08A5A7FC:
    ctx.set_gpr(4, rt.memory().aot_load32(ctx.gpr[2] + static_cast<std::uint32_t>(0)));
    ctx.set_gpr(31, 0x08A5A808u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0078_entry, 78u, 199u, 0x0893CC68u>(ctx, &aot_mem) && ctx.pc == 0x08A5A808u) goto L_08A5A808;
    return;
L_08A5A808:
    ctx.set_gpr(4, ctx.gpr[2] + 0u);
    ctx.set_gpr(31, 0x08A5A814u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0044_entry, 44u, 403u, 0x088B66B4u>(ctx, &aot_mem) && ctx.pc == 0x08A5A814u) goto L_08A5A814;
    return;
L_08A5A814:
    ctx.set_gpr(4, 2246u << 16u);
    ctx.set_gpr(4, ctx.gpr[4] + static_cast<std::uint32_t>(-21700));
    ctx.set_gpr(5, ctx.gpr[2] + 0u);
    ctx.set_gpr(31, 0x08A5A828u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0085_entry, 85u, 67u, 0x0895853Cu>(ctx, &aot_mem) && ctx.pc == 0x08A5A828u) goto L_08A5A828;
    return;
L_08A5A828:
    ctx.set_gpr(31, 0x08A5A830u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0078_entry, 78u, 216u, 0x0893CDDCu>(ctx, &aot_mem) && ctx.pc == 0x08A5A830u) goto L_08A5A830;
    return;
L_08A5A830:
    ctx.set_gpr(4, rt.memory().aot_load32(ctx.gpr[2] + static_cast<std::uint32_t>(0)));
    ctx.set_gpr(31, 0x08A5A83Cu);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0078_entry, 78u, 199u, 0x0893CC68u>(ctx, &aot_mem) && ctx.pc == 0x08A5A83Cu) goto L_08A5A83C;
    return;
L_08A5A83C:
    ctx.set_gpr(4, ctx.gpr[2] + 0u);
    ctx.set_gpr(31, 0x08A5A848u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0043_entry, 43u, 45u, 0x088B0444u>(ctx, &aot_mem) && ctx.pc == 0x08A5A848u) goto L_08A5A848;
    return;
L_08A5A848:
    ctx.set_gpr(4, 2246u << 16u);
    ctx.set_gpr(4, ctx.gpr[4] + static_cast<std::uint32_t>(-21684));
    ctx.set_gpr(5, ctx.gpr[2] + 0u);
    ctx.set_gpr(31, 0x08A5A85Cu);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0085_entry, 85u, 67u, 0x0895853Cu>(ctx, &aot_mem) && ctx.pc == 0x08A5A85Cu) goto L_08A5A85C;
    return;
L_08A5A85C:
    ctx.set_gpr(31, 0x08A5A864u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0078_entry, 78u, 216u, 0x0893CDDCu>(ctx, &aot_mem) && ctx.pc == 0x08A5A864u) goto L_08A5A864;
    return;
L_08A5A864:
    ctx.set_gpr(4, rt.memory().aot_load32(ctx.gpr[2] + static_cast<std::uint32_t>(0)));
    ctx.set_gpr(31, 0x08A5A870u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0078_entry, 78u, 199u, 0x0893CC68u>(ctx, &aot_mem) && ctx.pc == 0x08A5A870u) goto L_08A5A870;
    return;
L_08A5A870:
    ctx.set_gpr(4, ctx.gpr[2] + 0u);
    ctx.set_gpr(31, 0x08A5A87Cu);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0043_entry, 43u, 45u, 0x088B0444u>(ctx, &aot_mem) && ctx.pc == 0x08A5A87Cu) goto L_08A5A87C;
    return;
L_08A5A87C:
    ctx.set_gpr(4, 2246u << 16u);
    ctx.set_gpr(4, ctx.gpr[4] + static_cast<std::uint32_t>(-21668));
    ctx.set_gpr(5, ctx.gpr[2] + 0u);
    ctx.set_gpr(31, 0x08A5A890u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0085_entry, 85u, 67u, 0x0895853Cu>(ctx, &aot_mem) && ctx.pc == 0x08A5A890u) goto L_08A5A890;
    return;
L_08A5A890:
    ctx.set_gpr(31, 0x08A5A898u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0078_entry, 78u, 216u, 0x0893CDDCu>(ctx, &aot_mem) && ctx.pc == 0x08A5A898u) goto L_08A5A898;
    return;
L_08A5A898:
    ctx.set_gpr(4, rt.memory().aot_load32(ctx.gpr[2] + static_cast<std::uint32_t>(0)));
    ctx.set_gpr(31, 0x08A5A8A4u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0078_entry, 78u, 199u, 0x0893CC68u>(ctx, &aot_mem) && ctx.pc == 0x08A5A8A4u) goto L_08A5A8A4;
    return;
L_08A5A8A4:
    ctx.set_gpr(4, ctx.gpr[2] + 0u);
    ctx.set_gpr(31, 0x08A5A8B0u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0043_entry, 43u, 45u, 0x088B0444u>(ctx, &aot_mem) && ctx.pc == 0x08A5A8B0u) goto L_08A5A8B0;
    return;
L_08A5A8B0:
    ctx.set_gpr(4, 2246u << 16u);
    ctx.set_gpr(4, ctx.gpr[4] + static_cast<std::uint32_t>(-21652));
    ctx.set_gpr(5, ctx.gpr[2] + 0u);
    ctx.set_gpr(31, 0x08A5A8C4u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0085_entry, 85u, 67u, 0x0895853Cu>(ctx, &aot_mem) && ctx.pc == 0x08A5A8C4u) goto L_08A5A8C4;
    return;
L_08A5A8C4:
    ctx.set_gpr(31, 0x08A5A8CCu);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0078_entry, 78u, 216u, 0x0893CDDCu>(ctx, &aot_mem) && ctx.pc == 0x08A5A8CCu) goto L_08A5A8CC;
    return;
L_08A5A8CC:
    ctx.set_gpr(4, rt.memory().aot_load32(ctx.gpr[2] + static_cast<std::uint32_t>(0)));
    ctx.set_gpr(31, 0x08A5A8D8u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0078_entry, 78u, 199u, 0x0893CC68u>(ctx, &aot_mem) && ctx.pc == 0x08A5A8D8u) goto L_08A5A8D8;
    return;
L_08A5A8D8:
    ctx.set_gpr(4, ctx.gpr[2] + 0u);
    ctx.set_gpr(31, 0x08A5A8E4u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0047_entry, 47u, 298u, 0x088C1B10u>(ctx, &aot_mem) && ctx.pc == 0x08A5A8E4u) goto L_08A5A8E4;
    return;
L_08A5A8E4:
    ctx.set_gpr(4, 2246u << 16u);
    ctx.set_gpr(4, ctx.gpr[4] + static_cast<std::uint32_t>(-21636));
    ctx.set_gpr(5, ctx.gpr[2] + 0u);
    ctx.set_gpr(31, 0x08A5A8F8u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0085_entry, 85u, 67u, 0x0895853Cu>(ctx, &aot_mem) && ctx.pc == 0x08A5A8F8u) goto L_08A5A8F8;
    return;
L_08A5A8F8:
    ctx.set_gpr(31, 0x08A5A900u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0078_entry, 78u, 216u, 0x0893CDDCu>(ctx, &aot_mem) && ctx.pc == 0x08A5A900u) goto L_08A5A900;
    return;
L_08A5A900:
    ctx.set_gpr(4, rt.memory().aot_load32(ctx.gpr[2] + static_cast<std::uint32_t>(0)));
    ctx.set_gpr(31, 0x08A5A90Cu);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0078_entry, 78u, 199u, 0x0893CC68u>(ctx, &aot_mem) && ctx.pc == 0x08A5A90Cu) goto L_08A5A90C;
    return;
L_08A5A90C:
    ctx.set_gpr(4, ctx.gpr[2] + 0u);
    ctx.set_gpr(31, 0x08A5A918u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0047_entry, 47u, 298u, 0x088C1B10u>(ctx, &aot_mem) && ctx.pc == 0x08A5A918u) goto L_08A5A918;
    return;
L_08A5A918:
    ctx.set_gpr(4, 2246u << 16u);
    ctx.set_gpr(4, ctx.gpr[4] + static_cast<std::uint32_t>(-21620));
    ctx.set_gpr(5, ctx.gpr[2] + 0u);
    ctx.set_gpr(31, 0x08A5A92Cu);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0085_entry, 85u, 67u, 0x0895853Cu>(ctx, &aot_mem) && ctx.pc == 0x08A5A92Cu) goto L_08A5A92C;
    return;
L_08A5A92C:
    ctx.set_gpr(31, 0x08A5A934u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0078_entry, 78u, 216u, 0x0893CDDCu>(ctx, &aot_mem) && ctx.pc == 0x08A5A934u) goto L_08A5A934;
    return;
L_08A5A934:
    ctx.set_gpr(4, rt.memory().aot_load32(ctx.gpr[2] + static_cast<std::uint32_t>(0)));
    ctx.set_gpr(31, 0x08A5A940u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0078_entry, 78u, 199u, 0x0893CC68u>(ctx, &aot_mem) && ctx.pc == 0x08A5A940u) goto L_08A5A940;
    return;
L_08A5A940:
    ctx.set_gpr(4, ctx.gpr[2] + 0u);
    ctx.set_gpr(31, 0x08A5A94Cu);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0047_entry, 47u, 194u, 0x088C11E0u>(ctx, &aot_mem) && ctx.pc == 0x08A5A94Cu) goto L_08A5A94C;
    return;
L_08A5A94C:
    ctx.set_gpr(4, 2246u << 16u);
    ctx.set_gpr(4, ctx.gpr[4] + static_cast<std::uint32_t>(-21604));
    ctx.set_gpr(5, ctx.gpr[2] + 0u);
    ctx.set_gpr(31, 0x08A5A960u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0085_entry, 85u, 67u, 0x0895853Cu>(ctx, &aot_mem) && ctx.pc == 0x08A5A960u) goto L_08A5A960;
    return;
L_08A5A960:
    ctx.set_gpr(31, 0x08A5A968u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0078_entry, 78u, 216u, 0x0893CDDCu>(ctx, &aot_mem) && ctx.pc == 0x08A5A968u) goto L_08A5A968;
    return;
L_08A5A968:
    ctx.set_gpr(4, rt.memory().aot_load32(ctx.gpr[2] + static_cast<std::uint32_t>(0)));
    ctx.set_gpr(31, 0x08A5A974u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0078_entry, 78u, 199u, 0x0893CC68u>(ctx, &aot_mem) && ctx.pc == 0x08A5A974u) goto L_08A5A974;
    return;
L_08A5A974:
    ctx.set_gpr(4, ctx.gpr[2] + 0u);
    ctx.set_gpr(31, 0x08A5A980u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0047_entry, 47u, 194u, 0x088C11E0u>(ctx, &aot_mem) && ctx.pc == 0x08A5A980u) goto L_08A5A980;
    return;
L_08A5A980:
    ctx.set_gpr(4, 2246u << 16u);
    ctx.set_gpr(4, ctx.gpr[4] + static_cast<std::uint32_t>(-21588));
    ctx.set_gpr(5, ctx.gpr[2] + 0u);
    ctx.set_gpr(31, 0x08A5A994u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0085_entry, 85u, 67u, 0x0895853Cu>(ctx, &aot_mem) && ctx.pc == 0x08A5A994u) goto L_08A5A994;
    return;
L_08A5A994:
    ctx.set_gpr(31, 0x08A5A99Cu);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0078_entry, 78u, 216u, 0x0893CDDCu>(ctx, &aot_mem) && ctx.pc == 0x08A5A99Cu) goto L_08A5A99C;
    return;
L_08A5A99C:
    ctx.set_gpr(4, rt.memory().aot_load32(ctx.gpr[2] + static_cast<std::uint32_t>(0)));
    ctx.set_gpr(31, 0x08A5A9A8u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0078_entry, 78u, 199u, 0x0893CC68u>(ctx, &aot_mem) && ctx.pc == 0x08A5A9A8u) goto L_08A5A9A8;
    return;
L_08A5A9A8:
    ctx.set_gpr(4, ctx.gpr[2] + 0u);
    ctx.set_gpr(31, 0x08A5A9B4u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0045_entry, 45u, 631u, 0x088BBA54u>(ctx, &aot_mem) && ctx.pc == 0x08A5A9B4u) goto L_08A5A9B4;
    return;
L_08A5A9B4:
    ctx.set_gpr(4, 2246u << 16u);
    ctx.set_gpr(4, ctx.gpr[4] + static_cast<std::uint32_t>(-21572));
    ctx.set_gpr(5, ctx.gpr[2] + 0u);
    ctx.set_gpr(31, 0x08A5A9C8u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0085_entry, 85u, 67u, 0x0895853Cu>(ctx, &aot_mem) && ctx.pc == 0x08A5A9C8u) goto L_08A5A9C8;
    return;
L_08A5A9C8:
    ctx.set_gpr(31, 0x08A5A9D0u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0078_entry, 78u, 216u, 0x0893CDDCu>(ctx, &aot_mem) && ctx.pc == 0x08A5A9D0u) goto L_08A5A9D0;
    return;
L_08A5A9D0:
    ctx.set_gpr(4, rt.memory().aot_load32(ctx.gpr[2] + static_cast<std::uint32_t>(0)));
    ctx.set_gpr(31, 0x08A5A9DCu);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0078_entry, 78u, 199u, 0x0893CC68u>(ctx, &aot_mem) && ctx.pc == 0x08A5A9DCu) goto L_08A5A9DC;
    return;
L_08A5A9DC:
    ctx.set_gpr(4, ctx.gpr[2] + 0u);
    ctx.set_gpr(31, 0x08A5A9E8u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0047_entry, 47u, 639u, 0x088C3898u>(ctx, &aot_mem) && ctx.pc == 0x08A5A9E8u) goto L_08A5A9E8;
    return;
L_08A5A9E8:
    ctx.set_gpr(4, 2246u << 16u);
    ctx.set_gpr(4, ctx.gpr[4] + static_cast<std::uint32_t>(-21556));
    ctx.set_gpr(5, ctx.gpr[2] + 0u);
    ctx.set_gpr(31, 0x08A5A9FCu);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0085_entry, 85u, 67u, 0x0895853Cu>(ctx, &aot_mem) && ctx.pc == 0x08A5A9FCu) goto L_08A5A9FC;
    return;
L_08A5A9FC:
    ctx.set_gpr(31, 0x08A5AA04u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0078_entry, 78u, 216u, 0x0893CDDCu>(ctx, &aot_mem) && ctx.pc == 0x08A5AA04u) goto L_08A5AA04;
    return;
L_08A5AA04:
    ctx.set_gpr(4, rt.memory().aot_load32(ctx.gpr[2] + static_cast<std::uint32_t>(0)));
    ctx.set_gpr(31, 0x08A5AA10u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0078_entry, 78u, 199u, 0x0893CC68u>(ctx, &aot_mem) && ctx.pc == 0x08A5AA10u) goto L_08A5AA10;
    return;
L_08A5AA10:
    ctx.set_gpr(4, ctx.gpr[2] + 0u);
    ctx.set_gpr(31, 0x08A5AA1Cu);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0047_entry, 47u, 618u, 0x088C368Cu>(ctx, &aot_mem) && ctx.pc == 0x08A5AA1Cu) goto L_08A5AA1C;
    return;
L_08A5AA1C:
    ctx.set_gpr(4, 2246u << 16u);
    ctx.set_gpr(4, ctx.gpr[4] + static_cast<std::uint32_t>(-21540));
    ctx.set_gpr(5, ctx.gpr[2] + 0u);
    ctx.set_gpr(31, 0x08A5AA30u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0085_entry, 85u, 67u, 0x0895853Cu>(ctx, &aot_mem) && ctx.pc == 0x08A5AA30u) goto L_08A5AA30;
    return;
L_08A5AA30:
    ctx.set_gpr(31, 0x08A5AA38u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0078_entry, 78u, 216u, 0x0893CDDCu>(ctx, &aot_mem) && ctx.pc == 0x08A5AA38u) goto L_08A5AA38;
    return;
L_08A5AA38:
    ctx.set_gpr(4, rt.memory().aot_load32(ctx.gpr[2] + static_cast<std::uint32_t>(0)));
    ctx.set_gpr(31, 0x08A5AA44u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0078_entry, 78u, 199u, 0x0893CC68u>(ctx, &aot_mem) && ctx.pc == 0x08A5AA44u) goto L_08A5AA44;
    return;
L_08A5AA44:
    ctx.set_gpr(4, ctx.gpr[2] + 0u);
    ctx.set_gpr(31, 0x08A5AA50u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0047_entry, 47u, 127u, 0x088C0B58u>(ctx, &aot_mem) && ctx.pc == 0x08A5AA50u) goto L_08A5AA50;
    return;
L_08A5AA50:
    ctx.set_gpr(4, 2246u << 16u);
    ctx.set_gpr(4, ctx.gpr[4] + static_cast<std::uint32_t>(-21508));
    ctx.set_gpr(5, ctx.gpr[2] + 0u);
    ctx.set_gpr(31, 0x08A5AA64u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0085_entry, 85u, 67u, 0x0895853Cu>(ctx, &aot_mem) && ctx.pc == 0x08A5AA64u) goto L_08A5AA64;
    return;
L_08A5AA64:
    ctx.set_gpr(31, 0x08A5AA6Cu);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0078_entry, 78u, 216u, 0x0893CDDCu>(ctx, &aot_mem) && ctx.pc == 0x08A5AA6Cu) goto L_08A5AA6C;
    return;
L_08A5AA6C:
    ctx.set_gpr(4, rt.memory().aot_load32(ctx.gpr[2] + static_cast<std::uint32_t>(0)));
    ctx.set_gpr(31, 0x08A5AA78u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0078_entry, 78u, 199u, 0x0893CC68u>(ctx, &aot_mem) && ctx.pc == 0x08A5AA78u) goto L_08A5AA78;
    return;
L_08A5AA78:
    ctx.set_gpr(4, ctx.gpr[2] + 0u);
    ctx.set_gpr(31, 0x08A5AA84u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0047_entry, 47u, 127u, 0x088C0B58u>(ctx, &aot_mem) && ctx.pc == 0x08A5AA84u) goto L_08A5AA84;
    return;
L_08A5AA84:
    ctx.set_gpr(4, 2246u << 16u);
    ctx.set_gpr(4, ctx.gpr[4] + static_cast<std::uint32_t>(-21492));
    ctx.set_gpr(5, ctx.gpr[2] + 0u);
    ctx.set_gpr(31, 0x08A5AA98u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0085_entry, 85u, 67u, 0x0895853Cu>(ctx, &aot_mem) && ctx.pc == 0x08A5AA98u) goto L_08A5AA98;
    return;
L_08A5AA98:
    ctx.set_gpr(31, 0x08A5AAA0u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0078_entry, 78u, 216u, 0x0893CDDCu>(ctx, &aot_mem) && ctx.pc == 0x08A5AAA0u) goto L_08A5AAA0;
    return;
L_08A5AAA0:
    ctx.set_gpr(4, rt.memory().aot_load32(ctx.gpr[2] + static_cast<std::uint32_t>(0)));
    ctx.set_gpr(31, 0x08A5AAACu);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0078_entry, 78u, 199u, 0x0893CC68u>(ctx, &aot_mem) && ctx.pc == 0x08A5AAACu) goto L_08A5AAAC;
    return;
L_08A5AAAC:
    ctx.set_gpr(4, ctx.gpr[2] + 0u);
    ctx.set_gpr(31, 0x08A5AAB8u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0047_entry, 47u, 127u, 0x088C0B58u>(ctx, &aot_mem) && ctx.pc == 0x08A5AAB8u) goto L_08A5AAB8;
    return;
L_08A5AAB8:
    ctx.set_gpr(4, 2246u << 16u);
    ctx.set_gpr(4, ctx.gpr[4] + static_cast<std::uint32_t>(-21476));
    ctx.set_gpr(5, ctx.gpr[2] + 0u);
    ctx.set_gpr(31, 0x08A5AACCu);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0085_entry, 85u, 67u, 0x0895853Cu>(ctx, &aot_mem) && ctx.pc == 0x08A5AACCu) goto L_08A5AACC;
    return;
L_08A5AACC:
    ctx.set_gpr(31, 0x08A5AAD4u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0078_entry, 78u, 216u, 0x0893CDDCu>(ctx, &aot_mem) && ctx.pc == 0x08A5AAD4u) goto L_08A5AAD4;
    return;
L_08A5AAD4:
    ctx.set_gpr(4, rt.memory().aot_load32(ctx.gpr[2] + static_cast<std::uint32_t>(0)));
    ctx.set_gpr(31, 0x08A5AAE0u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0078_entry, 78u, 199u, 0x0893CC68u>(ctx, &aot_mem) && ctx.pc == 0x08A5AAE0u) goto L_08A5AAE0;
    return;
L_08A5AAE0:
    ctx.set_gpr(4, ctx.gpr[2] + 0u);
    ctx.set_gpr(31, 0x08A5AAECu);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0046_entry, 46u, 576u, 0x088BF470u>(ctx, &aot_mem) && ctx.pc == 0x08A5AAECu) goto L_08A5AAEC;
    return;
L_08A5AAEC:
    ctx.set_gpr(4, 2246u << 16u);
    ctx.set_gpr(4, ctx.gpr[4] + static_cast<std::uint32_t>(-21460));
    ctx.set_gpr(5, ctx.gpr[2] + 0u);
    ctx.set_gpr(31, 0x08A5AB00u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0085_entry, 85u, 67u, 0x0895853Cu>(ctx, &aot_mem) && ctx.pc == 0x08A5AB00u) goto L_08A5AB00;
    return;
L_08A5AB00:
    ctx.set_gpr(31, 0x08A5AB08u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0078_entry, 78u, 216u, 0x0893CDDCu>(ctx, &aot_mem) && ctx.pc == 0x08A5AB08u) goto L_08A5AB08;
    return;
L_08A5AB08:
    ctx.set_gpr(4, rt.memory().aot_load32(ctx.gpr[2] + static_cast<std::uint32_t>(0)));
    ctx.set_gpr(31, 0x08A5AB14u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0078_entry, 78u, 199u, 0x0893CC68u>(ctx, &aot_mem) && ctx.pc == 0x08A5AB14u) goto L_08A5AB14;
    return;
L_08A5AB14:
    ctx.set_gpr(4, ctx.gpr[2] + 0u);
    ctx.set_gpr(31, 0x08A5AB20u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0043_entry, 43u, 298u, 0x088B1C28u>(ctx, &aot_mem) && ctx.pc == 0x08A5AB20u) goto L_08A5AB20;
    return;
L_08A5AB20:
    ctx.set_gpr(4, 2246u << 16u);
    ctx.set_gpr(4, ctx.gpr[4] + static_cast<std::uint32_t>(-21444));
    ctx.set_gpr(5, ctx.gpr[2] + 0u);
    ctx.set_gpr(31, 0x08A5AB34u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0085_entry, 85u, 67u, 0x0895853Cu>(ctx, &aot_mem) && ctx.pc == 0x08A5AB34u) goto L_08A5AB34;
    return;
L_08A5AB34:
    ctx.set_gpr(31, 0x08A5AB3Cu);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0078_entry, 78u, 216u, 0x0893CDDCu>(ctx, &aot_mem) && ctx.pc == 0x08A5AB3Cu) goto L_08A5AB3C;
    return;
L_08A5AB3C:
    ctx.set_gpr(4, rt.memory().aot_load32(ctx.gpr[2] + static_cast<std::uint32_t>(0)));
    ctx.set_gpr(31, 0x08A5AB48u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0078_entry, 78u, 199u, 0x0893CC68u>(ctx, &aot_mem) && ctx.pc == 0x08A5AB48u) goto L_08A5AB48;
    return;
L_08A5AB48:
    ctx.set_gpr(4, ctx.gpr[2] + 0u);
    ctx.set_gpr(31, 0x08A5AB54u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0043_entry, 43u, 298u, 0x088B1C28u>(ctx, &aot_mem) && ctx.pc == 0x08A5AB54u) goto L_08A5AB54;
    return;
L_08A5AB54:
    ctx.set_gpr(4, 2246u << 16u);
    ctx.set_gpr(4, ctx.gpr[4] + static_cast<std::uint32_t>(-21428));
    ctx.set_gpr(5, ctx.gpr[2] + 0u);
    ctx.set_gpr(31, 0x08A5AB68u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0085_entry, 85u, 67u, 0x0895853Cu>(ctx, &aot_mem) && ctx.pc == 0x08A5AB68u) goto L_08A5AB68;
    return;
L_08A5AB68:
    ctx.set_gpr(31, 0x08A5AB70u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0078_entry, 78u, 216u, 0x0893CDDCu>(ctx, &aot_mem) && ctx.pc == 0x08A5AB70u) goto L_08A5AB70;
    return;
L_08A5AB70:
    ctx.set_gpr(4, rt.memory().aot_load32(ctx.gpr[2] + static_cast<std::uint32_t>(0)));
    ctx.set_gpr(31, 0x08A5AB7Cu);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0078_entry, 78u, 199u, 0x0893CC68u>(ctx, &aot_mem) && ctx.pc == 0x08A5AB7Cu) goto L_08A5AB7C;
    return;
L_08A5AB7C:
    ctx.set_gpr(4, ctx.gpr[2] + 0u);
    ctx.set_gpr(31, 0x08A5AB88u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0043_entry, 43u, 170u, 0x088B1000u>(ctx, &aot_mem) && ctx.pc == 0x08A5AB88u) goto L_08A5AB88;
    return;
L_08A5AB88:
    ctx.set_gpr(4, 2246u << 16u);
    ctx.set_gpr(4, ctx.gpr[4] + static_cast<std::uint32_t>(-21412));
    ctx.set_gpr(5, ctx.gpr[2] + 0u);
    ctx.set_gpr(31, 0x08A5AB9Cu);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0085_entry, 85u, 67u, 0x0895853Cu>(ctx, &aot_mem) && ctx.pc == 0x08A5AB9Cu) goto L_08A5AB9C;
    return;
L_08A5AB9C:
    ctx.set_gpr(31, 0x08A5ABA4u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0078_entry, 78u, 216u, 0x0893CDDCu>(ctx, &aot_mem) && ctx.pc == 0x08A5ABA4u) goto L_08A5ABA4;
    return;
L_08A5ABA4:
    ctx.set_gpr(4, rt.memory().aot_load32(ctx.gpr[2] + static_cast<std::uint32_t>(0)));
    ctx.set_gpr(31, 0x08A5ABB0u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0078_entry, 78u, 199u, 0x0893CC68u>(ctx, &aot_mem) && ctx.pc == 0x08A5ABB0u) goto L_08A5ABB0;
    return;
L_08A5ABB0:
    ctx.set_gpr(4, ctx.gpr[2] + 0u);
    ctx.set_gpr(31, 0x08A5ABBCu);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0043_entry, 43u, 170u, 0x088B1000u>(ctx, &aot_mem) && ctx.pc == 0x08A5ABBCu) goto L_08A5ABBC;
    return;
L_08A5ABBC:
    ctx.set_gpr(4, 2246u << 16u);
    ctx.set_gpr(4, ctx.gpr[4] + static_cast<std::uint32_t>(-21396));
    ctx.set_gpr(5, ctx.gpr[2] + 0u);
    ctx.set_gpr(31, 0x08A5ABD0u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0085_entry, 85u, 67u, 0x0895853Cu>(ctx, &aot_mem) && ctx.pc == 0x08A5ABD0u) goto L_08A5ABD0;
    return;
L_08A5ABD0:
    ctx.set_gpr(31, 0x08A5ABD8u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0078_entry, 78u, 216u, 0x0893CDDCu>(ctx, &aot_mem) && ctx.pc == 0x08A5ABD8u) goto L_08A5ABD8;
    return;
L_08A5ABD8:
    ctx.set_gpr(4, rt.memory().aot_load32(ctx.gpr[2] + static_cast<std::uint32_t>(0)));
    ctx.set_gpr(31, 0x08A5ABE4u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0078_entry, 78u, 199u, 0x0893CC68u>(ctx, &aot_mem) && ctx.pc == 0x08A5ABE4u) goto L_08A5ABE4;
    return;
L_08A5ABE4:
    ctx.set_gpr(4, ctx.gpr[2] + 0u);
    ctx.set_gpr(31, 0x08A5ABF0u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0043_entry, 43u, 72u, 0x088B06C4u>(ctx, &aot_mem) && ctx.pc == 0x08A5ABF0u) goto L_08A5ABF0;
    return;
L_08A5ABF0:
    ctx.set_gpr(4, 2246u << 16u);
    ctx.set_gpr(4, ctx.gpr[4] + static_cast<std::uint32_t>(-21380));
    ctx.set_gpr(5, ctx.gpr[2] + 0u);
    ctx.set_gpr(31, 0x08A5AC04u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0085_entry, 85u, 67u, 0x0895853Cu>(ctx, &aot_mem) && ctx.pc == 0x08A5AC04u) goto L_08A5AC04;
    return;
L_08A5AC04:
    ctx.set_gpr(31, 0x08A5AC0Cu);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0078_entry, 78u, 216u, 0x0893CDDCu>(ctx, &aot_mem) && ctx.pc == 0x08A5AC0Cu) goto L_08A5AC0C;
    return;
L_08A5AC0C:
    ctx.set_gpr(4, rt.memory().aot_load32(ctx.gpr[2] + static_cast<std::uint32_t>(0)));
    ctx.set_gpr(31, 0x08A5AC18u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0078_entry, 78u, 199u, 0x0893CC68u>(ctx, &aot_mem) && ctx.pc == 0x08A5AC18u) goto L_08A5AC18;
    return;
L_08A5AC18:
    ctx.set_gpr(4, ctx.gpr[2] + 0u);
    ctx.set_gpr(31, 0x08A5AC24u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0043_entry, 43u, 72u, 0x088B06C4u>(ctx, &aot_mem) && ctx.pc == 0x08A5AC24u) goto L_08A5AC24;
    return;
L_08A5AC24:
    ctx.set_gpr(4, 2246u << 16u);
    ctx.set_gpr(4, ctx.gpr[4] + static_cast<std::uint32_t>(-21364));
    ctx.set_gpr(5, ctx.gpr[2] + 0u);
    ctx.set_gpr(31, 0x08A5AC38u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0085_entry, 85u, 67u, 0x0895853Cu>(ctx, &aot_mem) && ctx.pc == 0x08A5AC38u) goto L_08A5AC38;
    return;
L_08A5AC38:
    ctx.set_gpr(31, 0x08A5AC40u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0078_entry, 78u, 216u, 0x0893CDDCu>(ctx, &aot_mem) && ctx.pc == 0x08A5AC40u) goto L_08A5AC40;
    return;
L_08A5AC40:
    ctx.set_gpr(4, rt.memory().aot_load32(ctx.gpr[2] + static_cast<std::uint32_t>(0)));
    ctx.set_gpr(31, 0x08A5AC4Cu);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0078_entry, 78u, 199u, 0x0893CC68u>(ctx, &aot_mem) && ctx.pc == 0x08A5AC4Cu) goto L_08A5AC4C;
    return;
L_08A5AC4C:
    ctx.set_gpr(4, ctx.gpr[2] + 0u);
    ctx.set_gpr(31, 0x08A5AC58u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0047_entry, 47u, 618u, 0x088C368Cu>(ctx, &aot_mem) && ctx.pc == 0x08A5AC58u) goto L_08A5AC58;
    return;
L_08A5AC58:
    ctx.set_gpr(4, 2246u << 16u);
    ctx.set_gpr(4, ctx.gpr[4] + static_cast<std::uint32_t>(-21284));
    ctx.set_gpr(5, ctx.gpr[2] + 0u);
    ctx.set_gpr(31, 0x08A5AC6Cu);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0085_entry, 85u, 67u, 0x0895853Cu>(ctx, &aot_mem) && ctx.pc == 0x08A5AC6Cu) goto L_08A5AC6C;
    return;
L_08A5AC6C:
    ctx.set_gpr(31, 0x08A5AC74u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0078_entry, 78u, 216u, 0x0893CDDCu>(ctx, &aot_mem) && ctx.pc == 0x08A5AC74u) goto L_08A5AC74;
    return;
L_08A5AC74:
    ctx.set_gpr(4, rt.memory().aot_load32(ctx.gpr[2] + static_cast<std::uint32_t>(0)));
    ctx.set_gpr(31, 0x08A5AC80u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0078_entry, 78u, 199u, 0x0893CC68u>(ctx, &aot_mem) && ctx.pc == 0x08A5AC80u) goto L_08A5AC80;
    return;
L_08A5AC80:
    ctx.set_gpr(4, ctx.gpr[2] + 0u);
    ctx.set_gpr(31, 0x08A5AC8Cu);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0043_entry, 43u, 355u, 0x088B2154u>(ctx, &aot_mem) && ctx.pc == 0x08A5AC8Cu) goto L_08A5AC8C;
    return;
L_08A5AC8C:
    ctx.set_gpr(4, 2246u << 16u);
    ctx.set_gpr(4, ctx.gpr[4] + static_cast<std::uint32_t>(-21268));
    ctx.set_gpr(5, ctx.gpr[2] + 0u);
    ctx.set_gpr(31, 0x08A5ACA0u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0085_entry, 85u, 67u, 0x0895853Cu>(ctx, &aot_mem) && ctx.pc == 0x08A5ACA0u) goto L_08A5ACA0;
    return;
L_08A5ACA0:
    ctx.set_gpr(31, rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(12)));
    ctx.set_gpr(29, ctx.gpr[29] + static_cast<std::uint32_t>(16));
    jump_target = ctx.gpr[31];
    // nop
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_08A5ACB0:
    ctx.set_gpr(29, ctx.gpr[29] + static_cast<std::uint32_t>(-16));
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(12), ctx.gpr[31]);
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(8), ctx.gpr[16]);
    ctx.set_gpr(16, ctx.gpr[4] + 0u);
    ctx.set_gpr(31, 0x08A5ACC8u);
    // nop
    goto L_08A590A8;
L_08A5ACC8:
    ctx.set_gpr(4, ctx.gpr[16] + 0u);
    ctx.set_gpr(25, rt.memory().aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(0)));
    ctx.set_gpr(25, rt.memory().aot_load32(ctx.gpr[25] + static_cast<std::uint32_t>(88)));
    jump_target = ctx.gpr[25];
    ctx.set_gpr(31, 0x08A5ACDCu);
    // nop
    ctx.pc = jump_target;
    if (rt.invoke_chained_call(ctx, &aot_mem) && ctx.pc == 0x08A5ACDCu) goto L_08A5ACDC;
    return;
L_08A5ACDC:
    ctx.set_gpr(4, ctx.gpr[2] + 0u);
    ctx.set_gpr(5, 0u + static_cast<std::uint32_t>(1));
    ctx.set_gpr(31, 0x08A5ACECu);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0080_entry, 80u, 118u, 0x089448B4u>(ctx, &aot_mem) && ctx.pc == 0x08A5ACECu) goto L_08A5ACEC;
    return;
L_08A5ACEC:
    { const bool branch_taken = ctx.gpr[2] != 0u;
    // nop
      if (branch_taken) {
          goto L_08A5ACFC;
      }
      goto L_08A5ACF4;
    }
L_08A5ACF4:
    ctx.set_gpr(31, 0x08A5ACFCu);
    // nop
    goto L_08A5A7EC;
L_08A5ACFC:
    ctx.set_gpr(31, rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(12)));
    ctx.set_gpr(16, rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(8)));
    ctx.set_gpr(29, ctx.gpr[29] + static_cast<std::uint32_t>(16));
    jump_target = ctx.gpr[31];
    // nop
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_08A5AD10:
    ctx.set_gpr(2, 2246u << 16u);
    ctx.set_gpr(2, rt.memory().aot_load32(ctx.gpr[2] + static_cast<std::uint32_t>(-25400)));
    jump_target = ctx.gpr[31];
    // nop
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_08A5AD20:
    ctx.set_gpr(29, ctx.gpr[29] + static_cast<std::uint32_t>(-64));
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(12), ctx.gpr[31]);
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(8), ctx.gpr[16]);
    ctx.set_gpr(2, 2246u << 16u);
    ctx.set_gpr(2, rt.memory().aot_load32(ctx.gpr[2] + static_cast<std::uint32_t>(-21268)));
    { const bool branch_taken = ctx.gpr[2] != 0u;
    // nop
      if (branch_taken) {
          goto L_08A5AD44;
      }
      goto L_08A5AD3C;
    }
L_08A5AD3C:
    ctx.set_gpr(31, 0x08A5AD44u);
    // nop
    goto L_08A5A7EC;
L_08A5AD44:
    ctx.set_gpr(2, 2246u << 16u);
    ctx.set_gpr(4, rt.memory().aot_load32(ctx.gpr[2] + static_cast<std::uint32_t>(-21268)));
    ctx.set_gpr(5, 0u + 0u);
    ctx.set_gpr(25, rt.memory().aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(0)));
    ctx.set_gpr(25, rt.memory().aot_load32(ctx.gpr[25] + static_cast<std::uint32_t>(100)));
    jump_target = ctx.gpr[25];
    ctx.set_gpr(31, 0x08A5AD60u);
    // nop
    ctx.pc = jump_target;
    if (rt.invoke_chained_call(ctx, &aot_mem) && ctx.pc == 0x08A5AD60u) goto L_08A5AD60;
    return;
L_08A5AD60:
    ctx.set_gpr(31, 0x08A5AD68u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0078_entry, 78u, 216u, 0x0893CDDCu>(ctx, &aot_mem) && ctx.pc == 0x08A5AD68u) goto L_08A5AD68;
    return;
L_08A5AD68:
    ctx.set_gpr(4, rt.memory().aot_load32(ctx.gpr[2] + static_cast<std::uint32_t>(0)));
    ctx.set_gpr(31, 0x08A5AD74u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0078_entry, 78u, 199u, 0x0893CC68u>(ctx, &aot_mem) && ctx.pc == 0x08A5AD74u) goto L_08A5AD74;
    return;
L_08A5AD74:
    ctx.set_gpr(4, ctx.gpr[2] + 0u);
    ctx.set_gpr(31, 0x08A5AD80u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0043_entry, 43u, 409u, 0x088B2600u>(ctx, &aot_mem) && ctx.pc == 0x08A5AD80u) goto L_08A5AD80;
    return;
L_08A5AD80:
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(60), ctx.gpr[2]);
    ctx.set_gpr(3, 2246u << 16u);
    ctx.set_gpr(4, rt.memory().aot_load32(ctx.gpr[3] + static_cast<std::uint32_t>(-21268)));
    ctx.set_gpr(5, ctx.gpr[2] + 0u);
    ctx.set_gpr(25, rt.memory().aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(0)));
    ctx.set_gpr(25, rt.memory().aot_load32(ctx.gpr[25] + static_cast<std::uint32_t>(140)));
    jump_target = ctx.gpr[25];
    ctx.set_gpr(31, 0x08A5ADA0u);
    // nop
    ctx.pc = jump_target;
    if (rt.invoke_chained_call(ctx, &aot_mem) && ctx.pc == 0x08A5ADA0u) goto L_08A5ADA0;
    return;
L_08A5ADA0:
    ctx.set_gpr(31, 0x08A5ADA8u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0078_entry, 78u, 216u, 0x0893CDDCu>(ctx, &aot_mem) && ctx.pc == 0x08A5ADA8u) goto L_08A5ADA8;
    return;
L_08A5ADA8:
    ctx.set_gpr(4, rt.memory().aot_load32(ctx.gpr[2] + static_cast<std::uint32_t>(0)));
    ctx.set_gpr(31, 0x08A5ADB4u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0078_entry, 78u, 199u, 0x0893CC68u>(ctx, &aot_mem) && ctx.pc == 0x08A5ADB4u) goto L_08A5ADB4;
    return;
L_08A5ADB4:
    ctx.set_gpr(4, ctx.gpr[2] + 0u);
    ctx.set_gpr(31, 0x08A5ADC0u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0100_entry, 100u, 257u, 0x08995790u>(ctx, &aot_mem) && ctx.pc == 0x08A5ADC0u) goto L_08A5ADC0;
    return;
L_08A5ADC0:
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(56), ctx.gpr[2]);
    ctx.set_gpr(4, rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(60)));
    ctx.set_gpr(5, ctx.gpr[2] + 0u);
    ctx.set_gpr(6, 0u + 0u);
    ctx.set_gpr(31, 0x08A5ADD8u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0051_entry, 51u, 12u, 0x088D00D4u>(ctx, &aot_mem) && ctx.pc == 0x08A5ADD8u) goto L_08A5ADD8;
    return;
L_08A5ADD8:
    ctx.set_gpr(4, rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(56)));
    ctx.set_gpr(5, 0u + static_cast<std::uint32_t>(1));
    ctx.set_gpr(25, rt.memory().aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(0)));
    ctx.set_gpr(25, rt.memory().aot_load32(ctx.gpr[25] + static_cast<std::uint32_t>(112)));
    jump_target = ctx.gpr[25];
    ctx.set_gpr(31, 0x08A5ADF0u);
    // nop
    ctx.pc = jump_target;
    if (rt.invoke_chained_call(ctx, &aot_mem) && ctx.pc == 0x08A5ADF0u) goto L_08A5ADF0;
    return;
L_08A5ADF0:
    ctx.set_gpr(4, rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(56)));
    ctx.set_gpr(5, 0u + static_cast<std::uint32_t>(1));
    ctx.set_gpr(25, rt.memory().aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(0)));
    ctx.set_gpr(25, rt.memory().aot_load32(ctx.gpr[25] + static_cast<std::uint32_t>(116)));
    jump_target = ctx.gpr[25];
    ctx.set_gpr(31, 0x08A5AE08u);
    // nop
    ctx.pc = jump_target;
    if (rt.invoke_chained_call(ctx, &aot_mem) && ctx.pc == 0x08A5AE08u) goto L_08A5AE08;
    return;
L_08A5AE08:
    ctx.set_gpr(4, rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(56)));
    ctx.set_gpr(5, 0u + static_cast<std::uint32_t>(5));
    ctx.set_gpr(25, rt.memory().aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(0)));
    ctx.set_gpr(25, rt.memory().aot_load32(ctx.gpr[25] + static_cast<std::uint32_t>(120)));
    jump_target = ctx.gpr[25];
    ctx.set_gpr(31, 0x08A5AE20u);
    // nop
    ctx.pc = jump_target;
    if (rt.invoke_chained_call(ctx, &aot_mem) && ctx.pc == 0x08A5AE20u) goto L_08A5AE20;
    return;
L_08A5AE20:
    ctx.set_gpr(4, rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(56)));
    ctx.set_gpr(25, rt.memory().aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(0)));
    ctx.set_gpr(25, rt.memory().aot_load32(ctx.gpr[25] + static_cast<std::uint32_t>(124)));
    jump_target = ctx.gpr[25];
    ctx.set_gpr(31, 0x08A5AE34u);
    // nop
    ctx.pc = jump_target;
    if (rt.invoke_chained_call(ctx, &aot_mem) && ctx.pc == 0x08A5AE34u) goto L_08A5AE34;
    return;
L_08A5AE34:
    ctx.set_gpr(2, rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(56)));
    ctx.set_gpr(3, rt.memory().aot_load32(ctx.gpr[2] + static_cast<std::uint32_t>(52)));
    ctx.set_gpr(2, 0u + static_cast<std::uint32_t>(255));
    rt.memory().aot_store8(ctx.gpr[3] + static_cast<std::uint32_t>(0), static_cast<std::uint8_t>(ctx.gpr[2]));
    rt.memory().aot_store8(ctx.gpr[3] + static_cast<std::uint32_t>(1), static_cast<std::uint8_t>(ctx.gpr[2]));
    rt.memory().aot_store8(ctx.gpr[3] + static_cast<std::uint32_t>(2), static_cast<std::uint8_t>(ctx.gpr[2]));
    ctx.set_gpr(4, rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(60)));
    ctx.set_gpr(5, 0u + 0u);
    ctx.set_gpr(25, rt.memory().aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(0)));
    ctx.set_gpr(25, rt.memory().aot_load32(ctx.gpr[25] + static_cast<std::uint32_t>(136)));
    jump_target = ctx.gpr[25];
    ctx.set_gpr(31, 0x08A5AE64u);
    // nop
    ctx.pc = jump_target;
    if (rt.invoke_chained_call(ctx, &aot_mem) && ctx.pc == 0x08A5AE64u) goto L_08A5AE64;
    return;
L_08A5AE64:
    ctx.set_gpr(4, rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(60)));
    ctx.set_gpr(5, 0u + 0u);
    ctx.set_gpr(25, rt.memory().aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(0)));
    ctx.set_gpr(25, rt.memory().aot_load32(ctx.gpr[25] + static_cast<std::uint32_t>(140)));
    jump_target = ctx.gpr[25];
    ctx.set_gpr(31, 0x08A5AE7Cu);
    // nop
    ctx.pc = jump_target;
    if (rt.invoke_chained_call(ctx, &aot_mem) && ctx.pc == 0x08A5AE7Cu) goto L_08A5AE7C;
    return;
L_08A5AE7C:
    ctx.set_gpr(4, rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(60)));
    ctx.set_gpr(5, 0u + 0u);
    ctx.set_gpr(25, rt.memory().aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(0)));
    ctx.set_gpr(25, rt.memory().aot_load32(ctx.gpr[25] + static_cast<std::uint32_t>(144)));
    jump_target = ctx.gpr[25];
    ctx.set_gpr(31, 0x08A5AE94u);
    // nop
    ctx.pc = jump_target;
    if (rt.invoke_chained_call(ctx, &aot_mem) && ctx.pc == 0x08A5AE94u) goto L_08A5AE94;
    return;
L_08A5AE94:
    ctx.set_gpr(4, rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(60)));
    ctx.set_gpr(5, 0u + 0u);
    ctx.set_gpr(25, rt.memory().aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(0)));
    ctx.set_gpr(25, rt.memory().aot_load32(ctx.gpr[25] + static_cast<std::uint32_t>(148)));
    jump_target = ctx.gpr[25];
    ctx.set_gpr(31, 0x08A5AEACu);
    // nop
    ctx.pc = jump_target;
    if (rt.invoke_chained_call(ctx, &aot_mem) && ctx.pc == 0x08A5AEACu) goto L_08A5AEAC;
    return;
L_08A5AEAC:
    ctx.set_gpr(4, rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(56)));
    { const bool branch_taken = ctx.gpr[4] == 0u;
    // nop
      if (branch_taken) {
          goto L_08A5AEC0;
      }
      goto L_08A5AEB8;
    }
L_08A5AEB8:
    ctx.set_gpr(31, 0x08A5AEC0u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0014_entry, 14u, 257u, 0x0883D454u>(ctx, &aot_mem) && ctx.pc == 0x08A5AEC0u) goto L_08A5AEC0;
    return;
L_08A5AEC0:
    ctx.set_gpr(4, rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(60)));
    { const bool branch_taken = ctx.gpr[4] == 0u;
    // nop
      if (branch_taken) {
          goto L_08A5AED4;
      }
      goto L_08A5AECC;
    }
L_08A5AECC:
    ctx.set_gpr(31, 0x08A5AED4u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0014_entry, 14u, 257u, 0x0883D454u>(ctx, &aot_mem) && ctx.pc == 0x08A5AED4u) goto L_08A5AED4;
    return;
L_08A5AED4:
    ctx.set_gpr(2, 2246u << 16u);
    ctx.set_gpr(4, rt.memory().aot_load32(ctx.gpr[2] + static_cast<std::uint32_t>(-21684)));
    ctx.set_gpr(5, 0u + 0u);
    ctx.set_gpr(25, rt.memory().aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(0)));
    ctx.set_gpr(25, rt.memory().aot_load32(ctx.gpr[25] + static_cast<std::uint32_t>(100)));
    jump_target = ctx.gpr[25];
    ctx.set_gpr(31, 0x08A5AEF0u);
    // nop
    ctx.pc = jump_target;
    if (rt.invoke_chained_call(ctx, &aot_mem) && ctx.pc == 0x08A5AEF0u) goto L_08A5AEF0;
    return;
L_08A5AEF0:
    ctx.set_gpr(2, 2246u << 16u);
    ctx.set_gpr(4, rt.memory().aot_load32(ctx.gpr[2] + static_cast<std::uint32_t>(-21684)));
    ctx.set_gpr(5, 0u + static_cast<std::uint32_t>(1));
    ctx.set_gpr(25, rt.memory().aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(0)));
    ctx.set_gpr(25, rt.memory().aot_load32(ctx.gpr[25] + static_cast<std::uint32_t>(136)));
    jump_target = ctx.gpr[25];
    ctx.set_gpr(31, 0x08A5AF0Cu);
    // nop
    ctx.pc = jump_target;
    if (rt.invoke_chained_call(ctx, &aot_mem) && ctx.pc == 0x08A5AF0Cu) goto L_08A5AF0C;
    return;
L_08A5AF0C:
    ctx.set_gpr(2, 2246u << 16u);
    ctx.set_gpr(4, rt.memory().aot_load32(ctx.gpr[2] + static_cast<std::uint32_t>(-21668)));
    ctx.set_gpr(5, 0u + static_cast<std::uint32_t>(1));
    ctx.set_gpr(25, rt.memory().aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(0)));
    ctx.set_gpr(25, rt.memory().aot_load32(ctx.gpr[25] + static_cast<std::uint32_t>(100)));
    jump_target = ctx.gpr[25];
    ctx.set_gpr(31, 0x08A5AF28u);
    // nop
    ctx.pc = jump_target;
    if (rt.invoke_chained_call(ctx, &aot_mem) && ctx.pc == 0x08A5AF28u) goto L_08A5AF28;
    return;
L_08A5AF28:
    ctx.set_gpr(2, 2246u << 16u);
    ctx.set_gpr(4, rt.memory().aot_load32(ctx.gpr[2] + static_cast<std::uint32_t>(-21668)));
    ctx.set_gpr(5, 0u + static_cast<std::uint32_t>(1));
    ctx.set_gpr(25, rt.memory().aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(0)));
    ctx.set_gpr(25, rt.memory().aot_load32(ctx.gpr[25] + static_cast<std::uint32_t>(136)));
    jump_target = ctx.gpr[25];
    ctx.set_gpr(31, 0x08A5AF44u);
    // nop
    ctx.pc = jump_target;
    if (rt.invoke_chained_call(ctx, &aot_mem) && ctx.pc == 0x08A5AF44u) goto L_08A5AF44;
    return;
L_08A5AF44:
    ctx.set_gpr(2, 2246u << 16u);
    ctx.set_gpr(4, rt.memory().aot_load32(ctx.gpr[2] + static_cast<std::uint32_t>(-21652)));
    ctx.set_gpr(5, 0u + 0u);
    ctx.set_gpr(25, rt.memory().aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(0)));
    ctx.set_gpr(25, rt.memory().aot_load32(ctx.gpr[25] + static_cast<std::uint32_t>(100)));
    jump_target = ctx.gpr[25];
    ctx.set_gpr(31, 0x08A5AF60u);
    // nop
    ctx.pc = jump_target;
    if (rt.invoke_chained_call(ctx, &aot_mem) && ctx.pc == 0x08A5AF60u) goto L_08A5AF60;
    return;
L_08A5AF60:
    ctx.set_gpr(2, 2246u << 16u);
    ctx.set_gpr(4, rt.memory().aot_load32(ctx.gpr[2] + static_cast<std::uint32_t>(-21652)));
    ctx.set_gpr(5, 0u + 0u);
    ctx.set_gpr(25, rt.memory().aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(0)));
    ctx.set_gpr(25, rt.memory().aot_load32(ctx.gpr[25] + static_cast<std::uint32_t>(136)));
    jump_target = ctx.gpr[25];
    ctx.set_gpr(31, 0x08A5AF7Cu);
    // nop
    ctx.pc = jump_target;
    if (rt.invoke_chained_call(ctx, &aot_mem) && ctx.pc == 0x08A5AF7Cu) goto L_08A5AF7C;
    return;
L_08A5AF7C:
    ctx.set_gpr(2, 2246u << 16u);
    ctx.set_gpr(4, rt.memory().aot_load32(ctx.gpr[2] + static_cast<std::uint32_t>(-21572)));
    ctx.set_gpr(5, 0u + 0u);
    ctx.set_gpr(25, rt.memory().aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(0)));
    ctx.set_gpr(25, rt.memory().aot_load32(ctx.gpr[25] + static_cast<std::uint32_t>(136)));
    jump_target = ctx.gpr[25];
    ctx.set_gpr(31, 0x08A5AF98u);
    // nop
    ctx.pc = jump_target;
    if (rt.invoke_chained_call(ctx, &aot_mem) && ctx.pc == 0x08A5AF98u) goto L_08A5AF98;
    return;
L_08A5AF98:
    ctx.set_gpr(2, 2246u << 16u);
    ctx.set_gpr(4, rt.memory().aot_load32(ctx.gpr[2] + static_cast<std::uint32_t>(-21460)));
    ctx.set_gpr(5, 0u + 0u);
    ctx.set_gpr(25, rt.memory().aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(0)));
    ctx.set_gpr(25, rt.memory().aot_load32(ctx.gpr[25] + static_cast<std::uint32_t>(136)));
    jump_target = ctx.gpr[25];
    ctx.set_gpr(31, 0x08A5AFB4u);
    // nop
    ctx.pc = jump_target;
    if (rt.invoke_chained_call(ctx, &aot_mem) && ctx.pc == 0x08A5AFB4u) goto L_08A5AFB4;
    return;
L_08A5AFB4:
    ctx.set_gpr(2, 2246u << 16u);
    ctx.set_gpr(4, rt.memory().aot_load32(ctx.gpr[2] + static_cast<std::uint32_t>(-21636)));
    ctx.set_gpr(5, 0u + 0u);
    ctx.set_gpr(25, rt.memory().aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(0)));
    ctx.set_gpr(25, rt.memory().aot_load32(ctx.gpr[25] + static_cast<std::uint32_t>(136)));
    jump_target = ctx.gpr[25];
    ctx.set_gpr(31, 0x08A5AFD0u);
    // nop
    ctx.pc = jump_target;
    if (rt.invoke_chained_call(ctx, &aot_mem) && ctx.pc == 0x08A5AFD0u) goto L_08A5AFD0;
    return;
L_08A5AFD0:
    ctx.set_gpr(2, 2246u << 16u);
    ctx.set_gpr(4, rt.memory().aot_load32(ctx.gpr[2] + static_cast<std::uint32_t>(-21636)));
    ctx.set_gpr(5, 0u + static_cast<std::uint32_t>(2));
    ctx.set_gpr(25, rt.memory().aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(0)));
    ctx.set_gpr(25, rt.memory().aot_load32(ctx.gpr[25] + static_cast<std::uint32_t>(140)));
    jump_target = ctx.gpr[25];
    ctx.set_gpr(31, 0x08A5AFECu);
    // nop
    ctx.pc = jump_target;
    if (rt.invoke_chained_call(ctx, &aot_mem) && ctx.pc == 0x08A5AFECu) goto L_08A5AFEC;
    return;
L_08A5AFEC:
    ctx.set_gpr(2, 2246u << 16u);
    ctx.set_gpr(4, rt.memory().aot_load32(ctx.gpr[2] + static_cast<std::uint32_t>(-21620)));
    ctx.set_gpr(5, 0u + static_cast<std::uint32_t>(1));
    ctx.set_gpr(25, rt.memory().aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(0)));
    ctx.set_gpr(25, rt.memory().aot_load32(ctx.gpr[25] + static_cast<std::uint32_t>(136)));
    jump_target = ctx.gpr[25];
    ctx.set_gpr(31, 0x08A5B008u);
    // nop
    ctx.pc = jump_target;
    if (rt.invoke_chained_call(ctx, &aot_mem) && ctx.pc == 0x08A5B008u) goto L_08A5B008;
    return;
L_08A5B008:
    ctx.set_gpr(2, 2246u << 16u);
    ctx.set_gpr(4, rt.memory().aot_load32(ctx.gpr[2] + static_cast<std::uint32_t>(-21620)));
    ctx.set_gpr(5, 0u + static_cast<std::uint32_t>(1));
    ctx.set_gpr(25, rt.memory().aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(0)));
    ctx.set_gpr(25, rt.memory().aot_load32(ctx.gpr[25] + static_cast<std::uint32_t>(140)));
    jump_target = ctx.gpr[25];
    ctx.set_gpr(31, 0x08A5B024u);
    // nop
    ctx.pc = jump_target;
    if (rt.invoke_chained_call(ctx, &aot_mem) && ctx.pc == 0x08A5B024u) goto L_08A5B024;
    return;
L_08A5B024:
    ctx.set_gpr(2, 2246u << 16u);
    ctx.set_gpr(4, rt.memory().aot_load32(ctx.gpr[2] + static_cast<std::uint32_t>(-21604)));
    ctx.set_gpr(5, 0u + static_cast<std::uint32_t>(1));
    ctx.set_gpr(25, rt.memory().aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(0)));
    ctx.set_gpr(25, rt.memory().aot_load32(ctx.gpr[25] + static_cast<std::uint32_t>(136)));
    jump_target = ctx.gpr[25];
    ctx.set_gpr(31, 0x08A5B040u);
    // nop
    ctx.pc = jump_target;
    if (rt.invoke_chained_call(ctx, &aot_mem) && ctx.pc == 0x08A5B040u) goto L_08A5B040;
    return;
L_08A5B040:
    ctx.set_gpr(2, 2246u << 16u);
    ctx.set_gpr(4, rt.memory().aot_load32(ctx.gpr[2] + static_cast<std::uint32_t>(-21588)));
    ctx.set_gpr(5, 0u + 0u);
    ctx.set_gpr(25, rt.memory().aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(0)));
    ctx.set_gpr(25, rt.memory().aot_load32(ctx.gpr[25] + static_cast<std::uint32_t>(136)));
    jump_target = ctx.gpr[25];
    ctx.set_gpr(31, 0x08A5B05Cu);
    // nop
    ctx.pc = jump_target;
    if (rt.invoke_chained_call(ctx, &aot_mem) && ctx.pc == 0x08A5B05Cu) goto L_08A5B05C;
    return;
L_08A5B05C:
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(40), 0u);
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(44), 0u);
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(48), 0u);
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(52), 0u);
    ctx.set_gpr(2, 2246u << 16u);
    ctx.set_gpr(2, rt.memory().aot_load32(ctx.gpr[2] + static_cast<std::uint32_t>(-21508)));
    ctx.set_gpr(5, 0u + static_cast<std::uint32_t>(1));
    rt.memory().aot_store32(ctx.gpr[2] + static_cast<std::uint32_t>(12), ctx.gpr[5]);
    ctx.set_gpr(2, 2246u << 16u);
    ctx.set_gpr(2, rt.memory().aot_load32(ctx.gpr[2] + static_cast<std::uint32_t>(-21476)));
    rt.memory().aot_store32(ctx.gpr[2] + static_cast<std::uint32_t>(12), ctx.gpr[5]);
    ctx.set_gpr(3, 16256u << 16u);
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(24), ctx.gpr[3]);
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(28), ctx.gpr[3]);
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(32), ctx.gpr[3]);
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(36), ctx.gpr[3]);
    ctx.set_gpr(2, 2246u << 16u);
    ctx.set_gpr(16, rt.memory().aot_load32(ctx.gpr[2] + static_cast<std::uint32_t>(-21508)));
    rt.memory().aot_store32(ctx.gpr[16] + static_cast<std::uint32_t>(16), ctx.gpr[3]);
    ctx.fpr[0] = std::bit_cast<float>(rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(28)));
    rt.memory().aot_store32(ctx.gpr[16] + static_cast<std::uint32_t>(20), std::bit_cast<std::uint32_t>(ctx.fpr[0]));
    ctx.fpr[0] = std::bit_cast<float>(rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(32)));
    rt.memory().aot_store32(ctx.gpr[16] + static_cast<std::uint32_t>(24), std::bit_cast<std::uint32_t>(ctx.fpr[0]));
    ctx.fpr[0] = std::bit_cast<float>(rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(36)));
    rt.memory().aot_store32(ctx.gpr[16] + static_cast<std::uint32_t>(28), std::bit_cast<std::uint32_t>(ctx.fpr[0]));
    ctx.set_gpr(4, ctx.gpr[29] + static_cast<std::uint32_t>(24));
    ctx.set_gpr(31, 0x08A5B0CCu);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0127_entry, 127u, 283u, 0x08A03440u>(ctx, &aot_mem) && ctx.pc == 0x08A5B0CCu) goto L_08A5B0CC;
    return;
L_08A5B0CC:
    rt.memory().aot_store32(ctx.gpr[16] + static_cast<std::uint32_t>(60), ctx.gpr[2]);
    ctx.set_gpr(2, 2246u << 16u);
    ctx.set_gpr(16, rt.memory().aot_load32(ctx.gpr[2] + static_cast<std::uint32_t>(-21492)));
    ctx.fpr[0] = std::bit_cast<float>(rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(40)));
    rt.memory().aot_store32(ctx.gpr[16] + static_cast<std::uint32_t>(16), std::bit_cast<std::uint32_t>(ctx.fpr[0]));
    ctx.fpr[0] = std::bit_cast<float>(rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(44)));
    rt.memory().aot_store32(ctx.gpr[16] + static_cast<std::uint32_t>(20), std::bit_cast<std::uint32_t>(ctx.fpr[0]));
    ctx.fpr[0] = std::bit_cast<float>(rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(48)));
    rt.memory().aot_store32(ctx.gpr[16] + static_cast<std::uint32_t>(24), std::bit_cast<std::uint32_t>(ctx.fpr[0]));
    ctx.fpr[0] = std::bit_cast<float>(rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(52)));
    rt.memory().aot_store32(ctx.gpr[16] + static_cast<std::uint32_t>(28), std::bit_cast<std::uint32_t>(ctx.fpr[0]));
    ctx.set_gpr(4, ctx.gpr[29] + static_cast<std::uint32_t>(40));
    ctx.set_gpr(5, 0u + static_cast<std::uint32_t>(1));
    ctx.set_gpr(31, 0x08A5B108u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0127_entry, 127u, 283u, 0x08A03440u>(ctx, &aot_mem) && ctx.pc == 0x08A5B108u) goto L_08A5B108;
    return;
L_08A5B108:
    rt.memory().aot_store32(ctx.gpr[16] + static_cast<std::uint32_t>(60), ctx.gpr[2]);
    ctx.set_gpr(2, 2246u << 16u);
    ctx.set_gpr(2, rt.memory().aot_load32(ctx.gpr[2] + static_cast<std::uint32_t>(-21492)));
    ctx.set_gpr(5, 0u + static_cast<std::uint32_t>(1));
    rt.memory().aot_store32(ctx.gpr[2] + static_cast<std::uint32_t>(12), ctx.gpr[5]);
    ctx.set_gpr(2, 2246u << 16u);
    ctx.set_gpr(4, rt.memory().aot_load32(ctx.gpr[2] + static_cast<std::uint32_t>(-21444)));
    ctx.set_gpr(25, rt.memory().aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(0)));
    ctx.set_gpr(25, rt.memory().aot_load32(ctx.gpr[25] + static_cast<std::uint32_t>(136)));
    jump_target = ctx.gpr[25];
    ctx.set_gpr(31, 0x08A5B134u);
    // nop
    ctx.pc = jump_target;
    if (rt.invoke_chained_call(ctx, &aot_mem) && ctx.pc == 0x08A5B134u) goto L_08A5B134;
    return;
L_08A5B134:
    ctx.set_gpr(2, 2246u << 16u);
    ctx.set_gpr(4, rt.memory().aot_load32(ctx.gpr[2] + static_cast<std::uint32_t>(-21444)));
    ctx.set_gpr(5, 0u + 0u);
    ctx.set_gpr(25, rt.memory().aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(0)));
    ctx.set_gpr(25, rt.memory().aot_load32(ctx.gpr[25] + static_cast<std::uint32_t>(100)));
    jump_target = ctx.gpr[25];
    ctx.set_gpr(31, 0x08A5B150u);
    // nop
    ctx.pc = jump_target;
    if (rt.invoke_chained_call(ctx, &aot_mem) && ctx.pc == 0x08A5B150u) goto L_08A5B150;
    return;
L_08A5B150:
    ctx.set_gpr(2, 2246u << 16u);
    ctx.set_gpr(4, rt.memory().aot_load32(ctx.gpr[2] + static_cast<std::uint32_t>(-21428)));
    ctx.set_gpr(5, 0u + static_cast<std::uint32_t>(1));
    ctx.set_gpr(25, rt.memory().aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(0)));
    ctx.set_gpr(25, rt.memory().aot_load32(ctx.gpr[25] + static_cast<std::uint32_t>(136)));
    jump_target = ctx.gpr[25];
    ctx.set_gpr(31, 0x08A5B16Cu);
    // nop
    ctx.pc = jump_target;
    if (rt.invoke_chained_call(ctx, &aot_mem) && ctx.pc == 0x08A5B16Cu) goto L_08A5B16C;
    return;
L_08A5B16C:
    ctx.set_gpr(2, 2246u << 16u);
    ctx.set_gpr(4, rt.memory().aot_load32(ctx.gpr[2] + static_cast<std::uint32_t>(-21428)));
    ctx.set_gpr(5, 0u + static_cast<std::uint32_t>(1));
    ctx.set_gpr(25, rt.memory().aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(0)));
    ctx.set_gpr(25, rt.memory().aot_load32(ctx.gpr[25] + static_cast<std::uint32_t>(100)));
    jump_target = ctx.gpr[25];
    ctx.set_gpr(31, 0x08A5B188u);
    // nop
    ctx.pc = jump_target;
    if (rt.invoke_chained_call(ctx, &aot_mem) && ctx.pc == 0x08A5B188u) goto L_08A5B188;
    return;
L_08A5B188:
    ctx.set_gpr(2, 2246u << 16u);
    ctx.set_gpr(3, rt.memory().aot_load32(ctx.gpr[2] + static_cast<std::uint32_t>(-21412)));
    ctx.set_gpr(2, 0u + static_cast<std::uint32_t>(1));
    rt.memory().aot_store32(ctx.gpr[3] + static_cast<std::uint32_t>(12), ctx.gpr[2]);
    ctx.set_gpr(2, 2246u << 16u);
    ctx.set_gpr(4, rt.memory().aot_load32(ctx.gpr[2] + static_cast<std::uint32_t>(-21412)));
    ctx.set_gpr(5, 0u + 0u);
    ctx.set_gpr(25, rt.memory().aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(0)));
    ctx.set_gpr(25, rt.memory().aot_load32(ctx.gpr[25] + static_cast<std::uint32_t>(100)));
    jump_target = ctx.gpr[25];
    ctx.set_gpr(31, 0x08A5B1B4u);
    // nop
    ctx.pc = jump_target;
    if (rt.invoke_chained_call(ctx, &aot_mem) && ctx.pc == 0x08A5B1B4u) goto L_08A5B1B4;
    return;
L_08A5B1B4:
    ctx.set_gpr(2, 2246u << 16u);
    ctx.set_gpr(2, rt.memory().aot_load32(ctx.gpr[2] + static_cast<std::uint32_t>(-21396)));
    ctx.set_gpr(5, 0u + static_cast<std::uint32_t>(1));
    rt.memory().aot_store32(ctx.gpr[2] + static_cast<std::uint32_t>(12), ctx.gpr[5]);
    ctx.set_gpr(2, 2246u << 16u);
    ctx.set_gpr(4, rt.memory().aot_load32(ctx.gpr[2] + static_cast<std::uint32_t>(-21396)));
    ctx.set_gpr(25, rt.memory().aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(0)));
    ctx.set_gpr(25, rt.memory().aot_load32(ctx.gpr[25] + static_cast<std::uint32_t>(100)));
    jump_target = ctx.gpr[25];
    ctx.set_gpr(31, 0x08A5B1DCu);
    // nop
    ctx.pc = jump_target;
    if (rt.invoke_chained_call(ctx, &aot_mem) && ctx.pc == 0x08A5B1DCu) goto L_08A5B1DC;
    return;
L_08A5B1DC:
    ctx.set_gpr(2, 2246u << 16u);
    ctx.set_gpr(4, rt.memory().aot_load32(ctx.gpr[2] + static_cast<std::uint32_t>(-21380)));
    ctx.set_gpr(5, 0u + static_cast<std::uint32_t>(1));
    ctx.set_gpr(25, rt.memory().aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(0)));
    ctx.set_gpr(25, rt.memory().aot_load32(ctx.gpr[25] + static_cast<std::uint32_t>(136)));
    jump_target = ctx.gpr[25];
    ctx.set_gpr(31, 0x08A5B1F8u);
    // nop
    ctx.pc = jump_target;
    if (rt.invoke_chained_call(ctx, &aot_mem) && ctx.pc == 0x08A5B1F8u) goto L_08A5B1F8;
    return;
L_08A5B1F8:
    ctx.set_gpr(2, 2246u << 16u);
    ctx.set_gpr(4, rt.memory().aot_load32(ctx.gpr[2] + static_cast<std::uint32_t>(-21380)));
    ctx.set_gpr(5, 0u + 0u);
    ctx.set_gpr(25, rt.memory().aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(0)));
    ctx.set_gpr(25, rt.memory().aot_load32(ctx.gpr[25] + static_cast<std::uint32_t>(100)));
    jump_target = ctx.gpr[25];
    ctx.set_gpr(31, 0x08A5B214u);
    // nop
    ctx.pc = jump_target;
    if (rt.invoke_chained_call(ctx, &aot_mem) && ctx.pc == 0x08A5B214u) goto L_08A5B214;
    return;
L_08A5B214:
    ctx.set_gpr(2, 2246u << 16u);
    ctx.set_gpr(4, rt.memory().aot_load32(ctx.gpr[2] + static_cast<std::uint32_t>(-21364)));
    ctx.set_gpr(5, 0u + static_cast<std::uint32_t>(1));
    ctx.set_gpr(25, rt.memory().aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(0)));
    ctx.set_gpr(25, rt.memory().aot_load32(ctx.gpr[25] + static_cast<std::uint32_t>(136)));
    jump_target = ctx.gpr[25];
    ctx.set_gpr(31, 0x08A5B230u);
    // nop
    ctx.pc = jump_target;
    if (rt.invoke_chained_call(ctx, &aot_mem) && ctx.pc == 0x08A5B230u) goto L_08A5B230;
    return;
L_08A5B230:
    ctx.set_gpr(2, 2246u << 16u);
    ctx.set_gpr(4, rt.memory().aot_load32(ctx.gpr[2] + static_cast<std::uint32_t>(-21364)));
    ctx.set_gpr(5, 0u + static_cast<std::uint32_t>(1));
    ctx.set_gpr(25, rt.memory().aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(0)));
    ctx.set_gpr(25, rt.memory().aot_load32(ctx.gpr[25] + static_cast<std::uint32_t>(100)));
    jump_target = ctx.gpr[25];
    ctx.set_gpr(31, 0x08A5B24Cu);
    // nop
    ctx.pc = jump_target;
    if (rt.invoke_chained_call(ctx, &aot_mem) && ctx.pc == 0x08A5B24Cu) goto L_08A5B24C;
    return;
L_08A5B24C:
    ctx.set_gpr(2, 2246u << 16u);
    ctx.set_gpr(4, rt.memory().aot_load32(ctx.gpr[2] + static_cast<std::uint32_t>(-21556)));
    ctx.set_gpr(5, 0u + static_cast<std::uint32_t>(4));
    ctx.set_gpr(25, rt.memory().aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(0)));
    ctx.set_gpr(25, rt.memory().aot_load32(ctx.gpr[25] + static_cast<std::uint32_t>(136)));
    jump_target = ctx.gpr[25];
    ctx.set_gpr(31, 0x08A5B268u);
    // nop
    ctx.pc = jump_target;
    if (rt.invoke_chained_call(ctx, &aot_mem) && ctx.pc == 0x08A5B268u) goto L_08A5B268;
    return;
L_08A5B268:
    ctx.set_gpr(2, 2246u << 16u);
    ctx.set_gpr(4, rt.memory().aot_load32(ctx.gpr[2] + static_cast<std::uint32_t>(-21556)));
    ctx.fpr[12] = std::bit_cast<float>(rt.memory().aot_load32(ctx.gpr[28] + static_cast<std::uint32_t>(-32264)));
    ctx.set_gpr(25, rt.memory().aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(0)));
    ctx.set_gpr(25, rt.memory().aot_load32(ctx.gpr[25] + static_cast<std::uint32_t>(140)));
    jump_target = ctx.gpr[25];
    ctx.set_gpr(31, 0x08A5B284u);
    // nop
    ctx.pc = jump_target;
    if (rt.invoke_chained_call(ctx, &aot_mem) && ctx.pc == 0x08A5B284u) goto L_08A5B284;
    return;
L_08A5B284:
    ctx.set_gpr(2, 2246u << 16u);
    ctx.set_gpr(4, rt.memory().aot_load32(ctx.gpr[2] + static_cast<std::uint32_t>(-21540)));
    ctx.set_gpr(5, 0u + static_cast<std::uint32_t>(1));
    ctx.set_gpr(25, rt.memory().aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(0)));
    ctx.set_gpr(25, rt.memory().aot_load32(ctx.gpr[25] + static_cast<std::uint32_t>(136)));
    jump_target = ctx.gpr[25];
    ctx.set_gpr(31, 0x08A5B2A0u);
    // nop
    ctx.pc = jump_target;
    if (rt.invoke_chained_call(ctx, &aot_mem) && ctx.pc == 0x08A5B2A0u) goto L_08A5B2A0;
    return;
L_08A5B2A0:
    ctx.set_gpr(2, 2246u << 16u);
    ctx.set_gpr(4, rt.memory().aot_load32(ctx.gpr[2] + static_cast<std::uint32_t>(-21284)));
    ctx.set_gpr(5, 0u + 0u);
    ctx.set_gpr(25, rt.memory().aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(0)));
    ctx.set_gpr(25, rt.memory().aot_load32(ctx.gpr[25] + static_cast<std::uint32_t>(136)));
    jump_target = ctx.gpr[25];
    ctx.set_gpr(31, 0x08A5B2BCu);
    // nop
    ctx.pc = jump_target;
    if (rt.invoke_chained_call(ctx, &aot_mem) && ctx.pc == 0x08A5B2BCu) goto L_08A5B2BC;
    return;
L_08A5B2BC:
    ctx.set_gpr(31, rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(12)));
    ctx.set_gpr(16, rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(8)));
    ctx.set_gpr(29, ctx.gpr[29] + static_cast<std::uint32_t>(64));
    jump_target = ctx.gpr[31];
    // nop
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_08A5B2D0:
    ctx.set_gpr(29, ctx.gpr[29] + static_cast<std::uint32_t>(-288));
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
    ctx.set_gpr(22, ctx.gpr[4] + 0u);
    ctx.set_gpr(23, ctx.gpr[5] + 0u);
    ctx.set_gpr(30, ctx.gpr[6] + 0u);
    ctx.set_gpr(20, ctx.gpr[7] + 0u);
    ctx.set_gpr(3, 16256u << 16u);
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(276), ctx.gpr[3]);
    ctx.set_gpr(2, 0u + static_cast<std::uint32_t>(8));
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(280), ctx.gpr[2]);
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(284), ctx.gpr[3]);
    ctx.set_gpr(6, 2229u << 16u);
    ctx.set_gpr(6, ctx.gpr[6] + static_cast<std::uint32_t>(22712));
    ctx.set_gpr(5, ctx.gpr[29] + static_cast<std::uint32_t>(180));
    ctx.set_gpr(4, 0u + static_cast<std::uint32_t>(12));
    goto L_08A5B340;
L_08A5B340:
    ctx.set_gpr(3, rt.memory().aot_load32(ctx.gpr[6] + static_cast<std::uint32_t>(0)));
    ctx.set_gpr(2, rt.memory().aot_load32(ctx.gpr[6] + static_cast<std::uint32_t>(4)));
    ctx.set_gpr(6, ctx.gpr[6] + static_cast<std::uint32_t>(8));
    ctx.set_gpr(4, ctx.gpr[4] + static_cast<std::uint32_t>(-1));
    rt.memory().aot_store32(ctx.gpr[5] + static_cast<std::uint32_t>(0), ctx.gpr[3]);
    rt.memory().aot_store32(ctx.gpr[5] + static_cast<std::uint32_t>(4), ctx.gpr[2]);
    ctx.set_gpr(5, ctx.gpr[5] + static_cast<std::uint32_t>(8));
    { const bool branch_taken = static_cast<std::int32_t>(ctx.gpr[4]) > 0;
    // nop
      if (branch_taken) {
          goto L_08A5B340;
      }
      goto L_08A5B364;
    }
L_08A5B364:
    ctx.set_gpr(3, 49024u << 16u);
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(108), ctx.gpr[3]);
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(112), ctx.gpr[3]);
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(116), 0u);
    ctx.set_gpr(2, 16256u << 16u);
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(120), ctx.gpr[2]);
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(124), ctx.gpr[3]);
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(128), 0u);
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(132), ctx.gpr[3]);
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(136), ctx.gpr[2]);
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(140), 0u);
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(144), ctx.gpr[2]);
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(148), ctx.gpr[2]);
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(152), 0u);
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(156), ctx.gpr[3]);
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(160), ctx.gpr[2]);
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(164), 0u);
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(168), ctx.gpr[2]);
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(172), ctx.gpr[3]);
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(176), 0u);
    ctx.set_gpr(16, 0u + 0u);
    ctx.set_gpr(3, 0u + 0u);
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_08A5B3E0;
      }
      goto L_08A5B3C4;
    }
L_08A5B3C4:
    ctx.set_gpr(2, ctx.gpr[3] << 1u);
    ctx.set_gpr(2, ctx.gpr[2] + ctx.gpr[3]);
    ctx.set_gpr(2, ctx.gpr[2] << 2u);
    ctx.set_gpr(2, ctx.gpr[2] + ctx.gpr[29]);
    ctx.set_gpr(2, rt.memory().aot_load32(ctx.gpr[2] + static_cast<std::uint32_t>(280)));
    ctx.set_gpr(16, ctx.gpr[16] + ctx.gpr[2]);
    ctx.set_gpr(3, ctx.gpr[3] + static_cast<std::uint32_t>(1));
    goto L_08A5B3E0;
L_08A5B3E0:
    { const bool branch_taken = ctx.gpr[3] == 0u;
    // nop
      if (branch_taken) {
          goto L_08A5B3C4;
      }
      goto L_08A5B3E8;
    }
L_08A5B3E8:
    ctx.set_gpr(31, 0x08A5B3F0u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0078_entry, 78u, 227u, 0x0893CE8Cu>(ctx, &aot_mem) && ctx.pc == 0x08A5B3F0u) goto L_08A5B3F0;
    return;
L_08A5B3F0:
    ctx.set_gpr(4, rt.memory().aot_load32(ctx.gpr[2] + static_cast<std::uint32_t>(0)));
    ctx.set_gpr(31, 0x08A5B3FCu);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0078_entry, 78u, 199u, 0x0893CC68u>(ctx, &aot_mem) && ctx.pc == 0x08A5B3FCu) goto L_08A5B3FC;
    return;
L_08A5B3FC:
    ctx.set_gpr(4, ctx.gpr[2] + 0u);
    ctx.set_gpr(31, 0x08A5B408u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0046_entry, 46u, 266u, 0x088BD7E4u>(ctx, &aot_mem) && ctx.pc == 0x08A5B408u) goto L_08A5B408;
    return;
L_08A5B408:
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(104), ctx.gpr[2]);
    ctx.set_gpr(3, 0u + 0u);
    ctx.set_gpr(3, ctx.gpr[3] | 1u);
    ctx.set_gpr(4, ctx.gpr[3] | 4u);
    ctx.set_gpr(3, 65520u << 16u);
    ctx.set_gpr(3, ctx.gpr[3] | 65535u);
    ctx.set_gpr(4, ctx.gpr[4] & ctx.gpr[3]);
    ctx.set_gpr(3, 1u << 16u);
    ctx.set_gpr(3, ctx.gpr[4] | ctx.gpr[3]);
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(100), ctx.gpr[3]);
    ctx.set_gpr(4, ctx.gpr[2] + 0u);
    ctx.set_gpr(3, ctx.gpr[16] << 1u);
    ctx.set_gpr(3, ctx.gpr[3] + ctx.gpr[16]);
    ctx.set_gpr(6, ctx.gpr[3] << 1u);
    ctx.set_gpr(5, ctx.gpr[29] + static_cast<std::uint32_t>(100));
    ctx.set_gpr(7, 0u + 0u);
    ctx.set_gpr(8, 0u + 0u);
    ctx.set_gpr(25, rt.memory().aot_load32(ctx.gpr[2] + static_cast<std::uint32_t>(0)));
    ctx.set_gpr(25, rt.memory().aot_load32(ctx.gpr[25] + static_cast<std::uint32_t>(136)));
    jump_target = ctx.gpr[25];
    ctx.set_gpr(31, 0x08A5B45Cu);
    // nop
    ctx.pc = jump_target;
    if (rt.invoke_chained_call(ctx, &aot_mem) && ctx.pc == 0x08A5B45Cu) goto L_08A5B45C;
    return;
L_08A5B45C:
    ctx.set_gpr(4, rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(104)));
    ctx.set_gpr(6, ctx.gpr[16] << 1u);
    ctx.set_gpr(5, 0u + static_cast<std::uint32_t>(3));
    ctx.set_gpr(7, 0u + 0u);
    ctx.set_gpr(25, rt.memory().aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(0)));
    ctx.set_gpr(25, rt.memory().aot_load32(ctx.gpr[25] + static_cast<std::uint32_t>(160)));
    jump_target = ctx.gpr[25];
    ctx.set_gpr(31, 0x08A5B47Cu);
    // nop
    ctx.pc = jump_target;
    if (rt.invoke_chained_call(ctx, &aot_mem) && ctx.pc == 0x08A5B47Cu) goto L_08A5B47C;
    return;
L_08A5B47C:
    ctx.set_gpr(19, 0u + 0u);
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_08A5B6F4;
      }
      goto L_08A5B488;
    }
L_08A5B488:
    ctx.set_gpr(2, ctx.gpr[19] << 1u);
    ctx.set_gpr(2, ctx.gpr[2] + ctx.gpr[19]);
    ctx.set_gpr(2, ctx.gpr[2] << 2u);
    ctx.set_gpr(2, ctx.gpr[2] + ctx.gpr[29]);
    ctx.set_gpr(21, rt.memory().aot_load32(ctx.gpr[2] + static_cast<std::uint32_t>(280)));
    ctx.fpr[0] = std::bit_cast<float>(ctx.gpr[21]);
    ctx.fpr[1] = static_cast<float>(static_cast<std::int32_t>(ctx.fpr_bits(0)));
    ctx.fpr[0] = std::bit_cast<float>(rt.memory().aot_load32(ctx.gpr[28] + static_cast<std::uint32_t>(-32260)));
    ctx.fpr[0] = ctx.fpr[0] / ctx.fpr[1];
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(84), std::bit_cast<std::uint32_t>(ctx.fpr[0]));
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(88), std::bit_cast<std::uint32_t>(ctx.fpr[0]));
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(92), std::bit_cast<std::uint32_t>(ctx.fpr[0]));
    ctx.set_gpr(2, 16256u << 16u);
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(96), ctx.gpr[2]);
    ctx.set_gpr(18, 0u + 0u);
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_08A5B6E4;
      }
      goto L_08A5B4CC;
    }
L_08A5B4CC:
    { const std::int64_t product = static_cast<std::int64_t>(static_cast<std::int32_t>(ctx.gpr[21])) * static_cast<std::int64_t>(static_cast<std::int32_t>(ctx.gpr[19])); ctx.lo = static_cast<std::uint32_t>(product); ctx.hi = static_cast<std::uint32_t>(static_cast<std::uint64_t>(product) >> 32u); }
    ctx.set_gpr(2, ctx.lo);
    ctx.set_gpr(3, ctx.gpr[18] + ctx.gpr[2]);
    ctx.set_gpr(2, ctx.gpr[3] << 1u);
    ctx.set_gpr(2, ctx.gpr[2] + ctx.gpr[3]);
    ctx.set_gpr(2, ctx.gpr[2] << 1u);
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(72), ctx.gpr[2]);
    ctx.set_gpr(2, 16256u << 16u);
    ctx.fpr[1] = std::bit_cast<float>(ctx.gpr[2]);
    ctx.fpr[0] = std::bit_cast<float>(ctx.gpr[23]);
    ctx.fpr[0] = static_cast<float>(static_cast<std::int32_t>(ctx.fpr_bits(0)));
    ctx.fpr[23] = ctx.fpr[1] / ctx.fpr[0];
    ctx.fpr[0] = std::bit_cast<float>(ctx.gpr[30]);
    ctx.fpr[0] = static_cast<float>(static_cast<std::int32_t>(ctx.fpr_bits(0)));
    ctx.fpr[22] = ctx.fpr[1] / ctx.fpr[0];
    ctx.set_gpr(2, ctx.gpr[19] << 1u);
    ctx.set_gpr(2, ctx.gpr[2] + ctx.gpr[19]);
    ctx.set_gpr(2, ctx.gpr[2] << 2u);
    ctx.set_gpr(2, ctx.gpr[2] + ctx.gpr[29]);
    ctx.set_gpr(2, ctx.gpr[2] + static_cast<std::uint32_t>(284));
    ctx.fpr[2] = std::bit_cast<float>(rt.memory().aot_load32(ctx.gpr[2] + static_cast<std::uint32_t>(0)));
    ctx.set_gpr(3, ctx.gpr[18] << 3u);
    ctx.set_gpr(2, 16576u << 16u);
    ctx.fpr[1] = std::bit_cast<float>(ctx.gpr[2]);
    ctx.set_gpr(2, 2226u << 16u);
    ctx.set_gpr(2, ctx.gpr[2] + static_cast<std::uint32_t>(-27244));
    ctx.set_gpr(2, ctx.gpr[2] + ctx.gpr[3]);
    ctx.fpr[0] = std::bit_cast<float>(rt.memory().aot_load32(ctx.gpr[2] + static_cast<std::uint32_t>(0)));
    { const float fs = ctx.fpr[1]; const float ft = ctx.fpr[0]; if ((std::isinf(fs) && ft == 0.0f) || (std::isinf(ft) && fs == 0.0f)) ctx.set_fpr_bits(0, 0x7FC00000u); else ctx.fpr[0] = fs * ft; }
    { const float fs = ctx.fpr[0]; const float ft = ctx.fpr[2]; if ((std::isinf(fs) && ft == 0.0f) || (std::isinf(ft) && fs == 0.0f)) ctx.set_fpr_bits(21, 0x7FC00000u); else ctx.fpr[21] = fs * ft; }
    ctx.set_gpr(2, 2226u << 16u);
    ctx.set_gpr(2, ctx.gpr[2] + static_cast<std::uint32_t>(-27240));
    ctx.set_gpr(2, ctx.gpr[2] + ctx.gpr[3]);
    ctx.fpr[0] = std::bit_cast<float>(rt.memory().aot_load32(ctx.gpr[2] + static_cast<std::uint32_t>(0)));
    { const float fs = ctx.fpr[1]; const float ft = ctx.fpr[0]; if ((std::isinf(fs) && ft == 0.0f) || (std::isinf(ft) && fs == 0.0f)) ctx.set_fpr_bits(0, 0x7FC00000u); else ctx.fpr[0] = fs * ft; }
    { const float fs = ctx.fpr[0]; const float ft = ctx.fpr[2]; if ((std::isinf(fs) && ft == 0.0f) || (std::isinf(ft) && fs == 0.0f)) ctx.set_fpr_bits(20, 0x7FC00000u); else ctx.fpr[20] = fs * ft; }
    ctx.fpr[0] = std::bit_cast<float>(rt.memory().aot_load32(ctx.gpr[20] + static_cast<std::uint32_t>(0)));
    ctx.fpr[0] = static_cast<float>(static_cast<std::int32_t>(ctx.fpr_bits(0)));
    ctx.set_fpu_condition(((std::isnan(ctx.fpr[21]) || std::isnan(ctx.fpr[0])) || ctx.fpr[21] <= ctx.fpr[0]));
    // nop
    { const bool branch_taken = ctx.fpu_condition();
    // nop
      if (branch_taken) {
          goto L_08A5B5A8;
      }
      goto L_08A5B574;
    }
L_08A5B574:
    ctx.set_fpr_bits(12, ctx.fpr_bits(21));
    ctx.set_gpr(31, 0x08A5B580u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0006_entry, 6u, 675u, 0x0881EBD0u>(ctx, &aot_mem) && ctx.pc == 0x08A5B580u) goto L_08A5B580;
    return;
L_08A5B580:
    ctx.set_gpr(4, ctx.gpr[2] + 0u);
    ctx.set_gpr(5, ctx.gpr[3] + 0u);
    ctx.set_gpr(31, 0x08A5B590u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0002_entry, 2u, 166u, 0x0880CE6Cu>(ctx, &aot_mem) && ctx.pc == 0x08A5B590u) goto L_08A5B590;
    return;
L_08A5B590:
    ctx.set_gpr(4, ctx.gpr[2] + 0u);
    ctx.set_gpr(5, ctx.gpr[3] + 0u);
    ctx.set_gpr(31, 0x08A5B5A0u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0007_entry, 7u, 2u, 0x08820004u>(ctx, &aot_mem) && ctx.pc == 0x08A5B5A0u) goto L_08A5B5A0;
    return;
L_08A5B5A0:
    ctx.set_gpr(2, ctx.gpr[2] + static_cast<std::uint32_t>(1));
    rt.memory().aot_store32(ctx.gpr[20] + static_cast<std::uint32_t>(0), ctx.gpr[2]);
    goto L_08A5B5A8;
L_08A5B5A8:
    ctx.fpr[0] = std::bit_cast<float>(rt.memory().aot_load32(ctx.gpr[20] + static_cast<std::uint32_t>(0)));
    ctx.fpr[0] = static_cast<float>(static_cast<std::int32_t>(ctx.fpr_bits(0)));
    ctx.set_fpu_condition(((std::isnan(ctx.fpr[20]) || std::isnan(ctx.fpr[0])) || ctx.fpr[20] <= ctx.fpr[0]));
    // nop
    { const bool branch_taken = ctx.fpu_condition();
    // nop
      if (branch_taken) {
          goto L_08A5B5F4;
      }
      goto L_08A5B5C0;
    }
L_08A5B5C0:
    ctx.set_fpr_bits(12, ctx.fpr_bits(20));
    ctx.set_gpr(31, 0x08A5B5CCu);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0006_entry, 6u, 675u, 0x0881EBD0u>(ctx, &aot_mem) && ctx.pc == 0x08A5B5CCu) goto L_08A5B5CC;
    return;
L_08A5B5CC:
    ctx.set_gpr(4, ctx.gpr[2] + 0u);
    ctx.set_gpr(5, ctx.gpr[3] + 0u);
    ctx.set_gpr(31, 0x08A5B5DCu);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0002_entry, 2u, 166u, 0x0880CE6Cu>(ctx, &aot_mem) && ctx.pc == 0x08A5B5DCu) goto L_08A5B5DC;
    return;
L_08A5B5DC:
    ctx.set_gpr(4, ctx.gpr[2] + 0u);
    ctx.set_gpr(5, ctx.gpr[3] + 0u);
    ctx.set_gpr(31, 0x08A5B5ECu);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0007_entry, 7u, 2u, 0x08820004u>(ctx, &aot_mem) && ctx.pc == 0x08A5B5ECu) goto L_08A5B5EC;
    return;
L_08A5B5EC:
    ctx.set_gpr(2, ctx.gpr[2] + static_cast<std::uint32_t>(1));
    rt.memory().aot_store32(ctx.gpr[20] + static_cast<std::uint32_t>(0), ctx.gpr[2]);
    goto L_08A5B5F4;
L_08A5B5F4:
    ctx.set_gpr(17, 0u + 0u);
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_08A5B6D4;
      }
      goto L_08A5B600;
    }
L_08A5B600:
    ctx.set_gpr(2, rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(104)));
    ctx.set_gpr(4, rt.memory().aot_load32(ctx.gpr[2] + static_cast<std::uint32_t>(12)));
    ctx.set_gpr(2, rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(72)));
    ctx.set_gpr(16, ctx.gpr[2] + ctx.gpr[17]);
    ctx.set_gpr(2, ctx.gpr[17] << 1u);
    ctx.set_gpr(2, ctx.gpr[2] + ctx.gpr[17]);
    ctx.set_gpr(2, ctx.gpr[2] << 2u);
    ctx.set_gpr(2, ctx.gpr[2] + ctx.gpr[29]);
    ctx.set_gpr(5, ctx.gpr[16] + 0u);
    ctx.set_gpr(6, ctx.gpr[2] + static_cast<std::uint32_t>(108));
    ctx.set_gpr(25, rt.memory().aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(0)));
    ctx.set_gpr(25, rt.memory().aot_load32(ctx.gpr[25] + static_cast<std::uint32_t>(112)));
    jump_target = ctx.gpr[25];
    ctx.set_gpr(31, 0x08A5B638u);
    // nop
    ctx.pc = jump_target;
    if (rt.invoke_chained_call(ctx, &aot_mem) && ctx.pc == 0x08A5B638u) goto L_08A5B638;
    return;
L_08A5B638:
    ctx.set_gpr(2, rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(104)));
    ctx.set_gpr(4, rt.memory().aot_load32(ctx.gpr[2] + static_cast<std::uint32_t>(12)));
    ctx.set_gpr(5, ctx.gpr[16] + 0u);
    ctx.set_gpr(6, ctx.gpr[29] + static_cast<std::uint32_t>(84));
    ctx.set_gpr(25, rt.memory().aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(0)));
    ctx.set_gpr(25, rt.memory().aot_load32(ctx.gpr[25] + static_cast<std::uint32_t>(164)));
    jump_target = ctx.gpr[25];
    ctx.set_gpr(31, 0x08A5B658u);
    // nop
    ctx.pc = jump_target;
    if (rt.invoke_chained_call(ctx, &aot_mem) && ctx.pc == 0x08A5B658u) goto L_08A5B658;
    return;
L_08A5B658:
    ctx.set_gpr(2, ctx.gpr[17] << 4u);
    { const float fs = ctx.fpr[21]; const float ft = ctx.fpr[23]; if ((std::isinf(fs) && ft == 0.0f) || (std::isinf(ft) && fs == 0.0f)) ctx.set_fpr_bits(1, 0x7FC00000u); else ctx.fpr[1] = fs * ft; }
    ctx.set_gpr(2, ctx.gpr[2] + ctx.gpr[29]);
    ctx.fpr[0] = std::bit_cast<float>(rt.memory().aot_load32(ctx.gpr[2] + static_cast<std::uint32_t>(188)));
    ctx.fpr[0] = static_cast<float>(static_cast<std::int32_t>(ctx.fpr_bits(0)));
    { const float fs = ctx.fpr[1]; const float ft = ctx.fpr[0]; if ((std::isinf(fs) && ft == 0.0f) || (std::isinf(ft) && fs == 0.0f)) ctx.set_fpr_bits(1, 0x7FC00000u); else ctx.fpr[1] = fs * ft; }
    ctx.fpr[0] = std::bit_cast<float>(rt.memory().aot_load32(ctx.gpr[2] + static_cast<std::uint32_t>(180)));
    ctx.fpr[0] = static_cast<float>(static_cast<std::int32_t>(ctx.fpr_bits(0)));
    ctx.fpr[0] = ctx.fpr[0] + ctx.fpr[1];
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(76), std::bit_cast<std::uint32_t>(ctx.fpr[0]));
    { const float fs = ctx.fpr[20]; const float ft = ctx.fpr[22]; if ((std::isinf(fs) && ft == 0.0f) || (std::isinf(ft) && fs == 0.0f)) ctx.set_fpr_bits(1, 0x7FC00000u); else ctx.fpr[1] = fs * ft; }
    ctx.fpr[0] = std::bit_cast<float>(rt.memory().aot_load32(ctx.gpr[2] + static_cast<std::uint32_t>(192)));
    ctx.fpr[0] = static_cast<float>(static_cast<std::int32_t>(ctx.fpr_bits(0)));
    { const float fs = ctx.fpr[1]; const float ft = ctx.fpr[0]; if ((std::isinf(fs) && ft == 0.0f) || (std::isinf(ft) && fs == 0.0f)) ctx.set_fpr_bits(1, 0x7FC00000u); else ctx.fpr[1] = fs * ft; }
    ctx.fpr[0] = std::bit_cast<float>(rt.memory().aot_load32(ctx.gpr[2] + static_cast<std::uint32_t>(184)));
    ctx.fpr[0] = static_cast<float>(static_cast<std::int32_t>(ctx.fpr_bits(0)));
    ctx.fpr[1] = ctx.fpr[0] + ctx.fpr[1];
    ctx.set_gpr(2, 16256u << 16u);
    ctx.fpr[0] = std::bit_cast<float>(ctx.gpr[2]);
    ctx.fpr[0] = ctx.fpr[0] - ctx.fpr[1];
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(80), std::bit_cast<std::uint32_t>(ctx.fpr[0]));
    ctx.set_gpr(2, rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(104)));
    ctx.set_gpr(4, rt.memory().aot_load32(ctx.gpr[2] + static_cast<std::uint32_t>(12)));
    ctx.set_gpr(5, 0u + 0u);
    ctx.set_gpr(6, ctx.gpr[16] + 0u);
    ctx.set_gpr(7, ctx.gpr[29] + static_cast<std::uint32_t>(76));
    ctx.set_gpr(25, rt.memory().aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(0)));
    ctx.set_gpr(25, rt.memory().aot_load32(ctx.gpr[25] + static_cast<std::uint32_t>(196)));
    jump_target = ctx.gpr[25];
    ctx.set_gpr(31, 0x08A5B6D0u);
    // nop
    ctx.pc = jump_target;
    if (rt.invoke_chained_call(ctx, &aot_mem) && ctx.pc == 0x08A5B6D0u) goto L_08A5B6D0;
    return;
L_08A5B6D0:
    ctx.set_gpr(17, ctx.gpr[17] + static_cast<std::uint32_t>(1));
    goto L_08A5B6D4;
L_08A5B6D4:
    ctx.set_gpr(2, static_cast<std::int32_t>(ctx.gpr[17]) < 6 ? 1u : 0u);
    { const bool branch_taken = ctx.gpr[2] != 0u;
    // nop
      if (branch_taken) {
          goto L_08A5B600;
      }
      goto L_08A5B6E0;
    }
L_08A5B6E0:
    ctx.set_gpr(18, ctx.gpr[18] + static_cast<std::uint32_t>(1));
    goto L_08A5B6E4;
L_08A5B6E4:
    ctx.set_gpr(2, static_cast<std::int32_t>(ctx.gpr[18]) < static_cast<std::int32_t>(ctx.gpr[21]) ? 1u : 0u);
    { const bool branch_taken = ctx.gpr[2] != 0u;
    // nop
      if (branch_taken) {
          goto L_08A5B4CC;
      }
      goto L_08A5B6F0;
    }
L_08A5B6F0:
    ctx.set_gpr(19, ctx.gpr[19] + static_cast<std::uint32_t>(1));
    goto L_08A5B6F4;
L_08A5B6F4:
    { const bool branch_taken = ctx.gpr[19] == 0u;
    // nop
      if (branch_taken) {
          goto L_08A5B488;
      }
      goto L_08A5B6FC;
    }
L_08A5B6FC:
    ctx.set_gpr(3, rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(104)));
    rt.memory().aot_store32(ctx.gpr[22] + static_cast<std::uint32_t>(0), ctx.gpr[3]);
    { const bool branch_taken = ctx.gpr[3] == 0u;
    // nop
      if (branch_taken) {
          goto L_08A5B718;
      }
      goto L_08A5B70C;
    }
L_08A5B70C:
    ctx.set_gpr(2, rt.memory().aot_load32(ctx.gpr[3] + static_cast<std::uint32_t>(4)));
    ctx.set_gpr(2, ctx.gpr[2] + static_cast<std::uint32_t>(1));
    rt.memory().aot_store32(ctx.gpr[3] + static_cast<std::uint32_t>(4), ctx.gpr[2]);
    goto L_08A5B718;
L_08A5B718:
    ctx.set_gpr(4, rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(104)));
    { const bool branch_taken = ctx.gpr[4] == 0u;
    // nop
      if (branch_taken) {
          goto L_08A5B72C;
      }
      goto L_08A5B724;
    }
L_08A5B724:
    ctx.set_gpr(31, 0x08A5B72Cu);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0014_entry, 14u, 257u, 0x0883D454u>(ctx, &aot_mem) && ctx.pc == 0x08A5B72Cu) goto L_08A5B72C;
    return;
L_08A5B72C:
    ctx.set_gpr(2, 0u + 0u);
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
    ctx.set_gpr(29, ctx.gpr[29] + static_cast<std::uint32_t>(288));
    jump_target = ctx.gpr[31];
    // nop
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_08A5B774:
    ctx.set_gpr(29, ctx.gpr[29] + static_cast<std::uint32_t>(-64));
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(12), ctx.gpr[31]);
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(8), ctx.gpr[16]);
    ctx.set_gpr(16, ctx.gpr[4] + 0u);
    ctx.set_gpr(2, 0u + static_cast<std::uint32_t>(1));
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(60), ctx.gpr[2]);
    ctx.set_gpr(4, ctx.gpr[29] + static_cast<std::uint32_t>(56));
    ctx.set_gpr(5, rt.memory().aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(72)));
    ctx.set_gpr(6, rt.memory().aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(76)));
    ctx.set_gpr(7, ctx.gpr[29] + static_cast<std::uint32_t>(60));
    ctx.set_gpr(31, 0x08A5B7A4u);
    // nop
    goto L_08A5B2D0;
L_08A5B7A4:
    ctx.set_gpr(4, rt.memory().aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(108)));
    ctx.set_gpr(5, rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(56)));
    ctx.set_gpr(25, rt.memory().aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(0)));
    ctx.set_gpr(25, rt.memory().aot_load32(ctx.gpr[25] + static_cast<std::uint32_t>(156)));
    jump_target = ctx.gpr[25];
    ctx.set_gpr(31, 0x08A5B7BCu);
    // nop
    ctx.pc = jump_target;
    if (rt.invoke_chained_call(ctx, &aot_mem) && ctx.pc == 0x08A5B7BCu) goto L_08A5B7BC;
    return;
L_08A5B7BC:
    ctx.set_gpr(4, rt.memory().aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(108)));
    ctx.set_gpr(5, 0u + static_cast<std::uint32_t>(4));
    ctx.set_gpr(6, 0u + static_cast<std::uint32_t>(1));
    ctx.set_gpr(25, rt.memory().aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(0)));
    ctx.set_gpr(25, rt.memory().aot_load32(ctx.gpr[25] + static_cast<std::uint32_t>(112)));
    jump_target = ctx.gpr[25];
    ctx.set_gpr(31, 0x08A5B7D8u);
    // nop
    ctx.pc = jump_target;
    if (rt.invoke_chained_call(ctx, &aot_mem) && ctx.pc == 0x08A5B7D8u) goto L_08A5B7D8;
    return;
L_08A5B7D8:
    ctx.set_gpr(4, rt.memory().aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(76)));
    ctx.set_gpr(3, rt.memory().aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(152)));
    ctx.set_gpr(2, rt.memory().aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(72)));
    rt.memory().aot_store32(ctx.gpr[3] + static_cast<std::uint32_t>(40), ctx.gpr[2]);
    rt.memory().aot_store32(ctx.gpr[3] + static_cast<std::uint32_t>(44), ctx.gpr[4]);
    ctx.set_gpr(4, rt.memory().aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(76)));
    ctx.set_gpr(3, rt.memory().aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(168)));
    ctx.set_gpr(2, rt.memory().aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(72)));
    rt.memory().aot_store32(ctx.gpr[3] + static_cast<std::uint32_t>(40), ctx.gpr[2]);
    rt.memory().aot_store32(ctx.gpr[3] + static_cast<std::uint32_t>(44), ctx.gpr[4]);
    ctx.set_gpr(4, rt.memory().aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(192)));
    ctx.fpr[12] = std::bit_cast<float>(0u);
    ctx.set_gpr(2, 16256u << 16u);
    ctx.fpr[13] = std::bit_cast<float>(ctx.gpr[2]);
    ctx.set_gpr(5, 0u + 0u);
    ctx.set_gpr(6, 0u + 0u);
    ctx.set_gpr(7, rt.memory().aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(72)));
    ctx.set_gpr(8, rt.memory().aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(76)));
    ctx.set_gpr(25, rt.memory().aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(0)));
    ctx.set_gpr(25, rt.memory().aot_load32(ctx.gpr[25] + static_cast<std::uint32_t>(136)));
    jump_target = ctx.gpr[25];
    ctx.set_gpr(31, 0x08A5B830u);
    // nop
    ctx.pc = jump_target;
    if (rt.invoke_chained_call(ctx, &aot_mem) && ctx.pc == 0x08A5B830u) goto L_08A5B830;
    return;
L_08A5B830:
    ctx.set_gpr(4, rt.memory().aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(196)));
    ctx.set_gpr(5, rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(60)));
    ctx.set_gpr(3, ctx.gpr[5] << 1u);
    ctx.set_gpr(2, rt.memory().aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(72)));
    ctx.set_gpr(7, ctx.gpr[2] - ctx.gpr[3]);
    ctx.set_gpr(2, rt.memory().aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(76)));
    ctx.set_gpr(8, ctx.gpr[2] - ctx.gpr[3]);
    ctx.fpr[12] = std::bit_cast<float>(0u);
    ctx.set_gpr(2, 16256u << 16u);
    ctx.fpr[13] = std::bit_cast<float>(ctx.gpr[2]);
    ctx.set_gpr(6, ctx.gpr[5] + 0u);
    ctx.set_gpr(25, rt.memory().aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(0)));
    ctx.set_gpr(25, rt.memory().aot_load32(ctx.gpr[25] + static_cast<std::uint32_t>(136)));
    jump_target = ctx.gpr[25];
    ctx.set_gpr(31, 0x08A5B86Cu);
    // nop
    ctx.pc = jump_target;
    if (rt.invoke_chained_call(ctx, &aot_mem) && ctx.pc == 0x08A5B86Cu) goto L_08A5B86C;
    return;
L_08A5B86C:
    ctx.set_gpr(5, rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(60)));
    ctx.set_gpr(4, ctx.gpr[5] << 1u);
    ctx.set_gpr(3, rt.memory().aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(72)));
    ctx.set_gpr(2, ctx.gpr[3] - ctx.gpr[4]);
    ctx.fpr[0] = std::bit_cast<float>(ctx.gpr[2]);
    ctx.fpr[1] = static_cast<float>(static_cast<std::int32_t>(ctx.fpr_bits(0)));
    ctx.fpr[0] = std::bit_cast<float>(ctx.gpr[3]);
    ctx.fpr[5] = static_cast<float>(static_cast<std::int32_t>(ctx.fpr_bits(0)));
    ctx.fpr[4] = ctx.fpr[1] / ctx.fpr[5];
    ctx.set_gpr(3, rt.memory().aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(76)));
    ctx.set_gpr(2, ctx.gpr[3] - ctx.gpr[4]);
    ctx.fpr[0] = std::bit_cast<float>(ctx.gpr[2]);
    ctx.fpr[1] = static_cast<float>(static_cast<std::int32_t>(ctx.fpr_bits(0)));
    ctx.fpr[0] = std::bit_cast<float>(ctx.gpr[3]);
    ctx.fpr[3] = static_cast<float>(static_cast<std::int32_t>(ctx.fpr_bits(0)));
    ctx.fpr[2] = ctx.fpr[1] / ctx.fpr[3];
    ctx.fpr[0] = std::bit_cast<float>(ctx.gpr[5]);
    ctx.fpr[0] = static_cast<float>(static_cast<std::int32_t>(ctx.fpr_bits(0)));
    ctx.fpr[1] = ctx.fpr[0] / ctx.fpr[5];
    ctx.fpr[0] = ctx.fpr[0] / ctx.fpr[3];
    ctx.set_gpr(2, 2246u << 16u);
    rt.memory().aot_store32(ctx.gpr[2] + static_cast<std::uint32_t>(-21360), std::bit_cast<std::uint32_t>(ctx.fpr[4]));
    ctx.set_gpr(2, 2246u << 16u);
    rt.memory().aot_store32(ctx.gpr[2] + static_cast<std::uint32_t>(-21356), 0u);
    ctx.set_gpr(2, 2246u << 16u);
    rt.memory().aot_store32(ctx.gpr[2] + static_cast<std::uint32_t>(-21352), 0u);
    ctx.set_gpr(2, 2246u << 16u);
    rt.memory().aot_store32(ctx.gpr[2] + static_cast<std::uint32_t>(-21348), 0u);
    ctx.set_gpr(2, 2246u << 16u);
    rt.memory().aot_store32(ctx.gpr[2] + static_cast<std::uint32_t>(-21344), 0u);
    ctx.set_gpr(2, 2246u << 16u);
    rt.memory().aot_store32(ctx.gpr[2] + static_cast<std::uint32_t>(-21340), std::bit_cast<std::uint32_t>(ctx.fpr[2]));
    ctx.set_gpr(2, 2246u << 16u);
    rt.memory().aot_store32(ctx.gpr[2] + static_cast<std::uint32_t>(-21336), 0u);
    ctx.set_gpr(2, 2246u << 16u);
    rt.memory().aot_store32(ctx.gpr[2] + static_cast<std::uint32_t>(-21332), 0u);
    ctx.set_gpr(2, 2246u << 16u);
    rt.memory().aot_store32(ctx.gpr[2] + static_cast<std::uint32_t>(-21328), 0u);
    ctx.set_gpr(2, 2246u << 16u);
    rt.memory().aot_store32(ctx.gpr[2] + static_cast<std::uint32_t>(-21324), 0u);
    ctx.set_gpr(3, 16256u << 16u);
    ctx.fpr[13] = std::bit_cast<float>(ctx.gpr[3]);
    ctx.set_gpr(2, 2246u << 16u);
    rt.memory().aot_store32(ctx.gpr[2] + static_cast<std::uint32_t>(-21320), ctx.gpr[3]);
    ctx.set_gpr(2, 2246u << 16u);
    rt.memory().aot_store32(ctx.gpr[2] + static_cast<std::uint32_t>(-21316), 0u);
    ctx.set_gpr(2, 2246u << 16u);
    rt.memory().aot_store32(ctx.gpr[2] + static_cast<std::uint32_t>(-21312), std::bit_cast<std::uint32_t>(ctx.fpr[1]));
    ctx.set_gpr(2, 2246u << 16u);
    rt.memory().aot_store32(ctx.gpr[2] + static_cast<std::uint32_t>(-21308), std::bit_cast<std::uint32_t>(ctx.fpr[0]));
    ctx.set_gpr(2, 2246u << 16u);
    rt.memory().aot_store32(ctx.gpr[2] + static_cast<std::uint32_t>(-21304), 0u);
    ctx.set_gpr(2, 2246u << 16u);
    rt.memory().aot_store32(ctx.gpr[2] + static_cast<std::uint32_t>(-21300), ctx.gpr[3]);
    ctx.set_gpr(2, rt.memory().aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(100)));
    ctx.set_gpr(4, ctx.gpr[2] + static_cast<std::uint32_t>(12));
    ctx.set_gpr(2, 49024u << 16u);
    ctx.fpr[12] = std::bit_cast<float>(ctx.gpr[2]);
    ctx.set_gpr(2, 49408u << 16u);
    ctx.fpr[16] = std::bit_cast<float>(ctx.gpr[2]);
    ctx.set_gpr(2, 16640u << 16u);
    ctx.fpr[17] = std::bit_cast<float>(ctx.gpr[2]);
    ctx.set_fpr_bits(14, ctx.fpr_bits(12));
    ctx.set_fpr_bits(15, ctx.fpr_bits(13));
    ctx.set_gpr(31, 0x08A5B974u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0127_entry, 127u, 69u, 0x08A00CCCu>(ctx, &aot_mem) && ctx.pc == 0x08A5B974u) goto L_08A5B974;
    return;
L_08A5B974:
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(20), 0u);
    ctx.set_gpr(2, 16256u << 16u);
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(24), ctx.gpr[2]);
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(28), 0u);
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(32), 0u);
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(36), 0u);
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(40), 0u);
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(44), 0u);
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(48), 0u);
    ctx.set_gpr(2, 16544u << 16u);
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(52), ctx.gpr[2]);
    ctx.set_gpr(2, rt.memory().aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(96)));
    ctx.set_gpr(4, ctx.gpr[2] + static_cast<std::uint32_t>(12));
    ctx.set_gpr(5, ctx.gpr[29] + static_cast<std::uint32_t>(44));
    ctx.set_gpr(6, ctx.gpr[29] + static_cast<std::uint32_t>(32));
    ctx.set_gpr(7, ctx.gpr[29] + static_cast<std::uint32_t>(20));
    ctx.set_gpr(31, 0x08A5B9BCu);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0127_entry, 127u, 82u, 0x08A00F60u>(ctx, &aot_mem) && ctx.pc == 0x08A5B9BCu) goto L_08A5B9BC;
    return;
L_08A5B9BC:
    ctx.set_gpr(2, rt.memory().aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(144)));
    ctx.set_gpr(5, 0u + static_cast<std::uint32_t>(1));
    rt.memory().aot_store8(ctx.gpr[2] + static_cast<std::uint32_t>(82), static_cast<std::uint8_t>(ctx.gpr[5]));
    ctx.set_gpr(4, rt.memory().aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(160)));
    ctx.set_gpr(25, rt.memory().aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(0)));
    ctx.set_gpr(25, rt.memory().aot_load32(ctx.gpr[25] + static_cast<std::uint32_t>(136)));
    jump_target = ctx.gpr[25];
    ctx.set_gpr(31, 0x08A5B9DCu);
    // nop
    ctx.pc = jump_target;
    if (rt.invoke_chained_call(ctx, &aot_mem) && ctx.pc == 0x08A5B9DCu) goto L_08A5B9DC;
    return;
L_08A5B9DC:
    ctx.set_gpr(4, rt.memory().aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(160)));
    ctx.set_gpr(5, 0u + static_cast<std::uint32_t>(1));
    ctx.set_gpr(25, rt.memory().aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(0)));
    ctx.set_gpr(25, rt.memory().aot_load32(ctx.gpr[25] + static_cast<std::uint32_t>(140)));
    jump_target = ctx.gpr[25];
    ctx.set_gpr(31, 0x08A5B9F4u);
    // nop
    ctx.pc = jump_target;
    if (rt.invoke_chained_call(ctx, &aot_mem) && ctx.pc == 0x08A5B9F4u) goto L_08A5B9F4;
    return;
L_08A5B9F4:
    ctx.set_gpr(4, rt.memory().aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(160)));
    ctx.set_gpr(5, 0u + 0u);
    ctx.set_gpr(25, rt.memory().aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(0)));
    ctx.set_gpr(25, rt.memory().aot_load32(ctx.gpr[25] + static_cast<std::uint32_t>(144)));
    jump_target = ctx.gpr[25];
    ctx.set_gpr(31, 0x08A5BA0Cu);
    // nop
    ctx.pc = jump_target;
    if (rt.invoke_chained_call(ctx, &aot_mem) && ctx.pc == 0x08A5BA0Cu) goto L_08A5BA0C;
    return;
L_08A5BA0C:
    ctx.set_gpr(4, rt.memory().aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(160)));
    ctx.set_gpr(5, 0u + 0u);
    ctx.set_gpr(25, rt.memory().aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(0)));
    ctx.set_gpr(25, rt.memory().aot_load32(ctx.gpr[25] + static_cast<std::uint32_t>(148)));
    jump_target = ctx.gpr[25];
    ctx.set_gpr(31, 0x08A5BA24u);
    // nop
    ctx.pc = jump_target;
    if (rt.invoke_chained_call(ctx, &aot_mem) && ctx.pc == 0x08A5BA24u) goto L_08A5BA24;
    return;
L_08A5BA24:
    ctx.set_gpr(4, rt.memory().aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(164)));
    ctx.set_gpr(5, 0u + 0u);
    ctx.set_gpr(25, rt.memory().aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(0)));
    ctx.set_gpr(25, rt.memory().aot_load32(ctx.gpr[25] + static_cast<std::uint32_t>(100)));
    jump_target = ctx.gpr[25];
    ctx.set_gpr(31, 0x08A5BA3Cu);
    // nop
    ctx.pc = jump_target;
    if (rt.invoke_chained_call(ctx, &aot_mem) && ctx.pc == 0x08A5BA3Cu) goto L_08A5BA3C;
    return;
L_08A5BA3C:
    ctx.set_gpr(4, rt.memory().aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(164)));
    ctx.set_gpr(5, rt.memory().aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(160)));
    ctx.set_gpr(25, rt.memory().aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(0)));
    ctx.set_gpr(25, rt.memory().aot_load32(ctx.gpr[25] + static_cast<std::uint32_t>(140)));
    jump_target = ctx.gpr[25];
    ctx.set_gpr(31, 0x08A5BA54u);
    // nop
    ctx.pc = jump_target;
    if (rt.invoke_chained_call(ctx, &aot_mem) && ctx.pc == 0x08A5BA54u) goto L_08A5BA54;
    return;
L_08A5BA54:
    ctx.set_gpr(2, rt.memory().aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(160)));
    ctx.set_gpr(3, 0u + static_cast<std::uint32_t>(3));
    rt.memory().aot_store32(ctx.gpr[2] + static_cast<std::uint32_t>(44), ctx.gpr[3]);
    ctx.set_gpr(2, rt.memory().aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(176)));
    rt.memory().aot_store32(ctx.gpr[2] + static_cast<std::uint32_t>(44), ctx.gpr[3]);
    ctx.set_gpr(4, rt.memory().aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(176)));
    ctx.set_gpr(5, 0u + static_cast<std::uint32_t>(1));
    ctx.set_gpr(25, rt.memory().aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(0)));
    ctx.set_gpr(25, rt.memory().aot_load32(ctx.gpr[25] + static_cast<std::uint32_t>(136)));
    jump_target = ctx.gpr[25];
    ctx.set_gpr(31, 0x08A5BA80u);
    // nop
    ctx.pc = jump_target;
    if (rt.invoke_chained_call(ctx, &aot_mem) && ctx.pc == 0x08A5BA80u) goto L_08A5BA80;
    return;
L_08A5BA80:
    ctx.set_gpr(4, rt.memory().aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(176)));
    ctx.set_gpr(5, 0u + static_cast<std::uint32_t>(1));
    ctx.set_gpr(25, rt.memory().aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(0)));
    ctx.set_gpr(25, rt.memory().aot_load32(ctx.gpr[25] + static_cast<std::uint32_t>(140)));
    jump_target = ctx.gpr[25];
    ctx.set_gpr(31, 0x08A5BA98u);
    // nop
    ctx.pc = jump_target;
    if (rt.invoke_chained_call(ctx, &aot_mem) && ctx.pc == 0x08A5BA98u) goto L_08A5BA98;
    return;
L_08A5BA98:
    ctx.set_gpr(4, rt.memory().aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(176)));
    ctx.set_gpr(5, 0u + 0u);
    ctx.set_gpr(25, rt.memory().aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(0)));
    ctx.set_gpr(25, rt.memory().aot_load32(ctx.gpr[25] + static_cast<std::uint32_t>(144)));
    jump_target = ctx.gpr[25];
    ctx.set_gpr(31, 0x08A5BAB0u);
    // nop
    ctx.pc = jump_target;
    if (rt.invoke_chained_call(ctx, &aot_mem) && ctx.pc == 0x08A5BAB0u) goto L_08A5BAB0;
    return;
L_08A5BAB0:
    ctx.set_gpr(4, rt.memory().aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(176)));
    ctx.set_gpr(5, 0u + 0u);
    ctx.set_gpr(25, rt.memory().aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(0)));
    ctx.set_gpr(25, rt.memory().aot_load32(ctx.gpr[25] + static_cast<std::uint32_t>(148)));
    jump_target = ctx.gpr[25];
    ctx.set_gpr(31, 0x08A5BAC8u);
    // nop
    ctx.pc = jump_target;
    if (rt.invoke_chained_call(ctx, &aot_mem) && ctx.pc == 0x08A5BAC8u) goto L_08A5BAC8;
    return;
L_08A5BAC8:
    ctx.set_gpr(4, rt.memory().aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(180)));
    ctx.set_gpr(5, 0u + 0u);
    ctx.set_gpr(25, rt.memory().aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(0)));
    ctx.set_gpr(25, rt.memory().aot_load32(ctx.gpr[25] + static_cast<std::uint32_t>(100)));
    jump_target = ctx.gpr[25];
    ctx.set_gpr(31, 0x08A5BAE0u);
    // nop
    ctx.pc = jump_target;
    if (rt.invoke_chained_call(ctx, &aot_mem) && ctx.pc == 0x08A5BAE0u) goto L_08A5BAE0;
    return;
L_08A5BAE0:
    ctx.set_gpr(4, rt.memory().aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(180)));
    ctx.set_gpr(5, rt.memory().aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(176)));
    ctx.set_gpr(25, rt.memory().aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(0)));
    ctx.set_gpr(25, rt.memory().aot_load32(ctx.gpr[25] + static_cast<std::uint32_t>(140)));
    jump_target = ctx.gpr[25];
    ctx.set_gpr(31, 0x08A5BAF8u);
    // nop
    ctx.pc = jump_target;
    if (rt.invoke_chained_call(ctx, &aot_mem) && ctx.pc == 0x08A5BAF8u) goto L_08A5BAF8;
    return;
L_08A5BAF8:
    ctx.set_gpr(2, rt.memory().aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(152)));
    ctx.set_gpr(4, 0u + static_cast<std::uint32_t>(1));
    rt.memory().aot_store8(ctx.gpr[2] + static_cast<std::uint32_t>(24), static_cast<std::uint8_t>(ctx.gpr[4]));
    ctx.set_gpr(3, rt.memory().aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(152)));
    ctx.set_gpr(2, 0u + static_cast<std::uint32_t>(-1));
    rt.memory().aot_store32(ctx.gpr[3] + static_cast<std::uint32_t>(20), ctx.gpr[2]);
    ctx.set_gpr(3, rt.memory().aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(152)));
    ctx.set_gpr(2, 0u + static_cast<std::uint32_t>(2));
    rt.memory().aot_store32(ctx.gpr[3] + static_cast<std::uint32_t>(36), ctx.gpr[2]);
    ctx.set_gpr(2, rt.memory().aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(152)));
    rt.memory().aot_store32(ctx.gpr[2] + static_cast<std::uint32_t>(12), ctx.gpr[4]);
    ctx.set_gpr(2, rt.memory().aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(152)));
    rt.memory().aot_store32(ctx.gpr[2] + static_cast<std::uint32_t>(16), 0u);
    ctx.set_gpr(5, rt.memory().aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(160)));
    ctx.set_gpr(2, rt.memory().aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(152)));
    ctx.set_gpr(4, ctx.gpr[2] + static_cast<std::uint32_t>(32));
    ctx.set_gpr(31, 0x08A5BB40u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0085_entry, 85u, 61u, 0x089584C4u>(ctx, &aot_mem) && ctx.pc == 0x08A5BB40u) goto L_08A5BB40;
    return;
L_08A5BB40:
    ctx.set_gpr(4, rt.memory().aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(228)));
    ctx.set_gpr(5, rt.memory().aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(160)));
    ctx.set_gpr(25, rt.memory().aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(0)));
    ctx.set_gpr(25, rt.memory().aot_load32(ctx.gpr[25] + static_cast<std::uint32_t>(136)));
    jump_target = ctx.gpr[25];
    ctx.set_gpr(31, 0x08A5BB58u);
    // nop
    ctx.pc = jump_target;
    if (rt.invoke_chained_call(ctx, &aot_mem) && ctx.pc == 0x08A5BB58u) goto L_08A5BB58;
    return;
L_08A5BB58:
    ctx.set_gpr(5, rt.memory().aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(152)));
    ctx.set_gpr(2, rt.memory().aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(156)));
    ctx.set_gpr(4, ctx.gpr[2] + static_cast<std::uint32_t>(12));
    ctx.set_gpr(31, 0x08A5BB6Cu);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0085_entry, 85u, 61u, 0x089584C4u>(ctx, &aot_mem) && ctx.pc == 0x08A5BB6Cu) goto L_08A5BB6C;
    return;
L_08A5BB6C:
    ctx.set_gpr(2, rt.memory().aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(152)));
    rt.memory().aot_store32(ctx.gpr[2] + static_cast<std::uint32_t>(56), 0u);
    ctx.set_gpr(2, rt.memory().aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(152)));
    rt.memory().aot_store32(ctx.gpr[2] + static_cast<std::uint32_t>(60), 0u);
    ctx.set_gpr(2, rt.memory().aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(168)));
    ctx.set_gpr(4, 0u + static_cast<std::uint32_t>(1));
    rt.memory().aot_store8(ctx.gpr[2] + static_cast<std::uint32_t>(24), static_cast<std::uint8_t>(ctx.gpr[4]));
    ctx.set_gpr(3, rt.memory().aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(168)));
    ctx.set_gpr(2, 0u + static_cast<std::uint32_t>(-1));
    rt.memory().aot_store32(ctx.gpr[3] + static_cast<std::uint32_t>(20), ctx.gpr[2]);
    ctx.set_gpr(3, rt.memory().aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(168)));
    ctx.set_gpr(2, 0u + static_cast<std::uint32_t>(2));
    rt.memory().aot_store32(ctx.gpr[3] + static_cast<std::uint32_t>(36), ctx.gpr[2]);
    ctx.set_gpr(2, rt.memory().aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(168)));
    rt.memory().aot_store32(ctx.gpr[2] + static_cast<std::uint32_t>(12), ctx.gpr[4]);
    ctx.set_gpr(2, rt.memory().aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(168)));
    rt.memory().aot_store32(ctx.gpr[2] + static_cast<std::uint32_t>(16), 0u);
    ctx.set_gpr(5, rt.memory().aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(176)));
    ctx.set_gpr(2, rt.memory().aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(168)));
    ctx.set_gpr(4, ctx.gpr[2] + static_cast<std::uint32_t>(32));
    ctx.set_gpr(31, 0x08A5BBC4u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0085_entry, 85u, 61u, 0x089584C4u>(ctx, &aot_mem) && ctx.pc == 0x08A5BBC4u) goto L_08A5BBC4;
    return;
L_08A5BBC4:
    ctx.set_gpr(4, rt.memory().aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(232)));
    ctx.set_gpr(5, rt.memory().aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(176)));
    ctx.set_gpr(25, rt.memory().aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(0)));
    ctx.set_gpr(25, rt.memory().aot_load32(ctx.gpr[25] + static_cast<std::uint32_t>(136)));
    jump_target = ctx.gpr[25];
    ctx.set_gpr(31, 0x08A5BBDCu);
    // nop
    ctx.pc = jump_target;
    if (rt.invoke_chained_call(ctx, &aot_mem) && ctx.pc == 0x08A5BBDCu) goto L_08A5BBDC;
    return;
L_08A5BBDC:
    ctx.set_gpr(5, rt.memory().aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(168)));
    ctx.set_gpr(2, rt.memory().aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(172)));
    ctx.set_gpr(4, ctx.gpr[2] + static_cast<std::uint32_t>(12));
    ctx.set_gpr(31, 0x08A5BBF0u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0085_entry, 85u, 61u, 0x089584C4u>(ctx, &aot_mem) && ctx.pc == 0x08A5BBF0u) goto L_08A5BBF0;
    return;
L_08A5BBF0:
    ctx.set_gpr(2, rt.memory().aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(168)));
    rt.memory().aot_store32(ctx.gpr[2] + static_cast<std::uint32_t>(56), 0u);
    ctx.set_gpr(2, rt.memory().aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(168)));
    rt.memory().aot_store32(ctx.gpr[2] + static_cast<std::uint32_t>(60), 0u);
    ctx.set_gpr(4, rt.memory().aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(204)));
    ctx.set_gpr(5, 0u + static_cast<std::uint32_t>(1));
    ctx.set_gpr(25, rt.memory().aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(0)));
    ctx.set_gpr(25, rt.memory().aot_load32(ctx.gpr[25] + static_cast<std::uint32_t>(100)));
    jump_target = ctx.gpr[25];
    ctx.set_gpr(31, 0x08A5BC18u);
    // nop
    ctx.pc = jump_target;
    if (rt.invoke_chained_call(ctx, &aot_mem) && ctx.pc == 0x08A5BC18u) goto L_08A5BC18;
    return;
L_08A5BC18:
    ctx.set_gpr(4, rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(56)));
    { const bool branch_taken = ctx.gpr[4] == 0u;
    // nop
      if (branch_taken) {
          goto L_08A5BC2C;
      }
      goto L_08A5BC24;
    }
L_08A5BC24:
    ctx.set_gpr(31, 0x08A5BC2Cu);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0014_entry, 14u, 257u, 0x0883D454u>(ctx, &aot_mem) && ctx.pc == 0x08A5BC2Cu) goto L_08A5BC2C;
    return;
L_08A5BC2C:
    ctx.set_gpr(31, rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(12)));
    ctx.set_gpr(16, rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(8)));
    ctx.set_gpr(29, ctx.gpr[29] + static_cast<std::uint32_t>(64));
    jump_target = ctx.gpr[31];
    // nop
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_08A5BC40:
    ctx.set_gpr(29, ctx.gpr[29] + static_cast<std::uint32_t>(-16));
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(12), ctx.gpr[31]);
    ctx.set_gpr(4, 2246u << 16u);
    ctx.set_gpr(4, ctx.gpr[4] + static_cast<std::uint32_t>(-21268));
    ctx.set_gpr(5, 0u + 0u);
    ctx.set_gpr(31, 0x08A5BC5Cu);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0085_entry, 85u, 61u, 0x089584C4u>(ctx, &aot_mem) && ctx.pc == 0x08A5BC5Cu) goto L_08A5BC5C;
    return;
L_08A5BC5C:
    ctx.set_gpr(4, 2246u << 16u);
    ctx.set_gpr(4, ctx.gpr[4] + static_cast<std::uint32_t>(-21684));
    ctx.set_gpr(5, 0u + 0u);
    ctx.set_gpr(31, 0x08A5BC70u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0085_entry, 85u, 61u, 0x089584C4u>(ctx, &aot_mem) && ctx.pc == 0x08A5BC70u) goto L_08A5BC70;
    return;
L_08A5BC70:
    ctx.set_gpr(4, 2246u << 16u);
    ctx.set_gpr(4, ctx.gpr[4] + static_cast<std::uint32_t>(-21668));
    ctx.set_gpr(5, 0u + 0u);
    ctx.set_gpr(31, 0x08A5BC84u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0085_entry, 85u, 61u, 0x089584C4u>(ctx, &aot_mem) && ctx.pc == 0x08A5BC84u) goto L_08A5BC84;
    return;
L_08A5BC84:
    ctx.set_gpr(4, 2246u << 16u);
    ctx.set_gpr(4, ctx.gpr[4] + static_cast<std::uint32_t>(-21652));
    ctx.set_gpr(5, 0u + 0u);
    ctx.set_gpr(31, 0x08A5BC98u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0085_entry, 85u, 61u, 0x089584C4u>(ctx, &aot_mem) && ctx.pc == 0x08A5BC98u) goto L_08A5BC98;
    return;
L_08A5BC98:
    ctx.set_gpr(4, 2246u << 16u);
    ctx.set_gpr(4, ctx.gpr[4] + static_cast<std::uint32_t>(-21636));
    ctx.set_gpr(5, 0u + 0u);
    ctx.set_gpr(31, 0x08A5BCACu);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0085_entry, 85u, 61u, 0x089584C4u>(ctx, &aot_mem) && ctx.pc == 0x08A5BCACu) goto L_08A5BCAC;
    return;
L_08A5BCAC:
    ctx.set_gpr(4, 2246u << 16u);
    ctx.set_gpr(4, ctx.gpr[4] + static_cast<std::uint32_t>(-21620));
    ctx.set_gpr(5, 0u + 0u);
    ctx.set_gpr(31, 0x08A5BCC0u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0085_entry, 85u, 61u, 0x089584C4u>(ctx, &aot_mem) && ctx.pc == 0x08A5BCC0u) goto L_08A5BCC0;
    return;
L_08A5BCC0:
    ctx.set_gpr(4, 2246u << 16u);
    ctx.set_gpr(4, ctx.gpr[4] + static_cast<std::uint32_t>(-21604));
    ctx.set_gpr(5, 0u + 0u);
    ctx.set_gpr(31, 0x08A5BCD4u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0085_entry, 85u, 61u, 0x089584C4u>(ctx, &aot_mem) && ctx.pc == 0x08A5BCD4u) goto L_08A5BCD4;
    return;
L_08A5BCD4:
    ctx.set_gpr(4, 2246u << 16u);
    ctx.set_gpr(4, ctx.gpr[4] + static_cast<std::uint32_t>(-21588));
    ctx.set_gpr(5, 0u + 0u);
    ctx.set_gpr(31, 0x08A5BCE8u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0085_entry, 85u, 61u, 0x089584C4u>(ctx, &aot_mem) && ctx.pc == 0x08A5BCE8u) goto L_08A5BCE8;
    return;
L_08A5BCE8:
    ctx.set_gpr(4, 2246u << 16u);
    ctx.set_gpr(4, ctx.gpr[4] + static_cast<std::uint32_t>(-21572));
    ctx.set_gpr(5, 0u + 0u);
    ctx.set_gpr(31, 0x08A5BCFCu);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0085_entry, 85u, 61u, 0x089584C4u>(ctx, &aot_mem) && ctx.pc == 0x08A5BCFCu) goto L_08A5BCFC;
    return;
L_08A5BCFC:
    ctx.set_gpr(4, 2246u << 16u);
    ctx.set_gpr(4, ctx.gpr[4] + static_cast<std::uint32_t>(-21508));
    ctx.set_gpr(5, 0u + 0u);
    ctx.set_gpr(31, 0x08A5BD10u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0085_entry, 85u, 61u, 0x089584C4u>(ctx, &aot_mem) && ctx.pc == 0x08A5BD10u) goto L_08A5BD10;
    return;
L_08A5BD10:
    ctx.set_gpr(4, 2246u << 16u);
    ctx.set_gpr(4, ctx.gpr[4] + static_cast<std::uint32_t>(-21492));
    ctx.set_gpr(5, 0u + 0u);
    ctx.set_gpr(31, 0x08A5BD24u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0085_entry, 85u, 61u, 0x089584C4u>(ctx, &aot_mem) && ctx.pc == 0x08A5BD24u) goto L_08A5BD24;
    return;
L_08A5BD24:
    ctx.set_gpr(4, 2246u << 16u);
    ctx.set_gpr(4, ctx.gpr[4] + static_cast<std::uint32_t>(-21460));
    ctx.set_gpr(5, 0u + 0u);
    ctx.set_gpr(31, 0x08A5BD38u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0085_entry, 85u, 61u, 0x089584C4u>(ctx, &aot_mem) && ctx.pc == 0x08A5BD38u) goto L_08A5BD38;
    return;
L_08A5BD38:
    ctx.set_gpr(4, 2246u << 16u);
    ctx.set_gpr(4, ctx.gpr[4] + static_cast<std::uint32_t>(-21444));
    ctx.set_gpr(5, 0u + 0u);
    ctx.set_gpr(31, 0x08A5BD4Cu);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0085_entry, 85u, 61u, 0x089584C4u>(ctx, &aot_mem) && ctx.pc == 0x08A5BD4Cu) goto L_08A5BD4C;
    return;
L_08A5BD4C:
    ctx.set_gpr(4, 2246u << 16u);
    ctx.set_gpr(4, ctx.gpr[4] + static_cast<std::uint32_t>(-21428));
    ctx.set_gpr(5, 0u + 0u);
    ctx.set_gpr(31, 0x08A5BD60u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0085_entry, 85u, 61u, 0x089584C4u>(ctx, &aot_mem) && ctx.pc == 0x08A5BD60u) goto L_08A5BD60;
    return;
L_08A5BD60:
    ctx.set_gpr(4, 2246u << 16u);
    ctx.set_gpr(4, ctx.gpr[4] + static_cast<std::uint32_t>(-21412));
    ctx.set_gpr(5, 0u + 0u);
    ctx.set_gpr(31, 0x08A5BD74u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0085_entry, 85u, 61u, 0x089584C4u>(ctx, &aot_mem) && ctx.pc == 0x08A5BD74u) goto L_08A5BD74;
    return;
L_08A5BD74:
    ctx.set_gpr(4, 2246u << 16u);
    ctx.set_gpr(4, ctx.gpr[4] + static_cast<std::uint32_t>(-21396));
    ctx.set_gpr(5, 0u + 0u);
    ctx.set_gpr(31, 0x08A5BD88u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0085_entry, 85u, 61u, 0x089584C4u>(ctx, &aot_mem) && ctx.pc == 0x08A5BD88u) goto L_08A5BD88;
    return;
L_08A5BD88:
    ctx.set_gpr(4, 2246u << 16u);
    ctx.set_gpr(4, ctx.gpr[4] + static_cast<std::uint32_t>(-21380));
    ctx.set_gpr(5, 0u + 0u);
    ctx.set_gpr(31, 0x08A5BD9Cu);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0085_entry, 85u, 61u, 0x089584C4u>(ctx, &aot_mem) && ctx.pc == 0x08A5BD9Cu) goto L_08A5BD9C;
    return;
L_08A5BD9C:
    ctx.set_gpr(4, 2246u << 16u);
    ctx.set_gpr(4, ctx.gpr[4] + static_cast<std::uint32_t>(-21364));
    ctx.set_gpr(5, 0u + 0u);
    ctx.set_gpr(31, 0x08A5BDB0u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0085_entry, 85u, 61u, 0x089584C4u>(ctx, &aot_mem) && ctx.pc == 0x08A5BDB0u) goto L_08A5BDB0;
    return;
L_08A5BDB0:
    ctx.set_gpr(4, 2246u << 16u);
    ctx.set_gpr(4, ctx.gpr[4] + static_cast<std::uint32_t>(-21556));
    ctx.set_gpr(5, 0u + 0u);
    ctx.set_gpr(31, 0x08A5BDC4u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0085_entry, 85u, 61u, 0x089584C4u>(ctx, &aot_mem) && ctx.pc == 0x08A5BDC4u) goto L_08A5BDC4;
    return;
L_08A5BDC4:
    ctx.set_gpr(4, 2246u << 16u);
    ctx.set_gpr(4, ctx.gpr[4] + static_cast<std::uint32_t>(-21540));
    ctx.set_gpr(5, 0u + 0u);
    ctx.set_gpr(31, 0x08A5BDD8u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0085_entry, 85u, 61u, 0x089584C4u>(ctx, &aot_mem) && ctx.pc == 0x08A5BDD8u) goto L_08A5BDD8;
    return;
L_08A5BDD8:
    ctx.set_gpr(4, 2246u << 16u);
    ctx.set_gpr(4, ctx.gpr[4] + static_cast<std::uint32_t>(-21284));
    ctx.set_gpr(5, 0u + 0u);
    ctx.set_gpr(31, 0x08A5BDECu);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0085_entry, 85u, 61u, 0x089584C4u>(ctx, &aot_mem) && ctx.pc == 0x08A5BDECu) goto L_08A5BDEC;
    return;
L_08A5BDEC:
    ctx.set_gpr(4, 2246u << 16u);
    ctx.set_gpr(4, ctx.gpr[4] + static_cast<std::uint32_t>(-21700));
    ctx.set_gpr(5, 0u + 0u);
    ctx.set_gpr(31, 0x08A5BE00u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0085_entry, 85u, 61u, 0x089584C4u>(ctx, &aot_mem) && ctx.pc == 0x08A5BE00u) goto L_08A5BE00;
    return;
L_08A5BE00:
    ctx.set_gpr(4, 2246u << 16u);
    ctx.set_gpr(4, ctx.gpr[4] + static_cast<std::uint32_t>(-21476));
    ctx.set_gpr(5, 0u + 0u);
    ctx.set_gpr(31, 0x08A5BE14u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0085_entry, 85u, 61u, 0x089584C4u>(ctx, &aot_mem) && ctx.pc == 0x08A5BE14u) goto L_08A5BE14;
    return;
L_08A5BE14:
    ctx.set_gpr(31, rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(12)));
    ctx.set_gpr(29, ctx.gpr[29] + static_cast<std::uint32_t>(16));
    jump_target = ctx.gpr[31];
    // nop
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_08A5BE24:
    ctx.set_gpr(29, ctx.gpr[29] + static_cast<std::uint32_t>(-16));
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(12), ctx.gpr[31]);
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(8), ctx.gpr[16]);
    ctx.set_gpr(16, ctx.gpr[4] + 0u);
    ctx.set_gpr(25, rt.memory().aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(0)));
    ctx.set_gpr(25, rt.memory().aot_load32(ctx.gpr[25] + static_cast<std::uint32_t>(88)));
    jump_target = ctx.gpr[25];
    ctx.set_gpr(31, 0x08A5BE44u);
    // nop
    ctx.pc = jump_target;
    if (rt.invoke_chained_call(ctx, &aot_mem) && ctx.pc == 0x08A5BE44u) goto L_08A5BE44;
    return;
L_08A5BE44:
    ctx.set_gpr(4, ctx.gpr[2] + 0u);
    ctx.set_gpr(5, 0u + static_cast<std::uint32_t>(1));
    ctx.set_gpr(31, 0x08A5BE54u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0080_entry, 80u, 118u, 0x089448B4u>(ctx, &aot_mem) && ctx.pc == 0x08A5BE54u) goto L_08A5BE54;
    return;
L_08A5BE54:
    { const bool branch_taken = ctx.gpr[2] != 0u;
    // nop
      if (branch_taken) {
          goto L_08A5BE64;
      }
      goto L_08A5BE5C;
    }
L_08A5BE5C:
    ctx.set_gpr(31, 0x08A5BE64u);
    // nop
    goto L_08A5BC40;
L_08A5BE64:
    ctx.set_gpr(4, ctx.gpr[16] + 0u);
    ctx.set_gpr(31, 0x08A5BE70u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0145_entry, 145u, 225u, 0x08A491B0u>(ctx, &aot_mem) && ctx.pc == 0x08A5BE70u) goto L_08A5BE70;
    return;
L_08A5BE70:
    ctx.set_gpr(31, rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(12)));
    ctx.set_gpr(16, rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(8)));
    ctx.set_gpr(29, ctx.gpr[29] + static_cast<std::uint32_t>(16));
    jump_target = ctx.gpr[31];
    // nop
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_08A5BE84:
    ctx.set_gpr(29, ctx.gpr[29] + static_cast<std::uint32_t>(-16));
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(12), ctx.gpr[31]);
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(8), ctx.gpr[18]);
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(4), ctx.gpr[17]);
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(0), ctx.gpr[16]);
    ctx.set_gpr(18, ctx.gpr[4] + 0u);
    ctx.set_gpr(17, ctx.gpr[5] + 0u);
    ctx.set_gpr(16, rt.memory().aot_load32(ctx.gpr[5] + static_cast<std::uint32_t>(52)));
    ctx.set_gpr(4, rt.memory().aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(204)));
    ctx.set_gpr(5, rt.memory().aot_load32(ctx.gpr[6] + static_cast<std::uint32_t>(12)));
    ctx.set_gpr(25, rt.memory().aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(0)));
    ctx.set_gpr(25, rt.memory().aot_load32(ctx.gpr[25] + static_cast<std::uint32_t>(140)));
    jump_target = ctx.gpr[25];
    ctx.set_gpr(31, 0x08A5BEBCu);
    // nop
    ctx.pc = jump_target;
    if (rt.invoke_chained_call(ctx, &aot_mem) && ctx.pc == 0x08A5BEBCu) goto L_08A5BEBC;
    return;
L_08A5BEBC:
    ctx.set_gpr(4, rt.memory().aot_load32(ctx.gpr[18] + static_cast<std::uint32_t>(144)));
    ctx.set_gpr(5, 0u + static_cast<std::uint32_t>(1));
    ctx.set_gpr(25, rt.memory().aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(0)));
    ctx.set_gpr(25, rt.memory().aot_load32(ctx.gpr[25] + static_cast<std::uint32_t>(100)));
    jump_target = ctx.gpr[25];
    ctx.set_gpr(31, 0x08A5BED4u);
    // nop
    ctx.pc = jump_target;
    if (rt.invoke_chained_call(ctx, &aot_mem) && ctx.pc == 0x08A5BED4u) goto L_08A5BED4;
    return;
L_08A5BED4:
    ctx.set_gpr(4, ctx.gpr[16] + 0u);
    ctx.set_gpr(2, 2246u << 16u);
    ctx.set_gpr(5, rt.memory().aot_load32(ctx.gpr[2] + static_cast<std::uint32_t>(-21668)));
    ctx.set_gpr(31, 0x08A5BEE8u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0138_entry, 138u, 605u, 0x08A2EC74u>(ctx, &aot_mem) && ctx.pc == 0x08A5BEE8u) goto L_08A5BEE8;
    return;
L_08A5BEE8:
    ctx.set_gpr(4, ctx.gpr[16] + 0u);
    ctx.set_gpr(5, rt.memory().aot_load32(ctx.gpr[18] + static_cast<std::uint32_t>(204)));
    ctx.set_gpr(31, 0x08A5BEF8u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0138_entry, 138u, 605u, 0x08A2EC74u>(ctx, &aot_mem) && ctx.pc == 0x08A5BEF8u) goto L_08A5BEF8;
    return;
L_08A5BEF8:
    ctx.set_gpr(4, ctx.gpr[16] + 0u);
    ctx.set_gpr(2, 2246u << 16u);
    ctx.set_gpr(5, rt.memory().aot_load32(ctx.gpr[2] + static_cast<std::uint32_t>(-21428)));
    ctx.set_gpr(31, 0x08A5BF0Cu);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0138_entry, 138u, 605u, 0x08A2EC74u>(ctx, &aot_mem) && ctx.pc == 0x08A5BF0Cu) goto L_08A5BF0C;
    return;
L_08A5BF0C:
    ctx.set_gpr(4, ctx.gpr[16] + 0u);
    ctx.set_gpr(2, 2246u << 16u);
    ctx.set_gpr(5, rt.memory().aot_load32(ctx.gpr[2] + static_cast<std::uint32_t>(-21396)));
    ctx.set_gpr(31, 0x08A5BF20u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0138_entry, 138u, 605u, 0x08A2EC74u>(ctx, &aot_mem) && ctx.pc == 0x08A5BF20u) goto L_08A5BF20;
    return;
L_08A5BF20:
    ctx.set_gpr(4, ctx.gpr[16] + 0u);
    ctx.set_gpr(5, rt.memory().aot_load32(ctx.gpr[18] + static_cast<std::uint32_t>(144)));
    ctx.set_gpr(31, 0x08A5BF30u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0138_entry, 138u, 605u, 0x08A2EC74u>(ctx, &aot_mem) && ctx.pc == 0x08A5BF30u) goto L_08A5BF30;
    return;
L_08A5BF30:
    ctx.set_gpr(4, ctx.gpr[16] + 0u);
    ctx.set_gpr(2, 2246u << 16u);
    ctx.set_gpr(5, rt.memory().aot_load32(ctx.gpr[2] + static_cast<std::uint32_t>(-21364)));
    ctx.set_gpr(31, 0x08A5BF44u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0138_entry, 138u, 605u, 0x08A2EC74u>(ctx, &aot_mem) && ctx.pc == 0x08A5BF44u) goto L_08A5BF44;
    return;
L_08A5BF44:
    ctx.set_gpr(4, ctx.gpr[16] + 0u);
    ctx.set_gpr(2, 2246u << 16u);
    ctx.set_gpr(5, rt.memory().aot_load32(ctx.gpr[2] + static_cast<std::uint32_t>(-21684)));
    ctx.set_gpr(31, 0x08A5BF58u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0138_entry, 138u, 585u, 0x08A2E9A8u>(ctx, &aot_mem) && ctx.pc == 0x08A5BF58u) goto L_08A5BF58;
    return;
L_08A5BF58:
    ctx.set_gpr(4, ctx.gpr[16] + 0u);
    ctx.set_gpr(2, 2246u << 16u);
    ctx.set_gpr(5, rt.memory().aot_load32(ctx.gpr[2] + static_cast<std::uint32_t>(-21268)));
    ctx.set_gpr(31, 0x08A5BF6Cu);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0138_entry, 138u, 585u, 0x08A2E9A8u>(ctx, &aot_mem) && ctx.pc == 0x08A5BF6Cu) goto L_08A5BF6C;
    return;
L_08A5BF6C:
    ctx.set_gpr(4, ctx.gpr[18] + 0u);
    ctx.set_gpr(5, ctx.gpr[17] + 0u);
    ctx.set_gpr(31, 0x08A5BF7Cu);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0150_entry, 150u, 105u, 0x08A5C7D4u>(ctx, &aot_mem) && ctx.pc == 0x08A5BF7Cu) goto L_08A5BF7C;
    return;
L_08A5BF7C:
    ctx.set_gpr(4, ctx.gpr[16] + 0u);
    ctx.set_gpr(2, 2246u << 16u);
    ctx.set_gpr(5, rt.memory().aot_load32(ctx.gpr[2] + static_cast<std::uint32_t>(-21268)));
    ctx.set_gpr(31, 0x08A5BF90u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0138_entry, 138u, 589u, 0x08A2EA40u>(ctx, &aot_mem) && ctx.pc == 0x08A5BF90u) goto L_08A5BF90;
    return;
L_08A5BF90:
    ctx.set_gpr(4, ctx.gpr[16] + 0u);
    ctx.set_gpr(2, 2246u << 16u);
    ctx.set_gpr(5, rt.memory().aot_load32(ctx.gpr[2] + static_cast<std::uint32_t>(-21684)));
    ctx.set_gpr(31, 0x08A5BFA4u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0138_entry, 138u, 589u, 0x08A2EA40u>(ctx, &aot_mem) && ctx.pc == 0x08A5BFA4u) goto L_08A5BFA4;
    return;
L_08A5BFA4:
    ctx.set_gpr(4, ctx.gpr[16] + 0u);
    ctx.set_gpr(2, 2246u << 16u);
    ctx.set_gpr(5, rt.memory().aot_load32(ctx.gpr[2] + static_cast<std::uint32_t>(-21364)));
    ctx.set_gpr(31, 0x08A5BFB8u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0138_entry, 138u, 615u, 0x08A2ED9Cu>(ctx, &aot_mem) && ctx.pc == 0x08A5BFB8u) goto L_08A5BFB8;
    return;
L_08A5BFB8:
    ctx.set_gpr(4, ctx.gpr[16] + 0u);
    ctx.set_gpr(5, rt.memory().aot_load32(ctx.gpr[18] + static_cast<std::uint32_t>(144)));
    ctx.set_gpr(31, 0x08A5BFC8u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0138_entry, 138u, 615u, 0x08A2ED9Cu>(ctx, &aot_mem) && ctx.pc == 0x08A5BFC8u) goto L_08A5BFC8;
    return;
L_08A5BFC8:
    ctx.set_gpr(4, ctx.gpr[16] + 0u);
    ctx.set_gpr(2, 2246u << 16u);
    ctx.set_gpr(5, rt.memory().aot_load32(ctx.gpr[2] + static_cast<std::uint32_t>(-21396)));
    ctx.set_gpr(31, 0x08A5BFDCu);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0138_entry, 138u, 615u, 0x08A2ED9Cu>(ctx, &aot_mem) && ctx.pc == 0x08A5BFDCu) goto L_08A5BFDC;
    return;
L_08A5BFDC:
    ctx.set_gpr(4, ctx.gpr[16] + 0u);
    ctx.set_gpr(2, 2246u << 16u);
    ctx.set_gpr(5, rt.memory().aot_load32(ctx.gpr[2] + static_cast<std::uint32_t>(-21428)));
    ctx.set_gpr(31, 0x08A5BFF0u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0138_entry, 138u, 615u, 0x08A2ED9Cu>(ctx, &aot_mem) && ctx.pc == 0x08A5BFF0u) goto L_08A5BFF0;
    return;
L_08A5BFF0:
    ctx.set_gpr(4, ctx.gpr[16] + 0u);
    ctx.set_gpr(5, rt.memory().aot_load32(ctx.gpr[18] + static_cast<std::uint32_t>(204)));
    ctx.set_gpr(31, 0x08A5C000u);
    // nop
    (void)rt.invoke_chained_direct<&recomp_unit_0138_entry, 138u, 615u, 0x08A2ED9Cu>(ctx, &aot_mem);
    return;
}

void recomp_unit_0149(Runtime &rt, AllegrexContext &ctx) {
    auto aot_mem = rt.memory().aot_fast_view();
    recomp_unit_0149_entry(rt, ctx, 0u, aot_mem);
}

void register_generated_unit_149(Runtime &runtime) {
    runtime.register_generated_unit(149u, 0x08A58000u, 16384u, &recomp_unit_0149, &recomp_unit_0149_entry);
    runtime.register_function(0x08A58000u, &recomp_unit_0149, "recomp_unit_0149");
    runtime.register_function(0x08A58020u, &recomp_unit_0149, "recomp_unit_0149");
    runtime.register_function(0x08A58054u, &recomp_unit_0149, "recomp_unit_0149");
    runtime.register_function(0x08A58060u, &recomp_unit_0149, "recomp_unit_0149");
    runtime.register_function(0x08A58070u, &recomp_unit_0149, "recomp_unit_0149");
    runtime.register_function(0x08A58084u, &recomp_unit_0149, "recomp_unit_0149");
    runtime.register_function(0x08A58088u, &recomp_unit_0149, "recomp_unit_0149");
    runtime.register_function(0x08A58094u, &recomp_unit_0149, "recomp_unit_0149");
    runtime.register_function(0x08A580A0u, &recomp_unit_0149, "recomp_unit_0149");
    runtime.register_function(0x08A580C0u, &recomp_unit_0149, "recomp_unit_0149");
    runtime.register_function(0x08A580CCu, &recomp_unit_0149, "recomp_unit_0149");
    runtime.register_function(0x08A580D8u, &recomp_unit_0149, "recomp_unit_0149");
    runtime.register_function(0x08A580E8u, &recomp_unit_0149, "recomp_unit_0149");
    runtime.register_function(0x08A580FCu, &recomp_unit_0149, "recomp_unit_0149");
    runtime.register_function(0x08A58108u, &recomp_unit_0149, "recomp_unit_0149");
    runtime.register_function(0x08A58114u, &recomp_unit_0149, "recomp_unit_0149");
    runtime.register_function(0x08A58120u, &recomp_unit_0149, "recomp_unit_0149");
    runtime.register_function(0x08A58128u, &recomp_unit_0149, "recomp_unit_0149");
    runtime.register_function(0x08A5814Cu, &recomp_unit_0149, "recomp_unit_0149");
    runtime.register_function(0x08A58178u, &recomp_unit_0149, "recomp_unit_0149");
    runtime.register_function(0x08A581ACu, &recomp_unit_0149, "recomp_unit_0149");
    runtime.register_function(0x08A581D8u, &recomp_unit_0149, "recomp_unit_0149");
    runtime.register_function(0x08A581E4u, &recomp_unit_0149, "recomp_unit_0149");
    runtime.register_function(0x08A581F0u, &recomp_unit_0149, "recomp_unit_0149");
    runtime.register_function(0x08A581F8u, &recomp_unit_0149, "recomp_unit_0149");
    runtime.register_function(0x08A58200u, &recomp_unit_0149, "recomp_unit_0149");
    runtime.register_function(0x08A5821Cu, &recomp_unit_0149, "recomp_unit_0149");
    runtime.register_function(0x08A58234u, &recomp_unit_0149, "recomp_unit_0149");
    runtime.register_function(0x08A5823Cu, &recomp_unit_0149, "recomp_unit_0149");
    runtime.register_function(0x08A58248u, &recomp_unit_0149, "recomp_unit_0149");
    runtime.register_function(0x08A58264u, &recomp_unit_0149, "recomp_unit_0149");
    runtime.register_function(0x08A5827Cu, &recomp_unit_0149, "recomp_unit_0149");
    runtime.register_function(0x08A58284u, &recomp_unit_0149, "recomp_unit_0149");
    runtime.register_function(0x08A58290u, &recomp_unit_0149, "recomp_unit_0149");
    runtime.register_function(0x08A582ACu, &recomp_unit_0149, "recomp_unit_0149");
    runtime.register_function(0x08A582C4u, &recomp_unit_0149, "recomp_unit_0149");
    runtime.register_function(0x08A582CCu, &recomp_unit_0149, "recomp_unit_0149");
    runtime.register_function(0x08A582ECu, &recomp_unit_0149, "recomp_unit_0149");
    runtime.register_function(0x08A58304u, &recomp_unit_0149, "recomp_unit_0149");
    runtime.register_function(0x08A58320u, &recomp_unit_0149, "recomp_unit_0149");
    runtime.register_function(0x08A58334u, &recomp_unit_0149, "recomp_unit_0149");
    runtime.register_function(0x08A58370u, &recomp_unit_0149, "recomp_unit_0149");
    runtime.register_function(0x08A58388u, &recomp_unit_0149, "recomp_unit_0149");
    runtime.register_function(0x08A58390u, &recomp_unit_0149, "recomp_unit_0149");
    runtime.register_function(0x08A58394u, &recomp_unit_0149, "recomp_unit_0149");
    runtime.register_function(0x08A583A0u, &recomp_unit_0149, "recomp_unit_0149");
    runtime.register_function(0x08A583B0u, &recomp_unit_0149, "recomp_unit_0149");
    runtime.register_function(0x08A583C4u, &recomp_unit_0149, "recomp_unit_0149");
    runtime.register_function(0x08A583D0u, &recomp_unit_0149, "recomp_unit_0149");
    runtime.register_function(0x08A583E0u, &recomp_unit_0149, "recomp_unit_0149");
    runtime.register_function(0x08A58400u, &recomp_unit_0149, "recomp_unit_0149");
    runtime.register_function(0x08A58440u, &recomp_unit_0149, "recomp_unit_0149");
    runtime.register_function(0x08A5844Cu, &recomp_unit_0149, "recomp_unit_0149");
    runtime.register_function(0x08A5846Cu, &recomp_unit_0149, "recomp_unit_0149");
    runtime.register_function(0x08A58480u, &recomp_unit_0149, "recomp_unit_0149");
    runtime.register_function(0x08A5848Cu, &recomp_unit_0149, "recomp_unit_0149");
    runtime.register_function(0x08A58498u, &recomp_unit_0149, "recomp_unit_0149");
    runtime.register_function(0x08A584A0u, &recomp_unit_0149, "recomp_unit_0149");
    runtime.register_function(0x08A584B0u, &recomp_unit_0149, "recomp_unit_0149");
    runtime.register_function(0x08A584BCu, &recomp_unit_0149, "recomp_unit_0149");
    runtime.register_function(0x08A584C0u, &recomp_unit_0149, "recomp_unit_0149");
    runtime.register_function(0x08A584D0u, &recomp_unit_0149, "recomp_unit_0149");
    runtime.register_function(0x08A584DCu, &recomp_unit_0149, "recomp_unit_0149");
    runtime.register_function(0x08A58504u, &recomp_unit_0149, "recomp_unit_0149");
    runtime.register_function(0x08A58508u, &recomp_unit_0149, "recomp_unit_0149");
    runtime.register_function(0x08A5850Cu, &recomp_unit_0149, "recomp_unit_0149");
    runtime.register_function(0x08A5851Cu, &recomp_unit_0149, "recomp_unit_0149");
    runtime.register_function(0x08A58528u, &recomp_unit_0149, "recomp_unit_0149");
    runtime.register_function(0x08A58548u, &recomp_unit_0149, "recomp_unit_0149");
    runtime.register_function(0x08A5854Cu, &recomp_unit_0149, "recomp_unit_0149");
    runtime.register_function(0x08A5855Cu, &recomp_unit_0149, "recomp_unit_0149");
    runtime.register_function(0x08A58574u, &recomp_unit_0149, "recomp_unit_0149");
    runtime.register_function(0x08A58580u, &recomp_unit_0149, "recomp_unit_0149");
    runtime.register_function(0x08A5858Cu, &recomp_unit_0149, "recomp_unit_0149");
    runtime.register_function(0x08A58598u, &recomp_unit_0149, "recomp_unit_0149");
    runtime.register_function(0x08A585B0u, &recomp_unit_0149, "recomp_unit_0149");
    runtime.register_function(0x08A585B8u, &recomp_unit_0149, "recomp_unit_0149");
    runtime.register_function(0x08A585D0u, &recomp_unit_0149, "recomp_unit_0149");
    runtime.register_function(0x08A585D8u, &recomp_unit_0149, "recomp_unit_0149");
    runtime.register_function(0x08A585ECu, &recomp_unit_0149, "recomp_unit_0149");
    runtime.register_function(0x08A585FCu, &recomp_unit_0149, "recomp_unit_0149");
    runtime.register_function(0x08A58608u, &recomp_unit_0149, "recomp_unit_0149");
    runtime.register_function(0x08A58610u, &recomp_unit_0149, "recomp_unit_0149");
    runtime.register_function(0x08A58614u, &recomp_unit_0149, "recomp_unit_0149");
    runtime.register_function(0x08A58628u, &recomp_unit_0149, "recomp_unit_0149");
    runtime.register_function(0x08A58638u, &recomp_unit_0149, "recomp_unit_0149");
    runtime.register_function(0x08A58644u, &recomp_unit_0149, "recomp_unit_0149");
    runtime.register_function(0x08A58654u, &recomp_unit_0149, "recomp_unit_0149");
    runtime.register_function(0x08A58660u, &recomp_unit_0149, "recomp_unit_0149");
    runtime.register_function(0x08A58674u, &recomp_unit_0149, "recomp_unit_0149");
    runtime.register_function(0x08A5868Cu, &recomp_unit_0149, "recomp_unit_0149");
    runtime.register_function(0x08A586A4u, &recomp_unit_0149, "recomp_unit_0149");
    runtime.register_function(0x08A586BCu, &recomp_unit_0149, "recomp_unit_0149");
    runtime.register_function(0x08A586D4u, &recomp_unit_0149, "recomp_unit_0149");
    runtime.register_function(0x08A586E0u, &recomp_unit_0149, "recomp_unit_0149");
    runtime.register_function(0x08A586F8u, &recomp_unit_0149, "recomp_unit_0149");
    runtime.register_function(0x08A58704u, &recomp_unit_0149, "recomp_unit_0149");
    runtime.register_function(0x08A58710u, &recomp_unit_0149, "recomp_unit_0149");
    runtime.register_function(0x08A5872Cu, &recomp_unit_0149, "recomp_unit_0149");
    runtime.register_function(0x08A58744u, &recomp_unit_0149, "recomp_unit_0149");
    runtime.register_function(0x08A58750u, &recomp_unit_0149, "recomp_unit_0149");
    runtime.register_function(0x08A5875Cu, &recomp_unit_0149, "recomp_unit_0149");
    runtime.register_function(0x08A587BCu, &recomp_unit_0149, "recomp_unit_0149");
    runtime.register_function(0x08A587D4u, &recomp_unit_0149, "recomp_unit_0149");
    runtime.register_function(0x08A587ECu, &recomp_unit_0149, "recomp_unit_0149");
    runtime.register_function(0x08A58804u, &recomp_unit_0149, "recomp_unit_0149");
    runtime.register_function(0x08A5881Cu, &recomp_unit_0149, "recomp_unit_0149");
    runtime.register_function(0x08A58834u, &recomp_unit_0149, "recomp_unit_0149");
    runtime.register_function(0x08A5884Cu, &recomp_unit_0149, "recomp_unit_0149");
    runtime.register_function(0x08A58864u, &recomp_unit_0149, "recomp_unit_0149");
    runtime.register_function(0x08A58868u, &recomp_unit_0149, "recomp_unit_0149");
    runtime.register_function(0x08A58878u, &recomp_unit_0149, "recomp_unit_0149");
    runtime.register_function(0x08A58888u, &recomp_unit_0149, "recomp_unit_0149");
    runtime.register_function(0x08A58894u, &recomp_unit_0149, "recomp_unit_0149");
    runtime.register_function(0x08A588B0u, &recomp_unit_0149, "recomp_unit_0149");
    runtime.register_function(0x08A588C0u, &recomp_unit_0149, "recomp_unit_0149");
    runtime.register_function(0x08A588C8u, &recomp_unit_0149, "recomp_unit_0149");
    runtime.register_function(0x08A5891Cu, &recomp_unit_0149, "recomp_unit_0149");
    runtime.register_function(0x08A58928u, &recomp_unit_0149, "recomp_unit_0149");
    runtime.register_function(0x08A58938u, &recomp_unit_0149, "recomp_unit_0149");
    runtime.register_function(0x08A58944u, &recomp_unit_0149, "recomp_unit_0149");
    runtime.register_function(0x08A58964u, &recomp_unit_0149, "recomp_unit_0149");
    runtime.register_function(0x08A58988u, &recomp_unit_0149, "recomp_unit_0149");
    runtime.register_function(0x08A589A4u, &recomp_unit_0149, "recomp_unit_0149");
    runtime.register_function(0x08A589C0u, &recomp_unit_0149, "recomp_unit_0149");
    runtime.register_function(0x08A589D8u, &recomp_unit_0149, "recomp_unit_0149");
    runtime.register_function(0x08A589F4u, &recomp_unit_0149, "recomp_unit_0149");
    runtime.register_function(0x08A58A0Cu, &recomp_unit_0149, "recomp_unit_0149");
    runtime.register_function(0x08A58A28u, &recomp_unit_0149, "recomp_unit_0149");
    runtime.register_function(0x08A58A40u, &recomp_unit_0149, "recomp_unit_0149");
    runtime.register_function(0x08A58A5Cu, &recomp_unit_0149, "recomp_unit_0149");
    runtime.register_function(0x08A58A74u, &recomp_unit_0149, "recomp_unit_0149");
    runtime.register_function(0x08A58A90u, &recomp_unit_0149, "recomp_unit_0149");
    runtime.register_function(0x08A58AA0u, &recomp_unit_0149, "recomp_unit_0149");
    runtime.register_function(0x08A58AB0u, &recomp_unit_0149, "recomp_unit_0149");
    runtime.register_function(0x08A58ACCu, &recomp_unit_0149, "recomp_unit_0149");
    runtime.register_function(0x08A58B2Cu, &recomp_unit_0149, "recomp_unit_0149");
    runtime.register_function(0x08A58B50u, &recomp_unit_0149, "recomp_unit_0149");
    runtime.register_function(0x08A58B68u, &recomp_unit_0149, "recomp_unit_0149");
    runtime.register_function(0x08A58B88u, &recomp_unit_0149, "recomp_unit_0149");
    runtime.register_function(0x08A58BA0u, &recomp_unit_0149, "recomp_unit_0149");
    runtime.register_function(0x08A58BC0u, &recomp_unit_0149, "recomp_unit_0149");
    runtime.register_function(0x08A58BD8u, &recomp_unit_0149, "recomp_unit_0149");
    runtime.register_function(0x08A58BF8u, &recomp_unit_0149, "recomp_unit_0149");
    runtime.register_function(0x08A58C04u, &recomp_unit_0149, "recomp_unit_0149");
    runtime.register_function(0x08A58C18u, &recomp_unit_0149, "recomp_unit_0149");
    runtime.register_function(0x08A58C1Cu, &recomp_unit_0149, "recomp_unit_0149");
    runtime.register_function(0x08A58C2Cu, &recomp_unit_0149, "recomp_unit_0149");
    runtime.register_function(0x08A58C38u, &recomp_unit_0149, "recomp_unit_0149");
    runtime.register_function(0x08A58C54u, &recomp_unit_0149, "recomp_unit_0149");
    runtime.register_function(0x08A58C60u, &recomp_unit_0149, "recomp_unit_0149");
    runtime.register_function(0x08A58C70u, &recomp_unit_0149, "recomp_unit_0149");
    runtime.register_function(0x08A58C78u, &recomp_unit_0149, "recomp_unit_0149");
    runtime.register_function(0x08A58C84u, &recomp_unit_0149, "recomp_unit_0149");
    runtime.register_function(0x08A58C8Cu, &recomp_unit_0149, "recomp_unit_0149");
    runtime.register_function(0x08A58C98u, &recomp_unit_0149, "recomp_unit_0149");
    runtime.register_function(0x08A58CA8u, &recomp_unit_0149, "recomp_unit_0149");
    runtime.register_function(0x08A58CBCu, &recomp_unit_0149, "recomp_unit_0149");
    runtime.register_function(0x08A58CC4u, &recomp_unit_0149, "recomp_unit_0149");
    runtime.register_function(0x08A58CD0u, &recomp_unit_0149, "recomp_unit_0149");
    runtime.register_function(0x08A58CD8u, &recomp_unit_0149, "recomp_unit_0149");
    runtime.register_function(0x08A58CE4u, &recomp_unit_0149, "recomp_unit_0149");
    runtime.register_function(0x08A58CECu, &recomp_unit_0149, "recomp_unit_0149");
    runtime.register_function(0x08A58CF8u, &recomp_unit_0149, "recomp_unit_0149");
    runtime.register_function(0x08A58D00u, &recomp_unit_0149, "recomp_unit_0149");
    runtime.register_function(0x08A58D0Cu, &recomp_unit_0149, "recomp_unit_0149");
    runtime.register_function(0x08A58D14u, &recomp_unit_0149, "recomp_unit_0149");
    runtime.register_function(0x08A58D48u, &recomp_unit_0149, "recomp_unit_0149");
    runtime.register_function(0x08A58D68u, &recomp_unit_0149, "recomp_unit_0149");
    runtime.register_function(0x08A58D74u, &recomp_unit_0149, "recomp_unit_0149");
    runtime.register_function(0x08A58D90u, &recomp_unit_0149, "recomp_unit_0149");
    runtime.register_function(0x08A58D98u, &recomp_unit_0149, "recomp_unit_0149");
    runtime.register_function(0x08A58DA4u, &recomp_unit_0149, "recomp_unit_0149");
    runtime.register_function(0x08A58DB0u, &recomp_unit_0149, "recomp_unit_0149");
    runtime.register_function(0x08A58DCCu, &recomp_unit_0149, "recomp_unit_0149");
    runtime.register_function(0x08A58DD8u, &recomp_unit_0149, "recomp_unit_0149");
    runtime.register_function(0x08A58DE4u, &recomp_unit_0149, "recomp_unit_0149");
    runtime.register_function(0x08A58DE8u, &recomp_unit_0149, "recomp_unit_0149");
    runtime.register_function(0x08A58DF0u, &recomp_unit_0149, "recomp_unit_0149");
    runtime.register_function(0x08A58E18u, &recomp_unit_0149, "recomp_unit_0149");
    runtime.register_function(0x08A58E28u, &recomp_unit_0149, "recomp_unit_0149");
    runtime.register_function(0x08A58E40u, &recomp_unit_0149, "recomp_unit_0149");
    runtime.register_function(0x08A58E48u, &recomp_unit_0149, "recomp_unit_0149");
    runtime.register_function(0x08A58E54u, &recomp_unit_0149, "recomp_unit_0149");
    runtime.register_function(0x08A58E60u, &recomp_unit_0149, "recomp_unit_0149");
    runtime.register_function(0x08A58E68u, &recomp_unit_0149, "recomp_unit_0149");
    runtime.register_function(0x08A58E6Cu, &recomp_unit_0149, "recomp_unit_0149");
    runtime.register_function(0x08A58E70u, &recomp_unit_0149, "recomp_unit_0149");
    runtime.register_function(0x08A58E84u, &recomp_unit_0149, "recomp_unit_0149");
    runtime.register_function(0x08A58E90u, &recomp_unit_0149, "recomp_unit_0149");
    runtime.register_function(0x08A58EB0u, &recomp_unit_0149, "recomp_unit_0149");
    runtime.register_function(0x08A58ECCu, &recomp_unit_0149, "recomp_unit_0149");
    runtime.register_function(0x08A58EF0u, &recomp_unit_0149, "recomp_unit_0149");
    runtime.register_function(0x08A58F04u, &recomp_unit_0149, "recomp_unit_0149");
    runtime.register_function(0x08A58F18u, &recomp_unit_0149, "recomp_unit_0149");
    runtime.register_function(0x08A58F2Cu, &recomp_unit_0149, "recomp_unit_0149");
    runtime.register_function(0x08A58F3Cu, &recomp_unit_0149, "recomp_unit_0149");
    runtime.register_function(0x08A58F5Cu, &recomp_unit_0149, "recomp_unit_0149");
    runtime.register_function(0x08A58F74u, &recomp_unit_0149, "recomp_unit_0149");
    runtime.register_function(0x08A58F90u, &recomp_unit_0149, "recomp_unit_0149");
    runtime.register_function(0x08A58F98u, &recomp_unit_0149, "recomp_unit_0149");
    runtime.register_function(0x08A58FA8u, &recomp_unit_0149, "recomp_unit_0149");
    runtime.register_function(0x08A58FB4u, &recomp_unit_0149, "recomp_unit_0149");
    runtime.register_function(0x08A58FB8u, &recomp_unit_0149, "recomp_unit_0149");
    runtime.register_function(0x08A58FC8u, &recomp_unit_0149, "recomp_unit_0149");
    runtime.register_function(0x08A58FCCu, &recomp_unit_0149, "recomp_unit_0149");
    runtime.register_function(0x08A58FE0u, &recomp_unit_0149, "recomp_unit_0149");
    runtime.register_function(0x08A59010u, &recomp_unit_0149, "recomp_unit_0149");
    runtime.register_function(0x08A59024u, &recomp_unit_0149, "recomp_unit_0149");
    runtime.register_function(0x08A5903Cu, &recomp_unit_0149, "recomp_unit_0149");
    runtime.register_function(0x08A5904Cu, &recomp_unit_0149, "recomp_unit_0149");
    runtime.register_function(0x08A59050u, &recomp_unit_0149, "recomp_unit_0149");
    runtime.register_function(0x08A59064u, &recomp_unit_0149, "recomp_unit_0149");
    runtime.register_function(0x08A59070u, &recomp_unit_0149, "recomp_unit_0149");
    runtime.register_function(0x08A59088u, &recomp_unit_0149, "recomp_unit_0149");
    runtime.register_function(0x08A59098u, &recomp_unit_0149, "recomp_unit_0149");
    runtime.register_function(0x08A590A8u, &recomp_unit_0149, "recomp_unit_0149");
    runtime.register_function(0x08A590C8u, &recomp_unit_0149, "recomp_unit_0149");
    runtime.register_function(0x08A590D0u, &recomp_unit_0149, "recomp_unit_0149");
    runtime.register_function(0x08A590E4u, &recomp_unit_0149, "recomp_unit_0149");
    runtime.register_function(0x08A59100u, &recomp_unit_0149, "recomp_unit_0149");
    runtime.register_function(0x08A59118u, &recomp_unit_0149, "recomp_unit_0149");
    runtime.register_function(0x08A59124u, &recomp_unit_0149, "recomp_unit_0149");
    runtime.register_function(0x08A59158u, &recomp_unit_0149, "recomp_unit_0149");
    runtime.register_function(0x08A59160u, &recomp_unit_0149, "recomp_unit_0149");
    runtime.register_function(0x08A59174u, &recomp_unit_0149, "recomp_unit_0149");
    runtime.register_function(0x08A59180u, &recomp_unit_0149, "recomp_unit_0149");
    runtime.register_function(0x08A59188u, &recomp_unit_0149, "recomp_unit_0149");
    runtime.register_function(0x08A59190u, &recomp_unit_0149, "recomp_unit_0149");
    runtime.register_function(0x08A59198u, &recomp_unit_0149, "recomp_unit_0149");
    runtime.register_function(0x08A591A0u, &recomp_unit_0149, "recomp_unit_0149");
    runtime.register_function(0x08A591A8u, &recomp_unit_0149, "recomp_unit_0149");
    runtime.register_function(0x08A591B4u, &recomp_unit_0149, "recomp_unit_0149");
    runtime.register_function(0x08A591BCu, &recomp_unit_0149, "recomp_unit_0149");
    runtime.register_function(0x08A591C8u, &recomp_unit_0149, "recomp_unit_0149");
    runtime.register_function(0x08A591DCu, &recomp_unit_0149, "recomp_unit_0149");
    runtime.register_function(0x08A591E4u, &recomp_unit_0149, "recomp_unit_0149");
    runtime.register_function(0x08A591F0u, &recomp_unit_0149, "recomp_unit_0149");
    runtime.register_function(0x08A591FCu, &recomp_unit_0149, "recomp_unit_0149");
    runtime.register_function(0x08A59200u, &recomp_unit_0149, "recomp_unit_0149");
    runtime.register_function(0x08A5920Cu, &recomp_unit_0149, "recomp_unit_0149");
    runtime.register_function(0x08A59230u, &recomp_unit_0149, "recomp_unit_0149");
    runtime.register_function(0x08A59238u, &recomp_unit_0149, "recomp_unit_0149");
    runtime.register_function(0x08A59240u, &recomp_unit_0149, "recomp_unit_0149");
    runtime.register_function(0x08A59244u, &recomp_unit_0149, "recomp_unit_0149");
    runtime.register_function(0x08A59250u, &recomp_unit_0149, "recomp_unit_0149");
    runtime.register_function(0x08A59254u, &recomp_unit_0149, "recomp_unit_0149");
    runtime.register_function(0x08A59278u, &recomp_unit_0149, "recomp_unit_0149");
    runtime.register_function(0x08A592A4u, &recomp_unit_0149, "recomp_unit_0149");
    runtime.register_function(0x08A592B0u, &recomp_unit_0149, "recomp_unit_0149");
    runtime.register_function(0x08A592C4u, &recomp_unit_0149, "recomp_unit_0149");
    runtime.register_function(0x08A592D0u, &recomp_unit_0149, "recomp_unit_0149");
    runtime.register_function(0x08A592E8u, &recomp_unit_0149, "recomp_unit_0149");
    runtime.register_function(0x08A59304u, &recomp_unit_0149, "recomp_unit_0149");
    runtime.register_function(0x08A59320u, &recomp_unit_0149, "recomp_unit_0149");
    runtime.register_function(0x08A59330u, &recomp_unit_0149, "recomp_unit_0149");
    runtime.register_function(0x08A59334u, &recomp_unit_0149, "recomp_unit_0149");
    runtime.register_function(0x08A5933Cu, &recomp_unit_0149, "recomp_unit_0149");
    runtime.register_function(0x08A5934Cu, &recomp_unit_0149, "recomp_unit_0149");
    runtime.register_function(0x08A59358u, &recomp_unit_0149, "recomp_unit_0149");
    runtime.register_function(0x08A59360u, &recomp_unit_0149, "recomp_unit_0149");
    runtime.register_function(0x08A59380u, &recomp_unit_0149, "recomp_unit_0149");
    runtime.register_function(0x08A59398u, &recomp_unit_0149, "recomp_unit_0149");
    runtime.register_function(0x08A593ACu, &recomp_unit_0149, "recomp_unit_0149");
    runtime.register_function(0x08A593C8u, &recomp_unit_0149, "recomp_unit_0149");
    runtime.register_function(0x08A593E0u, &recomp_unit_0149, "recomp_unit_0149");
    runtime.register_function(0x08A593F4u, &recomp_unit_0149, "recomp_unit_0149");
    runtime.register_function(0x08A59410u, &recomp_unit_0149, "recomp_unit_0149");
    runtime.register_function(0x08A59464u, &recomp_unit_0149, "recomp_unit_0149");
    runtime.register_function(0x08A5946Cu, &recomp_unit_0149, "recomp_unit_0149");
    runtime.register_function(0x08A5947Cu, &recomp_unit_0149, "recomp_unit_0149");
    runtime.register_function(0x08A5948Cu, &recomp_unit_0149, "recomp_unit_0149");
    runtime.register_function(0x08A59494u, &recomp_unit_0149, "recomp_unit_0149");
    runtime.register_function(0x08A59498u, &recomp_unit_0149, "recomp_unit_0149");
    runtime.register_function(0x08A594A0u, &recomp_unit_0149, "recomp_unit_0149");
    runtime.register_function(0x08A594A4u, &recomp_unit_0149, "recomp_unit_0149");
    runtime.register_function(0x08A594ACu, &recomp_unit_0149, "recomp_unit_0149");
    runtime.register_function(0x08A594B8u, &recomp_unit_0149, "recomp_unit_0149");
    runtime.register_function(0x08A594C4u, &recomp_unit_0149, "recomp_unit_0149");
    runtime.register_function(0x08A594CCu, &recomp_unit_0149, "recomp_unit_0149");
    runtime.register_function(0x08A594E0u, &recomp_unit_0149, "recomp_unit_0149");
    runtime.register_function(0x08A594ECu, &recomp_unit_0149, "recomp_unit_0149");
    runtime.register_function(0x08A594F4u, &recomp_unit_0149, "recomp_unit_0149");
    runtime.register_function(0x08A594FCu, &recomp_unit_0149, "recomp_unit_0149");
    runtime.register_function(0x08A59504u, &recomp_unit_0149, "recomp_unit_0149");
    runtime.register_function(0x08A5950Cu, &recomp_unit_0149, "recomp_unit_0149");
    runtime.register_function(0x08A59514u, &recomp_unit_0149, "recomp_unit_0149");
    runtime.register_function(0x08A59520u, &recomp_unit_0149, "recomp_unit_0149");
    runtime.register_function(0x08A59528u, &recomp_unit_0149, "recomp_unit_0149");
    runtime.register_function(0x08A5952Cu, &recomp_unit_0149, "recomp_unit_0149");
    runtime.register_function(0x08A59534u, &recomp_unit_0149, "recomp_unit_0149");
    runtime.register_function(0x08A5953Cu, &recomp_unit_0149, "recomp_unit_0149");
    runtime.register_function(0x08A59548u, &recomp_unit_0149, "recomp_unit_0149");
    runtime.register_function(0x08A5954Cu, &recomp_unit_0149, "recomp_unit_0149");
    runtime.register_function(0x08A59554u, &recomp_unit_0149, "recomp_unit_0149");
    runtime.register_function(0x08A59568u, &recomp_unit_0149, "recomp_unit_0149");
    runtime.register_function(0x08A59570u, &recomp_unit_0149, "recomp_unit_0149");
    runtime.register_function(0x08A5957Cu, &recomp_unit_0149, "recomp_unit_0149");
    runtime.register_function(0x08A59588u, &recomp_unit_0149, "recomp_unit_0149");
    runtime.register_function(0x08A5958Cu, &recomp_unit_0149, "recomp_unit_0149");
    runtime.register_function(0x08A59598u, &recomp_unit_0149, "recomp_unit_0149");
    runtime.register_function(0x08A595C4u, &recomp_unit_0149, "recomp_unit_0149");
    runtime.register_function(0x08A595CCu, &recomp_unit_0149, "recomp_unit_0149");
    runtime.register_function(0x08A595D4u, &recomp_unit_0149, "recomp_unit_0149");
    runtime.register_function(0x08A595E0u, &recomp_unit_0149, "recomp_unit_0149");
    runtime.register_function(0x08A595E4u, &recomp_unit_0149, "recomp_unit_0149");
    runtime.register_function(0x08A595E8u, &recomp_unit_0149, "recomp_unit_0149");
    runtime.register_function(0x08A595F4u, &recomp_unit_0149, "recomp_unit_0149");
    runtime.register_function(0x08A59628u, &recomp_unit_0149, "recomp_unit_0149");
    runtime.register_function(0x08A5965Cu, &recomp_unit_0149, "recomp_unit_0149");
    runtime.register_function(0x08A59664u, &recomp_unit_0149, "recomp_unit_0149");
    runtime.register_function(0x08A5966Cu, &recomp_unit_0149, "recomp_unit_0149");
    runtime.register_function(0x08A59680u, &recomp_unit_0149, "recomp_unit_0149");
    runtime.register_function(0x08A59690u, &recomp_unit_0149, "recomp_unit_0149");
    runtime.register_function(0x08A5969Cu, &recomp_unit_0149, "recomp_unit_0149");
    runtime.register_function(0x08A596A8u, &recomp_unit_0149, "recomp_unit_0149");
    runtime.register_function(0x08A596B8u, &recomp_unit_0149, "recomp_unit_0149");
    runtime.register_function(0x08A596CCu, &recomp_unit_0149, "recomp_unit_0149");
    runtime.register_function(0x08A596D8u, &recomp_unit_0149, "recomp_unit_0149");
    runtime.register_function(0x08A596E4u, &recomp_unit_0149, "recomp_unit_0149");
    runtime.register_function(0x08A596F4u, &recomp_unit_0149, "recomp_unit_0149");
    runtime.register_function(0x08A5971Cu, &recomp_unit_0149, "recomp_unit_0149");
    runtime.register_function(0x08A59724u, &recomp_unit_0149, "recomp_unit_0149");
    runtime.register_function(0x08A59734u, &recomp_unit_0149, "recomp_unit_0149");
    runtime.register_function(0x08A5973Cu, &recomp_unit_0149, "recomp_unit_0149");
    runtime.register_function(0x08A59740u, &recomp_unit_0149, "recomp_unit_0149");
    runtime.register_function(0x08A5974Cu, &recomp_unit_0149, "recomp_unit_0149");
    runtime.register_function(0x08A59758u, &recomp_unit_0149, "recomp_unit_0149");
    runtime.register_function(0x08A5976Cu, &recomp_unit_0149, "recomp_unit_0149");
    runtime.register_function(0x08A5977Cu, &recomp_unit_0149, "recomp_unit_0149");
    runtime.register_function(0x08A5978Cu, &recomp_unit_0149, "recomp_unit_0149");
    runtime.register_function(0x08A597B0u, &recomp_unit_0149, "recomp_unit_0149");
    runtime.register_function(0x08A597C0u, &recomp_unit_0149, "recomp_unit_0149");
    runtime.register_function(0x08A597CCu, &recomp_unit_0149, "recomp_unit_0149");
    runtime.register_function(0x08A597D4u, &recomp_unit_0149, "recomp_unit_0149");
    runtime.register_function(0x08A597E0u, &recomp_unit_0149, "recomp_unit_0149");
    runtime.register_function(0x08A597E8u, &recomp_unit_0149, "recomp_unit_0149");
    runtime.register_function(0x08A597F4u, &recomp_unit_0149, "recomp_unit_0149");
    runtime.register_function(0x08A597FCu, &recomp_unit_0149, "recomp_unit_0149");
    runtime.register_function(0x08A5980Cu, &recomp_unit_0149, "recomp_unit_0149");
    runtime.register_function(0x08A59820u, &recomp_unit_0149, "recomp_unit_0149");
    runtime.register_function(0x08A59828u, &recomp_unit_0149, "recomp_unit_0149");
    runtime.register_function(0x08A5984Cu, &recomp_unit_0149, "recomp_unit_0149");
    runtime.register_function(0x08A59874u, &recomp_unit_0149, "recomp_unit_0149");
    runtime.register_function(0x08A598BCu, &recomp_unit_0149, "recomp_unit_0149");
    runtime.register_function(0x08A598C8u, &recomp_unit_0149, "recomp_unit_0149");
    runtime.register_function(0x08A598E4u, &recomp_unit_0149, "recomp_unit_0149");
    runtime.register_function(0x08A59900u, &recomp_unit_0149, "recomp_unit_0149");
    runtime.register_function(0x08A59A10u, &recomp_unit_0149, "recomp_unit_0149");
    runtime.register_function(0x08A59A24u, &recomp_unit_0149, "recomp_unit_0149");
    runtime.register_function(0x08A59A34u, &recomp_unit_0149, "recomp_unit_0149");
    runtime.register_function(0x08A59A70u, &recomp_unit_0149, "recomp_unit_0149");
    runtime.register_function(0x08A59A88u, &recomp_unit_0149, "recomp_unit_0149");
    runtime.register_function(0x08A59A94u, &recomp_unit_0149, "recomp_unit_0149");
    runtime.register_function(0x08A59AB0u, &recomp_unit_0149, "recomp_unit_0149");
    runtime.register_function(0x08A59AB4u, &recomp_unit_0149, "recomp_unit_0149");
    runtime.register_function(0x08A59AC8u, &recomp_unit_0149, "recomp_unit_0149");
    runtime.register_function(0x08A59AD4u, &recomp_unit_0149, "recomp_unit_0149");
    runtime.register_function(0x08A59B10u, &recomp_unit_0149, "recomp_unit_0149");
    runtime.register_function(0x08A59B28u, &recomp_unit_0149, "recomp_unit_0149");
    runtime.register_function(0x08A59B34u, &recomp_unit_0149, "recomp_unit_0149");
    runtime.register_function(0x08A59B50u, &recomp_unit_0149, "recomp_unit_0149");
    runtime.register_function(0x08A59B54u, &recomp_unit_0149, "recomp_unit_0149");
    runtime.register_function(0x08A59B68u, &recomp_unit_0149, "recomp_unit_0149");
    runtime.register_function(0x08A59B84u, &recomp_unit_0149, "recomp_unit_0149");
    runtime.register_function(0x08A59BA0u, &recomp_unit_0149, "recomp_unit_0149");
    runtime.register_function(0x08A59BACu, &recomp_unit_0149, "recomp_unit_0149");
    runtime.register_function(0x08A59BB8u, &recomp_unit_0149, "recomp_unit_0149");
    runtime.register_function(0x08A59BC4u, &recomp_unit_0149, "recomp_unit_0149");
    runtime.register_function(0x08A59BD4u, &recomp_unit_0149, "recomp_unit_0149");
    runtime.register_function(0x08A59BD8u, &recomp_unit_0149, "recomp_unit_0149");
    runtime.register_function(0x08A59BECu, &recomp_unit_0149, "recomp_unit_0149");
    runtime.register_function(0x08A59C00u, &recomp_unit_0149, "recomp_unit_0149");
    runtime.register_function(0x08A59C10u, &recomp_unit_0149, "recomp_unit_0149");
    runtime.register_function(0x08A59C2Cu, &recomp_unit_0149, "recomp_unit_0149");
    runtime.register_function(0x08A59C34u, &recomp_unit_0149, "recomp_unit_0149");
    runtime.register_function(0x08A59C3Cu, &recomp_unit_0149, "recomp_unit_0149");
    runtime.register_function(0x08A59C4Cu, &recomp_unit_0149, "recomp_unit_0149");
    runtime.register_function(0x08A59C68u, &recomp_unit_0149, "recomp_unit_0149");
    runtime.register_function(0x08A59C70u, &recomp_unit_0149, "recomp_unit_0149");
    runtime.register_function(0x08A59C78u, &recomp_unit_0149, "recomp_unit_0149");
    runtime.register_function(0x08A59C88u, &recomp_unit_0149, "recomp_unit_0149");
    runtime.register_function(0x08A59CA4u, &recomp_unit_0149, "recomp_unit_0149");
    runtime.register_function(0x08A59CACu, &recomp_unit_0149, "recomp_unit_0149");
    runtime.register_function(0x08A59CB4u, &recomp_unit_0149, "recomp_unit_0149");
    runtime.register_function(0x08A59CC4u, &recomp_unit_0149, "recomp_unit_0149");
    runtime.register_function(0x08A59CE0u, &recomp_unit_0149, "recomp_unit_0149");
    runtime.register_function(0x08A59CE8u, &recomp_unit_0149, "recomp_unit_0149");
    runtime.register_function(0x08A59CF0u, &recomp_unit_0149, "recomp_unit_0149");
    runtime.register_function(0x08A59D00u, &recomp_unit_0149, "recomp_unit_0149");
    runtime.register_function(0x08A59D1Cu, &recomp_unit_0149, "recomp_unit_0149");
    runtime.register_function(0x08A59D24u, &recomp_unit_0149, "recomp_unit_0149");
    runtime.register_function(0x08A59D2Cu, &recomp_unit_0149, "recomp_unit_0149");
    runtime.register_function(0x08A59D3Cu, &recomp_unit_0149, "recomp_unit_0149");
    runtime.register_function(0x08A59D58u, &recomp_unit_0149, "recomp_unit_0149");
    runtime.register_function(0x08A59D60u, &recomp_unit_0149, "recomp_unit_0149");
    runtime.register_function(0x08A59D68u, &recomp_unit_0149, "recomp_unit_0149");
    runtime.register_function(0x08A59D78u, &recomp_unit_0149, "recomp_unit_0149");
    runtime.register_function(0x08A59D94u, &recomp_unit_0149, "recomp_unit_0149");
    runtime.register_function(0x08A59D9Cu, &recomp_unit_0149, "recomp_unit_0149");
    runtime.register_function(0x08A59DA4u, &recomp_unit_0149, "recomp_unit_0149");
    runtime.register_function(0x08A59DB4u, &recomp_unit_0149, "recomp_unit_0149");
    runtime.register_function(0x08A59DD0u, &recomp_unit_0149, "recomp_unit_0149");
    runtime.register_function(0x08A59DD8u, &recomp_unit_0149, "recomp_unit_0149");
    runtime.register_function(0x08A59DE0u, &recomp_unit_0149, "recomp_unit_0149");
    runtime.register_function(0x08A59DF0u, &recomp_unit_0149, "recomp_unit_0149");
    runtime.register_function(0x08A59E0Cu, &recomp_unit_0149, "recomp_unit_0149");
    runtime.register_function(0x08A59E14u, &recomp_unit_0149, "recomp_unit_0149");
    runtime.register_function(0x08A59E1Cu, &recomp_unit_0149, "recomp_unit_0149");
    runtime.register_function(0x08A59E30u, &recomp_unit_0149, "recomp_unit_0149");
    runtime.register_function(0x08A59E40u, &recomp_unit_0149, "recomp_unit_0149");
    runtime.register_function(0x08A59E4Cu, &recomp_unit_0149, "recomp_unit_0149");
    runtime.register_function(0x08A59E58u, &recomp_unit_0149, "recomp_unit_0149");
    runtime.register_function(0x08A59E68u, &recomp_unit_0149, "recomp_unit_0149");
    runtime.register_function(0x08A59E74u, &recomp_unit_0149, "recomp_unit_0149");
    runtime.register_function(0x08A59E80u, &recomp_unit_0149, "recomp_unit_0149");
    runtime.register_function(0x08A59EA0u, &recomp_unit_0149, "recomp_unit_0149");
    runtime.register_function(0x08A59EBCu, &recomp_unit_0149, "recomp_unit_0149");
    runtime.register_function(0x08A59EC4u, &recomp_unit_0149, "recomp_unit_0149");
    runtime.register_function(0x08A59ED0u, &recomp_unit_0149, "recomp_unit_0149");
    runtime.register_function(0x08A59EDCu, &recomp_unit_0149, "recomp_unit_0149");
    runtime.register_function(0x08A59EFCu, &recomp_unit_0149, "recomp_unit_0149");
    runtime.register_function(0x08A59F04u, &recomp_unit_0149, "recomp_unit_0149");
    runtime.register_function(0x08A59F10u, &recomp_unit_0149, "recomp_unit_0149");
    runtime.register_function(0x08A59F1Cu, &recomp_unit_0149, "recomp_unit_0149");
    runtime.register_function(0x08A59F3Cu, &recomp_unit_0149, "recomp_unit_0149");
    runtime.register_function(0x08A59F44u, &recomp_unit_0149, "recomp_unit_0149");
    runtime.register_function(0x08A59F50u, &recomp_unit_0149, "recomp_unit_0149");
    runtime.register_function(0x08A59F5Cu, &recomp_unit_0149, "recomp_unit_0149");
    runtime.register_function(0x08A59F7Cu, &recomp_unit_0149, "recomp_unit_0149");
    runtime.register_function(0x08A59F84u, &recomp_unit_0149, "recomp_unit_0149");
    runtime.register_function(0x08A59F90u, &recomp_unit_0149, "recomp_unit_0149");
    runtime.register_function(0x08A59F9Cu, &recomp_unit_0149, "recomp_unit_0149");
    runtime.register_function(0x08A59FBCu, &recomp_unit_0149, "recomp_unit_0149");
    runtime.register_function(0x08A59FC4u, &recomp_unit_0149, "recomp_unit_0149");
    runtime.register_function(0x08A59FD0u, &recomp_unit_0149, "recomp_unit_0149");
    runtime.register_function(0x08A59FDCu, &recomp_unit_0149, "recomp_unit_0149");
    runtime.register_function(0x08A59FF4u, &recomp_unit_0149, "recomp_unit_0149");
    runtime.register_function(0x08A5A000u, &recomp_unit_0149, "recomp_unit_0149");
    runtime.register_function(0x08A5A00Cu, &recomp_unit_0149, "recomp_unit_0149");
    runtime.register_function(0x08A5A02Cu, &recomp_unit_0149, "recomp_unit_0149");
    runtime.register_function(0x08A5A048u, &recomp_unit_0149, "recomp_unit_0149");
    runtime.register_function(0x08A5A06Cu, &recomp_unit_0149, "recomp_unit_0149");
    runtime.register_function(0x08A5A074u, &recomp_unit_0149, "recomp_unit_0149");
    runtime.register_function(0x08A5A080u, &recomp_unit_0149, "recomp_unit_0149");
    runtime.register_function(0x08A5A08Cu, &recomp_unit_0149, "recomp_unit_0149");
    runtime.register_function(0x08A5A0ACu, &recomp_unit_0149, "recomp_unit_0149");
    runtime.register_function(0x08A5A0C4u, &recomp_unit_0149, "recomp_unit_0149");
    runtime.register_function(0x08A5A0DCu, &recomp_unit_0149, "recomp_unit_0149");
    runtime.register_function(0x08A5A0F0u, &recomp_unit_0149, "recomp_unit_0149");
    runtime.register_function(0x08A5A100u, &recomp_unit_0149, "recomp_unit_0149");
    runtime.register_function(0x08A5A108u, &recomp_unit_0149, "recomp_unit_0149");
    runtime.register_function(0x08A5A114u, &recomp_unit_0149, "recomp_unit_0149");
    runtime.register_function(0x08A5A128u, &recomp_unit_0149, "recomp_unit_0149");
    runtime.register_function(0x08A5A138u, &recomp_unit_0149, "recomp_unit_0149");
    runtime.register_function(0x08A5A158u, &recomp_unit_0149, "recomp_unit_0149");
    runtime.register_function(0x08A5A168u, &recomp_unit_0149, "recomp_unit_0149");
    runtime.register_function(0x08A5A170u, &recomp_unit_0149, "recomp_unit_0149");
    runtime.register_function(0x08A5A17Cu, &recomp_unit_0149, "recomp_unit_0149");
    runtime.register_function(0x08A5A188u, &recomp_unit_0149, "recomp_unit_0149");
    runtime.register_function(0x08A5A19Cu, &recomp_unit_0149, "recomp_unit_0149");
    runtime.register_function(0x08A5A1C8u, &recomp_unit_0149, "recomp_unit_0149");
    runtime.register_function(0x08A5A1D8u, &recomp_unit_0149, "recomp_unit_0149");
    runtime.register_function(0x08A5A1E8u, &recomp_unit_0149, "recomp_unit_0149");
    runtime.register_function(0x08A5A204u, &recomp_unit_0149, "recomp_unit_0149");
    runtime.register_function(0x08A5A224u, &recomp_unit_0149, "recomp_unit_0149");
    runtime.register_function(0x08A5A244u, &recomp_unit_0149, "recomp_unit_0149");
    runtime.register_function(0x08A5A260u, &recomp_unit_0149, "recomp_unit_0149");
    runtime.register_function(0x08A5A27Cu, &recomp_unit_0149, "recomp_unit_0149");
    runtime.register_function(0x08A5A39Cu, &recomp_unit_0149, "recomp_unit_0149");
    runtime.register_function(0x08A5A3A0u, &recomp_unit_0149, "recomp_unit_0149");
    runtime.register_function(0x08A5A3B4u, &recomp_unit_0149, "recomp_unit_0149");
    runtime.register_function(0x08A5A3CCu, &recomp_unit_0149, "recomp_unit_0149");
    runtime.register_function(0x08A5A400u, &recomp_unit_0149, "recomp_unit_0149");
    runtime.register_function(0x08A5A408u, &recomp_unit_0149, "recomp_unit_0149");
    runtime.register_function(0x08A5A424u, &recomp_unit_0149, "recomp_unit_0149");
    runtime.register_function(0x08A5A43Cu, &recomp_unit_0149, "recomp_unit_0149");
    runtime.register_function(0x08A5A450u, &recomp_unit_0149, "recomp_unit_0149");
    runtime.register_function(0x08A5A464u, &recomp_unit_0149, "recomp_unit_0149");
    runtime.register_function(0x08A5A478u, &recomp_unit_0149, "recomp_unit_0149");
    runtime.register_function(0x08A5A488u, &recomp_unit_0149, "recomp_unit_0149");
    runtime.register_function(0x08A5A49Cu, &recomp_unit_0149, "recomp_unit_0149");
    runtime.register_function(0x08A5A4B0u, &recomp_unit_0149, "recomp_unit_0149");
    runtime.register_function(0x08A5A4C0u, &recomp_unit_0149, "recomp_unit_0149");
    runtime.register_function(0x08A5A4D4u, &recomp_unit_0149, "recomp_unit_0149");
    runtime.register_function(0x08A5A4E8u, &recomp_unit_0149, "recomp_unit_0149");
    runtime.register_function(0x08A5A4F4u, &recomp_unit_0149, "recomp_unit_0149");
    runtime.register_function(0x08A5A508u, &recomp_unit_0149, "recomp_unit_0149");
    runtime.register_function(0x08A5A510u, &recomp_unit_0149, "recomp_unit_0149");
    runtime.register_function(0x08A5A524u, &recomp_unit_0149, "recomp_unit_0149");
    runtime.register_function(0x08A5A534u, &recomp_unit_0149, "recomp_unit_0149");
    runtime.register_function(0x08A5A540u, &recomp_unit_0149, "recomp_unit_0149");
    runtime.register_function(0x08A5A55Cu, &recomp_unit_0149, "recomp_unit_0149");
    runtime.register_function(0x08A5A564u, &recomp_unit_0149, "recomp_unit_0149");
    runtime.register_function(0x08A5A588u, &recomp_unit_0149, "recomp_unit_0149");
    runtime.register_function(0x08A5A59Cu, &recomp_unit_0149, "recomp_unit_0149");
    runtime.register_function(0x08A5A5B0u, &recomp_unit_0149, "recomp_unit_0149");
    runtime.register_function(0x08A5A5ECu, &recomp_unit_0149, "recomp_unit_0149");
    runtime.register_function(0x08A5A604u, &recomp_unit_0149, "recomp_unit_0149");
    runtime.register_function(0x08A5A610u, &recomp_unit_0149, "recomp_unit_0149");
    runtime.register_function(0x08A5A62Cu, &recomp_unit_0149, "recomp_unit_0149");
    runtime.register_function(0x08A5A630u, &recomp_unit_0149, "recomp_unit_0149");
    runtime.register_function(0x08A5A648u, &recomp_unit_0149, "recomp_unit_0149");
    runtime.register_function(0x08A5A664u, &recomp_unit_0149, "recomp_unit_0149");
    runtime.register_function(0x08A5A694u, &recomp_unit_0149, "recomp_unit_0149");
    runtime.register_function(0x08A5A6A4u, &recomp_unit_0149, "recomp_unit_0149");
    runtime.register_function(0x08A5A6B4u, &recomp_unit_0149, "recomp_unit_0149");
    runtime.register_function(0x08A5A6C4u, &recomp_unit_0149, "recomp_unit_0149");
    runtime.register_function(0x08A5A6C8u, &recomp_unit_0149, "recomp_unit_0149");
    runtime.register_function(0x08A5A6DCu, &recomp_unit_0149, "recomp_unit_0149");
    runtime.register_function(0x08A5A6E8u, &recomp_unit_0149, "recomp_unit_0149");
    runtime.register_function(0x08A5A6FCu, &recomp_unit_0149, "recomp_unit_0149");
    runtime.register_function(0x08A5A704u, &recomp_unit_0149, "recomp_unit_0149");
    runtime.register_function(0x08A5A718u, &recomp_unit_0149, "recomp_unit_0149");
    runtime.register_function(0x08A5A72Cu, &recomp_unit_0149, "recomp_unit_0149");
    runtime.register_function(0x08A5A740u, &recomp_unit_0149, "recomp_unit_0149");
    runtime.register_function(0x08A5A750u, &recomp_unit_0149, "recomp_unit_0149");
    runtime.register_function(0x08A5A764u, &recomp_unit_0149, "recomp_unit_0149");
    runtime.register_function(0x08A5A778u, &recomp_unit_0149, "recomp_unit_0149");
    runtime.register_function(0x08A5A788u, &recomp_unit_0149, "recomp_unit_0149");
    runtime.register_function(0x08A5A79Cu, &recomp_unit_0149, "recomp_unit_0149");
    runtime.register_function(0x08A5A7B0u, &recomp_unit_0149, "recomp_unit_0149");
    runtime.register_function(0x08A5A7C4u, &recomp_unit_0149, "recomp_unit_0149");
    runtime.register_function(0x08A5A7ECu, &recomp_unit_0149, "recomp_unit_0149");
    runtime.register_function(0x08A5A7FCu, &recomp_unit_0149, "recomp_unit_0149");
    runtime.register_function(0x08A5A808u, &recomp_unit_0149, "recomp_unit_0149");
    runtime.register_function(0x08A5A814u, &recomp_unit_0149, "recomp_unit_0149");
    runtime.register_function(0x08A5A828u, &recomp_unit_0149, "recomp_unit_0149");
    runtime.register_function(0x08A5A830u, &recomp_unit_0149, "recomp_unit_0149");
    runtime.register_function(0x08A5A83Cu, &recomp_unit_0149, "recomp_unit_0149");
    runtime.register_function(0x08A5A848u, &recomp_unit_0149, "recomp_unit_0149");
    runtime.register_function(0x08A5A85Cu, &recomp_unit_0149, "recomp_unit_0149");
    runtime.register_function(0x08A5A864u, &recomp_unit_0149, "recomp_unit_0149");
    runtime.register_function(0x08A5A870u, &recomp_unit_0149, "recomp_unit_0149");
    runtime.register_function(0x08A5A87Cu, &recomp_unit_0149, "recomp_unit_0149");
    runtime.register_function(0x08A5A890u, &recomp_unit_0149, "recomp_unit_0149");
    runtime.register_function(0x08A5A898u, &recomp_unit_0149, "recomp_unit_0149");
    runtime.register_function(0x08A5A8A4u, &recomp_unit_0149, "recomp_unit_0149");
    runtime.register_function(0x08A5A8B0u, &recomp_unit_0149, "recomp_unit_0149");
    runtime.register_function(0x08A5A8C4u, &recomp_unit_0149, "recomp_unit_0149");
    runtime.register_function(0x08A5A8CCu, &recomp_unit_0149, "recomp_unit_0149");
    runtime.register_function(0x08A5A8D8u, &recomp_unit_0149, "recomp_unit_0149");
    runtime.register_function(0x08A5A8E4u, &recomp_unit_0149, "recomp_unit_0149");
    runtime.register_function(0x08A5A8F8u, &recomp_unit_0149, "recomp_unit_0149");
    runtime.register_function(0x08A5A900u, &recomp_unit_0149, "recomp_unit_0149");
    runtime.register_function(0x08A5A90Cu, &recomp_unit_0149, "recomp_unit_0149");
    runtime.register_function(0x08A5A918u, &recomp_unit_0149, "recomp_unit_0149");
    runtime.register_function(0x08A5A92Cu, &recomp_unit_0149, "recomp_unit_0149");
    runtime.register_function(0x08A5A934u, &recomp_unit_0149, "recomp_unit_0149");
    runtime.register_function(0x08A5A940u, &recomp_unit_0149, "recomp_unit_0149");
    runtime.register_function(0x08A5A94Cu, &recomp_unit_0149, "recomp_unit_0149");
    runtime.register_function(0x08A5A960u, &recomp_unit_0149, "recomp_unit_0149");
    runtime.register_function(0x08A5A968u, &recomp_unit_0149, "recomp_unit_0149");
    runtime.register_function(0x08A5A974u, &recomp_unit_0149, "recomp_unit_0149");
    runtime.register_function(0x08A5A980u, &recomp_unit_0149, "recomp_unit_0149");
    runtime.register_function(0x08A5A994u, &recomp_unit_0149, "recomp_unit_0149");
    runtime.register_function(0x08A5A99Cu, &recomp_unit_0149, "recomp_unit_0149");
    runtime.register_function(0x08A5A9A8u, &recomp_unit_0149, "recomp_unit_0149");
    runtime.register_function(0x08A5A9B4u, &recomp_unit_0149, "recomp_unit_0149");
    runtime.register_function(0x08A5A9C8u, &recomp_unit_0149, "recomp_unit_0149");
    runtime.register_function(0x08A5A9D0u, &recomp_unit_0149, "recomp_unit_0149");
    runtime.register_function(0x08A5A9DCu, &recomp_unit_0149, "recomp_unit_0149");
    runtime.register_function(0x08A5A9E8u, &recomp_unit_0149, "recomp_unit_0149");
    runtime.register_function(0x08A5A9FCu, &recomp_unit_0149, "recomp_unit_0149");
    runtime.register_function(0x08A5AA04u, &recomp_unit_0149, "recomp_unit_0149");
    runtime.register_function(0x08A5AA10u, &recomp_unit_0149, "recomp_unit_0149");
    runtime.register_function(0x08A5AA1Cu, &recomp_unit_0149, "recomp_unit_0149");
    runtime.register_function(0x08A5AA30u, &recomp_unit_0149, "recomp_unit_0149");
    runtime.register_function(0x08A5AA38u, &recomp_unit_0149, "recomp_unit_0149");
    runtime.register_function(0x08A5AA44u, &recomp_unit_0149, "recomp_unit_0149");
    runtime.register_function(0x08A5AA50u, &recomp_unit_0149, "recomp_unit_0149");
    runtime.register_function(0x08A5AA64u, &recomp_unit_0149, "recomp_unit_0149");
    runtime.register_function(0x08A5AA6Cu, &recomp_unit_0149, "recomp_unit_0149");
    runtime.register_function(0x08A5AA78u, &recomp_unit_0149, "recomp_unit_0149");
    runtime.register_function(0x08A5AA84u, &recomp_unit_0149, "recomp_unit_0149");
    runtime.register_function(0x08A5AA98u, &recomp_unit_0149, "recomp_unit_0149");
    runtime.register_function(0x08A5AAA0u, &recomp_unit_0149, "recomp_unit_0149");
    runtime.register_function(0x08A5AAACu, &recomp_unit_0149, "recomp_unit_0149");
    runtime.register_function(0x08A5AAB8u, &recomp_unit_0149, "recomp_unit_0149");
    runtime.register_function(0x08A5AACCu, &recomp_unit_0149, "recomp_unit_0149");
    runtime.register_function(0x08A5AAD4u, &recomp_unit_0149, "recomp_unit_0149");
    runtime.register_function(0x08A5AAE0u, &recomp_unit_0149, "recomp_unit_0149");
    runtime.register_function(0x08A5AAECu, &recomp_unit_0149, "recomp_unit_0149");
    runtime.register_function(0x08A5AB00u, &recomp_unit_0149, "recomp_unit_0149");
    runtime.register_function(0x08A5AB08u, &recomp_unit_0149, "recomp_unit_0149");
    runtime.register_function(0x08A5AB14u, &recomp_unit_0149, "recomp_unit_0149");
    runtime.register_function(0x08A5AB20u, &recomp_unit_0149, "recomp_unit_0149");
    runtime.register_function(0x08A5AB34u, &recomp_unit_0149, "recomp_unit_0149");
    runtime.register_function(0x08A5AB3Cu, &recomp_unit_0149, "recomp_unit_0149");
    runtime.register_function(0x08A5AB48u, &recomp_unit_0149, "recomp_unit_0149");
    runtime.register_function(0x08A5AB54u, &recomp_unit_0149, "recomp_unit_0149");
    runtime.register_function(0x08A5AB68u, &recomp_unit_0149, "recomp_unit_0149");
    runtime.register_function(0x08A5AB70u, &recomp_unit_0149, "recomp_unit_0149");
    runtime.register_function(0x08A5AB7Cu, &recomp_unit_0149, "recomp_unit_0149");
    runtime.register_function(0x08A5AB88u, &recomp_unit_0149, "recomp_unit_0149");
    runtime.register_function(0x08A5AB9Cu, &recomp_unit_0149, "recomp_unit_0149");
    runtime.register_function(0x08A5ABA4u, &recomp_unit_0149, "recomp_unit_0149");
    runtime.register_function(0x08A5ABB0u, &recomp_unit_0149, "recomp_unit_0149");
    runtime.register_function(0x08A5ABBCu, &recomp_unit_0149, "recomp_unit_0149");
    runtime.register_function(0x08A5ABD0u, &recomp_unit_0149, "recomp_unit_0149");
    runtime.register_function(0x08A5ABD8u, &recomp_unit_0149, "recomp_unit_0149");
    runtime.register_function(0x08A5ABE4u, &recomp_unit_0149, "recomp_unit_0149");
    runtime.register_function(0x08A5ABF0u, &recomp_unit_0149, "recomp_unit_0149");
    runtime.register_function(0x08A5AC04u, &recomp_unit_0149, "recomp_unit_0149");
    runtime.register_function(0x08A5AC0Cu, &recomp_unit_0149, "recomp_unit_0149");
    runtime.register_function(0x08A5AC18u, &recomp_unit_0149, "recomp_unit_0149");
    runtime.register_function(0x08A5AC24u, &recomp_unit_0149, "recomp_unit_0149");
    runtime.register_function(0x08A5AC38u, &recomp_unit_0149, "recomp_unit_0149");
    runtime.register_function(0x08A5AC40u, &recomp_unit_0149, "recomp_unit_0149");
    runtime.register_function(0x08A5AC4Cu, &recomp_unit_0149, "recomp_unit_0149");
    runtime.register_function(0x08A5AC58u, &recomp_unit_0149, "recomp_unit_0149");
    runtime.register_function(0x08A5AC6Cu, &recomp_unit_0149, "recomp_unit_0149");
    runtime.register_function(0x08A5AC74u, &recomp_unit_0149, "recomp_unit_0149");
    runtime.register_function(0x08A5AC80u, &recomp_unit_0149, "recomp_unit_0149");
    runtime.register_function(0x08A5AC8Cu, &recomp_unit_0149, "recomp_unit_0149");
    runtime.register_function(0x08A5ACA0u, &recomp_unit_0149, "recomp_unit_0149");
    runtime.register_function(0x08A5ACB0u, &recomp_unit_0149, "recomp_unit_0149");
    runtime.register_function(0x08A5ACC8u, &recomp_unit_0149, "recomp_unit_0149");
    runtime.register_function(0x08A5ACDCu, &recomp_unit_0149, "recomp_unit_0149");
    runtime.register_function(0x08A5ACECu, &recomp_unit_0149, "recomp_unit_0149");
    runtime.register_function(0x08A5ACF4u, &recomp_unit_0149, "recomp_unit_0149");
    runtime.register_function(0x08A5ACFCu, &recomp_unit_0149, "recomp_unit_0149");
    runtime.register_function(0x08A5AD10u, &recomp_unit_0149, "recomp_unit_0149");
    runtime.register_function(0x08A5AD20u, &recomp_unit_0149, "recomp_unit_0149");
    runtime.register_function(0x08A5AD3Cu, &recomp_unit_0149, "recomp_unit_0149");
    runtime.register_function(0x08A5AD44u, &recomp_unit_0149, "recomp_unit_0149");
    runtime.register_function(0x08A5AD60u, &recomp_unit_0149, "recomp_unit_0149");
    runtime.register_function(0x08A5AD68u, &recomp_unit_0149, "recomp_unit_0149");
    runtime.register_function(0x08A5AD74u, &recomp_unit_0149, "recomp_unit_0149");
    runtime.register_function(0x08A5AD80u, &recomp_unit_0149, "recomp_unit_0149");
    runtime.register_function(0x08A5ADA0u, &recomp_unit_0149, "recomp_unit_0149");
    runtime.register_function(0x08A5ADA8u, &recomp_unit_0149, "recomp_unit_0149");
    runtime.register_function(0x08A5ADB4u, &recomp_unit_0149, "recomp_unit_0149");
    runtime.register_function(0x08A5ADC0u, &recomp_unit_0149, "recomp_unit_0149");
    runtime.register_function(0x08A5ADD8u, &recomp_unit_0149, "recomp_unit_0149");
    runtime.register_function(0x08A5ADF0u, &recomp_unit_0149, "recomp_unit_0149");
    runtime.register_function(0x08A5AE08u, &recomp_unit_0149, "recomp_unit_0149");
    runtime.register_function(0x08A5AE20u, &recomp_unit_0149, "recomp_unit_0149");
    runtime.register_function(0x08A5AE34u, &recomp_unit_0149, "recomp_unit_0149");
    runtime.register_function(0x08A5AE64u, &recomp_unit_0149, "recomp_unit_0149");
    runtime.register_function(0x08A5AE7Cu, &recomp_unit_0149, "recomp_unit_0149");
    runtime.register_function(0x08A5AE94u, &recomp_unit_0149, "recomp_unit_0149");
    runtime.register_function(0x08A5AEACu, &recomp_unit_0149, "recomp_unit_0149");
    runtime.register_function(0x08A5AEB8u, &recomp_unit_0149, "recomp_unit_0149");
    runtime.register_function(0x08A5AEC0u, &recomp_unit_0149, "recomp_unit_0149");
    runtime.register_function(0x08A5AECCu, &recomp_unit_0149, "recomp_unit_0149");
    runtime.register_function(0x08A5AED4u, &recomp_unit_0149, "recomp_unit_0149");
    runtime.register_function(0x08A5AEF0u, &recomp_unit_0149, "recomp_unit_0149");
    runtime.register_function(0x08A5AF0Cu, &recomp_unit_0149, "recomp_unit_0149");
    runtime.register_function(0x08A5AF28u, &recomp_unit_0149, "recomp_unit_0149");
    runtime.register_function(0x08A5AF44u, &recomp_unit_0149, "recomp_unit_0149");
    runtime.register_function(0x08A5AF60u, &recomp_unit_0149, "recomp_unit_0149");
    runtime.register_function(0x08A5AF7Cu, &recomp_unit_0149, "recomp_unit_0149");
    runtime.register_function(0x08A5AF98u, &recomp_unit_0149, "recomp_unit_0149");
    runtime.register_function(0x08A5AFB4u, &recomp_unit_0149, "recomp_unit_0149");
    runtime.register_function(0x08A5AFD0u, &recomp_unit_0149, "recomp_unit_0149");
    runtime.register_function(0x08A5AFECu, &recomp_unit_0149, "recomp_unit_0149");
    runtime.register_function(0x08A5B008u, &recomp_unit_0149, "recomp_unit_0149");
    runtime.register_function(0x08A5B024u, &recomp_unit_0149, "recomp_unit_0149");
    runtime.register_function(0x08A5B040u, &recomp_unit_0149, "recomp_unit_0149");
    runtime.register_function(0x08A5B05Cu, &recomp_unit_0149, "recomp_unit_0149");
    runtime.register_function(0x08A5B0CCu, &recomp_unit_0149, "recomp_unit_0149");
    runtime.register_function(0x08A5B108u, &recomp_unit_0149, "recomp_unit_0149");
    runtime.register_function(0x08A5B134u, &recomp_unit_0149, "recomp_unit_0149");
    runtime.register_function(0x08A5B150u, &recomp_unit_0149, "recomp_unit_0149");
    runtime.register_function(0x08A5B16Cu, &recomp_unit_0149, "recomp_unit_0149");
    runtime.register_function(0x08A5B188u, &recomp_unit_0149, "recomp_unit_0149");
    runtime.register_function(0x08A5B1B4u, &recomp_unit_0149, "recomp_unit_0149");
    runtime.register_function(0x08A5B1DCu, &recomp_unit_0149, "recomp_unit_0149");
    runtime.register_function(0x08A5B1F8u, &recomp_unit_0149, "recomp_unit_0149");
    runtime.register_function(0x08A5B214u, &recomp_unit_0149, "recomp_unit_0149");
    runtime.register_function(0x08A5B230u, &recomp_unit_0149, "recomp_unit_0149");
    runtime.register_function(0x08A5B24Cu, &recomp_unit_0149, "recomp_unit_0149");
    runtime.register_function(0x08A5B268u, &recomp_unit_0149, "recomp_unit_0149");
    runtime.register_function(0x08A5B284u, &recomp_unit_0149, "recomp_unit_0149");
    runtime.register_function(0x08A5B2A0u, &recomp_unit_0149, "recomp_unit_0149");
    runtime.register_function(0x08A5B2BCu, &recomp_unit_0149, "recomp_unit_0149");
    runtime.register_function(0x08A5B2D0u, &recomp_unit_0149, "recomp_unit_0149");
    runtime.register_function(0x08A5B340u, &recomp_unit_0149, "recomp_unit_0149");
    runtime.register_function(0x08A5B364u, &recomp_unit_0149, "recomp_unit_0149");
    runtime.register_function(0x08A5B3C4u, &recomp_unit_0149, "recomp_unit_0149");
    runtime.register_function(0x08A5B3E0u, &recomp_unit_0149, "recomp_unit_0149");
    runtime.register_function(0x08A5B3E8u, &recomp_unit_0149, "recomp_unit_0149");
    runtime.register_function(0x08A5B3F0u, &recomp_unit_0149, "recomp_unit_0149");
    runtime.register_function(0x08A5B3FCu, &recomp_unit_0149, "recomp_unit_0149");
    runtime.register_function(0x08A5B408u, &recomp_unit_0149, "recomp_unit_0149");
    runtime.register_function(0x08A5B45Cu, &recomp_unit_0149, "recomp_unit_0149");
    runtime.register_function(0x08A5B47Cu, &recomp_unit_0149, "recomp_unit_0149");
    runtime.register_function(0x08A5B488u, &recomp_unit_0149, "recomp_unit_0149");
    runtime.register_function(0x08A5B4CCu, &recomp_unit_0149, "recomp_unit_0149");
    runtime.register_function(0x08A5B574u, &recomp_unit_0149, "recomp_unit_0149");
    runtime.register_function(0x08A5B580u, &recomp_unit_0149, "recomp_unit_0149");
    runtime.register_function(0x08A5B590u, &recomp_unit_0149, "recomp_unit_0149");
    runtime.register_function(0x08A5B5A0u, &recomp_unit_0149, "recomp_unit_0149");
    runtime.register_function(0x08A5B5A8u, &recomp_unit_0149, "recomp_unit_0149");
    runtime.register_function(0x08A5B5C0u, &recomp_unit_0149, "recomp_unit_0149");
    runtime.register_function(0x08A5B5CCu, &recomp_unit_0149, "recomp_unit_0149");
    runtime.register_function(0x08A5B5DCu, &recomp_unit_0149, "recomp_unit_0149");
    runtime.register_function(0x08A5B5ECu, &recomp_unit_0149, "recomp_unit_0149");
    runtime.register_function(0x08A5B5F4u, &recomp_unit_0149, "recomp_unit_0149");
    runtime.register_function(0x08A5B600u, &recomp_unit_0149, "recomp_unit_0149");
    runtime.register_function(0x08A5B638u, &recomp_unit_0149, "recomp_unit_0149");
    runtime.register_function(0x08A5B658u, &recomp_unit_0149, "recomp_unit_0149");
    runtime.register_function(0x08A5B6D0u, &recomp_unit_0149, "recomp_unit_0149");
    runtime.register_function(0x08A5B6D4u, &recomp_unit_0149, "recomp_unit_0149");
    runtime.register_function(0x08A5B6E0u, &recomp_unit_0149, "recomp_unit_0149");
    runtime.register_function(0x08A5B6E4u, &recomp_unit_0149, "recomp_unit_0149");
    runtime.register_function(0x08A5B6F0u, &recomp_unit_0149, "recomp_unit_0149");
    runtime.register_function(0x08A5B6F4u, &recomp_unit_0149, "recomp_unit_0149");
    runtime.register_function(0x08A5B6FCu, &recomp_unit_0149, "recomp_unit_0149");
    runtime.register_function(0x08A5B70Cu, &recomp_unit_0149, "recomp_unit_0149");
    runtime.register_function(0x08A5B718u, &recomp_unit_0149, "recomp_unit_0149");
    runtime.register_function(0x08A5B724u, &recomp_unit_0149, "recomp_unit_0149");
    runtime.register_function(0x08A5B72Cu, &recomp_unit_0149, "recomp_unit_0149");
    runtime.register_function(0x08A5B774u, &recomp_unit_0149, "recomp_unit_0149");
    runtime.register_function(0x08A5B7A4u, &recomp_unit_0149, "recomp_unit_0149");
    runtime.register_function(0x08A5B7BCu, &recomp_unit_0149, "recomp_unit_0149");
    runtime.register_function(0x08A5B7D8u, &recomp_unit_0149, "recomp_unit_0149");
    runtime.register_function(0x08A5B830u, &recomp_unit_0149, "recomp_unit_0149");
    runtime.register_function(0x08A5B86Cu, &recomp_unit_0149, "recomp_unit_0149");
    runtime.register_function(0x08A5B974u, &recomp_unit_0149, "recomp_unit_0149");
    runtime.register_function(0x08A5B9BCu, &recomp_unit_0149, "recomp_unit_0149");
    runtime.register_function(0x08A5B9DCu, &recomp_unit_0149, "recomp_unit_0149");
    runtime.register_function(0x08A5B9F4u, &recomp_unit_0149, "recomp_unit_0149");
    runtime.register_function(0x08A5BA0Cu, &recomp_unit_0149, "recomp_unit_0149");
    runtime.register_function(0x08A5BA24u, &recomp_unit_0149, "recomp_unit_0149");
    runtime.register_function(0x08A5BA3Cu, &recomp_unit_0149, "recomp_unit_0149");
    runtime.register_function(0x08A5BA54u, &recomp_unit_0149, "recomp_unit_0149");
    runtime.register_function(0x08A5BA80u, &recomp_unit_0149, "recomp_unit_0149");
    runtime.register_function(0x08A5BA98u, &recomp_unit_0149, "recomp_unit_0149");
    runtime.register_function(0x08A5BAB0u, &recomp_unit_0149, "recomp_unit_0149");
    runtime.register_function(0x08A5BAC8u, &recomp_unit_0149, "recomp_unit_0149");
    runtime.register_function(0x08A5BAE0u, &recomp_unit_0149, "recomp_unit_0149");
    runtime.register_function(0x08A5BAF8u, &recomp_unit_0149, "recomp_unit_0149");
    runtime.register_function(0x08A5BB40u, &recomp_unit_0149, "recomp_unit_0149");
    runtime.register_function(0x08A5BB58u, &recomp_unit_0149, "recomp_unit_0149");
    runtime.register_function(0x08A5BB6Cu, &recomp_unit_0149, "recomp_unit_0149");
    runtime.register_function(0x08A5BBC4u, &recomp_unit_0149, "recomp_unit_0149");
    runtime.register_function(0x08A5BBDCu, &recomp_unit_0149, "recomp_unit_0149");
    runtime.register_function(0x08A5BBF0u, &recomp_unit_0149, "recomp_unit_0149");
    runtime.register_function(0x08A5BC18u, &recomp_unit_0149, "recomp_unit_0149");
    runtime.register_function(0x08A5BC24u, &recomp_unit_0149, "recomp_unit_0149");
    runtime.register_function(0x08A5BC2Cu, &recomp_unit_0149, "recomp_unit_0149");
    runtime.register_function(0x08A5BC40u, &recomp_unit_0149, "recomp_unit_0149");
    runtime.register_function(0x08A5BC5Cu, &recomp_unit_0149, "recomp_unit_0149");
    runtime.register_function(0x08A5BC70u, &recomp_unit_0149, "recomp_unit_0149");
    runtime.register_function(0x08A5BC84u, &recomp_unit_0149, "recomp_unit_0149");
    runtime.register_function(0x08A5BC98u, &recomp_unit_0149, "recomp_unit_0149");
    runtime.register_function(0x08A5BCACu, &recomp_unit_0149, "recomp_unit_0149");
    runtime.register_function(0x08A5BCC0u, &recomp_unit_0149, "recomp_unit_0149");
    runtime.register_function(0x08A5BCD4u, &recomp_unit_0149, "recomp_unit_0149");
    runtime.register_function(0x08A5BCE8u, &recomp_unit_0149, "recomp_unit_0149");
    runtime.register_function(0x08A5BCFCu, &recomp_unit_0149, "recomp_unit_0149");
    runtime.register_function(0x08A5BD10u, &recomp_unit_0149, "recomp_unit_0149");
    runtime.register_function(0x08A5BD24u, &recomp_unit_0149, "recomp_unit_0149");
    runtime.register_function(0x08A5BD38u, &recomp_unit_0149, "recomp_unit_0149");
    runtime.register_function(0x08A5BD4Cu, &recomp_unit_0149, "recomp_unit_0149");
    runtime.register_function(0x08A5BD60u, &recomp_unit_0149, "recomp_unit_0149");
    runtime.register_function(0x08A5BD74u, &recomp_unit_0149, "recomp_unit_0149");
    runtime.register_function(0x08A5BD88u, &recomp_unit_0149, "recomp_unit_0149");
    runtime.register_function(0x08A5BD9Cu, &recomp_unit_0149, "recomp_unit_0149");
    runtime.register_function(0x08A5BDB0u, &recomp_unit_0149, "recomp_unit_0149");
    runtime.register_function(0x08A5BDC4u, &recomp_unit_0149, "recomp_unit_0149");
    runtime.register_function(0x08A5BDD8u, &recomp_unit_0149, "recomp_unit_0149");
    runtime.register_function(0x08A5BDECu, &recomp_unit_0149, "recomp_unit_0149");
    runtime.register_function(0x08A5BE00u, &recomp_unit_0149, "recomp_unit_0149");
    runtime.register_function(0x08A5BE14u, &recomp_unit_0149, "recomp_unit_0149");
    runtime.register_function(0x08A5BE24u, &recomp_unit_0149, "recomp_unit_0149");
    runtime.register_function(0x08A5BE44u, &recomp_unit_0149, "recomp_unit_0149");
    runtime.register_function(0x08A5BE54u, &recomp_unit_0149, "recomp_unit_0149");
    runtime.register_function(0x08A5BE5Cu, &recomp_unit_0149, "recomp_unit_0149");
    runtime.register_function(0x08A5BE64u, &recomp_unit_0149, "recomp_unit_0149");
    runtime.register_function(0x08A5BE70u, &recomp_unit_0149, "recomp_unit_0149");
    runtime.register_function(0x08A5BE84u, &recomp_unit_0149, "recomp_unit_0149");
    runtime.register_function(0x08A5BEBCu, &recomp_unit_0149, "recomp_unit_0149");
    runtime.register_function(0x08A5BED4u, &recomp_unit_0149, "recomp_unit_0149");
    runtime.register_function(0x08A5BEE8u, &recomp_unit_0149, "recomp_unit_0149");
    runtime.register_function(0x08A5BEF8u, &recomp_unit_0149, "recomp_unit_0149");
    runtime.register_function(0x08A5BF0Cu, &recomp_unit_0149, "recomp_unit_0149");
    runtime.register_function(0x08A5BF20u, &recomp_unit_0149, "recomp_unit_0149");
    runtime.register_function(0x08A5BF30u, &recomp_unit_0149, "recomp_unit_0149");
    runtime.register_function(0x08A5BF44u, &recomp_unit_0149, "recomp_unit_0149");
    runtime.register_function(0x08A5BF58u, &recomp_unit_0149, "recomp_unit_0149");
    runtime.register_function(0x08A5BF6Cu, &recomp_unit_0149, "recomp_unit_0149");
    runtime.register_function(0x08A5BF7Cu, &recomp_unit_0149, "recomp_unit_0149");
    runtime.register_function(0x08A5BF90u, &recomp_unit_0149, "recomp_unit_0149");
    runtime.register_function(0x08A5BFA4u, &recomp_unit_0149, "recomp_unit_0149");
    runtime.register_function(0x08A5BFB8u, &recomp_unit_0149, "recomp_unit_0149");
    runtime.register_function(0x08A5BFC8u, &recomp_unit_0149, "recomp_unit_0149");
    runtime.register_function(0x08A5BFDCu, &recomp_unit_0149, "recomp_unit_0149");
    runtime.register_function(0x08A5BFF0u, &recomp_unit_0149, "recomp_unit_0149");
}
} // namespace psprecomp
