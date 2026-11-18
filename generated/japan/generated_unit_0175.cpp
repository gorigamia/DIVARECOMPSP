#include "psprecomp/runtime.hpp"
#include "generated_units.hpp"
#include <bit>
#include <cmath>
#include <cstdint>
#include <limits>

namespace psprecomp {
static const std::uint16_t kEntryIds_recomp_unit_0175[4091] = {
    1, 2, 0, 0, 0, 3, 0, 4, 0, 5, 0, 0, 0, 6, 0, 7, 0, 0, 8, 9, 0, 0, 10, 11, 0, 0, 0, 12, 0, 0, 0, 0,
    13, 14, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 15, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 16, 0, 0,
    0, 17, 0, 0, 18, 0, 0, 0, 0, 19, 0, 0, 0, 0, 0, 20, 0, 21, 0, 22, 0, 0, 0, 23, 0, 0, 24, 0, 25, 0, 0, 0,
    0, 0, 26, 0, 0, 0, 27, 0, 0, 0, 0, 28, 0, 0, 0, 0, 0, 0, 0, 29, 0, 30, 0, 31, 0, 0, 0, 32, 0, 33, 0, 34,
    0, 0, 0, 35, 0, 36, 0, 0, 37, 38, 0, 0, 39, 0, 0, 0, 40, 41, 0, 0, 0, 0, 0, 0, 0, 0, 0, 42, 0, 0, 0, 0,
    0, 43, 0, 0, 44, 0, 45, 0, 46, 0, 0, 47, 0, 48, 0, 49, 0, 50, 0, 51, 0, 52, 0, 0, 0, 0, 0, 0, 0, 0, 53, 54,
    0, 0, 55, 0, 0, 0, 0, 0, 0, 0, 0, 56, 0, 0, 57, 0, 58, 0, 59, 0, 0, 0, 0, 0, 0, 0, 60, 0, 61, 62, 0, 0,
    0, 0, 0, 63, 0, 64, 0, 0, 65, 0, 66, 0, 0, 67, 0, 68, 0, 69, 0, 70, 0, 0, 71, 0, 72, 0, 0, 73, 0, 74, 0, 0,
    75, 76, 0, 77, 0, 0, 78, 0, 79, 0, 80, 0, 0, 0, 0, 0, 0, 81, 0, 82, 0, 83, 0, 84, 0, 85, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 86, 87, 0, 0, 0, 0, 88, 0, 89, 0, 0, 0, 0, 0, 0, 90, 0, 0, 91, 0, 92, 0, 93, 0, 0, 94, 0, 0,
    95, 96, 0, 0, 0, 97, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 98, 0, 99, 0, 100, 0, 0, 101, 0, 0, 0, 102, 0, 0,
    0, 103, 0, 0, 0, 0, 104, 0, 105, 0, 106, 0, 107, 0, 0, 108, 0, 0, 109, 0, 0, 110, 0, 111, 0, 0, 0, 112, 0, 0, 113, 0,
    0, 0, 0, 114, 0, 115, 0, 0, 116, 0, 0, 117, 0, 0, 0, 0, 0, 0, 0, 118, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 119,
    0, 0, 120, 0, 0, 0, 0, 121, 0, 122, 0, 0, 0, 123, 0, 0, 0, 0, 0, 0, 0, 0, 0, 124, 0, 125, 0, 0, 126, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 127, 0, 128, 0, 0, 0, 129, 0, 0, 0, 0, 130, 0, 0, 0, 0, 131, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 132, 133, 0, 0, 0, 0, 0, 0, 0, 0, 134, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 135, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 136, 0, 137, 0, 0, 0, 0, 0, 138, 0, 0, 0, 139, 0, 0, 0, 0, 0, 0, 140, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    141, 0, 0, 0, 0, 0, 142, 0, 143, 0, 0, 144, 0, 0, 0, 0, 145, 0, 0, 0, 146, 0, 0, 0, 0, 0, 147, 0, 0, 148, 0, 0,
    0, 0, 0, 0, 0, 149, 0, 0, 0, 0, 0, 0, 150, 0, 151, 0, 0, 0, 152, 0, 0, 0, 0, 0, 153, 0, 0, 0, 0, 0, 0, 0,
    154, 0, 155, 0, 0, 0, 0, 0, 0, 0, 156, 0, 157, 0, 0, 0, 0, 0, 158, 0, 0, 0, 159, 0, 160, 0, 0, 0, 0, 161, 0, 0,
    0, 0, 162, 0, 163, 0, 0, 164, 0, 0, 165, 0, 0, 0, 0, 0, 0, 0, 166, 0, 0, 167, 0, 168, 0, 0, 169, 0, 170, 0, 171, 0,
    0, 0, 0, 172, 0, 0, 0, 0, 173, 0, 0, 0, 0, 174, 0, 175, 0, 0, 0, 176, 0, 0, 0, 0, 0, 0, 0, 0, 0, 177, 0, 178,
    0, 0, 179, 0, 180, 0, 181, 0, 0, 0, 0, 182, 0, 0, 0, 183, 0, 0, 0, 0, 0, 184, 0, 0, 185, 0, 186, 0, 187, 0, 0, 188,
    0, 0, 0, 0, 0, 0, 0, 189, 0, 0, 0, 190, 0, 0, 0, 0, 0, 0, 0, 0, 191, 192, 0, 0, 0, 0, 0, 193, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 194, 0, 195, 0, 0,
    0, 0, 196, 0, 197, 0, 198, 0, 0, 199, 200, 0, 201, 0, 202, 0, 0, 203, 0, 204, 0, 205, 0, 0, 206, 0, 0, 0, 0, 0, 207, 0,
    0, 0, 0, 0, 0, 0, 0, 208, 0, 0, 209, 0, 0, 0, 0, 0, 0, 210, 0, 0, 0, 211, 0, 212, 0, 0, 0, 0, 0, 0, 213, 0,
    214, 0, 0, 0, 0, 0, 0, 215, 0, 216, 0, 217, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 218, 0, 0, 0, 0, 0, 0, 219, 0, 0, 220, 0, 221, 0, 0, 0, 0, 0, 222, 0, 223, 0, 224, 0, 225, 0, 226, 0, 0, 227, 0,
    0, 228, 0, 0, 0, 229, 0, 0, 0, 0, 0, 230, 0, 0, 231, 0, 232, 0, 233, 0, 0, 234, 0, 0, 0, 0, 0, 0, 0, 235, 0, 0,
    0, 236, 0, 0, 0, 0, 237, 0, 0, 0, 0, 0, 0, 0, 0, 0, 238, 0, 0, 0, 0, 239, 0, 0, 0, 0, 0, 0, 240, 0, 241, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 242, 0, 0, 0, 0, 0, 0, 0, 0, 243,
    0, 0, 0, 0, 244, 0, 0, 0, 0, 245, 0, 0, 0, 0, 0, 0, 0, 0, 246, 0, 247, 0, 248, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    249, 0, 0, 250, 0, 0, 251, 0, 252, 0, 253, 0, 254, 0, 0, 0, 255, 0, 256, 0, 0, 257, 0, 258, 0, 0, 259, 0, 260, 0, 0, 261,
    0, 262, 0, 263, 0, 264, 0, 0, 0, 0, 265, 0, 0, 0, 0, 0, 0, 0, 266, 0, 0, 0, 267, 0, 268, 269, 0, 270, 0, 271, 0, 272,
    0, 0, 273, 274, 0, 0, 0, 0, 0, 275, 0, 0, 0, 0, 0, 0, 0, 0, 276, 0, 277, 0, 0, 278, 0, 279, 0, 0, 280, 0, 0, 281,
    0, 282, 0, 0, 283, 0, 0, 284, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 285, 0, 0, 286, 0, 0, 0, 0, 0, 287, 0, 0, 0,
    0, 0, 288, 0, 289, 0, 290, 0, 0, 0, 291, 0, 0, 0, 292, 0, 0, 0, 0, 293, 0, 0, 0, 0, 0, 294, 0, 0, 295, 0, 0, 0,
    0, 296, 0, 297, 0, 0, 0, 298, 299, 0, 300, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 301, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    302, 0, 0, 0, 0, 0, 0, 0, 303, 0, 0, 0, 0, 0, 0, 0, 304, 0, 0, 0, 305, 0, 0, 0, 306, 0, 0, 0, 0, 0, 0, 307,
    0, 0, 308, 0, 0, 0, 309, 0, 310, 0, 0, 0, 311, 0, 312, 0, 313, 0, 314, 0, 315, 0, 316, 0, 317, 0, 0, 0, 0, 318, 0, 0,
    0, 0, 0, 0, 0, 0, 319, 0, 0, 0, 0, 320, 0, 0, 0, 0, 0, 321, 0, 0, 322, 0, 0, 0, 323, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 324, 0, 0, 0, 0, 0, 325, 0, 0, 0, 0, 0, 0, 326, 0, 327, 0, 0,
    0, 328, 0, 329, 0, 0, 0, 0, 0, 330, 0, 0, 0, 331, 0, 0, 0, 332, 0, 0, 0, 333, 0, 0, 0, 334, 0, 335, 0, 336, 0, 0,
    337, 0, 0, 0, 0, 0, 0, 338, 0, 339, 0, 0, 0, 0, 0, 0, 0, 0, 0, 340, 0, 341, 0, 0, 0, 0, 342, 0, 0, 0, 0, 343,
    0, 344, 0, 345, 0, 0, 346, 0, 0, 0, 347, 0, 0, 348, 0, 0, 0, 349, 0, 350, 0, 0, 0, 0, 0, 351, 0, 352, 0, 353, 0, 0,
    354, 0, 0, 355, 0, 0, 356, 0, 0, 0, 0, 0, 357, 0, 358, 0, 0, 0, 0, 359, 0, 0, 360, 361, 0, 0, 0, 362, 0, 363, 0, 0,
    0, 364, 365, 366, 0, 0, 367, 0, 368, 0, 369, 0, 0, 0, 0, 370, 0, 0, 371, 0, 0, 372, 373, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 374, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 375, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 376, 0, 0, 0, 0, 0, 377,
    0, 0, 378, 0, 379, 0, 380, 0, 381, 0, 382, 0, 383, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 384, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 385, 0, 0, 0, 0, 0, 0, 0, 386, 387, 388, 0, 0, 389, 0, 0, 0, 0, 390, 0, 0, 0, 391, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 392, 0, 393, 0, 394, 0, 0, 395, 0, 0, 0, 396, 0, 0, 397, 0, 0, 0, 0, 398, 0, 399, 0, 400, 0, 401, 0, 0,
    402, 0, 0, 403, 0, 404, 0, 405, 0, 0, 0, 0, 406, 0, 0, 0, 0, 0, 407, 0, 0, 0, 0, 408, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 409, 0, 410, 0, 0, 0, 0, 411, 0, 412, 0, 0, 0, 413, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 414, 0, 0, 0, 0, 0, 0, 415, 0, 0, 416, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 417, 418, 0,
    0, 0, 0, 0, 0, 0, 419, 0, 0, 0, 0, 0, 0, 0, 0, 0, 420, 0, 421, 0, 0, 0, 0, 0, 422, 0, 0, 0, 423, 0, 0, 0,
    0, 0, 0, 424, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 425, 0, 0, 0, 0, 0, 426, 0, 427, 0, 428, 0, 0, 429, 0, 0, 0,
    0, 430, 0, 0, 0, 431, 0, 0, 0, 432, 0, 0, 0, 0, 0, 433, 0, 0, 434, 0, 0, 0, 0, 0, 0, 0, 0, 0, 435, 0, 0, 0,
    0, 0, 0, 436, 0, 0, 437, 0, 438, 0, 439, 0, 0, 0, 0, 440, 0, 0, 441, 0, 0, 442, 0, 443, 0, 444, 0, 0, 0, 0, 0, 445,
    0, 0, 0, 446, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 447, 0, 448, 0, 0, 449, 0, 450, 0, 451, 0, 0, 0, 0, 452, 453, 0, 454,
    0, 455, 0, 456, 0, 0, 457, 0, 0, 0, 458, 0, 0, 0, 0, 0, 0, 0, 0, 0, 459, 0, 0, 0, 0, 460, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 461, 0, 462, 0, 463, 0, 464, 0, 465, 0, 0, 0, 0, 466, 0, 0, 467, 468, 0, 0, 0, 0, 469, 0, 0, 0, 0, 0, 0,
    470, 0, 0, 471, 0, 472, 0, 473, 0, 0, 474, 0, 0, 0, 0, 0, 0, 0, 0, 0, 475, 0, 0, 0, 476, 0, 0, 0, 0, 0, 477, 0,
    0, 478, 0, 479, 0, 480, 0, 481, 0, 482, 0, 0, 0, 0, 483, 0, 0, 0, 0, 0, 484, 0, 0, 0, 0, 0, 0, 485, 0, 0, 486, 0,
    0, 0, 0, 0, 487, 0, 0, 488, 0, 0, 0, 0, 0, 0, 0, 0, 0, 489, 0, 0, 0, 490, 0, 0, 0, 0, 0, 0, 491, 0, 0, 492,
    0, 493, 0, 494, 0, 495, 0, 496, 0, 0, 497, 0, 0, 0, 0, 0, 0, 0, 0, 0, 498, 0, 0, 0, 499, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 500, 0, 0, 0, 0, 0, 0, 0, 501, 0, 502, 0, 0, 0, 0, 503,
    0, 0, 0, 0, 0, 0, 0, 504, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 505, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 506, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 507, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 508, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 509, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 510, 0, 0, 0, 0, 0, 0, 0, 0, 511, 0, 0, 0, 0, 0, 512, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 513, 0, 514, 0, 0, 0, 515, 0, 516, 0, 517, 0, 518, 0, 519, 0, 520, 0, 521, 0, 522, 0, 523, 524, 0, 525, 0, 526,
    0, 0, 527, 528, 0, 529, 0, 530, 0, 531, 0, 532, 0, 533, 0, 534, 0, 535, 0, 536, 0, 537, 0, 538, 0, 539, 0, 540, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 541, 0, 0, 542, 0, 543, 0, 544, 0, 0, 0, 545, 0, 0, 0, 546, 0, 547, 0, 0, 548, 0, 549, 0, 550, 0, 551,
    0, 0, 0, 0, 552, 0, 0, 0, 0, 0, 0, 0, 0, 0, 553, 0, 0, 554, 0, 555, 0, 0, 0, 556, 0, 557, 0, 0, 558, 0, 0, 559,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 560, 0, 561, 0, 562, 0, 0, 0, 563, 0, 0, 0, 0, 0, 564, 0, 565, 0, 0, 566, 0,
    0, 0, 567, 0, 0, 0, 568, 0, 0, 0, 0, 0, 569, 0, 0, 0, 0, 0, 570, 0, 0, 0, 571, 0, 0, 572, 0, 0, 0, 0, 573, 0,
    574, 0, 0, 0, 575, 576, 0, 577, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 578, 0, 0, 0, 0, 0, 0, 0, 0, 0, 579, 0, 0,
    0, 0, 0, 0, 0, 580, 0, 0, 0, 0, 0, 0, 0, 0, 581, 0, 0, 0, 582, 0, 0, 0, 583, 0, 0, 0, 0, 0, 584, 0, 0, 0,
    585, 0, 586, 0, 587, 0, 588, 0, 589, 0, 590, 0, 591, 0, 592, 0, 593, 0, 0, 0, 594, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 595, 0, 0, 0, 0, 596, 0, 597, 0, 598, 0, 0, 0, 0, 0, 599, 0, 0, 600, 0, 601, 0, 0, 602, 0, 0, 603, 604, 0, 605, 0,
    0, 606, 607, 0, 608, 0, 0, 609, 610, 0, 611, 0, 0, 612, 613, 0, 614, 0, 615, 0, 616, 0, 617, 0, 618, 0, 0, 0, 619, 0, 0, 0,
    620, 0, 0, 621, 622, 0, 623, 0, 0, 624, 0, 0, 625, 0, 0, 0, 0, 0, 626, 0, 0, 0, 627, 0, 0, 0, 628, 0, 0, 629, 0, 0,
    630, 0, 0, 631, 0, 632, 0, 633, 634, 0, 0, 0, 0, 0, 635, 636, 0, 0, 0, 0, 0, 637, 638, 0, 0, 0, 0, 0, 639, 0, 640, 641,
    0, 0, 642, 643, 0, 0, 0, 0, 0, 644, 0, 0, 0, 0, 0, 0, 645, 0, 646, 0, 647, 0, 0, 648, 0, 649, 0, 650, 0, 651, 0, 652,
    0, 653, 0, 654, 0, 655, 0, 656, 0, 657, 0, 658, 0, 659, 0, 660, 0, 661, 662, 0, 0, 0, 0, 663, 664, 0, 0, 0, 665, 0, 0, 0,
    0, 0, 0, 0, 666, 0, 667, 0, 0, 0, 0, 0, 668, 0, 0, 669, 0, 670, 0, 671, 0, 672, 0, 673, 0, 674, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 675, 0, 0, 0, 0, 0, 0, 0, 0, 0, 676, 0, 0, 0, 0, 0, 0, 0, 677, 678, 679, 0, 0, 680, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 681, 0, 0, 0, 682, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 683, 0, 684, 0, 685, 0,
    686, 0, 0, 687, 0, 0, 688, 0, 0, 0, 689, 0, 0, 690, 0, 0, 691, 692, 0, 0, 0, 0, 693, 0, 694, 0, 695, 0, 696, 0, 0, 697,
    0, 0, 698, 0, 0, 699, 0, 0, 700, 0, 701, 0, 702, 0, 0, 0, 0, 0, 703, 0, 0, 0, 0, 0, 704, 0, 0, 0, 0, 705, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 706, 0, 707, 0, 0, 0, 0, 708, 0, 709, 0, 0, 0, 710, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 711, 712, 0, 713, 0, 714, 0, 0, 0, 0, 0, 0, 715, 0, 0, 716, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 717, 718, 0, 0, 0, 0, 0, 0, 0, 0, 719, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    720, 0, 721, 0, 0, 0, 722, 0, 0, 723, 0, 0, 724, 0, 725, 0, 726, 0, 0, 727, 0, 728, 0, 0, 729, 0, 730, 0, 0, 731, 0, 0,
    0, 0, 0, 732, 0, 0, 0, 0, 733, 0, 0, 0, 0, 734, 0, 735, 0, 0, 736, 0, 737, 0, 0, 0, 738, 0, 739, 0, 740, 0, 0, 0,
    741, 0, 742, 0, 743, 0, 0, 0, 744, 0, 745, 0, 746, 0, 0, 0, 747, 0, 748, 0, 749, 0, 0, 0, 750, 0, 751, 0, 752, 0, 0, 0,
    753, 754, 0, 0, 0, 0, 0, 0, 0, 0, 755, 0, 0, 0, 0, 0, 0, 0, 0, 0, 756, 0, 0, 0, 0, 0, 757, 0, 758, 0, 0, 759,
    0, 0, 0, 0, 760, 0, 0, 0, 761, 0, 0, 0, 0, 0, 762, 0, 0, 763, 0, 0, 0, 0, 0, 0, 0, 764, 0, 0, 0, 0, 0, 0,
    0, 0, 765, 0, 0, 766, 0, 767, 0, 768, 0, 0, 0, 0, 769, 0, 0, 0, 0, 770, 0, 0, 771, 0, 772, 0, 773, 0, 0, 0, 0, 0,
    774, 0, 0, 0, 775, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 776, 0, 777, 0, 0, 778, 0, 779, 0, 780, 0, 0, 0, 0, 781, 782, 0,
    783, 0, 784, 0, 785, 0, 0, 786, 0, 0, 0, 787, 0, 0, 0, 0, 0, 0, 0, 0, 0, 788, 0, 0, 0, 0, 0, 789, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 790, 0, 0, 791, 0, 0, 792, 0, 0, 0, 0, 793, 0, 0, 794, 0, 0, 0, 0, 0, 0,
    795, 0, 796, 0, 797, 0, 798, 0, 799, 0, 800, 801, 802, 0, 803, 0, 804, 0, 0, 805, 806, 0, 0, 0, 807, 0, 808, 0, 0, 809, 0, 0,
    0, 810, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 811, 0, 0, 0, 0, 0, 0, 0, 0, 0, 812, 0, 813, 0, 814, 0, 0, 815, 816, 0,
    0, 817, 0, 0, 818, 0, 819, 0, 820, 0, 0, 0, 0, 0, 0, 821, 0, 0, 0, 822, 0, 823, 0, 0, 0, 0, 824, 825, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 826, 0, 0, 0, 0, 0, 827, 0, 828, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 829, 0, 830, 0, 831,
    832, 0, 0, 0, 833, 0, 834, 0, 0, 0, 835, 0, 0, 836, 0, 837, 0, 0, 838, 0, 0, 839, 0, 0, 840, 0, 841, 0, 0, 0, 0, 842,
    843, 844, 0, 0, 0, 0, 0, 0, 0, 845, 0, 0, 846, 0, 847, 0, 0, 848, 0, 0, 0, 849, 0, 0, 0, 850, 0, 851, 0, 0, 0, 0,
    852, 853, 0, 0, 0, 0, 854, 855, 0, 0, 0, 0, 0, 0, 0, 856, 0, 857, 0, 858, 0, 0, 859, 0, 0, 860, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 861, 0, 0, 0, 0, 0, 862, 0, 0, 0, 0, 0, 0, 863, 0, 864, 0, 0, 0, 865, 0, 0, 0, 0, 0, 0, 0, 866, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 867, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 868, 0, 0, 0, 0, 869, 0, 870, 0, 0, 0, 0, 0, 0, 0, 871, 0, 0,
    0, 872, 0, 0, 0, 0, 0, 0, 0, 0, 0, 873, 0, 0, 874, 0, 875, 0, 0, 0, 876, 0, 877, 0, 0, 878, 0, 0, 879, 0, 0, 880,
    0, 0, 881, 0, 0, 0, 0, 0, 882, 0, 883, 0, 0, 0, 0, 0, 884, 0, 885, 0, 886, 0, 887, 0, 0, 888, 0, 0, 0, 889, 0, 0,
    0, 890, 0, 0, 0, 0, 0, 891, 0, 0, 0, 892, 0, 0, 0, 0, 893, 0, 0, 894, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 895, 0, 896, 0, 0, 0, 0, 0, 0, 897, 0, 898, 0, 899, 0, 900, 0, 901,
    0, 902, 0, 903, 0, 904, 0, 905, 0, 0, 906, 0, 0, 0, 907, 0, 0, 0, 0, 0, 0, 908, 0, 0, 0, 0, 0, 909, 0, 0, 0, 0,
    910, 0, 0, 0, 0, 0, 911, 0, 0, 912, 0, 913, 0, 914, 0, 915, 0, 916, 0, 917, 0, 0, 0, 0, 0, 0, 0, 0, 918, 919, 0, 0,
    920, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 921, 0, 0, 0, 922, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 923, 0, 924,
    0, 925, 0, 926, 0, 0, 927, 0, 0, 928, 0, 0, 0, 929, 0, 0, 930, 0, 0, 931, 932, 0, 0, 0, 0, 933, 0, 934, 0, 935, 0, 936,
    0, 0, 937, 0, 938, 0, 0, 0, 0, 939, 0, 940, 0, 0, 941, 0, 0, 942, 0, 0, 943, 0, 0, 0, 0, 0, 944, 945, 0, 0, 946, 0,
    947, 0, 0, 0, 948, 0, 0, 0, 0, 0, 0, 0, 0, 949, 950, 0, 0, 0, 0, 0, 0, 0, 951, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 952, 0, 953, 0, 0, 0, 0, 0, 954, 0, 955, 0, 0, 0, 956, 957, 0, 0, 0, 0, 0, 958, 0, 0, 0, 0, 0, 0, 0, 959, 0,
    960, 0, 961, 0, 0, 962, 0, 963, 0, 964, 0, 0, 0, 0, 0, 965, 966, 0, 0, 0, 0, 967, 0, 0, 0, 968, 0, 0, 0, 0, 0, 0,
    969, 0, 0, 0, 0, 0, 0, 970, 0, 0, 971, 0, 0, 972, 0, 0, 973, 0, 974, 975, 0, 0, 0, 0, 976, 0, 977,
};
void recomp_unit_0175_entry(Runtime &rt, AllegrexContext &ctx, std::uint16_t direct_entry_id, GuestMemory::AotFastView &aot_mem) {
    std::uint32_t jump_target = 0u;
    std::uint32_t local_transfers = 0u;
    std::uint32_t local_pc = ctx.pc;
    std::uint32_t entry_id = direct_entry_id;
LOCAL_DISPATCH:
    {
    if (entry_id == 0u) {
        const std::uint32_t entry_delta = local_pc - 0x08AC0000u;
        entry_id = (entry_delta < 16364u && (entry_delta & 3u) == 0u) ? kEntryIds_recomp_unit_0175[entry_delta >> 2u] : 0u;
    }
    switch (entry_id) {
    case 1u: goto L_08AC0000;
    case 2u: goto L_08AC0004;
    case 3u: goto L_08AC0014;
    case 4u: goto L_08AC001C;
    case 5u: goto L_08AC0024;
    case 6u: goto L_08AC0034;
    case 7u: goto L_08AC003C;
    case 8u: goto L_08AC0048;
    case 9u: goto L_08AC004C;
    case 10u: goto L_08AC0058;
    case 11u: goto L_08AC005C;
    case 12u: goto L_08AC006C;
    case 13u: goto L_08AC0080;
    case 14u: goto L_08AC0084;
    case 15u: goto L_08AC00B0;
    case 16u: goto L_08AC00F4;
    case 17u: goto L_08AC0104;
    case 18u: goto L_08AC0110;
    case 19u: goto L_08AC0124;
    case 20u: goto L_08AC013C;
    case 21u: goto L_08AC0144;
    case 22u: goto L_08AC014C;
    case 23u: goto L_08AC015C;
    case 24u: goto L_08AC0168;
    case 25u: goto L_08AC0170;
    case 26u: goto L_08AC0188;
    case 27u: goto L_08AC0198;
    case 28u: goto L_08AC01AC;
    case 29u: goto L_08AC01CC;
    case 30u: goto L_08AC01D4;
    case 31u: goto L_08AC01DC;
    case 32u: goto L_08AC01EC;
    case 33u: goto L_08AC01F4;
    case 34u: goto L_08AC01FC;
    case 35u: goto L_08AC020C;
    case 36u: goto L_08AC0214;
    case 37u: goto L_08AC0220;
    case 38u: goto L_08AC0224;
    case 39u: goto L_08AC0230;
    case 40u: goto L_08AC0240;
    case 41u: goto L_08AC0244;
    case 42u: goto L_08AC026C;
    case 43u: goto L_08AC0284;
    case 44u: goto L_08AC0290;
    case 45u: goto L_08AC0298;
    case 46u: goto L_08AC02A0;
    case 47u: goto L_08AC02AC;
    case 48u: goto L_08AC02B4;
    case 49u: goto L_08AC02BC;
    case 50u: goto L_08AC02C4;
    case 51u: goto L_08AC02CC;
    case 52u: goto L_08AC02D4;
    case 53u: goto L_08AC02F8;
    case 54u: goto L_08AC02FC;
    case 55u: goto L_08AC0308;
    case 56u: goto L_08AC032C;
    case 57u: goto L_08AC0338;
    case 58u: goto L_08AC0340;
    case 59u: goto L_08AC0348;
    case 60u: goto L_08AC0368;
    case 61u: goto L_08AC0370;
    case 62u: goto L_08AC0374;
    case 63u: goto L_08AC038C;
    case 64u: goto L_08AC0394;
    case 65u: goto L_08AC03A0;
    case 66u: goto L_08AC03A8;
    case 67u: goto L_08AC03B4;
    case 68u: goto L_08AC03BC;
    case 69u: goto L_08AC03C4;
    case 70u: goto L_08AC03CC;
    case 71u: goto L_08AC03D8;
    case 72u: goto L_08AC03E0;
    case 73u: goto L_08AC03EC;
    case 74u: goto L_08AC03F4;
    case 75u: goto L_08AC0400;
    case 76u: goto L_08AC0404;
    case 77u: goto L_08AC040C;
    case 78u: goto L_08AC0418;
    case 79u: goto L_08AC0420;
    case 80u: goto L_08AC0428;
    case 81u: goto L_08AC0444;
    case 82u: goto L_08AC044C;
    case 83u: goto L_08AC0454;
    case 84u: goto L_08AC045C;
    case 85u: goto L_08AC0464;
    case 86u: goto L_08AC0490;
    case 87u: goto L_08AC0494;
    case 88u: goto L_08AC04A8;
    case 89u: goto L_08AC04B0;
    case 90u: goto L_08AC04CC;
    case 91u: goto L_08AC04D8;
    case 92u: goto L_08AC04E0;
    case 93u: goto L_08AC04E8;
    case 94u: goto L_08AC04F4;
    case 95u: goto L_08AC0500;
    case 96u: goto L_08AC0504;
    case 97u: goto L_08AC0514;
    case 98u: goto L_08AC0548;
    case 99u: goto L_08AC0550;
    case 100u: goto L_08AC0558;
    case 101u: goto L_08AC0564;
    case 102u: goto L_08AC0574;
    case 103u: goto L_08AC0584;
    case 104u: goto L_08AC0598;
    case 105u: goto L_08AC05A0;
    case 106u: goto L_08AC05A8;
    case 107u: goto L_08AC05B0;
    case 108u: goto L_08AC05BC;
    case 109u: goto L_08AC05C8;
    case 110u: goto L_08AC05D4;
    case 111u: goto L_08AC05DC;
    case 112u: goto L_08AC05EC;
    case 113u: goto L_08AC05F8;
    case 114u: goto L_08AC060C;
    case 115u: goto L_08AC0614;
    case 116u: goto L_08AC0620;
    case 117u: goto L_08AC062C;
    case 118u: goto L_08AC064C;
    case 119u: goto L_08AC067C;
    case 120u: goto L_08AC0688;
    case 121u: goto L_08AC069C;
    case 122u: goto L_08AC06A4;
    case 123u: goto L_08AC06B4;
    case 124u: goto L_08AC06DC;
    case 125u: goto L_08AC06E4;
    case 126u: goto L_08AC06F0;
    case 127u: goto L_08AC0720;
    case 128u: goto L_08AC0728;
    case 129u: goto L_08AC0738;
    case 130u: goto L_08AC074C;
    case 131u: goto L_08AC0760;
    case 132u: goto L_08AC0788;
    case 133u: goto L_08AC078C;
    case 134u: goto L_08AC07B0;
    case 135u: goto L_08AC07E4;
    case 136u: goto L_08AC080C;
    case 137u: goto L_08AC0814;
    case 138u: goto L_08AC082C;
    case 139u: goto L_08AC083C;
    case 140u: goto L_08AC0858;
    case 141u: goto L_08AC0880;
    case 142u: goto L_08AC0898;
    case 143u: goto L_08AC08A0;
    case 144u: goto L_08AC08AC;
    case 145u: goto L_08AC08C0;
    case 146u: goto L_08AC08D0;
    case 147u: goto L_08AC08E8;
    case 148u: goto L_08AC08F4;
    case 149u: goto L_08AC0914;
    case 150u: goto L_08AC0930;
    case 151u: goto L_08AC0938;
    case 152u: goto L_08AC0948;
    case 153u: goto L_08AC0960;
    case 154u: goto L_08AC0980;
    case 155u: goto L_08AC0988;
    case 156u: goto L_08AC09A8;
    case 157u: goto L_08AC09B0;
    case 158u: goto L_08AC09C8;
    case 159u: goto L_08AC09D8;
    case 160u: goto L_08AC09E0;
    case 161u: goto L_08AC09F4;
    case 162u: goto L_08AC0A08;
    case 163u: goto L_08AC0A10;
    case 164u: goto L_08AC0A1C;
    case 165u: goto L_08AC0A28;
    case 166u: goto L_08AC0A48;
    case 167u: goto L_08AC0A54;
    case 168u: goto L_08AC0A5C;
    case 169u: goto L_08AC0A68;
    case 170u: goto L_08AC0A70;
    case 171u: goto L_08AC0A78;
    case 172u: goto L_08AC0A8C;
    case 173u: goto L_08AC0AA0;
    case 174u: goto L_08AC0AB4;
    case 175u: goto L_08AC0ABC;
    case 176u: goto L_08AC0ACC;
    case 177u: goto L_08AC0AF4;
    case 178u: goto L_08AC0AFC;
    case 179u: goto L_08AC0B08;
    case 180u: goto L_08AC0B10;
    case 181u: goto L_08AC0B18;
    case 182u: goto L_08AC0B2C;
    case 183u: goto L_08AC0B3C;
    case 184u: goto L_08AC0B54;
    case 185u: goto L_08AC0B60;
    case 186u: goto L_08AC0B68;
    case 187u: goto L_08AC0B70;
    case 188u: goto L_08AC0B7C;
    case 189u: goto L_08AC0B9C;
    case 190u: goto L_08AC0BAC;
    case 191u: goto L_08AC0BD0;
    case 192u: goto L_08AC0BD4;
    case 193u: goto L_08AC0BEC;
    case 194u: goto L_08AC0C6C;
    case 195u: goto L_08AC0C74;
    case 196u: goto L_08AC0C88;
    case 197u: goto L_08AC0C90;
    case 198u: goto L_08AC0C98;
    case 199u: goto L_08AC0CA4;
    case 200u: goto L_08AC0CA8;
    case 201u: goto L_08AC0CB0;
    case 202u: goto L_08AC0CB8;
    case 203u: goto L_08AC0CC4;
    case 204u: goto L_08AC0CCC;
    case 205u: goto L_08AC0CD4;
    case 206u: goto L_08AC0CE0;
    case 207u: goto L_08AC0CF8;
    case 208u: goto L_08AC0D1C;
    case 209u: goto L_08AC0D28;
    case 210u: goto L_08AC0D44;
    case 211u: goto L_08AC0D54;
    case 212u: goto L_08AC0D5C;
    case 213u: goto L_08AC0D78;
    case 214u: goto L_08AC0D80;
    case 215u: goto L_08AC0D9C;
    case 216u: goto L_08AC0DA4;
    case 217u: goto L_08AC0DAC;
    case 218u: goto L_08AC0E04;
    case 219u: goto L_08AC0E20;
    case 220u: goto L_08AC0E2C;
    case 221u: goto L_08AC0E34;
    case 222u: goto L_08AC0E4C;
    case 223u: goto L_08AC0E54;
    case 224u: goto L_08AC0E5C;
    case 225u: goto L_08AC0E64;
    case 226u: goto L_08AC0E6C;
    case 227u: goto L_08AC0E78;
    case 228u: goto L_08AC0E84;
    case 229u: goto L_08AC0E94;
    case 230u: goto L_08AC0EAC;
    case 231u: goto L_08AC0EB8;
    case 232u: goto L_08AC0EC0;
    case 233u: goto L_08AC0EC8;
    case 234u: goto L_08AC0ED4;
    case 235u: goto L_08AC0EF4;
    case 236u: goto L_08AC0F04;
    case 237u: goto L_08AC0F18;
    case 238u: goto L_08AC0F40;
    case 239u: goto L_08AC0F54;
    case 240u: goto L_08AC0F70;
    case 241u: goto L_08AC0F78;
    case 242u: goto L_08AC1058;
    case 243u: goto L_08AC107C;
    case 244u: goto L_08AC1090;
    case 245u: goto L_08AC10A4;
    case 246u: goto L_08AC10C8;
    case 247u: goto L_08AC10D0;
    case 248u: goto L_08AC10D8;
    case 249u: goto L_08AC1100;
    case 250u: goto L_08AC110C;
    case 251u: goto L_08AC1118;
    case 252u: goto L_08AC1120;
    case 253u: goto L_08AC1128;
    case 254u: goto L_08AC1130;
    case 255u: goto L_08AC1140;
    case 256u: goto L_08AC1148;
    case 257u: goto L_08AC1154;
    case 258u: goto L_08AC115C;
    case 259u: goto L_08AC1168;
    case 260u: goto L_08AC1170;
    case 261u: goto L_08AC117C;
    case 262u: goto L_08AC1184;
    case 263u: goto L_08AC118C;
    case 264u: goto L_08AC1194;
    case 265u: goto L_08AC11A8;
    case 266u: goto L_08AC11C8;
    case 267u: goto L_08AC11D8;
    case 268u: goto L_08AC11E0;
    case 269u: goto L_08AC11E4;
    case 270u: goto L_08AC11EC;
    case 271u: goto L_08AC11F4;
    case 272u: goto L_08AC11FC;
    case 273u: goto L_08AC1208;
    case 274u: goto L_08AC120C;
    case 275u: goto L_08AC1224;
    case 276u: goto L_08AC1248;
    case 277u: goto L_08AC1250;
    case 278u: goto L_08AC125C;
    case 279u: goto L_08AC1264;
    case 280u: goto L_08AC1270;
    case 281u: goto L_08AC127C;
    case 282u: goto L_08AC1284;
    case 283u: goto L_08AC1290;
    case 284u: goto L_08AC129C;
    case 285u: goto L_08AC12CC;
    case 286u: goto L_08AC12D8;
    case 287u: goto L_08AC12F0;
    case 288u: goto L_08AC1308;
    case 289u: goto L_08AC1310;
    case 290u: goto L_08AC1318;
    case 291u: goto L_08AC1328;
    case 292u: goto L_08AC1338;
    case 293u: goto L_08AC134C;
    case 294u: goto L_08AC1364;
    case 295u: goto L_08AC1370;
    case 296u: goto L_08AC1384;
    case 297u: goto L_08AC138C;
    case 298u: goto L_08AC139C;
    case 299u: goto L_08AC13A0;
    case 300u: goto L_08AC13A8;
    case 301u: goto L_08AC13D8;
    case 302u: goto L_08AC1400;
    case 303u: goto L_08AC1420;
    case 304u: goto L_08AC1440;
    case 305u: goto L_08AC1450;
    case 306u: goto L_08AC1460;
    case 307u: goto L_08AC147C;
    case 308u: goto L_08AC1488;
    case 309u: goto L_08AC1498;
    case 310u: goto L_08AC14A0;
    case 311u: goto L_08AC14B0;
    case 312u: goto L_08AC14B8;
    case 313u: goto L_08AC14C0;
    case 314u: goto L_08AC14C8;
    case 315u: goto L_08AC14D0;
    case 316u: goto L_08AC14D8;
    case 317u: goto L_08AC14E0;
    case 318u: goto L_08AC14F4;
    case 319u: goto L_08AC1518;
    case 320u: goto L_08AC152C;
    case 321u: goto L_08AC1544;
    case 322u: goto L_08AC1550;
    case 323u: goto L_08AC1560;
    case 324u: goto L_08AC15B8;
    case 325u: goto L_08AC15D0;
    case 326u: goto L_08AC15EC;
    case 327u: goto L_08AC15F4;
    case 328u: goto L_08AC1604;
    case 329u: goto L_08AC160C;
    case 330u: goto L_08AC1624;
    case 331u: goto L_08AC1634;
    case 332u: goto L_08AC1644;
    case 333u: goto L_08AC1654;
    case 334u: goto L_08AC1664;
    case 335u: goto L_08AC166C;
    case 336u: goto L_08AC1674;
    case 337u: goto L_08AC1680;
    case 338u: goto L_08AC169C;
    case 339u: goto L_08AC16A4;
    case 340u: goto L_08AC16CC;
    case 341u: goto L_08AC16D4;
    case 342u: goto L_08AC16E8;
    case 343u: goto L_08AC16FC;
    case 344u: goto L_08AC1704;
    case 345u: goto L_08AC170C;
    case 346u: goto L_08AC1718;
    case 347u: goto L_08AC1728;
    case 348u: goto L_08AC1734;
    case 349u: goto L_08AC1744;
    case 350u: goto L_08AC174C;
    case 351u: goto L_08AC1764;
    case 352u: goto L_08AC176C;
    case 353u: goto L_08AC1774;
    case 354u: goto L_08AC1780;
    case 355u: goto L_08AC178C;
    case 356u: goto L_08AC1798;
    case 357u: goto L_08AC17B0;
    case 358u: goto L_08AC17B8;
    case 359u: goto L_08AC17CC;
    case 360u: goto L_08AC17D8;
    case 361u: goto L_08AC17DC;
    case 362u: goto L_08AC17EC;
    case 363u: goto L_08AC17F4;
    case 364u: goto L_08AC1804;
    case 365u: goto L_08AC1808;
    case 366u: goto L_08AC180C;
    case 367u: goto L_08AC1818;
    case 368u: goto L_08AC1820;
    case 369u: goto L_08AC1828;
    case 370u: goto L_08AC183C;
    case 371u: goto L_08AC1848;
    case 372u: goto L_08AC1854;
    case 373u: goto L_08AC1858;
    case 374u: goto L_08AC1888;
    case 375u: goto L_08AC18B8;
    case 376u: goto L_08AC18E4;
    case 377u: goto L_08AC18FC;
    case 378u: goto L_08AC1908;
    case 379u: goto L_08AC1910;
    case 380u: goto L_08AC1918;
    case 381u: goto L_08AC1920;
    case 382u: goto L_08AC1928;
    case 383u: goto L_08AC1930;
    case 384u: goto L_08AC195C;
    case 385u: goto L_08AC1984;
    case 386u: goto L_08AC19A4;
    case 387u: goto L_08AC19A8;
    case 388u: goto L_08AC19AC;
    case 389u: goto L_08AC19B8;
    case 390u: goto L_08AC19CC;
    case 391u: goto L_08AC19DC;
    case 392u: goto L_08AC1A10;
    case 393u: goto L_08AC1A18;
    case 394u: goto L_08AC1A20;
    case 395u: goto L_08AC1A2C;
    case 396u: goto L_08AC1A3C;
    case 397u: goto L_08AC1A48;
    case 398u: goto L_08AC1A5C;
    case 399u: goto L_08AC1A64;
    case 400u: goto L_08AC1A6C;
    case 401u: goto L_08AC1A74;
    case 402u: goto L_08AC1A80;
    case 403u: goto L_08AC1A8C;
    case 404u: goto L_08AC1A94;
    case 405u: goto L_08AC1A9C;
    case 406u: goto L_08AC1AB0;
    case 407u: goto L_08AC1AC8;
    case 408u: goto L_08AC1ADC;
    case 409u: goto L_08AC1B28;
    case 410u: goto L_08AC1B30;
    case 411u: goto L_08AC1B44;
    case 412u: goto L_08AC1B4C;
    case 413u: goto L_08AC1B5C;
    case 414u: goto L_08AC1B84;
    case 415u: goto L_08AC1BA0;
    case 416u: goto L_08AC1BAC;
    case 417u: goto L_08AC1BF4;
    case 418u: goto L_08AC1BF8;
    case 419u: goto L_08AC1C18;
    case 420u: goto L_08AC1C40;
    case 421u: goto L_08AC1C48;
    case 422u: goto L_08AC1C60;
    case 423u: goto L_08AC1C70;
    case 424u: goto L_08AC1C8C;
    case 425u: goto L_08AC1CBC;
    case 426u: goto L_08AC1CD4;
    case 427u: goto L_08AC1CDC;
    case 428u: goto L_08AC1CE4;
    case 429u: goto L_08AC1CF0;
    case 430u: goto L_08AC1D04;
    case 431u: goto L_08AC1D14;
    case 432u: goto L_08AC1D24;
    case 433u: goto L_08AC1D3C;
    case 434u: goto L_08AC1D48;
    case 435u: goto L_08AC1D70;
    case 436u: goto L_08AC1D8C;
    case 437u: goto L_08AC1D98;
    case 438u: goto L_08AC1DA0;
    case 439u: goto L_08AC1DA8;
    case 440u: goto L_08AC1DBC;
    case 441u: goto L_08AC1DC8;
    case 442u: goto L_08AC1DD4;
    case 443u: goto L_08AC1DDC;
    case 444u: goto L_08AC1DE4;
    case 445u: goto L_08AC1DFC;
    case 446u: goto L_08AC1E0C;
    case 447u: goto L_08AC1E38;
    case 448u: goto L_08AC1E40;
    case 449u: goto L_08AC1E4C;
    case 450u: goto L_08AC1E54;
    case 451u: goto L_08AC1E5C;
    case 452u: goto L_08AC1E70;
    case 453u: goto L_08AC1E74;
    case 454u: goto L_08AC1E7C;
    case 455u: goto L_08AC1E84;
    case 456u: goto L_08AC1E8C;
    case 457u: goto L_08AC1E98;
    case 458u: goto L_08AC1EA8;
    case 459u: goto L_08AC1ED0;
    case 460u: goto L_08AC1EE4;
    case 461u: goto L_08AC1F0C;
    case 462u: goto L_08AC1F14;
    case 463u: goto L_08AC1F1C;
    case 464u: goto L_08AC1F24;
    case 465u: goto L_08AC1F2C;
    case 466u: goto L_08AC1F40;
    case 467u: goto L_08AC1F4C;
    case 468u: goto L_08AC1F50;
    case 469u: goto L_08AC1F64;
    case 470u: goto L_08AC1F80;
    case 471u: goto L_08AC1F8C;
    case 472u: goto L_08AC1F94;
    case 473u: goto L_08AC1F9C;
    case 474u: goto L_08AC1FA8;
    case 475u: goto L_08AC1FD0;
    case 476u: goto L_08AC1FE0;
    case 477u: goto L_08AC1FF8;
    case 478u: goto L_08AC2004;
    case 479u: goto L_08AC200C;
    case 480u: goto L_08AC2014;
    case 481u: goto L_08AC201C;
    case 482u: goto L_08AC2024;
    case 483u: goto L_08AC2038;
    case 484u: goto L_08AC2050;
    case 485u: goto L_08AC206C;
    case 486u: goto L_08AC2078;
    case 487u: goto L_08AC2090;
    case 488u: goto L_08AC209C;
    case 489u: goto L_08AC20C4;
    case 490u: goto L_08AC20D4;
    case 491u: goto L_08AC20F0;
    case 492u: goto L_08AC20FC;
    case 493u: goto L_08AC2104;
    case 494u: goto L_08AC210C;
    case 495u: goto L_08AC2114;
    case 496u: goto L_08AC211C;
    case 497u: goto L_08AC2128;
    case 498u: goto L_08AC2150;
    case 499u: goto L_08AC2160;
    case 500u: goto L_08AC21C0;
    case 501u: goto L_08AC21E0;
    case 502u: goto L_08AC21E8;
    case 503u: goto L_08AC21FC;
    case 504u: goto L_08AC221C;
    case 505u: goto L_08AC226C;
    case 506u: goto L_08AC22C4;
    case 507u: goto L_08AC231C;
    case 508u: goto L_08AC2374;
    case 509u: goto L_08AC23CC;
    case 510u: goto L_08AC2424;
    case 511u: goto L_08AC2448;
    case 512u: goto L_08AC2460;
    case 513u: goto L_08AC2490;
    case 514u: goto L_08AC2498;
    case 515u: goto L_08AC24A8;
    case 516u: goto L_08AC24B0;
    case 517u: goto L_08AC24B8;
    case 518u: goto L_08AC24C0;
    case 519u: goto L_08AC24C8;
    case 520u: goto L_08AC24D0;
    case 521u: goto L_08AC24D8;
    case 522u: goto L_08AC24E0;
    case 523u: goto L_08AC24E8;
    case 524u: goto L_08AC24EC;
    case 525u: goto L_08AC24F4;
    case 526u: goto L_08AC24FC;
    case 527u: goto L_08AC2508;
    case 528u: goto L_08AC250C;
    case 529u: goto L_08AC2514;
    case 530u: goto L_08AC251C;
    case 531u: goto L_08AC2524;
    case 532u: goto L_08AC252C;
    case 533u: goto L_08AC2534;
    case 534u: goto L_08AC253C;
    case 535u: goto L_08AC2544;
    case 536u: goto L_08AC254C;
    case 537u: goto L_08AC2554;
    case 538u: goto L_08AC255C;
    case 539u: goto L_08AC2564;
    case 540u: goto L_08AC256C;
    case 541u: goto L_08AC2594;
    case 542u: goto L_08AC25A0;
    case 543u: goto L_08AC25A8;
    case 544u: goto L_08AC25B0;
    case 545u: goto L_08AC25C0;
    case 546u: goto L_08AC25D0;
    case 547u: goto L_08AC25D8;
    case 548u: goto L_08AC25E4;
    case 549u: goto L_08AC25EC;
    case 550u: goto L_08AC25F4;
    case 551u: goto L_08AC25FC;
    case 552u: goto L_08AC2610;
    case 553u: goto L_08AC2638;
    case 554u: goto L_08AC2644;
    case 555u: goto L_08AC264C;
    case 556u: goto L_08AC265C;
    case 557u: goto L_08AC2664;
    case 558u: goto L_08AC2670;
    case 559u: goto L_08AC267C;
    case 560u: goto L_08AC26AC;
    case 561u: goto L_08AC26B4;
    case 562u: goto L_08AC26BC;
    case 563u: goto L_08AC26CC;
    case 564u: goto L_08AC26E4;
    case 565u: goto L_08AC26EC;
    case 566u: goto L_08AC26F8;
    case 567u: goto L_08AC2708;
    case 568u: goto L_08AC2718;
    case 569u: goto L_08AC2730;
    case 570u: goto L_08AC2748;
    case 571u: goto L_08AC2758;
    case 572u: goto L_08AC2764;
    case 573u: goto L_08AC2778;
    case 574u: goto L_08AC2780;
    case 575u: goto L_08AC2790;
    case 576u: goto L_08AC2794;
    case 577u: goto L_08AC279C;
    case 578u: goto L_08AC27CC;
    case 579u: goto L_08AC27F4;
    case 580u: goto L_08AC2814;
    case 581u: goto L_08AC2838;
    case 582u: goto L_08AC2848;
    case 583u: goto L_08AC2858;
    case 584u: goto L_08AC2870;
    case 585u: goto L_08AC2880;
    case 586u: goto L_08AC2888;
    case 587u: goto L_08AC2890;
    case 588u: goto L_08AC2898;
    case 589u: goto L_08AC28A0;
    case 590u: goto L_08AC28A8;
    case 591u: goto L_08AC28B0;
    case 592u: goto L_08AC28B8;
    case 593u: goto L_08AC28C0;
    case 594u: goto L_08AC28D0;
    case 595u: goto L_08AC2904;
    case 596u: goto L_08AC2918;
    case 597u: goto L_08AC2920;
    case 598u: goto L_08AC2928;
    case 599u: goto L_08AC2940;
    case 600u: goto L_08AC294C;
    case 601u: goto L_08AC2954;
    case 602u: goto L_08AC2960;
    case 603u: goto L_08AC296C;
    case 604u: goto L_08AC2970;
    case 605u: goto L_08AC2978;
    case 606u: goto L_08AC2984;
    case 607u: goto L_08AC2988;
    case 608u: goto L_08AC2990;
    case 609u: goto L_08AC299C;
    case 610u: goto L_08AC29A0;
    case 611u: goto L_08AC29A8;
    case 612u: goto L_08AC29B4;
    case 613u: goto L_08AC29B8;
    case 614u: goto L_08AC29C0;
    case 615u: goto L_08AC29C8;
    case 616u: goto L_08AC29D0;
    case 617u: goto L_08AC29D8;
    case 618u: goto L_08AC29E0;
    case 619u: goto L_08AC29F0;
    case 620u: goto L_08AC2A00;
    case 621u: goto L_08AC2A0C;
    case 622u: goto L_08AC2A10;
    case 623u: goto L_08AC2A18;
    case 624u: goto L_08AC2A24;
    case 625u: goto L_08AC2A30;
    case 626u: goto L_08AC2A48;
    case 627u: goto L_08AC2A58;
    case 628u: goto L_08AC2A68;
    case 629u: goto L_08AC2A74;
    case 630u: goto L_08AC2A80;
    case 631u: goto L_08AC2A8C;
    case 632u: goto L_08AC2A94;
    case 633u: goto L_08AC2A9C;
    case 634u: goto L_08AC2AA0;
    case 635u: goto L_08AC2AB8;
    case 636u: goto L_08AC2ABC;
    case 637u: goto L_08AC2AD4;
    case 638u: goto L_08AC2AD8;
    case 639u: goto L_08AC2AF0;
    case 640u: goto L_08AC2AF8;
    case 641u: goto L_08AC2AFC;
    case 642u: goto L_08AC2B08;
    case 643u: goto L_08AC2B0C;
    case 644u: goto L_08AC2B24;
    case 645u: goto L_08AC2B40;
    case 646u: goto L_08AC2B48;
    case 647u: goto L_08AC2B50;
    case 648u: goto L_08AC2B5C;
    case 649u: goto L_08AC2B64;
    case 650u: goto L_08AC2B6C;
    case 651u: goto L_08AC2B74;
    case 652u: goto L_08AC2B7C;
    case 653u: goto L_08AC2B84;
    case 654u: goto L_08AC2B8C;
    case 655u: goto L_08AC2B94;
    case 656u: goto L_08AC2B9C;
    case 657u: goto L_08AC2BA4;
    case 658u: goto L_08AC2BAC;
    case 659u: goto L_08AC2BB4;
    case 660u: goto L_08AC2BBC;
    case 661u: goto L_08AC2BC4;
    case 662u: goto L_08AC2BC8;
    case 663u: goto L_08AC2BDC;
    case 664u: goto L_08AC2BE0;
    case 665u: goto L_08AC2BF0;
    case 666u: goto L_08AC2C10;
    case 667u: goto L_08AC2C18;
    case 668u: goto L_08AC2C30;
    case 669u: goto L_08AC2C3C;
    case 670u: goto L_08AC2C44;
    case 671u: goto L_08AC2C4C;
    case 672u: goto L_08AC2C54;
    case 673u: goto L_08AC2C5C;
    case 674u: goto L_08AC2C64;
    case 675u: goto L_08AC2C90;
    case 676u: goto L_08AC2CB8;
    case 677u: goto L_08AC2CD8;
    case 678u: goto L_08AC2CDC;
    case 679u: goto L_08AC2CE0;
    case 680u: goto L_08AC2CEC;
    case 681u: goto L_08AC2D20;
    case 682u: goto L_08AC2D30;
    case 683u: goto L_08AC2D68;
    case 684u: goto L_08AC2D70;
    case 685u: goto L_08AC2D78;
    case 686u: goto L_08AC2D80;
    case 687u: goto L_08AC2D8C;
    case 688u: goto L_08AC2D98;
    case 689u: goto L_08AC2DA8;
    case 690u: goto L_08AC2DB4;
    case 691u: goto L_08AC2DC0;
    case 692u: goto L_08AC2DC4;
    case 693u: goto L_08AC2DD8;
    case 694u: goto L_08AC2DE0;
    case 695u: goto L_08AC2DE8;
    case 696u: goto L_08AC2DF0;
    case 697u: goto L_08AC2DFC;
    case 698u: goto L_08AC2E08;
    case 699u: goto L_08AC2E14;
    case 700u: goto L_08AC2E20;
    case 701u: goto L_08AC2E28;
    case 702u: goto L_08AC2E30;
    case 703u: goto L_08AC2E48;
    case 704u: goto L_08AC2E60;
    case 705u: goto L_08AC2E74;
    case 706u: goto L_08AC2EC0;
    case 707u: goto L_08AC2EC8;
    case 708u: goto L_08AC2EDC;
    case 709u: goto L_08AC2EE4;
    case 710u: goto L_08AC2EF4;
    case 711u: goto L_08AC2F1C;
    case 712u: goto L_08AC2F20;
    case 713u: goto L_08AC2F28;
    case 714u: goto L_08AC2F30;
    case 715u: goto L_08AC2F4C;
    case 716u: goto L_08AC2F58;
    case 717u: goto L_08AC2FA0;
    case 718u: goto L_08AC2FA4;
    case 719u: goto L_08AC2FC8;
    case 720u: goto L_08AC3000;
    case 721u: goto L_08AC3008;
    case 722u: goto L_08AC3018;
    case 723u: goto L_08AC3024;
    case 724u: goto L_08AC3030;
    case 725u: goto L_08AC3038;
    case 726u: goto L_08AC3040;
    case 727u: goto L_08AC304C;
    case 728u: goto L_08AC3054;
    case 729u: goto L_08AC3060;
    case 730u: goto L_08AC3068;
    case 731u: goto L_08AC3074;
    case 732u: goto L_08AC308C;
    case 733u: goto L_08AC30A0;
    case 734u: goto L_08AC30B4;
    case 735u: goto L_08AC30BC;
    case 736u: goto L_08AC30C8;
    case 737u: goto L_08AC30D0;
    case 738u: goto L_08AC30E0;
    case 739u: goto L_08AC30E8;
    case 740u: goto L_08AC30F0;
    case 741u: goto L_08AC3100;
    case 742u: goto L_08AC3108;
    case 743u: goto L_08AC3110;
    case 744u: goto L_08AC3120;
    case 745u: goto L_08AC3128;
    case 746u: goto L_08AC3130;
    case 747u: goto L_08AC3140;
    case 748u: goto L_08AC3148;
    case 749u: goto L_08AC3150;
    case 750u: goto L_08AC3160;
    case 751u: goto L_08AC3168;
    case 752u: goto L_08AC3170;
    case 753u: goto L_08AC3180;
    case 754u: goto L_08AC3184;
    case 755u: goto L_08AC31A8;
    case 756u: goto L_08AC31D0;
    case 757u: goto L_08AC31E8;
    case 758u: goto L_08AC31F0;
    case 759u: goto L_08AC31FC;
    case 760u: goto L_08AC3210;
    case 761u: goto L_08AC3220;
    case 762u: goto L_08AC3238;
    case 763u: goto L_08AC3244;
    case 764u: goto L_08AC3264;
    case 765u: goto L_08AC3288;
    case 766u: goto L_08AC3294;
    case 767u: goto L_08AC329C;
    case 768u: goto L_08AC32A4;
    case 769u: goto L_08AC32B8;
    case 770u: goto L_08AC32CC;
    case 771u: goto L_08AC32D8;
    case 772u: goto L_08AC32E0;
    case 773u: goto L_08AC32E8;
    case 774u: goto L_08AC3300;
    case 775u: goto L_08AC3310;
    case 776u: goto L_08AC333C;
    case 777u: goto L_08AC3344;
    case 778u: goto L_08AC3350;
    case 779u: goto L_08AC3358;
    case 780u: goto L_08AC3360;
    case 781u: goto L_08AC3374;
    case 782u: goto L_08AC3378;
    case 783u: goto L_08AC3380;
    case 784u: goto L_08AC3388;
    case 785u: goto L_08AC3390;
    case 786u: goto L_08AC339C;
    case 787u: goto L_08AC33AC;
    case 788u: goto L_08AC33D4;
    case 789u: goto L_08AC33EC;
    case 790u: goto L_08AC342C;
    case 791u: goto L_08AC3438;
    case 792u: goto L_08AC3444;
    case 793u: goto L_08AC3458;
    case 794u: goto L_08AC3464;
    case 795u: goto L_08AC3480;
    case 796u: goto L_08AC3488;
    case 797u: goto L_08AC3490;
    case 798u: goto L_08AC3498;
    case 799u: goto L_08AC34A0;
    case 800u: goto L_08AC34A8;
    case 801u: goto L_08AC34AC;
    case 802u: goto L_08AC34B0;
    case 803u: goto L_08AC34B8;
    case 804u: goto L_08AC34C0;
    case 805u: goto L_08AC34CC;
    case 806u: goto L_08AC34D0;
    case 807u: goto L_08AC34E0;
    case 808u: goto L_08AC34E8;
    case 809u: goto L_08AC34F4;
    case 810u: goto L_08AC3504;
    case 811u: goto L_08AC3530;
    case 812u: goto L_08AC3558;
    case 813u: goto L_08AC3560;
    case 814u: goto L_08AC3568;
    case 815u: goto L_08AC3574;
    case 816u: goto L_08AC3578;
    case 817u: goto L_08AC3584;
    case 818u: goto L_08AC3590;
    case 819u: goto L_08AC3598;
    case 820u: goto L_08AC35A0;
    case 821u: goto L_08AC35BC;
    case 822u: goto L_08AC35CC;
    case 823u: goto L_08AC35D4;
    case 824u: goto L_08AC35E8;
    case 825u: goto L_08AC35EC;
    case 826u: goto L_08AC3620;
    case 827u: goto L_08AC3638;
    case 828u: goto L_08AC3640;
    case 829u: goto L_08AC366C;
    case 830u: goto L_08AC3674;
    case 831u: goto L_08AC367C;
    case 832u: goto L_08AC3680;
    case 833u: goto L_08AC3690;
    case 834u: goto L_08AC3698;
    case 835u: goto L_08AC36A8;
    case 836u: goto L_08AC36B4;
    case 837u: goto L_08AC36BC;
    case 838u: goto L_08AC36C8;
    case 839u: goto L_08AC36D4;
    case 840u: goto L_08AC36E0;
    case 841u: goto L_08AC36E8;
    case 842u: goto L_08AC36FC;
    case 843u: goto L_08AC3700;
    case 844u: goto L_08AC3704;
    case 845u: goto L_08AC3724;
    case 846u: goto L_08AC3730;
    case 847u: goto L_08AC3738;
    case 848u: goto L_08AC3744;
    case 849u: goto L_08AC3754;
    case 850u: goto L_08AC3764;
    case 851u: goto L_08AC376C;
    case 852u: goto L_08AC3780;
    case 853u: goto L_08AC3784;
    case 854u: goto L_08AC3798;
    case 855u: goto L_08AC379C;
    case 856u: goto L_08AC37BC;
    case 857u: goto L_08AC37C4;
    case 858u: goto L_08AC37CC;
    case 859u: goto L_08AC37D8;
    case 860u: goto L_08AC37E4;
    case 861u: goto L_08AC380C;
    case 862u: goto L_08AC3824;
    case 863u: goto L_08AC3840;
    case 864u: goto L_08AC3848;
    case 865u: goto L_08AC3858;
    case 866u: goto L_08AC3878;
    case 867u: goto L_08AC38C8;
    case 868u: goto L_08AC3938;
    case 869u: goto L_08AC394C;
    case 870u: goto L_08AC3954;
    case 871u: goto L_08AC3974;
    case 872u: goto L_08AC3984;
    case 873u: goto L_08AC39AC;
    case 874u: goto L_08AC39B8;
    case 875u: goto L_08AC39C0;
    case 876u: goto L_08AC39D0;
    case 877u: goto L_08AC39D8;
    case 878u: goto L_08AC39E4;
    case 879u: goto L_08AC39F0;
    case 880u: goto L_08AC39FC;
    case 881u: goto L_08AC3A08;
    case 882u: goto L_08AC3A20;
    case 883u: goto L_08AC3A28;
    case 884u: goto L_08AC3A40;
    case 885u: goto L_08AC3A48;
    case 886u: goto L_08AC3A50;
    case 887u: goto L_08AC3A58;
    case 888u: goto L_08AC3A64;
    case 889u: goto L_08AC3A74;
    case 890u: goto L_08AC3A84;
    case 891u: goto L_08AC3A9C;
    case 892u: goto L_08AC3AAC;
    case 893u: goto L_08AC3AC0;
    case 894u: goto L_08AC3ACC;
    case 895u: goto L_08AC3B38;
    case 896u: goto L_08AC3B40;
    case 897u: goto L_08AC3B5C;
    case 898u: goto L_08AC3B64;
    case 899u: goto L_08AC3B6C;
    case 900u: goto L_08AC3B74;
    case 901u: goto L_08AC3B7C;
    case 902u: goto L_08AC3B84;
    case 903u: goto L_08AC3B8C;
    case 904u: goto L_08AC3B94;
    case 905u: goto L_08AC3B9C;
    case 906u: goto L_08AC3BA8;
    case 907u: goto L_08AC3BB8;
    case 908u: goto L_08AC3BD4;
    case 909u: goto L_08AC3BEC;
    case 910u: goto L_08AC3C00;
    case 911u: goto L_08AC3C18;
    case 912u: goto L_08AC3C24;
    case 913u: goto L_08AC3C2C;
    case 914u: goto L_08AC3C34;
    case 915u: goto L_08AC3C3C;
    case 916u: goto L_08AC3C44;
    case 917u: goto L_08AC3C4C;
    case 918u: goto L_08AC3C70;
    case 919u: goto L_08AC3C74;
    case 920u: goto L_08AC3C80;
    case 921u: goto L_08AC3CB4;
    case 922u: goto L_08AC3CC4;
    case 923u: goto L_08AC3CF4;
    case 924u: goto L_08AC3CFC;
    case 925u: goto L_08AC3D04;
    case 926u: goto L_08AC3D0C;
    case 927u: goto L_08AC3D18;
    case 928u: goto L_08AC3D24;
    case 929u: goto L_08AC3D34;
    case 930u: goto L_08AC3D40;
    case 931u: goto L_08AC3D4C;
    case 932u: goto L_08AC3D50;
    case 933u: goto L_08AC3D64;
    case 934u: goto L_08AC3D6C;
    case 935u: goto L_08AC3D74;
    case 936u: goto L_08AC3D7C;
    case 937u: goto L_08AC3D88;
    case 938u: goto L_08AC3D90;
    case 939u: goto L_08AC3DA4;
    case 940u: goto L_08AC3DAC;
    case 941u: goto L_08AC3DB8;
    case 942u: goto L_08AC3DC4;
    case 943u: goto L_08AC3DD0;
    case 944u: goto L_08AC3DE8;
    case 945u: goto L_08AC3DEC;
    case 946u: goto L_08AC3DF8;
    case 947u: goto L_08AC3E00;
    case 948u: goto L_08AC3E10;
    case 949u: goto L_08AC3E34;
    case 950u: goto L_08AC3E38;
    case 951u: goto L_08AC3E58;
    case 952u: goto L_08AC3E84;
    case 953u: goto L_08AC3E8C;
    case 954u: goto L_08AC3EA4;
    case 955u: goto L_08AC3EAC;
    case 956u: goto L_08AC3EBC;
    case 957u: goto L_08AC3EC0;
    case 958u: goto L_08AC3ED8;
    case 959u: goto L_08AC3EF8;
    case 960u: goto L_08AC3F00;
    case 961u: goto L_08AC3F08;
    case 962u: goto L_08AC3F14;
    case 963u: goto L_08AC3F1C;
    case 964u: goto L_08AC3F24;
    case 965u: goto L_08AC3F3C;
    case 966u: goto L_08AC3F40;
    case 967u: goto L_08AC3F54;
    case 968u: goto L_08AC3F64;
    case 969u: goto L_08AC3F80;
    case 970u: goto L_08AC3F9C;
    case 971u: goto L_08AC3FA8;
    case 972u: goto L_08AC3FB4;
    case 973u: goto L_08AC3FC0;
    case 974u: goto L_08AC3FC8;
    case 975u: goto L_08AC3FCC;
    case 976u: goto L_08AC3FE0;
    case 977u: goto L_08AC3FE8;
    default:
        if (local_transfers == 0u) rt.unsupported(ctx.pc, 0u, "invalid internal function entry");
        else ctx.pc = local_pc;
        return;
    }
    }
L_08AC0000:
    ctx.set_gpr(1, static_cast<std::int32_t>(ctx.gpr[18]) < 5 ? 1u : 0u);
    goto L_08AC0004;
L_08AC0004:
    ctx.set_gpr(5, 2231u << 16u);
    ctx.set_gpr(4, ctx.gpr[19] + 0u);
    ctx.set_gpr(31, 0x08AC0014u);
    ctx.set_gpr(5, ctx.gpr[5] + static_cast<std::uint32_t>(3208));
    if (rt.invoke_chained_direct<&recomp_unit_0004_entry, 4u, 455u, 0x08816458u>(ctx, &aot_mem) && ctx.pc == 0x08AC0014u) goto L_08AC0014;
    return;
L_08AC0014:
    { const bool branch_taken = 0u == 0u;
    ctx.set_gpr(18, ctx.gpr[18] + static_cast<std::uint32_t>(1));
      if (branch_taken) {
          goto L_08AC004C;
      }
      goto L_08AC001C;
    }
L_08AC001C:
    if (ctx.gpr[1] == 0u) {
    ctx.set_gpr(5, 2231u << 16u);
        goto L_08AC003C;
    }
    goto L_08AC0024;
L_08AC0024:
    ctx.set_gpr(5, 2231u << 16u);
    ctx.set_gpr(4, ctx.gpr[19] + 0u);
    ctx.set_gpr(31, 0x08AC0034u);
    ctx.set_gpr(5, ctx.gpr[5] + static_cast<std::uint32_t>(3212));
    if (rt.invoke_chained_direct<&recomp_unit_0004_entry, 4u, 455u, 0x08816458u>(ctx, &aot_mem) && ctx.pc == 0x08AC0034u) goto L_08AC0034;
    return;
L_08AC0034:
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_08AC0048;
      }
      goto L_08AC003C;
    }
L_08AC003C:
    ctx.set_gpr(4, ctx.gpr[19] + 0u);
    ctx.set_gpr(31, 0x08AC0048u);
    ctx.set_gpr(5, ctx.gpr[5] + static_cast<std::uint32_t>(3216));
    if (rt.invoke_chained_direct<&recomp_unit_0004_entry, 4u, 455u, 0x08816458u>(ctx, &aot_mem) && ctx.pc == 0x08AC0048u) goto L_08AC0048;
    return;
L_08AC0048:
    ctx.set_gpr(18, ctx.gpr[18] + static_cast<std::uint32_t>(1));
    goto L_08AC004C;
L_08AC004C:
    ctx.set_gpr(2, static_cast<std::int32_t>(ctx.gpr[18]) < 7 ? 1u : 0u);
    if (ctx.gpr[2] != 0u) {
    ctx.set_gpr(1, static_cast<std::int32_t>(ctx.gpr[18]) < static_cast<std::int32_t>(ctx.gpr[16]) ? 1u : 0u);
        (void)rt.invoke_chained_direct<&recomp_unit_0174_entry, 174u, 1047u, 0x08ABFFFCu>(ctx, &aot_mem); return;
    }
    goto L_08AC0058;
L_08AC0058:
    ctx.set_gpr(20, ctx.gpr[20] + static_cast<std::uint32_t>(1));
    goto L_08AC005C;
L_08AC005C:
    ctx.set_gpr(2, static_cast<std::int32_t>(ctx.gpr[20]) < 3 ? 1u : 0u);
    ctx.set_gpr(17, ctx.gpr[17] + static_cast<std::uint32_t>(32));
    { const bool branch_taken = ctx.gpr[2] != 0u;
    ctx.set_gpr(21, ctx.gpr[21] + static_cast<std::uint32_t>(4));
      if (branch_taken) {
          (void)rt.invoke_chained_direct<&recomp_unit_0174_entry, 174u, 1042u, 0x08ABFFACu>(ctx, &aot_mem); return;
      }
      goto L_08AC006C;
    }
L_08AC006C:
    ctx.set_gpr(2, rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(60)));
    ctx.set_gpr(6, ctx.gpr[23] + 0u);
    ctx.set_gpr(5, 0u + static_cast<std::uint32_t>(4));
    ctx.set_gpr(31, 0x08AC0080u);
    ctx.set_gpr(4, ctx.gpr[2] + static_cast<std::uint32_t>(244));
    if (rt.invoke_chained_direct<&recomp_unit_0174_entry, 174u, 823u, 0x08ABF23Cu>(ctx, &aot_mem) && ctx.pc == 0x08AC0080u) goto L_08AC0080;
    return;
L_08AC0080:
    ctx.set_gpr(31, rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(44)));
    goto L_08AC0084;
L_08AC0084:
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
L_08AC00B0:
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
    ctx.set_gpr(2, rt.memory().aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(4)));
    ctx.set_gpr(20, ctx.gpr[5] + 0u);
    ctx.set_gpr(21, ctx.gpr[4] + 0u);
    ctx.set_gpr(18, rt.memory().aot_load32(ctx.gpr[2] + static_cast<std::uint32_t>(29328)));
    ctx.set_gpr(19, ctx.gpr[6] + 0u);
    ctx.set_gpr(31, 0x08AC00F4u);
    ctx.set_gpr(4, ctx.gpr[20] + 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0171_entry, 171u, 973u, 0x08AB3890u>(ctx, &aot_mem) && ctx.pc == 0x08AC00F4u) goto L_08AC00F4;
    return;
L_08AC00F4:
    ctx.set_gpr(22, ctx.gpr[2] + 0u);
    ctx.set_gpr(4, ctx.gpr[18] + 0u);
    ctx.set_gpr(31, 0x08AC0104u);
    ctx.set_gpr(5, ctx.gpr[20] + 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0174_entry, 174u, 922u, 0x08ABF880u>(ctx, &aot_mem) && ctx.pc == 0x08AC0104u) goto L_08AC0104;
    return;
L_08AC0104:
    ctx.set_gpr(4, ctx.gpr[2] + 0u);
    ctx.set_gpr(31, 0x08AC0110u);
    ctx.set_gpr(5, ctx.gpr[19] + 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0174_entry, 174u, 921u, 0x08ABF864u>(ctx, &aot_mem) && ctx.pc == 0x08AC0110u) goto L_08AC0110;
    return;
L_08AC0110:
    ctx.set_gpr(23, ctx.gpr[2] + 0u);
    ctx.set_gpr(4, ctx.gpr[21] + static_cast<std::uint32_t>(108));
    ctx.set_gpr(5, 0u + static_cast<std::uint32_t>(1));
    ctx.set_gpr(31, 0x08AC0124u);
    ctx.set_gpr(6, ctx.gpr[19] + 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0174_entry, 174u, 1032u, 0x08ABFEDCu>(ctx, &aot_mem) && ctx.pc == 0x08AC0124u) goto L_08AC0124;
    return;
L_08AC0124:
    ctx.set_gpr(25, rt.memory().aot_load32(ctx.gpr[21] + static_cast<std::uint32_t>(208)));
    ctx.set_gpr(5, rt.memory().aot_load8(ctx.gpr[21] + static_cast<std::uint32_t>(240)));
    ctx.set_gpr(4, ctx.gpr[21] + static_cast<std::uint32_t>(108));
    ctx.set_gpr(25, rt.memory().aot_load32(ctx.gpr[25] + static_cast<std::uint32_t>(16)));
    jump_target = ctx.gpr[25];
    ctx.set_gpr(31, 0x08AC013Cu);
    ctx.set_gpr(6, 0u + 0u);
    ctx.pc = jump_target;
    if (rt.invoke_chained_call(ctx, &aot_mem) && ctx.pc == 0x08AC013Cu) goto L_08AC013C;
    return;
L_08AC013C:
    ctx.set_gpr(17, 0u + 0u);
    ctx.set_gpr(16, ctx.gpr[21] + 0u);
    goto L_08AC0144;
L_08AC0144:
    ctx.set_gpr(31, 0x08AC014Cu);
    ctx.set_gpr(4, ctx.gpr[16] + static_cast<std::uint32_t>(244));
    if (rt.invoke_chained_direct<&recomp_unit_0169_entry, 169u, 664u, 0x08AAA488u>(ctx, &aot_mem) && ctx.pc == 0x08AC014Cu) goto L_08AC014C;
    return;
L_08AC014C:
    ctx.set_gpr(17, ctx.gpr[17] + static_cast<std::uint32_t>(1));
    ctx.set_gpr(2, static_cast<std::int32_t>(ctx.gpr[17]) < 4 ? 1u : 0u);
    { const bool branch_taken = ctx.gpr[2] != 0u;
    ctx.set_gpr(16, ctx.gpr[16] + static_cast<std::uint32_t>(16));
      if (branch_taken) {
          goto L_08AC0144;
      }
      goto L_08AC015C;
    }
L_08AC015C:
    ctx.set_gpr(4, ctx.gpr[18] + 0u);
    ctx.set_gpr(31, 0x08AC0168u);
    ctx.set_gpr(5, ctx.gpr[20] + 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0023_entry, 23u, 381u, 0x08861804u>(ctx, &aot_mem) && ctx.pc == 0x08AC0168u) goto L_08AC0168;
    return;
L_08AC0168:
    if (ctx.gpr[2] == 0u) {
    ctx.set_gpr(31, rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(44)));
        goto L_08AC0244;
    }
    goto L_08AC0170;
L_08AC0170:
    ctx.set_gpr(4, ctx.gpr[21] + static_cast<std::uint32_t>(308));
    rt.memory().aot_store32(ctx.gpr[21] + static_cast<std::uint32_t>(244), ctx.gpr[4]);
    ctx.set_gpr(6, rt.memory().aot_load32(ctx.gpr[22] + static_cast<std::uint32_t>(4)));
    ctx.set_gpr(5, 2231u << 16u);
    ctx.set_gpr(31, 0x08AC0188u);
    ctx.set_gpr(5, ctx.gpr[5] + static_cast<std::uint32_t>(3188));
    if (rt.invoke_chained_direct<&recomp_unit_0004_entry, 4u, 423u, 0x08815FF4u>(ctx, &aot_mem) && ctx.pc == 0x08AC0188u) goto L_08AC0188;
    return;
L_08AC0188:
    ctx.set_gpr(2, ctx.gpr[21] + static_cast<std::uint32_t>(340));
    ctx.set_gpr(4, ctx.gpr[23] + 0u);
    ctx.set_gpr(31, 0x08AC0198u);
    rt.memory().aot_store32(ctx.gpr[21] + static_cast<std::uint32_t>(260), ctx.gpr[2]);
    if (rt.invoke_chained_direct<&recomp_unit_0021_entry, 21u, 866u, 0x0885B4B0u>(ctx, &aot_mem) && ctx.pc == 0x08AC0198u) goto L_08AC0198;
    return;
L_08AC0198:
    ctx.set_gpr(5, 2231u << 16u);
    ctx.set_gpr(6, ctx.gpr[2] + 0u);
    ctx.set_gpr(4, ctx.gpr[21] + static_cast<std::uint32_t>(340));
    ctx.set_gpr(31, 0x08AC01ACu);
    ctx.set_gpr(5, ctx.gpr[5] + static_cast<std::uint32_t>(3220));
    if (rt.invoke_chained_direct<&recomp_unit_0004_entry, 4u, 423u, 0x08815FF4u>(ctx, &aot_mem) && ctx.pc == 0x08AC01ACu) goto L_08AC01AC;
    return;
L_08AC01AC:
    ctx.set_gpr(2, ctx.gpr[19] << 2u);
    ctx.set_gpr(2, ctx.gpr[2] + ctx.gpr[22]);
    ctx.set_gpr(16, rt.memory().aot_load32(ctx.gpr[2] + static_cast<std::uint32_t>(976)));
    ctx.set_gpr(4, ctx.gpr[21] + static_cast<std::uint32_t>(372));
    ctx.set_gpr(5, 2231u << 16u);
    ctx.set_gpr(5, ctx.gpr[5] + static_cast<std::uint32_t>(3240));
    ctx.set_gpr(31, 0x08AC01CCu);
    rt.memory().aot_store32(ctx.gpr[21] + static_cast<std::uint32_t>(276), ctx.gpr[4]);
    if (rt.invoke_chained_direct<&recomp_unit_0004_entry, 4u, 490u, 0x0881667Cu>(ctx, &aot_mem) && ctx.pc == 0x08AC01CCu) goto L_08AC01CC;
    return;
L_08AC01CC:
    ctx.set_gpr(17, 0u + 0u);
    ctx.set_gpr(1, static_cast<std::int32_t>(ctx.gpr[17]) < static_cast<std::int32_t>(ctx.gpr[16]) ? 1u : 0u);
    goto L_08AC01D4;
L_08AC01D4:
    if (ctx.gpr[1] == 0u) {
    ctx.set_gpr(1, static_cast<std::int32_t>(ctx.gpr[17]) < 5 ? 1u : 0u);
        goto L_08AC01F4;
    }
    goto L_08AC01DC;
L_08AC01DC:
    ctx.set_gpr(5, 2231u << 16u);
    ctx.set_gpr(4, ctx.gpr[21] + static_cast<std::uint32_t>(372));
    ctx.set_gpr(31, 0x08AC01ECu);
    ctx.set_gpr(5, ctx.gpr[5] + static_cast<std::uint32_t>(3208));
    if (rt.invoke_chained_direct<&recomp_unit_0004_entry, 4u, 455u, 0x08816458u>(ctx, &aot_mem) && ctx.pc == 0x08AC01ECu) goto L_08AC01EC;
    return;
L_08AC01EC:
    { const bool branch_taken = 0u == 0u;
    ctx.set_gpr(17, ctx.gpr[17] + static_cast<std::uint32_t>(1));
      if (branch_taken) {
          goto L_08AC0224;
      }
      goto L_08AC01F4;
    }
L_08AC01F4:
    if (ctx.gpr[1] == 0u) {
    ctx.set_gpr(5, 2231u << 16u);
        goto L_08AC0214;
    }
    goto L_08AC01FC;
L_08AC01FC:
    ctx.set_gpr(5, 2231u << 16u);
    ctx.set_gpr(4, ctx.gpr[21] + static_cast<std::uint32_t>(372));
    ctx.set_gpr(31, 0x08AC020Cu);
    ctx.set_gpr(5, ctx.gpr[5] + static_cast<std::uint32_t>(3212));
    if (rt.invoke_chained_direct<&recomp_unit_0004_entry, 4u, 455u, 0x08816458u>(ctx, &aot_mem) && ctx.pc == 0x08AC020Cu) goto L_08AC020C;
    return;
L_08AC020C:
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_08AC0220;
      }
      goto L_08AC0214;
    }
L_08AC0214:
    ctx.set_gpr(4, ctx.gpr[21] + static_cast<std::uint32_t>(372));
    ctx.set_gpr(31, 0x08AC0220u);
    ctx.set_gpr(5, ctx.gpr[5] + static_cast<std::uint32_t>(3240));
    if (rt.invoke_chained_direct<&recomp_unit_0004_entry, 4u, 455u, 0x08816458u>(ctx, &aot_mem) && ctx.pc == 0x08AC0220u) goto L_08AC0220;
    return;
L_08AC0220:
    ctx.set_gpr(17, ctx.gpr[17] + static_cast<std::uint32_t>(1));
    goto L_08AC0224;
L_08AC0224:
    ctx.set_gpr(2, static_cast<std::int32_t>(ctx.gpr[17]) < 7 ? 1u : 0u);
    if (ctx.gpr[2] != 0u) {
    ctx.set_gpr(1, static_cast<std::int32_t>(ctx.gpr[17]) < static_cast<std::int32_t>(ctx.gpr[16]) ? 1u : 0u);
        goto L_08AC01D4;
    }
    goto L_08AC0230;
L_08AC0230:
    ctx.set_gpr(4, ctx.gpr[21] + static_cast<std::uint32_t>(244));
    ctx.set_gpr(5, 0u + static_cast<std::uint32_t>(4));
    ctx.set_gpr(31, 0x08AC0240u);
    ctx.set_gpr(6, 0u + static_cast<std::uint32_t>(3));
    if (rt.invoke_chained_direct<&recomp_unit_0174_entry, 174u, 823u, 0x08ABF23Cu>(ctx, &aot_mem) && ctx.pc == 0x08AC0240u) goto L_08AC0240;
    return;
L_08AC0240:
    ctx.set_gpr(31, rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(44)));
    goto L_08AC0244;
L_08AC0244:
    ctx.set_gpr(23, rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(40)));
    ctx.set_gpr(22, rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(36)));
    ctx.set_gpr(21, rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(32)));
    ctx.set_gpr(20, rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(28)));
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
L_08AC026C:
    ctx.set_gpr(29, ctx.gpr[29] + static_cast<std::uint32_t>(-16));
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(12), ctx.gpr[31]);
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(8), ctx.gpr[16]);
    ctx.set_gpr(16, ctx.gpr[4] + 0u);
    ctx.set_gpr(31, 0x08AC0284u);
    ctx.set_gpr(4, ctx.gpr[16] + static_cast<std::uint32_t>(92));
    if (rt.invoke_chained_direct<&recomp_unit_0174_entry, 174u, 839u, 0x08ABF36Cu>(ctx, &aot_mem) && ctx.pc == 0x08AC0284u) goto L_08AC0284;
    return;
L_08AC0284:
    ctx.set_gpr(2, ctx.gpr[2] & 255u);
    if (ctx.gpr[2] != 0u) {
    ctx.set_gpr(2, rt.memory().aot_load8(ctx.gpr[16] + static_cast<std::uint32_t>(436)));
        goto L_08AC0298;
    }
    goto L_08AC0290;
L_08AC0290:
    { const bool branch_taken = 0u == 0u;
    ctx.set_gpr(2, 0u + static_cast<std::uint32_t>(1));
      if (branch_taken) {
          goto L_08AC02F8;
      }
      goto L_08AC0298;
    }
L_08AC0298:
    if (ctx.gpr[2] == 0u) {
    ctx.set_gpr(4, ctx.gpr[16] + static_cast<std::uint32_t>(92));
        goto L_08AC02B4;
    }
    goto L_08AC02A0;
L_08AC02A0:
    ctx.set_gpr(4, ctx.gpr[16] + 0u);
    ctx.set_gpr(31, 0x08AC02ACu);
    rt.memory().aot_store8(ctx.gpr[16] + static_cast<std::uint32_t>(436), static_cast<std::uint8_t>(0u));
    goto L_08AC0BEC;
L_08AC02AC:
    { const bool branch_taken = 0u == 0u;
    ctx.set_gpr(2, 0u + static_cast<std::uint32_t>(1));
      if (branch_taken) {
          goto L_08AC02F8;
      }
      goto L_08AC02B4;
    }
L_08AC02B4:
    ctx.set_gpr(31, 0x08AC02BCu);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0172_entry, 172u, 133u, 0x08AB48A8u>(ctx, &aot_mem) && ctx.pc == 0x08AC02BCu) goto L_08AC02BC;
    return;
L_08AC02BC:
    if (ctx.gpr[2] == 0u) {
    ctx.set_gpr(2, 2231u << 16u);
        goto L_08AC02D4;
    }
    goto L_08AC02C4;
L_08AC02C4:
    ctx.set_gpr(31, 0x08AC02CCu);
    ctx.set_gpr(4, ctx.gpr[16] + 0u);
    goto L_08AC0308;
L_08AC02CC:
    { const bool branch_taken = 0u == 0u;
    ctx.set_gpr(31, rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(12)));
      if (branch_taken) {
          goto L_08AC02FC;
      }
      goto L_08AC02D4;
    }
L_08AC02D4:
    ctx.fpr[2] = std::bit_cast<float>(rt.memory().aot_load32(ctx.gpr[2] + static_cast<std::uint32_t>(3244)));
    ctx.set_gpr(2, 2231u << 16u);
    ctx.fpr[1] = std::bit_cast<float>(rt.memory().aot_load32(ctx.gpr[2] + static_cast<std::uint32_t>(3248)));
    ctx.set_gpr(2, 2231u << 16u);
    ctx.fpr[0] = std::bit_cast<float>(rt.memory().aot_load32(ctx.gpr[2] + static_cast<std::uint32_t>(3252)));
    rt.memory().aot_store32(ctx.gpr[16] + static_cast<std::uint32_t>(12), std::bit_cast<std::uint32_t>(ctx.fpr[2]));
    rt.memory().aot_store32(ctx.gpr[16] + static_cast<std::uint32_t>(16), std::bit_cast<std::uint32_t>(ctx.fpr[1]));
    ctx.set_gpr(2, 0u + static_cast<std::uint32_t>(1));
    rt.memory().aot_store32(ctx.gpr[16] + static_cast<std::uint32_t>(20), std::bit_cast<std::uint32_t>(ctx.fpr[0]));
    goto L_08AC02F8;
L_08AC02F8:
    ctx.set_gpr(31, rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(12)));
    goto L_08AC02FC;
L_08AC02FC:
    ctx.set_gpr(16, rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(8)));
    jump_target = ctx.gpr[31];
    ctx.set_gpr(29, ctx.gpr[29] + static_cast<std::uint32_t>(16));
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_08AC0308:
    ctx.set_gpr(29, ctx.gpr[29] + static_cast<std::uint32_t>(-16));
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(12), ctx.gpr[31]);
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(8), ctx.gpr[17]);
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(4), ctx.gpr[16]);
    ctx.set_gpr(3, rt.memory().aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(440)));
    ctx.set_gpr(2, 0u + static_cast<std::uint32_t>(2));
    ctx.set_gpr(17, ctx.gpr[4] + 0u);
    { const bool branch_taken = ctx.gpr[3] == ctx.gpr[2];
    ctx.set_gpr(16, 0u + 0u);
      if (branch_taken) {
          goto L_08AC0370;
      }
      goto L_08AC032C;
    }
L_08AC032C:
    ctx.set_gpr(4, 0u + static_cast<std::uint32_t>(1));
    if (ctx.gpr[3] == ctx.gpr[4]) {
    ctx.set_gpr(3, rt.memory().aot_load32(ctx.gpr[17] + static_cast<std::uint32_t>(4)));
        goto L_08AC0374;
    }
    goto L_08AC0338;
L_08AC0338:
    if (ctx.gpr[3] == 0u) {
    ctx.set_gpr(3, rt.memory().aot_load32(ctx.gpr[17] + static_cast<std::uint32_t>(4)));
        goto L_08AC0348;
    }
    goto L_08AC0340;
L_08AC0340:
    { const bool branch_taken = 0u == 0u;
    ctx.set_gpr(2, 0u + static_cast<std::uint32_t>(2));
      if (branch_taken) {
          goto L_08AC0404;
      }
      goto L_08AC0348;
    }
L_08AC0348:
    ctx.set_gpr(2, 49024u << 16u);
    ctx.fpr[12] = std::bit_cast<float>(ctx.gpr[2]);
    rt.memory().aot_store32(ctx.gpr[3] + static_cast<std::uint32_t>(92), ctx.gpr[4]);
    ctx.set_gpr(2, rt.memory().aot_load32(ctx.gpr[17] + static_cast<std::uint32_t>(4)));
    ctx.set_gpr(16, ctx.gpr[4] + 0u);
    ctx.set_gpr(5, 0u + 0u);
    ctx.set_gpr(31, 0x08AC0368u);
    ctx.set_gpr(4, ctx.gpr[2] + static_cast<std::uint32_t>(28940));
    if (rt.invoke_chained_direct<&recomp_unit_0169_entry, 169u, 913u, 0x08AAB1C8u>(ctx, &aot_mem) && ctx.pc == 0x08AC0368u) goto L_08AC0368;
    return;
L_08AC0368:
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_08AC0400;
      }
      goto L_08AC0370;
    }
L_08AC0370:
    ctx.set_gpr(3, rt.memory().aot_load32(ctx.gpr[17] + static_cast<std::uint32_t>(4)));
    goto L_08AC0374;
L_08AC0374:
    ctx.set_gpr(4, 0u + static_cast<std::uint32_t>(4));
    ctx.set_gpr(2, 0u + static_cast<std::uint32_t>(1));
    rt.memory().aot_store32(ctx.gpr[3] + static_cast<std::uint32_t>(92), ctx.gpr[4]);
    ctx.set_gpr(3, rt.memory().aot_load32(ctx.gpr[17] + static_cast<std::uint32_t>(440)));
    { const bool branch_taken = ctx.gpr[3] != ctx.gpr[2];
    ctx.set_gpr(16, 0u + static_cast<std::uint32_t>(2));
      if (branch_taken) {
          goto L_08AC03BC;
      }
      goto L_08AC038C;
    }
L_08AC038C:
    ctx.set_gpr(31, 0x08AC0394u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0017_entry, 17u, 182u, 0x08848C18u>(ctx, &aot_mem) && ctx.pc == 0x08AC0394u) goto L_08AC0394;
    return;
L_08AC0394:
    ctx.set_gpr(4, ctx.gpr[2] + 0u);
    ctx.set_gpr(31, 0x08AC03A0u);
    ctx.set_gpr(5, 0u + static_cast<std::uint32_t>(1));
    if (rt.invoke_chained_direct<&recomp_unit_0023_entry, 23u, 484u, 0x08861D48u>(ctx, &aot_mem) && ctx.pc == 0x08AC03A0u) goto L_08AC03A0;
    return;
L_08AC03A0:
    ctx.set_gpr(31, 0x08AC03A8u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0017_entry, 17u, 182u, 0x08848C18u>(ctx, &aot_mem) && ctx.pc == 0x08AC03A8u) goto L_08AC03A8;
    return;
L_08AC03A8:
    ctx.set_gpr(5, rt.memory().aot_load32(ctx.gpr[17] + static_cast<std::uint32_t>(232)));
    ctx.set_gpr(31, 0x08AC03B4u);
    ctx.set_gpr(4, ctx.gpr[2] + 0u);
    goto L_08AC04A8;
L_08AC03B4:
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_08AC03D8;
      }
      goto L_08AC03BC;
    }
L_08AC03BC:
    { const bool branch_taken = ctx.gpr[3] != ctx.gpr[16];
    // nop
      if (branch_taken) {
          goto L_08AC03D8;
      }
      goto L_08AC03C4;
    }
L_08AC03C4:
    ctx.set_gpr(31, 0x08AC03CCu);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0017_entry, 17u, 182u, 0x08848C18u>(ctx, &aot_mem) && ctx.pc == 0x08AC03CCu) goto L_08AC03CC;
    return;
L_08AC03CC:
    ctx.set_gpr(4, ctx.gpr[2] + 0u);
    ctx.set_gpr(31, 0x08AC03D8u);
    ctx.set_gpr(5, ctx.gpr[16] + 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0023_entry, 23u, 484u, 0x08861D48u>(ctx, &aot_mem) && ctx.pc == 0x08AC03D8u) goto L_08AC03D8;
    return;
L_08AC03D8:
    ctx.set_gpr(31, 0x08AC03E0u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0017_entry, 17u, 182u, 0x08848C18u>(ctx, &aot_mem) && ctx.pc == 0x08AC03E0u) goto L_08AC03E0;
    return;
L_08AC03E0:
    ctx.set_gpr(5, rt.memory().aot_load32(ctx.gpr[17] + static_cast<std::uint32_t>(224)));
    ctx.set_gpr(31, 0x08AC03ECu);
    ctx.set_gpr(4, ctx.gpr[2] + 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0040_entry, 40u, 300u, 0x088A549Cu>(ctx, &aot_mem) && ctx.pc == 0x08AC03ECu) goto L_08AC03EC;
    return;
L_08AC03EC:
    ctx.set_gpr(31, 0x08AC03F4u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0017_entry, 17u, 182u, 0x08848C18u>(ctx, &aot_mem) && ctx.pc == 0x08AC03F4u) goto L_08AC03F4;
    return;
L_08AC03F4:
    ctx.set_gpr(4, ctx.gpr[2] + 0u);
    ctx.set_gpr(31, 0x08AC0400u);
    ctx.set_gpr(5, 0u + static_cast<std::uint32_t>(1));
    if (rt.invoke_chained_direct<&recomp_unit_0174_entry, 174u, 989u, 0x08ABFC68u>(ctx, &aot_mem) && ctx.pc == 0x08AC0400u) goto L_08AC0400;
    return;
L_08AC0400:
    ctx.set_gpr(2, 0u + static_cast<std::uint32_t>(2));
    goto L_08AC0404;
L_08AC0404:
    if (ctx.gpr[16] == ctx.gpr[2]) {
    ctx.set_gpr(4, rt.memory().aot_load32(ctx.gpr[17] + static_cast<std::uint32_t>(4)));
        goto L_08AC045C;
    }
    goto L_08AC040C;
L_08AC040C:
    ctx.set_gpr(2, 0u + static_cast<std::uint32_t>(1));
    if (ctx.gpr[16] == ctx.gpr[2]) {
    ctx.set_gpr(4, rt.memory().aot_load32(ctx.gpr[17] + static_cast<std::uint32_t>(4)));
        goto L_08AC044C;
    }
    goto L_08AC0418;
L_08AC0418:
    if (ctx.gpr[16] == 0u) {
    ctx.set_gpr(2, 16128u << 16u);
        goto L_08AC0428;
    }
    goto L_08AC0420;
L_08AC0420:
    { const bool branch_taken = 0u == 0u;
    ctx.set_gpr(2, 0u + static_cast<std::uint32_t>(1));
      if (branch_taken) {
          goto L_08AC0494;
      }
      goto L_08AC0428;
    }
L_08AC0428:
    ctx.fpr[12] = std::bit_cast<float>(ctx.gpr[2]);
    ctx.set_gpr(4, rt.memory().aot_load32(ctx.gpr[17] + static_cast<std::uint32_t>(4)));
    ctx.set_gpr(5, 0u + 0u);
    ctx.set_gpr(6, 0u + static_cast<std::uint32_t>(3));
    ctx.set_gpr(7, 0u + 0u);
    ctx.set_gpr(31, 0x08AC0444u);
    ctx.set_fpr_bits(13, ctx.fpr_bits(12));
    if (rt.invoke_chained_direct<&recomp_unit_0170_entry, 170u, 489u, 0x08AAE0B0u>(ctx, &aot_mem) && ctx.pc == 0x08AC0444u) goto L_08AC0444;
    return;
L_08AC0444:
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_08AC0490;
      }
      goto L_08AC044C;
    }
L_08AC044C:
    ctx.set_gpr(31, 0x08AC0454u);
    ctx.set_gpr(5, rt.memory().aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(92)));
    if (rt.invoke_chained_direct<&recomp_unit_0170_entry, 170u, 526u, 0x08AAE2D8u>(ctx, &aot_mem) && ctx.pc == 0x08AC0454u) goto L_08AC0454;
    return;
L_08AC0454:
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_08AC0490;
      }
      goto L_08AC045C;
    }
L_08AC045C:
    ctx.set_gpr(31, 0x08AC0464u);
    ctx.set_gpr(5, 0u + static_cast<std::uint32_t>(10));
    if (rt.invoke_chained_direct<&recomp_unit_0170_entry, 170u, 585u, 0x08AAE578u>(ctx, &aot_mem) && ctx.pc == 0x08AC0464u) goto L_08AC0464;
    return;
L_08AC0464:
    ctx.set_gpr(2, 2231u << 16u);
    ctx.fpr[2] = std::bit_cast<float>(rt.memory().aot_load32(ctx.gpr[2] + static_cast<std::uint32_t>(3256)));
    ctx.set_gpr(2, 2231u << 16u);
    ctx.fpr[1] = std::bit_cast<float>(rt.memory().aot_load32(ctx.gpr[2] + static_cast<std::uint32_t>(3260)));
    ctx.set_gpr(2, 2231u << 16u);
    ctx.fpr[0] = std::bit_cast<float>(rt.memory().aot_load32(ctx.gpr[2] + static_cast<std::uint32_t>(3264)));
    rt.memory().aot_store32(ctx.gpr[17] + static_cast<std::uint32_t>(12), std::bit_cast<std::uint32_t>(ctx.fpr[2]));
    rt.memory().aot_store32(ctx.gpr[17] + static_cast<std::uint32_t>(16), std::bit_cast<std::uint32_t>(ctx.fpr[1]));
    ctx.set_gpr(2, 0u + 0u);
    { const bool branch_taken = 0u == 0u;
    rt.memory().aot_store32(ctx.gpr[17] + static_cast<std::uint32_t>(20), std::bit_cast<std::uint32_t>(ctx.fpr[0]));
      if (branch_taken) {
          goto L_08AC0494;
      }
      goto L_08AC0490;
    }
L_08AC0490:
    ctx.set_gpr(2, 0u + static_cast<std::uint32_t>(1));
    goto L_08AC0494;
L_08AC0494:
    ctx.set_gpr(31, rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(12)));
    ctx.set_gpr(17, rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(8)));
    ctx.set_gpr(16, rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(4)));
    jump_target = ctx.gpr[31];
    ctx.set_gpr(29, ctx.gpr[29] + static_cast<std::uint32_t>(16));
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_08AC04A8:
    jump_target = ctx.gpr[31];
    rt.memory().aot_store32(ctx.gpr[4] + static_cast<std::uint32_t>(12), ctx.gpr[5]);
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_08AC04B0:
    ctx.set_gpr(29, ctx.gpr[29] + static_cast<std::uint32_t>(-16));
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(12), ctx.gpr[31]);
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(8), ctx.gpr[16]);
    ctx.set_gpr(16, ctx.gpr[4] + 0u);
    ctx.set_gpr(4, rt.memory().aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(4)));
    ctx.set_gpr(31, 0x08AC04CCu);
    ctx.fpr[12] = std::bit_cast<float>(rt.memory().aot_load32(ctx.gpr[5] + static_cast<std::uint32_t>(16)));
    if (rt.invoke_chained_direct<&recomp_unit_0170_entry, 170u, 600u, 0x08AAE684u>(ctx, &aot_mem) && ctx.pc == 0x08AC04CCu) goto L_08AC04CC;
    return;
L_08AC04CC:
    ctx.set_gpr(2, ctx.gpr[2] & 255u);
    { const bool branch_taken = ctx.gpr[2] != 0u;
    // nop
      if (branch_taken) {
          goto L_08AC04E0;
      }
      goto L_08AC04D8;
    }
L_08AC04D8:
    { const bool branch_taken = 0u == 0u;
    ctx.set_gpr(2, 0u + 0u);
      if (branch_taken) {
          goto L_08AC0504;
      }
      goto L_08AC04E0;
    }
L_08AC04E0:
    ctx.set_gpr(31, 0x08AC04E8u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0017_entry, 17u, 193u, 0x08848C9Cu>(ctx, &aot_mem) && ctx.pc == 0x08AC04E8u) goto L_08AC04E8;
    return;
L_08AC04E8:
    ctx.set_gpr(4, ctx.gpr[2] + 0u);
    ctx.set_gpr(31, 0x08AC04F4u);
    ctx.set_gpr(5, 0u + 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0178_entry, 178u, 789u, 0x08ACEAC4u>(ctx, &aot_mem) && ctx.pc == 0x08AC04F4u) goto L_08AC04F4;
    return;
L_08AC04F4:
    ctx.set_gpr(4, rt.memory().aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(4)));
    ctx.set_gpr(31, 0x08AC0500u);
    ctx.set_gpr(5, rt.memory().aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(92)));
    if (rt.invoke_chained_direct<&recomp_unit_0170_entry, 170u, 526u, 0x08AAE2D8u>(ctx, &aot_mem) && ctx.pc == 0x08AC0500u) goto L_08AC0500;
    return;
L_08AC0500:
    ctx.set_gpr(2, 0u + static_cast<std::uint32_t>(1));
    goto L_08AC0504;
L_08AC0504:
    ctx.set_gpr(31, rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(12)));
    ctx.set_gpr(16, rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(8)));
    jump_target = ctx.gpr[31];
    ctx.set_gpr(29, ctx.gpr[29] + static_cast<std::uint32_t>(16));
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_08AC0514:
    ctx.set_gpr(29, ctx.gpr[29] + static_cast<std::uint32_t>(-48));
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(44), ctx.gpr[31]);
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(40), ctx.gpr[20]);
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(36), ctx.gpr[19]);
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(32), ctx.gpr[18]);
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(28), ctx.gpr[17]);
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(24), ctx.gpr[16]);
    ctx.set_gpr(19, ctx.gpr[4] + 0u);
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(16), std::bit_cast<std::uint32_t>(ctx.fpr[20]));
    ctx.set_gpr(25, rt.memory().aot_load32(ctx.gpr[19] + static_cast<std::uint32_t>(60)));
    ctx.set_gpr(25, rt.memory().aot_load32(ctx.gpr[25] + static_cast<std::uint32_t>(20)));
    jump_target = ctx.gpr[25];
    ctx.set_gpr(31, 0x08AC0548u);
    ctx.set_gpr(4, ctx.gpr[19] + static_cast<std::uint32_t>(36));
    ctx.pc = jump_target;
    if (rt.invoke_chained_call(ctx, &aot_mem) && ctx.pc == 0x08AC0548u) goto L_08AC0548;
    return;
L_08AC0548:
    ctx.set_gpr(31, 0x08AC0550u);
    ctx.set_gpr(17, ctx.gpr[2] + 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0017_entry, 17u, 191u, 0x08848C84u>(ctx, &aot_mem) && ctx.pc == 0x08AC0550u) goto L_08AC0550;
    return;
L_08AC0550:
    ctx.set_gpr(31, 0x08AC0558u);
    ctx.set_gpr(4, ctx.gpr[2] + 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0174_entry, 174u, 990u, 0x08ABFC78u>(ctx, &aot_mem) && ctx.pc == 0x08AC0558u) goto L_08AC0558;
    return;
L_08AC0558:
    ctx.set_gpr(18, ctx.gpr[2] + 0u);
    ctx.set_gpr(31, 0x08AC0564u);
    ctx.set_gpr(4, ctx.gpr[18] + 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0024_entry, 24u, 826u, 0x08866984u>(ctx, &aot_mem) && ctx.pc == 0x08AC0564u) goto L_08AC0564;
    return;
L_08AC0564:
    ctx.set_gpr(20, ctx.gpr[2] + 0u);
    ctx.set_gpr(4, ctx.gpr[18] + 0u);
    ctx.set_gpr(31, 0x08AC0574u);
    ctx.set_gpr(5, ctx.gpr[20] + 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0159_entry, 159u, 401u, 0x08A81268u>(ctx, &aot_mem) && ctx.pc == 0x08AC0574u) goto L_08AC0574;
    return;
L_08AC0574:
    ctx.set_gpr(16, ctx.gpr[2] + 0u);
    ctx.set_gpr(2, rt.memory().aot_load32(ctx.gpr[19] + static_cast<std::uint32_t>(220)));
    { const bool branch_taken = ctx.gpr[2] == ctx.gpr[20];
    // nop
      if (branch_taken) {
          goto L_08AC0598;
      }
      goto L_08AC0584;
    }
L_08AC0584:
    ctx.set_gpr(7, rt.memory().aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(12)));
    ctx.set_gpr(6, ctx.gpr[20] + 0u);
    ctx.set_gpr(4, ctx.gpr[19] + 0u);
    ctx.set_gpr(31, 0x08AC0598u);
    ctx.set_gpr(5, ctx.gpr[18] + 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0174_entry, 174u, 1017u, 0x08ABFDBCu>(ctx, &aot_mem) && ctx.pc == 0x08AC0598u) goto L_08AC0598;
    return;
L_08AC0598:
    if (ctx.gpr[17] != 0u) {
    ctx.set_gpr(2, 0u + static_cast<std::uint32_t>(6));
        goto L_08AC05A8;
    }
    goto L_08AC05A0;
L_08AC05A0:
    { const bool branch_taken = 0u == 0u;
    ctx.set_gpr(2, 0u + static_cast<std::uint32_t>(1));
      if (branch_taken) {
          goto L_08AC078C;
      }
      goto L_08AC05A8;
    }
L_08AC05A8:
    if (ctx.gpr[17] == ctx.gpr[2]) {
    ctx.set_gpr(2, 0u + static_cast<std::uint32_t>(2));
        goto L_08AC0728;
    }
    goto L_08AC05B0;
L_08AC05B0:
    ctx.set_gpr(2, 0u + static_cast<std::uint32_t>(5));
    if (ctx.gpr[17] == ctx.gpr[2]) {
    ctx.set_gpr(16, rt.memory().aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(12)));
        goto L_08AC06DC;
    }
    goto L_08AC05BC;
L_08AC05BC:
    ctx.set_gpr(2, 0u + static_cast<std::uint32_t>(2));
    if (ctx.gpr[17] == ctx.gpr[2]) {
    rt.memory().aot_store32(ctx.gpr[19] + static_cast<std::uint32_t>(440), 0u);
        goto L_08AC067C;
    }
    goto L_08AC05C8;
L_08AC05C8:
    ctx.set_gpr(2, 0u + static_cast<std::uint32_t>(1));
    if (ctx.gpr[17] == ctx.gpr[2]) {
    rt.memory().aot_store32(ctx.gpr[19] + static_cast<std::uint32_t>(440), ctx.gpr[2]);
        goto L_08AC05DC;
    }
    goto L_08AC05D4;
L_08AC05D4:
    { const bool branch_taken = 0u == 0u;
    ctx.set_gpr(2, 0u + static_cast<std::uint32_t>(1));
      if (branch_taken) {
          goto L_08AC078C;
      }
      goto L_08AC05DC;
    }
L_08AC05DC:
    ctx.set_gpr(5, rt.memory().aot_load32(ctx.gpr[19] + static_cast<std::uint32_t>(224)));
    ctx.set_gpr(6, rt.memory().aot_load32(ctx.gpr[19] + static_cast<std::uint32_t>(232)));
    ctx.set_gpr(31, 0x08AC05ECu);
    ctx.set_gpr(4, ctx.gpr[19] + 0u);
    goto L_08AC00B0;
L_08AC05EC:
    ctx.set_gpr(4, ctx.gpr[18] + 0u);
    ctx.set_gpr(31, 0x08AC05F8u);
    ctx.set_gpr(5, 0u + 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0187_entry, 187u, 664u, 0x08AF2ACCu>(ctx, &aot_mem) && ctx.pc == 0x08AC05F8u) goto L_08AC05F8;
    return;
L_08AC05F8:
    ctx.set_gpr(6, rt.memory().aot_load32(ctx.gpr[19] + static_cast<std::uint32_t>(220)));
    ctx.set_gpr(7, rt.memory().aot_load32(ctx.gpr[19] + static_cast<std::uint32_t>(224)));
    ctx.set_gpr(5, ctx.gpr[18] + 0u);
    ctx.set_gpr(31, 0x08AC060Cu);
    ctx.set_gpr(4, ctx.gpr[19] + static_cast<std::uint32_t>(36));
    goto L_08AC07E4;
L_08AC060C:
    ctx.set_gpr(31, 0x08AC0614u);
    ctx.set_gpr(4, 0u + 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0023_entry, 23u, 610u, 0x088624F4u>(ctx, &aot_mem) && ctx.pc == 0x08AC0614u) goto L_08AC0614;
    return;
L_08AC0614:
    ctx.set_gpr(17, ctx.gpr[2] + 0u);
    ctx.set_gpr(31, 0x08AC0620u);
    ctx.set_gpr(4, 0u + static_cast<std::uint32_t>(1));
    if (rt.invoke_chained_direct<&recomp_unit_0023_entry, 23u, 610u, 0x088624F4u>(ctx, &aot_mem) && ctx.pc == 0x08AC0620u) goto L_08AC0620;
    return;
L_08AC0620:
    ctx.set_gpr(16, ctx.gpr[2] + 0u);
    ctx.set_gpr(31, 0x08AC062Cu);
    ctx.set_gpr(4, 0u + static_cast<std::uint32_t>(2));
    if (rt.invoke_chained_direct<&recomp_unit_0023_entry, 23u, 610u, 0x088624F4u>(ctx, &aot_mem) && ctx.pc == 0x08AC062Cu) goto L_08AC062C;
    return;
L_08AC062C:
    ctx.set_gpr(6, rt.memory().aot_load32(ctx.gpr[19] + static_cast<std::uint32_t>(232)));
    ctx.set_gpr(7, rt.memory().aot_load32(ctx.gpr[19] + static_cast<std::uint32_t>(236)));
    ctx.set_gpr(8, ctx.gpr[17] + 0u);
    ctx.set_gpr(9, ctx.gpr[16] + 0u);
    ctx.set_gpr(10, ctx.gpr[2] + 0u);
    ctx.set_gpr(4, ctx.gpr[19] + static_cast<std::uint32_t>(108));
    ctx.set_gpr(31, 0x08AC064Cu);
    ctx.set_gpr(5, 0u + static_cast<std::uint32_t>(1));
    if (rt.invoke_chained_direct<&recomp_unit_0174_entry, 174u, 679u, 0x08ABE858u>(ctx, &aot_mem) && ctx.pc == 0x08AC064Cu) goto L_08AC064C;
    return;
L_08AC064C:
    ctx.set_gpr(2, 0u + static_cast<std::uint32_t>(1));
    rt.memory().aot_store8(ctx.gpr[19] + static_cast<std::uint32_t>(229), static_cast<std::uint8_t>(ctx.gpr[2]));
    ctx.set_gpr(2, 2231u << 16u);
    ctx.fpr[2] = std::bit_cast<float>(rt.memory().aot_load32(ctx.gpr[2] + static_cast<std::uint32_t>(3268)));
    ctx.set_gpr(2, 2231u << 16u);
    ctx.fpr[1] = std::bit_cast<float>(rt.memory().aot_load32(ctx.gpr[2] + static_cast<std::uint32_t>(3272)));
    ctx.set_gpr(2, 2231u << 16u);
    ctx.fpr[0] = std::bit_cast<float>(rt.memory().aot_load32(ctx.gpr[2] + static_cast<std::uint32_t>(3276)));
    rt.memory().aot_store32(ctx.gpr[19] + static_cast<std::uint32_t>(12), std::bit_cast<std::uint32_t>(ctx.fpr[2]));
    rt.memory().aot_store32(ctx.gpr[19] + static_cast<std::uint32_t>(16), std::bit_cast<std::uint32_t>(ctx.fpr[1]));
    { const bool branch_taken = 0u == 0u;
    rt.memory().aot_store32(ctx.gpr[19] + static_cast<std::uint32_t>(20), std::bit_cast<std::uint32_t>(ctx.fpr[0]));
      if (branch_taken) {
          goto L_08AC0788;
      }
      goto L_08AC067C;
    }
L_08AC067C:
    ctx.set_gpr(2, rt.memory().aot_load8(ctx.gpr[19] + static_cast<std::uint32_t>(240)));
    if (ctx.gpr[2] == 0u) {
    ctx.set_gpr(4, ctx.gpr[19] + static_cast<std::uint32_t>(92));
        goto L_08AC06A4;
    }
    goto L_08AC0688;
L_08AC0688:
    ctx.set_gpr(4, ctx.gpr[19] + static_cast<std::uint32_t>(92));
    ctx.set_gpr(5, 0u + 0u);
    ctx.set_gpr(6, ctx.gpr[19] + static_cast<std::uint32_t>(108));
    ctx.set_gpr(31, 0x08AC069Cu);
    ctx.set_gpr(7, 0u + 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0174_entry, 174u, 831u, 0x08ABF318u>(ctx, &aot_mem) && ctx.pc == 0x08AC069Cu) goto L_08AC069C;
    return;
L_08AC069C:
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_08AC06B4;
      }
      goto L_08AC06A4;
    }
L_08AC06A4:
    ctx.set_gpr(5, 0u + 0u);
    ctx.set_gpr(6, 0u + 0u);
    ctx.set_gpr(31, 0x08AC06B4u);
    ctx.set_gpr(7, 0u + 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0174_entry, 174u, 831u, 0x08ABF318u>(ctx, &aot_mem) && ctx.pc == 0x08AC06B4u) goto L_08AC06B4;
    return;
L_08AC06B4:
    ctx.set_gpr(2, 2231u << 16u);
    ctx.fpr[2] = std::bit_cast<float>(rt.memory().aot_load32(ctx.gpr[2] + static_cast<std::uint32_t>(3280)));
    ctx.set_gpr(2, 2231u << 16u);
    ctx.fpr[1] = std::bit_cast<float>(rt.memory().aot_load32(ctx.gpr[2] + static_cast<std::uint32_t>(3284)));
    ctx.set_gpr(2, 2231u << 16u);
    ctx.fpr[0] = std::bit_cast<float>(rt.memory().aot_load32(ctx.gpr[2] + static_cast<std::uint32_t>(3288)));
    rt.memory().aot_store32(ctx.gpr[19] + static_cast<std::uint32_t>(12), std::bit_cast<std::uint32_t>(ctx.fpr[2]));
    rt.memory().aot_store32(ctx.gpr[19] + static_cast<std::uint32_t>(16), std::bit_cast<std::uint32_t>(ctx.fpr[1]));
    { const bool branch_taken = 0u == 0u;
    rt.memory().aot_store32(ctx.gpr[19] + static_cast<std::uint32_t>(20), std::bit_cast<std::uint32_t>(ctx.fpr[0]));
      if (branch_taken) {
          goto L_08AC0788;
      }
      goto L_08AC06DC;
    }
L_08AC06DC:
    ctx.set_gpr(31, 0x08AC06E4u);
    ctx.set_gpr(4, ctx.gpr[16] + 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0023_entry, 23u, 611u, 0x08862530u>(ctx, &aot_mem) && ctx.pc == 0x08AC06E4u) goto L_08AC06E4;
    return;
L_08AC06E4:
    ctx.set_fpr_bits(20, ctx.fpr_bits(0));
    ctx.set_gpr(31, 0x08AC06F0u);
    ctx.set_gpr(4, ctx.gpr[16] + 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0023_entry, 23u, 614u, 0x08862578u>(ctx, &aot_mem) && ctx.pc == 0x08AC06F0u) goto L_08AC06F0;
    return;
L_08AC06F0:
    ctx.set_gpr(2, 0u + static_cast<std::uint32_t>(1));
    rt.memory().aot_store8(ctx.gpr[19] + static_cast<std::uint32_t>(228), static_cast<std::uint8_t>(ctx.gpr[2]));
    ctx.set_gpr(3, rt.memory().aot_load32(ctx.gpr[19] + static_cast<std::uint32_t>(4)));
    ctx.set_gpr(2, 49024u << 16u);
    ctx.fpr[14] = std::bit_cast<float>(ctx.gpr[2]);
    ctx.set_gpr(5, ctx.gpr[16] + 0u);
    ctx.set_fpr_bits(12, ctx.fpr_bits(20));
    ctx.set_fpr_bits(13, ctx.fpr_bits(0));
    ctx.set_gpr(4, ctx.gpr[3] + static_cast<std::uint32_t>(28940));
    ctx.set_fpr_bits(15, ctx.fpr_bits(14));
    ctx.set_gpr(31, 0x08AC0720u);
    ctx.set_fpr_bits(16, ctx.fpr_bits(14));
    goto L_08AC07B0;
L_08AC0720:
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_08AC0788;
      }
      goto L_08AC0728;
    }
L_08AC0728:
    rt.memory().aot_store32(ctx.gpr[19] + static_cast<std::uint32_t>(440), ctx.gpr[2]);
    ctx.set_gpr(4, ctx.gpr[18] + 0u);
    ctx.set_gpr(31, 0x08AC0738u);
    ctx.set_gpr(5, 0u + 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0187_entry, 187u, 664u, 0x08AF2ACCu>(ctx, &aot_mem) && ctx.pc == 0x08AC0738u) goto L_08AC0738;
    return;
L_08AC0738:
    ctx.set_gpr(6, rt.memory().aot_load32(ctx.gpr[19] + static_cast<std::uint32_t>(220)));
    ctx.set_gpr(7, rt.memory().aot_load32(ctx.gpr[19] + static_cast<std::uint32_t>(224)));
    ctx.set_gpr(5, ctx.gpr[18] + 0u);
    ctx.set_gpr(31, 0x08AC074Cu);
    ctx.set_gpr(4, ctx.gpr[19] + static_cast<std::uint32_t>(36));
    goto L_08AC07E4;
L_08AC074C:
    ctx.set_gpr(6, 2231u << 16u);
    ctx.set_gpr(4, ctx.gpr[19] + static_cast<std::uint32_t>(108));
    ctx.set_gpr(5, 0u + static_cast<std::uint32_t>(1));
    ctx.set_gpr(31, 0x08AC0760u);
    ctx.set_gpr(6, ctx.gpr[6] + static_cast<std::uint32_t>(3304));
    if (rt.invoke_chained_direct<&recomp_unit_0174_entry, 174u, 648u, 0x08ABE660u>(ctx, &aot_mem) && ctx.pc == 0x08AC0760u) goto L_08AC0760;
    return;
L_08AC0760:
    rt.memory().aot_store8(ctx.gpr[19] + static_cast<std::uint32_t>(229), static_cast<std::uint8_t>(0u));
    ctx.set_gpr(2, 2231u << 16u);
    ctx.fpr[2] = std::bit_cast<float>(rt.memory().aot_load32(ctx.gpr[2] + static_cast<std::uint32_t>(3292)));
    ctx.set_gpr(2, 2231u << 16u);
    ctx.fpr[1] = std::bit_cast<float>(rt.memory().aot_load32(ctx.gpr[2] + static_cast<std::uint32_t>(3296)));
    ctx.set_gpr(2, 2231u << 16u);
    ctx.fpr[0] = std::bit_cast<float>(rt.memory().aot_load32(ctx.gpr[2] + static_cast<std::uint32_t>(3300)));
    rt.memory().aot_store32(ctx.gpr[19] + static_cast<std::uint32_t>(12), std::bit_cast<std::uint32_t>(ctx.fpr[2]));
    rt.memory().aot_store32(ctx.gpr[19] + static_cast<std::uint32_t>(16), std::bit_cast<std::uint32_t>(ctx.fpr[1]));
    rt.memory().aot_store32(ctx.gpr[19] + static_cast<std::uint32_t>(20), std::bit_cast<std::uint32_t>(ctx.fpr[0]));
    goto L_08AC0788;
L_08AC0788:
    ctx.set_gpr(2, 0u + static_cast<std::uint32_t>(1));
    goto L_08AC078C;
L_08AC078C:
    ctx.set_gpr(31, rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(44)));
    ctx.set_gpr(20, rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(40)));
    ctx.set_gpr(19, rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(36)));
    ctx.set_gpr(18, rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(32)));
    ctx.set_gpr(17, rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(28)));
    ctx.set_gpr(16, rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(24)));
    ctx.fpr[20] = std::bit_cast<float>(rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(16)));
    jump_target = ctx.gpr[31];
    ctx.set_gpr(29, ctx.gpr[29] + static_cast<std::uint32_t>(48));
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_08AC07B0:
    ctx.set_fpr_bits(0, ctx.fpr_bits(13));
    ctx.set_fpr_bits(1, ctx.fpr_bits(14));
    ctx.set_fpr_bits(13, ctx.fpr_bits(12));
    ctx.set_fpr_bits(14, ctx.fpr_bits(0));
    ctx.set_gpr(6, ctx.gpr[5] + 0u);
    ctx.set_fpr_bits(0, ctx.fpr_bits(15));
    ctx.set_fpr_bits(12, ctx.fpr_bits(16));
    ctx.set_fpr_bits(15, ctx.fpr_bits(1));
    ctx.set_gpr(5, 0u + 0u);
    ctx.set_gpr(7, 0u + 0u);
    ctx.set_fpr_bits(16, ctx.fpr_bits(0));
    ctx.set_gpr(8, 0u + static_cast<std::uint32_t>(1));
    (void)rt.invoke_chained_direct<&recomp_unit_0194_entry, 194u, 129u, 0x08B0C6F0u>(ctx, &aot_mem); return;
L_08AC07E4:
    ctx.set_gpr(29, ctx.gpr[29] + static_cast<std::uint32_t>(-32));
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(28), ctx.gpr[31]);
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(24), ctx.gpr[19]);
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(20), ctx.gpr[18]);
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(16), ctx.gpr[17]);
    ctx.set_gpr(19, ctx.gpr[5] + 0u);
    ctx.set_gpr(18, ctx.gpr[6] + 0u);
    ctx.set_gpr(17, ctx.gpr[7] + 0u);
    ctx.set_gpr(31, 0x08AC080Cu);
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(12), ctx.gpr[16]);
    if (rt.invoke_chained_direct<&recomp_unit_0017_entry, 17u, 182u, 0x08848C18u>(ctx, &aot_mem) && ctx.pc == 0x08AC080Cu) goto L_08AC080C;
    return;
L_08AC080C:
    ctx.set_gpr(31, 0x08AC0814u);
    ctx.set_gpr(4, ctx.gpr[2] + 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0016_entry, 16u, 633u, 0x08847AC0u>(ctx, &aot_mem) && ctx.pc == 0x08AC0814u) goto L_08AC0814;
    return;
L_08AC0814:
    ctx.set_gpr(16, ctx.gpr[2] + 0u);
    ctx.set_gpr(4, ctx.gpr[19] + 0u);
    ctx.set_gpr(5, ctx.gpr[18] + 0u);
    ctx.set_gpr(6, 0u + static_cast<std::uint32_t>(2));
    ctx.set_gpr(31, 0x08AC082Cu);
    ctx.set_gpr(7, 0u + 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0187_entry, 187u, 639u, 0x08AF28A4u>(ctx, &aot_mem) && ctx.pc == 0x08AC082Cu) goto L_08AC082C;
    return;
L_08AC082C:
    ctx.set_gpr(4, ctx.gpr[16] + 0u);
    ctx.set_gpr(5, ctx.gpr[17] + 0u);
    ctx.set_gpr(31, 0x08AC083Cu);
    ctx.set_gpr(6, 0u + 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0023_entry, 23u, 404u, 0x08861968u>(ctx, &aot_mem) && ctx.pc == 0x08AC083Cu) goto L_08AC083C;
    return;
L_08AC083C:
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
L_08AC0858:
    ctx.set_gpr(29, ctx.gpr[29] + static_cast<std::uint32_t>(-32));
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(28), ctx.gpr[31]);
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(24), ctx.gpr[19]);
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(20), ctx.gpr[18]);
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(16), ctx.gpr[17]);
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(12), ctx.gpr[16]);
    ctx.set_gpr(17, ctx.gpr[4] + 0u);
    ctx.set_gpr(16, ctx.gpr[5] + 0u);
    ctx.set_gpr(31, 0x08AC0880u);
    ctx.set_gpr(4, ctx.gpr[17] + static_cast<std::uint32_t>(108));
    if (rt.invoke_chained_direct<&recomp_unit_0172_entry, 172u, 211u, 0x08AB4D10u>(ctx, &aot_mem) && ctx.pc == 0x08AC0880u) goto L_08AC0880;
    return;
L_08AC0880:
    ctx.set_gpr(2, 16256u << 16u);
    ctx.fpr[12] = std::bit_cast<float>(ctx.gpr[2]);
    ctx.set_fpr_bits(15, ctx.fpr_bits(0));
    ctx.set_fpr_bits(13, ctx.fpr_bits(12));
    ctx.set_gpr(31, 0x08AC0898u);
    ctx.set_fpr_bits(14, ctx.fpr_bits(12));
    if (rt.invoke_chained_direct<&recomp_unit_0019_entry, 19u, 568u, 0x08852084u>(ctx, &aot_mem) && ctx.pc == 0x08AC0898u) goto L_08AC0898;
    return;
L_08AC0898:
    ctx.set_gpr(19, 0u + 0u);
    ctx.set_gpr(18, ctx.gpr[17] + 0u);
    goto L_08AC08A0;
L_08AC08A0:
    ctx.set_gpr(7, rt.memory().aot_load32(ctx.gpr[18] + static_cast<std::uint32_t>(244)));
    { const bool branch_taken = ctx.gpr[7] == 0u;
    ctx.set_gpr(2, ctx.gpr[18] + static_cast<std::uint32_t>(244));
      if (branch_taken) {
          goto L_08AC08C0;
      }
      goto L_08AC08AC;
    }
L_08AC08AC:
    ctx.set_gpr(4, rt.memory().aot_load32(ctx.gpr[2] + static_cast<std::uint32_t>(4)));
    ctx.set_gpr(6, 2231u << 16u);
    ctx.set_gpr(5, rt.memory().aot_load32(ctx.gpr[2] + static_cast<std::uint32_t>(8)));
    ctx.set_gpr(31, 0x08AC08C0u);
    ctx.set_gpr(6, ctx.gpr[6] + static_cast<std::uint32_t>(2964));
    if (rt.invoke_chained_direct<&recomp_unit_0019_entry, 19u, 527u, 0x08851CD8u>(ctx, &aot_mem) && ctx.pc == 0x08AC08C0u) goto L_08AC08C0;
    return;
L_08AC08C0:
    ctx.set_gpr(19, ctx.gpr[19] + static_cast<std::uint32_t>(1));
    ctx.set_gpr(2, static_cast<std::int32_t>(ctx.gpr[19]) < 4 ? 1u : 0u);
    { const bool branch_taken = ctx.gpr[2] != 0u;
    ctx.set_gpr(18, ctx.gpr[18] + static_cast<std::uint32_t>(16));
      if (branch_taken) {
          goto L_08AC08A0;
      }
      goto L_08AC08D0;
    }
L_08AC08D0:
    ctx.set_gpr(2, 16256u << 16u);
    ctx.fpr[12] = std::bit_cast<float>(ctx.gpr[2]);
    ctx.set_fpr_bits(13, ctx.fpr_bits(12));
    ctx.set_fpr_bits(14, ctx.fpr_bits(12));
    ctx.set_gpr(31, 0x08AC08E8u);
    ctx.set_fpr_bits(15, ctx.fpr_bits(12));
    if (rt.invoke_chained_direct<&recomp_unit_0019_entry, 19u, 568u, 0x08852084u>(ctx, &aot_mem) && ctx.pc == 0x08AC08E8u) goto L_08AC08E8;
    return;
L_08AC08E8:
    ctx.set_gpr(4, ctx.gpr[17] + static_cast<std::uint32_t>(108));
    ctx.set_gpr(31, 0x08AC08F4u);
    ctx.set_gpr(5, ctx.gpr[16] + 0u);
    goto L_08AC0914;
L_08AC08F4:
    ctx.set_gpr(31, rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(28)));
    ctx.set_gpr(19, rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(24)));
    ctx.set_gpr(18, rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(20)));
    ctx.set_gpr(17, rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(16)));
    ctx.set_gpr(16, rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(12)));
    ctx.set_gpr(2, 0u + static_cast<std::uint32_t>(1));
    jump_target = ctx.gpr[31];
    ctx.set_gpr(29, ctx.gpr[29] + static_cast<std::uint32_t>(32));
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_08AC0914:
    ctx.set_gpr(29, ctx.gpr[29] + static_cast<std::uint32_t>(-16));
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(12), ctx.gpr[31]);
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(8), ctx.gpr[17]);
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(4), ctx.gpr[16]);
    ctx.set_gpr(16, ctx.gpr[5] + 0u);
    ctx.set_gpr(31, 0x08AC0930u);
    ctx.set_gpr(17, ctx.gpr[4] + 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0000_entry, 0u, 343u, 0x08805400u>(ctx, &aot_mem) && ctx.pc == 0x08AC0930u) goto L_08AC0930;
    return;
L_08AC0930:
    if (ctx.gpr[2] == 0u) {
    ctx.set_gpr(2, 0u + 0u);
        goto L_08AC0948;
    }
    goto L_08AC0938;
L_08AC0938:
    ctx.set_gpr(5, ctx.gpr[16] + 0u);
    ctx.set_gpr(4, ctx.gpr[17] + 0u);
    ctx.set_gpr(31, 0x08AC0948u);
    ctx.set_gpr(25, ctx.gpr[17] + 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0000_entry, 0u, 340u, 0x088053CCu>(ctx, &aot_mem) && ctx.pc == 0x08AC0948u) goto L_08AC0948;
    return;
L_08AC0948:
    ctx.set_gpr(31, rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(12)));
    ctx.set_gpr(17, rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(8)));
    ctx.set_gpr(16, rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(4)));
    ctx.set_gpr(2, ctx.gpr[2] & 255u);
    jump_target = ctx.gpr[31];
    ctx.set_gpr(29, ctx.gpr[29] + static_cast<std::uint32_t>(16));
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_08AC0960:
    ctx.set_gpr(29, ctx.gpr[29] + static_cast<std::uint32_t>(-16));
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(12), ctx.gpr[31]);
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(8), ctx.gpr[18]);
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(4), ctx.gpr[17]);
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(0), ctx.gpr[16]);
    ctx.set_gpr(2, rt.memory().aot_load8(ctx.gpr[4] + static_cast<std::uint32_t>(229)));
    { const bool branch_taken = ctx.gpr[2] == 0u;
    ctx.set_gpr(16, ctx.gpr[4] + 0u);
      if (branch_taken) {
          goto L_08AC0A54;
      }
      goto L_08AC0980;
    }
L_08AC0980:
    ctx.set_gpr(31, 0x08AC0988u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0017_entry, 17u, 179u, 0x08848BF4u>(ctx, &aot_mem) && ctx.pc == 0x08AC0988u) goto L_08AC0988;
    return;
L_08AC0988:
    ctx.set_gpr(3, rt.memory().aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(236)));
    ctx.set_gpr(8, rt.memory().aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(232)));
    ctx.set_gpr(4, ctx.gpr[2] + 0u);
    ctx.set_gpr(5, 0u + static_cast<std::uint32_t>(5));
    ctx.set_gpr(9, ctx.gpr[3] + static_cast<std::uint32_t>(-1));
    ctx.set_gpr(6, 0u + static_cast<std::uint32_t>(3));
    ctx.set_gpr(31, 0x08AC09A8u);
    ctx.set_gpr(7, 0u + 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0017_entry, 17u, 870u, 0x0884B470u>(ctx, &aot_mem) && ctx.pc == 0x08AC09A8u) goto L_08AC09A8;
    return;
L_08AC09A8:
    { const bool branch_taken = ctx.gpr[2] == 0u;
    // nop
      if (branch_taken) {
          goto L_08AC0A54;
      }
      goto L_08AC09B0;
    }
L_08AC09B0:
    ctx.set_gpr(5, rt.memory().aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(232)));
    ctx.set_gpr(3, rt.memory().aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(236)));
    ctx.set_gpr(4, 0u + 0u);
    ctx.set_gpr(5, ctx.gpr[5] + ctx.gpr[2]);
    ctx.set_gpr(31, 0x08AC09C8u);
    ctx.set_gpr(6, ctx.gpr[3] + static_cast<std::uint32_t>(-1));
    if (rt.invoke_chained_direct<&recomp_unit_0176_entry, 176u, 149u, 0x08AC47E0u>(ctx, &aot_mem) && ctx.pc == 0x08AC09C8u) goto L_08AC09C8;
    return;
L_08AC09C8:
    ctx.set_gpr(17, ctx.gpr[2] + 0u);
    ctx.set_gpr(2, rt.memory().aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(232)));
    if (ctx.gpr[17] == ctx.gpr[2]) {
    ctx.set_gpr(2, 0u + static_cast<std::uint32_t>(1));
        goto L_08AC0BD4;
    }
    goto L_08AC09D8;
L_08AC09D8:
    ctx.set_gpr(31, 0x08AC09E0u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0017_entry, 17u, 185u, 0x08848C3Cu>(ctx, &aot_mem) && ctx.pc == 0x08AC09E0u) goto L_08AC09E0;
    return;
L_08AC09E0:
    ctx.set_gpr(4, ctx.gpr[2] + 0u);
    ctx.set_gpr(5, 0u + 0u);
    ctx.set_gpr(6, 0u + 0u);
    ctx.set_gpr(31, 0x08AC09F4u);
    ctx.set_gpr(7, 0u + 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0171_entry, 171u, 403u, 0x08AB179Cu>(ctx, &aot_mem) && ctx.pc == 0x08AC09F4u) goto L_08AC09F4;
    return;
L_08AC09F4:
    rt.memory().aot_store32(ctx.gpr[16] + static_cast<std::uint32_t>(232), ctx.gpr[17]);
    ctx.set_gpr(5, rt.memory().aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(224)));
    ctx.set_gpr(6, ctx.gpr[17] + 0u);
    ctx.set_gpr(31, 0x08AC0A08u);
    ctx.set_gpr(4, ctx.gpr[16] + 0u);
    goto L_08AC00B0;
L_08AC0A08:
    ctx.set_gpr(31, 0x08AC0A10u);
    ctx.set_gpr(4, 0u + 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0023_entry, 23u, 610u, 0x088624F4u>(ctx, &aot_mem) && ctx.pc == 0x08AC0A10u) goto L_08AC0A10;
    return;
L_08AC0A10:
    ctx.set_gpr(18, ctx.gpr[2] + 0u);
    ctx.set_gpr(31, 0x08AC0A1Cu);
    ctx.set_gpr(4, 0u + static_cast<std::uint32_t>(1));
    if (rt.invoke_chained_direct<&recomp_unit_0023_entry, 23u, 610u, 0x088624F4u>(ctx, &aot_mem) && ctx.pc == 0x08AC0A1Cu) goto L_08AC0A1C;
    return;
L_08AC0A1C:
    ctx.set_gpr(17, ctx.gpr[2] + 0u);
    ctx.set_gpr(31, 0x08AC0A28u);
    ctx.set_gpr(4, 0u + static_cast<std::uint32_t>(2));
    if (rt.invoke_chained_direct<&recomp_unit_0023_entry, 23u, 610u, 0x088624F4u>(ctx, &aot_mem) && ctx.pc == 0x08AC0A28u) goto L_08AC0A28;
    return;
L_08AC0A28:
    ctx.set_gpr(6, rt.memory().aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(232)));
    ctx.set_gpr(7, rt.memory().aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(236)));
    ctx.set_gpr(8, ctx.gpr[18] + 0u);
    ctx.set_gpr(9, ctx.gpr[17] + 0u);
    ctx.set_gpr(10, ctx.gpr[2] + 0u);
    ctx.set_gpr(4, ctx.gpr[16] + static_cast<std::uint32_t>(108));
    ctx.set_gpr(31, 0x08AC0A48u);
    ctx.set_gpr(5, 0u + static_cast<std::uint32_t>(1));
    if (rt.invoke_chained_direct<&recomp_unit_0174_entry, 174u, 679u, 0x08ABE858u>(ctx, &aot_mem) && ctx.pc == 0x08AC0A48u) goto L_08AC0A48;
    return;
L_08AC0A48:
    ctx.set_gpr(2, 0u + static_cast<std::uint32_t>(1));
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_08AC0BD4;
      }
      goto L_08AC0A54;
    }
L_08AC0A54:
    ctx.set_gpr(31, 0x08AC0A5Cu);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0017_entry, 17u, 179u, 0x08848BF4u>(ctx, &aot_mem) && ctx.pc == 0x08AC0A5Cu) goto L_08AC0A5C;
    return;
L_08AC0A5C:
    ctx.set_gpr(4, ctx.gpr[2] + 0u);
    ctx.set_gpr(31, 0x08AC0A68u);
    ctx.set_gpr(5, 0u + static_cast<std::uint32_t>(7));
    if (rt.invoke_chained_direct<&recomp_unit_0017_entry, 17u, 914u, 0x0884B680u>(ctx, &aot_mem) && ctx.pc == 0x08AC0A68u) goto L_08AC0A68;
    return;
L_08AC0A68:
    { const bool branch_taken = ctx.gpr[2] == 0u;
    // nop
      if (branch_taken) {
          goto L_08AC0AF4;
      }
      goto L_08AC0A70;
    }
L_08AC0A70:
    ctx.set_gpr(31, 0x08AC0A78u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0017_entry, 17u, 185u, 0x08848C3Cu>(ctx, &aot_mem) && ctx.pc == 0x08AC0A78u) goto L_08AC0A78;
    return;
L_08AC0A78:
    ctx.set_gpr(4, ctx.gpr[2] + 0u);
    ctx.set_gpr(5, 0u + static_cast<std::uint32_t>(1));
    ctx.set_gpr(6, 0u + 0u);
    ctx.set_gpr(31, 0x08AC0A8Cu);
    ctx.set_gpr(7, 0u + 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0171_entry, 171u, 403u, 0x08AB179Cu>(ctx, &aot_mem) && ctx.pc == 0x08AC0A8Cu) goto L_08AC0A8C;
    return;
L_08AC0A8C:
    ctx.set_gpr(2, 0u + static_cast<std::uint32_t>(1));
    rt.memory().aot_store8(ctx.gpr[16] + static_cast<std::uint32_t>(436), static_cast<std::uint8_t>(ctx.gpr[2]));
    ctx.set_gpr(2, rt.memory().aot_load8(ctx.gpr[16] + static_cast<std::uint32_t>(240)));
    if (ctx.gpr[2] == 0u) {
    ctx.set_gpr(4, ctx.gpr[16] + static_cast<std::uint32_t>(92));
        goto L_08AC0ABC;
    }
    goto L_08AC0AA0;
L_08AC0AA0:
    ctx.set_gpr(4, ctx.gpr[16] + static_cast<std::uint32_t>(92));
    ctx.set_gpr(5, 0u + 0u);
    ctx.set_gpr(6, ctx.gpr[16] + static_cast<std::uint32_t>(108));
    ctx.set_gpr(31, 0x08AC0AB4u);
    ctx.set_gpr(7, 0u + 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0174_entry, 174u, 831u, 0x08ABF318u>(ctx, &aot_mem) && ctx.pc == 0x08AC0AB4u) goto L_08AC0AB4;
    return;
L_08AC0AB4:
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_08AC0ACC;
      }
      goto L_08AC0ABC;
    }
L_08AC0ABC:
    ctx.set_gpr(5, 0u + 0u);
    ctx.set_gpr(6, 0u + 0u);
    ctx.set_gpr(31, 0x08AC0ACCu);
    ctx.set_gpr(7, 0u + 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0174_entry, 174u, 831u, 0x08ABF318u>(ctx, &aot_mem) && ctx.pc == 0x08AC0ACCu) goto L_08AC0ACC;
    return;
L_08AC0ACC:
    ctx.set_gpr(2, 2231u << 16u);
    ctx.fpr[2] = std::bit_cast<float>(rt.memory().aot_load32(ctx.gpr[2] + static_cast<std::uint32_t>(3312)));
    ctx.set_gpr(2, 2231u << 16u);
    ctx.fpr[1] = std::bit_cast<float>(rt.memory().aot_load32(ctx.gpr[2] + static_cast<std::uint32_t>(3316)));
    ctx.set_gpr(2, 2231u << 16u);
    ctx.fpr[0] = std::bit_cast<float>(rt.memory().aot_load32(ctx.gpr[2] + static_cast<std::uint32_t>(3320)));
    rt.memory().aot_store32(ctx.gpr[16] + static_cast<std::uint32_t>(12), std::bit_cast<std::uint32_t>(ctx.fpr[2]));
    rt.memory().aot_store32(ctx.gpr[16] + static_cast<std::uint32_t>(16), std::bit_cast<std::uint32_t>(ctx.fpr[1]));
    { const bool branch_taken = 0u == 0u;
    rt.memory().aot_store32(ctx.gpr[16] + static_cast<std::uint32_t>(20), std::bit_cast<std::uint32_t>(ctx.fpr[0]));
      if (branch_taken) {
          goto L_08AC0BD0;
      }
      goto L_08AC0AF4;
    }
L_08AC0AF4:
    ctx.set_gpr(31, 0x08AC0AFCu);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0017_entry, 17u, 179u, 0x08848BF4u>(ctx, &aot_mem) && ctx.pc == 0x08AC0AFCu) goto L_08AC0AFC;
    return;
L_08AC0AFC:
    ctx.set_gpr(4, ctx.gpr[2] + 0u);
    ctx.set_gpr(31, 0x08AC0B08u);
    ctx.set_gpr(5, 0u + static_cast<std::uint32_t>(8));
    if (rt.invoke_chained_direct<&recomp_unit_0017_entry, 17u, 914u, 0x0884B680u>(ctx, &aot_mem) && ctx.pc == 0x08AC0B08u) goto L_08AC0B08;
    return;
L_08AC0B08:
    if (ctx.gpr[2] == 0u) {
    ctx.set_gpr(2, 0u + static_cast<std::uint32_t>(1));
        goto L_08AC0BD4;
    }
    goto L_08AC0B10;
L_08AC0B10:
    ctx.set_gpr(31, 0x08AC0B18u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0017_entry, 17u, 185u, 0x08848C3Cu>(ctx, &aot_mem) && ctx.pc == 0x08AC0B18u) goto L_08AC0B18;
    return;
L_08AC0B18:
    ctx.set_gpr(4, ctx.gpr[2] + 0u);
    ctx.set_gpr(5, 0u + static_cast<std::uint32_t>(2));
    ctx.set_gpr(6, 0u + 0u);
    ctx.set_gpr(31, 0x08AC0B2Cu);
    ctx.set_gpr(7, 0u + 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0171_entry, 171u, 403u, 0x08AB179Cu>(ctx, &aot_mem) && ctx.pc == 0x08AC0B2Cu) goto L_08AC0B2C;
    return;
L_08AC0B2C:
    ctx.set_gpr(4, ctx.gpr[16] + static_cast<std::uint32_t>(108));
    ctx.set_gpr(5, 0u + 0u);
    ctx.set_gpr(31, 0x08AC0B3Cu);
    ctx.set_gpr(6, 0u + static_cast<std::uint32_t>(1));
    if (rt.invoke_chained_direct<&recomp_unit_0174_entry, 174u, 1032u, 0x08ABFEDCu>(ctx, &aot_mem) && ctx.pc == 0x08AC0B3Cu) goto L_08AC0B3C;
    return;
L_08AC0B3C:
    ctx.set_gpr(25, rt.memory().aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(208)));
    ctx.set_gpr(5, rt.memory().aot_load8(ctx.gpr[16] + static_cast<std::uint32_t>(240)));
    ctx.set_gpr(4, ctx.gpr[16] + static_cast<std::uint32_t>(108));
    ctx.set_gpr(25, rt.memory().aot_load32(ctx.gpr[25] + static_cast<std::uint32_t>(16)));
    jump_target = ctx.gpr[25];
    ctx.set_gpr(31, 0x08AC0B54u);
    ctx.set_gpr(6, 0u + 0u);
    ctx.pc = jump_target;
    if (rt.invoke_chained_call(ctx, &aot_mem) && ctx.pc == 0x08AC0B54u) goto L_08AC0B54;
    return;
L_08AC0B54:
    ctx.set_gpr(5, rt.memory().aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(224)));
    ctx.set_gpr(31, 0x08AC0B60u);
    ctx.set_gpr(4, ctx.gpr[16] + 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0174_entry, 174u, 1033u, 0x08ABFEE8u>(ctx, &aot_mem) && ctx.pc == 0x08AC0B60u) goto L_08AC0B60;
    return;
L_08AC0B60:
    ctx.set_gpr(31, 0x08AC0B68u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0017_entry, 17u, 191u, 0x08848C84u>(ctx, &aot_mem) && ctx.pc == 0x08AC0B68u) goto L_08AC0B68;
    return;
L_08AC0B68:
    ctx.set_gpr(31, 0x08AC0B70u);
    ctx.set_gpr(4, ctx.gpr[2] + 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0174_entry, 174u, 990u, 0x08ABFC78u>(ctx, &aot_mem) && ctx.pc == 0x08AC0B70u) goto L_08AC0B70;
    return;
L_08AC0B70:
    ctx.set_gpr(4, ctx.gpr[2] + 0u);
    ctx.set_gpr(31, 0x08AC0B7Cu);
    ctx.set_gpr(5, 0u + static_cast<std::uint32_t>(1));
    if (rt.invoke_chained_direct<&recomp_unit_0187_entry, 187u, 664u, 0x08AF2ACCu>(ctx, &aot_mem) && ctx.pc == 0x08AC0B7Cu) goto L_08AC0B7C;
    return;
L_08AC0B7C:
    ctx.set_gpr(6, 0u + static_cast<std::uint32_t>(1));
    ctx.set_gpr(4, ctx.gpr[16] + static_cast<std::uint32_t>(108));
    ctx.set_gpr(5, 0u + 0u);
    ctx.set_gpr(7, ctx.gpr[6] + 0u);
    ctx.set_gpr(8, 0u + 0u);
    ctx.set_gpr(9, 0u + 0u);
    ctx.set_gpr(31, 0x08AC0B9Cu);
    ctx.set_gpr(10, 0u + 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0174_entry, 174u, 679u, 0x08ABE858u>(ctx, &aot_mem) && ctx.pc == 0x08AC0B9Cu) goto L_08AC0B9C;
    return;
L_08AC0B9C:
    ctx.set_gpr(4, ctx.gpr[16] + static_cast<std::uint32_t>(108));
    ctx.set_gpr(5, 0u + 0u);
    ctx.set_gpr(31, 0x08AC0BACu);
    ctx.set_gpr(6, 0u + 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0174_entry, 174u, 648u, 0x08ABE660u>(ctx, &aot_mem) && ctx.pc == 0x08AC0BACu) goto L_08AC0BAC;
    return;
L_08AC0BAC:
    ctx.set_gpr(2, 2231u << 16u);
    ctx.fpr[2] = std::bit_cast<float>(rt.memory().aot_load32(ctx.gpr[2] + static_cast<std::uint32_t>(3324)));
    ctx.set_gpr(2, 2231u << 16u);
    ctx.fpr[1] = std::bit_cast<float>(rt.memory().aot_load32(ctx.gpr[2] + static_cast<std::uint32_t>(3328)));
    ctx.set_gpr(2, 2231u << 16u);
    ctx.fpr[0] = std::bit_cast<float>(rt.memory().aot_load32(ctx.gpr[2] + static_cast<std::uint32_t>(3332)));
    rt.memory().aot_store32(ctx.gpr[16] + static_cast<std::uint32_t>(12), std::bit_cast<std::uint32_t>(ctx.fpr[2]));
    rt.memory().aot_store32(ctx.gpr[16] + static_cast<std::uint32_t>(16), std::bit_cast<std::uint32_t>(ctx.fpr[1]));
    rt.memory().aot_store32(ctx.gpr[16] + static_cast<std::uint32_t>(20), std::bit_cast<std::uint32_t>(ctx.fpr[0]));
    goto L_08AC0BD0;
L_08AC0BD0:
    ctx.set_gpr(2, 0u + static_cast<std::uint32_t>(1));
    goto L_08AC0BD4;
L_08AC0BD4:
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
L_08AC0BEC:
    ctx.set_gpr(29, ctx.gpr[29] + static_cast<std::uint32_t>(-64));
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(28), ctx.gpr[31]);
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(24), ctx.gpr[18]);
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(20), ctx.gpr[17]);
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(16), ctx.gpr[16]);
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(8), std::bit_cast<std::uint32_t>(ctx.fpr[20]));
    ctx.set_gpr(2, 2231u << 16u);
    ctx.fpr[1] = std::bit_cast<float>(rt.memory().aot_load32(ctx.gpr[2] + static_cast<std::uint32_t>(3336)));
    ctx.set_gpr(18, ctx.gpr[4] + 0u);
    ctx.set_gpr(2, 2231u << 16u);
    ctx.fpr[0] = std::bit_cast<float>(rt.memory().aot_load32(ctx.gpr[2] + static_cast<std::uint32_t>(3340)));
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(52), std::bit_cast<std::uint32_t>(ctx.fpr[1]));
    ctx.set_gpr(2, 2231u << 16u);
    ctx.fpr[1] = std::bit_cast<float>(rt.memory().aot_load32(ctx.gpr[2] + static_cast<std::uint32_t>(3344)));
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(56), std::bit_cast<std::uint32_t>(ctx.fpr[0]));
    ctx.set_gpr(2, 2231u << 16u);
    ctx.fpr[0] = std::bit_cast<float>(rt.memory().aot_load32(ctx.gpr[2] + static_cast<std::uint32_t>(3380)));
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(60), std::bit_cast<std::uint32_t>(ctx.fpr[1]));
    ctx.set_gpr(2, 2231u << 16u);
    ctx.fpr[1] = std::bit_cast<float>(rt.memory().aot_load32(ctx.gpr[2] + static_cast<std::uint32_t>(3384)));
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(40), std::bit_cast<std::uint32_t>(ctx.fpr[0]));
    ctx.set_gpr(2, 2231u << 16u);
    ctx.fpr[0] = std::bit_cast<float>(rt.memory().aot_load32(ctx.gpr[2] + static_cast<std::uint32_t>(3388)));
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(44), std::bit_cast<std::uint32_t>(ctx.fpr[1]));
    ctx.set_gpr(2, rt.memory().aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(440)));
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(48), std::bit_cast<std::uint32_t>(ctx.fpr[0]));
    ctx.set_gpr(2, ctx.gpr[2] << 2u);
    ctx.set_gpr(2, ctx.gpr[2] + ctx.gpr[29]);
    ctx.set_gpr(17, rt.memory().aot_load32(ctx.gpr[2] + static_cast<std::uint32_t>(40)));
    ctx.set_gpr(4, rt.memory().aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(224)));
    ctx.set_gpr(31, 0x08AC0C6Cu);
    ctx.fpr[20] = std::bit_cast<float>(rt.memory().aot_load32(ctx.gpr[2] + static_cast<std::uint32_t>(52)));
    if (rt.invoke_chained_direct<&recomp_unit_0023_entry, 23u, 598u, 0x08862428u>(ctx, &aot_mem) && ctx.pc == 0x08AC0C6Cu) goto L_08AC0C6C;
    return;
L_08AC0C6C:
    ctx.set_gpr(31, 0x08AC0C74u);
    ctx.set_gpr(4, ctx.gpr[2] + 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0004_entry, 4u, 508u, 0x08816764u>(ctx, &aot_mem) && ctx.pc == 0x08AC0C74u) goto L_08AC0C74;
    return;
L_08AC0C74:
    ctx.set_gpr(3, rt.memory().aot_load32(ctx.gpr[18] + static_cast<std::uint32_t>(440)));
    ctx.set_gpr(16, ctx.gpr[2] + 0u);
    ctx.set_gpr(2, 0u + static_cast<std::uint32_t>(1));
    { const bool branch_taken = ctx.gpr[3] != ctx.gpr[2];
    // nop
      if (branch_taken) {
          goto L_08AC0CA8;
      }
      goto L_08AC0C88;
    }
L_08AC0C88:
    ctx.set_gpr(31, 0x08AC0C90u);
    ctx.set_gpr(4, rt.memory().aot_load32(ctx.gpr[18] + static_cast<std::uint32_t>(232)));
    if (rt.invoke_chained_direct<&recomp_unit_0023_entry, 23u, 610u, 0x088624F4u>(ctx, &aot_mem) && ctx.pc == 0x08AC0C90u) goto L_08AC0C90;
    return;
L_08AC0C90:
    ctx.set_gpr(31, 0x08AC0C98u);
    ctx.set_gpr(4, ctx.gpr[2] + 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0004_entry, 4u, 508u, 0x08816764u>(ctx, &aot_mem) && ctx.pc == 0x08AC0C98u) goto L_08AC0C98;
    return;
L_08AC0C98:
    ctx.set_gpr(4, ctx.gpr[16] + 0u);
    ctx.set_gpr(31, 0x08AC0CA4u);
    ctx.set_gpr(5, ctx.gpr[2] + 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0021_entry, 21u, 918u, 0x0885B80Cu>(ctx, &aot_mem) && ctx.pc == 0x08AC0CA4u) goto L_08AC0CA4;
    return;
L_08AC0CA4:
    ctx.set_gpr(16, ctx.gpr[2] + 0u);
    goto L_08AC0CA8;
L_08AC0CA8:
    if (ctx.gpr[17] == 0u) {
    ctx.set_gpr(2, 16128u << 16u);
        goto L_08AC0CCC;
    }
    goto L_08AC0CB0;
L_08AC0CB0:
    ctx.set_gpr(31, 0x08AC0CB8u);
    ctx.set_gpr(4, ctx.gpr[17] + 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0004_entry, 4u, 508u, 0x08816764u>(ctx, &aot_mem) && ctx.pc == 0x08AC0CB8u) goto L_08AC0CB8;
    return;
L_08AC0CB8:
    ctx.set_gpr(4, ctx.gpr[16] + 0u);
    ctx.set_gpr(31, 0x08AC0CC4u);
    ctx.set_gpr(5, ctx.gpr[2] + 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0021_entry, 21u, 918u, 0x0885B80Cu>(ctx, &aot_mem) && ctx.pc == 0x08AC0CC4u) goto L_08AC0CC4;
    return;
L_08AC0CC4:
    ctx.set_gpr(16, ctx.gpr[2] + 0u);
    ctx.set_gpr(2, 16128u << 16u);
    goto L_08AC0CCC;
L_08AC0CCC:
    { const bool branch_taken = static_cast<std::int32_t>(ctx.gpr[16]) < 0;
    ctx.fpr[1] = std::bit_cast<float>(ctx.gpr[2]);
      if (branch_taken) {
          goto L_08AC0CE0;
      }
      goto L_08AC0CD4;
    }
L_08AC0CD4:
    ctx.fpr[0] = std::bit_cast<float>(ctx.gpr[16]);
    { const bool branch_taken = 0u == 0u;
    ctx.fpr[0] = static_cast<float>(static_cast<std::int32_t>(ctx.fpr_bits(0)));
      if (branch_taken) {
          goto L_08AC0CF8;
      }
      goto L_08AC0CE0;
    }
L_08AC0CE0:
    ctx.set_gpr(3, ctx.gpr[16] >> 1u);
    ctx.set_gpr(2, ctx.gpr[16] & 1u);
    ctx.set_gpr(3, ctx.gpr[3] | ctx.gpr[2]);
    ctx.fpr[0] = std::bit_cast<float>(ctx.gpr[3]);
    ctx.fpr[0] = static_cast<float>(static_cast<std::int32_t>(ctx.fpr_bits(0)));
    ctx.fpr[0] = ctx.fpr[0] + ctx.fpr[0];
    goto L_08AC0CF8;
L_08AC0CF8:
    { const float fs = ctx.fpr[1]; const float ft = ctx.fpr[0]; if ((std::isinf(fs) && ft == 0.0f) || (std::isinf(ft) && fs == 0.0f)) ctx.set_fpr_bits(12, 0x7FC00000u); else ctx.fpr[12] = fs * ft; }
    ctx.set_gpr(2, 49024u << 16u);
    ctx.set_gpr(5, 0u + static_cast<std::uint32_t>(1));
    ctx.set_gpr(4, ctx.gpr[18] + static_cast<std::uint32_t>(64));
    ctx.set_gpr(6, ctx.gpr[5] + 0u);
    ctx.fpr[14] = std::bit_cast<float>(ctx.gpr[2]);
    ctx.set_fpr_bits(13, ctx.fpr_bits(20));
    ctx.set_gpr(31, 0x08AC0D1Cu);
    ctx.set_fpr_bits(15, ctx.fpr_bits(14));
    if (rt.invoke_chained_direct<&recomp_unit_0192_entry, 192u, 414u, 0x08B05B1Cu>(ctx, &aot_mem) && ctx.pc == 0x08AC0D1Cu) goto L_08AC0D1C;
    return;
L_08AC0D1C:
    ctx.set_gpr(4, rt.memory().aot_load32(ctx.gpr[18] + static_cast<std::uint32_t>(224)));
    ctx.set_gpr(31, 0x08AC0D28u);
    ctx.set_gpr(16, ctx.gpr[2] + 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0023_entry, 23u, 598u, 0x08862428u>(ctx, &aot_mem) && ctx.pc == 0x08AC0D28u) goto L_08AC0D28;
    return;
L_08AC0D28:
    ctx.set_gpr(5, ctx.gpr[2] + 0u);
    ctx.set_gpr(2, 16256u << 16u);
    ctx.fpr[12] = std::bit_cast<float>(ctx.gpr[2]);
    ctx.set_gpr(4, ctx.gpr[16] + 0u);
    ctx.set_gpr(6, 0u + 0u);
    ctx.set_gpr(31, 0x08AC0D44u);
    ctx.set_fpr_bits(13, ctx.fpr_bits(12));
    if (rt.invoke_chained_direct<&recomp_unit_0187_entry, 187u, 635u, 0x08AF2840u>(ctx, &aot_mem) && ctx.pc == 0x08AC0D44u) goto L_08AC0D44;
    return;
L_08AC0D44:
    ctx.set_gpr(3, rt.memory().aot_load32(ctx.gpr[18] + static_cast<std::uint32_t>(440)));
    ctx.set_gpr(2, 0u + static_cast<std::uint32_t>(1));
    { const bool branch_taken = ctx.gpr[3] != ctx.gpr[2];
    // nop
      if (branch_taken) {
          goto L_08AC0D78;
      }
      goto L_08AC0D54;
    }
L_08AC0D54:
    ctx.set_gpr(31, 0x08AC0D5Cu);
    ctx.set_gpr(4, rt.memory().aot_load32(ctx.gpr[18] + static_cast<std::uint32_t>(232)));
    if (rt.invoke_chained_direct<&recomp_unit_0023_entry, 23u, 610u, 0x088624F4u>(ctx, &aot_mem) && ctx.pc == 0x08AC0D5Cu) goto L_08AC0D5C;
    return;
L_08AC0D5C:
    ctx.set_gpr(5, ctx.gpr[2] + 0u);
    ctx.set_gpr(2, 16256u << 16u);
    ctx.fpr[12] = std::bit_cast<float>(ctx.gpr[2]);
    ctx.set_gpr(4, ctx.gpr[16] + 0u);
    ctx.set_gpr(6, 0u + 0u);
    ctx.set_gpr(31, 0x08AC0D78u);
    ctx.set_fpr_bits(13, ctx.fpr_bits(12));
    if (rt.invoke_chained_direct<&recomp_unit_0187_entry, 187u, 635u, 0x08AF2840u>(ctx, &aot_mem) && ctx.pc == 0x08AC0D78u) goto L_08AC0D78;
    return;
L_08AC0D78:
    { const bool branch_taken = ctx.gpr[17] == 0u;
    // nop
      if (branch_taken) {
          goto L_08AC0D9C;
      }
      goto L_08AC0D80;
    }
L_08AC0D80:
    ctx.set_gpr(2, 16256u << 16u);
    ctx.fpr[12] = std::bit_cast<float>(ctx.gpr[2]);
    ctx.set_gpr(4, ctx.gpr[16] + 0u);
    ctx.set_gpr(5, ctx.gpr[17] + 0u);
    ctx.set_gpr(6, 0u + 0u);
    ctx.set_gpr(31, 0x08AC0D9Cu);
    ctx.set_fpr_bits(13, ctx.fpr_bits(12));
    if (rt.invoke_chained_direct<&recomp_unit_0187_entry, 187u, 635u, 0x08AF2840u>(ctx, &aot_mem) && ctx.pc == 0x08AC0D9Cu) goto L_08AC0D9C;
    return;
L_08AC0D9C:
    ctx.set_gpr(31, 0x08AC0DA4u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0017_entry, 17u, 189u, 0x08848C6Cu>(ctx, &aot_mem) && ctx.pc == 0x08AC0DA4u) goto L_08AC0DA4;
    return;
L_08AC0DA4:
    ctx.set_gpr(31, 0x08AC0DACu);
    ctx.set_gpr(4, ctx.gpr[2] + 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0187_entry, 187u, 208u, 0x08AF0DE8u>(ctx, &aot_mem) && ctx.pc == 0x08AC0DACu) goto L_08AC0DAC;
    return;
L_08AC0DAC:
    ctx.set_gpr(3, 16025u << 16u);
    ctx.set_gpr(3, ctx.gpr[3] | 39322u);
    rt.memory().aot_store32(ctx.gpr[18] + static_cast<std::uint32_t>(256), ctx.gpr[3]);
    rt.memory().aot_store32(ctx.gpr[18] + static_cast<std::uint32_t>(272), ctx.gpr[3]);
    rt.memory().aot_store32(ctx.gpr[18] + static_cast<std::uint32_t>(288), ctx.gpr[3]);
    rt.memory().aot_store32(ctx.gpr[18] + static_cast<std::uint32_t>(304), ctx.gpr[3]);
    ctx.set_gpr(3, 2231u << 16u);
    ctx.fpr[2] = std::bit_cast<float>(rt.memory().aot_load32(ctx.gpr[3] + static_cast<std::uint32_t>(3392)));
    ctx.set_gpr(3, 2231u << 16u);
    ctx.fpr[1] = std::bit_cast<float>(rt.memory().aot_load32(ctx.gpr[3] + static_cast<std::uint32_t>(3396)));
    ctx.set_gpr(3, 2231u << 16u);
    ctx.fpr[0] = std::bit_cast<float>(rt.memory().aot_load32(ctx.gpr[3] + static_cast<std::uint32_t>(3400)));
    rt.memory().aot_store32(ctx.gpr[18] + static_cast<std::uint32_t>(12), std::bit_cast<std::uint32_t>(ctx.fpr[2]));
    rt.memory().aot_store32(ctx.gpr[18] + static_cast<std::uint32_t>(16), std::bit_cast<std::uint32_t>(ctx.fpr[1]));
    rt.memory().aot_store32(ctx.gpr[18] + static_cast<std::uint32_t>(20), std::bit_cast<std::uint32_t>(ctx.fpr[0]));
    ctx.set_gpr(31, rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(28)));
    ctx.set_gpr(18, rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(24)));
    ctx.set_gpr(17, rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(20)));
    ctx.set_gpr(16, rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(16)));
    ctx.fpr[20] = std::bit_cast<float>(rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(8)));
    jump_target = ctx.gpr[31];
    ctx.set_gpr(29, ctx.gpr[29] + static_cast<std::uint32_t>(64));
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_08AC0E04:
    ctx.set_gpr(29, ctx.gpr[29] + static_cast<std::uint32_t>(-16));
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(12), ctx.gpr[31]);
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(8), ctx.gpr[17]);
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(4), ctx.gpr[16]);
    ctx.set_gpr(16, ctx.gpr[4] + 0u);
    ctx.set_gpr(31, 0x08AC0E20u);
    ctx.set_gpr(4, ctx.gpr[16] + static_cast<std::uint32_t>(64));
    if (rt.invoke_chained_direct<&recomp_unit_0172_entry, 172u, 254u, 0x08AB5068u>(ctx, &aot_mem) && ctx.pc == 0x08AC0E20u) goto L_08AC0E20;
    return;
L_08AC0E20:
    ctx.set_gpr(2, ctx.gpr[2] & 255u);
    if (ctx.gpr[2] != 0u) {
    ctx.set_gpr(2, 16256u << 16u);
        goto L_08AC0E34;
    }
    goto L_08AC0E2C;
L_08AC0E2C:
    { const bool branch_taken = 0u == 0u;
    ctx.set_gpr(2, 0u + 0u);
      if (branch_taken) {
          goto L_08AC0F40;
      }
      goto L_08AC0E34;
    }
L_08AC0E34:
    rt.memory().aot_store32(ctx.gpr[16] + static_cast<std::uint32_t>(256), ctx.gpr[2]);
    rt.memory().aot_store32(ctx.gpr[16] + static_cast<std::uint32_t>(272), ctx.gpr[2]);
    rt.memory().aot_store32(ctx.gpr[16] + static_cast<std::uint32_t>(288), ctx.gpr[2]);
    rt.memory().aot_store32(ctx.gpr[16] + static_cast<std::uint32_t>(304), ctx.gpr[2]);
    ctx.set_gpr(31, 0x08AC0E4Cu);
    ctx.set_gpr(4, ctx.gpr[16] + static_cast<std::uint32_t>(64));
    if (rt.invoke_chained_direct<&recomp_unit_0172_entry, 172u, 253u, 0x08AB5060u>(ctx, &aot_mem) && ctx.pc == 0x08AC0E4Cu) goto L_08AC0E4C;
    return;
L_08AC0E4C:
    { const bool branch_taken = ctx.gpr[2] == 0u;
    // nop
      if (branch_taken) {
          goto L_08AC0E64;
      }
      goto L_08AC0E54;
    }
L_08AC0E54:
    ctx.set_gpr(31, 0x08AC0E5Cu);
    ctx.set_gpr(4, ctx.gpr[16] + 0u);
    goto L_08AC0308;
L_08AC0E5C:
    { const bool branch_taken = 0u == 0u;
    ctx.set_gpr(2, 0u + static_cast<std::uint32_t>(1));
      if (branch_taken) {
          goto L_08AC0F40;
      }
      goto L_08AC0E64;
    }
L_08AC0E64:
    ctx.set_gpr(31, 0x08AC0E6Cu);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0017_entry, 17u, 189u, 0x08848C6Cu>(ctx, &aot_mem) && ctx.pc == 0x08AC0E6Cu) goto L_08AC0E6C;
    return;
L_08AC0E6C:
    ctx.set_gpr(17, ctx.gpr[2] + 0u);
    ctx.set_gpr(31, 0x08AC0E78u);
    ctx.set_gpr(4, 0u + 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0172_entry, 172u, 272u, 0x08AB5298u>(ctx, &aot_mem) && ctx.pc == 0x08AC0E78u) goto L_08AC0E78;
    return;
L_08AC0E78:
    ctx.set_gpr(4, ctx.gpr[17] + 0u);
    ctx.set_gpr(31, 0x08AC0E84u);
    ctx.set_gpr(5, ctx.gpr[2] + 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0187_entry, 187u, 197u, 0x08AF0D70u>(ctx, &aot_mem) && ctx.pc == 0x08AC0E84u) goto L_08AC0E84;
    return;
L_08AC0E84:
    ctx.set_gpr(4, ctx.gpr[16] + static_cast<std::uint32_t>(108));
    ctx.set_gpr(5, 0u + 0u);
    ctx.set_gpr(31, 0x08AC0E94u);
    ctx.set_gpr(6, 0u + static_cast<std::uint32_t>(1));
    if (rt.invoke_chained_direct<&recomp_unit_0174_entry, 174u, 1032u, 0x08ABFEDCu>(ctx, &aot_mem) && ctx.pc == 0x08AC0E94u) goto L_08AC0E94;
    return;
L_08AC0E94:
    ctx.set_gpr(25, rt.memory().aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(208)));
    ctx.set_gpr(5, rt.memory().aot_load8(ctx.gpr[16] + static_cast<std::uint32_t>(240)));
    ctx.set_gpr(4, ctx.gpr[16] + static_cast<std::uint32_t>(108));
    ctx.set_gpr(25, rt.memory().aot_load32(ctx.gpr[25] + static_cast<std::uint32_t>(16)));
    jump_target = ctx.gpr[25];
    ctx.set_gpr(31, 0x08AC0EACu);
    ctx.set_gpr(6, 0u + 0u);
    ctx.pc = jump_target;
    if (rt.invoke_chained_call(ctx, &aot_mem) && ctx.pc == 0x08AC0EACu) goto L_08AC0EAC;
    return;
L_08AC0EAC:
    ctx.set_gpr(5, rt.memory().aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(224)));
    ctx.set_gpr(31, 0x08AC0EB8u);
    ctx.set_gpr(4, ctx.gpr[16] + 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0174_entry, 174u, 1033u, 0x08ABFEE8u>(ctx, &aot_mem) && ctx.pc == 0x08AC0EB8u) goto L_08AC0EB8;
    return;
L_08AC0EB8:
    ctx.set_gpr(31, 0x08AC0EC0u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0017_entry, 17u, 191u, 0x08848C84u>(ctx, &aot_mem) && ctx.pc == 0x08AC0EC0u) goto L_08AC0EC0;
    return;
L_08AC0EC0:
    ctx.set_gpr(31, 0x08AC0EC8u);
    ctx.set_gpr(4, ctx.gpr[2] + 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0174_entry, 174u, 990u, 0x08ABFC78u>(ctx, &aot_mem) && ctx.pc == 0x08AC0EC8u) goto L_08AC0EC8;
    return;
L_08AC0EC8:
    ctx.set_gpr(4, ctx.gpr[2] + 0u);
    ctx.set_gpr(31, 0x08AC0ED4u);
    ctx.set_gpr(5, 0u + static_cast<std::uint32_t>(1));
    if (rt.invoke_chained_direct<&recomp_unit_0187_entry, 187u, 664u, 0x08AF2ACCu>(ctx, &aot_mem) && ctx.pc == 0x08AC0ED4u) goto L_08AC0ED4;
    return;
L_08AC0ED4:
    ctx.set_gpr(6, 0u + static_cast<std::uint32_t>(1));
    ctx.set_gpr(4, ctx.gpr[16] + static_cast<std::uint32_t>(108));
    ctx.set_gpr(5, 0u + 0u);
    ctx.set_gpr(7, ctx.gpr[6] + 0u);
    ctx.set_gpr(8, 0u + 0u);
    ctx.set_gpr(9, 0u + 0u);
    ctx.set_gpr(31, 0x08AC0EF4u);
    ctx.set_gpr(10, 0u + 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0174_entry, 174u, 679u, 0x08ABE858u>(ctx, &aot_mem) && ctx.pc == 0x08AC0EF4u) goto L_08AC0EF4;
    return;
L_08AC0EF4:
    ctx.set_gpr(4, ctx.gpr[16] + static_cast<std::uint32_t>(108));
    ctx.set_gpr(5, 0u + 0u);
    ctx.set_gpr(31, 0x08AC0F04u);
    ctx.set_gpr(6, 0u + 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0174_entry, 174u, 648u, 0x08ABE660u>(ctx, &aot_mem) && ctx.pc == 0x08AC0F04u) goto L_08AC0F04;
    return;
L_08AC0F04:
    ctx.set_gpr(4, ctx.gpr[16] + static_cast<std::uint32_t>(92));
    ctx.set_gpr(5, 0u + static_cast<std::uint32_t>(1));
    ctx.set_gpr(6, ctx.gpr[16] + static_cast<std::uint32_t>(108));
    ctx.set_gpr(31, 0x08AC0F18u);
    ctx.set_gpr(7, 0u + 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0174_entry, 174u, 831u, 0x08ABF318u>(ctx, &aot_mem) && ctx.pc == 0x08AC0F18u) goto L_08AC0F18;
    return;
L_08AC0F18:
    ctx.set_gpr(2, 2231u << 16u);
    ctx.fpr[2] = std::bit_cast<float>(rt.memory().aot_load32(ctx.gpr[2] + static_cast<std::uint32_t>(3404)));
    ctx.set_gpr(2, 2231u << 16u);
    ctx.fpr[1] = std::bit_cast<float>(rt.memory().aot_load32(ctx.gpr[2] + static_cast<std::uint32_t>(3408)));
    ctx.set_gpr(2, 2231u << 16u);
    ctx.fpr[0] = std::bit_cast<float>(rt.memory().aot_load32(ctx.gpr[2] + static_cast<std::uint32_t>(3412)));
    rt.memory().aot_store32(ctx.gpr[16] + static_cast<std::uint32_t>(12), std::bit_cast<std::uint32_t>(ctx.fpr[2]));
    rt.memory().aot_store32(ctx.gpr[16] + static_cast<std::uint32_t>(16), std::bit_cast<std::uint32_t>(ctx.fpr[1]));
    rt.memory().aot_store32(ctx.gpr[16] + static_cast<std::uint32_t>(20), std::bit_cast<std::uint32_t>(ctx.fpr[0]));
    ctx.set_gpr(2, 0u + static_cast<std::uint32_t>(1));
    goto L_08AC0F40;
L_08AC0F40:
    ctx.set_gpr(31, rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(12)));
    ctx.set_gpr(17, rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(8)));
    ctx.set_gpr(16, rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(4)));
    jump_target = ctx.gpr[31];
    ctx.set_gpr(29, ctx.gpr[29] + static_cast<std::uint32_t>(16));
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_08AC0F54:
    ctx.set_gpr(29, ctx.gpr[29] + static_cast<std::uint32_t>(-64));
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(12), ctx.gpr[31]);
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(8), ctx.gpr[17]);
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(4), ctx.gpr[16]);
    ctx.set_gpr(17, ctx.gpr[5] + 0u);
    ctx.set_gpr(31, 0x08AC0F70u);
    ctx.set_gpr(16, ctx.gpr[6] + 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0017_entry, 17u, 182u, 0x08848C18u>(ctx, &aot_mem) && ctx.pc == 0x08AC0F70u) goto L_08AC0F70;
    return;
L_08AC0F70:
    ctx.set_gpr(31, 0x08AC0F78u);
    ctx.set_gpr(4, ctx.gpr[2] + 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0016_entry, 16u, 633u, 0x08847AC0u>(ctx, &aot_mem) && ctx.pc == 0x08AC0F78u) goto L_08AC0F78;
    return;
L_08AC0F78:
    ctx.set_gpr(3, 2231u << 16u);
    ctx.fpr[1] = std::bit_cast<float>(rt.memory().aot_load32(ctx.gpr[3] + static_cast<std::uint32_t>(3440)));
    ctx.set_gpr(4, ctx.gpr[2] + 0u);
    ctx.set_gpr(3, 2231u << 16u);
    ctx.fpr[0] = std::bit_cast<float>(rt.memory().aot_load32(ctx.gpr[3] + static_cast<std::uint32_t>(3444)));
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(16), std::bit_cast<std::uint32_t>(ctx.fpr[1]));
    ctx.set_gpr(3, 2231u << 16u);
    ctx.fpr[1] = std::bit_cast<float>(rt.memory().aot_load32(ctx.gpr[3] + static_cast<std::uint32_t>(3448)));
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(20), std::bit_cast<std::uint32_t>(ctx.fpr[0]));
    ctx.set_gpr(3, 2231u << 16u);
    ctx.fpr[0] = std::bit_cast<float>(rt.memory().aot_load32(ctx.gpr[3] + static_cast<std::uint32_t>(3452)));
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(24), std::bit_cast<std::uint32_t>(ctx.fpr[1]));
    ctx.set_gpr(3, 2231u << 16u);
    ctx.fpr[1] = std::bit_cast<float>(rt.memory().aot_load32(ctx.gpr[3] + static_cast<std::uint32_t>(3456)));
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(28), std::bit_cast<std::uint32_t>(ctx.fpr[0]));
    ctx.set_gpr(3, 2231u << 16u);
    ctx.fpr[0] = std::bit_cast<float>(rt.memory().aot_load32(ctx.gpr[3] + static_cast<std::uint32_t>(3460)));
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(32), std::bit_cast<std::uint32_t>(ctx.fpr[1]));
    ctx.set_gpr(3, 2231u << 16u);
    ctx.fpr[1] = std::bit_cast<float>(rt.memory().aot_load32(ctx.gpr[3] + static_cast<std::uint32_t>(3464)));
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(36), std::bit_cast<std::uint32_t>(ctx.fpr[0]));
    ctx.set_gpr(3, 2231u << 16u);
    ctx.fpr[0] = std::bit_cast<float>(rt.memory().aot_load32(ctx.gpr[3] + static_cast<std::uint32_t>(3468)));
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(40), std::bit_cast<std::uint32_t>(ctx.fpr[1]));
    ctx.set_gpr(3, 2231u << 16u);
    ctx.fpr[1] = std::bit_cast<float>(rt.memory().aot_load32(ctx.gpr[3] + static_cast<std::uint32_t>(3472)));
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(44), std::bit_cast<std::uint32_t>(ctx.fpr[0]));
    ctx.set_gpr(3, 2231u << 16u);
    ctx.fpr[0] = std::bit_cast<float>(rt.memory().aot_load32(ctx.gpr[3] + static_cast<std::uint32_t>(3476)));
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(48), std::bit_cast<std::uint32_t>(ctx.fpr[1]));
    ctx.set_gpr(3, 2231u << 16u);
    ctx.fpr[1] = std::bit_cast<float>(rt.memory().aot_load32(ctx.gpr[3] + static_cast<std::uint32_t>(3480)));
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(52), std::bit_cast<std::uint32_t>(ctx.fpr[0]));
    ctx.set_gpr(3, 2231u << 16u);
    ctx.fpr[0] = std::bit_cast<float>(rt.memory().aot_load32(ctx.gpr[3] + static_cast<std::uint32_t>(3484)));
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(56), std::bit_cast<std::uint32_t>(ctx.fpr[1]));
    ctx.set_gpr(3, 2231u << 16u);
    ctx.fpr[1] = std::bit_cast<float>(rt.memory().aot_load32(ctx.gpr[3] + static_cast<std::uint32_t>(3416)));
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(60), std::bit_cast<std::uint32_t>(ctx.fpr[0]));
    ctx.set_gpr(3, 2231u << 16u);
    ctx.fpr[0] = std::bit_cast<float>(rt.memory().aot_load32(ctx.gpr[3] + static_cast<std::uint32_t>(3420)));
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(20), std::bit_cast<std::uint32_t>(ctx.fpr[1]));
    ctx.set_gpr(3, 2231u << 16u);
    ctx.fpr[1] = std::bit_cast<float>(rt.memory().aot_load32(ctx.gpr[3] + static_cast<std::uint32_t>(3424)));
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(24), std::bit_cast<std::uint32_t>(ctx.fpr[0]));
    ctx.set_gpr(3, 2231u << 16u);
    ctx.fpr[0] = std::bit_cast<float>(rt.memory().aot_load32(ctx.gpr[3] + static_cast<std::uint32_t>(3428)));
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(28), std::bit_cast<std::uint32_t>(ctx.fpr[1]));
    ctx.set_gpr(3, 2231u << 16u);
    ctx.fpr[1] = std::bit_cast<float>(rt.memory().aot_load32(ctx.gpr[3] + static_cast<std::uint32_t>(3432)));
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(32), std::bit_cast<std::uint32_t>(ctx.fpr[0]));
    ctx.set_gpr(3, 2231u << 16u);
    ctx.fpr[0] = std::bit_cast<float>(rt.memory().aot_load32(ctx.gpr[3] + static_cast<std::uint32_t>(3436)));
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(36), std::bit_cast<std::uint32_t>(ctx.fpr[1]));
    ctx.set_gpr(31, 0x08AC1058u);
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(40), std::bit_cast<std::uint32_t>(ctx.fpr[0]));
    if (rt.invoke_chained_direct<&recomp_unit_0024_entry, 24u, 25u, 0x08864208u>(ctx, &aot_mem) && ctx.pc == 0x08AC1058u) goto L_08AC1058;
    return;
L_08AC1058:
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(56), ctx.gpr[2]);
    ctx.set_gpr(2, ctx.gpr[17] << 1u);
    ctx.set_gpr(2, ctx.gpr[2] + ctx.gpr[17]);
    ctx.set_gpr(2, ctx.gpr[2] << 4u);
    ctx.set_gpr(2, ctx.gpr[2] + ctx.gpr[29]);
    ctx.set_gpr(4, ctx.gpr[16] + 0u);
    ctx.set_gpr(5, ctx.gpr[2] + static_cast<std::uint32_t>(16));
    ctx.set_gpr(31, 0x08AC107Cu);
    ctx.set_gpr(6, 0u + static_cast<std::uint32_t>(48));
    if (rt.invoke_chained_direct<&recomp_unit_0003_entry, 3u, 662u, 0x08812B08u>(ctx, &aot_mem) && ctx.pc == 0x08AC107Cu) goto L_08AC107C;
    return;
L_08AC107C:
    ctx.set_gpr(31, rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(12)));
    ctx.set_gpr(17, rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(8)));
    ctx.set_gpr(16, rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(4)));
    jump_target = ctx.gpr[31];
    ctx.set_gpr(29, ctx.gpr[29] + static_cast<std::uint32_t>(64));
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_08AC1090:
    ctx.set_gpr(6, ctx.gpr[4] + static_cast<std::uint32_t>(27790));
    ctx.set_gpr(4, ctx.gpr[5] + 0u);
    ctx.set_gpr(6, ctx.gpr[6] + static_cast<std::uint32_t>(32760));
    ctx.set_gpr(5, 0u + static_cast<std::uint32_t>(176));
    (void)rt.invoke_chained_direct<&recomp_unit_0023_entry, 23u, 458u, 0x08861BE8u>(ctx, &aot_mem); return;
L_08AC10A4:
    ctx.set_gpr(29, ctx.gpr[29] + static_cast<std::uint32_t>(-16));
    ctx.set_gpr(2, ctx.gpr[5] << 2u);
    ctx.set_gpr(3, ctx.gpr[2] + ctx.gpr[29]);
    ctx.set_gpr(2, 2231u << 16u);
    ctx.fpr[0] = std::bit_cast<float>(rt.memory().aot_load32(ctx.gpr[2] + static_cast<std::uint32_t>(3488)));
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(12), std::bit_cast<std::uint32_t>(ctx.fpr[0]));
    ctx.set_gpr(2, rt.memory().aot_load32(ctx.gpr[3] + static_cast<std::uint32_t>(12)));
    jump_target = ctx.gpr[31];
    ctx.set_gpr(29, ctx.gpr[29] + static_cast<std::uint32_t>(16));
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_08AC10C8:
    jump_target = ctx.gpr[31];
    ctx.set_gpr(2, 0u + 0u);
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_08AC10D0:
    jump_target = ctx.gpr[31];
    ctx.set_gpr(2, ctx.gpr[6] + 0u);
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_08AC10D8:
    ctx.set_gpr(29, ctx.gpr[29] + static_cast<std::uint32_t>(-16));
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(12), ctx.gpr[31]);
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(8), ctx.gpr[17]);
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(4), ctx.gpr[16]);
    ctx.set_gpr(17, ctx.gpr[4] + 0u);
    ctx.set_gpr(4, rt.memory().aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(8)));
    ctx.set_gpr(3, 0u + static_cast<std::uint32_t>(3));
    ctx.set_gpr(16, ctx.gpr[5] + 0u);
    { const bool branch_taken = ctx.gpr[4] == ctx.gpr[3];
    ctx.set_gpr(2, 0u + 0u);
      if (branch_taken) {
          goto L_08AC118C;
      }
      goto L_08AC1100;
    }
L_08AC1100:
    ctx.set_gpr(3, 0u + static_cast<std::uint32_t>(2));
    if (ctx.gpr[4] == ctx.gpr[3]) {
    ctx.set_gpr(5, ctx.gpr[16] + 0u);
        goto L_08AC1168;
    }
    goto L_08AC110C;
L_08AC110C:
    ctx.set_gpr(3, 0u + static_cast<std::uint32_t>(1));
    if (ctx.gpr[4] == ctx.gpr[3]) {
    ctx.set_gpr(4, rt.memory().aot_load32(ctx.gpr[17] + static_cast<std::uint32_t>(4)));
        goto L_08AC1140;
    }
    goto L_08AC1118;
L_08AC1118:
    if (ctx.gpr[4] == 0u) {
    ctx.set_gpr(4, rt.memory().aot_load32(ctx.gpr[17] + static_cast<std::uint32_t>(4)));
        goto L_08AC1128;
    }
    goto L_08AC1120;
L_08AC1120:
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_08AC1194;
      }
      goto L_08AC1128;
    }
L_08AC1128:
    ctx.set_gpr(31, 0x08AC1130u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0170_entry, 170u, 297u, 0x08AAD4F8u>(ctx, &aot_mem) && ctx.pc == 0x08AC1130u) goto L_08AC1130;
    return;
L_08AC1130:
    ctx.set_gpr(2, rt.memory().aot_load32(ctx.gpr[17] + static_cast<std::uint32_t>(8)));
    ctx.set_gpr(2, ctx.gpr[2] + static_cast<std::uint32_t>(1));
    rt.memory().aot_store32(ctx.gpr[17] + static_cast<std::uint32_t>(8), ctx.gpr[2]);
    ctx.set_gpr(4, rt.memory().aot_load32(ctx.gpr[17] + static_cast<std::uint32_t>(4)));
    goto L_08AC1140;
L_08AC1140:
    ctx.set_gpr(31, 0x08AC1148u);
    ctx.set_gpr(5, 0u + static_cast<std::uint32_t>(7));
    if (rt.invoke_chained_direct<&recomp_unit_0170_entry, 170u, 299u, 0x08AAD508u>(ctx, &aot_mem) && ctx.pc == 0x08AC1148u) goto L_08AC1148;
    return;
L_08AC1148:
    ctx.set_gpr(2, ctx.gpr[2] & 255u);
    if (ctx.gpr[2] != 0u) {
    ctx.set_gpr(2, rt.memory().aot_load32(ctx.gpr[17] + static_cast<std::uint32_t>(8)));
        goto L_08AC115C;
    }
    goto L_08AC1154;
L_08AC1154:
    { const bool branch_taken = 0u == 0u;
    ctx.set_gpr(2, 0u + 0u);
      if (branch_taken) {
          goto L_08AC1194;
      }
      goto L_08AC115C;
    }
L_08AC115C:
    ctx.set_gpr(2, ctx.gpr[2] + static_cast<std::uint32_t>(1));
    rt.memory().aot_store32(ctx.gpr[17] + static_cast<std::uint32_t>(8), ctx.gpr[2]);
    ctx.set_gpr(5, ctx.gpr[16] + 0u);
    goto L_08AC1168;
L_08AC1168:
    ctx.set_gpr(31, 0x08AC1170u);
    ctx.set_gpr(4, ctx.gpr[17] + static_cast<std::uint32_t>(80));
    if (rt.invoke_chained_direct<&recomp_unit_0174_entry, 174u, 536u, 0x08ABDEB4u>(ctx, &aot_mem) && ctx.pc == 0x08AC1170u) goto L_08AC1170;
    return;
L_08AC1170:
    ctx.set_gpr(2, ctx.gpr[2] & 255u);
    if (ctx.gpr[2] != 0u) {
    ctx.set_gpr(2, rt.memory().aot_load32(ctx.gpr[17] + static_cast<std::uint32_t>(8)));
        goto L_08AC1184;
    }
    goto L_08AC117C;
L_08AC117C:
    { const bool branch_taken = 0u == 0u;
    ctx.set_gpr(2, 0u + 0u);
      if (branch_taken) {
          goto L_08AC1194;
      }
      goto L_08AC1184;
    }
L_08AC1184:
    ctx.set_gpr(2, ctx.gpr[2] + static_cast<std::uint32_t>(1));
    rt.memory().aot_store32(ctx.gpr[17] + static_cast<std::uint32_t>(8), ctx.gpr[2]);
    goto L_08AC118C;
L_08AC118C:
    rt.memory().aot_store32(ctx.gpr[17] + static_cast<std::uint32_t>(8), 0u);
    ctx.set_gpr(2, 0u + static_cast<std::uint32_t>(1));
    goto L_08AC1194;
L_08AC1194:
    ctx.set_gpr(31, rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(12)));
    ctx.set_gpr(17, rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(8)));
    ctx.set_gpr(16, rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(4)));
    jump_target = ctx.gpr[31];
    ctx.set_gpr(29, ctx.gpr[29] + static_cast<std::uint32_t>(16));
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_08AC11A8:
    ctx.set_gpr(29, ctx.gpr[29] + static_cast<std::uint32_t>(-16));
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(12), ctx.gpr[31]);
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(8), ctx.gpr[18]);
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(4), ctx.gpr[17]);
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(0), ctx.gpr[16]);
    ctx.set_gpr(2, rt.memory().aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(4)));
    ctx.set_gpr(31, 0x08AC11C8u);
    ctx.set_gpr(4, rt.memory().aot_load32(ctx.gpr[2] + static_cast<std::uint32_t>(29328)));
    if (rt.invoke_chained_direct<&recomp_unit_0024_entry, 24u, 25u, 0x08864208u>(ctx, &aot_mem) && ctx.pc == 0x08AC11C8u) goto L_08AC11C8;
    return;
L_08AC11C8:
    ctx.set_gpr(16, ctx.gpr[2] + 0u);
    ctx.set_gpr(2, 0u + static_cast<std::uint32_t>(-1));
    { const bool branch_taken = ctx.gpr[16] != ctx.gpr[2];
    ctx.set_gpr(18, 0u + 0u);
      if (branch_taken) {
          goto L_08AC11E0;
      }
      goto L_08AC11D8;
    }
L_08AC11D8:
    { const bool branch_taken = 0u == 0u;
    ctx.set_gpr(2, 0u + 0u);
      if (branch_taken) {
          goto L_08AC120C;
      }
      goto L_08AC11E0;
    }
L_08AC11E0:
    ctx.set_gpr(17, 0u + 0u);
    goto L_08AC11E4;
L_08AC11E4:
    ctx.set_gpr(31, 0x08AC11ECu);
    ctx.set_gpr(4, ctx.gpr[17] + 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0023_entry, 23u, 655u, 0x088628A8u>(ctx, &aot_mem) && ctx.pc == 0x08AC11ECu) goto L_08AC11EC;
    return;
L_08AC11EC:
    if (ctx.gpr[2] != ctx.gpr[16]) {
    ctx.set_gpr(17, ctx.gpr[17] + static_cast<std::uint32_t>(1));
        goto L_08AC11FC;
    }
    goto L_08AC11F4;
L_08AC11F4:
    { const bool branch_taken = 0u == 0u;
    ctx.set_gpr(18, ctx.gpr[17] + 0u);
      if (branch_taken) {
          goto L_08AC1208;
      }
      goto L_08AC11FC;
    }
L_08AC11FC:
    ctx.set_gpr(2, static_cast<std::int32_t>(ctx.gpr[17]) < 53 ? 1u : 0u);
    { const bool branch_taken = ctx.gpr[2] != 0u;
    // nop
      if (branch_taken) {
          goto L_08AC11E4;
      }
      goto L_08AC1208;
    }
L_08AC1208:
    ctx.set_gpr(2, ctx.gpr[18] + 0u);
    goto L_08AC120C;
L_08AC120C:
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
L_08AC1224:
    ctx.set_gpr(29, ctx.gpr[29] + static_cast<std::uint32_t>(-32));
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(28), ctx.gpr[31]);
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(24), ctx.gpr[19]);
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(20), ctx.gpr[18]);
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(16), ctx.gpr[17]);
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(12), ctx.gpr[16]);
    ctx.set_gpr(16, ctx.gpr[5] + 0u);
    ctx.set_gpr(31, 0x08AC1248u);
    ctx.set_gpr(17, ctx.gpr[4] + 0u);
    goto L_08AC11A8;
L_08AC1248:
    ctx.set_gpr(31, 0x08AC1250u);
    rt.memory().aot_store32(ctx.gpr[17] + static_cast<std::uint32_t>(184), ctx.gpr[2]);
    if (rt.invoke_chained_direct<&recomp_unit_0017_entry, 17u, 188u, 0x08848C60u>(ctx, &aot_mem) && ctx.pc == 0x08AC1250u) goto L_08AC1250;
    return;
L_08AC1250:
    ctx.set_gpr(4, ctx.gpr[2] + 0u);
    ctx.set_gpr(31, 0x08AC125Cu);
    ctx.set_gpr(5, 0u + 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0187_entry, 187u, 124u, 0x08AF0844u>(ctx, &aot_mem) && ctx.pc == 0x08AC125Cu) goto L_08AC125C;
    return;
L_08AC125C:
    ctx.set_gpr(31, 0x08AC1264u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0017_entry, 17u, 189u, 0x08848C6Cu>(ctx, &aot_mem) && ctx.pc == 0x08AC1264u) goto L_08AC1264;
    return;
L_08AC1264:
    ctx.set_gpr(18, ctx.gpr[2] + 0u);
    ctx.set_gpr(31, 0x08AC1270u);
    ctx.set_gpr(4, 0u + static_cast<std::uint32_t>(1));
    if (rt.invoke_chained_direct<&recomp_unit_0172_entry, 172u, 272u, 0x08AB5298u>(ctx, &aot_mem) && ctx.pc == 0x08AC1270u) goto L_08AC1270;
    return;
L_08AC1270:
    ctx.set_gpr(4, ctx.gpr[18] + 0u);
    ctx.set_gpr(31, 0x08AC127Cu);
    ctx.set_gpr(5, ctx.gpr[2] + 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0187_entry, 187u, 197u, 0x08AF0D70u>(ctx, &aot_mem) && ctx.pc == 0x08AC127Cu) goto L_08AC127C;
    return;
L_08AC127C:
    ctx.set_gpr(31, 0x08AC1284u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0017_entry, 17u, 190u, 0x08848C78u>(ctx, &aot_mem) && ctx.pc == 0x08AC1284u) goto L_08AC1284;
    return;
L_08AC1284:
    ctx.set_gpr(4, ctx.gpr[2] + 0u);
    ctx.set_gpr(31, 0x08AC1290u);
    ctx.set_gpr(5, 0u + 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0187_entry, 187u, 446u, 0x08AF1BACu>(ctx, &aot_mem) && ctx.pc == 0x08AC1290u) goto L_08AC1290;
    return;
L_08AC1290:
    ctx.set_gpr(4, rt.memory().aot_load32(ctx.gpr[17] + static_cast<std::uint32_t>(4)));
    ctx.set_gpr(31, 0x08AC129Cu);
    ctx.set_gpr(5, 0u + static_cast<std::uint32_t>(3));
    if (rt.invoke_chained_direct<&recomp_unit_0170_entry, 170u, 530u, 0x08AAE348u>(ctx, &aot_mem) && ctx.pc == 0x08AC129Cu) goto L_08AC129C;
    return;
L_08AC129C:
    ctx.set_gpr(25, rt.memory().aot_load32(ctx.gpr[17] + static_cast<std::uint32_t>(60)));
    ctx.set_gpr(2, 16704u << 16u);
    ctx.fpr[12] = std::bit_cast<float>(ctx.gpr[2]);
    ctx.set_gpr(25, rt.memory().aot_load32(ctx.gpr[25] + static_cast<std::uint32_t>(12)));
    ctx.set_gpr(2, 16576u << 16u);
    ctx.set_gpr(7, 0u + static_cast<std::uint32_t>(1));
    ctx.fpr[13] = std::bit_cast<float>(ctx.gpr[2]);
    ctx.set_gpr(4, ctx.gpr[17] + static_cast<std::uint32_t>(36));
    ctx.set_gpr(5, 0u + static_cast<std::uint32_t>(6));
    ctx.set_gpr(6, 0u + static_cast<std::uint32_t>(82));
    jump_target = ctx.gpr[25];
    ctx.set_gpr(31, 0x08AC12CCu);
    ctx.set_gpr(8, ctx.gpr[7] + 0u);
    ctx.pc = jump_target;
    if (rt.invoke_chained_call(ctx, &aot_mem) && ctx.pc == 0x08AC12CCu) goto L_08AC12CC;
    return;
L_08AC12CC:
    ctx.set_gpr(4, rt.memory().aot_load32(ctx.gpr[17] + static_cast<std::uint32_t>(4)));
    ctx.set_gpr(31, 0x08AC12D8u);
    ctx.set_gpr(5, 0u + 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0170_entry, 170u, 525u, 0x08AAE2C8u>(ctx, &aot_mem) && ctx.pc == 0x08AC12D8u) goto L_08AC12D8;
    return;
L_08AC12D8:
    ctx.set_gpr(4, rt.memory().aot_load32(ctx.gpr[17] + static_cast<std::uint32_t>(4)));
    ctx.fpr[12] = std::bit_cast<float>(0u);
    ctx.set_gpr(5, 0u + 0u);
    ctx.set_gpr(6, 0u + static_cast<std::uint32_t>(1));
    ctx.set_gpr(31, 0x08AC12F0u);
    ctx.set_gpr(7, 0u + 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0170_entry, 170u, 452u, 0x08AADD34u>(ctx, &aot_mem) && ctx.pc == 0x08AC12F0u) goto L_08AC12F0;
    return;
L_08AC12F0:
    ctx.set_gpr(4, rt.memory().aot_load32(ctx.gpr[17] + static_cast<std::uint32_t>(4)));
    ctx.set_gpr(5, 0u + static_cast<std::uint32_t>(1));
    ctx.set_gpr(6, ctx.gpr[5] + 0u);
    ctx.set_gpr(7, ctx.gpr[5] + 0u);
    ctx.set_gpr(31, 0x08AC1308u);
    ctx.set_gpr(8, 0u + 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0170_entry, 170u, 501u, 0x08AAE1A4u>(ctx, &aot_mem) && ctx.pc == 0x08AC1308u) goto L_08AC1308;
    return;
L_08AC1308:
    ctx.set_gpr(31, 0x08AC1310u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0017_entry, 17u, 191u, 0x08848C84u>(ctx, &aot_mem) && ctx.pc == 0x08AC1310u) goto L_08AC1310;
    return;
L_08AC1310:
    ctx.set_gpr(31, 0x08AC1318u);
    ctx.set_gpr(4, ctx.gpr[2] + 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0174_entry, 174u, 990u, 0x08ABFC78u>(ctx, &aot_mem) && ctx.pc == 0x08AC1318u) goto L_08AC1318;
    return;
L_08AC1318:
    ctx.set_gpr(5, rt.memory().aot_load32(ctx.gpr[17] + static_cast<std::uint32_t>(184)));
    ctx.set_gpr(19, ctx.gpr[2] + 0u);
    ctx.set_gpr(31, 0x08AC1328u);
    ctx.set_gpr(4, ctx.gpr[19] + 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0159_entry, 159u, 401u, 0x08A81268u>(ctx, &aot_mem) && ctx.pc == 0x08AC1328u) goto L_08AC1328;
    return;
L_08AC1328:
    ctx.set_gpr(5, rt.memory().aot_load32(ctx.gpr[17] + static_cast<std::uint32_t>(184)));
    ctx.set_gpr(18, ctx.gpr[2] + 0u);
    ctx.set_gpr(31, 0x08AC1338u);
    ctx.set_gpr(4, ctx.gpr[19] + 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0187_entry, 187u, 645u, 0x08AF2938u>(ctx, &aot_mem) && ctx.pc == 0x08AC1338u) goto L_08AC1338;
    return;
L_08AC1338:
    ctx.set_gpr(7, rt.memory().aot_load32(ctx.gpr[18] + static_cast<std::uint32_t>(12)));
    ctx.set_gpr(6, rt.memory().aot_load32(ctx.gpr[17] + static_cast<std::uint32_t>(184)));
    ctx.set_gpr(5, ctx.gpr[19] + 0u);
    ctx.set_gpr(31, 0x08AC134Cu);
    ctx.set_gpr(4, ctx.gpr[17] + 0u);
    goto L_08AC14F4;
L_08AC134C:
    ctx.set_gpr(25, rt.memory().aot_load32(ctx.gpr[17] + static_cast<std::uint32_t>(180)));
    ctx.set_gpr(4, ctx.gpr[17] + static_cast<std::uint32_t>(80));
    ctx.set_gpr(5, 0u + 0u);
    ctx.set_gpr(25, rt.memory().aot_load32(ctx.gpr[25] + static_cast<std::uint32_t>(16)));
    jump_target = ctx.gpr[25];
    ctx.set_gpr(31, 0x08AC1364u);
    ctx.set_gpr(6, 0u + 0u);
    ctx.pc = jump_target;
    if (rt.invoke_chained_call(ctx, &aot_mem) && ctx.pc == 0x08AC1364u) goto L_08AC1364;
    return;
L_08AC1364:
    ctx.set_gpr(2, rt.memory().aot_load8(ctx.gpr[17] + static_cast<std::uint32_t>(192)));
    if (ctx.gpr[2] == 0u) {
    ctx.set_gpr(4, ctx.gpr[17] + static_cast<std::uint32_t>(64));
        goto L_08AC138C;
    }
    goto L_08AC1370;
L_08AC1370:
    ctx.set_gpr(4, ctx.gpr[17] + static_cast<std::uint32_t>(64));
    ctx.set_gpr(5, 0u + static_cast<std::uint32_t>(1));
    ctx.set_gpr(6, ctx.gpr[17] + static_cast<std::uint32_t>(80));
    ctx.set_gpr(31, 0x08AC1384u);
    ctx.set_gpr(7, 0u + 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0174_entry, 174u, 831u, 0x08ABF318u>(ctx, &aot_mem) && ctx.pc == 0x08AC1384u) goto L_08AC1384;
    return;
L_08AC1384:
    { const bool branch_taken = 0u == 0u;
    ctx.set_gpr(5, ctx.gpr[16] + 0u);
      if (branch_taken) {
          goto L_08AC13A0;
      }
      goto L_08AC138C;
    }
L_08AC138C:
    ctx.set_gpr(5, 0u + static_cast<std::uint32_t>(1));
    ctx.set_gpr(6, 0u + 0u);
    ctx.set_gpr(31, 0x08AC139Cu);
    ctx.set_gpr(7, 0u + 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0174_entry, 174u, 831u, 0x08ABF318u>(ctx, &aot_mem) && ctx.pc == 0x08AC139Cu) goto L_08AC139C;
    return;
L_08AC139C:
    ctx.set_gpr(5, ctx.gpr[16] + 0u);
    goto L_08AC13A0;
L_08AC13A0:
    ctx.set_gpr(31, 0x08AC13A8u);
    ctx.set_gpr(4, ctx.gpr[17] + static_cast<std::uint32_t>(64));
    if (rt.invoke_chained_direct<&recomp_unit_0174_entry, 174u, 839u, 0x08ABF36Cu>(ctx, &aot_mem) && ctx.pc == 0x08AC13A8u) goto L_08AC13A8;
    return;
L_08AC13A8:
    ctx.set_gpr(2, 2231u << 16u);
    ctx.fpr[2] = std::bit_cast<float>(rt.memory().aot_load32(ctx.gpr[2] + static_cast<std::uint32_t>(3492)));
    ctx.set_gpr(2, 2231u << 16u);
    ctx.fpr[1] = std::bit_cast<float>(rt.memory().aot_load32(ctx.gpr[2] + static_cast<std::uint32_t>(3496)));
    ctx.set_gpr(2, 2231u << 16u);
    ctx.fpr[0] = std::bit_cast<float>(rt.memory().aot_load32(ctx.gpr[2] + static_cast<std::uint32_t>(3500)));
    rt.memory().aot_store32(ctx.gpr[17] + static_cast<std::uint32_t>(12), std::bit_cast<std::uint32_t>(ctx.fpr[2]));
    rt.memory().aot_store32(ctx.gpr[17] + static_cast<std::uint32_t>(16), std::bit_cast<std::uint32_t>(ctx.fpr[1]));
    rt.memory().aot_store32(ctx.gpr[17] + static_cast<std::uint32_t>(20), std::bit_cast<std::uint32_t>(ctx.fpr[0]));
    ctx.set_gpr(2, rt.memory().aot_load8(ctx.gpr[17] + static_cast<std::uint32_t>(192)));
    if (ctx.gpr[2] == 0u) {
    ctx.set_gpr(3, 2233u << 16u);
        goto L_08AC1400;
    }
    goto L_08AC13D8;
L_08AC13D8:
    ctx.set_gpr(2, 2231u << 16u);
    ctx.fpr[2] = std::bit_cast<float>(rt.memory().aot_load32(ctx.gpr[2] + static_cast<std::uint32_t>(3504)));
    ctx.set_gpr(2, 2231u << 16u);
    ctx.fpr[1] = std::bit_cast<float>(rt.memory().aot_load32(ctx.gpr[2] + static_cast<std::uint32_t>(3508)));
    ctx.set_gpr(2, 2231u << 16u);
    ctx.fpr[0] = std::bit_cast<float>(rt.memory().aot_load32(ctx.gpr[2] + static_cast<std::uint32_t>(3512)));
    rt.memory().aot_store32(ctx.gpr[17] + static_cast<std::uint32_t>(24), std::bit_cast<std::uint32_t>(ctx.fpr[2]));
    rt.memory().aot_store32(ctx.gpr[17] + static_cast<std::uint32_t>(28), std::bit_cast<std::uint32_t>(ctx.fpr[1]));
    { const bool branch_taken = 0u == 0u;
    rt.memory().aot_store32(ctx.gpr[17] + static_cast<std::uint32_t>(32), std::bit_cast<std::uint32_t>(ctx.fpr[0]));
      if (branch_taken) {
          goto L_08AC1420;
      }
      goto L_08AC1400;
    }
L_08AC1400:
    ctx.set_gpr(3, ctx.gpr[3] + static_cast<std::uint32_t>(8516));
    ctx.set_gpr(2, 2233u << 16u);
    ctx.fpr[2] = std::bit_cast<float>(rt.memory().aot_load32(ctx.gpr[2] + static_cast<std::uint32_t>(8516)));
    ctx.fpr[1] = std::bit_cast<float>(rt.memory().aot_load32(ctx.gpr[3] + static_cast<std::uint32_t>(4)));
    ctx.fpr[0] = std::bit_cast<float>(rt.memory().aot_load32(ctx.gpr[3] + static_cast<std::uint32_t>(8)));
    rt.memory().aot_store32(ctx.gpr[17] + static_cast<std::uint32_t>(24), std::bit_cast<std::uint32_t>(ctx.fpr[2]));
    rt.memory().aot_store32(ctx.gpr[17] + static_cast<std::uint32_t>(28), std::bit_cast<std::uint32_t>(ctx.fpr[1]));
    rt.memory().aot_store32(ctx.gpr[17] + static_cast<std::uint32_t>(32), std::bit_cast<std::uint32_t>(ctx.fpr[0]));
    goto L_08AC1420;
L_08AC1420:
    ctx.set_gpr(31, rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(28)));
    ctx.set_gpr(19, rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(24)));
    ctx.set_gpr(18, rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(20)));
    ctx.set_gpr(17, rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(16)));
    ctx.set_gpr(16, rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(12)));
    ctx.set_gpr(2, 0u + static_cast<std::uint32_t>(1));
    jump_target = ctx.gpr[31];
    ctx.set_gpr(29, ctx.gpr[29] + static_cast<std::uint32_t>(32));
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_08AC1440:
    ctx.set_gpr(29, ctx.gpr[29] + static_cast<std::uint32_t>(-16));
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(12), ctx.gpr[31]);
    ctx.set_gpr(31, 0x08AC1450u);
    ctx.set_gpr(4, ctx.gpr[4] + static_cast<std::uint32_t>(80));
    if (rt.invoke_chained_direct<&recomp_unit_0174_entry, 174u, 547u, 0x08ABDF4Cu>(ctx, &aot_mem) && ctx.pc == 0x08AC1450u) goto L_08AC1450;
    return;
L_08AC1450:
    ctx.set_gpr(31, rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(12)));
    ctx.set_gpr(2, 0u + static_cast<std::uint32_t>(1));
    jump_target = ctx.gpr[31];
    ctx.set_gpr(29, ctx.gpr[29] + static_cast<std::uint32_t>(16));
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_08AC1460:
    ctx.set_gpr(29, ctx.gpr[29] + static_cast<std::uint32_t>(-16));
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(12), ctx.gpr[31]);
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(8), ctx.gpr[17]);
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(4), ctx.gpr[16]);
    ctx.set_gpr(17, ctx.gpr[4] + 0u);
    ctx.set_gpr(16, 0u + static_cast<std::uint32_t>(7));
    ctx.set_gpr(2, rt.memory().aot_load32(ctx.gpr[17] + static_cast<std::uint32_t>(4)));
    goto L_08AC147C;
L_08AC147C:
    ctx.set_gpr(5, ctx.gpr[16] + 0u);
    ctx.set_gpr(31, 0x08AC1488u);
    ctx.set_gpr(4, ctx.gpr[2] + static_cast<std::uint32_t>(29304));
    if (rt.invoke_chained_direct<&recomp_unit_0194_entry, 194u, 302u, 0x08B0D2F0u>(ctx, &aot_mem) && ctx.pc == 0x08AC1488u) goto L_08AC1488;
    return;
L_08AC1488:
    ctx.set_gpr(16, ctx.gpr[16] + static_cast<std::uint32_t>(1));
    ctx.set_gpr(1, static_cast<std::int32_t>(ctx.gpr[16]) < 10 ? 1u : 0u);
    if (ctx.gpr[1] != 0u) {
    ctx.set_gpr(2, rt.memory().aot_load32(ctx.gpr[17] + static_cast<std::uint32_t>(4)));
        goto L_08AC147C;
    }
    goto L_08AC1498;
L_08AC1498:
    ctx.set_gpr(31, 0x08AC14A0u);
    ctx.set_gpr(4, ctx.gpr[17] + static_cast<std::uint32_t>(80));
    if (rt.invoke_chained_direct<&recomp_unit_0174_entry, 174u, 554u, 0x08ABDFB4u>(ctx, &aot_mem) && ctx.pc == 0x08AC14A0u) goto L_08AC14A0;
    return;
L_08AC14A0:
    ctx.set_gpr(25, rt.memory().aot_load32(ctx.gpr[17] + static_cast<std::uint32_t>(60)));
    ctx.set_gpr(25, rt.memory().aot_load32(ctx.gpr[25] + static_cast<std::uint32_t>(16)));
    jump_target = ctx.gpr[25];
    ctx.set_gpr(31, 0x08AC14B0u);
    ctx.set_gpr(4, ctx.gpr[17] + static_cast<std::uint32_t>(36));
    ctx.pc = jump_target;
    if (rt.invoke_chained_call(ctx, &aot_mem) && ctx.pc == 0x08AC14B0u) goto L_08AC14B0;
    return;
L_08AC14B0:
    ctx.set_gpr(31, 0x08AC14B8u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0017_entry, 17u, 192u, 0x08848C90u>(ctx, &aot_mem) && ctx.pc == 0x08AC14B8u) goto L_08AC14B8;
    return;
L_08AC14B8:
    ctx.set_gpr(31, 0x08AC14C0u);
    ctx.set_gpr(4, ctx.gpr[2] + 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0191_entry, 191u, 442u, 0x08B02224u>(ctx, &aot_mem) && ctx.pc == 0x08AC14C0u) goto L_08AC14C0;
    return;
L_08AC14C0:
    ctx.set_gpr(31, 0x08AC14C8u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0017_entry, 17u, 190u, 0x08848C78u>(ctx, &aot_mem) && ctx.pc == 0x08AC14C8u) goto L_08AC14C8;
    return;
L_08AC14C8:
    ctx.set_gpr(31, 0x08AC14D0u);
    ctx.set_gpr(4, ctx.gpr[2] + 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0187_entry, 187u, 455u, 0x08AF1C18u>(ctx, &aot_mem) && ctx.pc == 0x08AC14D0u) goto L_08AC14D0;
    return;
L_08AC14D0:
    ctx.set_gpr(31, 0x08AC14D8u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0017_entry, 17u, 189u, 0x08848C6Cu>(ctx, &aot_mem) && ctx.pc == 0x08AC14D8u) goto L_08AC14D8;
    return;
L_08AC14D8:
    ctx.set_gpr(31, 0x08AC14E0u);
    ctx.set_gpr(4, ctx.gpr[2] + 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0187_entry, 187u, 208u, 0x08AF0DE8u>(ctx, &aot_mem) && ctx.pc == 0x08AC14E0u) goto L_08AC14E0;
    return;
L_08AC14E0:
    ctx.set_gpr(31, rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(12)));
    ctx.set_gpr(17, rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(8)));
    ctx.set_gpr(16, rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(4)));
    jump_target = ctx.gpr[31];
    ctx.set_gpr(29, ctx.gpr[29] + static_cast<std::uint32_t>(16));
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_08AC14F4:
    ctx.set_gpr(29, ctx.gpr[29] + static_cast<std::uint32_t>(-16));
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(12), ctx.gpr[31]);
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(8), ctx.gpr[16]);
    rt.memory().aot_store32(ctx.gpr[4] + static_cast<std::uint32_t>(184), ctx.gpr[6]);
    rt.memory().aot_store32(ctx.gpr[4] + static_cast<std::uint32_t>(188), ctx.gpr[7]);
    ctx.set_gpr(16, ctx.gpr[4] + 0u);
    ctx.set_gpr(4, ctx.gpr[5] + 0u);
    ctx.set_gpr(31, 0x08AC1518u);
    ctx.set_gpr(5, rt.memory().aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(184)));
    if (rt.invoke_chained_direct<&recomp_unit_0158_entry, 158u, 886u, 0x08A7F1E8u>(ctx, &aot_mem) && ctx.pc == 0x08AC1518u) goto L_08AC1518;
    return;
L_08AC1518:
    ctx.set_gpr(7, rt.memory().aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(188)));
    ctx.set_gpr(5, ctx.gpr[2] & 255u);
    ctx.set_gpr(4, ctx.gpr[16] + static_cast<std::uint32_t>(80));
    ctx.set_gpr(31, 0x08AC152Cu);
    ctx.set_gpr(6, 0u + 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0174_entry, 174u, 602u, 0x08ABE2DCu>(ctx, &aot_mem) && ctx.pc == 0x08AC152Cu) goto L_08AC152C;
    return;
L_08AC152C:
    ctx.set_gpr(25, rt.memory().aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(180)));
    ctx.set_gpr(5, rt.memory().aot_load8(ctx.gpr[16] + static_cast<std::uint32_t>(192)));
    ctx.set_gpr(4, ctx.gpr[16] + static_cast<std::uint32_t>(80));
    ctx.set_gpr(25, rt.memory().aot_load32(ctx.gpr[25] + static_cast<std::uint32_t>(16)));
    jump_target = ctx.gpr[25];
    ctx.set_gpr(31, 0x08AC1544u);
    ctx.set_gpr(6, 0u + static_cast<std::uint32_t>(1));
    ctx.pc = jump_target;
    if (rt.invoke_chained_call(ctx, &aot_mem) && ctx.pc == 0x08AC1544u) goto L_08AC1544;
    return;
L_08AC1544:
    ctx.set_gpr(5, rt.memory().aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(188)));
    ctx.set_gpr(31, 0x08AC1550u);
    ctx.set_gpr(4, ctx.gpr[16] + 0u);
    goto L_08AC1560;
L_08AC1550:
    ctx.set_gpr(31, rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(12)));
    ctx.set_gpr(16, rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(8)));
    jump_target = ctx.gpr[31];
    ctx.set_gpr(29, ctx.gpr[29] + static_cast<std::uint32_t>(16));
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_08AC1560:
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
    ctx.set_gpr(2, 2231u << 16u);
    ctx.fpr[1] = std::bit_cast<float>(rt.memory().aot_load32(ctx.gpr[2] + static_cast<std::uint32_t>(3516)));
    ctx.set_gpr(23, ctx.gpr[4] + 0u);
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(68), ctx.gpr[5]);
    ctx.set_gpr(2, 2231u << 16u);
    ctx.fpr[0] = std::bit_cast<float>(rt.memory().aot_load32(ctx.gpr[2] + static_cast<std::uint32_t>(3520)));
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(136), std::bit_cast<std::uint32_t>(ctx.fpr[1]));
    ctx.set_gpr(4, ctx.gpr[29] + static_cast<std::uint32_t>(72));
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(140), std::bit_cast<std::uint32_t>(ctx.fpr[0]));
    ctx.set_gpr(31, 0x08AC15B8u);
    ctx.set_gpr(18, 0u + 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0023_entry, 23u, 620u, 0x08862608u>(ctx, &aot_mem) && ctx.pc == 0x08AC15B8u) goto L_08AC15B8;
    return;
L_08AC15B8:
    ctx.set_gpr(2, ctx.gpr[29] + static_cast<std::uint32_t>(136));
    ctx.set_gpr(22, 0u + 0u);
    ctx.set_gpr(20, ctx.gpr[29] + static_cast<std::uint32_t>(72));
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(64), ctx.gpr[23]);
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(60), ctx.gpr[23]);
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(56), ctx.gpr[2]);
    goto L_08AC15D0;
L_08AC15D0:
    ctx.set_gpr(2, rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(64)));
    ctx.set_gpr(16, 0u + 0u);
    ctx.set_gpr(21, 0u + 0u);
    ctx.set_gpr(17, ctx.gpr[2] + static_cast<std::uint32_t>(196));
    ctx.set_gpr(2, rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(60)));
    ctx.set_gpr(19, ctx.gpr[17] + 0u);
    ctx.set_gpr(30, ctx.gpr[2] + static_cast<std::uint32_t>(292));
    goto L_08AC15EC;
L_08AC15EC:
    ctx.set_gpr(31, 0x08AC15F4u);
    ctx.set_gpr(4, ctx.gpr[19] + 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0169_entry, 169u, 664u, 0x08AAA488u>(ctx, &aot_mem) && ctx.pc == 0x08AC15F4u) goto L_08AC15F4;
    return;
L_08AC15F4:
    ctx.set_gpr(21, ctx.gpr[21] + static_cast<std::uint32_t>(1));
    ctx.set_gpr(3, static_cast<std::int32_t>(ctx.gpr[21]) < 3 ? 1u : 0u);
    { const bool branch_taken = ctx.gpr[3] != 0u;
    ctx.set_gpr(19, ctx.gpr[19] + static_cast<std::uint32_t>(16));
      if (branch_taken) {
          goto L_08AC15EC;
      }
      goto L_08AC1604;
    }
L_08AC1604:
    if (ctx.gpr[18] != 0u) {
    ctx.set_gpr(3, rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(64)));
        goto L_08AC1858;
    }
    goto L_08AC160C;
L_08AC160C:
    ctx.set_gpr(3, rt.memory().aot_load32(ctx.gpr[23] + static_cast<std::uint32_t>(4)));
    ctx.set_gpr(2, rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(68)));
    ctx.set_gpr(6, ctx.gpr[22] + 0u);
    ctx.set_gpr(4, rt.memory().aot_load32(ctx.gpr[3] + static_cast<std::uint32_t>(29328)));
    ctx.set_gpr(31, 0x08AC1624u);
    ctx.set_gpr(5, ctx.gpr[2] + static_cast<std::uint32_t>(122));
    goto L_08AC18B8;
L_08AC1624:
    ctx.set_gpr(5, rt.memory().aot_load32(ctx.gpr[20] + static_cast<std::uint32_t>(8)));
    ctx.set_gpr(19, ctx.gpr[2] & 255u);
    ctx.set_gpr(31, 0x08AC1634u);
    ctx.set_gpr(4, ctx.gpr[30] + 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0004_entry, 4u, 490u, 0x0881667Cu>(ctx, &aot_mem) && ctx.pc == 0x08AC1634u) goto L_08AC1634;
    return;
L_08AC1634:
    ctx.set_gpr(4, rt.memory().aot_load32(ctx.gpr[20] + static_cast<std::uint32_t>(0)));
    ctx.set_gpr(3, 0u + static_cast<std::uint32_t>(-99));
    { const bool branch_taken = ctx.gpr[4] != ctx.gpr[3];
    // nop
      if (branch_taken) {
          goto L_08AC166C;
      }
      goto L_08AC1644;
    }
L_08AC1644:
    ctx.set_gpr(3, rt.memory().aot_load32(ctx.gpr[20] + static_cast<std::uint32_t>(16)));
    ctx.set_gpr(5, 0u + static_cast<std::uint32_t>(1));
    { const bool branch_taken = ctx.gpr[3] == 0u;
    ctx.set_gpr(18, 0u + static_cast<std::uint32_t>(1));
      if (branch_taken) {
          goto L_08AC1854;
      }
      goto L_08AC1654;
    }
L_08AC1654:
    rt.memory().aot_store32(ctx.gpr[17] + static_cast<std::uint32_t>(0), ctx.gpr[3]);
    ctx.set_gpr(4, ctx.gpr[17] + 0u);
    ctx.set_gpr(31, 0x08AC1664u);
    ctx.set_gpr(6, ctx.gpr[5] + 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0174_entry, 174u, 823u, 0x08ABF23Cu>(ctx, &aot_mem) && ctx.pc == 0x08AC1664u) goto L_08AC1664;
    return;
L_08AC1664:
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_08AC1854;
      }
      goto L_08AC166C;
    }
L_08AC166C:
    if (ctx.gpr[19] == 0u) {
    ctx.set_gpr(2, 0u + static_cast<std::uint32_t>(-1));
        goto L_08AC176C;
    }
    goto L_08AC1674;
L_08AC1674:
    ctx.set_gpr(2, 0u + static_cast<std::uint32_t>(-1));
    if (ctx.gpr[4] != ctx.gpr[2]) {
    ctx.set_gpr(2, 0u + static_cast<std::uint32_t>(-2));
        goto L_08AC169C;
    }
    goto L_08AC1680;
L_08AC1680:
    ctx.set_gpr(2, rt.memory().aot_load32(ctx.gpr[20] + static_cast<std::uint32_t>(8)));
    ctx.set_gpr(18, 0u + static_cast<std::uint32_t>(1));
    ctx.set_gpr(16, ctx.gpr[16] + static_cast<std::uint32_t>(2));
    rt.memory().aot_store32(ctx.gpr[17] + static_cast<std::uint32_t>(0), ctx.gpr[2]);
    ctx.set_gpr(2, rt.memory().aot_load32(ctx.gpr[20] + static_cast<std::uint32_t>(16)));
    { const bool branch_taken = 0u == 0u;
    rt.memory().aot_store32(ctx.gpr[17] + static_cast<std::uint32_t>(16), ctx.gpr[2]);
      if (branch_taken) {
          goto L_08AC17D8;
      }
      goto L_08AC169C;
    }
L_08AC169C:
    if (ctx.gpr[4] != ctx.gpr[2]) {
    ctx.set_gpr(1, static_cast<std::int32_t>(ctx.gpr[4]) < -2 ? 1u : 0u);
        goto L_08AC16CC;
    }
    goto L_08AC16A4;
L_08AC16A4:
    ctx.set_gpr(3, rt.memory().aot_load32(ctx.gpr[20] + static_cast<std::uint32_t>(8)));
    ctx.set_gpr(2, 2231u << 16u);
    ctx.set_gpr(2, ctx.gpr[2] + static_cast<std::uint32_t>(3524));
    rt.memory().aot_store32(ctx.gpr[17] + static_cast<std::uint32_t>(0), ctx.gpr[3]);
    rt.memory().aot_store32(ctx.gpr[17] + static_cast<std::uint32_t>(16), ctx.gpr[2]);
    ctx.set_gpr(2, rt.memory().aot_load32(ctx.gpr[20] + static_cast<std::uint32_t>(16)));
    ctx.set_gpr(18, 0u + static_cast<std::uint32_t>(1));
    ctx.set_gpr(16, ctx.gpr[16] + static_cast<std::uint32_t>(3));
    { const bool branch_taken = 0u == 0u;
    rt.memory().aot_store32(ctx.gpr[17] + static_cast<std::uint32_t>(32), ctx.gpr[2]);
      if (branch_taken) {
          goto L_08AC17D8;
      }
      goto L_08AC16CC;
    }
L_08AC16CC:
    if (ctx.gpr[1] == 0u) {
    ctx.set_gpr(2, rt.memory().aot_load32(ctx.gpr[20] + static_cast<std::uint32_t>(4)));
        goto L_08AC16FC;
    }
    goto L_08AC16D4;
L_08AC16D4:
    ctx.set_gpr(2, rt.memory().aot_load32(ctx.gpr[20] + static_cast<std::uint32_t>(8)));
    rt.memory().aot_store32(ctx.gpr[17] + static_cast<std::uint32_t>(0), ctx.gpr[2]);
    ctx.set_gpr(4, rt.memory().aot_load32(ctx.gpr[20] + static_cast<std::uint32_t>(4)));
    ctx.set_gpr(31, 0x08AC16E8u);
    ctx.set_gpr(18, 0u + static_cast<std::uint32_t>(1));
    if (rt.invoke_chained_direct<&recomp_unit_0023_entry, 23u, 607u, 0x088624B4u>(ctx, &aot_mem) && ctx.pc == 0x08AC16E8u) goto L_08AC16E8;
    return;
L_08AC16E8:
    rt.memory().aot_store32(ctx.gpr[17] + static_cast<std::uint32_t>(16), ctx.gpr[2]);
    ctx.set_gpr(2, rt.memory().aot_load32(ctx.gpr[20] + static_cast<std::uint32_t>(16)));
    ctx.set_gpr(16, ctx.gpr[16] + static_cast<std::uint32_t>(3));
    { const bool branch_taken = 0u == 0u;
    rt.memory().aot_store32(ctx.gpr[17] + static_cast<std::uint32_t>(32), ctx.gpr[2]);
      if (branch_taken) {
          goto L_08AC17D8;
      }
      goto L_08AC16FC;
    }
L_08AC16FC:
    { const bool branch_taken = static_cast<std::int32_t>(ctx.gpr[2]) < 0;
    // nop
      if (branch_taken) {
          goto L_08AC1744;
      }
      goto L_08AC1704;
    }
L_08AC1704:
    ctx.set_gpr(31, 0x08AC170Cu);
    ctx.set_gpr(18, 0u + static_cast<std::uint32_t>(1));
    if (rt.invoke_chained_direct<&recomp_unit_0023_entry, 23u, 598u, 0x08862428u>(ctx, &aot_mem) && ctx.pc == 0x08AC170Cu) goto L_08AC170C;
    return;
L_08AC170C:
    rt.memory().aot_store32(ctx.gpr[17] + static_cast<std::uint32_t>(0), ctx.gpr[2]);
    ctx.set_gpr(31, 0x08AC1718u);
    ctx.set_gpr(4, rt.memory().aot_load32(ctx.gpr[20] + static_cast<std::uint32_t>(4)));
    if (rt.invoke_chained_direct<&recomp_unit_0023_entry, 23u, 607u, 0x088624B4u>(ctx, &aot_mem) && ctx.pc == 0x08AC1718u) goto L_08AC1718;
    return;
L_08AC1718:
    rt.memory().aot_store32(ctx.gpr[17] + static_cast<std::uint32_t>(16), ctx.gpr[2]);
    ctx.set_gpr(5, rt.memory().aot_load32(ctx.gpr[20] + static_cast<std::uint32_t>(8)));
    ctx.set_gpr(31, 0x08AC1728u);
    ctx.set_gpr(4, ctx.gpr[23] + static_cast<std::uint32_t>(356));
    if (rt.invoke_chained_direct<&recomp_unit_0004_entry, 4u, 490u, 0x0881667Cu>(ctx, &aot_mem) && ctx.pc == 0x08AC1728u) goto L_08AC1728;
    return;
L_08AC1728:
    ctx.set_gpr(5, rt.memory().aot_load32(ctx.gpr[20] + static_cast<std::uint32_t>(16)));
    ctx.set_gpr(31, 0x08AC1734u);
    ctx.set_gpr(4, ctx.gpr[23] + static_cast<std::uint32_t>(356));
    if (rt.invoke_chained_direct<&recomp_unit_0004_entry, 4u, 455u, 0x08816458u>(ctx, &aot_mem) && ctx.pc == 0x08AC1734u) goto L_08AC1734;
    return;
L_08AC1734:
    ctx.set_gpr(2, ctx.gpr[23] + static_cast<std::uint32_t>(356));
    rt.memory().aot_store32(ctx.gpr[17] + static_cast<std::uint32_t>(32), ctx.gpr[2]);
    { const bool branch_taken = 0u == 0u;
    ctx.set_gpr(16, ctx.gpr[16] + static_cast<std::uint32_t>(3));
      if (branch_taken) {
          goto L_08AC17D8;
      }
      goto L_08AC1744;
    }
L_08AC1744:
    ctx.set_gpr(31, 0x08AC174Cu);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0023_entry, 23u, 598u, 0x08862428u>(ctx, &aot_mem) && ctx.pc == 0x08AC174Cu) goto L_08AC174C;
    return;
L_08AC174C:
    rt.memory().aot_store32(ctx.gpr[17] + static_cast<std::uint32_t>(0), ctx.gpr[2]);
    rt.memory().aot_store32(ctx.gpr[17] + static_cast<std::uint32_t>(16), ctx.gpr[30]);
    ctx.set_gpr(5, rt.memory().aot_load32(ctx.gpr[20] + static_cast<std::uint32_t>(16)));
    ctx.set_gpr(4, ctx.gpr[30] + 0u);
    ctx.set_gpr(31, 0x08AC1764u);
    ctx.set_gpr(16, ctx.gpr[16] + static_cast<std::uint32_t>(2));
    if (rt.invoke_chained_direct<&recomp_unit_0004_entry, 4u, 455u, 0x08816458u>(ctx, &aot_mem) && ctx.pc == 0x08AC1764u) goto L_08AC1764;
    return;
L_08AC1764:
    { const bool branch_taken = 0u == 0u;
    ctx.set_gpr(2, rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(56)));
      if (branch_taken) {
          goto L_08AC17DC;
      }
      goto L_08AC176C;
    }
L_08AC176C:
    { const bool branch_taken = ctx.gpr[4] == ctx.gpr[2];
    // nop
      if (branch_taken) {
          goto L_08AC1798;
      }
      goto L_08AC1774;
    }
L_08AC1774:
    ctx.set_gpr(2, 0u + static_cast<std::uint32_t>(-2));
    { const bool branch_taken = ctx.gpr[4] == ctx.gpr[2];
    // nop
      if (branch_taken) {
          goto L_08AC1798;
      }
      goto L_08AC1780;
    }
L_08AC1780:
    ctx.set_gpr(1, static_cast<std::int32_t>(ctx.gpr[4]) < -2 ? 1u : 0u);
    { const bool branch_taken = ctx.gpr[1] != 0u;
    // nop
      if (branch_taken) {
          goto L_08AC1798;
      }
      goto L_08AC178C;
    }
L_08AC178C:
    ctx.set_gpr(2, rt.memory().aot_load32(ctx.gpr[20] + static_cast<std::uint32_t>(4)));
    { const bool branch_taken = static_cast<std::int32_t>(ctx.gpr[2]) < 0;
    // nop
      if (branch_taken) {
          goto L_08AC17B0;
      }
      goto L_08AC1798;
    }
L_08AC1798:
    ctx.set_gpr(2, 2231u << 16u);
    ctx.set_gpr(2, ctx.gpr[2] + static_cast<std::uint32_t>(3540));
    ctx.set_gpr(18, 0u + static_cast<std::uint32_t>(1));
    rt.memory().aot_store32(ctx.gpr[17] + static_cast<std::uint32_t>(0), ctx.gpr[2]);
    { const bool branch_taken = 0u == 0u;
    ctx.set_gpr(16, ctx.gpr[16] + static_cast<std::uint32_t>(1));
      if (branch_taken) {
          goto L_08AC17D8;
      }
      goto L_08AC17B0;
    }
L_08AC17B0:
    if (ctx.gpr[22] != 0u) {
    ctx.set_gpr(2, 2231u << 16u);
        goto L_08AC17CC;
    }
    goto L_08AC17B8;
L_08AC17B8:
    ctx.set_gpr(2, 2231u << 16u);
    ctx.set_gpr(2, ctx.gpr[2] + static_cast<std::uint32_t>(3540));
    rt.memory().aot_store32(ctx.gpr[17] + static_cast<std::uint32_t>(0), ctx.gpr[2]);
    { const bool branch_taken = 0u == 0u;
    ctx.set_gpr(16, ctx.gpr[16] + static_cast<std::uint32_t>(1));
      if (branch_taken) {
          goto L_08AC17D8;
      }
      goto L_08AC17CC;
    }
L_08AC17CC:
    ctx.set_gpr(2, ctx.gpr[2] + static_cast<std::uint32_t>(3560));
    rt.memory().aot_store32(ctx.gpr[17] + static_cast<std::uint32_t>(0), ctx.gpr[2]);
    ctx.set_gpr(16, ctx.gpr[16] + static_cast<std::uint32_t>(1));
    goto L_08AC17D8;
L_08AC17D8:
    ctx.set_gpr(2, rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(56)));
    goto L_08AC17DC;
L_08AC17DC:
    ctx.set_gpr(4, 0u + static_cast<std::uint32_t>(4));
    ctx.set_gpr(5, rt.memory().aot_load32(ctx.gpr[2] + static_cast<std::uint32_t>(0)));
    ctx.set_gpr(31, 0x08AC17ECu);
    ctx.set_gpr(6, 0u + static_cast<std::uint32_t>(12));
    if (rt.invoke_chained_direct<&recomp_unit_0174_entry, 174u, 822u, 0x08ABF1E0u>(ctx, &aot_mem) && ctx.pc == 0x08AC17ECu) goto L_08AC17EC;
    return;
L_08AC17EC:
    { const bool branch_taken = ctx.gpr[18] == 0u;
    ctx.set_gpr(21, ctx.gpr[2] + 0u);
      if (branch_taken) {
          goto L_08AC1808;
      }
      goto L_08AC17F4;
    }
L_08AC17F4:
    ctx.set_gpr(4, 0u + static_cast<std::uint32_t>(4));
    ctx.set_gpr(5, 0u + static_cast<std::uint32_t>(2));
    ctx.set_gpr(31, 0x08AC1804u);
    ctx.set_gpr(6, 0u + static_cast<std::uint32_t>(12));
    if (rt.invoke_chained_direct<&recomp_unit_0174_entry, 174u, 822u, 0x08ABF1E0u>(ctx, &aot_mem) && ctx.pc == 0x08AC1804u) goto L_08AC1804;
    return;
L_08AC1804:
    ctx.set_gpr(21, ctx.gpr[2] + 0u);
    goto L_08AC1808;
L_08AC1808:
    ctx.set_gpr(19, 0u + 0u);
    goto L_08AC180C;
L_08AC180C:
    ctx.set_gpr(4, rt.memory().aot_load32(ctx.gpr[17] + static_cast<std::uint32_t>(0)));
    if (ctx.gpr[4] == 0u) {
    ctx.set_gpr(19, ctx.gpr[19] + static_cast<std::uint32_t>(1));
        goto L_08AC1848;
    }
    goto L_08AC1818;
L_08AC1818:
    ctx.set_gpr(31, 0x08AC1820u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0004_entry, 4u, 508u, 0x08816764u>(ctx, &aot_mem) && ctx.pc == 0x08AC1820u) goto L_08AC1820;
    return;
L_08AC1820:
    ctx.set_gpr(31, 0x08AC1828u);
    ctx.set_gpr(4, ctx.gpr[2] + 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0174_entry, 174u, 673u, 0x08ABE808u>(ctx, &aot_mem) && ctx.pc == 0x08AC1828u) goto L_08AC1828;
    return;
L_08AC1828:
    ctx.set_gpr(2, ctx.gpr[2] + static_cast<std::uint32_t>(375));
    rt.memory().aot_store32(ctx.gpr[17] + static_cast<std::uint32_t>(4), ctx.gpr[2]);
    ctx.set_gpr(4, ctx.gpr[16] + 0u);
    ctx.set_gpr(31, 0x08AC183Cu);
    ctx.set_gpr(5, ctx.gpr[19] + 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0172_entry, 172u, 116u, 0x08AB47B4u>(ctx, &aot_mem) && ctx.pc == 0x08AC183Cu) goto L_08AC183C;
    return;
L_08AC183C:
    ctx.set_gpr(3, ctx.gpr[21] + ctx.gpr[2]);
    rt.memory().aot_store32(ctx.gpr[17] + static_cast<std::uint32_t>(8), ctx.gpr[3]);
    ctx.set_gpr(19, ctx.gpr[19] + static_cast<std::uint32_t>(1));
    goto L_08AC1848;
L_08AC1848:
    ctx.set_gpr(3, static_cast<std::int32_t>(ctx.gpr[19]) < 3 ? 1u : 0u);
    { const bool branch_taken = ctx.gpr[3] != 0u;
    ctx.set_gpr(17, ctx.gpr[17] + static_cast<std::uint32_t>(16));
      if (branch_taken) {
          goto L_08AC180C;
      }
      goto L_08AC1854;
    }
L_08AC1854:
    ctx.set_gpr(3, rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(64)));
    goto L_08AC1858;
L_08AC1858:
    ctx.set_gpr(22, ctx.gpr[22] + static_cast<std::uint32_t>(1));
    ctx.set_gpr(3, ctx.gpr[3] + static_cast<std::uint32_t>(48));
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(64), ctx.gpr[3]);
    ctx.set_gpr(3, rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(60)));
    ctx.set_gpr(3, ctx.gpr[3] + static_cast<std::uint32_t>(64));
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(60), ctx.gpr[3]);
    ctx.set_gpr(3, rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(56)));
    ctx.set_gpr(3, ctx.gpr[3] + static_cast<std::uint32_t>(4));
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(56), ctx.gpr[3]);
    ctx.set_gpr(3, static_cast<std::int32_t>(ctx.gpr[22]) < 2 ? 1u : 0u);
    { const bool branch_taken = ctx.gpr[3] != 0u;
    ctx.set_gpr(20, ctx.gpr[20] + static_cast<std::uint32_t>(32));
      if (branch_taken) {
          goto L_08AC15D0;
      }
      goto L_08AC1888;
    }
L_08AC1888:
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
    ctx.set_gpr(29, ctx.gpr[29] + static_cast<std::uint32_t>(144));
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_08AC18B8:
    ctx.set_gpr(2, ctx.gpr[6] << 2u);
    ctx.set_gpr(2, ctx.gpr[2] + ctx.gpr[6]);
    ctx.set_gpr(2, ctx.gpr[2] << 1u);
    ctx.set_gpr(2, ctx.gpr[2] + ctx.gpr[6]);
    ctx.set_gpr(2, ctx.gpr[2] << 1u);
    ctx.set_gpr(2, ctx.gpr[4] + ctx.gpr[2]);
    ctx.set_gpr(6, ctx.gpr[2] + static_cast<std::uint32_t>(27812));
    ctx.set_gpr(4, ctx.gpr[5] + 0u);
    ctx.set_gpr(6, ctx.gpr[6] + static_cast<std::uint32_t>(32760));
    ctx.set_gpr(5, 0u + static_cast<std::uint32_t>(176));
    (void)rt.invoke_chained_direct<&recomp_unit_0023_entry, 23u, 458u, 0x08861BE8u>(ctx, &aot_mem); return;
L_08AC18E4:
    ctx.set_gpr(29, ctx.gpr[29] + static_cast<std::uint32_t>(-16));
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(12), ctx.gpr[31]);
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(8), ctx.gpr[16]);
    ctx.set_gpr(16, ctx.gpr[4] + 0u);
    ctx.set_gpr(31, 0x08AC18FCu);
    ctx.set_gpr(4, ctx.gpr[16] + static_cast<std::uint32_t>(64));
    if (rt.invoke_chained_direct<&recomp_unit_0174_entry, 174u, 839u, 0x08ABF36Cu>(ctx, &aot_mem) && ctx.pc == 0x08AC18FCu) goto L_08AC18FC;
    return;
L_08AC18FC:
    ctx.set_gpr(2, ctx.gpr[2] & 255u);
    if (ctx.gpr[2] != 0u) {
    ctx.set_gpr(4, ctx.gpr[16] + static_cast<std::uint32_t>(64));
        goto L_08AC1910;
    }
    goto L_08AC1908;
L_08AC1908:
    { const bool branch_taken = 0u == 0u;
    ctx.set_gpr(2, 0u + static_cast<std::uint32_t>(1));
      if (branch_taken) {
          goto L_08AC19A8;
      }
      goto L_08AC1910;
    }
L_08AC1910:
    ctx.set_gpr(31, 0x08AC1918u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0172_entry, 172u, 133u, 0x08AB48A8u>(ctx, &aot_mem) && ctx.pc == 0x08AC1918u) goto L_08AC1918;
    return;
L_08AC1918:
    if (ctx.gpr[2] == 0u) {
    ctx.set_gpr(2, 2231u << 16u);
        goto L_08AC1930;
    }
    goto L_08AC1920;
L_08AC1920:
    ctx.set_gpr(31, 0x08AC1928u);
    ctx.set_gpr(4, ctx.gpr[16] + 0u);
    goto L_08AC19B8;
L_08AC1928:
    { const bool branch_taken = 0u == 0u;
    ctx.set_gpr(31, rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(12)));
      if (branch_taken) {
          goto L_08AC19AC;
      }
      goto L_08AC1930;
    }
L_08AC1930:
    ctx.fpr[2] = std::bit_cast<float>(rt.memory().aot_load32(ctx.gpr[2] + static_cast<std::uint32_t>(3580)));
    ctx.set_gpr(2, 2231u << 16u);
    ctx.fpr[1] = std::bit_cast<float>(rt.memory().aot_load32(ctx.gpr[2] + static_cast<std::uint32_t>(3584)));
    ctx.set_gpr(2, 2231u << 16u);
    ctx.fpr[0] = std::bit_cast<float>(rt.memory().aot_load32(ctx.gpr[2] + static_cast<std::uint32_t>(3588)));
    rt.memory().aot_store32(ctx.gpr[16] + static_cast<std::uint32_t>(12), std::bit_cast<std::uint32_t>(ctx.fpr[2]));
    rt.memory().aot_store32(ctx.gpr[16] + static_cast<std::uint32_t>(16), std::bit_cast<std::uint32_t>(ctx.fpr[1]));
    rt.memory().aot_store32(ctx.gpr[16] + static_cast<std::uint32_t>(20), std::bit_cast<std::uint32_t>(ctx.fpr[0]));
    ctx.set_gpr(2, rt.memory().aot_load8(ctx.gpr[16] + static_cast<std::uint32_t>(192)));
    if (ctx.gpr[2] == 0u) {
    ctx.set_gpr(3, 2233u << 16u);
        goto L_08AC1984;
    }
    goto L_08AC195C;
L_08AC195C:
    ctx.set_gpr(2, 2231u << 16u);
    ctx.fpr[2] = std::bit_cast<float>(rt.memory().aot_load32(ctx.gpr[2] + static_cast<std::uint32_t>(3592)));
    ctx.set_gpr(2, 2231u << 16u);
    ctx.fpr[1] = std::bit_cast<float>(rt.memory().aot_load32(ctx.gpr[2] + static_cast<std::uint32_t>(3596)));
    ctx.set_gpr(2, 2231u << 16u);
    ctx.fpr[0] = std::bit_cast<float>(rt.memory().aot_load32(ctx.gpr[2] + static_cast<std::uint32_t>(3600)));
    rt.memory().aot_store32(ctx.gpr[16] + static_cast<std::uint32_t>(24), std::bit_cast<std::uint32_t>(ctx.fpr[2]));
    rt.memory().aot_store32(ctx.gpr[16] + static_cast<std::uint32_t>(28), std::bit_cast<std::uint32_t>(ctx.fpr[1]));
    { const bool branch_taken = 0u == 0u;
    rt.memory().aot_store32(ctx.gpr[16] + static_cast<std::uint32_t>(32), std::bit_cast<std::uint32_t>(ctx.fpr[0]));
      if (branch_taken) {
          goto L_08AC19A4;
      }
      goto L_08AC1984;
    }
L_08AC1984:
    ctx.set_gpr(3, ctx.gpr[3] + static_cast<std::uint32_t>(8516));
    ctx.set_gpr(2, 2233u << 16u);
    ctx.fpr[2] = std::bit_cast<float>(rt.memory().aot_load32(ctx.gpr[2] + static_cast<std::uint32_t>(8516)));
    ctx.fpr[1] = std::bit_cast<float>(rt.memory().aot_load32(ctx.gpr[3] + static_cast<std::uint32_t>(4)));
    ctx.fpr[0] = std::bit_cast<float>(rt.memory().aot_load32(ctx.gpr[3] + static_cast<std::uint32_t>(8)));
    rt.memory().aot_store32(ctx.gpr[16] + static_cast<std::uint32_t>(24), std::bit_cast<std::uint32_t>(ctx.fpr[2]));
    rt.memory().aot_store32(ctx.gpr[16] + static_cast<std::uint32_t>(28), std::bit_cast<std::uint32_t>(ctx.fpr[1]));
    rt.memory().aot_store32(ctx.gpr[16] + static_cast<std::uint32_t>(32), std::bit_cast<std::uint32_t>(ctx.fpr[0]));
    goto L_08AC19A4;
L_08AC19A4:
    ctx.set_gpr(2, 0u + static_cast<std::uint32_t>(1));
    goto L_08AC19A8;
L_08AC19A8:
    ctx.set_gpr(31, rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(12)));
    goto L_08AC19AC;
L_08AC19AC:
    ctx.set_gpr(16, rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(8)));
    jump_target = ctx.gpr[31];
    ctx.set_gpr(29, ctx.gpr[29] + static_cast<std::uint32_t>(16));
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_08AC19B8:
    ctx.set_gpr(29, ctx.gpr[29] + static_cast<std::uint32_t>(-16));
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(12), ctx.gpr[31]);
    ctx.set_gpr(4, rt.memory().aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(4)));
    ctx.set_gpr(31, 0x08AC19CCu);
    ctx.set_gpr(5, 0u + static_cast<std::uint32_t>(1));
    if (rt.invoke_chained_direct<&recomp_unit_0170_entry, 170u, 526u, 0x08AAE2D8u>(ctx, &aot_mem) && ctx.pc == 0x08AC19CCu) goto L_08AC19CC;
    return;
L_08AC19CC:
    ctx.set_gpr(31, rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(12)));
    ctx.set_gpr(2, 0u + static_cast<std::uint32_t>(1));
    jump_target = ctx.gpr[31];
    ctx.set_gpr(29, ctx.gpr[29] + static_cast<std::uint32_t>(16));
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_08AC19DC:
    ctx.set_gpr(29, ctx.gpr[29] + static_cast<std::uint32_t>(-32));
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(28), ctx.gpr[31]);
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(24), ctx.gpr[20]);
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(20), ctx.gpr[19]);
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(16), ctx.gpr[18]);
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(12), ctx.gpr[17]);
    ctx.set_gpr(19, ctx.gpr[4] + 0u);
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(8), ctx.gpr[16]);
    ctx.set_gpr(25, rt.memory().aot_load32(ctx.gpr[19] + static_cast<std::uint32_t>(60)));
    ctx.set_gpr(18, ctx.gpr[5] + 0u);
    ctx.set_gpr(25, rt.memory().aot_load32(ctx.gpr[25] + static_cast<std::uint32_t>(20)));
    jump_target = ctx.gpr[25];
    ctx.set_gpr(31, 0x08AC1A10u);
    ctx.set_gpr(4, ctx.gpr[19] + static_cast<std::uint32_t>(36));
    ctx.pc = jump_target;
    if (rt.invoke_chained_call(ctx, &aot_mem) && ctx.pc == 0x08AC1A10u) goto L_08AC1A10;
    return;
L_08AC1A10:
    ctx.set_gpr(31, 0x08AC1A18u);
    ctx.set_gpr(16, ctx.gpr[2] + 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0017_entry, 17u, 191u, 0x08848C84u>(ctx, &aot_mem) && ctx.pc == 0x08AC1A18u) goto L_08AC1A18;
    return;
L_08AC1A18:
    ctx.set_gpr(31, 0x08AC1A20u);
    ctx.set_gpr(4, ctx.gpr[2] + 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0174_entry, 174u, 990u, 0x08ABFC78u>(ctx, &aot_mem) && ctx.pc == 0x08AC1A20u) goto L_08AC1A20;
    return;
L_08AC1A20:
    ctx.set_gpr(17, ctx.gpr[2] + 0u);
    ctx.set_gpr(31, 0x08AC1A2Cu);
    ctx.set_gpr(4, ctx.gpr[17] + 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0024_entry, 24u, 826u, 0x08866984u>(ctx, &aot_mem) && ctx.pc == 0x08AC1A2Cu) goto L_08AC1A2C;
    return;
L_08AC1A2C:
    ctx.set_gpr(20, ctx.gpr[2] + 0u);
    ctx.set_gpr(4, ctx.gpr[17] + 0u);
    ctx.set_gpr(31, 0x08AC1A3Cu);
    ctx.set_gpr(5, ctx.gpr[20] + 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0159_entry, 159u, 401u, 0x08A81268u>(ctx, &aot_mem) && ctx.pc == 0x08AC1A3Cu) goto L_08AC1A3C;
    return;
L_08AC1A3C:
    ctx.set_gpr(3, rt.memory().aot_load32(ctx.gpr[19] + static_cast<std::uint32_t>(184)));
    { const bool branch_taken = ctx.gpr[3] == ctx.gpr[20];
    // nop
      if (branch_taken) {
          goto L_08AC1A5C;
      }
      goto L_08AC1A48;
    }
L_08AC1A48:
    ctx.set_gpr(7, rt.memory().aot_load32(ctx.gpr[2] + static_cast<std::uint32_t>(12)));
    ctx.set_gpr(6, ctx.gpr[20] + 0u);
    ctx.set_gpr(4, ctx.gpr[19] + 0u);
    ctx.set_gpr(31, 0x08AC1A5Cu);
    ctx.set_gpr(5, ctx.gpr[17] + 0u);
    goto L_08AC14F4;
L_08AC1A5C:
    if (ctx.gpr[16] != 0u) {
    ctx.set_gpr(2, 0u + static_cast<std::uint32_t>(5));
        goto L_08AC1A6C;
    }
    goto L_08AC1A64;
L_08AC1A64:
    { const bool branch_taken = 0u == 0u;
    ctx.set_gpr(2, 0u + static_cast<std::uint32_t>(1));
      if (branch_taken) {
          goto L_08AC1BF8;
      }
      goto L_08AC1A6C;
    }
L_08AC1A6C:
    if (ctx.gpr[16] == ctx.gpr[2]) {
    ctx.set_gpr(2, rt.memory().aot_load8(ctx.gpr[19] + static_cast<std::uint32_t>(192)));
        goto L_08AC1B84;
    }
    goto L_08AC1A74;
L_08AC1A74:
    ctx.set_gpr(2, 0u + static_cast<std::uint32_t>(2));
    if (ctx.gpr[16] == ctx.gpr[2]) {
    ctx.set_gpr(2, rt.memory().aot_load8(ctx.gpr[19] + static_cast<std::uint32_t>(192)));
        goto L_08AC1B28;
    }
    goto L_08AC1A80;
L_08AC1A80:
    ctx.set_gpr(2, 0u + static_cast<std::uint32_t>(1));
    if (ctx.gpr[16] == ctx.gpr[2]) {
    ctx.set_gpr(4, ctx.gpr[17] + 0u);
        goto L_08AC1A94;
    }
    goto L_08AC1A8C;
L_08AC1A8C:
    { const bool branch_taken = 0u == 0u;
    ctx.set_gpr(2, 0u + static_cast<std::uint32_t>(1));
      if (branch_taken) {
          goto L_08AC1BF8;
      }
      goto L_08AC1A94;
    }
L_08AC1A94:
    ctx.set_gpr(31, 0x08AC1A9Cu);
    ctx.set_gpr(5, 0u + 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0187_entry, 187u, 664u, 0x08AF2ACCu>(ctx, &aot_mem) && ctx.pc == 0x08AC1A9Cu) goto L_08AC1A9C;
    return;
L_08AC1A9C:
    ctx.set_gpr(6, rt.memory().aot_load32(ctx.gpr[19] + static_cast<std::uint32_t>(184)));
    ctx.set_gpr(7, rt.memory().aot_load32(ctx.gpr[19] + static_cast<std::uint32_t>(188)));
    ctx.set_gpr(5, ctx.gpr[17] + 0u);
    ctx.set_gpr(31, 0x08AC1AB0u);
    ctx.set_gpr(4, ctx.gpr[19] + static_cast<std::uint32_t>(36));
    goto L_08AC1C18;
L_08AC1AB0:
    ctx.set_gpr(2, 0u + static_cast<std::uint32_t>(1));
    rt.memory().aot_store8(ctx.gpr[19] + static_cast<std::uint32_t>(192), static_cast<std::uint8_t>(ctx.gpr[2]));
    ctx.set_gpr(5, rt.memory().aot_load8(ctx.gpr[19] + static_cast<std::uint32_t>(192)));
    ctx.fpr[12] = std::bit_cast<float>(0u);
    ctx.set_gpr(31, 0x08AC1AC8u);
    ctx.set_gpr(4, ctx.gpr[19] + static_cast<std::uint32_t>(80));
    if (rt.invoke_chained_direct<&recomp_unit_0174_entry, 174u, 575u, 0x08ABE150u>(ctx, &aot_mem) && ctx.pc == 0x08AC1AC8u) goto L_08AC1AC8;
    return;
L_08AC1AC8:
    ctx.set_gpr(6, 2231u << 16u);
    ctx.set_gpr(4, ctx.gpr[19] + static_cast<std::uint32_t>(80));
    ctx.set_gpr(5, 0u + static_cast<std::uint32_t>(1));
    ctx.set_gpr(31, 0x08AC1ADCu);
    ctx.set_gpr(6, ctx.gpr[6] + static_cast<std::uint32_t>(3664));
    if (rt.invoke_chained_direct<&recomp_unit_0174_entry, 174u, 648u, 0x08ABE660u>(ctx, &aot_mem) && ctx.pc == 0x08AC1ADCu) goto L_08AC1ADC;
    return;
L_08AC1ADC:
    ctx.set_gpr(2, 2231u << 16u);
    ctx.fpr[2] = std::bit_cast<float>(rt.memory().aot_load32(ctx.gpr[2] + static_cast<std::uint32_t>(3604)));
    ctx.set_gpr(3, 2231u << 16u);
    ctx.set_gpr(2, 2231u << 16u);
    ctx.fpr[1] = std::bit_cast<float>(rt.memory().aot_load32(ctx.gpr[2] + static_cast<std::uint32_t>(3608)));
    ctx.set_gpr(2, 2231u << 16u);
    ctx.fpr[0] = std::bit_cast<float>(rt.memory().aot_load32(ctx.gpr[2] + static_cast<std::uint32_t>(3612)));
    rt.memory().aot_store32(ctx.gpr[19] + static_cast<std::uint32_t>(12), std::bit_cast<std::uint32_t>(ctx.fpr[2]));
    rt.memory().aot_store32(ctx.gpr[19] + static_cast<std::uint32_t>(16), std::bit_cast<std::uint32_t>(ctx.fpr[1]));
    rt.memory().aot_store32(ctx.gpr[19] + static_cast<std::uint32_t>(20), std::bit_cast<std::uint32_t>(ctx.fpr[0]));
    ctx.set_gpr(2, 2231u << 16u);
    ctx.fpr[1] = std::bit_cast<float>(rt.memory().aot_load32(ctx.gpr[2] + static_cast<std::uint32_t>(3620)));
    ctx.fpr[2] = std::bit_cast<float>(rt.memory().aot_load32(ctx.gpr[3] + static_cast<std::uint32_t>(3616)));
    ctx.set_gpr(2, 2231u << 16u);
    ctx.fpr[0] = std::bit_cast<float>(rt.memory().aot_load32(ctx.gpr[2] + static_cast<std::uint32_t>(3624)));
    rt.memory().aot_store32(ctx.gpr[19] + static_cast<std::uint32_t>(24), std::bit_cast<std::uint32_t>(ctx.fpr[2]));
    rt.memory().aot_store32(ctx.gpr[19] + static_cast<std::uint32_t>(28), std::bit_cast<std::uint32_t>(ctx.fpr[1]));
    { const bool branch_taken = 0u == 0u;
    rt.memory().aot_store32(ctx.gpr[19] + static_cast<std::uint32_t>(32), std::bit_cast<std::uint32_t>(ctx.fpr[0]));
      if (branch_taken) {
          goto L_08AC1BF4;
      }
      goto L_08AC1B28;
    }
L_08AC1B28:
    if (ctx.gpr[2] == 0u) {
    ctx.set_gpr(4, ctx.gpr[19] + static_cast<std::uint32_t>(64));
        goto L_08AC1B4C;
    }
    goto L_08AC1B30;
L_08AC1B30:
    ctx.set_gpr(4, ctx.gpr[19] + static_cast<std::uint32_t>(64));
    ctx.set_gpr(5, 0u + 0u);
    ctx.set_gpr(6, ctx.gpr[19] + static_cast<std::uint32_t>(80));
    ctx.set_gpr(31, 0x08AC1B44u);
    ctx.set_gpr(7, 0u + 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0174_entry, 174u, 831u, 0x08ABF318u>(ctx, &aot_mem) && ctx.pc == 0x08AC1B44u) goto L_08AC1B44;
    return;
L_08AC1B44:
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_08AC1B5C;
      }
      goto L_08AC1B4C;
    }
L_08AC1B4C:
    ctx.set_gpr(5, 0u + 0u);
    ctx.set_gpr(6, 0u + 0u);
    ctx.set_gpr(31, 0x08AC1B5Cu);
    ctx.set_gpr(7, 0u + 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0174_entry, 174u, 831u, 0x08ABF318u>(ctx, &aot_mem) && ctx.pc == 0x08AC1B5Cu) goto L_08AC1B5C;
    return;
L_08AC1B5C:
    ctx.set_gpr(2, 2231u << 16u);
    ctx.fpr[2] = std::bit_cast<float>(rt.memory().aot_load32(ctx.gpr[2] + static_cast<std::uint32_t>(3628)));
    ctx.set_gpr(2, 2231u << 16u);
    ctx.fpr[1] = std::bit_cast<float>(rt.memory().aot_load32(ctx.gpr[2] + static_cast<std::uint32_t>(3632)));
    ctx.set_gpr(2, 2231u << 16u);
    ctx.fpr[0] = std::bit_cast<float>(rt.memory().aot_load32(ctx.gpr[2] + static_cast<std::uint32_t>(3636)));
    rt.memory().aot_store32(ctx.gpr[19] + static_cast<std::uint32_t>(12), std::bit_cast<std::uint32_t>(ctx.fpr[2]));
    rt.memory().aot_store32(ctx.gpr[19] + static_cast<std::uint32_t>(16), std::bit_cast<std::uint32_t>(ctx.fpr[1]));
    { const bool branch_taken = 0u == 0u;
    rt.memory().aot_store32(ctx.gpr[19] + static_cast<std::uint32_t>(20), std::bit_cast<std::uint32_t>(ctx.fpr[0]));
      if (branch_taken) {
          goto L_08AC1BF4;
      }
      goto L_08AC1B84;
    }
L_08AC1B84:
    ctx.set_gpr(4, ctx.gpr[19] + static_cast<std::uint32_t>(64));
    ctx.set_gpr(6, ctx.gpr[19] + static_cast<std::uint32_t>(80));
    ctx.set_gpr(2, ctx.gpr[2] ^ 1u);
    rt.memory().aot_store8(ctx.gpr[19] + static_cast<std::uint32_t>(192), static_cast<std::uint8_t>(ctx.gpr[2]));
    ctx.set_gpr(5, rt.memory().aot_load8(ctx.gpr[19] + static_cast<std::uint32_t>(192)));
    ctx.set_gpr(31, 0x08AC1BA0u);
    ctx.set_gpr(7, 0u + static_cast<std::uint32_t>(1));
    if (rt.invoke_chained_direct<&recomp_unit_0174_entry, 174u, 831u, 0x08ABF318u>(ctx, &aot_mem) && ctx.pc == 0x08AC1BA0u) goto L_08AC1BA0;
    return;
L_08AC1BA0:
    ctx.set_gpr(5, ctx.gpr[18] + 0u);
    ctx.set_gpr(31, 0x08AC1BACu);
    ctx.set_gpr(4, ctx.gpr[19] + static_cast<std::uint32_t>(64));
    if (rt.invoke_chained_direct<&recomp_unit_0174_entry, 174u, 839u, 0x08ABF36Cu>(ctx, &aot_mem) && ctx.pc == 0x08AC1BACu) goto L_08AC1BAC;
    return;
L_08AC1BAC:
    ctx.set_gpr(2, 2231u << 16u);
    ctx.fpr[2] = std::bit_cast<float>(rt.memory().aot_load32(ctx.gpr[2] + static_cast<std::uint32_t>(3640)));
    ctx.set_gpr(3, 2231u << 16u);
    ctx.set_gpr(2, 2231u << 16u);
    ctx.fpr[1] = std::bit_cast<float>(rt.memory().aot_load32(ctx.gpr[2] + static_cast<std::uint32_t>(3644)));
    ctx.set_gpr(2, 2231u << 16u);
    ctx.fpr[0] = std::bit_cast<float>(rt.memory().aot_load32(ctx.gpr[2] + static_cast<std::uint32_t>(3648)));
    rt.memory().aot_store32(ctx.gpr[19] + static_cast<std::uint32_t>(12), std::bit_cast<std::uint32_t>(ctx.fpr[2]));
    rt.memory().aot_store32(ctx.gpr[19] + static_cast<std::uint32_t>(16), std::bit_cast<std::uint32_t>(ctx.fpr[1]));
    rt.memory().aot_store32(ctx.gpr[19] + static_cast<std::uint32_t>(20), std::bit_cast<std::uint32_t>(ctx.fpr[0]));
    ctx.set_gpr(2, 2231u << 16u);
    ctx.fpr[1] = std::bit_cast<float>(rt.memory().aot_load32(ctx.gpr[2] + static_cast<std::uint32_t>(3656)));
    ctx.fpr[2] = std::bit_cast<float>(rt.memory().aot_load32(ctx.gpr[3] + static_cast<std::uint32_t>(3652)));
    ctx.set_gpr(2, 2231u << 16u);
    ctx.fpr[0] = std::bit_cast<float>(rt.memory().aot_load32(ctx.gpr[2] + static_cast<std::uint32_t>(3660)));
    rt.memory().aot_store32(ctx.gpr[19] + static_cast<std::uint32_t>(24), std::bit_cast<std::uint32_t>(ctx.fpr[2]));
    rt.memory().aot_store32(ctx.gpr[19] + static_cast<std::uint32_t>(28), std::bit_cast<std::uint32_t>(ctx.fpr[1]));
    rt.memory().aot_store32(ctx.gpr[19] + static_cast<std::uint32_t>(32), std::bit_cast<std::uint32_t>(ctx.fpr[0]));
    goto L_08AC1BF4;
L_08AC1BF4:
    ctx.set_gpr(2, 0u + static_cast<std::uint32_t>(1));
    goto L_08AC1BF8;
L_08AC1BF8:
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
L_08AC1C18:
    ctx.set_gpr(29, ctx.gpr[29] + static_cast<std::uint32_t>(-32));
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(28), ctx.gpr[31]);
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(24), ctx.gpr[19]);
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(20), ctx.gpr[18]);
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(16), ctx.gpr[17]);
    ctx.set_gpr(19, ctx.gpr[5] + 0u);
    ctx.set_gpr(18, ctx.gpr[6] + 0u);
    ctx.set_gpr(17, ctx.gpr[7] + 0u);
    ctx.set_gpr(31, 0x08AC1C40u);
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(12), ctx.gpr[16]);
    if (rt.invoke_chained_direct<&recomp_unit_0017_entry, 17u, 182u, 0x08848C18u>(ctx, &aot_mem) && ctx.pc == 0x08AC1C40u) goto L_08AC1C40;
    return;
L_08AC1C40:
    ctx.set_gpr(31, 0x08AC1C48u);
    ctx.set_gpr(4, ctx.gpr[2] + 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0016_entry, 16u, 633u, 0x08847AC0u>(ctx, &aot_mem) && ctx.pc == 0x08AC1C48u) goto L_08AC1C48;
    return;
L_08AC1C48:
    ctx.set_gpr(16, ctx.gpr[2] + 0u);
    ctx.set_gpr(4, ctx.gpr[19] + 0u);
    ctx.set_gpr(5, ctx.gpr[18] + 0u);
    ctx.set_gpr(6, 0u + static_cast<std::uint32_t>(2));
    ctx.set_gpr(31, 0x08AC1C60u);
    ctx.set_gpr(7, 0u + 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0187_entry, 187u, 639u, 0x08AF28A4u>(ctx, &aot_mem) && ctx.pc == 0x08AC1C60u) goto L_08AC1C60;
    return;
L_08AC1C60:
    ctx.set_gpr(5, ctx.gpr[17] + static_cast<std::uint32_t>(122));
    ctx.set_gpr(4, ctx.gpr[16] + 0u);
    ctx.set_gpr(31, 0x08AC1C70u);
    ctx.set_gpr(6, 0u + 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0023_entry, 23u, 369u, 0x08861750u>(ctx, &aot_mem) && ctx.pc == 0x08AC1C70u) goto L_08AC1C70;
    return;
L_08AC1C70:
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
L_08AC1C8C:
    ctx.set_gpr(29, ctx.gpr[29] + static_cast<std::uint32_t>(-32));
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(28), ctx.gpr[31]);
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(24), ctx.gpr[21]);
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(20), ctx.gpr[20]);
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(16), ctx.gpr[19]);
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(12), ctx.gpr[18]);
    ctx.set_gpr(21, ctx.gpr[4] + 0u);
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(8), ctx.gpr[17]);
    ctx.set_gpr(20, ctx.gpr[5] + 0u);
    ctx.set_gpr(4, ctx.gpr[21] + static_cast<std::uint32_t>(80));
    ctx.set_gpr(31, 0x08AC1CBCu);
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(4), ctx.gpr[16]);
    if (rt.invoke_chained_direct<&recomp_unit_0172_entry, 172u, 211u, 0x08AB4D10u>(ctx, &aot_mem) && ctx.pc == 0x08AC1CBCu) goto L_08AC1CBC;
    return;
L_08AC1CBC:
    ctx.set_gpr(2, 16256u << 16u);
    ctx.fpr[12] = std::bit_cast<float>(ctx.gpr[2]);
    ctx.set_fpr_bits(15, ctx.fpr_bits(0));
    ctx.set_fpr_bits(13, ctx.fpr_bits(12));
    ctx.set_gpr(31, 0x08AC1CD4u);
    ctx.set_fpr_bits(14, ctx.fpr_bits(12));
    if (rt.invoke_chained_direct<&recomp_unit_0019_entry, 19u, 568u, 0x08852084u>(ctx, &aot_mem) && ctx.pc == 0x08AC1CD4u) goto L_08AC1CD4;
    return;
L_08AC1CD4:
    ctx.set_gpr(19, 0u + 0u);
    ctx.set_gpr(17, ctx.gpr[21] + 0u);
    goto L_08AC1CDC;
L_08AC1CDC:
    ctx.set_gpr(18, 0u + 0u);
    ctx.set_gpr(16, ctx.gpr[17] + 0u);
    goto L_08AC1CE4;
L_08AC1CE4:
    ctx.set_gpr(7, rt.memory().aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(196)));
    { const bool branch_taken = ctx.gpr[7] == 0u;
    ctx.set_gpr(2, ctx.gpr[16] + static_cast<std::uint32_t>(196));
      if (branch_taken) {
          goto L_08AC1D04;
      }
      goto L_08AC1CF0;
    }
L_08AC1CF0:
    ctx.set_gpr(4, rt.memory().aot_load32(ctx.gpr[2] + static_cast<std::uint32_t>(4)));
    ctx.set_gpr(6, 2231u << 16u);
    ctx.set_gpr(5, rt.memory().aot_load32(ctx.gpr[2] + static_cast<std::uint32_t>(8)));
    ctx.set_gpr(31, 0x08AC1D04u);
    ctx.set_gpr(6, ctx.gpr[6] + static_cast<std::uint32_t>(2964));
    if (rt.invoke_chained_direct<&recomp_unit_0019_entry, 19u, 527u, 0x08851CD8u>(ctx, &aot_mem) && ctx.pc == 0x08AC1D04u) goto L_08AC1D04;
    return;
L_08AC1D04:
    ctx.set_gpr(18, ctx.gpr[18] + static_cast<std::uint32_t>(1));
    ctx.set_gpr(2, static_cast<std::int32_t>(ctx.gpr[18]) < 3 ? 1u : 0u);
    { const bool branch_taken = ctx.gpr[2] != 0u;
    ctx.set_gpr(16, ctx.gpr[16] + static_cast<std::uint32_t>(16));
      if (branch_taken) {
          goto L_08AC1CE4;
      }
      goto L_08AC1D14;
    }
L_08AC1D14:
    ctx.set_gpr(19, ctx.gpr[19] + static_cast<std::uint32_t>(1));
    ctx.set_gpr(2, static_cast<std::int32_t>(ctx.gpr[19]) < 2 ? 1u : 0u);
    { const bool branch_taken = ctx.gpr[2] != 0u;
    ctx.set_gpr(17, ctx.gpr[17] + static_cast<std::uint32_t>(48));
      if (branch_taken) {
          goto L_08AC1CDC;
      }
      goto L_08AC1D24;
    }
L_08AC1D24:
    ctx.set_gpr(2, 16256u << 16u);
    ctx.fpr[12] = std::bit_cast<float>(ctx.gpr[2]);
    ctx.set_fpr_bits(13, ctx.fpr_bits(12));
    ctx.set_fpr_bits(14, ctx.fpr_bits(12));
    ctx.set_gpr(31, 0x08AC1D3Cu);
    ctx.set_fpr_bits(15, ctx.fpr_bits(12));
    if (rt.invoke_chained_direct<&recomp_unit_0019_entry, 19u, 568u, 0x08852084u>(ctx, &aot_mem) && ctx.pc == 0x08AC1D3Cu) goto L_08AC1D3C;
    return;
L_08AC1D3C:
    ctx.set_gpr(4, ctx.gpr[21] + static_cast<std::uint32_t>(80));
    ctx.set_gpr(31, 0x08AC1D48u);
    ctx.set_gpr(5, ctx.gpr[20] + 0u);
    goto L_08AC0914;
L_08AC1D48:
    ctx.set_gpr(31, rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(28)));
    ctx.set_gpr(21, rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(24)));
    ctx.set_gpr(20, rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(20)));
    ctx.set_gpr(19, rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(16)));
    ctx.set_gpr(18, rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(12)));
    ctx.set_gpr(17, rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(8)));
    ctx.set_gpr(16, rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(4)));
    ctx.set_gpr(2, 0u + static_cast<std::uint32_t>(1));
    jump_target = ctx.gpr[31];
    ctx.set_gpr(29, ctx.gpr[29] + static_cast<std::uint32_t>(32));
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_08AC1D70:
    ctx.set_gpr(29, ctx.gpr[29] + static_cast<std::uint32_t>(-16));
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(12), ctx.gpr[31]);
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(8), ctx.gpr[17]);
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(4), ctx.gpr[16]);
    ctx.set_gpr(16, ctx.gpr[4] + 0u);
    ctx.set_gpr(31, 0x08AC1D8Cu);
    ctx.set_gpr(17, 0u + 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0017_entry, 17u, 179u, 0x08848BF4u>(ctx, &aot_mem) && ctx.pc == 0x08AC1D8Cu) goto L_08AC1D8C;
    return;
L_08AC1D8C:
    ctx.set_gpr(4, ctx.gpr[2] + 0u);
    ctx.set_gpr(31, 0x08AC1D98u);
    ctx.set_gpr(5, 0u + static_cast<std::uint32_t>(7));
    if (rt.invoke_chained_direct<&recomp_unit_0017_entry, 17u, 914u, 0x0884B680u>(ctx, &aot_mem) && ctx.pc == 0x08AC1D98u) goto L_08AC1D98;
    return;
L_08AC1D98:
    { const bool branch_taken = ctx.gpr[2] == 0u;
    // nop
      if (branch_taken) {
          goto L_08AC1E38;
      }
      goto L_08AC1DA0;
    }
L_08AC1DA0:
    ctx.set_gpr(31, 0x08AC1DA8u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0017_entry, 17u, 185u, 0x08848C3Cu>(ctx, &aot_mem) && ctx.pc == 0x08AC1DA8u) goto L_08AC1DA8;
    return;
L_08AC1DA8:
    ctx.set_gpr(4, ctx.gpr[2] + 0u);
    ctx.set_gpr(5, 0u + static_cast<std::uint32_t>(1));
    ctx.set_gpr(6, 0u + 0u);
    ctx.set_gpr(31, 0x08AC1DBCu);
    ctx.set_gpr(7, 0u + 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0171_entry, 171u, 403u, 0x08AB179Cu>(ctx, &aot_mem) && ctx.pc == 0x08AC1DBCu) goto L_08AC1DBC;
    return;
L_08AC1DBC:
    ctx.set_gpr(5, rt.memory().aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(188)));
    ctx.set_gpr(31, 0x08AC1DC8u);
    ctx.set_gpr(4, ctx.gpr[16] + 0u);
    goto L_08AC1EE4;
L_08AC1DC8:
    ctx.set_gpr(2, ctx.gpr[2] & 255u);
    if (ctx.gpr[2] == 0u) {
    ctx.set_gpr(17, 0u + static_cast<std::uint32_t>(1));
        goto L_08AC1E74;
    }
    goto L_08AC1DD4;
L_08AC1DD4:
    ctx.set_gpr(31, 0x08AC1DDCu);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0017_entry, 17u, 191u, 0x08848C84u>(ctx, &aot_mem) && ctx.pc == 0x08AC1DDCu) goto L_08AC1DDC;
    return;
L_08AC1DDC:
    ctx.set_gpr(31, 0x08AC1DE4u);
    ctx.set_gpr(4, ctx.gpr[2] + 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0174_entry, 174u, 990u, 0x08ABFC78u>(ctx, &aot_mem) && ctx.pc == 0x08AC1DE4u) goto L_08AC1DE4;
    return;
L_08AC1DE4:
    ctx.set_gpr(25, rt.memory().aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(60)));
    ctx.set_gpr(6, rt.memory().aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(184)));
    ctx.set_gpr(5, ctx.gpr[2] + 0u);
    ctx.set_gpr(25, rt.memory().aot_load32(ctx.gpr[25] + static_cast<std::uint32_t>(24)));
    jump_target = ctx.gpr[25];
    ctx.set_gpr(31, 0x08AC1DFCu);
    ctx.set_gpr(4, ctx.gpr[16] + static_cast<std::uint32_t>(36));
    ctx.pc = jump_target;
    if (rt.invoke_chained_call(ctx, &aot_mem) && ctx.pc == 0x08AC1DFCu) goto L_08AC1DFC;
    return;
L_08AC1DFC:
    ctx.set_gpr(4, ctx.gpr[16] + static_cast<std::uint32_t>(80));
    ctx.set_gpr(5, 0u + 0u);
    ctx.set_gpr(31, 0x08AC1E0Cu);
    ctx.set_gpr(6, 0u + 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0174_entry, 174u, 648u, 0x08ABE660u>(ctx, &aot_mem) && ctx.pc == 0x08AC1E0Cu) goto L_08AC1E0C;
    return;
L_08AC1E0C:
    ctx.set_gpr(2, 2231u << 16u);
    ctx.fpr[2] = std::bit_cast<float>(rt.memory().aot_load32(ctx.gpr[2] + static_cast<std::uint32_t>(3672)));
    ctx.set_gpr(2, 2231u << 16u);
    ctx.fpr[1] = std::bit_cast<float>(rt.memory().aot_load32(ctx.gpr[2] + static_cast<std::uint32_t>(3676)));
    ctx.set_gpr(2, 2231u << 16u);
    ctx.fpr[0] = std::bit_cast<float>(rt.memory().aot_load32(ctx.gpr[2] + static_cast<std::uint32_t>(3680)));
    rt.memory().aot_store32(ctx.gpr[16] + static_cast<std::uint32_t>(12), std::bit_cast<std::uint32_t>(ctx.fpr[2]));
    rt.memory().aot_store32(ctx.gpr[16] + static_cast<std::uint32_t>(16), std::bit_cast<std::uint32_t>(ctx.fpr[1]));
    ctx.set_gpr(2, 0u + static_cast<std::uint32_t>(1));
    { const bool branch_taken = 0u == 0u;
    rt.memory().aot_store32(ctx.gpr[16] + static_cast<std::uint32_t>(20), std::bit_cast<std::uint32_t>(ctx.fpr[0]));
      if (branch_taken) {
          goto L_08AC1ED0;
      }
      goto L_08AC1E38;
    }
L_08AC1E38:
    ctx.set_gpr(31, 0x08AC1E40u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0017_entry, 17u, 179u, 0x08848BF4u>(ctx, &aot_mem) && ctx.pc == 0x08AC1E40u) goto L_08AC1E40;
    return;
L_08AC1E40:
    ctx.set_gpr(4, ctx.gpr[2] + 0u);
    ctx.set_gpr(31, 0x08AC1E4Cu);
    ctx.set_gpr(5, 0u + static_cast<std::uint32_t>(8));
    if (rt.invoke_chained_direct<&recomp_unit_0017_entry, 17u, 914u, 0x0884B680u>(ctx, &aot_mem) && ctx.pc == 0x08AC1E4Cu) goto L_08AC1E4C;
    return;
L_08AC1E4C:
    { const bool branch_taken = ctx.gpr[2] == 0u;
    // nop
      if (branch_taken) {
          goto L_08AC1E74;
      }
      goto L_08AC1E54;
    }
L_08AC1E54:
    ctx.set_gpr(31, 0x08AC1E5Cu);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0017_entry, 17u, 185u, 0x08848C3Cu>(ctx, &aot_mem) && ctx.pc == 0x08AC1E5Cu) goto L_08AC1E5C;
    return;
L_08AC1E5C:
    ctx.set_gpr(4, ctx.gpr[2] + 0u);
    ctx.set_gpr(5, 0u + static_cast<std::uint32_t>(2));
    ctx.set_gpr(6, 0u + 0u);
    ctx.set_gpr(31, 0x08AC1E70u);
    ctx.set_gpr(7, 0u + 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0171_entry, 171u, 403u, 0x08AB179Cu>(ctx, &aot_mem) && ctx.pc == 0x08AC1E70u) goto L_08AC1E70;
    return;
L_08AC1E70:
    ctx.set_gpr(17, 0u + static_cast<std::uint32_t>(1));
    goto L_08AC1E74;
L_08AC1E74:
    if (ctx.gpr[17] == 0u) {
    ctx.set_gpr(2, 0u + static_cast<std::uint32_t>(1));
        goto L_08AC1ED0;
    }
    goto L_08AC1E7C;
L_08AC1E7C:
    ctx.set_gpr(31, 0x08AC1E84u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0017_entry, 17u, 191u, 0x08848C84u>(ctx, &aot_mem) && ctx.pc == 0x08AC1E84u) goto L_08AC1E84;
    return;
L_08AC1E84:
    ctx.set_gpr(31, 0x08AC1E8Cu);
    ctx.set_gpr(4, ctx.gpr[2] + 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0174_entry, 174u, 990u, 0x08ABFC78u>(ctx, &aot_mem) && ctx.pc == 0x08AC1E8Cu) goto L_08AC1E8C;
    return;
L_08AC1E8C:
    ctx.set_gpr(4, ctx.gpr[2] + 0u);
    ctx.set_gpr(31, 0x08AC1E98u);
    ctx.set_gpr(5, 0u + static_cast<std::uint32_t>(1));
    if (rt.invoke_chained_direct<&recomp_unit_0187_entry, 187u, 664u, 0x08AF2ACCu>(ctx, &aot_mem) && ctx.pc == 0x08AC1E98u) goto L_08AC1E98;
    return;
L_08AC1E98:
    ctx.set_gpr(4, ctx.gpr[16] + static_cast<std::uint32_t>(80));
    ctx.set_gpr(5, 0u + 0u);
    ctx.set_gpr(31, 0x08AC1EA8u);
    ctx.set_gpr(6, 0u + 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0174_entry, 174u, 648u, 0x08ABE660u>(ctx, &aot_mem) && ctx.pc == 0x08AC1EA8u) goto L_08AC1EA8;
    return;
L_08AC1EA8:
    ctx.set_gpr(2, 2231u << 16u);
    ctx.fpr[2] = std::bit_cast<float>(rt.memory().aot_load32(ctx.gpr[2] + static_cast<std::uint32_t>(3684)));
    ctx.set_gpr(2, 2231u << 16u);
    ctx.fpr[1] = std::bit_cast<float>(rt.memory().aot_load32(ctx.gpr[2] + static_cast<std::uint32_t>(3688)));
    ctx.set_gpr(2, 2231u << 16u);
    ctx.fpr[0] = std::bit_cast<float>(rt.memory().aot_load32(ctx.gpr[2] + static_cast<std::uint32_t>(3692)));
    rt.memory().aot_store32(ctx.gpr[16] + static_cast<std::uint32_t>(12), std::bit_cast<std::uint32_t>(ctx.fpr[2]));
    rt.memory().aot_store32(ctx.gpr[16] + static_cast<std::uint32_t>(16), std::bit_cast<std::uint32_t>(ctx.fpr[1]));
    rt.memory().aot_store32(ctx.gpr[16] + static_cast<std::uint32_t>(20), std::bit_cast<std::uint32_t>(ctx.fpr[0]));
    ctx.set_gpr(2, 0u + static_cast<std::uint32_t>(1));
    goto L_08AC1ED0;
L_08AC1ED0:
    ctx.set_gpr(31, rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(12)));
    ctx.set_gpr(17, rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(8)));
    ctx.set_gpr(16, rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(4)));
    jump_target = ctx.gpr[31];
    ctx.set_gpr(29, ctx.gpr[29] + static_cast<std::uint32_t>(16));
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_08AC1EE4:
    ctx.set_gpr(29, ctx.gpr[29] + static_cast<std::uint32_t>(-16));
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(12), ctx.gpr[31]);
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(8), ctx.gpr[17]);
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(4), ctx.gpr[16]);
    rt.memory().aot_store32(ctx.gpr[4] + static_cast<std::uint32_t>(420), ctx.gpr[5]);
    ctx.set_gpr(2, rt.memory().aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(4)));
    ctx.set_gpr(17, ctx.gpr[4] + 0u);
    ctx.set_gpr(4, rt.memory().aot_load32(ctx.gpr[2] + static_cast<std::uint32_t>(29328)));
    ctx.set_gpr(31, 0x08AC1F0Cu);
    ctx.set_gpr(16, ctx.gpr[5] + 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0024_entry, 24u, 25u, 0x08864208u>(ctx, &aot_mem) && ctx.pc == 0x08AC1F0Cu) goto L_08AC1F0C;
    return;
L_08AC1F0C:
    if (ctx.gpr[16] != ctx.gpr[2]) {
    ctx.set_gpr(2, rt.memory().aot_load32(ctx.gpr[17] + static_cast<std::uint32_t>(4)));
        goto L_08AC1F1C;
    }
    goto L_08AC1F14;
L_08AC1F14:
    { const bool branch_taken = 0u == 0u;
    ctx.set_gpr(2, 0u + 0u);
      if (branch_taken) {
          goto L_08AC1F50;
      }
      goto L_08AC1F1C;
    }
L_08AC1F1C:
    ctx.set_gpr(31, 0x08AC1F24u);
    ctx.set_gpr(4, ctx.gpr[2] + static_cast<std::uint32_t>(28940));
    if (rt.invoke_chained_direct<&recomp_unit_0174_entry, 174u, 365u, 0x08ABD544u>(ctx, &aot_mem) && ctx.pc == 0x08AC1F24u) goto L_08AC1F24;
    return;
L_08AC1F24:
    ctx.set_gpr(31, 0x08AC1F2Cu);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0017_entry, 17u, 185u, 0x08848C3Cu>(ctx, &aot_mem) && ctx.pc == 0x08AC1F2Cu) goto L_08AC1F2C;
    return;
L_08AC1F2C:
    ctx.set_gpr(4, ctx.gpr[2] + 0u);
    ctx.set_gpr(5, 0u + static_cast<std::uint32_t>(96));
    ctx.set_gpr(6, 0u + 0u);
    ctx.set_gpr(31, 0x08AC1F40u);
    ctx.set_gpr(7, 0u + 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0171_entry, 171u, 403u, 0x08AB179Cu>(ctx, &aot_mem) && ctx.pc == 0x08AC1F40u) goto L_08AC1F40;
    return;
L_08AC1F40:
    ctx.set_gpr(4, rt.memory().aot_load32(ctx.gpr[17] + static_cast<std::uint32_t>(4)));
    ctx.set_gpr(31, 0x08AC1F4Cu);
    ctx.set_gpr(5, 0u + static_cast<std::uint32_t>(7));
    if (rt.invoke_chained_direct<&recomp_unit_0170_entry, 170u, 599u, 0x08AAE670u>(ctx, &aot_mem) && ctx.pc == 0x08AC1F4Cu) goto L_08AC1F4C;
    return;
L_08AC1F4C:
    ctx.set_gpr(2, 0u + static_cast<std::uint32_t>(1));
    goto L_08AC1F50;
L_08AC1F50:
    ctx.set_gpr(31, rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(12)));
    ctx.set_gpr(17, rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(8)));
    ctx.set_gpr(16, rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(4)));
    jump_target = ctx.gpr[31];
    ctx.set_gpr(29, ctx.gpr[29] + static_cast<std::uint32_t>(16));
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_08AC1F64:
    ctx.set_gpr(29, ctx.gpr[29] + static_cast<std::uint32_t>(-16));
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(12), ctx.gpr[31]);
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(8), ctx.gpr[16]);
    ctx.set_gpr(2, rt.memory().aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(4)));
    ctx.set_gpr(16, ctx.gpr[4] + 0u);
    ctx.set_gpr(31, 0x08AC1F80u);
    ctx.set_gpr(4, ctx.gpr[2] + static_cast<std::uint32_t>(29304));
    if (rt.invoke_chained_direct<&recomp_unit_0194_entry, 194u, 312u, 0x08B0D3ACu>(ctx, &aot_mem) && ctx.pc == 0x08AC1F80u) goto L_08AC1F80;
    return;
L_08AC1F80:
    ctx.set_gpr(2, ctx.gpr[2] & 255u);
    if (ctx.gpr[2] != 0u) {
    ctx.set_gpr(4, rt.memory().aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(4)));
        goto L_08AC1F94;
    }
    goto L_08AC1F8C;
L_08AC1F8C:
    { const bool branch_taken = 0u == 0u;
    ctx.set_gpr(2, 0u + static_cast<std::uint32_t>(1));
      if (branch_taken) {
          goto L_08AC1FD0;
      }
      goto L_08AC1F94;
    }
L_08AC1F94:
    ctx.set_gpr(31, 0x08AC1F9Cu);
    ctx.set_gpr(5, 0u + static_cast<std::uint32_t>(8));
    if (rt.invoke_chained_direct<&recomp_unit_0170_entry, 170u, 599u, 0x08AAE670u>(ctx, &aot_mem) && ctx.pc == 0x08AC1F9Cu) goto L_08AC1F9C;
    return;
L_08AC1F9C:
    ctx.set_gpr(5, rt.memory().aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(420)));
    ctx.set_gpr(31, 0x08AC1FA8u);
    ctx.set_gpr(4, rt.memory().aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(4)));
    if (rt.invoke_chained_direct<&recomp_unit_0170_entry, 170u, 163u, 0x08AACA24u>(ctx, &aot_mem) && ctx.pc == 0x08AC1FA8u) goto L_08AC1FA8;
    return;
L_08AC1FA8:
    ctx.set_gpr(2, 2231u << 16u);
    ctx.fpr[2] = std::bit_cast<float>(rt.memory().aot_load32(ctx.gpr[2] + static_cast<std::uint32_t>(3696)));
    ctx.set_gpr(2, 2231u << 16u);
    ctx.fpr[1] = std::bit_cast<float>(rt.memory().aot_load32(ctx.gpr[2] + static_cast<std::uint32_t>(3700)));
    ctx.set_gpr(2, 2231u << 16u);
    ctx.fpr[0] = std::bit_cast<float>(rt.memory().aot_load32(ctx.gpr[2] + static_cast<std::uint32_t>(3704)));
    rt.memory().aot_store32(ctx.gpr[16] + static_cast<std::uint32_t>(12), std::bit_cast<std::uint32_t>(ctx.fpr[2]));
    rt.memory().aot_store32(ctx.gpr[16] + static_cast<std::uint32_t>(16), std::bit_cast<std::uint32_t>(ctx.fpr[1]));
    ctx.set_gpr(2, 0u + static_cast<std::uint32_t>(1));
    rt.memory().aot_store32(ctx.gpr[16] + static_cast<std::uint32_t>(20), std::bit_cast<std::uint32_t>(ctx.fpr[0]));
    goto L_08AC1FD0;
L_08AC1FD0:
    ctx.set_gpr(31, rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(12)));
    ctx.set_gpr(16, rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(8)));
    jump_target = ctx.gpr[31];
    ctx.set_gpr(29, ctx.gpr[29] + static_cast<std::uint32_t>(16));
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_08AC1FE0:
    ctx.set_gpr(29, ctx.gpr[29] + static_cast<std::uint32_t>(-16));
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(12), ctx.gpr[31]);
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(8), ctx.gpr[16]);
    ctx.set_gpr(16, ctx.gpr[4] + 0u);
    ctx.set_gpr(31, 0x08AC1FF8u);
    ctx.set_gpr(4, rt.memory().aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(4)));
    if (rt.invoke_chained_direct<&recomp_unit_0170_entry, 170u, 170u, 0x08AACAACu>(ctx, &aot_mem) && ctx.pc == 0x08AC1FF8u) goto L_08AC1FF8;
    return;
L_08AC1FF8:
    ctx.set_gpr(2, ctx.gpr[2] & 255u);
    { const bool branch_taken = ctx.gpr[2] != 0u;
    // nop
      if (branch_taken) {
          goto L_08AC200C;
      }
      goto L_08AC2004;
    }
L_08AC2004:
    { const bool branch_taken = 0u == 0u;
    ctx.set_gpr(2, 0u + 0u);
      if (branch_taken) {
          goto L_08AC20C4;
      }
      goto L_08AC200C;
    }
L_08AC200C:
    ctx.set_gpr(31, 0x08AC2014u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0017_entry, 17u, 185u, 0x08848C3Cu>(ctx, &aot_mem) && ctx.pc == 0x08AC2014u) goto L_08AC2014;
    return;
L_08AC2014:
    ctx.set_gpr(31, 0x08AC201Cu);
    ctx.set_gpr(4, ctx.gpr[2] + 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0171_entry, 171u, 422u, 0x08AB1920u>(ctx, &aot_mem) && ctx.pc == 0x08AC201Cu) goto L_08AC201C;
    return;
L_08AC201C:
    ctx.set_gpr(31, 0x08AC2024u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0017_entry, 17u, 185u, 0x08848C3Cu>(ctx, &aot_mem) && ctx.pc == 0x08AC2024u) goto L_08AC2024;
    return;
L_08AC2024:
    ctx.set_gpr(4, ctx.gpr[2] + 0u);
    ctx.set_gpr(5, 0u + static_cast<std::uint32_t>(97));
    ctx.set_gpr(6, 0u + 0u);
    ctx.set_gpr(31, 0x08AC2038u);
    ctx.set_gpr(7, 0u + 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0171_entry, 171u, 403u, 0x08AB179Cu>(ctx, &aot_mem) && ctx.pc == 0x08AC2038u) goto L_08AC2038;
    return;
L_08AC2038:
    ctx.set_gpr(3, rt.memory().aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(4)));
    ctx.set_gpr(2, 49024u << 16u);
    ctx.fpr[12] = std::bit_cast<float>(ctx.gpr[2]);
    ctx.set_gpr(4, ctx.gpr[3] + static_cast<std::uint32_t>(28940));
    ctx.set_gpr(31, 0x08AC2050u);
    ctx.set_gpr(5, 0u + 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0169_entry, 169u, 913u, 0x08AAB1C8u>(ctx, &aot_mem) && ctx.pc == 0x08AC2050u) goto L_08AC2050;
    return;
L_08AC2050:
    ctx.set_gpr(2, rt.memory().aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(4)));
    ctx.set_gpr(5, 0u + static_cast<std::uint32_t>(1));
    ctx.set_gpr(4, rt.memory().aot_load32(ctx.gpr[2] + static_cast<std::uint32_t>(96)));
    ctx.set_gpr(25, rt.memory().aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(200)));
    ctx.set_gpr(25, rt.memory().aot_load32(ctx.gpr[25] + static_cast<std::uint32_t>(36)));
    jump_target = ctx.gpr[25];
    ctx.set_gpr(31, 0x08AC206Cu);
    ctx.set_gpr(6, ctx.gpr[5] + 0u);
    ctx.pc = jump_target;
    if (rt.invoke_chained_call(ctx, &aot_mem) && ctx.pc == 0x08AC206Cu) goto L_08AC206C;
    return;
L_08AC206C:
    ctx.set_gpr(4, rt.memory().aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(4)));
    ctx.set_gpr(31, 0x08AC2078u);
    ctx.set_gpr(5, 0u + 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0170_entry, 170u, 525u, 0x08AAE2C8u>(ctx, &aot_mem) && ctx.pc == 0x08AC2078u) goto L_08AC2078;
    return;
L_08AC2078:
    ctx.set_gpr(4, rt.memory().aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(4)));
    ctx.fpr[12] = std::bit_cast<float>(0u);
    ctx.set_gpr(5, 0u + 0u);
    ctx.set_gpr(6, 0u + static_cast<std::uint32_t>(1));
    ctx.set_gpr(31, 0x08AC2090u);
    ctx.set_gpr(7, 0u + 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0170_entry, 170u, 452u, 0x08AADD34u>(ctx, &aot_mem) && ctx.pc == 0x08AC2090u) goto L_08AC2090;
    return;
L_08AC2090:
    ctx.set_gpr(4, rt.memory().aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(4)));
    ctx.set_gpr(31, 0x08AC209Cu);
    ctx.set_gpr(5, 0u + static_cast<std::uint32_t>(9));
    if (rt.invoke_chained_direct<&recomp_unit_0170_entry, 170u, 599u, 0x08AAE670u>(ctx, &aot_mem) && ctx.pc == 0x08AC209Cu) goto L_08AC209C;
    return;
L_08AC209C:
    ctx.set_gpr(2, 2231u << 16u);
    ctx.fpr[2] = std::bit_cast<float>(rt.memory().aot_load32(ctx.gpr[2] + static_cast<std::uint32_t>(3708)));
    ctx.set_gpr(2, 2231u << 16u);
    ctx.fpr[1] = std::bit_cast<float>(rt.memory().aot_load32(ctx.gpr[2] + static_cast<std::uint32_t>(3712)));
    ctx.set_gpr(2, 2231u << 16u);
    ctx.fpr[0] = std::bit_cast<float>(rt.memory().aot_load32(ctx.gpr[2] + static_cast<std::uint32_t>(3716)));
    rt.memory().aot_store32(ctx.gpr[16] + static_cast<std::uint32_t>(12), std::bit_cast<std::uint32_t>(ctx.fpr[2]));
    rt.memory().aot_store32(ctx.gpr[16] + static_cast<std::uint32_t>(16), std::bit_cast<std::uint32_t>(ctx.fpr[1]));
    ctx.set_gpr(2, 0u + static_cast<std::uint32_t>(1));
    rt.memory().aot_store32(ctx.gpr[16] + static_cast<std::uint32_t>(20), std::bit_cast<std::uint32_t>(ctx.fpr[0]));
    goto L_08AC20C4;
L_08AC20C4:
    ctx.set_gpr(31, rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(12)));
    ctx.set_gpr(16, rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(8)));
    jump_target = ctx.gpr[31];
    ctx.set_gpr(29, ctx.gpr[29] + static_cast<std::uint32_t>(16));
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_08AC20D4:
    ctx.set_gpr(29, ctx.gpr[29] + static_cast<std::uint32_t>(-16));
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(12), ctx.gpr[31]);
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(8), ctx.gpr[16]);
    ctx.set_gpr(2, rt.memory().aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(4)));
    ctx.set_gpr(16, ctx.gpr[4] + 0u);
    ctx.set_gpr(31, 0x08AC20F0u);
    ctx.set_gpr(4, ctx.gpr[2] + static_cast<std::uint32_t>(29304));
    if (rt.invoke_chained_direct<&recomp_unit_0194_entry, 194u, 312u, 0x08B0D3ACu>(ctx, &aot_mem) && ctx.pc == 0x08AC20F0u) goto L_08AC20F0;
    return;
L_08AC20F0:
    ctx.set_gpr(2, ctx.gpr[2] & 255u);
    if (ctx.gpr[2] != 0u) {
    ctx.set_gpr(4, rt.memory().aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(4)));
        goto L_08AC2104;
    }
    goto L_08AC20FC;
L_08AC20FC:
    { const bool branch_taken = 0u == 0u;
    ctx.set_gpr(2, 0u + static_cast<std::uint32_t>(1));
      if (branch_taken) {
          goto L_08AC2150;
      }
      goto L_08AC2104;
    }
L_08AC2104:
    ctx.set_gpr(31, 0x08AC210Cu);
    ctx.set_gpr(5, 0u + static_cast<std::uint32_t>(-1));
    if (rt.invoke_chained_direct<&recomp_unit_0170_entry, 170u, 599u, 0x08AAE670u>(ctx, &aot_mem) && ctx.pc == 0x08AC210Cu) goto L_08AC210C;
    return;
L_08AC210C:
    ctx.set_gpr(31, 0x08AC2114u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0017_entry, 17u, 191u, 0x08848C84u>(ctx, &aot_mem) && ctx.pc == 0x08AC2114u) goto L_08AC2114;
    return;
L_08AC2114:
    ctx.set_gpr(31, 0x08AC211Cu);
    ctx.set_gpr(4, ctx.gpr[2] + 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0174_entry, 174u, 990u, 0x08ABFC78u>(ctx, &aot_mem) && ctx.pc == 0x08AC211Cu) goto L_08AC211C;
    return;
L_08AC211C:
    ctx.set_gpr(4, ctx.gpr[2] + 0u);
    ctx.set_gpr(31, 0x08AC2128u);
    ctx.set_gpr(5, 0u + static_cast<std::uint32_t>(1));
    if (rt.invoke_chained_direct<&recomp_unit_0187_entry, 187u, 664u, 0x08AF2ACCu>(ctx, &aot_mem) && ctx.pc == 0x08AC2128u) goto L_08AC2128;
    return;
L_08AC2128:
    ctx.set_gpr(2, 2231u << 16u);
    ctx.fpr[2] = std::bit_cast<float>(rt.memory().aot_load32(ctx.gpr[2] + static_cast<std::uint32_t>(3720)));
    ctx.set_gpr(2, 2231u << 16u);
    ctx.fpr[1] = std::bit_cast<float>(rt.memory().aot_load32(ctx.gpr[2] + static_cast<std::uint32_t>(3724)));
    ctx.set_gpr(2, 2231u << 16u);
    ctx.fpr[0] = std::bit_cast<float>(rt.memory().aot_load32(ctx.gpr[2] + static_cast<std::uint32_t>(3728)));
    rt.memory().aot_store32(ctx.gpr[16] + static_cast<std::uint32_t>(12), std::bit_cast<std::uint32_t>(ctx.fpr[2]));
    rt.memory().aot_store32(ctx.gpr[16] + static_cast<std::uint32_t>(16), std::bit_cast<std::uint32_t>(ctx.fpr[1]));
    ctx.set_gpr(2, 0u + static_cast<std::uint32_t>(1));
    rt.memory().aot_store32(ctx.gpr[16] + static_cast<std::uint32_t>(20), std::bit_cast<std::uint32_t>(ctx.fpr[0]));
    goto L_08AC2150;
L_08AC2150:
    ctx.set_gpr(31, rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(12)));
    ctx.set_gpr(16, rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(8)));
    jump_target = ctx.gpr[31];
    ctx.set_gpr(29, ctx.gpr[29] + static_cast<std::uint32_t>(16));
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_08AC2160:
    ctx.set_gpr(29, ctx.gpr[29] + static_cast<std::uint32_t>(-32));
    ctx.set_gpr(2, ctx.gpr[5] << 2u);
    ctx.set_gpr(3, ctx.gpr[2] + ctx.gpr[29]);
    ctx.set_gpr(2, 2231u << 16u);
    ctx.fpr[1] = std::bit_cast<float>(rt.memory().aot_load32(ctx.gpr[2] + static_cast<std::uint32_t>(3828)));
    ctx.set_gpr(2, 2231u << 16u);
    ctx.fpr[0] = std::bit_cast<float>(rt.memory().aot_load32(ctx.gpr[2] + static_cast<std::uint32_t>(3832)));
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(8), std::bit_cast<std::uint32_t>(ctx.fpr[1]));
    ctx.set_gpr(2, 2231u << 16u);
    ctx.fpr[1] = std::bit_cast<float>(rt.memory().aot_load32(ctx.gpr[2] + static_cast<std::uint32_t>(3836)));
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(12), std::bit_cast<std::uint32_t>(ctx.fpr[0]));
    ctx.set_gpr(2, 2231u << 16u);
    ctx.fpr[0] = std::bit_cast<float>(rt.memory().aot_load32(ctx.gpr[2] + static_cast<std::uint32_t>(3840)));
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(16), std::bit_cast<std::uint32_t>(ctx.fpr[1]));
    ctx.set_gpr(2, 2231u << 16u);
    ctx.fpr[1] = std::bit_cast<float>(rt.memory().aot_load32(ctx.gpr[2] + static_cast<std::uint32_t>(3844)));
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(20), std::bit_cast<std::uint32_t>(ctx.fpr[0]));
    ctx.set_gpr(2, 2231u << 16u);
    ctx.fpr[0] = std::bit_cast<float>(rt.memory().aot_load32(ctx.gpr[2] + static_cast<std::uint32_t>(3848)));
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(24), std::bit_cast<std::uint32_t>(ctx.fpr[1]));
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(28), std::bit_cast<std::uint32_t>(ctx.fpr[0]));
    ctx.set_gpr(2, rt.memory().aot_load32(ctx.gpr[3] + static_cast<std::uint32_t>(8)));
    jump_target = ctx.gpr[31];
    ctx.set_gpr(29, ctx.gpr[29] + static_cast<std::uint32_t>(32));
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_08AC21C0:
    ctx.set_gpr(29, ctx.gpr[29] + static_cast<std::uint32_t>(-304));
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(12), ctx.gpr[31]);
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(8), ctx.gpr[18]);
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(4), ctx.gpr[17]);
    ctx.set_gpr(18, ctx.gpr[5] + 0u);
    ctx.set_gpr(17, ctx.gpr[6] + 0u);
    ctx.set_gpr(31, 0x08AC21E0u);
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(0), ctx.gpr[16]);
    if (rt.invoke_chained_direct<&recomp_unit_0017_entry, 17u, 182u, 0x08848C18u>(ctx, &aot_mem) && ctx.pc == 0x08AC21E0u) goto L_08AC21E0;
    return;
L_08AC21E0:
    ctx.set_gpr(31, 0x08AC21E8u);
    ctx.set_gpr(4, ctx.gpr[2] + 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0016_entry, 16u, 633u, 0x08847AC0u>(ctx, &aot_mem) && ctx.pc == 0x08AC21E8u) goto L_08AC21E8;
    return;
L_08AC21E8:
    ctx.set_gpr(6, 2231u << 16u);
    ctx.set_gpr(16, ctx.gpr[2] + 0u);
    ctx.set_gpr(6, ctx.gpr[6] + static_cast<std::uint32_t>(3996));
    ctx.set_gpr(5, ctx.gpr[29] + static_cast<std::uint32_t>(16));
    ctx.set_gpr(4, 0u + static_cast<std::uint32_t>(36));
    goto L_08AC21FC;
L_08AC21FC:
    ctx.set_gpr(3, rt.memory().aot_load32(ctx.gpr[6] + static_cast<std::uint32_t>(0)));
    ctx.set_gpr(2, rt.memory().aot_load32(ctx.gpr[6] + static_cast<std::uint32_t>(4)));
    ctx.set_gpr(4, ctx.gpr[4] + static_cast<std::uint32_t>(-1));
    rt.memory().aot_store32(ctx.gpr[5] + static_cast<std::uint32_t>(0), ctx.gpr[3]);
    rt.memory().aot_store32(ctx.gpr[5] + static_cast<std::uint32_t>(4), ctx.gpr[2]);
    ctx.set_gpr(6, ctx.gpr[6] + static_cast<std::uint32_t>(8));
    { const bool branch_taken = static_cast<std::int32_t>(ctx.gpr[4]) > 0;
    ctx.set_gpr(5, ctx.gpr[5] + static_cast<std::uint32_t>(8));
      if (branch_taken) {
          goto L_08AC21FC;
      }
      goto L_08AC221C;
    }
L_08AC221C:
    ctx.set_gpr(2, 2231u << 16u);
    ctx.fpr[1] = std::bit_cast<float>(rt.memory().aot_load32(ctx.gpr[2] + static_cast<std::uint32_t>(3852)));
    ctx.set_gpr(4, ctx.gpr[16] + 0u);
    ctx.set_gpr(2, 2231u << 16u);
    ctx.fpr[0] = std::bit_cast<float>(rt.memory().aot_load32(ctx.gpr[2] + static_cast<std::uint32_t>(3856)));
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(20), std::bit_cast<std::uint32_t>(ctx.fpr[1]));
    ctx.set_gpr(2, 2231u << 16u);
    ctx.fpr[1] = std::bit_cast<float>(rt.memory().aot_load32(ctx.gpr[2] + static_cast<std::uint32_t>(3860)));
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(24), std::bit_cast<std::uint32_t>(ctx.fpr[0]));
    ctx.set_gpr(2, 2231u << 16u);
    ctx.fpr[0] = std::bit_cast<float>(rt.memory().aot_load32(ctx.gpr[2] + static_cast<std::uint32_t>(3864)));
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(28), std::bit_cast<std::uint32_t>(ctx.fpr[1]));
    ctx.set_gpr(2, 2231u << 16u);
    ctx.fpr[1] = std::bit_cast<float>(rt.memory().aot_load32(ctx.gpr[2] + static_cast<std::uint32_t>(3868)));
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(32), std::bit_cast<std::uint32_t>(ctx.fpr[0]));
    ctx.set_gpr(2, 2231u << 16u);
    ctx.fpr[0] = std::bit_cast<float>(rt.memory().aot_load32(ctx.gpr[2] + static_cast<std::uint32_t>(3872)));
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(36), std::bit_cast<std::uint32_t>(ctx.fpr[1]));
    ctx.set_gpr(31, 0x08AC226Cu);
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(40), std::bit_cast<std::uint32_t>(ctx.fpr[0]));
    if (rt.invoke_chained_direct<&recomp_unit_0170_entry, 170u, 122u, 0x08AAC854u>(ctx, &aot_mem) && ctx.pc == 0x08AC226Cu) goto L_08AC226C;
    return;
L_08AC226C:
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(56), ctx.gpr[2]);
    ctx.set_gpr(2, 2231u << 16u);
    ctx.fpr[1] = std::bit_cast<float>(rt.memory().aot_load32(ctx.gpr[2] + static_cast<std::uint32_t>(3876)));
    ctx.set_gpr(4, ctx.gpr[16] + 0u);
    ctx.set_gpr(5, 0u + 0u);
    ctx.set_gpr(2, 2231u << 16u);
    ctx.fpr[0] = std::bit_cast<float>(rt.memory().aot_load32(ctx.gpr[2] + static_cast<std::uint32_t>(3880)));
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(68), std::bit_cast<std::uint32_t>(ctx.fpr[1]));
    ctx.set_gpr(2, 2231u << 16u);
    ctx.fpr[1] = std::bit_cast<float>(rt.memory().aot_load32(ctx.gpr[2] + static_cast<std::uint32_t>(3884)));
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(72), std::bit_cast<std::uint32_t>(ctx.fpr[0]));
    ctx.set_gpr(2, 2231u << 16u);
    ctx.fpr[0] = std::bit_cast<float>(rt.memory().aot_load32(ctx.gpr[2] + static_cast<std::uint32_t>(3888)));
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(76), std::bit_cast<std::uint32_t>(ctx.fpr[1]));
    ctx.set_gpr(2, 2231u << 16u);
    ctx.fpr[1] = std::bit_cast<float>(rt.memory().aot_load32(ctx.gpr[2] + static_cast<std::uint32_t>(3892)));
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(80), std::bit_cast<std::uint32_t>(ctx.fpr[0]));
    ctx.set_gpr(2, 2231u << 16u);
    ctx.fpr[0] = std::bit_cast<float>(rt.memory().aot_load32(ctx.gpr[2] + static_cast<std::uint32_t>(3896)));
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(84), std::bit_cast<std::uint32_t>(ctx.fpr[1]));
    ctx.set_gpr(31, 0x08AC22C4u);
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(88), std::bit_cast<std::uint32_t>(ctx.fpr[0]));
    if (rt.invoke_chained_direct<&recomp_unit_0170_entry, 170u, 121u, 0x08AAC844u>(ctx, &aot_mem) && ctx.pc == 0x08AC22C4u) goto L_08AC22C4;
    return;
L_08AC22C4:
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(104), ctx.gpr[2]);
    ctx.set_gpr(2, 2231u << 16u);
    ctx.fpr[1] = std::bit_cast<float>(rt.memory().aot_load32(ctx.gpr[2] + static_cast<std::uint32_t>(3900)));
    ctx.set_gpr(4, ctx.gpr[16] + 0u);
    ctx.set_gpr(5, 0u + static_cast<std::uint32_t>(1));
    ctx.set_gpr(2, 2231u << 16u);
    ctx.fpr[0] = std::bit_cast<float>(rt.memory().aot_load32(ctx.gpr[2] + static_cast<std::uint32_t>(3904)));
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(116), std::bit_cast<std::uint32_t>(ctx.fpr[1]));
    ctx.set_gpr(2, 2231u << 16u);
    ctx.fpr[1] = std::bit_cast<float>(rt.memory().aot_load32(ctx.gpr[2] + static_cast<std::uint32_t>(3908)));
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(120), std::bit_cast<std::uint32_t>(ctx.fpr[0]));
    ctx.set_gpr(2, 2231u << 16u);
    ctx.fpr[0] = std::bit_cast<float>(rt.memory().aot_load32(ctx.gpr[2] + static_cast<std::uint32_t>(3912)));
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(124), std::bit_cast<std::uint32_t>(ctx.fpr[1]));
    ctx.set_gpr(2, 2231u << 16u);
    ctx.fpr[1] = std::bit_cast<float>(rt.memory().aot_load32(ctx.gpr[2] + static_cast<std::uint32_t>(3916)));
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(128), std::bit_cast<std::uint32_t>(ctx.fpr[0]));
    ctx.set_gpr(2, 2231u << 16u);
    ctx.fpr[0] = std::bit_cast<float>(rt.memory().aot_load32(ctx.gpr[2] + static_cast<std::uint32_t>(3920)));
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(132), std::bit_cast<std::uint32_t>(ctx.fpr[1]));
    ctx.set_gpr(31, 0x08AC231Cu);
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(136), std::bit_cast<std::uint32_t>(ctx.fpr[0]));
    if (rt.invoke_chained_direct<&recomp_unit_0170_entry, 170u, 121u, 0x08AAC844u>(ctx, &aot_mem) && ctx.pc == 0x08AC231Cu) goto L_08AC231C;
    return;
L_08AC231C:
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(152), ctx.gpr[2]);
    ctx.set_gpr(2, 2231u << 16u);
    ctx.fpr[1] = std::bit_cast<float>(rt.memory().aot_load32(ctx.gpr[2] + static_cast<std::uint32_t>(3924)));
    ctx.set_gpr(4, ctx.gpr[16] + 0u);
    ctx.set_gpr(5, 0u + static_cast<std::uint32_t>(2));
    ctx.set_gpr(2, 2231u << 16u);
    ctx.fpr[0] = std::bit_cast<float>(rt.memory().aot_load32(ctx.gpr[2] + static_cast<std::uint32_t>(3928)));
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(164), std::bit_cast<std::uint32_t>(ctx.fpr[1]));
    ctx.set_gpr(2, 2231u << 16u);
    ctx.fpr[1] = std::bit_cast<float>(rt.memory().aot_load32(ctx.gpr[2] + static_cast<std::uint32_t>(3932)));
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(168), std::bit_cast<std::uint32_t>(ctx.fpr[0]));
    ctx.set_gpr(2, 2231u << 16u);
    ctx.fpr[0] = std::bit_cast<float>(rt.memory().aot_load32(ctx.gpr[2] + static_cast<std::uint32_t>(3936)));
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(172), std::bit_cast<std::uint32_t>(ctx.fpr[1]));
    ctx.set_gpr(2, 2231u << 16u);
    ctx.fpr[1] = std::bit_cast<float>(rt.memory().aot_load32(ctx.gpr[2] + static_cast<std::uint32_t>(3940)));
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(176), std::bit_cast<std::uint32_t>(ctx.fpr[0]));
    ctx.set_gpr(2, 2231u << 16u);
    ctx.fpr[0] = std::bit_cast<float>(rt.memory().aot_load32(ctx.gpr[2] + static_cast<std::uint32_t>(3944)));
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(180), std::bit_cast<std::uint32_t>(ctx.fpr[1]));
    ctx.set_gpr(31, 0x08AC2374u);
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(184), std::bit_cast<std::uint32_t>(ctx.fpr[0]));
    if (rt.invoke_chained_direct<&recomp_unit_0170_entry, 170u, 121u, 0x08AAC844u>(ctx, &aot_mem) && ctx.pc == 0x08AC2374u) goto L_08AC2374;
    return;
L_08AC2374:
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(200), ctx.gpr[2]);
    ctx.set_gpr(2, 2231u << 16u);
    ctx.fpr[1] = std::bit_cast<float>(rt.memory().aot_load32(ctx.gpr[2] + static_cast<std::uint32_t>(3948)));
    ctx.set_gpr(4, ctx.gpr[16] + 0u);
    ctx.set_gpr(5, 0u + static_cast<std::uint32_t>(3));
    ctx.set_gpr(2, 2231u << 16u);
    ctx.fpr[0] = std::bit_cast<float>(rt.memory().aot_load32(ctx.gpr[2] + static_cast<std::uint32_t>(3952)));
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(212), std::bit_cast<std::uint32_t>(ctx.fpr[1]));
    ctx.set_gpr(2, 2231u << 16u);
    ctx.fpr[1] = std::bit_cast<float>(rt.memory().aot_load32(ctx.gpr[2] + static_cast<std::uint32_t>(3956)));
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(216), std::bit_cast<std::uint32_t>(ctx.fpr[0]));
    ctx.set_gpr(2, 2231u << 16u);
    ctx.fpr[0] = std::bit_cast<float>(rt.memory().aot_load32(ctx.gpr[2] + static_cast<std::uint32_t>(3960)));
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(220), std::bit_cast<std::uint32_t>(ctx.fpr[1]));
    ctx.set_gpr(2, 2231u << 16u);
    ctx.fpr[1] = std::bit_cast<float>(rt.memory().aot_load32(ctx.gpr[2] + static_cast<std::uint32_t>(3964)));
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(224), std::bit_cast<std::uint32_t>(ctx.fpr[0]));
    ctx.set_gpr(2, 2231u << 16u);
    ctx.fpr[0] = std::bit_cast<float>(rt.memory().aot_load32(ctx.gpr[2] + static_cast<std::uint32_t>(3968)));
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(228), std::bit_cast<std::uint32_t>(ctx.fpr[1]));
    ctx.set_gpr(31, 0x08AC23CCu);
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(232), std::bit_cast<std::uint32_t>(ctx.fpr[0]));
    if (rt.invoke_chained_direct<&recomp_unit_0170_entry, 170u, 121u, 0x08AAC844u>(ctx, &aot_mem) && ctx.pc == 0x08AC23CCu) goto L_08AC23CC;
    return;
L_08AC23CC:
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(248), ctx.gpr[2]);
    ctx.set_gpr(2, 2231u << 16u);
    ctx.fpr[1] = std::bit_cast<float>(rt.memory().aot_load32(ctx.gpr[2] + static_cast<std::uint32_t>(3972)));
    ctx.set_gpr(4, ctx.gpr[16] + 0u);
    ctx.set_gpr(5, 0u + static_cast<std::uint32_t>(4));
    ctx.set_gpr(2, 2231u << 16u);
    ctx.fpr[0] = std::bit_cast<float>(rt.memory().aot_load32(ctx.gpr[2] + static_cast<std::uint32_t>(3976)));
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(260), std::bit_cast<std::uint32_t>(ctx.fpr[1]));
    ctx.set_gpr(2, 2231u << 16u);
    ctx.fpr[1] = std::bit_cast<float>(rt.memory().aot_load32(ctx.gpr[2] + static_cast<std::uint32_t>(3980)));
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(264), std::bit_cast<std::uint32_t>(ctx.fpr[0]));
    ctx.set_gpr(2, 2231u << 16u);
    ctx.fpr[0] = std::bit_cast<float>(rt.memory().aot_load32(ctx.gpr[2] + static_cast<std::uint32_t>(3984)));
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(268), std::bit_cast<std::uint32_t>(ctx.fpr[1]));
    ctx.set_gpr(2, 2231u << 16u);
    ctx.fpr[1] = std::bit_cast<float>(rt.memory().aot_load32(ctx.gpr[2] + static_cast<std::uint32_t>(3988)));
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(272), std::bit_cast<std::uint32_t>(ctx.fpr[0]));
    ctx.set_gpr(2, 2231u << 16u);
    ctx.fpr[0] = std::bit_cast<float>(rt.memory().aot_load32(ctx.gpr[2] + static_cast<std::uint32_t>(3992)));
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(276), std::bit_cast<std::uint32_t>(ctx.fpr[1]));
    ctx.set_gpr(31, 0x08AC2424u);
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(280), std::bit_cast<std::uint32_t>(ctx.fpr[0]));
    if (rt.invoke_chained_direct<&recomp_unit_0170_entry, 170u, 121u, 0x08AAC844u>(ctx, &aot_mem) && ctx.pc == 0x08AC2424u) goto L_08AC2424;
    return;
L_08AC2424:
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(296), ctx.gpr[2]);
    ctx.set_gpr(2, ctx.gpr[18] << 1u);
    ctx.set_gpr(2, ctx.gpr[2] + ctx.gpr[18]);
    ctx.set_gpr(2, ctx.gpr[2] << 4u);
    ctx.set_gpr(2, ctx.gpr[2] + ctx.gpr[29]);
    ctx.set_gpr(4, ctx.gpr[17] + 0u);
    ctx.set_gpr(5, ctx.gpr[2] + static_cast<std::uint32_t>(16));
    ctx.set_gpr(31, 0x08AC2448u);
    ctx.set_gpr(6, 0u + static_cast<std::uint32_t>(48));
    if (rt.invoke_chained_direct<&recomp_unit_0003_entry, 3u, 662u, 0x08812B08u>(ctx, &aot_mem) && ctx.pc == 0x08AC2448u) goto L_08AC2448;
    return;
L_08AC2448:
    ctx.set_gpr(31, rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(12)));
    ctx.set_gpr(18, rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(8)));
    ctx.set_gpr(17, rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(4)));
    ctx.set_gpr(16, rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(0)));
    jump_target = ctx.gpr[31];
    ctx.set_gpr(29, ctx.gpr[29] + static_cast<std::uint32_t>(304));
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_08AC2460:
    ctx.set_gpr(29, ctx.gpr[29] + static_cast<std::uint32_t>(-16));
    ctx.set_gpr(2, ctx.gpr[5] << 2u);
    ctx.set_gpr(3, ctx.gpr[2] + ctx.gpr[29]);
    ctx.set_gpr(2, 2231u << 16u);
    ctx.fpr[1] = std::bit_cast<float>(rt.memory().aot_load32(ctx.gpr[2] + static_cast<std::uint32_t>(4284)));
    ctx.set_gpr(2, 2231u << 16u);
    ctx.fpr[0] = std::bit_cast<float>(rt.memory().aot_load32(ctx.gpr[2] + static_cast<std::uint32_t>(4288)));
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(8), std::bit_cast<std::uint32_t>(ctx.fpr[1]));
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(12), std::bit_cast<std::uint32_t>(ctx.fpr[0]));
    ctx.set_gpr(2, rt.memory().aot_load32(ctx.gpr[3] + static_cast<std::uint32_t>(8)));
    jump_target = ctx.gpr[31];
    ctx.set_gpr(29, ctx.gpr[29] + static_cast<std::uint32_t>(16));
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_08AC2490:
    if (ctx.gpr[5] != 0u) {
    ctx.set_gpr(2, 0u + static_cast<std::uint32_t>(1));
        goto L_08AC24A8;
    }
    goto L_08AC2498;
L_08AC2498:
    ctx.set_gpr(2, static_cast<std::int32_t>(ctx.gpr[6]) < 6 ? 1u : 0u);
    ctx.set_gpr(2, ctx.gpr[2] ^ 1u);
    { const bool branch_taken = 0u == 0u;
    ctx.set_gpr(2, ctx.gpr[2] & 255u);
      if (branch_taken) {
          goto L_08AC24EC;
      }
      goto L_08AC24A8;
    }
L_08AC24A8:
    if (ctx.gpr[5] != ctx.gpr[2]) {
    ctx.set_gpr(3, 0u + static_cast<std::uint32_t>(2));
        goto L_08AC24B8;
    }
    goto L_08AC24B0;
L_08AC24B0:
    { const bool branch_taken = 0u == 0u;
    ctx.set_gpr(2, 0u + 0u);
      if (branch_taken) {
          goto L_08AC24EC;
      }
      goto L_08AC24B8;
    }
L_08AC24B8:
    if (ctx.gpr[5] != ctx.gpr[3]) {
    ctx.set_gpr(3, 0u + static_cast<std::uint32_t>(3));
        goto L_08AC24C8;
    }
    goto L_08AC24C0;
L_08AC24C0:
    { const bool branch_taken = 0u == 0u;
    ctx.set_gpr(2, 0u + 0u);
      if (branch_taken) {
          goto L_08AC24EC;
      }
      goto L_08AC24C8;
    }
L_08AC24C8:
    if (ctx.gpr[5] != ctx.gpr[3]) {
    ctx.set_gpr(3, 0u + static_cast<std::uint32_t>(4));
        goto L_08AC24D8;
    }
    goto L_08AC24D0;
L_08AC24D0:
    { const bool branch_taken = 0u == 0u;
    ctx.set_gpr(2, 0u + 0u);
      if (branch_taken) {
          goto L_08AC24EC;
      }
      goto L_08AC24D8;
    }
L_08AC24D8:
    if (ctx.gpr[5] != ctx.gpr[3]) {
    ctx.set_gpr(2, ctx.gpr[5] ^ 5u);
        goto L_08AC24E8;
    }
    goto L_08AC24E0;
L_08AC24E0:
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_08AC24EC;
      }
      goto L_08AC24E8;
    }
L_08AC24E8:
    ctx.set_gpr(2, ctx.gpr[2] < static_cast<std::uint32_t>(1) ? 1u : 0u);
    goto L_08AC24EC;
L_08AC24EC:
    jump_target = ctx.gpr[31];
    // nop
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_08AC24F4:
    if (ctx.gpr[5] != 0u) {
    ctx.set_gpr(2, 0u + static_cast<std::uint32_t>(1));
        goto L_08AC2514;
    }
    goto L_08AC24FC;
L_08AC24FC:
    ctx.set_gpr(1, static_cast<std::int32_t>(ctx.gpr[6]) < 6 ? 1u : 0u);
    if (ctx.gpr[1] == 0u) {
    ctx.set_gpr(2, ctx.gpr[6] + static_cast<std::uint32_t>(-6));
        goto L_08AC250C;
    }
    goto L_08AC2508;
L_08AC2508:
    ctx.set_gpr(2, ctx.gpr[6] + static_cast<std::uint32_t>(58));
    goto L_08AC250C;
L_08AC250C:
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_08AC2564;
      }
      goto L_08AC2514;
    }
L_08AC2514:
    if (ctx.gpr[5] != ctx.gpr[2]) {
    ctx.set_gpr(2, 0u + static_cast<std::uint32_t>(2));
        goto L_08AC2524;
    }
    goto L_08AC251C;
L_08AC251C:
    { const bool branch_taken = 0u == 0u;
    ctx.set_gpr(2, ctx.gpr[6] + 0u);
      if (branch_taken) {
          goto L_08AC2564;
      }
      goto L_08AC2524;
    }
L_08AC2524:
    if (ctx.gpr[5] != ctx.gpr[2]) {
    ctx.set_gpr(2, 0u + static_cast<std::uint32_t>(3));
        goto L_08AC2534;
    }
    goto L_08AC252C;
L_08AC252C:
    { const bool branch_taken = 0u == 0u;
    ctx.set_gpr(2, ctx.gpr[6] + 0u);
      if (branch_taken) {
          goto L_08AC2564;
      }
      goto L_08AC2534;
    }
L_08AC2534:
    if (ctx.gpr[5] != ctx.gpr[2]) {
    ctx.set_gpr(2, 0u + static_cast<std::uint32_t>(4));
        goto L_08AC2544;
    }
    goto L_08AC253C;
L_08AC253C:
    { const bool branch_taken = 0u == 0u;
    ctx.set_gpr(2, ctx.gpr[6] + 0u);
      if (branch_taken) {
          goto L_08AC2564;
      }
      goto L_08AC2544;
    }
L_08AC2544:
    if (ctx.gpr[5] != ctx.gpr[2]) {
    ctx.set_gpr(2, 0u + static_cast<std::uint32_t>(5));
        goto L_08AC2554;
    }
    goto L_08AC254C;
L_08AC254C:
    { const bool branch_taken = 0u == 0u;
    ctx.set_gpr(2, ctx.gpr[6] + static_cast<std::uint32_t>(32));
      if (branch_taken) {
          goto L_08AC2564;
      }
      goto L_08AC2554;
    }
L_08AC2554:
    if (ctx.gpr[5] != ctx.gpr[2]) {
    ctx.set_gpr(2, 0u + 0u);
        goto L_08AC2564;
    }
    goto L_08AC255C;
L_08AC255C:
    { const bool branch_taken = 0u == 0u;
    ctx.set_gpr(2, ctx.gpr[6] + static_cast<std::uint32_t>(4));
      if (branch_taken) {
          goto L_08AC2564;
      }
      goto L_08AC2564;
    }
L_08AC2564:
    jump_target = ctx.gpr[31];
    // nop
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_08AC256C:
    ctx.set_gpr(29, ctx.gpr[29] + static_cast<std::uint32_t>(-16));
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(12), ctx.gpr[31]);
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(8), ctx.gpr[17]);
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(4), ctx.gpr[16]);
    ctx.set_gpr(16, ctx.gpr[4] + 0u);
    ctx.set_gpr(4, rt.memory().aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(8)));
    ctx.set_gpr(3, 0u + static_cast<std::uint32_t>(2));
    ctx.set_gpr(17, ctx.gpr[5] + 0u);
    { const bool branch_taken = ctx.gpr[4] == ctx.gpr[3];
    ctx.set_gpr(2, 0u + 0u);
      if (branch_taken) {
          goto L_08AC25F4;
      }
      goto L_08AC2594;
    }
L_08AC2594:
    ctx.set_gpr(6, 0u + static_cast<std::uint32_t>(1));
    if (ctx.gpr[4] == ctx.gpr[6]) {
    ctx.set_gpr(5, ctx.gpr[17] + 0u);
        goto L_08AC25D0;
    }
    goto L_08AC25A0;
L_08AC25A0:
    if (ctx.gpr[4] == 0u) {
    ctx.set_gpr(4, rt.memory().aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(4)));
        goto L_08AC25B0;
    }
    goto L_08AC25A8;
L_08AC25A8:
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_08AC25FC;
      }
      goto L_08AC25B0;
    }
L_08AC25B0:
    ctx.set_gpr(5, 0u + 0u);
    ctx.set_gpr(7, ctx.gpr[6] + 0u);
    ctx.set_gpr(31, 0x08AC25C0u);
    ctx.set_gpr(8, ctx.gpr[6] + 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0170_entry, 170u, 501u, 0x08AAE1A4u>(ctx, &aot_mem) && ctx.pc == 0x08AC25C0u) goto L_08AC25C0;
    return;
L_08AC25C0:
    ctx.set_gpr(2, rt.memory().aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(8)));
    ctx.set_gpr(2, ctx.gpr[2] + static_cast<std::uint32_t>(1));
    rt.memory().aot_store32(ctx.gpr[16] + static_cast<std::uint32_t>(8), ctx.gpr[2]);
    ctx.set_gpr(5, ctx.gpr[17] + 0u);
    goto L_08AC25D0;
L_08AC25D0:
    ctx.set_gpr(31, 0x08AC25D8u);
    ctx.set_gpr(4, ctx.gpr[16] + static_cast<std::uint32_t>(80));
    if (rt.invoke_chained_direct<&recomp_unit_0174_entry, 174u, 536u, 0x08ABDEB4u>(ctx, &aot_mem) && ctx.pc == 0x08AC25D8u) goto L_08AC25D8;
    return;
L_08AC25D8:
    ctx.set_gpr(2, ctx.gpr[2] & 255u);
    if (ctx.gpr[2] != 0u) {
    ctx.set_gpr(2, rt.memory().aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(8)));
        goto L_08AC25EC;
    }
    goto L_08AC25E4;
L_08AC25E4:
    { const bool branch_taken = 0u == 0u;
    ctx.set_gpr(2, 0u + 0u);
      if (branch_taken) {
          goto L_08AC25FC;
      }
      goto L_08AC25EC;
    }
L_08AC25EC:
    ctx.set_gpr(2, ctx.gpr[2] + static_cast<std::uint32_t>(1));
    rt.memory().aot_store32(ctx.gpr[16] + static_cast<std::uint32_t>(8), ctx.gpr[2]);
    goto L_08AC25F4;
L_08AC25F4:
    rt.memory().aot_store32(ctx.gpr[16] + static_cast<std::uint32_t>(8), 0u);
    ctx.set_gpr(2, 0u + static_cast<std::uint32_t>(1));
    goto L_08AC25FC;
L_08AC25FC:
    ctx.set_gpr(31, rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(12)));
    ctx.set_gpr(17, rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(8)));
    ctx.set_gpr(16, rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(4)));
    jump_target = ctx.gpr[31];
    ctx.set_gpr(29, ctx.gpr[29] + static_cast<std::uint32_t>(16));
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_08AC2610:
    ctx.set_gpr(29, ctx.gpr[29] + static_cast<std::uint32_t>(-32));
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(28), ctx.gpr[31]);
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(24), ctx.gpr[20]);
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(20), ctx.gpr[19]);
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(16), ctx.gpr[18]);
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(12), ctx.gpr[17]);
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(8), ctx.gpr[16]);
    ctx.set_gpr(17, ctx.gpr[4] + 0u);
    ctx.set_gpr(31, 0x08AC2638u);
    ctx.set_gpr(16, ctx.gpr[5] + 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0017_entry, 17u, 188u, 0x08848C60u>(ctx, &aot_mem) && ctx.pc == 0x08AC2638u) goto L_08AC2638;
    return;
L_08AC2638:
    ctx.set_gpr(4, ctx.gpr[2] + 0u);
    ctx.set_gpr(31, 0x08AC2644u);
    ctx.set_gpr(5, 0u + static_cast<std::uint32_t>(1));
    if (rt.invoke_chained_direct<&recomp_unit_0187_entry, 187u, 124u, 0x08AF0844u>(ctx, &aot_mem) && ctx.pc == 0x08AC2644u) goto L_08AC2644;
    return;
L_08AC2644:
    ctx.set_gpr(31, 0x08AC264Cu);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0017_entry, 17u, 189u, 0x08848C6Cu>(ctx, &aot_mem) && ctx.pc == 0x08AC264Cu) goto L_08AC264C;
    return;
L_08AC264C:
    ctx.set_gpr(5, 2231u << 16u);
    ctx.set_gpr(4, ctx.gpr[2] + 0u);
    ctx.set_gpr(31, 0x08AC265Cu);
    ctx.set_gpr(5, ctx.gpr[5] + static_cast<std::uint32_t>(4316));
    if (rt.invoke_chained_direct<&recomp_unit_0187_entry, 187u, 197u, 0x08AF0D70u>(ctx, &aot_mem) && ctx.pc == 0x08AC265Cu) goto L_08AC265C;
    return;
L_08AC265C:
    ctx.set_gpr(31, 0x08AC2664u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0017_entry, 17u, 190u, 0x08848C78u>(ctx, &aot_mem) && ctx.pc == 0x08AC2664u) goto L_08AC2664;
    return;
L_08AC2664:
    ctx.set_gpr(4, ctx.gpr[2] + 0u);
    ctx.set_gpr(31, 0x08AC2670u);
    ctx.set_gpr(5, 0u + 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0187_entry, 187u, 446u, 0x08AF1BACu>(ctx, &aot_mem) && ctx.pc == 0x08AC2670u) goto L_08AC2670;
    return;
L_08AC2670:
    ctx.set_gpr(4, rt.memory().aot_load32(ctx.gpr[17] + static_cast<std::uint32_t>(4)));
    ctx.set_gpr(31, 0x08AC267Cu);
    ctx.set_gpr(5, 0u + static_cast<std::uint32_t>(6));
    if (rt.invoke_chained_direct<&recomp_unit_0170_entry, 170u, 530u, 0x08AAE348u>(ctx, &aot_mem) && ctx.pc == 0x08AC267Cu) goto L_08AC267C;
    return;
L_08AC267C:
    ctx.set_gpr(25, rt.memory().aot_load32(ctx.gpr[17] + static_cast<std::uint32_t>(60)));
    ctx.set_gpr(2, 16704u << 16u);
    ctx.fpr[12] = std::bit_cast<float>(ctx.gpr[2]);
    ctx.set_gpr(25, rt.memory().aot_load32(ctx.gpr[25] + static_cast<std::uint32_t>(12)));
    ctx.set_gpr(2, 16576u << 16u);
    ctx.fpr[13] = std::bit_cast<float>(ctx.gpr[2]);
    ctx.set_gpr(4, ctx.gpr[17] + static_cast<std::uint32_t>(36));
    ctx.set_gpr(5, 0u + static_cast<std::uint32_t>(6));
    ctx.set_gpr(6, 0u + static_cast<std::uint32_t>(82));
    ctx.set_gpr(7, 0u + static_cast<std::uint32_t>(1));
    jump_target = ctx.gpr[25];
    ctx.set_gpr(31, 0x08AC26ACu);
    ctx.set_gpr(8, 0u + 0u);
    ctx.pc = jump_target;
    if (rt.invoke_chained_call(ctx, &aot_mem) && ctx.pc == 0x08AC26ACu) goto L_08AC26AC;
    return;
L_08AC26AC:
    ctx.set_gpr(31, 0x08AC26B4u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0017_entry, 17u, 191u, 0x08848C84u>(ctx, &aot_mem) && ctx.pc == 0x08AC26B4u) goto L_08AC26B4;
    return;
L_08AC26B4:
    ctx.set_gpr(31, 0x08AC26BCu);
    ctx.set_gpr(4, ctx.gpr[2] + 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0172_entry, 172u, 74u, 0x08AB4530u>(ctx, &aot_mem) && ctx.pc == 0x08AC26BCu) goto L_08AC26BC;
    return;
L_08AC26BC:
    ctx.set_gpr(19, ctx.gpr[2] + 0u);
    ctx.set_gpr(4, ctx.gpr[17] + 0u);
    ctx.set_gpr(31, 0x08AC26CCu);
    ctx.set_gpr(5, ctx.gpr[19] + 0u);
    goto L_08AC2B24;
L_08AC26CC:
    ctx.set_gpr(4, rt.memory().aot_load32(ctx.gpr[17] + static_cast<std::uint32_t>(4)));
    ctx.set_gpr(5, 0u + static_cast<std::uint32_t>(1));
    ctx.set_gpr(6, ctx.gpr[5] + 0u);
    ctx.set_gpr(7, 0u + 0u);
    ctx.set_gpr(31, 0x08AC26E4u);
    ctx.set_gpr(8, ctx.gpr[5] + 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0170_entry, 170u, 501u, 0x08AAE1A4u>(ctx, &aot_mem) && ctx.pc == 0x08AC26E4u) goto L_08AC26E4;
    return;
L_08AC26E4:
    ctx.set_gpr(31, 0x08AC26ECu);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0017_entry, 17u, 191u, 0x08848C84u>(ctx, &aot_mem) && ctx.pc == 0x08AC26ECu) goto L_08AC26EC;
    return;
L_08AC26EC:
    ctx.set_gpr(4, ctx.gpr[2] + 0u);
    ctx.set_gpr(31, 0x08AC26F8u);
    ctx.set_gpr(5, ctx.gpr[19] + 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0172_entry, 172u, 73u, 0x08AB4508u>(ctx, &aot_mem) && ctx.pc == 0x08AC26F8u) goto L_08AC26F8;
    return;
L_08AC26F8:
    ctx.set_gpr(5, rt.memory().aot_load32(ctx.gpr[17] + static_cast<std::uint32_t>(184)));
    ctx.set_gpr(20, ctx.gpr[2] + 0u);
    ctx.set_gpr(31, 0x08AC2708u);
    ctx.set_gpr(4, ctx.gpr[20] + 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0159_entry, 159u, 401u, 0x08A81268u>(ctx, &aot_mem) && ctx.pc == 0x08AC2708u) goto L_08AC2708;
    return;
L_08AC2708:
    ctx.set_gpr(5, rt.memory().aot_load32(ctx.gpr[17] + static_cast<std::uint32_t>(184)));
    ctx.set_gpr(18, ctx.gpr[2] + 0u);
    ctx.set_gpr(31, 0x08AC2718u);
    ctx.set_gpr(4, ctx.gpr[20] + 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0187_entry, 187u, 645u, 0x08AF2938u>(ctx, &aot_mem) && ctx.pc == 0x08AC2718u) goto L_08AC2718;
    return;
L_08AC2718:
    ctx.set_gpr(7, rt.memory().aot_load32(ctx.gpr[18] + static_cast<std::uint32_t>(12)));
    ctx.set_gpr(6, rt.memory().aot_load32(ctx.gpr[17] + static_cast<std::uint32_t>(184)));
    ctx.set_gpr(5, ctx.gpr[20] + 0u);
    ctx.set_gpr(8, ctx.gpr[19] + 0u);
    ctx.set_gpr(31, 0x08AC2730u);
    ctx.set_gpr(4, ctx.gpr[17] + 0u);
    goto L_08AC28D0;
L_08AC2730:
    ctx.set_gpr(25, rt.memory().aot_load32(ctx.gpr[17] + static_cast<std::uint32_t>(180)));
    ctx.set_gpr(4, ctx.gpr[17] + static_cast<std::uint32_t>(80));
    ctx.set_gpr(5, 0u + 0u);
    ctx.set_gpr(25, rt.memory().aot_load32(ctx.gpr[25] + static_cast<std::uint32_t>(16)));
    jump_target = ctx.gpr[25];
    ctx.set_gpr(31, 0x08AC2748u);
    ctx.set_gpr(6, 0u + 0u);
    ctx.pc = jump_target;
    if (rt.invoke_chained_call(ctx, &aot_mem) && ctx.pc == 0x08AC2748u) goto L_08AC2748;
    return;
L_08AC2748:
    ctx.set_gpr(4, rt.memory().aot_load32(ctx.gpr[17] + static_cast<std::uint32_t>(4)));
    ctx.fpr[12] = std::bit_cast<float>(rt.memory().aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(80)));
    ctx.set_gpr(31, 0x08AC2758u);
    ctx.set_gpr(5, 0u + 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0170_entry, 170u, 496u, 0x08AAE130u>(ctx, &aot_mem) && ctx.pc == 0x08AC2758u) goto L_08AC2758;
    return;
L_08AC2758:
    ctx.set_gpr(2, rt.memory().aot_load8(ctx.gpr[17] + static_cast<std::uint32_t>(196)));
    if (ctx.gpr[2] == 0u) {
    ctx.set_gpr(4, ctx.gpr[17] + static_cast<std::uint32_t>(64));
        goto L_08AC2780;
    }
    goto L_08AC2764;
L_08AC2764:
    ctx.set_gpr(4, ctx.gpr[17] + static_cast<std::uint32_t>(64));
    ctx.set_gpr(5, 0u + static_cast<std::uint32_t>(1));
    ctx.set_gpr(6, ctx.gpr[17] + static_cast<std::uint32_t>(80));
    ctx.set_gpr(31, 0x08AC2778u);
    ctx.set_gpr(7, 0u + 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0174_entry, 174u, 831u, 0x08ABF318u>(ctx, &aot_mem) && ctx.pc == 0x08AC2778u) goto L_08AC2778;
    return;
L_08AC2778:
    { const bool branch_taken = 0u == 0u;
    ctx.set_gpr(5, ctx.gpr[16] + 0u);
      if (branch_taken) {
          goto L_08AC2794;
      }
      goto L_08AC2780;
    }
L_08AC2780:
    ctx.set_gpr(5, 0u + static_cast<std::uint32_t>(1));
    ctx.set_gpr(6, 0u + 0u);
    ctx.set_gpr(31, 0x08AC2790u);
    ctx.set_gpr(7, 0u + 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0174_entry, 174u, 831u, 0x08ABF318u>(ctx, &aot_mem) && ctx.pc == 0x08AC2790u) goto L_08AC2790;
    return;
L_08AC2790:
    ctx.set_gpr(5, ctx.gpr[16] + 0u);
    goto L_08AC2794;
L_08AC2794:
    ctx.set_gpr(31, 0x08AC279Cu);
    ctx.set_gpr(4, ctx.gpr[17] + static_cast<std::uint32_t>(64));
    if (rt.invoke_chained_direct<&recomp_unit_0174_entry, 174u, 839u, 0x08ABF36Cu>(ctx, &aot_mem) && ctx.pc == 0x08AC279Cu) goto L_08AC279C;
    return;
L_08AC279C:
    ctx.set_gpr(2, 2231u << 16u);
    ctx.fpr[2] = std::bit_cast<float>(rt.memory().aot_load32(ctx.gpr[2] + static_cast<std::uint32_t>(4292)));
    ctx.set_gpr(2, 2231u << 16u);
    ctx.fpr[1] = std::bit_cast<float>(rt.memory().aot_load32(ctx.gpr[2] + static_cast<std::uint32_t>(4296)));
    ctx.set_gpr(2, 2231u << 16u);
    ctx.fpr[0] = std::bit_cast<float>(rt.memory().aot_load32(ctx.gpr[2] + static_cast<std::uint32_t>(4300)));
    rt.memory().aot_store32(ctx.gpr[17] + static_cast<std::uint32_t>(12), std::bit_cast<std::uint32_t>(ctx.fpr[2]));
    rt.memory().aot_store32(ctx.gpr[17] + static_cast<std::uint32_t>(16), std::bit_cast<std::uint32_t>(ctx.fpr[1]));
    rt.memory().aot_store32(ctx.gpr[17] + static_cast<std::uint32_t>(20), std::bit_cast<std::uint32_t>(ctx.fpr[0]));
    ctx.set_gpr(2, rt.memory().aot_load8(ctx.gpr[17] + static_cast<std::uint32_t>(196)));
    if (ctx.gpr[2] == 0u) {
    ctx.set_gpr(3, 2233u << 16u);
        goto L_08AC27F4;
    }
    goto L_08AC27CC;
L_08AC27CC:
    ctx.set_gpr(2, 2231u << 16u);
    ctx.fpr[2] = std::bit_cast<float>(rt.memory().aot_load32(ctx.gpr[2] + static_cast<std::uint32_t>(4304)));
    ctx.set_gpr(2, 2231u << 16u);
    ctx.fpr[1] = std::bit_cast<float>(rt.memory().aot_load32(ctx.gpr[2] + static_cast<std::uint32_t>(4308)));
    ctx.set_gpr(2, 2231u << 16u);
    ctx.fpr[0] = std::bit_cast<float>(rt.memory().aot_load32(ctx.gpr[2] + static_cast<std::uint32_t>(4312)));
    rt.memory().aot_store32(ctx.gpr[17] + static_cast<std::uint32_t>(24), std::bit_cast<std::uint32_t>(ctx.fpr[2]));
    rt.memory().aot_store32(ctx.gpr[17] + static_cast<std::uint32_t>(28), std::bit_cast<std::uint32_t>(ctx.fpr[1]));
    { const bool branch_taken = 0u == 0u;
    rt.memory().aot_store32(ctx.gpr[17] + static_cast<std::uint32_t>(32), std::bit_cast<std::uint32_t>(ctx.fpr[0]));
      if (branch_taken) {
          goto L_08AC2814;
      }
      goto L_08AC27F4;
    }
L_08AC27F4:
    ctx.set_gpr(3, ctx.gpr[3] + static_cast<std::uint32_t>(8516));
    ctx.set_gpr(2, 2233u << 16u);
    ctx.fpr[2] = std::bit_cast<float>(rt.memory().aot_load32(ctx.gpr[2] + static_cast<std::uint32_t>(8516)));
    ctx.fpr[1] = std::bit_cast<float>(rt.memory().aot_load32(ctx.gpr[3] + static_cast<std::uint32_t>(4)));
    ctx.fpr[0] = std::bit_cast<float>(rt.memory().aot_load32(ctx.gpr[3] + static_cast<std::uint32_t>(8)));
    rt.memory().aot_store32(ctx.gpr[17] + static_cast<std::uint32_t>(24), std::bit_cast<std::uint32_t>(ctx.fpr[2]));
    rt.memory().aot_store32(ctx.gpr[17] + static_cast<std::uint32_t>(28), std::bit_cast<std::uint32_t>(ctx.fpr[1]));
    rt.memory().aot_store32(ctx.gpr[17] + static_cast<std::uint32_t>(32), std::bit_cast<std::uint32_t>(ctx.fpr[0]));
    goto L_08AC2814;
L_08AC2814:
    ctx.set_gpr(31, rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(28)));
    ctx.set_gpr(20, rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(24)));
    ctx.set_gpr(19, rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(20)));
    ctx.set_gpr(18, rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(16)));
    ctx.set_gpr(17, rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(12)));
    ctx.set_gpr(16, rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(8)));
    ctx.set_gpr(2, 0u + static_cast<std::uint32_t>(1));
    jump_target = ctx.gpr[31];
    ctx.set_gpr(29, ctx.gpr[29] + static_cast<std::uint32_t>(32));
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_08AC2838:
    ctx.set_gpr(29, ctx.gpr[29] + static_cast<std::uint32_t>(-16));
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(12), ctx.gpr[31]);
    ctx.set_gpr(31, 0x08AC2848u);
    ctx.set_gpr(4, ctx.gpr[4] + static_cast<std::uint32_t>(80));
    if (rt.invoke_chained_direct<&recomp_unit_0174_entry, 174u, 547u, 0x08ABDF4Cu>(ctx, &aot_mem) && ctx.pc == 0x08AC2848u) goto L_08AC2848;
    return;
L_08AC2848:
    ctx.set_gpr(31, rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(12)));
    ctx.set_gpr(2, 0u + static_cast<std::uint32_t>(1));
    jump_target = ctx.gpr[31];
    ctx.set_gpr(29, ctx.gpr[29] + static_cast<std::uint32_t>(16));
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_08AC2858:
    ctx.set_gpr(29, ctx.gpr[29] + static_cast<std::uint32_t>(-16));
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(12), ctx.gpr[31]);
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(8), ctx.gpr[16]);
    ctx.set_gpr(16, ctx.gpr[4] + 0u);
    ctx.set_gpr(31, 0x08AC2870u);
    ctx.set_gpr(4, ctx.gpr[16] + static_cast<std::uint32_t>(80));
    if (rt.invoke_chained_direct<&recomp_unit_0174_entry, 174u, 554u, 0x08ABDFB4u>(ctx, &aot_mem) && ctx.pc == 0x08AC2870u) goto L_08AC2870;
    return;
L_08AC2870:
    ctx.set_gpr(25, rt.memory().aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(60)));
    ctx.set_gpr(25, rt.memory().aot_load32(ctx.gpr[25] + static_cast<std::uint32_t>(16)));
    jump_target = ctx.gpr[25];
    ctx.set_gpr(31, 0x08AC2880u);
    ctx.set_gpr(4, ctx.gpr[16] + static_cast<std::uint32_t>(36));
    ctx.pc = jump_target;
    if (rt.invoke_chained_call(ctx, &aot_mem) && ctx.pc == 0x08AC2880u) goto L_08AC2880;
    return;
L_08AC2880:
    ctx.set_gpr(31, 0x08AC2888u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0017_entry, 17u, 192u, 0x08848C90u>(ctx, &aot_mem) && ctx.pc == 0x08AC2888u) goto L_08AC2888;
    return;
L_08AC2888:
    ctx.set_gpr(31, 0x08AC2890u);
    ctx.set_gpr(4, ctx.gpr[2] + 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0191_entry, 191u, 442u, 0x08B02224u>(ctx, &aot_mem) && ctx.pc == 0x08AC2890u) goto L_08AC2890;
    return;
L_08AC2890:
    ctx.set_gpr(31, 0x08AC2898u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0017_entry, 17u, 190u, 0x08848C78u>(ctx, &aot_mem) && ctx.pc == 0x08AC2898u) goto L_08AC2898;
    return;
L_08AC2898:
    ctx.set_gpr(31, 0x08AC28A0u);
    ctx.set_gpr(4, ctx.gpr[2] + 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0187_entry, 187u, 455u, 0x08AF1C18u>(ctx, &aot_mem) && ctx.pc == 0x08AC28A0u) goto L_08AC28A0;
    return;
L_08AC28A0:
    ctx.set_gpr(31, 0x08AC28A8u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0017_entry, 17u, 189u, 0x08848C6Cu>(ctx, &aot_mem) && ctx.pc == 0x08AC28A8u) goto L_08AC28A8;
    return;
L_08AC28A8:
    ctx.set_gpr(31, 0x08AC28B0u);
    ctx.set_gpr(4, ctx.gpr[2] + 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0187_entry, 187u, 208u, 0x08AF0DE8u>(ctx, &aot_mem) && ctx.pc == 0x08AC28B0u) goto L_08AC28B0;
    return;
L_08AC28B0:
    ctx.set_gpr(31, 0x08AC28B8u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0017_entry, 17u, 188u, 0x08848C60u>(ctx, &aot_mem) && ctx.pc == 0x08AC28B8u) goto L_08AC28B8;
    return;
L_08AC28B8:
    ctx.set_gpr(31, 0x08AC28C0u);
    ctx.set_gpr(4, ctx.gpr[2] + 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0159_entry, 159u, 161u, 0x08A806ECu>(ctx, &aot_mem) && ctx.pc == 0x08AC28C0u) goto L_08AC28C0;
    return;
L_08AC28C0:
    ctx.set_gpr(31, rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(12)));
    ctx.set_gpr(16, rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(8)));
    jump_target = ctx.gpr[31];
    ctx.set_gpr(29, ctx.gpr[29] + static_cast<std::uint32_t>(16));
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_08AC28D0:
    ctx.set_gpr(29, ctx.gpr[29] + static_cast<std::uint32_t>(-48));
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(28), ctx.gpr[31]);
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(24), ctx.gpr[19]);
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(20), ctx.gpr[18]);
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(16), ctx.gpr[17]);
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(12), ctx.gpr[16]);
    rt.memory().aot_store32(ctx.gpr[4] + static_cast<std::uint32_t>(184), ctx.gpr[6]);
    rt.memory().aot_store32(ctx.gpr[4] + static_cast<std::uint32_t>(188), ctx.gpr[7]);
    rt.memory().aot_store32(ctx.gpr[4] + static_cast<std::uint32_t>(192), ctx.gpr[8]);
    ctx.set_gpr(17, ctx.gpr[4] + 0u);
    ctx.set_gpr(4, ctx.gpr[5] + 0u);
    ctx.set_gpr(31, 0x08AC2904u);
    ctx.set_gpr(5, rt.memory().aot_load32(ctx.gpr[17] + static_cast<std::uint32_t>(184)));
    if (rt.invoke_chained_direct<&recomp_unit_0158_entry, 158u, 886u, 0x08A7F1E8u>(ctx, &aot_mem) && ctx.pc == 0x08AC2904u) goto L_08AC2904;
    return;
L_08AC2904:
    ctx.set_gpr(7, rt.memory().aot_load32(ctx.gpr[17] + static_cast<std::uint32_t>(188)));
    ctx.set_gpr(5, ctx.gpr[2] & 255u);
    ctx.set_gpr(2, 0u + static_cast<std::uint32_t>(-1));
    if (ctx.gpr[7] != ctx.gpr[2]) {
    ctx.set_gpr(6, rt.memory().aot_load32(ctx.gpr[17] + static_cast<std::uint32_t>(192)));
        goto L_08AC2920;
    }
    goto L_08AC2918;
L_08AC2918:
    ctx.set_gpr(5, 0u + 0u);
    ctx.set_gpr(6, rt.memory().aot_load32(ctx.gpr[17] + static_cast<std::uint32_t>(192)));
    goto L_08AC2920;
L_08AC2920:
    ctx.set_gpr(31, 0x08AC2928u);
    ctx.set_gpr(4, ctx.gpr[17] + static_cast<std::uint32_t>(80));
    if (rt.invoke_chained_direct<&recomp_unit_0174_entry, 174u, 602u, 0x08ABE2DCu>(ctx, &aot_mem) && ctx.pc == 0x08AC2928u) goto L_08AC2928;
    return;
L_08AC2928:
    ctx.set_gpr(25, rt.memory().aot_load32(ctx.gpr[17] + static_cast<std::uint32_t>(180)));
    ctx.set_gpr(5, rt.memory().aot_load8(ctx.gpr[17] + static_cast<std::uint32_t>(196)));
    ctx.set_gpr(4, ctx.gpr[17] + static_cast<std::uint32_t>(80));
    ctx.set_gpr(25, rt.memory().aot_load32(ctx.gpr[25] + static_cast<std::uint32_t>(16)));
    jump_target = ctx.gpr[25];
    ctx.set_gpr(31, 0x08AC2940u);
    ctx.set_gpr(6, 0u + static_cast<std::uint32_t>(1));
    ctx.pc = jump_target;
    if (rt.invoke_chained_call(ctx, &aot_mem) && ctx.pc == 0x08AC2940u) goto L_08AC2940;
    return;
L_08AC2940:
    ctx.set_gpr(4, rt.memory().aot_load32(ctx.gpr[17] + static_cast<std::uint32_t>(192)));
    { const bool branch_taken = ctx.gpr[4] != 0u;
    ctx.set_gpr(16, 0u + 0u);
      if (branch_taken) {
          goto L_08AC2954;
      }
      goto L_08AC294C;
    }
L_08AC294C:
    { const bool branch_taken = 0u == 0u;
    ctx.set_gpr(5, rt.memory().aot_load32(ctx.gpr[17] + static_cast<std::uint32_t>(188)));
      if (branch_taken) {
          goto L_08AC29C8;
      }
      goto L_08AC2954;
    }
L_08AC2954:
    ctx.set_gpr(3, 0u + static_cast<std::uint32_t>(1));
    if (ctx.gpr[4] != ctx.gpr[3]) {
    ctx.set_gpr(3, 0u + static_cast<std::uint32_t>(2));
        goto L_08AC2970;
    }
    goto L_08AC2960;
L_08AC2960:
    ctx.set_gpr(2, rt.memory().aot_load32(ctx.gpr[17] + static_cast<std::uint32_t>(188)));
    { const bool branch_taken = 0u == 0u;
    ctx.set_gpr(5, ctx.gpr[2] + static_cast<std::uint32_t>(10));
      if (branch_taken) {
          goto L_08AC29C8;
      }
      goto L_08AC296C;
    }
L_08AC296C:
    ctx.set_gpr(3, 0u + static_cast<std::uint32_t>(2));
    goto L_08AC2970;
L_08AC2970:
    if (ctx.gpr[4] != ctx.gpr[3]) {
    ctx.set_gpr(3, 0u + static_cast<std::uint32_t>(3));
        goto L_08AC2988;
    }
    goto L_08AC2978;
L_08AC2978:
    ctx.set_gpr(2, rt.memory().aot_load32(ctx.gpr[17] + static_cast<std::uint32_t>(188)));
    { const bool branch_taken = 0u == 0u;
    ctx.set_gpr(5, ctx.gpr[2] + static_cast<std::uint32_t>(10));
      if (branch_taken) {
          goto L_08AC29C8;
      }
      goto L_08AC2984;
    }
L_08AC2984:
    ctx.set_gpr(3, 0u + static_cast<std::uint32_t>(3));
    goto L_08AC2988;
L_08AC2988:
    if (ctx.gpr[4] != ctx.gpr[3]) {
    ctx.set_gpr(3, 0u + static_cast<std::uint32_t>(4));
        goto L_08AC29A0;
    }
    goto L_08AC2990;
L_08AC2990:
    ctx.set_gpr(2, rt.memory().aot_load32(ctx.gpr[17] + static_cast<std::uint32_t>(188)));
    { const bool branch_taken = 0u == 0u;
    ctx.set_gpr(5, ctx.gpr[2] + static_cast<std::uint32_t>(10));
      if (branch_taken) {
          goto L_08AC29C8;
      }
      goto L_08AC299C;
    }
L_08AC299C:
    ctx.set_gpr(3, 0u + static_cast<std::uint32_t>(4));
    goto L_08AC29A0;
L_08AC29A0:
    if (ctx.gpr[4] != ctx.gpr[3]) {
    ctx.set_gpr(3, 0u + static_cast<std::uint32_t>(5));
        goto L_08AC29B8;
    }
    goto L_08AC29A8;
L_08AC29A8:
    ctx.set_gpr(2, rt.memory().aot_load32(ctx.gpr[17] + static_cast<std::uint32_t>(188)));
    { const bool branch_taken = 0u == 0u;
    ctx.set_gpr(5, ctx.gpr[2] + static_cast<std::uint32_t>(68));
      if (branch_taken) {
          goto L_08AC29C8;
      }
      goto L_08AC29B4;
    }
L_08AC29B4:
    ctx.set_gpr(3, 0u + static_cast<std::uint32_t>(5));
    goto L_08AC29B8;
L_08AC29B8:
    if (ctx.gpr[4] != ctx.gpr[3]) {
    ctx.set_gpr(31, rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(28)));
        goto L_08AC2B0C;
    }
    goto L_08AC29C0;
L_08AC29C0:
    ctx.set_gpr(2, rt.memory().aot_load32(ctx.gpr[17] + static_cast<std::uint32_t>(188)));
    ctx.set_gpr(5, ctx.gpr[2] + static_cast<std::uint32_t>(94));
    goto L_08AC29C8;
L_08AC29C8:
    ctx.set_gpr(31, 0x08AC29D0u);
    ctx.set_gpr(4, ctx.gpr[29] + static_cast<std::uint32_t>(40));
    if (rt.invoke_chained_direct<&recomp_unit_0023_entry, 23u, 624u, 0x08862664u>(ctx, &aot_mem) && ctx.pc == 0x08AC29D0u) goto L_08AC29D0;
    return;
L_08AC29D0:
    ctx.set_gpr(19, 0u + 0u);
    ctx.set_gpr(18, ctx.gpr[17] + 0u);
    goto L_08AC29D8;
L_08AC29D8:
    ctx.set_gpr(31, 0x08AC29E0u);
    ctx.set_gpr(4, ctx.gpr[18] + static_cast<std::uint32_t>(200));
    if (rt.invoke_chained_direct<&recomp_unit_0169_entry, 169u, 664u, 0x08AAA488u>(ctx, &aot_mem) && ctx.pc == 0x08AC29E0u) goto L_08AC29E0;
    return;
L_08AC29E0:
    ctx.set_gpr(19, ctx.gpr[19] + static_cast<std::uint32_t>(1));
    ctx.set_gpr(3, static_cast<std::int32_t>(ctx.gpr[19]) < 3 ? 1u : 0u);
    { const bool branch_taken = ctx.gpr[3] != 0u;
    ctx.set_gpr(18, ctx.gpr[18] + static_cast<std::uint32_t>(16));
      if (branch_taken) {
          goto L_08AC29D8;
      }
      goto L_08AC29F0;
    }
L_08AC29F0:
    ctx.set_gpr(4, rt.memory().aot_load32(ctx.gpr[17] + static_cast<std::uint32_t>(188)));
    ctx.set_gpr(3, 0u + static_cast<std::uint32_t>(-1));
    { const bool branch_taken = ctx.gpr[4] == ctx.gpr[3];
    ctx.set_gpr(5, 0u + 0u);
      if (branch_taken) {
          goto L_08AC2B08;
      }
      goto L_08AC2A00;
    }
L_08AC2A00:
    ctx.set_gpr(3, rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(40)));
    { const bool branch_taken = static_cast<std::int32_t>(ctx.gpr[3]) >= 0;
    // nop
      if (branch_taken) {
          goto L_08AC2A10;
      }
      goto L_08AC2A0C;
    }
L_08AC2A0C:
    ctx.set_gpr(5, 0u + static_cast<std::uint32_t>(1));
    goto L_08AC2A10;
L_08AC2A10:
    { const bool branch_taken = ctx.gpr[5] == 0u;
    // nop
      if (branch_taken) {
          goto L_08AC2A30;
      }
      goto L_08AC2A18;
    }
L_08AC2A18:
    ctx.set_gpr(2, rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(44)));
    if (ctx.gpr[2] == 0u) {
    ctx.set_gpr(4, ctx.gpr[17] + static_cast<std::uint32_t>(200));
        goto L_08AC2AFC;
    }
    goto L_08AC2A24;
L_08AC2A24:
    rt.memory().aot_store32(ctx.gpr[17] + static_cast<std::uint32_t>(200), ctx.gpr[2]);
    { const bool branch_taken = 0u == 0u;
    ctx.set_gpr(16, ctx.gpr[16] + static_cast<std::uint32_t>(1));
      if (branch_taken) {
          goto L_08AC2AF8;
      }
      goto L_08AC2A30;
    }
L_08AC2A30:
    ctx.set_gpr(3, 2231u << 16u);
    ctx.set_gpr(3, ctx.gpr[3] + static_cast<std::uint32_t>(4332));
    rt.memory().aot_store32(ctx.gpr[17] + static_cast<std::uint32_t>(200), ctx.gpr[3]);
    ctx.set_gpr(4, rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(44)));
    { const bool branch_taken = ctx.gpr[4] == 0u;
    ctx.set_gpr(16, ctx.gpr[16] + static_cast<std::uint32_t>(1));
      if (branch_taken) {
          goto L_08AC2A58;
      }
      goto L_08AC2A48;
    }
L_08AC2A48:
    ctx.set_gpr(3, ctx.gpr[16] << 4u);
    ctx.set_gpr(3, ctx.gpr[3] + ctx.gpr[17]);
    rt.memory().aot_store32(ctx.gpr[3] + static_cast<std::uint32_t>(200), ctx.gpr[4]);
    ctx.set_gpr(16, ctx.gpr[16] + static_cast<std::uint32_t>(1));
    goto L_08AC2A58;
L_08AC2A58:
    ctx.set_gpr(4, rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(40)));
    ctx.set_gpr(3, 0u + static_cast<std::uint32_t>(4));
    if (ctx.gpr[4] == ctx.gpr[3]) {
    ctx.set_gpr(2, ctx.gpr[16] << 4u);
        goto L_08AC2AD8;
    }
    goto L_08AC2A68;
L_08AC2A68:
    ctx.set_gpr(3, 0u + static_cast<std::uint32_t>(3));
    { const bool branch_taken = ctx.gpr[4] == ctx.gpr[3];
    // nop
      if (branch_taken) {
          goto L_08AC2AD4;
      }
      goto L_08AC2A74;
    }
L_08AC2A74:
    ctx.set_gpr(3, 0u + static_cast<std::uint32_t>(2));
    if (ctx.gpr[4] == ctx.gpr[3]) {
    ctx.set_gpr(2, ctx.gpr[16] << 4u);
        goto L_08AC2ABC;
    }
    goto L_08AC2A80;
L_08AC2A80:
    ctx.set_gpr(3, 0u + static_cast<std::uint32_t>(1));
    { const bool branch_taken = ctx.gpr[4] == ctx.gpr[3];
    // nop
      if (branch_taken) {
          goto L_08AC2AB8;
      }
      goto L_08AC2A8C;
    }
L_08AC2A8C:
    if (ctx.gpr[4] == 0u) {
    ctx.set_gpr(2, ctx.gpr[16] << 4u);
        goto L_08AC2AA0;
    }
    goto L_08AC2A94;
L_08AC2A94:
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_08AC2AF0;
      }
      goto L_08AC2A9C;
    }
L_08AC2A9C:
    ctx.set_gpr(2, ctx.gpr[16] << 4u);
    goto L_08AC2AA0;
L_08AC2AA0:
    ctx.set_gpr(3, 2231u << 16u);
    ctx.set_gpr(3, ctx.gpr[3] + static_cast<std::uint32_t>(4352));
    ctx.set_gpr(2, ctx.gpr[2] + ctx.gpr[17]);
    rt.memory().aot_store32(ctx.gpr[2] + static_cast<std::uint32_t>(200), ctx.gpr[3]);
    { const bool branch_taken = 0u == 0u;
    ctx.set_gpr(16, ctx.gpr[16] + static_cast<std::uint32_t>(1));
      if (branch_taken) {
          goto L_08AC2AF8;
      }
      goto L_08AC2AB8;
    }
L_08AC2AB8:
    ctx.set_gpr(2, ctx.gpr[16] << 4u);
    goto L_08AC2ABC;
L_08AC2ABC:
    ctx.set_gpr(3, 2231u << 16u);
    ctx.set_gpr(3, ctx.gpr[3] + static_cast<std::uint32_t>(4372));
    ctx.set_gpr(2, ctx.gpr[2] + ctx.gpr[17]);
    rt.memory().aot_store32(ctx.gpr[2] + static_cast<std::uint32_t>(200), ctx.gpr[3]);
    { const bool branch_taken = 0u == 0u;
    ctx.set_gpr(16, ctx.gpr[16] + static_cast<std::uint32_t>(1));
      if (branch_taken) {
          goto L_08AC2AF8;
      }
      goto L_08AC2AD4;
    }
L_08AC2AD4:
    ctx.set_gpr(2, ctx.gpr[16] << 4u);
    goto L_08AC2AD8;
L_08AC2AD8:
    ctx.set_gpr(3, 2231u << 16u);
    ctx.set_gpr(3, ctx.gpr[3] + static_cast<std::uint32_t>(4392));
    ctx.set_gpr(2, ctx.gpr[2] + ctx.gpr[17]);
    rt.memory().aot_store32(ctx.gpr[2] + static_cast<std::uint32_t>(200), ctx.gpr[3]);
    { const bool branch_taken = 0u == 0u;
    ctx.set_gpr(16, ctx.gpr[16] + static_cast<std::uint32_t>(1));
      if (branch_taken) {
          goto L_08AC2AF8;
      }
      goto L_08AC2AF0;
    }
L_08AC2AF0:
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_08AC2B08;
      }
      goto L_08AC2AF8;
    }
L_08AC2AF8:
    ctx.set_gpr(4, ctx.gpr[17] + static_cast<std::uint32_t>(200));
    goto L_08AC2AFC;
L_08AC2AFC:
    ctx.set_gpr(6, ctx.gpr[16] + 0u);
    ctx.set_gpr(31, 0x08AC2B08u);
    ctx.set_gpr(5, 0u + static_cast<std::uint32_t>(3));
    if (rt.invoke_chained_direct<&recomp_unit_0174_entry, 174u, 823u, 0x08ABF23Cu>(ctx, &aot_mem) && ctx.pc == 0x08AC2B08u) goto L_08AC2B08;
    return;
L_08AC2B08:
    ctx.set_gpr(31, rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(28)));
    goto L_08AC2B0C;
L_08AC2B0C:
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
L_08AC2B24:
    ctx.set_gpr(29, ctx.gpr[29] + static_cast<std::uint32_t>(-16));
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(12), ctx.gpr[31]);
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(8), ctx.gpr[16]);
    ctx.set_gpr(2, rt.memory().aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(4)));
    ctx.set_gpr(16, ctx.gpr[4] + 0u);
    { const bool branch_taken = ctx.gpr[5] != 0u;
    ctx.set_gpr(4, ctx.gpr[2] + static_cast<std::uint32_t>(25712));
      if (branch_taken) {
          goto L_08AC2B50;
      }
      goto L_08AC2B40;
    }
L_08AC2B40:
    ctx.set_gpr(31, 0x08AC2B48u);
    // nop
    goto L_08AC2C10;
L_08AC2B48:
    { const bool branch_taken = 0u == 0u;
    ctx.set_gpr(3, rt.memory().aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(4)));
      if (branch_taken) {
          goto L_08AC2BC8;
      }
      goto L_08AC2B50;
    }
L_08AC2B50:
    ctx.set_gpr(2, 0u + static_cast<std::uint32_t>(1));
    if (ctx.gpr[5] != ctx.gpr[2]) {
    ctx.set_gpr(3, 0u + static_cast<std::uint32_t>(2));
        goto L_08AC2B6C;
    }
    goto L_08AC2B5C;
L_08AC2B5C:
    ctx.set_gpr(31, 0x08AC2B64u);
    ctx.set_gpr(5, 0u + 0u);
    goto L_08AC2BF0;
L_08AC2B64:
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_08AC2BC4;
      }
      goto L_08AC2B6C;
    }
L_08AC2B6C:
    if (ctx.gpr[5] != ctx.gpr[3]) {
    ctx.set_gpr(2, 0u + static_cast<std::uint32_t>(3));
        goto L_08AC2B84;
    }
    goto L_08AC2B74;
L_08AC2B74:
    ctx.set_gpr(31, 0x08AC2B7Cu);
    ctx.set_gpr(5, ctx.gpr[2] + 0u);
    goto L_08AC2BF0;
L_08AC2B7C:
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_08AC2BC4;
      }
      goto L_08AC2B84;
    }
L_08AC2B84:
    if (ctx.gpr[5] != ctx.gpr[2]) {
    ctx.set_gpr(3, 0u + static_cast<std::uint32_t>(4));
        goto L_08AC2B9C;
    }
    goto L_08AC2B8C;
L_08AC2B8C:
    ctx.set_gpr(31, 0x08AC2B94u);
    ctx.set_gpr(5, ctx.gpr[3] + 0u);
    goto L_08AC2BF0;
L_08AC2B94:
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_08AC2BC4;
      }
      goto L_08AC2B9C;
    }
L_08AC2B9C:
    if (ctx.gpr[5] != ctx.gpr[3]) {
    ctx.set_gpr(2, 0u + static_cast<std::uint32_t>(5));
        goto L_08AC2BB4;
    }
    goto L_08AC2BA4;
L_08AC2BA4:
    ctx.set_gpr(31, 0x08AC2BACu);
    ctx.set_gpr(5, ctx.gpr[2] + 0u);
    goto L_08AC2BF0;
L_08AC2BAC:
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_08AC2BC4;
      }
      goto L_08AC2BB4;
    }
L_08AC2BB4:
    if (ctx.gpr[5] != ctx.gpr[2]) {
    ctx.set_gpr(2, 0u + 0u);
        goto L_08AC2BE0;
    }
    goto L_08AC2BBC;
L_08AC2BBC:
    ctx.set_gpr(31, 0x08AC2BC4u);
    ctx.set_gpr(5, ctx.gpr[3] + 0u);
    goto L_08AC2BF0;
L_08AC2BC4:
    ctx.set_gpr(3, rt.memory().aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(4)));
    goto L_08AC2BC8;
L_08AC2BC8:
    ctx.set_gpr(5, ctx.gpr[2] + 0u);
    ctx.set_gpr(6, 0u + static_cast<std::uint32_t>(1));
    ctx.set_gpr(4, ctx.gpr[3] + static_cast<std::uint32_t>(28992));
    ctx.set_gpr(31, 0x08AC2BDCu);
    ctx.set_gpr(7, 0u + 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0194_entry, 194u, 252u, 0x08B0CEF0u>(ctx, &aot_mem) && ctx.pc == 0x08AC2BDCu) goto L_08AC2BDC;
    return;
L_08AC2BDC:
    ctx.set_gpr(2, 0u + static_cast<std::uint32_t>(1));
    goto L_08AC2BE0;
L_08AC2BE0:
    ctx.set_gpr(31, rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(12)));
    ctx.set_gpr(16, rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(8)));
    jump_target = ctx.gpr[31];
    ctx.set_gpr(29, ctx.gpr[29] + static_cast<std::uint32_t>(16));
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_08AC2BF0:
    ctx.set_gpr(2, ctx.gpr[5] << 2u);
    ctx.set_gpr(2, ctx.gpr[2] + ctx.gpr[5]);
    ctx.set_gpr(2, ctx.gpr[2] << 1u);
    ctx.set_gpr(2, ctx.gpr[2] + ctx.gpr[5]);
    ctx.set_gpr(2, ctx.gpr[2] << 3u);
    ctx.set_gpr(2, ctx.gpr[4] + ctx.gpr[2]);
    jump_target = ctx.gpr[31];
    ctx.set_gpr(2, ctx.gpr[2] + static_cast<std::uint32_t>(2528));
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_08AC2C10:
    jump_target = ctx.gpr[31];
    ctx.set_gpr(2, ctx.gpr[4] + static_cast<std::uint32_t>(2440));
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_08AC2C18:
    ctx.set_gpr(29, ctx.gpr[29] + static_cast<std::uint32_t>(-16));
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(12), ctx.gpr[31]);
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(8), ctx.gpr[16]);
    ctx.set_gpr(16, ctx.gpr[4] + 0u);
    ctx.set_gpr(31, 0x08AC2C30u);
    ctx.set_gpr(4, ctx.gpr[16] + static_cast<std::uint32_t>(64));
    if (rt.invoke_chained_direct<&recomp_unit_0174_entry, 174u, 839u, 0x08ABF36Cu>(ctx, &aot_mem) && ctx.pc == 0x08AC2C30u) goto L_08AC2C30;
    return;
L_08AC2C30:
    ctx.set_gpr(2, ctx.gpr[2] & 255u);
    if (ctx.gpr[2] != 0u) {
    ctx.set_gpr(4, ctx.gpr[16] + static_cast<std::uint32_t>(64));
        goto L_08AC2C44;
    }
    goto L_08AC2C3C;
L_08AC2C3C:
    { const bool branch_taken = 0u == 0u;
    ctx.set_gpr(2, 0u + static_cast<std::uint32_t>(1));
      if (branch_taken) {
          goto L_08AC2CDC;
      }
      goto L_08AC2C44;
    }
L_08AC2C44:
    ctx.set_gpr(31, 0x08AC2C4Cu);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0172_entry, 172u, 133u, 0x08AB48A8u>(ctx, &aot_mem) && ctx.pc == 0x08AC2C4Cu) goto L_08AC2C4C;
    return;
L_08AC2C4C:
    if (ctx.gpr[2] == 0u) {
    ctx.set_gpr(2, 2231u << 16u);
        goto L_08AC2C64;
    }
    goto L_08AC2C54;
L_08AC2C54:
    ctx.set_gpr(31, 0x08AC2C5Cu);
    ctx.set_gpr(4, ctx.gpr[16] + 0u);
    goto L_08AC2CEC;
L_08AC2C5C:
    { const bool branch_taken = 0u == 0u;
    ctx.set_gpr(31, rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(12)));
      if (branch_taken) {
          goto L_08AC2CE0;
      }
      goto L_08AC2C64;
    }
L_08AC2C64:
    ctx.fpr[2] = std::bit_cast<float>(rt.memory().aot_load32(ctx.gpr[2] + static_cast<std::uint32_t>(4412)));
    ctx.set_gpr(2, 2231u << 16u);
    ctx.fpr[1] = std::bit_cast<float>(rt.memory().aot_load32(ctx.gpr[2] + static_cast<std::uint32_t>(4416)));
    ctx.set_gpr(2, 2231u << 16u);
    ctx.fpr[0] = std::bit_cast<float>(rt.memory().aot_load32(ctx.gpr[2] + static_cast<std::uint32_t>(4420)));
    rt.memory().aot_store32(ctx.gpr[16] + static_cast<std::uint32_t>(12), std::bit_cast<std::uint32_t>(ctx.fpr[2]));
    rt.memory().aot_store32(ctx.gpr[16] + static_cast<std::uint32_t>(16), std::bit_cast<std::uint32_t>(ctx.fpr[1]));
    rt.memory().aot_store32(ctx.gpr[16] + static_cast<std::uint32_t>(20), std::bit_cast<std::uint32_t>(ctx.fpr[0]));
    ctx.set_gpr(2, rt.memory().aot_load8(ctx.gpr[16] + static_cast<std::uint32_t>(196)));
    if (ctx.gpr[2] == 0u) {
    ctx.set_gpr(3, 2233u << 16u);
        goto L_08AC2CB8;
    }
    goto L_08AC2C90;
L_08AC2C90:
    ctx.set_gpr(2, 2231u << 16u);
    ctx.fpr[2] = std::bit_cast<float>(rt.memory().aot_load32(ctx.gpr[2] + static_cast<std::uint32_t>(4424)));
    ctx.set_gpr(2, 2231u << 16u);
    ctx.fpr[1] = std::bit_cast<float>(rt.memory().aot_load32(ctx.gpr[2] + static_cast<std::uint32_t>(4428)));
    ctx.set_gpr(2, 2231u << 16u);
    ctx.fpr[0] = std::bit_cast<float>(rt.memory().aot_load32(ctx.gpr[2] + static_cast<std::uint32_t>(4432)));
    rt.memory().aot_store32(ctx.gpr[16] + static_cast<std::uint32_t>(24), std::bit_cast<std::uint32_t>(ctx.fpr[2]));
    rt.memory().aot_store32(ctx.gpr[16] + static_cast<std::uint32_t>(28), std::bit_cast<std::uint32_t>(ctx.fpr[1]));
    { const bool branch_taken = 0u == 0u;
    rt.memory().aot_store32(ctx.gpr[16] + static_cast<std::uint32_t>(32), std::bit_cast<std::uint32_t>(ctx.fpr[0]));
      if (branch_taken) {
          goto L_08AC2CD8;
      }
      goto L_08AC2CB8;
    }
L_08AC2CB8:
    ctx.set_gpr(3, ctx.gpr[3] + static_cast<std::uint32_t>(8516));
    ctx.set_gpr(2, 2233u << 16u);
    ctx.fpr[2] = std::bit_cast<float>(rt.memory().aot_load32(ctx.gpr[2] + static_cast<std::uint32_t>(8516)));
    ctx.fpr[1] = std::bit_cast<float>(rt.memory().aot_load32(ctx.gpr[3] + static_cast<std::uint32_t>(4)));
    ctx.fpr[0] = std::bit_cast<float>(rt.memory().aot_load32(ctx.gpr[3] + static_cast<std::uint32_t>(8)));
    rt.memory().aot_store32(ctx.gpr[16] + static_cast<std::uint32_t>(24), std::bit_cast<std::uint32_t>(ctx.fpr[2]));
    rt.memory().aot_store32(ctx.gpr[16] + static_cast<std::uint32_t>(28), std::bit_cast<std::uint32_t>(ctx.fpr[1]));
    rt.memory().aot_store32(ctx.gpr[16] + static_cast<std::uint32_t>(32), std::bit_cast<std::uint32_t>(ctx.fpr[0]));
    goto L_08AC2CD8;
L_08AC2CD8:
    ctx.set_gpr(2, 0u + static_cast<std::uint32_t>(1));
    goto L_08AC2CDC;
L_08AC2CDC:
    ctx.set_gpr(31, rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(12)));
    goto L_08AC2CE0;
L_08AC2CE0:
    ctx.set_gpr(16, rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(8)));
    jump_target = ctx.gpr[31];
    ctx.set_gpr(29, ctx.gpr[29] + static_cast<std::uint32_t>(16));
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_08AC2CEC:
    ctx.set_gpr(29, ctx.gpr[29] + static_cast<std::uint32_t>(-16));
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(12), ctx.gpr[31]);
    ctx.set_gpr(3, rt.memory().aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(4)));
    ctx.set_gpr(5, 0u + static_cast<std::uint32_t>(11));
    ctx.set_gpr(2, 16128u << 16u);
    rt.memory().aot_store32(ctx.gpr[3] + static_cast<std::uint32_t>(92), ctx.gpr[5]);
    ctx.set_gpr(4, rt.memory().aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(4)));
    ctx.fpr[12] = std::bit_cast<float>(ctx.gpr[2]);
    ctx.set_gpr(5, 0u + 0u);
    ctx.set_gpr(6, 0u + static_cast<std::uint32_t>(3));
    ctx.set_gpr(7, 0u + 0u);
    ctx.set_gpr(31, 0x08AC2D20u);
    ctx.set_fpr_bits(13, ctx.fpr_bits(12));
    if (rt.invoke_chained_direct<&recomp_unit_0170_entry, 170u, 489u, 0x08AAE0B0u>(ctx, &aot_mem) && ctx.pc == 0x08AC2D20u) goto L_08AC2D20;
    return;
L_08AC2D20:
    ctx.set_gpr(31, rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(12)));
    ctx.set_gpr(2, 0u + static_cast<std::uint32_t>(1));
    jump_target = ctx.gpr[31];
    ctx.set_gpr(29, ctx.gpr[29] + static_cast<std::uint32_t>(16));
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_08AC2D30:
    ctx.set_gpr(29, ctx.gpr[29] + static_cast<std::uint32_t>(-32));
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(28), ctx.gpr[31]);
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(24), ctx.gpr[21]);
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(20), ctx.gpr[20]);
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(16), ctx.gpr[19]);
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(12), ctx.gpr[18]);
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(8), ctx.gpr[17]);
    ctx.set_gpr(21, ctx.gpr[4] + 0u);
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(4), ctx.gpr[16]);
    ctx.set_gpr(25, rt.memory().aot_load32(ctx.gpr[21] + static_cast<std::uint32_t>(60)));
    ctx.set_gpr(20, ctx.gpr[5] + 0u);
    ctx.set_gpr(25, rt.memory().aot_load32(ctx.gpr[25] + static_cast<std::uint32_t>(20)));
    jump_target = ctx.gpr[25];
    ctx.set_gpr(31, 0x08AC2D68u);
    ctx.set_gpr(4, ctx.gpr[21] + static_cast<std::uint32_t>(36));
    ctx.pc = jump_target;
    if (rt.invoke_chained_call(ctx, &aot_mem) && ctx.pc == 0x08AC2D68u) goto L_08AC2D68;
    return;
L_08AC2D68:
    ctx.set_gpr(31, 0x08AC2D70u);
    ctx.set_gpr(16, ctx.gpr[2] + 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0017_entry, 17u, 191u, 0x08848C84u>(ctx, &aot_mem) && ctx.pc == 0x08AC2D70u) goto L_08AC2D70;
    return;
L_08AC2D70:
    ctx.set_gpr(31, 0x08AC2D78u);
    ctx.set_gpr(4, ctx.gpr[2] + 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0172_entry, 172u, 74u, 0x08AB4530u>(ctx, &aot_mem) && ctx.pc == 0x08AC2D78u) goto L_08AC2D78;
    return;
L_08AC2D78:
    ctx.set_gpr(31, 0x08AC2D80u);
    ctx.set_gpr(19, ctx.gpr[2] + 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0017_entry, 17u, 191u, 0x08848C84u>(ctx, &aot_mem) && ctx.pc == 0x08AC2D80u) goto L_08AC2D80;
    return;
L_08AC2D80:
    ctx.set_gpr(4, ctx.gpr[2] + 0u);
    ctx.set_gpr(31, 0x08AC2D8Cu);
    ctx.set_gpr(5, ctx.gpr[19] + 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0172_entry, 172u, 73u, 0x08AB4508u>(ctx, &aot_mem) && ctx.pc == 0x08AC2D8Cu) goto L_08AC2D8C;
    return;
L_08AC2D8C:
    ctx.set_gpr(18, ctx.gpr[2] + 0u);
    ctx.set_gpr(31, 0x08AC2D98u);
    ctx.set_gpr(4, ctx.gpr[18] + 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0024_entry, 24u, 826u, 0x08866984u>(ctx, &aot_mem) && ctx.pc == 0x08AC2D98u) goto L_08AC2D98;
    return;
L_08AC2D98:
    ctx.set_gpr(17, ctx.gpr[2] + 0u);
    ctx.set_gpr(4, ctx.gpr[18] + 0u);
    ctx.set_gpr(31, 0x08AC2DA8u);
    ctx.set_gpr(5, ctx.gpr[17] + 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0159_entry, 159u, 401u, 0x08A81268u>(ctx, &aot_mem) && ctx.pc == 0x08AC2DA8u) goto L_08AC2DA8;
    return;
L_08AC2DA8:
    ctx.set_gpr(3, rt.memory().aot_load32(ctx.gpr[21] + static_cast<std::uint32_t>(184)));
    if (ctx.gpr[3] != ctx.gpr[17]) {
    ctx.set_gpr(7, rt.memory().aot_load32(ctx.gpr[2] + static_cast<std::uint32_t>(12)));
        goto L_08AC2DC4;
    }
    goto L_08AC2DB4;
L_08AC2DB4:
    ctx.set_gpr(3, rt.memory().aot_load32(ctx.gpr[21] + static_cast<std::uint32_t>(192)));
    { const bool branch_taken = ctx.gpr[3] == ctx.gpr[19];
    // nop
      if (branch_taken) {
          goto L_08AC2DD8;
      }
      goto L_08AC2DC0;
    }
L_08AC2DC0:
    ctx.set_gpr(7, rt.memory().aot_load32(ctx.gpr[2] + static_cast<std::uint32_t>(12)));
    goto L_08AC2DC4;
L_08AC2DC4:
    ctx.set_gpr(6, ctx.gpr[17] + 0u);
    ctx.set_gpr(4, ctx.gpr[21] + 0u);
    ctx.set_gpr(5, ctx.gpr[18] + 0u);
    ctx.set_gpr(31, 0x08AC2DD8u);
    ctx.set_gpr(8, ctx.gpr[19] + 0u);
    goto L_08AC28D0;
L_08AC2DD8:
    if (ctx.gpr[16] != 0u) {
    ctx.set_gpr(2, 0u + static_cast<std::uint32_t>(5));
        goto L_08AC2DE8;
    }
    goto L_08AC2DE0;
L_08AC2DE0:
    { const bool branch_taken = 0u == 0u;
    ctx.set_gpr(2, 0u + static_cast<std::uint32_t>(1));
      if (branch_taken) {
          goto L_08AC2FA4;
      }
      goto L_08AC2DE8;
    }
L_08AC2DE8:
    if (ctx.gpr[16] == ctx.gpr[2]) {
    ctx.set_gpr(2, rt.memory().aot_load8(ctx.gpr[21] + static_cast<std::uint32_t>(196)));
        goto L_08AC2F30;
    }
    goto L_08AC2DF0;
L_08AC2DF0:
    ctx.set_gpr(2, 0u + static_cast<std::uint32_t>(4));
    if (ctx.gpr[16] == ctx.gpr[2]) {
    ctx.set_gpr(4, ctx.gpr[21] + 0u);
        goto L_08AC2F20;
    }
    goto L_08AC2DFC;
L_08AC2DFC:
    ctx.set_gpr(2, 0u + static_cast<std::uint32_t>(3));
    { const bool branch_taken = ctx.gpr[16] == ctx.gpr[2];
    // nop
      if (branch_taken) {
          goto L_08AC2F1C;
      }
      goto L_08AC2E08;
    }
L_08AC2E08:
    ctx.set_gpr(2, 0u + static_cast<std::uint32_t>(2));
    if (ctx.gpr[16] == ctx.gpr[2]) {
    ctx.set_gpr(2, rt.memory().aot_load8(ctx.gpr[21] + static_cast<std::uint32_t>(196)));
        goto L_08AC2EC0;
    }
    goto L_08AC2E14;
L_08AC2E14:
    ctx.set_gpr(2, 0u + static_cast<std::uint32_t>(1));
    if (ctx.gpr[16] == ctx.gpr[2]) {
    ctx.set_gpr(4, ctx.gpr[18] + 0u);
        goto L_08AC2E28;
    }
    goto L_08AC2E20;
L_08AC2E20:
    { const bool branch_taken = 0u == 0u;
    ctx.set_gpr(2, 0u + static_cast<std::uint32_t>(1));
      if (branch_taken) {
          goto L_08AC2FA4;
      }
      goto L_08AC2E28;
    }
L_08AC2E28:
    ctx.set_gpr(31, 0x08AC2E30u);
    ctx.set_gpr(5, 0u + 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0187_entry, 187u, 664u, 0x08AF2ACCu>(ctx, &aot_mem) && ctx.pc == 0x08AC2E30u) goto L_08AC2E30;
    return;
L_08AC2E30:
    ctx.set_gpr(6, rt.memory().aot_load32(ctx.gpr[21] + static_cast<std::uint32_t>(192)));
    ctx.set_gpr(7, rt.memory().aot_load32(ctx.gpr[21] + static_cast<std::uint32_t>(184)));
    ctx.set_gpr(8, rt.memory().aot_load32(ctx.gpr[21] + static_cast<std::uint32_t>(188)));
    ctx.set_gpr(5, ctx.gpr[18] + 0u);
    ctx.set_gpr(31, 0x08AC2E48u);
    ctx.set_gpr(4, ctx.gpr[21] + static_cast<std::uint32_t>(36));
    goto L_08AC2FC8;
L_08AC2E48:
    ctx.set_gpr(2, 0u + static_cast<std::uint32_t>(1));
    rt.memory().aot_store8(ctx.gpr[21] + static_cast<std::uint32_t>(196), static_cast<std::uint8_t>(ctx.gpr[2]));
    ctx.set_gpr(5, rt.memory().aot_load8(ctx.gpr[21] + static_cast<std::uint32_t>(196)));
    ctx.fpr[12] = std::bit_cast<float>(0u);
    ctx.set_gpr(31, 0x08AC2E60u);
    ctx.set_gpr(4, ctx.gpr[21] + static_cast<std::uint32_t>(80));
    if (rt.invoke_chained_direct<&recomp_unit_0174_entry, 174u, 575u, 0x08ABE150u>(ctx, &aot_mem) && ctx.pc == 0x08AC2E60u) goto L_08AC2E60;
    return;
L_08AC2E60:
    ctx.set_gpr(6, 2231u << 16u);
    ctx.set_gpr(4, ctx.gpr[21] + static_cast<std::uint32_t>(80));
    ctx.set_gpr(5, 0u + static_cast<std::uint32_t>(1));
    ctx.set_gpr(31, 0x08AC2E74u);
    ctx.set_gpr(6, ctx.gpr[6] + static_cast<std::uint32_t>(3664));
    if (rt.invoke_chained_direct<&recomp_unit_0174_entry, 174u, 648u, 0x08ABE660u>(ctx, &aot_mem) && ctx.pc == 0x08AC2E74u) goto L_08AC2E74;
    return;
L_08AC2E74:
    ctx.set_gpr(2, 2231u << 16u);
    ctx.fpr[2] = std::bit_cast<float>(rt.memory().aot_load32(ctx.gpr[2] + static_cast<std::uint32_t>(4436)));
    ctx.set_gpr(3, 2231u << 16u);
    ctx.set_gpr(2, 2231u << 16u);
    ctx.fpr[1] = std::bit_cast<float>(rt.memory().aot_load32(ctx.gpr[2] + static_cast<std::uint32_t>(4440)));
    ctx.set_gpr(2, 2231u << 16u);
    ctx.fpr[0] = std::bit_cast<float>(rt.memory().aot_load32(ctx.gpr[2] + static_cast<std::uint32_t>(4444)));
    rt.memory().aot_store32(ctx.gpr[21] + static_cast<std::uint32_t>(12), std::bit_cast<std::uint32_t>(ctx.fpr[2]));
    rt.memory().aot_store32(ctx.gpr[21] + static_cast<std::uint32_t>(16), std::bit_cast<std::uint32_t>(ctx.fpr[1]));
    rt.memory().aot_store32(ctx.gpr[21] + static_cast<std::uint32_t>(20), std::bit_cast<std::uint32_t>(ctx.fpr[0]));
    ctx.set_gpr(2, 2231u << 16u);
    ctx.fpr[1] = std::bit_cast<float>(rt.memory().aot_load32(ctx.gpr[2] + static_cast<std::uint32_t>(4452)));
    ctx.fpr[2] = std::bit_cast<float>(rt.memory().aot_load32(ctx.gpr[3] + static_cast<std::uint32_t>(4448)));
    ctx.set_gpr(2, 2231u << 16u);
    ctx.fpr[0] = std::bit_cast<float>(rt.memory().aot_load32(ctx.gpr[2] + static_cast<std::uint32_t>(4456)));
    rt.memory().aot_store32(ctx.gpr[21] + static_cast<std::uint32_t>(24), std::bit_cast<std::uint32_t>(ctx.fpr[2]));
    rt.memory().aot_store32(ctx.gpr[21] + static_cast<std::uint32_t>(28), std::bit_cast<std::uint32_t>(ctx.fpr[1]));
    { const bool branch_taken = 0u == 0u;
    rt.memory().aot_store32(ctx.gpr[21] + static_cast<std::uint32_t>(32), std::bit_cast<std::uint32_t>(ctx.fpr[0]));
      if (branch_taken) {
          goto L_08AC2FA0;
      }
      goto L_08AC2EC0;
    }
L_08AC2EC0:
    if (ctx.gpr[2] == 0u) {
    ctx.set_gpr(4, ctx.gpr[21] + static_cast<std::uint32_t>(64));
        goto L_08AC2EE4;
    }
    goto L_08AC2EC8;
L_08AC2EC8:
    ctx.set_gpr(4, ctx.gpr[21] + static_cast<std::uint32_t>(64));
    ctx.set_gpr(5, 0u + 0u);
    ctx.set_gpr(6, ctx.gpr[21] + static_cast<std::uint32_t>(80));
    ctx.set_gpr(31, 0x08AC2EDCu);
    ctx.set_gpr(7, 0u + 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0174_entry, 174u, 831u, 0x08ABF318u>(ctx, &aot_mem) && ctx.pc == 0x08AC2EDCu) goto L_08AC2EDC;
    return;
L_08AC2EDC:
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_08AC2EF4;
      }
      goto L_08AC2EE4;
    }
L_08AC2EE4:
    ctx.set_gpr(5, 0u + 0u);
    ctx.set_gpr(6, 0u + 0u);
    ctx.set_gpr(31, 0x08AC2EF4u);
    ctx.set_gpr(7, 0u + 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0174_entry, 174u, 831u, 0x08ABF318u>(ctx, &aot_mem) && ctx.pc == 0x08AC2EF4u) goto L_08AC2EF4;
    return;
L_08AC2EF4:
    ctx.set_gpr(2, 2231u << 16u);
    ctx.fpr[2] = std::bit_cast<float>(rt.memory().aot_load32(ctx.gpr[2] + static_cast<std::uint32_t>(4460)));
    ctx.set_gpr(2, 2231u << 16u);
    ctx.fpr[1] = std::bit_cast<float>(rt.memory().aot_load32(ctx.gpr[2] + static_cast<std::uint32_t>(4464)));
    ctx.set_gpr(2, 2231u << 16u);
    ctx.fpr[0] = std::bit_cast<float>(rt.memory().aot_load32(ctx.gpr[2] + static_cast<std::uint32_t>(4468)));
    rt.memory().aot_store32(ctx.gpr[21] + static_cast<std::uint32_t>(12), std::bit_cast<std::uint32_t>(ctx.fpr[2]));
    rt.memory().aot_store32(ctx.gpr[21] + static_cast<std::uint32_t>(16), std::bit_cast<std::uint32_t>(ctx.fpr[1]));
    { const bool branch_taken = 0u == 0u;
    rt.memory().aot_store32(ctx.gpr[21] + static_cast<std::uint32_t>(20), std::bit_cast<std::uint32_t>(ctx.fpr[0]));
      if (branch_taken) {
          goto L_08AC2FA0;
      }
      goto L_08AC2F1C;
    }
L_08AC2F1C:
    ctx.set_gpr(4, ctx.gpr[21] + 0u);
    goto L_08AC2F20;
L_08AC2F20:
    ctx.set_gpr(31, 0x08AC2F28u);
    ctx.set_gpr(5, ctx.gpr[19] + 0u);
    goto L_08AC2B24;
L_08AC2F28:
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_08AC2FA0;
      }
      goto L_08AC2F30;
    }
L_08AC2F30:
    ctx.set_gpr(4, ctx.gpr[21] + static_cast<std::uint32_t>(64));
    ctx.set_gpr(6, ctx.gpr[21] + static_cast<std::uint32_t>(80));
    ctx.set_gpr(2, ctx.gpr[2] ^ 1u);
    rt.memory().aot_store8(ctx.gpr[21] + static_cast<std::uint32_t>(196), static_cast<std::uint8_t>(ctx.gpr[2]));
    ctx.set_gpr(5, rt.memory().aot_load8(ctx.gpr[21] + static_cast<std::uint32_t>(196)));
    ctx.set_gpr(31, 0x08AC2F4Cu);
    ctx.set_gpr(7, 0u + static_cast<std::uint32_t>(1));
    if (rt.invoke_chained_direct<&recomp_unit_0174_entry, 174u, 831u, 0x08ABF318u>(ctx, &aot_mem) && ctx.pc == 0x08AC2F4Cu) goto L_08AC2F4C;
    return;
L_08AC2F4C:
    ctx.set_gpr(5, ctx.gpr[20] + 0u);
    ctx.set_gpr(31, 0x08AC2F58u);
    ctx.set_gpr(4, ctx.gpr[21] + static_cast<std::uint32_t>(64));
    if (rt.invoke_chained_direct<&recomp_unit_0174_entry, 174u, 839u, 0x08ABF36Cu>(ctx, &aot_mem) && ctx.pc == 0x08AC2F58u) goto L_08AC2F58;
    return;
L_08AC2F58:
    ctx.set_gpr(2, 2231u << 16u);
    ctx.fpr[2] = std::bit_cast<float>(rt.memory().aot_load32(ctx.gpr[2] + static_cast<std::uint32_t>(4472)));
    ctx.set_gpr(3, 2231u << 16u);
    ctx.set_gpr(2, 2231u << 16u);
    ctx.fpr[1] = std::bit_cast<float>(rt.memory().aot_load32(ctx.gpr[2] + static_cast<std::uint32_t>(4476)));
    ctx.set_gpr(2, 2231u << 16u);
    ctx.fpr[0] = std::bit_cast<float>(rt.memory().aot_load32(ctx.gpr[2] + static_cast<std::uint32_t>(4480)));
    rt.memory().aot_store32(ctx.gpr[21] + static_cast<std::uint32_t>(12), std::bit_cast<std::uint32_t>(ctx.fpr[2]));
    rt.memory().aot_store32(ctx.gpr[21] + static_cast<std::uint32_t>(16), std::bit_cast<std::uint32_t>(ctx.fpr[1]));
    rt.memory().aot_store32(ctx.gpr[21] + static_cast<std::uint32_t>(20), std::bit_cast<std::uint32_t>(ctx.fpr[0]));
    ctx.set_gpr(2, 2231u << 16u);
    ctx.fpr[1] = std::bit_cast<float>(rt.memory().aot_load32(ctx.gpr[2] + static_cast<std::uint32_t>(4488)));
    ctx.fpr[2] = std::bit_cast<float>(rt.memory().aot_load32(ctx.gpr[3] + static_cast<std::uint32_t>(4484)));
    ctx.set_gpr(2, 2231u << 16u);
    ctx.fpr[0] = std::bit_cast<float>(rt.memory().aot_load32(ctx.gpr[2] + static_cast<std::uint32_t>(4492)));
    rt.memory().aot_store32(ctx.gpr[21] + static_cast<std::uint32_t>(24), std::bit_cast<std::uint32_t>(ctx.fpr[2]));
    rt.memory().aot_store32(ctx.gpr[21] + static_cast<std::uint32_t>(28), std::bit_cast<std::uint32_t>(ctx.fpr[1]));
    rt.memory().aot_store32(ctx.gpr[21] + static_cast<std::uint32_t>(32), std::bit_cast<std::uint32_t>(ctx.fpr[0]));
    goto L_08AC2FA0;
L_08AC2FA0:
    ctx.set_gpr(2, 0u + static_cast<std::uint32_t>(1));
    goto L_08AC2FA4;
L_08AC2FA4:
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
L_08AC2FC8:
    ctx.set_gpr(29, ctx.gpr[29] + static_cast<std::uint32_t>(-32));
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(28), ctx.gpr[31]);
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(24), ctx.gpr[22]);
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(20), ctx.gpr[21]);
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(16), ctx.gpr[20]);
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(12), ctx.gpr[19]);
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(8), ctx.gpr[18]);
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(4), ctx.gpr[17]);
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(0), ctx.gpr[16]);
    ctx.set_gpr(16, ctx.gpr[5] + 0u);
    ctx.set_gpr(21, ctx.gpr[6] + 0u);
    ctx.set_gpr(20, ctx.gpr[7] + 0u);
    ctx.set_gpr(31, 0x08AC3000u);
    ctx.set_gpr(19, ctx.gpr[8] + 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0017_entry, 17u, 182u, 0x08848C18u>(ctx, &aot_mem) && ctx.pc == 0x08AC3000u) goto L_08AC3000;
    return;
L_08AC3000:
    ctx.set_gpr(31, 0x08AC3008u);
    ctx.set_gpr(4, ctx.gpr[2] + 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0016_entry, 16u, 633u, 0x08847AC0u>(ctx, &aot_mem) && ctx.pc == 0x08AC3008u) goto L_08AC3008;
    return;
L_08AC3008:
    ctx.set_gpr(18, ctx.gpr[2] + 0u);
    ctx.set_gpr(2, 0u + static_cast<std::uint32_t>(3));
    { const bool branch_taken = ctx.gpr[21] == ctx.gpr[2];
    // nop
      if (branch_taken) {
          goto L_08AC3038;
      }
      goto L_08AC3018;
    }
L_08AC3018:
    ctx.set_gpr(6, 0u + static_cast<std::uint32_t>(2));
    { const bool branch_taken = ctx.gpr[21] == ctx.gpr[6];
    // nop
      if (branch_taken) {
          goto L_08AC3038;
      }
      goto L_08AC3024;
    }
L_08AC3024:
    ctx.set_gpr(2, 0u + static_cast<std::uint32_t>(1));
    { const bool branch_taken = ctx.gpr[21] == ctx.gpr[2];
    // nop
      if (branch_taken) {
          goto L_08AC3038;
      }
      goto L_08AC3030;
    }
L_08AC3030:
    { const bool branch_taken = 0u == 0u;
    ctx.set_gpr(4, ctx.gpr[16] + 0u);
      if (branch_taken) {
          goto L_08AC30BC;
      }
      goto L_08AC3038;
    }
L_08AC3038:
    ctx.set_gpr(31, 0x08AC3040u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0017_entry, 17u, 191u, 0x08848C84u>(ctx, &aot_mem) && ctx.pc == 0x08AC3040u) goto L_08AC3040;
    return;
L_08AC3040:
    ctx.set_gpr(4, ctx.gpr[2] + 0u);
    ctx.set_gpr(31, 0x08AC304Cu);
    ctx.set_gpr(5, 0u + static_cast<std::uint32_t>(1));
    if (rt.invoke_chained_direct<&recomp_unit_0172_entry, 172u, 73u, 0x08AB4508u>(ctx, &aot_mem) && ctx.pc == 0x08AC304Cu) goto L_08AC304C;
    return;
L_08AC304C:
    ctx.set_gpr(31, 0x08AC3054u);
    ctx.set_gpr(17, ctx.gpr[2] + 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0017_entry, 17u, 191u, 0x08848C84u>(ctx, &aot_mem) && ctx.pc == 0x08AC3054u) goto L_08AC3054;
    return;
L_08AC3054:
    ctx.set_gpr(4, ctx.gpr[2] + 0u);
    ctx.set_gpr(31, 0x08AC3060u);
    ctx.set_gpr(5, 0u + static_cast<std::uint32_t>(2));
    if (rt.invoke_chained_direct<&recomp_unit_0172_entry, 172u, 73u, 0x08AB4508u>(ctx, &aot_mem) && ctx.pc == 0x08AC3060u) goto L_08AC3060;
    return;
L_08AC3060:
    ctx.set_gpr(31, 0x08AC3068u);
    ctx.set_gpr(16, ctx.gpr[2] + 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0017_entry, 17u, 191u, 0x08848C84u>(ctx, &aot_mem) && ctx.pc == 0x08AC3068u) goto L_08AC3068;
    return;
L_08AC3068:
    ctx.set_gpr(4, ctx.gpr[2] + 0u);
    ctx.set_gpr(31, 0x08AC3074u);
    ctx.set_gpr(5, 0u + static_cast<std::uint32_t>(3));
    if (rt.invoke_chained_direct<&recomp_unit_0172_entry, 172u, 73u, 0x08AB4508u>(ctx, &aot_mem) && ctx.pc == 0x08AC3074u) goto L_08AC3074;
    return;
L_08AC3074:
    ctx.set_gpr(22, ctx.gpr[2] + 0u);
    ctx.set_gpr(4, ctx.gpr[17] + 0u);
    ctx.set_gpr(5, ctx.gpr[20] + 0u);
    ctx.set_gpr(6, 0u + static_cast<std::uint32_t>(2));
    ctx.set_gpr(31, 0x08AC308Cu);
    ctx.set_gpr(7, 0u + 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0187_entry, 187u, 639u, 0x08AF28A4u>(ctx, &aot_mem) && ctx.pc == 0x08AC308Cu) goto L_08AC308C;
    return;
L_08AC308C:
    ctx.set_gpr(4, ctx.gpr[16] + 0u);
    ctx.set_gpr(5, ctx.gpr[20] + 0u);
    ctx.set_gpr(6, 0u + static_cast<std::uint32_t>(2));
    ctx.set_gpr(31, 0x08AC30A0u);
    ctx.set_gpr(7, 0u + 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0187_entry, 187u, 639u, 0x08AF28A4u>(ctx, &aot_mem) && ctx.pc == 0x08AC30A0u) goto L_08AC30A0;
    return;
L_08AC30A0:
    ctx.set_gpr(4, ctx.gpr[22] + 0u);
    ctx.set_gpr(5, ctx.gpr[20] + 0u);
    ctx.set_gpr(6, 0u + static_cast<std::uint32_t>(2));
    ctx.set_gpr(31, 0x08AC30B4u);
    ctx.set_gpr(7, 0u + 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0187_entry, 187u, 639u, 0x08AF28A4u>(ctx, &aot_mem) && ctx.pc == 0x08AC30B4u) goto L_08AC30B4;
    return;
L_08AC30B4:
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_08AC30C8;
      }
      goto L_08AC30BC;
    }
L_08AC30BC:
    ctx.set_gpr(5, ctx.gpr[20] + 0u);
    ctx.set_gpr(31, 0x08AC30C8u);
    ctx.set_gpr(7, 0u + 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0187_entry, 187u, 639u, 0x08AF28A4u>(ctx, &aot_mem) && ctx.pc == 0x08AC30C8u) goto L_08AC30C8;
    return;
L_08AC30C8:
    if (ctx.gpr[21] != 0u) {
    ctx.set_gpr(3, 0u + static_cast<std::uint32_t>(1));
        goto L_08AC30E8;
    }
    goto L_08AC30D0;
L_08AC30D0:
    ctx.set_gpr(4, ctx.gpr[18] + 0u);
    ctx.set_gpr(5, ctx.gpr[19] + 0u);
    ctx.set_gpr(31, 0x08AC30E0u);
    ctx.set_gpr(6, 0u + 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0023_entry, 23u, 368u, 0x08861748u>(ctx, &aot_mem) && ctx.pc == 0x08AC30E0u) goto L_08AC30E0;
    return;
L_08AC30E0:
    { const bool branch_taken = 0u == 0u;
    ctx.set_gpr(31, rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(28)));
      if (branch_taken) {
          goto L_08AC3184;
      }
      goto L_08AC30E8;
    }
L_08AC30E8:
    if (ctx.gpr[21] != ctx.gpr[3]) {
    ctx.set_gpr(3, 0u + static_cast<std::uint32_t>(2));
        goto L_08AC3108;
    }
    goto L_08AC30F0;
L_08AC30F0:
    ctx.set_gpr(5, ctx.gpr[19] + static_cast<std::uint32_t>(10));
    ctx.set_gpr(4, ctx.gpr[18] + 0u);
    ctx.set_gpr(31, 0x08AC3100u);
    ctx.set_gpr(6, 0u + 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0023_entry, 23u, 369u, 0x08861750u>(ctx, &aot_mem) && ctx.pc == 0x08AC3100u) goto L_08AC3100;
    return;
L_08AC3100:
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_08AC3180;
      }
      goto L_08AC3108;
    }
L_08AC3108:
    if (ctx.gpr[21] != ctx.gpr[3]) {
    ctx.set_gpr(3, 0u + static_cast<std::uint32_t>(3));
        goto L_08AC3128;
    }
    goto L_08AC3110;
L_08AC3110:
    ctx.set_gpr(5, ctx.gpr[19] + static_cast<std::uint32_t>(10));
    ctx.set_gpr(4, ctx.gpr[18] + 0u);
    ctx.set_gpr(31, 0x08AC3120u);
    ctx.set_gpr(6, 0u + 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0023_entry, 23u, 369u, 0x08861750u>(ctx, &aot_mem) && ctx.pc == 0x08AC3120u) goto L_08AC3120;
    return;
L_08AC3120:
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_08AC3180;
      }
      goto L_08AC3128;
    }
L_08AC3128:
    if (ctx.gpr[21] != ctx.gpr[3]) {
    ctx.set_gpr(3, 0u + static_cast<std::uint32_t>(4));
        goto L_08AC3148;
    }
    goto L_08AC3130;
L_08AC3130:
    ctx.set_gpr(5, ctx.gpr[19] + static_cast<std::uint32_t>(10));
    ctx.set_gpr(4, ctx.gpr[18] + 0u);
    ctx.set_gpr(31, 0x08AC3140u);
    ctx.set_gpr(6, 0u + 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0023_entry, 23u, 369u, 0x08861750u>(ctx, &aot_mem) && ctx.pc == 0x08AC3140u) goto L_08AC3140;
    return;
L_08AC3140:
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_08AC3180;
      }
      goto L_08AC3148;
    }
L_08AC3148:
    if (ctx.gpr[21] != ctx.gpr[3]) {
    ctx.set_gpr(3, 0u + static_cast<std::uint32_t>(5));
        goto L_08AC3168;
    }
    goto L_08AC3150;
L_08AC3150:
    ctx.set_gpr(5, ctx.gpr[19] + static_cast<std::uint32_t>(68));
    ctx.set_gpr(4, ctx.gpr[18] + 0u);
    ctx.set_gpr(31, 0x08AC3160u);
    ctx.set_gpr(6, 0u + 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0023_entry, 23u, 369u, 0x08861750u>(ctx, &aot_mem) && ctx.pc == 0x08AC3160u) goto L_08AC3160;
    return;
L_08AC3160:
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_08AC3180;
      }
      goto L_08AC3168;
    }
L_08AC3168:
    { const bool branch_taken = ctx.gpr[21] != ctx.gpr[3];
    // nop
      if (branch_taken) {
          goto L_08AC3180;
      }
      goto L_08AC3170;
    }
L_08AC3170:
    ctx.set_gpr(5, ctx.gpr[19] + static_cast<std::uint32_t>(94));
    ctx.set_gpr(4, ctx.gpr[18] + 0u);
    ctx.set_gpr(31, 0x08AC3180u);
    ctx.set_gpr(6, 0u + 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0023_entry, 23u, 369u, 0x08861750u>(ctx, &aot_mem) && ctx.pc == 0x08AC3180u) goto L_08AC3180;
    return;
L_08AC3180:
    ctx.set_gpr(31, rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(28)));
    goto L_08AC3184;
L_08AC3184:
    ctx.set_gpr(22, rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(24)));
    ctx.set_gpr(21, rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(20)));
    ctx.set_gpr(20, rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(16)));
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
L_08AC31A8:
    ctx.set_gpr(29, ctx.gpr[29] + static_cast<std::uint32_t>(-32));
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(28), ctx.gpr[31]);
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(24), ctx.gpr[19]);
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(20), ctx.gpr[18]);
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(16), ctx.gpr[17]);
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(12), ctx.gpr[16]);
    ctx.set_gpr(17, ctx.gpr[4] + 0u);
    ctx.set_gpr(16, ctx.gpr[5] + 0u);
    ctx.set_gpr(31, 0x08AC31D0u);
    ctx.set_gpr(4, ctx.gpr[17] + static_cast<std::uint32_t>(80));
    if (rt.invoke_chained_direct<&recomp_unit_0172_entry, 172u, 211u, 0x08AB4D10u>(ctx, &aot_mem) && ctx.pc == 0x08AC31D0u) goto L_08AC31D0;
    return;
L_08AC31D0:
    ctx.set_gpr(2, 16256u << 16u);
    ctx.fpr[12] = std::bit_cast<float>(ctx.gpr[2]);
    ctx.set_fpr_bits(15, ctx.fpr_bits(0));
    ctx.set_fpr_bits(13, ctx.fpr_bits(12));
    ctx.set_gpr(31, 0x08AC31E8u);
    ctx.set_fpr_bits(14, ctx.fpr_bits(12));
    if (rt.invoke_chained_direct<&recomp_unit_0019_entry, 19u, 568u, 0x08852084u>(ctx, &aot_mem) && ctx.pc == 0x08AC31E8u) goto L_08AC31E8;
    return;
L_08AC31E8:
    ctx.set_gpr(19, 0u + 0u);
    ctx.set_gpr(18, ctx.gpr[17] + 0u);
    goto L_08AC31F0;
L_08AC31F0:
    ctx.set_gpr(7, rt.memory().aot_load32(ctx.gpr[18] + static_cast<std::uint32_t>(200)));
    { const bool branch_taken = ctx.gpr[7] == 0u;
    ctx.set_gpr(2, ctx.gpr[18] + static_cast<std::uint32_t>(200));
      if (branch_taken) {
          goto L_08AC3210;
      }
      goto L_08AC31FC;
    }
L_08AC31FC:
    ctx.set_gpr(4, rt.memory().aot_load32(ctx.gpr[2] + static_cast<std::uint32_t>(4)));
    ctx.set_gpr(6, 2231u << 16u);
    ctx.set_gpr(5, rt.memory().aot_load32(ctx.gpr[2] + static_cast<std::uint32_t>(8)));
    ctx.set_gpr(31, 0x08AC3210u);
    ctx.set_gpr(6, ctx.gpr[6] + static_cast<std::uint32_t>(2964));
    if (rt.invoke_chained_direct<&recomp_unit_0019_entry, 19u, 527u, 0x08851CD8u>(ctx, &aot_mem) && ctx.pc == 0x08AC3210u) goto L_08AC3210;
    return;
L_08AC3210:
    ctx.set_gpr(19, ctx.gpr[19] + static_cast<std::uint32_t>(1));
    ctx.set_gpr(2, static_cast<std::int32_t>(ctx.gpr[19]) < 3 ? 1u : 0u);
    { const bool branch_taken = ctx.gpr[2] != 0u;
    ctx.set_gpr(18, ctx.gpr[18] + static_cast<std::uint32_t>(16));
      if (branch_taken) {
          goto L_08AC31F0;
      }
      goto L_08AC3220;
    }
L_08AC3220:
    ctx.set_gpr(2, 16256u << 16u);
    ctx.fpr[12] = std::bit_cast<float>(ctx.gpr[2]);
    ctx.set_fpr_bits(13, ctx.fpr_bits(12));
    ctx.set_fpr_bits(14, ctx.fpr_bits(12));
    ctx.set_gpr(31, 0x08AC3238u);
    ctx.set_fpr_bits(15, ctx.fpr_bits(12));
    if (rt.invoke_chained_direct<&recomp_unit_0019_entry, 19u, 568u, 0x08852084u>(ctx, &aot_mem) && ctx.pc == 0x08AC3238u) goto L_08AC3238;
    return;
L_08AC3238:
    ctx.set_gpr(4, ctx.gpr[17] + static_cast<std::uint32_t>(80));
    ctx.set_gpr(31, 0x08AC3244u);
    ctx.set_gpr(5, ctx.gpr[16] + 0u);
    goto L_08AC0914;
L_08AC3244:
    ctx.set_gpr(31, rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(28)));
    ctx.set_gpr(19, rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(24)));
    ctx.set_gpr(18, rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(20)));
    ctx.set_gpr(17, rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(16)));
    ctx.set_gpr(16, rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(12)));
    ctx.set_gpr(2, 0u + static_cast<std::uint32_t>(1));
    jump_target = ctx.gpr[31];
    ctx.set_gpr(29, ctx.gpr[29] + static_cast<std::uint32_t>(32));
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_08AC3264:
    ctx.set_gpr(29, ctx.gpr[29] + static_cast<std::uint32_t>(-16));
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(12), ctx.gpr[31]);
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(8), ctx.gpr[18]);
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(4), ctx.gpr[17]);
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(0), ctx.gpr[16]);
    ctx.set_gpr(16, ctx.gpr[4] + 0u);
    ctx.set_gpr(18, ctx.gpr[5] + 0u);
    ctx.set_gpr(31, 0x08AC3288u);
    ctx.set_gpr(17, 0u + 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0017_entry, 17u, 179u, 0x08848BF4u>(ctx, &aot_mem) && ctx.pc == 0x08AC3288u) goto L_08AC3288;
    return;
L_08AC3288:
    ctx.set_gpr(4, ctx.gpr[2] + 0u);
    ctx.set_gpr(31, 0x08AC3294u);
    ctx.set_gpr(5, 0u + static_cast<std::uint32_t>(7));
    if (rt.invoke_chained_direct<&recomp_unit_0017_entry, 17u, 914u, 0x0884B680u>(ctx, &aot_mem) && ctx.pc == 0x08AC3294u) goto L_08AC3294;
    return;
L_08AC3294:
    { const bool branch_taken = ctx.gpr[2] == 0u;
    // nop
      if (branch_taken) {
          goto L_08AC333C;
      }
      goto L_08AC329C;
    }
L_08AC329C:
    ctx.set_gpr(31, 0x08AC32A4u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0017_entry, 17u, 185u, 0x08848C3Cu>(ctx, &aot_mem) && ctx.pc == 0x08AC32A4u) goto L_08AC32A4;
    return;
L_08AC32A4:
    ctx.set_gpr(4, ctx.gpr[2] + 0u);
    ctx.set_gpr(5, 0u + static_cast<std::uint32_t>(1));
    ctx.set_gpr(6, 0u + 0u);
    ctx.set_gpr(31, 0x08AC32B8u);
    ctx.set_gpr(7, 0u + 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0171_entry, 171u, 403u, 0x08AB179Cu>(ctx, &aot_mem) && ctx.pc == 0x08AC32B8u) goto L_08AC32B8;
    return;
L_08AC32B8:
    ctx.set_gpr(6, rt.memory().aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(192)));
    ctx.set_gpr(7, rt.memory().aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(188)));
    ctx.set_gpr(5, ctx.gpr[18] + 0u);
    ctx.set_gpr(31, 0x08AC32CCu);
    ctx.set_gpr(4, ctx.gpr[16] + 0u);
    goto L_08AC33EC;
L_08AC32CC:
    ctx.set_gpr(2, ctx.gpr[2] & 255u);
    if (ctx.gpr[2] == 0u) {
    ctx.set_gpr(17, 0u + static_cast<std::uint32_t>(1));
        goto L_08AC3378;
    }
    goto L_08AC32D8;
L_08AC32D8:
    ctx.set_gpr(31, 0x08AC32E0u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0017_entry, 17u, 191u, 0x08848C84u>(ctx, &aot_mem) && ctx.pc == 0x08AC32E0u) goto L_08AC32E0;
    return;
L_08AC32E0:
    ctx.set_gpr(31, 0x08AC32E8u);
    ctx.set_gpr(4, ctx.gpr[2] + 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0174_entry, 174u, 990u, 0x08ABFC78u>(ctx, &aot_mem) && ctx.pc == 0x08AC32E8u) goto L_08AC32E8;
    return;
L_08AC32E8:
    ctx.set_gpr(25, rt.memory().aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(60)));
    ctx.set_gpr(6, rt.memory().aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(184)));
    ctx.set_gpr(5, ctx.gpr[2] + 0u);
    ctx.set_gpr(25, rt.memory().aot_load32(ctx.gpr[25] + static_cast<std::uint32_t>(24)));
    jump_target = ctx.gpr[25];
    ctx.set_gpr(31, 0x08AC3300u);
    ctx.set_gpr(4, ctx.gpr[16] + static_cast<std::uint32_t>(36));
    ctx.pc = jump_target;
    if (rt.invoke_chained_call(ctx, &aot_mem) && ctx.pc == 0x08AC3300u) goto L_08AC3300;
    return;
L_08AC3300:
    ctx.set_gpr(4, ctx.gpr[16] + static_cast<std::uint32_t>(80));
    ctx.set_gpr(5, 0u + 0u);
    ctx.set_gpr(31, 0x08AC3310u);
    ctx.set_gpr(6, 0u + 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0174_entry, 174u, 648u, 0x08ABE660u>(ctx, &aot_mem) && ctx.pc == 0x08AC3310u) goto L_08AC3310;
    return;
L_08AC3310:
    ctx.set_gpr(2, 2231u << 16u);
    ctx.fpr[2] = std::bit_cast<float>(rt.memory().aot_load32(ctx.gpr[2] + static_cast<std::uint32_t>(4496)));
    ctx.set_gpr(2, 2231u << 16u);
    ctx.fpr[1] = std::bit_cast<float>(rt.memory().aot_load32(ctx.gpr[2] + static_cast<std::uint32_t>(4500)));
    ctx.set_gpr(2, 2231u << 16u);
    ctx.fpr[0] = std::bit_cast<float>(rt.memory().aot_load32(ctx.gpr[2] + static_cast<std::uint32_t>(4504)));
    rt.memory().aot_store32(ctx.gpr[16] + static_cast<std::uint32_t>(12), std::bit_cast<std::uint32_t>(ctx.fpr[2]));
    rt.memory().aot_store32(ctx.gpr[16] + static_cast<std::uint32_t>(16), std::bit_cast<std::uint32_t>(ctx.fpr[1]));
    ctx.set_gpr(2, 0u + static_cast<std::uint32_t>(1));
    { const bool branch_taken = 0u == 0u;
    rt.memory().aot_store32(ctx.gpr[16] + static_cast<std::uint32_t>(20), std::bit_cast<std::uint32_t>(ctx.fpr[0]));
      if (branch_taken) {
          goto L_08AC33D4;
      }
      goto L_08AC333C;
    }
L_08AC333C:
    ctx.set_gpr(31, 0x08AC3344u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0017_entry, 17u, 179u, 0x08848BF4u>(ctx, &aot_mem) && ctx.pc == 0x08AC3344u) goto L_08AC3344;
    return;
L_08AC3344:
    ctx.set_gpr(4, ctx.gpr[2] + 0u);
    ctx.set_gpr(31, 0x08AC3350u);
    ctx.set_gpr(5, 0u + static_cast<std::uint32_t>(8));
    if (rt.invoke_chained_direct<&recomp_unit_0017_entry, 17u, 914u, 0x0884B680u>(ctx, &aot_mem) && ctx.pc == 0x08AC3350u) goto L_08AC3350;
    return;
L_08AC3350:
    { const bool branch_taken = ctx.gpr[2] == 0u;
    // nop
      if (branch_taken) {
          goto L_08AC3378;
      }
      goto L_08AC3358;
    }
L_08AC3358:
    ctx.set_gpr(31, 0x08AC3360u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0017_entry, 17u, 185u, 0x08848C3Cu>(ctx, &aot_mem) && ctx.pc == 0x08AC3360u) goto L_08AC3360;
    return;
L_08AC3360:
    ctx.set_gpr(4, ctx.gpr[2] + 0u);
    ctx.set_gpr(5, 0u + static_cast<std::uint32_t>(2));
    ctx.set_gpr(6, 0u + 0u);
    ctx.set_gpr(31, 0x08AC3374u);
    ctx.set_gpr(7, 0u + 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0171_entry, 171u, 403u, 0x08AB179Cu>(ctx, &aot_mem) && ctx.pc == 0x08AC3374u) goto L_08AC3374;
    return;
L_08AC3374:
    ctx.set_gpr(17, 0u + static_cast<std::uint32_t>(1));
    goto L_08AC3378;
L_08AC3378:
    if (ctx.gpr[17] == 0u) {
    ctx.set_gpr(2, 0u + static_cast<std::uint32_t>(1));
        goto L_08AC33D4;
    }
    goto L_08AC3380;
L_08AC3380:
    ctx.set_gpr(31, 0x08AC3388u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0017_entry, 17u, 191u, 0x08848C84u>(ctx, &aot_mem) && ctx.pc == 0x08AC3388u) goto L_08AC3388;
    return;
L_08AC3388:
    ctx.set_gpr(31, 0x08AC3390u);
    ctx.set_gpr(4, ctx.gpr[2] + 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0174_entry, 174u, 990u, 0x08ABFC78u>(ctx, &aot_mem) && ctx.pc == 0x08AC3390u) goto L_08AC3390;
    return;
L_08AC3390:
    ctx.set_gpr(4, ctx.gpr[2] + 0u);
    ctx.set_gpr(31, 0x08AC339Cu);
    ctx.set_gpr(5, 0u + static_cast<std::uint32_t>(1));
    if (rt.invoke_chained_direct<&recomp_unit_0187_entry, 187u, 664u, 0x08AF2ACCu>(ctx, &aot_mem) && ctx.pc == 0x08AC339Cu) goto L_08AC339C;
    return;
L_08AC339C:
    ctx.set_gpr(4, ctx.gpr[16] + static_cast<std::uint32_t>(80));
    ctx.set_gpr(5, 0u + 0u);
    ctx.set_gpr(31, 0x08AC33ACu);
    ctx.set_gpr(6, 0u + 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0174_entry, 174u, 648u, 0x08ABE660u>(ctx, &aot_mem) && ctx.pc == 0x08AC33ACu) goto L_08AC33AC;
    return;
L_08AC33AC:
    ctx.set_gpr(2, 2231u << 16u);
    ctx.fpr[2] = std::bit_cast<float>(rt.memory().aot_load32(ctx.gpr[2] + static_cast<std::uint32_t>(4508)));
    ctx.set_gpr(2, 2231u << 16u);
    ctx.fpr[1] = std::bit_cast<float>(rt.memory().aot_load32(ctx.gpr[2] + static_cast<std::uint32_t>(4512)));
    ctx.set_gpr(2, 2231u << 16u);
    ctx.fpr[0] = std::bit_cast<float>(rt.memory().aot_load32(ctx.gpr[2] + static_cast<std::uint32_t>(4516)));
    rt.memory().aot_store32(ctx.gpr[16] + static_cast<std::uint32_t>(12), std::bit_cast<std::uint32_t>(ctx.fpr[2]));
    rt.memory().aot_store32(ctx.gpr[16] + static_cast<std::uint32_t>(16), std::bit_cast<std::uint32_t>(ctx.fpr[1]));
    rt.memory().aot_store32(ctx.gpr[16] + static_cast<std::uint32_t>(20), std::bit_cast<std::uint32_t>(ctx.fpr[0]));
    ctx.set_gpr(2, 0u + static_cast<std::uint32_t>(1));
    goto L_08AC33D4;
L_08AC33D4:
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
L_08AC33EC:
    ctx.set_gpr(29, ctx.gpr[29] + static_cast<std::uint32_t>(-64));
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(28), ctx.gpr[31]);
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(24), ctx.gpr[22]);
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(20), ctx.gpr[21]);
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(16), ctx.gpr[20]);
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(12), ctx.gpr[19]);
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(8), ctx.gpr[18]);
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(4), ctx.gpr[17]);
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(0), ctx.gpr[16]);
    ctx.set_gpr(2, rt.memory().aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(4)));
    ctx.set_gpr(20, ctx.gpr[4] + 0u);
    ctx.set_gpr(22, ctx.gpr[6] + 0u);
    ctx.set_gpr(18, rt.memory().aot_load32(ctx.gpr[2] + static_cast<std::uint32_t>(29328)));
    ctx.set_gpr(19, ctx.gpr[7] + 0u);
    ctx.set_gpr(31, 0x08AC342Cu);
    ctx.set_gpr(4, ctx.gpr[18] + 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0170_entry, 170u, 122u, 0x08AAC854u>(ctx, &aot_mem) && ctx.pc == 0x08AC342Cu) goto L_08AC342C;
    return;
L_08AC342C:
    ctx.set_gpr(21, ctx.gpr[2] + 0u);
    ctx.set_gpr(17, 0u + 0u);
    ctx.set_gpr(16, ctx.gpr[29] + static_cast<std::uint32_t>(44));
    goto L_08AC3438;
L_08AC3438:
    ctx.set_gpr(4, ctx.gpr[18] + 0u);
    ctx.set_gpr(31, 0x08AC3444u);
    ctx.set_gpr(5, ctx.gpr[17] + 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0170_entry, 170u, 121u, 0x08AAC844u>(ctx, &aot_mem) && ctx.pc == 0x08AC3444u) goto L_08AC3444;
    return;
L_08AC3444:
    rt.memory().aot_store32(ctx.gpr[16] + static_cast<std::uint32_t>(0), ctx.gpr[2]);
    ctx.set_gpr(17, ctx.gpr[17] + static_cast<std::uint32_t>(1));
    ctx.set_gpr(2, static_cast<std::int32_t>(ctx.gpr[17]) < 5 ? 1u : 0u);
    { const bool branch_taken = ctx.gpr[2] != 0u;
    ctx.set_gpr(16, ctx.gpr[16] + static_cast<std::uint32_t>(4));
      if (branch_taken) {
          goto L_08AC3438;
      }
      goto L_08AC3458;
    }
L_08AC3458:
    ctx.set_gpr(1, ctx.gpr[22] < static_cast<std::uint32_t>(6) ? 1u : 0u);
    if (ctx.gpr[1] == 0u) {
    ctx.set_gpr(4, ctx.gpr[18] + 0u);
        goto L_08AC34B0;
    }
    goto L_08AC3464;
L_08AC3464:
    ctx.set_gpr(3, 2226u << 16u);
    ctx.set_gpr(2, ctx.gpr[22] << 2u);
    ctx.set_gpr(3, ctx.gpr[3] + static_cast<std::uint32_t>(-6636));
    ctx.set_gpr(2, ctx.gpr[2] + ctx.gpr[3]);
    ctx.set_gpr(2, rt.memory().aot_load32(ctx.gpr[2] + static_cast<std::uint32_t>(0)));
    jump_target = ctx.gpr[2];
    // nop
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_08AC3480:
    { const bool branch_taken = 0u == 0u;
    ctx.set_gpr(21, ctx.gpr[19] + 0u);
      if (branch_taken) {
          goto L_08AC34AC;
      }
      goto L_08AC3488;
    }
L_08AC3488:
    { const bool branch_taken = 0u == 0u;
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(44), ctx.gpr[19]);
      if (branch_taken) {
          goto L_08AC34AC;
      }
      goto L_08AC3490;
    }
L_08AC3490:
    { const bool branch_taken = 0u == 0u;
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(48), ctx.gpr[19]);
      if (branch_taken) {
          goto L_08AC34AC;
      }
      goto L_08AC3498;
    }
L_08AC3498:
    { const bool branch_taken = 0u == 0u;
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(52), ctx.gpr[19]);
      if (branch_taken) {
          goto L_08AC34AC;
      }
      goto L_08AC34A0;
    }
L_08AC34A0:
    { const bool branch_taken = 0u == 0u;
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(56), ctx.gpr[19]);
      if (branch_taken) {
          goto L_08AC34AC;
      }
      goto L_08AC34A8;
    }
L_08AC34A8:
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(60), ctx.gpr[19]);
    goto L_08AC34AC;
L_08AC34AC:
    ctx.set_gpr(4, ctx.gpr[18] + 0u);
    goto L_08AC34B0;
L_08AC34B0:
    ctx.set_gpr(31, 0x08AC34B8u);
    ctx.set_gpr(16, 0u + 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0170_entry, 170u, 122u, 0x08AAC854u>(ctx, &aot_mem) && ctx.pc == 0x08AC34B8u) goto L_08AC34B8;
    return;
L_08AC34B8:
    if (ctx.gpr[21] == ctx.gpr[2]) {
    ctx.set_gpr(21, 0u + 0u);
        goto L_08AC34CC;
    }
    goto L_08AC34C0;
L_08AC34C0:
    rt.memory().aot_store32(ctx.gpr[20] + static_cast<std::uint32_t>(256), ctx.gpr[21]);
    ctx.set_gpr(16, 0u + static_cast<std::uint32_t>(1));
    ctx.set_gpr(21, 0u + 0u);
    goto L_08AC34CC;
L_08AC34CC:
    ctx.set_gpr(19, ctx.gpr[29] + static_cast<std::uint32_t>(44));
    goto L_08AC34D0;
L_08AC34D0:
    ctx.set_gpr(17, rt.memory().aot_load32(ctx.gpr[19] + static_cast<std::uint32_t>(0)));
    ctx.set_gpr(4, ctx.gpr[18] + 0u);
    ctx.set_gpr(31, 0x08AC34E0u);
    ctx.set_gpr(5, ctx.gpr[21] + 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0170_entry, 170u, 121u, 0x08AAC844u>(ctx, &aot_mem) && ctx.pc == 0x08AC34E0u) goto L_08AC34E0;
    return;
L_08AC34E0:
    if (ctx.gpr[17] == ctx.gpr[2]) {
    ctx.set_gpr(21, ctx.gpr[21] + static_cast<std::uint32_t>(1));
        goto L_08AC34F4;
    }
    goto L_08AC34E8;
L_08AC34E8:
    rt.memory().aot_store32(ctx.gpr[20] + static_cast<std::uint32_t>(260), ctx.gpr[17]);
    ctx.set_gpr(16, 0u + static_cast<std::uint32_t>(1));
    ctx.set_gpr(21, ctx.gpr[21] + static_cast<std::uint32_t>(1));
    goto L_08AC34F4;
L_08AC34F4:
    ctx.set_gpr(2, static_cast<std::int32_t>(ctx.gpr[21]) < 5 ? 1u : 0u);
    ctx.set_gpr(19, ctx.gpr[19] + static_cast<std::uint32_t>(4));
    { const bool branch_taken = ctx.gpr[2] != 0u;
    ctx.set_gpr(20, ctx.gpr[20] + static_cast<std::uint32_t>(4));
      if (branch_taken) {
          goto L_08AC34D0;
      }
      goto L_08AC3504;
    }
L_08AC3504:
    ctx.set_gpr(2, ctx.gpr[16] + 0u);
    ctx.set_gpr(31, rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(28)));
    ctx.set_gpr(22, rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(24)));
    ctx.set_gpr(21, rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(20)));
    ctx.set_gpr(20, rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(16)));
    ctx.set_gpr(19, rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(12)));
    ctx.set_gpr(18, rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(8)));
    ctx.set_gpr(17, rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(4)));
    ctx.set_gpr(16, rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(0)));
    jump_target = ctx.gpr[31];
    ctx.set_gpr(29, ctx.gpr[29] + static_cast<std::uint32_t>(64));
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_08AC3530:
    ctx.set_gpr(29, ctx.gpr[29] + static_cast<std::uint32_t>(-16));
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(12), ctx.gpr[31]);
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(8), ctx.gpr[18]);
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(4), ctx.gpr[17]);
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(0), ctx.gpr[16]);
    ctx.set_gpr(2, rt.memory().aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(248)));
    ctx.set_gpr(17, ctx.gpr[4] + 0u);
    ctx.set_gpr(4, 0u + static_cast<std::uint32_t>(1));
    { const bool branch_taken = ctx.gpr[2] == ctx.gpr[4];
    ctx.set_gpr(16, ctx.gpr[5] + 0u);
      if (branch_taken) {
          goto L_08AC3578;
      }
      goto L_08AC3558;
    }
L_08AC3558:
    if (ctx.gpr[2] == 0u) {
    ctx.set_gpr(3, rt.memory().aot_load32(ctx.gpr[17] + static_cast<std::uint32_t>(256)));
        goto L_08AC3568;
    }
    goto L_08AC3560;
L_08AC3560:
    { const bool branch_taken = 0u == 0u;
    rt.memory().aot_store32(ctx.gpr[17] + static_cast<std::uint32_t>(248), 0u);
      if (branch_taken) {
          goto L_08AC35EC;
      }
      goto L_08AC3568;
    }
L_08AC3568:
    ctx.set_gpr(2, 0u + static_cast<std::uint32_t>(-2));
    { const bool branch_taken = ctx.gpr[3] == ctx.gpr[2];
    // nop
      if (branch_taken) {
          goto L_08AC35E8;
      }
      goto L_08AC3574;
    }
L_08AC3574:
    rt.memory().aot_store32(ctx.gpr[17] + static_cast<std::uint32_t>(248), ctx.gpr[4]);
    goto L_08AC3578;
L_08AC3578:
    ctx.set_gpr(5, rt.memory().aot_load32(ctx.gpr[17] + static_cast<std::uint32_t>(256)));
    ctx.set_gpr(31, 0x08AC3584u);
    ctx.set_gpr(4, rt.memory().aot_load32(ctx.gpr[17] + static_cast<std::uint32_t>(4)));
    if (rt.invoke_chained_direct<&recomp_unit_0170_entry, 170u, 211u, 0x08AACEA4u>(ctx, &aot_mem) && ctx.pc == 0x08AC3584u) goto L_08AC3584;
    return;
L_08AC3584:
    ctx.set_gpr(2, ctx.gpr[2] & 255u);
    if (ctx.gpr[2] != 0u) {
    ctx.set_gpr(2, rt.memory().aot_load32(ctx.gpr[17] + static_cast<std::uint32_t>(4)));
        goto L_08AC3598;
    }
    goto L_08AC3590;
L_08AC3590:
    { const bool branch_taken = 0u == 0u;
    ctx.set_gpr(2, 0u + 0u);
      if (branch_taken) {
          goto L_08AC3620;
      }
      goto L_08AC3598;
    }
L_08AC3598:
    ctx.set_gpr(31, 0x08AC35A0u);
    ctx.set_gpr(4, ctx.gpr[2] + static_cast<std::uint32_t>(112));
    goto L_08AC3638;
L_08AC35A0:
    ctx.set_gpr(18, ctx.gpr[2] + 0u);
    ctx.set_gpr(2, rt.memory().aot_load32(ctx.gpr[17] + static_cast<std::uint32_t>(4)));
    ctx.set_gpr(5, rt.memory().aot_load32(ctx.gpr[17] + static_cast<std::uint32_t>(256)));
    ctx.set_gpr(6, rt.memory().aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(8)));
    ctx.set_gpr(7, rt.memory().aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(12)));
    ctx.set_gpr(31, 0x08AC35BCu);
    ctx.set_gpr(4, ctx.gpr[2] + static_cast<std::uint32_t>(112));
    if (rt.invoke_chained_direct<&recomp_unit_0022_entry, 22u, 787u, 0x0885F02Cu>(ctx, &aot_mem) && ctx.pc == 0x08AC35BCu) goto L_08AC35BC;
    return;
L_08AC35BC:
    ctx.set_gpr(2, rt.memory().aot_load32(ctx.gpr[17] + static_cast<std::uint32_t>(4)));
    ctx.set_gpr(5, ctx.gpr[18] + 0u);
    ctx.set_gpr(31, 0x08AC35CCu);
    ctx.set_gpr(4, ctx.gpr[2] + static_cast<std::uint32_t>(112));
    if (rt.invoke_chained_direct<&recomp_unit_0022_entry, 22u, 740u, 0x0885ED60u>(ctx, &aot_mem) && ctx.pc == 0x08AC35CCu) goto L_08AC35CC;
    return;
L_08AC35CC:
    ctx.set_gpr(31, 0x08AC35D4u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0017_entry, 17u, 185u, 0x08848C3Cu>(ctx, &aot_mem) && ctx.pc == 0x08AC35D4u) goto L_08AC35D4;
    return;
L_08AC35D4:
    ctx.set_gpr(4, ctx.gpr[2] + 0u);
    ctx.set_gpr(5, 0u + static_cast<std::uint32_t>(1516));
    ctx.set_gpr(6, 0u + 0u);
    ctx.set_gpr(31, 0x08AC35E8u);
    ctx.set_gpr(7, 0u + 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0171_entry, 171u, 403u, 0x08AB179Cu>(ctx, &aot_mem) && ctx.pc == 0x08AC35E8u) goto L_08AC35E8;
    return;
L_08AC35E8:
    rt.memory().aot_store32(ctx.gpr[17] + static_cast<std::uint32_t>(248), 0u);
    goto L_08AC35EC;
L_08AC35EC:
    rt.memory().aot_store32(ctx.gpr[17] + static_cast<std::uint32_t>(252), 0u);
    ctx.set_gpr(2, 0u + static_cast<std::uint32_t>(-2));
    rt.memory().aot_store32(ctx.gpr[17] + static_cast<std::uint32_t>(256), ctx.gpr[2]);
    ctx.set_gpr(2, 2231u << 16u);
    ctx.fpr[2] = std::bit_cast<float>(rt.memory().aot_load32(ctx.gpr[2] + static_cast<std::uint32_t>(4520)));
    ctx.set_gpr(2, 2231u << 16u);
    ctx.fpr[1] = std::bit_cast<float>(rt.memory().aot_load32(ctx.gpr[2] + static_cast<std::uint32_t>(4524)));
    ctx.set_gpr(2, 2231u << 16u);
    ctx.fpr[0] = std::bit_cast<float>(rt.memory().aot_load32(ctx.gpr[2] + static_cast<std::uint32_t>(4528)));
    rt.memory().aot_store32(ctx.gpr[17] + static_cast<std::uint32_t>(12), std::bit_cast<std::uint32_t>(ctx.fpr[2]));
    rt.memory().aot_store32(ctx.gpr[17] + static_cast<std::uint32_t>(16), std::bit_cast<std::uint32_t>(ctx.fpr[1]));
    ctx.set_gpr(2, 0u + static_cast<std::uint32_t>(1));
    rt.memory().aot_store32(ctx.gpr[17] + static_cast<std::uint32_t>(20), std::bit_cast<std::uint32_t>(ctx.fpr[0]));
    goto L_08AC3620;
L_08AC3620:
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
L_08AC3638:
    jump_target = ctx.gpr[31];
    ctx.set_gpr(2, rt.memory().aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(3520)));
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_08AC3640:
    ctx.set_gpr(29, ctx.gpr[29] + static_cast<std::uint32_t>(-16));
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(12), ctx.gpr[31]);
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(8), ctx.gpr[18]);
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(4), ctx.gpr[17]);
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(0), ctx.gpr[16]);
    ctx.set_gpr(5, rt.memory().aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(4)));
    ctx.set_gpr(3, rt.memory().aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(248)));
    ctx.set_gpr(2, 0u + static_cast<std::uint32_t>(1));
    ctx.set_gpr(16, rt.memory().aot_load32(ctx.gpr[5] + static_cast<std::uint32_t>(29328)));
    { const bool branch_taken = ctx.gpr[3] == ctx.gpr[2];
    ctx.set_gpr(17, ctx.gpr[4] + 0u);
      if (branch_taken) {
          goto L_08AC3704;
      }
      goto L_08AC366C;
    }
L_08AC366C:
    if (ctx.gpr[3] == 0u) {
    ctx.set_gpr(4, 0u + 0u);
        goto L_08AC367C;
    }
    goto L_08AC3674;
L_08AC3674:
    { const bool branch_taken = 0u == 0u;
    rt.memory().aot_store32(ctx.gpr[17] + static_cast<std::uint32_t>(248), 0u);
      if (branch_taken) {
          goto L_08AC379C;
      }
      goto L_08AC367C;
    }
L_08AC367C:
    ctx.set_gpr(3, 0u + static_cast<std::uint32_t>(-2));
    goto L_08AC3680;
L_08AC3680:
    ctx.set_gpr(5, rt.memory().aot_load32(ctx.gpr[17] + static_cast<std::uint32_t>(252)));
    ctx.set_gpr(2, static_cast<std::int32_t>(ctx.gpr[5]) < 5 ? 1u : 0u);
    if (ctx.gpr[2] != 0u) {
    ctx.set_gpr(2, ctx.gpr[5] << 2u);
        goto L_08AC3698;
    }
    goto L_08AC3690;
L_08AC3690:
    { const bool branch_taken = 0u == 0u;
    ctx.set_gpr(4, 0u + static_cast<std::uint32_t>(1));
      if (branch_taken) {
          goto L_08AC36B4;
      }
      goto L_08AC3698;
    }
L_08AC3698:
    ctx.set_gpr(2, ctx.gpr[17] + ctx.gpr[2]);
    ctx.set_gpr(2, rt.memory().aot_load32(ctx.gpr[2] + static_cast<std::uint32_t>(260)));
    { const bool branch_taken = ctx.gpr[2] != ctx.gpr[3];
    // nop
      if (branch_taken) {
          goto L_08AC36B4;
      }
      goto L_08AC36A8;
    }
L_08AC36A8:
    ctx.set_gpr(2, ctx.gpr[5] + static_cast<std::uint32_t>(1));
    { const bool branch_taken = 0u == 0u;
    rt.memory().aot_store32(ctx.gpr[17] + static_cast<std::uint32_t>(252), ctx.gpr[2]);
      if (branch_taken) {
          goto L_08AC3680;
      }
      goto L_08AC36B4;
    }
L_08AC36B4:
    { const bool branch_taken = ctx.gpr[4] != 0u;
    // nop
      if (branch_taken) {
          goto L_08AC3798;
      }
      goto L_08AC36BC;
    }
L_08AC36BC:
    ctx.set_gpr(2, rt.memory().aot_load32(ctx.gpr[17] + static_cast<std::uint32_t>(4)));
    ctx.set_gpr(31, 0x08AC36C8u);
    ctx.set_gpr(4, ctx.gpr[2] + static_cast<std::uint32_t>(3648));
    if (rt.invoke_chained_direct<&recomp_unit_0023_entry, 23u, 49u, 0x08860290u>(ctx, &aot_mem) && ctx.pc == 0x08AC36C8u) goto L_08AC36C8;
    return;
L_08AC36C8:
    ctx.set_gpr(5, rt.memory().aot_load32(ctx.gpr[17] + static_cast<std::uint32_t>(252)));
    ctx.set_gpr(31, 0x08AC36D4u);
    ctx.set_gpr(4, ctx.gpr[16] + 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0170_entry, 170u, 121u, 0x08AAC844u>(ctx, &aot_mem) && ctx.pc == 0x08AC36D4u) goto L_08AC36D4;
    return;
L_08AC36D4:
    ctx.set_gpr(3, 0u + static_cast<std::uint32_t>(-1));
    if (ctx.gpr[2] == ctx.gpr[3]) {
    ctx.set_gpr(2, 0u + static_cast<std::uint32_t>(1));
        goto L_08AC3700;
    }
    goto L_08AC36E0;
L_08AC36E0:
    ctx.set_gpr(31, 0x08AC36E8u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0017_entry, 17u, 185u, 0x08848C3Cu>(ctx, &aot_mem) && ctx.pc == 0x08AC36E8u) goto L_08AC36E8;
    return;
L_08AC36E8:
    ctx.set_gpr(4, ctx.gpr[2] + 0u);
    ctx.set_gpr(5, 0u + static_cast<std::uint32_t>(1517));
    ctx.set_gpr(6, 0u + 0u);
    ctx.set_gpr(31, 0x08AC36FCu);
    ctx.set_gpr(7, 0u + 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0171_entry, 171u, 403u, 0x08AB179Cu>(ctx, &aot_mem) && ctx.pc == 0x08AC36FCu) goto L_08AC36FC;
    return;
L_08AC36FC:
    ctx.set_gpr(2, 0u + static_cast<std::uint32_t>(1));
    goto L_08AC3700;
L_08AC3700:
    rt.memory().aot_store32(ctx.gpr[17] + static_cast<std::uint32_t>(248), ctx.gpr[2]);
    goto L_08AC3704;
L_08AC3704:
    ctx.set_gpr(16, rt.memory().aot_load32(ctx.gpr[17] + static_cast<std::uint32_t>(252)));
    ctx.set_gpr(4, rt.memory().aot_load32(ctx.gpr[17] + static_cast<std::uint32_t>(4)));
    ctx.set_gpr(2, ctx.gpr[16] << 2u);
    ctx.set_gpr(2, ctx.gpr[2] + ctx.gpr[17]);
    ctx.set_gpr(6, rt.memory().aot_load32(ctx.gpr[2] + static_cast<std::uint32_t>(260)));
    ctx.set_gpr(18, ctx.gpr[2] + static_cast<std::uint32_t>(260));
    ctx.set_gpr(31, 0x08AC3724u);
    ctx.set_gpr(5, ctx.gpr[16] + 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0170_entry, 170u, 246u, 0x08AAD114u>(ctx, &aot_mem) && ctx.pc == 0x08AC3724u) goto L_08AC3724;
    return;
L_08AC3724:
    ctx.set_gpr(2, ctx.gpr[2] & 255u);
    if (ctx.gpr[2] != 0u) {
    ctx.set_gpr(2, rt.memory().aot_load32(ctx.gpr[17] + static_cast<std::uint32_t>(4)));
        goto L_08AC3738;
    }
    goto L_08AC3730;
L_08AC3730:
    { const bool branch_taken = 0u == 0u;
    ctx.set_gpr(2, 0u + 0u);
      if (branch_taken) {
          goto L_08AC380C;
      }
      goto L_08AC3738;
    }
L_08AC3738:
    ctx.set_gpr(5, ctx.gpr[16] + 0u);
    ctx.set_gpr(31, 0x08AC3744u);
    ctx.set_gpr(4, ctx.gpr[2] + static_cast<std::uint32_t>(3648));
    if (rt.invoke_chained_direct<&recomp_unit_0023_entry, 23u, 68u, 0x08860384u>(ctx, &aot_mem) && ctx.pc == 0x08AC3744u) goto L_08AC3744;
    return;
L_08AC3744:
    ctx.set_gpr(2, rt.memory().aot_load32(ctx.gpr[17] + static_cast<std::uint32_t>(4)));
    ctx.set_gpr(5, ctx.gpr[16] + 0u);
    ctx.set_gpr(31, 0x08AC3754u);
    ctx.set_gpr(4, ctx.gpr[2] + static_cast<std::uint32_t>(3648));
    if (rt.invoke_chained_direct<&recomp_unit_0023_entry, 23u, 131u, 0x088606B4u>(ctx, &aot_mem) && ctx.pc == 0x08AC3754u) goto L_08AC3754;
    return;
L_08AC3754:
    ctx.set_gpr(3, rt.memory().aot_load32(ctx.gpr[18] + static_cast<std::uint32_t>(0)));
    ctx.set_gpr(2, 0u + static_cast<std::uint32_t>(-1));
    if (ctx.gpr[3] == ctx.gpr[2]) {
    ctx.set_gpr(3, rt.memory().aot_load32(ctx.gpr[17] + static_cast<std::uint32_t>(252)));
        goto L_08AC3784;
    }
    goto L_08AC3764;
L_08AC3764:
    ctx.set_gpr(31, 0x08AC376Cu);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0017_entry, 17u, 185u, 0x08848C3Cu>(ctx, &aot_mem) && ctx.pc == 0x08AC376Cu) goto L_08AC376C;
    return;
L_08AC376C:
    ctx.set_gpr(4, ctx.gpr[2] + 0u);
    ctx.set_gpr(5, 0u + static_cast<std::uint32_t>(1516));
    ctx.set_gpr(6, 0u + 0u);
    ctx.set_gpr(31, 0x08AC3780u);
    ctx.set_gpr(7, 0u + 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0171_entry, 171u, 403u, 0x08AB179Cu>(ctx, &aot_mem) && ctx.pc == 0x08AC3780u) goto L_08AC3780;
    return;
L_08AC3780:
    ctx.set_gpr(3, rt.memory().aot_load32(ctx.gpr[17] + static_cast<std::uint32_t>(252)));
    goto L_08AC3784;
L_08AC3784:
    ctx.set_gpr(2, 0u + 0u);
    ctx.set_gpr(3, ctx.gpr[3] + static_cast<std::uint32_t>(1));
    rt.memory().aot_store32(ctx.gpr[17] + static_cast<std::uint32_t>(252), ctx.gpr[3]);
    { const bool branch_taken = 0u == 0u;
    rt.memory().aot_store32(ctx.gpr[17] + static_cast<std::uint32_t>(248), 0u);
      if (branch_taken) {
          goto L_08AC380C;
      }
      goto L_08AC3798;
    }
L_08AC3798:
    rt.memory().aot_store32(ctx.gpr[17] + static_cast<std::uint32_t>(248), 0u);
    goto L_08AC379C;
L_08AC379C:
    rt.memory().aot_store32(ctx.gpr[17] + static_cast<std::uint32_t>(252), 0u);
    ctx.set_gpr(2, 0u + static_cast<std::uint32_t>(-2));
    rt.memory().aot_store32(ctx.gpr[17] + static_cast<std::uint32_t>(260), ctx.gpr[2]);
    rt.memory().aot_store32(ctx.gpr[17] + static_cast<std::uint32_t>(264), ctx.gpr[2]);
    rt.memory().aot_store32(ctx.gpr[17] + static_cast<std::uint32_t>(268), ctx.gpr[2]);
    rt.memory().aot_store32(ctx.gpr[17] + static_cast<std::uint32_t>(272), ctx.gpr[2]);
    ctx.set_gpr(31, 0x08AC37BCu);
    rt.memory().aot_store32(ctx.gpr[17] + static_cast<std::uint32_t>(276), ctx.gpr[2]);
    if (rt.invoke_chained_direct<&recomp_unit_0017_entry, 17u, 191u, 0x08848C84u>(ctx, &aot_mem) && ctx.pc == 0x08AC37BCu) goto L_08AC37BC;
    return;
L_08AC37BC:
    ctx.set_gpr(31, 0x08AC37C4u);
    ctx.set_gpr(4, ctx.gpr[2] + 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0172_entry, 172u, 74u, 0x08AB4530u>(ctx, &aot_mem) && ctx.pc == 0x08AC37C4u) goto L_08AC37C4;
    return;
L_08AC37C4:
    ctx.set_gpr(31, 0x08AC37CCu);
    ctx.set_gpr(16, ctx.gpr[2] + 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0017_entry, 17u, 191u, 0x08848C84u>(ctx, &aot_mem) && ctx.pc == 0x08AC37CCu) goto L_08AC37CC;
    return;
L_08AC37CC:
    ctx.set_gpr(5, ctx.gpr[16] + 0u);
    ctx.set_gpr(31, 0x08AC37D8u);
    ctx.set_gpr(4, ctx.gpr[2] + 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0172_entry, 172u, 73u, 0x08AB4508u>(ctx, &aot_mem) && ctx.pc == 0x08AC37D8u) goto L_08AC37D8;
    return;
L_08AC37D8:
    ctx.set_gpr(4, ctx.gpr[2] + 0u);
    ctx.set_gpr(31, 0x08AC37E4u);
    ctx.set_gpr(5, 0u + static_cast<std::uint32_t>(1));
    if (rt.invoke_chained_direct<&recomp_unit_0187_entry, 187u, 664u, 0x08AF2ACCu>(ctx, &aot_mem) && ctx.pc == 0x08AC37E4u) goto L_08AC37E4;
    return;
L_08AC37E4:
    ctx.set_gpr(2, 2231u << 16u);
    ctx.fpr[2] = std::bit_cast<float>(rt.memory().aot_load32(ctx.gpr[2] + static_cast<std::uint32_t>(4532)));
    ctx.set_gpr(2, 2231u << 16u);
    ctx.fpr[1] = std::bit_cast<float>(rt.memory().aot_load32(ctx.gpr[2] + static_cast<std::uint32_t>(4536)));
    ctx.set_gpr(2, 2231u << 16u);
    ctx.fpr[0] = std::bit_cast<float>(rt.memory().aot_load32(ctx.gpr[2] + static_cast<std::uint32_t>(4540)));
    rt.memory().aot_store32(ctx.gpr[17] + static_cast<std::uint32_t>(12), std::bit_cast<std::uint32_t>(ctx.fpr[2]));
    rt.memory().aot_store32(ctx.gpr[17] + static_cast<std::uint32_t>(16), std::bit_cast<std::uint32_t>(ctx.fpr[1]));
    ctx.set_gpr(2, 0u + static_cast<std::uint32_t>(1));
    rt.memory().aot_store32(ctx.gpr[17] + static_cast<std::uint32_t>(20), std::bit_cast<std::uint32_t>(ctx.fpr[0]));
    goto L_08AC380C;
L_08AC380C:
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
L_08AC3824:
    ctx.set_gpr(29, ctx.gpr[29] + static_cast<std::uint32_t>(-128));
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(12), ctx.gpr[31]);
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(8), ctx.gpr[17]);
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(4), ctx.gpr[16]);
    ctx.set_gpr(17, ctx.gpr[5] + 0u);
    ctx.set_gpr(31, 0x08AC3840u);
    ctx.set_gpr(16, ctx.gpr[6] + 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0017_entry, 17u, 182u, 0x08848C18u>(ctx, &aot_mem) && ctx.pc == 0x08AC3840u) goto L_08AC3840;
    return;
L_08AC3840:
    ctx.set_gpr(31, 0x08AC3848u);
    ctx.set_gpr(4, ctx.gpr[2] + 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0016_entry, 16u, 633u, 0x08847AC0u>(ctx, &aot_mem) && ctx.pc == 0x08AC3848u) goto L_08AC3848;
    return;
L_08AC3848:
    ctx.set_gpr(7, 2231u << 16u);
    ctx.set_gpr(7, ctx.gpr[7] + static_cast<std::uint32_t>(4568));
    ctx.set_gpr(6, ctx.gpr[29] + static_cast<std::uint32_t>(32));
    ctx.set_gpr(5, 0u + static_cast<std::uint32_t>(12));
    goto L_08AC3858;
L_08AC3858:
    ctx.set_gpr(4, rt.memory().aot_load32(ctx.gpr[7] + static_cast<std::uint32_t>(0)));
    ctx.set_gpr(3, rt.memory().aot_load32(ctx.gpr[7] + static_cast<std::uint32_t>(4)));
    ctx.set_gpr(5, ctx.gpr[5] + static_cast<std::uint32_t>(-1));
    rt.memory().aot_store32(ctx.gpr[6] + static_cast<std::uint32_t>(0), ctx.gpr[4]);
    rt.memory().aot_store32(ctx.gpr[6] + static_cast<std::uint32_t>(4), ctx.gpr[3]);
    ctx.set_gpr(7, ctx.gpr[7] + static_cast<std::uint32_t>(8));
    { const bool branch_taken = static_cast<std::int32_t>(ctx.gpr[5]) > 0;
    ctx.set_gpr(6, ctx.gpr[6] + static_cast<std::uint32_t>(8));
      if (branch_taken) {
          goto L_08AC3858;
      }
      goto L_08AC3878;
    }
L_08AC3878:
    ctx.set_gpr(3, 2231u << 16u);
    ctx.fpr[1] = std::bit_cast<float>(rt.memory().aot_load32(ctx.gpr[3] + static_cast<std::uint32_t>(4544)));
    ctx.set_gpr(4, ctx.gpr[2] + 0u);
    ctx.set_gpr(3, 2231u << 16u);
    ctx.fpr[0] = std::bit_cast<float>(rt.memory().aot_load32(ctx.gpr[3] + static_cast<std::uint32_t>(4548)));
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(36), std::bit_cast<std::uint32_t>(ctx.fpr[1]));
    ctx.set_gpr(3, 2231u << 16u);
    ctx.fpr[1] = std::bit_cast<float>(rt.memory().aot_load32(ctx.gpr[3] + static_cast<std::uint32_t>(4552)));
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(40), std::bit_cast<std::uint32_t>(ctx.fpr[0]));
    ctx.set_gpr(3, 2231u << 16u);
    ctx.fpr[0] = std::bit_cast<float>(rt.memory().aot_load32(ctx.gpr[3] + static_cast<std::uint32_t>(4556)));
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(44), std::bit_cast<std::uint32_t>(ctx.fpr[1]));
    ctx.set_gpr(3, 2231u << 16u);
    ctx.fpr[1] = std::bit_cast<float>(rt.memory().aot_load32(ctx.gpr[3] + static_cast<std::uint32_t>(4560)));
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(48), std::bit_cast<std::uint32_t>(ctx.fpr[0]));
    ctx.set_gpr(3, 2231u << 16u);
    ctx.fpr[0] = std::bit_cast<float>(rt.memory().aot_load32(ctx.gpr[3] + static_cast<std::uint32_t>(4564)));
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(52), std::bit_cast<std::uint32_t>(ctx.fpr[1]));
    ctx.set_gpr(31, 0x08AC38C8u);
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(56), std::bit_cast<std::uint32_t>(ctx.fpr[0]));
    goto L_08AC394C;
L_08AC38C8:
    ctx.set_gpr(2, static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int8_t>(ctx.gpr[2]))));
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(72), ctx.gpr[2]);
    ctx.set_gpr(3, 2233u << 16u);
    ctx.set_gpr(3, ctx.gpr[3] + static_cast<std::uint32_t>(8516));
    ctx.set_gpr(2, 2233u << 16u);
    ctx.fpr[2] = std::bit_cast<float>(rt.memory().aot_load32(ctx.gpr[2] + static_cast<std::uint32_t>(8516)));
    ctx.fpr[1] = std::bit_cast<float>(rt.memory().aot_load32(ctx.gpr[3] + static_cast<std::uint32_t>(4)));
    ctx.fpr[0] = std::bit_cast<float>(rt.memory().aot_load32(ctx.gpr[3] + static_cast<std::uint32_t>(8)));
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(20), std::bit_cast<std::uint32_t>(ctx.fpr[2]));
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(24), std::bit_cast<std::uint32_t>(ctx.fpr[1]));
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(28), std::bit_cast<std::uint32_t>(ctx.fpr[0]));
    ctx.fpr[2] = std::bit_cast<float>(rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(20)));
    ctx.fpr[1] = std::bit_cast<float>(rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(24)));
    ctx.set_gpr(2, ctx.gpr[17] << 1u);
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(84), std::bit_cast<std::uint32_t>(ctx.fpr[2]));
    ctx.set_gpr(2, ctx.gpr[2] + ctx.gpr[17]);
    ctx.set_gpr(2, ctx.gpr[2] << 4u);
    ctx.set_gpr(2, ctx.gpr[2] + ctx.gpr[29]);
    ctx.fpr[0] = std::bit_cast<float>(rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(28)));
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(88), std::bit_cast<std::uint32_t>(ctx.fpr[1]));
    ctx.set_gpr(4, ctx.gpr[16] + 0u);
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(92), std::bit_cast<std::uint32_t>(ctx.fpr[0]));
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(96), std::bit_cast<std::uint32_t>(ctx.fpr[2]));
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(100), std::bit_cast<std::uint32_t>(ctx.fpr[1]));
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(104), std::bit_cast<std::uint32_t>(ctx.fpr[0]));
    ctx.set_gpr(5, ctx.gpr[2] + static_cast<std::uint32_t>(32));
    ctx.set_gpr(31, 0x08AC3938u);
    ctx.set_gpr(6, 0u + static_cast<std::uint32_t>(48));
    if (rt.invoke_chained_direct<&recomp_unit_0003_entry, 3u, 662u, 0x08812B08u>(ctx, &aot_mem) && ctx.pc == 0x08AC3938u) goto L_08AC3938;
    return;
L_08AC3938:
    ctx.set_gpr(31, rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(12)));
    ctx.set_gpr(17, rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(8)));
    ctx.set_gpr(16, rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(4)));
    jump_target = ctx.gpr[31];
    ctx.set_gpr(29, ctx.gpr[29] + static_cast<std::uint32_t>(128));
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_08AC394C:
    jump_target = ctx.gpr[31];
    ctx.set_gpr(2, static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int8_t>(rt.memory().aot_load8(ctx.gpr[4] + static_cast<std::uint32_t>(20))))));
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_08AC3954:
    ctx.set_gpr(29, ctx.gpr[29] + static_cast<std::uint32_t>(-16));
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(12), ctx.gpr[31]);
    ctx.set_gpr(4, rt.memory().aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(4)));
    ctx.set_gpr(6, 0u + static_cast<std::uint32_t>(1));
    ctx.set_gpr(5, 0u + 0u);
    ctx.set_gpr(7, ctx.gpr[6] + 0u);
    ctx.set_gpr(31, 0x08AC3974u);
    ctx.set_gpr(8, ctx.gpr[6] + 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0170_entry, 170u, 501u, 0x08AAE1A4u>(ctx, &aot_mem) && ctx.pc == 0x08AC3974u) goto L_08AC3974;
    return;
L_08AC3974:
    ctx.set_gpr(31, rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(12)));
    ctx.set_gpr(2, 0u + static_cast<std::uint32_t>(1));
    jump_target = ctx.gpr[31];
    ctx.set_gpr(29, ctx.gpr[29] + static_cast<std::uint32_t>(16));
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_08AC3984:
    ctx.set_gpr(29, ctx.gpr[29] + static_cast<std::uint32_t>(-32));
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(28), ctx.gpr[31]);
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(24), ctx.gpr[20]);
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(20), ctx.gpr[19]);
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(16), ctx.gpr[18]);
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(12), ctx.gpr[17]);
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(8), ctx.gpr[16]);
    ctx.set_gpr(16, ctx.gpr[4] + 0u);
    ctx.set_gpr(31, 0x08AC39ACu);
    ctx.set_gpr(20, ctx.gpr[5] + 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0017_entry, 17u, 188u, 0x08848C60u>(ctx, &aot_mem) && ctx.pc == 0x08AC39ACu) goto L_08AC39AC;
    return;
L_08AC39AC:
    ctx.set_gpr(4, ctx.gpr[2] + 0u);
    ctx.set_gpr(31, 0x08AC39B8u);
    ctx.set_gpr(5, 0u + static_cast<std::uint32_t>(1));
    if (rt.invoke_chained_direct<&recomp_unit_0187_entry, 187u, 124u, 0x08AF0844u>(ctx, &aot_mem) && ctx.pc == 0x08AC39B8u) goto L_08AC39B8;
    return;
L_08AC39B8:
    ctx.set_gpr(31, 0x08AC39C0u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0017_entry, 17u, 189u, 0x08848C6Cu>(ctx, &aot_mem) && ctx.pc == 0x08AC39C0u) goto L_08AC39C0;
    return;
L_08AC39C0:
    ctx.set_gpr(5, 2231u << 16u);
    ctx.set_gpr(4, ctx.gpr[2] + 0u);
    ctx.set_gpr(31, 0x08AC39D0u);
    ctx.set_gpr(5, ctx.gpr[5] + static_cast<std::uint32_t>(4676));
    if (rt.invoke_chained_direct<&recomp_unit_0187_entry, 187u, 197u, 0x08AF0D70u>(ctx, &aot_mem) && ctx.pc == 0x08AC39D0u) goto L_08AC39D0;
    return;
L_08AC39D0:
    ctx.set_gpr(31, 0x08AC39D8u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0017_entry, 17u, 190u, 0x08848C78u>(ctx, &aot_mem) && ctx.pc == 0x08AC39D8u) goto L_08AC39D8;
    return;
L_08AC39D8:
    ctx.set_gpr(4, ctx.gpr[2] + 0u);
    ctx.set_gpr(31, 0x08AC39E4u);
    ctx.set_gpr(5, 0u + 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0187_entry, 187u, 446u, 0x08AF1BACu>(ctx, &aot_mem) && ctx.pc == 0x08AC39E4u) goto L_08AC39E4;
    return;
L_08AC39E4:
    ctx.set_gpr(4, rt.memory().aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(4)));
    ctx.set_gpr(31, 0x08AC39F0u);
    ctx.set_gpr(5, 0u + static_cast<std::uint32_t>(7));
    if (rt.invoke_chained_direct<&recomp_unit_0170_entry, 170u, 530u, 0x08AAE348u>(ctx, &aot_mem) && ctx.pc == 0x08AC39F0u) goto L_08AC39F0;
    return;
L_08AC39F0:
    ctx.set_gpr(4, ctx.gpr[16] + static_cast<std::uint32_t>(32));
    ctx.set_gpr(31, 0x08AC39FCu);
    ctx.set_gpr(5, 0u + static_cast<std::uint32_t>(1));
    if (rt.invoke_chained_direct<&recomp_unit_0192_entry, 192u, 192u, 0x08B04D70u>(ctx, &aot_mem) && ctx.pc == 0x08AC39FCu) goto L_08AC39FC;
    return;
L_08AC39FC:
    ctx.set_gpr(4, rt.memory().aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(4)));
    ctx.set_gpr(31, 0x08AC3A08u);
    ctx.set_gpr(5, 0u + 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0170_entry, 170u, 525u, 0x08AAE2C8u>(ctx, &aot_mem) && ctx.pc == 0x08AC3A08u) goto L_08AC3A08;
    return;
L_08AC3A08:
    ctx.set_gpr(4, rt.memory().aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(4)));
    ctx.fpr[12] = std::bit_cast<float>(0u);
    ctx.set_gpr(5, 0u + 0u);
    ctx.set_gpr(6, 0u + static_cast<std::uint32_t>(1));
    ctx.set_gpr(31, 0x08AC3A20u);
    ctx.set_gpr(7, 0u + 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0170_entry, 170u, 452u, 0x08AADD34u>(ctx, &aot_mem) && ctx.pc == 0x08AC3A20u) goto L_08AC3A20;
    return;
L_08AC3A20:
    ctx.set_gpr(31, 0x08AC3A28u);
    ctx.set_gpr(4, ctx.gpr[16] + 0u);
    goto L_08AC3BB8;
L_08AC3A28:
    ctx.set_gpr(4, rt.memory().aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(4)));
    ctx.set_gpr(5, 0u + static_cast<std::uint32_t>(1));
    ctx.set_gpr(6, ctx.gpr[5] + 0u);
    ctx.set_gpr(7, 0u + 0u);
    ctx.set_gpr(31, 0x08AC3A40u);
    ctx.set_gpr(8, ctx.gpr[5] + 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0170_entry, 170u, 501u, 0x08AAE1A4u>(ctx, &aot_mem) && ctx.pc == 0x08AC3A40u) goto L_08AC3A40;
    return;
L_08AC3A40:
    ctx.set_gpr(31, 0x08AC3A48u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0017_entry, 17u, 191u, 0x08848C84u>(ctx, &aot_mem) && ctx.pc == 0x08AC3A48u) goto L_08AC3A48;
    return;
L_08AC3A48:
    ctx.set_gpr(31, 0x08AC3A50u);
    ctx.set_gpr(4, ctx.gpr[2] + 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0172_entry, 172u, 74u, 0x08AB4530u>(ctx, &aot_mem) && ctx.pc == 0x08AC3A50u) goto L_08AC3A50;
    return;
L_08AC3A50:
    ctx.set_gpr(31, 0x08AC3A58u);
    ctx.set_gpr(18, ctx.gpr[2] + 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0017_entry, 17u, 191u, 0x08848C84u>(ctx, &aot_mem) && ctx.pc == 0x08AC3A58u) goto L_08AC3A58;
    return;
L_08AC3A58:
    ctx.set_gpr(4, ctx.gpr[2] + 0u);
    ctx.set_gpr(31, 0x08AC3A64u);
    ctx.set_gpr(5, ctx.gpr[18] + 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0172_entry, 172u, 73u, 0x08AB4508u>(ctx, &aot_mem) && ctx.pc == 0x08AC3A64u) goto L_08AC3A64;
    return;
L_08AC3A64:
    ctx.set_gpr(5, rt.memory().aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(108)));
    ctx.set_gpr(19, ctx.gpr[2] + 0u);
    ctx.set_gpr(31, 0x08AC3A74u);
    ctx.set_gpr(4, ctx.gpr[19] + 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0159_entry, 159u, 401u, 0x08A81268u>(ctx, &aot_mem) && ctx.pc == 0x08AC3A74u) goto L_08AC3A74;
    return;
L_08AC3A74:
    ctx.set_gpr(5, rt.memory().aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(108)));
    ctx.set_gpr(17, ctx.gpr[2] + 0u);
    ctx.set_gpr(31, 0x08AC3A84u);
    ctx.set_gpr(4, ctx.gpr[19] + 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0187_entry, 187u, 645u, 0x08AF2938u>(ctx, &aot_mem) && ctx.pc == 0x08AC3A84u) goto L_08AC3A84;
    return;
L_08AC3A84:
    ctx.set_gpr(7, rt.memory().aot_load32(ctx.gpr[17] + static_cast<std::uint32_t>(12)));
    ctx.set_gpr(6, rt.memory().aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(108)));
    ctx.set_gpr(5, ctx.gpr[19] + 0u);
    ctx.set_gpr(8, ctx.gpr[18] + 0u);
    ctx.set_gpr(31, 0x08AC3A9Cu);
    ctx.set_gpr(4, ctx.gpr[16] + 0u);
    goto L_08AC3BA8;
L_08AC3A9C:
    ctx.set_gpr(4, rt.memory().aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(4)));
    ctx.fpr[12] = std::bit_cast<float>(rt.memory().aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(80)));
    ctx.set_gpr(31, 0x08AC3AACu);
    ctx.set_gpr(5, 0u + 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0170_entry, 170u, 496u, 0x08AAE130u>(ctx, &aot_mem) && ctx.pc == 0x08AC3AACu) goto L_08AC3AAC;
    return;
L_08AC3AAC:
    ctx.set_gpr(4, ctx.gpr[16] + static_cast<std::uint32_t>(92));
    ctx.set_gpr(5, 0u + static_cast<std::uint32_t>(1));
    ctx.set_gpr(6, 0u + 0u);
    ctx.set_gpr(31, 0x08AC3AC0u);
    ctx.set_gpr(7, 0u + 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0174_entry, 174u, 831u, 0x08ABF318u>(ctx, &aot_mem) && ctx.pc == 0x08AC3AC0u) goto L_08AC3AC0;
    return;
L_08AC3AC0:
    ctx.set_gpr(5, ctx.gpr[20] + 0u);
    ctx.set_gpr(31, 0x08AC3ACCu);
    ctx.set_gpr(4, ctx.gpr[16] + static_cast<std::uint32_t>(92));
    if (rt.invoke_chained_direct<&recomp_unit_0174_entry, 174u, 839u, 0x08ABF36Cu>(ctx, &aot_mem) && ctx.pc == 0x08AC3ACCu) goto L_08AC3ACC;
    return;
L_08AC3ACC:
    ctx.set_gpr(2, 2231u << 16u);
    ctx.fpr[2] = std::bit_cast<float>(rt.memory().aot_load32(ctx.gpr[2] + static_cast<std::uint32_t>(4664)));
    ctx.set_gpr(3, 2233u << 16u);
    ctx.set_gpr(3, ctx.gpr[3] + static_cast<std::uint32_t>(8516));
    ctx.set_gpr(2, 2231u << 16u);
    ctx.fpr[1] = std::bit_cast<float>(rt.memory().aot_load32(ctx.gpr[2] + static_cast<std::uint32_t>(4668)));
    ctx.set_gpr(2, 2231u << 16u);
    ctx.fpr[0] = std::bit_cast<float>(rt.memory().aot_load32(ctx.gpr[2] + static_cast<std::uint32_t>(4672)));
    rt.memory().aot_store32(ctx.gpr[16] + static_cast<std::uint32_t>(8), std::bit_cast<std::uint32_t>(ctx.fpr[2]));
    rt.memory().aot_store32(ctx.gpr[16] + static_cast<std::uint32_t>(12), std::bit_cast<std::uint32_t>(ctx.fpr[1]));
    rt.memory().aot_store32(ctx.gpr[16] + static_cast<std::uint32_t>(16), std::bit_cast<std::uint32_t>(ctx.fpr[0]));
    ctx.set_gpr(2, 2233u << 16u);
    ctx.fpr[2] = std::bit_cast<float>(rt.memory().aot_load32(ctx.gpr[2] + static_cast<std::uint32_t>(8516)));
    ctx.fpr[1] = std::bit_cast<float>(rt.memory().aot_load32(ctx.gpr[3] + static_cast<std::uint32_t>(4)));
    ctx.fpr[0] = std::bit_cast<float>(rt.memory().aot_load32(ctx.gpr[3] + static_cast<std::uint32_t>(8)));
    ctx.set_gpr(2, 0u + static_cast<std::uint32_t>(1));
    rt.memory().aot_store32(ctx.gpr[16] + static_cast<std::uint32_t>(20), std::bit_cast<std::uint32_t>(ctx.fpr[2]));
    rt.memory().aot_store32(ctx.gpr[16] + static_cast<std::uint32_t>(24), std::bit_cast<std::uint32_t>(ctx.fpr[1]));
    rt.memory().aot_store32(ctx.gpr[16] + static_cast<std::uint32_t>(28), std::bit_cast<std::uint32_t>(ctx.fpr[0]));
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
L_08AC3B38:
    jump_target = ctx.gpr[31];
    ctx.set_gpr(2, 0u + static_cast<std::uint32_t>(1));
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_08AC3B40:
    ctx.set_gpr(29, ctx.gpr[29] + static_cast<std::uint32_t>(-16));
    ctx.set_gpr(2, ctx.gpr[4] + 0u);
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(12), ctx.gpr[31]);
    ctx.set_gpr(25, rt.memory().aot_load32(ctx.gpr[2] + static_cast<std::uint32_t>(56)));
    ctx.set_gpr(25, rt.memory().aot_load32(ctx.gpr[25] + static_cast<std::uint32_t>(16)));
    jump_target = ctx.gpr[25];
    ctx.set_gpr(31, 0x08AC3B5Cu);
    ctx.set_gpr(4, ctx.gpr[2] + static_cast<std::uint32_t>(32));
    ctx.pc = jump_target;
    if (rt.invoke_chained_call(ctx, &aot_mem) && ctx.pc == 0x08AC3B5Cu) goto L_08AC3B5C;
    return;
L_08AC3B5C:
    ctx.set_gpr(31, 0x08AC3B64u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0017_entry, 17u, 192u, 0x08848C90u>(ctx, &aot_mem) && ctx.pc == 0x08AC3B64u) goto L_08AC3B64;
    return;
L_08AC3B64:
    ctx.set_gpr(31, 0x08AC3B6Cu);
    ctx.set_gpr(4, ctx.gpr[2] + 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0191_entry, 191u, 442u, 0x08B02224u>(ctx, &aot_mem) && ctx.pc == 0x08AC3B6Cu) goto L_08AC3B6C;
    return;
L_08AC3B6C:
    ctx.set_gpr(31, 0x08AC3B74u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0017_entry, 17u, 190u, 0x08848C78u>(ctx, &aot_mem) && ctx.pc == 0x08AC3B74u) goto L_08AC3B74;
    return;
L_08AC3B74:
    ctx.set_gpr(31, 0x08AC3B7Cu);
    ctx.set_gpr(4, ctx.gpr[2] + 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0187_entry, 187u, 455u, 0x08AF1C18u>(ctx, &aot_mem) && ctx.pc == 0x08AC3B7Cu) goto L_08AC3B7C;
    return;
L_08AC3B7C:
    ctx.set_gpr(31, 0x08AC3B84u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0017_entry, 17u, 189u, 0x08848C6Cu>(ctx, &aot_mem) && ctx.pc == 0x08AC3B84u) goto L_08AC3B84;
    return;
L_08AC3B84:
    ctx.set_gpr(31, 0x08AC3B8Cu);
    ctx.set_gpr(4, ctx.gpr[2] + 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0187_entry, 187u, 208u, 0x08AF0DE8u>(ctx, &aot_mem) && ctx.pc == 0x08AC3B8Cu) goto L_08AC3B8C;
    return;
L_08AC3B8C:
    ctx.set_gpr(31, 0x08AC3B94u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0017_entry, 17u, 188u, 0x08848C60u>(ctx, &aot_mem) && ctx.pc == 0x08AC3B94u) goto L_08AC3B94;
    return;
L_08AC3B94:
    ctx.set_gpr(31, 0x08AC3B9Cu);
    ctx.set_gpr(4, ctx.gpr[2] + 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0159_entry, 159u, 161u, 0x08A806ECu>(ctx, &aot_mem) && ctx.pc == 0x08AC3B9Cu) goto L_08AC3B9C;
    return;
L_08AC3B9C:
    ctx.set_gpr(31, rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(12)));
    jump_target = ctx.gpr[31];
    ctx.set_gpr(29, ctx.gpr[29] + static_cast<std::uint32_t>(16));
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_08AC3BA8:
    rt.memory().aot_store32(ctx.gpr[4] + static_cast<std::uint32_t>(108), ctx.gpr[6]);
    rt.memory().aot_store32(ctx.gpr[4] + static_cast<std::uint32_t>(112), ctx.gpr[7]);
    jump_target = ctx.gpr[31];
    rt.memory().aot_store32(ctx.gpr[4] + static_cast<std::uint32_t>(116), ctx.gpr[8]);
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_08AC3BB8:
    ctx.set_gpr(29, ctx.gpr[29] + static_cast<std::uint32_t>(-16));
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(12), ctx.gpr[31]);
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(8), ctx.gpr[16]);
    ctx.set_gpr(2, rt.memory().aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(4)));
    ctx.set_gpr(16, ctx.gpr[4] + 0u);
    ctx.set_gpr(31, 0x08AC3BD4u);
    ctx.set_gpr(4, ctx.gpr[2] + static_cast<std::uint32_t>(25712));
    goto L_08AC2C10;
L_08AC3BD4:
    ctx.set_gpr(3, rt.memory().aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(4)));
    ctx.set_gpr(5, ctx.gpr[2] + 0u);
    ctx.set_gpr(6, 0u + static_cast<std::uint32_t>(1));
    ctx.set_gpr(4, ctx.gpr[3] + static_cast<std::uint32_t>(28992));
    ctx.set_gpr(31, 0x08AC3BECu);
    ctx.set_gpr(7, 0u + 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0194_entry, 194u, 252u, 0x08B0CEF0u>(ctx, &aot_mem) && ctx.pc == 0x08AC3BECu) goto L_08AC3BEC;
    return;
L_08AC3BEC:
    ctx.set_gpr(31, rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(12)));
    ctx.set_gpr(16, rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(8)));
    ctx.set_gpr(2, 0u + static_cast<std::uint32_t>(1));
    jump_target = ctx.gpr[31];
    ctx.set_gpr(29, ctx.gpr[29] + static_cast<std::uint32_t>(16));
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_08AC3C00:
    ctx.set_gpr(29, ctx.gpr[29] + static_cast<std::uint32_t>(-16));
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(12), ctx.gpr[31]);
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(8), ctx.gpr[16]);
    ctx.set_gpr(16, ctx.gpr[4] + 0u);
    ctx.set_gpr(31, 0x08AC3C18u);
    ctx.set_gpr(4, ctx.gpr[16] + static_cast<std::uint32_t>(92));
    if (rt.invoke_chained_direct<&recomp_unit_0174_entry, 174u, 839u, 0x08ABF36Cu>(ctx, &aot_mem) && ctx.pc == 0x08AC3C18u) goto L_08AC3C18;
    return;
L_08AC3C18:
    ctx.set_gpr(2, ctx.gpr[2] & 255u);
    if (ctx.gpr[2] != 0u) {
    ctx.set_gpr(4, ctx.gpr[16] + static_cast<std::uint32_t>(92));
        goto L_08AC3C2C;
    }
    goto L_08AC3C24;
L_08AC3C24:
    { const bool branch_taken = 0u == 0u;
    ctx.set_gpr(2, 0u + static_cast<std::uint32_t>(1));
      if (branch_taken) {
          goto L_08AC3C70;
      }
      goto L_08AC3C2C;
    }
L_08AC3C2C:
    ctx.set_gpr(31, 0x08AC3C34u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0172_entry, 172u, 133u, 0x08AB48A8u>(ctx, &aot_mem) && ctx.pc == 0x08AC3C34u) goto L_08AC3C34;
    return;
L_08AC3C34:
    if (ctx.gpr[2] == 0u) {
    ctx.set_gpr(2, 2231u << 16u);
        goto L_08AC3C4C;
    }
    goto L_08AC3C3C;
L_08AC3C3C:
    ctx.set_gpr(31, 0x08AC3C44u);
    ctx.set_gpr(4, ctx.gpr[16] + 0u);
    goto L_08AC3C80;
L_08AC3C44:
    { const bool branch_taken = 0u == 0u;
    ctx.set_gpr(31, rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(12)));
      if (branch_taken) {
          goto L_08AC3C74;
      }
      goto L_08AC3C4C;
    }
L_08AC3C4C:
    ctx.fpr[2] = std::bit_cast<float>(rt.memory().aot_load32(ctx.gpr[2] + static_cast<std::uint32_t>(4684)));
    ctx.set_gpr(2, 2231u << 16u);
    ctx.fpr[1] = std::bit_cast<float>(rt.memory().aot_load32(ctx.gpr[2] + static_cast<std::uint32_t>(4688)));
    ctx.set_gpr(2, 2231u << 16u);
    ctx.fpr[0] = std::bit_cast<float>(rt.memory().aot_load32(ctx.gpr[2] + static_cast<std::uint32_t>(4692)));
    rt.memory().aot_store32(ctx.gpr[16] + static_cast<std::uint32_t>(8), std::bit_cast<std::uint32_t>(ctx.fpr[2]));
    rt.memory().aot_store32(ctx.gpr[16] + static_cast<std::uint32_t>(12), std::bit_cast<std::uint32_t>(ctx.fpr[1]));
    ctx.set_gpr(2, 0u + static_cast<std::uint32_t>(1));
    rt.memory().aot_store32(ctx.gpr[16] + static_cast<std::uint32_t>(16), std::bit_cast<std::uint32_t>(ctx.fpr[0]));
    goto L_08AC3C70;
L_08AC3C70:
    ctx.set_gpr(31, rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(12)));
    goto L_08AC3C74;
L_08AC3C74:
    ctx.set_gpr(16, rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(8)));
    jump_target = ctx.gpr[31];
    ctx.set_gpr(29, ctx.gpr[29] + static_cast<std::uint32_t>(16));
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_08AC3C80:
    ctx.set_gpr(29, ctx.gpr[29] + static_cast<std::uint32_t>(-16));
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(12), ctx.gpr[31]);
    ctx.set_gpr(3, rt.memory().aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(4)));
    ctx.set_gpr(5, 0u + static_cast<std::uint32_t>(11));
    ctx.set_gpr(2, 16128u << 16u);
    rt.memory().aot_store32(ctx.gpr[3] + static_cast<std::uint32_t>(92), ctx.gpr[5]);
    ctx.set_gpr(4, rt.memory().aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(4)));
    ctx.fpr[12] = std::bit_cast<float>(ctx.gpr[2]);
    ctx.set_gpr(5, 0u + 0u);
    ctx.set_gpr(6, 0u + static_cast<std::uint32_t>(3));
    ctx.set_gpr(7, 0u + 0u);
    ctx.set_gpr(31, 0x08AC3CB4u);
    ctx.set_fpr_bits(13, ctx.fpr_bits(12));
    if (rt.invoke_chained_direct<&recomp_unit_0170_entry, 170u, 489u, 0x08AAE0B0u>(ctx, &aot_mem) && ctx.pc == 0x08AC3CB4u) goto L_08AC3CB4;
    return;
L_08AC3CB4:
    ctx.set_gpr(31, rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(12)));
    ctx.set_gpr(2, 0u + static_cast<std::uint32_t>(1));
    jump_target = ctx.gpr[31];
    ctx.set_gpr(29, ctx.gpr[29] + static_cast<std::uint32_t>(16));
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_08AC3CC4:
    ctx.set_gpr(29, ctx.gpr[29] + static_cast<std::uint32_t>(-32));
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(28), ctx.gpr[31]);
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(24), ctx.gpr[20]);
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(20), ctx.gpr[19]);
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(16), ctx.gpr[18]);
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(12), ctx.gpr[17]);
    ctx.set_gpr(20, ctx.gpr[4] + 0u);
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(8), ctx.gpr[16]);
    ctx.set_gpr(25, rt.memory().aot_load32(ctx.gpr[20] + static_cast<std::uint32_t>(56)));
    ctx.set_gpr(25, rt.memory().aot_load32(ctx.gpr[25] + static_cast<std::uint32_t>(20)));
    jump_target = ctx.gpr[25];
    ctx.set_gpr(31, 0x08AC3CF4u);
    ctx.set_gpr(4, ctx.gpr[20] + static_cast<std::uint32_t>(32));
    ctx.pc = jump_target;
    if (rt.invoke_chained_call(ctx, &aot_mem) && ctx.pc == 0x08AC3CF4u) goto L_08AC3CF4;
    return;
L_08AC3CF4:
    ctx.set_gpr(31, 0x08AC3CFCu);
    ctx.set_gpr(16, ctx.gpr[2] + 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0017_entry, 17u, 191u, 0x08848C84u>(ctx, &aot_mem) && ctx.pc == 0x08AC3CFCu) goto L_08AC3CFC;
    return;
L_08AC3CFC:
    ctx.set_gpr(31, 0x08AC3D04u);
    ctx.set_gpr(4, ctx.gpr[2] + 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0172_entry, 172u, 74u, 0x08AB4530u>(ctx, &aot_mem) && ctx.pc == 0x08AC3D04u) goto L_08AC3D04;
    return;
L_08AC3D04:
    ctx.set_gpr(31, 0x08AC3D0Cu);
    ctx.set_gpr(19, ctx.gpr[2] + 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0017_entry, 17u, 191u, 0x08848C84u>(ctx, &aot_mem) && ctx.pc == 0x08AC3D0Cu) goto L_08AC3D0C;
    return;
L_08AC3D0C:
    ctx.set_gpr(4, ctx.gpr[2] + 0u);
    ctx.set_gpr(31, 0x08AC3D18u);
    ctx.set_gpr(5, ctx.gpr[19] + 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0172_entry, 172u, 73u, 0x08AB4508u>(ctx, &aot_mem) && ctx.pc == 0x08AC3D18u) goto L_08AC3D18;
    return;
L_08AC3D18:
    ctx.set_gpr(18, ctx.gpr[2] + 0u);
    ctx.set_gpr(31, 0x08AC3D24u);
    ctx.set_gpr(4, ctx.gpr[18] + 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0024_entry, 24u, 826u, 0x08866984u>(ctx, &aot_mem) && ctx.pc == 0x08AC3D24u) goto L_08AC3D24;
    return;
L_08AC3D24:
    ctx.set_gpr(17, ctx.gpr[2] + 0u);
    ctx.set_gpr(4, ctx.gpr[18] + 0u);
    ctx.set_gpr(31, 0x08AC3D34u);
    ctx.set_gpr(5, ctx.gpr[17] + 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0159_entry, 159u, 401u, 0x08A81268u>(ctx, &aot_mem) && ctx.pc == 0x08AC3D34u) goto L_08AC3D34;
    return;
L_08AC3D34:
    ctx.set_gpr(3, rt.memory().aot_load32(ctx.gpr[20] + static_cast<std::uint32_t>(108)));
    if (ctx.gpr[3] != ctx.gpr[17]) {
    ctx.set_gpr(7, rt.memory().aot_load32(ctx.gpr[2] + static_cast<std::uint32_t>(12)));
        goto L_08AC3D50;
    }
    goto L_08AC3D40;
L_08AC3D40:
    ctx.set_gpr(3, rt.memory().aot_load32(ctx.gpr[20] + static_cast<std::uint32_t>(116)));
    { const bool branch_taken = ctx.gpr[3] == ctx.gpr[19];
    // nop
      if (branch_taken) {
          goto L_08AC3D64;
      }
      goto L_08AC3D4C;
    }
L_08AC3D4C:
    ctx.set_gpr(7, rt.memory().aot_load32(ctx.gpr[2] + static_cast<std::uint32_t>(12)));
    goto L_08AC3D50;
L_08AC3D50:
    ctx.set_gpr(6, ctx.gpr[17] + 0u);
    ctx.set_gpr(4, ctx.gpr[20] + 0u);
    ctx.set_gpr(5, ctx.gpr[18] + 0u);
    ctx.set_gpr(31, 0x08AC3D64u);
    ctx.set_gpr(8, ctx.gpr[19] + 0u);
    goto L_08AC3BA8;
L_08AC3D64:
    if (ctx.gpr[16] != 0u) {
    ctx.set_gpr(2, 0u + static_cast<std::uint32_t>(2));
        goto L_08AC3D74;
    }
    goto L_08AC3D6C;
L_08AC3D6C:
    { const bool branch_taken = 0u == 0u;
    ctx.set_gpr(2, 0u + static_cast<std::uint32_t>(1));
      if (branch_taken) {
          goto L_08AC3E38;
      }
      goto L_08AC3D74;
    }
L_08AC3D74:
    if (ctx.gpr[16] == ctx.gpr[2]) {
    ctx.set_gpr(4, ctx.gpr[20] + static_cast<std::uint32_t>(92));
        goto L_08AC3E00;
    }
    goto L_08AC3D7C;
L_08AC3D7C:
    ctx.set_gpr(2, 0u + static_cast<std::uint32_t>(1));
    if (ctx.gpr[16] == ctx.gpr[2]) {
    ctx.set_gpr(6, rt.memory().aot_load32(ctx.gpr[20] + static_cast<std::uint32_t>(116)));
        goto L_08AC3D90;
    }
    goto L_08AC3D88;
L_08AC3D88:
    { const bool branch_taken = 0u == 0u;
    ctx.set_gpr(2, 0u + static_cast<std::uint32_t>(1));
      if (branch_taken) {
          goto L_08AC3E38;
      }
      goto L_08AC3D90;
    }
L_08AC3D90:
    ctx.set_gpr(7, rt.memory().aot_load32(ctx.gpr[20] + static_cast<std::uint32_t>(108)));
    ctx.set_gpr(8, rt.memory().aot_load32(ctx.gpr[20] + static_cast<std::uint32_t>(112)));
    ctx.set_gpr(4, ctx.gpr[20] + static_cast<std::uint32_t>(32));
    ctx.set_gpr(31, 0x08AC3DA4u);
    ctx.set_gpr(5, ctx.gpr[18] + 0u);
    goto L_08AC3E58;
L_08AC3DA4:
    ctx.set_gpr(31, 0x08AC3DACu);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0017_entry, 17u, 191u, 0x08848C84u>(ctx, &aot_mem) && ctx.pc == 0x08AC3DACu) goto L_08AC3DAC;
    return;
L_08AC3DAC:
    ctx.set_gpr(4, ctx.gpr[2] + 0u);
    ctx.set_gpr(31, 0x08AC3DB8u);
    ctx.set_gpr(5, 0u + 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0172_entry, 172u, 73u, 0x08AB4508u>(ctx, &aot_mem) && ctx.pc == 0x08AC3DB8u) goto L_08AC3DB8;
    return;
L_08AC3DB8:
    ctx.set_gpr(4, ctx.gpr[2] + 0u);
    ctx.set_gpr(31, 0x08AC3DC4u);
    ctx.set_gpr(5, 0u + static_cast<std::uint32_t>(1));
    if (rt.invoke_chained_direct<&recomp_unit_0187_entry, 187u, 589u, 0x08AF2560u>(ctx, &aot_mem) && ctx.pc == 0x08AC3DC4u) goto L_08AC3DC4;
    return;
L_08AC3DC4:
    ctx.set_gpr(2, rt.memory().aot_load32(ctx.gpr[20] + static_cast<std::uint32_t>(116)));
    if (ctx.gpr[2] != 0u) {
    ctx.set_gpr(5, rt.memory().aot_load32(ctx.gpr[20] + static_cast<std::uint32_t>(112)));
        goto L_08AC3DEC;
    }
    goto L_08AC3DD0;
L_08AC3DD0:
    ctx.set_gpr(25, rt.memory().aot_load32(ctx.gpr[20] + static_cast<std::uint32_t>(56)));
    ctx.set_gpr(6, rt.memory().aot_load32(ctx.gpr[20] + static_cast<std::uint32_t>(108)));
    ctx.set_gpr(5, ctx.gpr[18] + 0u);
    ctx.set_gpr(25, rt.memory().aot_load32(ctx.gpr[25] + static_cast<std::uint32_t>(24)));
    jump_target = ctx.gpr[25];
    ctx.set_gpr(31, 0x08AC3DE8u);
    ctx.set_gpr(4, ctx.gpr[20] + static_cast<std::uint32_t>(32));
    ctx.pc = jump_target;
    if (rt.invoke_chained_call(ctx, &aot_mem) && ctx.pc == 0x08AC3DE8u) goto L_08AC3DE8;
    return;
L_08AC3DE8:
    ctx.set_gpr(5, rt.memory().aot_load32(ctx.gpr[20] + static_cast<std::uint32_t>(112)));
    goto L_08AC3DEC;
L_08AC3DEC:
    ctx.set_gpr(6, ctx.gpr[19] + 0u);
    ctx.set_gpr(31, 0x08AC3DF8u);
    ctx.set_gpr(4, ctx.gpr[20] + 0u);
    goto L_08AC3ED8;
L_08AC3DF8:
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_08AC3E34;
      }
      goto L_08AC3E00;
    }
L_08AC3E00:
    ctx.set_gpr(5, 0u + 0u);
    ctx.set_gpr(6, 0u + 0u);
    ctx.set_gpr(31, 0x08AC3E10u);
    ctx.set_gpr(7, 0u + 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0174_entry, 174u, 831u, 0x08ABF318u>(ctx, &aot_mem) && ctx.pc == 0x08AC3E10u) goto L_08AC3E10;
    return;
L_08AC3E10:
    ctx.set_gpr(2, 2231u << 16u);
    ctx.fpr[2] = std::bit_cast<float>(rt.memory().aot_load32(ctx.gpr[2] + static_cast<std::uint32_t>(4696)));
    ctx.set_gpr(2, 2231u << 16u);
    ctx.fpr[1] = std::bit_cast<float>(rt.memory().aot_load32(ctx.gpr[2] + static_cast<std::uint32_t>(4700)));
    ctx.set_gpr(2, 2231u << 16u);
    ctx.fpr[0] = std::bit_cast<float>(rt.memory().aot_load32(ctx.gpr[2] + static_cast<std::uint32_t>(4704)));
    rt.memory().aot_store32(ctx.gpr[20] + static_cast<std::uint32_t>(8), std::bit_cast<std::uint32_t>(ctx.fpr[2]));
    rt.memory().aot_store32(ctx.gpr[20] + static_cast<std::uint32_t>(12), std::bit_cast<std::uint32_t>(ctx.fpr[1]));
    rt.memory().aot_store32(ctx.gpr[20] + static_cast<std::uint32_t>(16), std::bit_cast<std::uint32_t>(ctx.fpr[0]));
    goto L_08AC3E34;
L_08AC3E34:
    ctx.set_gpr(2, 0u + static_cast<std::uint32_t>(1));
    goto L_08AC3E38;
L_08AC3E38:
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
L_08AC3E58:
    ctx.set_gpr(29, ctx.gpr[29] + static_cast<std::uint32_t>(-32));
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(28), ctx.gpr[31]);
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(24), ctx.gpr[19]);
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(20), ctx.gpr[18]);
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(16), ctx.gpr[17]);
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(12), ctx.gpr[16]);
    ctx.set_gpr(19, ctx.gpr[5] + 0u);
    ctx.set_gpr(18, ctx.gpr[6] + 0u);
    ctx.set_gpr(16, ctx.gpr[7] + 0u);
    ctx.set_gpr(31, 0x08AC3E84u);
    ctx.set_gpr(17, ctx.gpr[8] + 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0017_entry, 17u, 182u, 0x08848C18u>(ctx, &aot_mem) && ctx.pc == 0x08AC3E84u) goto L_08AC3E84;
    return;
L_08AC3E84:
    ctx.set_gpr(31, 0x08AC3E8Cu);
    ctx.set_gpr(4, ctx.gpr[2] + 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0016_entry, 16u, 633u, 0x08847AC0u>(ctx, &aot_mem) && ctx.pc == 0x08AC3E8Cu) goto L_08AC3E8C;
    return;
L_08AC3E8C:
    ctx.set_gpr(5, ctx.gpr[16] + 0u);
    ctx.set_gpr(4, ctx.gpr[19] + 0u);
    ctx.set_gpr(16, ctx.gpr[2] + 0u);
    ctx.set_gpr(6, 0u + static_cast<std::uint32_t>(2));
    ctx.set_gpr(31, 0x08AC3EA4u);
    ctx.set_gpr(7, 0u + 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0187_entry, 187u, 639u, 0x08AF28A4u>(ctx, &aot_mem) && ctx.pc == 0x08AC3EA4u) goto L_08AC3EA4;
    return;
L_08AC3EA4:
    if (ctx.gpr[18] != 0u) {
    ctx.set_gpr(31, rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(28)));
        goto L_08AC3EC0;
    }
    goto L_08AC3EAC;
L_08AC3EAC:
    ctx.set_gpr(5, ctx.gpr[17] + static_cast<std::uint32_t>(-2));
    ctx.set_gpr(4, ctx.gpr[16] + 0u);
    ctx.set_gpr(31, 0x08AC3EBCu);
    ctx.set_gpr(6, 0u + 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0023_entry, 23u, 394u, 0x088618C8u>(ctx, &aot_mem) && ctx.pc == 0x08AC3EBCu) goto L_08AC3EBC;
    return;
L_08AC3EBC:
    ctx.set_gpr(31, rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(28)));
    goto L_08AC3EC0;
L_08AC3EC0:
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
L_08AC3ED8:
    ctx.set_gpr(29, ctx.gpr[29] + static_cast<std::uint32_t>(-16));
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(12), ctx.gpr[31]);
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(8), ctx.gpr[17]);
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(4), ctx.gpr[16]);
    ctx.set_gpr(2, 0u + static_cast<std::uint32_t>(1));
    ctx.set_gpr(17, ctx.gpr[4] + 0u);
    { const bool branch_taken = ctx.gpr[6] == ctx.gpr[2];
    ctx.set_gpr(16, ctx.gpr[5] + 0u);
      if (branch_taken) {
          goto L_08AC3F1C;
      }
      goto L_08AC3EF8;
    }
L_08AC3EF8:
    if (ctx.gpr[6] == 0u) {
    ctx.set_gpr(4, rt.memory().aot_load32(ctx.gpr[17] + static_cast<std::uint32_t>(4)));
        goto L_08AC3F08;
    }
    goto L_08AC3F00;
L_08AC3F00:
    { const bool branch_taken = 0u == 0u;
    ctx.set_gpr(31, rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(12)));
      if (branch_taken) {
          goto L_08AC3F40;
      }
      goto L_08AC3F08;
    }
L_08AC3F08:
    ctx.set_gpr(5, static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int8_t>(ctx.gpr[16]))));
    ctx.set_gpr(31, 0x08AC3F14u);
    ctx.fpr[12] = std::bit_cast<float>(0u);
    if (rt.invoke_chained_direct<&recomp_unit_0170_entry, 170u, 470u, 0x08AADF58u>(ctx, &aot_mem) && ctx.pc == 0x08AC3F14u) goto L_08AC3F14;
    return;
L_08AC3F14:
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_08AC3F3C;
      }
      goto L_08AC3F1C;
    }
L_08AC3F1C:
    ctx.set_gpr(31, 0x08AC3F24u);
    ctx.set_gpr(4, ctx.gpr[17] + static_cast<std::uint32_t>(32));
    if (rt.invoke_chained_direct<&recomp_unit_0159_entry, 159u, 403u, 0x08A81288u>(ctx, &aot_mem) && ctx.pc == 0x08AC3F24u) goto L_08AC3F24;
    return;
L_08AC3F24:
    ctx.set_gpr(3, rt.memory().aot_load32(ctx.gpr[17] + static_cast<std::uint32_t>(4)));
    ctx.set_gpr(5, ctx.gpr[16] + 0u);
    ctx.set_gpr(6, ctx.gpr[2] + 0u);
    ctx.set_gpr(4, ctx.gpr[3] + static_cast<std::uint32_t>(28940));
    ctx.set_gpr(31, 0x08AC3F3Cu);
    ctx.fpr[12] = std::bit_cast<float>(0u);
    goto L_08AC3F54;
L_08AC3F3C:
    ctx.set_gpr(31, rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(12)));
    goto L_08AC3F40;
L_08AC3F40:
    ctx.set_gpr(17, rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(8)));
    ctx.set_gpr(16, rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(4)));
    ctx.set_gpr(2, 0u + static_cast<std::uint32_t>(1));
    jump_target = ctx.gpr[31];
    ctx.set_gpr(29, ctx.gpr[29] + static_cast<std::uint32_t>(16));
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_08AC3F54:
    ctx.set_gpr(7, ctx.gpr[6] + 0u);
    ctx.set_gpr(6, ctx.gpr[5] + 0u);
    ctx.set_gpr(5, 0u + static_cast<std::uint32_t>(4));
    (void)rt.invoke_chained_direct<&recomp_unit_0169_entry, 169u, 914u, 0x08AAB1D8u>(ctx, &aot_mem); return;
L_08AC3F64:
    ctx.set_gpr(29, ctx.gpr[29] + static_cast<std::uint32_t>(-16));
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(12), ctx.gpr[31]);
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(8), ctx.gpr[17]);
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(4), ctx.gpr[16]);
    ctx.set_gpr(17, ctx.gpr[4] + 0u);
    { const bool branch_taken = ctx.gpr[17] == 0u;
    ctx.set_gpr(16, ctx.gpr[5] + 0u);
      if (branch_taken) {
          goto L_08AC3FC8;
      }
      goto L_08AC3F80;
    }
L_08AC3F80:
    ctx.set_gpr(2, 2233u << 16u);
    ctx.set_gpr(2, ctx.gpr[2] + static_cast<std::uint32_t>(6920));
    rt.memory().aot_store32(ctx.gpr[17] + static_cast<std::uint32_t>(0), ctx.gpr[2]);
    ctx.set_gpr(25, rt.memory().aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(0)));
    ctx.set_gpr(25, rt.memory().aot_load32(ctx.gpr[25] + static_cast<std::uint32_t>(28)));
    jump_target = ctx.gpr[25];
    ctx.set_gpr(31, 0x08AC3F9Cu);
    // nop
    ctx.pc = jump_target;
    if (rt.invoke_chained_call(ctx, &aot_mem) && ctx.pc == 0x08AC3F9Cu) goto L_08AC3F9C;
    return;
L_08AC3F9C:
    ctx.set_gpr(4, ctx.gpr[17] + static_cast<std::uint32_t>(32));
    ctx.set_gpr(31, 0x08AC3FA8u);
    ctx.set_gpr(5, 0u + static_cast<std::uint32_t>(-1));
    if (rt.invoke_chained_direct<&recomp_unit_0169_entry, 169u, 947u, 0x08AAB4E0u>(ctx, &aot_mem) && ctx.pc == 0x08AC3FA8u) goto L_08AC3FA8;
    return;
L_08AC3FA8:
    ctx.set_gpr(4, ctx.gpr[17] + 0u);
    ctx.set_gpr(31, 0x08AC3FB4u);
    ctx.set_gpr(5, 0u + 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0169_entry, 169u, 921u, 0x08AAB254u>(ctx, &aot_mem) && ctx.pc == 0x08AC3FB4u) goto L_08AC3FB4;
    return;
L_08AC3FB4:
    ctx.set_gpr(2, static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int16_t>(ctx.gpr[16]))));
    if (static_cast<std::int32_t>(ctx.gpr[2]) <= 0) {
    ctx.set_gpr(2, ctx.gpr[17] + 0u);
        goto L_08AC3FCC;
    }
    goto L_08AC3FC0;
L_08AC3FC0:
    ctx.set_gpr(31, 0x08AC3FC8u);
    ctx.set_gpr(4, ctx.gpr[17] + 0u);
    goto L_08AC3FE0;
L_08AC3FC8:
    ctx.set_gpr(2, ctx.gpr[17] + 0u);
    goto L_08AC3FCC;
L_08AC3FCC:
    ctx.set_gpr(31, rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(12)));
    ctx.set_gpr(17, rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(8)));
    ctx.set_gpr(16, rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(4)));
    jump_target = ctx.gpr[31];
    ctx.set_gpr(29, ctx.gpr[29] + static_cast<std::uint32_t>(16));
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_08AC3FE0:
    // nop
    (void)rt.invoke_chained_direct<&recomp_unit_0073_entry, 73u, 440u, 0x08929F10u>(ctx, &aot_mem); return;
L_08AC3FE8:
    ctx.set_gpr(29, ctx.gpr[29] + static_cast<std::uint32_t>(-16));
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(12), ctx.gpr[31]);
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(8), ctx.gpr[17]);
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(4), ctx.gpr[16]);
    ctx.set_gpr(17, ctx.gpr[4] + 0u);
    ctx.set_gpr(16, ctx.gpr[5] + 0u);
    ctx.pc = 0x08AC4000u; return;
}

void recomp_unit_0175(Runtime &rt, AllegrexContext &ctx) {
    auto aot_mem = rt.memory().aot_fast_view();
    recomp_unit_0175_entry(rt, ctx, 0u, aot_mem);
}

void register_generated_unit_175(Runtime &runtime) {
    runtime.register_generated_unit(175u, 0x08AC0000u, 16384u, &recomp_unit_0175, &recomp_unit_0175_entry);
    runtime.register_function(0x08AC0000u, &recomp_unit_0175, "recomp_unit_0175");
    runtime.register_function(0x08AC0004u, &recomp_unit_0175, "recomp_unit_0175");
    runtime.register_function(0x08AC0014u, &recomp_unit_0175, "recomp_unit_0175");
    runtime.register_function(0x08AC001Cu, &recomp_unit_0175, "recomp_unit_0175");
    runtime.register_function(0x08AC0024u, &recomp_unit_0175, "recomp_unit_0175");
    runtime.register_function(0x08AC0034u, &recomp_unit_0175, "recomp_unit_0175");
    runtime.register_function(0x08AC003Cu, &recomp_unit_0175, "recomp_unit_0175");
    runtime.register_function(0x08AC0048u, &recomp_unit_0175, "recomp_unit_0175");
    runtime.register_function(0x08AC004Cu, &recomp_unit_0175, "recomp_unit_0175");
    runtime.register_function(0x08AC0058u, &recomp_unit_0175, "recomp_unit_0175");
    runtime.register_function(0x08AC005Cu, &recomp_unit_0175, "recomp_unit_0175");
    runtime.register_function(0x08AC006Cu, &recomp_unit_0175, "recomp_unit_0175");
    runtime.register_function(0x08AC0080u, &recomp_unit_0175, "recomp_unit_0175");
    runtime.register_function(0x08AC0084u, &recomp_unit_0175, "recomp_unit_0175");
    runtime.register_function(0x08AC00B0u, &recomp_unit_0175, "recomp_unit_0175");
    runtime.register_function(0x08AC00F4u, &recomp_unit_0175, "recomp_unit_0175");
    runtime.register_function(0x08AC0104u, &recomp_unit_0175, "recomp_unit_0175");
    runtime.register_function(0x08AC0110u, &recomp_unit_0175, "recomp_unit_0175");
    runtime.register_function(0x08AC0124u, &recomp_unit_0175, "recomp_unit_0175");
    runtime.register_function(0x08AC013Cu, &recomp_unit_0175, "recomp_unit_0175");
    runtime.register_function(0x08AC0144u, &recomp_unit_0175, "recomp_unit_0175");
    runtime.register_function(0x08AC014Cu, &recomp_unit_0175, "recomp_unit_0175");
    runtime.register_function(0x08AC015Cu, &recomp_unit_0175, "recomp_unit_0175");
    runtime.register_function(0x08AC0168u, &recomp_unit_0175, "recomp_unit_0175");
    runtime.register_function(0x08AC0170u, &recomp_unit_0175, "recomp_unit_0175");
    runtime.register_function(0x08AC0188u, &recomp_unit_0175, "recomp_unit_0175");
    runtime.register_function(0x08AC0198u, &recomp_unit_0175, "recomp_unit_0175");
    runtime.register_function(0x08AC01ACu, &recomp_unit_0175, "recomp_unit_0175");
    runtime.register_function(0x08AC01CCu, &recomp_unit_0175, "recomp_unit_0175");
    runtime.register_function(0x08AC01D4u, &recomp_unit_0175, "recomp_unit_0175");
    runtime.register_function(0x08AC01DCu, &recomp_unit_0175, "recomp_unit_0175");
    runtime.register_function(0x08AC01ECu, &recomp_unit_0175, "recomp_unit_0175");
    runtime.register_function(0x08AC01F4u, &recomp_unit_0175, "recomp_unit_0175");
    runtime.register_function(0x08AC01FCu, &recomp_unit_0175, "recomp_unit_0175");
    runtime.register_function(0x08AC020Cu, &recomp_unit_0175, "recomp_unit_0175");
    runtime.register_function(0x08AC0214u, &recomp_unit_0175, "recomp_unit_0175");
    runtime.register_function(0x08AC0220u, &recomp_unit_0175, "recomp_unit_0175");
    runtime.register_function(0x08AC0224u, &recomp_unit_0175, "recomp_unit_0175");
    runtime.register_function(0x08AC0230u, &recomp_unit_0175, "recomp_unit_0175");
    runtime.register_function(0x08AC0240u, &recomp_unit_0175, "recomp_unit_0175");
    runtime.register_function(0x08AC0244u, &recomp_unit_0175, "recomp_unit_0175");
    runtime.register_function(0x08AC026Cu, &recomp_unit_0175, "recomp_unit_0175");
    runtime.register_function(0x08AC0284u, &recomp_unit_0175, "recomp_unit_0175");
    runtime.register_function(0x08AC0290u, &recomp_unit_0175, "recomp_unit_0175");
    runtime.register_function(0x08AC0298u, &recomp_unit_0175, "recomp_unit_0175");
    runtime.register_function(0x08AC02A0u, &recomp_unit_0175, "recomp_unit_0175");
    runtime.register_function(0x08AC02ACu, &recomp_unit_0175, "recomp_unit_0175");
    runtime.register_function(0x08AC02B4u, &recomp_unit_0175, "recomp_unit_0175");
    runtime.register_function(0x08AC02BCu, &recomp_unit_0175, "recomp_unit_0175");
    runtime.register_function(0x08AC02C4u, &recomp_unit_0175, "recomp_unit_0175");
    runtime.register_function(0x08AC02CCu, &recomp_unit_0175, "recomp_unit_0175");
    runtime.register_function(0x08AC02D4u, &recomp_unit_0175, "recomp_unit_0175");
    runtime.register_function(0x08AC02F8u, &recomp_unit_0175, "recomp_unit_0175");
    runtime.register_function(0x08AC02FCu, &recomp_unit_0175, "recomp_unit_0175");
    runtime.register_function(0x08AC0308u, &recomp_unit_0175, "recomp_unit_0175");
    runtime.register_function(0x08AC032Cu, &recomp_unit_0175, "recomp_unit_0175");
    runtime.register_function(0x08AC0338u, &recomp_unit_0175, "recomp_unit_0175");
    runtime.register_function(0x08AC0340u, &recomp_unit_0175, "recomp_unit_0175");
    runtime.register_function(0x08AC0348u, &recomp_unit_0175, "recomp_unit_0175");
    runtime.register_function(0x08AC0368u, &recomp_unit_0175, "recomp_unit_0175");
    runtime.register_function(0x08AC0370u, &recomp_unit_0175, "recomp_unit_0175");
    runtime.register_function(0x08AC0374u, &recomp_unit_0175, "recomp_unit_0175");
    runtime.register_function(0x08AC038Cu, &recomp_unit_0175, "recomp_unit_0175");
    runtime.register_function(0x08AC0394u, &recomp_unit_0175, "recomp_unit_0175");
    runtime.register_function(0x08AC03A0u, &recomp_unit_0175, "recomp_unit_0175");
    runtime.register_function(0x08AC03A8u, &recomp_unit_0175, "recomp_unit_0175");
    runtime.register_function(0x08AC03B4u, &recomp_unit_0175, "recomp_unit_0175");
    runtime.register_function(0x08AC03BCu, &recomp_unit_0175, "recomp_unit_0175");
    runtime.register_function(0x08AC03C4u, &recomp_unit_0175, "recomp_unit_0175");
    runtime.register_function(0x08AC03CCu, &recomp_unit_0175, "recomp_unit_0175");
    runtime.register_function(0x08AC03D8u, &recomp_unit_0175, "recomp_unit_0175");
    runtime.register_function(0x08AC03E0u, &recomp_unit_0175, "recomp_unit_0175");
    runtime.register_function(0x08AC03ECu, &recomp_unit_0175, "recomp_unit_0175");
    runtime.register_function(0x08AC03F4u, &recomp_unit_0175, "recomp_unit_0175");
    runtime.register_function(0x08AC0400u, &recomp_unit_0175, "recomp_unit_0175");
    runtime.register_function(0x08AC0404u, &recomp_unit_0175, "recomp_unit_0175");
    runtime.register_function(0x08AC040Cu, &recomp_unit_0175, "recomp_unit_0175");
    runtime.register_function(0x08AC0418u, &recomp_unit_0175, "recomp_unit_0175");
    runtime.register_function(0x08AC0420u, &recomp_unit_0175, "recomp_unit_0175");
    runtime.register_function(0x08AC0428u, &recomp_unit_0175, "recomp_unit_0175");
    runtime.register_function(0x08AC0444u, &recomp_unit_0175, "recomp_unit_0175");
    runtime.register_function(0x08AC044Cu, &recomp_unit_0175, "recomp_unit_0175");
    runtime.register_function(0x08AC0454u, &recomp_unit_0175, "recomp_unit_0175");
    runtime.register_function(0x08AC045Cu, &recomp_unit_0175, "recomp_unit_0175");
    runtime.register_function(0x08AC0464u, &recomp_unit_0175, "recomp_unit_0175");
    runtime.register_function(0x08AC0490u, &recomp_unit_0175, "recomp_unit_0175");
    runtime.register_function(0x08AC0494u, &recomp_unit_0175, "recomp_unit_0175");
    runtime.register_function(0x08AC04A8u, &recomp_unit_0175, "recomp_unit_0175");
    runtime.register_function(0x08AC04B0u, &recomp_unit_0175, "recomp_unit_0175");
    runtime.register_function(0x08AC04CCu, &recomp_unit_0175, "recomp_unit_0175");
    runtime.register_function(0x08AC04D8u, &recomp_unit_0175, "recomp_unit_0175");
    runtime.register_function(0x08AC04E0u, &recomp_unit_0175, "recomp_unit_0175");
    runtime.register_function(0x08AC04E8u, &recomp_unit_0175, "recomp_unit_0175");
    runtime.register_function(0x08AC04F4u, &recomp_unit_0175, "recomp_unit_0175");
    runtime.register_function(0x08AC0500u, &recomp_unit_0175, "recomp_unit_0175");
    runtime.register_function(0x08AC0504u, &recomp_unit_0175, "recomp_unit_0175");
    runtime.register_function(0x08AC0514u, &recomp_unit_0175, "recomp_unit_0175");
    runtime.register_function(0x08AC0548u, &recomp_unit_0175, "recomp_unit_0175");
    runtime.register_function(0x08AC0550u, &recomp_unit_0175, "recomp_unit_0175");
    runtime.register_function(0x08AC0558u, &recomp_unit_0175, "recomp_unit_0175");
    runtime.register_function(0x08AC0564u, &recomp_unit_0175, "recomp_unit_0175");
    runtime.register_function(0x08AC0574u, &recomp_unit_0175, "recomp_unit_0175");
    runtime.register_function(0x08AC0584u, &recomp_unit_0175, "recomp_unit_0175");
    runtime.register_function(0x08AC0598u, &recomp_unit_0175, "recomp_unit_0175");
    runtime.register_function(0x08AC05A0u, &recomp_unit_0175, "recomp_unit_0175");
    runtime.register_function(0x08AC05A8u, &recomp_unit_0175, "recomp_unit_0175");
    runtime.register_function(0x08AC05B0u, &recomp_unit_0175, "recomp_unit_0175");
    runtime.register_function(0x08AC05BCu, &recomp_unit_0175, "recomp_unit_0175");
    runtime.register_function(0x08AC05C8u, &recomp_unit_0175, "recomp_unit_0175");
    runtime.register_function(0x08AC05D4u, &recomp_unit_0175, "recomp_unit_0175");
    runtime.register_function(0x08AC05DCu, &recomp_unit_0175, "recomp_unit_0175");
    runtime.register_function(0x08AC05ECu, &recomp_unit_0175, "recomp_unit_0175");
    runtime.register_function(0x08AC05F8u, &recomp_unit_0175, "recomp_unit_0175");
    runtime.register_function(0x08AC060Cu, &recomp_unit_0175, "recomp_unit_0175");
    runtime.register_function(0x08AC0614u, &recomp_unit_0175, "recomp_unit_0175");
    runtime.register_function(0x08AC0620u, &recomp_unit_0175, "recomp_unit_0175");
    runtime.register_function(0x08AC062Cu, &recomp_unit_0175, "recomp_unit_0175");
    runtime.register_function(0x08AC064Cu, &recomp_unit_0175, "recomp_unit_0175");
    runtime.register_function(0x08AC067Cu, &recomp_unit_0175, "recomp_unit_0175");
    runtime.register_function(0x08AC0688u, &recomp_unit_0175, "recomp_unit_0175");
    runtime.register_function(0x08AC069Cu, &recomp_unit_0175, "recomp_unit_0175");
    runtime.register_function(0x08AC06A4u, &recomp_unit_0175, "recomp_unit_0175");
    runtime.register_function(0x08AC06B4u, &recomp_unit_0175, "recomp_unit_0175");
    runtime.register_function(0x08AC06DCu, &recomp_unit_0175, "recomp_unit_0175");
    runtime.register_function(0x08AC06E4u, &recomp_unit_0175, "recomp_unit_0175");
    runtime.register_function(0x08AC06F0u, &recomp_unit_0175, "recomp_unit_0175");
    runtime.register_function(0x08AC0720u, &recomp_unit_0175, "recomp_unit_0175");
    runtime.register_function(0x08AC0728u, &recomp_unit_0175, "recomp_unit_0175");
    runtime.register_function(0x08AC0738u, &recomp_unit_0175, "recomp_unit_0175");
    runtime.register_function(0x08AC074Cu, &recomp_unit_0175, "recomp_unit_0175");
    runtime.register_function(0x08AC0760u, &recomp_unit_0175, "recomp_unit_0175");
    runtime.register_function(0x08AC0788u, &recomp_unit_0175, "recomp_unit_0175");
    runtime.register_function(0x08AC078Cu, &recomp_unit_0175, "recomp_unit_0175");
    runtime.register_function(0x08AC07B0u, &recomp_unit_0175, "recomp_unit_0175");
    runtime.register_function(0x08AC07E4u, &recomp_unit_0175, "recomp_unit_0175");
    runtime.register_function(0x08AC080Cu, &recomp_unit_0175, "recomp_unit_0175");
    runtime.register_function(0x08AC0814u, &recomp_unit_0175, "recomp_unit_0175");
    runtime.register_function(0x08AC082Cu, &recomp_unit_0175, "recomp_unit_0175");
    runtime.register_function(0x08AC083Cu, &recomp_unit_0175, "recomp_unit_0175");
    runtime.register_function(0x08AC0858u, &recomp_unit_0175, "recomp_unit_0175");
    runtime.register_function(0x08AC0880u, &recomp_unit_0175, "recomp_unit_0175");
    runtime.register_function(0x08AC0898u, &recomp_unit_0175, "recomp_unit_0175");
    runtime.register_function(0x08AC08A0u, &recomp_unit_0175, "recomp_unit_0175");
    runtime.register_function(0x08AC08ACu, &recomp_unit_0175, "recomp_unit_0175");
    runtime.register_function(0x08AC08C0u, &recomp_unit_0175, "recomp_unit_0175");
    runtime.register_function(0x08AC08D0u, &recomp_unit_0175, "recomp_unit_0175");
    runtime.register_function(0x08AC08E8u, &recomp_unit_0175, "recomp_unit_0175");
    runtime.register_function(0x08AC08F4u, &recomp_unit_0175, "recomp_unit_0175");
    runtime.register_function(0x08AC0914u, &recomp_unit_0175, "recomp_unit_0175");
    runtime.register_function(0x08AC0930u, &recomp_unit_0175, "recomp_unit_0175");
    runtime.register_function(0x08AC0938u, &recomp_unit_0175, "recomp_unit_0175");
    runtime.register_function(0x08AC0948u, &recomp_unit_0175, "recomp_unit_0175");
    runtime.register_function(0x08AC0960u, &recomp_unit_0175, "recomp_unit_0175");
    runtime.register_function(0x08AC0980u, &recomp_unit_0175, "recomp_unit_0175");
    runtime.register_function(0x08AC0988u, &recomp_unit_0175, "recomp_unit_0175");
    runtime.register_function(0x08AC09A8u, &recomp_unit_0175, "recomp_unit_0175");
    runtime.register_function(0x08AC09B0u, &recomp_unit_0175, "recomp_unit_0175");
    runtime.register_function(0x08AC09C8u, &recomp_unit_0175, "recomp_unit_0175");
    runtime.register_function(0x08AC09D8u, &recomp_unit_0175, "recomp_unit_0175");
    runtime.register_function(0x08AC09E0u, &recomp_unit_0175, "recomp_unit_0175");
    runtime.register_function(0x08AC09F4u, &recomp_unit_0175, "recomp_unit_0175");
    runtime.register_function(0x08AC0A08u, &recomp_unit_0175, "recomp_unit_0175");
    runtime.register_function(0x08AC0A10u, &recomp_unit_0175, "recomp_unit_0175");
    runtime.register_function(0x08AC0A1Cu, &recomp_unit_0175, "recomp_unit_0175");
    runtime.register_function(0x08AC0A28u, &recomp_unit_0175, "recomp_unit_0175");
    runtime.register_function(0x08AC0A48u, &recomp_unit_0175, "recomp_unit_0175");
    runtime.register_function(0x08AC0A54u, &recomp_unit_0175, "recomp_unit_0175");
    runtime.register_function(0x08AC0A5Cu, &recomp_unit_0175, "recomp_unit_0175");
    runtime.register_function(0x08AC0A68u, &recomp_unit_0175, "recomp_unit_0175");
    runtime.register_function(0x08AC0A70u, &recomp_unit_0175, "recomp_unit_0175");
    runtime.register_function(0x08AC0A78u, &recomp_unit_0175, "recomp_unit_0175");
    runtime.register_function(0x08AC0A8Cu, &recomp_unit_0175, "recomp_unit_0175");
    runtime.register_function(0x08AC0AA0u, &recomp_unit_0175, "recomp_unit_0175");
    runtime.register_function(0x08AC0AB4u, &recomp_unit_0175, "recomp_unit_0175");
    runtime.register_function(0x08AC0ABCu, &recomp_unit_0175, "recomp_unit_0175");
    runtime.register_function(0x08AC0ACCu, &recomp_unit_0175, "recomp_unit_0175");
    runtime.register_function(0x08AC0AF4u, &recomp_unit_0175, "recomp_unit_0175");
    runtime.register_function(0x08AC0AFCu, &recomp_unit_0175, "recomp_unit_0175");
    runtime.register_function(0x08AC0B08u, &recomp_unit_0175, "recomp_unit_0175");
    runtime.register_function(0x08AC0B10u, &recomp_unit_0175, "recomp_unit_0175");
    runtime.register_function(0x08AC0B18u, &recomp_unit_0175, "recomp_unit_0175");
    runtime.register_function(0x08AC0B2Cu, &recomp_unit_0175, "recomp_unit_0175");
    runtime.register_function(0x08AC0B3Cu, &recomp_unit_0175, "recomp_unit_0175");
    runtime.register_function(0x08AC0B54u, &recomp_unit_0175, "recomp_unit_0175");
    runtime.register_function(0x08AC0B60u, &recomp_unit_0175, "recomp_unit_0175");
    runtime.register_function(0x08AC0B68u, &recomp_unit_0175, "recomp_unit_0175");
    runtime.register_function(0x08AC0B70u, &recomp_unit_0175, "recomp_unit_0175");
    runtime.register_function(0x08AC0B7Cu, &recomp_unit_0175, "recomp_unit_0175");
    runtime.register_function(0x08AC0B9Cu, &recomp_unit_0175, "recomp_unit_0175");
    runtime.register_function(0x08AC0BACu, &recomp_unit_0175, "recomp_unit_0175");
    runtime.register_function(0x08AC0BD0u, &recomp_unit_0175, "recomp_unit_0175");
    runtime.register_function(0x08AC0BD4u, &recomp_unit_0175, "recomp_unit_0175");
    runtime.register_function(0x08AC0BECu, &recomp_unit_0175, "recomp_unit_0175");
    runtime.register_function(0x08AC0C6Cu, &recomp_unit_0175, "recomp_unit_0175");
    runtime.register_function(0x08AC0C74u, &recomp_unit_0175, "recomp_unit_0175");
    runtime.register_function(0x08AC0C88u, &recomp_unit_0175, "recomp_unit_0175");
    runtime.register_function(0x08AC0C90u, &recomp_unit_0175, "recomp_unit_0175");
    runtime.register_function(0x08AC0C98u, &recomp_unit_0175, "recomp_unit_0175");
    runtime.register_function(0x08AC0CA4u, &recomp_unit_0175, "recomp_unit_0175");
    runtime.register_function(0x08AC0CA8u, &recomp_unit_0175, "recomp_unit_0175");
    runtime.register_function(0x08AC0CB0u, &recomp_unit_0175, "recomp_unit_0175");
    runtime.register_function(0x08AC0CB8u, &recomp_unit_0175, "recomp_unit_0175");
    runtime.register_function(0x08AC0CC4u, &recomp_unit_0175, "recomp_unit_0175");
    runtime.register_function(0x08AC0CCCu, &recomp_unit_0175, "recomp_unit_0175");
    runtime.register_function(0x08AC0CD4u, &recomp_unit_0175, "recomp_unit_0175");
    runtime.register_function(0x08AC0CE0u, &recomp_unit_0175, "recomp_unit_0175");
    runtime.register_function(0x08AC0CF8u, &recomp_unit_0175, "recomp_unit_0175");
    runtime.register_function(0x08AC0D1Cu, &recomp_unit_0175, "recomp_unit_0175");
    runtime.register_function(0x08AC0D28u, &recomp_unit_0175, "recomp_unit_0175");
    runtime.register_function(0x08AC0D44u, &recomp_unit_0175, "recomp_unit_0175");
    runtime.register_function(0x08AC0D54u, &recomp_unit_0175, "recomp_unit_0175");
    runtime.register_function(0x08AC0D5Cu, &recomp_unit_0175, "recomp_unit_0175");
    runtime.register_function(0x08AC0D78u, &recomp_unit_0175, "recomp_unit_0175");
    runtime.register_function(0x08AC0D80u, &recomp_unit_0175, "recomp_unit_0175");
    runtime.register_function(0x08AC0D9Cu, &recomp_unit_0175, "recomp_unit_0175");
    runtime.register_function(0x08AC0DA4u, &recomp_unit_0175, "recomp_unit_0175");
    runtime.register_function(0x08AC0DACu, &recomp_unit_0175, "recomp_unit_0175");
    runtime.register_function(0x08AC0E04u, &recomp_unit_0175, "recomp_unit_0175");
    runtime.register_function(0x08AC0E20u, &recomp_unit_0175, "recomp_unit_0175");
    runtime.register_function(0x08AC0E2Cu, &recomp_unit_0175, "recomp_unit_0175");
    runtime.register_function(0x08AC0E34u, &recomp_unit_0175, "recomp_unit_0175");
    runtime.register_function(0x08AC0E4Cu, &recomp_unit_0175, "recomp_unit_0175");
    runtime.register_function(0x08AC0E54u, &recomp_unit_0175, "recomp_unit_0175");
    runtime.register_function(0x08AC0E5Cu, &recomp_unit_0175, "recomp_unit_0175");
    runtime.register_function(0x08AC0E64u, &recomp_unit_0175, "recomp_unit_0175");
    runtime.register_function(0x08AC0E6Cu, &recomp_unit_0175, "recomp_unit_0175");
    runtime.register_function(0x08AC0E78u, &recomp_unit_0175, "recomp_unit_0175");
    runtime.register_function(0x08AC0E84u, &recomp_unit_0175, "recomp_unit_0175");
    runtime.register_function(0x08AC0E94u, &recomp_unit_0175, "recomp_unit_0175");
    runtime.register_function(0x08AC0EACu, &recomp_unit_0175, "recomp_unit_0175");
    runtime.register_function(0x08AC0EB8u, &recomp_unit_0175, "recomp_unit_0175");
    runtime.register_function(0x08AC0EC0u, &recomp_unit_0175, "recomp_unit_0175");
    runtime.register_function(0x08AC0EC8u, &recomp_unit_0175, "recomp_unit_0175");
    runtime.register_function(0x08AC0ED4u, &recomp_unit_0175, "recomp_unit_0175");
    runtime.register_function(0x08AC0EF4u, &recomp_unit_0175, "recomp_unit_0175");
    runtime.register_function(0x08AC0F04u, &recomp_unit_0175, "recomp_unit_0175");
    runtime.register_function(0x08AC0F18u, &recomp_unit_0175, "recomp_unit_0175");
    runtime.register_function(0x08AC0F40u, &recomp_unit_0175, "recomp_unit_0175");
    runtime.register_function(0x08AC0F54u, &recomp_unit_0175, "recomp_unit_0175");
    runtime.register_function(0x08AC0F70u, &recomp_unit_0175, "recomp_unit_0175");
    runtime.register_function(0x08AC0F78u, &recomp_unit_0175, "recomp_unit_0175");
    runtime.register_function(0x08AC1058u, &recomp_unit_0175, "recomp_unit_0175");
    runtime.register_function(0x08AC107Cu, &recomp_unit_0175, "recomp_unit_0175");
    runtime.register_function(0x08AC1090u, &recomp_unit_0175, "recomp_unit_0175");
    runtime.register_function(0x08AC10A4u, &recomp_unit_0175, "recomp_unit_0175");
    runtime.register_function(0x08AC10C8u, &recomp_unit_0175, "recomp_unit_0175");
    runtime.register_function(0x08AC10D0u, &recomp_unit_0175, "recomp_unit_0175");
    runtime.register_function(0x08AC10D8u, &recomp_unit_0175, "recomp_unit_0175");
    runtime.register_function(0x08AC1100u, &recomp_unit_0175, "recomp_unit_0175");
    runtime.register_function(0x08AC110Cu, &recomp_unit_0175, "recomp_unit_0175");
    runtime.register_function(0x08AC1118u, &recomp_unit_0175, "recomp_unit_0175");
    runtime.register_function(0x08AC1120u, &recomp_unit_0175, "recomp_unit_0175");
    runtime.register_function(0x08AC1128u, &recomp_unit_0175, "recomp_unit_0175");
    runtime.register_function(0x08AC1130u, &recomp_unit_0175, "recomp_unit_0175");
    runtime.register_function(0x08AC1140u, &recomp_unit_0175, "recomp_unit_0175");
    runtime.register_function(0x08AC1148u, &recomp_unit_0175, "recomp_unit_0175");
    runtime.register_function(0x08AC1154u, &recomp_unit_0175, "recomp_unit_0175");
    runtime.register_function(0x08AC115Cu, &recomp_unit_0175, "recomp_unit_0175");
    runtime.register_function(0x08AC1168u, &recomp_unit_0175, "recomp_unit_0175");
    runtime.register_function(0x08AC1170u, &recomp_unit_0175, "recomp_unit_0175");
    runtime.register_function(0x08AC117Cu, &recomp_unit_0175, "recomp_unit_0175");
    runtime.register_function(0x08AC1184u, &recomp_unit_0175, "recomp_unit_0175");
    runtime.register_function(0x08AC118Cu, &recomp_unit_0175, "recomp_unit_0175");
    runtime.register_function(0x08AC1194u, &recomp_unit_0175, "recomp_unit_0175");
    runtime.register_function(0x08AC11A8u, &recomp_unit_0175, "recomp_unit_0175");
    runtime.register_function(0x08AC11C8u, &recomp_unit_0175, "recomp_unit_0175");
    runtime.register_function(0x08AC11D8u, &recomp_unit_0175, "recomp_unit_0175");
    runtime.register_function(0x08AC11E0u, &recomp_unit_0175, "recomp_unit_0175");
    runtime.register_function(0x08AC11E4u, &recomp_unit_0175, "recomp_unit_0175");
    runtime.register_function(0x08AC11ECu, &recomp_unit_0175, "recomp_unit_0175");
    runtime.register_function(0x08AC11F4u, &recomp_unit_0175, "recomp_unit_0175");
    runtime.register_function(0x08AC11FCu, &recomp_unit_0175, "recomp_unit_0175");
    runtime.register_function(0x08AC1208u, &recomp_unit_0175, "recomp_unit_0175");
    runtime.register_function(0x08AC120Cu, &recomp_unit_0175, "recomp_unit_0175");
    runtime.register_function(0x08AC1224u, &recomp_unit_0175, "recomp_unit_0175");
    runtime.register_function(0x08AC1248u, &recomp_unit_0175, "recomp_unit_0175");
    runtime.register_function(0x08AC1250u, &recomp_unit_0175, "recomp_unit_0175");
    runtime.register_function(0x08AC125Cu, &recomp_unit_0175, "recomp_unit_0175");
    runtime.register_function(0x08AC1264u, &recomp_unit_0175, "recomp_unit_0175");
    runtime.register_function(0x08AC1270u, &recomp_unit_0175, "recomp_unit_0175");
    runtime.register_function(0x08AC127Cu, &recomp_unit_0175, "recomp_unit_0175");
    runtime.register_function(0x08AC1284u, &recomp_unit_0175, "recomp_unit_0175");
    runtime.register_function(0x08AC1290u, &recomp_unit_0175, "recomp_unit_0175");
    runtime.register_function(0x08AC129Cu, &recomp_unit_0175, "recomp_unit_0175");
    runtime.register_function(0x08AC12CCu, &recomp_unit_0175, "recomp_unit_0175");
    runtime.register_function(0x08AC12D8u, &recomp_unit_0175, "recomp_unit_0175");
    runtime.register_function(0x08AC12F0u, &recomp_unit_0175, "recomp_unit_0175");
    runtime.register_function(0x08AC1308u, &recomp_unit_0175, "recomp_unit_0175");
    runtime.register_function(0x08AC1310u, &recomp_unit_0175, "recomp_unit_0175");
    runtime.register_function(0x08AC1318u, &recomp_unit_0175, "recomp_unit_0175");
    runtime.register_function(0x08AC1328u, &recomp_unit_0175, "recomp_unit_0175");
    runtime.register_function(0x08AC1338u, &recomp_unit_0175, "recomp_unit_0175");
    runtime.register_function(0x08AC134Cu, &recomp_unit_0175, "recomp_unit_0175");
    runtime.register_function(0x08AC1364u, &recomp_unit_0175, "recomp_unit_0175");
    runtime.register_function(0x08AC1370u, &recomp_unit_0175, "recomp_unit_0175");
    runtime.register_function(0x08AC1384u, &recomp_unit_0175, "recomp_unit_0175");
    runtime.register_function(0x08AC138Cu, &recomp_unit_0175, "recomp_unit_0175");
    runtime.register_function(0x08AC139Cu, &recomp_unit_0175, "recomp_unit_0175");
    runtime.register_function(0x08AC13A0u, &recomp_unit_0175, "recomp_unit_0175");
    runtime.register_function(0x08AC13A8u, &recomp_unit_0175, "recomp_unit_0175");
    runtime.register_function(0x08AC13D8u, &recomp_unit_0175, "recomp_unit_0175");
    runtime.register_function(0x08AC1400u, &recomp_unit_0175, "recomp_unit_0175");
    runtime.register_function(0x08AC1420u, &recomp_unit_0175, "recomp_unit_0175");
    runtime.register_function(0x08AC1440u, &recomp_unit_0175, "recomp_unit_0175");
    runtime.register_function(0x08AC1450u, &recomp_unit_0175, "recomp_unit_0175");
    runtime.register_function(0x08AC1460u, &recomp_unit_0175, "recomp_unit_0175");
    runtime.register_function(0x08AC147Cu, &recomp_unit_0175, "recomp_unit_0175");
    runtime.register_function(0x08AC1488u, &recomp_unit_0175, "recomp_unit_0175");
    runtime.register_function(0x08AC1498u, &recomp_unit_0175, "recomp_unit_0175");
    runtime.register_function(0x08AC14A0u, &recomp_unit_0175, "recomp_unit_0175");
    runtime.register_function(0x08AC14B0u, &recomp_unit_0175, "recomp_unit_0175");
    runtime.register_function(0x08AC14B8u, &recomp_unit_0175, "recomp_unit_0175");
    runtime.register_function(0x08AC14C0u, &recomp_unit_0175, "recomp_unit_0175");
    runtime.register_function(0x08AC14C8u, &recomp_unit_0175, "recomp_unit_0175");
    runtime.register_function(0x08AC14D0u, &recomp_unit_0175, "recomp_unit_0175");
    runtime.register_function(0x08AC14D8u, &recomp_unit_0175, "recomp_unit_0175");
    runtime.register_function(0x08AC14E0u, &recomp_unit_0175, "recomp_unit_0175");
    runtime.register_function(0x08AC14F4u, &recomp_unit_0175, "recomp_unit_0175");
    runtime.register_function(0x08AC1518u, &recomp_unit_0175, "recomp_unit_0175");
    runtime.register_function(0x08AC152Cu, &recomp_unit_0175, "recomp_unit_0175");
    runtime.register_function(0x08AC1544u, &recomp_unit_0175, "recomp_unit_0175");
    runtime.register_function(0x08AC1550u, &recomp_unit_0175, "recomp_unit_0175");
    runtime.register_function(0x08AC1560u, &recomp_unit_0175, "recomp_unit_0175");
    runtime.register_function(0x08AC15B8u, &recomp_unit_0175, "recomp_unit_0175");
    runtime.register_function(0x08AC15D0u, &recomp_unit_0175, "recomp_unit_0175");
    runtime.register_function(0x08AC15ECu, &recomp_unit_0175, "recomp_unit_0175");
    runtime.register_function(0x08AC15F4u, &recomp_unit_0175, "recomp_unit_0175");
    runtime.register_function(0x08AC1604u, &recomp_unit_0175, "recomp_unit_0175");
    runtime.register_function(0x08AC160Cu, &recomp_unit_0175, "recomp_unit_0175");
    runtime.register_function(0x08AC1624u, &recomp_unit_0175, "recomp_unit_0175");
    runtime.register_function(0x08AC1634u, &recomp_unit_0175, "recomp_unit_0175");
    runtime.register_function(0x08AC1644u, &recomp_unit_0175, "recomp_unit_0175");
    runtime.register_function(0x08AC1654u, &recomp_unit_0175, "recomp_unit_0175");
    runtime.register_function(0x08AC1664u, &recomp_unit_0175, "recomp_unit_0175");
    runtime.register_function(0x08AC166Cu, &recomp_unit_0175, "recomp_unit_0175");
    runtime.register_function(0x08AC1674u, &recomp_unit_0175, "recomp_unit_0175");
    runtime.register_function(0x08AC1680u, &recomp_unit_0175, "recomp_unit_0175");
    runtime.register_function(0x08AC169Cu, &recomp_unit_0175, "recomp_unit_0175");
    runtime.register_function(0x08AC16A4u, &recomp_unit_0175, "recomp_unit_0175");
    runtime.register_function(0x08AC16CCu, &recomp_unit_0175, "recomp_unit_0175");
    runtime.register_function(0x08AC16D4u, &recomp_unit_0175, "recomp_unit_0175");
    runtime.register_function(0x08AC16E8u, &recomp_unit_0175, "recomp_unit_0175");
    runtime.register_function(0x08AC16FCu, &recomp_unit_0175, "recomp_unit_0175");
    runtime.register_function(0x08AC1704u, &recomp_unit_0175, "recomp_unit_0175");
    runtime.register_function(0x08AC170Cu, &recomp_unit_0175, "recomp_unit_0175");
    runtime.register_function(0x08AC1718u, &recomp_unit_0175, "recomp_unit_0175");
    runtime.register_function(0x08AC1728u, &recomp_unit_0175, "recomp_unit_0175");
    runtime.register_function(0x08AC1734u, &recomp_unit_0175, "recomp_unit_0175");
    runtime.register_function(0x08AC1744u, &recomp_unit_0175, "recomp_unit_0175");
    runtime.register_function(0x08AC174Cu, &recomp_unit_0175, "recomp_unit_0175");
    runtime.register_function(0x08AC1764u, &recomp_unit_0175, "recomp_unit_0175");
    runtime.register_function(0x08AC176Cu, &recomp_unit_0175, "recomp_unit_0175");
    runtime.register_function(0x08AC1774u, &recomp_unit_0175, "recomp_unit_0175");
    runtime.register_function(0x08AC1780u, &recomp_unit_0175, "recomp_unit_0175");
    runtime.register_function(0x08AC178Cu, &recomp_unit_0175, "recomp_unit_0175");
    runtime.register_function(0x08AC1798u, &recomp_unit_0175, "recomp_unit_0175");
    runtime.register_function(0x08AC17B0u, &recomp_unit_0175, "recomp_unit_0175");
    runtime.register_function(0x08AC17B8u, &recomp_unit_0175, "recomp_unit_0175");
    runtime.register_function(0x08AC17CCu, &recomp_unit_0175, "recomp_unit_0175");
    runtime.register_function(0x08AC17D8u, &recomp_unit_0175, "recomp_unit_0175");
    runtime.register_function(0x08AC17DCu, &recomp_unit_0175, "recomp_unit_0175");
    runtime.register_function(0x08AC17ECu, &recomp_unit_0175, "recomp_unit_0175");
    runtime.register_function(0x08AC17F4u, &recomp_unit_0175, "recomp_unit_0175");
    runtime.register_function(0x08AC1804u, &recomp_unit_0175, "recomp_unit_0175");
    runtime.register_function(0x08AC1808u, &recomp_unit_0175, "recomp_unit_0175");
    runtime.register_function(0x08AC180Cu, &recomp_unit_0175, "recomp_unit_0175");
    runtime.register_function(0x08AC1818u, &recomp_unit_0175, "recomp_unit_0175");
    runtime.register_function(0x08AC1820u, &recomp_unit_0175, "recomp_unit_0175");
    runtime.register_function(0x08AC1828u, &recomp_unit_0175, "recomp_unit_0175");
    runtime.register_function(0x08AC183Cu, &recomp_unit_0175, "recomp_unit_0175");
    runtime.register_function(0x08AC1848u, &recomp_unit_0175, "recomp_unit_0175");
    runtime.register_function(0x08AC1854u, &recomp_unit_0175, "recomp_unit_0175");
    runtime.register_function(0x08AC1858u, &recomp_unit_0175, "recomp_unit_0175");
    runtime.register_function(0x08AC1888u, &recomp_unit_0175, "recomp_unit_0175");
    runtime.register_function(0x08AC18B8u, &recomp_unit_0175, "recomp_unit_0175");
    runtime.register_function(0x08AC18E4u, &recomp_unit_0175, "recomp_unit_0175");
    runtime.register_function(0x08AC18FCu, &recomp_unit_0175, "recomp_unit_0175");
    runtime.register_function(0x08AC1908u, &recomp_unit_0175, "recomp_unit_0175");
    runtime.register_function(0x08AC1910u, &recomp_unit_0175, "recomp_unit_0175");
    runtime.register_function(0x08AC1918u, &recomp_unit_0175, "recomp_unit_0175");
    runtime.register_function(0x08AC1920u, &recomp_unit_0175, "recomp_unit_0175");
    runtime.register_function(0x08AC1928u, &recomp_unit_0175, "recomp_unit_0175");
    runtime.register_function(0x08AC1930u, &recomp_unit_0175, "recomp_unit_0175");
    runtime.register_function(0x08AC195Cu, &recomp_unit_0175, "recomp_unit_0175");
    runtime.register_function(0x08AC1984u, &recomp_unit_0175, "recomp_unit_0175");
    runtime.register_function(0x08AC19A4u, &recomp_unit_0175, "recomp_unit_0175");
    runtime.register_function(0x08AC19A8u, &recomp_unit_0175, "recomp_unit_0175");
    runtime.register_function(0x08AC19ACu, &recomp_unit_0175, "recomp_unit_0175");
    runtime.register_function(0x08AC19B8u, &recomp_unit_0175, "recomp_unit_0175");
    runtime.register_function(0x08AC19CCu, &recomp_unit_0175, "recomp_unit_0175");
    runtime.register_function(0x08AC19DCu, &recomp_unit_0175, "recomp_unit_0175");
    runtime.register_function(0x08AC1A10u, &recomp_unit_0175, "recomp_unit_0175");
    runtime.register_function(0x08AC1A18u, &recomp_unit_0175, "recomp_unit_0175");
    runtime.register_function(0x08AC1A20u, &recomp_unit_0175, "recomp_unit_0175");
    runtime.register_function(0x08AC1A2Cu, &recomp_unit_0175, "recomp_unit_0175");
    runtime.register_function(0x08AC1A3Cu, &recomp_unit_0175, "recomp_unit_0175");
    runtime.register_function(0x08AC1A48u, &recomp_unit_0175, "recomp_unit_0175");
    runtime.register_function(0x08AC1A5Cu, &recomp_unit_0175, "recomp_unit_0175");
    runtime.register_function(0x08AC1A64u, &recomp_unit_0175, "recomp_unit_0175");
    runtime.register_function(0x08AC1A6Cu, &recomp_unit_0175, "recomp_unit_0175");
    runtime.register_function(0x08AC1A74u, &recomp_unit_0175, "recomp_unit_0175");
    runtime.register_function(0x08AC1A80u, &recomp_unit_0175, "recomp_unit_0175");
    runtime.register_function(0x08AC1A8Cu, &recomp_unit_0175, "recomp_unit_0175");
    runtime.register_function(0x08AC1A94u, &recomp_unit_0175, "recomp_unit_0175");
    runtime.register_function(0x08AC1A9Cu, &recomp_unit_0175, "recomp_unit_0175");
    runtime.register_function(0x08AC1AB0u, &recomp_unit_0175, "recomp_unit_0175");
    runtime.register_function(0x08AC1AC8u, &recomp_unit_0175, "recomp_unit_0175");
    runtime.register_function(0x08AC1ADCu, &recomp_unit_0175, "recomp_unit_0175");
    runtime.register_function(0x08AC1B28u, &recomp_unit_0175, "recomp_unit_0175");
    runtime.register_function(0x08AC1B30u, &recomp_unit_0175, "recomp_unit_0175");
    runtime.register_function(0x08AC1B44u, &recomp_unit_0175, "recomp_unit_0175");
    runtime.register_function(0x08AC1B4Cu, &recomp_unit_0175, "recomp_unit_0175");
    runtime.register_function(0x08AC1B5Cu, &recomp_unit_0175, "recomp_unit_0175");
    runtime.register_function(0x08AC1B84u, &recomp_unit_0175, "recomp_unit_0175");
    runtime.register_function(0x08AC1BA0u, &recomp_unit_0175, "recomp_unit_0175");
    runtime.register_function(0x08AC1BACu, &recomp_unit_0175, "recomp_unit_0175");
    runtime.register_function(0x08AC1BF4u, &recomp_unit_0175, "recomp_unit_0175");
    runtime.register_function(0x08AC1BF8u, &recomp_unit_0175, "recomp_unit_0175");
    runtime.register_function(0x08AC1C18u, &recomp_unit_0175, "recomp_unit_0175");
    runtime.register_function(0x08AC1C40u, &recomp_unit_0175, "recomp_unit_0175");
    runtime.register_function(0x08AC1C48u, &recomp_unit_0175, "recomp_unit_0175");
    runtime.register_function(0x08AC1C60u, &recomp_unit_0175, "recomp_unit_0175");
    runtime.register_function(0x08AC1C70u, &recomp_unit_0175, "recomp_unit_0175");
    runtime.register_function(0x08AC1C8Cu, &recomp_unit_0175, "recomp_unit_0175");
    runtime.register_function(0x08AC1CBCu, &recomp_unit_0175, "recomp_unit_0175");
    runtime.register_function(0x08AC1CD4u, &recomp_unit_0175, "recomp_unit_0175");
    runtime.register_function(0x08AC1CDCu, &recomp_unit_0175, "recomp_unit_0175");
    runtime.register_function(0x08AC1CE4u, &recomp_unit_0175, "recomp_unit_0175");
    runtime.register_function(0x08AC1CF0u, &recomp_unit_0175, "recomp_unit_0175");
    runtime.register_function(0x08AC1D04u, &recomp_unit_0175, "recomp_unit_0175");
    runtime.register_function(0x08AC1D14u, &recomp_unit_0175, "recomp_unit_0175");
    runtime.register_function(0x08AC1D24u, &recomp_unit_0175, "recomp_unit_0175");
    runtime.register_function(0x08AC1D3Cu, &recomp_unit_0175, "recomp_unit_0175");
    runtime.register_function(0x08AC1D48u, &recomp_unit_0175, "recomp_unit_0175");
    runtime.register_function(0x08AC1D70u, &recomp_unit_0175, "recomp_unit_0175");
    runtime.register_function(0x08AC1D8Cu, &recomp_unit_0175, "recomp_unit_0175");
    runtime.register_function(0x08AC1D98u, &recomp_unit_0175, "recomp_unit_0175");
    runtime.register_function(0x08AC1DA0u, &recomp_unit_0175, "recomp_unit_0175");
    runtime.register_function(0x08AC1DA8u, &recomp_unit_0175, "recomp_unit_0175");
    runtime.register_function(0x08AC1DBCu, &recomp_unit_0175, "recomp_unit_0175");
    runtime.register_function(0x08AC1DC8u, &recomp_unit_0175, "recomp_unit_0175");
    runtime.register_function(0x08AC1DD4u, &recomp_unit_0175, "recomp_unit_0175");
    runtime.register_function(0x08AC1DDCu, &recomp_unit_0175, "recomp_unit_0175");
    runtime.register_function(0x08AC1DE4u, &recomp_unit_0175, "recomp_unit_0175");
    runtime.register_function(0x08AC1DFCu, &recomp_unit_0175, "recomp_unit_0175");
    runtime.register_function(0x08AC1E0Cu, &recomp_unit_0175, "recomp_unit_0175");
    runtime.register_function(0x08AC1E38u, &recomp_unit_0175, "recomp_unit_0175");
    runtime.register_function(0x08AC1E40u, &recomp_unit_0175, "recomp_unit_0175");
    runtime.register_function(0x08AC1E4Cu, &recomp_unit_0175, "recomp_unit_0175");
    runtime.register_function(0x08AC1E54u, &recomp_unit_0175, "recomp_unit_0175");
    runtime.register_function(0x08AC1E5Cu, &recomp_unit_0175, "recomp_unit_0175");
    runtime.register_function(0x08AC1E70u, &recomp_unit_0175, "recomp_unit_0175");
    runtime.register_function(0x08AC1E74u, &recomp_unit_0175, "recomp_unit_0175");
    runtime.register_function(0x08AC1E7Cu, &recomp_unit_0175, "recomp_unit_0175");
    runtime.register_function(0x08AC1E84u, &recomp_unit_0175, "recomp_unit_0175");
    runtime.register_function(0x08AC1E8Cu, &recomp_unit_0175, "recomp_unit_0175");
    runtime.register_function(0x08AC1E98u, &recomp_unit_0175, "recomp_unit_0175");
    runtime.register_function(0x08AC1EA8u, &recomp_unit_0175, "recomp_unit_0175");
    runtime.register_function(0x08AC1ED0u, &recomp_unit_0175, "recomp_unit_0175");
    runtime.register_function(0x08AC1EE4u, &recomp_unit_0175, "recomp_unit_0175");
    runtime.register_function(0x08AC1F0Cu, &recomp_unit_0175, "recomp_unit_0175");
    runtime.register_function(0x08AC1F14u, &recomp_unit_0175, "recomp_unit_0175");
    runtime.register_function(0x08AC1F1Cu, &recomp_unit_0175, "recomp_unit_0175");
    runtime.register_function(0x08AC1F24u, &recomp_unit_0175, "recomp_unit_0175");
    runtime.register_function(0x08AC1F2Cu, &recomp_unit_0175, "recomp_unit_0175");
    runtime.register_function(0x08AC1F40u, &recomp_unit_0175, "recomp_unit_0175");
    runtime.register_function(0x08AC1F4Cu, &recomp_unit_0175, "recomp_unit_0175");
    runtime.register_function(0x08AC1F50u, &recomp_unit_0175, "recomp_unit_0175");
    runtime.register_function(0x08AC1F64u, &recomp_unit_0175, "recomp_unit_0175");
    runtime.register_function(0x08AC1F80u, &recomp_unit_0175, "recomp_unit_0175");
    runtime.register_function(0x08AC1F8Cu, &recomp_unit_0175, "recomp_unit_0175");
    runtime.register_function(0x08AC1F94u, &recomp_unit_0175, "recomp_unit_0175");
    runtime.register_function(0x08AC1F9Cu, &recomp_unit_0175, "recomp_unit_0175");
    runtime.register_function(0x08AC1FA8u, &recomp_unit_0175, "recomp_unit_0175");
    runtime.register_function(0x08AC1FD0u, &recomp_unit_0175, "recomp_unit_0175");
    runtime.register_function(0x08AC1FE0u, &recomp_unit_0175, "recomp_unit_0175");
    runtime.register_function(0x08AC1FF8u, &recomp_unit_0175, "recomp_unit_0175");
    runtime.register_function(0x08AC2004u, &recomp_unit_0175, "recomp_unit_0175");
    runtime.register_function(0x08AC200Cu, &recomp_unit_0175, "recomp_unit_0175");
    runtime.register_function(0x08AC2014u, &recomp_unit_0175, "recomp_unit_0175");
    runtime.register_function(0x08AC201Cu, &recomp_unit_0175, "recomp_unit_0175");
    runtime.register_function(0x08AC2024u, &recomp_unit_0175, "recomp_unit_0175");
    runtime.register_function(0x08AC2038u, &recomp_unit_0175, "recomp_unit_0175");
    runtime.register_function(0x08AC2050u, &recomp_unit_0175, "recomp_unit_0175");
    runtime.register_function(0x08AC206Cu, &recomp_unit_0175, "recomp_unit_0175");
    runtime.register_function(0x08AC2078u, &recomp_unit_0175, "recomp_unit_0175");
    runtime.register_function(0x08AC2090u, &recomp_unit_0175, "recomp_unit_0175");
    runtime.register_function(0x08AC209Cu, &recomp_unit_0175, "recomp_unit_0175");
    runtime.register_function(0x08AC20C4u, &recomp_unit_0175, "recomp_unit_0175");
    runtime.register_function(0x08AC20D4u, &recomp_unit_0175, "recomp_unit_0175");
    runtime.register_function(0x08AC20F0u, &recomp_unit_0175, "recomp_unit_0175");
    runtime.register_function(0x08AC20FCu, &recomp_unit_0175, "recomp_unit_0175");
    runtime.register_function(0x08AC2104u, &recomp_unit_0175, "recomp_unit_0175");
    runtime.register_function(0x08AC210Cu, &recomp_unit_0175, "recomp_unit_0175");
    runtime.register_function(0x08AC2114u, &recomp_unit_0175, "recomp_unit_0175");
    runtime.register_function(0x08AC211Cu, &recomp_unit_0175, "recomp_unit_0175");
    runtime.register_function(0x08AC2128u, &recomp_unit_0175, "recomp_unit_0175");
    runtime.register_function(0x08AC2150u, &recomp_unit_0175, "recomp_unit_0175");
    runtime.register_function(0x08AC2160u, &recomp_unit_0175, "recomp_unit_0175");
    runtime.register_function(0x08AC21C0u, &recomp_unit_0175, "recomp_unit_0175");
    runtime.register_function(0x08AC21E0u, &recomp_unit_0175, "recomp_unit_0175");
    runtime.register_function(0x08AC21E8u, &recomp_unit_0175, "recomp_unit_0175");
    runtime.register_function(0x08AC21FCu, &recomp_unit_0175, "recomp_unit_0175");
    runtime.register_function(0x08AC221Cu, &recomp_unit_0175, "recomp_unit_0175");
    runtime.register_function(0x08AC226Cu, &recomp_unit_0175, "recomp_unit_0175");
    runtime.register_function(0x08AC22C4u, &recomp_unit_0175, "recomp_unit_0175");
    runtime.register_function(0x08AC231Cu, &recomp_unit_0175, "recomp_unit_0175");
    runtime.register_function(0x08AC2374u, &recomp_unit_0175, "recomp_unit_0175");
    runtime.register_function(0x08AC23CCu, &recomp_unit_0175, "recomp_unit_0175");
    runtime.register_function(0x08AC2424u, &recomp_unit_0175, "recomp_unit_0175");
    runtime.register_function(0x08AC2448u, &recomp_unit_0175, "recomp_unit_0175");
    runtime.register_function(0x08AC2460u, &recomp_unit_0175, "recomp_unit_0175");
    runtime.register_function(0x08AC2490u, &recomp_unit_0175, "recomp_unit_0175");
    runtime.register_function(0x08AC2498u, &recomp_unit_0175, "recomp_unit_0175");
    runtime.register_function(0x08AC24A8u, &recomp_unit_0175, "recomp_unit_0175");
    runtime.register_function(0x08AC24B0u, &recomp_unit_0175, "recomp_unit_0175");
    runtime.register_function(0x08AC24B8u, &recomp_unit_0175, "recomp_unit_0175");
    runtime.register_function(0x08AC24C0u, &recomp_unit_0175, "recomp_unit_0175");
    runtime.register_function(0x08AC24C8u, &recomp_unit_0175, "recomp_unit_0175");
    runtime.register_function(0x08AC24D0u, &recomp_unit_0175, "recomp_unit_0175");
    runtime.register_function(0x08AC24D8u, &recomp_unit_0175, "recomp_unit_0175");
    runtime.register_function(0x08AC24E0u, &recomp_unit_0175, "recomp_unit_0175");
    runtime.register_function(0x08AC24E8u, &recomp_unit_0175, "recomp_unit_0175");
    runtime.register_function(0x08AC24ECu, &recomp_unit_0175, "recomp_unit_0175");
    runtime.register_function(0x08AC24F4u, &recomp_unit_0175, "recomp_unit_0175");
    runtime.register_function(0x08AC24FCu, &recomp_unit_0175, "recomp_unit_0175");
    runtime.register_function(0x08AC2508u, &recomp_unit_0175, "recomp_unit_0175");
    runtime.register_function(0x08AC250Cu, &recomp_unit_0175, "recomp_unit_0175");
    runtime.register_function(0x08AC2514u, &recomp_unit_0175, "recomp_unit_0175");
    runtime.register_function(0x08AC251Cu, &recomp_unit_0175, "recomp_unit_0175");
    runtime.register_function(0x08AC2524u, &recomp_unit_0175, "recomp_unit_0175");
    runtime.register_function(0x08AC252Cu, &recomp_unit_0175, "recomp_unit_0175");
    runtime.register_function(0x08AC2534u, &recomp_unit_0175, "recomp_unit_0175");
    runtime.register_function(0x08AC253Cu, &recomp_unit_0175, "recomp_unit_0175");
    runtime.register_function(0x08AC2544u, &recomp_unit_0175, "recomp_unit_0175");
    runtime.register_function(0x08AC254Cu, &recomp_unit_0175, "recomp_unit_0175");
    runtime.register_function(0x08AC2554u, &recomp_unit_0175, "recomp_unit_0175");
    runtime.register_function(0x08AC255Cu, &recomp_unit_0175, "recomp_unit_0175");
    runtime.register_function(0x08AC2564u, &recomp_unit_0175, "recomp_unit_0175");
    runtime.register_function(0x08AC256Cu, &recomp_unit_0175, "recomp_unit_0175");
    runtime.register_function(0x08AC2594u, &recomp_unit_0175, "recomp_unit_0175");
    runtime.register_function(0x08AC25A0u, &recomp_unit_0175, "recomp_unit_0175");
    runtime.register_function(0x08AC25A8u, &recomp_unit_0175, "recomp_unit_0175");
    runtime.register_function(0x08AC25B0u, &recomp_unit_0175, "recomp_unit_0175");
    runtime.register_function(0x08AC25C0u, &recomp_unit_0175, "recomp_unit_0175");
    runtime.register_function(0x08AC25D0u, &recomp_unit_0175, "recomp_unit_0175");
    runtime.register_function(0x08AC25D8u, &recomp_unit_0175, "recomp_unit_0175");
    runtime.register_function(0x08AC25E4u, &recomp_unit_0175, "recomp_unit_0175");
    runtime.register_function(0x08AC25ECu, &recomp_unit_0175, "recomp_unit_0175");
    runtime.register_function(0x08AC25F4u, &recomp_unit_0175, "recomp_unit_0175");
    runtime.register_function(0x08AC25FCu, &recomp_unit_0175, "recomp_unit_0175");
    runtime.register_function(0x08AC2610u, &recomp_unit_0175, "recomp_unit_0175");
    runtime.register_function(0x08AC2638u, &recomp_unit_0175, "recomp_unit_0175");
    runtime.register_function(0x08AC2644u, &recomp_unit_0175, "recomp_unit_0175");
    runtime.register_function(0x08AC264Cu, &recomp_unit_0175, "recomp_unit_0175");
    runtime.register_function(0x08AC265Cu, &recomp_unit_0175, "recomp_unit_0175");
    runtime.register_function(0x08AC2664u, &recomp_unit_0175, "recomp_unit_0175");
    runtime.register_function(0x08AC2670u, &recomp_unit_0175, "recomp_unit_0175");
    runtime.register_function(0x08AC267Cu, &recomp_unit_0175, "recomp_unit_0175");
    runtime.register_function(0x08AC26ACu, &recomp_unit_0175, "recomp_unit_0175");
    runtime.register_function(0x08AC26B4u, &recomp_unit_0175, "recomp_unit_0175");
    runtime.register_function(0x08AC26BCu, &recomp_unit_0175, "recomp_unit_0175");
    runtime.register_function(0x08AC26CCu, &recomp_unit_0175, "recomp_unit_0175");
    runtime.register_function(0x08AC26E4u, &recomp_unit_0175, "recomp_unit_0175");
    runtime.register_function(0x08AC26ECu, &recomp_unit_0175, "recomp_unit_0175");
    runtime.register_function(0x08AC26F8u, &recomp_unit_0175, "recomp_unit_0175");
    runtime.register_function(0x08AC2708u, &recomp_unit_0175, "recomp_unit_0175");
    runtime.register_function(0x08AC2718u, &recomp_unit_0175, "recomp_unit_0175");
    runtime.register_function(0x08AC2730u, &recomp_unit_0175, "recomp_unit_0175");
    runtime.register_function(0x08AC2748u, &recomp_unit_0175, "recomp_unit_0175");
    runtime.register_function(0x08AC2758u, &recomp_unit_0175, "recomp_unit_0175");
    runtime.register_function(0x08AC2764u, &recomp_unit_0175, "recomp_unit_0175");
    runtime.register_function(0x08AC2778u, &recomp_unit_0175, "recomp_unit_0175");
    runtime.register_function(0x08AC2780u, &recomp_unit_0175, "recomp_unit_0175");
    runtime.register_function(0x08AC2790u, &recomp_unit_0175, "recomp_unit_0175");
    runtime.register_function(0x08AC2794u, &recomp_unit_0175, "recomp_unit_0175");
    runtime.register_function(0x08AC279Cu, &recomp_unit_0175, "recomp_unit_0175");
    runtime.register_function(0x08AC27CCu, &recomp_unit_0175, "recomp_unit_0175");
    runtime.register_function(0x08AC27F4u, &recomp_unit_0175, "recomp_unit_0175");
    runtime.register_function(0x08AC2814u, &recomp_unit_0175, "recomp_unit_0175");
    runtime.register_function(0x08AC2838u, &recomp_unit_0175, "recomp_unit_0175");
    runtime.register_function(0x08AC2848u, &recomp_unit_0175, "recomp_unit_0175");
    runtime.register_function(0x08AC2858u, &recomp_unit_0175, "recomp_unit_0175");
    runtime.register_function(0x08AC2870u, &recomp_unit_0175, "recomp_unit_0175");
    runtime.register_function(0x08AC2880u, &recomp_unit_0175, "recomp_unit_0175");
    runtime.register_function(0x08AC2888u, &recomp_unit_0175, "recomp_unit_0175");
    runtime.register_function(0x08AC2890u, &recomp_unit_0175, "recomp_unit_0175");
    runtime.register_function(0x08AC2898u, &recomp_unit_0175, "recomp_unit_0175");
    runtime.register_function(0x08AC28A0u, &recomp_unit_0175, "recomp_unit_0175");
    runtime.register_function(0x08AC28A8u, &recomp_unit_0175, "recomp_unit_0175");
    runtime.register_function(0x08AC28B0u, &recomp_unit_0175, "recomp_unit_0175");
    runtime.register_function(0x08AC28B8u, &recomp_unit_0175, "recomp_unit_0175");
    runtime.register_function(0x08AC28C0u, &recomp_unit_0175, "recomp_unit_0175");
    runtime.register_function(0x08AC28D0u, &recomp_unit_0175, "recomp_unit_0175");
    runtime.register_function(0x08AC2904u, &recomp_unit_0175, "recomp_unit_0175");
    runtime.register_function(0x08AC2918u, &recomp_unit_0175, "recomp_unit_0175");
    runtime.register_function(0x08AC2920u, &recomp_unit_0175, "recomp_unit_0175");
    runtime.register_function(0x08AC2928u, &recomp_unit_0175, "recomp_unit_0175");
    runtime.register_function(0x08AC2940u, &recomp_unit_0175, "recomp_unit_0175");
    runtime.register_function(0x08AC294Cu, &recomp_unit_0175, "recomp_unit_0175");
    runtime.register_function(0x08AC2954u, &recomp_unit_0175, "recomp_unit_0175");
    runtime.register_function(0x08AC2960u, &recomp_unit_0175, "recomp_unit_0175");
    runtime.register_function(0x08AC296Cu, &recomp_unit_0175, "recomp_unit_0175");
    runtime.register_function(0x08AC2970u, &recomp_unit_0175, "recomp_unit_0175");
    runtime.register_function(0x08AC2978u, &recomp_unit_0175, "recomp_unit_0175");
    runtime.register_function(0x08AC2984u, &recomp_unit_0175, "recomp_unit_0175");
    runtime.register_function(0x08AC2988u, &recomp_unit_0175, "recomp_unit_0175");
    runtime.register_function(0x08AC2990u, &recomp_unit_0175, "recomp_unit_0175");
    runtime.register_function(0x08AC299Cu, &recomp_unit_0175, "recomp_unit_0175");
    runtime.register_function(0x08AC29A0u, &recomp_unit_0175, "recomp_unit_0175");
    runtime.register_function(0x08AC29A8u, &recomp_unit_0175, "recomp_unit_0175");
    runtime.register_function(0x08AC29B4u, &recomp_unit_0175, "recomp_unit_0175");
    runtime.register_function(0x08AC29B8u, &recomp_unit_0175, "recomp_unit_0175");
    runtime.register_function(0x08AC29C0u, &recomp_unit_0175, "recomp_unit_0175");
    runtime.register_function(0x08AC29C8u, &recomp_unit_0175, "recomp_unit_0175");
    runtime.register_function(0x08AC29D0u, &recomp_unit_0175, "recomp_unit_0175");
    runtime.register_function(0x08AC29D8u, &recomp_unit_0175, "recomp_unit_0175");
    runtime.register_function(0x08AC29E0u, &recomp_unit_0175, "recomp_unit_0175");
    runtime.register_function(0x08AC29F0u, &recomp_unit_0175, "recomp_unit_0175");
    runtime.register_function(0x08AC2A00u, &recomp_unit_0175, "recomp_unit_0175");
    runtime.register_function(0x08AC2A0Cu, &recomp_unit_0175, "recomp_unit_0175");
    runtime.register_function(0x08AC2A10u, &recomp_unit_0175, "recomp_unit_0175");
    runtime.register_function(0x08AC2A18u, &recomp_unit_0175, "recomp_unit_0175");
    runtime.register_function(0x08AC2A24u, &recomp_unit_0175, "recomp_unit_0175");
    runtime.register_function(0x08AC2A30u, &recomp_unit_0175, "recomp_unit_0175");
    runtime.register_function(0x08AC2A48u, &recomp_unit_0175, "recomp_unit_0175");
    runtime.register_function(0x08AC2A58u, &recomp_unit_0175, "recomp_unit_0175");
    runtime.register_function(0x08AC2A68u, &recomp_unit_0175, "recomp_unit_0175");
    runtime.register_function(0x08AC2A74u, &recomp_unit_0175, "recomp_unit_0175");
    runtime.register_function(0x08AC2A80u, &recomp_unit_0175, "recomp_unit_0175");
    runtime.register_function(0x08AC2A8Cu, &recomp_unit_0175, "recomp_unit_0175");
    runtime.register_function(0x08AC2A94u, &recomp_unit_0175, "recomp_unit_0175");
    runtime.register_function(0x08AC2A9Cu, &recomp_unit_0175, "recomp_unit_0175");
    runtime.register_function(0x08AC2AA0u, &recomp_unit_0175, "recomp_unit_0175");
    runtime.register_function(0x08AC2AB8u, &recomp_unit_0175, "recomp_unit_0175");
    runtime.register_function(0x08AC2ABCu, &recomp_unit_0175, "recomp_unit_0175");
    runtime.register_function(0x08AC2AD4u, &recomp_unit_0175, "recomp_unit_0175");
    runtime.register_function(0x08AC2AD8u, &recomp_unit_0175, "recomp_unit_0175");
    runtime.register_function(0x08AC2AF0u, &recomp_unit_0175, "recomp_unit_0175");
    runtime.register_function(0x08AC2AF8u, &recomp_unit_0175, "recomp_unit_0175");
    runtime.register_function(0x08AC2AFCu, &recomp_unit_0175, "recomp_unit_0175");
    runtime.register_function(0x08AC2B08u, &recomp_unit_0175, "recomp_unit_0175");
    runtime.register_function(0x08AC2B0Cu, &recomp_unit_0175, "recomp_unit_0175");
    runtime.register_function(0x08AC2B24u, &recomp_unit_0175, "recomp_unit_0175");
    runtime.register_function(0x08AC2B40u, &recomp_unit_0175, "recomp_unit_0175");
    runtime.register_function(0x08AC2B48u, &recomp_unit_0175, "recomp_unit_0175");
    runtime.register_function(0x08AC2B50u, &recomp_unit_0175, "recomp_unit_0175");
    runtime.register_function(0x08AC2B5Cu, &recomp_unit_0175, "recomp_unit_0175");
    runtime.register_function(0x08AC2B64u, &recomp_unit_0175, "recomp_unit_0175");
    runtime.register_function(0x08AC2B6Cu, &recomp_unit_0175, "recomp_unit_0175");
    runtime.register_function(0x08AC2B74u, &recomp_unit_0175, "recomp_unit_0175");
    runtime.register_function(0x08AC2B7Cu, &recomp_unit_0175, "recomp_unit_0175");
    runtime.register_function(0x08AC2B84u, &recomp_unit_0175, "recomp_unit_0175");
    runtime.register_function(0x08AC2B8Cu, &recomp_unit_0175, "recomp_unit_0175");
    runtime.register_function(0x08AC2B94u, &recomp_unit_0175, "recomp_unit_0175");
    runtime.register_function(0x08AC2B9Cu, &recomp_unit_0175, "recomp_unit_0175");
    runtime.register_function(0x08AC2BA4u, &recomp_unit_0175, "recomp_unit_0175");
    runtime.register_function(0x08AC2BACu, &recomp_unit_0175, "recomp_unit_0175");
    runtime.register_function(0x08AC2BB4u, &recomp_unit_0175, "recomp_unit_0175");
    runtime.register_function(0x08AC2BBCu, &recomp_unit_0175, "recomp_unit_0175");
    runtime.register_function(0x08AC2BC4u, &recomp_unit_0175, "recomp_unit_0175");
    runtime.register_function(0x08AC2BC8u, &recomp_unit_0175, "recomp_unit_0175");
    runtime.register_function(0x08AC2BDCu, &recomp_unit_0175, "recomp_unit_0175");
    runtime.register_function(0x08AC2BE0u, &recomp_unit_0175, "recomp_unit_0175");
    runtime.register_function(0x08AC2BF0u, &recomp_unit_0175, "recomp_unit_0175");
    runtime.register_function(0x08AC2C10u, &recomp_unit_0175, "recomp_unit_0175");
    runtime.register_function(0x08AC2C18u, &recomp_unit_0175, "recomp_unit_0175");
    runtime.register_function(0x08AC2C30u, &recomp_unit_0175, "recomp_unit_0175");
    runtime.register_function(0x08AC2C3Cu, &recomp_unit_0175, "recomp_unit_0175");
    runtime.register_function(0x08AC2C44u, &recomp_unit_0175, "recomp_unit_0175");
    runtime.register_function(0x08AC2C4Cu, &recomp_unit_0175, "recomp_unit_0175");
    runtime.register_function(0x08AC2C54u, &recomp_unit_0175, "recomp_unit_0175");
    runtime.register_function(0x08AC2C5Cu, &recomp_unit_0175, "recomp_unit_0175");
    runtime.register_function(0x08AC2C64u, &recomp_unit_0175, "recomp_unit_0175");
    runtime.register_function(0x08AC2C90u, &recomp_unit_0175, "recomp_unit_0175");
    runtime.register_function(0x08AC2CB8u, &recomp_unit_0175, "recomp_unit_0175");
    runtime.register_function(0x08AC2CD8u, &recomp_unit_0175, "recomp_unit_0175");
    runtime.register_function(0x08AC2CDCu, &recomp_unit_0175, "recomp_unit_0175");
    runtime.register_function(0x08AC2CE0u, &recomp_unit_0175, "recomp_unit_0175");
    runtime.register_function(0x08AC2CECu, &recomp_unit_0175, "recomp_unit_0175");
    runtime.register_function(0x08AC2D20u, &recomp_unit_0175, "recomp_unit_0175");
    runtime.register_function(0x08AC2D30u, &recomp_unit_0175, "recomp_unit_0175");
    runtime.register_function(0x08AC2D68u, &recomp_unit_0175, "recomp_unit_0175");
    runtime.register_function(0x08AC2D70u, &recomp_unit_0175, "recomp_unit_0175");
    runtime.register_function(0x08AC2D78u, &recomp_unit_0175, "recomp_unit_0175");
    runtime.register_function(0x08AC2D80u, &recomp_unit_0175, "recomp_unit_0175");
    runtime.register_function(0x08AC2D8Cu, &recomp_unit_0175, "recomp_unit_0175");
    runtime.register_function(0x08AC2D98u, &recomp_unit_0175, "recomp_unit_0175");
    runtime.register_function(0x08AC2DA8u, &recomp_unit_0175, "recomp_unit_0175");
    runtime.register_function(0x08AC2DB4u, &recomp_unit_0175, "recomp_unit_0175");
    runtime.register_function(0x08AC2DC0u, &recomp_unit_0175, "recomp_unit_0175");
    runtime.register_function(0x08AC2DC4u, &recomp_unit_0175, "recomp_unit_0175");
    runtime.register_function(0x08AC2DD8u, &recomp_unit_0175, "recomp_unit_0175");
    runtime.register_function(0x08AC2DE0u, &recomp_unit_0175, "recomp_unit_0175");
    runtime.register_function(0x08AC2DE8u, &recomp_unit_0175, "recomp_unit_0175");
    runtime.register_function(0x08AC2DF0u, &recomp_unit_0175, "recomp_unit_0175");
    runtime.register_function(0x08AC2DFCu, &recomp_unit_0175, "recomp_unit_0175");
    runtime.register_function(0x08AC2E08u, &recomp_unit_0175, "recomp_unit_0175");
    runtime.register_function(0x08AC2E14u, &recomp_unit_0175, "recomp_unit_0175");
    runtime.register_function(0x08AC2E20u, &recomp_unit_0175, "recomp_unit_0175");
    runtime.register_function(0x08AC2E28u, &recomp_unit_0175, "recomp_unit_0175");
    runtime.register_function(0x08AC2E30u, &recomp_unit_0175, "recomp_unit_0175");
    runtime.register_function(0x08AC2E48u, &recomp_unit_0175, "recomp_unit_0175");
    runtime.register_function(0x08AC2E60u, &recomp_unit_0175, "recomp_unit_0175");
    runtime.register_function(0x08AC2E74u, &recomp_unit_0175, "recomp_unit_0175");
    runtime.register_function(0x08AC2EC0u, &recomp_unit_0175, "recomp_unit_0175");
    runtime.register_function(0x08AC2EC8u, &recomp_unit_0175, "recomp_unit_0175");
    runtime.register_function(0x08AC2EDCu, &recomp_unit_0175, "recomp_unit_0175");
    runtime.register_function(0x08AC2EE4u, &recomp_unit_0175, "recomp_unit_0175");
    runtime.register_function(0x08AC2EF4u, &recomp_unit_0175, "recomp_unit_0175");
    runtime.register_function(0x08AC2F1Cu, &recomp_unit_0175, "recomp_unit_0175");
    runtime.register_function(0x08AC2F20u, &recomp_unit_0175, "recomp_unit_0175");
    runtime.register_function(0x08AC2F28u, &recomp_unit_0175, "recomp_unit_0175");
    runtime.register_function(0x08AC2F30u, &recomp_unit_0175, "recomp_unit_0175");
    runtime.register_function(0x08AC2F4Cu, &recomp_unit_0175, "recomp_unit_0175");
    runtime.register_function(0x08AC2F58u, &recomp_unit_0175, "recomp_unit_0175");
    runtime.register_function(0x08AC2FA0u, &recomp_unit_0175, "recomp_unit_0175");
    runtime.register_function(0x08AC2FA4u, &recomp_unit_0175, "recomp_unit_0175");
    runtime.register_function(0x08AC2FC8u, &recomp_unit_0175, "recomp_unit_0175");
    runtime.register_function(0x08AC3000u, &recomp_unit_0175, "recomp_unit_0175");
    runtime.register_function(0x08AC3008u, &recomp_unit_0175, "recomp_unit_0175");
    runtime.register_function(0x08AC3018u, &recomp_unit_0175, "recomp_unit_0175");
    runtime.register_function(0x08AC3024u, &recomp_unit_0175, "recomp_unit_0175");
    runtime.register_function(0x08AC3030u, &recomp_unit_0175, "recomp_unit_0175");
    runtime.register_function(0x08AC3038u, &recomp_unit_0175, "recomp_unit_0175");
    runtime.register_function(0x08AC3040u, &recomp_unit_0175, "recomp_unit_0175");
    runtime.register_function(0x08AC304Cu, &recomp_unit_0175, "recomp_unit_0175");
    runtime.register_function(0x08AC3054u, &recomp_unit_0175, "recomp_unit_0175");
    runtime.register_function(0x08AC3060u, &recomp_unit_0175, "recomp_unit_0175");
    runtime.register_function(0x08AC3068u, &recomp_unit_0175, "recomp_unit_0175");
    runtime.register_function(0x08AC3074u, &recomp_unit_0175, "recomp_unit_0175");
    runtime.register_function(0x08AC308Cu, &recomp_unit_0175, "recomp_unit_0175");
    runtime.register_function(0x08AC30A0u, &recomp_unit_0175, "recomp_unit_0175");
    runtime.register_function(0x08AC30B4u, &recomp_unit_0175, "recomp_unit_0175");
    runtime.register_function(0x08AC30BCu, &recomp_unit_0175, "recomp_unit_0175");
    runtime.register_function(0x08AC30C8u, &recomp_unit_0175, "recomp_unit_0175");
    runtime.register_function(0x08AC30D0u, &recomp_unit_0175, "recomp_unit_0175");
    runtime.register_function(0x08AC30E0u, &recomp_unit_0175, "recomp_unit_0175");
    runtime.register_function(0x08AC30E8u, &recomp_unit_0175, "recomp_unit_0175");
    runtime.register_function(0x08AC30F0u, &recomp_unit_0175, "recomp_unit_0175");
    runtime.register_function(0x08AC3100u, &recomp_unit_0175, "recomp_unit_0175");
    runtime.register_function(0x08AC3108u, &recomp_unit_0175, "recomp_unit_0175");
    runtime.register_function(0x08AC3110u, &recomp_unit_0175, "recomp_unit_0175");
    runtime.register_function(0x08AC3120u, &recomp_unit_0175, "recomp_unit_0175");
    runtime.register_function(0x08AC3128u, &recomp_unit_0175, "recomp_unit_0175");
    runtime.register_function(0x08AC3130u, &recomp_unit_0175, "recomp_unit_0175");
    runtime.register_function(0x08AC3140u, &recomp_unit_0175, "recomp_unit_0175");
    runtime.register_function(0x08AC3148u, &recomp_unit_0175, "recomp_unit_0175");
    runtime.register_function(0x08AC3150u, &recomp_unit_0175, "recomp_unit_0175");
    runtime.register_function(0x08AC3160u, &recomp_unit_0175, "recomp_unit_0175");
    runtime.register_function(0x08AC3168u, &recomp_unit_0175, "recomp_unit_0175");
    runtime.register_function(0x08AC3170u, &recomp_unit_0175, "recomp_unit_0175");
    runtime.register_function(0x08AC3180u, &recomp_unit_0175, "recomp_unit_0175");
    runtime.register_function(0x08AC3184u, &recomp_unit_0175, "recomp_unit_0175");
    runtime.register_function(0x08AC31A8u, &recomp_unit_0175, "recomp_unit_0175");
    runtime.register_function(0x08AC31D0u, &recomp_unit_0175, "recomp_unit_0175");
    runtime.register_function(0x08AC31E8u, &recomp_unit_0175, "recomp_unit_0175");
    runtime.register_function(0x08AC31F0u, &recomp_unit_0175, "recomp_unit_0175");
    runtime.register_function(0x08AC31FCu, &recomp_unit_0175, "recomp_unit_0175");
    runtime.register_function(0x08AC3210u, &recomp_unit_0175, "recomp_unit_0175");
    runtime.register_function(0x08AC3220u, &recomp_unit_0175, "recomp_unit_0175");
    runtime.register_function(0x08AC3238u, &recomp_unit_0175, "recomp_unit_0175");
    runtime.register_function(0x08AC3244u, &recomp_unit_0175, "recomp_unit_0175");
    runtime.register_function(0x08AC3264u, &recomp_unit_0175, "recomp_unit_0175");
    runtime.register_function(0x08AC3288u, &recomp_unit_0175, "recomp_unit_0175");
    runtime.register_function(0x08AC3294u, &recomp_unit_0175, "recomp_unit_0175");
    runtime.register_function(0x08AC329Cu, &recomp_unit_0175, "recomp_unit_0175");
    runtime.register_function(0x08AC32A4u, &recomp_unit_0175, "recomp_unit_0175");
    runtime.register_function(0x08AC32B8u, &recomp_unit_0175, "recomp_unit_0175");
    runtime.register_function(0x08AC32CCu, &recomp_unit_0175, "recomp_unit_0175");
    runtime.register_function(0x08AC32D8u, &recomp_unit_0175, "recomp_unit_0175");
    runtime.register_function(0x08AC32E0u, &recomp_unit_0175, "recomp_unit_0175");
    runtime.register_function(0x08AC32E8u, &recomp_unit_0175, "recomp_unit_0175");
    runtime.register_function(0x08AC3300u, &recomp_unit_0175, "recomp_unit_0175");
    runtime.register_function(0x08AC3310u, &recomp_unit_0175, "recomp_unit_0175");
    runtime.register_function(0x08AC333Cu, &recomp_unit_0175, "recomp_unit_0175");
    runtime.register_function(0x08AC3344u, &recomp_unit_0175, "recomp_unit_0175");
    runtime.register_function(0x08AC3350u, &recomp_unit_0175, "recomp_unit_0175");
    runtime.register_function(0x08AC3358u, &recomp_unit_0175, "recomp_unit_0175");
    runtime.register_function(0x08AC3360u, &recomp_unit_0175, "recomp_unit_0175");
    runtime.register_function(0x08AC3374u, &recomp_unit_0175, "recomp_unit_0175");
    runtime.register_function(0x08AC3378u, &recomp_unit_0175, "recomp_unit_0175");
    runtime.register_function(0x08AC3380u, &recomp_unit_0175, "recomp_unit_0175");
    runtime.register_function(0x08AC3388u, &recomp_unit_0175, "recomp_unit_0175");
    runtime.register_function(0x08AC3390u, &recomp_unit_0175, "recomp_unit_0175");
    runtime.register_function(0x08AC339Cu, &recomp_unit_0175, "recomp_unit_0175");
    runtime.register_function(0x08AC33ACu, &recomp_unit_0175, "recomp_unit_0175");
    runtime.register_function(0x08AC33D4u, &recomp_unit_0175, "recomp_unit_0175");
    runtime.register_function(0x08AC33ECu, &recomp_unit_0175, "recomp_unit_0175");
    runtime.register_function(0x08AC342Cu, &recomp_unit_0175, "recomp_unit_0175");
    runtime.register_function(0x08AC3438u, &recomp_unit_0175, "recomp_unit_0175");
    runtime.register_function(0x08AC3444u, &recomp_unit_0175, "recomp_unit_0175");
    runtime.register_function(0x08AC3458u, &recomp_unit_0175, "recomp_unit_0175");
    runtime.register_function(0x08AC3464u, &recomp_unit_0175, "recomp_unit_0175");
    runtime.register_function(0x08AC3480u, &recomp_unit_0175, "recomp_unit_0175");
    runtime.register_function(0x08AC3488u, &recomp_unit_0175, "recomp_unit_0175");
    runtime.register_function(0x08AC3490u, &recomp_unit_0175, "recomp_unit_0175");
    runtime.register_function(0x08AC3498u, &recomp_unit_0175, "recomp_unit_0175");
    runtime.register_function(0x08AC34A0u, &recomp_unit_0175, "recomp_unit_0175");
    runtime.register_function(0x08AC34A8u, &recomp_unit_0175, "recomp_unit_0175");
    runtime.register_function(0x08AC34ACu, &recomp_unit_0175, "recomp_unit_0175");
    runtime.register_function(0x08AC34B0u, &recomp_unit_0175, "recomp_unit_0175");
    runtime.register_function(0x08AC34B8u, &recomp_unit_0175, "recomp_unit_0175");
    runtime.register_function(0x08AC34C0u, &recomp_unit_0175, "recomp_unit_0175");
    runtime.register_function(0x08AC34CCu, &recomp_unit_0175, "recomp_unit_0175");
    runtime.register_function(0x08AC34D0u, &recomp_unit_0175, "recomp_unit_0175");
    runtime.register_function(0x08AC34E0u, &recomp_unit_0175, "recomp_unit_0175");
    runtime.register_function(0x08AC34E8u, &recomp_unit_0175, "recomp_unit_0175");
    runtime.register_function(0x08AC34F4u, &recomp_unit_0175, "recomp_unit_0175");
    runtime.register_function(0x08AC3504u, &recomp_unit_0175, "recomp_unit_0175");
    runtime.register_function(0x08AC3530u, &recomp_unit_0175, "recomp_unit_0175");
    runtime.register_function(0x08AC3558u, &recomp_unit_0175, "recomp_unit_0175");
    runtime.register_function(0x08AC3560u, &recomp_unit_0175, "recomp_unit_0175");
    runtime.register_function(0x08AC3568u, &recomp_unit_0175, "recomp_unit_0175");
    runtime.register_function(0x08AC3574u, &recomp_unit_0175, "recomp_unit_0175");
    runtime.register_function(0x08AC3578u, &recomp_unit_0175, "recomp_unit_0175");
    runtime.register_function(0x08AC3584u, &recomp_unit_0175, "recomp_unit_0175");
    runtime.register_function(0x08AC3590u, &recomp_unit_0175, "recomp_unit_0175");
    runtime.register_function(0x08AC3598u, &recomp_unit_0175, "recomp_unit_0175");
    runtime.register_function(0x08AC35A0u, &recomp_unit_0175, "recomp_unit_0175");
    runtime.register_function(0x08AC35BCu, &recomp_unit_0175, "recomp_unit_0175");
    runtime.register_function(0x08AC35CCu, &recomp_unit_0175, "recomp_unit_0175");
    runtime.register_function(0x08AC35D4u, &recomp_unit_0175, "recomp_unit_0175");
    runtime.register_function(0x08AC35E8u, &recomp_unit_0175, "recomp_unit_0175");
    runtime.register_function(0x08AC35ECu, &recomp_unit_0175, "recomp_unit_0175");
    runtime.register_function(0x08AC3620u, &recomp_unit_0175, "recomp_unit_0175");
    runtime.register_function(0x08AC3638u, &recomp_unit_0175, "recomp_unit_0175");
    runtime.register_function(0x08AC3640u, &recomp_unit_0175, "recomp_unit_0175");
    runtime.register_function(0x08AC366Cu, &recomp_unit_0175, "recomp_unit_0175");
    runtime.register_function(0x08AC3674u, &recomp_unit_0175, "recomp_unit_0175");
    runtime.register_function(0x08AC367Cu, &recomp_unit_0175, "recomp_unit_0175");
    runtime.register_function(0x08AC3680u, &recomp_unit_0175, "recomp_unit_0175");
    runtime.register_function(0x08AC3690u, &recomp_unit_0175, "recomp_unit_0175");
    runtime.register_function(0x08AC3698u, &recomp_unit_0175, "recomp_unit_0175");
    runtime.register_function(0x08AC36A8u, &recomp_unit_0175, "recomp_unit_0175");
    runtime.register_function(0x08AC36B4u, &recomp_unit_0175, "recomp_unit_0175");
    runtime.register_function(0x08AC36BCu, &recomp_unit_0175, "recomp_unit_0175");
    runtime.register_function(0x08AC36C8u, &recomp_unit_0175, "recomp_unit_0175");
    runtime.register_function(0x08AC36D4u, &recomp_unit_0175, "recomp_unit_0175");
    runtime.register_function(0x08AC36E0u, &recomp_unit_0175, "recomp_unit_0175");
    runtime.register_function(0x08AC36E8u, &recomp_unit_0175, "recomp_unit_0175");
    runtime.register_function(0x08AC36FCu, &recomp_unit_0175, "recomp_unit_0175");
    runtime.register_function(0x08AC3700u, &recomp_unit_0175, "recomp_unit_0175");
    runtime.register_function(0x08AC3704u, &recomp_unit_0175, "recomp_unit_0175");
    runtime.register_function(0x08AC3724u, &recomp_unit_0175, "recomp_unit_0175");
    runtime.register_function(0x08AC3730u, &recomp_unit_0175, "recomp_unit_0175");
    runtime.register_function(0x08AC3738u, &recomp_unit_0175, "recomp_unit_0175");
    runtime.register_function(0x08AC3744u, &recomp_unit_0175, "recomp_unit_0175");
    runtime.register_function(0x08AC3754u, &recomp_unit_0175, "recomp_unit_0175");
    runtime.register_function(0x08AC3764u, &recomp_unit_0175, "recomp_unit_0175");
    runtime.register_function(0x08AC376Cu, &recomp_unit_0175, "recomp_unit_0175");
    runtime.register_function(0x08AC3780u, &recomp_unit_0175, "recomp_unit_0175");
    runtime.register_function(0x08AC3784u, &recomp_unit_0175, "recomp_unit_0175");
    runtime.register_function(0x08AC3798u, &recomp_unit_0175, "recomp_unit_0175");
    runtime.register_function(0x08AC379Cu, &recomp_unit_0175, "recomp_unit_0175");
    runtime.register_function(0x08AC37BCu, &recomp_unit_0175, "recomp_unit_0175");
    runtime.register_function(0x08AC37C4u, &recomp_unit_0175, "recomp_unit_0175");
    runtime.register_function(0x08AC37CCu, &recomp_unit_0175, "recomp_unit_0175");
    runtime.register_function(0x08AC37D8u, &recomp_unit_0175, "recomp_unit_0175");
    runtime.register_function(0x08AC37E4u, &recomp_unit_0175, "recomp_unit_0175");
    runtime.register_function(0x08AC380Cu, &recomp_unit_0175, "recomp_unit_0175");
    runtime.register_function(0x08AC3824u, &recomp_unit_0175, "recomp_unit_0175");
    runtime.register_function(0x08AC3840u, &recomp_unit_0175, "recomp_unit_0175");
    runtime.register_function(0x08AC3848u, &recomp_unit_0175, "recomp_unit_0175");
    runtime.register_function(0x08AC3858u, &recomp_unit_0175, "recomp_unit_0175");
    runtime.register_function(0x08AC3878u, &recomp_unit_0175, "recomp_unit_0175");
    runtime.register_function(0x08AC38C8u, &recomp_unit_0175, "recomp_unit_0175");
    runtime.register_function(0x08AC3938u, &recomp_unit_0175, "recomp_unit_0175");
    runtime.register_function(0x08AC394Cu, &recomp_unit_0175, "recomp_unit_0175");
    runtime.register_function(0x08AC3954u, &recomp_unit_0175, "recomp_unit_0175");
    runtime.register_function(0x08AC3974u, &recomp_unit_0175, "recomp_unit_0175");
    runtime.register_function(0x08AC3984u, &recomp_unit_0175, "recomp_unit_0175");
    runtime.register_function(0x08AC39ACu, &recomp_unit_0175, "recomp_unit_0175");
    runtime.register_function(0x08AC39B8u, &recomp_unit_0175, "recomp_unit_0175");
    runtime.register_function(0x08AC39C0u, &recomp_unit_0175, "recomp_unit_0175");
    runtime.register_function(0x08AC39D0u, &recomp_unit_0175, "recomp_unit_0175");
    runtime.register_function(0x08AC39D8u, &recomp_unit_0175, "recomp_unit_0175");
    runtime.register_function(0x08AC39E4u, &recomp_unit_0175, "recomp_unit_0175");
    runtime.register_function(0x08AC39F0u, &recomp_unit_0175, "recomp_unit_0175");
    runtime.register_function(0x08AC39FCu, &recomp_unit_0175, "recomp_unit_0175");
    runtime.register_function(0x08AC3A08u, &recomp_unit_0175, "recomp_unit_0175");
    runtime.register_function(0x08AC3A20u, &recomp_unit_0175, "recomp_unit_0175");
    runtime.register_function(0x08AC3A28u, &recomp_unit_0175, "recomp_unit_0175");
    runtime.register_function(0x08AC3A40u, &recomp_unit_0175, "recomp_unit_0175");
    runtime.register_function(0x08AC3A48u, &recomp_unit_0175, "recomp_unit_0175");
    runtime.register_function(0x08AC3A50u, &recomp_unit_0175, "recomp_unit_0175");
    runtime.register_function(0x08AC3A58u, &recomp_unit_0175, "recomp_unit_0175");
    runtime.register_function(0x08AC3A64u, &recomp_unit_0175, "recomp_unit_0175");
    runtime.register_function(0x08AC3A74u, &recomp_unit_0175, "recomp_unit_0175");
    runtime.register_function(0x08AC3A84u, &recomp_unit_0175, "recomp_unit_0175");
    runtime.register_function(0x08AC3A9Cu, &recomp_unit_0175, "recomp_unit_0175");
    runtime.register_function(0x08AC3AACu, &recomp_unit_0175, "recomp_unit_0175");
    runtime.register_function(0x08AC3AC0u, &recomp_unit_0175, "recomp_unit_0175");
    runtime.register_function(0x08AC3ACCu, &recomp_unit_0175, "recomp_unit_0175");
    runtime.register_function(0x08AC3B38u, &recomp_unit_0175, "recomp_unit_0175");
    runtime.register_function(0x08AC3B40u, &recomp_unit_0175, "recomp_unit_0175");
    runtime.register_function(0x08AC3B5Cu, &recomp_unit_0175, "recomp_unit_0175");
    runtime.register_function(0x08AC3B64u, &recomp_unit_0175, "recomp_unit_0175");
    runtime.register_function(0x08AC3B6Cu, &recomp_unit_0175, "recomp_unit_0175");
    runtime.register_function(0x08AC3B74u, &recomp_unit_0175, "recomp_unit_0175");
    runtime.register_function(0x08AC3B7Cu, &recomp_unit_0175, "recomp_unit_0175");
    runtime.register_function(0x08AC3B84u, &recomp_unit_0175, "recomp_unit_0175");
    runtime.register_function(0x08AC3B8Cu, &recomp_unit_0175, "recomp_unit_0175");
    runtime.register_function(0x08AC3B94u, &recomp_unit_0175, "recomp_unit_0175");
    runtime.register_function(0x08AC3B9Cu, &recomp_unit_0175, "recomp_unit_0175");
    runtime.register_function(0x08AC3BA8u, &recomp_unit_0175, "recomp_unit_0175");
    runtime.register_function(0x08AC3BB8u, &recomp_unit_0175, "recomp_unit_0175");
    runtime.register_function(0x08AC3BD4u, &recomp_unit_0175, "recomp_unit_0175");
    runtime.register_function(0x08AC3BECu, &recomp_unit_0175, "recomp_unit_0175");
    runtime.register_function(0x08AC3C00u, &recomp_unit_0175, "recomp_unit_0175");
    runtime.register_function(0x08AC3C18u, &recomp_unit_0175, "recomp_unit_0175");
    runtime.register_function(0x08AC3C24u, &recomp_unit_0175, "recomp_unit_0175");
    runtime.register_function(0x08AC3C2Cu, &recomp_unit_0175, "recomp_unit_0175");
    runtime.register_function(0x08AC3C34u, &recomp_unit_0175, "recomp_unit_0175");
    runtime.register_function(0x08AC3C3Cu, &recomp_unit_0175, "recomp_unit_0175");
    runtime.register_function(0x08AC3C44u, &recomp_unit_0175, "recomp_unit_0175");
    runtime.register_function(0x08AC3C4Cu, &recomp_unit_0175, "recomp_unit_0175");
    runtime.register_function(0x08AC3C70u, &recomp_unit_0175, "recomp_unit_0175");
    runtime.register_function(0x08AC3C74u, &recomp_unit_0175, "recomp_unit_0175");
    runtime.register_function(0x08AC3C80u, &recomp_unit_0175, "recomp_unit_0175");
    runtime.register_function(0x08AC3CB4u, &recomp_unit_0175, "recomp_unit_0175");
    runtime.register_function(0x08AC3CC4u, &recomp_unit_0175, "recomp_unit_0175");
    runtime.register_function(0x08AC3CF4u, &recomp_unit_0175, "recomp_unit_0175");
    runtime.register_function(0x08AC3CFCu, &recomp_unit_0175, "recomp_unit_0175");
    runtime.register_function(0x08AC3D04u, &recomp_unit_0175, "recomp_unit_0175");
    runtime.register_function(0x08AC3D0Cu, &recomp_unit_0175, "recomp_unit_0175");
    runtime.register_function(0x08AC3D18u, &recomp_unit_0175, "recomp_unit_0175");
    runtime.register_function(0x08AC3D24u, &recomp_unit_0175, "recomp_unit_0175");
    runtime.register_function(0x08AC3D34u, &recomp_unit_0175, "recomp_unit_0175");
    runtime.register_function(0x08AC3D40u, &recomp_unit_0175, "recomp_unit_0175");
    runtime.register_function(0x08AC3D4Cu, &recomp_unit_0175, "recomp_unit_0175");
    runtime.register_function(0x08AC3D50u, &recomp_unit_0175, "recomp_unit_0175");
    runtime.register_function(0x08AC3D64u, &recomp_unit_0175, "recomp_unit_0175");
    runtime.register_function(0x08AC3D6Cu, &recomp_unit_0175, "recomp_unit_0175");
    runtime.register_function(0x08AC3D74u, &recomp_unit_0175, "recomp_unit_0175");
    runtime.register_function(0x08AC3D7Cu, &recomp_unit_0175, "recomp_unit_0175");
    runtime.register_function(0x08AC3D88u, &recomp_unit_0175, "recomp_unit_0175");
    runtime.register_function(0x08AC3D90u, &recomp_unit_0175, "recomp_unit_0175");
    runtime.register_function(0x08AC3DA4u, &recomp_unit_0175, "recomp_unit_0175");
    runtime.register_function(0x08AC3DACu, &recomp_unit_0175, "recomp_unit_0175");
    runtime.register_function(0x08AC3DB8u, &recomp_unit_0175, "recomp_unit_0175");
    runtime.register_function(0x08AC3DC4u, &recomp_unit_0175, "recomp_unit_0175");
    runtime.register_function(0x08AC3DD0u, &recomp_unit_0175, "recomp_unit_0175");
    runtime.register_function(0x08AC3DE8u, &recomp_unit_0175, "recomp_unit_0175");
    runtime.register_function(0x08AC3DECu, &recomp_unit_0175, "recomp_unit_0175");
    runtime.register_function(0x08AC3DF8u, &recomp_unit_0175, "recomp_unit_0175");
    runtime.register_function(0x08AC3E00u, &recomp_unit_0175, "recomp_unit_0175");
    runtime.register_function(0x08AC3E10u, &recomp_unit_0175, "recomp_unit_0175");
    runtime.register_function(0x08AC3E34u, &recomp_unit_0175, "recomp_unit_0175");
    runtime.register_function(0x08AC3E38u, &recomp_unit_0175, "recomp_unit_0175");
    runtime.register_function(0x08AC3E58u, &recomp_unit_0175, "recomp_unit_0175");
    runtime.register_function(0x08AC3E84u, &recomp_unit_0175, "recomp_unit_0175");
    runtime.register_function(0x08AC3E8Cu, &recomp_unit_0175, "recomp_unit_0175");
    runtime.register_function(0x08AC3EA4u, &recomp_unit_0175, "recomp_unit_0175");
    runtime.register_function(0x08AC3EACu, &recomp_unit_0175, "recomp_unit_0175");
    runtime.register_function(0x08AC3EBCu, &recomp_unit_0175, "recomp_unit_0175");
    runtime.register_function(0x08AC3EC0u, &recomp_unit_0175, "recomp_unit_0175");
    runtime.register_function(0x08AC3ED8u, &recomp_unit_0175, "recomp_unit_0175");
    runtime.register_function(0x08AC3EF8u, &recomp_unit_0175, "recomp_unit_0175");
    runtime.register_function(0x08AC3F00u, &recomp_unit_0175, "recomp_unit_0175");
    runtime.register_function(0x08AC3F08u, &recomp_unit_0175, "recomp_unit_0175");
    runtime.register_function(0x08AC3F14u, &recomp_unit_0175, "recomp_unit_0175");
    runtime.register_function(0x08AC3F1Cu, &recomp_unit_0175, "recomp_unit_0175");
    runtime.register_function(0x08AC3F24u, &recomp_unit_0175, "recomp_unit_0175");
    runtime.register_function(0x08AC3F3Cu, &recomp_unit_0175, "recomp_unit_0175");
    runtime.register_function(0x08AC3F40u, &recomp_unit_0175, "recomp_unit_0175");
    runtime.register_function(0x08AC3F54u, &recomp_unit_0175, "recomp_unit_0175");
    runtime.register_function(0x08AC3F64u, &recomp_unit_0175, "recomp_unit_0175");
    runtime.register_function(0x08AC3F80u, &recomp_unit_0175, "recomp_unit_0175");
    runtime.register_function(0x08AC3F9Cu, &recomp_unit_0175, "recomp_unit_0175");
    runtime.register_function(0x08AC3FA8u, &recomp_unit_0175, "recomp_unit_0175");
    runtime.register_function(0x08AC3FB4u, &recomp_unit_0175, "recomp_unit_0175");
    runtime.register_function(0x08AC3FC0u, &recomp_unit_0175, "recomp_unit_0175");
    runtime.register_function(0x08AC3FC8u, &recomp_unit_0175, "recomp_unit_0175");
    runtime.register_function(0x08AC3FCCu, &recomp_unit_0175, "recomp_unit_0175");
    runtime.register_function(0x08AC3FE0u, &recomp_unit_0175, "recomp_unit_0175");
    runtime.register_function(0x08AC3FE8u, &recomp_unit_0175, "recomp_unit_0175");
}
} // namespace psprecomp
