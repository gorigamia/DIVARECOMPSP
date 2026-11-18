#include "psprecomp/runtime.hpp"
#include "generated_units.hpp"
#include <bit>
#include <cmath>
#include <cstdint>
#include <limits>

namespace psprecomp {
static const std::uint16_t kEntryIds_recomp_unit_0150[4087] = {
    1, 0, 0, 0, 0, 2, 0, 0, 0, 0, 0, 0, 3, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 4, 0, 5, 0, 0, 0, 0,
    6, 0, 0, 0, 7, 0, 0, 0, 0, 8, 0, 0, 0, 0, 9, 0, 0, 0, 10, 0, 0, 0, 0, 11, 0, 0, 0, 0, 12, 0, 0, 0,
    0, 13, 0, 0, 0, 0, 14, 0, 0, 0, 15, 0, 0, 0, 0, 16, 0, 0, 0, 0, 17, 0, 0, 0, 0, 18, 0, 0, 0, 0, 19, 0,
    0, 0, 20, 0, 0, 0, 0, 21, 0, 0, 0, 0, 22, 0, 0, 0, 23, 0, 0, 0, 0, 24, 0, 0, 0, 0, 0, 0, 0, 25, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 26, 0, 0, 27, 0, 0, 28, 0, 0, 0, 0, 29, 0, 30, 0, 0, 0, 0, 31, 0, 0,
    0, 0, 0, 0, 32, 0, 0, 0, 0, 0, 0, 0, 0, 0, 33, 0, 0, 34, 0, 0, 35, 36, 0, 37, 0, 0, 0, 0, 0, 38, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 39, 0, 0, 0, 40, 0, 0, 0, 41, 0, 0, 0, 42, 0, 0, 0, 0, 0, 43, 0, 0, 0, 44,
    0, 0, 0, 0, 45, 0, 0, 0, 0, 46, 0, 0, 0, 0, 47, 0, 0, 0, 48, 0, 0, 0, 49, 0, 0, 50, 0, 0, 0, 51, 0, 0,
    0, 52, 0, 0, 0, 53, 0, 0, 0, 54, 0, 0, 55, 0, 0, 0, 56, 0, 0, 0, 57, 0, 0, 0, 58, 0, 0, 0, 0, 59, 0, 0,
    0, 60, 0, 0, 0, 61, 0, 0, 0, 0, 62, 0, 0, 0, 0, 63, 0, 0, 64, 0, 0, 65, 0, 0, 66, 0, 0, 0, 67, 0, 0, 0,
    68, 0, 0, 0, 69, 0, 0, 0, 0, 0, 70, 0, 0, 0, 0, 71, 0, 0, 0, 0, 72, 0, 0, 0, 0, 73, 0, 0, 0, 0, 74, 0,
    0, 0, 75, 0, 0, 0, 0, 76, 0, 0, 0, 77, 0, 0, 0, 78, 0, 0, 0, 0, 79, 0, 0, 0, 0, 0, 80, 0, 0, 0, 0, 81,
    0, 0, 0, 82, 0, 0, 0, 83, 0, 0, 0, 0, 84, 0, 0, 0, 85, 0, 0, 0, 0, 86, 0, 0, 0, 0, 87, 0, 0, 0, 0, 88,
    0, 0, 0, 0, 89, 0, 0, 0, 90, 0, 0, 0, 91, 0, 0, 0, 92, 0, 0, 93, 94, 0, 0, 0, 0, 0, 0, 95, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 96, 0, 0, 0, 97, 0, 0, 0, 0, 98, 0, 0, 0, 99, 0, 0, 100, 0, 0, 0, 0, 0, 101, 0, 0, 0,
    0, 0, 0, 0, 0, 102, 0, 0, 0, 0, 103, 0, 0, 0, 0, 104, 0, 0, 0, 0, 0, 105, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    106, 0, 0, 107, 108, 0, 0, 109, 0, 0, 0, 0, 0, 0, 0, 110, 111, 0, 0, 112, 0, 0, 0, 0, 0, 0, 0, 113, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 114, 0, 115, 0, 0, 0, 0, 0, 116, 0, 117, 0, 0, 0, 0, 0, 118, 0, 0, 0, 119, 0, 0, 0, 0, 0,
    120, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 121, 0, 0, 0, 0, 0, 122, 0, 0, 0, 0, 123, 0, 0, 0, 0, 0, 0, 0, 124, 125, 0, 0, 126, 0, 0, 0, 0, 127, 0,
    0, 0, 0, 128, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 129, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 130, 0, 0, 0, 0,
    131, 0, 0, 0, 0, 132, 0, 0, 133, 0, 0, 0, 0, 0, 0, 0, 0, 134, 0, 0, 0, 0, 0, 0, 0, 0, 135, 0, 0, 0, 0, 0,
    136, 0, 0, 0, 0, 137, 0, 0, 0, 0, 0, 0, 138, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 139, 0, 0, 140, 0, 0, 0, 0, 0, 0, 0, 0, 141, 0, 142, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    143, 0, 0, 0, 0, 0, 144, 0, 0, 0, 0, 0, 145, 0, 0, 0, 0, 0, 0, 146, 0, 0, 0, 0, 0, 147, 0, 0, 0, 0, 0, 148,
    0, 0, 0, 0, 0, 0, 0, 0, 149, 0, 150, 0, 0, 151, 0, 152, 0, 0, 153, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 154, 0, 0, 0, 155, 0, 0, 0, 156, 0, 0, 0, 0, 0, 157, 0, 0, 0, 0, 0, 0, 0, 158, 0, 0, 159, 0, 0, 0, 160,
    0, 0, 0, 0, 0, 0, 0, 161, 162, 0, 0, 163, 0, 0, 0, 164, 0, 0, 0, 0, 0, 0, 165, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 166, 0, 0, 0, 167, 0, 0, 0, 168, 0, 0, 0, 169, 0, 0, 170, 0, 0, 0, 0, 171, 0, 172, 0, 173, 174, 0, 175, 0, 0,
    0, 0, 176, 0, 0, 0, 0, 177, 0, 178, 0, 179, 180, 0, 181, 0, 0, 0, 0, 182, 183, 0, 0, 184, 0, 0, 0, 0, 185, 0, 186, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 187, 0, 0, 0, 0, 0, 0, 0, 0, 188, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 189, 0, 0, 0, 0, 0, 190, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 191, 0, 0, 0, 192, 0, 0, 0, 0, 193, 0,
    0, 0, 0, 194, 0, 0, 195, 0, 0, 0, 0, 0, 0, 0, 0, 196, 0, 0, 0, 0, 0, 0, 0, 0, 197, 0, 0, 0, 0, 198, 0, 0,
    0, 0, 0, 199, 0, 0, 0, 0, 0, 200, 0, 0, 0, 0, 0, 0, 0, 0, 0, 201, 0, 0, 202, 0, 0, 203, 0, 0, 204, 0, 0, 0,
    0, 205, 0, 0, 0, 0, 0, 206, 0, 0, 0, 207, 0, 0, 208, 0, 0, 209, 0, 0, 0, 210, 0, 0, 211, 0, 0, 212, 0, 213, 0, 0,
    214, 0, 0, 0, 0, 0, 215, 0, 0, 0, 0, 216, 0, 217, 0, 0, 0, 218, 0, 0, 219, 0, 0, 0, 220, 221, 0, 0, 0, 0, 0, 0,
    222, 0, 0, 0, 0, 223, 0, 0, 0, 224, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 225, 0, 226, 0, 0, 227, 0, 0, 0,
    0, 228, 0, 0, 0, 0, 0, 0, 229, 0, 0, 0, 230, 0, 0, 0, 231, 0, 0, 0, 0, 0, 232, 0, 0, 0, 0, 233, 0, 0, 0, 234,
    0, 235, 0, 236, 0, 0, 0, 0, 237, 0, 0, 0, 238, 0, 0, 0, 0, 0, 239, 0, 0, 240, 0, 0, 0, 0, 241, 0, 242, 0, 0, 0,
    0, 0, 0, 0, 243, 0, 0, 244, 0, 0, 245, 0, 0, 0, 246, 0, 0, 0, 0, 0, 0, 0, 247, 248, 0, 0, 249, 0, 0, 0, 250, 0,
    0, 0, 0, 0, 0, 251, 0, 0, 0, 252, 0, 0, 253, 0, 0, 254, 0, 0, 0, 255, 0, 0, 256, 0, 0, 257, 0, 0, 0, 258, 0, 0,
    259, 0, 0, 260, 0, 0, 0, 261, 0, 0, 262, 0, 0, 263, 0, 0, 0, 264, 0, 0, 265, 0, 0, 266, 0, 0, 0, 267, 0, 0, 268, 0,
    0, 269, 0, 0, 0, 270, 0, 0, 271, 0, 0, 272, 0, 0, 0, 273, 0, 0, 274, 0, 0, 275, 0, 0, 0, 276, 0, 0, 277, 0, 0, 278,
    0, 0, 0, 279, 0, 0, 280, 0, 0, 281, 0, 0, 0, 282, 0, 0, 283, 0, 0, 284, 0, 0, 0, 285, 0, 0, 286, 0, 0, 287, 0, 0,
    0, 288, 0, 0, 289, 0, 0, 290, 0, 0, 0, 291, 0, 0, 292, 0, 0, 293, 0, 0, 0, 294, 0, 0, 295, 0, 0, 296, 0, 0, 0, 297,
    0, 0, 298, 0, 0, 299, 0, 0, 0, 300, 0, 0, 301, 0, 0, 302, 0, 0, 0, 303, 0, 0, 304, 0, 0, 305, 0, 0, 0, 306, 0, 0,
    307, 0, 0, 308, 0, 0, 0, 309, 0, 0, 310, 0, 0, 311, 0, 0, 0, 312, 0, 0, 313, 0, 0, 314, 0, 0, 0, 315, 0, 0, 316, 0,
    0, 317, 0, 0, 0, 318, 0, 0, 319, 0, 0, 320, 0, 0, 0, 321, 0, 0, 322, 0, 0, 323, 0, 0, 0, 324, 0, 0, 325, 0, 0, 326,
    0, 0, 0, 327, 0, 0, 328, 0, 0, 329, 0, 0, 0, 330, 0, 0, 331, 0, 0, 332, 0, 0, 0, 333, 0, 0, 334, 0, 0, 335, 0, 0,
    0, 336, 0, 0, 337, 0, 0, 338, 0, 0, 0, 339, 0, 0, 340, 0, 0, 341, 0, 0, 0, 342, 0, 0, 343, 0, 0, 344, 0, 0, 0, 345,
    0, 0, 346, 0, 0, 347, 0, 0, 0, 348, 0, 0, 349, 0, 0, 350, 0, 0, 0, 351, 0, 0, 352, 0, 0, 353, 0, 0, 0, 354, 0, 0,
    355, 0, 0, 356, 0, 0, 0, 0, 0, 357, 0, 0, 0, 0, 0, 358, 0, 0, 0, 0, 0, 0, 359, 0, 360, 0, 361, 0, 0, 0, 362, 0,
    0, 0, 0, 0, 0, 363, 0, 364, 0, 365, 0, 0, 0, 366, 0, 0, 0, 0, 0, 0, 367, 0, 368, 0, 369, 0, 0, 0, 370, 0, 0, 0,
    0, 0, 0, 371, 0, 372, 0, 373, 0, 0, 0, 374, 0, 0, 0, 0, 0, 0, 375, 0, 376, 0, 377, 0, 0, 0, 378, 0, 0, 0, 0, 0,
    0, 379, 0, 380, 0, 381, 0, 0, 0, 382, 0, 0, 0, 0, 0, 0, 383, 0, 384, 0, 385, 0, 0, 0, 386, 0, 0, 0, 0, 0, 0, 387,
    0, 388, 0, 389, 0, 0, 0, 390, 0, 0, 0, 0, 0, 0, 391, 0, 392, 0, 393, 0, 0, 0, 394, 0, 0, 0, 0, 0, 0, 395, 0, 396,
    0, 397, 0, 0, 0, 398, 0, 0, 0, 0, 0, 0, 399, 0, 400, 0, 401, 0, 0, 0, 402, 0, 0, 0, 0, 0, 0, 403, 0, 404, 0, 405,
    0, 0, 0, 406, 0, 0, 0, 0, 0, 0, 407, 0, 408, 0, 409, 0, 0, 0, 410, 0, 0, 0, 0, 0, 0, 411, 0, 412, 0, 413, 0, 0,
    0, 414, 0, 0, 0, 0, 0, 0, 415, 0, 416, 0, 417, 0, 0, 0, 418, 0, 0, 0, 0, 0, 0, 419, 0, 420, 0, 421, 0, 0, 0, 422,
    0, 0, 0, 0, 0, 0, 423, 0, 424, 0, 425, 0, 0, 0, 426, 0, 0, 0, 0, 0, 0, 427, 0, 428, 0, 429, 0, 0, 0, 430, 0, 0,
    0, 0, 0, 0, 431, 0, 432, 0, 433, 0, 0, 0, 434, 0, 0, 0, 0, 0, 0, 435, 0, 436, 0, 437, 0, 0, 0, 438, 0, 0, 0, 0,
    0, 0, 439, 0, 440, 0, 441, 0, 0, 0, 442, 0, 0, 0, 0, 0, 0, 443, 0, 444, 0, 445, 0, 0, 0, 446, 0, 0, 0, 0, 0, 0,
    447, 0, 448, 0, 449, 0, 0, 0, 450, 0, 0, 0, 0, 0, 0, 451, 0, 452, 0, 453, 0, 0, 0, 454, 0, 0, 0, 0, 0, 0, 455, 0,
    456, 0, 457, 0, 0, 0, 458, 0, 0, 0, 0, 0, 0, 459, 0, 460, 0, 461, 0, 0, 0, 462, 0, 0, 0, 0, 0, 0, 463, 0, 464, 0,
    465, 0, 0, 0, 466, 0, 0, 0, 0, 0, 0, 467, 0, 468, 0, 469, 0, 0, 0, 470, 0, 0, 0, 0, 0, 0, 471, 0, 472, 0, 473, 0,
    0, 0, 474, 0, 0, 0, 0, 0, 0, 475, 0, 476, 0, 477, 0, 0, 0, 478, 0, 0, 0, 0, 0, 0, 479, 0, 480, 0, 481, 0, 0, 0,
    482, 0, 0, 0, 0, 0, 0, 483, 0, 484, 0, 485, 0, 0, 0, 486, 0, 0, 0, 0, 0, 0, 487, 0, 488, 0, 489, 0, 0, 0, 490, 0,
    0, 0, 0, 0, 0, 491, 0, 492, 0, 493, 0, 0, 0, 494, 0, 0, 0, 0, 0, 0, 495, 0, 496, 0, 497, 0, 0, 0, 498, 0, 0, 0,
    0, 0, 0, 499, 0, 500, 0, 501, 0, 0, 0, 502, 0, 0, 0, 0, 0, 0, 503, 0, 504, 0, 505, 0, 0, 0, 506, 0, 0, 0, 0, 0,
    0, 507, 0, 508, 0, 509, 0, 0, 0, 510, 0, 0, 0, 0, 0, 0, 511, 0, 512, 0, 513, 0, 0, 0, 514, 0, 0, 0, 0, 0, 0, 515,
    0, 516, 0, 517, 0, 0, 0, 518, 0, 0, 0, 0, 0, 0, 519, 0, 520, 0, 521, 0, 0, 0, 522, 0, 0, 0, 0, 0, 0, 523, 0, 524,
    0, 525, 0, 0, 0, 526, 0, 0, 0, 0, 0, 0, 527, 0, 528, 0, 529, 0, 0, 0, 530, 0, 0, 0, 0, 0, 0, 531, 0, 532, 0, 533,
    0, 0, 0, 534, 0, 0, 0, 0, 0, 0, 535, 0, 536, 0, 537, 0, 0, 0, 538, 0, 0, 0, 0, 0, 0, 539, 0, 540, 0, 541, 0, 0,
    0, 542, 0, 0, 0, 0, 0, 0, 543, 0, 544, 0, 545, 0, 0, 0, 546, 0, 0, 0, 0, 0, 0, 547, 0, 548, 0, 549, 0, 0, 0, 550,
    0, 0, 0, 0, 0, 0, 0, 551, 0, 0, 0, 552, 0, 553, 0, 554, 0, 0, 0, 555, 0, 556, 0, 0, 0, 0, 0, 0, 557, 0, 558, 0,
    559, 0, 0, 0, 560, 0, 561, 0, 0, 0, 0, 0, 0, 562, 0, 563, 0, 564, 0, 0, 565, 0, 0, 0, 0, 566, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 567, 0, 0, 568, 569, 0, 0, 570, 0, 0, 0, 0, 0, 0, 0, 571, 572, 0, 0, 573, 0, 0, 0, 0, 0, 0, 0, 574,
    0, 0, 0, 0, 0, 0, 575, 0, 0, 0, 576, 0, 0, 0, 0, 0, 0, 0, 577, 0, 578, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 579,
    0, 0, 0, 0, 0, 0, 0, 0, 580, 0, 0, 0, 0, 0, 0, 581, 0, 0, 0, 0, 0, 582, 0, 0, 583, 0, 0, 0, 584, 0, 585, 0,
    586, 587, 0, 0, 0, 588, 0, 0, 0, 589, 0, 590, 0, 591, 0, 592, 0, 0, 0, 593, 0, 0, 0, 0, 0, 0, 0, 594, 0, 595, 0, 0,
    596, 0, 0, 0, 0, 0, 597, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 598, 0, 0, 0, 0, 0, 599, 0, 0, 0, 0, 0, 0, 600, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 601, 0, 0, 0, 0, 0, 0, 0, 0, 0, 602, 0, 0, 0, 0, 0, 0, 603, 0, 0, 604,
    0, 0, 0, 0, 605, 0, 0, 0, 0, 0, 0, 0, 0, 606, 607, 0, 0, 608, 0, 0, 609, 0, 610, 611, 0, 0, 0, 0, 612, 0, 0, 0,
    0, 0, 0, 0, 613, 0, 0, 0, 0, 0, 614, 0, 0, 0, 0, 615, 0, 0, 0, 0, 616, 0, 0, 617, 0, 0, 618, 0, 0, 619, 0, 0,
    620, 0, 0, 0, 0, 621, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 622, 0, 0, 0, 623, 0, 0, 0, 0, 624, 0, 625, 0, 0, 0, 0,
    0, 0, 0, 626, 0, 627, 0, 0, 0, 0, 628, 629, 0, 0, 630, 0, 0, 0, 0, 0, 0, 0, 631, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 632, 0, 0, 0, 633, 0, 0, 0, 634, 0, 0, 0, 0, 0, 0, 635, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 636, 0, 0, 0,
    0, 0, 637, 0, 638, 639, 0, 0, 640, 0, 0, 0, 641, 0, 0, 0, 0, 642, 0, 0, 643, 0, 0, 0, 0, 0, 644, 0, 0, 0, 0, 0,
    645, 0, 646, 647, 0, 0, 648, 0, 0, 0, 649, 0, 0, 0, 0, 650, 0, 0, 651, 0, 0, 0, 0, 0, 652, 0, 0, 0, 0, 0, 653, 0,
    654, 655, 0, 0, 656, 0, 0, 0, 657, 0, 0, 0, 0, 658, 0, 0, 659, 0, 0, 0, 0, 660, 0, 0, 0, 0, 0, 0, 0, 661, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 662, 0, 663, 0, 0, 0, 0, 0, 664, 0, 665, 0, 0, 0, 0, 666, 0, 0, 0, 0, 0, 667, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 668, 0, 669, 0, 0, 0, 0, 0, 670, 0, 671, 0, 0, 0, 0, 672, 0, 0, 0, 0, 0, 673, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 674, 0, 675, 0, 0, 0, 0, 0, 676, 0, 677, 0, 0, 0, 0, 678, 0, 0, 0, 0, 0, 679, 0, 0, 0, 0, 0,
    680, 0, 0, 0, 0, 0, 681, 0, 682, 0, 0, 683, 0, 0, 0, 0, 684, 0, 0, 0, 0, 0, 0, 0, 685, 0, 0, 686, 0, 0, 0, 0,
    0, 687, 0, 0, 0, 0, 0, 0, 0, 688, 0, 0, 0, 0, 689, 0, 0, 690, 0, 691, 0, 0, 0, 0, 0, 0, 692, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 693, 0, 694, 0, 0, 0, 0, 0, 695, 0, 0, 0, 0, 0, 0, 0, 696, 0, 0, 0, 0, 0, 0,
    697, 0, 698, 0, 0, 699, 0, 0, 700, 0, 0, 0, 701, 0, 0, 702, 0, 0, 0, 0, 703, 0, 0, 0, 704, 0, 0, 0, 705, 0, 0, 0,
    706, 0, 0, 707, 0, 708, 0, 0, 709, 0, 710, 0, 0, 0, 0, 0, 0, 0, 711, 0, 0, 0, 712, 0, 0, 713, 0, 714, 0, 0, 0, 0,
    715, 0, 0, 716, 0, 0, 0, 717, 0, 0, 0, 718, 0, 719, 0, 0, 0, 720, 0, 721, 0, 0, 722, 0, 0, 723, 0, 0, 0, 0, 0, 724,
    0, 725, 0, 0, 0, 0, 0, 726, 0, 0, 0, 727, 0, 0, 728, 0, 729, 0, 0, 730, 0, 731, 0, 0, 0, 732, 0, 0, 0, 733, 0, 0,
    0, 0, 0, 734, 0, 0, 0, 0, 735, 0, 0, 736, 0, 737, 0, 0, 0, 738, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 739,
    0, 0, 740, 0, 0, 741, 0, 0, 0, 0, 0, 0, 0, 0, 742, 0, 0, 743, 0, 0, 0, 0, 744, 0, 745, 0, 746, 0, 0, 0, 0, 747,
    748, 0, 0, 0, 0, 0, 0, 749, 0, 0, 0, 0, 0, 0, 0, 750, 0, 751, 0, 752, 753, 0, 0, 0, 754, 0, 0, 0, 0, 0, 755, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 756, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 757, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 758, 0, 0, 0, 759, 0, 760, 0, 0, 0, 761, 0, 0, 0, 0,
    762, 763, 0, 0, 0, 764, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 765, 0, 0, 0, 0, 0, 766, 0, 0, 0, 767, 0, 0, 768, 0,
    0, 769, 0, 0, 770, 0, 0, 0, 0, 0, 0, 771, 0, 0, 772, 0, 0, 773, 774, 0, 0, 0, 775, 0, 0, 0, 0, 0, 0, 0, 776, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 777, 0, 0, 0, 0, 0, 0, 0, 0, 0, 778, 0, 779, 0, 0, 780, 0, 0, 781,
    0, 0, 0, 782, 0, 783, 0, 0, 0, 0, 784, 785, 0, 786, 787, 0, 0, 0, 788, 0, 789, 0, 790, 0, 0, 791, 792, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 793, 0, 0, 0, 0, 0, 0, 0, 0, 0, 794, 0, 0, 0, 0, 0, 0, 795, 0, 0, 0, 796, 0, 0, 0,
    0, 0, 0, 0, 797, 0, 0, 0, 0, 798, 0, 0, 0, 799, 0, 800, 0, 0, 801, 0, 0, 802, 0, 0, 803, 0, 0, 0, 804, 0, 0, 0,
    0, 805, 0, 0, 0, 0, 0, 0, 806, 0, 0, 0, 0, 0, 0, 0, 0, 0, 807, 0, 0, 0, 0, 808, 0, 0, 0, 0, 809, 0, 0, 0,
    0, 0, 0, 810, 0, 0, 0, 0, 0, 0, 811, 0, 812, 0, 0, 0, 0, 0, 0, 0, 0, 0, 813, 0, 0, 0, 814, 0, 0, 0, 0, 815,
    0, 0, 0, 816, 0, 0, 0, 0, 817, 0, 0, 0, 818, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 819, 0, 0,
    0, 0, 0, 820, 0, 821, 0, 0, 0, 0, 0, 822, 0, 0, 0, 0, 0, 0, 0, 0, 823, 0, 824, 0, 0, 825, 0, 0, 826, 827, 0, 0,
    828, 0, 0, 829, 0, 0, 0, 830, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 831, 0, 832, 0, 0, 0, 833, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 834, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 835, 0, 0, 0, 0, 836, 0, 0, 0, 0, 837, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 838, 0, 0, 0, 839, 0, 0, 0, 840, 0, 0, 0, 0, 841, 0, 842, 0, 0, 843, 844, 0, 0, 845, 846,
    0, 0, 0, 0, 0, 0, 0, 0, 847, 0, 0, 0, 0, 0, 0, 0, 0, 0, 848, 0, 0, 0, 849, 0, 0, 0, 850, 0, 0, 0, 851, 0,
    852, 0, 0, 0, 853, 0, 0, 854, 855, 0, 0, 856, 857, 0, 0, 0, 0, 0, 0, 0, 858, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 859, 0, 0, 0, 0, 860, 0, 0, 0, 861, 0, 0, 862, 0, 0, 0, 0, 0, 0, 0, 863, 0, 0,
    0, 0, 0, 864, 0, 865, 0, 0, 0, 0, 0, 0, 0, 866, 0, 0, 0, 867, 0, 0, 0, 0, 0, 0, 868, 869, 870, 0, 0, 0, 871, 0,
    872, 0, 0, 873, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 874, 0, 0, 875, 0, 0, 0, 0, 0, 0, 0, 876, 0, 0, 0, 0, 0, 0,
    877, 0, 0, 0, 0, 0, 0, 878, 0, 0, 0, 0, 0, 879, 0, 0, 0, 880, 0, 0, 0, 881, 0, 0, 0, 882, 0, 0, 0, 883, 0, 0,
    0, 884, 0, 885, 0, 886, 0, 0, 0, 887, 0, 888, 0, 0, 889, 0, 0, 0, 0, 890, 891, 0, 0, 0, 892, 0, 0, 0, 893, 0, 0, 0,
    0, 0, 0, 894, 0, 895, 0, 0, 0, 0, 896, 0, 0, 0, 0, 897, 0, 0, 0, 0, 0, 0, 898, 899, 900, 0, 0, 0, 901, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 902, 0, 0, 0, 0, 0, 0, 0, 0, 0, 903, 0, 0, 0, 0, 0, 0, 0, 0, 904, 0, 905, 0,
    906, 0, 0, 907, 0, 908, 0, 0, 909, 910, 0, 0, 0, 0, 911, 912, 0, 0, 0, 0, 0, 0, 913,
};
void recomp_unit_0150_entry(Runtime &rt, AllegrexContext &ctx, std::uint16_t direct_entry_id, GuestMemory::AotFastView &aot_mem) {
    std::uint32_t jump_target = 0u;
    std::uint32_t local_transfers = 0u;
    std::uint32_t local_pc = ctx.pc;
    std::uint32_t entry_id = direct_entry_id;
LOCAL_DISPATCH:
    {
    if (entry_id == 0u) {
        const std::uint32_t entry_delta = local_pc - 0x08A5C000u;
        entry_id = (entry_delta < 16348u && (entry_delta & 3u) == 0u) ? kEntryIds_recomp_unit_0150[entry_delta >> 2u] : 0u;
    }
    switch (entry_id) {
    case 1u: goto L_08A5C000;
    case 2u: goto L_08A5C014;
    case 3u: goto L_08A5C030;
    case 4u: goto L_08A5C064;
    case 5u: goto L_08A5C06C;
    case 6u: goto L_08A5C080;
    case 7u: goto L_08A5C090;
    case 8u: goto L_08A5C0A4;
    case 9u: goto L_08A5C0B8;
    case 10u: goto L_08A5C0C8;
    case 11u: goto L_08A5C0DC;
    case 12u: goto L_08A5C0F0;
    case 13u: goto L_08A5C104;
    case 14u: goto L_08A5C118;
    case 15u: goto L_08A5C128;
    case 16u: goto L_08A5C13C;
    case 17u: goto L_08A5C150;
    case 18u: goto L_08A5C164;
    case 19u: goto L_08A5C178;
    case 20u: goto L_08A5C188;
    case 21u: goto L_08A5C19C;
    case 22u: goto L_08A5C1B0;
    case 23u: goto L_08A5C1C0;
    case 24u: goto L_08A5C1D4;
    case 25u: goto L_08A5C1F4;
    case 26u: goto L_08A5C22C;
    case 27u: goto L_08A5C238;
    case 28u: goto L_08A5C244;
    case 29u: goto L_08A5C258;
    case 30u: goto L_08A5C260;
    case 31u: goto L_08A5C274;
    case 32u: goto L_08A5C290;
    case 33u: goto L_08A5C2B8;
    case 34u: goto L_08A5C2C4;
    case 35u: goto L_08A5C2D0;
    case 36u: goto L_08A5C2D4;
    case 37u: goto L_08A5C2DC;
    case 38u: goto L_08A5C2F4;
    case 39u: goto L_08A5C324;
    case 40u: goto L_08A5C334;
    case 41u: goto L_08A5C344;
    case 42u: goto L_08A5C354;
    case 43u: goto L_08A5C36C;
    case 44u: goto L_08A5C37C;
    case 45u: goto L_08A5C390;
    case 46u: goto L_08A5C3A4;
    case 47u: goto L_08A5C3B8;
    case 48u: goto L_08A5C3C8;
    case 49u: goto L_08A5C3D8;
    case 50u: goto L_08A5C3E4;
    case 51u: goto L_08A5C3F4;
    case 52u: goto L_08A5C404;
    case 53u: goto L_08A5C414;
    case 54u: goto L_08A5C424;
    case 55u: goto L_08A5C430;
    case 56u: goto L_08A5C440;
    case 57u: goto L_08A5C450;
    case 58u: goto L_08A5C460;
    case 59u: goto L_08A5C474;
    case 60u: goto L_08A5C484;
    case 61u: goto L_08A5C494;
    case 62u: goto L_08A5C4A8;
    case 63u: goto L_08A5C4BC;
    case 64u: goto L_08A5C4C8;
    case 65u: goto L_08A5C4D4;
    case 66u: goto L_08A5C4E0;
    case 67u: goto L_08A5C4F0;
    case 68u: goto L_08A5C500;
    case 69u: goto L_08A5C510;
    case 70u: goto L_08A5C528;
    case 71u: goto L_08A5C53C;
    case 72u: goto L_08A5C550;
    case 73u: goto L_08A5C564;
    case 74u: goto L_08A5C578;
    case 75u: goto L_08A5C588;
    case 76u: goto L_08A5C59C;
    case 77u: goto L_08A5C5AC;
    case 78u: goto L_08A5C5BC;
    case 79u: goto L_08A5C5D0;
    case 80u: goto L_08A5C5E8;
    case 81u: goto L_08A5C5FC;
    case 82u: goto L_08A5C60C;
    case 83u: goto L_08A5C61C;
    case 84u: goto L_08A5C630;
    case 85u: goto L_08A5C640;
    case 86u: goto L_08A5C654;
    case 87u: goto L_08A5C668;
    case 88u: goto L_08A5C67C;
    case 89u: goto L_08A5C690;
    case 90u: goto L_08A5C6A0;
    case 91u: goto L_08A5C6B0;
    case 92u: goto L_08A5C6C0;
    case 93u: goto L_08A5C6CC;
    case 94u: goto L_08A5C6D0;
    case 95u: goto L_08A5C6EC;
    case 96u: goto L_08A5C718;
    case 97u: goto L_08A5C728;
    case 98u: goto L_08A5C73C;
    case 99u: goto L_08A5C74C;
    case 100u: goto L_08A5C758;
    case 101u: goto L_08A5C770;
    case 102u: goto L_08A5C794;
    case 103u: goto L_08A5C7A8;
    case 104u: goto L_08A5C7BC;
    case 105u: goto L_08A5C7D4;
    case 106u: goto L_08A5C800;
    case 107u: goto L_08A5C80C;
    case 108u: goto L_08A5C810;
    case 109u: goto L_08A5C81C;
    case 110u: goto L_08A5C83C;
    case 111u: goto L_08A5C840;
    case 112u: goto L_08A5C84C;
    case 113u: goto L_08A5C86C;
    case 114u: goto L_08A5C898;
    case 115u: goto L_08A5C8A0;
    case 116u: goto L_08A5C8B8;
    case 117u: goto L_08A5C8C0;
    case 118u: goto L_08A5C8D8;
    case 119u: goto L_08A5C8E8;
    case 120u: goto L_08A5C900;
    case 121u: goto L_08A5C988;
    case 122u: goto L_08A5C9A0;
    case 123u: goto L_08A5C9B4;
    case 124u: goto L_08A5C9D4;
    case 125u: goto L_08A5C9D8;
    case 126u: goto L_08A5C9E4;
    case 127u: goto L_08A5C9F8;
    case 128u: goto L_08A5CA0C;
    case 129u: goto L_08A5CA40;
    case 130u: goto L_08A5CA6C;
    case 131u: goto L_08A5CA80;
    case 132u: goto L_08A5CA94;
    case 133u: goto L_08A5CAA0;
    case 134u: goto L_08A5CAC4;
    case 135u: goto L_08A5CAE8;
    case 136u: goto L_08A5CB00;
    case 137u: goto L_08A5CB14;
    case 138u: goto L_08A5CB30;
    case 139u: goto L_08A5CB90;
    case 140u: goto L_08A5CB9C;
    case 141u: goto L_08A5CBC0;
    case 142u: goto L_08A5CBC8;
    case 143u: goto L_08A5CC00;
    case 144u: goto L_08A5CC18;
    case 145u: goto L_08A5CC30;
    case 146u: goto L_08A5CC4C;
    case 147u: goto L_08A5CC64;
    case 148u: goto L_08A5CC7C;
    case 149u: goto L_08A5CCA0;
    case 150u: goto L_08A5CCA8;
    case 151u: goto L_08A5CCB4;
    case 152u: goto L_08A5CCBC;
    case 153u: goto L_08A5CCC8;
    case 154u: goto L_08A5CD08;
    case 155u: goto L_08A5CD18;
    case 156u: goto L_08A5CD28;
    case 157u: goto L_08A5CD40;
    case 158u: goto L_08A5CD60;
    case 159u: goto L_08A5CD6C;
    case 160u: goto L_08A5CD7C;
    case 161u: goto L_08A5CD9C;
    case 162u: goto L_08A5CDA0;
    case 163u: goto L_08A5CDAC;
    case 164u: goto L_08A5CDBC;
    case 165u: goto L_08A5CDD8;
    case 166u: goto L_08A5CE08;
    case 167u: goto L_08A5CE18;
    case 168u: goto L_08A5CE28;
    case 169u: goto L_08A5CE38;
    case 170u: goto L_08A5CE44;
    case 171u: goto L_08A5CE58;
    case 172u: goto L_08A5CE60;
    case 173u: goto L_08A5CE68;
    case 174u: goto L_08A5CE6C;
    case 175u: goto L_08A5CE74;
    case 176u: goto L_08A5CE88;
    case 177u: goto L_08A5CE9C;
    case 178u: goto L_08A5CEA4;
    case 179u: goto L_08A5CEAC;
    case 180u: goto L_08A5CEB0;
    case 181u: goto L_08A5CEB8;
    case 182u: goto L_08A5CECC;
    case 183u: goto L_08A5CED0;
    case 184u: goto L_08A5CEDC;
    case 185u: goto L_08A5CEF0;
    case 186u: goto L_08A5CEF8;
    case 187u: goto L_08A5CF20;
    case 188u: goto L_08A5CF44;
    case 189u: goto L_08A5CF84;
    case 190u: goto L_08A5CF9C;
    case 191u: goto L_08A5CFD4;
    case 192u: goto L_08A5CFE4;
    case 193u: goto L_08A5CFF8;
    case 194u: goto L_08A5D00C;
    case 195u: goto L_08A5D018;
    case 196u: goto L_08A5D03C;
    case 197u: goto L_08A5D060;
    case 198u: goto L_08A5D074;
    case 199u: goto L_08A5D08C;
    case 200u: goto L_08A5D0A4;
    case 201u: goto L_08A5D0CC;
    case 202u: goto L_08A5D0D8;
    case 203u: goto L_08A5D0E4;
    case 204u: goto L_08A5D0F0;
    case 205u: goto L_08A5D104;
    case 206u: goto L_08A5D11C;
    case 207u: goto L_08A5D12C;
    case 208u: goto L_08A5D138;
    case 209u: goto L_08A5D144;
    case 210u: goto L_08A5D154;
    case 211u: goto L_08A5D160;
    case 212u: goto L_08A5D16C;
    case 213u: goto L_08A5D174;
    case 214u: goto L_08A5D180;
    case 215u: goto L_08A5D198;
    case 216u: goto L_08A5D1AC;
    case 217u: goto L_08A5D1B4;
    case 218u: goto L_08A5D1C4;
    case 219u: goto L_08A5D1D0;
    case 220u: goto L_08A5D1E0;
    case 221u: goto L_08A5D1E4;
    case 222u: goto L_08A5D200;
    case 223u: goto L_08A5D214;
    case 224u: goto L_08A5D224;
    case 225u: goto L_08A5D25C;
    case 226u: goto L_08A5D264;
    case 227u: goto L_08A5D270;
    case 228u: goto L_08A5D284;
    case 229u: goto L_08A5D2A0;
    case 230u: goto L_08A5D2B0;
    case 231u: goto L_08A5D2C0;
    case 232u: goto L_08A5D2D8;
    case 233u: goto L_08A5D2EC;
    case 234u: goto L_08A5D2FC;
    case 235u: goto L_08A5D304;
    case 236u: goto L_08A5D30C;
    case 237u: goto L_08A5D320;
    case 238u: goto L_08A5D330;
    case 239u: goto L_08A5D348;
    case 240u: goto L_08A5D354;
    case 241u: goto L_08A5D368;
    case 242u: goto L_08A5D370;
    case 243u: goto L_08A5D390;
    case 244u: goto L_08A5D39C;
    case 245u: goto L_08A5D3A8;
    case 246u: goto L_08A5D3B8;
    case 247u: goto L_08A5D3D8;
    case 248u: goto L_08A5D3DC;
    case 249u: goto L_08A5D3E8;
    case 250u: goto L_08A5D3F8;
    case 251u: goto L_08A5D414;
    case 252u: goto L_08A5D424;
    case 253u: goto L_08A5D430;
    case 254u: goto L_08A5D43C;
    case 255u: goto L_08A5D44C;
    case 256u: goto L_08A5D458;
    case 257u: goto L_08A5D464;
    case 258u: goto L_08A5D474;
    case 259u: goto L_08A5D480;
    case 260u: goto L_08A5D48C;
    case 261u: goto L_08A5D49C;
    case 262u: goto L_08A5D4A8;
    case 263u: goto L_08A5D4B4;
    case 264u: goto L_08A5D4C4;
    case 265u: goto L_08A5D4D0;
    case 266u: goto L_08A5D4DC;
    case 267u: goto L_08A5D4EC;
    case 268u: goto L_08A5D4F8;
    case 269u: goto L_08A5D504;
    case 270u: goto L_08A5D514;
    case 271u: goto L_08A5D520;
    case 272u: goto L_08A5D52C;
    case 273u: goto L_08A5D53C;
    case 274u: goto L_08A5D548;
    case 275u: goto L_08A5D554;
    case 276u: goto L_08A5D564;
    case 277u: goto L_08A5D570;
    case 278u: goto L_08A5D57C;
    case 279u: goto L_08A5D58C;
    case 280u: goto L_08A5D598;
    case 281u: goto L_08A5D5A4;
    case 282u: goto L_08A5D5B4;
    case 283u: goto L_08A5D5C0;
    case 284u: goto L_08A5D5CC;
    case 285u: goto L_08A5D5DC;
    case 286u: goto L_08A5D5E8;
    case 287u: goto L_08A5D5F4;
    case 288u: goto L_08A5D604;
    case 289u: goto L_08A5D610;
    case 290u: goto L_08A5D61C;
    case 291u: goto L_08A5D62C;
    case 292u: goto L_08A5D638;
    case 293u: goto L_08A5D644;
    case 294u: goto L_08A5D654;
    case 295u: goto L_08A5D660;
    case 296u: goto L_08A5D66C;
    case 297u: goto L_08A5D67C;
    case 298u: goto L_08A5D688;
    case 299u: goto L_08A5D694;
    case 300u: goto L_08A5D6A4;
    case 301u: goto L_08A5D6B0;
    case 302u: goto L_08A5D6BC;
    case 303u: goto L_08A5D6CC;
    case 304u: goto L_08A5D6D8;
    case 305u: goto L_08A5D6E4;
    case 306u: goto L_08A5D6F4;
    case 307u: goto L_08A5D700;
    case 308u: goto L_08A5D70C;
    case 309u: goto L_08A5D71C;
    case 310u: goto L_08A5D728;
    case 311u: goto L_08A5D734;
    case 312u: goto L_08A5D744;
    case 313u: goto L_08A5D750;
    case 314u: goto L_08A5D75C;
    case 315u: goto L_08A5D76C;
    case 316u: goto L_08A5D778;
    case 317u: goto L_08A5D784;
    case 318u: goto L_08A5D794;
    case 319u: goto L_08A5D7A0;
    case 320u: goto L_08A5D7AC;
    case 321u: goto L_08A5D7BC;
    case 322u: goto L_08A5D7C8;
    case 323u: goto L_08A5D7D4;
    case 324u: goto L_08A5D7E4;
    case 325u: goto L_08A5D7F0;
    case 326u: goto L_08A5D7FC;
    case 327u: goto L_08A5D80C;
    case 328u: goto L_08A5D818;
    case 329u: goto L_08A5D824;
    case 330u: goto L_08A5D834;
    case 331u: goto L_08A5D840;
    case 332u: goto L_08A5D84C;
    case 333u: goto L_08A5D85C;
    case 334u: goto L_08A5D868;
    case 335u: goto L_08A5D874;
    case 336u: goto L_08A5D884;
    case 337u: goto L_08A5D890;
    case 338u: goto L_08A5D89C;
    case 339u: goto L_08A5D8AC;
    case 340u: goto L_08A5D8B8;
    case 341u: goto L_08A5D8C4;
    case 342u: goto L_08A5D8D4;
    case 343u: goto L_08A5D8E0;
    case 344u: goto L_08A5D8EC;
    case 345u: goto L_08A5D8FC;
    case 346u: goto L_08A5D908;
    case 347u: goto L_08A5D914;
    case 348u: goto L_08A5D924;
    case 349u: goto L_08A5D930;
    case 350u: goto L_08A5D93C;
    case 351u: goto L_08A5D94C;
    case 352u: goto L_08A5D958;
    case 353u: goto L_08A5D964;
    case 354u: goto L_08A5D974;
    case 355u: goto L_08A5D980;
    case 356u: goto L_08A5D98C;
    case 357u: goto L_08A5D9A4;
    case 358u: goto L_08A5D9BC;
    case 359u: goto L_08A5D9D8;
    case 360u: goto L_08A5D9E0;
    case 361u: goto L_08A5D9E8;
    case 362u: goto L_08A5D9F8;
    case 363u: goto L_08A5DA14;
    case 364u: goto L_08A5DA1C;
    case 365u: goto L_08A5DA24;
    case 366u: goto L_08A5DA34;
    case 367u: goto L_08A5DA50;
    case 368u: goto L_08A5DA58;
    case 369u: goto L_08A5DA60;
    case 370u: goto L_08A5DA70;
    case 371u: goto L_08A5DA8C;
    case 372u: goto L_08A5DA94;
    case 373u: goto L_08A5DA9C;
    case 374u: goto L_08A5DAAC;
    case 375u: goto L_08A5DAC8;
    case 376u: goto L_08A5DAD0;
    case 377u: goto L_08A5DAD8;
    case 378u: goto L_08A5DAE8;
    case 379u: goto L_08A5DB04;
    case 380u: goto L_08A5DB0C;
    case 381u: goto L_08A5DB14;
    case 382u: goto L_08A5DB24;
    case 383u: goto L_08A5DB40;
    case 384u: goto L_08A5DB48;
    case 385u: goto L_08A5DB50;
    case 386u: goto L_08A5DB60;
    case 387u: goto L_08A5DB7C;
    case 388u: goto L_08A5DB84;
    case 389u: goto L_08A5DB8C;
    case 390u: goto L_08A5DB9C;
    case 391u: goto L_08A5DBB8;
    case 392u: goto L_08A5DBC0;
    case 393u: goto L_08A5DBC8;
    case 394u: goto L_08A5DBD8;
    case 395u: goto L_08A5DBF4;
    case 396u: goto L_08A5DBFC;
    case 397u: goto L_08A5DC04;
    case 398u: goto L_08A5DC14;
    case 399u: goto L_08A5DC30;
    case 400u: goto L_08A5DC38;
    case 401u: goto L_08A5DC40;
    case 402u: goto L_08A5DC50;
    case 403u: goto L_08A5DC6C;
    case 404u: goto L_08A5DC74;
    case 405u: goto L_08A5DC7C;
    case 406u: goto L_08A5DC8C;
    case 407u: goto L_08A5DCA8;
    case 408u: goto L_08A5DCB0;
    case 409u: goto L_08A5DCB8;
    case 410u: goto L_08A5DCC8;
    case 411u: goto L_08A5DCE4;
    case 412u: goto L_08A5DCEC;
    case 413u: goto L_08A5DCF4;
    case 414u: goto L_08A5DD04;
    case 415u: goto L_08A5DD20;
    case 416u: goto L_08A5DD28;
    case 417u: goto L_08A5DD30;
    case 418u: goto L_08A5DD40;
    case 419u: goto L_08A5DD5C;
    case 420u: goto L_08A5DD64;
    case 421u: goto L_08A5DD6C;
    case 422u: goto L_08A5DD7C;
    case 423u: goto L_08A5DD98;
    case 424u: goto L_08A5DDA0;
    case 425u: goto L_08A5DDA8;
    case 426u: goto L_08A5DDB8;
    case 427u: goto L_08A5DDD4;
    case 428u: goto L_08A5DDDC;
    case 429u: goto L_08A5DDE4;
    case 430u: goto L_08A5DDF4;
    case 431u: goto L_08A5DE10;
    case 432u: goto L_08A5DE18;
    case 433u: goto L_08A5DE20;
    case 434u: goto L_08A5DE30;
    case 435u: goto L_08A5DE4C;
    case 436u: goto L_08A5DE54;
    case 437u: goto L_08A5DE5C;
    case 438u: goto L_08A5DE6C;
    case 439u: goto L_08A5DE88;
    case 440u: goto L_08A5DE90;
    case 441u: goto L_08A5DE98;
    case 442u: goto L_08A5DEA8;
    case 443u: goto L_08A5DEC4;
    case 444u: goto L_08A5DECC;
    case 445u: goto L_08A5DED4;
    case 446u: goto L_08A5DEE4;
    case 447u: goto L_08A5DF00;
    case 448u: goto L_08A5DF08;
    case 449u: goto L_08A5DF10;
    case 450u: goto L_08A5DF20;
    case 451u: goto L_08A5DF3C;
    case 452u: goto L_08A5DF44;
    case 453u: goto L_08A5DF4C;
    case 454u: goto L_08A5DF5C;
    case 455u: goto L_08A5DF78;
    case 456u: goto L_08A5DF80;
    case 457u: goto L_08A5DF88;
    case 458u: goto L_08A5DF98;
    case 459u: goto L_08A5DFB4;
    case 460u: goto L_08A5DFBC;
    case 461u: goto L_08A5DFC4;
    case 462u: goto L_08A5DFD4;
    case 463u: goto L_08A5DFF0;
    case 464u: goto L_08A5DFF8;
    case 465u: goto L_08A5E000;
    case 466u: goto L_08A5E010;
    case 467u: goto L_08A5E02C;
    case 468u: goto L_08A5E034;
    case 469u: goto L_08A5E03C;
    case 470u: goto L_08A5E04C;
    case 471u: goto L_08A5E068;
    case 472u: goto L_08A5E070;
    case 473u: goto L_08A5E078;
    case 474u: goto L_08A5E088;
    case 475u: goto L_08A5E0A4;
    case 476u: goto L_08A5E0AC;
    case 477u: goto L_08A5E0B4;
    case 478u: goto L_08A5E0C4;
    case 479u: goto L_08A5E0E0;
    case 480u: goto L_08A5E0E8;
    case 481u: goto L_08A5E0F0;
    case 482u: goto L_08A5E100;
    case 483u: goto L_08A5E11C;
    case 484u: goto L_08A5E124;
    case 485u: goto L_08A5E12C;
    case 486u: goto L_08A5E13C;
    case 487u: goto L_08A5E158;
    case 488u: goto L_08A5E160;
    case 489u: goto L_08A5E168;
    case 490u: goto L_08A5E178;
    case 491u: goto L_08A5E194;
    case 492u: goto L_08A5E19C;
    case 493u: goto L_08A5E1A4;
    case 494u: goto L_08A5E1B4;
    case 495u: goto L_08A5E1D0;
    case 496u: goto L_08A5E1D8;
    case 497u: goto L_08A5E1E0;
    case 498u: goto L_08A5E1F0;
    case 499u: goto L_08A5E20C;
    case 500u: goto L_08A5E214;
    case 501u: goto L_08A5E21C;
    case 502u: goto L_08A5E22C;
    case 503u: goto L_08A5E248;
    case 504u: goto L_08A5E250;
    case 505u: goto L_08A5E258;
    case 506u: goto L_08A5E268;
    case 507u: goto L_08A5E284;
    case 508u: goto L_08A5E28C;
    case 509u: goto L_08A5E294;
    case 510u: goto L_08A5E2A4;
    case 511u: goto L_08A5E2C0;
    case 512u: goto L_08A5E2C8;
    case 513u: goto L_08A5E2D0;
    case 514u: goto L_08A5E2E0;
    case 515u: goto L_08A5E2FC;
    case 516u: goto L_08A5E304;
    case 517u: goto L_08A5E30C;
    case 518u: goto L_08A5E31C;
    case 519u: goto L_08A5E338;
    case 520u: goto L_08A5E340;
    case 521u: goto L_08A5E348;
    case 522u: goto L_08A5E358;
    case 523u: goto L_08A5E374;
    case 524u: goto L_08A5E37C;
    case 525u: goto L_08A5E384;
    case 526u: goto L_08A5E394;
    case 527u: goto L_08A5E3B0;
    case 528u: goto L_08A5E3B8;
    case 529u: goto L_08A5E3C0;
    case 530u: goto L_08A5E3D0;
    case 531u: goto L_08A5E3EC;
    case 532u: goto L_08A5E3F4;
    case 533u: goto L_08A5E3FC;
    case 534u: goto L_08A5E40C;
    case 535u: goto L_08A5E428;
    case 536u: goto L_08A5E430;
    case 537u: goto L_08A5E438;
    case 538u: goto L_08A5E448;
    case 539u: goto L_08A5E464;
    case 540u: goto L_08A5E46C;
    case 541u: goto L_08A5E474;
    case 542u: goto L_08A5E484;
    case 543u: goto L_08A5E4A0;
    case 544u: goto L_08A5E4A8;
    case 545u: goto L_08A5E4B0;
    case 546u: goto L_08A5E4C0;
    case 547u: goto L_08A5E4DC;
    case 548u: goto L_08A5E4E4;
    case 549u: goto L_08A5E4EC;
    case 550u: goto L_08A5E4FC;
    case 551u: goto L_08A5E51C;
    case 552u: goto L_08A5E52C;
    case 553u: goto L_08A5E534;
    case 554u: goto L_08A5E53C;
    case 555u: goto L_08A5E54C;
    case 556u: goto L_08A5E554;
    case 557u: goto L_08A5E570;
    case 558u: goto L_08A5E578;
    case 559u: goto L_08A5E580;
    case 560u: goto L_08A5E590;
    case 561u: goto L_08A5E598;
    case 562u: goto L_08A5E5B4;
    case 563u: goto L_08A5E5BC;
    case 564u: goto L_08A5E5C4;
    case 565u: goto L_08A5E5D0;
    case 566u: goto L_08A5E5E4;
    case 567u: goto L_08A5E610;
    case 568u: goto L_08A5E61C;
    case 569u: goto L_08A5E620;
    case 570u: goto L_08A5E62C;
    case 571u: goto L_08A5E64C;
    case 572u: goto L_08A5E650;
    case 573u: goto L_08A5E65C;
    case 574u: goto L_08A5E67C;
    case 575u: goto L_08A5E698;
    case 576u: goto L_08A5E6A8;
    case 577u: goto L_08A5E6C8;
    case 578u: goto L_08A5E6D0;
    case 579u: goto L_08A5E6FC;
    case 580u: goto L_08A5E720;
    case 581u: goto L_08A5E73C;
    case 582u: goto L_08A5E754;
    case 583u: goto L_08A5E760;
    case 584u: goto L_08A5E770;
    case 585u: goto L_08A5E778;
    case 586u: goto L_08A5E780;
    case 587u: goto L_08A5E784;
    case 588u: goto L_08A5E794;
    case 589u: goto L_08A5E7A4;
    case 590u: goto L_08A5E7AC;
    case 591u: goto L_08A5E7B4;
    case 592u: goto L_08A5E7BC;
    case 593u: goto L_08A5E7CC;
    case 594u: goto L_08A5E7EC;
    case 595u: goto L_08A5E7F4;
    case 596u: goto L_08A5E800;
    case 597u: goto L_08A5E818;
    case 598u: goto L_08A5E844;
    case 599u: goto L_08A5E85C;
    case 600u: goto L_08A5E878;
    case 601u: goto L_08A5E8AC;
    case 602u: goto L_08A5E8D4;
    case 603u: goto L_08A5E8F0;
    case 604u: goto L_08A5E8FC;
    case 605u: goto L_08A5E910;
    case 606u: goto L_08A5E934;
    case 607u: goto L_08A5E938;
    case 608u: goto L_08A5E944;
    case 609u: goto L_08A5E950;
    case 610u: goto L_08A5E958;
    case 611u: goto L_08A5E95C;
    case 612u: goto L_08A5E970;
    case 613u: goto L_08A5E990;
    case 614u: goto L_08A5E9A8;
    case 615u: goto L_08A5E9BC;
    case 616u: goto L_08A5E9D0;
    case 617u: goto L_08A5E9DC;
    case 618u: goto L_08A5E9E8;
    case 619u: goto L_08A5E9F4;
    case 620u: goto L_08A5EA00;
    case 621u: goto L_08A5EA14;
    case 622u: goto L_08A5EA40;
    case 623u: goto L_08A5EA50;
    case 624u: goto L_08A5EA64;
    case 625u: goto L_08A5EA6C;
    case 626u: goto L_08A5EA8C;
    case 627u: goto L_08A5EA94;
    case 628u: goto L_08A5EAA8;
    case 629u: goto L_08A5EAAC;
    case 630u: goto L_08A5EAB8;
    case 631u: goto L_08A5EAD8;
    case 632u: goto L_08A5EB04;
    case 633u: goto L_08A5EB14;
    case 634u: goto L_08A5EB24;
    case 635u: goto L_08A5EB40;
    case 636u: goto L_08A5EB70;
    case 637u: goto L_08A5EB88;
    case 638u: goto L_08A5EB90;
    case 639u: goto L_08A5EB94;
    case 640u: goto L_08A5EBA0;
    case 641u: goto L_08A5EBB0;
    case 642u: goto L_08A5EBC4;
    case 643u: goto L_08A5EBD0;
    case 644u: goto L_08A5EBE8;
    case 645u: goto L_08A5EC00;
    case 646u: goto L_08A5EC08;
    case 647u: goto L_08A5EC0C;
    case 648u: goto L_08A5EC18;
    case 649u: goto L_08A5EC28;
    case 650u: goto L_08A5EC3C;
    case 651u: goto L_08A5EC48;
    case 652u: goto L_08A5EC60;
    case 653u: goto L_08A5EC78;
    case 654u: goto L_08A5EC80;
    case 655u: goto L_08A5EC84;
    case 656u: goto L_08A5EC90;
    case 657u: goto L_08A5ECA0;
    case 658u: goto L_08A5ECB4;
    case 659u: goto L_08A5ECC0;
    case 660u: goto L_08A5ECD4;
    case 661u: goto L_08A5ECF4;
    case 662u: goto L_08A5ED1C;
    case 663u: goto L_08A5ED24;
    case 664u: goto L_08A5ED3C;
    case 665u: goto L_08A5ED44;
    case 666u: goto L_08A5ED58;
    case 667u: goto L_08A5ED70;
    case 668u: goto L_08A5ED98;
    case 669u: goto L_08A5EDA0;
    case 670u: goto L_08A5EDB8;
    case 671u: goto L_08A5EDC0;
    case 672u: goto L_08A5EDD4;
    case 673u: goto L_08A5EDEC;
    case 674u: goto L_08A5EE14;
    case 675u: goto L_08A5EE1C;
    case 676u: goto L_08A5EE34;
    case 677u: goto L_08A5EE3C;
    case 678u: goto L_08A5EE50;
    case 679u: goto L_08A5EE68;
    case 680u: goto L_08A5EE80;
    case 681u: goto L_08A5EE98;
    case 682u: goto L_08A5EEA0;
    case 683u: goto L_08A5EEAC;
    case 684u: goto L_08A5EEC0;
    case 685u: goto L_08A5EEE0;
    case 686u: goto L_08A5EEEC;
    case 687u: goto L_08A5EF04;
    case 688u: goto L_08A5EF24;
    case 689u: goto L_08A5EF38;
    case 690u: goto L_08A5EF44;
    case 691u: goto L_08A5EF4C;
    case 692u: goto L_08A5EF68;
    case 693u: goto L_08A5EFA4;
    case 694u: goto L_08A5EFAC;
    case 695u: goto L_08A5EFC4;
    case 696u: goto L_08A5EFE4;
    case 697u: goto L_08A5F000;
    case 698u: goto L_08A5F008;
    case 699u: goto L_08A5F014;
    case 700u: goto L_08A5F020;
    case 701u: goto L_08A5F030;
    case 702u: goto L_08A5F03C;
    case 703u: goto L_08A5F050;
    case 704u: goto L_08A5F060;
    case 705u: goto L_08A5F070;
    case 706u: goto L_08A5F080;
    case 707u: goto L_08A5F08C;
    case 708u: goto L_08A5F094;
    case 709u: goto L_08A5F0A0;
    case 710u: goto L_08A5F0A8;
    case 711u: goto L_08A5F0C8;
    case 712u: goto L_08A5F0D8;
    case 713u: goto L_08A5F0E4;
    case 714u: goto L_08A5F0EC;
    case 715u: goto L_08A5F100;
    case 716u: goto L_08A5F10C;
    case 717u: goto L_08A5F11C;
    case 718u: goto L_08A5F12C;
    case 719u: goto L_08A5F134;
    case 720u: goto L_08A5F144;
    case 721u: goto L_08A5F14C;
    case 722u: goto L_08A5F158;
    case 723u: goto L_08A5F164;
    case 724u: goto L_08A5F17C;
    case 725u: goto L_08A5F184;
    case 726u: goto L_08A5F19C;
    case 727u: goto L_08A5F1AC;
    case 728u: goto L_08A5F1B8;
    case 729u: goto L_08A5F1C0;
    case 730u: goto L_08A5F1CC;
    case 731u: goto L_08A5F1D4;
    case 732u: goto L_08A5F1E4;
    case 733u: goto L_08A5F1F4;
    case 734u: goto L_08A5F20C;
    case 735u: goto L_08A5F220;
    case 736u: goto L_08A5F22C;
    case 737u: goto L_08A5F234;
    case 738u: goto L_08A5F244;
    case 739u: goto L_08A5F27C;
    case 740u: goto L_08A5F288;
    case 741u: goto L_08A5F294;
    case 742u: goto L_08A5F2B8;
    case 743u: goto L_08A5F2C4;
    case 744u: goto L_08A5F2D8;
    case 745u: goto L_08A5F2E0;
    case 746u: goto L_08A5F2E8;
    case 747u: goto L_08A5F2FC;
    case 748u: goto L_08A5F300;
    case 749u: goto L_08A5F31C;
    case 750u: goto L_08A5F33C;
    case 751u: goto L_08A5F344;
    case 752u: goto L_08A5F34C;
    case 753u: goto L_08A5F350;
    case 754u: goto L_08A5F360;
    case 755u: goto L_08A5F378;
    case 756u: goto L_08A5F3D8;
    case 757u: goto L_08A5F404;
    case 758u: goto L_08A5F444;
    case 759u: goto L_08A5F454;
    case 760u: goto L_08A5F45C;
    case 761u: goto L_08A5F46C;
    case 762u: goto L_08A5F480;
    case 763u: goto L_08A5F484;
    case 764u: goto L_08A5F494;
    case 765u: goto L_08A5F4C4;
    case 766u: goto L_08A5F4DC;
    case 767u: goto L_08A5F4EC;
    case 768u: goto L_08A5F4F8;
    case 769u: goto L_08A5F504;
    case 770u: goto L_08A5F510;
    case 771u: goto L_08A5F52C;
    case 772u: goto L_08A5F538;
    case 773u: goto L_08A5F544;
    case 774u: goto L_08A5F548;
    case 775u: goto L_08A5F558;
    case 776u: goto L_08A5F578;
    case 777u: goto L_08A5F5B4;
    case 778u: goto L_08A5F5DC;
    case 779u: goto L_08A5F5E4;
    case 780u: goto L_08A5F5F0;
    case 781u: goto L_08A5F5FC;
    case 782u: goto L_08A5F60C;
    case 783u: goto L_08A5F614;
    case 784u: goto L_08A5F628;
    case 785u: goto L_08A5F62C;
    case 786u: goto L_08A5F634;
    case 787u: goto L_08A5F638;
    case 788u: goto L_08A5F648;
    case 789u: goto L_08A5F650;
    case 790u: goto L_08A5F658;
    case 791u: goto L_08A5F664;
    case 792u: goto L_08A5F668;
    case 793u: goto L_08A5F69C;
    case 794u: goto L_08A5F6C4;
    case 795u: goto L_08A5F6E0;
    case 796u: goto L_08A5F6F0;
    case 797u: goto L_08A5F710;
    case 798u: goto L_08A5F724;
    case 799u: goto L_08A5F734;
    case 800u: goto L_08A5F73C;
    case 801u: goto L_08A5F748;
    case 802u: goto L_08A5F754;
    case 803u: goto L_08A5F760;
    case 804u: goto L_08A5F770;
    case 805u: goto L_08A5F784;
    case 806u: goto L_08A5F7A0;
    case 807u: goto L_08A5F7C8;
    case 808u: goto L_08A5F7DC;
    case 809u: goto L_08A5F7F0;
    case 810u: goto L_08A5F80C;
    case 811u: goto L_08A5F828;
    case 812u: goto L_08A5F830;
    case 813u: goto L_08A5F858;
    case 814u: goto L_08A5F868;
    case 815u: goto L_08A5F87C;
    case 816u: goto L_08A5F88C;
    case 817u: goto L_08A5F8A0;
    case 818u: goto L_08A5F8B0;
    case 819u: goto L_08A5F8F4;
    case 820u: goto L_08A5F90C;
    case 821u: goto L_08A5F914;
    case 822u: goto L_08A5F92C;
    case 823u: goto L_08A5F950;
    case 824u: goto L_08A5F958;
    case 825u: goto L_08A5F964;
    case 826u: goto L_08A5F970;
    case 827u: goto L_08A5F974;
    case 828u: goto L_08A5F980;
    case 829u: goto L_08A5F98C;
    case 830u: goto L_08A5F99C;
    case 831u: goto L_08A5F9D0;
    case 832u: goto L_08A5F9D8;
    case 833u: goto L_08A5F9E8;
    case 834u: goto L_08A5FA20;
    case 835u: goto L_08A5FA4C;
    case 836u: goto L_08A5FA60;
    case 837u: goto L_08A5FA74;
    case 838u: goto L_08A5FAA0;
    case 839u: goto L_08A5FAB0;
    case 840u: goto L_08A5FAC0;
    case 841u: goto L_08A5FAD4;
    case 842u: goto L_08A5FADC;
    case 843u: goto L_08A5FAE8;
    case 844u: goto L_08A5FAEC;
    case 845u: goto L_08A5FAF8;
    case 846u: goto L_08A5FAFC;
    case 847u: goto L_08A5FB20;
    case 848u: goto L_08A5FB48;
    case 849u: goto L_08A5FB58;
    case 850u: goto L_08A5FB68;
    case 851u: goto L_08A5FB78;
    case 852u: goto L_08A5FB80;
    case 853u: goto L_08A5FB90;
    case 854u: goto L_08A5FB9C;
    case 855u: goto L_08A5FBA0;
    case 856u: goto L_08A5FBAC;
    case 857u: goto L_08A5FBB0;
    case 858u: goto L_08A5FBD0;
    case 859u: goto L_08A5FC24;
    case 860u: goto L_08A5FC38;
    case 861u: goto L_08A5FC48;
    case 862u: goto L_08A5FC54;
    case 863u: goto L_08A5FC74;
    case 864u: goto L_08A5FC8C;
    case 865u: goto L_08A5FC94;
    case 866u: goto L_08A5FCB4;
    case 867u: goto L_08A5FCC4;
    case 868u: goto L_08A5FCE0;
    case 869u: goto L_08A5FCE4;
    case 870u: goto L_08A5FCE8;
    case 871u: goto L_08A5FCF8;
    case 872u: goto L_08A5FD00;
    case 873u: goto L_08A5FD0C;
    case 874u: goto L_08A5FD38;
    case 875u: goto L_08A5FD44;
    case 876u: goto L_08A5FD64;
    case 877u: goto L_08A5FD80;
    case 878u: goto L_08A5FD9C;
    case 879u: goto L_08A5FDB4;
    case 880u: goto L_08A5FDC4;
    case 881u: goto L_08A5FDD4;
    case 882u: goto L_08A5FDE4;
    case 883u: goto L_08A5FDF4;
    case 884u: goto L_08A5FE04;
    case 885u: goto L_08A5FE0C;
    case 886u: goto L_08A5FE14;
    case 887u: goto L_08A5FE24;
    case 888u: goto L_08A5FE2C;
    case 889u: goto L_08A5FE38;
    case 890u: goto L_08A5FE4C;
    case 891u: goto L_08A5FE50;
    case 892u: goto L_08A5FE60;
    case 893u: goto L_08A5FE70;
    case 894u: goto L_08A5FE8C;
    case 895u: goto L_08A5FE94;
    case 896u: goto L_08A5FEA8;
    case 897u: goto L_08A5FEBC;
    case 898u: goto L_08A5FED8;
    case 899u: goto L_08A5FEDC;
    case 900u: goto L_08A5FEE0;
    case 901u: goto L_08A5FEF0;
    case 902u: goto L_08A5FF24;
    case 903u: goto L_08A5FF4C;
    case 904u: goto L_08A5FF70;
    case 905u: goto L_08A5FF78;
    case 906u: goto L_08A5FF80;
    case 907u: goto L_08A5FF8C;
    case 908u: goto L_08A5FF94;
    case 909u: goto L_08A5FFA0;
    case 910u: goto L_08A5FFA4;
    case 911u: goto L_08A5FFB8;
    case 912u: goto L_08A5FFBC;
    case 913u: goto L_08A5FFD8;
    default:
        if (local_transfers == 0u) rt.unsupported(ctx.pc, 0u, "invalid internal function entry");
        else ctx.pc = local_pc;
        return;
    }
    }
L_08A5C000:
    ctx.set_gpr(4, ctx.gpr[16] + 0u);
    ctx.set_gpr(2, 2246u << 16u);
    ctx.set_gpr(5, rt.memory().aot_load32(ctx.gpr[2] + static_cast<std::uint32_t>(-21668)));
    ctx.set_gpr(31, 0x08A5C014u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0138_entry, 138u, 615u, 0x08A2ED9Cu>(ctx, &aot_mem) && ctx.pc == 0x08A5C014u) goto L_08A5C014;
    return;
L_08A5C014:
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
L_08A5C030:
    ctx.set_gpr(29, ctx.gpr[29] + static_cast<std::uint32_t>(-32));
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(28), ctx.gpr[31]);
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(24), ctx.gpr[19]);
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(20), ctx.gpr[18]);
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(16), ctx.gpr[17]);
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(12), ctx.gpr[16]);
    ctx.set_gpr(19, ctx.gpr[4] + 0u);
    ctx.set_gpr(18, ctx.gpr[5] + 0u);
    ctx.set_gpr(17, ctx.gpr[6] + 0u);
    ctx.set_gpr(16, rt.memory().aot_load32(ctx.gpr[5] + static_cast<std::uint32_t>(52)));
    ctx.set_gpr(2, rt.memory().aot_load8(ctx.gpr[4] + static_cast<std::uint32_t>(148)));
    { const bool branch_taken = ctx.gpr[2] == 0u;
    // nop
      if (branch_taken) {
          goto L_08A5C06C;
      }
      goto L_08A5C064;
    }
L_08A5C064:
    ctx.set_gpr(31, 0x08A5C06Cu);
    // nop
    goto L_08A5C7D4;
L_08A5C06C:
    ctx.set_gpr(4, ctx.gpr[16] + 0u);
    ctx.set_gpr(2, 2246u << 16u);
    ctx.set_gpr(5, rt.memory().aot_load32(ctx.gpr[2] + static_cast<std::uint32_t>(-21684)));
    ctx.set_gpr(31, 0x08A5C080u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0138_entry, 138u, 605u, 0x08A2EC74u>(ctx, &aot_mem) && ctx.pc == 0x08A5C080u) goto L_08A5C080;
    return;
L_08A5C080:
    ctx.set_gpr(4, ctx.gpr[16] + 0u);
    ctx.set_gpr(5, ctx.gpr[17] + 0u);
    ctx.set_gpr(31, 0x08A5C090u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0138_entry, 138u, 605u, 0x08A2EC74u>(ctx, &aot_mem) && ctx.pc == 0x08A5C090u) goto L_08A5C090;
    return;
L_08A5C090:
    ctx.set_gpr(4, ctx.gpr[16] + 0u);
    ctx.set_gpr(2, 2246u << 16u);
    ctx.set_gpr(5, rt.memory().aot_load32(ctx.gpr[2] + static_cast<std::uint32_t>(-21444)));
    ctx.set_gpr(31, 0x08A5C0A4u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0138_entry, 138u, 605u, 0x08A2EC74u>(ctx, &aot_mem) && ctx.pc == 0x08A5C0A4u) goto L_08A5C0A4;
    return;
L_08A5C0A4:
    ctx.set_gpr(4, ctx.gpr[16] + 0u);
    ctx.set_gpr(2, 2246u << 16u);
    ctx.set_gpr(5, rt.memory().aot_load32(ctx.gpr[2] + static_cast<std::uint32_t>(-21412)));
    ctx.set_gpr(31, 0x08A5C0B8u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0138_entry, 138u, 605u, 0x08A2EC74u>(ctx, &aot_mem) && ctx.pc == 0x08A5C0B8u) goto L_08A5C0B8;
    return;
L_08A5C0B8:
    ctx.set_gpr(4, ctx.gpr[16] + 0u);
    ctx.set_gpr(5, rt.memory().aot_load32(ctx.gpr[19] + static_cast<std::uint32_t>(144)));
    ctx.set_gpr(31, 0x08A5C0C8u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0138_entry, 138u, 605u, 0x08A2EC74u>(ctx, &aot_mem) && ctx.pc == 0x08A5C0C8u) goto L_08A5C0C8;
    return;
L_08A5C0C8:
    ctx.set_gpr(4, ctx.gpr[16] + 0u);
    ctx.set_gpr(2, 2246u << 16u);
    ctx.set_gpr(5, rt.memory().aot_load32(ctx.gpr[2] + static_cast<std::uint32_t>(-21380)));
    ctx.set_gpr(31, 0x08A5C0DCu);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0138_entry, 138u, 605u, 0x08A2EC74u>(ctx, &aot_mem) && ctx.pc == 0x08A5C0DCu) goto L_08A5C0DC;
    return;
L_08A5C0DC:
    ctx.set_gpr(4, ctx.gpr[16] + 0u);
    ctx.set_gpr(2, 2246u << 16u);
    ctx.set_gpr(5, rt.memory().aot_load32(ctx.gpr[2] + static_cast<std::uint32_t>(-21604)));
    ctx.set_gpr(31, 0x08A5C0F0u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0138_entry, 138u, 605u, 0x08A2EC74u>(ctx, &aot_mem) && ctx.pc == 0x08A5C0F0u) goto L_08A5C0F0;
    return;
L_08A5C0F0:
    ctx.set_gpr(4, ctx.gpr[16] + 0u);
    ctx.set_gpr(2, 2246u << 16u);
    ctx.set_gpr(5, rt.memory().aot_load32(ctx.gpr[2] + static_cast<std::uint32_t>(-21636)));
    ctx.set_gpr(31, 0x08A5C104u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0138_entry, 138u, 605u, 0x08A2EC74u>(ctx, &aot_mem) && ctx.pc == 0x08A5C104u) goto L_08A5C104;
    return;
L_08A5C104:
    ctx.set_gpr(4, ctx.gpr[16] + 0u);
    ctx.set_gpr(2, 2246u << 16u);
    ctx.set_gpr(5, rt.memory().aot_load32(ctx.gpr[2] + static_cast<std::uint32_t>(-21284)));
    ctx.set_gpr(31, 0x08A5C118u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0138_entry, 138u, 605u, 0x08A2EC74u>(ctx, &aot_mem) && ctx.pc == 0x08A5C118u) goto L_08A5C118;
    return;
L_08A5C118:
    ctx.set_gpr(4, ctx.gpr[19] + 0u);
    ctx.set_gpr(5, ctx.gpr[18] + 0u);
    ctx.set_gpr(31, 0x08A5C128u);
    // nop
    goto L_08A5C7D4;
L_08A5C128:
    ctx.set_gpr(4, ctx.gpr[16] + 0u);
    ctx.set_gpr(2, 2246u << 16u);
    ctx.set_gpr(5, rt.memory().aot_load32(ctx.gpr[2] + static_cast<std::uint32_t>(-21284)));
    ctx.set_gpr(31, 0x08A5C13Cu);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0138_entry, 138u, 615u, 0x08A2ED9Cu>(ctx, &aot_mem) && ctx.pc == 0x08A5C13Cu) goto L_08A5C13C;
    return;
L_08A5C13C:
    ctx.set_gpr(4, ctx.gpr[16] + 0u);
    ctx.set_gpr(2, 2246u << 16u);
    ctx.set_gpr(5, rt.memory().aot_load32(ctx.gpr[2] + static_cast<std::uint32_t>(-21636)));
    ctx.set_gpr(31, 0x08A5C150u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0138_entry, 138u, 615u, 0x08A2ED9Cu>(ctx, &aot_mem) && ctx.pc == 0x08A5C150u) goto L_08A5C150;
    return;
L_08A5C150:
    ctx.set_gpr(4, ctx.gpr[16] + 0u);
    ctx.set_gpr(2, 2246u << 16u);
    ctx.set_gpr(5, rt.memory().aot_load32(ctx.gpr[2] + static_cast<std::uint32_t>(-21604)));
    ctx.set_gpr(31, 0x08A5C164u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0138_entry, 138u, 615u, 0x08A2ED9Cu>(ctx, &aot_mem) && ctx.pc == 0x08A5C164u) goto L_08A5C164;
    return;
L_08A5C164:
    ctx.set_gpr(4, ctx.gpr[16] + 0u);
    ctx.set_gpr(2, 2246u << 16u);
    ctx.set_gpr(5, rt.memory().aot_load32(ctx.gpr[2] + static_cast<std::uint32_t>(-21380)));
    ctx.set_gpr(31, 0x08A5C178u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0138_entry, 138u, 615u, 0x08A2ED9Cu>(ctx, &aot_mem) && ctx.pc == 0x08A5C178u) goto L_08A5C178;
    return;
L_08A5C178:
    ctx.set_gpr(4, ctx.gpr[16] + 0u);
    ctx.set_gpr(5, rt.memory().aot_load32(ctx.gpr[19] + static_cast<std::uint32_t>(144)));
    ctx.set_gpr(31, 0x08A5C188u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0138_entry, 138u, 615u, 0x08A2ED9Cu>(ctx, &aot_mem) && ctx.pc == 0x08A5C188u) goto L_08A5C188;
    return;
L_08A5C188:
    ctx.set_gpr(4, ctx.gpr[16] + 0u);
    ctx.set_gpr(2, 2246u << 16u);
    ctx.set_gpr(5, rt.memory().aot_load32(ctx.gpr[2] + static_cast<std::uint32_t>(-21412)));
    ctx.set_gpr(31, 0x08A5C19Cu);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0138_entry, 138u, 615u, 0x08A2ED9Cu>(ctx, &aot_mem) && ctx.pc == 0x08A5C19Cu) goto L_08A5C19C;
    return;
L_08A5C19C:
    ctx.set_gpr(4, ctx.gpr[16] + 0u);
    ctx.set_gpr(2, 2246u << 16u);
    ctx.set_gpr(5, rt.memory().aot_load32(ctx.gpr[2] + static_cast<std::uint32_t>(-21444)));
    ctx.set_gpr(31, 0x08A5C1B0u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0138_entry, 138u, 615u, 0x08A2ED9Cu>(ctx, &aot_mem) && ctx.pc == 0x08A5C1B0u) goto L_08A5C1B0;
    return;
L_08A5C1B0:
    ctx.set_gpr(4, ctx.gpr[16] + 0u);
    ctx.set_gpr(5, ctx.gpr[17] + 0u);
    ctx.set_gpr(31, 0x08A5C1C0u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0138_entry, 138u, 615u, 0x08A2ED9Cu>(ctx, &aot_mem) && ctx.pc == 0x08A5C1C0u) goto L_08A5C1C0;
    return;
L_08A5C1C0:
    ctx.set_gpr(4, ctx.gpr[16] + 0u);
    ctx.set_gpr(2, 2246u << 16u);
    ctx.set_gpr(5, rt.memory().aot_load32(ctx.gpr[2] + static_cast<std::uint32_t>(-21684)));
    ctx.set_gpr(31, 0x08A5C1D4u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0138_entry, 138u, 615u, 0x08A2ED9Cu>(ctx, &aot_mem) && ctx.pc == 0x08A5C1D4u) goto L_08A5C1D4;
    return;
L_08A5C1D4:
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
L_08A5C1F4:
    ctx.set_gpr(29, ctx.gpr[29] + static_cast<std::uint32_t>(-16));
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(12), ctx.gpr[31]);
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(8), ctx.gpr[18]);
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(4), ctx.gpr[17]);
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(0), ctx.gpr[16]);
    ctx.set_gpr(18, ctx.gpr[4] + 0u);
    ctx.set_gpr(17, ctx.gpr[5] + 0u);
    ctx.set_gpr(16, ctx.gpr[6] + 0u);
    ctx.set_gpr(4, rt.memory().aot_load32(ctx.gpr[5] + static_cast<std::uint32_t>(32)));
    ctx.set_gpr(5, 0u + static_cast<std::uint32_t>(8));
    ctx.set_gpr(25, rt.memory().aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(0)));
    ctx.set_gpr(25, rt.memory().aot_load32(ctx.gpr[25] + static_cast<std::uint32_t>(92)));
    jump_target = ctx.gpr[25];
    ctx.set_gpr(31, 0x08A5C22Cu);
    // nop
    ctx.pc = jump_target;
    if (rt.invoke_chained_call(ctx, &aot_mem) && ctx.pc == 0x08A5C22Cu) goto L_08A5C22C;
    return;
L_08A5C22C:
    ctx.set_gpr(3, rt.memory().aot_load8(ctx.gpr[18] + static_cast<std::uint32_t>(148)));
    { const bool branch_taken = ctx.gpr[3] == 0u;
    // nop
      if (branch_taken) {
          goto L_08A5C260;
      }
      goto L_08A5C238;
    }
L_08A5C238:
    ctx.set_gpr(1, static_cast<std::int32_t>(ctx.gpr[2]) < 2 ? 1u : 0u);
    { const bool branch_taken = ctx.gpr[1] != 0u;
    // nop
      if (branch_taken) {
          goto L_08A5C260;
      }
      goto L_08A5C244;
    }
L_08A5C244:
    ctx.set_gpr(4, ctx.gpr[18] + 0u);
    ctx.set_gpr(5, ctx.gpr[17] + 0u);
    ctx.set_gpr(6, ctx.gpr[16] + 0u);
    ctx.set_gpr(31, 0x08A5C258u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0149_entry, 149u, 774u, 0x08A5BE84u>(ctx, &aot_mem) && ctx.pc == 0x08A5C258u) goto L_08A5C258;
    return;
L_08A5C258:
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_08A5C274;
      }
      goto L_08A5C260;
    }
L_08A5C260:
    ctx.set_gpr(4, ctx.gpr[18] + 0u);
    ctx.set_gpr(5, ctx.gpr[17] + 0u);
    ctx.set_gpr(6, ctx.gpr[16] + 0u);
    ctx.set_gpr(31, 0x08A5C274u);
    // nop
    goto L_08A5C030;
L_08A5C274:
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
L_08A5C290:
    ctx.set_gpr(29, ctx.gpr[29] + static_cast<std::uint32_t>(-32));
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(12), ctx.gpr[31]);
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(8), ctx.gpr[18]);
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(4), ctx.gpr[17]);
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(0), ctx.gpr[16]);
    ctx.set_gpr(18, ctx.gpr[4] + 0u);
    ctx.set_gpr(17, ctx.gpr[5] + 0u);
    ctx.set_gpr(2, rt.memory().aot_load8(ctx.gpr[4] + static_cast<std::uint32_t>(149)));
    { const bool branch_taken = ctx.gpr[2] != 0u;
    // nop
      if (branch_taken) {
          goto L_08A5C2DC;
      }
      goto L_08A5C2B8;
    }
L_08A5C2B8:
    ctx.set_gpr(2, rt.memory().aot_load8(ctx.gpr[18] + static_cast<std::uint32_t>(120)));
    { const bool branch_taken = ctx.gpr[2] == 0u;
    // nop
      if (branch_taken) {
          goto L_08A5C2D0;
      }
      goto L_08A5C2C4;
    }
L_08A5C2C4:
    ctx.set_gpr(2, rt.memory().aot_load32(ctx.gpr[18] + static_cast<std::uint32_t>(180)));
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_08A5C2D4;
      }
      goto L_08A5C2D0;
    }
L_08A5C2D0:
    ctx.set_gpr(2, rt.memory().aot_load32(ctx.gpr[18] + static_cast<std::uint32_t>(164)));
    goto L_08A5C2D4;
L_08A5C2D4:
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_08A5C6D0;
      }
      goto L_08A5C2DC;
    }
L_08A5C2DC:
    ctx.set_gpr(16, rt.memory().aot_load32(ctx.gpr[17] + static_cast<std::uint32_t>(52)));
    ctx.set_gpr(4, rt.memory().aot_load32(ctx.gpr[17] + static_cast<std::uint32_t>(68)));
    ctx.set_gpr(5, 0u + 0u);
    ctx.set_gpr(6, 0u + 0u);
    ctx.set_gpr(31, 0x08A5C2F4u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0151_entry, 151u, 505u, 0x08A627F8u>(ctx, &aot_mem) && ctx.pc == 0x08A5C2F4u) goto L_08A5C2F4;
    return;
L_08A5C2F4:
    ctx.fpr[0] = std::bit_cast<float>(rt.memory().aot_load32(ctx.gpr[18] + static_cast<std::uint32_t>(68)));
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(16), std::bit_cast<std::uint32_t>(ctx.fpr[0]));
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(20), std::bit_cast<std::uint32_t>(ctx.fpr[0]));
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(24), std::bit_cast<std::uint32_t>(ctx.fpr[0]));
    ctx.set_gpr(2, 16256u << 16u);
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(28), ctx.gpr[2]);
    ctx.set_gpr(4, rt.memory().aot_load32(ctx.gpr[18] + static_cast<std::uint32_t>(116)));
    ctx.set_gpr(5, ctx.gpr[29] + static_cast<std::uint32_t>(16));
    ctx.set_gpr(25, rt.memory().aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(0)));
    ctx.set_gpr(25, rt.memory().aot_load32(ctx.gpr[25] + static_cast<std::uint32_t>(136)));
    jump_target = ctx.gpr[25];
    ctx.set_gpr(31, 0x08A5C324u);
    // nop
    ctx.pc = jump_target;
    if (rt.invoke_chained_call(ctx, &aot_mem) && ctx.pc == 0x08A5C324u) goto L_08A5C324;
    return;
L_08A5C324:
    ctx.set_gpr(4, ctx.gpr[16] + 0u);
    ctx.set_gpr(5, rt.memory().aot_load32(ctx.gpr[18] + static_cast<std::uint32_t>(152)));
    ctx.set_gpr(31, 0x08A5C334u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0138_entry, 138u, 605u, 0x08A2EC74u>(ctx, &aot_mem) && ctx.pc == 0x08A5C334u) goto L_08A5C334;
    return;
L_08A5C334:
    ctx.set_gpr(4, ctx.gpr[16] + 0u);
    ctx.set_gpr(5, rt.memory().aot_load32(ctx.gpr[18] + static_cast<std::uint32_t>(156)));
    ctx.set_gpr(31, 0x08A5C344u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0138_entry, 138u, 605u, 0x08A2EC74u>(ctx, &aot_mem) && ctx.pc == 0x08A5C344u) goto L_08A5C344;
    return;
L_08A5C344:
    ctx.set_gpr(4, ctx.gpr[16] + 0u);
    ctx.set_gpr(5, rt.memory().aot_load32(ctx.gpr[18] + static_cast<std::uint32_t>(192)));
    ctx.set_gpr(31, 0x08A5C354u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0138_entry, 138u, 605u, 0x08A2EC74u>(ctx, &aot_mem) && ctx.pc == 0x08A5C354u) goto L_08A5C354;
    return;
L_08A5C354:
    ctx.set_gpr(4, rt.memory().aot_load32(ctx.gpr[17] + static_cast<std::uint32_t>(68)));
    ctx.set_gpr(2, 2246u << 16u);
    ctx.set_gpr(5, rt.memory().aot_load32(ctx.gpr[2] + static_cast<std::uint32_t>(-21508)));
    ctx.set_gpr(6, ctx.gpr[16] + 0u);
    ctx.set_gpr(31, 0x08A5C36Cu);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0151_entry, 151u, 51u, 0x08A60414u>(ctx, &aot_mem) && ctx.pc == 0x08A5C36Cu) goto L_08A5C36C;
    return;
L_08A5C36C:
    ctx.set_gpr(4, ctx.gpr[16] + 0u);
    ctx.set_gpr(5, rt.memory().aot_load32(ctx.gpr[18] + static_cast<std::uint32_t>(192)));
    ctx.set_gpr(31, 0x08A5C37Cu);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0138_entry, 138u, 615u, 0x08A2ED9Cu>(ctx, &aot_mem) && ctx.pc == 0x08A5C37Cu) goto L_08A5C37C;
    return;
L_08A5C37C:
    ctx.set_gpr(4, ctx.gpr[16] + 0u);
    ctx.set_gpr(2, 2246u << 16u);
    ctx.set_gpr(5, rt.memory().aot_load32(ctx.gpr[2] + static_cast<std::uint32_t>(-21572)));
    ctx.set_gpr(31, 0x08A5C390u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0138_entry, 138u, 605u, 0x08A2EC74u>(ctx, &aot_mem) && ctx.pc == 0x08A5C390u) goto L_08A5C390;
    return;
L_08A5C390:
    ctx.set_gpr(4, ctx.gpr[16] + 0u);
    ctx.set_gpr(2, 2246u << 16u);
    ctx.set_gpr(5, rt.memory().aot_load32(ctx.gpr[2] + static_cast<std::uint32_t>(-21460)));
    ctx.set_gpr(31, 0x08A5C3A4u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0138_entry, 138u, 605u, 0x08A2EC74u>(ctx, &aot_mem) && ctx.pc == 0x08A5C3A4u) goto L_08A5C3A4;
    return;
L_08A5C3A4:
    ctx.set_gpr(4, ctx.gpr[16] + 0u);
    ctx.set_gpr(2, 2246u << 16u);
    ctx.set_gpr(5, rt.memory().aot_load32(ctx.gpr[2] + static_cast<std::uint32_t>(-21652)));
    ctx.set_gpr(31, 0x08A5C3B8u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0138_entry, 138u, 605u, 0x08A2EC74u>(ctx, &aot_mem) && ctx.pc == 0x08A5C3B8u) goto L_08A5C3B8;
    return;
L_08A5C3B8:
    ctx.set_gpr(4, ctx.gpr[16] + 0u);
    ctx.set_gpr(5, rt.memory().aot_load32(ctx.gpr[18] + static_cast<std::uint32_t>(88)));
    ctx.set_gpr(31, 0x08A5C3C8u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0138_entry, 138u, 585u, 0x08A2E9A8u>(ctx, &aot_mem) && ctx.pc == 0x08A5C3C8u) goto L_08A5C3C8;
    return;
L_08A5C3C8:
    ctx.set_gpr(4, ctx.gpr[16] + 0u);
    ctx.set_gpr(5, rt.memory().aot_load32(ctx.gpr[18] + static_cast<std::uint32_t>(92)));
    ctx.set_gpr(31, 0x08A5C3D8u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0138_entry, 138u, 585u, 0x08A2E9A8u>(ctx, &aot_mem) && ctx.pc == 0x08A5C3D8u) goto L_08A5C3D8;
    return;
L_08A5C3D8:
    ctx.set_gpr(2, rt.memory().aot_load8(ctx.gpr[18] + static_cast<std::uint32_t>(237)));
    { const bool branch_taken = ctx.gpr[2] == 0u;
    // nop
      if (branch_taken) {
          goto L_08A5C3F4;
      }
      goto L_08A5C3E4;
    }
L_08A5C3E4:
    ctx.set_gpr(4, ctx.gpr[16] + 0u);
    ctx.set_gpr(5, rt.memory().aot_load32(ctx.gpr[18] + static_cast<std::uint32_t>(116)));
    ctx.set_gpr(31, 0x08A5C3F4u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0138_entry, 138u, 605u, 0x08A2EC74u>(ctx, &aot_mem) && ctx.pc == 0x08A5C3F4u) goto L_08A5C3F4;
    return;
L_08A5C3F4:
    ctx.set_gpr(4, ctx.gpr[16] + 0u);
    ctx.set_gpr(5, rt.memory().aot_load32(ctx.gpr[18] + static_cast<std::uint32_t>(196)));
    ctx.set_gpr(31, 0x08A5C404u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0138_entry, 138u, 605u, 0x08A2EC74u>(ctx, &aot_mem) && ctx.pc == 0x08A5C404u) goto L_08A5C404;
    return;
L_08A5C404:
    ctx.set_gpr(4, ctx.gpr[18] + 0u);
    ctx.set_gpr(5, ctx.gpr[17] + 0u);
    ctx.set_gpr(31, 0x08A5C414u);
    // nop
    goto L_08A5C900;
L_08A5C414:
    ctx.set_gpr(4, ctx.gpr[16] + 0u);
    ctx.set_gpr(5, rt.memory().aot_load32(ctx.gpr[18] + static_cast<std::uint32_t>(196)));
    ctx.set_gpr(31, 0x08A5C424u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0138_entry, 138u, 615u, 0x08A2ED9Cu>(ctx, &aot_mem) && ctx.pc == 0x08A5C424u) goto L_08A5C424;
    return;
L_08A5C424:
    ctx.set_gpr(2, rt.memory().aot_load8(ctx.gpr[18] + static_cast<std::uint32_t>(237)));
    { const bool branch_taken = ctx.gpr[2] == 0u;
    // nop
      if (branch_taken) {
          goto L_08A5C440;
      }
      goto L_08A5C430;
    }
L_08A5C430:
    ctx.set_gpr(4, ctx.gpr[16] + 0u);
    ctx.set_gpr(5, rt.memory().aot_load32(ctx.gpr[18] + static_cast<std::uint32_t>(116)));
    ctx.set_gpr(31, 0x08A5C440u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0138_entry, 138u, 615u, 0x08A2ED9Cu>(ctx, &aot_mem) && ctx.pc == 0x08A5C440u) goto L_08A5C440;
    return;
L_08A5C440:
    ctx.set_gpr(4, ctx.gpr[16] + 0u);
    ctx.set_gpr(5, rt.memory().aot_load32(ctx.gpr[18] + static_cast<std::uint32_t>(92)));
    ctx.set_gpr(31, 0x08A5C450u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0138_entry, 138u, 589u, 0x08A2EA40u>(ctx, &aot_mem) && ctx.pc == 0x08A5C450u) goto L_08A5C450;
    return;
L_08A5C450:
    ctx.set_gpr(4, ctx.gpr[16] + 0u);
    ctx.set_gpr(5, rt.memory().aot_load32(ctx.gpr[18] + static_cast<std::uint32_t>(88)));
    ctx.set_gpr(31, 0x08A5C460u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0138_entry, 138u, 589u, 0x08A2EA40u>(ctx, &aot_mem) && ctx.pc == 0x08A5C460u) goto L_08A5C460;
    return;
L_08A5C460:
    ctx.set_gpr(4, ctx.gpr[16] + 0u);
    ctx.set_gpr(2, 2246u << 16u);
    ctx.set_gpr(5, rt.memory().aot_load32(ctx.gpr[2] + static_cast<std::uint32_t>(-21652)));
    ctx.set_gpr(31, 0x08A5C474u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0138_entry, 138u, 615u, 0x08A2ED9Cu>(ctx, &aot_mem) && ctx.pc == 0x08A5C474u) goto L_08A5C474;
    return;
L_08A5C474:
    ctx.set_gpr(4, ctx.gpr[16] + 0u);
    ctx.set_gpr(5, rt.memory().aot_load32(ctx.gpr[18] + static_cast<std::uint32_t>(156)));
    ctx.set_gpr(31, 0x08A5C484u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0138_entry, 138u, 615u, 0x08A2ED9Cu>(ctx, &aot_mem) && ctx.pc == 0x08A5C484u) goto L_08A5C484;
    return;
L_08A5C484:
    ctx.set_gpr(4, ctx.gpr[16] + 0u);
    ctx.set_gpr(5, rt.memory().aot_load32(ctx.gpr[18] + static_cast<std::uint32_t>(152)));
    ctx.set_gpr(31, 0x08A5C494u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0138_entry, 138u, 615u, 0x08A2ED9Cu>(ctx, &aot_mem) && ctx.pc == 0x08A5C494u) goto L_08A5C494;
    return;
L_08A5C494:
    ctx.set_gpr(4, ctx.gpr[16] + 0u);
    ctx.set_gpr(2, 2246u << 16u);
    ctx.set_gpr(5, rt.memory().aot_load32(ctx.gpr[2] + static_cast<std::uint32_t>(-21460)));
    ctx.set_gpr(31, 0x08A5C4A8u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0138_entry, 138u, 615u, 0x08A2ED9Cu>(ctx, &aot_mem) && ctx.pc == 0x08A5C4A8u) goto L_08A5C4A8;
    return;
L_08A5C4A8:
    ctx.set_gpr(4, ctx.gpr[16] + 0u);
    ctx.set_gpr(2, 2246u << 16u);
    ctx.set_gpr(5, rt.memory().aot_load32(ctx.gpr[2] + static_cast<std::uint32_t>(-21572)));
    ctx.set_gpr(31, 0x08A5C4BCu);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0138_entry, 138u, 615u, 0x08A2ED9Cu>(ctx, &aot_mem) && ctx.pc == 0x08A5C4BCu) goto L_08A5C4BC;
    return;
L_08A5C4BC:
    ctx.set_gpr(2, rt.memory().aot_load8(ctx.gpr[18] + static_cast<std::uint32_t>(120)));
    { const bool branch_taken = ctx.gpr[2] != 0u;
    // nop
      if (branch_taken) {
          goto L_08A5C4E0;
      }
      goto L_08A5C4C8;
    }
L_08A5C4C8:
    ctx.set_gpr(4, rt.memory().aot_load32(ctx.gpr[17] + static_cast<std::uint32_t>(68)));
    ctx.set_gpr(31, 0x08A5C4D4u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0151_entry, 151u, 515u, 0x08A62900u>(ctx, &aot_mem) && ctx.pc == 0x08A5C4D4u) goto L_08A5C4D4;
    return;
L_08A5C4D4:
    ctx.set_gpr(2, rt.memory().aot_load32(ctx.gpr[18] + static_cast<std::uint32_t>(164)));
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_08A5C6D0;
      }
      goto L_08A5C4E0;
    }
L_08A5C4E0:
    ctx.set_gpr(4, ctx.gpr[16] + 0u);
    ctx.set_gpr(5, rt.memory().aot_load32(ctx.gpr[18] + static_cast<std::uint32_t>(168)));
    ctx.set_gpr(31, 0x08A5C4F0u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0138_entry, 138u, 605u, 0x08A2EC74u>(ctx, &aot_mem) && ctx.pc == 0x08A5C4F0u) goto L_08A5C4F0;
    return;
L_08A5C4F0:
    ctx.set_gpr(4, ctx.gpr[16] + 0u);
    ctx.set_gpr(5, rt.memory().aot_load32(ctx.gpr[18] + static_cast<std::uint32_t>(172)));
    ctx.set_gpr(31, 0x08A5C500u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0138_entry, 138u, 605u, 0x08A2EC74u>(ctx, &aot_mem) && ctx.pc == 0x08A5C500u) goto L_08A5C500;
    return;
L_08A5C500:
    ctx.set_gpr(4, ctx.gpr[16] + 0u);
    ctx.set_gpr(5, rt.memory().aot_load32(ctx.gpr[18] + static_cast<std::uint32_t>(192)));
    ctx.set_gpr(31, 0x08A5C510u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0138_entry, 138u, 605u, 0x08A2EC74u>(ctx, &aot_mem) && ctx.pc == 0x08A5C510u) goto L_08A5C510;
    return;
L_08A5C510:
    ctx.set_gpr(4, rt.memory().aot_load32(ctx.gpr[17] + static_cast<std::uint32_t>(68)));
    ctx.set_gpr(2, 2246u << 16u);
    ctx.set_gpr(5, rt.memory().aot_load32(ctx.gpr[2] + static_cast<std::uint32_t>(-21492)));
    ctx.set_gpr(6, ctx.gpr[16] + 0u);
    ctx.set_gpr(31, 0x08A5C528u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0151_entry, 151u, 51u, 0x08A60414u>(ctx, &aot_mem) && ctx.pc == 0x08A5C528u) goto L_08A5C528;
    return;
L_08A5C528:
    ctx.set_gpr(4, ctx.gpr[16] + 0u);
    ctx.set_gpr(2, 2246u << 16u);
    ctx.set_gpr(5, rt.memory().aot_load32(ctx.gpr[2] + static_cast<std::uint32_t>(-21620)));
    ctx.set_gpr(31, 0x08A5C53Cu);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0138_entry, 138u, 605u, 0x08A2EC74u>(ctx, &aot_mem) && ctx.pc == 0x08A5C53Cu) goto L_08A5C53C;
    return;
L_08A5C53C:
    ctx.set_gpr(4, ctx.gpr[16] + 0u);
    ctx.set_gpr(2, 2246u << 16u);
    ctx.set_gpr(5, rt.memory().aot_load32(ctx.gpr[2] + static_cast<std::uint32_t>(-21604)));
    ctx.set_gpr(31, 0x08A5C550u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0138_entry, 138u, 605u, 0x08A2EC74u>(ctx, &aot_mem) && ctx.pc == 0x08A5C550u) goto L_08A5C550;
    return;
L_08A5C550:
    ctx.set_gpr(4, ctx.gpr[16] + 0u);
    ctx.set_gpr(2, 2246u << 16u);
    ctx.set_gpr(5, rt.memory().aot_load32(ctx.gpr[2] + static_cast<std::uint32_t>(-21460)));
    ctx.set_gpr(31, 0x08A5C564u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0138_entry, 138u, 605u, 0x08A2EC74u>(ctx, &aot_mem) && ctx.pc == 0x08A5C564u) goto L_08A5C564;
    return;
L_08A5C564:
    ctx.set_gpr(4, ctx.gpr[16] + 0u);
    ctx.set_gpr(2, 2246u << 16u);
    ctx.set_gpr(5, rt.memory().aot_load32(ctx.gpr[2] + static_cast<std::uint32_t>(-21684)));
    ctx.set_gpr(31, 0x08A5C578u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0138_entry, 138u, 605u, 0x08A2EC74u>(ctx, &aot_mem) && ctx.pc == 0x08A5C578u) goto L_08A5C578;
    return;
L_08A5C578:
    ctx.set_gpr(4, ctx.gpr[16] + 0u);
    ctx.set_gpr(5, rt.memory().aot_load32(ctx.gpr[18] + static_cast<std::uint32_t>(164)));
    ctx.set_gpr(31, 0x08A5C588u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0138_entry, 138u, 605u, 0x08A2EC74u>(ctx, &aot_mem) && ctx.pc == 0x08A5C588u) goto L_08A5C588;
    return;
L_08A5C588:
    ctx.set_gpr(4, ctx.gpr[16] + 0u);
    ctx.set_gpr(2, 2246u << 16u);
    ctx.set_gpr(5, rt.memory().aot_load32(ctx.gpr[2] + static_cast<std::uint32_t>(-21412)));
    ctx.set_gpr(31, 0x08A5C59Cu);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0138_entry, 138u, 605u, 0x08A2EC74u>(ctx, &aot_mem) && ctx.pc == 0x08A5C59Cu) goto L_08A5C59C;
    return;
L_08A5C59C:
    ctx.set_gpr(4, ctx.gpr[16] + 0u);
    ctx.set_gpr(5, rt.memory().aot_load32(ctx.gpr[18] + static_cast<std::uint32_t>(96)));
    ctx.set_gpr(31, 0x08A5C5ACu);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0138_entry, 138u, 605u, 0x08A2EC74u>(ctx, &aot_mem) && ctx.pc == 0x08A5C5ACu) goto L_08A5C5AC;
    return;
L_08A5C5AC:
    ctx.set_gpr(4, ctx.gpr[16] + 0u);
    ctx.set_gpr(5, rt.memory().aot_load32(ctx.gpr[18] + static_cast<std::uint32_t>(100)));
    ctx.set_gpr(31, 0x08A5C5BCu);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0138_entry, 138u, 605u, 0x08A2EC74u>(ctx, &aot_mem) && ctx.pc == 0x08A5C5BCu) goto L_08A5C5BC;
    return;
L_08A5C5BC:
    ctx.set_gpr(4, ctx.gpr[16] + 0u);
    ctx.set_gpr(2, 2246u << 16u);
    ctx.set_gpr(5, rt.memory().aot_load32(ctx.gpr[2] + static_cast<std::uint32_t>(-21572)));
    ctx.set_gpr(31, 0x08A5C5D0u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0138_entry, 138u, 605u, 0x08A2EC74u>(ctx, &aot_mem) && ctx.pc == 0x08A5C5D0u) goto L_08A5C5D0;
    return;
L_08A5C5D0:
    ctx.set_gpr(5, rt.memory().aot_load32(ctx.gpr[18] + static_cast<std::uint32_t>(108)));
    ctx.set_gpr(4, rt.memory().aot_load32(ctx.gpr[17] + static_cast<std::uint32_t>(68)));
    ctx.set_gpr(6, ctx.gpr[16] + 0u);
    ctx.set_gpr(7, 0u + 0u);
    ctx.set_gpr(31, 0x08A5C5E8u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0151_entry, 151u, 388u, 0x08A61EE8u>(ctx, &aot_mem) && ctx.pc == 0x08A5C5E8u) goto L_08A5C5E8;
    return;
L_08A5C5E8:
    ctx.set_gpr(4, ctx.gpr[16] + 0u);
    ctx.set_gpr(2, 2246u << 16u);
    ctx.set_gpr(5, rt.memory().aot_load32(ctx.gpr[2] + static_cast<std::uint32_t>(-21572)));
    ctx.set_gpr(31, 0x08A5C5FCu);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0138_entry, 138u, 615u, 0x08A2ED9Cu>(ctx, &aot_mem) && ctx.pc == 0x08A5C5FCu) goto L_08A5C5FC;
    return;
L_08A5C5FC:
    ctx.set_gpr(4, ctx.gpr[16] + 0u);
    ctx.set_gpr(5, rt.memory().aot_load32(ctx.gpr[18] + static_cast<std::uint32_t>(100)));
    ctx.set_gpr(31, 0x08A5C60Cu);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0138_entry, 138u, 615u, 0x08A2ED9Cu>(ctx, &aot_mem) && ctx.pc == 0x08A5C60Cu) goto L_08A5C60C;
    return;
L_08A5C60C:
    ctx.set_gpr(4, ctx.gpr[16] + 0u);
    ctx.set_gpr(5, rt.memory().aot_load32(ctx.gpr[18] + static_cast<std::uint32_t>(96)));
    ctx.set_gpr(31, 0x08A5C61Cu);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0138_entry, 138u, 615u, 0x08A2ED9Cu>(ctx, &aot_mem) && ctx.pc == 0x08A5C61Cu) goto L_08A5C61C;
    return;
L_08A5C61C:
    ctx.set_gpr(4, ctx.gpr[16] + 0u);
    ctx.set_gpr(2, 2246u << 16u);
    ctx.set_gpr(5, rt.memory().aot_load32(ctx.gpr[2] + static_cast<std::uint32_t>(-21412)));
    ctx.set_gpr(31, 0x08A5C630u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0138_entry, 138u, 615u, 0x08A2ED9Cu>(ctx, &aot_mem) && ctx.pc == 0x08A5C630u) goto L_08A5C630;
    return;
L_08A5C630:
    ctx.set_gpr(4, ctx.gpr[16] + 0u);
    ctx.set_gpr(5, rt.memory().aot_load32(ctx.gpr[18] + static_cast<std::uint32_t>(164)));
    ctx.set_gpr(31, 0x08A5C640u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0138_entry, 138u, 615u, 0x08A2ED9Cu>(ctx, &aot_mem) && ctx.pc == 0x08A5C640u) goto L_08A5C640;
    return;
L_08A5C640:
    ctx.set_gpr(4, ctx.gpr[16] + 0u);
    ctx.set_gpr(2, 2246u << 16u);
    ctx.set_gpr(5, rt.memory().aot_load32(ctx.gpr[2] + static_cast<std::uint32_t>(-21684)));
    ctx.set_gpr(31, 0x08A5C654u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0138_entry, 138u, 615u, 0x08A2ED9Cu>(ctx, &aot_mem) && ctx.pc == 0x08A5C654u) goto L_08A5C654;
    return;
L_08A5C654:
    ctx.set_gpr(4, ctx.gpr[16] + 0u);
    ctx.set_gpr(2, 2246u << 16u);
    ctx.set_gpr(5, rt.memory().aot_load32(ctx.gpr[2] + static_cast<std::uint32_t>(-21460)));
    ctx.set_gpr(31, 0x08A5C668u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0138_entry, 138u, 615u, 0x08A2ED9Cu>(ctx, &aot_mem) && ctx.pc == 0x08A5C668u) goto L_08A5C668;
    return;
L_08A5C668:
    ctx.set_gpr(4, ctx.gpr[16] + 0u);
    ctx.set_gpr(2, 2246u << 16u);
    ctx.set_gpr(5, rt.memory().aot_load32(ctx.gpr[2] + static_cast<std::uint32_t>(-21604)));
    ctx.set_gpr(31, 0x08A5C67Cu);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0138_entry, 138u, 615u, 0x08A2ED9Cu>(ctx, &aot_mem) && ctx.pc == 0x08A5C67Cu) goto L_08A5C67C;
    return;
L_08A5C67C:
    ctx.set_gpr(4, ctx.gpr[16] + 0u);
    ctx.set_gpr(2, 2246u << 16u);
    ctx.set_gpr(5, rt.memory().aot_load32(ctx.gpr[2] + static_cast<std::uint32_t>(-21620)));
    ctx.set_gpr(31, 0x08A5C690u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0138_entry, 138u, 615u, 0x08A2ED9Cu>(ctx, &aot_mem) && ctx.pc == 0x08A5C690u) goto L_08A5C690;
    return;
L_08A5C690:
    ctx.set_gpr(4, ctx.gpr[16] + 0u);
    ctx.set_gpr(5, rt.memory().aot_load32(ctx.gpr[18] + static_cast<std::uint32_t>(192)));
    ctx.set_gpr(31, 0x08A5C6A0u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0138_entry, 138u, 615u, 0x08A2ED9Cu>(ctx, &aot_mem) && ctx.pc == 0x08A5C6A0u) goto L_08A5C6A0;
    return;
L_08A5C6A0:
    ctx.set_gpr(4, ctx.gpr[16] + 0u);
    ctx.set_gpr(5, rt.memory().aot_load32(ctx.gpr[18] + static_cast<std::uint32_t>(172)));
    ctx.set_gpr(31, 0x08A5C6B0u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0138_entry, 138u, 615u, 0x08A2ED9Cu>(ctx, &aot_mem) && ctx.pc == 0x08A5C6B0u) goto L_08A5C6B0;
    return;
L_08A5C6B0:
    ctx.set_gpr(4, ctx.gpr[16] + 0u);
    ctx.set_gpr(5, rt.memory().aot_load32(ctx.gpr[18] + static_cast<std::uint32_t>(168)));
    ctx.set_gpr(31, 0x08A5C6C0u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0138_entry, 138u, 615u, 0x08A2ED9Cu>(ctx, &aot_mem) && ctx.pc == 0x08A5C6C0u) goto L_08A5C6C0;
    return;
L_08A5C6C0:
    ctx.set_gpr(4, rt.memory().aot_load32(ctx.gpr[17] + static_cast<std::uint32_t>(68)));
    ctx.set_gpr(31, 0x08A5C6CCu);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0151_entry, 151u, 515u, 0x08A62900u>(ctx, &aot_mem) && ctx.pc == 0x08A5C6CCu) goto L_08A5C6CC;
    return;
L_08A5C6CC:
    ctx.set_gpr(2, rt.memory().aot_load32(ctx.gpr[18] + static_cast<std::uint32_t>(180)));
    goto L_08A5C6D0;
L_08A5C6D0:
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
L_08A5C6EC:
    ctx.set_gpr(29, ctx.gpr[29] + static_cast<std::uint32_t>(-16));
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(12), ctx.gpr[31]);
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(8), ctx.gpr[17]);
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(4), ctx.gpr[16]);
    ctx.set_gpr(17, ctx.gpr[4] + 0u);
    ctx.set_gpr(16, ctx.gpr[5] + 0u);
    ctx.set_gpr(4, rt.memory().aot_load32(ctx.gpr[5] + static_cast<std::uint32_t>(68)));
    ctx.set_gpr(5, 0u + 0u);
    ctx.set_gpr(6, 0u + 0u);
    ctx.set_gpr(31, 0x08A5C718u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0151_entry, 151u, 505u, 0x08A627F8u>(ctx, &aot_mem) && ctx.pc == 0x08A5C718u) goto L_08A5C718;
    return;
L_08A5C718:
    ctx.set_gpr(4, ctx.gpr[17] + 0u);
    ctx.set_gpr(5, ctx.gpr[16] + 0u);
    ctx.set_gpr(31, 0x08A5C728u);
    // nop
    goto L_08A5C290;
L_08A5C728:
    ctx.set_gpr(4, ctx.gpr[17] + 0u);
    ctx.set_gpr(5, ctx.gpr[16] + 0u);
    ctx.set_gpr(6, ctx.gpr[2] + 0u);
    ctx.set_gpr(31, 0x08A5C73Cu);
    // nop
    goto L_08A5C1F4;
L_08A5C73C:
    ctx.set_gpr(4, ctx.gpr[17] + 0u);
    ctx.set_gpr(5, ctx.gpr[16] + 0u);
    ctx.set_gpr(31, 0x08A5C74Cu);
    // nop
    goto L_08A5C770;
L_08A5C74C:
    ctx.set_gpr(4, rt.memory().aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(68)));
    ctx.set_gpr(31, 0x08A5C758u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0151_entry, 151u, 515u, 0x08A62900u>(ctx, &aot_mem) && ctx.pc == 0x08A5C758u) goto L_08A5C758;
    return;
L_08A5C758:
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
L_08A5C770:
    ctx.set_gpr(29, ctx.gpr[29] + static_cast<std::uint32_t>(-16));
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(12), ctx.gpr[31]);
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(8), ctx.gpr[17]);
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(4), ctx.gpr[16]);
    ctx.set_gpr(17, ctx.gpr[4] + 0u);
    ctx.set_gpr(16, ctx.gpr[5] + 0u);
    ctx.set_gpr(3, rt.memory().aot_load8(ctx.gpr[4] + static_cast<std::uint32_t>(236)));
    { const bool branch_taken = ctx.gpr[3] == 0u;
    // nop
      if (branch_taken) {
          goto L_08A5C7BC;
      }
      goto L_08A5C794;
    }
L_08A5C794:
    ctx.set_gpr(4, rt.memory().aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(68)));
    ctx.set_gpr(5, rt.memory().aot_load32(ctx.gpr[17] + static_cast<std::uint32_t>(228)));
    ctx.set_gpr(6, rt.memory().aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(52)));
    ctx.set_gpr(31, 0x08A5C7A8u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0151_entry, 151u, 51u, 0x08A60414u>(ctx, &aot_mem) && ctx.pc == 0x08A5C7A8u) goto L_08A5C7A8;
    return;
L_08A5C7A8:
    ctx.set_gpr(4, rt.memory().aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(68)));
    ctx.set_gpr(5, rt.memory().aot_load32(ctx.gpr[17] + static_cast<std::uint32_t>(232)));
    ctx.set_gpr(6, rt.memory().aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(52)));
    ctx.set_gpr(31, 0x08A5C7BCu);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0151_entry, 151u, 51u, 0x08A60414u>(ctx, &aot_mem) && ctx.pc == 0x08A5C7BCu) goto L_08A5C7BC;
    return;
L_08A5C7BC:
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
L_08A5C7D4:
    ctx.set_gpr(29, ctx.gpr[29] + static_cast<std::uint32_t>(-32));
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(28), ctx.gpr[31]);
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(24), ctx.gpr[19]);
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(20), ctx.gpr[18]);
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(16), ctx.gpr[17]);
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(12), ctx.gpr[16]);
    ctx.set_gpr(19, ctx.gpr[4] + 0u);
    ctx.set_gpr(18, ctx.gpr[5] + 0u);
    ctx.set_gpr(3, rt.memory().aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(28)));
    { const bool branch_taken = ctx.gpr[3] == 0u;
    // nop
      if (branch_taken) {
          goto L_08A5C80C;
      }
      goto L_08A5C800;
    }
L_08A5C800:
    ctx.set_gpr(16, rt.memory().aot_load32(ctx.gpr[3] + static_cast<std::uint32_t>(8)));
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_08A5C810;
      }
      goto L_08A5C80C;
    }
L_08A5C80C:
    ctx.set_gpr(16, 0u + 0u);
    goto L_08A5C810;
L_08A5C810:
    ctx.set_gpr(17, 0u + 0u);
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_08A5C840;
      }
      goto L_08A5C81C;
    }
L_08A5C81C:
    ctx.set_gpr(2, rt.memory().aot_load32(ctx.gpr[19] + static_cast<std::uint32_t>(28)));
    ctx.set_gpr(3, ctx.gpr[17] << 2u);
    ctx.set_gpr(2, rt.memory().aot_load32(ctx.gpr[2] + static_cast<std::uint32_t>(16)));
    ctx.set_gpr(2, ctx.gpr[2] + ctx.gpr[3]);
    ctx.set_gpr(5, rt.memory().aot_load32(ctx.gpr[2] + static_cast<std::uint32_t>(0)));
    ctx.set_gpr(4, ctx.gpr[18] + 0u);
    ctx.set_gpr(31, 0x08A5C83Cu);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0153_entry, 153u, 317u, 0x08A69C98u>(ctx, &aot_mem) && ctx.pc == 0x08A5C83Cu) goto L_08A5C83C;
    return;
L_08A5C83C:
    ctx.set_gpr(17, ctx.gpr[17] + static_cast<std::uint32_t>(1));
    goto L_08A5C840;
L_08A5C840:
    ctx.set_gpr(3, static_cast<std::int32_t>(ctx.gpr[17]) < static_cast<std::int32_t>(ctx.gpr[16]) ? 1u : 0u);
    { const bool branch_taken = ctx.gpr[3] != 0u;
    // nop
      if (branch_taken) {
          goto L_08A5C81C;
      }
      goto L_08A5C84C;
    }
L_08A5C84C:
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
L_08A5C86C:
    ctx.set_gpr(29, ctx.gpr[29] + static_cast<std::uint32_t>(-16));
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(12), ctx.gpr[31]);
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(8), ctx.gpr[17]);
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(4), ctx.gpr[16]);
    ctx.set_gpr(17, ctx.gpr[5] + 0u);
    ctx.set_gpr(16, ctx.gpr[4] + 0u);
    ctx.set_gpr(4, ctx.gpr[17] + 0u);
    ctx.set_gpr(25, rt.memory().aot_load32(ctx.gpr[5] + static_cast<std::uint32_t>(0)));
    ctx.set_gpr(25, rt.memory().aot_load32(ctx.gpr[25] + static_cast<std::uint32_t>(148)));
    jump_target = ctx.gpr[25];
    ctx.set_gpr(31, 0x08A5C898u);
    // nop
    ctx.pc = jump_target;
    if (rt.invoke_chained_call(ctx, &aot_mem) && ctx.pc == 0x08A5C898u) goto L_08A5C898;
    return;
L_08A5C898:
    { const bool branch_taken = ctx.gpr[2] == 0u;
    // nop
      if (branch_taken) {
          goto L_08A5C8C0;
      }
      goto L_08A5C8A0;
    }
L_08A5C8A0:
    ctx.set_gpr(4, ctx.gpr[17] + 0u);
    ctx.set_gpr(5, rt.memory().aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(32)));
    ctx.set_gpr(25, rt.memory().aot_load32(ctx.gpr[17] + static_cast<std::uint32_t>(0)));
    ctx.set_gpr(25, rt.memory().aot_load32(ctx.gpr[25] + static_cast<std::uint32_t>(152)));
    jump_target = ctx.gpr[25];
    ctx.set_gpr(31, 0x08A5C8B8u);
    // nop
    ctx.pc = jump_target;
    if (rt.invoke_chained_call(ctx, &aot_mem) && ctx.pc == 0x08A5C8B8u) goto L_08A5C8B8;
    return;
L_08A5C8B8:
    { const bool branch_taken = ctx.gpr[2] == 0u;
    // nop
      if (branch_taken) {
          goto L_08A5C8D8;
      }
      goto L_08A5C8C0;
    }
L_08A5C8C0:
    ctx.set_gpr(4, ctx.gpr[17] + 0u);
    ctx.set_gpr(5, ctx.gpr[16] + 0u);
    ctx.set_gpr(25, rt.memory().aot_load32(ctx.gpr[17] + static_cast<std::uint32_t>(0)));
    ctx.set_gpr(25, rt.memory().aot_load32(ctx.gpr[25] + static_cast<std::uint32_t>(156)));
    jump_target = ctx.gpr[25];
    ctx.set_gpr(31, 0x08A5C8D8u);
    // nop
    ctx.pc = jump_target;
    if (rt.invoke_chained_call(ctx, &aot_mem) && ctx.pc == 0x08A5C8D8u) goto L_08A5C8D8;
    return;
L_08A5C8D8:
    ctx.set_gpr(4, ctx.gpr[16] + 0u);
    ctx.set_gpr(5, ctx.gpr[17] + 0u);
    ctx.set_gpr(31, 0x08A5C8E8u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0153_entry, 153u, 354u, 0x08A69FF0u>(ctx, &aot_mem) && ctx.pc == 0x08A5C8E8u) goto L_08A5C8E8;
    return;
L_08A5C8E8:
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
L_08A5C900:
    ctx.set_gpr(29, ctx.gpr[29] + static_cast<std::uint32_t>(-48));
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
    ctx.set_gpr(17, ctx.gpr[4] + 0u);
    ctx.set_gpr(16, ctx.gpr[5] + 0u);
    ctx.set_gpr(2, 2246u << 16u);
    ctx.set_gpr(19, rt.memory().aot_load32(ctx.gpr[2] + static_cast<std::uint32_t>(-22064)));
    ctx.set_gpr(2, 2246u << 16u);
    ctx.set_gpr(20, rt.memory().aot_load32(ctx.gpr[2] + static_cast<std::uint32_t>(-25856)));
    ctx.set_gpr(2, 2246u << 16u);
    ctx.set_gpr(18, rt.memory().aot_load32(ctx.gpr[2] + static_cast<std::uint32_t>(-24372)));
    ctx.set_gpr(2, rt.memory().aot_load32(ctx.gpr[20] + static_cast<std::uint32_t>(8)));
    ctx.set_gpr(3, rt.memory().aot_load32(ctx.gpr[19] + static_cast<std::uint32_t>(16)));
    ctx.set_gpr(2, ctx.gpr[2] << 2u);
    ctx.set_gpr(2, ctx.gpr[3] + ctx.gpr[2]);
    ctx.set_gpr(21, rt.memory().aot_load32(ctx.gpr[2] + static_cast<std::uint32_t>(0)));
    ctx.set_gpr(2, rt.memory().aot_load32(ctx.gpr[18] + static_cast<std::uint32_t>(8)));
    ctx.set_gpr(2, ctx.gpr[2] << 2u);
    ctx.set_gpr(2, ctx.gpr[3] + ctx.gpr[2]);
    ctx.set_gpr(23, rt.memory().aot_load32(ctx.gpr[2] + static_cast<std::uint32_t>(0)));
    ctx.set_gpr(4, ctx.gpr[19] + 0u);
    ctx.set_gpr(5, ctx.gpr[20] + 0u);
    ctx.set_gpr(6, 2214u << 16u);
    ctx.set_gpr(6, ctx.gpr[6] + static_cast<std::uint32_t>(-14228));
    ctx.set_gpr(31, 0x08A5C988u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0153_entry, 153u, 339u, 0x08A69EF8u>(ctx, &aot_mem) && ctx.pc == 0x08A5C988u) goto L_08A5C988;
    return;
L_08A5C988:
    ctx.set_gpr(4, ctx.gpr[19] + 0u);
    ctx.set_gpr(5, ctx.gpr[18] + 0u);
    ctx.set_gpr(6, 2214u << 16u);
    ctx.set_gpr(6, ctx.gpr[6] + static_cast<std::uint32_t>(-14228));
    ctx.set_gpr(31, 0x08A5C9A0u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0153_entry, 153u, 339u, 0x08A69EF8u>(ctx, &aot_mem) && ctx.pc == 0x08A5C9A0u) goto L_08A5C9A0;
    return;
L_08A5C9A0:
    ctx.set_gpr(2, rt.memory().aot_load32(ctx.gpr[17] + static_cast<std::uint32_t>(60)));
    ctx.set_gpr(30, rt.memory().aot_load32(ctx.gpr[2] + static_cast<std::uint32_t>(8)));
    ctx.set_gpr(22, 0u + 0u);
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_08A5C9D8;
      }
      goto L_08A5C9B4;
    }
L_08A5C9B4:
    ctx.set_gpr(2, rt.memory().aot_load32(ctx.gpr[17] + static_cast<std::uint32_t>(60)));
    ctx.set_gpr(3, ctx.gpr[22] << 2u);
    ctx.set_gpr(2, rt.memory().aot_load32(ctx.gpr[2] + static_cast<std::uint32_t>(16)));
    ctx.set_gpr(2, ctx.gpr[2] + ctx.gpr[3]);
    ctx.set_gpr(5, rt.memory().aot_load32(ctx.gpr[2] + static_cast<std::uint32_t>(0)));
    ctx.set_gpr(4, ctx.gpr[16] + 0u);
    ctx.set_gpr(31, 0x08A5C9D4u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0153_entry, 153u, 317u, 0x08A69C98u>(ctx, &aot_mem) && ctx.pc == 0x08A5C9D4u) goto L_08A5C9D4;
    return;
L_08A5C9D4:
    ctx.set_gpr(22, ctx.gpr[22] + static_cast<std::uint32_t>(1));
    goto L_08A5C9D8;
L_08A5C9D8:
    ctx.set_gpr(2, static_cast<std::int32_t>(ctx.gpr[22]) < static_cast<std::int32_t>(ctx.gpr[30]) ? 1u : 0u);
    { const bool branch_taken = ctx.gpr[2] != 0u;
    // nop
      if (branch_taken) {
          goto L_08A5C9B4;
      }
      goto L_08A5C9E4;
    }
L_08A5C9E4:
    ctx.set_gpr(4, ctx.gpr[19] + 0u);
    ctx.set_gpr(5, ctx.gpr[20] + 0u);
    ctx.set_gpr(6, ctx.gpr[21] + 0u);
    ctx.set_gpr(31, 0x08A5C9F8u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0153_entry, 153u, 339u, 0x08A69EF8u>(ctx, &aot_mem) && ctx.pc == 0x08A5C9F8u) goto L_08A5C9F8;
    return;
L_08A5C9F8:
    ctx.set_gpr(4, ctx.gpr[19] + 0u);
    ctx.set_gpr(5, ctx.gpr[18] + 0u);
    ctx.set_gpr(6, ctx.gpr[23] + 0u);
    ctx.set_gpr(31, 0x08A5CA0Cu);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0153_entry, 153u, 339u, 0x08A69EF8u>(ctx, &aot_mem) && ctx.pc == 0x08A5CA0Cu) goto L_08A5CA0C;
    return;
L_08A5CA0C:
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
    ctx.set_gpr(29, ctx.gpr[29] + static_cast<std::uint32_t>(48));
    jump_target = ctx.gpr[31];
    // nop
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_08A5CA40:
    ctx.set_gpr(29, ctx.gpr[29] + static_cast<std::uint32_t>(-112));
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(12), ctx.gpr[31]);
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(8), ctx.gpr[18]);
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(4), ctx.gpr[17]);
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(0), ctx.gpr[16]);
    ctx.set_gpr(18, ctx.gpr[6] + 0u);
    ctx.set_gpr(17, ctx.gpr[7] + 0u);
    ctx.set_gpr(16, ctx.gpr[8] + 0u);
    ctx.set_gpr(4, ctx.gpr[16] + 0u);
    ctx.set_gpr(31, 0x08A5CA6Cu);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0126_entry, 126u, 747u, 0x089FFC4Cu>(ctx, &aot_mem) && ctx.pc == 0x08A5CA6Cu) goto L_08A5CA6C;
    return;
L_08A5CA6C:
    ctx.set_gpr(4, ctx.gpr[16] + 0u);
    ctx.set_gpr(5, ctx.gpr[16] + 0u);
    ctx.set_gpr(6, ctx.gpr[18] + 0u);
    ctx.set_gpr(31, 0x08A5CA80u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0126_entry, 126u, 727u, 0x089FF9E0u>(ctx, &aot_mem) && ctx.pc == 0x08A5CA80u) goto L_08A5CA80;
    return;
L_08A5CA80:
    ctx.set_gpr(4, ctx.gpr[16] + 0u);
    ctx.set_gpr(5, ctx.gpr[16] + 0u);
    ctx.set_gpr(6, ctx.gpr[17] + 0u);
    ctx.set_gpr(31, 0x08A5CA94u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0126_entry, 126u, 727u, 0x089FF9E0u>(ctx, &aot_mem) && ctx.pc == 0x08A5CA94u) goto L_08A5CA94;
    return;
L_08A5CA94:
    ctx.set_gpr(4, ctx.gpr[29] + static_cast<std::uint32_t>(48));
    ctx.set_gpr(31, 0x08A5CAA0u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0126_entry, 126u, 723u, 0x089FF868u>(ctx, &aot_mem) && ctx.pc == 0x08A5CAA0u) goto L_08A5CAA0;
    return;
L_08A5CAA0:
    ctx.set_gpr(2, 16128u << 16u);
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(36), ctx.gpr[2]);
    ctx.set_gpr(2, 48896u << 16u);
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(40), ctx.gpr[2]);
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(44), 0u);
    ctx.set_gpr(4, ctx.gpr[29] + static_cast<std::uint32_t>(48));
    ctx.set_gpr(5, ctx.gpr[29] + static_cast<std::uint32_t>(36));
    ctx.set_gpr(31, 0x08A5CAC4u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0126_entry, 126u, 752u, 0x089FFE94u>(ctx, &aot_mem) && ctx.pc == 0x08A5CAC4u) goto L_08A5CAC4;
    return;
L_08A5CAC4:
    ctx.set_gpr(2, 16128u << 16u);
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(24), ctx.gpr[2]);
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(28), ctx.gpr[2]);
    ctx.set_gpr(2, 16256u << 16u);
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(32), ctx.gpr[2]);
    ctx.set_gpr(4, ctx.gpr[29] + static_cast<std::uint32_t>(48));
    ctx.set_gpr(5, ctx.gpr[29] + static_cast<std::uint32_t>(24));
    ctx.set_gpr(31, 0x08A5CAE8u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0126_entry, 126u, 749u, 0x089FFD2Cu>(ctx, &aot_mem) && ctx.pc == 0x08A5CAE8u) goto L_08A5CAE8;
    return;
L_08A5CAE8:
    ctx.set_gpr(4, ctx.gpr[29] + static_cast<std::uint32_t>(48));
    ctx.set_gpr(5, ctx.gpr[4] + 0u);
    ctx.set_gpr(6, 2246u << 16u);
    ctx.set_gpr(6, ctx.gpr[6] + static_cast<std::uint32_t>(-21360));
    ctx.set_gpr(31, 0x08A5CB00u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0126_entry, 126u, 727u, 0x089FF9E0u>(ctx, &aot_mem) && ctx.pc == 0x08A5CB00u) goto L_08A5CB00;
    return;
L_08A5CB00:
    ctx.set_gpr(4, ctx.gpr[16] + 0u);
    ctx.set_gpr(5, ctx.gpr[16] + 0u);
    ctx.set_gpr(6, ctx.gpr[29] + static_cast<std::uint32_t>(48));
    ctx.set_gpr(31, 0x08A5CB14u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0126_entry, 126u, 727u, 0x089FF9E0u>(ctx, &aot_mem) && ctx.pc == 0x08A5CB14u) goto L_08A5CB14;
    return;
L_08A5CB14:
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
L_08A5CB30:
    ctx.set_gpr(29, ctx.gpr[29] + static_cast<std::uint32_t>(-224));
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(12), ctx.gpr[31]);
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(8), ctx.gpr[17]);
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(4), ctx.gpr[16]);
    ctx.set_gpr(17, ctx.gpr[4] + 0u);
    ctx.set_gpr(16, ctx.gpr[5] + 0u);
    ctx.fpr[1] = std::bit_cast<float>(rt.memory().aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(32)));
    ctx.fpr[0] = std::bit_cast<float>(rt.memory().aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(44)));
    ctx.fpr[0] = ctx.fpr[1] + ctx.fpr[0];
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(84), std::bit_cast<std::uint32_t>(ctx.fpr[0]));
    ctx.fpr[1] = std::bit_cast<float>(rt.memory().aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(36)));
    ctx.fpr[0] = std::bit_cast<float>(rt.memory().aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(48)));
    ctx.fpr[0] = ctx.fpr[1] + ctx.fpr[0];
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(88), std::bit_cast<std::uint32_t>(ctx.fpr[0]));
    ctx.fpr[1] = std::bit_cast<float>(rt.memory().aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(40)));
    ctx.fpr[0] = std::bit_cast<float>(rt.memory().aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(52)));
    ctx.fpr[0] = ctx.fpr[1] + ctx.fpr[0];
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(92), std::bit_cast<std::uint32_t>(ctx.fpr[0]));
    ctx.set_gpr(4, ctx.gpr[29] + static_cast<std::uint32_t>(160));
    ctx.set_gpr(5, ctx.gpr[17] + static_cast<std::uint32_t>(32));
    ctx.set_gpr(6, ctx.gpr[29] + static_cast<std::uint32_t>(84));
    ctx.set_gpr(7, ctx.gpr[17] + static_cast<std::uint32_t>(132));
    ctx.set_gpr(31, 0x08A5CB90u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0127_entry, 127u, 82u, 0x08A00F60u>(ctx, &aot_mem) && ctx.pc == 0x08A5CB90u) goto L_08A5CB90;
    return;
L_08A5CB90:
    ctx.set_gpr(2, rt.memory().aot_load8(ctx.gpr[17] + static_cast<std::uint32_t>(208)));
    { const bool branch_taken = ctx.gpr[2] == 0u;
    // nop
      if (branch_taken) {
          goto L_08A5CBC8;
      }
      goto L_08A5CB9C;
    }
L_08A5CB9C:
    ctx.set_gpr(4, ctx.gpr[29] + static_cast<std::uint32_t>(96));
    ctx.fpr[12] = std::bit_cast<float>(rt.memory().aot_load32(ctx.gpr[17] + static_cast<std::uint32_t>(224)));
    ctx.fpr[13] = std::bit_cast<float>(rt.memory().aot_load32(ctx.gpr[17] + static_cast<std::uint32_t>(220)));
    ctx.fpr[14] = std::bit_cast<float>(rt.memory().aot_load32(ctx.gpr[17] + static_cast<std::uint32_t>(216)));
    ctx.fpr[15] = std::bit_cast<float>(rt.memory().aot_load32(ctx.gpr[17] + static_cast<std::uint32_t>(212)));
    ctx.fpr[16] = std::bit_cast<float>(rt.memory().aot_load32(ctx.gpr[17] + static_cast<std::uint32_t>(124)));
    ctx.fpr[17] = std::bit_cast<float>(rt.memory().aot_load32(ctx.gpr[17] + static_cast<std::uint32_t>(128)));
    ctx.set_gpr(31, 0x08A5CBC0u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0127_entry, 127u, 69u, 0x08A00CCCu>(ctx, &aot_mem) && ctx.pc == 0x08A5CBC0u) goto L_08A5CBC0;
    return;
L_08A5CBC0:
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_08A5CC00;
      }
      goto L_08A5CBC8;
    }
L_08A5CBC8:
    ctx.fpr[1] = std::bit_cast<float>(rt.memory().aot_load32(ctx.gpr[17] + static_cast<std::uint32_t>(56)));
    ctx.set_gpr(2, 16384u << 16u);
    ctx.fpr[0] = std::bit_cast<float>(ctx.gpr[2]);
    { const float fs = ctx.fpr[0]; const float ft = ctx.fpr[1]; if ((std::isinf(fs) && ft == 0.0f) || (std::isinf(ft) && fs == 0.0f)) ctx.set_fpr_bits(1, 0x7FC00000u); else ctx.fpr[1] = fs * ft; }
    ctx.fpr[0] = std::bit_cast<float>(rt.memory().aot_load32(ctx.gpr[28] + static_cast<std::uint32_t>(-32268)));
    { const float fs = ctx.fpr[0]; const float ft = ctx.fpr[1]; if ((std::isinf(fs) && ft == 0.0f) || (std::isinf(ft) && fs == 0.0f)) ctx.set_fpr_bits(12, 0x7FC00000u); else ctx.fpr[12] = fs * ft; }
    ctx.set_gpr(2, 16256u << 16u);
    ctx.fpr[14] = std::bit_cast<float>(ctx.gpr[2]);
    ctx.set_gpr(4, ctx.gpr[29] + static_cast<std::uint32_t>(96));
    ctx.set_fpr_bits(13, ctx.fpr_bits(12));
    ctx.fpr[15] = std::bit_cast<float>(rt.memory().aot_load32(ctx.gpr[17] + static_cast<std::uint32_t>(124)));
    ctx.fpr[16] = std::bit_cast<float>(rt.memory().aot_load32(ctx.gpr[17] + static_cast<std::uint32_t>(128)));
    ctx.set_gpr(31, 0x08A5CC00u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0127_entry, 127u, 71u, 0x08A00E24u>(ctx, &aot_mem) && ctx.pc == 0x08A5CC00u) goto L_08A5CC00;
    return;
L_08A5CC00:
    ctx.set_gpr(4, rt.memory().aot_load32(ctx.gpr[17] + static_cast<std::uint32_t>(88)));
    ctx.set_gpr(5, ctx.gpr[29] + static_cast<std::uint32_t>(160));
    ctx.set_gpr(25, rt.memory().aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(0)));
    ctx.set_gpr(25, rt.memory().aot_load32(ctx.gpr[25] + static_cast<std::uint32_t>(136)));
    jump_target = ctx.gpr[25];
    ctx.set_gpr(31, 0x08A5CC18u);
    // nop
    ctx.pc = jump_target;
    if (rt.invoke_chained_call(ctx, &aot_mem) && ctx.pc == 0x08A5CC18u) goto L_08A5CC18;
    return;
L_08A5CC18:
    ctx.set_gpr(4, rt.memory().aot_load32(ctx.gpr[17] + static_cast<std::uint32_t>(92)));
    ctx.set_gpr(5, ctx.gpr[29] + static_cast<std::uint32_t>(96));
    ctx.set_gpr(25, rt.memory().aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(0)));
    ctx.set_gpr(25, rt.memory().aot_load32(ctx.gpr[25] + static_cast<std::uint32_t>(136)));
    jump_target = ctx.gpr[25];
    ctx.set_gpr(31, 0x08A5CC30u);
    // nop
    ctx.pc = jump_target;
    if (rt.invoke_chained_call(ctx, &aot_mem) && ctx.pc == 0x08A5CC30u) goto L_08A5CC30;
    return;
L_08A5CC30:
    ctx.set_gpr(4, ctx.gpr[17] + 0u);
    ctx.set_gpr(5, ctx.gpr[16] + 0u);
    ctx.set_gpr(6, ctx.gpr[29] + static_cast<std::uint32_t>(160));
    ctx.set_gpr(7, ctx.gpr[29] + static_cast<std::uint32_t>(96));
    ctx.set_gpr(8, ctx.gpr[29] + static_cast<std::uint32_t>(20));
    ctx.set_gpr(31, 0x08A5CC4Cu);
    // nop
    goto L_08A5CA40;
L_08A5CC4C:
    ctx.set_gpr(4, rt.memory().aot_load32(ctx.gpr[17] + static_cast<std::uint32_t>(144)));
    ctx.set_gpr(5, ctx.gpr[29] + static_cast<std::uint32_t>(20));
    ctx.set_gpr(25, rt.memory().aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(0)));
    ctx.set_gpr(25, rt.memory().aot_load32(ctx.gpr[25] + static_cast<std::uint32_t>(136)));
    jump_target = ctx.gpr[25];
    ctx.set_gpr(31, 0x08A5CC64u);
    // nop
    ctx.pc = jump_target;
    if (rt.invoke_chained_call(ctx, &aot_mem) && ctx.pc == 0x08A5CC64u) goto L_08A5CC64;
    return;
L_08A5CC64:
    ctx.set_gpr(31, rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(12)));
    ctx.set_gpr(17, rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(8)));
    ctx.set_gpr(16, rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(4)));
    ctx.set_gpr(29, ctx.gpr[29] + static_cast<std::uint32_t>(224));
    jump_target = ctx.gpr[31];
    // nop
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_08A5CC7C:
    ctx.set_gpr(29, ctx.gpr[29] + static_cast<std::uint32_t>(-16));
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(12), ctx.gpr[31]);
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(8), ctx.gpr[17]);
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(4), ctx.gpr[16]);
    ctx.set_gpr(17, ctx.gpr[4] + 0u);
    ctx.set_gpr(16, ctx.gpr[5] + 0u);
    ctx.set_gpr(2, rt.memory().aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(104)));
    { const bool branch_taken = ctx.gpr[2] != 0u;
    // nop
      if (branch_taken) {
          goto L_08A5CCBC;
      }
      goto L_08A5CCA0;
    }
L_08A5CCA0:
    ctx.set_gpr(31, 0x08A5CCA8u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0149_entry, 149u, 624u, 0x08A5AD20u>(ctx, &aot_mem) && ctx.pc == 0x08A5CCA8u) goto L_08A5CCA8;
    return;
L_08A5CCA8:
    ctx.set_gpr(4, ctx.gpr[17] + 0u);
    ctx.set_gpr(31, 0x08A5CCB4u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0149_entry, 149u, 715u, 0x08A5B774u>(ctx, &aot_mem) && ctx.pc == 0x08A5CCB4u) goto L_08A5CCB4;
    return;
L_08A5CCB4:
    ctx.set_gpr(2, 0u + static_cast<std::uint32_t>(1));
    rt.memory().aot_store32(ctx.gpr[17] + static_cast<std::uint32_t>(104), ctx.gpr[2]);
    goto L_08A5CCBC;
L_08A5CCBC:
    ctx.set_gpr(2, rt.memory().aot_load32(ctx.gpr[17] + static_cast<std::uint32_t>(200)));
    { const bool branch_taken = ctx.gpr[2] == 0u;
    // nop
      if (branch_taken) {
          goto L_08A5CD08;
      }
      goto L_08A5CCC8;
    }
L_08A5CCC8:
    ctx.fpr[0] = std::bit_cast<float>(rt.memory().aot_load32(ctx.gpr[2] + static_cast<std::uint32_t>(116)));
    rt.memory().aot_store32(ctx.gpr[17] + static_cast<std::uint32_t>(32), std::bit_cast<std::uint32_t>(ctx.fpr[0]));
    ctx.fpr[0] = std::bit_cast<float>(rt.memory().aot_load32(ctx.gpr[2] + static_cast<std::uint32_t>(120)));
    rt.memory().aot_store32(ctx.gpr[17] + static_cast<std::uint32_t>(36), std::bit_cast<std::uint32_t>(ctx.fpr[0]));
    ctx.fpr[0] = std::bit_cast<float>(rt.memory().aot_load32(ctx.gpr[2] + static_cast<std::uint32_t>(124)));
    rt.memory().aot_store32(ctx.gpr[17] + static_cast<std::uint32_t>(40), std::bit_cast<std::uint32_t>(ctx.fpr[0]));
    ctx.set_gpr(2, rt.memory().aot_load32(ctx.gpr[17] + static_cast<std::uint32_t>(200)));
    ctx.fpr[0] = std::bit_cast<float>(rt.memory().aot_load32(ctx.gpr[2] + static_cast<std::uint32_t>(128)));
    rt.memory().aot_store32(ctx.gpr[17] + static_cast<std::uint32_t>(44), std::bit_cast<std::uint32_t>(ctx.fpr[0]));
    ctx.fpr[0] = std::bit_cast<float>(rt.memory().aot_load32(ctx.gpr[2] + static_cast<std::uint32_t>(132)));
    rt.memory().aot_store32(ctx.gpr[17] + static_cast<std::uint32_t>(48), std::bit_cast<std::uint32_t>(ctx.fpr[0]));
    ctx.fpr[0] = std::bit_cast<float>(rt.memory().aot_load32(ctx.gpr[2] + static_cast<std::uint32_t>(136)));
    rt.memory().aot_store32(ctx.gpr[17] + static_cast<std::uint32_t>(52), std::bit_cast<std::uint32_t>(ctx.fpr[0]));
    ctx.set_gpr(2, rt.memory().aot_load32(ctx.gpr[17] + static_cast<std::uint32_t>(200)));
    ctx.fpr[0] = std::bit_cast<float>(rt.memory().aot_load32(ctx.gpr[2] + static_cast<std::uint32_t>(96)));
    rt.memory().aot_store32(ctx.gpr[17] + static_cast<std::uint32_t>(56), std::bit_cast<std::uint32_t>(ctx.fpr[0]));
    goto L_08A5CD08;
L_08A5CD08:
    ctx.set_gpr(4, ctx.gpr[17] + 0u);
    ctx.set_gpr(5, ctx.gpr[16] + static_cast<std::uint32_t>(164));
    ctx.set_gpr(31, 0x08A5CD18u);
    // nop
    goto L_08A5CB30;
L_08A5CD18:
    ctx.set_gpr(4, ctx.gpr[17] + 0u);
    ctx.set_gpr(5, ctx.gpr[16] + 0u);
    ctx.set_gpr(31, 0x08A5CD28u);
    // nop
    goto L_08A5C6EC;
L_08A5CD28:
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
L_08A5CD40:
    ctx.set_gpr(29, ctx.gpr[29] + static_cast<std::uint32_t>(-16));
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(12), ctx.gpr[31]);
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(8), ctx.gpr[18]);
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(4), ctx.gpr[17]);
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(0), ctx.gpr[16]);
    ctx.set_gpr(18, ctx.gpr[4] + 0u);
    ctx.set_gpr(31, 0x08A5CD60u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0145_entry, 145u, 180u, 0x08A48ED8u>(ctx, &aot_mem) && ctx.pc == 0x08A5CD60u) goto L_08A5CD60;
    return;
L_08A5CD60:
    ctx.set_gpr(3, rt.memory().aot_load32(ctx.gpr[18] + static_cast<std::uint32_t>(64)));
    { const bool branch_taken = ctx.gpr[3] == 0u;
    // nop
      if (branch_taken) {
          goto L_08A5CDBC;
      }
      goto L_08A5CD6C;
    }
L_08A5CD6C:
    ctx.set_gpr(16, rt.memory().aot_load32(ctx.gpr[3] + static_cast<std::uint32_t>(8)));
    ctx.set_gpr(17, 0u + 0u);
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_08A5CDA0;
      }
      goto L_08A5CD7C;
    }
L_08A5CD7C:
    ctx.set_gpr(2, rt.memory().aot_load32(ctx.gpr[18] + static_cast<std::uint32_t>(64)));
    ctx.set_gpr(3, ctx.gpr[17] << 2u);
    ctx.set_gpr(2, rt.memory().aot_load32(ctx.gpr[2] + static_cast<std::uint32_t>(16)));
    ctx.set_gpr(2, ctx.gpr[2] + ctx.gpr[3]);
    ctx.set_gpr(5, rt.memory().aot_load32(ctx.gpr[2] + static_cast<std::uint32_t>(0)));
    ctx.set_gpr(4, ctx.gpr[18] + 0u);
    ctx.set_gpr(31, 0x08A5CD9Cu);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0145_entry, 145u, 207u, 0x08A49074u>(ctx, &aot_mem) && ctx.pc == 0x08A5CD9Cu) goto L_08A5CD9C;
    return;
L_08A5CD9C:
    ctx.set_gpr(17, ctx.gpr[17] + static_cast<std::uint32_t>(1));
    goto L_08A5CDA0;
L_08A5CDA0:
    ctx.set_gpr(2, static_cast<std::int32_t>(ctx.gpr[17]) < static_cast<std::int32_t>(ctx.gpr[16]) ? 1u : 0u);
    { const bool branch_taken = ctx.gpr[2] != 0u;
    // nop
      if (branch_taken) {
          goto L_08A5CD7C;
      }
      goto L_08A5CDAC;
    }
L_08A5CDAC:
    ctx.set_gpr(4, ctx.gpr[18] + static_cast<std::uint32_t>(64));
    ctx.set_gpr(5, 0u + 0u);
    ctx.set_gpr(31, 0x08A5CDBCu);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0085_entry, 85u, 61u, 0x089584C4u>(ctx, &aot_mem) && ctx.pc == 0x08A5CDBCu) goto L_08A5CDBC;
    return;
L_08A5CDBC:
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
L_08A5CDD8:
    ctx.set_gpr(29, ctx.gpr[29] + static_cast<std::uint32_t>(-32));
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(28), ctx.gpr[31]);
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(24), ctx.gpr[20]);
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(20), ctx.gpr[19]);
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(16), ctx.gpr[18]);
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(12), ctx.gpr[17]);
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(8), ctx.gpr[16]);
    ctx.set_gpr(19, ctx.gpr[4] + 0u);
    ctx.set_gpr(25, rt.memory().aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(0)));
    ctx.set_gpr(25, rt.memory().aot_load32(ctx.gpr[25] + static_cast<std::uint32_t>(88)));
    jump_target = ctx.gpr[25];
    ctx.set_gpr(31, 0x08A5CE08u);
    // nop
    ctx.pc = jump_target;
    if (rt.invoke_chained_call(ctx, &aot_mem) && ctx.pc == 0x08A5CE08u) goto L_08A5CE08;
    return;
L_08A5CE08:
    ctx.set_gpr(18, ctx.gpr[2] + 0u);
    ctx.set_gpr(4, ctx.gpr[18] + 0u);
    ctx.set_gpr(31, 0x08A5CE18u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0080_entry, 80u, 236u, 0x089451A8u>(ctx, &aot_mem) && ctx.pc == 0x08A5CE18u) goto L_08A5CE18;
    return;
L_08A5CE18:
    ctx.set_gpr(16, ctx.gpr[2] + 0u);
    ctx.set_gpr(17, 0u + 0u);
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_08A5CED0;
      }
      goto L_08A5CE28;
    }
L_08A5CE28:
    ctx.set_gpr(4, ctx.gpr[18] + 0u);
    ctx.set_gpr(5, ctx.gpr[17] + 0u);
    ctx.set_gpr(31, 0x08A5CE38u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0080_entry, 80u, 148u, 0x08944B4Cu>(ctx, &aot_mem) && ctx.pc == 0x08A5CE38u) goto L_08A5CE38;
    return;
L_08A5CE38:
    ctx.set_gpr(20, ctx.gpr[2] + 0u);
    { const bool branch_taken = ctx.gpr[20] == 0u;
    // nop
      if (branch_taken) {
          goto L_08A5CE68;
      }
      goto L_08A5CE44;
    }
L_08A5CE44:
    ctx.set_gpr(4, ctx.gpr[20] + 0u);
    ctx.set_gpr(2, 2245u << 16u);
    ctx.set_gpr(5, rt.memory().aot_load32(ctx.gpr[2] + static_cast<std::uint32_t>(26984)));
    ctx.set_gpr(31, 0x08A5CE58u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0080_entry, 80u, 857u, 0x08947F8Cu>(ctx, &aot_mem) && ctx.pc == 0x08A5CE58u) goto L_08A5CE58;
    return;
L_08A5CE58:
    { const bool branch_taken = ctx.gpr[2] == 0u;
    // nop
      if (branch_taken) {
          goto L_08A5CE68;
      }
      goto L_08A5CE60;
    }
L_08A5CE60:
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_08A5CE6C;
      }
      goto L_08A5CE68;
    }
L_08A5CE68:
    ctx.set_gpr(20, 0u + 0u);
    goto L_08A5CE6C;
L_08A5CE6C:
    { const bool branch_taken = ctx.gpr[20] == 0u;
    // nop
      if (branch_taken) {
          goto L_08A5CECC;
      }
      goto L_08A5CE74;
    }
L_08A5CE74:
    ctx.set_gpr(2, rt.memory().aot_load32(ctx.gpr[20] + static_cast<std::uint32_t>(8)));
    ctx.set_gpr(2, ctx.gpr[19] + ctx.gpr[2]);
    ctx.set_gpr(20, rt.memory().aot_load32(ctx.gpr[2] + static_cast<std::uint32_t>(0)));
    { const bool branch_taken = ctx.gpr[20] == 0u;
    // nop
      if (branch_taken) {
          goto L_08A5CEAC;
      }
      goto L_08A5CE88;
    }
L_08A5CE88:
    ctx.set_gpr(4, ctx.gpr[20] + 0u);
    ctx.set_gpr(2, 2245u << 16u);
    ctx.set_gpr(5, rt.memory().aot_load32(ctx.gpr[2] + static_cast<std::uint32_t>(25616)));
    ctx.set_gpr(31, 0x08A5CE9Cu);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0080_entry, 80u, 857u, 0x08947F8Cu>(ctx, &aot_mem) && ctx.pc == 0x08A5CE9Cu) goto L_08A5CE9C;
    return;
L_08A5CE9C:
    { const bool branch_taken = ctx.gpr[2] == 0u;
    // nop
      if (branch_taken) {
          goto L_08A5CEAC;
      }
      goto L_08A5CEA4;
    }
L_08A5CEA4:
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_08A5CEB0;
      }
      goto L_08A5CEAC;
    }
L_08A5CEAC:
    ctx.set_gpr(20, 0u + 0u);
    goto L_08A5CEB0;
L_08A5CEB0:
    { const bool branch_taken = ctx.gpr[20] == 0u;
    // nop
      if (branch_taken) {
          goto L_08A5CECC;
      }
      goto L_08A5CEB8;
    }
L_08A5CEB8:
    ctx.set_gpr(4, ctx.gpr[20] + 0u);
    ctx.set_gpr(25, rt.memory().aot_load32(ctx.gpr[20] + static_cast<std::uint32_t>(0)));
    ctx.set_gpr(25, rt.memory().aot_load32(ctx.gpr[25] + static_cast<std::uint32_t>(112)));
    jump_target = ctx.gpr[25];
    ctx.set_gpr(31, 0x08A5CECCu);
    // nop
    ctx.pc = jump_target;
    if (rt.invoke_chained_call(ctx, &aot_mem) && ctx.pc == 0x08A5CECCu) goto L_08A5CECC;
    return;
L_08A5CECC:
    ctx.set_gpr(17, ctx.gpr[17] + static_cast<std::uint32_t>(1));
    goto L_08A5CED0;
L_08A5CED0:
    ctx.set_gpr(2, static_cast<std::int32_t>(ctx.gpr[17]) < static_cast<std::int32_t>(ctx.gpr[16]) ? 1u : 0u);
    { const bool branch_taken = ctx.gpr[2] != 0u;
    // nop
      if (branch_taken) {
          goto L_08A5CE28;
      }
      goto L_08A5CEDC;
    }
L_08A5CEDC:
    ctx.set_gpr(4, rt.memory().aot_load32(ctx.gpr[19] + static_cast<std::uint32_t>(108)));
    ctx.set_gpr(25, rt.memory().aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(0)));
    ctx.set_gpr(25, rt.memory().aot_load32(ctx.gpr[25] + static_cast<std::uint32_t>(124)));
    jump_target = ctx.gpr[25];
    ctx.set_gpr(31, 0x08A5CEF0u);
    // nop
    ctx.pc = jump_target;
    if (rt.invoke_chained_call(ctx, &aot_mem) && ctx.pc == 0x08A5CEF0u) goto L_08A5CEF0;
    return;
L_08A5CEF0:
    ctx.set_gpr(31, 0x08A5CEF8u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0149_entry, 149u, 744u, 0x08A5BC40u>(ctx, &aot_mem) && ctx.pc == 0x08A5CEF8u) goto L_08A5CEF8;
    return;
L_08A5CEF8:
    rt.memory().aot_store32(ctx.gpr[19] + static_cast<std::uint32_t>(104), 0u);
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
L_08A5CF20:
    ctx.set_gpr(29, ctx.gpr[29] + static_cast<std::uint32_t>(-304));
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(12), ctx.gpr[31]);
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(8), ctx.gpr[17]);
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(4), ctx.gpr[16]);
    ctx.set_gpr(17, ctx.gpr[4] + 0u);
    ctx.set_gpr(16, ctx.gpr[6] + 0u);
    ctx.set_gpr(2, rt.memory().aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(64)));
    { const bool branch_taken = ctx.gpr[2] == 0u;
    // nop
      if (branch_taken) {
          goto L_08A5CF84;
      }
      goto L_08A5CF44;
    }
L_08A5CF44:
    ctx.fpr[0] = std::bit_cast<float>(rt.memory().aot_load32(ctx.gpr[2] + static_cast<std::uint32_t>(128)));
    rt.memory().aot_store32(ctx.gpr[17] + static_cast<std::uint32_t>(24), std::bit_cast<std::uint32_t>(ctx.fpr[0]));
    ctx.fpr[0] = std::bit_cast<float>(rt.memory().aot_load32(ctx.gpr[2] + static_cast<std::uint32_t>(132)));
    rt.memory().aot_store32(ctx.gpr[17] + static_cast<std::uint32_t>(28), std::bit_cast<std::uint32_t>(ctx.fpr[0]));
    ctx.fpr[0] = std::bit_cast<float>(rt.memory().aot_load32(ctx.gpr[2] + static_cast<std::uint32_t>(136)));
    rt.memory().aot_store32(ctx.gpr[17] + static_cast<std::uint32_t>(32), std::bit_cast<std::uint32_t>(ctx.fpr[0]));
    ctx.set_gpr(2, rt.memory().aot_load32(ctx.gpr[17] + static_cast<std::uint32_t>(64)));
    ctx.fpr[0] = std::bit_cast<float>(rt.memory().aot_load32(ctx.gpr[2] + static_cast<std::uint32_t>(116)));
    rt.memory().aot_store32(ctx.gpr[17] + static_cast<std::uint32_t>(12), std::bit_cast<std::uint32_t>(ctx.fpr[0]));
    ctx.fpr[0] = std::bit_cast<float>(rt.memory().aot_load32(ctx.gpr[2] + static_cast<std::uint32_t>(120)));
    rt.memory().aot_store32(ctx.gpr[17] + static_cast<std::uint32_t>(16), std::bit_cast<std::uint32_t>(ctx.fpr[0]));
    ctx.fpr[0] = std::bit_cast<float>(rt.memory().aot_load32(ctx.gpr[2] + static_cast<std::uint32_t>(124)));
    rt.memory().aot_store32(ctx.gpr[17] + static_cast<std::uint32_t>(20), std::bit_cast<std::uint32_t>(ctx.fpr[0]));
    ctx.set_gpr(2, rt.memory().aot_load32(ctx.gpr[17] + static_cast<std::uint32_t>(64)));
    ctx.fpr[0] = std::bit_cast<float>(rt.memory().aot_load32(ctx.gpr[2] + static_cast<std::uint32_t>(96)));
    rt.memory().aot_store32(ctx.gpr[17] + static_cast<std::uint32_t>(36), std::bit_cast<std::uint32_t>(ctx.fpr[0]));
    goto L_08A5CF84;
L_08A5CF84:
    ctx.set_gpr(4, ctx.gpr[29] + static_cast<std::uint32_t>(240));
    ctx.set_gpr(5, ctx.gpr[17] + static_cast<std::uint32_t>(12));
    ctx.set_gpr(6, ctx.gpr[17] + static_cast<std::uint32_t>(24));
    ctx.set_gpr(7, ctx.gpr[17] + static_cast<std::uint32_t>(48));
    ctx.set_gpr(31, 0x08A5CF9Cu);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0127_entry, 127u, 91u, 0x08A01240u>(ctx, &aot_mem) && ctx.pc == 0x08A5CF9Cu) goto L_08A5CF9C;
    return;
L_08A5CF9C:
    ctx.fpr[1] = std::bit_cast<float>(rt.memory().aot_load32(ctx.gpr[17] + static_cast<std::uint32_t>(36)));
    ctx.set_gpr(2, 16384u << 16u);
    ctx.fpr[0] = std::bit_cast<float>(ctx.gpr[2]);
    { const float fs = ctx.fpr[0]; const float ft = ctx.fpr[1]; if ((std::isinf(fs) && ft == 0.0f) || (std::isinf(ft) && fs == 0.0f)) ctx.set_fpr_bits(1, 0x7FC00000u); else ctx.fpr[1] = fs * ft; }
    ctx.fpr[0] = std::bit_cast<float>(rt.memory().aot_load32(ctx.gpr[28] + static_cast<std::uint32_t>(-32268)));
    { const float fs = ctx.fpr[0]; const float ft = ctx.fpr[1]; if ((std::isinf(fs) && ft == 0.0f) || (std::isinf(ft) && fs == 0.0f)) ctx.set_fpr_bits(12, 0x7FC00000u); else ctx.fpr[12] = fs * ft; }
    ctx.set_gpr(2, 16256u << 16u);
    ctx.fpr[14] = std::bit_cast<float>(ctx.gpr[2]);
    ctx.set_gpr(4, ctx.gpr[29] + static_cast<std::uint32_t>(176));
    ctx.set_fpr_bits(13, ctx.fpr_bits(12));
    ctx.fpr[15] = std::bit_cast<float>(rt.memory().aot_load32(ctx.gpr[17] + static_cast<std::uint32_t>(40)));
    ctx.fpr[16] = std::bit_cast<float>(rt.memory().aot_load32(ctx.gpr[17] + static_cast<std::uint32_t>(44)));
    ctx.set_gpr(31, 0x08A5CFD4u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0127_entry, 127u, 71u, 0x08A00E24u>(ctx, &aot_mem) && ctx.pc == 0x08A5CFD4u) goto L_08A5CFD4;
    return;
L_08A5CFD4:
    ctx.set_gpr(5, ctx.gpr[16] + static_cast<std::uint32_t>(164));
    ctx.set_gpr(4, ctx.gpr[29] + static_cast<std::uint32_t>(112));
    ctx.set_gpr(31, 0x08A5CFE4u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0126_entry, 126u, 747u, 0x089FFC4Cu>(ctx, &aot_mem) && ctx.pc == 0x08A5CFE4u) goto L_08A5CFE4;
    return;
L_08A5CFE4:
    ctx.set_gpr(4, ctx.gpr[29] + static_cast<std::uint32_t>(112));
    ctx.set_gpr(5, ctx.gpr[4] + 0u);
    ctx.set_gpr(6, ctx.gpr[29] + static_cast<std::uint32_t>(240));
    ctx.set_gpr(31, 0x08A5CFF8u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0126_entry, 126u, 727u, 0x089FF9E0u>(ctx, &aot_mem) && ctx.pc == 0x08A5CFF8u) goto L_08A5CFF8;
    return;
L_08A5CFF8:
    ctx.set_gpr(4, ctx.gpr[29] + static_cast<std::uint32_t>(112));
    ctx.set_gpr(5, ctx.gpr[4] + 0u);
    ctx.set_gpr(6, ctx.gpr[29] + static_cast<std::uint32_t>(176));
    ctx.set_gpr(31, 0x08A5D00Cu);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0126_entry, 126u, 727u, 0x089FF9E0u>(ctx, &aot_mem) && ctx.pc == 0x08A5D00Cu) goto L_08A5D00C;
    return;
L_08A5D00C:
    ctx.set_gpr(4, ctx.gpr[29] + static_cast<std::uint32_t>(48));
    ctx.set_gpr(31, 0x08A5D018u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0126_entry, 126u, 723u, 0x089FF868u>(ctx, &aot_mem) && ctx.pc == 0x08A5D018u) goto L_08A5D018;
    return;
L_08A5D018:
    ctx.set_gpr(2, 16128u << 16u);
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(36), ctx.gpr[2]);
    ctx.set_gpr(2, 48896u << 16u);
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(40), ctx.gpr[2]);
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(44), 0u);
    ctx.set_gpr(4, ctx.gpr[29] + static_cast<std::uint32_t>(48));
    ctx.set_gpr(5, ctx.gpr[29] + static_cast<std::uint32_t>(36));
    ctx.set_gpr(31, 0x08A5D03Cu);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0126_entry, 126u, 752u, 0x089FFE94u>(ctx, &aot_mem) && ctx.pc == 0x08A5D03Cu) goto L_08A5D03C;
    return;
L_08A5D03C:
    ctx.set_gpr(2, 16128u << 16u);
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(24), ctx.gpr[2]);
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(28), ctx.gpr[2]);
    ctx.set_gpr(2, 16256u << 16u);
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(32), ctx.gpr[2]);
    ctx.set_gpr(4, ctx.gpr[29] + static_cast<std::uint32_t>(48));
    ctx.set_gpr(5, ctx.gpr[29] + static_cast<std::uint32_t>(24));
    ctx.set_gpr(31, 0x08A5D060u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0126_entry, 126u, 749u, 0x089FFD2Cu>(ctx, &aot_mem) && ctx.pc == 0x08A5D060u) goto L_08A5D060;
    return;
L_08A5D060:
    ctx.set_gpr(4, ctx.gpr[29] + static_cast<std::uint32_t>(112));
    ctx.set_gpr(5, ctx.gpr[4] + 0u);
    ctx.set_gpr(6, ctx.gpr[29] + static_cast<std::uint32_t>(48));
    ctx.set_gpr(31, 0x08A5D074u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0126_entry, 126u, 727u, 0x089FF9E0u>(ctx, &aot_mem) && ctx.pc == 0x08A5D074u) goto L_08A5D074;
    return;
L_08A5D074:
    ctx.set_gpr(4, rt.memory().aot_load32(ctx.gpr[17] + static_cast<std::uint32_t>(8)));
    ctx.set_gpr(5, ctx.gpr[29] + static_cast<std::uint32_t>(112));
    ctx.set_gpr(25, rt.memory().aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(0)));
    ctx.set_gpr(25, rt.memory().aot_load32(ctx.gpr[25] + static_cast<std::uint32_t>(136)));
    jump_target = ctx.gpr[25];
    ctx.set_gpr(31, 0x08A5D08Cu);
    // nop
    ctx.pc = jump_target;
    if (rt.invoke_chained_call(ctx, &aot_mem) && ctx.pc == 0x08A5D08Cu) goto L_08A5D08C;
    return;
L_08A5D08C:
    ctx.set_gpr(31, rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(12)));
    ctx.set_gpr(17, rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(8)));
    ctx.set_gpr(16, rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(4)));
    ctx.set_gpr(29, ctx.gpr[29] + static_cast<std::uint32_t>(304));
    jump_target = ctx.gpr[31];
    // nop
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_08A5D0A4:
    ctx.set_gpr(29, ctx.gpr[29] + static_cast<std::uint32_t>(-16));
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(12), ctx.gpr[31]);
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(8), ctx.gpr[18]);
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(4), ctx.gpr[17]);
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(0), ctx.gpr[16]);
    ctx.set_gpr(18, ctx.gpr[4] + 0u);
    ctx.set_gpr(17, ctx.gpr[5] + 0u);
    ctx.set_gpr(2, rt.memory().aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(8)));
    { const bool branch_taken = ctx.gpr[2] != 0u;
    // nop
      if (branch_taken) {
          goto L_08A5D0D8;
      }
      goto L_08A5D0CC;
    }
L_08A5D0CC:
    ctx.set_gpr(2, 0u + 0u);
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_08A5D1E4;
      }
      goto L_08A5D0D8;
    }
L_08A5D0D8:
    ctx.set_gpr(4, rt.memory().aot_load32(ctx.gpr[18] + static_cast<std::uint32_t>(68)));
    { const bool branch_taken = ctx.gpr[4] != 0u;
    // nop
      if (branch_taken) {
          goto L_08A5D0F0;
      }
      goto L_08A5D0E4;
    }
L_08A5D0E4:
    ctx.set_gpr(2, 0u + 0u);
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_08A5D1E4;
      }
      goto L_08A5D0F0;
    }
L_08A5D0F0:
    ctx.set_gpr(5, 0u + 0u);
    ctx.set_gpr(25, rt.memory().aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(0)));
    ctx.set_gpr(25, rt.memory().aot_load32(ctx.gpr[25] + static_cast<std::uint32_t>(144)));
    jump_target = ctx.gpr[25];
    ctx.set_gpr(31, 0x08A5D104u);
    // nop
    ctx.pc = jump_target;
    if (rt.invoke_chained_call(ctx, &aot_mem) && ctx.pc == 0x08A5D104u) goto L_08A5D104;
    return;
L_08A5D104:
    ctx.set_gpr(4, rt.memory().aot_load32(ctx.gpr[18] + static_cast<std::uint32_t>(68)));
    ctx.set_gpr(5, 0u + 0u);
    ctx.set_gpr(25, rt.memory().aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(0)));
    ctx.set_gpr(25, rt.memory().aot_load32(ctx.gpr[25] + static_cast<std::uint32_t>(148)));
    jump_target = ctx.gpr[25];
    ctx.set_gpr(31, 0x08A5D11Cu);
    // nop
    ctx.pc = jump_target;
    if (rt.invoke_chained_call(ctx, &aot_mem) && ctx.pc == 0x08A5D11Cu) goto L_08A5D11C;
    return;
L_08A5D11C:
    ctx.set_gpr(4, rt.memory().aot_load32(ctx.gpr[18] + static_cast<std::uint32_t>(68)));
    ctx.set_gpr(5, 0u + 0u);
    ctx.set_gpr(31, 0x08A5D12Cu);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0051_entry, 51u, 29u, 0x088D01E0u>(ctx, &aot_mem) && ctx.pc == 0x08A5D12Cu) goto L_08A5D12C;
    return;
L_08A5D12C:
    ctx.set_gpr(16, ctx.gpr[2] + 0u);
    { const bool branch_taken = ctx.gpr[16] != 0u;
    // nop
      if (branch_taken) {
          goto L_08A5D144;
      }
      goto L_08A5D138;
    }
L_08A5D138:
    ctx.set_gpr(2, 0u + 0u);
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_08A5D1E4;
      }
      goto L_08A5D144;
    }
L_08A5D144:
    ctx.set_gpr(2, rt.memory().aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(16)));
    ctx.set_gpr(5, 0u + static_cast<std::uint32_t>(1));
    { const bool branch_taken = ctx.gpr[2] == ctx.gpr[5];
    // nop
      if (branch_taken) {
          goto L_08A5D160;
      }
      goto L_08A5D154;
    }
L_08A5D154:
    ctx.set_gpr(2, 0u + 0u);
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_08A5D1E4;
      }
      goto L_08A5D160;
    }
L_08A5D160:
    ctx.set_gpr(4, ctx.gpr[16] + 0u);
    ctx.set_gpr(31, 0x08A5D16Cu);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0103_entry, 103u, 323u, 0x089A16CCu>(ctx, &aot_mem) && ctx.pc == 0x08A5D16Cu) goto L_08A5D16C;
    return;
L_08A5D16C:
    { const bool branch_taken = ctx.gpr[2] != 0u;
    // nop
      if (branch_taken) {
          goto L_08A5D180;
      }
      goto L_08A5D174;
    }
L_08A5D174:
    ctx.set_gpr(2, 0u + 0u);
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_08A5D1E4;
      }
      goto L_08A5D180;
    }
L_08A5D180:
    ctx.set_gpr(2, rt.memory().aot_load32(ctx.gpr[17] + static_cast<std::uint32_t>(36)));
    ctx.set_gpr(2, rt.memory().aot_load32(ctx.gpr[2] + static_cast<std::uint32_t>(8)));
    ctx.set_gpr(2, rt.memory().aot_load32(ctx.gpr[2] + static_cast<std::uint32_t>(8)));
    ctx.set_gpr(5, 0u + static_cast<std::uint32_t>(1));
    { const bool branch_taken = ctx.gpr[2] != ctx.gpr[5];
    // nop
      if (branch_taken) {
          goto L_08A5D1B4;
      }
      goto L_08A5D198;
    }
L_08A5D198:
    ctx.set_gpr(4, ctx.gpr[16] + 0u);
    ctx.set_gpr(5, 0u + 0u);
    ctx.set_gpr(6, ctx.gpr[16] + 0u);
    ctx.set_gpr(31, 0x08A5D1ACu);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0103_entry, 103u, 415u, 0x089A1BD8u>(ctx, &aot_mem) && ctx.pc == 0x08A5D1ACu) goto L_08A5D1AC;
    return;
L_08A5D1AC:
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_08A5D1C4;
      }
      goto L_08A5D1B4;
    }
L_08A5D1B4:
    ctx.set_gpr(4, ctx.gpr[16] + 0u);
    ctx.set_gpr(6, ctx.gpr[16] + 0u);
    ctx.set_gpr(31, 0x08A5D1C4u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0103_entry, 103u, 415u, 0x089A1BD8u>(ctx, &aot_mem) && ctx.pc == 0x08A5D1C4u) goto L_08A5D1C4;
    return;
L_08A5D1C4:
    ctx.set_gpr(4, ctx.gpr[17] + 0u);
    ctx.set_gpr(31, 0x08A5D1D0u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0148_entry, 148u, 336u, 0x08A55708u>(ctx, &aot_mem) && ctx.pc == 0x08A5D1D0u) goto L_08A5D1D0;
    return;
L_08A5D1D0:
    ctx.set_gpr(4, ctx.gpr[18] + static_cast<std::uint32_t>(64));
    ctx.set_gpr(5, ctx.gpr[2] + 0u);
    ctx.set_gpr(31, 0x08A5D1E0u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0085_entry, 85u, 61u, 0x089584C4u>(ctx, &aot_mem) && ctx.pc == 0x08A5D1E0u) goto L_08A5D1E0;
    return;
L_08A5D1E0:
    ctx.set_gpr(2, 0u + static_cast<std::uint32_t>(1));
    goto L_08A5D1E4;
L_08A5D1E4:
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
L_08A5D200:
    ctx.set_gpr(29, ctx.gpr[29] + static_cast<std::uint32_t>(-16));
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(12), ctx.gpr[31]);
    ctx.set_gpr(4, ctx.gpr[4] + static_cast<std::uint32_t>(20));
    ctx.set_gpr(31, 0x08A5D214u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0085_entry, 85u, 61u, 0x089584C4u>(ctx, &aot_mem) && ctx.pc == 0x08A5D214u) goto L_08A5D214;
    return;
L_08A5D214:
    ctx.set_gpr(31, rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(12)));
    ctx.set_gpr(29, ctx.gpr[29] + static_cast<std::uint32_t>(16));
    jump_target = ctx.gpr[31];
    // nop
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_08A5D224:
    ctx.set_gpr(29, ctx.gpr[29] + static_cast<std::uint32_t>(-16));
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(12), ctx.gpr[31]);
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(8), ctx.gpr[18]);
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(4), ctx.gpr[17]);
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(0), ctx.gpr[16]);
    ctx.set_gpr(18, ctx.gpr[4] + 0u);
    ctx.set_gpr(17, ctx.gpr[5] + 0u);
    ctx.set_gpr(16, ctx.gpr[6] + 0u);
    ctx.set_gpr(3, rt.memory().aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(8)));
    ctx.set_gpr(2, 0u + static_cast<std::uint32_t>(-2));
    ctx.set_gpr(5, ctx.gpr[3] & ctx.gpr[2]);
    ctx.set_gpr(4, ctx.gpr[17] + 0u);
    ctx.set_gpr(31, 0x08A5D25Cu);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0004_entry, 4u, 480u, 0x08816610u>(ctx, &aot_mem) && ctx.pc == 0x08A5D25Cu) goto L_08A5D25C;
    return;
L_08A5D25C:
    { const bool branch_taken = ctx.gpr[2] != 0u;
    // nop
      if (branch_taken) {
          goto L_08A5D270;
      }
      goto L_08A5D264;
    }
L_08A5D264:
    ctx.set_gpr(2, rt.memory().aot_load32(ctx.gpr[18] + static_cast<std::uint32_t>(20)));
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_08A5D284;
      }
      goto L_08A5D270;
    }
L_08A5D270:
    ctx.set_gpr(4, ctx.gpr[18] + 0u);
    ctx.set_gpr(5, ctx.gpr[17] + 0u);
    ctx.set_gpr(6, ctx.gpr[16] + 0u);
    ctx.set_gpr(31, 0x08A5D284u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0072_entry, 72u, 599u, 0x089269F0u>(ctx, &aot_mem) && ctx.pc == 0x08A5D284u) goto L_08A5D284;
    return;
L_08A5D284:
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
L_08A5D2A0:
    ctx.set_gpr(2, 0u + 0u);
    ctx.set_gpr(3, 0u + 0u);
    jump_target = ctx.gpr[31];
    // nop
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_08A5D2B0:
    ctx.set_gpr(2, 0u + 0u);
    ctx.set_gpr(3, 0u + 0u);
    jump_target = ctx.gpr[31];
    // nop
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_08A5D2C0:
    ctx.set_gpr(29, ctx.gpr[29] + static_cast<std::uint32_t>(-16));
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(12), ctx.gpr[31]);
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(8), ctx.gpr[16]);
    ctx.set_gpr(16, ctx.gpr[4] + 0u);
    ctx.set_gpr(31, 0x08A5D2D8u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0149_entry, 149u, 217u, 0x08A590A8u>(ctx, &aot_mem) && ctx.pc == 0x08A5D2D8u) goto L_08A5D2D8;
    return;
L_08A5D2D8:
    ctx.set_gpr(4, ctx.gpr[16] + 0u);
    ctx.set_gpr(25, rt.memory().aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(0)));
    ctx.set_gpr(25, rt.memory().aot_load32(ctx.gpr[25] + static_cast<std::uint32_t>(88)));
    jump_target = ctx.gpr[25];
    ctx.set_gpr(31, 0x08A5D2ECu);
    // nop
    ctx.pc = jump_target;
    if (rt.invoke_chained_call(ctx, &aot_mem) && ctx.pc == 0x08A5D2ECu) goto L_08A5D2EC;
    return;
L_08A5D2EC:
    ctx.set_gpr(4, ctx.gpr[2] + 0u);
    ctx.set_gpr(5, 0u + static_cast<std::uint32_t>(1));
    ctx.set_gpr(31, 0x08A5D2FCu);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0080_entry, 80u, 118u, 0x089448B4u>(ctx, &aot_mem) && ctx.pc == 0x08A5D2FCu) goto L_08A5D2FC;
    return;
L_08A5D2FC:
    { const bool branch_taken = ctx.gpr[2] != 0u;
    // nop
      if (branch_taken) {
          goto L_08A5D30C;
      }
      goto L_08A5D304;
    }
L_08A5D304:
    ctx.set_gpr(31, 0x08A5D30Cu);
    // nop
    goto L_08A5D414;
L_08A5D30C:
    ctx.set_gpr(31, rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(12)));
    ctx.set_gpr(16, rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(8)));
    ctx.set_gpr(29, ctx.gpr[29] + static_cast<std::uint32_t>(16));
    jump_target = ctx.gpr[31];
    // nop
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_08A5D320:
    ctx.set_gpr(2, 2246u << 16u);
    ctx.set_gpr(2, rt.memory().aot_load32(ctx.gpr[2] + static_cast<std::uint32_t>(-25672)));
    jump_target = ctx.gpr[31];
    // nop
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_08A5D330:
    ctx.set_gpr(29, ctx.gpr[29] + static_cast<std::uint32_t>(-16));
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(12), ctx.gpr[31]);
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(8), ctx.gpr[16]);
    ctx.set_gpr(16, ctx.gpr[4] + 0u);
    ctx.set_gpr(31, 0x08A5D348u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0080_entry, 80u, 425u, 0x08945E9Cu>(ctx, &aot_mem) && ctx.pc == 0x08A5D348u) goto L_08A5D348;
    return;
L_08A5D348:
    ctx.set_gpr(4, ctx.gpr[16] + 0u);
    ctx.set_gpr(31, 0x08A5D354u);
    // nop
    goto L_08A5D368;
L_08A5D354:
    ctx.set_gpr(31, rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(12)));
    ctx.set_gpr(16, rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(8)));
    ctx.set_gpr(29, ctx.gpr[29] + static_cast<std::uint32_t>(16));
    jump_target = ctx.gpr[31];
    // nop
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_08A5D368:
    jump_target = ctx.gpr[31];
    // nop
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_08A5D370:
    ctx.set_gpr(29, ctx.gpr[29] + static_cast<std::uint32_t>(-16));
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(12), ctx.gpr[31]);
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(8), ctx.gpr[18]);
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(4), ctx.gpr[17]);
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(0), ctx.gpr[16]);
    ctx.set_gpr(18, ctx.gpr[4] + 0u);
    ctx.set_gpr(31, 0x08A5D390u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0145_entry, 145u, 180u, 0x08A48ED8u>(ctx, &aot_mem) && ctx.pc == 0x08A5D390u) goto L_08A5D390;
    return;
L_08A5D390:
    ctx.set_gpr(4, ctx.gpr[18] + 0u);
    ctx.set_gpr(31, 0x08A5D39Cu);
    // nop
    goto L_08A5D368;
L_08A5D39C:
    ctx.set_gpr(3, rt.memory().aot_load32(ctx.gpr[18] + static_cast<std::uint32_t>(88)));
    { const bool branch_taken = ctx.gpr[3] == 0u;
    // nop
      if (branch_taken) {
          goto L_08A5D3F8;
      }
      goto L_08A5D3A8;
    }
L_08A5D3A8:
    ctx.set_gpr(16, rt.memory().aot_load32(ctx.gpr[3] + static_cast<std::uint32_t>(8)));
    ctx.set_gpr(17, 0u + 0u);
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_08A5D3DC;
      }
      goto L_08A5D3B8;
    }
L_08A5D3B8:
    ctx.set_gpr(2, rt.memory().aot_load32(ctx.gpr[18] + static_cast<std::uint32_t>(88)));
    ctx.set_gpr(3, ctx.gpr[17] << 2u);
    ctx.set_gpr(2, rt.memory().aot_load32(ctx.gpr[2] + static_cast<std::uint32_t>(16)));
    ctx.set_gpr(2, ctx.gpr[2] + ctx.gpr[3]);
    ctx.set_gpr(5, rt.memory().aot_load32(ctx.gpr[2] + static_cast<std::uint32_t>(0)));
    ctx.set_gpr(4, ctx.gpr[18] + 0u);
    ctx.set_gpr(31, 0x08A5D3D8u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0145_entry, 145u, 207u, 0x08A49074u>(ctx, &aot_mem) && ctx.pc == 0x08A5D3D8u) goto L_08A5D3D8;
    return;
L_08A5D3D8:
    ctx.set_gpr(17, ctx.gpr[17] + static_cast<std::uint32_t>(1));
    goto L_08A5D3DC;
L_08A5D3DC:
    ctx.set_gpr(2, static_cast<std::int32_t>(ctx.gpr[17]) < static_cast<std::int32_t>(ctx.gpr[16]) ? 1u : 0u);
    { const bool branch_taken = ctx.gpr[2] != 0u;
    // nop
      if (branch_taken) {
          goto L_08A5D3B8;
      }
      goto L_08A5D3E8;
    }
L_08A5D3E8:
    ctx.set_gpr(4, ctx.gpr[18] + static_cast<std::uint32_t>(88));
    ctx.set_gpr(5, 0u + 0u);
    ctx.set_gpr(31, 0x08A5D3F8u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0085_entry, 85u, 61u, 0x089584C4u>(ctx, &aot_mem) && ctx.pc == 0x08A5D3F8u) goto L_08A5D3F8;
    return;
L_08A5D3F8:
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
L_08A5D414:
    ctx.set_gpr(29, ctx.gpr[29] + static_cast<std::uint32_t>(-16));
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(12), ctx.gpr[31]);
    ctx.set_gpr(31, 0x08A5D424u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0078_entry, 78u, 216u, 0x0893CDDCu>(ctx, &aot_mem) && ctx.pc == 0x08A5D424u) goto L_08A5D424;
    return;
L_08A5D424:
    ctx.set_gpr(4, rt.memory().aot_load32(ctx.gpr[2] + static_cast<std::uint32_t>(0)));
    ctx.set_gpr(31, 0x08A5D430u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0078_entry, 78u, 199u, 0x0893CC68u>(ctx, &aot_mem) && ctx.pc == 0x08A5D430u) goto L_08A5D430;
    return;
L_08A5D430:
    ctx.set_gpr(4, ctx.gpr[2] + 0u);
    ctx.set_gpr(31, 0x08A5D43Cu);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0043_entry, 43u, 596u, 0x088B3744u>(ctx, &aot_mem) && ctx.pc == 0x08A5D43Cu) goto L_08A5D43C;
    return;
L_08A5D43C:
    ctx.set_gpr(3, 2246u << 16u);
    rt.memory().aot_store32(ctx.gpr[3] + static_cast<std::uint32_t>(-21116), ctx.gpr[2]);
    ctx.set_gpr(31, 0x08A5D44Cu);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0078_entry, 78u, 216u, 0x0893CDDCu>(ctx, &aot_mem) && ctx.pc == 0x08A5D44Cu) goto L_08A5D44C;
    return;
L_08A5D44C:
    ctx.set_gpr(4, rt.memory().aot_load32(ctx.gpr[2] + static_cast<std::uint32_t>(0)));
    ctx.set_gpr(31, 0x08A5D458u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0078_entry, 78u, 199u, 0x0893CC68u>(ctx, &aot_mem) && ctx.pc == 0x08A5D458u) goto L_08A5D458;
    return;
L_08A5D458:
    ctx.set_gpr(4, ctx.gpr[2] + 0u);
    ctx.set_gpr(31, 0x08A5D464u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0043_entry, 43u, 569u, 0x088B34E0u>(ctx, &aot_mem) && ctx.pc == 0x08A5D464u) goto L_08A5D464;
    return;
L_08A5D464:
    ctx.set_gpr(3, 2246u << 16u);
    rt.memory().aot_store32(ctx.gpr[3] + static_cast<std::uint32_t>(-21112), ctx.gpr[2]);
    ctx.set_gpr(31, 0x08A5D474u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0078_entry, 78u, 216u, 0x0893CDDCu>(ctx, &aot_mem) && ctx.pc == 0x08A5D474u) goto L_08A5D474;
    return;
L_08A5D474:
    ctx.set_gpr(4, rt.memory().aot_load32(ctx.gpr[2] + static_cast<std::uint32_t>(0)));
    ctx.set_gpr(31, 0x08A5D480u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0078_entry, 78u, 199u, 0x0893CC68u>(ctx, &aot_mem) && ctx.pc == 0x08A5D480u) goto L_08A5D480;
    return;
L_08A5D480:
    ctx.set_gpr(4, ctx.gpr[2] + 0u);
    ctx.set_gpr(31, 0x08A5D48Cu);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0047_entry, 47u, 194u, 0x088C11E0u>(ctx, &aot_mem) && ctx.pc == 0x08A5D48Cu) goto L_08A5D48C;
    return;
L_08A5D48C:
    ctx.set_gpr(3, 2246u << 16u);
    rt.memory().aot_store32(ctx.gpr[3] + static_cast<std::uint32_t>(-21088), ctx.gpr[2]);
    ctx.set_gpr(31, 0x08A5D49Cu);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0078_entry, 78u, 216u, 0x0893CDDCu>(ctx, &aot_mem) && ctx.pc == 0x08A5D49Cu) goto L_08A5D49C;
    return;
L_08A5D49C:
    ctx.set_gpr(4, rt.memory().aot_load32(ctx.gpr[2] + static_cast<std::uint32_t>(0)));
    ctx.set_gpr(31, 0x08A5D4A8u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0078_entry, 78u, 199u, 0x0893CC68u>(ctx, &aot_mem) && ctx.pc == 0x08A5D4A8u) goto L_08A5D4A8;
    return;
L_08A5D4A8:
    ctx.set_gpr(4, ctx.gpr[2] + 0u);
    ctx.set_gpr(31, 0x08A5D4B4u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0047_entry, 47u, 298u, 0x088C1B10u>(ctx, &aot_mem) && ctx.pc == 0x08A5D4B4u) goto L_08A5D4B4;
    return;
L_08A5D4B4:
    ctx.set_gpr(3, 2246u << 16u);
    rt.memory().aot_store32(ctx.gpr[3] + static_cast<std::uint32_t>(-21084), ctx.gpr[2]);
    ctx.set_gpr(31, 0x08A5D4C4u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0078_entry, 78u, 216u, 0x0893CDDCu>(ctx, &aot_mem) && ctx.pc == 0x08A5D4C4u) goto L_08A5D4C4;
    return;
L_08A5D4C4:
    ctx.set_gpr(4, rt.memory().aot_load32(ctx.gpr[2] + static_cast<std::uint32_t>(0)));
    ctx.set_gpr(31, 0x08A5D4D0u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0078_entry, 78u, 199u, 0x0893CC68u>(ctx, &aot_mem) && ctx.pc == 0x08A5D4D0u) goto L_08A5D4D0;
    return;
L_08A5D4D0:
    ctx.set_gpr(4, ctx.gpr[2] + 0u);
    ctx.set_gpr(31, 0x08A5D4DCu);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0130_entry, 130u, 362u, 0x08A0DE90u>(ctx, &aot_mem) && ctx.pc == 0x08A5D4DCu) goto L_08A5D4DC;
    return;
L_08A5D4DC:
    ctx.set_gpr(3, 2246u << 16u);
    rt.memory().aot_store32(ctx.gpr[3] + static_cast<std::uint32_t>(-21264), ctx.gpr[2]);
    ctx.set_gpr(31, 0x08A5D4ECu);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0078_entry, 78u, 216u, 0x0893CDDCu>(ctx, &aot_mem) && ctx.pc == 0x08A5D4ECu) goto L_08A5D4EC;
    return;
L_08A5D4EC:
    ctx.set_gpr(4, rt.memory().aot_load32(ctx.gpr[2] + static_cast<std::uint32_t>(0)));
    ctx.set_gpr(31, 0x08A5D4F8u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0078_entry, 78u, 199u, 0x0893CC68u>(ctx, &aot_mem) && ctx.pc == 0x08A5D4F8u) goto L_08A5D4F8;
    return;
L_08A5D4F8:
    ctx.set_gpr(4, ctx.gpr[2] + 0u);
    ctx.set_gpr(31, 0x08A5D504u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0130_entry, 130u, 362u, 0x08A0DE90u>(ctx, &aot_mem) && ctx.pc == 0x08A5D504u) goto L_08A5D504;
    return;
L_08A5D504:
    ctx.set_gpr(3, 2246u << 16u);
    rt.memory().aot_store32(ctx.gpr[3] + static_cast<std::uint32_t>(-21260), ctx.gpr[2]);
    ctx.set_gpr(31, 0x08A5D514u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0078_entry, 78u, 216u, 0x0893CDDCu>(ctx, &aot_mem) && ctx.pc == 0x08A5D514u) goto L_08A5D514;
    return;
L_08A5D514:
    ctx.set_gpr(4, rt.memory().aot_load32(ctx.gpr[2] + static_cast<std::uint32_t>(0)));
    ctx.set_gpr(31, 0x08A5D520u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0078_entry, 78u, 199u, 0x0893CC68u>(ctx, &aot_mem) && ctx.pc == 0x08A5D520u) goto L_08A5D520;
    return;
L_08A5D520:
    ctx.set_gpr(4, ctx.gpr[2] + 0u);
    ctx.set_gpr(31, 0x08A5D52Cu);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0043_entry, 43u, 45u, 0x088B0444u>(ctx, &aot_mem) && ctx.pc == 0x08A5D52Cu) goto L_08A5D52C;
    return;
L_08A5D52C:
    ctx.set_gpr(3, 2246u << 16u);
    rt.memory().aot_store32(ctx.gpr[3] + static_cast<std::uint32_t>(-21244), ctx.gpr[2]);
    ctx.set_gpr(31, 0x08A5D53Cu);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0078_entry, 78u, 216u, 0x0893CDDCu>(ctx, &aot_mem) && ctx.pc == 0x08A5D53Cu) goto L_08A5D53C;
    return;
L_08A5D53C:
    ctx.set_gpr(4, rt.memory().aot_load32(ctx.gpr[2] + static_cast<std::uint32_t>(0)));
    ctx.set_gpr(31, 0x08A5D548u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0078_entry, 78u, 199u, 0x0893CC68u>(ctx, &aot_mem) && ctx.pc == 0x08A5D548u) goto L_08A5D548;
    return;
L_08A5D548:
    ctx.set_gpr(4, ctx.gpr[2] + 0u);
    ctx.set_gpr(31, 0x08A5D554u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0043_entry, 43u, 45u, 0x088B0444u>(ctx, &aot_mem) && ctx.pc == 0x08A5D554u) goto L_08A5D554;
    return;
L_08A5D554:
    ctx.set_gpr(3, 2246u << 16u);
    rt.memory().aot_store32(ctx.gpr[3] + static_cast<std::uint32_t>(-21236), ctx.gpr[2]);
    ctx.set_gpr(31, 0x08A5D564u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0078_entry, 78u, 216u, 0x0893CDDCu>(ctx, &aot_mem) && ctx.pc == 0x08A5D564u) goto L_08A5D564;
    return;
L_08A5D564:
    ctx.set_gpr(4, rt.memory().aot_load32(ctx.gpr[2] + static_cast<std::uint32_t>(0)));
    ctx.set_gpr(31, 0x08A5D570u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0078_entry, 78u, 199u, 0x0893CC68u>(ctx, &aot_mem) && ctx.pc == 0x08A5D570u) goto L_08A5D570;
    return;
L_08A5D570:
    ctx.set_gpr(4, ctx.gpr[2] + 0u);
    ctx.set_gpr(31, 0x08A5D57Cu);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0043_entry, 43u, 45u, 0x088B0444u>(ctx, &aot_mem) && ctx.pc == 0x08A5D57Cu) goto L_08A5D57C;
    return;
L_08A5D57C:
    ctx.set_gpr(3, 2246u << 16u);
    rt.memory().aot_store32(ctx.gpr[3] + static_cast<std::uint32_t>(-21232), ctx.gpr[2]);
    ctx.set_gpr(31, 0x08A5D58Cu);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0078_entry, 78u, 216u, 0x0893CDDCu>(ctx, &aot_mem) && ctx.pc == 0x08A5D58Cu) goto L_08A5D58C;
    return;
L_08A5D58C:
    ctx.set_gpr(4, rt.memory().aot_load32(ctx.gpr[2] + static_cast<std::uint32_t>(0)));
    ctx.set_gpr(31, 0x08A5D598u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0078_entry, 78u, 199u, 0x0893CC68u>(ctx, &aot_mem) && ctx.pc == 0x08A5D598u) goto L_08A5D598;
    return;
L_08A5D598:
    ctx.set_gpr(4, ctx.gpr[2] + 0u);
    ctx.set_gpr(31, 0x08A5D5A4u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0043_entry, 43u, 45u, 0x088B0444u>(ctx, &aot_mem) && ctx.pc == 0x08A5D5A4u) goto L_08A5D5A4;
    return;
L_08A5D5A4:
    ctx.set_gpr(3, 2246u << 16u);
    rt.memory().aot_store32(ctx.gpr[3] + static_cast<std::uint32_t>(-21228), ctx.gpr[2]);
    ctx.set_gpr(31, 0x08A5D5B4u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0078_entry, 78u, 216u, 0x0893CDDCu>(ctx, &aot_mem) && ctx.pc == 0x08A5D5B4u) goto L_08A5D5B4;
    return;
L_08A5D5B4:
    ctx.set_gpr(4, rt.memory().aot_load32(ctx.gpr[2] + static_cast<std::uint32_t>(0)));
    ctx.set_gpr(31, 0x08A5D5C0u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0078_entry, 78u, 199u, 0x0893CC68u>(ctx, &aot_mem) && ctx.pc == 0x08A5D5C0u) goto L_08A5D5C0;
    return;
L_08A5D5C0:
    ctx.set_gpr(4, ctx.gpr[2] + 0u);
    ctx.set_gpr(31, 0x08A5D5CCu);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0043_entry, 43u, 45u, 0x088B0444u>(ctx, &aot_mem) && ctx.pc == 0x08A5D5CCu) goto L_08A5D5CC;
    return;
L_08A5D5CC:
    ctx.set_gpr(3, 2246u << 16u);
    rt.memory().aot_store32(ctx.gpr[3] + static_cast<std::uint32_t>(-21224), ctx.gpr[2]);
    ctx.set_gpr(31, 0x08A5D5DCu);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0078_entry, 78u, 216u, 0x0893CDDCu>(ctx, &aot_mem) && ctx.pc == 0x08A5D5DCu) goto L_08A5D5DC;
    return;
L_08A5D5DC:
    ctx.set_gpr(4, rt.memory().aot_load32(ctx.gpr[2] + static_cast<std::uint32_t>(0)));
    ctx.set_gpr(31, 0x08A5D5E8u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0078_entry, 78u, 199u, 0x0893CC68u>(ctx, &aot_mem) && ctx.pc == 0x08A5D5E8u) goto L_08A5D5E8;
    return;
L_08A5D5E8:
    ctx.set_gpr(4, ctx.gpr[2] + 0u);
    ctx.set_gpr(31, 0x08A5D5F4u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0043_entry, 43u, 45u, 0x088B0444u>(ctx, &aot_mem) && ctx.pc == 0x08A5D5F4u) goto L_08A5D5F4;
    return;
L_08A5D5F4:
    ctx.set_gpr(3, 2246u << 16u);
    rt.memory().aot_store32(ctx.gpr[3] + static_cast<std::uint32_t>(-21240), ctx.gpr[2]);
    ctx.set_gpr(31, 0x08A5D604u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0078_entry, 78u, 216u, 0x0893CDDCu>(ctx, &aot_mem) && ctx.pc == 0x08A5D604u) goto L_08A5D604;
    return;
L_08A5D604:
    ctx.set_gpr(4, rt.memory().aot_load32(ctx.gpr[2] + static_cast<std::uint32_t>(0)));
    ctx.set_gpr(31, 0x08A5D610u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0078_entry, 78u, 199u, 0x0893CC68u>(ctx, &aot_mem) && ctx.pc == 0x08A5D610u) goto L_08A5D610;
    return;
L_08A5D610:
    ctx.set_gpr(4, ctx.gpr[2] + 0u);
    ctx.set_gpr(31, 0x08A5D61Cu);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0045_entry, 45u, 631u, 0x088BBA54u>(ctx, &aot_mem) && ctx.pc == 0x08A5D61Cu) goto L_08A5D61C;
    return;
L_08A5D61C:
    ctx.set_gpr(3, 2246u << 16u);
    rt.memory().aot_store32(ctx.gpr[3] + static_cast<std::uint32_t>(-21252), ctx.gpr[2]);
    ctx.set_gpr(31, 0x08A5D62Cu);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0078_entry, 78u, 216u, 0x0893CDDCu>(ctx, &aot_mem) && ctx.pc == 0x08A5D62Cu) goto L_08A5D62C;
    return;
L_08A5D62C:
    ctx.set_gpr(4, rt.memory().aot_load32(ctx.gpr[2] + static_cast<std::uint32_t>(0)));
    ctx.set_gpr(31, 0x08A5D638u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0078_entry, 78u, 199u, 0x0893CC68u>(ctx, &aot_mem) && ctx.pc == 0x08A5D638u) goto L_08A5D638;
    return;
L_08A5D638:
    ctx.set_gpr(4, ctx.gpr[2] + 0u);
    ctx.set_gpr(31, 0x08A5D644u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0047_entry, 47u, 127u, 0x088C0B58u>(ctx, &aot_mem) && ctx.pc == 0x08A5D644u) goto L_08A5D644;
    return;
L_08A5D644:
    ctx.set_gpr(3, 2246u << 16u);
    rt.memory().aot_store32(ctx.gpr[3] + static_cast<std::uint32_t>(-21248), ctx.gpr[2]);
    ctx.set_gpr(31, 0x08A5D654u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0078_entry, 78u, 216u, 0x0893CDDCu>(ctx, &aot_mem) && ctx.pc == 0x08A5D654u) goto L_08A5D654;
    return;
L_08A5D654:
    ctx.set_gpr(4, rt.memory().aot_load32(ctx.gpr[2] + static_cast<std::uint32_t>(0)));
    ctx.set_gpr(31, 0x08A5D660u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0078_entry, 78u, 199u, 0x0893CC68u>(ctx, &aot_mem) && ctx.pc == 0x08A5D660u) goto L_08A5D660;
    return;
L_08A5D660:
    ctx.set_gpr(4, ctx.gpr[2] + 0u);
    ctx.set_gpr(31, 0x08A5D66Cu);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0047_entry, 47u, 127u, 0x088C0B58u>(ctx, &aot_mem) && ctx.pc == 0x08A5D66Cu) goto L_08A5D66C;
    return;
L_08A5D66C:
    ctx.set_gpr(3, 2246u << 16u);
    rt.memory().aot_store32(ctx.gpr[3] + static_cast<std::uint32_t>(-21192), ctx.gpr[2]);
    ctx.set_gpr(31, 0x08A5D67Cu);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0078_entry, 78u, 216u, 0x0893CDDCu>(ctx, &aot_mem) && ctx.pc == 0x08A5D67Cu) goto L_08A5D67C;
    return;
L_08A5D67C:
    ctx.set_gpr(4, rt.memory().aot_load32(ctx.gpr[2] + static_cast<std::uint32_t>(0)));
    ctx.set_gpr(31, 0x08A5D688u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0078_entry, 78u, 199u, 0x0893CC68u>(ctx, &aot_mem) && ctx.pc == 0x08A5D688u) goto L_08A5D688;
    return;
L_08A5D688:
    ctx.set_gpr(4, ctx.gpr[2] + 0u);
    ctx.set_gpr(31, 0x08A5D694u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0043_entry, 43u, 298u, 0x088B1C28u>(ctx, &aot_mem) && ctx.pc == 0x08A5D694u) goto L_08A5D694;
    return;
L_08A5D694:
    ctx.set_gpr(3, 2246u << 16u);
    rt.memory().aot_store32(ctx.gpr[3] + static_cast<std::uint32_t>(-21188), ctx.gpr[2]);
    ctx.set_gpr(31, 0x08A5D6A4u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0078_entry, 78u, 216u, 0x0893CDDCu>(ctx, &aot_mem) && ctx.pc == 0x08A5D6A4u) goto L_08A5D6A4;
    return;
L_08A5D6A4:
    ctx.set_gpr(4, rt.memory().aot_load32(ctx.gpr[2] + static_cast<std::uint32_t>(0)));
    ctx.set_gpr(31, 0x08A5D6B0u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0078_entry, 78u, 199u, 0x0893CC68u>(ctx, &aot_mem) && ctx.pc == 0x08A5D6B0u) goto L_08A5D6B0;
    return;
L_08A5D6B0:
    ctx.set_gpr(4, ctx.gpr[2] + 0u);
    ctx.set_gpr(31, 0x08A5D6BCu);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0043_entry, 43u, 298u, 0x088B1C28u>(ctx, &aot_mem) && ctx.pc == 0x08A5D6BCu) goto L_08A5D6BC;
    return;
L_08A5D6BC:
    ctx.set_gpr(3, 2246u << 16u);
    rt.memory().aot_store32(ctx.gpr[3] + static_cast<std::uint32_t>(-21184), ctx.gpr[2]);
    ctx.set_gpr(31, 0x08A5D6CCu);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0078_entry, 78u, 216u, 0x0893CDDCu>(ctx, &aot_mem) && ctx.pc == 0x08A5D6CCu) goto L_08A5D6CC;
    return;
L_08A5D6CC:
    ctx.set_gpr(4, rt.memory().aot_load32(ctx.gpr[2] + static_cast<std::uint32_t>(0)));
    ctx.set_gpr(31, 0x08A5D6D8u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0078_entry, 78u, 199u, 0x0893CC68u>(ctx, &aot_mem) && ctx.pc == 0x08A5D6D8u) goto L_08A5D6D8;
    return;
L_08A5D6D8:
    ctx.set_gpr(4, ctx.gpr[2] + 0u);
    ctx.set_gpr(31, 0x08A5D6E4u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0043_entry, 43u, 298u, 0x088B1C28u>(ctx, &aot_mem) && ctx.pc == 0x08A5D6E4u) goto L_08A5D6E4;
    return;
L_08A5D6E4:
    ctx.set_gpr(3, 2246u << 16u);
    rt.memory().aot_store32(ctx.gpr[3] + static_cast<std::uint32_t>(-21180), ctx.gpr[2]);
    ctx.set_gpr(31, 0x08A5D6F4u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0078_entry, 78u, 216u, 0x0893CDDCu>(ctx, &aot_mem) && ctx.pc == 0x08A5D6F4u) goto L_08A5D6F4;
    return;
L_08A5D6F4:
    ctx.set_gpr(4, rt.memory().aot_load32(ctx.gpr[2] + static_cast<std::uint32_t>(0)));
    ctx.set_gpr(31, 0x08A5D700u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0078_entry, 78u, 199u, 0x0893CC68u>(ctx, &aot_mem) && ctx.pc == 0x08A5D700u) goto L_08A5D700;
    return;
L_08A5D700:
    ctx.set_gpr(4, ctx.gpr[2] + 0u);
    ctx.set_gpr(31, 0x08A5D70Cu);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0043_entry, 43u, 298u, 0x088B1C28u>(ctx, &aot_mem) && ctx.pc == 0x08A5D70Cu) goto L_08A5D70C;
    return;
L_08A5D70C:
    ctx.set_gpr(3, 2246u << 16u);
    rt.memory().aot_store32(ctx.gpr[3] + static_cast<std::uint32_t>(-21176), ctx.gpr[2]);
    ctx.set_gpr(31, 0x08A5D71Cu);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0078_entry, 78u, 216u, 0x0893CDDCu>(ctx, &aot_mem) && ctx.pc == 0x08A5D71Cu) goto L_08A5D71C;
    return;
L_08A5D71C:
    ctx.set_gpr(4, rt.memory().aot_load32(ctx.gpr[2] + static_cast<std::uint32_t>(0)));
    ctx.set_gpr(31, 0x08A5D728u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0078_entry, 78u, 199u, 0x0893CC68u>(ctx, &aot_mem) && ctx.pc == 0x08A5D728u) goto L_08A5D728;
    return;
L_08A5D728:
    ctx.set_gpr(4, ctx.gpr[2] + 0u);
    ctx.set_gpr(31, 0x08A5D734u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0043_entry, 43u, 72u, 0x088B06C4u>(ctx, &aot_mem) && ctx.pc == 0x08A5D734u) goto L_08A5D734;
    return;
L_08A5D734:
    ctx.set_gpr(3, 2246u << 16u);
    rt.memory().aot_store32(ctx.gpr[3] + static_cast<std::uint32_t>(-21172), ctx.gpr[2]);
    ctx.set_gpr(31, 0x08A5D744u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0078_entry, 78u, 216u, 0x0893CDDCu>(ctx, &aot_mem) && ctx.pc == 0x08A5D744u) goto L_08A5D744;
    return;
L_08A5D744:
    ctx.set_gpr(4, rt.memory().aot_load32(ctx.gpr[2] + static_cast<std::uint32_t>(0)));
    ctx.set_gpr(31, 0x08A5D750u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0078_entry, 78u, 199u, 0x0893CC68u>(ctx, &aot_mem) && ctx.pc == 0x08A5D750u) goto L_08A5D750;
    return;
L_08A5D750:
    ctx.set_gpr(4, ctx.gpr[2] + 0u);
    ctx.set_gpr(31, 0x08A5D75Cu);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0043_entry, 43u, 72u, 0x088B06C4u>(ctx, &aot_mem) && ctx.pc == 0x08A5D75Cu) goto L_08A5D75C;
    return;
L_08A5D75C:
    ctx.set_gpr(3, 2246u << 16u);
    rt.memory().aot_store32(ctx.gpr[3] + static_cast<std::uint32_t>(-21168), ctx.gpr[2]);
    ctx.set_gpr(31, 0x08A5D76Cu);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0078_entry, 78u, 216u, 0x0893CDDCu>(ctx, &aot_mem) && ctx.pc == 0x08A5D76Cu) goto L_08A5D76C;
    return;
L_08A5D76C:
    ctx.set_gpr(4, rt.memory().aot_load32(ctx.gpr[2] + static_cast<std::uint32_t>(0)));
    ctx.set_gpr(31, 0x08A5D778u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0078_entry, 78u, 199u, 0x0893CC68u>(ctx, &aot_mem) && ctx.pc == 0x08A5D778u) goto L_08A5D778;
    return;
L_08A5D778:
    ctx.set_gpr(4, ctx.gpr[2] + 0u);
    ctx.set_gpr(31, 0x08A5D784u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0043_entry, 43u, 72u, 0x088B06C4u>(ctx, &aot_mem) && ctx.pc == 0x08A5D784u) goto L_08A5D784;
    return;
L_08A5D784:
    ctx.set_gpr(3, 2246u << 16u);
    rt.memory().aot_store32(ctx.gpr[3] + static_cast<std::uint32_t>(-21164), ctx.gpr[2]);
    ctx.set_gpr(31, 0x08A5D794u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0078_entry, 78u, 216u, 0x0893CDDCu>(ctx, &aot_mem) && ctx.pc == 0x08A5D794u) goto L_08A5D794;
    return;
L_08A5D794:
    ctx.set_gpr(4, rt.memory().aot_load32(ctx.gpr[2] + static_cast<std::uint32_t>(0)));
    ctx.set_gpr(31, 0x08A5D7A0u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0078_entry, 78u, 199u, 0x0893CC68u>(ctx, &aot_mem) && ctx.pc == 0x08A5D7A0u) goto L_08A5D7A0;
    return;
L_08A5D7A0:
    ctx.set_gpr(4, ctx.gpr[2] + 0u);
    ctx.set_gpr(31, 0x08A5D7ACu);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0044_entry, 44u, 403u, 0x088B66B4u>(ctx, &aot_mem) && ctx.pc == 0x08A5D7ACu) goto L_08A5D7AC;
    return;
L_08A5D7AC:
    ctx.set_gpr(3, 2246u << 16u);
    rt.memory().aot_store32(ctx.gpr[3] + static_cast<std::uint32_t>(-21256), ctx.gpr[2]);
    ctx.set_gpr(31, 0x08A5D7BCu);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0078_entry, 78u, 216u, 0x0893CDDCu>(ctx, &aot_mem) && ctx.pc == 0x08A5D7BCu) goto L_08A5D7BC;
    return;
L_08A5D7BC:
    ctx.set_gpr(4, rt.memory().aot_load32(ctx.gpr[2] + static_cast<std::uint32_t>(0)));
    ctx.set_gpr(31, 0x08A5D7C8u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0078_entry, 78u, 199u, 0x0893CC68u>(ctx, &aot_mem) && ctx.pc == 0x08A5D7C8u) goto L_08A5D7C8;
    return;
L_08A5D7C8:
    ctx.set_gpr(4, ctx.gpr[2] + 0u);
    ctx.set_gpr(31, 0x08A5D7D4u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0047_entry, 47u, 39u, 0x088C0398u>(ctx, &aot_mem) && ctx.pc == 0x08A5D7D4u) goto L_08A5D7D4;
    return;
L_08A5D7D4:
    ctx.set_gpr(3, 2246u << 16u);
    rt.memory().aot_store32(ctx.gpr[3] + static_cast<std::uint32_t>(-21160), ctx.gpr[2]);
    ctx.set_gpr(31, 0x08A5D7E4u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0078_entry, 78u, 216u, 0x0893CDDCu>(ctx, &aot_mem) && ctx.pc == 0x08A5D7E4u) goto L_08A5D7E4;
    return;
L_08A5D7E4:
    ctx.set_gpr(4, rt.memory().aot_load32(ctx.gpr[2] + static_cast<std::uint32_t>(0)));
    ctx.set_gpr(31, 0x08A5D7F0u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0078_entry, 78u, 199u, 0x0893CC68u>(ctx, &aot_mem) && ctx.pc == 0x08A5D7F0u) goto L_08A5D7F0;
    return;
L_08A5D7F0:
    ctx.set_gpr(4, ctx.gpr[2] + 0u);
    ctx.set_gpr(31, 0x08A5D7FCu);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0047_entry, 47u, 39u, 0x088C0398u>(ctx, &aot_mem) && ctx.pc == 0x08A5D7FCu) goto L_08A5D7FC;
    return;
L_08A5D7FC:
    ctx.set_gpr(3, 2246u << 16u);
    rt.memory().aot_store32(ctx.gpr[3] + static_cast<std::uint32_t>(-21156), ctx.gpr[2]);
    ctx.set_gpr(31, 0x08A5D80Cu);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0078_entry, 78u, 216u, 0x0893CDDCu>(ctx, &aot_mem) && ctx.pc == 0x08A5D80Cu) goto L_08A5D80C;
    return;
L_08A5D80C:
    ctx.set_gpr(4, rt.memory().aot_load32(ctx.gpr[2] + static_cast<std::uint32_t>(0)));
    ctx.set_gpr(31, 0x08A5D818u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0078_entry, 78u, 199u, 0x0893CC68u>(ctx, &aot_mem) && ctx.pc == 0x08A5D818u) goto L_08A5D818;
    return;
L_08A5D818:
    ctx.set_gpr(4, ctx.gpr[2] + 0u);
    ctx.set_gpr(31, 0x08A5D824u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0047_entry, 47u, 39u, 0x088C0398u>(ctx, &aot_mem) && ctx.pc == 0x08A5D824u) goto L_08A5D824;
    return;
L_08A5D824:
    ctx.set_gpr(3, 2246u << 16u);
    rt.memory().aot_store32(ctx.gpr[3] + static_cast<std::uint32_t>(-21152), ctx.gpr[2]);
    ctx.set_gpr(31, 0x08A5D834u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0078_entry, 78u, 216u, 0x0893CDDCu>(ctx, &aot_mem) && ctx.pc == 0x08A5D834u) goto L_08A5D834;
    return;
L_08A5D834:
    ctx.set_gpr(4, rt.memory().aot_load32(ctx.gpr[2] + static_cast<std::uint32_t>(0)));
    ctx.set_gpr(31, 0x08A5D840u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0078_entry, 78u, 199u, 0x0893CC68u>(ctx, &aot_mem) && ctx.pc == 0x08A5D840u) goto L_08A5D840;
    return;
L_08A5D840:
    ctx.set_gpr(4, ctx.gpr[2] + 0u);
    ctx.set_gpr(31, 0x08A5D84Cu);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0047_entry, 47u, 618u, 0x088C368Cu>(ctx, &aot_mem) && ctx.pc == 0x08A5D84Cu) goto L_08A5D84C;
    return;
L_08A5D84C:
    ctx.set_gpr(3, 2246u << 16u);
    rt.memory().aot_store32(ctx.gpr[3] + static_cast<std::uint32_t>(-21148), ctx.gpr[2]);
    ctx.set_gpr(31, 0x08A5D85Cu);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0078_entry, 78u, 216u, 0x0893CDDCu>(ctx, &aot_mem) && ctx.pc == 0x08A5D85Cu) goto L_08A5D85C;
    return;
L_08A5D85C:
    ctx.set_gpr(4, rt.memory().aot_load32(ctx.gpr[2] + static_cast<std::uint32_t>(0)));
    ctx.set_gpr(31, 0x08A5D868u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0078_entry, 78u, 199u, 0x0893CC68u>(ctx, &aot_mem) && ctx.pc == 0x08A5D868u) goto L_08A5D868;
    return;
L_08A5D868:
    ctx.set_gpr(4, ctx.gpr[2] + 0u);
    ctx.set_gpr(31, 0x08A5D874u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0043_entry, 43u, 170u, 0x088B1000u>(ctx, &aot_mem) && ctx.pc == 0x08A5D874u) goto L_08A5D874;
    return;
L_08A5D874:
    ctx.set_gpr(3, 2246u << 16u);
    rt.memory().aot_store32(ctx.gpr[3] + static_cast<std::uint32_t>(-21220), ctx.gpr[2]);
    ctx.set_gpr(31, 0x08A5D884u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0078_entry, 78u, 216u, 0x0893CDDCu>(ctx, &aot_mem) && ctx.pc == 0x08A5D884u) goto L_08A5D884;
    return;
L_08A5D884:
    ctx.set_gpr(4, rt.memory().aot_load32(ctx.gpr[2] + static_cast<std::uint32_t>(0)));
    ctx.set_gpr(31, 0x08A5D890u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0078_entry, 78u, 199u, 0x0893CC68u>(ctx, &aot_mem) && ctx.pc == 0x08A5D890u) goto L_08A5D890;
    return;
L_08A5D890:
    ctx.set_gpr(4, ctx.gpr[2] + 0u);
    ctx.set_gpr(31, 0x08A5D89Cu);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0043_entry, 43u, 170u, 0x088B1000u>(ctx, &aot_mem) && ctx.pc == 0x08A5D89Cu) goto L_08A5D89C;
    return;
L_08A5D89C:
    ctx.set_gpr(3, 2246u << 16u);
    rt.memory().aot_store32(ctx.gpr[3] + static_cast<std::uint32_t>(-21216), ctx.gpr[2]);
    ctx.set_gpr(31, 0x08A5D8ACu);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0078_entry, 78u, 216u, 0x0893CDDCu>(ctx, &aot_mem) && ctx.pc == 0x08A5D8ACu) goto L_08A5D8AC;
    return;
L_08A5D8AC:
    ctx.set_gpr(4, rt.memory().aot_load32(ctx.gpr[2] + static_cast<std::uint32_t>(0)));
    ctx.set_gpr(31, 0x08A5D8B8u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0078_entry, 78u, 199u, 0x0893CC68u>(ctx, &aot_mem) && ctx.pc == 0x08A5D8B8u) goto L_08A5D8B8;
    return;
L_08A5D8B8:
    ctx.set_gpr(4, ctx.gpr[2] + 0u);
    ctx.set_gpr(31, 0x08A5D8C4u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0043_entry, 43u, 170u, 0x088B1000u>(ctx, &aot_mem) && ctx.pc == 0x08A5D8C4u) goto L_08A5D8C4;
    return;
L_08A5D8C4:
    ctx.set_gpr(3, 2246u << 16u);
    rt.memory().aot_store32(ctx.gpr[3] + static_cast<std::uint32_t>(-21212), ctx.gpr[2]);
    ctx.set_gpr(31, 0x08A5D8D4u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0078_entry, 78u, 216u, 0x0893CDDCu>(ctx, &aot_mem) && ctx.pc == 0x08A5D8D4u) goto L_08A5D8D4;
    return;
L_08A5D8D4:
    ctx.set_gpr(4, rt.memory().aot_load32(ctx.gpr[2] + static_cast<std::uint32_t>(0)));
    ctx.set_gpr(31, 0x08A5D8E0u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0078_entry, 78u, 199u, 0x0893CC68u>(ctx, &aot_mem) && ctx.pc == 0x08A5D8E0u) goto L_08A5D8E0;
    return;
L_08A5D8E0:
    ctx.set_gpr(4, ctx.gpr[2] + 0u);
    ctx.set_gpr(31, 0x08A5D8ECu);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0043_entry, 43u, 170u, 0x088B1000u>(ctx, &aot_mem) && ctx.pc == 0x08A5D8ECu) goto L_08A5D8EC;
    return;
L_08A5D8EC:
    ctx.set_gpr(3, 2246u << 16u);
    rt.memory().aot_store32(ctx.gpr[3] + static_cast<std::uint32_t>(-21204), ctx.gpr[2]);
    ctx.set_gpr(31, 0x08A5D8FCu);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0078_entry, 78u, 216u, 0x0893CDDCu>(ctx, &aot_mem) && ctx.pc == 0x08A5D8FCu) goto L_08A5D8FC;
    return;
L_08A5D8FC:
    ctx.set_gpr(4, rt.memory().aot_load32(ctx.gpr[2] + static_cast<std::uint32_t>(0)));
    ctx.set_gpr(31, 0x08A5D908u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0078_entry, 78u, 199u, 0x0893CC68u>(ctx, &aot_mem) && ctx.pc == 0x08A5D908u) goto L_08A5D908;
    return;
L_08A5D908:
    ctx.set_gpr(4, ctx.gpr[2] + 0u);
    ctx.set_gpr(31, 0x08A5D914u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0043_entry, 43u, 170u, 0x088B1000u>(ctx, &aot_mem) && ctx.pc == 0x08A5D914u) goto L_08A5D914;
    return;
L_08A5D914:
    ctx.set_gpr(3, 2246u << 16u);
    rt.memory().aot_store32(ctx.gpr[3] + static_cast<std::uint32_t>(-21208), ctx.gpr[2]);
    ctx.set_gpr(31, 0x08A5D924u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0078_entry, 78u, 216u, 0x0893CDDCu>(ctx, &aot_mem) && ctx.pc == 0x08A5D924u) goto L_08A5D924;
    return;
L_08A5D924:
    ctx.set_gpr(4, rt.memory().aot_load32(ctx.gpr[2] + static_cast<std::uint32_t>(0)));
    ctx.set_gpr(31, 0x08A5D930u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0078_entry, 78u, 199u, 0x0893CC68u>(ctx, &aot_mem) && ctx.pc == 0x08A5D930u) goto L_08A5D930;
    return;
L_08A5D930:
    ctx.set_gpr(4, ctx.gpr[2] + 0u);
    ctx.set_gpr(31, 0x08A5D93Cu);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0043_entry, 43u, 170u, 0x088B1000u>(ctx, &aot_mem) && ctx.pc == 0x08A5D93Cu) goto L_08A5D93C;
    return;
L_08A5D93C:
    ctx.set_gpr(3, 2246u << 16u);
    rt.memory().aot_store32(ctx.gpr[3] + static_cast<std::uint32_t>(-21200), ctx.gpr[2]);
    ctx.set_gpr(31, 0x08A5D94Cu);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0078_entry, 78u, 216u, 0x0893CDDCu>(ctx, &aot_mem) && ctx.pc == 0x08A5D94Cu) goto L_08A5D94C;
    return;
L_08A5D94C:
    ctx.set_gpr(4, rt.memory().aot_load32(ctx.gpr[2] + static_cast<std::uint32_t>(0)));
    ctx.set_gpr(31, 0x08A5D958u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0078_entry, 78u, 199u, 0x0893CC68u>(ctx, &aot_mem) && ctx.pc == 0x08A5D958u) goto L_08A5D958;
    return;
L_08A5D958:
    ctx.set_gpr(4, ctx.gpr[2] + 0u);
    ctx.set_gpr(31, 0x08A5D964u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0043_entry, 43u, 170u, 0x088B1000u>(ctx, &aot_mem) && ctx.pc == 0x08A5D964u) goto L_08A5D964;
    return;
L_08A5D964:
    ctx.set_gpr(3, 2246u << 16u);
    rt.memory().aot_store32(ctx.gpr[3] + static_cast<std::uint32_t>(-21196), ctx.gpr[2]);
    ctx.set_gpr(31, 0x08A5D974u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0078_entry, 78u, 216u, 0x0893CDDCu>(ctx, &aot_mem) && ctx.pc == 0x08A5D974u) goto L_08A5D974;
    return;
L_08A5D974:
    ctx.set_gpr(4, rt.memory().aot_load32(ctx.gpr[2] + static_cast<std::uint32_t>(0)));
    ctx.set_gpr(31, 0x08A5D980u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0078_entry, 78u, 199u, 0x0893CC68u>(ctx, &aot_mem) && ctx.pc == 0x08A5D980u) goto L_08A5D980;
    return;
L_08A5D980:
    ctx.set_gpr(4, ctx.gpr[2] + 0u);
    ctx.set_gpr(31, 0x08A5D98Cu);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0046_entry, 46u, 648u, 0x088BFB6Cu>(ctx, &aot_mem) && ctx.pc == 0x08A5D98Cu) goto L_08A5D98C;
    return;
L_08A5D98C:
    ctx.set_gpr(3, 2246u << 16u);
    rt.memory().aot_store32(ctx.gpr[3] + static_cast<std::uint32_t>(-21120), ctx.gpr[2]);
    ctx.set_gpr(31, rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(12)));
    ctx.set_gpr(29, ctx.gpr[29] + static_cast<std::uint32_t>(16));
    jump_target = ctx.gpr[31];
    // nop
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_08A5D9A4:
    ctx.set_gpr(29, ctx.gpr[29] + static_cast<std::uint32_t>(-16));
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(12), ctx.gpr[31]);
    ctx.set_gpr(3, 2246u << 16u);
    ctx.set_gpr(4, rt.memory().aot_load32(ctx.gpr[3] + static_cast<std::uint32_t>(-21116)));
    { const bool branch_taken = ctx.gpr[4] == 0u;
    // nop
      if (branch_taken) {
          goto L_08A5D9E8;
      }
      goto L_08A5D9BC;
    }
L_08A5D9BC:
    ctx.set_gpr(3, rt.memory().aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(4)));
    ctx.set_gpr(3, ctx.gpr[3] + static_cast<std::uint32_t>(-1));
    rt.memory().aot_store32(ctx.gpr[4] + static_cast<std::uint32_t>(4), ctx.gpr[3]);
    ctx.set_gpr(3, ctx.gpr[3] << 10u);
    ctx.set_gpr(3, ctx.gpr[3] >> 10u);
    { const bool branch_taken = ctx.gpr[3] != 0u;
    // nop
      if (branch_taken) {
          goto L_08A5D9E0;
      }
      goto L_08A5D9D8;
    }
L_08A5D9D8:
    ctx.set_gpr(31, 0x08A5D9E0u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0080_entry, 80u, 556u, 0x089467C8u>(ctx, &aot_mem) && ctx.pc == 0x08A5D9E0u) goto L_08A5D9E0;
    return;
L_08A5D9E0:
    ctx.set_gpr(3, 2246u << 16u);
    rt.memory().aot_store32(ctx.gpr[3] + static_cast<std::uint32_t>(-21116), 0u);
    goto L_08A5D9E8;
L_08A5D9E8:
    ctx.set_gpr(3, 2246u << 16u);
    ctx.set_gpr(4, rt.memory().aot_load32(ctx.gpr[3] + static_cast<std::uint32_t>(-21112)));
    { const bool branch_taken = ctx.gpr[4] == 0u;
    // nop
      if (branch_taken) {
          goto L_08A5DA24;
      }
      goto L_08A5D9F8;
    }
L_08A5D9F8:
    ctx.set_gpr(3, rt.memory().aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(4)));
    ctx.set_gpr(3, ctx.gpr[3] + static_cast<std::uint32_t>(-1));
    rt.memory().aot_store32(ctx.gpr[4] + static_cast<std::uint32_t>(4), ctx.gpr[3]);
    ctx.set_gpr(3, ctx.gpr[3] << 10u);
    ctx.set_gpr(3, ctx.gpr[3] >> 10u);
    { const bool branch_taken = ctx.gpr[3] != 0u;
    // nop
      if (branch_taken) {
          goto L_08A5DA1C;
      }
      goto L_08A5DA14;
    }
L_08A5DA14:
    ctx.set_gpr(31, 0x08A5DA1Cu);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0080_entry, 80u, 556u, 0x089467C8u>(ctx, &aot_mem) && ctx.pc == 0x08A5DA1Cu) goto L_08A5DA1C;
    return;
L_08A5DA1C:
    ctx.set_gpr(3, 2246u << 16u);
    rt.memory().aot_store32(ctx.gpr[3] + static_cast<std::uint32_t>(-21112), 0u);
    goto L_08A5DA24;
L_08A5DA24:
    ctx.set_gpr(3, 2246u << 16u);
    ctx.set_gpr(4, rt.memory().aot_load32(ctx.gpr[3] + static_cast<std::uint32_t>(-21088)));
    { const bool branch_taken = ctx.gpr[4] == 0u;
    // nop
      if (branch_taken) {
          goto L_08A5DA60;
      }
      goto L_08A5DA34;
    }
L_08A5DA34:
    ctx.set_gpr(3, rt.memory().aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(4)));
    ctx.set_gpr(3, ctx.gpr[3] + static_cast<std::uint32_t>(-1));
    rt.memory().aot_store32(ctx.gpr[4] + static_cast<std::uint32_t>(4), ctx.gpr[3]);
    ctx.set_gpr(3, ctx.gpr[3] << 10u);
    ctx.set_gpr(3, ctx.gpr[3] >> 10u);
    { const bool branch_taken = ctx.gpr[3] != 0u;
    // nop
      if (branch_taken) {
          goto L_08A5DA58;
      }
      goto L_08A5DA50;
    }
L_08A5DA50:
    ctx.set_gpr(31, 0x08A5DA58u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0080_entry, 80u, 556u, 0x089467C8u>(ctx, &aot_mem) && ctx.pc == 0x08A5DA58u) goto L_08A5DA58;
    return;
L_08A5DA58:
    ctx.set_gpr(3, 2246u << 16u);
    rt.memory().aot_store32(ctx.gpr[3] + static_cast<std::uint32_t>(-21088), 0u);
    goto L_08A5DA60;
L_08A5DA60:
    ctx.set_gpr(3, 2246u << 16u);
    ctx.set_gpr(4, rt.memory().aot_load32(ctx.gpr[3] + static_cast<std::uint32_t>(-21084)));
    { const bool branch_taken = ctx.gpr[4] == 0u;
    // nop
      if (branch_taken) {
          goto L_08A5DA9C;
      }
      goto L_08A5DA70;
    }
L_08A5DA70:
    ctx.set_gpr(3, rt.memory().aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(4)));
    ctx.set_gpr(3, ctx.gpr[3] + static_cast<std::uint32_t>(-1));
    rt.memory().aot_store32(ctx.gpr[4] + static_cast<std::uint32_t>(4), ctx.gpr[3]);
    ctx.set_gpr(3, ctx.gpr[3] << 10u);
    ctx.set_gpr(3, ctx.gpr[3] >> 10u);
    { const bool branch_taken = ctx.gpr[3] != 0u;
    // nop
      if (branch_taken) {
          goto L_08A5DA94;
      }
      goto L_08A5DA8C;
    }
L_08A5DA8C:
    ctx.set_gpr(31, 0x08A5DA94u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0080_entry, 80u, 556u, 0x089467C8u>(ctx, &aot_mem) && ctx.pc == 0x08A5DA94u) goto L_08A5DA94;
    return;
L_08A5DA94:
    ctx.set_gpr(3, 2246u << 16u);
    rt.memory().aot_store32(ctx.gpr[3] + static_cast<std::uint32_t>(-21084), 0u);
    goto L_08A5DA9C;
L_08A5DA9C:
    ctx.set_gpr(3, 2246u << 16u);
    ctx.set_gpr(4, rt.memory().aot_load32(ctx.gpr[3] + static_cast<std::uint32_t>(-21264)));
    { const bool branch_taken = ctx.gpr[4] == 0u;
    // nop
      if (branch_taken) {
          goto L_08A5DAD8;
      }
      goto L_08A5DAAC;
    }
L_08A5DAAC:
    ctx.set_gpr(3, rt.memory().aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(4)));
    ctx.set_gpr(3, ctx.gpr[3] + static_cast<std::uint32_t>(-1));
    rt.memory().aot_store32(ctx.gpr[4] + static_cast<std::uint32_t>(4), ctx.gpr[3]);
    ctx.set_gpr(3, ctx.gpr[3] << 10u);
    ctx.set_gpr(3, ctx.gpr[3] >> 10u);
    { const bool branch_taken = ctx.gpr[3] != 0u;
    // nop
      if (branch_taken) {
          goto L_08A5DAD0;
      }
      goto L_08A5DAC8;
    }
L_08A5DAC8:
    ctx.set_gpr(31, 0x08A5DAD0u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0080_entry, 80u, 556u, 0x089467C8u>(ctx, &aot_mem) && ctx.pc == 0x08A5DAD0u) goto L_08A5DAD0;
    return;
L_08A5DAD0:
    ctx.set_gpr(3, 2246u << 16u);
    rt.memory().aot_store32(ctx.gpr[3] + static_cast<std::uint32_t>(-21264), 0u);
    goto L_08A5DAD8;
L_08A5DAD8:
    ctx.set_gpr(3, 2246u << 16u);
    ctx.set_gpr(4, rt.memory().aot_load32(ctx.gpr[3] + static_cast<std::uint32_t>(-21260)));
    { const bool branch_taken = ctx.gpr[4] == 0u;
    // nop
      if (branch_taken) {
          goto L_08A5DB14;
      }
      goto L_08A5DAE8;
    }
L_08A5DAE8:
    ctx.set_gpr(3, rt.memory().aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(4)));
    ctx.set_gpr(3, ctx.gpr[3] + static_cast<std::uint32_t>(-1));
    rt.memory().aot_store32(ctx.gpr[4] + static_cast<std::uint32_t>(4), ctx.gpr[3]);
    ctx.set_gpr(3, ctx.gpr[3] << 10u);
    ctx.set_gpr(3, ctx.gpr[3] >> 10u);
    { const bool branch_taken = ctx.gpr[3] != 0u;
    // nop
      if (branch_taken) {
          goto L_08A5DB0C;
      }
      goto L_08A5DB04;
    }
L_08A5DB04:
    ctx.set_gpr(31, 0x08A5DB0Cu);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0080_entry, 80u, 556u, 0x089467C8u>(ctx, &aot_mem) && ctx.pc == 0x08A5DB0Cu) goto L_08A5DB0C;
    return;
L_08A5DB0C:
    ctx.set_gpr(3, 2246u << 16u);
    rt.memory().aot_store32(ctx.gpr[3] + static_cast<std::uint32_t>(-21260), 0u);
    goto L_08A5DB14;
L_08A5DB14:
    ctx.set_gpr(3, 2246u << 16u);
    ctx.set_gpr(4, rt.memory().aot_load32(ctx.gpr[3] + static_cast<std::uint32_t>(-21220)));
    { const bool branch_taken = ctx.gpr[4] == 0u;
    // nop
      if (branch_taken) {
          goto L_08A5DB50;
      }
      goto L_08A5DB24;
    }
L_08A5DB24:
    ctx.set_gpr(3, rt.memory().aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(4)));
    ctx.set_gpr(3, ctx.gpr[3] + static_cast<std::uint32_t>(-1));
    rt.memory().aot_store32(ctx.gpr[4] + static_cast<std::uint32_t>(4), ctx.gpr[3]);
    ctx.set_gpr(3, ctx.gpr[3] << 10u);
    ctx.set_gpr(3, ctx.gpr[3] >> 10u);
    { const bool branch_taken = ctx.gpr[3] != 0u;
    // nop
      if (branch_taken) {
          goto L_08A5DB48;
      }
      goto L_08A5DB40;
    }
L_08A5DB40:
    ctx.set_gpr(31, 0x08A5DB48u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0080_entry, 80u, 556u, 0x089467C8u>(ctx, &aot_mem) && ctx.pc == 0x08A5DB48u) goto L_08A5DB48;
    return;
L_08A5DB48:
    ctx.set_gpr(3, 2246u << 16u);
    rt.memory().aot_store32(ctx.gpr[3] + static_cast<std::uint32_t>(-21220), 0u);
    goto L_08A5DB50;
L_08A5DB50:
    ctx.set_gpr(3, 2246u << 16u);
    ctx.set_gpr(4, rt.memory().aot_load32(ctx.gpr[3] + static_cast<std::uint32_t>(-21216)));
    { const bool branch_taken = ctx.gpr[4] == 0u;
    // nop
      if (branch_taken) {
          goto L_08A5DB8C;
      }
      goto L_08A5DB60;
    }
L_08A5DB60:
    ctx.set_gpr(3, rt.memory().aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(4)));
    ctx.set_gpr(3, ctx.gpr[3] + static_cast<std::uint32_t>(-1));
    rt.memory().aot_store32(ctx.gpr[4] + static_cast<std::uint32_t>(4), ctx.gpr[3]);
    ctx.set_gpr(3, ctx.gpr[3] << 10u);
    ctx.set_gpr(3, ctx.gpr[3] >> 10u);
    { const bool branch_taken = ctx.gpr[3] != 0u;
    // nop
      if (branch_taken) {
          goto L_08A5DB84;
      }
      goto L_08A5DB7C;
    }
L_08A5DB7C:
    ctx.set_gpr(31, 0x08A5DB84u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0080_entry, 80u, 556u, 0x089467C8u>(ctx, &aot_mem) && ctx.pc == 0x08A5DB84u) goto L_08A5DB84;
    return;
L_08A5DB84:
    ctx.set_gpr(3, 2246u << 16u);
    rt.memory().aot_store32(ctx.gpr[3] + static_cast<std::uint32_t>(-21216), 0u);
    goto L_08A5DB8C;
L_08A5DB8C:
    ctx.set_gpr(3, 2246u << 16u);
    ctx.set_gpr(4, rt.memory().aot_load32(ctx.gpr[3] + static_cast<std::uint32_t>(-21212)));
    { const bool branch_taken = ctx.gpr[4] == 0u;
    // nop
      if (branch_taken) {
          goto L_08A5DBC8;
      }
      goto L_08A5DB9C;
    }
L_08A5DB9C:
    ctx.set_gpr(3, rt.memory().aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(4)));
    ctx.set_gpr(3, ctx.gpr[3] + static_cast<std::uint32_t>(-1));
    rt.memory().aot_store32(ctx.gpr[4] + static_cast<std::uint32_t>(4), ctx.gpr[3]);
    ctx.set_gpr(3, ctx.gpr[3] << 10u);
    ctx.set_gpr(3, ctx.gpr[3] >> 10u);
    { const bool branch_taken = ctx.gpr[3] != 0u;
    // nop
      if (branch_taken) {
          goto L_08A5DBC0;
      }
      goto L_08A5DBB8;
    }
L_08A5DBB8:
    ctx.set_gpr(31, 0x08A5DBC0u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0080_entry, 80u, 556u, 0x089467C8u>(ctx, &aot_mem) && ctx.pc == 0x08A5DBC0u) goto L_08A5DBC0;
    return;
L_08A5DBC0:
    ctx.set_gpr(3, 2246u << 16u);
    rt.memory().aot_store32(ctx.gpr[3] + static_cast<std::uint32_t>(-21212), 0u);
    goto L_08A5DBC8;
L_08A5DBC8:
    ctx.set_gpr(3, 2246u << 16u);
    ctx.set_gpr(4, rt.memory().aot_load32(ctx.gpr[3] + static_cast<std::uint32_t>(-21204)));
    { const bool branch_taken = ctx.gpr[4] == 0u;
    // nop
      if (branch_taken) {
          goto L_08A5DC04;
      }
      goto L_08A5DBD8;
    }
L_08A5DBD8:
    ctx.set_gpr(3, rt.memory().aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(4)));
    ctx.set_gpr(3, ctx.gpr[3] + static_cast<std::uint32_t>(-1));
    rt.memory().aot_store32(ctx.gpr[4] + static_cast<std::uint32_t>(4), ctx.gpr[3]);
    ctx.set_gpr(3, ctx.gpr[3] << 10u);
    ctx.set_gpr(3, ctx.gpr[3] >> 10u);
    { const bool branch_taken = ctx.gpr[3] != 0u;
    // nop
      if (branch_taken) {
          goto L_08A5DBFC;
      }
      goto L_08A5DBF4;
    }
L_08A5DBF4:
    ctx.set_gpr(31, 0x08A5DBFCu);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0080_entry, 80u, 556u, 0x089467C8u>(ctx, &aot_mem) && ctx.pc == 0x08A5DBFCu) goto L_08A5DBFC;
    return;
L_08A5DBFC:
    ctx.set_gpr(3, 2246u << 16u);
    rt.memory().aot_store32(ctx.gpr[3] + static_cast<std::uint32_t>(-21204), 0u);
    goto L_08A5DC04;
L_08A5DC04:
    ctx.set_gpr(3, 2246u << 16u);
    ctx.set_gpr(4, rt.memory().aot_load32(ctx.gpr[3] + static_cast<std::uint32_t>(-21208)));
    { const bool branch_taken = ctx.gpr[4] == 0u;
    // nop
      if (branch_taken) {
          goto L_08A5DC40;
      }
      goto L_08A5DC14;
    }
L_08A5DC14:
    ctx.set_gpr(3, rt.memory().aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(4)));
    ctx.set_gpr(3, ctx.gpr[3] + static_cast<std::uint32_t>(-1));
    rt.memory().aot_store32(ctx.gpr[4] + static_cast<std::uint32_t>(4), ctx.gpr[3]);
    ctx.set_gpr(3, ctx.gpr[3] << 10u);
    ctx.set_gpr(3, ctx.gpr[3] >> 10u);
    { const bool branch_taken = ctx.gpr[3] != 0u;
    // nop
      if (branch_taken) {
          goto L_08A5DC38;
      }
      goto L_08A5DC30;
    }
L_08A5DC30:
    ctx.set_gpr(31, 0x08A5DC38u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0080_entry, 80u, 556u, 0x089467C8u>(ctx, &aot_mem) && ctx.pc == 0x08A5DC38u) goto L_08A5DC38;
    return;
L_08A5DC38:
    ctx.set_gpr(3, 2246u << 16u);
    rt.memory().aot_store32(ctx.gpr[3] + static_cast<std::uint32_t>(-21208), 0u);
    goto L_08A5DC40;
L_08A5DC40:
    ctx.set_gpr(3, 2246u << 16u);
    ctx.set_gpr(4, rt.memory().aot_load32(ctx.gpr[3] + static_cast<std::uint32_t>(-21200)));
    { const bool branch_taken = ctx.gpr[4] == 0u;
    // nop
      if (branch_taken) {
          goto L_08A5DC7C;
      }
      goto L_08A5DC50;
    }
L_08A5DC50:
    ctx.set_gpr(3, rt.memory().aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(4)));
    ctx.set_gpr(3, ctx.gpr[3] + static_cast<std::uint32_t>(-1));
    rt.memory().aot_store32(ctx.gpr[4] + static_cast<std::uint32_t>(4), ctx.gpr[3]);
    ctx.set_gpr(3, ctx.gpr[3] << 10u);
    ctx.set_gpr(3, ctx.gpr[3] >> 10u);
    { const bool branch_taken = ctx.gpr[3] != 0u;
    // nop
      if (branch_taken) {
          goto L_08A5DC74;
      }
      goto L_08A5DC6C;
    }
L_08A5DC6C:
    ctx.set_gpr(31, 0x08A5DC74u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0080_entry, 80u, 556u, 0x089467C8u>(ctx, &aot_mem) && ctx.pc == 0x08A5DC74u) goto L_08A5DC74;
    return;
L_08A5DC74:
    ctx.set_gpr(3, 2246u << 16u);
    rt.memory().aot_store32(ctx.gpr[3] + static_cast<std::uint32_t>(-21200), 0u);
    goto L_08A5DC7C;
L_08A5DC7C:
    ctx.set_gpr(3, 2246u << 16u);
    ctx.set_gpr(4, rt.memory().aot_load32(ctx.gpr[3] + static_cast<std::uint32_t>(-21196)));
    { const bool branch_taken = ctx.gpr[4] == 0u;
    // nop
      if (branch_taken) {
          goto L_08A5DCB8;
      }
      goto L_08A5DC8C;
    }
L_08A5DC8C:
    ctx.set_gpr(3, rt.memory().aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(4)));
    ctx.set_gpr(3, ctx.gpr[3] + static_cast<std::uint32_t>(-1));
    rt.memory().aot_store32(ctx.gpr[4] + static_cast<std::uint32_t>(4), ctx.gpr[3]);
    ctx.set_gpr(3, ctx.gpr[3] << 10u);
    ctx.set_gpr(3, ctx.gpr[3] >> 10u);
    { const bool branch_taken = ctx.gpr[3] != 0u;
    // nop
      if (branch_taken) {
          goto L_08A5DCB0;
      }
      goto L_08A5DCA8;
    }
L_08A5DCA8:
    ctx.set_gpr(31, 0x08A5DCB0u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0080_entry, 80u, 556u, 0x089467C8u>(ctx, &aot_mem) && ctx.pc == 0x08A5DCB0u) goto L_08A5DCB0;
    return;
L_08A5DCB0:
    ctx.set_gpr(3, 2246u << 16u);
    rt.memory().aot_store32(ctx.gpr[3] + static_cast<std::uint32_t>(-21196), 0u);
    goto L_08A5DCB8;
L_08A5DCB8:
    ctx.set_gpr(3, 2246u << 16u);
    ctx.set_gpr(4, rt.memory().aot_load32(ctx.gpr[3] + static_cast<std::uint32_t>(-21160)));
    { const bool branch_taken = ctx.gpr[4] == 0u;
    // nop
      if (branch_taken) {
          goto L_08A5DCF4;
      }
      goto L_08A5DCC8;
    }
L_08A5DCC8:
    ctx.set_gpr(3, rt.memory().aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(4)));
    ctx.set_gpr(3, ctx.gpr[3] + static_cast<std::uint32_t>(-1));
    rt.memory().aot_store32(ctx.gpr[4] + static_cast<std::uint32_t>(4), ctx.gpr[3]);
    ctx.set_gpr(3, ctx.gpr[3] << 10u);
    ctx.set_gpr(3, ctx.gpr[3] >> 10u);
    { const bool branch_taken = ctx.gpr[3] != 0u;
    // nop
      if (branch_taken) {
          goto L_08A5DCEC;
      }
      goto L_08A5DCE4;
    }
L_08A5DCE4:
    ctx.set_gpr(31, 0x08A5DCECu);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0080_entry, 80u, 556u, 0x089467C8u>(ctx, &aot_mem) && ctx.pc == 0x08A5DCECu) goto L_08A5DCEC;
    return;
L_08A5DCEC:
    ctx.set_gpr(3, 2246u << 16u);
    rt.memory().aot_store32(ctx.gpr[3] + static_cast<std::uint32_t>(-21160), 0u);
    goto L_08A5DCF4;
L_08A5DCF4:
    ctx.set_gpr(3, 2246u << 16u);
    ctx.set_gpr(4, rt.memory().aot_load32(ctx.gpr[3] + static_cast<std::uint32_t>(-21156)));
    { const bool branch_taken = ctx.gpr[4] == 0u;
    // nop
      if (branch_taken) {
          goto L_08A5DD30;
      }
      goto L_08A5DD04;
    }
L_08A5DD04:
    ctx.set_gpr(3, rt.memory().aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(4)));
    ctx.set_gpr(3, ctx.gpr[3] + static_cast<std::uint32_t>(-1));
    rt.memory().aot_store32(ctx.gpr[4] + static_cast<std::uint32_t>(4), ctx.gpr[3]);
    ctx.set_gpr(3, ctx.gpr[3] << 10u);
    ctx.set_gpr(3, ctx.gpr[3] >> 10u);
    { const bool branch_taken = ctx.gpr[3] != 0u;
    // nop
      if (branch_taken) {
          goto L_08A5DD28;
      }
      goto L_08A5DD20;
    }
L_08A5DD20:
    ctx.set_gpr(31, 0x08A5DD28u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0080_entry, 80u, 556u, 0x089467C8u>(ctx, &aot_mem) && ctx.pc == 0x08A5DD28u) goto L_08A5DD28;
    return;
L_08A5DD28:
    ctx.set_gpr(3, 2246u << 16u);
    rt.memory().aot_store32(ctx.gpr[3] + static_cast<std::uint32_t>(-21156), 0u);
    goto L_08A5DD30;
L_08A5DD30:
    ctx.set_gpr(3, 2246u << 16u);
    ctx.set_gpr(4, rt.memory().aot_load32(ctx.gpr[3] + static_cast<std::uint32_t>(-21152)));
    { const bool branch_taken = ctx.gpr[4] == 0u;
    // nop
      if (branch_taken) {
          goto L_08A5DD6C;
      }
      goto L_08A5DD40;
    }
L_08A5DD40:
    ctx.set_gpr(3, rt.memory().aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(4)));
    ctx.set_gpr(3, ctx.gpr[3] + static_cast<std::uint32_t>(-1));
    rt.memory().aot_store32(ctx.gpr[4] + static_cast<std::uint32_t>(4), ctx.gpr[3]);
    ctx.set_gpr(3, ctx.gpr[3] << 10u);
    ctx.set_gpr(3, ctx.gpr[3] >> 10u);
    { const bool branch_taken = ctx.gpr[3] != 0u;
    // nop
      if (branch_taken) {
          goto L_08A5DD64;
      }
      goto L_08A5DD5C;
    }
L_08A5DD5C:
    ctx.set_gpr(31, 0x08A5DD64u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0080_entry, 80u, 556u, 0x089467C8u>(ctx, &aot_mem) && ctx.pc == 0x08A5DD64u) goto L_08A5DD64;
    return;
L_08A5DD64:
    ctx.set_gpr(3, 2246u << 16u);
    rt.memory().aot_store32(ctx.gpr[3] + static_cast<std::uint32_t>(-21152), 0u);
    goto L_08A5DD6C;
L_08A5DD6C:
    ctx.set_gpr(3, 2246u << 16u);
    ctx.set_gpr(4, rt.memory().aot_load32(ctx.gpr[3] + static_cast<std::uint32_t>(-21148)));
    { const bool branch_taken = ctx.gpr[4] == 0u;
    // nop
      if (branch_taken) {
          goto L_08A5DDA8;
      }
      goto L_08A5DD7C;
    }
L_08A5DD7C:
    ctx.set_gpr(3, rt.memory().aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(4)));
    ctx.set_gpr(3, ctx.gpr[3] + static_cast<std::uint32_t>(-1));
    rt.memory().aot_store32(ctx.gpr[4] + static_cast<std::uint32_t>(4), ctx.gpr[3]);
    ctx.set_gpr(3, ctx.gpr[3] << 10u);
    ctx.set_gpr(3, ctx.gpr[3] >> 10u);
    { const bool branch_taken = ctx.gpr[3] != 0u;
    // nop
      if (branch_taken) {
          goto L_08A5DDA0;
      }
      goto L_08A5DD98;
    }
L_08A5DD98:
    ctx.set_gpr(31, 0x08A5DDA0u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0080_entry, 80u, 556u, 0x089467C8u>(ctx, &aot_mem) && ctx.pc == 0x08A5DDA0u) goto L_08A5DDA0;
    return;
L_08A5DDA0:
    ctx.set_gpr(3, 2246u << 16u);
    rt.memory().aot_store32(ctx.gpr[3] + static_cast<std::uint32_t>(-21148), 0u);
    goto L_08A5DDA8;
L_08A5DDA8:
    ctx.set_gpr(3, 2246u << 16u);
    ctx.set_gpr(4, rt.memory().aot_load32(ctx.gpr[3] + static_cast<std::uint32_t>(-21244)));
    { const bool branch_taken = ctx.gpr[4] == 0u;
    // nop
      if (branch_taken) {
          goto L_08A5DDE4;
      }
      goto L_08A5DDB8;
    }
L_08A5DDB8:
    ctx.set_gpr(3, rt.memory().aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(4)));
    ctx.set_gpr(3, ctx.gpr[3] + static_cast<std::uint32_t>(-1));
    rt.memory().aot_store32(ctx.gpr[4] + static_cast<std::uint32_t>(4), ctx.gpr[3]);
    ctx.set_gpr(3, ctx.gpr[3] << 10u);
    ctx.set_gpr(3, ctx.gpr[3] >> 10u);
    { const bool branch_taken = ctx.gpr[3] != 0u;
    // nop
      if (branch_taken) {
          goto L_08A5DDDC;
      }
      goto L_08A5DDD4;
    }
L_08A5DDD4:
    ctx.set_gpr(31, 0x08A5DDDCu);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0080_entry, 80u, 556u, 0x089467C8u>(ctx, &aot_mem) && ctx.pc == 0x08A5DDDCu) goto L_08A5DDDC;
    return;
L_08A5DDDC:
    ctx.set_gpr(3, 2246u << 16u);
    rt.memory().aot_store32(ctx.gpr[3] + static_cast<std::uint32_t>(-21244), 0u);
    goto L_08A5DDE4;
L_08A5DDE4:
    ctx.set_gpr(3, 2246u << 16u);
    ctx.set_gpr(4, rt.memory().aot_load32(ctx.gpr[3] + static_cast<std::uint32_t>(-21236)));
    { const bool branch_taken = ctx.gpr[4] == 0u;
    // nop
      if (branch_taken) {
          goto L_08A5DE20;
      }
      goto L_08A5DDF4;
    }
L_08A5DDF4:
    ctx.set_gpr(3, rt.memory().aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(4)));
    ctx.set_gpr(3, ctx.gpr[3] + static_cast<std::uint32_t>(-1));
    rt.memory().aot_store32(ctx.gpr[4] + static_cast<std::uint32_t>(4), ctx.gpr[3]);
    ctx.set_gpr(3, ctx.gpr[3] << 10u);
    ctx.set_gpr(3, ctx.gpr[3] >> 10u);
    { const bool branch_taken = ctx.gpr[3] != 0u;
    // nop
      if (branch_taken) {
          goto L_08A5DE18;
      }
      goto L_08A5DE10;
    }
L_08A5DE10:
    ctx.set_gpr(31, 0x08A5DE18u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0080_entry, 80u, 556u, 0x089467C8u>(ctx, &aot_mem) && ctx.pc == 0x08A5DE18u) goto L_08A5DE18;
    return;
L_08A5DE18:
    ctx.set_gpr(3, 2246u << 16u);
    rt.memory().aot_store32(ctx.gpr[3] + static_cast<std::uint32_t>(-21236), 0u);
    goto L_08A5DE20;
L_08A5DE20:
    ctx.set_gpr(3, 2246u << 16u);
    ctx.set_gpr(4, rt.memory().aot_load32(ctx.gpr[3] + static_cast<std::uint32_t>(-21232)));
    { const bool branch_taken = ctx.gpr[4] == 0u;
    // nop
      if (branch_taken) {
          goto L_08A5DE5C;
      }
      goto L_08A5DE30;
    }
L_08A5DE30:
    ctx.set_gpr(3, rt.memory().aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(4)));
    ctx.set_gpr(3, ctx.gpr[3] + static_cast<std::uint32_t>(-1));
    rt.memory().aot_store32(ctx.gpr[4] + static_cast<std::uint32_t>(4), ctx.gpr[3]);
    ctx.set_gpr(3, ctx.gpr[3] << 10u);
    ctx.set_gpr(3, ctx.gpr[3] >> 10u);
    { const bool branch_taken = ctx.gpr[3] != 0u;
    // nop
      if (branch_taken) {
          goto L_08A5DE54;
      }
      goto L_08A5DE4C;
    }
L_08A5DE4C:
    ctx.set_gpr(31, 0x08A5DE54u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0080_entry, 80u, 556u, 0x089467C8u>(ctx, &aot_mem) && ctx.pc == 0x08A5DE54u) goto L_08A5DE54;
    return;
L_08A5DE54:
    ctx.set_gpr(3, 2246u << 16u);
    rt.memory().aot_store32(ctx.gpr[3] + static_cast<std::uint32_t>(-21232), 0u);
    goto L_08A5DE5C;
L_08A5DE5C:
    ctx.set_gpr(3, 2246u << 16u);
    ctx.set_gpr(4, rt.memory().aot_load32(ctx.gpr[3] + static_cast<std::uint32_t>(-21228)));
    { const bool branch_taken = ctx.gpr[4] == 0u;
    // nop
      if (branch_taken) {
          goto L_08A5DE98;
      }
      goto L_08A5DE6C;
    }
L_08A5DE6C:
    ctx.set_gpr(3, rt.memory().aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(4)));
    ctx.set_gpr(3, ctx.gpr[3] + static_cast<std::uint32_t>(-1));
    rt.memory().aot_store32(ctx.gpr[4] + static_cast<std::uint32_t>(4), ctx.gpr[3]);
    ctx.set_gpr(3, ctx.gpr[3] << 10u);
    ctx.set_gpr(3, ctx.gpr[3] >> 10u);
    { const bool branch_taken = ctx.gpr[3] != 0u;
    // nop
      if (branch_taken) {
          goto L_08A5DE90;
      }
      goto L_08A5DE88;
    }
L_08A5DE88:
    ctx.set_gpr(31, 0x08A5DE90u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0080_entry, 80u, 556u, 0x089467C8u>(ctx, &aot_mem) && ctx.pc == 0x08A5DE90u) goto L_08A5DE90;
    return;
L_08A5DE90:
    ctx.set_gpr(3, 2246u << 16u);
    rt.memory().aot_store32(ctx.gpr[3] + static_cast<std::uint32_t>(-21228), 0u);
    goto L_08A5DE98;
L_08A5DE98:
    ctx.set_gpr(3, 2246u << 16u);
    ctx.set_gpr(4, rt.memory().aot_load32(ctx.gpr[3] + static_cast<std::uint32_t>(-21224)));
    { const bool branch_taken = ctx.gpr[4] == 0u;
    // nop
      if (branch_taken) {
          goto L_08A5DED4;
      }
      goto L_08A5DEA8;
    }
L_08A5DEA8:
    ctx.set_gpr(3, rt.memory().aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(4)));
    ctx.set_gpr(3, ctx.gpr[3] + static_cast<std::uint32_t>(-1));
    rt.memory().aot_store32(ctx.gpr[4] + static_cast<std::uint32_t>(4), ctx.gpr[3]);
    ctx.set_gpr(3, ctx.gpr[3] << 10u);
    ctx.set_gpr(3, ctx.gpr[3] >> 10u);
    { const bool branch_taken = ctx.gpr[3] != 0u;
    // nop
      if (branch_taken) {
          goto L_08A5DECC;
      }
      goto L_08A5DEC4;
    }
L_08A5DEC4:
    ctx.set_gpr(31, 0x08A5DECCu);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0080_entry, 80u, 556u, 0x089467C8u>(ctx, &aot_mem) && ctx.pc == 0x08A5DECCu) goto L_08A5DECC;
    return;
L_08A5DECC:
    ctx.set_gpr(3, 2246u << 16u);
    rt.memory().aot_store32(ctx.gpr[3] + static_cast<std::uint32_t>(-21224), 0u);
    goto L_08A5DED4;
L_08A5DED4:
    ctx.set_gpr(3, 2246u << 16u);
    ctx.set_gpr(4, rt.memory().aot_load32(ctx.gpr[3] + static_cast<std::uint32_t>(-21240)));
    { const bool branch_taken = ctx.gpr[4] == 0u;
    // nop
      if (branch_taken) {
          goto L_08A5DF10;
      }
      goto L_08A5DEE4;
    }
L_08A5DEE4:
    ctx.set_gpr(3, rt.memory().aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(4)));
    ctx.set_gpr(3, ctx.gpr[3] + static_cast<std::uint32_t>(-1));
    rt.memory().aot_store32(ctx.gpr[4] + static_cast<std::uint32_t>(4), ctx.gpr[3]);
    ctx.set_gpr(3, ctx.gpr[3] << 10u);
    ctx.set_gpr(3, ctx.gpr[3] >> 10u);
    { const bool branch_taken = ctx.gpr[3] != 0u;
    // nop
      if (branch_taken) {
          goto L_08A5DF08;
      }
      goto L_08A5DF00;
    }
L_08A5DF00:
    ctx.set_gpr(31, 0x08A5DF08u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0080_entry, 80u, 556u, 0x089467C8u>(ctx, &aot_mem) && ctx.pc == 0x08A5DF08u) goto L_08A5DF08;
    return;
L_08A5DF08:
    ctx.set_gpr(3, 2246u << 16u);
    rt.memory().aot_store32(ctx.gpr[3] + static_cast<std::uint32_t>(-21240), 0u);
    goto L_08A5DF10;
L_08A5DF10:
    ctx.set_gpr(3, 2246u << 16u);
    ctx.set_gpr(4, rt.memory().aot_load32(ctx.gpr[3] + static_cast<std::uint32_t>(-21252)));
    { const bool branch_taken = ctx.gpr[4] == 0u;
    // nop
      if (branch_taken) {
          goto L_08A5DF4C;
      }
      goto L_08A5DF20;
    }
L_08A5DF20:
    ctx.set_gpr(3, rt.memory().aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(4)));
    ctx.set_gpr(3, ctx.gpr[3] + static_cast<std::uint32_t>(-1));
    rt.memory().aot_store32(ctx.gpr[4] + static_cast<std::uint32_t>(4), ctx.gpr[3]);
    ctx.set_gpr(3, ctx.gpr[3] << 10u);
    ctx.set_gpr(3, ctx.gpr[3] >> 10u);
    { const bool branch_taken = ctx.gpr[3] != 0u;
    // nop
      if (branch_taken) {
          goto L_08A5DF44;
      }
      goto L_08A5DF3C;
    }
L_08A5DF3C:
    ctx.set_gpr(31, 0x08A5DF44u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0080_entry, 80u, 556u, 0x089467C8u>(ctx, &aot_mem) && ctx.pc == 0x08A5DF44u) goto L_08A5DF44;
    return;
L_08A5DF44:
    ctx.set_gpr(3, 2246u << 16u);
    rt.memory().aot_store32(ctx.gpr[3] + static_cast<std::uint32_t>(-21252), 0u);
    goto L_08A5DF4C;
L_08A5DF4C:
    ctx.set_gpr(3, 2246u << 16u);
    ctx.set_gpr(4, rt.memory().aot_load32(ctx.gpr[3] + static_cast<std::uint32_t>(-21248)));
    { const bool branch_taken = ctx.gpr[4] == 0u;
    // nop
      if (branch_taken) {
          goto L_08A5DF88;
      }
      goto L_08A5DF5C;
    }
L_08A5DF5C:
    ctx.set_gpr(3, rt.memory().aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(4)));
    ctx.set_gpr(3, ctx.gpr[3] + static_cast<std::uint32_t>(-1));
    rt.memory().aot_store32(ctx.gpr[4] + static_cast<std::uint32_t>(4), ctx.gpr[3]);
    ctx.set_gpr(3, ctx.gpr[3] << 10u);
    ctx.set_gpr(3, ctx.gpr[3] >> 10u);
    { const bool branch_taken = ctx.gpr[3] != 0u;
    // nop
      if (branch_taken) {
          goto L_08A5DF80;
      }
      goto L_08A5DF78;
    }
L_08A5DF78:
    ctx.set_gpr(31, 0x08A5DF80u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0080_entry, 80u, 556u, 0x089467C8u>(ctx, &aot_mem) && ctx.pc == 0x08A5DF80u) goto L_08A5DF80;
    return;
L_08A5DF80:
    ctx.set_gpr(3, 2246u << 16u);
    rt.memory().aot_store32(ctx.gpr[3] + static_cast<std::uint32_t>(-21248), 0u);
    goto L_08A5DF88;
L_08A5DF88:
    ctx.set_gpr(3, 2246u << 16u);
    ctx.set_gpr(4, rt.memory().aot_load32(ctx.gpr[3] + static_cast<std::uint32_t>(-21192)));
    { const bool branch_taken = ctx.gpr[4] == 0u;
    // nop
      if (branch_taken) {
          goto L_08A5DFC4;
      }
      goto L_08A5DF98;
    }
L_08A5DF98:
    ctx.set_gpr(3, rt.memory().aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(4)));
    ctx.set_gpr(3, ctx.gpr[3] + static_cast<std::uint32_t>(-1));
    rt.memory().aot_store32(ctx.gpr[4] + static_cast<std::uint32_t>(4), ctx.gpr[3]);
    ctx.set_gpr(3, ctx.gpr[3] << 10u);
    ctx.set_gpr(3, ctx.gpr[3] >> 10u);
    { const bool branch_taken = ctx.gpr[3] != 0u;
    // nop
      if (branch_taken) {
          goto L_08A5DFBC;
      }
      goto L_08A5DFB4;
    }
L_08A5DFB4:
    ctx.set_gpr(31, 0x08A5DFBCu);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0080_entry, 80u, 556u, 0x089467C8u>(ctx, &aot_mem) && ctx.pc == 0x08A5DFBCu) goto L_08A5DFBC;
    return;
L_08A5DFBC:
    ctx.set_gpr(3, 2246u << 16u);
    rt.memory().aot_store32(ctx.gpr[3] + static_cast<std::uint32_t>(-21192), 0u);
    goto L_08A5DFC4;
L_08A5DFC4:
    ctx.set_gpr(3, 2246u << 16u);
    ctx.set_gpr(4, rt.memory().aot_load32(ctx.gpr[3] + static_cast<std::uint32_t>(-21188)));
    { const bool branch_taken = ctx.gpr[4] == 0u;
    // nop
      if (branch_taken) {
          goto L_08A5E000;
      }
      goto L_08A5DFD4;
    }
L_08A5DFD4:
    ctx.set_gpr(3, rt.memory().aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(4)));
    ctx.set_gpr(3, ctx.gpr[3] + static_cast<std::uint32_t>(-1));
    rt.memory().aot_store32(ctx.gpr[4] + static_cast<std::uint32_t>(4), ctx.gpr[3]);
    ctx.set_gpr(3, ctx.gpr[3] << 10u);
    ctx.set_gpr(3, ctx.gpr[3] >> 10u);
    { const bool branch_taken = ctx.gpr[3] != 0u;
    // nop
      if (branch_taken) {
          goto L_08A5DFF8;
      }
      goto L_08A5DFF0;
    }
L_08A5DFF0:
    ctx.set_gpr(31, 0x08A5DFF8u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0080_entry, 80u, 556u, 0x089467C8u>(ctx, &aot_mem) && ctx.pc == 0x08A5DFF8u) goto L_08A5DFF8;
    return;
L_08A5DFF8:
    ctx.set_gpr(3, 2246u << 16u);
    rt.memory().aot_store32(ctx.gpr[3] + static_cast<std::uint32_t>(-21188), 0u);
    goto L_08A5E000;
L_08A5E000:
    ctx.set_gpr(3, 2246u << 16u);
    ctx.set_gpr(4, rt.memory().aot_load32(ctx.gpr[3] + static_cast<std::uint32_t>(-21184)));
    { const bool branch_taken = ctx.gpr[4] == 0u;
    // nop
      if (branch_taken) {
          goto L_08A5E03C;
      }
      goto L_08A5E010;
    }
L_08A5E010:
    ctx.set_gpr(3, rt.memory().aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(4)));
    ctx.set_gpr(3, ctx.gpr[3] + static_cast<std::uint32_t>(-1));
    rt.memory().aot_store32(ctx.gpr[4] + static_cast<std::uint32_t>(4), ctx.gpr[3]);
    ctx.set_gpr(3, ctx.gpr[3] << 10u);
    ctx.set_gpr(3, ctx.gpr[3] >> 10u);
    { const bool branch_taken = ctx.gpr[3] != 0u;
    // nop
      if (branch_taken) {
          goto L_08A5E034;
      }
      goto L_08A5E02C;
    }
L_08A5E02C:
    ctx.set_gpr(31, 0x08A5E034u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0080_entry, 80u, 556u, 0x089467C8u>(ctx, &aot_mem) && ctx.pc == 0x08A5E034u) goto L_08A5E034;
    return;
L_08A5E034:
    ctx.set_gpr(3, 2246u << 16u);
    rt.memory().aot_store32(ctx.gpr[3] + static_cast<std::uint32_t>(-21184), 0u);
    goto L_08A5E03C;
L_08A5E03C:
    ctx.set_gpr(3, 2246u << 16u);
    ctx.set_gpr(4, rt.memory().aot_load32(ctx.gpr[3] + static_cast<std::uint32_t>(-21180)));
    { const bool branch_taken = ctx.gpr[4] == 0u;
    // nop
      if (branch_taken) {
          goto L_08A5E078;
      }
      goto L_08A5E04C;
    }
L_08A5E04C:
    ctx.set_gpr(3, rt.memory().aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(4)));
    ctx.set_gpr(3, ctx.gpr[3] + static_cast<std::uint32_t>(-1));
    rt.memory().aot_store32(ctx.gpr[4] + static_cast<std::uint32_t>(4), ctx.gpr[3]);
    ctx.set_gpr(3, ctx.gpr[3] << 10u);
    ctx.set_gpr(3, ctx.gpr[3] >> 10u);
    { const bool branch_taken = ctx.gpr[3] != 0u;
    // nop
      if (branch_taken) {
          goto L_08A5E070;
      }
      goto L_08A5E068;
    }
L_08A5E068:
    ctx.set_gpr(31, 0x08A5E070u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0080_entry, 80u, 556u, 0x089467C8u>(ctx, &aot_mem) && ctx.pc == 0x08A5E070u) goto L_08A5E070;
    return;
L_08A5E070:
    ctx.set_gpr(3, 2246u << 16u);
    rt.memory().aot_store32(ctx.gpr[3] + static_cast<std::uint32_t>(-21180), 0u);
    goto L_08A5E078;
L_08A5E078:
    ctx.set_gpr(3, 2246u << 16u);
    ctx.set_gpr(4, rt.memory().aot_load32(ctx.gpr[3] + static_cast<std::uint32_t>(-21176)));
    { const bool branch_taken = ctx.gpr[4] == 0u;
    // nop
      if (branch_taken) {
          goto L_08A5E0B4;
      }
      goto L_08A5E088;
    }
L_08A5E088:
    ctx.set_gpr(3, rt.memory().aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(4)));
    ctx.set_gpr(3, ctx.gpr[3] + static_cast<std::uint32_t>(-1));
    rt.memory().aot_store32(ctx.gpr[4] + static_cast<std::uint32_t>(4), ctx.gpr[3]);
    ctx.set_gpr(3, ctx.gpr[3] << 10u);
    ctx.set_gpr(3, ctx.gpr[3] >> 10u);
    { const bool branch_taken = ctx.gpr[3] != 0u;
    // nop
      if (branch_taken) {
          goto L_08A5E0AC;
      }
      goto L_08A5E0A4;
    }
L_08A5E0A4:
    ctx.set_gpr(31, 0x08A5E0ACu);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0080_entry, 80u, 556u, 0x089467C8u>(ctx, &aot_mem) && ctx.pc == 0x08A5E0ACu) goto L_08A5E0AC;
    return;
L_08A5E0AC:
    ctx.set_gpr(3, 2246u << 16u);
    rt.memory().aot_store32(ctx.gpr[3] + static_cast<std::uint32_t>(-21176), 0u);
    goto L_08A5E0B4;
L_08A5E0B4:
    ctx.set_gpr(3, 2246u << 16u);
    ctx.set_gpr(4, rt.memory().aot_load32(ctx.gpr[3] + static_cast<std::uint32_t>(-21172)));
    { const bool branch_taken = ctx.gpr[4] == 0u;
    // nop
      if (branch_taken) {
          goto L_08A5E0F0;
      }
      goto L_08A5E0C4;
    }
L_08A5E0C4:
    ctx.set_gpr(3, rt.memory().aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(4)));
    ctx.set_gpr(3, ctx.gpr[3] + static_cast<std::uint32_t>(-1));
    rt.memory().aot_store32(ctx.gpr[4] + static_cast<std::uint32_t>(4), ctx.gpr[3]);
    ctx.set_gpr(3, ctx.gpr[3] << 10u);
    ctx.set_gpr(3, ctx.gpr[3] >> 10u);
    { const bool branch_taken = ctx.gpr[3] != 0u;
    // nop
      if (branch_taken) {
          goto L_08A5E0E8;
      }
      goto L_08A5E0E0;
    }
L_08A5E0E0:
    ctx.set_gpr(31, 0x08A5E0E8u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0080_entry, 80u, 556u, 0x089467C8u>(ctx, &aot_mem) && ctx.pc == 0x08A5E0E8u) goto L_08A5E0E8;
    return;
L_08A5E0E8:
    ctx.set_gpr(3, 2246u << 16u);
    rt.memory().aot_store32(ctx.gpr[3] + static_cast<std::uint32_t>(-21172), 0u);
    goto L_08A5E0F0;
L_08A5E0F0:
    ctx.set_gpr(3, 2246u << 16u);
    ctx.set_gpr(4, rt.memory().aot_load32(ctx.gpr[3] + static_cast<std::uint32_t>(-21168)));
    { const bool branch_taken = ctx.gpr[4] == 0u;
    // nop
      if (branch_taken) {
          goto L_08A5E12C;
      }
      goto L_08A5E100;
    }
L_08A5E100:
    ctx.set_gpr(3, rt.memory().aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(4)));
    ctx.set_gpr(3, ctx.gpr[3] + static_cast<std::uint32_t>(-1));
    rt.memory().aot_store32(ctx.gpr[4] + static_cast<std::uint32_t>(4), ctx.gpr[3]);
    ctx.set_gpr(3, ctx.gpr[3] << 10u);
    ctx.set_gpr(3, ctx.gpr[3] >> 10u);
    { const bool branch_taken = ctx.gpr[3] != 0u;
    // nop
      if (branch_taken) {
          goto L_08A5E124;
      }
      goto L_08A5E11C;
    }
L_08A5E11C:
    ctx.set_gpr(31, 0x08A5E124u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0080_entry, 80u, 556u, 0x089467C8u>(ctx, &aot_mem) && ctx.pc == 0x08A5E124u) goto L_08A5E124;
    return;
L_08A5E124:
    ctx.set_gpr(3, 2246u << 16u);
    rt.memory().aot_store32(ctx.gpr[3] + static_cast<std::uint32_t>(-21168), 0u);
    goto L_08A5E12C;
L_08A5E12C:
    ctx.set_gpr(3, 2246u << 16u);
    ctx.set_gpr(4, rt.memory().aot_load32(ctx.gpr[3] + static_cast<std::uint32_t>(-21164)));
    { const bool branch_taken = ctx.gpr[4] == 0u;
    // nop
      if (branch_taken) {
          goto L_08A5E168;
      }
      goto L_08A5E13C;
    }
L_08A5E13C:
    ctx.set_gpr(3, rt.memory().aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(4)));
    ctx.set_gpr(3, ctx.gpr[3] + static_cast<std::uint32_t>(-1));
    rt.memory().aot_store32(ctx.gpr[4] + static_cast<std::uint32_t>(4), ctx.gpr[3]);
    ctx.set_gpr(3, ctx.gpr[3] << 10u);
    ctx.set_gpr(3, ctx.gpr[3] >> 10u);
    { const bool branch_taken = ctx.gpr[3] != 0u;
    // nop
      if (branch_taken) {
          goto L_08A5E160;
      }
      goto L_08A5E158;
    }
L_08A5E158:
    ctx.set_gpr(31, 0x08A5E160u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0080_entry, 80u, 556u, 0x089467C8u>(ctx, &aot_mem) && ctx.pc == 0x08A5E160u) goto L_08A5E160;
    return;
L_08A5E160:
    ctx.set_gpr(3, 2246u << 16u);
    rt.memory().aot_store32(ctx.gpr[3] + static_cast<std::uint32_t>(-21164), 0u);
    goto L_08A5E168;
L_08A5E168:
    ctx.set_gpr(3, 2246u << 16u);
    ctx.set_gpr(4, rt.memory().aot_load32(ctx.gpr[3] + static_cast<std::uint32_t>(-21256)));
    { const bool branch_taken = ctx.gpr[4] == 0u;
    // nop
      if (branch_taken) {
          goto L_08A5E1A4;
      }
      goto L_08A5E178;
    }
L_08A5E178:
    ctx.set_gpr(3, rt.memory().aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(4)));
    ctx.set_gpr(3, ctx.gpr[3] + static_cast<std::uint32_t>(-1));
    rt.memory().aot_store32(ctx.gpr[4] + static_cast<std::uint32_t>(4), ctx.gpr[3]);
    ctx.set_gpr(3, ctx.gpr[3] << 10u);
    ctx.set_gpr(3, ctx.gpr[3] >> 10u);
    { const bool branch_taken = ctx.gpr[3] != 0u;
    // nop
      if (branch_taken) {
          goto L_08A5E19C;
      }
      goto L_08A5E194;
    }
L_08A5E194:
    ctx.set_gpr(31, 0x08A5E19Cu);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0080_entry, 80u, 556u, 0x089467C8u>(ctx, &aot_mem) && ctx.pc == 0x08A5E19Cu) goto L_08A5E19C;
    return;
L_08A5E19C:
    ctx.set_gpr(3, 2246u << 16u);
    rt.memory().aot_store32(ctx.gpr[3] + static_cast<std::uint32_t>(-21256), 0u);
    goto L_08A5E1A4;
L_08A5E1A4:
    ctx.set_gpr(3, 2246u << 16u);
    ctx.set_gpr(4, rt.memory().aot_load32(ctx.gpr[3] + static_cast<std::uint32_t>(-21100)));
    { const bool branch_taken = ctx.gpr[4] == 0u;
    // nop
      if (branch_taken) {
          goto L_08A5E1E0;
      }
      goto L_08A5E1B4;
    }
L_08A5E1B4:
    ctx.set_gpr(3, rt.memory().aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(4)));
    ctx.set_gpr(3, ctx.gpr[3] + static_cast<std::uint32_t>(-1));
    rt.memory().aot_store32(ctx.gpr[4] + static_cast<std::uint32_t>(4), ctx.gpr[3]);
    ctx.set_gpr(3, ctx.gpr[3] << 10u);
    ctx.set_gpr(3, ctx.gpr[3] >> 10u);
    { const bool branch_taken = ctx.gpr[3] != 0u;
    // nop
      if (branch_taken) {
          goto L_08A5E1D8;
      }
      goto L_08A5E1D0;
    }
L_08A5E1D0:
    ctx.set_gpr(31, 0x08A5E1D8u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0080_entry, 80u, 556u, 0x089467C8u>(ctx, &aot_mem) && ctx.pc == 0x08A5E1D8u) goto L_08A5E1D8;
    return;
L_08A5E1D8:
    ctx.set_gpr(3, 2246u << 16u);
    rt.memory().aot_store32(ctx.gpr[3] + static_cast<std::uint32_t>(-21100), 0u);
    goto L_08A5E1E0;
L_08A5E1E0:
    ctx.set_gpr(3, 2246u << 16u);
    ctx.set_gpr(4, rt.memory().aot_load32(ctx.gpr[3] + static_cast<std::uint32_t>(-21096)));
    { const bool branch_taken = ctx.gpr[4] == 0u;
    // nop
      if (branch_taken) {
          goto L_08A5E21C;
      }
      goto L_08A5E1F0;
    }
L_08A5E1F0:
    ctx.set_gpr(3, rt.memory().aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(4)));
    ctx.set_gpr(3, ctx.gpr[3] + static_cast<std::uint32_t>(-1));
    rt.memory().aot_store32(ctx.gpr[4] + static_cast<std::uint32_t>(4), ctx.gpr[3]);
    ctx.set_gpr(3, ctx.gpr[3] << 10u);
    ctx.set_gpr(3, ctx.gpr[3] >> 10u);
    { const bool branch_taken = ctx.gpr[3] != 0u;
    // nop
      if (branch_taken) {
          goto L_08A5E214;
      }
      goto L_08A5E20C;
    }
L_08A5E20C:
    ctx.set_gpr(31, 0x08A5E214u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0080_entry, 80u, 556u, 0x089467C8u>(ctx, &aot_mem) && ctx.pc == 0x08A5E214u) goto L_08A5E214;
    return;
L_08A5E214:
    ctx.set_gpr(3, 2246u << 16u);
    rt.memory().aot_store32(ctx.gpr[3] + static_cast<std::uint32_t>(-21096), 0u);
    goto L_08A5E21C;
L_08A5E21C:
    ctx.set_gpr(3, 2246u << 16u);
    ctx.set_gpr(4, rt.memory().aot_load32(ctx.gpr[3] + static_cast<std::uint32_t>(-21092)));
    { const bool branch_taken = ctx.gpr[4] == 0u;
    // nop
      if (branch_taken) {
          goto L_08A5E258;
      }
      goto L_08A5E22C;
    }
L_08A5E22C:
    ctx.set_gpr(3, rt.memory().aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(4)));
    ctx.set_gpr(3, ctx.gpr[3] + static_cast<std::uint32_t>(-1));
    rt.memory().aot_store32(ctx.gpr[4] + static_cast<std::uint32_t>(4), ctx.gpr[3]);
    ctx.set_gpr(3, ctx.gpr[3] << 10u);
    ctx.set_gpr(3, ctx.gpr[3] >> 10u);
    { const bool branch_taken = ctx.gpr[3] != 0u;
    // nop
      if (branch_taken) {
          goto L_08A5E250;
      }
      goto L_08A5E248;
    }
L_08A5E248:
    ctx.set_gpr(31, 0x08A5E250u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0080_entry, 80u, 556u, 0x089467C8u>(ctx, &aot_mem) && ctx.pc == 0x08A5E250u) goto L_08A5E250;
    return;
L_08A5E250:
    ctx.set_gpr(3, 2246u << 16u);
    rt.memory().aot_store32(ctx.gpr[3] + static_cast<std::uint32_t>(-21092), 0u);
    goto L_08A5E258;
L_08A5E258:
    ctx.set_gpr(3, 2246u << 16u);
    ctx.set_gpr(4, rt.memory().aot_load32(ctx.gpr[3] + static_cast<std::uint32_t>(-21120)));
    { const bool branch_taken = ctx.gpr[4] == 0u;
    // nop
      if (branch_taken) {
          goto L_08A5E294;
      }
      goto L_08A5E268;
    }
L_08A5E268:
    ctx.set_gpr(3, rt.memory().aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(4)));
    ctx.set_gpr(3, ctx.gpr[3] + static_cast<std::uint32_t>(-1));
    rt.memory().aot_store32(ctx.gpr[4] + static_cast<std::uint32_t>(4), ctx.gpr[3]);
    ctx.set_gpr(3, ctx.gpr[3] << 10u);
    ctx.set_gpr(3, ctx.gpr[3] >> 10u);
    { const bool branch_taken = ctx.gpr[3] != 0u;
    // nop
      if (branch_taken) {
          goto L_08A5E28C;
      }
      goto L_08A5E284;
    }
L_08A5E284:
    ctx.set_gpr(31, 0x08A5E28Cu);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0080_entry, 80u, 556u, 0x089467C8u>(ctx, &aot_mem) && ctx.pc == 0x08A5E28Cu) goto L_08A5E28C;
    return;
L_08A5E28C:
    ctx.set_gpr(3, 2246u << 16u);
    rt.memory().aot_store32(ctx.gpr[3] + static_cast<std::uint32_t>(-21120), 0u);
    goto L_08A5E294;
L_08A5E294:
    ctx.set_gpr(3, 2246u << 16u);
    ctx.set_gpr(4, rt.memory().aot_load32(ctx.gpr[3] + static_cast<std::uint32_t>(-21080)));
    { const bool branch_taken = ctx.gpr[4] == 0u;
    // nop
      if (branch_taken) {
          goto L_08A5E2D0;
      }
      goto L_08A5E2A4;
    }
L_08A5E2A4:
    ctx.set_gpr(3, rt.memory().aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(4)));
    ctx.set_gpr(3, ctx.gpr[3] + static_cast<std::uint32_t>(-1));
    rt.memory().aot_store32(ctx.gpr[4] + static_cast<std::uint32_t>(4), ctx.gpr[3]);
    ctx.set_gpr(3, ctx.gpr[3] << 10u);
    ctx.set_gpr(3, ctx.gpr[3] >> 10u);
    { const bool branch_taken = ctx.gpr[3] != 0u;
    // nop
      if (branch_taken) {
          goto L_08A5E2C8;
      }
      goto L_08A5E2C0;
    }
L_08A5E2C0:
    ctx.set_gpr(31, 0x08A5E2C8u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0080_entry, 80u, 556u, 0x089467C8u>(ctx, &aot_mem) && ctx.pc == 0x08A5E2C8u) goto L_08A5E2C8;
    return;
L_08A5E2C8:
    ctx.set_gpr(3, 2246u << 16u);
    rt.memory().aot_store32(ctx.gpr[3] + static_cast<std::uint32_t>(-21080), 0u);
    goto L_08A5E2D0;
L_08A5E2D0:
    ctx.set_gpr(3, 2246u << 16u);
    ctx.set_gpr(4, rt.memory().aot_load32(ctx.gpr[3] + static_cast<std::uint32_t>(-21076)));
    { const bool branch_taken = ctx.gpr[4] == 0u;
    // nop
      if (branch_taken) {
          goto L_08A5E30C;
      }
      goto L_08A5E2E0;
    }
L_08A5E2E0:
    ctx.set_gpr(3, rt.memory().aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(4)));
    ctx.set_gpr(3, ctx.gpr[3] + static_cast<std::uint32_t>(-1));
    rt.memory().aot_store32(ctx.gpr[4] + static_cast<std::uint32_t>(4), ctx.gpr[3]);
    ctx.set_gpr(3, ctx.gpr[3] << 10u);
    ctx.set_gpr(3, ctx.gpr[3] >> 10u);
    { const bool branch_taken = ctx.gpr[3] != 0u;
    // nop
      if (branch_taken) {
          goto L_08A5E304;
      }
      goto L_08A5E2FC;
    }
L_08A5E2FC:
    ctx.set_gpr(31, 0x08A5E304u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0080_entry, 80u, 556u, 0x089467C8u>(ctx, &aot_mem) && ctx.pc == 0x08A5E304u) goto L_08A5E304;
    return;
L_08A5E304:
    ctx.set_gpr(3, 2246u << 16u);
    rt.memory().aot_store32(ctx.gpr[3] + static_cast<std::uint32_t>(-21076), 0u);
    goto L_08A5E30C;
L_08A5E30C:
    ctx.set_gpr(3, 2246u << 16u);
    ctx.set_gpr(4, rt.memory().aot_load32(ctx.gpr[3] + static_cast<std::uint32_t>(-21072)));
    { const bool branch_taken = ctx.gpr[4] == 0u;
    // nop
      if (branch_taken) {
          goto L_08A5E348;
      }
      goto L_08A5E31C;
    }
L_08A5E31C:
    ctx.set_gpr(3, rt.memory().aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(4)));
    ctx.set_gpr(3, ctx.gpr[3] + static_cast<std::uint32_t>(-1));
    rt.memory().aot_store32(ctx.gpr[4] + static_cast<std::uint32_t>(4), ctx.gpr[3]);
    ctx.set_gpr(3, ctx.gpr[3] << 10u);
    ctx.set_gpr(3, ctx.gpr[3] >> 10u);
    { const bool branch_taken = ctx.gpr[3] != 0u;
    // nop
      if (branch_taken) {
          goto L_08A5E340;
      }
      goto L_08A5E338;
    }
L_08A5E338:
    ctx.set_gpr(31, 0x08A5E340u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0080_entry, 80u, 556u, 0x089467C8u>(ctx, &aot_mem) && ctx.pc == 0x08A5E340u) goto L_08A5E340;
    return;
L_08A5E340:
    ctx.set_gpr(3, 2246u << 16u);
    rt.memory().aot_store32(ctx.gpr[3] + static_cast<std::uint32_t>(-21072), 0u);
    goto L_08A5E348;
L_08A5E348:
    ctx.set_gpr(3, 2246u << 16u);
    ctx.set_gpr(4, rt.memory().aot_load32(ctx.gpr[3] + static_cast<std::uint32_t>(-21068)));
    { const bool branch_taken = ctx.gpr[4] == 0u;
    // nop
      if (branch_taken) {
          goto L_08A5E384;
      }
      goto L_08A5E358;
    }
L_08A5E358:
    ctx.set_gpr(3, rt.memory().aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(4)));
    ctx.set_gpr(3, ctx.gpr[3] + static_cast<std::uint32_t>(-1));
    rt.memory().aot_store32(ctx.gpr[4] + static_cast<std::uint32_t>(4), ctx.gpr[3]);
    ctx.set_gpr(3, ctx.gpr[3] << 10u);
    ctx.set_gpr(3, ctx.gpr[3] >> 10u);
    { const bool branch_taken = ctx.gpr[3] != 0u;
    // nop
      if (branch_taken) {
          goto L_08A5E37C;
      }
      goto L_08A5E374;
    }
L_08A5E374:
    ctx.set_gpr(31, 0x08A5E37Cu);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0080_entry, 80u, 556u, 0x089467C8u>(ctx, &aot_mem) && ctx.pc == 0x08A5E37Cu) goto L_08A5E37C;
    return;
L_08A5E37C:
    ctx.set_gpr(3, 2246u << 16u);
    rt.memory().aot_store32(ctx.gpr[3] + static_cast<std::uint32_t>(-21068), 0u);
    goto L_08A5E384;
L_08A5E384:
    ctx.set_gpr(3, 2246u << 16u);
    ctx.set_gpr(4, rt.memory().aot_load32(ctx.gpr[3] + static_cast<std::uint32_t>(-21144)));
    { const bool branch_taken = ctx.gpr[4] == 0u;
    // nop
      if (branch_taken) {
          goto L_08A5E3C0;
      }
      goto L_08A5E394;
    }
L_08A5E394:
    ctx.set_gpr(3, rt.memory().aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(4)));
    ctx.set_gpr(3, ctx.gpr[3] + static_cast<std::uint32_t>(-1));
    rt.memory().aot_store32(ctx.gpr[4] + static_cast<std::uint32_t>(4), ctx.gpr[3]);
    ctx.set_gpr(3, ctx.gpr[3] << 10u);
    ctx.set_gpr(3, ctx.gpr[3] >> 10u);
    { const bool branch_taken = ctx.gpr[3] != 0u;
    // nop
      if (branch_taken) {
          goto L_08A5E3B8;
      }
      goto L_08A5E3B0;
    }
L_08A5E3B0:
    ctx.set_gpr(31, 0x08A5E3B8u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0080_entry, 80u, 556u, 0x089467C8u>(ctx, &aot_mem) && ctx.pc == 0x08A5E3B8u) goto L_08A5E3B8;
    return;
L_08A5E3B8:
    ctx.set_gpr(3, 2246u << 16u);
    rt.memory().aot_store32(ctx.gpr[3] + static_cast<std::uint32_t>(-21144), 0u);
    goto L_08A5E3C0;
L_08A5E3C0:
    ctx.set_gpr(3, 2246u << 16u);
    ctx.set_gpr(4, rt.memory().aot_load32(ctx.gpr[3] + static_cast<std::uint32_t>(-21140)));
    { const bool branch_taken = ctx.gpr[4] == 0u;
    // nop
      if (branch_taken) {
          goto L_08A5E3FC;
      }
      goto L_08A5E3D0;
    }
L_08A5E3D0:
    ctx.set_gpr(3, rt.memory().aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(4)));
    ctx.set_gpr(3, ctx.gpr[3] + static_cast<std::uint32_t>(-1));
    rt.memory().aot_store32(ctx.gpr[4] + static_cast<std::uint32_t>(4), ctx.gpr[3]);
    ctx.set_gpr(3, ctx.gpr[3] << 10u);
    ctx.set_gpr(3, ctx.gpr[3] >> 10u);
    { const bool branch_taken = ctx.gpr[3] != 0u;
    // nop
      if (branch_taken) {
          goto L_08A5E3F4;
      }
      goto L_08A5E3EC;
    }
L_08A5E3EC:
    ctx.set_gpr(31, 0x08A5E3F4u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0080_entry, 80u, 556u, 0x089467C8u>(ctx, &aot_mem) && ctx.pc == 0x08A5E3F4u) goto L_08A5E3F4;
    return;
L_08A5E3F4:
    ctx.set_gpr(3, 2246u << 16u);
    rt.memory().aot_store32(ctx.gpr[3] + static_cast<std::uint32_t>(-21140), 0u);
    goto L_08A5E3FC;
L_08A5E3FC:
    ctx.set_gpr(3, 2246u << 16u);
    ctx.set_gpr(4, rt.memory().aot_load32(ctx.gpr[3] + static_cast<std::uint32_t>(-21136)));
    { const bool branch_taken = ctx.gpr[4] == 0u;
    // nop
      if (branch_taken) {
          goto L_08A5E438;
      }
      goto L_08A5E40C;
    }
L_08A5E40C:
    ctx.set_gpr(3, rt.memory().aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(4)));
    ctx.set_gpr(3, ctx.gpr[3] + static_cast<std::uint32_t>(-1));
    rt.memory().aot_store32(ctx.gpr[4] + static_cast<std::uint32_t>(4), ctx.gpr[3]);
    ctx.set_gpr(3, ctx.gpr[3] << 10u);
    ctx.set_gpr(3, ctx.gpr[3] >> 10u);
    { const bool branch_taken = ctx.gpr[3] != 0u;
    // nop
      if (branch_taken) {
          goto L_08A5E430;
      }
      goto L_08A5E428;
    }
L_08A5E428:
    ctx.set_gpr(31, 0x08A5E430u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0080_entry, 80u, 556u, 0x089467C8u>(ctx, &aot_mem) && ctx.pc == 0x08A5E430u) goto L_08A5E430;
    return;
L_08A5E430:
    ctx.set_gpr(3, 2246u << 16u);
    rt.memory().aot_store32(ctx.gpr[3] + static_cast<std::uint32_t>(-21136), 0u);
    goto L_08A5E438;
L_08A5E438:
    ctx.set_gpr(3, 2246u << 16u);
    ctx.set_gpr(4, rt.memory().aot_load32(ctx.gpr[3] + static_cast<std::uint32_t>(-21132)));
    { const bool branch_taken = ctx.gpr[4] == 0u;
    // nop
      if (branch_taken) {
          goto L_08A5E474;
      }
      goto L_08A5E448;
    }
L_08A5E448:
    ctx.set_gpr(3, rt.memory().aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(4)));
    ctx.set_gpr(3, ctx.gpr[3] + static_cast<std::uint32_t>(-1));
    rt.memory().aot_store32(ctx.gpr[4] + static_cast<std::uint32_t>(4), ctx.gpr[3]);
    ctx.set_gpr(3, ctx.gpr[3] << 10u);
    ctx.set_gpr(3, ctx.gpr[3] >> 10u);
    { const bool branch_taken = ctx.gpr[3] != 0u;
    // nop
      if (branch_taken) {
          goto L_08A5E46C;
      }
      goto L_08A5E464;
    }
L_08A5E464:
    ctx.set_gpr(31, 0x08A5E46Cu);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0080_entry, 80u, 556u, 0x089467C8u>(ctx, &aot_mem) && ctx.pc == 0x08A5E46Cu) goto L_08A5E46C;
    return;
L_08A5E46C:
    ctx.set_gpr(3, 2246u << 16u);
    rt.memory().aot_store32(ctx.gpr[3] + static_cast<std::uint32_t>(-21132), 0u);
    goto L_08A5E474;
L_08A5E474:
    ctx.set_gpr(3, 2246u << 16u);
    ctx.set_gpr(4, rt.memory().aot_load32(ctx.gpr[3] + static_cast<std::uint32_t>(-21128)));
    { const bool branch_taken = ctx.gpr[4] == 0u;
    // nop
      if (branch_taken) {
          goto L_08A5E4B0;
      }
      goto L_08A5E484;
    }
L_08A5E484:
    ctx.set_gpr(3, rt.memory().aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(4)));
    ctx.set_gpr(3, ctx.gpr[3] + static_cast<std::uint32_t>(-1));
    rt.memory().aot_store32(ctx.gpr[4] + static_cast<std::uint32_t>(4), ctx.gpr[3]);
    ctx.set_gpr(3, ctx.gpr[3] << 10u);
    ctx.set_gpr(3, ctx.gpr[3] >> 10u);
    { const bool branch_taken = ctx.gpr[3] != 0u;
    // nop
      if (branch_taken) {
          goto L_08A5E4A8;
      }
      goto L_08A5E4A0;
    }
L_08A5E4A0:
    ctx.set_gpr(31, 0x08A5E4A8u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0080_entry, 80u, 556u, 0x089467C8u>(ctx, &aot_mem) && ctx.pc == 0x08A5E4A8u) goto L_08A5E4A8;
    return;
L_08A5E4A8:
    ctx.set_gpr(3, 2246u << 16u);
    rt.memory().aot_store32(ctx.gpr[3] + static_cast<std::uint32_t>(-21128), 0u);
    goto L_08A5E4B0;
L_08A5E4B0:
    ctx.set_gpr(3, 2246u << 16u);
    ctx.set_gpr(4, rt.memory().aot_load32(ctx.gpr[3] + static_cast<std::uint32_t>(-21124)));
    { const bool branch_taken = ctx.gpr[4] == 0u;
    // nop
      if (branch_taken) {
          goto L_08A5E4EC;
      }
      goto L_08A5E4C0;
    }
L_08A5E4C0:
    ctx.set_gpr(3, rt.memory().aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(4)));
    ctx.set_gpr(3, ctx.gpr[3] + static_cast<std::uint32_t>(-1));
    rt.memory().aot_store32(ctx.gpr[4] + static_cast<std::uint32_t>(4), ctx.gpr[3]);
    ctx.set_gpr(3, ctx.gpr[3] << 10u);
    ctx.set_gpr(3, ctx.gpr[3] >> 10u);
    { const bool branch_taken = ctx.gpr[3] != 0u;
    // nop
      if (branch_taken) {
          goto L_08A5E4E4;
      }
      goto L_08A5E4DC;
    }
L_08A5E4DC:
    ctx.set_gpr(31, 0x08A5E4E4u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0080_entry, 80u, 556u, 0x089467C8u>(ctx, &aot_mem) && ctx.pc == 0x08A5E4E4u) goto L_08A5E4E4;
    return;
L_08A5E4E4:
    ctx.set_gpr(3, 2246u << 16u);
    rt.memory().aot_store32(ctx.gpr[3] + static_cast<std::uint32_t>(-21124), 0u);
    goto L_08A5E4EC;
L_08A5E4EC:
    ctx.set_gpr(31, rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(12)));
    ctx.set_gpr(29, ctx.gpr[29] + static_cast<std::uint32_t>(16));
    jump_target = ctx.gpr[31];
    // nop
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_08A5E4FC:
    ctx.set_gpr(29, ctx.gpr[29] + static_cast<std::uint32_t>(-16));
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(12), ctx.gpr[31]);
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(8), ctx.gpr[16]);
    ctx.set_gpr(16, ctx.gpr[4] + 0u);
    ctx.set_gpr(25, rt.memory().aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(0)));
    ctx.set_gpr(25, rt.memory().aot_load32(ctx.gpr[25] + static_cast<std::uint32_t>(88)));
    jump_target = ctx.gpr[25];
    ctx.set_gpr(31, 0x08A5E51Cu);
    // nop
    ctx.pc = jump_target;
    if (rt.invoke_chained_call(ctx, &aot_mem) && ctx.pc == 0x08A5E51Cu) goto L_08A5E51C;
    return;
L_08A5E51C:
    ctx.set_gpr(4, ctx.gpr[2] + 0u);
    ctx.set_gpr(5, 0u + static_cast<std::uint32_t>(1));
    ctx.set_gpr(31, 0x08A5E52Cu);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0080_entry, 80u, 118u, 0x089448B4u>(ctx, &aot_mem) && ctx.pc == 0x08A5E52Cu) goto L_08A5E52C;
    return;
L_08A5E52C:
    { const bool branch_taken = ctx.gpr[2] != 0u;
    // nop
      if (branch_taken) {
          goto L_08A5E5C4;
      }
      goto L_08A5E534;
    }
L_08A5E534:
    ctx.set_gpr(31, 0x08A5E53Cu);
    // nop
    goto L_08A5D9A4;
L_08A5E53C:
    ctx.set_gpr(2, 2246u << 16u);
    ctx.set_gpr(4, rt.memory().aot_load32(ctx.gpr[2] + static_cast<std::uint32_t>(-21108)));
    { const bool branch_taken = ctx.gpr[4] == 0u;
    // nop
      if (branch_taken) {
          goto L_08A5E580;
      }
      goto L_08A5E54C;
    }
L_08A5E54C:
    { const bool branch_taken = ctx.gpr[4] == 0u;
    // nop
      if (branch_taken) {
          goto L_08A5E580;
      }
      goto L_08A5E554;
    }
L_08A5E554:
    ctx.set_gpr(2, rt.memory().aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(4)));
    ctx.set_gpr(2, ctx.gpr[2] + static_cast<std::uint32_t>(-1));
    rt.memory().aot_store32(ctx.gpr[4] + static_cast<std::uint32_t>(4), ctx.gpr[2]);
    ctx.set_gpr(2, ctx.gpr[2] << 10u);
    ctx.set_gpr(2, ctx.gpr[2] >> 10u);
    { const bool branch_taken = ctx.gpr[2] != 0u;
    // nop
      if (branch_taken) {
          goto L_08A5E578;
      }
      goto L_08A5E570;
    }
L_08A5E570:
    ctx.set_gpr(31, 0x08A5E578u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0080_entry, 80u, 556u, 0x089467C8u>(ctx, &aot_mem) && ctx.pc == 0x08A5E578u) goto L_08A5E578;
    return;
L_08A5E578:
    ctx.set_gpr(2, 2246u << 16u);
    rt.memory().aot_store32(ctx.gpr[2] + static_cast<std::uint32_t>(-21108), 0u);
    goto L_08A5E580;
L_08A5E580:
    ctx.set_gpr(2, 2246u << 16u);
    ctx.set_gpr(4, rt.memory().aot_load32(ctx.gpr[2] + static_cast<std::uint32_t>(-21104)));
    { const bool branch_taken = ctx.gpr[4] == 0u;
    // nop
      if (branch_taken) {
          goto L_08A5E5C4;
      }
      goto L_08A5E590;
    }
L_08A5E590:
    { const bool branch_taken = ctx.gpr[4] == 0u;
    // nop
      if (branch_taken) {
          goto L_08A5E5C4;
      }
      goto L_08A5E598;
    }
L_08A5E598:
    ctx.set_gpr(2, rt.memory().aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(4)));
    ctx.set_gpr(2, ctx.gpr[2] + static_cast<std::uint32_t>(-1));
    rt.memory().aot_store32(ctx.gpr[4] + static_cast<std::uint32_t>(4), ctx.gpr[2]);
    ctx.set_gpr(2, ctx.gpr[2] << 10u);
    ctx.set_gpr(2, ctx.gpr[2] >> 10u);
    { const bool branch_taken = ctx.gpr[2] != 0u;
    // nop
      if (branch_taken) {
          goto L_08A5E5BC;
      }
      goto L_08A5E5B4;
    }
L_08A5E5B4:
    ctx.set_gpr(31, 0x08A5E5BCu);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0080_entry, 80u, 556u, 0x089467C8u>(ctx, &aot_mem) && ctx.pc == 0x08A5E5BCu) goto L_08A5E5BC;
    return;
L_08A5E5BC:
    ctx.set_gpr(2, 2246u << 16u);
    rt.memory().aot_store32(ctx.gpr[2] + static_cast<std::uint32_t>(-21104), 0u);
    goto L_08A5E5C4;
L_08A5E5C4:
    ctx.set_gpr(4, ctx.gpr[16] + 0u);
    ctx.set_gpr(31, 0x08A5E5D0u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0145_entry, 145u, 225u, 0x08A491B0u>(ctx, &aot_mem) && ctx.pc == 0x08A5E5D0u) goto L_08A5E5D0;
    return;
L_08A5E5D0:
    ctx.set_gpr(31, rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(12)));
    ctx.set_gpr(16, rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(8)));
    ctx.set_gpr(29, ctx.gpr[29] + static_cast<std::uint32_t>(16));
    jump_target = ctx.gpr[31];
    // nop
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_08A5E5E4:
    ctx.set_gpr(29, ctx.gpr[29] + static_cast<std::uint32_t>(-32));
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(28), ctx.gpr[31]);
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(24), ctx.gpr[19]);
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(20), ctx.gpr[18]);
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(16), ctx.gpr[17]);
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(12), ctx.gpr[16]);
    ctx.set_gpr(19, ctx.gpr[4] + 0u);
    ctx.set_gpr(18, ctx.gpr[5] + 0u);
    ctx.set_gpr(3, rt.memory().aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(28)));
    { const bool branch_taken = ctx.gpr[3] == 0u;
    // nop
      if (branch_taken) {
          goto L_08A5E61C;
      }
      goto L_08A5E610;
    }
L_08A5E610:
    ctx.set_gpr(16, rt.memory().aot_load32(ctx.gpr[3] + static_cast<std::uint32_t>(8)));
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_08A5E620;
      }
      goto L_08A5E61C;
    }
L_08A5E61C:
    ctx.set_gpr(16, 0u + 0u);
    goto L_08A5E620;
L_08A5E620:
    ctx.set_gpr(17, 0u + 0u);
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_08A5E650;
      }
      goto L_08A5E62C;
    }
L_08A5E62C:
    ctx.set_gpr(2, rt.memory().aot_load32(ctx.gpr[19] + static_cast<std::uint32_t>(28)));
    ctx.set_gpr(3, ctx.gpr[17] << 2u);
    ctx.set_gpr(2, rt.memory().aot_load32(ctx.gpr[2] + static_cast<std::uint32_t>(16)));
    ctx.set_gpr(2, ctx.gpr[2] + ctx.gpr[3]);
    ctx.set_gpr(5, rt.memory().aot_load32(ctx.gpr[2] + static_cast<std::uint32_t>(0)));
    ctx.set_gpr(4, ctx.gpr[18] + 0u);
    ctx.set_gpr(31, 0x08A5E64Cu);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0153_entry, 153u, 317u, 0x08A69C98u>(ctx, &aot_mem) && ctx.pc == 0x08A5E64Cu) goto L_08A5E64C;
    return;
L_08A5E64C:
    ctx.set_gpr(17, ctx.gpr[17] + static_cast<std::uint32_t>(1));
    goto L_08A5E650;
L_08A5E650:
    ctx.set_gpr(3, static_cast<std::int32_t>(ctx.gpr[17]) < static_cast<std::int32_t>(ctx.gpr[16]) ? 1u : 0u);
    { const bool branch_taken = ctx.gpr[3] != 0u;
    // nop
      if (branch_taken) {
          goto L_08A5E62C;
      }
      goto L_08A5E65C;
    }
L_08A5E65C:
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
L_08A5E67C:
    ctx.set_gpr(29, ctx.gpr[29] + static_cast<std::uint32_t>(-16));
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(12), ctx.gpr[31]);
    ctx.set_gpr(4, rt.memory().aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(144)));
    ctx.set_gpr(25, rt.memory().aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(0)));
    ctx.set_gpr(25, rt.memory().aot_load32(ctx.gpr[25] + static_cast<std::uint32_t>(112)));
    jump_target = ctx.gpr[25];
    ctx.set_gpr(31, 0x08A5E698u);
    // nop
    ctx.pc = jump_target;
    if (rt.invoke_chained_call(ctx, &aot_mem) && ctx.pc == 0x08A5E698u) goto L_08A5E698;
    return;
L_08A5E698:
    ctx.set_gpr(31, rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(12)));
    ctx.set_gpr(29, ctx.gpr[29] + static_cast<std::uint32_t>(16));
    jump_target = ctx.gpr[31];
    // nop
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_08A5E6A8:
    ctx.set_gpr(29, ctx.gpr[29] + static_cast<std::uint32_t>(-16));
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(12), ctx.gpr[31]);
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(8), ctx.gpr[16]);
    ctx.set_gpr(2, 2229u << 16u);
    ctx.set_gpr(3, rt.memory().aot_load32(ctx.gpr[2] + static_cast<std::uint32_t>(22808)));
    ctx.set_gpr(2, 0u + static_cast<std::uint32_t>(-1));
    { const bool branch_taken = ctx.gpr[3] != ctx.gpr[2];
    // nop
      if (branch_taken) {
          goto L_08A5E720;
      }
      goto L_08A5E6C8;
    }
L_08A5E6C8:
    ctx.set_gpr(31, 0x08A5E6D0u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0064_entry, 64u, 444u, 0x08905FF0u>(ctx, &aot_mem) && ctx.pc == 0x08A5E6D0u) goto L_08A5E6D0;
    return;
L_08A5E6D0:
    ctx.set_gpr(16, rt.memory().aot_load32(ctx.gpr[2] + static_cast<std::uint32_t>(64)));
    ctx.set_gpr(4, ctx.gpr[16] + 0u);
    ctx.set_gpr(5, 0u + static_cast<std::uint32_t>(7));
    ctx.set_gpr(6, 2229u << 16u);
    ctx.set_gpr(6, ctx.gpr[6] + static_cast<std::uint32_t>(22812));
    ctx.set_gpr(7, 2229u << 16u);
    ctx.set_gpr(7, ctx.gpr[7] + static_cast<std::uint32_t>(22808));
    ctx.set_gpr(8, 0u + static_cast<std::uint32_t>(16));
    ctx.set_gpr(9, 0u + static_cast<std::uint32_t>(1));
    ctx.set_gpr(31, 0x08A5E6FCu);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0083_entry, 83u, 663u, 0x08952DD8u>(ctx, &aot_mem) && ctx.pc == 0x08A5E6FCu) goto L_08A5E6FC;
    return;
L_08A5E6FC:
    ctx.set_gpr(4, ctx.gpr[16] + 0u);
    ctx.set_gpr(5, 0u + static_cast<std::uint32_t>(7));
    ctx.set_gpr(6, 2229u << 16u);
    ctx.set_gpr(6, ctx.gpr[6] + static_cast<std::uint32_t>(22832));
    ctx.set_gpr(7, ctx.gpr[28] + static_cast<std::uint32_t>(-32148));
    ctx.set_gpr(8, 0u + 0u);
    ctx.set_gpr(9, 0u + static_cast<std::uint32_t>(1));
    ctx.set_gpr(31, 0x08A5E720u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0083_entry, 83u, 813u, 0x089537E4u>(ctx, &aot_mem) && ctx.pc == 0x08A5E720u) goto L_08A5E720;
    return;
L_08A5E720:
    ctx.set_gpr(2, 2229u << 16u);
    ctx.set_gpr(2, rt.memory().aot_load32(ctx.gpr[2] + static_cast<std::uint32_t>(22808)));
    ctx.set_gpr(31, rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(12)));
    ctx.set_gpr(16, rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(8)));
    ctx.set_gpr(29, ctx.gpr[29] + static_cast<std::uint32_t>(16));
    jump_target = ctx.gpr[31];
    // nop
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_08A5E73C:
    ctx.set_gpr(29, ctx.gpr[29] + static_cast<std::uint32_t>(-16));
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(12), ctx.gpr[31]);
    ctx.set_gpr(2, 2245u << 16u);
    ctx.set_gpr(2, rt.memory().aot_load32(ctx.gpr[2] + static_cast<std::uint32_t>(24928)));
    { const bool branch_taken = ctx.gpr[4] != ctx.gpr[2];
    // nop
      if (branch_taken) {
          goto L_08A5E760;
      }
      goto L_08A5E754;
    }
L_08A5E754:
    ctx.set_gpr(2, 0u + static_cast<std::uint32_t>(1));
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_08A5E784;
      }
      goto L_08A5E760;
    }
L_08A5E760:
    ctx.set_gpr(2, 2245u << 16u);
    ctx.set_gpr(2, rt.memory().aot_load32(ctx.gpr[2] + static_cast<std::uint32_t>(24908)));
    { const bool branch_taken = ctx.gpr[4] != ctx.gpr[2];
    // nop
      if (branch_taken) {
          goto L_08A5E780;
      }
      goto L_08A5E770;
    }
L_08A5E770:
    ctx.set_gpr(31, 0x08A5E778u);
    // nop
    goto L_08A5E6A8;
L_08A5E778:
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_08A5E784;
      }
      goto L_08A5E780;
    }
L_08A5E780:
    ctx.set_gpr(2, 0u + 0u);
    goto L_08A5E784;
L_08A5E784:
    ctx.set_gpr(31, rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(12)));
    ctx.set_gpr(29, ctx.gpr[29] + static_cast<std::uint32_t>(16));
    jump_target = ctx.gpr[31];
    // nop
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_08A5E794:
    ctx.set_gpr(29, ctx.gpr[29] + static_cast<std::uint32_t>(-16));
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(12), ctx.gpr[31]);
    ctx.set_gpr(31, 0x08A5E7A4u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0110_entry, 110u, 373u, 0x089BE25Cu>(ctx, &aot_mem) && ctx.pc == 0x08A5E7A4u) goto L_08A5E7A4;
    return;
L_08A5E7A4:
    ctx.set_gpr(31, 0x08A5E7ACu);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0042_entry, 42u, 388u, 0x088AD3C4u>(ctx, &aot_mem) && ctx.pc == 0x08A5E7ACu) goto L_08A5E7AC;
    return;
L_08A5E7AC:
    ctx.set_gpr(31, 0x08A5E7B4u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0128_entry, 128u, 133u, 0x08A04840u>(ctx, &aot_mem) && ctx.pc == 0x08A5E7B4u) goto L_08A5E7B4;
    return;
L_08A5E7B4:
    ctx.set_gpr(31, 0x08A5E7BCu);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0154_entry, 154u, 910u, 0x08A6FBC8u>(ctx, &aot_mem) && ctx.pc == 0x08A5E7BCu) goto L_08A5E7BC;
    return;
L_08A5E7BC:
    ctx.set_gpr(31, rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(12)));
    ctx.set_gpr(29, ctx.gpr[29] + static_cast<std::uint32_t>(16));
    jump_target = ctx.gpr[31];
    // nop
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_08A5E7CC:
    ctx.set_gpr(29, ctx.gpr[29] + static_cast<std::uint32_t>(-16));
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(12), ctx.gpr[31]);
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(8), ctx.gpr[17]);
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(4), ctx.gpr[16]);
    ctx.set_gpr(17, ctx.gpr[4] + 0u);
    ctx.set_gpr(16, ctx.gpr[5] + 0u);
    ctx.set_gpr(31, 0x08A5E7ECu);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0149_entry, 149u, 217u, 0x08A590A8u>(ctx, &aot_mem) && ctx.pc == 0x08A5E7ECu) goto L_08A5E7EC;
    return;
L_08A5E7EC:
    { const bool branch_taken = ctx.gpr[16] != 0u;
    // nop
      if (branch_taken) {
          goto L_08A5E800;
      }
      goto L_08A5E7F4;
    }
L_08A5E7F4:
    ctx.set_gpr(4, rt.memory().aot_load32(ctx.gpr[17] + static_cast<std::uint32_t>(52)));
    ctx.set_gpr(31, 0x08A5E800u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0065_entry, 65u, 636u, 0x0890AD8Cu>(ctx, &aot_mem) && ctx.pc == 0x08A5E800u) goto L_08A5E800;
    return;
L_08A5E800:
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
L_08A5E818:
    ctx.set_gpr(2, rt.memory().aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(32)));
    ctx.set_gpr(3, ctx.gpr[5] << 2u);
    ctx.set_gpr(2, rt.memory().aot_load32(ctx.gpr[2] + static_cast<std::uint32_t>(16)));
    ctx.set_gpr(2, ctx.gpr[2] + ctx.gpr[3]);
    ctx.set_gpr(2, rt.memory().aot_load32(ctx.gpr[2] + static_cast<std::uint32_t>(0)));
    ctx.set_gpr(3, ctx.gpr[6] << 2u);
    ctx.set_gpr(2, rt.memory().aot_load32(ctx.gpr[2] + static_cast<std::uint32_t>(16)));
    ctx.set_gpr(2, ctx.gpr[2] + ctx.gpr[3]);
    ctx.set_gpr(2, rt.memory().aot_load32(ctx.gpr[2] + static_cast<std::uint32_t>(0)));
    jump_target = ctx.gpr[31];
    // nop
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_08A5E844:
    ctx.set_gpr(2, rt.memory().aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(44)));
    ctx.set_gpr(3, ctx.gpr[5] << 6u);
    ctx.set_gpr(2, rt.memory().aot_load32(ctx.gpr[2] + static_cast<std::uint32_t>(16)));
    ctx.set_gpr(2, ctx.gpr[2] + ctx.gpr[3]);
    jump_target = ctx.gpr[31];
    // nop
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_08A5E85C:
    ctx.set_gpr(2, rt.memory().aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(48)));
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
L_08A5E878:
    ctx.set_gpr(4, rt.memory().aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(52)));
    ctx.set_gpr(2, ctx.gpr[5] >> 5u);
    ctx.set_gpr(3, ctx.gpr[2] << 2u);
    ctx.set_gpr(2, rt.memory().aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(16)));
    ctx.set_gpr(4, ctx.gpr[2] + ctx.gpr[3]);
    ctx.set_gpr(3, ctx.gpr[5] & 31u);
    ctx.set_gpr(2, 0u + static_cast<std::uint32_t>(1));
    ctx.set_gpr(3, ctx.gpr[2] << (ctx.gpr[3] & 31u));
    ctx.set_gpr(2, rt.memory().aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(0)));
    ctx.set_gpr(2, ctx.gpr[3] & ctx.gpr[2]);
    ctx.set_gpr(2, 0u < ctx.gpr[2] ? 1u : 0u);
    jump_target = ctx.gpr[31];
    // nop
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_08A5E8AC:
    ctx.set_gpr(29, ctx.gpr[29] + static_cast<std::uint32_t>(-48));
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(28), ctx.gpr[31]);
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(24), ctx.gpr[19]);
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(20), ctx.gpr[18]);
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(16), ctx.gpr[17]);
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(12), ctx.gpr[16]);
    ctx.set_gpr(19, ctx.gpr[4] + 0u);
    ctx.set_gpr(18, 0u + 0u);
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_08A5E95C;
      }
      goto L_08A5E8D4;
    }
L_08A5E8D4:
    ctx.set_gpr(4, ctx.gpr[18] << 2u);
    ctx.set_gpr(3, rt.memory().aot_load32(ctx.gpr[5] + static_cast<std::uint32_t>(16)));
    ctx.set_gpr(3, ctx.gpr[3] + ctx.gpr[4]);
    ctx.set_gpr(4, rt.memory().aot_load32(ctx.gpr[3] + static_cast<std::uint32_t>(0)));
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(44), ctx.gpr[4]);
    { const bool branch_taken = ctx.gpr[4] == 0u;
    // nop
      if (branch_taken) {
          goto L_08A5E8FC;
      }
      goto L_08A5E8F0;
    }
L_08A5E8F0:
    ctx.set_gpr(3, rt.memory().aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(4)));
    ctx.set_gpr(3, ctx.gpr[3] + static_cast<std::uint32_t>(1));
    rt.memory().aot_store32(ctx.gpr[4] + static_cast<std::uint32_t>(4), ctx.gpr[3]);
    goto L_08A5E8FC;
L_08A5E8FC:
    ctx.set_gpr(3, rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(44)));
    ctx.set_gpr(16, rt.memory().aot_load32(ctx.gpr[3] + static_cast<std::uint32_t>(8)));
    ctx.set_gpr(17, 0u + 0u);
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_08A5E938;
      }
      goto L_08A5E910;
    }
L_08A5E910:
    ctx.set_gpr(2, rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(44)));
    ctx.set_gpr(3, ctx.gpr[17] << 2u);
    ctx.set_gpr(2, rt.memory().aot_load32(ctx.gpr[2] + static_cast<std::uint32_t>(16)));
    ctx.set_gpr(2, ctx.gpr[2] + ctx.gpr[3]);
    ctx.set_gpr(4, rt.memory().aot_load32(ctx.gpr[2] + static_cast<std::uint32_t>(0)));
    ctx.set_gpr(25, rt.memory().aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(0)));
    ctx.set_gpr(25, rt.memory().aot_load32(ctx.gpr[25] + static_cast<std::uint32_t>(112)));
    jump_target = ctx.gpr[25];
    ctx.set_gpr(31, 0x08A5E934u);
    // nop
    ctx.pc = jump_target;
    if (rt.invoke_chained_call(ctx, &aot_mem) && ctx.pc == 0x08A5E934u) goto L_08A5E934;
    return;
L_08A5E934:
    ctx.set_gpr(17, ctx.gpr[17] + static_cast<std::uint32_t>(1));
    goto L_08A5E938;
L_08A5E938:
    ctx.set_gpr(3, ctx.gpr[17] < ctx.gpr[16] ? 1u : 0u);
    { const bool branch_taken = ctx.gpr[3] != 0u;
    // nop
      if (branch_taken) {
          goto L_08A5E910;
      }
      goto L_08A5E944;
    }
L_08A5E944:
    ctx.set_gpr(4, rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(44)));
    { const bool branch_taken = ctx.gpr[4] == 0u;
    // nop
      if (branch_taken) {
          goto L_08A5E958;
      }
      goto L_08A5E950;
    }
L_08A5E950:
    ctx.set_gpr(31, 0x08A5E958u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0014_entry, 14u, 257u, 0x0883D454u>(ctx, &aot_mem) && ctx.pc == 0x08A5E958u) goto L_08A5E958;
    return;
L_08A5E958:
    ctx.set_gpr(18, ctx.gpr[18] + static_cast<std::uint32_t>(1));
    goto L_08A5E95C;
L_08A5E95C:
    ctx.set_gpr(5, rt.memory().aot_load32(ctx.gpr[19] + static_cast<std::uint32_t>(32)));
    ctx.set_gpr(3, rt.memory().aot_load32(ctx.gpr[5] + static_cast<std::uint32_t>(8)));
    ctx.set_gpr(3, static_cast<std::int32_t>(ctx.gpr[18]) < static_cast<std::int32_t>(ctx.gpr[3]) ? 1u : 0u);
    { const bool branch_taken = ctx.gpr[3] != 0u;
    // nop
      if (branch_taken) {
          goto L_08A5E8D4;
      }
      goto L_08A5E970;
    }
L_08A5E970:
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
L_08A5E990:
    ctx.set_gpr(29, ctx.gpr[29] + static_cast<std::uint32_t>(-16));
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(12), ctx.gpr[31]);
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(8), ctx.gpr[16]);
    ctx.set_gpr(16, ctx.gpr[4] + 0u);
    ctx.set_gpr(31, 0x08A5E9A8u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0149_entry, 149u, 217u, 0x08A590A8u>(ctx, &aot_mem) && ctx.pc == 0x08A5E9A8u) goto L_08A5E9A8;
    return;
L_08A5E9A8:
    ctx.set_gpr(4, ctx.gpr[16] + 0u);
    ctx.set_gpr(25, rt.memory().aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(0)));
    ctx.set_gpr(25, rt.memory().aot_load32(ctx.gpr[25] + static_cast<std::uint32_t>(124)));
    jump_target = ctx.gpr[25];
    ctx.set_gpr(31, 0x08A5E9BCu);
    // nop
    ctx.pc = jump_target;
    if (rt.invoke_chained_call(ctx, &aot_mem) && ctx.pc == 0x08A5E9BCu) goto L_08A5E9BC;
    return;
L_08A5E9BC:
    ctx.set_gpr(31, rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(12)));
    ctx.set_gpr(16, rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(8)));
    ctx.set_gpr(29, ctx.gpr[29] + static_cast<std::uint32_t>(16));
    jump_target = ctx.gpr[31];
    // nop
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_08A5E9D0:
    ctx.set_gpr(2, rt.memory().aot_load8(ctx.gpr[4] + static_cast<std::uint32_t>(32)));
    jump_target = ctx.gpr[31];
    // nop
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_08A5E9DC:
    rt.memory().aot_store8(ctx.gpr[4] + static_cast<std::uint32_t>(34), static_cast<std::uint8_t>(ctx.gpr[5]));
    jump_target = ctx.gpr[31];
    // nop
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_08A5E9E8:
    ctx.set_gpr(2, rt.memory().aot_load8(ctx.gpr[4] + static_cast<std::uint32_t>(34)));
    jump_target = ctx.gpr[31];
    // nop
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_08A5E9F4:
    rt.memory().aot_store8(ctx.gpr[4] + static_cast<std::uint32_t>(33), static_cast<std::uint8_t>(0u));
    jump_target = ctx.gpr[31];
    // nop
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_08A5EA00:
    ctx.set_gpr(2, rt.memory().aot_load8(ctx.gpr[4] + static_cast<std::uint32_t>(33)));
    ctx.set_gpr(2, 0u < ctx.gpr[2] ? 1u : 0u);
    ctx.set_gpr(2, ctx.gpr[2] ^ 1u);
    jump_target = ctx.gpr[31];
    // nop
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_08A5EA14:
    ctx.set_gpr(29, ctx.gpr[29] + static_cast<std::uint32_t>(-48));
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(28), ctx.gpr[31]);
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(24), ctx.gpr[19]);
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(20), ctx.gpr[18]);
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(16), ctx.gpr[17]);
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(12), ctx.gpr[16]);
    ctx.set_gpr(19, ctx.gpr[4] + 0u);
    ctx.set_gpr(18, ctx.gpr[5] + 0u);
    ctx.set_gpr(4, rt.memory().aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(8)));
    ctx.set_gpr(31, 0x08A5EA40u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0081_entry, 81u, 312u, 0x089495E8u>(ctx, &aot_mem) && ctx.pc == 0x08A5EA40u) goto L_08A5EA40;
    return;
L_08A5EA40:
    ctx.set_gpr(4, rt.memory().aot_load32(ctx.gpr[19] + static_cast<std::uint32_t>(12)));
    ctx.set_gpr(5, ctx.gpr[18] + 0u);
    ctx.set_gpr(31, 0x08A5EA50u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0081_entry, 81u, 312u, 0x089495E8u>(ctx, &aot_mem) && ctx.pc == 0x08A5EA50u) goto L_08A5EA50;
    return;
L_08A5EA50:
    ctx.set_gpr(4, rt.memory().aot_load32(ctx.gpr[19] + static_cast<std::uint32_t>(20)));
    ctx.set_gpr(17, rt.memory().aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(8)));
    ctx.set_gpr(5, ctx.gpr[18] + 0u);
    ctx.set_gpr(31, 0x08A5EA64u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0081_entry, 81u, 312u, 0x089495E8u>(ctx, &aot_mem) && ctx.pc == 0x08A5EA64u) goto L_08A5EA64;
    return;
L_08A5EA64:
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_08A5EAAC;
      }
      goto L_08A5EA6C;
    }
L_08A5EA6C:
    ctx.set_gpr(16, rt.memory().aot_load32(ctx.gpr[19] + static_cast<std::uint32_t>(20)));
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(44), 0u);
    ctx.set_gpr(3, ctx.gpr[17] << 2u);
    ctx.set_gpr(2, rt.memory().aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(16)));
    ctx.set_gpr(2, ctx.gpr[2] + ctx.gpr[3]);
    ctx.set_gpr(4, rt.memory().aot_load32(ctx.gpr[2] + static_cast<std::uint32_t>(0)));
    { const bool branch_taken = ctx.gpr[4] == 0u;
    // nop
      if (branch_taken) {
          goto L_08A5EA94;
      }
      goto L_08A5EA8C;
    }
L_08A5EA8C:
    ctx.set_gpr(31, 0x08A5EA94u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0014_entry, 14u, 257u, 0x0883D454u>(ctx, &aot_mem) && ctx.pc == 0x08A5EA94u) goto L_08A5EA94;
    return;
L_08A5EA94:
    ctx.set_gpr(4, ctx.gpr[16] + 0u);
    ctx.set_gpr(5, ctx.gpr[17] + 0u);
    ctx.set_gpr(6, ctx.gpr[29] + static_cast<std::uint32_t>(44));
    ctx.set_gpr(31, 0x08A5EAA8u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0051_entry, 51u, 23u, 0x088D019Cu>(ctx, &aot_mem) && ctx.pc == 0x08A5EAA8u) goto L_08A5EAA8;
    return;
L_08A5EAA8:
    ctx.set_gpr(17, ctx.gpr[17] + static_cast<std::uint32_t>(1));
    goto L_08A5EAAC;
L_08A5EAAC:
    ctx.set_gpr(3, static_cast<std::int32_t>(ctx.gpr[17]) < static_cast<std::int32_t>(ctx.gpr[18]) ? 1u : 0u);
    { const bool branch_taken = ctx.gpr[3] != 0u;
    // nop
      if (branch_taken) {
          goto L_08A5EA6C;
      }
      goto L_08A5EAB8;
    }
L_08A5EAB8:
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
L_08A5EAD8:
    ctx.set_gpr(29, ctx.gpr[29] + static_cast<std::uint32_t>(-16));
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(12), ctx.gpr[31]);
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(8), ctx.gpr[18]);
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(4), ctx.gpr[17]);
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(0), ctx.gpr[16]);
    ctx.set_gpr(18, ctx.gpr[4] + 0u);
    ctx.set_gpr(17, ctx.gpr[6] + 0u);
    ctx.set_gpr(16, ctx.gpr[7] + 0u);
    ctx.set_gpr(4, rt.memory().aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(8)));
    ctx.set_gpr(31, 0x08A5EB04u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0081_entry, 81u, 299u, 0x089494E0u>(ctx, &aot_mem) && ctx.pc == 0x08A5EB04u) goto L_08A5EB04;
    return;
L_08A5EB04:
    ctx.set_gpr(4, rt.memory().aot_load32(ctx.gpr[18] + static_cast<std::uint32_t>(12)));
    ctx.set_gpr(5, ctx.gpr[17] + 0u);
    ctx.set_gpr(31, 0x08A5EB14u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0081_entry, 81u, 299u, 0x089494E0u>(ctx, &aot_mem) && ctx.pc == 0x08A5EB14u) goto L_08A5EB14;
    return;
L_08A5EB14:
    ctx.set_gpr(4, rt.memory().aot_load32(ctx.gpr[18] + static_cast<std::uint32_t>(20)));
    ctx.set_gpr(5, ctx.gpr[16] + 0u);
    ctx.set_gpr(31, 0x08A5EB24u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0081_entry, 81u, 299u, 0x089494E0u>(ctx, &aot_mem) && ctx.pc == 0x08A5EB24u) goto L_08A5EB24;
    return;
L_08A5EB24:
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
L_08A5EB40:
    ctx.set_gpr(29, ctx.gpr[29] + static_cast<std::uint32_t>(-32));
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(28), ctx.gpr[31]);
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(24), ctx.gpr[19]);
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(20), ctx.gpr[18]);
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(16), ctx.gpr[17]);
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(12), ctx.gpr[16]);
    ctx.set_gpr(16, ctx.gpr[4] + 0u);
    ctx.set_gpr(18, rt.memory().aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(8)));
    ctx.set_gpr(17, rt.memory().aot_load32(ctx.gpr[18] + static_cast<std::uint32_t>(8)));
    ctx.set_gpr(19, 0u + 0u);
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_08A5EB94;
      }
      goto L_08A5EB70;
    }
L_08A5EB70:
    ctx.set_gpr(3, ctx.gpr[19] << 2u);
    ctx.set_gpr(2, rt.memory().aot_load32(ctx.gpr[18] + static_cast<std::uint32_t>(16)));
    ctx.set_gpr(2, ctx.gpr[2] + ctx.gpr[3]);
    ctx.set_gpr(4, rt.memory().aot_load32(ctx.gpr[2] + static_cast<std::uint32_t>(0)));
    { const bool branch_taken = ctx.gpr[4] == 0u;
    // nop
      if (branch_taken) {
          goto L_08A5EB90;
      }
      goto L_08A5EB88;
    }
L_08A5EB88:
    ctx.set_gpr(31, 0x08A5EB90u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0014_entry, 14u, 257u, 0x0883D454u>(ctx, &aot_mem) && ctx.pc == 0x08A5EB90u) goto L_08A5EB90;
    return;
L_08A5EB90:
    ctx.set_gpr(19, ctx.gpr[19] + static_cast<std::uint32_t>(1));
    goto L_08A5EB94;
L_08A5EB94:
    ctx.set_gpr(2, static_cast<std::int32_t>(ctx.gpr[19]) < static_cast<std::int32_t>(ctx.gpr[17]) ? 1u : 0u);
    { const bool branch_taken = ctx.gpr[2] != 0u;
    // nop
      if (branch_taken) {
          goto L_08A5EB70;
      }
      goto L_08A5EBA0;
    }
L_08A5EBA0:
    ctx.set_gpr(4, rt.memory().aot_load32(ctx.gpr[18] + static_cast<std::uint32_t>(8)));
    ctx.set_gpr(5, 0u + 0u);
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_08A5EBC4;
      }
      goto L_08A5EBB0;
    }
L_08A5EBB0:
    ctx.set_gpr(3, ctx.gpr[5] << 2u);
    ctx.set_gpr(2, rt.memory().aot_load32(ctx.gpr[18] + static_cast<std::uint32_t>(16)));
    ctx.set_gpr(2, ctx.gpr[2] + ctx.gpr[3]);
    rt.memory().aot_store32(ctx.gpr[2] + static_cast<std::uint32_t>(0), 0u);
    ctx.set_gpr(5, ctx.gpr[5] + static_cast<std::uint32_t>(1));
    goto L_08A5EBC4;
L_08A5EBC4:
    ctx.set_gpr(2, static_cast<std::int32_t>(ctx.gpr[5]) < static_cast<std::int32_t>(ctx.gpr[4]) ? 1u : 0u);
    { const bool branch_taken = ctx.gpr[2] != 0u;
    // nop
      if (branch_taken) {
          goto L_08A5EBB0;
      }
      goto L_08A5EBD0;
    }
L_08A5EBD0:
    rt.memory().aot_store32(ctx.gpr[18] + static_cast<std::uint32_t>(8), 0u);
    ctx.set_gpr(18, rt.memory().aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(12)));
    ctx.set_gpr(17, rt.memory().aot_load32(ctx.gpr[18] + static_cast<std::uint32_t>(8)));
    ctx.set_gpr(19, 0u + 0u);
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_08A5EC0C;
      }
      goto L_08A5EBE8;
    }
L_08A5EBE8:
    ctx.set_gpr(3, ctx.gpr[19] << 2u);
    ctx.set_gpr(2, rt.memory().aot_load32(ctx.gpr[18] + static_cast<std::uint32_t>(16)));
    ctx.set_gpr(2, ctx.gpr[2] + ctx.gpr[3]);
    ctx.set_gpr(4, rt.memory().aot_load32(ctx.gpr[2] + static_cast<std::uint32_t>(0)));
    { const bool branch_taken = ctx.gpr[4] == 0u;
    // nop
      if (branch_taken) {
          goto L_08A5EC08;
      }
      goto L_08A5EC00;
    }
L_08A5EC00:
    ctx.set_gpr(31, 0x08A5EC08u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0014_entry, 14u, 257u, 0x0883D454u>(ctx, &aot_mem) && ctx.pc == 0x08A5EC08u) goto L_08A5EC08;
    return;
L_08A5EC08:
    ctx.set_gpr(19, ctx.gpr[19] + static_cast<std::uint32_t>(1));
    goto L_08A5EC0C;
L_08A5EC0C:
    ctx.set_gpr(2, static_cast<std::int32_t>(ctx.gpr[19]) < static_cast<std::int32_t>(ctx.gpr[17]) ? 1u : 0u);
    { const bool branch_taken = ctx.gpr[2] != 0u;
    // nop
      if (branch_taken) {
          goto L_08A5EBE8;
      }
      goto L_08A5EC18;
    }
L_08A5EC18:
    ctx.set_gpr(4, rt.memory().aot_load32(ctx.gpr[18] + static_cast<std::uint32_t>(8)));
    ctx.set_gpr(5, 0u + 0u);
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_08A5EC3C;
      }
      goto L_08A5EC28;
    }
L_08A5EC28:
    ctx.set_gpr(3, ctx.gpr[5] << 2u);
    ctx.set_gpr(2, rt.memory().aot_load32(ctx.gpr[18] + static_cast<std::uint32_t>(16)));
    ctx.set_gpr(2, ctx.gpr[2] + ctx.gpr[3]);
    rt.memory().aot_store32(ctx.gpr[2] + static_cast<std::uint32_t>(0), 0u);
    ctx.set_gpr(5, ctx.gpr[5] + static_cast<std::uint32_t>(1));
    goto L_08A5EC3C;
L_08A5EC3C:
    ctx.set_gpr(2, static_cast<std::int32_t>(ctx.gpr[5]) < static_cast<std::int32_t>(ctx.gpr[4]) ? 1u : 0u);
    { const bool branch_taken = ctx.gpr[2] != 0u;
    // nop
      if (branch_taken) {
          goto L_08A5EC28;
      }
      goto L_08A5EC48;
    }
L_08A5EC48:
    rt.memory().aot_store32(ctx.gpr[18] + static_cast<std::uint32_t>(8), 0u);
    ctx.set_gpr(18, rt.memory().aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(20)));
    ctx.set_gpr(17, rt.memory().aot_load32(ctx.gpr[18] + static_cast<std::uint32_t>(8)));
    ctx.set_gpr(19, 0u + 0u);
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_08A5EC84;
      }
      goto L_08A5EC60;
    }
L_08A5EC60:
    ctx.set_gpr(3, ctx.gpr[19] << 2u);
    ctx.set_gpr(2, rt.memory().aot_load32(ctx.gpr[18] + static_cast<std::uint32_t>(16)));
    ctx.set_gpr(2, ctx.gpr[2] + ctx.gpr[3]);
    ctx.set_gpr(4, rt.memory().aot_load32(ctx.gpr[2] + static_cast<std::uint32_t>(0)));
    { const bool branch_taken = ctx.gpr[4] == 0u;
    // nop
      if (branch_taken) {
          goto L_08A5EC80;
      }
      goto L_08A5EC78;
    }
L_08A5EC78:
    ctx.set_gpr(31, 0x08A5EC80u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0014_entry, 14u, 257u, 0x0883D454u>(ctx, &aot_mem) && ctx.pc == 0x08A5EC80u) goto L_08A5EC80;
    return;
L_08A5EC80:
    ctx.set_gpr(19, ctx.gpr[19] + static_cast<std::uint32_t>(1));
    goto L_08A5EC84;
L_08A5EC84:
    ctx.set_gpr(2, static_cast<std::int32_t>(ctx.gpr[19]) < static_cast<std::int32_t>(ctx.gpr[17]) ? 1u : 0u);
    { const bool branch_taken = ctx.gpr[2] != 0u;
    // nop
      if (branch_taken) {
          goto L_08A5EC60;
      }
      goto L_08A5EC90;
    }
L_08A5EC90:
    ctx.set_gpr(4, rt.memory().aot_load32(ctx.gpr[18] + static_cast<std::uint32_t>(8)));
    ctx.set_gpr(5, 0u + 0u);
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_08A5ECB4;
      }
      goto L_08A5ECA0;
    }
L_08A5ECA0:
    ctx.set_gpr(3, ctx.gpr[5] << 2u);
    ctx.set_gpr(2, rt.memory().aot_load32(ctx.gpr[18] + static_cast<std::uint32_t>(16)));
    ctx.set_gpr(2, ctx.gpr[2] + ctx.gpr[3]);
    rt.memory().aot_store32(ctx.gpr[2] + static_cast<std::uint32_t>(0), 0u);
    ctx.set_gpr(5, ctx.gpr[5] + static_cast<std::uint32_t>(1));
    goto L_08A5ECB4;
L_08A5ECB4:
    ctx.set_gpr(2, static_cast<std::int32_t>(ctx.gpr[5]) < static_cast<std::int32_t>(ctx.gpr[4]) ? 1u : 0u);
    { const bool branch_taken = ctx.gpr[2] != 0u;
    // nop
      if (branch_taken) {
          goto L_08A5ECA0;
      }
      goto L_08A5ECC0;
    }
L_08A5ECC0:
    rt.memory().aot_store32(ctx.gpr[18] + static_cast<std::uint32_t>(8), 0u);
    ctx.set_gpr(4, ctx.gpr[16] + static_cast<std::uint32_t>(16));
    ctx.set_gpr(5, 0u + 0u);
    ctx.set_gpr(31, 0x08A5ECD4u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0085_entry, 85u, 61u, 0x089584C4u>(ctx, &aot_mem) && ctx.pc == 0x08A5ECD4u) goto L_08A5ECD4;
    return;
L_08A5ECD4:
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
L_08A5ECF4:
    ctx.set_gpr(29, ctx.gpr[29] + static_cast<std::uint32_t>(-32));
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(12), ctx.gpr[31]);
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(8), ctx.gpr[17]);
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(4), ctx.gpr[16]);
    ctx.set_gpr(17, ctx.gpr[5] + 0u);
    ctx.set_gpr(16, rt.memory().aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(8)));
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(28), ctx.gpr[6]);
    ctx.set_gpr(4, ctx.gpr[6] + 0u);
    { const bool branch_taken = ctx.gpr[6] == 0u;
    // nop
      if (branch_taken) {
          goto L_08A5ED24;
      }
      goto L_08A5ED1C;
    }
L_08A5ED1C:
    ctx.set_gpr(31, 0x08A5ED24u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0014_entry, 14u, 274u, 0x0883D588u>(ctx, &aot_mem) && ctx.pc == 0x08A5ED24u) goto L_08A5ED24;
    return;
L_08A5ED24:
    ctx.set_gpr(3, ctx.gpr[17] << 2u);
    ctx.set_gpr(2, rt.memory().aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(16)));
    ctx.set_gpr(2, ctx.gpr[2] + ctx.gpr[3]);
    ctx.set_gpr(4, rt.memory().aot_load32(ctx.gpr[2] + static_cast<std::uint32_t>(0)));
    { const bool branch_taken = ctx.gpr[4] == 0u;
    // nop
      if (branch_taken) {
          goto L_08A5ED44;
      }
      goto L_08A5ED3C;
    }
L_08A5ED3C:
    ctx.set_gpr(31, 0x08A5ED44u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0014_entry, 14u, 257u, 0x0883D454u>(ctx, &aot_mem) && ctx.pc == 0x08A5ED44u) goto L_08A5ED44;
    return;
L_08A5ED44:
    ctx.set_gpr(4, ctx.gpr[16] + 0u);
    ctx.set_gpr(5, ctx.gpr[17] + 0u);
    ctx.set_gpr(6, ctx.gpr[29] + static_cast<std::uint32_t>(28));
    ctx.set_gpr(31, 0x08A5ED58u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0051_entry, 51u, 23u, 0x088D019Cu>(ctx, &aot_mem) && ctx.pc == 0x08A5ED58u) goto L_08A5ED58;
    return;
L_08A5ED58:
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
L_08A5ED70:
    ctx.set_gpr(29, ctx.gpr[29] + static_cast<std::uint32_t>(-32));
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(12), ctx.gpr[31]);
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(8), ctx.gpr[17]);
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(4), ctx.gpr[16]);
    ctx.set_gpr(17, ctx.gpr[5] + 0u);
    ctx.set_gpr(16, rt.memory().aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(12)));
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(28), ctx.gpr[6]);
    ctx.set_gpr(4, ctx.gpr[6] + 0u);
    { const bool branch_taken = ctx.gpr[6] == 0u;
    // nop
      if (branch_taken) {
          goto L_08A5EDA0;
      }
      goto L_08A5ED98;
    }
L_08A5ED98:
    ctx.set_gpr(31, 0x08A5EDA0u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0014_entry, 14u, 274u, 0x0883D588u>(ctx, &aot_mem) && ctx.pc == 0x08A5EDA0u) goto L_08A5EDA0;
    return;
L_08A5EDA0:
    ctx.set_gpr(3, ctx.gpr[17] << 2u);
    ctx.set_gpr(2, rt.memory().aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(16)));
    ctx.set_gpr(2, ctx.gpr[2] + ctx.gpr[3]);
    ctx.set_gpr(4, rt.memory().aot_load32(ctx.gpr[2] + static_cast<std::uint32_t>(0)));
    { const bool branch_taken = ctx.gpr[4] == 0u;
    // nop
      if (branch_taken) {
          goto L_08A5EDC0;
      }
      goto L_08A5EDB8;
    }
L_08A5EDB8:
    ctx.set_gpr(31, 0x08A5EDC0u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0014_entry, 14u, 257u, 0x0883D454u>(ctx, &aot_mem) && ctx.pc == 0x08A5EDC0u) goto L_08A5EDC0;
    return;
L_08A5EDC0:
    ctx.set_gpr(4, ctx.gpr[16] + 0u);
    ctx.set_gpr(5, ctx.gpr[17] + 0u);
    ctx.set_gpr(6, ctx.gpr[29] + static_cast<std::uint32_t>(28));
    ctx.set_gpr(31, 0x08A5EDD4u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0051_entry, 51u, 23u, 0x088D019Cu>(ctx, &aot_mem) && ctx.pc == 0x08A5EDD4u) goto L_08A5EDD4;
    return;
L_08A5EDD4:
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
L_08A5EDEC:
    ctx.set_gpr(29, ctx.gpr[29] + static_cast<std::uint32_t>(-32));
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(12), ctx.gpr[31]);
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(8), ctx.gpr[17]);
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(4), ctx.gpr[16]);
    ctx.set_gpr(17, ctx.gpr[5] + 0u);
    ctx.set_gpr(16, rt.memory().aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(20)));
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(28), ctx.gpr[6]);
    ctx.set_gpr(4, ctx.gpr[6] + 0u);
    { const bool branch_taken = ctx.gpr[6] == 0u;
    // nop
      if (branch_taken) {
          goto L_08A5EE1C;
      }
      goto L_08A5EE14;
    }
L_08A5EE14:
    ctx.set_gpr(31, 0x08A5EE1Cu);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0014_entry, 14u, 274u, 0x0883D588u>(ctx, &aot_mem) && ctx.pc == 0x08A5EE1Cu) goto L_08A5EE1C;
    return;
L_08A5EE1C:
    ctx.set_gpr(3, ctx.gpr[17] << 2u);
    ctx.set_gpr(2, rt.memory().aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(16)));
    ctx.set_gpr(2, ctx.gpr[2] + ctx.gpr[3]);
    ctx.set_gpr(4, rt.memory().aot_load32(ctx.gpr[2] + static_cast<std::uint32_t>(0)));
    { const bool branch_taken = ctx.gpr[4] == 0u;
    // nop
      if (branch_taken) {
          goto L_08A5EE3C;
      }
      goto L_08A5EE34;
    }
L_08A5EE34:
    ctx.set_gpr(31, 0x08A5EE3Cu);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0014_entry, 14u, 257u, 0x0883D454u>(ctx, &aot_mem) && ctx.pc == 0x08A5EE3Cu) goto L_08A5EE3C;
    return;
L_08A5EE3C:
    ctx.set_gpr(4, ctx.gpr[16] + 0u);
    ctx.set_gpr(5, ctx.gpr[17] + 0u);
    ctx.set_gpr(6, ctx.gpr[29] + static_cast<std::uint32_t>(28));
    ctx.set_gpr(31, 0x08A5EE50u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0051_entry, 51u, 23u, 0x088D019Cu>(ctx, &aot_mem) && ctx.pc == 0x08A5EE50u) goto L_08A5EE50;
    return;
L_08A5EE50:
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
L_08A5EE68:
    ctx.set_gpr(29, ctx.gpr[29] + static_cast<std::uint32_t>(-16));
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(12), ctx.gpr[31]);
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(8), ctx.gpr[16]);
    ctx.set_gpr(16, ctx.gpr[4] + 0u);
    ctx.set_gpr(31, 0x08A5EE80u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0080_entry, 80u, 438u, 0x08945F0Cu>(ctx, &aot_mem) && ctx.pc == 0x08A5EE80u) goto L_08A5EE80;
    return;
L_08A5EE80:
    ctx.set_gpr(4, rt.memory().aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(20)));
    ctx.set_gpr(6, rt.memory().aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(8)));
    ctx.set_gpr(3, rt.memory().aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(8)));
    ctx.set_gpr(5, rt.memory().aot_load32(ctx.gpr[3] + static_cast<std::uint32_t>(8)));
    { const bool branch_taken = ctx.gpr[5] == ctx.gpr[6];
    // nop
      if (branch_taken) {
          goto L_08A5EEAC;
      }
      goto L_08A5EE98;
    }
L_08A5EE98:
    ctx.set_gpr(31, 0x08A5EEA0u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0081_entry, 81u, 312u, 0x089495E8u>(ctx, &aot_mem) && ctx.pc == 0x08A5EEA0u) goto L_08A5EEA0;
    return;
L_08A5EEA0:
    ctx.set_gpr(4, rt.memory().aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(20)));
    ctx.set_gpr(31, 0x08A5EEACu);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0081_entry, 81u, 291u, 0x0894944Cu>(ctx, &aot_mem) && ctx.pc == 0x08A5EEACu) goto L_08A5EEAC;
    return;
L_08A5EEAC:
    ctx.set_gpr(31, rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(12)));
    ctx.set_gpr(16, rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(8)));
    ctx.set_gpr(29, ctx.gpr[29] + static_cast<std::uint32_t>(16));
    jump_target = ctx.gpr[31];
    // nop
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_08A5EEC0:
    ctx.set_gpr(29, ctx.gpr[29] + static_cast<std::uint32_t>(-32));
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(12), ctx.gpr[31]);
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(8), ctx.gpr[17]);
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(4), ctx.gpr[16]);
    ctx.set_gpr(17, ctx.gpr[5] + 0u);
    ctx.set_gpr(16, rt.memory().aot_load32(ctx.gpr[5] + static_cast<std::uint32_t>(36)));
    ctx.set_gpr(31, 0x08A5EEE0u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0081_entry, 81u, 41u, 0x0894835Cu>(ctx, &aot_mem) && ctx.pc == 0x08A5EEE0u) goto L_08A5EEE0;
    return;
L_08A5EEE0:
    ctx.set_gpr(4, ctx.gpr[2] + 0u);
    ctx.set_gpr(31, 0x08A5EEECu);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0047_entry, 47u, 534u, 0x088C2F6Cu>(ctx, &aot_mem) && ctx.pc == 0x08A5EEECu) goto L_08A5EEEC;
    return;
L_08A5EEEC:
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(28), ctx.gpr[2]);
    ctx.set_gpr(4, ctx.gpr[16] + 0u);
    ctx.set_gpr(25, rt.memory().aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(0)));
    ctx.set_gpr(25, rt.memory().aot_load32(ctx.gpr[25] + static_cast<std::uint32_t>(100)));
    jump_target = ctx.gpr[25];
    ctx.set_gpr(31, 0x08A5EF04u);
    // nop
    ctx.pc = jump_target;
    if (rt.invoke_chained_call(ctx, &aot_mem) && ctx.pc == 0x08A5EF04u) goto L_08A5EF04;
    return;
L_08A5EF04:
    ctx.set_gpr(5, rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(28)));
    ctx.set_gpr(4, ctx.gpr[16] + 0u);
    ctx.set_gpr(6, ctx.gpr[5] + 0u);
    ctx.set_gpr(7, 0u + 0u);
    ctx.set_gpr(25, rt.memory().aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(0)));
    ctx.set_gpr(25, rt.memory().aot_load32(ctx.gpr[25] + static_cast<std::uint32_t>(96)));
    jump_target = ctx.gpr[25];
    ctx.set_gpr(31, 0x08A5EF24u);
    // nop
    ctx.pc = jump_target;
    if (rt.invoke_chained_call(ctx, &aot_mem) && ctx.pc == 0x08A5EF24u) goto L_08A5EF24;
    return;
L_08A5EF24:
    ctx.set_gpr(4, ctx.gpr[17] + 0u);
    ctx.set_gpr(25, rt.memory().aot_load32(ctx.gpr[17] + static_cast<std::uint32_t>(0)));
    ctx.set_gpr(25, rt.memory().aot_load32(ctx.gpr[25] + static_cast<std::uint32_t>(124)));
    jump_target = ctx.gpr[25];
    ctx.set_gpr(31, 0x08A5EF38u);
    // nop
    ctx.pc = jump_target;
    if (rt.invoke_chained_call(ctx, &aot_mem) && ctx.pc == 0x08A5EF38u) goto L_08A5EF38;
    return;
L_08A5EF38:
    ctx.set_gpr(4, rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(28)));
    { const bool branch_taken = ctx.gpr[4] == 0u;
    // nop
      if (branch_taken) {
          goto L_08A5EF4C;
      }
      goto L_08A5EF44;
    }
L_08A5EF44:
    ctx.set_gpr(31, 0x08A5EF4Cu);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0014_entry, 14u, 257u, 0x0883D454u>(ctx, &aot_mem) && ctx.pc == 0x08A5EF4Cu) goto L_08A5EF4C;
    return;
L_08A5EF4C:
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
L_08A5EF68:
    ctx.set_gpr(29, ctx.gpr[29] + static_cast<std::uint32_t>(-48));
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(28), ctx.gpr[31]);
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(24), ctx.gpr[19]);
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(20), ctx.gpr[18]);
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(16), ctx.gpr[17]);
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(12), ctx.gpr[16]);
    ctx.set_gpr(19, ctx.gpr[4] + 0u);
    ctx.set_gpr(18, ctx.gpr[5] + 0u);
    ctx.set_gpr(17, ctx.gpr[6] + 0u);
    ctx.set_gpr(4, rt.memory().aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(12)));
    ctx.set_gpr(2, 2245u << 16u);
    ctx.set_gpr(5, rt.memory().aot_load32(ctx.gpr[2] + static_cast<std::uint32_t>(28892)));
    ctx.set_gpr(6, ctx.gpr[18] + 0u);
    ctx.set_gpr(31, 0x08A5EFA4u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0081_entry, 81u, 359u, 0x089499ACu>(ctx, &aot_mem) && ctx.pc == 0x08A5EFA4u) goto L_08A5EFA4;
    return;
L_08A5EFA4:
    { const bool branch_taken = ctx.gpr[2] == 0u;
    // nop
      if (branch_taken) {
          goto L_08A5F008;
      }
      goto L_08A5EFAC;
    }
L_08A5EFAC:
    ctx.set_gpr(4, rt.memory().aot_load32(ctx.gpr[19] + static_cast<std::uint32_t>(12)));
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(36), ctx.gpr[2]);
    ctx.set_gpr(5, ctx.gpr[29] + static_cast<std::uint32_t>(36));
    ctx.set_gpr(6, 0u + 0u);
    ctx.set_gpr(31, 0x08A5EFC4u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0018_entry, 18u, 462u, 0x0884D888u>(ctx, &aot_mem) && ctx.pc == 0x08A5EFC4u) goto L_08A5EFC4;
    return;
L_08A5EFC4:
    ctx.set_gpr(3, rt.memory().aot_load32(ctx.gpr[19] + static_cast<std::uint32_t>(12)));
    ctx.set_gpr(16, ctx.gpr[2] << 2u);
    ctx.set_gpr(2, rt.memory().aot_load32(ctx.gpr[3] + static_cast<std::uint32_t>(16)));
    ctx.set_gpr(2, ctx.gpr[2] + ctx.gpr[16]);
    ctx.set_gpr(4, rt.memory().aot_load32(ctx.gpr[2] + static_cast<std::uint32_t>(0)));
    ctx.set_gpr(5, ctx.gpr[18] + 0u);
    ctx.set_gpr(31, 0x08A5EFE4u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0080_entry, 80u, 351u, 0x08945908u>(ctx, &aot_mem) && ctx.pc == 0x08A5EFE4u) goto L_08A5EFE4;
    return;
L_08A5EFE4:
    ctx.set_gpr(2, rt.memory().aot_load32(ctx.gpr[19] + static_cast<std::uint32_t>(16)));
    ctx.set_gpr(2, rt.memory().aot_load32(ctx.gpr[2] + static_cast<std::uint32_t>(16)));
    ctx.set_gpr(2, ctx.gpr[2] + ctx.gpr[16]);
    ctx.set_gpr(4, rt.memory().aot_load32(ctx.gpr[2] + static_cast<std::uint32_t>(0)));
    ctx.set_gpr(5, ctx.gpr[17] + 0u);
    ctx.set_gpr(31, 0x08A5F000u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0080_entry, 80u, 351u, 0x08945908u>(ctx, &aot_mem) && ctx.pc == 0x08A5F000u) goto L_08A5F000;
    return;
L_08A5F000:
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_08A5F0A8;
      }
      goto L_08A5F008;
    }
L_08A5F008:
    ctx.set_gpr(4, ctx.gpr[19] + 0u);
    ctx.set_gpr(31, 0x08A5F014u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0081_entry, 81u, 41u, 0x0894835Cu>(ctx, &aot_mem) && ctx.pc == 0x08A5F014u) goto L_08A5F014;
    return;
L_08A5F014:
    ctx.set_gpr(4, ctx.gpr[2] + 0u);
    ctx.set_gpr(31, 0x08A5F020u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0058_entry, 58u, 257u, 0x088ED72Cu>(ctx, &aot_mem) && ctx.pc == 0x08A5F020u) goto L_08A5F020;
    return;
L_08A5F020:
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(44), ctx.gpr[2]);
    ctx.set_gpr(4, ctx.gpr[19] + 0u);
    ctx.set_gpr(31, 0x08A5F030u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0081_entry, 81u, 41u, 0x0894835Cu>(ctx, &aot_mem) && ctx.pc == 0x08A5F030u) goto L_08A5F030;
    return;
L_08A5F030:
    ctx.set_gpr(4, ctx.gpr[2] + 0u);
    ctx.set_gpr(31, 0x08A5F03Cu);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0058_entry, 58u, 257u, 0x088ED72Cu>(ctx, &aot_mem) && ctx.pc == 0x08A5F03Cu) goto L_08A5F03C;
    return;
L_08A5F03C:
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(40), ctx.gpr[2]);
    ctx.set_gpr(4, rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(44)));
    ctx.set_gpr(5, ctx.gpr[18] + 0u);
    ctx.set_gpr(31, 0x08A5F050u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0080_entry, 80u, 351u, 0x08945908u>(ctx, &aot_mem) && ctx.pc == 0x08A5F050u) goto L_08A5F050;
    return;
L_08A5F050:
    ctx.set_gpr(4, rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(40)));
    ctx.set_gpr(5, ctx.gpr[17] + 0u);
    ctx.set_gpr(31, 0x08A5F060u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0080_entry, 80u, 351u, 0x08945908u>(ctx, &aot_mem) && ctx.pc == 0x08A5F060u) goto L_08A5F060;
    return;
L_08A5F060:
    ctx.set_gpr(5, rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(44)));
    ctx.set_gpr(4, rt.memory().aot_load32(ctx.gpr[19] + static_cast<std::uint32_t>(12)));
    ctx.set_gpr(31, 0x08A5F070u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0081_entry, 81u, 299u, 0x089494E0u>(ctx, &aot_mem) && ctx.pc == 0x08A5F070u) goto L_08A5F070;
    return;
L_08A5F070:
    ctx.set_gpr(5, rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(40)));
    ctx.set_gpr(4, rt.memory().aot_load32(ctx.gpr[19] + static_cast<std::uint32_t>(16)));
    ctx.set_gpr(31, 0x08A5F080u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0081_entry, 81u, 299u, 0x089494E0u>(ctx, &aot_mem) && ctx.pc == 0x08A5F080u) goto L_08A5F080;
    return;
L_08A5F080:
    ctx.set_gpr(4, rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(40)));
    { const bool branch_taken = ctx.gpr[4] == 0u;
    // nop
      if (branch_taken) {
          goto L_08A5F094;
      }
      goto L_08A5F08C;
    }
L_08A5F08C:
    ctx.set_gpr(31, 0x08A5F094u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0014_entry, 14u, 257u, 0x0883D454u>(ctx, &aot_mem) && ctx.pc == 0x08A5F094u) goto L_08A5F094;
    return;
L_08A5F094:
    ctx.set_gpr(4, rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(44)));
    { const bool branch_taken = ctx.gpr[4] == 0u;
    // nop
      if (branch_taken) {
          goto L_08A5F0A8;
      }
      goto L_08A5F0A0;
    }
L_08A5F0A0:
    ctx.set_gpr(31, 0x08A5F0A8u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0014_entry, 14u, 257u, 0x0883D454u>(ctx, &aot_mem) && ctx.pc == 0x08A5F0A8u) goto L_08A5F0A8;
    return;
L_08A5F0A8:
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
L_08A5F0C8:
    rt.memory().aot_store32(ctx.gpr[4] + static_cast<std::uint32_t>(0), 0u);
    ctx.set_gpr(4, 0u + 0u);
    { const bool branch_taken = ctx.gpr[4] == 0u;
    // nop
      if (branch_taken) {
          goto L_08A5F0E4;
      }
      goto L_08A5F0D8;
    }
L_08A5F0D8:
    ctx.set_gpr(3, rt.memory().aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(4)));
    ctx.set_gpr(3, ctx.gpr[3] + static_cast<std::uint32_t>(1));
    rt.memory().aot_store32(ctx.gpr[4] + static_cast<std::uint32_t>(4), ctx.gpr[3]);
    goto L_08A5F0E4;
L_08A5F0E4:
    jump_target = ctx.gpr[31];
    // nop
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_08A5F0EC:
    ctx.set_gpr(29, ctx.gpr[29] + static_cast<std::uint32_t>(-16));
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(12), ctx.gpr[31]);
    ctx.set_gpr(3, rt.memory().aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(20)));
    { const bool branch_taken = ctx.gpr[5] == ctx.gpr[3];
    // nop
      if (branch_taken) {
          goto L_08A5F11C;
      }
      goto L_08A5F100;
    }
L_08A5F100:
    rt.memory().aot_store32(ctx.gpr[4] + static_cast<std::uint32_t>(20), ctx.gpr[5]);
    { const bool branch_taken = ctx.gpr[5] != 0u;
    // nop
      if (branch_taken) {
          goto L_08A5F11C;
      }
      goto L_08A5F10C;
    }
L_08A5F10C:
    ctx.set_gpr(25, rt.memory().aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(0)));
    ctx.set_gpr(25, rt.memory().aot_load32(ctx.gpr[25] + static_cast<std::uint32_t>(104)));
    jump_target = ctx.gpr[25];
    ctx.set_gpr(31, 0x08A5F11Cu);
    // nop
    ctx.pc = jump_target;
    if (rt.invoke_chained_call(ctx, &aot_mem) && ctx.pc == 0x08A5F11Cu) goto L_08A5F11C;
    return;
L_08A5F11C:
    ctx.set_gpr(31, rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(12)));
    ctx.set_gpr(29, ctx.gpr[29] + static_cast<std::uint32_t>(16));
    jump_target = ctx.gpr[31];
    // nop
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_08A5F12C:
    jump_target = ctx.gpr[31];
    // nop
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_08A5F134:
    ctx.set_gpr(29, ctx.gpr[29] + static_cast<std::uint32_t>(-32));
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(12), ctx.gpr[31]);
    ctx.set_gpr(31, 0x08A5F144u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0130_entry, 130u, 232u, 0x08A0D3E0u>(ctx, &aot_mem) && ctx.pc == 0x08A5F144u) goto L_08A5F144;
    return;
L_08A5F144:
    ctx.set_gpr(31, 0x08A5F14Cu);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0078_entry, 78u, 216u, 0x0893CDDCu>(ctx, &aot_mem) && ctx.pc == 0x08A5F14Cu) goto L_08A5F14C;
    return;
L_08A5F14C:
    ctx.set_gpr(4, rt.memory().aot_load32(ctx.gpr[2] + static_cast<std::uint32_t>(0)));
    ctx.set_gpr(31, 0x08A5F158u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0078_entry, 78u, 199u, 0x0893CC68u>(ctx, &aot_mem) && ctx.pc == 0x08A5F158u) goto L_08A5F158;
    return;
L_08A5F158:
    ctx.set_gpr(4, ctx.gpr[2] + 0u);
    ctx.set_gpr(31, 0x08A5F164u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0130_entry, 130u, 138u, 0x08A0CB98u>(ctx, &aot_mem) && ctx.pc == 0x08A5F164u) goto L_08A5F164;
    return;
L_08A5F164:
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(28), ctx.gpr[2]);
    ctx.set_gpr(4, ctx.gpr[2] + 0u);
    ctx.set_gpr(5, 2229u << 16u);
    ctx.set_gpr(5, ctx.gpr[5] + static_cast<std::uint32_t>(22856));
    ctx.set_gpr(31, 0x08A5F17Cu);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0080_entry, 80u, 351u, 0x08945908u>(ctx, &aot_mem) && ctx.pc == 0x08A5F17Cu) goto L_08A5F17C;
    return;
L_08A5F17C:
    ctx.set_gpr(31, 0x08A5F184u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0064_entry, 64u, 445u, 0x08906000u>(ctx, &aot_mem) && ctx.pc == 0x08A5F184u) goto L_08A5F184;
    return;
L_08A5F184:
    ctx.set_gpr(4, ctx.gpr[29] + static_cast<std::uint32_t>(24));
    ctx.set_gpr(5, ctx.gpr[2] + 0u);
    ctx.set_gpr(6, 2226u << 16u);
    ctx.set_gpr(6, ctx.gpr[6] + static_cast<std::uint32_t>(-32524));
    ctx.set_gpr(31, 0x08A5F19Cu);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0084_entry, 84u, 549u, 0x0895655Cu>(ctx, &aot_mem) && ctx.pc == 0x08A5F19Cu) goto L_08A5F19C;
    return;
L_08A5F19C:
    ctx.set_gpr(4, rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(24)));
    ctx.set_gpr(5, rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(28)));
    ctx.set_gpr(31, 0x08A5F1ACu);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0067_entry, 67u, 247u, 0x08910FFCu>(ctx, &aot_mem) && ctx.pc == 0x08A5F1ACu) goto L_08A5F1AC;
    return;
L_08A5F1AC:
    ctx.set_gpr(4, rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(24)));
    { const bool branch_taken = ctx.gpr[4] == 0u;
    // nop
      if (branch_taken) {
          goto L_08A5F1C0;
      }
      goto L_08A5F1B8;
    }
L_08A5F1B8:
    ctx.set_gpr(31, 0x08A5F1C0u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0014_entry, 14u, 257u, 0x0883D454u>(ctx, &aot_mem) && ctx.pc == 0x08A5F1C0u) goto L_08A5F1C0;
    return;
L_08A5F1C0:
    ctx.set_gpr(4, rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(28)));
    { const bool branch_taken = ctx.gpr[4] == 0u;
    // nop
      if (branch_taken) {
          goto L_08A5F1D4;
      }
      goto L_08A5F1CC;
    }
L_08A5F1CC:
    ctx.set_gpr(31, 0x08A5F1D4u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0014_entry, 14u, 257u, 0x0883D454u>(ctx, &aot_mem) && ctx.pc == 0x08A5F1D4u) goto L_08A5F1D4;
    return;
L_08A5F1D4:
    ctx.set_gpr(31, rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(12)));
    ctx.set_gpr(29, ctx.gpr[29] + static_cast<std::uint32_t>(32));
    jump_target = ctx.gpr[31];
    // nop
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_08A5F1E4:
    ctx.set_gpr(29, ctx.gpr[29] + static_cast<std::uint32_t>(-32));
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(12), ctx.gpr[31]);
    ctx.set_gpr(31, 0x08A5F1F4u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0064_entry, 64u, 445u, 0x08906000u>(ctx, &aot_mem) && ctx.pc == 0x08A5F1F4u) goto L_08A5F1F4;
    return;
L_08A5F1F4:
    ctx.set_gpr(4, ctx.gpr[29] + static_cast<std::uint32_t>(28));
    ctx.set_gpr(5, ctx.gpr[2] + 0u);
    ctx.set_gpr(6, 2226u << 16u);
    ctx.set_gpr(6, ctx.gpr[6] + static_cast<std::uint32_t>(-32524));
    ctx.set_gpr(31, 0x08A5F20Cu);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0084_entry, 84u, 549u, 0x0895655Cu>(ctx, &aot_mem) && ctx.pc == 0x08A5F20Cu) goto L_08A5F20C;
    return;
L_08A5F20C:
    ctx.set_gpr(4, rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(28)));
    ctx.set_gpr(5, 2229u << 16u);
    ctx.set_gpr(5, ctx.gpr[5] + static_cast<std::uint32_t>(22856));
    ctx.set_gpr(31, 0x08A5F220u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0067_entry, 67u, 237u, 0x08910F14u>(ctx, &aot_mem) && ctx.pc == 0x08A5F220u) goto L_08A5F220;
    return;
L_08A5F220:
    ctx.set_gpr(4, rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(28)));
    { const bool branch_taken = ctx.gpr[4] == 0u;
    // nop
      if (branch_taken) {
          goto L_08A5F234;
      }
      goto L_08A5F22C;
    }
L_08A5F22C:
    ctx.set_gpr(31, 0x08A5F234u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0014_entry, 14u, 257u, 0x0883D454u>(ctx, &aot_mem) && ctx.pc == 0x08A5F234u) goto L_08A5F234;
    return;
L_08A5F234:
    ctx.set_gpr(31, rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(12)));
    ctx.set_gpr(29, ctx.gpr[29] + static_cast<std::uint32_t>(32));
    jump_target = ctx.gpr[31];
    // nop
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_08A5F244:
    ctx.set_gpr(29, ctx.gpr[29] + static_cast<std::uint32_t>(-32));
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(12), ctx.gpr[31]);
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(8), ctx.gpr[18]);
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(4), ctx.gpr[17]);
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(0), ctx.gpr[16]);
    ctx.set_gpr(18, ctx.gpr[4] + 0u);
    ctx.set_gpr(17, ctx.gpr[5] + 0u);
    ctx.set_gpr(16, ctx.gpr[6] + 0u);
    ctx.set_gpr(4, rt.memory().aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(20)));
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(28), ctx.gpr[16]);
    ctx.set_gpr(5, ctx.gpr[29] + static_cast<std::uint32_t>(28));
    ctx.set_gpr(6, 0u + 0u);
    ctx.set_gpr(31, 0x08A5F27Cu);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0018_entry, 18u, 462u, 0x0884D888u>(ctx, &aot_mem) && ctx.pc == 0x08A5F27Cu) goto L_08A5F27C;
    return;
L_08A5F27C:
    ctx.set_gpr(3, 0u + static_cast<std::uint32_t>(-1));
    { const bool branch_taken = ctx.gpr[2] != ctx.gpr[3];
    // nop
      if (branch_taken) {
          goto L_08A5F294;
      }
      goto L_08A5F288;
    }
L_08A5F288:
    ctx.set_gpr(2, 0u + 0u);
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_08A5F300;
      }
      goto L_08A5F294;
    }
L_08A5F294:
    ctx.set_gpr(4, rt.memory().aot_load32(ctx.gpr[18] + static_cast<std::uint32_t>(20)));
    ctx.set_gpr(3, ctx.gpr[2] << 2u);
    ctx.set_gpr(2, rt.memory().aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(16)));
    ctx.set_gpr(2, ctx.gpr[2] + ctx.gpr[3]);
    ctx.set_gpr(4, rt.memory().aot_load32(ctx.gpr[2] + static_cast<std::uint32_t>(0)));
    ctx.set_gpr(3, rt.memory().aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(20)));
    ctx.set_gpr(2, 0u + static_cast<std::uint32_t>(2));
    { const bool branch_taken = ctx.gpr[3] != ctx.gpr[2];
    // nop
      if (branch_taken) {
          goto L_08A5F2C4;
      }
      goto L_08A5F2B8;
    }
L_08A5F2B8:
    ctx.set_gpr(2, 0u + 0u);
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_08A5F300;
      }
      goto L_08A5F2C4;
    }
L_08A5F2C4:
    ctx.set_gpr(3, rt.memory().aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(8)));
    ctx.set_gpr(2, 0u + static_cast<std::uint32_t>(-2));
    ctx.set_gpr(6, ctx.gpr[3] & ctx.gpr[2]);
    { const bool branch_taken = ctx.gpr[6] == 0u;
    // nop
      if (branch_taken) {
          goto L_08A5F2E0;
      }
      goto L_08A5F2D8;
    }
L_08A5F2D8:
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_08A5F2E8;
      }
      goto L_08A5F2E0;
    }
L_08A5F2E0:
    ctx.set_gpr(6, 2225u << 16u);
    ctx.set_gpr(6, ctx.gpr[6] + static_cast<std::uint32_t>(8240));
    goto L_08A5F2E8;
L_08A5F2E8:
    ctx.set_gpr(4, ctx.gpr[17] + 0u);
    ctx.set_gpr(5, ctx.gpr[18] + 0u);
    ctx.set_gpr(7, ctx.gpr[16] + 0u);
    ctx.set_gpr(31, 0x08A5F2FCu);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0070_entry, 70u, 167u, 0x0891CCBCu>(ctx, &aot_mem) && ctx.pc == 0x08A5F2FCu) goto L_08A5F2FC;
    return;
L_08A5F2FC:
    ctx.set_gpr(2, 0u + static_cast<std::uint32_t>(1));
    goto L_08A5F300;
L_08A5F300:
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
L_08A5F31C:
    ctx.set_gpr(29, ctx.gpr[29] + static_cast<std::uint32_t>(-16));
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(12), ctx.gpr[31]);
    ctx.set_gpr(6, ctx.gpr[5] + 0u);
    ctx.set_gpr(4, rt.memory().aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(20)));
    ctx.set_gpr(2, 2245u << 16u);
    ctx.set_gpr(5, rt.memory().aot_load32(ctx.gpr[2] + static_cast<std::uint32_t>(28892)));
    ctx.set_gpr(31, 0x08A5F33Cu);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0081_entry, 81u, 359u, 0x089499ACu>(ctx, &aot_mem) && ctx.pc == 0x08A5F33Cu) goto L_08A5F33C;
    return;
L_08A5F33C:
    { const bool branch_taken = ctx.gpr[2] == 0u;
    // nop
      if (branch_taken) {
          goto L_08A5F34C;
      }
      goto L_08A5F344;
    }
L_08A5F344:
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_08A5F350;
      }
      goto L_08A5F34C;
    }
L_08A5F34C:
    ctx.set_gpr(2, 0u + 0u);
    goto L_08A5F350;
L_08A5F350:
    ctx.set_gpr(31, rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(12)));
    ctx.set_gpr(29, ctx.gpr[29] + static_cast<std::uint32_t>(16));
    jump_target = ctx.gpr[31];
    // nop
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_08A5F360:
    ctx.set_gpr(2, rt.memory().aot_load32(ctx.gpr[5] + static_cast<std::uint32_t>(36)));
    ctx.set_gpr(2, rt.memory().aot_load32(ctx.gpr[2] + static_cast<std::uint32_t>(8)));
    ctx.set_gpr(2, rt.memory().aot_load32(ctx.gpr[2] + static_cast<std::uint32_t>(8)));
    ctx.set_gpr(2, static_cast<std::int32_t>(0u) < static_cast<std::int32_t>(ctx.gpr[2]) ? 1u : 0u);
    jump_target = ctx.gpr[31];
    // nop
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_08A5F378:
    ctx.set_gpr(29, ctx.gpr[29] + static_cast<std::uint32_t>(-80));
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
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(76), ctx.gpr[5]);
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(72), ctx.gpr[6]);
    ctx.set_gpr(16, rt.memory().aot_load32(ctx.gpr[5] + static_cast<std::uint32_t>(36)));
    ctx.set_gpr(21, rt.memory().aot_load32(ctx.gpr[6] + static_cast<std::uint32_t>(52)));
    ctx.set_gpr(2, rt.memory().aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(8)));
    ctx.set_gpr(2, rt.memory().aot_load32(ctx.gpr[2] + static_cast<std::uint32_t>(8)));
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(68), ctx.gpr[2]);
    ctx.set_gpr(2, rt.memory().aot_load32(ctx.gpr[5] + static_cast<std::uint32_t>(44)));
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(64), ctx.gpr[2]);
    ctx.set_gpr(18, 0u + 0u);
    ctx.set_gpr(20, 0u + 0u);
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_08A5F638;
      }
      goto L_08A5F3D8;
    }
L_08A5F3D8:
    ctx.set_gpr(2, rt.memory().aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(8)));
    ctx.set_gpr(23, ctx.gpr[20] << 2u);
    ctx.set_gpr(2, rt.memory().aot_load32(ctx.gpr[2] + static_cast<std::uint32_t>(16)));
    ctx.set_gpr(2, ctx.gpr[2] + ctx.gpr[23]);
    ctx.set_gpr(2, rt.memory().aot_load32(ctx.gpr[2] + static_cast<std::uint32_t>(0)));
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(60), ctx.gpr[2]);
    ctx.set_gpr(2, rt.memory().aot_load32(ctx.gpr[2] + static_cast<std::uint32_t>(8)));
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(56), ctx.gpr[2]);
    ctx.set_gpr(19, 0u + 0u);
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_08A5F484;
      }
      goto L_08A5F404;
    }
L_08A5F404:
    ctx.set_gpr(3, ctx.gpr[19] << 2u);
    ctx.set_gpr(2, rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(60)));
    ctx.set_gpr(2, rt.memory().aot_load32(ctx.gpr[2] + static_cast<std::uint32_t>(16)));
    ctx.set_gpr(2, ctx.gpr[2] + ctx.gpr[3]);
    ctx.set_gpr(22, rt.memory().aot_load32(ctx.gpr[2] + static_cast<std::uint32_t>(0)));
    ctx.set_gpr(2, static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int16_t>(rt.memory().aot_load16(ctx.gpr[22] + static_cast<std::uint32_t>(8))))));
    ctx.set_gpr(3, ctx.gpr[2] << 2u);
    ctx.set_gpr(2, rt.memory().aot_load32(ctx.gpr[21] + static_cast<std::uint32_t>(68)));
    ctx.set_gpr(2, ctx.gpr[2] + ctx.gpr[3]);
    ctx.set_gpr(3, static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int16_t>(rt.memory().aot_load16(ctx.gpr[22] + static_cast<std::uint32_t>(10))))));
    ctx.set_gpr(2, rt.memory().aot_load32(ctx.gpr[2] + static_cast<std::uint32_t>(0)));
    ctx.set_gpr(30, ctx.gpr[3] + ctx.gpr[2]);
    ctx.set_gpr(4, rt.memory().aot_load32(ctx.gpr[21] + static_cast<std::uint32_t>(16)));
    ctx.set_gpr(5, ctx.gpr[30] + 0u);
    ctx.set_gpr(31, 0x08A5F444u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0016_entry, 16u, 69u, 0x088443E8u>(ctx, &aot_mem) && ctx.pc == 0x08A5F444u) goto L_08A5F444;
    return;
L_08A5F444:
    ctx.set_gpr(17, ctx.gpr[2] + 0u);
    ctx.set_gpr(2, rt.memory().aot_load32(ctx.gpr[2] + static_cast<std::uint32_t>(24)));
    { const bool branch_taken = static_cast<std::int32_t>(ctx.gpr[2]) >= 0;
    // nop
      if (branch_taken) {
          goto L_08A5F45C;
      }
      goto L_08A5F454;
    }
L_08A5F454:
    ctx.set_gpr(2, rt.memory().aot_load32(ctx.gpr[17] + static_cast<std::uint32_t>(8)));
    rt.memory().aot_store32(ctx.gpr[17] + static_cast<std::uint32_t>(24), ctx.gpr[2]);
    goto L_08A5F45C;
L_08A5F45C:
    ctx.set_gpr(4, ctx.gpr[17] + 0u);
    ctx.set_gpr(5, ctx.gpr[22] + 0u);
    ctx.set_gpr(31, 0x08A5F46Cu);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0138_entry, 138u, 611u, 0x08A2ED1Cu>(ctx, &aot_mem) && ctx.pc == 0x08A5F46Cu) goto L_08A5F46C;
    return;
L_08A5F46C:
    ctx.set_gpr(4, ctx.gpr[21] + 0u);
    ctx.set_gpr(5, ctx.gpr[17] + 0u);
    ctx.set_gpr(6, ctx.gpr[30] + 0u);
    ctx.set_gpr(31, 0x08A5F480u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0138_entry, 138u, 625u, 0x08A2EEA0u>(ctx, &aot_mem) && ctx.pc == 0x08A5F480u) goto L_08A5F480;
    return;
L_08A5F480:
    ctx.set_gpr(19, ctx.gpr[19] + static_cast<std::uint32_t>(1));
    goto L_08A5F484;
L_08A5F484:
    ctx.set_gpr(2, rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(56)));
    ctx.set_gpr(2, static_cast<std::int32_t>(ctx.gpr[19]) < static_cast<std::int32_t>(ctx.gpr[2]) ? 1u : 0u);
    { const bool branch_taken = ctx.gpr[2] != 0u;
    // nop
      if (branch_taken) {
          goto L_08A5F404;
      }
      goto L_08A5F494;
    }
L_08A5F494:
    ctx.set_gpr(2, ctx.gpr[20] >> 5u);
    ctx.set_gpr(3, ctx.gpr[2] << 2u);
    ctx.set_gpr(2, rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(64)));
    ctx.set_gpr(2, rt.memory().aot_load32(ctx.gpr[2] + static_cast<std::uint32_t>(16)));
    ctx.set_gpr(4, ctx.gpr[2] + ctx.gpr[3]);
    ctx.set_gpr(3, ctx.gpr[20] & 31u);
    ctx.set_gpr(2, 0u + static_cast<std::uint32_t>(1));
    ctx.set_gpr(3, ctx.gpr[2] << (ctx.gpr[3] & 31u));
    ctx.set_gpr(2, rt.memory().aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(0)));
    ctx.set_gpr(2, ctx.gpr[3] & ctx.gpr[2]);
    { const bool branch_taken = ctx.gpr[2] == 0u;
    // nop
      if (branch_taken) {
          goto L_08A5F558;
      }
      goto L_08A5F4C4;
    }
L_08A5F4C4:
    ctx.set_gpr(2, rt.memory().aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(20)));
    ctx.set_gpr(2, rt.memory().aot_load32(ctx.gpr[2] + static_cast<std::uint32_t>(16)));
    ctx.set_gpr(2, ctx.gpr[2] + ctx.gpr[23]);
    ctx.set_gpr(17, rt.memory().aot_load32(ctx.gpr[2] + static_cast<std::uint32_t>(0)));
    { const bool branch_taken = ctx.gpr[17] != 0u;
    // nop
      if (branch_taken) {
          goto L_08A5F504;
      }
      goto L_08A5F4DC;
    }
L_08A5F4DC:
    ctx.set_gpr(4, rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(72)));
    ctx.set_gpr(5, rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(76)));
    ctx.set_gpr(31, 0x08A5F4ECu);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0153_entry, 153u, 354u, 0x08A69FF0u>(ctx, &aot_mem) && ctx.pc == 0x08A5F4ECu) goto L_08A5F4EC;
    return;
L_08A5F4EC:
    ctx.set_gpr(3, 0u + static_cast<std::uint32_t>(2));
    { const bool branch_taken = ctx.gpr[2] != ctx.gpr[3];
    // nop
      if (branch_taken) {
          goto L_08A5F558;
      }
      goto L_08A5F4F8;
    }
L_08A5F4F8:
    ctx.set_gpr(18, 0u + static_cast<std::uint32_t>(1));
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_08A5F558;
      }
      goto L_08A5F504;
    }
L_08A5F504:
    ctx.set_gpr(19, 0u + 0u);
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_08A5F548;
      }
      goto L_08A5F510;
    }
L_08A5F510:
    ctx.set_gpr(3, ctx.gpr[19] << 2u);
    ctx.set_gpr(2, rt.memory().aot_load32(ctx.gpr[17] + static_cast<std::uint32_t>(16)));
    ctx.set_gpr(2, ctx.gpr[2] + ctx.gpr[3]);
    ctx.set_gpr(5, rt.memory().aot_load32(ctx.gpr[2] + static_cast<std::uint32_t>(0)));
    ctx.set_gpr(4, rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(72)));
    ctx.set_gpr(31, 0x08A5F52Cu);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0153_entry, 153u, 317u, 0x08A69C98u>(ctx, &aot_mem) && ctx.pc == 0x08A5F52Cu) goto L_08A5F52C;
    return;
L_08A5F52C:
    ctx.set_gpr(3, 0u + static_cast<std::uint32_t>(2));
    { const bool branch_taken = ctx.gpr[2] != ctx.gpr[3];
    // nop
      if (branch_taken) {
          goto L_08A5F544;
      }
      goto L_08A5F538;
    }
L_08A5F538:
    ctx.set_gpr(18, 0u + static_cast<std::uint32_t>(1));
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_08A5F558;
      }
      goto L_08A5F544;
    }
L_08A5F544:
    ctx.set_gpr(19, ctx.gpr[19] + static_cast<std::uint32_t>(1));
    goto L_08A5F548;
L_08A5F548:
    ctx.set_gpr(2, rt.memory().aot_load32(ctx.gpr[17] + static_cast<std::uint32_t>(8)));
    ctx.set_gpr(2, static_cast<std::int32_t>(ctx.gpr[19]) < static_cast<std::int32_t>(ctx.gpr[2]) ? 1u : 0u);
    { const bool branch_taken = ctx.gpr[2] != 0u;
    // nop
      if (branch_taken) {
          goto L_08A5F510;
      }
      goto L_08A5F558;
    }
L_08A5F558:
    ctx.set_gpr(2, rt.memory().aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(12)));
    ctx.set_gpr(2, rt.memory().aot_load32(ctx.gpr[2] + static_cast<std::uint32_t>(16)));
    ctx.set_gpr(2, ctx.gpr[2] + ctx.gpr[23]);
    ctx.set_gpr(30, rt.memory().aot_load32(ctx.gpr[2] + static_cast<std::uint32_t>(0)));
    ctx.set_gpr(2, rt.memory().aot_load32(ctx.gpr[30] + static_cast<std::uint32_t>(8)));
    ctx.set_gpr(19, ctx.gpr[2] + static_cast<std::uint32_t>(-1));
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_08A5F62C;
      }
      goto L_08A5F578;
    }
L_08A5F578:
    ctx.set_gpr(3, ctx.gpr[19] << 2u);
    ctx.set_gpr(2, rt.memory().aot_load32(ctx.gpr[30] + static_cast<std::uint32_t>(16)));
    ctx.set_gpr(2, ctx.gpr[2] + ctx.gpr[3]);
    ctx.set_gpr(22, rt.memory().aot_load32(ctx.gpr[2] + static_cast<std::uint32_t>(0)));
    ctx.set_gpr(2, static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int16_t>(rt.memory().aot_load16(ctx.gpr[22] + static_cast<std::uint32_t>(8))))));
    ctx.set_gpr(3, ctx.gpr[2] << 2u);
    ctx.set_gpr(2, rt.memory().aot_load32(ctx.gpr[21] + static_cast<std::uint32_t>(68)));
    ctx.set_gpr(2, ctx.gpr[2] + ctx.gpr[3]);
    ctx.set_gpr(3, static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int16_t>(rt.memory().aot_load16(ctx.gpr[22] + static_cast<std::uint32_t>(10))))));
    ctx.set_gpr(2, rt.memory().aot_load32(ctx.gpr[2] + static_cast<std::uint32_t>(0)));
    ctx.set_gpr(23, ctx.gpr[3] + ctx.gpr[2]);
    ctx.set_gpr(4, rt.memory().aot_load32(ctx.gpr[21] + static_cast<std::uint32_t>(16)));
    ctx.set_gpr(5, ctx.gpr[23] + 0u);
    ctx.set_gpr(31, 0x08A5F5B4u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0016_entry, 16u, 69u, 0x088443E8u>(ctx, &aot_mem) && ctx.pc == 0x08A5F5B4u) goto L_08A5F5B4;
    return;
L_08A5F5B4:
    ctx.set_gpr(17, ctx.gpr[2] + 0u);
    ctx.set_gpr(3, rt.memory().aot_load32(ctx.gpr[2] + static_cast<std::uint32_t>(8)));
    ctx.set_gpr(3, ctx.gpr[3] + static_cast<std::uint32_t>(-1));
    ctx.set_gpr(4, ctx.gpr[3] << 2u);
    ctx.set_gpr(3, rt.memory().aot_load32(ctx.gpr[2] + static_cast<std::uint32_t>(16)));
    ctx.set_gpr(3, ctx.gpr[3] + ctx.gpr[4]);
    ctx.set_gpr(4, rt.memory().aot_load32(ctx.gpr[3] + static_cast<std::uint32_t>(0)));
    ctx.set_gpr(2, rt.memory().aot_load32(ctx.gpr[2] + static_cast<std::uint32_t>(28)));
    { const bool branch_taken = ctx.gpr[2] == 0u;
    // nop
      if (branch_taken) {
          goto L_08A5F5F0;
      }
      goto L_08A5F5DC;
    }
L_08A5F5DC:
    { const bool branch_taken = ctx.gpr[4] != ctx.gpr[22];
    // nop
      if (branch_taken) {
          goto L_08A5F5F0;
      }
      goto L_08A5F5E4;
    }
L_08A5F5E4:
    ctx.set_gpr(5, rt.memory().aot_load32(ctx.gpr[21] + static_cast<std::uint32_t>(48)));
    jump_target = ctx.gpr[2];
    ctx.set_gpr(31, 0x08A5F5F0u);
    // nop
    ctx.pc = jump_target;
    if (rt.invoke_chained_call(ctx, &aot_mem) && ctx.pc == 0x08A5F5F0u) goto L_08A5F5F0;
    return;
L_08A5F5F0:
    ctx.set_gpr(4, ctx.gpr[17] + 0u);
    ctx.set_gpr(31, 0x08A5F5FCu);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0138_entry, 138u, 624u, 0x08A2EE7Cu>(ctx, &aot_mem) && ctx.pc == 0x08A5F5FCu) goto L_08A5F5FC;
    return;
L_08A5F5FC:
    ctx.set_gpr(3, rt.memory().aot_load32(ctx.gpr[17] + static_cast<std::uint32_t>(8)));
    ctx.set_gpr(2, rt.memory().aot_load32(ctx.gpr[17] + static_cast<std::uint32_t>(24)));
    { const bool branch_taken = ctx.gpr[3] != ctx.gpr[2];
    // nop
      if (branch_taken) {
          goto L_08A5F614;
      }
      goto L_08A5F60C;
    }
L_08A5F60C:
    ctx.set_gpr(2, 0u + static_cast<std::uint32_t>(-1));
    rt.memory().aot_store32(ctx.gpr[17] + static_cast<std::uint32_t>(24), ctx.gpr[2]);
    goto L_08A5F614;
L_08A5F614:
    ctx.set_gpr(4, ctx.gpr[21] + 0u);
    ctx.set_gpr(5, ctx.gpr[17] + 0u);
    ctx.set_gpr(6, ctx.gpr[23] + 0u);
    ctx.set_gpr(31, 0x08A5F628u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0138_entry, 138u, 625u, 0x08A2EEA0u>(ctx, &aot_mem) && ctx.pc == 0x08A5F628u) goto L_08A5F628;
    return;
L_08A5F628:
    ctx.set_gpr(19, ctx.gpr[19] + static_cast<std::uint32_t>(-1));
    goto L_08A5F62C;
L_08A5F62C:
    { const bool branch_taken = static_cast<std::int32_t>(ctx.gpr[19]) >= 0;
    // nop
      if (branch_taken) {
          goto L_08A5F578;
      }
      goto L_08A5F634;
    }
L_08A5F634:
    ctx.set_gpr(20, ctx.gpr[20] + static_cast<std::uint32_t>(1));
    goto L_08A5F638;
L_08A5F638:
    ctx.set_gpr(2, rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(68)));
    ctx.set_gpr(1, static_cast<std::int32_t>(ctx.gpr[20]) < static_cast<std::int32_t>(ctx.gpr[2]) ? 1u : 0u);
    { const bool branch_taken = ctx.gpr[1] == 0u;
    // nop
      if (branch_taken) {
          goto L_08A5F650;
      }
      goto L_08A5F648;
    }
L_08A5F648:
    { const bool branch_taken = ctx.gpr[18] == 0u;
    // nop
      if (branch_taken) {
          goto L_08A5F3D8;
      }
      goto L_08A5F650;
    }
L_08A5F650:
    { const bool branch_taken = ctx.gpr[18] == 0u;
    // nop
      if (branch_taken) {
          goto L_08A5F664;
      }
      goto L_08A5F658;
    }
L_08A5F658:
    ctx.set_gpr(2, 0u + static_cast<std::uint32_t>(2));
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_08A5F668;
      }
      goto L_08A5F664;
    }
L_08A5F664:
    ctx.set_gpr(2, 0u + 0u);
    goto L_08A5F668;
L_08A5F668:
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
    ctx.set_gpr(29, ctx.gpr[29] + static_cast<std::uint32_t>(80));
    jump_target = ctx.gpr[31];
    // nop
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_08A5F69C:
    ctx.set_gpr(29, ctx.gpr[29] + static_cast<std::uint32_t>(-16));
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(12), ctx.gpr[31]);
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(8), ctx.gpr[17]);
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(4), ctx.gpr[16]);
    ctx.set_gpr(16, ctx.gpr[4] + 0u);
    ctx.set_gpr(17, ctx.gpr[5] + 0u);
    ctx.set_gpr(4, ctx.gpr[16] + static_cast<std::uint32_t>(48));
    ctx.set_gpr(5, 0u + 0u);
    ctx.set_gpr(31, 0x08A5F6C4u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0085_entry, 85u, 61u, 0x089584C4u>(ctx, &aot_mem) && ctx.pc == 0x08A5F6C4u) goto L_08A5F6C4;
    return;
L_08A5F6C4:
    ctx.set_gpr(4, rt.memory().aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(40)));
    ctx.set_gpr(5, ctx.gpr[16] + 0u);
    ctx.set_gpr(6, ctx.gpr[17] + 0u);
    ctx.set_gpr(25, rt.memory().aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(0)));
    ctx.set_gpr(25, rt.memory().aot_load32(ctx.gpr[25] + static_cast<std::uint32_t>(96)));
    jump_target = ctx.gpr[25];
    ctx.set_gpr(31, 0x08A5F6E0u);
    // nop
    ctx.pc = jump_target;
    if (rt.invoke_chained_call(ctx, &aot_mem) && ctx.pc == 0x08A5F6E0u) goto L_08A5F6E0;
    return;
L_08A5F6E0:
    rt.memory().aot_store8(ctx.gpr[16] + static_cast<std::uint32_t>(33), static_cast<std::uint8_t>(ctx.gpr[2]));
    ctx.set_gpr(2, rt.memory().aot_load8(ctx.gpr[16] + static_cast<std::uint32_t>(33)));
    { const bool branch_taken = ctx.gpr[2] == 0u;
    // nop
      if (branch_taken) {
          goto L_08A5F784;
      }
      goto L_08A5F6F0;
    }
L_08A5F6F0:
    ctx.set_gpr(2, rt.memory().aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(36)));
    ctx.set_gpr(2, rt.memory().aot_load32(ctx.gpr[2] + static_cast<std::uint32_t>(8)));
    ctx.set_gpr(3, rt.memory().aot_load32(ctx.gpr[2] + static_cast<std::uint32_t>(8)));
    ctx.set_gpr(2, rt.memory().aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(44)));
    ctx.set_gpr(2, rt.memory().aot_load32(ctx.gpr[2] + static_cast<std::uint32_t>(20)));
    ctx.set_gpr(1, static_cast<std::int32_t>(ctx.gpr[2]) < static_cast<std::int32_t>(ctx.gpr[3]) ? 1u : 0u);
    { const bool branch_taken = ctx.gpr[1] == 0u;
    // nop
      if (branch_taken) {
          goto L_08A5F724;
      }
      goto L_08A5F710;
    }
L_08A5F710:
    ctx.set_gpr(5, ctx.gpr[3] + static_cast<std::uint32_t>(-1));
    ctx.set_gpr(4, ctx.gpr[16] + 0u);
    ctx.set_gpr(6, 0u + static_cast<std::uint32_t>(1));
    ctx.set_gpr(31, 0x08A5F724u);
    // nop
    goto L_08A5F8B0;
L_08A5F724:
    ctx.set_gpr(2, rt.memory().aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(36)));
    ctx.set_gpr(4, rt.memory().aot_load32(ctx.gpr[2] + static_cast<std::uint32_t>(16)));
    { const bool branch_taken = ctx.gpr[4] == 0u;
    // nop
      if (branch_taken) {
          goto L_08A5F784;
      }
      goto L_08A5F734;
    }
L_08A5F734:
    ctx.set_gpr(31, 0x08A5F73Cu);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0157_entry, 157u, 183u, 0x08A78E64u>(ctx, &aot_mem) && ctx.pc == 0x08A5F73Cu) goto L_08A5F73C;
    return;
L_08A5F73C:
    ctx.set_gpr(2, rt.memory().aot_load32(ctx.gpr[2] + static_cast<std::uint32_t>(8)));
    { const bool branch_taken = static_cast<std::int32_t>(ctx.gpr[2]) <= 0;
    // nop
      if (branch_taken) {
          goto L_08A5F784;
      }
      goto L_08A5F748;
    }
L_08A5F748:
    ctx.set_gpr(4, ctx.gpr[16] + 0u);
    ctx.set_gpr(31, 0x08A5F754u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0081_entry, 81u, 41u, 0x0894835Cu>(ctx, &aot_mem) && ctx.pc == 0x08A5F754u) goto L_08A5F754;
    return;
L_08A5F754:
    ctx.set_gpr(4, ctx.gpr[2] + 0u);
    ctx.set_gpr(31, 0x08A5F760u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0156_entry, 156u, 368u, 0x08A7629Cu>(ctx, &aot_mem) && ctx.pc == 0x08A5F760u) goto L_08A5F760;
    return;
L_08A5F760:
    ctx.set_gpr(4, ctx.gpr[16] + static_cast<std::uint32_t>(48));
    ctx.set_gpr(5, ctx.gpr[2] + 0u);
    ctx.set_gpr(31, 0x08A5F770u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0085_entry, 85u, 67u, 0x0895853Cu>(ctx, &aot_mem) && ctx.pc == 0x08A5F770u) goto L_08A5F770;
    return;
L_08A5F770:
    ctx.set_gpr(2, rt.memory().aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(36)));
    ctx.set_gpr(5, rt.memory().aot_load32(ctx.gpr[2] + static_cast<std::uint32_t>(16)));
    ctx.set_gpr(4, rt.memory().aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(48)));
    ctx.set_gpr(31, 0x08A5F784u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0157_entry, 157u, 196u, 0x08A78FB0u>(ctx, &aot_mem) && ctx.pc == 0x08A5F784u) goto L_08A5F784;
    return;
L_08A5F784:
    ctx.set_gpr(2, rt.memory().aot_load8(ctx.gpr[16] + static_cast<std::uint32_t>(33)));
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
L_08A5F7A0:
    ctx.set_gpr(29, ctx.gpr[29] + static_cast<std::uint32_t>(-16));
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(12), ctx.gpr[31]);
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(8), ctx.gpr[18]);
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(4), ctx.gpr[17]);
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(0), ctx.gpr[16]);
    ctx.set_gpr(18, ctx.gpr[4] + 0u);
    ctx.set_gpr(17, ctx.gpr[5] + 0u);
    ctx.set_gpr(16, rt.memory().aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(48)));
    { const bool branch_taken = ctx.gpr[16] == 0u;
    // nop
      if (branch_taken) {
          goto L_08A5F7F0;
      }
      goto L_08A5F7C8;
    }
L_08A5F7C8:
    ctx.set_gpr(4, ctx.gpr[17] + 0u);
    ctx.set_gpr(25, rt.memory().aot_load32(ctx.gpr[17] + static_cast<std::uint32_t>(0)));
    ctx.set_gpr(25, rt.memory().aot_load32(ctx.gpr[25] + static_cast<std::uint32_t>(104)));
    jump_target = ctx.gpr[25];
    ctx.set_gpr(31, 0x08A5F7DCu);
    // nop
    ctx.pc = jump_target;
    if (rt.invoke_chained_call(ctx, &aot_mem) && ctx.pc == 0x08A5F7DCu) goto L_08A5F7DC;
    return;
L_08A5F7DC:
    ctx.set_gpr(4, ctx.gpr[16] + 0u);
    ctx.set_gpr(6, ctx.gpr[2] + 0u);
    ctx.set_gpr(7, ctx.gpr[3] + 0u);
    ctx.set_gpr(31, 0x08A5F7F0u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0157_entry, 157u, 186u, 0x08A78E98u>(ctx, &aot_mem) && ctx.pc == 0x08A5F7F0u) goto L_08A5F7F0;
    return;
L_08A5F7F0:
    ctx.set_gpr(4, rt.memory().aot_load32(ctx.gpr[18] + static_cast<std::uint32_t>(40)));
    ctx.set_gpr(5, ctx.gpr[18] + 0u);
    ctx.set_gpr(6, ctx.gpr[17] + 0u);
    ctx.set_gpr(25, rt.memory().aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(0)));
    ctx.set_gpr(25, rt.memory().aot_load32(ctx.gpr[25] + static_cast<std::uint32_t>(100)));
    jump_target = ctx.gpr[25];
    ctx.set_gpr(31, 0x08A5F80Cu);
    // nop
    ctx.pc = jump_target;
    if (rt.invoke_chained_call(ctx, &aot_mem) && ctx.pc == 0x08A5F80Cu) goto L_08A5F80C;
    return;
L_08A5F80C:
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
L_08A5F828:
    jump_target = ctx.gpr[31];
    // nop
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_08A5F830:
    ctx.set_gpr(29, ctx.gpr[29] + static_cast<std::uint32_t>(-16));
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(12), ctx.gpr[31]);
    ctx.set_gpr(2, ctx.gpr[4] + 0u);
    ctx.set_gpr(6, ctx.gpr[5] + 0u);
    ctx.set_gpr(4, rt.memory().aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(40)));
    ctx.set_gpr(5, ctx.gpr[2] + 0u);
    ctx.set_gpr(25, rt.memory().aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(0)));
    ctx.set_gpr(25, rt.memory().aot_load32(ctx.gpr[25] + static_cast<std::uint32_t>(104)));
    jump_target = ctx.gpr[25];
    ctx.set_gpr(31, 0x08A5F858u);
    // nop
    ctx.pc = jump_target;
    if (rt.invoke_chained_call(ctx, &aot_mem) && ctx.pc == 0x08A5F858u) goto L_08A5F858;
    return;
L_08A5F858:
    ctx.set_gpr(31, rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(12)));
    ctx.set_gpr(29, ctx.gpr[29] + static_cast<std::uint32_t>(16));
    jump_target = ctx.gpr[31];
    // nop
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_08A5F868:
    ctx.set_gpr(29, ctx.gpr[29] + static_cast<std::uint32_t>(-16));
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(12), ctx.gpr[31]);
    ctx.set_gpr(4, ctx.gpr[4] + static_cast<std::uint32_t>(36));
    ctx.set_gpr(31, 0x08A5F87Cu);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0085_entry, 85u, 61u, 0x089584C4u>(ctx, &aot_mem) && ctx.pc == 0x08A5F87Cu) goto L_08A5F87C;
    return;
L_08A5F87C:
    ctx.set_gpr(31, rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(12)));
    ctx.set_gpr(29, ctx.gpr[29] + static_cast<std::uint32_t>(16));
    jump_target = ctx.gpr[31];
    // nop
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_08A5F88C:
    ctx.set_gpr(29, ctx.gpr[29] + static_cast<std::uint32_t>(-16));
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(12), ctx.gpr[31]);
    ctx.set_gpr(4, ctx.gpr[4] + static_cast<std::uint32_t>(40));
    ctx.set_gpr(31, 0x08A5F8A0u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0085_entry, 85u, 61u, 0x089584C4u>(ctx, &aot_mem) && ctx.pc == 0x08A5F8A0u) goto L_08A5F8A0;
    return;
L_08A5F8A0:
    ctx.set_gpr(31, rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(12)));
    ctx.set_gpr(29, ctx.gpr[29] + static_cast<std::uint32_t>(16));
    jump_target = ctx.gpr[31];
    // nop
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_08A5F8B0:
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
    ctx.set_gpr(20, ctx.gpr[5] + 0u);
    ctx.set_gpr(22, ctx.gpr[6] + 0u);
    ctx.set_gpr(4, rt.memory().aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(44)));
    ctx.set_gpr(19, rt.memory().aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(20)));
    ctx.set_gpr(1, static_cast<std::int32_t>(ctx.gpr[20]) < static_cast<std::int32_t>(ctx.gpr[19]) ? 1u : 0u);
    { const bool branch_taken = ctx.gpr[1] != 0u;
    // nop
      if (branch_taken) {
          goto L_08A5F980;
      }
      goto L_08A5F8F4;
    }
L_08A5F8F4:
    ctx.set_gpr(2, ctx.gpr[20] + static_cast<std::uint32_t>(1));
    rt.memory().aot_store32(ctx.gpr[4] + static_cast<std::uint32_t>(20), ctx.gpr[2]);
    ctx.set_gpr(2, ctx.gpr[2] + static_cast<std::uint32_t>(31));
    ctx.set_gpr(5, ctx.gpr[2] >> 5u);
    ctx.set_gpr(31, 0x08A5F90Cu);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0065_entry, 65u, 693u, 0x0890B034u>(ctx, &aot_mem) && ctx.pc == 0x08A5F90Cu) goto L_08A5F90C;
    return;
L_08A5F90C:
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_08A5F974;
      }
      goto L_08A5F914;
    }
L_08A5F914:
    ctx.set_gpr(18, rt.memory().aot_load32(ctx.gpr[21] + static_cast<std::uint32_t>(44)));
    ctx.set_gpr(17, ctx.gpr[19] >> 5u);
    ctx.set_gpr(16, ctx.gpr[17] << 2u);
    ctx.set_gpr(4, ctx.gpr[18] + 0u);
    ctx.set_gpr(31, 0x08A5F92Cu);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0015_entry, 15u, 454u, 0x088419CCu>(ctx, &aot_mem) && ctx.pc == 0x08A5F92Cu) goto L_08A5F92C;
    return;
L_08A5F92C:
    ctx.set_gpr(4, ctx.gpr[2] + ctx.gpr[16]);
    ctx.set_gpr(3, ctx.gpr[19] & 31u);
    ctx.set_gpr(2, 0u + static_cast<std::uint32_t>(1));
    ctx.set_gpr(3, ctx.gpr[2] << (ctx.gpr[3] & 31u));
    ctx.set_gpr(2, rt.memory().aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(0)));
    ctx.set_gpr(3, ctx.gpr[3] | ctx.gpr[2]);
    ctx.set_gpr(2, rt.memory().aot_load32(ctx.gpr[18] + static_cast<std::uint32_t>(8)));
    { const bool branch_taken = ctx.gpr[2] == 0u;
    // nop
      if (branch_taken) {
          goto L_08A5F970;
      }
      goto L_08A5F950;
    }
L_08A5F950:
    { const bool branch_taken = static_cast<std::int32_t>(ctx.gpr[17]) < 0;
    // nop
      if (branch_taken) {
          goto L_08A5F970;
      }
      goto L_08A5F958;
    }
L_08A5F958:
    ctx.set_gpr(1, static_cast<std::int32_t>(ctx.gpr[17]) < static_cast<std::int32_t>(ctx.gpr[2]) ? 1u : 0u);
    { const bool branch_taken = ctx.gpr[1] == 0u;
    // nop
      if (branch_taken) {
          goto L_08A5F970;
      }
      goto L_08A5F964;
    }
L_08A5F964:
    ctx.set_gpr(2, rt.memory().aot_load32(ctx.gpr[18] + static_cast<std::uint32_t>(16)));
    ctx.set_gpr(2, ctx.gpr[2] + ctx.gpr[16]);
    rt.memory().aot_store32(ctx.gpr[2] + static_cast<std::uint32_t>(0), ctx.gpr[3]);
    goto L_08A5F970;
L_08A5F970:
    ctx.set_gpr(19, ctx.gpr[19] + static_cast<std::uint32_t>(1));
    goto L_08A5F974;
L_08A5F974:
    ctx.set_gpr(1, static_cast<std::int32_t>(ctx.gpr[20]) < static_cast<std::int32_t>(ctx.gpr[19]) ? 1u : 0u);
    { const bool branch_taken = ctx.gpr[1] == 0u;
    // nop
      if (branch_taken) {
          goto L_08A5F914;
      }
      goto L_08A5F980;
    }
L_08A5F980:
    ctx.set_gpr(17, rt.memory().aot_load32(ctx.gpr[21] + static_cast<std::uint32_t>(44)));
    { const bool branch_taken = ctx.gpr[22] == 0u;
    // nop
      if (branch_taken) {
          goto L_08A5F9D8;
      }
      goto L_08A5F98C;
    }
L_08A5F98C:
    ctx.set_gpr(16, ctx.gpr[20] >> 5u);
    ctx.set_gpr(4, ctx.gpr[17] + 0u);
    ctx.set_gpr(31, 0x08A5F99Cu);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0015_entry, 15u, 454u, 0x088419CCu>(ctx, &aot_mem) && ctx.pc == 0x08A5F99Cu) goto L_08A5F99C;
    return;
L_08A5F99C:
    ctx.set_gpr(3, ctx.gpr[16] << 2u);
    ctx.set_gpr(4, ctx.gpr[2] + ctx.gpr[3]);
    ctx.set_gpr(3, ctx.gpr[20] & 31u);
    ctx.set_gpr(2, 0u + static_cast<std::uint32_t>(1));
    ctx.set_gpr(3, ctx.gpr[2] << (ctx.gpr[3] & 31u));
    ctx.set_gpr(2, rt.memory().aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(0)));
    ctx.set_gpr(2, ctx.gpr[3] | ctx.gpr[2]);
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(44), ctx.gpr[2]);
    ctx.set_gpr(4, ctx.gpr[17] + 0u);
    ctx.set_gpr(5, ctx.gpr[16] + 0u);
    ctx.set_gpr(6, ctx.gpr[29] + static_cast<std::uint32_t>(44));
    ctx.set_gpr(31, 0x08A5F9D0u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0065_entry, 65u, 698u, 0x0890B07Cu>(ctx, &aot_mem) && ctx.pc == 0x08A5F9D0u) goto L_08A5F9D0;
    return;
L_08A5F9D0:
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_08A5FA20;
      }
      goto L_08A5F9D8;
    }
L_08A5F9D8:
    ctx.set_gpr(16, ctx.gpr[20] >> 5u);
    ctx.set_gpr(4, ctx.gpr[17] + 0u);
    ctx.set_gpr(31, 0x08A5F9E8u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0015_entry, 15u, 454u, 0x088419CCu>(ctx, &aot_mem) && ctx.pc == 0x08A5F9E8u) goto L_08A5F9E8;
    return;
L_08A5F9E8:
    ctx.set_gpr(3, ctx.gpr[16] << 2u);
    ctx.set_gpr(4, ctx.gpr[2] + ctx.gpr[3]);
    ctx.set_gpr(3, ctx.gpr[20] & 31u);
    ctx.set_gpr(2, 0u + static_cast<std::uint32_t>(1));
    ctx.set_gpr(2, ctx.gpr[2] << (ctx.gpr[3] & 31u));
    ctx.set_gpr(3, ~(ctx.gpr[2] | 0u));
    ctx.set_gpr(2, rt.memory().aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(0)));
    ctx.set_gpr(2, ctx.gpr[3] & ctx.gpr[2]);
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(40), ctx.gpr[2]);
    ctx.set_gpr(4, ctx.gpr[17] + 0u);
    ctx.set_gpr(5, ctx.gpr[16] + 0u);
    ctx.set_gpr(6, ctx.gpr[29] + static_cast<std::uint32_t>(40));
    ctx.set_gpr(31, 0x08A5FA20u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0065_entry, 65u, 698u, 0x0890B07Cu>(ctx, &aot_mem) && ctx.pc == 0x08A5FA20u) goto L_08A5FA20;
    return;
L_08A5FA20:
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
L_08A5FA4C:
    ctx.set_gpr(29, ctx.gpr[29] + static_cast<std::uint32_t>(-16));
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(12), ctx.gpr[31]);
    ctx.set_gpr(4, rt.memory().aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(32)));
    ctx.set_gpr(31, 0x08A5FA60u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0081_entry, 81u, 299u, 0x089494E0u>(ctx, &aot_mem) && ctx.pc == 0x08A5FA60u) goto L_08A5FA60;
    return;
L_08A5FA60:
    ctx.set_gpr(2, 0u + 0u);
    ctx.set_gpr(31, rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(12)));
    ctx.set_gpr(29, ctx.gpr[29] + static_cast<std::uint32_t>(16));
    jump_target = ctx.gpr[31];
    // nop
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_08A5FA74:
    ctx.set_gpr(29, ctx.gpr[29] + static_cast<std::uint32_t>(-32));
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(28), ctx.gpr[31]);
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(24), ctx.gpr[20]);
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(20), ctx.gpr[19]);
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(16), ctx.gpr[18]);
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(12), ctx.gpr[17]);
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(8), ctx.gpr[16]);
    ctx.set_gpr(20, ctx.gpr[4] + 0u);
    ctx.set_gpr(19, ctx.gpr[5] + 0u);
    ctx.set_gpr(31, 0x08A5FAA0u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0153_entry, 153u, 374u, 0x08A6A118u>(ctx, &aot_mem) && ctx.pc == 0x08A5FAA0u) goto L_08A5FAA0;
    return;
L_08A5FAA0:
    ctx.set_gpr(16, ctx.gpr[2] + 0u);
    ctx.set_gpr(18, 0u + 0u);
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_08A5FAEC;
      }
      goto L_08A5FAB0;
    }
L_08A5FAB0:
    ctx.set_gpr(4, ctx.gpr[20] + 0u);
    ctx.set_gpr(5, ctx.gpr[18] + 0u);
    ctx.set_gpr(31, 0x08A5FAC0u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0153_entry, 153u, 375u, 0x08A6A128u>(ctx, &aot_mem) && ctx.pc == 0x08A5FAC0u) goto L_08A5FAC0;
    return;
L_08A5FAC0:
    ctx.set_gpr(17, ctx.gpr[2] + 0u);
    ctx.set_gpr(4, rt.memory().aot_load32(ctx.gpr[2] + static_cast<std::uint32_t>(8)));
    ctx.set_gpr(5, ctx.gpr[19] + 0u);
    ctx.set_gpr(31, 0x08A5FAD4u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0080_entry, 80u, 801u, 0x08947B00u>(ctx, &aot_mem) && ctx.pc == 0x08A5FAD4u) goto L_08A5FAD4;
    return;
L_08A5FAD4:
    { const bool branch_taken = ctx.gpr[2] == 0u;
    // nop
      if (branch_taken) {
          goto L_08A5FAE8;
      }
      goto L_08A5FADC;
    }
L_08A5FADC:
    ctx.set_gpr(2, ctx.gpr[17] + 0u);
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_08A5FAFC;
      }
      goto L_08A5FAE8;
    }
L_08A5FAE8:
    ctx.set_gpr(18, ctx.gpr[18] + static_cast<std::uint32_t>(1));
    goto L_08A5FAEC;
L_08A5FAEC:
    ctx.set_gpr(2, ctx.gpr[18] < ctx.gpr[16] ? 1u : 0u);
    { const bool branch_taken = ctx.gpr[2] != 0u;
    // nop
      if (branch_taken) {
          goto L_08A5FAB0;
      }
      goto L_08A5FAF8;
    }
L_08A5FAF8:
    ctx.set_gpr(2, 0u + 0u);
    goto L_08A5FAFC;
L_08A5FAFC:
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
L_08A5FB20:
    ctx.set_gpr(29, ctx.gpr[29] + static_cast<std::uint32_t>(-32));
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(28), ctx.gpr[31]);
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(24), ctx.gpr[19]);
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(20), ctx.gpr[18]);
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(16), ctx.gpr[17]);
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(12), ctx.gpr[16]);
    ctx.set_gpr(19, ctx.gpr[4] + 0u);
    ctx.set_gpr(18, ctx.gpr[5] + 0u);
    ctx.set_gpr(31, 0x08A5FB48u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0153_entry, 153u, 374u, 0x08A6A118u>(ctx, &aot_mem) && ctx.pc == 0x08A5FB48u) goto L_08A5FB48;
    return;
L_08A5FB48:
    ctx.set_gpr(16, ctx.gpr[2] + 0u);
    ctx.set_gpr(17, 0u + 0u);
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_08A5FBA0;
      }
      goto L_08A5FB58;
    }
L_08A5FB58:
    ctx.set_gpr(4, ctx.gpr[19] + 0u);
    ctx.set_gpr(5, ctx.gpr[17] + 0u);
    ctx.set_gpr(31, 0x08A5FB68u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0153_entry, 153u, 375u, 0x08A6A128u>(ctx, &aot_mem) && ctx.pc == 0x08A5FB68u) goto L_08A5FB68;
    return;
L_08A5FB68:
    ctx.set_gpr(4, rt.memory().aot_load32(ctx.gpr[2] + static_cast<std::uint32_t>(8)));
    ctx.set_gpr(5, ctx.gpr[18] + 0u);
    ctx.set_gpr(31, 0x08A5FB78u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0080_entry, 80u, 801u, 0x08947B00u>(ctx, &aot_mem) && ctx.pc == 0x08A5FB78u) goto L_08A5FB78;
    return;
L_08A5FB78:
    { const bool branch_taken = ctx.gpr[2] == 0u;
    // nop
      if (branch_taken) {
          goto L_08A5FB9C;
      }
      goto L_08A5FB80;
    }
L_08A5FB80:
    ctx.set_gpr(4, ctx.gpr[19] + 0u);
    ctx.set_gpr(5, ctx.gpr[17] + 0u);
    ctx.set_gpr(31, 0x08A5FB90u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0153_entry, 153u, 376u, 0x08A6A144u>(ctx, &aot_mem) && ctx.pc == 0x08A5FB90u) goto L_08A5FB90;
    return;
L_08A5FB90:
    ctx.set_gpr(2, 0u + 0u);
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_08A5FBB0;
      }
      goto L_08A5FB9C;
    }
L_08A5FB9C:
    ctx.set_gpr(17, ctx.gpr[17] + static_cast<std::uint32_t>(1));
    goto L_08A5FBA0;
L_08A5FBA0:
    ctx.set_gpr(2, ctx.gpr[17] < ctx.gpr[16] ? 1u : 0u);
    { const bool branch_taken = ctx.gpr[2] != 0u;
    // nop
      if (branch_taken) {
          goto L_08A5FB58;
      }
      goto L_08A5FBAC;
    }
L_08A5FBAC:
    ctx.set_gpr(2, 0u + static_cast<std::uint32_t>(1));
    goto L_08A5FBB0;
L_08A5FBB0:
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
L_08A5FBD0:
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
    ctx.set_gpr(22, ctx.gpr[4] + 0u);
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(80), ctx.gpr[5]);
    ctx.set_gpr(23, ctx.gpr[7] + 0u);
    ctx.set_gpr(21, ctx.gpr[8] + 0u);
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(76), ctx.gpr[9]);
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(72), ctx.gpr[10]);
    ctx.set_gpr(25, rt.memory().aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(0)));
    ctx.set_gpr(25, rt.memory().aot_load32(ctx.gpr[25] + static_cast<std::uint32_t>(96)));
    jump_target = ctx.gpr[25];
    ctx.set_gpr(31, 0x08A5FC24u);
    // nop
    ctx.pc = jump_target;
    if (rt.invoke_chained_call(ctx, &aot_mem) && ctx.pc == 0x08A5FC24u) goto L_08A5FC24;
    return;
L_08A5FC24:
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(68), ctx.gpr[2]);
    ctx.set_gpr(19, rt.memory().aot_load32(ctx.gpr[22] + static_cast<std::uint32_t>(20)));
    ctx.set_gpr(3, rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(72)));
    { const bool branch_taken = ctx.gpr[3] == 0u;
    // nop
      if (branch_taken) {
          goto L_08A5FC48;
      }
      goto L_08A5FC38;
    }
L_08A5FC38:
    ctx.set_gpr(3, rt.memory().aot_load32(ctx.gpr[3] + static_cast<std::uint32_t>(8)));
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(64), ctx.gpr[3]);
    { const bool branch_taken = ctx.gpr[3] != 0u;
    // nop
      if (branch_taken) {
          goto L_08A5FD00;
      }
      goto L_08A5FC48;
    }
L_08A5FC48:
    ctx.set_gpr(20, 0u + static_cast<std::uint32_t>(1));
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_08A5FCE8;
      }
      goto L_08A5FC54;
    }
L_08A5FC54:
    ctx.set_gpr(2, rt.memory().aot_load32(ctx.gpr[22] + static_cast<std::uint32_t>(16)));
    ctx.set_gpr(3, ctx.gpr[20] << 2u);
    ctx.set_gpr(2, rt.memory().aot_load32(ctx.gpr[2] + static_cast<std::uint32_t>(16)));
    ctx.set_gpr(2, ctx.gpr[2] + ctx.gpr[3]);
    ctx.set_gpr(17, rt.memory().aot_load32(ctx.gpr[2] + static_cast<std::uint32_t>(0)));
    ctx.set_gpr(3, rt.memory().aot_load32(ctx.gpr[17] + static_cast<std::uint32_t>(12)));
    { const bool branch_taken = ctx.gpr[3] != 0u;
    // nop
      if (branch_taken) {
          goto L_08A5FC94;
      }
      goto L_08A5FC74;
    }
L_08A5FC74:
    ctx.set_gpr(2, ctx.gpr[20] << 6u);
    ctx.set_gpr(16, ctx.gpr[21] + ctx.gpr[2]);
    ctx.set_gpr(5, ctx.gpr[23] + ctx.gpr[2]);
    ctx.set_gpr(4, ctx.gpr[16] + 0u);
    ctx.set_gpr(31, 0x08A5FC8Cu);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0126_entry, 126u, 747u, 0x089FFC4Cu>(ctx, &aot_mem) && ctx.pc == 0x08A5FC8Cu) goto L_08A5FC8C;
    return;
L_08A5FC8C:
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_08A5FCB4;
      }
      goto L_08A5FC94;
    }
L_08A5FC94:
    ctx.set_gpr(2, ctx.gpr[20] << 6u);
    ctx.set_gpr(16, ctx.gpr[21] + ctx.gpr[2]);
    ctx.set_gpr(5, ctx.gpr[23] + ctx.gpr[2]);
    ctx.set_gpr(2, ctx.gpr[3] << 6u);
    ctx.set_gpr(6, ctx.gpr[21] + ctx.gpr[2]);
    ctx.set_gpr(4, ctx.gpr[16] + 0u);
    ctx.set_gpr(31, 0x08A5FCB4u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0126_entry, 126u, 727u, 0x089FF9E0u>(ctx, &aot_mem) && ctx.pc == 0x08A5FCB4u) goto L_08A5FCB4;
    return;
L_08A5FCB4:
    ctx.set_gpr(4, rt.memory().aot_load32(ctx.gpr[17] + static_cast<std::uint32_t>(16)));
    ctx.set_gpr(3, 0u + static_cast<std::uint32_t>(-1));
    { const bool branch_taken = ctx.gpr[4] == ctx.gpr[3];
    // nop
      if (branch_taken) {
          goto L_08A5FCE4;
      }
      goto L_08A5FCC4;
    }
L_08A5FCC4:
    ctx.set_gpr(3, ctx.gpr[4] << 6u);
    ctx.set_gpr(2, rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(76)));
    ctx.set_gpr(4, ctx.gpr[2] + ctx.gpr[3]);
    ctx.set_gpr(5, ctx.gpr[19] + 0u);
    ctx.set_gpr(6, ctx.gpr[16] + 0u);
    ctx.set_gpr(31, 0x08A5FCE0u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0126_entry, 126u, 727u, 0x089FF9E0u>(ctx, &aot_mem) && ctx.pc == 0x08A5FCE0u) goto L_08A5FCE0;
    return;
L_08A5FCE0:
    ctx.set_gpr(19, ctx.gpr[19] + static_cast<std::uint32_t>(64));
    goto L_08A5FCE4;
L_08A5FCE4:
    ctx.set_gpr(20, ctx.gpr[20] + static_cast<std::uint32_t>(1));
    goto L_08A5FCE8;
L_08A5FCE8:
    ctx.set_gpr(3, rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(68)));
    ctx.set_gpr(3, static_cast<std::int32_t>(ctx.gpr[20]) < static_cast<std::int32_t>(ctx.gpr[3]) ? 1u : 0u);
    { const bool branch_taken = ctx.gpr[3] != 0u;
    // nop
      if (branch_taken) {
          goto L_08A5FC54;
      }
      goto L_08A5FCF8;
    }
L_08A5FCF8:
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_08A5FEF0;
      }
      goto L_08A5FD00;
    }
L_08A5FD00:
    ctx.set_gpr(20, 0u + static_cast<std::uint32_t>(1));
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_08A5FEE0;
      }
      goto L_08A5FD0C;
    }
L_08A5FD0C:
    ctx.set_gpr(2, rt.memory().aot_load32(ctx.gpr[22] + static_cast<std::uint32_t>(16)));
    ctx.set_gpr(3, ctx.gpr[20] << 2u);
    ctx.set_gpr(2, rt.memory().aot_load32(ctx.gpr[2] + static_cast<std::uint32_t>(16)));
    ctx.set_gpr(2, ctx.gpr[2] + ctx.gpr[3]);
    ctx.set_gpr(2, rt.memory().aot_load32(ctx.gpr[2] + static_cast<std::uint32_t>(0)));
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(60), ctx.gpr[2]);
    ctx.set_gpr(30, ctx.gpr[20] << 6u);
    ctx.set_gpr(5, ctx.gpr[23] + ctx.gpr[30]);
    ctx.set_gpr(4, ctx.gpr[29] + static_cast<std::uint32_t>(96));
    ctx.set_gpr(31, 0x08A5FD38u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0126_entry, 126u, 747u, 0x089FFC4Cu>(ctx, &aot_mem) && ctx.pc == 0x08A5FD38u) goto L_08A5FD38;
    return;
L_08A5FD38:
    ctx.set_gpr(18, 0u + 0u);
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_08A5FE50;
      }
      goto L_08A5FD44;
    }
L_08A5FD44:
    ctx.set_gpr(3, ctx.gpr[18] << 2u);
    ctx.set_gpr(2, rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(72)));
    ctx.set_gpr(2, rt.memory().aot_load32(ctx.gpr[2] + static_cast<std::uint32_t>(16)));
    ctx.set_gpr(2, ctx.gpr[2] + ctx.gpr[3]);
    ctx.set_gpr(16, rt.memory().aot_load32(ctx.gpr[2] + static_cast<std::uint32_t>(0)));
    ctx.set_gpr(2, rt.memory().aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(8)));
    { const bool branch_taken = ctx.gpr[20] != ctx.gpr[2];
    // nop
      if (branch_taken) {
          goto L_08A5FE4C;
      }
      goto L_08A5FD64;
    }
L_08A5FD64:
    ctx.set_gpr(17, rt.memory().aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(12)));
    ctx.set_gpr(4, rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(80)));
    ctx.set_gpr(2, ctx.gpr[4] + 0u);
    ctx.set_gpr(25, rt.memory().aot_load32(ctx.gpr[2] + static_cast<std::uint32_t>(0)));
    ctx.set_gpr(25, rt.memory().aot_load32(ctx.gpr[25] + static_cast<std::uint32_t>(104)));
    jump_target = ctx.gpr[25];
    ctx.set_gpr(31, 0x08A5FD80u);
    // nop
    ctx.pc = jump_target;
    if (rt.invoke_chained_call(ctx, &aot_mem) && ctx.pc == 0x08A5FD80u) goto L_08A5FD80;
    return;
L_08A5FD80:
    ctx.set_gpr(4, ctx.gpr[17] + 0u);
    ctx.set_gpr(6, ctx.gpr[2] + 0u);
    ctx.set_gpr(7, ctx.gpr[3] + 0u);
    ctx.set_gpr(25, rt.memory().aot_load32(ctx.gpr[17] + static_cast<std::uint32_t>(0)));
    ctx.set_gpr(25, rt.memory().aot_load32(ctx.gpr[25] + static_cast<std::uint32_t>(156)));
    jump_target = ctx.gpr[25];
    ctx.set_gpr(31, 0x08A5FD9Cu);
    // nop
    ctx.pc = jump_target;
    if (rt.invoke_chained_call(ctx, &aot_mem) && ctx.pc == 0x08A5FD9Cu) goto L_08A5FD9C;
    return;
L_08A5FD9C:
    ctx.set_gpr(2, rt.memory().aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(12)));
    ctx.set_gpr(17, ctx.gpr[2] + static_cast<std::uint32_t>(32));
    ctx.set_gpr(3, rt.memory().aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(16)));
    ctx.set_gpr(2, 0u + static_cast<std::uint32_t>(2));
    { const bool branch_taken = ctx.gpr[3] != ctx.gpr[2];
    // nop
      if (branch_taken) {
          goto L_08A5FDC4;
      }
      goto L_08A5FDB4;
    }
L_08A5FDB4:
    ctx.set_gpr(4, ctx.gpr[29] + static_cast<std::uint32_t>(96));
    ctx.set_gpr(5, ctx.gpr[17] + 0u);
    ctx.set_gpr(31, 0x08A5FDC4u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0126_entry, 126u, 747u, 0x089FFC4Cu>(ctx, &aot_mem) && ctx.pc == 0x08A5FDC4u) goto L_08A5FDC4;
    return;
L_08A5FDC4:
    ctx.set_gpr(3, rt.memory().aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(16)));
    ctx.set_gpr(2, 0u + static_cast<std::uint32_t>(3));
    { const bool branch_taken = ctx.gpr[3] != ctx.gpr[2];
    // nop
      if (branch_taken) {
          goto L_08A5FE0C;
      }
      goto L_08A5FDD4;
    }
L_08A5FDD4:
    ctx.set_gpr(4, ctx.gpr[29] + static_cast<std::uint32_t>(96));
    ctx.set_gpr(5, ctx.gpr[29] + static_cast<std::uint32_t>(84));
    ctx.set_gpr(31, 0x08A5FDE4u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0126_entry, 126u, 750u, 0x089FFD4Cu>(ctx, &aot_mem) && ctx.pc == 0x08A5FDE4u) goto L_08A5FDE4;
    return;
L_08A5FDE4:
    ctx.set_gpr(4, ctx.gpr[29] + static_cast<std::uint32_t>(96));
    ctx.set_gpr(5, ctx.gpr[17] + 0u);
    ctx.set_gpr(31, 0x08A5FDF4u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0126_entry, 126u, 747u, 0x089FFC4Cu>(ctx, &aot_mem) && ctx.pc == 0x08A5FDF4u) goto L_08A5FDF4;
    return;
L_08A5FDF4:
    ctx.set_gpr(4, ctx.gpr[29] + static_cast<std::uint32_t>(96));
    ctx.set_gpr(5, ctx.gpr[29] + static_cast<std::uint32_t>(84));
    ctx.set_gpr(31, 0x08A5FE04u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0126_entry, 126u, 749u, 0x089FFD2Cu>(ctx, &aot_mem) && ctx.pc == 0x08A5FE04u) goto L_08A5FE04;
    return;
L_08A5FE04:
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_08A5FE4C;
      }
      goto L_08A5FE0C;
    }
L_08A5FE0C:
    { const bool branch_taken = ctx.gpr[3] != 0u;
    // nop
      if (branch_taken) {
          goto L_08A5FE2C;
      }
      goto L_08A5FE14;
    }
L_08A5FE14:
    ctx.set_gpr(4, ctx.gpr[29] + static_cast<std::uint32_t>(96));
    ctx.set_gpr(5, ctx.gpr[17] + 0u);
    ctx.set_gpr(31, 0x08A5FE24u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0126_entry, 126u, 737u, 0x089FFB18u>(ctx, &aot_mem) && ctx.pc == 0x08A5FE24u) goto L_08A5FE24;
    return;
L_08A5FE24:
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_08A5FE4C;
      }
      goto L_08A5FE2C;
    }
L_08A5FE2C:
    ctx.set_gpr(2, 0u + static_cast<std::uint32_t>(1));
    { const bool branch_taken = ctx.gpr[3] != ctx.gpr[2];
    // nop
      if (branch_taken) {
          goto L_08A5FE4C;
      }
      goto L_08A5FE38;
    }
L_08A5FE38:
    ctx.set_gpr(4, ctx.gpr[29] + static_cast<std::uint32_t>(96));
    ctx.set_gpr(5, ctx.gpr[4] + 0u);
    ctx.set_gpr(6, ctx.gpr[17] + 0u);
    ctx.set_gpr(31, 0x08A5FE4Cu);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0126_entry, 126u, 727u, 0x089FF9E0u>(ctx, &aot_mem) && ctx.pc == 0x08A5FE4Cu) goto L_08A5FE4C;
    return;
L_08A5FE4C:
    ctx.set_gpr(18, ctx.gpr[18] + static_cast<std::uint32_t>(1));
    goto L_08A5FE50;
L_08A5FE50:
    ctx.set_gpr(2, rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(64)));
    ctx.set_gpr(2, static_cast<std::int32_t>(ctx.gpr[18]) < static_cast<std::int32_t>(ctx.gpr[2]) ? 1u : 0u);
    { const bool branch_taken = ctx.gpr[2] != 0u;
    // nop
      if (branch_taken) {
          goto L_08A5FD44;
      }
      goto L_08A5FE60;
    }
L_08A5FE60:
    ctx.set_gpr(2, rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(60)));
    ctx.set_gpr(2, rt.memory().aot_load32(ctx.gpr[2] + static_cast<std::uint32_t>(12)));
    { const bool branch_taken = ctx.gpr[2] == 0u;
    // nop
      if (branch_taken) {
          goto L_08A5FE94;
      }
      goto L_08A5FE70;
    }
L_08A5FE70:
    ctx.set_gpr(16, ctx.gpr[21] + ctx.gpr[30]);
    ctx.set_gpr(2, ctx.gpr[2] << 6u);
    ctx.set_gpr(6, ctx.gpr[21] + ctx.gpr[2]);
    ctx.set_gpr(4, ctx.gpr[16] + 0u);
    ctx.set_gpr(5, ctx.gpr[29] + static_cast<std::uint32_t>(96));
    ctx.set_gpr(31, 0x08A5FE8Cu);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0126_entry, 126u, 727u, 0x089FF9E0u>(ctx, &aot_mem) && ctx.pc == 0x08A5FE8Cu) goto L_08A5FE8C;
    return;
L_08A5FE8C:
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_08A5FEA8;
      }
      goto L_08A5FE94;
    }
L_08A5FE94:
    ctx.set_gpr(16, ctx.gpr[21] + ctx.gpr[30]);
    ctx.set_gpr(4, ctx.gpr[16] + 0u);
    ctx.set_gpr(5, ctx.gpr[29] + static_cast<std::uint32_t>(96));
    ctx.set_gpr(31, 0x08A5FEA8u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0126_entry, 126u, 747u, 0x089FFC4Cu>(ctx, &aot_mem) && ctx.pc == 0x08A5FEA8u) goto L_08A5FEA8;
    return;
L_08A5FEA8:
    ctx.set_gpr(3, rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(60)));
    ctx.set_gpr(4, rt.memory().aot_load32(ctx.gpr[3] + static_cast<std::uint32_t>(16)));
    ctx.set_gpr(3, 0u + static_cast<std::uint32_t>(-1));
    { const bool branch_taken = ctx.gpr[4] == ctx.gpr[3];
    // nop
      if (branch_taken) {
          goto L_08A5FEDC;
      }
      goto L_08A5FEBC;
    }
L_08A5FEBC:
    ctx.set_gpr(3, ctx.gpr[4] << 6u);
    ctx.set_gpr(2, rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(76)));
    ctx.set_gpr(4, ctx.gpr[2] + ctx.gpr[3]);
    ctx.set_gpr(5, ctx.gpr[19] + 0u);
    ctx.set_gpr(6, ctx.gpr[16] + 0u);
    ctx.set_gpr(31, 0x08A5FED8u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0126_entry, 126u, 727u, 0x089FF9E0u>(ctx, &aot_mem) && ctx.pc == 0x08A5FED8u) goto L_08A5FED8;
    return;
L_08A5FED8:
    ctx.set_gpr(19, ctx.gpr[19] + static_cast<std::uint32_t>(64));
    goto L_08A5FEDC;
L_08A5FEDC:
    ctx.set_gpr(20, ctx.gpr[20] + static_cast<std::uint32_t>(1));
    goto L_08A5FEE0;
L_08A5FEE0:
    ctx.set_gpr(3, rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(68)));
    ctx.set_gpr(3, static_cast<std::int32_t>(ctx.gpr[20]) < static_cast<std::int32_t>(ctx.gpr[3]) ? 1u : 0u);
    { const bool branch_taken = ctx.gpr[3] != 0u;
    // nop
      if (branch_taken) {
          goto L_08A5FD0C;
      }
      goto L_08A5FEF0;
    }
L_08A5FEF0:
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
L_08A5FF24:
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
          goto L_08A5FFA4;
      }
      goto L_08A5FF4C;
    }
L_08A5FF4C:
    ctx.set_gpr(3, ctx.gpr[16] << 2u);
    ctx.set_gpr(2, rt.memory().aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(16)));
    ctx.set_gpr(2, ctx.gpr[2] + ctx.gpr[3]);
    ctx.set_gpr(2, rt.memory().aot_load32(ctx.gpr[2] + static_cast<std::uint32_t>(0)));
    ctx.set_gpr(3, rt.memory().aot_load32(ctx.gpr[2] + static_cast<std::uint32_t>(8)));
    ctx.set_gpr(2, 0u + static_cast<std::uint32_t>(-2));
    ctx.set_gpr(4, ctx.gpr[3] & ctx.gpr[2]);
    { const bool branch_taken = ctx.gpr[4] == 0u;
    // nop
      if (branch_taken) {
          goto L_08A5FF78;
      }
      goto L_08A5FF70;
    }
L_08A5FF70:
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_08A5FF80;
      }
      goto L_08A5FF78;
    }
L_08A5FF78:
    ctx.set_gpr(4, 2225u << 16u);
    ctx.set_gpr(4, ctx.gpr[4] + static_cast<std::uint32_t>(8240));
    goto L_08A5FF80;
L_08A5FF80:
    ctx.set_gpr(5, ctx.gpr[17] + 0u);
    ctx.set_gpr(31, 0x08A5FF8Cu);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0004_entry, 4u, 449u, 0x08816370u>(ctx, &aot_mem) && ctx.pc == 0x08A5FF8Cu) goto L_08A5FF8C;
    return;
L_08A5FF8C:
    { const bool branch_taken = ctx.gpr[2] != 0u;
    // nop
      if (branch_taken) {
          goto L_08A5FFA0;
      }
      goto L_08A5FF94;
    }
L_08A5FF94:
    ctx.set_gpr(2, ctx.gpr[16] + 0u);
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_08A5FFBC;
      }
      goto L_08A5FFA0;
    }
L_08A5FFA0:
    ctx.set_gpr(16, ctx.gpr[16] + static_cast<std::uint32_t>(1));
    goto L_08A5FFA4;
L_08A5FFA4:
    ctx.set_gpr(4, rt.memory().aot_load32(ctx.gpr[18] + static_cast<std::uint32_t>(16)));
    ctx.set_gpr(2, rt.memory().aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(8)));
    ctx.set_gpr(2, static_cast<std::int32_t>(ctx.gpr[16]) < static_cast<std::int32_t>(ctx.gpr[2]) ? 1u : 0u);
    { const bool branch_taken = ctx.gpr[2] != 0u;
    // nop
      if (branch_taken) {
          goto L_08A5FF4C;
      }
      goto L_08A5FFB8;
    }
L_08A5FFB8:
    ctx.set_gpr(2, 0u + static_cast<std::uint32_t>(-1));
    goto L_08A5FFBC;
L_08A5FFBC:
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
L_08A5FFD8:
    ctx.set_gpr(29, ctx.gpr[29] + static_cast<std::uint32_t>(-32));
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(28), ctx.gpr[31]);
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(24), ctx.gpr[19]);
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(20), ctx.gpr[18]);
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(16), ctx.gpr[17]);
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(12), ctx.gpr[16]);
    ctx.set_gpr(18, ctx.gpr[4] + 0u);
    ctx.set_gpr(17, ctx.gpr[5] + 0u);
    ctx.set_gpr(16, ctx.gpr[6] + 0u);
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          (void)rt.invoke_chained_direct<&recomp_unit_0151_entry, 151u, 4u, 0x08A60040u>(ctx, &aot_mem); return;
      }
      (void)rt.invoke_chained_direct<&recomp_unit_0151_entry, 151u, 2u, 0x08A60004u>(ctx, &aot_mem); return;
    }
}

void recomp_unit_0150(Runtime &rt, AllegrexContext &ctx) {
    auto aot_mem = rt.memory().aot_fast_view();
    recomp_unit_0150_entry(rt, ctx, 0u, aot_mem);
}

void register_generated_unit_150(Runtime &runtime) {
    runtime.register_generated_unit(150u, 0x08A5C000u, 16384u, &recomp_unit_0150, &recomp_unit_0150_entry);
    runtime.register_function(0x08A5C000u, &recomp_unit_0150, "recomp_unit_0150");
    runtime.register_function(0x08A5C014u, &recomp_unit_0150, "recomp_unit_0150");
    runtime.register_function(0x08A5C030u, &recomp_unit_0150, "recomp_unit_0150");
    runtime.register_function(0x08A5C064u, &recomp_unit_0150, "recomp_unit_0150");
    runtime.register_function(0x08A5C06Cu, &recomp_unit_0150, "recomp_unit_0150");
    runtime.register_function(0x08A5C080u, &recomp_unit_0150, "recomp_unit_0150");
    runtime.register_function(0x08A5C090u, &recomp_unit_0150, "recomp_unit_0150");
    runtime.register_function(0x08A5C0A4u, &recomp_unit_0150, "recomp_unit_0150");
    runtime.register_function(0x08A5C0B8u, &recomp_unit_0150, "recomp_unit_0150");
    runtime.register_function(0x08A5C0C8u, &recomp_unit_0150, "recomp_unit_0150");
    runtime.register_function(0x08A5C0DCu, &recomp_unit_0150, "recomp_unit_0150");
    runtime.register_function(0x08A5C0F0u, &recomp_unit_0150, "recomp_unit_0150");
    runtime.register_function(0x08A5C104u, &recomp_unit_0150, "recomp_unit_0150");
    runtime.register_function(0x08A5C118u, &recomp_unit_0150, "recomp_unit_0150");
    runtime.register_function(0x08A5C128u, &recomp_unit_0150, "recomp_unit_0150");
    runtime.register_function(0x08A5C13Cu, &recomp_unit_0150, "recomp_unit_0150");
    runtime.register_function(0x08A5C150u, &recomp_unit_0150, "recomp_unit_0150");
    runtime.register_function(0x08A5C164u, &recomp_unit_0150, "recomp_unit_0150");
    runtime.register_function(0x08A5C178u, &recomp_unit_0150, "recomp_unit_0150");
    runtime.register_function(0x08A5C188u, &recomp_unit_0150, "recomp_unit_0150");
    runtime.register_function(0x08A5C19Cu, &recomp_unit_0150, "recomp_unit_0150");
    runtime.register_function(0x08A5C1B0u, &recomp_unit_0150, "recomp_unit_0150");
    runtime.register_function(0x08A5C1C0u, &recomp_unit_0150, "recomp_unit_0150");
    runtime.register_function(0x08A5C1D4u, &recomp_unit_0150, "recomp_unit_0150");
    runtime.register_function(0x08A5C1F4u, &recomp_unit_0150, "recomp_unit_0150");
    runtime.register_function(0x08A5C22Cu, &recomp_unit_0150, "recomp_unit_0150");
    runtime.register_function(0x08A5C238u, &recomp_unit_0150, "recomp_unit_0150");
    runtime.register_function(0x08A5C244u, &recomp_unit_0150, "recomp_unit_0150");
    runtime.register_function(0x08A5C258u, &recomp_unit_0150, "recomp_unit_0150");
    runtime.register_function(0x08A5C260u, &recomp_unit_0150, "recomp_unit_0150");
    runtime.register_function(0x08A5C274u, &recomp_unit_0150, "recomp_unit_0150");
    runtime.register_function(0x08A5C290u, &recomp_unit_0150, "recomp_unit_0150");
    runtime.register_function(0x08A5C2B8u, &recomp_unit_0150, "recomp_unit_0150");
    runtime.register_function(0x08A5C2C4u, &recomp_unit_0150, "recomp_unit_0150");
    runtime.register_function(0x08A5C2D0u, &recomp_unit_0150, "recomp_unit_0150");
    runtime.register_function(0x08A5C2D4u, &recomp_unit_0150, "recomp_unit_0150");
    runtime.register_function(0x08A5C2DCu, &recomp_unit_0150, "recomp_unit_0150");
    runtime.register_function(0x08A5C2F4u, &recomp_unit_0150, "recomp_unit_0150");
    runtime.register_function(0x08A5C324u, &recomp_unit_0150, "recomp_unit_0150");
    runtime.register_function(0x08A5C334u, &recomp_unit_0150, "recomp_unit_0150");
    runtime.register_function(0x08A5C344u, &recomp_unit_0150, "recomp_unit_0150");
    runtime.register_function(0x08A5C354u, &recomp_unit_0150, "recomp_unit_0150");
    runtime.register_function(0x08A5C36Cu, &recomp_unit_0150, "recomp_unit_0150");
    runtime.register_function(0x08A5C37Cu, &recomp_unit_0150, "recomp_unit_0150");
    runtime.register_function(0x08A5C390u, &recomp_unit_0150, "recomp_unit_0150");
    runtime.register_function(0x08A5C3A4u, &recomp_unit_0150, "recomp_unit_0150");
    runtime.register_function(0x08A5C3B8u, &recomp_unit_0150, "recomp_unit_0150");
    runtime.register_function(0x08A5C3C8u, &recomp_unit_0150, "recomp_unit_0150");
    runtime.register_function(0x08A5C3D8u, &recomp_unit_0150, "recomp_unit_0150");
    runtime.register_function(0x08A5C3E4u, &recomp_unit_0150, "recomp_unit_0150");
    runtime.register_function(0x08A5C3F4u, &recomp_unit_0150, "recomp_unit_0150");
    runtime.register_function(0x08A5C404u, &recomp_unit_0150, "recomp_unit_0150");
    runtime.register_function(0x08A5C414u, &recomp_unit_0150, "recomp_unit_0150");
    runtime.register_function(0x08A5C424u, &recomp_unit_0150, "recomp_unit_0150");
    runtime.register_function(0x08A5C430u, &recomp_unit_0150, "recomp_unit_0150");
    runtime.register_function(0x08A5C440u, &recomp_unit_0150, "recomp_unit_0150");
    runtime.register_function(0x08A5C450u, &recomp_unit_0150, "recomp_unit_0150");
    runtime.register_function(0x08A5C460u, &recomp_unit_0150, "recomp_unit_0150");
    runtime.register_function(0x08A5C474u, &recomp_unit_0150, "recomp_unit_0150");
    runtime.register_function(0x08A5C484u, &recomp_unit_0150, "recomp_unit_0150");
    runtime.register_function(0x08A5C494u, &recomp_unit_0150, "recomp_unit_0150");
    runtime.register_function(0x08A5C4A8u, &recomp_unit_0150, "recomp_unit_0150");
    runtime.register_function(0x08A5C4BCu, &recomp_unit_0150, "recomp_unit_0150");
    runtime.register_function(0x08A5C4C8u, &recomp_unit_0150, "recomp_unit_0150");
    runtime.register_function(0x08A5C4D4u, &recomp_unit_0150, "recomp_unit_0150");
    runtime.register_function(0x08A5C4E0u, &recomp_unit_0150, "recomp_unit_0150");
    runtime.register_function(0x08A5C4F0u, &recomp_unit_0150, "recomp_unit_0150");
    runtime.register_function(0x08A5C500u, &recomp_unit_0150, "recomp_unit_0150");
    runtime.register_function(0x08A5C510u, &recomp_unit_0150, "recomp_unit_0150");
    runtime.register_function(0x08A5C528u, &recomp_unit_0150, "recomp_unit_0150");
    runtime.register_function(0x08A5C53Cu, &recomp_unit_0150, "recomp_unit_0150");
    runtime.register_function(0x08A5C550u, &recomp_unit_0150, "recomp_unit_0150");
    runtime.register_function(0x08A5C564u, &recomp_unit_0150, "recomp_unit_0150");
    runtime.register_function(0x08A5C578u, &recomp_unit_0150, "recomp_unit_0150");
    runtime.register_function(0x08A5C588u, &recomp_unit_0150, "recomp_unit_0150");
    runtime.register_function(0x08A5C59Cu, &recomp_unit_0150, "recomp_unit_0150");
    runtime.register_function(0x08A5C5ACu, &recomp_unit_0150, "recomp_unit_0150");
    runtime.register_function(0x08A5C5BCu, &recomp_unit_0150, "recomp_unit_0150");
    runtime.register_function(0x08A5C5D0u, &recomp_unit_0150, "recomp_unit_0150");
    runtime.register_function(0x08A5C5E8u, &recomp_unit_0150, "recomp_unit_0150");
    runtime.register_function(0x08A5C5FCu, &recomp_unit_0150, "recomp_unit_0150");
    runtime.register_function(0x08A5C60Cu, &recomp_unit_0150, "recomp_unit_0150");
    runtime.register_function(0x08A5C61Cu, &recomp_unit_0150, "recomp_unit_0150");
    runtime.register_function(0x08A5C630u, &recomp_unit_0150, "recomp_unit_0150");
    runtime.register_function(0x08A5C640u, &recomp_unit_0150, "recomp_unit_0150");
    runtime.register_function(0x08A5C654u, &recomp_unit_0150, "recomp_unit_0150");
    runtime.register_function(0x08A5C668u, &recomp_unit_0150, "recomp_unit_0150");
    runtime.register_function(0x08A5C67Cu, &recomp_unit_0150, "recomp_unit_0150");
    runtime.register_function(0x08A5C690u, &recomp_unit_0150, "recomp_unit_0150");
    runtime.register_function(0x08A5C6A0u, &recomp_unit_0150, "recomp_unit_0150");
    runtime.register_function(0x08A5C6B0u, &recomp_unit_0150, "recomp_unit_0150");
    runtime.register_function(0x08A5C6C0u, &recomp_unit_0150, "recomp_unit_0150");
    runtime.register_function(0x08A5C6CCu, &recomp_unit_0150, "recomp_unit_0150");
    runtime.register_function(0x08A5C6D0u, &recomp_unit_0150, "recomp_unit_0150");
    runtime.register_function(0x08A5C6ECu, &recomp_unit_0150, "recomp_unit_0150");
    runtime.register_function(0x08A5C718u, &recomp_unit_0150, "recomp_unit_0150");
    runtime.register_function(0x08A5C728u, &recomp_unit_0150, "recomp_unit_0150");
    runtime.register_function(0x08A5C73Cu, &recomp_unit_0150, "recomp_unit_0150");
    runtime.register_function(0x08A5C74Cu, &recomp_unit_0150, "recomp_unit_0150");
    runtime.register_function(0x08A5C758u, &recomp_unit_0150, "recomp_unit_0150");
    runtime.register_function(0x08A5C770u, &recomp_unit_0150, "recomp_unit_0150");
    runtime.register_function(0x08A5C794u, &recomp_unit_0150, "recomp_unit_0150");
    runtime.register_function(0x08A5C7A8u, &recomp_unit_0150, "recomp_unit_0150");
    runtime.register_function(0x08A5C7BCu, &recomp_unit_0150, "recomp_unit_0150");
    runtime.register_function(0x08A5C7D4u, &recomp_unit_0150, "recomp_unit_0150");
    runtime.register_function(0x08A5C800u, &recomp_unit_0150, "recomp_unit_0150");
    runtime.register_function(0x08A5C80Cu, &recomp_unit_0150, "recomp_unit_0150");
    runtime.register_function(0x08A5C810u, &recomp_unit_0150, "recomp_unit_0150");
    runtime.register_function(0x08A5C81Cu, &recomp_unit_0150, "recomp_unit_0150");
    runtime.register_function(0x08A5C83Cu, &recomp_unit_0150, "recomp_unit_0150");
    runtime.register_function(0x08A5C840u, &recomp_unit_0150, "recomp_unit_0150");
    runtime.register_function(0x08A5C84Cu, &recomp_unit_0150, "recomp_unit_0150");
    runtime.register_function(0x08A5C86Cu, &recomp_unit_0150, "recomp_unit_0150");
    runtime.register_function(0x08A5C898u, &recomp_unit_0150, "recomp_unit_0150");
    runtime.register_function(0x08A5C8A0u, &recomp_unit_0150, "recomp_unit_0150");
    runtime.register_function(0x08A5C8B8u, &recomp_unit_0150, "recomp_unit_0150");
    runtime.register_function(0x08A5C8C0u, &recomp_unit_0150, "recomp_unit_0150");
    runtime.register_function(0x08A5C8D8u, &recomp_unit_0150, "recomp_unit_0150");
    runtime.register_function(0x08A5C8E8u, &recomp_unit_0150, "recomp_unit_0150");
    runtime.register_function(0x08A5C900u, &recomp_unit_0150, "recomp_unit_0150");
    runtime.register_function(0x08A5C988u, &recomp_unit_0150, "recomp_unit_0150");
    runtime.register_function(0x08A5C9A0u, &recomp_unit_0150, "recomp_unit_0150");
    runtime.register_function(0x08A5C9B4u, &recomp_unit_0150, "recomp_unit_0150");
    runtime.register_function(0x08A5C9D4u, &recomp_unit_0150, "recomp_unit_0150");
    runtime.register_function(0x08A5C9D8u, &recomp_unit_0150, "recomp_unit_0150");
    runtime.register_function(0x08A5C9E4u, &recomp_unit_0150, "recomp_unit_0150");
    runtime.register_function(0x08A5C9F8u, &recomp_unit_0150, "recomp_unit_0150");
    runtime.register_function(0x08A5CA0Cu, &recomp_unit_0150, "recomp_unit_0150");
    runtime.register_function(0x08A5CA40u, &recomp_unit_0150, "recomp_unit_0150");
    runtime.register_function(0x08A5CA6Cu, &recomp_unit_0150, "recomp_unit_0150");
    runtime.register_function(0x08A5CA80u, &recomp_unit_0150, "recomp_unit_0150");
    runtime.register_function(0x08A5CA94u, &recomp_unit_0150, "recomp_unit_0150");
    runtime.register_function(0x08A5CAA0u, &recomp_unit_0150, "recomp_unit_0150");
    runtime.register_function(0x08A5CAC4u, &recomp_unit_0150, "recomp_unit_0150");
    runtime.register_function(0x08A5CAE8u, &recomp_unit_0150, "recomp_unit_0150");
    runtime.register_function(0x08A5CB00u, &recomp_unit_0150, "recomp_unit_0150");
    runtime.register_function(0x08A5CB14u, &recomp_unit_0150, "recomp_unit_0150");
    runtime.register_function(0x08A5CB30u, &recomp_unit_0150, "recomp_unit_0150");
    runtime.register_function(0x08A5CB90u, &recomp_unit_0150, "recomp_unit_0150");
    runtime.register_function(0x08A5CB9Cu, &recomp_unit_0150, "recomp_unit_0150");
    runtime.register_function(0x08A5CBC0u, &recomp_unit_0150, "recomp_unit_0150");
    runtime.register_function(0x08A5CBC8u, &recomp_unit_0150, "recomp_unit_0150");
    runtime.register_function(0x08A5CC00u, &recomp_unit_0150, "recomp_unit_0150");
    runtime.register_function(0x08A5CC18u, &recomp_unit_0150, "recomp_unit_0150");
    runtime.register_function(0x08A5CC30u, &recomp_unit_0150, "recomp_unit_0150");
    runtime.register_function(0x08A5CC4Cu, &recomp_unit_0150, "recomp_unit_0150");
    runtime.register_function(0x08A5CC64u, &recomp_unit_0150, "recomp_unit_0150");
    runtime.register_function(0x08A5CC7Cu, &recomp_unit_0150, "recomp_unit_0150");
    runtime.register_function(0x08A5CCA0u, &recomp_unit_0150, "recomp_unit_0150");
    runtime.register_function(0x08A5CCA8u, &recomp_unit_0150, "recomp_unit_0150");
    runtime.register_function(0x08A5CCB4u, &recomp_unit_0150, "recomp_unit_0150");
    runtime.register_function(0x08A5CCBCu, &recomp_unit_0150, "recomp_unit_0150");
    runtime.register_function(0x08A5CCC8u, &recomp_unit_0150, "recomp_unit_0150");
    runtime.register_function(0x08A5CD08u, &recomp_unit_0150, "recomp_unit_0150");
    runtime.register_function(0x08A5CD18u, &recomp_unit_0150, "recomp_unit_0150");
    runtime.register_function(0x08A5CD28u, &recomp_unit_0150, "recomp_unit_0150");
    runtime.register_function(0x08A5CD40u, &recomp_unit_0150, "recomp_unit_0150");
    runtime.register_function(0x08A5CD60u, &recomp_unit_0150, "recomp_unit_0150");
    runtime.register_function(0x08A5CD6Cu, &recomp_unit_0150, "recomp_unit_0150");
    runtime.register_function(0x08A5CD7Cu, &recomp_unit_0150, "recomp_unit_0150");
    runtime.register_function(0x08A5CD9Cu, &recomp_unit_0150, "recomp_unit_0150");
    runtime.register_function(0x08A5CDA0u, &recomp_unit_0150, "recomp_unit_0150");
    runtime.register_function(0x08A5CDACu, &recomp_unit_0150, "recomp_unit_0150");
    runtime.register_function(0x08A5CDBCu, &recomp_unit_0150, "recomp_unit_0150");
    runtime.register_function(0x08A5CDD8u, &recomp_unit_0150, "recomp_unit_0150");
    runtime.register_function(0x08A5CE08u, &recomp_unit_0150, "recomp_unit_0150");
    runtime.register_function(0x08A5CE18u, &recomp_unit_0150, "recomp_unit_0150");
    runtime.register_function(0x08A5CE28u, &recomp_unit_0150, "recomp_unit_0150");
    runtime.register_function(0x08A5CE38u, &recomp_unit_0150, "recomp_unit_0150");
    runtime.register_function(0x08A5CE44u, &recomp_unit_0150, "recomp_unit_0150");
    runtime.register_function(0x08A5CE58u, &recomp_unit_0150, "recomp_unit_0150");
    runtime.register_function(0x08A5CE60u, &recomp_unit_0150, "recomp_unit_0150");
    runtime.register_function(0x08A5CE68u, &recomp_unit_0150, "recomp_unit_0150");
    runtime.register_function(0x08A5CE6Cu, &recomp_unit_0150, "recomp_unit_0150");
    runtime.register_function(0x08A5CE74u, &recomp_unit_0150, "recomp_unit_0150");
    runtime.register_function(0x08A5CE88u, &recomp_unit_0150, "recomp_unit_0150");
    runtime.register_function(0x08A5CE9Cu, &recomp_unit_0150, "recomp_unit_0150");
    runtime.register_function(0x08A5CEA4u, &recomp_unit_0150, "recomp_unit_0150");
    runtime.register_function(0x08A5CEACu, &recomp_unit_0150, "recomp_unit_0150");
    runtime.register_function(0x08A5CEB0u, &recomp_unit_0150, "recomp_unit_0150");
    runtime.register_function(0x08A5CEB8u, &recomp_unit_0150, "recomp_unit_0150");
    runtime.register_function(0x08A5CECCu, &recomp_unit_0150, "recomp_unit_0150");
    runtime.register_function(0x08A5CED0u, &recomp_unit_0150, "recomp_unit_0150");
    runtime.register_function(0x08A5CEDCu, &recomp_unit_0150, "recomp_unit_0150");
    runtime.register_function(0x08A5CEF0u, &recomp_unit_0150, "recomp_unit_0150");
    runtime.register_function(0x08A5CEF8u, &recomp_unit_0150, "recomp_unit_0150");
    runtime.register_function(0x08A5CF20u, &recomp_unit_0150, "recomp_unit_0150");
    runtime.register_function(0x08A5CF44u, &recomp_unit_0150, "recomp_unit_0150");
    runtime.register_function(0x08A5CF84u, &recomp_unit_0150, "recomp_unit_0150");
    runtime.register_function(0x08A5CF9Cu, &recomp_unit_0150, "recomp_unit_0150");
    runtime.register_function(0x08A5CFD4u, &recomp_unit_0150, "recomp_unit_0150");
    runtime.register_function(0x08A5CFE4u, &recomp_unit_0150, "recomp_unit_0150");
    runtime.register_function(0x08A5CFF8u, &recomp_unit_0150, "recomp_unit_0150");
    runtime.register_function(0x08A5D00Cu, &recomp_unit_0150, "recomp_unit_0150");
    runtime.register_function(0x08A5D018u, &recomp_unit_0150, "recomp_unit_0150");
    runtime.register_function(0x08A5D03Cu, &recomp_unit_0150, "recomp_unit_0150");
    runtime.register_function(0x08A5D060u, &recomp_unit_0150, "recomp_unit_0150");
    runtime.register_function(0x08A5D074u, &recomp_unit_0150, "recomp_unit_0150");
    runtime.register_function(0x08A5D08Cu, &recomp_unit_0150, "recomp_unit_0150");
    runtime.register_function(0x08A5D0A4u, &recomp_unit_0150, "recomp_unit_0150");
    runtime.register_function(0x08A5D0CCu, &recomp_unit_0150, "recomp_unit_0150");
    runtime.register_function(0x08A5D0D8u, &recomp_unit_0150, "recomp_unit_0150");
    runtime.register_function(0x08A5D0E4u, &recomp_unit_0150, "recomp_unit_0150");
    runtime.register_function(0x08A5D0F0u, &recomp_unit_0150, "recomp_unit_0150");
    runtime.register_function(0x08A5D104u, &recomp_unit_0150, "recomp_unit_0150");
    runtime.register_function(0x08A5D11Cu, &recomp_unit_0150, "recomp_unit_0150");
    runtime.register_function(0x08A5D12Cu, &recomp_unit_0150, "recomp_unit_0150");
    runtime.register_function(0x08A5D138u, &recomp_unit_0150, "recomp_unit_0150");
    runtime.register_function(0x08A5D144u, &recomp_unit_0150, "recomp_unit_0150");
    runtime.register_function(0x08A5D154u, &recomp_unit_0150, "recomp_unit_0150");
    runtime.register_function(0x08A5D160u, &recomp_unit_0150, "recomp_unit_0150");
    runtime.register_function(0x08A5D16Cu, &recomp_unit_0150, "recomp_unit_0150");
    runtime.register_function(0x08A5D174u, &recomp_unit_0150, "recomp_unit_0150");
    runtime.register_function(0x08A5D180u, &recomp_unit_0150, "recomp_unit_0150");
    runtime.register_function(0x08A5D198u, &recomp_unit_0150, "recomp_unit_0150");
    runtime.register_function(0x08A5D1ACu, &recomp_unit_0150, "recomp_unit_0150");
    runtime.register_function(0x08A5D1B4u, &recomp_unit_0150, "recomp_unit_0150");
    runtime.register_function(0x08A5D1C4u, &recomp_unit_0150, "recomp_unit_0150");
    runtime.register_function(0x08A5D1D0u, &recomp_unit_0150, "recomp_unit_0150");
    runtime.register_function(0x08A5D1E0u, &recomp_unit_0150, "recomp_unit_0150");
    runtime.register_function(0x08A5D1E4u, &recomp_unit_0150, "recomp_unit_0150");
    runtime.register_function(0x08A5D200u, &recomp_unit_0150, "recomp_unit_0150");
    runtime.register_function(0x08A5D214u, &recomp_unit_0150, "recomp_unit_0150");
    runtime.register_function(0x08A5D224u, &recomp_unit_0150, "recomp_unit_0150");
    runtime.register_function(0x08A5D25Cu, &recomp_unit_0150, "recomp_unit_0150");
    runtime.register_function(0x08A5D264u, &recomp_unit_0150, "recomp_unit_0150");
    runtime.register_function(0x08A5D270u, &recomp_unit_0150, "recomp_unit_0150");
    runtime.register_function(0x08A5D284u, &recomp_unit_0150, "recomp_unit_0150");
    runtime.register_function(0x08A5D2A0u, &recomp_unit_0150, "recomp_unit_0150");
    runtime.register_function(0x08A5D2B0u, &recomp_unit_0150, "recomp_unit_0150");
    runtime.register_function(0x08A5D2C0u, &recomp_unit_0150, "recomp_unit_0150");
    runtime.register_function(0x08A5D2D8u, &recomp_unit_0150, "recomp_unit_0150");
    runtime.register_function(0x08A5D2ECu, &recomp_unit_0150, "recomp_unit_0150");
    runtime.register_function(0x08A5D2FCu, &recomp_unit_0150, "recomp_unit_0150");
    runtime.register_function(0x08A5D304u, &recomp_unit_0150, "recomp_unit_0150");
    runtime.register_function(0x08A5D30Cu, &recomp_unit_0150, "recomp_unit_0150");
    runtime.register_function(0x08A5D320u, &recomp_unit_0150, "recomp_unit_0150");
    runtime.register_function(0x08A5D330u, &recomp_unit_0150, "recomp_unit_0150");
    runtime.register_function(0x08A5D348u, &recomp_unit_0150, "recomp_unit_0150");
    runtime.register_function(0x08A5D354u, &recomp_unit_0150, "recomp_unit_0150");
    runtime.register_function(0x08A5D368u, &recomp_unit_0150, "recomp_unit_0150");
    runtime.register_function(0x08A5D370u, &recomp_unit_0150, "recomp_unit_0150");
    runtime.register_function(0x08A5D390u, &recomp_unit_0150, "recomp_unit_0150");
    runtime.register_function(0x08A5D39Cu, &recomp_unit_0150, "recomp_unit_0150");
    runtime.register_function(0x08A5D3A8u, &recomp_unit_0150, "recomp_unit_0150");
    runtime.register_function(0x08A5D3B8u, &recomp_unit_0150, "recomp_unit_0150");
    runtime.register_function(0x08A5D3D8u, &recomp_unit_0150, "recomp_unit_0150");
    runtime.register_function(0x08A5D3DCu, &recomp_unit_0150, "recomp_unit_0150");
    runtime.register_function(0x08A5D3E8u, &recomp_unit_0150, "recomp_unit_0150");
    runtime.register_function(0x08A5D3F8u, &recomp_unit_0150, "recomp_unit_0150");
    runtime.register_function(0x08A5D414u, &recomp_unit_0150, "recomp_unit_0150");
    runtime.register_function(0x08A5D424u, &recomp_unit_0150, "recomp_unit_0150");
    runtime.register_function(0x08A5D430u, &recomp_unit_0150, "recomp_unit_0150");
    runtime.register_function(0x08A5D43Cu, &recomp_unit_0150, "recomp_unit_0150");
    runtime.register_function(0x08A5D44Cu, &recomp_unit_0150, "recomp_unit_0150");
    runtime.register_function(0x08A5D458u, &recomp_unit_0150, "recomp_unit_0150");
    runtime.register_function(0x08A5D464u, &recomp_unit_0150, "recomp_unit_0150");
    runtime.register_function(0x08A5D474u, &recomp_unit_0150, "recomp_unit_0150");
    runtime.register_function(0x08A5D480u, &recomp_unit_0150, "recomp_unit_0150");
    runtime.register_function(0x08A5D48Cu, &recomp_unit_0150, "recomp_unit_0150");
    runtime.register_function(0x08A5D49Cu, &recomp_unit_0150, "recomp_unit_0150");
    runtime.register_function(0x08A5D4A8u, &recomp_unit_0150, "recomp_unit_0150");
    runtime.register_function(0x08A5D4B4u, &recomp_unit_0150, "recomp_unit_0150");
    runtime.register_function(0x08A5D4C4u, &recomp_unit_0150, "recomp_unit_0150");
    runtime.register_function(0x08A5D4D0u, &recomp_unit_0150, "recomp_unit_0150");
    runtime.register_function(0x08A5D4DCu, &recomp_unit_0150, "recomp_unit_0150");
    runtime.register_function(0x08A5D4ECu, &recomp_unit_0150, "recomp_unit_0150");
    runtime.register_function(0x08A5D4F8u, &recomp_unit_0150, "recomp_unit_0150");
    runtime.register_function(0x08A5D504u, &recomp_unit_0150, "recomp_unit_0150");
    runtime.register_function(0x08A5D514u, &recomp_unit_0150, "recomp_unit_0150");
    runtime.register_function(0x08A5D520u, &recomp_unit_0150, "recomp_unit_0150");
    runtime.register_function(0x08A5D52Cu, &recomp_unit_0150, "recomp_unit_0150");
    runtime.register_function(0x08A5D53Cu, &recomp_unit_0150, "recomp_unit_0150");
    runtime.register_function(0x08A5D548u, &recomp_unit_0150, "recomp_unit_0150");
    runtime.register_function(0x08A5D554u, &recomp_unit_0150, "recomp_unit_0150");
    runtime.register_function(0x08A5D564u, &recomp_unit_0150, "recomp_unit_0150");
    runtime.register_function(0x08A5D570u, &recomp_unit_0150, "recomp_unit_0150");
    runtime.register_function(0x08A5D57Cu, &recomp_unit_0150, "recomp_unit_0150");
    runtime.register_function(0x08A5D58Cu, &recomp_unit_0150, "recomp_unit_0150");
    runtime.register_function(0x08A5D598u, &recomp_unit_0150, "recomp_unit_0150");
    runtime.register_function(0x08A5D5A4u, &recomp_unit_0150, "recomp_unit_0150");
    runtime.register_function(0x08A5D5B4u, &recomp_unit_0150, "recomp_unit_0150");
    runtime.register_function(0x08A5D5C0u, &recomp_unit_0150, "recomp_unit_0150");
    runtime.register_function(0x08A5D5CCu, &recomp_unit_0150, "recomp_unit_0150");
    runtime.register_function(0x08A5D5DCu, &recomp_unit_0150, "recomp_unit_0150");
    runtime.register_function(0x08A5D5E8u, &recomp_unit_0150, "recomp_unit_0150");
    runtime.register_function(0x08A5D5F4u, &recomp_unit_0150, "recomp_unit_0150");
    runtime.register_function(0x08A5D604u, &recomp_unit_0150, "recomp_unit_0150");
    runtime.register_function(0x08A5D610u, &recomp_unit_0150, "recomp_unit_0150");
    runtime.register_function(0x08A5D61Cu, &recomp_unit_0150, "recomp_unit_0150");
    runtime.register_function(0x08A5D62Cu, &recomp_unit_0150, "recomp_unit_0150");
    runtime.register_function(0x08A5D638u, &recomp_unit_0150, "recomp_unit_0150");
    runtime.register_function(0x08A5D644u, &recomp_unit_0150, "recomp_unit_0150");
    runtime.register_function(0x08A5D654u, &recomp_unit_0150, "recomp_unit_0150");
    runtime.register_function(0x08A5D660u, &recomp_unit_0150, "recomp_unit_0150");
    runtime.register_function(0x08A5D66Cu, &recomp_unit_0150, "recomp_unit_0150");
    runtime.register_function(0x08A5D67Cu, &recomp_unit_0150, "recomp_unit_0150");
    runtime.register_function(0x08A5D688u, &recomp_unit_0150, "recomp_unit_0150");
    runtime.register_function(0x08A5D694u, &recomp_unit_0150, "recomp_unit_0150");
    runtime.register_function(0x08A5D6A4u, &recomp_unit_0150, "recomp_unit_0150");
    runtime.register_function(0x08A5D6B0u, &recomp_unit_0150, "recomp_unit_0150");
    runtime.register_function(0x08A5D6BCu, &recomp_unit_0150, "recomp_unit_0150");
    runtime.register_function(0x08A5D6CCu, &recomp_unit_0150, "recomp_unit_0150");
    runtime.register_function(0x08A5D6D8u, &recomp_unit_0150, "recomp_unit_0150");
    runtime.register_function(0x08A5D6E4u, &recomp_unit_0150, "recomp_unit_0150");
    runtime.register_function(0x08A5D6F4u, &recomp_unit_0150, "recomp_unit_0150");
    runtime.register_function(0x08A5D700u, &recomp_unit_0150, "recomp_unit_0150");
    runtime.register_function(0x08A5D70Cu, &recomp_unit_0150, "recomp_unit_0150");
    runtime.register_function(0x08A5D71Cu, &recomp_unit_0150, "recomp_unit_0150");
    runtime.register_function(0x08A5D728u, &recomp_unit_0150, "recomp_unit_0150");
    runtime.register_function(0x08A5D734u, &recomp_unit_0150, "recomp_unit_0150");
    runtime.register_function(0x08A5D744u, &recomp_unit_0150, "recomp_unit_0150");
    runtime.register_function(0x08A5D750u, &recomp_unit_0150, "recomp_unit_0150");
    runtime.register_function(0x08A5D75Cu, &recomp_unit_0150, "recomp_unit_0150");
    runtime.register_function(0x08A5D76Cu, &recomp_unit_0150, "recomp_unit_0150");
    runtime.register_function(0x08A5D778u, &recomp_unit_0150, "recomp_unit_0150");
    runtime.register_function(0x08A5D784u, &recomp_unit_0150, "recomp_unit_0150");
    runtime.register_function(0x08A5D794u, &recomp_unit_0150, "recomp_unit_0150");
    runtime.register_function(0x08A5D7A0u, &recomp_unit_0150, "recomp_unit_0150");
    runtime.register_function(0x08A5D7ACu, &recomp_unit_0150, "recomp_unit_0150");
    runtime.register_function(0x08A5D7BCu, &recomp_unit_0150, "recomp_unit_0150");
    runtime.register_function(0x08A5D7C8u, &recomp_unit_0150, "recomp_unit_0150");
    runtime.register_function(0x08A5D7D4u, &recomp_unit_0150, "recomp_unit_0150");
    runtime.register_function(0x08A5D7E4u, &recomp_unit_0150, "recomp_unit_0150");
    runtime.register_function(0x08A5D7F0u, &recomp_unit_0150, "recomp_unit_0150");
    runtime.register_function(0x08A5D7FCu, &recomp_unit_0150, "recomp_unit_0150");
    runtime.register_function(0x08A5D80Cu, &recomp_unit_0150, "recomp_unit_0150");
    runtime.register_function(0x08A5D818u, &recomp_unit_0150, "recomp_unit_0150");
    runtime.register_function(0x08A5D824u, &recomp_unit_0150, "recomp_unit_0150");
    runtime.register_function(0x08A5D834u, &recomp_unit_0150, "recomp_unit_0150");
    runtime.register_function(0x08A5D840u, &recomp_unit_0150, "recomp_unit_0150");
    runtime.register_function(0x08A5D84Cu, &recomp_unit_0150, "recomp_unit_0150");
    runtime.register_function(0x08A5D85Cu, &recomp_unit_0150, "recomp_unit_0150");
    runtime.register_function(0x08A5D868u, &recomp_unit_0150, "recomp_unit_0150");
    runtime.register_function(0x08A5D874u, &recomp_unit_0150, "recomp_unit_0150");
    runtime.register_function(0x08A5D884u, &recomp_unit_0150, "recomp_unit_0150");
    runtime.register_function(0x08A5D890u, &recomp_unit_0150, "recomp_unit_0150");
    runtime.register_function(0x08A5D89Cu, &recomp_unit_0150, "recomp_unit_0150");
    runtime.register_function(0x08A5D8ACu, &recomp_unit_0150, "recomp_unit_0150");
    runtime.register_function(0x08A5D8B8u, &recomp_unit_0150, "recomp_unit_0150");
    runtime.register_function(0x08A5D8C4u, &recomp_unit_0150, "recomp_unit_0150");
    runtime.register_function(0x08A5D8D4u, &recomp_unit_0150, "recomp_unit_0150");
    runtime.register_function(0x08A5D8E0u, &recomp_unit_0150, "recomp_unit_0150");
    runtime.register_function(0x08A5D8ECu, &recomp_unit_0150, "recomp_unit_0150");
    runtime.register_function(0x08A5D8FCu, &recomp_unit_0150, "recomp_unit_0150");
    runtime.register_function(0x08A5D908u, &recomp_unit_0150, "recomp_unit_0150");
    runtime.register_function(0x08A5D914u, &recomp_unit_0150, "recomp_unit_0150");
    runtime.register_function(0x08A5D924u, &recomp_unit_0150, "recomp_unit_0150");
    runtime.register_function(0x08A5D930u, &recomp_unit_0150, "recomp_unit_0150");
    runtime.register_function(0x08A5D93Cu, &recomp_unit_0150, "recomp_unit_0150");
    runtime.register_function(0x08A5D94Cu, &recomp_unit_0150, "recomp_unit_0150");
    runtime.register_function(0x08A5D958u, &recomp_unit_0150, "recomp_unit_0150");
    runtime.register_function(0x08A5D964u, &recomp_unit_0150, "recomp_unit_0150");
    runtime.register_function(0x08A5D974u, &recomp_unit_0150, "recomp_unit_0150");
    runtime.register_function(0x08A5D980u, &recomp_unit_0150, "recomp_unit_0150");
    runtime.register_function(0x08A5D98Cu, &recomp_unit_0150, "recomp_unit_0150");
    runtime.register_function(0x08A5D9A4u, &recomp_unit_0150, "recomp_unit_0150");
    runtime.register_function(0x08A5D9BCu, &recomp_unit_0150, "recomp_unit_0150");
    runtime.register_function(0x08A5D9D8u, &recomp_unit_0150, "recomp_unit_0150");
    runtime.register_function(0x08A5D9E0u, &recomp_unit_0150, "recomp_unit_0150");
    runtime.register_function(0x08A5D9E8u, &recomp_unit_0150, "recomp_unit_0150");
    runtime.register_function(0x08A5D9F8u, &recomp_unit_0150, "recomp_unit_0150");
    runtime.register_function(0x08A5DA14u, &recomp_unit_0150, "recomp_unit_0150");
    runtime.register_function(0x08A5DA1Cu, &recomp_unit_0150, "recomp_unit_0150");
    runtime.register_function(0x08A5DA24u, &recomp_unit_0150, "recomp_unit_0150");
    runtime.register_function(0x08A5DA34u, &recomp_unit_0150, "recomp_unit_0150");
    runtime.register_function(0x08A5DA50u, &recomp_unit_0150, "recomp_unit_0150");
    runtime.register_function(0x08A5DA58u, &recomp_unit_0150, "recomp_unit_0150");
    runtime.register_function(0x08A5DA60u, &recomp_unit_0150, "recomp_unit_0150");
    runtime.register_function(0x08A5DA70u, &recomp_unit_0150, "recomp_unit_0150");
    runtime.register_function(0x08A5DA8Cu, &recomp_unit_0150, "recomp_unit_0150");
    runtime.register_function(0x08A5DA94u, &recomp_unit_0150, "recomp_unit_0150");
    runtime.register_function(0x08A5DA9Cu, &recomp_unit_0150, "recomp_unit_0150");
    runtime.register_function(0x08A5DAACu, &recomp_unit_0150, "recomp_unit_0150");
    runtime.register_function(0x08A5DAC8u, &recomp_unit_0150, "recomp_unit_0150");
    runtime.register_function(0x08A5DAD0u, &recomp_unit_0150, "recomp_unit_0150");
    runtime.register_function(0x08A5DAD8u, &recomp_unit_0150, "recomp_unit_0150");
    runtime.register_function(0x08A5DAE8u, &recomp_unit_0150, "recomp_unit_0150");
    runtime.register_function(0x08A5DB04u, &recomp_unit_0150, "recomp_unit_0150");
    runtime.register_function(0x08A5DB0Cu, &recomp_unit_0150, "recomp_unit_0150");
    runtime.register_function(0x08A5DB14u, &recomp_unit_0150, "recomp_unit_0150");
    runtime.register_function(0x08A5DB24u, &recomp_unit_0150, "recomp_unit_0150");
    runtime.register_function(0x08A5DB40u, &recomp_unit_0150, "recomp_unit_0150");
    runtime.register_function(0x08A5DB48u, &recomp_unit_0150, "recomp_unit_0150");
    runtime.register_function(0x08A5DB50u, &recomp_unit_0150, "recomp_unit_0150");
    runtime.register_function(0x08A5DB60u, &recomp_unit_0150, "recomp_unit_0150");
    runtime.register_function(0x08A5DB7Cu, &recomp_unit_0150, "recomp_unit_0150");
    runtime.register_function(0x08A5DB84u, &recomp_unit_0150, "recomp_unit_0150");
    runtime.register_function(0x08A5DB8Cu, &recomp_unit_0150, "recomp_unit_0150");
    runtime.register_function(0x08A5DB9Cu, &recomp_unit_0150, "recomp_unit_0150");
    runtime.register_function(0x08A5DBB8u, &recomp_unit_0150, "recomp_unit_0150");
    runtime.register_function(0x08A5DBC0u, &recomp_unit_0150, "recomp_unit_0150");
    runtime.register_function(0x08A5DBC8u, &recomp_unit_0150, "recomp_unit_0150");
    runtime.register_function(0x08A5DBD8u, &recomp_unit_0150, "recomp_unit_0150");
    runtime.register_function(0x08A5DBF4u, &recomp_unit_0150, "recomp_unit_0150");
    runtime.register_function(0x08A5DBFCu, &recomp_unit_0150, "recomp_unit_0150");
    runtime.register_function(0x08A5DC04u, &recomp_unit_0150, "recomp_unit_0150");
    runtime.register_function(0x08A5DC14u, &recomp_unit_0150, "recomp_unit_0150");
    runtime.register_function(0x08A5DC30u, &recomp_unit_0150, "recomp_unit_0150");
    runtime.register_function(0x08A5DC38u, &recomp_unit_0150, "recomp_unit_0150");
    runtime.register_function(0x08A5DC40u, &recomp_unit_0150, "recomp_unit_0150");
    runtime.register_function(0x08A5DC50u, &recomp_unit_0150, "recomp_unit_0150");
    runtime.register_function(0x08A5DC6Cu, &recomp_unit_0150, "recomp_unit_0150");
    runtime.register_function(0x08A5DC74u, &recomp_unit_0150, "recomp_unit_0150");
    runtime.register_function(0x08A5DC7Cu, &recomp_unit_0150, "recomp_unit_0150");
    runtime.register_function(0x08A5DC8Cu, &recomp_unit_0150, "recomp_unit_0150");
    runtime.register_function(0x08A5DCA8u, &recomp_unit_0150, "recomp_unit_0150");
    runtime.register_function(0x08A5DCB0u, &recomp_unit_0150, "recomp_unit_0150");
    runtime.register_function(0x08A5DCB8u, &recomp_unit_0150, "recomp_unit_0150");
    runtime.register_function(0x08A5DCC8u, &recomp_unit_0150, "recomp_unit_0150");
    runtime.register_function(0x08A5DCE4u, &recomp_unit_0150, "recomp_unit_0150");
    runtime.register_function(0x08A5DCECu, &recomp_unit_0150, "recomp_unit_0150");
    runtime.register_function(0x08A5DCF4u, &recomp_unit_0150, "recomp_unit_0150");
    runtime.register_function(0x08A5DD04u, &recomp_unit_0150, "recomp_unit_0150");
    runtime.register_function(0x08A5DD20u, &recomp_unit_0150, "recomp_unit_0150");
    runtime.register_function(0x08A5DD28u, &recomp_unit_0150, "recomp_unit_0150");
    runtime.register_function(0x08A5DD30u, &recomp_unit_0150, "recomp_unit_0150");
    runtime.register_function(0x08A5DD40u, &recomp_unit_0150, "recomp_unit_0150");
    runtime.register_function(0x08A5DD5Cu, &recomp_unit_0150, "recomp_unit_0150");
    runtime.register_function(0x08A5DD64u, &recomp_unit_0150, "recomp_unit_0150");
    runtime.register_function(0x08A5DD6Cu, &recomp_unit_0150, "recomp_unit_0150");
    runtime.register_function(0x08A5DD7Cu, &recomp_unit_0150, "recomp_unit_0150");
    runtime.register_function(0x08A5DD98u, &recomp_unit_0150, "recomp_unit_0150");
    runtime.register_function(0x08A5DDA0u, &recomp_unit_0150, "recomp_unit_0150");
    runtime.register_function(0x08A5DDA8u, &recomp_unit_0150, "recomp_unit_0150");
    runtime.register_function(0x08A5DDB8u, &recomp_unit_0150, "recomp_unit_0150");
    runtime.register_function(0x08A5DDD4u, &recomp_unit_0150, "recomp_unit_0150");
    runtime.register_function(0x08A5DDDCu, &recomp_unit_0150, "recomp_unit_0150");
    runtime.register_function(0x08A5DDE4u, &recomp_unit_0150, "recomp_unit_0150");
    runtime.register_function(0x08A5DDF4u, &recomp_unit_0150, "recomp_unit_0150");
    runtime.register_function(0x08A5DE10u, &recomp_unit_0150, "recomp_unit_0150");
    runtime.register_function(0x08A5DE18u, &recomp_unit_0150, "recomp_unit_0150");
    runtime.register_function(0x08A5DE20u, &recomp_unit_0150, "recomp_unit_0150");
    runtime.register_function(0x08A5DE30u, &recomp_unit_0150, "recomp_unit_0150");
    runtime.register_function(0x08A5DE4Cu, &recomp_unit_0150, "recomp_unit_0150");
    runtime.register_function(0x08A5DE54u, &recomp_unit_0150, "recomp_unit_0150");
    runtime.register_function(0x08A5DE5Cu, &recomp_unit_0150, "recomp_unit_0150");
    runtime.register_function(0x08A5DE6Cu, &recomp_unit_0150, "recomp_unit_0150");
    runtime.register_function(0x08A5DE88u, &recomp_unit_0150, "recomp_unit_0150");
    runtime.register_function(0x08A5DE90u, &recomp_unit_0150, "recomp_unit_0150");
    runtime.register_function(0x08A5DE98u, &recomp_unit_0150, "recomp_unit_0150");
    runtime.register_function(0x08A5DEA8u, &recomp_unit_0150, "recomp_unit_0150");
    runtime.register_function(0x08A5DEC4u, &recomp_unit_0150, "recomp_unit_0150");
    runtime.register_function(0x08A5DECCu, &recomp_unit_0150, "recomp_unit_0150");
    runtime.register_function(0x08A5DED4u, &recomp_unit_0150, "recomp_unit_0150");
    runtime.register_function(0x08A5DEE4u, &recomp_unit_0150, "recomp_unit_0150");
    runtime.register_function(0x08A5DF00u, &recomp_unit_0150, "recomp_unit_0150");
    runtime.register_function(0x08A5DF08u, &recomp_unit_0150, "recomp_unit_0150");
    runtime.register_function(0x08A5DF10u, &recomp_unit_0150, "recomp_unit_0150");
    runtime.register_function(0x08A5DF20u, &recomp_unit_0150, "recomp_unit_0150");
    runtime.register_function(0x08A5DF3Cu, &recomp_unit_0150, "recomp_unit_0150");
    runtime.register_function(0x08A5DF44u, &recomp_unit_0150, "recomp_unit_0150");
    runtime.register_function(0x08A5DF4Cu, &recomp_unit_0150, "recomp_unit_0150");
    runtime.register_function(0x08A5DF5Cu, &recomp_unit_0150, "recomp_unit_0150");
    runtime.register_function(0x08A5DF78u, &recomp_unit_0150, "recomp_unit_0150");
    runtime.register_function(0x08A5DF80u, &recomp_unit_0150, "recomp_unit_0150");
    runtime.register_function(0x08A5DF88u, &recomp_unit_0150, "recomp_unit_0150");
    runtime.register_function(0x08A5DF98u, &recomp_unit_0150, "recomp_unit_0150");
    runtime.register_function(0x08A5DFB4u, &recomp_unit_0150, "recomp_unit_0150");
    runtime.register_function(0x08A5DFBCu, &recomp_unit_0150, "recomp_unit_0150");
    runtime.register_function(0x08A5DFC4u, &recomp_unit_0150, "recomp_unit_0150");
    runtime.register_function(0x08A5DFD4u, &recomp_unit_0150, "recomp_unit_0150");
    runtime.register_function(0x08A5DFF0u, &recomp_unit_0150, "recomp_unit_0150");
    runtime.register_function(0x08A5DFF8u, &recomp_unit_0150, "recomp_unit_0150");
    runtime.register_function(0x08A5E000u, &recomp_unit_0150, "recomp_unit_0150");
    runtime.register_function(0x08A5E010u, &recomp_unit_0150, "recomp_unit_0150");
    runtime.register_function(0x08A5E02Cu, &recomp_unit_0150, "recomp_unit_0150");
    runtime.register_function(0x08A5E034u, &recomp_unit_0150, "recomp_unit_0150");
    runtime.register_function(0x08A5E03Cu, &recomp_unit_0150, "recomp_unit_0150");
    runtime.register_function(0x08A5E04Cu, &recomp_unit_0150, "recomp_unit_0150");
    runtime.register_function(0x08A5E068u, &recomp_unit_0150, "recomp_unit_0150");
    runtime.register_function(0x08A5E070u, &recomp_unit_0150, "recomp_unit_0150");
    runtime.register_function(0x08A5E078u, &recomp_unit_0150, "recomp_unit_0150");
    runtime.register_function(0x08A5E088u, &recomp_unit_0150, "recomp_unit_0150");
    runtime.register_function(0x08A5E0A4u, &recomp_unit_0150, "recomp_unit_0150");
    runtime.register_function(0x08A5E0ACu, &recomp_unit_0150, "recomp_unit_0150");
    runtime.register_function(0x08A5E0B4u, &recomp_unit_0150, "recomp_unit_0150");
    runtime.register_function(0x08A5E0C4u, &recomp_unit_0150, "recomp_unit_0150");
    runtime.register_function(0x08A5E0E0u, &recomp_unit_0150, "recomp_unit_0150");
    runtime.register_function(0x08A5E0E8u, &recomp_unit_0150, "recomp_unit_0150");
    runtime.register_function(0x08A5E0F0u, &recomp_unit_0150, "recomp_unit_0150");
    runtime.register_function(0x08A5E100u, &recomp_unit_0150, "recomp_unit_0150");
    runtime.register_function(0x08A5E11Cu, &recomp_unit_0150, "recomp_unit_0150");
    runtime.register_function(0x08A5E124u, &recomp_unit_0150, "recomp_unit_0150");
    runtime.register_function(0x08A5E12Cu, &recomp_unit_0150, "recomp_unit_0150");
    runtime.register_function(0x08A5E13Cu, &recomp_unit_0150, "recomp_unit_0150");
    runtime.register_function(0x08A5E158u, &recomp_unit_0150, "recomp_unit_0150");
    runtime.register_function(0x08A5E160u, &recomp_unit_0150, "recomp_unit_0150");
    runtime.register_function(0x08A5E168u, &recomp_unit_0150, "recomp_unit_0150");
    runtime.register_function(0x08A5E178u, &recomp_unit_0150, "recomp_unit_0150");
    runtime.register_function(0x08A5E194u, &recomp_unit_0150, "recomp_unit_0150");
    runtime.register_function(0x08A5E19Cu, &recomp_unit_0150, "recomp_unit_0150");
    runtime.register_function(0x08A5E1A4u, &recomp_unit_0150, "recomp_unit_0150");
    runtime.register_function(0x08A5E1B4u, &recomp_unit_0150, "recomp_unit_0150");
    runtime.register_function(0x08A5E1D0u, &recomp_unit_0150, "recomp_unit_0150");
    runtime.register_function(0x08A5E1D8u, &recomp_unit_0150, "recomp_unit_0150");
    runtime.register_function(0x08A5E1E0u, &recomp_unit_0150, "recomp_unit_0150");
    runtime.register_function(0x08A5E1F0u, &recomp_unit_0150, "recomp_unit_0150");
    runtime.register_function(0x08A5E20Cu, &recomp_unit_0150, "recomp_unit_0150");
    runtime.register_function(0x08A5E214u, &recomp_unit_0150, "recomp_unit_0150");
    runtime.register_function(0x08A5E21Cu, &recomp_unit_0150, "recomp_unit_0150");
    runtime.register_function(0x08A5E22Cu, &recomp_unit_0150, "recomp_unit_0150");
    runtime.register_function(0x08A5E248u, &recomp_unit_0150, "recomp_unit_0150");
    runtime.register_function(0x08A5E250u, &recomp_unit_0150, "recomp_unit_0150");
    runtime.register_function(0x08A5E258u, &recomp_unit_0150, "recomp_unit_0150");
    runtime.register_function(0x08A5E268u, &recomp_unit_0150, "recomp_unit_0150");
    runtime.register_function(0x08A5E284u, &recomp_unit_0150, "recomp_unit_0150");
    runtime.register_function(0x08A5E28Cu, &recomp_unit_0150, "recomp_unit_0150");
    runtime.register_function(0x08A5E294u, &recomp_unit_0150, "recomp_unit_0150");
    runtime.register_function(0x08A5E2A4u, &recomp_unit_0150, "recomp_unit_0150");
    runtime.register_function(0x08A5E2C0u, &recomp_unit_0150, "recomp_unit_0150");
    runtime.register_function(0x08A5E2C8u, &recomp_unit_0150, "recomp_unit_0150");
    runtime.register_function(0x08A5E2D0u, &recomp_unit_0150, "recomp_unit_0150");
    runtime.register_function(0x08A5E2E0u, &recomp_unit_0150, "recomp_unit_0150");
    runtime.register_function(0x08A5E2FCu, &recomp_unit_0150, "recomp_unit_0150");
    runtime.register_function(0x08A5E304u, &recomp_unit_0150, "recomp_unit_0150");
    runtime.register_function(0x08A5E30Cu, &recomp_unit_0150, "recomp_unit_0150");
    runtime.register_function(0x08A5E31Cu, &recomp_unit_0150, "recomp_unit_0150");
    runtime.register_function(0x08A5E338u, &recomp_unit_0150, "recomp_unit_0150");
    runtime.register_function(0x08A5E340u, &recomp_unit_0150, "recomp_unit_0150");
    runtime.register_function(0x08A5E348u, &recomp_unit_0150, "recomp_unit_0150");
    runtime.register_function(0x08A5E358u, &recomp_unit_0150, "recomp_unit_0150");
    runtime.register_function(0x08A5E374u, &recomp_unit_0150, "recomp_unit_0150");
    runtime.register_function(0x08A5E37Cu, &recomp_unit_0150, "recomp_unit_0150");
    runtime.register_function(0x08A5E384u, &recomp_unit_0150, "recomp_unit_0150");
    runtime.register_function(0x08A5E394u, &recomp_unit_0150, "recomp_unit_0150");
    runtime.register_function(0x08A5E3B0u, &recomp_unit_0150, "recomp_unit_0150");
    runtime.register_function(0x08A5E3B8u, &recomp_unit_0150, "recomp_unit_0150");
    runtime.register_function(0x08A5E3C0u, &recomp_unit_0150, "recomp_unit_0150");
    runtime.register_function(0x08A5E3D0u, &recomp_unit_0150, "recomp_unit_0150");
    runtime.register_function(0x08A5E3ECu, &recomp_unit_0150, "recomp_unit_0150");
    runtime.register_function(0x08A5E3F4u, &recomp_unit_0150, "recomp_unit_0150");
    runtime.register_function(0x08A5E3FCu, &recomp_unit_0150, "recomp_unit_0150");
    runtime.register_function(0x08A5E40Cu, &recomp_unit_0150, "recomp_unit_0150");
    runtime.register_function(0x08A5E428u, &recomp_unit_0150, "recomp_unit_0150");
    runtime.register_function(0x08A5E430u, &recomp_unit_0150, "recomp_unit_0150");
    runtime.register_function(0x08A5E438u, &recomp_unit_0150, "recomp_unit_0150");
    runtime.register_function(0x08A5E448u, &recomp_unit_0150, "recomp_unit_0150");
    runtime.register_function(0x08A5E464u, &recomp_unit_0150, "recomp_unit_0150");
    runtime.register_function(0x08A5E46Cu, &recomp_unit_0150, "recomp_unit_0150");
    runtime.register_function(0x08A5E474u, &recomp_unit_0150, "recomp_unit_0150");
    runtime.register_function(0x08A5E484u, &recomp_unit_0150, "recomp_unit_0150");
    runtime.register_function(0x08A5E4A0u, &recomp_unit_0150, "recomp_unit_0150");
    runtime.register_function(0x08A5E4A8u, &recomp_unit_0150, "recomp_unit_0150");
    runtime.register_function(0x08A5E4B0u, &recomp_unit_0150, "recomp_unit_0150");
    runtime.register_function(0x08A5E4C0u, &recomp_unit_0150, "recomp_unit_0150");
    runtime.register_function(0x08A5E4DCu, &recomp_unit_0150, "recomp_unit_0150");
    runtime.register_function(0x08A5E4E4u, &recomp_unit_0150, "recomp_unit_0150");
    runtime.register_function(0x08A5E4ECu, &recomp_unit_0150, "recomp_unit_0150");
    runtime.register_function(0x08A5E4FCu, &recomp_unit_0150, "recomp_unit_0150");
    runtime.register_function(0x08A5E51Cu, &recomp_unit_0150, "recomp_unit_0150");
    runtime.register_function(0x08A5E52Cu, &recomp_unit_0150, "recomp_unit_0150");
    runtime.register_function(0x08A5E534u, &recomp_unit_0150, "recomp_unit_0150");
    runtime.register_function(0x08A5E53Cu, &recomp_unit_0150, "recomp_unit_0150");
    runtime.register_function(0x08A5E54Cu, &recomp_unit_0150, "recomp_unit_0150");
    runtime.register_function(0x08A5E554u, &recomp_unit_0150, "recomp_unit_0150");
    runtime.register_function(0x08A5E570u, &recomp_unit_0150, "recomp_unit_0150");
    runtime.register_function(0x08A5E578u, &recomp_unit_0150, "recomp_unit_0150");
    runtime.register_function(0x08A5E580u, &recomp_unit_0150, "recomp_unit_0150");
    runtime.register_function(0x08A5E590u, &recomp_unit_0150, "recomp_unit_0150");
    runtime.register_function(0x08A5E598u, &recomp_unit_0150, "recomp_unit_0150");
    runtime.register_function(0x08A5E5B4u, &recomp_unit_0150, "recomp_unit_0150");
    runtime.register_function(0x08A5E5BCu, &recomp_unit_0150, "recomp_unit_0150");
    runtime.register_function(0x08A5E5C4u, &recomp_unit_0150, "recomp_unit_0150");
    runtime.register_function(0x08A5E5D0u, &recomp_unit_0150, "recomp_unit_0150");
    runtime.register_function(0x08A5E5E4u, &recomp_unit_0150, "recomp_unit_0150");
    runtime.register_function(0x08A5E610u, &recomp_unit_0150, "recomp_unit_0150");
    runtime.register_function(0x08A5E61Cu, &recomp_unit_0150, "recomp_unit_0150");
    runtime.register_function(0x08A5E620u, &recomp_unit_0150, "recomp_unit_0150");
    runtime.register_function(0x08A5E62Cu, &recomp_unit_0150, "recomp_unit_0150");
    runtime.register_function(0x08A5E64Cu, &recomp_unit_0150, "recomp_unit_0150");
    runtime.register_function(0x08A5E650u, &recomp_unit_0150, "recomp_unit_0150");
    runtime.register_function(0x08A5E65Cu, &recomp_unit_0150, "recomp_unit_0150");
    runtime.register_function(0x08A5E67Cu, &recomp_unit_0150, "recomp_unit_0150");
    runtime.register_function(0x08A5E698u, &recomp_unit_0150, "recomp_unit_0150");
    runtime.register_function(0x08A5E6A8u, &recomp_unit_0150, "recomp_unit_0150");
    runtime.register_function(0x08A5E6C8u, &recomp_unit_0150, "recomp_unit_0150");
    runtime.register_function(0x08A5E6D0u, &recomp_unit_0150, "recomp_unit_0150");
    runtime.register_function(0x08A5E6FCu, &recomp_unit_0150, "recomp_unit_0150");
    runtime.register_function(0x08A5E720u, &recomp_unit_0150, "recomp_unit_0150");
    runtime.register_function(0x08A5E73Cu, &recomp_unit_0150, "recomp_unit_0150");
    runtime.register_function(0x08A5E754u, &recomp_unit_0150, "recomp_unit_0150");
    runtime.register_function(0x08A5E760u, &recomp_unit_0150, "recomp_unit_0150");
    runtime.register_function(0x08A5E770u, &recomp_unit_0150, "recomp_unit_0150");
    runtime.register_function(0x08A5E778u, &recomp_unit_0150, "recomp_unit_0150");
    runtime.register_function(0x08A5E780u, &recomp_unit_0150, "recomp_unit_0150");
    runtime.register_function(0x08A5E784u, &recomp_unit_0150, "recomp_unit_0150");
    runtime.register_function(0x08A5E794u, &recomp_unit_0150, "recomp_unit_0150");
    runtime.register_function(0x08A5E7A4u, &recomp_unit_0150, "recomp_unit_0150");
    runtime.register_function(0x08A5E7ACu, &recomp_unit_0150, "recomp_unit_0150");
    runtime.register_function(0x08A5E7B4u, &recomp_unit_0150, "recomp_unit_0150");
    runtime.register_function(0x08A5E7BCu, &recomp_unit_0150, "recomp_unit_0150");
    runtime.register_function(0x08A5E7CCu, &recomp_unit_0150, "recomp_unit_0150");
    runtime.register_function(0x08A5E7ECu, &recomp_unit_0150, "recomp_unit_0150");
    runtime.register_function(0x08A5E7F4u, &recomp_unit_0150, "recomp_unit_0150");
    runtime.register_function(0x08A5E800u, &recomp_unit_0150, "recomp_unit_0150");
    runtime.register_function(0x08A5E818u, &recomp_unit_0150, "recomp_unit_0150");
    runtime.register_function(0x08A5E844u, &recomp_unit_0150, "recomp_unit_0150");
    runtime.register_function(0x08A5E85Cu, &recomp_unit_0150, "recomp_unit_0150");
    runtime.register_function(0x08A5E878u, &recomp_unit_0150, "recomp_unit_0150");
    runtime.register_function(0x08A5E8ACu, &recomp_unit_0150, "recomp_unit_0150");
    runtime.register_function(0x08A5E8D4u, &recomp_unit_0150, "recomp_unit_0150");
    runtime.register_function(0x08A5E8F0u, &recomp_unit_0150, "recomp_unit_0150");
    runtime.register_function(0x08A5E8FCu, &recomp_unit_0150, "recomp_unit_0150");
    runtime.register_function(0x08A5E910u, &recomp_unit_0150, "recomp_unit_0150");
    runtime.register_function(0x08A5E934u, &recomp_unit_0150, "recomp_unit_0150");
    runtime.register_function(0x08A5E938u, &recomp_unit_0150, "recomp_unit_0150");
    runtime.register_function(0x08A5E944u, &recomp_unit_0150, "recomp_unit_0150");
    runtime.register_function(0x08A5E950u, &recomp_unit_0150, "recomp_unit_0150");
    runtime.register_function(0x08A5E958u, &recomp_unit_0150, "recomp_unit_0150");
    runtime.register_function(0x08A5E95Cu, &recomp_unit_0150, "recomp_unit_0150");
    runtime.register_function(0x08A5E970u, &recomp_unit_0150, "recomp_unit_0150");
    runtime.register_function(0x08A5E990u, &recomp_unit_0150, "recomp_unit_0150");
    runtime.register_function(0x08A5E9A8u, &recomp_unit_0150, "recomp_unit_0150");
    runtime.register_function(0x08A5E9BCu, &recomp_unit_0150, "recomp_unit_0150");
    runtime.register_function(0x08A5E9D0u, &recomp_unit_0150, "recomp_unit_0150");
    runtime.register_function(0x08A5E9DCu, &recomp_unit_0150, "recomp_unit_0150");
    runtime.register_function(0x08A5E9E8u, &recomp_unit_0150, "recomp_unit_0150");
    runtime.register_function(0x08A5E9F4u, &recomp_unit_0150, "recomp_unit_0150");
    runtime.register_function(0x08A5EA00u, &recomp_unit_0150, "recomp_unit_0150");
    runtime.register_function(0x08A5EA14u, &recomp_unit_0150, "recomp_unit_0150");
    runtime.register_function(0x08A5EA40u, &recomp_unit_0150, "recomp_unit_0150");
    runtime.register_function(0x08A5EA50u, &recomp_unit_0150, "recomp_unit_0150");
    runtime.register_function(0x08A5EA64u, &recomp_unit_0150, "recomp_unit_0150");
    runtime.register_function(0x08A5EA6Cu, &recomp_unit_0150, "recomp_unit_0150");
    runtime.register_function(0x08A5EA8Cu, &recomp_unit_0150, "recomp_unit_0150");
    runtime.register_function(0x08A5EA94u, &recomp_unit_0150, "recomp_unit_0150");
    runtime.register_function(0x08A5EAA8u, &recomp_unit_0150, "recomp_unit_0150");
    runtime.register_function(0x08A5EAACu, &recomp_unit_0150, "recomp_unit_0150");
    runtime.register_function(0x08A5EAB8u, &recomp_unit_0150, "recomp_unit_0150");
    runtime.register_function(0x08A5EAD8u, &recomp_unit_0150, "recomp_unit_0150");
    runtime.register_function(0x08A5EB04u, &recomp_unit_0150, "recomp_unit_0150");
    runtime.register_function(0x08A5EB14u, &recomp_unit_0150, "recomp_unit_0150");
    runtime.register_function(0x08A5EB24u, &recomp_unit_0150, "recomp_unit_0150");
    runtime.register_function(0x08A5EB40u, &recomp_unit_0150, "recomp_unit_0150");
    runtime.register_function(0x08A5EB70u, &recomp_unit_0150, "recomp_unit_0150");
    runtime.register_function(0x08A5EB88u, &recomp_unit_0150, "recomp_unit_0150");
    runtime.register_function(0x08A5EB90u, &recomp_unit_0150, "recomp_unit_0150");
    runtime.register_function(0x08A5EB94u, &recomp_unit_0150, "recomp_unit_0150");
    runtime.register_function(0x08A5EBA0u, &recomp_unit_0150, "recomp_unit_0150");
    runtime.register_function(0x08A5EBB0u, &recomp_unit_0150, "recomp_unit_0150");
    runtime.register_function(0x08A5EBC4u, &recomp_unit_0150, "recomp_unit_0150");
    runtime.register_function(0x08A5EBD0u, &recomp_unit_0150, "recomp_unit_0150");
    runtime.register_function(0x08A5EBE8u, &recomp_unit_0150, "recomp_unit_0150");
    runtime.register_function(0x08A5EC00u, &recomp_unit_0150, "recomp_unit_0150");
    runtime.register_function(0x08A5EC08u, &recomp_unit_0150, "recomp_unit_0150");
    runtime.register_function(0x08A5EC0Cu, &recomp_unit_0150, "recomp_unit_0150");
    runtime.register_function(0x08A5EC18u, &recomp_unit_0150, "recomp_unit_0150");
    runtime.register_function(0x08A5EC28u, &recomp_unit_0150, "recomp_unit_0150");
    runtime.register_function(0x08A5EC3Cu, &recomp_unit_0150, "recomp_unit_0150");
    runtime.register_function(0x08A5EC48u, &recomp_unit_0150, "recomp_unit_0150");
    runtime.register_function(0x08A5EC60u, &recomp_unit_0150, "recomp_unit_0150");
    runtime.register_function(0x08A5EC78u, &recomp_unit_0150, "recomp_unit_0150");
    runtime.register_function(0x08A5EC80u, &recomp_unit_0150, "recomp_unit_0150");
    runtime.register_function(0x08A5EC84u, &recomp_unit_0150, "recomp_unit_0150");
    runtime.register_function(0x08A5EC90u, &recomp_unit_0150, "recomp_unit_0150");
    runtime.register_function(0x08A5ECA0u, &recomp_unit_0150, "recomp_unit_0150");
    runtime.register_function(0x08A5ECB4u, &recomp_unit_0150, "recomp_unit_0150");
    runtime.register_function(0x08A5ECC0u, &recomp_unit_0150, "recomp_unit_0150");
    runtime.register_function(0x08A5ECD4u, &recomp_unit_0150, "recomp_unit_0150");
    runtime.register_function(0x08A5ECF4u, &recomp_unit_0150, "recomp_unit_0150");
    runtime.register_function(0x08A5ED1Cu, &recomp_unit_0150, "recomp_unit_0150");
    runtime.register_function(0x08A5ED24u, &recomp_unit_0150, "recomp_unit_0150");
    runtime.register_function(0x08A5ED3Cu, &recomp_unit_0150, "recomp_unit_0150");
    runtime.register_function(0x08A5ED44u, &recomp_unit_0150, "recomp_unit_0150");
    runtime.register_function(0x08A5ED58u, &recomp_unit_0150, "recomp_unit_0150");
    runtime.register_function(0x08A5ED70u, &recomp_unit_0150, "recomp_unit_0150");
    runtime.register_function(0x08A5ED98u, &recomp_unit_0150, "recomp_unit_0150");
    runtime.register_function(0x08A5EDA0u, &recomp_unit_0150, "recomp_unit_0150");
    runtime.register_function(0x08A5EDB8u, &recomp_unit_0150, "recomp_unit_0150");
    runtime.register_function(0x08A5EDC0u, &recomp_unit_0150, "recomp_unit_0150");
    runtime.register_function(0x08A5EDD4u, &recomp_unit_0150, "recomp_unit_0150");
    runtime.register_function(0x08A5EDECu, &recomp_unit_0150, "recomp_unit_0150");
    runtime.register_function(0x08A5EE14u, &recomp_unit_0150, "recomp_unit_0150");
    runtime.register_function(0x08A5EE1Cu, &recomp_unit_0150, "recomp_unit_0150");
    runtime.register_function(0x08A5EE34u, &recomp_unit_0150, "recomp_unit_0150");
    runtime.register_function(0x08A5EE3Cu, &recomp_unit_0150, "recomp_unit_0150");
    runtime.register_function(0x08A5EE50u, &recomp_unit_0150, "recomp_unit_0150");
    runtime.register_function(0x08A5EE68u, &recomp_unit_0150, "recomp_unit_0150");
    runtime.register_function(0x08A5EE80u, &recomp_unit_0150, "recomp_unit_0150");
    runtime.register_function(0x08A5EE98u, &recomp_unit_0150, "recomp_unit_0150");
    runtime.register_function(0x08A5EEA0u, &recomp_unit_0150, "recomp_unit_0150");
    runtime.register_function(0x08A5EEACu, &recomp_unit_0150, "recomp_unit_0150");
    runtime.register_function(0x08A5EEC0u, &recomp_unit_0150, "recomp_unit_0150");
    runtime.register_function(0x08A5EEE0u, &recomp_unit_0150, "recomp_unit_0150");
    runtime.register_function(0x08A5EEECu, &recomp_unit_0150, "recomp_unit_0150");
    runtime.register_function(0x08A5EF04u, &recomp_unit_0150, "recomp_unit_0150");
    runtime.register_function(0x08A5EF24u, &recomp_unit_0150, "recomp_unit_0150");
    runtime.register_function(0x08A5EF38u, &recomp_unit_0150, "recomp_unit_0150");
    runtime.register_function(0x08A5EF44u, &recomp_unit_0150, "recomp_unit_0150");
    runtime.register_function(0x08A5EF4Cu, &recomp_unit_0150, "recomp_unit_0150");
    runtime.register_function(0x08A5EF68u, &recomp_unit_0150, "recomp_unit_0150");
    runtime.register_function(0x08A5EFA4u, &recomp_unit_0150, "recomp_unit_0150");
    runtime.register_function(0x08A5EFACu, &recomp_unit_0150, "recomp_unit_0150");
    runtime.register_function(0x08A5EFC4u, &recomp_unit_0150, "recomp_unit_0150");
    runtime.register_function(0x08A5EFE4u, &recomp_unit_0150, "recomp_unit_0150");
    runtime.register_function(0x08A5F000u, &recomp_unit_0150, "recomp_unit_0150");
    runtime.register_function(0x08A5F008u, &recomp_unit_0150, "recomp_unit_0150");
    runtime.register_function(0x08A5F014u, &recomp_unit_0150, "recomp_unit_0150");
    runtime.register_function(0x08A5F020u, &recomp_unit_0150, "recomp_unit_0150");
    runtime.register_function(0x08A5F030u, &recomp_unit_0150, "recomp_unit_0150");
    runtime.register_function(0x08A5F03Cu, &recomp_unit_0150, "recomp_unit_0150");
    runtime.register_function(0x08A5F050u, &recomp_unit_0150, "recomp_unit_0150");
    runtime.register_function(0x08A5F060u, &recomp_unit_0150, "recomp_unit_0150");
    runtime.register_function(0x08A5F070u, &recomp_unit_0150, "recomp_unit_0150");
    runtime.register_function(0x08A5F080u, &recomp_unit_0150, "recomp_unit_0150");
    runtime.register_function(0x08A5F08Cu, &recomp_unit_0150, "recomp_unit_0150");
    runtime.register_function(0x08A5F094u, &recomp_unit_0150, "recomp_unit_0150");
    runtime.register_function(0x08A5F0A0u, &recomp_unit_0150, "recomp_unit_0150");
    runtime.register_function(0x08A5F0A8u, &recomp_unit_0150, "recomp_unit_0150");
    runtime.register_function(0x08A5F0C8u, &recomp_unit_0150, "recomp_unit_0150");
    runtime.register_function(0x08A5F0D8u, &recomp_unit_0150, "recomp_unit_0150");
    runtime.register_function(0x08A5F0E4u, &recomp_unit_0150, "recomp_unit_0150");
    runtime.register_function(0x08A5F0ECu, &recomp_unit_0150, "recomp_unit_0150");
    runtime.register_function(0x08A5F100u, &recomp_unit_0150, "recomp_unit_0150");
    runtime.register_function(0x08A5F10Cu, &recomp_unit_0150, "recomp_unit_0150");
    runtime.register_function(0x08A5F11Cu, &recomp_unit_0150, "recomp_unit_0150");
    runtime.register_function(0x08A5F12Cu, &recomp_unit_0150, "recomp_unit_0150");
    runtime.register_function(0x08A5F134u, &recomp_unit_0150, "recomp_unit_0150");
    runtime.register_function(0x08A5F144u, &recomp_unit_0150, "recomp_unit_0150");
    runtime.register_function(0x08A5F14Cu, &recomp_unit_0150, "recomp_unit_0150");
    runtime.register_function(0x08A5F158u, &recomp_unit_0150, "recomp_unit_0150");
    runtime.register_function(0x08A5F164u, &recomp_unit_0150, "recomp_unit_0150");
    runtime.register_function(0x08A5F17Cu, &recomp_unit_0150, "recomp_unit_0150");
    runtime.register_function(0x08A5F184u, &recomp_unit_0150, "recomp_unit_0150");
    runtime.register_function(0x08A5F19Cu, &recomp_unit_0150, "recomp_unit_0150");
    runtime.register_function(0x08A5F1ACu, &recomp_unit_0150, "recomp_unit_0150");
    runtime.register_function(0x08A5F1B8u, &recomp_unit_0150, "recomp_unit_0150");
    runtime.register_function(0x08A5F1C0u, &recomp_unit_0150, "recomp_unit_0150");
    runtime.register_function(0x08A5F1CCu, &recomp_unit_0150, "recomp_unit_0150");
    runtime.register_function(0x08A5F1D4u, &recomp_unit_0150, "recomp_unit_0150");
    runtime.register_function(0x08A5F1E4u, &recomp_unit_0150, "recomp_unit_0150");
    runtime.register_function(0x08A5F1F4u, &recomp_unit_0150, "recomp_unit_0150");
    runtime.register_function(0x08A5F20Cu, &recomp_unit_0150, "recomp_unit_0150");
    runtime.register_function(0x08A5F220u, &recomp_unit_0150, "recomp_unit_0150");
    runtime.register_function(0x08A5F22Cu, &recomp_unit_0150, "recomp_unit_0150");
    runtime.register_function(0x08A5F234u, &recomp_unit_0150, "recomp_unit_0150");
    runtime.register_function(0x08A5F244u, &recomp_unit_0150, "recomp_unit_0150");
    runtime.register_function(0x08A5F27Cu, &recomp_unit_0150, "recomp_unit_0150");
    runtime.register_function(0x08A5F288u, &recomp_unit_0150, "recomp_unit_0150");
    runtime.register_function(0x08A5F294u, &recomp_unit_0150, "recomp_unit_0150");
    runtime.register_function(0x08A5F2B8u, &recomp_unit_0150, "recomp_unit_0150");
    runtime.register_function(0x08A5F2C4u, &recomp_unit_0150, "recomp_unit_0150");
    runtime.register_function(0x08A5F2D8u, &recomp_unit_0150, "recomp_unit_0150");
    runtime.register_function(0x08A5F2E0u, &recomp_unit_0150, "recomp_unit_0150");
    runtime.register_function(0x08A5F2E8u, &recomp_unit_0150, "recomp_unit_0150");
    runtime.register_function(0x08A5F2FCu, &recomp_unit_0150, "recomp_unit_0150");
    runtime.register_function(0x08A5F300u, &recomp_unit_0150, "recomp_unit_0150");
    runtime.register_function(0x08A5F31Cu, &recomp_unit_0150, "recomp_unit_0150");
    runtime.register_function(0x08A5F33Cu, &recomp_unit_0150, "recomp_unit_0150");
    runtime.register_function(0x08A5F344u, &recomp_unit_0150, "recomp_unit_0150");
    runtime.register_function(0x08A5F34Cu, &recomp_unit_0150, "recomp_unit_0150");
    runtime.register_function(0x08A5F350u, &recomp_unit_0150, "recomp_unit_0150");
    runtime.register_function(0x08A5F360u, &recomp_unit_0150, "recomp_unit_0150");
    runtime.register_function(0x08A5F378u, &recomp_unit_0150, "recomp_unit_0150");
    runtime.register_function(0x08A5F3D8u, &recomp_unit_0150, "recomp_unit_0150");
    runtime.register_function(0x08A5F404u, &recomp_unit_0150, "recomp_unit_0150");
    runtime.register_function(0x08A5F444u, &recomp_unit_0150, "recomp_unit_0150");
    runtime.register_function(0x08A5F454u, &recomp_unit_0150, "recomp_unit_0150");
    runtime.register_function(0x08A5F45Cu, &recomp_unit_0150, "recomp_unit_0150");
    runtime.register_function(0x08A5F46Cu, &recomp_unit_0150, "recomp_unit_0150");
    runtime.register_function(0x08A5F480u, &recomp_unit_0150, "recomp_unit_0150");
    runtime.register_function(0x08A5F484u, &recomp_unit_0150, "recomp_unit_0150");
    runtime.register_function(0x08A5F494u, &recomp_unit_0150, "recomp_unit_0150");
    runtime.register_function(0x08A5F4C4u, &recomp_unit_0150, "recomp_unit_0150");
    runtime.register_function(0x08A5F4DCu, &recomp_unit_0150, "recomp_unit_0150");
    runtime.register_function(0x08A5F4ECu, &recomp_unit_0150, "recomp_unit_0150");
    runtime.register_function(0x08A5F4F8u, &recomp_unit_0150, "recomp_unit_0150");
    runtime.register_function(0x08A5F504u, &recomp_unit_0150, "recomp_unit_0150");
    runtime.register_function(0x08A5F510u, &recomp_unit_0150, "recomp_unit_0150");
    runtime.register_function(0x08A5F52Cu, &recomp_unit_0150, "recomp_unit_0150");
    runtime.register_function(0x08A5F538u, &recomp_unit_0150, "recomp_unit_0150");
    runtime.register_function(0x08A5F544u, &recomp_unit_0150, "recomp_unit_0150");
    runtime.register_function(0x08A5F548u, &recomp_unit_0150, "recomp_unit_0150");
    runtime.register_function(0x08A5F558u, &recomp_unit_0150, "recomp_unit_0150");
    runtime.register_function(0x08A5F578u, &recomp_unit_0150, "recomp_unit_0150");
    runtime.register_function(0x08A5F5B4u, &recomp_unit_0150, "recomp_unit_0150");
    runtime.register_function(0x08A5F5DCu, &recomp_unit_0150, "recomp_unit_0150");
    runtime.register_function(0x08A5F5E4u, &recomp_unit_0150, "recomp_unit_0150");
    runtime.register_function(0x08A5F5F0u, &recomp_unit_0150, "recomp_unit_0150");
    runtime.register_function(0x08A5F5FCu, &recomp_unit_0150, "recomp_unit_0150");
    runtime.register_function(0x08A5F60Cu, &recomp_unit_0150, "recomp_unit_0150");
    runtime.register_function(0x08A5F614u, &recomp_unit_0150, "recomp_unit_0150");
    runtime.register_function(0x08A5F628u, &recomp_unit_0150, "recomp_unit_0150");
    runtime.register_function(0x08A5F62Cu, &recomp_unit_0150, "recomp_unit_0150");
    runtime.register_function(0x08A5F634u, &recomp_unit_0150, "recomp_unit_0150");
    runtime.register_function(0x08A5F638u, &recomp_unit_0150, "recomp_unit_0150");
    runtime.register_function(0x08A5F648u, &recomp_unit_0150, "recomp_unit_0150");
    runtime.register_function(0x08A5F650u, &recomp_unit_0150, "recomp_unit_0150");
    runtime.register_function(0x08A5F658u, &recomp_unit_0150, "recomp_unit_0150");
    runtime.register_function(0x08A5F664u, &recomp_unit_0150, "recomp_unit_0150");
    runtime.register_function(0x08A5F668u, &recomp_unit_0150, "recomp_unit_0150");
    runtime.register_function(0x08A5F69Cu, &recomp_unit_0150, "recomp_unit_0150");
    runtime.register_function(0x08A5F6C4u, &recomp_unit_0150, "recomp_unit_0150");
    runtime.register_function(0x08A5F6E0u, &recomp_unit_0150, "recomp_unit_0150");
    runtime.register_function(0x08A5F6F0u, &recomp_unit_0150, "recomp_unit_0150");
    runtime.register_function(0x08A5F710u, &recomp_unit_0150, "recomp_unit_0150");
    runtime.register_function(0x08A5F724u, &recomp_unit_0150, "recomp_unit_0150");
    runtime.register_function(0x08A5F734u, &recomp_unit_0150, "recomp_unit_0150");
    runtime.register_function(0x08A5F73Cu, &recomp_unit_0150, "recomp_unit_0150");
    runtime.register_function(0x08A5F748u, &recomp_unit_0150, "recomp_unit_0150");
    runtime.register_function(0x08A5F754u, &recomp_unit_0150, "recomp_unit_0150");
    runtime.register_function(0x08A5F760u, &recomp_unit_0150, "recomp_unit_0150");
    runtime.register_function(0x08A5F770u, &recomp_unit_0150, "recomp_unit_0150");
    runtime.register_function(0x08A5F784u, &recomp_unit_0150, "recomp_unit_0150");
    runtime.register_function(0x08A5F7A0u, &recomp_unit_0150, "recomp_unit_0150");
    runtime.register_function(0x08A5F7C8u, &recomp_unit_0150, "recomp_unit_0150");
    runtime.register_function(0x08A5F7DCu, &recomp_unit_0150, "recomp_unit_0150");
    runtime.register_function(0x08A5F7F0u, &recomp_unit_0150, "recomp_unit_0150");
    runtime.register_function(0x08A5F80Cu, &recomp_unit_0150, "recomp_unit_0150");
    runtime.register_function(0x08A5F828u, &recomp_unit_0150, "recomp_unit_0150");
    runtime.register_function(0x08A5F830u, &recomp_unit_0150, "recomp_unit_0150");
    runtime.register_function(0x08A5F858u, &recomp_unit_0150, "recomp_unit_0150");
    runtime.register_function(0x08A5F868u, &recomp_unit_0150, "recomp_unit_0150");
    runtime.register_function(0x08A5F87Cu, &recomp_unit_0150, "recomp_unit_0150");
    runtime.register_function(0x08A5F88Cu, &recomp_unit_0150, "recomp_unit_0150");
    runtime.register_function(0x08A5F8A0u, &recomp_unit_0150, "recomp_unit_0150");
    runtime.register_function(0x08A5F8B0u, &recomp_unit_0150, "recomp_unit_0150");
    runtime.register_function(0x08A5F8F4u, &recomp_unit_0150, "recomp_unit_0150");
    runtime.register_function(0x08A5F90Cu, &recomp_unit_0150, "recomp_unit_0150");
    runtime.register_function(0x08A5F914u, &recomp_unit_0150, "recomp_unit_0150");
    runtime.register_function(0x08A5F92Cu, &recomp_unit_0150, "recomp_unit_0150");
    runtime.register_function(0x08A5F950u, &recomp_unit_0150, "recomp_unit_0150");
    runtime.register_function(0x08A5F958u, &recomp_unit_0150, "recomp_unit_0150");
    runtime.register_function(0x08A5F964u, &recomp_unit_0150, "recomp_unit_0150");
    runtime.register_function(0x08A5F970u, &recomp_unit_0150, "recomp_unit_0150");
    runtime.register_function(0x08A5F974u, &recomp_unit_0150, "recomp_unit_0150");
    runtime.register_function(0x08A5F980u, &recomp_unit_0150, "recomp_unit_0150");
    runtime.register_function(0x08A5F98Cu, &recomp_unit_0150, "recomp_unit_0150");
    runtime.register_function(0x08A5F99Cu, &recomp_unit_0150, "recomp_unit_0150");
    runtime.register_function(0x08A5F9D0u, &recomp_unit_0150, "recomp_unit_0150");
    runtime.register_function(0x08A5F9D8u, &recomp_unit_0150, "recomp_unit_0150");
    runtime.register_function(0x08A5F9E8u, &recomp_unit_0150, "recomp_unit_0150");
    runtime.register_function(0x08A5FA20u, &recomp_unit_0150, "recomp_unit_0150");
    runtime.register_function(0x08A5FA4Cu, &recomp_unit_0150, "recomp_unit_0150");
    runtime.register_function(0x08A5FA60u, &recomp_unit_0150, "recomp_unit_0150");
    runtime.register_function(0x08A5FA74u, &recomp_unit_0150, "recomp_unit_0150");
    runtime.register_function(0x08A5FAA0u, &recomp_unit_0150, "recomp_unit_0150");
    runtime.register_function(0x08A5FAB0u, &recomp_unit_0150, "recomp_unit_0150");
    runtime.register_function(0x08A5FAC0u, &recomp_unit_0150, "recomp_unit_0150");
    runtime.register_function(0x08A5FAD4u, &recomp_unit_0150, "recomp_unit_0150");
    runtime.register_function(0x08A5FADCu, &recomp_unit_0150, "recomp_unit_0150");
    runtime.register_function(0x08A5FAE8u, &recomp_unit_0150, "recomp_unit_0150");
    runtime.register_function(0x08A5FAECu, &recomp_unit_0150, "recomp_unit_0150");
    runtime.register_function(0x08A5FAF8u, &recomp_unit_0150, "recomp_unit_0150");
    runtime.register_function(0x08A5FAFCu, &recomp_unit_0150, "recomp_unit_0150");
    runtime.register_function(0x08A5FB20u, &recomp_unit_0150, "recomp_unit_0150");
    runtime.register_function(0x08A5FB48u, &recomp_unit_0150, "recomp_unit_0150");
    runtime.register_function(0x08A5FB58u, &recomp_unit_0150, "recomp_unit_0150");
    runtime.register_function(0x08A5FB68u, &recomp_unit_0150, "recomp_unit_0150");
    runtime.register_function(0x08A5FB78u, &recomp_unit_0150, "recomp_unit_0150");
    runtime.register_function(0x08A5FB80u, &recomp_unit_0150, "recomp_unit_0150");
    runtime.register_function(0x08A5FB90u, &recomp_unit_0150, "recomp_unit_0150");
    runtime.register_function(0x08A5FB9Cu, &recomp_unit_0150, "recomp_unit_0150");
    runtime.register_function(0x08A5FBA0u, &recomp_unit_0150, "recomp_unit_0150");
    runtime.register_function(0x08A5FBACu, &recomp_unit_0150, "recomp_unit_0150");
    runtime.register_function(0x08A5FBB0u, &recomp_unit_0150, "recomp_unit_0150");
    runtime.register_function(0x08A5FBD0u, &recomp_unit_0150, "recomp_unit_0150");
    runtime.register_function(0x08A5FC24u, &recomp_unit_0150, "recomp_unit_0150");
    runtime.register_function(0x08A5FC38u, &recomp_unit_0150, "recomp_unit_0150");
    runtime.register_function(0x08A5FC48u, &recomp_unit_0150, "recomp_unit_0150");
    runtime.register_function(0x08A5FC54u, &recomp_unit_0150, "recomp_unit_0150");
    runtime.register_function(0x08A5FC74u, &recomp_unit_0150, "recomp_unit_0150");
    runtime.register_function(0x08A5FC8Cu, &recomp_unit_0150, "recomp_unit_0150");
    runtime.register_function(0x08A5FC94u, &recomp_unit_0150, "recomp_unit_0150");
    runtime.register_function(0x08A5FCB4u, &recomp_unit_0150, "recomp_unit_0150");
    runtime.register_function(0x08A5FCC4u, &recomp_unit_0150, "recomp_unit_0150");
    runtime.register_function(0x08A5FCE0u, &recomp_unit_0150, "recomp_unit_0150");
    runtime.register_function(0x08A5FCE4u, &recomp_unit_0150, "recomp_unit_0150");
    runtime.register_function(0x08A5FCE8u, &recomp_unit_0150, "recomp_unit_0150");
    runtime.register_function(0x08A5FCF8u, &recomp_unit_0150, "recomp_unit_0150");
    runtime.register_function(0x08A5FD00u, &recomp_unit_0150, "recomp_unit_0150");
    runtime.register_function(0x08A5FD0Cu, &recomp_unit_0150, "recomp_unit_0150");
    runtime.register_function(0x08A5FD38u, &recomp_unit_0150, "recomp_unit_0150");
    runtime.register_function(0x08A5FD44u, &recomp_unit_0150, "recomp_unit_0150");
    runtime.register_function(0x08A5FD64u, &recomp_unit_0150, "recomp_unit_0150");
    runtime.register_function(0x08A5FD80u, &recomp_unit_0150, "recomp_unit_0150");
    runtime.register_function(0x08A5FD9Cu, &recomp_unit_0150, "recomp_unit_0150");
    runtime.register_function(0x08A5FDB4u, &recomp_unit_0150, "recomp_unit_0150");
    runtime.register_function(0x08A5FDC4u, &recomp_unit_0150, "recomp_unit_0150");
    runtime.register_function(0x08A5FDD4u, &recomp_unit_0150, "recomp_unit_0150");
    runtime.register_function(0x08A5FDE4u, &recomp_unit_0150, "recomp_unit_0150");
    runtime.register_function(0x08A5FDF4u, &recomp_unit_0150, "recomp_unit_0150");
    runtime.register_function(0x08A5FE04u, &recomp_unit_0150, "recomp_unit_0150");
    runtime.register_function(0x08A5FE0Cu, &recomp_unit_0150, "recomp_unit_0150");
    runtime.register_function(0x08A5FE14u, &recomp_unit_0150, "recomp_unit_0150");
    runtime.register_function(0x08A5FE24u, &recomp_unit_0150, "recomp_unit_0150");
    runtime.register_function(0x08A5FE2Cu, &recomp_unit_0150, "recomp_unit_0150");
    runtime.register_function(0x08A5FE38u, &recomp_unit_0150, "recomp_unit_0150");
    runtime.register_function(0x08A5FE4Cu, &recomp_unit_0150, "recomp_unit_0150");
    runtime.register_function(0x08A5FE50u, &recomp_unit_0150, "recomp_unit_0150");
    runtime.register_function(0x08A5FE60u, &recomp_unit_0150, "recomp_unit_0150");
    runtime.register_function(0x08A5FE70u, &recomp_unit_0150, "recomp_unit_0150");
    runtime.register_function(0x08A5FE8Cu, &recomp_unit_0150, "recomp_unit_0150");
    runtime.register_function(0x08A5FE94u, &recomp_unit_0150, "recomp_unit_0150");
    runtime.register_function(0x08A5FEA8u, &recomp_unit_0150, "recomp_unit_0150");
    runtime.register_function(0x08A5FEBCu, &recomp_unit_0150, "recomp_unit_0150");
    runtime.register_function(0x08A5FED8u, &recomp_unit_0150, "recomp_unit_0150");
    runtime.register_function(0x08A5FEDCu, &recomp_unit_0150, "recomp_unit_0150");
    runtime.register_function(0x08A5FEE0u, &recomp_unit_0150, "recomp_unit_0150");
    runtime.register_function(0x08A5FEF0u, &recomp_unit_0150, "recomp_unit_0150");
    runtime.register_function(0x08A5FF24u, &recomp_unit_0150, "recomp_unit_0150");
    runtime.register_function(0x08A5FF4Cu, &recomp_unit_0150, "recomp_unit_0150");
    runtime.register_function(0x08A5FF70u, &recomp_unit_0150, "recomp_unit_0150");
    runtime.register_function(0x08A5FF78u, &recomp_unit_0150, "recomp_unit_0150");
    runtime.register_function(0x08A5FF80u, &recomp_unit_0150, "recomp_unit_0150");
    runtime.register_function(0x08A5FF8Cu, &recomp_unit_0150, "recomp_unit_0150");
    runtime.register_function(0x08A5FF94u, &recomp_unit_0150, "recomp_unit_0150");
    runtime.register_function(0x08A5FFA0u, &recomp_unit_0150, "recomp_unit_0150");
    runtime.register_function(0x08A5FFA4u, &recomp_unit_0150, "recomp_unit_0150");
    runtime.register_function(0x08A5FFB8u, &recomp_unit_0150, "recomp_unit_0150");
    runtime.register_function(0x08A5FFBCu, &recomp_unit_0150, "recomp_unit_0150");
    runtime.register_function(0x08A5FFD8u, &recomp_unit_0150, "recomp_unit_0150");
}
} // namespace psprecomp
