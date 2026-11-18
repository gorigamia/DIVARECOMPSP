#include "psprecomp/runtime.hpp"
#include "generated_units.hpp"
#include <bit>
#include <cmath>
#include <cstdint>
#include <limits>

namespace psprecomp {
static const std::uint16_t kEntryIds_recomp_unit_0014[4094] = {
    1, 0, 0, 0, 2, 0, 0, 3, 0, 0, 0, 0, 0, 0, 0, 0, 4, 0, 0, 5, 0, 6, 0, 0, 0, 7, 0, 8, 0, 0, 0, 0,
    0, 9, 0, 10, 0, 11, 0, 0, 0, 12, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 13, 0, 0, 0, 0, 0, 0, 0, 0, 14, 0, 0, 0, 0, 0, 0, 15, 0, 16, 0, 0, 0, 17,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 18,
    0, 0, 0, 0, 0, 0, 0, 0, 19, 0, 0, 0, 0, 0, 0, 0, 20, 0, 0, 0, 21, 0, 0, 22, 0, 23, 0, 24, 0, 0, 0, 0,
    0, 0, 0, 25, 0, 0, 0, 26, 0, 0, 0, 0, 0, 0, 0, 0, 0, 27, 0, 0, 0, 0, 0, 0, 0, 0, 28, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 29, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 30, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 31, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 32, 0, 0, 0, 0, 0, 0, 0, 0, 33, 0, 0, 0, 0, 0, 34,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 35, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 36, 0, 0, 0, 0, 0, 0, 0, 37, 0, 0, 0, 38, 0, 0, 0, 0, 0, 39, 0, 0, 0, 0,
    40, 0, 0, 0, 0, 0, 0, 0, 0, 0, 41, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 42, 0, 0, 0, 0, 0, 0, 0, 0, 43, 0, 0, 0, 0, 0, 44, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 45, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 46, 0, 0, 0, 0, 0, 0, 0, 47, 0, 0, 0, 48, 0, 0, 0, 0, 0, 0, 49, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 50, 0, 0, 0, 0, 0, 0, 0, 0, 51, 0, 0,
    0, 52, 0, 0, 0, 0, 53, 0, 0, 0, 0, 54, 0, 0, 55, 0, 56, 0, 0, 0, 0, 57, 0, 0, 58, 0, 59, 0, 0, 0, 0, 60,
    0, 0, 61, 0, 0, 0, 0, 0, 62, 63, 0, 0, 0, 0, 0, 0, 0, 64, 0, 0, 65, 0, 0, 0, 66, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 67, 0, 0, 68, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 69, 0, 70, 0, 0,
    0, 71, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 72, 0, 73, 0, 0, 0, 0, 0, 0, 74, 0, 0, 0, 75,
    0, 0, 0, 0, 0, 76, 0, 0, 0, 77, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 78, 0, 0, 0, 0, 0, 0, 0, 79, 0, 0, 0, 80, 0, 0, 0, 81, 0, 0, 0, 0, 0, 82, 0,
    0, 0, 83, 0, 0, 0, 0, 0, 0, 84, 0, 0, 0, 0, 85, 0, 86, 0, 87, 0, 0, 0, 88, 0, 0, 89, 0, 0, 90, 0, 91, 0,
    92, 93, 0, 0, 0, 0, 0, 0, 94, 0, 0, 0, 0, 95, 96, 0, 97, 0, 98, 0, 0, 0, 99, 0, 0, 0, 0, 100, 0, 0, 0, 101,
    0, 0, 0, 102, 0, 0, 0, 103, 0, 0, 0, 104, 0, 0, 0, 105, 0, 0, 0, 0, 106, 0, 0, 0, 107, 0, 0, 0, 108, 0, 0, 0,
    109, 0, 0, 0, 0, 110, 0, 0, 0, 111, 0, 112, 0, 113, 0, 0, 114, 0, 115, 0, 0, 116, 0, 0, 117, 0, 118, 0, 0, 119, 0, 0,
    120, 0, 121, 0, 122, 0, 123, 0, 124, 0, 125, 0, 126, 0, 0, 127, 0, 128, 0, 129, 0, 130, 0, 0, 131, 0, 132, 0, 133, 0, 134, 0,
    0, 135, 0, 136, 0, 137, 0, 138, 0, 0, 139, 0, 140, 0, 0, 141, 0, 142, 0, 143, 0, 144, 0, 0, 0, 0, 0, 145, 0, 146, 0, 147,
    0, 148, 0, 149, 0, 150, 0, 151, 0, 0, 0, 0, 152, 0, 0, 0, 0, 153, 0, 154, 0, 155, 0, 156, 0, 0, 0, 0, 0, 157, 0, 0,
    0, 0, 158, 0, 0, 159, 0, 0, 160, 0, 0, 161, 0, 0, 162, 0, 0, 163, 0, 0, 164, 0, 0, 165, 0, 0, 166, 167, 0, 0, 168, 0,
    169, 0, 0, 0, 0, 170, 0, 0, 171, 172, 0, 173, 0, 0, 0, 174, 175, 0, 176, 177, 0, 178, 0, 0, 0, 0, 0, 0, 0, 0, 0, 179,
    0, 0, 0, 0, 0, 180, 0, 0, 0, 0, 0, 0, 181, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 182, 0, 0, 0, 0, 0,
    0, 0, 0, 183, 0, 0, 0, 184, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 185, 0, 186, 0, 0, 187, 0, 0,
    0, 0, 0, 0, 0, 188, 0, 189, 0, 190, 0, 191, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 192, 0, 193, 0, 194, 0, 0, 0, 0, 0,
    0, 0, 195, 0, 196, 0, 197, 0, 198, 0, 199, 0, 0, 0, 200, 0, 0, 0, 0, 0, 0, 0, 201, 0, 202, 0, 203, 0, 0, 204, 0, 0,
    205, 0, 0, 206, 0, 207, 0, 208, 0, 209, 0, 0, 210, 0, 0, 211, 0, 212, 0, 0, 213, 0, 214, 0, 0, 215, 0, 216, 0, 0, 0, 0,
    0, 0, 0, 0, 217, 0, 0, 0, 0, 0, 0, 218, 0, 0, 219, 0, 0, 0, 0, 0, 0, 0, 0, 220, 0, 221, 0, 0, 222, 0, 0, 0,
    0, 0, 0, 0, 223, 0, 0, 0, 0, 0, 224, 0, 0, 0, 225, 0, 0, 0, 0, 0, 0, 0, 226, 0, 0, 0, 0, 0, 0, 227, 0, 0,
    228, 0, 229, 0, 0, 0, 0, 230, 0, 231, 0, 232, 0, 0, 233, 0, 234, 235, 0, 236, 237, 0, 0, 0, 0, 0, 0, 238, 0, 0, 0, 0,
    239, 0, 0, 0, 0, 240, 0, 0, 0, 0, 241, 0, 242, 0, 243, 0, 244, 0, 245, 0, 246, 0, 247, 0, 0, 0, 0, 0, 0, 248, 0, 249,
    0, 0, 250, 0, 251, 252, 0, 0, 0, 0, 253, 0, 0, 254, 0, 255, 0, 0, 256, 0, 257, 0, 0, 0, 0, 0, 0, 0, 0, 258, 0, 259,
    260, 0, 261, 0, 0, 0, 0, 0, 262, 0, 0, 0, 0, 263, 0, 0, 0, 0, 264, 0, 0, 0, 0, 265, 0, 0, 0, 266, 0, 267, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 268, 0, 0, 0, 0, 0, 0, 269, 0, 0, 0, 0, 270, 0, 0, 271, 0, 272, 0, 0, 273,
    0, 274, 0, 0, 0, 275, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 276, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 277, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 278, 0, 0, 0, 279, 0, 280, 0, 0, 0, 281, 0, 0, 0, 282, 0,
    283, 0, 0, 284, 0, 0, 0, 0, 0, 0, 0, 285, 0, 0, 286, 0, 287, 0, 0, 288, 0, 0, 0, 0, 289, 0, 0, 290, 0, 0, 0, 0,
    291, 0, 0, 292, 0, 0, 0, 0, 293, 0, 0, 294, 0, 0, 0, 295, 0, 0, 296, 0, 0, 0, 0, 297, 0, 0, 298, 0, 0, 0, 299, 0,
    0, 0, 0, 300, 0, 0, 301, 0, 0, 0, 0, 0, 0, 0, 302, 0, 303, 304, 0, 0, 0, 0, 305, 0, 0, 306, 0, 0, 0, 307, 0, 308,
    0, 0, 309, 0, 0, 0, 0, 0, 310, 0, 0, 0, 311, 0, 0, 312, 313, 0, 0, 314, 0, 0, 0, 0, 0, 0, 0, 0, 0, 315, 0, 0,
    0, 316, 0, 0, 0, 0, 0, 0, 0, 0, 0, 317, 0, 0, 318, 0, 0, 0, 0, 0, 0, 319, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 320, 0, 0, 0, 0, 0, 0, 0, 321, 322, 0, 323, 0, 0, 0, 0, 0, 0, 0, 324, 0, 0, 0, 0, 0, 0, 325, 0, 326, 0,
    0, 0, 0, 0, 0, 327, 328, 0, 0, 329, 0, 0, 330, 0, 0, 0, 0, 0, 0, 331, 0, 332, 0, 333, 334, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 335, 0, 336, 0, 337, 0, 338, 0, 0, 0, 339, 0, 0, 340, 0, 341, 342, 0, 343, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 344, 0, 0, 345, 0, 0, 346, 0, 347, 0, 348, 0, 0, 0, 0, 0, 349, 0, 0, 350, 0, 0, 0, 351, 0, 0, 0, 352, 0,
    353, 354, 0, 0, 355, 0, 0, 0, 0, 356, 0, 0, 0, 0, 357, 358, 0, 0, 359, 0, 0, 0, 0, 0, 0, 0, 0, 360, 0, 0, 0, 361,
    0, 0, 362, 0, 0, 363, 0, 0, 364, 365, 0, 366, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 367,
    0, 0, 368, 0, 369, 0, 0, 370, 0, 371, 0, 0, 372, 0, 373, 0, 374, 0, 0, 0, 375, 0, 376, 377, 0, 378, 0, 379, 0, 380, 0, 0,
    381, 382, 0, 0, 0, 0, 0, 0, 0, 0, 383, 0, 0, 384, 0, 385, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 386, 0, 387, 0, 388, 0,
    389, 0, 390, 391, 0, 0, 0, 0, 392, 0, 0, 0, 0, 0, 0, 0, 0, 0, 393, 0, 394, 0, 0, 395, 0, 0, 0, 396, 0, 397, 0, 0,
    0, 0, 0, 0, 0, 0, 398, 399, 0, 0, 0, 0, 0, 0, 0, 0, 400, 0, 0, 401, 402, 0, 0, 403, 0, 404, 0, 0, 0, 0, 0, 405,
    0, 406, 407, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 408, 0, 0, 0, 0, 409, 0, 0, 410, 0, 0, 411, 0, 412, 0, 0, 413, 414,
    0, 415, 0, 0, 0, 0, 0, 0, 0, 0, 0, 416, 0, 0, 417, 0, 0, 0, 0, 0, 418, 0, 0, 419, 0, 420, 0, 421, 0, 422, 0, 0,
    423, 0, 0, 0, 0, 0, 0, 0, 424, 0, 425, 0, 426, 0, 427, 0, 428, 0, 429, 0, 430, 0, 431, 0, 0, 0, 0, 432, 0, 0, 0, 433,
    0, 0, 434, 0, 0, 435, 0, 436, 0, 0, 0, 0, 437, 438, 0, 439, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 440, 441, 0, 0, 442, 443, 0, 0, 0, 0, 0, 0, 444, 445, 0, 0, 0, 446, 0, 0, 0, 0, 447, 0, 0, 448, 0, 449,
    0, 450, 0, 0, 451, 0, 0, 0, 452, 0, 453, 0, 0, 454, 0, 0, 0, 455, 456, 0, 457, 0, 0, 458, 0, 0, 0, 0, 0, 0, 459, 0,
    460, 461, 0, 0, 0, 0, 0, 0, 0, 462, 463, 0, 0, 464, 465, 0, 0, 466, 467, 0, 0, 0, 468, 0, 0, 0, 0, 0, 0, 0, 469, 0,
    0, 0, 0, 470, 0, 471, 472, 0, 473, 474, 0, 0, 0, 0, 0, 0, 475, 0, 0, 0, 0, 0, 0, 476, 0, 477, 0, 0, 478, 0, 479, 480,
    0, 0, 0, 0, 481, 0, 0, 0, 0, 482, 0, 0, 0, 0, 0, 483, 0, 484, 0, 0, 485, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 486, 0, 487, 0, 488, 0, 489, 0, 490, 0, 491, 0, 0, 0, 492, 0, 0, 493, 0, 0, 494, 0, 0, 495, 0, 0, 496, 0, 0, 497, 0,
    0, 0, 498, 0, 0, 0, 0, 0, 0, 0, 499, 0, 0, 0, 500, 0, 0, 0, 0, 0, 501, 0, 0, 0, 0, 0, 502, 0, 0, 0, 503, 0,
    0, 0, 0, 0, 504, 0, 0, 0, 0, 0, 505, 0, 0, 0, 506, 0, 0, 0, 0, 0, 507, 0, 0, 0, 0, 0, 508, 0, 0, 0, 509, 0,
    0, 0, 0, 0, 510, 0, 0, 0, 0, 0, 511, 0, 512, 0, 513, 0, 0, 0, 0, 0, 514, 0, 0, 515, 0, 0, 0, 516, 0, 0, 0, 0,
    0, 517, 0, 0, 518, 0, 0, 0, 519, 0, 0, 0, 0, 0, 520, 0, 0, 521, 0, 0, 0, 522, 0, 0, 0, 0, 0, 523, 0, 0, 524, 0,
    0, 0, 525, 0, 0, 0, 0, 0, 526, 0, 0, 527, 0, 0, 0, 528, 0, 0, 0, 0, 0, 529, 0, 0, 530, 0, 0, 0, 0, 0, 0, 531,
    0, 0, 532, 0, 0, 0, 533, 0, 0, 0, 0, 0, 0, 0, 534, 0, 0, 535, 0, 0, 0, 536, 0, 0, 0, 0, 0, 0, 0, 537, 0, 0,
    538, 0, 0, 0, 539, 0, 0, 0, 0, 0, 0, 0, 540, 0, 0, 541, 0, 0, 0, 542, 0, 0, 0, 0, 0, 0, 0, 543, 0, 0, 544, 0,
    0, 0, 545, 0, 0, 0, 0, 0, 0, 0, 546, 0, 0, 547, 0, 0, 0, 548, 0, 0, 0, 549, 0, 0, 0, 0, 0, 0, 550, 0, 0, 551,
    0, 0, 552, 0, 0, 0, 0, 0, 0, 553, 0, 0, 554, 0, 0, 555, 0, 0, 0, 0, 0, 0, 556, 0, 0, 557, 0, 0, 558, 0, 0, 0,
    0, 0, 0, 559, 0, 0, 560, 0, 0, 561, 0, 0, 0, 0, 0, 0, 562, 0, 0, 563, 0, 0, 564, 0, 0, 0, 0, 0, 0, 565, 0, 0,
    566, 0, 0, 567, 0, 0, 0, 0, 568, 0, 0, 569, 0, 0, 570, 0, 0, 0, 0, 571, 0, 0, 572, 0, 0, 573, 0, 0, 0, 0, 574, 0,
    0, 575, 0, 0, 576, 0, 0, 0, 0, 577, 0, 0, 578, 0, 0, 579, 0, 0, 0, 0, 580, 0, 0, 581, 0, 0, 582, 0, 0, 0, 0, 583,
    0, 0, 584, 0, 0, 0, 585, 0, 0, 586, 0, 0, 0, 0, 0, 587, 0, 0, 588, 0, 0, 0, 0, 0, 589, 0, 0, 590, 0, 0, 0, 0,
    0, 591, 0, 0, 592, 0, 0, 0, 0, 0, 593, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 594, 0, 0, 0, 0, 0, 595, 0, 0, 0, 0,
    596, 0, 0, 0, 0, 597, 0, 0, 598, 0, 0, 0, 0, 0, 599, 0, 0, 0, 0, 0, 600, 0, 0, 0, 0, 601, 0, 0, 0, 0, 602, 0,
    0, 0, 0, 603, 0, 0, 0, 0, 0, 604, 0, 0, 0, 0, 0, 0, 0, 605, 0, 0, 0, 0, 606, 0, 0, 0, 0, 607, 0, 0, 0, 608,
    0, 0, 0, 0, 0, 609, 0, 0, 610, 0, 611, 0, 612, 0, 0, 0, 0, 0, 0, 0, 0, 0, 613, 0, 614, 0, 0, 0, 615, 0, 0, 616,
    0, 617, 0, 618, 0, 0, 0, 619, 0, 0, 620, 0, 621, 0, 622, 0, 0, 0, 623, 0, 0, 624, 0, 625, 0, 0, 0, 0, 626, 0, 0, 627,
    0, 0, 0, 0, 628, 0, 629, 0, 0, 630, 0, 0, 631, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 632,
    0, 633, 0, 634, 0, 635, 0, 636, 0, 637, 0, 638, 0, 639, 0, 640, 0, 0, 0, 641, 0, 0, 0, 0, 0, 642, 0, 0, 0, 0, 0, 643,
    0, 0, 0, 644, 0, 0, 0, 0, 0, 645, 0, 0, 0, 0, 0, 646, 0, 0, 0, 647, 0, 0, 0, 0, 0, 648, 0, 0, 0, 0, 0, 649,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 650, 0, 0, 651, 0, 0, 0, 0, 652, 0, 0, 0, 0, 0, 0, 0, 0, 653, 654,
    0, 0, 0, 0, 0, 655, 0, 656, 0, 0, 0, 0, 0, 0, 0, 0, 0, 657, 0, 0, 658, 0, 659, 0, 0, 0, 0, 0, 0, 660, 0, 661,
    0, 662, 0, 0, 0, 0, 0, 0, 663, 0, 0, 0, 0, 0, 0, 0, 664, 0, 665, 0, 0, 666, 0, 0, 0, 0, 667, 0, 0, 0, 668, 0,
    0, 669, 0, 0, 670, 0, 0, 671, 0, 0, 0, 0, 0, 672, 0, 673, 0, 0, 674, 0, 0, 0, 0, 675, 0, 0, 676, 0, 0, 677, 0, 0,
    0, 678, 0, 0, 679, 0, 0, 0, 0, 0, 680, 0, 0, 0, 681, 0, 0, 682, 0, 0, 683, 0, 0, 684, 0, 0, 0, 0, 0, 685, 0, 0,
    0, 686, 0, 0, 687, 0, 0, 688, 0, 0, 689, 0, 0, 0, 0, 0, 690, 0, 691, 0, 0, 692, 0, 0, 0, 0, 693, 0, 0, 694, 0, 0,
    695, 0, 0, 696, 0, 0, 697, 0, 0, 0, 0, 0, 698, 0, 699, 0, 0, 700, 0, 0, 0, 0, 701, 0, 0, 702, 0, 0, 703, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 704, 0, 0, 0, 705, 0, 0, 0, 0, 706, 0, 0, 0, 707, 0, 0, 0, 0, 708, 0, 0, 0, 709, 0, 0,
    0, 0, 710, 0, 0, 0, 711, 0, 0, 0, 0, 712, 0, 0, 0, 713, 0, 0, 0, 0, 714, 0, 0, 0, 715, 0, 0, 0, 0, 716, 0, 0,
    717, 0, 0, 0, 0, 0, 718, 0, 0, 0, 0, 719, 0, 0, 0, 0, 720, 0, 0, 0, 0, 721, 0, 0, 0, 0, 722, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 723, 0, 0, 724, 0, 0, 0, 0, 0, 725, 0, 0, 726, 0, 0, 0, 0, 0, 727, 0, 0, 728, 0, 0, 0, 0, 0, 729,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 730, 0, 731, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 732, 0, 0, 0, 733, 0, 0,
    734, 0, 735, 0, 0, 736, 0, 0, 0, 737, 738, 0, 0, 739, 0, 0, 740, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 741, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 742, 0, 0, 0, 0, 0, 0, 0, 0, 743, 0, 0, 0, 0,
    0, 0, 0, 0, 744, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 745, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 746,
    0, 747, 0, 0, 748, 0, 0, 749, 0, 0, 750, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    751, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 752, 0, 0, 0, 0, 0, 0, 0, 0, 753, 0, 0, 0, 0, 0, 0, 0, 0, 754, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 755, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 756, 0, 757, 758, 0, 0, 0,
    0, 0, 759, 0, 760, 0, 761, 762, 763, 0, 0, 764, 0, 765, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    766, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 767, 0, 0, 0, 0, 0, 0, 0, 0, 768, 0, 0, 0, 0, 0, 0, 0, 0, 769, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 770, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 771, 0, 772, 0, 0, 773, 0,
    774, 775, 776, 0, 0, 0, 0, 0, 777, 0, 778, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 779, 0, 0, 0, 780, 0, 0, 781, 0,
    0, 782, 783, 0, 784, 0, 0, 785, 0, 786, 0, 787, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 788, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 789, 0, 0, 0, 0, 0, 0, 0, 0, 790, 0, 0, 0, 0, 0, 0, 0, 0, 791, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 792, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 793, 794, 0, 0, 0, 0, 0, 0, 795, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 796, 0, 0, 0, 0, 0, 0, 797, 0, 0, 0, 0, 0, 0, 798, 0, 0, 799, 0, 0, 0, 0,
    0, 0, 800, 0, 0, 0, 801, 0, 0, 0, 0, 0, 0, 802, 0, 0, 0, 0, 0, 0, 803, 0, 0, 804, 0, 0, 0, 0, 0, 0, 805, 0,
    0, 0, 806, 0, 0, 0, 0, 0, 0, 0, 0, 807, 0, 0, 0, 0, 0, 0, 808, 0, 0, 0, 0, 0, 0, 0, 0, 809, 0, 0, 0, 810,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 811, 0, 0, 0, 812, 0, 0, 813, 0, 0, 0, 0, 0, 0, 814, 0, 0, 0, 0, 815, 0, 0, 0,
    0, 0, 0, 816, 0, 0, 0, 817, 0, 0, 0, 0, 0, 818, 0, 0, 0, 819, 0, 0, 0, 0, 0, 820, 0, 0, 0, 821, 0, 0, 0, 0,
    0, 822, 0, 0, 0, 823, 0, 0, 0, 0, 0, 824, 0, 0, 0, 0, 825, 0, 0, 0, 0, 0, 826, 0, 0, 0, 827, 0, 0, 0, 0, 0,
    828, 0, 0, 0, 829, 0, 0, 0, 0, 0, 830, 0, 0, 0, 0, 831, 0, 0, 832, 0, 0, 0, 0, 0, 0, 833, 0, 0, 834, 0, 0, 0,
    0, 835, 0, 0, 836, 0, 0, 0, 0, 837, 0, 0, 838, 0, 0, 0, 0, 0, 839, 0, 0, 0, 840, 0, 841, 0, 842, 0, 843, 0, 0, 0,
    0, 0, 0, 844, 0, 0, 0, 0, 0, 0, 845, 0, 0, 846, 0, 0, 0, 0, 0, 0, 847, 0, 0, 848, 0, 0, 0, 0, 0, 0, 849, 0,
    0, 850, 0, 0, 0, 0, 0, 0, 851, 0, 0, 852, 0, 0, 0, 0, 0, 0, 0, 853, 0, 0, 854, 0, 0, 0, 0, 0, 0, 855, 0, 0,
    856, 0, 0, 0, 0, 0, 0, 857, 0, 0, 0, 858, 0, 0, 859, 0, 0, 860, 0, 0, 0, 0, 0, 0, 0, 0, 0, 861, 0, 0, 0, 0,
    0, 0, 0, 0, 862, 0, 863, 0, 0, 864, 0, 865, 0, 866, 0, 867, 0, 868, 0, 869, 0, 870, 0, 871, 0, 0, 0, 872, 0, 873,
};
void recomp_unit_0014_entry(Runtime &rt, AllegrexContext &ctx, std::uint16_t direct_entry_id, GuestMemory::AotFastView &aot_mem) {
    std::uint32_t jump_target = 0u;
    std::uint32_t local_transfers = 0u;
    std::uint32_t local_pc = ctx.pc;
    std::uint32_t entry_id = direct_entry_id;
LOCAL_DISPATCH:
    {
    if (entry_id == 0u) {
        const std::uint32_t entry_delta = local_pc - 0x0883C004u;
        entry_id = (entry_delta < 16376u && (entry_delta & 3u) == 0u) ? kEntryIds_recomp_unit_0014[entry_delta >> 2u] : 0u;
    }
    switch (entry_id) {
    case 1u: goto L_0883C004;
    case 2u: goto L_0883C014;
    case 3u: goto L_0883C020;
    case 4u: goto L_0883C044;
    case 5u: goto L_0883C050;
    case 6u: goto L_0883C058;
    case 7u: goto L_0883C068;
    case 8u: goto L_0883C070;
    case 9u: goto L_0883C088;
    case 10u: goto L_0883C090;
    case 11u: goto L_0883C098;
    case 12u: goto L_0883C0A8;
    case 13u: goto L_0883C128;
    case 14u: goto L_0883C14C;
    case 15u: goto L_0883C168;
    case 16u: goto L_0883C170;
    case 17u: goto L_0883C180;
    case 18u: goto L_0883C200;
    case 19u: goto L_0883C224;
    case 20u: goto L_0883C244;
    case 21u: goto L_0883C254;
    case 22u: goto L_0883C260;
    case 23u: goto L_0883C268;
    case 24u: goto L_0883C270;
    case 25u: goto L_0883C290;
    case 26u: goto L_0883C2A0;
    case 27u: goto L_0883C2C8;
    case 28u: goto L_0883C2EC;
    case 29u: goto L_0883C368;
    case 30u: goto L_0883C394;
    case 31u: goto L_0883C3C8;
    case 32u: goto L_0883C444;
    case 33u: goto L_0883C468;
    case 34u: goto L_0883C480;
    case 35u: goto L_0883C4AC;
    case 36u: goto L_0883C528;
    case 37u: goto L_0883C548;
    case 38u: goto L_0883C558;
    case 39u: goto L_0883C570;
    case 40u: goto L_0883C584;
    case 41u: goto L_0883C5AC;
    case 42u: goto L_0883C628;
    case 43u: goto L_0883C64C;
    case 44u: goto L_0883C664;
    case 45u: goto L_0883C690;
    case 46u: goto L_0883C70C;
    case 47u: goto L_0883C72C;
    case 48u: goto L_0883C73C;
    case 49u: goto L_0883C758;
    case 50u: goto L_0883C7D4;
    case 51u: goto L_0883C7F8;
    case 52u: goto L_0883C808;
    case 53u: goto L_0883C81C;
    case 54u: goto L_0883C830;
    case 55u: goto L_0883C83C;
    case 56u: goto L_0883C844;
    case 57u: goto L_0883C858;
    case 58u: goto L_0883C864;
    case 59u: goto L_0883C86C;
    case 60u: goto L_0883C880;
    case 61u: goto L_0883C88C;
    case 62u: goto L_0883C8A4;
    case 63u: goto L_0883C8A8;
    case 64u: goto L_0883C8C8;
    case 65u: goto L_0883C8D4;
    case 66u: goto L_0883C8E4;
    case 67u: goto L_0883C930;
    case 68u: goto L_0883C93C;
    case 69u: goto L_0883C970;
    case 70u: goto L_0883C978;
    case 71u: goto L_0883C988;
    case 72u: goto L_0883C9CC;
    case 73u: goto L_0883C9D4;
    case 74u: goto L_0883C9F0;
    case 75u: goto L_0883CA00;
    case 76u: goto L_0883CA18;
    case 77u: goto L_0883CA28;
    case 78u: goto L_0883CAA4;
    case 79u: goto L_0883CAC4;
    case 80u: goto L_0883CAD4;
    case 81u: goto L_0883CAE4;
    case 82u: goto L_0883CAFC;
    case 83u: goto L_0883CB0C;
    case 84u: goto L_0883CB28;
    case 85u: goto L_0883CB3C;
    case 86u: goto L_0883CB44;
    case 87u: goto L_0883CB4C;
    case 88u: goto L_0883CB5C;
    case 89u: goto L_0883CB68;
    case 90u: goto L_0883CB74;
    case 91u: goto L_0883CB7C;
    case 92u: goto L_0883CB84;
    case 93u: goto L_0883CB88;
    case 94u: goto L_0883CBA4;
    case 95u: goto L_0883CBB8;
    case 96u: goto L_0883CBBC;
    case 97u: goto L_0883CBC4;
    case 98u: goto L_0883CBCC;
    case 99u: goto L_0883CBDC;
    case 100u: goto L_0883CBF0;
    case 101u: goto L_0883CC00;
    case 102u: goto L_0883CC10;
    case 103u: goto L_0883CC20;
    case 104u: goto L_0883CC30;
    case 105u: goto L_0883CC40;
    case 106u: goto L_0883CC54;
    case 107u: goto L_0883CC64;
    case 108u: goto L_0883CC74;
    case 109u: goto L_0883CC84;
    case 110u: goto L_0883CC98;
    case 111u: goto L_0883CCA8;
    case 112u: goto L_0883CCB0;
    case 113u: goto L_0883CCB8;
    case 114u: goto L_0883CCC4;
    case 115u: goto L_0883CCCC;
    case 116u: goto L_0883CCD8;
    case 117u: goto L_0883CCE4;
    case 118u: goto L_0883CCEC;
    case 119u: goto L_0883CCF8;
    case 120u: goto L_0883CD04;
    case 121u: goto L_0883CD0C;
    case 122u: goto L_0883CD14;
    case 123u: goto L_0883CD1C;
    case 124u: goto L_0883CD24;
    case 125u: goto L_0883CD2C;
    case 126u: goto L_0883CD34;
    case 127u: goto L_0883CD40;
    case 128u: goto L_0883CD48;
    case 129u: goto L_0883CD50;
    case 130u: goto L_0883CD58;
    case 131u: goto L_0883CD64;
    case 132u: goto L_0883CD6C;
    case 133u: goto L_0883CD74;
    case 134u: goto L_0883CD7C;
    case 135u: goto L_0883CD88;
    case 136u: goto L_0883CD90;
    case 137u: goto L_0883CD98;
    case 138u: goto L_0883CDA0;
    case 139u: goto L_0883CDAC;
    case 140u: goto L_0883CDB4;
    case 141u: goto L_0883CDC0;
    case 142u: goto L_0883CDC8;
    case 143u: goto L_0883CDD0;
    case 144u: goto L_0883CDD8;
    case 145u: goto L_0883CDF0;
    case 146u: goto L_0883CDF8;
    case 147u: goto L_0883CE00;
    case 148u: goto L_0883CE08;
    case 149u: goto L_0883CE10;
    case 150u: goto L_0883CE18;
    case 151u: goto L_0883CE20;
    case 152u: goto L_0883CE34;
    case 153u: goto L_0883CE48;
    case 154u: goto L_0883CE50;
    case 155u: goto L_0883CE58;
    case 156u: goto L_0883CE60;
    case 157u: goto L_0883CE78;
    case 158u: goto L_0883CE8C;
    case 159u: goto L_0883CE98;
    case 160u: goto L_0883CEA4;
    case 161u: goto L_0883CEB0;
    case 162u: goto L_0883CEBC;
    case 163u: goto L_0883CEC8;
    case 164u: goto L_0883CED4;
    case 165u: goto L_0883CEE0;
    case 166u: goto L_0883CEEC;
    case 167u: goto L_0883CEF0;
    case 168u: goto L_0883CEFC;
    case 169u: goto L_0883CF04;
    case 170u: goto L_0883CF18;
    case 171u: goto L_0883CF24;
    case 172u: goto L_0883CF28;
    case 173u: goto L_0883CF30;
    case 174u: goto L_0883CF40;
    case 175u: goto L_0883CF44;
    case 176u: goto L_0883CF4C;
    case 177u: goto L_0883CF50;
    case 178u: goto L_0883CF58;
    case 179u: goto L_0883CF80;
    case 180u: goto L_0883CF98;
    case 181u: goto L_0883CFB4;
    case 182u: goto L_0883CFEC;
    case 183u: goto L_0883D010;
    case 184u: goto L_0883D020;
    case 185u: goto L_0883D064;
    case 186u: goto L_0883D06C;
    case 187u: goto L_0883D078;
    case 188u: goto L_0883D098;
    case 189u: goto L_0883D0A0;
    case 190u: goto L_0883D0A8;
    case 191u: goto L_0883D0B0;
    case 192u: goto L_0883D0DC;
    case 193u: goto L_0883D0E4;
    case 194u: goto L_0883D0EC;
    case 195u: goto L_0883D10C;
    case 196u: goto L_0883D114;
    case 197u: goto L_0883D11C;
    case 198u: goto L_0883D124;
    case 199u: goto L_0883D12C;
    case 200u: goto L_0883D13C;
    case 201u: goto L_0883D15C;
    case 202u: goto L_0883D164;
    case 203u: goto L_0883D16C;
    case 204u: goto L_0883D178;
    case 205u: goto L_0883D184;
    case 206u: goto L_0883D190;
    case 207u: goto L_0883D198;
    case 208u: goto L_0883D1A0;
    case 209u: goto L_0883D1A8;
    case 210u: goto L_0883D1B4;
    case 211u: goto L_0883D1C0;
    case 212u: goto L_0883D1C8;
    case 213u: goto L_0883D1D4;
    case 214u: goto L_0883D1DC;
    case 215u: goto L_0883D1E8;
    case 216u: goto L_0883D1F0;
    case 217u: goto L_0883D214;
    case 218u: goto L_0883D230;
    case 219u: goto L_0883D23C;
    case 220u: goto L_0883D260;
    case 221u: goto L_0883D268;
    case 222u: goto L_0883D274;
    case 223u: goto L_0883D294;
    case 224u: goto L_0883D2AC;
    case 225u: goto L_0883D2BC;
    case 226u: goto L_0883D2DC;
    case 227u: goto L_0883D2F8;
    case 228u: goto L_0883D304;
    case 229u: goto L_0883D30C;
    case 230u: goto L_0883D320;
    case 231u: goto L_0883D328;
    case 232u: goto L_0883D330;
    case 233u: goto L_0883D33C;
    case 234u: goto L_0883D344;
    case 235u: goto L_0883D348;
    case 236u: goto L_0883D350;
    case 237u: goto L_0883D354;
    case 238u: goto L_0883D370;
    case 239u: goto L_0883D384;
    case 240u: goto L_0883D398;
    case 241u: goto L_0883D3AC;
    case 242u: goto L_0883D3B4;
    case 243u: goto L_0883D3BC;
    case 244u: goto L_0883D3C4;
    case 245u: goto L_0883D3CC;
    case 246u: goto L_0883D3D4;
    case 247u: goto L_0883D3DC;
    case 248u: goto L_0883D3F8;
    case 249u: goto L_0883D400;
    case 250u: goto L_0883D40C;
    case 251u: goto L_0883D414;
    case 252u: goto L_0883D418;
    case 253u: goto L_0883D42C;
    case 254u: goto L_0883D438;
    case 255u: goto L_0883D440;
    case 256u: goto L_0883D44C;
    case 257u: goto L_0883D454;
    case 258u: goto L_0883D478;
    case 259u: goto L_0883D480;
    case 260u: goto L_0883D484;
    case 261u: goto L_0883D48C;
    case 262u: goto L_0883D4A4;
    case 263u: goto L_0883D4B8;
    case 264u: goto L_0883D4CC;
    case 265u: goto L_0883D4E0;
    case 266u: goto L_0883D4F0;
    case 267u: goto L_0883D4F8;
    case 268u: goto L_0883D530;
    case 269u: goto L_0883D54C;
    case 270u: goto L_0883D560;
    case 271u: goto L_0883D56C;
    case 272u: goto L_0883D574;
    case 273u: goto L_0883D580;
    case 274u: goto L_0883D588;
    case 275u: goto L_0883D598;
    case 276u: goto L_0883D5E8;
    case 277u: goto L_0883D618;
    case 278u: goto L_0883D644;
    case 279u: goto L_0883D654;
    case 280u: goto L_0883D65C;
    case 281u: goto L_0883D66C;
    case 282u: goto L_0883D67C;
    case 283u: goto L_0883D684;
    case 284u: goto L_0883D690;
    case 285u: goto L_0883D6B0;
    case 286u: goto L_0883D6BC;
    case 287u: goto L_0883D6C4;
    case 288u: goto L_0883D6D0;
    case 289u: goto L_0883D6E4;
    case 290u: goto L_0883D6F0;
    case 291u: goto L_0883D704;
    case 292u: goto L_0883D710;
    case 293u: goto L_0883D724;
    case 294u: goto L_0883D730;
    case 295u: goto L_0883D740;
    case 296u: goto L_0883D74C;
    case 297u: goto L_0883D760;
    case 298u: goto L_0883D76C;
    case 299u: goto L_0883D77C;
    case 300u: goto L_0883D790;
    case 301u: goto L_0883D79C;
    case 302u: goto L_0883D7BC;
    case 303u: goto L_0883D7C4;
    case 304u: goto L_0883D7C8;
    case 305u: goto L_0883D7DC;
    case 306u: goto L_0883D7E8;
    case 307u: goto L_0883D7F8;
    case 308u: goto L_0883D800;
    case 309u: goto L_0883D80C;
    case 310u: goto L_0883D824;
    case 311u: goto L_0883D834;
    case 312u: goto L_0883D840;
    case 313u: goto L_0883D844;
    case 314u: goto L_0883D850;
    case 315u: goto L_0883D878;
    case 316u: goto L_0883D888;
    case 317u: goto L_0883D8B0;
    case 318u: goto L_0883D8BC;
    case 319u: goto L_0883D8D8;
    case 320u: goto L_0883D90C;
    case 321u: goto L_0883D92C;
    case 322u: goto L_0883D930;
    case 323u: goto L_0883D938;
    case 324u: goto L_0883D958;
    case 325u: goto L_0883D974;
    case 326u: goto L_0883D97C;
    case 327u: goto L_0883D998;
    case 328u: goto L_0883D99C;
    case 329u: goto L_0883D9A8;
    case 330u: goto L_0883D9B4;
    case 331u: goto L_0883D9D0;
    case 332u: goto L_0883D9D8;
    case 333u: goto L_0883D9E0;
    case 334u: goto L_0883D9E4;
    case 335u: goto L_0883DA18;
    case 336u: goto L_0883DA20;
    case 337u: goto L_0883DA28;
    case 338u: goto L_0883DA30;
    case 339u: goto L_0883DA40;
    case 340u: goto L_0883DA4C;
    case 341u: goto L_0883DA54;
    case 342u: goto L_0883DA58;
    case 343u: goto L_0883DA60;
    case 344u: goto L_0883DA90;
    case 345u: goto L_0883DA9C;
    case 346u: goto L_0883DAA8;
    case 347u: goto L_0883DAB0;
    case 348u: goto L_0883DAB8;
    case 349u: goto L_0883DAD0;
    case 350u: goto L_0883DADC;
    case 351u: goto L_0883DAEC;
    case 352u: goto L_0883DAFC;
    case 353u: goto L_0883DB04;
    case 354u: goto L_0883DB08;
    case 355u: goto L_0883DB14;
    case 356u: goto L_0883DB28;
    case 357u: goto L_0883DB3C;
    case 358u: goto L_0883DB40;
    case 359u: goto L_0883DB4C;
    case 360u: goto L_0883DB70;
    case 361u: goto L_0883DB80;
    case 362u: goto L_0883DB8C;
    case 363u: goto L_0883DB98;
    case 364u: goto L_0883DBA4;
    case 365u: goto L_0883DBA8;
    case 366u: goto L_0883DBB0;
    case 367u: goto L_0883DC00;
    case 368u: goto L_0883DC0C;
    case 369u: goto L_0883DC14;
    case 370u: goto L_0883DC20;
    case 371u: goto L_0883DC28;
    case 372u: goto L_0883DC34;
    case 373u: goto L_0883DC3C;
    case 374u: goto L_0883DC44;
    case 375u: goto L_0883DC54;
    case 376u: goto L_0883DC5C;
    case 377u: goto L_0883DC60;
    case 378u: goto L_0883DC68;
    case 379u: goto L_0883DC70;
    case 380u: goto L_0883DC78;
    case 381u: goto L_0883DC84;
    case 382u: goto L_0883DC88;
    case 383u: goto L_0883DCAC;
    case 384u: goto L_0883DCB8;
    case 385u: goto L_0883DCC0;
    case 386u: goto L_0883DCEC;
    case 387u: goto L_0883DCF4;
    case 388u: goto L_0883DCFC;
    case 389u: goto L_0883DD04;
    case 390u: goto L_0883DD0C;
    case 391u: goto L_0883DD10;
    case 392u: goto L_0883DD24;
    case 393u: goto L_0883DD4C;
    case 394u: goto L_0883DD54;
    case 395u: goto L_0883DD60;
    case 396u: goto L_0883DD70;
    case 397u: goto L_0883DD78;
    case 398u: goto L_0883DD9C;
    case 399u: goto L_0883DDA0;
    case 400u: goto L_0883DDC4;
    case 401u: goto L_0883DDD0;
    case 402u: goto L_0883DDD4;
    case 403u: goto L_0883DDE0;
    case 404u: goto L_0883DDE8;
    case 405u: goto L_0883DE00;
    case 406u: goto L_0883DE08;
    case 407u: goto L_0883DE0C;
    case 408u: goto L_0883DE3C;
    case 409u: goto L_0883DE50;
    case 410u: goto L_0883DE5C;
    case 411u: goto L_0883DE68;
    case 412u: goto L_0883DE70;
    case 413u: goto L_0883DE7C;
    case 414u: goto L_0883DE80;
    case 415u: goto L_0883DE88;
    case 416u: goto L_0883DEB0;
    case 417u: goto L_0883DEBC;
    case 418u: goto L_0883DED4;
    case 419u: goto L_0883DEE0;
    case 420u: goto L_0883DEE8;
    case 421u: goto L_0883DEF0;
    case 422u: goto L_0883DEF8;
    case 423u: goto L_0883DF04;
    case 424u: goto L_0883DF24;
    case 425u: goto L_0883DF2C;
    case 426u: goto L_0883DF34;
    case 427u: goto L_0883DF3C;
    case 428u: goto L_0883DF44;
    case 429u: goto L_0883DF4C;
    case 430u: goto L_0883DF54;
    case 431u: goto L_0883DF5C;
    case 432u: goto L_0883DF70;
    case 433u: goto L_0883DF80;
    case 434u: goto L_0883DF8C;
    case 435u: goto L_0883DF98;
    case 436u: goto L_0883DFA0;
    case 437u: goto L_0883DFB4;
    case 438u: goto L_0883DFB8;
    case 439u: goto L_0883DFC0;
    case 440u: goto L_0883E014;
    case 441u: goto L_0883E018;
    case 442u: goto L_0883E024;
    case 443u: goto L_0883E028;
    case 444u: goto L_0883E044;
    case 445u: goto L_0883E048;
    case 446u: goto L_0883E058;
    case 447u: goto L_0883E06C;
    case 448u: goto L_0883E078;
    case 449u: goto L_0883E080;
    case 450u: goto L_0883E088;
    case 451u: goto L_0883E094;
    case 452u: goto L_0883E0A4;
    case 453u: goto L_0883E0AC;
    case 454u: goto L_0883E0B8;
    case 455u: goto L_0883E0C8;
    case 456u: goto L_0883E0CC;
    case 457u: goto L_0883E0D4;
    case 458u: goto L_0883E0E0;
    case 459u: goto L_0883E0FC;
    case 460u: goto L_0883E104;
    case 461u: goto L_0883E108;
    case 462u: goto L_0883E128;
    case 463u: goto L_0883E12C;
    case 464u: goto L_0883E138;
    case 465u: goto L_0883E13C;
    case 466u: goto L_0883E148;
    case 467u: goto L_0883E14C;
    case 468u: goto L_0883E15C;
    case 469u: goto L_0883E17C;
    case 470u: goto L_0883E190;
    case 471u: goto L_0883E198;
    case 472u: goto L_0883E19C;
    case 473u: goto L_0883E1A4;
    case 474u: goto L_0883E1A8;
    case 475u: goto L_0883E1C4;
    case 476u: goto L_0883E1E0;
    case 477u: goto L_0883E1E8;
    case 478u: goto L_0883E1F4;
    case 479u: goto L_0883E1FC;
    case 480u: goto L_0883E200;
    case 481u: goto L_0883E214;
    case 482u: goto L_0883E228;
    case 483u: goto L_0883E240;
    case 484u: goto L_0883E248;
    case 485u: goto L_0883E254;
    case 486u: goto L_0883E288;
    case 487u: goto L_0883E290;
    case 488u: goto L_0883E298;
    case 489u: goto L_0883E2A0;
    case 490u: goto L_0883E2A8;
    case 491u: goto L_0883E2B0;
    case 492u: goto L_0883E2C0;
    case 493u: goto L_0883E2CC;
    case 494u: goto L_0883E2D8;
    case 495u: goto L_0883E2E4;
    case 496u: goto L_0883E2F0;
    case 497u: goto L_0883E2FC;
    case 498u: goto L_0883E30C;
    case 499u: goto L_0883E32C;
    case 500u: goto L_0883E33C;
    case 501u: goto L_0883E354;
    case 502u: goto L_0883E36C;
    case 503u: goto L_0883E37C;
    case 504u: goto L_0883E394;
    case 505u: goto L_0883E3AC;
    case 506u: goto L_0883E3BC;
    case 507u: goto L_0883E3D4;
    case 508u: goto L_0883E3EC;
    case 509u: goto L_0883E3FC;
    case 510u: goto L_0883E414;
    case 511u: goto L_0883E42C;
    case 512u: goto L_0883E434;
    case 513u: goto L_0883E43C;
    case 514u: goto L_0883E454;
    case 515u: goto L_0883E460;
    case 516u: goto L_0883E470;
    case 517u: goto L_0883E488;
    case 518u: goto L_0883E494;
    case 519u: goto L_0883E4A4;
    case 520u: goto L_0883E4BC;
    case 521u: goto L_0883E4C8;
    case 522u: goto L_0883E4D8;
    case 523u: goto L_0883E4F0;
    case 524u: goto L_0883E4FC;
    case 525u: goto L_0883E50C;
    case 526u: goto L_0883E524;
    case 527u: goto L_0883E530;
    case 528u: goto L_0883E540;
    case 529u: goto L_0883E558;
    case 530u: goto L_0883E564;
    case 531u: goto L_0883E580;
    case 532u: goto L_0883E58C;
    case 533u: goto L_0883E59C;
    case 534u: goto L_0883E5BC;
    case 535u: goto L_0883E5C8;
    case 536u: goto L_0883E5D8;
    case 537u: goto L_0883E5F8;
    case 538u: goto L_0883E604;
    case 539u: goto L_0883E614;
    case 540u: goto L_0883E634;
    case 541u: goto L_0883E640;
    case 542u: goto L_0883E650;
    case 543u: goto L_0883E670;
    case 544u: goto L_0883E67C;
    case 545u: goto L_0883E68C;
    case 546u: goto L_0883E6AC;
    case 547u: goto L_0883E6B8;
    case 548u: goto L_0883E6C8;
    case 549u: goto L_0883E6D8;
    case 550u: goto L_0883E6F4;
    case 551u: goto L_0883E700;
    case 552u: goto L_0883E70C;
    case 553u: goto L_0883E728;
    case 554u: goto L_0883E734;
    case 555u: goto L_0883E740;
    case 556u: goto L_0883E75C;
    case 557u: goto L_0883E768;
    case 558u: goto L_0883E774;
    case 559u: goto L_0883E790;
    case 560u: goto L_0883E79C;
    case 561u: goto L_0883E7A8;
    case 562u: goto L_0883E7C4;
    case 563u: goto L_0883E7D0;
    case 564u: goto L_0883E7DC;
    case 565u: goto L_0883E7F8;
    case 566u: goto L_0883E804;
    case 567u: goto L_0883E810;
    case 568u: goto L_0883E824;
    case 569u: goto L_0883E830;
    case 570u: goto L_0883E83C;
    case 571u: goto L_0883E850;
    case 572u: goto L_0883E85C;
    case 573u: goto L_0883E868;
    case 574u: goto L_0883E87C;
    case 575u: goto L_0883E888;
    case 576u: goto L_0883E894;
    case 577u: goto L_0883E8A8;
    case 578u: goto L_0883E8B4;
    case 579u: goto L_0883E8C0;
    case 580u: goto L_0883E8D4;
    case 581u: goto L_0883E8E0;
    case 582u: goto L_0883E8EC;
    case 583u: goto L_0883E900;
    case 584u: goto L_0883E90C;
    case 585u: goto L_0883E91C;
    case 586u: goto L_0883E928;
    case 587u: goto L_0883E940;
    case 588u: goto L_0883E94C;
    case 589u: goto L_0883E964;
    case 590u: goto L_0883E970;
    case 591u: goto L_0883E988;
    case 592u: goto L_0883E994;
    case 593u: goto L_0883E9AC;
    case 594u: goto L_0883E9D8;
    case 595u: goto L_0883E9F0;
    case 596u: goto L_0883EA04;
    case 597u: goto L_0883EA18;
    case 598u: goto L_0883EA24;
    case 599u: goto L_0883EA3C;
    case 600u: goto L_0883EA54;
    case 601u: goto L_0883EA68;
    case 602u: goto L_0883EA7C;
    case 603u: goto L_0883EA90;
    case 604u: goto L_0883EAA8;
    case 605u: goto L_0883EAC8;
    case 606u: goto L_0883EADC;
    case 607u: goto L_0883EAF0;
    case 608u: goto L_0883EB00;
    case 609u: goto L_0883EB18;
    case 610u: goto L_0883EB24;
    case 611u: goto L_0883EB2C;
    case 612u: goto L_0883EB34;
    case 613u: goto L_0883EB5C;
    case 614u: goto L_0883EB64;
    case 615u: goto L_0883EB74;
    case 616u: goto L_0883EB80;
    case 617u: goto L_0883EB88;
    case 618u: goto L_0883EB90;
    case 619u: goto L_0883EBA0;
    case 620u: goto L_0883EBAC;
    case 621u: goto L_0883EBB4;
    case 622u: goto L_0883EBBC;
    case 623u: goto L_0883EBCC;
    case 624u: goto L_0883EBD8;
    case 625u: goto L_0883EBE0;
    case 626u: goto L_0883EBF4;
    case 627u: goto L_0883EC00;
    case 628u: goto L_0883EC14;
    case 629u: goto L_0883EC1C;
    case 630u: goto L_0883EC28;
    case 631u: goto L_0883EC34;
    case 632u: goto L_0883EC80;
    case 633u: goto L_0883EC88;
    case 634u: goto L_0883EC90;
    case 635u: goto L_0883EC98;
    case 636u: goto L_0883ECA0;
    case 637u: goto L_0883ECA8;
    case 638u: goto L_0883ECB0;
    case 639u: goto L_0883ECB8;
    case 640u: goto L_0883ECC0;
    case 641u: goto L_0883ECD0;
    case 642u: goto L_0883ECE8;
    case 643u: goto L_0883ED00;
    case 644u: goto L_0883ED10;
    case 645u: goto L_0883ED28;
    case 646u: goto L_0883ED40;
    case 647u: goto L_0883ED50;
    case 648u: goto L_0883ED68;
    case 649u: goto L_0883ED80;
    case 650u: goto L_0883EDB8;
    case 651u: goto L_0883EDC4;
    case 652u: goto L_0883EDD8;
    case 653u: goto L_0883EDFC;
    case 654u: goto L_0883EE00;
    case 655u: goto L_0883EE18;
    case 656u: goto L_0883EE20;
    case 657u: goto L_0883EE48;
    case 658u: goto L_0883EE54;
    case 659u: goto L_0883EE5C;
    case 660u: goto L_0883EE78;
    case 661u: goto L_0883EE80;
    case 662u: goto L_0883EE88;
    case 663u: goto L_0883EEA4;
    case 664u: goto L_0883EEC4;
    case 665u: goto L_0883EECC;
    case 666u: goto L_0883EED8;
    case 667u: goto L_0883EEEC;
    case 668u: goto L_0883EEFC;
    case 669u: goto L_0883EF08;
    case 670u: goto L_0883EF14;
    case 671u: goto L_0883EF20;
    case 672u: goto L_0883EF38;
    case 673u: goto L_0883EF40;
    case 674u: goto L_0883EF4C;
    case 675u: goto L_0883EF60;
    case 676u: goto L_0883EF6C;
    case 677u: goto L_0883EF78;
    case 678u: goto L_0883EF88;
    case 679u: goto L_0883EF94;
    case 680u: goto L_0883EFAC;
    case 681u: goto L_0883EFBC;
    case 682u: goto L_0883EFC8;
    case 683u: goto L_0883EFD4;
    case 684u: goto L_0883EFE0;
    case 685u: goto L_0883EFF8;
    case 686u: goto L_0883F008;
    case 687u: goto L_0883F014;
    case 688u: goto L_0883F020;
    case 689u: goto L_0883F02C;
    case 690u: goto L_0883F044;
    case 691u: goto L_0883F04C;
    case 692u: goto L_0883F058;
    case 693u: goto L_0883F06C;
    case 694u: goto L_0883F078;
    case 695u: goto L_0883F084;
    case 696u: goto L_0883F090;
    case 697u: goto L_0883F09C;
    case 698u: goto L_0883F0B4;
    case 699u: goto L_0883F0BC;
    case 700u: goto L_0883F0C8;
    case 701u: goto L_0883F0DC;
    case 702u: goto L_0883F0E8;
    case 703u: goto L_0883F0F4;
    case 704u: goto L_0883F120;
    case 705u: goto L_0883F130;
    case 706u: goto L_0883F144;
    case 707u: goto L_0883F154;
    case 708u: goto L_0883F168;
    case 709u: goto L_0883F178;
    case 710u: goto L_0883F18C;
    case 711u: goto L_0883F19C;
    case 712u: goto L_0883F1B0;
    case 713u: goto L_0883F1C0;
    case 714u: goto L_0883F1D4;
    case 715u: goto L_0883F1E4;
    case 716u: goto L_0883F1F8;
    case 717u: goto L_0883F204;
    case 718u: goto L_0883F21C;
    case 719u: goto L_0883F230;
    case 720u: goto L_0883F244;
    case 721u: goto L_0883F258;
    case 722u: goto L_0883F26C;
    case 723u: goto L_0883F294;
    case 724u: goto L_0883F2A0;
    case 725u: goto L_0883F2B8;
    case 726u: goto L_0883F2C4;
    case 727u: goto L_0883F2DC;
    case 728u: goto L_0883F2E8;
    case 729u: goto L_0883F300;
    case 730u: goto L_0883F334;
    case 731u: goto L_0883F33C;
    case 732u: goto L_0883F368;
    case 733u: goto L_0883F378;
    case 734u: goto L_0883F384;
    case 735u: goto L_0883F38C;
    case 736u: goto L_0883F398;
    case 737u: goto L_0883F3A8;
    case 738u: goto L_0883F3AC;
    case 739u: goto L_0883F3B8;
    case 740u: goto L_0883F3C4;
    case 741u: goto L_0883F41C;
    case 742u: goto L_0883F44C;
    case 743u: goto L_0883F470;
    case 744u: goto L_0883F494;
    case 745u: goto L_0883F4C4;
    case 746u: goto L_0883F500;
    case 747u: goto L_0883F508;
    case 748u: goto L_0883F514;
    case 749u: goto L_0883F520;
    case 750u: goto L_0883F52C;
    case 751u: goto L_0883F584;
    case 752u: goto L_0883F5B4;
    case 753u: goto L_0883F5D8;
    case 754u: goto L_0883F5FC;
    case 755u: goto L_0883F62C;
    case 756u: goto L_0883F668;
    case 757u: goto L_0883F670;
    case 758u: goto L_0883F674;
    case 759u: goto L_0883F68C;
    case 760u: goto L_0883F694;
    case 761u: goto L_0883F69C;
    case 762u: goto L_0883F6A0;
    case 763u: goto L_0883F6A4;
    case 764u: goto L_0883F6B0;
    case 765u: goto L_0883F6B8;
    case 766u: goto L_0883F704;
    case 767u: goto L_0883F734;
    case 768u: goto L_0883F758;
    case 769u: goto L_0883F77C;
    case 770u: goto L_0883F7AC;
    case 771u: goto L_0883F7E8;
    case 772u: goto L_0883F7F0;
    case 773u: goto L_0883F7FC;
    case 774u: goto L_0883F804;
    case 775u: goto L_0883F808;
    case 776u: goto L_0883F80C;
    case 777u: goto L_0883F824;
    case 778u: goto L_0883F82C;
    case 779u: goto L_0883F860;
    case 780u: goto L_0883F870;
    case 781u: goto L_0883F87C;
    case 782u: goto L_0883F888;
    case 783u: goto L_0883F88C;
    case 784u: goto L_0883F894;
    case 785u: goto L_0883F8A0;
    case 786u: goto L_0883F8A8;
    case 787u: goto L_0883F8B0;
    case 788u: goto L_0883F8F4;
    case 789u: goto L_0883F924;
    case 790u: goto L_0883F948;
    case 791u: goto L_0883F96C;
    case 792u: goto L_0883F99C;
    case 793u: goto L_0883F9D8;
    case 794u: goto L_0883F9DC;
    case 795u: goto L_0883F9F8;
    case 796u: goto L_0883FA2C;
    case 797u: goto L_0883FA48;
    case 798u: goto L_0883FA64;
    case 799u: goto L_0883FA70;
    case 800u: goto L_0883FA8C;
    case 801u: goto L_0883FA9C;
    case 802u: goto L_0883FAB8;
    case 803u: goto L_0883FAD4;
    case 804u: goto L_0883FAE0;
    case 805u: goto L_0883FAFC;
    case 806u: goto L_0883FB0C;
    case 807u: goto L_0883FB30;
    case 808u: goto L_0883FB4C;
    case 809u: goto L_0883FB70;
    case 810u: goto L_0883FB80;
    case 811u: goto L_0883FBA8;
    case 812u: goto L_0883FBB8;
    case 813u: goto L_0883FBC4;
    case 814u: goto L_0883FBE0;
    case 815u: goto L_0883FBF4;
    case 816u: goto L_0883FC10;
    case 817u: goto L_0883FC20;
    case 818u: goto L_0883FC38;
    case 819u: goto L_0883FC48;
    case 820u: goto L_0883FC60;
    case 821u: goto L_0883FC70;
    case 822u: goto L_0883FC88;
    case 823u: goto L_0883FC98;
    case 824u: goto L_0883FCB0;
    case 825u: goto L_0883FCC4;
    case 826u: goto L_0883FCDC;
    case 827u: goto L_0883FCEC;
    case 828u: goto L_0883FD04;
    case 829u: goto L_0883FD14;
    case 830u: goto L_0883FD2C;
    case 831u: goto L_0883FD40;
    case 832u: goto L_0883FD4C;
    case 833u: goto L_0883FD68;
    case 834u: goto L_0883FD74;
    case 835u: goto L_0883FD88;
    case 836u: goto L_0883FD94;
    case 837u: goto L_0883FDA8;
    case 838u: goto L_0883FDB4;
    case 839u: goto L_0883FDCC;
    case 840u: goto L_0883FDDC;
    case 841u: goto L_0883FDE4;
    case 842u: goto L_0883FDEC;
    case 843u: goto L_0883FDF4;
    case 844u: goto L_0883FE10;
    case 845u: goto L_0883FE2C;
    case 846u: goto L_0883FE38;
    case 847u: goto L_0883FE54;
    case 848u: goto L_0883FE60;
    case 849u: goto L_0883FE7C;
    case 850u: goto L_0883FE88;
    case 851u: goto L_0883FEA4;
    case 852u: goto L_0883FEB0;
    case 853u: goto L_0883FED0;
    case 854u: goto L_0883FEDC;
    case 855u: goto L_0883FEF8;
    case 856u: goto L_0883FF04;
    case 857u: goto L_0883FF20;
    case 858u: goto L_0883FF30;
    case 859u: goto L_0883FF3C;
    case 860u: goto L_0883FF48;
    case 861u: goto L_0883FF70;
    case 862u: goto L_0883FF94;
    case 863u: goto L_0883FF9C;
    case 864u: goto L_0883FFA8;
    case 865u: goto L_0883FFB0;
    case 866u: goto L_0883FFB8;
    case 867u: goto L_0883FFC0;
    case 868u: goto L_0883FFC8;
    case 869u: goto L_0883FFD0;
    case 870u: goto L_0883FFD8;
    case 871u: goto L_0883FFE0;
    case 872u: goto L_0883FFF0;
    case 873u: goto L_0883FFF8;
    default:
        if (local_transfers == 0u) rt.unsupported(ctx.pc, 0u, "invalid internal function entry");
        else ctx.pc = local_pc;
        return;
    }
    }
L_0883C004:
    ctx.set_gpr(4, ctx.gpr[19] + 0u);
    ctx.set_gpr(5, ctx.gpr[19] + static_cast<std::uint32_t>(2844));
    ctx.set_gpr(31, 0x0883C014u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0013_entry, 13u, 530u, 0x0883ACA0u>(ctx, &aot_mem) && ctx.pc == 0x0883C014u) goto L_0883C014;
    return;
L_0883C014:
    ctx.set_gpr(4, ctx.gpr[19] + 0u);
    ctx.set_gpr(31, 0x0883C020u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0013_entry, 13u, 624u, 0x0883B788u>(ctx, &aot_mem) && ctx.pc == 0x0883C020u) goto L_0883C020;
    return;
L_0883C020:
    ctx.set_gpr(3, rt.memory().aot_load32(ctx.gpr[19] + static_cast<std::uint32_t>(5792)));
    ctx.set_gpr(3, ctx.gpr[3] + static_cast<std::uint32_t>(10));
    ctx.set_gpr(5, ctx.gpr[3] >> 3u);
    ctx.set_gpr(3, rt.memory().aot_load32(ctx.gpr[19] + static_cast<std::uint32_t>(5796)));
    ctx.set_gpr(3, ctx.gpr[3] + static_cast<std::uint32_t>(10));
    ctx.set_gpr(4, ctx.gpr[3] >> 3u);
    ctx.set_gpr(1, ctx.gpr[5] < ctx.gpr[4] ? 1u : 0u);
    { const bool branch_taken = ctx.gpr[1] != 0u;
    // nop
      if (branch_taken) {
          goto L_0883C058;
      }
      goto L_0883C044;
    }
L_0883C044:
    ctx.set_gpr(5, ctx.gpr[4] + 0u);
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_0883C058;
      }
      goto L_0883C050;
    }
L_0883C050:
    ctx.set_gpr(4, ctx.gpr[17] + static_cast<std::uint32_t>(5));
    ctx.set_gpr(5, ctx.gpr[4] + 0u);
    goto L_0883C058;
L_0883C058:
    ctx.set_gpr(3, ctx.gpr[17] + static_cast<std::uint32_t>(4));
    ctx.set_gpr(1, ctx.gpr[5] < ctx.gpr[3] ? 1u : 0u);
    { const bool branch_taken = ctx.gpr[1] != 0u;
    // nop
      if (branch_taken) {
          goto L_0883C090;
      }
      goto L_0883C068;
    }
L_0883C068:
    { const bool branch_taken = ctx.gpr[18] == 0u;
    // nop
      if (branch_taken) {
          goto L_0883C090;
      }
      goto L_0883C070;
    }
L_0883C070:
    ctx.set_gpr(4, ctx.gpr[19] + 0u);
    ctx.set_gpr(5, ctx.gpr[18] + 0u);
    ctx.set_gpr(6, ctx.gpr[17] + 0u);
    ctx.set_gpr(7, ctx.gpr[16] + 0u);
    ctx.set_gpr(31, 0x0883C088u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0013_entry, 13u, 650u, 0x0883BB88u>(ctx, &aot_mem) && ctx.pc == 0x0883C088u) goto L_0883C088;
    return;
L_0883C088:
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_0883C254;
      }
      goto L_0883C090;
    }
L_0883C090:
    { const bool branch_taken = ctx.gpr[4] != ctx.gpr[5];
    // nop
      if (branch_taken) {
          goto L_0883C170;
      }
      goto L_0883C098;
    }
L_0883C098:
    ctx.set_gpr(3, rt.memory().aot_load32(ctx.gpr[19] + static_cast<std::uint32_t>(5812)));
    ctx.set_gpr(1, static_cast<std::int32_t>(ctx.gpr[3]) < 14 ? 1u : 0u);
    { const bool branch_taken = ctx.gpr[1] != 0u;
    // nop
      if (branch_taken) {
          goto L_0883C128;
      }
      goto L_0883C0A8;
    }
L_0883C0A8:
    ctx.set_gpr(5, ctx.gpr[16] + static_cast<std::uint32_t>(2));
    ctx.set_gpr(2, ctx.gpr[5] << (ctx.gpr[3] & 31u));
    ctx.set_gpr(3, ctx.gpr[2] & 65535u);
    ctx.set_gpr(2, rt.memory().aot_load16(ctx.gpr[19] + static_cast<std::uint32_t>(5808)));
    ctx.set_gpr(2, ctx.gpr[2] | ctx.gpr[3]);
    rt.memory().aot_store16(ctx.gpr[19] + static_cast<std::uint32_t>(5808), static_cast<std::uint16_t>(ctx.gpr[2]));
    ctx.set_gpr(4, rt.memory().aot_load16(ctx.gpr[19] + static_cast<std::uint32_t>(5808)));
    ctx.set_gpr(3, rt.memory().aot_load32(ctx.gpr[19] + static_cast<std::uint32_t>(20)));
    ctx.set_gpr(2, ctx.gpr[3] + static_cast<std::uint32_t>(1));
    rt.memory().aot_store32(ctx.gpr[19] + static_cast<std::uint32_t>(20), ctx.gpr[2]);
    ctx.set_gpr(2, rt.memory().aot_load32(ctx.gpr[19] + static_cast<std::uint32_t>(8)));
    ctx.set_gpr(2, ctx.gpr[2] + ctx.gpr[3]);
    rt.memory().aot_store8(ctx.gpr[2] + static_cast<std::uint32_t>(0), static_cast<std::uint8_t>(ctx.gpr[4]));
    ctx.set_gpr(2, rt.memory().aot_load16(ctx.gpr[19] + static_cast<std::uint32_t>(5808)));
    ctx.set_gpr(4, static_cast<std::uint32_t>(static_cast<std::int32_t>(ctx.gpr[2]) >> 8u));
    ctx.set_gpr(3, rt.memory().aot_load32(ctx.gpr[19] + static_cast<std::uint32_t>(20)));
    ctx.set_gpr(2, ctx.gpr[3] + static_cast<std::uint32_t>(1));
    rt.memory().aot_store32(ctx.gpr[19] + static_cast<std::uint32_t>(20), ctx.gpr[2]);
    ctx.set_gpr(2, rt.memory().aot_load32(ctx.gpr[19] + static_cast<std::uint32_t>(8)));
    ctx.set_gpr(2, ctx.gpr[2] + ctx.gpr[3]);
    rt.memory().aot_store8(ctx.gpr[2] + static_cast<std::uint32_t>(0), static_cast<std::uint8_t>(ctx.gpr[4]));
    ctx.set_gpr(3, rt.memory().aot_load32(ctx.gpr[19] + static_cast<std::uint32_t>(5812)));
    ctx.set_gpr(2, 0u + static_cast<std::uint32_t>(16));
    ctx.set_gpr(3, ctx.gpr[2] - ctx.gpr[3]);
    ctx.set_gpr(2, ctx.gpr[5] & 65535u);
    ctx.set_gpr(2, static_cast<std::uint32_t>(static_cast<std::int32_t>(ctx.gpr[2]) >> (ctx.gpr[3] & 31u)));
    rt.memory().aot_store16(ctx.gpr[19] + static_cast<std::uint32_t>(5808), static_cast<std::uint16_t>(ctx.gpr[2]));
    ctx.set_gpr(2, rt.memory().aot_load32(ctx.gpr[19] + static_cast<std::uint32_t>(5812)));
    ctx.set_gpr(2, ctx.gpr[2] + static_cast<std::uint32_t>(-13));
    rt.memory().aot_store32(ctx.gpr[19] + static_cast<std::uint32_t>(5812), ctx.gpr[2]);
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_0883C14C;
      }
      goto L_0883C128;
    }
L_0883C128:
    ctx.set_gpr(2, ctx.gpr[16] + static_cast<std::uint32_t>(2));
    ctx.set_gpr(2, ctx.gpr[2] << (ctx.gpr[3] & 31u));
    ctx.set_gpr(3, ctx.gpr[2] & 65535u);
    ctx.set_gpr(2, rt.memory().aot_load16(ctx.gpr[19] + static_cast<std::uint32_t>(5808)));
    ctx.set_gpr(2, ctx.gpr[2] | ctx.gpr[3]);
    rt.memory().aot_store16(ctx.gpr[19] + static_cast<std::uint32_t>(5808), static_cast<std::uint16_t>(ctx.gpr[2]));
    ctx.set_gpr(2, rt.memory().aot_load32(ctx.gpr[19] + static_cast<std::uint32_t>(5812)));
    ctx.set_gpr(2, ctx.gpr[2] + static_cast<std::uint32_t>(3));
    rt.memory().aot_store32(ctx.gpr[19] + static_cast<std::uint32_t>(5812), ctx.gpr[2]);
    goto L_0883C14C;
L_0883C14C:
    ctx.set_gpr(4, ctx.gpr[19] + 0u);
    ctx.set_gpr(5, 2225u << 16u);
    ctx.set_gpr(5, ctx.gpr[5] + static_cast<std::uint32_t>(5832));
    ctx.set_gpr(6, 2225u << 16u);
    ctx.set_gpr(6, ctx.gpr[6] + static_cast<std::uint32_t>(6984));
    ctx.set_gpr(31, 0x0883C168u);
    // nop
    goto L_0883C290;
L_0883C168:
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_0883C254;
      }
      goto L_0883C170;
    }
L_0883C170:
    ctx.set_gpr(4, rt.memory().aot_load32(ctx.gpr[19] + static_cast<std::uint32_t>(5812)));
    ctx.set_gpr(1, static_cast<std::int32_t>(ctx.gpr[4]) < 14 ? 1u : 0u);
    { const bool branch_taken = ctx.gpr[1] != 0u;
    // nop
      if (branch_taken) {
          goto L_0883C200;
      }
      goto L_0883C180;
    }
L_0883C180:
    ctx.set_gpr(6, ctx.gpr[16] + static_cast<std::uint32_t>(4));
    ctx.set_gpr(3, ctx.gpr[6] << (ctx.gpr[4] & 31u));
    ctx.set_gpr(4, ctx.gpr[3] & 65535u);
    ctx.set_gpr(3, rt.memory().aot_load16(ctx.gpr[19] + static_cast<std::uint32_t>(5808)));
    ctx.set_gpr(3, ctx.gpr[3] | ctx.gpr[4]);
    rt.memory().aot_store16(ctx.gpr[19] + static_cast<std::uint32_t>(5808), static_cast<std::uint16_t>(ctx.gpr[3]));
    ctx.set_gpr(5, rt.memory().aot_load16(ctx.gpr[19] + static_cast<std::uint32_t>(5808)));
    ctx.set_gpr(4, rt.memory().aot_load32(ctx.gpr[19] + static_cast<std::uint32_t>(20)));
    ctx.set_gpr(3, ctx.gpr[4] + static_cast<std::uint32_t>(1));
    rt.memory().aot_store32(ctx.gpr[19] + static_cast<std::uint32_t>(20), ctx.gpr[3]);
    ctx.set_gpr(3, rt.memory().aot_load32(ctx.gpr[19] + static_cast<std::uint32_t>(8)));
    ctx.set_gpr(3, ctx.gpr[3] + ctx.gpr[4]);
    rt.memory().aot_store8(ctx.gpr[3] + static_cast<std::uint32_t>(0), static_cast<std::uint8_t>(ctx.gpr[5]));
    ctx.set_gpr(3, rt.memory().aot_load16(ctx.gpr[19] + static_cast<std::uint32_t>(5808)));
    ctx.set_gpr(5, static_cast<std::uint32_t>(static_cast<std::int32_t>(ctx.gpr[3]) >> 8u));
    ctx.set_gpr(4, rt.memory().aot_load32(ctx.gpr[19] + static_cast<std::uint32_t>(20)));
    ctx.set_gpr(3, ctx.gpr[4] + static_cast<std::uint32_t>(1));
    rt.memory().aot_store32(ctx.gpr[19] + static_cast<std::uint32_t>(20), ctx.gpr[3]);
    ctx.set_gpr(3, rt.memory().aot_load32(ctx.gpr[19] + static_cast<std::uint32_t>(8)));
    ctx.set_gpr(3, ctx.gpr[3] + ctx.gpr[4]);
    rt.memory().aot_store8(ctx.gpr[3] + static_cast<std::uint32_t>(0), static_cast<std::uint8_t>(ctx.gpr[5]));
    ctx.set_gpr(4, rt.memory().aot_load32(ctx.gpr[19] + static_cast<std::uint32_t>(5812)));
    ctx.set_gpr(3, 0u + static_cast<std::uint32_t>(16));
    ctx.set_gpr(4, ctx.gpr[3] - ctx.gpr[4]);
    ctx.set_gpr(3, ctx.gpr[6] & 65535u);
    ctx.set_gpr(3, static_cast<std::uint32_t>(static_cast<std::int32_t>(ctx.gpr[3]) >> (ctx.gpr[4] & 31u)));
    rt.memory().aot_store16(ctx.gpr[19] + static_cast<std::uint32_t>(5808), static_cast<std::uint16_t>(ctx.gpr[3]));
    ctx.set_gpr(3, rt.memory().aot_load32(ctx.gpr[19] + static_cast<std::uint32_t>(5812)));
    ctx.set_gpr(3, ctx.gpr[3] + static_cast<std::uint32_t>(-13));
    rt.memory().aot_store32(ctx.gpr[19] + static_cast<std::uint32_t>(5812), ctx.gpr[3]);
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_0883C224;
      }
      goto L_0883C200;
    }
L_0883C200:
    ctx.set_gpr(3, ctx.gpr[16] + static_cast<std::uint32_t>(4));
    ctx.set_gpr(3, ctx.gpr[3] << (ctx.gpr[4] & 31u));
    ctx.set_gpr(4, ctx.gpr[3] & 65535u);
    ctx.set_gpr(3, rt.memory().aot_load16(ctx.gpr[19] + static_cast<std::uint32_t>(5808)));
    ctx.set_gpr(3, ctx.gpr[3] | ctx.gpr[4]);
    rt.memory().aot_store16(ctx.gpr[19] + static_cast<std::uint32_t>(5808), static_cast<std::uint16_t>(ctx.gpr[3]));
    ctx.set_gpr(3, rt.memory().aot_load32(ctx.gpr[19] + static_cast<std::uint32_t>(5812)));
    ctx.set_gpr(3, ctx.gpr[3] + static_cast<std::uint32_t>(3));
    rt.memory().aot_store32(ctx.gpr[19] + static_cast<std::uint32_t>(5812), ctx.gpr[3]);
    goto L_0883C224;
L_0883C224:
    ctx.set_gpr(3, rt.memory().aot_load32(ctx.gpr[19] + static_cast<std::uint32_t>(2836)));
    ctx.set_gpr(5, ctx.gpr[3] + static_cast<std::uint32_t>(1));
    ctx.set_gpr(3, rt.memory().aot_load32(ctx.gpr[19] + static_cast<std::uint32_t>(2848)));
    ctx.set_gpr(6, ctx.gpr[3] + static_cast<std::uint32_t>(1));
    ctx.set_gpr(7, ctx.gpr[2] + static_cast<std::uint32_t>(1));
    ctx.set_gpr(4, ctx.gpr[19] + 0u);
    ctx.set_gpr(31, 0x0883C244u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0013_entry, 13u, 632u, 0x0883B834u>(ctx, &aot_mem) && ctx.pc == 0x0883C244u) goto L_0883C244;
    return;
L_0883C244:
    ctx.set_gpr(5, ctx.gpr[19] + static_cast<std::uint32_t>(140));
    ctx.set_gpr(6, ctx.gpr[19] + static_cast<std::uint32_t>(2432));
    ctx.set_gpr(31, 0x0883C254u);
    // nop
    goto L_0883C290;
L_0883C254:
    ctx.set_gpr(4, ctx.gpr[19] + 0u);
    ctx.set_gpr(31, 0x0883C260u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0013_entry, 13u, 470u, 0x0883A7DCu>(ctx, &aot_mem) && ctx.pc == 0x0883C260u) goto L_0883C260;
    return;
L_0883C260:
    { const bool branch_taken = ctx.gpr[16] == 0u;
    // nop
      if (branch_taken) {
          goto L_0883C270;
      }
      goto L_0883C268;
    }
L_0883C268:
    ctx.set_gpr(31, 0x0883C270u);
    // nop
    goto L_0883C978;
L_0883C270:
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
L_0883C290:
    ctx.set_gpr(3, 0u + 0u);
    ctx.set_gpr(7, rt.memory().aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(5784)));
    { const bool branch_taken = ctx.gpr[7] == 0u;
    // nop
      if (branch_taken) {
          goto L_0883C73C;
      }
      goto L_0883C2A0;
    }
L_0883C2A0:
    ctx.set_gpr(8, ctx.gpr[3] << 1u);
    ctx.set_gpr(7, rt.memory().aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(5788)));
    ctx.set_gpr(7, ctx.gpr[7] + ctx.gpr[8]);
    ctx.set_gpr(12, rt.memory().aot_load16(ctx.gpr[7] + static_cast<std::uint32_t>(0)));
    ctx.set_gpr(7, rt.memory().aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(5776)));
    ctx.set_gpr(7, ctx.gpr[7] + ctx.gpr[3]);
    ctx.set_gpr(11, rt.memory().aot_load8(ctx.gpr[7] + static_cast<std::uint32_t>(0)));
    ctx.set_gpr(3, ctx.gpr[3] + static_cast<std::uint32_t>(1));
    { const bool branch_taken = ctx.gpr[12] != 0u;
    // nop
      if (branch_taken) {
          goto L_0883C394;
      }
      goto L_0883C2C8;
    }
L_0883C2C8:
    ctx.set_gpr(7, ctx.gpr[11] << 2u);
    ctx.set_gpr(11, ctx.gpr[7] + ctx.gpr[5]);
    ctx.set_gpr(9, rt.memory().aot_load16(ctx.gpr[11] + static_cast<std::uint32_t>(2)));
    ctx.set_gpr(10, rt.memory().aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(5812)));
    ctx.set_gpr(8, 0u + static_cast<std::uint32_t>(16));
    ctx.set_gpr(7, ctx.gpr[8] - ctx.gpr[9]);
    ctx.set_gpr(1, static_cast<std::int32_t>(ctx.gpr[7]) < static_cast<std::int32_t>(ctx.gpr[10]) ? 1u : 0u);
    { const bool branch_taken = ctx.gpr[1] == 0u;
    // nop
      if (branch_taken) {
          goto L_0883C368;
      }
      goto L_0883C2EC;
    }
L_0883C2EC:
    ctx.set_gpr(7, rt.memory().aot_load16(ctx.gpr[11] + static_cast<std::uint32_t>(0)));
    ctx.set_gpr(10, ctx.gpr[7] << (ctx.gpr[10] & 31u));
    ctx.set_gpr(11, ctx.gpr[10] & 65535u);
    ctx.set_gpr(10, rt.memory().aot_load16(ctx.gpr[4] + static_cast<std::uint32_t>(5808)));
    ctx.set_gpr(10, ctx.gpr[10] | ctx.gpr[11]);
    rt.memory().aot_store16(ctx.gpr[4] + static_cast<std::uint32_t>(5808), static_cast<std::uint16_t>(ctx.gpr[10]));
    ctx.set_gpr(12, rt.memory().aot_load16(ctx.gpr[4] + static_cast<std::uint32_t>(5808)));
    ctx.set_gpr(11, rt.memory().aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(20)));
    ctx.set_gpr(10, ctx.gpr[11] + static_cast<std::uint32_t>(1));
    rt.memory().aot_store32(ctx.gpr[4] + static_cast<std::uint32_t>(20), ctx.gpr[10]);
    ctx.set_gpr(10, rt.memory().aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(8)));
    ctx.set_gpr(10, ctx.gpr[10] + ctx.gpr[11]);
    rt.memory().aot_store8(ctx.gpr[10] + static_cast<std::uint32_t>(0), static_cast<std::uint8_t>(ctx.gpr[12]));
    ctx.set_gpr(10, rt.memory().aot_load16(ctx.gpr[4] + static_cast<std::uint32_t>(5808)));
    ctx.set_gpr(12, static_cast<std::uint32_t>(static_cast<std::int32_t>(ctx.gpr[10]) >> 8u));
    ctx.set_gpr(11, rt.memory().aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(20)));
    ctx.set_gpr(10, ctx.gpr[11] + static_cast<std::uint32_t>(1));
    rt.memory().aot_store32(ctx.gpr[4] + static_cast<std::uint32_t>(20), ctx.gpr[10]);
    ctx.set_gpr(10, rt.memory().aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(8)));
    ctx.set_gpr(10, ctx.gpr[10] + ctx.gpr[11]);
    rt.memory().aot_store8(ctx.gpr[10] + static_cast<std::uint32_t>(0), static_cast<std::uint8_t>(ctx.gpr[12]));
    ctx.set_gpr(10, rt.memory().aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(5812)));
    ctx.set_gpr(8, ctx.gpr[8] - ctx.gpr[10]);
    ctx.set_gpr(7, static_cast<std::uint32_t>(static_cast<std::int32_t>(ctx.gpr[7]) >> (ctx.gpr[8] & 31u)));
    rt.memory().aot_store16(ctx.gpr[4] + static_cast<std::uint32_t>(5808), static_cast<std::uint16_t>(ctx.gpr[7]));
    ctx.set_gpr(8, ctx.gpr[9] + static_cast<std::uint32_t>(-16));
    ctx.set_gpr(7, rt.memory().aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(5812)));
    ctx.set_gpr(7, ctx.gpr[7] + ctx.gpr[8]);
    rt.memory().aot_store32(ctx.gpr[4] + static_cast<std::uint32_t>(5812), ctx.gpr[7]);
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_0883C72C;
      }
      goto L_0883C368;
    }
L_0883C368:
    ctx.set_gpr(7, rt.memory().aot_load16(ctx.gpr[11] + static_cast<std::uint32_t>(0)));
    ctx.set_gpr(7, ctx.gpr[7] << (ctx.gpr[10] & 31u));
    ctx.set_gpr(8, ctx.gpr[7] & 65535u);
    ctx.set_gpr(7, rt.memory().aot_load16(ctx.gpr[4] + static_cast<std::uint32_t>(5808)));
    ctx.set_gpr(7, ctx.gpr[7] | ctx.gpr[8]);
    rt.memory().aot_store16(ctx.gpr[4] + static_cast<std::uint32_t>(5808), static_cast<std::uint16_t>(ctx.gpr[7]));
    ctx.set_gpr(7, rt.memory().aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(5812)));
    ctx.set_gpr(7, ctx.gpr[7] + ctx.gpr[9]);
    rt.memory().aot_store32(ctx.gpr[4] + static_cast<std::uint32_t>(5812), ctx.gpr[7]);
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_0883C72C;
      }
      goto L_0883C394;
    }
L_0883C394:
    ctx.set_gpr(7, 2225u << 16u);
    ctx.set_gpr(7, ctx.gpr[7] + static_cast<std::uint32_t>(7616));
    ctx.set_gpr(7, ctx.gpr[7] + ctx.gpr[11]);
    ctx.set_gpr(7, rt.memory().aot_load8(ctx.gpr[7] + static_cast<std::uint32_t>(0)));
    ctx.set_gpr(10, ctx.gpr[7] << 2u);
    ctx.set_gpr(14, ctx.gpr[10] + ctx.gpr[5]);
    ctx.set_gpr(9, rt.memory().aot_load16(ctx.gpr[14] + static_cast<std::uint32_t>(1030)));
    ctx.set_gpr(13, rt.memory().aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(5812)));
    ctx.set_gpr(8, 0u + static_cast<std::uint32_t>(16));
    ctx.set_gpr(7, ctx.gpr[8] - ctx.gpr[9]);
    ctx.set_gpr(1, static_cast<std::int32_t>(ctx.gpr[7]) < static_cast<std::int32_t>(ctx.gpr[13]) ? 1u : 0u);
    { const bool branch_taken = ctx.gpr[1] == 0u;
    // nop
      if (branch_taken) {
          goto L_0883C444;
      }
      goto L_0883C3C8;
    }
L_0883C3C8:
    ctx.set_gpr(7, rt.memory().aot_load16(ctx.gpr[14] + static_cast<std::uint32_t>(1028)));
    ctx.set_gpr(13, ctx.gpr[7] << (ctx.gpr[13] & 31u));
    ctx.set_gpr(14, ctx.gpr[13] & 65535u);
    ctx.set_gpr(13, rt.memory().aot_load16(ctx.gpr[4] + static_cast<std::uint32_t>(5808)));
    ctx.set_gpr(13, ctx.gpr[13] | ctx.gpr[14]);
    rt.memory().aot_store16(ctx.gpr[4] + static_cast<std::uint32_t>(5808), static_cast<std::uint16_t>(ctx.gpr[13]));
    ctx.set_gpr(15, rt.memory().aot_load16(ctx.gpr[4] + static_cast<std::uint32_t>(5808)));
    ctx.set_gpr(14, rt.memory().aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(20)));
    ctx.set_gpr(13, ctx.gpr[14] + static_cast<std::uint32_t>(1));
    rt.memory().aot_store32(ctx.gpr[4] + static_cast<std::uint32_t>(20), ctx.gpr[13]);
    ctx.set_gpr(13, rt.memory().aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(8)));
    ctx.set_gpr(13, ctx.gpr[13] + ctx.gpr[14]);
    rt.memory().aot_store8(ctx.gpr[13] + static_cast<std::uint32_t>(0), static_cast<std::uint8_t>(ctx.gpr[15]));
    ctx.set_gpr(13, rt.memory().aot_load16(ctx.gpr[4] + static_cast<std::uint32_t>(5808)));
    ctx.set_gpr(15, static_cast<std::uint32_t>(static_cast<std::int32_t>(ctx.gpr[13]) >> 8u));
    ctx.set_gpr(14, rt.memory().aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(20)));
    ctx.set_gpr(13, ctx.gpr[14] + static_cast<std::uint32_t>(1));
    rt.memory().aot_store32(ctx.gpr[4] + static_cast<std::uint32_t>(20), ctx.gpr[13]);
    ctx.set_gpr(13, rt.memory().aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(8)));
    ctx.set_gpr(13, ctx.gpr[13] + ctx.gpr[14]);
    rt.memory().aot_store8(ctx.gpr[13] + static_cast<std::uint32_t>(0), static_cast<std::uint8_t>(ctx.gpr[15]));
    ctx.set_gpr(13, rt.memory().aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(5812)));
    ctx.set_gpr(8, ctx.gpr[8] - ctx.gpr[13]);
    ctx.set_gpr(7, static_cast<std::uint32_t>(static_cast<std::int32_t>(ctx.gpr[7]) >> (ctx.gpr[8] & 31u)));
    rt.memory().aot_store16(ctx.gpr[4] + static_cast<std::uint32_t>(5808), static_cast<std::uint16_t>(ctx.gpr[7]));
    ctx.set_gpr(8, ctx.gpr[9] + static_cast<std::uint32_t>(-16));
    ctx.set_gpr(7, rt.memory().aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(5812)));
    ctx.set_gpr(7, ctx.gpr[7] + ctx.gpr[8]);
    rt.memory().aot_store32(ctx.gpr[4] + static_cast<std::uint32_t>(5812), ctx.gpr[7]);
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_0883C468;
      }
      goto L_0883C444;
    }
L_0883C444:
    ctx.set_gpr(7, rt.memory().aot_load16(ctx.gpr[14] + static_cast<std::uint32_t>(1028)));
    ctx.set_gpr(7, ctx.gpr[7] << (ctx.gpr[13] & 31u));
    ctx.set_gpr(8, ctx.gpr[7] & 65535u);
    ctx.set_gpr(7, rt.memory().aot_load16(ctx.gpr[4] + static_cast<std::uint32_t>(5808)));
    ctx.set_gpr(7, ctx.gpr[7] | ctx.gpr[8]);
    rt.memory().aot_store16(ctx.gpr[4] + static_cast<std::uint32_t>(5808), static_cast<std::uint16_t>(ctx.gpr[7]));
    ctx.set_gpr(7, rt.memory().aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(5812)));
    ctx.set_gpr(7, ctx.gpr[7] + ctx.gpr[9]);
    rt.memory().aot_store32(ctx.gpr[4] + static_cast<std::uint32_t>(5812), ctx.gpr[7]);
    goto L_0883C468;
L_0883C468:
    ctx.set_gpr(7, 2225u << 16u);
    ctx.set_gpr(7, ctx.gpr[7] + static_cast<std::uint32_t>(5500));
    ctx.set_gpr(7, ctx.gpr[7] + ctx.gpr[10]);
    ctx.set_gpr(9, rt.memory().aot_load32(ctx.gpr[7] + static_cast<std::uint32_t>(0)));
    { const bool branch_taken = ctx.gpr[9] == 0u;
    // nop
      if (branch_taken) {
          goto L_0883C548;
      }
      goto L_0883C480;
    }
L_0883C480:
    ctx.set_gpr(7, 2225u << 16u);
    ctx.set_gpr(7, ctx.gpr[7] + static_cast<std::uint32_t>(7872));
    ctx.set_gpr(7, ctx.gpr[7] + ctx.gpr[10]);
    ctx.set_gpr(7, rt.memory().aot_load32(ctx.gpr[7] + static_cast<std::uint32_t>(0)));
    ctx.set_gpr(8, ctx.gpr[11] - ctx.gpr[7]);
    ctx.set_gpr(11, rt.memory().aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(5812)));
    ctx.set_gpr(7, 0u + static_cast<std::uint32_t>(16));
    ctx.set_gpr(10, ctx.gpr[7] - ctx.gpr[9]);
    ctx.set_gpr(1, static_cast<std::int32_t>(ctx.gpr[10]) < static_cast<std::int32_t>(ctx.gpr[11]) ? 1u : 0u);
    { const bool branch_taken = ctx.gpr[1] == 0u;
    // nop
      if (branch_taken) {
          goto L_0883C528;
      }
      goto L_0883C4AC;
    }
L_0883C4AC:
    ctx.set_gpr(10, ctx.gpr[8] << (ctx.gpr[11] & 31u));
    ctx.set_gpr(11, ctx.gpr[10] & 65535u);
    ctx.set_gpr(10, rt.memory().aot_load16(ctx.gpr[4] + static_cast<std::uint32_t>(5808)));
    ctx.set_gpr(10, ctx.gpr[10] | ctx.gpr[11]);
    rt.memory().aot_store16(ctx.gpr[4] + static_cast<std::uint32_t>(5808), static_cast<std::uint16_t>(ctx.gpr[10]));
    ctx.set_gpr(13, rt.memory().aot_load16(ctx.gpr[4] + static_cast<std::uint32_t>(5808)));
    ctx.set_gpr(11, rt.memory().aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(20)));
    ctx.set_gpr(10, ctx.gpr[11] + static_cast<std::uint32_t>(1));
    rt.memory().aot_store32(ctx.gpr[4] + static_cast<std::uint32_t>(20), ctx.gpr[10]);
    ctx.set_gpr(10, rt.memory().aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(8)));
    ctx.set_gpr(10, ctx.gpr[10] + ctx.gpr[11]);
    rt.memory().aot_store8(ctx.gpr[10] + static_cast<std::uint32_t>(0), static_cast<std::uint8_t>(ctx.gpr[13]));
    ctx.set_gpr(10, rt.memory().aot_load16(ctx.gpr[4] + static_cast<std::uint32_t>(5808)));
    ctx.set_gpr(13, static_cast<std::uint32_t>(static_cast<std::int32_t>(ctx.gpr[10]) >> 8u));
    ctx.set_gpr(11, rt.memory().aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(20)));
    ctx.set_gpr(10, ctx.gpr[11] + static_cast<std::uint32_t>(1));
    rt.memory().aot_store32(ctx.gpr[4] + static_cast<std::uint32_t>(20), ctx.gpr[10]);
    ctx.set_gpr(10, rt.memory().aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(8)));
    ctx.set_gpr(10, ctx.gpr[10] + ctx.gpr[11]);
    rt.memory().aot_store8(ctx.gpr[10] + static_cast<std::uint32_t>(0), static_cast<std::uint8_t>(ctx.gpr[13]));
    ctx.set_gpr(10, rt.memory().aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(5812)));
    ctx.set_gpr(10, ctx.gpr[7] - ctx.gpr[10]);
    ctx.set_gpr(7, ctx.gpr[8] & 65535u);
    ctx.set_gpr(7, static_cast<std::uint32_t>(static_cast<std::int32_t>(ctx.gpr[7]) >> (ctx.gpr[10] & 31u)));
    rt.memory().aot_store16(ctx.gpr[4] + static_cast<std::uint32_t>(5808), static_cast<std::uint16_t>(ctx.gpr[7]));
    ctx.set_gpr(8, ctx.gpr[9] + static_cast<std::uint32_t>(-16));
    ctx.set_gpr(7, rt.memory().aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(5812)));
    ctx.set_gpr(7, ctx.gpr[7] + ctx.gpr[8]);
    rt.memory().aot_store32(ctx.gpr[4] + static_cast<std::uint32_t>(5812), ctx.gpr[7]);
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_0883C548;
      }
      goto L_0883C528;
    }
L_0883C528:
    ctx.set_gpr(7, ctx.gpr[8] << (ctx.gpr[11] & 31u));
    ctx.set_gpr(8, ctx.gpr[7] & 65535u);
    ctx.set_gpr(7, rt.memory().aot_load16(ctx.gpr[4] + static_cast<std::uint32_t>(5808)));
    ctx.set_gpr(7, ctx.gpr[7] | ctx.gpr[8]);
    rt.memory().aot_store16(ctx.gpr[4] + static_cast<std::uint32_t>(5808), static_cast<std::uint16_t>(ctx.gpr[7]));
    ctx.set_gpr(7, rt.memory().aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(5812)));
    ctx.set_gpr(7, ctx.gpr[7] + ctx.gpr[9]);
    rt.memory().aot_store32(ctx.gpr[4] + static_cast<std::uint32_t>(5812), ctx.gpr[7]);
    goto L_0883C548;
L_0883C548:
    ctx.set_gpr(11, ctx.gpr[12] + static_cast<std::uint32_t>(-1));
    ctx.set_gpr(1, ctx.gpr[11] < static_cast<std::uint32_t>(256) ? 1u : 0u);
    { const bool branch_taken = ctx.gpr[1] == 0u;
    // nop
      if (branch_taken) {
          goto L_0883C570;
      }
      goto L_0883C558;
    }
L_0883C558:
    ctx.set_gpr(7, 2225u << 16u);
    ctx.set_gpr(7, ctx.gpr[7] + static_cast<std::uint32_t>(7104));
    ctx.set_gpr(7, ctx.gpr[7] + ctx.gpr[11]);
    ctx.set_gpr(7, rt.memory().aot_load8(ctx.gpr[7] + static_cast<std::uint32_t>(0)));
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_0883C584;
      }
      goto L_0883C570;
    }
L_0883C570:
    ctx.set_gpr(8, ctx.gpr[11] >> 7u);
    ctx.set_gpr(7, 2225u << 16u);
    ctx.set_gpr(7, ctx.gpr[7] + static_cast<std::uint32_t>(7360));
    ctx.set_gpr(7, ctx.gpr[7] + ctx.gpr[8]);
    ctx.set_gpr(7, rt.memory().aot_load8(ctx.gpr[7] + static_cast<std::uint32_t>(0)));
    goto L_0883C584;
L_0883C584:
    ctx.set_gpr(7, ctx.gpr[7] & 255u);
    ctx.set_gpr(10, ctx.gpr[7] << 2u);
    ctx.set_gpr(13, ctx.gpr[10] + ctx.gpr[6]);
    ctx.set_gpr(9, rt.memory().aot_load16(ctx.gpr[13] + static_cast<std::uint32_t>(2)));
    ctx.set_gpr(12, rt.memory().aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(5812)));
    ctx.set_gpr(8, 0u + static_cast<std::uint32_t>(16));
    ctx.set_gpr(7, ctx.gpr[8] - ctx.gpr[9]);
    ctx.set_gpr(1, static_cast<std::int32_t>(ctx.gpr[7]) < static_cast<std::int32_t>(ctx.gpr[12]) ? 1u : 0u);
    { const bool branch_taken = ctx.gpr[1] == 0u;
    // nop
      if (branch_taken) {
          goto L_0883C628;
      }
      goto L_0883C5AC;
    }
L_0883C5AC:
    ctx.set_gpr(7, rt.memory().aot_load16(ctx.gpr[13] + static_cast<std::uint32_t>(0)));
    ctx.set_gpr(12, ctx.gpr[7] << (ctx.gpr[12] & 31u));
    ctx.set_gpr(13, ctx.gpr[12] & 65535u);
    ctx.set_gpr(12, rt.memory().aot_load16(ctx.gpr[4] + static_cast<std::uint32_t>(5808)));
    ctx.set_gpr(12, ctx.gpr[12] | ctx.gpr[13]);
    rt.memory().aot_store16(ctx.gpr[4] + static_cast<std::uint32_t>(5808), static_cast<std::uint16_t>(ctx.gpr[12]));
    ctx.set_gpr(14, rt.memory().aot_load16(ctx.gpr[4] + static_cast<std::uint32_t>(5808)));
    ctx.set_gpr(13, rt.memory().aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(20)));
    ctx.set_gpr(12, ctx.gpr[13] + static_cast<std::uint32_t>(1));
    rt.memory().aot_store32(ctx.gpr[4] + static_cast<std::uint32_t>(20), ctx.gpr[12]);
    ctx.set_gpr(12, rt.memory().aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(8)));
    ctx.set_gpr(12, ctx.gpr[12] + ctx.gpr[13]);
    rt.memory().aot_store8(ctx.gpr[12] + static_cast<std::uint32_t>(0), static_cast<std::uint8_t>(ctx.gpr[14]));
    ctx.set_gpr(12, rt.memory().aot_load16(ctx.gpr[4] + static_cast<std::uint32_t>(5808)));
    ctx.set_gpr(14, static_cast<std::uint32_t>(static_cast<std::int32_t>(ctx.gpr[12]) >> 8u));
    ctx.set_gpr(13, rt.memory().aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(20)));
    ctx.set_gpr(12, ctx.gpr[13] + static_cast<std::uint32_t>(1));
    rt.memory().aot_store32(ctx.gpr[4] + static_cast<std::uint32_t>(20), ctx.gpr[12]);
    ctx.set_gpr(12, rt.memory().aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(8)));
    ctx.set_gpr(12, ctx.gpr[12] + ctx.gpr[13]);
    rt.memory().aot_store8(ctx.gpr[12] + static_cast<std::uint32_t>(0), static_cast<std::uint8_t>(ctx.gpr[14]));
    ctx.set_gpr(12, rt.memory().aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(5812)));
    ctx.set_gpr(8, ctx.gpr[8] - ctx.gpr[12]);
    ctx.set_gpr(7, static_cast<std::uint32_t>(static_cast<std::int32_t>(ctx.gpr[7]) >> (ctx.gpr[8] & 31u)));
    rt.memory().aot_store16(ctx.gpr[4] + static_cast<std::uint32_t>(5808), static_cast<std::uint16_t>(ctx.gpr[7]));
    ctx.set_gpr(8, ctx.gpr[9] + static_cast<std::uint32_t>(-16));
    ctx.set_gpr(7, rt.memory().aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(5812)));
    ctx.set_gpr(7, ctx.gpr[7] + ctx.gpr[8]);
    rt.memory().aot_store32(ctx.gpr[4] + static_cast<std::uint32_t>(5812), ctx.gpr[7]);
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_0883C64C;
      }
      goto L_0883C628;
    }
L_0883C628:
    ctx.set_gpr(7, rt.memory().aot_load16(ctx.gpr[13] + static_cast<std::uint32_t>(0)));
    ctx.set_gpr(7, ctx.gpr[7] << (ctx.gpr[12] & 31u));
    ctx.set_gpr(8, ctx.gpr[7] & 65535u);
    ctx.set_gpr(7, rt.memory().aot_load16(ctx.gpr[4] + static_cast<std::uint32_t>(5808)));
    ctx.set_gpr(7, ctx.gpr[7] | ctx.gpr[8]);
    rt.memory().aot_store16(ctx.gpr[4] + static_cast<std::uint32_t>(5808), static_cast<std::uint16_t>(ctx.gpr[7]));
    ctx.set_gpr(7, rt.memory().aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(5812)));
    ctx.set_gpr(7, ctx.gpr[7] + ctx.gpr[9]);
    rt.memory().aot_store32(ctx.gpr[4] + static_cast<std::uint32_t>(5812), ctx.gpr[7]);
    goto L_0883C64C;
L_0883C64C:
    ctx.set_gpr(7, 2225u << 16u);
    ctx.set_gpr(7, ctx.gpr[7] + static_cast<std::uint32_t>(5616));
    ctx.set_gpr(7, ctx.gpr[7] + ctx.gpr[10]);
    ctx.set_gpr(9, rt.memory().aot_load32(ctx.gpr[7] + static_cast<std::uint32_t>(0)));
    { const bool branch_taken = ctx.gpr[9] == 0u;
    // nop
      if (branch_taken) {
          goto L_0883C72C;
      }
      goto L_0883C664;
    }
L_0883C664:
    ctx.set_gpr(7, 2225u << 16u);
    ctx.set_gpr(7, ctx.gpr[7] + static_cast<std::uint32_t>(7988));
    ctx.set_gpr(7, ctx.gpr[7] + ctx.gpr[10]);
    ctx.set_gpr(7, rt.memory().aot_load32(ctx.gpr[7] + static_cast<std::uint32_t>(0)));
    ctx.set_gpr(8, ctx.gpr[11] - ctx.gpr[7]);
    ctx.set_gpr(11, rt.memory().aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(5812)));
    ctx.set_gpr(7, 0u + static_cast<std::uint32_t>(16));
    ctx.set_gpr(10, ctx.gpr[7] - ctx.gpr[9]);
    ctx.set_gpr(1, static_cast<std::int32_t>(ctx.gpr[10]) < static_cast<std::int32_t>(ctx.gpr[11]) ? 1u : 0u);
    { const bool branch_taken = ctx.gpr[1] == 0u;
    // nop
      if (branch_taken) {
          goto L_0883C70C;
      }
      goto L_0883C690;
    }
L_0883C690:
    ctx.set_gpr(10, ctx.gpr[8] << (ctx.gpr[11] & 31u));
    ctx.set_gpr(11, ctx.gpr[10] & 65535u);
    ctx.set_gpr(10, rt.memory().aot_load16(ctx.gpr[4] + static_cast<std::uint32_t>(5808)));
    ctx.set_gpr(10, ctx.gpr[10] | ctx.gpr[11]);
    rt.memory().aot_store16(ctx.gpr[4] + static_cast<std::uint32_t>(5808), static_cast<std::uint16_t>(ctx.gpr[10]));
    ctx.set_gpr(12, rt.memory().aot_load16(ctx.gpr[4] + static_cast<std::uint32_t>(5808)));
    ctx.set_gpr(11, rt.memory().aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(20)));
    ctx.set_gpr(10, ctx.gpr[11] + static_cast<std::uint32_t>(1));
    rt.memory().aot_store32(ctx.gpr[4] + static_cast<std::uint32_t>(20), ctx.gpr[10]);
    ctx.set_gpr(10, rt.memory().aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(8)));
    ctx.set_gpr(10, ctx.gpr[10] + ctx.gpr[11]);
    rt.memory().aot_store8(ctx.gpr[10] + static_cast<std::uint32_t>(0), static_cast<std::uint8_t>(ctx.gpr[12]));
    ctx.set_gpr(10, rt.memory().aot_load16(ctx.gpr[4] + static_cast<std::uint32_t>(5808)));
    ctx.set_gpr(12, static_cast<std::uint32_t>(static_cast<std::int32_t>(ctx.gpr[10]) >> 8u));
    ctx.set_gpr(11, rt.memory().aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(20)));
    ctx.set_gpr(10, ctx.gpr[11] + static_cast<std::uint32_t>(1));
    rt.memory().aot_store32(ctx.gpr[4] + static_cast<std::uint32_t>(20), ctx.gpr[10]);
    ctx.set_gpr(10, rt.memory().aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(8)));
    ctx.set_gpr(10, ctx.gpr[10] + ctx.gpr[11]);
    rt.memory().aot_store8(ctx.gpr[10] + static_cast<std::uint32_t>(0), static_cast<std::uint8_t>(ctx.gpr[12]));
    ctx.set_gpr(10, rt.memory().aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(5812)));
    ctx.set_gpr(10, ctx.gpr[7] - ctx.gpr[10]);
    ctx.set_gpr(7, ctx.gpr[8] & 65535u);
    ctx.set_gpr(7, static_cast<std::uint32_t>(static_cast<std::int32_t>(ctx.gpr[7]) >> (ctx.gpr[10] & 31u)));
    rt.memory().aot_store16(ctx.gpr[4] + static_cast<std::uint32_t>(5808), static_cast<std::uint16_t>(ctx.gpr[7]));
    ctx.set_gpr(8, ctx.gpr[9] + static_cast<std::uint32_t>(-16));
    ctx.set_gpr(7, rt.memory().aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(5812)));
    ctx.set_gpr(7, ctx.gpr[7] + ctx.gpr[8]);
    rt.memory().aot_store32(ctx.gpr[4] + static_cast<std::uint32_t>(5812), ctx.gpr[7]);
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_0883C72C;
      }
      goto L_0883C70C;
    }
L_0883C70C:
    ctx.set_gpr(7, ctx.gpr[8] << (ctx.gpr[11] & 31u));
    ctx.set_gpr(8, ctx.gpr[7] & 65535u);
    ctx.set_gpr(7, rt.memory().aot_load16(ctx.gpr[4] + static_cast<std::uint32_t>(5808)));
    ctx.set_gpr(7, ctx.gpr[7] | ctx.gpr[8]);
    rt.memory().aot_store16(ctx.gpr[4] + static_cast<std::uint32_t>(5808), static_cast<std::uint16_t>(ctx.gpr[7]));
    ctx.set_gpr(7, rt.memory().aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(5812)));
    ctx.set_gpr(7, ctx.gpr[7] + ctx.gpr[9]);
    rt.memory().aot_store32(ctx.gpr[4] + static_cast<std::uint32_t>(5812), ctx.gpr[7]);
    goto L_0883C72C;
L_0883C72C:
    ctx.set_gpr(7, rt.memory().aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(5784)));
    ctx.set_gpr(7, ctx.gpr[3] < ctx.gpr[7] ? 1u : 0u);
    { const bool branch_taken = ctx.gpr[7] != 0u;
    // nop
      if (branch_taken) {
          goto L_0883C2A0;
      }
      goto L_0883C73C;
    }
L_0883C73C:
    ctx.set_gpr(3, rt.memory().aot_load16(ctx.gpr[5] + static_cast<std::uint32_t>(1026)));
    ctx.set_gpr(7, rt.memory().aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(5812)));
    ctx.set_gpr(10, 0u + static_cast<std::uint32_t>(16));
    ctx.set_gpr(6, ctx.gpr[10] - ctx.gpr[3]);
    ctx.set_gpr(1, static_cast<std::int32_t>(ctx.gpr[6]) < static_cast<std::int32_t>(ctx.gpr[7]) ? 1u : 0u);
    { const bool branch_taken = ctx.gpr[1] == 0u;
    // nop
      if (branch_taken) {
          goto L_0883C7D4;
      }
      goto L_0883C758;
    }
L_0883C758:
    ctx.set_gpr(9, rt.memory().aot_load16(ctx.gpr[5] + static_cast<std::uint32_t>(1024)));
    ctx.set_gpr(6, ctx.gpr[9] << (ctx.gpr[7] & 31u));
    ctx.set_gpr(7, ctx.gpr[6] & 65535u);
    ctx.set_gpr(6, rt.memory().aot_load16(ctx.gpr[4] + static_cast<std::uint32_t>(5808)));
    ctx.set_gpr(6, ctx.gpr[6] | ctx.gpr[7]);
    rt.memory().aot_store16(ctx.gpr[4] + static_cast<std::uint32_t>(5808), static_cast<std::uint16_t>(ctx.gpr[6]));
    ctx.set_gpr(8, rt.memory().aot_load16(ctx.gpr[4] + static_cast<std::uint32_t>(5808)));
    ctx.set_gpr(7, rt.memory().aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(20)));
    ctx.set_gpr(6, ctx.gpr[7] + static_cast<std::uint32_t>(1));
    rt.memory().aot_store32(ctx.gpr[4] + static_cast<std::uint32_t>(20), ctx.gpr[6]);
    ctx.set_gpr(6, rt.memory().aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(8)));
    ctx.set_gpr(6, ctx.gpr[6] + ctx.gpr[7]);
    rt.memory().aot_store8(ctx.gpr[6] + static_cast<std::uint32_t>(0), static_cast<std::uint8_t>(ctx.gpr[8]));
    ctx.set_gpr(6, rt.memory().aot_load16(ctx.gpr[4] + static_cast<std::uint32_t>(5808)));
    ctx.set_gpr(8, static_cast<std::uint32_t>(static_cast<std::int32_t>(ctx.gpr[6]) >> 8u));
    ctx.set_gpr(7, rt.memory().aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(20)));
    ctx.set_gpr(6, ctx.gpr[7] + static_cast<std::uint32_t>(1));
    rt.memory().aot_store32(ctx.gpr[4] + static_cast<std::uint32_t>(20), ctx.gpr[6]);
    ctx.set_gpr(6, rt.memory().aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(8)));
    ctx.set_gpr(6, ctx.gpr[6] + ctx.gpr[7]);
    rt.memory().aot_store8(ctx.gpr[6] + static_cast<std::uint32_t>(0), static_cast<std::uint8_t>(ctx.gpr[8]));
    ctx.set_gpr(6, rt.memory().aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(5812)));
    ctx.set_gpr(6, ctx.gpr[10] - ctx.gpr[6]);
    ctx.set_gpr(6, static_cast<std::uint32_t>(static_cast<std::int32_t>(ctx.gpr[9]) >> (ctx.gpr[6] & 31u)));
    rt.memory().aot_store16(ctx.gpr[4] + static_cast<std::uint32_t>(5808), static_cast<std::uint16_t>(ctx.gpr[6]));
    ctx.set_gpr(6, ctx.gpr[3] + static_cast<std::uint32_t>(-16));
    ctx.set_gpr(3, rt.memory().aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(5812)));
    ctx.set_gpr(3, ctx.gpr[3] + ctx.gpr[6]);
    rt.memory().aot_store32(ctx.gpr[4] + static_cast<std::uint32_t>(5812), ctx.gpr[3]);
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_0883C7F8;
      }
      goto L_0883C7D4;
    }
L_0883C7D4:
    ctx.set_gpr(6, rt.memory().aot_load16(ctx.gpr[5] + static_cast<std::uint32_t>(1024)));
    ctx.set_gpr(6, ctx.gpr[6] << (ctx.gpr[7] & 31u));
    ctx.set_gpr(7, ctx.gpr[6] & 65535u);
    ctx.set_gpr(6, rt.memory().aot_load16(ctx.gpr[4] + static_cast<std::uint32_t>(5808)));
    ctx.set_gpr(6, ctx.gpr[6] | ctx.gpr[7]);
    rt.memory().aot_store16(ctx.gpr[4] + static_cast<std::uint32_t>(5808), static_cast<std::uint16_t>(ctx.gpr[6]));
    ctx.set_gpr(6, rt.memory().aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(5812)));
    ctx.set_gpr(3, ctx.gpr[6] + ctx.gpr[3]);
    rt.memory().aot_store32(ctx.gpr[4] + static_cast<std::uint32_t>(5812), ctx.gpr[3]);
    goto L_0883C7F8;
L_0883C7F8:
    ctx.set_gpr(3, rt.memory().aot_load16(ctx.gpr[5] + static_cast<std::uint32_t>(1026)));
    rt.memory().aot_store32(ctx.gpr[4] + static_cast<std::uint32_t>(5804), ctx.gpr[3]);
    jump_target = ctx.gpr[31];
    // nop
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_0883C808:
    ctx.set_gpr(7, 0u + 0u);
    ctx.set_gpr(6, 0u + 0u);
    ctx.set_gpr(5, 0u + 0u);
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_0883C830;
      }
      goto L_0883C81C;
    }
L_0883C81C:
    ctx.set_gpr(3, ctx.gpr[7] << 2u);
    ctx.set_gpr(3, ctx.gpr[3] + ctx.gpr[4]);
    ctx.set_gpr(3, rt.memory().aot_load16(ctx.gpr[3] + static_cast<std::uint32_t>(140)));
    ctx.set_gpr(5, ctx.gpr[5] + ctx.gpr[3]);
    ctx.set_gpr(7, ctx.gpr[7] + static_cast<std::uint32_t>(1));
    goto L_0883C830;
L_0883C830:
    ctx.set_gpr(3, static_cast<std::int32_t>(ctx.gpr[7]) < 7 ? 1u : 0u);
    { const bool branch_taken = ctx.gpr[3] != 0u;
    // nop
      if (branch_taken) {
          goto L_0883C81C;
      }
      goto L_0883C83C;
    }
L_0883C83C:
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_0883C858;
      }
      goto L_0883C844;
    }
L_0883C844:
    ctx.set_gpr(3, ctx.gpr[7] << 2u);
    ctx.set_gpr(3, ctx.gpr[3] + ctx.gpr[4]);
    ctx.set_gpr(3, rt.memory().aot_load16(ctx.gpr[3] + static_cast<std::uint32_t>(140)));
    ctx.set_gpr(6, ctx.gpr[6] + ctx.gpr[3]);
    ctx.set_gpr(7, ctx.gpr[7] + static_cast<std::uint32_t>(1));
    goto L_0883C858;
L_0883C858:
    ctx.set_gpr(3, static_cast<std::int32_t>(ctx.gpr[7]) < 128 ? 1u : 0u);
    { const bool branch_taken = ctx.gpr[3] != 0u;
    // nop
      if (branch_taken) {
          goto L_0883C844;
      }
      goto L_0883C864;
    }
L_0883C864:
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_0883C880;
      }
      goto L_0883C86C;
    }
L_0883C86C:
    ctx.set_gpr(3, ctx.gpr[7] << 2u);
    ctx.set_gpr(3, ctx.gpr[3] + ctx.gpr[4]);
    ctx.set_gpr(3, rt.memory().aot_load16(ctx.gpr[3] + static_cast<std::uint32_t>(140)));
    ctx.set_gpr(5, ctx.gpr[5] + ctx.gpr[3]);
    ctx.set_gpr(7, ctx.gpr[7] + static_cast<std::uint32_t>(1));
    goto L_0883C880;
L_0883C880:
    ctx.set_gpr(3, static_cast<std::int32_t>(ctx.gpr[7]) < 256 ? 1u : 0u);
    { const bool branch_taken = ctx.gpr[3] != 0u;
    // nop
      if (branch_taken) {
          goto L_0883C86C;
      }
      goto L_0883C88C;
    }
L_0883C88C:
    ctx.set_gpr(3, ctx.gpr[6] >> 2u);
    ctx.set_gpr(3, ctx.gpr[3] < ctx.gpr[5] ? 1u : 0u);
    ctx.set_gpr(3, ctx.gpr[3] ^ 1u);
    rt.memory().aot_store8(ctx.gpr[4] + static_cast<std::uint32_t>(28), static_cast<std::uint8_t>(ctx.gpr[3]));
    jump_target = ctx.gpr[31];
    // nop
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_0883C8A4:
    ctx.set_gpr(3, 0u + 0u);
    goto L_0883C8A8;
L_0883C8A8:
    ctx.set_gpr(2, ctx.gpr[4] & 1u);
    ctx.set_gpr(2, ctx.gpr[3] | ctx.gpr[2]);
    ctx.set_gpr(4, ctx.gpr[4] >> 1u);
    ctx.set_gpr(3, ctx.gpr[2] << 1u);
    ctx.set_gpr(5, ctx.gpr[5] + static_cast<std::uint32_t>(-1));
    // nop
    { const bool branch_taken = static_cast<std::int32_t>(ctx.gpr[5]) > 0;
    // nop
      if (branch_taken) {
          goto L_0883C8A8;
      }
      goto L_0883C8C8;
    }
L_0883C8C8:
    ctx.set_gpr(2, ctx.gpr[3] >> 1u);
    jump_target = ctx.gpr[31];
    // nop
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_0883C8D4:
    ctx.set_gpr(5, rt.memory().aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(5812)));
    ctx.set_gpr(3, 0u + static_cast<std::uint32_t>(16));
    { const bool branch_taken = ctx.gpr[5] != ctx.gpr[3];
    // nop
      if (branch_taken) {
          goto L_0883C930;
      }
      goto L_0883C8E4;
    }
L_0883C8E4:
    ctx.set_gpr(6, rt.memory().aot_load16(ctx.gpr[4] + static_cast<std::uint32_t>(5808)));
    ctx.set_gpr(5, rt.memory().aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(20)));
    ctx.set_gpr(3, ctx.gpr[5] + static_cast<std::uint32_t>(1));
    rt.memory().aot_store32(ctx.gpr[4] + static_cast<std::uint32_t>(20), ctx.gpr[3]);
    ctx.set_gpr(3, rt.memory().aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(8)));
    ctx.set_gpr(3, ctx.gpr[3] + ctx.gpr[5]);
    rt.memory().aot_store8(ctx.gpr[3] + static_cast<std::uint32_t>(0), static_cast<std::uint8_t>(ctx.gpr[6]));
    ctx.set_gpr(3, rt.memory().aot_load16(ctx.gpr[4] + static_cast<std::uint32_t>(5808)));
    ctx.set_gpr(6, static_cast<std::uint32_t>(static_cast<std::int32_t>(ctx.gpr[3]) >> 8u));
    ctx.set_gpr(5, rt.memory().aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(20)));
    ctx.set_gpr(3, ctx.gpr[5] + static_cast<std::uint32_t>(1));
    rt.memory().aot_store32(ctx.gpr[4] + static_cast<std::uint32_t>(20), ctx.gpr[3]);
    ctx.set_gpr(3, rt.memory().aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(8)));
    ctx.set_gpr(3, ctx.gpr[3] + ctx.gpr[5]);
    rt.memory().aot_store8(ctx.gpr[3] + static_cast<std::uint32_t>(0), static_cast<std::uint8_t>(ctx.gpr[6]));
    rt.memory().aot_store16(ctx.gpr[4] + static_cast<std::uint32_t>(5808), static_cast<std::uint16_t>(0u));
    rt.memory().aot_store32(ctx.gpr[4] + static_cast<std::uint32_t>(5812), 0u);
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_0883C970;
      }
      goto L_0883C930;
    }
L_0883C930:
    ctx.set_gpr(3, static_cast<std::int32_t>(ctx.gpr[5]) < 8 ? 1u : 0u);
    { const bool branch_taken = ctx.gpr[3] != 0u;
    // nop
      if (branch_taken) {
          goto L_0883C970;
      }
      goto L_0883C93C;
    }
L_0883C93C:
    ctx.set_gpr(6, rt.memory().aot_load16(ctx.gpr[4] + static_cast<std::uint32_t>(5808)));
    ctx.set_gpr(5, rt.memory().aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(20)));
    ctx.set_gpr(3, ctx.gpr[5] + static_cast<std::uint32_t>(1));
    rt.memory().aot_store32(ctx.gpr[4] + static_cast<std::uint32_t>(20), ctx.gpr[3]);
    ctx.set_gpr(3, rt.memory().aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(8)));
    ctx.set_gpr(3, ctx.gpr[3] + ctx.gpr[5]);
    rt.memory().aot_store8(ctx.gpr[3] + static_cast<std::uint32_t>(0), static_cast<std::uint8_t>(ctx.gpr[6]));
    ctx.set_gpr(3, rt.memory().aot_load16(ctx.gpr[4] + static_cast<std::uint32_t>(5808)));
    ctx.set_gpr(3, ctx.gpr[3] >> 8u);
    rt.memory().aot_store16(ctx.gpr[4] + static_cast<std::uint32_t>(5808), static_cast<std::uint16_t>(ctx.gpr[3]));
    ctx.set_gpr(3, rt.memory().aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(5812)));
    ctx.set_gpr(3, ctx.gpr[3] + static_cast<std::uint32_t>(-8));
    rt.memory().aot_store32(ctx.gpr[4] + static_cast<std::uint32_t>(5812), ctx.gpr[3]);
    goto L_0883C970;
L_0883C970:
    jump_target = ctx.gpr[31];
    // nop
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_0883C978:
    ctx.set_gpr(3, rt.memory().aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(5812)));
    ctx.set_gpr(1, static_cast<std::int32_t>(ctx.gpr[3]) < 9 ? 1u : 0u);
    { const bool branch_taken = ctx.gpr[1] != 0u;
    // nop
      if (branch_taken) {
          goto L_0883C9CC;
      }
      goto L_0883C988;
    }
L_0883C988:
    ctx.set_gpr(6, rt.memory().aot_load16(ctx.gpr[4] + static_cast<std::uint32_t>(5808)));
    ctx.set_gpr(5, rt.memory().aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(20)));
    ctx.set_gpr(3, ctx.gpr[5] + static_cast<std::uint32_t>(1));
    rt.memory().aot_store32(ctx.gpr[4] + static_cast<std::uint32_t>(20), ctx.gpr[3]);
    ctx.set_gpr(3, rt.memory().aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(8)));
    ctx.set_gpr(3, ctx.gpr[3] + ctx.gpr[5]);
    rt.memory().aot_store8(ctx.gpr[3] + static_cast<std::uint32_t>(0), static_cast<std::uint8_t>(ctx.gpr[6]));
    ctx.set_gpr(3, rt.memory().aot_load16(ctx.gpr[4] + static_cast<std::uint32_t>(5808)));
    ctx.set_gpr(6, static_cast<std::uint32_t>(static_cast<std::int32_t>(ctx.gpr[3]) >> 8u));
    ctx.set_gpr(5, rt.memory().aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(20)));
    ctx.set_gpr(3, ctx.gpr[5] + static_cast<std::uint32_t>(1));
    rt.memory().aot_store32(ctx.gpr[4] + static_cast<std::uint32_t>(20), ctx.gpr[3]);
    ctx.set_gpr(3, rt.memory().aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(8)));
    ctx.set_gpr(3, ctx.gpr[3] + ctx.gpr[5]);
    rt.memory().aot_store8(ctx.gpr[3] + static_cast<std::uint32_t>(0), static_cast<std::uint8_t>(ctx.gpr[6]));
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_0883C9F0;
      }
      goto L_0883C9CC;
    }
L_0883C9CC:
    { const bool branch_taken = static_cast<std::int32_t>(ctx.gpr[3]) <= 0;
    // nop
      if (branch_taken) {
          goto L_0883C9F0;
      }
      goto L_0883C9D4;
    }
L_0883C9D4:
    ctx.set_gpr(6, rt.memory().aot_load16(ctx.gpr[4] + static_cast<std::uint32_t>(5808)));
    ctx.set_gpr(5, rt.memory().aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(20)));
    ctx.set_gpr(3, ctx.gpr[5] + static_cast<std::uint32_t>(1));
    rt.memory().aot_store32(ctx.gpr[4] + static_cast<std::uint32_t>(20), ctx.gpr[3]);
    ctx.set_gpr(3, rt.memory().aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(8)));
    ctx.set_gpr(3, ctx.gpr[3] + ctx.gpr[5]);
    rt.memory().aot_store8(ctx.gpr[3] + static_cast<std::uint32_t>(0), static_cast<std::uint8_t>(ctx.gpr[6]));
    goto L_0883C9F0;
L_0883C9F0:
    rt.memory().aot_store16(ctx.gpr[4] + static_cast<std::uint32_t>(5808), static_cast<std::uint16_t>(0u));
    rt.memory().aot_store32(ctx.gpr[4] + static_cast<std::uint32_t>(5812), 0u);
    jump_target = ctx.gpr[31];
    // nop
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_0883CA00:
    ctx.set_gpr(29, ctx.gpr[29] + static_cast<std::uint32_t>(-16));
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(12), ctx.gpr[31]);
    ctx.set_gpr(9, ctx.gpr[5] + 0u);
    ctx.set_gpr(8, ctx.gpr[6] + 0u);
    ctx.set_gpr(31, 0x0883CA18u);
    // nop
    goto L_0883C978;
L_0883CA18:
    ctx.set_gpr(3, 0u + static_cast<std::uint32_t>(8));
    rt.memory().aot_store32(ctx.gpr[4] + static_cast<std::uint32_t>(5804), ctx.gpr[3]);
    { const bool branch_taken = ctx.gpr[7] == 0u;
    // nop
      if (branch_taken) {
          goto L_0883CAC4;
      }
      goto L_0883CA28;
    }
L_0883CA28:
    ctx.set_gpr(6, ctx.gpr[8] & 65535u);
    ctx.set_gpr(5, rt.memory().aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(20)));
    ctx.set_gpr(3, ctx.gpr[5] + static_cast<std::uint32_t>(1));
    rt.memory().aot_store32(ctx.gpr[4] + static_cast<std::uint32_t>(20), ctx.gpr[3]);
    ctx.set_gpr(3, rt.memory().aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(8)));
    ctx.set_gpr(3, ctx.gpr[3] + ctx.gpr[5]);
    rt.memory().aot_store8(ctx.gpr[3] + static_cast<std::uint32_t>(0), static_cast<std::uint8_t>(ctx.gpr[6]));
    ctx.set_gpr(6, static_cast<std::uint32_t>(static_cast<std::int32_t>(ctx.gpr[6]) >> 8u));
    ctx.set_gpr(5, rt.memory().aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(20)));
    ctx.set_gpr(3, ctx.gpr[5] + static_cast<std::uint32_t>(1));
    rt.memory().aot_store32(ctx.gpr[4] + static_cast<std::uint32_t>(20), ctx.gpr[3]);
    ctx.set_gpr(3, rt.memory().aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(8)));
    ctx.set_gpr(3, ctx.gpr[3] + ctx.gpr[5]);
    rt.memory().aot_store8(ctx.gpr[3] + static_cast<std::uint32_t>(0), static_cast<std::uint8_t>(ctx.gpr[6]));
    ctx.set_gpr(3, ~(ctx.gpr[8] | 0u));
    ctx.set_gpr(6, ctx.gpr[3] & 65535u);
    ctx.set_gpr(5, rt.memory().aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(20)));
    ctx.set_gpr(3, ctx.gpr[5] + static_cast<std::uint32_t>(1));
    rt.memory().aot_store32(ctx.gpr[4] + static_cast<std::uint32_t>(20), ctx.gpr[3]);
    ctx.set_gpr(3, rt.memory().aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(8)));
    ctx.set_gpr(3, ctx.gpr[3] + ctx.gpr[5]);
    rt.memory().aot_store8(ctx.gpr[3] + static_cast<std::uint32_t>(0), static_cast<std::uint8_t>(ctx.gpr[6]));
    ctx.set_gpr(6, static_cast<std::uint32_t>(static_cast<std::int32_t>(ctx.gpr[6]) >> 8u));
    ctx.set_gpr(5, rt.memory().aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(20)));
    ctx.set_gpr(3, ctx.gpr[5] + static_cast<std::uint32_t>(1));
    rt.memory().aot_store32(ctx.gpr[4] + static_cast<std::uint32_t>(20), ctx.gpr[3]);
    ctx.set_gpr(3, rt.memory().aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(8)));
    ctx.set_gpr(3, ctx.gpr[3] + ctx.gpr[5]);
    rt.memory().aot_store8(ctx.gpr[3] + static_cast<std::uint32_t>(0), static_cast<std::uint8_t>(ctx.gpr[6]));
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_0883CAC4;
      }
      goto L_0883CAA4;
    }
L_0883CAA4:
    ctx.set_gpr(6, static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int8_t>(rt.memory().aot_load8(ctx.gpr[9] + static_cast<std::uint32_t>(0))))));
    ctx.set_gpr(5, rt.memory().aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(20)));
    ctx.set_gpr(3, ctx.gpr[5] + static_cast<std::uint32_t>(1));
    rt.memory().aot_store32(ctx.gpr[4] + static_cast<std::uint32_t>(20), ctx.gpr[3]);
    ctx.set_gpr(3, rt.memory().aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(8)));
    ctx.set_gpr(3, ctx.gpr[3] + ctx.gpr[5]);
    rt.memory().aot_store8(ctx.gpr[3] + static_cast<std::uint32_t>(0), static_cast<std::uint8_t>(ctx.gpr[6]));
    ctx.set_gpr(9, ctx.gpr[9] + static_cast<std::uint32_t>(1));
    goto L_0883CAC4;
L_0883CAC4:
    ctx.set_gpr(3, ctx.gpr[8] + 0u);
    ctx.set_gpr(8, ctx.gpr[8] + static_cast<std::uint32_t>(-1));
    { const bool branch_taken = ctx.gpr[3] != 0u;
    // nop
      if (branch_taken) {
          goto L_0883CAA4;
      }
      goto L_0883CAD4;
    }
L_0883CAD4:
    ctx.set_gpr(31, rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(12)));
    ctx.set_gpr(29, ctx.gpr[29] + static_cast<std::uint32_t>(16));
    jump_target = ctx.gpr[31];
    // nop
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_0883CAE4:
    ctx.set_gpr(29, ctx.gpr[29] + static_cast<std::uint32_t>(-16));
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(12), ctx.gpr[31]);
    ctx.set_gpr(4, ctx.gpr[5] + 0u);
    ctx.set_gpr(5, ctx.gpr[6] + 0u);
    ctx.set_gpr(31, 0x0883CAFCu);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0002_entry, 2u, 686u, 0x0880F2A4u>(ctx, &aot_mem) && ctx.pc == 0x0883CAFCu) goto L_0883CAFC;
    return;
L_0883CAFC:
    ctx.set_gpr(31, rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(12)));
    ctx.set_gpr(29, ctx.gpr[29] + static_cast<std::uint32_t>(16));
    jump_target = ctx.gpr[31];
    // nop
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_0883CB0C:
    ctx.set_gpr(29, ctx.gpr[29] + static_cast<std::uint32_t>(-16));
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(12), ctx.gpr[31]);
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(8), ctx.gpr[16]);
    ctx.set_gpr(16, ctx.gpr[4] + 0u);
    ctx.set_gpr(4, ctx.gpr[5] + 0u);
    ctx.set_gpr(31, 0x0883CB28u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0003_entry, 3u, 489u, 0x08812048u>(ctx, &aot_mem) && ctx.pc == 0x0883CB28u) goto L_0883CB28;
    return;
L_0883CB28:
    ctx.set_gpr(31, rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(12)));
    ctx.set_gpr(16, rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(8)));
    ctx.set_gpr(29, ctx.gpr[29] + static_cast<std::uint32_t>(16));
    jump_target = ctx.gpr[31];
    // nop
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_0883CB3C:
    jump_target = ctx.gpr[31];
    // nop
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_0883CB44:
    jump_target = ctx.gpr[31];
    // nop
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_0883CB4C:
    ctx.set_gpr(29, ctx.gpr[29] + static_cast<std::uint32_t>(-16));
    ctx.set_gpr(1, static_cast<std::int32_t>(ctx.gpr[5]) < static_cast<std::int32_t>(0u) ? 1u : 0u);
    { const bool branch_taken = ctx.gpr[1] != 0u;
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(12), ctx.gpr[31]);
      if (branch_taken) {
          goto L_0883CB84;
      }
      goto L_0883CB5C;
    }
L_0883CB5C:
    ctx.set_gpr(1, static_cast<std::int32_t>(0u) < static_cast<std::int32_t>(ctx.gpr[5]) ? 1u : 0u);
    { const bool branch_taken = ctx.gpr[1] != 0u;
    // nop
      if (branch_taken) {
          goto L_0883CB74;
      }
      goto L_0883CB68;
    }
L_0883CB68:
    ctx.set_gpr(1, 0u < ctx.gpr[4] ? 1u : 0u);
    if (ctx.gpr[1] == 0u) {
    ctx.set_gpr(3, ctx.gpr[4] >> 1u);
        goto L_0883CB88;
    }
    goto L_0883CB74;
L_0883CB74:
    ctx.set_gpr(31, 0x0883CB7Cu);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0006_entry, 6u, 116u, 0x0881C89Cu>(ctx, &aot_mem) && ctx.pc == 0x0883CB7Cu) goto L_0883CB7C;
    return;
L_0883CB7C:
    { const bool branch_taken = 0u == 0u;
    ctx.set_gpr(31, rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(12)));
      if (branch_taken) {
          goto L_0883CBBC;
      }
      goto L_0883CB84;
    }
L_0883CB84:
    ctx.set_gpr(3, ctx.gpr[4] >> 1u);
    goto L_0883CB88;
L_0883CB88:
    ctx.set_gpr(2, ctx.gpr[5] << 31u);
    ctx.set_gpr(3, ctx.gpr[2] | ctx.gpr[3]);
    ctx.set_gpr(6, ctx.gpr[5] >> 1u);
    ctx.set_gpr(2, ctx.gpr[4] & 1u);
    ctx.set_gpr(5, ctx.gpr[6] + 0u);
    ctx.set_gpr(31, 0x0883CBA4u);
    ctx.set_gpr(4, ctx.gpr[3] | ctx.gpr[2]);
    if (rt.invoke_chained_direct<&recomp_unit_0006_entry, 6u, 116u, 0x0881C89Cu>(ctx, &aot_mem) && ctx.pc == 0x0883CBA4u) goto L_0883CBA4;
    return;
L_0883CBA4:
    ctx.set_gpr(4, ctx.gpr[2] + 0u);
    ctx.set_gpr(5, ctx.gpr[3] + 0u);
    ctx.set_gpr(6, ctx.gpr[2] + 0u);
    ctx.set_gpr(31, 0x0883CBB8u);
    ctx.set_gpr(7, ctx.gpr[3] + 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0006_entry, 6u, 773u, 0x0881F3E0u>(ctx, &aot_mem) && ctx.pc == 0x0883CBB8u) goto L_0883CBB8;
    return;
L_0883CBB8:
    ctx.set_gpr(31, rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(12)));
    goto L_0883CBBC;
L_0883CBBC:
    jump_target = ctx.gpr[31];
    ctx.set_gpr(29, ctx.gpr[29] + static_cast<std::uint32_t>(16));
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_0883CBC4:
    ctx.set_gpr(5, 0u + 0u);
    goto L_0883CB4C;
L_0883CBCC:
    ctx.set_gpr(29, ctx.gpr[29] + static_cast<std::uint32_t>(-16));
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(12), ctx.gpr[31]);
    ctx.set_gpr(31, 0x0883CBDCu);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0006_entry, 6u, 895u, 0x0881FB5Cu>(ctx, &aot_mem) && ctx.pc == 0x0883CBDCu) goto L_0883CBDC;
    return;
L_0883CBDC:
    ctx.set_gpr(31, rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(12)));
    ctx.set_gpr(2, ctx.gpr[2] ^ 0u);
    ctx.set_gpr(2, ctx.gpr[2] < static_cast<std::uint32_t>(1) ? 1u : 0u);
    jump_target = ctx.gpr[31];
    ctx.set_gpr(29, ctx.gpr[29] + static_cast<std::uint32_t>(16));
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_0883CBF0:
    ctx.set_gpr(29, ctx.gpr[29] + static_cast<std::uint32_t>(-16));
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(12), ctx.gpr[31]);
    ctx.set_gpr(31, 0x0883CC00u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0006_entry, 6u, 895u, 0x0881FB5Cu>(ctx, &aot_mem) && ctx.pc == 0x0883CC00u) goto L_0883CC00;
    return;
L_0883CC00:
    ctx.set_gpr(31, rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(12)));
    ctx.set_gpr(2, 0u < ctx.gpr[2] ? 1u : 0u);
    jump_target = ctx.gpr[31];
    ctx.set_gpr(29, ctx.gpr[29] + static_cast<std::uint32_t>(16));
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_0883CC10:
    ctx.set_gpr(29, ctx.gpr[29] + static_cast<std::uint32_t>(-16));
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(12), ctx.gpr[31]);
    ctx.set_gpr(31, 0x0883CC20u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0006_entry, 6u, 895u, 0x0881FB5Cu>(ctx, &aot_mem) && ctx.pc == 0x0883CC20u) goto L_0883CC20;
    return;
L_0883CC20:
    ctx.set_gpr(31, rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(12)));
    ctx.set_gpr(2, static_cast<std::int32_t>(ctx.gpr[2]) < static_cast<std::int32_t>(0u) ? 1u : 0u);
    jump_target = ctx.gpr[31];
    ctx.set_gpr(29, ctx.gpr[29] + static_cast<std::uint32_t>(16));
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_0883CC30:
    ctx.set_gpr(29, ctx.gpr[29] + static_cast<std::uint32_t>(-16));
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(12), ctx.gpr[31]);
    ctx.set_gpr(31, 0x0883CC40u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0006_entry, 6u, 895u, 0x0881FB5Cu>(ctx, &aot_mem) && ctx.pc == 0x0883CC40u) goto L_0883CC40;
    return;
L_0883CC40:
    ctx.set_gpr(31, rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(12)));
    ctx.set_gpr(2, static_cast<std::int32_t>(0u) < static_cast<std::int32_t>(ctx.gpr[2]) ? 1u : 0u);
    ctx.set_gpr(2, ctx.gpr[2] ^ 1u);
    jump_target = ctx.gpr[31];
    ctx.set_gpr(29, ctx.gpr[29] + static_cast<std::uint32_t>(16));
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_0883CC54:
    ctx.set_gpr(29, ctx.gpr[29] + static_cast<std::uint32_t>(-16));
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(12), ctx.gpr[31]);
    ctx.set_gpr(31, 0x0883CC64u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0006_entry, 6u, 895u, 0x0881FB5Cu>(ctx, &aot_mem) && ctx.pc == 0x0883CC64u) goto L_0883CC64;
    return;
L_0883CC64:
    ctx.set_gpr(31, rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(12)));
    ctx.set_gpr(2, static_cast<std::int32_t>(0u) < static_cast<std::int32_t>(ctx.gpr[2]) ? 1u : 0u);
    jump_target = ctx.gpr[31];
    ctx.set_gpr(29, ctx.gpr[29] + static_cast<std::uint32_t>(16));
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_0883CC74:
    ctx.set_gpr(29, ctx.gpr[29] + static_cast<std::uint32_t>(-16));
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(12), ctx.gpr[31]);
    ctx.set_gpr(31, 0x0883CC84u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0006_entry, 6u, 895u, 0x0881FB5Cu>(ctx, &aot_mem) && ctx.pc == 0x0883CC84u) goto L_0883CC84;
    return;
L_0883CC84:
    ctx.set_gpr(31, rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(12)));
    ctx.set_gpr(2, static_cast<std::int32_t>(ctx.gpr[2]) < static_cast<std::int32_t>(0u) ? 1u : 0u);
    ctx.set_gpr(2, ctx.gpr[2] ^ 1u);
    jump_target = ctx.gpr[31];
    ctx.set_gpr(29, ctx.gpr[29] + static_cast<std::uint32_t>(16));
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_0883CC98:
    ctx.set_gpr(29, ctx.gpr[29] + static_cast<std::uint32_t>(-32));
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(12), ctx.gpr[31]);
    ctx.set_gpr(31, 0x0883CCA8u);
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(8), ctx.gpr[16]);
    if (rt.invoke_chained_direct<&recomp_unit_0016_entry, 16u, 662u, 0x08847C90u>(ctx, &aot_mem) && ctx.pc == 0x0883CCA8u) goto L_0883CCA8;
    return;
L_0883CCA8:
    ctx.set_gpr(31, 0x0883CCB0u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0016_entry, 16u, 606u, 0x08847994u>(ctx, &aot_mem) && ctx.pc == 0x0883CCB0u) goto L_0883CCB0;
    return;
L_0883CCB0:
    ctx.set_gpr(31, 0x0883CCB8u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0016_entry, 16u, 654u, 0x08847C24u>(ctx, &aot_mem) && ctx.pc == 0x0883CCB8u) goto L_0883CCB8;
    return;
L_0883CCB8:
    ctx.set_gpr(4, 0u + 0u);
    ctx.set_gpr(31, 0x0883CCC4u);
    ctx.set_gpr(5, 0u + 0u);
    ctx.pc = 0x08B0E304u;
    return;
L_0883CCC4:
    ctx.set_gpr(31, 0x0883CCCCu);
    ctx.set_gpr(4, 0u + static_cast<std::uint32_t>(16));
    if (rt.invoke_chained_direct<&recomp_unit_0078_entry, 78u, 172u, 0x0893CAC8u>(ctx, &aot_mem) && ctx.pc == 0x0883CCCCu) goto L_0883CCCC;
    return;
L_0883CCCC:
    ctx.set_gpr(2, 1u << 16u);
    ctx.set_gpr(31, 0x0883CCD8u);
    ctx.set_gpr(4, ctx.gpr[2] | 4096u);
    goto L_0883CED4;
L_0883CCD8:
    ctx.set_gpr(2, 16u << 16u);
    ctx.set_gpr(31, 0x0883CCE4u);
    ctx.set_gpr(4, ctx.gpr[2] | 40960u);
    goto L_0883CEC8;
L_0883CCE4:
    ctx.set_gpr(31, 0x0883CCECu);
    ctx.set_gpr(4, 0u + static_cast<std::uint32_t>(20480));
    goto L_0883CEBC;
L_0883CCEC:
    ctx.set_gpr(2, 5u << 16u);
    ctx.set_gpr(31, 0x0883CCF8u);
    ctx.set_gpr(4, ctx.gpr[2] | 40960u);
    goto L_0883CEB0;
L_0883CCF8:
    ctx.set_gpr(2, 2u << 16u);
    ctx.set_gpr(31, 0x0883CD04u);
    ctx.set_gpr(4, ctx.gpr[2] | 53248u);
    goto L_0883CEA4;
L_0883CD04:
    ctx.set_gpr(31, 0x0883CD0Cu);
    ctx.set_gpr(4, 0u + 0u);
    goto L_0883CE98;
L_0883CD0C:
    ctx.set_gpr(31, 0x0883CD14u);
    ctx.set_gpr(4, 0u + 0u);
    goto L_0883CE8C;
L_0883CD14:
    ctx.set_gpr(31, 0x0883CD1Cu);
    ctx.set_gpr(4, ctx.gpr[29] + static_cast<std::uint32_t>(28));
    goto L_0883CE60;
L_0883CD1C:
    ctx.set_gpr(31, 0x0883CD24u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0064_entry, 64u, 445u, 0x08906000u>(ctx, &aot_mem) && ctx.pc == 0x0883CD24u) goto L_0883CD24;
    return;
L_0883CD24:
    ctx.set_gpr(31, 0x0883CD2Cu);
    ctx.set_gpr(16, ctx.gpr[2] + 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0078_entry, 78u, 233u, 0x0893CEECu>(ctx, &aot_mem) && ctx.pc == 0x0883CD2Cu) goto L_0883CD2C;
    return;
L_0883CD2C:
    ctx.set_gpr(31, 0x0883CD34u);
    ctx.set_gpr(4, ctx.gpr[2] + 0u);
    goto L_0883CE58;
L_0883CD34:
    ctx.set_gpr(4, ctx.gpr[16] + 0u);
    ctx.set_gpr(31, 0x0883CD40u);
    ctx.set_gpr(5, ctx.gpr[2] + 0u);
    goto L_0883CE50;
L_0883CD40:
    ctx.set_gpr(31, 0x0883CD48u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0064_entry, 64u, 445u, 0x08906000u>(ctx, &aot_mem) && ctx.pc == 0x0883CD48u) goto L_0883CD48;
    return;
L_0883CD48:
    ctx.set_gpr(31, 0x0883CD50u);
    ctx.set_gpr(16, ctx.gpr[2] + 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0078_entry, 78u, 233u, 0x0893CEECu>(ctx, &aot_mem) && ctx.pc == 0x0883CD50u) goto L_0883CD50;
    return;
L_0883CD50:
    ctx.set_gpr(31, 0x0883CD58u);
    ctx.set_gpr(4, ctx.gpr[2] + 0u);
    goto L_0883CE58;
L_0883CD58:
    ctx.set_gpr(4, ctx.gpr[16] + 0u);
    ctx.set_gpr(31, 0x0883CD64u);
    ctx.set_gpr(5, ctx.gpr[2] + 0u);
    goto L_0883CE48;
L_0883CD64:
    ctx.set_gpr(31, 0x0883CD6Cu);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0064_entry, 64u, 445u, 0x08906000u>(ctx, &aot_mem) && ctx.pc == 0x0883CD6Cu) goto L_0883CD6C;
    return;
L_0883CD6C:
    ctx.set_gpr(31, 0x0883CD74u);
    ctx.set_gpr(16, ctx.gpr[2] + 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0078_entry, 78u, 228u, 0x0893CE9Cu>(ctx, &aot_mem) && ctx.pc == 0x0883CD74u) goto L_0883CD74;
    return;
L_0883CD74:
    ctx.set_gpr(31, 0x0883CD7Cu);
    ctx.set_gpr(4, ctx.gpr[2] + 0u);
    goto L_0883CE58;
L_0883CD7C:
    ctx.set_gpr(4, ctx.gpr[16] + 0u);
    ctx.set_gpr(31, 0x0883CD88u);
    ctx.set_gpr(5, ctx.gpr[2] + 0u);
    goto L_0883CE18;
L_0883CD88:
    ctx.set_gpr(31, 0x0883CD90u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0064_entry, 64u, 445u, 0x08906000u>(ctx, &aot_mem) && ctx.pc == 0x0883CD90u) goto L_0883CD90;
    return;
L_0883CD90:
    ctx.set_gpr(31, 0x0883CD98u);
    ctx.set_gpr(16, ctx.gpr[2] + 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0078_entry, 78u, 233u, 0x0893CEECu>(ctx, &aot_mem) && ctx.pc == 0x0883CD98u) goto L_0883CD98;
    return;
L_0883CD98:
    ctx.set_gpr(31, 0x0883CDA0u);
    ctx.set_gpr(4, ctx.gpr[2] + 0u);
    goto L_0883CE58;
L_0883CDA0:
    ctx.set_gpr(4, ctx.gpr[16] + 0u);
    ctx.set_gpr(31, 0x0883CDACu);
    ctx.set_gpr(5, ctx.gpr[2] + 0u);
    goto L_0883CE18;
L_0883CDAC:
    ctx.set_gpr(31, 0x0883CDB4u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0064_entry, 64u, 445u, 0x08906000u>(ctx, &aot_mem) && ctx.pc == 0x0883CDB4u) goto L_0883CDB4;
    return;
L_0883CDB4:
    ctx.set_gpr(4, ctx.gpr[2] + 0u);
    ctx.set_gpr(31, 0x0883CDC0u);
    ctx.set_gpr(5, 0u + 0u);
    goto L_0883CE10;
L_0883CDC0:
    ctx.set_gpr(31, 0x0883CDC8u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0078_entry, 78u, 90u, 0x0893C5ECu>(ctx, &aot_mem) && ctx.pc == 0x0883CDC8u) goto L_0883CDC8;
    return;
L_0883CDC8:
    ctx.set_gpr(31, 0x0883CDD0u);
    ctx.set_gpr(16, ctx.gpr[2] + 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0078_entry, 78u, 233u, 0x0893CEECu>(ctx, &aot_mem) && ctx.pc == 0x0883CDD0u) goto L_0883CDD0;
    return;
L_0883CDD0:
    ctx.set_gpr(31, 0x0883CDD8u);
    ctx.set_gpr(4, ctx.gpr[2] + 0u);
    goto L_0883CE58;
L_0883CDD8:
    ctx.set_gpr(25, rt.memory().aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(0)));
    ctx.set_gpr(6, ctx.gpr[2] + 0u);
    ctx.set_gpr(4, ctx.gpr[16] + 0u);
    ctx.set_gpr(25, rt.memory().aot_load32(ctx.gpr[25] + static_cast<std::uint32_t>(112)));
    jump_target = ctx.gpr[25];
    ctx.set_gpr(31, 0x0883CDF0u);
    ctx.set_gpr(5, 0u + static_cast<std::uint32_t>(24));
    ctx.pc = jump_target;
    if (rt.invoke_chained_call(ctx, &aot_mem) && ctx.pc == 0x0883CDF0u) goto L_0883CDF0;
    return;
L_0883CDF0:
    ctx.set_gpr(31, 0x0883CDF8u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0016_entry, 16u, 711u, 0x08847FB0u>(ctx, &aot_mem) && ctx.pc == 0x0883CDF8u) goto L_0883CDF8;
    return;
L_0883CDF8:
    ctx.set_gpr(31, 0x0883CE00u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0017_entry, 17u, 29u, 0x088481ACu>(ctx, &aot_mem) && ctx.pc == 0x0883CE00u) goto L_0883CE00;
    return;
L_0883CE00:
    ctx.set_gpr(31, 0x0883CE08u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0017_entry, 17u, 68u, 0x08848470u>(ctx, &aot_mem) && ctx.pc == 0x0883CE08u) goto L_0883CE08;
    return;
L_0883CE08:
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_0883CDF8;
      }
      goto L_0883CE10;
    }
L_0883CE10:
    jump_target = ctx.gpr[31];
    rt.memory().aot_store8(ctx.gpr[4] + static_cast<std::uint32_t>(8), static_cast<std::uint8_t>(ctx.gpr[5]));
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_0883CE18:
    ctx.set_gpr(4, ctx.gpr[4] + static_cast<std::uint32_t>(64));
    goto L_0883CE20;
L_0883CE20:
    ctx.set_gpr(29, ctx.gpr[29] + static_cast<std::uint32_t>(-16));
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(12), ctx.gpr[31]);
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(8), ctx.gpr[16]);
    ctx.set_gpr(31, 0x0883CE34u);
    ctx.set_gpr(16, ctx.gpr[4] + 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0085_entry, 85u, 61u, 0x089584C4u>(ctx, &aot_mem) && ctx.pc == 0x0883CE34u) goto L_0883CE34;
    return;
L_0883CE34:
    ctx.set_gpr(2, ctx.gpr[16] + 0u);
    ctx.set_gpr(31, rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(12)));
    ctx.set_gpr(16, rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(8)));
    jump_target = ctx.gpr[31];
    ctx.set_gpr(29, ctx.gpr[29] + static_cast<std::uint32_t>(16));
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_0883CE48:
    ctx.set_gpr(4, ctx.gpr[4] + static_cast<std::uint32_t>(68));
    goto L_0883CE20;
L_0883CE50:
    ctx.set_gpr(4, ctx.gpr[4] + static_cast<std::uint32_t>(72));
    goto L_0883CE20;
L_0883CE58:
    ctx.set_gpr(4, rt.memory().aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(0)));
    (void)rt.invoke_chained_direct<&recomp_unit_0078_entry, 78u, 199u, 0x0893CC68u>(ctx, &aot_mem); return;
L_0883CE60:
    ctx.set_gpr(29, ctx.gpr[29] + static_cast<std::uint32_t>(-16));
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(12), ctx.gpr[31]);
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(8), ctx.gpr[16]);
    ctx.set_gpr(16, ctx.gpr[4] + 0u);
    ctx.set_gpr(31, 0x0883CE78u);
    ctx.set_gpr(4, 0u + static_cast<std::uint32_t>(4000));
    if (rt.invoke_chained_direct<&recomp_unit_0064_entry, 64u, 420u, 0x08905E98u>(ctx, &aot_mem) && ctx.pc == 0x0883CE78u) goto L_0883CE78;
    return;
L_0883CE78:
    ctx.set_gpr(2, ctx.gpr[16] + 0u);
    ctx.set_gpr(31, rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(12)));
    ctx.set_gpr(16, rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(8)));
    jump_target = ctx.gpr[31];
    ctx.set_gpr(29, ctx.gpr[29] + static_cast<std::uint32_t>(16));
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_0883CE8C:
    ctx.set_gpr(3, 2233u << 16u);
    jump_target = ctx.gpr[31];
    rt.memory().aot_store8(ctx.gpr[3] + static_cast<std::uint32_t>(7992), static_cast<std::uint8_t>(ctx.gpr[4]));
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_0883CE98:
    ctx.set_gpr(3, 2233u << 16u);
    jump_target = ctx.gpr[31];
    rt.memory().aot_store8(ctx.gpr[3] + static_cast<std::uint32_t>(7980), static_cast<std::uint8_t>(ctx.gpr[4]));
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_0883CEA4:
    ctx.set_gpr(3, 2245u << 16u);
    jump_target = ctx.gpr[31];
    rt.memory().aot_store32(ctx.gpr[3] + static_cast<std::uint32_t>(30980), ctx.gpr[4]);
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_0883CEB0:
    ctx.set_gpr(3, 2245u << 16u);
    jump_target = ctx.gpr[31];
    rt.memory().aot_store32(ctx.gpr[3] + static_cast<std::uint32_t>(30976), ctx.gpr[4]);
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_0883CEBC:
    ctx.set_gpr(3, 2245u << 16u);
    jump_target = ctx.gpr[31];
    rt.memory().aot_store32(ctx.gpr[3] + static_cast<std::uint32_t>(30972), ctx.gpr[4]);
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_0883CEC8:
    ctx.set_gpr(3, 2245u << 16u);
    jump_target = ctx.gpr[31];
    rt.memory().aot_store32(ctx.gpr[3] + static_cast<std::uint32_t>(30968), ctx.gpr[4]);
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_0883CED4:
    ctx.set_gpr(3, 2245u << 16u);
    jump_target = ctx.gpr[31];
    rt.memory().aot_store32(ctx.gpr[3] + static_cast<std::uint32_t>(30964), ctx.gpr[4]);
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_0883CEE0:
    ctx.set_gpr(2, rt.memory().aot_load8(ctx.gpr[4] + static_cast<std::uint32_t>(0)));
    { const bool branch_taken = ctx.gpr[2] == 0u;
    ctx.set_gpr(3, ctx.gpr[4] + 0u);
      if (branch_taken) {
          goto L_0883CEFC;
      }
      goto L_0883CEEC;
    }
L_0883CEEC:
    ctx.set_gpr(3, ctx.gpr[3] + static_cast<std::uint32_t>(1));
    goto L_0883CEF0;
L_0883CEF0:
    ctx.set_gpr(2, rt.memory().aot_load8(ctx.gpr[3] + static_cast<std::uint32_t>(0)));
    if (ctx.gpr[2] != 0u) {
    ctx.set_gpr(3, ctx.gpr[3] + static_cast<std::uint32_t>(1));
        goto L_0883CEF0;
    }
    goto L_0883CEFC;
L_0883CEFC:
    jump_target = ctx.gpr[31];
    ctx.set_gpr(2, ctx.gpr[3] - ctx.gpr[4]);
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_0883CF04:
    ctx.set_gpr(4, ctx.gpr[4] & 255u);
    ctx.set_gpr(3, static_cast<std::int32_t>(ctx.gpr[4]) < 129 ? 1u : 0u);
    ctx.set_gpr(2, 0u + static_cast<std::uint32_t>(1));
    { const bool branch_taken = ctx.gpr[3] != 0u;
    ctx.set_gpr(5, 0u + 0u);
      if (branch_taken) {
          goto L_0883CF28;
      }
      goto L_0883CF18;
    }
L_0883CF18:
    ctx.set_gpr(1, static_cast<std::int32_t>(ctx.gpr[4]) < 160 ? 1u : 0u);
    { const bool branch_taken = ctx.gpr[1] == 0u;
    // nop
      if (branch_taken) {
          goto L_0883CF28;
      }
      goto L_0883CF24;
    }
L_0883CF24:
    ctx.set_gpr(5, ctx.gpr[2] + 0u);
    goto L_0883CF28;
L_0883CF28:
    { const bool branch_taken = ctx.gpr[5] != 0u;
    // nop
      if (branch_taken) {
          goto L_0883CF50;
      }
      goto L_0883CF30;
    }
L_0883CF30:
    ctx.set_gpr(3, static_cast<std::int32_t>(ctx.gpr[4]) < 224 ? 1u : 0u);
    ctx.set_gpr(3, ctx.gpr[3] ^ 1u);
    { const bool branch_taken = ctx.gpr[3] == 0u;
    // nop
      if (branch_taken) {
          goto L_0883CF44;
      }
      goto L_0883CF40;
    }
L_0883CF40:
    ctx.set_gpr(3, static_cast<std::int32_t>(ctx.gpr[4]) < 253 ? 1u : 0u);
    goto L_0883CF44;
L_0883CF44:
    { const bool branch_taken = ctx.gpr[3] != 0u;
    // nop
      if (branch_taken) {
          goto L_0883CF50;
      }
      goto L_0883CF4C;
    }
L_0883CF4C:
    ctx.set_gpr(2, 0u + 0u);
    goto L_0883CF50;
L_0883CF50:
    jump_target = ctx.gpr[31];
    // nop
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_0883CF58:
    ctx.set_gpr(29, ctx.gpr[29] + static_cast<std::uint32_t>(-48));
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(28), ctx.gpr[31]);
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(24), ctx.gpr[19]);
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(20), ctx.gpr[18]);
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(16), ctx.gpr[17]);
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(12), ctx.gpr[16]);
    ctx.set_gpr(16, ctx.gpr[4] + 0u);
    ctx.set_gpr(4, ctx.gpr[29] + static_cast<std::uint32_t>(44));
    ctx.set_gpr(31, 0x0883CF80u);
    ctx.set_gpr(5, 0u + 0u);
    goto L_0883D530;
L_0883CF80:
    ctx.set_gpr(2, 1u << 16u);
    ctx.set_gpr(2, ctx.gpr[16] + ctx.gpr[2]);
    ctx.set_gpr(2, rt.memory().aot_load32(ctx.gpr[2] + static_cast<std::uint32_t>(-24172)));
    ctx.set_gpr(1, ctx.gpr[2] < static_cast<std::uint32_t>(7) ? 1u : 0u);
    if (ctx.gpr[1] == 0u) {
    ctx.set_gpr(4, ctx.gpr[29] + static_cast<std::uint32_t>(44));
        goto L_0883D348;
    }
    goto L_0883CF98;
L_0883CF98:
    ctx.set_gpr(3, 2225u << 16u);
    ctx.set_gpr(2, ctx.gpr[2] << 2u);
    ctx.set_gpr(3, ctx.gpr[3] + static_cast<std::uint32_t>(8212));
    ctx.set_gpr(2, ctx.gpr[2] + ctx.gpr[3]);
    ctx.set_gpr(2, rt.memory().aot_load32(ctx.gpr[2] + static_cast<std::uint32_t>(0)));
    jump_target = ctx.gpr[2];
    // nop
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_0883CFB4:
    ctx.set_gpr(5, 0u + static_cast<std::uint32_t>(16));
    ctx.set_gpr(2, 2233u << 16u);
    rt.memory().aot_store32(ctx.gpr[2] + static_cast<std::uint32_t>(8980), ctx.gpr[5]);
    ctx.set_gpr(2, 2233u << 16u);
    rt.memory().aot_store32(ctx.gpr[2] + static_cast<std::uint32_t>(8984), ctx.gpr[5]);
    ctx.set_gpr(3, 0u + static_cast<std::uint32_t>(12));
    ctx.set_gpr(2, 2233u << 16u);
    rt.memory().aot_store32(ctx.gpr[2] + static_cast<std::uint32_t>(8988), ctx.gpr[3]);
    ctx.set_gpr(2, 2233u << 16u);
    ctx.set_gpr(4, 2233u << 16u);
    rt.memory().aot_store32(ctx.gpr[2] + static_cast<std::uint32_t>(8992), ctx.gpr[3]);
    ctx.set_gpr(4, ctx.gpr[4] + static_cast<std::uint32_t>(8996));
    ctx.set_gpr(31, 0x0883CFECu);
    ctx.set_gpr(6, ctx.gpr[5] + 0u);
    goto L_0883D4E0;
L_0883CFEC:
    ctx.set_gpr(2, 1u << 16u);
    ctx.set_gpr(3, 0u + static_cast<std::uint32_t>(3));
    ctx.set_gpr(2, ctx.gpr[16] + ctx.gpr[2]);
    rt.memory().aot_store32(ctx.gpr[2] + static_cast<std::uint32_t>(-24164), ctx.gpr[3]);
    ctx.set_gpr(2, 1u << 16u);
    ctx.set_gpr(2, ctx.gpr[16] + ctx.gpr[2]);
    rt.memory().aot_store32(ctx.gpr[2] + static_cast<std::uint32_t>(-24176), 0u);
    ctx.set_gpr(31, 0x0883D010u);
    rt.memory().aot_store32(ctx.gpr[16] + static_cast<std::uint32_t>(40), 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0017_entry, 17u, 175u, 0x08848BC4u>(ctx, &aot_mem) && ctx.pc == 0x0883D010u) goto L_0883D010;
    return;
L_0883D010:
    ctx.set_gpr(4, ctx.gpr[16] + static_cast<std::uint32_t>(8288));
    ctx.set_gpr(5, ctx.gpr[2] + 0u);
    ctx.set_gpr(31, 0x0883D020u);
    ctx.set_gpr(4, ctx.gpr[4] + static_cast<std::uint32_t>(32760));
    goto L_0883D4B8;
L_0883D020:
    ctx.set_gpr(2, 0u + static_cast<std::uint32_t>(-1));
    rt.memory().aot_store32(ctx.gpr[16] + static_cast<std::uint32_t>(8), ctx.gpr[2]);
    rt.memory().aot_store32(ctx.gpr[16] + static_cast<std::uint32_t>(12), ctx.gpr[2]);
    rt.memory().aot_store32(ctx.gpr[16] + static_cast<std::uint32_t>(16), ctx.gpr[2]);
    rt.memory().aot_store32(ctx.gpr[16] + static_cast<std::uint32_t>(20), ctx.gpr[2]);
    rt.memory().aot_store32(ctx.gpr[16] + static_cast<std::uint32_t>(24), ctx.gpr[2]);
    rt.memory().aot_store32(ctx.gpr[16] + static_cast<std::uint32_t>(28), ctx.gpr[2]);
    rt.memory().aot_store32(ctx.gpr[16] + static_cast<std::uint32_t>(32), ctx.gpr[2]);
    rt.memory().aot_store32(ctx.gpr[16] + static_cast<std::uint32_t>(36), ctx.gpr[2]);
    ctx.set_gpr(2, 1u << 16u);
    ctx.set_gpr(2, ctx.gpr[16] + ctx.gpr[2]);
    ctx.set_gpr(3, rt.memory().aot_load32(ctx.gpr[2] + static_cast<std::uint32_t>(-24172)));
    ctx.set_gpr(2, 1u << 16u);
    ctx.set_gpr(2, ctx.gpr[16] + ctx.gpr[2]);
    ctx.set_gpr(3, ctx.gpr[3] + static_cast<std::uint32_t>(1));
    { const bool branch_taken = 0u == 0u;
    rt.memory().aot_store32(ctx.gpr[2] + static_cast<std::uint32_t>(-24172), ctx.gpr[3]);
      if (branch_taken) {
          goto L_0883D344;
      }
      goto L_0883D064;
    }
L_0883D064:
    ctx.set_gpr(31, 0x0883D06Cu);
    ctx.set_gpr(4, ctx.gpr[16] + 0u);
    goto L_0883FF70;
L_0883D06C:
    ctx.set_gpr(3, 0u + static_cast<std::uint32_t>(-1));
    { const bool branch_taken = ctx.gpr[2] == ctx.gpr[3];
    // nop
      if (branch_taken) {
          goto L_0883D344;
      }
      goto L_0883D078;
    }
L_0883D078:
    ctx.set_gpr(2, 1u << 16u);
    ctx.set_gpr(2, ctx.gpr[16] + ctx.gpr[2]);
    ctx.set_gpr(3, rt.memory().aot_load32(ctx.gpr[2] + static_cast<std::uint32_t>(-24172)));
    ctx.set_gpr(2, 1u << 16u);
    ctx.set_gpr(2, ctx.gpr[16] + ctx.gpr[2]);
    ctx.set_gpr(3, ctx.gpr[3] + static_cast<std::uint32_t>(1));
    { const bool branch_taken = 0u == 0u;
    rt.memory().aot_store32(ctx.gpr[2] + static_cast<std::uint32_t>(-24172), ctx.gpr[3]);
      if (branch_taken) {
          goto L_0883D344;
      }
      goto L_0883D098;
    }
L_0883D098:
    ctx.set_gpr(31, 0x0883D0A0u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0017_entry, 17u, 187u, 0x08848C54u>(ctx, &aot_mem) && ctx.pc == 0x0883D0A0u) goto L_0883D0A0;
    return;
L_0883D0A0:
    ctx.set_gpr(31, 0x0883D0A8u);
    ctx.set_gpr(4, ctx.gpr[2] + 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0170_entry, 170u, 1038u, 0x08AAFF54u>(ctx, &aot_mem) && ctx.pc == 0x0883D0A8u) goto L_0883D0A8;
    return;
L_0883D0A8:
    { const bool branch_taken = ctx.gpr[2] == 0u;
    // nop
      if (branch_taken) {
          goto L_0883D344;
      }
      goto L_0883D0B0;
    }
L_0883D0B0:
    ctx.set_gpr(2, 1u << 16u);
    ctx.set_gpr(2, ctx.gpr[16] + ctx.gpr[2]);
    rt.memory().aot_store32(ctx.gpr[2] + static_cast<std::uint32_t>(-24168), 0u);
    ctx.set_gpr(2, 1u << 16u);
    ctx.set_gpr(2, ctx.gpr[16] + ctx.gpr[2]);
    ctx.set_gpr(3, rt.memory().aot_load32(ctx.gpr[2] + static_cast<std::uint32_t>(-24172)));
    ctx.set_gpr(2, 1u << 16u);
    ctx.set_gpr(2, ctx.gpr[16] + ctx.gpr[2]);
    ctx.set_gpr(3, ctx.gpr[3] + static_cast<std::uint32_t>(1));
    { const bool branch_taken = 0u == 0u;
    rt.memory().aot_store32(ctx.gpr[2] + static_cast<std::uint32_t>(-24172), ctx.gpr[3]);
      if (branch_taken) {
          goto L_0883D344;
      }
      goto L_0883D0DC;
    }
L_0883D0DC:
    ctx.set_gpr(31, 0x0883D0E4u);
    ctx.set_gpr(4, ctx.gpr[16] + 0u);
    goto L_0883DE88;
L_0883D0E4:
    { const bool branch_taken = ctx.gpr[2] == 0u;
    // nop
      if (branch_taken) {
          goto L_0883D344;
      }
      goto L_0883D0EC;
    }
L_0883D0EC:
    ctx.set_gpr(2, 1u << 16u);
    ctx.set_gpr(2, ctx.gpr[16] + ctx.gpr[2]);
    ctx.set_gpr(3, rt.memory().aot_load32(ctx.gpr[2] + static_cast<std::uint32_t>(-24172)));
    ctx.set_gpr(2, 1u << 16u);
    ctx.set_gpr(2, ctx.gpr[16] + ctx.gpr[2]);
    ctx.set_gpr(3, ctx.gpr[3] + static_cast<std::uint32_t>(1));
    { const bool branch_taken = 0u == 0u;
    rt.memory().aot_store32(ctx.gpr[2] + static_cast<std::uint32_t>(-24172), ctx.gpr[3]);
      if (branch_taken) {
          goto L_0883D344;
      }
      goto L_0883D10C;
    }
L_0883D10C:
    ctx.set_gpr(31, 0x0883D114u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0017_entry, 17u, 187u, 0x08848C54u>(ctx, &aot_mem) && ctx.pc == 0x0883D114u) goto L_0883D114;
    return;
L_0883D114:
    ctx.set_gpr(31, 0x0883D11Cu);
    ctx.set_gpr(4, ctx.gpr[2] + 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0170_entry, 170u, 1038u, 0x08AAFF54u>(ctx, &aot_mem) && ctx.pc == 0x0883D11Cu) goto L_0883D11C;
    return;
L_0883D11C:
    { const bool branch_taken = ctx.gpr[2] == 0u;
    // nop
      if (branch_taken) {
          goto L_0883D344;
      }
      goto L_0883D124;
    }
L_0883D124:
    ctx.set_gpr(31, 0x0883D12Cu);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0017_entry, 17u, 187u, 0x08848C54u>(ctx, &aot_mem) && ctx.pc == 0x0883D12Cu) goto L_0883D12C;
    return;
L_0883D12C:
    ctx.set_gpr(4, ctx.gpr[2] + 0u);
    ctx.set_gpr(2, rt.memory().aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(40)));
    ctx.set_gpr(31, 0x0883D13Cu);
    ctx.set_gpr(5, ctx.gpr[2] + static_cast<std::uint32_t>(10));
    if (rt.invoke_chained_direct<&recomp_unit_0171_entry, 171u, 2u, 0x08AB0008u>(ctx, &aot_mem) && ctx.pc == 0x0883D13Cu) goto L_0883D13C;
    return;
L_0883D13C:
    ctx.set_gpr(2, 1u << 16u);
    ctx.set_gpr(2, ctx.gpr[16] + ctx.gpr[2]);
    ctx.set_gpr(3, rt.memory().aot_load32(ctx.gpr[2] + static_cast<std::uint32_t>(-24172)));
    ctx.set_gpr(2, 1u << 16u);
    ctx.set_gpr(2, ctx.gpr[16] + ctx.gpr[2]);
    ctx.set_gpr(3, ctx.gpr[3] + static_cast<std::uint32_t>(1));
    { const bool branch_taken = 0u == 0u;
    rt.memory().aot_store32(ctx.gpr[2] + static_cast<std::uint32_t>(-24172), ctx.gpr[3]);
      if (branch_taken) {
          goto L_0883D344;
      }
      goto L_0883D15C;
    }
L_0883D15C:
    ctx.set_gpr(31, 0x0883D164u);
    ctx.set_gpr(4, 0u + static_cast<std::uint32_t>(4));
    if (rt.invoke_chained_direct<&recomp_unit_0192_entry, 192u, 518u, 0x08B06174u>(ctx, &aot_mem) && ctx.pc == 0x0883D164u) goto L_0883D164;
    return;
L_0883D164:
    ctx.set_gpr(31, 0x0883D16Cu);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0017_entry, 17u, 187u, 0x08848C54u>(ctx, &aot_mem) && ctx.pc == 0x0883D16Cu) goto L_0883D16C;
    return;
L_0883D16C:
    ctx.set_gpr(5, ctx.gpr[2] + 0u);
    ctx.set_gpr(31, 0x0883D178u);
    ctx.set_gpr(4, ctx.gpr[29] + static_cast<std::uint32_t>(40));
    if (rt.invoke_chained_direct<&recomp_unit_0171_entry, 171u, 3u, 0x08AB001Cu>(ctx, &aot_mem) && ctx.pc == 0x0883D178u) goto L_0883D178;
    return;
L_0883D178:
    ctx.set_gpr(4, ctx.gpr[29] + static_cast<std::uint32_t>(44));
    ctx.set_gpr(31, 0x0883D184u);
    ctx.set_gpr(5, ctx.gpr[29] + static_cast<std::uint32_t>(40));
    goto L_0883D48C;
L_0883D184:
    ctx.set_gpr(4, ctx.gpr[29] + static_cast<std::uint32_t>(40));
    ctx.set_gpr(31, 0x0883D190u);
    ctx.set_gpr(5, 0u + static_cast<std::uint32_t>(-1));
    goto L_0883D3DC;
L_0883D190:
    ctx.set_gpr(31, 0x0883D198u);
    ctx.set_gpr(4, 0u + 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0192_entry, 192u, 518u, 0x08B06174u>(ctx, &aot_mem) && ctx.pc == 0x0883D198u) goto L_0883D198;
    return;
L_0883D198:
    ctx.set_gpr(31, 0x0883D1A0u);
    ctx.set_gpr(4, ctx.gpr[29] + static_cast<std::uint32_t>(44));
    goto L_0883D3D4;
L_0883D1A0:
    { const bool branch_taken = ctx.gpr[2] == 0u;
    // nop
      if (branch_taken) {
          goto L_0883D344;
      }
      goto L_0883D1A8;
    }
L_0883D1A8:
    ctx.set_gpr(4, ctx.gpr[16] + static_cast<std::uint32_t>(8288));
    ctx.set_gpr(31, 0x0883D1B4u);
    ctx.set_gpr(4, ctx.gpr[4] + static_cast<std::uint32_t>(32760));
    goto L_0883D3CC;
L_0883D1B4:
    ctx.set_gpr(19, ctx.gpr[2] + 0u);
    ctx.set_gpr(31, 0x0883D1C0u);
    ctx.set_gpr(4, ctx.gpr[29] + static_cast<std::uint32_t>(44));
    goto L_0883D3C4;
L_0883D1C0:
    ctx.set_gpr(31, 0x0883D1C8u);
    ctx.set_gpr(4, ctx.gpr[2] + 0u);
    goto L_0883D3BC;
L_0883D1C8:
    ctx.set_gpr(18, ctx.gpr[2] + 0u);
    ctx.set_gpr(31, 0x0883D1D4u);
    ctx.set_gpr(4, ctx.gpr[29] + static_cast<std::uint32_t>(44));
    goto L_0883D3C4;
L_0883D1D4:
    ctx.set_gpr(31, 0x0883D1DCu);
    ctx.set_gpr(4, ctx.gpr[2] + 0u);
    goto L_0883D3B4;
L_0883D1DC:
    ctx.set_gpr(17, ctx.gpr[2] + 0u);
    ctx.set_gpr(31, 0x0883D1E8u);
    ctx.set_gpr(4, ctx.gpr[29] + static_cast<std::uint32_t>(44));
    goto L_0883D3C4;
L_0883D1E8:
    ctx.set_gpr(31, 0x0883D1F0u);
    ctx.set_gpr(4, ctx.gpr[2] + 0u);
    goto L_0883D3AC;
L_0883D1F0:
    ctx.set_gpr(25, rt.memory().aot_load32(ctx.gpr[19] + static_cast<std::uint32_t>(0)));
    ctx.set_gpr(5, ctx.gpr[18] + 0u);
    ctx.set_gpr(6, ctx.gpr[17] + 0u);
    ctx.set_gpr(25, rt.memory().aot_load32(ctx.gpr[25] + static_cast<std::uint32_t>(472)));
    ctx.set_gpr(4, ctx.gpr[19] + 0u);
    ctx.set_gpr(7, ctx.gpr[2] + 0u);
    ctx.set_gpr(8, 0u + 0u);
    jump_target = ctx.gpr[25];
    ctx.set_gpr(31, 0x0883D214u);
    ctx.set_gpr(9, 0u + 0u);
    ctx.pc = jump_target;
    if (rt.invoke_chained_call(ctx, &aot_mem) && ctx.pc == 0x0883D214u) goto L_0883D214;
    return;
L_0883D214:
    ctx.set_gpr(3, rt.memory().aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(40)));
    ctx.set_gpr(4, ctx.gpr[16] + static_cast<std::uint32_t>(8288));
    ctx.set_gpr(4, ctx.gpr[4] + static_cast<std::uint32_t>(32760));
    ctx.set_gpr(3, ctx.gpr[3] << 2u);
    ctx.set_gpr(3, ctx.gpr[3] + ctx.gpr[16]);
    ctx.set_gpr(31, 0x0883D230u);
    rt.memory().aot_store32(ctx.gpr[3] + static_cast<std::uint32_t>(8), ctx.gpr[2]);
    goto L_0883D3CC;
L_0883D230:
    ctx.set_gpr(17, ctx.gpr[2] + 0u);
    ctx.set_gpr(31, 0x0883D23Cu);
    ctx.set_gpr(4, ctx.gpr[29] + static_cast<std::uint32_t>(44));
    goto L_0883D3D4;
L_0883D23C:
    ctx.set_gpr(3, rt.memory().aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(40)));
    ctx.set_gpr(25, rt.memory().aot_load32(ctx.gpr[17] + static_cast<std::uint32_t>(0)));
    ctx.set_gpr(4, ctx.gpr[17] + 0u);
    ctx.set_gpr(3, ctx.gpr[3] << 2u);
    ctx.set_gpr(3, ctx.gpr[3] + ctx.gpr[16]);
    ctx.set_gpr(5, rt.memory().aot_load32(ctx.gpr[3] + static_cast<std::uint32_t>(8)));
    ctx.set_gpr(25, rt.memory().aot_load32(ctx.gpr[25] + static_cast<std::uint32_t>(520)));
    jump_target = ctx.gpr[25];
    ctx.set_gpr(31, 0x0883D260u);
    ctx.set_gpr(6, ctx.gpr[2] + 0u);
    ctx.pc = jump_target;
    if (rt.invoke_chained_call(ctx, &aot_mem) && ctx.pc == 0x0883D260u) goto L_0883D260;
    return;
L_0883D260:
    if (ctx.gpr[2] != 0u) {
    ctx.set_gpr(3, rt.memory().aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(40)));
        goto L_0883D2AC;
    }
    goto L_0883D268;
L_0883D268:
    ctx.set_gpr(4, ctx.gpr[16] + static_cast<std::uint32_t>(8288));
    ctx.set_gpr(31, 0x0883D274u);
    ctx.set_gpr(4, ctx.gpr[4] + static_cast<std::uint32_t>(32760));
    goto L_0883D3CC;
L_0883D274:
    ctx.set_gpr(25, rt.memory().aot_load32(ctx.gpr[2] + static_cast<std::uint32_t>(0)));
    ctx.set_gpr(3, rt.memory().aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(40)));
    ctx.set_gpr(4, ctx.gpr[2] + 0u);
    ctx.set_gpr(25, rt.memory().aot_load32(ctx.gpr[25] + static_cast<std::uint32_t>(516)));
    ctx.set_gpr(2, ctx.gpr[3] << 2u);
    ctx.set_gpr(2, ctx.gpr[2] + ctx.gpr[16]);
    jump_target = ctx.gpr[25];
    ctx.set_gpr(31, 0x0883D294u);
    ctx.set_gpr(5, rt.memory().aot_load32(ctx.gpr[2] + static_cast<std::uint32_t>(8)));
    ctx.pc = jump_target;
    if (rt.invoke_chained_call(ctx, &aot_mem) && ctx.pc == 0x0883D294u) goto L_0883D294;
    return;
L_0883D294:
    ctx.set_gpr(2, rt.memory().aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(40)));
    ctx.set_gpr(3, 0u + static_cast<std::uint32_t>(-1));
    ctx.set_gpr(2, ctx.gpr[2] << 2u);
    ctx.set_gpr(2, ctx.gpr[2] + ctx.gpr[16]);
    rt.memory().aot_store32(ctx.gpr[2] + static_cast<std::uint32_t>(8), ctx.gpr[3]);
    ctx.set_gpr(3, rt.memory().aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(40)));
    goto L_0883D2AC;
L_0883D2AC:
    ctx.set_gpr(2, 0u + static_cast<std::uint32_t>(8));
    ctx.set_gpr(3, ctx.gpr[3] + static_cast<std::uint32_t>(1));
    { const bool branch_taken = ctx.gpr[3] != ctx.gpr[2];
    rt.memory().aot_store32(ctx.gpr[16] + static_cast<std::uint32_t>(40), ctx.gpr[3]);
      if (branch_taken) {
          goto L_0883D2DC;
      }
      goto L_0883D2BC;
    }
L_0883D2BC:
    ctx.set_gpr(2, 1u << 16u);
    ctx.set_gpr(2, ctx.gpr[16] + ctx.gpr[2]);
    ctx.set_gpr(3, rt.memory().aot_load32(ctx.gpr[2] + static_cast<std::uint32_t>(-24172)));
    ctx.set_gpr(2, 1u << 16u);
    ctx.set_gpr(2, ctx.gpr[16] + ctx.gpr[2]);
    ctx.set_gpr(3, ctx.gpr[3] + static_cast<std::uint32_t>(1));
    { const bool branch_taken = 0u == 0u;
    rt.memory().aot_store32(ctx.gpr[2] + static_cast<std::uint32_t>(-24172), ctx.gpr[3]);
      if (branch_taken) {
          goto L_0883D2F8;
      }
      goto L_0883D2DC;
    }
L_0883D2DC:
    ctx.set_gpr(2, 1u << 16u);
    ctx.set_gpr(2, ctx.gpr[16] + ctx.gpr[2]);
    ctx.set_gpr(3, rt.memory().aot_load32(ctx.gpr[2] + static_cast<std::uint32_t>(-24172)));
    ctx.set_gpr(2, 1u << 16u);
    ctx.set_gpr(2, ctx.gpr[16] + ctx.gpr[2]);
    ctx.set_gpr(3, ctx.gpr[3] + static_cast<std::uint32_t>(-1));
    rt.memory().aot_store32(ctx.gpr[2] + static_cast<std::uint32_t>(-24172), ctx.gpr[3]);
    goto L_0883D2F8;
L_0883D2F8:
    ctx.set_gpr(4, ctx.gpr[29] + static_cast<std::uint32_t>(44));
    ctx.set_gpr(31, 0x0883D304u);
    ctx.set_gpr(5, 0u + 0u);
    goto L_0883D370;
L_0883D304:
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_0883D344;
      }
      goto L_0883D30C;
    }
L_0883D30C:
    ctx.set_gpr(2, 1u << 16u);
    ctx.set_gpr(2, ctx.gpr[16] + ctx.gpr[2]);
    rt.memory().aot_store32(ctx.gpr[2] + static_cast<std::uint32_t>(-24172), 0u);
    ctx.set_gpr(31, 0x0883D320u);
    ctx.set_gpr(4, ctx.gpr[16] + 0u);
    goto L_0883E254;
L_0883D320:
    ctx.set_gpr(31, 0x0883D328u);
    ctx.set_gpr(4, ctx.gpr[16] + 0u);
    goto L_0883F9F8;
L_0883D328:
    ctx.set_gpr(31, 0x0883D330u);
    ctx.set_gpr(4, 0u + static_cast<std::uint32_t>(1));
    if (rt.invoke_chained_direct<&recomp_unit_0019_entry, 19u, 618u, 0x08852494u>(ctx, &aot_mem) && ctx.pc == 0x0883D330u) goto L_0883D330;
    return;
L_0883D330:
    ctx.set_gpr(4, ctx.gpr[29] + static_cast<std::uint32_t>(44));
    ctx.set_gpr(31, 0x0883D33Cu);
    ctx.set_gpr(5, 0u + static_cast<std::uint32_t>(-1));
    goto L_0883D3DC;
L_0883D33C:
    { const bool branch_taken = 0u == 0u;
    ctx.set_gpr(2, 0u + static_cast<std::uint32_t>(1));
      if (branch_taken) {
          goto L_0883D354;
      }
      goto L_0883D344;
    }
L_0883D344:
    ctx.set_gpr(4, ctx.gpr[29] + static_cast<std::uint32_t>(44));
    goto L_0883D348;
L_0883D348:
    ctx.set_gpr(31, 0x0883D350u);
    ctx.set_gpr(5, 0u + static_cast<std::uint32_t>(-1));
    goto L_0883D3DC;
L_0883D350:
    ctx.set_gpr(2, 0u + 0u);
    goto L_0883D354;
L_0883D354:
    ctx.set_gpr(31, rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(28)));
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
L_0883D370:
    ctx.set_gpr(29, ctx.gpr[29] + static_cast<std::uint32_t>(-16));
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(12), ctx.gpr[31]);
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(8), ctx.gpr[16]);
    ctx.set_gpr(31, 0x0883D384u);
    ctx.set_gpr(16, ctx.gpr[4] + 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0085_entry, 85u, 61u, 0x089584C4u>(ctx, &aot_mem) && ctx.pc == 0x0883D384u) goto L_0883D384;
    return;
L_0883D384:
    ctx.set_gpr(2, ctx.gpr[16] + 0u);
    ctx.set_gpr(31, rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(12)));
    ctx.set_gpr(16, rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(8)));
    jump_target = ctx.gpr[31];
    ctx.set_gpr(29, ctx.gpr[29] + static_cast<std::uint32_t>(16));
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_0883D398:
    ctx.set_gpr(25, rt.memory().aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(0)));
    ctx.set_gpr(10, 0u + static_cast<std::uint32_t>(1));
    ctx.set_gpr(25, rt.memory().aot_load32(ctx.gpr[25] + static_cast<std::uint32_t>(468)));
    jump_target = ctx.gpr[25];
    // nop
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_0883D3AC:
    jump_target = ctx.gpr[31];
    ctx.set_gpr(2, rt.memory().aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(44)));
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_0883D3B4:
    jump_target = ctx.gpr[31];
    ctx.set_gpr(2, rt.memory().aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(12)));
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_0883D3BC:
    jump_target = ctx.gpr[31];
    ctx.set_gpr(2, rt.memory().aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(8)));
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_0883D3C4:
    jump_target = ctx.gpr[31];
    ctx.set_gpr(2, rt.memory().aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(0)));
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_0883D3CC:
    jump_target = ctx.gpr[31];
    ctx.set_gpr(2, rt.memory().aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(0)));
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_0883D3D4:
    jump_target = ctx.gpr[31];
    ctx.set_gpr(2, rt.memory().aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(0)));
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_0883D3DC:
    ctx.set_gpr(29, ctx.gpr[29] + static_cast<std::uint32_t>(-16));
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(12), ctx.gpr[31]);
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(8), ctx.gpr[17]);
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(4), ctx.gpr[16]);
    ctx.set_gpr(17, ctx.gpr[4] + 0u);
    { const bool branch_taken = ctx.gpr[17] == 0u;
    ctx.set_gpr(16, ctx.gpr[5] + 0u);
      if (branch_taken) {
          goto L_0883D414;
      }
      goto L_0883D3F8;
    }
L_0883D3F8:
    ctx.set_gpr(31, 0x0883D400u);
    ctx.set_gpr(4, rt.memory().aot_load32(ctx.gpr[17] + static_cast<std::uint32_t>(0)));
    goto L_0883D42C;
L_0883D400:
    ctx.set_gpr(2, static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int16_t>(ctx.gpr[16]))));
    if (static_cast<std::int32_t>(ctx.gpr[2]) <= 0) {
    ctx.set_gpr(2, ctx.gpr[17] + 0u);
        goto L_0883D418;
    }
    goto L_0883D40C;
L_0883D40C:
    ctx.set_gpr(31, 0x0883D414u);
    ctx.set_gpr(4, ctx.gpr[17] + 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0000_entry, 0u, 201u, 0x08804D84u>(ctx, &aot_mem) && ctx.pc == 0x0883D414u) goto L_0883D414;
    return;
L_0883D414:
    ctx.set_gpr(2, ctx.gpr[17] + 0u);
    goto L_0883D418;
L_0883D418:
    ctx.set_gpr(31, rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(12)));
    ctx.set_gpr(17, rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(8)));
    ctx.set_gpr(16, rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(4)));
    jump_target = ctx.gpr[31];
    ctx.set_gpr(29, ctx.gpr[29] + static_cast<std::uint32_t>(16));
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_0883D42C:
    ctx.set_gpr(29, ctx.gpr[29] + static_cast<std::uint32_t>(-16));
    { const bool branch_taken = ctx.gpr[4] == 0u;
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(12), ctx.gpr[31]);
      if (branch_taken) {
          goto L_0883D440;
      }
      goto L_0883D438;
    }
L_0883D438:
    ctx.set_gpr(31, 0x0883D440u);
    // nop
    goto L_0883D44C;
L_0883D440:
    ctx.set_gpr(31, rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(12)));
    jump_target = ctx.gpr[31];
    ctx.set_gpr(29, ctx.gpr[29] + static_cast<std::uint32_t>(16));
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_0883D44C:
    // nop
    goto L_0883D454;
L_0883D454:
    ctx.set_gpr(29, ctx.gpr[29] + static_cast<std::uint32_t>(-16));
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(12), ctx.gpr[31]);
    ctx.set_gpr(3, rt.memory().aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(4)));
    ctx.set_gpr(3, ctx.gpr[3] + static_cast<std::uint32_t>(-1));
    rt.memory().aot_store32(ctx.gpr[4] + static_cast<std::uint32_t>(4), ctx.gpr[3]);
    ctx.set_gpr(3, ctx.gpr[3] << 10u);
    ctx.set_gpr(3, ctx.gpr[3] >> 10u);
    if (ctx.gpr[3] != 0u) {
    ctx.set_gpr(31, rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(12)));
        goto L_0883D484;
    }
    goto L_0883D478;
L_0883D478:
    ctx.set_gpr(31, 0x0883D480u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0080_entry, 80u, 556u, 0x089467C8u>(ctx, &aot_mem) && ctx.pc == 0x0883D480u) goto L_0883D480;
    return;
L_0883D480:
    ctx.set_gpr(31, rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(12)));
    goto L_0883D484;
L_0883D484:
    jump_target = ctx.gpr[31];
    ctx.set_gpr(29, ctx.gpr[29] + static_cast<std::uint32_t>(16));
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_0883D48C:
    ctx.set_gpr(29, ctx.gpr[29] + static_cast<std::uint32_t>(-16));
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(12), ctx.gpr[31]);
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(8), ctx.gpr[16]);
    ctx.set_gpr(5, rt.memory().aot_load32(ctx.gpr[5] + static_cast<std::uint32_t>(0)));
    ctx.set_gpr(31, 0x0883D4A4u);
    ctx.set_gpr(16, ctx.gpr[4] + 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0085_entry, 85u, 61u, 0x089584C4u>(ctx, &aot_mem) && ctx.pc == 0x0883D4A4u) goto L_0883D4A4;
    return;
L_0883D4A4:
    ctx.set_gpr(2, ctx.gpr[16] + 0u);
    ctx.set_gpr(31, rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(12)));
    ctx.set_gpr(16, rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(8)));
    jump_target = ctx.gpr[31];
    ctx.set_gpr(29, ctx.gpr[29] + static_cast<std::uint32_t>(16));
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_0883D4B8:
    ctx.set_gpr(29, ctx.gpr[29] + static_cast<std::uint32_t>(-16));
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(12), ctx.gpr[31]);
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(8), ctx.gpr[16]);
    ctx.set_gpr(31, 0x0883D4CCu);
    ctx.set_gpr(16, ctx.gpr[4] + 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0085_entry, 85u, 61u, 0x089584C4u>(ctx, &aot_mem) && ctx.pc == 0x0883D4CCu) goto L_0883D4CC;
    return;
L_0883D4CC:
    ctx.set_gpr(2, ctx.gpr[16] + 0u);
    ctx.set_gpr(31, rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(12)));
    ctx.set_gpr(16, rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(8)));
    jump_target = ctx.gpr[31];
    ctx.set_gpr(29, ctx.gpr[29] + static_cast<std::uint32_t>(16));
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_0883D4E0:
    rt.memory().aot_store32(ctx.gpr[4] + static_cast<std::uint32_t>(0), ctx.gpr[5]);
    rt.memory().aot_store32(ctx.gpr[4] + static_cast<std::uint32_t>(4), ctx.gpr[6]);
    { const bool branch_taken = static_cast<std::int32_t>(ctx.gpr[5]) >= 0;
    ctx.set_gpr(3, static_cast<std::uint32_t>(static_cast<std::int32_t>(ctx.gpr[5]) >> 1u));
      if (branch_taken) {
          goto L_0883D4F8;
      }
      goto L_0883D4F0;
    }
L_0883D4F0:
    ctx.set_gpr(3, ctx.gpr[5] + static_cast<std::uint32_t>(1));
    ctx.set_gpr(3, static_cast<std::uint32_t>(static_cast<std::int32_t>(ctx.gpr[3]) >> 1u));
    goto L_0883D4F8;
L_0883D4F8:
    ctx.fpr[0] = std::bit_cast<float>(ctx.gpr[5]);
    ctx.fpr[2] = static_cast<float>(static_cast<std::int32_t>(ctx.fpr_bits(0)));
    rt.memory().aot_store32(ctx.gpr[4] + static_cast<std::uint32_t>(8), ctx.gpr[3]);
    rt.memory().aot_store32(ctx.gpr[4] + static_cast<std::uint32_t>(12), ctx.gpr[6]);
    ctx.set_gpr(3, 16384u << 16u);
    ctx.fpr[0] = std::bit_cast<float>(ctx.gpr[6]);
    ctx.fpr[1] = static_cast<float>(static_cast<std::int32_t>(ctx.fpr_bits(0)));
    rt.memory().aot_store32(ctx.gpr[4] + static_cast<std::uint32_t>(16), std::bit_cast<std::uint32_t>(ctx.fpr[2]));
    ctx.fpr[0] = std::bit_cast<float>(ctx.gpr[3]);
    ctx.fpr[0] = ctx.fpr[2] / ctx.fpr[0];
    rt.memory().aot_store32(ctx.gpr[4] + static_cast<std::uint32_t>(20), std::bit_cast<std::uint32_t>(ctx.fpr[1]));
    rt.memory().aot_store32(ctx.gpr[4] + static_cast<std::uint32_t>(24), std::bit_cast<std::uint32_t>(ctx.fpr[0]));
    jump_target = ctx.gpr[31];
    rt.memory().aot_store32(ctx.gpr[4] + static_cast<std::uint32_t>(28), std::bit_cast<std::uint32_t>(ctx.fpr[1]));
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_0883D530:
    ctx.set_gpr(29, ctx.gpr[29] + static_cast<std::uint32_t>(-16));
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(12), ctx.gpr[31]);
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(8), ctx.gpr[16]);
    rt.memory().aot_store32(ctx.gpr[4] + static_cast<std::uint32_t>(0), ctx.gpr[5]);
    ctx.set_gpr(16, ctx.gpr[4] + 0u);
    ctx.set_gpr(31, 0x0883D54Cu);
    ctx.set_gpr(4, ctx.gpr[5] + 0u);
    goto L_0883D560;
L_0883D54C:
    ctx.set_gpr(2, ctx.gpr[16] + 0u);
    ctx.set_gpr(31, rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(12)));
    ctx.set_gpr(16, rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(8)));
    jump_target = ctx.gpr[31];
    ctx.set_gpr(29, ctx.gpr[29] + static_cast<std::uint32_t>(16));
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_0883D560:
    ctx.set_gpr(29, ctx.gpr[29] + static_cast<std::uint32_t>(-16));
    { const bool branch_taken = ctx.gpr[4] == 0u;
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(12), ctx.gpr[31]);
      if (branch_taken) {
          goto L_0883D574;
      }
      goto L_0883D56C;
    }
L_0883D56C:
    ctx.set_gpr(31, 0x0883D574u);
    // nop
    goto L_0883D580;
L_0883D574:
    ctx.set_gpr(31, rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(12)));
    jump_target = ctx.gpr[31];
    ctx.set_gpr(29, ctx.gpr[29] + static_cast<std::uint32_t>(16));
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_0883D580:
    // nop
    goto L_0883D588;
L_0883D588:
    ctx.set_gpr(3, rt.memory().aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(4)));
    ctx.set_gpr(3, ctx.gpr[3] + static_cast<std::uint32_t>(1));
    jump_target = ctx.gpr[31];
    rt.memory().aot_store32(ctx.gpr[4] + static_cast<std::uint32_t>(4), ctx.gpr[3]);
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_0883D598:
    ctx.set_gpr(29, ctx.gpr[29] + static_cast<std::uint32_t>(-352));
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
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(20), std::bit_cast<std::uint32_t>(ctx.fpr[21]));
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(16), std::bit_cast<std::uint32_t>(ctx.fpr[20]));
    ctx.set_fpr_bits(21, ctx.fpr_bits(12));
    ctx.set_fpr_bits(20, ctx.fpr_bits(13));
    ctx.set_gpr(16, ctx.gpr[6] + 0u);
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(76), ctx.gpr[7]);
    ctx.set_gpr(21, ctx.gpr[4] + 0u);
    ctx.set_gpr(31, 0x0883D5E8u);
    ctx.set_gpr(30, ctx.gpr[5] + 0u);
    goto L_0883DA60;
L_0883D5E8:
    ctx.set_gpr(2, 2233u << 16u);
    ctx.set_gpr(3, ctx.gpr[16] << 3u);
    ctx.set_gpr(2, ctx.gpr[2] + static_cast<std::uint32_t>(8980));
    ctx.set_gpr(2, ctx.gpr[2] + ctx.gpr[3]);
    ctx.set_gpr(5, rt.memory().aot_load32(ctx.gpr[2] + static_cast<std::uint32_t>(0)));
    ctx.set_gpr(4, 2233u << 16u);
    ctx.set_gpr(2, 2233u << 16u);
    ctx.set_gpr(2, ctx.gpr[2] + static_cast<std::uint32_t>(8984));
    ctx.set_gpr(2, ctx.gpr[2] + ctx.gpr[3]);
    ctx.set_gpr(6, rt.memory().aot_load32(ctx.gpr[2] + static_cast<std::uint32_t>(0)));
    ctx.set_gpr(31, 0x0883D618u);
    ctx.set_gpr(4, ctx.gpr[4] + static_cast<std::uint32_t>(8996));
    goto L_0883D4E0;
L_0883D618:
    ctx.set_gpr(2, ctx.gpr[16] << 2u);
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(72), ctx.gpr[2]);
    ctx.set_gpr(18, ctx.gpr[2] + 0u);
    ctx.set_gpr(3, ctx.gpr[29] + static_cast<std::uint32_t>(84));
    rt.memory().aot_store8(ctx.gpr[29] + static_cast<std::uint32_t>(351), static_cast<std::uint8_t>(0u));
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(344), 0u);
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(340), 0u);
    ctx.set_gpr(20, 0u + 0u);
    ctx.set_gpr(19, 0u + 0u);
    { const bool branch_taken = ctx.gpr[3] == 0u;
    ctx.set_gpr(2, 0u + static_cast<std::uint32_t>(255));
      if (branch_taken) {
          goto L_0883D654;
      }
      goto L_0883D644;
    }
L_0883D644:
    rt.memory().aot_store8(ctx.gpr[3] + static_cast<std::uint32_t>(0), static_cast<std::uint8_t>(0u));
    ctx.set_gpr(2, ctx.gpr[2] + static_cast<std::uint32_t>(-1));
    { const bool branch_taken = ctx.gpr[2] != 0u;
    ctx.set_gpr(3, ctx.gpr[3] + static_cast<std::uint32_t>(1));
      if (branch_taken) {
          goto L_0883D644;
      }
      goto L_0883D654;
    }
L_0883D654:
    ctx.set_gpr(31, 0x0883D65Cu);
    ctx.set_gpr(4, ctx.gpr[30] + 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0004_entry, 4u, 508u, 0x08816764u>(ctx, &aot_mem) && ctx.pc == 0x0883D65Cu) goto L_0883D65C;
    return;
L_0883D65C:
    ctx.set_gpr(4, ctx.gpr[29] + static_cast<std::uint32_t>(80));
    ctx.set_gpr(17, ctx.gpr[2] + 0u);
    { const bool branch_taken = ctx.gpr[4] == 0u;
    ctx.set_gpr(3, 0u + static_cast<std::uint32_t>(2));
      if (branch_taken) {
          goto L_0883D67C;
      }
      goto L_0883D66C;
    }
L_0883D66C:
    rt.memory().aot_store8(ctx.gpr[4] + static_cast<std::uint32_t>(0), static_cast<std::uint8_t>(0u));
    ctx.set_gpr(3, ctx.gpr[3] + static_cast<std::uint32_t>(-1));
    { const bool branch_taken = ctx.gpr[3] != 0u;
    ctx.set_gpr(4, ctx.gpr[4] + static_cast<std::uint32_t>(1));
      if (branch_taken) {
          goto L_0883D66C;
      }
      goto L_0883D67C;
    }
L_0883D67C:
    if (static_cast<std::int32_t>(ctx.gpr[17]) <= 0) {
    ctx.set_gpr(31, rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(60)));
        goto L_0883D9E4;
    }
    goto L_0883D684;
L_0883D684:
    ctx.set_gpr(3, static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int8_t>(rt.memory().aot_load8(ctx.gpr[30] + static_cast<std::uint32_t>(0))))));
    { const bool branch_taken = ctx.gpr[3] == 0u;
    // nop
      if (branch_taken) {
          goto L_0883D9E0;
      }
      goto L_0883D690;
    }
L_0883D690:
    ctx.set_gpr(2, 1u << 16u);
    ctx.set_gpr(2, ctx.gpr[21] + ctx.gpr[2]);
    rt.memory().aot_store32(ctx.gpr[2] + static_cast<std::uint32_t>(-24208), std::bit_cast<std::uint32_t>(ctx.fpr[21]));
    ctx.set_gpr(2, 1u << 16u);
    ctx.set_gpr(2, ctx.gpr[21] + ctx.gpr[2]);
    rt.memory().aot_store32(ctx.gpr[2] + static_cast<std::uint32_t>(-24204), std::bit_cast<std::uint32_t>(ctx.fpr[20]));
    ctx.set_gpr(31, 0x0883D6B0u);
    ctx.set_gpr(4, ctx.gpr[21] + 0u);
    goto L_0883FA2C;
L_0883D6B0:
    ctx.fpr[12] = std::bit_cast<float>(0u);
    ctx.set_gpr(31, 0x0883D6BCu);
    ctx.set_gpr(4, ctx.gpr[21] + 0u);
    goto L_0883FB0C;
L_0883D6BC:
    ctx.set_gpr(31, 0x0883D6C4u);
    ctx.set_gpr(4, ctx.gpr[21] + 0u);
    goto L_0883FBF4;
L_0883D6C4:
    ctx.set_gpr(4, ctx.gpr[21] + static_cast<std::uint32_t>(8288));
    ctx.set_gpr(31, 0x0883D6D0u);
    ctx.set_gpr(4, ctx.gpr[4] + static_cast<std::uint32_t>(32760));
    goto L_0883D3CC;
L_0883D6D0:
    ctx.set_gpr(25, rt.memory().aot_load32(ctx.gpr[2] + static_cast<std::uint32_t>(0)));
    ctx.set_gpr(4, ctx.gpr[2] + 0u);
    ctx.set_gpr(25, rt.memory().aot_load32(ctx.gpr[25] + static_cast<std::uint32_t>(292)));
    jump_target = ctx.gpr[25];
    ctx.set_gpr(31, 0x0883D6E4u);
    ctx.set_gpr(5, 0u + 0u);
    ctx.pc = jump_target;
    if (rt.invoke_chained_call(ctx, &aot_mem) && ctx.pc == 0x0883D6E4u) goto L_0883D6E4;
    return;
L_0883D6E4:
    ctx.set_gpr(4, ctx.gpr[21] + static_cast<std::uint32_t>(8288));
    ctx.set_gpr(31, 0x0883D6F0u);
    ctx.set_gpr(4, ctx.gpr[4] + static_cast<std::uint32_t>(32760));
    goto L_0883D3CC;
L_0883D6F0:
    ctx.set_gpr(25, rt.memory().aot_load32(ctx.gpr[2] + static_cast<std::uint32_t>(0)));
    ctx.set_gpr(4, ctx.gpr[2] + 0u);
    ctx.set_gpr(25, rt.memory().aot_load32(ctx.gpr[25] + static_cast<std::uint32_t>(924)));
    jump_target = ctx.gpr[25];
    ctx.set_gpr(31, 0x0883D704u);
    ctx.set_gpr(5, 0u + 0u);
    ctx.pc = jump_target;
    if (rt.invoke_chained_call(ctx, &aot_mem) && ctx.pc == 0x0883D704u) goto L_0883D704;
    return;
L_0883D704:
    ctx.set_gpr(4, ctx.gpr[21] + static_cast<std::uint32_t>(8288));
    ctx.set_gpr(31, 0x0883D710u);
    ctx.set_gpr(4, ctx.gpr[4] + static_cast<std::uint32_t>(32760));
    goto L_0883D3CC;
L_0883D710:
    ctx.set_gpr(25, rt.memory().aot_load32(ctx.gpr[2] + static_cast<std::uint32_t>(0)));
    ctx.set_gpr(4, ctx.gpr[2] + 0u);
    ctx.set_gpr(25, rt.memory().aot_load32(ctx.gpr[25] + static_cast<std::uint32_t>(876)));
    jump_target = ctx.gpr[25];
    ctx.set_gpr(31, 0x0883D724u);
    ctx.set_gpr(5, 0u + 0u);
    ctx.pc = jump_target;
    if (rt.invoke_chained_call(ctx, &aot_mem) && ctx.pc == 0x0883D724u) goto L_0883D724;
    return;
L_0883D724:
    ctx.set_gpr(4, ctx.gpr[21] + static_cast<std::uint32_t>(8288));
    ctx.set_gpr(31, 0x0883D730u);
    ctx.set_gpr(4, ctx.gpr[4] + static_cast<std::uint32_t>(32760));
    goto L_0883D3CC;
L_0883D730:
    ctx.set_gpr(25, rt.memory().aot_load32(ctx.gpr[2] + static_cast<std::uint32_t>(0)));
    ctx.set_gpr(25, rt.memory().aot_load32(ctx.gpr[25] + static_cast<std::uint32_t>(628)));
    jump_target = ctx.gpr[25];
    ctx.set_gpr(31, 0x0883D740u);
    ctx.set_gpr(4, ctx.gpr[2] + 0u);
    ctx.pc = jump_target;
    if (rt.invoke_chained_call(ctx, &aot_mem) && ctx.pc == 0x0883D740u) goto L_0883D740;
    return;
L_0883D740:
    ctx.set_gpr(4, ctx.gpr[21] + static_cast<std::uint32_t>(8288));
    ctx.set_gpr(31, 0x0883D74Cu);
    ctx.set_gpr(4, ctx.gpr[4] + static_cast<std::uint32_t>(32760));
    goto L_0883D3CC;
L_0883D74C:
    ctx.set_gpr(25, rt.memory().aot_load32(ctx.gpr[2] + static_cast<std::uint32_t>(0)));
    ctx.set_gpr(4, ctx.gpr[2] + 0u);
    ctx.set_gpr(25, rt.memory().aot_load32(ctx.gpr[25] + static_cast<std::uint32_t>(624)));
    jump_target = ctx.gpr[25];
    ctx.set_gpr(31, 0x0883D760u);
    ctx.set_gpr(5, 0u + static_cast<std::uint32_t>(1));
    ctx.pc = jump_target;
    if (rt.invoke_chained_call(ctx, &aot_mem) && ctx.pc == 0x0883D760u) goto L_0883D760;
    return;
L_0883D760:
    ctx.set_gpr(4, ctx.gpr[21] + static_cast<std::uint32_t>(8288));
    ctx.set_gpr(31, 0x0883D76Cu);
    ctx.set_gpr(4, ctx.gpr[4] + static_cast<std::uint32_t>(32760));
    goto L_0883D3CC;
L_0883D76C:
    ctx.set_gpr(4, ctx.gpr[21] + static_cast<std::uint32_t>(8292));
    ctx.set_gpr(22, ctx.gpr[2] + 0u);
    ctx.set_gpr(31, 0x0883D77Cu);
    ctx.set_gpr(4, ctx.gpr[4] + static_cast<std::uint32_t>(32760));
    goto L_0883DA20;
L_0883D77C:
    ctx.set_gpr(25, rt.memory().aot_load32(ctx.gpr[22] + static_cast<std::uint32_t>(0)));
    ctx.set_gpr(5, ctx.gpr[2] + 0u);
    ctx.set_gpr(25, rt.memory().aot_load32(ctx.gpr[25] + static_cast<std::uint32_t>(220)));
    jump_target = ctx.gpr[25];
    ctx.set_gpr(31, 0x0883D790u);
    ctx.set_gpr(4, ctx.gpr[22] + 0u);
    ctx.pc = jump_target;
    if (rt.invoke_chained_call(ctx, &aot_mem) && ctx.pc == 0x0883D790u) goto L_0883D790;
    return;
L_0883D790:
    ctx.set_gpr(4, ctx.gpr[21] + static_cast<std::uint32_t>(8288));
    ctx.set_gpr(31, 0x0883D79Cu);
    ctx.set_gpr(4, ctx.gpr[4] + static_cast<std::uint32_t>(32760));
    goto L_0883D3CC;
L_0883D79C:
    ctx.set_gpr(25, rt.memory().aot_load32(ctx.gpr[2] + static_cast<std::uint32_t>(0)));
    ctx.set_gpr(3, ctx.gpr[16] << 4u);
    ctx.set_gpr(3, ctx.gpr[3] + ctx.gpr[21]);
    ctx.set_gpr(5, rt.memory().aot_load32(ctx.gpr[3] + static_cast<std::uint32_t>(8)));
    ctx.set_gpr(25, rt.memory().aot_load32(ctx.gpr[25] + static_cast<std::uint32_t>(500)));
    ctx.set_gpr(4, ctx.gpr[2] + 0u);
    jump_target = ctx.gpr[25];
    ctx.set_gpr(31, 0x0883D7BCu);
    ctx.set_gpr(6, 0u + 0u);
    ctx.pc = jump_target;
    if (rt.invoke_chained_call(ctx, &aot_mem) && ctx.pc == 0x0883D7BCu) goto L_0883D7BC;
    return;
L_0883D7BC:
    { const bool branch_taken = static_cast<std::int32_t>(ctx.gpr[17]) <= 0;
    ctx.set_gpr(16, 0u + 0u);
      if (branch_taken) {
          goto L_0883D9A8;
      }
      goto L_0883D7C4;
    }
L_0883D7C4:
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(340), 0u);
    goto L_0883D7C8;
L_0883D7C8:
    ctx.set_gpr(4, ctx.gpr[30] + ctx.gpr[16]);
    ctx.set_gpr(3, static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int8_t>(rt.memory().aot_load8(ctx.gpr[4] + static_cast<std::uint32_t>(0))))));
    ctx.set_gpr(2, 0u + static_cast<std::uint32_t>(13));
    if (ctx.gpr[3] == ctx.gpr[2]) {
    ctx.set_gpr(16, ctx.gpr[16] + static_cast<std::uint32_t>(1));
        goto L_0883D99C;
    }
    goto L_0883D7DC;
L_0883D7DC:
    ctx.set_gpr(2, 0u + static_cast<std::uint32_t>(10));
    { const bool branch_taken = ctx.gpr[3] == ctx.gpr[2];
    // nop
      if (branch_taken) {
          goto L_0883D998;
      }
      goto L_0883D7E8;
    }
L_0883D7E8:
    ctx.set_gpr(3, ctx.gpr[3] & 255u);
    ctx.set_gpr(2, 0u + static_cast<std::uint32_t>(32));
    if (ctx.gpr[3] != ctx.gpr[2]) {
    ctx.set_gpr(2, ctx.gpr[17] + static_cast<std::uint32_t>(-1));
        goto L_0883D800;
    }
    goto L_0883D7F8;
L_0883D7F8:
    { const bool branch_taken = 0u == 0u;
    ctx.set_gpr(20, ctx.gpr[20] + static_cast<std::uint32_t>(1));
      if (branch_taken) {
          goto L_0883D998;
      }
      goto L_0883D800;
    }
L_0883D800:
    ctx.set_gpr(1, static_cast<std::int32_t>(ctx.gpr[16]) < static_cast<std::int32_t>(ctx.gpr[2]) ? 1u : 0u);
    if (ctx.gpr[1] == 0u) {
    ctx.set_gpr(4, ctx.gpr[29] + static_cast<std::uint32_t>(84));
        goto L_0883D844;
    }
    goto L_0883D80C;
L_0883D80C:
    rt.memory().aot_store8(ctx.gpr[29] + static_cast<std::uint32_t>(80), static_cast<std::uint8_t>(ctx.gpr[3]));
    ctx.set_gpr(4, static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int8_t>(rt.memory().aot_load8(ctx.gpr[4] + static_cast<std::uint32_t>(1))))));
    ctx.set_gpr(3, rt.memory().aot_load8(ctx.gpr[29] + static_cast<std::uint32_t>(80)));
    ctx.set_gpr(2, 0u + static_cast<std::uint32_t>(129));
    { const bool branch_taken = ctx.gpr[3] != ctx.gpr[2];
    rt.memory().aot_store8(ctx.gpr[29] + static_cast<std::uint32_t>(81), static_cast<std::uint8_t>(ctx.gpr[4]));
      if (branch_taken) {
          goto L_0883D840;
      }
      goto L_0883D824;
    }
L_0883D824:
    ctx.set_gpr(3, rt.memory().aot_load8(ctx.gpr[29] + static_cast<std::uint32_t>(81)));
    ctx.set_gpr(2, 0u + static_cast<std::uint32_t>(64));
    { const bool branch_taken = ctx.gpr[3] != ctx.gpr[2];
    // nop
      if (branch_taken) {
          goto L_0883D840;
      }
      goto L_0883D834;
    }
L_0883D834:
    ctx.set_gpr(20, ctx.gpr[20] + static_cast<std::uint32_t>(1));
    { const bool branch_taken = 0u == 0u;
    ctx.set_gpr(16, ctx.gpr[16] + static_cast<std::uint32_t>(1));
      if (branch_taken) {
          goto L_0883D998;
      }
      goto L_0883D840;
    }
L_0883D840:
    ctx.set_gpr(4, ctx.gpr[29] + static_cast<std::uint32_t>(84));
    goto L_0883D844;
L_0883D844:
    ctx.set_gpr(5, 0u + 0u);
    ctx.set_gpr(31, 0x0883D850u);
    ctx.set_gpr(6, 0u + static_cast<std::uint32_t>(255));
    if (rt.invoke_chained_direct<&recomp_unit_0003_entry, 3u, 719u, 0x08812EE8u>(ctx, &aot_mem) && ctx.pc == 0x0883D850u) goto L_0883D850;
    return;
L_0883D850:
    ctx.set_gpr(4, ctx.gpr[21] + 0u);
    ctx.set_gpr(5, ctx.gpr[17] + 0u);
    ctx.set_gpr(6, ctx.gpr[29] + static_cast<std::uint32_t>(84));
    ctx.set_gpr(7, ctx.gpr[30] + 0u);
    ctx.set_gpr(8, ctx.gpr[16] + 0u);
    ctx.set_gpr(9, ctx.gpr[29] + static_cast<std::uint32_t>(344));
    ctx.set_gpr(10, ctx.gpr[29] + static_cast<std::uint32_t>(351));
    ctx.set_gpr(11, ctx.gpr[29] + static_cast<std::uint32_t>(340));
    ctx.set_gpr(31, 0x0883D878u);
    rt.memory().aot_store8(ctx.gpr[29] + static_cast<std::uint32_t>(351), static_cast<std::uint8_t>(0u));
    goto L_0883DBB0;
L_0883D878:
    ctx.set_gpr(22, ctx.gpr[2] + 0u);
    ctx.set_gpr(2, rt.memory().aot_load8(ctx.gpr[29] + static_cast<std::uint32_t>(351)));
    if (ctx.gpr[2] != 0u) {
    ctx.set_gpr(2, rt.memory().aot_load8(ctx.gpr[29] + static_cast<std::uint32_t>(351)));
        goto L_0883D97C;
    }
    goto L_0883D888;
L_0883D888:
    ctx.set_gpr(3, rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(344)));
    ctx.set_gpr(2, 31805u << 16u);
    ctx.set_gpr(2, ctx.gpr[2] | 9753u);
    { const std::int64_t product = static_cast<std::int64_t>(static_cast<std::int32_t>(ctx.gpr[2])) * static_cast<std::int64_t>(static_cast<std::int32_t>(ctx.gpr[3])); ctx.lo = static_cast<std::uint32_t>(product); ctx.hi = static_cast<std::uint32_t>(static_cast<std::uint64_t>(product) >> 32u); }
    ctx.set_gpr(2, ctx.hi);
    ctx.set_gpr(3, ctx.gpr[3] >> 31u);
    ctx.set_gpr(2, static_cast<std::uint32_t>(static_cast<std::int32_t>(ctx.gpr[2]) >> 10u));
    ctx.set_gpr(2, ctx.gpr[2] + ctx.gpr[3]);
    if (ctx.gpr[18] == ctx.gpr[2]) {
    ctx.set_gpr(4, ctx.gpr[21] + static_cast<std::uint32_t>(8288));
        goto L_0883D930;
    }
    goto L_0883D8B0;
L_0883D8B0:
    ctx.set_gpr(4, ctx.gpr[21] + static_cast<std::uint32_t>(8288));
    ctx.set_gpr(31, 0x0883D8BCu);
    ctx.set_gpr(4, ctx.gpr[4] + static_cast<std::uint32_t>(32760));
    goto L_0883D3CC;
L_0883D8BC:
    ctx.set_gpr(25, rt.memory().aot_load32(ctx.gpr[2] + static_cast<std::uint32_t>(0)));
    ctx.set_gpr(3, ctx.gpr[18] << 2u);
    ctx.set_gpr(3, ctx.gpr[21] + ctx.gpr[3]);
    ctx.set_gpr(5, rt.memory().aot_load32(ctx.gpr[3] + static_cast<std::uint32_t>(8)));
    ctx.set_gpr(25, rt.memory().aot_load32(ctx.gpr[25] + static_cast<std::uint32_t>(512)));
    jump_target = ctx.gpr[25];
    ctx.set_gpr(31, 0x0883D8D8u);
    ctx.set_gpr(4, ctx.gpr[2] + 0u);
    ctx.pc = jump_target;
    if (rt.invoke_chained_call(ctx, &aot_mem) && ctx.pc == 0x0883D8D8u) goto L_0883D8D8;
    return;
L_0883D8D8:
    ctx.set_gpr(3, rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(344)));
    ctx.set_gpr(2, 31805u << 16u);
    ctx.set_gpr(2, ctx.gpr[2] | 9753u);
    { const std::int64_t product = static_cast<std::int64_t>(static_cast<std::int32_t>(ctx.gpr[2])) * static_cast<std::int64_t>(static_cast<std::int32_t>(ctx.gpr[3])); ctx.lo = static_cast<std::uint32_t>(product); ctx.hi = static_cast<std::uint32_t>(static_cast<std::uint64_t>(product) >> 32u); }
    ctx.set_gpr(4, ctx.gpr[21] + static_cast<std::uint32_t>(8288));
    ctx.set_gpr(4, ctx.gpr[4] + static_cast<std::uint32_t>(32760));
    ctx.set_gpr(2, ctx.hi);
    ctx.set_gpr(3, ctx.gpr[3] >> 31u);
    ctx.set_gpr(2, static_cast<std::uint32_t>(static_cast<std::int32_t>(ctx.gpr[2]) >> 10u));
    ctx.set_gpr(3, ctx.gpr[2] + ctx.gpr[3]);
    ctx.set_gpr(2, rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(72)));
    ctx.set_gpr(31, 0x0883D90Cu);
    ctx.set_gpr(18, ctx.gpr[3] + ctx.gpr[2]);
    goto L_0883D3CC;
L_0883D90C:
    ctx.set_gpr(25, rt.memory().aot_load32(ctx.gpr[2] + static_cast<std::uint32_t>(0)));
    ctx.set_gpr(3, ctx.gpr[18] << 2u);
    ctx.set_gpr(3, ctx.gpr[21] + ctx.gpr[3]);
    ctx.set_gpr(5, rt.memory().aot_load32(ctx.gpr[3] + static_cast<std::uint32_t>(8)));
    ctx.set_gpr(25, rt.memory().aot_load32(ctx.gpr[25] + static_cast<std::uint32_t>(500)));
    ctx.set_gpr(4, ctx.gpr[2] + 0u);
    jump_target = ctx.gpr[25];
    ctx.set_gpr(31, 0x0883D92Cu);
    ctx.set_gpr(6, 0u + 0u);
    ctx.pc = jump_target;
    if (rt.invoke_chained_call(ctx, &aot_mem) && ctx.pc == 0x0883D92Cu) goto L_0883D92C;
    return;
L_0883D92C:
    ctx.set_gpr(4, ctx.gpr[21] + static_cast<std::uint32_t>(8288));
    goto L_0883D930;
L_0883D930:
    ctx.set_gpr(31, 0x0883D938u);
    ctx.set_gpr(4, ctx.gpr[4] + static_cast<std::uint32_t>(32760));
    goto L_0883D3CC;
L_0883D938:
    ctx.set_gpr(9, rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(76)));
    ctx.set_gpr(23, ctx.gpr[2] + 0u);
    ctx.set_gpr(6, ctx.gpr[16] - ctx.gpr[19]);
    ctx.set_gpr(4, ctx.gpr[21] + 0u);
    ctx.set_gpr(5, ctx.gpr[29] + static_cast<std::uint32_t>(84));
    ctx.set_gpr(7, ctx.gpr[22] + 0u);
    ctx.set_gpr(31, 0x0883D958u);
    ctx.set_gpr(8, ctx.gpr[20] + 0u);
    goto L_0883EC34;
L_0883D958:
    ctx.set_gpr(25, rt.memory().aot_load32(ctx.gpr[23] + static_cast<std::uint32_t>(0)));
    ctx.set_gpr(6, ctx.gpr[2] << 1u);
    ctx.set_gpr(4, ctx.gpr[23] + 0u);
    ctx.set_gpr(25, rt.memory().aot_load32(ctx.gpr[25] + static_cast<std::uint32_t>(276)));
    ctx.set_gpr(5, 0u + static_cast<std::uint32_t>(3));
    jump_target = ctx.gpr[25];
    ctx.set_gpr(31, 0x0883D974u);
    ctx.set_gpr(7, 0u + 0u);
    ctx.pc = jump_target;
    if (rt.invoke_chained_call(ctx, &aot_mem) && ctx.pc == 0x0883D974u) goto L_0883D974;
    return;
L_0883D974:
    ctx.set_gpr(20, ctx.gpr[20] + static_cast<std::uint32_t>(1));
    ctx.set_gpr(2, rt.memory().aot_load8(ctx.gpr[29] + static_cast<std::uint32_t>(351)));
    goto L_0883D97C;
L_0883D97C:
    ctx.set_gpr(4, rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(340)));
    ctx.set_gpr(3, ctx.gpr[22] + static_cast<std::uint32_t>(-1));
    ctx.set_gpr(2, ctx.gpr[2] << 1u);
    ctx.set_gpr(2, ctx.gpr[3] + ctx.gpr[2]);
    ctx.set_gpr(2, ctx.gpr[4] + ctx.gpr[2]);
    ctx.set_gpr(19, ctx.gpr[19] + ctx.gpr[4]);
    ctx.set_gpr(16, ctx.gpr[16] + ctx.gpr[2]);
    goto L_0883D998;
L_0883D998:
    ctx.set_gpr(16, ctx.gpr[16] + static_cast<std::uint32_t>(1));
    goto L_0883D99C;
L_0883D99C:
    ctx.set_gpr(2, static_cast<std::int32_t>(ctx.gpr[16]) < static_cast<std::int32_t>(ctx.gpr[17]) ? 1u : 0u);
    if (ctx.gpr[2] != 0u) {
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(340), 0u);
        goto L_0883D7C8;
    }
    goto L_0883D9A8;
L_0883D9A8:
    ctx.set_gpr(4, ctx.gpr[21] + static_cast<std::uint32_t>(8288));
    ctx.set_gpr(31, 0x0883D9B4u);
    ctx.set_gpr(4, ctx.gpr[4] + static_cast<std::uint32_t>(32760));
    goto L_0883D3CC;
L_0883D9B4:
    ctx.set_gpr(25, rt.memory().aot_load32(ctx.gpr[2] + static_cast<std::uint32_t>(0)));
    ctx.set_gpr(3, ctx.gpr[18] << 2u);
    ctx.set_gpr(3, ctx.gpr[3] + ctx.gpr[21]);
    ctx.set_gpr(5, rt.memory().aot_load32(ctx.gpr[3] + static_cast<std::uint32_t>(8)));
    ctx.set_gpr(25, rt.memory().aot_load32(ctx.gpr[25] + static_cast<std::uint32_t>(512)));
    jump_target = ctx.gpr[25];
    ctx.set_gpr(31, 0x0883D9D0u);
    ctx.set_gpr(4, ctx.gpr[2] + 0u);
    ctx.pc = jump_target;
    if (rt.invoke_chained_call(ctx, &aot_mem) && ctx.pc == 0x0883D9D0u) goto L_0883D9D0;
    return;
L_0883D9D0:
    ctx.set_gpr(31, 0x0883D9D8u);
    ctx.set_gpr(4, ctx.gpr[21] + 0u);
    goto L_0883FDF4;
L_0883D9D8:
    ctx.set_gpr(31, 0x0883D9E0u);
    ctx.set_gpr(4, ctx.gpr[21] + 0u);
    goto L_0883FA9C;
L_0883D9E0:
    ctx.set_gpr(31, rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(60)));
    goto L_0883D9E4;
L_0883D9E4:
    ctx.set_gpr(30, rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(56)));
    ctx.set_gpr(23, rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(52)));
    ctx.set_gpr(22, rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(48)));
    ctx.set_gpr(21, rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(44)));
    ctx.set_gpr(20, rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(40)));
    ctx.set_gpr(19, rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(36)));
    ctx.set_gpr(18, rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(32)));
    ctx.set_gpr(17, rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(28)));
    ctx.set_gpr(16, rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(24)));
    ctx.fpr[21] = std::bit_cast<float>(rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(20)));
    ctx.fpr[20] = std::bit_cast<float>(rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(16)));
    jump_target = ctx.gpr[31];
    ctx.set_gpr(29, ctx.gpr[29] + static_cast<std::uint32_t>(352));
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_0883DA18:
    jump_target = ctx.gpr[31];
    // nop
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_0883DA20:
    jump_target = ctx.gpr[31];
    ctx.set_gpr(2, rt.memory().aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(0)));
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_0883DA28:
    jump_target = ctx.gpr[31];
    // nop
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_0883DA30:
    ctx.set_gpr(2, ctx.gpr[5] & 255u);
    ctx.set_gpr(3, 0u + static_cast<std::uint32_t>(92));
    if (ctx.gpr[2] != ctx.gpr[3]) {
    ctx.set_gpr(2, 0u + 0u);
        goto L_0883DA58;
    }
    goto L_0883DA40;
L_0883DA40:
    ctx.set_gpr(2, ctx.gpr[6] & 255u);
    { const bool branch_taken = ctx.gpr[2] != ctx.gpr[3];
    // nop
      if (branch_taken) {
          goto L_0883DA54;
      }
      goto L_0883DA4C;
    }
L_0883DA4C:
    { const bool branch_taken = 0u == 0u;
    ctx.set_gpr(2, 0u + static_cast<std::uint32_t>(1));
      if (branch_taken) {
          goto L_0883DA58;
      }
      goto L_0883DA54;
    }
L_0883DA54:
    ctx.set_gpr(2, 0u + 0u);
    goto L_0883DA58;
L_0883DA58:
    jump_target = ctx.gpr[31];
    // nop
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_0883DA60:
    ctx.set_gpr(29, ctx.gpr[29] + static_cast<std::uint32_t>(-32));
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(28), ctx.gpr[31]);
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(24), ctx.gpr[21]);
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(20), ctx.gpr[20]);
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(16), ctx.gpr[19]);
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(12), ctx.gpr[18]);
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(8), ctx.gpr[17]);
    ctx.set_gpr(20, ctx.gpr[5] + 0u);
    ctx.set_gpr(21, ctx.gpr[4] + 0u);
    ctx.set_gpr(4, ctx.gpr[20] + 0u);
    ctx.set_gpr(31, 0x0883DA90u);
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(4), ctx.gpr[16]);
    if (rt.invoke_chained_direct<&recomp_unit_0004_entry, 4u, 508u, 0x08816764u>(ctx, &aot_mem) && ctx.pc == 0x0883DA90u) goto L_0883DA90;
    return;
L_0883DA90:
    ctx.set_gpr(17, ctx.gpr[2] + 0u);
    { const bool branch_taken = static_cast<std::int32_t>(ctx.gpr[17]) <= 0;
    ctx.set_gpr(19, 0u + 0u);
      if (branch_taken) {
          goto L_0883DB4C;
      }
      goto L_0883DA9C;
    }
L_0883DA9C:
    ctx.set_gpr(16, 2226u << 16u);
    ctx.set_gpr(16, ctx.gpr[16] + static_cast<std::uint32_t>(15925));
    ctx.set_gpr(18, ctx.gpr[20] + ctx.gpr[19]);
    goto L_0883DAA8;
L_0883DAA8:
    ctx.set_gpr(31, 0x0883DAB0u);
    ctx.set_gpr(4, rt.memory().aot_load8(ctx.gpr[18] + static_cast<std::uint32_t>(0)));
    goto L_0883DB70;
L_0883DAB0:
    if (ctx.gpr[2] != 0u) {
    ctx.set_gpr(19, ctx.gpr[19] + static_cast<std::uint32_t>(1));
        goto L_0883DB40;
    }
    goto L_0883DAB8;
L_0883DAB8:
    ctx.set_gpr(3, rt.memory().aot_load32(ctx.gpr[21] + static_cast<std::uint32_t>(8244)));
    ctx.set_gpr(9, rt.memory().aot_load32(ctx.gpr[21] + static_cast<std::uint32_t>(4)));
    ctx.set_gpr(8, ctx.gpr[3] + static_cast<std::uint32_t>(-1));
    ctx.set_gpr(1, static_cast<std::int32_t>(ctx.gpr[9]) < static_cast<std::int32_t>(ctx.gpr[8]) ? 1u : 0u);
    { const bool branch_taken = ctx.gpr[1] == 0u;
    // nop
      if (branch_taken) {
          goto L_0883DB3C;
      }
      goto L_0883DAD0;
    }
L_0883DAD0:
    ctx.set_gpr(7, ctx.gpr[18] + static_cast<std::uint32_t>(1));
    ctx.set_gpr(3, 2226u << 16u);
    ctx.set_gpr(6, ctx.gpr[21] + ctx.gpr[9]);
    goto L_0883DADC;
L_0883DADC:
    ctx.set_gpr(5, static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int8_t>(rt.memory().aot_load8(ctx.gpr[6] + static_cast<std::uint32_t>(44))))));
    ctx.set_gpr(4, static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int8_t>(rt.memory().aot_load8(ctx.gpr[18] + static_cast<std::uint32_t>(0))))));
    if (ctx.gpr[5] != ctx.gpr[4]) {
    ctx.set_gpr(4, ctx.gpr[9] + static_cast<std::uint32_t>(2));
        goto L_0883DB08;
    }
    goto L_0883DAEC;
L_0883DAEC:
    ctx.set_gpr(5, static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int8_t>(rt.memory().aot_load8(ctx.gpr[6] + static_cast<std::uint32_t>(45))))));
    ctx.set_gpr(4, static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int8_t>(rt.memory().aot_load8(ctx.gpr[7] + static_cast<std::uint32_t>(0))))));
    { const bool branch_taken = ctx.gpr[5] != ctx.gpr[4];
    // nop
      if (branch_taken) {
          goto L_0883DB04;
      }
      goto L_0883DAFC;
    }
L_0883DAFC:
    { const bool branch_taken = 0u == 0u;
    ctx.set_gpr(19, ctx.gpr[19] + static_cast<std::uint32_t>(1));
      if (branch_taken) {
          goto L_0883DB3C;
      }
      goto L_0883DB04;
    }
L_0883DB04:
    ctx.set_gpr(4, ctx.gpr[9] + static_cast<std::uint32_t>(2));
    goto L_0883DB08;
L_0883DB08:
    ctx.set_gpr(1, static_cast<std::int32_t>(ctx.gpr[8]) < static_cast<std::int32_t>(ctx.gpr[4]) ? 1u : 0u);
    if (ctx.gpr[1] == 0u) {
    ctx.set_gpr(4, rt.memory().aot_load32(ctx.gpr[21] + static_cast<std::uint32_t>(8244)));
        goto L_0883DB28;
    }
    goto L_0883DB14;
L_0883DB14:
    ctx.set_gpr(4, static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int8_t>(rt.memory().aot_load8(ctx.gpr[3] + static_cast<std::uint32_t>(15924))))));
    rt.memory().aot_store8(ctx.gpr[18] + static_cast<std::uint32_t>(0), static_cast<std::uint8_t>(ctx.gpr[4]));
    ctx.set_gpr(4, static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int8_t>(rt.memory().aot_load8(ctx.gpr[16] + static_cast<std::uint32_t>(0))))));
    rt.memory().aot_store8(ctx.gpr[7] + static_cast<std::uint32_t>(0), static_cast<std::uint8_t>(ctx.gpr[4]));
    ctx.set_gpr(4, rt.memory().aot_load32(ctx.gpr[21] + static_cast<std::uint32_t>(8244)));
    goto L_0883DB28;
L_0883DB28:
    ctx.set_gpr(9, ctx.gpr[9] + static_cast<std::uint32_t>(2));
    ctx.set_gpr(8, ctx.gpr[4] + static_cast<std::uint32_t>(-1));
    ctx.set_gpr(4, static_cast<std::int32_t>(ctx.gpr[9]) < static_cast<std::int32_t>(ctx.gpr[8]) ? 1u : 0u);
    if (ctx.gpr[4] != 0u) {
    ctx.set_gpr(6, ctx.gpr[21] + ctx.gpr[9]);
        goto L_0883DADC;
    }
    goto L_0883DB3C;
L_0883DB3C:
    ctx.set_gpr(19, ctx.gpr[19] + static_cast<std::uint32_t>(1));
    goto L_0883DB40;
L_0883DB40:
    ctx.set_gpr(3, static_cast<std::int32_t>(ctx.gpr[19]) < static_cast<std::int32_t>(ctx.gpr[17]) ? 1u : 0u);
    if (ctx.gpr[3] != 0u) {
    ctx.set_gpr(18, ctx.gpr[20] + ctx.gpr[19]);
        goto L_0883DAA8;
    }
    goto L_0883DB4C;
L_0883DB4C:
    ctx.set_gpr(31, rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(28)));
    ctx.set_gpr(21, rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(24)));
    ctx.set_gpr(20, rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(20)));
    ctx.set_gpr(19, rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(16)));
    ctx.set_gpr(18, rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(12)));
    ctx.set_gpr(17, rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(8)));
    ctx.set_gpr(16, rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(4)));
    jump_target = ctx.gpr[31];
    ctx.set_gpr(29, ctx.gpr[29] + static_cast<std::uint32_t>(32));
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_0883DB70:
    ctx.set_gpr(3, ctx.gpr[4] & 255u);
    ctx.set_gpr(1, static_cast<std::int32_t>(ctx.gpr[3]) < 128 ? 1u : 0u);
    if (ctx.gpr[1] != 0u) {
    ctx.set_gpr(2, 0u + static_cast<std::uint32_t>(1));
        goto L_0883DBA8;
    }
    goto L_0883DB80;
L_0883DB80:
    ctx.set_gpr(2, static_cast<std::int32_t>(ctx.gpr[3]) < 161 ? 1u : 0u);
    if (ctx.gpr[2] != 0u) {
    ctx.set_gpr(2, 0u + 0u);
        goto L_0883DBA8;
    }
    goto L_0883DB8C;
L_0883DB8C:
    ctx.set_gpr(1, static_cast<std::int32_t>(ctx.gpr[3]) < 224 ? 1u : 0u);
    { const bool branch_taken = ctx.gpr[1] == 0u;
    // nop
      if (branch_taken) {
          goto L_0883DBA4;
      }
      goto L_0883DB98;
    }
L_0883DB98:
    ctx.set_gpr(2, 0u + static_cast<std::uint32_t>(1));
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_0883DBA8;
      }
      goto L_0883DBA4;
    }
L_0883DBA4:
    ctx.set_gpr(2, 0u + 0u);
    goto L_0883DBA8;
L_0883DBA8:
    jump_target = ctx.gpr[31];
    // nop
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_0883DBB0:
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
    ctx.set_gpr(30, ctx.gpr[7] + ctx.gpr[8]);
    ctx.set_gpr(21, ctx.gpr[4] + 0u);
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(60), ctx.gpr[5]);
    ctx.set_gpr(22, ctx.gpr[6] + 0u);
    ctx.set_gpr(23, ctx.gpr[9] + 0u);
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(56), ctx.gpr[10]);
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(52), ctx.gpr[11]);
    ctx.set_gpr(20, 0u + 0u);
    ctx.set_gpr(19, 0u + 0u);
    goto L_0883DC00;
L_0883DC00:
    ctx.set_gpr(2, rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(60)));
    if (ctx.gpr[20] != ctx.gpr[2]) {
    ctx.set_gpr(18, ctx.gpr[30] + ctx.gpr[20]);
        goto L_0883DC14;
    }
    goto L_0883DC0C;
L_0883DC0C:
    { const bool branch_taken = 0u == 0u;
    ctx.set_gpr(2, ctx.gpr[20] + 0u);
      if (branch_taken) {
          goto L_0883DE0C;
      }
      goto L_0883DC14;
    }
L_0883DC14:
    ctx.set_gpr(17, static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int8_t>(rt.memory().aot_load8(ctx.gpr[18] + static_cast<std::uint32_t>(0))))));
    if (ctx.gpr[17] != 0u) {
    ctx.set_gpr(4, ctx.gpr[17] & 255u);
        goto L_0883DC28;
    }
    goto L_0883DC20;
L_0883DC20:
    { const bool branch_taken = 0u == 0u;
    ctx.set_gpr(2, ctx.gpr[20] + 0u);
      if (branch_taken) {
          goto L_0883DE0C;
      }
      goto L_0883DC28;
    }
L_0883DC28:
    ctx.set_gpr(2, 0u + static_cast<std::uint32_t>(32));
    if (ctx.gpr[4] != ctx.gpr[2]) {
    ctx.set_gpr(2, 0u + static_cast<std::uint32_t>(129));
        goto L_0883DC3C;
    }
    goto L_0883DC34;
L_0883DC34:
    { const bool branch_taken = 0u == 0u;
    ctx.set_gpr(2, ctx.gpr[20] + 0u);
      if (branch_taken) {
          goto L_0883DE0C;
      }
      goto L_0883DC3C;
    }
L_0883DC3C:
    if (ctx.gpr[4] != ctx.gpr[2]) {
    ctx.set_gpr(5, rt.memory().aot_load8(ctx.gpr[18] + static_cast<std::uint32_t>(1)));
        goto L_0883DC60;
    }
    goto L_0883DC44;
L_0883DC44:
    ctx.set_gpr(3, rt.memory().aot_load8(ctx.gpr[18] + static_cast<std::uint32_t>(1)));
    ctx.set_gpr(2, 0u + static_cast<std::uint32_t>(64));
    { const bool branch_taken = ctx.gpr[3] != ctx.gpr[2];
    // nop
      if (branch_taken) {
          goto L_0883DC5C;
      }
      goto L_0883DC54;
    }
L_0883DC54:
    { const bool branch_taken = 0u == 0u;
    ctx.set_gpr(2, ctx.gpr[20] + 0u);
      if (branch_taken) {
          goto L_0883DE0C;
      }
      goto L_0883DC5C;
    }
L_0883DC5C:
    ctx.set_gpr(5, rt.memory().aot_load8(ctx.gpr[18] + static_cast<std::uint32_t>(1)));
    goto L_0883DC60;
L_0883DC60:
    ctx.set_gpr(31, 0x0883DC68u);
    ctx.set_gpr(16, ctx.gpr[18] + static_cast<std::uint32_t>(1));
    goto L_0883DE3C;
L_0883DC68:
    if (ctx.gpr[2] == 0u) {
    ctx.set_gpr(5, rt.memory().aot_load8(ctx.gpr[18] + static_cast<std::uint32_t>(0)));
        goto L_0883DCAC;
    }
    goto L_0883DC70;
L_0883DC70:
    if (ctx.gpr[20] == 0u) {
    ctx.set_gpr(2, 0u + static_cast<std::uint32_t>(6330));
        goto L_0883DC88;
    }
    goto L_0883DC78;
L_0883DC78:
    ctx.set_gpr(2, 0u + static_cast<std::uint32_t>(3));
    if (ctx.gpr[19] != ctx.gpr[2]) {
    ctx.set_gpr(2, ctx.gpr[20] + 0u);
        goto L_0883DE0C;
    }
    goto L_0883DC84;
L_0883DC84:
    ctx.set_gpr(2, 0u + static_cast<std::uint32_t>(6330));
    goto L_0883DC88;
L_0883DC88:
    rt.memory().aot_store32(ctx.gpr[23] + static_cast<std::uint32_t>(0), ctx.gpr[2]);
    ctx.set_gpr(2, static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int8_t>(rt.memory().aot_load8(ctx.gpr[18] + static_cast<std::uint32_t>(0))))));
    ctx.set_gpr(3, ctx.gpr[22] + ctx.gpr[20]);
    ctx.set_gpr(19, 0u + static_cast<std::uint32_t>(3));
    rt.memory().aot_store8(ctx.gpr[3] + static_cast<std::uint32_t>(0), static_cast<std::uint8_t>(ctx.gpr[2]));
    ctx.set_gpr(2, static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int8_t>(rt.memory().aot_load8(ctx.gpr[16] + static_cast<std::uint32_t>(0))))));
    ctx.set_gpr(20, ctx.gpr[20] + static_cast<std::uint32_t>(2));
    { const bool branch_taken = 0u == 0u;
    rt.memory().aot_store8(ctx.gpr[3] + static_cast<std::uint32_t>(1), static_cast<std::uint8_t>(ctx.gpr[2]));
      if (branch_taken) {
          goto L_0883DC00;
      }
      goto L_0883DCAC;
    }
L_0883DCAC:
    ctx.set_gpr(6, rt.memory().aot_load8(ctx.gpr[16] + static_cast<std::uint32_t>(0)));
    ctx.set_gpr(31, 0x0883DCB8u);
    ctx.set_gpr(4, ctx.gpr[21] + 0u);
    goto L_0883DA30;
L_0883DCB8:
    if (ctx.gpr[2] == 0u) {
    ctx.set_gpr(4, ctx.gpr[17] & 255u);
        goto L_0883DCEC;
    }
    goto L_0883DCC0;
L_0883DCC0:
    ctx.set_gpr(3, rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(52)));
    ctx.set_gpr(5, ctx.gpr[30] + ctx.gpr[20]);
    ctx.set_gpr(4, ctx.gpr[22] + ctx.gpr[20]);
    ctx.set_gpr(3, rt.memory().aot_load32(ctx.gpr[3] + static_cast<std::uint32_t>(0)));
    ctx.set_gpr(2, ctx.gpr[20] + static_cast<std::uint32_t>(1));
    ctx.set_gpr(6, ctx.gpr[3] + static_cast<std::uint32_t>(1));
    ctx.set_gpr(3, rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(52)));
    rt.memory().aot_store32(ctx.gpr[3] + static_cast<std::uint32_t>(0), ctx.gpr[6]);
    ctx.set_gpr(3, static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int8_t>(rt.memory().aot_load8(ctx.gpr[5] + static_cast<std::uint32_t>(0))))));
    { const bool branch_taken = 0u == 0u;
    rt.memory().aot_store8(ctx.gpr[4] + static_cast<std::uint32_t>(0), static_cast<std::uint8_t>(ctx.gpr[3]));
      if (branch_taken) {
          goto L_0883DE0C;
      }
      goto L_0883DCEC;
    }
L_0883DCEC:
    ctx.set_gpr(31, 0x0883DCF4u);
    // nop
    goto L_0883DB70;
L_0883DCF4:
    if (ctx.gpr[2] == 0u) {
    ctx.set_gpr(4, static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int8_t>(rt.memory().aot_load8(ctx.gpr[18] + static_cast<std::uint32_t>(0))))));
        goto L_0883DD24;
    }
    goto L_0883DCFC;
L_0883DCFC:
    if (ctx.gpr[20] == 0u) {
    ctx.set_gpr(3, static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int8_t>(rt.memory().aot_load8(ctx.gpr[18] + static_cast<std::uint32_t>(0))))));
        goto L_0883DD10;
    }
    goto L_0883DD04;
L_0883DD04:
    if (ctx.gpr[19] != 0u) {
    ctx.set_gpr(2, ctx.gpr[20] + 0u);
        goto L_0883DE0C;
    }
    goto L_0883DD0C;
L_0883DD0C:
    ctx.set_gpr(3, static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int8_t>(rt.memory().aot_load8(ctx.gpr[18] + static_cast<std::uint32_t>(0))))));
    goto L_0883DD10;
L_0883DD10:
    ctx.set_gpr(2, ctx.gpr[22] + ctx.gpr[20]);
    ctx.set_gpr(20, ctx.gpr[20] + static_cast<std::uint32_t>(1));
    rt.memory().aot_store8(ctx.gpr[2] + static_cast<std::uint32_t>(0), static_cast<std::uint8_t>(ctx.gpr[3]));
    { const bool branch_taken = 0u == 0u;
    rt.memory().aot_store32(ctx.gpr[23] + static_cast<std::uint32_t>(0), 0u);
      if (branch_taken) {
          goto L_0883DC00;
      }
      goto L_0883DD24;
    }
L_0883DD24:
    ctx.set_gpr(3, ctx.gpr[22] + ctx.gpr[20]);
    rt.memory().aot_store8(ctx.gpr[3] + static_cast<std::uint32_t>(0), static_cast<std::uint8_t>(ctx.gpr[4]));
    ctx.set_gpr(4, static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int8_t>(rt.memory().aot_load8(ctx.gpr[16] + static_cast<std::uint32_t>(0))))));
    rt.memory().aot_store8(ctx.gpr[3] + static_cast<std::uint32_t>(1), static_cast<std::uint8_t>(ctx.gpr[4]));
    ctx.set_gpr(5, rt.memory().aot_load32(ctx.gpr[21] + static_cast<std::uint32_t>(8244)));
    ctx.set_gpr(4, rt.memory().aot_load32(ctx.gpr[21] + static_cast<std::uint32_t>(4)));
    ctx.set_gpr(8, ctx.gpr[5] + static_cast<std::uint32_t>(-1));
    ctx.set_gpr(1, static_cast<std::int32_t>(ctx.gpr[4]) < static_cast<std::int32_t>(ctx.gpr[8]) ? 1u : 0u);
    { const bool branch_taken = ctx.gpr[1] == 0u;
    ctx.set_gpr(2, ctx.gpr[3] + static_cast<std::uint32_t>(1));
      if (branch_taken) {
          goto L_0883DE08;
      }
      goto L_0883DD4C;
    }
L_0883DD4C:
    ctx.set_gpr(7, static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int8_t>(rt.memory().aot_load8(ctx.gpr[3] + static_cast<std::uint32_t>(0))))));
    ctx.set_gpr(6, ctx.gpr[21] + ctx.gpr[4]);
    goto L_0883DD54;
L_0883DD54:
    ctx.set_gpr(5, static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int8_t>(rt.memory().aot_load8(ctx.gpr[6] + static_cast<std::uint32_t>(44))))));
    if (ctx.gpr[5] != ctx.gpr[7]) {
    ctx.set_gpr(4, ctx.gpr[4] + static_cast<std::uint32_t>(2));
        goto L_0883DDD4;
    }
    goto L_0883DD60;
L_0883DD60:
    ctx.set_gpr(6, static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int8_t>(rt.memory().aot_load8(ctx.gpr[6] + static_cast<std::uint32_t>(45))))));
    ctx.set_gpr(5, static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int8_t>(rt.memory().aot_load8(ctx.gpr[2] + static_cast<std::uint32_t>(0))))));
    { const bool branch_taken = ctx.gpr[6] != ctx.gpr[5];
    // nop
      if (branch_taken) {
          goto L_0883DDD0;
      }
      goto L_0883DD70;
    }
L_0883DD70:
    if (ctx.gpr[20] == 0u) {
    ctx.set_gpr(2, 31805u << 16u);
        goto L_0883DDA0;
    }
    goto L_0883DD78;
L_0883DD78:
    ctx.set_gpr(5, 31805u << 16u);
    ctx.set_gpr(5, ctx.gpr[5] | 9753u);
    { const std::int64_t product = static_cast<std::int64_t>(static_cast<std::int32_t>(ctx.gpr[5])) * static_cast<std::int64_t>(static_cast<std::int32_t>(ctx.gpr[4])); ctx.lo = static_cast<std::uint32_t>(product); ctx.hi = static_cast<std::uint32_t>(static_cast<std::uint64_t>(product) >> 32u); }
    ctx.set_gpr(6, ctx.gpr[4] >> 31u);
    ctx.set_gpr(5, ctx.hi);
    ctx.set_gpr(5, static_cast<std::uint32_t>(static_cast<std::int32_t>(ctx.gpr[5]) >> 10u));
    ctx.set_gpr(5, ctx.gpr[5] + ctx.gpr[6]);
    if (ctx.gpr[19] != ctx.gpr[5]) {
    rt.memory().aot_store8(ctx.gpr[3] + static_cast<std::uint32_t>(0), static_cast<std::uint8_t>(0u));
        goto L_0883DDC4;
    }
    goto L_0883DD9C;
L_0883DD9C:
    ctx.set_gpr(2, 31805u << 16u);
    goto L_0883DDA0;
L_0883DDA0:
    ctx.set_gpr(2, ctx.gpr[2] | 9753u);
    { const std::int64_t product = static_cast<std::int64_t>(static_cast<std::int32_t>(ctx.gpr[2])) * static_cast<std::int64_t>(static_cast<std::int32_t>(ctx.gpr[4])); ctx.lo = static_cast<std::uint32_t>(product); ctx.hi = static_cast<std::uint32_t>(static_cast<std::uint64_t>(product) >> 32u); }
    ctx.set_gpr(3, ctx.gpr[4] >> 31u);
    rt.memory().aot_store32(ctx.gpr[23] + static_cast<std::uint32_t>(0), ctx.gpr[4]);
    ctx.set_gpr(20, ctx.gpr[20] + static_cast<std::uint32_t>(2));
    ctx.set_gpr(2, ctx.hi);
    ctx.set_gpr(2, static_cast<std::uint32_t>(static_cast<std::int32_t>(ctx.gpr[2]) >> 10u));
    { const bool branch_taken = 0u == 0u;
    ctx.set_gpr(19, ctx.gpr[2] + ctx.gpr[3]);
      if (branch_taken) {
          goto L_0883DC00;
      }
      goto L_0883DDC4;
    }
L_0883DDC4:
    rt.memory().aot_store8(ctx.gpr[2] + static_cast<std::uint32_t>(0), static_cast<std::uint8_t>(0u));
    { const bool branch_taken = 0u == 0u;
    ctx.set_gpr(2, ctx.gpr[20] + 0u);
      if (branch_taken) {
          goto L_0883DE0C;
      }
      goto L_0883DDD0;
    }
L_0883DDD0:
    ctx.set_gpr(4, ctx.gpr[4] + static_cast<std::uint32_t>(2));
    goto L_0883DDD4;
L_0883DDD4:
    ctx.set_gpr(1, static_cast<std::int32_t>(ctx.gpr[8]) < static_cast<std::int32_t>(ctx.gpr[4]) ? 1u : 0u);
    if (ctx.gpr[1] == 0u) {
    ctx.set_gpr(5, static_cast<std::int32_t>(ctx.gpr[4]) < static_cast<std::int32_t>(ctx.gpr[8]) ? 1u : 0u);
        goto L_0883DE00;
    }
    goto L_0883DDE0;
L_0883DDE0:
    if (ctx.gpr[20] != 0u) {
    ctx.set_gpr(2, ctx.gpr[20] + 0u);
        goto L_0883DE0C;
    }
    goto L_0883DDE8;
L_0883DDE8:
    ctx.set_gpr(2, rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(56)));
    ctx.set_gpr(3, 0u + static_cast<std::uint32_t>(1));
    rt.memory().aot_store8(ctx.gpr[2] + static_cast<std::uint32_t>(0), static_cast<std::uint8_t>(ctx.gpr[3]));
    ctx.set_gpr(2, ctx.gpr[20] + 0u);
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_0883DE0C;
      }
      goto L_0883DE00;
    }
L_0883DE00:
    if (ctx.gpr[5] != 0u) {
    ctx.set_gpr(6, ctx.gpr[21] + ctx.gpr[4]);
        goto L_0883DD54;
    }
    goto L_0883DE08;
L_0883DE08:
    ctx.set_gpr(2, ctx.gpr[20] + 0u);
    goto L_0883DE0C;
L_0883DE0C:
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
L_0883DE3C:
    ctx.set_gpr(3, ctx.gpr[5] & 255u);
    ctx.set_gpr(5, 2225u << 16u);
    ctx.set_gpr(4, ctx.gpr[4] & 255u);
    ctx.set_gpr(6, 0u + 0u);
    ctx.set_gpr(5, ctx.gpr[5] + static_cast<std::uint32_t>(8112));
    goto L_0883DE50;
L_0883DE50:
    ctx.set_gpr(2, static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int8_t>(rt.memory().aot_load8(ctx.gpr[5] + static_cast<std::uint32_t>(0))))));
    if (ctx.gpr[4] != ctx.gpr[2]) {
    ctx.set_gpr(2, 0u + 0u);
        goto L_0883DE80;
    }
    goto L_0883DE5C;
L_0883DE5C:
    ctx.set_gpr(2, static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int8_t>(rt.memory().aot_load8(ctx.gpr[5] + static_cast<std::uint32_t>(1))))));
    if (ctx.gpr[3] != ctx.gpr[2]) {
    ctx.set_gpr(6, ctx.gpr[6] + static_cast<std::uint32_t>(1));
        goto L_0883DE70;
    }
    goto L_0883DE68;
L_0883DE68:
    { const bool branch_taken = 0u == 0u;
    ctx.set_gpr(2, 0u + static_cast<std::uint32_t>(1));
      if (branch_taken) {
          goto L_0883DE80;
      }
      goto L_0883DE70;
    }
L_0883DE70:
    ctx.set_gpr(2, static_cast<std::int32_t>(ctx.gpr[6]) < 20 ? 1u : 0u);
    { const bool branch_taken = ctx.gpr[2] != 0u;
    ctx.set_gpr(5, ctx.gpr[5] + static_cast<std::uint32_t>(3));
      if (branch_taken) {
          goto L_0883DE50;
      }
      goto L_0883DE7C;
    }
L_0883DE7C:
    ctx.set_gpr(2, 0u + 0u);
    goto L_0883DE80;
L_0883DE80:
    jump_target = ctx.gpr[31];
    // nop
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_0883DE88:
    ctx.set_gpr(29, ctx.gpr[29] + static_cast<std::uint32_t>(-16448));
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(28), ctx.gpr[31]);
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(24), ctx.gpr[19]);
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(20), ctx.gpr[18]);
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(16), ctx.gpr[17]);
    ctx.set_gpr(17, ctx.gpr[4] + 0u);
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(12), ctx.gpr[16]);
    ctx.set_gpr(4, ctx.gpr[29] + static_cast<std::uint32_t>(40));
    ctx.set_gpr(31, 0x0883DEB0u);
    ctx.set_gpr(16, 0u + 0u);
    goto L_0883E248;
L_0883DEB0:
    ctx.set_gpr(4, ctx.gpr[29] + static_cast<std::uint32_t>(16444));
    ctx.set_gpr(31, 0x0883DEBCu);
    ctx.set_gpr(5, ctx.gpr[29] + static_cast<std::uint32_t>(40));
    goto L_0883E214;
L_0883DEBC:
    ctx.set_gpr(2, 1u << 16u);
    ctx.set_gpr(2, ctx.gpr[17] + ctx.gpr[2]);
    ctx.set_gpr(3, rt.memory().aot_load32(ctx.gpr[2] + static_cast<std::uint32_t>(-24168)));
    ctx.set_gpr(2, 0u + static_cast<std::uint32_t>(2));
    if (ctx.gpr[3] == ctx.gpr[2]) {
    ctx.set_gpr(2, 1u << 16u);
        goto L_0883E17C;
    }
    goto L_0883DED4;
L_0883DED4:
    ctx.set_gpr(2, 0u + static_cast<std::uint32_t>(1));
    { const bool branch_taken = ctx.gpr[3] == ctx.gpr[2];
    // nop
      if (branch_taken) {
          goto L_0883DF24;
      }
      goto L_0883DEE0;
    }
L_0883DEE0:
    { const bool branch_taken = ctx.gpr[3] == 0u;
    // nop
      if (branch_taken) {
          goto L_0883DEF0;
      }
      goto L_0883DEE8;
    }
L_0883DEE8:
    { const bool branch_taken = 0u == 0u;
    ctx.set_gpr(4, ctx.gpr[29] + static_cast<std::uint32_t>(16444));
      if (branch_taken) {
          goto L_0883E19C;
      }
      goto L_0883DEF0;
    }
L_0883DEF0:
    ctx.set_gpr(31, 0x0883DEF8u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0017_entry, 17u, 187u, 0x08848C54u>(ctx, &aot_mem) && ctx.pc == 0x0883DEF8u) goto L_0883DEF8;
    return;
L_0883DEF8:
    ctx.set_gpr(4, ctx.gpr[2] + 0u);
    ctx.set_gpr(31, 0x0883DF04u);
    ctx.set_gpr(5, 0u + static_cast<std::uint32_t>(9));
    if (rt.invoke_chained_direct<&recomp_unit_0170_entry, 170u, 1046u, 0x08AAFFB8u>(ctx, &aot_mem) && ctx.pc == 0x0883DF04u) goto L_0883DF04;
    return;
L_0883DF04:
    ctx.set_gpr(2, 1u << 16u);
    ctx.set_gpr(2, ctx.gpr[17] + ctx.gpr[2]);
    ctx.set_gpr(3, rt.memory().aot_load32(ctx.gpr[2] + static_cast<std::uint32_t>(-24168)));
    ctx.set_gpr(2, 1u << 16u);
    ctx.set_gpr(2, ctx.gpr[17] + ctx.gpr[2]);
    ctx.set_gpr(3, ctx.gpr[3] + static_cast<std::uint32_t>(1));
    { const bool branch_taken = 0u == 0u;
    rt.memory().aot_store32(ctx.gpr[2] + static_cast<std::uint32_t>(-24168), ctx.gpr[3]);
      if (branch_taken) {
          goto L_0883E198;
      }
      goto L_0883DF24;
    }
L_0883DF24:
    ctx.set_gpr(31, 0x0883DF2Cu);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0017_entry, 17u, 187u, 0x08848C54u>(ctx, &aot_mem) && ctx.pc == 0x0883DF2Cu) goto L_0883DF2C;
    return;
L_0883DF2C:
    ctx.set_gpr(31, 0x0883DF34u);
    ctx.set_gpr(4, ctx.gpr[2] + 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0170_entry, 170u, 1047u, 0x08AAFFCCu>(ctx, &aot_mem) && ctx.pc == 0x0883DF34u) goto L_0883DF34;
    return;
L_0883DF34:
    { const bool branch_taken = ctx.gpr[2] == 0u;
    // nop
      if (branch_taken) {
          goto L_0883E198;
      }
      goto L_0883DF3C;
    }
L_0883DF3C:
    ctx.set_gpr(31, 0x0883DF44u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0017_entry, 17u, 187u, 0x08848C54u>(ctx, &aot_mem) && ctx.pc == 0x0883DF44u) goto L_0883DF44;
    return;
L_0883DF44:
    ctx.set_gpr(31, 0x0883DF4Cu);
    ctx.set_gpr(4, ctx.gpr[2] + 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0170_entry, 170u, 976u, 0x08AAFC48u>(ctx, &aot_mem) && ctx.pc == 0x0883DF4Cu) goto L_0883DF4C;
    return;
L_0883DF4C:
    ctx.set_gpr(31, 0x0883DF54u);
    ctx.set_gpr(19, ctx.gpr[2] + 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0017_entry, 17u, 187u, 0x08848C54u>(ctx, &aot_mem) && ctx.pc == 0x0883DF54u) goto L_0883DF54;
    return;
L_0883DF54:
    ctx.set_gpr(31, 0x0883DF5Cu);
    ctx.set_gpr(4, ctx.gpr[2] + 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0170_entry, 170u, 971u, 0x08AAFC1Cu>(ctx, &aot_mem) && ctx.pc == 0x0883DF5Cu) goto L_0883DF5C;
    return;
L_0883DF5C:
    ctx.set_gpr(18, ctx.gpr[2] + 0u);
    ctx.set_gpr(4, ctx.gpr[17] + static_cast<std::uint32_t>(44));
    ctx.set_gpr(5, 0u + 0u);
    ctx.set_gpr(31, 0x0883DF70u);
    ctx.set_gpr(6, 0u + static_cast<std::uint32_t>(8200));
    if (rt.invoke_chained_direct<&recomp_unit_0003_entry, 3u, 719u, 0x08812EE8u>(ctx, &aot_mem) && ctx.pc == 0x0883DF70u) goto L_0883DF70;
    return;
L_0883DF70:
    ctx.set_gpr(4, ctx.gpr[29] + static_cast<std::uint32_t>(44));
    ctx.set_gpr(5, 0u + 0u);
    ctx.set_gpr(31, 0x0883DF80u);
    ctx.set_gpr(6, 0u + static_cast<std::uint32_t>(16400));
    if (rt.invoke_chained_direct<&recomp_unit_0003_entry, 3u, 719u, 0x08812EE8u>(ctx, &aot_mem) && ctx.pc == 0x0883DF80u) goto L_0883DF80;
    return;
L_0883DF80:
    ctx.set_gpr(3, ctx.gpr[19] + static_cast<std::uint32_t>(-1));
    { const bool branch_taken = static_cast<std::int32_t>(ctx.gpr[3]) <= 0;
    ctx.set_gpr(2, 0u + 0u);
      if (branch_taken) {
          goto L_0883E044;
      }
      goto L_0883DF8C;
    }
L_0883DF8C:
    ctx.set_gpr(1, static_cast<std::int32_t>(ctx.gpr[3]) < 9 ? 1u : 0u);
    { const bool branch_taken = ctx.gpr[1] != 0u;
    ctx.set_gpr(7, ctx.gpr[19] + static_cast<std::uint32_t>(-9));
      if (branch_taken) {
          goto L_0883E014;
      }
      goto L_0883DF98;
    }
L_0883DF98:
    { const bool branch_taken = static_cast<std::int32_t>(ctx.gpr[3]) < 0;
    ctx.set_gpr(4, 0u + 0u);
      if (branch_taken) {
          goto L_0883DFB8;
      }
      goto L_0883DFA0;
    }
L_0883DFA0:
    ctx.set_gpr(1, 32767u << 16u);
    ctx.set_gpr(1, ctx.gpr[1] | 65535u);
    ctx.set_gpr(1, static_cast<std::int32_t>(ctx.gpr[3]) < static_cast<std::int32_t>(ctx.gpr[1]) ? 1u : 0u);
    { const bool branch_taken = ctx.gpr[1] == 0u;
    // nop
      if (branch_taken) {
          goto L_0883DFB8;
      }
      goto L_0883DFB4;
    }
L_0883DFB4:
    ctx.set_gpr(4, 0u + static_cast<std::uint32_t>(1));
    goto L_0883DFB8;
L_0883DFB8:
    if (ctx.gpr[4] == 0u) {
    ctx.set_gpr(5, ctx.gpr[19] + static_cast<std::uint32_t>(-1));
        goto L_0883E018;
    }
    goto L_0883DFC0;
L_0883DFC0:
    ctx.set_gpr(6, ctx.gpr[18] + ctx.gpr[2]);
    ctx.set_gpr(4, rt.memory().aot_load8(ctx.gpr[6] + static_cast<std::uint32_t>(0)));
    ctx.set_gpr(5, ctx.gpr[17] + ctx.gpr[2]);
    ctx.set_gpr(2, ctx.gpr[2] + static_cast<std::uint32_t>(8));
    rt.memory().aot_store8(ctx.gpr[5] + static_cast<std::uint32_t>(44), static_cast<std::uint8_t>(ctx.gpr[4]));
    ctx.set_gpr(4, rt.memory().aot_load8(ctx.gpr[6] + static_cast<std::uint32_t>(1)));
    ctx.set_gpr(3, static_cast<std::int32_t>(ctx.gpr[2]) < static_cast<std::int32_t>(ctx.gpr[7]) ? 1u : 0u);
    rt.memory().aot_store8(ctx.gpr[5] + static_cast<std::uint32_t>(45), static_cast<std::uint8_t>(ctx.gpr[4]));
    ctx.set_gpr(4, rt.memory().aot_load8(ctx.gpr[6] + static_cast<std::uint32_t>(2)));
    rt.memory().aot_store8(ctx.gpr[5] + static_cast<std::uint32_t>(46), static_cast<std::uint8_t>(ctx.gpr[4]));
    ctx.set_gpr(4, rt.memory().aot_load8(ctx.gpr[6] + static_cast<std::uint32_t>(3)));
    rt.memory().aot_store8(ctx.gpr[5] + static_cast<std::uint32_t>(47), static_cast<std::uint8_t>(ctx.gpr[4]));
    ctx.set_gpr(4, rt.memory().aot_load8(ctx.gpr[6] + static_cast<std::uint32_t>(4)));
    rt.memory().aot_store8(ctx.gpr[5] + static_cast<std::uint32_t>(48), static_cast<std::uint8_t>(ctx.gpr[4]));
    ctx.set_gpr(4, rt.memory().aot_load8(ctx.gpr[6] + static_cast<std::uint32_t>(5)));
    rt.memory().aot_store8(ctx.gpr[5] + static_cast<std::uint32_t>(49), static_cast<std::uint8_t>(ctx.gpr[4]));
    ctx.set_gpr(4, rt.memory().aot_load8(ctx.gpr[6] + static_cast<std::uint32_t>(6)));
    rt.memory().aot_store8(ctx.gpr[5] + static_cast<std::uint32_t>(50), static_cast<std::uint8_t>(ctx.gpr[4]));
    ctx.set_gpr(4, rt.memory().aot_load8(ctx.gpr[6] + static_cast<std::uint32_t>(7)));
    { const bool branch_taken = ctx.gpr[3] != 0u;
    rt.memory().aot_store8(ctx.gpr[5] + static_cast<std::uint32_t>(51), static_cast<std::uint8_t>(ctx.gpr[4]));
      if (branch_taken) {
          goto L_0883DFC0;
      }
      goto L_0883E014;
    }
L_0883E014:
    ctx.set_gpr(5, ctx.gpr[19] + static_cast<std::uint32_t>(-1));
    goto L_0883E018;
L_0883E018:
    ctx.set_gpr(1, static_cast<std::int32_t>(ctx.gpr[2]) < static_cast<std::int32_t>(ctx.gpr[5]) ? 1u : 0u);
    if (ctx.gpr[1] == 0u) {
    rt.memory().aot_store32(ctx.gpr[17] + static_cast<std::uint32_t>(8244), ctx.gpr[19]);
        goto L_0883E048;
    }
    goto L_0883E024;
L_0883E024:
    ctx.set_gpr(3, ctx.gpr[18] + ctx.gpr[2]);
    goto L_0883E028;
L_0883E028:
    ctx.set_gpr(4, rt.memory().aot_load8(ctx.gpr[3] + static_cast<std::uint32_t>(0)));
    ctx.set_gpr(3, ctx.gpr[17] + ctx.gpr[2]);
    ctx.set_gpr(2, ctx.gpr[2] + static_cast<std::uint32_t>(1));
    rt.memory().aot_store8(ctx.gpr[3] + static_cast<std::uint32_t>(44), static_cast<std::uint8_t>(ctx.gpr[4]));
    ctx.set_gpr(3, static_cast<std::int32_t>(ctx.gpr[2]) < static_cast<std::int32_t>(ctx.gpr[5]) ? 1u : 0u);
    if (ctx.gpr[3] != 0u) {
    ctx.set_gpr(3, ctx.gpr[18] + ctx.gpr[2]);
        goto L_0883E028;
    }
    goto L_0883E044;
L_0883E044:
    rt.memory().aot_store32(ctx.gpr[17] + static_cast<std::uint32_t>(8244), ctx.gpr[19]);
    goto L_0883E048;
L_0883E048:
    ctx.set_gpr(2, ctx.gpr[19] + static_cast<std::uint32_t>(-1));
    rt.memory().aot_store32(ctx.gpr[17] + static_cast<std::uint32_t>(4), 0u);
    { const bool branch_taken = static_cast<std::int32_t>(ctx.gpr[2]) <= 0;
    ctx.set_gpr(5, 0u + 0u);
      if (branch_taken) {
          goto L_0883E148;
      }
      goto L_0883E058;
    }
L_0883E058:
    ctx.set_gpr(4, ctx.gpr[29] + static_cast<std::uint32_t>(44));
    ctx.set_gpr(3, ctx.gpr[17] + 0u);
    ctx.set_gpr(8, 0u + static_cast<std::uint32_t>(10));
    ctx.set_gpr(9, 0u + static_cast<std::uint32_t>(13));
    ctx.set_gpr(10, ctx.gpr[18] + ctx.gpr[5]);
    goto L_0883E06C;
L_0883E06C:
    ctx.set_gpr(7, rt.memory().aot_load8(ctx.gpr[10] + static_cast<std::uint32_t>(0)));
    if (ctx.gpr[7] == ctx.gpr[9]) {
    ctx.set_gpr(5, ctx.gpr[5] + static_cast<std::uint32_t>(1));
        goto L_0883E13C;
    }
    goto L_0883E078;
L_0883E078:
    { const bool branch_taken = ctx.gpr[7] == ctx.gpr[8];
    // nop
      if (branch_taken) {
          goto L_0883E138;
      }
      goto L_0883E080;
    }
L_0883E080:
    if (ctx.gpr[7] == 0u) {
    ctx.set_gpr(6, ctx.gpr[16] << 1u);
        goto L_0883E14C;
    }
    goto L_0883E088;
L_0883E088:
    ctx.set_gpr(1, static_cast<std::int32_t>(ctx.gpr[7]) < 127 ? 1u : 0u);
    if (ctx.gpr[1] == 0u) {
    ctx.set_gpr(6, static_cast<std::int32_t>(ctx.gpr[7]) < 161 ? 1u : 0u);
        goto L_0883E0A4;
    }
    goto L_0883E094;
L_0883E094:
    rt.memory().aot_store16(ctx.gpr[4] + static_cast<std::uint32_t>(0), static_cast<std::uint16_t>(ctx.gpr[7]));
    ctx.set_gpr(6, rt.memory().aot_load8(ctx.gpr[10] + static_cast<std::uint32_t>(0)));
    { const bool branch_taken = 0u == 0u;
    rt.memory().aot_store16(ctx.gpr[3] + static_cast<std::uint32_t>(8248), static_cast<std::uint16_t>(ctx.gpr[6]));
      if (branch_taken) {
          goto L_0883E12C;
      }
      goto L_0883E0A4;
    }
L_0883E0A4:
    if (ctx.gpr[6] != 0u) {
    ctx.set_gpr(6, static_cast<std::int32_t>(ctx.gpr[7]) < 166 ? 1u : 0u);
        goto L_0883E0CC;
    }
    goto L_0883E0AC;
L_0883E0AC:
    ctx.set_gpr(1, static_cast<std::int32_t>(ctx.gpr[7]) < 166 ? 1u : 0u);
    { const bool branch_taken = ctx.gpr[1] == 0u;
    // nop
      if (branch_taken) {
          goto L_0883E0C8;
      }
      goto L_0883E0B8;
    }
L_0883E0B8:
    rt.memory().aot_store16(ctx.gpr[4] + static_cast<std::uint32_t>(0), static_cast<std::uint16_t>(ctx.gpr[7]));
    ctx.set_gpr(6, rt.memory().aot_load8(ctx.gpr[10] + static_cast<std::uint32_t>(0)));
    { const bool branch_taken = 0u == 0u;
    rt.memory().aot_store16(ctx.gpr[3] + static_cast<std::uint32_t>(8248), static_cast<std::uint16_t>(ctx.gpr[6]));
      if (branch_taken) {
          goto L_0883E12C;
      }
      goto L_0883E0C8;
    }
L_0883E0C8:
    ctx.set_gpr(6, static_cast<std::int32_t>(ctx.gpr[7]) < 166 ? 1u : 0u);
    goto L_0883E0CC;
L_0883E0CC:
    if (ctx.gpr[6] != 0u) {
    ctx.set_gpr(6, ctx.gpr[7] << 8u);
        goto L_0883E108;
    }
    goto L_0883E0D4;
L_0883E0D4:
    ctx.set_gpr(1, static_cast<std::int32_t>(ctx.gpr[7]) < 224 ? 1u : 0u);
    { const bool branch_taken = ctx.gpr[1] == 0u;
    // nop
      if (branch_taken) {
          goto L_0883E104;
      }
      goto L_0883E0E0;
    }
L_0883E0E0:
    ctx.set_gpr(6, ctx.gpr[7] & 255u);
    rt.memory().aot_store16(ctx.gpr[4] + static_cast<std::uint32_t>(0), static_cast<std::uint16_t>(ctx.gpr[6]));
    ctx.set_gpr(6, rt.memory().aot_load8(ctx.gpr[10] + static_cast<std::uint32_t>(0)));
    rt.memory().aot_store16(ctx.gpr[3] + static_cast<std::uint32_t>(8248), static_cast<std::uint16_t>(ctx.gpr[6]));
    ctx.set_gpr(6, rt.memory().aot_load32(ctx.gpr[17] + static_cast<std::uint32_t>(4)));
    { const bool branch_taken = ctx.gpr[6] != 0u;
    ctx.set_gpr(5, ctx.gpr[5] + static_cast<std::uint32_t>(1));
      if (branch_taken) {
          goto L_0883E12C;
      }
      goto L_0883E0FC;
    }
L_0883E0FC:
    { const bool branch_taken = 0u == 0u;
    rt.memory().aot_store32(ctx.gpr[17] + static_cast<std::uint32_t>(4), ctx.gpr[16]);
      if (branch_taken) {
          goto L_0883E12C;
      }
      goto L_0883E104;
    }
L_0883E104:
    ctx.set_gpr(6, ctx.gpr[7] << 8u);
    goto L_0883E108;
L_0883E108:
    ctx.set_gpr(7, ctx.gpr[6] & 65535u);
    ctx.set_gpr(6, rt.memory().aot_load8(ctx.gpr[10] + static_cast<std::uint32_t>(1)));
    ctx.set_gpr(6, ctx.gpr[7] + ctx.gpr[6]);
    rt.memory().aot_store16(ctx.gpr[4] + static_cast<std::uint32_t>(0), static_cast<std::uint16_t>(ctx.gpr[6]));
    rt.memory().aot_store16(ctx.gpr[3] + static_cast<std::uint32_t>(8248), static_cast<std::uint16_t>(ctx.gpr[6]));
    ctx.set_gpr(6, rt.memory().aot_load32(ctx.gpr[17] + static_cast<std::uint32_t>(4)));
    { const bool branch_taken = ctx.gpr[6] != 0u;
    ctx.set_gpr(5, ctx.gpr[5] + static_cast<std::uint32_t>(1));
      if (branch_taken) {
          goto L_0883E12C;
      }
      goto L_0883E128;
    }
L_0883E128:
    rt.memory().aot_store32(ctx.gpr[17] + static_cast<std::uint32_t>(4), ctx.gpr[16]);
    goto L_0883E12C;
L_0883E12C:
    ctx.set_gpr(4, ctx.gpr[4] + static_cast<std::uint32_t>(2));
    ctx.set_gpr(3, ctx.gpr[3] + static_cast<std::uint32_t>(2));
    ctx.set_gpr(16, ctx.gpr[16] + static_cast<std::uint32_t>(1));
    goto L_0883E138;
L_0883E138:
    ctx.set_gpr(5, ctx.gpr[5] + static_cast<std::uint32_t>(1));
    goto L_0883E13C;
L_0883E13C:
    ctx.set_gpr(6, static_cast<std::int32_t>(ctx.gpr[5]) < static_cast<std::int32_t>(ctx.gpr[2]) ? 1u : 0u);
    if (ctx.gpr[6] != 0u) {
    ctx.set_gpr(10, ctx.gpr[18] + ctx.gpr[5]);
        goto L_0883E06C;
    }
    goto L_0883E148;
L_0883E148:
    ctx.set_gpr(6, ctx.gpr[16] << 1u);
    goto L_0883E14C;
L_0883E14C:
    ctx.set_gpr(4, ctx.gpr[17] + static_cast<std::uint32_t>(24648));
    ctx.set_gpr(5, ctx.gpr[29] + static_cast<std::uint32_t>(44));
    ctx.set_gpr(31, 0x0883E15Cu);
    rt.memory().aot_store32(ctx.gpr[17] + static_cast<std::uint32_t>(0), ctx.gpr[16]);
    if (rt.invoke_chained_direct<&recomp_unit_0003_entry, 3u, 662u, 0x08812B08u>(ctx, &aot_mem) && ctx.pc == 0x0883E15Cu) goto L_0883E15C;
    return;
L_0883E15C:
    ctx.set_gpr(2, 1u << 16u);
    ctx.set_gpr(2, ctx.gpr[17] + ctx.gpr[2]);
    ctx.set_gpr(3, rt.memory().aot_load32(ctx.gpr[2] + static_cast<std::uint32_t>(-24168)));
    ctx.set_gpr(2, 1u << 16u);
    ctx.set_gpr(2, ctx.gpr[17] + ctx.gpr[2]);
    ctx.set_gpr(3, ctx.gpr[3] + static_cast<std::uint32_t>(1));
    { const bool branch_taken = 0u == 0u;
    rt.memory().aot_store32(ctx.gpr[2] + static_cast<std::uint32_t>(-24168), ctx.gpr[3]);
      if (branch_taken) {
          goto L_0883E198;
      }
      goto L_0883E17C;
    }
L_0883E17C:
    ctx.set_gpr(2, ctx.gpr[17] + ctx.gpr[2]);
    rt.memory().aot_store32(ctx.gpr[2] + static_cast<std::uint32_t>(-24168), 0u);
    ctx.set_gpr(4, ctx.gpr[29] + static_cast<std::uint32_t>(16444));
    ctx.set_gpr(31, 0x0883E190u);
    ctx.set_gpr(5, 0u + static_cast<std::uint32_t>(-1));
    goto L_0883E1C4;
L_0883E190:
    { const bool branch_taken = 0u == 0u;
    ctx.set_gpr(2, 0u + static_cast<std::uint32_t>(1));
      if (branch_taken) {
          goto L_0883E1A8;
      }
      goto L_0883E198;
    }
L_0883E198:
    ctx.set_gpr(4, ctx.gpr[29] + static_cast<std::uint32_t>(16444));
    goto L_0883E19C;
L_0883E19C:
    ctx.set_gpr(31, 0x0883E1A4u);
    ctx.set_gpr(5, 0u + static_cast<std::uint32_t>(-1));
    goto L_0883E1C4;
L_0883E1A4:
    ctx.set_gpr(2, 0u + 0u);
    goto L_0883E1A8;
L_0883E1A8:
    ctx.set_gpr(31, rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(28)));
    ctx.set_gpr(19, rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(24)));
    ctx.set_gpr(18, rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(20)));
    ctx.set_gpr(17, rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(16)));
    ctx.set_gpr(16, rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(12)));
    jump_target = ctx.gpr[31];
    ctx.set_gpr(29, ctx.gpr[29] + static_cast<std::uint32_t>(16448));
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_0883E1C4:
    ctx.set_gpr(29, ctx.gpr[29] + static_cast<std::uint32_t>(-16));
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(12), ctx.gpr[31]);
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(8), ctx.gpr[17]);
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(4), ctx.gpr[16]);
    ctx.set_gpr(17, ctx.gpr[4] + 0u);
    { const bool branch_taken = ctx.gpr[17] == 0u;
    ctx.set_gpr(16, ctx.gpr[5] + 0u);
      if (branch_taken) {
          goto L_0883E1FC;
      }
      goto L_0883E1E0;
    }
L_0883E1E0:
    ctx.set_gpr(31, 0x0883E1E8u);
    ctx.set_gpr(4, rt.memory().aot_load32(ctx.gpr[17] + static_cast<std::uint32_t>(0)));
    goto L_0883D42C;
L_0883E1E8:
    ctx.set_gpr(2, static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int16_t>(ctx.gpr[16]))));
    if (static_cast<std::int32_t>(ctx.gpr[2]) <= 0) {
    ctx.set_gpr(2, ctx.gpr[17] + 0u);
        goto L_0883E200;
    }
    goto L_0883E1F4;
L_0883E1F4:
    ctx.set_gpr(31, 0x0883E1FCu);
    ctx.set_gpr(4, ctx.gpr[17] + 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0000_entry, 0u, 201u, 0x08804D84u>(ctx, &aot_mem) && ctx.pc == 0x0883E1FCu) goto L_0883E1FC;
    return;
L_0883E1FC:
    ctx.set_gpr(2, ctx.gpr[17] + 0u);
    goto L_0883E200;
L_0883E200:
    ctx.set_gpr(31, rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(12)));
    ctx.set_gpr(17, rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(8)));
    ctx.set_gpr(16, rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(4)));
    jump_target = ctx.gpr[31];
    ctx.set_gpr(29, ctx.gpr[29] + static_cast<std::uint32_t>(16));
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_0883E214:
    ctx.set_gpr(29, ctx.gpr[29] + static_cast<std::uint32_t>(-16));
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(12), ctx.gpr[31]);
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(8), ctx.gpr[16]);
    ctx.set_gpr(31, 0x0883E228u);
    ctx.set_gpr(16, ctx.gpr[4] + 0u);
    goto L_0883E240;
L_0883E228:
    rt.memory().aot_store32(ctx.gpr[16] + static_cast<std::uint32_t>(0), ctx.gpr[2]);
    ctx.set_gpr(2, ctx.gpr[16] + 0u);
    ctx.set_gpr(31, rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(12)));
    ctx.set_gpr(16, rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(8)));
    jump_target = ctx.gpr[31];
    ctx.set_gpr(29, ctx.gpr[29] + static_cast<std::uint32_t>(16));
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_0883E240:
    ctx.set_gpr(4, 0u + 0u);
    (void)rt.invoke_chained_direct<&recomp_unit_0059_entry, 59u, 295u, 0x088F1924u>(ctx, &aot_mem); return;
L_0883E248:
    ctx.set_gpr(3, 0u + 0u);
    jump_target = ctx.gpr[31];
    rt.memory().aot_store8(ctx.gpr[4] + static_cast<std::uint32_t>(0), static_cast<std::uint8_t>(ctx.gpr[3]));
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_0883E254:
    ctx.set_gpr(29, ctx.gpr[29] + static_cast<std::uint32_t>(-464));
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(44), ctx.gpr[31]);
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(40), ctx.gpr[23]);
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(36), ctx.gpr[22]);
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(32), ctx.gpr[21]);
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(28), ctx.gpr[20]);
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(24), ctx.gpr[19]);
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(20), ctx.gpr[18]);
    ctx.set_gpr(23, ctx.gpr[4] + 0u);
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(16), ctx.gpr[17]);
    ctx.set_gpr(4, ctx.gpr[29] + static_cast<std::uint32_t>(460));
    ctx.set_gpr(31, 0x0883E288u);
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(12), ctx.gpr[16]);
    goto L_0883EC28;
L_0883E288:
    ctx.set_gpr(31, 0x0883E290u);
    ctx.set_gpr(4, ctx.gpr[29] + static_cast<std::uint32_t>(432));
    if (rt.invoke_chained_direct<&recomp_unit_0108_entry, 108u, 623u, 0x089B798Cu>(ctx, &aot_mem) && ctx.pc == 0x0883E290u) goto L_0883E290;
    return;
L_0883E290:
    ctx.set_gpr(31, 0x0883E298u);
    ctx.set_gpr(4, ctx.gpr[29] + static_cast<std::uint32_t>(404));
    if (rt.invoke_chained_direct<&recomp_unit_0108_entry, 108u, 623u, 0x089B798Cu>(ctx, &aot_mem) && ctx.pc == 0x0883E298u) goto L_0883E298;
    return;
L_0883E298:
    ctx.set_gpr(31, 0x0883E2A0u);
    ctx.set_gpr(4, ctx.gpr[29] + static_cast<std::uint32_t>(376));
    if (rt.invoke_chained_direct<&recomp_unit_0108_entry, 108u, 623u, 0x089B798Cu>(ctx, &aot_mem) && ctx.pc == 0x0883E2A0u) goto L_0883E2A0;
    return;
L_0883E2A0:
    ctx.set_gpr(31, 0x0883E2A8u);
    ctx.set_gpr(4, ctx.gpr[29] + static_cast<std::uint32_t>(348));
    if (rt.invoke_chained_direct<&recomp_unit_0108_entry, 108u, 623u, 0x089B798Cu>(ctx, &aot_mem) && ctx.pc == 0x0883E2A8u) goto L_0883E2A8;
    return;
L_0883E2A8:
    ctx.set_gpr(31, 0x0883E2B0u);
    ctx.set_gpr(4, ctx.gpr[29] + static_cast<std::uint32_t>(344));
    goto L_0883EC1C;
L_0883E2B0:
    ctx.set_gpr(4, ctx.gpr[23] + static_cast<std::uint32_t>(8292));
    ctx.set_gpr(4, ctx.gpr[4] + static_cast<std::uint32_t>(32760));
    ctx.set_gpr(31, 0x0883E2C0u);
    ctx.set_gpr(5, ctx.gpr[29] + static_cast<std::uint32_t>(344));
    goto L_0883EBE0;
L_0883E2C0:
    ctx.set_gpr(4, ctx.gpr[29] + static_cast<std::uint32_t>(460));
    ctx.set_gpr(31, 0x0883E2CCu);
    ctx.set_gpr(5, 0u + static_cast<std::uint32_t>(1));
    goto L_0883EBB4;
L_0883E2CC:
    ctx.set_gpr(4, ctx.gpr[29] + static_cast<std::uint32_t>(460));
    ctx.set_gpr(31, 0x0883E2D8u);
    ctx.set_gpr(5, 0u + static_cast<std::uint32_t>(1));
    goto L_0883EB88;
L_0883E2D8:
    ctx.set_gpr(4, ctx.gpr[29] + static_cast<std::uint32_t>(460));
    ctx.set_gpr(31, 0x0883E2E4u);
    ctx.set_gpr(5, 0u + static_cast<std::uint32_t>(1));
    goto L_0883EB5C;
L_0883E2E4:
    ctx.set_gpr(4, ctx.gpr[29] + static_cast<std::uint32_t>(460));
    ctx.set_gpr(31, 0x0883E2F0u);
    ctx.set_gpr(5, 0u + static_cast<std::uint32_t>(1));
    goto L_0883EB34;
L_0883E2F0:
    ctx.set_gpr(4, ctx.gpr[23] + static_cast<std::uint32_t>(8292));
    ctx.set_gpr(31, 0x0883E2FCu);
    ctx.set_gpr(4, ctx.gpr[4] + static_cast<std::uint32_t>(32760));
    goto L_0883EB2C;
L_0883E2FC:
    ctx.set_gpr(4, ctx.gpr[23] + static_cast<std::uint32_t>(8288));
    ctx.set_gpr(16, ctx.gpr[2] + 0u);
    ctx.set_gpr(31, 0x0883E30Cu);
    ctx.set_gpr(4, ctx.gpr[4] + static_cast<std::uint32_t>(32760));
    goto L_0883EB24;
L_0883E30C:
    ctx.set_gpr(25, rt.memory().aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(0)));
    ctx.set_gpr(8, ctx.gpr[2] + 0u);
    ctx.set_gpr(4, ctx.gpr[16] + 0u);
    ctx.set_gpr(25, rt.memory().aot_load32(ctx.gpr[25] + static_cast<std::uint32_t>(96)));
    ctx.set_gpr(5, ctx.gpr[29] + static_cast<std::uint32_t>(460));
    ctx.set_gpr(6, 0u + static_cast<std::uint32_t>(300));
    jump_target = ctx.gpr[25];
    ctx.set_gpr(31, 0x0883E32Cu);
    ctx.set_gpr(7, 0u + static_cast<std::uint32_t>(4));
    ctx.pc = jump_target;
    if (rt.invoke_chained_call(ctx, &aot_mem) && ctx.pc == 0x0883E32Cu) goto L_0883E32C;
    return;
L_0883E32C:
    ctx.set_gpr(4, ctx.gpr[29] + static_cast<std::uint32_t>(432));
    ctx.set_gpr(5, 0u + 0u);
    ctx.set_gpr(31, 0x0883E33Cu);
    ctx.set_gpr(6, 0u + 0u);
    goto L_0883EB18;
L_0883E33C:
    ctx.set_gpr(2, 0u + static_cast<std::uint32_t>(300));
    ctx.set_gpr(4, ctx.gpr[23] + static_cast<std::uint32_t>(8292));
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(444), ctx.gpr[2]);
    ctx.set_gpr(4, ctx.gpr[4] + static_cast<std::uint32_t>(32760));
    ctx.set_gpr(31, 0x0883E354u);
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(440), 0u);
    goto L_0883EB2C;
L_0883E354:
    ctx.set_gpr(25, rt.memory().aot_load32(ctx.gpr[2] + static_cast<std::uint32_t>(0)));
    ctx.set_gpr(4, ctx.gpr[2] + 0u);
    ctx.set_gpr(5, ctx.gpr[29] + static_cast<std::uint32_t>(432));
    ctx.set_gpr(25, rt.memory().aot_load32(ctx.gpr[25] + static_cast<std::uint32_t>(104)));
    jump_target = ctx.gpr[25];
    ctx.set_gpr(31, 0x0883E36Cu);
    ctx.set_gpr(6, 0u + static_cast<std::uint32_t>(1));
    ctx.pc = jump_target;
    if (rt.invoke_chained_call(ctx, &aot_mem) && ctx.pc == 0x0883E36Cu) goto L_0883E36C;
    return;
L_0883E36C:
    ctx.set_gpr(4, ctx.gpr[29] + static_cast<std::uint32_t>(404));
    ctx.set_gpr(5, 0u + static_cast<std::uint32_t>(2));
    ctx.set_gpr(31, 0x0883E37Cu);
    ctx.set_gpr(6, 0u + 0u);
    goto L_0883EB18;
L_0883E37C:
    ctx.set_gpr(2, 0u + static_cast<std::uint32_t>(300));
    ctx.set_gpr(4, ctx.gpr[23] + static_cast<std::uint32_t>(8292));
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(416), ctx.gpr[2]);
    ctx.set_gpr(4, ctx.gpr[4] + static_cast<std::uint32_t>(32760));
    ctx.set_gpr(31, 0x0883E394u);
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(412), 0u);
    goto L_0883EB2C;
L_0883E394:
    ctx.set_gpr(25, rt.memory().aot_load32(ctx.gpr[2] + static_cast<std::uint32_t>(0)));
    ctx.set_gpr(4, ctx.gpr[2] + 0u);
    ctx.set_gpr(5, ctx.gpr[29] + static_cast<std::uint32_t>(404));
    ctx.set_gpr(25, rt.memory().aot_load32(ctx.gpr[25] + static_cast<std::uint32_t>(104)));
    jump_target = ctx.gpr[25];
    ctx.set_gpr(31, 0x0883E3ACu);
    ctx.set_gpr(6, 0u + static_cast<std::uint32_t>(1));
    ctx.pc = jump_target;
    if (rt.invoke_chained_call(ctx, &aot_mem) && ctx.pc == 0x0883E3ACu) goto L_0883E3AC;
    return;
L_0883E3AC:
    ctx.set_gpr(4, ctx.gpr[29] + static_cast<std::uint32_t>(376));
    ctx.set_gpr(5, 0u + static_cast<std::uint32_t>(1));
    ctx.set_gpr(31, 0x0883E3BCu);
    ctx.set_gpr(6, 0u + 0u);
    goto L_0883EB18;
L_0883E3BC:
    ctx.set_gpr(2, 0u + static_cast<std::uint32_t>(300));
    ctx.set_gpr(4, ctx.gpr[23] + static_cast<std::uint32_t>(8292));
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(388), ctx.gpr[2]);
    ctx.set_gpr(4, ctx.gpr[4] + static_cast<std::uint32_t>(32760));
    ctx.set_gpr(31, 0x0883E3D4u);
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(384), 0u);
    goto L_0883EB2C;
L_0883E3D4:
    ctx.set_gpr(25, rt.memory().aot_load32(ctx.gpr[2] + static_cast<std::uint32_t>(0)));
    ctx.set_gpr(4, ctx.gpr[2] + 0u);
    ctx.set_gpr(5, ctx.gpr[29] + static_cast<std::uint32_t>(376));
    ctx.set_gpr(25, rt.memory().aot_load32(ctx.gpr[25] + static_cast<std::uint32_t>(104)));
    jump_target = ctx.gpr[25];
    ctx.set_gpr(31, 0x0883E3ECu);
    ctx.set_gpr(6, 0u + static_cast<std::uint32_t>(1));
    ctx.pc = jump_target;
    if (rt.invoke_chained_call(ctx, &aot_mem) && ctx.pc == 0x0883E3ECu) goto L_0883E3EC;
    return;
L_0883E3EC:
    ctx.set_gpr(4, ctx.gpr[29] + static_cast<std::uint32_t>(348));
    ctx.set_gpr(5, 0u + static_cast<std::uint32_t>(3));
    ctx.set_gpr(31, 0x0883E3FCu);
    ctx.set_gpr(6, 0u + 0u);
    goto L_0883EB18;
L_0883E3FC:
    ctx.set_gpr(2, 0u + static_cast<std::uint32_t>(300));
    ctx.set_gpr(4, ctx.gpr[23] + static_cast<std::uint32_t>(8292));
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(360), ctx.gpr[2]);
    ctx.set_gpr(4, ctx.gpr[4] + static_cast<std::uint32_t>(32760));
    ctx.set_gpr(31, 0x0883E414u);
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(356), 0u);
    goto L_0883EB2C;
L_0883E414:
    ctx.set_gpr(25, rt.memory().aot_load32(ctx.gpr[2] + static_cast<std::uint32_t>(0)));
    ctx.set_gpr(4, ctx.gpr[2] + 0u);
    ctx.set_gpr(5, ctx.gpr[29] + static_cast<std::uint32_t>(348));
    ctx.set_gpr(25, rt.memory().aot_load32(ctx.gpr[25] + static_cast<std::uint32_t>(104)));
    jump_target = ctx.gpr[25];
    ctx.set_gpr(31, 0x0883E42Cu);
    ctx.set_gpr(6, 0u + static_cast<std::uint32_t>(1));
    ctx.pc = jump_target;
    if (rt.invoke_chained_call(ctx, &aot_mem) && ctx.pc == 0x0883E42Cu) goto L_0883E42C;
    return;
L_0883E42C:
    ctx.set_gpr(21, 0u + 0u);
    ctx.set_gpr(4, ctx.gpr[29] + static_cast<std::uint32_t>(432));
    goto L_0883E434;
L_0883E434:
    ctx.set_gpr(31, 0x0883E43Cu);
    ctx.set_gpr(5, ctx.gpr[21] + 0u);
    goto L_0883EB00;
L_0883E43C:
    ctx.fpr[12] = std::bit_cast<float>(0u);
    ctx.set_gpr(16, ctx.gpr[2] + 0u);
    ctx.set_gpr(4, ctx.gpr[29] + static_cast<std::uint32_t>(332));
    ctx.set_fpr_bits(13, ctx.fpr_bits(12));
    ctx.set_gpr(31, 0x0883E454u);
    ctx.set_fpr_bits(14, ctx.fpr_bits(12));
    goto L_0883EAC8;
L_0883E454:
    ctx.set_gpr(4, ctx.gpr[16] + 0u);
    ctx.set_gpr(31, 0x0883E460u);
    ctx.set_gpr(5, ctx.gpr[2] + 0u);
    goto L_0883EAA8;
L_0883E460:
    ctx.set_gpr(20, ctx.gpr[21] + static_cast<std::uint32_t>(1));
    ctx.set_gpr(4, ctx.gpr[29] + static_cast<std::uint32_t>(432));
    ctx.set_gpr(31, 0x0883E470u);
    ctx.set_gpr(5, ctx.gpr[20] + 0u);
    goto L_0883EB00;
L_0883E470:
    ctx.fpr[12] = std::bit_cast<float>(0u);
    ctx.set_gpr(16, ctx.gpr[2] + 0u);
    ctx.set_gpr(4, ctx.gpr[29] + static_cast<std::uint32_t>(320));
    ctx.set_fpr_bits(13, ctx.fpr_bits(12));
    ctx.set_gpr(31, 0x0883E488u);
    ctx.set_fpr_bits(14, ctx.fpr_bits(12));
    goto L_0883EAC8;
L_0883E488:
    ctx.set_gpr(4, ctx.gpr[16] + 0u);
    ctx.set_gpr(31, 0x0883E494u);
    ctx.set_gpr(5, ctx.gpr[2] + 0u);
    goto L_0883EAA8;
L_0883E494:
    ctx.set_gpr(19, ctx.gpr[21] + static_cast<std::uint32_t>(2));
    ctx.set_gpr(4, ctx.gpr[29] + static_cast<std::uint32_t>(432));
    ctx.set_gpr(31, 0x0883E4A4u);
    ctx.set_gpr(5, ctx.gpr[19] + 0u);
    goto L_0883EB00;
L_0883E4A4:
    ctx.fpr[12] = std::bit_cast<float>(0u);
    ctx.set_gpr(16, ctx.gpr[2] + 0u);
    ctx.set_gpr(4, ctx.gpr[29] + static_cast<std::uint32_t>(308));
    ctx.set_fpr_bits(13, ctx.fpr_bits(12));
    ctx.set_gpr(31, 0x0883E4BCu);
    ctx.set_fpr_bits(14, ctx.fpr_bits(12));
    goto L_0883EAC8;
L_0883E4BC:
    ctx.set_gpr(4, ctx.gpr[16] + 0u);
    ctx.set_gpr(31, 0x0883E4C8u);
    ctx.set_gpr(5, ctx.gpr[2] + 0u);
    goto L_0883EAA8;
L_0883E4C8:
    ctx.set_gpr(18, ctx.gpr[21] + static_cast<std::uint32_t>(3));
    ctx.set_gpr(4, ctx.gpr[29] + static_cast<std::uint32_t>(432));
    ctx.set_gpr(31, 0x0883E4D8u);
    ctx.set_gpr(5, ctx.gpr[18] + 0u);
    goto L_0883EB00;
L_0883E4D8:
    ctx.fpr[12] = std::bit_cast<float>(0u);
    ctx.set_gpr(16, ctx.gpr[2] + 0u);
    ctx.set_gpr(4, ctx.gpr[29] + static_cast<std::uint32_t>(296));
    ctx.set_fpr_bits(13, ctx.fpr_bits(12));
    ctx.set_gpr(31, 0x0883E4F0u);
    ctx.set_fpr_bits(14, ctx.fpr_bits(12));
    goto L_0883EAC8;
L_0883E4F0:
    ctx.set_gpr(4, ctx.gpr[16] + 0u);
    ctx.set_gpr(31, 0x0883E4FCu);
    ctx.set_gpr(5, ctx.gpr[2] + 0u);
    goto L_0883EAA8;
L_0883E4FC:
    ctx.set_gpr(17, ctx.gpr[21] + static_cast<std::uint32_t>(4));
    ctx.set_gpr(4, ctx.gpr[29] + static_cast<std::uint32_t>(432));
    ctx.set_gpr(31, 0x0883E50Cu);
    ctx.set_gpr(5, ctx.gpr[17] + 0u);
    goto L_0883EB00;
L_0883E50C:
    ctx.fpr[12] = std::bit_cast<float>(0u);
    ctx.set_gpr(16, ctx.gpr[2] + 0u);
    ctx.set_gpr(4, ctx.gpr[29] + static_cast<std::uint32_t>(284));
    ctx.set_fpr_bits(13, ctx.fpr_bits(12));
    ctx.set_gpr(31, 0x0883E524u);
    ctx.set_fpr_bits(14, ctx.fpr_bits(12));
    goto L_0883EAC8;
L_0883E524:
    ctx.set_gpr(4, ctx.gpr[16] + 0u);
    ctx.set_gpr(31, 0x0883E530u);
    ctx.set_gpr(5, ctx.gpr[2] + 0u);
    goto L_0883EAA8;
L_0883E530:
    ctx.set_gpr(16, ctx.gpr[21] + static_cast<std::uint32_t>(5));
    ctx.set_gpr(4, ctx.gpr[29] + static_cast<std::uint32_t>(432));
    ctx.set_gpr(31, 0x0883E540u);
    ctx.set_gpr(5, ctx.gpr[16] + 0u);
    goto L_0883EB00;
L_0883E540:
    ctx.fpr[12] = std::bit_cast<float>(0u);
    ctx.set_gpr(22, ctx.gpr[2] + 0u);
    ctx.set_gpr(4, ctx.gpr[29] + static_cast<std::uint32_t>(272));
    ctx.set_fpr_bits(13, ctx.fpr_bits(12));
    ctx.set_gpr(31, 0x0883E558u);
    ctx.set_fpr_bits(14, ctx.fpr_bits(12));
    goto L_0883EAC8;
L_0883E558:
    ctx.set_gpr(4, ctx.gpr[22] + 0u);
    ctx.set_gpr(31, 0x0883E564u);
    ctx.set_gpr(5, ctx.gpr[2] + 0u);
    goto L_0883EAA8;
L_0883E564:
    ctx.set_gpr(2, 16256u << 16u);
    ctx.fpr[12] = std::bit_cast<float>(ctx.gpr[2]);
    ctx.set_gpr(4, ctx.gpr[29] + static_cast<std::uint32_t>(256));
    ctx.set_fpr_bits(13, ctx.fpr_bits(12));
    ctx.set_fpr_bits(14, ctx.fpr_bits(12));
    ctx.set_gpr(31, 0x0883E580u);
    ctx.set_fpr_bits(15, ctx.fpr_bits(12));
    goto L_0883EA54;
L_0883E580:
    ctx.set_gpr(4, ctx.gpr[2] + 0u);
    ctx.set_gpr(31, 0x0883E58Cu);
    ctx.set_gpr(5, 0u + static_cast<std::uint32_t>(1));
    if (rt.invoke_chained_direct<&recomp_unit_0127_entry, 127u, 283u, 0x08A03440u>(ctx, &aot_mem) && ctx.pc == 0x0883E58Cu) goto L_0883E58C;
    return;
L_0883E58C:
    ctx.set_gpr(22, ctx.gpr[2] + 0u);
    ctx.set_gpr(4, ctx.gpr[29] + static_cast<std::uint32_t>(404));
    ctx.set_gpr(31, 0x0883E59Cu);
    ctx.set_gpr(5, ctx.gpr[21] + 0u);
    goto L_0883EA90;
L_0883E59C:
    rt.memory().aot_store32(ctx.gpr[2] + static_cast<std::uint32_t>(0), ctx.gpr[22]);
    ctx.set_gpr(2, 16256u << 16u);
    ctx.fpr[12] = std::bit_cast<float>(ctx.gpr[2]);
    ctx.set_gpr(4, ctx.gpr[29] + static_cast<std::uint32_t>(240));
    ctx.set_fpr_bits(13, ctx.fpr_bits(12));
    ctx.set_fpr_bits(14, ctx.fpr_bits(12));
    ctx.set_gpr(31, 0x0883E5BCu);
    ctx.set_fpr_bits(15, ctx.fpr_bits(12));
    goto L_0883EA54;
L_0883E5BC:
    ctx.set_gpr(4, ctx.gpr[2] + 0u);
    ctx.set_gpr(31, 0x0883E5C8u);
    ctx.set_gpr(5, 0u + static_cast<std::uint32_t>(1));
    if (rt.invoke_chained_direct<&recomp_unit_0127_entry, 127u, 283u, 0x08A03440u>(ctx, &aot_mem) && ctx.pc == 0x0883E5C8u) goto L_0883E5C8;
    return;
L_0883E5C8:
    ctx.set_gpr(22, ctx.gpr[2] + 0u);
    ctx.set_gpr(4, ctx.gpr[29] + static_cast<std::uint32_t>(404));
    ctx.set_gpr(31, 0x0883E5D8u);
    ctx.set_gpr(5, ctx.gpr[20] + 0u);
    goto L_0883EA90;
L_0883E5D8:
    rt.memory().aot_store32(ctx.gpr[2] + static_cast<std::uint32_t>(0), ctx.gpr[22]);
    ctx.set_gpr(2, 16256u << 16u);
    ctx.fpr[12] = std::bit_cast<float>(ctx.gpr[2]);
    ctx.set_gpr(4, ctx.gpr[29] + static_cast<std::uint32_t>(224));
    ctx.set_fpr_bits(13, ctx.fpr_bits(12));
    ctx.set_fpr_bits(14, ctx.fpr_bits(12));
    ctx.set_gpr(31, 0x0883E5F8u);
    ctx.set_fpr_bits(15, ctx.fpr_bits(12));
    goto L_0883EA54;
L_0883E5F8:
    ctx.set_gpr(4, ctx.gpr[2] + 0u);
    ctx.set_gpr(31, 0x0883E604u);
    ctx.set_gpr(5, 0u + static_cast<std::uint32_t>(1));
    if (rt.invoke_chained_direct<&recomp_unit_0127_entry, 127u, 283u, 0x08A03440u>(ctx, &aot_mem) && ctx.pc == 0x0883E604u) goto L_0883E604;
    return;
L_0883E604:
    ctx.set_gpr(22, ctx.gpr[2] + 0u);
    ctx.set_gpr(4, ctx.gpr[29] + static_cast<std::uint32_t>(404));
    ctx.set_gpr(31, 0x0883E614u);
    ctx.set_gpr(5, ctx.gpr[19] + 0u);
    goto L_0883EA90;
L_0883E614:
    rt.memory().aot_store32(ctx.gpr[2] + static_cast<std::uint32_t>(0), ctx.gpr[22]);
    ctx.set_gpr(2, 16256u << 16u);
    ctx.fpr[12] = std::bit_cast<float>(ctx.gpr[2]);
    ctx.set_gpr(4, ctx.gpr[29] + static_cast<std::uint32_t>(208));
    ctx.set_fpr_bits(13, ctx.fpr_bits(12));
    ctx.set_fpr_bits(14, ctx.fpr_bits(12));
    ctx.set_gpr(31, 0x0883E634u);
    ctx.set_fpr_bits(15, ctx.fpr_bits(12));
    goto L_0883EA54;
L_0883E634:
    ctx.set_gpr(4, ctx.gpr[2] + 0u);
    ctx.set_gpr(31, 0x0883E640u);
    ctx.set_gpr(5, 0u + static_cast<std::uint32_t>(1));
    if (rt.invoke_chained_direct<&recomp_unit_0127_entry, 127u, 283u, 0x08A03440u>(ctx, &aot_mem) && ctx.pc == 0x0883E640u) goto L_0883E640;
    return;
L_0883E640:
    ctx.set_gpr(22, ctx.gpr[2] + 0u);
    ctx.set_gpr(4, ctx.gpr[29] + static_cast<std::uint32_t>(404));
    ctx.set_gpr(31, 0x0883E650u);
    ctx.set_gpr(5, ctx.gpr[18] + 0u);
    goto L_0883EA90;
L_0883E650:
    rt.memory().aot_store32(ctx.gpr[2] + static_cast<std::uint32_t>(0), ctx.gpr[22]);
    ctx.set_gpr(2, 16256u << 16u);
    ctx.fpr[12] = std::bit_cast<float>(ctx.gpr[2]);
    ctx.set_gpr(4, ctx.gpr[29] + static_cast<std::uint32_t>(192));
    ctx.set_fpr_bits(13, ctx.fpr_bits(12));
    ctx.set_fpr_bits(14, ctx.fpr_bits(12));
    ctx.set_gpr(31, 0x0883E670u);
    ctx.set_fpr_bits(15, ctx.fpr_bits(12));
    goto L_0883EA54;
L_0883E670:
    ctx.set_gpr(4, ctx.gpr[2] + 0u);
    ctx.set_gpr(31, 0x0883E67Cu);
    ctx.set_gpr(5, 0u + static_cast<std::uint32_t>(1));
    if (rt.invoke_chained_direct<&recomp_unit_0127_entry, 127u, 283u, 0x08A03440u>(ctx, &aot_mem) && ctx.pc == 0x0883E67Cu) goto L_0883E67C;
    return;
L_0883E67C:
    ctx.set_gpr(22, ctx.gpr[2] + 0u);
    ctx.set_gpr(4, ctx.gpr[29] + static_cast<std::uint32_t>(404));
    ctx.set_gpr(31, 0x0883E68Cu);
    ctx.set_gpr(5, ctx.gpr[17] + 0u);
    goto L_0883EA90;
L_0883E68C:
    rt.memory().aot_store32(ctx.gpr[2] + static_cast<std::uint32_t>(0), ctx.gpr[22]);
    ctx.set_gpr(2, 16256u << 16u);
    ctx.fpr[12] = std::bit_cast<float>(ctx.gpr[2]);
    ctx.set_gpr(4, ctx.gpr[29] + static_cast<std::uint32_t>(176));
    ctx.set_fpr_bits(13, ctx.fpr_bits(12));
    ctx.set_fpr_bits(14, ctx.fpr_bits(12));
    ctx.set_gpr(31, 0x0883E6ACu);
    ctx.set_fpr_bits(15, ctx.fpr_bits(12));
    goto L_0883EA54;
L_0883E6AC:
    ctx.set_gpr(4, ctx.gpr[2] + 0u);
    ctx.set_gpr(31, 0x0883E6B8u);
    ctx.set_gpr(5, 0u + static_cast<std::uint32_t>(1));
    if (rt.invoke_chained_direct<&recomp_unit_0127_entry, 127u, 283u, 0x08A03440u>(ctx, &aot_mem) && ctx.pc == 0x0883E6B8u) goto L_0883E6B8;
    return;
L_0883E6B8:
    ctx.set_gpr(22, ctx.gpr[2] + 0u);
    ctx.set_gpr(4, ctx.gpr[29] + static_cast<std::uint32_t>(404));
    ctx.set_gpr(31, 0x0883E6C8u);
    ctx.set_gpr(5, ctx.gpr[16] + 0u);
    goto L_0883EA90;
L_0883E6C8:
    rt.memory().aot_store32(ctx.gpr[2] + static_cast<std::uint32_t>(0), ctx.gpr[22]);
    ctx.set_gpr(4, ctx.gpr[29] + static_cast<std::uint32_t>(376));
    ctx.set_gpr(31, 0x0883E6D8u);
    ctx.set_gpr(5, ctx.gpr[21] + 0u);
    goto L_0883EA3C;
L_0883E6D8:
    ctx.set_gpr(22, ctx.gpr[2] + 0u);
    ctx.fpr[12] = std::bit_cast<float>(0u);
    ctx.set_gpr(2, 16256u << 16u);
    ctx.fpr[14] = std::bit_cast<float>(ctx.gpr[2]);
    ctx.set_gpr(4, ctx.gpr[29] + static_cast<std::uint32_t>(164));
    ctx.set_gpr(31, 0x0883E6F4u);
    ctx.set_fpr_bits(13, ctx.fpr_bits(12));
    goto L_0883EAC8;
L_0883E6F4:
    ctx.set_gpr(4, ctx.gpr[22] + 0u);
    ctx.set_gpr(31, 0x0883E700u);
    ctx.set_gpr(5, ctx.gpr[2] + 0u);
    goto L_0883EAA8;
L_0883E700:
    ctx.set_gpr(4, ctx.gpr[29] + static_cast<std::uint32_t>(376));
    ctx.set_gpr(31, 0x0883E70Cu);
    ctx.set_gpr(5, ctx.gpr[20] + 0u);
    goto L_0883EA3C;
L_0883E70C:
    ctx.set_gpr(22, ctx.gpr[2] + 0u);
    ctx.fpr[12] = std::bit_cast<float>(0u);
    ctx.set_gpr(2, 16256u << 16u);
    ctx.fpr[14] = std::bit_cast<float>(ctx.gpr[2]);
    ctx.set_gpr(4, ctx.gpr[29] + static_cast<std::uint32_t>(152));
    ctx.set_gpr(31, 0x0883E728u);
    ctx.set_fpr_bits(13, ctx.fpr_bits(12));
    goto L_0883EAC8;
L_0883E728:
    ctx.set_gpr(4, ctx.gpr[22] + 0u);
    ctx.set_gpr(31, 0x0883E734u);
    ctx.set_gpr(5, ctx.gpr[2] + 0u);
    goto L_0883EAA8;
L_0883E734:
    ctx.set_gpr(4, ctx.gpr[29] + static_cast<std::uint32_t>(376));
    ctx.set_gpr(31, 0x0883E740u);
    ctx.set_gpr(5, ctx.gpr[19] + 0u);
    goto L_0883EA3C;
L_0883E740:
    ctx.set_gpr(22, ctx.gpr[2] + 0u);
    ctx.fpr[12] = std::bit_cast<float>(0u);
    ctx.set_gpr(2, 16256u << 16u);
    ctx.fpr[14] = std::bit_cast<float>(ctx.gpr[2]);
    ctx.set_gpr(4, ctx.gpr[29] + static_cast<std::uint32_t>(140));
    ctx.set_gpr(31, 0x0883E75Cu);
    ctx.set_fpr_bits(13, ctx.fpr_bits(12));
    goto L_0883EAC8;
L_0883E75C:
    ctx.set_gpr(4, ctx.gpr[22] + 0u);
    ctx.set_gpr(31, 0x0883E768u);
    ctx.set_gpr(5, ctx.gpr[2] + 0u);
    goto L_0883EAA8;
L_0883E768:
    ctx.set_gpr(4, ctx.gpr[29] + static_cast<std::uint32_t>(376));
    ctx.set_gpr(31, 0x0883E774u);
    ctx.set_gpr(5, ctx.gpr[18] + 0u);
    goto L_0883EA3C;
L_0883E774:
    ctx.set_gpr(22, ctx.gpr[2] + 0u);
    ctx.fpr[12] = std::bit_cast<float>(0u);
    ctx.set_gpr(2, 16256u << 16u);
    ctx.fpr[14] = std::bit_cast<float>(ctx.gpr[2]);
    ctx.set_gpr(4, ctx.gpr[29] + static_cast<std::uint32_t>(128));
    ctx.set_gpr(31, 0x0883E790u);
    ctx.set_fpr_bits(13, ctx.fpr_bits(12));
    goto L_0883EAC8;
L_0883E790:
    ctx.set_gpr(4, ctx.gpr[22] + 0u);
    ctx.set_gpr(31, 0x0883E79Cu);
    ctx.set_gpr(5, ctx.gpr[2] + 0u);
    goto L_0883EAA8;
L_0883E79C:
    ctx.set_gpr(4, ctx.gpr[29] + static_cast<std::uint32_t>(376));
    ctx.set_gpr(31, 0x0883E7A8u);
    ctx.set_gpr(5, ctx.gpr[17] + 0u);
    goto L_0883EA3C;
L_0883E7A8:
    ctx.set_gpr(22, ctx.gpr[2] + 0u);
    ctx.fpr[12] = std::bit_cast<float>(0u);
    ctx.set_gpr(2, 16256u << 16u);
    ctx.fpr[14] = std::bit_cast<float>(ctx.gpr[2]);
    ctx.set_gpr(4, ctx.gpr[29] + static_cast<std::uint32_t>(116));
    ctx.set_gpr(31, 0x0883E7C4u);
    ctx.set_fpr_bits(13, ctx.fpr_bits(12));
    goto L_0883EAC8;
L_0883E7C4:
    ctx.set_gpr(4, ctx.gpr[22] + 0u);
    ctx.set_gpr(31, 0x0883E7D0u);
    ctx.set_gpr(5, ctx.gpr[2] + 0u);
    goto L_0883EAA8;
L_0883E7D0:
    ctx.set_gpr(4, ctx.gpr[29] + static_cast<std::uint32_t>(376));
    ctx.set_gpr(31, 0x0883E7DCu);
    ctx.set_gpr(5, ctx.gpr[16] + 0u);
    goto L_0883EA3C;
L_0883E7DC:
    ctx.set_gpr(22, ctx.gpr[2] + 0u);
    ctx.fpr[12] = std::bit_cast<float>(0u);
    ctx.set_gpr(2, 16256u << 16u);
    ctx.fpr[14] = std::bit_cast<float>(ctx.gpr[2]);
    ctx.set_gpr(4, ctx.gpr[29] + static_cast<std::uint32_t>(104));
    ctx.set_gpr(31, 0x0883E7F8u);
    ctx.set_fpr_bits(13, ctx.fpr_bits(12));
    goto L_0883EAC8;
L_0883E7F8:
    ctx.set_gpr(4, ctx.gpr[22] + 0u);
    ctx.set_gpr(31, 0x0883E804u);
    ctx.set_gpr(5, ctx.gpr[2] + 0u);
    goto L_0883EAA8;
L_0883E804:
    ctx.set_gpr(4, ctx.gpr[29] + static_cast<std::uint32_t>(348));
    ctx.set_gpr(31, 0x0883E810u);
    ctx.set_gpr(5, ctx.gpr[21] + 0u);
    goto L_0883EA24;
L_0883E810:
    ctx.fpr[12] = std::bit_cast<float>(0u);
    ctx.set_gpr(22, ctx.gpr[2] + 0u);
    ctx.set_gpr(4, ctx.gpr[29] + static_cast<std::uint32_t>(96));
    ctx.set_gpr(31, 0x0883E824u);
    ctx.set_fpr_bits(13, ctx.fpr_bits(12));
    goto L_0883E9F0;
L_0883E824:
    ctx.set_gpr(4, ctx.gpr[22] + 0u);
    ctx.set_gpr(31, 0x0883E830u);
    ctx.set_gpr(5, ctx.gpr[2] + 0u);
    goto L_0883E9D8;
L_0883E830:
    ctx.set_gpr(5, ctx.gpr[20] + 0u);
    ctx.set_gpr(31, 0x0883E83Cu);
    ctx.set_gpr(4, ctx.gpr[29] + static_cast<std::uint32_t>(348));
    goto L_0883EA24;
L_0883E83C:
    ctx.fpr[12] = std::bit_cast<float>(0u);
    ctx.set_gpr(20, ctx.gpr[2] + 0u);
    ctx.set_gpr(4, ctx.gpr[29] + static_cast<std::uint32_t>(88));
    ctx.set_gpr(31, 0x0883E850u);
    ctx.set_fpr_bits(13, ctx.fpr_bits(12));
    goto L_0883E9F0;
L_0883E850:
    ctx.set_gpr(4, ctx.gpr[20] + 0u);
    ctx.set_gpr(31, 0x0883E85Cu);
    ctx.set_gpr(5, ctx.gpr[2] + 0u);
    goto L_0883E9D8;
L_0883E85C:
    ctx.set_gpr(5, ctx.gpr[19] + 0u);
    ctx.set_gpr(31, 0x0883E868u);
    ctx.set_gpr(4, ctx.gpr[29] + static_cast<std::uint32_t>(348));
    goto L_0883EA24;
L_0883E868:
    ctx.fpr[12] = std::bit_cast<float>(0u);
    ctx.set_gpr(19, ctx.gpr[2] + 0u);
    ctx.set_gpr(4, ctx.gpr[29] + static_cast<std::uint32_t>(80));
    ctx.set_gpr(31, 0x0883E87Cu);
    ctx.set_fpr_bits(13, ctx.fpr_bits(12));
    goto L_0883E9F0;
L_0883E87C:
    ctx.set_gpr(4, ctx.gpr[19] + 0u);
    ctx.set_gpr(31, 0x0883E888u);
    ctx.set_gpr(5, ctx.gpr[2] + 0u);
    goto L_0883E9D8;
L_0883E888:
    ctx.set_gpr(5, ctx.gpr[18] + 0u);
    ctx.set_gpr(31, 0x0883E894u);
    ctx.set_gpr(4, ctx.gpr[29] + static_cast<std::uint32_t>(348));
    goto L_0883EA24;
L_0883E894:
    ctx.fpr[12] = std::bit_cast<float>(0u);
    ctx.set_gpr(18, ctx.gpr[2] + 0u);
    ctx.set_gpr(4, ctx.gpr[29] + static_cast<std::uint32_t>(72));
    ctx.set_gpr(31, 0x0883E8A8u);
    ctx.set_fpr_bits(13, ctx.fpr_bits(12));
    goto L_0883E9F0;
L_0883E8A8:
    ctx.set_gpr(4, ctx.gpr[18] + 0u);
    ctx.set_gpr(31, 0x0883E8B4u);
    ctx.set_gpr(5, ctx.gpr[2] + 0u);
    goto L_0883E9D8;
L_0883E8B4:
    ctx.set_gpr(5, ctx.gpr[17] + 0u);
    ctx.set_gpr(31, 0x0883E8C0u);
    ctx.set_gpr(4, ctx.gpr[29] + static_cast<std::uint32_t>(348));
    goto L_0883EA24;
L_0883E8C0:
    ctx.fpr[12] = std::bit_cast<float>(0u);
    ctx.set_gpr(17, ctx.gpr[2] + 0u);
    ctx.set_gpr(4, ctx.gpr[29] + static_cast<std::uint32_t>(64));
    ctx.set_gpr(31, 0x0883E8D4u);
    ctx.set_fpr_bits(13, ctx.fpr_bits(12));
    goto L_0883E9F0;
L_0883E8D4:
    ctx.set_gpr(4, ctx.gpr[17] + 0u);
    ctx.set_gpr(31, 0x0883E8E0u);
    ctx.set_gpr(5, ctx.gpr[2] + 0u);
    goto L_0883E9D8;
L_0883E8E0:
    ctx.set_gpr(5, ctx.gpr[16] + 0u);
    ctx.set_gpr(31, 0x0883E8ECu);
    ctx.set_gpr(4, ctx.gpr[29] + static_cast<std::uint32_t>(348));
    goto L_0883EA24;
L_0883E8EC:
    ctx.fpr[12] = std::bit_cast<float>(0u);
    ctx.set_gpr(16, ctx.gpr[2] + 0u);
    ctx.set_gpr(4, ctx.gpr[29] + static_cast<std::uint32_t>(56));
    ctx.set_gpr(31, 0x0883E900u);
    ctx.set_fpr_bits(13, ctx.fpr_bits(12));
    goto L_0883E9F0;
L_0883E900:
    ctx.set_gpr(4, ctx.gpr[16] + 0u);
    ctx.set_gpr(31, 0x0883E90Cu);
    ctx.set_gpr(5, ctx.gpr[2] + 0u);
    goto L_0883E9D8;
L_0883E90C:
    ctx.set_gpr(21, ctx.gpr[21] + static_cast<std::uint32_t>(6));
    ctx.set_gpr(2, static_cast<std::int32_t>(ctx.gpr[21]) < 300 ? 1u : 0u);
    if (ctx.gpr[2] != 0u) {
    ctx.set_gpr(4, ctx.gpr[29] + static_cast<std::uint32_t>(432));
        goto L_0883E434;
    }
    goto L_0883E91C;
L_0883E91C:
    ctx.set_gpr(4, ctx.gpr[23] + static_cast<std::uint32_t>(8292));
    ctx.set_gpr(31, 0x0883E928u);
    ctx.set_gpr(4, ctx.gpr[4] + static_cast<std::uint32_t>(32760));
    goto L_0883EB2C;
L_0883E928:
    ctx.set_gpr(25, rt.memory().aot_load32(ctx.gpr[2] + static_cast<std::uint32_t>(0)));
    ctx.set_gpr(4, ctx.gpr[2] + 0u);
    ctx.set_gpr(5, ctx.gpr[29] + static_cast<std::uint32_t>(432));
    ctx.set_gpr(25, rt.memory().aot_load32(ctx.gpr[25] + static_cast<std::uint32_t>(108)));
    jump_target = ctx.gpr[25];
    ctx.set_gpr(31, 0x0883E940u);
    ctx.set_gpr(6, 0u + static_cast<std::uint32_t>(2));
    ctx.pc = jump_target;
    if (rt.invoke_chained_call(ctx, &aot_mem) && ctx.pc == 0x0883E940u) goto L_0883E940;
    return;
L_0883E940:
    ctx.set_gpr(4, ctx.gpr[23] + static_cast<std::uint32_t>(8292));
    ctx.set_gpr(31, 0x0883E94Cu);
    ctx.set_gpr(4, ctx.gpr[4] + static_cast<std::uint32_t>(32760));
    goto L_0883EB2C;
L_0883E94C:
    ctx.set_gpr(25, rt.memory().aot_load32(ctx.gpr[2] + static_cast<std::uint32_t>(0)));
    ctx.set_gpr(4, ctx.gpr[2] + 0u);
    ctx.set_gpr(5, ctx.gpr[29] + static_cast<std::uint32_t>(404));
    ctx.set_gpr(25, rt.memory().aot_load32(ctx.gpr[25] + static_cast<std::uint32_t>(108)));
    jump_target = ctx.gpr[25];
    ctx.set_gpr(31, 0x0883E964u);
    ctx.set_gpr(6, 0u + static_cast<std::uint32_t>(2));
    ctx.pc = jump_target;
    if (rt.invoke_chained_call(ctx, &aot_mem) && ctx.pc == 0x0883E964u) goto L_0883E964;
    return;
L_0883E964:
    ctx.set_gpr(4, ctx.gpr[23] + static_cast<std::uint32_t>(8292));
    ctx.set_gpr(31, 0x0883E970u);
    ctx.set_gpr(4, ctx.gpr[4] + static_cast<std::uint32_t>(32760));
    goto L_0883EB2C;
L_0883E970:
    ctx.set_gpr(25, rt.memory().aot_load32(ctx.gpr[2] + static_cast<std::uint32_t>(0)));
    ctx.set_gpr(4, ctx.gpr[2] + 0u);
    ctx.set_gpr(5, ctx.gpr[29] + static_cast<std::uint32_t>(376));
    ctx.set_gpr(25, rt.memory().aot_load32(ctx.gpr[25] + static_cast<std::uint32_t>(108)));
    jump_target = ctx.gpr[25];
    ctx.set_gpr(31, 0x0883E988u);
    ctx.set_gpr(6, 0u + static_cast<std::uint32_t>(2));
    ctx.pc = jump_target;
    if (rt.invoke_chained_call(ctx, &aot_mem) && ctx.pc == 0x0883E988u) goto L_0883E988;
    return;
L_0883E988:
    ctx.set_gpr(4, ctx.gpr[23] + static_cast<std::uint32_t>(8292));
    ctx.set_gpr(31, 0x0883E994u);
    ctx.set_gpr(4, ctx.gpr[4] + static_cast<std::uint32_t>(32760));
    goto L_0883EB2C;
L_0883E994:
    ctx.set_gpr(25, rt.memory().aot_load32(ctx.gpr[2] + static_cast<std::uint32_t>(0)));
    ctx.set_gpr(4, ctx.gpr[2] + 0u);
    ctx.set_gpr(5, ctx.gpr[29] + static_cast<std::uint32_t>(348));
    ctx.set_gpr(25, rt.memory().aot_load32(ctx.gpr[25] + static_cast<std::uint32_t>(108)));
    jump_target = ctx.gpr[25];
    ctx.set_gpr(31, 0x0883E9ACu);
    ctx.set_gpr(6, 0u + static_cast<std::uint32_t>(2));
    ctx.pc = jump_target;
    if (rt.invoke_chained_call(ctx, &aot_mem) && ctx.pc == 0x0883E9ACu) goto L_0883E9AC;
    return;
L_0883E9AC:
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
    ctx.set_gpr(29, ctx.gpr[29] + static_cast<std::uint32_t>(464));
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_0883E9D8:
    ctx.fpr[0] = std::bit_cast<float>(rt.memory().aot_load32(ctx.gpr[5] + static_cast<std::uint32_t>(0)));
    ctx.set_gpr(2, ctx.gpr[4] + 0u);
    rt.memory().aot_store32(ctx.gpr[4] + static_cast<std::uint32_t>(0), std::bit_cast<std::uint32_t>(ctx.fpr[0]));
    ctx.fpr[0] = std::bit_cast<float>(rt.memory().aot_load32(ctx.gpr[5] + static_cast<std::uint32_t>(4)));
    jump_target = ctx.gpr[31];
    rt.memory().aot_store32(ctx.gpr[4] + static_cast<std::uint32_t>(4), std::bit_cast<std::uint32_t>(ctx.fpr[0]));
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_0883E9F0:
    ctx.set_gpr(29, ctx.gpr[29] + static_cast<std::uint32_t>(-16));
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(12), ctx.gpr[31]);
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(8), ctx.gpr[16]);
    ctx.set_gpr(31, 0x0883EA04u);
    ctx.set_gpr(16, ctx.gpr[4] + 0u);
    goto L_0883EA18;
L_0883EA04:
    ctx.set_gpr(2, ctx.gpr[16] + 0u);
    ctx.set_gpr(31, rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(12)));
    ctx.set_gpr(16, rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(8)));
    jump_target = ctx.gpr[31];
    ctx.set_gpr(29, ctx.gpr[29] + static_cast<std::uint32_t>(16));
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_0883EA18:
    rt.memory().aot_store32(ctx.gpr[4] + static_cast<std::uint32_t>(0), std::bit_cast<std::uint32_t>(ctx.fpr[12]));
    jump_target = ctx.gpr[31];
    rt.memory().aot_store32(ctx.gpr[4] + static_cast<std::uint32_t>(4), std::bit_cast<std::uint32_t>(ctx.fpr[13]));
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_0883EA24:
    ctx.set_gpr(3, rt.memory().aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(20)));
    ctx.set_gpr(2, rt.memory().aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(16)));
    { const std::int64_t product = static_cast<std::int64_t>(static_cast<std::int32_t>(ctx.gpr[5])) * static_cast<std::int64_t>(static_cast<std::int32_t>(ctx.gpr[3])); ctx.lo = static_cast<std::uint32_t>(product); ctx.hi = static_cast<std::uint32_t>(static_cast<std::uint64_t>(product) >> 32u); }
    ctx.set_gpr(3, ctx.lo);
    jump_target = ctx.gpr[31];
    ctx.set_gpr(2, ctx.gpr[2] + ctx.gpr[3]);
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_0883EA3C:
    ctx.set_gpr(3, rt.memory().aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(20)));
    ctx.set_gpr(2, rt.memory().aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(16)));
    { const std::int64_t product = static_cast<std::int64_t>(static_cast<std::int32_t>(ctx.gpr[5])) * static_cast<std::int64_t>(static_cast<std::int32_t>(ctx.gpr[3])); ctx.lo = static_cast<std::uint32_t>(product); ctx.hi = static_cast<std::uint32_t>(static_cast<std::uint64_t>(product) >> 32u); }
    ctx.set_gpr(3, ctx.lo);
    jump_target = ctx.gpr[31];
    ctx.set_gpr(2, ctx.gpr[2] + ctx.gpr[3]);
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_0883EA54:
    ctx.set_gpr(29, ctx.gpr[29] + static_cast<std::uint32_t>(-16));
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(12), ctx.gpr[31]);
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(8), ctx.gpr[16]);
    ctx.set_gpr(31, 0x0883EA68u);
    ctx.set_gpr(16, ctx.gpr[4] + 0u);
    goto L_0883EA7C;
L_0883EA68:
    ctx.set_gpr(2, ctx.gpr[16] + 0u);
    ctx.set_gpr(31, rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(12)));
    ctx.set_gpr(16, rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(8)));
    jump_target = ctx.gpr[31];
    ctx.set_gpr(29, ctx.gpr[29] + static_cast<std::uint32_t>(16));
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_0883EA7C:
    rt.memory().aot_store32(ctx.gpr[4] + static_cast<std::uint32_t>(0), std::bit_cast<std::uint32_t>(ctx.fpr[12]));
    rt.memory().aot_store32(ctx.gpr[4] + static_cast<std::uint32_t>(4), std::bit_cast<std::uint32_t>(ctx.fpr[13]));
    rt.memory().aot_store32(ctx.gpr[4] + static_cast<std::uint32_t>(8), std::bit_cast<std::uint32_t>(ctx.fpr[14]));
    jump_target = ctx.gpr[31];
    rt.memory().aot_store32(ctx.gpr[4] + static_cast<std::uint32_t>(12), std::bit_cast<std::uint32_t>(ctx.fpr[15]));
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_0883EA90:
    ctx.set_gpr(3, rt.memory().aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(20)));
    ctx.set_gpr(2, rt.memory().aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(16)));
    { const std::int64_t product = static_cast<std::int64_t>(static_cast<std::int32_t>(ctx.gpr[5])) * static_cast<std::int64_t>(static_cast<std::int32_t>(ctx.gpr[3])); ctx.lo = static_cast<std::uint32_t>(product); ctx.hi = static_cast<std::uint32_t>(static_cast<std::uint64_t>(product) >> 32u); }
    ctx.set_gpr(3, ctx.lo);
    jump_target = ctx.gpr[31];
    ctx.set_gpr(2, ctx.gpr[2] + ctx.gpr[3]);
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_0883EAA8:
    ctx.fpr[0] = std::bit_cast<float>(rt.memory().aot_load32(ctx.gpr[5] + static_cast<std::uint32_t>(0)));
    ctx.set_gpr(2, ctx.gpr[4] + 0u);
    rt.memory().aot_store32(ctx.gpr[4] + static_cast<std::uint32_t>(0), std::bit_cast<std::uint32_t>(ctx.fpr[0]));
    ctx.fpr[0] = std::bit_cast<float>(rt.memory().aot_load32(ctx.gpr[5] + static_cast<std::uint32_t>(4)));
    rt.memory().aot_store32(ctx.gpr[4] + static_cast<std::uint32_t>(4), std::bit_cast<std::uint32_t>(ctx.fpr[0]));
    ctx.fpr[0] = std::bit_cast<float>(rt.memory().aot_load32(ctx.gpr[5] + static_cast<std::uint32_t>(8)));
    jump_target = ctx.gpr[31];
    rt.memory().aot_store32(ctx.gpr[4] + static_cast<std::uint32_t>(8), std::bit_cast<std::uint32_t>(ctx.fpr[0]));
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_0883EAC8:
    ctx.set_gpr(29, ctx.gpr[29] + static_cast<std::uint32_t>(-16));
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(12), ctx.gpr[31]);
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(8), ctx.gpr[16]);
    ctx.set_gpr(31, 0x0883EADCu);
    ctx.set_gpr(16, ctx.gpr[4] + 0u);
    goto L_0883EAF0;
L_0883EADC:
    ctx.set_gpr(2, ctx.gpr[16] + 0u);
    ctx.set_gpr(31, rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(12)));
    ctx.set_gpr(16, rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(8)));
    jump_target = ctx.gpr[31];
    ctx.set_gpr(29, ctx.gpr[29] + static_cast<std::uint32_t>(16));
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_0883EAF0:
    rt.memory().aot_store32(ctx.gpr[4] + static_cast<std::uint32_t>(0), std::bit_cast<std::uint32_t>(ctx.fpr[12]));
    rt.memory().aot_store32(ctx.gpr[4] + static_cast<std::uint32_t>(4), std::bit_cast<std::uint32_t>(ctx.fpr[13]));
    jump_target = ctx.gpr[31];
    rt.memory().aot_store32(ctx.gpr[4] + static_cast<std::uint32_t>(8), std::bit_cast<std::uint32_t>(ctx.fpr[14]));
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_0883EB00:
    ctx.set_gpr(3, rt.memory().aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(20)));
    ctx.set_gpr(2, rt.memory().aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(16)));
    { const std::int64_t product = static_cast<std::int64_t>(static_cast<std::int32_t>(ctx.gpr[5])) * static_cast<std::int64_t>(static_cast<std::int32_t>(ctx.gpr[3])); ctx.lo = static_cast<std::uint32_t>(product); ctx.hi = static_cast<std::uint32_t>(static_cast<std::uint64_t>(product) >> 32u); }
    ctx.set_gpr(3, ctx.lo);
    jump_target = ctx.gpr[31];
    ctx.set_gpr(2, ctx.gpr[2] + ctx.gpr[3]);
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_0883EB18:
    rt.memory().aot_store32(ctx.gpr[4] + static_cast<std::uint32_t>(4), ctx.gpr[5]);
    jump_target = ctx.gpr[31];
    rt.memory().aot_store32(ctx.gpr[4] + static_cast<std::uint32_t>(0), ctx.gpr[6]);
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_0883EB24:
    jump_target = ctx.gpr[31];
    ctx.set_gpr(2, rt.memory().aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(0)));
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_0883EB2C:
    jump_target = ctx.gpr[31];
    ctx.set_gpr(2, rt.memory().aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(0)));
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_0883EB34:
    ctx.set_gpr(3, ctx.gpr[5] & 255u);
    ctx.set_gpr(5, 65520u << 16u);
    ctx.set_gpr(6, rt.memory().aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(0)));
    ctx.set_gpr(5, ctx.gpr[5] | 65535u);
    ctx.set_gpr(3, ctx.gpr[3] << 16u);
    ctx.set_gpr(5, ctx.gpr[6] & ctx.gpr[5]);
    ctx.set_gpr(3, ctx.gpr[5] | ctx.gpr[3]);
    rt.memory().aot_store32(ctx.gpr[4] + static_cast<std::uint32_t>(0), ctx.gpr[5]);
    jump_target = ctx.gpr[31];
    rt.memory().aot_store32(ctx.gpr[4] + static_cast<std::uint32_t>(0), ctx.gpr[3]);
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_0883EB5C:
    if (ctx.gpr[5] == 0u) {
    ctx.set_gpr(5, rt.memory().aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(0)));
        goto L_0883EB74;
    }
    goto L_0883EB64;
L_0883EB64:
    ctx.set_gpr(3, rt.memory().aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(0)));
    ctx.set_gpr(3, ctx.gpr[3] | 4u);
    { const bool branch_taken = 0u == 0u;
    rt.memory().aot_store32(ctx.gpr[4] + static_cast<std::uint32_t>(0), ctx.gpr[3]);
      if (branch_taken) {
          goto L_0883EB80;
      }
      goto L_0883EB74;
    }
L_0883EB74:
    ctx.set_gpr(3, 0u + static_cast<std::uint32_t>(-5));
    ctx.set_gpr(3, ctx.gpr[5] & ctx.gpr[3]);
    rt.memory().aot_store32(ctx.gpr[4] + static_cast<std::uint32_t>(0), ctx.gpr[3]);
    goto L_0883EB80;
L_0883EB80:
    jump_target = ctx.gpr[31];
    // nop
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_0883EB88:
    if (ctx.gpr[5] == 0u) {
    ctx.set_gpr(5, rt.memory().aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(0)));
        goto L_0883EBA0;
    }
    goto L_0883EB90;
L_0883EB90:
    ctx.set_gpr(3, rt.memory().aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(0)));
    ctx.set_gpr(3, ctx.gpr[3] | 2u);
    { const bool branch_taken = 0u == 0u;
    rt.memory().aot_store32(ctx.gpr[4] + static_cast<std::uint32_t>(0), ctx.gpr[3]);
      if (branch_taken) {
          goto L_0883EBAC;
      }
      goto L_0883EBA0;
    }
L_0883EBA0:
    ctx.set_gpr(3, 0u + static_cast<std::uint32_t>(-3));
    ctx.set_gpr(3, ctx.gpr[5] & ctx.gpr[3]);
    rt.memory().aot_store32(ctx.gpr[4] + static_cast<std::uint32_t>(0), ctx.gpr[3]);
    goto L_0883EBAC;
L_0883EBAC:
    jump_target = ctx.gpr[31];
    // nop
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_0883EBB4:
    if (ctx.gpr[5] == 0u) {
    ctx.set_gpr(5, rt.memory().aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(0)));
        goto L_0883EBCC;
    }
    goto L_0883EBBC;
L_0883EBBC:
    ctx.set_gpr(3, rt.memory().aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(0)));
    ctx.set_gpr(3, ctx.gpr[3] | 1u);
    { const bool branch_taken = 0u == 0u;
    rt.memory().aot_store32(ctx.gpr[4] + static_cast<std::uint32_t>(0), ctx.gpr[3]);
      if (branch_taken) {
          goto L_0883EBD8;
      }
      goto L_0883EBCC;
    }
L_0883EBCC:
    ctx.set_gpr(3, 0u + static_cast<std::uint32_t>(-2));
    ctx.set_gpr(3, ctx.gpr[5] & ctx.gpr[3]);
    rt.memory().aot_store32(ctx.gpr[4] + static_cast<std::uint32_t>(0), ctx.gpr[3]);
    goto L_0883EBD8;
L_0883EBD8:
    jump_target = ctx.gpr[31];
    // nop
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_0883EBE0:
    ctx.set_gpr(29, ctx.gpr[29] + static_cast<std::uint32_t>(-16));
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(12), ctx.gpr[31]);
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(8), ctx.gpr[16]);
    ctx.set_gpr(31, 0x0883EBF4u);
    ctx.set_gpr(16, ctx.gpr[4] + 0u);
    goto L_0883EC14;
L_0883EBF4:
    ctx.set_gpr(5, ctx.gpr[2] + 0u);
    ctx.set_gpr(31, 0x0883EC00u);
    ctx.set_gpr(4, ctx.gpr[16] + 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0085_entry, 85u, 67u, 0x0895853Cu>(ctx, &aot_mem) && ctx.pc == 0x0883EC00u) goto L_0883EC00;
    return;
L_0883EC00:
    ctx.set_gpr(2, ctx.gpr[16] + 0u);
    ctx.set_gpr(31, rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(12)));
    ctx.set_gpr(16, rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(8)));
    jump_target = ctx.gpr[31];
    ctx.set_gpr(29, ctx.gpr[29] + static_cast<std::uint32_t>(16));
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_0883EC14:
    ctx.set_gpr(4, 0u + 0u);
    (void)rt.invoke_chained_direct<&recomp_unit_0098_entry, 98u, 421u, 0x0898E544u>(ctx, &aot_mem); return;
L_0883EC1C:
    ctx.set_gpr(3, 0u + 0u);
    jump_target = ctx.gpr[31];
    rt.memory().aot_store8(ctx.gpr[4] + static_cast<std::uint32_t>(0), static_cast<std::uint8_t>(ctx.gpr[3]));
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_0883EC28:
    rt.memory().aot_store32(ctx.gpr[4] + static_cast<std::uint32_t>(0), 0u);
    jump_target = ctx.gpr[31];
    ctx.set_gpr(2, ctx.gpr[4] + 0u);
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_0883EC34:
    ctx.set_gpr(29, ctx.gpr[29] + static_cast<std::uint32_t>(-272));
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
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(64), ctx.gpr[5]);
    ctx.set_gpr(18, ctx.gpr[6] + 0u);
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(60), ctx.gpr[7]);
    ctx.set_gpr(17, ctx.gpr[8] + 0u);
    ctx.set_gpr(16, ctx.gpr[9] + 0u);
    ctx.set_gpr(31, 0x0883EC80u);
    ctx.set_gpr(4, ctx.gpr[29] + static_cast<std::uint32_t>(224));
    goto L_0883F334;
L_0883EC80:
    ctx.set_gpr(31, 0x0883EC88u);
    ctx.set_gpr(4, ctx.gpr[29] + static_cast<std::uint32_t>(232));
    goto L_0883F334;
L_0883EC88:
    ctx.set_gpr(31, 0x0883EC90u);
    ctx.set_gpr(4, ctx.gpr[29] + static_cast<std::uint32_t>(240));
    goto L_0883F334;
L_0883EC90:
    ctx.set_gpr(31, 0x0883EC98u);
    ctx.set_gpr(4, ctx.gpr[29] + static_cast<std::uint32_t>(248));
    goto L_0883F334;
L_0883EC98:
    ctx.set_gpr(31, 0x0883ECA0u);
    ctx.set_gpr(4, ctx.gpr[29] + static_cast<std::uint32_t>(256));
    goto L_0883F334;
L_0883ECA0:
    ctx.set_gpr(31, 0x0883ECA8u);
    ctx.set_gpr(4, ctx.gpr[29] + static_cast<std::uint32_t>(264));
    goto L_0883F334;
L_0883ECA8:
    ctx.set_gpr(31, 0x0883ECB0u);
    ctx.set_gpr(4, ctx.gpr[29] + static_cast<std::uint32_t>(196));
    if (rt.invoke_chained_direct<&recomp_unit_0108_entry, 108u, 623u, 0x089B798Cu>(ctx, &aot_mem) && ctx.pc == 0x0883ECB0u) goto L_0883ECB0;
    return;
L_0883ECB0:
    ctx.set_gpr(31, 0x0883ECB8u);
    ctx.set_gpr(4, ctx.gpr[29] + static_cast<std::uint32_t>(168));
    if (rt.invoke_chained_direct<&recomp_unit_0108_entry, 108u, 623u, 0x089B798Cu>(ctx, &aot_mem) && ctx.pc == 0x0883ECB8u) goto L_0883ECB8;
    return;
L_0883ECB8:
    ctx.set_gpr(31, 0x0883ECC0u);
    ctx.set_gpr(4, ctx.gpr[29] + static_cast<std::uint32_t>(140));
    if (rt.invoke_chained_direct<&recomp_unit_0108_entry, 108u, 623u, 0x089B798Cu>(ctx, &aot_mem) && ctx.pc == 0x0883ECC0u) goto L_0883ECC0;
    return;
L_0883ECC0:
    ctx.set_gpr(4, ctx.gpr[29] + static_cast<std::uint32_t>(196));
    ctx.set_gpr(5, 0u + 0u);
    ctx.set_gpr(31, 0x0883ECD0u);
    ctx.set_gpr(6, 0u + 0u);
    goto L_0883EB18;
L_0883ECD0:
    ctx.set_gpr(2, 0u + static_cast<std::uint32_t>(300));
    ctx.set_gpr(4, ctx.gpr[21] + static_cast<std::uint32_t>(8292));
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(208), ctx.gpr[2]);
    ctx.set_gpr(4, ctx.gpr[4] + static_cast<std::uint32_t>(32760));
    ctx.set_gpr(31, 0x0883ECE8u);
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(204), 0u);
    goto L_0883EB2C;
L_0883ECE8:
    ctx.set_gpr(25, rt.memory().aot_load32(ctx.gpr[2] + static_cast<std::uint32_t>(0)));
    ctx.set_gpr(4, ctx.gpr[2] + 0u);
    ctx.set_gpr(5, ctx.gpr[29] + static_cast<std::uint32_t>(196));
    ctx.set_gpr(25, rt.memory().aot_load32(ctx.gpr[25] + static_cast<std::uint32_t>(104)));
    jump_target = ctx.gpr[25];
    ctx.set_gpr(31, 0x0883ED00u);
    ctx.set_gpr(6, 0u + static_cast<std::uint32_t>(1));
    ctx.pc = jump_target;
    if (rt.invoke_chained_call(ctx, &aot_mem) && ctx.pc == 0x0883ED00u) goto L_0883ED00;
    return;
L_0883ED00:
    ctx.set_gpr(4, ctx.gpr[29] + static_cast<std::uint32_t>(140));
    ctx.set_gpr(5, 0u + static_cast<std::uint32_t>(2));
    ctx.set_gpr(31, 0x0883ED10u);
    ctx.set_gpr(6, 0u + 0u);
    goto L_0883EB18;
L_0883ED10:
    ctx.set_gpr(2, 0u + static_cast<std::uint32_t>(300));
    ctx.set_gpr(4, ctx.gpr[21] + static_cast<std::uint32_t>(8292));
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(152), ctx.gpr[2]);
    ctx.set_gpr(4, ctx.gpr[4] + static_cast<std::uint32_t>(32760));
    ctx.set_gpr(31, 0x0883ED28u);
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(148), 0u);
    goto L_0883EB2C;
L_0883ED28:
    ctx.set_gpr(25, rt.memory().aot_load32(ctx.gpr[2] + static_cast<std::uint32_t>(0)));
    ctx.set_gpr(4, ctx.gpr[2] + 0u);
    ctx.set_gpr(5, ctx.gpr[29] + static_cast<std::uint32_t>(140));
    ctx.set_gpr(25, rt.memory().aot_load32(ctx.gpr[25] + static_cast<std::uint32_t>(104)));
    jump_target = ctx.gpr[25];
    ctx.set_gpr(31, 0x0883ED40u);
    ctx.set_gpr(6, 0u + static_cast<std::uint32_t>(1));
    ctx.pc = jump_target;
    if (rt.invoke_chained_call(ctx, &aot_mem) && ctx.pc == 0x0883ED40u) goto L_0883ED40;
    return;
L_0883ED40:
    ctx.set_gpr(4, ctx.gpr[29] + static_cast<std::uint32_t>(168));
    ctx.set_gpr(5, 0u + static_cast<std::uint32_t>(3));
    ctx.set_gpr(31, 0x0883ED50u);
    ctx.set_gpr(6, 0u + 0u);
    goto L_0883EB18;
L_0883ED50:
    ctx.set_gpr(2, 0u + static_cast<std::uint32_t>(300));
    ctx.set_gpr(4, ctx.gpr[21] + static_cast<std::uint32_t>(8292));
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(180), ctx.gpr[2]);
    ctx.set_gpr(4, ctx.gpr[4] + static_cast<std::uint32_t>(32760));
    ctx.set_gpr(31, 0x0883ED68u);
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(176), 0u);
    goto L_0883EB2C;
L_0883ED68:
    ctx.set_gpr(25, rt.memory().aot_load32(ctx.gpr[2] + static_cast<std::uint32_t>(0)));
    ctx.set_gpr(4, ctx.gpr[2] + 0u);
    ctx.set_gpr(5, ctx.gpr[29] + static_cast<std::uint32_t>(168));
    ctx.set_gpr(25, rt.memory().aot_load32(ctx.gpr[25] + static_cast<std::uint32_t>(104)));
    jump_target = ctx.gpr[25];
    ctx.set_gpr(31, 0x0883ED80u);
    ctx.set_gpr(6, 0u + static_cast<std::uint32_t>(1));
    ctx.pc = jump_target;
    if (rt.invoke_chained_call(ctx, &aot_mem) && ctx.pc == 0x0883ED80u) goto L_0883ED80;
    return;
L_0883ED80:
    ctx.set_gpr(2, rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(184)));
    ctx.fpr[0] = std::bit_cast<float>(ctx.gpr[18]);
    ctx.fpr[2] = static_cast<float>(static_cast<std::int32_t>(ctx.fpr_bits(0)));
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(52), ctx.gpr[2]);
    ctx.set_gpr(2, 2233u << 16u);
    ctx.fpr[1] = std::bit_cast<float>(rt.memory().aot_load32(ctx.gpr[2] + static_cast<std::uint32_t>(9020)));
    ctx.set_gpr(30, rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(212)));
    { const float fs = ctx.fpr[2]; const float ft = ctx.fpr[1]; if ((std::isinf(fs) && ft == 0.0f) || (std::isinf(ft) && fs == 0.0f)) ctx.set_fpr_bits(1, 0x7FC00000u); else ctx.fpr[1] = fs * ft; }
    ctx.set_gpr(2, 20224u << 16u);
    ctx.fpr[0] = std::bit_cast<float>(ctx.gpr[2]);
    ctx.set_fpu_condition((ctx.fpr[0] <= ctx.fpr[1]));
    // nop
    { const bool branch_taken = ctx.fpu_condition();
    ctx.set_gpr(20, 0u + 0u);
      if (branch_taken) {
          goto L_0883EDC4;
      }
      goto L_0883EDB8;
    }
L_0883EDB8:
    ctx.set_fpr_bits(0, ctx.fpu_float_to_word(ctx.fpr[1], 1u));
    { const bool branch_taken = 0u == 0u;
    ctx.set_gpr(4, std::bit_cast<std::uint32_t>(ctx.fpr[0]));
      if (branch_taken) {
          goto L_0883EDD8;
      }
      goto L_0883EDC4;
    }
L_0883EDC4:
    ctx.fpr[0] = ctx.fpr[1] - ctx.fpr[0];
    ctx.set_gpr(2, 0u + static_cast<std::uint32_t>(-32768));
    ctx.set_fpr_bits(0, ctx.fpu_float_to_word(ctx.fpr[0], 1u));
    ctx.set_gpr(3, std::bit_cast<std::uint32_t>(ctx.fpr[0]));
    ctx.set_gpr(4, ctx.gpr[3] | ctx.gpr[2]);
    goto L_0883EDD8;
L_0883EDD8:
    { const std::int64_t product = static_cast<std::int64_t>(static_cast<std::int32_t>(ctx.gpr[17])) * static_cast<std::int64_t>(static_cast<std::int32_t>(ctx.gpr[16])); ctx.lo = static_cast<std::uint32_t>(product); ctx.hi = static_cast<std::uint32_t>(static_cast<std::uint64_t>(product) >> 32u); }
    ctx.set_gpr(2, 1u << 16u);
    ctx.set_gpr(2, ctx.gpr[21] + ctx.gpr[2]);
    rt.memory().aot_store32(ctx.gpr[2] + static_cast<std::uint32_t>(-24176), ctx.gpr[16]);
    ctx.set_gpr(2, rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(60)));
    ctx.set_gpr(3, ctx.lo);
    ctx.set_gpr(18, ctx.gpr[4] + ctx.gpr[3]);
    { const bool branch_taken = static_cast<std::int32_t>(ctx.gpr[2]) <= 0;
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(56), 0u);
      if (branch_taken) {
          goto L_0883F294;
      }
      goto L_0883EDFC;
    }
L_0883EDFC:
    ctx.set_gpr(17, 0u + 0u);
    goto L_0883EE00;
L_0883EE00:
    ctx.set_gpr(2, rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(64)));
    ctx.set_gpr(19, ctx.gpr[2] + ctx.gpr[20]);
    ctx.set_gpr(4, rt.memory().aot_load8(ctx.gpr[19] + static_cast<std::uint32_t>(0)));
    ctx.set_gpr(5, rt.memory().aot_load8(ctx.gpr[19] + static_cast<std::uint32_t>(1)));
    ctx.set_gpr(31, 0x0883EE18u);
    ctx.set_gpr(16, ctx.gpr[19] + static_cast<std::uint32_t>(1));
    goto L_0883DE3C;
L_0883EE18:
    if (ctx.gpr[2] == 0u) {
    ctx.set_gpr(5, rt.memory().aot_load8(ctx.gpr[19] + static_cast<std::uint32_t>(0)));
        goto L_0883EE48;
    }
    goto L_0883EE20;
L_0883EE20:
    ctx.set_gpr(2, 2233u << 16u);
    ctx.set_gpr(4, rt.memory().aot_load8(ctx.gpr[19] + static_cast<std::uint32_t>(0)));
    ctx.set_gpr(22, rt.memory().aot_load32(ctx.gpr[2] + static_cast<std::uint32_t>(8996)));
    ctx.set_gpr(3, rt.memory().aot_load8(ctx.gpr[16] + static_cast<std::uint32_t>(0)));
    ctx.set_gpr(2, ctx.gpr[4] << 8u);
    ctx.set_gpr(23, ctx.gpr[2] + ctx.gpr[3]);
    ctx.set_gpr(2, 2233u << 16u);
    ctx.set_gpr(19, rt.memory().aot_load32(ctx.gpr[2] + static_cast<std::uint32_t>(9000)));
    { const bool branch_taken = 0u == 0u;
    ctx.set_gpr(20, ctx.gpr[20] + static_cast<std::uint32_t>(2));
      if (branch_taken) {
          goto L_0883EEC4;
      }
      goto L_0883EE48;
    }
L_0883EE48:
    ctx.set_gpr(6, rt.memory().aot_load8(ctx.gpr[16] + static_cast<std::uint32_t>(0)));
    ctx.set_gpr(31, 0x0883EE54u);
    ctx.set_gpr(4, ctx.gpr[21] + 0u);
    goto L_0883DA30;
L_0883EE54:
    if (ctx.gpr[2] == 0u) {
    ctx.set_gpr(4, rt.memory().aot_load8(ctx.gpr[19] + static_cast<std::uint32_t>(0)));
        goto L_0883EE78;
    }
    goto L_0883EE5C;
L_0883EE5C:
    ctx.set_gpr(2, 2233u << 16u);
    ctx.set_gpr(22, rt.memory().aot_load32(ctx.gpr[2] + static_cast<std::uint32_t>(9004)));
    ctx.set_gpr(23, rt.memory().aot_load8(ctx.gpr[19] + static_cast<std::uint32_t>(0)));
    ctx.set_gpr(2, 2233u << 16u);
    ctx.set_gpr(19, rt.memory().aot_load32(ctx.gpr[2] + static_cast<std::uint32_t>(9008)));
    { const bool branch_taken = 0u == 0u;
    ctx.set_gpr(20, ctx.gpr[20] + static_cast<std::uint32_t>(1));
      if (branch_taken) {
          goto L_0883EEC4;
      }
      goto L_0883EE78;
    }
L_0883EE78:
    ctx.set_gpr(31, 0x0883EE80u);
    // nop
    goto L_0883DB70;
L_0883EE80:
    if (ctx.gpr[2] == 0u) {
    ctx.set_gpr(2, 2233u << 16u);
        goto L_0883EEA4;
    }
    goto L_0883EE88;
L_0883EE88:
    ctx.set_gpr(2, 2233u << 16u);
    ctx.set_gpr(22, rt.memory().aot_load32(ctx.gpr[2] + static_cast<std::uint32_t>(9004)));
    ctx.set_gpr(23, rt.memory().aot_load8(ctx.gpr[19] + static_cast<std::uint32_t>(0)));
    ctx.set_gpr(2, 2233u << 16u);
    ctx.set_gpr(19, rt.memory().aot_load32(ctx.gpr[2] + static_cast<std::uint32_t>(9008)));
    { const bool branch_taken = 0u == 0u;
    ctx.set_gpr(20, ctx.gpr[20] + static_cast<std::uint32_t>(1));
      if (branch_taken) {
          goto L_0883EEC4;
      }
      goto L_0883EEA4;
    }
L_0883EEA4:
    ctx.set_gpr(4, rt.memory().aot_load8(ctx.gpr[19] + static_cast<std::uint32_t>(0)));
    ctx.set_gpr(22, rt.memory().aot_load32(ctx.gpr[2] + static_cast<std::uint32_t>(8996)));
    ctx.set_gpr(3, rt.memory().aot_load8(ctx.gpr[16] + static_cast<std::uint32_t>(0)));
    ctx.set_gpr(20, ctx.gpr[20] + static_cast<std::uint32_t>(2));
    ctx.set_gpr(2, ctx.gpr[4] << 8u);
    ctx.set_gpr(23, ctx.gpr[2] + ctx.gpr[3]);
    ctx.set_gpr(2, 2233u << 16u);
    ctx.set_gpr(19, rt.memory().aot_load32(ctx.gpr[2] + static_cast<std::uint32_t>(9000)));
    goto L_0883EEC4;
L_0883EEC4:
    if (static_cast<std::int32_t>(ctx.gpr[18]) < 0) {
    ctx.set_gpr(3, ctx.gpr[18] >> 1u);
        goto L_0883EED8;
    }
    goto L_0883EECC;
L_0883EECC:
    ctx.fpr[0] = std::bit_cast<float>(ctx.gpr[18]);
    { const bool branch_taken = 0u == 0u;
    ctx.fpr[12] = static_cast<float>(static_cast<std::int32_t>(ctx.fpr_bits(0)));
      if (branch_taken) {
          goto L_0883EEEC;
      }
      goto L_0883EED8;
    }
L_0883EED8:
    ctx.set_gpr(2, ctx.gpr[18] & 1u);
    ctx.set_gpr(3, ctx.gpr[3] | ctx.gpr[2]);
    ctx.fpr[0] = std::bit_cast<float>(ctx.gpr[3]);
    ctx.fpr[12] = static_cast<float>(static_cast<std::int32_t>(ctx.fpr_bits(0)));
    ctx.fpr[12] = ctx.fpr[12] + ctx.fpr[12];
    goto L_0883EEEC;
L_0883EEEC:
    ctx.fpr[13] = std::bit_cast<float>(0u);
    ctx.set_gpr(4, ctx.gpr[29] + static_cast<std::uint32_t>(128));
    ctx.set_gpr(31, 0x0883EEFCu);
    ctx.set_fpr_bits(14, ctx.fpr_bits(13));
    goto L_0883EAC8;
L_0883EEFC:
    ctx.set_gpr(5, ctx.gpr[2] + 0u);
    ctx.set_gpr(31, 0x0883EF08u);
    ctx.set_gpr(4, ctx.gpr[30] + 0u);
    goto L_0883EAA8;
L_0883EF08:
    ctx.set_gpr(2, rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(216)));
    { const bool branch_taken = static_cast<std::int32_t>(ctx.gpr[18]) < 0;
    ctx.set_gpr(30, ctx.gpr[30] + ctx.gpr[2]);
      if (branch_taken) {
          goto L_0883EF20;
      }
      goto L_0883EF14;
    }
L_0883EF14:
    ctx.fpr[0] = std::bit_cast<float>(ctx.gpr[18]);
    { const bool branch_taken = 0u == 0u;
    ctx.fpr[12] = static_cast<float>(static_cast<std::int32_t>(ctx.fpr_bits(0)));
      if (branch_taken) {
          goto L_0883EF38;
      }
      goto L_0883EF20;
    }
L_0883EF20:
    ctx.set_gpr(3, ctx.gpr[18] >> 1u);
    ctx.set_gpr(2, ctx.gpr[18] & 1u);
    ctx.set_gpr(3, ctx.gpr[3] | ctx.gpr[2]);
    ctx.fpr[0] = std::bit_cast<float>(ctx.gpr[3]);
    ctx.fpr[12] = static_cast<float>(static_cast<std::int32_t>(ctx.fpr_bits(0)));
    ctx.fpr[12] = ctx.fpr[12] + ctx.fpr[12];
    goto L_0883EF38;
L_0883EF38:
    if (static_cast<std::int32_t>(ctx.gpr[19]) < 0) {
    ctx.set_gpr(3, ctx.gpr[19] >> 1u);
        goto L_0883EF4C;
    }
    goto L_0883EF40;
L_0883EF40:
    ctx.fpr[0] = std::bit_cast<float>(ctx.gpr[19]);
    { const bool branch_taken = 0u == 0u;
    ctx.fpr[13] = static_cast<float>(static_cast<std::int32_t>(ctx.fpr_bits(0)));
      if (branch_taken) {
          goto L_0883EF60;
      }
      goto L_0883EF4C;
    }
L_0883EF4C:
    ctx.set_gpr(2, ctx.gpr[19] & 1u);
    ctx.set_gpr(3, ctx.gpr[3] | ctx.gpr[2]);
    ctx.fpr[0] = std::bit_cast<float>(ctx.gpr[3]);
    ctx.fpr[13] = static_cast<float>(static_cast<std::int32_t>(ctx.fpr_bits(0)));
    ctx.fpr[13] = ctx.fpr[13] + ctx.fpr[13];
    goto L_0883EF60;
L_0883EF60:
    ctx.fpr[14] = std::bit_cast<float>(0u);
    ctx.set_gpr(31, 0x0883EF6Cu);
    ctx.set_gpr(4, ctx.gpr[29] + static_cast<std::uint32_t>(116));
    goto L_0883EAC8;
L_0883EF6C:
    ctx.set_gpr(5, ctx.gpr[2] + 0u);
    ctx.set_gpr(31, 0x0883EF78u);
    ctx.set_gpr(4, ctx.gpr[30] + 0u);
    goto L_0883EAA8;
L_0883EF78:
    ctx.set_gpr(2, rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(216)));
    ctx.set_gpr(16, ctx.gpr[18] + ctx.gpr[22]);
    { const bool branch_taken = static_cast<std::int32_t>(ctx.gpr[16]) < 0;
    ctx.set_gpr(30, ctx.gpr[30] + ctx.gpr[2]);
      if (branch_taken) {
          goto L_0883EF94;
      }
      goto L_0883EF88;
    }
L_0883EF88:
    ctx.fpr[0] = std::bit_cast<float>(ctx.gpr[16]);
    { const bool branch_taken = 0u == 0u;
    ctx.fpr[12] = static_cast<float>(static_cast<std::int32_t>(ctx.fpr_bits(0)));
      if (branch_taken) {
          goto L_0883EFAC;
      }
      goto L_0883EF94;
    }
L_0883EF94:
    ctx.set_gpr(3, ctx.gpr[16] >> 1u);
    ctx.set_gpr(2, ctx.gpr[16] & 1u);
    ctx.set_gpr(3, ctx.gpr[3] | ctx.gpr[2]);
    ctx.fpr[0] = std::bit_cast<float>(ctx.gpr[3]);
    ctx.fpr[12] = static_cast<float>(static_cast<std::int32_t>(ctx.fpr_bits(0)));
    ctx.fpr[12] = ctx.fpr[12] + ctx.fpr[12];
    goto L_0883EFAC;
L_0883EFAC:
    ctx.fpr[13] = std::bit_cast<float>(0u);
    ctx.set_gpr(4, ctx.gpr[29] + static_cast<std::uint32_t>(104));
    ctx.set_gpr(31, 0x0883EFBCu);
    ctx.set_fpr_bits(14, ctx.fpr_bits(13));
    goto L_0883EAC8;
L_0883EFBC:
    ctx.set_gpr(5, ctx.gpr[2] + 0u);
    ctx.set_gpr(31, 0x0883EFC8u);
    ctx.set_gpr(4, ctx.gpr[30] + 0u);
    goto L_0883EAA8;
L_0883EFC8:
    ctx.set_gpr(2, rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(216)));
    { const bool branch_taken = static_cast<std::int32_t>(ctx.gpr[16]) < 0;
    ctx.set_gpr(30, ctx.gpr[30] + ctx.gpr[2]);
      if (branch_taken) {
          goto L_0883EFE0;
      }
      goto L_0883EFD4;
    }
L_0883EFD4:
    ctx.fpr[0] = std::bit_cast<float>(ctx.gpr[16]);
    { const bool branch_taken = 0u == 0u;
    ctx.fpr[12] = static_cast<float>(static_cast<std::int32_t>(ctx.fpr_bits(0)));
      if (branch_taken) {
          goto L_0883EFF8;
      }
      goto L_0883EFE0;
    }
L_0883EFE0:
    ctx.set_gpr(3, ctx.gpr[16] >> 1u);
    ctx.set_gpr(2, ctx.gpr[16] & 1u);
    ctx.set_gpr(3, ctx.gpr[3] | ctx.gpr[2]);
    ctx.fpr[0] = std::bit_cast<float>(ctx.gpr[3]);
    ctx.fpr[12] = static_cast<float>(static_cast<std::int32_t>(ctx.fpr_bits(0)));
    ctx.fpr[12] = ctx.fpr[12] + ctx.fpr[12];
    goto L_0883EFF8;
L_0883EFF8:
    ctx.fpr[13] = std::bit_cast<float>(0u);
    ctx.set_gpr(4, ctx.gpr[29] + static_cast<std::uint32_t>(92));
    ctx.set_gpr(31, 0x0883F008u);
    ctx.set_fpr_bits(14, ctx.fpr_bits(13));
    goto L_0883EAC8;
L_0883F008:
    ctx.set_gpr(5, ctx.gpr[2] + 0u);
    ctx.set_gpr(31, 0x0883F014u);
    ctx.set_gpr(4, ctx.gpr[30] + 0u);
    goto L_0883EAA8;
L_0883F014:
    ctx.set_gpr(2, rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(216)));
    { const bool branch_taken = static_cast<std::int32_t>(ctx.gpr[18]) < 0;
    ctx.set_gpr(30, ctx.gpr[30] + ctx.gpr[2]);
      if (branch_taken) {
          goto L_0883F02C;
      }
      goto L_0883F020;
    }
L_0883F020:
    ctx.fpr[0] = std::bit_cast<float>(ctx.gpr[18]);
    { const bool branch_taken = 0u == 0u;
    ctx.fpr[12] = static_cast<float>(static_cast<std::int32_t>(ctx.fpr_bits(0)));
      if (branch_taken) {
          goto L_0883F044;
      }
      goto L_0883F02C;
    }
L_0883F02C:
    ctx.set_gpr(3, ctx.gpr[18] >> 1u);
    ctx.set_gpr(2, ctx.gpr[18] & 1u);
    ctx.set_gpr(3, ctx.gpr[3] | ctx.gpr[2]);
    ctx.fpr[0] = std::bit_cast<float>(ctx.gpr[3]);
    ctx.fpr[12] = static_cast<float>(static_cast<std::int32_t>(ctx.fpr_bits(0)));
    ctx.fpr[12] = ctx.fpr[12] + ctx.fpr[12];
    goto L_0883F044;
L_0883F044:
    if (static_cast<std::int32_t>(ctx.gpr[19]) < 0) {
    ctx.set_gpr(3, ctx.gpr[19] >> 1u);
        goto L_0883F058;
    }
    goto L_0883F04C;
L_0883F04C:
    ctx.fpr[0] = std::bit_cast<float>(ctx.gpr[19]);
    { const bool branch_taken = 0u == 0u;
    ctx.fpr[13] = static_cast<float>(static_cast<std::int32_t>(ctx.fpr_bits(0)));
      if (branch_taken) {
          goto L_0883F06C;
      }
      goto L_0883F058;
    }
L_0883F058:
    ctx.set_gpr(2, ctx.gpr[19] & 1u);
    ctx.set_gpr(3, ctx.gpr[3] | ctx.gpr[2]);
    ctx.fpr[0] = std::bit_cast<float>(ctx.gpr[3]);
    ctx.fpr[13] = static_cast<float>(static_cast<std::int32_t>(ctx.fpr_bits(0)));
    ctx.fpr[13] = ctx.fpr[13] + ctx.fpr[13];
    goto L_0883F06C;
L_0883F06C:
    ctx.fpr[14] = std::bit_cast<float>(0u);
    ctx.set_gpr(31, 0x0883F078u);
    ctx.set_gpr(4, ctx.gpr[29] + static_cast<std::uint32_t>(80));
    goto L_0883EAC8;
L_0883F078:
    ctx.set_gpr(5, ctx.gpr[2] + 0u);
    ctx.set_gpr(31, 0x0883F084u);
    ctx.set_gpr(4, ctx.gpr[30] + 0u);
    goto L_0883EAA8;
L_0883F084:
    ctx.set_gpr(2, rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(216)));
    { const bool branch_taken = static_cast<std::int32_t>(ctx.gpr[16]) < 0;
    ctx.set_gpr(30, ctx.gpr[30] + ctx.gpr[2]);
      if (branch_taken) {
          goto L_0883F09C;
      }
      goto L_0883F090;
    }
L_0883F090:
    ctx.fpr[0] = std::bit_cast<float>(ctx.gpr[16]);
    { const bool branch_taken = 0u == 0u;
    ctx.fpr[12] = static_cast<float>(static_cast<std::int32_t>(ctx.fpr_bits(0)));
      if (branch_taken) {
          goto L_0883F0B4;
      }
      goto L_0883F09C;
    }
L_0883F09C:
    ctx.set_gpr(3, ctx.gpr[16] >> 1u);
    ctx.set_gpr(2, ctx.gpr[16] & 1u);
    ctx.set_gpr(3, ctx.gpr[3] | ctx.gpr[2]);
    ctx.fpr[0] = std::bit_cast<float>(ctx.gpr[3]);
    ctx.fpr[12] = static_cast<float>(static_cast<std::int32_t>(ctx.fpr_bits(0)));
    ctx.fpr[12] = ctx.fpr[12] + ctx.fpr[12];
    goto L_0883F0B4;
L_0883F0B4:
    if (static_cast<std::int32_t>(ctx.gpr[19]) < 0) {
    ctx.set_gpr(3, ctx.gpr[19] >> 1u);
        goto L_0883F0C8;
    }
    goto L_0883F0BC;
L_0883F0BC:
    ctx.fpr[0] = std::bit_cast<float>(ctx.gpr[19]);
    { const bool branch_taken = 0u == 0u;
    ctx.fpr[13] = static_cast<float>(static_cast<std::int32_t>(ctx.fpr_bits(0)));
      if (branch_taken) {
          goto L_0883F0DC;
      }
      goto L_0883F0C8;
    }
L_0883F0C8:
    ctx.set_gpr(2, ctx.gpr[19] & 1u);
    ctx.set_gpr(3, ctx.gpr[3] | ctx.gpr[2]);
    ctx.fpr[0] = std::bit_cast<float>(ctx.gpr[3]);
    ctx.fpr[13] = static_cast<float>(static_cast<std::int32_t>(ctx.fpr_bits(0)));
    ctx.fpr[13] = ctx.fpr[13] + ctx.fpr[13];
    goto L_0883F0DC;
L_0883F0DC:
    ctx.fpr[14] = std::bit_cast<float>(0u);
    ctx.set_gpr(31, 0x0883F0E8u);
    ctx.set_gpr(4, ctx.gpr[29] + static_cast<std::uint32_t>(68));
    goto L_0883EAC8;
L_0883F0E8:
    ctx.set_gpr(5, ctx.gpr[2] + 0u);
    ctx.set_gpr(31, 0x0883F0F4u);
    ctx.set_gpr(4, ctx.gpr[30] + 0u);
    goto L_0883EAA8;
L_0883F0F4:
    ctx.set_gpr(4, rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(216)));
    ctx.set_gpr(2, 1u << 16u);
    ctx.set_gpr(2, ctx.gpr[21] + ctx.gpr[2]);
    ctx.set_gpr(30, ctx.gpr[30] + ctx.gpr[4]);
    ctx.set_gpr(4, ctx.gpr[21] + static_cast<std::uint32_t>(8584));
    ctx.set_gpr(2, rt.memory().aot_load32(ctx.gpr[2] + static_cast<std::uint32_t>(-24176)));
    ctx.set_gpr(3, ctx.gpr[18] + ctx.gpr[22]);
    ctx.set_gpr(4, ctx.gpr[4] + static_cast<std::uint32_t>(32760));
    ctx.set_gpr(5, 0u + static_cast<std::uint32_t>(1));
    ctx.set_gpr(31, 0x0883F120u);
    ctx.set_gpr(18, ctx.gpr[3] + ctx.gpr[2]);
    if (rt.invoke_chained_direct<&recomp_unit_0127_entry, 127u, 283u, 0x08A03440u>(ctx, &aot_mem) && ctx.pc == 0x0883F120u) goto L_0883F120;
    return;
L_0883F120:
    ctx.set_gpr(16, ctx.gpr[2] + 0u);
    ctx.set_gpr(4, ctx.gpr[29] + static_cast<std::uint32_t>(140));
    ctx.set_gpr(31, 0x0883F130u);
    ctx.set_gpr(5, ctx.gpr[17] + 0u);
    goto L_0883EA90;
L_0883F130:
    ctx.set_gpr(4, ctx.gpr[21] + static_cast<std::uint32_t>(8584));
    rt.memory().aot_store32(ctx.gpr[2] + static_cast<std::uint32_t>(0), ctx.gpr[16]);
    ctx.set_gpr(4, ctx.gpr[4] + static_cast<std::uint32_t>(32760));
    ctx.set_gpr(31, 0x0883F144u);
    ctx.set_gpr(5, 0u + static_cast<std::uint32_t>(1));
    if (rt.invoke_chained_direct<&recomp_unit_0127_entry, 127u, 283u, 0x08A03440u>(ctx, &aot_mem) && ctx.pc == 0x0883F144u) goto L_0883F144;
    return;
L_0883F144:
    ctx.set_gpr(16, ctx.gpr[2] + 0u);
    ctx.set_gpr(5, ctx.gpr[17] + static_cast<std::uint32_t>(1));
    ctx.set_gpr(31, 0x0883F154u);
    ctx.set_gpr(4, ctx.gpr[29] + static_cast<std::uint32_t>(140));
    goto L_0883EA90;
L_0883F154:
    ctx.set_gpr(4, ctx.gpr[21] + static_cast<std::uint32_t>(8584));
    rt.memory().aot_store32(ctx.gpr[2] + static_cast<std::uint32_t>(0), ctx.gpr[16]);
    ctx.set_gpr(4, ctx.gpr[4] + static_cast<std::uint32_t>(32760));
    ctx.set_gpr(31, 0x0883F168u);
    ctx.set_gpr(5, 0u + static_cast<std::uint32_t>(1));
    if (rt.invoke_chained_direct<&recomp_unit_0127_entry, 127u, 283u, 0x08A03440u>(ctx, &aot_mem) && ctx.pc == 0x0883F168u) goto L_0883F168;
    return;
L_0883F168:
    ctx.set_gpr(16, ctx.gpr[2] + 0u);
    ctx.set_gpr(5, ctx.gpr[17] + static_cast<std::uint32_t>(2));
    ctx.set_gpr(31, 0x0883F178u);
    ctx.set_gpr(4, ctx.gpr[29] + static_cast<std::uint32_t>(140));
    goto L_0883EA90;
L_0883F178:
    ctx.set_gpr(4, ctx.gpr[21] + static_cast<std::uint32_t>(8584));
    rt.memory().aot_store32(ctx.gpr[2] + static_cast<std::uint32_t>(0), ctx.gpr[16]);
    ctx.set_gpr(4, ctx.gpr[4] + static_cast<std::uint32_t>(32760));
    ctx.set_gpr(31, 0x0883F18Cu);
    ctx.set_gpr(5, 0u + static_cast<std::uint32_t>(1));
    if (rt.invoke_chained_direct<&recomp_unit_0127_entry, 127u, 283u, 0x08A03440u>(ctx, &aot_mem) && ctx.pc == 0x0883F18Cu) goto L_0883F18C;
    return;
L_0883F18C:
    ctx.set_gpr(16, ctx.gpr[2] + 0u);
    ctx.set_gpr(5, ctx.gpr[17] + static_cast<std::uint32_t>(3));
    ctx.set_gpr(31, 0x0883F19Cu);
    ctx.set_gpr(4, ctx.gpr[29] + static_cast<std::uint32_t>(140));
    goto L_0883EA90;
L_0883F19C:
    ctx.set_gpr(4, ctx.gpr[21] + static_cast<std::uint32_t>(8584));
    rt.memory().aot_store32(ctx.gpr[2] + static_cast<std::uint32_t>(0), ctx.gpr[16]);
    ctx.set_gpr(4, ctx.gpr[4] + static_cast<std::uint32_t>(32760));
    ctx.set_gpr(31, 0x0883F1B0u);
    ctx.set_gpr(5, 0u + static_cast<std::uint32_t>(1));
    if (rt.invoke_chained_direct<&recomp_unit_0127_entry, 127u, 283u, 0x08A03440u>(ctx, &aot_mem) && ctx.pc == 0x0883F1B0u) goto L_0883F1B0;
    return;
L_0883F1B0:
    ctx.set_gpr(16, ctx.gpr[2] + 0u);
    ctx.set_gpr(5, ctx.gpr[17] + static_cast<std::uint32_t>(4));
    ctx.set_gpr(31, 0x0883F1C0u);
    ctx.set_gpr(4, ctx.gpr[29] + static_cast<std::uint32_t>(140));
    goto L_0883EA90;
L_0883F1C0:
    ctx.set_gpr(4, ctx.gpr[21] + static_cast<std::uint32_t>(8584));
    rt.memory().aot_store32(ctx.gpr[2] + static_cast<std::uint32_t>(0), ctx.gpr[16]);
    ctx.set_gpr(4, ctx.gpr[4] + static_cast<std::uint32_t>(32760));
    ctx.set_gpr(31, 0x0883F1D4u);
    ctx.set_gpr(5, 0u + static_cast<std::uint32_t>(1));
    if (rt.invoke_chained_direct<&recomp_unit_0127_entry, 127u, 283u, 0x08A03440u>(ctx, &aot_mem) && ctx.pc == 0x0883F1D4u) goto L_0883F1D4;
    return;
L_0883F1D4:
    ctx.set_gpr(16, ctx.gpr[2] + 0u);
    ctx.set_gpr(5, ctx.gpr[17] + static_cast<std::uint32_t>(5));
    ctx.set_gpr(31, 0x0883F1E4u);
    ctx.set_gpr(4, ctx.gpr[29] + static_cast<std::uint32_t>(140));
    goto L_0883EA90;
L_0883F1E4:
    rt.memory().aot_store32(ctx.gpr[2] + static_cast<std::uint32_t>(0), ctx.gpr[16]);
    ctx.set_gpr(5, ctx.gpr[23] & 65535u);
    ctx.set_gpr(4, ctx.gpr[21] + 0u);
    ctx.set_gpr(31, 0x0883F1F8u);
    ctx.set_gpr(6, ctx.gpr[29] + static_cast<std::uint32_t>(224));
    goto L_0883F33C;
L_0883F1F8:
    ctx.set_gpr(4, rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(52)));
    ctx.set_gpr(31, 0x0883F204u);
    ctx.set_gpr(5, ctx.gpr[29] + static_cast<std::uint32_t>(224));
    goto L_0883E9D8;
L_0883F204:
    ctx.set_gpr(3, rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(188)));
    ctx.set_gpr(2, rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(52)));
    ctx.set_gpr(5, ctx.gpr[29] + static_cast<std::uint32_t>(232));
    ctx.set_gpr(16, ctx.gpr[2] + ctx.gpr[3]);
    ctx.set_gpr(31, 0x0883F21Cu);
    ctx.set_gpr(4, ctx.gpr[16] + 0u);
    goto L_0883E9D8;
L_0883F21C:
    ctx.set_gpr(2, rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(188)));
    ctx.set_gpr(5, ctx.gpr[29] + static_cast<std::uint32_t>(240));
    ctx.set_gpr(16, ctx.gpr[16] + ctx.gpr[2]);
    ctx.set_gpr(31, 0x0883F230u);
    ctx.set_gpr(4, ctx.gpr[16] + 0u);
    goto L_0883E9D8;
L_0883F230:
    ctx.set_gpr(2, rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(188)));
    ctx.set_gpr(5, ctx.gpr[29] + static_cast<std::uint32_t>(248));
    ctx.set_gpr(16, ctx.gpr[16] + ctx.gpr[2]);
    ctx.set_gpr(31, 0x0883F244u);
    ctx.set_gpr(4, ctx.gpr[16] + 0u);
    goto L_0883E9D8;
L_0883F244:
    ctx.set_gpr(2, rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(188)));
    ctx.set_gpr(5, ctx.gpr[29] + static_cast<std::uint32_t>(256));
    ctx.set_gpr(16, ctx.gpr[16] + ctx.gpr[2]);
    ctx.set_gpr(31, 0x0883F258u);
    ctx.set_gpr(4, ctx.gpr[16] + 0u);
    goto L_0883E9D8;
L_0883F258:
    ctx.set_gpr(2, rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(188)));
    ctx.set_gpr(5, ctx.gpr[29] + static_cast<std::uint32_t>(264));
    ctx.set_gpr(16, ctx.gpr[16] + ctx.gpr[2]);
    ctx.set_gpr(31, 0x0883F26Cu);
    ctx.set_gpr(4, ctx.gpr[16] + 0u);
    goto L_0883E9D8;
L_0883F26C:
    ctx.set_gpr(2, rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(56)));
    ctx.set_gpr(3, rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(188)));
    ctx.set_gpr(2, ctx.gpr[2] + static_cast<std::uint32_t>(1));
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(56), ctx.gpr[2]);
    ctx.set_gpr(2, ctx.gpr[16] + ctx.gpr[3]);
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(52), ctx.gpr[2]);
    ctx.set_gpr(2, rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(60)));
    ctx.set_gpr(1, static_cast<std::int32_t>(ctx.gpr[20]) < static_cast<std::int32_t>(ctx.gpr[2]) ? 1u : 0u);
    { const bool branch_taken = ctx.gpr[1] != 0u;
    ctx.set_gpr(17, ctx.gpr[17] + static_cast<std::uint32_t>(6));
      if (branch_taken) {
          goto L_0883EE00;
      }
      goto L_0883F294;
    }
L_0883F294:
    ctx.set_gpr(4, ctx.gpr[21] + static_cast<std::uint32_t>(8292));
    ctx.set_gpr(31, 0x0883F2A0u);
    ctx.set_gpr(4, ctx.gpr[4] + static_cast<std::uint32_t>(32760));
    goto L_0883EB2C;
L_0883F2A0:
    ctx.set_gpr(25, rt.memory().aot_load32(ctx.gpr[2] + static_cast<std::uint32_t>(0)));
    ctx.set_gpr(4, ctx.gpr[2] + 0u);
    ctx.set_gpr(5, ctx.gpr[29] + static_cast<std::uint32_t>(196));
    ctx.set_gpr(25, rt.memory().aot_load32(ctx.gpr[25] + static_cast<std::uint32_t>(108)));
    jump_target = ctx.gpr[25];
    ctx.set_gpr(31, 0x0883F2B8u);
    ctx.set_gpr(6, 0u + 0u);
    ctx.pc = jump_target;
    if (rt.invoke_chained_call(ctx, &aot_mem) && ctx.pc == 0x0883F2B8u) goto L_0883F2B8;
    return;
L_0883F2B8:
    ctx.set_gpr(4, ctx.gpr[21] + static_cast<std::uint32_t>(8292));
    ctx.set_gpr(31, 0x0883F2C4u);
    ctx.set_gpr(4, ctx.gpr[4] + static_cast<std::uint32_t>(32760));
    goto L_0883EB2C;
L_0883F2C4:
    ctx.set_gpr(25, rt.memory().aot_load32(ctx.gpr[2] + static_cast<std::uint32_t>(0)));
    ctx.set_gpr(4, ctx.gpr[2] + 0u);
    ctx.set_gpr(5, ctx.gpr[29] + static_cast<std::uint32_t>(168));
    ctx.set_gpr(25, rt.memory().aot_load32(ctx.gpr[25] + static_cast<std::uint32_t>(108)));
    jump_target = ctx.gpr[25];
    ctx.set_gpr(31, 0x0883F2DCu);
    ctx.set_gpr(6, 0u + 0u);
    ctx.pc = jump_target;
    if (rt.invoke_chained_call(ctx, &aot_mem) && ctx.pc == 0x0883F2DCu) goto L_0883F2DC;
    return;
L_0883F2DC:
    ctx.set_gpr(4, ctx.gpr[21] + static_cast<std::uint32_t>(8292));
    ctx.set_gpr(31, 0x0883F2E8u);
    ctx.set_gpr(4, ctx.gpr[4] + static_cast<std::uint32_t>(32760));
    goto L_0883EB2C;
L_0883F2E8:
    ctx.set_gpr(25, rt.memory().aot_load32(ctx.gpr[2] + static_cast<std::uint32_t>(0)));
    ctx.set_gpr(4, ctx.gpr[2] + 0u);
    ctx.set_gpr(5, ctx.gpr[29] + static_cast<std::uint32_t>(140));
    ctx.set_gpr(25, rt.memory().aot_load32(ctx.gpr[25] + static_cast<std::uint32_t>(108)));
    jump_target = ctx.gpr[25];
    ctx.set_gpr(31, 0x0883F300u);
    ctx.set_gpr(6, 0u + 0u);
    ctx.pc = jump_target;
    if (rt.invoke_chained_call(ctx, &aot_mem) && ctx.pc == 0x0883F300u) goto L_0883F300;
    return;
L_0883F300:
    ctx.set_gpr(2, rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(56)));
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
    ctx.set_gpr(29, ctx.gpr[29] + static_cast<std::uint32_t>(272));
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_0883F334:
    jump_target = ctx.gpr[31];
    ctx.set_gpr(2, ctx.gpr[4] + 0u);
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_0883F33C:
    ctx.set_gpr(29, ctx.gpr[29] + static_cast<std::uint32_t>(-48));
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(28), ctx.gpr[31]);
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(24), ctx.gpr[16]);
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(20), std::bit_cast<std::uint32_t>(ctx.fpr[23]));
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(16), std::bit_cast<std::uint32_t>(ctx.fpr[22]));
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(12), std::bit_cast<std::uint32_t>(ctx.fpr[21]));
    ctx.set_gpr(3, ctx.gpr[29] + static_cast<std::uint32_t>(44));
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(8), std::bit_cast<std::uint32_t>(ctx.fpr[20]));
    ctx.set_gpr(16, ctx.gpr[6] + 0u);
    { const bool branch_taken = ctx.gpr[3] == 0u;
    ctx.set_gpr(2, 0u + static_cast<std::uint32_t>(2));
      if (branch_taken) {
          goto L_0883F378;
      }
      goto L_0883F368;
    }
L_0883F368:
    rt.memory().aot_store8(ctx.gpr[3] + static_cast<std::uint32_t>(0), static_cast<std::uint8_t>(0u));
    ctx.set_gpr(2, ctx.gpr[2] + static_cast<std::uint32_t>(-1));
    { const bool branch_taken = ctx.gpr[2] != 0u;
    ctx.set_gpr(3, ctx.gpr[3] + static_cast<std::uint32_t>(1));
      if (branch_taken) {
          goto L_0883F368;
      }
      goto L_0883F378;
    }
L_0883F378:
    ctx.set_gpr(6, rt.memory().aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(0)));
    { const bool branch_taken = static_cast<std::int32_t>(ctx.gpr[6]) <= 0;
    ctx.set_gpr(8, 0u + 0u);
      if (branch_taken) {
          goto L_0883F3A8;
      }
      goto L_0883F384;
    }
L_0883F384:
    ctx.set_gpr(7, ctx.gpr[4] + 0u);
    ctx.set_gpr(3, ctx.gpr[5] & 65535u);
    goto L_0883F38C;
L_0883F38C:
    ctx.set_gpr(2, rt.memory().aot_load16(ctx.gpr[7] + static_cast<std::uint32_t>(24648)));
    if (ctx.gpr[2] == ctx.gpr[3]) {
    ctx.set_gpr(3, ctx.gpr[5] & 65535u);
        goto L_0883F3AC;
    }
    goto L_0883F398;
L_0883F398:
    ctx.set_gpr(8, ctx.gpr[8] + static_cast<std::uint32_t>(1));
    ctx.set_gpr(2, static_cast<std::int32_t>(ctx.gpr[8]) < static_cast<std::int32_t>(ctx.gpr[6]) ? 1u : 0u);
    { const bool branch_taken = ctx.gpr[2] != 0u;
    ctx.set_gpr(7, ctx.gpr[7] + static_cast<std::uint32_t>(2));
      if (branch_taken) {
          goto L_0883F38C;
      }
      goto L_0883F3A8;
    }
L_0883F3A8:
    ctx.set_gpr(3, ctx.gpr[5] & 65535u);
    goto L_0883F3AC;
L_0883F3AC:
    ctx.set_gpr(5, 2225u << 16u);
    ctx.set_gpr(6, 0u + 0u);
    ctx.set_gpr(5, ctx.gpr[5] + static_cast<std::uint32_t>(8172));
    goto L_0883F3B8;
L_0883F3B8:
    ctx.set_gpr(2, static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int16_t>(rt.memory().aot_load16(ctx.gpr[5] + static_cast<std::uint32_t>(0))))));
    if (ctx.gpr[3] != ctx.gpr[2]) {
    ctx.set_gpr(6, ctx.gpr[6] + static_cast<std::uint32_t>(1));
        goto L_0883F508;
    }
    goto L_0883F3C4;
L_0883F3C4:
    ctx.fpr[0] = std::bit_cast<float>(ctx.gpr[6]);
    ctx.fpr[2] = static_cast<float>(static_cast<std::int32_t>(ctx.fpr_bits(0)));
    ctx.set_gpr(2, 2233u << 16u);
    ctx.set_gpr(5, 16704u << 16u);
    ctx.set_gpr(3, 17408u << 16u);
    ctx.set_gpr(4, ctx.gpr[16] + 0u);
    ctx.fpr[0] = std::bit_cast<float>(rt.memory().aot_load32(ctx.gpr[2] + static_cast<std::uint32_t>(9012)));
    { const float fs = ctx.fpr[2]; const float ft = ctx.fpr[0]; if ((std::isinf(fs) && ft == 0.0f) || (std::isinf(ft) && fs == 0.0f)) ctx.set_fpr_bits(23, 0x7FC00000u); else ctx.fpr[23] = fs * ft; }
    ctx.set_gpr(2, 2233u << 16u);
    ctx.fpr[1] = std::bit_cast<float>(rt.memory().aot_load32(ctx.gpr[2] + static_cast<std::uint32_t>(9016)));
    ctx.fpr[0] = std::bit_cast<float>(ctx.gpr[5]);
    { const float fs = ctx.fpr[0]; const float ft = ctx.fpr[1]; if ((std::isinf(fs) && ft == 0.0f) || (std::isinf(ft) && fs == 0.0f)) ctx.set_fpr_bits(0, 0x7FC00000u); else ctx.fpr[0] = fs * ft; }
    ctx.set_gpr(2, 16256u << 16u);
    ctx.fpr[22] = ctx.fpr[0] + ctx.fpr[1];
    ctx.fpr[2] = std::bit_cast<float>(ctx.gpr[3]);
    ctx.fpr[1] = ctx.fpr[22] / ctx.fpr[2];
    ctx.fpr[21] = ctx.fpr[23] / ctx.fpr[2];
    ctx.fpr[0] = std::bit_cast<float>(ctx.gpr[2]);
    ctx.fpr[20] = ctx.fpr[0] - ctx.fpr[1];
    ctx.set_fpr_bits(13, ctx.fpr_bits(20));
    ctx.set_gpr(31, 0x0883F41Cu);
    ctx.set_fpr_bits(12, ctx.fpr_bits(21));
    goto L_0883EA18;
L_0883F41C:
    ctx.set_gpr(2, 2233u << 16u);
    ctx.fpr[1] = std::bit_cast<float>(rt.memory().aot_load32(ctx.gpr[2] + static_cast<std::uint32_t>(9016)));
    ctx.set_gpr(4, ctx.gpr[16] + static_cast<std::uint32_t>(8));
    ctx.set_fpr_bits(12, ctx.fpr_bits(21));
    ctx.fpr[1] = ctx.fpr[22] + ctx.fpr[1];
    ctx.set_gpr(2, 17408u << 16u);
    ctx.fpr[0] = std::bit_cast<float>(ctx.gpr[2]);
    ctx.fpr[1] = ctx.fpr[1] / ctx.fpr[0];
    ctx.set_gpr(2, 16256u << 16u);
    ctx.fpr[0] = std::bit_cast<float>(ctx.gpr[2]);
    ctx.set_gpr(31, 0x0883F44Cu);
    ctx.fpr[13] = ctx.fpr[0] - ctx.fpr[1];
    goto L_0883EA18;
L_0883F44C:
    ctx.set_gpr(2, 2233u << 16u);
    ctx.fpr[1] = std::bit_cast<float>(rt.memory().aot_load32(ctx.gpr[2] + static_cast<std::uint32_t>(9012)));
    ctx.set_gpr(4, ctx.gpr[16] + static_cast<std::uint32_t>(16));
    ctx.set_fpr_bits(13, ctx.fpr_bits(20));
    ctx.fpr[1] = ctx.fpr[23] + ctx.fpr[1];
    ctx.set_gpr(2, 17408u << 16u);
    ctx.fpr[0] = std::bit_cast<float>(ctx.gpr[2]);
    ctx.set_gpr(31, 0x0883F470u);
    ctx.fpr[12] = ctx.fpr[1] / ctx.fpr[0];
    goto L_0883EA18;
L_0883F470:
    ctx.set_gpr(2, 2233u << 16u);
    ctx.fpr[1] = std::bit_cast<float>(rt.memory().aot_load32(ctx.gpr[2] + static_cast<std::uint32_t>(9012)));
    ctx.set_fpr_bits(13, ctx.fpr_bits(20));
    ctx.set_gpr(4, ctx.gpr[16] + static_cast<std::uint32_t>(24));
    ctx.fpr[1] = ctx.fpr[23] + ctx.fpr[1];
    ctx.set_gpr(2, 17408u << 16u);
    ctx.fpr[0] = std::bit_cast<float>(ctx.gpr[2]);
    ctx.set_gpr(31, 0x0883F494u);
    ctx.fpr[12] = ctx.fpr[1] / ctx.fpr[0];
    goto L_0883EA18;
L_0883F494:
    ctx.set_gpr(2, 2233u << 16u);
    ctx.fpr[1] = std::bit_cast<float>(rt.memory().aot_load32(ctx.gpr[2] + static_cast<std::uint32_t>(9016)));
    ctx.set_fpr_bits(12, ctx.fpr_bits(21));
    ctx.set_gpr(4, ctx.gpr[16] + static_cast<std::uint32_t>(32));
    ctx.fpr[1] = ctx.fpr[22] + ctx.fpr[1];
    ctx.set_gpr(2, 17408u << 16u);
    ctx.fpr[0] = std::bit_cast<float>(ctx.gpr[2]);
    ctx.fpr[1] = ctx.fpr[1] / ctx.fpr[0];
    ctx.set_gpr(2, 16256u << 16u);
    ctx.fpr[0] = std::bit_cast<float>(ctx.gpr[2]);
    ctx.set_gpr(31, 0x0883F4C4u);
    ctx.fpr[13] = ctx.fpr[0] - ctx.fpr[1];
    goto L_0883EA18;
L_0883F4C4:
    ctx.set_gpr(2, 2233u << 16u);
    ctx.fpr[0] = std::bit_cast<float>(rt.memory().aot_load32(ctx.gpr[2] + static_cast<std::uint32_t>(9012)));
    ctx.set_gpr(4, ctx.gpr[16] + static_cast<std::uint32_t>(40));
    ctx.fpr[2] = ctx.fpr[23] + ctx.fpr[0];
    ctx.set_gpr(2, 17408u << 16u);
    ctx.fpr[1] = std::bit_cast<float>(ctx.gpr[2]);
    ctx.fpr[12] = ctx.fpr[2] / ctx.fpr[1];
    ctx.set_gpr(2, 2233u << 16u);
    ctx.fpr[0] = std::bit_cast<float>(rt.memory().aot_load32(ctx.gpr[2] + static_cast<std::uint32_t>(9016)));
    ctx.set_gpr(2, 16256u << 16u);
    ctx.fpr[0] = ctx.fpr[22] + ctx.fpr[0];
    ctx.fpr[1] = ctx.fpr[0] / ctx.fpr[1];
    ctx.fpr[0] = std::bit_cast<float>(ctx.gpr[2]);
    ctx.set_gpr(31, 0x0883F500u);
    ctx.fpr[13] = ctx.fpr[0] - ctx.fpr[1];
    goto L_0883EA18;
L_0883F500:
    { const bool branch_taken = 0u == 0u;
    ctx.set_gpr(31, rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(28)));
      if (branch_taken) {
          goto L_0883F9DC;
      }
      goto L_0883F508;
    }
L_0883F508:
    ctx.set_gpr(2, static_cast<std::int32_t>(ctx.gpr[6]) < 20 ? 1u : 0u);
    { const bool branch_taken = ctx.gpr[2] != 0u;
    ctx.set_gpr(5, ctx.gpr[5] + static_cast<std::uint32_t>(2));
      if (branch_taken) {
          goto L_0883F3B8;
      }
      goto L_0883F514;
    }
L_0883F514:
    ctx.set_gpr(2, static_cast<std::int32_t>(ctx.gpr[3]) < 166 ? 1u : 0u);
    if (ctx.gpr[2] != 0u) {
    ctx.set_gpr(2, ctx.gpr[8] << 1u);
        goto L_0883F674;
    }
    goto L_0883F520;
L_0883F520:
    ctx.set_gpr(1, static_cast<std::int32_t>(ctx.gpr[3]) < 224 ? 1u : 0u);
    { const bool branch_taken = ctx.gpr[1] == 0u;
    // nop
      if (branch_taken) {
          goto L_0883F670;
      }
      goto L_0883F52C;
    }
L_0883F52C:
    ctx.set_gpr(2, ctx.gpr[3] + static_cast<std::uint32_t>(-166));
    ctx.fpr[0] = std::bit_cast<float>(ctx.gpr[2]);
    ctx.fpr[2] = static_cast<float>(static_cast<std::int32_t>(ctx.fpr_bits(0)));
    ctx.set_gpr(2, 2233u << 16u);
    ctx.fpr[1] = std::bit_cast<float>(rt.memory().aot_load32(ctx.gpr[2] + static_cast<std::uint32_t>(9020)));
    ctx.set_gpr(5, 16384u << 16u);
    ctx.set_gpr(3, 17408u << 16u);
    ctx.set_gpr(2, 2233u << 16u);
    { const float fs = ctx.fpr[2]; const float ft = ctx.fpr[1]; if ((std::isinf(fs) && ft == 0.0f) || (std::isinf(ft) && fs == 0.0f)) ctx.set_fpr_bits(21, 0x7FC00000u); else ctx.fpr[21] = fs * ft; }
    ctx.fpr[0] = std::bit_cast<float>(rt.memory().aot_load32(ctx.gpr[2] + static_cast<std::uint32_t>(9024)));
    ctx.set_gpr(4, ctx.gpr[16] + 0u);
    ctx.set_gpr(2, 16256u << 16u);
    ctx.fpr[1] = std::bit_cast<float>(ctx.gpr[5]);
    { const float fs = ctx.fpr[1]; const float ft = ctx.fpr[0]; if ((std::isinf(fs) && ft == 0.0f) || (std::isinf(ft) && fs == 0.0f)) ctx.set_fpr_bits(20, 0x7FC00000u); else ctx.fpr[20] = fs * ft; }
    ctx.fpr[2] = std::bit_cast<float>(ctx.gpr[3]);
    ctx.fpr[1] = ctx.fpr[20] / ctx.fpr[2];
    ctx.fpr[23] = ctx.fpr[21] / ctx.fpr[2];
    ctx.fpr[0] = std::bit_cast<float>(ctx.gpr[2]);
    ctx.fpr[22] = ctx.fpr[0] - ctx.fpr[1];
    ctx.set_fpr_bits(13, ctx.fpr_bits(22));
    ctx.set_gpr(31, 0x0883F584u);
    ctx.set_fpr_bits(12, ctx.fpr_bits(23));
    goto L_0883EA18;
L_0883F584:
    ctx.set_gpr(2, 2233u << 16u);
    ctx.fpr[1] = std::bit_cast<float>(rt.memory().aot_load32(ctx.gpr[2] + static_cast<std::uint32_t>(9024)));
    ctx.set_gpr(4, ctx.gpr[16] + static_cast<std::uint32_t>(8));
    ctx.set_fpr_bits(12, ctx.fpr_bits(23));
    ctx.fpr[1] = ctx.fpr[20] + ctx.fpr[1];
    ctx.set_gpr(2, 17408u << 16u);
    ctx.fpr[0] = std::bit_cast<float>(ctx.gpr[2]);
    ctx.fpr[1] = ctx.fpr[1] / ctx.fpr[0];
    ctx.set_gpr(2, 16256u << 16u);
    ctx.fpr[0] = std::bit_cast<float>(ctx.gpr[2]);
    ctx.set_gpr(31, 0x0883F5B4u);
    ctx.fpr[13] = ctx.fpr[0] - ctx.fpr[1];
    goto L_0883EA18;
L_0883F5B4:
    ctx.set_gpr(2, 2233u << 16u);
    ctx.fpr[1] = std::bit_cast<float>(rt.memory().aot_load32(ctx.gpr[2] + static_cast<std::uint32_t>(9020)));
    ctx.set_gpr(4, ctx.gpr[16] + static_cast<std::uint32_t>(16));
    ctx.set_fpr_bits(13, ctx.fpr_bits(22));
    ctx.fpr[1] = ctx.fpr[21] + ctx.fpr[1];
    ctx.set_gpr(2, 17408u << 16u);
    ctx.fpr[0] = std::bit_cast<float>(ctx.gpr[2]);
    ctx.set_gpr(31, 0x0883F5D8u);
    ctx.fpr[12] = ctx.fpr[1] / ctx.fpr[0];
    goto L_0883EA18;
L_0883F5D8:
    ctx.set_gpr(2, 2233u << 16u);
    ctx.fpr[1] = std::bit_cast<float>(rt.memory().aot_load32(ctx.gpr[2] + static_cast<std::uint32_t>(9020)));
    ctx.set_fpr_bits(13, ctx.fpr_bits(22));
    ctx.set_gpr(4, ctx.gpr[16] + static_cast<std::uint32_t>(24));
    ctx.fpr[1] = ctx.fpr[21] + ctx.fpr[1];
    ctx.set_gpr(2, 17408u << 16u);
    ctx.fpr[0] = std::bit_cast<float>(ctx.gpr[2]);
    ctx.set_gpr(31, 0x0883F5FCu);
    ctx.fpr[12] = ctx.fpr[1] / ctx.fpr[0];
    goto L_0883EA18;
L_0883F5FC:
    ctx.set_gpr(2, 2233u << 16u);
    ctx.fpr[1] = std::bit_cast<float>(rt.memory().aot_load32(ctx.gpr[2] + static_cast<std::uint32_t>(9024)));
    ctx.set_fpr_bits(12, ctx.fpr_bits(23));
    ctx.set_gpr(4, ctx.gpr[16] + static_cast<std::uint32_t>(32));
    ctx.fpr[1] = ctx.fpr[20] + ctx.fpr[1];
    ctx.set_gpr(2, 17408u << 16u);
    ctx.fpr[0] = std::bit_cast<float>(ctx.gpr[2]);
    ctx.fpr[1] = ctx.fpr[1] / ctx.fpr[0];
    ctx.set_gpr(2, 16256u << 16u);
    ctx.fpr[0] = std::bit_cast<float>(ctx.gpr[2]);
    ctx.set_gpr(31, 0x0883F62Cu);
    ctx.fpr[13] = ctx.fpr[0] - ctx.fpr[1];
    goto L_0883EA18;
L_0883F62C:
    ctx.set_gpr(2, 2233u << 16u);
    ctx.fpr[0] = std::bit_cast<float>(rt.memory().aot_load32(ctx.gpr[2] + static_cast<std::uint32_t>(9020)));
    ctx.set_gpr(4, ctx.gpr[16] + static_cast<std::uint32_t>(40));
    ctx.fpr[2] = ctx.fpr[21] + ctx.fpr[0];
    ctx.set_gpr(2, 17408u << 16u);
    ctx.fpr[1] = std::bit_cast<float>(ctx.gpr[2]);
    ctx.fpr[12] = ctx.fpr[2] / ctx.fpr[1];
    ctx.set_gpr(2, 2233u << 16u);
    ctx.fpr[0] = std::bit_cast<float>(rt.memory().aot_load32(ctx.gpr[2] + static_cast<std::uint32_t>(9024)));
    ctx.set_gpr(2, 16256u << 16u);
    ctx.fpr[0] = ctx.fpr[20] + ctx.fpr[0];
    ctx.fpr[1] = ctx.fpr[0] / ctx.fpr[1];
    ctx.fpr[0] = std::bit_cast<float>(ctx.gpr[2]);
    ctx.set_gpr(31, 0x0883F668u);
    ctx.fpr[13] = ctx.fpr[0] - ctx.fpr[1];
    goto L_0883EA18;
L_0883F668:
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_0883F9D8;
      }
      goto L_0883F670;
    }
L_0883F670:
    ctx.set_gpr(2, ctx.gpr[8] << 1u);
    goto L_0883F674;
L_0883F674:
    ctx.set_gpr(2, ctx.gpr[2] + ctx.gpr[4]);
    ctx.set_gpr(2, rt.memory().aot_load16(ctx.gpr[2] + static_cast<std::uint32_t>(24648)));
    ctx.set_gpr(1, 0u | 32769u);
    ctx.set_gpr(1, static_cast<std::int32_t>(ctx.gpr[2]) < static_cast<std::int32_t>(ctx.gpr[1]) ? 1u : 0u);
    if (ctx.gpr[1] == 0u) {
    ctx.set_gpr(6, rt.memory().aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(4)));
        goto L_0883F7F0;
    }
    goto L_0883F68C;
L_0883F68C:
    { const bool branch_taken = static_cast<std::int32_t>(ctx.gpr[8]) >= 0;
    ctx.set_gpr(2, ctx.gpr[8] & 63u);
      if (branch_taken) {
          goto L_0883F6A0;
      }
      goto L_0883F694;
    }
L_0883F694:
    if (ctx.gpr[2] == 0u) {
    ctx.fpr[0] = std::bit_cast<float>(ctx.gpr[2]);
        goto L_0883F6A4;
    }
    goto L_0883F69C;
L_0883F69C:
    ctx.set_gpr(2, ctx.gpr[2] + static_cast<std::uint32_t>(-64));
    goto L_0883F6A0;
L_0883F6A0:
    ctx.fpr[0] = std::bit_cast<float>(ctx.gpr[2]);
    goto L_0883F6A4;
L_0883F6A4:
    ctx.fpr[21] = static_cast<float>(static_cast<std::int32_t>(ctx.fpr_bits(0)));
    { const bool branch_taken = static_cast<std::int32_t>(ctx.gpr[8]) >= 0;
    ctx.set_gpr(2, static_cast<std::uint32_t>(static_cast<std::int32_t>(ctx.gpr[8]) >> 6u));
      if (branch_taken) {
          goto L_0883F6B8;
      }
      goto L_0883F6B0;
    }
L_0883F6B0:
    ctx.set_gpr(2, ctx.gpr[8] + static_cast<std::uint32_t>(63));
    ctx.set_gpr(2, static_cast<std::uint32_t>(static_cast<std::int32_t>(ctx.gpr[2]) >> 6u));
    goto L_0883F6B8;
L_0883F6B8:
    ctx.fpr[0] = std::bit_cast<float>(ctx.gpr[2]);
    ctx.fpr[2] = static_cast<float>(static_cast<std::int32_t>(ctx.fpr_bits(0)));
    ctx.set_gpr(2, 2233u << 16u);
    ctx.fpr[1] = std::bit_cast<float>(rt.memory().aot_load32(ctx.gpr[2] + static_cast<std::uint32_t>(9020)));
    ctx.set_gpr(3, 17408u << 16u);
    ctx.set_gpr(4, ctx.gpr[16] + 0u);
    ctx.set_gpr(2, 2233u << 16u);
    ctx.fpr[0] = std::bit_cast<float>(rt.memory().aot_load32(ctx.gpr[2] + static_cast<std::uint32_t>(9024)));
    { const float fs = ctx.fpr[21]; const float ft = ctx.fpr[1]; if ((std::isinf(fs) && ft == 0.0f) || (std::isinf(ft) && fs == 0.0f)) ctx.set_fpr_bits(21, 0x7FC00000u); else ctx.fpr[21] = fs * ft; }
    ctx.set_gpr(2, 16256u << 16u);
    { const float fs = ctx.fpr[2]; const float ft = ctx.fpr[0]; if ((std::isinf(fs) && ft == 0.0f) || (std::isinf(ft) && fs == 0.0f)) ctx.set_fpr_bits(20, 0x7FC00000u); else ctx.fpr[20] = fs * ft; }
    ctx.fpr[2] = std::bit_cast<float>(ctx.gpr[3]);
    ctx.fpr[1] = ctx.fpr[20] / ctx.fpr[2];
    ctx.fpr[23] = ctx.fpr[21] / ctx.fpr[2];
    ctx.fpr[0] = std::bit_cast<float>(ctx.gpr[2]);
    ctx.fpr[22] = ctx.fpr[0] - ctx.fpr[1];
    ctx.set_fpr_bits(13, ctx.fpr_bits(22));
    ctx.set_gpr(31, 0x0883F704u);
    ctx.set_fpr_bits(12, ctx.fpr_bits(23));
    goto L_0883EA18;
L_0883F704:
    ctx.set_gpr(2, 2233u << 16u);
    ctx.fpr[1] = std::bit_cast<float>(rt.memory().aot_load32(ctx.gpr[2] + static_cast<std::uint32_t>(9024)));
    ctx.set_gpr(4, ctx.gpr[16] + static_cast<std::uint32_t>(8));
    ctx.set_fpr_bits(12, ctx.fpr_bits(23));
    ctx.fpr[1] = ctx.fpr[20] + ctx.fpr[1];
    ctx.set_gpr(2, 17408u << 16u);
    ctx.fpr[0] = std::bit_cast<float>(ctx.gpr[2]);
    ctx.fpr[1] = ctx.fpr[1] / ctx.fpr[0];
    ctx.set_gpr(2, 16256u << 16u);
    ctx.fpr[0] = std::bit_cast<float>(ctx.gpr[2]);
    ctx.set_gpr(31, 0x0883F734u);
    ctx.fpr[13] = ctx.fpr[0] - ctx.fpr[1];
    goto L_0883EA18;
L_0883F734:
    ctx.set_gpr(2, 2233u << 16u);
    ctx.fpr[1] = std::bit_cast<float>(rt.memory().aot_load32(ctx.gpr[2] + static_cast<std::uint32_t>(9020)));
    ctx.set_gpr(4, ctx.gpr[16] + static_cast<std::uint32_t>(16));
    ctx.set_fpr_bits(13, ctx.fpr_bits(22));
    ctx.fpr[1] = ctx.fpr[21] + ctx.fpr[1];
    ctx.set_gpr(2, 17408u << 16u);
    ctx.fpr[0] = std::bit_cast<float>(ctx.gpr[2]);
    ctx.set_gpr(31, 0x0883F758u);
    ctx.fpr[12] = ctx.fpr[1] / ctx.fpr[0];
    goto L_0883EA18;
L_0883F758:
    ctx.set_gpr(2, 2233u << 16u);
    ctx.fpr[1] = std::bit_cast<float>(rt.memory().aot_load32(ctx.gpr[2] + static_cast<std::uint32_t>(9020)));
    ctx.set_fpr_bits(13, ctx.fpr_bits(22));
    ctx.set_gpr(4, ctx.gpr[16] + static_cast<std::uint32_t>(24));
    ctx.fpr[1] = ctx.fpr[21] + ctx.fpr[1];
    ctx.set_gpr(2, 17408u << 16u);
    ctx.fpr[0] = std::bit_cast<float>(ctx.gpr[2]);
    ctx.set_gpr(31, 0x0883F77Cu);
    ctx.fpr[12] = ctx.fpr[1] / ctx.fpr[0];
    goto L_0883EA18;
L_0883F77C:
    ctx.set_gpr(2, 2233u << 16u);
    ctx.fpr[1] = std::bit_cast<float>(rt.memory().aot_load32(ctx.gpr[2] + static_cast<std::uint32_t>(9024)));
    ctx.set_fpr_bits(12, ctx.fpr_bits(23));
    ctx.set_gpr(4, ctx.gpr[16] + static_cast<std::uint32_t>(32));
    ctx.fpr[1] = ctx.fpr[20] + ctx.fpr[1];
    ctx.set_gpr(2, 17408u << 16u);
    ctx.fpr[0] = std::bit_cast<float>(ctx.gpr[2]);
    ctx.fpr[1] = ctx.fpr[1] / ctx.fpr[0];
    ctx.set_gpr(2, 16256u << 16u);
    ctx.fpr[0] = std::bit_cast<float>(ctx.gpr[2]);
    ctx.set_gpr(31, 0x0883F7ACu);
    ctx.fpr[13] = ctx.fpr[0] - ctx.fpr[1];
    goto L_0883EA18;
L_0883F7AC:
    ctx.set_gpr(2, 2233u << 16u);
    ctx.fpr[0] = std::bit_cast<float>(rt.memory().aot_load32(ctx.gpr[2] + static_cast<std::uint32_t>(9020)));
    ctx.set_gpr(4, ctx.gpr[16] + static_cast<std::uint32_t>(40));
    ctx.fpr[2] = ctx.fpr[21] + ctx.fpr[0];
    ctx.set_gpr(2, 17408u << 16u);
    ctx.fpr[1] = std::bit_cast<float>(ctx.gpr[2]);
    ctx.fpr[12] = ctx.fpr[2] / ctx.fpr[1];
    ctx.set_gpr(2, 2233u << 16u);
    ctx.fpr[0] = std::bit_cast<float>(rt.memory().aot_load32(ctx.gpr[2] + static_cast<std::uint32_t>(9024)));
    ctx.set_gpr(2, 16256u << 16u);
    ctx.fpr[0] = ctx.fpr[20] + ctx.fpr[0];
    ctx.fpr[1] = ctx.fpr[0] / ctx.fpr[1];
    ctx.fpr[0] = std::bit_cast<float>(ctx.gpr[2]);
    ctx.set_gpr(31, 0x0883F7E8u);
    ctx.fpr[13] = ctx.fpr[0] - ctx.fpr[1];
    goto L_0883EA18;
L_0883F7E8:
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_0883F9D8;
      }
      goto L_0883F7F0;
    }
L_0883F7F0:
    ctx.set_gpr(5, ctx.gpr[8] - ctx.gpr[6]);
    { const bool branch_taken = static_cast<std::int32_t>(ctx.gpr[5]) >= 0;
    ctx.set_gpr(2, ctx.gpr[5] & 31u);
      if (branch_taken) {
          goto L_0883F808;
      }
      goto L_0883F7FC;
    }
L_0883F7FC:
    if (ctx.gpr[2] == 0u) {
    ctx.fpr[0] = std::bit_cast<float>(ctx.gpr[2]);
        goto L_0883F80C;
    }
    goto L_0883F804;
L_0883F804:
    ctx.set_gpr(2, ctx.gpr[2] + static_cast<std::uint32_t>(-32));
    goto L_0883F808;
L_0883F808:
    ctx.fpr[0] = std::bit_cast<float>(ctx.gpr[2]);
    goto L_0883F80C;
L_0883F80C:
    ctx.fpr[1] = static_cast<float>(static_cast<std::int32_t>(ctx.fpr_bits(0)));
    ctx.set_gpr(2, 2233u << 16u);
    ctx.fpr[0] = std::bit_cast<float>(rt.memory().aot_load32(ctx.gpr[2] + static_cast<std::uint32_t>(9012)));
    { const float fs = ctx.fpr[1]; const float ft = ctx.fpr[0]; if ((std::isinf(fs) && ft == 0.0f) || (std::isinf(ft) && fs == 0.0f)) ctx.set_fpr_bits(21, 0x7FC00000u); else ctx.fpr[21] = fs * ft; }
    { const bool branch_taken = static_cast<std::int32_t>(ctx.gpr[5]) >= 0;
    ctx.set_gpr(2, static_cast<std::uint32_t>(static_cast<std::int32_t>(ctx.gpr[5]) >> 5u));
      if (branch_taken) {
          goto L_0883F82C;
      }
      goto L_0883F824;
    }
L_0883F824:
    ctx.set_gpr(2, ctx.gpr[5] + static_cast<std::uint32_t>(31));
    ctx.set_gpr(2, static_cast<std::uint32_t>(static_cast<std::int32_t>(ctx.gpr[2]) >> 5u));
    goto L_0883F82C;
L_0883F82C:
    ctx.fpr[0] = std::bit_cast<float>(ctx.gpr[2]);
    ctx.fpr[0] = static_cast<float>(static_cast<std::int32_t>(ctx.fpr_bits(0)));
    ctx.set_gpr(2, 2233u << 16u);
    ctx.fpr[1] = std::bit_cast<float>(rt.memory().aot_load32(ctx.gpr[2] + static_cast<std::uint32_t>(9016)));
    ctx.set_gpr(4, 16768u << 16u);
    ctx.set_gpr(3, 16896u << 16u);
    ctx.set_gpr(2, static_cast<std::int32_t>(ctx.gpr[5]) < 3008 ? 1u : 0u);
    { const float fs = ctx.fpr[0]; const float ft = ctx.fpr[1]; if ((std::isinf(fs) && ft == 0.0f) || (std::isinf(ft) && fs == 0.0f)) ctx.set_fpr_bits(20, 0x7FC00000u); else ctx.fpr[20] = fs * ft; }
    ctx.fpr[0] = std::bit_cast<float>(ctx.gpr[4]);
    ctx.fpr[1] = ctx.fpr[0] - ctx.fpr[1];
    ctx.fpr[0] = std::bit_cast<float>(ctx.gpr[3]);
    { const bool branch_taken = ctx.gpr[2] != 0u;
    { const float fs = ctx.fpr[1]; const float ft = ctx.fpr[0]; if ((std::isinf(fs) && ft == 0.0f) || (std::isinf(ft) && fs == 0.0f)) ctx.set_fpr_bits(1, 0x7FC00000u); else ctx.fpr[1] = fs * ft; }
      if (branch_taken) {
          goto L_0883F870;
      }
      goto L_0883F860;
    }
L_0883F860:
    ctx.set_gpr(2, 16448u << 16u);
    ctx.fpr[0] = std::bit_cast<float>(ctx.gpr[2]);
    { const bool branch_taken = 0u == 0u;
    { const float fs = ctx.fpr[1]; const float ft = ctx.fpr[0]; if ((std::isinf(fs) && ft == 0.0f) || (std::isinf(ft) && fs == 0.0f)) ctx.set_fpr_bits(1, 0x7FC00000u); else ctx.fpr[1] = fs * ft; }
      if (branch_taken) {
          goto L_0883F888;
      }
      goto L_0883F870;
    }
L_0883F870:
    ctx.set_gpr(2, static_cast<std::int32_t>(ctx.gpr[5]) < 1984 ? 1u : 0u);
    if (ctx.gpr[2] != 0u) {
    ctx.set_gpr(1, static_cast<std::int32_t>(ctx.gpr[5]) < 960 ? 1u : 0u);
        goto L_0883F88C;
    }
    goto L_0883F87C;
L_0883F87C:
    ctx.set_gpr(2, 16384u << 16u);
    ctx.fpr[0] = std::bit_cast<float>(ctx.gpr[2]);
    { const float fs = ctx.fpr[1]; const float ft = ctx.fpr[0]; if ((std::isinf(fs) && ft == 0.0f) || (std::isinf(ft) && fs == 0.0f)) ctx.set_fpr_bits(1, 0x7FC00000u); else ctx.fpr[1] = fs * ft; }
    goto L_0883F888;
L_0883F888:
    ctx.set_gpr(1, static_cast<std::int32_t>(ctx.gpr[5]) < 960 ? 1u : 0u);
    goto L_0883F88C;
L_0883F88C:
    if (ctx.gpr[1] == 0u) {
    ctx.fpr[20] = ctx.fpr[20] + ctx.fpr[1];
        goto L_0883F8A0;
    }
    goto L_0883F894;
L_0883F894:
    ctx.fpr[0] = std::bit_cast<float>(0u);
    { const float fs = ctx.fpr[1]; const float ft = ctx.fpr[0]; if ((std::isinf(fs) && ft == 0.0f) || (std::isinf(ft) && fs == 0.0f)) ctx.set_fpr_bits(1, 0x7FC00000u); else ctx.fpr[1] = fs * ft; }
    ctx.fpr[20] = ctx.fpr[20] + ctx.fpr[1];
    goto L_0883F8A0;
L_0883F8A0:
    { const bool branch_taken = static_cast<std::int32_t>(ctx.gpr[6]) >= 0;
    ctx.set_gpr(2, static_cast<std::uint32_t>(static_cast<std::int32_t>(ctx.gpr[6]) >> 6u));
      if (branch_taken) {
          goto L_0883F8B0;
      }
      goto L_0883F8A8;
    }
L_0883F8A8:
    ctx.set_gpr(2, ctx.gpr[6] + static_cast<std::uint32_t>(63));
    ctx.set_gpr(2, static_cast<std::uint32_t>(static_cast<std::int32_t>(ctx.gpr[2]) >> 6u));
    goto L_0883F8B0;
L_0883F8B0:
    ctx.fpr[0] = std::bit_cast<float>(ctx.gpr[2]);
    ctx.fpr[1] = static_cast<float>(static_cast<std::int32_t>(ctx.fpr_bits(0)));
    ctx.set_gpr(2, 2233u << 16u);
    ctx.set_gpr(3, 17408u << 16u);
    ctx.set_gpr(4, ctx.gpr[16] + 0u);
    ctx.fpr[0] = std::bit_cast<float>(rt.memory().aot_load32(ctx.gpr[2] + static_cast<std::uint32_t>(9024)));
    ctx.fpr[2] = std::bit_cast<float>(ctx.gpr[3]);
    ctx.fpr[23] = ctx.fpr[21] / ctx.fpr[2];
    ctx.set_gpr(2, 16256u << 16u);
    { const float fs = ctx.fpr[1]; const float ft = ctx.fpr[0]; if ((std::isinf(fs) && ft == 0.0f) || (std::isinf(ft) && fs == 0.0f)) ctx.set_fpr_bits(0, 0x7FC00000u); else ctx.fpr[0] = fs * ft; }
    ctx.fpr[20] = ctx.fpr[20] + ctx.fpr[0];
    ctx.fpr[1] = ctx.fpr[20] / ctx.fpr[2];
    ctx.fpr[0] = std::bit_cast<float>(ctx.gpr[2]);
    ctx.fpr[22] = ctx.fpr[0] - ctx.fpr[1];
    ctx.set_fpr_bits(13, ctx.fpr_bits(22));
    ctx.set_gpr(31, 0x0883F8F4u);
    ctx.set_fpr_bits(12, ctx.fpr_bits(23));
    goto L_0883EA18;
L_0883F8F4:
    ctx.set_gpr(2, 2233u << 16u);
    ctx.fpr[1] = std::bit_cast<float>(rt.memory().aot_load32(ctx.gpr[2] + static_cast<std::uint32_t>(9016)));
    ctx.set_gpr(4, ctx.gpr[16] + static_cast<std::uint32_t>(8));
    ctx.set_fpr_bits(12, ctx.fpr_bits(23));
    ctx.fpr[1] = ctx.fpr[20] + ctx.fpr[1];
    ctx.set_gpr(2, 17408u << 16u);
    ctx.fpr[0] = std::bit_cast<float>(ctx.gpr[2]);
    ctx.fpr[1] = ctx.fpr[1] / ctx.fpr[0];
    ctx.set_gpr(2, 16256u << 16u);
    ctx.fpr[0] = std::bit_cast<float>(ctx.gpr[2]);
    ctx.set_gpr(31, 0x0883F924u);
    ctx.fpr[13] = ctx.fpr[0] - ctx.fpr[1];
    goto L_0883EA18;
L_0883F924:
    ctx.set_gpr(2, 2233u << 16u);
    ctx.fpr[1] = std::bit_cast<float>(rt.memory().aot_load32(ctx.gpr[2] + static_cast<std::uint32_t>(9012)));
    ctx.set_gpr(4, ctx.gpr[16] + static_cast<std::uint32_t>(16));
    ctx.set_fpr_bits(13, ctx.fpr_bits(22));
    ctx.fpr[1] = ctx.fpr[21] + ctx.fpr[1];
    ctx.set_gpr(2, 17408u << 16u);
    ctx.fpr[0] = std::bit_cast<float>(ctx.gpr[2]);
    ctx.set_gpr(31, 0x0883F948u);
    ctx.fpr[12] = ctx.fpr[1] / ctx.fpr[0];
    goto L_0883EA18;
L_0883F948:
    ctx.set_gpr(2, 2233u << 16u);
    ctx.fpr[1] = std::bit_cast<float>(rt.memory().aot_load32(ctx.gpr[2] + static_cast<std::uint32_t>(9012)));
    ctx.set_fpr_bits(13, ctx.fpr_bits(22));
    ctx.set_gpr(4, ctx.gpr[16] + static_cast<std::uint32_t>(24));
    ctx.fpr[1] = ctx.fpr[21] + ctx.fpr[1];
    ctx.set_gpr(2, 17408u << 16u);
    ctx.fpr[0] = std::bit_cast<float>(ctx.gpr[2]);
    ctx.set_gpr(31, 0x0883F96Cu);
    ctx.fpr[12] = ctx.fpr[1] / ctx.fpr[0];
    goto L_0883EA18;
L_0883F96C:
    ctx.set_gpr(2, 2233u << 16u);
    ctx.fpr[1] = std::bit_cast<float>(rt.memory().aot_load32(ctx.gpr[2] + static_cast<std::uint32_t>(9016)));
    ctx.set_fpr_bits(12, ctx.fpr_bits(23));
    ctx.set_gpr(4, ctx.gpr[16] + static_cast<std::uint32_t>(32));
    ctx.fpr[1] = ctx.fpr[20] + ctx.fpr[1];
    ctx.set_gpr(2, 17408u << 16u);
    ctx.fpr[0] = std::bit_cast<float>(ctx.gpr[2]);
    ctx.fpr[1] = ctx.fpr[1] / ctx.fpr[0];
    ctx.set_gpr(2, 16256u << 16u);
    ctx.fpr[0] = std::bit_cast<float>(ctx.gpr[2]);
    ctx.set_gpr(31, 0x0883F99Cu);
    ctx.fpr[13] = ctx.fpr[0] - ctx.fpr[1];
    goto L_0883EA18;
L_0883F99C:
    ctx.set_gpr(2, 2233u << 16u);
    ctx.fpr[0] = std::bit_cast<float>(rt.memory().aot_load32(ctx.gpr[2] + static_cast<std::uint32_t>(9012)));
    ctx.set_gpr(4, ctx.gpr[16] + static_cast<std::uint32_t>(40));
    ctx.fpr[2] = ctx.fpr[21] + ctx.fpr[0];
    ctx.set_gpr(2, 17408u << 16u);
    ctx.fpr[1] = std::bit_cast<float>(ctx.gpr[2]);
    ctx.fpr[12] = ctx.fpr[2] / ctx.fpr[1];
    ctx.set_gpr(2, 2233u << 16u);
    ctx.fpr[0] = std::bit_cast<float>(rt.memory().aot_load32(ctx.gpr[2] + static_cast<std::uint32_t>(9016)));
    ctx.set_gpr(2, 16256u << 16u);
    ctx.fpr[0] = ctx.fpr[20] + ctx.fpr[0];
    ctx.fpr[1] = ctx.fpr[0] / ctx.fpr[1];
    ctx.fpr[0] = std::bit_cast<float>(ctx.gpr[2]);
    ctx.set_gpr(31, 0x0883F9D8u);
    ctx.fpr[13] = ctx.fpr[0] - ctx.fpr[1];
    goto L_0883EA18;
L_0883F9D8:
    ctx.set_gpr(31, rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(28)));
    goto L_0883F9DC;
L_0883F9DC:
    ctx.set_gpr(16, rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(24)));
    ctx.fpr[23] = std::bit_cast<float>(rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(20)));
    ctx.fpr[22] = std::bit_cast<float>(rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(16)));
    ctx.fpr[21] = std::bit_cast<float>(rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(12)));
    ctx.fpr[20] = std::bit_cast<float>(rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(8)));
    jump_target = ctx.gpr[31];
    ctx.set_gpr(29, ctx.gpr[29] + static_cast<std::uint32_t>(48));
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_0883F9F8:
    ctx.set_gpr(2, 17392u << 16u);
    ctx.fpr[13] = std::bit_cast<float>(ctx.gpr[2]);
    ctx.set_gpr(2, 17288u << 16u);
    ctx.fpr[14] = std::bit_cast<float>(ctx.gpr[2]);
    ctx.set_gpr(2, 49904u << 16u);
    ctx.fpr[16] = std::bit_cast<float>(ctx.gpr[2]);
    ctx.fpr[12] = std::bit_cast<float>(0u);
    ctx.set_gpr(2, 17136u << 16u);
    ctx.set_gpr(4, ctx.gpr[4] + static_cast<std::uint32_t>(8296));
    ctx.fpr[17] = std::bit_cast<float>(ctx.gpr[2]);
    ctx.set_gpr(4, ctx.gpr[4] + static_cast<std::uint32_t>(32760));
    ctx.set_fpr_bits(15, ctx.fpr_bits(12));
    (void)rt.invoke_chained_direct<&recomp_unit_0127_entry, 127u, 69u, 0x08A00CCCu>(ctx, &aot_mem); return;
L_0883FA2C:
    ctx.set_gpr(29, ctx.gpr[29] + static_cast<std::uint32_t>(-16));
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(12), ctx.gpr[31]);
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(8), ctx.gpr[16]);
    ctx.set_gpr(16, ctx.gpr[4] + 0u);
    ctx.set_gpr(4, ctx.gpr[16] + static_cast<std::uint32_t>(8288));
    ctx.set_gpr(31, 0x0883FA48u);
    ctx.set_gpr(4, ctx.gpr[4] + static_cast<std::uint32_t>(32760));
    goto L_0883D3CC;
L_0883FA48:
    ctx.set_gpr(25, rt.memory().aot_load32(ctx.gpr[2] + static_cast<std::uint32_t>(0)));
    ctx.set_gpr(6, ctx.gpr[16] + static_cast<std::uint32_t>(8360));
    ctx.set_gpr(4, ctx.gpr[2] + 0u);
    ctx.set_gpr(25, rt.memory().aot_load32(ctx.gpr[25] + static_cast<std::uint32_t>(848)));
    ctx.set_gpr(5, 0u + 0u);
    jump_target = ctx.gpr[25];
    ctx.set_gpr(31, 0x0883FA64u);
    ctx.set_gpr(6, ctx.gpr[6] + static_cast<std::uint32_t>(32760));
    ctx.pc = jump_target;
    if (rt.invoke_chained_call(ctx, &aot_mem) && ctx.pc == 0x0883FA64u) goto L_0883FA64;
    return;
L_0883FA64:
    ctx.set_gpr(4, ctx.gpr[16] + static_cast<std::uint32_t>(8288));
    ctx.set_gpr(31, 0x0883FA70u);
    ctx.set_gpr(4, ctx.gpr[4] + static_cast<std::uint32_t>(32760));
    goto L_0883D3CC;
L_0883FA70:
    ctx.set_gpr(25, rt.memory().aot_load32(ctx.gpr[2] + static_cast<std::uint32_t>(0)));
    ctx.set_gpr(6, ctx.gpr[16] + static_cast<std::uint32_t>(8424));
    ctx.set_gpr(6, ctx.gpr[6] + static_cast<std::uint32_t>(32760));
    ctx.set_gpr(25, rt.memory().aot_load32(ctx.gpr[25] + static_cast<std::uint32_t>(848)));
    ctx.set_gpr(4, ctx.gpr[2] + 0u);
    jump_target = ctx.gpr[25];
    ctx.set_gpr(31, 0x0883FA8Cu);
    ctx.set_gpr(5, 0u + static_cast<std::uint32_t>(1));
    ctx.pc = jump_target;
    if (rt.invoke_chained_call(ctx, &aot_mem) && ctx.pc == 0x0883FA8Cu) goto L_0883FA8C;
    return;
L_0883FA8C:
    ctx.set_gpr(31, rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(12)));
    ctx.set_gpr(16, rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(8)));
    jump_target = ctx.gpr[31];
    ctx.set_gpr(29, ctx.gpr[29] + static_cast<std::uint32_t>(16));
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_0883FA9C:
    ctx.set_gpr(29, ctx.gpr[29] + static_cast<std::uint32_t>(-16));
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(12), ctx.gpr[31]);
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(8), ctx.gpr[16]);
    ctx.set_gpr(16, ctx.gpr[4] + 0u);
    ctx.set_gpr(4, ctx.gpr[16] + static_cast<std::uint32_t>(8288));
    ctx.set_gpr(31, 0x0883FAB8u);
    ctx.set_gpr(4, ctx.gpr[4] + static_cast<std::uint32_t>(32760));
    goto L_0883D3CC;
L_0883FAB8:
    ctx.set_gpr(25, rt.memory().aot_load32(ctx.gpr[2] + static_cast<std::uint32_t>(0)));
    ctx.set_gpr(6, ctx.gpr[16] + static_cast<std::uint32_t>(8360));
    ctx.set_gpr(4, ctx.gpr[2] + 0u);
    ctx.set_gpr(25, rt.memory().aot_load32(ctx.gpr[25] + static_cast<std::uint32_t>(828)));
    ctx.set_gpr(5, 0u + 0u);
    jump_target = ctx.gpr[25];
    ctx.set_gpr(31, 0x0883FAD4u);
    ctx.set_gpr(6, ctx.gpr[6] + static_cast<std::uint32_t>(32760));
    ctx.pc = jump_target;
    if (rt.invoke_chained_call(ctx, &aot_mem) && ctx.pc == 0x0883FAD4u) goto L_0883FAD4;
    return;
L_0883FAD4:
    ctx.set_gpr(4, ctx.gpr[16] + static_cast<std::uint32_t>(8288));
    ctx.set_gpr(31, 0x0883FAE0u);
    ctx.set_gpr(4, ctx.gpr[4] + static_cast<std::uint32_t>(32760));
    goto L_0883D3CC;
L_0883FAE0:
    ctx.set_gpr(25, rt.memory().aot_load32(ctx.gpr[2] + static_cast<std::uint32_t>(0)));
    ctx.set_gpr(6, ctx.gpr[16] + static_cast<std::uint32_t>(8424));
    ctx.set_gpr(6, ctx.gpr[6] + static_cast<std::uint32_t>(32760));
    ctx.set_gpr(25, rt.memory().aot_load32(ctx.gpr[25] + static_cast<std::uint32_t>(828)));
    ctx.set_gpr(4, ctx.gpr[2] + 0u);
    jump_target = ctx.gpr[25];
    ctx.set_gpr(31, 0x0883FAFCu);
    ctx.set_gpr(5, 0u + static_cast<std::uint32_t>(1));
    ctx.pc = jump_target;
    if (rt.invoke_chained_call(ctx, &aot_mem) && ctx.pc == 0x0883FAFCu) goto L_0883FAFC;
    return;
L_0883FAFC:
    ctx.set_gpr(31, rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(12)));
    ctx.set_gpr(16, rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(8)));
    jump_target = ctx.gpr[31];
    ctx.set_gpr(29, ctx.gpr[29] + static_cast<std::uint32_t>(16));
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_0883FB0C:
    ctx.set_gpr(29, ctx.gpr[29] + static_cast<std::uint32_t>(-64));
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(28), ctx.gpr[31]);
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(24), ctx.gpr[16]);
    ctx.set_gpr(16, ctx.gpr[4] + 0u);
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(16), std::bit_cast<std::uint32_t>(ctx.fpr[20]));
    ctx.set_gpr(4, ctx.gpr[16] + static_cast<std::uint32_t>(8288));
    ctx.set_fpr_bits(20, ctx.fpr_bits(12));
    ctx.set_gpr(31, 0x0883FB30u);
    ctx.set_gpr(4, ctx.gpr[4] + static_cast<std::uint32_t>(32760));
    goto L_0883D3CC;
L_0883FB30:
    ctx.set_gpr(25, rt.memory().aot_load32(ctx.gpr[2] + static_cast<std::uint32_t>(0)));
    ctx.set_gpr(6, ctx.gpr[16] + static_cast<std::uint32_t>(8296));
    ctx.set_gpr(4, ctx.gpr[2] + 0u);
    ctx.set_gpr(25, rt.memory().aot_load32(ctx.gpr[25] + static_cast<std::uint32_t>(828)));
    ctx.set_gpr(5, 0u + 0u);
    jump_target = ctx.gpr[25];
    ctx.set_gpr(31, 0x0883FB4Cu);
    ctx.set_gpr(6, ctx.gpr[6] + static_cast<std::uint32_t>(32760));
    ctx.pc = jump_target;
    if (rt.invoke_chained_call(ctx, &aot_mem) && ctx.pc == 0x0883FB4Cu) goto L_0883FB4C;
    return;
L_0883FB4C:
    ctx.set_gpr(2, 1u << 16u);
    ctx.set_gpr(2, ctx.gpr[16] + ctx.gpr[2]);
    ctx.fpr[12] = std::bit_cast<float>(rt.memory().aot_load32(ctx.gpr[2] + static_cast<std::uint32_t>(-24208)));
    ctx.set_fpr_bits(14, ctx.fpr_bits(20) ^ 0x80000000u);
    ctx.set_gpr(2, 1u << 16u);
    ctx.set_gpr(2, ctx.gpr[16] + ctx.gpr[2]);
    ctx.fpr[13] = std::bit_cast<float>(rt.memory().aot_load32(ctx.gpr[2] + static_cast<std::uint32_t>(-24204)));
    ctx.set_gpr(31, 0x0883FB70u);
    ctx.set_gpr(4, ctx.gpr[29] + static_cast<std::uint32_t>(52));
    goto L_0883EAC8;
L_0883FB70:
    ctx.set_gpr(4, ctx.gpr[16] + static_cast<std::uint32_t>(8488));
    ctx.set_gpr(5, ctx.gpr[2] + 0u);
    ctx.set_gpr(31, 0x0883FB80u);
    ctx.set_gpr(4, ctx.gpr[4] + static_cast<std::uint32_t>(32760));
    if (rt.invoke_chained_direct<&recomp_unit_0126_entry, 126u, 748u, 0x089FFCD4u>(ctx, &aot_mem) && ctx.pc == 0x0883FB80u) goto L_0883FB80;
    return;
L_0883FB80:
    ctx.set_gpr(2, 16256u << 16u);
    ctx.fpr[14] = std::bit_cast<float>(ctx.gpr[2]);
    ctx.set_gpr(2, 1u << 16u);
    ctx.set_gpr(2, ctx.gpr[16] + ctx.gpr[2]);
    ctx.fpr[12] = std::bit_cast<float>(rt.memory().aot_load32(ctx.gpr[2] + static_cast<std::uint32_t>(-24200)));
    ctx.set_gpr(2, 1u << 16u);
    ctx.set_gpr(2, ctx.gpr[16] + ctx.gpr[2]);
    ctx.fpr[13] = std::bit_cast<float>(rt.memory().aot_load32(ctx.gpr[2] + static_cast<std::uint32_t>(-24196)));
    ctx.set_gpr(31, 0x0883FBA8u);
    ctx.set_gpr(4, ctx.gpr[29] + static_cast<std::uint32_t>(40));
    goto L_0883EAC8;
L_0883FBA8:
    ctx.set_gpr(4, ctx.gpr[16] + static_cast<std::uint32_t>(8488));
    ctx.set_gpr(5, ctx.gpr[2] + 0u);
    ctx.set_gpr(31, 0x0883FBB8u);
    ctx.set_gpr(4, ctx.gpr[4] + static_cast<std::uint32_t>(32760));
    if (rt.invoke_chained_direct<&recomp_unit_0126_entry, 126u, 754u, 0x089FFEE4u>(ctx, &aot_mem) && ctx.pc == 0x0883FBB8u) goto L_0883FBB8;
    return;
L_0883FBB8:
    ctx.set_gpr(4, ctx.gpr[16] + static_cast<std::uint32_t>(8288));
    ctx.set_gpr(31, 0x0883FBC4u);
    ctx.set_gpr(4, ctx.gpr[4] + static_cast<std::uint32_t>(32760));
    goto L_0883D3CC;
L_0883FBC4:
    ctx.set_gpr(25, rt.memory().aot_load32(ctx.gpr[2] + static_cast<std::uint32_t>(0)));
    ctx.set_gpr(6, ctx.gpr[16] + static_cast<std::uint32_t>(8488));
    ctx.set_gpr(6, ctx.gpr[6] + static_cast<std::uint32_t>(32760));
    ctx.set_gpr(25, rt.memory().aot_load32(ctx.gpr[25] + static_cast<std::uint32_t>(828)));
    ctx.set_gpr(4, ctx.gpr[2] + 0u);
    jump_target = ctx.gpr[25];
    ctx.set_gpr(31, 0x0883FBE0u);
    ctx.set_gpr(5, 0u + static_cast<std::uint32_t>(1));
    ctx.pc = jump_target;
    if (rt.invoke_chained_call(ctx, &aot_mem) && ctx.pc == 0x0883FBE0u) goto L_0883FBE0;
    return;
L_0883FBE0:
    ctx.set_gpr(31, rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(28)));
    ctx.set_gpr(16, rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(24)));
    ctx.fpr[20] = std::bit_cast<float>(rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(16)));
    jump_target = ctx.gpr[31];
    ctx.set_gpr(29, ctx.gpr[29] + static_cast<std::uint32_t>(64));
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_0883FBF4:
    ctx.set_gpr(29, ctx.gpr[29] + static_cast<std::uint32_t>(-16));
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(12), ctx.gpr[31]);
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(8), ctx.gpr[16]);
    ctx.set_gpr(16, ctx.gpr[4] + 0u);
    ctx.set_gpr(4, ctx.gpr[16] + static_cast<std::uint32_t>(8288));
    ctx.set_gpr(31, 0x0883FC10u);
    ctx.set_gpr(4, ctx.gpr[4] + static_cast<std::uint32_t>(32760));
    goto L_0883D3CC;
L_0883FC10:
    ctx.set_gpr(25, rt.memory().aot_load32(ctx.gpr[2] + static_cast<std::uint32_t>(0)));
    ctx.set_gpr(25, rt.memory().aot_load32(ctx.gpr[25] + static_cast<std::uint32_t>(888)));
    jump_target = ctx.gpr[25];
    ctx.set_gpr(31, 0x0883FC20u);
    ctx.set_gpr(4, ctx.gpr[2] + 0u);
    ctx.pc = jump_target;
    if (rt.invoke_chained_call(ctx, &aot_mem) && ctx.pc == 0x0883FC20u) goto L_0883FC20;
    return;
L_0883FC20:
    ctx.set_gpr(3, 1u << 16u);
    ctx.set_gpr(3, ctx.gpr[16] + ctx.gpr[3]);
    ctx.set_gpr(4, ctx.gpr[16] + static_cast<std::uint32_t>(8288));
    rt.memory().aot_store32(ctx.gpr[3] + static_cast<std::uint32_t>(-24224), ctx.gpr[2]);
    ctx.set_gpr(31, 0x0883FC38u);
    ctx.set_gpr(4, ctx.gpr[4] + static_cast<std::uint32_t>(32760));
    goto L_0883D3CC;
L_0883FC38:
    ctx.set_gpr(25, rt.memory().aot_load32(ctx.gpr[2] + static_cast<std::uint32_t>(0)));
    ctx.set_gpr(25, rt.memory().aot_load32(ctx.gpr[25] + static_cast<std::uint32_t>(896)));
    jump_target = ctx.gpr[25];
    ctx.set_gpr(31, 0x0883FC48u);
    ctx.set_gpr(4, ctx.gpr[2] + 0u);
    ctx.pc = jump_target;
    if (rt.invoke_chained_call(ctx, &aot_mem) && ctx.pc == 0x0883FC48u) goto L_0883FC48;
    return;
L_0883FC48:
    ctx.set_gpr(2, 1u << 16u);
    ctx.set_gpr(2, ctx.gpr[16] + ctx.gpr[2]);
    ctx.set_gpr(4, ctx.gpr[16] + static_cast<std::uint32_t>(8288));
    rt.memory().aot_store32(ctx.gpr[2] + static_cast<std::uint32_t>(-24220), std::bit_cast<std::uint32_t>(ctx.fpr[0]));
    ctx.set_gpr(31, 0x0883FC60u);
    ctx.set_gpr(4, ctx.gpr[4] + static_cast<std::uint32_t>(32760));
    goto L_0883D3CC;
L_0883FC60:
    ctx.set_gpr(25, rt.memory().aot_load32(ctx.gpr[2] + static_cast<std::uint32_t>(0)));
    ctx.set_gpr(25, rt.memory().aot_load32(ctx.gpr[25] + static_cast<std::uint32_t>(880)));
    jump_target = ctx.gpr[25];
    ctx.set_gpr(31, 0x0883FC70u);
    ctx.set_gpr(4, ctx.gpr[2] + 0u);
    ctx.pc = jump_target;
    if (rt.invoke_chained_call(ctx, &aot_mem) && ctx.pc == 0x0883FC70u) goto L_0883FC70;
    return;
L_0883FC70:
    ctx.set_gpr(3, 1u << 16u);
    ctx.set_gpr(3, ctx.gpr[16] + ctx.gpr[3]);
    ctx.set_gpr(4, ctx.gpr[16] + static_cast<std::uint32_t>(8288));
    rt.memory().aot_store8(ctx.gpr[3] + static_cast<std::uint32_t>(-24216), static_cast<std::uint8_t>(ctx.gpr[2]));
    ctx.set_gpr(31, 0x0883FC88u);
    ctx.set_gpr(4, ctx.gpr[4] + static_cast<std::uint32_t>(32760));
    goto L_0883D3CC;
L_0883FC88:
    ctx.set_gpr(25, rt.memory().aot_load32(ctx.gpr[2] + static_cast<std::uint32_t>(0)));
    ctx.set_gpr(25, rt.memory().aot_load32(ctx.gpr[25] + static_cast<std::uint32_t>(944)));
    jump_target = ctx.gpr[25];
    ctx.set_gpr(31, 0x0883FC98u);
    ctx.set_gpr(4, ctx.gpr[2] + 0u);
    ctx.pc = jump_target;
    if (rt.invoke_chained_call(ctx, &aot_mem) && ctx.pc == 0x0883FC98u) goto L_0883FC98;
    return;
L_0883FC98:
    ctx.set_gpr(3, 1u << 16u);
    ctx.set_gpr(3, ctx.gpr[16] + ctx.gpr[3]);
    ctx.set_gpr(4, ctx.gpr[16] + static_cast<std::uint32_t>(8288));
    rt.memory().aot_store8(ctx.gpr[3] + static_cast<std::uint32_t>(-24215), static_cast<std::uint8_t>(ctx.gpr[2]));
    ctx.set_gpr(31, 0x0883FCB0u);
    ctx.set_gpr(4, ctx.gpr[4] + static_cast<std::uint32_t>(32760));
    goto L_0883D3CC;
L_0883FCB0:
    ctx.set_gpr(25, rt.memory().aot_load32(ctx.gpr[2] + static_cast<std::uint32_t>(0)));
    ctx.set_gpr(4, ctx.gpr[2] + 0u);
    ctx.set_gpr(25, rt.memory().aot_load32(ctx.gpr[25] + static_cast<std::uint32_t>(464)));
    jump_target = ctx.gpr[25];
    ctx.set_gpr(31, 0x0883FCC4u);
    ctx.set_gpr(5, 0u + 0u);
    ctx.pc = jump_target;
    if (rt.invoke_chained_call(ctx, &aot_mem) && ctx.pc == 0x0883FCC4u) goto L_0883FCC4;
    return;
L_0883FCC4:
    ctx.set_gpr(3, 1u << 16u);
    ctx.set_gpr(3, ctx.gpr[16] + ctx.gpr[3]);
    ctx.set_gpr(4, ctx.gpr[16] + static_cast<std::uint32_t>(8288));
    rt.memory().aot_store8(ctx.gpr[3] + static_cast<std::uint32_t>(-24214), static_cast<std::uint8_t>(ctx.gpr[2]));
    ctx.set_gpr(31, 0x0883FCDCu);
    ctx.set_gpr(4, ctx.gpr[4] + static_cast<std::uint32_t>(32760));
    goto L_0883D3CC;
L_0883FCDC:
    ctx.set_gpr(25, rt.memory().aot_load32(ctx.gpr[2] + static_cast<std::uint32_t>(0)));
    ctx.set_gpr(25, rt.memory().aot_load32(ctx.gpr[25] + static_cast<std::uint32_t>(296)));
    jump_target = ctx.gpr[25];
    ctx.set_gpr(31, 0x0883FCECu);
    ctx.set_gpr(4, ctx.gpr[2] + 0u);
    ctx.pc = jump_target;
    if (rt.invoke_chained_call(ctx, &aot_mem) && ctx.pc == 0x0883FCECu) goto L_0883FCEC;
    return;
L_0883FCEC:
    ctx.set_gpr(3, 1u << 16u);
    ctx.set_gpr(3, ctx.gpr[16] + ctx.gpr[3]);
    ctx.set_gpr(4, ctx.gpr[16] + static_cast<std::uint32_t>(8288));
    rt.memory().aot_store8(ctx.gpr[3] + static_cast<std::uint32_t>(-24212), static_cast<std::uint8_t>(ctx.gpr[2]));
    ctx.set_gpr(31, 0x0883FD04u);
    ctx.set_gpr(4, ctx.gpr[4] + static_cast<std::uint32_t>(32760));
    goto L_0883D3CC;
L_0883FD04:
    ctx.set_gpr(25, rt.memory().aot_load32(ctx.gpr[2] + static_cast<std::uint32_t>(0)));
    ctx.set_gpr(25, rt.memory().aot_load32(ctx.gpr[25] + static_cast<std::uint32_t>(928)));
    jump_target = ctx.gpr[25];
    ctx.set_gpr(31, 0x0883FD14u);
    ctx.set_gpr(4, ctx.gpr[2] + 0u);
    ctx.pc = jump_target;
    if (rt.invoke_chained_call(ctx, &aot_mem) && ctx.pc == 0x0883FD14u) goto L_0883FD14;
    return;
L_0883FD14:
    ctx.set_gpr(3, 1u << 16u);
    ctx.set_gpr(3, ctx.gpr[16] + ctx.gpr[3]);
    ctx.set_gpr(4, ctx.gpr[16] + static_cast<std::uint32_t>(8288));
    rt.memory().aot_store8(ctx.gpr[3] + static_cast<std::uint32_t>(-24213), static_cast<std::uint8_t>(ctx.gpr[2]));
    ctx.set_gpr(31, 0x0883FD2Cu);
    ctx.set_gpr(4, ctx.gpr[4] + static_cast<std::uint32_t>(32760));
    goto L_0883D3CC;
L_0883FD2C:
    ctx.set_gpr(25, rt.memory().aot_load32(ctx.gpr[2] + static_cast<std::uint32_t>(0)));
    ctx.set_gpr(4, ctx.gpr[2] + 0u);
    ctx.set_gpr(25, rt.memory().aot_load32(ctx.gpr[25] + static_cast<std::uint32_t>(884)));
    jump_target = ctx.gpr[25];
    ctx.set_gpr(31, 0x0883FD40u);
    ctx.set_gpr(5, 0u + static_cast<std::uint32_t>(4));
    ctx.pc = jump_target;
    if (rt.invoke_chained_call(ctx, &aot_mem) && ctx.pc == 0x0883FD40u) goto L_0883FD40;
    return;
L_0883FD40:
    ctx.set_gpr(4, ctx.gpr[16] + static_cast<std::uint32_t>(8288));
    ctx.set_gpr(31, 0x0883FD4Cu);
    ctx.set_gpr(4, ctx.gpr[4] + static_cast<std::uint32_t>(32760));
    goto L_0883D3CC;
L_0883FD4C:
    ctx.set_gpr(25, rt.memory().aot_load32(ctx.gpr[2] + static_cast<std::uint32_t>(0)));
    ctx.set_gpr(3, 15820u << 16u);
    ctx.set_gpr(3, ctx.gpr[3] | 52429u);
    ctx.set_gpr(25, rt.memory().aot_load32(ctx.gpr[25] + static_cast<std::uint32_t>(892)));
    ctx.fpr[12] = std::bit_cast<float>(ctx.gpr[3]);
    jump_target = ctx.gpr[25];
    ctx.set_gpr(31, 0x0883FD68u);
    ctx.set_gpr(4, ctx.gpr[2] + 0u);
    ctx.pc = jump_target;
    if (rt.invoke_chained_call(ctx, &aot_mem) && ctx.pc == 0x0883FD68u) goto L_0883FD68;
    return;
L_0883FD68:
    ctx.set_gpr(4, ctx.gpr[16] + static_cast<std::uint32_t>(8288));
    ctx.set_gpr(31, 0x0883FD74u);
    ctx.set_gpr(4, ctx.gpr[4] + static_cast<std::uint32_t>(32760));
    goto L_0883D3CC;
L_0883FD74:
    ctx.set_gpr(25, rt.memory().aot_load32(ctx.gpr[2] + static_cast<std::uint32_t>(0)));
    ctx.set_gpr(4, ctx.gpr[2] + 0u);
    ctx.set_gpr(25, rt.memory().aot_load32(ctx.gpr[25] + static_cast<std::uint32_t>(876)));
    jump_target = ctx.gpr[25];
    ctx.set_gpr(31, 0x0883FD88u);
    ctx.set_gpr(5, 0u + static_cast<std::uint32_t>(1));
    ctx.pc = jump_target;
    if (rt.invoke_chained_call(ctx, &aot_mem) && ctx.pc == 0x0883FD88u) goto L_0883FD88;
    return;
L_0883FD88:
    ctx.set_gpr(4, ctx.gpr[16] + static_cast<std::uint32_t>(8288));
    ctx.set_gpr(31, 0x0883FD94u);
    ctx.set_gpr(4, ctx.gpr[4] + static_cast<std::uint32_t>(32760));
    goto L_0883D3CC;
L_0883FD94:
    ctx.set_gpr(25, rt.memory().aot_load32(ctx.gpr[2] + static_cast<std::uint32_t>(0)));
    ctx.set_gpr(4, ctx.gpr[2] + 0u);
    ctx.set_gpr(25, rt.memory().aot_load32(ctx.gpr[25] + static_cast<std::uint32_t>(940)));
    jump_target = ctx.gpr[25];
    ctx.set_gpr(31, 0x0883FDA8u);
    ctx.set_gpr(5, 0u + 0u);
    ctx.pc = jump_target;
    if (rt.invoke_chained_call(ctx, &aot_mem) && ctx.pc == 0x0883FDA8u) goto L_0883FDA8;
    return;
L_0883FDA8:
    ctx.set_gpr(4, ctx.gpr[16] + static_cast<std::uint32_t>(8288));
    ctx.set_gpr(31, 0x0883FDB4u);
    ctx.set_gpr(4, ctx.gpr[4] + static_cast<std::uint32_t>(32760));
    goto L_0883D3CC;
L_0883FDB4:
    ctx.set_gpr(25, rt.memory().aot_load32(ctx.gpr[2] + static_cast<std::uint32_t>(0)));
    ctx.set_gpr(4, ctx.gpr[2] + 0u);
    ctx.set_gpr(5, 0u + 0u);
    ctx.set_gpr(25, rt.memory().aot_load32(ctx.gpr[25] + static_cast<std::uint32_t>(460)));
    jump_target = ctx.gpr[25];
    ctx.set_gpr(31, 0x0883FDCCu);
    ctx.set_gpr(6, 0u + static_cast<std::uint32_t>(1));
    ctx.pc = jump_target;
    if (rt.invoke_chained_call(ctx, &aot_mem) && ctx.pc == 0x0883FDCCu) goto L_0883FDCC;
    return;
L_0883FDCC:
    ctx.set_gpr(31, rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(12)));
    ctx.set_gpr(16, rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(8)));
    jump_target = ctx.gpr[31];
    ctx.set_gpr(29, ctx.gpr[29] + static_cast<std::uint32_t>(16));
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_0883FDDC:
    jump_target = ctx.gpr[31];
    // nop
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_0883FDE4:
    jump_target = ctx.gpr[31];
    ctx.set_gpr(2, 0u + 0u);
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_0883FDEC:
    jump_target = ctx.gpr[31];
    ctx.set_gpr(2, 0u + 0u);
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_0883FDF4:
    ctx.set_gpr(29, ctx.gpr[29] + static_cast<std::uint32_t>(-16));
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(12), ctx.gpr[31]);
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(8), ctx.gpr[16]);
    ctx.set_gpr(16, ctx.gpr[4] + 0u);
    ctx.set_gpr(4, ctx.gpr[16] + static_cast<std::uint32_t>(8288));
    ctx.set_gpr(31, 0x0883FE10u);
    ctx.set_gpr(4, ctx.gpr[4] + static_cast<std::uint32_t>(32760));
    goto L_0883D3CC;
L_0883FE10:
    ctx.set_gpr(25, rt.memory().aot_load32(ctx.gpr[2] + static_cast<std::uint32_t>(0)));
    ctx.set_gpr(3, 1u << 16u);
    ctx.set_gpr(3, ctx.gpr[16] + ctx.gpr[3]);
    ctx.set_gpr(5, rt.memory().aot_load32(ctx.gpr[3] + static_cast<std::uint32_t>(-24224)));
    ctx.set_gpr(25, rt.memory().aot_load32(ctx.gpr[25] + static_cast<std::uint32_t>(884)));
    jump_target = ctx.gpr[25];
    ctx.set_gpr(31, 0x0883FE2Cu);
    ctx.set_gpr(4, ctx.gpr[2] + 0u);
    ctx.pc = jump_target;
    if (rt.invoke_chained_call(ctx, &aot_mem) && ctx.pc == 0x0883FE2Cu) goto L_0883FE2C;
    return;
L_0883FE2C:
    ctx.set_gpr(4, ctx.gpr[16] + static_cast<std::uint32_t>(8288));
    ctx.set_gpr(31, 0x0883FE38u);
    ctx.set_gpr(4, ctx.gpr[4] + static_cast<std::uint32_t>(32760));
    goto L_0883D3CC;
L_0883FE38:
    ctx.set_gpr(25, rt.memory().aot_load32(ctx.gpr[2] + static_cast<std::uint32_t>(0)));
    ctx.set_gpr(4, ctx.gpr[2] + 0u);
    ctx.set_gpr(2, 1u << 16u);
    ctx.set_gpr(2, ctx.gpr[16] + ctx.gpr[2]);
    ctx.set_gpr(25, rt.memory().aot_load32(ctx.gpr[25] + static_cast<std::uint32_t>(892)));
    jump_target = ctx.gpr[25];
    ctx.set_gpr(31, 0x0883FE54u);
    ctx.fpr[12] = std::bit_cast<float>(rt.memory().aot_load32(ctx.gpr[2] + static_cast<std::uint32_t>(-24220)));
    ctx.pc = jump_target;
    if (rt.invoke_chained_call(ctx, &aot_mem) && ctx.pc == 0x0883FE54u) goto L_0883FE54;
    return;
L_0883FE54:
    ctx.set_gpr(4, ctx.gpr[16] + static_cast<std::uint32_t>(8288));
    ctx.set_gpr(31, 0x0883FE60u);
    ctx.set_gpr(4, ctx.gpr[4] + static_cast<std::uint32_t>(32760));
    goto L_0883D3CC;
L_0883FE60:
    ctx.set_gpr(25, rt.memory().aot_load32(ctx.gpr[2] + static_cast<std::uint32_t>(0)));
    ctx.set_gpr(4, ctx.gpr[2] + 0u);
    ctx.set_gpr(2, 1u << 16u);
    ctx.set_gpr(2, ctx.gpr[16] + ctx.gpr[2]);
    ctx.set_gpr(25, rt.memory().aot_load32(ctx.gpr[25] + static_cast<std::uint32_t>(876)));
    jump_target = ctx.gpr[25];
    ctx.set_gpr(31, 0x0883FE7Cu);
    ctx.set_gpr(5, rt.memory().aot_load8(ctx.gpr[2] + static_cast<std::uint32_t>(-24216)));
    ctx.pc = jump_target;
    if (rt.invoke_chained_call(ctx, &aot_mem) && ctx.pc == 0x0883FE7Cu) goto L_0883FE7C;
    return;
L_0883FE7C:
    ctx.set_gpr(4, ctx.gpr[16] + static_cast<std::uint32_t>(8288));
    ctx.set_gpr(31, 0x0883FE88u);
    ctx.set_gpr(4, ctx.gpr[4] + static_cast<std::uint32_t>(32760));
    goto L_0883D3CC;
L_0883FE88:
    ctx.set_gpr(25, rt.memory().aot_load32(ctx.gpr[2] + static_cast<std::uint32_t>(0)));
    ctx.set_gpr(4, ctx.gpr[2] + 0u);
    ctx.set_gpr(2, 1u << 16u);
    ctx.set_gpr(2, ctx.gpr[16] + ctx.gpr[2]);
    ctx.set_gpr(25, rt.memory().aot_load32(ctx.gpr[25] + static_cast<std::uint32_t>(940)));
    jump_target = ctx.gpr[25];
    ctx.set_gpr(31, 0x0883FEA4u);
    ctx.set_gpr(5, rt.memory().aot_load8(ctx.gpr[2] + static_cast<std::uint32_t>(-24215)));
    ctx.pc = jump_target;
    if (rt.invoke_chained_call(ctx, &aot_mem) && ctx.pc == 0x0883FEA4u) goto L_0883FEA4;
    return;
L_0883FEA4:
    ctx.set_gpr(4, ctx.gpr[16] + static_cast<std::uint32_t>(8288));
    ctx.set_gpr(31, 0x0883FEB0u);
    ctx.set_gpr(4, ctx.gpr[4] + static_cast<std::uint32_t>(32760));
    goto L_0883D3CC;
L_0883FEB0:
    ctx.set_gpr(25, rt.memory().aot_load32(ctx.gpr[2] + static_cast<std::uint32_t>(0)));
    ctx.set_gpr(4, ctx.gpr[2] + 0u);
    ctx.set_gpr(2, 1u << 16u);
    ctx.set_gpr(2, ctx.gpr[16] + ctx.gpr[2]);
    ctx.set_gpr(6, rt.memory().aot_load8(ctx.gpr[2] + static_cast<std::uint32_t>(-24214)));
    ctx.set_gpr(25, rt.memory().aot_load32(ctx.gpr[25] + static_cast<std::uint32_t>(460)));
    jump_target = ctx.gpr[25];
    ctx.set_gpr(31, 0x0883FED0u);
    ctx.set_gpr(5, 0u + 0u);
    ctx.pc = jump_target;
    if (rt.invoke_chained_call(ctx, &aot_mem) && ctx.pc == 0x0883FED0u) goto L_0883FED0;
    return;
L_0883FED0:
    ctx.set_gpr(4, ctx.gpr[16] + static_cast<std::uint32_t>(8288));
    ctx.set_gpr(31, 0x0883FEDCu);
    ctx.set_gpr(4, ctx.gpr[4] + static_cast<std::uint32_t>(32760));
    goto L_0883D3CC;
L_0883FEDC:
    ctx.set_gpr(25, rt.memory().aot_load32(ctx.gpr[2] + static_cast<std::uint32_t>(0)));
    ctx.set_gpr(4, ctx.gpr[2] + 0u);
    ctx.set_gpr(2, 1u << 16u);
    ctx.set_gpr(2, ctx.gpr[16] + ctx.gpr[2]);
    ctx.set_gpr(25, rt.memory().aot_load32(ctx.gpr[25] + static_cast<std::uint32_t>(292)));
    jump_target = ctx.gpr[25];
    ctx.set_gpr(31, 0x0883FEF8u);
    ctx.set_gpr(5, rt.memory().aot_load8(ctx.gpr[2] + static_cast<std::uint32_t>(-24212)));
    ctx.pc = jump_target;
    if (rt.invoke_chained_call(ctx, &aot_mem) && ctx.pc == 0x0883FEF8u) goto L_0883FEF8;
    return;
L_0883FEF8:
    ctx.set_gpr(4, ctx.gpr[16] + static_cast<std::uint32_t>(8288));
    ctx.set_gpr(31, 0x0883FF04u);
    ctx.set_gpr(4, ctx.gpr[4] + static_cast<std::uint32_t>(32760));
    goto L_0883D3CC;
L_0883FF04:
    ctx.set_gpr(25, rt.memory().aot_load32(ctx.gpr[2] + static_cast<std::uint32_t>(0)));
    ctx.set_gpr(3, 1u << 16u);
    ctx.set_gpr(3, ctx.gpr[16] + ctx.gpr[3]);
    ctx.set_gpr(5, rt.memory().aot_load8(ctx.gpr[3] + static_cast<std::uint32_t>(-24213)));
    ctx.set_gpr(25, rt.memory().aot_load32(ctx.gpr[25] + static_cast<std::uint32_t>(924)));
    jump_target = ctx.gpr[25];
    ctx.set_gpr(31, 0x0883FF20u);
    ctx.set_gpr(4, ctx.gpr[2] + 0u);
    ctx.pc = jump_target;
    if (rt.invoke_chained_call(ctx, &aot_mem) && ctx.pc == 0x0883FF20u) goto L_0883FF20;
    return;
L_0883FF20:
    ctx.set_gpr(31, rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(12)));
    ctx.set_gpr(16, rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(8)));
    jump_target = ctx.gpr[31];
    ctx.set_gpr(29, ctx.gpr[29] + static_cast<std::uint32_t>(16));
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_0883FF30:
    ctx.set_gpr(4, ctx.gpr[4] + static_cast<std::uint32_t>(8576));
    ctx.set_gpr(4, ctx.gpr[4] + static_cast<std::uint32_t>(32760));
    goto L_0883E9D8;
L_0883FF3C:
    ctx.set_gpr(4, ctx.gpr[4] + static_cast<std::uint32_t>(8584));
    ctx.set_gpr(4, ctx.gpr[4] + static_cast<std::uint32_t>(32760));
    goto L_0883FF48;
L_0883FF48:
    ctx.fpr[0] = std::bit_cast<float>(rt.memory().aot_load32(ctx.gpr[5] + static_cast<std::uint32_t>(0)));
    ctx.set_gpr(2, ctx.gpr[4] + 0u);
    rt.memory().aot_store32(ctx.gpr[4] + static_cast<std::uint32_t>(0), std::bit_cast<std::uint32_t>(ctx.fpr[0]));
    ctx.fpr[0] = std::bit_cast<float>(rt.memory().aot_load32(ctx.gpr[5] + static_cast<std::uint32_t>(4)));
    rt.memory().aot_store32(ctx.gpr[4] + static_cast<std::uint32_t>(4), std::bit_cast<std::uint32_t>(ctx.fpr[0]));
    ctx.fpr[0] = std::bit_cast<float>(rt.memory().aot_load32(ctx.gpr[5] + static_cast<std::uint32_t>(8)));
    rt.memory().aot_store32(ctx.gpr[4] + static_cast<std::uint32_t>(8), std::bit_cast<std::uint32_t>(ctx.fpr[0]));
    ctx.fpr[0] = std::bit_cast<float>(rt.memory().aot_load32(ctx.gpr[5] + static_cast<std::uint32_t>(12)));
    jump_target = ctx.gpr[31];
    rt.memory().aot_store32(ctx.gpr[4] + static_cast<std::uint32_t>(12), std::bit_cast<std::uint32_t>(ctx.fpr[0]));
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_0883FF70:
    ctx.set_gpr(29, ctx.gpr[29] + static_cast<std::uint32_t>(-16));
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(12), ctx.gpr[31]);
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(8), ctx.gpr[18]);
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(4), ctx.gpr[17]);
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(0), ctx.gpr[16]);
    ctx.set_gpr(18, ctx.gpr[4] + 0u);
    ctx.set_gpr(17, 0u + 0u);
    ctx.set_gpr(16, 0u + 0u);
    ctx.set_gpr(2, 0u + static_cast<std::uint32_t>(2));
    goto L_0883FF94;
L_0883FF94:
    { const bool branch_taken = ctx.gpr[17] == ctx.gpr[2];
    // nop
      if (branch_taken) {
          goto L_0883FFF8;
      }
      goto L_0883FF9C;
    }
L_0883FF9C:
    ctx.set_gpr(2, 0u + static_cast<std::uint32_t>(1));
    { const bool branch_taken = ctx.gpr[17] == ctx.gpr[2];
    // nop
      if (branch_taken) {
          goto L_0883FFD8;
      }
      goto L_0883FFA8;
    }
L_0883FFA8:
    { const bool branch_taken = ctx.gpr[17] == 0u;
    // nop
      if (branch_taken) {
          goto L_0883FFB8;
      }
      goto L_0883FFB0;
    }
L_0883FFB0:
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          (void)rt.invoke_chained_direct<&recomp_unit_0015_entry, 15u, 8u, 0x0884004Cu>(ctx, &aot_mem); return;
      }
      goto L_0883FFB8;
    }
L_0883FFB8:
    ctx.set_gpr(31, 0x0883FFC0u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0017_entry, 17u, 187u, 0x08848C54u>(ctx, &aot_mem) && ctx.pc == 0x0883FFC0u) goto L_0883FFC0;
    return;
L_0883FFC0:
    ctx.set_gpr(31, 0x0883FFC8u);
    ctx.set_gpr(4, ctx.gpr[2] + 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0170_entry, 170u, 1038u, 0x08AAFF54u>(ctx, &aot_mem) && ctx.pc == 0x0883FFC8u) goto L_0883FFC8;
    return;
L_0883FFC8:
    { const bool branch_taken = ctx.gpr[2] == 0u;
    // nop
      if (branch_taken) {
          (void)rt.invoke_chained_direct<&recomp_unit_0015_entry, 15u, 8u, 0x0884004Cu>(ctx, &aot_mem); return;
      }
      goto L_0883FFD0;
    }
L_0883FFD0:
    { const bool branch_taken = 0u == 0u;
    ctx.set_gpr(17, ctx.gpr[17] + static_cast<std::uint32_t>(1));
      if (branch_taken) {
          (void)rt.invoke_chained_direct<&recomp_unit_0015_entry, 15u, 8u, 0x0884004Cu>(ctx, &aot_mem); return;
      }
      goto L_0883FFD8;
    }
L_0883FFD8:
    ctx.set_gpr(31, 0x0883FFE0u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0017_entry, 17u, 187u, 0x08848C54u>(ctx, &aot_mem) && ctx.pc == 0x0883FFE0u) goto L_0883FFE0;
    return;
L_0883FFE0:
    ctx.set_gpr(4, ctx.gpr[2] + 0u);
    ctx.set_gpr(5, 0u + 0u);
    ctx.set_gpr(31, 0x0883FFF0u);
    ctx.set_gpr(6, 0u + static_cast<std::uint32_t>(7));
    if (rt.invoke_chained_direct<&recomp_unit_0170_entry, 170u, 1050u, 0x08AAFFF0u>(ctx, &aot_mem) && ctx.pc == 0x0883FFF0u) goto L_0883FFF0;
    return;
L_0883FFF0:
    { const bool branch_taken = 0u == 0u;
    ctx.set_gpr(17, ctx.gpr[17] + static_cast<std::uint32_t>(1));
      if (branch_taken) {
          (void)rt.invoke_chained_direct<&recomp_unit_0015_entry, 15u, 8u, 0x0884004Cu>(ctx, &aot_mem); return;
      }
      goto L_0883FFF8;
    }
L_0883FFF8:
    ctx.set_gpr(31, 0x08840000u);
    // nop
    (void)rt.invoke_chained_direct<&recomp_unit_0017_entry, 17u, 187u, 0x08848C54u>(ctx, &aot_mem);
    return;
}

void recomp_unit_0014(Runtime &rt, AllegrexContext &ctx) {
    auto aot_mem = rt.memory().aot_fast_view();
    recomp_unit_0014_entry(rt, ctx, 0u, aot_mem);
}

void register_generated_unit_14(Runtime &runtime) {
    runtime.register_generated_unit(14u, 0x0883C000u, 16384u, &recomp_unit_0014, &recomp_unit_0014_entry);
    runtime.register_function(0x0883C004u, &recomp_unit_0014, "recomp_unit_0014");
    runtime.register_function(0x0883C014u, &recomp_unit_0014, "recomp_unit_0014");
    runtime.register_function(0x0883C020u, &recomp_unit_0014, "recomp_unit_0014");
    runtime.register_function(0x0883C044u, &recomp_unit_0014, "recomp_unit_0014");
    runtime.register_function(0x0883C050u, &recomp_unit_0014, "recomp_unit_0014");
    runtime.register_function(0x0883C058u, &recomp_unit_0014, "recomp_unit_0014");
    runtime.register_function(0x0883C068u, &recomp_unit_0014, "recomp_unit_0014");
    runtime.register_function(0x0883C070u, &recomp_unit_0014, "recomp_unit_0014");
    runtime.register_function(0x0883C088u, &recomp_unit_0014, "recomp_unit_0014");
    runtime.register_function(0x0883C090u, &recomp_unit_0014, "recomp_unit_0014");
    runtime.register_function(0x0883C098u, &recomp_unit_0014, "recomp_unit_0014");
    runtime.register_function(0x0883C0A8u, &recomp_unit_0014, "recomp_unit_0014");
    runtime.register_function(0x0883C128u, &recomp_unit_0014, "recomp_unit_0014");
    runtime.register_function(0x0883C14Cu, &recomp_unit_0014, "recomp_unit_0014");
    runtime.register_function(0x0883C168u, &recomp_unit_0014, "recomp_unit_0014");
    runtime.register_function(0x0883C170u, &recomp_unit_0014, "recomp_unit_0014");
    runtime.register_function(0x0883C180u, &recomp_unit_0014, "recomp_unit_0014");
    runtime.register_function(0x0883C200u, &recomp_unit_0014, "recomp_unit_0014");
    runtime.register_function(0x0883C224u, &recomp_unit_0014, "recomp_unit_0014");
    runtime.register_function(0x0883C244u, &recomp_unit_0014, "recomp_unit_0014");
    runtime.register_function(0x0883C254u, &recomp_unit_0014, "recomp_unit_0014");
    runtime.register_function(0x0883C260u, &recomp_unit_0014, "recomp_unit_0014");
    runtime.register_function(0x0883C268u, &recomp_unit_0014, "recomp_unit_0014");
    runtime.register_function(0x0883C270u, &recomp_unit_0014, "recomp_unit_0014");
    runtime.register_function(0x0883C290u, &recomp_unit_0014, "recomp_unit_0014");
    runtime.register_function(0x0883C2A0u, &recomp_unit_0014, "recomp_unit_0014");
    runtime.register_function(0x0883C2C8u, &recomp_unit_0014, "recomp_unit_0014");
    runtime.register_function(0x0883C2ECu, &recomp_unit_0014, "recomp_unit_0014");
    runtime.register_function(0x0883C368u, &recomp_unit_0014, "recomp_unit_0014");
    runtime.register_function(0x0883C394u, &recomp_unit_0014, "recomp_unit_0014");
    runtime.register_function(0x0883C3C8u, &recomp_unit_0014, "recomp_unit_0014");
    runtime.register_function(0x0883C444u, &recomp_unit_0014, "recomp_unit_0014");
    runtime.register_function(0x0883C468u, &recomp_unit_0014, "recomp_unit_0014");
    runtime.register_function(0x0883C480u, &recomp_unit_0014, "recomp_unit_0014");
    runtime.register_function(0x0883C4ACu, &recomp_unit_0014, "recomp_unit_0014");
    runtime.register_function(0x0883C528u, &recomp_unit_0014, "recomp_unit_0014");
    runtime.register_function(0x0883C548u, &recomp_unit_0014, "recomp_unit_0014");
    runtime.register_function(0x0883C558u, &recomp_unit_0014, "recomp_unit_0014");
    runtime.register_function(0x0883C570u, &recomp_unit_0014, "recomp_unit_0014");
    runtime.register_function(0x0883C584u, &recomp_unit_0014, "recomp_unit_0014");
    runtime.register_function(0x0883C5ACu, &recomp_unit_0014, "recomp_unit_0014");
    runtime.register_function(0x0883C628u, &recomp_unit_0014, "recomp_unit_0014");
    runtime.register_function(0x0883C64Cu, &recomp_unit_0014, "recomp_unit_0014");
    runtime.register_function(0x0883C664u, &recomp_unit_0014, "recomp_unit_0014");
    runtime.register_function(0x0883C690u, &recomp_unit_0014, "recomp_unit_0014");
    runtime.register_function(0x0883C70Cu, &recomp_unit_0014, "recomp_unit_0014");
    runtime.register_function(0x0883C72Cu, &recomp_unit_0014, "recomp_unit_0014");
    runtime.register_function(0x0883C73Cu, &recomp_unit_0014, "recomp_unit_0014");
    runtime.register_function(0x0883C758u, &recomp_unit_0014, "recomp_unit_0014");
    runtime.register_function(0x0883C7D4u, &recomp_unit_0014, "recomp_unit_0014");
    runtime.register_function(0x0883C7F8u, &recomp_unit_0014, "recomp_unit_0014");
    runtime.register_function(0x0883C808u, &recomp_unit_0014, "recomp_unit_0014");
    runtime.register_function(0x0883C81Cu, &recomp_unit_0014, "recomp_unit_0014");
    runtime.register_function(0x0883C830u, &recomp_unit_0014, "recomp_unit_0014");
    runtime.register_function(0x0883C83Cu, &recomp_unit_0014, "recomp_unit_0014");
    runtime.register_function(0x0883C844u, &recomp_unit_0014, "recomp_unit_0014");
    runtime.register_function(0x0883C858u, &recomp_unit_0014, "recomp_unit_0014");
    runtime.register_function(0x0883C864u, &recomp_unit_0014, "recomp_unit_0014");
    runtime.register_function(0x0883C86Cu, &recomp_unit_0014, "recomp_unit_0014");
    runtime.register_function(0x0883C880u, &recomp_unit_0014, "recomp_unit_0014");
    runtime.register_function(0x0883C88Cu, &recomp_unit_0014, "recomp_unit_0014");
    runtime.register_function(0x0883C8A4u, &recomp_unit_0014, "recomp_unit_0014");
    runtime.register_function(0x0883C8A8u, &recomp_unit_0014, "recomp_unit_0014");
    runtime.register_function(0x0883C8C8u, &recomp_unit_0014, "recomp_unit_0014");
    runtime.register_function(0x0883C8D4u, &recomp_unit_0014, "recomp_unit_0014");
    runtime.register_function(0x0883C8E4u, &recomp_unit_0014, "recomp_unit_0014");
    runtime.register_function(0x0883C930u, &recomp_unit_0014, "recomp_unit_0014");
    runtime.register_function(0x0883C93Cu, &recomp_unit_0014, "recomp_unit_0014");
    runtime.register_function(0x0883C970u, &recomp_unit_0014, "recomp_unit_0014");
    runtime.register_function(0x0883C978u, &recomp_unit_0014, "recomp_unit_0014");
    runtime.register_function(0x0883C988u, &recomp_unit_0014, "recomp_unit_0014");
    runtime.register_function(0x0883C9CCu, &recomp_unit_0014, "recomp_unit_0014");
    runtime.register_function(0x0883C9D4u, &recomp_unit_0014, "recomp_unit_0014");
    runtime.register_function(0x0883C9F0u, &recomp_unit_0014, "recomp_unit_0014");
    runtime.register_function(0x0883CA00u, &recomp_unit_0014, "recomp_unit_0014");
    runtime.register_function(0x0883CA18u, &recomp_unit_0014, "recomp_unit_0014");
    runtime.register_function(0x0883CA28u, &recomp_unit_0014, "recomp_unit_0014");
    runtime.register_function(0x0883CAA4u, &recomp_unit_0014, "recomp_unit_0014");
    runtime.register_function(0x0883CAC4u, &recomp_unit_0014, "recomp_unit_0014");
    runtime.register_function(0x0883CAD4u, &recomp_unit_0014, "recomp_unit_0014");
    runtime.register_function(0x0883CAE4u, &recomp_unit_0014, "recomp_unit_0014");
    runtime.register_function(0x0883CAFCu, &recomp_unit_0014, "recomp_unit_0014");
    runtime.register_function(0x0883CB0Cu, &recomp_unit_0014, "recomp_unit_0014");
    runtime.register_function(0x0883CB28u, &recomp_unit_0014, "recomp_unit_0014");
    runtime.register_function(0x0883CB3Cu, &recomp_unit_0014, "recomp_unit_0014");
    runtime.register_function(0x0883CB44u, &recomp_unit_0014, "recomp_unit_0014");
    runtime.register_function(0x0883CB4Cu, &recomp_unit_0014, "recomp_unit_0014");
    runtime.register_function(0x0883CB5Cu, &recomp_unit_0014, "recomp_unit_0014");
    runtime.register_function(0x0883CB68u, &recomp_unit_0014, "recomp_unit_0014");
    runtime.register_function(0x0883CB74u, &recomp_unit_0014, "recomp_unit_0014");
    runtime.register_function(0x0883CB7Cu, &recomp_unit_0014, "recomp_unit_0014");
    runtime.register_function(0x0883CB84u, &recomp_unit_0014, "recomp_unit_0014");
    runtime.register_function(0x0883CB88u, &recomp_unit_0014, "recomp_unit_0014");
    runtime.register_function(0x0883CBA4u, &recomp_unit_0014, "recomp_unit_0014");
    runtime.register_function(0x0883CBB8u, &recomp_unit_0014, "recomp_unit_0014");
    runtime.register_function(0x0883CBBCu, &recomp_unit_0014, "recomp_unit_0014");
    runtime.register_function(0x0883CBC4u, &recomp_unit_0014, "recomp_unit_0014");
    runtime.register_function(0x0883CBCCu, &recomp_unit_0014, "recomp_unit_0014");
    runtime.register_function(0x0883CBDCu, &recomp_unit_0014, "recomp_unit_0014");
    runtime.register_function(0x0883CBF0u, &recomp_unit_0014, "recomp_unit_0014");
    runtime.register_function(0x0883CC00u, &recomp_unit_0014, "recomp_unit_0014");
    runtime.register_function(0x0883CC10u, &recomp_unit_0014, "recomp_unit_0014");
    runtime.register_function(0x0883CC20u, &recomp_unit_0014, "recomp_unit_0014");
    runtime.register_function(0x0883CC30u, &recomp_unit_0014, "recomp_unit_0014");
    runtime.register_function(0x0883CC40u, &recomp_unit_0014, "recomp_unit_0014");
    runtime.register_function(0x0883CC54u, &recomp_unit_0014, "recomp_unit_0014");
    runtime.register_function(0x0883CC64u, &recomp_unit_0014, "recomp_unit_0014");
    runtime.register_function(0x0883CC74u, &recomp_unit_0014, "recomp_unit_0014");
    runtime.register_function(0x0883CC84u, &recomp_unit_0014, "recomp_unit_0014");
    runtime.register_function(0x0883CC98u, &recomp_unit_0014, "recomp_unit_0014");
    runtime.register_function(0x0883CCA8u, &recomp_unit_0014, "recomp_unit_0014");
    runtime.register_function(0x0883CCB0u, &recomp_unit_0014, "recomp_unit_0014");
    runtime.register_function(0x0883CCB8u, &recomp_unit_0014, "recomp_unit_0014");
    runtime.register_function(0x0883CCC4u, &recomp_unit_0014, "recomp_unit_0014");
    runtime.register_function(0x0883CCCCu, &recomp_unit_0014, "recomp_unit_0014");
    runtime.register_function(0x0883CCD8u, &recomp_unit_0014, "recomp_unit_0014");
    runtime.register_function(0x0883CCE4u, &recomp_unit_0014, "recomp_unit_0014");
    runtime.register_function(0x0883CCECu, &recomp_unit_0014, "recomp_unit_0014");
    runtime.register_function(0x0883CCF8u, &recomp_unit_0014, "recomp_unit_0014");
    runtime.register_function(0x0883CD04u, &recomp_unit_0014, "recomp_unit_0014");
    runtime.register_function(0x0883CD0Cu, &recomp_unit_0014, "recomp_unit_0014");
    runtime.register_function(0x0883CD14u, &recomp_unit_0014, "recomp_unit_0014");
    runtime.register_function(0x0883CD1Cu, &recomp_unit_0014, "recomp_unit_0014");
    runtime.register_function(0x0883CD24u, &recomp_unit_0014, "recomp_unit_0014");
    runtime.register_function(0x0883CD2Cu, &recomp_unit_0014, "recomp_unit_0014");
    runtime.register_function(0x0883CD34u, &recomp_unit_0014, "recomp_unit_0014");
    runtime.register_function(0x0883CD40u, &recomp_unit_0014, "recomp_unit_0014");
    runtime.register_function(0x0883CD48u, &recomp_unit_0014, "recomp_unit_0014");
    runtime.register_function(0x0883CD50u, &recomp_unit_0014, "recomp_unit_0014");
    runtime.register_function(0x0883CD58u, &recomp_unit_0014, "recomp_unit_0014");
    runtime.register_function(0x0883CD64u, &recomp_unit_0014, "recomp_unit_0014");
    runtime.register_function(0x0883CD6Cu, &recomp_unit_0014, "recomp_unit_0014");
    runtime.register_function(0x0883CD74u, &recomp_unit_0014, "recomp_unit_0014");
    runtime.register_function(0x0883CD7Cu, &recomp_unit_0014, "recomp_unit_0014");
    runtime.register_function(0x0883CD88u, &recomp_unit_0014, "recomp_unit_0014");
    runtime.register_function(0x0883CD90u, &recomp_unit_0014, "recomp_unit_0014");
    runtime.register_function(0x0883CD98u, &recomp_unit_0014, "recomp_unit_0014");
    runtime.register_function(0x0883CDA0u, &recomp_unit_0014, "recomp_unit_0014");
    runtime.register_function(0x0883CDACu, &recomp_unit_0014, "recomp_unit_0014");
    runtime.register_function(0x0883CDB4u, &recomp_unit_0014, "recomp_unit_0014");
    runtime.register_function(0x0883CDC0u, &recomp_unit_0014, "recomp_unit_0014");
    runtime.register_function(0x0883CDC8u, &recomp_unit_0014, "recomp_unit_0014");
    runtime.register_function(0x0883CDD0u, &recomp_unit_0014, "recomp_unit_0014");
    runtime.register_function(0x0883CDD8u, &recomp_unit_0014, "recomp_unit_0014");
    runtime.register_function(0x0883CDF0u, &recomp_unit_0014, "recomp_unit_0014");
    runtime.register_function(0x0883CDF8u, &recomp_unit_0014, "recomp_unit_0014");
    runtime.register_function(0x0883CE00u, &recomp_unit_0014, "recomp_unit_0014");
    runtime.register_function(0x0883CE08u, &recomp_unit_0014, "recomp_unit_0014");
    runtime.register_function(0x0883CE10u, &recomp_unit_0014, "recomp_unit_0014");
    runtime.register_function(0x0883CE18u, &recomp_unit_0014, "recomp_unit_0014");
    runtime.register_function(0x0883CE20u, &recomp_unit_0014, "recomp_unit_0014");
    runtime.register_function(0x0883CE34u, &recomp_unit_0014, "recomp_unit_0014");
    runtime.register_function(0x0883CE48u, &recomp_unit_0014, "recomp_unit_0014");
    runtime.register_function(0x0883CE50u, &recomp_unit_0014, "recomp_unit_0014");
    runtime.register_function(0x0883CE58u, &recomp_unit_0014, "recomp_unit_0014");
    runtime.register_function(0x0883CE60u, &recomp_unit_0014, "recomp_unit_0014");
    runtime.register_function(0x0883CE78u, &recomp_unit_0014, "recomp_unit_0014");
    runtime.register_function(0x0883CE8Cu, &recomp_unit_0014, "recomp_unit_0014");
    runtime.register_function(0x0883CE98u, &recomp_unit_0014, "recomp_unit_0014");
    runtime.register_function(0x0883CEA4u, &recomp_unit_0014, "recomp_unit_0014");
    runtime.register_function(0x0883CEB0u, &recomp_unit_0014, "recomp_unit_0014");
    runtime.register_function(0x0883CEBCu, &recomp_unit_0014, "recomp_unit_0014");
    runtime.register_function(0x0883CEC8u, &recomp_unit_0014, "recomp_unit_0014");
    runtime.register_function(0x0883CED4u, &recomp_unit_0014, "recomp_unit_0014");
    runtime.register_function(0x0883CEE0u, &recomp_unit_0014, "recomp_unit_0014");
    runtime.register_function(0x0883CEECu, &recomp_unit_0014, "recomp_unit_0014");
    runtime.register_function(0x0883CEF0u, &recomp_unit_0014, "recomp_unit_0014");
    runtime.register_function(0x0883CEFCu, &recomp_unit_0014, "recomp_unit_0014");
    runtime.register_function(0x0883CF04u, &recomp_unit_0014, "recomp_unit_0014");
    runtime.register_function(0x0883CF18u, &recomp_unit_0014, "recomp_unit_0014");
    runtime.register_function(0x0883CF24u, &recomp_unit_0014, "recomp_unit_0014");
    runtime.register_function(0x0883CF28u, &recomp_unit_0014, "recomp_unit_0014");
    runtime.register_function(0x0883CF30u, &recomp_unit_0014, "recomp_unit_0014");
    runtime.register_function(0x0883CF40u, &recomp_unit_0014, "recomp_unit_0014");
    runtime.register_function(0x0883CF44u, &recomp_unit_0014, "recomp_unit_0014");
    runtime.register_function(0x0883CF4Cu, &recomp_unit_0014, "recomp_unit_0014");
    runtime.register_function(0x0883CF50u, &recomp_unit_0014, "recomp_unit_0014");
    runtime.register_function(0x0883CF58u, &recomp_unit_0014, "recomp_unit_0014");
    runtime.register_function(0x0883CF80u, &recomp_unit_0014, "recomp_unit_0014");
    runtime.register_function(0x0883CF98u, &recomp_unit_0014, "recomp_unit_0014");
    runtime.register_function(0x0883CFB4u, &recomp_unit_0014, "recomp_unit_0014");
    runtime.register_function(0x0883CFECu, &recomp_unit_0014, "recomp_unit_0014");
    runtime.register_function(0x0883D010u, &recomp_unit_0014, "recomp_unit_0014");
    runtime.register_function(0x0883D020u, &recomp_unit_0014, "recomp_unit_0014");
    runtime.register_function(0x0883D064u, &recomp_unit_0014, "recomp_unit_0014");
    runtime.register_function(0x0883D06Cu, &recomp_unit_0014, "recomp_unit_0014");
    runtime.register_function(0x0883D078u, &recomp_unit_0014, "recomp_unit_0014");
    runtime.register_function(0x0883D098u, &recomp_unit_0014, "recomp_unit_0014");
    runtime.register_function(0x0883D0A0u, &recomp_unit_0014, "recomp_unit_0014");
    runtime.register_function(0x0883D0A8u, &recomp_unit_0014, "recomp_unit_0014");
    runtime.register_function(0x0883D0B0u, &recomp_unit_0014, "recomp_unit_0014");
    runtime.register_function(0x0883D0DCu, &recomp_unit_0014, "recomp_unit_0014");
    runtime.register_function(0x0883D0E4u, &recomp_unit_0014, "recomp_unit_0014");
    runtime.register_function(0x0883D0ECu, &recomp_unit_0014, "recomp_unit_0014");
    runtime.register_function(0x0883D10Cu, &recomp_unit_0014, "recomp_unit_0014");
    runtime.register_function(0x0883D114u, &recomp_unit_0014, "recomp_unit_0014");
    runtime.register_function(0x0883D11Cu, &recomp_unit_0014, "recomp_unit_0014");
    runtime.register_function(0x0883D124u, &recomp_unit_0014, "recomp_unit_0014");
    runtime.register_function(0x0883D12Cu, &recomp_unit_0014, "recomp_unit_0014");
    runtime.register_function(0x0883D13Cu, &recomp_unit_0014, "recomp_unit_0014");
    runtime.register_function(0x0883D15Cu, &recomp_unit_0014, "recomp_unit_0014");
    runtime.register_function(0x0883D164u, &recomp_unit_0014, "recomp_unit_0014");
    runtime.register_function(0x0883D16Cu, &recomp_unit_0014, "recomp_unit_0014");
    runtime.register_function(0x0883D178u, &recomp_unit_0014, "recomp_unit_0014");
    runtime.register_function(0x0883D184u, &recomp_unit_0014, "recomp_unit_0014");
    runtime.register_function(0x0883D190u, &recomp_unit_0014, "recomp_unit_0014");
    runtime.register_function(0x0883D198u, &recomp_unit_0014, "recomp_unit_0014");
    runtime.register_function(0x0883D1A0u, &recomp_unit_0014, "recomp_unit_0014");
    runtime.register_function(0x0883D1A8u, &recomp_unit_0014, "recomp_unit_0014");
    runtime.register_function(0x0883D1B4u, &recomp_unit_0014, "recomp_unit_0014");
    runtime.register_function(0x0883D1C0u, &recomp_unit_0014, "recomp_unit_0014");
    runtime.register_function(0x0883D1C8u, &recomp_unit_0014, "recomp_unit_0014");
    runtime.register_function(0x0883D1D4u, &recomp_unit_0014, "recomp_unit_0014");
    runtime.register_function(0x0883D1DCu, &recomp_unit_0014, "recomp_unit_0014");
    runtime.register_function(0x0883D1E8u, &recomp_unit_0014, "recomp_unit_0014");
    runtime.register_function(0x0883D1F0u, &recomp_unit_0014, "recomp_unit_0014");
    runtime.register_function(0x0883D214u, &recomp_unit_0014, "recomp_unit_0014");
    runtime.register_function(0x0883D230u, &recomp_unit_0014, "recomp_unit_0014");
    runtime.register_function(0x0883D23Cu, &recomp_unit_0014, "recomp_unit_0014");
    runtime.register_function(0x0883D260u, &recomp_unit_0014, "recomp_unit_0014");
    runtime.register_function(0x0883D268u, &recomp_unit_0014, "recomp_unit_0014");
    runtime.register_function(0x0883D274u, &recomp_unit_0014, "recomp_unit_0014");
    runtime.register_function(0x0883D294u, &recomp_unit_0014, "recomp_unit_0014");
    runtime.register_function(0x0883D2ACu, &recomp_unit_0014, "recomp_unit_0014");
    runtime.register_function(0x0883D2BCu, &recomp_unit_0014, "recomp_unit_0014");
    runtime.register_function(0x0883D2DCu, &recomp_unit_0014, "recomp_unit_0014");
    runtime.register_function(0x0883D2F8u, &recomp_unit_0014, "recomp_unit_0014");
    runtime.register_function(0x0883D304u, &recomp_unit_0014, "recomp_unit_0014");
    runtime.register_function(0x0883D30Cu, &recomp_unit_0014, "recomp_unit_0014");
    runtime.register_function(0x0883D320u, &recomp_unit_0014, "recomp_unit_0014");
    runtime.register_function(0x0883D328u, &recomp_unit_0014, "recomp_unit_0014");
    runtime.register_function(0x0883D330u, &recomp_unit_0014, "recomp_unit_0014");
    runtime.register_function(0x0883D33Cu, &recomp_unit_0014, "recomp_unit_0014");
    runtime.register_function(0x0883D344u, &recomp_unit_0014, "recomp_unit_0014");
    runtime.register_function(0x0883D348u, &recomp_unit_0014, "recomp_unit_0014");
    runtime.register_function(0x0883D350u, &recomp_unit_0014, "recomp_unit_0014");
    runtime.register_function(0x0883D354u, &recomp_unit_0014, "recomp_unit_0014");
    runtime.register_function(0x0883D370u, &recomp_unit_0014, "recomp_unit_0014");
    runtime.register_function(0x0883D384u, &recomp_unit_0014, "recomp_unit_0014");
    runtime.register_function(0x0883D398u, &recomp_unit_0014, "recomp_unit_0014");
    runtime.register_function(0x0883D3ACu, &recomp_unit_0014, "recomp_unit_0014");
    runtime.register_function(0x0883D3B4u, &recomp_unit_0014, "recomp_unit_0014");
    runtime.register_function(0x0883D3BCu, &recomp_unit_0014, "recomp_unit_0014");
    runtime.register_function(0x0883D3C4u, &recomp_unit_0014, "recomp_unit_0014");
    runtime.register_function(0x0883D3CCu, &recomp_unit_0014, "recomp_unit_0014");
    runtime.register_function(0x0883D3D4u, &recomp_unit_0014, "recomp_unit_0014");
    runtime.register_function(0x0883D3DCu, &recomp_unit_0014, "recomp_unit_0014");
    runtime.register_function(0x0883D3F8u, &recomp_unit_0014, "recomp_unit_0014");
    runtime.register_function(0x0883D400u, &recomp_unit_0014, "recomp_unit_0014");
    runtime.register_function(0x0883D40Cu, &recomp_unit_0014, "recomp_unit_0014");
    runtime.register_function(0x0883D414u, &recomp_unit_0014, "recomp_unit_0014");
    runtime.register_function(0x0883D418u, &recomp_unit_0014, "recomp_unit_0014");
    runtime.register_function(0x0883D42Cu, &recomp_unit_0014, "recomp_unit_0014");
    runtime.register_function(0x0883D438u, &recomp_unit_0014, "recomp_unit_0014");
    runtime.register_function(0x0883D440u, &recomp_unit_0014, "recomp_unit_0014");
    runtime.register_function(0x0883D44Cu, &recomp_unit_0014, "recomp_unit_0014");
    runtime.register_function(0x0883D454u, &recomp_unit_0014, "recomp_unit_0014");
    runtime.register_function(0x0883D478u, &recomp_unit_0014, "recomp_unit_0014");
    runtime.register_function(0x0883D480u, &recomp_unit_0014, "recomp_unit_0014");
    runtime.register_function(0x0883D484u, &recomp_unit_0014, "recomp_unit_0014");
    runtime.register_function(0x0883D48Cu, &recomp_unit_0014, "recomp_unit_0014");
    runtime.register_function(0x0883D4A4u, &recomp_unit_0014, "recomp_unit_0014");
    runtime.register_function(0x0883D4B8u, &recomp_unit_0014, "recomp_unit_0014");
    runtime.register_function(0x0883D4CCu, &recomp_unit_0014, "recomp_unit_0014");
    runtime.register_function(0x0883D4E0u, &recomp_unit_0014, "recomp_unit_0014");
    runtime.register_function(0x0883D4F0u, &recomp_unit_0014, "recomp_unit_0014");
    runtime.register_function(0x0883D4F8u, &recomp_unit_0014, "recomp_unit_0014");
    runtime.register_function(0x0883D530u, &recomp_unit_0014, "recomp_unit_0014");
    runtime.register_function(0x0883D54Cu, &recomp_unit_0014, "recomp_unit_0014");
    runtime.register_function(0x0883D560u, &recomp_unit_0014, "recomp_unit_0014");
    runtime.register_function(0x0883D56Cu, &recomp_unit_0014, "recomp_unit_0014");
    runtime.register_function(0x0883D574u, &recomp_unit_0014, "recomp_unit_0014");
    runtime.register_function(0x0883D580u, &recomp_unit_0014, "recomp_unit_0014");
    runtime.register_function(0x0883D588u, &recomp_unit_0014, "recomp_unit_0014");
    runtime.register_function(0x0883D598u, &recomp_unit_0014, "recomp_unit_0014");
    runtime.register_function(0x0883D5E8u, &recomp_unit_0014, "recomp_unit_0014");
    runtime.register_function(0x0883D618u, &recomp_unit_0014, "recomp_unit_0014");
    runtime.register_function(0x0883D644u, &recomp_unit_0014, "recomp_unit_0014");
    runtime.register_function(0x0883D654u, &recomp_unit_0014, "recomp_unit_0014");
    runtime.register_function(0x0883D65Cu, &recomp_unit_0014, "recomp_unit_0014");
    runtime.register_function(0x0883D66Cu, &recomp_unit_0014, "recomp_unit_0014");
    runtime.register_function(0x0883D67Cu, &recomp_unit_0014, "recomp_unit_0014");
    runtime.register_function(0x0883D684u, &recomp_unit_0014, "recomp_unit_0014");
    runtime.register_function(0x0883D690u, &recomp_unit_0014, "recomp_unit_0014");
    runtime.register_function(0x0883D6B0u, &recomp_unit_0014, "recomp_unit_0014");
    runtime.register_function(0x0883D6BCu, &recomp_unit_0014, "recomp_unit_0014");
    runtime.register_function(0x0883D6C4u, &recomp_unit_0014, "recomp_unit_0014");
    runtime.register_function(0x0883D6D0u, &recomp_unit_0014, "recomp_unit_0014");
    runtime.register_function(0x0883D6E4u, &recomp_unit_0014, "recomp_unit_0014");
    runtime.register_function(0x0883D6F0u, &recomp_unit_0014, "recomp_unit_0014");
    runtime.register_function(0x0883D704u, &recomp_unit_0014, "recomp_unit_0014");
    runtime.register_function(0x0883D710u, &recomp_unit_0014, "recomp_unit_0014");
    runtime.register_function(0x0883D724u, &recomp_unit_0014, "recomp_unit_0014");
    runtime.register_function(0x0883D730u, &recomp_unit_0014, "recomp_unit_0014");
    runtime.register_function(0x0883D740u, &recomp_unit_0014, "recomp_unit_0014");
    runtime.register_function(0x0883D74Cu, &recomp_unit_0014, "recomp_unit_0014");
    runtime.register_function(0x0883D760u, &recomp_unit_0014, "recomp_unit_0014");
    runtime.register_function(0x0883D76Cu, &recomp_unit_0014, "recomp_unit_0014");
    runtime.register_function(0x0883D77Cu, &recomp_unit_0014, "recomp_unit_0014");
    runtime.register_function(0x0883D790u, &recomp_unit_0014, "recomp_unit_0014");
    runtime.register_function(0x0883D79Cu, &recomp_unit_0014, "recomp_unit_0014");
    runtime.register_function(0x0883D7BCu, &recomp_unit_0014, "recomp_unit_0014");
    runtime.register_function(0x0883D7C4u, &recomp_unit_0014, "recomp_unit_0014");
    runtime.register_function(0x0883D7C8u, &recomp_unit_0014, "recomp_unit_0014");
    runtime.register_function(0x0883D7DCu, &recomp_unit_0014, "recomp_unit_0014");
    runtime.register_function(0x0883D7E8u, &recomp_unit_0014, "recomp_unit_0014");
    runtime.register_function(0x0883D7F8u, &recomp_unit_0014, "recomp_unit_0014");
    runtime.register_function(0x0883D800u, &recomp_unit_0014, "recomp_unit_0014");
    runtime.register_function(0x0883D80Cu, &recomp_unit_0014, "recomp_unit_0014");
    runtime.register_function(0x0883D824u, &recomp_unit_0014, "recomp_unit_0014");
    runtime.register_function(0x0883D834u, &recomp_unit_0014, "recomp_unit_0014");
    runtime.register_function(0x0883D840u, &recomp_unit_0014, "recomp_unit_0014");
    runtime.register_function(0x0883D844u, &recomp_unit_0014, "recomp_unit_0014");
    runtime.register_function(0x0883D850u, &recomp_unit_0014, "recomp_unit_0014");
    runtime.register_function(0x0883D878u, &recomp_unit_0014, "recomp_unit_0014");
    runtime.register_function(0x0883D888u, &recomp_unit_0014, "recomp_unit_0014");
    runtime.register_function(0x0883D8B0u, &recomp_unit_0014, "recomp_unit_0014");
    runtime.register_function(0x0883D8BCu, &recomp_unit_0014, "recomp_unit_0014");
    runtime.register_function(0x0883D8D8u, &recomp_unit_0014, "recomp_unit_0014");
    runtime.register_function(0x0883D90Cu, &recomp_unit_0014, "recomp_unit_0014");
    runtime.register_function(0x0883D92Cu, &recomp_unit_0014, "recomp_unit_0014");
    runtime.register_function(0x0883D930u, &recomp_unit_0014, "recomp_unit_0014");
    runtime.register_function(0x0883D938u, &recomp_unit_0014, "recomp_unit_0014");
    runtime.register_function(0x0883D958u, &recomp_unit_0014, "recomp_unit_0014");
    runtime.register_function(0x0883D974u, &recomp_unit_0014, "recomp_unit_0014");
    runtime.register_function(0x0883D97Cu, &recomp_unit_0014, "recomp_unit_0014");
    runtime.register_function(0x0883D998u, &recomp_unit_0014, "recomp_unit_0014");
    runtime.register_function(0x0883D99Cu, &recomp_unit_0014, "recomp_unit_0014");
    runtime.register_function(0x0883D9A8u, &recomp_unit_0014, "recomp_unit_0014");
    runtime.register_function(0x0883D9B4u, &recomp_unit_0014, "recomp_unit_0014");
    runtime.register_function(0x0883D9D0u, &recomp_unit_0014, "recomp_unit_0014");
    runtime.register_function(0x0883D9D8u, &recomp_unit_0014, "recomp_unit_0014");
    runtime.register_function(0x0883D9E0u, &recomp_unit_0014, "recomp_unit_0014");
    runtime.register_function(0x0883D9E4u, &recomp_unit_0014, "recomp_unit_0014");
    runtime.register_function(0x0883DA18u, &recomp_unit_0014, "recomp_unit_0014");
    runtime.register_function(0x0883DA20u, &recomp_unit_0014, "recomp_unit_0014");
    runtime.register_function(0x0883DA28u, &recomp_unit_0014, "recomp_unit_0014");
    runtime.register_function(0x0883DA30u, &recomp_unit_0014, "recomp_unit_0014");
    runtime.register_function(0x0883DA40u, &recomp_unit_0014, "recomp_unit_0014");
    runtime.register_function(0x0883DA4Cu, &recomp_unit_0014, "recomp_unit_0014");
    runtime.register_function(0x0883DA54u, &recomp_unit_0014, "recomp_unit_0014");
    runtime.register_function(0x0883DA58u, &recomp_unit_0014, "recomp_unit_0014");
    runtime.register_function(0x0883DA60u, &recomp_unit_0014, "recomp_unit_0014");
    runtime.register_function(0x0883DA90u, &recomp_unit_0014, "recomp_unit_0014");
    runtime.register_function(0x0883DA9Cu, &recomp_unit_0014, "recomp_unit_0014");
    runtime.register_function(0x0883DAA8u, &recomp_unit_0014, "recomp_unit_0014");
    runtime.register_function(0x0883DAB0u, &recomp_unit_0014, "recomp_unit_0014");
    runtime.register_function(0x0883DAB8u, &recomp_unit_0014, "recomp_unit_0014");
    runtime.register_function(0x0883DAD0u, &recomp_unit_0014, "recomp_unit_0014");
    runtime.register_function(0x0883DADCu, &recomp_unit_0014, "recomp_unit_0014");
    runtime.register_function(0x0883DAECu, &recomp_unit_0014, "recomp_unit_0014");
    runtime.register_function(0x0883DAFCu, &recomp_unit_0014, "recomp_unit_0014");
    runtime.register_function(0x0883DB04u, &recomp_unit_0014, "recomp_unit_0014");
    runtime.register_function(0x0883DB08u, &recomp_unit_0014, "recomp_unit_0014");
    runtime.register_function(0x0883DB14u, &recomp_unit_0014, "recomp_unit_0014");
    runtime.register_function(0x0883DB28u, &recomp_unit_0014, "recomp_unit_0014");
    runtime.register_function(0x0883DB3Cu, &recomp_unit_0014, "recomp_unit_0014");
    runtime.register_function(0x0883DB40u, &recomp_unit_0014, "recomp_unit_0014");
    runtime.register_function(0x0883DB4Cu, &recomp_unit_0014, "recomp_unit_0014");
    runtime.register_function(0x0883DB70u, &recomp_unit_0014, "recomp_unit_0014");
    runtime.register_function(0x0883DB80u, &recomp_unit_0014, "recomp_unit_0014");
    runtime.register_function(0x0883DB8Cu, &recomp_unit_0014, "recomp_unit_0014");
    runtime.register_function(0x0883DB98u, &recomp_unit_0014, "recomp_unit_0014");
    runtime.register_function(0x0883DBA4u, &recomp_unit_0014, "recomp_unit_0014");
    runtime.register_function(0x0883DBA8u, &recomp_unit_0014, "recomp_unit_0014");
    runtime.register_function(0x0883DBB0u, &recomp_unit_0014, "recomp_unit_0014");
    runtime.register_function(0x0883DC00u, &recomp_unit_0014, "recomp_unit_0014");
    runtime.register_function(0x0883DC0Cu, &recomp_unit_0014, "recomp_unit_0014");
    runtime.register_function(0x0883DC14u, &recomp_unit_0014, "recomp_unit_0014");
    runtime.register_function(0x0883DC20u, &recomp_unit_0014, "recomp_unit_0014");
    runtime.register_function(0x0883DC28u, &recomp_unit_0014, "recomp_unit_0014");
    runtime.register_function(0x0883DC34u, &recomp_unit_0014, "recomp_unit_0014");
    runtime.register_function(0x0883DC3Cu, &recomp_unit_0014, "recomp_unit_0014");
    runtime.register_function(0x0883DC44u, &recomp_unit_0014, "recomp_unit_0014");
    runtime.register_function(0x0883DC54u, &recomp_unit_0014, "recomp_unit_0014");
    runtime.register_function(0x0883DC5Cu, &recomp_unit_0014, "recomp_unit_0014");
    runtime.register_function(0x0883DC60u, &recomp_unit_0014, "recomp_unit_0014");
    runtime.register_function(0x0883DC68u, &recomp_unit_0014, "recomp_unit_0014");
    runtime.register_function(0x0883DC70u, &recomp_unit_0014, "recomp_unit_0014");
    runtime.register_function(0x0883DC78u, &recomp_unit_0014, "recomp_unit_0014");
    runtime.register_function(0x0883DC84u, &recomp_unit_0014, "recomp_unit_0014");
    runtime.register_function(0x0883DC88u, &recomp_unit_0014, "recomp_unit_0014");
    runtime.register_function(0x0883DCACu, &recomp_unit_0014, "recomp_unit_0014");
    runtime.register_function(0x0883DCB8u, &recomp_unit_0014, "recomp_unit_0014");
    runtime.register_function(0x0883DCC0u, &recomp_unit_0014, "recomp_unit_0014");
    runtime.register_function(0x0883DCECu, &recomp_unit_0014, "recomp_unit_0014");
    runtime.register_function(0x0883DCF4u, &recomp_unit_0014, "recomp_unit_0014");
    runtime.register_function(0x0883DCFCu, &recomp_unit_0014, "recomp_unit_0014");
    runtime.register_function(0x0883DD04u, &recomp_unit_0014, "recomp_unit_0014");
    runtime.register_function(0x0883DD0Cu, &recomp_unit_0014, "recomp_unit_0014");
    runtime.register_function(0x0883DD10u, &recomp_unit_0014, "recomp_unit_0014");
    runtime.register_function(0x0883DD24u, &recomp_unit_0014, "recomp_unit_0014");
    runtime.register_function(0x0883DD4Cu, &recomp_unit_0014, "recomp_unit_0014");
    runtime.register_function(0x0883DD54u, &recomp_unit_0014, "recomp_unit_0014");
    runtime.register_function(0x0883DD60u, &recomp_unit_0014, "recomp_unit_0014");
    runtime.register_function(0x0883DD70u, &recomp_unit_0014, "recomp_unit_0014");
    runtime.register_function(0x0883DD78u, &recomp_unit_0014, "recomp_unit_0014");
    runtime.register_function(0x0883DD9Cu, &recomp_unit_0014, "recomp_unit_0014");
    runtime.register_function(0x0883DDA0u, &recomp_unit_0014, "recomp_unit_0014");
    runtime.register_function(0x0883DDC4u, &recomp_unit_0014, "recomp_unit_0014");
    runtime.register_function(0x0883DDD0u, &recomp_unit_0014, "recomp_unit_0014");
    runtime.register_function(0x0883DDD4u, &recomp_unit_0014, "recomp_unit_0014");
    runtime.register_function(0x0883DDE0u, &recomp_unit_0014, "recomp_unit_0014");
    runtime.register_function(0x0883DDE8u, &recomp_unit_0014, "recomp_unit_0014");
    runtime.register_function(0x0883DE00u, &recomp_unit_0014, "recomp_unit_0014");
    runtime.register_function(0x0883DE08u, &recomp_unit_0014, "recomp_unit_0014");
    runtime.register_function(0x0883DE0Cu, &recomp_unit_0014, "recomp_unit_0014");
    runtime.register_function(0x0883DE3Cu, &recomp_unit_0014, "recomp_unit_0014");
    runtime.register_function(0x0883DE50u, &recomp_unit_0014, "recomp_unit_0014");
    runtime.register_function(0x0883DE5Cu, &recomp_unit_0014, "recomp_unit_0014");
    runtime.register_function(0x0883DE68u, &recomp_unit_0014, "recomp_unit_0014");
    runtime.register_function(0x0883DE70u, &recomp_unit_0014, "recomp_unit_0014");
    runtime.register_function(0x0883DE7Cu, &recomp_unit_0014, "recomp_unit_0014");
    runtime.register_function(0x0883DE80u, &recomp_unit_0014, "recomp_unit_0014");
    runtime.register_function(0x0883DE88u, &recomp_unit_0014, "recomp_unit_0014");
    runtime.register_function(0x0883DEB0u, &recomp_unit_0014, "recomp_unit_0014");
    runtime.register_function(0x0883DEBCu, &recomp_unit_0014, "recomp_unit_0014");
    runtime.register_function(0x0883DED4u, &recomp_unit_0014, "recomp_unit_0014");
    runtime.register_function(0x0883DEE0u, &recomp_unit_0014, "recomp_unit_0014");
    runtime.register_function(0x0883DEE8u, &recomp_unit_0014, "recomp_unit_0014");
    runtime.register_function(0x0883DEF0u, &recomp_unit_0014, "recomp_unit_0014");
    runtime.register_function(0x0883DEF8u, &recomp_unit_0014, "recomp_unit_0014");
    runtime.register_function(0x0883DF04u, &recomp_unit_0014, "recomp_unit_0014");
    runtime.register_function(0x0883DF24u, &recomp_unit_0014, "recomp_unit_0014");
    runtime.register_function(0x0883DF2Cu, &recomp_unit_0014, "recomp_unit_0014");
    runtime.register_function(0x0883DF34u, &recomp_unit_0014, "recomp_unit_0014");
    runtime.register_function(0x0883DF3Cu, &recomp_unit_0014, "recomp_unit_0014");
    runtime.register_function(0x0883DF44u, &recomp_unit_0014, "recomp_unit_0014");
    runtime.register_function(0x0883DF4Cu, &recomp_unit_0014, "recomp_unit_0014");
    runtime.register_function(0x0883DF54u, &recomp_unit_0014, "recomp_unit_0014");
    runtime.register_function(0x0883DF5Cu, &recomp_unit_0014, "recomp_unit_0014");
    runtime.register_function(0x0883DF70u, &recomp_unit_0014, "recomp_unit_0014");
    runtime.register_function(0x0883DF80u, &recomp_unit_0014, "recomp_unit_0014");
    runtime.register_function(0x0883DF8Cu, &recomp_unit_0014, "recomp_unit_0014");
    runtime.register_function(0x0883DF98u, &recomp_unit_0014, "recomp_unit_0014");
    runtime.register_function(0x0883DFA0u, &recomp_unit_0014, "recomp_unit_0014");
    runtime.register_function(0x0883DFB4u, &recomp_unit_0014, "recomp_unit_0014");
    runtime.register_function(0x0883DFB8u, &recomp_unit_0014, "recomp_unit_0014");
    runtime.register_function(0x0883DFC0u, &recomp_unit_0014, "recomp_unit_0014");
    runtime.register_function(0x0883E014u, &recomp_unit_0014, "recomp_unit_0014");
    runtime.register_function(0x0883E018u, &recomp_unit_0014, "recomp_unit_0014");
    runtime.register_function(0x0883E024u, &recomp_unit_0014, "recomp_unit_0014");
    runtime.register_function(0x0883E028u, &recomp_unit_0014, "recomp_unit_0014");
    runtime.register_function(0x0883E044u, &recomp_unit_0014, "recomp_unit_0014");
    runtime.register_function(0x0883E048u, &recomp_unit_0014, "recomp_unit_0014");
    runtime.register_function(0x0883E058u, &recomp_unit_0014, "recomp_unit_0014");
    runtime.register_function(0x0883E06Cu, &recomp_unit_0014, "recomp_unit_0014");
    runtime.register_function(0x0883E078u, &recomp_unit_0014, "recomp_unit_0014");
    runtime.register_function(0x0883E080u, &recomp_unit_0014, "recomp_unit_0014");
    runtime.register_function(0x0883E088u, &recomp_unit_0014, "recomp_unit_0014");
    runtime.register_function(0x0883E094u, &recomp_unit_0014, "recomp_unit_0014");
    runtime.register_function(0x0883E0A4u, &recomp_unit_0014, "recomp_unit_0014");
    runtime.register_function(0x0883E0ACu, &recomp_unit_0014, "recomp_unit_0014");
    runtime.register_function(0x0883E0B8u, &recomp_unit_0014, "recomp_unit_0014");
    runtime.register_function(0x0883E0C8u, &recomp_unit_0014, "recomp_unit_0014");
    runtime.register_function(0x0883E0CCu, &recomp_unit_0014, "recomp_unit_0014");
    runtime.register_function(0x0883E0D4u, &recomp_unit_0014, "recomp_unit_0014");
    runtime.register_function(0x0883E0E0u, &recomp_unit_0014, "recomp_unit_0014");
    runtime.register_function(0x0883E0FCu, &recomp_unit_0014, "recomp_unit_0014");
    runtime.register_function(0x0883E104u, &recomp_unit_0014, "recomp_unit_0014");
    runtime.register_function(0x0883E108u, &recomp_unit_0014, "recomp_unit_0014");
    runtime.register_function(0x0883E128u, &recomp_unit_0014, "recomp_unit_0014");
    runtime.register_function(0x0883E12Cu, &recomp_unit_0014, "recomp_unit_0014");
    runtime.register_function(0x0883E138u, &recomp_unit_0014, "recomp_unit_0014");
    runtime.register_function(0x0883E13Cu, &recomp_unit_0014, "recomp_unit_0014");
    runtime.register_function(0x0883E148u, &recomp_unit_0014, "recomp_unit_0014");
    runtime.register_function(0x0883E14Cu, &recomp_unit_0014, "recomp_unit_0014");
    runtime.register_function(0x0883E15Cu, &recomp_unit_0014, "recomp_unit_0014");
    runtime.register_function(0x0883E17Cu, &recomp_unit_0014, "recomp_unit_0014");
    runtime.register_function(0x0883E190u, &recomp_unit_0014, "recomp_unit_0014");
    runtime.register_function(0x0883E198u, &recomp_unit_0014, "recomp_unit_0014");
    runtime.register_function(0x0883E19Cu, &recomp_unit_0014, "recomp_unit_0014");
    runtime.register_function(0x0883E1A4u, &recomp_unit_0014, "recomp_unit_0014");
    runtime.register_function(0x0883E1A8u, &recomp_unit_0014, "recomp_unit_0014");
    runtime.register_function(0x0883E1C4u, &recomp_unit_0014, "recomp_unit_0014");
    runtime.register_function(0x0883E1E0u, &recomp_unit_0014, "recomp_unit_0014");
    runtime.register_function(0x0883E1E8u, &recomp_unit_0014, "recomp_unit_0014");
    runtime.register_function(0x0883E1F4u, &recomp_unit_0014, "recomp_unit_0014");
    runtime.register_function(0x0883E1FCu, &recomp_unit_0014, "recomp_unit_0014");
    runtime.register_function(0x0883E200u, &recomp_unit_0014, "recomp_unit_0014");
    runtime.register_function(0x0883E214u, &recomp_unit_0014, "recomp_unit_0014");
    runtime.register_function(0x0883E228u, &recomp_unit_0014, "recomp_unit_0014");
    runtime.register_function(0x0883E240u, &recomp_unit_0014, "recomp_unit_0014");
    runtime.register_function(0x0883E248u, &recomp_unit_0014, "recomp_unit_0014");
    runtime.register_function(0x0883E254u, &recomp_unit_0014, "recomp_unit_0014");
    runtime.register_function(0x0883E288u, &recomp_unit_0014, "recomp_unit_0014");
    runtime.register_function(0x0883E290u, &recomp_unit_0014, "recomp_unit_0014");
    runtime.register_function(0x0883E298u, &recomp_unit_0014, "recomp_unit_0014");
    runtime.register_function(0x0883E2A0u, &recomp_unit_0014, "recomp_unit_0014");
    runtime.register_function(0x0883E2A8u, &recomp_unit_0014, "recomp_unit_0014");
    runtime.register_function(0x0883E2B0u, &recomp_unit_0014, "recomp_unit_0014");
    runtime.register_function(0x0883E2C0u, &recomp_unit_0014, "recomp_unit_0014");
    runtime.register_function(0x0883E2CCu, &recomp_unit_0014, "recomp_unit_0014");
    runtime.register_function(0x0883E2D8u, &recomp_unit_0014, "recomp_unit_0014");
    runtime.register_function(0x0883E2E4u, &recomp_unit_0014, "recomp_unit_0014");
    runtime.register_function(0x0883E2F0u, &recomp_unit_0014, "recomp_unit_0014");
    runtime.register_function(0x0883E2FCu, &recomp_unit_0014, "recomp_unit_0014");
    runtime.register_function(0x0883E30Cu, &recomp_unit_0014, "recomp_unit_0014");
    runtime.register_function(0x0883E32Cu, &recomp_unit_0014, "recomp_unit_0014");
    runtime.register_function(0x0883E33Cu, &recomp_unit_0014, "recomp_unit_0014");
    runtime.register_function(0x0883E354u, &recomp_unit_0014, "recomp_unit_0014");
    runtime.register_function(0x0883E36Cu, &recomp_unit_0014, "recomp_unit_0014");
    runtime.register_function(0x0883E37Cu, &recomp_unit_0014, "recomp_unit_0014");
    runtime.register_function(0x0883E394u, &recomp_unit_0014, "recomp_unit_0014");
    runtime.register_function(0x0883E3ACu, &recomp_unit_0014, "recomp_unit_0014");
    runtime.register_function(0x0883E3BCu, &recomp_unit_0014, "recomp_unit_0014");
    runtime.register_function(0x0883E3D4u, &recomp_unit_0014, "recomp_unit_0014");
    runtime.register_function(0x0883E3ECu, &recomp_unit_0014, "recomp_unit_0014");
    runtime.register_function(0x0883E3FCu, &recomp_unit_0014, "recomp_unit_0014");
    runtime.register_function(0x0883E414u, &recomp_unit_0014, "recomp_unit_0014");
    runtime.register_function(0x0883E42Cu, &recomp_unit_0014, "recomp_unit_0014");
    runtime.register_function(0x0883E434u, &recomp_unit_0014, "recomp_unit_0014");
    runtime.register_function(0x0883E43Cu, &recomp_unit_0014, "recomp_unit_0014");
    runtime.register_function(0x0883E454u, &recomp_unit_0014, "recomp_unit_0014");
    runtime.register_function(0x0883E460u, &recomp_unit_0014, "recomp_unit_0014");
    runtime.register_function(0x0883E470u, &recomp_unit_0014, "recomp_unit_0014");
    runtime.register_function(0x0883E488u, &recomp_unit_0014, "recomp_unit_0014");
    runtime.register_function(0x0883E494u, &recomp_unit_0014, "recomp_unit_0014");
    runtime.register_function(0x0883E4A4u, &recomp_unit_0014, "recomp_unit_0014");
    runtime.register_function(0x0883E4BCu, &recomp_unit_0014, "recomp_unit_0014");
    runtime.register_function(0x0883E4C8u, &recomp_unit_0014, "recomp_unit_0014");
    runtime.register_function(0x0883E4D8u, &recomp_unit_0014, "recomp_unit_0014");
    runtime.register_function(0x0883E4F0u, &recomp_unit_0014, "recomp_unit_0014");
    runtime.register_function(0x0883E4FCu, &recomp_unit_0014, "recomp_unit_0014");
    runtime.register_function(0x0883E50Cu, &recomp_unit_0014, "recomp_unit_0014");
    runtime.register_function(0x0883E524u, &recomp_unit_0014, "recomp_unit_0014");
    runtime.register_function(0x0883E530u, &recomp_unit_0014, "recomp_unit_0014");
    runtime.register_function(0x0883E540u, &recomp_unit_0014, "recomp_unit_0014");
    runtime.register_function(0x0883E558u, &recomp_unit_0014, "recomp_unit_0014");
    runtime.register_function(0x0883E564u, &recomp_unit_0014, "recomp_unit_0014");
    runtime.register_function(0x0883E580u, &recomp_unit_0014, "recomp_unit_0014");
    runtime.register_function(0x0883E58Cu, &recomp_unit_0014, "recomp_unit_0014");
    runtime.register_function(0x0883E59Cu, &recomp_unit_0014, "recomp_unit_0014");
    runtime.register_function(0x0883E5BCu, &recomp_unit_0014, "recomp_unit_0014");
    runtime.register_function(0x0883E5C8u, &recomp_unit_0014, "recomp_unit_0014");
    runtime.register_function(0x0883E5D8u, &recomp_unit_0014, "recomp_unit_0014");
    runtime.register_function(0x0883E5F8u, &recomp_unit_0014, "recomp_unit_0014");
    runtime.register_function(0x0883E604u, &recomp_unit_0014, "recomp_unit_0014");
    runtime.register_function(0x0883E614u, &recomp_unit_0014, "recomp_unit_0014");
    runtime.register_function(0x0883E634u, &recomp_unit_0014, "recomp_unit_0014");
    runtime.register_function(0x0883E640u, &recomp_unit_0014, "recomp_unit_0014");
    runtime.register_function(0x0883E650u, &recomp_unit_0014, "recomp_unit_0014");
    runtime.register_function(0x0883E670u, &recomp_unit_0014, "recomp_unit_0014");
    runtime.register_function(0x0883E67Cu, &recomp_unit_0014, "recomp_unit_0014");
    runtime.register_function(0x0883E68Cu, &recomp_unit_0014, "recomp_unit_0014");
    runtime.register_function(0x0883E6ACu, &recomp_unit_0014, "recomp_unit_0014");
    runtime.register_function(0x0883E6B8u, &recomp_unit_0014, "recomp_unit_0014");
    runtime.register_function(0x0883E6C8u, &recomp_unit_0014, "recomp_unit_0014");
    runtime.register_function(0x0883E6D8u, &recomp_unit_0014, "recomp_unit_0014");
    runtime.register_function(0x0883E6F4u, &recomp_unit_0014, "recomp_unit_0014");
    runtime.register_function(0x0883E700u, &recomp_unit_0014, "recomp_unit_0014");
    runtime.register_function(0x0883E70Cu, &recomp_unit_0014, "recomp_unit_0014");
    runtime.register_function(0x0883E728u, &recomp_unit_0014, "recomp_unit_0014");
    runtime.register_function(0x0883E734u, &recomp_unit_0014, "recomp_unit_0014");
    runtime.register_function(0x0883E740u, &recomp_unit_0014, "recomp_unit_0014");
    runtime.register_function(0x0883E75Cu, &recomp_unit_0014, "recomp_unit_0014");
    runtime.register_function(0x0883E768u, &recomp_unit_0014, "recomp_unit_0014");
    runtime.register_function(0x0883E774u, &recomp_unit_0014, "recomp_unit_0014");
    runtime.register_function(0x0883E790u, &recomp_unit_0014, "recomp_unit_0014");
    runtime.register_function(0x0883E79Cu, &recomp_unit_0014, "recomp_unit_0014");
    runtime.register_function(0x0883E7A8u, &recomp_unit_0014, "recomp_unit_0014");
    runtime.register_function(0x0883E7C4u, &recomp_unit_0014, "recomp_unit_0014");
    runtime.register_function(0x0883E7D0u, &recomp_unit_0014, "recomp_unit_0014");
    runtime.register_function(0x0883E7DCu, &recomp_unit_0014, "recomp_unit_0014");
    runtime.register_function(0x0883E7F8u, &recomp_unit_0014, "recomp_unit_0014");
    runtime.register_function(0x0883E804u, &recomp_unit_0014, "recomp_unit_0014");
    runtime.register_function(0x0883E810u, &recomp_unit_0014, "recomp_unit_0014");
    runtime.register_function(0x0883E824u, &recomp_unit_0014, "recomp_unit_0014");
    runtime.register_function(0x0883E830u, &recomp_unit_0014, "recomp_unit_0014");
    runtime.register_function(0x0883E83Cu, &recomp_unit_0014, "recomp_unit_0014");
    runtime.register_function(0x0883E850u, &recomp_unit_0014, "recomp_unit_0014");
    runtime.register_function(0x0883E85Cu, &recomp_unit_0014, "recomp_unit_0014");
    runtime.register_function(0x0883E868u, &recomp_unit_0014, "recomp_unit_0014");
    runtime.register_function(0x0883E87Cu, &recomp_unit_0014, "recomp_unit_0014");
    runtime.register_function(0x0883E888u, &recomp_unit_0014, "recomp_unit_0014");
    runtime.register_function(0x0883E894u, &recomp_unit_0014, "recomp_unit_0014");
    runtime.register_function(0x0883E8A8u, &recomp_unit_0014, "recomp_unit_0014");
    runtime.register_function(0x0883E8B4u, &recomp_unit_0014, "recomp_unit_0014");
    runtime.register_function(0x0883E8C0u, &recomp_unit_0014, "recomp_unit_0014");
    runtime.register_function(0x0883E8D4u, &recomp_unit_0014, "recomp_unit_0014");
    runtime.register_function(0x0883E8E0u, &recomp_unit_0014, "recomp_unit_0014");
    runtime.register_function(0x0883E8ECu, &recomp_unit_0014, "recomp_unit_0014");
    runtime.register_function(0x0883E900u, &recomp_unit_0014, "recomp_unit_0014");
    runtime.register_function(0x0883E90Cu, &recomp_unit_0014, "recomp_unit_0014");
    runtime.register_function(0x0883E91Cu, &recomp_unit_0014, "recomp_unit_0014");
    runtime.register_function(0x0883E928u, &recomp_unit_0014, "recomp_unit_0014");
    runtime.register_function(0x0883E940u, &recomp_unit_0014, "recomp_unit_0014");
    runtime.register_function(0x0883E94Cu, &recomp_unit_0014, "recomp_unit_0014");
    runtime.register_function(0x0883E964u, &recomp_unit_0014, "recomp_unit_0014");
    runtime.register_function(0x0883E970u, &recomp_unit_0014, "recomp_unit_0014");
    runtime.register_function(0x0883E988u, &recomp_unit_0014, "recomp_unit_0014");
    runtime.register_function(0x0883E994u, &recomp_unit_0014, "recomp_unit_0014");
    runtime.register_function(0x0883E9ACu, &recomp_unit_0014, "recomp_unit_0014");
    runtime.register_function(0x0883E9D8u, &recomp_unit_0014, "recomp_unit_0014");
    runtime.register_function(0x0883E9F0u, &recomp_unit_0014, "recomp_unit_0014");
    runtime.register_function(0x0883EA04u, &recomp_unit_0014, "recomp_unit_0014");
    runtime.register_function(0x0883EA18u, &recomp_unit_0014, "recomp_unit_0014");
    runtime.register_function(0x0883EA24u, &recomp_unit_0014, "recomp_unit_0014");
    runtime.register_function(0x0883EA3Cu, &recomp_unit_0014, "recomp_unit_0014");
    runtime.register_function(0x0883EA54u, &recomp_unit_0014, "recomp_unit_0014");
    runtime.register_function(0x0883EA68u, &recomp_unit_0014, "recomp_unit_0014");
    runtime.register_function(0x0883EA7Cu, &recomp_unit_0014, "recomp_unit_0014");
    runtime.register_function(0x0883EA90u, &recomp_unit_0014, "recomp_unit_0014");
    runtime.register_function(0x0883EAA8u, &recomp_unit_0014, "recomp_unit_0014");
    runtime.register_function(0x0883EAC8u, &recomp_unit_0014, "recomp_unit_0014");
    runtime.register_function(0x0883EADCu, &recomp_unit_0014, "recomp_unit_0014");
    runtime.register_function(0x0883EAF0u, &recomp_unit_0014, "recomp_unit_0014");
    runtime.register_function(0x0883EB00u, &recomp_unit_0014, "recomp_unit_0014");
    runtime.register_function(0x0883EB18u, &recomp_unit_0014, "recomp_unit_0014");
    runtime.register_function(0x0883EB24u, &recomp_unit_0014, "recomp_unit_0014");
    runtime.register_function(0x0883EB2Cu, &recomp_unit_0014, "recomp_unit_0014");
    runtime.register_function(0x0883EB34u, &recomp_unit_0014, "recomp_unit_0014");
    runtime.register_function(0x0883EB5Cu, &recomp_unit_0014, "recomp_unit_0014");
    runtime.register_function(0x0883EB64u, &recomp_unit_0014, "recomp_unit_0014");
    runtime.register_function(0x0883EB74u, &recomp_unit_0014, "recomp_unit_0014");
    runtime.register_function(0x0883EB80u, &recomp_unit_0014, "recomp_unit_0014");
    runtime.register_function(0x0883EB88u, &recomp_unit_0014, "recomp_unit_0014");
    runtime.register_function(0x0883EB90u, &recomp_unit_0014, "recomp_unit_0014");
    runtime.register_function(0x0883EBA0u, &recomp_unit_0014, "recomp_unit_0014");
    runtime.register_function(0x0883EBACu, &recomp_unit_0014, "recomp_unit_0014");
    runtime.register_function(0x0883EBB4u, &recomp_unit_0014, "recomp_unit_0014");
    runtime.register_function(0x0883EBBCu, &recomp_unit_0014, "recomp_unit_0014");
    runtime.register_function(0x0883EBCCu, &recomp_unit_0014, "recomp_unit_0014");
    runtime.register_function(0x0883EBD8u, &recomp_unit_0014, "recomp_unit_0014");
    runtime.register_function(0x0883EBE0u, &recomp_unit_0014, "recomp_unit_0014");
    runtime.register_function(0x0883EBF4u, &recomp_unit_0014, "recomp_unit_0014");
    runtime.register_function(0x0883EC00u, &recomp_unit_0014, "recomp_unit_0014");
    runtime.register_function(0x0883EC14u, &recomp_unit_0014, "recomp_unit_0014");
    runtime.register_function(0x0883EC1Cu, &recomp_unit_0014, "recomp_unit_0014");
    runtime.register_function(0x0883EC28u, &recomp_unit_0014, "recomp_unit_0014");
    runtime.register_function(0x0883EC34u, &recomp_unit_0014, "recomp_unit_0014");
    runtime.register_function(0x0883EC80u, &recomp_unit_0014, "recomp_unit_0014");
    runtime.register_function(0x0883EC88u, &recomp_unit_0014, "recomp_unit_0014");
    runtime.register_function(0x0883EC90u, &recomp_unit_0014, "recomp_unit_0014");
    runtime.register_function(0x0883EC98u, &recomp_unit_0014, "recomp_unit_0014");
    runtime.register_function(0x0883ECA0u, &recomp_unit_0014, "recomp_unit_0014");
    runtime.register_function(0x0883ECA8u, &recomp_unit_0014, "recomp_unit_0014");
    runtime.register_function(0x0883ECB0u, &recomp_unit_0014, "recomp_unit_0014");
    runtime.register_function(0x0883ECB8u, &recomp_unit_0014, "recomp_unit_0014");
    runtime.register_function(0x0883ECC0u, &recomp_unit_0014, "recomp_unit_0014");
    runtime.register_function(0x0883ECD0u, &recomp_unit_0014, "recomp_unit_0014");
    runtime.register_function(0x0883ECE8u, &recomp_unit_0014, "recomp_unit_0014");
    runtime.register_function(0x0883ED00u, &recomp_unit_0014, "recomp_unit_0014");
    runtime.register_function(0x0883ED10u, &recomp_unit_0014, "recomp_unit_0014");
    runtime.register_function(0x0883ED28u, &recomp_unit_0014, "recomp_unit_0014");
    runtime.register_function(0x0883ED40u, &recomp_unit_0014, "recomp_unit_0014");
    runtime.register_function(0x0883ED50u, &recomp_unit_0014, "recomp_unit_0014");
    runtime.register_function(0x0883ED68u, &recomp_unit_0014, "recomp_unit_0014");
    runtime.register_function(0x0883ED80u, &recomp_unit_0014, "recomp_unit_0014");
    runtime.register_function(0x0883EDB8u, &recomp_unit_0014, "recomp_unit_0014");
    runtime.register_function(0x0883EDC4u, &recomp_unit_0014, "recomp_unit_0014");
    runtime.register_function(0x0883EDD8u, &recomp_unit_0014, "recomp_unit_0014");
    runtime.register_function(0x0883EDFCu, &recomp_unit_0014, "recomp_unit_0014");
    runtime.register_function(0x0883EE00u, &recomp_unit_0014, "recomp_unit_0014");
    runtime.register_function(0x0883EE18u, &recomp_unit_0014, "recomp_unit_0014");
    runtime.register_function(0x0883EE20u, &recomp_unit_0014, "recomp_unit_0014");
    runtime.register_function(0x0883EE48u, &recomp_unit_0014, "recomp_unit_0014");
    runtime.register_function(0x0883EE54u, &recomp_unit_0014, "recomp_unit_0014");
    runtime.register_function(0x0883EE5Cu, &recomp_unit_0014, "recomp_unit_0014");
    runtime.register_function(0x0883EE78u, &recomp_unit_0014, "recomp_unit_0014");
    runtime.register_function(0x0883EE80u, &recomp_unit_0014, "recomp_unit_0014");
    runtime.register_function(0x0883EE88u, &recomp_unit_0014, "recomp_unit_0014");
    runtime.register_function(0x0883EEA4u, &recomp_unit_0014, "recomp_unit_0014");
    runtime.register_function(0x0883EEC4u, &recomp_unit_0014, "recomp_unit_0014");
    runtime.register_function(0x0883EECCu, &recomp_unit_0014, "recomp_unit_0014");
    runtime.register_function(0x0883EED8u, &recomp_unit_0014, "recomp_unit_0014");
    runtime.register_function(0x0883EEECu, &recomp_unit_0014, "recomp_unit_0014");
    runtime.register_function(0x0883EEFCu, &recomp_unit_0014, "recomp_unit_0014");
    runtime.register_function(0x0883EF08u, &recomp_unit_0014, "recomp_unit_0014");
    runtime.register_function(0x0883EF14u, &recomp_unit_0014, "recomp_unit_0014");
    runtime.register_function(0x0883EF20u, &recomp_unit_0014, "recomp_unit_0014");
    runtime.register_function(0x0883EF38u, &recomp_unit_0014, "recomp_unit_0014");
    runtime.register_function(0x0883EF40u, &recomp_unit_0014, "recomp_unit_0014");
    runtime.register_function(0x0883EF4Cu, &recomp_unit_0014, "recomp_unit_0014");
    runtime.register_function(0x0883EF60u, &recomp_unit_0014, "recomp_unit_0014");
    runtime.register_function(0x0883EF6Cu, &recomp_unit_0014, "recomp_unit_0014");
    runtime.register_function(0x0883EF78u, &recomp_unit_0014, "recomp_unit_0014");
    runtime.register_function(0x0883EF88u, &recomp_unit_0014, "recomp_unit_0014");
    runtime.register_function(0x0883EF94u, &recomp_unit_0014, "recomp_unit_0014");
    runtime.register_function(0x0883EFACu, &recomp_unit_0014, "recomp_unit_0014");
    runtime.register_function(0x0883EFBCu, &recomp_unit_0014, "recomp_unit_0014");
    runtime.register_function(0x0883EFC8u, &recomp_unit_0014, "recomp_unit_0014");
    runtime.register_function(0x0883EFD4u, &recomp_unit_0014, "recomp_unit_0014");
    runtime.register_function(0x0883EFE0u, &recomp_unit_0014, "recomp_unit_0014");
    runtime.register_function(0x0883EFF8u, &recomp_unit_0014, "recomp_unit_0014");
    runtime.register_function(0x0883F008u, &recomp_unit_0014, "recomp_unit_0014");
    runtime.register_function(0x0883F014u, &recomp_unit_0014, "recomp_unit_0014");
    runtime.register_function(0x0883F020u, &recomp_unit_0014, "recomp_unit_0014");
    runtime.register_function(0x0883F02Cu, &recomp_unit_0014, "recomp_unit_0014");
    runtime.register_function(0x0883F044u, &recomp_unit_0014, "recomp_unit_0014");
    runtime.register_function(0x0883F04Cu, &recomp_unit_0014, "recomp_unit_0014");
    runtime.register_function(0x0883F058u, &recomp_unit_0014, "recomp_unit_0014");
    runtime.register_function(0x0883F06Cu, &recomp_unit_0014, "recomp_unit_0014");
    runtime.register_function(0x0883F078u, &recomp_unit_0014, "recomp_unit_0014");
    runtime.register_function(0x0883F084u, &recomp_unit_0014, "recomp_unit_0014");
    runtime.register_function(0x0883F090u, &recomp_unit_0014, "recomp_unit_0014");
    runtime.register_function(0x0883F09Cu, &recomp_unit_0014, "recomp_unit_0014");
    runtime.register_function(0x0883F0B4u, &recomp_unit_0014, "recomp_unit_0014");
    runtime.register_function(0x0883F0BCu, &recomp_unit_0014, "recomp_unit_0014");
    runtime.register_function(0x0883F0C8u, &recomp_unit_0014, "recomp_unit_0014");
    runtime.register_function(0x0883F0DCu, &recomp_unit_0014, "recomp_unit_0014");
    runtime.register_function(0x0883F0E8u, &recomp_unit_0014, "recomp_unit_0014");
    runtime.register_function(0x0883F0F4u, &recomp_unit_0014, "recomp_unit_0014");
    runtime.register_function(0x0883F120u, &recomp_unit_0014, "recomp_unit_0014");
    runtime.register_function(0x0883F130u, &recomp_unit_0014, "recomp_unit_0014");
    runtime.register_function(0x0883F144u, &recomp_unit_0014, "recomp_unit_0014");
    runtime.register_function(0x0883F154u, &recomp_unit_0014, "recomp_unit_0014");
    runtime.register_function(0x0883F168u, &recomp_unit_0014, "recomp_unit_0014");
    runtime.register_function(0x0883F178u, &recomp_unit_0014, "recomp_unit_0014");
    runtime.register_function(0x0883F18Cu, &recomp_unit_0014, "recomp_unit_0014");
    runtime.register_function(0x0883F19Cu, &recomp_unit_0014, "recomp_unit_0014");
    runtime.register_function(0x0883F1B0u, &recomp_unit_0014, "recomp_unit_0014");
    runtime.register_function(0x0883F1C0u, &recomp_unit_0014, "recomp_unit_0014");
    runtime.register_function(0x0883F1D4u, &recomp_unit_0014, "recomp_unit_0014");
    runtime.register_function(0x0883F1E4u, &recomp_unit_0014, "recomp_unit_0014");
    runtime.register_function(0x0883F1F8u, &recomp_unit_0014, "recomp_unit_0014");
    runtime.register_function(0x0883F204u, &recomp_unit_0014, "recomp_unit_0014");
    runtime.register_function(0x0883F21Cu, &recomp_unit_0014, "recomp_unit_0014");
    runtime.register_function(0x0883F230u, &recomp_unit_0014, "recomp_unit_0014");
    runtime.register_function(0x0883F244u, &recomp_unit_0014, "recomp_unit_0014");
    runtime.register_function(0x0883F258u, &recomp_unit_0014, "recomp_unit_0014");
    runtime.register_function(0x0883F26Cu, &recomp_unit_0014, "recomp_unit_0014");
    runtime.register_function(0x0883F294u, &recomp_unit_0014, "recomp_unit_0014");
    runtime.register_function(0x0883F2A0u, &recomp_unit_0014, "recomp_unit_0014");
    runtime.register_function(0x0883F2B8u, &recomp_unit_0014, "recomp_unit_0014");
    runtime.register_function(0x0883F2C4u, &recomp_unit_0014, "recomp_unit_0014");
    runtime.register_function(0x0883F2DCu, &recomp_unit_0014, "recomp_unit_0014");
    runtime.register_function(0x0883F2E8u, &recomp_unit_0014, "recomp_unit_0014");
    runtime.register_function(0x0883F300u, &recomp_unit_0014, "recomp_unit_0014");
    runtime.register_function(0x0883F334u, &recomp_unit_0014, "recomp_unit_0014");
    runtime.register_function(0x0883F33Cu, &recomp_unit_0014, "recomp_unit_0014");
    runtime.register_function(0x0883F368u, &recomp_unit_0014, "recomp_unit_0014");
    runtime.register_function(0x0883F378u, &recomp_unit_0014, "recomp_unit_0014");
    runtime.register_function(0x0883F384u, &recomp_unit_0014, "recomp_unit_0014");
    runtime.register_function(0x0883F38Cu, &recomp_unit_0014, "recomp_unit_0014");
    runtime.register_function(0x0883F398u, &recomp_unit_0014, "recomp_unit_0014");
    runtime.register_function(0x0883F3A8u, &recomp_unit_0014, "recomp_unit_0014");
    runtime.register_function(0x0883F3ACu, &recomp_unit_0014, "recomp_unit_0014");
    runtime.register_function(0x0883F3B8u, &recomp_unit_0014, "recomp_unit_0014");
    runtime.register_function(0x0883F3C4u, &recomp_unit_0014, "recomp_unit_0014");
    runtime.register_function(0x0883F41Cu, &recomp_unit_0014, "recomp_unit_0014");
    runtime.register_function(0x0883F44Cu, &recomp_unit_0014, "recomp_unit_0014");
    runtime.register_function(0x0883F470u, &recomp_unit_0014, "recomp_unit_0014");
    runtime.register_function(0x0883F494u, &recomp_unit_0014, "recomp_unit_0014");
    runtime.register_function(0x0883F4C4u, &recomp_unit_0014, "recomp_unit_0014");
    runtime.register_function(0x0883F500u, &recomp_unit_0014, "recomp_unit_0014");
    runtime.register_function(0x0883F508u, &recomp_unit_0014, "recomp_unit_0014");
    runtime.register_function(0x0883F514u, &recomp_unit_0014, "recomp_unit_0014");
    runtime.register_function(0x0883F520u, &recomp_unit_0014, "recomp_unit_0014");
    runtime.register_function(0x0883F52Cu, &recomp_unit_0014, "recomp_unit_0014");
    runtime.register_function(0x0883F584u, &recomp_unit_0014, "recomp_unit_0014");
    runtime.register_function(0x0883F5B4u, &recomp_unit_0014, "recomp_unit_0014");
    runtime.register_function(0x0883F5D8u, &recomp_unit_0014, "recomp_unit_0014");
    runtime.register_function(0x0883F5FCu, &recomp_unit_0014, "recomp_unit_0014");
    runtime.register_function(0x0883F62Cu, &recomp_unit_0014, "recomp_unit_0014");
    runtime.register_function(0x0883F668u, &recomp_unit_0014, "recomp_unit_0014");
    runtime.register_function(0x0883F670u, &recomp_unit_0014, "recomp_unit_0014");
    runtime.register_function(0x0883F674u, &recomp_unit_0014, "recomp_unit_0014");
    runtime.register_function(0x0883F68Cu, &recomp_unit_0014, "recomp_unit_0014");
    runtime.register_function(0x0883F694u, &recomp_unit_0014, "recomp_unit_0014");
    runtime.register_function(0x0883F69Cu, &recomp_unit_0014, "recomp_unit_0014");
    runtime.register_function(0x0883F6A0u, &recomp_unit_0014, "recomp_unit_0014");
    runtime.register_function(0x0883F6A4u, &recomp_unit_0014, "recomp_unit_0014");
    runtime.register_function(0x0883F6B0u, &recomp_unit_0014, "recomp_unit_0014");
    runtime.register_function(0x0883F6B8u, &recomp_unit_0014, "recomp_unit_0014");
    runtime.register_function(0x0883F704u, &recomp_unit_0014, "recomp_unit_0014");
    runtime.register_function(0x0883F734u, &recomp_unit_0014, "recomp_unit_0014");
    runtime.register_function(0x0883F758u, &recomp_unit_0014, "recomp_unit_0014");
    runtime.register_function(0x0883F77Cu, &recomp_unit_0014, "recomp_unit_0014");
    runtime.register_function(0x0883F7ACu, &recomp_unit_0014, "recomp_unit_0014");
    runtime.register_function(0x0883F7E8u, &recomp_unit_0014, "recomp_unit_0014");
    runtime.register_function(0x0883F7F0u, &recomp_unit_0014, "recomp_unit_0014");
    runtime.register_function(0x0883F7FCu, &recomp_unit_0014, "recomp_unit_0014");
    runtime.register_function(0x0883F804u, &recomp_unit_0014, "recomp_unit_0014");
    runtime.register_function(0x0883F808u, &recomp_unit_0014, "recomp_unit_0014");
    runtime.register_function(0x0883F80Cu, &recomp_unit_0014, "recomp_unit_0014");
    runtime.register_function(0x0883F824u, &recomp_unit_0014, "recomp_unit_0014");
    runtime.register_function(0x0883F82Cu, &recomp_unit_0014, "recomp_unit_0014");
    runtime.register_function(0x0883F860u, &recomp_unit_0014, "recomp_unit_0014");
    runtime.register_function(0x0883F870u, &recomp_unit_0014, "recomp_unit_0014");
    runtime.register_function(0x0883F87Cu, &recomp_unit_0014, "recomp_unit_0014");
    runtime.register_function(0x0883F888u, &recomp_unit_0014, "recomp_unit_0014");
    runtime.register_function(0x0883F88Cu, &recomp_unit_0014, "recomp_unit_0014");
    runtime.register_function(0x0883F894u, &recomp_unit_0014, "recomp_unit_0014");
    runtime.register_function(0x0883F8A0u, &recomp_unit_0014, "recomp_unit_0014");
    runtime.register_function(0x0883F8A8u, &recomp_unit_0014, "recomp_unit_0014");
    runtime.register_function(0x0883F8B0u, &recomp_unit_0014, "recomp_unit_0014");
    runtime.register_function(0x0883F8F4u, &recomp_unit_0014, "recomp_unit_0014");
    runtime.register_function(0x0883F924u, &recomp_unit_0014, "recomp_unit_0014");
    runtime.register_function(0x0883F948u, &recomp_unit_0014, "recomp_unit_0014");
    runtime.register_function(0x0883F96Cu, &recomp_unit_0014, "recomp_unit_0014");
    runtime.register_function(0x0883F99Cu, &recomp_unit_0014, "recomp_unit_0014");
    runtime.register_function(0x0883F9D8u, &recomp_unit_0014, "recomp_unit_0014");
    runtime.register_function(0x0883F9DCu, &recomp_unit_0014, "recomp_unit_0014");
    runtime.register_function(0x0883F9F8u, &recomp_unit_0014, "recomp_unit_0014");
    runtime.register_function(0x0883FA2Cu, &recomp_unit_0014, "recomp_unit_0014");
    runtime.register_function(0x0883FA48u, &recomp_unit_0014, "recomp_unit_0014");
    runtime.register_function(0x0883FA64u, &recomp_unit_0014, "recomp_unit_0014");
    runtime.register_function(0x0883FA70u, &recomp_unit_0014, "recomp_unit_0014");
    runtime.register_function(0x0883FA8Cu, &recomp_unit_0014, "recomp_unit_0014");
    runtime.register_function(0x0883FA9Cu, &recomp_unit_0014, "recomp_unit_0014");
    runtime.register_function(0x0883FAB8u, &recomp_unit_0014, "recomp_unit_0014");
    runtime.register_function(0x0883FAD4u, &recomp_unit_0014, "recomp_unit_0014");
    runtime.register_function(0x0883FAE0u, &recomp_unit_0014, "recomp_unit_0014");
    runtime.register_function(0x0883FAFCu, &recomp_unit_0014, "recomp_unit_0014");
    runtime.register_function(0x0883FB0Cu, &recomp_unit_0014, "recomp_unit_0014");
    runtime.register_function(0x0883FB30u, &recomp_unit_0014, "recomp_unit_0014");
    runtime.register_function(0x0883FB4Cu, &recomp_unit_0014, "recomp_unit_0014");
    runtime.register_function(0x0883FB70u, &recomp_unit_0014, "recomp_unit_0014");
    runtime.register_function(0x0883FB80u, &recomp_unit_0014, "recomp_unit_0014");
    runtime.register_function(0x0883FBA8u, &recomp_unit_0014, "recomp_unit_0014");
    runtime.register_function(0x0883FBB8u, &recomp_unit_0014, "recomp_unit_0014");
    runtime.register_function(0x0883FBC4u, &recomp_unit_0014, "recomp_unit_0014");
    runtime.register_function(0x0883FBE0u, &recomp_unit_0014, "recomp_unit_0014");
    runtime.register_function(0x0883FBF4u, &recomp_unit_0014, "recomp_unit_0014");
    runtime.register_function(0x0883FC10u, &recomp_unit_0014, "recomp_unit_0014");
    runtime.register_function(0x0883FC20u, &recomp_unit_0014, "recomp_unit_0014");
    runtime.register_function(0x0883FC38u, &recomp_unit_0014, "recomp_unit_0014");
    runtime.register_function(0x0883FC48u, &recomp_unit_0014, "recomp_unit_0014");
    runtime.register_function(0x0883FC60u, &recomp_unit_0014, "recomp_unit_0014");
    runtime.register_function(0x0883FC70u, &recomp_unit_0014, "recomp_unit_0014");
    runtime.register_function(0x0883FC88u, &recomp_unit_0014, "recomp_unit_0014");
    runtime.register_function(0x0883FC98u, &recomp_unit_0014, "recomp_unit_0014");
    runtime.register_function(0x0883FCB0u, &recomp_unit_0014, "recomp_unit_0014");
    runtime.register_function(0x0883FCC4u, &recomp_unit_0014, "recomp_unit_0014");
    runtime.register_function(0x0883FCDCu, &recomp_unit_0014, "recomp_unit_0014");
    runtime.register_function(0x0883FCECu, &recomp_unit_0014, "recomp_unit_0014");
    runtime.register_function(0x0883FD04u, &recomp_unit_0014, "recomp_unit_0014");
    runtime.register_function(0x0883FD14u, &recomp_unit_0014, "recomp_unit_0014");
    runtime.register_function(0x0883FD2Cu, &recomp_unit_0014, "recomp_unit_0014");
    runtime.register_function(0x0883FD40u, &recomp_unit_0014, "recomp_unit_0014");
    runtime.register_function(0x0883FD4Cu, &recomp_unit_0014, "recomp_unit_0014");
    runtime.register_function(0x0883FD68u, &recomp_unit_0014, "recomp_unit_0014");
    runtime.register_function(0x0883FD74u, &recomp_unit_0014, "recomp_unit_0014");
    runtime.register_function(0x0883FD88u, &recomp_unit_0014, "recomp_unit_0014");
    runtime.register_function(0x0883FD94u, &recomp_unit_0014, "recomp_unit_0014");
    runtime.register_function(0x0883FDA8u, &recomp_unit_0014, "recomp_unit_0014");
    runtime.register_function(0x0883FDB4u, &recomp_unit_0014, "recomp_unit_0014");
    runtime.register_function(0x0883FDCCu, &recomp_unit_0014, "recomp_unit_0014");
    runtime.register_function(0x0883FDDCu, &recomp_unit_0014, "recomp_unit_0014");
    runtime.register_function(0x0883FDE4u, &recomp_unit_0014, "recomp_unit_0014");
    runtime.register_function(0x0883FDECu, &recomp_unit_0014, "recomp_unit_0014");
    runtime.register_function(0x0883FDF4u, &recomp_unit_0014, "recomp_unit_0014");
    runtime.register_function(0x0883FE10u, &recomp_unit_0014, "recomp_unit_0014");
    runtime.register_function(0x0883FE2Cu, &recomp_unit_0014, "recomp_unit_0014");
    runtime.register_function(0x0883FE38u, &recomp_unit_0014, "recomp_unit_0014");
    runtime.register_function(0x0883FE54u, &recomp_unit_0014, "recomp_unit_0014");
    runtime.register_function(0x0883FE60u, &recomp_unit_0014, "recomp_unit_0014");
    runtime.register_function(0x0883FE7Cu, &recomp_unit_0014, "recomp_unit_0014");
    runtime.register_function(0x0883FE88u, &recomp_unit_0014, "recomp_unit_0014");
    runtime.register_function(0x0883FEA4u, &recomp_unit_0014, "recomp_unit_0014");
    runtime.register_function(0x0883FEB0u, &recomp_unit_0014, "recomp_unit_0014");
    runtime.register_function(0x0883FED0u, &recomp_unit_0014, "recomp_unit_0014");
    runtime.register_function(0x0883FEDCu, &recomp_unit_0014, "recomp_unit_0014");
    runtime.register_function(0x0883FEF8u, &recomp_unit_0014, "recomp_unit_0014");
    runtime.register_function(0x0883FF04u, &recomp_unit_0014, "recomp_unit_0014");
    runtime.register_function(0x0883FF20u, &recomp_unit_0014, "recomp_unit_0014");
    runtime.register_function(0x0883FF30u, &recomp_unit_0014, "recomp_unit_0014");
    runtime.register_function(0x0883FF3Cu, &recomp_unit_0014, "recomp_unit_0014");
    runtime.register_function(0x0883FF48u, &recomp_unit_0014, "recomp_unit_0014");
    runtime.register_function(0x0883FF70u, &recomp_unit_0014, "recomp_unit_0014");
    runtime.register_function(0x0883FF94u, &recomp_unit_0014, "recomp_unit_0014");
    runtime.register_function(0x0883FF9Cu, &recomp_unit_0014, "recomp_unit_0014");
    runtime.register_function(0x0883FFA8u, &recomp_unit_0014, "recomp_unit_0014");
    runtime.register_function(0x0883FFB0u, &recomp_unit_0014, "recomp_unit_0014");
    runtime.register_function(0x0883FFB8u, &recomp_unit_0014, "recomp_unit_0014");
    runtime.register_function(0x0883FFC0u, &recomp_unit_0014, "recomp_unit_0014");
    runtime.register_function(0x0883FFC8u, &recomp_unit_0014, "recomp_unit_0014");
    runtime.register_function(0x0883FFD0u, &recomp_unit_0014, "recomp_unit_0014");
    runtime.register_function(0x0883FFD8u, &recomp_unit_0014, "recomp_unit_0014");
    runtime.register_function(0x0883FFE0u, &recomp_unit_0014, "recomp_unit_0014");
    runtime.register_function(0x0883FFF0u, &recomp_unit_0014, "recomp_unit_0014");
    runtime.register_function(0x0883FFF8u, &recomp_unit_0014, "recomp_unit_0014");
}
} // namespace psprecomp
