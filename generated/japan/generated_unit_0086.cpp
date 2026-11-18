#include "psprecomp/runtime.hpp"
#include "generated_units.hpp"
#include <bit>
#include <cmath>
#include <cstdint>
#include <limits>

namespace psprecomp {
static const std::uint16_t kEntryIds_recomp_unit_0086[4084] = {
    1, 0, 2, 0, 3, 0, 0, 0, 0, 4, 0, 0, 5, 0, 6, 0, 0, 7, 0, 0, 0, 8, 0, 0, 9, 0, 10, 0, 0, 11, 0, 0,
    0, 0, 0, 12, 0, 0, 0, 0, 13, 0, 14, 0, 15, 0, 0, 0, 0, 16, 0, 0, 0, 0, 0, 17, 18, 0, 0, 19, 0, 0, 20, 21,
    0, 0, 22, 0, 23, 0, 0, 0, 0, 0, 0, 0, 24, 0, 0, 0, 0, 0, 0, 0, 0, 25, 0, 0, 0, 26, 0, 0, 0, 27, 0, 0,
    0, 28, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 29, 0, 0, 0, 30, 0, 31, 0, 0, 32, 0, 0, 0, 33, 34, 0, 0, 0, 35, 0,
    0, 0, 0, 0, 36, 37, 0, 38, 0, 0, 0, 0, 0, 39, 0, 0, 40, 0, 0, 0, 0, 0, 0, 0, 0, 41, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 42, 0, 0, 0, 43, 0, 0, 0, 0, 0, 0, 44, 0, 0, 45, 0, 46, 0, 0, 47, 0, 48, 0, 0, 0, 0, 49,
    0, 0, 0, 0, 50, 0, 0, 51, 0, 52, 0, 53, 0, 0, 0, 54, 0, 55, 0, 0, 56, 57, 0, 0, 0, 58, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 59, 0, 60, 0, 0, 61, 0, 62, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 63, 0, 0, 0, 0, 64, 0, 0, 0, 65,
    0, 0, 0, 66, 0, 67, 0, 0, 68, 0, 0, 0, 69, 0, 0, 0, 0, 0, 0, 0, 0, 70, 0, 0, 0, 0, 71, 0, 0, 0, 0, 0,
    72, 0, 0, 0, 0, 0, 73, 74, 0, 75, 0, 0, 76, 77, 0, 0, 78, 0, 79, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    80, 0, 0, 81, 0, 0, 0, 0, 0, 0, 82, 0, 0, 83, 0, 84, 0, 0, 85, 0, 86, 0, 0, 0, 0, 87, 0, 0, 0, 0, 88, 0,
    0, 89, 0, 90, 0, 91, 0, 0, 0, 92, 0, 93, 0, 0, 94, 0, 0, 95, 0, 96, 0, 0, 0, 97, 0, 0, 98, 0, 0, 99, 0, 0,
    0, 0, 0, 0, 0, 100, 0, 0, 0, 0, 0, 0, 0, 0, 0, 101, 0, 0, 0, 0, 0, 0, 102, 0, 103, 0, 0, 0, 0, 0, 0, 0,
    104, 0, 0, 0, 0, 0, 105, 106, 0, 107, 0, 0, 0, 0, 0, 108, 0, 0, 109, 0, 0, 0, 110, 0, 0, 0, 0, 0, 0, 0, 111, 112,
    0, 0, 0, 0, 0, 113, 0, 0, 0, 0, 0, 0, 0, 0, 0, 114, 0, 0, 0, 115, 0, 0, 0, 0, 116, 0, 0, 0, 0, 0, 0, 117,
    0, 0, 118, 0, 119, 0, 120, 0, 0, 121, 0, 0, 122, 0, 0, 0, 123, 0, 0, 124, 0, 125, 0, 126, 0, 0, 0, 127, 0, 128, 0, 0,
    0, 0, 0, 0, 0, 129, 0, 0, 130, 0, 0, 131, 0, 0, 0, 0, 0, 0, 0, 0, 0, 132, 0, 0, 133, 0, 0, 0, 0, 0, 134, 0,
    0, 0, 0, 135, 0, 0, 0, 0, 0, 0, 0, 136, 0, 0, 137, 0, 0, 0, 138, 0, 0, 0, 139, 0, 0, 0, 140, 0, 0, 141, 0, 0,
    142, 0, 0, 143, 0, 0, 0, 144, 0, 0, 0, 145, 0, 0, 0, 146, 0, 0, 0, 0, 147, 0, 0, 0, 0, 148, 0, 0, 0, 149, 0, 0,
    0, 0, 0, 150, 0, 151, 0, 0, 152, 0, 0, 153, 154, 0, 155, 0, 0, 156, 0, 157, 0, 0, 0, 0, 0, 0, 0, 0, 0, 158, 0, 0,
    159, 0, 0, 160, 0, 0, 0, 161, 0, 0, 0, 0, 0, 162, 0, 0, 163, 0, 0, 164, 0, 0, 165, 0, 0, 166, 0, 0, 167, 0, 0, 0,
    168, 0, 0, 169, 0, 0, 170, 0, 0, 171, 172, 0, 0, 173, 174, 0, 0, 0, 0, 175, 0, 176, 0, 0, 0, 0, 177, 0, 0, 178, 0, 0,
    179, 0, 0, 180, 0, 0, 181, 182, 0, 183, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 184, 0, 0, 0, 0, 0, 0, 0, 185, 0, 0, 0,
    0, 186, 0, 0, 187, 0, 0, 0, 0, 0, 188, 0, 0, 189, 0, 0, 190, 0, 0, 0, 0, 0, 0, 0, 0, 191, 0, 0, 0, 0, 0, 0,
    0, 0, 192, 0, 0, 0, 0, 0, 0, 0, 193, 0, 0, 194, 0, 195, 0, 0, 0, 196, 0, 0, 0, 0, 0, 197, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 198, 0, 0, 199, 0, 0, 0, 200, 0, 0, 0, 201, 0, 0, 0, 0, 0, 0, 0, 202, 0, 203, 0, 0, 0, 0,
    0, 204, 0, 205, 0, 0, 206, 0, 0, 0, 207, 208, 0, 0, 0, 209, 0, 0, 210, 0, 0, 0, 0, 0, 211, 0, 0, 0, 212, 0, 213, 0,
    0, 0, 0, 214, 0, 0, 215, 0, 216, 0, 0, 217, 218, 0, 0, 0, 0, 0, 0, 0, 0, 0, 219, 0, 0, 0, 0, 0, 220, 0, 221, 0,
    0, 222, 0, 0, 0, 223, 0, 0, 224, 0, 0, 225, 226, 0, 0, 227, 228, 0, 229, 0, 0, 0, 230, 0, 0, 231, 232, 0, 233, 0, 234, 0,
    235, 0, 0, 0, 0, 0, 0, 236, 0, 0, 237, 0, 0, 0, 238, 239, 0, 240, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    241, 0, 242, 0, 243, 0, 0, 0, 0, 244, 0, 0, 0, 0, 0, 0, 0, 245, 0, 0, 246, 0, 247, 0, 0, 248, 0, 0, 249, 0, 0, 0,
    250, 251, 0, 0, 0, 252, 0, 0, 0, 0, 0, 253, 0, 0, 254, 255, 0, 0, 0, 0, 0, 0, 0, 0, 256, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 257, 0, 258, 0, 0, 259, 0, 0, 260, 0, 0, 261, 0, 0, 0, 262, 0, 0, 263, 0, 0, 0, 264, 0, 0, 265, 0, 0, 0, 266,
    0, 0, 0, 0, 267, 0, 0, 0, 268, 0, 0, 0, 0, 0, 269, 0, 0, 0, 0, 0, 270, 0, 0, 271, 0, 0, 0, 0, 0, 0, 272, 0,
    0, 0, 0, 0, 0, 273, 0, 274, 0, 0, 275, 0, 276, 0, 0, 277, 0, 278, 0, 0, 279, 0, 0, 0, 280, 0, 0, 0, 0, 0, 0, 0,
    281, 0, 0, 282, 0, 0, 0, 0, 283, 0, 0, 0, 284, 0, 0, 0, 0, 0, 0, 0, 0, 0, 285, 0, 0, 286, 0, 0, 0, 287, 0, 0,
    288, 0, 289, 0, 0, 290, 0, 291, 0, 0, 0, 0, 292, 293, 0, 0, 0, 0, 0, 0, 294, 0, 0, 295, 0, 0, 0, 0, 296, 0, 0, 0,
    297, 0, 298, 0, 299, 0, 0, 0, 300, 0, 0, 0, 0, 301, 0, 0, 0, 302, 0, 303, 0, 304, 0, 0, 0, 305, 0, 0, 0, 0, 0, 0,
    0, 0, 306, 0, 0, 0, 0, 307, 0, 0, 0, 0, 308, 0, 309, 0, 310, 0, 0, 0, 0, 0, 311, 0, 0, 0, 0, 0, 312, 0, 0, 0,
    313, 0, 0, 0, 314, 0, 0, 315, 0, 0, 316, 0, 0, 0, 0, 317, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 318, 0, 0,
    0, 0, 319, 0, 320, 0, 321, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 322, 0, 0, 323, 0, 0, 0, 0, 0, 324, 0, 0, 0, 0, 325,
    0, 0, 0, 326, 0, 0, 327, 0, 0, 0, 328, 0, 0, 0, 329, 0, 0, 330, 0, 0, 0, 0, 331, 0, 0, 0, 0, 332, 0, 333, 0, 334,
    0, 0, 0, 0, 0, 335, 0, 0, 0, 336, 0, 0, 337, 0, 0, 338, 0, 0, 0, 0, 339, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 340, 0, 0, 0, 0, 0, 341, 0, 0, 0, 0, 0, 0, 342, 0, 0, 0, 343, 0, 344, 0, 0, 0, 0, 345, 0,
    346, 347, 0, 0, 0, 348, 0, 0, 0, 349, 0, 350, 0, 0, 0, 0, 351, 0, 352, 353, 0, 0, 354, 0, 355, 356, 0, 0, 0, 357, 358, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 359, 0, 0, 0, 0, 0, 0, 0, 0, 0, 360, 0, 0, 0, 361, 0, 0, 0, 0, 0, 0, 362, 0,
    0, 0, 0, 0, 0, 363, 0, 0, 0, 364, 0, 0, 365, 0, 0, 366, 0, 0, 367, 0, 0, 368, 0, 0, 0, 369, 370, 0, 0, 0, 371, 0,
    0, 372, 0, 0, 373, 0, 0, 0, 0, 0, 0, 374, 375, 0, 376, 0, 377, 0, 0, 0, 0, 0, 0, 378, 0, 379, 0, 0, 0, 0, 0, 0,
    380, 0, 0, 0, 381, 0, 0, 382, 0, 0, 383, 0, 0, 384, 0, 0, 385, 386, 0, 387, 388, 0, 0, 0, 0, 0, 389, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 390, 0, 0, 0, 0, 0, 391, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    392, 393, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 394, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 395, 0,
    0, 396, 0, 397, 0, 0, 0, 0, 0, 0, 0, 0, 398, 0, 0, 0, 0, 0, 0, 0, 0, 399, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 400, 0, 401, 0, 402, 0, 0, 403, 0, 0, 404, 405, 0, 406, 0, 0, 407, 0, 0, 0, 408, 409, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 410, 0, 0, 0, 0, 411, 0, 0, 412, 0, 0, 0, 0, 413, 0, 0, 0, 0, 0, 0, 0, 414, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 415, 0, 0, 416, 0, 0, 417, 0, 0, 0, 0, 0, 0, 0, 418, 419, 0, 420, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 421, 0, 422, 0, 423, 0, 0, 0, 0, 424, 0, 0, 0, 0, 0, 0, 0, 425, 0, 0, 426, 0,
    427, 0, 0, 428, 0, 0, 429, 0, 0, 0, 430, 431, 0, 0, 0, 432, 0, 0, 0, 0, 0, 433, 0, 0, 434, 435, 0, 0, 0, 0, 0, 0,
    0, 0, 436, 0, 0, 0, 0, 0, 0, 0, 0, 0, 437, 0, 0, 0, 0, 438, 0, 0, 0, 439, 0, 0, 440, 0, 0, 0, 441, 0, 0, 442,
    0, 0, 0, 443, 0, 0, 0, 0, 0, 444, 0, 0, 0, 0, 0, 445, 0, 0, 446, 0, 0, 447, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 448, 0, 0, 0, 0, 449, 0, 450, 0, 0, 0, 0, 0, 451, 0, 452, 0, 0, 0, 0, 453, 0, 0, 0, 0, 454, 0, 455, 0,
    0, 0, 0, 0, 456, 0, 457, 458, 0, 0, 459, 0, 0, 0, 0, 0, 0, 0, 460, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 461, 0,
    0, 462, 0, 0, 463, 0, 0, 464, 0, 0, 0, 0, 465, 0, 0, 466, 0, 467, 0, 0, 468, 0, 469, 0, 0, 470, 0, 0, 0, 0, 0, 0,
    0, 0, 471, 0, 0, 0, 0, 0, 0, 472, 0, 0, 0, 0, 0, 0, 0, 473, 0, 0, 474, 0, 0, 0, 0, 0, 475, 476, 0, 0, 0, 477,
    0, 0, 0, 0, 0, 0, 478, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 479, 0, 480, 0, 481, 0, 0, 482, 0, 0, 0,
    483, 0, 0, 484, 0, 0, 485, 0, 0, 0, 0, 0, 486, 0, 487, 0, 0, 488, 0, 489, 0, 0, 490, 0, 0, 491, 0, 0, 0, 0, 0, 0,
    492, 0, 0, 493, 494, 0, 0, 495, 0, 496, 0, 0, 497, 0, 498, 0, 0, 0, 0, 0, 499, 0, 500, 0, 0, 501, 0, 502, 0, 0, 503, 0,
    0, 504, 505, 0, 0, 506, 0, 0, 0, 0, 0, 0, 0, 0, 0, 507, 0, 508, 0, 0, 0, 0, 0, 0, 0, 509, 0, 510, 0, 0, 0, 0,
    511, 0, 512, 0, 0, 513, 0, 0, 514, 0, 0, 515, 0, 0, 516, 0, 0, 517, 0, 0, 0, 0, 518, 0, 0, 0, 519, 0, 0, 0, 520, 0,
    0, 521, 0, 0, 0, 0, 0, 522, 0, 523, 0, 524, 0, 525, 0, 0, 0, 526, 0, 0, 0, 0, 527, 0, 528, 0, 529, 0, 0, 0, 0, 530,
    0, 0, 0, 0, 531, 0, 0, 532, 0, 0, 533, 0, 0, 0, 0, 0, 0, 534, 0, 0, 535, 536, 0, 0, 0, 537, 0, 0, 0, 0, 0, 0,
    0, 538, 0, 0, 0, 0, 0, 0, 0, 0, 539, 0, 0, 540, 0, 0, 0, 0, 541, 0, 0, 542, 543, 0, 0, 0, 0, 0, 544, 0, 0, 0,
    0, 0, 545, 0, 0, 546, 0, 0, 547, 548, 0, 0, 0, 0, 549, 0, 0, 0, 0, 0, 0, 0, 0, 0, 550, 0, 0, 0, 0, 0, 0, 551,
    0, 0, 0, 0, 0, 0, 552, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 553, 0, 0,
    0, 0, 554, 0, 0, 0, 0, 0, 0, 555, 0, 0, 0, 0, 556, 0, 0, 0, 0, 557, 0, 0, 0, 0, 558, 0, 0, 0, 0, 0, 0, 0,
    559, 0, 0, 0, 0, 560, 0, 561, 0, 0, 0, 0, 562, 0, 563, 0, 0, 0, 0, 0, 0, 564, 0, 0, 565, 0, 566, 0, 0, 0, 0, 567,
    0, 0, 568, 0, 0, 569, 0, 0, 0, 570, 0, 0, 0, 0, 571, 0, 0, 0, 572, 0, 573, 0, 0, 0, 0, 0, 0, 0, 574, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 575, 0, 0, 0, 0, 0, 0, 576, 0, 577, 0, 0, 0,
    578, 0, 0, 0, 0, 579, 0, 0, 0, 0, 0, 580, 0, 0, 0, 0, 0, 0, 581, 0, 0, 0, 582, 0, 0, 0, 583, 0, 0, 584, 0, 0,
    585, 0, 0, 0, 586, 0, 0, 587, 0, 0, 588, 0, 0, 0, 0, 0, 0, 0, 589, 0, 0, 0, 0, 0, 0, 590, 0, 0, 591, 0, 592, 0,
    0, 0, 593, 0, 0, 0, 0, 0, 0, 0, 0, 594, 0, 0, 0, 0, 0, 0, 0, 595, 0, 0, 0, 0, 0, 0, 596, 0, 0, 597, 0, 0,
    0, 0, 0, 0, 0, 0, 598, 0, 599, 0, 0, 0, 0, 0, 0, 600, 0, 0, 0, 0, 0, 0, 0, 0, 0, 601, 0, 0, 0, 0, 0, 0,
    0, 602, 0, 0, 603, 0, 0, 604, 0, 0, 605, 0, 0, 0, 0, 0, 606, 0, 0, 0, 607, 0, 608, 0, 609, 0, 0, 610, 0, 0, 0, 611,
    0, 0, 612, 0, 613, 0, 0, 614, 0, 615, 0, 0, 0, 0, 616, 0, 0, 0, 0, 0, 0, 617, 0, 0, 0, 0, 0, 0, 618, 0, 0, 619,
    0, 620, 0, 621, 0, 0, 622, 0, 0, 623, 0, 0, 0, 624, 0, 0, 625, 0, 626, 0, 627, 0, 0, 0, 628, 0, 0, 0, 0, 0, 629, 0,
    0, 0, 0, 0, 630, 631, 0, 632, 0, 0, 0, 0, 0, 633, 0, 0, 634, 0, 0, 635, 0, 0, 0, 0, 0, 0, 0, 636, 0, 0, 0, 0,
    0, 637, 638, 0, 639, 0, 0, 640, 0, 0, 0, 0, 641, 0, 0, 0, 0, 0, 0, 0, 642, 0, 0, 0, 0, 643, 0, 0, 0, 0, 0, 644,
    645, 0, 646, 0, 0, 0, 0, 0, 647, 0, 0, 648, 649, 0, 0, 0, 0, 650, 0, 0, 0, 651, 0, 0, 652, 0, 653, 0, 0, 654, 0, 655,
    0, 0, 0, 0, 0, 0, 0, 0, 656, 0, 0, 0, 0, 0, 0, 0, 657, 0, 0, 0, 658, 0, 0, 659, 0, 0, 0, 660, 0, 0, 661, 0,
    662, 0, 0, 663, 0, 664, 0, 0, 0, 0, 0, 665, 0, 0, 0, 0, 0, 666, 0, 0, 0, 667, 0, 0, 0, 0, 0, 668, 669, 0, 670, 0,
    0, 0, 0, 0, 671, 0, 0, 672, 0, 0, 0, 0, 0, 673, 0, 0, 0, 0, 0, 0, 0, 674, 0, 0, 0, 675, 0, 0, 676, 0, 0, 0,
    677, 0, 0, 678, 0, 679, 0, 0, 680, 0, 681, 0, 0, 0, 0, 0, 682, 0, 0, 0, 0, 0, 683, 0, 0, 0, 684, 0, 0, 0, 0, 0,
    685, 686, 0, 687, 0, 0, 0, 0, 0, 688, 0, 0, 689, 0, 0, 0, 0, 0, 690, 0, 0, 0, 0, 0, 0, 0, 0, 0, 691, 0, 0, 692,
    0, 0, 693, 0, 0, 0, 0, 0, 0, 694, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 695, 0, 0, 0,
    696, 0, 697, 0, 698, 0, 0, 699, 0, 0, 0, 700, 0, 0, 701, 0, 702, 0, 0, 703, 0, 704, 0, 0, 0, 0, 705, 0, 0, 0, 0, 0,
    0, 706, 0, 0, 0, 0, 0, 0, 707, 0, 0, 708, 0, 709, 0, 710, 0, 0, 711, 0, 0, 712, 0, 0, 0, 713, 0, 0, 714, 0, 715, 0,
    716, 0, 0, 0, 717, 0, 0, 0, 0, 0, 718, 0, 0, 0, 0, 0, 719, 720, 0, 721, 0, 0, 0, 0, 0, 722, 0, 0, 723, 0, 0, 724,
    0, 725, 0, 0, 0, 0, 0, 0, 726, 0, 0, 0, 0, 0, 0, 0, 0, 0, 727, 0, 0, 0, 0, 0, 0, 0, 0, 728, 0, 0, 0, 0,
    0, 0, 729, 0, 0, 730, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 731, 0, 0, 0, 0, 0, 0, 732, 0, 0, 733, 0, 0, 0, 0, 734,
    735, 0, 0, 0, 0, 0, 0, 736, 0, 0, 0, 0, 0, 0, 0, 0, 0, 737, 0, 0, 738, 0, 0, 739, 0, 0, 0, 740, 0, 0, 741, 0,
    742, 0, 0, 743, 0, 744, 0, 0, 0, 0, 745, 746, 0, 0, 0, 0, 0, 747, 0, 0, 748, 0, 0, 0, 0, 0, 0, 0, 749, 0, 0, 0,
    750, 0, 0, 751, 0, 0, 0, 0, 0, 0, 0, 0, 0, 752, 0, 0, 0, 0, 0, 0, 0, 0, 753, 0, 0, 0, 0, 0, 0, 754, 0, 0,
    0, 0, 755, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 756, 0, 0, 757, 0, 0, 758, 0, 759, 760, 0, 0, 0, 0, 761, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 762, 0, 0, 763, 0, 0, 764, 0, 0, 0, 765, 0, 0, 766, 0, 767, 0, 0, 768, 0, 769, 0, 0, 0, 0, 770, 771,
    0, 0, 0, 0, 0, 772, 0, 0, 773, 0, 0, 0, 0, 0, 774, 0, 0, 0, 0, 775, 0, 0, 776, 0, 0, 0, 0, 0, 777, 0, 0, 0,
    0, 0, 778, 0, 0, 0, 0, 0, 0, 0, 0, 779, 0, 0, 0, 0, 0, 780, 0, 0, 0, 0, 0, 0, 0, 0, 781, 0, 0, 0, 782, 0,
    0, 0, 783, 0, 0, 0, 0, 0, 0, 0, 784, 0, 0, 0, 785, 0, 0, 786, 0, 0, 0, 0, 0, 0, 0, 0, 0, 787, 0, 0, 0, 0,
    0, 0, 0, 0, 788, 0, 0, 0, 0, 0, 0, 789, 0, 0, 0, 0, 790, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 791, 0, 0, 792, 0,
    0, 793, 0, 794, 795, 0, 0, 0, 0, 796, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 797, 0, 0, 798, 0, 0, 799, 0, 0, 0, 800,
    0, 0, 801, 0, 802, 0, 0, 803, 0, 804, 0, 0, 0, 0, 805, 806, 0, 0, 0, 0, 0, 807, 0, 0, 808, 0, 0, 0, 0, 0, 809, 0,
    0, 0, 0, 810, 0, 0, 811, 0, 0, 0, 0, 0, 812, 0, 0, 0, 0, 0, 813, 0, 0, 0, 0, 0, 0, 0, 0, 814, 0, 0, 0, 0,
    0, 815, 0, 0, 0, 0, 0, 0, 0, 0, 816, 0, 0, 0, 817, 0, 0, 0, 818, 0, 0, 0, 0, 0, 0, 0, 0, 819, 0, 0, 0, 820,
    0, 0, 821, 0, 0, 0, 0, 0, 0, 0, 0, 0, 822, 0, 0, 0, 0, 0, 0, 0, 0, 823, 0, 0, 0, 0, 0, 0, 824, 0, 0, 0,
    0, 825, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 826, 0, 0, 827, 0, 0, 828, 0, 829, 830, 0, 0, 0, 0, 831, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 832, 0, 0, 833, 0, 0, 834, 0, 0, 0, 835, 0, 0, 836, 0, 837, 0, 0, 838, 0, 839, 0, 0, 0, 0, 840, 841, 0,
    0, 0, 0, 0, 842, 0, 0, 843, 0, 0, 0, 0, 0, 0, 0, 844, 0, 0, 0, 845, 0, 0, 0, 0, 0, 846, 0, 0, 0, 0, 847, 0,
    0, 848, 0, 0, 0, 0, 0, 849, 0, 0, 0, 0, 0, 850, 0, 0, 0, 0, 0, 0, 0, 0, 851, 0, 0, 0, 0, 0, 852, 0, 0, 0,
    0, 0, 0, 0, 0, 853, 0, 0, 0, 854, 0, 0, 0, 855, 0, 0, 856, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 857, 0, 0, 858, 0,
    0, 859, 0, 860, 861, 0, 0, 0, 0, 862, 0, 0, 0, 0, 0, 0, 0, 0, 0, 863, 0, 0, 864, 0, 0, 865, 0, 0, 0, 866, 0, 0,
    867, 0, 868, 0, 0, 869, 0, 870, 0, 0, 0, 0, 871, 872, 0, 0, 0, 0, 0, 873, 0, 0, 874, 0, 0, 0, 0, 0, 0, 0, 875, 0,
    876, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 877, 0, 0, 0, 0, 0, 878, 0, 0, 0, 0, 0, 0, 0, 879, 0, 880, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 881, 0, 0, 0, 0, 0, 882, 0, 0, 883, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 884, 0, 0, 885,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 886, 0, 0, 887, 888, 0, 0, 0, 0, 0, 0, 889, 0, 0, 890, 891, 0, 0, 892, 0, 0, 893, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 894, 0, 895, 896, 0, 0, 0, 0, 0, 897, 0, 0, 0, 0, 898, 0, 0, 0, 899, 0, 900, 0,
    901, 0, 0, 0, 0, 0, 902, 0, 0, 0, 903, 0, 0, 0, 904, 0, 0, 0, 0, 0, 0, 905, 0, 0, 906, 0, 0, 0, 907, 0, 908, 0,
    0, 0, 0, 0, 909, 0, 0, 0, 0, 910, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 911, 0, 0, 0, 0, 912, 0, 0, 913, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 914, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 915,
};
void recomp_unit_0086_entry(Runtime &rt, AllegrexContext &ctx, std::uint16_t direct_entry_id, GuestMemory::AotFastView &aot_mem) {
    std::uint32_t jump_target = 0u;
    std::uint32_t local_transfers = 0u;
    std::uint32_t local_pc = ctx.pc;
    std::uint32_t entry_id = direct_entry_id;
LOCAL_DISPATCH:
    {
    if (entry_id == 0u) {
        const std::uint32_t entry_delta = local_pc - 0x0895C000u;
        entry_id = (entry_delta < 16336u && (entry_delta & 3u) == 0u) ? kEntryIds_recomp_unit_0086[entry_delta >> 2u] : 0u;
    }
    switch (entry_id) {
    case 1u: goto L_0895C000;
    case 2u: goto L_0895C008;
    case 3u: goto L_0895C010;
    case 4u: goto L_0895C024;
    case 5u: goto L_0895C030;
    case 6u: goto L_0895C038;
    case 7u: goto L_0895C044;
    case 8u: goto L_0895C054;
    case 9u: goto L_0895C060;
    case 10u: goto L_0895C068;
    case 11u: goto L_0895C074;
    case 12u: goto L_0895C08C;
    case 13u: goto L_0895C0A0;
    case 14u: goto L_0895C0A8;
    case 15u: goto L_0895C0B0;
    case 16u: goto L_0895C0C4;
    case 17u: goto L_0895C0DC;
    case 18u: goto L_0895C0E0;
    case 19u: goto L_0895C0EC;
    case 20u: goto L_0895C0F8;
    case 21u: goto L_0895C0FC;
    case 22u: goto L_0895C108;
    case 23u: goto L_0895C110;
    case 24u: goto L_0895C130;
    case 25u: goto L_0895C154;
    case 26u: goto L_0895C164;
    case 27u: goto L_0895C174;
    case 28u: goto L_0895C184;
    case 29u: goto L_0895C1B0;
    case 30u: goto L_0895C1C0;
    case 31u: goto L_0895C1C8;
    case 32u: goto L_0895C1D4;
    case 33u: goto L_0895C1E4;
    case 34u: goto L_0895C1E8;
    case 35u: goto L_0895C1F8;
    case 36u: goto L_0895C210;
    case 37u: goto L_0895C214;
    case 38u: goto L_0895C21C;
    case 39u: goto L_0895C234;
    case 40u: goto L_0895C240;
    case 41u: goto L_0895C264;
    case 42u: goto L_0895C294;
    case 43u: goto L_0895C2A4;
    case 44u: goto L_0895C2C0;
    case 45u: goto L_0895C2CC;
    case 46u: goto L_0895C2D4;
    case 47u: goto L_0895C2E0;
    case 48u: goto L_0895C2E8;
    case 49u: goto L_0895C2FC;
    case 50u: goto L_0895C310;
    case 51u: goto L_0895C31C;
    case 52u: goto L_0895C324;
    case 53u: goto L_0895C32C;
    case 54u: goto L_0895C33C;
    case 55u: goto L_0895C344;
    case 56u: goto L_0895C350;
    case 57u: goto L_0895C354;
    case 58u: goto L_0895C364;
    case 59u: goto L_0895C38C;
    case 60u: goto L_0895C394;
    case 61u: goto L_0895C3A0;
    case 62u: goto L_0895C3A8;
    case 63u: goto L_0895C3D8;
    case 64u: goto L_0895C3EC;
    case 65u: goto L_0895C3FC;
    case 66u: goto L_0895C40C;
    case 67u: goto L_0895C414;
    case 68u: goto L_0895C420;
    case 69u: goto L_0895C430;
    case 70u: goto L_0895C454;
    case 71u: goto L_0895C468;
    case 72u: goto L_0895C480;
    case 73u: goto L_0895C498;
    case 74u: goto L_0895C49C;
    case 75u: goto L_0895C4A4;
    case 76u: goto L_0895C4B0;
    case 77u: goto L_0895C4B4;
    case 78u: goto L_0895C4C0;
    case 79u: goto L_0895C4C8;
    case 80u: goto L_0895C500;
    case 81u: goto L_0895C50C;
    case 82u: goto L_0895C528;
    case 83u: goto L_0895C534;
    case 84u: goto L_0895C53C;
    case 85u: goto L_0895C548;
    case 86u: goto L_0895C550;
    case 87u: goto L_0895C564;
    case 88u: goto L_0895C578;
    case 89u: goto L_0895C584;
    case 90u: goto L_0895C58C;
    case 91u: goto L_0895C594;
    case 92u: goto L_0895C5A4;
    case 93u: goto L_0895C5AC;
    case 94u: goto L_0895C5B8;
    case 95u: goto L_0895C5C4;
    case 96u: goto L_0895C5CC;
    case 97u: goto L_0895C5DC;
    case 98u: goto L_0895C5E8;
    case 99u: goto L_0895C5F4;
    case 100u: goto L_0895C614;
    case 101u: goto L_0895C63C;
    case 102u: goto L_0895C658;
    case 103u: goto L_0895C660;
    case 104u: goto L_0895C680;
    case 105u: goto L_0895C698;
    case 106u: goto L_0895C69C;
    case 107u: goto L_0895C6A4;
    case 108u: goto L_0895C6BC;
    case 109u: goto L_0895C6C8;
    case 110u: goto L_0895C6D8;
    case 111u: goto L_0895C6F8;
    case 112u: goto L_0895C6FC;
    case 113u: goto L_0895C714;
    case 114u: goto L_0895C73C;
    case 115u: goto L_0895C74C;
    case 116u: goto L_0895C760;
    case 117u: goto L_0895C77C;
    case 118u: goto L_0895C788;
    case 119u: goto L_0895C790;
    case 120u: goto L_0895C798;
    case 121u: goto L_0895C7A4;
    case 122u: goto L_0895C7B0;
    case 123u: goto L_0895C7C0;
    case 124u: goto L_0895C7CC;
    case 125u: goto L_0895C7D4;
    case 126u: goto L_0895C7DC;
    case 127u: goto L_0895C7EC;
    case 128u: goto L_0895C7F4;
    case 129u: goto L_0895C814;
    case 130u: goto L_0895C820;
    case 131u: goto L_0895C82C;
    case 132u: goto L_0895C854;
    case 133u: goto L_0895C860;
    case 134u: goto L_0895C878;
    case 135u: goto L_0895C88C;
    case 136u: goto L_0895C8AC;
    case 137u: goto L_0895C8B8;
    case 138u: goto L_0895C8C8;
    case 139u: goto L_0895C8D8;
    case 140u: goto L_0895C8E8;
    case 141u: goto L_0895C8F4;
    case 142u: goto L_0895C900;
    case 143u: goto L_0895C90C;
    case 144u: goto L_0895C91C;
    case 145u: goto L_0895C92C;
    case 146u: goto L_0895C93C;
    case 147u: goto L_0895C950;
    case 148u: goto L_0895C964;
    case 149u: goto L_0895C974;
    case 150u: goto L_0895C98C;
    case 151u: goto L_0895C994;
    case 152u: goto L_0895C9A0;
    case 153u: goto L_0895C9AC;
    case 154u: goto L_0895C9B0;
    case 155u: goto L_0895C9B8;
    case 156u: goto L_0895C9C4;
    case 157u: goto L_0895C9CC;
    case 158u: goto L_0895C9F4;
    case 159u: goto L_0895CA00;
    case 160u: goto L_0895CA0C;
    case 161u: goto L_0895CA1C;
    case 162u: goto L_0895CA34;
    case 163u: goto L_0895CA40;
    case 164u: goto L_0895CA4C;
    case 165u: goto L_0895CA58;
    case 166u: goto L_0895CA64;
    case 167u: goto L_0895CA70;
    case 168u: goto L_0895CA80;
    case 169u: goto L_0895CA8C;
    case 170u: goto L_0895CA98;
    case 171u: goto L_0895CAA4;
    case 172u: goto L_0895CAA8;
    case 173u: goto L_0895CAB4;
    case 174u: goto L_0895CAB8;
    case 175u: goto L_0895CACC;
    case 176u: goto L_0895CAD4;
    case 177u: goto L_0895CAE8;
    case 178u: goto L_0895CAF4;
    case 179u: goto L_0895CB00;
    case 180u: goto L_0895CB0C;
    case 181u: goto L_0895CB18;
    case 182u: goto L_0895CB1C;
    case 183u: goto L_0895CB24;
    case 184u: goto L_0895CB50;
    case 185u: goto L_0895CB70;
    case 186u: goto L_0895CB84;
    case 187u: goto L_0895CB90;
    case 188u: goto L_0895CBA8;
    case 189u: goto L_0895CBB4;
    case 190u: goto L_0895CBC0;
    case 191u: goto L_0895CBE4;
    case 192u: goto L_0895CC08;
    case 193u: goto L_0895CC28;
    case 194u: goto L_0895CC34;
    case 195u: goto L_0895CC3C;
    case 196u: goto L_0895CC4C;
    case 197u: goto L_0895CC64;
    case 198u: goto L_0895CC98;
    case 199u: goto L_0895CCA4;
    case 200u: goto L_0895CCB4;
    case 201u: goto L_0895CCC4;
    case 202u: goto L_0895CCE4;
    case 203u: goto L_0895CCEC;
    case 204u: goto L_0895CD04;
    case 205u: goto L_0895CD0C;
    case 206u: goto L_0895CD18;
    case 207u: goto L_0895CD28;
    case 208u: goto L_0895CD2C;
    case 209u: goto L_0895CD3C;
    case 210u: goto L_0895CD48;
    case 211u: goto L_0895CD60;
    case 212u: goto L_0895CD70;
    case 213u: goto L_0895CD78;
    case 214u: goto L_0895CD8C;
    case 215u: goto L_0895CD98;
    case 216u: goto L_0895CDA0;
    case 217u: goto L_0895CDAC;
    case 218u: goto L_0895CDB0;
    case 219u: goto L_0895CDD8;
    case 220u: goto L_0895CDF0;
    case 221u: goto L_0895CDF8;
    case 222u: goto L_0895CE04;
    case 223u: goto L_0895CE14;
    case 224u: goto L_0895CE20;
    case 225u: goto L_0895CE2C;
    case 226u: goto L_0895CE30;
    case 227u: goto L_0895CE3C;
    case 228u: goto L_0895CE40;
    case 229u: goto L_0895CE48;
    case 230u: goto L_0895CE58;
    case 231u: goto L_0895CE64;
    case 232u: goto L_0895CE68;
    case 233u: goto L_0895CE70;
    case 234u: goto L_0895CE78;
    case 235u: goto L_0895CE80;
    case 236u: goto L_0895CE9C;
    case 237u: goto L_0895CEA8;
    case 238u: goto L_0895CEB8;
    case 239u: goto L_0895CEBC;
    case 240u: goto L_0895CEC4;
    case 241u: goto L_0895CF00;
    case 242u: goto L_0895CF08;
    case 243u: goto L_0895CF10;
    case 244u: goto L_0895CF24;
    case 245u: goto L_0895CF44;
    case 246u: goto L_0895CF50;
    case 247u: goto L_0895CF58;
    case 248u: goto L_0895CF64;
    case 249u: goto L_0895CF70;
    case 250u: goto L_0895CF80;
    case 251u: goto L_0895CF84;
    case 252u: goto L_0895CF94;
    case 253u: goto L_0895CFAC;
    case 254u: goto L_0895CFB8;
    case 255u: goto L_0895CFBC;
    case 256u: goto L_0895CFE0;
    case 257u: goto L_0895D008;
    case 258u: goto L_0895D010;
    case 259u: goto L_0895D01C;
    case 260u: goto L_0895D028;
    case 261u: goto L_0895D034;
    case 262u: goto L_0895D044;
    case 263u: goto L_0895D050;
    case 264u: goto L_0895D060;
    case 265u: goto L_0895D06C;
    case 266u: goto L_0895D07C;
    case 267u: goto L_0895D090;
    case 268u: goto L_0895D0A0;
    case 269u: goto L_0895D0B8;
    case 270u: goto L_0895D0D0;
    case 271u: goto L_0895D0DC;
    case 272u: goto L_0895D0F8;
    case 273u: goto L_0895D114;
    case 274u: goto L_0895D11C;
    case 275u: goto L_0895D128;
    case 276u: goto L_0895D130;
    case 277u: goto L_0895D13C;
    case 278u: goto L_0895D144;
    case 279u: goto L_0895D150;
    case 280u: goto L_0895D160;
    case 281u: goto L_0895D180;
    case 282u: goto L_0895D18C;
    case 283u: goto L_0895D1A0;
    case 284u: goto L_0895D1B0;
    case 285u: goto L_0895D1D8;
    case 286u: goto L_0895D1E4;
    case 287u: goto L_0895D1F4;
    case 288u: goto L_0895D200;
    case 289u: goto L_0895D208;
    case 290u: goto L_0895D214;
    case 291u: goto L_0895D21C;
    case 292u: goto L_0895D230;
    case 293u: goto L_0895D234;
    case 294u: goto L_0895D250;
    case 295u: goto L_0895D25C;
    case 296u: goto L_0895D270;
    case 297u: goto L_0895D280;
    case 298u: goto L_0895D288;
    case 299u: goto L_0895D290;
    case 300u: goto L_0895D2A0;
    case 301u: goto L_0895D2B4;
    case 302u: goto L_0895D2C4;
    case 303u: goto L_0895D2CC;
    case 304u: goto L_0895D2D4;
    case 305u: goto L_0895D2E4;
    case 306u: goto L_0895D308;
    case 307u: goto L_0895D31C;
    case 308u: goto L_0895D330;
    case 309u: goto L_0895D338;
    case 310u: goto L_0895D340;
    case 311u: goto L_0895D358;
    case 312u: goto L_0895D370;
    case 313u: goto L_0895D380;
    case 314u: goto L_0895D390;
    case 315u: goto L_0895D39C;
    case 316u: goto L_0895D3A8;
    case 317u: goto L_0895D3BC;
    case 318u: goto L_0895D3F4;
    case 319u: goto L_0895D408;
    case 320u: goto L_0895D410;
    case 321u: goto L_0895D418;
    case 322u: goto L_0895D444;
    case 323u: goto L_0895D450;
    case 324u: goto L_0895D468;
    case 325u: goto L_0895D47C;
    case 326u: goto L_0895D48C;
    case 327u: goto L_0895D498;
    case 328u: goto L_0895D4A8;
    case 329u: goto L_0895D4B8;
    case 330u: goto L_0895D4C4;
    case 331u: goto L_0895D4D8;
    case 332u: goto L_0895D4EC;
    case 333u: goto L_0895D4F4;
    case 334u: goto L_0895D4FC;
    case 335u: goto L_0895D514;
    case 336u: goto L_0895D524;
    case 337u: goto L_0895D530;
    case 338u: goto L_0895D53C;
    case 339u: goto L_0895D550;
    case 340u: goto L_0895D598;
    case 341u: goto L_0895D5B0;
    case 342u: goto L_0895D5CC;
    case 343u: goto L_0895D5DC;
    case 344u: goto L_0895D5E4;
    case 345u: goto L_0895D5F8;
    case 346u: goto L_0895D600;
    case 347u: goto L_0895D604;
    case 348u: goto L_0895D614;
    case 349u: goto L_0895D624;
    case 350u: goto L_0895D62C;
    case 351u: goto L_0895D640;
    case 352u: goto L_0895D648;
    case 353u: goto L_0895D64C;
    case 354u: goto L_0895D658;
    case 355u: goto L_0895D660;
    case 356u: goto L_0895D664;
    case 357u: goto L_0895D674;
    case 358u: goto L_0895D678;
    case 359u: goto L_0895D6A4;
    case 360u: goto L_0895D6CC;
    case 361u: goto L_0895D6DC;
    case 362u: goto L_0895D6F8;
    case 363u: goto L_0895D714;
    case 364u: goto L_0895D724;
    case 365u: goto L_0895D730;
    case 366u: goto L_0895D73C;
    case 367u: goto L_0895D748;
    case 368u: goto L_0895D754;
    case 369u: goto L_0895D764;
    case 370u: goto L_0895D768;
    case 371u: goto L_0895D778;
    case 372u: goto L_0895D784;
    case 373u: goto L_0895D790;
    case 374u: goto L_0895D7AC;
    case 375u: goto L_0895D7B0;
    case 376u: goto L_0895D7B8;
    case 377u: goto L_0895D7C0;
    case 378u: goto L_0895D7DC;
    case 379u: goto L_0895D7E4;
    case 380u: goto L_0895D800;
    case 381u: goto L_0895D810;
    case 382u: goto L_0895D81C;
    case 383u: goto L_0895D828;
    case 384u: goto L_0895D834;
    case 385u: goto L_0895D840;
    case 386u: goto L_0895D844;
    case 387u: goto L_0895D84C;
    case 388u: goto L_0895D850;
    case 389u: goto L_0895D868;
    case 390u: goto L_0895D8B8;
    case 391u: goto L_0895D8D0;
    case 392u: goto L_0895D900;
    case 393u: goto L_0895D904;
    case 394u: goto L_0895D934;
    case 395u: goto L_0895D978;
    case 396u: goto L_0895D984;
    case 397u: goto L_0895D98C;
    case 398u: goto L_0895D9B0;
    case 399u: goto L_0895D9D4;
    case 400u: goto L_0895DA24;
    case 401u: goto L_0895DA2C;
    case 402u: goto L_0895DA34;
    case 403u: goto L_0895DA40;
    case 404u: goto L_0895DA4C;
    case 405u: goto L_0895DA50;
    case 406u: goto L_0895DA58;
    case 407u: goto L_0895DA64;
    case 408u: goto L_0895DA74;
    case 409u: goto L_0895DA78;
    case 410u: goto L_0895DAA4;
    case 411u: goto L_0895DAB8;
    case 412u: goto L_0895DAC4;
    case 413u: goto L_0895DAD8;
    case 414u: goto L_0895DAF8;
    case 415u: goto L_0895DB28;
    case 416u: goto L_0895DB34;
    case 417u: goto L_0895DB40;
    case 418u: goto L_0895DB60;
    case 419u: goto L_0895DB64;
    case 420u: goto L_0895DB6C;
    case 421u: goto L_0895DBA8;
    case 422u: goto L_0895DBB0;
    case 423u: goto L_0895DBB8;
    case 424u: goto L_0895DBCC;
    case 425u: goto L_0895DBEC;
    case 426u: goto L_0895DBF8;
    case 427u: goto L_0895DC00;
    case 428u: goto L_0895DC0C;
    case 429u: goto L_0895DC18;
    case 430u: goto L_0895DC28;
    case 431u: goto L_0895DC2C;
    case 432u: goto L_0895DC3C;
    case 433u: goto L_0895DC54;
    case 434u: goto L_0895DC60;
    case 435u: goto L_0895DC64;
    case 436u: goto L_0895DC88;
    case 437u: goto L_0895DCB0;
    case 438u: goto L_0895DCC4;
    case 439u: goto L_0895DCD4;
    case 440u: goto L_0895DCE0;
    case 441u: goto L_0895DCF0;
    case 442u: goto L_0895DCFC;
    case 443u: goto L_0895DD0C;
    case 444u: goto L_0895DD24;
    case 445u: goto L_0895DD3C;
    case 446u: goto L_0895DD48;
    case 447u: goto L_0895DD54;
    case 448u: goto L_0895DD8C;
    case 449u: goto L_0895DDA0;
    case 450u: goto L_0895DDA8;
    case 451u: goto L_0895DDC0;
    case 452u: goto L_0895DDC8;
    case 453u: goto L_0895DDDC;
    case 454u: goto L_0895DDF0;
    case 455u: goto L_0895DDF8;
    case 456u: goto L_0895DE10;
    case 457u: goto L_0895DE18;
    case 458u: goto L_0895DE1C;
    case 459u: goto L_0895DE28;
    case 460u: goto L_0895DE48;
    case 461u: goto L_0895DE78;
    case 462u: goto L_0895DE84;
    case 463u: goto L_0895DE90;
    case 464u: goto L_0895DE9C;
    case 465u: goto L_0895DEB0;
    case 466u: goto L_0895DEBC;
    case 467u: goto L_0895DEC4;
    case 468u: goto L_0895DED0;
    case 469u: goto L_0895DED8;
    case 470u: goto L_0895DEE4;
    case 471u: goto L_0895DF08;
    case 472u: goto L_0895DF24;
    case 473u: goto L_0895DF44;
    case 474u: goto L_0895DF50;
    case 475u: goto L_0895DF68;
    case 476u: goto L_0895DF6C;
    case 477u: goto L_0895DF7C;
    case 478u: goto L_0895DF98;
    case 479u: goto L_0895DFD4;
    case 480u: goto L_0895DFDC;
    case 481u: goto L_0895DFE4;
    case 482u: goto L_0895DFF0;
    case 483u: goto L_0895E000;
    case 484u: goto L_0895E00C;
    case 485u: goto L_0895E018;
    case 486u: goto L_0895E030;
    case 487u: goto L_0895E038;
    case 488u: goto L_0895E044;
    case 489u: goto L_0895E04C;
    case 490u: goto L_0895E058;
    case 491u: goto L_0895E064;
    case 492u: goto L_0895E080;
    case 493u: goto L_0895E08C;
    case 494u: goto L_0895E090;
    case 495u: goto L_0895E09C;
    case 496u: goto L_0895E0A4;
    case 497u: goto L_0895E0B0;
    case 498u: goto L_0895E0B8;
    case 499u: goto L_0895E0D0;
    case 500u: goto L_0895E0D8;
    case 501u: goto L_0895E0E4;
    case 502u: goto L_0895E0EC;
    case 503u: goto L_0895E0F8;
    case 504u: goto L_0895E104;
    case 505u: goto L_0895E108;
    case 506u: goto L_0895E114;
    case 507u: goto L_0895E13C;
    case 508u: goto L_0895E144;
    case 509u: goto L_0895E164;
    case 510u: goto L_0895E16C;
    case 511u: goto L_0895E180;
    case 512u: goto L_0895E188;
    case 513u: goto L_0895E194;
    case 514u: goto L_0895E1A0;
    case 515u: goto L_0895E1AC;
    case 516u: goto L_0895E1B8;
    case 517u: goto L_0895E1C4;
    case 518u: goto L_0895E1D8;
    case 519u: goto L_0895E1E8;
    case 520u: goto L_0895E1F8;
    case 521u: goto L_0895E204;
    case 522u: goto L_0895E21C;
    case 523u: goto L_0895E224;
    case 524u: goto L_0895E22C;
    case 525u: goto L_0895E234;
    case 526u: goto L_0895E244;
    case 527u: goto L_0895E258;
    case 528u: goto L_0895E260;
    case 529u: goto L_0895E268;
    case 530u: goto L_0895E27C;
    case 531u: goto L_0895E290;
    case 532u: goto L_0895E29C;
    case 533u: goto L_0895E2A8;
    case 534u: goto L_0895E2C4;
    case 535u: goto L_0895E2D0;
    case 536u: goto L_0895E2D4;
    case 537u: goto L_0895E2E4;
    case 538u: goto L_0895E304;
    case 539u: goto L_0895E328;
    case 540u: goto L_0895E334;
    case 541u: goto L_0895E348;
    case 542u: goto L_0895E354;
    case 543u: goto L_0895E358;
    case 544u: goto L_0895E370;
    case 545u: goto L_0895E388;
    case 546u: goto L_0895E394;
    case 547u: goto L_0895E3A0;
    case 548u: goto L_0895E3A4;
    case 549u: goto L_0895E3B8;
    case 550u: goto L_0895E3E0;
    case 551u: goto L_0895E3FC;
    case 552u: goto L_0895E418;
    case 553u: goto L_0895E474;
    case 554u: goto L_0895E488;
    case 555u: goto L_0895E4A4;
    case 556u: goto L_0895E4B8;
    case 557u: goto L_0895E4CC;
    case 558u: goto L_0895E4E0;
    case 559u: goto L_0895E500;
    case 560u: goto L_0895E514;
    case 561u: goto L_0895E51C;
    case 562u: goto L_0895E530;
    case 563u: goto L_0895E538;
    case 564u: goto L_0895E554;
    case 565u: goto L_0895E560;
    case 566u: goto L_0895E568;
    case 567u: goto L_0895E57C;
    case 568u: goto L_0895E588;
    case 569u: goto L_0895E594;
    case 570u: goto L_0895E5A4;
    case 571u: goto L_0895E5B8;
    case 572u: goto L_0895E5C8;
    case 573u: goto L_0895E5D0;
    case 574u: goto L_0895E5F0;
    case 575u: goto L_0895E64C;
    case 576u: goto L_0895E668;
    case 577u: goto L_0895E670;
    case 578u: goto L_0895E680;
    case 579u: goto L_0895E694;
    case 580u: goto L_0895E6AC;
    case 581u: goto L_0895E6C8;
    case 582u: goto L_0895E6D8;
    case 583u: goto L_0895E6E8;
    case 584u: goto L_0895E6F4;
    case 585u: goto L_0895E700;
    case 586u: goto L_0895E710;
    case 587u: goto L_0895E71C;
    case 588u: goto L_0895E728;
    case 589u: goto L_0895E748;
    case 590u: goto L_0895E764;
    case 591u: goto L_0895E770;
    case 592u: goto L_0895E778;
    case 593u: goto L_0895E788;
    case 594u: goto L_0895E7AC;
    case 595u: goto L_0895E7CC;
    case 596u: goto L_0895E7E8;
    case 597u: goto L_0895E7F4;
    case 598u: goto L_0895E818;
    case 599u: goto L_0895E820;
    case 600u: goto L_0895E83C;
    case 601u: goto L_0895E864;
    case 602u: goto L_0895E884;
    case 603u: goto L_0895E890;
    case 604u: goto L_0895E89C;
    case 605u: goto L_0895E8A8;
    case 606u: goto L_0895E8C0;
    case 607u: goto L_0895E8D0;
    case 608u: goto L_0895E8D8;
    case 609u: goto L_0895E8E0;
    case 610u: goto L_0895E8EC;
    case 611u: goto L_0895E8FC;
    case 612u: goto L_0895E908;
    case 613u: goto L_0895E910;
    case 614u: goto L_0895E91C;
    case 615u: goto L_0895E924;
    case 616u: goto L_0895E938;
    case 617u: goto L_0895E954;
    case 618u: goto L_0895E970;
    case 619u: goto L_0895E97C;
    case 620u: goto L_0895E984;
    case 621u: goto L_0895E98C;
    case 622u: goto L_0895E998;
    case 623u: goto L_0895E9A4;
    case 624u: goto L_0895E9B4;
    case 625u: goto L_0895E9C0;
    case 626u: goto L_0895E9C8;
    case 627u: goto L_0895E9D0;
    case 628u: goto L_0895E9E0;
    case 629u: goto L_0895E9F8;
    case 630u: goto L_0895EA10;
    case 631u: goto L_0895EA14;
    case 632u: goto L_0895EA1C;
    case 633u: goto L_0895EA34;
    case 634u: goto L_0895EA40;
    case 635u: goto L_0895EA4C;
    case 636u: goto L_0895EA6C;
    case 637u: goto L_0895EA84;
    case 638u: goto L_0895EA88;
    case 639u: goto L_0895EA90;
    case 640u: goto L_0895EA9C;
    case 641u: goto L_0895EAB0;
    case 642u: goto L_0895EAD0;
    case 643u: goto L_0895EAE4;
    case 644u: goto L_0895EAFC;
    case 645u: goto L_0895EB00;
    case 646u: goto L_0895EB08;
    case 647u: goto L_0895EB20;
    case 648u: goto L_0895EB2C;
    case 649u: goto L_0895EB30;
    case 650u: goto L_0895EB44;
    case 651u: goto L_0895EB54;
    case 652u: goto L_0895EB60;
    case 653u: goto L_0895EB68;
    case 654u: goto L_0895EB74;
    case 655u: goto L_0895EB7C;
    case 656u: goto L_0895EBA0;
    case 657u: goto L_0895EBC0;
    case 658u: goto L_0895EBD0;
    case 659u: goto L_0895EBDC;
    case 660u: goto L_0895EBEC;
    case 661u: goto L_0895EBF8;
    case 662u: goto L_0895EC00;
    case 663u: goto L_0895EC0C;
    case 664u: goto L_0895EC14;
    case 665u: goto L_0895EC2C;
    case 666u: goto L_0895EC44;
    case 667u: goto L_0895EC54;
    case 668u: goto L_0895EC6C;
    case 669u: goto L_0895EC70;
    case 670u: goto L_0895EC78;
    case 671u: goto L_0895EC90;
    case 672u: goto L_0895EC9C;
    case 673u: goto L_0895ECB4;
    case 674u: goto L_0895ECD4;
    case 675u: goto L_0895ECE4;
    case 676u: goto L_0895ECF0;
    case 677u: goto L_0895ED00;
    case 678u: goto L_0895ED0C;
    case 679u: goto L_0895ED14;
    case 680u: goto L_0895ED20;
    case 681u: goto L_0895ED28;
    case 682u: goto L_0895ED40;
    case 683u: goto L_0895ED58;
    case 684u: goto L_0895ED68;
    case 685u: goto L_0895ED80;
    case 686u: goto L_0895ED84;
    case 687u: goto L_0895ED8C;
    case 688u: goto L_0895EDA4;
    case 689u: goto L_0895EDB0;
    case 690u: goto L_0895EDC8;
    case 691u: goto L_0895EDF0;
    case 692u: goto L_0895EDFC;
    case 693u: goto L_0895EE08;
    case 694u: goto L_0895EE24;
    case 695u: goto L_0895EE70;
    case 696u: goto L_0895EE80;
    case 697u: goto L_0895EE88;
    case 698u: goto L_0895EE90;
    case 699u: goto L_0895EE9C;
    case 700u: goto L_0895EEAC;
    case 701u: goto L_0895EEB8;
    case 702u: goto L_0895EEC0;
    case 703u: goto L_0895EECC;
    case 704u: goto L_0895EED4;
    case 705u: goto L_0895EEE8;
    case 706u: goto L_0895EF04;
    case 707u: goto L_0895EF20;
    case 708u: goto L_0895EF2C;
    case 709u: goto L_0895EF34;
    case 710u: goto L_0895EF3C;
    case 711u: goto L_0895EF48;
    case 712u: goto L_0895EF54;
    case 713u: goto L_0895EF64;
    case 714u: goto L_0895EF70;
    case 715u: goto L_0895EF78;
    case 716u: goto L_0895EF80;
    case 717u: goto L_0895EF90;
    case 718u: goto L_0895EFA8;
    case 719u: goto L_0895EFC0;
    case 720u: goto L_0895EFC4;
    case 721u: goto L_0895EFCC;
    case 722u: goto L_0895EFE4;
    case 723u: goto L_0895EFF0;
    case 724u: goto L_0895EFFC;
    case 725u: goto L_0895F004;
    case 726u: goto L_0895F020;
    case 727u: goto L_0895F048;
    case 728u: goto L_0895F06C;
    case 729u: goto L_0895F088;
    case 730u: goto L_0895F094;
    case 731u: goto L_0895F0C0;
    case 732u: goto L_0895F0DC;
    case 733u: goto L_0895F0E8;
    case 734u: goto L_0895F0FC;
    case 735u: goto L_0895F100;
    case 736u: goto L_0895F11C;
    case 737u: goto L_0895F144;
    case 738u: goto L_0895F150;
    case 739u: goto L_0895F15C;
    case 740u: goto L_0895F16C;
    case 741u: goto L_0895F178;
    case 742u: goto L_0895F180;
    case 743u: goto L_0895F18C;
    case 744u: goto L_0895F194;
    case 745u: goto L_0895F1A8;
    case 746u: goto L_0895F1AC;
    case 747u: goto L_0895F1C4;
    case 748u: goto L_0895F1D0;
    case 749u: goto L_0895F1F0;
    case 750u: goto L_0895F200;
    case 751u: goto L_0895F20C;
    case 752u: goto L_0895F234;
    case 753u: goto L_0895F258;
    case 754u: goto L_0895F274;
    case 755u: goto L_0895F288;
    case 756u: goto L_0895F2B4;
    case 757u: goto L_0895F2C0;
    case 758u: goto L_0895F2CC;
    case 759u: goto L_0895F2D4;
    case 760u: goto L_0895F2D8;
    case 761u: goto L_0895F2EC;
    case 762u: goto L_0895F314;
    case 763u: goto L_0895F320;
    case 764u: goto L_0895F32C;
    case 765u: goto L_0895F33C;
    case 766u: goto L_0895F348;
    case 767u: goto L_0895F350;
    case 768u: goto L_0895F35C;
    case 769u: goto L_0895F364;
    case 770u: goto L_0895F378;
    case 771u: goto L_0895F37C;
    case 772u: goto L_0895F394;
    case 773u: goto L_0895F3A0;
    case 774u: goto L_0895F3B8;
    case 775u: goto L_0895F3CC;
    case 776u: goto L_0895F3D8;
    case 777u: goto L_0895F3F0;
    case 778u: goto L_0895F408;
    case 779u: goto L_0895F42C;
    case 780u: goto L_0895F444;
    case 781u: goto L_0895F468;
    case 782u: goto L_0895F478;
    case 783u: goto L_0895F488;
    case 784u: goto L_0895F4A8;
    case 785u: goto L_0895F4B8;
    case 786u: goto L_0895F4C4;
    case 787u: goto L_0895F4EC;
    case 788u: goto L_0895F510;
    case 789u: goto L_0895F52C;
    case 790u: goto L_0895F540;
    case 791u: goto L_0895F56C;
    case 792u: goto L_0895F578;
    case 793u: goto L_0895F584;
    case 794u: goto L_0895F58C;
    case 795u: goto L_0895F590;
    case 796u: goto L_0895F5A4;
    case 797u: goto L_0895F5D4;
    case 798u: goto L_0895F5E0;
    case 799u: goto L_0895F5EC;
    case 800u: goto L_0895F5FC;
    case 801u: goto L_0895F608;
    case 802u: goto L_0895F610;
    case 803u: goto L_0895F61C;
    case 804u: goto L_0895F624;
    case 805u: goto L_0895F638;
    case 806u: goto L_0895F63C;
    case 807u: goto L_0895F654;
    case 808u: goto L_0895F660;
    case 809u: goto L_0895F678;
    case 810u: goto L_0895F68C;
    case 811u: goto L_0895F698;
    case 812u: goto L_0895F6B0;
    case 813u: goto L_0895F6C8;
    case 814u: goto L_0895F6EC;
    case 815u: goto L_0895F704;
    case 816u: goto L_0895F728;
    case 817u: goto L_0895F738;
    case 818u: goto L_0895F748;
    case 819u: goto L_0895F76C;
    case 820u: goto L_0895F77C;
    case 821u: goto L_0895F788;
    case 822u: goto L_0895F7B0;
    case 823u: goto L_0895F7D4;
    case 824u: goto L_0895F7F0;
    case 825u: goto L_0895F804;
    case 826u: goto L_0895F830;
    case 827u: goto L_0895F83C;
    case 828u: goto L_0895F848;
    case 829u: goto L_0895F850;
    case 830u: goto L_0895F854;
    case 831u: goto L_0895F868;
    case 832u: goto L_0895F890;
    case 833u: goto L_0895F89C;
    case 834u: goto L_0895F8A8;
    case 835u: goto L_0895F8B8;
    case 836u: goto L_0895F8C4;
    case 837u: goto L_0895F8CC;
    case 838u: goto L_0895F8D8;
    case 839u: goto L_0895F8E0;
    case 840u: goto L_0895F8F4;
    case 841u: goto L_0895F8F8;
    case 842u: goto L_0895F910;
    case 843u: goto L_0895F91C;
    case 844u: goto L_0895F93C;
    case 845u: goto L_0895F94C;
    case 846u: goto L_0895F964;
    case 847u: goto L_0895F978;
    case 848u: goto L_0895F984;
    case 849u: goto L_0895F99C;
    case 850u: goto L_0895F9B4;
    case 851u: goto L_0895F9D8;
    case 852u: goto L_0895F9F0;
    case 853u: goto L_0895FA14;
    case 854u: goto L_0895FA24;
    case 855u: goto L_0895FA34;
    case 856u: goto L_0895FA40;
    case 857u: goto L_0895FA6C;
    case 858u: goto L_0895FA78;
    case 859u: goto L_0895FA84;
    case 860u: goto L_0895FA8C;
    case 861u: goto L_0895FA90;
    case 862u: goto L_0895FAA4;
    case 863u: goto L_0895FACC;
    case 864u: goto L_0895FAD8;
    case 865u: goto L_0895FAE4;
    case 866u: goto L_0895FAF4;
    case 867u: goto L_0895FB00;
    case 868u: goto L_0895FB08;
    case 869u: goto L_0895FB14;
    case 870u: goto L_0895FB1C;
    case 871u: goto L_0895FB30;
    case 872u: goto L_0895FB34;
    case 873u: goto L_0895FB4C;
    case 874u: goto L_0895FB58;
    case 875u: goto L_0895FB78;
    case 876u: goto L_0895FB80;
    case 877u: goto L_0895FBB0;
    case 878u: goto L_0895FBC8;
    case 879u: goto L_0895FBE8;
    case 880u: goto L_0895FBF0;
    case 881u: goto L_0895FC20;
    case 882u: goto L_0895FC38;
    case 883u: goto L_0895FC44;
    case 884u: goto L_0895FC70;
    case 885u: goto L_0895FC7C;
    case 886u: goto L_0895FCA4;
    case 887u: goto L_0895FCB0;
    case 888u: goto L_0895FCB4;
    case 889u: goto L_0895FCD0;
    case 890u: goto L_0895FCDC;
    case 891u: goto L_0895FCE0;
    case 892u: goto L_0895FCEC;
    case 893u: goto L_0895FCF8;
    case 894u: goto L_0895FD28;
    case 895u: goto L_0895FD30;
    case 896u: goto L_0895FD34;
    case 897u: goto L_0895FD4C;
    case 898u: goto L_0895FD60;
    case 899u: goto L_0895FD70;
    case 900u: goto L_0895FD78;
    case 901u: goto L_0895FD80;
    case 902u: goto L_0895FD98;
    case 903u: goto L_0895FDA8;
    case 904u: goto L_0895FDB8;
    case 905u: goto L_0895FDD4;
    case 906u: goto L_0895FDE0;
    case 907u: goto L_0895FDF0;
    case 908u: goto L_0895FDF8;
    case 909u: goto L_0895FE10;
    case 910u: goto L_0895FE24;
    case 911u: goto L_0895FE9C;
    case 912u: goto L_0895FEB0;
    case 913u: goto L_0895FEBC;
    case 914u: goto L_0895FF8C;
    case 915u: goto L_0895FFCC;
    default:
        if (local_transfers == 0u) rt.unsupported(ctx.pc, 0u, "invalid internal function entry");
        else ctx.pc = local_pc;
        return;
    }
    }
L_0895C000:
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_0895C044;
      }
      goto L_0895C008;
    }
L_0895C008:
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_0895C038;
      }
      goto L_0895C010;
    }
L_0895C010:
    ctx.set_gpr(16, ctx.gpr[6] + 0u);
    ctx.set_gpr(6, ctx.gpr[17] + 0u);
    ctx.set_gpr(4, rt.memory().aot_load16(ctx.gpr[17] + static_cast<std::uint32_t>(-4)));
    { const bool branch_taken = ctx.gpr[4] != 0u;
    // nop
      if (branch_taken) {
          goto L_0895C030;
      }
      goto L_0895C024;
    }
L_0895C024:
    ctx.set_gpr(17, 0u + 0u);
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_0895C044;
      }
      goto L_0895C030;
    }
L_0895C030:
    ctx.set_gpr(4, ctx.gpr[4] << 2u);
    ctx.set_gpr(17, ctx.gpr[17] + ctx.gpr[4]);
    goto L_0895C038;
L_0895C038:
    ctx.set_gpr(4, ctx.gpr[17] < ctx.gpr[18] ? 1u : 0u);
    { const bool branch_taken = ctx.gpr[4] != 0u;
    // nop
      if (branch_taken) {
          goto L_0895C010;
      }
      goto L_0895C044;
    }
L_0895C044:
    ctx.set_gpr(5, ctx.gpr[18] + static_cast<std::uint32_t>(-4));
    rt.memory().aot_store16(ctx.gpr[18] + static_cast<std::uint32_t>(-2), static_cast<std::uint16_t>(ctx.gpr[7]));
    { const bool branch_taken = ctx.gpr[17] != 0u;
    // nop
      if (branch_taken) {
          goto L_0895C060;
      }
      goto L_0895C054;
    }
L_0895C054:
    ctx.set_gpr(4, 0u + 0u);
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_0895C068;
      }
      goto L_0895C060;
    }
L_0895C060:
    ctx.set_gpr(4, ctx.gpr[17] - ctx.gpr[18]);
    ctx.set_gpr(4, static_cast<std::uint32_t>(static_cast<std::int32_t>(ctx.gpr[4]) >> 2u));
    goto L_0895C068;
L_0895C068:
    rt.memory().aot_store16(ctx.gpr[5] + static_cast<std::uint32_t>(0), static_cast<std::uint16_t>(ctx.gpr[4]));
    { const bool branch_taken = ctx.gpr[6] == 0u;
    // nop
      if (branch_taken) {
          goto L_0895C0A8;
      }
      goto L_0895C074;
    }
L_0895C074:
    ctx.set_gpr(4, ctx.gpr[18] - ctx.gpr[6]);
    ctx.set_gpr(4, static_cast<std::uint32_t>(static_cast<std::int32_t>(ctx.gpr[4]) >> 2u));
    rt.memory().aot_store16(ctx.gpr[6] + static_cast<std::uint32_t>(-4), static_cast<std::uint16_t>(ctx.gpr[4]));
    ctx.set_gpr(4, ctx.gpr[18] - ctx.gpr[3]);
    { const bool branch_taken = ctx.gpr[4] != ctx.gpr[6];
    // nop
      if (branch_taken) {
          goto L_0895C0A8;
      }
      goto L_0895C08C;
    }
L_0895C08C:
    ctx.set_gpr(4, ctx.gpr[19] + 0u);
    ctx.set_gpr(5, ctx.gpr[16] + 0u);
    ctx.set_gpr(7, ctx.gpr[18] + 0u);
    ctx.set_gpr(31, 0x0895C0A0u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0085_entry, 85u, 918u, 0x0895BF64u>(ctx, &aot_mem) && ctx.pc == 0x0895C0A0u) goto L_0895C0A0;
    return;
L_0895C0A0:
    ctx.set_gpr(3, ctx.gpr[2] + 0u);
    ctx.set_gpr(6, ctx.gpr[16] + 0u);
    goto L_0895C0A8;
L_0895C0A8:
    { const bool branch_taken = ctx.gpr[17] == 0u;
    // nop
      if (branch_taken) {
          goto L_0895C0E0;
      }
      goto L_0895C0B0;
    }
L_0895C0B0:
    ctx.set_gpr(4, rt.memory().aot_load16(ctx.gpr[17] + static_cast<std::uint32_t>(-2)));
    ctx.set_gpr(4, ctx.gpr[4] << 2u);
    ctx.set_gpr(4, ctx.gpr[17] - ctx.gpr[4]);
    { const bool branch_taken = ctx.gpr[4] != ctx.gpr[18];
    // nop
      if (branch_taken) {
          goto L_0895C0E0;
      }
      goto L_0895C0C4;
    }
L_0895C0C4:
    ctx.set_gpr(4, ctx.gpr[19] + 0u);
    ctx.set_gpr(5, ctx.gpr[6] + 0u);
    ctx.set_gpr(6, ctx.gpr[18] + 0u);
    ctx.set_gpr(7, ctx.gpr[17] + 0u);
    ctx.set_gpr(31, 0x0895C0DCu);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0085_entry, 85u, 918u, 0x0895BF64u>(ctx, &aot_mem) && ctx.pc == 0x0895C0DCu) goto L_0895C0DC;
    return;
L_0895C0DC:
    ctx.set_gpr(3, ctx.gpr[2] + 0u);
    goto L_0895C0E0;
L_0895C0E0:
    ctx.set_gpr(4, rt.memory().aot_load32(ctx.gpr[19] + static_cast<std::uint32_t>(28)));
    { const bool branch_taken = static_cast<std::int32_t>(ctx.gpr[4]) < 0;
    // nop
      if (branch_taken) {
          goto L_0895C0FC;
      }
      goto L_0895C0EC;
    }
L_0895C0EC:
    ctx.set_gpr(1, static_cast<std::int32_t>(ctx.gpr[4]) < static_cast<std::int32_t>(ctx.gpr[3]) ? 1u : 0u);
    { const bool branch_taken = ctx.gpr[1] == 0u;
    // nop
      if (branch_taken) {
          goto L_0895C0FC;
      }
      goto L_0895C0F8;
    }
L_0895C0F8:
    rt.memory().aot_store32(ctx.gpr[19] + static_cast<std::uint32_t>(28), ctx.gpr[3]);
    goto L_0895C0FC;
L_0895C0FC:
    ctx.set_gpr(4, rt.memory().aot_load32(ctx.gpr[19] + static_cast<std::uint32_t>(12)));
    { const bool branch_taken = ctx.gpr[3] != ctx.gpr[4];
    // nop
      if (branch_taken) {
          goto L_0895C110;
      }
      goto L_0895C108;
    }
L_0895C108:
    ctx.set_gpr(3, 0u + static_cast<std::uint32_t>(1));
    rt.memory().aot_store8(ctx.gpr[19] + static_cast<std::uint32_t>(32), static_cast<std::uint8_t>(ctx.gpr[3]));
    goto L_0895C110;
L_0895C110:
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
L_0895C130:
    ctx.set_gpr(29, ctx.gpr[29] + static_cast<std::uint32_t>(-16));
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(12), ctx.gpr[31]);
    ctx.set_gpr(2, ctx.gpr[4] + 0u);
    ctx.set_gpr(4, ctx.gpr[5] + 0u);
    ctx.set_gpr(5, ctx.gpr[2] + 0u);
    ctx.set_gpr(25, rt.memory().aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(0)));
    ctx.set_gpr(25, rt.memory().aot_load32(ctx.gpr[25] + static_cast<std::uint32_t>(92)));
    jump_target = ctx.gpr[25];
    ctx.set_gpr(31, 0x0895C154u);
    // nop
    ctx.pc = jump_target;
    if (rt.invoke_chained_call(ctx, &aot_mem) && ctx.pc == 0x0895C154u) goto L_0895C154;
    return;
L_0895C154:
    ctx.set_gpr(31, rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(12)));
    ctx.set_gpr(29, ctx.gpr[29] + static_cast<std::uint32_t>(16));
    jump_target = ctx.gpr[31];
    // nop
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_0895C164:
    ctx.set_gpr(29, ctx.gpr[29] + static_cast<std::uint32_t>(-16));
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(12), ctx.gpr[31]);
    ctx.set_gpr(31, 0x0895C174u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0073_entry, 73u, 440u, 0x08929F10u>(ctx, &aot_mem) && ctx.pc == 0x0895C174u) goto L_0895C174;
    return;
L_0895C174:
    ctx.set_gpr(31, rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(12)));
    ctx.set_gpr(29, ctx.gpr[29] + static_cast<std::uint32_t>(16));
    jump_target = ctx.gpr[31];
    // nop
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_0895C184:
    ctx.set_gpr(29, ctx.gpr[29] + static_cast<std::uint32_t>(-16));
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(12), ctx.gpr[31]);
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(8), ctx.gpr[18]);
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(4), ctx.gpr[17]);
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(0), ctx.gpr[16]);
    ctx.set_gpr(17, ctx.gpr[4] + 0u);
    ctx.set_gpr(18, ctx.gpr[5] + 0u);
    ctx.set_gpr(16, ctx.gpr[6] + 0u);
    ctx.set_gpr(2, ctx.gpr[18] & 1u);
    { const bool branch_taken = ctx.gpr[2] == 0u;
    // nop
      if (branch_taken) {
          goto L_0895C1C0;
      }
      goto L_0895C1B0;
    }
L_0895C1B0:
    ctx.set_gpr(4, 2226u << 16u);
    ctx.set_gpr(4, ctx.gpr[4] + static_cast<std::uint32_t>(-32292));
    ctx.set_gpr(31, 0x0895C1C0u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0084_entry, 84u, 451u, 0x08955EB4u>(ctx, &aot_mem) && ctx.pc == 0x0895C1C0u) goto L_0895C1C0;
    return;
L_0895C1C0:
    { const bool branch_taken = ctx.gpr[16] != 0u;
    // nop
      if (branch_taken) {
          goto L_0895C1D4;
      }
      goto L_0895C1C8;
    }
L_0895C1C8:
    ctx.set_gpr(16, ctx.gpr[18] | 1u);
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_0895C1E8;
      }
      goto L_0895C1D4;
    }
L_0895C1D4:
    ctx.set_gpr(4, rt.memory().aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(8)));
    ctx.set_gpr(5, ctx.gpr[18] + 0u);
    ctx.set_gpr(31, 0x0895C1E4u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0072_entry, 72u, 784u, 0x08927768u>(ctx, &aot_mem) && ctx.pc == 0x0895C1E4u) goto L_0895C1E4;
    return;
L_0895C1E4:
    ctx.set_gpr(16, ctx.gpr[2] + 0u);
    goto L_0895C1E8;
L_0895C1E8:
    ctx.set_gpr(4, 0u + 0u);
    ctx.set_gpr(3, rt.memory().aot_load32(ctx.gpr[17] + static_cast<std::uint32_t>(0)));
    { const bool branch_taken = ctx.gpr[3] == 0u;
    // nop
      if (branch_taken) {
          goto L_0895C214;
      }
      goto L_0895C1F8;
    }
L_0895C1F8:
    ctx.set_gpr(2, ctx.gpr[3] & 1u);
    ctx.set_gpr(2, ctx.gpr[2] ^ 1u);
    ctx.set_gpr(2, ctx.gpr[2] < static_cast<std::uint32_t>(1) ? 1u : 0u);
    ctx.set_gpr(2, ctx.gpr[2] ^ 1u);
    { const bool branch_taken = ctx.gpr[2] == 0u;
    // nop
      if (branch_taken) {
          goto L_0895C214;
      }
      goto L_0895C210;
    }
L_0895C210:
    ctx.set_gpr(4, 0u + static_cast<std::uint32_t>(1));
    goto L_0895C214;
L_0895C214:
    { const bool branch_taken = ctx.gpr[4] == 0u;
    // nop
      if (branch_taken) {
          goto L_0895C240;
      }
      goto L_0895C21C;
    }
L_0895C21C:
    ctx.set_gpr(5, ctx.gpr[3] + static_cast<std::uint32_t>(-8));
    ctx.set_gpr(2, rt.memory().aot_load32(ctx.gpr[3] + static_cast<std::uint32_t>(-4)));
    ctx.set_gpr(2, ctx.gpr[2] + static_cast<std::uint32_t>(-1));
    rt.memory().aot_store32(ctx.gpr[3] + static_cast<std::uint32_t>(-4), ctx.gpr[2]);
    { const bool branch_taken = ctx.gpr[2] != 0u;
    // nop
      if (branch_taken) {
          goto L_0895C240;
      }
      goto L_0895C234;
    }
L_0895C234:
    ctx.set_gpr(4, rt.memory().aot_load32(ctx.gpr[5] + static_cast<std::uint32_t>(0)));
    ctx.set_gpr(31, 0x0895C240u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0085_entry, 85u, 887u, 0x0895BD2Cu>(ctx, &aot_mem) && ctx.pc == 0x0895C240u) goto L_0895C240;
    return;
L_0895C240:
    rt.memory().aot_store32(ctx.gpr[17] + static_cast<std::uint32_t>(0), ctx.gpr[16]);
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
L_0895C264:
    ctx.set_gpr(29, ctx.gpr[29] + static_cast<std::uint32_t>(-32));
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(28), ctx.gpr[31]);
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(24), ctx.gpr[21]);
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(20), ctx.gpr[20]);
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(16), ctx.gpr[19]);
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(12), ctx.gpr[18]);
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(8), ctx.gpr[17]);
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(4), ctx.gpr[16]);
    ctx.set_gpr(21, ctx.gpr[4] + 0u);
    ctx.set_gpr(20, ctx.gpr[5] + 0u);
    { const bool branch_taken = ctx.gpr[20] == 0u;
    // nop
      if (branch_taken) {
          goto L_0895C354;
      }
      goto L_0895C294;
    }
L_0895C294:
    ctx.set_gpr(17, rt.memory().aot_load32(ctx.gpr[21] + static_cast<std::uint32_t>(8)));
    ctx.set_gpr(19, 0u + 0u);
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_0895C344;
      }
      goto L_0895C2A4;
    }
L_0895C2A4:
    ctx.set_gpr(3, ctx.gpr[19] << 2u);
    ctx.set_gpr(2, rt.memory().aot_load32(ctx.gpr[21] + static_cast<std::uint32_t>(16)));
    ctx.set_gpr(18, ctx.gpr[2] + ctx.gpr[3]);
    ctx.set_gpr(2, 2245u << 16u);
    ctx.set_gpr(2, rt.memory().aot_load32(ctx.gpr[2] + static_cast<std::uint32_t>(30776)));
    { const bool branch_taken = ctx.gpr[2] != 0u;
    // nop
      if (branch_taken) {
          goto L_0895C2E8;
      }
      goto L_0895C2C0;
    }
L_0895C2C0:
    ctx.set_gpr(4, 0u + static_cast<std::uint32_t>(16));
    ctx.set_gpr(31, 0x0895C2CCu);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0072_entry, 72u, 788u, 0x089277A0u>(ctx, &aot_mem) && ctx.pc == 0x0895C2CCu) goto L_0895C2CC;
    return;
L_0895C2CC:
    { const bool branch_taken = ctx.gpr[2] == 0u;
    // nop
      if (branch_taken) {
          goto L_0895C2E0;
      }
      goto L_0895C2D4;
    }
L_0895C2D4:
    ctx.set_gpr(4, ctx.gpr[2] + 0u);
    ctx.set_gpr(31, 0x0895C2E0u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0072_entry, 72u, 762u, 0x089275E8u>(ctx, &aot_mem) && ctx.pc == 0x0895C2E0u) goto L_0895C2E0;
    return;
L_0895C2E0:
    ctx.set_gpr(3, 2245u << 16u);
    rt.memory().aot_store32(ctx.gpr[3] + static_cast<std::uint32_t>(30776), ctx.gpr[2]);
    goto L_0895C2E8;
L_0895C2E8:
    ctx.set_gpr(2, 2245u << 16u);
    ctx.set_gpr(4, rt.memory().aot_load32(ctx.gpr[2] + static_cast<std::uint32_t>(30776)));
    ctx.set_gpr(5, 0u + 0u);
    ctx.set_gpr(31, 0x0895C2FCu);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0072_entry, 72u, 784u, 0x08927768u>(ctx, &aot_mem) && ctx.pc == 0x0895C2FCu) goto L_0895C2FC;
    return;
L_0895C2FC:
    ctx.set_gpr(16, ctx.gpr[2] + 0u);
    ctx.set_gpr(2, rt.memory().aot_load32(ctx.gpr[18] + static_cast<std::uint32_t>(0)));
    ctx.set_gpr(2, 0u < ctx.gpr[2] ? 1u : 0u);
    { const bool branch_taken = ctx.gpr[2] == 0u;
    // nop
      if (branch_taken) {
          goto L_0895C324;
      }
      goto L_0895C310;
    }
L_0895C310:
    ctx.set_gpr(4, ctx.gpr[18] + 0u);
    ctx.set_gpr(31, 0x0895C31Cu);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0019_entry, 19u, 781u, 0x0885315Cu>(ctx, &aot_mem) && ctx.pc == 0x0895C31Cu) goto L_0895C31C;
    return;
L_0895C31C:
    ctx.set_gpr(2, 0u < ctx.gpr[2] ? 1u : 0u);
    ctx.set_gpr(2, ctx.gpr[2] ^ 1u);
    goto L_0895C324;
L_0895C324:
    { const bool branch_taken = ctx.gpr[2] == 0u;
    // nop
      if (branch_taken) {
          goto L_0895C33C;
      }
      goto L_0895C32C;
    }
L_0895C32C:
    ctx.set_gpr(2, rt.memory().aot_load32(ctx.gpr[18] + static_cast<std::uint32_t>(0)));
    ctx.set_gpr(4, ctx.gpr[2] + static_cast<std::uint32_t>(-8));
    ctx.set_gpr(31, 0x0895C33Cu);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0019_entry, 19u, 770u, 0x088530D0u>(ctx, &aot_mem) && ctx.pc == 0x0895C33Cu) goto L_0895C33C;
    return;
L_0895C33C:
    rt.memory().aot_store32(ctx.gpr[18] + static_cast<std::uint32_t>(0), ctx.gpr[16]);
    ctx.set_gpr(19, ctx.gpr[19] + static_cast<std::uint32_t>(1));
    goto L_0895C344;
L_0895C344:
    ctx.set_gpr(2, static_cast<std::int32_t>(ctx.gpr[19]) < static_cast<std::int32_t>(ctx.gpr[17]) ? 1u : 0u);
    { const bool branch_taken = ctx.gpr[2] != 0u;
    // nop
      if (branch_taken) {
          goto L_0895C2A4;
      }
      goto L_0895C350;
    }
L_0895C350:
    rt.memory().aot_store32(ctx.gpr[21] + static_cast<std::uint32_t>(8), 0u);
    goto L_0895C354;
L_0895C354:
    ctx.set_gpr(4, ctx.gpr[21] + 0u);
    ctx.set_gpr(5, ctx.gpr[20] + 0u);
    ctx.set_gpr(31, 0x0895C364u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0080_entry, 80u, 433u, 0x08945EE4u>(ctx, &aot_mem) && ctx.pc == 0x0895C364u) goto L_0895C364;
    return;
L_0895C364:
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
L_0895C38C:
    { const bool branch_taken = ctx.gpr[5] == 0u;
    // nop
      if (branch_taken) {
          goto L_0895C3A0;
      }
      goto L_0895C394;
    }
L_0895C394:
    rt.memory().aot_store32(ctx.gpr[4] + static_cast<std::uint32_t>(8), 0u);
    rt.memory().aot_store32(ctx.gpr[4] + static_cast<std::uint32_t>(12), 0u);
    rt.memory().aot_store32(ctx.gpr[4] + static_cast<std::uint32_t>(16), 0u);
    goto L_0895C3A0;
L_0895C3A0:
    jump_target = ctx.gpr[31];
    // nop
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_0895C3A8:
    ctx.set_gpr(29, ctx.gpr[29] + static_cast<std::uint32_t>(-32));
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(28), ctx.gpr[31]);
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(24), ctx.gpr[20]);
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(20), ctx.gpr[19]);
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(16), ctx.gpr[18]);
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(12), ctx.gpr[17]);
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(8), ctx.gpr[16]);
    ctx.set_gpr(18, ctx.gpr[4] + 0u);
    ctx.set_gpr(16, rt.memory().aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(8)));
    ctx.set_gpr(17, 0u + 0u);
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_0895C414;
      }
      goto L_0895C3D8;
    }
L_0895C3D8:
    ctx.set_gpr(3, ctx.gpr[17] << 2u);
    ctx.set_gpr(2, rt.memory().aot_load32(ctx.gpr[18] + static_cast<std::uint32_t>(16)));
    ctx.set_gpr(20, ctx.gpr[2] + ctx.gpr[3]);
    ctx.set_gpr(31, 0x0895C3ECu);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0019_entry, 19u, 782u, 0x08853170u>(ctx, &aot_mem) && ctx.pc == 0x0895C3ECu) goto L_0895C3EC;
    return;
L_0895C3EC:
    ctx.set_gpr(4, ctx.gpr[2] + 0u);
    ctx.set_gpr(5, 0u + 0u);
    ctx.set_gpr(31, 0x0895C3FCu);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0072_entry, 72u, 784u, 0x08927768u>(ctx, &aot_mem) && ctx.pc == 0x0895C3FCu) goto L_0895C3FC;
    return;
L_0895C3FC:
    ctx.set_gpr(19, ctx.gpr[2] + 0u);
    ctx.set_gpr(4, ctx.gpr[20] + 0u);
    ctx.set_gpr(31, 0x0895C40Cu);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0019_entry, 19u, 764u, 0x08853094u>(ctx, &aot_mem) && ctx.pc == 0x0895C40Cu) goto L_0895C40C;
    return;
L_0895C40C:
    rt.memory().aot_store32(ctx.gpr[20] + static_cast<std::uint32_t>(0), ctx.gpr[19]);
    ctx.set_gpr(17, ctx.gpr[17] + static_cast<std::uint32_t>(1));
    goto L_0895C414;
L_0895C414:
    ctx.set_gpr(2, static_cast<std::int32_t>(ctx.gpr[17]) < static_cast<std::int32_t>(ctx.gpr[16]) ? 1u : 0u);
    { const bool branch_taken = ctx.gpr[2] != 0u;
    // nop
      if (branch_taken) {
          goto L_0895C3D8;
      }
      goto L_0895C420;
    }
L_0895C420:
    rt.memory().aot_store32(ctx.gpr[18] + static_cast<std::uint32_t>(8), 0u);
    ctx.set_gpr(4, ctx.gpr[18] + 0u);
    ctx.set_gpr(31, 0x0895C430u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0080_entry, 80u, 435u, 0x08945EF4u>(ctx, &aot_mem) && ctx.pc == 0x0895C430u) goto L_0895C430;
    return;
L_0895C430:
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
L_0895C454:
    ctx.set_gpr(6, rt.memory().aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(16)));
    ctx.set_gpr(5, rt.memory().aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(8)));
    ctx.set_gpr(8, 0u + 0u);
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_0895C4B4;
      }
      goto L_0895C468;
    }
L_0895C468:
    ctx.set_gpr(3, ctx.gpr[8] << 2u);
    ctx.set_gpr(3, ctx.gpr[6] + ctx.gpr[3]);
    ctx.set_gpr(7, 0u + 0u);
    ctx.set_gpr(4, rt.memory().aot_load32(ctx.gpr[3] + static_cast<std::uint32_t>(0)));
    { const bool branch_taken = ctx.gpr[4] == 0u;
    // nop
      if (branch_taken) {
          goto L_0895C49C;
      }
      goto L_0895C480;
    }
L_0895C480:
    ctx.set_gpr(3, ctx.gpr[4] & 1u);
    ctx.set_gpr(3, ctx.gpr[3] ^ 1u);
    ctx.set_gpr(3, ctx.gpr[3] < static_cast<std::uint32_t>(1) ? 1u : 0u);
    ctx.set_gpr(3, ctx.gpr[3] ^ 1u);
    { const bool branch_taken = ctx.gpr[3] == 0u;
    // nop
      if (branch_taken) {
          goto L_0895C49C;
      }
      goto L_0895C498;
    }
L_0895C498:
    ctx.set_gpr(7, 0u + static_cast<std::uint32_t>(1));
    goto L_0895C49C;
L_0895C49C:
    { const bool branch_taken = ctx.gpr[7] == 0u;
    // nop
      if (branch_taken) {
          goto L_0895C4B0;
      }
      goto L_0895C4A4;
    }
L_0895C4A4:
    ctx.set_gpr(3, rt.memory().aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(-4)));
    ctx.set_gpr(3, ctx.gpr[3] + static_cast<std::uint32_t>(1));
    rt.memory().aot_store32(ctx.gpr[4] + static_cast<std::uint32_t>(-4), ctx.gpr[3]);
    goto L_0895C4B0;
L_0895C4B0:
    ctx.set_gpr(8, ctx.gpr[8] + static_cast<std::uint32_t>(1));
    goto L_0895C4B4;
L_0895C4B4:
    ctx.set_gpr(3, static_cast<std::int32_t>(ctx.gpr[8]) < static_cast<std::int32_t>(ctx.gpr[5]) ? 1u : 0u);
    { const bool branch_taken = ctx.gpr[3] != 0u;
    // nop
      if (branch_taken) {
          goto L_0895C468;
      }
      goto L_0895C4C0;
    }
L_0895C4C0:
    jump_target = ctx.gpr[31];
    // nop
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_0895C4C8:
    ctx.set_gpr(29, ctx.gpr[29] + static_cast<std::uint32_t>(-32));
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(28), ctx.gpr[31]);
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(24), ctx.gpr[21]);
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(20), ctx.gpr[20]);
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(16), ctx.gpr[19]);
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(12), ctx.gpr[18]);
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(8), ctx.gpr[17]);
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(4), ctx.gpr[16]);
    ctx.set_gpr(21, ctx.gpr[4] + 0u);
    ctx.set_gpr(20, ctx.gpr[5] + 0u);
    ctx.set_gpr(17, rt.memory().aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(8)));
    ctx.set_gpr(1, static_cast<std::int32_t>(ctx.gpr[17]) < static_cast<std::int32_t>(ctx.gpr[20]) ? 1u : 0u);
    { const bool branch_taken = ctx.gpr[1] != 0u;
    // nop
      if (branch_taken) {
          goto L_0895C5C4;
      }
      goto L_0895C500;
    }
L_0895C500:
    ctx.set_gpr(19, ctx.gpr[20] + 0u);
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_0895C5AC;
      }
      goto L_0895C50C;
    }
L_0895C50C:
    ctx.set_gpr(3, ctx.gpr[19] << 2u);
    ctx.set_gpr(2, rt.memory().aot_load32(ctx.gpr[21] + static_cast<std::uint32_t>(16)));
    ctx.set_gpr(18, ctx.gpr[2] + ctx.gpr[3]);
    ctx.set_gpr(2, 2245u << 16u);
    ctx.set_gpr(2, rt.memory().aot_load32(ctx.gpr[2] + static_cast<std::uint32_t>(30776)));
    { const bool branch_taken = ctx.gpr[2] != 0u;
    // nop
      if (branch_taken) {
          goto L_0895C550;
      }
      goto L_0895C528;
    }
L_0895C528:
    ctx.set_gpr(4, 0u + static_cast<std::uint32_t>(16));
    ctx.set_gpr(31, 0x0895C534u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0072_entry, 72u, 788u, 0x089277A0u>(ctx, &aot_mem) && ctx.pc == 0x0895C534u) goto L_0895C534;
    return;
L_0895C534:
    { const bool branch_taken = ctx.gpr[2] == 0u;
    // nop
      if (branch_taken) {
          goto L_0895C548;
      }
      goto L_0895C53C;
    }
L_0895C53C:
    ctx.set_gpr(4, ctx.gpr[2] + 0u);
    ctx.set_gpr(31, 0x0895C548u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0072_entry, 72u, 762u, 0x089275E8u>(ctx, &aot_mem) && ctx.pc == 0x0895C548u) goto L_0895C548;
    return;
L_0895C548:
    ctx.set_gpr(3, 2245u << 16u);
    rt.memory().aot_store32(ctx.gpr[3] + static_cast<std::uint32_t>(30776), ctx.gpr[2]);
    goto L_0895C550;
L_0895C550:
    ctx.set_gpr(2, 2245u << 16u);
    ctx.set_gpr(4, rt.memory().aot_load32(ctx.gpr[2] + static_cast<std::uint32_t>(30776)));
    ctx.set_gpr(5, 0u + 0u);
    ctx.set_gpr(31, 0x0895C564u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0072_entry, 72u, 784u, 0x08927768u>(ctx, &aot_mem) && ctx.pc == 0x0895C564u) goto L_0895C564;
    return;
L_0895C564:
    ctx.set_gpr(16, ctx.gpr[2] + 0u);
    ctx.set_gpr(3, rt.memory().aot_load32(ctx.gpr[18] + static_cast<std::uint32_t>(0)));
    ctx.set_gpr(3, 0u < ctx.gpr[3] ? 1u : 0u);
    { const bool branch_taken = ctx.gpr[3] == 0u;
    // nop
      if (branch_taken) {
          goto L_0895C58C;
      }
      goto L_0895C578;
    }
L_0895C578:
    ctx.set_gpr(4, ctx.gpr[18] + 0u);
    ctx.set_gpr(31, 0x0895C584u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0019_entry, 19u, 781u, 0x0885315Cu>(ctx, &aot_mem) && ctx.pc == 0x0895C584u) goto L_0895C584;
    return;
L_0895C584:
    ctx.set_gpr(3, 0u < ctx.gpr[2] ? 1u : 0u);
    ctx.set_gpr(3, ctx.gpr[3] ^ 1u);
    goto L_0895C58C;
L_0895C58C:
    { const bool branch_taken = ctx.gpr[3] == 0u;
    // nop
      if (branch_taken) {
          goto L_0895C5A4;
      }
      goto L_0895C594;
    }
L_0895C594:
    ctx.set_gpr(2, rt.memory().aot_load32(ctx.gpr[18] + static_cast<std::uint32_t>(0)));
    ctx.set_gpr(4, ctx.gpr[2] + static_cast<std::uint32_t>(-8));
    ctx.set_gpr(31, 0x0895C5A4u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0019_entry, 19u, 770u, 0x088530D0u>(ctx, &aot_mem) && ctx.pc == 0x0895C5A4u) goto L_0895C5A4;
    return;
L_0895C5A4:
    rt.memory().aot_store32(ctx.gpr[18] + static_cast<std::uint32_t>(0), ctx.gpr[16]);
    ctx.set_gpr(19, ctx.gpr[19] + static_cast<std::uint32_t>(1));
    goto L_0895C5AC;
L_0895C5AC:
    ctx.set_gpr(3, static_cast<std::int32_t>(ctx.gpr[19]) < static_cast<std::int32_t>(ctx.gpr[17]) ? 1u : 0u);
    { const bool branch_taken = ctx.gpr[3] != 0u;
    // nop
      if (branch_taken) {
          goto L_0895C50C;
      }
      goto L_0895C5B8;
    }
L_0895C5B8:
    rt.memory().aot_store32(ctx.gpr[21] + static_cast<std::uint32_t>(8), ctx.gpr[20]);
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_0895C614;
      }
      goto L_0895C5C4;
    }
L_0895C5C4:
    { const bool branch_taken = static_cast<std::int32_t>(ctx.gpr[20]) < 0;
    // nop
      if (branch_taken) {
          goto L_0895C5F4;
      }
      goto L_0895C5CC;
    }
L_0895C5CC:
    ctx.set_gpr(2, rt.memory().aot_load32(ctx.gpr[21] + static_cast<std::uint32_t>(12)));
    ctx.set_gpr(1, static_cast<std::int32_t>(ctx.gpr[2]) < static_cast<std::int32_t>(ctx.gpr[20]) ? 1u : 0u);
    { const bool branch_taken = ctx.gpr[1] != 0u;
    // nop
      if (branch_taken) {
          goto L_0895C5E8;
      }
      goto L_0895C5DC;
    }
L_0895C5DC:
    rt.memory().aot_store32(ctx.gpr[21] + static_cast<std::uint32_t>(8), ctx.gpr[20]);
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_0895C5F4;
      }
      goto L_0895C5E8;
    }
L_0895C5E8:
    ctx.set_gpr(6, 0u + static_cast<std::uint32_t>(4));
    ctx.set_gpr(31, 0x0895C5F4u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0066_entry, 66u, 795u, 0x0890FB1Cu>(ctx, &aot_mem) && ctx.pc == 0x0895C5F4u) goto L_0895C5F4;
    return;
L_0895C5F4:
    ctx.set_gpr(3, ctx.gpr[17] << 2u);
    ctx.set_gpr(2, rt.memory().aot_load32(ctx.gpr[21] + static_cast<std::uint32_t>(16)));
    ctx.set_gpr(4, ctx.gpr[2] + ctx.gpr[3]);
    ctx.set_gpr(2, ctx.gpr[20] - ctx.gpr[17]);
    ctx.set_gpr(6, ctx.gpr[2] << 2u);
    ctx.set_gpr(5, 0u + 0u);
    ctx.set_gpr(31, 0x0895C614u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0003_entry, 3u, 719u, 0x08812EE8u>(ctx, &aot_mem) && ctx.pc == 0x0895C614u) goto L_0895C614;
    return;
L_0895C614:
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
L_0895C63C:
    ctx.set_gpr(29, ctx.gpr[29] + static_cast<std::uint32_t>(-16));
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(12), ctx.gpr[31]);
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(8), ctx.gpr[17]);
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(4), ctx.gpr[16]);
    ctx.set_gpr(17, ctx.gpr[4] + 0u);
    ctx.set_gpr(31, 0x0895C658u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0064_entry, 64u, 874u, 0x08907C70u>(ctx, &aot_mem) && ctx.pc == 0x0895C658u) goto L_0895C658;
    return;
L_0895C658:
    { const bool branch_taken = static_cast<std::int32_t>(ctx.gpr[2]) < 0;
    // nop
      if (branch_taken) {
          goto L_0895C6F8;
      }
      goto L_0895C660;
    }
L_0895C660:
    ctx.set_gpr(16, ctx.gpr[2] + 0u);
    ctx.set_gpr(3, ctx.gpr[16] << 2u);
    ctx.set_gpr(2, rt.memory().aot_load32(ctx.gpr[17] + static_cast<std::uint32_t>(16)));
    ctx.set_gpr(2, ctx.gpr[2] + ctx.gpr[3]);
    ctx.set_gpr(4, 0u + 0u);
    ctx.set_gpr(3, rt.memory().aot_load32(ctx.gpr[2] + static_cast<std::uint32_t>(0)));
    { const bool branch_taken = ctx.gpr[3] == 0u;
    // nop
      if (branch_taken) {
          goto L_0895C69C;
      }
      goto L_0895C680;
    }
L_0895C680:
    ctx.set_gpr(2, ctx.gpr[3] & 1u);
    ctx.set_gpr(2, ctx.gpr[2] ^ 1u);
    ctx.set_gpr(2, ctx.gpr[2] < static_cast<std::uint32_t>(1) ? 1u : 0u);
    ctx.set_gpr(2, ctx.gpr[2] ^ 1u);
    { const bool branch_taken = ctx.gpr[2] == 0u;
    // nop
      if (branch_taken) {
          goto L_0895C69C;
      }
      goto L_0895C698;
    }
L_0895C698:
    ctx.set_gpr(4, 0u + static_cast<std::uint32_t>(1));
    goto L_0895C69C;
L_0895C69C:
    { const bool branch_taken = ctx.gpr[4] == 0u;
    // nop
      if (branch_taken) {
          goto L_0895C6C8;
      }
      goto L_0895C6A4;
    }
L_0895C6A4:
    ctx.set_gpr(5, ctx.gpr[3] + static_cast<std::uint32_t>(-8));
    ctx.set_gpr(2, rt.memory().aot_load32(ctx.gpr[3] + static_cast<std::uint32_t>(-4)));
    ctx.set_gpr(2, ctx.gpr[2] + static_cast<std::uint32_t>(-1));
    rt.memory().aot_store32(ctx.gpr[3] + static_cast<std::uint32_t>(-4), ctx.gpr[2]);
    { const bool branch_taken = ctx.gpr[2] != 0u;
    // nop
      if (branch_taken) {
          goto L_0895C6C8;
      }
      goto L_0895C6BC;
    }
L_0895C6BC:
    ctx.set_gpr(4, rt.memory().aot_load32(ctx.gpr[5] + static_cast<std::uint32_t>(0)));
    ctx.set_gpr(31, 0x0895C6C8u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0085_entry, 85u, 887u, 0x0895BD2Cu>(ctx, &aot_mem) && ctx.pc == 0x0895C6C8u) goto L_0895C6C8;
    return;
L_0895C6C8:
    ctx.set_gpr(4, ctx.gpr[17] + 0u);
    ctx.set_gpr(5, ctx.gpr[16] + 0u);
    ctx.set_gpr(31, 0x0895C6D8u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0067_entry, 67u, 9u, 0x089100E0u>(ctx, &aot_mem) && ctx.pc == 0x0895C6D8u) goto L_0895C6D8;
    return;
L_0895C6D8:
    ctx.set_gpr(2, rt.memory().aot_load32(ctx.gpr[17] + static_cast<std::uint32_t>(8)));
    ctx.set_gpr(3, ctx.gpr[2] << 2u);
    ctx.set_gpr(2, rt.memory().aot_load32(ctx.gpr[17] + static_cast<std::uint32_t>(16)));
    ctx.set_gpr(2, ctx.gpr[2] + ctx.gpr[3]);
    rt.memory().aot_store32(ctx.gpr[2] + static_cast<std::uint32_t>(0), 0u);
    ctx.set_gpr(2, 0u + 0u);
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_0895C6FC;
      }
      goto L_0895C6F8;
    }
L_0895C6F8:
    ctx.set_gpr(2, 0u + static_cast<std::uint32_t>(1));
    goto L_0895C6FC;
L_0895C6FC:
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
L_0895C714:
    ctx.set_gpr(29, ctx.gpr[29] + static_cast<std::uint32_t>(-16));
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(12), ctx.gpr[31]);
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(8), ctx.gpr[18]);
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(4), ctx.gpr[17]);
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(0), ctx.gpr[16]);
    ctx.set_gpr(16, ctx.gpr[4] + 0u);
    ctx.set_gpr(18, ctx.gpr[5] + 0u);
    ctx.set_gpr(6, 0u + 0u);
    ctx.set_gpr(31, 0x0895C73Cu);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0064_entry, 64u, 874u, 0x08907C70u>(ctx, &aot_mem) && ctx.pc == 0x0895C73Cu) goto L_0895C73C;
    return;
L_0895C73C:
    ctx.set_gpr(17, ctx.gpr[2] + 0u);
    ctx.set_gpr(3, 0u + static_cast<std::uint32_t>(-1));
    { const bool branch_taken = ctx.gpr[2] != ctx.gpr[3];
    // nop
      if (branch_taken) {
          goto L_0895C7F4;
      }
      goto L_0895C74C;
    }
L_0895C74C:
    ctx.set_gpr(17, rt.memory().aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(8)));
    ctx.set_gpr(5, ctx.gpr[17] + static_cast<std::uint32_t>(1));
    ctx.set_gpr(4, ctx.gpr[16] + 0u);
    ctx.set_gpr(31, 0x0895C760u);
    // nop
    goto L_0895C4C8;
L_0895C760:
    ctx.set_gpr(3, ctx.gpr[17] << 2u);
    ctx.set_gpr(2, rt.memory().aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(16)));
    ctx.set_gpr(16, ctx.gpr[2] + ctx.gpr[3]);
    ctx.set_gpr(2, rt.memory().aot_load32(ctx.gpr[18] + static_cast<std::uint32_t>(0)));
    ctx.set_gpr(2, 0u < ctx.gpr[2] ? 1u : 0u);
    { const bool branch_taken = ctx.gpr[2] == 0u;
    // nop
      if (branch_taken) {
          goto L_0895C790;
      }
      goto L_0895C77C;
    }
L_0895C77C:
    ctx.set_gpr(4, ctx.gpr[18] + 0u);
    ctx.set_gpr(31, 0x0895C788u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0019_entry, 19u, 781u, 0x0885315Cu>(ctx, &aot_mem) && ctx.pc == 0x0895C788u) goto L_0895C788;
    return;
L_0895C788:
    ctx.set_gpr(2, 0u < ctx.gpr[2] ? 1u : 0u);
    ctx.set_gpr(2, ctx.gpr[2] ^ 1u);
    goto L_0895C790;
L_0895C790:
    { const bool branch_taken = ctx.gpr[2] == 0u;
    // nop
      if (branch_taken) {
          goto L_0895C7B0;
      }
      goto L_0895C798;
    }
L_0895C798:
    ctx.set_gpr(4, ctx.gpr[18] + 0u);
    ctx.set_gpr(31, 0x0895C7A4u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0019_entry, 19u, 776u, 0x0885311Cu>(ctx, &aot_mem) && ctx.pc == 0x0895C7A4u) goto L_0895C7A4;
    return;
L_0895C7A4:
    ctx.set_gpr(4, ctx.gpr[2] + static_cast<std::uint32_t>(4));
    ctx.set_gpr(31, 0x0895C7B0u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0064_entry, 64u, 102u, 0x08904690u>(ctx, &aot_mem) && ctx.pc == 0x0895C7B0u) goto L_0895C7B0;
    return;
L_0895C7B0:
    ctx.set_gpr(2, rt.memory().aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(0)));
    ctx.set_gpr(2, 0u < ctx.gpr[2] ? 1u : 0u);
    { const bool branch_taken = ctx.gpr[2] == 0u;
    // nop
      if (branch_taken) {
          goto L_0895C7D4;
      }
      goto L_0895C7C0;
    }
L_0895C7C0:
    ctx.set_gpr(4, ctx.gpr[16] + 0u);
    ctx.set_gpr(31, 0x0895C7CCu);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0019_entry, 19u, 781u, 0x0885315Cu>(ctx, &aot_mem) && ctx.pc == 0x0895C7CCu) goto L_0895C7CC;
    return;
L_0895C7CC:
    ctx.set_gpr(2, 0u < ctx.gpr[2] ? 1u : 0u);
    ctx.set_gpr(2, ctx.gpr[2] ^ 1u);
    goto L_0895C7D4;
L_0895C7D4:
    { const bool branch_taken = ctx.gpr[2] == 0u;
    // nop
      if (branch_taken) {
          goto L_0895C7EC;
      }
      goto L_0895C7DC;
    }
L_0895C7DC:
    ctx.set_gpr(2, rt.memory().aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(0)));
    ctx.set_gpr(4, ctx.gpr[2] + static_cast<std::uint32_t>(-8));
    ctx.set_gpr(31, 0x0895C7ECu);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0019_entry, 19u, 770u, 0x088530D0u>(ctx, &aot_mem) && ctx.pc == 0x0895C7ECu) goto L_0895C7EC;
    return;
L_0895C7EC:
    ctx.set_gpr(2, rt.memory().aot_load32(ctx.gpr[18] + static_cast<std::uint32_t>(0)));
    rt.memory().aot_store32(ctx.gpr[16] + static_cast<std::uint32_t>(0), ctx.gpr[2]);
    goto L_0895C7F4;
L_0895C7F4:
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
L_0895C814:
    rt.memory().aot_store32(ctx.gpr[4] + static_cast<std::uint32_t>(8), ctx.gpr[5]);
    jump_target = ctx.gpr[31];
    // nop
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_0895C820:
    rt.memory().aot_store32(ctx.gpr[4] + static_cast<std::uint32_t>(12), ctx.gpr[5]);
    jump_target = ctx.gpr[31];
    // nop
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_0895C82C:
    ctx.set_gpr(29, ctx.gpr[29] + static_cast<std::uint32_t>(-16));
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(12), ctx.gpr[31]);
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(8), ctx.gpr[16]);
    ctx.set_gpr(16, ctx.gpr[4] + 0u);
    ctx.set_gpr(5, rt.memory().aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(8)));
    ctx.set_gpr(4, rt.memory().aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(16)));
    ctx.set_gpr(2, rt.memory().aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(8)));
    ctx.set_gpr(2, static_cast<std::int32_t>(ctx.gpr[5]) < static_cast<std::int32_t>(ctx.gpr[2]) ? 1u : 0u);
    { const bool branch_taken = ctx.gpr[2] != 0u;
    // nop
      if (branch_taken) {
          goto L_0895C860;
      }
      goto L_0895C854;
    }
L_0895C854:
    ctx.set_gpr(6, 0u + static_cast<std::uint32_t>(1));
    ctx.set_gpr(31, 0x0895C860u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0066_entry, 66u, 785u, 0x0890FA2Cu>(ctx, &aot_mem) && ctx.pc == 0x0895C860u) goto L_0895C860;
    return;
L_0895C860:
    ctx.set_gpr(4, ctx.gpr[16] + 0u);
    ctx.set_gpr(5, rt.memory().aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(12)));
    ctx.set_gpr(25, rt.memory().aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(0)));
    ctx.set_gpr(25, rt.memory().aot_load32(ctx.gpr[25] + static_cast<std::uint32_t>(100)));
    jump_target = ctx.gpr[25];
    ctx.set_gpr(31, 0x0895C878u);
    // nop
    ctx.pc = jump_target;
    if (rt.invoke_chained_call(ctx, &aot_mem) && ctx.pc == 0x0895C878u) goto L_0895C878;
    return;
L_0895C878:
    ctx.set_gpr(31, rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(12)));
    ctx.set_gpr(16, rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(8)));
    ctx.set_gpr(29, ctx.gpr[29] + static_cast<std::uint32_t>(16));
    jump_target = ctx.gpr[31];
    // nop
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_0895C88C:
    ctx.set_gpr(29, ctx.gpr[29] + static_cast<std::uint32_t>(-16));
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(12), ctx.gpr[31]);
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(8), ctx.gpr[16]);
    ctx.set_gpr(16, ctx.gpr[4] + 0u);
    ctx.set_gpr(4, rt.memory().aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(16)));
    ctx.set_gpr(3, rt.memory().aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(12)));
    { const bool branch_taken = static_cast<std::int32_t>(ctx.gpr[3]) < 0;
    // nop
      if (branch_taken) {
          goto L_0895C8B8;
      }
      goto L_0895C8AC;
    }
L_0895C8AC:
    rt.memory().aot_store32(ctx.gpr[4] + static_cast<std::uint32_t>(8), 0u);
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_0895C8C8;
      }
      goto L_0895C8B8;
    }
L_0895C8B8:
    ctx.set_gpr(5, 0u + 0u);
    ctx.set_gpr(6, 0u + static_cast<std::uint32_t>(1));
    ctx.set_gpr(31, 0x0895C8C8u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0066_entry, 66u, 795u, 0x0890FB1Cu>(ctx, &aot_mem) && ctx.pc == 0x0895C8C8u) goto L_0895C8C8;
    return;
L_0895C8C8:
    ctx.set_gpr(4, rt.memory().aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(16)));
    ctx.set_gpr(3, rt.memory().aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(8)));
    { const bool branch_taken = static_cast<std::int32_t>(ctx.gpr[3]) > 0;
    // nop
      if (branch_taken) {
          goto L_0895C8E8;
      }
      goto L_0895C8D8;
    }
L_0895C8D8:
    ctx.set_gpr(5, 0u + 0u);
    ctx.set_gpr(6, 0u + static_cast<std::uint32_t>(1));
    ctx.set_gpr(31, 0x0895C8E8u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0066_entry, 66u, 785u, 0x0890FA2Cu>(ctx, &aot_mem) && ctx.pc == 0x0895C8E8u) goto L_0895C8E8;
    return;
L_0895C8E8:
    ctx.set_gpr(4, rt.memory().aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(20)));
    { const bool branch_taken = ctx.gpr[4] == 0u;
    // nop
      if (branch_taken) {
          goto L_0895C93C;
      }
      goto L_0895C8F4;
    }
L_0895C8F4:
    ctx.set_gpr(3, rt.memory().aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(12)));
    { const bool branch_taken = static_cast<std::int32_t>(ctx.gpr[3]) < 0;
    // nop
      if (branch_taken) {
          goto L_0895C90C;
      }
      goto L_0895C900;
    }
L_0895C900:
    rt.memory().aot_store32(ctx.gpr[4] + static_cast<std::uint32_t>(8), 0u);
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_0895C91C;
      }
      goto L_0895C90C;
    }
L_0895C90C:
    ctx.set_gpr(5, 0u + 0u);
    ctx.set_gpr(6, 0u + static_cast<std::uint32_t>(4));
    ctx.set_gpr(31, 0x0895C91Cu);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0066_entry, 66u, 795u, 0x0890FB1Cu>(ctx, &aot_mem) && ctx.pc == 0x0895C91Cu) goto L_0895C91C;
    return;
L_0895C91C:
    ctx.set_gpr(4, rt.memory().aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(20)));
    ctx.set_gpr(3, rt.memory().aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(8)));
    { const bool branch_taken = static_cast<std::int32_t>(ctx.gpr[3]) > 0;
    // nop
      if (branch_taken) {
          goto L_0895C93C;
      }
      goto L_0895C92C;
    }
L_0895C92C:
    ctx.set_gpr(5, 0u + 0u);
    ctx.set_gpr(6, 0u + static_cast<std::uint32_t>(4));
    ctx.set_gpr(31, 0x0895C93Cu);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0066_entry, 66u, 785u, 0x0890FA2Cu>(ctx, &aot_mem) && ctx.pc == 0x0895C93Cu) goto L_0895C93C;
    return;
L_0895C93C:
    ctx.set_gpr(31, rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(12)));
    ctx.set_gpr(16, rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(8)));
    ctx.set_gpr(29, ctx.gpr[29] + static_cast<std::uint32_t>(16));
    jump_target = ctx.gpr[31];
    // nop
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_0895C950:
    ctx.set_gpr(29, ctx.gpr[29] + static_cast<std::uint32_t>(-16));
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(12), ctx.gpr[31]);
    ctx.set_gpr(5, 0u + 0u);
    ctx.set_gpr(31, 0x0895C964u);
    // nop
    goto L_0895C9CC;
L_0895C964:
    ctx.set_gpr(31, rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(12)));
    ctx.set_gpr(29, ctx.gpr[29] + static_cast<std::uint32_t>(16));
    jump_target = ctx.gpr[31];
    // nop
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_0895C974:
    ctx.set_gpr(2, rt.memory().aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(16)));
    ctx.set_gpr(6, rt.memory().aot_load32(ctx.gpr[2] + static_cast<std::uint32_t>(16)));
    ctx.set_gpr(4, rt.memory().aot_load32(ctx.gpr[2] + static_cast<std::uint32_t>(8)));
    ctx.set_gpr(2, 0u + 0u);
    { const bool branch_taken = ctx.gpr[6] != 0u;
    // nop
      if (branch_taken) {
          goto L_0895C994;
      }
      goto L_0895C98C;
    }
L_0895C98C:
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_0895C9C4;
      }
      goto L_0895C994;
    }
L_0895C994:
    ctx.set_gpr(5, 0u + 0u);
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_0895C9B8;
      }
      goto L_0895C9A0;
    }
L_0895C9A0:
    ctx.set_gpr(3, static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int8_t>(rt.memory().aot_load8(ctx.gpr[6] + static_cast<std::uint32_t>(0))))));
    { const bool branch_taken = ctx.gpr[3] != 0u;
    // nop
      if (branch_taken) {
          goto L_0895C9B0;
      }
      goto L_0895C9AC;
    }
L_0895C9AC:
    ctx.set_gpr(2, ctx.gpr[2] + static_cast<std::uint32_t>(1));
    goto L_0895C9B0;
L_0895C9B0:
    ctx.set_gpr(6, ctx.gpr[6] + static_cast<std::uint32_t>(1));
    ctx.set_gpr(5, ctx.gpr[5] + static_cast<std::uint32_t>(1));
    goto L_0895C9B8;
L_0895C9B8:
    ctx.set_gpr(3, static_cast<std::int32_t>(ctx.gpr[5]) < static_cast<std::int32_t>(ctx.gpr[4]) ? 1u : 0u);
    { const bool branch_taken = ctx.gpr[3] != 0u;
    // nop
      if (branch_taken) {
          goto L_0895C9A0;
      }
      goto L_0895C9C4;
    }
L_0895C9C4:
    jump_target = ctx.gpr[31];
    // nop
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_0895C9CC:
    ctx.set_gpr(29, ctx.gpr[29] + static_cast<std::uint32_t>(-16));
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(12), ctx.gpr[31]);
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(8), ctx.gpr[16]);
    ctx.set_gpr(16, ctx.gpr[4] + 0u);
    ctx.set_gpr(4, rt.memory().aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(16)));
    ctx.set_gpr(6, rt.memory().aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(16)));
    ctx.set_gpr(3, rt.memory().aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(8)));
    ctx.set_gpr(7, 0u + 0u);
    { const bool branch_taken = ctx.gpr[5] != 0u;
    // nop
      if (branch_taken) {
          goto L_0895CA40;
      }
      goto L_0895C9F4;
    }
L_0895C9F4:
    ctx.set_gpr(2, rt.memory().aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(12)));
    { const bool branch_taken = static_cast<std::int32_t>(ctx.gpr[2]) < 0;
    // nop
      if (branch_taken) {
          goto L_0895CA0C;
      }
      goto L_0895CA00;
    }
L_0895CA00:
    rt.memory().aot_store32(ctx.gpr[4] + static_cast<std::uint32_t>(8), 0u);
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_0895CA1C;
      }
      goto L_0895CA0C;
    }
L_0895CA0C:
    ctx.set_gpr(5, 0u + 0u);
    ctx.set_gpr(6, 0u + static_cast<std::uint32_t>(1));
    ctx.set_gpr(31, 0x0895CA1Cu);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0066_entry, 66u, 795u, 0x0890FB1Cu>(ctx, &aot_mem) && ctx.pc == 0x0895CA1Cu) goto L_0895CA1C;
    return;
L_0895CA1C:
    ctx.set_gpr(4, ctx.gpr[16] + 0u);
    ctx.set_gpr(5, rt.memory().aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(12)));
    ctx.set_gpr(25, rt.memory().aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(0)));
    ctx.set_gpr(25, rt.memory().aot_load32(ctx.gpr[25] + static_cast<std::uint32_t>(100)));
    jump_target = ctx.gpr[25];
    ctx.set_gpr(31, 0x0895CA34u);
    // nop
    ctx.pc = jump_target;
    if (rt.invoke_chained_call(ctx, &aot_mem) && ctx.pc == 0x0895CA34u) goto L_0895CA34;
    return;
L_0895CA34:
    ctx.set_gpr(2, 0u + 0u);
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_0895CAB8;
      }
      goto L_0895CA40;
    }
L_0895CA40:
    ctx.set_gpr(8, 0u + 0u);
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_0895CAA8;
      }
      goto L_0895CA4C;
    }
L_0895CA4C:
    ctx.set_gpr(2, static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int8_t>(rt.memory().aot_load8(ctx.gpr[6] + static_cast<std::uint32_t>(0))))));
    { const bool branch_taken = ctx.gpr[2] != 0u;
    // nop
      if (branch_taken) {
          goto L_0895CAA4;
      }
      goto L_0895CA58;
    }
L_0895CA58:
    ctx.set_gpr(7, ctx.gpr[7] + static_cast<std::uint32_t>(1));
    { const bool branch_taken = ctx.gpr[7] != ctx.gpr[5];
    // nop
      if (branch_taken) {
          goto L_0895CAA4;
      }
      goto L_0895CA64;
    }
L_0895CA64:
    ctx.set_gpr(5, ctx.gpr[8] + static_cast<std::uint32_t>(1));
    { const bool branch_taken = static_cast<std::int32_t>(ctx.gpr[5]) < 0;
    // nop
      if (branch_taken) {
          goto L_0895CA98;
      }
      goto L_0895CA70;
    }
L_0895CA70:
    ctx.set_gpr(2, rt.memory().aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(12)));
    ctx.set_gpr(1, static_cast<std::int32_t>(ctx.gpr[2]) < static_cast<std::int32_t>(ctx.gpr[5]) ? 1u : 0u);
    { const bool branch_taken = ctx.gpr[1] != 0u;
    // nop
      if (branch_taken) {
          goto L_0895CA8C;
      }
      goto L_0895CA80;
    }
L_0895CA80:
    rt.memory().aot_store32(ctx.gpr[4] + static_cast<std::uint32_t>(8), ctx.gpr[5]);
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_0895CA98;
      }
      goto L_0895CA8C;
    }
L_0895CA8C:
    ctx.set_gpr(6, 0u + static_cast<std::uint32_t>(1));
    ctx.set_gpr(31, 0x0895CA98u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0066_entry, 66u, 795u, 0x0890FB1Cu>(ctx, &aot_mem) && ctx.pc == 0x0895CA98u) goto L_0895CA98;
    return;
L_0895CA98:
    ctx.set_gpr(2, 0u + 0u);
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_0895CAB8;
      }
      goto L_0895CAA4;
    }
L_0895CAA4:
    ctx.set_gpr(8, ctx.gpr[8] + static_cast<std::uint32_t>(1));
    goto L_0895CAA8;
L_0895CAA8:
    ctx.set_gpr(2, static_cast<std::int32_t>(ctx.gpr[8]) < static_cast<std::int32_t>(ctx.gpr[3]) ? 1u : 0u);
    { const bool branch_taken = ctx.gpr[2] != 0u;
    // nop
      if (branch_taken) {
          goto L_0895CA4C;
      }
      goto L_0895CAB4;
    }
L_0895CAB4:
    ctx.set_gpr(2, 0u + static_cast<std::uint32_t>(1));
    goto L_0895CAB8;
L_0895CAB8:
    ctx.set_gpr(31, rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(12)));
    ctx.set_gpr(16, rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(8)));
    ctx.set_gpr(29, ctx.gpr[29] + static_cast<std::uint32_t>(16));
    jump_target = ctx.gpr[31];
    // nop
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_0895CACC:
    { const bool branch_taken = static_cast<std::int32_t>(ctx.gpr[5]) < 0;
    // nop
      if (branch_taken) {
          goto L_0895CAF4;
      }
      goto L_0895CAD4;
    }
L_0895CAD4:
    ctx.set_gpr(3, rt.memory().aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(16)));
    ctx.set_gpr(2, rt.memory().aot_load32(ctx.gpr[3] + static_cast<std::uint32_t>(8)));
    ctx.set_gpr(1, static_cast<std::int32_t>(ctx.gpr[5]) < static_cast<std::int32_t>(ctx.gpr[2]) ? 1u : 0u);
    { const bool branch_taken = ctx.gpr[1] == 0u;
    // nop
      if (branch_taken) {
          goto L_0895CAF4;
      }
      goto L_0895CAE8;
    }
L_0895CAE8:
    ctx.set_gpr(2, rt.memory().aot_load32(ctx.gpr[3] + static_cast<std::uint32_t>(16)));
    { const bool branch_taken = ctx.gpr[2] != 0u;
    // nop
      if (branch_taken) {
          goto L_0895CB00;
      }
      goto L_0895CAF4;
    }
L_0895CAF4:
    ctx.set_gpr(2, 0u + 0u);
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_0895CB1C;
      }
      goto L_0895CB00;
    }
L_0895CB00:
    ctx.set_gpr(2, ctx.gpr[2] + ctx.gpr[5]);
    { const bool branch_taken = static_cast<std::int32_t>(ctx.gpr[5]) <= 0;
    // nop
      if (branch_taken) {
          goto L_0895CB1C;
      }
      goto L_0895CB0C;
    }
L_0895CB0C:
    ctx.set_gpr(3, static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int8_t>(rt.memory().aot_load8(ctx.gpr[2] + static_cast<std::uint32_t>(-1))))));
    { const bool branch_taken = ctx.gpr[3] == 0u;
    // nop
      if (branch_taken) {
          goto L_0895CB1C;
      }
      goto L_0895CB18;
    }
L_0895CB18:
    ctx.set_gpr(2, 0u + 0u);
    goto L_0895CB1C;
L_0895CB1C:
    jump_target = ctx.gpr[31];
    // nop
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_0895CB24:
    ctx.set_gpr(29, ctx.gpr[29] + static_cast<std::uint32_t>(-32));
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(28), ctx.gpr[31]);
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(24), ctx.gpr[19]);
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(20), ctx.gpr[18]);
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(16), ctx.gpr[17]);
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(12), ctx.gpr[16]);
    ctx.set_gpr(19, ctx.gpr[4] + 0u);
    ctx.set_gpr(18, ctx.gpr[5] + 0u);
    ctx.set_gpr(4, ctx.gpr[18] + 0u);
    ctx.set_gpr(31, 0x0895CB50u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0004_entry, 4u, 508u, 0x08816764u>(ctx, &aot_mem) && ctx.pc == 0x0895CB50u) goto L_0895CB50;
    return;
L_0895CB50:
    ctx.set_gpr(17, ctx.gpr[2] + static_cast<std::uint32_t>(1));
    ctx.set_gpr(4, rt.memory().aot_load32(ctx.gpr[19] + static_cast<std::uint32_t>(16)));
    ctx.set_gpr(16, rt.memory().aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(8)));
    ctx.set_gpr(3, rt.memory().aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(12)));
    ctx.set_gpr(2, ctx.gpr[17] + ctx.gpr[16]);
    ctx.set_gpr(1, static_cast<std::int32_t>(ctx.gpr[3]) < static_cast<std::int32_t>(ctx.gpr[2]) ? 1u : 0u);
    { const bool branch_taken = ctx.gpr[1] == 0u;
    // nop
      if (branch_taken) {
          goto L_0895CB90;
      }
      goto L_0895CB70;
    }
L_0895CB70:
    ctx.set_gpr(5, ctx.gpr[3] << 1u);
    ctx.set_gpr(2, rt.memory().aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(8)));
    ctx.set_gpr(2, static_cast<std::int32_t>(ctx.gpr[5]) < static_cast<std::int32_t>(ctx.gpr[2]) ? 1u : 0u);
    { const bool branch_taken = ctx.gpr[2] != 0u;
    // nop
      if (branch_taken) {
          goto L_0895CB90;
      }
      goto L_0895CB84;
    }
L_0895CB84:
    ctx.set_gpr(6, 0u + static_cast<std::uint32_t>(1));
    ctx.set_gpr(31, 0x0895CB90u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0066_entry, 66u, 785u, 0x0890FA2Cu>(ctx, &aot_mem) && ctx.pc == 0x0895CB90u) goto L_0895CB90;
    return;
L_0895CB90:
    ctx.set_gpr(4, rt.memory().aot_load32(ctx.gpr[19] + static_cast<std::uint32_t>(16)));
    ctx.set_gpr(5, ctx.gpr[17] + 0u);
    ctx.set_gpr(6, ctx.gpr[18] + 0u);
    ctx.set_gpr(7, 0u + static_cast<std::uint32_t>(1));
    ctx.set_gpr(31, 0x0895CBA8u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0066_entry, 66u, 820u, 0x0890FD44u>(ctx, &aot_mem) && ctx.pc == 0x0895CBA8u) goto L_0895CBA8;
    return;
L_0895CBA8:
    ctx.set_gpr(2, rt.memory().aot_load32(ctx.gpr[19] + static_cast<std::uint32_t>(20)));
    { const bool branch_taken = ctx.gpr[2] == 0u;
    // nop
      if (branch_taken) {
          goto L_0895CBE4;
      }
      goto L_0895CBB4;
    }
L_0895CBB4:
    ctx.set_gpr(2, rt.memory().aot_load32(ctx.gpr[2] + static_cast<std::uint32_t>(8)));
    { const bool branch_taken = ctx.gpr[2] == 0u;
    // nop
      if (branch_taken) {
          goto L_0895CBE4;
      }
      goto L_0895CBC0;
    }
L_0895CBC0:
    ctx.set_gpr(2, rt.memory().aot_load32(ctx.gpr[19] + static_cast<std::uint32_t>(16)));
    ctx.set_gpr(2, rt.memory().aot_load32(ctx.gpr[2] + static_cast<std::uint32_t>(16)));
    ctx.set_gpr(5, ctx.gpr[2] + ctx.gpr[16]);
    ctx.set_gpr(4, ctx.gpr[19] + 0u);
    ctx.set_gpr(6, ctx.gpr[16] + 0u);
    ctx.set_gpr(25, rt.memory().aot_load32(ctx.gpr[19] + static_cast<std::uint32_t>(0)));
    ctx.set_gpr(25, rt.memory().aot_load32(ctx.gpr[25] + static_cast<std::uint32_t>(96)));
    jump_target = ctx.gpr[25];
    ctx.set_gpr(31, 0x0895CBE4u);
    // nop
    ctx.pc = jump_target;
    if (rt.invoke_chained_call(ctx, &aot_mem) && ctx.pc == 0x0895CBE4u) goto L_0895CBE4;
    return;
L_0895CBE4:
    ctx.set_gpr(2, ctx.gpr[16] + 0u);
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
L_0895CC08:
    ctx.set_gpr(29, ctx.gpr[29] + static_cast<std::uint32_t>(-16));
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(12), ctx.gpr[31]);
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(8), ctx.gpr[17]);
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(4), ctx.gpr[16]);
    ctx.set_gpr(17, ctx.gpr[4] + 0u);
    ctx.set_gpr(16, ctx.gpr[5] + 0u);
    ctx.set_gpr(31, 0x0895CC28u);
    // nop
    goto L_0895CC64;
L_0895CC28:
    ctx.set_gpr(3, 0u + static_cast<std::uint32_t>(-1));
    { const bool branch_taken = ctx.gpr[2] == ctx.gpr[3];
    // nop
      if (branch_taken) {
          goto L_0895CC3C;
      }
      goto L_0895CC34;
    }
L_0895CC34:
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_0895CC4C;
      }
      goto L_0895CC3C;
    }
L_0895CC3C:
    ctx.set_gpr(4, ctx.gpr[17] + 0u);
    ctx.set_gpr(5, ctx.gpr[16] + 0u);
    ctx.set_gpr(31, 0x0895CC4Cu);
    // nop
    goto L_0895CB24;
L_0895CC4C:
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
L_0895CC64:
    ctx.set_gpr(29, ctx.gpr[29] + static_cast<std::uint32_t>(-32));
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(28), ctx.gpr[31]);
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(24), ctx.gpr[21]);
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(20), ctx.gpr[20]);
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(16), ctx.gpr[19]);
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(12), ctx.gpr[18]);
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(8), ctx.gpr[17]);
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(4), ctx.gpr[16]);
    ctx.set_gpr(17, ctx.gpr[4] + 0u);
    ctx.set_gpr(16, ctx.gpr[5] + 0u);
    ctx.set_gpr(2, rt.memory().aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(20)));
    { const bool branch_taken = ctx.gpr[2] == 0u;
    // nop
      if (branch_taken) {
          goto L_0895CD48;
      }
      goto L_0895CC98;
    }
L_0895CC98:
    ctx.set_gpr(2, rt.memory().aot_load32(ctx.gpr[2] + static_cast<std::uint32_t>(8)));
    { const bool branch_taken = ctx.gpr[2] == 0u;
    // nop
      if (branch_taken) {
          goto L_0895CD48;
      }
      goto L_0895CCA4;
    }
L_0895CCA4:
    ctx.set_gpr(25, rt.memory().aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(0)));
    ctx.set_gpr(25, rt.memory().aot_load32(ctx.gpr[25] + static_cast<std::uint32_t>(92)));
    jump_target = ctx.gpr[25];
    ctx.set_gpr(31, 0x0895CCB4u);
    // nop
    ctx.pc = jump_target;
    if (rt.invoke_chained_call(ctx, &aot_mem) && ctx.pc == 0x0895CCB4u) goto L_0895CCB4;
    return;
L_0895CCB4:
    ctx.set_gpr(21, ctx.gpr[2] + 0u);
    ctx.set_gpr(2, rt.memory().aot_load32(ctx.gpr[17] + static_cast<std::uint32_t>(20)));
    ctx.set_gpr(18, rt.memory().aot_load32(ctx.gpr[2] + static_cast<std::uint32_t>(8)));
    ctx.set_gpr(19, 0u + 0u);
    goto L_0895CCC4;
L_0895CCC4:
    ctx.set_gpr(2, rt.memory().aot_load32(ctx.gpr[17] + static_cast<std::uint32_t>(20)));
    ctx.set_gpr(3, ctx.gpr[21] << 2u);
    ctx.set_gpr(2, rt.memory().aot_load32(ctx.gpr[2] + static_cast<std::uint32_t>(16)));
    ctx.set_gpr(2, ctx.gpr[2] + ctx.gpr[3]);
    ctx.set_gpr(20, rt.memory().aot_load32(ctx.gpr[2] + static_cast<std::uint32_t>(0)));
    ctx.set_gpr(2, 0u + static_cast<std::uint32_t>(-1));
    { const bool branch_taken = ctx.gpr[20] != ctx.gpr[2];
    // nop
      if (branch_taken) {
          goto L_0895CCEC;
      }
      goto L_0895CCE4;
    }
L_0895CCE4:
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_0895CDB0;
      }
      goto L_0895CCEC;
    }
L_0895CCEC:
    ctx.set_gpr(2, rt.memory().aot_load32(ctx.gpr[17] + static_cast<std::uint32_t>(16)));
    ctx.set_gpr(2, rt.memory().aot_load32(ctx.gpr[2] + static_cast<std::uint32_t>(16)));
    ctx.set_gpr(4, ctx.gpr[2] + ctx.gpr[20]);
    ctx.set_gpr(5, ctx.gpr[16] + 0u);
    ctx.set_gpr(31, 0x0895CD04u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0004_entry, 4u, 480u, 0x08816610u>(ctx, &aot_mem) && ctx.pc == 0x0895CD04u) goto L_0895CD04;
    return;
L_0895CD04:
    { const bool branch_taken = ctx.gpr[2] != 0u;
    // nop
      if (branch_taken) {
          goto L_0895CD18;
      }
      goto L_0895CD0C;
    }
L_0895CD0C:
    ctx.set_gpr(2, ctx.gpr[20] + 0u);
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_0895CDB0;
      }
      goto L_0895CD18;
    }
L_0895CD18:
    ctx.set_gpr(21, ctx.gpr[21] + static_cast<std::uint32_t>(1));
    ctx.set_gpr(2, static_cast<std::int32_t>(ctx.gpr[21]) < static_cast<std::int32_t>(ctx.gpr[18]) ? 1u : 0u);
    { const bool branch_taken = ctx.gpr[2] != 0u;
    // nop
      if (branch_taken) {
          goto L_0895CD2C;
      }
      goto L_0895CD28;
    }
L_0895CD28:
    ctx.set_gpr(21, 0u + 0u);
    goto L_0895CD2C;
L_0895CD2C:
    ctx.set_gpr(19, ctx.gpr[19] + static_cast<std::uint32_t>(1));
    ctx.set_gpr(2, static_cast<std::int32_t>(ctx.gpr[19]) < static_cast<std::int32_t>(ctx.gpr[18]) ? 1u : 0u);
    { const bool branch_taken = ctx.gpr[2] != 0u;
    // nop
      if (branch_taken) {
          goto L_0895CCC4;
      }
      goto L_0895CD3C;
    }
L_0895CD3C:
    ctx.set_gpr(2, 0u + static_cast<std::uint32_t>(-1));
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_0895CDB0;
      }
      goto L_0895CD48;
    }
L_0895CD48:
    ctx.set_gpr(3, rt.memory().aot_load32(ctx.gpr[17] + static_cast<std::uint32_t>(16)));
    ctx.set_gpr(2, rt.memory().aot_load32(ctx.gpr[3] + static_cast<std::uint32_t>(8)));
    ctx.set_gpr(18, rt.memory().aot_load32(ctx.gpr[3] + static_cast<std::uint32_t>(16)));
    ctx.set_gpr(19, ctx.gpr[18] + ctx.gpr[2]);
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_0895CDA0;
      }
      goto L_0895CD60;
    }
L_0895CD60:
    ctx.set_gpr(4, ctx.gpr[16] + 0u);
    ctx.set_gpr(5, ctx.gpr[18] + 0u);
    ctx.set_gpr(31, 0x0895CD70u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0004_entry, 4u, 480u, 0x08816610u>(ctx, &aot_mem) && ctx.pc == 0x0895CD70u) goto L_0895CD70;
    return;
L_0895CD70:
    { const bool branch_taken = ctx.gpr[2] != 0u;
    // nop
      if (branch_taken) {
          goto L_0895CD8C;
      }
      goto L_0895CD78;
    }
L_0895CD78:
    ctx.set_gpr(2, rt.memory().aot_load32(ctx.gpr[17] + static_cast<std::uint32_t>(16)));
    ctx.set_gpr(2, rt.memory().aot_load32(ctx.gpr[2] + static_cast<std::uint32_t>(16)));
    ctx.set_gpr(2, ctx.gpr[18] - ctx.gpr[2]);
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_0895CDB0;
      }
      goto L_0895CD8C;
    }
L_0895CD8C:
    ctx.set_gpr(4, ctx.gpr[18] + 0u);
    ctx.set_gpr(31, 0x0895CD98u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0004_entry, 4u, 508u, 0x08816764u>(ctx, &aot_mem) && ctx.pc == 0x0895CD98u) goto L_0895CD98;
    return;
L_0895CD98:
    ctx.set_gpr(2, ctx.gpr[2] + static_cast<std::uint32_t>(1));
    ctx.set_gpr(18, ctx.gpr[18] + ctx.gpr[2]);
    goto L_0895CDA0;
L_0895CDA0:
    ctx.set_gpr(2, ctx.gpr[18] < ctx.gpr[19] ? 1u : 0u);
    { const bool branch_taken = ctx.gpr[2] != 0u;
    // nop
      if (branch_taken) {
          goto L_0895CD60;
      }
      goto L_0895CDAC;
    }
L_0895CDAC:
    ctx.set_gpr(2, 0u + static_cast<std::uint32_t>(-1));
    goto L_0895CDB0;
L_0895CDB0:
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
L_0895CDD8:
    ctx.set_gpr(3, rt.memory().aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(16)));
    ctx.set_gpr(2, rt.memory().aot_load32(ctx.gpr[3] + static_cast<std::uint32_t>(16)));
    ctx.set_gpr(4, ctx.gpr[2] + ctx.gpr[5]);
    ctx.set_gpr(3, rt.memory().aot_load32(ctx.gpr[3] + static_cast<std::uint32_t>(8)));
    { const bool branch_taken = ctx.gpr[4] == 0u;
    // nop
      if (branch_taken) {
          goto L_0895CDF8;
      }
      goto L_0895CDF0;
    }
L_0895CDF0:
    { const bool branch_taken = static_cast<std::int32_t>(ctx.gpr[5]) >= 0;
    // nop
      if (branch_taken) {
          goto L_0895CE30;
      }
      goto L_0895CDF8;
    }
L_0895CDF8:
    ctx.set_gpr(2, 0u + static_cast<std::uint32_t>(-1));
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_0895CE40;
      }
      goto L_0895CE04;
    }
L_0895CE04:
    ctx.set_gpr(5, ctx.gpr[5] + static_cast<std::uint32_t>(1));
    ctx.set_gpr(2, static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int8_t>(rt.memory().aot_load8(ctx.gpr[4] + static_cast<std::uint32_t>(0))))));
    { const bool branch_taken = ctx.gpr[2] != 0u;
    // nop
      if (branch_taken) {
          goto L_0895CE2C;
      }
      goto L_0895CE14;
    }
L_0895CE14:
    ctx.set_gpr(1, static_cast<std::int32_t>(ctx.gpr[5]) < static_cast<std::int32_t>(ctx.gpr[3]) ? 1u : 0u);
    { const bool branch_taken = ctx.gpr[1] == 0u;
    // nop
      if (branch_taken) {
          goto L_0895CE3C;
      }
      goto L_0895CE20;
    }
L_0895CE20:
    ctx.set_gpr(2, ctx.gpr[5] + 0u);
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_0895CE40;
      }
      goto L_0895CE2C;
    }
L_0895CE2C:
    ctx.set_gpr(4, ctx.gpr[4] + static_cast<std::uint32_t>(1));
    goto L_0895CE30;
L_0895CE30:
    ctx.set_gpr(2, static_cast<std::int32_t>(ctx.gpr[5]) < static_cast<std::int32_t>(ctx.gpr[3]) ? 1u : 0u);
    { const bool branch_taken = ctx.gpr[2] != 0u;
    // nop
      if (branch_taken) {
          goto L_0895CE04;
      }
      goto L_0895CE3C;
    }
L_0895CE3C:
    ctx.set_gpr(2, 0u + static_cast<std::uint32_t>(-1));
    goto L_0895CE40;
L_0895CE40:
    jump_target = ctx.gpr[31];
    // nop
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_0895CE48:
    ctx.set_gpr(7, 0u + 0u);
    ctx.set_gpr(2, rt.memory().aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(20)));
    { const bool branch_taken = ctx.gpr[2] == 0u;
    // nop
      if (branch_taken) {
          goto L_0895CE64;
      }
      goto L_0895CE58;
    }
L_0895CE58:
    ctx.set_gpr(6, rt.memory().aot_load32(ctx.gpr[2] + static_cast<std::uint32_t>(8)));
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_0895CE68;
      }
      goto L_0895CE64;
    }
L_0895CE64:
    ctx.set_gpr(6, 0u + 0u);
    goto L_0895CE68;
L_0895CE68:
    { const bool branch_taken = ctx.gpr[5] == 0u;
    // nop
      if (branch_taken) {
          goto L_0895CEB8;
      }
      goto L_0895CE70;
    }
L_0895CE70:
    { const bool branch_taken = ctx.gpr[6] == 0u;
    // nop
      if (branch_taken) {
          goto L_0895CEB8;
      }
      goto L_0895CE78;
    }
L_0895CE78:
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_0895CE9C;
      }
      goto L_0895CE80;
    }
L_0895CE80:
    ctx.set_gpr(4, ctx.gpr[7] << 5u);
    ctx.set_gpr(3, ctx.gpr[7] >> 2u);
    ctx.set_gpr(3, ctx.gpr[4] + ctx.gpr[3]);
    ctx.set_gpr(2, static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int8_t>(ctx.gpr[2]))));
    ctx.set_gpr(2, ctx.gpr[2] + ctx.gpr[3]);
    ctx.set_gpr(7, ctx.gpr[7] ^ ctx.gpr[2]);
    ctx.set_gpr(5, ctx.gpr[5] + static_cast<std::uint32_t>(1));
    goto L_0895CE9C;
L_0895CE9C:
    ctx.set_gpr(2, static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int8_t>(rt.memory().aot_load8(ctx.gpr[5] + static_cast<std::uint32_t>(0))))));
    { const bool branch_taken = ctx.gpr[2] != 0u;
    // nop
      if (branch_taken) {
          goto L_0895CE80;
      }
      goto L_0895CEA8;
    }
L_0895CEA8:
    { const std::uint32_t dividend = ctx.gpr[7]; const std::uint32_t divisor = ctx.gpr[6]; if (divisor == 0u) { ctx.lo = 0xFFFFFFFFu; ctx.hi = dividend; } else { ctx.lo = dividend / divisor; ctx.hi = dividend % divisor; } }
    ctx.set_gpr(2, ctx.hi);
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_0895CEBC;
      }
      goto L_0895CEB8;
    }
L_0895CEB8:
    ctx.set_gpr(2, 0u + 0u);
    goto L_0895CEBC;
L_0895CEBC:
    jump_target = ctx.gpr[31];
    // nop
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_0895CEC4:
    ctx.set_gpr(29, ctx.gpr[29] + static_cast<std::uint32_t>(-32));
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(28), ctx.gpr[31]);
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(24), ctx.gpr[20]);
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(20), ctx.gpr[19]);
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(16), ctx.gpr[18]);
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(12), ctx.gpr[17]);
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(8), ctx.gpr[16]);
    ctx.set_gpr(20, ctx.gpr[4] + 0u);
    ctx.set_gpr(19, ctx.gpr[6] + 0u);
    ctx.set_gpr(18, 0u + 0u);
    ctx.set_gpr(2, rt.memory().aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(20)));
    ctx.set_gpr(17, rt.memory().aot_load32(ctx.gpr[2] + static_cast<std::uint32_t>(8)));
    ctx.set_gpr(16, static_cast<std::uint32_t>(static_cast<std::int32_t>(ctx.gpr[17]) >> 1u));
    { const bool branch_taken = static_cast<std::int32_t>(ctx.gpr[17]) >= 0;
    // nop
      if (branch_taken) {
          goto L_0895CF08;
      }
      goto L_0895CF00;
    }
L_0895CF00:
    ctx.set_gpr(2, ctx.gpr[17] + static_cast<std::uint32_t>(1));
    ctx.set_gpr(16, static_cast<std::uint32_t>(static_cast<std::int32_t>(ctx.gpr[2]) >> 1u));
    goto L_0895CF08;
L_0895CF08:
    { const bool branch_taken = ctx.gpr[17] == 0u;
    // nop
      if (branch_taken) {
          goto L_0895CFB8;
      }
      goto L_0895CF10;
    }
L_0895CF10:
    ctx.set_gpr(4, ctx.gpr[20] + 0u);
    ctx.set_gpr(25, rt.memory().aot_load32(ctx.gpr[20] + static_cast<std::uint32_t>(0)));
    ctx.set_gpr(25, rt.memory().aot_load32(ctx.gpr[25] + static_cast<std::uint32_t>(92)));
    jump_target = ctx.gpr[25];
    ctx.set_gpr(31, 0x0895CF24u);
    // nop
    ctx.pc = jump_target;
    if (rt.invoke_chained_call(ctx, &aot_mem) && ctx.pc == 0x0895CF24u) goto L_0895CF24;
    return;
L_0895CF24:
    ctx.set_gpr(6, rt.memory().aot_load32(ctx.gpr[20] + static_cast<std::uint32_t>(20)));
    ctx.set_gpr(4, ctx.gpr[2] << 2u);
    ctx.set_gpr(3, rt.memory().aot_load32(ctx.gpr[6] + static_cast<std::uint32_t>(16)));
    ctx.set_gpr(5, ctx.gpr[3] + ctx.gpr[4]);
    ctx.set_gpr(4, rt.memory().aot_load32(ctx.gpr[5] + static_cast<std::uint32_t>(0)));
    ctx.set_gpr(3, 0u + static_cast<std::uint32_t>(-1));
    { const bool branch_taken = ctx.gpr[4] != ctx.gpr[3];
    // nop
      if (branch_taken) {
          goto L_0895CF70;
      }
      goto L_0895CF44;
    }
L_0895CF44:
    ctx.set_gpr(3, rt.memory().aot_load32(ctx.gpr[6] + static_cast<std::uint32_t>(8)));
    { const bool branch_taken = ctx.gpr[3] == 0u;
    // nop
      if (branch_taken) {
          goto L_0895CFB8;
      }
      goto L_0895CF50;
    }
L_0895CF50:
    { const bool branch_taken = static_cast<std::int32_t>(ctx.gpr[2]) < 0;
    // nop
      if (branch_taken) {
          goto L_0895CFB8;
      }
      goto L_0895CF58;
    }
L_0895CF58:
    ctx.set_gpr(1, static_cast<std::int32_t>(ctx.gpr[2]) < static_cast<std::int32_t>(ctx.gpr[3]) ? 1u : 0u);
    { const bool branch_taken = ctx.gpr[1] == 0u;
    // nop
      if (branch_taken) {
          goto L_0895CFB8;
      }
      goto L_0895CF64;
    }
L_0895CF64:
    rt.memory().aot_store32(ctx.gpr[5] + static_cast<std::uint32_t>(0), ctx.gpr[19]);
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_0895CFB8;
      }
      goto L_0895CF70;
    }
L_0895CF70:
    ctx.set_gpr(2, ctx.gpr[2] + static_cast<std::uint32_t>(1));
    ctx.set_gpr(3, static_cast<std::int32_t>(ctx.gpr[2]) < static_cast<std::int32_t>(ctx.gpr[17]) ? 1u : 0u);
    { const bool branch_taken = ctx.gpr[3] != 0u;
    // nop
      if (branch_taken) {
          goto L_0895CF84;
      }
      goto L_0895CF80;
    }
L_0895CF80:
    ctx.set_gpr(2, 0u + 0u);
    goto L_0895CF84;
L_0895CF84:
    ctx.set_gpr(18, ctx.gpr[18] + static_cast<std::uint32_t>(1));
    ctx.set_gpr(3, static_cast<std::int32_t>(ctx.gpr[18]) < static_cast<std::int32_t>(ctx.gpr[16]) ? 1u : 0u);
    { const bool branch_taken = ctx.gpr[3] != 0u;
    // nop
      if (branch_taken) {
          goto L_0895CF24;
      }
      goto L_0895CF94;
    }
L_0895CF94:
    ctx.set_gpr(5, ctx.gpr[17] << 1u);
    ctx.set_gpr(4, ctx.gpr[20] + 0u);
    ctx.set_gpr(25, rt.memory().aot_load32(ctx.gpr[20] + static_cast<std::uint32_t>(0)));
    ctx.set_gpr(25, rt.memory().aot_load32(ctx.gpr[25] + static_cast<std::uint32_t>(100)));
    jump_target = ctx.gpr[25];
    ctx.set_gpr(31, 0x0895CFACu);
    // nop
    ctx.pc = jump_target;
    if (rt.invoke_chained_call(ctx, &aot_mem) && ctx.pc == 0x0895CFACu) goto L_0895CFAC;
    return;
L_0895CFAC:
    ctx.set_gpr(2, 0u + 0u);
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_0895CFBC;
      }
      goto L_0895CFB8;
    }
L_0895CFB8:
    ctx.set_gpr(2, 0u + static_cast<std::uint32_t>(1));
    goto L_0895CFBC;
L_0895CFBC:
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
L_0895CFE0:
    ctx.set_gpr(29, ctx.gpr[29] + static_cast<std::uint32_t>(-32));
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(28), ctx.gpr[31]);
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(24), ctx.gpr[19]);
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(20), ctx.gpr[18]);
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(16), ctx.gpr[17]);
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(12), ctx.gpr[16]);
    ctx.set_gpr(16, ctx.gpr[4] + 0u);
    ctx.set_gpr(17, ctx.gpr[5] + 0u);
    ctx.set_gpr(31, 0x0895D008u);
    // nop
    goto L_0895C820;
L_0895D008:
    { const bool branch_taken = ctx.gpr[17] == 0u;
    // nop
      if (branch_taken) {
          goto L_0895D144;
      }
      goto L_0895D010;
    }
L_0895D010:
    ctx.set_gpr(3, rt.memory().aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(20)));
    { const bool branch_taken = ctx.gpr[3] != 0u;
    // nop
      if (branch_taken) {
          goto L_0895D044;
      }
      goto L_0895D01C;
    }
L_0895D01C:
    ctx.set_gpr(4, ctx.gpr[16] + 0u);
    ctx.set_gpr(31, 0x0895D028u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0081_entry, 81u, 41u, 0x0894835Cu>(ctx, &aot_mem) && ctx.pc == 0x0895D028u) goto L_0895D028;
    return;
L_0895D028:
    ctx.set_gpr(4, ctx.gpr[2] + 0u);
    ctx.set_gpr(31, 0x0895D034u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0060_entry, 60u, 516u, 0x088F6B60u>(ctx, &aot_mem) && ctx.pc == 0x0895D034u) goto L_0895D034;
    return;
L_0895D034:
    ctx.set_gpr(4, ctx.gpr[16] + static_cast<std::uint32_t>(20));
    ctx.set_gpr(5, ctx.gpr[2] + 0u);
    ctx.set_gpr(31, 0x0895D044u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0085_entry, 85u, 67u, 0x0895853Cu>(ctx, &aot_mem) && ctx.pc == 0x0895D044u) goto L_0895D044;
    return;
L_0895D044:
    ctx.set_gpr(4, rt.memory().aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(20)));
    { const bool branch_taken = static_cast<std::int32_t>(ctx.gpr[17]) < 0;
    // nop
      if (branch_taken) {
          goto L_0895D07C;
      }
      goto L_0895D050;
    }
L_0895D050:
    ctx.set_gpr(3, rt.memory().aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(12)));
    ctx.set_gpr(1, static_cast<std::int32_t>(ctx.gpr[3]) < static_cast<std::int32_t>(ctx.gpr[17]) ? 1u : 0u);
    { const bool branch_taken = ctx.gpr[1] != 0u;
    // nop
      if (branch_taken) {
          goto L_0895D06C;
      }
      goto L_0895D060;
    }
L_0895D060:
    rt.memory().aot_store32(ctx.gpr[4] + static_cast<std::uint32_t>(8), ctx.gpr[17]);
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_0895D07C;
      }
      goto L_0895D06C;
    }
L_0895D06C:
    ctx.set_gpr(5, ctx.gpr[17] + 0u);
    ctx.set_gpr(6, 0u + static_cast<std::uint32_t>(4));
    ctx.set_gpr(31, 0x0895D07Cu);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0066_entry, 66u, 795u, 0x0890FB1Cu>(ctx, &aot_mem) && ctx.pc == 0x0895D07Cu) goto L_0895D07C;
    return;
L_0895D07C:
    ctx.set_gpr(4, rt.memory().aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(20)));
    ctx.set_gpr(3, rt.memory().aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(8)));
    ctx.set_gpr(3, static_cast<std::int32_t>(ctx.gpr[17]) < static_cast<std::int32_t>(ctx.gpr[3]) ? 1u : 0u);
    { const bool branch_taken = ctx.gpr[3] != 0u;
    // nop
      if (branch_taken) {
          goto L_0895D0A0;
      }
      goto L_0895D090;
    }
L_0895D090:
    ctx.set_gpr(5, ctx.gpr[17] + 0u);
    ctx.set_gpr(6, 0u + static_cast<std::uint32_t>(4));
    ctx.set_gpr(31, 0x0895D0A0u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0066_entry, 66u, 785u, 0x0890FA2Cu>(ctx, &aot_mem) && ctx.pc == 0x0895D0A0u) goto L_0895D0A0;
    return;
L_0895D0A0:
    ctx.set_gpr(3, rt.memory().aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(20)));
    ctx.set_gpr(6, rt.memory().aot_load32(ctx.gpr[3] + static_cast<std::uint32_t>(8)));
    ctx.set_gpr(5, rt.memory().aot_load32(ctx.gpr[3] + static_cast<std::uint32_t>(16)));
    ctx.set_gpr(7, 0u + 0u);
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_0895D0D0;
      }
      goto L_0895D0B8;
    }
L_0895D0B8:
    ctx.set_gpr(3, 2228u << 16u);
    ctx.set_gpr(4, rt.memory().aot_load32(ctx.gpr[3] + static_cast<std::uint32_t>(-1348)));
    ctx.set_gpr(3, ctx.gpr[7] << 2u);
    ctx.set_gpr(3, ctx.gpr[5] + ctx.gpr[3]);
    rt.memory().aot_store32(ctx.gpr[3] + static_cast<std::uint32_t>(0), ctx.gpr[4]);
    ctx.set_gpr(7, ctx.gpr[7] + static_cast<std::uint32_t>(1));
    goto L_0895D0D0;
L_0895D0D0:
    ctx.set_gpr(3, static_cast<std::int32_t>(ctx.gpr[7]) < static_cast<std::int32_t>(ctx.gpr[6]) ? 1u : 0u);
    { const bool branch_taken = ctx.gpr[3] != 0u;
    // nop
      if (branch_taken) {
          goto L_0895D0B8;
      }
      goto L_0895D0DC;
    }
L_0895D0DC:
    ctx.set_gpr(4, rt.memory().aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(16)));
    ctx.set_gpr(3, rt.memory().aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(8)));
    ctx.set_gpr(18, rt.memory().aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(16)));
    ctx.set_gpr(17, ctx.gpr[18] + ctx.gpr[3]);
    ctx.set_gpr(19, ctx.gpr[18] + 0u);
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_0895D130;
      }
      goto L_0895D0F8;
    }
L_0895D0F8:
    ctx.set_gpr(6, ctx.gpr[19] - ctx.gpr[18]);
    ctx.set_gpr(4, ctx.gpr[16] + 0u);
    ctx.set_gpr(5, ctx.gpr[19] + 0u);
    ctx.set_gpr(25, rt.memory().aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(0)));
    ctx.set_gpr(25, rt.memory().aot_load32(ctx.gpr[25] + static_cast<std::uint32_t>(96)));
    jump_target = ctx.gpr[25];
    ctx.set_gpr(31, 0x0895D114u);
    // nop
    ctx.pc = jump_target;
    if (rt.invoke_chained_call(ctx, &aot_mem) && ctx.pc == 0x0895D114u) goto L_0895D114;
    return;
L_0895D114:
    { const bool branch_taken = ctx.gpr[2] == 0u;
    // nop
      if (branch_taken) {
          goto L_0895D160;
      }
      goto L_0895D11C;
    }
L_0895D11C:
    ctx.set_gpr(4, ctx.gpr[19] + 0u);
    ctx.set_gpr(31, 0x0895D128u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0004_entry, 4u, 508u, 0x08816764u>(ctx, &aot_mem) && ctx.pc == 0x0895D128u) goto L_0895D128;
    return;
L_0895D128:
    ctx.set_gpr(3, ctx.gpr[2] + static_cast<std::uint32_t>(1));
    ctx.set_gpr(19, ctx.gpr[19] + ctx.gpr[3]);
    goto L_0895D130;
L_0895D130:
    ctx.set_gpr(3, ctx.gpr[19] < ctx.gpr[17] ? 1u : 0u);
    { const bool branch_taken = ctx.gpr[3] != 0u;
    // nop
      if (branch_taken) {
          goto L_0895D0F8;
      }
      goto L_0895D13C;
    }
L_0895D13C:
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_0895D160;
      }
      goto L_0895D144;
    }
L_0895D144:
    ctx.set_gpr(3, rt.memory().aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(20)));
    { const bool branch_taken = ctx.gpr[3] == 0u;
    // nop
      if (branch_taken) {
          goto L_0895D160;
      }
      goto L_0895D150;
    }
L_0895D150:
    ctx.set_gpr(4, ctx.gpr[16] + static_cast<std::uint32_t>(20));
    ctx.set_gpr(5, 0u + 0u);
    ctx.set_gpr(31, 0x0895D160u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0085_entry, 85u, 61u, 0x089584C4u>(ctx, &aot_mem) && ctx.pc == 0x0895D160u) goto L_0895D160;
    return;
L_0895D160:
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
L_0895D180:
    ctx.set_gpr(2, rt.memory().aot_load16(ctx.gpr[4] + static_cast<std::uint32_t>(20)));
    jump_target = ctx.gpr[31];
    // nop
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_0895D18C:
    ctx.set_gpr(29, ctx.gpr[29] + static_cast<std::uint32_t>(-16));
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(12), ctx.gpr[31]);
    ctx.set_gpr(4, ctx.gpr[6] + 0u);
    ctx.set_gpr(31, 0x0895D1A0u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0004_entry, 4u, 508u, 0x08816764u>(ctx, &aot_mem) && ctx.pc == 0x0895D1A0u) goto L_0895D1A0;
    return;
L_0895D1A0:
    ctx.set_gpr(31, rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(12)));
    ctx.set_gpr(29, ctx.gpr[29] + static_cast<std::uint32_t>(16));
    jump_target = ctx.gpr[31];
    // nop
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_0895D1B0:
    ctx.set_gpr(29, ctx.gpr[29] + static_cast<std::uint32_t>(-16));
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(12), ctx.gpr[31]);
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(8), ctx.gpr[17]);
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(4), ctx.gpr[16]);
    ctx.set_gpr(16, ctx.gpr[4] + 0u);
    ctx.set_gpr(4, rt.memory().aot_load32(ctx.gpr[5] + static_cast<std::uint32_t>(12)));
    ctx.set_gpr(3, 0u + static_cast<std::uint32_t>(-2));
    ctx.set_gpr(17, ctx.gpr[4] & ctx.gpr[3]);
    { const bool branch_taken = ctx.gpr[17] != 0u;
    // nop
      if (branch_taken) {
          goto L_0895D1E4;
      }
      goto L_0895D1D8;
    }
L_0895D1D8:
    ctx.set_gpr(3, 0u + 0u);
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_0895D234;
      }
      goto L_0895D1E4;
    }
L_0895D1E4:
    ctx.set_gpr(2, 2245u << 16u);
    ctx.set_gpr(2, rt.memory().aot_load32(ctx.gpr[2] + static_cast<std::uint32_t>(30776)));
    { const bool branch_taken = ctx.gpr[2] != 0u;
    // nop
      if (branch_taken) {
          goto L_0895D21C;
      }
      goto L_0895D1F4;
    }
L_0895D1F4:
    ctx.set_gpr(4, 0u + static_cast<std::uint32_t>(16));
    ctx.set_gpr(31, 0x0895D200u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0072_entry, 72u, 788u, 0x089277A0u>(ctx, &aot_mem) && ctx.pc == 0x0895D200u) goto L_0895D200;
    return;
L_0895D200:
    { const bool branch_taken = ctx.gpr[2] == 0u;
    // nop
      if (branch_taken) {
          goto L_0895D214;
      }
      goto L_0895D208;
    }
L_0895D208:
    ctx.set_gpr(4, ctx.gpr[2] + 0u);
    ctx.set_gpr(31, 0x0895D214u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0072_entry, 72u, 762u, 0x089275E8u>(ctx, &aot_mem) && ctx.pc == 0x0895D214u) goto L_0895D214;
    return;
L_0895D214:
    ctx.set_gpr(3, 2245u << 16u);
    rt.memory().aot_store32(ctx.gpr[3] + static_cast<std::uint32_t>(30776), ctx.gpr[2]);
    goto L_0895D21C;
L_0895D21C:
    ctx.set_gpr(2, 2245u << 16u);
    ctx.set_gpr(4, rt.memory().aot_load32(ctx.gpr[2] + static_cast<std::uint32_t>(30776)));
    ctx.set_gpr(5, ctx.gpr[17] + 0u);
    ctx.set_gpr(31, 0x0895D230u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0072_entry, 72u, 784u, 0x08927768u>(ctx, &aot_mem) && ctx.pc == 0x0895D230u) goto L_0895D230;
    return;
L_0895D230:
    ctx.set_gpr(3, ctx.gpr[2] + 0u);
    goto L_0895D234;
L_0895D234:
    rt.memory().aot_store32(ctx.gpr[16] + static_cast<std::uint32_t>(0), ctx.gpr[3]);
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
L_0895D250:
    ctx.set_gpr(2, rt.memory().aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(48)));
    jump_target = ctx.gpr[31];
    // nop
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_0895D25C:
    ctx.set_gpr(29, ctx.gpr[29] + static_cast<std::uint32_t>(-16));
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(12), ctx.gpr[31]);
    ctx.set_gpr(3, rt.memory().aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(52)));
    { const bool branch_taken = ctx.gpr[3] == 0u;
    // nop
      if (branch_taken) {
          goto L_0895D288;
      }
      goto L_0895D270;
    }
L_0895D270:
    ctx.set_gpr(2, rt.memory().aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(8)));
    ctx.set_gpr(4, ctx.gpr[5] + ctx.gpr[2]);
    jump_target = ctx.gpr[3];
    ctx.set_gpr(31, 0x0895D280u);
    // nop
    ctx.pc = jump_target;
    if (rt.invoke_chained_call(ctx, &aot_mem) && ctx.pc == 0x0895D280u) goto L_0895D280;
    return;
L_0895D280:
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_0895D290;
      }
      goto L_0895D288;
    }
L_0895D288:
    ctx.set_gpr(31, 0x0895D290u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0079_entry, 79u, 780u, 0x089436B8u>(ctx, &aot_mem) && ctx.pc == 0x0895D290u) goto L_0895D290;
    return;
L_0895D290:
    ctx.set_gpr(31, rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(12)));
    ctx.set_gpr(29, ctx.gpr[29] + static_cast<std::uint32_t>(16));
    jump_target = ctx.gpr[31];
    // nop
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_0895D2A0:
    ctx.set_gpr(29, ctx.gpr[29] + static_cast<std::uint32_t>(-16));
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(12), ctx.gpr[31]);
    ctx.set_gpr(3, rt.memory().aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(56)));
    { const bool branch_taken = ctx.gpr[3] == 0u;
    // nop
      if (branch_taken) {
          goto L_0895D2CC;
      }
      goto L_0895D2B4;
    }
L_0895D2B4:
    ctx.set_gpr(2, rt.memory().aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(8)));
    ctx.set_gpr(4, ctx.gpr[5] + ctx.gpr[2]);
    jump_target = ctx.gpr[3];
    ctx.set_gpr(31, 0x0895D2C4u);
    // nop
    ctx.pc = jump_target;
    if (rt.invoke_chained_call(ctx, &aot_mem) && ctx.pc == 0x0895D2C4u) goto L_0895D2C4;
    return;
L_0895D2C4:
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_0895D2D4;
      }
      goto L_0895D2CC;
    }
L_0895D2CC:
    ctx.set_gpr(31, 0x0895D2D4u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0079_entry, 79u, 781u, 0x089436C0u>(ctx, &aot_mem) && ctx.pc == 0x0895D2D4u) goto L_0895D2D4;
    return;
L_0895D2D4:
    ctx.set_gpr(31, rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(12)));
    ctx.set_gpr(29, ctx.gpr[29] + static_cast<std::uint32_t>(16));
    jump_target = ctx.gpr[31];
    // nop
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_0895D2E4:
    ctx.set_gpr(29, ctx.gpr[29] + static_cast<std::uint32_t>(-16));
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(12), ctx.gpr[31]);
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(8), ctx.gpr[17]);
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(4), ctx.gpr[16]);
    ctx.set_gpr(17, ctx.gpr[4] + 0u);
    ctx.set_gpr(16, ctx.gpr[5] + 0u);
    ctx.set_gpr(2, rt.memory().aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(52)));
    { const bool branch_taken = ctx.gpr[2] == 0u;
    // nop
      if (branch_taken) {
          goto L_0895D338;
      }
      goto L_0895D308;
    }
L_0895D308:
    ctx.set_gpr(2, rt.memory().aot_load32(ctx.gpr[17] + static_cast<std::uint32_t>(8)));
    ctx.set_gpr(4, ctx.gpr[16] + ctx.gpr[2]);
    ctx.set_gpr(2, rt.memory().aot_load32(ctx.gpr[17] + static_cast<std::uint32_t>(56)));
    jump_target = ctx.gpr[2];
    ctx.set_gpr(31, 0x0895D31Cu);
    // nop
    ctx.pc = jump_target;
    if (rt.invoke_chained_call(ctx, &aot_mem) && ctx.pc == 0x0895D31Cu) goto L_0895D31C;
    return;
L_0895D31C:
    ctx.set_gpr(2, rt.memory().aot_load32(ctx.gpr[17] + static_cast<std::uint32_t>(8)));
    ctx.set_gpr(4, ctx.gpr[16] + ctx.gpr[2]);
    ctx.set_gpr(2, rt.memory().aot_load32(ctx.gpr[17] + static_cast<std::uint32_t>(52)));
    jump_target = ctx.gpr[2];
    ctx.set_gpr(31, 0x0895D330u);
    // nop
    ctx.pc = jump_target;
    if (rt.invoke_chained_call(ctx, &aot_mem) && ctx.pc == 0x0895D330u) goto L_0895D330;
    return;
L_0895D330:
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_0895D340;
      }
      goto L_0895D338;
    }
L_0895D338:
    ctx.set_gpr(31, 0x0895D340u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0079_entry, 79u, 588u, 0x08942940u>(ctx, &aot_mem) && ctx.pc == 0x0895D340u) goto L_0895D340;
    return;
L_0895D340:
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
L_0895D358:
    ctx.set_gpr(29, ctx.gpr[29] + static_cast<std::uint32_t>(-16));
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(12), ctx.gpr[31]);
    ctx.set_gpr(25, rt.memory().aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(0)));
    ctx.set_gpr(25, rt.memory().aot_load32(ctx.gpr[25] + static_cast<std::uint32_t>(116)));
    jump_target = ctx.gpr[25];
    ctx.set_gpr(31, 0x0895D370u);
    // nop
    ctx.pc = jump_target;
    if (rt.invoke_chained_call(ctx, &aot_mem) && ctx.pc == 0x0895D370u) goto L_0895D370;
    return;
L_0895D370:
    ctx.set_gpr(31, rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(12)));
    ctx.set_gpr(29, ctx.gpr[29] + static_cast<std::uint32_t>(16));
    jump_target = ctx.gpr[31];
    // nop
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_0895D380:
    ctx.set_gpr(2, rt.memory().aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(52)));
    ctx.set_gpr(2, 0u < ctx.gpr[2] ? 1u : 0u);
    jump_target = ctx.gpr[31];
    // nop
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_0895D390:
    rt.memory().aot_store32(ctx.gpr[4] + static_cast<std::uint32_t>(8), ctx.gpr[5]);
    jump_target = ctx.gpr[31];
    // nop
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_0895D39C:
    rt.memory().aot_store32(ctx.gpr[4] + static_cast<std::uint32_t>(12), ctx.gpr[5]);
    jump_target = ctx.gpr[31];
    // nop
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_0895D3A8:
    rt.memory().aot_store32(ctx.gpr[4] + static_cast<std::uint32_t>(16), ctx.gpr[5]);
    rt.memory().aot_store32(ctx.gpr[4] + static_cast<std::uint32_t>(20), ctx.gpr[6]);
    ctx.set_gpr(6, rt.memory().aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(12)));
    { const bool branch_taken = ctx.gpr[6] == 0u;
    // nop
      if (branch_taken) {
          goto L_0895D408;
      }
      goto L_0895D3BC;
    }
L_0895D3BC:
    ctx.set_gpr(5, rt.memory().aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(20)));
    ctx.set_gpr(3, rt.memory().aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(16)));
    ctx.set_gpr(3, ctx.gpr[5] - ctx.gpr[3]);
    { const std::uint32_t dividend = ctx.gpr[3]; const std::uint32_t divisor = ctx.gpr[6]; if (divisor == 0u) { ctx.lo = 0xFFFFFFFFu; ctx.hi = dividend; } else { ctx.lo = dividend / divisor; ctx.hi = dividend % divisor; } }
    ctx.set_gpr(3, ctx.lo);
    rt.memory().aot_store32(ctx.gpr[4] + static_cast<std::uint32_t>(24), ctx.gpr[3]);
    ctx.set_gpr(5, rt.memory().aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(20)));
    ctx.set_gpr(3, rt.memory().aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(16)));
    ctx.set_gpr(5, ctx.gpr[5] - ctx.gpr[3]);
    ctx.set_gpr(3, rt.memory().aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(12)));
    { const std::uint32_t dividend = ctx.gpr[5]; const std::uint32_t divisor = ctx.gpr[3]; if (divisor == 0u) { ctx.lo = 0xFFFFFFFFu; ctx.hi = dividend; } else { ctx.lo = dividend / divisor; ctx.hi = dividend % divisor; } }
    ctx.set_gpr(3, ctx.hi);
    { const bool branch_taken = ctx.gpr[3] == 0u;
    // nop
      if (branch_taken) {
          goto L_0895D410;
      }
      goto L_0895D3F4;
    }
L_0895D3F4:
    ctx.set_gpr(3, rt.memory().aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(24)));
    ctx.set_gpr(3, ctx.gpr[3] + static_cast<std::uint32_t>(1));
    rt.memory().aot_store32(ctx.gpr[4] + static_cast<std::uint32_t>(24), ctx.gpr[3]);
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_0895D410;
      }
      goto L_0895D408;
    }
L_0895D408:
    ctx.set_gpr(3, 0u + static_cast<std::uint32_t>(1));
    rt.memory().aot_store32(ctx.gpr[4] + static_cast<std::uint32_t>(24), ctx.gpr[3]);
    goto L_0895D410;
L_0895D410:
    jump_target = ctx.gpr[31];
    // nop
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_0895D418:
    ctx.set_gpr(29, ctx.gpr[29] + static_cast<std::uint32_t>(-16));
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(12), ctx.gpr[31]);
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(8), ctx.gpr[16]);
    ctx.set_gpr(16, ctx.gpr[4] + 0u);
    ctx.set_gpr(2, rt.memory().aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(8)));
    ctx.set_gpr(5, ctx.gpr[2] << 2u);
    ctx.set_gpr(4, rt.memory().aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(28)));
    ctx.set_gpr(2, rt.memory().aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(8)));
    ctx.set_gpr(2, static_cast<std::int32_t>(ctx.gpr[5]) < static_cast<std::int32_t>(ctx.gpr[2]) ? 1u : 0u);
    { const bool branch_taken = ctx.gpr[2] != 0u;
    // nop
      if (branch_taken) {
          goto L_0895D450;
      }
      goto L_0895D444;
    }
L_0895D444:
    ctx.set_gpr(6, 0u + static_cast<std::uint32_t>(4));
    ctx.set_gpr(31, 0x0895D450u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0066_entry, 66u, 785u, 0x0890FA2Cu>(ctx, &aot_mem) && ctx.pc == 0x0895D450u) goto L_0895D450;
    return;
L_0895D450:
    ctx.set_gpr(4, ctx.gpr[16] + 0u);
    ctx.set_gpr(5, rt.memory().aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(12)));
    ctx.set_gpr(25, rt.memory().aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(0)));
    ctx.set_gpr(25, rt.memory().aot_load32(ctx.gpr[25] + static_cast<std::uint32_t>(128)));
    jump_target = ctx.gpr[25];
    ctx.set_gpr(31, 0x0895D468u);
    // nop
    ctx.pc = jump_target;
    if (rt.invoke_chained_call(ctx, &aot_mem) && ctx.pc == 0x0895D468u) goto L_0895D468;
    return;
L_0895D468:
    ctx.set_gpr(4, rt.memory().aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(36)));
    ctx.set_gpr(2, rt.memory().aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(8)));
    ctx.set_gpr(5, ctx.gpr[2] << 2u);
    ctx.set_gpr(31, 0x0895D47Cu);
    // nop
    goto L_0895C814;
L_0895D47C:
    ctx.set_gpr(4, rt.memory().aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(36)));
    ctx.set_gpr(5, rt.memory().aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(8)));
    ctx.set_gpr(31, 0x0895D48Cu);
    // nop
    goto L_0895C820;
L_0895D48C:
    ctx.set_gpr(4, rt.memory().aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(36)));
    ctx.set_gpr(31, 0x0895D498u);
    // nop
    goto L_0895C82C;
L_0895D498:
    ctx.set_gpr(4, rt.memory().aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(40)));
    ctx.set_gpr(5, 0u + static_cast<std::uint32_t>(4096));
    ctx.set_gpr(31, 0x0895D4A8u);
    // nop
    goto L_0895C814;
L_0895D4A8:
    ctx.set_gpr(4, rt.memory().aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(40)));
    ctx.set_gpr(5, 0u + static_cast<std::uint32_t>(256));
    ctx.set_gpr(31, 0x0895D4B8u);
    // nop
    goto L_0895C820;
L_0895D4B8:
    ctx.set_gpr(4, rt.memory().aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(40)));
    ctx.set_gpr(31, 0x0895D4C4u);
    // nop
    goto L_0895C82C;
L_0895D4C4:
    ctx.set_gpr(31, rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(12)));
    ctx.set_gpr(16, rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(8)));
    ctx.set_gpr(29, ctx.gpr[29] + static_cast<std::uint32_t>(16));
    jump_target = ctx.gpr[31];
    // nop
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_0895D4D8:
    ctx.set_gpr(2, rt.memory().aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(28)));
    ctx.set_gpr(3, rt.memory().aot_load32(ctx.gpr[2] + static_cast<std::uint32_t>(8)));
    ctx.set_gpr(2, static_cast<std::uint32_t>(static_cast<std::int32_t>(ctx.gpr[3]) >> 2u));
    { const bool branch_taken = static_cast<std::int32_t>(ctx.gpr[3]) >= 0;
    // nop
      if (branch_taken) {
          goto L_0895D4F4;
      }
      goto L_0895D4EC;
    }
L_0895D4EC:
    ctx.set_gpr(2, ctx.gpr[3] + static_cast<std::uint32_t>(3));
    ctx.set_gpr(2, static_cast<std::uint32_t>(static_cast<std::int32_t>(ctx.gpr[2]) >> 2u));
    goto L_0895D4F4;
L_0895D4F4:
    jump_target = ctx.gpr[31];
    // nop
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_0895D4FC:
    ctx.set_gpr(29, ctx.gpr[29] + static_cast<std::uint32_t>(-16));
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(12), ctx.gpr[31]);
    ctx.set_gpr(4, rt.memory().aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(28)));
    ctx.set_gpr(5, ctx.gpr[5] << 2u);
    { const bool branch_taken = static_cast<std::int32_t>(ctx.gpr[5]) < 0;
    // nop
      if (branch_taken) {
          goto L_0895D53C;
      }
      goto L_0895D514;
    }
L_0895D514:
    ctx.set_gpr(2, rt.memory().aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(12)));
    ctx.set_gpr(1, static_cast<std::int32_t>(ctx.gpr[2]) < static_cast<std::int32_t>(ctx.gpr[5]) ? 1u : 0u);
    { const bool branch_taken = ctx.gpr[1] != 0u;
    // nop
      if (branch_taken) {
          goto L_0895D530;
      }
      goto L_0895D524;
    }
L_0895D524:
    rt.memory().aot_store32(ctx.gpr[4] + static_cast<std::uint32_t>(8), ctx.gpr[5]);
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_0895D53C;
      }
      goto L_0895D530;
    }
L_0895D530:
    ctx.set_gpr(6, 0u + static_cast<std::uint32_t>(4));
    ctx.set_gpr(31, 0x0895D53Cu);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0066_entry, 66u, 795u, 0x0890FB1Cu>(ctx, &aot_mem) && ctx.pc == 0x0895D53Cu) goto L_0895D53C;
    return;
L_0895D53C:
    ctx.set_gpr(2, 0u + 0u);
    ctx.set_gpr(31, rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(12)));
    ctx.set_gpr(29, ctx.gpr[29] + static_cast<std::uint32_t>(16));
    jump_target = ctx.gpr[31];
    // nop
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_0895D550:
    ctx.set_gpr(29, ctx.gpr[29] + static_cast<std::uint32_t>(-32));
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(28), ctx.gpr[31]);
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(24), ctx.gpr[22]);
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(20), ctx.gpr[21]);
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(16), ctx.gpr[20]);
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(12), ctx.gpr[19]);
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(8), ctx.gpr[18]);
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(4), ctx.gpr[17]);
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(0), ctx.gpr[16]);
    ctx.set_gpr(21, ctx.gpr[4] + 0u);
    ctx.set_gpr(20, ctx.gpr[6] + 0u);
    ctx.set_gpr(19, ctx.gpr[7] + 0u);
    ctx.set_gpr(18, ctx.gpr[9] + 0u);
    ctx.set_gpr(17, ctx.gpr[10] + 0u);
    ctx.set_gpr(22, ctx.gpr[11] + 0u);
    ctx.set_gpr(2, 0u + static_cast<std::uint32_t>(1));
    { const bool branch_taken = static_cast<std::int32_t>(ctx.gpr[5]) < 0;
    // nop
      if (branch_taken) {
          goto L_0895D658;
      }
      goto L_0895D598;
    }
L_0895D598:
    ctx.set_gpr(6, rt.memory().aot_load32(ctx.gpr[21] + static_cast<std::uint32_t>(28)));
    ctx.set_gpr(4, rt.memory().aot_load32(ctx.gpr[6] + static_cast<std::uint32_t>(8)));
    ctx.set_gpr(3, ctx.gpr[5] << 2u);
    ctx.set_gpr(1, static_cast<std::int32_t>(ctx.gpr[3]) < static_cast<std::int32_t>(ctx.gpr[4]) ? 1u : 0u);
    { const bool branch_taken = ctx.gpr[1] == 0u;
    // nop
      if (branch_taken) {
          goto L_0895D658;
      }
      goto L_0895D5B0;
    }
L_0895D5B0:
    ctx.set_gpr(3, rt.memory().aot_load32(ctx.gpr[6] + static_cast<std::uint32_t>(16)));
    ctx.set_gpr(2, ctx.gpr[5] << 4u);
    ctx.set_gpr(16, ctx.gpr[3] + ctx.gpr[2]);
    ctx.set_gpr(2, rt.memory().aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(4)));
    rt.memory().aot_store32(ctx.gpr[8] + static_cast<std::uint32_t>(0), ctx.gpr[2]);
    { const bool branch_taken = ctx.gpr[20] == 0u;
    // nop
      if (branch_taken) {
          goto L_0895D604;
      }
      goto L_0895D5CC;
    }
L_0895D5CC:
    ctx.set_gpr(4, rt.memory().aot_load32(ctx.gpr[21] + static_cast<std::uint32_t>(36)));
    ctx.set_gpr(5, rt.memory().aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(0)));
    ctx.set_gpr(31, 0x0895D5DCu);
    // nop
    goto L_0895CACC;
L_0895D5DC:
    { const bool branch_taken = ctx.gpr[2] == 0u;
    // nop
      if (branch_taken) {
          goto L_0895D600;
      }
      goto L_0895D5E4;
    }
L_0895D5E4:
    ctx.set_gpr(4, ctx.gpr[20] + 0u);
    ctx.set_gpr(5, ctx.gpr[2] + 0u);
    ctx.set_gpr(6, ctx.gpr[19] + 0u);
    ctx.set_gpr(31, 0x0895D5F8u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0004_entry, 4u, 574u, 0x08816B28u>(ctx, &aot_mem) && ctx.pc == 0x0895D5F8u) goto L_0895D5F8;
    return;
L_0895D5F8:
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_0895D604;
      }
      goto L_0895D600;
    }
L_0895D600:
    rt.memory().aot_store8(ctx.gpr[20] + static_cast<std::uint32_t>(0), static_cast<std::uint8_t>(0u));
    goto L_0895D604;
L_0895D604:
    ctx.set_gpr(2, rt.memory().aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(8)));
    rt.memory().aot_store32(ctx.gpr[18] + static_cast<std::uint32_t>(0), ctx.gpr[2]);
    { const bool branch_taken = ctx.gpr[17] == 0u;
    // nop
      if (branch_taken) {
          goto L_0895D64C;
      }
      goto L_0895D614;
    }
L_0895D614:
    ctx.set_gpr(4, rt.memory().aot_load32(ctx.gpr[21] + static_cast<std::uint32_t>(40)));
    ctx.set_gpr(5, rt.memory().aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(12)));
    ctx.set_gpr(31, 0x0895D624u);
    // nop
    goto L_0895CACC;
L_0895D624:
    { const bool branch_taken = ctx.gpr[2] == 0u;
    // nop
      if (branch_taken) {
          goto L_0895D648;
      }
      goto L_0895D62C;
    }
L_0895D62C:
    ctx.set_gpr(4, ctx.gpr[17] + 0u);
    ctx.set_gpr(5, ctx.gpr[2] + 0u);
    ctx.set_gpr(6, ctx.gpr[22] + 0u);
    ctx.set_gpr(31, 0x0895D640u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0004_entry, 4u, 574u, 0x08816B28u>(ctx, &aot_mem) && ctx.pc == 0x0895D640u) goto L_0895D640;
    return;
L_0895D640:
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_0895D64C;
      }
      goto L_0895D648;
    }
L_0895D648:
    rt.memory().aot_store8(ctx.gpr[17] + static_cast<std::uint32_t>(0), static_cast<std::uint8_t>(0u));
    goto L_0895D64C;
L_0895D64C:
    ctx.set_gpr(2, 0u + 0u);
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_0895D678;
      }
      goto L_0895D658;
    }
L_0895D658:
    { const bool branch_taken = ctx.gpr[20] == 0u;
    // nop
      if (branch_taken) {
          goto L_0895D664;
      }
      goto L_0895D660;
    }
L_0895D660:
    rt.memory().aot_store8(ctx.gpr[20] + static_cast<std::uint32_t>(0), static_cast<std::uint8_t>(0u));
    goto L_0895D664;
L_0895D664:
    rt.memory().aot_store32(ctx.gpr[8] + static_cast<std::uint32_t>(0), 0u);
    rt.memory().aot_store32(ctx.gpr[18] + static_cast<std::uint32_t>(0), 0u);
    { const bool branch_taken = ctx.gpr[17] == 0u;
    // nop
      if (branch_taken) {
          goto L_0895D678;
      }
      goto L_0895D674;
    }
L_0895D674:
    rt.memory().aot_store8(ctx.gpr[17] + static_cast<std::uint32_t>(0), static_cast<std::uint8_t>(0u));
    goto L_0895D678;
L_0895D678:
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
L_0895D6A4:
    ctx.set_gpr(29, ctx.gpr[29] + static_cast<std::uint32_t>(-16));
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(12), ctx.gpr[31]);
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(8), ctx.gpr[17]);
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(4), ctx.gpr[16]);
    ctx.set_gpr(17, ctx.gpr[4] + 0u);
    ctx.set_gpr(16, ctx.gpr[5] + 0u);
    ctx.set_gpr(25, rt.memory().aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(0)));
    ctx.set_gpr(25, rt.memory().aot_load32(ctx.gpr[25] + static_cast<std::uint32_t>(120)));
    jump_target = ctx.gpr[25];
    ctx.set_gpr(31, 0x0895D6CCu);
    // nop
    ctx.pc = jump_target;
    if (rt.invoke_chained_call(ctx, &aot_mem) && ctx.pc == 0x0895D6CCu) goto L_0895D6CC;
    return;
L_0895D6CC:
    ctx.set_gpr(5, ctx.gpr[2] + 0u);
    ctx.set_gpr(3, rt.memory().aot_load32(ctx.gpr[17] + static_cast<std::uint32_t>(32)));
    ctx.set_gpr(8, rt.memory().aot_load32(ctx.gpr[3] + static_cast<std::uint32_t>(8)));
    ctx.set_gpr(9, 0u + 0u);
    goto L_0895D6DC;
L_0895D6DC:
    ctx.set_gpr(6, ctx.gpr[5] << 2u);
    ctx.set_gpr(4, rt.memory().aot_load32(ctx.gpr[3] + static_cast<std::uint32_t>(16)));
    ctx.set_gpr(4, ctx.gpr[4] + ctx.gpr[6]);
    ctx.set_gpr(4, rt.memory().aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(0)));
    ctx.set_gpr(6, 0u + static_cast<std::uint32_t>(-1));
    { const bool branch_taken = ctx.gpr[4] == ctx.gpr[6];
    // nop
      if (branch_taken) {
          goto L_0895D784;
      }
      goto L_0895D6F8;
    }
L_0895D6F8:
    ctx.set_gpr(6, rt.memory().aot_load32(ctx.gpr[17] + static_cast<std::uint32_t>(28)));
    ctx.set_gpr(7, rt.memory().aot_load32(ctx.gpr[6] + static_cast<std::uint32_t>(16)));
    ctx.set_gpr(6, ctx.gpr[4] << 4u);
    ctx.set_gpr(7, ctx.gpr[7] + ctx.gpr[6]);
    ctx.set_gpr(6, rt.memory().aot_load32(ctx.gpr[7] + static_cast<std::uint32_t>(8)));
    { const bool branch_taken = ctx.gpr[6] == 0u;
    // nop
      if (branch_taken) {
          goto L_0895D724;
      }
      goto L_0895D714;
    }
L_0895D714:
    ctx.set_gpr(7, rt.memory().aot_load32(ctx.gpr[7] + static_cast<std::uint32_t>(4)));
    ctx.set_gpr(10, ctx.gpr[7] + ctx.gpr[6]);
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_0895D730;
      }
      goto L_0895D724;
    }
L_0895D724:
    ctx.set_gpr(7, rt.memory().aot_load32(ctx.gpr[7] + static_cast<std::uint32_t>(4)));
    ctx.set_gpr(6, ctx.gpr[7] + ctx.gpr[6]);
    ctx.set_gpr(10, ctx.gpr[6] + static_cast<std::uint32_t>(1));
    goto L_0895D730;
L_0895D730:
    ctx.set_gpr(6, ctx.gpr[16] < ctx.gpr[7] ? 1u : 0u);
    { const bool branch_taken = ctx.gpr[6] != 0u;
    // nop
      if (branch_taken) {
          goto L_0895D754;
      }
      goto L_0895D73C;
    }
L_0895D73C:
    ctx.set_gpr(1, ctx.gpr[10] < ctx.gpr[16] ? 1u : 0u);
    { const bool branch_taken = ctx.gpr[1] != 0u;
    // nop
      if (branch_taken) {
          goto L_0895D754;
      }
      goto L_0895D748;
    }
L_0895D748:
    ctx.set_gpr(2, ctx.gpr[4] + 0u);
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_0895D850;
      }
      goto L_0895D754;
    }
L_0895D754:
    ctx.set_gpr(5, ctx.gpr[5] + static_cast<std::uint32_t>(1));
    ctx.set_gpr(4, static_cast<std::int32_t>(ctx.gpr[5]) < static_cast<std::int32_t>(ctx.gpr[8]) ? 1u : 0u);
    { const bool branch_taken = ctx.gpr[4] != 0u;
    // nop
      if (branch_taken) {
          goto L_0895D768;
      }
      goto L_0895D764;
    }
L_0895D764:
    ctx.set_gpr(5, 0u + 0u);
    goto L_0895D768;
L_0895D768:
    ctx.set_gpr(9, ctx.gpr[9] + static_cast<std::uint32_t>(1));
    ctx.set_gpr(4, static_cast<std::int32_t>(ctx.gpr[9]) < static_cast<std::int32_t>(ctx.gpr[8]) ? 1u : 0u);
    { const bool branch_taken = ctx.gpr[4] != 0u;
    // nop
      if (branch_taken) {
          goto L_0895D6DC;
      }
      goto L_0895D778;
    }
L_0895D778:
    ctx.set_gpr(2, 0u + static_cast<std::uint32_t>(-1));
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_0895D850;
      }
      goto L_0895D784;
    }
L_0895D784:
    ctx.set_gpr(5, ctx.gpr[2] + static_cast<std::uint32_t>(-1));
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_0895D7B0;
      }
      goto L_0895D790;
    }
L_0895D790:
    ctx.set_gpr(4, ctx.gpr[5] << 2u);
    ctx.set_gpr(2, rt.memory().aot_load32(ctx.gpr[3] + static_cast<std::uint32_t>(16)));
    ctx.set_gpr(2, ctx.gpr[2] + ctx.gpr[4]);
    ctx.set_gpr(4, rt.memory().aot_load32(ctx.gpr[2] + static_cast<std::uint32_t>(0)));
    ctx.set_gpr(2, 0u + static_cast<std::uint32_t>(-1));
    { const bool branch_taken = ctx.gpr[4] != ctx.gpr[2];
    // nop
      if (branch_taken) {
          goto L_0895D844;
      }
      goto L_0895D7AC;
    }
L_0895D7AC:
    ctx.set_gpr(5, ctx.gpr[5] + static_cast<std::uint32_t>(-1));
    goto L_0895D7B0;
L_0895D7B0:
    { const bool branch_taken = static_cast<std::int32_t>(ctx.gpr[5]) > 0;
    // nop
      if (branch_taken) {
          goto L_0895D790;
      }
      goto L_0895D7B8;
    }
L_0895D7B8:
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_0895D844;
      }
      goto L_0895D7C0;
    }
L_0895D7C0:
    ctx.set_gpr(4, ctx.gpr[5] << 2u);
    ctx.set_gpr(2, rt.memory().aot_load32(ctx.gpr[3] + static_cast<std::uint32_t>(16)));
    ctx.set_gpr(2, ctx.gpr[2] + ctx.gpr[4]);
    ctx.set_gpr(4, rt.memory().aot_load32(ctx.gpr[2] + static_cast<std::uint32_t>(0)));
    ctx.set_gpr(2, 0u + static_cast<std::uint32_t>(-1));
    { const bool branch_taken = ctx.gpr[4] != ctx.gpr[2];
    // nop
      if (branch_taken) {
          goto L_0895D7E4;
      }
      goto L_0895D7DC;
    }
L_0895D7DC:
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_0895D850;
      }
      goto L_0895D7E4;
    }
L_0895D7E4:
    ctx.set_gpr(2, rt.memory().aot_load32(ctx.gpr[17] + static_cast<std::uint32_t>(28)));
    ctx.set_gpr(6, rt.memory().aot_load32(ctx.gpr[2] + static_cast<std::uint32_t>(16)));
    ctx.set_gpr(2, ctx.gpr[4] << 4u);
    ctx.set_gpr(6, ctx.gpr[6] + ctx.gpr[2]);
    ctx.set_gpr(2, rt.memory().aot_load32(ctx.gpr[6] + static_cast<std::uint32_t>(8)));
    { const bool branch_taken = ctx.gpr[2] == 0u;
    // nop
      if (branch_taken) {
          goto L_0895D810;
      }
      goto L_0895D800;
    }
L_0895D800:
    ctx.set_gpr(6, rt.memory().aot_load32(ctx.gpr[6] + static_cast<std::uint32_t>(4)));
    ctx.set_gpr(10, ctx.gpr[6] + ctx.gpr[2]);
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_0895D81C;
      }
      goto L_0895D810;
    }
L_0895D810:
    ctx.set_gpr(6, rt.memory().aot_load32(ctx.gpr[6] + static_cast<std::uint32_t>(4)));
    ctx.set_gpr(2, ctx.gpr[6] + ctx.gpr[2]);
    ctx.set_gpr(10, ctx.gpr[2] + static_cast<std::uint32_t>(1));
    goto L_0895D81C;
L_0895D81C:
    ctx.set_gpr(2, ctx.gpr[16] < ctx.gpr[6] ? 1u : 0u);
    { const bool branch_taken = ctx.gpr[2] != 0u;
    // nop
      if (branch_taken) {
          goto L_0895D840;
      }
      goto L_0895D828;
    }
L_0895D828:
    ctx.set_gpr(1, ctx.gpr[10] < ctx.gpr[16] ? 1u : 0u);
    { const bool branch_taken = ctx.gpr[1] != 0u;
    // nop
      if (branch_taken) {
          goto L_0895D840;
      }
      goto L_0895D834;
    }
L_0895D834:
    ctx.set_gpr(2, ctx.gpr[4] + 0u);
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_0895D850;
      }
      goto L_0895D840;
    }
L_0895D840:
    ctx.set_gpr(5, ctx.gpr[5] + static_cast<std::uint32_t>(-1));
    goto L_0895D844;
L_0895D844:
    { const bool branch_taken = static_cast<std::int32_t>(ctx.gpr[5]) > 0;
    // nop
      if (branch_taken) {
          goto L_0895D7C0;
      }
      goto L_0895D84C;
    }
L_0895D84C:
    ctx.set_gpr(2, 0u + static_cast<std::uint32_t>(-1));
    goto L_0895D850;
L_0895D850:
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
L_0895D868:
    ctx.set_gpr(29, ctx.gpr[29] + static_cast<std::uint32_t>(-32));
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(28), ctx.gpr[31]);
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(24), ctx.gpr[22]);
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(20), ctx.gpr[21]);
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(16), ctx.gpr[20]);
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(12), ctx.gpr[19]);
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(8), ctx.gpr[18]);
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(4), ctx.gpr[17]);
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(0), ctx.gpr[16]);
    ctx.set_gpr(21, ctx.gpr[4] + 0u);
    ctx.set_gpr(20, ctx.gpr[6] + 0u);
    ctx.set_gpr(19, ctx.gpr[7] + 0u);
    ctx.set_gpr(18, ctx.gpr[8] + 0u);
    ctx.set_gpr(17, ctx.gpr[9] + 0u);
    ctx.set_gpr(16, ctx.gpr[10] + 0u);
    ctx.set_gpr(22, ctx.gpr[11] + 0u);
    ctx.set_gpr(25, rt.memory().aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(0)));
    ctx.set_gpr(25, rt.memory().aot_load32(ctx.gpr[25] + static_cast<std::uint32_t>(104)));
    jump_target = ctx.gpr[25];
    ctx.set_gpr(31, 0x0895D8B8u);
    // nop
    ctx.pc = jump_target;
    if (rt.invoke_chained_call(ctx, &aot_mem) && ctx.pc == 0x0895D8B8u) goto L_0895D8B8;
    return;
L_0895D8B8:
    ctx.set_gpr(4, 0u + static_cast<std::uint32_t>(1));
    ctx.set_gpr(3, rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(32)));
    rt.memory().aot_store32(ctx.gpr[3] + static_cast<std::uint32_t>(0), 0u);
    ctx.set_gpr(3, 0u + static_cast<std::uint32_t>(-1));
    { const bool branch_taken = ctx.gpr[2] == ctx.gpr[3];
    // nop
      if (branch_taken) {
          goto L_0895D904;
      }
      goto L_0895D8D0;
    }
L_0895D8D0:
    ctx.set_gpr(4, ctx.gpr[21] + 0u);
    ctx.set_gpr(5, ctx.gpr[2] + 0u);
    ctx.set_gpr(6, ctx.gpr[20] + 0u);
    ctx.set_gpr(7, ctx.gpr[19] + 0u);
    ctx.set_gpr(8, ctx.gpr[18] + 0u);
    ctx.set_gpr(9, ctx.gpr[17] + 0u);
    ctx.set_gpr(10, ctx.gpr[16] + 0u);
    ctx.set_gpr(11, ctx.gpr[22] + 0u);
    ctx.set_gpr(25, rt.memory().aot_load32(ctx.gpr[21] + static_cast<std::uint32_t>(0)));
    ctx.set_gpr(25, rt.memory().aot_load32(ctx.gpr[25] + static_cast<std::uint32_t>(100)));
    jump_target = ctx.gpr[25];
    ctx.set_gpr(31, 0x0895D900u);
    // nop
    ctx.pc = jump_target;
    if (rt.invoke_chained_call(ctx, &aot_mem) && ctx.pc == 0x0895D900u) goto L_0895D900;
    return;
L_0895D900:
    ctx.set_gpr(4, ctx.gpr[2] + 0u);
    goto L_0895D904;
L_0895D904:
    ctx.set_gpr(2, ctx.gpr[4] + 0u);
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
L_0895D934:
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
    ctx.set_gpr(17, ctx.gpr[7] + 0u);
    ctx.set_gpr(16, ctx.gpr[8] + 0u);
    ctx.set_gpr(5, ctx.gpr[18] + 0u);
    ctx.set_gpr(25, rt.memory().aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(0)));
    ctx.set_gpr(25, rt.memory().aot_load32(ctx.gpr[25] + static_cast<std::uint32_t>(104)));
    jump_target = ctx.gpr[25];
    ctx.set_gpr(31, 0x0895D978u);
    // nop
    ctx.pc = jump_target;
    if (rt.invoke_chained_call(ctx, &aot_mem) && ctx.pc == 0x0895D978u) goto L_0895D978;
    return;
L_0895D978:
    ctx.set_gpr(3, 0u + static_cast<std::uint32_t>(-1));
    { const bool branch_taken = ctx.gpr[2] == ctx.gpr[3];
    // nop
      if (branch_taken) {
          goto L_0895D98C;
      }
      goto L_0895D984;
    }
L_0895D984:
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_0895D9B0;
      }
      goto L_0895D98C;
    }
L_0895D98C:
    ctx.set_gpr(4, ctx.gpr[20] + 0u);
    ctx.set_gpr(5, ctx.gpr[19] + 0u);
    ctx.set_gpr(6, ctx.gpr[18] + 0u);
    ctx.set_gpr(7, ctx.gpr[17] + 0u);
    ctx.set_gpr(8, ctx.gpr[16] + 0u);
    ctx.set_gpr(25, rt.memory().aot_load32(ctx.gpr[20] + static_cast<std::uint32_t>(0)));
    ctx.set_gpr(25, rt.memory().aot_load32(ctx.gpr[25] + static_cast<std::uint32_t>(116)));
    jump_target = ctx.gpr[25];
    ctx.set_gpr(31, 0x0895D9B0u);
    // nop
    ctx.pc = jump_target;
    if (rt.invoke_chained_call(ctx, &aot_mem) && ctx.pc == 0x0895D9B0u) goto L_0895D9B0;
    return;
L_0895D9B0:
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
L_0895D9D4:
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
    ctx.set_gpr(20, ctx.gpr[6] + 0u);
    ctx.set_gpr(19, ctx.gpr[7] + 0u);
    ctx.set_gpr(18, ctx.gpr[8] + 0u);
    ctx.set_gpr(17, 0u + static_cast<std::uint32_t>(-1));
    ctx.set_gpr(22, ctx.gpr[17] + 0u);
    ctx.set_gpr(2, rt.memory().aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(28)));
    ctx.set_gpr(2, rt.memory().aot_load32(ctx.gpr[2] + static_cast<std::uint32_t>(8)));
    ctx.set_gpr(16, static_cast<std::uint32_t>(static_cast<std::int32_t>(ctx.gpr[2]) >> 2u));
    { const bool branch_taken = static_cast<std::int32_t>(ctx.gpr[2]) >= 0;
    // nop
      if (branch_taken) {
          goto L_0895DA2C;
      }
      goto L_0895DA24;
    }
L_0895DA24:
    ctx.set_gpr(2, ctx.gpr[2] + static_cast<std::uint32_t>(3));
    ctx.set_gpr(16, static_cast<std::uint32_t>(static_cast<std::int32_t>(ctx.gpr[2]) >> 2u));
    goto L_0895DA2C;
L_0895DA2C:
    { const bool branch_taken = ctx.gpr[5] == 0u;
    // nop
      if (branch_taken) {
          goto L_0895DA50;
      }
      goto L_0895DA34;
    }
L_0895DA34:
    ctx.set_gpr(2, static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int8_t>(rt.memory().aot_load8(ctx.gpr[5] + static_cast<std::uint32_t>(0))))));
    { const bool branch_taken = ctx.gpr[2] == 0u;
    // nop
      if (branch_taken) {
          goto L_0895DA50;
      }
      goto L_0895DA40;
    }
L_0895DA40:
    ctx.set_gpr(4, rt.memory().aot_load32(ctx.gpr[21] + static_cast<std::uint32_t>(36)));
    ctx.set_gpr(31, 0x0895DA4Cu);
    // nop
    goto L_0895CC08;
L_0895DA4C:
    ctx.set_gpr(17, ctx.gpr[2] + 0u);
    goto L_0895DA50;
L_0895DA50:
    { const bool branch_taken = ctx.gpr[18] == 0u;
    // nop
      if (branch_taken) {
          goto L_0895DA78;
      }
      goto L_0895DA58;
    }
L_0895DA58:
    ctx.set_gpr(2, static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int8_t>(rt.memory().aot_load8(ctx.gpr[18] + static_cast<std::uint32_t>(0))))));
    { const bool branch_taken = ctx.gpr[2] == 0u;
    // nop
      if (branch_taken) {
          goto L_0895DA78;
      }
      goto L_0895DA64;
    }
L_0895DA64:
    ctx.set_gpr(4, rt.memory().aot_load32(ctx.gpr[21] + static_cast<std::uint32_t>(40)));
    ctx.set_gpr(5, ctx.gpr[18] + 0u);
    ctx.set_gpr(31, 0x0895DA74u);
    // nop
    goto L_0895CC08;
L_0895DA74:
    ctx.set_gpr(22, ctx.gpr[2] + 0u);
    goto L_0895DA78;
L_0895DA78:
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(32), ctx.gpr[17]);
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(36), ctx.gpr[20]);
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(40), ctx.gpr[19]);
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(44), ctx.gpr[22]);
    ctx.set_gpr(4, rt.memory().aot_load32(ctx.gpr[21] + static_cast<std::uint32_t>(28)));
    ctx.set_gpr(2, rt.memory().aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(8)));
    ctx.set_gpr(3, rt.memory().aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(12)));
    ctx.set_gpr(2, ctx.gpr[2] + static_cast<std::uint32_t>(4));
    ctx.set_gpr(1, static_cast<std::int32_t>(ctx.gpr[3]) < static_cast<std::int32_t>(ctx.gpr[2]) ? 1u : 0u);
    { const bool branch_taken = ctx.gpr[1] == 0u;
    // nop
      if (branch_taken) {
          goto L_0895DAC4;
      }
      goto L_0895DAA4;
    }
L_0895DAA4:
    ctx.set_gpr(5, ctx.gpr[3] << 1u);
    ctx.set_gpr(2, rt.memory().aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(8)));
    ctx.set_gpr(2, static_cast<std::int32_t>(ctx.gpr[5]) < static_cast<std::int32_t>(ctx.gpr[2]) ? 1u : 0u);
    { const bool branch_taken = ctx.gpr[2] != 0u;
    // nop
      if (branch_taken) {
          goto L_0895DAC4;
      }
      goto L_0895DAB8;
    }
L_0895DAB8:
    ctx.set_gpr(6, 0u + static_cast<std::uint32_t>(4));
    ctx.set_gpr(31, 0x0895DAC4u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0066_entry, 66u, 785u, 0x0890FA2Cu>(ctx, &aot_mem) && ctx.pc == 0x0895DAC4u) goto L_0895DAC4;
    return;
L_0895DAC4:
    ctx.set_gpr(4, rt.memory().aot_load32(ctx.gpr[21] + static_cast<std::uint32_t>(28)));
    ctx.set_gpr(5, 0u + static_cast<std::uint32_t>(4));
    ctx.set_gpr(6, ctx.gpr[29] + static_cast<std::uint32_t>(32));
    ctx.set_gpr(31, 0x0895DAD8u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0066_entry, 66u, 844u, 0x0890FFD4u>(ctx, &aot_mem) && ctx.pc == 0x0895DAD8u) goto L_0895DAD8;
    return;
L_0895DAD8:
    ctx.set_gpr(4, ctx.gpr[21] + 0u);
    ctx.set_gpr(5, ctx.gpr[20] + 0u);
    ctx.set_gpr(6, ctx.gpr[19] + 0u);
    ctx.set_gpr(7, ctx.gpr[16] + 0u);
    ctx.set_gpr(25, rt.memory().aot_load32(ctx.gpr[21] + static_cast<std::uint32_t>(0)));
    ctx.set_gpr(25, rt.memory().aot_load32(ctx.gpr[25] + static_cast<std::uint32_t>(124)));
    jump_target = ctx.gpr[25];
    ctx.set_gpr(31, 0x0895DAF8u);
    // nop
    ctx.pc = jump_target;
    if (rt.invoke_chained_call(ctx, &aot_mem) && ctx.pc == 0x0895DAF8u) goto L_0895DAF8;
    return;
L_0895DAF8:
    ctx.set_gpr(2, ctx.gpr[16] + 0u);
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
L_0895DB28:
    ctx.set_gpr(6, rt.memory().aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(12)));
    { const bool branch_taken = ctx.gpr[6] == 0u;
    // nop
      if (branch_taken) {
          goto L_0895DB60;
      }
      goto L_0895DB34;
    }
L_0895DB34:
    ctx.set_gpr(3, rt.memory().aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(24)));
    { const bool branch_taken = ctx.gpr[3] == 0u;
    // nop
      if (branch_taken) {
          goto L_0895DB60;
      }
      goto L_0895DB40;
    }
L_0895DB40:
    ctx.set_gpr(2, rt.memory().aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(16)));
    ctx.set_gpr(2, ctx.gpr[5] - ctx.gpr[2]);
    { const std::uint32_t dividend = ctx.gpr[2]; const std::uint32_t divisor = ctx.gpr[3]; if (divisor == 0u) { ctx.lo = 0xFFFFFFFFu; ctx.hi = dividend; } else { ctx.lo = dividend / divisor; ctx.hi = dividend % divisor; } }
    ctx.set_gpr(2, ctx.lo);
    { const std::uint32_t dividend = ctx.gpr[2]; const std::uint32_t divisor = ctx.gpr[6]; if (divisor == 0u) { ctx.lo = 0xFFFFFFFFu; ctx.hi = dividend; } else { ctx.lo = dividend / divisor; ctx.hi = dividend % divisor; } }
    ctx.set_gpr(2, ctx.hi);
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_0895DB64;
      }
      goto L_0895DB60;
    }
L_0895DB60:
    ctx.set_gpr(2, 0u + 0u);
    goto L_0895DB64;
L_0895DB64:
    jump_target = ctx.gpr[31];
    // nop
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_0895DB6C:
    ctx.set_gpr(29, ctx.gpr[29] + static_cast<std::uint32_t>(-32));
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(28), ctx.gpr[31]);
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(24), ctx.gpr[20]);
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(20), ctx.gpr[19]);
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(16), ctx.gpr[18]);
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(12), ctx.gpr[17]);
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(8), ctx.gpr[16]);
    ctx.set_gpr(20, ctx.gpr[4] + 0u);
    ctx.set_gpr(19, ctx.gpr[7] + 0u);
    ctx.set_gpr(18, 0u + 0u);
    ctx.set_gpr(2, rt.memory().aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(32)));
    ctx.set_gpr(17, rt.memory().aot_load32(ctx.gpr[2] + static_cast<std::uint32_t>(8)));
    ctx.set_gpr(16, static_cast<std::uint32_t>(static_cast<std::int32_t>(ctx.gpr[17]) >> 1u));
    { const bool branch_taken = static_cast<std::int32_t>(ctx.gpr[17]) >= 0;
    // nop
      if (branch_taken) {
          goto L_0895DBB0;
      }
      goto L_0895DBA8;
    }
L_0895DBA8:
    ctx.set_gpr(2, ctx.gpr[17] + static_cast<std::uint32_t>(1));
    ctx.set_gpr(16, static_cast<std::uint32_t>(static_cast<std::int32_t>(ctx.gpr[2]) >> 1u));
    goto L_0895DBB0;
L_0895DBB0:
    { const bool branch_taken = ctx.gpr[17] == 0u;
    // nop
      if (branch_taken) {
          goto L_0895DC60;
      }
      goto L_0895DBB8;
    }
L_0895DBB8:
    ctx.set_gpr(4, ctx.gpr[20] + 0u);
    ctx.set_gpr(25, rt.memory().aot_load32(ctx.gpr[20] + static_cast<std::uint32_t>(0)));
    ctx.set_gpr(25, rt.memory().aot_load32(ctx.gpr[25] + static_cast<std::uint32_t>(120)));
    jump_target = ctx.gpr[25];
    ctx.set_gpr(31, 0x0895DBCCu);
    // nop
    ctx.pc = jump_target;
    if (rt.invoke_chained_call(ctx, &aot_mem) && ctx.pc == 0x0895DBCCu) goto L_0895DBCC;
    return;
L_0895DBCC:
    ctx.set_gpr(6, rt.memory().aot_load32(ctx.gpr[20] + static_cast<std::uint32_t>(32)));
    ctx.set_gpr(4, ctx.gpr[2] << 2u);
    ctx.set_gpr(3, rt.memory().aot_load32(ctx.gpr[6] + static_cast<std::uint32_t>(16)));
    ctx.set_gpr(5, ctx.gpr[3] + ctx.gpr[4]);
    ctx.set_gpr(4, rt.memory().aot_load32(ctx.gpr[5] + static_cast<std::uint32_t>(0)));
    ctx.set_gpr(3, 0u + static_cast<std::uint32_t>(-1));
    { const bool branch_taken = ctx.gpr[4] != ctx.gpr[3];
    // nop
      if (branch_taken) {
          goto L_0895DC18;
      }
      goto L_0895DBEC;
    }
L_0895DBEC:
    ctx.set_gpr(3, rt.memory().aot_load32(ctx.gpr[6] + static_cast<std::uint32_t>(8)));
    { const bool branch_taken = ctx.gpr[3] == 0u;
    // nop
      if (branch_taken) {
          goto L_0895DC60;
      }
      goto L_0895DBF8;
    }
L_0895DBF8:
    { const bool branch_taken = static_cast<std::int32_t>(ctx.gpr[2]) < 0;
    // nop
      if (branch_taken) {
          goto L_0895DC60;
      }
      goto L_0895DC00;
    }
L_0895DC00:
    ctx.set_gpr(1, static_cast<std::int32_t>(ctx.gpr[2]) < static_cast<std::int32_t>(ctx.gpr[3]) ? 1u : 0u);
    { const bool branch_taken = ctx.gpr[1] == 0u;
    // nop
      if (branch_taken) {
          goto L_0895DC60;
      }
      goto L_0895DC0C;
    }
L_0895DC0C:
    rt.memory().aot_store32(ctx.gpr[5] + static_cast<std::uint32_t>(0), ctx.gpr[19]);
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_0895DC60;
      }
      goto L_0895DC18;
    }
L_0895DC18:
    ctx.set_gpr(2, ctx.gpr[2] + static_cast<std::uint32_t>(1));
    ctx.set_gpr(3, static_cast<std::int32_t>(ctx.gpr[2]) < static_cast<std::int32_t>(ctx.gpr[17]) ? 1u : 0u);
    { const bool branch_taken = ctx.gpr[3] != 0u;
    // nop
      if (branch_taken) {
          goto L_0895DC2C;
      }
      goto L_0895DC28;
    }
L_0895DC28:
    ctx.set_gpr(2, 0u + 0u);
    goto L_0895DC2C;
L_0895DC2C:
    ctx.set_gpr(18, ctx.gpr[18] + static_cast<std::uint32_t>(1));
    ctx.set_gpr(3, static_cast<std::int32_t>(ctx.gpr[18]) < static_cast<std::int32_t>(ctx.gpr[16]) ? 1u : 0u);
    { const bool branch_taken = ctx.gpr[3] != 0u;
    // nop
      if (branch_taken) {
          goto L_0895DBCC;
      }
      goto L_0895DC3C;
    }
L_0895DC3C:
    ctx.set_gpr(5, ctx.gpr[17] << 1u);
    ctx.set_gpr(4, ctx.gpr[20] + 0u);
    ctx.set_gpr(25, rt.memory().aot_load32(ctx.gpr[20] + static_cast<std::uint32_t>(0)));
    ctx.set_gpr(25, rt.memory().aot_load32(ctx.gpr[25] + static_cast<std::uint32_t>(128)));
    jump_target = ctx.gpr[25];
    ctx.set_gpr(31, 0x0895DC54u);
    // nop
    ctx.pc = jump_target;
    if (rt.invoke_chained_call(ctx, &aot_mem) && ctx.pc == 0x0895DC54u) goto L_0895DC54;
    return;
L_0895DC54:
    ctx.set_gpr(2, 0u + 0u);
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_0895DC64;
      }
      goto L_0895DC60;
    }
L_0895DC60:
    ctx.set_gpr(2, 0u + static_cast<std::uint32_t>(1));
    goto L_0895DC64;
L_0895DC64:
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
L_0895DC88:
    ctx.set_gpr(29, ctx.gpr[29] + static_cast<std::uint32_t>(-32));
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(28), ctx.gpr[31]);
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(24), ctx.gpr[19]);
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(20), ctx.gpr[18]);
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(16), ctx.gpr[17]);
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(12), ctx.gpr[16]);
    ctx.set_gpr(17, ctx.gpr[4] + 0u);
    ctx.set_gpr(16, ctx.gpr[5] + 0u);
    ctx.set_gpr(31, 0x0895DCB0u);
    // nop
    goto L_0895D39C;
L_0895DCB0:
    ctx.set_gpr(4, rt.memory().aot_load32(ctx.gpr[17] + static_cast<std::uint32_t>(32)));
    ctx.set_gpr(3, rt.memory().aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(8)));
    ctx.set_gpr(3, static_cast<std::int32_t>(ctx.gpr[16]) < static_cast<std::int32_t>(ctx.gpr[3]) ? 1u : 0u);
    { const bool branch_taken = ctx.gpr[3] != 0u;
    // nop
      if (branch_taken) {
          goto L_0895DCD4;
      }
      goto L_0895DCC4;
    }
L_0895DCC4:
    ctx.set_gpr(5, ctx.gpr[16] + 0u);
    ctx.set_gpr(6, 0u + static_cast<std::uint32_t>(4));
    ctx.set_gpr(31, 0x0895DCD4u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0066_entry, 66u, 785u, 0x0890FA2Cu>(ctx, &aot_mem) && ctx.pc == 0x0895DCD4u) goto L_0895DCD4;
    return;
L_0895DCD4:
    ctx.set_gpr(4, rt.memory().aot_load32(ctx.gpr[17] + static_cast<std::uint32_t>(32)));
    { const bool branch_taken = static_cast<std::int32_t>(ctx.gpr[16]) < 0;
    // nop
      if (branch_taken) {
          goto L_0895DD0C;
      }
      goto L_0895DCE0;
    }
L_0895DCE0:
    ctx.set_gpr(3, rt.memory().aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(12)));
    ctx.set_gpr(1, static_cast<std::int32_t>(ctx.gpr[3]) < static_cast<std::int32_t>(ctx.gpr[16]) ? 1u : 0u);
    { const bool branch_taken = ctx.gpr[1] != 0u;
    // nop
      if (branch_taken) {
          goto L_0895DCFC;
      }
      goto L_0895DCF0;
    }
L_0895DCF0:
    rt.memory().aot_store32(ctx.gpr[4] + static_cast<std::uint32_t>(8), ctx.gpr[16]);
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_0895DD0C;
      }
      goto L_0895DCFC;
    }
L_0895DCFC:
    ctx.set_gpr(5, ctx.gpr[16] + 0u);
    ctx.set_gpr(6, 0u + static_cast<std::uint32_t>(4));
    ctx.set_gpr(31, 0x0895DD0Cu);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0066_entry, 66u, 795u, 0x0890FB1Cu>(ctx, &aot_mem) && ctx.pc == 0x0895DD0Cu) goto L_0895DD0C;
    return;
L_0895DD0C:
    ctx.set_gpr(3, rt.memory().aot_load32(ctx.gpr[17] + static_cast<std::uint32_t>(32)));
    ctx.set_gpr(6, rt.memory().aot_load32(ctx.gpr[3] + static_cast<std::uint32_t>(8)));
    ctx.set_gpr(5, rt.memory().aot_load32(ctx.gpr[3] + static_cast<std::uint32_t>(16)));
    ctx.set_gpr(7, 0u + 0u);
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_0895DD3C;
      }
      goto L_0895DD24;
    }
L_0895DD24:
    ctx.set_gpr(3, 2228u << 16u);
    ctx.set_gpr(4, rt.memory().aot_load32(ctx.gpr[3] + static_cast<std::uint32_t>(-1344)));
    ctx.set_gpr(3, ctx.gpr[7] << 2u);
    ctx.set_gpr(3, ctx.gpr[5] + ctx.gpr[3]);
    rt.memory().aot_store32(ctx.gpr[3] + static_cast<std::uint32_t>(0), ctx.gpr[4]);
    ctx.set_gpr(7, ctx.gpr[7] + static_cast<std::uint32_t>(1));
    goto L_0895DD3C;
L_0895DD3C:
    ctx.set_gpr(3, static_cast<std::int32_t>(ctx.gpr[7]) < static_cast<std::int32_t>(ctx.gpr[6]) ? 1u : 0u);
    { const bool branch_taken = ctx.gpr[3] != 0u;
    // nop
      if (branch_taken) {
          goto L_0895DD24;
      }
      goto L_0895DD48;
    }
L_0895DD48:
    ctx.set_gpr(5, rt.memory().aot_load32(ctx.gpr[17] + static_cast<std::uint32_t>(12)));
    { const bool branch_taken = ctx.gpr[5] == 0u;
    // nop
      if (branch_taken) {
          goto L_0895DDA0;
      }
      goto L_0895DD54;
    }
L_0895DD54:
    ctx.set_gpr(4, rt.memory().aot_load32(ctx.gpr[17] + static_cast<std::uint32_t>(20)));
    ctx.set_gpr(3, rt.memory().aot_load32(ctx.gpr[17] + static_cast<std::uint32_t>(16)));
    ctx.set_gpr(3, ctx.gpr[4] - ctx.gpr[3]);
    { const std::uint32_t dividend = ctx.gpr[3]; const std::uint32_t divisor = ctx.gpr[5]; if (divisor == 0u) { ctx.lo = 0xFFFFFFFFu; ctx.hi = dividend; } else { ctx.lo = dividend / divisor; ctx.hi = dividend % divisor; } }
    ctx.set_gpr(3, ctx.lo);
    rt.memory().aot_store32(ctx.gpr[17] + static_cast<std::uint32_t>(24), ctx.gpr[3]);
    ctx.set_gpr(4, rt.memory().aot_load32(ctx.gpr[17] + static_cast<std::uint32_t>(20)));
    ctx.set_gpr(3, rt.memory().aot_load32(ctx.gpr[17] + static_cast<std::uint32_t>(16)));
    ctx.set_gpr(4, ctx.gpr[4] - ctx.gpr[3]);
    ctx.set_gpr(3, rt.memory().aot_load32(ctx.gpr[17] + static_cast<std::uint32_t>(12)));
    { const std::uint32_t dividend = ctx.gpr[4]; const std::uint32_t divisor = ctx.gpr[3]; if (divisor == 0u) { ctx.lo = 0xFFFFFFFFu; ctx.hi = dividend; } else { ctx.lo = dividend / divisor; ctx.hi = dividend % divisor; } }
    ctx.set_gpr(3, ctx.hi);
    { const bool branch_taken = ctx.gpr[3] == 0u;
    // nop
      if (branch_taken) {
          goto L_0895DDA8;
      }
      goto L_0895DD8C;
    }
L_0895DD8C:
    ctx.set_gpr(3, rt.memory().aot_load32(ctx.gpr[17] + static_cast<std::uint32_t>(24)));
    ctx.set_gpr(3, ctx.gpr[3] + static_cast<std::uint32_t>(1));
    rt.memory().aot_store32(ctx.gpr[17] + static_cast<std::uint32_t>(24), ctx.gpr[3]);
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_0895DDA8;
      }
      goto L_0895DDA0;
    }
L_0895DDA0:
    ctx.set_gpr(3, 0u + static_cast<std::uint32_t>(1));
    rt.memory().aot_store32(ctx.gpr[17] + static_cast<std::uint32_t>(24), ctx.gpr[3]);
    goto L_0895DDA8;
L_0895DDA8:
    ctx.set_gpr(3, rt.memory().aot_load32(ctx.gpr[17] + static_cast<std::uint32_t>(28)));
    ctx.set_gpr(4, rt.memory().aot_load32(ctx.gpr[3] + static_cast<std::uint32_t>(8)));
    ctx.set_gpr(16, rt.memory().aot_load32(ctx.gpr[3] + static_cast<std::uint32_t>(16)));
    ctx.set_gpr(3, static_cast<std::uint32_t>(static_cast<std::int32_t>(ctx.gpr[4]) >> 2u));
    { const bool branch_taken = static_cast<std::int32_t>(ctx.gpr[4]) >= 0;
    // nop
      if (branch_taken) {
          goto L_0895DDC8;
      }
      goto L_0895DDC0;
    }
L_0895DDC0:
    ctx.set_gpr(3, ctx.gpr[4] + static_cast<std::uint32_t>(3));
    ctx.set_gpr(3, static_cast<std::uint32_t>(static_cast<std::int32_t>(ctx.gpr[3]) >> 2u));
    goto L_0895DDC8;
L_0895DDC8:
    ctx.set_gpr(3, ctx.gpr[3] << 4u);
    ctx.set_gpr(18, ctx.gpr[16] + ctx.gpr[3]);
    ctx.set_gpr(19, ctx.gpr[16] + 0u);
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_0895DE1C;
      }
      goto L_0895DDDC;
    }
L_0895DDDC:
    ctx.set_gpr(6, rt.memory().aot_load32(ctx.gpr[19] + static_cast<std::uint32_t>(8)));
    ctx.set_gpr(2, ctx.gpr[19] - ctx.gpr[16]);
    ctx.set_gpr(7, static_cast<std::uint32_t>(static_cast<std::int32_t>(ctx.gpr[2]) >> 4u));
    { const bool branch_taken = static_cast<std::int32_t>(ctx.gpr[2]) >= 0;
    // nop
      if (branch_taken) {
          goto L_0895DDF8;
      }
      goto L_0895DDF0;
    }
L_0895DDF0:
    ctx.set_gpr(2, ctx.gpr[2] + static_cast<std::uint32_t>(15));
    ctx.set_gpr(7, static_cast<std::uint32_t>(static_cast<std::int32_t>(ctx.gpr[2]) >> 4u));
    goto L_0895DDF8;
L_0895DDF8:
    ctx.set_gpr(4, ctx.gpr[17] + 0u);
    ctx.set_gpr(5, rt.memory().aot_load32(ctx.gpr[19] + static_cast<std::uint32_t>(4)));
    ctx.set_gpr(25, rt.memory().aot_load32(ctx.gpr[17] + static_cast<std::uint32_t>(0)));
    ctx.set_gpr(25, rt.memory().aot_load32(ctx.gpr[25] + static_cast<std::uint32_t>(124)));
    jump_target = ctx.gpr[25];
    ctx.set_gpr(31, 0x0895DE10u);
    // nop
    ctx.pc = jump_target;
    if (rt.invoke_chained_call(ctx, &aot_mem) && ctx.pc == 0x0895DE10u) goto L_0895DE10;
    return;
L_0895DE10:
    { const bool branch_taken = ctx.gpr[2] == 0u;
    // nop
      if (branch_taken) {
          goto L_0895DE28;
      }
      goto L_0895DE18;
    }
L_0895DE18:
    ctx.set_gpr(19, ctx.gpr[19] + static_cast<std::uint32_t>(16));
    goto L_0895DE1C;
L_0895DE1C:
    ctx.set_gpr(3, ctx.gpr[19] < ctx.gpr[18] ? 1u : 0u);
    { const bool branch_taken = ctx.gpr[3] != 0u;
    // nop
      if (branch_taken) {
          goto L_0895DDDC;
      }
      goto L_0895DE28;
    }
L_0895DE28:
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
L_0895DE48:
    ctx.set_gpr(29, ctx.gpr[29] + static_cast<std::uint32_t>(-32));
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(12), ctx.gpr[31]);
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(8), ctx.gpr[18]);
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(4), ctx.gpr[17]);
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(0), ctx.gpr[16]);
    ctx.set_gpr(17, ctx.gpr[4] + 0u);
    ctx.set_gpr(18, ctx.gpr[5] + 0u);
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(28), ctx.gpr[18]);
    ctx.set_gpr(5, ctx.gpr[29] + static_cast<std::uint32_t>(28));
    ctx.set_gpr(6, 0u + 0u);
    ctx.set_gpr(31, 0x0895DE78u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0018_entry, 18u, 462u, 0x0884D888u>(ctx, &aot_mem) && ctx.pc == 0x0895DE78u) goto L_0895DE78;
    return;
L_0895DE78:
    ctx.set_gpr(16, ctx.gpr[2] + 0u);
    { const bool branch_taken = static_cast<std::int32_t>(ctx.gpr[16]) < 0;
    // nop
      if (branch_taken) {
          goto L_0895DF08;
      }
      goto L_0895DE84;
    }
L_0895DE84:
    ctx.set_gpr(3, rt.memory().aot_load8(ctx.gpr[17] + static_cast<std::uint32_t>(28)));
    { const bool branch_taken = ctx.gpr[3] == 0u;
    // nop
      if (branch_taken) {
          goto L_0895DE9C;
      }
      goto L_0895DE90;
    }
L_0895DE90:
    ctx.set_gpr(4, ctx.gpr[18] + 0u);
    ctx.set_gpr(31, 0x0895DE9Cu);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0080_entry, 80u, 598u, 0x08946B0Cu>(ctx, &aot_mem) && ctx.pc == 0x0895DE9Cu) goto L_0895DE9C;
    return;
L_0895DE9C:
    ctx.set_gpr(3, rt.memory().aot_load32(ctx.gpr[17] + static_cast<std::uint32_t>(20)));
    ctx.set_gpr(5, ctx.gpr[3] + static_cast<std::uint32_t>(-1));
    rt.memory().aot_store32(ctx.gpr[17] + static_cast<std::uint32_t>(20), ctx.gpr[5]);
    { const bool branch_taken = ctx.gpr[5] == ctx.gpr[16];
    // nop
      if (branch_taken) {
          goto L_0895DF08;
      }
      goto L_0895DEB0;
    }
L_0895DEB0:
    ctx.set_gpr(3, rt.memory().aot_load32(ctx.gpr[17] + static_cast<std::uint32_t>(8)));
    { const bool branch_taken = ctx.gpr[3] == 0u;
    // nop
      if (branch_taken) {
          goto L_0895DF08;
      }
      goto L_0895DEBC;
    }
L_0895DEBC:
    { const bool branch_taken = static_cast<std::int32_t>(ctx.gpr[5]) < 0;
    // nop
      if (branch_taken) {
          goto L_0895DF08;
      }
      goto L_0895DEC4;
    }
L_0895DEC4:
    ctx.set_gpr(1, static_cast<std::int32_t>(ctx.gpr[5]) < static_cast<std::int32_t>(ctx.gpr[3]) ? 1u : 0u);
    { const bool branch_taken = ctx.gpr[1] == 0u;
    // nop
      if (branch_taken) {
          goto L_0895DF08;
      }
      goto L_0895DED0;
    }
L_0895DED0:
    { const bool branch_taken = static_cast<std::int32_t>(ctx.gpr[16]) < 0;
    // nop
      if (branch_taken) {
          goto L_0895DF08;
      }
      goto L_0895DED8;
    }
L_0895DED8:
    ctx.set_gpr(1, static_cast<std::int32_t>(ctx.gpr[16]) < static_cast<std::int32_t>(ctx.gpr[3]) ? 1u : 0u);
    { const bool branch_taken = ctx.gpr[1] == 0u;
    // nop
      if (branch_taken) {
          goto L_0895DF08;
      }
      goto L_0895DEE4;
    }
L_0895DEE4:
    ctx.set_gpr(4, rt.memory().aot_load32(ctx.gpr[17] + static_cast<std::uint32_t>(16)));
    ctx.set_gpr(3, ctx.gpr[5] << 2u);
    ctx.set_gpr(6, ctx.gpr[4] + ctx.gpr[3]);
    ctx.set_gpr(5, rt.memory().aot_load32(ctx.gpr[6] + static_cast<std::uint32_t>(0)));
    ctx.set_gpr(3, ctx.gpr[16] << 2u);
    ctx.set_gpr(4, ctx.gpr[4] + ctx.gpr[3]);
    ctx.set_gpr(3, rt.memory().aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(0)));
    rt.memory().aot_store32(ctx.gpr[6] + static_cast<std::uint32_t>(0), ctx.gpr[3]);
    rt.memory().aot_store32(ctx.gpr[4] + static_cast<std::uint32_t>(0), ctx.gpr[5]);
    goto L_0895DF08;
L_0895DF08:
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
L_0895DF24:
    ctx.set_gpr(29, ctx.gpr[29] + static_cast<std::uint32_t>(-16));
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(12), ctx.gpr[31]);
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(8), ctx.gpr[17]);
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(4), ctx.gpr[16]);
    ctx.set_gpr(17, ctx.gpr[4] + 0u);
    ctx.set_gpr(3, rt.memory().aot_load8(ctx.gpr[4] + static_cast<std::uint32_t>(28)));
    { const bool branch_taken = ctx.gpr[3] == 0u;
    // nop
      if (branch_taken) {
          goto L_0895DF7C;
      }
      goto L_0895DF44;
    }
L_0895DF44:
    ctx.set_gpr(16, 0u + 0u);
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_0895DF6C;
      }
      goto L_0895DF50;
    }
L_0895DF50:
    ctx.set_gpr(3, ctx.gpr[16] << 2u);
    ctx.set_gpr(2, rt.memory().aot_load32(ctx.gpr[17] + static_cast<std::uint32_t>(16)));
    ctx.set_gpr(2, ctx.gpr[2] + ctx.gpr[3]);
    ctx.set_gpr(4, rt.memory().aot_load32(ctx.gpr[2] + static_cast<std::uint32_t>(0)));
    ctx.set_gpr(31, 0x0895DF68u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0080_entry, 80u, 598u, 0x08946B0Cu>(ctx, &aot_mem) && ctx.pc == 0x0895DF68u) goto L_0895DF68;
    return;
L_0895DF68:
    ctx.set_gpr(16, ctx.gpr[16] + static_cast<std::uint32_t>(1));
    goto L_0895DF6C;
L_0895DF6C:
    ctx.set_gpr(3, rt.memory().aot_load32(ctx.gpr[17] + static_cast<std::uint32_t>(20)));
    ctx.set_gpr(3, static_cast<std::int32_t>(ctx.gpr[16]) < static_cast<std::int32_t>(ctx.gpr[3]) ? 1u : 0u);
    { const bool branch_taken = ctx.gpr[3] != 0u;
    // nop
      if (branch_taken) {
          goto L_0895DF50;
      }
      goto L_0895DF7C;
    }
L_0895DF7C:
    rt.memory().aot_store32(ctx.gpr[17] + static_cast<std::uint32_t>(20), 0u);
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
L_0895DF98:
    ctx.set_gpr(29, ctx.gpr[29] + static_cast<std::uint32_t>(-32));
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(28), ctx.gpr[31]);
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(24), ctx.gpr[21]);
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(20), ctx.gpr[20]);
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(16), ctx.gpr[19]);
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(12), ctx.gpr[18]);
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(8), ctx.gpr[17]);
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(4), ctx.gpr[16]);
    ctx.set_gpr(17, ctx.gpr[4] + 0u);
    ctx.set_gpr(16, ctx.gpr[5] + 0u);
    ctx.set_gpr(21, ctx.gpr[6] + 0u);
    ctx.set_gpr(20, rt.memory().aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(8)));
    ctx.set_gpr(1, static_cast<std::int32_t>(ctx.gpr[20]) < static_cast<std::int32_t>(ctx.gpr[16]) ? 1u : 0u);
    { const bool branch_taken = ctx.gpr[1] == 0u;
    // nop
      if (branch_taken) {
          goto L_0895E0A4;
      }
      goto L_0895DFD4;
    }
L_0895DFD4:
    ctx.set_gpr(31, 0x0895DFDCu);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0081_entry, 81u, 312u, 0x089495E8u>(ctx, &aot_mem) && ctx.pc == 0x0895DFDCu) goto L_0895DFDC;
    return;
L_0895DFDC:
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_0895E090;
      }
      goto L_0895DFE4;
    }
L_0895DFE4:
    ctx.set_gpr(4, ctx.gpr[17] + 0u);
    ctx.set_gpr(31, 0x0895DFF0u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0081_entry, 81u, 41u, 0x0894835Cu>(ctx, &aot_mem) && ctx.pc == 0x0895DFF0u) goto L_0895DFF0;
    return;
L_0895DFF0:
    ctx.set_gpr(4, ctx.gpr[21] + 0u);
    ctx.set_gpr(5, ctx.gpr[2] + 0u);
    ctx.set_gpr(31, 0x0895E000u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0080_entry, 80u, 50u, 0x089443D4u>(ctx, &aot_mem) && ctx.pc == 0x0895E000u) goto L_0895E000;
    return;
L_0895E000:
    ctx.set_gpr(19, ctx.gpr[2] + 0u);
    { const bool branch_taken = ctx.gpr[19] == 0u;
    // nop
      if (branch_taken) {
          goto L_0895E018;
      }
      goto L_0895E00C;
    }
L_0895E00C:
    ctx.set_gpr(3, rt.memory().aot_load32(ctx.gpr[19] + static_cast<std::uint32_t>(4)));
    ctx.set_gpr(3, ctx.gpr[3] + static_cast<std::uint32_t>(1));
    rt.memory().aot_store32(ctx.gpr[19] + static_cast<std::uint32_t>(4), ctx.gpr[3]);
    goto L_0895E018;
L_0895E018:
    ctx.set_gpr(18, ctx.gpr[20] << 2u);
    ctx.set_gpr(3, rt.memory().aot_load32(ctx.gpr[17] + static_cast<std::uint32_t>(16)));
    ctx.set_gpr(3, ctx.gpr[3] + ctx.gpr[18]);
    ctx.set_gpr(4, rt.memory().aot_load32(ctx.gpr[3] + static_cast<std::uint32_t>(0)));
    { const bool branch_taken = ctx.gpr[4] == 0u;
    // nop
      if (branch_taken) {
          goto L_0895E038;
      }
      goto L_0895E030;
    }
L_0895E030:
    ctx.set_gpr(31, 0x0895E038u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0014_entry, 14u, 257u, 0x0883D454u>(ctx, &aot_mem) && ctx.pc == 0x0895E038u) goto L_0895E038;
    return;
L_0895E038:
    ctx.set_gpr(3, rt.memory().aot_load32(ctx.gpr[17] + static_cast<std::uint32_t>(8)));
    { const bool branch_taken = ctx.gpr[3] == 0u;
    // nop
      if (branch_taken) {
          goto L_0895E064;
      }
      goto L_0895E044;
    }
L_0895E044:
    { const bool branch_taken = static_cast<std::int32_t>(ctx.gpr[20]) < 0;
    // nop
      if (branch_taken) {
          goto L_0895E064;
      }
      goto L_0895E04C;
    }
L_0895E04C:
    ctx.set_gpr(1, static_cast<std::int32_t>(ctx.gpr[20]) < static_cast<std::int32_t>(ctx.gpr[3]) ? 1u : 0u);
    { const bool branch_taken = ctx.gpr[1] == 0u;
    // nop
      if (branch_taken) {
          goto L_0895E064;
      }
      goto L_0895E058;
    }
L_0895E058:
    ctx.set_gpr(3, rt.memory().aot_load32(ctx.gpr[17] + static_cast<std::uint32_t>(16)));
    ctx.set_gpr(3, ctx.gpr[3] + ctx.gpr[18]);
    rt.memory().aot_store32(ctx.gpr[3] + static_cast<std::uint32_t>(0), ctx.gpr[19]);
    goto L_0895E064;
L_0895E064:
    ctx.set_gpr(3, rt.memory().aot_load32(ctx.gpr[19] + static_cast<std::uint32_t>(4)));
    ctx.set_gpr(3, ctx.gpr[3] + static_cast<std::uint32_t>(-1));
    rt.memory().aot_store32(ctx.gpr[19] + static_cast<std::uint32_t>(4), ctx.gpr[3]);
    ctx.set_gpr(3, ctx.gpr[3] << 10u);
    ctx.set_gpr(3, ctx.gpr[3] >> 10u);
    { const bool branch_taken = ctx.gpr[3] != 0u;
    // nop
      if (branch_taken) {
          goto L_0895E08C;
      }
      goto L_0895E080;
    }
L_0895E080:
    ctx.set_gpr(4, ctx.gpr[19] + 0u);
    ctx.set_gpr(31, 0x0895E08Cu);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0080_entry, 80u, 556u, 0x089467C8u>(ctx, &aot_mem) && ctx.pc == 0x0895E08Cu) goto L_0895E08C;
    return;
L_0895E08C:
    ctx.set_gpr(20, ctx.gpr[20] + static_cast<std::uint32_t>(1));
    goto L_0895E090;
L_0895E090:
    ctx.set_gpr(3, static_cast<std::int32_t>(ctx.gpr[20]) < static_cast<std::int32_t>(ctx.gpr[16]) ? 1u : 0u);
    { const bool branch_taken = ctx.gpr[3] != 0u;
    // nop
      if (branch_taken) {
          goto L_0895DFE4;
      }
      goto L_0895E09C;
    }
L_0895E09C:
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_0895E114;
      }
      goto L_0895E0A4;
    }
L_0895E0A4:
    ctx.set_gpr(1, static_cast<std::int32_t>(ctx.gpr[16]) < static_cast<std::int32_t>(ctx.gpr[20]) ? 1u : 0u);
    { const bool branch_taken = ctx.gpr[1] == 0u;
    // nop
      if (branch_taken) {
          goto L_0895E114;
      }
      goto L_0895E0B0;
    }
L_0895E0B0:
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_0895E108;
      }
      goto L_0895E0B8;
    }
L_0895E0B8:
    ctx.set_gpr(18, ctx.gpr[20] << 2u);
    ctx.set_gpr(3, rt.memory().aot_load32(ctx.gpr[17] + static_cast<std::uint32_t>(16)));
    ctx.set_gpr(3, ctx.gpr[3] + ctx.gpr[18]);
    ctx.set_gpr(4, rt.memory().aot_load32(ctx.gpr[3] + static_cast<std::uint32_t>(0)));
    { const bool branch_taken = ctx.gpr[4] == 0u;
    // nop
      if (branch_taken) {
          goto L_0895E0D8;
      }
      goto L_0895E0D0;
    }
L_0895E0D0:
    ctx.set_gpr(31, 0x0895E0D8u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0014_entry, 14u, 257u, 0x0883D454u>(ctx, &aot_mem) && ctx.pc == 0x0895E0D8u) goto L_0895E0D8;
    return;
L_0895E0D8:
    ctx.set_gpr(3, rt.memory().aot_load32(ctx.gpr[17] + static_cast<std::uint32_t>(8)));
    { const bool branch_taken = ctx.gpr[3] == 0u;
    // nop
      if (branch_taken) {
          goto L_0895E104;
      }
      goto L_0895E0E4;
    }
L_0895E0E4:
    { const bool branch_taken = static_cast<std::int32_t>(ctx.gpr[20]) < 0;
    // nop
      if (branch_taken) {
          goto L_0895E104;
      }
      goto L_0895E0EC;
    }
L_0895E0EC:
    ctx.set_gpr(1, static_cast<std::int32_t>(ctx.gpr[20]) < static_cast<std::int32_t>(ctx.gpr[3]) ? 1u : 0u);
    { const bool branch_taken = ctx.gpr[1] == 0u;
    // nop
      if (branch_taken) {
          goto L_0895E104;
      }
      goto L_0895E0F8;
    }
L_0895E0F8:
    ctx.set_gpr(3, rt.memory().aot_load32(ctx.gpr[17] + static_cast<std::uint32_t>(16)));
    ctx.set_gpr(3, ctx.gpr[3] + ctx.gpr[18]);
    rt.memory().aot_store32(ctx.gpr[3] + static_cast<std::uint32_t>(0), 0u);
    goto L_0895E104;
L_0895E104:
    ctx.set_gpr(20, ctx.gpr[20] + static_cast<std::uint32_t>(-1));
    goto L_0895E108;
L_0895E108:
    ctx.set_gpr(1, static_cast<std::int32_t>(ctx.gpr[20]) < static_cast<std::int32_t>(ctx.gpr[16]) ? 1u : 0u);
    { const bool branch_taken = ctx.gpr[1] == 0u;
    // nop
      if (branch_taken) {
          goto L_0895E0B8;
      }
      goto L_0895E114;
    }
L_0895E114:
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
L_0895E13C:
    jump_target = ctx.gpr[31];
    // nop
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_0895E144:
    ctx.set_gpr(29, ctx.gpr[29] + static_cast<std::uint32_t>(-16));
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(12), ctx.gpr[31]);
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(8), ctx.gpr[16]);
    ctx.set_gpr(16, ctx.gpr[4] + 0u);
    ctx.set_gpr(25, rt.memory().aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(0)));
    ctx.set_gpr(25, rt.memory().aot_load32(ctx.gpr[25] + static_cast<std::uint32_t>(128)));
    jump_target = ctx.gpr[25];
    ctx.set_gpr(31, 0x0895E164u);
    // nop
    ctx.pc = jump_target;
    if (rt.invoke_chained_call(ctx, &aot_mem) && ctx.pc == 0x0895E164u) goto L_0895E164;
    return;
L_0895E164:
    { const bool branch_taken = ctx.gpr[2] == 0u;
    // nop
      if (branch_taken) {
          goto L_0895E194;
      }
      goto L_0895E16C;
    }
L_0895E16C:
    ctx.set_gpr(4, ctx.gpr[16] + 0u);
    ctx.set_gpr(25, rt.memory().aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(0)));
    ctx.set_gpr(25, rt.memory().aot_load32(ctx.gpr[25] + static_cast<std::uint32_t>(124)));
    jump_target = ctx.gpr[25];
    ctx.set_gpr(31, 0x0895E180u);
    // nop
    ctx.pc = jump_target;
    if (rt.invoke_chained_call(ctx, &aot_mem) && ctx.pc == 0x0895E180u) goto L_0895E180;
    return;
L_0895E180:
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_0895E194;
      }
      goto L_0895E188;
    }
L_0895E188:
    ctx.set_gpr(4, ctx.gpr[16] + 0u);
    ctx.set_gpr(31, 0x0895E194u);
    // nop
    goto L_0895E2E4;
L_0895E194:
    ctx.set_gpr(3, rt.memory().aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(80)));
    { const bool branch_taken = static_cast<std::int32_t>(ctx.gpr[3]) > 0;
    // nop
      if (branch_taken) {
          goto L_0895E188;
      }
      goto L_0895E1A0;
    }
L_0895E1A0:
    ctx.set_gpr(3, rt.memory().aot_load8(ctx.gpr[16] + static_cast<std::uint32_t>(45)));
    { const bool branch_taken = ctx.gpr[3] != 0u;
    // nop
      if (branch_taken) {
          goto L_0895E1C4;
      }
      goto L_0895E1AC;
    }
L_0895E1AC:
    ctx.set_gpr(5, rt.memory().aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(32)));
    { const bool branch_taken = ctx.gpr[5] == 0u;
    // nop
      if (branch_taken) {
          goto L_0895E1C4;
      }
      goto L_0895E1B8;
    }
L_0895E1B8:
    ctx.set_gpr(4, ctx.gpr[16] + 0u);
    ctx.set_gpr(31, 0x0895E1C4u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0081_entry, 81u, 22u, 0x08948218u>(ctx, &aot_mem) && ctx.pc == 0x0895E1C4u) goto L_0895E1C4;
    return;
L_0895E1C4:
    ctx.set_gpr(31, rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(12)));
    ctx.set_gpr(16, rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(8)));
    ctx.set_gpr(29, ctx.gpr[29] + static_cast<std::uint32_t>(16));
    jump_target = ctx.gpr[31];
    // nop
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_0895E1D8:
    rt.memory().aot_store32(ctx.gpr[4] + static_cast<std::uint32_t>(24), ctx.gpr[5]);
    ctx.set_gpr(2, 0u + 0u);
    jump_target = ctx.gpr[31];
    // nop
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_0895E1E8:
    rt.memory().aot_store32(ctx.gpr[4] + static_cast<std::uint32_t>(24), ctx.gpr[5]);
    ctx.set_gpr(2, 0u + 0u);
    jump_target = ctx.gpr[31];
    // nop
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_0895E1F8:
    ctx.set_gpr(2, rt.memory().aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(80)));
    { const bool branch_taken = ctx.gpr[2] == 0u;
    // nop
      if (branch_taken) {
          goto L_0895E21C;
      }
      goto L_0895E204;
    }
L_0895E204:
    ctx.set_gpr(2, ctx.gpr[2] + static_cast<std::uint32_t>(-1));
    ctx.set_gpr(2, ctx.gpr[2] << 2u);
    ctx.set_gpr(2, ctx.gpr[4] + ctx.gpr[2]);
    ctx.set_gpr(2, rt.memory().aot_load32(ctx.gpr[2] + static_cast<std::uint32_t>(48)));
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_0895E224;
      }
      goto L_0895E21C;
    }
L_0895E21C:
    ctx.set_gpr(2, 2245u << 16u);
    ctx.set_gpr(2, rt.memory().aot_load32(ctx.gpr[2] + static_cast<std::uint32_t>(30876)));
    goto L_0895E224;
L_0895E224:
    jump_target = ctx.gpr[31];
    // nop
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_0895E22C:
    { const bool branch_taken = static_cast<std::int32_t>(ctx.gpr[5]) < 0;
    // nop
      if (branch_taken) {
          goto L_0895E258;
      }
      goto L_0895E234;
    }
L_0895E234:
    ctx.set_gpr(2, rt.memory().aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(80)));
    ctx.set_gpr(1, static_cast<std::int32_t>(ctx.gpr[5]) < static_cast<std::int32_t>(ctx.gpr[2]) ? 1u : 0u);
    { const bool branch_taken = ctx.gpr[1] == 0u;
    // nop
      if (branch_taken) {
          goto L_0895E258;
      }
      goto L_0895E244;
    }
L_0895E244:
    ctx.set_gpr(2, ctx.gpr[5] << 2u);
    ctx.set_gpr(2, ctx.gpr[2] + ctx.gpr[4]);
    ctx.set_gpr(2, rt.memory().aot_load32(ctx.gpr[2] + static_cast<std::uint32_t>(48)));
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_0895E260;
      }
      goto L_0895E258;
    }
L_0895E258:
    ctx.set_gpr(2, 2245u << 16u);
    ctx.set_gpr(2, rt.memory().aot_load32(ctx.gpr[2] + static_cast<std::uint32_t>(30876)));
    goto L_0895E260;
L_0895E260:
    jump_target = ctx.gpr[31];
    // nop
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_0895E268:
    ctx.set_gpr(29, ctx.gpr[29] + static_cast<std::uint32_t>(-16));
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(12), ctx.gpr[31]);
    ctx.set_gpr(2, rt.memory().aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(80)));
    { const bool branch_taken = ctx.gpr[2] != 0u;
    // nop
      if (branch_taken) {
          goto L_0895E290;
      }
      goto L_0895E27C;
    }
L_0895E27C:
    ctx.set_gpr(2, 2245u << 16u);
    ctx.set_gpr(2, rt.memory().aot_load32(ctx.gpr[2] + static_cast<std::uint32_t>(31420)));
    ctx.set_gpr(3, ctx.gpr[2] + static_cast<std::uint32_t>(1));
    ctx.set_gpr(2, 2245u << 16u);
    rt.memory().aot_store32(ctx.gpr[2] + static_cast<std::uint32_t>(31420), ctx.gpr[3]);
    goto L_0895E290;
L_0895E290:
    ctx.set_gpr(3, rt.memory().aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(80)));
    { const bool branch_taken = static_cast<std::int32_t>(ctx.gpr[3]) < 0;
    // nop
      if (branch_taken) {
          goto L_0895E2D0;
      }
      goto L_0895E29C;
    }
L_0895E29C:
    ctx.set_gpr(1, static_cast<std::int32_t>(ctx.gpr[3]) < 8 ? 1u : 0u);
    { const bool branch_taken = ctx.gpr[1] == 0u;
    // nop
      if (branch_taken) {
          goto L_0895E2D0;
      }
      goto L_0895E2A8;
    }
L_0895E2A8:
    ctx.set_gpr(2, ctx.gpr[3] + static_cast<std::uint32_t>(1));
    rt.memory().aot_store32(ctx.gpr[4] + static_cast<std::uint32_t>(80), ctx.gpr[2]);
    ctx.set_gpr(2, ctx.gpr[3] << 2u);
    ctx.set_gpr(2, ctx.gpr[4] + ctx.gpr[2]);
    ctx.set_gpr(4, ctx.gpr[2] + static_cast<std::uint32_t>(48));
    ctx.set_gpr(31, 0x0895E2C4u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0085_entry, 85u, 61u, 0x089584C4u>(ctx, &aot_mem) && ctx.pc == 0x0895E2C4u) goto L_0895E2C4;
    return;
L_0895E2C4:
    ctx.set_gpr(2, 0u + 0u);
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_0895E2D4;
      }
      goto L_0895E2D0;
    }
L_0895E2D0:
    ctx.set_gpr(2, 0u + static_cast<std::uint32_t>(1));
    goto L_0895E2D4;
L_0895E2D4:
    ctx.set_gpr(31, rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(12)));
    ctx.set_gpr(29, ctx.gpr[29] + static_cast<std::uint32_t>(16));
    jump_target = ctx.gpr[31];
    // nop
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_0895E2E4:
    ctx.set_gpr(29, ctx.gpr[29] + static_cast<std::uint32_t>(-16));
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(12), ctx.gpr[31]);
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(8), ctx.gpr[17]);
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(4), ctx.gpr[16]);
    ctx.set_gpr(17, ctx.gpr[4] + 0u);
    ctx.set_gpr(2, rt.memory().aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(80)));
    { const bool branch_taken = static_cast<std::int32_t>(ctx.gpr[2]) <= 0;
    // nop
      if (branch_taken) {
          goto L_0895E354;
      }
      goto L_0895E304;
    }
L_0895E304:
    ctx.set_gpr(2, ctx.gpr[2] + static_cast<std::uint32_t>(-1));
    rt.memory().aot_store32(ctx.gpr[17] + static_cast<std::uint32_t>(80), ctx.gpr[2]);
    ctx.set_gpr(2, ctx.gpr[2] << 2u);
    ctx.set_gpr(2, ctx.gpr[17] + ctx.gpr[2]);
    ctx.set_gpr(16, rt.memory().aot_load32(ctx.gpr[2] + static_cast<std::uint32_t>(48)));
    ctx.set_gpr(4, ctx.gpr[2] + static_cast<std::uint32_t>(48));
    ctx.set_gpr(5, 0u + 0u);
    ctx.set_gpr(31, 0x0895E328u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0085_entry, 85u, 61u, 0x089584C4u>(ctx, &aot_mem) && ctx.pc == 0x0895E328u) goto L_0895E328;
    return;
L_0895E328:
    ctx.set_gpr(2, rt.memory().aot_load32(ctx.gpr[17] + static_cast<std::uint32_t>(80)));
    { const bool branch_taken = ctx.gpr[2] != 0u;
    // nop
      if (branch_taken) {
          goto L_0895E348;
      }
      goto L_0895E334;
    }
L_0895E334:
    ctx.set_gpr(2, 2245u << 16u);
    ctx.set_gpr(2, rt.memory().aot_load32(ctx.gpr[2] + static_cast<std::uint32_t>(31420)));
    ctx.set_gpr(3, ctx.gpr[2] + static_cast<std::uint32_t>(-1));
    ctx.set_gpr(2, 2245u << 16u);
    rt.memory().aot_store32(ctx.gpr[2] + static_cast<std::uint32_t>(31420), ctx.gpr[3]);
    goto L_0895E348;
L_0895E348:
    ctx.set_gpr(2, ctx.gpr[16] + 0u);
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_0895E358;
      }
      goto L_0895E354;
    }
L_0895E354:
    ctx.set_gpr(2, 0u + 0u);
    goto L_0895E358;
L_0895E358:
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
L_0895E370:
    ctx.set_gpr(29, ctx.gpr[29] + static_cast<std::uint32_t>(-16));
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(12), ctx.gpr[31]);
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(8), ctx.gpr[16]);
    ctx.set_gpr(16, ctx.gpr[4] + 0u);
    ctx.set_gpr(31, 0x0895E388u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0064_entry, 64u, 444u, 0x08905FF0u>(ctx, &aot_mem) && ctx.pc == 0x0895E388u) goto L_0895E388;
    return;
L_0895E388:
    ctx.set_gpr(2, rt.memory().aot_load8(ctx.gpr[2] + static_cast<std::uint32_t>(22)));
    { const bool branch_taken = ctx.gpr[2] == 0u;
    // nop
      if (branch_taken) {
          goto L_0895E3A0;
      }
      goto L_0895E394;
    }
L_0895E394:
    ctx.set_gpr(2, 0u + 0u);
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_0895E3A4;
      }
      goto L_0895E3A0;
    }
L_0895E3A0:
    ctx.set_gpr(2, rt.memory().aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(80)));
    goto L_0895E3A4;
L_0895E3A4:
    ctx.set_gpr(31, rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(12)));
    ctx.set_gpr(16, rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(8)));
    ctx.set_gpr(29, ctx.gpr[29] + static_cast<std::uint32_t>(16));
    jump_target = ctx.gpr[31];
    // nop
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_0895E3B8:
    ctx.set_gpr(29, ctx.gpr[29] + static_cast<std::uint32_t>(-16));
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(12), ctx.gpr[31]);
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(8), ctx.gpr[17]);
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(4), ctx.gpr[16]);
    ctx.set_gpr(17, ctx.gpr[4] + 0u);
    ctx.set_gpr(4, rt.memory().aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(12)));
    ctx.set_gpr(25, rt.memory().aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(0)));
    ctx.set_gpr(25, rt.memory().aot_load32(ctx.gpr[25] + static_cast<std::uint32_t>(140)));
    jump_target = ctx.gpr[25];
    ctx.set_gpr(31, 0x0895E3E0u);
    // nop
    ctx.pc = jump_target;
    if (rt.invoke_chained_call(ctx, &aot_mem) && ctx.pc == 0x0895E3E0u) goto L_0895E3E0;
    return;
L_0895E3E0:
    ctx.set_gpr(2, rt.memory().aot_load32(ctx.gpr[17] + static_cast<std::uint32_t>(8)));
    ctx.set_gpr(16, rt.memory().aot_load32(ctx.gpr[2] + static_cast<std::uint32_t>(8)));
    ctx.set_gpr(4, rt.memory().aot_load32(ctx.gpr[17] + static_cast<std::uint32_t>(12)));
    ctx.set_gpr(25, rt.memory().aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(0)));
    ctx.set_gpr(25, rt.memory().aot_load32(ctx.gpr[25] + static_cast<std::uint32_t>(124)));
    jump_target = ctx.gpr[25];
    ctx.set_gpr(31, 0x0895E3FCu);
    // nop
    ctx.pc = jump_target;
    if (rt.invoke_chained_call(ctx, &aot_mem) && ctx.pc == 0x0895E3FCu) goto L_0895E3FC;
    return;
L_0895E3FC:
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
L_0895E418:
    ctx.set_gpr(29, ctx.gpr[29] + static_cast<std::uint32_t>(-32));
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(28), ctx.gpr[31]);
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(24), ctx.gpr[19]);
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(20), ctx.gpr[18]);
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(16), ctx.gpr[17]);
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(12), ctx.gpr[16]);
    ctx.set_gpr(19, ctx.gpr[4] + 0u);
    ctx.set_gpr(18, ctx.gpr[5] + 0u);
    ctx.set_gpr(2, 2245u << 16u);
    ctx.set_gpr(7, rt.memory().aot_load32(ctx.gpr[2] + static_cast<std::uint32_t>(31424)));
    ctx.set_gpr(2, 2245u << 16u);
    ctx.set_gpr(3, rt.memory().aot_load32(ctx.gpr[2] + static_cast<std::uint32_t>(31428)));
    ctx.set_gpr(6, ctx.gpr[7] + static_cast<std::uint32_t>(1));
    ctx.set_gpr(2, ctx.gpr[6] < ctx.gpr[7] ? 1u : 0u);
    ctx.set_gpr(3, ctx.gpr[2] + ctx.gpr[3]);
    ctx.set_gpr(2, 2245u << 16u);
    rt.memory().aot_store32(ctx.gpr[2] + static_cast<std::uint32_t>(31424), ctx.gpr[6]);
    ctx.set_gpr(2, 2245u << 16u);
    rt.memory().aot_store32(ctx.gpr[2] + static_cast<std::uint32_t>(31428), ctx.gpr[3]);
    ctx.set_gpr(2, rt.memory().aot_load32(ctx.gpr[5] + static_cast<std::uint32_t>(4)));
    ctx.set_gpr(2, ctx.gpr[2] + static_cast<std::uint32_t>(1));
    rt.memory().aot_store32(ctx.gpr[5] + static_cast<std::uint32_t>(4), ctx.gpr[2]);
    ctx.set_gpr(17, rt.memory().aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(8)));
    goto L_0895E474;
L_0895E474:
    ctx.set_gpr(4, rt.memory().aot_load32(ctx.gpr[19] + static_cast<std::uint32_t>(12)));
    ctx.set_gpr(25, rt.memory().aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(0)));
    ctx.set_gpr(25, rt.memory().aot_load32(ctx.gpr[25] + static_cast<std::uint32_t>(140)));
    jump_target = ctx.gpr[25];
    ctx.set_gpr(31, 0x0895E488u);
    // nop
    ctx.pc = jump_target;
    if (rt.invoke_chained_call(ctx, &aot_mem) && ctx.pc == 0x0895E488u) goto L_0895E488;
    return;
L_0895E488:
    ctx.set_gpr(2, rt.memory().aot_load32(ctx.gpr[19] + static_cast<std::uint32_t>(8)));
    ctx.set_gpr(2, rt.memory().aot_load32(ctx.gpr[2] + static_cast<std::uint32_t>(8)));
    ctx.set_gpr(3, rt.memory().aot_load32(ctx.gpr[17] + static_cast<std::uint32_t>(12)));
    ctx.set_gpr(2, ctx.gpr[2] + static_cast<std::uint32_t>(1));
    ctx.set_gpr(2, static_cast<std::int32_t>(ctx.gpr[3]) < static_cast<std::int32_t>(ctx.gpr[2]) ? 1u : 0u);
    { const bool branch_taken = ctx.gpr[2] != 0u;
    // nop
      if (branch_taken) {
          goto L_0895E568;
      }
      goto L_0895E4A4;
    }
L_0895E4A4:
    ctx.set_gpr(16, rt.memory().aot_load32(ctx.gpr[17] + static_cast<std::uint32_t>(8)));
    ctx.set_gpr(2, rt.memory().aot_load32(ctx.gpr[17] + static_cast<std::uint32_t>(12)));
    ctx.set_gpr(1, static_cast<std::int32_t>(ctx.gpr[16]) < static_cast<std::int32_t>(ctx.gpr[2]) ? 1u : 0u);
    { const bool branch_taken = ctx.gpr[1] == 0u;
    // nop
      if (branch_taken) {
          goto L_0895E4CC;
      }
      goto L_0895E4B8;
    }
L_0895E4B8:
    ctx.set_gpr(2, rt.memory().aot_load32(ctx.gpr[17] + static_cast<std::uint32_t>(8)));
    ctx.set_gpr(2, ctx.gpr[2] + static_cast<std::uint32_t>(1));
    rt.memory().aot_store32(ctx.gpr[17] + static_cast<std::uint32_t>(8), ctx.gpr[2]);
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_0895E4E0;
      }
      goto L_0895E4CC;
    }
L_0895E4CC:
    ctx.set_gpr(5, ctx.gpr[16] + static_cast<std::uint32_t>(1));
    ctx.set_gpr(4, ctx.gpr[17] + 0u);
    ctx.set_gpr(6, 0u + static_cast<std::uint32_t>(4));
    ctx.set_gpr(31, 0x0895E4E0u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0066_entry, 66u, 795u, 0x0890FB1Cu>(ctx, &aot_mem) && ctx.pc == 0x0895E4E0u) goto L_0895E4E0;
    return;
L_0895E4E0:
    ctx.set_gpr(3, ctx.gpr[16] << 2u);
    ctx.set_gpr(2, rt.memory().aot_load32(ctx.gpr[17] + static_cast<std::uint32_t>(16)));
    ctx.set_gpr(2, ctx.gpr[2] + ctx.gpr[3]);
    rt.memory().aot_store32(ctx.gpr[2] + static_cast<std::uint32_t>(0), ctx.gpr[18]);
    ctx.set_gpr(16, 0u + 0u);
    ctx.set_gpr(2, rt.memory().aot_load32(ctx.gpr[19] + static_cast<std::uint32_t>(8)));
    { const bool branch_taken = ctx.gpr[17] == ctx.gpr[2];
    // nop
      if (branch_taken) {
          goto L_0895E51C;
      }
      goto L_0895E500;
    }
L_0895E500:
    ctx.set_gpr(4, ctx.gpr[17] + 0u);
    ctx.set_gpr(5, rt.memory().aot_load32(ctx.gpr[2] + static_cast<std::uint32_t>(8)));
    ctx.set_gpr(6, rt.memory().aot_load32(ctx.gpr[2] + static_cast<std::uint32_t>(16)));
    ctx.set_gpr(31, 0x0895E514u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0066_entry, 66u, 844u, 0x0890FFD4u>(ctx, &aot_mem) && ctx.pc == 0x0895E514u) goto L_0895E514;
    return;
L_0895E514:
    ctx.set_gpr(16, rt.memory().aot_load32(ctx.gpr[19] + static_cast<std::uint32_t>(8)));
    rt.memory().aot_store32(ctx.gpr[19] + static_cast<std::uint32_t>(8), ctx.gpr[17]);
    goto L_0895E51C;
L_0895E51C:
    ctx.set_gpr(4, rt.memory().aot_load32(ctx.gpr[19] + static_cast<std::uint32_t>(12)));
    ctx.set_gpr(25, rt.memory().aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(0)));
    ctx.set_gpr(25, rt.memory().aot_load32(ctx.gpr[25] + static_cast<std::uint32_t>(124)));
    jump_target = ctx.gpr[25];
    ctx.set_gpr(31, 0x0895E530u);
    // nop
    ctx.pc = jump_target;
    if (rt.invoke_chained_call(ctx, &aot_mem) && ctx.pc == 0x0895E530u) goto L_0895E530;
    return;
L_0895E530:
    { const bool branch_taken = ctx.gpr[16] == 0u;
    // nop
      if (branch_taken) {
          goto L_0895E560;
      }
      goto L_0895E538;
    }
L_0895E538:
    ctx.set_gpr(3, rt.memory().aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(4)));
    ctx.set_gpr(3, ctx.gpr[3] + static_cast<std::uint32_t>(-1));
    rt.memory().aot_store32(ctx.gpr[16] + static_cast<std::uint32_t>(4), ctx.gpr[3]);
    ctx.set_gpr(3, ctx.gpr[3] << 10u);
    ctx.set_gpr(3, ctx.gpr[3] >> 10u);
    { const bool branch_taken = ctx.gpr[3] != 0u;
    // nop
      if (branch_taken) {
          goto L_0895E560;
      }
      goto L_0895E554;
    }
L_0895E554:
    ctx.set_gpr(4, ctx.gpr[16] + 0u);
    ctx.set_gpr(31, 0x0895E560u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0080_entry, 80u, 556u, 0x089467C8u>(ctx, &aot_mem) && ctx.pc == 0x0895E560u) goto L_0895E560;
    return;
L_0895E560:
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_0895E5D0;
      }
      goto L_0895E568;
    }
L_0895E568:
    ctx.set_gpr(4, rt.memory().aot_load32(ctx.gpr[19] + static_cast<std::uint32_t>(12)));
    ctx.set_gpr(25, rt.memory().aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(0)));
    ctx.set_gpr(25, rt.memory().aot_load32(ctx.gpr[25] + static_cast<std::uint32_t>(124)));
    jump_target = ctx.gpr[25];
    ctx.set_gpr(31, 0x0895E57Cu);
    // nop
    ctx.pc = jump_target;
    if (rt.invoke_chained_call(ctx, &aot_mem) && ctx.pc == 0x0895E57Cu) goto L_0895E57C;
    return;
L_0895E57C:
    ctx.set_gpr(4, ctx.gpr[19] + 0u);
    ctx.set_gpr(31, 0x0895E588u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0081_entry, 81u, 41u, 0x0894835Cu>(ctx, &aot_mem) && ctx.pc == 0x0895E588u) goto L_0895E588;
    return;
L_0895E588:
    ctx.set_gpr(4, ctx.gpr[2] + 0u);
    ctx.set_gpr(31, 0x0895E594u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0056_entry, 56u, 540u, 0x088E6CE4u>(ctx, &aot_mem) && ctx.pc == 0x0895E594u) goto L_0895E594;
    return;
L_0895E594:
    ctx.set_gpr(17, ctx.gpr[2] + 0u);
    ctx.set_gpr(4, ctx.gpr[19] + 0u);
    ctx.set_gpr(31, 0x0895E5A4u);
    // nop
    goto L_0895E3B8;
L_0895E5A4:
    ctx.set_gpr(5, ctx.gpr[2] + static_cast<std::uint32_t>(4));
    ctx.set_gpr(2, rt.memory().aot_load32(ctx.gpr[17] + static_cast<std::uint32_t>(8)));
    ctx.set_gpr(2, static_cast<std::int32_t>(ctx.gpr[5]) < static_cast<std::int32_t>(ctx.gpr[2]) ? 1u : 0u);
    { const bool branch_taken = ctx.gpr[2] != 0u;
    // nop
      if (branch_taken) {
          goto L_0895E474;
      }
      goto L_0895E5B8;
    }
L_0895E5B8:
    ctx.set_gpr(4, ctx.gpr[17] + 0u);
    ctx.set_gpr(6, 0u + static_cast<std::uint32_t>(4));
    ctx.set_gpr(31, 0x0895E5C8u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0066_entry, 66u, 785u, 0x0890FA2Cu>(ctx, &aot_mem) && ctx.pc == 0x0895E5C8u) goto L_0895E5C8;
    return;
L_0895E5C8:
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_0895E474;
      }
      goto L_0895E5D0;
    }
L_0895E5D0:
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
L_0895E5F0:
    ctx.set_gpr(29, ctx.gpr[29] + static_cast<std::uint32_t>(-32));
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(12), ctx.gpr[31]);
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(8), ctx.gpr[17]);
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(4), ctx.gpr[16]);
    ctx.set_gpr(17, ctx.gpr[4] + 0u);
    ctx.set_gpr(16, ctx.gpr[5] + 0u);
    ctx.set_gpr(2, 2245u << 16u);
    ctx.set_gpr(6, rt.memory().aot_load32(ctx.gpr[2] + static_cast<std::uint32_t>(31424)));
    ctx.set_gpr(2, 2245u << 16u);
    ctx.set_gpr(3, rt.memory().aot_load32(ctx.gpr[2] + static_cast<std::uint32_t>(31428)));
    ctx.set_gpr(5, ctx.gpr[6] + static_cast<std::uint32_t>(-1));
    ctx.set_gpr(2, ctx.gpr[5] < ctx.gpr[6] ? 1u : 0u);
    ctx.set_gpr(2, ctx.gpr[2] + ctx.gpr[3]);
    ctx.set_gpr(3, ctx.gpr[2] + static_cast<std::uint32_t>(-1));
    ctx.set_gpr(2, 2245u << 16u);
    rt.memory().aot_store32(ctx.gpr[2] + static_cast<std::uint32_t>(31424), ctx.gpr[5]);
    ctx.set_gpr(2, 2245u << 16u);
    rt.memory().aot_store32(ctx.gpr[2] + static_cast<std::uint32_t>(31428), ctx.gpr[3]);
    ctx.set_gpr(4, rt.memory().aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(12)));
    ctx.set_gpr(25, rt.memory().aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(0)));
    ctx.set_gpr(25, rt.memory().aot_load32(ctx.gpr[25] + static_cast<std::uint32_t>(140)));
    jump_target = ctx.gpr[25];
    ctx.set_gpr(31, 0x0895E64Cu);
    // nop
    ctx.pc = jump_target;
    if (rt.invoke_chained_call(ctx, &aot_mem) && ctx.pc == 0x0895E64Cu) goto L_0895E64C;
    return;
L_0895E64C:
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(28), ctx.gpr[16]);
    ctx.set_gpr(16, rt.memory().aot_load32(ctx.gpr[17] + static_cast<std::uint32_t>(8)));
    ctx.set_gpr(4, ctx.gpr[16] + 0u);
    ctx.set_gpr(5, ctx.gpr[29] + static_cast<std::uint32_t>(28));
    ctx.set_gpr(6, 0u + 0u);
    ctx.set_gpr(31, 0x0895E668u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0018_entry, 18u, 462u, 0x0884D888u>(ctx, &aot_mem) && ctx.pc == 0x0895E668u) goto L_0895E668;
    return;
L_0895E668:
    { const bool branch_taken = static_cast<std::int32_t>(ctx.gpr[2]) < 0;
    // nop
      if (branch_taken) {
          goto L_0895E680;
      }
      goto L_0895E670;
    }
L_0895E670:
    ctx.set_gpr(4, ctx.gpr[16] + 0u);
    ctx.set_gpr(5, ctx.gpr[2] + 0u);
    ctx.set_gpr(31, 0x0895E680u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0067_entry, 67u, 9u, 0x089100E0u>(ctx, &aot_mem) && ctx.pc == 0x0895E680u) goto L_0895E680;
    return;
L_0895E680:
    ctx.set_gpr(4, rt.memory().aot_load32(ctx.gpr[17] + static_cast<std::uint32_t>(12)));
    ctx.set_gpr(25, rt.memory().aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(0)));
    ctx.set_gpr(25, rt.memory().aot_load32(ctx.gpr[25] + static_cast<std::uint32_t>(124)));
    jump_target = ctx.gpr[25];
    ctx.set_gpr(31, 0x0895E694u);
    // nop
    ctx.pc = jump_target;
    if (rt.invoke_chained_call(ctx, &aot_mem) && ctx.pc == 0x0895E694u) goto L_0895E694;
    return;
L_0895E694:
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
L_0895E6AC:
    ctx.set_gpr(29, ctx.gpr[29] + static_cast<std::uint32_t>(-16));
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(12), ctx.gpr[31]);
    ctx.set_gpr(4, rt.memory().aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(12)));
    ctx.set_gpr(25, rt.memory().aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(0)));
    ctx.set_gpr(25, rt.memory().aot_load32(ctx.gpr[25] + static_cast<std::uint32_t>(92)));
    jump_target = ctx.gpr[25];
    ctx.set_gpr(31, 0x0895E6C8u);
    // nop
    ctx.pc = jump_target;
    if (rt.invoke_chained_call(ctx, &aot_mem) && ctx.pc == 0x0895E6C8u) goto L_0895E6C8;
    return;
L_0895E6C8:
    ctx.set_gpr(31, rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(12)));
    ctx.set_gpr(29, ctx.gpr[29] + static_cast<std::uint32_t>(16));
    jump_target = ctx.gpr[31];
    // nop
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_0895E6D8:
    ctx.set_gpr(29, ctx.gpr[29] + static_cast<std::uint32_t>(-32));
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(12), ctx.gpr[31]);
    ctx.set_gpr(31, 0x0895E6E8u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0078_entry, 78u, 215u, 0x0893CDCCu>(ctx, &aot_mem) && ctx.pc == 0x0895E6E8u) goto L_0895E6E8;
    return;
L_0895E6E8:
    ctx.set_gpr(4, rt.memory().aot_load32(ctx.gpr[2] + static_cast<std::uint32_t>(0)));
    ctx.set_gpr(31, 0x0895E6F4u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0078_entry, 78u, 199u, 0x0893CC68u>(ctx, &aot_mem) && ctx.pc == 0x0895E6F4u) goto L_0895E6F4;
    return;
L_0895E6F4:
    ctx.set_gpr(4, ctx.gpr[2] + 0u);
    ctx.set_gpr(31, 0x0895E700u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0056_entry, 56u, 491u, 0x088E6880u>(ctx, &aot_mem) && ctx.pc == 0x0895E700u) goto L_0895E700;
    return;
L_0895E700:
    ctx.set_gpr(3, 2245u << 16u);
    rt.memory().aot_store32(ctx.gpr[3] + static_cast<std::uint32_t>(31432), ctx.gpr[2]);
    ctx.set_gpr(31, 0x0895E710u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0078_entry, 78u, 215u, 0x0893CDCCu>(ctx, &aot_mem) && ctx.pc == 0x0895E710u) goto L_0895E710;
    return;
L_0895E710:
    ctx.set_gpr(4, rt.memory().aot_load32(ctx.gpr[2] + static_cast<std::uint32_t>(0)));
    ctx.set_gpr(31, 0x0895E71Cu);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0078_entry, 78u, 199u, 0x0893CC68u>(ctx, &aot_mem) && ctx.pc == 0x0895E71Cu) goto L_0895E71C;
    return;
L_0895E71C:
    ctx.set_gpr(4, ctx.gpr[2] + 0u);
    ctx.set_gpr(31, 0x0895E728u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0056_entry, 56u, 563u, 0x088E6EC8u>(ctx, &aot_mem) && ctx.pc == 0x0895E728u) goto L_0895E728;
    return;
L_0895E728:
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(28), ctx.gpr[2]);
    ctx.set_gpr(3, 0u + static_cast<std::uint32_t>(1));
    rt.memory().aot_store8(ctx.gpr[2] + static_cast<std::uint32_t>(44), static_cast<std::uint8_t>(ctx.gpr[3]));
    ctx.set_gpr(4, ctx.gpr[2] + 0u);
    ctx.set_gpr(25, rt.memory().aot_load32(ctx.gpr[2] + static_cast<std::uint32_t>(0)));
    ctx.set_gpr(25, rt.memory().aot_load32(ctx.gpr[25] + static_cast<std::uint32_t>(220)));
    jump_target = ctx.gpr[25];
    ctx.set_gpr(31, 0x0895E748u);
    // nop
    ctx.pc = jump_target;
    if (rt.invoke_chained_call(ctx, &aot_mem) && ctx.pc == 0x0895E748u) goto L_0895E748;
    return;
L_0895E748:
    ctx.set_gpr(2, 2245u << 16u);
    ctx.set_gpr(4, rt.memory().aot_load32(ctx.gpr[2] + static_cast<std::uint32_t>(31432)));
    ctx.set_gpr(5, rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(28)));
    ctx.set_gpr(25, rt.memory().aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(0)));
    ctx.set_gpr(25, rt.memory().aot_load32(ctx.gpr[25] + static_cast<std::uint32_t>(96)));
    jump_target = ctx.gpr[25];
    ctx.set_gpr(31, 0x0895E764u);
    // nop
    ctx.pc = jump_target;
    if (rt.invoke_chained_call(ctx, &aot_mem) && ctx.pc == 0x0895E764u) goto L_0895E764;
    return;
L_0895E764:
    ctx.set_gpr(4, rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(28)));
    { const bool branch_taken = ctx.gpr[4] == 0u;
    // nop
      if (branch_taken) {
          goto L_0895E778;
      }
      goto L_0895E770;
    }
L_0895E770:
    ctx.set_gpr(31, 0x0895E778u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0014_entry, 14u, 257u, 0x0883D454u>(ctx, &aot_mem) && ctx.pc == 0x0895E778u) goto L_0895E778;
    return;
L_0895E778:
    ctx.set_gpr(31, rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(12)));
    ctx.set_gpr(29, ctx.gpr[29] + static_cast<std::uint32_t>(32));
    jump_target = ctx.gpr[31];
    // nop
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_0895E788:
    ctx.set_gpr(29, ctx.gpr[29] + static_cast<std::uint32_t>(-16));
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(12), ctx.gpr[31]);
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(8), ctx.gpr[16]);
    ctx.set_gpr(2, 2245u << 16u);
    ctx.set_gpr(4, rt.memory().aot_load32(ctx.gpr[2] + static_cast<std::uint32_t>(31432)));
    ctx.set_gpr(25, rt.memory().aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(0)));
    ctx.set_gpr(25, rt.memory().aot_load32(ctx.gpr[25] + static_cast<std::uint32_t>(92)));
    jump_target = ctx.gpr[25];
    ctx.set_gpr(31, 0x0895E7ACu);
    // nop
    ctx.pc = jump_target;
    if (rt.invoke_chained_call(ctx, &aot_mem) && ctx.pc == 0x0895E7ACu) goto L_0895E7AC;
    return;
L_0895E7AC:
    ctx.set_gpr(16, ctx.gpr[2] + 0u);
    ctx.set_gpr(2, 2245u << 16u);
    ctx.set_gpr(4, rt.memory().aot_load32(ctx.gpr[2] + static_cast<std::uint32_t>(31432)));
    ctx.set_gpr(5, ctx.gpr[16] + 0u);
    ctx.set_gpr(25, rt.memory().aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(0)));
    ctx.set_gpr(25, rt.memory().aot_load32(ctx.gpr[25] + static_cast<std::uint32_t>(100)));
    jump_target = ctx.gpr[25];
    ctx.set_gpr(31, 0x0895E7CCu);
    // nop
    ctx.pc = jump_target;
    if (rt.invoke_chained_call(ctx, &aot_mem) && ctx.pc == 0x0895E7CCu) goto L_0895E7CC;
    return;
L_0895E7CC:
    ctx.set_gpr(3, rt.memory().aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(4)));
    ctx.set_gpr(3, ctx.gpr[3] + static_cast<std::uint32_t>(-1));
    rt.memory().aot_store32(ctx.gpr[16] + static_cast<std::uint32_t>(4), ctx.gpr[3]);
    ctx.set_gpr(3, ctx.gpr[3] << 10u);
    ctx.set_gpr(3, ctx.gpr[3] >> 10u);
    { const bool branch_taken = ctx.gpr[3] != 0u;
    // nop
      if (branch_taken) {
          goto L_0895E7F4;
      }
      goto L_0895E7E8;
    }
L_0895E7E8:
    ctx.set_gpr(4, ctx.gpr[16] + 0u);
    ctx.set_gpr(31, 0x0895E7F4u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0080_entry, 80u, 556u, 0x089467C8u>(ctx, &aot_mem) && ctx.pc == 0x0895E7F4u) goto L_0895E7F4;
    return;
L_0895E7F4:
    ctx.set_gpr(3, 2245u << 16u);
    ctx.set_gpr(4, rt.memory().aot_load32(ctx.gpr[3] + static_cast<std::uint32_t>(31432)));
    ctx.set_gpr(3, rt.memory().aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(4)));
    ctx.set_gpr(3, ctx.gpr[3] + static_cast<std::uint32_t>(-1));
    rt.memory().aot_store32(ctx.gpr[4] + static_cast<std::uint32_t>(4), ctx.gpr[3]);
    ctx.set_gpr(3, ctx.gpr[3] << 10u);
    ctx.set_gpr(3, ctx.gpr[3] >> 10u);
    { const bool branch_taken = ctx.gpr[3] != 0u;
    // nop
      if (branch_taken) {
          goto L_0895E820;
      }
      goto L_0895E818;
    }
L_0895E818:
    ctx.set_gpr(31, 0x0895E820u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0080_entry, 80u, 556u, 0x089467C8u>(ctx, &aot_mem) && ctx.pc == 0x0895E820u) goto L_0895E820;
    return;
L_0895E820:
    ctx.set_gpr(3, 2245u << 16u);
    rt.memory().aot_store32(ctx.gpr[3] + static_cast<std::uint32_t>(31432), 0u);
    ctx.set_gpr(31, rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(12)));
    ctx.set_gpr(16, rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(8)));
    ctx.set_gpr(29, ctx.gpr[29] + static_cast<std::uint32_t>(16));
    jump_target = ctx.gpr[31];
    // nop
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_0895E83C:
    ctx.set_gpr(29, ctx.gpr[29] + static_cast<std::uint32_t>(-48));
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(28), ctx.gpr[31]);
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(24), ctx.gpr[20]);
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(20), ctx.gpr[19]);
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(16), ctx.gpr[18]);
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(12), ctx.gpr[17]);
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(8), ctx.gpr[16]);
    ctx.set_gpr(19, ctx.gpr[4] + 0u);
    ctx.set_gpr(31, 0x0895E864u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0070_entry, 70u, 352u, 0x0891D884u>(ctx, &aot_mem) && ctx.pc == 0x0895E864u) goto L_0895E864;
    return;
L_0895E864:
    ctx.set_gpr(18, ctx.gpr[2] + 0u);
    ctx.set_gpr(4, ctx.gpr[29] + static_cast<std::uint32_t>(44));
    ctx.set_gpr(5, ctx.gpr[18] + 0u);
    ctx.set_gpr(6, ctx.gpr[19] + static_cast<std::uint32_t>(28));
    ctx.set_gpr(7, ctx.gpr[19] + static_cast<std::uint32_t>(32));
    ctx.set_gpr(8, 0u + 0u);
    ctx.set_gpr(31, 0x0895E884u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0070_entry, 70u, 391u, 0x0891DBE0u>(ctx, &aot_mem) && ctx.pc == 0x0895E884u) goto L_0895E884;
    return;
L_0895E884:
    ctx.set_gpr(17, 0u + 0u);
    ctx.set_gpr(31, 0x0895E890u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0078_entry, 78u, 228u, 0x0893CE9Cu>(ctx, &aot_mem) && ctx.pc == 0x0895E890u) goto L_0895E890;
    return;
L_0895E890:
    ctx.set_gpr(4, rt.memory().aot_load32(ctx.gpr[2] + static_cast<std::uint32_t>(0)));
    ctx.set_gpr(31, 0x0895E89Cu);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0078_entry, 78u, 199u, 0x0893CC68u>(ctx, &aot_mem) && ctx.pc == 0x0895E89Cu) goto L_0895E89C;
    return;
L_0895E89C:
    ctx.set_gpr(4, ctx.gpr[2] + 0u);
    ctx.set_gpr(31, 0x0895E8A8u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0057_entry, 57u, 21u, 0x088E81E8u>(ctx, &aot_mem) && ctx.pc == 0x0895E8A8u) goto L_0895E8A8;
    return;
L_0895E8A8:
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(40), ctx.gpr[2]);
    ctx.set_gpr(4, ctx.gpr[2] + 0u);
    ctx.set_gpr(5, 2228u << 16u);
    ctx.set_gpr(5, ctx.gpr[5] + static_cast<std::uint32_t>(-1340));
    ctx.set_gpr(31, 0x0895E8C0u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0085_entry, 85u, 633u, 0x0895AA80u>(ctx, &aot_mem) && ctx.pc == 0x0895E8C0u) goto L_0895E8C0;
    return;
L_0895E8C0:
    ctx.set_gpr(2, rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(40)));
    ctx.set_gpr(16, rt.memory().aot_load32(ctx.gpr[2] + static_cast<std::uint32_t>(8)));
    { const bool branch_taken = ctx.gpr[16] != 0u;
    // nop
      if (branch_taken) {
          goto L_0895E8D8;
      }
      goto L_0895E8D0;
    }
L_0895E8D0:
    ctx.set_gpr(2, 2228u << 16u);
    ctx.set_gpr(16, rt.memory().aot_load32(ctx.gpr[2] + static_cast<std::uint32_t>(-1368)));
    goto L_0895E8D8;
L_0895E8D8:
    { const bool branch_taken = ctx.gpr[16] != 0u;
    // nop
      if (branch_taken) {
          goto L_0895E8EC;
      }
      goto L_0895E8E0;
    }
L_0895E8E0:
    ctx.set_gpr(2, 0u + 0u);
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_0895E938;
      }
      goto L_0895E8EC;
    }
L_0895E8EC:
    ctx.set_gpr(2, 2245u << 16u);
    ctx.set_gpr(2, rt.memory().aot_load32(ctx.gpr[2] + static_cast<std::uint32_t>(30776)));
    { const bool branch_taken = ctx.gpr[2] != 0u;
    // nop
      if (branch_taken) {
          goto L_0895E924;
      }
      goto L_0895E8FC;
    }
L_0895E8FC:
    ctx.set_gpr(4, 0u + static_cast<std::uint32_t>(16));
    ctx.set_gpr(31, 0x0895E908u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0072_entry, 72u, 788u, 0x089277A0u>(ctx, &aot_mem) && ctx.pc == 0x0895E908u) goto L_0895E908;
    return;
L_0895E908:
    { const bool branch_taken = ctx.gpr[2] == 0u;
    // nop
      if (branch_taken) {
          goto L_0895E91C;
      }
      goto L_0895E910;
    }
L_0895E910:
    ctx.set_gpr(4, ctx.gpr[2] + 0u);
    ctx.set_gpr(31, 0x0895E91Cu);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0072_entry, 72u, 762u, 0x089275E8u>(ctx, &aot_mem) && ctx.pc == 0x0895E91Cu) goto L_0895E91C;
    return;
L_0895E91C:
    ctx.set_gpr(3, 2245u << 16u);
    rt.memory().aot_store32(ctx.gpr[3] + static_cast<std::uint32_t>(30776), ctx.gpr[2]);
    goto L_0895E924;
L_0895E924:
    ctx.set_gpr(2, 2245u << 16u);
    ctx.set_gpr(4, rt.memory().aot_load32(ctx.gpr[2] + static_cast<std::uint32_t>(30776)));
    ctx.set_gpr(5, ctx.gpr[16] + 0u);
    ctx.set_gpr(31, 0x0895E938u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0072_entry, 72u, 784u, 0x08927768u>(ctx, &aot_mem) && ctx.pc == 0x0895E938u) goto L_0895E938;
    return;
L_0895E938:
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(32), ctx.gpr[2]);
    ctx.set_gpr(20, rt.memory().aot_load32(ctx.gpr[19] + static_cast<std::uint32_t>(24)));
    ctx.set_gpr(16, rt.memory().aot_load32(ctx.gpr[20] + static_cast<std::uint32_t>(8)));
    ctx.set_gpr(5, ctx.gpr[16] + static_cast<std::uint32_t>(1));
    ctx.set_gpr(4, ctx.gpr[20] + 0u);
    ctx.set_gpr(31, 0x0895E954u);
    // nop
    goto L_0895C4C8;
L_0895E954:
    ctx.set_gpr(3, ctx.gpr[16] << 2u);
    ctx.set_gpr(2, rt.memory().aot_load32(ctx.gpr[20] + static_cast<std::uint32_t>(16)));
    ctx.set_gpr(16, ctx.gpr[2] + ctx.gpr[3]);
    ctx.set_gpr(2, rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(32)));
    ctx.set_gpr(2, 0u < ctx.gpr[2] ? 1u : 0u);
    { const bool branch_taken = ctx.gpr[2] == 0u;
    // nop
      if (branch_taken) {
          goto L_0895E984;
      }
      goto L_0895E970;
    }
L_0895E970:
    ctx.set_gpr(4, ctx.gpr[29] + static_cast<std::uint32_t>(32));
    ctx.set_gpr(31, 0x0895E97Cu);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0019_entry, 19u, 781u, 0x0885315Cu>(ctx, &aot_mem) && ctx.pc == 0x0895E97Cu) goto L_0895E97C;
    return;
L_0895E97C:
    ctx.set_gpr(2, 0u < ctx.gpr[2] ? 1u : 0u);
    ctx.set_gpr(2, ctx.gpr[2] ^ 1u);
    goto L_0895E984;
L_0895E984:
    { const bool branch_taken = ctx.gpr[2] == 0u;
    // nop
      if (branch_taken) {
          goto L_0895E9A4;
      }
      goto L_0895E98C;
    }
L_0895E98C:
    ctx.set_gpr(4, ctx.gpr[29] + static_cast<std::uint32_t>(32));
    ctx.set_gpr(31, 0x0895E998u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0019_entry, 19u, 776u, 0x0885311Cu>(ctx, &aot_mem) && ctx.pc == 0x0895E998u) goto L_0895E998;
    return;
L_0895E998:
    ctx.set_gpr(4, ctx.gpr[2] + static_cast<std::uint32_t>(4));
    ctx.set_gpr(31, 0x0895E9A4u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0064_entry, 64u, 102u, 0x08904690u>(ctx, &aot_mem) && ctx.pc == 0x0895E9A4u) goto L_0895E9A4;
    return;
L_0895E9A4:
    ctx.set_gpr(2, rt.memory().aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(0)));
    ctx.set_gpr(2, 0u < ctx.gpr[2] ? 1u : 0u);
    { const bool branch_taken = ctx.gpr[2] == 0u;
    // nop
      if (branch_taken) {
          goto L_0895E9C8;
      }
      goto L_0895E9B4;
    }
L_0895E9B4:
    ctx.set_gpr(4, ctx.gpr[16] + 0u);
    ctx.set_gpr(31, 0x0895E9C0u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0019_entry, 19u, 781u, 0x0885315Cu>(ctx, &aot_mem) && ctx.pc == 0x0895E9C0u) goto L_0895E9C0;
    return;
L_0895E9C0:
    ctx.set_gpr(2, 0u < ctx.gpr[2] ? 1u : 0u);
    ctx.set_gpr(2, ctx.gpr[2] ^ 1u);
    goto L_0895E9C8;
L_0895E9C8:
    { const bool branch_taken = ctx.gpr[2] == 0u;
    // nop
      if (branch_taken) {
          goto L_0895E9E0;
      }
      goto L_0895E9D0;
    }
L_0895E9D0:
    ctx.set_gpr(2, rt.memory().aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(0)));
    ctx.set_gpr(4, ctx.gpr[2] + static_cast<std::uint32_t>(-8));
    ctx.set_gpr(31, 0x0895E9E0u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0019_entry, 19u, 770u, 0x088530D0u>(ctx, &aot_mem) && ctx.pc == 0x0895E9E0u) goto L_0895E9E0;
    return;
L_0895E9E0:
    ctx.set_gpr(2, rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(32)));
    rt.memory().aot_store32(ctx.gpr[16] + static_cast<std::uint32_t>(0), ctx.gpr[2]);
    ctx.set_gpr(4, 0u + 0u);
    ctx.set_gpr(3, rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(32)));
    { const bool branch_taken = ctx.gpr[3] == 0u;
    // nop
      if (branch_taken) {
          goto L_0895EA14;
      }
      goto L_0895E9F8;
    }
L_0895E9F8:
    ctx.set_gpr(2, ctx.gpr[3] & 1u);
    ctx.set_gpr(2, ctx.gpr[2] ^ 1u);
    ctx.set_gpr(2, ctx.gpr[2] < static_cast<std::uint32_t>(1) ? 1u : 0u);
    ctx.set_gpr(2, ctx.gpr[2] ^ 1u);
    { const bool branch_taken = ctx.gpr[2] == 0u;
    // nop
      if (branch_taken) {
          goto L_0895EA14;
      }
      goto L_0895EA10;
    }
L_0895EA10:
    ctx.set_gpr(4, 0u + static_cast<std::uint32_t>(1));
    goto L_0895EA14;
L_0895EA14:
    { const bool branch_taken = ctx.gpr[4] == 0u;
    // nop
      if (branch_taken) {
          goto L_0895EA40;
      }
      goto L_0895EA1C;
    }
L_0895EA1C:
    ctx.set_gpr(5, ctx.gpr[3] + static_cast<std::uint32_t>(-8));
    ctx.set_gpr(2, rt.memory().aot_load32(ctx.gpr[3] + static_cast<std::uint32_t>(-4)));
    ctx.set_gpr(2, ctx.gpr[2] + static_cast<std::uint32_t>(-1));
    rt.memory().aot_store32(ctx.gpr[3] + static_cast<std::uint32_t>(-4), ctx.gpr[2]);
    { const bool branch_taken = ctx.gpr[2] != 0u;
    // nop
      if (branch_taken) {
          goto L_0895EA40;
      }
      goto L_0895EA34;
    }
L_0895EA34:
    ctx.set_gpr(4, rt.memory().aot_load32(ctx.gpr[5] + static_cast<std::uint32_t>(0)));
    ctx.set_gpr(31, 0x0895EA40u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0085_entry, 85u, 887u, 0x0895BD2Cu>(ctx, &aot_mem) && ctx.pc == 0x0895EA40u) goto L_0895EA40;
    return;
L_0895EA40:
    ctx.set_gpr(16, 0u + 0u);
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_0895EB30;
      }
      goto L_0895EA4C;
    }
L_0895EA4C:
    ctx.set_gpr(3, ctx.gpr[16] << 2u);
    ctx.set_gpr(2, rt.memory().aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(16)));
    ctx.set_gpr(2, ctx.gpr[2] + ctx.gpr[3]);
    ctx.set_gpr(3, rt.memory().aot_load32(ctx.gpr[2] + static_cast<std::uint32_t>(0)));
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(36), ctx.gpr[3]);
    ctx.set_gpr(4, 0u + 0u);
    { const bool branch_taken = ctx.gpr[3] == 0u;
    // nop
      if (branch_taken) {
          goto L_0895EA88;
      }
      goto L_0895EA6C;
    }
L_0895EA6C:
    ctx.set_gpr(2, ctx.gpr[3] & 1u);
    ctx.set_gpr(2, ctx.gpr[2] ^ 1u);
    ctx.set_gpr(2, ctx.gpr[2] < static_cast<std::uint32_t>(1) ? 1u : 0u);
    ctx.set_gpr(2, ctx.gpr[2] ^ 1u);
    { const bool branch_taken = ctx.gpr[2] == 0u;
    // nop
      if (branch_taken) {
          goto L_0895EA88;
      }
      goto L_0895EA84;
    }
L_0895EA84:
    ctx.set_gpr(4, 0u + static_cast<std::uint32_t>(1));
    goto L_0895EA88;
L_0895EA88:
    { const bool branch_taken = ctx.gpr[4] == 0u;
    // nop
      if (branch_taken) {
          goto L_0895EA9C;
      }
      goto L_0895EA90;
    }
L_0895EA90:
    ctx.set_gpr(2, rt.memory().aot_load32(ctx.gpr[3] + static_cast<std::uint32_t>(-4)));
    ctx.set_gpr(2, ctx.gpr[2] + static_cast<std::uint32_t>(1));
    rt.memory().aot_store32(ctx.gpr[3] + static_cast<std::uint32_t>(-4), ctx.gpr[2]);
    goto L_0895EA9C;
L_0895EA9C:
    ctx.set_gpr(3, rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(36)));
    ctx.set_gpr(2, 0u + static_cast<std::uint32_t>(-2));
    ctx.set_gpr(4, ctx.gpr[3] & ctx.gpr[2]);
    ctx.set_gpr(31, 0x0895EAB0u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0004_entry, 4u, 508u, 0x08816764u>(ctx, &aot_mem) && ctx.pc == 0x0895EAB0u) goto L_0895EAB0;
    return;
L_0895EAB0:
    ctx.set_gpr(20, ctx.gpr[2] + 0u);
    ctx.set_gpr(4, ctx.gpr[18] + 0u);
    ctx.set_gpr(5, rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(44)));
    ctx.set_gpr(6, ctx.gpr[20] + 0u);
    ctx.set_gpr(8, ctx.gpr[17] + 0u);
    ctx.set_gpr(9, 0u + 0u);
    ctx.set_gpr(31, 0x0895EAD0u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0070_entry, 70u, 437u, 0x0891DFA0u>(ctx, &aot_mem) && ctx.pc == 0x0895EAD0u) goto L_0895EAD0;
    return;
L_0895EAD0:
    ctx.set_gpr(17, ctx.gpr[17] + ctx.gpr[20]);
    ctx.set_gpr(4, 0u + 0u);
    ctx.set_gpr(3, rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(36)));
    { const bool branch_taken = ctx.gpr[3] == 0u;
    // nop
      if (branch_taken) {
          goto L_0895EB00;
      }
      goto L_0895EAE4;
    }
L_0895EAE4:
    ctx.set_gpr(2, ctx.gpr[3] & 1u);
    ctx.set_gpr(2, ctx.gpr[2] ^ 1u);
    ctx.set_gpr(2, ctx.gpr[2] < static_cast<std::uint32_t>(1) ? 1u : 0u);
    ctx.set_gpr(2, ctx.gpr[2] ^ 1u);
    { const bool branch_taken = ctx.gpr[2] == 0u;
    // nop
      if (branch_taken) {
          goto L_0895EB00;
      }
      goto L_0895EAFC;
    }
L_0895EAFC:
    ctx.set_gpr(4, 0u + static_cast<std::uint32_t>(1));
    goto L_0895EB00;
L_0895EB00:
    { const bool branch_taken = ctx.gpr[4] == 0u;
    // nop
      if (branch_taken) {
          goto L_0895EB2C;
      }
      goto L_0895EB08;
    }
L_0895EB08:
    ctx.set_gpr(5, ctx.gpr[3] + static_cast<std::uint32_t>(-8));
    ctx.set_gpr(2, rt.memory().aot_load32(ctx.gpr[3] + static_cast<std::uint32_t>(-4)));
    ctx.set_gpr(2, ctx.gpr[2] + static_cast<std::uint32_t>(-1));
    rt.memory().aot_store32(ctx.gpr[3] + static_cast<std::uint32_t>(-4), ctx.gpr[2]);
    { const bool branch_taken = ctx.gpr[2] != 0u;
    // nop
      if (branch_taken) {
          goto L_0895EB2C;
      }
      goto L_0895EB20;
    }
L_0895EB20:
    ctx.set_gpr(4, rt.memory().aot_load32(ctx.gpr[5] + static_cast<std::uint32_t>(0)));
    ctx.set_gpr(31, 0x0895EB2Cu);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0085_entry, 85u, 887u, 0x0895BD2Cu>(ctx, &aot_mem) && ctx.pc == 0x0895EB2Cu) goto L_0895EB2C;
    return;
L_0895EB2C:
    ctx.set_gpr(16, ctx.gpr[16] + static_cast<std::uint32_t>(1));
    goto L_0895EB30;
L_0895EB30:
    ctx.set_gpr(4, rt.memory().aot_load32(ctx.gpr[19] + static_cast<std::uint32_t>(24)));
    ctx.set_gpr(2, rt.memory().aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(8)));
    ctx.set_gpr(2, static_cast<std::int32_t>(ctx.gpr[16]) < static_cast<std::int32_t>(ctx.gpr[2]) ? 1u : 0u);
    { const bool branch_taken = ctx.gpr[2] != 0u;
    // nop
      if (branch_taken) {
          goto L_0895EA4C;
      }
      goto L_0895EB44;
    }
L_0895EB44:
    ctx.set_gpr(4, ctx.gpr[18] + 0u);
    ctx.set_gpr(5, rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(44)));
    ctx.set_gpr(31, 0x0895EB54u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0070_entry, 70u, 418u, 0x0891DDBCu>(ctx, &aot_mem) && ctx.pc == 0x0895EB54u) goto L_0895EB54;
    return;
L_0895EB54:
    ctx.set_gpr(4, rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(40)));
    { const bool branch_taken = ctx.gpr[4] == 0u;
    // nop
      if (branch_taken) {
          goto L_0895EB68;
      }
      goto L_0895EB60;
    }
L_0895EB60:
    ctx.set_gpr(31, 0x0895EB68u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0014_entry, 14u, 257u, 0x0883D454u>(ctx, &aot_mem) && ctx.pc == 0x0895EB68u) goto L_0895EB68;
    return;
L_0895EB68:
    ctx.set_gpr(4, rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(44)));
    { const bool branch_taken = ctx.gpr[4] == 0u;
    // nop
      if (branch_taken) {
          goto L_0895EB7C;
      }
      goto L_0895EB74;
    }
L_0895EB74:
    ctx.set_gpr(31, 0x0895EB7Cu);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0014_entry, 14u, 257u, 0x0883D454u>(ctx, &aot_mem) && ctx.pc == 0x0895EB7Cu) goto L_0895EB7C;
    return;
L_0895EB7C:
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
L_0895EBA0:
    ctx.set_gpr(29, ctx.gpr[29] + static_cast<std::uint32_t>(-32));
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(12), ctx.gpr[31]);
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(8), ctx.gpr[17]);
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(4), ctx.gpr[16]);
    ctx.set_gpr(17, ctx.gpr[4] + 0u);
    ctx.set_gpr(16, ctx.gpr[5] + 0u);
    ctx.set_gpr(31, 0x0895EBC0u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0070_entry, 70u, 531u, 0x0891E6C0u>(ctx, &aot_mem) && ctx.pc == 0x0895EBC0u) goto L_0895EBC0;
    return;
L_0895EBC0:
    ctx.set_gpr(2, 2228u << 16u);
    ctx.set_gpr(2, ctx.gpr[2] + static_cast<std::uint32_t>(-1332));
    { const bool branch_taken = ctx.gpr[2] != 0u;
    // nop
      if (branch_taken) {
          goto L_0895EBDC;
      }
      goto L_0895EBD0;
    }
L_0895EBD0:
    ctx.set_gpr(2, 0u + 0u);
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_0895EC2C;
      }
      goto L_0895EBDC;
    }
L_0895EBDC:
    ctx.set_gpr(2, 2245u << 16u);
    ctx.set_gpr(2, rt.memory().aot_load32(ctx.gpr[2] + static_cast<std::uint32_t>(30776)));
    { const bool branch_taken = ctx.gpr[2] != 0u;
    // nop
      if (branch_taken) {
          goto L_0895EC14;
      }
      goto L_0895EBEC;
    }
L_0895EBEC:
    ctx.set_gpr(4, 0u + static_cast<std::uint32_t>(16));
    ctx.set_gpr(31, 0x0895EBF8u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0072_entry, 72u, 788u, 0x089277A0u>(ctx, &aot_mem) && ctx.pc == 0x0895EBF8u) goto L_0895EBF8;
    return;
L_0895EBF8:
    { const bool branch_taken = ctx.gpr[2] == 0u;
    // nop
      if (branch_taken) {
          goto L_0895EC0C;
      }
      goto L_0895EC00;
    }
L_0895EC00:
    ctx.set_gpr(4, ctx.gpr[2] + 0u);
    ctx.set_gpr(31, 0x0895EC0Cu);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0072_entry, 72u, 762u, 0x089275E8u>(ctx, &aot_mem) && ctx.pc == 0x0895EC0Cu) goto L_0895EC0C;
    return;
L_0895EC0C:
    ctx.set_gpr(3, 2245u << 16u);
    rt.memory().aot_store32(ctx.gpr[3] + static_cast<std::uint32_t>(30776), ctx.gpr[2]);
    goto L_0895EC14;
L_0895EC14:
    ctx.set_gpr(2, 2245u << 16u);
    ctx.set_gpr(4, rt.memory().aot_load32(ctx.gpr[2] + static_cast<std::uint32_t>(30776)));
    ctx.set_gpr(5, 2228u << 16u);
    ctx.set_gpr(5, ctx.gpr[5] + static_cast<std::uint32_t>(-1332));
    ctx.set_gpr(31, 0x0895EC2Cu);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0072_entry, 72u, 784u, 0x08927768u>(ctx, &aot_mem) && ctx.pc == 0x0895EC2Cu) goto L_0895EC2C;
    return;
L_0895EC2C:
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(28), ctx.gpr[2]);
    ctx.set_gpr(4, ctx.gpr[17] + 0u);
    ctx.set_gpr(5, ctx.gpr[16] + 0u);
    ctx.set_gpr(6, ctx.gpr[29] + static_cast<std::uint32_t>(28));
    ctx.set_gpr(31, 0x0895EC44u);
    // nop
    goto L_0895EDC8;
L_0895EC44:
    ctx.set_gpr(5, 0u + 0u);
    ctx.set_gpr(4, rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(28)));
    { const bool branch_taken = ctx.gpr[4] == 0u;
    // nop
      if (branch_taken) {
          goto L_0895EC70;
      }
      goto L_0895EC54;
    }
L_0895EC54:
    ctx.set_gpr(3, ctx.gpr[4] & 1u);
    ctx.set_gpr(3, ctx.gpr[3] ^ 1u);
    ctx.set_gpr(3, ctx.gpr[3] < static_cast<std::uint32_t>(1) ? 1u : 0u);
    ctx.set_gpr(3, ctx.gpr[3] ^ 1u);
    { const bool branch_taken = ctx.gpr[3] == 0u;
    // nop
      if (branch_taken) {
          goto L_0895EC70;
      }
      goto L_0895EC6C;
    }
L_0895EC6C:
    ctx.set_gpr(5, 0u + static_cast<std::uint32_t>(1));
    goto L_0895EC70;
L_0895EC70:
    { const bool branch_taken = ctx.gpr[5] == 0u;
    // nop
      if (branch_taken) {
          goto L_0895EC9C;
      }
      goto L_0895EC78;
    }
L_0895EC78:
    ctx.set_gpr(5, ctx.gpr[4] + static_cast<std::uint32_t>(-8));
    ctx.set_gpr(3, rt.memory().aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(-4)));
    ctx.set_gpr(3, ctx.gpr[3] + static_cast<std::uint32_t>(-1));
    rt.memory().aot_store32(ctx.gpr[4] + static_cast<std::uint32_t>(-4), ctx.gpr[3]);
    { const bool branch_taken = ctx.gpr[3] != 0u;
    // nop
      if (branch_taken) {
          goto L_0895EC9C;
      }
      goto L_0895EC90;
    }
L_0895EC90:
    ctx.set_gpr(4, rt.memory().aot_load32(ctx.gpr[5] + static_cast<std::uint32_t>(0)));
    ctx.set_gpr(31, 0x0895EC9Cu);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0085_entry, 85u, 887u, 0x0895BD2Cu>(ctx, &aot_mem) && ctx.pc == 0x0895EC9Cu) goto L_0895EC9C;
    return;
L_0895EC9C:
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
L_0895ECB4:
    ctx.set_gpr(29, ctx.gpr[29] + static_cast<std::uint32_t>(-32));
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(12), ctx.gpr[31]);
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(8), ctx.gpr[17]);
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(4), ctx.gpr[16]);
    ctx.set_gpr(17, ctx.gpr[4] + 0u);
    ctx.set_gpr(16, ctx.gpr[5] + 0u);
    ctx.set_gpr(31, 0x0895ECD4u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0070_entry, 70u, 537u, 0x0891E744u>(ctx, &aot_mem) && ctx.pc == 0x0895ECD4u) goto L_0895ECD4;
    return;
L_0895ECD4:
    ctx.set_gpr(2, 2228u << 16u);
    ctx.set_gpr(2, ctx.gpr[2] + static_cast<std::uint32_t>(-1324));
    { const bool branch_taken = ctx.gpr[2] != 0u;
    // nop
      if (branch_taken) {
          goto L_0895ECF0;
      }
      goto L_0895ECE4;
    }
L_0895ECE4:
    ctx.set_gpr(2, 0u + 0u);
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_0895ED40;
      }
      goto L_0895ECF0;
    }
L_0895ECF0:
    ctx.set_gpr(2, 2245u << 16u);
    ctx.set_gpr(2, rt.memory().aot_load32(ctx.gpr[2] + static_cast<std::uint32_t>(30776)));
    { const bool branch_taken = ctx.gpr[2] != 0u;
    // nop
      if (branch_taken) {
          goto L_0895ED28;
      }
      goto L_0895ED00;
    }
L_0895ED00:
    ctx.set_gpr(4, 0u + static_cast<std::uint32_t>(16));
    ctx.set_gpr(31, 0x0895ED0Cu);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0072_entry, 72u, 788u, 0x089277A0u>(ctx, &aot_mem) && ctx.pc == 0x0895ED0Cu) goto L_0895ED0C;
    return;
L_0895ED0C:
    { const bool branch_taken = ctx.gpr[2] == 0u;
    // nop
      if (branch_taken) {
          goto L_0895ED20;
      }
      goto L_0895ED14;
    }
L_0895ED14:
    ctx.set_gpr(4, ctx.gpr[2] + 0u);
    ctx.set_gpr(31, 0x0895ED20u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0072_entry, 72u, 762u, 0x089275E8u>(ctx, &aot_mem) && ctx.pc == 0x0895ED20u) goto L_0895ED20;
    return;
L_0895ED20:
    ctx.set_gpr(3, 2245u << 16u);
    rt.memory().aot_store32(ctx.gpr[3] + static_cast<std::uint32_t>(30776), ctx.gpr[2]);
    goto L_0895ED28;
L_0895ED28:
    ctx.set_gpr(2, 2245u << 16u);
    ctx.set_gpr(4, rt.memory().aot_load32(ctx.gpr[2] + static_cast<std::uint32_t>(30776)));
    ctx.set_gpr(5, 2228u << 16u);
    ctx.set_gpr(5, ctx.gpr[5] + static_cast<std::uint32_t>(-1324));
    ctx.set_gpr(31, 0x0895ED40u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0072_entry, 72u, 784u, 0x08927768u>(ctx, &aot_mem) && ctx.pc == 0x0895ED40u) goto L_0895ED40;
    return;
L_0895ED40:
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(28), ctx.gpr[2]);
    ctx.set_gpr(4, ctx.gpr[17] + 0u);
    ctx.set_gpr(5, ctx.gpr[16] + 0u);
    ctx.set_gpr(6, ctx.gpr[29] + static_cast<std::uint32_t>(28));
    ctx.set_gpr(31, 0x0895ED58u);
    // nop
    goto L_0895EDC8;
L_0895ED58:
    ctx.set_gpr(5, 0u + 0u);
    ctx.set_gpr(4, rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(28)));
    { const bool branch_taken = ctx.gpr[4] == 0u;
    // nop
      if (branch_taken) {
          goto L_0895ED84;
      }
      goto L_0895ED68;
    }
L_0895ED68:
    ctx.set_gpr(3, ctx.gpr[4] & 1u);
    ctx.set_gpr(3, ctx.gpr[3] ^ 1u);
    ctx.set_gpr(3, ctx.gpr[3] < static_cast<std::uint32_t>(1) ? 1u : 0u);
    ctx.set_gpr(3, ctx.gpr[3] ^ 1u);
    { const bool branch_taken = ctx.gpr[3] == 0u;
    // nop
      if (branch_taken) {
          goto L_0895ED84;
      }
      goto L_0895ED80;
    }
L_0895ED80:
    ctx.set_gpr(5, 0u + static_cast<std::uint32_t>(1));
    goto L_0895ED84;
L_0895ED84:
    { const bool branch_taken = ctx.gpr[5] == 0u;
    // nop
      if (branch_taken) {
          goto L_0895EDB0;
      }
      goto L_0895ED8C;
    }
L_0895ED8C:
    ctx.set_gpr(5, ctx.gpr[4] + static_cast<std::uint32_t>(-8));
    ctx.set_gpr(3, rt.memory().aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(-4)));
    ctx.set_gpr(3, ctx.gpr[3] + static_cast<std::uint32_t>(-1));
    rt.memory().aot_store32(ctx.gpr[4] + static_cast<std::uint32_t>(-4), ctx.gpr[3]);
    { const bool branch_taken = ctx.gpr[3] != 0u;
    // nop
      if (branch_taken) {
          goto L_0895EDB0;
      }
      goto L_0895EDA4;
    }
L_0895EDA4:
    ctx.set_gpr(4, rt.memory().aot_load32(ctx.gpr[5] + static_cast<std::uint32_t>(0)));
    ctx.set_gpr(31, 0x0895EDB0u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0085_entry, 85u, 887u, 0x0895BD2Cu>(ctx, &aot_mem) && ctx.pc == 0x0895EDB0u) goto L_0895EDB0;
    return;
L_0895EDB0:
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
L_0895EDC8:
    ctx.set_gpr(29, ctx.gpr[29] + static_cast<std::uint32_t>(-48));
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(28), ctx.gpr[31]);
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(24), ctx.gpr[18]);
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(20), ctx.gpr[17]);
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(16), ctx.gpr[16]);
    ctx.set_gpr(17, ctx.gpr[4] + 0u);
    ctx.set_gpr(16, ctx.gpr[5] + 0u);
    ctx.set_gpr(18, ctx.gpr[6] + 0u);
    ctx.set_gpr(31, 0x0895EDF0u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0078_entry, 78u, 228u, 0x0893CE9Cu>(ctx, &aot_mem) && ctx.pc == 0x0895EDF0u) goto L_0895EDF0;
    return;
L_0895EDF0:
    ctx.set_gpr(4, rt.memory().aot_load32(ctx.gpr[2] + static_cast<std::uint32_t>(0)));
    ctx.set_gpr(31, 0x0895EDFCu);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0078_entry, 78u, 199u, 0x0893CC68u>(ctx, &aot_mem) && ctx.pc == 0x0895EDFCu) goto L_0895EDFC;
    return;
L_0895EDFC:
    ctx.set_gpr(4, ctx.gpr[2] + 0u);
    ctx.set_gpr(31, 0x0895EE08u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0057_entry, 57u, 21u, 0x088E81E8u>(ctx, &aot_mem) && ctx.pc == 0x0895EE08u) goto L_0895EE08;
    return;
L_0895EE08:
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(44), ctx.gpr[2]);
    ctx.set_gpr(2, 2245u << 16u);
    ctx.set_gpr(4, rt.memory().aot_load32(ctx.gpr[2] + static_cast<std::uint32_t>(31436)));
    ctx.set_gpr(25, rt.memory().aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(0)));
    ctx.set_gpr(25, rt.memory().aot_load32(ctx.gpr[25] + static_cast<std::uint32_t>(104)));
    jump_target = ctx.gpr[25];
    ctx.set_gpr(31, 0x0895EE24u);
    // nop
    ctx.pc = jump_target;
    if (rt.invoke_chained_call(ctx, &aot_mem) && ctx.pc == 0x0895EE24u) goto L_0895EE24;
    return;
L_0895EE24:
    ctx.set_gpr(4, rt.memory().aot_load32(ctx.gpr[18] + static_cast<std::uint32_t>(0)));
    ctx.set_gpr(5, 0u + static_cast<std::uint32_t>(-2));
    ctx.set_gpr(8, ctx.gpr[4] & ctx.gpr[5]);
    ctx.set_gpr(4, rt.memory().aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(8)));
    ctx.set_gpr(6, ctx.gpr[4] & ctx.gpr[5]);
    ctx.set_gpr(4, rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(44)));
    ctx.set_gpr(7, rt.memory().aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(64)));
    ctx.set_gpr(5, rt.memory().aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(68)));
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(0), ctx.gpr[7]);
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(4), ctx.gpr[5]);
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(8), ctx.gpr[8]);
    ctx.set_gpr(5, 2228u << 16u);
    ctx.set_gpr(5, ctx.gpr[5] + static_cast<std::uint32_t>(-1312));
    ctx.set_gpr(8, ctx.gpr[2] + 0u);
    ctx.set_gpr(9, ctx.gpr[3] + 0u);
    ctx.set_gpr(10, rt.memory().aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(56)));
    ctx.set_gpr(11, rt.memory().aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(60)));
    ctx.set_gpr(31, 0x0895EE70u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0085_entry, 85u, 633u, 0x0895AA80u>(ctx, &aot_mem) && ctx.pc == 0x0895EE70u) goto L_0895EE70;
    return;
L_0895EE70:
    ctx.set_gpr(2, rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(44)));
    ctx.set_gpr(16, rt.memory().aot_load32(ctx.gpr[2] + static_cast<std::uint32_t>(8)));
    { const bool branch_taken = ctx.gpr[16] != 0u;
    // nop
      if (branch_taken) {
          goto L_0895EE88;
      }
      goto L_0895EE80;
    }
L_0895EE80:
    ctx.set_gpr(2, 2228u << 16u);
    ctx.set_gpr(16, rt.memory().aot_load32(ctx.gpr[2] + static_cast<std::uint32_t>(-1368)));
    goto L_0895EE88;
L_0895EE88:
    { const bool branch_taken = ctx.gpr[16] != 0u;
    // nop
      if (branch_taken) {
          goto L_0895EE9C;
      }
      goto L_0895EE90;
    }
L_0895EE90:
    ctx.set_gpr(2, 0u + 0u);
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_0895EEE8;
      }
      goto L_0895EE9C;
    }
L_0895EE9C:
    ctx.set_gpr(2, 2245u << 16u);
    ctx.set_gpr(2, rt.memory().aot_load32(ctx.gpr[2] + static_cast<std::uint32_t>(30776)));
    { const bool branch_taken = ctx.gpr[2] != 0u;
    // nop
      if (branch_taken) {
          goto L_0895EED4;
      }
      goto L_0895EEAC;
    }
L_0895EEAC:
    ctx.set_gpr(4, 0u + static_cast<std::uint32_t>(16));
    ctx.set_gpr(31, 0x0895EEB8u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0072_entry, 72u, 788u, 0x089277A0u>(ctx, &aot_mem) && ctx.pc == 0x0895EEB8u) goto L_0895EEB8;
    return;
L_0895EEB8:
    { const bool branch_taken = ctx.gpr[2] == 0u;
    // nop
      if (branch_taken) {
          goto L_0895EECC;
      }
      goto L_0895EEC0;
    }
L_0895EEC0:
    ctx.set_gpr(4, ctx.gpr[2] + 0u);
    ctx.set_gpr(31, 0x0895EECCu);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0072_entry, 72u, 762u, 0x089275E8u>(ctx, &aot_mem) && ctx.pc == 0x0895EECCu) goto L_0895EECC;
    return;
L_0895EECC:
    ctx.set_gpr(3, 2245u << 16u);
    rt.memory().aot_store32(ctx.gpr[3] + static_cast<std::uint32_t>(30776), ctx.gpr[2]);
    goto L_0895EED4;
L_0895EED4:
    ctx.set_gpr(2, 2245u << 16u);
    ctx.set_gpr(4, rt.memory().aot_load32(ctx.gpr[2] + static_cast<std::uint32_t>(30776)));
    ctx.set_gpr(5, ctx.gpr[16] + 0u);
    ctx.set_gpr(31, 0x0895EEE8u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0072_entry, 72u, 784u, 0x08927768u>(ctx, &aot_mem) && ctx.pc == 0x0895EEE8u) goto L_0895EEE8;
    return;
L_0895EEE8:
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(40), ctx.gpr[2]);
    ctx.set_gpr(17, rt.memory().aot_load32(ctx.gpr[17] + static_cast<std::uint32_t>(24)));
    ctx.set_gpr(16, rt.memory().aot_load32(ctx.gpr[17] + static_cast<std::uint32_t>(8)));
    ctx.set_gpr(5, ctx.gpr[16] + static_cast<std::uint32_t>(1));
    ctx.set_gpr(4, ctx.gpr[17] + 0u);
    ctx.set_gpr(31, 0x0895EF04u);
    // nop
    goto L_0895C4C8;
L_0895EF04:
    ctx.set_gpr(4, ctx.gpr[16] << 2u);
    ctx.set_gpr(3, rt.memory().aot_load32(ctx.gpr[17] + static_cast<std::uint32_t>(16)));
    ctx.set_gpr(16, ctx.gpr[3] + ctx.gpr[4]);
    ctx.set_gpr(3, rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(40)));
    ctx.set_gpr(3, 0u < ctx.gpr[3] ? 1u : 0u);
    { const bool branch_taken = ctx.gpr[3] == 0u;
    // nop
      if (branch_taken) {
          goto L_0895EF34;
      }
      goto L_0895EF20;
    }
L_0895EF20:
    ctx.set_gpr(4, ctx.gpr[29] + static_cast<std::uint32_t>(40));
    ctx.set_gpr(31, 0x0895EF2Cu);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0019_entry, 19u, 781u, 0x0885315Cu>(ctx, &aot_mem) && ctx.pc == 0x0895EF2Cu) goto L_0895EF2C;
    return;
L_0895EF2C:
    ctx.set_gpr(3, 0u < ctx.gpr[2] ? 1u : 0u);
    ctx.set_gpr(3, ctx.gpr[3] ^ 1u);
    goto L_0895EF34;
L_0895EF34:
    { const bool branch_taken = ctx.gpr[3] == 0u;
    // nop
      if (branch_taken) {
          goto L_0895EF54;
      }
      goto L_0895EF3C;
    }
L_0895EF3C:
    ctx.set_gpr(4, ctx.gpr[29] + static_cast<std::uint32_t>(40));
    ctx.set_gpr(31, 0x0895EF48u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0019_entry, 19u, 776u, 0x0885311Cu>(ctx, &aot_mem) && ctx.pc == 0x0895EF48u) goto L_0895EF48;
    return;
L_0895EF48:
    ctx.set_gpr(4, ctx.gpr[2] + static_cast<std::uint32_t>(4));
    ctx.set_gpr(31, 0x0895EF54u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0064_entry, 64u, 102u, 0x08904690u>(ctx, &aot_mem) && ctx.pc == 0x0895EF54u) goto L_0895EF54;
    return;
L_0895EF54:
    ctx.set_gpr(3, rt.memory().aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(0)));
    ctx.set_gpr(3, 0u < ctx.gpr[3] ? 1u : 0u);
    { const bool branch_taken = ctx.gpr[3] == 0u;
    // nop
      if (branch_taken) {
          goto L_0895EF78;
      }
      goto L_0895EF64;
    }
L_0895EF64:
    ctx.set_gpr(4, ctx.gpr[16] + 0u);
    ctx.set_gpr(31, 0x0895EF70u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0019_entry, 19u, 781u, 0x0885315Cu>(ctx, &aot_mem) && ctx.pc == 0x0895EF70u) goto L_0895EF70;
    return;
L_0895EF70:
    ctx.set_gpr(3, 0u < ctx.gpr[2] ? 1u : 0u);
    ctx.set_gpr(3, ctx.gpr[3] ^ 1u);
    goto L_0895EF78;
L_0895EF78:
    { const bool branch_taken = ctx.gpr[3] == 0u;
    // nop
      if (branch_taken) {
          goto L_0895EF90;
      }
      goto L_0895EF80;
    }
L_0895EF80:
    ctx.set_gpr(2, rt.memory().aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(0)));
    ctx.set_gpr(4, ctx.gpr[2] + static_cast<std::uint32_t>(-8));
    ctx.set_gpr(31, 0x0895EF90u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0019_entry, 19u, 770u, 0x088530D0u>(ctx, &aot_mem) && ctx.pc == 0x0895EF90u) goto L_0895EF90;
    return;
L_0895EF90:
    ctx.set_gpr(3, rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(40)));
    rt.memory().aot_store32(ctx.gpr[16] + static_cast<std::uint32_t>(0), ctx.gpr[3]);
    ctx.set_gpr(5, 0u + 0u);
    ctx.set_gpr(4, rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(40)));
    { const bool branch_taken = ctx.gpr[4] == 0u;
    // nop
      if (branch_taken) {
          goto L_0895EFC4;
      }
      goto L_0895EFA8;
    }
L_0895EFA8:
    ctx.set_gpr(3, ctx.gpr[4] & 1u);
    ctx.set_gpr(3, ctx.gpr[3] ^ 1u);
    ctx.set_gpr(3, ctx.gpr[3] < static_cast<std::uint32_t>(1) ? 1u : 0u);
    ctx.set_gpr(3, ctx.gpr[3] ^ 1u);
    { const bool branch_taken = ctx.gpr[3] == 0u;
    // nop
      if (branch_taken) {
          goto L_0895EFC4;
      }
      goto L_0895EFC0;
    }
L_0895EFC0:
    ctx.set_gpr(5, 0u + static_cast<std::uint32_t>(1));
    goto L_0895EFC4;
L_0895EFC4:
    { const bool branch_taken = ctx.gpr[5] == 0u;
    // nop
      if (branch_taken) {
          goto L_0895EFF0;
      }
      goto L_0895EFCC;
    }
L_0895EFCC:
    ctx.set_gpr(5, ctx.gpr[4] + static_cast<std::uint32_t>(-8));
    ctx.set_gpr(3, rt.memory().aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(-4)));
    ctx.set_gpr(3, ctx.gpr[3] + static_cast<std::uint32_t>(-1));
    rt.memory().aot_store32(ctx.gpr[4] + static_cast<std::uint32_t>(-4), ctx.gpr[3]);
    { const bool branch_taken = ctx.gpr[3] != 0u;
    // nop
      if (branch_taken) {
          goto L_0895EFF0;
      }
      goto L_0895EFE4;
    }
L_0895EFE4:
    ctx.set_gpr(4, rt.memory().aot_load32(ctx.gpr[5] + static_cast<std::uint32_t>(0)));
    ctx.set_gpr(31, 0x0895EFF0u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0085_entry, 85u, 887u, 0x0895BD2Cu>(ctx, &aot_mem) && ctx.pc == 0x0895EFF0u) goto L_0895EFF0;
    return;
L_0895EFF0:
    ctx.set_gpr(4, rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(44)));
    { const bool branch_taken = ctx.gpr[4] == 0u;
    // nop
      if (branch_taken) {
          goto L_0895F004;
      }
      goto L_0895EFFC;
    }
L_0895EFFC:
    ctx.set_gpr(31, 0x0895F004u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0014_entry, 14u, 257u, 0x0883D454u>(ctx, &aot_mem) && ctx.pc == 0x0895F004u) goto L_0895F004;
    return;
L_0895F004:
    ctx.set_gpr(31, rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(28)));
    ctx.set_gpr(18, rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(24)));
    ctx.set_gpr(17, rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(20)));
    ctx.set_gpr(16, rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(16)));
    ctx.set_gpr(29, ctx.gpr[29] + static_cast<std::uint32_t>(48));
    jump_target = ctx.gpr[31];
    // nop
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_0895F020:
    ctx.set_gpr(29, ctx.gpr[29] + static_cast<std::uint32_t>(-16));
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(12), ctx.gpr[31]);
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(8), ctx.gpr[18]);
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(4), ctx.gpr[17]);
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(0), ctx.gpr[16]);
    ctx.set_gpr(18, ctx.gpr[4] + 0u);
    ctx.set_gpr(17, ctx.gpr[5] + 0u);
    ctx.set_gpr(16, ctx.gpr[6] + 0u);
    ctx.set_gpr(31, 0x0895F048u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0054_entry, 54u, 416u, 0x088DE2D0u>(ctx, &aot_mem) && ctx.pc == 0x0895F048u) goto L_0895F048;
    return;
L_0895F048:
    ctx.set_gpr(3, rt.memory().aot_load32(ctx.gpr[18] + static_cast<std::uint32_t>(48)));
    { const std::int64_t product = static_cast<std::int64_t>(static_cast<std::int32_t>(ctx.gpr[16])) * static_cast<std::int64_t>(static_cast<std::int32_t>(ctx.gpr[3])); ctx.lo = static_cast<std::uint32_t>(product); ctx.hi = static_cast<std::uint32_t>(static_cast<std::uint64_t>(product) >> 32u); }
    ctx.set_gpr(6, ctx.lo);
    ctx.set_gpr(4, ctx.gpr[2] + 0u);
    ctx.set_gpr(5, ctx.gpr[17] + 0u);
    ctx.set_gpr(25, rt.memory().aot_load32(ctx.gpr[2] + static_cast<std::uint32_t>(0)));
    ctx.set_gpr(25, rt.memory().aot_load32(ctx.gpr[25] + static_cast<std::uint32_t>(220)));
    jump_target = ctx.gpr[25];
    ctx.set_gpr(31, 0x0895F06Cu);
    // nop
    ctx.pc = jump_target;
    if (rt.invoke_chained_call(ctx, &aot_mem) && ctx.pc == 0x0895F06Cu) goto L_0895F06C;
    return;
L_0895F06C:
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
L_0895F088:
    ctx.set_gpr(2, rt.memory().aot_load16(ctx.gpr[4] + static_cast<std::uint32_t>(48)));
    jump_target = ctx.gpr[31];
    // nop
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_0895F094:
    ctx.set_gpr(29, ctx.gpr[29] + static_cast<std::uint32_t>(-32));
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(12), ctx.gpr[31]);
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(8), ctx.gpr[18]);
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(4), ctx.gpr[17]);
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(0), ctx.gpr[16]);
    ctx.set_gpr(18, ctx.gpr[5] + 0u);
    ctx.set_gpr(17, ctx.gpr[6] + 0u);
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(28), 0u);
    ctx.set_gpr(4, ctx.gpr[17] + 0u);
    ctx.set_gpr(31, 0x0895F0C0u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0004_entry, 4u, 508u, 0x08816764u>(ctx, &aot_mem) && ctx.pc == 0x0895F0C0u) goto L_0895F0C0;
    return;
L_0895F0C0:
    ctx.set_gpr(16, ctx.gpr[2] + 0u);
    ctx.set_gpr(4, ctx.gpr[17] + 0u);
    ctx.set_gpr(5, 2228u << 16u);
    ctx.set_gpr(5, ctx.gpr[5] + static_cast<std::uint32_t>(-12104));
    ctx.set_gpr(6, ctx.gpr[29] + static_cast<std::uint32_t>(28));
    ctx.set_gpr(31, 0x0895F0DCu);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0004_entry, 4u, 427u, 0x08816084u>(ctx, &aot_mem) && ctx.pc == 0x0895F0DCu) goto L_0895F0DC;
    return;
L_0895F0DC:
    ctx.set_gpr(3, 0u + static_cast<std::uint32_t>(1));
    { const bool branch_taken = ctx.gpr[2] != ctx.gpr[3];
    // nop
      if (branch_taken) {
          goto L_0895F0FC;
      }
      goto L_0895F0E8;
    }
L_0895F0E8:
    ctx.set_gpr(2, rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(28)));
    rt.memory().aot_store8(ctx.gpr[18] + static_cast<std::uint32_t>(0), static_cast<std::uint8_t>(ctx.gpr[2]));
    ctx.set_gpr(2, ctx.gpr[16] + 0u);
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_0895F100;
      }
      goto L_0895F0FC;
    }
L_0895F0FC:
    ctx.set_gpr(2, 0u + 0u);
    goto L_0895F100;
L_0895F100:
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
L_0895F11C:
    ctx.set_gpr(29, ctx.gpr[29] + static_cast<std::uint32_t>(-1040));
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(12), ctx.gpr[31]);
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(8), ctx.gpr[16]);
    ctx.set_gpr(16, ctx.gpr[4] + 0u);
    ctx.set_gpr(6, rt.memory().aot_load8(ctx.gpr[6] + static_cast<std::uint32_t>(0)));
    ctx.set_gpr(4, ctx.gpr[29] + static_cast<std::uint32_t>(16));
    ctx.set_gpr(5, 2228u << 16u);
    ctx.set_gpr(5, ctx.gpr[5] + static_cast<std::uint32_t>(-12104));
    ctx.set_gpr(31, 0x0895F144u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0004_entry, 4u, 423u, 0x08815FF4u>(ctx, &aot_mem) && ctx.pc == 0x0895F144u) goto L_0895F144;
    return;
L_0895F144:
    ctx.set_gpr(3, ctx.gpr[29] + static_cast<std::uint32_t>(16));
    { const bool branch_taken = ctx.gpr[3] != 0u;
    // nop
      if (branch_taken) {
          goto L_0895F15C;
      }
      goto L_0895F150;
    }
L_0895F150:
    ctx.set_gpr(3, 0u + 0u);
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_0895F1AC;
      }
      goto L_0895F15C;
    }
L_0895F15C:
    ctx.set_gpr(2, 2245u << 16u);
    ctx.set_gpr(2, rt.memory().aot_load32(ctx.gpr[2] + static_cast<std::uint32_t>(30776)));
    { const bool branch_taken = ctx.gpr[2] != 0u;
    // nop
      if (branch_taken) {
          goto L_0895F194;
      }
      goto L_0895F16C;
    }
L_0895F16C:
    ctx.set_gpr(4, 0u + static_cast<std::uint32_t>(16));
    ctx.set_gpr(31, 0x0895F178u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0072_entry, 72u, 788u, 0x089277A0u>(ctx, &aot_mem) && ctx.pc == 0x0895F178u) goto L_0895F178;
    return;
L_0895F178:
    { const bool branch_taken = ctx.gpr[2] == 0u;
    // nop
      if (branch_taken) {
          goto L_0895F18C;
      }
      goto L_0895F180;
    }
L_0895F180:
    ctx.set_gpr(4, ctx.gpr[2] + 0u);
    ctx.set_gpr(31, 0x0895F18Cu);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0072_entry, 72u, 762u, 0x089275E8u>(ctx, &aot_mem) && ctx.pc == 0x0895F18Cu) goto L_0895F18C;
    return;
L_0895F18C:
    ctx.set_gpr(3, 2245u << 16u);
    rt.memory().aot_store32(ctx.gpr[3] + static_cast<std::uint32_t>(30776), ctx.gpr[2]);
    goto L_0895F194;
L_0895F194:
    ctx.set_gpr(2, 2245u << 16u);
    ctx.set_gpr(4, rt.memory().aot_load32(ctx.gpr[2] + static_cast<std::uint32_t>(30776)));
    ctx.set_gpr(5, ctx.gpr[29] + static_cast<std::uint32_t>(16));
    ctx.set_gpr(31, 0x0895F1A8u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0072_entry, 72u, 784u, 0x08927768u>(ctx, &aot_mem) && ctx.pc == 0x0895F1A8u) goto L_0895F1A8;
    return;
L_0895F1A8:
    ctx.set_gpr(3, ctx.gpr[2] + 0u);
    goto L_0895F1AC;
L_0895F1AC:
    rt.memory().aot_store32(ctx.gpr[16] + static_cast<std::uint32_t>(0), ctx.gpr[3]);
    ctx.set_gpr(31, rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(12)));
    ctx.set_gpr(16, rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(8)));
    ctx.set_gpr(29, ctx.gpr[29] + static_cast<std::uint32_t>(1040));
    jump_target = ctx.gpr[31];
    // nop
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_0895F1C4:
    ctx.set_gpr(2, 0u + static_cast<std::uint32_t>(1));
    jump_target = ctx.gpr[31];
    // nop
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_0895F1D0:
    ctx.set_gpr(29, ctx.gpr[29] + static_cast<std::uint32_t>(-32));
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(12), ctx.gpr[31]);
    rt.memory().aot_store8(ctx.gpr[29] + static_cast<std::uint32_t>(31), static_cast<std::uint8_t>(ctx.gpr[5]));
    ctx.set_gpr(5, ctx.gpr[29] + static_cast<std::uint32_t>(31));
    ctx.set_gpr(25, rt.memory().aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(0)));
    ctx.set_gpr(25, rt.memory().aot_load32(ctx.gpr[25] + static_cast<std::uint32_t>(144)));
    jump_target = ctx.gpr[25];
    ctx.set_gpr(31, 0x0895F1F0u);
    // nop
    ctx.pc = jump_target;
    if (rt.invoke_chained_call(ctx, &aot_mem) && ctx.pc == 0x0895F1F0u) goto L_0895F1F0;
    return;
L_0895F1F0:
    ctx.set_gpr(31, rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(12)));
    ctx.set_gpr(29, ctx.gpr[29] + static_cast<std::uint32_t>(32));
    jump_target = ctx.gpr[31];
    // nop
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_0895F200:
    ctx.set_gpr(2, 0u + static_cast<std::uint32_t>(1));
    jump_target = ctx.gpr[31];
    // nop
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_0895F20C:
    ctx.set_gpr(29, ctx.gpr[29] + static_cast<std::uint32_t>(-16));
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(12), ctx.gpr[31]);
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(8), ctx.gpr[18]);
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(4), ctx.gpr[17]);
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(0), ctx.gpr[16]);
    ctx.set_gpr(18, ctx.gpr[4] + 0u);
    ctx.set_gpr(17, ctx.gpr[5] + 0u);
    ctx.set_gpr(16, ctx.gpr[6] + 0u);
    ctx.set_gpr(31, 0x0895F234u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0054_entry, 54u, 503u, 0x088DE9D8u>(ctx, &aot_mem) && ctx.pc == 0x0895F234u) goto L_0895F234;
    return;
L_0895F234:
    ctx.set_gpr(3, rt.memory().aot_load32(ctx.gpr[18] + static_cast<std::uint32_t>(48)));
    { const std::int64_t product = static_cast<std::int64_t>(static_cast<std::int32_t>(ctx.gpr[16])) * static_cast<std::int64_t>(static_cast<std::int32_t>(ctx.gpr[3])); ctx.lo = static_cast<std::uint32_t>(product); ctx.hi = static_cast<std::uint32_t>(static_cast<std::uint64_t>(product) >> 32u); }
    ctx.set_gpr(6, ctx.lo);
    ctx.set_gpr(4, ctx.gpr[2] + 0u);
    ctx.set_gpr(5, ctx.gpr[17] + 0u);
    ctx.set_gpr(25, rt.memory().aot_load32(ctx.gpr[2] + static_cast<std::uint32_t>(0)));
    ctx.set_gpr(25, rt.memory().aot_load32(ctx.gpr[25] + static_cast<std::uint32_t>(220)));
    jump_target = ctx.gpr[25];
    ctx.set_gpr(31, 0x0895F258u);
    // nop
    ctx.pc = jump_target;
    if (rt.invoke_chained_call(ctx, &aot_mem) && ctx.pc == 0x0895F258u) goto L_0895F258;
    return;
L_0895F258:
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
L_0895F274:
    ctx.set_gpr(2, rt.memory().aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(48)));
    ctx.set_gpr(2, ctx.gpr[2] << 2u);
    ctx.set_gpr(2, ctx.gpr[2] & 65535u);
    jump_target = ctx.gpr[31];
    // nop
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_0895F288:
    ctx.set_gpr(29, ctx.gpr[29] + static_cast<std::uint32_t>(-16));
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(12), ctx.gpr[31]);
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(8), ctx.gpr[16]);
    ctx.set_gpr(2, ctx.gpr[5] + 0u);
    ctx.set_gpr(16, ctx.gpr[6] + 0u);
    ctx.set_gpr(4, ctx.gpr[16] + 0u);
    ctx.set_gpr(5, 2228u << 16u);
    ctx.set_gpr(5, ctx.gpr[5] + static_cast<std::uint32_t>(-12104));
    ctx.set_gpr(6, ctx.gpr[2] + 0u);
    ctx.set_gpr(31, 0x0895F2B4u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0004_entry, 4u, 427u, 0x08816084u>(ctx, &aot_mem) && ctx.pc == 0x0895F2B4u) goto L_0895F2B4;
    return;
L_0895F2B4:
    ctx.set_gpr(3, 0u + static_cast<std::uint32_t>(1));
    { const bool branch_taken = ctx.gpr[2] != ctx.gpr[3];
    // nop
      if (branch_taken) {
          goto L_0895F2D4;
      }
      goto L_0895F2C0;
    }
L_0895F2C0:
    ctx.set_gpr(4, ctx.gpr[16] + 0u);
    ctx.set_gpr(31, 0x0895F2CCu);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0004_entry, 4u, 508u, 0x08816764u>(ctx, &aot_mem) && ctx.pc == 0x0895F2CCu) goto L_0895F2CC;
    return;
L_0895F2CC:
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_0895F2D8;
      }
      goto L_0895F2D4;
    }
L_0895F2D4:
    ctx.set_gpr(2, 0u + 0u);
    goto L_0895F2D8;
L_0895F2D8:
    ctx.set_gpr(31, rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(12)));
    ctx.set_gpr(16, rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(8)));
    ctx.set_gpr(29, ctx.gpr[29] + static_cast<std::uint32_t>(16));
    jump_target = ctx.gpr[31];
    // nop
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_0895F2EC:
    ctx.set_gpr(29, ctx.gpr[29] + static_cast<std::uint32_t>(-1040));
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(12), ctx.gpr[31]);
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(8), ctx.gpr[16]);
    ctx.set_gpr(16, ctx.gpr[4] + 0u);
    ctx.set_gpr(4, ctx.gpr[29] + static_cast<std::uint32_t>(16));
    ctx.set_gpr(5, 2228u << 16u);
    ctx.set_gpr(5, ctx.gpr[5] + static_cast<std::uint32_t>(-12104));
    ctx.set_gpr(6, rt.memory().aot_load32(ctx.gpr[6] + static_cast<std::uint32_t>(0)));
    ctx.set_gpr(31, 0x0895F314u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0004_entry, 4u, 423u, 0x08815FF4u>(ctx, &aot_mem) && ctx.pc == 0x0895F314u) goto L_0895F314;
    return;
L_0895F314:
    ctx.set_gpr(3, ctx.gpr[29] + static_cast<std::uint32_t>(16));
    { const bool branch_taken = ctx.gpr[3] != 0u;
    // nop
      if (branch_taken) {
          goto L_0895F32C;
      }
      goto L_0895F320;
    }
L_0895F320:
    ctx.set_gpr(3, 0u + 0u);
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_0895F37C;
      }
      goto L_0895F32C;
    }
L_0895F32C:
    ctx.set_gpr(2, 2245u << 16u);
    ctx.set_gpr(2, rt.memory().aot_load32(ctx.gpr[2] + static_cast<std::uint32_t>(30776)));
    { const bool branch_taken = ctx.gpr[2] != 0u;
    // nop
      if (branch_taken) {
          goto L_0895F364;
      }
      goto L_0895F33C;
    }
L_0895F33C:
    ctx.set_gpr(4, 0u + static_cast<std::uint32_t>(16));
    ctx.set_gpr(31, 0x0895F348u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0072_entry, 72u, 788u, 0x089277A0u>(ctx, &aot_mem) && ctx.pc == 0x0895F348u) goto L_0895F348;
    return;
L_0895F348:
    { const bool branch_taken = ctx.gpr[2] == 0u;
    // nop
      if (branch_taken) {
          goto L_0895F35C;
      }
      goto L_0895F350;
    }
L_0895F350:
    ctx.set_gpr(4, ctx.gpr[2] + 0u);
    ctx.set_gpr(31, 0x0895F35Cu);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0072_entry, 72u, 762u, 0x089275E8u>(ctx, &aot_mem) && ctx.pc == 0x0895F35Cu) goto L_0895F35C;
    return;
L_0895F35C:
    ctx.set_gpr(3, 2245u << 16u);
    rt.memory().aot_store32(ctx.gpr[3] + static_cast<std::uint32_t>(30776), ctx.gpr[2]);
    goto L_0895F364;
L_0895F364:
    ctx.set_gpr(2, 2245u << 16u);
    ctx.set_gpr(4, rt.memory().aot_load32(ctx.gpr[2] + static_cast<std::uint32_t>(30776)));
    ctx.set_gpr(5, ctx.gpr[29] + static_cast<std::uint32_t>(16));
    ctx.set_gpr(31, 0x0895F378u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0072_entry, 72u, 784u, 0x08927768u>(ctx, &aot_mem) && ctx.pc == 0x0895F378u) goto L_0895F378;
    return;
L_0895F378:
    ctx.set_gpr(3, ctx.gpr[2] + 0u);
    goto L_0895F37C;
L_0895F37C:
    rt.memory().aot_store32(ctx.gpr[16] + static_cast<std::uint32_t>(0), ctx.gpr[3]);
    ctx.set_gpr(31, rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(12)));
    ctx.set_gpr(16, rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(8)));
    ctx.set_gpr(29, ctx.gpr[29] + static_cast<std::uint32_t>(1040));
    jump_target = ctx.gpr[31];
    // nop
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_0895F394:
    ctx.set_gpr(2, 0u + static_cast<std::uint32_t>(4));
    jump_target = ctx.gpr[31];
    // nop
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_0895F3A0:
    ctx.set_gpr(29, ctx.gpr[29] + static_cast<std::uint32_t>(-16));
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(12), ctx.gpr[31]);
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(8), ctx.gpr[16]);
    ctx.set_gpr(16, ctx.gpr[4] + 0u);
    ctx.set_gpr(31, 0x0895F3B8u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0079_entry, 79u, 501u, 0x0894227Cu>(ctx, &aot_mem) && ctx.pc == 0x0895F3B8u) goto L_0895F3B8;
    return;
L_0895F3B8:
    ctx.set_gpr(2, 2232u << 16u);
    ctx.set_gpr(2, ctx.gpr[2] + static_cast<std::uint32_t>(16120));
    rt.memory().aot_store32(ctx.gpr[16] + static_cast<std::uint32_t>(0), ctx.gpr[2]);
    { const bool branch_taken = ctx.gpr[16] == 0u;
    // nop
      if (branch_taken) {
          goto L_0895F3D8;
      }
      goto L_0895F3CC;
    }
L_0895F3CC:
    ctx.set_gpr(4, ctx.gpr[16] + 0u);
    ctx.set_gpr(31, 0x0895F3D8u);
    // nop
    goto L_0895F3F0;
L_0895F3D8:
    ctx.set_gpr(2, ctx.gpr[16] + 0u);
    ctx.set_gpr(31, rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(12)));
    ctx.set_gpr(16, rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(8)));
    ctx.set_gpr(29, ctx.gpr[29] + static_cast<std::uint32_t>(16));
    jump_target = ctx.gpr[31];
    // nop
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_0895F3F0:
    ctx.set_gpr(29, ctx.gpr[29] + static_cast<std::uint32_t>(-16));
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(12), ctx.gpr[31]);
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(8), ctx.gpr[16]);
    ctx.set_gpr(16, ctx.gpr[4] + 0u);
    ctx.set_gpr(31, 0x0895F408u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0079_entry, 79u, 505u, 0x089422D0u>(ctx, &aot_mem) && ctx.pc == 0x0895F408u) goto L_0895F408;
    return;
L_0895F408:
    ctx.set_gpr(2, 2232u << 16u);
    ctx.set_gpr(2, ctx.gpr[2] + static_cast<std::uint32_t>(16120));
    rt.memory().aot_store32(ctx.gpr[16] + static_cast<std::uint32_t>(0), ctx.gpr[2]);
    ctx.set_gpr(2, ctx.gpr[16] + 0u);
    ctx.set_gpr(31, rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(12)));
    ctx.set_gpr(16, rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(8)));
    ctx.set_gpr(29, ctx.gpr[29] + static_cast<std::uint32_t>(16));
    jump_target = ctx.gpr[31];
    // nop
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_0895F42C:
    ctx.set_gpr(29, ctx.gpr[29] + static_cast<std::uint32_t>(-16));
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(12), ctx.gpr[31]);
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(8), ctx.gpr[16]);
    ctx.set_gpr(16, ctx.gpr[4] + 0u);
    ctx.set_gpr(31, 0x0895F444u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0079_entry, 79u, 519u, 0x08942410u>(ctx, &aot_mem) && ctx.pc == 0x0895F444u) goto L_0895F444;
    return;
L_0895F444:
    ctx.set_gpr(2, 2232u << 16u);
    ctx.set_gpr(2, ctx.gpr[2] + static_cast<std::uint32_t>(16120));
    rt.memory().aot_store32(ctx.gpr[16] + static_cast<std::uint32_t>(0), ctx.gpr[2]);
    ctx.set_gpr(2, ctx.gpr[16] + 0u);
    ctx.set_gpr(31, rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(12)));
    ctx.set_gpr(16, rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(8)));
    ctx.set_gpr(29, ctx.gpr[29] + static_cast<std::uint32_t>(16));
    jump_target = ctx.gpr[31];
    // nop
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_0895F468:
    ctx.set_gpr(29, ctx.gpr[29] + static_cast<std::uint32_t>(-16));
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(12), ctx.gpr[31]);
    ctx.set_gpr(31, 0x0895F478u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0079_entry, 79u, 534u, 0x0894259Cu>(ctx, &aot_mem) && ctx.pc == 0x0895F478u) goto L_0895F478;
    return;
L_0895F478:
    ctx.set_gpr(31, rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(12)));
    ctx.set_gpr(29, ctx.gpr[29] + static_cast<std::uint32_t>(16));
    jump_target = ctx.gpr[31];
    // nop
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_0895F488:
    ctx.set_gpr(29, ctx.gpr[29] + static_cast<std::uint32_t>(-32));
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(12), ctx.gpr[31]);
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(28), ctx.gpr[5]);
    ctx.set_gpr(5, ctx.gpr[29] + static_cast<std::uint32_t>(28));
    ctx.set_gpr(25, rt.memory().aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(0)));
    ctx.set_gpr(25, rt.memory().aot_load32(ctx.gpr[25] + static_cast<std::uint32_t>(144)));
    jump_target = ctx.gpr[25];
    ctx.set_gpr(31, 0x0895F4A8u);
    // nop
    ctx.pc = jump_target;
    if (rt.invoke_chained_call(ctx, &aot_mem) && ctx.pc == 0x0895F4A8u) goto L_0895F4A8;
    return;
L_0895F4A8:
    ctx.set_gpr(31, rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(12)));
    ctx.set_gpr(29, ctx.gpr[29] + static_cast<std::uint32_t>(32));
    jump_target = ctx.gpr[31];
    // nop
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_0895F4B8:
    ctx.set_gpr(2, 0u + static_cast<std::uint32_t>(4));
    jump_target = ctx.gpr[31];
    // nop
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_0895F4C4:
    ctx.set_gpr(29, ctx.gpr[29] + static_cast<std::uint32_t>(-16));
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(12), ctx.gpr[31]);
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(8), ctx.gpr[18]);
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(4), ctx.gpr[17]);
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(0), ctx.gpr[16]);
    ctx.set_gpr(18, ctx.gpr[4] + 0u);
    ctx.set_gpr(17, ctx.gpr[5] + 0u);
    ctx.set_gpr(16, ctx.gpr[6] + 0u);
    ctx.set_gpr(31, 0x0895F4ECu);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0054_entry, 54u, 587u, 0x088DF0A0u>(ctx, &aot_mem) && ctx.pc == 0x0895F4ECu) goto L_0895F4EC;
    return;
L_0895F4EC:
    ctx.set_gpr(3, rt.memory().aot_load32(ctx.gpr[18] + static_cast<std::uint32_t>(48)));
    { const std::int64_t product = static_cast<std::int64_t>(static_cast<std::int32_t>(ctx.gpr[16])) * static_cast<std::int64_t>(static_cast<std::int32_t>(ctx.gpr[3])); ctx.lo = static_cast<std::uint32_t>(product); ctx.hi = static_cast<std::uint32_t>(static_cast<std::uint64_t>(product) >> 32u); }
    ctx.set_gpr(6, ctx.lo);
    ctx.set_gpr(4, ctx.gpr[2] + 0u);
    ctx.set_gpr(5, ctx.gpr[17] + 0u);
    ctx.set_gpr(25, rt.memory().aot_load32(ctx.gpr[2] + static_cast<std::uint32_t>(0)));
    ctx.set_gpr(25, rt.memory().aot_load32(ctx.gpr[25] + static_cast<std::uint32_t>(220)));
    jump_target = ctx.gpr[25];
    ctx.set_gpr(31, 0x0895F510u);
    // nop
    ctx.pc = jump_target;
    if (rt.invoke_chained_call(ctx, &aot_mem) && ctx.pc == 0x0895F510u) goto L_0895F510;
    return;
L_0895F510:
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
L_0895F52C:
    ctx.set_gpr(2, rt.memory().aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(48)));
    ctx.set_gpr(2, ctx.gpr[2] << 3u);
    ctx.set_gpr(2, ctx.gpr[2] & 65535u);
    jump_target = ctx.gpr[31];
    // nop
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_0895F540:
    ctx.set_gpr(29, ctx.gpr[29] + static_cast<std::uint32_t>(-16));
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(12), ctx.gpr[31]);
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(8), ctx.gpr[16]);
    ctx.set_gpr(2, ctx.gpr[5] + 0u);
    ctx.set_gpr(16, ctx.gpr[6] + 0u);
    ctx.set_gpr(4, ctx.gpr[16] + 0u);
    ctx.set_gpr(5, 2228u << 16u);
    ctx.set_gpr(5, ctx.gpr[5] + static_cast<std::uint32_t>(-11520));
    ctx.set_gpr(6, ctx.gpr[2] + 0u);
    ctx.set_gpr(31, 0x0895F56Cu);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0004_entry, 4u, 427u, 0x08816084u>(ctx, &aot_mem) && ctx.pc == 0x0895F56Cu) goto L_0895F56C;
    return;
L_0895F56C:
    ctx.set_gpr(3, 0u + static_cast<std::uint32_t>(1));
    { const bool branch_taken = ctx.gpr[2] != ctx.gpr[3];
    // nop
      if (branch_taken) {
          goto L_0895F58C;
      }
      goto L_0895F578;
    }
L_0895F578:
    ctx.set_gpr(4, ctx.gpr[16] + 0u);
    ctx.set_gpr(31, 0x0895F584u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0004_entry, 4u, 508u, 0x08816764u>(ctx, &aot_mem) && ctx.pc == 0x0895F584u) goto L_0895F584;
    return;
L_0895F584:
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_0895F590;
      }
      goto L_0895F58C;
    }
L_0895F58C:
    ctx.set_gpr(2, 0u + 0u);
    goto L_0895F590;
L_0895F590:
    ctx.set_gpr(31, rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(12)));
    ctx.set_gpr(16, rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(8)));
    ctx.set_gpr(29, ctx.gpr[29] + static_cast<std::uint32_t>(16));
    jump_target = ctx.gpr[31];
    // nop
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_0895F5A4:
    ctx.set_gpr(29, ctx.gpr[29] + static_cast<std::uint32_t>(-1040));
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(12), ctx.gpr[31]);
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(8), ctx.gpr[16]);
    ctx.set_gpr(16, ctx.gpr[4] + 0u);
    ctx.set_gpr(4, ctx.gpr[29] + static_cast<std::uint32_t>(16));
    ctx.set_gpr(5, 2228u << 16u);
    ctx.set_gpr(5, ctx.gpr[5] + static_cast<std::uint32_t>(-11520));
    ctx.set_gpr(2, rt.memory().aot_load32(ctx.gpr[6] + static_cast<std::uint32_t>(0)));
    ctx.set_gpr(7, rt.memory().aot_load32(ctx.gpr[6] + static_cast<std::uint32_t>(4)));
    ctx.set_gpr(6, ctx.gpr[2] + 0u);
    ctx.set_gpr(31, 0x0895F5D4u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0004_entry, 4u, 423u, 0x08815FF4u>(ctx, &aot_mem) && ctx.pc == 0x0895F5D4u) goto L_0895F5D4;
    return;
L_0895F5D4:
    ctx.set_gpr(3, ctx.gpr[29] + static_cast<std::uint32_t>(16));
    { const bool branch_taken = ctx.gpr[3] != 0u;
    // nop
      if (branch_taken) {
          goto L_0895F5EC;
      }
      goto L_0895F5E0;
    }
L_0895F5E0:
    ctx.set_gpr(3, 0u + 0u);
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_0895F63C;
      }
      goto L_0895F5EC;
    }
L_0895F5EC:
    ctx.set_gpr(2, 2245u << 16u);
    ctx.set_gpr(2, rt.memory().aot_load32(ctx.gpr[2] + static_cast<std::uint32_t>(30776)));
    { const bool branch_taken = ctx.gpr[2] != 0u;
    // nop
      if (branch_taken) {
          goto L_0895F624;
      }
      goto L_0895F5FC;
    }
L_0895F5FC:
    ctx.set_gpr(4, 0u + static_cast<std::uint32_t>(16));
    ctx.set_gpr(31, 0x0895F608u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0072_entry, 72u, 788u, 0x089277A0u>(ctx, &aot_mem) && ctx.pc == 0x0895F608u) goto L_0895F608;
    return;
L_0895F608:
    { const bool branch_taken = ctx.gpr[2] == 0u;
    // nop
      if (branch_taken) {
          goto L_0895F61C;
      }
      goto L_0895F610;
    }
L_0895F610:
    ctx.set_gpr(4, ctx.gpr[2] + 0u);
    ctx.set_gpr(31, 0x0895F61Cu);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0072_entry, 72u, 762u, 0x089275E8u>(ctx, &aot_mem) && ctx.pc == 0x0895F61Cu) goto L_0895F61C;
    return;
L_0895F61C:
    ctx.set_gpr(3, 2245u << 16u);
    rt.memory().aot_store32(ctx.gpr[3] + static_cast<std::uint32_t>(30776), ctx.gpr[2]);
    goto L_0895F624;
L_0895F624:
    ctx.set_gpr(2, 2245u << 16u);
    ctx.set_gpr(4, rt.memory().aot_load32(ctx.gpr[2] + static_cast<std::uint32_t>(30776)));
    ctx.set_gpr(5, ctx.gpr[29] + static_cast<std::uint32_t>(16));
    ctx.set_gpr(31, 0x0895F638u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0072_entry, 72u, 784u, 0x08927768u>(ctx, &aot_mem) && ctx.pc == 0x0895F638u) goto L_0895F638;
    return;
L_0895F638:
    ctx.set_gpr(3, ctx.gpr[2] + 0u);
    goto L_0895F63C;
L_0895F63C:
    rt.memory().aot_store32(ctx.gpr[16] + static_cast<std::uint32_t>(0), ctx.gpr[3]);
    ctx.set_gpr(31, rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(12)));
    ctx.set_gpr(16, rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(8)));
    ctx.set_gpr(29, ctx.gpr[29] + static_cast<std::uint32_t>(1040));
    jump_target = ctx.gpr[31];
    // nop
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_0895F654:
    ctx.set_gpr(2, 0u + static_cast<std::uint32_t>(8));
    jump_target = ctx.gpr[31];
    // nop
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_0895F660:
    ctx.set_gpr(29, ctx.gpr[29] + static_cast<std::uint32_t>(-16));
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(12), ctx.gpr[31]);
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(8), ctx.gpr[16]);
    ctx.set_gpr(16, ctx.gpr[4] + 0u);
    ctx.set_gpr(31, 0x0895F678u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0079_entry, 79u, 501u, 0x0894227Cu>(ctx, &aot_mem) && ctx.pc == 0x0895F678u) goto L_0895F678;
    return;
L_0895F678:
    ctx.set_gpr(2, 2232u << 16u);
    ctx.set_gpr(2, ctx.gpr[2] + static_cast<std::uint32_t>(15864));
    rt.memory().aot_store32(ctx.gpr[16] + static_cast<std::uint32_t>(0), ctx.gpr[2]);
    { const bool branch_taken = ctx.gpr[16] == 0u;
    // nop
      if (branch_taken) {
          goto L_0895F698;
      }
      goto L_0895F68C;
    }
L_0895F68C:
    ctx.set_gpr(4, ctx.gpr[16] + 0u);
    ctx.set_gpr(31, 0x0895F698u);
    // nop
    goto L_0895F6B0;
L_0895F698:
    ctx.set_gpr(2, ctx.gpr[16] + 0u);
    ctx.set_gpr(31, rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(12)));
    ctx.set_gpr(16, rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(8)));
    ctx.set_gpr(29, ctx.gpr[29] + static_cast<std::uint32_t>(16));
    jump_target = ctx.gpr[31];
    // nop
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_0895F6B0:
    ctx.set_gpr(29, ctx.gpr[29] + static_cast<std::uint32_t>(-16));
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(12), ctx.gpr[31]);
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(8), ctx.gpr[16]);
    ctx.set_gpr(16, ctx.gpr[4] + 0u);
    ctx.set_gpr(31, 0x0895F6C8u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0079_entry, 79u, 505u, 0x089422D0u>(ctx, &aot_mem) && ctx.pc == 0x0895F6C8u) goto L_0895F6C8;
    return;
L_0895F6C8:
    ctx.set_gpr(2, 2232u << 16u);
    ctx.set_gpr(2, ctx.gpr[2] + static_cast<std::uint32_t>(15864));
    rt.memory().aot_store32(ctx.gpr[16] + static_cast<std::uint32_t>(0), ctx.gpr[2]);
    ctx.set_gpr(2, ctx.gpr[16] + 0u);
    ctx.set_gpr(31, rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(12)));
    ctx.set_gpr(16, rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(8)));
    ctx.set_gpr(29, ctx.gpr[29] + static_cast<std::uint32_t>(16));
    jump_target = ctx.gpr[31];
    // nop
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_0895F6EC:
    ctx.set_gpr(29, ctx.gpr[29] + static_cast<std::uint32_t>(-16));
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(12), ctx.gpr[31]);
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(8), ctx.gpr[16]);
    ctx.set_gpr(16, ctx.gpr[4] + 0u);
    ctx.set_gpr(31, 0x0895F704u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0079_entry, 79u, 519u, 0x08942410u>(ctx, &aot_mem) && ctx.pc == 0x0895F704u) goto L_0895F704;
    return;
L_0895F704:
    ctx.set_gpr(2, 2232u << 16u);
    ctx.set_gpr(2, ctx.gpr[2] + static_cast<std::uint32_t>(15864));
    rt.memory().aot_store32(ctx.gpr[16] + static_cast<std::uint32_t>(0), ctx.gpr[2]);
    ctx.set_gpr(2, ctx.gpr[16] + 0u);
    ctx.set_gpr(31, rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(12)));
    ctx.set_gpr(16, rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(8)));
    ctx.set_gpr(29, ctx.gpr[29] + static_cast<std::uint32_t>(16));
    jump_target = ctx.gpr[31];
    // nop
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_0895F728:
    ctx.set_gpr(29, ctx.gpr[29] + static_cast<std::uint32_t>(-16));
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(12), ctx.gpr[31]);
    ctx.set_gpr(31, 0x0895F738u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0079_entry, 79u, 534u, 0x0894259Cu>(ctx, &aot_mem) && ctx.pc == 0x0895F738u) goto L_0895F738;
    return;
L_0895F738:
    ctx.set_gpr(31, rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(12)));
    ctx.set_gpr(29, ctx.gpr[29] + static_cast<std::uint32_t>(16));
    jump_target = ctx.gpr[31];
    // nop
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_0895F748:
    ctx.set_gpr(29, ctx.gpr[29] + static_cast<std::uint32_t>(-32));
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(12), ctx.gpr[31]);
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(24), ctx.gpr[6]);
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(28), ctx.gpr[7]);
    ctx.set_gpr(5, ctx.gpr[29] + static_cast<std::uint32_t>(24));
    ctx.set_gpr(25, rt.memory().aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(0)));
    ctx.set_gpr(25, rt.memory().aot_load32(ctx.gpr[25] + static_cast<std::uint32_t>(144)));
    jump_target = ctx.gpr[25];
    ctx.set_gpr(31, 0x0895F76Cu);
    // nop
    ctx.pc = jump_target;
    if (rt.invoke_chained_call(ctx, &aot_mem) && ctx.pc == 0x0895F76Cu) goto L_0895F76C;
    return;
L_0895F76C:
    ctx.set_gpr(31, rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(12)));
    ctx.set_gpr(29, ctx.gpr[29] + static_cast<std::uint32_t>(32));
    jump_target = ctx.gpr[31];
    // nop
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_0895F77C:
    ctx.set_gpr(2, 0u + static_cast<std::uint32_t>(8));
    jump_target = ctx.gpr[31];
    // nop
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_0895F788:
    ctx.set_gpr(29, ctx.gpr[29] + static_cast<std::uint32_t>(-16));
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(12), ctx.gpr[31]);
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(8), ctx.gpr[18]);
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(4), ctx.gpr[17]);
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(0), ctx.gpr[16]);
    ctx.set_gpr(18, ctx.gpr[4] + 0u);
    ctx.set_gpr(17, ctx.gpr[5] + 0u);
    ctx.set_gpr(16, ctx.gpr[6] + 0u);
    ctx.set_gpr(31, 0x0895F7B0u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0054_entry, 54u, 674u, 0x088DF7A8u>(ctx, &aot_mem) && ctx.pc == 0x0895F7B0u) goto L_0895F7B0;
    return;
L_0895F7B0:
    ctx.set_gpr(3, rt.memory().aot_load32(ctx.gpr[18] + static_cast<std::uint32_t>(48)));
    { const std::int64_t product = static_cast<std::int64_t>(static_cast<std::int32_t>(ctx.gpr[16])) * static_cast<std::int64_t>(static_cast<std::int32_t>(ctx.gpr[3])); ctx.lo = static_cast<std::uint32_t>(product); ctx.hi = static_cast<std::uint32_t>(static_cast<std::uint64_t>(product) >> 32u); }
    ctx.set_gpr(6, ctx.lo);
    ctx.set_gpr(4, ctx.gpr[2] + 0u);
    ctx.set_gpr(5, ctx.gpr[17] + 0u);
    ctx.set_gpr(25, rt.memory().aot_load32(ctx.gpr[2] + static_cast<std::uint32_t>(0)));
    ctx.set_gpr(25, rt.memory().aot_load32(ctx.gpr[25] + static_cast<std::uint32_t>(220)));
    jump_target = ctx.gpr[25];
    ctx.set_gpr(31, 0x0895F7D4u);
    // nop
    ctx.pc = jump_target;
    if (rt.invoke_chained_call(ctx, &aot_mem) && ctx.pc == 0x0895F7D4u) goto L_0895F7D4;
    return;
L_0895F7D4:
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
L_0895F7F0:
    ctx.set_gpr(2, rt.memory().aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(48)));
    ctx.set_gpr(2, ctx.gpr[2] << 1u);
    ctx.set_gpr(2, ctx.gpr[2] & 65535u);
    jump_target = ctx.gpr[31];
    // nop
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_0895F804:
    ctx.set_gpr(29, ctx.gpr[29] + static_cast<std::uint32_t>(-16));
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(12), ctx.gpr[31]);
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(8), ctx.gpr[16]);
    ctx.set_gpr(2, ctx.gpr[5] + 0u);
    ctx.set_gpr(16, ctx.gpr[6] + 0u);
    ctx.set_gpr(4, ctx.gpr[16] + 0u);
    ctx.set_gpr(5, 2228u << 16u);
    ctx.set_gpr(5, ctx.gpr[5] + static_cast<std::uint32_t>(-1396));
    ctx.set_gpr(6, ctx.gpr[2] + 0u);
    ctx.set_gpr(31, 0x0895F830u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0004_entry, 4u, 427u, 0x08816084u>(ctx, &aot_mem) && ctx.pc == 0x0895F830u) goto L_0895F830;
    return;
L_0895F830:
    ctx.set_gpr(3, 0u + static_cast<std::uint32_t>(1));
    { const bool branch_taken = ctx.gpr[2] != ctx.gpr[3];
    // nop
      if (branch_taken) {
          goto L_0895F850;
      }
      goto L_0895F83C;
    }
L_0895F83C:
    ctx.set_gpr(4, ctx.gpr[16] + 0u);
    ctx.set_gpr(31, 0x0895F848u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0004_entry, 4u, 508u, 0x08816764u>(ctx, &aot_mem) && ctx.pc == 0x0895F848u) goto L_0895F848;
    return;
L_0895F848:
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_0895F854;
      }
      goto L_0895F850;
    }
L_0895F850:
    ctx.set_gpr(2, 0u + 0u);
    goto L_0895F854;
L_0895F854:
    ctx.set_gpr(31, rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(12)));
    ctx.set_gpr(16, rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(8)));
    ctx.set_gpr(29, ctx.gpr[29] + static_cast<std::uint32_t>(16));
    jump_target = ctx.gpr[31];
    // nop
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_0895F868:
    ctx.set_gpr(29, ctx.gpr[29] + static_cast<std::uint32_t>(-1040));
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(12), ctx.gpr[31]);
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(8), ctx.gpr[16]);
    ctx.set_gpr(16, ctx.gpr[4] + 0u);
    ctx.set_gpr(6, rt.memory().aot_load16(ctx.gpr[6] + static_cast<std::uint32_t>(0)));
    ctx.set_gpr(4, ctx.gpr[29] + static_cast<std::uint32_t>(16));
    ctx.set_gpr(5, 2228u << 16u);
    ctx.set_gpr(5, ctx.gpr[5] + static_cast<std::uint32_t>(-1396));
    ctx.set_gpr(31, 0x0895F890u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0004_entry, 4u, 423u, 0x08815FF4u>(ctx, &aot_mem) && ctx.pc == 0x0895F890u) goto L_0895F890;
    return;
L_0895F890:
    ctx.set_gpr(3, ctx.gpr[29] + static_cast<std::uint32_t>(16));
    { const bool branch_taken = ctx.gpr[3] != 0u;
    // nop
      if (branch_taken) {
          goto L_0895F8A8;
      }
      goto L_0895F89C;
    }
L_0895F89C:
    ctx.set_gpr(3, 0u + 0u);
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_0895F8F8;
      }
      goto L_0895F8A8;
    }
L_0895F8A8:
    ctx.set_gpr(2, 2245u << 16u);
    ctx.set_gpr(2, rt.memory().aot_load32(ctx.gpr[2] + static_cast<std::uint32_t>(30776)));
    { const bool branch_taken = ctx.gpr[2] != 0u;
    // nop
      if (branch_taken) {
          goto L_0895F8E0;
      }
      goto L_0895F8B8;
    }
L_0895F8B8:
    ctx.set_gpr(4, 0u + static_cast<std::uint32_t>(16));
    ctx.set_gpr(31, 0x0895F8C4u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0072_entry, 72u, 788u, 0x089277A0u>(ctx, &aot_mem) && ctx.pc == 0x0895F8C4u) goto L_0895F8C4;
    return;
L_0895F8C4:
    { const bool branch_taken = ctx.gpr[2] == 0u;
    // nop
      if (branch_taken) {
          goto L_0895F8D8;
      }
      goto L_0895F8CC;
    }
L_0895F8CC:
    ctx.set_gpr(4, ctx.gpr[2] + 0u);
    ctx.set_gpr(31, 0x0895F8D8u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0072_entry, 72u, 762u, 0x089275E8u>(ctx, &aot_mem) && ctx.pc == 0x0895F8D8u) goto L_0895F8D8;
    return;
L_0895F8D8:
    ctx.set_gpr(3, 2245u << 16u);
    rt.memory().aot_store32(ctx.gpr[3] + static_cast<std::uint32_t>(30776), ctx.gpr[2]);
    goto L_0895F8E0;
L_0895F8E0:
    ctx.set_gpr(2, 2245u << 16u);
    ctx.set_gpr(4, rt.memory().aot_load32(ctx.gpr[2] + static_cast<std::uint32_t>(30776)));
    ctx.set_gpr(5, ctx.gpr[29] + static_cast<std::uint32_t>(16));
    ctx.set_gpr(31, 0x0895F8F4u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0072_entry, 72u, 784u, 0x08927768u>(ctx, &aot_mem) && ctx.pc == 0x0895F8F4u) goto L_0895F8F4;
    return;
L_0895F8F4:
    ctx.set_gpr(3, ctx.gpr[2] + 0u);
    goto L_0895F8F8;
L_0895F8F8:
    rt.memory().aot_store32(ctx.gpr[16] + static_cast<std::uint32_t>(0), ctx.gpr[3]);
    ctx.set_gpr(31, rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(12)));
    ctx.set_gpr(16, rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(8)));
    ctx.set_gpr(29, ctx.gpr[29] + static_cast<std::uint32_t>(1040));
    jump_target = ctx.gpr[31];
    // nop
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_0895F910:
    ctx.set_gpr(2, 0u + static_cast<std::uint32_t>(2));
    jump_target = ctx.gpr[31];
    // nop
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_0895F91C:
    ctx.set_gpr(29, ctx.gpr[29] + static_cast<std::uint32_t>(-32));
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(12), ctx.gpr[31]);
    rt.memory().aot_store16(ctx.gpr[29] + static_cast<std::uint32_t>(30), static_cast<std::uint16_t>(ctx.gpr[5]));
    ctx.set_gpr(5, ctx.gpr[29] + static_cast<std::uint32_t>(30));
    ctx.set_gpr(25, rt.memory().aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(0)));
    ctx.set_gpr(25, rt.memory().aot_load32(ctx.gpr[25] + static_cast<std::uint32_t>(144)));
    jump_target = ctx.gpr[25];
    ctx.set_gpr(31, 0x0895F93Cu);
    // nop
    ctx.pc = jump_target;
    if (rt.invoke_chained_call(ctx, &aot_mem) && ctx.pc == 0x0895F93Cu) goto L_0895F93C;
    return;
L_0895F93C:
    ctx.set_gpr(31, rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(12)));
    ctx.set_gpr(29, ctx.gpr[29] + static_cast<std::uint32_t>(32));
    jump_target = ctx.gpr[31];
    // nop
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_0895F94C:
    ctx.set_gpr(29, ctx.gpr[29] + static_cast<std::uint32_t>(-16));
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(12), ctx.gpr[31]);
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(8), ctx.gpr[16]);
    ctx.set_gpr(16, ctx.gpr[4] + 0u);
    ctx.set_gpr(31, 0x0895F964u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0079_entry, 79u, 501u, 0x0894227Cu>(ctx, &aot_mem) && ctx.pc == 0x0895F964u) goto L_0895F964;
    return;
L_0895F964:
    ctx.set_gpr(2, 2232u << 16u);
    ctx.set_gpr(2, ctx.gpr[2] + static_cast<std::uint32_t>(15608));
    rt.memory().aot_store32(ctx.gpr[16] + static_cast<std::uint32_t>(0), ctx.gpr[2]);
    { const bool branch_taken = ctx.gpr[16] == 0u;
    // nop
      if (branch_taken) {
          goto L_0895F984;
      }
      goto L_0895F978;
    }
L_0895F978:
    ctx.set_gpr(4, ctx.gpr[16] + 0u);
    ctx.set_gpr(31, 0x0895F984u);
    // nop
    goto L_0895F99C;
L_0895F984:
    ctx.set_gpr(2, ctx.gpr[16] + 0u);
    ctx.set_gpr(31, rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(12)));
    ctx.set_gpr(16, rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(8)));
    ctx.set_gpr(29, ctx.gpr[29] + static_cast<std::uint32_t>(16));
    jump_target = ctx.gpr[31];
    // nop
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_0895F99C:
    ctx.set_gpr(29, ctx.gpr[29] + static_cast<std::uint32_t>(-16));
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(12), ctx.gpr[31]);
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(8), ctx.gpr[16]);
    ctx.set_gpr(16, ctx.gpr[4] + 0u);
    ctx.set_gpr(31, 0x0895F9B4u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0079_entry, 79u, 505u, 0x089422D0u>(ctx, &aot_mem) && ctx.pc == 0x0895F9B4u) goto L_0895F9B4;
    return;
L_0895F9B4:
    ctx.set_gpr(2, 2232u << 16u);
    ctx.set_gpr(2, ctx.gpr[2] + static_cast<std::uint32_t>(15608));
    rt.memory().aot_store32(ctx.gpr[16] + static_cast<std::uint32_t>(0), ctx.gpr[2]);
    ctx.set_gpr(2, ctx.gpr[16] + 0u);
    ctx.set_gpr(31, rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(12)));
    ctx.set_gpr(16, rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(8)));
    ctx.set_gpr(29, ctx.gpr[29] + static_cast<std::uint32_t>(16));
    jump_target = ctx.gpr[31];
    // nop
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_0895F9D8:
    ctx.set_gpr(29, ctx.gpr[29] + static_cast<std::uint32_t>(-16));
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(12), ctx.gpr[31]);
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(8), ctx.gpr[16]);
    ctx.set_gpr(16, ctx.gpr[4] + 0u);
    ctx.set_gpr(31, 0x0895F9F0u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0079_entry, 79u, 519u, 0x08942410u>(ctx, &aot_mem) && ctx.pc == 0x0895F9F0u) goto L_0895F9F0;
    return;
L_0895F9F0:
    ctx.set_gpr(2, 2232u << 16u);
    ctx.set_gpr(2, ctx.gpr[2] + static_cast<std::uint32_t>(15608));
    rt.memory().aot_store32(ctx.gpr[16] + static_cast<std::uint32_t>(0), ctx.gpr[2]);
    ctx.set_gpr(2, ctx.gpr[16] + 0u);
    ctx.set_gpr(31, rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(12)));
    ctx.set_gpr(16, rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(8)));
    ctx.set_gpr(29, ctx.gpr[29] + static_cast<std::uint32_t>(16));
    jump_target = ctx.gpr[31];
    // nop
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_0895FA14:
    ctx.set_gpr(29, ctx.gpr[29] + static_cast<std::uint32_t>(-16));
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(12), ctx.gpr[31]);
    ctx.set_gpr(31, 0x0895FA24u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0079_entry, 79u, 534u, 0x0894259Cu>(ctx, &aot_mem) && ctx.pc == 0x0895FA24u) goto L_0895FA24;
    return;
L_0895FA24:
    ctx.set_gpr(31, rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(12)));
    ctx.set_gpr(29, ctx.gpr[29] + static_cast<std::uint32_t>(16));
    jump_target = ctx.gpr[31];
    // nop
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_0895FA34:
    ctx.set_gpr(2, 0u + static_cast<std::uint32_t>(2));
    jump_target = ctx.gpr[31];
    // nop
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_0895FA40:
    ctx.set_gpr(29, ctx.gpr[29] + static_cast<std::uint32_t>(-16));
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(12), ctx.gpr[31]);
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(8), ctx.gpr[16]);
    ctx.set_gpr(2, ctx.gpr[5] + 0u);
    ctx.set_gpr(16, ctx.gpr[6] + 0u);
    ctx.set_gpr(4, ctx.gpr[16] + 0u);
    ctx.set_gpr(5, 2228u << 16u);
    ctx.set_gpr(5, ctx.gpr[5] + static_cast<std::uint32_t>(-13304));
    ctx.set_gpr(6, ctx.gpr[2] + 0u);
    ctx.set_gpr(31, 0x0895FA6Cu);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0004_entry, 4u, 427u, 0x08816084u>(ctx, &aot_mem) && ctx.pc == 0x0895FA6Cu) goto L_0895FA6C;
    return;
L_0895FA6C:
    ctx.set_gpr(3, 0u + static_cast<std::uint32_t>(1));
    { const bool branch_taken = ctx.gpr[2] != ctx.gpr[3];
    // nop
      if (branch_taken) {
          goto L_0895FA8C;
      }
      goto L_0895FA78;
    }
L_0895FA78:
    ctx.set_gpr(4, ctx.gpr[16] + 0u);
    ctx.set_gpr(31, 0x0895FA84u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0004_entry, 4u, 508u, 0x08816764u>(ctx, &aot_mem) && ctx.pc == 0x0895FA84u) goto L_0895FA84;
    return;
L_0895FA84:
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_0895FA90;
      }
      goto L_0895FA8C;
    }
L_0895FA8C:
    ctx.set_gpr(2, 0u + 0u);
    goto L_0895FA90;
L_0895FA90:
    ctx.set_gpr(31, rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(12)));
    ctx.set_gpr(16, rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(8)));
    ctx.set_gpr(29, ctx.gpr[29] + static_cast<std::uint32_t>(16));
    jump_target = ctx.gpr[31];
    // nop
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_0895FAA4:
    ctx.set_gpr(29, ctx.gpr[29] + static_cast<std::uint32_t>(-1040));
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(12), ctx.gpr[31]);
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(8), ctx.gpr[16]);
    ctx.set_gpr(16, ctx.gpr[4] + 0u);
    ctx.set_gpr(4, ctx.gpr[29] + static_cast<std::uint32_t>(16));
    ctx.set_gpr(5, 2228u << 16u);
    ctx.set_gpr(5, ctx.gpr[5] + static_cast<std::uint32_t>(-13304));
    ctx.set_gpr(6, rt.memory().aot_load32(ctx.gpr[6] + static_cast<std::uint32_t>(0)));
    ctx.set_gpr(31, 0x0895FACCu);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0004_entry, 4u, 423u, 0x08815FF4u>(ctx, &aot_mem) && ctx.pc == 0x0895FACCu) goto L_0895FACC;
    return;
L_0895FACC:
    ctx.set_gpr(3, ctx.gpr[29] + static_cast<std::uint32_t>(16));
    { const bool branch_taken = ctx.gpr[3] != 0u;
    // nop
      if (branch_taken) {
          goto L_0895FAE4;
      }
      goto L_0895FAD8;
    }
L_0895FAD8:
    ctx.set_gpr(3, 0u + 0u);
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_0895FB34;
      }
      goto L_0895FAE4;
    }
L_0895FAE4:
    ctx.set_gpr(2, 2245u << 16u);
    ctx.set_gpr(2, rt.memory().aot_load32(ctx.gpr[2] + static_cast<std::uint32_t>(30776)));
    { const bool branch_taken = ctx.gpr[2] != 0u;
    // nop
      if (branch_taken) {
          goto L_0895FB1C;
      }
      goto L_0895FAF4;
    }
L_0895FAF4:
    ctx.set_gpr(4, 0u + static_cast<std::uint32_t>(16));
    ctx.set_gpr(31, 0x0895FB00u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0072_entry, 72u, 788u, 0x089277A0u>(ctx, &aot_mem) && ctx.pc == 0x0895FB00u) goto L_0895FB00;
    return;
L_0895FB00:
    { const bool branch_taken = ctx.gpr[2] == 0u;
    // nop
      if (branch_taken) {
          goto L_0895FB14;
      }
      goto L_0895FB08;
    }
L_0895FB08:
    ctx.set_gpr(4, ctx.gpr[2] + 0u);
    ctx.set_gpr(31, 0x0895FB14u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0072_entry, 72u, 762u, 0x089275E8u>(ctx, &aot_mem) && ctx.pc == 0x0895FB14u) goto L_0895FB14;
    return;
L_0895FB14:
    ctx.set_gpr(3, 2245u << 16u);
    rt.memory().aot_store32(ctx.gpr[3] + static_cast<std::uint32_t>(30776), ctx.gpr[2]);
    goto L_0895FB1C;
L_0895FB1C:
    ctx.set_gpr(2, 2245u << 16u);
    ctx.set_gpr(4, rt.memory().aot_load32(ctx.gpr[2] + static_cast<std::uint32_t>(30776)));
    ctx.set_gpr(5, ctx.gpr[29] + static_cast<std::uint32_t>(16));
    ctx.set_gpr(31, 0x0895FB30u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0072_entry, 72u, 784u, 0x08927768u>(ctx, &aot_mem) && ctx.pc == 0x0895FB30u) goto L_0895FB30;
    return;
L_0895FB30:
    ctx.set_gpr(3, ctx.gpr[2] + 0u);
    goto L_0895FB34;
L_0895FB34:
    rt.memory().aot_store32(ctx.gpr[16] + static_cast<std::uint32_t>(0), ctx.gpr[3]);
    ctx.set_gpr(31, rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(12)));
    ctx.set_gpr(16, rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(8)));
    ctx.set_gpr(29, ctx.gpr[29] + static_cast<std::uint32_t>(1040));
    jump_target = ctx.gpr[31];
    // nop
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_0895FB4C:
    ctx.set_gpr(2, 0u + static_cast<std::uint32_t>(4));
    jump_target = ctx.gpr[31];
    // nop
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_0895FB58:
    ctx.set_gpr(29, ctx.gpr[29] + static_cast<std::uint32_t>(-16));
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(12), ctx.gpr[31]);
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(8), ctx.gpr[17]);
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(4), ctx.gpr[16]);
    ctx.set_gpr(17, ctx.gpr[4] + 0u);
    ctx.set_gpr(16, ctx.gpr[5] + 0u);
    { const bool branch_taken = ctx.gpr[16] == 0u;
    // nop
      if (branch_taken) {
          goto L_0895FBB0;
      }
      goto L_0895FB78;
    }
L_0895FB78:
    ctx.set_gpr(31, 0x0895FB80u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0064_entry, 64u, 444u, 0x08905FF0u>(ctx, &aot_mem) && ctx.pc == 0x0895FB80u) goto L_0895FB80;
    return;
L_0895FB80:
    ctx.set_gpr(2, rt.memory().aot_load32(ctx.gpr[2] + static_cast<std::uint32_t>(932)));
    ctx.set_gpr(3, ctx.gpr[16] + ctx.gpr[2]);
    ctx.set_gpr(2, rt.memory().aot_load32(ctx.gpr[17] + static_cast<std::uint32_t>(32)));
    ctx.set_gpr(3, rt.memory().aot_load32(ctx.gpr[3] + static_cast<std::uint32_t>(0)));
    ctx.set_gpr(2, rt.memory().aot_load32(ctx.gpr[2] + static_cast<std::uint32_t>(0)));
    ctx.set_gpr(6, ctx.gpr[3] + ctx.gpr[2]);
    ctx.set_gpr(4, ctx.gpr[17] + 0u);
    ctx.set_gpr(5, ctx.gpr[16] + 0u);
    ctx.set_gpr(25, rt.memory().aot_load32(ctx.gpr[17] + static_cast<std::uint32_t>(0)));
    ctx.set_gpr(25, rt.memory().aot_load32(ctx.gpr[25] + static_cast<std::uint32_t>(96)));
    jump_target = ctx.gpr[25];
    ctx.set_gpr(31, 0x0895FBB0u);
    // nop
    ctx.pc = jump_target;
    if (rt.invoke_chained_call(ctx, &aot_mem) && ctx.pc == 0x0895FBB0u) goto L_0895FBB0;
    return;
L_0895FBB0:
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
L_0895FBC8:
    ctx.set_gpr(29, ctx.gpr[29] + static_cast<std::uint32_t>(-16));
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(12), ctx.gpr[31]);
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(8), ctx.gpr[17]);
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(4), ctx.gpr[16]);
    ctx.set_gpr(17, ctx.gpr[4] + 0u);
    ctx.set_gpr(16, ctx.gpr[5] + 0u);
    { const bool branch_taken = ctx.gpr[16] == 0u;
    // nop
      if (branch_taken) {
          goto L_0895FC20;
      }
      goto L_0895FBE8;
    }
L_0895FBE8:
    ctx.set_gpr(31, 0x0895FBF0u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0064_entry, 64u, 444u, 0x08905FF0u>(ctx, &aot_mem) && ctx.pc == 0x0895FBF0u) goto L_0895FBF0;
    return;
L_0895FBF0:
    ctx.set_gpr(2, rt.memory().aot_load32(ctx.gpr[2] + static_cast<std::uint32_t>(932)));
    ctx.set_gpr(3, ctx.gpr[16] + ctx.gpr[2]);
    ctx.set_gpr(2, rt.memory().aot_load32(ctx.gpr[17] + static_cast<std::uint32_t>(32)));
    ctx.set_gpr(3, rt.memory().aot_load32(ctx.gpr[3] + static_cast<std::uint32_t>(0)));
    ctx.set_gpr(2, rt.memory().aot_load32(ctx.gpr[2] + static_cast<std::uint32_t>(0)));
    ctx.set_gpr(6, ctx.gpr[3] + ctx.gpr[2]);
    ctx.set_gpr(4, ctx.gpr[17] + 0u);
    ctx.set_gpr(5, ctx.gpr[16] + 0u);
    ctx.set_gpr(25, rt.memory().aot_load32(ctx.gpr[17] + static_cast<std::uint32_t>(0)));
    ctx.set_gpr(25, rt.memory().aot_load32(ctx.gpr[25] + static_cast<std::uint32_t>(96)));
    jump_target = ctx.gpr[25];
    ctx.set_gpr(31, 0x0895FC20u);
    // nop
    ctx.pc = jump_target;
    if (rt.invoke_chained_call(ctx, &aot_mem) && ctx.pc == 0x0895FC20u) goto L_0895FC20;
    return;
L_0895FC20:
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
L_0895FC38:
    ctx.set_gpr(2, 0u + static_cast<std::uint32_t>(4));
    jump_target = ctx.gpr[31];
    // nop
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_0895FC44:
    ctx.set_gpr(29, ctx.gpr[29] + static_cast<std::uint32_t>(-32));
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(28), ctx.gpr[31]);
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(24), ctx.gpr[19]);
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(20), ctx.gpr[18]);
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(16), ctx.gpr[17]);
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(12), ctx.gpr[16]);
    ctx.set_gpr(19, ctx.gpr[4] + 0u);
    ctx.set_gpr(18, rt.memory().aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(212)));
    ctx.set_gpr(17, rt.memory().aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(100)));
    ctx.set_gpr(31, 0x0895FC70u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0094_entry, 94u, 249u, 0x0897D318u>(ctx, &aot_mem) && ctx.pc == 0x0895FC70u) goto L_0895FC70;
    return;
L_0895FC70:
    ctx.set_gpr(4, 0u + static_cast<std::uint32_t>(1));
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_0895FCEC;
      }
      goto L_0895FC7C;
    }
L_0895FC7C:
    ctx.set_gpr(2, ctx.gpr[4] << 2u);
    ctx.set_gpr(2, ctx.gpr[2] + ctx.gpr[4]);
    ctx.set_gpr(2, ctx.gpr[2] << 2u);
    ctx.set_gpr(2, ctx.gpr[18] + ctx.gpr[2]);
    ctx.set_gpr(3, ctx.gpr[2] + static_cast<std::uint32_t>(52));
    ctx.set_gpr(2, rt.memory().aot_load8(ctx.gpr[2] + static_cast<std::uint32_t>(55)));
    ctx.set_gpr(2, ctx.gpr[2] << 24u);
    ctx.set_gpr(2, ctx.gpr[2] >> 31u);
    { const bool branch_taken = ctx.gpr[2] != 0u;
    // nop
      if (branch_taken) {
          goto L_0895FCB0;
      }
      goto L_0895FCA4;
    }
L_0895FCA4:
    ctx.set_gpr(2, 0u + static_cast<std::uint32_t>(4));
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_0895FCB4;
      }
      goto L_0895FCB0;
    }
L_0895FCB0:
    ctx.set_gpr(2, 0u + static_cast<std::uint32_t>(12));
    goto L_0895FCB4;
L_0895FCB4:
    ctx.set_gpr(2, ctx.gpr[3] + ctx.gpr[2]);
    rt.memory().aot_store32(ctx.gpr[2] + static_cast<std::uint32_t>(0), ctx.gpr[3]);
    ctx.set_gpr(2, rt.memory().aot_load8(ctx.gpr[3] + static_cast<std::uint32_t>(3)));
    ctx.set_gpr(2, ctx.gpr[2] << 24u);
    ctx.set_gpr(2, ctx.gpr[2] >> 31u);
    { const bool branch_taken = ctx.gpr[2] != 0u;
    // nop
      if (branch_taken) {
          goto L_0895FCDC;
      }
      goto L_0895FCD0;
    }
L_0895FCD0:
    ctx.set_gpr(2, 0u + static_cast<std::uint32_t>(4));
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_0895FCE0;
      }
      goto L_0895FCDC;
    }
L_0895FCDC:
    ctx.set_gpr(2, 0u + static_cast<std::uint32_t>(12));
    goto L_0895FCE0;
L_0895FCE0:
    ctx.set_gpr(2, ctx.gpr[3] + ctx.gpr[2]);
    rt.memory().aot_store32(ctx.gpr[2] + static_cast<std::uint32_t>(4), ctx.gpr[3]);
    ctx.set_gpr(4, ctx.gpr[4] + static_cast<std::uint32_t>(1));
    goto L_0895FCEC;
L_0895FCEC:
    ctx.set_gpr(2, static_cast<std::int32_t>(ctx.gpr[4]) < 96 ? 1u : 0u);
    { const bool branch_taken = ctx.gpr[2] != 0u;
    // nop
      if (branch_taken) {
          goto L_0895FC7C;
      }
      goto L_0895FCF8;
    }
L_0895FCF8:
    rt.memory().aot_store32(ctx.gpr[18] + static_cast<std::uint32_t>(1992), 0u);
    rt.memory().aot_store32(ctx.gpr[18] + static_cast<std::uint32_t>(2004), 0u);
    ctx.set_gpr(2, 4u << 16u);
    rt.memory().aot_store32(ctx.gpr[18] + static_cast<std::uint32_t>(1996), ctx.gpr[2]);
    rt.memory().aot_store32(ctx.gpr[18] + static_cast<std::uint32_t>(1988), ctx.gpr[2]);
    ctx.set_gpr(2, rt.memory().aot_load32(ctx.gpr[18] + static_cast<std::uint32_t>(2016)));
    ctx.set_gpr(2, ctx.gpr[2] | 1u);
    rt.memory().aot_store32(ctx.gpr[18] + static_cast<std::uint32_t>(2016), ctx.gpr[2]);
    ctx.set_gpr(3, rt.memory().aot_load32(ctx.gpr[19] + static_cast<std::uint32_t>(216)));
    ctx.set_gpr(1, ctx.gpr[3] < static_cast<std::uint32_t>(76) ? 1u : 0u);
    { const bool branch_taken = ctx.gpr[1] != 0u;
    // nop
      if (branch_taken) {
          goto L_0895FD30;
      }
      goto L_0895FD28;
    }
L_0895FD28:
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_0895FD34;
      }
      goto L_0895FD30;
    }
L_0895FD30:
    ctx.set_gpr(3, 0u + static_cast<std::uint32_t>(72));
    goto L_0895FD34;
L_0895FD34:
    ctx.set_gpr(2, rt.memory().aot_load32(ctx.gpr[18] + static_cast<std::uint32_t>(0)));
    ctx.set_gpr(2, ctx.gpr[2] & 3u);
    ctx.set_gpr(2, ctx.gpr[2] | ctx.gpr[3]);
    rt.memory().aot_store32(ctx.gpr[18] + static_cast<std::uint32_t>(0), ctx.gpr[2]);
    { const bool branch_taken = ctx.gpr[17] == 0u;
    // nop
      if (branch_taken) {
          (void)rt.invoke_chained_direct<&recomp_unit_0087_entry, 87u, 5u, 0x089600E8u>(ctx, &aot_mem); return;
      }
      goto L_0895FD4C;
    }
L_0895FD4C:
    ctx.set_gpr(4, ctx.gpr[19] + 0u);
    ctx.set_gpr(25, rt.memory().aot_load32(ctx.gpr[19] + static_cast<std::uint32_t>(0)));
    ctx.set_gpr(25, rt.memory().aot_load32(ctx.gpr[25] + static_cast<std::uint32_t>(212)));
    jump_target = ctx.gpr[25];
    ctx.set_gpr(31, 0x0895FD60u);
    // nop
    ctx.pc = jump_target;
    if (rt.invoke_chained_call(ctx, &aot_mem) && ctx.pc == 0x0895FD60u) goto L_0895FD60;
    return;
L_0895FD60:
    ctx.set_gpr(16, ctx.gpr[2] + 0u);
    ctx.set_gpr(2, rt.memory().aot_load32(ctx.gpr[19] + static_cast<std::uint32_t>(144)));
    { const bool branch_taken = static_cast<std::int32_t>(ctx.gpr[2]) <= 0;
    // nop
      if (branch_taken) {
          goto L_0895FDA8;
      }
      goto L_0895FD70;
    }
L_0895FD70:
    { const bool branch_taken = ctx.gpr[16] != 0u;
    // nop
      if (branch_taken) {
          goto L_0895FDA8;
      }
      goto L_0895FD78;
    }
L_0895FD78:
    { const bool branch_taken = static_cast<std::int32_t>(ctx.gpr[2]) <= 0;
    // nop
      if (branch_taken) {
          goto L_0895FDA8;
      }
      goto L_0895FD80;
    }
L_0895FD80:
    ctx.set_gpr(4, ctx.gpr[19] + 0u);
    ctx.set_gpr(5, 0u + 0u);
    ctx.set_gpr(25, rt.memory().aot_load32(ctx.gpr[19] + static_cast<std::uint32_t>(0)));
    ctx.set_gpr(25, rt.memory().aot_load32(ctx.gpr[25] + static_cast<std::uint32_t>(412)));
    jump_target = ctx.gpr[25];
    ctx.set_gpr(31, 0x0895FD98u);
    // nop
    ctx.pc = jump_target;
    if (rt.invoke_chained_call(ctx, &aot_mem) && ctx.pc == 0x0895FD98u) goto L_0895FD98;
    return;
L_0895FD98:
    ctx.set_gpr(4, 2228u << 16u);
    ctx.set_gpr(4, ctx.gpr[4] + static_cast<std::uint32_t>(-1032));
    ctx.set_gpr(31, 0x0895FDA8u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0084_entry, 84u, 456u, 0x08955F2Cu>(ctx, &aot_mem) && ctx.pc == 0x0895FDA8u) goto L_0895FDA8;
    return;
L_0895FDA8:
    ctx.set_gpr(3, ctx.gpr[16] & 7u);
    ctx.set_gpr(2, 0u + static_cast<std::uint32_t>(4));
    { const bool branch_taken = ctx.gpr[3] == ctx.gpr[2];
    // nop
      if (branch_taken) {
          goto L_0895FDD4;
      }
      goto L_0895FDB8;
    }
L_0895FDB8:
    ctx.set_gpr(4, ctx.gpr[16] + 0u);
    ctx.set_gpr(3, ctx.gpr[16] + static_cast<std::uint32_t>(7));
    ctx.set_gpr(2, 0u + static_cast<std::uint32_t>(-8));
    ctx.set_gpr(2, ctx.gpr[3] & ctx.gpr[2]);
    ctx.set_gpr(16, ctx.gpr[2] + static_cast<std::uint32_t>(4));
    ctx.set_gpr(2, ctx.gpr[16] - ctx.gpr[4]);
    ctx.set_gpr(17, ctx.gpr[17] - ctx.gpr[2]);
    goto L_0895FDD4;
L_0895FDD4:
    ctx.set_gpr(3, rt.memory().aot_load32(ctx.gpr[19] + static_cast<std::uint32_t>(144)));
    { const bool branch_taken = static_cast<std::int32_t>(ctx.gpr[3]) <= 0;
    // nop
      if (branch_taken) {
          goto L_0895FE24;
      }
      goto L_0895FDE0;
    }
L_0895FDE0:
    ctx.set_gpr(2, rt.memory().aot_load32(ctx.gpr[19] + static_cast<std::uint32_t>(216)));
    ctx.set_gpr(1, ctx.gpr[2] < ctx.gpr[17] ? 1u : 0u);
    { const bool branch_taken = ctx.gpr[1] != 0u;
    // nop
      if (branch_taken) {
          goto L_0895FE24;
      }
      goto L_0895FDF0;
    }
L_0895FDF0:
    { const bool branch_taken = static_cast<std::int32_t>(ctx.gpr[3]) <= 0;
    // nop
      if (branch_taken) {
          goto L_0895FE24;
      }
      goto L_0895FDF8;
    }
L_0895FDF8:
    ctx.set_gpr(4, ctx.gpr[19] + 0u);
    ctx.set_gpr(5, 0u + 0u);
    ctx.set_gpr(25, rt.memory().aot_load32(ctx.gpr[19] + static_cast<std::uint32_t>(0)));
    ctx.set_gpr(25, rt.memory().aot_load32(ctx.gpr[25] + static_cast<std::uint32_t>(412)));
    jump_target = ctx.gpr[25];
    ctx.set_gpr(31, 0x0895FE10u);
    // nop
    ctx.pc = jump_target;
    if (rt.invoke_chained_call(ctx, &aot_mem) && ctx.pc == 0x0895FE10u) goto L_0895FE10;
    return;
L_0895FE10:
    ctx.set_gpr(4, 2228u << 16u);
    ctx.set_gpr(4, ctx.gpr[4] + static_cast<std::uint32_t>(-972));
    ctx.set_gpr(5, rt.memory().aot_load32(ctx.gpr[19] + static_cast<std::uint32_t>(216)));
    ctx.set_gpr(31, 0x0895FE24u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0084_entry, 84u, 456u, 0x08955F2Cu>(ctx, &aot_mem) && ctx.pc == 0x0895FE24u) goto L_0895FE24;
    return;
L_0895FE24:
    rt.memory().aot_store32(ctx.gpr[18] + static_cast<std::uint32_t>(44), ctx.gpr[16]);
    ctx.set_gpr(5, 0u + static_cast<std::uint32_t>(-1));
    ctx.set_gpr(4, rt.memory().aot_load32(ctx.gpr[19] + static_cast<std::uint32_t>(72)));
    ctx.set_gpr(6, rt.memory().aot_load16(ctx.gpr[16] + static_cast<std::uint32_t>(2)));
    ctx.set_gpr(2, ctx.gpr[4] & 255u);
    ctx.set_gpr(3, ctx.gpr[2] << 5u);
    ctx.set_gpr(2, 0u + static_cast<std::uint32_t>(-8161));
    ctx.set_gpr(2, ctx.gpr[6] & ctx.gpr[2]);
    ctx.set_gpr(2, ctx.gpr[2] | ctx.gpr[3]);
    rt.memory().aot_store16(ctx.gpr[16] + static_cast<std::uint32_t>(2), static_cast<std::uint16_t>(ctx.gpr[2]));
    ctx.set_gpr(7, rt.memory().aot_load8(ctx.gpr[16] + static_cast<std::uint32_t>(3)));
    ctx.set_gpr(3, 0u & 1u);
    ctx.set_gpr(6, ctx.gpr[3] << 6u);
    ctx.set_gpr(2, 0u + static_cast<std::uint32_t>(-65));
    ctx.set_gpr(2, ctx.gpr[7] & ctx.gpr[2]);
    ctx.set_gpr(2, ctx.gpr[2] | ctx.gpr[6]);
    rt.memory().aot_store8(ctx.gpr[16] + static_cast<std::uint32_t>(3), static_cast<std::uint8_t>(ctx.gpr[2]));
    ctx.set_gpr(7, rt.memory().aot_load8(ctx.gpr[16] + static_cast<std::uint32_t>(3)));
    ctx.set_gpr(6, ctx.gpr[3] << 5u);
    ctx.set_gpr(2, 0u + static_cast<std::uint32_t>(-33));
    ctx.set_gpr(2, ctx.gpr[7] & ctx.gpr[2]);
    ctx.set_gpr(2, ctx.gpr[2] | ctx.gpr[6]);
    rt.memory().aot_store8(ctx.gpr[16] + static_cast<std::uint32_t>(3), static_cast<std::uint8_t>(ctx.gpr[2]));
    ctx.set_gpr(6, rt.memory().aot_load8(ctx.gpr[16] + static_cast<std::uint32_t>(0)));
    ctx.set_gpr(2, 0u + static_cast<std::uint32_t>(-2));
    ctx.set_gpr(6, ctx.gpr[6] & ctx.gpr[2]);
    ctx.set_gpr(6, ctx.gpr[6] | ctx.gpr[3]);
    rt.memory().aot_store8(ctx.gpr[16] + static_cast<std::uint32_t>(0), static_cast<std::uint8_t>(ctx.gpr[6]));
    { const bool branch_taken = ctx.gpr[17] == 0u;
    // nop
      if (branch_taken) {
          goto L_0895FFCC;
      }
      goto L_0895FE9C;
    }
L_0895FE9C:
    ctx.set_gpr(1, 1u << 16u);
    ctx.set_gpr(1, ctx.gpr[1] | 4u);
    ctx.set_gpr(1, ctx.gpr[17] < ctx.gpr[1] ? 1u : 0u);
    { const bool branch_taken = ctx.gpr[1] == 0u;
    // nop
      if (branch_taken) {
          goto L_0895FEBC;
      }
      goto L_0895FEB0;
    }
L_0895FEB0:
    ctx.set_gpr(2, ctx.gpr[4] < static_cast<std::uint32_t>(256) ? 1u : 0u);
    { const bool branch_taken = ctx.gpr[2] != 0u;
    // nop
      if (branch_taken) {
          goto L_0895FF8C;
      }
      goto L_0895FEBC;
    }
L_0895FEBC:
    ctx.set_gpr(5, ctx.gpr[17] + static_cast<std::uint32_t>(-12));
    ctx.set_gpr(6, rt.memory().aot_load16(ctx.gpr[16] + static_cast<std::uint32_t>(8)));
    ctx.set_gpr(3, (ctx.gpr[5] >> 16u) & 0x00007FFFu);
    ctx.set_gpr(2, 0u + static_cast<std::uint32_t>(-32768));
    ctx.set_gpr(2, ctx.gpr[6] & ctx.gpr[2]);
    ctx.set_gpr(2, ctx.gpr[2] | ctx.gpr[3]);
    rt.memory().aot_store16(ctx.gpr[16] + static_cast<std::uint32_t>(8), static_cast<std::uint16_t>(ctx.gpr[2]));
    ctx.set_gpr(6, rt.memory().aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(8)));
    ctx.set_gpr(2, (ctx.gpr[4] >> 8u) & 0x000001FFu);
    ctx.set_gpr(3, ctx.gpr[2] << 15u);
    ctx.set_gpr(2, 65280u << 16u);
    ctx.set_gpr(2, ctx.gpr[2] | 32767u);
    ctx.set_gpr(2, ctx.gpr[6] & ctx.gpr[2]);
    ctx.set_gpr(2, ctx.gpr[2] | ctx.gpr[3]);
    rt.memory().aot_store32(ctx.gpr[16] + static_cast<std::uint32_t>(8), ctx.gpr[2]);
    ctx.set_gpr(2, rt.memory().aot_load8(ctx.gpr[16] + static_cast<std::uint32_t>(3)));
    ctx.set_gpr(4, 0u + static_cast<std::uint32_t>(128));
    ctx.set_gpr(3, 0u + static_cast<std::uint32_t>(-129));
    ctx.set_gpr(2, ctx.gpr[2] & ctx.gpr[3]);
    ctx.set_gpr(2, ctx.gpr[2] | ctx.gpr[4]);
    rt.memory().aot_store8(ctx.gpr[16] + static_cast<std::uint32_t>(3), static_cast<std::uint8_t>(ctx.gpr[2]));
    ctx.set_gpr(2, rt.memory().aot_load8(ctx.gpr[16] + static_cast<std::uint32_t>(11)));
    ctx.set_gpr(2, ctx.gpr[2] & ctx.gpr[3]);
    ctx.set_gpr(2, ctx.gpr[2] | ctx.gpr[4]);
    rt.memory().aot_store8(ctx.gpr[16] + static_cast<std::uint32_t>(11), static_cast<std::uint8_t>(ctx.gpr[2]));
    ctx.set_gpr(4, rt.memory().aot_load8(ctx.gpr[16] + static_cast<std::uint32_t>(11)));
    ctx.set_gpr(3, 0u & 1u);
    ctx.set_gpr(2, 0u + static_cast<std::uint32_t>(-2));
    ctx.set_gpr(2, ctx.gpr[4] & ctx.gpr[2]);
    ctx.set_gpr(2, ctx.gpr[2] | ctx.gpr[3]);
    rt.memory().aot_store8(ctx.gpr[16] + static_cast<std::uint32_t>(11), static_cast<std::uint8_t>(ctx.gpr[2]));
    ctx.set_gpr(4, rt.memory().aot_load8(ctx.gpr[16] + static_cast<std::uint32_t>(11)));
    ctx.set_gpr(3, ctx.gpr[3] << 1u);
    ctx.set_gpr(2, 0u + static_cast<std::uint32_t>(-3));
    ctx.set_gpr(2, ctx.gpr[4] & ctx.gpr[2]);
    ctx.set_gpr(2, ctx.gpr[2] | ctx.gpr[3]);
    rt.memory().aot_store8(ctx.gpr[16] + static_cast<std::uint32_t>(11), static_cast<std::uint8_t>(ctx.gpr[2]));
    ctx.set_gpr(4, rt.memory().aot_load8(ctx.gpr[16] + static_cast<std::uint32_t>(11)));
    ctx.set_gpr(2, 0u & 31u);
    ctx.set_gpr(3, ctx.gpr[2] << 2u);
    ctx.set_gpr(2, 0u + static_cast<std::uint32_t>(-125));
    ctx.set_gpr(2, ctx.gpr[4] & ctx.gpr[2]);
    ctx.set_gpr(2, ctx.gpr[2] | ctx.gpr[3]);
    rt.memory().aot_store8(ctx.gpr[16] + static_cast<std::uint32_t>(11), static_cast<std::uint8_t>(ctx.gpr[2]));
    ctx.set_gpr(4, rt.memory().aot_load8(ctx.gpr[16] + static_cast<std::uint32_t>(0)));
    ctx.set_gpr(3, 0u + static_cast<std::uint32_t>(4));
    ctx.set_gpr(2, 0u + static_cast<std::uint32_t>(-31));
    ctx.set_gpr(2, ctx.gpr[4] & ctx.gpr[2]);
    ctx.set_gpr(2, ctx.gpr[2] | ctx.gpr[3]);
    rt.memory().aot_store8(ctx.gpr[16] + static_cast<std::uint32_t>(0), static_cast<std::uint8_t>(ctx.gpr[2]));
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          (void)rt.invoke_chained_direct<&recomp_unit_0087_entry, 87u, 4u, 0x089600A4u>(ctx, &aot_mem); return;
      }
      goto L_0895FF8C;
    }
L_0895FF8C:
    ctx.set_gpr(5, ctx.gpr[17] + static_cast<std::uint32_t>(-4));
    ctx.set_gpr(4, rt.memory().aot_load8(ctx.gpr[16] + static_cast<std::uint32_t>(3)));
    ctx.set_gpr(3, ctx.gpr[3] << 7u);
    ctx.set_gpr(2, 0u + static_cast<std::uint32_t>(-129));
    ctx.set_gpr(2, ctx.gpr[4] & ctx.gpr[2]);
    ctx.set_gpr(2, ctx.gpr[2] | ctx.gpr[3]);
    rt.memory().aot_store8(ctx.gpr[16] + static_cast<std::uint32_t>(3), static_cast<std::uint8_t>(ctx.gpr[2]));
    ctx.set_gpr(4, rt.memory().aot_load8(ctx.gpr[16] + static_cast<std::uint32_t>(0)));
    ctx.set_gpr(2, 0u & 15u);
    ctx.set_gpr(3, ctx.gpr[2] << 1u);
    ctx.set_gpr(2, 0u + static_cast<std::uint32_t>(-31));
    ctx.set_gpr(2, ctx.gpr[4] & ctx.gpr[2]);
    ctx.set_gpr(2, ctx.gpr[2] | ctx.gpr[3]);
    rt.memory().aot_store8(ctx.gpr[16] + static_cast<std::uint32_t>(0), static_cast<std::uint8_t>(ctx.gpr[2]));
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          (void)rt.invoke_chained_direct<&recomp_unit_0087_entry, 87u, 4u, 0x089600A4u>(ctx, &aot_mem); return;
      }
      goto L_0895FFCC;
    }
L_0895FFCC:
    ctx.set_gpr(6, 0u | 65535u);
    ctx.set_gpr(8, rt.memory().aot_load16(ctx.gpr[16] + static_cast<std::uint32_t>(8)));
    ctx.set_gpr(7, ctx.gpr[6] & 32767u);
    ctx.set_gpr(6, 0u + static_cast<std::uint32_t>(-32768));
    ctx.set_gpr(6, ctx.gpr[8] & ctx.gpr[6]);
    ctx.set_gpr(6, ctx.gpr[6] | ctx.gpr[7]);
    rt.memory().aot_store16(ctx.gpr[16] + static_cast<std::uint32_t>(8), static_cast<std::uint16_t>(ctx.gpr[6]));
    ctx.set_gpr(7, rt.memory().aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(8)));
    ctx.set_gpr(4, (ctx.gpr[4] >> 8u) & 0x000001FFu);
    ctx.set_gpr(6, ctx.gpr[4] << 15u);
    ctx.set_gpr(4, 65280u << 16u);
    ctx.set_gpr(4, ctx.gpr[4] | 32767u);
    ctx.set_gpr(4, ctx.gpr[7] & ctx.gpr[4]);
    ctx.pc = 0x08960000u; return;
}

void recomp_unit_0086(Runtime &rt, AllegrexContext &ctx) {
    auto aot_mem = rt.memory().aot_fast_view();
    recomp_unit_0086_entry(rt, ctx, 0u, aot_mem);
}

void register_generated_unit_86(Runtime &runtime) {
    runtime.register_generated_unit(86u, 0x0895C000u, 16384u, &recomp_unit_0086, &recomp_unit_0086_entry);
    runtime.register_function(0x0895C000u, &recomp_unit_0086, "recomp_unit_0086");
    runtime.register_function(0x0895C008u, &recomp_unit_0086, "recomp_unit_0086");
    runtime.register_function(0x0895C010u, &recomp_unit_0086, "recomp_unit_0086");
    runtime.register_function(0x0895C024u, &recomp_unit_0086, "recomp_unit_0086");
    runtime.register_function(0x0895C030u, &recomp_unit_0086, "recomp_unit_0086");
    runtime.register_function(0x0895C038u, &recomp_unit_0086, "recomp_unit_0086");
    runtime.register_function(0x0895C044u, &recomp_unit_0086, "recomp_unit_0086");
    runtime.register_function(0x0895C054u, &recomp_unit_0086, "recomp_unit_0086");
    runtime.register_function(0x0895C060u, &recomp_unit_0086, "recomp_unit_0086");
    runtime.register_function(0x0895C068u, &recomp_unit_0086, "recomp_unit_0086");
    runtime.register_function(0x0895C074u, &recomp_unit_0086, "recomp_unit_0086");
    runtime.register_function(0x0895C08Cu, &recomp_unit_0086, "recomp_unit_0086");
    runtime.register_function(0x0895C0A0u, &recomp_unit_0086, "recomp_unit_0086");
    runtime.register_function(0x0895C0A8u, &recomp_unit_0086, "recomp_unit_0086");
    runtime.register_function(0x0895C0B0u, &recomp_unit_0086, "recomp_unit_0086");
    runtime.register_function(0x0895C0C4u, &recomp_unit_0086, "recomp_unit_0086");
    runtime.register_function(0x0895C0DCu, &recomp_unit_0086, "recomp_unit_0086");
    runtime.register_function(0x0895C0E0u, &recomp_unit_0086, "recomp_unit_0086");
    runtime.register_function(0x0895C0ECu, &recomp_unit_0086, "recomp_unit_0086");
    runtime.register_function(0x0895C0F8u, &recomp_unit_0086, "recomp_unit_0086");
    runtime.register_function(0x0895C0FCu, &recomp_unit_0086, "recomp_unit_0086");
    runtime.register_function(0x0895C108u, &recomp_unit_0086, "recomp_unit_0086");
    runtime.register_function(0x0895C110u, &recomp_unit_0086, "recomp_unit_0086");
    runtime.register_function(0x0895C130u, &recomp_unit_0086, "recomp_unit_0086");
    runtime.register_function(0x0895C154u, &recomp_unit_0086, "recomp_unit_0086");
    runtime.register_function(0x0895C164u, &recomp_unit_0086, "recomp_unit_0086");
    runtime.register_function(0x0895C174u, &recomp_unit_0086, "recomp_unit_0086");
    runtime.register_function(0x0895C184u, &recomp_unit_0086, "recomp_unit_0086");
    runtime.register_function(0x0895C1B0u, &recomp_unit_0086, "recomp_unit_0086");
    runtime.register_function(0x0895C1C0u, &recomp_unit_0086, "recomp_unit_0086");
    runtime.register_function(0x0895C1C8u, &recomp_unit_0086, "recomp_unit_0086");
    runtime.register_function(0x0895C1D4u, &recomp_unit_0086, "recomp_unit_0086");
    runtime.register_function(0x0895C1E4u, &recomp_unit_0086, "recomp_unit_0086");
    runtime.register_function(0x0895C1E8u, &recomp_unit_0086, "recomp_unit_0086");
    runtime.register_function(0x0895C1F8u, &recomp_unit_0086, "recomp_unit_0086");
    runtime.register_function(0x0895C210u, &recomp_unit_0086, "recomp_unit_0086");
    runtime.register_function(0x0895C214u, &recomp_unit_0086, "recomp_unit_0086");
    runtime.register_function(0x0895C21Cu, &recomp_unit_0086, "recomp_unit_0086");
    runtime.register_function(0x0895C234u, &recomp_unit_0086, "recomp_unit_0086");
    runtime.register_function(0x0895C240u, &recomp_unit_0086, "recomp_unit_0086");
    runtime.register_function(0x0895C264u, &recomp_unit_0086, "recomp_unit_0086");
    runtime.register_function(0x0895C294u, &recomp_unit_0086, "recomp_unit_0086");
    runtime.register_function(0x0895C2A4u, &recomp_unit_0086, "recomp_unit_0086");
    runtime.register_function(0x0895C2C0u, &recomp_unit_0086, "recomp_unit_0086");
    runtime.register_function(0x0895C2CCu, &recomp_unit_0086, "recomp_unit_0086");
    runtime.register_function(0x0895C2D4u, &recomp_unit_0086, "recomp_unit_0086");
    runtime.register_function(0x0895C2E0u, &recomp_unit_0086, "recomp_unit_0086");
    runtime.register_function(0x0895C2E8u, &recomp_unit_0086, "recomp_unit_0086");
    runtime.register_function(0x0895C2FCu, &recomp_unit_0086, "recomp_unit_0086");
    runtime.register_function(0x0895C310u, &recomp_unit_0086, "recomp_unit_0086");
    runtime.register_function(0x0895C31Cu, &recomp_unit_0086, "recomp_unit_0086");
    runtime.register_function(0x0895C324u, &recomp_unit_0086, "recomp_unit_0086");
    runtime.register_function(0x0895C32Cu, &recomp_unit_0086, "recomp_unit_0086");
    runtime.register_function(0x0895C33Cu, &recomp_unit_0086, "recomp_unit_0086");
    runtime.register_function(0x0895C344u, &recomp_unit_0086, "recomp_unit_0086");
    runtime.register_function(0x0895C350u, &recomp_unit_0086, "recomp_unit_0086");
    runtime.register_function(0x0895C354u, &recomp_unit_0086, "recomp_unit_0086");
    runtime.register_function(0x0895C364u, &recomp_unit_0086, "recomp_unit_0086");
    runtime.register_function(0x0895C38Cu, &recomp_unit_0086, "recomp_unit_0086");
    runtime.register_function(0x0895C394u, &recomp_unit_0086, "recomp_unit_0086");
    runtime.register_function(0x0895C3A0u, &recomp_unit_0086, "recomp_unit_0086");
    runtime.register_function(0x0895C3A8u, &recomp_unit_0086, "recomp_unit_0086");
    runtime.register_function(0x0895C3D8u, &recomp_unit_0086, "recomp_unit_0086");
    runtime.register_function(0x0895C3ECu, &recomp_unit_0086, "recomp_unit_0086");
    runtime.register_function(0x0895C3FCu, &recomp_unit_0086, "recomp_unit_0086");
    runtime.register_function(0x0895C40Cu, &recomp_unit_0086, "recomp_unit_0086");
    runtime.register_function(0x0895C414u, &recomp_unit_0086, "recomp_unit_0086");
    runtime.register_function(0x0895C420u, &recomp_unit_0086, "recomp_unit_0086");
    runtime.register_function(0x0895C430u, &recomp_unit_0086, "recomp_unit_0086");
    runtime.register_function(0x0895C454u, &recomp_unit_0086, "recomp_unit_0086");
    runtime.register_function(0x0895C468u, &recomp_unit_0086, "recomp_unit_0086");
    runtime.register_function(0x0895C480u, &recomp_unit_0086, "recomp_unit_0086");
    runtime.register_function(0x0895C498u, &recomp_unit_0086, "recomp_unit_0086");
    runtime.register_function(0x0895C49Cu, &recomp_unit_0086, "recomp_unit_0086");
    runtime.register_function(0x0895C4A4u, &recomp_unit_0086, "recomp_unit_0086");
    runtime.register_function(0x0895C4B0u, &recomp_unit_0086, "recomp_unit_0086");
    runtime.register_function(0x0895C4B4u, &recomp_unit_0086, "recomp_unit_0086");
    runtime.register_function(0x0895C4C0u, &recomp_unit_0086, "recomp_unit_0086");
    runtime.register_function(0x0895C4C8u, &recomp_unit_0086, "recomp_unit_0086");
    runtime.register_function(0x0895C500u, &recomp_unit_0086, "recomp_unit_0086");
    runtime.register_function(0x0895C50Cu, &recomp_unit_0086, "recomp_unit_0086");
    runtime.register_function(0x0895C528u, &recomp_unit_0086, "recomp_unit_0086");
    runtime.register_function(0x0895C534u, &recomp_unit_0086, "recomp_unit_0086");
    runtime.register_function(0x0895C53Cu, &recomp_unit_0086, "recomp_unit_0086");
    runtime.register_function(0x0895C548u, &recomp_unit_0086, "recomp_unit_0086");
    runtime.register_function(0x0895C550u, &recomp_unit_0086, "recomp_unit_0086");
    runtime.register_function(0x0895C564u, &recomp_unit_0086, "recomp_unit_0086");
    runtime.register_function(0x0895C578u, &recomp_unit_0086, "recomp_unit_0086");
    runtime.register_function(0x0895C584u, &recomp_unit_0086, "recomp_unit_0086");
    runtime.register_function(0x0895C58Cu, &recomp_unit_0086, "recomp_unit_0086");
    runtime.register_function(0x0895C594u, &recomp_unit_0086, "recomp_unit_0086");
    runtime.register_function(0x0895C5A4u, &recomp_unit_0086, "recomp_unit_0086");
    runtime.register_function(0x0895C5ACu, &recomp_unit_0086, "recomp_unit_0086");
    runtime.register_function(0x0895C5B8u, &recomp_unit_0086, "recomp_unit_0086");
    runtime.register_function(0x0895C5C4u, &recomp_unit_0086, "recomp_unit_0086");
    runtime.register_function(0x0895C5CCu, &recomp_unit_0086, "recomp_unit_0086");
    runtime.register_function(0x0895C5DCu, &recomp_unit_0086, "recomp_unit_0086");
    runtime.register_function(0x0895C5E8u, &recomp_unit_0086, "recomp_unit_0086");
    runtime.register_function(0x0895C5F4u, &recomp_unit_0086, "recomp_unit_0086");
    runtime.register_function(0x0895C614u, &recomp_unit_0086, "recomp_unit_0086");
    runtime.register_function(0x0895C63Cu, &recomp_unit_0086, "recomp_unit_0086");
    runtime.register_function(0x0895C658u, &recomp_unit_0086, "recomp_unit_0086");
    runtime.register_function(0x0895C660u, &recomp_unit_0086, "recomp_unit_0086");
    runtime.register_function(0x0895C680u, &recomp_unit_0086, "recomp_unit_0086");
    runtime.register_function(0x0895C698u, &recomp_unit_0086, "recomp_unit_0086");
    runtime.register_function(0x0895C69Cu, &recomp_unit_0086, "recomp_unit_0086");
    runtime.register_function(0x0895C6A4u, &recomp_unit_0086, "recomp_unit_0086");
    runtime.register_function(0x0895C6BCu, &recomp_unit_0086, "recomp_unit_0086");
    runtime.register_function(0x0895C6C8u, &recomp_unit_0086, "recomp_unit_0086");
    runtime.register_function(0x0895C6D8u, &recomp_unit_0086, "recomp_unit_0086");
    runtime.register_function(0x0895C6F8u, &recomp_unit_0086, "recomp_unit_0086");
    runtime.register_function(0x0895C6FCu, &recomp_unit_0086, "recomp_unit_0086");
    runtime.register_function(0x0895C714u, &recomp_unit_0086, "recomp_unit_0086");
    runtime.register_function(0x0895C73Cu, &recomp_unit_0086, "recomp_unit_0086");
    runtime.register_function(0x0895C74Cu, &recomp_unit_0086, "recomp_unit_0086");
    runtime.register_function(0x0895C760u, &recomp_unit_0086, "recomp_unit_0086");
    runtime.register_function(0x0895C77Cu, &recomp_unit_0086, "recomp_unit_0086");
    runtime.register_function(0x0895C788u, &recomp_unit_0086, "recomp_unit_0086");
    runtime.register_function(0x0895C790u, &recomp_unit_0086, "recomp_unit_0086");
    runtime.register_function(0x0895C798u, &recomp_unit_0086, "recomp_unit_0086");
    runtime.register_function(0x0895C7A4u, &recomp_unit_0086, "recomp_unit_0086");
    runtime.register_function(0x0895C7B0u, &recomp_unit_0086, "recomp_unit_0086");
    runtime.register_function(0x0895C7C0u, &recomp_unit_0086, "recomp_unit_0086");
    runtime.register_function(0x0895C7CCu, &recomp_unit_0086, "recomp_unit_0086");
    runtime.register_function(0x0895C7D4u, &recomp_unit_0086, "recomp_unit_0086");
    runtime.register_function(0x0895C7DCu, &recomp_unit_0086, "recomp_unit_0086");
    runtime.register_function(0x0895C7ECu, &recomp_unit_0086, "recomp_unit_0086");
    runtime.register_function(0x0895C7F4u, &recomp_unit_0086, "recomp_unit_0086");
    runtime.register_function(0x0895C814u, &recomp_unit_0086, "recomp_unit_0086");
    runtime.register_function(0x0895C820u, &recomp_unit_0086, "recomp_unit_0086");
    runtime.register_function(0x0895C82Cu, &recomp_unit_0086, "recomp_unit_0086");
    runtime.register_function(0x0895C854u, &recomp_unit_0086, "recomp_unit_0086");
    runtime.register_function(0x0895C860u, &recomp_unit_0086, "recomp_unit_0086");
    runtime.register_function(0x0895C878u, &recomp_unit_0086, "recomp_unit_0086");
    runtime.register_function(0x0895C88Cu, &recomp_unit_0086, "recomp_unit_0086");
    runtime.register_function(0x0895C8ACu, &recomp_unit_0086, "recomp_unit_0086");
    runtime.register_function(0x0895C8B8u, &recomp_unit_0086, "recomp_unit_0086");
    runtime.register_function(0x0895C8C8u, &recomp_unit_0086, "recomp_unit_0086");
    runtime.register_function(0x0895C8D8u, &recomp_unit_0086, "recomp_unit_0086");
    runtime.register_function(0x0895C8E8u, &recomp_unit_0086, "recomp_unit_0086");
    runtime.register_function(0x0895C8F4u, &recomp_unit_0086, "recomp_unit_0086");
    runtime.register_function(0x0895C900u, &recomp_unit_0086, "recomp_unit_0086");
    runtime.register_function(0x0895C90Cu, &recomp_unit_0086, "recomp_unit_0086");
    runtime.register_function(0x0895C91Cu, &recomp_unit_0086, "recomp_unit_0086");
    runtime.register_function(0x0895C92Cu, &recomp_unit_0086, "recomp_unit_0086");
    runtime.register_function(0x0895C93Cu, &recomp_unit_0086, "recomp_unit_0086");
    runtime.register_function(0x0895C950u, &recomp_unit_0086, "recomp_unit_0086");
    runtime.register_function(0x0895C964u, &recomp_unit_0086, "recomp_unit_0086");
    runtime.register_function(0x0895C974u, &recomp_unit_0086, "recomp_unit_0086");
    runtime.register_function(0x0895C98Cu, &recomp_unit_0086, "recomp_unit_0086");
    runtime.register_function(0x0895C994u, &recomp_unit_0086, "recomp_unit_0086");
    runtime.register_function(0x0895C9A0u, &recomp_unit_0086, "recomp_unit_0086");
    runtime.register_function(0x0895C9ACu, &recomp_unit_0086, "recomp_unit_0086");
    runtime.register_function(0x0895C9B0u, &recomp_unit_0086, "recomp_unit_0086");
    runtime.register_function(0x0895C9B8u, &recomp_unit_0086, "recomp_unit_0086");
    runtime.register_function(0x0895C9C4u, &recomp_unit_0086, "recomp_unit_0086");
    runtime.register_function(0x0895C9CCu, &recomp_unit_0086, "recomp_unit_0086");
    runtime.register_function(0x0895C9F4u, &recomp_unit_0086, "recomp_unit_0086");
    runtime.register_function(0x0895CA00u, &recomp_unit_0086, "recomp_unit_0086");
    runtime.register_function(0x0895CA0Cu, &recomp_unit_0086, "recomp_unit_0086");
    runtime.register_function(0x0895CA1Cu, &recomp_unit_0086, "recomp_unit_0086");
    runtime.register_function(0x0895CA34u, &recomp_unit_0086, "recomp_unit_0086");
    runtime.register_function(0x0895CA40u, &recomp_unit_0086, "recomp_unit_0086");
    runtime.register_function(0x0895CA4Cu, &recomp_unit_0086, "recomp_unit_0086");
    runtime.register_function(0x0895CA58u, &recomp_unit_0086, "recomp_unit_0086");
    runtime.register_function(0x0895CA64u, &recomp_unit_0086, "recomp_unit_0086");
    runtime.register_function(0x0895CA70u, &recomp_unit_0086, "recomp_unit_0086");
    runtime.register_function(0x0895CA80u, &recomp_unit_0086, "recomp_unit_0086");
    runtime.register_function(0x0895CA8Cu, &recomp_unit_0086, "recomp_unit_0086");
    runtime.register_function(0x0895CA98u, &recomp_unit_0086, "recomp_unit_0086");
    runtime.register_function(0x0895CAA4u, &recomp_unit_0086, "recomp_unit_0086");
    runtime.register_function(0x0895CAA8u, &recomp_unit_0086, "recomp_unit_0086");
    runtime.register_function(0x0895CAB4u, &recomp_unit_0086, "recomp_unit_0086");
    runtime.register_function(0x0895CAB8u, &recomp_unit_0086, "recomp_unit_0086");
    runtime.register_function(0x0895CACCu, &recomp_unit_0086, "recomp_unit_0086");
    runtime.register_function(0x0895CAD4u, &recomp_unit_0086, "recomp_unit_0086");
    runtime.register_function(0x0895CAE8u, &recomp_unit_0086, "recomp_unit_0086");
    runtime.register_function(0x0895CAF4u, &recomp_unit_0086, "recomp_unit_0086");
    runtime.register_function(0x0895CB00u, &recomp_unit_0086, "recomp_unit_0086");
    runtime.register_function(0x0895CB0Cu, &recomp_unit_0086, "recomp_unit_0086");
    runtime.register_function(0x0895CB18u, &recomp_unit_0086, "recomp_unit_0086");
    runtime.register_function(0x0895CB1Cu, &recomp_unit_0086, "recomp_unit_0086");
    runtime.register_function(0x0895CB24u, &recomp_unit_0086, "recomp_unit_0086");
    runtime.register_function(0x0895CB50u, &recomp_unit_0086, "recomp_unit_0086");
    runtime.register_function(0x0895CB70u, &recomp_unit_0086, "recomp_unit_0086");
    runtime.register_function(0x0895CB84u, &recomp_unit_0086, "recomp_unit_0086");
    runtime.register_function(0x0895CB90u, &recomp_unit_0086, "recomp_unit_0086");
    runtime.register_function(0x0895CBA8u, &recomp_unit_0086, "recomp_unit_0086");
    runtime.register_function(0x0895CBB4u, &recomp_unit_0086, "recomp_unit_0086");
    runtime.register_function(0x0895CBC0u, &recomp_unit_0086, "recomp_unit_0086");
    runtime.register_function(0x0895CBE4u, &recomp_unit_0086, "recomp_unit_0086");
    runtime.register_function(0x0895CC08u, &recomp_unit_0086, "recomp_unit_0086");
    runtime.register_function(0x0895CC28u, &recomp_unit_0086, "recomp_unit_0086");
    runtime.register_function(0x0895CC34u, &recomp_unit_0086, "recomp_unit_0086");
    runtime.register_function(0x0895CC3Cu, &recomp_unit_0086, "recomp_unit_0086");
    runtime.register_function(0x0895CC4Cu, &recomp_unit_0086, "recomp_unit_0086");
    runtime.register_function(0x0895CC64u, &recomp_unit_0086, "recomp_unit_0086");
    runtime.register_function(0x0895CC98u, &recomp_unit_0086, "recomp_unit_0086");
    runtime.register_function(0x0895CCA4u, &recomp_unit_0086, "recomp_unit_0086");
    runtime.register_function(0x0895CCB4u, &recomp_unit_0086, "recomp_unit_0086");
    runtime.register_function(0x0895CCC4u, &recomp_unit_0086, "recomp_unit_0086");
    runtime.register_function(0x0895CCE4u, &recomp_unit_0086, "recomp_unit_0086");
    runtime.register_function(0x0895CCECu, &recomp_unit_0086, "recomp_unit_0086");
    runtime.register_function(0x0895CD04u, &recomp_unit_0086, "recomp_unit_0086");
    runtime.register_function(0x0895CD0Cu, &recomp_unit_0086, "recomp_unit_0086");
    runtime.register_function(0x0895CD18u, &recomp_unit_0086, "recomp_unit_0086");
    runtime.register_function(0x0895CD28u, &recomp_unit_0086, "recomp_unit_0086");
    runtime.register_function(0x0895CD2Cu, &recomp_unit_0086, "recomp_unit_0086");
    runtime.register_function(0x0895CD3Cu, &recomp_unit_0086, "recomp_unit_0086");
    runtime.register_function(0x0895CD48u, &recomp_unit_0086, "recomp_unit_0086");
    runtime.register_function(0x0895CD60u, &recomp_unit_0086, "recomp_unit_0086");
    runtime.register_function(0x0895CD70u, &recomp_unit_0086, "recomp_unit_0086");
    runtime.register_function(0x0895CD78u, &recomp_unit_0086, "recomp_unit_0086");
    runtime.register_function(0x0895CD8Cu, &recomp_unit_0086, "recomp_unit_0086");
    runtime.register_function(0x0895CD98u, &recomp_unit_0086, "recomp_unit_0086");
    runtime.register_function(0x0895CDA0u, &recomp_unit_0086, "recomp_unit_0086");
    runtime.register_function(0x0895CDACu, &recomp_unit_0086, "recomp_unit_0086");
    runtime.register_function(0x0895CDB0u, &recomp_unit_0086, "recomp_unit_0086");
    runtime.register_function(0x0895CDD8u, &recomp_unit_0086, "recomp_unit_0086");
    runtime.register_function(0x0895CDF0u, &recomp_unit_0086, "recomp_unit_0086");
    runtime.register_function(0x0895CDF8u, &recomp_unit_0086, "recomp_unit_0086");
    runtime.register_function(0x0895CE04u, &recomp_unit_0086, "recomp_unit_0086");
    runtime.register_function(0x0895CE14u, &recomp_unit_0086, "recomp_unit_0086");
    runtime.register_function(0x0895CE20u, &recomp_unit_0086, "recomp_unit_0086");
    runtime.register_function(0x0895CE2Cu, &recomp_unit_0086, "recomp_unit_0086");
    runtime.register_function(0x0895CE30u, &recomp_unit_0086, "recomp_unit_0086");
    runtime.register_function(0x0895CE3Cu, &recomp_unit_0086, "recomp_unit_0086");
    runtime.register_function(0x0895CE40u, &recomp_unit_0086, "recomp_unit_0086");
    runtime.register_function(0x0895CE48u, &recomp_unit_0086, "recomp_unit_0086");
    runtime.register_function(0x0895CE58u, &recomp_unit_0086, "recomp_unit_0086");
    runtime.register_function(0x0895CE64u, &recomp_unit_0086, "recomp_unit_0086");
    runtime.register_function(0x0895CE68u, &recomp_unit_0086, "recomp_unit_0086");
    runtime.register_function(0x0895CE70u, &recomp_unit_0086, "recomp_unit_0086");
    runtime.register_function(0x0895CE78u, &recomp_unit_0086, "recomp_unit_0086");
    runtime.register_function(0x0895CE80u, &recomp_unit_0086, "recomp_unit_0086");
    runtime.register_function(0x0895CE9Cu, &recomp_unit_0086, "recomp_unit_0086");
    runtime.register_function(0x0895CEA8u, &recomp_unit_0086, "recomp_unit_0086");
    runtime.register_function(0x0895CEB8u, &recomp_unit_0086, "recomp_unit_0086");
    runtime.register_function(0x0895CEBCu, &recomp_unit_0086, "recomp_unit_0086");
    runtime.register_function(0x0895CEC4u, &recomp_unit_0086, "recomp_unit_0086");
    runtime.register_function(0x0895CF00u, &recomp_unit_0086, "recomp_unit_0086");
    runtime.register_function(0x0895CF08u, &recomp_unit_0086, "recomp_unit_0086");
    runtime.register_function(0x0895CF10u, &recomp_unit_0086, "recomp_unit_0086");
    runtime.register_function(0x0895CF24u, &recomp_unit_0086, "recomp_unit_0086");
    runtime.register_function(0x0895CF44u, &recomp_unit_0086, "recomp_unit_0086");
    runtime.register_function(0x0895CF50u, &recomp_unit_0086, "recomp_unit_0086");
    runtime.register_function(0x0895CF58u, &recomp_unit_0086, "recomp_unit_0086");
    runtime.register_function(0x0895CF64u, &recomp_unit_0086, "recomp_unit_0086");
    runtime.register_function(0x0895CF70u, &recomp_unit_0086, "recomp_unit_0086");
    runtime.register_function(0x0895CF80u, &recomp_unit_0086, "recomp_unit_0086");
    runtime.register_function(0x0895CF84u, &recomp_unit_0086, "recomp_unit_0086");
    runtime.register_function(0x0895CF94u, &recomp_unit_0086, "recomp_unit_0086");
    runtime.register_function(0x0895CFACu, &recomp_unit_0086, "recomp_unit_0086");
    runtime.register_function(0x0895CFB8u, &recomp_unit_0086, "recomp_unit_0086");
    runtime.register_function(0x0895CFBCu, &recomp_unit_0086, "recomp_unit_0086");
    runtime.register_function(0x0895CFE0u, &recomp_unit_0086, "recomp_unit_0086");
    runtime.register_function(0x0895D008u, &recomp_unit_0086, "recomp_unit_0086");
    runtime.register_function(0x0895D010u, &recomp_unit_0086, "recomp_unit_0086");
    runtime.register_function(0x0895D01Cu, &recomp_unit_0086, "recomp_unit_0086");
    runtime.register_function(0x0895D028u, &recomp_unit_0086, "recomp_unit_0086");
    runtime.register_function(0x0895D034u, &recomp_unit_0086, "recomp_unit_0086");
    runtime.register_function(0x0895D044u, &recomp_unit_0086, "recomp_unit_0086");
    runtime.register_function(0x0895D050u, &recomp_unit_0086, "recomp_unit_0086");
    runtime.register_function(0x0895D060u, &recomp_unit_0086, "recomp_unit_0086");
    runtime.register_function(0x0895D06Cu, &recomp_unit_0086, "recomp_unit_0086");
    runtime.register_function(0x0895D07Cu, &recomp_unit_0086, "recomp_unit_0086");
    runtime.register_function(0x0895D090u, &recomp_unit_0086, "recomp_unit_0086");
    runtime.register_function(0x0895D0A0u, &recomp_unit_0086, "recomp_unit_0086");
    runtime.register_function(0x0895D0B8u, &recomp_unit_0086, "recomp_unit_0086");
    runtime.register_function(0x0895D0D0u, &recomp_unit_0086, "recomp_unit_0086");
    runtime.register_function(0x0895D0DCu, &recomp_unit_0086, "recomp_unit_0086");
    runtime.register_function(0x0895D0F8u, &recomp_unit_0086, "recomp_unit_0086");
    runtime.register_function(0x0895D114u, &recomp_unit_0086, "recomp_unit_0086");
    runtime.register_function(0x0895D11Cu, &recomp_unit_0086, "recomp_unit_0086");
    runtime.register_function(0x0895D128u, &recomp_unit_0086, "recomp_unit_0086");
    runtime.register_function(0x0895D130u, &recomp_unit_0086, "recomp_unit_0086");
    runtime.register_function(0x0895D13Cu, &recomp_unit_0086, "recomp_unit_0086");
    runtime.register_function(0x0895D144u, &recomp_unit_0086, "recomp_unit_0086");
    runtime.register_function(0x0895D150u, &recomp_unit_0086, "recomp_unit_0086");
    runtime.register_function(0x0895D160u, &recomp_unit_0086, "recomp_unit_0086");
    runtime.register_function(0x0895D180u, &recomp_unit_0086, "recomp_unit_0086");
    runtime.register_function(0x0895D18Cu, &recomp_unit_0086, "recomp_unit_0086");
    runtime.register_function(0x0895D1A0u, &recomp_unit_0086, "recomp_unit_0086");
    runtime.register_function(0x0895D1B0u, &recomp_unit_0086, "recomp_unit_0086");
    runtime.register_function(0x0895D1D8u, &recomp_unit_0086, "recomp_unit_0086");
    runtime.register_function(0x0895D1E4u, &recomp_unit_0086, "recomp_unit_0086");
    runtime.register_function(0x0895D1F4u, &recomp_unit_0086, "recomp_unit_0086");
    runtime.register_function(0x0895D200u, &recomp_unit_0086, "recomp_unit_0086");
    runtime.register_function(0x0895D208u, &recomp_unit_0086, "recomp_unit_0086");
    runtime.register_function(0x0895D214u, &recomp_unit_0086, "recomp_unit_0086");
    runtime.register_function(0x0895D21Cu, &recomp_unit_0086, "recomp_unit_0086");
    runtime.register_function(0x0895D230u, &recomp_unit_0086, "recomp_unit_0086");
    runtime.register_function(0x0895D234u, &recomp_unit_0086, "recomp_unit_0086");
    runtime.register_function(0x0895D250u, &recomp_unit_0086, "recomp_unit_0086");
    runtime.register_function(0x0895D25Cu, &recomp_unit_0086, "recomp_unit_0086");
    runtime.register_function(0x0895D270u, &recomp_unit_0086, "recomp_unit_0086");
    runtime.register_function(0x0895D280u, &recomp_unit_0086, "recomp_unit_0086");
    runtime.register_function(0x0895D288u, &recomp_unit_0086, "recomp_unit_0086");
    runtime.register_function(0x0895D290u, &recomp_unit_0086, "recomp_unit_0086");
    runtime.register_function(0x0895D2A0u, &recomp_unit_0086, "recomp_unit_0086");
    runtime.register_function(0x0895D2B4u, &recomp_unit_0086, "recomp_unit_0086");
    runtime.register_function(0x0895D2C4u, &recomp_unit_0086, "recomp_unit_0086");
    runtime.register_function(0x0895D2CCu, &recomp_unit_0086, "recomp_unit_0086");
    runtime.register_function(0x0895D2D4u, &recomp_unit_0086, "recomp_unit_0086");
    runtime.register_function(0x0895D2E4u, &recomp_unit_0086, "recomp_unit_0086");
    runtime.register_function(0x0895D308u, &recomp_unit_0086, "recomp_unit_0086");
    runtime.register_function(0x0895D31Cu, &recomp_unit_0086, "recomp_unit_0086");
    runtime.register_function(0x0895D330u, &recomp_unit_0086, "recomp_unit_0086");
    runtime.register_function(0x0895D338u, &recomp_unit_0086, "recomp_unit_0086");
    runtime.register_function(0x0895D340u, &recomp_unit_0086, "recomp_unit_0086");
    runtime.register_function(0x0895D358u, &recomp_unit_0086, "recomp_unit_0086");
    runtime.register_function(0x0895D370u, &recomp_unit_0086, "recomp_unit_0086");
    runtime.register_function(0x0895D380u, &recomp_unit_0086, "recomp_unit_0086");
    runtime.register_function(0x0895D390u, &recomp_unit_0086, "recomp_unit_0086");
    runtime.register_function(0x0895D39Cu, &recomp_unit_0086, "recomp_unit_0086");
    runtime.register_function(0x0895D3A8u, &recomp_unit_0086, "recomp_unit_0086");
    runtime.register_function(0x0895D3BCu, &recomp_unit_0086, "recomp_unit_0086");
    runtime.register_function(0x0895D3F4u, &recomp_unit_0086, "recomp_unit_0086");
    runtime.register_function(0x0895D408u, &recomp_unit_0086, "recomp_unit_0086");
    runtime.register_function(0x0895D410u, &recomp_unit_0086, "recomp_unit_0086");
    runtime.register_function(0x0895D418u, &recomp_unit_0086, "recomp_unit_0086");
    runtime.register_function(0x0895D444u, &recomp_unit_0086, "recomp_unit_0086");
    runtime.register_function(0x0895D450u, &recomp_unit_0086, "recomp_unit_0086");
    runtime.register_function(0x0895D468u, &recomp_unit_0086, "recomp_unit_0086");
    runtime.register_function(0x0895D47Cu, &recomp_unit_0086, "recomp_unit_0086");
    runtime.register_function(0x0895D48Cu, &recomp_unit_0086, "recomp_unit_0086");
    runtime.register_function(0x0895D498u, &recomp_unit_0086, "recomp_unit_0086");
    runtime.register_function(0x0895D4A8u, &recomp_unit_0086, "recomp_unit_0086");
    runtime.register_function(0x0895D4B8u, &recomp_unit_0086, "recomp_unit_0086");
    runtime.register_function(0x0895D4C4u, &recomp_unit_0086, "recomp_unit_0086");
    runtime.register_function(0x0895D4D8u, &recomp_unit_0086, "recomp_unit_0086");
    runtime.register_function(0x0895D4ECu, &recomp_unit_0086, "recomp_unit_0086");
    runtime.register_function(0x0895D4F4u, &recomp_unit_0086, "recomp_unit_0086");
    runtime.register_function(0x0895D4FCu, &recomp_unit_0086, "recomp_unit_0086");
    runtime.register_function(0x0895D514u, &recomp_unit_0086, "recomp_unit_0086");
    runtime.register_function(0x0895D524u, &recomp_unit_0086, "recomp_unit_0086");
    runtime.register_function(0x0895D530u, &recomp_unit_0086, "recomp_unit_0086");
    runtime.register_function(0x0895D53Cu, &recomp_unit_0086, "recomp_unit_0086");
    runtime.register_function(0x0895D550u, &recomp_unit_0086, "recomp_unit_0086");
    runtime.register_function(0x0895D598u, &recomp_unit_0086, "recomp_unit_0086");
    runtime.register_function(0x0895D5B0u, &recomp_unit_0086, "recomp_unit_0086");
    runtime.register_function(0x0895D5CCu, &recomp_unit_0086, "recomp_unit_0086");
    runtime.register_function(0x0895D5DCu, &recomp_unit_0086, "recomp_unit_0086");
    runtime.register_function(0x0895D5E4u, &recomp_unit_0086, "recomp_unit_0086");
    runtime.register_function(0x0895D5F8u, &recomp_unit_0086, "recomp_unit_0086");
    runtime.register_function(0x0895D600u, &recomp_unit_0086, "recomp_unit_0086");
    runtime.register_function(0x0895D604u, &recomp_unit_0086, "recomp_unit_0086");
    runtime.register_function(0x0895D614u, &recomp_unit_0086, "recomp_unit_0086");
    runtime.register_function(0x0895D624u, &recomp_unit_0086, "recomp_unit_0086");
    runtime.register_function(0x0895D62Cu, &recomp_unit_0086, "recomp_unit_0086");
    runtime.register_function(0x0895D640u, &recomp_unit_0086, "recomp_unit_0086");
    runtime.register_function(0x0895D648u, &recomp_unit_0086, "recomp_unit_0086");
    runtime.register_function(0x0895D64Cu, &recomp_unit_0086, "recomp_unit_0086");
    runtime.register_function(0x0895D658u, &recomp_unit_0086, "recomp_unit_0086");
    runtime.register_function(0x0895D660u, &recomp_unit_0086, "recomp_unit_0086");
    runtime.register_function(0x0895D664u, &recomp_unit_0086, "recomp_unit_0086");
    runtime.register_function(0x0895D674u, &recomp_unit_0086, "recomp_unit_0086");
    runtime.register_function(0x0895D678u, &recomp_unit_0086, "recomp_unit_0086");
    runtime.register_function(0x0895D6A4u, &recomp_unit_0086, "recomp_unit_0086");
    runtime.register_function(0x0895D6CCu, &recomp_unit_0086, "recomp_unit_0086");
    runtime.register_function(0x0895D6DCu, &recomp_unit_0086, "recomp_unit_0086");
    runtime.register_function(0x0895D6F8u, &recomp_unit_0086, "recomp_unit_0086");
    runtime.register_function(0x0895D714u, &recomp_unit_0086, "recomp_unit_0086");
    runtime.register_function(0x0895D724u, &recomp_unit_0086, "recomp_unit_0086");
    runtime.register_function(0x0895D730u, &recomp_unit_0086, "recomp_unit_0086");
    runtime.register_function(0x0895D73Cu, &recomp_unit_0086, "recomp_unit_0086");
    runtime.register_function(0x0895D748u, &recomp_unit_0086, "recomp_unit_0086");
    runtime.register_function(0x0895D754u, &recomp_unit_0086, "recomp_unit_0086");
    runtime.register_function(0x0895D764u, &recomp_unit_0086, "recomp_unit_0086");
    runtime.register_function(0x0895D768u, &recomp_unit_0086, "recomp_unit_0086");
    runtime.register_function(0x0895D778u, &recomp_unit_0086, "recomp_unit_0086");
    runtime.register_function(0x0895D784u, &recomp_unit_0086, "recomp_unit_0086");
    runtime.register_function(0x0895D790u, &recomp_unit_0086, "recomp_unit_0086");
    runtime.register_function(0x0895D7ACu, &recomp_unit_0086, "recomp_unit_0086");
    runtime.register_function(0x0895D7B0u, &recomp_unit_0086, "recomp_unit_0086");
    runtime.register_function(0x0895D7B8u, &recomp_unit_0086, "recomp_unit_0086");
    runtime.register_function(0x0895D7C0u, &recomp_unit_0086, "recomp_unit_0086");
    runtime.register_function(0x0895D7DCu, &recomp_unit_0086, "recomp_unit_0086");
    runtime.register_function(0x0895D7E4u, &recomp_unit_0086, "recomp_unit_0086");
    runtime.register_function(0x0895D800u, &recomp_unit_0086, "recomp_unit_0086");
    runtime.register_function(0x0895D810u, &recomp_unit_0086, "recomp_unit_0086");
    runtime.register_function(0x0895D81Cu, &recomp_unit_0086, "recomp_unit_0086");
    runtime.register_function(0x0895D828u, &recomp_unit_0086, "recomp_unit_0086");
    runtime.register_function(0x0895D834u, &recomp_unit_0086, "recomp_unit_0086");
    runtime.register_function(0x0895D840u, &recomp_unit_0086, "recomp_unit_0086");
    runtime.register_function(0x0895D844u, &recomp_unit_0086, "recomp_unit_0086");
    runtime.register_function(0x0895D84Cu, &recomp_unit_0086, "recomp_unit_0086");
    runtime.register_function(0x0895D850u, &recomp_unit_0086, "recomp_unit_0086");
    runtime.register_function(0x0895D868u, &recomp_unit_0086, "recomp_unit_0086");
    runtime.register_function(0x0895D8B8u, &recomp_unit_0086, "recomp_unit_0086");
    runtime.register_function(0x0895D8D0u, &recomp_unit_0086, "recomp_unit_0086");
    runtime.register_function(0x0895D900u, &recomp_unit_0086, "recomp_unit_0086");
    runtime.register_function(0x0895D904u, &recomp_unit_0086, "recomp_unit_0086");
    runtime.register_function(0x0895D934u, &recomp_unit_0086, "recomp_unit_0086");
    runtime.register_function(0x0895D978u, &recomp_unit_0086, "recomp_unit_0086");
    runtime.register_function(0x0895D984u, &recomp_unit_0086, "recomp_unit_0086");
    runtime.register_function(0x0895D98Cu, &recomp_unit_0086, "recomp_unit_0086");
    runtime.register_function(0x0895D9B0u, &recomp_unit_0086, "recomp_unit_0086");
    runtime.register_function(0x0895D9D4u, &recomp_unit_0086, "recomp_unit_0086");
    runtime.register_function(0x0895DA24u, &recomp_unit_0086, "recomp_unit_0086");
    runtime.register_function(0x0895DA2Cu, &recomp_unit_0086, "recomp_unit_0086");
    runtime.register_function(0x0895DA34u, &recomp_unit_0086, "recomp_unit_0086");
    runtime.register_function(0x0895DA40u, &recomp_unit_0086, "recomp_unit_0086");
    runtime.register_function(0x0895DA4Cu, &recomp_unit_0086, "recomp_unit_0086");
    runtime.register_function(0x0895DA50u, &recomp_unit_0086, "recomp_unit_0086");
    runtime.register_function(0x0895DA58u, &recomp_unit_0086, "recomp_unit_0086");
    runtime.register_function(0x0895DA64u, &recomp_unit_0086, "recomp_unit_0086");
    runtime.register_function(0x0895DA74u, &recomp_unit_0086, "recomp_unit_0086");
    runtime.register_function(0x0895DA78u, &recomp_unit_0086, "recomp_unit_0086");
    runtime.register_function(0x0895DAA4u, &recomp_unit_0086, "recomp_unit_0086");
    runtime.register_function(0x0895DAB8u, &recomp_unit_0086, "recomp_unit_0086");
    runtime.register_function(0x0895DAC4u, &recomp_unit_0086, "recomp_unit_0086");
    runtime.register_function(0x0895DAD8u, &recomp_unit_0086, "recomp_unit_0086");
    runtime.register_function(0x0895DAF8u, &recomp_unit_0086, "recomp_unit_0086");
    runtime.register_function(0x0895DB28u, &recomp_unit_0086, "recomp_unit_0086");
    runtime.register_function(0x0895DB34u, &recomp_unit_0086, "recomp_unit_0086");
    runtime.register_function(0x0895DB40u, &recomp_unit_0086, "recomp_unit_0086");
    runtime.register_function(0x0895DB60u, &recomp_unit_0086, "recomp_unit_0086");
    runtime.register_function(0x0895DB64u, &recomp_unit_0086, "recomp_unit_0086");
    runtime.register_function(0x0895DB6Cu, &recomp_unit_0086, "recomp_unit_0086");
    runtime.register_function(0x0895DBA8u, &recomp_unit_0086, "recomp_unit_0086");
    runtime.register_function(0x0895DBB0u, &recomp_unit_0086, "recomp_unit_0086");
    runtime.register_function(0x0895DBB8u, &recomp_unit_0086, "recomp_unit_0086");
    runtime.register_function(0x0895DBCCu, &recomp_unit_0086, "recomp_unit_0086");
    runtime.register_function(0x0895DBECu, &recomp_unit_0086, "recomp_unit_0086");
    runtime.register_function(0x0895DBF8u, &recomp_unit_0086, "recomp_unit_0086");
    runtime.register_function(0x0895DC00u, &recomp_unit_0086, "recomp_unit_0086");
    runtime.register_function(0x0895DC0Cu, &recomp_unit_0086, "recomp_unit_0086");
    runtime.register_function(0x0895DC18u, &recomp_unit_0086, "recomp_unit_0086");
    runtime.register_function(0x0895DC28u, &recomp_unit_0086, "recomp_unit_0086");
    runtime.register_function(0x0895DC2Cu, &recomp_unit_0086, "recomp_unit_0086");
    runtime.register_function(0x0895DC3Cu, &recomp_unit_0086, "recomp_unit_0086");
    runtime.register_function(0x0895DC54u, &recomp_unit_0086, "recomp_unit_0086");
    runtime.register_function(0x0895DC60u, &recomp_unit_0086, "recomp_unit_0086");
    runtime.register_function(0x0895DC64u, &recomp_unit_0086, "recomp_unit_0086");
    runtime.register_function(0x0895DC88u, &recomp_unit_0086, "recomp_unit_0086");
    runtime.register_function(0x0895DCB0u, &recomp_unit_0086, "recomp_unit_0086");
    runtime.register_function(0x0895DCC4u, &recomp_unit_0086, "recomp_unit_0086");
    runtime.register_function(0x0895DCD4u, &recomp_unit_0086, "recomp_unit_0086");
    runtime.register_function(0x0895DCE0u, &recomp_unit_0086, "recomp_unit_0086");
    runtime.register_function(0x0895DCF0u, &recomp_unit_0086, "recomp_unit_0086");
    runtime.register_function(0x0895DCFCu, &recomp_unit_0086, "recomp_unit_0086");
    runtime.register_function(0x0895DD0Cu, &recomp_unit_0086, "recomp_unit_0086");
    runtime.register_function(0x0895DD24u, &recomp_unit_0086, "recomp_unit_0086");
    runtime.register_function(0x0895DD3Cu, &recomp_unit_0086, "recomp_unit_0086");
    runtime.register_function(0x0895DD48u, &recomp_unit_0086, "recomp_unit_0086");
    runtime.register_function(0x0895DD54u, &recomp_unit_0086, "recomp_unit_0086");
    runtime.register_function(0x0895DD8Cu, &recomp_unit_0086, "recomp_unit_0086");
    runtime.register_function(0x0895DDA0u, &recomp_unit_0086, "recomp_unit_0086");
    runtime.register_function(0x0895DDA8u, &recomp_unit_0086, "recomp_unit_0086");
    runtime.register_function(0x0895DDC0u, &recomp_unit_0086, "recomp_unit_0086");
    runtime.register_function(0x0895DDC8u, &recomp_unit_0086, "recomp_unit_0086");
    runtime.register_function(0x0895DDDCu, &recomp_unit_0086, "recomp_unit_0086");
    runtime.register_function(0x0895DDF0u, &recomp_unit_0086, "recomp_unit_0086");
    runtime.register_function(0x0895DDF8u, &recomp_unit_0086, "recomp_unit_0086");
    runtime.register_function(0x0895DE10u, &recomp_unit_0086, "recomp_unit_0086");
    runtime.register_function(0x0895DE18u, &recomp_unit_0086, "recomp_unit_0086");
    runtime.register_function(0x0895DE1Cu, &recomp_unit_0086, "recomp_unit_0086");
    runtime.register_function(0x0895DE28u, &recomp_unit_0086, "recomp_unit_0086");
    runtime.register_function(0x0895DE48u, &recomp_unit_0086, "recomp_unit_0086");
    runtime.register_function(0x0895DE78u, &recomp_unit_0086, "recomp_unit_0086");
    runtime.register_function(0x0895DE84u, &recomp_unit_0086, "recomp_unit_0086");
    runtime.register_function(0x0895DE90u, &recomp_unit_0086, "recomp_unit_0086");
    runtime.register_function(0x0895DE9Cu, &recomp_unit_0086, "recomp_unit_0086");
    runtime.register_function(0x0895DEB0u, &recomp_unit_0086, "recomp_unit_0086");
    runtime.register_function(0x0895DEBCu, &recomp_unit_0086, "recomp_unit_0086");
    runtime.register_function(0x0895DEC4u, &recomp_unit_0086, "recomp_unit_0086");
    runtime.register_function(0x0895DED0u, &recomp_unit_0086, "recomp_unit_0086");
    runtime.register_function(0x0895DED8u, &recomp_unit_0086, "recomp_unit_0086");
    runtime.register_function(0x0895DEE4u, &recomp_unit_0086, "recomp_unit_0086");
    runtime.register_function(0x0895DF08u, &recomp_unit_0086, "recomp_unit_0086");
    runtime.register_function(0x0895DF24u, &recomp_unit_0086, "recomp_unit_0086");
    runtime.register_function(0x0895DF44u, &recomp_unit_0086, "recomp_unit_0086");
    runtime.register_function(0x0895DF50u, &recomp_unit_0086, "recomp_unit_0086");
    runtime.register_function(0x0895DF68u, &recomp_unit_0086, "recomp_unit_0086");
    runtime.register_function(0x0895DF6Cu, &recomp_unit_0086, "recomp_unit_0086");
    runtime.register_function(0x0895DF7Cu, &recomp_unit_0086, "recomp_unit_0086");
    runtime.register_function(0x0895DF98u, &recomp_unit_0086, "recomp_unit_0086");
    runtime.register_function(0x0895DFD4u, &recomp_unit_0086, "recomp_unit_0086");
    runtime.register_function(0x0895DFDCu, &recomp_unit_0086, "recomp_unit_0086");
    runtime.register_function(0x0895DFE4u, &recomp_unit_0086, "recomp_unit_0086");
    runtime.register_function(0x0895DFF0u, &recomp_unit_0086, "recomp_unit_0086");
    runtime.register_function(0x0895E000u, &recomp_unit_0086, "recomp_unit_0086");
    runtime.register_function(0x0895E00Cu, &recomp_unit_0086, "recomp_unit_0086");
    runtime.register_function(0x0895E018u, &recomp_unit_0086, "recomp_unit_0086");
    runtime.register_function(0x0895E030u, &recomp_unit_0086, "recomp_unit_0086");
    runtime.register_function(0x0895E038u, &recomp_unit_0086, "recomp_unit_0086");
    runtime.register_function(0x0895E044u, &recomp_unit_0086, "recomp_unit_0086");
    runtime.register_function(0x0895E04Cu, &recomp_unit_0086, "recomp_unit_0086");
    runtime.register_function(0x0895E058u, &recomp_unit_0086, "recomp_unit_0086");
    runtime.register_function(0x0895E064u, &recomp_unit_0086, "recomp_unit_0086");
    runtime.register_function(0x0895E080u, &recomp_unit_0086, "recomp_unit_0086");
    runtime.register_function(0x0895E08Cu, &recomp_unit_0086, "recomp_unit_0086");
    runtime.register_function(0x0895E090u, &recomp_unit_0086, "recomp_unit_0086");
    runtime.register_function(0x0895E09Cu, &recomp_unit_0086, "recomp_unit_0086");
    runtime.register_function(0x0895E0A4u, &recomp_unit_0086, "recomp_unit_0086");
    runtime.register_function(0x0895E0B0u, &recomp_unit_0086, "recomp_unit_0086");
    runtime.register_function(0x0895E0B8u, &recomp_unit_0086, "recomp_unit_0086");
    runtime.register_function(0x0895E0D0u, &recomp_unit_0086, "recomp_unit_0086");
    runtime.register_function(0x0895E0D8u, &recomp_unit_0086, "recomp_unit_0086");
    runtime.register_function(0x0895E0E4u, &recomp_unit_0086, "recomp_unit_0086");
    runtime.register_function(0x0895E0ECu, &recomp_unit_0086, "recomp_unit_0086");
    runtime.register_function(0x0895E0F8u, &recomp_unit_0086, "recomp_unit_0086");
    runtime.register_function(0x0895E104u, &recomp_unit_0086, "recomp_unit_0086");
    runtime.register_function(0x0895E108u, &recomp_unit_0086, "recomp_unit_0086");
    runtime.register_function(0x0895E114u, &recomp_unit_0086, "recomp_unit_0086");
    runtime.register_function(0x0895E13Cu, &recomp_unit_0086, "recomp_unit_0086");
    runtime.register_function(0x0895E144u, &recomp_unit_0086, "recomp_unit_0086");
    runtime.register_function(0x0895E164u, &recomp_unit_0086, "recomp_unit_0086");
    runtime.register_function(0x0895E16Cu, &recomp_unit_0086, "recomp_unit_0086");
    runtime.register_function(0x0895E180u, &recomp_unit_0086, "recomp_unit_0086");
    runtime.register_function(0x0895E188u, &recomp_unit_0086, "recomp_unit_0086");
    runtime.register_function(0x0895E194u, &recomp_unit_0086, "recomp_unit_0086");
    runtime.register_function(0x0895E1A0u, &recomp_unit_0086, "recomp_unit_0086");
    runtime.register_function(0x0895E1ACu, &recomp_unit_0086, "recomp_unit_0086");
    runtime.register_function(0x0895E1B8u, &recomp_unit_0086, "recomp_unit_0086");
    runtime.register_function(0x0895E1C4u, &recomp_unit_0086, "recomp_unit_0086");
    runtime.register_function(0x0895E1D8u, &recomp_unit_0086, "recomp_unit_0086");
    runtime.register_function(0x0895E1E8u, &recomp_unit_0086, "recomp_unit_0086");
    runtime.register_function(0x0895E1F8u, &recomp_unit_0086, "recomp_unit_0086");
    runtime.register_function(0x0895E204u, &recomp_unit_0086, "recomp_unit_0086");
    runtime.register_function(0x0895E21Cu, &recomp_unit_0086, "recomp_unit_0086");
    runtime.register_function(0x0895E224u, &recomp_unit_0086, "recomp_unit_0086");
    runtime.register_function(0x0895E22Cu, &recomp_unit_0086, "recomp_unit_0086");
    runtime.register_function(0x0895E234u, &recomp_unit_0086, "recomp_unit_0086");
    runtime.register_function(0x0895E244u, &recomp_unit_0086, "recomp_unit_0086");
    runtime.register_function(0x0895E258u, &recomp_unit_0086, "recomp_unit_0086");
    runtime.register_function(0x0895E260u, &recomp_unit_0086, "recomp_unit_0086");
    runtime.register_function(0x0895E268u, &recomp_unit_0086, "recomp_unit_0086");
    runtime.register_function(0x0895E27Cu, &recomp_unit_0086, "recomp_unit_0086");
    runtime.register_function(0x0895E290u, &recomp_unit_0086, "recomp_unit_0086");
    runtime.register_function(0x0895E29Cu, &recomp_unit_0086, "recomp_unit_0086");
    runtime.register_function(0x0895E2A8u, &recomp_unit_0086, "recomp_unit_0086");
    runtime.register_function(0x0895E2C4u, &recomp_unit_0086, "recomp_unit_0086");
    runtime.register_function(0x0895E2D0u, &recomp_unit_0086, "recomp_unit_0086");
    runtime.register_function(0x0895E2D4u, &recomp_unit_0086, "recomp_unit_0086");
    runtime.register_function(0x0895E2E4u, &recomp_unit_0086, "recomp_unit_0086");
    runtime.register_function(0x0895E304u, &recomp_unit_0086, "recomp_unit_0086");
    runtime.register_function(0x0895E328u, &recomp_unit_0086, "recomp_unit_0086");
    runtime.register_function(0x0895E334u, &recomp_unit_0086, "recomp_unit_0086");
    runtime.register_function(0x0895E348u, &recomp_unit_0086, "recomp_unit_0086");
    runtime.register_function(0x0895E354u, &recomp_unit_0086, "recomp_unit_0086");
    runtime.register_function(0x0895E358u, &recomp_unit_0086, "recomp_unit_0086");
    runtime.register_function(0x0895E370u, &recomp_unit_0086, "recomp_unit_0086");
    runtime.register_function(0x0895E388u, &recomp_unit_0086, "recomp_unit_0086");
    runtime.register_function(0x0895E394u, &recomp_unit_0086, "recomp_unit_0086");
    runtime.register_function(0x0895E3A0u, &recomp_unit_0086, "recomp_unit_0086");
    runtime.register_function(0x0895E3A4u, &recomp_unit_0086, "recomp_unit_0086");
    runtime.register_function(0x0895E3B8u, &recomp_unit_0086, "recomp_unit_0086");
    runtime.register_function(0x0895E3E0u, &recomp_unit_0086, "recomp_unit_0086");
    runtime.register_function(0x0895E3FCu, &recomp_unit_0086, "recomp_unit_0086");
    runtime.register_function(0x0895E418u, &recomp_unit_0086, "recomp_unit_0086");
    runtime.register_function(0x0895E474u, &recomp_unit_0086, "recomp_unit_0086");
    runtime.register_function(0x0895E488u, &recomp_unit_0086, "recomp_unit_0086");
    runtime.register_function(0x0895E4A4u, &recomp_unit_0086, "recomp_unit_0086");
    runtime.register_function(0x0895E4B8u, &recomp_unit_0086, "recomp_unit_0086");
    runtime.register_function(0x0895E4CCu, &recomp_unit_0086, "recomp_unit_0086");
    runtime.register_function(0x0895E4E0u, &recomp_unit_0086, "recomp_unit_0086");
    runtime.register_function(0x0895E500u, &recomp_unit_0086, "recomp_unit_0086");
    runtime.register_function(0x0895E514u, &recomp_unit_0086, "recomp_unit_0086");
    runtime.register_function(0x0895E51Cu, &recomp_unit_0086, "recomp_unit_0086");
    runtime.register_function(0x0895E530u, &recomp_unit_0086, "recomp_unit_0086");
    runtime.register_function(0x0895E538u, &recomp_unit_0086, "recomp_unit_0086");
    runtime.register_function(0x0895E554u, &recomp_unit_0086, "recomp_unit_0086");
    runtime.register_function(0x0895E560u, &recomp_unit_0086, "recomp_unit_0086");
    runtime.register_function(0x0895E568u, &recomp_unit_0086, "recomp_unit_0086");
    runtime.register_function(0x0895E57Cu, &recomp_unit_0086, "recomp_unit_0086");
    runtime.register_function(0x0895E588u, &recomp_unit_0086, "recomp_unit_0086");
    runtime.register_function(0x0895E594u, &recomp_unit_0086, "recomp_unit_0086");
    runtime.register_function(0x0895E5A4u, &recomp_unit_0086, "recomp_unit_0086");
    runtime.register_function(0x0895E5B8u, &recomp_unit_0086, "recomp_unit_0086");
    runtime.register_function(0x0895E5C8u, &recomp_unit_0086, "recomp_unit_0086");
    runtime.register_function(0x0895E5D0u, &recomp_unit_0086, "recomp_unit_0086");
    runtime.register_function(0x0895E5F0u, &recomp_unit_0086, "recomp_unit_0086");
    runtime.register_function(0x0895E64Cu, &recomp_unit_0086, "recomp_unit_0086");
    runtime.register_function(0x0895E668u, &recomp_unit_0086, "recomp_unit_0086");
    runtime.register_function(0x0895E670u, &recomp_unit_0086, "recomp_unit_0086");
    runtime.register_function(0x0895E680u, &recomp_unit_0086, "recomp_unit_0086");
    runtime.register_function(0x0895E694u, &recomp_unit_0086, "recomp_unit_0086");
    runtime.register_function(0x0895E6ACu, &recomp_unit_0086, "recomp_unit_0086");
    runtime.register_function(0x0895E6C8u, &recomp_unit_0086, "recomp_unit_0086");
    runtime.register_function(0x0895E6D8u, &recomp_unit_0086, "recomp_unit_0086");
    runtime.register_function(0x0895E6E8u, &recomp_unit_0086, "recomp_unit_0086");
    runtime.register_function(0x0895E6F4u, &recomp_unit_0086, "recomp_unit_0086");
    runtime.register_function(0x0895E700u, &recomp_unit_0086, "recomp_unit_0086");
    runtime.register_function(0x0895E710u, &recomp_unit_0086, "recomp_unit_0086");
    runtime.register_function(0x0895E71Cu, &recomp_unit_0086, "recomp_unit_0086");
    runtime.register_function(0x0895E728u, &recomp_unit_0086, "recomp_unit_0086");
    runtime.register_function(0x0895E748u, &recomp_unit_0086, "recomp_unit_0086");
    runtime.register_function(0x0895E764u, &recomp_unit_0086, "recomp_unit_0086");
    runtime.register_function(0x0895E770u, &recomp_unit_0086, "recomp_unit_0086");
    runtime.register_function(0x0895E778u, &recomp_unit_0086, "recomp_unit_0086");
    runtime.register_function(0x0895E788u, &recomp_unit_0086, "recomp_unit_0086");
    runtime.register_function(0x0895E7ACu, &recomp_unit_0086, "recomp_unit_0086");
    runtime.register_function(0x0895E7CCu, &recomp_unit_0086, "recomp_unit_0086");
    runtime.register_function(0x0895E7E8u, &recomp_unit_0086, "recomp_unit_0086");
    runtime.register_function(0x0895E7F4u, &recomp_unit_0086, "recomp_unit_0086");
    runtime.register_function(0x0895E818u, &recomp_unit_0086, "recomp_unit_0086");
    runtime.register_function(0x0895E820u, &recomp_unit_0086, "recomp_unit_0086");
    runtime.register_function(0x0895E83Cu, &recomp_unit_0086, "recomp_unit_0086");
    runtime.register_function(0x0895E864u, &recomp_unit_0086, "recomp_unit_0086");
    runtime.register_function(0x0895E884u, &recomp_unit_0086, "recomp_unit_0086");
    runtime.register_function(0x0895E890u, &recomp_unit_0086, "recomp_unit_0086");
    runtime.register_function(0x0895E89Cu, &recomp_unit_0086, "recomp_unit_0086");
    runtime.register_function(0x0895E8A8u, &recomp_unit_0086, "recomp_unit_0086");
    runtime.register_function(0x0895E8C0u, &recomp_unit_0086, "recomp_unit_0086");
    runtime.register_function(0x0895E8D0u, &recomp_unit_0086, "recomp_unit_0086");
    runtime.register_function(0x0895E8D8u, &recomp_unit_0086, "recomp_unit_0086");
    runtime.register_function(0x0895E8E0u, &recomp_unit_0086, "recomp_unit_0086");
    runtime.register_function(0x0895E8ECu, &recomp_unit_0086, "recomp_unit_0086");
    runtime.register_function(0x0895E8FCu, &recomp_unit_0086, "recomp_unit_0086");
    runtime.register_function(0x0895E908u, &recomp_unit_0086, "recomp_unit_0086");
    runtime.register_function(0x0895E910u, &recomp_unit_0086, "recomp_unit_0086");
    runtime.register_function(0x0895E91Cu, &recomp_unit_0086, "recomp_unit_0086");
    runtime.register_function(0x0895E924u, &recomp_unit_0086, "recomp_unit_0086");
    runtime.register_function(0x0895E938u, &recomp_unit_0086, "recomp_unit_0086");
    runtime.register_function(0x0895E954u, &recomp_unit_0086, "recomp_unit_0086");
    runtime.register_function(0x0895E970u, &recomp_unit_0086, "recomp_unit_0086");
    runtime.register_function(0x0895E97Cu, &recomp_unit_0086, "recomp_unit_0086");
    runtime.register_function(0x0895E984u, &recomp_unit_0086, "recomp_unit_0086");
    runtime.register_function(0x0895E98Cu, &recomp_unit_0086, "recomp_unit_0086");
    runtime.register_function(0x0895E998u, &recomp_unit_0086, "recomp_unit_0086");
    runtime.register_function(0x0895E9A4u, &recomp_unit_0086, "recomp_unit_0086");
    runtime.register_function(0x0895E9B4u, &recomp_unit_0086, "recomp_unit_0086");
    runtime.register_function(0x0895E9C0u, &recomp_unit_0086, "recomp_unit_0086");
    runtime.register_function(0x0895E9C8u, &recomp_unit_0086, "recomp_unit_0086");
    runtime.register_function(0x0895E9D0u, &recomp_unit_0086, "recomp_unit_0086");
    runtime.register_function(0x0895E9E0u, &recomp_unit_0086, "recomp_unit_0086");
    runtime.register_function(0x0895E9F8u, &recomp_unit_0086, "recomp_unit_0086");
    runtime.register_function(0x0895EA10u, &recomp_unit_0086, "recomp_unit_0086");
    runtime.register_function(0x0895EA14u, &recomp_unit_0086, "recomp_unit_0086");
    runtime.register_function(0x0895EA1Cu, &recomp_unit_0086, "recomp_unit_0086");
    runtime.register_function(0x0895EA34u, &recomp_unit_0086, "recomp_unit_0086");
    runtime.register_function(0x0895EA40u, &recomp_unit_0086, "recomp_unit_0086");
    runtime.register_function(0x0895EA4Cu, &recomp_unit_0086, "recomp_unit_0086");
    runtime.register_function(0x0895EA6Cu, &recomp_unit_0086, "recomp_unit_0086");
    runtime.register_function(0x0895EA84u, &recomp_unit_0086, "recomp_unit_0086");
    runtime.register_function(0x0895EA88u, &recomp_unit_0086, "recomp_unit_0086");
    runtime.register_function(0x0895EA90u, &recomp_unit_0086, "recomp_unit_0086");
    runtime.register_function(0x0895EA9Cu, &recomp_unit_0086, "recomp_unit_0086");
    runtime.register_function(0x0895EAB0u, &recomp_unit_0086, "recomp_unit_0086");
    runtime.register_function(0x0895EAD0u, &recomp_unit_0086, "recomp_unit_0086");
    runtime.register_function(0x0895EAE4u, &recomp_unit_0086, "recomp_unit_0086");
    runtime.register_function(0x0895EAFCu, &recomp_unit_0086, "recomp_unit_0086");
    runtime.register_function(0x0895EB00u, &recomp_unit_0086, "recomp_unit_0086");
    runtime.register_function(0x0895EB08u, &recomp_unit_0086, "recomp_unit_0086");
    runtime.register_function(0x0895EB20u, &recomp_unit_0086, "recomp_unit_0086");
    runtime.register_function(0x0895EB2Cu, &recomp_unit_0086, "recomp_unit_0086");
    runtime.register_function(0x0895EB30u, &recomp_unit_0086, "recomp_unit_0086");
    runtime.register_function(0x0895EB44u, &recomp_unit_0086, "recomp_unit_0086");
    runtime.register_function(0x0895EB54u, &recomp_unit_0086, "recomp_unit_0086");
    runtime.register_function(0x0895EB60u, &recomp_unit_0086, "recomp_unit_0086");
    runtime.register_function(0x0895EB68u, &recomp_unit_0086, "recomp_unit_0086");
    runtime.register_function(0x0895EB74u, &recomp_unit_0086, "recomp_unit_0086");
    runtime.register_function(0x0895EB7Cu, &recomp_unit_0086, "recomp_unit_0086");
    runtime.register_function(0x0895EBA0u, &recomp_unit_0086, "recomp_unit_0086");
    runtime.register_function(0x0895EBC0u, &recomp_unit_0086, "recomp_unit_0086");
    runtime.register_function(0x0895EBD0u, &recomp_unit_0086, "recomp_unit_0086");
    runtime.register_function(0x0895EBDCu, &recomp_unit_0086, "recomp_unit_0086");
    runtime.register_function(0x0895EBECu, &recomp_unit_0086, "recomp_unit_0086");
    runtime.register_function(0x0895EBF8u, &recomp_unit_0086, "recomp_unit_0086");
    runtime.register_function(0x0895EC00u, &recomp_unit_0086, "recomp_unit_0086");
    runtime.register_function(0x0895EC0Cu, &recomp_unit_0086, "recomp_unit_0086");
    runtime.register_function(0x0895EC14u, &recomp_unit_0086, "recomp_unit_0086");
    runtime.register_function(0x0895EC2Cu, &recomp_unit_0086, "recomp_unit_0086");
    runtime.register_function(0x0895EC44u, &recomp_unit_0086, "recomp_unit_0086");
    runtime.register_function(0x0895EC54u, &recomp_unit_0086, "recomp_unit_0086");
    runtime.register_function(0x0895EC6Cu, &recomp_unit_0086, "recomp_unit_0086");
    runtime.register_function(0x0895EC70u, &recomp_unit_0086, "recomp_unit_0086");
    runtime.register_function(0x0895EC78u, &recomp_unit_0086, "recomp_unit_0086");
    runtime.register_function(0x0895EC90u, &recomp_unit_0086, "recomp_unit_0086");
    runtime.register_function(0x0895EC9Cu, &recomp_unit_0086, "recomp_unit_0086");
    runtime.register_function(0x0895ECB4u, &recomp_unit_0086, "recomp_unit_0086");
    runtime.register_function(0x0895ECD4u, &recomp_unit_0086, "recomp_unit_0086");
    runtime.register_function(0x0895ECE4u, &recomp_unit_0086, "recomp_unit_0086");
    runtime.register_function(0x0895ECF0u, &recomp_unit_0086, "recomp_unit_0086");
    runtime.register_function(0x0895ED00u, &recomp_unit_0086, "recomp_unit_0086");
    runtime.register_function(0x0895ED0Cu, &recomp_unit_0086, "recomp_unit_0086");
    runtime.register_function(0x0895ED14u, &recomp_unit_0086, "recomp_unit_0086");
    runtime.register_function(0x0895ED20u, &recomp_unit_0086, "recomp_unit_0086");
    runtime.register_function(0x0895ED28u, &recomp_unit_0086, "recomp_unit_0086");
    runtime.register_function(0x0895ED40u, &recomp_unit_0086, "recomp_unit_0086");
    runtime.register_function(0x0895ED58u, &recomp_unit_0086, "recomp_unit_0086");
    runtime.register_function(0x0895ED68u, &recomp_unit_0086, "recomp_unit_0086");
    runtime.register_function(0x0895ED80u, &recomp_unit_0086, "recomp_unit_0086");
    runtime.register_function(0x0895ED84u, &recomp_unit_0086, "recomp_unit_0086");
    runtime.register_function(0x0895ED8Cu, &recomp_unit_0086, "recomp_unit_0086");
    runtime.register_function(0x0895EDA4u, &recomp_unit_0086, "recomp_unit_0086");
    runtime.register_function(0x0895EDB0u, &recomp_unit_0086, "recomp_unit_0086");
    runtime.register_function(0x0895EDC8u, &recomp_unit_0086, "recomp_unit_0086");
    runtime.register_function(0x0895EDF0u, &recomp_unit_0086, "recomp_unit_0086");
    runtime.register_function(0x0895EDFCu, &recomp_unit_0086, "recomp_unit_0086");
    runtime.register_function(0x0895EE08u, &recomp_unit_0086, "recomp_unit_0086");
    runtime.register_function(0x0895EE24u, &recomp_unit_0086, "recomp_unit_0086");
    runtime.register_function(0x0895EE70u, &recomp_unit_0086, "recomp_unit_0086");
    runtime.register_function(0x0895EE80u, &recomp_unit_0086, "recomp_unit_0086");
    runtime.register_function(0x0895EE88u, &recomp_unit_0086, "recomp_unit_0086");
    runtime.register_function(0x0895EE90u, &recomp_unit_0086, "recomp_unit_0086");
    runtime.register_function(0x0895EE9Cu, &recomp_unit_0086, "recomp_unit_0086");
    runtime.register_function(0x0895EEACu, &recomp_unit_0086, "recomp_unit_0086");
    runtime.register_function(0x0895EEB8u, &recomp_unit_0086, "recomp_unit_0086");
    runtime.register_function(0x0895EEC0u, &recomp_unit_0086, "recomp_unit_0086");
    runtime.register_function(0x0895EECCu, &recomp_unit_0086, "recomp_unit_0086");
    runtime.register_function(0x0895EED4u, &recomp_unit_0086, "recomp_unit_0086");
    runtime.register_function(0x0895EEE8u, &recomp_unit_0086, "recomp_unit_0086");
    runtime.register_function(0x0895EF04u, &recomp_unit_0086, "recomp_unit_0086");
    runtime.register_function(0x0895EF20u, &recomp_unit_0086, "recomp_unit_0086");
    runtime.register_function(0x0895EF2Cu, &recomp_unit_0086, "recomp_unit_0086");
    runtime.register_function(0x0895EF34u, &recomp_unit_0086, "recomp_unit_0086");
    runtime.register_function(0x0895EF3Cu, &recomp_unit_0086, "recomp_unit_0086");
    runtime.register_function(0x0895EF48u, &recomp_unit_0086, "recomp_unit_0086");
    runtime.register_function(0x0895EF54u, &recomp_unit_0086, "recomp_unit_0086");
    runtime.register_function(0x0895EF64u, &recomp_unit_0086, "recomp_unit_0086");
    runtime.register_function(0x0895EF70u, &recomp_unit_0086, "recomp_unit_0086");
    runtime.register_function(0x0895EF78u, &recomp_unit_0086, "recomp_unit_0086");
    runtime.register_function(0x0895EF80u, &recomp_unit_0086, "recomp_unit_0086");
    runtime.register_function(0x0895EF90u, &recomp_unit_0086, "recomp_unit_0086");
    runtime.register_function(0x0895EFA8u, &recomp_unit_0086, "recomp_unit_0086");
    runtime.register_function(0x0895EFC0u, &recomp_unit_0086, "recomp_unit_0086");
    runtime.register_function(0x0895EFC4u, &recomp_unit_0086, "recomp_unit_0086");
    runtime.register_function(0x0895EFCCu, &recomp_unit_0086, "recomp_unit_0086");
    runtime.register_function(0x0895EFE4u, &recomp_unit_0086, "recomp_unit_0086");
    runtime.register_function(0x0895EFF0u, &recomp_unit_0086, "recomp_unit_0086");
    runtime.register_function(0x0895EFFCu, &recomp_unit_0086, "recomp_unit_0086");
    runtime.register_function(0x0895F004u, &recomp_unit_0086, "recomp_unit_0086");
    runtime.register_function(0x0895F020u, &recomp_unit_0086, "recomp_unit_0086");
    runtime.register_function(0x0895F048u, &recomp_unit_0086, "recomp_unit_0086");
    runtime.register_function(0x0895F06Cu, &recomp_unit_0086, "recomp_unit_0086");
    runtime.register_function(0x0895F088u, &recomp_unit_0086, "recomp_unit_0086");
    runtime.register_function(0x0895F094u, &recomp_unit_0086, "recomp_unit_0086");
    runtime.register_function(0x0895F0C0u, &recomp_unit_0086, "recomp_unit_0086");
    runtime.register_function(0x0895F0DCu, &recomp_unit_0086, "recomp_unit_0086");
    runtime.register_function(0x0895F0E8u, &recomp_unit_0086, "recomp_unit_0086");
    runtime.register_function(0x0895F0FCu, &recomp_unit_0086, "recomp_unit_0086");
    runtime.register_function(0x0895F100u, &recomp_unit_0086, "recomp_unit_0086");
    runtime.register_function(0x0895F11Cu, &recomp_unit_0086, "recomp_unit_0086");
    runtime.register_function(0x0895F144u, &recomp_unit_0086, "recomp_unit_0086");
    runtime.register_function(0x0895F150u, &recomp_unit_0086, "recomp_unit_0086");
    runtime.register_function(0x0895F15Cu, &recomp_unit_0086, "recomp_unit_0086");
    runtime.register_function(0x0895F16Cu, &recomp_unit_0086, "recomp_unit_0086");
    runtime.register_function(0x0895F178u, &recomp_unit_0086, "recomp_unit_0086");
    runtime.register_function(0x0895F180u, &recomp_unit_0086, "recomp_unit_0086");
    runtime.register_function(0x0895F18Cu, &recomp_unit_0086, "recomp_unit_0086");
    runtime.register_function(0x0895F194u, &recomp_unit_0086, "recomp_unit_0086");
    runtime.register_function(0x0895F1A8u, &recomp_unit_0086, "recomp_unit_0086");
    runtime.register_function(0x0895F1ACu, &recomp_unit_0086, "recomp_unit_0086");
    runtime.register_function(0x0895F1C4u, &recomp_unit_0086, "recomp_unit_0086");
    runtime.register_function(0x0895F1D0u, &recomp_unit_0086, "recomp_unit_0086");
    runtime.register_function(0x0895F1F0u, &recomp_unit_0086, "recomp_unit_0086");
    runtime.register_function(0x0895F200u, &recomp_unit_0086, "recomp_unit_0086");
    runtime.register_function(0x0895F20Cu, &recomp_unit_0086, "recomp_unit_0086");
    runtime.register_function(0x0895F234u, &recomp_unit_0086, "recomp_unit_0086");
    runtime.register_function(0x0895F258u, &recomp_unit_0086, "recomp_unit_0086");
    runtime.register_function(0x0895F274u, &recomp_unit_0086, "recomp_unit_0086");
    runtime.register_function(0x0895F288u, &recomp_unit_0086, "recomp_unit_0086");
    runtime.register_function(0x0895F2B4u, &recomp_unit_0086, "recomp_unit_0086");
    runtime.register_function(0x0895F2C0u, &recomp_unit_0086, "recomp_unit_0086");
    runtime.register_function(0x0895F2CCu, &recomp_unit_0086, "recomp_unit_0086");
    runtime.register_function(0x0895F2D4u, &recomp_unit_0086, "recomp_unit_0086");
    runtime.register_function(0x0895F2D8u, &recomp_unit_0086, "recomp_unit_0086");
    runtime.register_function(0x0895F2ECu, &recomp_unit_0086, "recomp_unit_0086");
    runtime.register_function(0x0895F314u, &recomp_unit_0086, "recomp_unit_0086");
    runtime.register_function(0x0895F320u, &recomp_unit_0086, "recomp_unit_0086");
    runtime.register_function(0x0895F32Cu, &recomp_unit_0086, "recomp_unit_0086");
    runtime.register_function(0x0895F33Cu, &recomp_unit_0086, "recomp_unit_0086");
    runtime.register_function(0x0895F348u, &recomp_unit_0086, "recomp_unit_0086");
    runtime.register_function(0x0895F350u, &recomp_unit_0086, "recomp_unit_0086");
    runtime.register_function(0x0895F35Cu, &recomp_unit_0086, "recomp_unit_0086");
    runtime.register_function(0x0895F364u, &recomp_unit_0086, "recomp_unit_0086");
    runtime.register_function(0x0895F378u, &recomp_unit_0086, "recomp_unit_0086");
    runtime.register_function(0x0895F37Cu, &recomp_unit_0086, "recomp_unit_0086");
    runtime.register_function(0x0895F394u, &recomp_unit_0086, "recomp_unit_0086");
    runtime.register_function(0x0895F3A0u, &recomp_unit_0086, "recomp_unit_0086");
    runtime.register_function(0x0895F3B8u, &recomp_unit_0086, "recomp_unit_0086");
    runtime.register_function(0x0895F3CCu, &recomp_unit_0086, "recomp_unit_0086");
    runtime.register_function(0x0895F3D8u, &recomp_unit_0086, "recomp_unit_0086");
    runtime.register_function(0x0895F3F0u, &recomp_unit_0086, "recomp_unit_0086");
    runtime.register_function(0x0895F408u, &recomp_unit_0086, "recomp_unit_0086");
    runtime.register_function(0x0895F42Cu, &recomp_unit_0086, "recomp_unit_0086");
    runtime.register_function(0x0895F444u, &recomp_unit_0086, "recomp_unit_0086");
    runtime.register_function(0x0895F468u, &recomp_unit_0086, "recomp_unit_0086");
    runtime.register_function(0x0895F478u, &recomp_unit_0086, "recomp_unit_0086");
    runtime.register_function(0x0895F488u, &recomp_unit_0086, "recomp_unit_0086");
    runtime.register_function(0x0895F4A8u, &recomp_unit_0086, "recomp_unit_0086");
    runtime.register_function(0x0895F4B8u, &recomp_unit_0086, "recomp_unit_0086");
    runtime.register_function(0x0895F4C4u, &recomp_unit_0086, "recomp_unit_0086");
    runtime.register_function(0x0895F4ECu, &recomp_unit_0086, "recomp_unit_0086");
    runtime.register_function(0x0895F510u, &recomp_unit_0086, "recomp_unit_0086");
    runtime.register_function(0x0895F52Cu, &recomp_unit_0086, "recomp_unit_0086");
    runtime.register_function(0x0895F540u, &recomp_unit_0086, "recomp_unit_0086");
    runtime.register_function(0x0895F56Cu, &recomp_unit_0086, "recomp_unit_0086");
    runtime.register_function(0x0895F578u, &recomp_unit_0086, "recomp_unit_0086");
    runtime.register_function(0x0895F584u, &recomp_unit_0086, "recomp_unit_0086");
    runtime.register_function(0x0895F58Cu, &recomp_unit_0086, "recomp_unit_0086");
    runtime.register_function(0x0895F590u, &recomp_unit_0086, "recomp_unit_0086");
    runtime.register_function(0x0895F5A4u, &recomp_unit_0086, "recomp_unit_0086");
    runtime.register_function(0x0895F5D4u, &recomp_unit_0086, "recomp_unit_0086");
    runtime.register_function(0x0895F5E0u, &recomp_unit_0086, "recomp_unit_0086");
    runtime.register_function(0x0895F5ECu, &recomp_unit_0086, "recomp_unit_0086");
    runtime.register_function(0x0895F5FCu, &recomp_unit_0086, "recomp_unit_0086");
    runtime.register_function(0x0895F608u, &recomp_unit_0086, "recomp_unit_0086");
    runtime.register_function(0x0895F610u, &recomp_unit_0086, "recomp_unit_0086");
    runtime.register_function(0x0895F61Cu, &recomp_unit_0086, "recomp_unit_0086");
    runtime.register_function(0x0895F624u, &recomp_unit_0086, "recomp_unit_0086");
    runtime.register_function(0x0895F638u, &recomp_unit_0086, "recomp_unit_0086");
    runtime.register_function(0x0895F63Cu, &recomp_unit_0086, "recomp_unit_0086");
    runtime.register_function(0x0895F654u, &recomp_unit_0086, "recomp_unit_0086");
    runtime.register_function(0x0895F660u, &recomp_unit_0086, "recomp_unit_0086");
    runtime.register_function(0x0895F678u, &recomp_unit_0086, "recomp_unit_0086");
    runtime.register_function(0x0895F68Cu, &recomp_unit_0086, "recomp_unit_0086");
    runtime.register_function(0x0895F698u, &recomp_unit_0086, "recomp_unit_0086");
    runtime.register_function(0x0895F6B0u, &recomp_unit_0086, "recomp_unit_0086");
    runtime.register_function(0x0895F6C8u, &recomp_unit_0086, "recomp_unit_0086");
    runtime.register_function(0x0895F6ECu, &recomp_unit_0086, "recomp_unit_0086");
    runtime.register_function(0x0895F704u, &recomp_unit_0086, "recomp_unit_0086");
    runtime.register_function(0x0895F728u, &recomp_unit_0086, "recomp_unit_0086");
    runtime.register_function(0x0895F738u, &recomp_unit_0086, "recomp_unit_0086");
    runtime.register_function(0x0895F748u, &recomp_unit_0086, "recomp_unit_0086");
    runtime.register_function(0x0895F76Cu, &recomp_unit_0086, "recomp_unit_0086");
    runtime.register_function(0x0895F77Cu, &recomp_unit_0086, "recomp_unit_0086");
    runtime.register_function(0x0895F788u, &recomp_unit_0086, "recomp_unit_0086");
    runtime.register_function(0x0895F7B0u, &recomp_unit_0086, "recomp_unit_0086");
    runtime.register_function(0x0895F7D4u, &recomp_unit_0086, "recomp_unit_0086");
    runtime.register_function(0x0895F7F0u, &recomp_unit_0086, "recomp_unit_0086");
    runtime.register_function(0x0895F804u, &recomp_unit_0086, "recomp_unit_0086");
    runtime.register_function(0x0895F830u, &recomp_unit_0086, "recomp_unit_0086");
    runtime.register_function(0x0895F83Cu, &recomp_unit_0086, "recomp_unit_0086");
    runtime.register_function(0x0895F848u, &recomp_unit_0086, "recomp_unit_0086");
    runtime.register_function(0x0895F850u, &recomp_unit_0086, "recomp_unit_0086");
    runtime.register_function(0x0895F854u, &recomp_unit_0086, "recomp_unit_0086");
    runtime.register_function(0x0895F868u, &recomp_unit_0086, "recomp_unit_0086");
    runtime.register_function(0x0895F890u, &recomp_unit_0086, "recomp_unit_0086");
    runtime.register_function(0x0895F89Cu, &recomp_unit_0086, "recomp_unit_0086");
    runtime.register_function(0x0895F8A8u, &recomp_unit_0086, "recomp_unit_0086");
    runtime.register_function(0x0895F8B8u, &recomp_unit_0086, "recomp_unit_0086");
    runtime.register_function(0x0895F8C4u, &recomp_unit_0086, "recomp_unit_0086");
    runtime.register_function(0x0895F8CCu, &recomp_unit_0086, "recomp_unit_0086");
    runtime.register_function(0x0895F8D8u, &recomp_unit_0086, "recomp_unit_0086");
    runtime.register_function(0x0895F8E0u, &recomp_unit_0086, "recomp_unit_0086");
    runtime.register_function(0x0895F8F4u, &recomp_unit_0086, "recomp_unit_0086");
    runtime.register_function(0x0895F8F8u, &recomp_unit_0086, "recomp_unit_0086");
    runtime.register_function(0x0895F910u, &recomp_unit_0086, "recomp_unit_0086");
    runtime.register_function(0x0895F91Cu, &recomp_unit_0086, "recomp_unit_0086");
    runtime.register_function(0x0895F93Cu, &recomp_unit_0086, "recomp_unit_0086");
    runtime.register_function(0x0895F94Cu, &recomp_unit_0086, "recomp_unit_0086");
    runtime.register_function(0x0895F964u, &recomp_unit_0086, "recomp_unit_0086");
    runtime.register_function(0x0895F978u, &recomp_unit_0086, "recomp_unit_0086");
    runtime.register_function(0x0895F984u, &recomp_unit_0086, "recomp_unit_0086");
    runtime.register_function(0x0895F99Cu, &recomp_unit_0086, "recomp_unit_0086");
    runtime.register_function(0x0895F9B4u, &recomp_unit_0086, "recomp_unit_0086");
    runtime.register_function(0x0895F9D8u, &recomp_unit_0086, "recomp_unit_0086");
    runtime.register_function(0x0895F9F0u, &recomp_unit_0086, "recomp_unit_0086");
    runtime.register_function(0x0895FA14u, &recomp_unit_0086, "recomp_unit_0086");
    runtime.register_function(0x0895FA24u, &recomp_unit_0086, "recomp_unit_0086");
    runtime.register_function(0x0895FA34u, &recomp_unit_0086, "recomp_unit_0086");
    runtime.register_function(0x0895FA40u, &recomp_unit_0086, "recomp_unit_0086");
    runtime.register_function(0x0895FA6Cu, &recomp_unit_0086, "recomp_unit_0086");
    runtime.register_function(0x0895FA78u, &recomp_unit_0086, "recomp_unit_0086");
    runtime.register_function(0x0895FA84u, &recomp_unit_0086, "recomp_unit_0086");
    runtime.register_function(0x0895FA8Cu, &recomp_unit_0086, "recomp_unit_0086");
    runtime.register_function(0x0895FA90u, &recomp_unit_0086, "recomp_unit_0086");
    runtime.register_function(0x0895FAA4u, &recomp_unit_0086, "recomp_unit_0086");
    runtime.register_function(0x0895FACCu, &recomp_unit_0086, "recomp_unit_0086");
    runtime.register_function(0x0895FAD8u, &recomp_unit_0086, "recomp_unit_0086");
    runtime.register_function(0x0895FAE4u, &recomp_unit_0086, "recomp_unit_0086");
    runtime.register_function(0x0895FAF4u, &recomp_unit_0086, "recomp_unit_0086");
    runtime.register_function(0x0895FB00u, &recomp_unit_0086, "recomp_unit_0086");
    runtime.register_function(0x0895FB08u, &recomp_unit_0086, "recomp_unit_0086");
    runtime.register_function(0x0895FB14u, &recomp_unit_0086, "recomp_unit_0086");
    runtime.register_function(0x0895FB1Cu, &recomp_unit_0086, "recomp_unit_0086");
    runtime.register_function(0x0895FB30u, &recomp_unit_0086, "recomp_unit_0086");
    runtime.register_function(0x0895FB34u, &recomp_unit_0086, "recomp_unit_0086");
    runtime.register_function(0x0895FB4Cu, &recomp_unit_0086, "recomp_unit_0086");
    runtime.register_function(0x0895FB58u, &recomp_unit_0086, "recomp_unit_0086");
    runtime.register_function(0x0895FB78u, &recomp_unit_0086, "recomp_unit_0086");
    runtime.register_function(0x0895FB80u, &recomp_unit_0086, "recomp_unit_0086");
    runtime.register_function(0x0895FBB0u, &recomp_unit_0086, "recomp_unit_0086");
    runtime.register_function(0x0895FBC8u, &recomp_unit_0086, "recomp_unit_0086");
    runtime.register_function(0x0895FBE8u, &recomp_unit_0086, "recomp_unit_0086");
    runtime.register_function(0x0895FBF0u, &recomp_unit_0086, "recomp_unit_0086");
    runtime.register_function(0x0895FC20u, &recomp_unit_0086, "recomp_unit_0086");
    runtime.register_function(0x0895FC38u, &recomp_unit_0086, "recomp_unit_0086");
    runtime.register_function(0x0895FC44u, &recomp_unit_0086, "recomp_unit_0086");
    runtime.register_function(0x0895FC70u, &recomp_unit_0086, "recomp_unit_0086");
    runtime.register_function(0x0895FC7Cu, &recomp_unit_0086, "recomp_unit_0086");
    runtime.register_function(0x0895FCA4u, &recomp_unit_0086, "recomp_unit_0086");
    runtime.register_function(0x0895FCB0u, &recomp_unit_0086, "recomp_unit_0086");
    runtime.register_function(0x0895FCB4u, &recomp_unit_0086, "recomp_unit_0086");
    runtime.register_function(0x0895FCD0u, &recomp_unit_0086, "recomp_unit_0086");
    runtime.register_function(0x0895FCDCu, &recomp_unit_0086, "recomp_unit_0086");
    runtime.register_function(0x0895FCE0u, &recomp_unit_0086, "recomp_unit_0086");
    runtime.register_function(0x0895FCECu, &recomp_unit_0086, "recomp_unit_0086");
    runtime.register_function(0x0895FCF8u, &recomp_unit_0086, "recomp_unit_0086");
    runtime.register_function(0x0895FD28u, &recomp_unit_0086, "recomp_unit_0086");
    runtime.register_function(0x0895FD30u, &recomp_unit_0086, "recomp_unit_0086");
    runtime.register_function(0x0895FD34u, &recomp_unit_0086, "recomp_unit_0086");
    runtime.register_function(0x0895FD4Cu, &recomp_unit_0086, "recomp_unit_0086");
    runtime.register_function(0x0895FD60u, &recomp_unit_0086, "recomp_unit_0086");
    runtime.register_function(0x0895FD70u, &recomp_unit_0086, "recomp_unit_0086");
    runtime.register_function(0x0895FD78u, &recomp_unit_0086, "recomp_unit_0086");
    runtime.register_function(0x0895FD80u, &recomp_unit_0086, "recomp_unit_0086");
    runtime.register_function(0x0895FD98u, &recomp_unit_0086, "recomp_unit_0086");
    runtime.register_function(0x0895FDA8u, &recomp_unit_0086, "recomp_unit_0086");
    runtime.register_function(0x0895FDB8u, &recomp_unit_0086, "recomp_unit_0086");
    runtime.register_function(0x0895FDD4u, &recomp_unit_0086, "recomp_unit_0086");
    runtime.register_function(0x0895FDE0u, &recomp_unit_0086, "recomp_unit_0086");
    runtime.register_function(0x0895FDF0u, &recomp_unit_0086, "recomp_unit_0086");
    runtime.register_function(0x0895FDF8u, &recomp_unit_0086, "recomp_unit_0086");
    runtime.register_function(0x0895FE10u, &recomp_unit_0086, "recomp_unit_0086");
    runtime.register_function(0x0895FE24u, &recomp_unit_0086, "recomp_unit_0086");
    runtime.register_function(0x0895FE9Cu, &recomp_unit_0086, "recomp_unit_0086");
    runtime.register_function(0x0895FEB0u, &recomp_unit_0086, "recomp_unit_0086");
    runtime.register_function(0x0895FEBCu, &recomp_unit_0086, "recomp_unit_0086");
    runtime.register_function(0x0895FF8Cu, &recomp_unit_0086, "recomp_unit_0086");
    runtime.register_function(0x0895FFCCu, &recomp_unit_0086, "recomp_unit_0086");
}
} // namespace psprecomp
