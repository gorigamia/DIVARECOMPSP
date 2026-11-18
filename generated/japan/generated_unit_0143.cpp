#include "psprecomp/runtime.hpp"
#include "generated_units.hpp"
#include <bit>
#include <cmath>
#include <cstdint>
#include <limits>

namespace psprecomp {
static const std::uint16_t kEntryIds_recomp_unit_0143[4094] = {
    1, 0, 0, 2, 0, 0, 3, 0, 0, 4, 0, 0, 0, 0, 0, 0, 5, 0, 0, 6, 0, 0, 7, 0, 0, 8, 0, 0, 0, 0, 9, 0,
    10, 0, 0, 0, 0, 0, 11, 0, 0, 12, 0, 0, 13, 0, 0, 14, 0, 0, 0, 0, 0, 0, 15, 0, 0, 16, 0, 0, 17, 0, 0, 18,
    0, 19, 0, 0, 0, 0, 20, 0, 0, 21, 0, 22, 23, 0, 0, 0, 0, 0, 24, 25, 0, 0, 0, 0, 0, 26, 0, 0, 0, 0, 0, 0,
    0, 0, 27, 0, 0, 0, 28, 0, 0, 0, 0, 0, 29, 0, 0, 0, 0, 0, 0, 30, 0, 0, 0, 0, 0, 0, 0, 31, 0, 0, 0, 0,
    0, 0, 0, 0, 32, 0, 0, 0, 33, 0, 0, 0, 0, 0, 34, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 35, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 36, 0, 0, 0, 37, 0, 38, 0, 0, 39, 0, 0, 0, 40, 0, 0, 0, 0, 41, 0, 0, 0, 0, 0,
    42, 0, 43, 0, 0, 0, 44, 0, 0, 0, 0, 45, 0, 0, 0, 0, 0, 46, 0, 0, 0, 0, 0, 0, 0, 47, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 48, 0, 0, 0, 0, 0, 49, 0, 50, 0, 0, 0, 0, 0, 51, 0, 0, 0, 0, 0, 0, 52, 0, 0, 0, 0,
    0, 53, 0, 0, 0, 0, 0, 0, 0, 54, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 55, 0, 0, 56, 0, 0, 0,
    0, 57, 0, 58, 0, 0, 59, 0, 0, 0, 0, 0, 0, 60, 0, 61, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 62, 0, 0, 0, 0, 0,
    0, 63, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 64, 0, 0, 65, 0, 0, 0, 0, 66, 0, 0, 0,
    0, 0, 0, 67, 0, 68, 0, 0, 69, 0, 0, 0, 0, 0, 0, 70, 0, 0, 0, 0, 71, 0, 0, 0, 0, 0, 0, 72, 0, 73, 0, 0,
    0, 0, 0, 74, 0, 0, 75, 0, 76, 0, 0, 0, 0, 0, 0, 0, 0, 77, 0, 0, 0, 0, 0, 0, 0, 0, 78, 0, 0, 0, 0, 0,
    0, 0, 0, 79, 0, 80, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 81, 0, 0, 0, 0, 0, 82, 0, 0, 0, 0, 0, 0, 83,
    0, 0, 0, 84, 0, 0, 0, 0, 0, 85, 0, 0, 86, 0, 0, 87, 0, 0, 88, 0, 0, 89, 0, 0, 0, 90, 0, 0, 0, 0, 0, 91,
    0, 0, 0, 92, 0, 0, 93, 0, 0, 94, 0, 0, 0, 0, 0, 95, 0, 0, 96, 0, 0, 0, 0, 0, 0, 97, 0, 0, 0, 0, 0, 98,
    0, 0, 0, 0, 0, 0, 0, 99, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 100, 0, 0, 0, 0, 0, 101, 0, 102, 0,
    0, 103, 0, 0, 0, 0, 0, 104, 0, 0, 0, 0, 0, 0, 105, 0, 0, 0, 0, 0, 106, 0, 107, 0, 0, 0, 0, 0, 108, 0, 0, 0,
    0, 0, 0, 109, 0, 0, 0, 0, 0, 110, 0, 0, 0, 0, 111, 0, 0, 0, 0, 0, 0, 0, 112, 0, 0, 0, 0, 0, 0, 0, 0, 113,
    0, 0, 0, 0, 0, 0, 0, 0, 114, 0, 0, 0, 115, 0, 0, 0, 0, 0, 116, 0, 0, 0, 0, 0, 0, 0, 117, 0, 0, 0, 118, 0,
    0, 0, 0, 0, 119, 0, 0, 0, 0, 0, 0, 0, 120, 0, 0, 0, 121, 0, 0, 0, 0, 0, 122, 0, 0, 0, 0, 0, 0, 123, 0, 124,
    0, 0, 125, 0, 126, 0, 0, 0, 0, 0, 127, 0, 0, 0, 0, 128, 0, 0, 0, 129, 0, 130, 0, 131, 0, 0, 132, 0, 0, 133, 0, 0,
    0, 134, 0, 0, 135, 0, 0, 136, 0, 0, 0, 137, 0, 0, 138, 0, 0, 139, 0, 0, 0, 140, 0, 0, 141, 0, 0, 142, 0, 0, 0, 143,
    0, 0, 144, 0, 0, 145, 0, 0, 0, 146, 0, 0, 147, 0, 0, 148, 0, 0, 0, 149, 0, 0, 150, 0, 0, 151, 0, 0, 0, 152, 0, 0,
    153, 0, 0, 154, 0, 0, 0, 155, 0, 0, 156, 0, 0, 157, 0, 0, 0, 158, 0, 0, 159, 0, 0, 160, 0, 0, 0, 161, 0, 0, 162, 0,
    0, 163, 0, 0, 0, 164, 0, 0, 165, 0, 0, 166, 0, 0, 0, 167, 0, 0, 168, 0, 0, 169, 0, 0, 0, 170, 0, 0, 171, 0, 0, 172,
    0, 0, 0, 173, 0, 0, 174, 0, 0, 175, 0, 0, 0, 176, 0, 0, 177, 0, 0, 178, 0, 0, 0, 179, 0, 0, 180, 0, 0, 181, 0, 0,
    0, 182, 0, 0, 183, 0, 0, 184, 0, 0, 0, 185, 0, 0, 186, 0, 0, 187, 0, 0, 0, 188, 0, 0, 189, 0, 0, 190, 0, 0, 0, 191,
    0, 0, 192, 0, 0, 193, 0, 0, 0, 194, 0, 0, 195, 0, 0, 196, 0, 0, 0, 197, 0, 0, 198, 0, 0, 199, 0, 0, 0, 200, 0, 0,
    201, 0, 0, 202, 0, 0, 0, 203, 0, 0, 204, 0, 0, 205, 0, 0, 0, 206, 0, 0, 207, 0, 0, 208, 0, 0, 0, 209, 0, 0, 210, 0,
    0, 211, 0, 0, 0, 212, 0, 0, 213, 0, 0, 214, 0, 0, 0, 215, 0, 0, 216, 0, 0, 217, 0, 0, 0, 218, 0, 0, 219, 0, 0, 220,
    0, 0, 0, 221, 0, 0, 222, 0, 0, 223, 0, 0, 0, 224, 0, 0, 225, 0, 0, 226, 0, 0, 0, 227, 0, 0, 228, 0, 0, 229, 0, 0,
    0, 230, 0, 0, 231, 0, 0, 232, 0, 0, 0, 233, 0, 0, 234, 0, 0, 235, 0, 0, 0, 236, 0, 0, 237, 0, 0, 238, 0, 0, 0, 239,
    0, 0, 240, 0, 0, 241, 0, 0, 0, 242, 0, 0, 243, 0, 0, 244, 0, 0, 0, 245, 0, 0, 246, 0, 0, 247, 0, 248, 0, 0, 0, 0,
    249, 0, 0, 0, 250, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 251, 0, 0, 0, 0, 0, 252, 0, 0, 0, 0, 253, 0, 0, 254, 0, 0,
    255, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 256, 0, 0, 0, 0, 0, 0, 257, 0, 0, 258, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 259, 0, 0, 0, 0, 0, 0, 260, 0, 0, 0, 0, 261, 0, 0, 262, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 263, 0, 0, 264, 265, 0, 266, 0, 0, 267, 0, 0, 0, 0, 0, 0, 268, 0, 0, 0, 269, 0, 0, 0, 270,
    0, 0, 0, 271, 0, 0, 272, 273, 274, 0, 0, 275, 0, 0, 0, 276, 0, 0, 277, 278, 0, 0, 0, 0, 0, 279, 0, 0, 0, 0, 280, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 281, 0, 0, 0, 0, 0, 282, 0, 0, 0, 0, 0, 0, 0, 283, 0, 0, 0, 0,
    284, 0, 0, 0, 0, 285, 0, 0, 0, 286, 0, 0, 0, 0, 287, 0, 0, 0, 0, 288, 0, 0, 0, 289, 0, 0, 0, 0, 290, 0, 0, 0,
    0, 291, 0, 0, 0, 0, 292, 0, 0, 0, 0, 293, 0, 0, 0, 294, 0, 0, 0, 0, 295, 0, 0, 0, 0, 296, 0, 0, 0, 0, 297, 0,
    0, 0, 298, 0, 0, 0, 0, 299, 0, 0, 0, 0, 300, 0, 0, 0, 0, 0, 301, 0, 302, 0, 0, 0, 0, 303, 0, 304, 0, 0, 0, 0,
    305, 0, 0, 0, 0, 306, 0, 0, 0, 0, 307, 0, 0, 0, 0, 308, 0, 0, 0, 0, 0, 0, 309, 0, 0, 0, 0, 310, 0, 0, 0, 0,
    311, 0, 0, 0, 0, 312, 0, 0, 0, 0, 0, 313, 0, 314, 0, 0, 0, 0, 315, 0, 316, 0, 0, 0, 0, 317, 0, 0, 0, 0, 318, 0,
    0, 0, 0, 319, 0, 0, 0, 0, 320, 0, 0, 0, 0, 321, 0, 0, 0, 0, 322, 0, 0, 0, 323, 0, 0, 0, 0, 324, 0, 0, 0, 325,
    0, 0, 0, 0, 326, 0, 0, 0, 327, 0, 0, 328, 0, 329, 0, 0, 0, 0, 330, 0, 0, 0, 331, 0, 0, 332, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 333, 0, 0, 0, 0, 0, 0, 0, 334, 0, 0, 0, 335, 0, 336, 0, 0, 0, 337, 0, 0, 0, 0, 0, 0, 338, 0, 339, 0,
    340, 0, 0, 0, 341, 0, 0, 0, 0, 0, 0, 342, 0, 343, 0, 344, 0, 0, 0, 345, 0, 0, 0, 0, 0, 0, 346, 0, 347, 0, 348, 0,
    0, 0, 349, 0, 0, 0, 0, 0, 0, 350, 0, 351, 0, 352, 0, 0, 0, 353, 0, 0, 0, 0, 0, 0, 354, 0, 355, 0, 356, 0, 0, 0,
    357, 0, 0, 0, 0, 0, 0, 358, 0, 359, 0, 360, 0, 0, 0, 361, 0, 0, 0, 0, 0, 0, 362, 0, 363, 0, 364, 0, 0, 0, 365, 0,
    0, 0, 0, 0, 0, 366, 0, 367, 0, 368, 0, 0, 0, 369, 0, 0, 0, 0, 0, 0, 370, 0, 371, 0, 372, 0, 0, 0, 373, 0, 0, 0,
    0, 0, 0, 374, 0, 375, 0, 376, 0, 0, 0, 377, 0, 0, 0, 0, 0, 0, 378, 0, 379, 0, 380, 0, 0, 0, 381, 0, 0, 0, 0, 0,
    0, 382, 0, 383, 0, 384, 0, 0, 0, 385, 0, 0, 0, 0, 0, 0, 386, 0, 387, 0, 388, 0, 0, 0, 389, 0, 0, 0, 0, 0, 0, 390,
    0, 391, 0, 392, 0, 0, 0, 393, 0, 0, 0, 0, 0, 0, 394, 0, 395, 0, 396, 0, 0, 0, 397, 0, 0, 0, 0, 0, 0, 398, 0, 399,
    0, 400, 0, 0, 0, 401, 0, 0, 0, 0, 0, 0, 402, 0, 403, 0, 404, 0, 0, 0, 405, 0, 0, 0, 0, 0, 0, 406, 0, 407, 0, 408,
    0, 0, 0, 409, 0, 0, 0, 0, 0, 0, 410, 0, 411, 0, 412, 0, 0, 0, 413, 0, 0, 0, 0, 0, 0, 414, 0, 415, 0, 416, 0, 0,
    0, 417, 0, 0, 0, 0, 0, 0, 418, 0, 419, 0, 420, 0, 0, 0, 421, 0, 0, 0, 0, 0, 0, 422, 0, 423, 0, 424, 0, 0, 0, 425,
    0, 0, 0, 0, 0, 0, 426, 0, 427, 0, 428, 0, 0, 0, 429, 0, 0, 0, 0, 0, 0, 430, 0, 431, 0, 432, 0, 0, 0, 433, 0, 0,
    0, 0, 0, 0, 434, 0, 435, 0, 436, 0, 0, 0, 437, 0, 0, 0, 0, 0, 0, 438, 0, 439, 0, 440, 0, 0, 0, 441, 0, 0, 0, 0,
    0, 0, 442, 0, 443, 0, 444, 0, 0, 0, 445, 0, 0, 0, 0, 0, 0, 446, 0, 447, 0, 448, 0, 0, 0, 449, 0, 0, 0, 0, 0, 0,
    450, 0, 451, 0, 452, 0, 0, 0, 453, 0, 0, 0, 0, 0, 0, 454, 0, 455, 0, 456, 0, 0, 0, 457, 0, 0, 0, 0, 0, 0, 458, 0,
    459, 0, 460, 0, 0, 0, 461, 0, 0, 0, 0, 0, 0, 462, 0, 463, 0, 464, 0, 0, 0, 465, 0, 0, 0, 0, 0, 0, 466, 0, 467, 0,
    468, 0, 0, 0, 469, 0, 0, 0, 0, 0, 0, 470, 0, 471, 0, 472, 0, 0, 0, 473, 0, 0, 0, 0, 0, 0, 474, 0, 475, 0, 476, 0,
    0, 0, 477, 0, 0, 0, 0, 0, 0, 478, 0, 479, 0, 480, 0, 0, 0, 481, 0, 0, 0, 0, 0, 0, 482, 0, 483, 0, 484, 0, 0, 0,
    485, 0, 0, 0, 0, 0, 0, 486, 0, 487, 0, 488, 0, 0, 0, 489, 0, 0, 0, 0, 0, 0, 490, 0, 491, 0, 492, 0, 0, 493, 0, 0,
    0, 0, 494, 0, 0, 0, 0, 0, 495, 0, 0, 0, 496, 0, 0, 0, 497, 0, 0, 0, 498, 0, 0, 0, 499, 0, 0, 0, 500, 0, 0, 0,
    501, 0, 0, 0, 0, 502, 0, 0, 0, 503, 0, 0, 0, 0, 504, 0, 0, 0, 505, 0, 0, 0, 0, 0, 0, 506, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 507, 0, 0, 0, 0, 508, 0, 0, 0, 509, 0, 0, 0, 0, 0, 0, 510, 0, 0, 0, 0, 0, 0, 511,
    0, 0, 0, 512, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 513, 0, 514, 0, 0, 515, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 516, 0, 0, 0, 0, 517, 0, 518, 0, 0, 519, 0, 0, 520, 0, 521, 0, 0, 0, 522, 0, 0, 523, 0, 0, 0,
    0, 524, 0, 0, 525, 0, 0, 0, 0, 526, 0, 527, 0, 0, 0, 0, 528, 0, 529, 0, 0, 0, 0, 530, 0, 0, 531, 0, 0, 0, 0, 532,
    533, 0, 0, 0, 534, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 535, 0, 0, 0, 0, 0, 0, 0, 0, 0, 536, 0, 537, 0, 0, 538, 0,
    0, 539, 0, 540, 0, 0, 541, 0, 542, 0, 0, 543, 0, 544, 0, 0, 0, 0, 0, 0, 0, 545, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 546, 0, 0, 0, 0, 0, 547, 0, 0, 0, 0, 0, 548, 0, 0, 0, 0, 0, 0, 549, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 550, 0, 551, 552, 0, 0, 0, 0, 553, 0, 554, 0, 0, 0, 0, 0, 0, 555, 0, 0, 0, 556, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 557, 0, 558, 0, 0, 559, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 560, 0,
    0, 0, 0, 561, 0, 562, 0, 0, 563, 0, 0, 564, 0, 565, 0, 0, 0, 566, 0, 0, 567, 0, 0, 0, 0, 568, 0, 0, 569, 0, 0, 0,
    570, 0, 571, 0, 0, 0, 572, 0, 573, 0, 0, 0, 574, 0, 0, 575, 0, 0, 0, 0, 576, 577, 0, 0, 0, 578, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 579, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 580, 0, 0, 581, 0, 582, 0, 0, 583, 0, 584, 0, 0, 0, 585, 0,
    586, 0, 0, 0, 0, 0, 0, 0, 587, 0, 0, 0, 588, 0, 589, 0, 0, 590, 0, 0, 591, 0, 592, 0, 0, 0, 0, 0, 593, 0, 594, 0,
    0, 0, 0, 0, 595, 0, 596, 0, 0, 0, 0, 0, 0, 0, 597, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 598, 0, 0, 0, 0, 0,
    0, 599, 0, 0, 0, 600, 0, 0, 0, 0, 0, 0, 601, 0, 0, 0, 0, 0, 602, 0, 0, 0, 0, 0, 0, 0, 0, 603, 0, 0, 604, 0,
    0, 0, 0, 0, 605, 0, 0, 0, 0, 0, 606, 0, 0, 0, 607, 0, 0, 0, 0, 0, 608, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    609, 0, 0, 0, 0, 610, 0, 0, 0, 0, 611, 0, 0, 0, 0, 0, 612, 0, 613, 614, 0, 0, 615, 0, 0, 0, 616, 0, 0, 0, 0, 617,
    0, 0, 618, 619, 0, 620, 0, 621, 0, 0, 0, 0, 622, 0, 0, 0, 0, 623, 0, 0, 0, 0, 624, 0, 0, 0, 0, 0, 0, 625, 0, 0,
    0, 0, 626, 0, 627, 0, 0, 628, 0, 0, 629, 0, 0, 0, 0, 630, 0, 0, 0, 631, 0, 0, 0, 632, 0, 633, 0, 0, 0, 634, 0, 0,
    0, 0, 635, 0, 0, 0, 0, 636, 0, 0, 0, 0, 637, 0, 0, 0, 0, 638, 0, 0, 0, 639, 0, 0, 0, 640, 0, 0, 0, 641, 0, 0,
    642, 643, 0, 0, 0, 0, 0, 0, 0, 0, 644, 0, 0, 0, 645, 0, 0, 0, 0, 646, 0, 0, 0, 647, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 648, 0, 0, 649, 0, 650, 0, 0, 651, 0, 0, 652, 0, 0, 0, 0, 653, 0, 0, 0, 0, 0, 654, 0, 0, 0, 0, 655, 0, 0, 0,
    0, 656, 0, 0, 0, 0, 657, 0, 0, 0, 658, 0, 0, 0, 0, 659, 0, 0, 0, 660, 0, 0, 0, 661, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 662, 0, 0, 0, 0, 0, 663, 0, 0, 664, 0, 0, 0, 0, 665, 0, 666, 0, 0, 0, 667, 668, 0, 0, 669,
    0, 670, 0, 0, 0, 671, 0, 0, 0, 0, 672, 0, 0, 0, 0, 0, 0, 673, 0, 0, 0, 674, 675, 0, 0, 676, 0, 0, 0, 0, 0, 677,
    0, 0, 0, 678, 0, 0, 0, 679, 0, 0, 0, 0, 0, 0, 0, 0, 0, 680, 0, 0, 0, 0, 0, 0, 0, 681, 0, 0, 0, 0, 682, 0,
    0, 683, 0, 0, 0, 0, 0, 0, 684, 0, 0, 0, 685, 0, 0, 0, 686, 0, 0, 0, 0, 687, 0, 0, 0, 0, 0, 0, 0, 688, 0, 0,
    0, 0, 689, 0, 0, 0, 0, 0, 0, 0, 690, 0, 0, 0, 0, 0, 0, 0, 691, 0, 0, 0, 692, 0, 0, 0, 693, 0, 0, 0, 0, 0,
    694, 0, 695, 0, 0, 0, 696, 0, 0, 0, 0, 697, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 698, 0, 699, 0, 0, 700, 0, 0, 701, 0,
    0, 0, 0, 702, 0, 0, 0, 703, 0, 0, 0, 0, 0, 704, 0, 705, 0, 0, 0, 0, 706, 0, 707, 0, 0, 0, 0, 0, 708, 0, 709, 0,
    0, 0, 0, 0, 0, 0, 710, 0, 711, 0, 0, 0, 0, 0, 0, 712, 0, 0, 713, 0, 0, 714, 0, 0, 715, 0, 0, 716, 717, 0, 0, 718,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 719, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    720, 0, 721, 0, 0, 0, 0, 0, 0, 0, 0, 722, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 723, 0, 0, 0, 0, 0,
    0, 0, 0, 724, 0, 725, 0, 0, 726, 0, 0, 0, 0, 727, 0, 0, 0, 728, 0, 0, 0, 0, 0, 0, 729, 0, 0, 0, 0, 0, 730, 731,
    0, 0, 732, 733, 0, 0, 734, 0, 0, 735, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 736, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 737, 0, 0, 0, 738, 0, 0, 0, 739, 0, 0, 740, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 741, 0, 0, 0, 0, 742, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 743, 0, 744, 0, 0, 745, 0, 0, 746, 0, 0, 0, 0,
    0, 0, 0, 0, 747, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 748, 0, 0, 0, 0, 0, 0, 0, 0, 749,
    0, 0, 0, 0, 0, 750, 0, 751, 752, 0, 0, 753, 754, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 755, 0, 0, 756, 0, 0, 757, 0, 758,
    0, 0, 759, 0, 0, 0, 0, 0, 0, 0, 0, 760, 0, 0, 0, 0, 761, 0, 762, 0, 0, 763, 0, 0, 764, 0, 0, 0, 0, 0, 765, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 766, 0, 0, 0, 0, 0, 767, 0, 768, 769, 0, 0, 770, 771, 0, 0,
    772, 0, 0, 773, 0, 0, 774, 0, 0, 0, 0, 775, 0, 0, 0, 0, 0, 776, 0, 0, 0, 0, 777, 0, 0, 0, 0, 778, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 779, 0, 0, 0, 0, 780, 0, 0, 0, 0, 781, 0, 0, 0, 0, 0, 0, 0, 0, 782, 0, 783, 0, 0, 0, 0, 0,
    0, 0, 784, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 785, 0, 0, 0, 786, 0, 0, 0,
    0, 787, 0, 788, 0, 0, 0, 789, 0, 0, 790, 0, 0, 0, 0, 791, 0, 792, 0, 0, 793, 0, 0, 0, 794, 0, 0, 0, 0, 0, 0, 795,
    0, 0, 0, 796, 0, 0, 797, 0, 798, 0, 0, 799, 0, 0, 0, 800, 801, 0, 0, 802, 0, 803, 0, 0, 804, 0, 0, 805, 0, 0, 0, 0,
    0, 0, 806, 0, 0, 0, 0, 0, 807, 808, 0, 0, 809, 0, 810, 0, 0, 0, 811, 0, 0, 812, 0, 0, 0, 0, 813, 0, 0, 0, 814, 0,
    0, 0, 0, 815, 0, 0, 0, 0, 0, 0, 0, 0, 0, 816, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 817, 0, 0, 818, 0, 0, 0, 819, 0, 0, 820, 0, 0, 0, 0, 0, 0, 0, 0, 0, 821, 0, 0, 0, 0, 0, 0, 822, 0, 0, 0,
    0, 0, 0, 0, 0, 823, 0, 0, 0, 0, 824, 0, 0, 0, 0, 0, 0, 0, 0, 825, 0, 0, 0, 0, 826, 0, 0, 0, 0, 0, 0, 0,
    0, 827, 0, 0, 0, 828, 0, 0, 0, 0, 0, 0, 0, 0, 829, 0, 0, 0, 830, 0, 0, 0, 0, 0, 0, 0, 0, 831, 0, 0, 0, 832,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 833, 0, 0, 0, 834, 0, 0, 0, 835, 0, 0, 0, 0, 836, 0, 0, 0, 837, 0, 0, 0, 838, 0,
    0, 0, 839, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 840, 0, 0, 0, 0, 0, 841, 0, 842, 843, 0, 0, 844, 0, 0, 0, 845, 0,
    0, 0, 0, 846, 0, 0, 847, 0, 0, 0, 0, 0, 848, 0, 0, 0, 0, 0, 849, 0, 850, 851, 0, 0, 852, 0, 0, 0, 853, 0, 0, 0,
    0, 854, 0, 0, 855, 0, 0, 0, 0, 0, 856, 0, 0, 0, 857, 0, 858, 0, 0, 0, 0, 859, 0, 0, 860, 0, 0, 0, 0, 0, 0, 0,
    861, 0, 0, 0, 862, 0, 0, 0, 0, 0, 863, 0, 864, 0, 0, 865, 0, 0, 866, 0, 0, 0, 0, 0, 0, 0, 867, 0, 0, 0, 0, 0,
    0, 868, 0, 0, 0, 869, 0, 870, 0, 0, 871, 0, 0, 872, 0, 0, 0, 0, 0, 0, 0, 873, 0, 0, 0, 874, 0, 875, 0, 0, 876, 0,
    0, 877, 0, 0, 0, 0, 0, 0, 0, 878, 0, 0, 0, 879, 0, 880, 0, 0, 881, 0, 0, 882, 0, 0, 0, 0, 883, 0, 0, 0, 0, 0,
    0, 884, 0, 0, 0, 885, 0, 0, 0, 0, 0, 886, 0, 0, 0, 0, 0, 0, 887, 0, 888, 0, 889, 0, 0, 0, 890, 0, 0, 0, 0, 0,
    0, 891, 0, 892, 0, 893, 0, 0, 0, 894, 0, 0, 0, 0, 0, 0, 895, 0, 896, 0, 897, 0, 0, 0, 0, 898, 0, 0, 0, 899,
};
void recomp_unit_0143_entry(Runtime &rt, AllegrexContext &ctx, std::uint16_t direct_entry_id, GuestMemory::AotFastView &aot_mem) {
    std::uint32_t jump_target = 0u;
    std::uint32_t local_transfers = 0u;
    std::uint32_t local_pc = ctx.pc;
    std::uint32_t entry_id = direct_entry_id;
LOCAL_DISPATCH:
    {
    if (entry_id == 0u) {
        const std::uint32_t entry_delta = local_pc - 0x08A40000u;
        entry_id = (entry_delta < 16376u && (entry_delta & 3u) == 0u) ? kEntryIds_recomp_unit_0143[entry_delta >> 2u] : 0u;
    }
    switch (entry_id) {
    case 1u: goto L_08A40000;
    case 2u: goto L_08A4000C;
    case 3u: goto L_08A40018;
    case 4u: goto L_08A40024;
    case 5u: goto L_08A40040;
    case 6u: goto L_08A4004C;
    case 7u: goto L_08A40058;
    case 8u: goto L_08A40064;
    case 9u: goto L_08A40078;
    case 10u: goto L_08A40080;
    case 11u: goto L_08A40098;
    case 12u: goto L_08A400A4;
    case 13u: goto L_08A400B0;
    case 14u: goto L_08A400BC;
    case 15u: goto L_08A400D8;
    case 16u: goto L_08A400E4;
    case 17u: goto L_08A400F0;
    case 18u: goto L_08A400FC;
    case 19u: goto L_08A40104;
    case 20u: goto L_08A40118;
    case 21u: goto L_08A40124;
    case 22u: goto L_08A4012C;
    case 23u: goto L_08A40130;
    case 24u: goto L_08A40148;
    case 25u: goto L_08A4014C;
    case 26u: goto L_08A40164;
    case 27u: goto L_08A40188;
    case 28u: goto L_08A40198;
    case 29u: goto L_08A401B0;
    case 30u: goto L_08A401CC;
    case 31u: goto L_08A401EC;
    case 32u: goto L_08A40210;
    case 33u: goto L_08A40220;
    case 34u: goto L_08A40238;
    case 35u: goto L_08A4026C;
    case 36u: goto L_08A402A0;
    case 37u: goto L_08A402B0;
    case 38u: goto L_08A402B8;
    case 39u: goto L_08A402C4;
    case 40u: goto L_08A402D4;
    case 41u: goto L_08A402E8;
    case 42u: goto L_08A40300;
    case 43u: goto L_08A40308;
    case 44u: goto L_08A40318;
    case 45u: goto L_08A4032C;
    case 46u: goto L_08A40344;
    case 47u: goto L_08A40364;
    case 48u: goto L_08A40398;
    case 49u: goto L_08A403B0;
    case 50u: goto L_08A403B8;
    case 51u: goto L_08A403D0;
    case 52u: goto L_08A403EC;
    case 53u: goto L_08A40404;
    case 54u: goto L_08A40424;
    case 55u: goto L_08A40464;
    case 56u: goto L_08A40470;
    case 57u: goto L_08A40484;
    case 58u: goto L_08A4048C;
    case 59u: goto L_08A40498;
    case 60u: goto L_08A404B4;
    case 61u: goto L_08A404BC;
    case 62u: goto L_08A404E8;
    case 63u: goto L_08A40504;
    case 64u: goto L_08A40550;
    case 65u: goto L_08A4055C;
    case 66u: goto L_08A40570;
    case 67u: goto L_08A4058C;
    case 68u: goto L_08A40594;
    case 69u: goto L_08A405A0;
    case 70u: goto L_08A405BC;
    case 71u: goto L_08A405D0;
    case 72u: goto L_08A405EC;
    case 73u: goto L_08A405F4;
    case 74u: goto L_08A4060C;
    case 75u: goto L_08A40618;
    case 76u: goto L_08A40620;
    case 77u: goto L_08A40644;
    case 78u: goto L_08A40668;
    case 79u: goto L_08A4068C;
    case 80u: goto L_08A40694;
    case 81u: goto L_08A406C8;
    case 82u: goto L_08A406E0;
    case 83u: goto L_08A406FC;
    case 84u: goto L_08A4070C;
    case 85u: goto L_08A40724;
    case 86u: goto L_08A40730;
    case 87u: goto L_08A4073C;
    case 88u: goto L_08A40748;
    case 89u: goto L_08A40754;
    case 90u: goto L_08A40764;
    case 91u: goto L_08A4077C;
    case 92u: goto L_08A4078C;
    case 93u: goto L_08A40798;
    case 94u: goto L_08A407A4;
    case 95u: goto L_08A407BC;
    case 96u: goto L_08A407C8;
    case 97u: goto L_08A407E4;
    case 98u: goto L_08A407FC;
    case 99u: goto L_08A4081C;
    case 100u: goto L_08A40858;
    case 101u: goto L_08A40870;
    case 102u: goto L_08A40878;
    case 103u: goto L_08A40884;
    case 104u: goto L_08A4089C;
    case 105u: goto L_08A408B8;
    case 106u: goto L_08A408D0;
    case 107u: goto L_08A408D8;
    case 108u: goto L_08A408F0;
    case 109u: goto L_08A4090C;
    case 110u: goto L_08A40924;
    case 111u: goto L_08A40938;
    case 112u: goto L_08A40958;
    case 113u: goto L_08A4097C;
    case 114u: goto L_08A409A0;
    case 115u: goto L_08A409B0;
    case 116u: goto L_08A409C8;
    case 117u: goto L_08A409E8;
    case 118u: goto L_08A409F8;
    case 119u: goto L_08A40A10;
    case 120u: goto L_08A40A30;
    case 121u: goto L_08A40A40;
    case 122u: goto L_08A40A58;
    case 123u: goto L_08A40A74;
    case 124u: goto L_08A40A7C;
    case 125u: goto L_08A40A88;
    case 126u: goto L_08A40A90;
    case 127u: goto L_08A40AA8;
    case 128u: goto L_08A40ABC;
    case 129u: goto L_08A40ACC;
    case 130u: goto L_08A40AD4;
    case 131u: goto L_08A40ADC;
    case 132u: goto L_08A40AE8;
    case 133u: goto L_08A40AF4;
    case 134u: goto L_08A40B04;
    case 135u: goto L_08A40B10;
    case 136u: goto L_08A40B1C;
    case 137u: goto L_08A40B2C;
    case 138u: goto L_08A40B38;
    case 139u: goto L_08A40B44;
    case 140u: goto L_08A40B54;
    case 141u: goto L_08A40B60;
    case 142u: goto L_08A40B6C;
    case 143u: goto L_08A40B7C;
    case 144u: goto L_08A40B88;
    case 145u: goto L_08A40B94;
    case 146u: goto L_08A40BA4;
    case 147u: goto L_08A40BB0;
    case 148u: goto L_08A40BBC;
    case 149u: goto L_08A40BCC;
    case 150u: goto L_08A40BD8;
    case 151u: goto L_08A40BE4;
    case 152u: goto L_08A40BF4;
    case 153u: goto L_08A40C00;
    case 154u: goto L_08A40C0C;
    case 155u: goto L_08A40C1C;
    case 156u: goto L_08A40C28;
    case 157u: goto L_08A40C34;
    case 158u: goto L_08A40C44;
    case 159u: goto L_08A40C50;
    case 160u: goto L_08A40C5C;
    case 161u: goto L_08A40C6C;
    case 162u: goto L_08A40C78;
    case 163u: goto L_08A40C84;
    case 164u: goto L_08A40C94;
    case 165u: goto L_08A40CA0;
    case 166u: goto L_08A40CAC;
    case 167u: goto L_08A40CBC;
    case 168u: goto L_08A40CC8;
    case 169u: goto L_08A40CD4;
    case 170u: goto L_08A40CE4;
    case 171u: goto L_08A40CF0;
    case 172u: goto L_08A40CFC;
    case 173u: goto L_08A40D0C;
    case 174u: goto L_08A40D18;
    case 175u: goto L_08A40D24;
    case 176u: goto L_08A40D34;
    case 177u: goto L_08A40D40;
    case 178u: goto L_08A40D4C;
    case 179u: goto L_08A40D5C;
    case 180u: goto L_08A40D68;
    case 181u: goto L_08A40D74;
    case 182u: goto L_08A40D84;
    case 183u: goto L_08A40D90;
    case 184u: goto L_08A40D9C;
    case 185u: goto L_08A40DAC;
    case 186u: goto L_08A40DB8;
    case 187u: goto L_08A40DC4;
    case 188u: goto L_08A40DD4;
    case 189u: goto L_08A40DE0;
    case 190u: goto L_08A40DEC;
    case 191u: goto L_08A40DFC;
    case 192u: goto L_08A40E08;
    case 193u: goto L_08A40E14;
    case 194u: goto L_08A40E24;
    case 195u: goto L_08A40E30;
    case 196u: goto L_08A40E3C;
    case 197u: goto L_08A40E4C;
    case 198u: goto L_08A40E58;
    case 199u: goto L_08A40E64;
    case 200u: goto L_08A40E74;
    case 201u: goto L_08A40E80;
    case 202u: goto L_08A40E8C;
    case 203u: goto L_08A40E9C;
    case 204u: goto L_08A40EA8;
    case 205u: goto L_08A40EB4;
    case 206u: goto L_08A40EC4;
    case 207u: goto L_08A40ED0;
    case 208u: goto L_08A40EDC;
    case 209u: goto L_08A40EEC;
    case 210u: goto L_08A40EF8;
    case 211u: goto L_08A40F04;
    case 212u: goto L_08A40F14;
    case 213u: goto L_08A40F20;
    case 214u: goto L_08A40F2C;
    case 215u: goto L_08A40F3C;
    case 216u: goto L_08A40F48;
    case 217u: goto L_08A40F54;
    case 218u: goto L_08A40F64;
    case 219u: goto L_08A40F70;
    case 220u: goto L_08A40F7C;
    case 221u: goto L_08A40F8C;
    case 222u: goto L_08A40F98;
    case 223u: goto L_08A40FA4;
    case 224u: goto L_08A40FB4;
    case 225u: goto L_08A40FC0;
    case 226u: goto L_08A40FCC;
    case 227u: goto L_08A40FDC;
    case 228u: goto L_08A40FE8;
    case 229u: goto L_08A40FF4;
    case 230u: goto L_08A41004;
    case 231u: goto L_08A41010;
    case 232u: goto L_08A4101C;
    case 233u: goto L_08A4102C;
    case 234u: goto L_08A41038;
    case 235u: goto L_08A41044;
    case 236u: goto L_08A41054;
    case 237u: goto L_08A41060;
    case 238u: goto L_08A4106C;
    case 239u: goto L_08A4107C;
    case 240u: goto L_08A41088;
    case 241u: goto L_08A41094;
    case 242u: goto L_08A410A4;
    case 243u: goto L_08A410B0;
    case 244u: goto L_08A410BC;
    case 245u: goto L_08A410CC;
    case 246u: goto L_08A410D8;
    case 247u: goto L_08A410E4;
    case 248u: goto L_08A410EC;
    case 249u: goto L_08A41100;
    case 250u: goto L_08A41110;
    case 251u: goto L_08A4113C;
    case 252u: goto L_08A41154;
    case 253u: goto L_08A41168;
    case 254u: goto L_08A41174;
    case 255u: goto L_08A41180;
    case 256u: goto L_08A411D0;
    case 257u: goto L_08A411EC;
    case 258u: goto L_08A411F8;
    case 259u: goto L_08A4122C;
    case 260u: goto L_08A41248;
    case 261u: goto L_08A4125C;
    case 262u: goto L_08A41268;
    case 263u: goto L_08A4129C;
    case 264u: goto L_08A412A8;
    case 265u: goto L_08A412AC;
    case 266u: goto L_08A412B4;
    case 267u: goto L_08A412C0;
    case 268u: goto L_08A412DC;
    case 269u: goto L_08A412EC;
    case 270u: goto L_08A412FC;
    case 271u: goto L_08A4130C;
    case 272u: goto L_08A41318;
    case 273u: goto L_08A4131C;
    case 274u: goto L_08A41320;
    case 275u: goto L_08A4132C;
    case 276u: goto L_08A4133C;
    case 277u: goto L_08A41348;
    case 278u: goto L_08A4134C;
    case 279u: goto L_08A41364;
    case 280u: goto L_08A41378;
    case 281u: goto L_08A413B4;
    case 282u: goto L_08A413CC;
    case 283u: goto L_08A413EC;
    case 284u: goto L_08A41400;
    case 285u: goto L_08A41414;
    case 286u: goto L_08A41424;
    case 287u: goto L_08A41438;
    case 288u: goto L_08A4144C;
    case 289u: goto L_08A4145C;
    case 290u: goto L_08A41470;
    case 291u: goto L_08A41484;
    case 292u: goto L_08A41498;
    case 293u: goto L_08A414AC;
    case 294u: goto L_08A414BC;
    case 295u: goto L_08A414D0;
    case 296u: goto L_08A414E4;
    case 297u: goto L_08A414F8;
    case 298u: goto L_08A41508;
    case 299u: goto L_08A4151C;
    case 300u: goto L_08A41530;
    case 301u: goto L_08A41548;
    case 302u: goto L_08A41550;
    case 303u: goto L_08A41564;
    case 304u: goto L_08A4156C;
    case 305u: goto L_08A41580;
    case 306u: goto L_08A41594;
    case 307u: goto L_08A415A8;
    case 308u: goto L_08A415BC;
    case 309u: goto L_08A415D8;
    case 310u: goto L_08A415EC;
    case 311u: goto L_08A41600;
    case 312u: goto L_08A41614;
    case 313u: goto L_08A4162C;
    case 314u: goto L_08A41634;
    case 315u: goto L_08A41648;
    case 316u: goto L_08A41650;
    case 317u: goto L_08A41664;
    case 318u: goto L_08A41678;
    case 319u: goto L_08A4168C;
    case 320u: goto L_08A416A0;
    case 321u: goto L_08A416B4;
    case 322u: goto L_08A416C8;
    case 323u: goto L_08A416D8;
    case 324u: goto L_08A416EC;
    case 325u: goto L_08A416FC;
    case 326u: goto L_08A41710;
    case 327u: goto L_08A41720;
    case 328u: goto L_08A4172C;
    case 329u: goto L_08A41734;
    case 330u: goto L_08A41748;
    case 331u: goto L_08A41758;
    case 332u: goto L_08A41764;
    case 333u: goto L_08A4178C;
    case 334u: goto L_08A417AC;
    case 335u: goto L_08A417BC;
    case 336u: goto L_08A417C4;
    case 337u: goto L_08A417D4;
    case 338u: goto L_08A417F0;
    case 339u: goto L_08A417F8;
    case 340u: goto L_08A41800;
    case 341u: goto L_08A41810;
    case 342u: goto L_08A4182C;
    case 343u: goto L_08A41834;
    case 344u: goto L_08A4183C;
    case 345u: goto L_08A4184C;
    case 346u: goto L_08A41868;
    case 347u: goto L_08A41870;
    case 348u: goto L_08A41878;
    case 349u: goto L_08A41888;
    case 350u: goto L_08A418A4;
    case 351u: goto L_08A418AC;
    case 352u: goto L_08A418B4;
    case 353u: goto L_08A418C4;
    case 354u: goto L_08A418E0;
    case 355u: goto L_08A418E8;
    case 356u: goto L_08A418F0;
    case 357u: goto L_08A41900;
    case 358u: goto L_08A4191C;
    case 359u: goto L_08A41924;
    case 360u: goto L_08A4192C;
    case 361u: goto L_08A4193C;
    case 362u: goto L_08A41958;
    case 363u: goto L_08A41960;
    case 364u: goto L_08A41968;
    case 365u: goto L_08A41978;
    case 366u: goto L_08A41994;
    case 367u: goto L_08A4199C;
    case 368u: goto L_08A419A4;
    case 369u: goto L_08A419B4;
    case 370u: goto L_08A419D0;
    case 371u: goto L_08A419D8;
    case 372u: goto L_08A419E0;
    case 373u: goto L_08A419F0;
    case 374u: goto L_08A41A0C;
    case 375u: goto L_08A41A14;
    case 376u: goto L_08A41A1C;
    case 377u: goto L_08A41A2C;
    case 378u: goto L_08A41A48;
    case 379u: goto L_08A41A50;
    case 380u: goto L_08A41A58;
    case 381u: goto L_08A41A68;
    case 382u: goto L_08A41A84;
    case 383u: goto L_08A41A8C;
    case 384u: goto L_08A41A94;
    case 385u: goto L_08A41AA4;
    case 386u: goto L_08A41AC0;
    case 387u: goto L_08A41AC8;
    case 388u: goto L_08A41AD0;
    case 389u: goto L_08A41AE0;
    case 390u: goto L_08A41AFC;
    case 391u: goto L_08A41B04;
    case 392u: goto L_08A41B0C;
    case 393u: goto L_08A41B1C;
    case 394u: goto L_08A41B38;
    case 395u: goto L_08A41B40;
    case 396u: goto L_08A41B48;
    case 397u: goto L_08A41B58;
    case 398u: goto L_08A41B74;
    case 399u: goto L_08A41B7C;
    case 400u: goto L_08A41B84;
    case 401u: goto L_08A41B94;
    case 402u: goto L_08A41BB0;
    case 403u: goto L_08A41BB8;
    case 404u: goto L_08A41BC0;
    case 405u: goto L_08A41BD0;
    case 406u: goto L_08A41BEC;
    case 407u: goto L_08A41BF4;
    case 408u: goto L_08A41BFC;
    case 409u: goto L_08A41C0C;
    case 410u: goto L_08A41C28;
    case 411u: goto L_08A41C30;
    case 412u: goto L_08A41C38;
    case 413u: goto L_08A41C48;
    case 414u: goto L_08A41C64;
    case 415u: goto L_08A41C6C;
    case 416u: goto L_08A41C74;
    case 417u: goto L_08A41C84;
    case 418u: goto L_08A41CA0;
    case 419u: goto L_08A41CA8;
    case 420u: goto L_08A41CB0;
    case 421u: goto L_08A41CC0;
    case 422u: goto L_08A41CDC;
    case 423u: goto L_08A41CE4;
    case 424u: goto L_08A41CEC;
    case 425u: goto L_08A41CFC;
    case 426u: goto L_08A41D18;
    case 427u: goto L_08A41D20;
    case 428u: goto L_08A41D28;
    case 429u: goto L_08A41D38;
    case 430u: goto L_08A41D54;
    case 431u: goto L_08A41D5C;
    case 432u: goto L_08A41D64;
    case 433u: goto L_08A41D74;
    case 434u: goto L_08A41D90;
    case 435u: goto L_08A41D98;
    case 436u: goto L_08A41DA0;
    case 437u: goto L_08A41DB0;
    case 438u: goto L_08A41DCC;
    case 439u: goto L_08A41DD4;
    case 440u: goto L_08A41DDC;
    case 441u: goto L_08A41DEC;
    case 442u: goto L_08A41E08;
    case 443u: goto L_08A41E10;
    case 444u: goto L_08A41E18;
    case 445u: goto L_08A41E28;
    case 446u: goto L_08A41E44;
    case 447u: goto L_08A41E4C;
    case 448u: goto L_08A41E54;
    case 449u: goto L_08A41E64;
    case 450u: goto L_08A41E80;
    case 451u: goto L_08A41E88;
    case 452u: goto L_08A41E90;
    case 453u: goto L_08A41EA0;
    case 454u: goto L_08A41EBC;
    case 455u: goto L_08A41EC4;
    case 456u: goto L_08A41ECC;
    case 457u: goto L_08A41EDC;
    case 458u: goto L_08A41EF8;
    case 459u: goto L_08A41F00;
    case 460u: goto L_08A41F08;
    case 461u: goto L_08A41F18;
    case 462u: goto L_08A41F34;
    case 463u: goto L_08A41F3C;
    case 464u: goto L_08A41F44;
    case 465u: goto L_08A41F54;
    case 466u: goto L_08A41F70;
    case 467u: goto L_08A41F78;
    case 468u: goto L_08A41F80;
    case 469u: goto L_08A41F90;
    case 470u: goto L_08A41FAC;
    case 471u: goto L_08A41FB4;
    case 472u: goto L_08A41FBC;
    case 473u: goto L_08A41FCC;
    case 474u: goto L_08A41FE8;
    case 475u: goto L_08A41FF0;
    case 476u: goto L_08A41FF8;
    case 477u: goto L_08A42008;
    case 478u: goto L_08A42024;
    case 479u: goto L_08A4202C;
    case 480u: goto L_08A42034;
    case 481u: goto L_08A42044;
    case 482u: goto L_08A42060;
    case 483u: goto L_08A42068;
    case 484u: goto L_08A42070;
    case 485u: goto L_08A42080;
    case 486u: goto L_08A4209C;
    case 487u: goto L_08A420A4;
    case 488u: goto L_08A420AC;
    case 489u: goto L_08A420BC;
    case 490u: goto L_08A420D8;
    case 491u: goto L_08A420E0;
    case 492u: goto L_08A420E8;
    case 493u: goto L_08A420F4;
    case 494u: goto L_08A42108;
    case 495u: goto L_08A42120;
    case 496u: goto L_08A42130;
    case 497u: goto L_08A42140;
    case 498u: goto L_08A42150;
    case 499u: goto L_08A42160;
    case 500u: goto L_08A42170;
    case 501u: goto L_08A42180;
    case 502u: goto L_08A42194;
    case 503u: goto L_08A421A4;
    case 504u: goto L_08A421B8;
    case 505u: goto L_08A421C8;
    case 506u: goto L_08A421E4;
    case 507u: goto L_08A42220;
    case 508u: goto L_08A42234;
    case 509u: goto L_08A42244;
    case 510u: goto L_08A42260;
    case 511u: goto L_08A4227C;
    case 512u: goto L_08A4228C;
    case 513u: goto L_08A422D4;
    case 514u: goto L_08A422DC;
    case 515u: goto L_08A422E8;
    case 516u: goto L_08A42318;
    case 517u: goto L_08A4232C;
    case 518u: goto L_08A42334;
    case 519u: goto L_08A42340;
    case 520u: goto L_08A4234C;
    case 521u: goto L_08A42354;
    case 522u: goto L_08A42364;
    case 523u: goto L_08A42370;
    case 524u: goto L_08A42384;
    case 525u: goto L_08A42390;
    case 526u: goto L_08A423A4;
    case 527u: goto L_08A423AC;
    case 528u: goto L_08A423C0;
    case 529u: goto L_08A423C8;
    case 530u: goto L_08A423DC;
    case 531u: goto L_08A423E8;
    case 532u: goto L_08A423FC;
    case 533u: goto L_08A42400;
    case 534u: goto L_08A42410;
    case 535u: goto L_08A4243C;
    case 536u: goto L_08A42464;
    case 537u: goto L_08A4246C;
    case 538u: goto L_08A42478;
    case 539u: goto L_08A42484;
    case 540u: goto L_08A4248C;
    case 541u: goto L_08A42498;
    case 542u: goto L_08A424A0;
    case 543u: goto L_08A424AC;
    case 544u: goto L_08A424B4;
    case 545u: goto L_08A424D4;
    case 546u: goto L_08A42504;
    case 547u: goto L_08A4251C;
    case 548u: goto L_08A42534;
    case 549u: goto L_08A42550;
    case 550u: goto L_08A42594;
    case 551u: goto L_08A4259C;
    case 552u: goto L_08A425A0;
    case 553u: goto L_08A425B4;
    case 554u: goto L_08A425BC;
    case 555u: goto L_08A425D8;
    case 556u: goto L_08A425E8;
    case 557u: goto L_08A42634;
    case 558u: goto L_08A4263C;
    case 559u: goto L_08A42648;
    case 560u: goto L_08A42678;
    case 561u: goto L_08A4268C;
    case 562u: goto L_08A42694;
    case 563u: goto L_08A426A0;
    case 564u: goto L_08A426AC;
    case 565u: goto L_08A426B4;
    case 566u: goto L_08A426C4;
    case 567u: goto L_08A426D0;
    case 568u: goto L_08A426E4;
    case 569u: goto L_08A426F0;
    case 570u: goto L_08A42700;
    case 571u: goto L_08A42708;
    case 572u: goto L_08A42718;
    case 573u: goto L_08A42720;
    case 574u: goto L_08A42730;
    case 575u: goto L_08A4273C;
    case 576u: goto L_08A42750;
    case 577u: goto L_08A42754;
    case 578u: goto L_08A42764;
    case 579u: goto L_08A42790;
    case 580u: goto L_08A427C0;
    case 581u: goto L_08A427CC;
    case 582u: goto L_08A427D4;
    case 583u: goto L_08A427E0;
    case 584u: goto L_08A427E8;
    case 585u: goto L_08A427F8;
    case 586u: goto L_08A42800;
    case 587u: goto L_08A42820;
    case 588u: goto L_08A42830;
    case 589u: goto L_08A42838;
    case 590u: goto L_08A42844;
    case 591u: goto L_08A42850;
    case 592u: goto L_08A42858;
    case 593u: goto L_08A42870;
    case 594u: goto L_08A42878;
    case 595u: goto L_08A42890;
    case 596u: goto L_08A42898;
    case 597u: goto L_08A428B8;
    case 598u: goto L_08A428E8;
    case 599u: goto L_08A42904;
    case 600u: goto L_08A42914;
    case 601u: goto L_08A42930;
    case 602u: goto L_08A42948;
    case 603u: goto L_08A4296C;
    case 604u: goto L_08A42978;
    case 605u: goto L_08A42990;
    case 606u: goto L_08A429A8;
    case 607u: goto L_08A429B8;
    case 608u: goto L_08A429D0;
    case 609u: goto L_08A42A00;
    case 610u: goto L_08A42A14;
    case 611u: goto L_08A42A28;
    case 612u: goto L_08A42A40;
    case 613u: goto L_08A42A48;
    case 614u: goto L_08A42A4C;
    case 615u: goto L_08A42A58;
    case 616u: goto L_08A42A68;
    case 617u: goto L_08A42A7C;
    case 618u: goto L_08A42A88;
    case 619u: goto L_08A42A8C;
    case 620u: goto L_08A42A94;
    case 621u: goto L_08A42A9C;
    case 622u: goto L_08A42AB0;
    case 623u: goto L_08A42AC4;
    case 624u: goto L_08A42AD8;
    case 625u: goto L_08A42AF4;
    case 626u: goto L_08A42B08;
    case 627u: goto L_08A42B10;
    case 628u: goto L_08A42B1C;
    case 629u: goto L_08A42B28;
    case 630u: goto L_08A42B3C;
    case 631u: goto L_08A42B4C;
    case 632u: goto L_08A42B5C;
    case 633u: goto L_08A42B64;
    case 634u: goto L_08A42B74;
    case 635u: goto L_08A42B88;
    case 636u: goto L_08A42B9C;
    case 637u: goto L_08A42BB0;
    case 638u: goto L_08A42BC4;
    case 639u: goto L_08A42BD4;
    case 640u: goto L_08A42BE4;
    case 641u: goto L_08A42BF4;
    case 642u: goto L_08A42C00;
    case 643u: goto L_08A42C04;
    case 644u: goto L_08A42C28;
    case 645u: goto L_08A42C38;
    case 646u: goto L_08A42C4C;
    case 647u: goto L_08A42C5C;
    case 648u: goto L_08A42C84;
    case 649u: goto L_08A42C90;
    case 650u: goto L_08A42C98;
    case 651u: goto L_08A42CA4;
    case 652u: goto L_08A42CB0;
    case 653u: goto L_08A42CC4;
    case 654u: goto L_08A42CDC;
    case 655u: goto L_08A42CF0;
    case 656u: goto L_08A42D04;
    case 657u: goto L_08A42D18;
    case 658u: goto L_08A42D28;
    case 659u: goto L_08A42D3C;
    case 660u: goto L_08A42D4C;
    case 661u: goto L_08A42D5C;
    case 662u: goto L_08A42D9C;
    case 663u: goto L_08A42DB4;
    case 664u: goto L_08A42DC0;
    case 665u: goto L_08A42DD4;
    case 666u: goto L_08A42DDC;
    case 667u: goto L_08A42DEC;
    case 668u: goto L_08A42DF0;
    case 669u: goto L_08A42DFC;
    case 670u: goto L_08A42E04;
    case 671u: goto L_08A42E14;
    case 672u: goto L_08A42E28;
    case 673u: goto L_08A42E44;
    case 674u: goto L_08A42E54;
    case 675u: goto L_08A42E58;
    case 676u: goto L_08A42E64;
    case 677u: goto L_08A42E7C;
    case 678u: goto L_08A42E8C;
    case 679u: goto L_08A42E9C;
    case 680u: goto L_08A42EC4;
    case 681u: goto L_08A42EE4;
    case 682u: goto L_08A42EF8;
    case 683u: goto L_08A42F04;
    case 684u: goto L_08A42F20;
    case 685u: goto L_08A42F30;
    case 686u: goto L_08A42F40;
    case 687u: goto L_08A42F54;
    case 688u: goto L_08A42F74;
    case 689u: goto L_08A42F88;
    case 690u: goto L_08A42FA8;
    case 691u: goto L_08A42FC8;
    case 692u: goto L_08A42FD8;
    case 693u: goto L_08A42FE8;
    case 694u: goto L_08A43000;
    case 695u: goto L_08A43008;
    case 696u: goto L_08A43018;
    case 697u: goto L_08A4302C;
    case 698u: goto L_08A43058;
    case 699u: goto L_08A43060;
    case 700u: goto L_08A4306C;
    case 701u: goto L_08A43078;
    case 702u: goto L_08A4308C;
    case 703u: goto L_08A4309C;
    case 704u: goto L_08A430B4;
    case 705u: goto L_08A430BC;
    case 706u: goto L_08A430D0;
    case 707u: goto L_08A430D8;
    case 708u: goto L_08A430F0;
    case 709u: goto L_08A430F8;
    case 710u: goto L_08A43118;
    case 711u: goto L_08A43120;
    case 712u: goto L_08A4313C;
    case 713u: goto L_08A43148;
    case 714u: goto L_08A43154;
    case 715u: goto L_08A43160;
    case 716u: goto L_08A4316C;
    case 717u: goto L_08A43170;
    case 718u: goto L_08A4317C;
    case 719u: goto L_08A431A4;
    case 720u: goto L_08A43200;
    case 721u: goto L_08A43208;
    case 722u: goto L_08A4322C;
    case 723u: goto L_08A43268;
    case 724u: goto L_08A4328C;
    case 725u: goto L_08A43294;
    case 726u: goto L_08A432A0;
    case 727u: goto L_08A432B4;
    case 728u: goto L_08A432C4;
    case 729u: goto L_08A432E0;
    case 730u: goto L_08A432F8;
    case 731u: goto L_08A432FC;
    case 732u: goto L_08A43308;
    case 733u: goto L_08A4330C;
    case 734u: goto L_08A43318;
    case 735u: goto L_08A43324;
    case 736u: goto L_08A43350;
    case 737u: goto L_08A433A4;
    case 738u: goto L_08A433B4;
    case 739u: goto L_08A433C4;
    case 740u: goto L_08A433D0;
    case 741u: goto L_08A43404;
    case 742u: goto L_08A43418;
    case 743u: goto L_08A4344C;
    case 744u: goto L_08A43454;
    case 745u: goto L_08A43460;
    case 746u: goto L_08A4346C;
    case 747u: goto L_08A43490;
    case 748u: goto L_08A434D8;
    case 749u: goto L_08A434FC;
    case 750u: goto L_08A43514;
    case 751u: goto L_08A4351C;
    case 752u: goto L_08A43520;
    case 753u: goto L_08A4352C;
    case 754u: goto L_08A43530;
    case 755u: goto L_08A4355C;
    case 756u: goto L_08A43568;
    case 757u: goto L_08A43574;
    case 758u: goto L_08A4357C;
    case 759u: goto L_08A43588;
    case 760u: goto L_08A435AC;
    case 761u: goto L_08A435C0;
    case 762u: goto L_08A435C8;
    case 763u: goto L_08A435D4;
    case 764u: goto L_08A435E0;
    case 765u: goto L_08A435F8;
    case 766u: goto L_08A43640;
    case 767u: goto L_08A43658;
    case 768u: goto L_08A43660;
    case 769u: goto L_08A43664;
    case 770u: goto L_08A43670;
    case 771u: goto L_08A43674;
    case 772u: goto L_08A43680;
    case 773u: goto L_08A4368C;
    case 774u: goto L_08A43698;
    case 775u: goto L_08A436AC;
    case 776u: goto L_08A436C4;
    case 777u: goto L_08A436D8;
    case 778u: goto L_08A436EC;
    case 779u: goto L_08A43714;
    case 780u: goto L_08A43728;
    case 781u: goto L_08A4373C;
    case 782u: goto L_08A43760;
    case 783u: goto L_08A43768;
    case 784u: goto L_08A43788;
    case 785u: goto L_08A437E0;
    case 786u: goto L_08A437F0;
    case 787u: goto L_08A43804;
    case 788u: goto L_08A4380C;
    case 789u: goto L_08A4381C;
    case 790u: goto L_08A43828;
    case 791u: goto L_08A4383C;
    case 792u: goto L_08A43844;
    case 793u: goto L_08A43850;
    case 794u: goto L_08A43860;
    case 795u: goto L_08A4387C;
    case 796u: goto L_08A4388C;
    case 797u: goto L_08A43898;
    case 798u: goto L_08A438A0;
    case 799u: goto L_08A438AC;
    case 800u: goto L_08A438BC;
    case 801u: goto L_08A438C0;
    case 802u: goto L_08A438CC;
    case 803u: goto L_08A438D4;
    case 804u: goto L_08A438E0;
    case 805u: goto L_08A438EC;
    case 806u: goto L_08A43908;
    case 807u: goto L_08A43920;
    case 808u: goto L_08A43924;
    case 809u: goto L_08A43930;
    case 810u: goto L_08A43938;
    case 811u: goto L_08A43948;
    case 812u: goto L_08A43954;
    case 813u: goto L_08A43968;
    case 814u: goto L_08A43978;
    case 815u: goto L_08A4398C;
    case 816u: goto L_08A439B4;
    case 817u: goto L_08A43A04;
    case 818u: goto L_08A43A10;
    case 819u: goto L_08A43A20;
    case 820u: goto L_08A43A2C;
    case 821u: goto L_08A43A54;
    case 822u: goto L_08A43A70;
    case 823u: goto L_08A43A94;
    case 824u: goto L_08A43AA8;
    case 825u: goto L_08A43ACC;
    case 826u: goto L_08A43AE0;
    case 827u: goto L_08A43B04;
    case 828u: goto L_08A43B14;
    case 829u: goto L_08A43B38;
    case 830u: goto L_08A43B48;
    case 831u: goto L_08A43B6C;
    case 832u: goto L_08A43B7C;
    case 833u: goto L_08A43BA4;
    case 834u: goto L_08A43BB4;
    case 835u: goto L_08A43BC4;
    case 836u: goto L_08A43BD8;
    case 837u: goto L_08A43BE8;
    case 838u: goto L_08A43BF8;
    case 839u: goto L_08A43C08;
    case 840u: goto L_08A43C38;
    case 841u: goto L_08A43C50;
    case 842u: goto L_08A43C58;
    case 843u: goto L_08A43C5C;
    case 844u: goto L_08A43C68;
    case 845u: goto L_08A43C78;
    case 846u: goto L_08A43C8C;
    case 847u: goto L_08A43C98;
    case 848u: goto L_08A43CB0;
    case 849u: goto L_08A43CC8;
    case 850u: goto L_08A43CD0;
    case 851u: goto L_08A43CD4;
    case 852u: goto L_08A43CE0;
    case 853u: goto L_08A43CF0;
    case 854u: goto L_08A43D04;
    case 855u: goto L_08A43D10;
    case 856u: goto L_08A43D28;
    case 857u: goto L_08A43D38;
    case 858u: goto L_08A43D40;
    case 859u: goto L_08A43D54;
    case 860u: goto L_08A43D60;
    case 861u: goto L_08A43D80;
    case 862u: goto L_08A43D90;
    case 863u: goto L_08A43DA8;
    case 864u: goto L_08A43DB0;
    case 865u: goto L_08A43DBC;
    case 866u: goto L_08A43DC8;
    case 867u: goto L_08A43DE8;
    case 868u: goto L_08A43E04;
    case 869u: goto L_08A43E14;
    case 870u: goto L_08A43E1C;
    case 871u: goto L_08A43E28;
    case 872u: goto L_08A43E34;
    case 873u: goto L_08A43E54;
    case 874u: goto L_08A43E64;
    case 875u: goto L_08A43E6C;
    case 876u: goto L_08A43E78;
    case 877u: goto L_08A43E84;
    case 878u: goto L_08A43EA4;
    case 879u: goto L_08A43EB4;
    case 880u: goto L_08A43EBC;
    case 881u: goto L_08A43EC8;
    case 882u: goto L_08A43ED4;
    case 883u: goto L_08A43EE8;
    case 884u: goto L_08A43F04;
    case 885u: goto L_08A43F14;
    case 886u: goto L_08A43F2C;
    case 887u: goto L_08A43F48;
    case 888u: goto L_08A43F50;
    case 889u: goto L_08A43F58;
    case 890u: goto L_08A43F68;
    case 891u: goto L_08A43F84;
    case 892u: goto L_08A43F8C;
    case 893u: goto L_08A43F94;
    case 894u: goto L_08A43FA4;
    case 895u: goto L_08A43FC0;
    case 896u: goto L_08A43FC8;
    case 897u: goto L_08A43FD0;
    case 898u: goto L_08A43FE4;
    case 899u: goto L_08A43FF4;
    default:
        if (local_transfers == 0u) rt.unsupported(ctx.pc, 0u, "invalid internal function entry");
        else ctx.pc = local_pc;
        return;
    }
    }
L_08A40000:
    ctx.set_gpr(1, static_cast<std::int32_t>(ctx.gpr[19]) < static_cast<std::int32_t>(ctx.gpr[3]) ? 1u : 0u);
    { const bool branch_taken = ctx.gpr[1] != 0u;
    // nop
      if (branch_taken) {
          goto L_08A40080;
      }
      goto L_08A4000C;
    }
L_08A4000C:
    ctx.set_gpr(1, static_cast<std::int32_t>(ctx.gpr[3]) < static_cast<std::int32_t>(ctx.gpr[19]) ? 1u : 0u);
    { const bool branch_taken = ctx.gpr[1] != 0u;
    // nop
      if (branch_taken) {
          goto L_08A40024;
      }
      goto L_08A40018;
    }
L_08A40018:
    ctx.set_gpr(1, ctx.gpr[2] < ctx.gpr[20] ? 1u : 0u);
    { const bool branch_taken = ctx.gpr[1] == 0u;
    // nop
      if (branch_taken) {
          goto L_08A40080;
      }
      goto L_08A40024;
    }
L_08A40024:
    ctx.set_gpr(16, ctx.gpr[16] + static_cast<std::uint32_t>(1));
    ctx.set_gpr(4, ctx.gpr[21] + 0u);
    ctx.set_gpr(5, ctx.gpr[16] + 0u);
    ctx.set_gpr(25, rt.memory().aot_load32(ctx.gpr[21] + static_cast<std::uint32_t>(0)));
    ctx.set_gpr(25, rt.memory().aot_load32(ctx.gpr[25] + static_cast<std::uint32_t>(168)));
    jump_target = ctx.gpr[25];
    ctx.set_gpr(31, 0x08A40040u);
    // nop
    ctx.pc = jump_target;
    if (rt.invoke_chained_call(ctx, &aot_mem) && ctx.pc == 0x08A40040u) goto L_08A40040;
    return;
L_08A40040:
    ctx.set_gpr(1, static_cast<std::int32_t>(ctx.gpr[19]) < static_cast<std::int32_t>(ctx.gpr[3]) ? 1u : 0u);
    { const bool branch_taken = ctx.gpr[1] != 0u;
    // nop
      if (branch_taken) {
          goto L_08A40104;
      }
      goto L_08A4004C;
    }
L_08A4004C:
    ctx.set_gpr(1, static_cast<std::int32_t>(ctx.gpr[3]) < static_cast<std::int32_t>(ctx.gpr[19]) ? 1u : 0u);
    { const bool branch_taken = ctx.gpr[1] != 0u;
    // nop
      if (branch_taken) {
          goto L_08A40064;
      }
      goto L_08A40058;
    }
L_08A40058:
    ctx.set_gpr(1, ctx.gpr[2] < ctx.gpr[20] ? 1u : 0u);
    { const bool branch_taken = ctx.gpr[1] == 0u;
    // nop
      if (branch_taken) {
          goto L_08A40104;
      }
      goto L_08A40064;
    }
L_08A40064:
    ctx.set_gpr(2, rt.memory().aot_load32(ctx.gpr[21] + static_cast<std::uint32_t>(16)));
    ctx.set_gpr(2, rt.memory().aot_load32(ctx.gpr[2] + static_cast<std::uint32_t>(8)));
    ctx.set_gpr(2, static_cast<std::int32_t>(ctx.gpr[16]) < static_cast<std::int32_t>(ctx.gpr[2]) ? 1u : 0u);
    { const bool branch_taken = ctx.gpr[2] != 0u;
    // nop
      if (branch_taken) {
          goto L_08A40024;
      }
      goto L_08A40078;
    }
L_08A40078:
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_08A40104;
      }
      goto L_08A40080;
    }
L_08A40080:
    ctx.set_gpr(5, ctx.gpr[16] + static_cast<std::uint32_t>(-1));
    ctx.set_gpr(4, ctx.gpr[21] + 0u);
    ctx.set_gpr(25, rt.memory().aot_load32(ctx.gpr[21] + static_cast<std::uint32_t>(0)));
    ctx.set_gpr(25, rt.memory().aot_load32(ctx.gpr[25] + static_cast<std::uint32_t>(168)));
    jump_target = ctx.gpr[25];
    ctx.set_gpr(31, 0x08A40098u);
    // nop
    ctx.pc = jump_target;
    if (rt.invoke_chained_call(ctx, &aot_mem) && ctx.pc == 0x08A40098u) goto L_08A40098;
    return;
L_08A40098:
    ctx.set_gpr(1, static_cast<std::int32_t>(ctx.gpr[3]) < static_cast<std::int32_t>(ctx.gpr[19]) ? 1u : 0u);
    { const bool branch_taken = ctx.gpr[1] != 0u;
    // nop
      if (branch_taken) {
          goto L_08A40104;
      }
      goto L_08A400A4;
    }
L_08A400A4:
    ctx.set_gpr(1, static_cast<std::int32_t>(ctx.gpr[19]) < static_cast<std::int32_t>(ctx.gpr[3]) ? 1u : 0u);
    { const bool branch_taken = ctx.gpr[1] != 0u;
    // nop
      if (branch_taken) {
          goto L_08A400BC;
      }
      goto L_08A400B0;
    }
L_08A400B0:
    ctx.set_gpr(1, ctx.gpr[20] < ctx.gpr[2] ? 1u : 0u);
    { const bool branch_taken = ctx.gpr[1] == 0u;
    // nop
      if (branch_taken) {
          goto L_08A40104;
      }
      goto L_08A400BC;
    }
L_08A400BC:
    ctx.set_gpr(16, ctx.gpr[16] + static_cast<std::uint32_t>(-1));
    ctx.set_gpr(5, ctx.gpr[16] + static_cast<std::uint32_t>(-1));
    ctx.set_gpr(4, ctx.gpr[21] + 0u);
    ctx.set_gpr(25, rt.memory().aot_load32(ctx.gpr[21] + static_cast<std::uint32_t>(0)));
    ctx.set_gpr(25, rt.memory().aot_load32(ctx.gpr[25] + static_cast<std::uint32_t>(168)));
    jump_target = ctx.gpr[25];
    ctx.set_gpr(31, 0x08A400D8u);
    // nop
    ctx.pc = jump_target;
    if (rt.invoke_chained_call(ctx, &aot_mem) && ctx.pc == 0x08A400D8u) goto L_08A400D8;
    return;
L_08A400D8:
    ctx.set_gpr(1, static_cast<std::int32_t>(ctx.gpr[3]) < static_cast<std::int32_t>(ctx.gpr[19]) ? 1u : 0u);
    { const bool branch_taken = ctx.gpr[1] != 0u;
    // nop
      if (branch_taken) {
          goto L_08A40104;
      }
      goto L_08A400E4;
    }
L_08A400E4:
    ctx.set_gpr(1, static_cast<std::int32_t>(ctx.gpr[19]) < static_cast<std::int32_t>(ctx.gpr[3]) ? 1u : 0u);
    { const bool branch_taken = ctx.gpr[1] != 0u;
    // nop
      if (branch_taken) {
          goto L_08A400FC;
      }
      goto L_08A400F0;
    }
L_08A400F0:
    ctx.set_gpr(1, ctx.gpr[20] < ctx.gpr[2] ? 1u : 0u);
    { const bool branch_taken = ctx.gpr[1] == 0u;
    // nop
      if (branch_taken) {
          goto L_08A40104;
      }
      goto L_08A400FC;
    }
L_08A400FC:
    { const bool branch_taken = static_cast<std::int32_t>(ctx.gpr[16]) > 0;
    // nop
      if (branch_taken) {
          goto L_08A400BC;
      }
      goto L_08A40104;
    }
L_08A40104:
    ctx.set_gpr(2, rt.memory().aot_load32(ctx.gpr[21] + static_cast<std::uint32_t>(16)));
    ctx.set_gpr(3, rt.memory().aot_load32(ctx.gpr[2] + static_cast<std::uint32_t>(8)));
    ctx.set_gpr(2, static_cast<std::int32_t>(ctx.gpr[16]) < static_cast<std::int32_t>(ctx.gpr[3]) ? 1u : 0u);
    { const bool branch_taken = ctx.gpr[2] != 0u;
    // nop
      if (branch_taken) {
          goto L_08A40124;
      }
      goto L_08A40118;
    }
L_08A40118:
    ctx.set_gpr(16, ctx.gpr[3] + static_cast<std::uint32_t>(-1));
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_08A40130;
      }
      goto L_08A40124;
    }
L_08A40124:
    { const bool branch_taken = static_cast<std::int32_t>(ctx.gpr[16]) > 0;
    // nop
      if (branch_taken) {
          goto L_08A40130;
      }
      goto L_08A4012C;
    }
L_08A4012C:
    ctx.set_gpr(16, 0u + static_cast<std::uint32_t>(1));
    goto L_08A40130;
L_08A40130:
    rt.memory().aot_store32(ctx.gpr[21] + static_cast<std::uint32_t>(52), ctx.gpr[16]);
    rt.memory().aot_store32(ctx.gpr[17] + static_cast<std::uint32_t>(0), ctx.gpr[16]);
    ctx.set_gpr(2, ctx.gpr[16] + static_cast<std::uint32_t>(-1));
    rt.memory().aot_store32(ctx.gpr[18] + static_cast<std::uint32_t>(0), ctx.gpr[2]);
    { const bool branch_taken = static_cast<std::int32_t>(ctx.gpr[2]) >= 0;
    // nop
      if (branch_taken) {
          goto L_08A4014C;
      }
      goto L_08A40148;
    }
L_08A40148:
    rt.memory().aot_store32(ctx.gpr[18] + static_cast<std::uint32_t>(0), 0u);
    goto L_08A4014C;
L_08A4014C:
    ctx.set_gpr(4, ctx.gpr[21] + 0u);
    ctx.set_gpr(5, rt.memory().aot_load32(ctx.gpr[18] + static_cast<std::uint32_t>(0)));
    ctx.set_gpr(25, rt.memory().aot_load32(ctx.gpr[21] + static_cast<std::uint32_t>(0)));
    ctx.set_gpr(25, rt.memory().aot_load32(ctx.gpr[25] + static_cast<std::uint32_t>(168)));
    jump_target = ctx.gpr[25];
    ctx.set_gpr(31, 0x08A40164u);
    // nop
    ctx.pc = jump_target;
    if (rt.invoke_chained_call(ctx, &aot_mem) && ctx.pc == 0x08A40164u) goto L_08A40164;
    return;
L_08A40164:
    ctx.set_gpr(5, ctx.gpr[20] < ctx.gpr[2] ? 1u : 0u);
    ctx.set_gpr(4, ctx.gpr[20] - ctx.gpr[2]);
    ctx.set_gpr(2, ctx.gpr[19] - ctx.gpr[3]);
    ctx.set_gpr(2, ctx.gpr[2] - ctx.gpr[5]);
    ctx.set_gpr(3, ctx.gpr[4] >> 18u);
    ctx.set_gpr(2, ctx.gpr[2] << 14u);
    ctx.set_gpr(2, ctx.gpr[2] | ctx.gpr[3]);
    { const bool branch_taken = static_cast<std::int32_t>(ctx.gpr[2]) < 0;
    // nop
      if (branch_taken) {
          goto L_08A40198;
      }
      goto L_08A40188;
    }
L_08A40188:
    ctx.fpr[0] = std::bit_cast<float>(ctx.gpr[2]);
    ctx.fpr[0] = static_cast<float>(static_cast<std::int32_t>(ctx.fpr_bits(0)));
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_08A401B0;
      }
      goto L_08A40198;
    }
L_08A40198:
    ctx.set_gpr(3, ctx.gpr[2] >> 1u);
    ctx.set_gpr(2, ctx.gpr[2] & 1u);
    ctx.set_gpr(3, ctx.gpr[3] | ctx.gpr[2]);
    ctx.fpr[0] = std::bit_cast<float>(ctx.gpr[3]);
    ctx.fpr[0] = static_cast<float>(static_cast<std::int32_t>(ctx.fpr_bits(0)));
    ctx.fpr[0] = ctx.fpr[0] + ctx.fpr[0];
    goto L_08A401B0;
L_08A401B0:
    rt.memory().aot_store32(ctx.gpr[22] + static_cast<std::uint32_t>(0), std::bit_cast<std::uint32_t>(ctx.fpr[0]));
    ctx.set_gpr(4, ctx.gpr[21] + 0u);
    ctx.set_gpr(5, rt.memory().aot_load32(ctx.gpr[18] + static_cast<std::uint32_t>(0)));
    ctx.set_gpr(25, rt.memory().aot_load32(ctx.gpr[21] + static_cast<std::uint32_t>(0)));
    ctx.set_gpr(25, rt.memory().aot_load32(ctx.gpr[25] + static_cast<std::uint32_t>(168)));
    jump_target = ctx.gpr[25];
    ctx.set_gpr(31, 0x08A401CCu);
    // nop
    ctx.pc = jump_target;
    if (rt.invoke_chained_call(ctx, &aot_mem) && ctx.pc == 0x08A401CCu) goto L_08A401CC;
    return;
L_08A401CC:
    ctx.set_gpr(18, ctx.gpr[2] + 0u);
    ctx.set_gpr(16, ctx.gpr[3] + 0u);
    ctx.set_gpr(4, ctx.gpr[21] + 0u);
    ctx.set_gpr(5, rt.memory().aot_load32(ctx.gpr[17] + static_cast<std::uint32_t>(0)));
    ctx.set_gpr(25, rt.memory().aot_load32(ctx.gpr[21] + static_cast<std::uint32_t>(0)));
    ctx.set_gpr(25, rt.memory().aot_load32(ctx.gpr[25] + static_cast<std::uint32_t>(168)));
    jump_target = ctx.gpr[25];
    ctx.set_gpr(31, 0x08A401ECu);
    // nop
    ctx.pc = jump_target;
    if (rt.invoke_chained_call(ctx, &aot_mem) && ctx.pc == 0x08A401ECu) goto L_08A401EC;
    return;
L_08A401EC:
    ctx.set_gpr(5, ctx.gpr[2] < ctx.gpr[18] ? 1u : 0u);
    ctx.set_gpr(4, ctx.gpr[2] - ctx.gpr[18]);
    ctx.set_gpr(3, ctx.gpr[3] - ctx.gpr[16]);
    ctx.set_gpr(3, ctx.gpr[3] - ctx.gpr[5]);
    ctx.set_gpr(4, ctx.gpr[4] >> 18u);
    ctx.set_gpr(3, ctx.gpr[3] << 14u);
    ctx.set_gpr(3, ctx.gpr[3] | ctx.gpr[4]);
    { const bool branch_taken = static_cast<std::int32_t>(ctx.gpr[3]) < 0;
    // nop
      if (branch_taken) {
          goto L_08A40220;
      }
      goto L_08A40210;
    }
L_08A40210:
    ctx.fpr[0] = std::bit_cast<float>(ctx.gpr[3]);
    ctx.fpr[0] = static_cast<float>(static_cast<std::int32_t>(ctx.fpr_bits(0)));
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_08A40238;
      }
      goto L_08A40220;
    }
L_08A40220:
    ctx.set_gpr(4, ctx.gpr[3] >> 1u);
    ctx.set_gpr(3, ctx.gpr[3] & 1u);
    ctx.set_gpr(4, ctx.gpr[4] | ctx.gpr[3]);
    ctx.fpr[0] = std::bit_cast<float>(ctx.gpr[4]);
    ctx.fpr[0] = static_cast<float>(static_cast<std::int32_t>(ctx.fpr_bits(0)));
    ctx.fpr[0] = ctx.fpr[0] + ctx.fpr[0];
    goto L_08A40238;
L_08A40238:
    rt.memory().aot_store32(ctx.gpr[23] + static_cast<std::uint32_t>(0), std::bit_cast<std::uint32_t>(ctx.fpr[0]));
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
L_08A4026C:
    ctx.set_gpr(29, ctx.gpr[29] + static_cast<std::uint32_t>(-96));
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(28), ctx.gpr[31]);
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(24), ctx.gpr[18]);
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(20), ctx.gpr[17]);
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(16), ctx.gpr[16]);
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(8), std::bit_cast<std::uint32_t>(ctx.fpr[20]));
    ctx.set_gpr(18, ctx.gpr[4] + 0u);
    ctx.set_gpr(17, ctx.gpr[5] + 0u);
    ctx.set_gpr(16, ctx.gpr[7] + 0u);
    ctx.set_fpr_bits(20, ctx.fpr_bits(12));
    ctx.set_gpr(3, rt.memory().aot_load8(ctx.gpr[4] + static_cast<std::uint32_t>(58)));
    { const bool branch_taken = ctx.gpr[3] != 0u;
    // nop
      if (branch_taken) {
          goto L_08A402B8;
      }
      goto L_08A402A0;
    }
L_08A402A0:
    ctx.set_gpr(5, ctx.gpr[6] + 0u);
    ctx.set_gpr(6, ctx.gpr[17] + 0u);
    ctx.set_gpr(31, 0x08A402B0u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0142_entry, 142u, 670u, 0x08A3F6E4u>(ctx, &aot_mem) && ctx.pc == 0x08A402B0u) goto L_08A402B0;
    return;
L_08A402B0:
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_08A40344;
      }
      goto L_08A402B8;
    }
L_08A402B8:
    ctx.set_gpr(2, 0u + static_cast<std::uint32_t>(3));
    { const bool branch_taken = ctx.gpr[3] != ctx.gpr[2];
    // nop
      if (branch_taken) {
          goto L_08A40308;
      }
      goto L_08A402C4;
    }
L_08A402C4:
    ctx.set_gpr(5, ctx.gpr[6] + 0u);
    ctx.set_gpr(6, ctx.gpr[29] + static_cast<std::uint32_t>(80));
    ctx.set_gpr(31, 0x08A402D4u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0142_entry, 142u, 670u, 0x08A3F6E4u>(ctx, &aot_mem) && ctx.pc == 0x08A402D4u) goto L_08A402D4;
    return;
L_08A402D4:
    ctx.set_gpr(4, ctx.gpr[18] + 0u);
    ctx.set_gpr(5, ctx.gpr[16] + 0u);
    ctx.set_gpr(6, ctx.gpr[29] + static_cast<std::uint32_t>(64));
    ctx.set_gpr(31, 0x08A402E8u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0142_entry, 142u, 670u, 0x08A3F6E4u>(ctx, &aot_mem) && ctx.pc == 0x08A402E8u) goto L_08A402E8;
    return;
L_08A402E8:
    ctx.set_gpr(4, ctx.gpr[17] + 0u);
    ctx.set_fpr_bits(12, ctx.fpr_bits(20));
    ctx.set_gpr(5, ctx.gpr[29] + static_cast<std::uint32_t>(80));
    ctx.set_gpr(6, ctx.gpr[29] + static_cast<std::uint32_t>(64));
    ctx.set_gpr(31, 0x08A40300u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0127_entry, 127u, 196u, 0x08A0275Cu>(ctx, &aot_mem) && ctx.pc == 0x08A40300u) goto L_08A40300;
    return;
L_08A40300:
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_08A40344;
      }
      goto L_08A40308;
    }
L_08A40308:
    ctx.set_gpr(5, ctx.gpr[6] + 0u);
    ctx.set_gpr(6, ctx.gpr[29] + static_cast<std::uint32_t>(48));
    ctx.set_gpr(31, 0x08A40318u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0142_entry, 142u, 670u, 0x08A3F6E4u>(ctx, &aot_mem) && ctx.pc == 0x08A40318u) goto L_08A40318;
    return;
L_08A40318:
    ctx.set_gpr(4, ctx.gpr[18] + 0u);
    ctx.set_gpr(5, ctx.gpr[16] + 0u);
    ctx.set_gpr(6, ctx.gpr[29] + static_cast<std::uint32_t>(32));
    ctx.set_gpr(31, 0x08A4032Cu);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0142_entry, 142u, 670u, 0x08A3F6E4u>(ctx, &aot_mem) && ctx.pc == 0x08A4032Cu) goto L_08A4032C;
    return;
L_08A4032C:
    ctx.set_gpr(4, ctx.gpr[17] + 0u);
    ctx.set_fpr_bits(12, ctx.fpr_bits(20));
    ctx.set_gpr(5, ctx.gpr[29] + static_cast<std::uint32_t>(48));
    ctx.set_gpr(6, ctx.gpr[29] + static_cast<std::uint32_t>(32));
    ctx.set_gpr(31, 0x08A40344u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0127_entry, 127u, 202u, 0x08A02A60u>(ctx, &aot_mem) && ctx.pc == 0x08A40344u) goto L_08A40344;
    return;
L_08A40344:
    ctx.set_gpr(31, rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(28)));
    ctx.set_gpr(18, rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(24)));
    ctx.set_gpr(17, rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(20)));
    ctx.set_gpr(16, rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(16)));
    ctx.fpr[20] = std::bit_cast<float>(rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(8)));
    ctx.set_gpr(29, ctx.gpr[29] + static_cast<std::uint32_t>(96));
    jump_target = ctx.gpr[31];
    // nop
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_08A40364:
    ctx.set_gpr(29, ctx.gpr[29] + static_cast<std::uint32_t>(-64));
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(28), ctx.gpr[31]);
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(24), ctx.gpr[18]);
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(20), ctx.gpr[17]);
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(16), ctx.gpr[16]);
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(8), std::bit_cast<std::uint32_t>(ctx.fpr[20]));
    ctx.set_gpr(18, ctx.gpr[4] + 0u);
    ctx.set_gpr(17, ctx.gpr[5] + 0u);
    ctx.set_gpr(16, ctx.gpr[7] + 0u);
    ctx.set_fpr_bits(20, ctx.fpr_bits(12));
    ctx.set_gpr(2, rt.memory().aot_load8(ctx.gpr[4] + static_cast<std::uint32_t>(57)));
    { const bool branch_taken = ctx.gpr[2] != 0u;
    // nop
      if (branch_taken) {
          goto L_08A403B8;
      }
      goto L_08A40398;
    }
L_08A40398:
    ctx.set_gpr(5, ctx.gpr[6] + 0u);
    ctx.set_gpr(6, ctx.gpr[17] + 0u);
    ctx.set_gpr(25, rt.memory().aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(0)));
    ctx.set_gpr(25, rt.memory().aot_load32(ctx.gpr[25] + static_cast<std::uint32_t>(184)));
    jump_target = ctx.gpr[25];
    ctx.set_gpr(31, 0x08A403B0u);
    // nop
    ctx.pc = jump_target;
    if (rt.invoke_chained_call(ctx, &aot_mem) && ctx.pc == 0x08A403B0u) goto L_08A403B0;
    return;
L_08A403B0:
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_08A40404;
      }
      goto L_08A403B8;
    }
L_08A403B8:
    ctx.set_gpr(5, ctx.gpr[6] + 0u);
    ctx.set_gpr(6, ctx.gpr[29] + static_cast<std::uint32_t>(52));
    ctx.set_gpr(25, rt.memory().aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(0)));
    ctx.set_gpr(25, rt.memory().aot_load32(ctx.gpr[25] + static_cast<std::uint32_t>(184)));
    jump_target = ctx.gpr[25];
    ctx.set_gpr(31, 0x08A403D0u);
    // nop
    ctx.pc = jump_target;
    if (rt.invoke_chained_call(ctx, &aot_mem) && ctx.pc == 0x08A403D0u) goto L_08A403D0;
    return;
L_08A403D0:
    ctx.set_gpr(4, ctx.gpr[18] + 0u);
    ctx.set_gpr(5, ctx.gpr[16] + 0u);
    ctx.set_gpr(6, ctx.gpr[29] + static_cast<std::uint32_t>(40));
    ctx.set_gpr(25, rt.memory().aot_load32(ctx.gpr[18] + static_cast<std::uint32_t>(0)));
    ctx.set_gpr(25, rt.memory().aot_load32(ctx.gpr[25] + static_cast<std::uint32_t>(184)));
    jump_target = ctx.gpr[25];
    ctx.set_gpr(31, 0x08A403ECu);
    // nop
    ctx.pc = jump_target;
    if (rt.invoke_chained_call(ctx, &aot_mem) && ctx.pc == 0x08A403ECu) goto L_08A403EC;
    return;
L_08A403EC:
    ctx.set_gpr(4, ctx.gpr[17] + 0u);
    ctx.set_fpr_bits(12, ctx.fpr_bits(20));
    ctx.set_gpr(5, ctx.gpr[29] + static_cast<std::uint32_t>(52));
    ctx.set_gpr(6, ctx.gpr[29] + static_cast<std::uint32_t>(40));
    ctx.set_gpr(31, 0x08A40404u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0127_entry, 127u, 269u, 0x08A03174u>(ctx, &aot_mem) && ctx.pc == 0x08A40404u) goto L_08A40404;
    return;
L_08A40404:
    ctx.set_gpr(31, rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(28)));
    ctx.set_gpr(18, rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(24)));
    ctx.set_gpr(17, rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(20)));
    ctx.set_gpr(16, rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(16)));
    ctx.fpr[20] = std::bit_cast<float>(rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(8)));
    ctx.set_gpr(29, ctx.gpr[29] + static_cast<std::uint32_t>(64));
    jump_target = ctx.gpr[31];
    // nop
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_08A40424:
    ctx.set_gpr(29, ctx.gpr[29] + static_cast<std::uint32_t>(-64));
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(28), ctx.gpr[31]);
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(24), ctx.gpr[17]);
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(20), ctx.gpr[16]);
    ctx.set_gpr(17, ctx.gpr[4] + 0u);
    ctx.set_gpr(16, ctx.gpr[5] + 0u);
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(0), ctx.gpr[6]);
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(4), ctx.gpr[7]);
    ctx.set_gpr(5, ctx.gpr[29] + static_cast<std::uint32_t>(63));
    ctx.set_gpr(6, ctx.gpr[29] + static_cast<std::uint32_t>(62));
    ctx.set_gpr(7, ctx.gpr[29] + static_cast<std::uint32_t>(56));
    ctx.set_gpr(8, ctx.gpr[29] + static_cast<std::uint32_t>(52));
    ctx.set_gpr(9, ctx.gpr[29] + static_cast<std::uint32_t>(48));
    ctx.set_gpr(10, ctx.gpr[29] + static_cast<std::uint32_t>(44));
    ctx.set_gpr(31, 0x08A40464u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0142_entry, 142u, 697u, 0x08A3F980u>(ctx, &aot_mem) && ctx.pc == 0x08A40464u) goto L_08A40464;
    return;
L_08A40464:
    ctx.set_gpr(2, rt.memory().aot_load8(ctx.gpr[29] + static_cast<std::uint32_t>(63)));
    { const bool branch_taken = ctx.gpr[2] == 0u;
    // nop
      if (branch_taken) {
          goto L_08A4048C;
      }
      goto L_08A40470;
    }
L_08A40470:
    ctx.set_gpr(4, ctx.gpr[17] + 0u);
    ctx.set_gpr(5, 0u + 0u);
    ctx.set_gpr(6, ctx.gpr[16] + 0u);
    ctx.set_gpr(31, 0x08A40484u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0142_entry, 142u, 670u, 0x08A3F6E4u>(ctx, &aot_mem) && ctx.pc == 0x08A40484u) goto L_08A40484;
    return;
L_08A40484:
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_08A404E8;
      }
      goto L_08A4048C;
    }
L_08A4048C:
    ctx.set_gpr(2, rt.memory().aot_load8(ctx.gpr[29] + static_cast<std::uint32_t>(62)));
    { const bool branch_taken = ctx.gpr[2] == 0u;
    // nop
      if (branch_taken) {
          goto L_08A404BC;
      }
      goto L_08A40498;
    }
L_08A40498:
    ctx.set_gpr(2, rt.memory().aot_load32(ctx.gpr[17] + static_cast<std::uint32_t>(16)));
    ctx.set_gpr(2, rt.memory().aot_load32(ctx.gpr[2] + static_cast<std::uint32_t>(8)));
    ctx.set_gpr(5, ctx.gpr[2] + static_cast<std::uint32_t>(-1));
    ctx.set_gpr(4, ctx.gpr[17] + 0u);
    ctx.set_gpr(6, ctx.gpr[16] + 0u);
    ctx.set_gpr(31, 0x08A404B4u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0142_entry, 142u, 670u, 0x08A3F6E4u>(ctx, &aot_mem) && ctx.pc == 0x08A404B4u) goto L_08A404B4;
    return;
L_08A404B4:
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_08A404E8;
      }
      goto L_08A404BC;
    }
L_08A404BC:
    ctx.fpr[1] = std::bit_cast<float>(rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(48)));
    ctx.fpr[0] = std::bit_cast<float>(rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(44)));
    ctx.fpr[12] = ctx.fpr[1] / ctx.fpr[0];
    ctx.set_gpr(4, ctx.gpr[17] + 0u);
    ctx.set_gpr(5, ctx.gpr[16] + 0u);
    ctx.set_gpr(6, rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(56)));
    ctx.set_gpr(7, rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(52)));
    ctx.set_gpr(25, rt.memory().aot_load32(ctx.gpr[17] + static_cast<std::uint32_t>(0)));
    ctx.set_gpr(25, rt.memory().aot_load32(ctx.gpr[25] + static_cast<std::uint32_t>(192)));
    jump_target = ctx.gpr[25];
    ctx.set_gpr(31, 0x08A404E8u);
    // nop
    ctx.pc = jump_target;
    if (rt.invoke_chained_call(ctx, &aot_mem) && ctx.pc == 0x08A404E8u) goto L_08A404E8;
    return;
L_08A404E8:
    ctx.set_gpr(2, 0u + static_cast<std::uint32_t>(1));
    ctx.set_gpr(31, rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(28)));
    ctx.set_gpr(17, rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(24)));
    ctx.set_gpr(16, rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(20)));
    ctx.set_gpr(29, ctx.gpr[29] + static_cast<std::uint32_t>(64));
    jump_target = ctx.gpr[31];
    // nop
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_08A40504:
    ctx.set_gpr(29, ctx.gpr[29] + static_cast<std::uint32_t>(-80));
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(44), ctx.gpr[31]);
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(40), ctx.gpr[18]);
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(36), ctx.gpr[17]);
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(32), ctx.gpr[16]);
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(24), std::bit_cast<std::uint32_t>(ctx.fpr[20]));
    ctx.set_gpr(18, ctx.gpr[4] + 0u);
    ctx.set_gpr(17, ctx.gpr[5] + 0u);
    ctx.set_gpr(16, ctx.gpr[6] + 0u);
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(0), ctx.gpr[8]);
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(4), ctx.gpr[9]);
    ctx.set_gpr(5, ctx.gpr[29] + static_cast<std::uint32_t>(79));
    ctx.set_gpr(6, ctx.gpr[29] + static_cast<std::uint32_t>(78));
    ctx.set_gpr(7, ctx.gpr[29] + static_cast<std::uint32_t>(72));
    ctx.set_gpr(8, ctx.gpr[29] + static_cast<std::uint32_t>(68));
    ctx.set_gpr(9, ctx.gpr[29] + static_cast<std::uint32_t>(64));
    ctx.set_gpr(10, ctx.gpr[29] + static_cast<std::uint32_t>(60));
    ctx.set_gpr(31, 0x08A40550u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0142_entry, 142u, 697u, 0x08A3F980u>(ctx, &aot_mem) && ctx.pc == 0x08A40550u) goto L_08A40550;
    return;
L_08A40550:
    ctx.set_gpr(2, rt.memory().aot_load8(ctx.gpr[29] + static_cast<std::uint32_t>(79)));
    { const bool branch_taken = ctx.gpr[2] == 0u;
    // nop
      if (branch_taken) {
          goto L_08A40594;
      }
      goto L_08A4055C;
    }
L_08A4055C:
    ctx.set_gpr(4, ctx.gpr[18] + 0u);
    ctx.set_gpr(5, 0u + 0u);
    ctx.set_gpr(6, ctx.gpr[17] + 0u);
    ctx.set_gpr(31, 0x08A40570u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0142_entry, 142u, 670u, 0x08A3F6E4u>(ctx, &aot_mem) && ctx.pc == 0x08A40570u) goto L_08A40570;
    return;
L_08A40570:
    ctx.set_gpr(4, ctx.gpr[18] + 0u);
    ctx.set_gpr(5, 0u + 0u);
    ctx.set_gpr(6, ctx.gpr[16] + 0u);
    ctx.set_gpr(25, rt.memory().aot_load32(ctx.gpr[18] + static_cast<std::uint32_t>(0)));
    ctx.set_gpr(25, rt.memory().aot_load32(ctx.gpr[25] + static_cast<std::uint32_t>(184)));
    jump_target = ctx.gpr[25];
    ctx.set_gpr(31, 0x08A4058Cu);
    // nop
    ctx.pc = jump_target;
    if (rt.invoke_chained_call(ctx, &aot_mem) && ctx.pc == 0x08A4058Cu) goto L_08A4058C;
    return;
L_08A4058C:
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_08A40668;
      }
      goto L_08A40594;
    }
L_08A40594:
    ctx.set_gpr(2, rt.memory().aot_load8(ctx.gpr[29] + static_cast<std::uint32_t>(78)));
    { const bool branch_taken = ctx.gpr[2] == 0u;
    // nop
      if (branch_taken) {
          goto L_08A405F4;
      }
      goto L_08A405A0;
    }
L_08A405A0:
    ctx.set_gpr(2, rt.memory().aot_load32(ctx.gpr[18] + static_cast<std::uint32_t>(16)));
    ctx.set_gpr(2, rt.memory().aot_load32(ctx.gpr[2] + static_cast<std::uint32_t>(8)));
    ctx.set_gpr(5, ctx.gpr[2] + static_cast<std::uint32_t>(-1));
    ctx.set_gpr(4, ctx.gpr[18] + 0u);
    ctx.set_gpr(6, ctx.gpr[17] + 0u);
    ctx.set_gpr(31, 0x08A405BCu);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0142_entry, 142u, 670u, 0x08A3F6E4u>(ctx, &aot_mem) && ctx.pc == 0x08A405BCu) goto L_08A405BC;
    return;
L_08A405BC:
    ctx.set_gpr(4, ctx.gpr[18] + 0u);
    ctx.set_gpr(25, rt.memory().aot_load32(ctx.gpr[18] + static_cast<std::uint32_t>(0)));
    ctx.set_gpr(25, rt.memory().aot_load32(ctx.gpr[25] + static_cast<std::uint32_t>(140)));
    jump_target = ctx.gpr[25];
    ctx.set_gpr(31, 0x08A405D0u);
    // nop
    ctx.pc = jump_target;
    if (rt.invoke_chained_call(ctx, &aot_mem) && ctx.pc == 0x08A405D0u) goto L_08A405D0;
    return;
L_08A405D0:
    ctx.set_gpr(5, ctx.gpr[2] + static_cast<std::uint32_t>(-1));
    ctx.set_gpr(4, ctx.gpr[18] + 0u);
    ctx.set_gpr(6, ctx.gpr[16] + 0u);
    ctx.set_gpr(25, rt.memory().aot_load32(ctx.gpr[18] + static_cast<std::uint32_t>(0)));
    ctx.set_gpr(25, rt.memory().aot_load32(ctx.gpr[25] + static_cast<std::uint32_t>(184)));
    jump_target = ctx.gpr[25];
    ctx.set_gpr(31, 0x08A405ECu);
    // nop
    ctx.pc = jump_target;
    if (rt.invoke_chained_call(ctx, &aot_mem) && ctx.pc == 0x08A405ECu) goto L_08A405EC;
    return;
L_08A405EC:
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_08A40668;
      }
      goto L_08A405F4;
    }
L_08A405F4:
    ctx.fpr[1] = std::bit_cast<float>(rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(60)));
    ctx.fpr[0] = std::bit_cast<float>(rt.memory().aot_load32(ctx.gpr[28] + static_cast<std::uint32_t>(-32408)));
    ctx.set_fpu_condition((ctx.fpr[1] < ctx.fpr[0]));
    // nop
    { const bool branch_taken = !ctx.fpu_condition();
    // nop
      if (branch_taken) {
          goto L_08A40618;
      }
      goto L_08A4060C;
    }
L_08A4060C:
    ctx.fpr[20] = std::bit_cast<float>(0u);
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_08A40620;
      }
      goto L_08A40618;
    }
L_08A40618:
    ctx.fpr[0] = std::bit_cast<float>(rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(64)));
    ctx.fpr[20] = ctx.fpr[0] / ctx.fpr[1];
    goto L_08A40620;
L_08A40620:
    ctx.set_gpr(4, ctx.gpr[18] + 0u);
    ctx.set_gpr(5, ctx.gpr[17] + 0u);
    ctx.set_gpr(6, rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(72)));
    ctx.set_gpr(7, rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(68)));
    ctx.set_fpr_bits(12, ctx.fpr_bits(20));
    ctx.set_gpr(25, rt.memory().aot_load32(ctx.gpr[18] + static_cast<std::uint32_t>(0)));
    ctx.set_gpr(25, rt.memory().aot_load32(ctx.gpr[25] + static_cast<std::uint32_t>(192)));
    jump_target = ctx.gpr[25];
    ctx.set_gpr(31, 0x08A40644u);
    // nop
    ctx.pc = jump_target;
    if (rt.invoke_chained_call(ctx, &aot_mem) && ctx.pc == 0x08A40644u) goto L_08A40644;
    return;
L_08A40644:
    ctx.set_gpr(4, ctx.gpr[18] + 0u);
    ctx.set_gpr(5, ctx.gpr[16] + 0u);
    ctx.set_gpr(6, rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(72)));
    ctx.set_gpr(7, rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(68)));
    ctx.set_fpr_bits(12, ctx.fpr_bits(20));
    ctx.set_gpr(25, rt.memory().aot_load32(ctx.gpr[18] + static_cast<std::uint32_t>(0)));
    ctx.set_gpr(25, rt.memory().aot_load32(ctx.gpr[25] + static_cast<std::uint32_t>(188)));
    jump_target = ctx.gpr[25];
    ctx.set_gpr(31, 0x08A40668u);
    // nop
    ctx.pc = jump_target;
    if (rt.invoke_chained_call(ctx, &aot_mem) && ctx.pc == 0x08A40668u) goto L_08A40668;
    return;
L_08A40668:
    ctx.set_gpr(2, 0u + static_cast<std::uint32_t>(1));
    ctx.set_gpr(31, rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(44)));
    ctx.set_gpr(18, rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(40)));
    ctx.set_gpr(17, rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(36)));
    ctx.set_gpr(16, rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(32)));
    ctx.fpr[20] = std::bit_cast<float>(rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(24)));
    ctx.set_gpr(29, ctx.gpr[29] + static_cast<std::uint32_t>(80));
    jump_target = ctx.gpr[31];
    // nop
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_08A4068C:
    jump_target = ctx.gpr[31];
    // nop
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_08A40694:
    ctx.set_gpr(29, ctx.gpr[29] + static_cast<std::uint32_t>(-48));
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(28), ctx.gpr[31]);
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(24), ctx.gpr[19]);
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(20), ctx.gpr[18]);
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(16), ctx.gpr[17]);
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(12), ctx.gpr[16]);
    ctx.set_gpr(18, ctx.gpr[4] + 0u);
    ctx.set_gpr(17, ctx.gpr[5] + 0u);
    ctx.set_gpr(4, ctx.gpr[17] + 0u);
    ctx.set_gpr(25, rt.memory().aot_load32(ctx.gpr[5] + static_cast<std::uint32_t>(0)));
    ctx.set_gpr(25, rt.memory().aot_load32(ctx.gpr[25] + static_cast<std::uint32_t>(148)));
    jump_target = ctx.gpr[25];
    ctx.set_gpr(31, 0x08A406C8u);
    // nop
    ctx.pc = jump_target;
    if (rt.invoke_chained_call(ctx, &aot_mem) && ctx.pc == 0x08A406C8u) goto L_08A406C8;
    return;
L_08A406C8:
    ctx.set_gpr(16, ctx.gpr[2] + 0u);
    ctx.set_gpr(4, ctx.gpr[17] + 0u);
    ctx.set_gpr(25, rt.memory().aot_load32(ctx.gpr[17] + static_cast<std::uint32_t>(0)));
    ctx.set_gpr(25, rt.memory().aot_load32(ctx.gpr[25] + static_cast<std::uint32_t>(212)));
    jump_target = ctx.gpr[25];
    ctx.set_gpr(31, 0x08A406E0u);
    // nop
    ctx.pc = jump_target;
    if (rt.invoke_chained_call(ctx, &aot_mem) && ctx.pc == 0x08A406E0u) goto L_08A406E0;
    return;
L_08A406E0:
    ctx.set_gpr(19, ctx.gpr[2] & 255u);
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(44), 0u);
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(40), 0u);
    ctx.set_gpr(4, ctx.gpr[18] + 0u);
    ctx.set_gpr(5, ctx.gpr[17] + 0u);
    ctx.set_gpr(31, 0x08A406FCu);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0142_entry, 142u, 597u, 0x08A3F188u>(ctx, &aot_mem) && ctx.pc == 0x08A406FCu) goto L_08A406FC;
    return;
L_08A406FC:
    ctx.set_gpr(3, ctx.gpr[19] & 255u);
    ctx.set_gpr(3, ctx.gpr[3] & 1u);
    { const bool branch_taken = ctx.gpr[3] == 0u;
    // nop
      if (branch_taken) {
          goto L_08A407FC;
      }
      goto L_08A4070C;
    }
L_08A4070C:
    ctx.set_gpr(4, ctx.gpr[17] + 0u);
    ctx.set_gpr(5, 0u + static_cast<std::uint32_t>(1));
    ctx.set_gpr(25, rt.memory().aot_load32(ctx.gpr[17] + static_cast<std::uint32_t>(0)));
    ctx.set_gpr(25, rt.memory().aot_load32(ctx.gpr[25] + static_cast<std::uint32_t>(208)));
    jump_target = ctx.gpr[25];
    ctx.set_gpr(31, 0x08A40724u);
    // nop
    ctx.pc = jump_target;
    if (rt.invoke_chained_call(ctx, &aot_mem) && ctx.pc == 0x08A40724u) goto L_08A40724;
    return;
L_08A40724:
    ctx.set_gpr(3, 0u + static_cast<std::uint32_t>(2));
    { const bool branch_taken = ctx.gpr[2] != ctx.gpr[3];
    // nop
      if (branch_taken) {
          goto L_08A407FC;
      }
      goto L_08A40730;
    }
L_08A40730:
    ctx.set_gpr(2, rt.memory().aot_load32(ctx.gpr[18] + static_cast<std::uint32_t>(64)));
    { const bool branch_taken = ctx.gpr[2] != 0u;
    // nop
      if (branch_taken) {
          goto L_08A40764;
      }
      goto L_08A4073C;
    }
L_08A4073C:
    ctx.set_gpr(4, ctx.gpr[18] + 0u);
    ctx.set_gpr(31, 0x08A40748u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0081_entry, 81u, 41u, 0x0894835Cu>(ctx, &aot_mem) && ctx.pc == 0x08A40748u) goto L_08A40748;
    return;
L_08A40748:
    ctx.set_gpr(4, ctx.gpr[2] + 0u);
    ctx.set_gpr(31, 0x08A40754u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0060_entry, 60u, 654u, 0x088F772Cu>(ctx, &aot_mem) && ctx.pc == 0x08A40754u) goto L_08A40754;
    return;
L_08A40754:
    ctx.set_gpr(4, ctx.gpr[18] + static_cast<std::uint32_t>(64));
    ctx.set_gpr(5, ctx.gpr[2] + 0u);
    ctx.set_gpr(31, 0x08A40764u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0085_entry, 85u, 67u, 0x0895853Cu>(ctx, &aot_mem) && ctx.pc == 0x08A40764u) goto L_08A40764;
    return;
L_08A40764:
    ctx.set_gpr(4, rt.memory().aot_load32(ctx.gpr[18] + static_cast<std::uint32_t>(64)));
    ctx.set_gpr(2, ctx.gpr[16] << 1u);
    ctx.set_gpr(2, ctx.gpr[2] + ctx.gpr[16]);
    ctx.set_gpr(5, ctx.gpr[2] << 1u);
    { const bool branch_taken = static_cast<std::int32_t>(ctx.gpr[5]) < 0;
    // nop
      if (branch_taken) {
          goto L_08A407A4;
      }
      goto L_08A4077C;
    }
L_08A4077C:
    ctx.set_gpr(2, rt.memory().aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(12)));
    ctx.set_gpr(1, static_cast<std::int32_t>(ctx.gpr[2]) < static_cast<std::int32_t>(ctx.gpr[5]) ? 1u : 0u);
    { const bool branch_taken = ctx.gpr[1] != 0u;
    // nop
      if (branch_taken) {
          goto L_08A40798;
      }
      goto L_08A4078C;
    }
L_08A4078C:
    rt.memory().aot_store32(ctx.gpr[4] + static_cast<std::uint32_t>(8), ctx.gpr[5]);
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_08A407A4;
      }
      goto L_08A40798;
    }
L_08A40798:
    ctx.set_gpr(6, 0u + static_cast<std::uint32_t>(2));
    ctx.set_gpr(31, 0x08A407A4u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0066_entry, 66u, 795u, 0x0890FB1Cu>(ctx, &aot_mem) && ctx.pc == 0x08A407A4u) goto L_08A407A4;
    return;
L_08A407A4:
    ctx.set_gpr(4, rt.memory().aot_load32(ctx.gpr[18] + static_cast<std::uint32_t>(64)));
    ctx.set_gpr(5, rt.memory().aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(8)));
    ctx.set_gpr(2, rt.memory().aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(12)));
    ctx.set_gpr(1, static_cast<std::int32_t>(ctx.gpr[5]) < static_cast<std::int32_t>(ctx.gpr[2]) ? 1u : 0u);
    { const bool branch_taken = ctx.gpr[1] == 0u;
    // nop
      if (branch_taken) {
          goto L_08A407C8;
      }
      goto L_08A407BC;
    }
L_08A407BC:
    ctx.set_gpr(6, 0u + static_cast<std::uint32_t>(2));
    ctx.set_gpr(31, 0x08A407C8u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0066_entry, 66u, 785u, 0x0890FA2Cu>(ctx, &aot_mem) && ctx.pc == 0x08A407C8u) goto L_08A407C8;
    return;
L_08A407C8:
    ctx.set_gpr(2, rt.memory().aot_load32(ctx.gpr[18] + static_cast<std::uint32_t>(64)));
    ctx.set_gpr(5, rt.memory().aot_load32(ctx.gpr[2] + static_cast<std::uint32_t>(16)));
    ctx.set_gpr(4, rt.memory().aot_load32(ctx.gpr[17] + static_cast<std::uint32_t>(60)));
    ctx.set_gpr(6, ctx.gpr[29] + static_cast<std::uint32_t>(44));
    ctx.set_gpr(7, ctx.gpr[29] + static_cast<std::uint32_t>(40));
    ctx.set_gpr(31, 0x08A407E4u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0157_entry, 157u, 44u, 0x08A78418u>(ctx, &aot_mem) && ctx.pc == 0x08A407E4u) goto L_08A407E4;
    return;
L_08A407E4:
    ctx.fpr[0] = std::bit_cast<float>(rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(44)));
    rt.memory().aot_store32(ctx.gpr[18] + static_cast<std::uint32_t>(68), std::bit_cast<std::uint32_t>(ctx.fpr[0]));
    ctx.fpr[1] = std::bit_cast<float>(rt.memory().aot_load32(ctx.gpr[28] + static_cast<std::uint32_t>(-32256)));
    ctx.fpr[0] = std::bit_cast<float>(rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(40)));
    { const float fs = ctx.fpr[1]; const float ft = ctx.fpr[0]; if ((std::isinf(fs) && ft == 0.0f) || (std::isinf(ft) && fs == 0.0f)) ctx.set_fpr_bits(0, 0x7FC00000u); else ctx.fpr[0] = fs * ft; }
    rt.memory().aot_store32(ctx.gpr[18] + static_cast<std::uint32_t>(72), std::bit_cast<std::uint32_t>(ctx.fpr[0]));
    goto L_08A407FC;
L_08A407FC:
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
L_08A4081C:
    ctx.set_gpr(29, ctx.gpr[29] + static_cast<std::uint32_t>(-128));
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(44), ctx.gpr[31]);
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(40), ctx.gpr[19]);
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(36), ctx.gpr[18]);
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(32), ctx.gpr[17]);
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(28), ctx.gpr[16]);
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(20), std::bit_cast<std::uint32_t>(ctx.fpr[20]));
    ctx.set_gpr(17, ctx.gpr[4] + 0u);
    ctx.set_gpr(16, ctx.gpr[5] + 0u);
    ctx.set_gpr(19, ctx.gpr[6] + 0u);
    ctx.set_gpr(18, ctx.gpr[7] + 0u);
    ctx.set_fpr_bits(20, ctx.fpr_bits(12));
    ctx.set_gpr(3, rt.memory().aot_load8(ctx.gpr[4] + static_cast<std::uint32_t>(57)));
    { const bool branch_taken = ctx.gpr[3] != 0u;
    // nop
      if (branch_taken) {
          goto L_08A40878;
      }
      goto L_08A40858;
    }
L_08A40858:
    ctx.set_gpr(5, ctx.gpr[19] + 0u);
    ctx.set_gpr(6, ctx.gpr[16] + 0u);
    ctx.set_gpr(25, rt.memory().aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(0)));
    ctx.set_gpr(25, rt.memory().aot_load32(ctx.gpr[25] + static_cast<std::uint32_t>(184)));
    jump_target = ctx.gpr[25];
    ctx.set_gpr(31, 0x08A40870u);
    // nop
    ctx.pc = jump_target;
    if (rt.invoke_chained_call(ctx, &aot_mem) && ctx.pc == 0x08A40870u) goto L_08A40870;
    return;
L_08A40870:
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_08A40958;
      }
      goto L_08A40878;
    }
L_08A40878:
    ctx.set_gpr(2, 0u + static_cast<std::uint32_t>(1));
    { const bool branch_taken = ctx.gpr[3] != ctx.gpr[2];
    // nop
      if (branch_taken) {
          goto L_08A408D8;
      }
      goto L_08A40884;
    }
L_08A40884:
    ctx.set_gpr(5, ctx.gpr[19] + 0u);
    ctx.set_gpr(6, ctx.gpr[29] + static_cast<std::uint32_t>(116));
    ctx.set_gpr(25, rt.memory().aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(0)));
    ctx.set_gpr(25, rt.memory().aot_load32(ctx.gpr[25] + static_cast<std::uint32_t>(184)));
    jump_target = ctx.gpr[25];
    ctx.set_gpr(31, 0x08A4089Cu);
    // nop
    ctx.pc = jump_target;
    if (rt.invoke_chained_call(ctx, &aot_mem) && ctx.pc == 0x08A4089Cu) goto L_08A4089C;
    return;
L_08A4089C:
    ctx.set_gpr(4, ctx.gpr[17] + 0u);
    ctx.set_gpr(5, ctx.gpr[18] + 0u);
    ctx.set_gpr(6, ctx.gpr[29] + static_cast<std::uint32_t>(104));
    ctx.set_gpr(25, rt.memory().aot_load32(ctx.gpr[17] + static_cast<std::uint32_t>(0)));
    ctx.set_gpr(25, rt.memory().aot_load32(ctx.gpr[25] + static_cast<std::uint32_t>(184)));
    jump_target = ctx.gpr[25];
    ctx.set_gpr(31, 0x08A408B8u);
    // nop
    ctx.pc = jump_target;
    if (rt.invoke_chained_call(ctx, &aot_mem) && ctx.pc == 0x08A408B8u) goto L_08A408B8;
    return;
L_08A408B8:
    ctx.set_gpr(4, ctx.gpr[16] + 0u);
    ctx.set_fpr_bits(12, ctx.fpr_bits(20));
    ctx.set_gpr(5, ctx.gpr[29] + static_cast<std::uint32_t>(116));
    ctx.set_gpr(6, ctx.gpr[29] + static_cast<std::uint32_t>(104));
    ctx.set_gpr(31, 0x08A408D0u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0127_entry, 127u, 269u, 0x08A03174u>(ctx, &aot_mem) && ctx.pc == 0x08A408D0u) goto L_08A408D0;
    return;
L_08A408D0:
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_08A40958;
      }
      goto L_08A408D8;
    }
L_08A408D8:
    ctx.set_gpr(5, ctx.gpr[19] + 0u);
    ctx.set_gpr(6, ctx.gpr[29] + static_cast<std::uint32_t>(92));
    ctx.set_gpr(25, rt.memory().aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(0)));
    ctx.set_gpr(25, rt.memory().aot_load32(ctx.gpr[25] + static_cast<std::uint32_t>(184)));
    jump_target = ctx.gpr[25];
    ctx.set_gpr(31, 0x08A408F0u);
    // nop
    ctx.pc = jump_target;
    if (rt.invoke_chained_call(ctx, &aot_mem) && ctx.pc == 0x08A408F0u) goto L_08A408F0;
    return;
L_08A408F0:
    ctx.set_gpr(4, ctx.gpr[17] + 0u);
    ctx.set_gpr(5, ctx.gpr[18] + 0u);
    ctx.set_gpr(6, ctx.gpr[29] + static_cast<std::uint32_t>(80));
    ctx.set_gpr(25, rt.memory().aot_load32(ctx.gpr[17] + static_cast<std::uint32_t>(0)));
    ctx.set_gpr(25, rt.memory().aot_load32(ctx.gpr[25] + static_cast<std::uint32_t>(184)));
    jump_target = ctx.gpr[25];
    ctx.set_gpr(31, 0x08A4090Cu);
    // nop
    ctx.pc = jump_target;
    if (rt.invoke_chained_call(ctx, &aot_mem) && ctx.pc == 0x08A4090Cu) goto L_08A4090C;
    return;
L_08A4090C:
    ctx.set_gpr(18, ctx.gpr[19] << 1u);
    ctx.set_gpr(4, ctx.gpr[17] + 0u);
    ctx.set_gpr(5, ctx.gpr[18] + 0u);
    ctx.set_gpr(6, ctx.gpr[29] + static_cast<std::uint32_t>(68));
    ctx.set_gpr(31, 0x08A40924u);
    // nop
    goto L_08A4097C;
L_08A40924:
    ctx.set_gpr(5, ctx.gpr[18] + static_cast<std::uint32_t>(1));
    ctx.set_gpr(4, ctx.gpr[17] + 0u);
    ctx.set_gpr(6, ctx.gpr[29] + static_cast<std::uint32_t>(56));
    ctx.set_gpr(31, 0x08A40938u);
    // nop
    goto L_08A4097C;
L_08A40938:
    ctx.set_gpr(4, ctx.gpr[16] + 0u);
    ctx.set_fpr_bits(12, ctx.fpr_bits(20));
    ctx.set_gpr(5, ctx.gpr[29] + static_cast<std::uint32_t>(92));
    ctx.set_gpr(6, ctx.gpr[29] + static_cast<std::uint32_t>(68));
    ctx.set_gpr(7, ctx.gpr[29] + static_cast<std::uint32_t>(56));
    ctx.set_gpr(8, ctx.gpr[29] + static_cast<std::uint32_t>(80));
    ctx.set_gpr(31, 0x08A40958u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0127_entry, 127u, 276u, 0x08A03368u>(ctx, &aot_mem) && ctx.pc == 0x08A40958u) goto L_08A40958;
    return;
L_08A40958:
    ctx.set_gpr(31, rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(44)));
    ctx.set_gpr(19, rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(40)));
    ctx.set_gpr(18, rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(36)));
    ctx.set_gpr(17, rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(32)));
    ctx.set_gpr(16, rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(28)));
    ctx.fpr[20] = std::bit_cast<float>(rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(20)));
    ctx.set_gpr(29, ctx.gpr[29] + static_cast<std::uint32_t>(128));
    jump_target = ctx.gpr[31];
    // nop
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_08A4097C:
    ctx.set_gpr(3, rt.memory().aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(64)));
    ctx.set_gpr(7, rt.memory().aot_load32(ctx.gpr[3] + static_cast<std::uint32_t>(16)));
    ctx.set_gpr(3, ctx.gpr[5] << 1u);
    ctx.set_gpr(3, ctx.gpr[3] + ctx.gpr[5]);
    ctx.set_gpr(3, ctx.gpr[3] << 1u);
    ctx.set_gpr(7, ctx.gpr[7] + ctx.gpr[3]);
    ctx.set_gpr(3, rt.memory().aot_load16(ctx.gpr[7] + static_cast<std::uint32_t>(0)));
    { const bool branch_taken = static_cast<std::int32_t>(ctx.gpr[3]) < 0;
    // nop
      if (branch_taken) {
          goto L_08A409B0;
      }
      goto L_08A409A0;
    }
L_08A409A0:
    ctx.fpr[0] = std::bit_cast<float>(ctx.gpr[3]);
    ctx.fpr[1] = static_cast<float>(static_cast<std::int32_t>(ctx.fpr_bits(0)));
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_08A409C8;
      }
      goto L_08A409B0;
    }
L_08A409B0:
    ctx.set_gpr(5, ctx.gpr[3] >> 1u);
    ctx.set_gpr(3, ctx.gpr[3] & 1u);
    ctx.set_gpr(5, ctx.gpr[5] | ctx.gpr[3]);
    ctx.fpr[0] = std::bit_cast<float>(ctx.gpr[5]);
    ctx.fpr[1] = static_cast<float>(static_cast<std::int32_t>(ctx.fpr_bits(0)));
    ctx.fpr[1] = ctx.fpr[1] + ctx.fpr[1];
    goto L_08A409C8;
L_08A409C8:
    ctx.fpr[0] = std::bit_cast<float>(rt.memory().aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(72)));
    { const float fs = ctx.fpr[1]; const float ft = ctx.fpr[0]; if ((std::isinf(fs) && ft == 0.0f) || (std::isinf(ft) && fs == 0.0f)) ctx.set_fpr_bits(1, 0x7FC00000u); else ctx.fpr[1] = fs * ft; }
    ctx.fpr[0] = std::bit_cast<float>(rt.memory().aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(68)));
    ctx.fpr[0] = ctx.fpr[0] + ctx.fpr[1];
    rt.memory().aot_store32(ctx.gpr[6] + static_cast<std::uint32_t>(0), std::bit_cast<std::uint32_t>(ctx.fpr[0]));
    ctx.set_gpr(3, rt.memory().aot_load16(ctx.gpr[7] + static_cast<std::uint32_t>(2)));
    { const bool branch_taken = static_cast<std::int32_t>(ctx.gpr[3]) < 0;
    // nop
      if (branch_taken) {
          goto L_08A409F8;
      }
      goto L_08A409E8;
    }
L_08A409E8:
    ctx.fpr[0] = std::bit_cast<float>(ctx.gpr[3]);
    ctx.fpr[1] = static_cast<float>(static_cast<std::int32_t>(ctx.fpr_bits(0)));
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_08A40A10;
      }
      goto L_08A409F8;
    }
L_08A409F8:
    ctx.set_gpr(5, ctx.gpr[3] >> 1u);
    ctx.set_gpr(3, ctx.gpr[3] & 1u);
    ctx.set_gpr(5, ctx.gpr[5] | ctx.gpr[3]);
    ctx.fpr[0] = std::bit_cast<float>(ctx.gpr[5]);
    ctx.fpr[1] = static_cast<float>(static_cast<std::int32_t>(ctx.fpr_bits(0)));
    ctx.fpr[1] = ctx.fpr[1] + ctx.fpr[1];
    goto L_08A40A10;
L_08A40A10:
    ctx.fpr[0] = std::bit_cast<float>(rt.memory().aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(72)));
    { const float fs = ctx.fpr[1]; const float ft = ctx.fpr[0]; if ((std::isinf(fs) && ft == 0.0f) || (std::isinf(ft) && fs == 0.0f)) ctx.set_fpr_bits(1, 0x7FC00000u); else ctx.fpr[1] = fs * ft; }
    ctx.fpr[0] = std::bit_cast<float>(rt.memory().aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(68)));
    ctx.fpr[0] = ctx.fpr[0] + ctx.fpr[1];
    rt.memory().aot_store32(ctx.gpr[6] + static_cast<std::uint32_t>(4), std::bit_cast<std::uint32_t>(ctx.fpr[0]));
    ctx.set_gpr(3, rt.memory().aot_load16(ctx.gpr[7] + static_cast<std::uint32_t>(4)));
    { const bool branch_taken = static_cast<std::int32_t>(ctx.gpr[3]) < 0;
    // nop
      if (branch_taken) {
          goto L_08A40A40;
      }
      goto L_08A40A30;
    }
L_08A40A30:
    ctx.fpr[0] = std::bit_cast<float>(ctx.gpr[3]);
    ctx.fpr[1] = static_cast<float>(static_cast<std::int32_t>(ctx.fpr_bits(0)));
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_08A40A58;
      }
      goto L_08A40A40;
    }
L_08A40A40:
    ctx.set_gpr(5, ctx.gpr[3] >> 1u);
    ctx.set_gpr(3, ctx.gpr[3] & 1u);
    ctx.set_gpr(5, ctx.gpr[5] | ctx.gpr[3]);
    ctx.fpr[0] = std::bit_cast<float>(ctx.gpr[5]);
    ctx.fpr[1] = static_cast<float>(static_cast<std::int32_t>(ctx.fpr_bits(0)));
    ctx.fpr[1] = ctx.fpr[1] + ctx.fpr[1];
    goto L_08A40A58;
L_08A40A58:
    ctx.fpr[0] = std::bit_cast<float>(rt.memory().aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(72)));
    { const float fs = ctx.fpr[1]; const float ft = ctx.fpr[0]; if ((std::isinf(fs) && ft == 0.0f) || (std::isinf(ft) && fs == 0.0f)) ctx.set_fpr_bits(1, 0x7FC00000u); else ctx.fpr[1] = fs * ft; }
    ctx.fpr[0] = std::bit_cast<float>(rt.memory().aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(68)));
    ctx.fpr[0] = ctx.fpr[0] + ctx.fpr[1];
    rt.memory().aot_store32(ctx.gpr[6] + static_cast<std::uint32_t>(8), std::bit_cast<std::uint32_t>(ctx.fpr[0]));
    jump_target = ctx.gpr[31];
    // nop
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_08A40A74:
    jump_target = ctx.gpr[31];
    // nop
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_08A40A7C:
    ctx.set_gpr(2, rt.memory().aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(16)));
    jump_target = ctx.gpr[31];
    // nop
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_08A40A88:
    jump_target = ctx.gpr[31];
    // nop
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_08A40A90:
    ctx.set_gpr(29, ctx.gpr[29] + static_cast<std::uint32_t>(-16));
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(12), ctx.gpr[31]);
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(8), ctx.gpr[16]);
    ctx.set_gpr(16, ctx.gpr[4] + 0u);
    ctx.set_gpr(31, 0x08A40AA8u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0149_entry, 149u, 217u, 0x08A590A8u>(ctx, &aot_mem) && ctx.pc == 0x08A40AA8u) goto L_08A40AA8;
    return;
L_08A40AA8:
    ctx.set_gpr(4, ctx.gpr[16] + 0u);
    ctx.set_gpr(25, rt.memory().aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(0)));
    ctx.set_gpr(25, rt.memory().aot_load32(ctx.gpr[25] + static_cast<std::uint32_t>(88)));
    jump_target = ctx.gpr[25];
    ctx.set_gpr(31, 0x08A40ABCu);
    // nop
    ctx.pc = jump_target;
    if (rt.invoke_chained_call(ctx, &aot_mem) && ctx.pc == 0x08A40ABCu) goto L_08A40ABC;
    return;
L_08A40ABC:
    ctx.set_gpr(4, ctx.gpr[2] + 0u);
    ctx.set_gpr(5, 0u + static_cast<std::uint32_t>(1));
    ctx.set_gpr(31, 0x08A40ACCu);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0080_entry, 80u, 118u, 0x089448B4u>(ctx, &aot_mem) && ctx.pc == 0x08A40ACCu) goto L_08A40ACC;
    return;
L_08A40ACC:
    { const bool branch_taken = ctx.gpr[2] != 0u;
    // nop
      if (branch_taken) {
          goto L_08A410EC;
      }
      goto L_08A40AD4;
    }
L_08A40AD4:
    ctx.set_gpr(31, 0x08A40ADCu);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0078_entry, 78u, 216u, 0x0893CDDCu>(ctx, &aot_mem) && ctx.pc == 0x08A40ADCu) goto L_08A40ADC;
    return;
L_08A40ADC:
    ctx.set_gpr(4, rt.memory().aot_load32(ctx.gpr[2] + static_cast<std::uint32_t>(0)));
    ctx.set_gpr(31, 0x08A40AE8u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0078_entry, 78u, 199u, 0x0893CC68u>(ctx, &aot_mem) && ctx.pc == 0x08A40AE8u) goto L_08A40AE8;
    return;
L_08A40AE8:
    ctx.set_gpr(4, ctx.gpr[2] + 0u);
    ctx.set_gpr(31, 0x08A40AF4u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0047_entry, 47u, 127u, 0x088C0B58u>(ctx, &aot_mem) && ctx.pc == 0x08A40AF4u) goto L_08A40AF4;
    return;
L_08A40AF4:
    ctx.set_gpr(3, 2246u << 16u);
    rt.memory().aot_store32(ctx.gpr[3] + static_cast<std::uint32_t>(-22044), ctx.gpr[2]);
    ctx.set_gpr(31, 0x08A40B04u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0078_entry, 78u, 216u, 0x0893CDDCu>(ctx, &aot_mem) && ctx.pc == 0x08A40B04u) goto L_08A40B04;
    return;
L_08A40B04:
    ctx.set_gpr(4, rt.memory().aot_load32(ctx.gpr[2] + static_cast<std::uint32_t>(0)));
    ctx.set_gpr(31, 0x08A40B10u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0078_entry, 78u, 199u, 0x0893CC68u>(ctx, &aot_mem) && ctx.pc == 0x08A40B10u) goto L_08A40B10;
    return;
L_08A40B10:
    ctx.set_gpr(4, ctx.gpr[2] + 0u);
    ctx.set_gpr(31, 0x08A40B1Cu);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0045_entry, 45u, 631u, 0x088BBA54u>(ctx, &aot_mem) && ctx.pc == 0x08A40B1Cu) goto L_08A40B1C;
    return;
L_08A40B1C:
    ctx.set_gpr(3, 2246u << 16u);
    rt.memory().aot_store32(ctx.gpr[3] + static_cast<std::uint32_t>(-21892), ctx.gpr[2]);
    ctx.set_gpr(31, 0x08A40B2Cu);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0078_entry, 78u, 216u, 0x0893CDDCu>(ctx, &aot_mem) && ctx.pc == 0x08A40B2Cu) goto L_08A40B2C;
    return;
L_08A40B2C:
    ctx.set_gpr(4, rt.memory().aot_load32(ctx.gpr[2] + static_cast<std::uint32_t>(0)));
    ctx.set_gpr(31, 0x08A40B38u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0078_entry, 78u, 199u, 0x0893CC68u>(ctx, &aot_mem) && ctx.pc == 0x08A40B38u) goto L_08A40B38;
    return;
L_08A40B38:
    ctx.set_gpr(4, ctx.gpr[2] + 0u);
    ctx.set_gpr(31, 0x08A40B44u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0044_entry, 44u, 403u, 0x088B66B4u>(ctx, &aot_mem) && ctx.pc == 0x08A40B44u) goto L_08A40B44;
    return;
L_08A40B44:
    ctx.set_gpr(3, 2246u << 16u);
    rt.memory().aot_store32(ctx.gpr[3] + static_cast<std::uint32_t>(-22040), ctx.gpr[2]);
    ctx.set_gpr(31, 0x08A40B54u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0078_entry, 78u, 216u, 0x0893CDDCu>(ctx, &aot_mem) && ctx.pc == 0x08A40B54u) goto L_08A40B54;
    return;
L_08A40B54:
    ctx.set_gpr(4, rt.memory().aot_load32(ctx.gpr[2] + static_cast<std::uint32_t>(0)));
    ctx.set_gpr(31, 0x08A40B60u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0078_entry, 78u, 199u, 0x0893CC68u>(ctx, &aot_mem) && ctx.pc == 0x08A40B60u) goto L_08A40B60;
    return;
L_08A40B60:
    ctx.set_gpr(4, ctx.gpr[2] + 0u);
    ctx.set_gpr(31, 0x08A40B6Cu);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0044_entry, 44u, 403u, 0x088B66B4u>(ctx, &aot_mem) && ctx.pc == 0x08A40B6Cu) goto L_08A40B6C;
    return;
L_08A40B6C:
    ctx.set_gpr(3, 2246u << 16u);
    rt.memory().aot_store32(ctx.gpr[3] + static_cast<std::uint32_t>(-22036), ctx.gpr[2]);
    ctx.set_gpr(31, 0x08A40B7Cu);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0078_entry, 78u, 216u, 0x0893CDDCu>(ctx, &aot_mem) && ctx.pc == 0x08A40B7Cu) goto L_08A40B7C;
    return;
L_08A40B7C:
    ctx.set_gpr(4, rt.memory().aot_load32(ctx.gpr[2] + static_cast<std::uint32_t>(0)));
    ctx.set_gpr(31, 0x08A40B88u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0078_entry, 78u, 199u, 0x0893CC68u>(ctx, &aot_mem) && ctx.pc == 0x08A40B88u) goto L_08A40B88;
    return;
L_08A40B88:
    ctx.set_gpr(4, ctx.gpr[2] + 0u);
    ctx.set_gpr(31, 0x08A40B94u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0044_entry, 44u, 403u, 0x088B66B4u>(ctx, &aot_mem) && ctx.pc == 0x08A40B94u) goto L_08A40B94;
    return;
L_08A40B94:
    ctx.set_gpr(3, 2246u << 16u);
    rt.memory().aot_store32(ctx.gpr[3] + static_cast<std::uint32_t>(-22032), ctx.gpr[2]);
    ctx.set_gpr(31, 0x08A40BA4u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0078_entry, 78u, 216u, 0x0893CDDCu>(ctx, &aot_mem) && ctx.pc == 0x08A40BA4u) goto L_08A40BA4;
    return;
L_08A40BA4:
    ctx.set_gpr(4, rt.memory().aot_load32(ctx.gpr[2] + static_cast<std::uint32_t>(0)));
    ctx.set_gpr(31, 0x08A40BB0u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0078_entry, 78u, 199u, 0x0893CC68u>(ctx, &aot_mem) && ctx.pc == 0x08A40BB0u) goto L_08A40BB0;
    return;
L_08A40BB0:
    ctx.set_gpr(4, ctx.gpr[2] + 0u);
    ctx.set_gpr(31, 0x08A40BBCu);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0044_entry, 44u, 267u, 0x088B5A24u>(ctx, &aot_mem) && ctx.pc == 0x08A40BBCu) goto L_08A40BBC;
    return;
L_08A40BBC:
    ctx.set_gpr(3, 2246u << 16u);
    rt.memory().aot_store32(ctx.gpr[3] + static_cast<std::uint32_t>(-22028), ctx.gpr[2]);
    ctx.set_gpr(31, 0x08A40BCCu);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0078_entry, 78u, 216u, 0x0893CDDCu>(ctx, &aot_mem) && ctx.pc == 0x08A40BCCu) goto L_08A40BCC;
    return;
L_08A40BCC:
    ctx.set_gpr(4, rt.memory().aot_load32(ctx.gpr[2] + static_cast<std::uint32_t>(0)));
    ctx.set_gpr(31, 0x08A40BD8u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0078_entry, 78u, 199u, 0x0893CC68u>(ctx, &aot_mem) && ctx.pc == 0x08A40BD8u) goto L_08A40BD8;
    return;
L_08A40BD8:
    ctx.set_gpr(4, ctx.gpr[2] + 0u);
    ctx.set_gpr(31, 0x08A40BE4u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0044_entry, 44u, 267u, 0x088B5A24u>(ctx, &aot_mem) && ctx.pc == 0x08A40BE4u) goto L_08A40BE4;
    return;
L_08A40BE4:
    ctx.set_gpr(3, 2246u << 16u);
    rt.memory().aot_store32(ctx.gpr[3] + static_cast<std::uint32_t>(-22024), ctx.gpr[2]);
    ctx.set_gpr(31, 0x08A40BF4u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0078_entry, 78u, 216u, 0x0893CDDCu>(ctx, &aot_mem) && ctx.pc == 0x08A40BF4u) goto L_08A40BF4;
    return;
L_08A40BF4:
    ctx.set_gpr(4, rt.memory().aot_load32(ctx.gpr[2] + static_cast<std::uint32_t>(0)));
    ctx.set_gpr(31, 0x08A40C00u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0078_entry, 78u, 199u, 0x0893CC68u>(ctx, &aot_mem) && ctx.pc == 0x08A40C00u) goto L_08A40C00;
    return;
L_08A40C00:
    ctx.set_gpr(4, ctx.gpr[2] + 0u);
    ctx.set_gpr(31, 0x08A40C0Cu);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0044_entry, 44u, 267u, 0x088B5A24u>(ctx, &aot_mem) && ctx.pc == 0x08A40C0Cu) goto L_08A40C0C;
    return;
L_08A40C0C:
    ctx.set_gpr(3, 2246u << 16u);
    rt.memory().aot_store32(ctx.gpr[3] + static_cast<std::uint32_t>(-22020), ctx.gpr[2]);
    ctx.set_gpr(31, 0x08A40C1Cu);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0078_entry, 78u, 216u, 0x0893CDDCu>(ctx, &aot_mem) && ctx.pc == 0x08A40C1Cu) goto L_08A40C1C;
    return;
L_08A40C1C:
    ctx.set_gpr(4, rt.memory().aot_load32(ctx.gpr[2] + static_cast<std::uint32_t>(0)));
    ctx.set_gpr(31, 0x08A40C28u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0078_entry, 78u, 199u, 0x0893CC68u>(ctx, &aot_mem) && ctx.pc == 0x08A40C28u) goto L_08A40C28;
    return;
L_08A40C28:
    ctx.set_gpr(4, ctx.gpr[2] + 0u);
    ctx.set_gpr(31, 0x08A40C34u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0043_entry, 43u, 409u, 0x088B2600u>(ctx, &aot_mem) && ctx.pc == 0x08A40C34u) goto L_08A40C34;
    return;
L_08A40C34:
    ctx.set_gpr(3, 2246u << 16u);
    rt.memory().aot_store32(ctx.gpr[3] + static_cast<std::uint32_t>(-21952), ctx.gpr[2]);
    ctx.set_gpr(31, 0x08A40C44u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0078_entry, 78u, 216u, 0x0893CDDCu>(ctx, &aot_mem) && ctx.pc == 0x08A40C44u) goto L_08A40C44;
    return;
L_08A40C44:
    ctx.set_gpr(4, rt.memory().aot_load32(ctx.gpr[2] + static_cast<std::uint32_t>(0)));
    ctx.set_gpr(31, 0x08A40C50u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0078_entry, 78u, 199u, 0x0893CC68u>(ctx, &aot_mem) && ctx.pc == 0x08A40C50u) goto L_08A40C50;
    return;
L_08A40C50:
    ctx.set_gpr(4, ctx.gpr[2] + 0u);
    ctx.set_gpr(31, 0x08A40C5Cu);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0043_entry, 43u, 409u, 0x088B2600u>(ctx, &aot_mem) && ctx.pc == 0x08A40C5Cu) goto L_08A40C5C;
    return;
L_08A40C5C:
    ctx.set_gpr(3, 2246u << 16u);
    rt.memory().aot_store32(ctx.gpr[3] + static_cast<std::uint32_t>(-21948), ctx.gpr[2]);
    ctx.set_gpr(31, 0x08A40C6Cu);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0078_entry, 78u, 216u, 0x0893CDDCu>(ctx, &aot_mem) && ctx.pc == 0x08A40C6Cu) goto L_08A40C6C;
    return;
L_08A40C6C:
    ctx.set_gpr(4, rt.memory().aot_load32(ctx.gpr[2] + static_cast<std::uint32_t>(0)));
    ctx.set_gpr(31, 0x08A40C78u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0078_entry, 78u, 199u, 0x0893CC68u>(ctx, &aot_mem) && ctx.pc == 0x08A40C78u) goto L_08A40C78;
    return;
L_08A40C78:
    ctx.set_gpr(4, ctx.gpr[2] + 0u);
    ctx.set_gpr(31, 0x08A40C84u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0043_entry, 43u, 355u, 0x088B2154u>(ctx, &aot_mem) && ctx.pc == 0x08A40C84u) goto L_08A40C84;
    return;
L_08A40C84:
    ctx.set_gpr(3, 2246u << 16u);
    rt.memory().aot_store32(ctx.gpr[3] + static_cast<std::uint32_t>(-21944), ctx.gpr[2]);
    ctx.set_gpr(31, 0x08A40C94u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0078_entry, 78u, 216u, 0x0893CDDCu>(ctx, &aot_mem) && ctx.pc == 0x08A40C94u) goto L_08A40C94;
    return;
L_08A40C94:
    ctx.set_gpr(4, rt.memory().aot_load32(ctx.gpr[2] + static_cast<std::uint32_t>(0)));
    ctx.set_gpr(31, 0x08A40CA0u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0078_entry, 78u, 199u, 0x0893CC68u>(ctx, &aot_mem) && ctx.pc == 0x08A40CA0u) goto L_08A40CA0;
    return;
L_08A40CA0:
    ctx.set_gpr(4, ctx.gpr[2] + 0u);
    ctx.set_gpr(31, 0x08A40CACu);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0043_entry, 43u, 355u, 0x088B2154u>(ctx, &aot_mem) && ctx.pc == 0x08A40CACu) goto L_08A40CAC;
    return;
L_08A40CAC:
    ctx.set_gpr(3, 2246u << 16u);
    rt.memory().aot_store32(ctx.gpr[3] + static_cast<std::uint32_t>(-21940), ctx.gpr[2]);
    ctx.set_gpr(31, 0x08A40CBCu);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0078_entry, 78u, 216u, 0x0893CDDCu>(ctx, &aot_mem) && ctx.pc == 0x08A40CBCu) goto L_08A40CBC;
    return;
L_08A40CBC:
    ctx.set_gpr(4, rt.memory().aot_load32(ctx.gpr[2] + static_cast<std::uint32_t>(0)));
    ctx.set_gpr(31, 0x08A40CC8u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0078_entry, 78u, 199u, 0x0893CC68u>(ctx, &aot_mem) && ctx.pc == 0x08A40CC8u) goto L_08A40CC8;
    return;
L_08A40CC8:
    ctx.set_gpr(4, ctx.gpr[2] + 0u);
    ctx.set_gpr(31, 0x08A40CD4u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0043_entry, 43u, 355u, 0x088B2154u>(ctx, &aot_mem) && ctx.pc == 0x08A40CD4u) goto L_08A40CD4;
    return;
L_08A40CD4:
    ctx.set_gpr(3, 2246u << 16u);
    rt.memory().aot_store32(ctx.gpr[3] + static_cast<std::uint32_t>(-21936), ctx.gpr[2]);
    ctx.set_gpr(31, 0x08A40CE4u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0078_entry, 78u, 216u, 0x0893CDDCu>(ctx, &aot_mem) && ctx.pc == 0x08A40CE4u) goto L_08A40CE4;
    return;
L_08A40CE4:
    ctx.set_gpr(4, rt.memory().aot_load32(ctx.gpr[2] + static_cast<std::uint32_t>(0)));
    ctx.set_gpr(31, 0x08A40CF0u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0078_entry, 78u, 199u, 0x0893CC68u>(ctx, &aot_mem) && ctx.pc == 0x08A40CF0u) goto L_08A40CF0;
    return;
L_08A40CF0:
    ctx.set_gpr(4, ctx.gpr[2] + 0u);
    ctx.set_gpr(31, 0x08A40CFCu);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0043_entry, 43u, 355u, 0x088B2154u>(ctx, &aot_mem) && ctx.pc == 0x08A40CFCu) goto L_08A40CFC;
    return;
L_08A40CFC:
    ctx.set_gpr(3, 2246u << 16u);
    rt.memory().aot_store32(ctx.gpr[3] + static_cast<std::uint32_t>(-21932), ctx.gpr[2]);
    ctx.set_gpr(31, 0x08A40D0Cu);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0078_entry, 78u, 216u, 0x0893CDDCu>(ctx, &aot_mem) && ctx.pc == 0x08A40D0Cu) goto L_08A40D0C;
    return;
L_08A40D0C:
    ctx.set_gpr(4, rt.memory().aot_load32(ctx.gpr[2] + static_cast<std::uint32_t>(0)));
    ctx.set_gpr(31, 0x08A40D18u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0078_entry, 78u, 199u, 0x0893CC68u>(ctx, &aot_mem) && ctx.pc == 0x08A40D18u) goto L_08A40D18;
    return;
L_08A40D18:
    ctx.set_gpr(4, ctx.gpr[2] + 0u);
    ctx.set_gpr(31, 0x08A40D24u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0043_entry, 43u, 355u, 0x088B2154u>(ctx, &aot_mem) && ctx.pc == 0x08A40D24u) goto L_08A40D24;
    return;
L_08A40D24:
    ctx.set_gpr(3, 2246u << 16u);
    rt.memory().aot_store32(ctx.gpr[3] + static_cast<std::uint32_t>(-21928), ctx.gpr[2]);
    ctx.set_gpr(31, 0x08A40D34u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0078_entry, 78u, 216u, 0x0893CDDCu>(ctx, &aot_mem) && ctx.pc == 0x08A40D34u) goto L_08A40D34;
    return;
L_08A40D34:
    ctx.set_gpr(4, rt.memory().aot_load32(ctx.gpr[2] + static_cast<std::uint32_t>(0)));
    ctx.set_gpr(31, 0x08A40D40u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0078_entry, 78u, 199u, 0x0893CC68u>(ctx, &aot_mem) && ctx.pc == 0x08A40D40u) goto L_08A40D40;
    return;
L_08A40D40:
    ctx.set_gpr(4, ctx.gpr[2] + 0u);
    ctx.set_gpr(31, 0x08A40D4Cu);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0043_entry, 43u, 355u, 0x088B2154u>(ctx, &aot_mem) && ctx.pc == 0x08A40D4Cu) goto L_08A40D4C;
    return;
L_08A40D4C:
    ctx.set_gpr(3, 2246u << 16u);
    rt.memory().aot_store32(ctx.gpr[3] + static_cast<std::uint32_t>(-21924), ctx.gpr[2]);
    ctx.set_gpr(31, 0x08A40D5Cu);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0078_entry, 78u, 216u, 0x0893CDDCu>(ctx, &aot_mem) && ctx.pc == 0x08A40D5Cu) goto L_08A40D5C;
    return;
L_08A40D5C:
    ctx.set_gpr(4, rt.memory().aot_load32(ctx.gpr[2] + static_cast<std::uint32_t>(0)));
    ctx.set_gpr(31, 0x08A40D68u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0078_entry, 78u, 199u, 0x0893CC68u>(ctx, &aot_mem) && ctx.pc == 0x08A40D68u) goto L_08A40D68;
    return;
L_08A40D68:
    ctx.set_gpr(4, ctx.gpr[2] + 0u);
    ctx.set_gpr(31, 0x08A40D74u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0043_entry, 43u, 170u, 0x088B1000u>(ctx, &aot_mem) && ctx.pc == 0x08A40D74u) goto L_08A40D74;
    return;
L_08A40D74:
    ctx.set_gpr(3, 2246u << 16u);
    rt.memory().aot_store32(ctx.gpr[3] + static_cast<std::uint32_t>(-21960), ctx.gpr[2]);
    ctx.set_gpr(31, 0x08A40D84u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0078_entry, 78u, 216u, 0x0893CDDCu>(ctx, &aot_mem) && ctx.pc == 0x08A40D84u) goto L_08A40D84;
    return;
L_08A40D84:
    ctx.set_gpr(4, rt.memory().aot_load32(ctx.gpr[2] + static_cast<std::uint32_t>(0)));
    ctx.set_gpr(31, 0x08A40D90u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0078_entry, 78u, 199u, 0x0893CC68u>(ctx, &aot_mem) && ctx.pc == 0x08A40D90u) goto L_08A40D90;
    return;
L_08A40D90:
    ctx.set_gpr(4, ctx.gpr[2] + 0u);
    ctx.set_gpr(31, 0x08A40D9Cu);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0043_entry, 43u, 170u, 0x088B1000u>(ctx, &aot_mem) && ctx.pc == 0x08A40D9Cu) goto L_08A40D9C;
    return;
L_08A40D9C:
    ctx.set_gpr(3, 2246u << 16u);
    rt.memory().aot_store32(ctx.gpr[3] + static_cast<std::uint32_t>(-21956), ctx.gpr[2]);
    ctx.set_gpr(31, 0x08A40DACu);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0078_entry, 78u, 216u, 0x0893CDDCu>(ctx, &aot_mem) && ctx.pc == 0x08A40DACu) goto L_08A40DAC;
    return;
L_08A40DAC:
    ctx.set_gpr(4, rt.memory().aot_load32(ctx.gpr[2] + static_cast<std::uint32_t>(0)));
    ctx.set_gpr(31, 0x08A40DB8u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0078_entry, 78u, 199u, 0x0893CC68u>(ctx, &aot_mem) && ctx.pc == 0x08A40DB8u) goto L_08A40DB8;
    return;
L_08A40DB8:
    ctx.set_gpr(4, ctx.gpr[2] + 0u);
    ctx.set_gpr(31, 0x08A40DC4u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0043_entry, 43u, 45u, 0x088B0444u>(ctx, &aot_mem) && ctx.pc == 0x08A40DC4u) goto L_08A40DC4;
    return;
L_08A40DC4:
    ctx.set_gpr(3, 2246u << 16u);
    rt.memory().aot_store32(ctx.gpr[3] + static_cast<std::uint32_t>(-22008), ctx.gpr[2]);
    ctx.set_gpr(31, 0x08A40DD4u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0078_entry, 78u, 216u, 0x0893CDDCu>(ctx, &aot_mem) && ctx.pc == 0x08A40DD4u) goto L_08A40DD4;
    return;
L_08A40DD4:
    ctx.set_gpr(4, rt.memory().aot_load32(ctx.gpr[2] + static_cast<std::uint32_t>(0)));
    ctx.set_gpr(31, 0x08A40DE0u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0078_entry, 78u, 199u, 0x0893CC68u>(ctx, &aot_mem) && ctx.pc == 0x08A40DE0u) goto L_08A40DE0;
    return;
L_08A40DE0:
    ctx.set_gpr(4, ctx.gpr[2] + 0u);
    ctx.set_gpr(31, 0x08A40DECu);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0043_entry, 43u, 45u, 0x088B0444u>(ctx, &aot_mem) && ctx.pc == 0x08A40DECu) goto L_08A40DEC;
    return;
L_08A40DEC:
    ctx.set_gpr(3, 2246u << 16u);
    rt.memory().aot_store32(ctx.gpr[3] + static_cast<std::uint32_t>(-22004), ctx.gpr[2]);
    ctx.set_gpr(31, 0x08A40DFCu);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0078_entry, 78u, 216u, 0x0893CDDCu>(ctx, &aot_mem) && ctx.pc == 0x08A40DFCu) goto L_08A40DFC;
    return;
L_08A40DFC:
    ctx.set_gpr(4, rt.memory().aot_load32(ctx.gpr[2] + static_cast<std::uint32_t>(0)));
    ctx.set_gpr(31, 0x08A40E08u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0078_entry, 78u, 199u, 0x0893CC68u>(ctx, &aot_mem) && ctx.pc == 0x08A40E08u) goto L_08A40E08;
    return;
L_08A40E08:
    ctx.set_gpr(4, ctx.gpr[2] + 0u);
    ctx.set_gpr(31, 0x08A40E14u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0043_entry, 43u, 45u, 0x088B0444u>(ctx, &aot_mem) && ctx.pc == 0x08A40E14u) goto L_08A40E14;
    return;
L_08A40E14:
    ctx.set_gpr(3, 2246u << 16u);
    rt.memory().aot_store32(ctx.gpr[3] + static_cast<std::uint32_t>(-22000), ctx.gpr[2]);
    ctx.set_gpr(31, 0x08A40E24u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0078_entry, 78u, 216u, 0x0893CDDCu>(ctx, &aot_mem) && ctx.pc == 0x08A40E24u) goto L_08A40E24;
    return;
L_08A40E24:
    ctx.set_gpr(4, rt.memory().aot_load32(ctx.gpr[2] + static_cast<std::uint32_t>(0)));
    ctx.set_gpr(31, 0x08A40E30u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0078_entry, 78u, 199u, 0x0893CC68u>(ctx, &aot_mem) && ctx.pc == 0x08A40E30u) goto L_08A40E30;
    return;
L_08A40E30:
    ctx.set_gpr(4, ctx.gpr[2] + 0u);
    ctx.set_gpr(31, 0x08A40E3Cu);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0043_entry, 43u, 45u, 0x088B0444u>(ctx, &aot_mem) && ctx.pc == 0x08A40E3Cu) goto L_08A40E3C;
    return;
L_08A40E3C:
    ctx.set_gpr(3, 2246u << 16u);
    rt.memory().aot_store32(ctx.gpr[3] + static_cast<std::uint32_t>(-21996), ctx.gpr[2]);
    ctx.set_gpr(31, 0x08A40E4Cu);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0078_entry, 78u, 216u, 0x0893CDDCu>(ctx, &aot_mem) && ctx.pc == 0x08A40E4Cu) goto L_08A40E4C;
    return;
L_08A40E4C:
    ctx.set_gpr(4, rt.memory().aot_load32(ctx.gpr[2] + static_cast<std::uint32_t>(0)));
    ctx.set_gpr(31, 0x08A40E58u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0078_entry, 78u, 199u, 0x0893CC68u>(ctx, &aot_mem) && ctx.pc == 0x08A40E58u) goto L_08A40E58;
    return;
L_08A40E58:
    ctx.set_gpr(4, ctx.gpr[2] + 0u);
    ctx.set_gpr(31, 0x08A40E64u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0043_entry, 43u, 45u, 0x088B0444u>(ctx, &aot_mem) && ctx.pc == 0x08A40E64u) goto L_08A40E64;
    return;
L_08A40E64:
    ctx.set_gpr(3, 2246u << 16u);
    rt.memory().aot_store32(ctx.gpr[3] + static_cast<std::uint32_t>(-21992), ctx.gpr[2]);
    ctx.set_gpr(31, 0x08A40E74u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0078_entry, 78u, 216u, 0x0893CDDCu>(ctx, &aot_mem) && ctx.pc == 0x08A40E74u) goto L_08A40E74;
    return;
L_08A40E74:
    ctx.set_gpr(4, rt.memory().aot_load32(ctx.gpr[2] + static_cast<std::uint32_t>(0)));
    ctx.set_gpr(31, 0x08A40E80u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0078_entry, 78u, 199u, 0x0893CC68u>(ctx, &aot_mem) && ctx.pc == 0x08A40E80u) goto L_08A40E80;
    return;
L_08A40E80:
    ctx.set_gpr(4, ctx.gpr[2] + 0u);
    ctx.set_gpr(31, 0x08A40E8Cu);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0043_entry, 43u, 45u, 0x088B0444u>(ctx, &aot_mem) && ctx.pc == 0x08A40E8Cu) goto L_08A40E8C;
    return;
L_08A40E8C:
    ctx.set_gpr(3, 2246u << 16u);
    rt.memory().aot_store32(ctx.gpr[3] + static_cast<std::uint32_t>(-21988), ctx.gpr[2]);
    ctx.set_gpr(31, 0x08A40E9Cu);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0078_entry, 78u, 216u, 0x0893CDDCu>(ctx, &aot_mem) && ctx.pc == 0x08A40E9Cu) goto L_08A40E9C;
    return;
L_08A40E9C:
    ctx.set_gpr(4, rt.memory().aot_load32(ctx.gpr[2] + static_cast<std::uint32_t>(0)));
    ctx.set_gpr(31, 0x08A40EA8u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0078_entry, 78u, 199u, 0x0893CC68u>(ctx, &aot_mem) && ctx.pc == 0x08A40EA8u) goto L_08A40EA8;
    return;
L_08A40EA8:
    ctx.set_gpr(4, ctx.gpr[2] + 0u);
    ctx.set_gpr(31, 0x08A40EB4u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0043_entry, 43u, 45u, 0x088B0444u>(ctx, &aot_mem) && ctx.pc == 0x08A40EB4u) goto L_08A40EB4;
    return;
L_08A40EB4:
    ctx.set_gpr(3, 2246u << 16u);
    rt.memory().aot_store32(ctx.gpr[3] + static_cast<std::uint32_t>(-21984), ctx.gpr[2]);
    ctx.set_gpr(31, 0x08A40EC4u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0078_entry, 78u, 216u, 0x0893CDDCu>(ctx, &aot_mem) && ctx.pc == 0x08A40EC4u) goto L_08A40EC4;
    return;
L_08A40EC4:
    ctx.set_gpr(4, rt.memory().aot_load32(ctx.gpr[2] + static_cast<std::uint32_t>(0)));
    ctx.set_gpr(31, 0x08A40ED0u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0078_entry, 78u, 199u, 0x0893CC68u>(ctx, &aot_mem) && ctx.pc == 0x08A40ED0u) goto L_08A40ED0;
    return;
L_08A40ED0:
    ctx.set_gpr(4, ctx.gpr[2] + 0u);
    ctx.set_gpr(31, 0x08A40EDCu);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0043_entry, 43u, 45u, 0x088B0444u>(ctx, &aot_mem) && ctx.pc == 0x08A40EDCu) goto L_08A40EDC;
    return;
L_08A40EDC:
    ctx.set_gpr(3, 2246u << 16u);
    rt.memory().aot_store32(ctx.gpr[3] + static_cast<std::uint32_t>(-21980), ctx.gpr[2]);
    ctx.set_gpr(31, 0x08A40EECu);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0078_entry, 78u, 216u, 0x0893CDDCu>(ctx, &aot_mem) && ctx.pc == 0x08A40EECu) goto L_08A40EEC;
    return;
L_08A40EEC:
    ctx.set_gpr(4, rt.memory().aot_load32(ctx.gpr[2] + static_cast<std::uint32_t>(0)));
    ctx.set_gpr(31, 0x08A40EF8u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0078_entry, 78u, 199u, 0x0893CC68u>(ctx, &aot_mem) && ctx.pc == 0x08A40EF8u) goto L_08A40EF8;
    return;
L_08A40EF8:
    ctx.set_gpr(4, ctx.gpr[2] + 0u);
    ctx.set_gpr(31, 0x08A40F04u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0043_entry, 43u, 298u, 0x088B1C28u>(ctx, &aot_mem) && ctx.pc == 0x08A40F04u) goto L_08A40F04;
    return;
L_08A40F04:
    ctx.set_gpr(3, 2246u << 16u);
    rt.memory().aot_store32(ctx.gpr[3] + static_cast<std::uint32_t>(-21976), ctx.gpr[2]);
    ctx.set_gpr(31, 0x08A40F14u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0078_entry, 78u, 216u, 0x0893CDDCu>(ctx, &aot_mem) && ctx.pc == 0x08A40F14u) goto L_08A40F14;
    return;
L_08A40F14:
    ctx.set_gpr(4, rt.memory().aot_load32(ctx.gpr[2] + static_cast<std::uint32_t>(0)));
    ctx.set_gpr(31, 0x08A40F20u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0078_entry, 78u, 199u, 0x0893CC68u>(ctx, &aot_mem) && ctx.pc == 0x08A40F20u) goto L_08A40F20;
    return;
L_08A40F20:
    ctx.set_gpr(4, ctx.gpr[2] + 0u);
    ctx.set_gpr(31, 0x08A40F2Cu);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0043_entry, 43u, 298u, 0x088B1C28u>(ctx, &aot_mem) && ctx.pc == 0x08A40F2Cu) goto L_08A40F2C;
    return;
L_08A40F2C:
    ctx.set_gpr(3, 2246u << 16u);
    rt.memory().aot_store32(ctx.gpr[3] + static_cast<std::uint32_t>(-21972), ctx.gpr[2]);
    ctx.set_gpr(31, 0x08A40F3Cu);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0078_entry, 78u, 216u, 0x0893CDDCu>(ctx, &aot_mem) && ctx.pc == 0x08A40F3Cu) goto L_08A40F3C;
    return;
L_08A40F3C:
    ctx.set_gpr(4, rt.memory().aot_load32(ctx.gpr[2] + static_cast<std::uint32_t>(0)));
    ctx.set_gpr(31, 0x08A40F48u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0078_entry, 78u, 199u, 0x0893CC68u>(ctx, &aot_mem) && ctx.pc == 0x08A40F48u) goto L_08A40F48;
    return;
L_08A40F48:
    ctx.set_gpr(4, ctx.gpr[2] + 0u);
    ctx.set_gpr(31, 0x08A40F54u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0043_entry, 43u, 298u, 0x088B1C28u>(ctx, &aot_mem) && ctx.pc == 0x08A40F54u) goto L_08A40F54;
    return;
L_08A40F54:
    ctx.set_gpr(3, 2246u << 16u);
    rt.memory().aot_store32(ctx.gpr[3] + static_cast<std::uint32_t>(-21968), ctx.gpr[2]);
    ctx.set_gpr(31, 0x08A40F64u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0078_entry, 78u, 216u, 0x0893CDDCu>(ctx, &aot_mem) && ctx.pc == 0x08A40F64u) goto L_08A40F64;
    return;
L_08A40F64:
    ctx.set_gpr(4, rt.memory().aot_load32(ctx.gpr[2] + static_cast<std::uint32_t>(0)));
    ctx.set_gpr(31, 0x08A40F70u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0078_entry, 78u, 199u, 0x0893CC68u>(ctx, &aot_mem) && ctx.pc == 0x08A40F70u) goto L_08A40F70;
    return;
L_08A40F70:
    ctx.set_gpr(4, ctx.gpr[2] + 0u);
    ctx.set_gpr(31, 0x08A40F7Cu);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0043_entry, 43u, 298u, 0x088B1C28u>(ctx, &aot_mem) && ctx.pc == 0x08A40F7Cu) goto L_08A40F7C;
    return;
L_08A40F7C:
    ctx.set_gpr(3, 2246u << 16u);
    rt.memory().aot_store32(ctx.gpr[3] + static_cast<std::uint32_t>(-21964), ctx.gpr[2]);
    ctx.set_gpr(31, 0x08A40F8Cu);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0078_entry, 78u, 216u, 0x0893CDDCu>(ctx, &aot_mem) && ctx.pc == 0x08A40F8Cu) goto L_08A40F8C;
    return;
L_08A40F8C:
    ctx.set_gpr(4, rt.memory().aot_load32(ctx.gpr[2] + static_cast<std::uint32_t>(0)));
    ctx.set_gpr(31, 0x08A40F98u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0078_entry, 78u, 199u, 0x0893CC68u>(ctx, &aot_mem) && ctx.pc == 0x08A40F98u) goto L_08A40F98;
    return;
L_08A40F98:
    ctx.set_gpr(4, ctx.gpr[2] + 0u);
    ctx.set_gpr(31, 0x08A40FA4u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0133_entry, 133u, 418u, 0x08A1A500u>(ctx, &aot_mem) && ctx.pc == 0x08A40FA4u) goto L_08A40FA4;
    return;
L_08A40FA4:
    ctx.set_gpr(3, 2246u << 16u);
    rt.memory().aot_store32(ctx.gpr[3] + static_cast<std::uint32_t>(-22016), ctx.gpr[2]);
    ctx.set_gpr(31, 0x08A40FB4u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0078_entry, 78u, 216u, 0x0893CDDCu>(ctx, &aot_mem) && ctx.pc == 0x08A40FB4u) goto L_08A40FB4;
    return;
L_08A40FB4:
    ctx.set_gpr(4, rt.memory().aot_load32(ctx.gpr[2] + static_cast<std::uint32_t>(0)));
    ctx.set_gpr(31, 0x08A40FC0u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0078_entry, 78u, 199u, 0x0893CC68u>(ctx, &aot_mem) && ctx.pc == 0x08A40FC0u) goto L_08A40FC0;
    return;
L_08A40FC0:
    ctx.set_gpr(4, ctx.gpr[2] + 0u);
    ctx.set_gpr(31, 0x08A40FCCu);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0133_entry, 133u, 418u, 0x08A1A500u>(ctx, &aot_mem) && ctx.pc == 0x08A40FCCu) goto L_08A40FCC;
    return;
L_08A40FCC:
    ctx.set_gpr(3, 2246u << 16u);
    rt.memory().aot_store32(ctx.gpr[3] + static_cast<std::uint32_t>(-22012), ctx.gpr[2]);
    ctx.set_gpr(31, 0x08A40FDCu);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0078_entry, 78u, 216u, 0x0893CDDCu>(ctx, &aot_mem) && ctx.pc == 0x08A40FDCu) goto L_08A40FDC;
    return;
L_08A40FDC:
    ctx.set_gpr(4, rt.memory().aot_load32(ctx.gpr[2] + static_cast<std::uint32_t>(0)));
    ctx.set_gpr(31, 0x08A40FE8u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0078_entry, 78u, 199u, 0x0893CC68u>(ctx, &aot_mem) && ctx.pc == 0x08A40FE8u) goto L_08A40FE8;
    return;
L_08A40FE8:
    ctx.set_gpr(4, ctx.gpr[2] + 0u);
    ctx.set_gpr(31, 0x08A40FF4u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0044_entry, 44u, 492u, 0x088B6ED8u>(ctx, &aot_mem) && ctx.pc == 0x08A40FF4u) goto L_08A40FF4;
    return;
L_08A40FF4:
    ctx.set_gpr(3, 2246u << 16u);
    rt.memory().aot_store32(ctx.gpr[3] + static_cast<std::uint32_t>(-21920), ctx.gpr[2]);
    ctx.set_gpr(31, 0x08A41004u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0078_entry, 78u, 216u, 0x0893CDDCu>(ctx, &aot_mem) && ctx.pc == 0x08A41004u) goto L_08A41004;
    return;
L_08A41004:
    ctx.set_gpr(4, rt.memory().aot_load32(ctx.gpr[2] + static_cast<std::uint32_t>(0)));
    ctx.set_gpr(31, 0x08A41010u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0078_entry, 78u, 199u, 0x0893CC68u>(ctx, &aot_mem) && ctx.pc == 0x08A41010u) goto L_08A41010;
    return;
L_08A41010:
    ctx.set_gpr(4, ctx.gpr[2] + 0u);
    ctx.set_gpr(31, 0x08A4101Cu);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0044_entry, 44u, 492u, 0x088B6ED8u>(ctx, &aot_mem) && ctx.pc == 0x08A4101Cu) goto L_08A4101C;
    return;
L_08A4101C:
    ctx.set_gpr(3, 2246u << 16u);
    rt.memory().aot_store32(ctx.gpr[3] + static_cast<std::uint32_t>(-21916), ctx.gpr[2]);
    ctx.set_gpr(31, 0x08A4102Cu);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0078_entry, 78u, 216u, 0x0893CDDCu>(ctx, &aot_mem) && ctx.pc == 0x08A4102Cu) goto L_08A4102C;
    return;
L_08A4102C:
    ctx.set_gpr(4, rt.memory().aot_load32(ctx.gpr[2] + static_cast<std::uint32_t>(0)));
    ctx.set_gpr(31, 0x08A41038u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0078_entry, 78u, 199u, 0x0893CC68u>(ctx, &aot_mem) && ctx.pc == 0x08A41038u) goto L_08A41038;
    return;
L_08A41038:
    ctx.set_gpr(4, ctx.gpr[2] + 0u);
    ctx.set_gpr(31, 0x08A41044u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0044_entry, 44u, 492u, 0x088B6ED8u>(ctx, &aot_mem) && ctx.pc == 0x08A41044u) goto L_08A41044;
    return;
L_08A41044:
    ctx.set_gpr(3, 2246u << 16u);
    rt.memory().aot_store32(ctx.gpr[3] + static_cast<std::uint32_t>(-21912), ctx.gpr[2]);
    ctx.set_gpr(31, 0x08A41054u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0078_entry, 78u, 216u, 0x0893CDDCu>(ctx, &aot_mem) && ctx.pc == 0x08A41054u) goto L_08A41054;
    return;
L_08A41054:
    ctx.set_gpr(4, rt.memory().aot_load32(ctx.gpr[2] + static_cast<std::uint32_t>(0)));
    ctx.set_gpr(31, 0x08A41060u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0078_entry, 78u, 199u, 0x0893CC68u>(ctx, &aot_mem) && ctx.pc == 0x08A41060u) goto L_08A41060;
    return;
L_08A41060:
    ctx.set_gpr(4, ctx.gpr[2] + 0u);
    ctx.set_gpr(31, 0x08A4106Cu);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0046_entry, 46u, 576u, 0x088BF470u>(ctx, &aot_mem) && ctx.pc == 0x08A4106Cu) goto L_08A4106C;
    return;
L_08A4106C:
    ctx.set_gpr(3, 2246u << 16u);
    rt.memory().aot_store32(ctx.gpr[3] + static_cast<std::uint32_t>(-21908), ctx.gpr[2]);
    ctx.set_gpr(31, 0x08A4107Cu);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0078_entry, 78u, 216u, 0x0893CDDCu>(ctx, &aot_mem) && ctx.pc == 0x08A4107Cu) goto L_08A4107C;
    return;
L_08A4107C:
    ctx.set_gpr(4, rt.memory().aot_load32(ctx.gpr[2] + static_cast<std::uint32_t>(0)));
    ctx.set_gpr(31, 0x08A41088u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0078_entry, 78u, 199u, 0x0893CC68u>(ctx, &aot_mem) && ctx.pc == 0x08A41088u) goto L_08A41088;
    return;
L_08A41088:
    ctx.set_gpr(4, ctx.gpr[2] + 0u);
    ctx.set_gpr(31, 0x08A41094u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0046_entry, 46u, 576u, 0x088BF470u>(ctx, &aot_mem) && ctx.pc == 0x08A41094u) goto L_08A41094;
    return;
L_08A41094:
    ctx.set_gpr(3, 2246u << 16u);
    rt.memory().aot_store32(ctx.gpr[3] + static_cast<std::uint32_t>(-21904), ctx.gpr[2]);
    ctx.set_gpr(31, 0x08A410A4u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0078_entry, 78u, 216u, 0x0893CDDCu>(ctx, &aot_mem) && ctx.pc == 0x08A410A4u) goto L_08A410A4;
    return;
L_08A410A4:
    ctx.set_gpr(4, rt.memory().aot_load32(ctx.gpr[2] + static_cast<std::uint32_t>(0)));
    ctx.set_gpr(31, 0x08A410B0u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0078_entry, 78u, 199u, 0x0893CC68u>(ctx, &aot_mem) && ctx.pc == 0x08A410B0u) goto L_08A410B0;
    return;
L_08A410B0:
    ctx.set_gpr(4, ctx.gpr[2] + 0u);
    ctx.set_gpr(31, 0x08A410BCu);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0047_entry, 47u, 618u, 0x088C368Cu>(ctx, &aot_mem) && ctx.pc == 0x08A410BCu) goto L_08A410BC;
    return;
L_08A410BC:
    ctx.set_gpr(3, 2246u << 16u);
    rt.memory().aot_store32(ctx.gpr[3] + static_cast<std::uint32_t>(-21900), ctx.gpr[2]);
    ctx.set_gpr(31, 0x08A410CCu);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0078_entry, 78u, 216u, 0x0893CDDCu>(ctx, &aot_mem) && ctx.pc == 0x08A410CCu) goto L_08A410CC;
    return;
L_08A410CC:
    ctx.set_gpr(4, rt.memory().aot_load32(ctx.gpr[2] + static_cast<std::uint32_t>(0)));
    ctx.set_gpr(31, 0x08A410D8u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0078_entry, 78u, 199u, 0x0893CC68u>(ctx, &aot_mem) && ctx.pc == 0x08A410D8u) goto L_08A410D8;
    return;
L_08A410D8:
    ctx.set_gpr(4, ctx.gpr[2] + 0u);
    ctx.set_gpr(31, 0x08A410E4u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0045_entry, 45u, 355u, 0x088BA060u>(ctx, &aot_mem) && ctx.pc == 0x08A410E4u) goto L_08A410E4;
    return;
L_08A410E4:
    ctx.set_gpr(3, 2246u << 16u);
    rt.memory().aot_store32(ctx.gpr[3] + static_cast<std::uint32_t>(-21896), ctx.gpr[2]);
    goto L_08A410EC;
L_08A410EC:
    ctx.set_gpr(31, rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(12)));
    ctx.set_gpr(16, rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(8)));
    ctx.set_gpr(29, ctx.gpr[29] + static_cast<std::uint32_t>(16));
    jump_target = ctx.gpr[31];
    // nop
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_08A41100:
    ctx.set_gpr(2, 2246u << 16u);
    ctx.set_gpr(2, rt.memory().aot_load32(ctx.gpr[2] + static_cast<std::uint32_t>(-24016)));
    jump_target = ctx.gpr[31];
    // nop
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_08A41110:
    ctx.set_gpr(29, ctx.gpr[29] + static_cast<std::uint32_t>(-144));
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(12), ctx.gpr[31]);
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(8), ctx.gpr[16]);
    ctx.set_gpr(16, ctx.gpr[4] + 0u);
    ctx.fpr[2] = std::bit_cast<float>(rt.memory().aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(44)));
    ctx.set_gpr(2, 49024u << 16u);
    ctx.fpr[1] = std::bit_cast<float>(ctx.gpr[2]);
    ctx.set_fpu_condition((!(std::isnan(ctx.fpr[1]) || std::isnan(ctx.fpr[2])) && ctx.fpr[1] == ctx.fpr[2]));
    // nop
    { const bool branch_taken = !ctx.fpu_condition();
    // nop
      if (branch_taken) {
          goto L_08A41154;
      }
      goto L_08A4113C;
    }
L_08A4113C:
    ctx.fpr[1] = std::bit_cast<float>(rt.memory().aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(48)));
    ctx.fpr[0] = std::bit_cast<float>(rt.memory().aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(60)));
    { const float fs = ctx.fpr[1]; const float ft = ctx.fpr[0]; if ((std::isinf(fs) && ft == 0.0f) || (std::isinf(ft) && fs == 0.0f)) ctx.set_fpr_bits(0, 0x7FC00000u); else ctx.fpr[0] = fs * ft; }
    rt.memory().aot_store32(ctx.gpr[16] + static_cast<std::uint32_t>(44), std::bit_cast<std::uint32_t>(ctx.fpr[0]));
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_08A41174;
      }
      goto L_08A41154;
    }
L_08A41154:
    ctx.fpr[0] = std::bit_cast<float>(rt.memory().aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(48)));
    ctx.set_fpu_condition((!(std::isnan(ctx.fpr[1]) || std::isnan(ctx.fpr[0])) && ctx.fpr[1] == ctx.fpr[0]));
    // nop
    { const bool branch_taken = !ctx.fpu_condition();
    // nop
      if (branch_taken) {
          goto L_08A41174;
      }
      goto L_08A41168;
    }
L_08A41168:
    ctx.fpr[0] = std::bit_cast<float>(rt.memory().aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(60)));
    ctx.fpr[0] = ctx.fpr[2] / ctx.fpr[0];
    rt.memory().aot_store32(ctx.gpr[16] + static_cast<std::uint32_t>(48), std::bit_cast<std::uint32_t>(ctx.fpr[0]));
    goto L_08A41174;
L_08A41174:
    ctx.set_gpr(4, ctx.gpr[29] + static_cast<std::uint32_t>(80));
    ctx.set_gpr(31, 0x08A41180u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0126_entry, 126u, 723u, 0x089FF868u>(ctx, &aot_mem) && ctx.pc == 0x08A41180u) goto L_08A41180;
    return;
L_08A41180:
    ctx.fpr[2] = std::bit_cast<float>(rt.memory().aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(40)));
    ctx.fpr[0] = std::bit_cast<float>(rt.memory().aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(44)));
    ctx.fpr[1] = std::bit_cast<float>(rt.memory().aot_load32(ctx.gpr[28] + static_cast<std::uint32_t>(-32268)));
    { const float fs = ctx.fpr[1]; const float ft = ctx.fpr[0]; if ((std::isinf(fs) && ft == 0.0f) || (std::isinf(ft) && fs == 0.0f)) ctx.set_fpr_bits(12, 0x7FC00000u); else ctx.fpr[12] = fs * ft; }
    ctx.fpr[0] = std::bit_cast<float>(rt.memory().aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(48)));
    { const float fs = ctx.fpr[1]; const float ft = ctx.fpr[0]; if ((std::isinf(fs) && ft == 0.0f) || (std::isinf(ft) && fs == 0.0f)) ctx.set_fpr_bits(13, 0x7FC00000u); else ctx.fpr[13] = fs * ft; }
    ctx.fpr[1] = std::bit_cast<float>(rt.memory().aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(44)));
    ctx.fpr[0] = std::bit_cast<float>(rt.memory().aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(48)));
    ctx.fpr[14] = ctx.fpr[1] / ctx.fpr[0];
    ctx.fpr[0] = std::bit_cast<float>(rt.memory().aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(52)));
    ctx.fpr[1] = ctx.fpr[2] - ctx.fpr[0];
    ctx.fpr[0] = std::bit_cast<float>(rt.memory().aot_load32(ctx.gpr[28] + static_cast<std::uint32_t>(-32264)));
    { const float fs = ctx.fpr[0]; const float ft = ctx.fpr[1]; if ((std::isinf(fs) && ft == 0.0f) || (std::isinf(ft) && fs == 0.0f)) ctx.set_fpr_bits(1, 0x7FC00000u); else ctx.fpr[1] = fs * ft; }
    ctx.fpr[0] = std::bit_cast<float>(rt.memory().aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(36)));
    { const float fs = ctx.fpr[0]; const float ft = ctx.fpr[1]; if ((std::isinf(fs) && ft == 0.0f) || (std::isinf(ft) && fs == 0.0f)) ctx.set_fpr_bits(0, 0x7FC00000u); else ctx.fpr[0] = fs * ft; }
    ctx.fpr[16] = ctx.fpr[2] + ctx.fpr[0];
    ctx.set_gpr(4, ctx.gpr[29] + static_cast<std::uint32_t>(80));
    ctx.fpr[15] = std::bit_cast<float>(rt.memory().aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(52)));
    ctx.set_gpr(31, 0x08A411D0u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0127_entry, 127u, 71u, 0x08A00E24u>(ctx, &aot_mem) && ctx.pc == 0x08A411D0u) goto L_08A411D0;
    return;
L_08A411D0:
    ctx.set_gpr(2, 2246u << 16u);
    ctx.set_gpr(4, rt.memory().aot_load32(ctx.gpr[2] + static_cast<std::uint32_t>(-21916)));
    ctx.set_gpr(5, ctx.gpr[29] + static_cast<std::uint32_t>(80));
    ctx.set_gpr(25, rt.memory().aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(0)));
    ctx.set_gpr(25, rt.memory().aot_load32(ctx.gpr[25] + static_cast<std::uint32_t>(136)));
    jump_target = ctx.gpr[25];
    ctx.set_gpr(31, 0x08A411ECu);
    // nop
    ctx.pc = jump_target;
    if (rt.invoke_chained_call(ctx, &aot_mem) && ctx.pc == 0x08A411ECu) goto L_08A411EC;
    return;
L_08A411EC:
    ctx.set_gpr(4, ctx.gpr[29] + static_cast<std::uint32_t>(16));
    ctx.set_gpr(31, 0x08A411F8u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0126_entry, 126u, 723u, 0x089FF868u>(ctx, &aot_mem) && ctx.pc == 0x08A411F8u) goto L_08A411F8;
    return;
L_08A411F8:
    ctx.fpr[0] = std::bit_cast<float>(rt.memory().aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(44)));
    ctx.fpr[1] = std::bit_cast<float>(rt.memory().aot_load32(ctx.gpr[28] + static_cast<std::uint32_t>(-32268)));
    { const float fs = ctx.fpr[1]; const float ft = ctx.fpr[0]; if ((std::isinf(fs) && ft == 0.0f) || (std::isinf(ft) && fs == 0.0f)) ctx.set_fpr_bits(12, 0x7FC00000u); else ctx.fpr[12] = fs * ft; }
    ctx.fpr[0] = std::bit_cast<float>(rt.memory().aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(48)));
    { const float fs = ctx.fpr[1]; const float ft = ctx.fpr[0]; if ((std::isinf(fs) && ft == 0.0f) || (std::isinf(ft) && fs == 0.0f)) ctx.set_fpr_bits(13, 0x7FC00000u); else ctx.fpr[13] = fs * ft; }
    ctx.fpr[1] = std::bit_cast<float>(rt.memory().aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(44)));
    ctx.fpr[0] = std::bit_cast<float>(rt.memory().aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(48)));
    ctx.fpr[14] = ctx.fpr[1] / ctx.fpr[0];
    ctx.set_gpr(4, ctx.gpr[29] + static_cast<std::uint32_t>(16));
    ctx.fpr[15] = std::bit_cast<float>(rt.memory().aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(40)));
    ctx.fpr[16] = std::bit_cast<float>(rt.memory().aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(56)));
    ctx.set_gpr(31, 0x08A4122Cu);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0127_entry, 127u, 71u, 0x08A00E24u>(ctx, &aot_mem) && ctx.pc == 0x08A4122Cu) goto L_08A4122C;
    return;
L_08A4122C:
    ctx.set_gpr(2, 2246u << 16u);
    ctx.set_gpr(4, rt.memory().aot_load32(ctx.gpr[2] + static_cast<std::uint32_t>(-21912)));
    ctx.set_gpr(5, ctx.gpr[29] + static_cast<std::uint32_t>(16));
    ctx.set_gpr(25, rt.memory().aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(0)));
    ctx.set_gpr(25, rt.memory().aot_load32(ctx.gpr[25] + static_cast<std::uint32_t>(136)));
    jump_target = ctx.gpr[25];
    ctx.set_gpr(31, 0x08A41248u);
    // nop
    ctx.pc = jump_target;
    if (rt.invoke_chained_call(ctx, &aot_mem) && ctx.pc == 0x08A41248u) goto L_08A41248;
    return;
L_08A41248:
    ctx.set_gpr(31, rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(12)));
    ctx.set_gpr(16, rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(8)));
    ctx.set_gpr(29, ctx.gpr[29] + static_cast<std::uint32_t>(144));
    jump_target = ctx.gpr[31];
    // nop
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_08A4125C:
    ctx.set_gpr(2, 0u + 0u);
    jump_target = ctx.gpr[31];
    // nop
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_08A41268:
    ctx.set_gpr(29, ctx.gpr[29] + static_cast<std::uint32_t>(-64));
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(44), ctx.gpr[31]);
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(40), ctx.gpr[20]);
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(36), ctx.gpr[19]);
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(32), ctx.gpr[18]);
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(28), ctx.gpr[17]);
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(24), ctx.gpr[16]);
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(16), std::bit_cast<std::uint32_t>(ctx.fpr[20]));
    ctx.set_gpr(19, ctx.gpr[4] + 0u);
    ctx.set_gpr(18, ctx.gpr[5] + 0u);
    ctx.set_gpr(3, rt.memory().aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(28)));
    { const bool branch_taken = ctx.gpr[3] == 0u;
    // nop
      if (branch_taken) {
          goto L_08A412A8;
      }
      goto L_08A4129C;
    }
L_08A4129C:
    ctx.set_gpr(3, rt.memory().aot_load32(ctx.gpr[3] + static_cast<std::uint32_t>(8)));
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_08A412AC;
      }
      goto L_08A412A8;
    }
L_08A412A8:
    ctx.set_gpr(3, 0u + 0u);
    goto L_08A412AC;
L_08A412AC:
    { const bool branch_taken = ctx.gpr[3] == 0u;
    // nop
      if (branch_taken) {
          goto L_08A41764;
      }
      goto L_08A412B4;
    }
L_08A412B4:
    ctx.set_gpr(2, rt.memory().aot_load8(ctx.gpr[19] + static_cast<std::uint32_t>(32)));
    { const bool branch_taken = ctx.gpr[2] == 0u;
    // nop
      if (branch_taken) {
          goto L_08A41734;
      }
      goto L_08A412C0;
    }
L_08A412C0:
    ctx.fpr[1] = std::bit_cast<float>(rt.memory().aot_load32(ctx.gpr[19] + static_cast<std::uint32_t>(36)));
    ctx.set_gpr(2, 16256u << 16u);
    ctx.fpr[0] = std::bit_cast<float>(ctx.gpr[2]);
    ctx.set_fpu_condition(((std::isnan(ctx.fpr[1]) || std::isnan(ctx.fpr[0])) || ctx.fpr[1] <= ctx.fpr[0]));
    // nop
    { const bool branch_taken = ctx.fpu_condition();
    // nop
      if (branch_taken) {
          goto L_08A41734;
      }
      goto L_08A412DC;
    }
L_08A412DC:
    ctx.set_gpr(17, rt.memory().aot_load32(ctx.gpr[18] + static_cast<std::uint32_t>(60)));
    ctx.set_gpr(2, rt.memory().aot_load8(ctx.gpr[28] + static_cast<std::uint32_t>(-32600)));
    { const bool branch_taken = ctx.gpr[2] == 0u;
    // nop
      if (branch_taken) {
          goto L_08A41320;
      }
      goto L_08A412EC;
    }
L_08A412EC:
    ctx.set_gpr(4, ctx.gpr[19] + 0u);
    ctx.set_gpr(5, rt.memory().aot_load32(ctx.gpr[18] + static_cast<std::uint32_t>(32)));
    ctx.set_gpr(31, 0x08A412FCu);
    // nop
    goto L_08A4125C;
L_08A412FC:
    ctx.set_gpr(3, ctx.gpr[2] & 255u);
    ctx.set_gpr(2, 0u + static_cast<std::uint32_t>(1));
    { const bool branch_taken = ctx.gpr[3] != ctx.gpr[2];
    // nop
      if (branch_taken) {
          goto L_08A41318;
      }
      goto L_08A4130C;
    }
L_08A4130C:
    rt.memory().aot_store8(ctx.gpr[28] + static_cast<std::uint32_t>(-32153), static_cast<std::uint8_t>(ctx.gpr[2]));
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_08A4131C;
      }
      goto L_08A41318;
    }
L_08A41318:
    rt.memory().aot_store8(ctx.gpr[28] + static_cast<std::uint32_t>(-32153), static_cast<std::uint8_t>(0u));
    goto L_08A4131C;
L_08A4131C:
    rt.memory().aot_store8(ctx.gpr[28] + static_cast<std::uint32_t>(-32600), static_cast<std::uint8_t>(0u));
    goto L_08A41320;
L_08A41320:
    ctx.set_gpr(2, rt.memory().aot_load8(ctx.gpr[28] + static_cast<std::uint32_t>(-32153)));
    { const bool branch_taken = ctx.gpr[2] == 0u;
    // nop
      if (branch_taken) {
          goto L_08A41734;
      }
      goto L_08A4132C;
    }
L_08A4132C:
    ctx.set_gpr(16, rt.memory().aot_load32(ctx.gpr[18] + static_cast<std::uint32_t>(52)));
    ctx.set_gpr(2, rt.memory().aot_load8(ctx.gpr[19] + static_cast<std::uint32_t>(64)));
    { const bool branch_taken = ctx.gpr[2] == 0u;
    // nop
      if (branch_taken) {
          goto L_08A4134C;
      }
      goto L_08A4133C;
    }
L_08A4133C:
    ctx.set_gpr(4, ctx.gpr[19] + 0u);
    ctx.set_gpr(31, 0x08A41348u);
    // nop
    goto L_08A41110;
L_08A41348:
    rt.memory().aot_store8(ctx.gpr[19] + static_cast<std::uint32_t>(64), static_cast<std::uint8_t>(0u));
    goto L_08A4134C;
L_08A4134C:
    ctx.set_gpr(4, ctx.gpr[17] + 0u);
    ctx.set_gpr(5, ctx.gpr[29] + static_cast<std::uint32_t>(48));
    ctx.set_gpr(25, rt.memory().aot_load32(ctx.gpr[17] + static_cast<std::uint32_t>(0)));
    ctx.set_gpr(25, rt.memory().aot_load32(ctx.gpr[25] + static_cast<std::uint32_t>(740)));
    jump_target = ctx.gpr[25];
    ctx.set_gpr(31, 0x08A41364u);
    // nop
    ctx.pc = jump_target;
    if (rt.invoke_chained_call(ctx, &aot_mem) && ctx.pc == 0x08A41364u) goto L_08A41364;
    return;
L_08A41364:
    ctx.set_gpr(4, ctx.gpr[17] + 0u);
    ctx.set_gpr(25, rt.memory().aot_load32(ctx.gpr[17] + static_cast<std::uint32_t>(0)));
    ctx.set_gpr(25, rt.memory().aot_load32(ctx.gpr[25] + static_cast<std::uint32_t>(752)));
    jump_target = ctx.gpr[25];
    ctx.set_gpr(31, 0x08A41378u);
    // nop
    ctx.pc = jump_target;
    if (rt.invoke_chained_call(ctx, &aot_mem) && ctx.pc == 0x08A41378u) goto L_08A41378;
    return;
L_08A41378:
    ctx.set_fpr_bits(20, ctx.fpr_bits(0));
    ctx.set_gpr(2, 2246u << 16u);
    ctx.set_gpr(20, rt.memory().aot_load32(ctx.gpr[2] + static_cast<std::uint32_t>(-22044)));
    ctx.fpr[0] = std::bit_cast<float>(rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(48)));
    rt.memory().aot_store32(ctx.gpr[20] + static_cast<std::uint32_t>(16), std::bit_cast<std::uint32_t>(ctx.fpr[0]));
    ctx.fpr[0] = std::bit_cast<float>(rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(52)));
    rt.memory().aot_store32(ctx.gpr[20] + static_cast<std::uint32_t>(20), std::bit_cast<std::uint32_t>(ctx.fpr[0]));
    ctx.fpr[0] = std::bit_cast<float>(rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(56)));
    rt.memory().aot_store32(ctx.gpr[20] + static_cast<std::uint32_t>(24), std::bit_cast<std::uint32_t>(ctx.fpr[0]));
    ctx.fpr[0] = std::bit_cast<float>(rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(60)));
    rt.memory().aot_store32(ctx.gpr[20] + static_cast<std::uint32_t>(28), std::bit_cast<std::uint32_t>(ctx.fpr[0]));
    ctx.set_gpr(4, ctx.gpr[29] + static_cast<std::uint32_t>(48));
    ctx.set_gpr(5, 0u + static_cast<std::uint32_t>(1));
    ctx.set_gpr(31, 0x08A413B4u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0127_entry, 127u, 283u, 0x08A03440u>(ctx, &aot_mem) && ctx.pc == 0x08A413B4u) goto L_08A413B4;
    return;
L_08A413B4:
    rt.memory().aot_store32(ctx.gpr[20] + static_cast<std::uint32_t>(60), ctx.gpr[2]);
    ctx.set_gpr(2, 2246u << 16u);
    ctx.set_gpr(20, rt.memory().aot_load32(ctx.gpr[2] + static_cast<std::uint32_t>(-22044)));
    ctx.set_fpr_bits(12, ctx.fpr_bits(20));
    ctx.set_gpr(31, 0x08A413CCu);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0006_entry, 6u, 675u, 0x0881EBD0u>(ctx, &aot_mem) && ctx.pc == 0x08A413CCu) goto L_08A413CC;
    return;
L_08A413CC:
    rt.memory().aot_store32(ctx.gpr[20] + static_cast<std::uint32_t>(48), ctx.gpr[2]);
    rt.memory().aot_store32(ctx.gpr[20] + static_cast<std::uint32_t>(52), ctx.gpr[3]);
    rt.memory().aot_store32(ctx.gpr[20] + static_cast<std::uint32_t>(64), std::bit_cast<std::uint32_t>(ctx.fpr[20]));
    ctx.set_gpr(4, rt.memory().aot_load32(ctx.gpr[18] + static_cast<std::uint32_t>(68)));
    ctx.set_gpr(5, 0u + 0u);
    ctx.set_gpr(6, 0u + 0u);
    ctx.set_gpr(31, 0x08A413ECu);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0151_entry, 151u, 505u, 0x08A627F8u>(ctx, &aot_mem) && ctx.pc == 0x08A413ECu) goto L_08A413EC;
    return;
L_08A413EC:
    ctx.set_gpr(4, ctx.gpr[16] + 0u);
    ctx.set_gpr(2, 2246u << 16u);
    ctx.set_gpr(5, rt.memory().aot_load32(ctx.gpr[2] + static_cast<std::uint32_t>(-22036)));
    ctx.set_gpr(31, 0x08A41400u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0138_entry, 138u, 605u, 0x08A2EC74u>(ctx, &aot_mem) && ctx.pc == 0x08A41400u) goto L_08A41400;
    return;
L_08A41400:
    ctx.set_gpr(4, ctx.gpr[16] + 0u);
    ctx.set_gpr(2, 2246u << 16u);
    ctx.set_gpr(5, rt.memory().aot_load32(ctx.gpr[2] + static_cast<std::uint32_t>(-22024)));
    ctx.set_gpr(31, 0x08A41414u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0138_entry, 138u, 605u, 0x08A2EC74u>(ctx, &aot_mem) && ctx.pc == 0x08A41414u) goto L_08A41414;
    return;
L_08A41414:
    ctx.set_gpr(4, rt.memory().aot_load32(ctx.gpr[18] + static_cast<std::uint32_t>(68)));
    ctx.set_gpr(5, ctx.gpr[16] + 0u);
    ctx.set_gpr(31, 0x08A41424u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0151_entry, 151u, 62u, 0x08A604F0u>(ctx, &aot_mem) && ctx.pc == 0x08A41424u) goto L_08A41424;
    return;
L_08A41424:
    ctx.set_gpr(4, ctx.gpr[16] + 0u);
    ctx.set_gpr(2, 2246u << 16u);
    ctx.set_gpr(5, rt.memory().aot_load32(ctx.gpr[2] + static_cast<std::uint32_t>(-22044)));
    ctx.set_gpr(31, 0x08A41438u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0138_entry, 138u, 605u, 0x08A2EC74u>(ctx, &aot_mem) && ctx.pc == 0x08A41438u) goto L_08A41438;
    return;
L_08A41438:
    ctx.set_gpr(4, ctx.gpr[16] + 0u);
    ctx.set_gpr(2, 2246u << 16u);
    ctx.set_gpr(5, rt.memory().aot_load32(ctx.gpr[2] + static_cast<std::uint32_t>(-21912)));
    ctx.set_gpr(31, 0x08A4144Cu);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0138_entry, 138u, 605u, 0x08A2EC74u>(ctx, &aot_mem) && ctx.pc == 0x08A4144Cu) goto L_08A4144C;
    return;
L_08A4144C:
    ctx.set_gpr(4, ctx.gpr[18] + 0u);
    ctx.set_gpr(5, ctx.gpr[19] + 0u);
    ctx.set_gpr(31, 0x08A4145Cu);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0153_entry, 153u, 354u, 0x08A69FF0u>(ctx, &aot_mem) && ctx.pc == 0x08A4145Cu) goto L_08A4145C;
    return;
L_08A4145C:
    ctx.set_gpr(4, ctx.gpr[16] + 0u);
    ctx.set_gpr(2, 2246u << 16u);
    ctx.set_gpr(5, rt.memory().aot_load32(ctx.gpr[2] + static_cast<std::uint32_t>(-21912)));
    ctx.set_gpr(31, 0x08A41470u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0138_entry, 138u, 615u, 0x08A2ED9Cu>(ctx, &aot_mem) && ctx.pc == 0x08A41470u) goto L_08A41470;
    return;
L_08A41470:
    ctx.set_gpr(4, ctx.gpr[16] + 0u);
    ctx.set_gpr(2, 2246u << 16u);
    ctx.set_gpr(5, rt.memory().aot_load32(ctx.gpr[2] + static_cast<std::uint32_t>(-22044)));
    ctx.set_gpr(31, 0x08A41484u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0138_entry, 138u, 615u, 0x08A2ED9Cu>(ctx, &aot_mem) && ctx.pc == 0x08A41484u) goto L_08A41484;
    return;
L_08A41484:
    ctx.set_gpr(4, ctx.gpr[16] + 0u);
    ctx.set_gpr(2, 2246u << 16u);
    ctx.set_gpr(5, rt.memory().aot_load32(ctx.gpr[2] + static_cast<std::uint32_t>(-22024)));
    ctx.set_gpr(31, 0x08A41498u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0138_entry, 138u, 615u, 0x08A2ED9Cu>(ctx, &aot_mem) && ctx.pc == 0x08A41498u) goto L_08A41498;
    return;
L_08A41498:
    ctx.set_gpr(4, ctx.gpr[16] + 0u);
    ctx.set_gpr(2, 2246u << 16u);
    ctx.set_gpr(5, rt.memory().aot_load32(ctx.gpr[2] + static_cast<std::uint32_t>(-22036)));
    ctx.set_gpr(31, 0x08A414ACu);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0138_entry, 138u, 615u, 0x08A2ED9Cu>(ctx, &aot_mem) && ctx.pc == 0x08A414ACu) goto L_08A414AC;
    return;
L_08A414AC:
    ctx.set_gpr(4, rt.memory().aot_load32(ctx.gpr[18] + static_cast<std::uint32_t>(68)));
    ctx.set_gpr(5, ctx.gpr[16] + 0u);
    ctx.set_gpr(31, 0x08A414BCu);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0151_entry, 151u, 62u, 0x08A604F0u>(ctx, &aot_mem) && ctx.pc == 0x08A414BCu) goto L_08A414BC;
    return;
L_08A414BC:
    ctx.set_gpr(4, ctx.gpr[16] + 0u);
    ctx.set_gpr(2, 2246u << 16u);
    ctx.set_gpr(5, rt.memory().aot_load32(ctx.gpr[2] + static_cast<std::uint32_t>(-21900)));
    ctx.set_gpr(31, 0x08A414D0u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0138_entry, 138u, 605u, 0x08A2EC74u>(ctx, &aot_mem) && ctx.pc == 0x08A414D0u) goto L_08A414D0;
    return;
L_08A414D0:
    ctx.set_gpr(4, ctx.gpr[16] + 0u);
    ctx.set_gpr(2, 2246u << 16u);
    ctx.set_gpr(5, rt.memory().aot_load32(ctx.gpr[2] + static_cast<std::uint32_t>(-21920)));
    ctx.set_gpr(31, 0x08A414E4u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0138_entry, 138u, 605u, 0x08A2EC74u>(ctx, &aot_mem) && ctx.pc == 0x08A414E4u) goto L_08A414E4;
    return;
L_08A414E4:
    ctx.set_gpr(4, ctx.gpr[16] + 0u);
    ctx.set_gpr(2, 2246u << 16u);
    ctx.set_gpr(5, rt.memory().aot_load32(ctx.gpr[2] + static_cast<std::uint32_t>(-21896)));
    ctx.set_gpr(31, 0x08A414F8u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0138_entry, 138u, 605u, 0x08A2EC74u>(ctx, &aot_mem) && ctx.pc == 0x08A414F8u) goto L_08A414F8;
    return;
L_08A414F8:
    ctx.set_gpr(4, rt.memory().aot_load32(ctx.gpr[18] + static_cast<std::uint32_t>(68)));
    ctx.set_gpr(5, ctx.gpr[16] + 0u);
    ctx.set_gpr(31, 0x08A41508u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0151_entry, 151u, 62u, 0x08A604F0u>(ctx, &aot_mem) && ctx.pc == 0x08A41508u) goto L_08A41508;
    return;
L_08A41508:
    ctx.set_gpr(4, ctx.gpr[16] + 0u);
    ctx.set_gpr(2, 2246u << 16u);
    ctx.set_gpr(5, rt.memory().aot_load32(ctx.gpr[2] + static_cast<std::uint32_t>(-22008)));
    ctx.set_gpr(31, 0x08A4151Cu);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0138_entry, 138u, 605u, 0x08A2EC74u>(ctx, &aot_mem) && ctx.pc == 0x08A4151Cu) goto L_08A4151C;
    return;
L_08A4151C:
    ctx.set_gpr(4, ctx.gpr[16] + 0u);
    ctx.set_gpr(2, 2246u << 16u);
    ctx.set_gpr(5, rt.memory().aot_load32(ctx.gpr[2] + static_cast<std::uint32_t>(-21976)));
    ctx.set_gpr(31, 0x08A41530u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0138_entry, 138u, 605u, 0x08A2EC74u>(ctx, &aot_mem) && ctx.pc == 0x08A41530u) goto L_08A41530;
    return;
L_08A41530:
    ctx.set_gpr(4, ctx.gpr[17] + 0u);
    ctx.set_gpr(5, 0u + static_cast<std::uint32_t>(16));
    ctx.set_gpr(25, rt.memory().aot_load32(ctx.gpr[17] + static_cast<std::uint32_t>(0)));
    ctx.set_gpr(25, rt.memory().aot_load32(ctx.gpr[25] + static_cast<std::uint32_t>(116)));
    jump_target = ctx.gpr[25];
    ctx.set_gpr(31, 0x08A41548u);
    // nop
    ctx.pc = jump_target;
    if (rt.invoke_chained_call(ctx, &aot_mem) && ctx.pc == 0x08A41548u) goto L_08A41548;
    return;
L_08A41548:
    { const bool branch_taken = ctx.gpr[2] == 0u;
    // nop
      if (branch_taken) {
          goto L_08A4156C;
      }
      goto L_08A41550;
    }
L_08A41550:
    ctx.set_gpr(4, ctx.gpr[16] + 0u);
    ctx.set_gpr(2, 2246u << 16u);
    ctx.set_gpr(5, rt.memory().aot_load32(ctx.gpr[2] + static_cast<std::uint32_t>(-21924)));
    ctx.set_gpr(31, 0x08A41564u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0138_entry, 138u, 605u, 0x08A2EC74u>(ctx, &aot_mem) && ctx.pc == 0x08A41564u) goto L_08A41564;
    return;
L_08A41564:
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_08A41580;
      }
      goto L_08A4156C;
    }
L_08A4156C:
    ctx.set_gpr(4, ctx.gpr[16] + 0u);
    ctx.set_gpr(2, 2246u << 16u);
    ctx.set_gpr(5, rt.memory().aot_load32(ctx.gpr[2] + static_cast<std::uint32_t>(-21940)));
    ctx.set_gpr(31, 0x08A41580u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0138_entry, 138u, 605u, 0x08A2EC74u>(ctx, &aot_mem) && ctx.pc == 0x08A41580u) goto L_08A41580;
    return;
L_08A41580:
    ctx.set_gpr(4, ctx.gpr[16] + 0u);
    ctx.set_gpr(2, 2246u << 16u);
    ctx.set_gpr(5, rt.memory().aot_load32(ctx.gpr[2] + static_cast<std::uint32_t>(-21956)));
    ctx.set_gpr(31, 0x08A41594u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0138_entry, 138u, 605u, 0x08A2EC74u>(ctx, &aot_mem) && ctx.pc == 0x08A41594u) goto L_08A41594;
    return;
L_08A41594:
    ctx.set_gpr(4, ctx.gpr[16] + 0u);
    ctx.set_gpr(2, 2246u << 16u);
    ctx.set_gpr(5, rt.memory().aot_load32(ctx.gpr[2] + static_cast<std::uint32_t>(-21904)));
    ctx.set_gpr(31, 0x08A415A8u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0138_entry, 138u, 605u, 0x08A2EC74u>(ctx, &aot_mem) && ctx.pc == 0x08A415A8u) goto L_08A415A8;
    return;
L_08A415A8:
    ctx.set_gpr(4, ctx.gpr[16] + 0u);
    ctx.set_gpr(2, 2246u << 16u);
    ctx.set_gpr(5, rt.memory().aot_load32(ctx.gpr[2] + static_cast<std::uint32_t>(-21892)));
    ctx.set_gpr(31, 0x08A415BCu);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0138_entry, 138u, 605u, 0x08A2EC74u>(ctx, &aot_mem) && ctx.pc == 0x08A415BCu) goto L_08A415BC;
    return;
L_08A415BC:
    ctx.set_gpr(4, rt.memory().aot_load32(ctx.gpr[18] + static_cast<std::uint32_t>(68)));
    ctx.set_gpr(2, 2246u << 16u);
    ctx.set_gpr(5, rt.memory().aot_load32(ctx.gpr[2] + static_cast<std::uint32_t>(-22016)));
    ctx.set_gpr(6, ctx.gpr[16] + 0u);
    ctx.set_gpr(7, 0u + 0u);
    ctx.set_gpr(31, 0x08A415D8u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0151_entry, 151u, 388u, 0x08A61EE8u>(ctx, &aot_mem) && ctx.pc == 0x08A415D8u) goto L_08A415D8;
    return;
L_08A415D8:
    ctx.set_gpr(4, ctx.gpr[16] + 0u);
    ctx.set_gpr(2, 2246u << 16u);
    ctx.set_gpr(5, rt.memory().aot_load32(ctx.gpr[2] + static_cast<std::uint32_t>(-21892)));
    ctx.set_gpr(31, 0x08A415ECu);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0138_entry, 138u, 615u, 0x08A2ED9Cu>(ctx, &aot_mem) && ctx.pc == 0x08A415ECu) goto L_08A415EC;
    return;
L_08A415EC:
    ctx.set_gpr(4, ctx.gpr[16] + 0u);
    ctx.set_gpr(2, 2246u << 16u);
    ctx.set_gpr(5, rt.memory().aot_load32(ctx.gpr[2] + static_cast<std::uint32_t>(-21904)));
    ctx.set_gpr(31, 0x08A41600u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0138_entry, 138u, 615u, 0x08A2ED9Cu>(ctx, &aot_mem) && ctx.pc == 0x08A41600u) goto L_08A41600;
    return;
L_08A41600:
    ctx.set_gpr(4, ctx.gpr[16] + 0u);
    ctx.set_gpr(2, 2246u << 16u);
    ctx.set_gpr(5, rt.memory().aot_load32(ctx.gpr[2] + static_cast<std::uint32_t>(-21956)));
    ctx.set_gpr(31, 0x08A41614u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0138_entry, 138u, 615u, 0x08A2ED9Cu>(ctx, &aot_mem) && ctx.pc == 0x08A41614u) goto L_08A41614;
    return;
L_08A41614:
    ctx.set_gpr(4, ctx.gpr[17] + 0u);
    ctx.set_gpr(5, 0u + static_cast<std::uint32_t>(16));
    ctx.set_gpr(25, rt.memory().aot_load32(ctx.gpr[17] + static_cast<std::uint32_t>(0)));
    ctx.set_gpr(25, rt.memory().aot_load32(ctx.gpr[25] + static_cast<std::uint32_t>(116)));
    jump_target = ctx.gpr[25];
    ctx.set_gpr(31, 0x08A4162Cu);
    // nop
    ctx.pc = jump_target;
    if (rt.invoke_chained_call(ctx, &aot_mem) && ctx.pc == 0x08A4162Cu) goto L_08A4162C;
    return;
L_08A4162C:
    { const bool branch_taken = ctx.gpr[2] == 0u;
    // nop
      if (branch_taken) {
          goto L_08A41650;
      }
      goto L_08A41634;
    }
L_08A41634:
    ctx.set_gpr(4, ctx.gpr[16] + 0u);
    ctx.set_gpr(2, 2246u << 16u);
    ctx.set_gpr(5, rt.memory().aot_load32(ctx.gpr[2] + static_cast<std::uint32_t>(-21924)));
    ctx.set_gpr(31, 0x08A41648u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0138_entry, 138u, 615u, 0x08A2ED9Cu>(ctx, &aot_mem) && ctx.pc == 0x08A41648u) goto L_08A41648;
    return;
L_08A41648:
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_08A41664;
      }
      goto L_08A41650;
    }
L_08A41650:
    ctx.set_gpr(4, ctx.gpr[16] + 0u);
    ctx.set_gpr(2, 2246u << 16u);
    ctx.set_gpr(5, rt.memory().aot_load32(ctx.gpr[2] + static_cast<std::uint32_t>(-21940)));
    ctx.set_gpr(31, 0x08A41664u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0138_entry, 138u, 615u, 0x08A2ED9Cu>(ctx, &aot_mem) && ctx.pc == 0x08A41664u) goto L_08A41664;
    return;
L_08A41664:
    ctx.set_gpr(4, ctx.gpr[16] + 0u);
    ctx.set_gpr(2, 2246u << 16u);
    ctx.set_gpr(5, rt.memory().aot_load32(ctx.gpr[2] + static_cast<std::uint32_t>(-21976)));
    ctx.set_gpr(31, 0x08A41678u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0138_entry, 138u, 615u, 0x08A2ED9Cu>(ctx, &aot_mem) && ctx.pc == 0x08A41678u) goto L_08A41678;
    return;
L_08A41678:
    ctx.set_gpr(4, ctx.gpr[16] + 0u);
    ctx.set_gpr(2, 2246u << 16u);
    ctx.set_gpr(5, rt.memory().aot_load32(ctx.gpr[2] + static_cast<std::uint32_t>(-22008)));
    ctx.set_gpr(31, 0x08A4168Cu);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0138_entry, 138u, 615u, 0x08A2ED9Cu>(ctx, &aot_mem) && ctx.pc == 0x08A4168Cu) goto L_08A4168C;
    return;
L_08A4168C:
    ctx.set_gpr(4, ctx.gpr[16] + 0u);
    ctx.set_gpr(2, 2246u << 16u);
    ctx.set_gpr(5, rt.memory().aot_load32(ctx.gpr[2] + static_cast<std::uint32_t>(-21896)));
    ctx.set_gpr(31, 0x08A416A0u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0138_entry, 138u, 615u, 0x08A2ED9Cu>(ctx, &aot_mem) && ctx.pc == 0x08A416A0u) goto L_08A416A0;
    return;
L_08A416A0:
    ctx.set_gpr(4, ctx.gpr[16] + 0u);
    ctx.set_gpr(2, 2246u << 16u);
    ctx.set_gpr(5, rt.memory().aot_load32(ctx.gpr[2] + static_cast<std::uint32_t>(-21920)));
    ctx.set_gpr(31, 0x08A416B4u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0138_entry, 138u, 615u, 0x08A2ED9Cu>(ctx, &aot_mem) && ctx.pc == 0x08A416B4u) goto L_08A416B4;
    return;
L_08A416B4:
    ctx.set_gpr(4, ctx.gpr[16] + 0u);
    ctx.set_gpr(2, 2246u << 16u);
    ctx.set_gpr(5, rt.memory().aot_load32(ctx.gpr[2] + static_cast<std::uint32_t>(-21900)));
    ctx.set_gpr(31, 0x08A416C8u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0138_entry, 138u, 615u, 0x08A2ED9Cu>(ctx, &aot_mem) && ctx.pc == 0x08A416C8u) goto L_08A416C8;
    return;
L_08A416C8:
    ctx.set_gpr(4, rt.memory().aot_load32(ctx.gpr[18] + static_cast<std::uint32_t>(68)));
    ctx.set_gpr(5, ctx.gpr[16] + 0u);
    ctx.set_gpr(31, 0x08A416D8u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0151_entry, 151u, 62u, 0x08A604F0u>(ctx, &aot_mem) && ctx.pc == 0x08A416D8u) goto L_08A416D8;
    return;
L_08A416D8:
    ctx.set_gpr(4, ctx.gpr[16] + 0u);
    ctx.set_gpr(2, 2246u << 16u);
    ctx.set_gpr(5, rt.memory().aot_load32(ctx.gpr[2] + static_cast<std::uint32_t>(-21916)));
    ctx.set_gpr(31, 0x08A416ECu);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0138_entry, 138u, 605u, 0x08A2EC74u>(ctx, &aot_mem) && ctx.pc == 0x08A416ECu) goto L_08A416EC;
    return;
L_08A416EC:
    ctx.set_gpr(4, ctx.gpr[18] + 0u);
    ctx.set_gpr(5, ctx.gpr[19] + 0u);
    ctx.set_gpr(31, 0x08A416FCu);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0153_entry, 153u, 354u, 0x08A69FF0u>(ctx, &aot_mem) && ctx.pc == 0x08A416FCu) goto L_08A416FC;
    return;
L_08A416FC:
    ctx.set_gpr(4, ctx.gpr[16] + 0u);
    ctx.set_gpr(2, 2246u << 16u);
    ctx.set_gpr(5, rt.memory().aot_load32(ctx.gpr[2] + static_cast<std::uint32_t>(-21916)));
    ctx.set_gpr(31, 0x08A41710u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0138_entry, 138u, 615u, 0x08A2ED9Cu>(ctx, &aot_mem) && ctx.pc == 0x08A41710u) goto L_08A41710;
    return;
L_08A41710:
    ctx.set_gpr(4, rt.memory().aot_load32(ctx.gpr[18] + static_cast<std::uint32_t>(68)));
    ctx.set_gpr(5, ctx.gpr[16] + 0u);
    ctx.set_gpr(31, 0x08A41720u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0151_entry, 151u, 62u, 0x08A604F0u>(ctx, &aot_mem) && ctx.pc == 0x08A41720u) goto L_08A41720;
    return;
L_08A41720:
    ctx.set_gpr(4, rt.memory().aot_load32(ctx.gpr[18] + static_cast<std::uint32_t>(68)));
    ctx.set_gpr(31, 0x08A4172Cu);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0151_entry, 151u, 515u, 0x08A62900u>(ctx, &aot_mem) && ctx.pc == 0x08A4172Cu) goto L_08A4172C;
    return;
L_08A4172C:
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_08A41764;
      }
      goto L_08A41734;
    }
L_08A41734:
    ctx.set_gpr(4, rt.memory().aot_load32(ctx.gpr[18] + static_cast<std::uint32_t>(68)));
    ctx.set_gpr(5, 0u + 0u);
    ctx.set_gpr(6, 0u + 0u);
    ctx.set_gpr(31, 0x08A41748u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0151_entry, 151u, 505u, 0x08A627F8u>(ctx, &aot_mem) && ctx.pc == 0x08A41748u) goto L_08A41748;
    return;
L_08A41748:
    ctx.set_gpr(4, ctx.gpr[18] + 0u);
    ctx.set_gpr(5, ctx.gpr[19] + 0u);
    ctx.set_gpr(31, 0x08A41758u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0153_entry, 153u, 354u, 0x08A69FF0u>(ctx, &aot_mem) && ctx.pc == 0x08A41758u) goto L_08A41758;
    return;
L_08A41758:
    ctx.set_gpr(4, rt.memory().aot_load32(ctx.gpr[18] + static_cast<std::uint32_t>(68)));
    ctx.set_gpr(31, 0x08A41764u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0151_entry, 151u, 515u, 0x08A62900u>(ctx, &aot_mem) && ctx.pc == 0x08A41764u) goto L_08A41764;
    return;
L_08A41764:
    ctx.set_gpr(31, rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(44)));
    ctx.set_gpr(20, rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(40)));
    ctx.set_gpr(19, rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(36)));
    ctx.set_gpr(18, rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(32)));
    ctx.set_gpr(17, rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(28)));
    ctx.set_gpr(16, rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(24)));
    ctx.fpr[20] = std::bit_cast<float>(rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(16)));
    ctx.set_gpr(29, ctx.gpr[29] + static_cast<std::uint32_t>(64));
    jump_target = ctx.gpr[31];
    // nop
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_08A4178C:
    ctx.set_gpr(29, ctx.gpr[29] + static_cast<std::uint32_t>(-16));
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(12), ctx.gpr[31]);
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(8), ctx.gpr[16]);
    ctx.set_gpr(16, ctx.gpr[4] + 0u);
    ctx.set_gpr(25, rt.memory().aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(0)));
    ctx.set_gpr(25, rt.memory().aot_load32(ctx.gpr[25] + static_cast<std::uint32_t>(88)));
    jump_target = ctx.gpr[25];
    ctx.set_gpr(31, 0x08A417ACu);
    // nop
    ctx.pc = jump_target;
    if (rt.invoke_chained_call(ctx, &aot_mem) && ctx.pc == 0x08A417ACu) goto L_08A417AC;
    return;
L_08A417AC:
    ctx.set_gpr(4, ctx.gpr[2] + 0u);
    ctx.set_gpr(5, 0u + static_cast<std::uint32_t>(1));
    ctx.set_gpr(31, 0x08A417BCu);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0080_entry, 80u, 118u, 0x089448B4u>(ctx, &aot_mem) && ctx.pc == 0x08A417BCu) goto L_08A417BC;
    return;
L_08A417BC:
    { const bool branch_taken = ctx.gpr[2] != 0u;
    // nop
      if (branch_taken) {
          goto L_08A420E8;
      }
      goto L_08A417C4;
    }
L_08A417C4:
    ctx.set_gpr(2, 2246u << 16u);
    ctx.set_gpr(4, rt.memory().aot_load32(ctx.gpr[2] + static_cast<std::uint32_t>(-21892)));
    { const bool branch_taken = ctx.gpr[4] == 0u;
    // nop
      if (branch_taken) {
          goto L_08A41800;
      }
      goto L_08A417D4;
    }
L_08A417D4:
    ctx.set_gpr(2, rt.memory().aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(4)));
    ctx.set_gpr(2, ctx.gpr[2] + static_cast<std::uint32_t>(-1));
    rt.memory().aot_store32(ctx.gpr[4] + static_cast<std::uint32_t>(4), ctx.gpr[2]);
    ctx.set_gpr(2, ctx.gpr[2] << 10u);
    ctx.set_gpr(2, ctx.gpr[2] >> 10u);
    { const bool branch_taken = ctx.gpr[2] != 0u;
    // nop
      if (branch_taken) {
          goto L_08A417F8;
      }
      goto L_08A417F0;
    }
L_08A417F0:
    ctx.set_gpr(31, 0x08A417F8u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0080_entry, 80u, 556u, 0x089467C8u>(ctx, &aot_mem) && ctx.pc == 0x08A417F8u) goto L_08A417F8;
    return;
L_08A417F8:
    ctx.set_gpr(2, 2246u << 16u);
    rt.memory().aot_store32(ctx.gpr[2] + static_cast<std::uint32_t>(-21892), 0u);
    goto L_08A41800;
L_08A41800:
    ctx.set_gpr(2, 2246u << 16u);
    ctx.set_gpr(4, rt.memory().aot_load32(ctx.gpr[2] + static_cast<std::uint32_t>(-22044)));
    { const bool branch_taken = ctx.gpr[4] == 0u;
    // nop
      if (branch_taken) {
          goto L_08A4183C;
      }
      goto L_08A41810;
    }
L_08A41810:
    ctx.set_gpr(2, rt.memory().aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(4)));
    ctx.set_gpr(2, ctx.gpr[2] + static_cast<std::uint32_t>(-1));
    rt.memory().aot_store32(ctx.gpr[4] + static_cast<std::uint32_t>(4), ctx.gpr[2]);
    ctx.set_gpr(2, ctx.gpr[2] << 10u);
    ctx.set_gpr(2, ctx.gpr[2] >> 10u);
    { const bool branch_taken = ctx.gpr[2] != 0u;
    // nop
      if (branch_taken) {
          goto L_08A41834;
      }
      goto L_08A4182C;
    }
L_08A4182C:
    ctx.set_gpr(31, 0x08A41834u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0080_entry, 80u, 556u, 0x089467C8u>(ctx, &aot_mem) && ctx.pc == 0x08A41834u) goto L_08A41834;
    return;
L_08A41834:
    ctx.set_gpr(2, 2246u << 16u);
    rt.memory().aot_store32(ctx.gpr[2] + static_cast<std::uint32_t>(-22044), 0u);
    goto L_08A4183C;
L_08A4183C:
    ctx.set_gpr(2, 2246u << 16u);
    ctx.set_gpr(4, rt.memory().aot_load32(ctx.gpr[2] + static_cast<std::uint32_t>(-22040)));
    { const bool branch_taken = ctx.gpr[4] == 0u;
    // nop
      if (branch_taken) {
          goto L_08A41878;
      }
      goto L_08A4184C;
    }
L_08A4184C:
    ctx.set_gpr(2, rt.memory().aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(4)));
    ctx.set_gpr(2, ctx.gpr[2] + static_cast<std::uint32_t>(-1));
    rt.memory().aot_store32(ctx.gpr[4] + static_cast<std::uint32_t>(4), ctx.gpr[2]);
    ctx.set_gpr(2, ctx.gpr[2] << 10u);
    ctx.set_gpr(2, ctx.gpr[2] >> 10u);
    { const bool branch_taken = ctx.gpr[2] != 0u;
    // nop
      if (branch_taken) {
          goto L_08A41870;
      }
      goto L_08A41868;
    }
L_08A41868:
    ctx.set_gpr(31, 0x08A41870u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0080_entry, 80u, 556u, 0x089467C8u>(ctx, &aot_mem) && ctx.pc == 0x08A41870u) goto L_08A41870;
    return;
L_08A41870:
    ctx.set_gpr(2, 2246u << 16u);
    rt.memory().aot_store32(ctx.gpr[2] + static_cast<std::uint32_t>(-22040), 0u);
    goto L_08A41878;
L_08A41878:
    ctx.set_gpr(2, 2246u << 16u);
    ctx.set_gpr(4, rt.memory().aot_load32(ctx.gpr[2] + static_cast<std::uint32_t>(-22036)));
    { const bool branch_taken = ctx.gpr[4] == 0u;
    // nop
      if (branch_taken) {
          goto L_08A418B4;
      }
      goto L_08A41888;
    }
L_08A41888:
    ctx.set_gpr(2, rt.memory().aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(4)));
    ctx.set_gpr(2, ctx.gpr[2] + static_cast<std::uint32_t>(-1));
    rt.memory().aot_store32(ctx.gpr[4] + static_cast<std::uint32_t>(4), ctx.gpr[2]);
    ctx.set_gpr(2, ctx.gpr[2] << 10u);
    ctx.set_gpr(2, ctx.gpr[2] >> 10u);
    { const bool branch_taken = ctx.gpr[2] != 0u;
    // nop
      if (branch_taken) {
          goto L_08A418AC;
      }
      goto L_08A418A4;
    }
L_08A418A4:
    ctx.set_gpr(31, 0x08A418ACu);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0080_entry, 80u, 556u, 0x089467C8u>(ctx, &aot_mem) && ctx.pc == 0x08A418ACu) goto L_08A418AC;
    return;
L_08A418AC:
    ctx.set_gpr(2, 2246u << 16u);
    rt.memory().aot_store32(ctx.gpr[2] + static_cast<std::uint32_t>(-22036), 0u);
    goto L_08A418B4;
L_08A418B4:
    ctx.set_gpr(2, 2246u << 16u);
    ctx.set_gpr(4, rt.memory().aot_load32(ctx.gpr[2] + static_cast<std::uint32_t>(-22032)));
    { const bool branch_taken = ctx.gpr[4] == 0u;
    // nop
      if (branch_taken) {
          goto L_08A418F0;
      }
      goto L_08A418C4;
    }
L_08A418C4:
    ctx.set_gpr(2, rt.memory().aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(4)));
    ctx.set_gpr(2, ctx.gpr[2] + static_cast<std::uint32_t>(-1));
    rt.memory().aot_store32(ctx.gpr[4] + static_cast<std::uint32_t>(4), ctx.gpr[2]);
    ctx.set_gpr(2, ctx.gpr[2] << 10u);
    ctx.set_gpr(2, ctx.gpr[2] >> 10u);
    { const bool branch_taken = ctx.gpr[2] != 0u;
    // nop
      if (branch_taken) {
          goto L_08A418E8;
      }
      goto L_08A418E0;
    }
L_08A418E0:
    ctx.set_gpr(31, 0x08A418E8u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0080_entry, 80u, 556u, 0x089467C8u>(ctx, &aot_mem) && ctx.pc == 0x08A418E8u) goto L_08A418E8;
    return;
L_08A418E8:
    ctx.set_gpr(2, 2246u << 16u);
    rt.memory().aot_store32(ctx.gpr[2] + static_cast<std::uint32_t>(-22032), 0u);
    goto L_08A418F0;
L_08A418F0:
    ctx.set_gpr(2, 2246u << 16u);
    ctx.set_gpr(4, rt.memory().aot_load32(ctx.gpr[2] + static_cast<std::uint32_t>(-22028)));
    { const bool branch_taken = ctx.gpr[4] == 0u;
    // nop
      if (branch_taken) {
          goto L_08A4192C;
      }
      goto L_08A41900;
    }
L_08A41900:
    ctx.set_gpr(2, rt.memory().aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(4)));
    ctx.set_gpr(2, ctx.gpr[2] + static_cast<std::uint32_t>(-1));
    rt.memory().aot_store32(ctx.gpr[4] + static_cast<std::uint32_t>(4), ctx.gpr[2]);
    ctx.set_gpr(2, ctx.gpr[2] << 10u);
    ctx.set_gpr(2, ctx.gpr[2] >> 10u);
    { const bool branch_taken = ctx.gpr[2] != 0u;
    // nop
      if (branch_taken) {
          goto L_08A41924;
      }
      goto L_08A4191C;
    }
L_08A4191C:
    ctx.set_gpr(31, 0x08A41924u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0080_entry, 80u, 556u, 0x089467C8u>(ctx, &aot_mem) && ctx.pc == 0x08A41924u) goto L_08A41924;
    return;
L_08A41924:
    ctx.set_gpr(2, 2246u << 16u);
    rt.memory().aot_store32(ctx.gpr[2] + static_cast<std::uint32_t>(-22028), 0u);
    goto L_08A4192C;
L_08A4192C:
    ctx.set_gpr(2, 2246u << 16u);
    ctx.set_gpr(4, rt.memory().aot_load32(ctx.gpr[2] + static_cast<std::uint32_t>(-22024)));
    { const bool branch_taken = ctx.gpr[4] == 0u;
    // nop
      if (branch_taken) {
          goto L_08A41968;
      }
      goto L_08A4193C;
    }
L_08A4193C:
    ctx.set_gpr(2, rt.memory().aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(4)));
    ctx.set_gpr(2, ctx.gpr[2] + static_cast<std::uint32_t>(-1));
    rt.memory().aot_store32(ctx.gpr[4] + static_cast<std::uint32_t>(4), ctx.gpr[2]);
    ctx.set_gpr(2, ctx.gpr[2] << 10u);
    ctx.set_gpr(2, ctx.gpr[2] >> 10u);
    { const bool branch_taken = ctx.gpr[2] != 0u;
    // nop
      if (branch_taken) {
          goto L_08A41960;
      }
      goto L_08A41958;
    }
L_08A41958:
    ctx.set_gpr(31, 0x08A41960u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0080_entry, 80u, 556u, 0x089467C8u>(ctx, &aot_mem) && ctx.pc == 0x08A41960u) goto L_08A41960;
    return;
L_08A41960:
    ctx.set_gpr(2, 2246u << 16u);
    rt.memory().aot_store32(ctx.gpr[2] + static_cast<std::uint32_t>(-22024), 0u);
    goto L_08A41968;
L_08A41968:
    ctx.set_gpr(2, 2246u << 16u);
    ctx.set_gpr(4, rt.memory().aot_load32(ctx.gpr[2] + static_cast<std::uint32_t>(-22020)));
    { const bool branch_taken = ctx.gpr[4] == 0u;
    // nop
      if (branch_taken) {
          goto L_08A419A4;
      }
      goto L_08A41978;
    }
L_08A41978:
    ctx.set_gpr(2, rt.memory().aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(4)));
    ctx.set_gpr(2, ctx.gpr[2] + static_cast<std::uint32_t>(-1));
    rt.memory().aot_store32(ctx.gpr[4] + static_cast<std::uint32_t>(4), ctx.gpr[2]);
    ctx.set_gpr(2, ctx.gpr[2] << 10u);
    ctx.set_gpr(2, ctx.gpr[2] >> 10u);
    { const bool branch_taken = ctx.gpr[2] != 0u;
    // nop
      if (branch_taken) {
          goto L_08A4199C;
      }
      goto L_08A41994;
    }
L_08A41994:
    ctx.set_gpr(31, 0x08A4199Cu);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0080_entry, 80u, 556u, 0x089467C8u>(ctx, &aot_mem) && ctx.pc == 0x08A4199Cu) goto L_08A4199C;
    return;
L_08A4199C:
    ctx.set_gpr(2, 2246u << 16u);
    rt.memory().aot_store32(ctx.gpr[2] + static_cast<std::uint32_t>(-22020), 0u);
    goto L_08A419A4;
L_08A419A4:
    ctx.set_gpr(2, 2246u << 16u);
    ctx.set_gpr(4, rt.memory().aot_load32(ctx.gpr[2] + static_cast<std::uint32_t>(-22016)));
    { const bool branch_taken = ctx.gpr[4] == 0u;
    // nop
      if (branch_taken) {
          goto L_08A419E0;
      }
      goto L_08A419B4;
    }
L_08A419B4:
    ctx.set_gpr(2, rt.memory().aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(4)));
    ctx.set_gpr(2, ctx.gpr[2] + static_cast<std::uint32_t>(-1));
    rt.memory().aot_store32(ctx.gpr[4] + static_cast<std::uint32_t>(4), ctx.gpr[2]);
    ctx.set_gpr(2, ctx.gpr[2] << 10u);
    ctx.set_gpr(2, ctx.gpr[2] >> 10u);
    { const bool branch_taken = ctx.gpr[2] != 0u;
    // nop
      if (branch_taken) {
          goto L_08A419D8;
      }
      goto L_08A419D0;
    }
L_08A419D0:
    ctx.set_gpr(31, 0x08A419D8u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0080_entry, 80u, 556u, 0x089467C8u>(ctx, &aot_mem) && ctx.pc == 0x08A419D8u) goto L_08A419D8;
    return;
L_08A419D8:
    ctx.set_gpr(2, 2246u << 16u);
    rt.memory().aot_store32(ctx.gpr[2] + static_cast<std::uint32_t>(-22016), 0u);
    goto L_08A419E0;
L_08A419E0:
    ctx.set_gpr(2, 2246u << 16u);
    ctx.set_gpr(4, rt.memory().aot_load32(ctx.gpr[2] + static_cast<std::uint32_t>(-22012)));
    { const bool branch_taken = ctx.gpr[4] == 0u;
    // nop
      if (branch_taken) {
          goto L_08A41A1C;
      }
      goto L_08A419F0;
    }
L_08A419F0:
    ctx.set_gpr(2, rt.memory().aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(4)));
    ctx.set_gpr(2, ctx.gpr[2] + static_cast<std::uint32_t>(-1));
    rt.memory().aot_store32(ctx.gpr[4] + static_cast<std::uint32_t>(4), ctx.gpr[2]);
    ctx.set_gpr(2, ctx.gpr[2] << 10u);
    ctx.set_gpr(2, ctx.gpr[2] >> 10u);
    { const bool branch_taken = ctx.gpr[2] != 0u;
    // nop
      if (branch_taken) {
          goto L_08A41A14;
      }
      goto L_08A41A0C;
    }
L_08A41A0C:
    ctx.set_gpr(31, 0x08A41A14u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0080_entry, 80u, 556u, 0x089467C8u>(ctx, &aot_mem) && ctx.pc == 0x08A41A14u) goto L_08A41A14;
    return;
L_08A41A14:
    ctx.set_gpr(2, 2246u << 16u);
    rt.memory().aot_store32(ctx.gpr[2] + static_cast<std::uint32_t>(-22012), 0u);
    goto L_08A41A1C;
L_08A41A1C:
    ctx.set_gpr(2, 2246u << 16u);
    ctx.set_gpr(4, rt.memory().aot_load32(ctx.gpr[2] + static_cast<std::uint32_t>(-22008)));
    { const bool branch_taken = ctx.gpr[4] == 0u;
    // nop
      if (branch_taken) {
          goto L_08A41A58;
      }
      goto L_08A41A2C;
    }
L_08A41A2C:
    ctx.set_gpr(2, rt.memory().aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(4)));
    ctx.set_gpr(2, ctx.gpr[2] + static_cast<std::uint32_t>(-1));
    rt.memory().aot_store32(ctx.gpr[4] + static_cast<std::uint32_t>(4), ctx.gpr[2]);
    ctx.set_gpr(2, ctx.gpr[2] << 10u);
    ctx.set_gpr(2, ctx.gpr[2] >> 10u);
    { const bool branch_taken = ctx.gpr[2] != 0u;
    // nop
      if (branch_taken) {
          goto L_08A41A50;
      }
      goto L_08A41A48;
    }
L_08A41A48:
    ctx.set_gpr(31, 0x08A41A50u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0080_entry, 80u, 556u, 0x089467C8u>(ctx, &aot_mem) && ctx.pc == 0x08A41A50u) goto L_08A41A50;
    return;
L_08A41A50:
    ctx.set_gpr(2, 2246u << 16u);
    rt.memory().aot_store32(ctx.gpr[2] + static_cast<std::uint32_t>(-22008), 0u);
    goto L_08A41A58;
L_08A41A58:
    ctx.set_gpr(2, 2246u << 16u);
    ctx.set_gpr(4, rt.memory().aot_load32(ctx.gpr[2] + static_cast<std::uint32_t>(-22004)));
    { const bool branch_taken = ctx.gpr[4] == 0u;
    // nop
      if (branch_taken) {
          goto L_08A41A94;
      }
      goto L_08A41A68;
    }
L_08A41A68:
    ctx.set_gpr(2, rt.memory().aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(4)));
    ctx.set_gpr(2, ctx.gpr[2] + static_cast<std::uint32_t>(-1));
    rt.memory().aot_store32(ctx.gpr[4] + static_cast<std::uint32_t>(4), ctx.gpr[2]);
    ctx.set_gpr(2, ctx.gpr[2] << 10u);
    ctx.set_gpr(2, ctx.gpr[2] >> 10u);
    { const bool branch_taken = ctx.gpr[2] != 0u;
    // nop
      if (branch_taken) {
          goto L_08A41A8C;
      }
      goto L_08A41A84;
    }
L_08A41A84:
    ctx.set_gpr(31, 0x08A41A8Cu);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0080_entry, 80u, 556u, 0x089467C8u>(ctx, &aot_mem) && ctx.pc == 0x08A41A8Cu) goto L_08A41A8C;
    return;
L_08A41A8C:
    ctx.set_gpr(2, 2246u << 16u);
    rt.memory().aot_store32(ctx.gpr[2] + static_cast<std::uint32_t>(-22004), 0u);
    goto L_08A41A94;
L_08A41A94:
    ctx.set_gpr(2, 2246u << 16u);
    ctx.set_gpr(4, rt.memory().aot_load32(ctx.gpr[2] + static_cast<std::uint32_t>(-22000)));
    { const bool branch_taken = ctx.gpr[4] == 0u;
    // nop
      if (branch_taken) {
          goto L_08A41AD0;
      }
      goto L_08A41AA4;
    }
L_08A41AA4:
    ctx.set_gpr(2, rt.memory().aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(4)));
    ctx.set_gpr(2, ctx.gpr[2] + static_cast<std::uint32_t>(-1));
    rt.memory().aot_store32(ctx.gpr[4] + static_cast<std::uint32_t>(4), ctx.gpr[2]);
    ctx.set_gpr(2, ctx.gpr[2] << 10u);
    ctx.set_gpr(2, ctx.gpr[2] >> 10u);
    { const bool branch_taken = ctx.gpr[2] != 0u;
    // nop
      if (branch_taken) {
          goto L_08A41AC8;
      }
      goto L_08A41AC0;
    }
L_08A41AC0:
    ctx.set_gpr(31, 0x08A41AC8u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0080_entry, 80u, 556u, 0x089467C8u>(ctx, &aot_mem) && ctx.pc == 0x08A41AC8u) goto L_08A41AC8;
    return;
L_08A41AC8:
    ctx.set_gpr(2, 2246u << 16u);
    rt.memory().aot_store32(ctx.gpr[2] + static_cast<std::uint32_t>(-22000), 0u);
    goto L_08A41AD0;
L_08A41AD0:
    ctx.set_gpr(2, 2246u << 16u);
    ctx.set_gpr(4, rt.memory().aot_load32(ctx.gpr[2] + static_cast<std::uint32_t>(-21996)));
    { const bool branch_taken = ctx.gpr[4] == 0u;
    // nop
      if (branch_taken) {
          goto L_08A41B0C;
      }
      goto L_08A41AE0;
    }
L_08A41AE0:
    ctx.set_gpr(2, rt.memory().aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(4)));
    ctx.set_gpr(2, ctx.gpr[2] + static_cast<std::uint32_t>(-1));
    rt.memory().aot_store32(ctx.gpr[4] + static_cast<std::uint32_t>(4), ctx.gpr[2]);
    ctx.set_gpr(2, ctx.gpr[2] << 10u);
    ctx.set_gpr(2, ctx.gpr[2] >> 10u);
    { const bool branch_taken = ctx.gpr[2] != 0u;
    // nop
      if (branch_taken) {
          goto L_08A41B04;
      }
      goto L_08A41AFC;
    }
L_08A41AFC:
    ctx.set_gpr(31, 0x08A41B04u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0080_entry, 80u, 556u, 0x089467C8u>(ctx, &aot_mem) && ctx.pc == 0x08A41B04u) goto L_08A41B04;
    return;
L_08A41B04:
    ctx.set_gpr(2, 2246u << 16u);
    rt.memory().aot_store32(ctx.gpr[2] + static_cast<std::uint32_t>(-21996), 0u);
    goto L_08A41B0C;
L_08A41B0C:
    ctx.set_gpr(2, 2246u << 16u);
    ctx.set_gpr(4, rt.memory().aot_load32(ctx.gpr[2] + static_cast<std::uint32_t>(-21992)));
    { const bool branch_taken = ctx.gpr[4] == 0u;
    // nop
      if (branch_taken) {
          goto L_08A41B48;
      }
      goto L_08A41B1C;
    }
L_08A41B1C:
    ctx.set_gpr(2, rt.memory().aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(4)));
    ctx.set_gpr(2, ctx.gpr[2] + static_cast<std::uint32_t>(-1));
    rt.memory().aot_store32(ctx.gpr[4] + static_cast<std::uint32_t>(4), ctx.gpr[2]);
    ctx.set_gpr(2, ctx.gpr[2] << 10u);
    ctx.set_gpr(2, ctx.gpr[2] >> 10u);
    { const bool branch_taken = ctx.gpr[2] != 0u;
    // nop
      if (branch_taken) {
          goto L_08A41B40;
      }
      goto L_08A41B38;
    }
L_08A41B38:
    ctx.set_gpr(31, 0x08A41B40u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0080_entry, 80u, 556u, 0x089467C8u>(ctx, &aot_mem) && ctx.pc == 0x08A41B40u) goto L_08A41B40;
    return;
L_08A41B40:
    ctx.set_gpr(2, 2246u << 16u);
    rt.memory().aot_store32(ctx.gpr[2] + static_cast<std::uint32_t>(-21992), 0u);
    goto L_08A41B48;
L_08A41B48:
    ctx.set_gpr(2, 2246u << 16u);
    ctx.set_gpr(4, rt.memory().aot_load32(ctx.gpr[2] + static_cast<std::uint32_t>(-21988)));
    { const bool branch_taken = ctx.gpr[4] == 0u;
    // nop
      if (branch_taken) {
          goto L_08A41B84;
      }
      goto L_08A41B58;
    }
L_08A41B58:
    ctx.set_gpr(2, rt.memory().aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(4)));
    ctx.set_gpr(2, ctx.gpr[2] + static_cast<std::uint32_t>(-1));
    rt.memory().aot_store32(ctx.gpr[4] + static_cast<std::uint32_t>(4), ctx.gpr[2]);
    ctx.set_gpr(2, ctx.gpr[2] << 10u);
    ctx.set_gpr(2, ctx.gpr[2] >> 10u);
    { const bool branch_taken = ctx.gpr[2] != 0u;
    // nop
      if (branch_taken) {
          goto L_08A41B7C;
      }
      goto L_08A41B74;
    }
L_08A41B74:
    ctx.set_gpr(31, 0x08A41B7Cu);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0080_entry, 80u, 556u, 0x089467C8u>(ctx, &aot_mem) && ctx.pc == 0x08A41B7Cu) goto L_08A41B7C;
    return;
L_08A41B7C:
    ctx.set_gpr(2, 2246u << 16u);
    rt.memory().aot_store32(ctx.gpr[2] + static_cast<std::uint32_t>(-21988), 0u);
    goto L_08A41B84;
L_08A41B84:
    ctx.set_gpr(2, 2246u << 16u);
    ctx.set_gpr(4, rt.memory().aot_load32(ctx.gpr[2] + static_cast<std::uint32_t>(-21984)));
    { const bool branch_taken = ctx.gpr[4] == 0u;
    // nop
      if (branch_taken) {
          goto L_08A41BC0;
      }
      goto L_08A41B94;
    }
L_08A41B94:
    ctx.set_gpr(2, rt.memory().aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(4)));
    ctx.set_gpr(2, ctx.gpr[2] + static_cast<std::uint32_t>(-1));
    rt.memory().aot_store32(ctx.gpr[4] + static_cast<std::uint32_t>(4), ctx.gpr[2]);
    ctx.set_gpr(2, ctx.gpr[2] << 10u);
    ctx.set_gpr(2, ctx.gpr[2] >> 10u);
    { const bool branch_taken = ctx.gpr[2] != 0u;
    // nop
      if (branch_taken) {
          goto L_08A41BB8;
      }
      goto L_08A41BB0;
    }
L_08A41BB0:
    ctx.set_gpr(31, 0x08A41BB8u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0080_entry, 80u, 556u, 0x089467C8u>(ctx, &aot_mem) && ctx.pc == 0x08A41BB8u) goto L_08A41BB8;
    return;
L_08A41BB8:
    ctx.set_gpr(2, 2246u << 16u);
    rt.memory().aot_store32(ctx.gpr[2] + static_cast<std::uint32_t>(-21984), 0u);
    goto L_08A41BC0;
L_08A41BC0:
    ctx.set_gpr(2, 2246u << 16u);
    ctx.set_gpr(4, rt.memory().aot_load32(ctx.gpr[2] + static_cast<std::uint32_t>(-21980)));
    { const bool branch_taken = ctx.gpr[4] == 0u;
    // nop
      if (branch_taken) {
          goto L_08A41BFC;
      }
      goto L_08A41BD0;
    }
L_08A41BD0:
    ctx.set_gpr(2, rt.memory().aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(4)));
    ctx.set_gpr(2, ctx.gpr[2] + static_cast<std::uint32_t>(-1));
    rt.memory().aot_store32(ctx.gpr[4] + static_cast<std::uint32_t>(4), ctx.gpr[2]);
    ctx.set_gpr(2, ctx.gpr[2] << 10u);
    ctx.set_gpr(2, ctx.gpr[2] >> 10u);
    { const bool branch_taken = ctx.gpr[2] != 0u;
    // nop
      if (branch_taken) {
          goto L_08A41BF4;
      }
      goto L_08A41BEC;
    }
L_08A41BEC:
    ctx.set_gpr(31, 0x08A41BF4u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0080_entry, 80u, 556u, 0x089467C8u>(ctx, &aot_mem) && ctx.pc == 0x08A41BF4u) goto L_08A41BF4;
    return;
L_08A41BF4:
    ctx.set_gpr(2, 2246u << 16u);
    rt.memory().aot_store32(ctx.gpr[2] + static_cast<std::uint32_t>(-21980), 0u);
    goto L_08A41BFC;
L_08A41BFC:
    ctx.set_gpr(2, 2246u << 16u);
    ctx.set_gpr(4, rt.memory().aot_load32(ctx.gpr[2] + static_cast<std::uint32_t>(-21976)));
    { const bool branch_taken = ctx.gpr[4] == 0u;
    // nop
      if (branch_taken) {
          goto L_08A41C38;
      }
      goto L_08A41C0C;
    }
L_08A41C0C:
    ctx.set_gpr(2, rt.memory().aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(4)));
    ctx.set_gpr(2, ctx.gpr[2] + static_cast<std::uint32_t>(-1));
    rt.memory().aot_store32(ctx.gpr[4] + static_cast<std::uint32_t>(4), ctx.gpr[2]);
    ctx.set_gpr(2, ctx.gpr[2] << 10u);
    ctx.set_gpr(2, ctx.gpr[2] >> 10u);
    { const bool branch_taken = ctx.gpr[2] != 0u;
    // nop
      if (branch_taken) {
          goto L_08A41C30;
      }
      goto L_08A41C28;
    }
L_08A41C28:
    ctx.set_gpr(31, 0x08A41C30u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0080_entry, 80u, 556u, 0x089467C8u>(ctx, &aot_mem) && ctx.pc == 0x08A41C30u) goto L_08A41C30;
    return;
L_08A41C30:
    ctx.set_gpr(2, 2246u << 16u);
    rt.memory().aot_store32(ctx.gpr[2] + static_cast<std::uint32_t>(-21976), 0u);
    goto L_08A41C38;
L_08A41C38:
    ctx.set_gpr(2, 2246u << 16u);
    ctx.set_gpr(4, rt.memory().aot_load32(ctx.gpr[2] + static_cast<std::uint32_t>(-21972)));
    { const bool branch_taken = ctx.gpr[4] == 0u;
    // nop
      if (branch_taken) {
          goto L_08A41C74;
      }
      goto L_08A41C48;
    }
L_08A41C48:
    ctx.set_gpr(2, rt.memory().aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(4)));
    ctx.set_gpr(2, ctx.gpr[2] + static_cast<std::uint32_t>(-1));
    rt.memory().aot_store32(ctx.gpr[4] + static_cast<std::uint32_t>(4), ctx.gpr[2]);
    ctx.set_gpr(2, ctx.gpr[2] << 10u);
    ctx.set_gpr(2, ctx.gpr[2] >> 10u);
    { const bool branch_taken = ctx.gpr[2] != 0u;
    // nop
      if (branch_taken) {
          goto L_08A41C6C;
      }
      goto L_08A41C64;
    }
L_08A41C64:
    ctx.set_gpr(31, 0x08A41C6Cu);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0080_entry, 80u, 556u, 0x089467C8u>(ctx, &aot_mem) && ctx.pc == 0x08A41C6Cu) goto L_08A41C6C;
    return;
L_08A41C6C:
    ctx.set_gpr(2, 2246u << 16u);
    rt.memory().aot_store32(ctx.gpr[2] + static_cast<std::uint32_t>(-21972), 0u);
    goto L_08A41C74;
L_08A41C74:
    ctx.set_gpr(2, 2246u << 16u);
    ctx.set_gpr(4, rt.memory().aot_load32(ctx.gpr[2] + static_cast<std::uint32_t>(-21968)));
    { const bool branch_taken = ctx.gpr[4] == 0u;
    // nop
      if (branch_taken) {
          goto L_08A41CB0;
      }
      goto L_08A41C84;
    }
L_08A41C84:
    ctx.set_gpr(2, rt.memory().aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(4)));
    ctx.set_gpr(2, ctx.gpr[2] + static_cast<std::uint32_t>(-1));
    rt.memory().aot_store32(ctx.gpr[4] + static_cast<std::uint32_t>(4), ctx.gpr[2]);
    ctx.set_gpr(2, ctx.gpr[2] << 10u);
    ctx.set_gpr(2, ctx.gpr[2] >> 10u);
    { const bool branch_taken = ctx.gpr[2] != 0u;
    // nop
      if (branch_taken) {
          goto L_08A41CA8;
      }
      goto L_08A41CA0;
    }
L_08A41CA0:
    ctx.set_gpr(31, 0x08A41CA8u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0080_entry, 80u, 556u, 0x089467C8u>(ctx, &aot_mem) && ctx.pc == 0x08A41CA8u) goto L_08A41CA8;
    return;
L_08A41CA8:
    ctx.set_gpr(2, 2246u << 16u);
    rt.memory().aot_store32(ctx.gpr[2] + static_cast<std::uint32_t>(-21968), 0u);
    goto L_08A41CB0;
L_08A41CB0:
    ctx.set_gpr(2, 2246u << 16u);
    ctx.set_gpr(4, rt.memory().aot_load32(ctx.gpr[2] + static_cast<std::uint32_t>(-21964)));
    { const bool branch_taken = ctx.gpr[4] == 0u;
    // nop
      if (branch_taken) {
          goto L_08A41CEC;
      }
      goto L_08A41CC0;
    }
L_08A41CC0:
    ctx.set_gpr(2, rt.memory().aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(4)));
    ctx.set_gpr(2, ctx.gpr[2] + static_cast<std::uint32_t>(-1));
    rt.memory().aot_store32(ctx.gpr[4] + static_cast<std::uint32_t>(4), ctx.gpr[2]);
    ctx.set_gpr(2, ctx.gpr[2] << 10u);
    ctx.set_gpr(2, ctx.gpr[2] >> 10u);
    { const bool branch_taken = ctx.gpr[2] != 0u;
    // nop
      if (branch_taken) {
          goto L_08A41CE4;
      }
      goto L_08A41CDC;
    }
L_08A41CDC:
    ctx.set_gpr(31, 0x08A41CE4u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0080_entry, 80u, 556u, 0x089467C8u>(ctx, &aot_mem) && ctx.pc == 0x08A41CE4u) goto L_08A41CE4;
    return;
L_08A41CE4:
    ctx.set_gpr(2, 2246u << 16u);
    rt.memory().aot_store32(ctx.gpr[2] + static_cast<std::uint32_t>(-21964), 0u);
    goto L_08A41CEC;
L_08A41CEC:
    ctx.set_gpr(2, 2246u << 16u);
    ctx.set_gpr(4, rt.memory().aot_load32(ctx.gpr[2] + static_cast<std::uint32_t>(-21952)));
    { const bool branch_taken = ctx.gpr[4] == 0u;
    // nop
      if (branch_taken) {
          goto L_08A41D28;
      }
      goto L_08A41CFC;
    }
L_08A41CFC:
    ctx.set_gpr(2, rt.memory().aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(4)));
    ctx.set_gpr(2, ctx.gpr[2] + static_cast<std::uint32_t>(-1));
    rt.memory().aot_store32(ctx.gpr[4] + static_cast<std::uint32_t>(4), ctx.gpr[2]);
    ctx.set_gpr(2, ctx.gpr[2] << 10u);
    ctx.set_gpr(2, ctx.gpr[2] >> 10u);
    { const bool branch_taken = ctx.gpr[2] != 0u;
    // nop
      if (branch_taken) {
          goto L_08A41D20;
      }
      goto L_08A41D18;
    }
L_08A41D18:
    ctx.set_gpr(31, 0x08A41D20u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0080_entry, 80u, 556u, 0x089467C8u>(ctx, &aot_mem) && ctx.pc == 0x08A41D20u) goto L_08A41D20;
    return;
L_08A41D20:
    ctx.set_gpr(2, 2246u << 16u);
    rt.memory().aot_store32(ctx.gpr[2] + static_cast<std::uint32_t>(-21952), 0u);
    goto L_08A41D28;
L_08A41D28:
    ctx.set_gpr(2, 2246u << 16u);
    ctx.set_gpr(4, rt.memory().aot_load32(ctx.gpr[2] + static_cast<std::uint32_t>(-21948)));
    { const bool branch_taken = ctx.gpr[4] == 0u;
    // nop
      if (branch_taken) {
          goto L_08A41D64;
      }
      goto L_08A41D38;
    }
L_08A41D38:
    ctx.set_gpr(2, rt.memory().aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(4)));
    ctx.set_gpr(2, ctx.gpr[2] + static_cast<std::uint32_t>(-1));
    rt.memory().aot_store32(ctx.gpr[4] + static_cast<std::uint32_t>(4), ctx.gpr[2]);
    ctx.set_gpr(2, ctx.gpr[2] << 10u);
    ctx.set_gpr(2, ctx.gpr[2] >> 10u);
    { const bool branch_taken = ctx.gpr[2] != 0u;
    // nop
      if (branch_taken) {
          goto L_08A41D5C;
      }
      goto L_08A41D54;
    }
L_08A41D54:
    ctx.set_gpr(31, 0x08A41D5Cu);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0080_entry, 80u, 556u, 0x089467C8u>(ctx, &aot_mem) && ctx.pc == 0x08A41D5Cu) goto L_08A41D5C;
    return;
L_08A41D5C:
    ctx.set_gpr(2, 2246u << 16u);
    rt.memory().aot_store32(ctx.gpr[2] + static_cast<std::uint32_t>(-21948), 0u);
    goto L_08A41D64;
L_08A41D64:
    ctx.set_gpr(2, 2246u << 16u);
    ctx.set_gpr(4, rt.memory().aot_load32(ctx.gpr[2] + static_cast<std::uint32_t>(-21944)));
    { const bool branch_taken = ctx.gpr[4] == 0u;
    // nop
      if (branch_taken) {
          goto L_08A41DA0;
      }
      goto L_08A41D74;
    }
L_08A41D74:
    ctx.set_gpr(2, rt.memory().aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(4)));
    ctx.set_gpr(2, ctx.gpr[2] + static_cast<std::uint32_t>(-1));
    rt.memory().aot_store32(ctx.gpr[4] + static_cast<std::uint32_t>(4), ctx.gpr[2]);
    ctx.set_gpr(2, ctx.gpr[2] << 10u);
    ctx.set_gpr(2, ctx.gpr[2] >> 10u);
    { const bool branch_taken = ctx.gpr[2] != 0u;
    // nop
      if (branch_taken) {
          goto L_08A41D98;
      }
      goto L_08A41D90;
    }
L_08A41D90:
    ctx.set_gpr(31, 0x08A41D98u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0080_entry, 80u, 556u, 0x089467C8u>(ctx, &aot_mem) && ctx.pc == 0x08A41D98u) goto L_08A41D98;
    return;
L_08A41D98:
    ctx.set_gpr(2, 2246u << 16u);
    rt.memory().aot_store32(ctx.gpr[2] + static_cast<std::uint32_t>(-21944), 0u);
    goto L_08A41DA0;
L_08A41DA0:
    ctx.set_gpr(2, 2246u << 16u);
    ctx.set_gpr(4, rt.memory().aot_load32(ctx.gpr[2] + static_cast<std::uint32_t>(-21940)));
    { const bool branch_taken = ctx.gpr[4] == 0u;
    // nop
      if (branch_taken) {
          goto L_08A41DDC;
      }
      goto L_08A41DB0;
    }
L_08A41DB0:
    ctx.set_gpr(2, rt.memory().aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(4)));
    ctx.set_gpr(2, ctx.gpr[2] + static_cast<std::uint32_t>(-1));
    rt.memory().aot_store32(ctx.gpr[4] + static_cast<std::uint32_t>(4), ctx.gpr[2]);
    ctx.set_gpr(2, ctx.gpr[2] << 10u);
    ctx.set_gpr(2, ctx.gpr[2] >> 10u);
    { const bool branch_taken = ctx.gpr[2] != 0u;
    // nop
      if (branch_taken) {
          goto L_08A41DD4;
      }
      goto L_08A41DCC;
    }
L_08A41DCC:
    ctx.set_gpr(31, 0x08A41DD4u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0080_entry, 80u, 556u, 0x089467C8u>(ctx, &aot_mem) && ctx.pc == 0x08A41DD4u) goto L_08A41DD4;
    return;
L_08A41DD4:
    ctx.set_gpr(2, 2246u << 16u);
    rt.memory().aot_store32(ctx.gpr[2] + static_cast<std::uint32_t>(-21940), 0u);
    goto L_08A41DDC;
L_08A41DDC:
    ctx.set_gpr(2, 2246u << 16u);
    ctx.set_gpr(4, rt.memory().aot_load32(ctx.gpr[2] + static_cast<std::uint32_t>(-21936)));
    { const bool branch_taken = ctx.gpr[4] == 0u;
    // nop
      if (branch_taken) {
          goto L_08A41E18;
      }
      goto L_08A41DEC;
    }
L_08A41DEC:
    ctx.set_gpr(2, rt.memory().aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(4)));
    ctx.set_gpr(2, ctx.gpr[2] + static_cast<std::uint32_t>(-1));
    rt.memory().aot_store32(ctx.gpr[4] + static_cast<std::uint32_t>(4), ctx.gpr[2]);
    ctx.set_gpr(2, ctx.gpr[2] << 10u);
    ctx.set_gpr(2, ctx.gpr[2] >> 10u);
    { const bool branch_taken = ctx.gpr[2] != 0u;
    // nop
      if (branch_taken) {
          goto L_08A41E10;
      }
      goto L_08A41E08;
    }
L_08A41E08:
    ctx.set_gpr(31, 0x08A41E10u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0080_entry, 80u, 556u, 0x089467C8u>(ctx, &aot_mem) && ctx.pc == 0x08A41E10u) goto L_08A41E10;
    return;
L_08A41E10:
    ctx.set_gpr(2, 2246u << 16u);
    rt.memory().aot_store32(ctx.gpr[2] + static_cast<std::uint32_t>(-21936), 0u);
    goto L_08A41E18;
L_08A41E18:
    ctx.set_gpr(2, 2246u << 16u);
    ctx.set_gpr(4, rt.memory().aot_load32(ctx.gpr[2] + static_cast<std::uint32_t>(-21932)));
    { const bool branch_taken = ctx.gpr[4] == 0u;
    // nop
      if (branch_taken) {
          goto L_08A41E54;
      }
      goto L_08A41E28;
    }
L_08A41E28:
    ctx.set_gpr(2, rt.memory().aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(4)));
    ctx.set_gpr(2, ctx.gpr[2] + static_cast<std::uint32_t>(-1));
    rt.memory().aot_store32(ctx.gpr[4] + static_cast<std::uint32_t>(4), ctx.gpr[2]);
    ctx.set_gpr(2, ctx.gpr[2] << 10u);
    ctx.set_gpr(2, ctx.gpr[2] >> 10u);
    { const bool branch_taken = ctx.gpr[2] != 0u;
    // nop
      if (branch_taken) {
          goto L_08A41E4C;
      }
      goto L_08A41E44;
    }
L_08A41E44:
    ctx.set_gpr(31, 0x08A41E4Cu);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0080_entry, 80u, 556u, 0x089467C8u>(ctx, &aot_mem) && ctx.pc == 0x08A41E4Cu) goto L_08A41E4C;
    return;
L_08A41E4C:
    ctx.set_gpr(2, 2246u << 16u);
    rt.memory().aot_store32(ctx.gpr[2] + static_cast<std::uint32_t>(-21932), 0u);
    goto L_08A41E54;
L_08A41E54:
    ctx.set_gpr(2, 2246u << 16u);
    ctx.set_gpr(4, rt.memory().aot_load32(ctx.gpr[2] + static_cast<std::uint32_t>(-21928)));
    { const bool branch_taken = ctx.gpr[4] == 0u;
    // nop
      if (branch_taken) {
          goto L_08A41E90;
      }
      goto L_08A41E64;
    }
L_08A41E64:
    ctx.set_gpr(2, rt.memory().aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(4)));
    ctx.set_gpr(2, ctx.gpr[2] + static_cast<std::uint32_t>(-1));
    rt.memory().aot_store32(ctx.gpr[4] + static_cast<std::uint32_t>(4), ctx.gpr[2]);
    ctx.set_gpr(2, ctx.gpr[2] << 10u);
    ctx.set_gpr(2, ctx.gpr[2] >> 10u);
    { const bool branch_taken = ctx.gpr[2] != 0u;
    // nop
      if (branch_taken) {
          goto L_08A41E88;
      }
      goto L_08A41E80;
    }
L_08A41E80:
    ctx.set_gpr(31, 0x08A41E88u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0080_entry, 80u, 556u, 0x089467C8u>(ctx, &aot_mem) && ctx.pc == 0x08A41E88u) goto L_08A41E88;
    return;
L_08A41E88:
    ctx.set_gpr(2, 2246u << 16u);
    rt.memory().aot_store32(ctx.gpr[2] + static_cast<std::uint32_t>(-21928), 0u);
    goto L_08A41E90;
L_08A41E90:
    ctx.set_gpr(2, 2246u << 16u);
    ctx.set_gpr(4, rt.memory().aot_load32(ctx.gpr[2] + static_cast<std::uint32_t>(-21924)));
    { const bool branch_taken = ctx.gpr[4] == 0u;
    // nop
      if (branch_taken) {
          goto L_08A41ECC;
      }
      goto L_08A41EA0;
    }
L_08A41EA0:
    ctx.set_gpr(2, rt.memory().aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(4)));
    ctx.set_gpr(2, ctx.gpr[2] + static_cast<std::uint32_t>(-1));
    rt.memory().aot_store32(ctx.gpr[4] + static_cast<std::uint32_t>(4), ctx.gpr[2]);
    ctx.set_gpr(2, ctx.gpr[2] << 10u);
    ctx.set_gpr(2, ctx.gpr[2] >> 10u);
    { const bool branch_taken = ctx.gpr[2] != 0u;
    // nop
      if (branch_taken) {
          goto L_08A41EC4;
      }
      goto L_08A41EBC;
    }
L_08A41EBC:
    ctx.set_gpr(31, 0x08A41EC4u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0080_entry, 80u, 556u, 0x089467C8u>(ctx, &aot_mem) && ctx.pc == 0x08A41EC4u) goto L_08A41EC4;
    return;
L_08A41EC4:
    ctx.set_gpr(2, 2246u << 16u);
    rt.memory().aot_store32(ctx.gpr[2] + static_cast<std::uint32_t>(-21924), 0u);
    goto L_08A41ECC;
L_08A41ECC:
    ctx.set_gpr(2, 2246u << 16u);
    ctx.set_gpr(4, rt.memory().aot_load32(ctx.gpr[2] + static_cast<std::uint32_t>(-21960)));
    { const bool branch_taken = ctx.gpr[4] == 0u;
    // nop
      if (branch_taken) {
          goto L_08A41F08;
      }
      goto L_08A41EDC;
    }
L_08A41EDC:
    ctx.set_gpr(2, rt.memory().aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(4)));
    ctx.set_gpr(2, ctx.gpr[2] + static_cast<std::uint32_t>(-1));
    rt.memory().aot_store32(ctx.gpr[4] + static_cast<std::uint32_t>(4), ctx.gpr[2]);
    ctx.set_gpr(2, ctx.gpr[2] << 10u);
    ctx.set_gpr(2, ctx.gpr[2] >> 10u);
    { const bool branch_taken = ctx.gpr[2] != 0u;
    // nop
      if (branch_taken) {
          goto L_08A41F00;
      }
      goto L_08A41EF8;
    }
L_08A41EF8:
    ctx.set_gpr(31, 0x08A41F00u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0080_entry, 80u, 556u, 0x089467C8u>(ctx, &aot_mem) && ctx.pc == 0x08A41F00u) goto L_08A41F00;
    return;
L_08A41F00:
    ctx.set_gpr(2, 2246u << 16u);
    rt.memory().aot_store32(ctx.gpr[2] + static_cast<std::uint32_t>(-21960), 0u);
    goto L_08A41F08;
L_08A41F08:
    ctx.set_gpr(2, 2246u << 16u);
    ctx.set_gpr(4, rt.memory().aot_load32(ctx.gpr[2] + static_cast<std::uint32_t>(-21956)));
    { const bool branch_taken = ctx.gpr[4] == 0u;
    // nop
      if (branch_taken) {
          goto L_08A41F44;
      }
      goto L_08A41F18;
    }
L_08A41F18:
    ctx.set_gpr(2, rt.memory().aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(4)));
    ctx.set_gpr(2, ctx.gpr[2] + static_cast<std::uint32_t>(-1));
    rt.memory().aot_store32(ctx.gpr[4] + static_cast<std::uint32_t>(4), ctx.gpr[2]);
    ctx.set_gpr(2, ctx.gpr[2] << 10u);
    ctx.set_gpr(2, ctx.gpr[2] >> 10u);
    { const bool branch_taken = ctx.gpr[2] != 0u;
    // nop
      if (branch_taken) {
          goto L_08A41F3C;
      }
      goto L_08A41F34;
    }
L_08A41F34:
    ctx.set_gpr(31, 0x08A41F3Cu);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0080_entry, 80u, 556u, 0x089467C8u>(ctx, &aot_mem) && ctx.pc == 0x08A41F3Cu) goto L_08A41F3C;
    return;
L_08A41F3C:
    ctx.set_gpr(2, 2246u << 16u);
    rt.memory().aot_store32(ctx.gpr[2] + static_cast<std::uint32_t>(-21956), 0u);
    goto L_08A41F44;
L_08A41F44:
    ctx.set_gpr(2, 2246u << 16u);
    ctx.set_gpr(4, rt.memory().aot_load32(ctx.gpr[2] + static_cast<std::uint32_t>(-21920)));
    { const bool branch_taken = ctx.gpr[4] == 0u;
    // nop
      if (branch_taken) {
          goto L_08A41F80;
      }
      goto L_08A41F54;
    }
L_08A41F54:
    ctx.set_gpr(2, rt.memory().aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(4)));
    ctx.set_gpr(2, ctx.gpr[2] + static_cast<std::uint32_t>(-1));
    rt.memory().aot_store32(ctx.gpr[4] + static_cast<std::uint32_t>(4), ctx.gpr[2]);
    ctx.set_gpr(2, ctx.gpr[2] << 10u);
    ctx.set_gpr(2, ctx.gpr[2] >> 10u);
    { const bool branch_taken = ctx.gpr[2] != 0u;
    // nop
      if (branch_taken) {
          goto L_08A41F78;
      }
      goto L_08A41F70;
    }
L_08A41F70:
    ctx.set_gpr(31, 0x08A41F78u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0080_entry, 80u, 556u, 0x089467C8u>(ctx, &aot_mem) && ctx.pc == 0x08A41F78u) goto L_08A41F78;
    return;
L_08A41F78:
    ctx.set_gpr(2, 2246u << 16u);
    rt.memory().aot_store32(ctx.gpr[2] + static_cast<std::uint32_t>(-21920), 0u);
    goto L_08A41F80;
L_08A41F80:
    ctx.set_gpr(2, 2246u << 16u);
    ctx.set_gpr(4, rt.memory().aot_load32(ctx.gpr[2] + static_cast<std::uint32_t>(-21916)));
    { const bool branch_taken = ctx.gpr[4] == 0u;
    // nop
      if (branch_taken) {
          goto L_08A41FBC;
      }
      goto L_08A41F90;
    }
L_08A41F90:
    ctx.set_gpr(2, rt.memory().aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(4)));
    ctx.set_gpr(2, ctx.gpr[2] + static_cast<std::uint32_t>(-1));
    rt.memory().aot_store32(ctx.gpr[4] + static_cast<std::uint32_t>(4), ctx.gpr[2]);
    ctx.set_gpr(2, ctx.gpr[2] << 10u);
    ctx.set_gpr(2, ctx.gpr[2] >> 10u);
    { const bool branch_taken = ctx.gpr[2] != 0u;
    // nop
      if (branch_taken) {
          goto L_08A41FB4;
      }
      goto L_08A41FAC;
    }
L_08A41FAC:
    ctx.set_gpr(31, 0x08A41FB4u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0080_entry, 80u, 556u, 0x089467C8u>(ctx, &aot_mem) && ctx.pc == 0x08A41FB4u) goto L_08A41FB4;
    return;
L_08A41FB4:
    ctx.set_gpr(2, 2246u << 16u);
    rt.memory().aot_store32(ctx.gpr[2] + static_cast<std::uint32_t>(-21916), 0u);
    goto L_08A41FBC;
L_08A41FBC:
    ctx.set_gpr(2, 2246u << 16u);
    ctx.set_gpr(4, rt.memory().aot_load32(ctx.gpr[2] + static_cast<std::uint32_t>(-21912)));
    { const bool branch_taken = ctx.gpr[4] == 0u;
    // nop
      if (branch_taken) {
          goto L_08A41FF8;
      }
      goto L_08A41FCC;
    }
L_08A41FCC:
    ctx.set_gpr(2, rt.memory().aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(4)));
    ctx.set_gpr(2, ctx.gpr[2] + static_cast<std::uint32_t>(-1));
    rt.memory().aot_store32(ctx.gpr[4] + static_cast<std::uint32_t>(4), ctx.gpr[2]);
    ctx.set_gpr(2, ctx.gpr[2] << 10u);
    ctx.set_gpr(2, ctx.gpr[2] >> 10u);
    { const bool branch_taken = ctx.gpr[2] != 0u;
    // nop
      if (branch_taken) {
          goto L_08A41FF0;
      }
      goto L_08A41FE8;
    }
L_08A41FE8:
    ctx.set_gpr(31, 0x08A41FF0u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0080_entry, 80u, 556u, 0x089467C8u>(ctx, &aot_mem) && ctx.pc == 0x08A41FF0u) goto L_08A41FF0;
    return;
L_08A41FF0:
    ctx.set_gpr(2, 2246u << 16u);
    rt.memory().aot_store32(ctx.gpr[2] + static_cast<std::uint32_t>(-21912), 0u);
    goto L_08A41FF8;
L_08A41FF8:
    ctx.set_gpr(2, 2246u << 16u);
    ctx.set_gpr(4, rt.memory().aot_load32(ctx.gpr[2] + static_cast<std::uint32_t>(-21908)));
    { const bool branch_taken = ctx.gpr[4] == 0u;
    // nop
      if (branch_taken) {
          goto L_08A42034;
      }
      goto L_08A42008;
    }
L_08A42008:
    ctx.set_gpr(2, rt.memory().aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(4)));
    ctx.set_gpr(2, ctx.gpr[2] + static_cast<std::uint32_t>(-1));
    rt.memory().aot_store32(ctx.gpr[4] + static_cast<std::uint32_t>(4), ctx.gpr[2]);
    ctx.set_gpr(2, ctx.gpr[2] << 10u);
    ctx.set_gpr(2, ctx.gpr[2] >> 10u);
    { const bool branch_taken = ctx.gpr[2] != 0u;
    // nop
      if (branch_taken) {
          goto L_08A4202C;
      }
      goto L_08A42024;
    }
L_08A42024:
    ctx.set_gpr(31, 0x08A4202Cu);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0080_entry, 80u, 556u, 0x089467C8u>(ctx, &aot_mem) && ctx.pc == 0x08A4202Cu) goto L_08A4202C;
    return;
L_08A4202C:
    ctx.set_gpr(2, 2246u << 16u);
    rt.memory().aot_store32(ctx.gpr[2] + static_cast<std::uint32_t>(-21908), 0u);
    goto L_08A42034;
L_08A42034:
    ctx.set_gpr(2, 2246u << 16u);
    ctx.set_gpr(4, rt.memory().aot_load32(ctx.gpr[2] + static_cast<std::uint32_t>(-21904)));
    { const bool branch_taken = ctx.gpr[4] == 0u;
    // nop
      if (branch_taken) {
          goto L_08A42070;
      }
      goto L_08A42044;
    }
L_08A42044:
    ctx.set_gpr(2, rt.memory().aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(4)));
    ctx.set_gpr(2, ctx.gpr[2] + static_cast<std::uint32_t>(-1));
    rt.memory().aot_store32(ctx.gpr[4] + static_cast<std::uint32_t>(4), ctx.gpr[2]);
    ctx.set_gpr(2, ctx.gpr[2] << 10u);
    ctx.set_gpr(2, ctx.gpr[2] >> 10u);
    { const bool branch_taken = ctx.gpr[2] != 0u;
    // nop
      if (branch_taken) {
          goto L_08A42068;
      }
      goto L_08A42060;
    }
L_08A42060:
    ctx.set_gpr(31, 0x08A42068u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0080_entry, 80u, 556u, 0x089467C8u>(ctx, &aot_mem) && ctx.pc == 0x08A42068u) goto L_08A42068;
    return;
L_08A42068:
    ctx.set_gpr(2, 2246u << 16u);
    rt.memory().aot_store32(ctx.gpr[2] + static_cast<std::uint32_t>(-21904), 0u);
    goto L_08A42070;
L_08A42070:
    ctx.set_gpr(2, 2246u << 16u);
    ctx.set_gpr(4, rt.memory().aot_load32(ctx.gpr[2] + static_cast<std::uint32_t>(-21900)));
    { const bool branch_taken = ctx.gpr[4] == 0u;
    // nop
      if (branch_taken) {
          goto L_08A420AC;
      }
      goto L_08A42080;
    }
L_08A42080:
    ctx.set_gpr(2, rt.memory().aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(4)));
    ctx.set_gpr(2, ctx.gpr[2] + static_cast<std::uint32_t>(-1));
    rt.memory().aot_store32(ctx.gpr[4] + static_cast<std::uint32_t>(4), ctx.gpr[2]);
    ctx.set_gpr(2, ctx.gpr[2] << 10u);
    ctx.set_gpr(2, ctx.gpr[2] >> 10u);
    { const bool branch_taken = ctx.gpr[2] != 0u;
    // nop
      if (branch_taken) {
          goto L_08A420A4;
      }
      goto L_08A4209C;
    }
L_08A4209C:
    ctx.set_gpr(31, 0x08A420A4u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0080_entry, 80u, 556u, 0x089467C8u>(ctx, &aot_mem) && ctx.pc == 0x08A420A4u) goto L_08A420A4;
    return;
L_08A420A4:
    ctx.set_gpr(2, 2246u << 16u);
    rt.memory().aot_store32(ctx.gpr[2] + static_cast<std::uint32_t>(-21900), 0u);
    goto L_08A420AC;
L_08A420AC:
    ctx.set_gpr(2, 2246u << 16u);
    ctx.set_gpr(4, rt.memory().aot_load32(ctx.gpr[2] + static_cast<std::uint32_t>(-21896)));
    { const bool branch_taken = ctx.gpr[4] == 0u;
    // nop
      if (branch_taken) {
          goto L_08A420E8;
      }
      goto L_08A420BC;
    }
L_08A420BC:
    ctx.set_gpr(2, rt.memory().aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(4)));
    ctx.set_gpr(2, ctx.gpr[2] + static_cast<std::uint32_t>(-1));
    rt.memory().aot_store32(ctx.gpr[4] + static_cast<std::uint32_t>(4), ctx.gpr[2]);
    ctx.set_gpr(2, ctx.gpr[2] << 10u);
    ctx.set_gpr(2, ctx.gpr[2] >> 10u);
    { const bool branch_taken = ctx.gpr[2] != 0u;
    // nop
      if (branch_taken) {
          goto L_08A420E0;
      }
      goto L_08A420D8;
    }
L_08A420D8:
    ctx.set_gpr(31, 0x08A420E0u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0080_entry, 80u, 556u, 0x089467C8u>(ctx, &aot_mem) && ctx.pc == 0x08A420E0u) goto L_08A420E0;
    return;
L_08A420E0:
    ctx.set_gpr(2, 2246u << 16u);
    rt.memory().aot_store32(ctx.gpr[2] + static_cast<std::uint32_t>(-21896), 0u);
    goto L_08A420E8;
L_08A420E8:
    ctx.set_gpr(4, ctx.gpr[16] + 0u);
    ctx.set_gpr(31, 0x08A420F4u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0145_entry, 145u, 225u, 0x08A491B0u>(ctx, &aot_mem) && ctx.pc == 0x08A420F4u) goto L_08A420F4;
    return;
L_08A420F4:
    ctx.set_gpr(31, rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(12)));
    ctx.set_gpr(16, rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(8)));
    ctx.set_gpr(29, ctx.gpr[29] + static_cast<std::uint32_t>(16));
    jump_target = ctx.gpr[31];
    // nop
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_08A42108:
    ctx.set_gpr(29, ctx.gpr[29] + static_cast<std::uint32_t>(-16));
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(12), ctx.gpr[31]);
    ctx.set_gpr(3, 2246u << 16u);
    ctx.set_gpr(4, rt.memory().aot_load32(ctx.gpr[3] + static_cast<std::uint32_t>(-22040)));
    { const bool branch_taken = ctx.gpr[4] == 0u;
    // nop
      if (branch_taken) {
          goto L_08A42130;
      }
      goto L_08A42120;
    }
L_08A42120:
    ctx.set_gpr(25, rt.memory().aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(0)));
    ctx.set_gpr(25, rt.memory().aot_load32(ctx.gpr[25] + static_cast<std::uint32_t>(112)));
    jump_target = ctx.gpr[25];
    ctx.set_gpr(31, 0x08A42130u);
    // nop
    ctx.pc = jump_target;
    if (rt.invoke_chained_call(ctx, &aot_mem) && ctx.pc == 0x08A42130u) goto L_08A42130;
    return;
L_08A42130:
    ctx.set_gpr(3, 2246u << 16u);
    ctx.set_gpr(4, rt.memory().aot_load32(ctx.gpr[3] + static_cast<std::uint32_t>(-22036)));
    { const bool branch_taken = ctx.gpr[4] == 0u;
    // nop
      if (branch_taken) {
          goto L_08A42150;
      }
      goto L_08A42140;
    }
L_08A42140:
    ctx.set_gpr(25, rt.memory().aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(0)));
    ctx.set_gpr(25, rt.memory().aot_load32(ctx.gpr[25] + static_cast<std::uint32_t>(112)));
    jump_target = ctx.gpr[25];
    ctx.set_gpr(31, 0x08A42150u);
    // nop
    ctx.pc = jump_target;
    if (rt.invoke_chained_call(ctx, &aot_mem) && ctx.pc == 0x08A42150u) goto L_08A42150;
    return;
L_08A42150:
    ctx.set_gpr(3, 2246u << 16u);
    ctx.set_gpr(4, rt.memory().aot_load32(ctx.gpr[3] + static_cast<std::uint32_t>(-22032)));
    { const bool branch_taken = ctx.gpr[4] == 0u;
    // nop
      if (branch_taken) {
          goto L_08A42170;
      }
      goto L_08A42160;
    }
L_08A42160:
    ctx.set_gpr(25, rt.memory().aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(0)));
    ctx.set_gpr(25, rt.memory().aot_load32(ctx.gpr[25] + static_cast<std::uint32_t>(112)));
    jump_target = ctx.gpr[25];
    ctx.set_gpr(31, 0x08A42170u);
    // nop
    ctx.pc = jump_target;
    if (rt.invoke_chained_call(ctx, &aot_mem) && ctx.pc == 0x08A42170u) goto L_08A42170;
    return;
L_08A42170:
    ctx.set_gpr(31, rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(12)));
    ctx.set_gpr(29, ctx.gpr[29] + static_cast<std::uint32_t>(16));
    jump_target = ctx.gpr[31];
    // nop
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_08A42180:
    ctx.set_gpr(29, ctx.gpr[29] + static_cast<std::uint32_t>(-16));
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(12), ctx.gpr[31]);
    ctx.set_gpr(4, 0u + 0u);
    ctx.set_gpr(31, 0x08A42194u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0153_entry, 153u, 583u, 0x08A6B5E4u>(ctx, &aot_mem) && ctx.pc == 0x08A42194u) goto L_08A42194;
    return;
L_08A42194:
    ctx.set_gpr(31, rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(12)));
    ctx.set_gpr(29, ctx.gpr[29] + static_cast<std::uint32_t>(16));
    jump_target = ctx.gpr[31];
    // nop
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_08A421A4:
    ctx.set_gpr(29, ctx.gpr[29] + static_cast<std::uint32_t>(-16));
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(12), ctx.gpr[31]);
    ctx.set_gpr(4, 0u + 0u);
    ctx.set_gpr(31, 0x08A421B8u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0153_entry, 153u, 585u, 0x08A6B604u>(ctx, &aot_mem) && ctx.pc == 0x08A421B8u) goto L_08A421B8;
    return;
L_08A421B8:
    ctx.set_gpr(31, rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(12)));
    ctx.set_gpr(29, ctx.gpr[29] + static_cast<std::uint32_t>(16));
    jump_target = ctx.gpr[31];
    // nop
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_08A421C8:
    ctx.set_gpr(5, 0u + static_cast<std::uint32_t>(1));
    rt.memory().aot_store8(ctx.gpr[4] + static_cast<std::uint32_t>(8), static_cast<std::uint8_t>(ctx.gpr[5]));
    ctx.set_gpr(3, 0u + static_cast<std::uint32_t>(3));
    rt.memory().aot_store8(ctx.gpr[4] + static_cast<std::uint32_t>(9), static_cast<std::uint8_t>(ctx.gpr[3]));
    rt.memory().aot_store8(ctx.gpr[4] + static_cast<std::uint32_t>(10), static_cast<std::uint8_t>(ctx.gpr[5]));
    jump_target = ctx.gpr[31];
    // nop
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_08A421E4:
    ctx.set_gpr(29, ctx.gpr[29] + static_cast<std::uint32_t>(-48));
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(12), ctx.gpr[31]);
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(8), ctx.gpr[17]);
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(4), ctx.gpr[16]);
    ctx.set_gpr(17, ctx.gpr[5] + 0u);
    ctx.set_gpr(2, ctx.gpr[6] + 0u);
    ctx.set_gpr(10, ctx.gpr[8] + 0u);
    ctx.set_gpr(5, ctx.gpr[29] + static_cast<std::uint32_t>(32));
    ctx.set_gpr(6, ctx.gpr[29] + static_cast<std::uint32_t>(20));
    ctx.set_gpr(8, ctx.gpr[2] + 0u);
    ctx.set_gpr(9, ctx.gpr[7] + 0u);
    ctx.set_gpr(25, rt.memory().aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(0)));
    ctx.set_gpr(25, rt.memory().aot_load32(ctx.gpr[25] + static_cast<std::uint32_t>(108)));
    jump_target = ctx.gpr[25];
    ctx.set_gpr(31, 0x08A42220u);
    // nop
    ctx.pc = jump_target;
    if (rt.invoke_chained_call(ctx, &aot_mem) && ctx.pc == 0x08A42220u) goto L_08A42220;
    return;
L_08A42220:
    ctx.set_gpr(16, ctx.gpr[2] & 255u);
    ctx.set_gpr(4, ctx.gpr[29] + static_cast<std::uint32_t>(32));
    ctx.set_gpr(5, ctx.gpr[17] + 0u);
    ctx.set_gpr(31, 0x08A42234u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0127_entry, 127u, 175u, 0x08A024A4u>(ctx, &aot_mem) && ctx.pc == 0x08A42234u) goto L_08A42234;
    return;
L_08A42234:
    ctx.set_gpr(4, ctx.gpr[17] + 0u);
    ctx.set_gpr(5, ctx.gpr[29] + static_cast<std::uint32_t>(20));
    ctx.set_gpr(31, 0x08A42244u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0126_entry, 126u, 749u, 0x089FFD2Cu>(ctx, &aot_mem) && ctx.pc == 0x08A42244u) goto L_08A42244;
    return;
L_08A42244:
    ctx.set_gpr(2, ctx.gpr[16] + 0u);
    ctx.set_gpr(31, rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(12)));
    ctx.set_gpr(17, rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(8)));
    ctx.set_gpr(16, rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(4)));
    ctx.set_gpr(29, ctx.gpr[29] + static_cast<std::uint32_t>(48));
    jump_target = ctx.gpr[31];
    // nop
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_08A42260:
    ctx.set_gpr(29, ctx.gpr[29] + static_cast<std::uint32_t>(-16));
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(12), ctx.gpr[31]);
    ctx.set_gpr(8, ctx.gpr[10] + 0u);
    ctx.set_gpr(25, rt.memory().aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(0)));
    ctx.set_gpr(25, rt.memory().aot_load32(ctx.gpr[25] + static_cast<std::uint32_t>(92)));
    jump_target = ctx.gpr[25];
    ctx.set_gpr(31, 0x08A4227Cu);
    // nop
    ctx.pc = jump_target;
    if (rt.invoke_chained_call(ctx, &aot_mem) && ctx.pc == 0x08A4227Cu) goto L_08A4227C;
    return;
L_08A4227C:
    ctx.set_gpr(31, rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(12)));
    ctx.set_gpr(29, ctx.gpr[29] + static_cast<std::uint32_t>(16));
    jump_target = ctx.gpr[31];
    // nop
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_08A4228C:
    ctx.set_gpr(29, ctx.gpr[29] + static_cast<std::uint32_t>(-64));
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(44), ctx.gpr[31]);
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(40), ctx.gpr[20]);
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(36), ctx.gpr[19]);
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(32), ctx.gpr[18]);
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(28), ctx.gpr[17]);
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(24), ctx.gpr[16]);
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(20), std::bit_cast<std::uint32_t>(ctx.fpr[21]));
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(16), std::bit_cast<std::uint32_t>(ctx.fpr[20]));
    ctx.set_gpr(20, ctx.gpr[4] + 0u);
    ctx.set_gpr(19, ctx.gpr[5] + 0u);
    ctx.set_gpr(18, ctx.gpr[6] + 0u);
    ctx.set_gpr(17, ctx.gpr[7] + 0u);
    ctx.set_gpr(16, ctx.gpr[8] + 0u);
    ctx.set_gpr(3, rt.memory().aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(24)));
    ctx.set_gpr(2, rt.memory().aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(28)));
    { const bool branch_taken = ctx.gpr[2] != ctx.gpr[17];
    // nop
      if (branch_taken) {
          goto L_08A422E8;
      }
      goto L_08A422D4;
    }
L_08A422D4:
    { const bool branch_taken = ctx.gpr[3] != ctx.gpr[18];
    // nop
      if (branch_taken) {
          goto L_08A422E8;
      }
      goto L_08A422DC;
    }
L_08A422DC:
    ctx.fpr[20] = std::bit_cast<float>(rt.memory().aot_load32(ctx.gpr[20] + static_cast<std::uint32_t>(16)));
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_08A42410;
      }
      goto L_08A422E8;
    }
L_08A422E8:
    ctx.set_gpr(3, ctx.gpr[18] >> 18u);
    ctx.set_gpr(2, ctx.gpr[17] << 14u);
    ctx.set_gpr(2, ctx.gpr[2] | ctx.gpr[3]);
    ctx.fpr[0] = std::bit_cast<float>(ctx.gpr[2]);
    ctx.fpr[1] = static_cast<float>(static_cast<std::int32_t>(ctx.fpr_bits(0)));
    ctx.fpr[0] = std::bit_cast<float>(rt.memory().aot_load32(ctx.gpr[28] + static_cast<std::uint32_t>(-32252)));
    { const float fs = ctx.fpr[0]; const float ft = ctx.fpr[1]; if ((std::isinf(fs) && ft == 0.0f) || (std::isinf(ft) && fs == 0.0f)) ctx.set_fpr_bits(20, 0x7FC00000u); else ctx.fpr[20] = fs * ft; }
    ctx.set_gpr(4, rt.memory().aot_load32(ctx.gpr[20] + static_cast<std::uint32_t>(32)));
    ctx.set_gpr(25, rt.memory().aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(0)));
    ctx.set_gpr(25, rt.memory().aot_load32(ctx.gpr[25] + static_cast<std::uint32_t>(24)));
    jump_target = ctx.gpr[25];
    ctx.set_gpr(31, 0x08A42318u);
    // nop
    ctx.pc = jump_target;
    if (rt.invoke_chained_call(ctx, &aot_mem) && ctx.pc == 0x08A42318u) goto L_08A42318;
    return;
L_08A42318:
    ctx.set_fpr_bits(21, ctx.fpr_bits(0));
    ctx.set_gpr(3, rt.memory().aot_load32(ctx.gpr[20] + static_cast<std::uint32_t>(12)));
    ctx.set_gpr(2, 0u + static_cast<std::uint32_t>(2));
    { const bool branch_taken = ctx.gpr[3] == ctx.gpr[2];
    // nop
      if (branch_taken) {
          goto L_08A423C8;
      }
      goto L_08A4232C;
    }
L_08A4232C:
    { const bool branch_taken = ctx.gpr[3] == 0u;
    // nop
      if (branch_taken) {
          goto L_08A423AC;
      }
      goto L_08A42334;
    }
L_08A42334:
    ctx.set_gpr(2, 0u + static_cast<std::uint32_t>(3));
    { const bool branch_taken = ctx.gpr[3] == ctx.gpr[2];
    // nop
      if (branch_taken) {
          goto L_08A423AC;
      }
      goto L_08A42340;
    }
L_08A42340:
    ctx.set_gpr(2, 0u + static_cast<std::uint32_t>(1));
    { const bool branch_taken = ctx.gpr[3] == ctx.gpr[2];
    // nop
      if (branch_taken) {
          goto L_08A42354;
      }
      goto L_08A4234C;
    }
L_08A4234C:
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_08A423FC;
      }
      goto L_08A42354;
    }
L_08A42354:
    ctx.set_fpu_condition(((std::isnan(ctx.fpr[20]) || std::isnan(ctx.fpr[21])) || ctx.fpr[20] <= ctx.fpr[21]));
    // nop
    { const bool branch_taken = ctx.fpu_condition();
    // nop
      if (branch_taken) {
          goto L_08A42370;
      }
      goto L_08A42364;
    }
L_08A42364:
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(52), std::bit_cast<std::uint32_t>(ctx.fpr[21]));
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_08A42400;
      }
      goto L_08A42370;
    }
L_08A42370:
    ctx.fpr[0] = std::bit_cast<float>(0u);
    ctx.set_fpu_condition((ctx.fpr[20] < ctx.fpr[0]));
    // nop
    { const bool branch_taken = !ctx.fpu_condition();
    // nop
      if (branch_taken) {
          goto L_08A42390;
      }
      goto L_08A42384;
    }
L_08A42384:
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(52), std::bit_cast<std::uint32_t>(ctx.fpr[0]));
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_08A42400;
      }
      goto L_08A42390;
    }
L_08A42390:
    ctx.set_fpr_bits(12, ctx.fpr_bits(20));
    ctx.set_fpr_bits(13, ctx.fpr_bits(21));
    ctx.set_gpr(4, ctx.gpr[29] + static_cast<std::uint32_t>(52));
    ctx.set_gpr(31, 0x08A423A4u);
    // nop
    goto L_08A42504;
L_08A423A4:
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_08A42400;
      }
      goto L_08A423AC;
    }
L_08A423AC:
    ctx.set_fpr_bits(12, ctx.fpr_bits(20));
    ctx.set_fpr_bits(13, ctx.fpr_bits(21));
    ctx.set_gpr(4, ctx.gpr[29] + static_cast<std::uint32_t>(52));
    ctx.set_gpr(31, 0x08A423C0u);
    // nop
    goto L_08A42504;
L_08A423C0:
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_08A42400;
      }
      goto L_08A423C8;
    }
L_08A423C8:
    ctx.set_fpr_bits(12, ctx.fpr_bits(20));
    ctx.set_fpr_bits(13, ctx.fpr_bits(21));
    ctx.set_gpr(4, ctx.gpr[29] + static_cast<std::uint32_t>(52));
    ctx.set_gpr(31, 0x08A423DCu);
    // nop
    goto L_08A42504;
L_08A423DC:
    ctx.set_gpr(2, ctx.gpr[2] & 1u);
    { const bool branch_taken = ctx.gpr[2] == 0u;
    // nop
      if (branch_taken) {
          goto L_08A42400;
      }
      goto L_08A423E8;
    }
L_08A423E8:
    ctx.fpr[0] = std::bit_cast<float>(rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(52)));
    ctx.fpr[0] = ctx.fpr[21] - ctx.fpr[0];
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(52), std::bit_cast<std::uint32_t>(ctx.fpr[0]));
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_08A42400;
      }
      goto L_08A423FC;
    }
L_08A423FC:
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(52), 0u);
    goto L_08A42400;
L_08A42400:
    ctx.fpr[20] = std::bit_cast<float>(rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(52)));
    rt.memory().aot_store32(ctx.gpr[20] + static_cast<std::uint32_t>(16), std::bit_cast<std::uint32_t>(ctx.fpr[20]));
    rt.memory().aot_store32(ctx.gpr[20] + static_cast<std::uint32_t>(24), ctx.gpr[18]);
    rt.memory().aot_store32(ctx.gpr[20] + static_cast<std::uint32_t>(28), ctx.gpr[17]);
    goto L_08A42410;
L_08A42410:
    ctx.set_gpr(2, 2246u << 16u);
    ctx.set_gpr(17, rt.memory().aot_load32(ctx.gpr[2] + static_cast<std::uint32_t>(-21840)));
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(60), 0u);
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(56), 0u);
    ctx.set_gpr(4, ctx.gpr[17] + 0u);
    ctx.set_gpr(5, ctx.gpr[16] + 0u);
    ctx.set_fpr_bits(12, ctx.fpr_bits(20));
    ctx.set_gpr(6, ctx.gpr[29] + static_cast<std::uint32_t>(60));
    ctx.set_gpr(7, ctx.gpr[29] + static_cast<std::uint32_t>(56));
    ctx.set_gpr(31, 0x08A4243Cu);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0153_entry, 153u, 490u, 0x08A6AF3Cu>(ctx, &aot_mem) && ctx.pc == 0x08A4243Cu) goto L_08A4243C;
    return;
L_08A4243C:
    ctx.set_gpr(5, rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(60)));
    ctx.fpr[0] = std::bit_cast<float>(rt.memory().aot_load32(ctx.gpr[5] + static_cast<std::uint32_t>(28)));
    ctx.fpr[1] = ctx.fpr[20] - ctx.fpr[0];
    ctx.fpr[0] = std::bit_cast<float>(rt.memory().aot_load32(ctx.gpr[17] + static_cast<std::uint32_t>(36)));
    ctx.fpr[12] = ctx.fpr[1] / ctx.fpr[0];
    ctx.set_gpr(6, rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(56)));
    ctx.set_gpr(3, rt.memory().aot_load8(ctx.gpr[20] + static_cast<std::uint32_t>(9)));
    ctx.set_gpr(2, 0u + static_cast<std::uint32_t>(2));
    { const bool branch_taken = ctx.gpr[3] == ctx.gpr[2];
    // nop
      if (branch_taken) {
          goto L_08A424D4;
      }
      goto L_08A42464;
    }
L_08A42464:
    { const bool branch_taken = ctx.gpr[3] == 0u;
    // nop
      if (branch_taken) {
          goto L_08A424B4;
      }
      goto L_08A4246C;
    }
L_08A4246C:
    ctx.set_gpr(2, 0u + static_cast<std::uint32_t>(1));
    { const bool branch_taken = ctx.gpr[3] == ctx.gpr[2];
    // nop
      if (branch_taken) {
          goto L_08A424A0;
      }
      goto L_08A42478;
    }
L_08A42478:
    ctx.set_gpr(2, 0u + static_cast<std::uint32_t>(3));
    { const bool branch_taken = ctx.gpr[3] == ctx.gpr[2];
    // nop
      if (branch_taken) {
          goto L_08A4248C;
      }
      goto L_08A42484;
    }
L_08A42484:
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_08A424D4;
      }
      goto L_08A4248C;
    }
L_08A4248C:
    ctx.set_gpr(4, ctx.gpr[19] + 0u);
    ctx.set_gpr(31, 0x08A42498u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0127_entry, 127u, 196u, 0x08A0275Cu>(ctx, &aot_mem) && ctx.pc == 0x08A42498u) goto L_08A42498;
    return;
L_08A42498:
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_08A424D4;
      }
      goto L_08A424A0;
    }
L_08A424A0:
    ctx.set_gpr(4, ctx.gpr[19] + 0u);
    ctx.set_gpr(31, 0x08A424ACu);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0127_entry, 127u, 202u, 0x08A02A60u>(ctx, &aot_mem) && ctx.pc == 0x08A424ACu) goto L_08A424AC;
    return;
L_08A424AC:
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_08A424D4;
      }
      goto L_08A424B4;
    }
L_08A424B4:
    ctx.fpr[0] = std::bit_cast<float>(rt.memory().aot_load32(ctx.gpr[6] + static_cast<std::uint32_t>(0)));
    rt.memory().aot_store32(ctx.gpr[19] + static_cast<std::uint32_t>(0), std::bit_cast<std::uint32_t>(ctx.fpr[0]));
    ctx.fpr[0] = std::bit_cast<float>(rt.memory().aot_load32(ctx.gpr[6] + static_cast<std::uint32_t>(4)));
    rt.memory().aot_store32(ctx.gpr[19] + static_cast<std::uint32_t>(4), std::bit_cast<std::uint32_t>(ctx.fpr[0]));
    ctx.fpr[0] = std::bit_cast<float>(rt.memory().aot_load32(ctx.gpr[6] + static_cast<std::uint32_t>(8)));
    rt.memory().aot_store32(ctx.gpr[19] + static_cast<std::uint32_t>(8), std::bit_cast<std::uint32_t>(ctx.fpr[0]));
    ctx.fpr[0] = std::bit_cast<float>(rt.memory().aot_load32(ctx.gpr[6] + static_cast<std::uint32_t>(12)));
    rt.memory().aot_store32(ctx.gpr[19] + static_cast<std::uint32_t>(12), std::bit_cast<std::uint32_t>(ctx.fpr[0]));
    goto L_08A424D4;
L_08A424D4:
    ctx.set_gpr(2, 0u + static_cast<std::uint32_t>(1));
    ctx.set_gpr(31, rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(44)));
    ctx.set_gpr(20, rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(40)));
    ctx.set_gpr(19, rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(36)));
    ctx.set_gpr(18, rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(32)));
    ctx.set_gpr(17, rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(28)));
    ctx.set_gpr(16, rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(24)));
    ctx.fpr[21] = std::bit_cast<float>(rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(20)));
    ctx.fpr[20] = std::bit_cast<float>(rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(16)));
    ctx.set_gpr(29, ctx.gpr[29] + static_cast<std::uint32_t>(64));
    jump_target = ctx.gpr[31];
    // nop
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_08A42504:
    ctx.set_gpr(2, 2246u << 16u);
    ctx.fpr[0] = std::bit_cast<float>(rt.memory().aot_load32(ctx.gpr[2] + static_cast<std::uint32_t>(-21888)));
    ctx.set_fpu_condition((!(std::isnan(ctx.fpr[0]) || std::isnan(ctx.fpr[12])) && ctx.fpr[0] == ctx.fpr[12]));
    // nop
    { const bool branch_taken = !ctx.fpu_condition();
    // nop
      if (branch_taken) {
          goto L_08A42550;
      }
      goto L_08A4251C;
    }
L_08A4251C:
    ctx.set_gpr(2, 2246u << 16u);
    ctx.fpr[0] = std::bit_cast<float>(rt.memory().aot_load32(ctx.gpr[2] + static_cast<std::uint32_t>(-21884)));
    ctx.set_fpu_condition((!(std::isnan(ctx.fpr[13]) || std::isnan(ctx.fpr[0])) && ctx.fpr[13] == ctx.fpr[0]));
    // nop
    { const bool branch_taken = !ctx.fpu_condition();
    // nop
      if (branch_taken) {
          goto L_08A42550;
      }
      goto L_08A42534;
    }
L_08A42534:
    ctx.set_gpr(2, 2246u << 16u);
    ctx.fpr[0] = std::bit_cast<float>(rt.memory().aot_load32(ctx.gpr[2] + static_cast<std::uint32_t>(-21876)));
    rt.memory().aot_store32(ctx.gpr[4] + static_cast<std::uint32_t>(0), std::bit_cast<std::uint32_t>(ctx.fpr[0]));
    ctx.set_gpr(2, 2246u << 16u);
    ctx.set_gpr(2, rt.memory().aot_load32(ctx.gpr[2] + static_cast<std::uint32_t>(-21880)));
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_08A425B4;
      }
      goto L_08A42550;
    }
L_08A42550:
    ctx.set_gpr(2, 2246u << 16u);
    rt.memory().aot_store32(ctx.gpr[2] + static_cast<std::uint32_t>(-21888), std::bit_cast<std::uint32_t>(ctx.fpr[12]));
    ctx.set_gpr(2, 2246u << 16u);
    rt.memory().aot_store32(ctx.gpr[2] + static_cast<std::uint32_t>(-21884), std::bit_cast<std::uint32_t>(ctx.fpr[13]));
    ctx.fpr[0] = ctx.fpr[12] / ctx.fpr[13];
    ctx.set_fpr_bits(0, ctx.fpu_float_to_word(ctx.fpr[0], 1u));
    ctx.set_gpr(2, std::bit_cast<std::uint32_t>(ctx.fpr[0]));
    ctx.fpr[0] = static_cast<float>(static_cast<std::int32_t>(ctx.fpr_bits(0)));
    { const float fs = ctx.fpr[0]; const float ft = ctx.fpr[13]; if ((std::isinf(fs) && ft == 0.0f) || (std::isinf(ft) && fs == 0.0f)) ctx.set_fpr_bits(0, 0x7FC00000u); else ctx.fpr[0] = fs * ft; }
    ctx.fpr[1] = ctx.fpr[12] - ctx.fpr[0];
    ctx.set_gpr(3, 2246u << 16u);
    rt.memory().aot_store32(ctx.gpr[3] + static_cast<std::uint32_t>(-21876), std::bit_cast<std::uint32_t>(ctx.fpr[1]));
    ctx.fpr[0] = std::bit_cast<float>(0u);
    ctx.set_fpu_condition(((std::isnan(ctx.fpr[1]) || std::isnan(ctx.fpr[0])) || ctx.fpr[1] <= ctx.fpr[0]));
    // nop
    { const bool branch_taken = ctx.fpu_condition();
    // nop
      if (branch_taken) {
          goto L_08A4259C;
      }
      goto L_08A42594;
    }
L_08A42594:
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_08A425A0;
      }
      goto L_08A4259C;
    }
L_08A4259C:
    ctx.set_fpr_bits(1, ctx.fpr_bits(0));
    goto L_08A425A0;
L_08A425A0:
    ctx.set_gpr(3, 2246u << 16u);
    rt.memory().aot_store32(ctx.gpr[3] + static_cast<std::uint32_t>(-21876), std::bit_cast<std::uint32_t>(ctx.fpr[1]));
    rt.memory().aot_store32(ctx.gpr[4] + static_cast<std::uint32_t>(0), std::bit_cast<std::uint32_t>(ctx.fpr[1]));
    ctx.set_gpr(3, 2246u << 16u);
    rt.memory().aot_store32(ctx.gpr[3] + static_cast<std::uint32_t>(-21880), ctx.gpr[2]);
    goto L_08A425B4;
L_08A425B4:
    jump_target = ctx.gpr[31];
    // nop
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_08A425BC:
    ctx.set_gpr(29, ctx.gpr[29] + static_cast<std::uint32_t>(-16));
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(12), ctx.gpr[31]);
    ctx.set_gpr(8, ctx.gpr[10] + 0u);
    ctx.set_gpr(25, rt.memory().aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(0)));
    ctx.set_gpr(25, rt.memory().aot_load32(ctx.gpr[25] + static_cast<std::uint32_t>(100)));
    jump_target = ctx.gpr[25];
    ctx.set_gpr(31, 0x08A425D8u);
    // nop
    ctx.pc = jump_target;
    if (rt.invoke_chained_call(ctx, &aot_mem) && ctx.pc == 0x08A425D8u) goto L_08A425D8;
    return;
L_08A425D8:
    ctx.set_gpr(31, rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(12)));
    ctx.set_gpr(29, ctx.gpr[29] + static_cast<std::uint32_t>(16));
    jump_target = ctx.gpr[31];
    // nop
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_08A425E8:
    ctx.set_gpr(29, ctx.gpr[29] + static_cast<std::uint32_t>(-64));
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(44), ctx.gpr[31]);
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(40), ctx.gpr[21]);
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(36), ctx.gpr[20]);
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(32), ctx.gpr[19]);
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(28), ctx.gpr[18]);
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(24), ctx.gpr[17]);
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(20), ctx.gpr[16]);
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(12), std::bit_cast<std::uint32_t>(ctx.fpr[20]));
    ctx.set_gpr(20, ctx.gpr[4] + 0u);
    ctx.set_gpr(19, ctx.gpr[5] + 0u);
    ctx.set_gpr(18, ctx.gpr[6] + 0u);
    ctx.set_gpr(17, ctx.gpr[8] + 0u);
    ctx.set_gpr(16, ctx.gpr[9] + 0u);
    ctx.set_gpr(21, ctx.gpr[10] + 0u);
    ctx.set_gpr(3, rt.memory().aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(24)));
    ctx.set_gpr(2, rt.memory().aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(28)));
    { const bool branch_taken = ctx.gpr[2] != ctx.gpr[16];
    // nop
      if (branch_taken) {
          goto L_08A42648;
      }
      goto L_08A42634;
    }
L_08A42634:
    { const bool branch_taken = ctx.gpr[3] != ctx.gpr[17];
    // nop
      if (branch_taken) {
          goto L_08A42648;
      }
      goto L_08A4263C;
    }
L_08A4263C:
    ctx.fpr[20] = std::bit_cast<float>(rt.memory().aot_load32(ctx.gpr[20] + static_cast<std::uint32_t>(16)));
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_08A42764;
      }
      goto L_08A42648;
    }
L_08A42648:
    ctx.set_gpr(3, ctx.gpr[17] >> 18u);
    ctx.set_gpr(2, ctx.gpr[16] << 14u);
    ctx.set_gpr(2, ctx.gpr[2] | ctx.gpr[3]);
    ctx.fpr[0] = std::bit_cast<float>(ctx.gpr[2]);
    ctx.fpr[1] = static_cast<float>(static_cast<std::int32_t>(ctx.fpr_bits(0)));
    ctx.fpr[0] = std::bit_cast<float>(rt.memory().aot_load32(ctx.gpr[28] + static_cast<std::uint32_t>(-32252)));
    { const float fs = ctx.fpr[0]; const float ft = ctx.fpr[1]; if ((std::isinf(fs) && ft == 0.0f) || (std::isinf(ft) && fs == 0.0f)) ctx.set_fpr_bits(20, 0x7FC00000u); else ctx.fpr[20] = fs * ft; }
    ctx.set_gpr(4, rt.memory().aot_load32(ctx.gpr[20] + static_cast<std::uint32_t>(32)));
    ctx.set_gpr(25, rt.memory().aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(0)));
    ctx.set_gpr(25, rt.memory().aot_load32(ctx.gpr[25] + static_cast<std::uint32_t>(24)));
    jump_target = ctx.gpr[25];
    ctx.set_gpr(31, 0x08A42678u);
    // nop
    ctx.pc = jump_target;
    if (rt.invoke_chained_call(ctx, &aot_mem) && ctx.pc == 0x08A42678u) goto L_08A42678;
    return;
L_08A42678:
    ctx.set_fpr_bits(13, ctx.fpr_bits(0));
    ctx.set_gpr(3, rt.memory().aot_load32(ctx.gpr[20] + static_cast<std::uint32_t>(12)));
    ctx.set_gpr(2, 0u + static_cast<std::uint32_t>(2));
    { const bool branch_taken = ctx.gpr[3] == ctx.gpr[2];
    // nop
      if (branch_taken) {
          goto L_08A42720;
      }
      goto L_08A4268C;
    }
L_08A4268C:
    { const bool branch_taken = ctx.gpr[3] == 0u;
    // nop
      if (branch_taken) {
          goto L_08A42708;
      }
      goto L_08A42694;
    }
L_08A42694:
    ctx.set_gpr(2, 0u + static_cast<std::uint32_t>(3));
    { const bool branch_taken = ctx.gpr[3] == ctx.gpr[2];
    // nop
      if (branch_taken) {
          goto L_08A42708;
      }
      goto L_08A426A0;
    }
L_08A426A0:
    ctx.set_gpr(2, 0u + static_cast<std::uint32_t>(1));
    { const bool branch_taken = ctx.gpr[3] == ctx.gpr[2];
    // nop
      if (branch_taken) {
          goto L_08A426B4;
      }
      goto L_08A426AC;
    }
L_08A426AC:
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_08A42750;
      }
      goto L_08A426B4;
    }
L_08A426B4:
    ctx.set_fpu_condition(((std::isnan(ctx.fpr[20]) || std::isnan(ctx.fpr[13])) || ctx.fpr[20] <= ctx.fpr[13]));
    // nop
    { const bool branch_taken = ctx.fpu_condition();
    // nop
      if (branch_taken) {
          goto L_08A426D0;
      }
      goto L_08A426C4;
    }
L_08A426C4:
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(52), std::bit_cast<std::uint32_t>(ctx.fpr[13]));
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_08A42754;
      }
      goto L_08A426D0;
    }
L_08A426D0:
    ctx.fpr[0] = std::bit_cast<float>(0u);
    ctx.set_fpu_condition((ctx.fpr[20] < ctx.fpr[0]));
    // nop
    { const bool branch_taken = !ctx.fpu_condition();
    // nop
      if (branch_taken) {
          goto L_08A426F0;
      }
      goto L_08A426E4;
    }
L_08A426E4:
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(52), std::bit_cast<std::uint32_t>(ctx.fpr[0]));
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_08A42754;
      }
      goto L_08A426F0;
    }
L_08A426F0:
    ctx.set_fpr_bits(12, ctx.fpr_bits(20));
    ctx.set_gpr(4, ctx.gpr[29] + static_cast<std::uint32_t>(52));
    ctx.set_gpr(31, 0x08A42700u);
    // nop
    goto L_08A42504;
L_08A42700:
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_08A42754;
      }
      goto L_08A42708;
    }
L_08A42708:
    ctx.set_fpr_bits(12, ctx.fpr_bits(20));
    ctx.set_gpr(4, ctx.gpr[29] + static_cast<std::uint32_t>(52));
    ctx.set_gpr(31, 0x08A42718u);
    // nop
    goto L_08A42504;
L_08A42718:
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_08A42754;
      }
      goto L_08A42720;
    }
L_08A42720:
    ctx.set_fpr_bits(12, ctx.fpr_bits(20));
    ctx.set_gpr(4, ctx.gpr[29] + static_cast<std::uint32_t>(52));
    ctx.set_gpr(31, 0x08A42730u);
    // nop
    goto L_08A42504;
L_08A42730:
    ctx.set_gpr(2, ctx.gpr[2] & 1u);
    { const bool branch_taken = ctx.gpr[2] == 0u;
    // nop
      if (branch_taken) {
          goto L_08A42754;
      }
      goto L_08A4273C;
    }
L_08A4273C:
    ctx.fpr[0] = std::bit_cast<float>(rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(52)));
    ctx.fpr[0] = ctx.fpr[13] - ctx.fpr[0];
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(52), std::bit_cast<std::uint32_t>(ctx.fpr[0]));
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_08A42754;
      }
      goto L_08A42750;
    }
L_08A42750:
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(52), 0u);
    goto L_08A42754;
L_08A42754:
    ctx.fpr[20] = std::bit_cast<float>(rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(52)));
    rt.memory().aot_store32(ctx.gpr[20] + static_cast<std::uint32_t>(16), std::bit_cast<std::uint32_t>(ctx.fpr[20]));
    rt.memory().aot_store32(ctx.gpr[20] + static_cast<std::uint32_t>(24), ctx.gpr[17]);
    rt.memory().aot_store32(ctx.gpr[20] + static_cast<std::uint32_t>(28), ctx.gpr[16]);
    goto L_08A42764;
L_08A42764:
    ctx.set_gpr(2, 2246u << 16u);
    ctx.set_gpr(16, rt.memory().aot_load32(ctx.gpr[2] + static_cast<std::uint32_t>(-21840)));
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(60), 0u);
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(56), 0u);
    ctx.set_gpr(4, ctx.gpr[16] + 0u);
    ctx.set_gpr(5, ctx.gpr[21] + 0u);
    ctx.set_fpr_bits(12, ctx.fpr_bits(20));
    ctx.set_gpr(6, ctx.gpr[29] + static_cast<std::uint32_t>(60));
    ctx.set_gpr(7, ctx.gpr[29] + static_cast<std::uint32_t>(56));
    ctx.set_gpr(31, 0x08A42790u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0153_entry, 153u, 490u, 0x08A6AF3Cu>(ctx, &aot_mem) && ctx.pc == 0x08A42790u) goto L_08A42790;
    return;
L_08A42790:
    ctx.set_gpr(21, rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(60)));
    ctx.set_gpr(5, ctx.gpr[21] + static_cast<std::uint32_t>(16));
    ctx.set_gpr(17, rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(56)));
    ctx.set_gpr(6, ctx.gpr[17] + static_cast<std::uint32_t>(16));
    ctx.fpr[0] = std::bit_cast<float>(rt.memory().aot_load32(ctx.gpr[21] + static_cast<std::uint32_t>(28)));
    ctx.fpr[1] = ctx.fpr[20] - ctx.fpr[0];
    ctx.fpr[0] = std::bit_cast<float>(rt.memory().aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(36)));
    ctx.fpr[20] = ctx.fpr[1] / ctx.fpr[0];
    ctx.set_gpr(3, rt.memory().aot_load8(ctx.gpr[20] + static_cast<std::uint32_t>(8)));
    ctx.set_gpr(2, 0u + static_cast<std::uint32_t>(2));
    { const bool branch_taken = ctx.gpr[3] == ctx.gpr[2];
    // nop
      if (branch_taken) {
          goto L_08A42820;
      }
      goto L_08A427C0;
    }
L_08A427C0:
    ctx.set_gpr(2, 0u + static_cast<std::uint32_t>(3));
    { const bool branch_taken = ctx.gpr[3] == ctx.gpr[2];
    // nop
      if (branch_taken) {
          goto L_08A42820;
      }
      goto L_08A427CC;
    }
L_08A427CC:
    { const bool branch_taken = ctx.gpr[3] == 0u;
    // nop
      if (branch_taken) {
          goto L_08A42800;
      }
      goto L_08A427D4;
    }
L_08A427D4:
    ctx.set_gpr(2, 0u + static_cast<std::uint32_t>(1));
    { const bool branch_taken = ctx.gpr[3] == ctx.gpr[2];
    // nop
      if (branch_taken) {
          goto L_08A427E8;
      }
      goto L_08A427E0;
    }
L_08A427E0:
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_08A42820;
      }
      goto L_08A427E8;
    }
L_08A427E8:
    ctx.set_gpr(4, ctx.gpr[18] + 0u);
    ctx.set_fpr_bits(12, ctx.fpr_bits(20));
    ctx.set_gpr(31, 0x08A427F8u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0127_entry, 127u, 269u, 0x08A03174u>(ctx, &aot_mem) && ctx.pc == 0x08A427F8u) goto L_08A427F8;
    return;
L_08A427F8:
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_08A42820;
      }
      goto L_08A42800;
    }
L_08A42800:
    ctx.fpr[0] = std::bit_cast<float>(rt.memory().aot_load32(ctx.gpr[6] + static_cast<std::uint32_t>(0)));
    rt.memory().aot_store32(ctx.gpr[18] + static_cast<std::uint32_t>(0), std::bit_cast<std::uint32_t>(ctx.fpr[0]));
    ctx.fpr[0] = std::bit_cast<float>(rt.memory().aot_load32(ctx.gpr[6] + static_cast<std::uint32_t>(4)));
    rt.memory().aot_store32(ctx.gpr[18] + static_cast<std::uint32_t>(4), std::bit_cast<std::uint32_t>(ctx.fpr[0]));
    ctx.fpr[0] = std::bit_cast<float>(rt.memory().aot_load32(ctx.gpr[6] + static_cast<std::uint32_t>(8)));
    rt.memory().aot_store32(ctx.gpr[18] + static_cast<std::uint32_t>(8), std::bit_cast<std::uint32_t>(ctx.fpr[0]));
    ctx.fpr[0] = std::bit_cast<float>(rt.memory().aot_load32(ctx.gpr[6] + static_cast<std::uint32_t>(12)));
    rt.memory().aot_store32(ctx.gpr[18] + static_cast<std::uint32_t>(12), std::bit_cast<std::uint32_t>(ctx.fpr[0]));
    goto L_08A42820;
L_08A42820:
    ctx.set_gpr(3, rt.memory().aot_load8(ctx.gpr[20] + static_cast<std::uint32_t>(9)));
    ctx.set_gpr(2, 0u + static_cast<std::uint32_t>(2));
    { const bool branch_taken = ctx.gpr[3] == ctx.gpr[2];
    // nop
      if (branch_taken) {
          goto L_08A428B8;
      }
      goto L_08A42830;
    }
L_08A42830:
    { const bool branch_taken = ctx.gpr[3] == 0u;
    // nop
      if (branch_taken) {
          goto L_08A42898;
      }
      goto L_08A42838;
    }
L_08A42838:
    ctx.set_gpr(2, 0u + static_cast<std::uint32_t>(1));
    { const bool branch_taken = ctx.gpr[3] == ctx.gpr[2];
    // nop
      if (branch_taken) {
          goto L_08A42878;
      }
      goto L_08A42844;
    }
L_08A42844:
    ctx.set_gpr(2, 0u + static_cast<std::uint32_t>(3));
    { const bool branch_taken = ctx.gpr[3] == ctx.gpr[2];
    // nop
      if (branch_taken) {
          goto L_08A42858;
      }
      goto L_08A42850;
    }
L_08A42850:
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_08A428B8;
      }
      goto L_08A42858;
    }
L_08A42858:
    ctx.set_gpr(4, ctx.gpr[19] + 0u);
    ctx.set_fpr_bits(12, ctx.fpr_bits(20));
    ctx.set_gpr(5, ctx.gpr[21] + 0u);
    ctx.set_gpr(6, ctx.gpr[17] + 0u);
    ctx.set_gpr(31, 0x08A42870u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0127_entry, 127u, 196u, 0x08A0275Cu>(ctx, &aot_mem) && ctx.pc == 0x08A42870u) goto L_08A42870;
    return;
L_08A42870:
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_08A428B8;
      }
      goto L_08A42878;
    }
L_08A42878:
    ctx.set_gpr(4, ctx.gpr[19] + 0u);
    ctx.set_fpr_bits(12, ctx.fpr_bits(20));
    ctx.set_gpr(5, ctx.gpr[21] + 0u);
    ctx.set_gpr(6, ctx.gpr[17] + 0u);
    ctx.set_gpr(31, 0x08A42890u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0127_entry, 127u, 202u, 0x08A02A60u>(ctx, &aot_mem) && ctx.pc == 0x08A42890u) goto L_08A42890;
    return;
L_08A42890:
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_08A428B8;
      }
      goto L_08A42898;
    }
L_08A42898:
    ctx.fpr[0] = std::bit_cast<float>(rt.memory().aot_load32(ctx.gpr[17] + static_cast<std::uint32_t>(0)));
    rt.memory().aot_store32(ctx.gpr[19] + static_cast<std::uint32_t>(0), std::bit_cast<std::uint32_t>(ctx.fpr[0]));
    ctx.fpr[0] = std::bit_cast<float>(rt.memory().aot_load32(ctx.gpr[17] + static_cast<std::uint32_t>(4)));
    rt.memory().aot_store32(ctx.gpr[19] + static_cast<std::uint32_t>(4), std::bit_cast<std::uint32_t>(ctx.fpr[0]));
    ctx.fpr[0] = std::bit_cast<float>(rt.memory().aot_load32(ctx.gpr[17] + static_cast<std::uint32_t>(8)));
    rt.memory().aot_store32(ctx.gpr[19] + static_cast<std::uint32_t>(8), std::bit_cast<std::uint32_t>(ctx.fpr[0]));
    ctx.fpr[0] = std::bit_cast<float>(rt.memory().aot_load32(ctx.gpr[17] + static_cast<std::uint32_t>(12)));
    rt.memory().aot_store32(ctx.gpr[19] + static_cast<std::uint32_t>(12), std::bit_cast<std::uint32_t>(ctx.fpr[0]));
    goto L_08A428B8;
L_08A428B8:
    ctx.set_gpr(2, 0u + static_cast<std::uint32_t>(1));
    ctx.set_gpr(31, rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(44)));
    ctx.set_gpr(21, rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(40)));
    ctx.set_gpr(20, rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(36)));
    ctx.set_gpr(19, rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(32)));
    ctx.set_gpr(18, rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(28)));
    ctx.set_gpr(17, rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(24)));
    ctx.set_gpr(16, rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(20)));
    ctx.fpr[20] = std::bit_cast<float>(rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(12)));
    ctx.set_gpr(29, ctx.gpr[29] + static_cast<std::uint32_t>(64));
    jump_target = ctx.gpr[31];
    // nop
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_08A428E8:
    ctx.set_gpr(29, ctx.gpr[29] + static_cast<std::uint32_t>(-16));
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(12), ctx.gpr[31]);
    ctx.set_gpr(10, rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(16)));
    ctx.set_gpr(25, rt.memory().aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(0)));
    ctx.set_gpr(25, rt.memory().aot_load32(ctx.gpr[25] + static_cast<std::uint32_t>(108)));
    jump_target = ctx.gpr[25];
    ctx.set_gpr(31, 0x08A42904u);
    // nop
    ctx.pc = jump_target;
    if (rt.invoke_chained_call(ctx, &aot_mem) && ctx.pc == 0x08A42904u) goto L_08A42904;
    return;
L_08A42904:
    ctx.set_gpr(31, rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(12)));
    ctx.set_gpr(29, ctx.gpr[29] + static_cast<std::uint32_t>(16));
    jump_target = ctx.gpr[31];
    // nop
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_08A42914:
    ctx.set_gpr(29, ctx.gpr[29] + static_cast<std::uint32_t>(-16));
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(12), ctx.gpr[31]);
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(8), ctx.gpr[16]);
    ctx.set_gpr(16, ctx.gpr[4] + 0u);
    ctx.set_gpr(4, rt.memory().aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(32)));
    ctx.set_gpr(31, 0x08A42930u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0153_entry, 153u, 671u, 0x08A6BD04u>(ctx, &aot_mem) && ctx.pc == 0x08A42930u) goto L_08A42930;
    return;
L_08A42930:
    rt.memory().aot_store32(ctx.gpr[16] + static_cast<std::uint32_t>(32), ctx.gpr[2]);
    ctx.set_gpr(31, rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(12)));
    ctx.set_gpr(16, rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(8)));
    ctx.set_gpr(29, ctx.gpr[29] + static_cast<std::uint32_t>(16));
    jump_target = ctx.gpr[31];
    // nop
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_08A42948:
    ctx.set_gpr(29, ctx.gpr[29] + static_cast<std::uint32_t>(-16));
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(12), ctx.gpr[31]);
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(8), ctx.gpr[17]);
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(4), ctx.gpr[16]);
    ctx.set_gpr(4, rt.memory().aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(32)));
    ctx.set_gpr(25, rt.memory().aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(0)));
    ctx.set_gpr(25, rt.memory().aot_load32(ctx.gpr[25] + static_cast<std::uint32_t>(24)));
    jump_target = ctx.gpr[25];
    ctx.set_gpr(31, 0x08A4296Cu);
    // nop
    ctx.pc = jump_target;
    if (rt.invoke_chained_call(ctx, &aot_mem) && ctx.pc == 0x08A4296Cu) goto L_08A4296C;
    return;
L_08A4296C:
    ctx.set_fpr_bits(12, ctx.fpr_bits(0));
    ctx.set_gpr(31, 0x08A42978u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0006_entry, 6u, 675u, 0x0881EBD0u>(ctx, &aot_mem) && ctx.pc == 0x08A42978u) goto L_08A42978;
    return;
L_08A42978:
    ctx.set_gpr(17, ctx.gpr[2] + 0u);
    ctx.set_gpr(16, ctx.gpr[3] + 0u);
    ctx.set_gpr(2, 15258u << 16u);
    ctx.set_gpr(4, ctx.gpr[2] | 51712u);
    ctx.set_gpr(31, 0x08A42990u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0006_entry, 6u, 941u, 0x0881FF1Cu>(ctx, &aot_mem) && ctx.pc == 0x08A42990u) goto L_08A42990;
    return;
L_08A42990:
    ctx.set_gpr(4, ctx.gpr[2] + 0u);
    ctx.set_gpr(5, ctx.gpr[3] + 0u);
    ctx.set_gpr(6, ctx.gpr[17] + 0u);
    ctx.set_gpr(7, ctx.gpr[16] + 0u);
    ctx.set_gpr(31, 0x08A429A8u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0006_entry, 6u, 778u, 0x0881F44Cu>(ctx, &aot_mem) && ctx.pc == 0x08A429A8u) goto L_08A429A8;
    return;
L_08A429A8:
    ctx.set_gpr(4, ctx.gpr[2] + 0u);
    ctx.set_gpr(5, ctx.gpr[3] + 0u);
    ctx.set_gpr(31, 0x08A429B8u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0006_entry, 6u, 151u, 0x0881CBD4u>(ctx, &aot_mem) && ctx.pc == 0x08A429B8u) goto L_08A429B8;
    return;
L_08A429B8:
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
L_08A429D0:
    ctx.set_gpr(29, ctx.gpr[29] + static_cast<std::uint32_t>(-32));
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(28), ctx.gpr[31]);
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(24), ctx.gpr[20]);
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(20), ctx.gpr[19]);
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(16), ctx.gpr[18]);
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(12), ctx.gpr[17]);
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(8), ctx.gpr[16]);
    ctx.set_gpr(20, ctx.gpr[4] + 0u);
    ctx.set_gpr(4, ctx.gpr[20] & 255u);
    ctx.set_gpr(3, rt.memory().aot_load8(ctx.gpr[28] + static_cast<std::uint32_t>(-32152)));
    { const bool branch_taken = ctx.gpr[4] == ctx.gpr[3];
    // nop
      if (branch_taken) {
          goto L_08A42C04;
      }
      goto L_08A42A00;
    }
L_08A42A00:
    ctx.set_gpr(19, 0u + 0u);
    ctx.set_gpr(2, 2246u << 16u);
    ctx.set_gpr(17, rt.memory().aot_load32(ctx.gpr[2] + static_cast<std::uint32_t>(-22332)));
    { const bool branch_taken = ctx.gpr[17] == 0u;
    // nop
      if (branch_taken) {
          goto L_08A42A8C;
      }
      goto L_08A42A14;
    }
L_08A42A14:
    ctx.set_gpr(19, rt.memory().aot_load32(ctx.gpr[17] + static_cast<std::uint32_t>(8)));
    ctx.set_gpr(16, rt.memory().aot_load32(ctx.gpr[17] + static_cast<std::uint32_t>(8)));
    ctx.set_gpr(18, 0u + 0u);
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_08A42A4C;
      }
      goto L_08A42A28;
    }
L_08A42A28:
    ctx.set_gpr(3, ctx.gpr[18] << 2u);
    ctx.set_gpr(2, rt.memory().aot_load32(ctx.gpr[17] + static_cast<std::uint32_t>(16)));
    ctx.set_gpr(2, ctx.gpr[2] + ctx.gpr[3]);
    ctx.set_gpr(4, rt.memory().aot_load32(ctx.gpr[2] + static_cast<std::uint32_t>(0)));
    { const bool branch_taken = ctx.gpr[4] == 0u;
    // nop
      if (branch_taken) {
          goto L_08A42A48;
      }
      goto L_08A42A40;
    }
L_08A42A40:
    ctx.set_gpr(31, 0x08A42A48u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0014_entry, 14u, 257u, 0x0883D454u>(ctx, &aot_mem) && ctx.pc == 0x08A42A48u) goto L_08A42A48;
    return;
L_08A42A48:
    ctx.set_gpr(18, ctx.gpr[18] + static_cast<std::uint32_t>(1));
    goto L_08A42A4C;
L_08A42A4C:
    ctx.set_gpr(2, static_cast<std::int32_t>(ctx.gpr[18]) < static_cast<std::int32_t>(ctx.gpr[16]) ? 1u : 0u);
    { const bool branch_taken = ctx.gpr[2] != 0u;
    // nop
      if (branch_taken) {
          goto L_08A42A28;
      }
      goto L_08A42A58;
    }
L_08A42A58:
    ctx.set_gpr(4, rt.memory().aot_load32(ctx.gpr[17] + static_cast<std::uint32_t>(8)));
    ctx.set_gpr(5, 0u + 0u);
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_08A42A7C;
      }
      goto L_08A42A68;
    }
L_08A42A68:
    ctx.set_gpr(3, ctx.gpr[5] << 2u);
    ctx.set_gpr(2, rt.memory().aot_load32(ctx.gpr[17] + static_cast<std::uint32_t>(16)));
    ctx.set_gpr(2, ctx.gpr[2] + ctx.gpr[3]);
    rt.memory().aot_store32(ctx.gpr[2] + static_cast<std::uint32_t>(0), 0u);
    ctx.set_gpr(5, ctx.gpr[5] + static_cast<std::uint32_t>(1));
    goto L_08A42A7C;
L_08A42A7C:
    ctx.set_gpr(2, static_cast<std::int32_t>(ctx.gpr[5]) < static_cast<std::int32_t>(ctx.gpr[4]) ? 1u : 0u);
    { const bool branch_taken = ctx.gpr[2] != 0u;
    // nop
      if (branch_taken) {
          goto L_08A42A68;
      }
      goto L_08A42A88;
    }
L_08A42A88:
    rt.memory().aot_store32(ctx.gpr[17] + static_cast<std::uint32_t>(8), 0u);
    goto L_08A42A8C;
L_08A42A8C:
    { const bool branch_taken = ctx.gpr[20] == 0u;
    // nop
      if (branch_taken) {
          goto L_08A42B64;
      }
      goto L_08A42A94;
    }
L_08A42A94:
    ctx.set_gpr(31, 0x08A42A9Cu);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0135_entry, 135u, 592u, 0x08A231E4u>(ctx, &aot_mem) && ctx.pc == 0x08A42A9Cu) goto L_08A42A9C;
    return;
L_08A42A9C:
    ctx.set_gpr(3, rt.memory().aot_load32(ctx.gpr[2] + static_cast<std::uint32_t>(60)));
    ctx.set_gpr(2, 2246u << 16u);
    rt.memory().aot_store32(ctx.gpr[2] + static_cast<std::uint32_t>(-21836), ctx.gpr[3]);
    ctx.set_gpr(31, 0x08A42AB0u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0134_entry, 134u, 11u, 0x08A1C0F4u>(ctx, &aot_mem) && ctx.pc == 0x08A42AB0u) goto L_08A42AB0;
    return;
L_08A42AB0:
    ctx.set_gpr(3, rt.memory().aot_load32(ctx.gpr[2] + static_cast<std::uint32_t>(64)));
    ctx.set_gpr(2, 2246u << 16u);
    rt.memory().aot_store32(ctx.gpr[2] + static_cast<std::uint32_t>(-21832), ctx.gpr[3]);
    ctx.set_gpr(31, 0x08A42AC4u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0135_entry, 135u, 592u, 0x08A231E4u>(ctx, &aot_mem) && ctx.pc == 0x08A42AC4u) goto L_08A42AC4;
    return;
L_08A42AC4:
    ctx.set_gpr(3, 2212u << 16u);
    ctx.set_gpr(3, ctx.gpr[3] + static_cast<std::uint32_t>(11304));
    rt.memory().aot_store32(ctx.gpr[2] + static_cast<std::uint32_t>(60), ctx.gpr[3]);
    ctx.set_gpr(31, 0x08A42AD8u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0134_entry, 134u, 11u, 0x08A1C0F4u>(ctx, &aot_mem) && ctx.pc == 0x08A42AD8u) goto L_08A42AD8;
    return;
L_08A42AD8:
    ctx.set_gpr(3, 2210u << 16u);
    ctx.set_gpr(3, ctx.gpr[3] + static_cast<std::uint32_t>(-15728));
    rt.memory().aot_store32(ctx.gpr[2] + static_cast<std::uint32_t>(64), ctx.gpr[3]);
    ctx.set_gpr(2, 2246u << 16u);
    ctx.set_gpr(4, rt.memory().aot_load32(ctx.gpr[2] + static_cast<std::uint32_t>(-21860)));
    { const bool branch_taken = ctx.gpr[4] == 0u;
    // nop
      if (branch_taken) {
          goto L_08A42B08;
      }
      goto L_08A42AF4;
    }
L_08A42AF4:
    ctx.set_gpr(5, 0u + static_cast<std::uint32_t>(1));
    ctx.set_gpr(25, rt.memory().aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(0)));
    ctx.set_gpr(25, rt.memory().aot_load32(ctx.gpr[25] + static_cast<std::uint32_t>(132)));
    jump_target = ctx.gpr[25];
    ctx.set_gpr(31, 0x08A42B08u);
    // nop
    ctx.pc = jump_target;
    if (rt.invoke_chained_call(ctx, &aot_mem) && ctx.pc == 0x08A42B08u) goto L_08A42B08;
    return;
L_08A42B08:
    ctx.set_gpr(31, 0x08A42B10u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0078_entry, 78u, 216u, 0x0893CDDCu>(ctx, &aot_mem) && ctx.pc == 0x08A42B10u) goto L_08A42B10;
    return;
L_08A42B10:
    ctx.set_gpr(4, rt.memory().aot_load32(ctx.gpr[2] + static_cast<std::uint32_t>(0)));
    ctx.set_gpr(31, 0x08A42B1Cu);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0078_entry, 78u, 199u, 0x0893CC68u>(ctx, &aot_mem) && ctx.pc == 0x08A42B1Cu) goto L_08A42B1C;
    return;
L_08A42B1C:
    ctx.set_gpr(4, ctx.gpr[2] + 0u);
    ctx.set_gpr(31, 0x08A42B28u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0133_entry, 133u, 745u, 0x08A1BDCCu>(ctx, &aot_mem) && ctx.pc == 0x08A42B28u) goto L_08A42B28;
    return;
L_08A42B28:
    ctx.set_gpr(4, 2246u << 16u);
    ctx.set_gpr(4, ctx.gpr[4] + static_cast<std::uint32_t>(-21844));
    ctx.set_gpr(5, ctx.gpr[2] + 0u);
    ctx.set_gpr(31, 0x08A42B3Cu);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0085_entry, 85u, 67u, 0x0895853Cu>(ctx, &aot_mem) && ctx.pc == 0x08A42B3Cu) goto L_08A42B3C;
    return;
L_08A42B3C:
    ctx.set_gpr(3, 2246u << 16u);
    ctx.set_gpr(4, rt.memory().aot_load32(ctx.gpr[3] + static_cast<std::uint32_t>(-21860)));
    { const bool branch_taken = ctx.gpr[4] == 0u;
    // nop
      if (branch_taken) {
          goto L_08A42BE4;
      }
      goto L_08A42B4C;
    }
L_08A42B4C:
    ctx.set_gpr(25, rt.memory().aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(0)));
    ctx.set_gpr(25, rt.memory().aot_load32(ctx.gpr[25] + static_cast<std::uint32_t>(124)));
    jump_target = ctx.gpr[25];
    ctx.set_gpr(31, 0x08A42B5Cu);
    // nop
    ctx.pc = jump_target;
    if (rt.invoke_chained_call(ctx, &aot_mem) && ctx.pc == 0x08A42B5Cu) goto L_08A42B5C;
    return;
L_08A42B5C:
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_08A42BE4;
      }
      goto L_08A42B64;
    }
L_08A42B64:
    ctx.set_gpr(2, 2246u << 16u);
    ctx.set_gpr(16, rt.memory().aot_load32(ctx.gpr[2] + static_cast<std::uint32_t>(-21836)));
    ctx.set_gpr(31, 0x08A42B74u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0135_entry, 135u, 592u, 0x08A231E4u>(ctx, &aot_mem) && ctx.pc == 0x08A42B74u) goto L_08A42B74;
    return;
L_08A42B74:
    rt.memory().aot_store32(ctx.gpr[2] + static_cast<std::uint32_t>(60), ctx.gpr[16]);
    ctx.set_gpr(2, 2246u << 16u);
    ctx.set_gpr(16, rt.memory().aot_load32(ctx.gpr[2] + static_cast<std::uint32_t>(-21832)));
    ctx.set_gpr(31, 0x08A42B88u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0134_entry, 134u, 11u, 0x08A1C0F4u>(ctx, &aot_mem) && ctx.pc == 0x08A42B88u) goto L_08A42B88;
    return;
L_08A42B88:
    rt.memory().aot_store32(ctx.gpr[2] + static_cast<std::uint32_t>(64), ctx.gpr[16]);
    ctx.set_gpr(2, 2246u << 16u);
    ctx.set_gpr(4, rt.memory().aot_load32(ctx.gpr[2] + static_cast<std::uint32_t>(-21860)));
    { const bool branch_taken = ctx.gpr[4] == 0u;
    // nop
      if (branch_taken) {
          goto L_08A42BB0;
      }
      goto L_08A42B9C;
    }
L_08A42B9C:
    ctx.set_gpr(5, 0u + static_cast<std::uint32_t>(1));
    ctx.set_gpr(25, rt.memory().aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(0)));
    ctx.set_gpr(25, rt.memory().aot_load32(ctx.gpr[25] + static_cast<std::uint32_t>(132)));
    jump_target = ctx.gpr[25];
    ctx.set_gpr(31, 0x08A42BB0u);
    // nop
    ctx.pc = jump_target;
    if (rt.invoke_chained_call(ctx, &aot_mem) && ctx.pc == 0x08A42BB0u) goto L_08A42BB0;
    return;
L_08A42BB0:
    ctx.set_gpr(4, 2246u << 16u);
    ctx.set_gpr(4, ctx.gpr[4] + static_cast<std::uint32_t>(-21844));
    ctx.set_gpr(5, 0u + 0u);
    ctx.set_gpr(31, 0x08A42BC4u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0085_entry, 85u, 61u, 0x089584C4u>(ctx, &aot_mem) && ctx.pc == 0x08A42BC4u) goto L_08A42BC4;
    return;
L_08A42BC4:
    ctx.set_gpr(3, 2246u << 16u);
    ctx.set_gpr(4, rt.memory().aot_load32(ctx.gpr[3] + static_cast<std::uint32_t>(-21860)));
    { const bool branch_taken = ctx.gpr[4] == 0u;
    // nop
      if (branch_taken) {
          goto L_08A42BE4;
      }
      goto L_08A42BD4;
    }
L_08A42BD4:
    ctx.set_gpr(25, rt.memory().aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(0)));
    ctx.set_gpr(25, rt.memory().aot_load32(ctx.gpr[25] + static_cast<std::uint32_t>(124)));
    jump_target = ctx.gpr[25];
    ctx.set_gpr(31, 0x08A42BE4u);
    // nop
    ctx.pc = jump_target;
    if (rt.invoke_chained_call(ctx, &aot_mem) && ctx.pc == 0x08A42BE4u) goto L_08A42BE4;
    return;
L_08A42BE4:
    ctx.set_gpr(3, 2246u << 16u);
    ctx.set_gpr(4, rt.memory().aot_load32(ctx.gpr[3] + static_cast<std::uint32_t>(-22332)));
    { const bool branch_taken = ctx.gpr[4] == 0u;
    // nop
      if (branch_taken) {
          goto L_08A42C00;
      }
      goto L_08A42BF4;
    }
L_08A42BF4:
    ctx.set_gpr(5, ctx.gpr[19] + 0u);
    ctx.set_gpr(31, 0x08A42C00u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0081_entry, 81u, 312u, 0x089495E8u>(ctx, &aot_mem) && ctx.pc == 0x08A42C00u) goto L_08A42C00;
    return;
L_08A42C00:
    rt.memory().aot_store8(ctx.gpr[28] + static_cast<std::uint32_t>(-32152), static_cast<std::uint8_t>(ctx.gpr[20]));
    goto L_08A42C04;
L_08A42C04:
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
L_08A42C28:
    ctx.set_gpr(2, 2246u << 16u);
    ctx.set_gpr(2, rt.memory().aot_load32(ctx.gpr[2] + static_cast<std::uint32_t>(-24056)));
    jump_target = ctx.gpr[31];
    // nop
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_08A42C38:
    ctx.set_gpr(29, ctx.gpr[29] + static_cast<std::uint32_t>(-32));
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(12), ctx.gpr[31]);
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(8), ctx.gpr[16]);
    ctx.set_gpr(31, 0x08A42C4Cu);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0064_entry, 64u, 444u, 0x08905FF0u>(ctx, &aot_mem) && ctx.pc == 0x08A42C4Cu) goto L_08A42C4C;
    return;
L_08A42C4C:
    ctx.set_gpr(16, rt.memory().aot_load32(ctx.gpr[2] + static_cast<std::uint32_t>(64)));
    ctx.set_gpr(4, 0u + static_cast<std::uint32_t>(1));
    ctx.set_gpr(31, 0x08A42C5Cu);
    // nop
    goto L_08A429D0;
L_08A42C5C:
    rt.memory().aot_store8(ctx.gpr[29] + static_cast<std::uint32_t>(31), static_cast<std::uint8_t>(0u));
    ctx.set_gpr(4, ctx.gpr[16] + 0u);
    ctx.set_gpr(5, 0u + static_cast<std::uint32_t>(7));
    ctx.set_gpr(6, 2229u << 16u);
    ctx.set_gpr(6, ctx.gpr[6] + static_cast<std::uint32_t>(22156));
    ctx.set_gpr(7, ctx.gpr[29] + static_cast<std::uint32_t>(31));
    ctx.set_gpr(8, 0u + 0u);
    ctx.set_gpr(9, 0u + 0u);
    ctx.set_gpr(31, 0x08A42C84u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0083_entry, 83u, 813u, 0x089537E4u>(ctx, &aot_mem) && ctx.pc == 0x08A42C84u) goto L_08A42C84;
    return;
L_08A42C84:
    ctx.set_gpr(3, rt.memory().aot_load8(ctx.gpr[29] + static_cast<std::uint32_t>(31)));
    { const bool branch_taken = ctx.gpr[3] == 0u;
    // nop
      if (branch_taken) {
          goto L_08A42CDC;
      }
      goto L_08A42C90;
    }
L_08A42C90:
    ctx.set_gpr(31, 0x08A42C98u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0078_entry, 78u, 216u, 0x0893CDDCu>(ctx, &aot_mem) && ctx.pc == 0x08A42C98u) goto L_08A42C98;
    return;
L_08A42C98:
    ctx.set_gpr(4, rt.memory().aot_load32(ctx.gpr[2] + static_cast<std::uint32_t>(0)));
    ctx.set_gpr(31, 0x08A42CA4u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0078_entry, 78u, 199u, 0x0893CC68u>(ctx, &aot_mem) && ctx.pc == 0x08A42CA4u) goto L_08A42CA4;
    return;
L_08A42CA4:
    ctx.set_gpr(4, ctx.gpr[2] + 0u);
    ctx.set_gpr(31, 0x08A42CB0u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0057_entry, 57u, 386u, 0x088E9CF8u>(ctx, &aot_mem) && ctx.pc == 0x08A42CB0u) goto L_08A42CB0;
    return;
L_08A42CB0:
    ctx.set_gpr(4, 2246u << 16u);
    ctx.set_gpr(4, ctx.gpr[4] + static_cast<std::uint32_t>(-21860));
    ctx.set_gpr(5, ctx.gpr[2] + 0u);
    ctx.set_gpr(31, 0x08A42CC4u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0085_entry, 85u, 67u, 0x0895853Cu>(ctx, &aot_mem) && ctx.pc == 0x08A42CC4u) goto L_08A42CC4;
    return;
L_08A42CC4:
    ctx.set_gpr(2, 2246u << 16u);
    ctx.set_gpr(4, rt.memory().aot_load32(ctx.gpr[2] + static_cast<std::uint32_t>(-21860)));
    ctx.set_gpr(25, rt.memory().aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(0)));
    ctx.set_gpr(25, rt.memory().aot_load32(ctx.gpr[25] + static_cast<std::uint32_t>(92)));
    jump_target = ctx.gpr[25];
    ctx.set_gpr(31, 0x08A42CDCu);
    // nop
    ctx.pc = jump_target;
    if (rt.invoke_chained_call(ctx, &aot_mem) && ctx.pc == 0x08A42CDCu) goto L_08A42CDC;
    return;
L_08A42CDC:
    ctx.set_gpr(31, rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(12)));
    ctx.set_gpr(16, rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(8)));
    ctx.set_gpr(29, ctx.gpr[29] + static_cast<std::uint32_t>(32));
    jump_target = ctx.gpr[31];
    // nop
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_08A42CF0:
    ctx.set_gpr(29, ctx.gpr[29] + static_cast<std::uint32_t>(-16));
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(12), ctx.gpr[31]);
    ctx.set_gpr(4, 0u + 0u);
    ctx.set_gpr(31, 0x08A42D04u);
    // nop
    goto L_08A429D0;
L_08A42D04:
    ctx.set_gpr(4, 2246u << 16u);
    ctx.set_gpr(4, ctx.gpr[4] + static_cast<std::uint32_t>(-21860));
    ctx.set_gpr(5, 0u + 0u);
    ctx.set_gpr(31, 0x08A42D18u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0085_entry, 85u, 61u, 0x089584C4u>(ctx, &aot_mem) && ctx.pc == 0x08A42D18u) goto L_08A42D18;
    return;
L_08A42D18:
    ctx.set_gpr(31, rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(12)));
    ctx.set_gpr(29, ctx.gpr[29] + static_cast<std::uint32_t>(16));
    jump_target = ctx.gpr[31];
    // nop
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_08A42D28:
    ctx.set_gpr(29, ctx.gpr[29] + static_cast<std::uint32_t>(-16));
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(12), ctx.gpr[31]);
    ctx.set_gpr(3, rt.memory().aot_load8(ctx.gpr[28] + static_cast<std::uint32_t>(-32152)));
    { const bool branch_taken = ctx.gpr[3] == 0u;
    // nop
      if (branch_taken) {
          goto L_08A42D4C;
      }
      goto L_08A42D3C;
    }
L_08A42D3C:
    ctx.set_gpr(25, rt.memory().aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(0)));
    ctx.set_gpr(25, rt.memory().aot_load32(ctx.gpr[25] + static_cast<std::uint32_t>(92)));
    jump_target = ctx.gpr[25];
    ctx.set_gpr(31, 0x08A42D4Cu);
    // nop
    ctx.pc = jump_target;
    if (rt.invoke_chained_call(ctx, &aot_mem) && ctx.pc == 0x08A42D4Cu) goto L_08A42D4C;
    return;
L_08A42D4C:
    ctx.set_gpr(31, rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(12)));
    ctx.set_gpr(29, ctx.gpr[29] + static_cast<std::uint32_t>(16));
    jump_target = ctx.gpr[31];
    // nop
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_08A42D5C:
    ctx.set_gpr(29, ctx.gpr[29] + static_cast<std::uint32_t>(-32));
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(28), ctx.gpr[31]);
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(24), ctx.gpr[21]);
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(20), ctx.gpr[20]);
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(16), ctx.gpr[19]);
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(12), ctx.gpr[18]);
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(8), ctx.gpr[17]);
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(4), ctx.gpr[16]);
    ctx.set_gpr(20, ctx.gpr[4] + 0u);
    ctx.set_gpr(19, 0u + 0u);
    ctx.set_gpr(3, rt.memory().aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(8)));
    ctx.set_gpr(17, rt.memory().aot_load32(ctx.gpr[3] + static_cast<std::uint32_t>(20)));
    ctx.set_gpr(21, rt.memory().aot_load32(ctx.gpr[17] + static_cast<std::uint32_t>(8)));
    ctx.set_gpr(18, 0u + 0u);
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_08A42DF0;
      }
      goto L_08A42D9C;
    }
L_08A42D9C:
    ctx.set_gpr(4, ctx.gpr[18] << 2u);
    ctx.set_gpr(3, rt.memory().aot_load32(ctx.gpr[17] + static_cast<std::uint32_t>(16)));
    ctx.set_gpr(3, ctx.gpr[3] + ctx.gpr[4]);
    ctx.set_gpr(3, rt.memory().aot_load32(ctx.gpr[3] + static_cast<std::uint32_t>(0)));
    { const bool branch_taken = ctx.gpr[3] == 0u;
    // nop
      if (branch_taken) {
          goto L_08A42DEC;
      }
      goto L_08A42DB4;
    }
L_08A42DB4:
    ctx.set_gpr(16, rt.memory().aot_load32(ctx.gpr[3] + static_cast<std::uint32_t>(12)));
    { const bool branch_taken = ctx.gpr[16] == 0u;
    // nop
      if (branch_taken) {
          goto L_08A42DEC;
      }
      goto L_08A42DC0;
    }
L_08A42DC0:
    ctx.set_gpr(4, ctx.gpr[16] + 0u);
    ctx.set_gpr(2, 2246u << 16u);
    ctx.set_gpr(5, rt.memory().aot_load32(ctx.gpr[2] + static_cast<std::uint32_t>(-24088)));
    ctx.set_gpr(31, 0x08A42DD4u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0080_entry, 80u, 857u, 0x08947F8Cu>(ctx, &aot_mem) && ctx.pc == 0x08A42DD4u) goto L_08A42DD4;
    return;
L_08A42DD4:
    { const bool branch_taken = ctx.gpr[2] == 0u;
    // nop
      if (branch_taken) {
          goto L_08A42DEC;
      }
      goto L_08A42DDC;
    }
L_08A42DDC:
    ctx.set_gpr(3, rt.memory().aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(12)));
    ctx.set_gpr(19, rt.memory().aot_load32(ctx.gpr[3] + static_cast<std::uint32_t>(32)));
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_08A42DFC;
      }
      goto L_08A42DEC;
    }
L_08A42DEC:
    ctx.set_gpr(18, ctx.gpr[18] + static_cast<std::uint32_t>(1));
    goto L_08A42DF0;
L_08A42DF0:
    ctx.set_gpr(3, static_cast<std::int32_t>(ctx.gpr[18]) < static_cast<std::int32_t>(ctx.gpr[21]) ? 1u : 0u);
    { const bool branch_taken = ctx.gpr[3] != 0u;
    // nop
      if (branch_taken) {
          goto L_08A42D9C;
      }
      goto L_08A42DFC;
    }
L_08A42DFC:
    { const bool branch_taken = ctx.gpr[19] == 0u;
    // nop
      if (branch_taken) {
          goto L_08A42E9C;
      }
      goto L_08A42E04;
    }
L_08A42E04:
    ctx.set_gpr(2, 2246u << 16u);
    ctx.set_gpr(4, rt.memory().aot_load32(ctx.gpr[2] + static_cast<std::uint32_t>(-21860)));
    { const bool branch_taken = ctx.gpr[4] == 0u;
    // nop
      if (branch_taken) {
          goto L_08A42E28;
      }
      goto L_08A42E14;
    }
L_08A42E14:
    ctx.set_gpr(5, 0u + static_cast<std::uint32_t>(1));
    ctx.set_gpr(25, rt.memory().aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(0)));
    ctx.set_gpr(25, rt.memory().aot_load32(ctx.gpr[25] + static_cast<std::uint32_t>(132)));
    jump_target = ctx.gpr[25];
    ctx.set_gpr(31, 0x08A42E28u);
    // nop
    ctx.pc = jump_target;
    if (rt.invoke_chained_call(ctx, &aot_mem) && ctx.pc == 0x08A42E28u) goto L_08A42E28;
    return;
L_08A42E28:
    ctx.set_gpr(2, rt.memory().aot_load32(ctx.gpr[20] + static_cast<std::uint32_t>(8)));
    ctx.set_gpr(2, rt.memory().aot_load32(ctx.gpr[2] + static_cast<std::uint32_t>(20)));
    ctx.set_gpr(5, rt.memory().aot_load32(ctx.gpr[2] + static_cast<std::uint32_t>(8)));
    ctx.set_gpr(2, 2246u << 16u);
    ctx.set_gpr(4, rt.memory().aot_load32(ctx.gpr[2] + static_cast<std::uint32_t>(-21844)));
    ctx.set_gpr(31, 0x08A42E44u);
    // nop
    goto L_08A43350;
L_08A42E44:
    rt.memory().aot_store32(ctx.gpr[20] + static_cast<std::uint32_t>(160), ctx.gpr[2]);
    ctx.set_gpr(2, rt.memory().aot_load8(ctx.gpr[28] + static_cast<std::uint32_t>(-32151)));
    { const bool branch_taken = ctx.gpr[2] != 0u;
    // nop
      if (branch_taken) {
          goto L_08A42E58;
      }
      goto L_08A42E54;
    }
L_08A42E54:
    rt.memory().aot_store8(ctx.gpr[20] + static_cast<std::uint32_t>(164), static_cast<std::uint8_t>(0u));
    goto L_08A42E58;
L_08A42E58:
    ctx.set_gpr(4, ctx.gpr[19] + 0u);
    ctx.set_gpr(31, 0x08A42E64u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0153_entry, 153u, 671u, 0x08A6BD04u>(ctx, &aot_mem) && ctx.pc == 0x08A42E64u) goto L_08A42E64;
    return;
L_08A42E64:
    ctx.set_gpr(19, ctx.gpr[2] + 0u);
    ctx.set_gpr(4, rt.memory().aot_load32(ctx.gpr[20] + static_cast<std::uint32_t>(160)));
    ctx.set_gpr(5, ctx.gpr[19] + 0u);
    ctx.set_gpr(6, rt.memory().aot_load8(ctx.gpr[20] + static_cast<std::uint32_t>(164)));
    ctx.set_gpr(31, 0x08A42E7Cu);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0153_entry, 153u, 390u, 0x08A6A358u>(ctx, &aot_mem) && ctx.pc == 0x08A42E7Cu) goto L_08A42E7C;
    return;
L_08A42E7C:
    ctx.set_gpr(3, 2246u << 16u);
    ctx.set_gpr(4, rt.memory().aot_load32(ctx.gpr[3] + static_cast<std::uint32_t>(-21860)));
    { const bool branch_taken = ctx.gpr[4] == 0u;
    // nop
      if (branch_taken) {
          goto L_08A42E9C;
      }
      goto L_08A42E8C;
    }
L_08A42E8C:
    ctx.set_gpr(25, rt.memory().aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(0)));
    ctx.set_gpr(25, rt.memory().aot_load32(ctx.gpr[25] + static_cast<std::uint32_t>(124)));
    jump_target = ctx.gpr[25];
    ctx.set_gpr(31, 0x08A42E9Cu);
    // nop
    ctx.pc = jump_target;
    if (rt.invoke_chained_call(ctx, &aot_mem) && ctx.pc == 0x08A42E9Cu) goto L_08A42E9C;
    return;
L_08A42E9C:
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
L_08A42EC4:
    ctx.set_gpr(29, ctx.gpr[29] + static_cast<std::uint32_t>(-16));
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(12), ctx.gpr[31]);
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(8), ctx.gpr[16]);
    ctx.set_gpr(16, ctx.gpr[4] + 0u);
    ctx.set_gpr(3, 2246u << 16u);
    ctx.set_gpr(4, rt.memory().aot_load32(ctx.gpr[3] + static_cast<std::uint32_t>(-21860)));
    { const bool branch_taken = ctx.gpr[4] == 0u;
    // nop
      if (branch_taken) {
          goto L_08A42EF8;
      }
      goto L_08A42EE4;
    }
L_08A42EE4:
    ctx.set_gpr(5, 0u + static_cast<std::uint32_t>(1));
    ctx.set_gpr(25, rt.memory().aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(0)));
    ctx.set_gpr(25, rt.memory().aot_load32(ctx.gpr[25] + static_cast<std::uint32_t>(132)));
    jump_target = ctx.gpr[25];
    ctx.set_gpr(31, 0x08A42EF8u);
    // nop
    ctx.pc = jump_target;
    if (rt.invoke_chained_call(ctx, &aot_mem) && ctx.pc == 0x08A42EF8u) goto L_08A42EF8;
    return;
L_08A42EF8:
    ctx.set_gpr(5, rt.memory().aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(160)));
    { const bool branch_taken = ctx.gpr[5] == 0u;
    // nop
      if (branch_taken) {
          goto L_08A42F20;
      }
      goto L_08A42F04;
    }
L_08A42F04:
    ctx.set_gpr(2, rt.memory().aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(8)));
    ctx.set_gpr(2, rt.memory().aot_load32(ctx.gpr[2] + static_cast<std::uint32_t>(20)));
    ctx.set_gpr(6, rt.memory().aot_load32(ctx.gpr[2] + static_cast<std::uint32_t>(8)));
    ctx.set_gpr(2, 2246u << 16u);
    ctx.set_gpr(4, rt.memory().aot_load32(ctx.gpr[2] + static_cast<std::uint32_t>(-21844)));
    ctx.set_gpr(31, 0x08A42F20u);
    // nop
    goto L_08A43490;
L_08A42F20:
    ctx.set_gpr(3, 2246u << 16u);
    ctx.set_gpr(4, rt.memory().aot_load32(ctx.gpr[3] + static_cast<std::uint32_t>(-21860)));
    { const bool branch_taken = ctx.gpr[4] == 0u;
    // nop
      if (branch_taken) {
          goto L_08A42F40;
      }
      goto L_08A42F30;
    }
L_08A42F30:
    ctx.set_gpr(25, rt.memory().aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(0)));
    ctx.set_gpr(25, rt.memory().aot_load32(ctx.gpr[25] + static_cast<std::uint32_t>(124)));
    jump_target = ctx.gpr[25];
    ctx.set_gpr(31, 0x08A42F40u);
    // nop
    ctx.pc = jump_target;
    if (rt.invoke_chained_call(ctx, &aot_mem) && ctx.pc == 0x08A42F40u) goto L_08A42F40;
    return;
L_08A42F40:
    ctx.set_gpr(31, rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(12)));
    ctx.set_gpr(16, rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(8)));
    ctx.set_gpr(29, ctx.gpr[29] + static_cast<std::uint32_t>(16));
    jump_target = ctx.gpr[31];
    // nop
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_08A42F54:
    ctx.set_gpr(29, ctx.gpr[29] + static_cast<std::uint32_t>(-16));
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(12), ctx.gpr[31]);
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(8), ctx.gpr[16]);
    ctx.set_gpr(16, ctx.gpr[4] + 0u);
    ctx.set_gpr(3, 2246u << 16u);
    ctx.set_gpr(4, rt.memory().aot_load32(ctx.gpr[3] + static_cast<std::uint32_t>(-21860)));
    { const bool branch_taken = ctx.gpr[4] == 0u;
    // nop
      if (branch_taken) {
          goto L_08A42F88;
      }
      goto L_08A42F74;
    }
L_08A42F74:
    ctx.set_gpr(5, 0u + static_cast<std::uint32_t>(1));
    ctx.set_gpr(25, rt.memory().aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(0)));
    ctx.set_gpr(25, rt.memory().aot_load32(ctx.gpr[25] + static_cast<std::uint32_t>(132)));
    jump_target = ctx.gpr[25];
    ctx.set_gpr(31, 0x08A42F88u);
    // nop
    ctx.pc = jump_target;
    if (rt.invoke_chained_call(ctx, &aot_mem) && ctx.pc == 0x08A42F88u) goto L_08A42F88;
    return;
L_08A42F88:
    ctx.set_gpr(4, rt.memory().aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(160)));
    ctx.set_gpr(3, 2246u << 16u);
    rt.memory().aot_store32(ctx.gpr[3] + static_cast<std::uint32_t>(-21840), ctx.gpr[4]);
    ctx.set_gpr(31, rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(12)));
    ctx.set_gpr(16, rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(8)));
    ctx.set_gpr(29, ctx.gpr[29] + static_cast<std::uint32_t>(16));
    jump_target = ctx.gpr[31];
    // nop
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_08A42FA8:
    ctx.set_gpr(29, ctx.gpr[29] + static_cast<std::uint32_t>(-16));
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(12), ctx.gpr[31]);
    ctx.set_gpr(3, 2246u << 16u);
    rt.memory().aot_store32(ctx.gpr[3] + static_cast<std::uint32_t>(-21840), 0u);
    ctx.set_gpr(3, 2246u << 16u);
    ctx.set_gpr(4, rt.memory().aot_load32(ctx.gpr[3] + static_cast<std::uint32_t>(-21860)));
    { const bool branch_taken = ctx.gpr[4] == 0u;
    // nop
      if (branch_taken) {
          goto L_08A42FD8;
      }
      goto L_08A42FC8;
    }
L_08A42FC8:
    ctx.set_gpr(25, rt.memory().aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(0)));
    ctx.set_gpr(25, rt.memory().aot_load32(ctx.gpr[25] + static_cast<std::uint32_t>(124)));
    jump_target = ctx.gpr[25];
    ctx.set_gpr(31, 0x08A42FD8u);
    // nop
    ctx.pc = jump_target;
    if (rt.invoke_chained_call(ctx, &aot_mem) && ctx.pc == 0x08A42FD8u) goto L_08A42FD8;
    return;
L_08A42FD8:
    ctx.set_gpr(31, rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(12)));
    ctx.set_gpr(29, ctx.gpr[29] + static_cast<std::uint32_t>(16));
    jump_target = ctx.gpr[31];
    // nop
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_08A42FE8:
    ctx.set_gpr(29, ctx.gpr[29] + static_cast<std::uint32_t>(-16));
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(12), ctx.gpr[31]);
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(8), ctx.gpr[16]);
    ctx.set_gpr(16, ctx.gpr[4] + 0u);
    ctx.set_gpr(31, 0x08A43000u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0080_entry, 80u, 433u, 0x08945EE4u>(ctx, &aot_mem) && ctx.pc == 0x08A43000u) goto L_08A43000;
    return;
L_08A43000:
    ctx.set_gpr(31, 0x08A43008u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0064_entry, 64u, 444u, 0x08905FF0u>(ctx, &aot_mem) && ctx.pc == 0x08A43008u) goto L_08A43008;
    return;
L_08A43008:
    ctx.set_gpr(5, rt.memory().aot_load32(ctx.gpr[2] + static_cast<std::uint32_t>(64)));
    ctx.set_gpr(4, ctx.gpr[16] + 0u);
    ctx.set_gpr(31, 0x08A43018u);
    // nop
    goto L_08A4302C;
L_08A43018:
    ctx.set_gpr(31, rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(12)));
    ctx.set_gpr(16, rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(8)));
    ctx.set_gpr(29, ctx.gpr[29] + static_cast<std::uint32_t>(16));
    jump_target = ctx.gpr[31];
    // nop
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_08A4302C:
    ctx.set_gpr(29, ctx.gpr[29] + static_cast<std::uint32_t>(-48));
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(28), ctx.gpr[31]);
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(24), ctx.gpr[20]);
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(20), ctx.gpr[19]);
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(16), ctx.gpr[18]);
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(12), ctx.gpr[17]);
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(8), ctx.gpr[16]);
    ctx.set_gpr(19, ctx.gpr[4] + 0u);
    ctx.set_gpr(18, ctx.gpr[5] + 0u);
    { const bool branch_taken = ctx.gpr[18] == 0u;
    // nop
      if (branch_taken) {
          goto L_08A43208;
      }
      goto L_08A43058;
    }
L_08A43058:
    ctx.set_gpr(31, 0x08A43060u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0078_entry, 78u, 228u, 0x0893CE9Cu>(ctx, &aot_mem) && ctx.pc == 0x08A43060u) goto L_08A43060;
    return;
L_08A43060:
    ctx.set_gpr(4, rt.memory().aot_load32(ctx.gpr[2] + static_cast<std::uint32_t>(0)));
    ctx.set_gpr(31, 0x08A4306Cu);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0078_entry, 78u, 199u, 0x0893CC68u>(ctx, &aot_mem) && ctx.pc == 0x08A4306Cu) goto L_08A4306C;
    return;
L_08A4306C:
    ctx.set_gpr(4, ctx.gpr[2] + 0u);
    ctx.set_gpr(31, 0x08A43078u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0057_entry, 57u, 21u, 0x088E81E8u>(ctx, &aot_mem) && ctx.pc == 0x08A43078u) goto L_08A43078;
    return;
L_08A43078:
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(44), ctx.gpr[2]);
    ctx.set_gpr(4, ctx.gpr[18] + 0u);
    ctx.set_gpr(5, 0u + static_cast<std::uint32_t>(7));
    ctx.set_gpr(31, 0x08A4308Cu);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0083_entry, 83u, 639u, 0x08952C00u>(ctx, &aot_mem) && ctx.pc == 0x08A4308Cu) goto L_08A4308C;
    return;
L_08A4308C:
    ctx.set_gpr(16, ctx.gpr[2] + 0u);
    ctx.set_gpr(17, 0u + 0u);
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_08A43170;
      }
      goto L_08A4309C;
    }
L_08A4309C:
    ctx.set_gpr(4, ctx.gpr[18] + 0u);
    ctx.set_gpr(5, 0u + static_cast<std::uint32_t>(7));
    ctx.set_gpr(6, ctx.gpr[17] + 0u);
    ctx.set_gpr(7, ctx.gpr[29] + static_cast<std::uint32_t>(44));
    ctx.set_gpr(31, 0x08A430B4u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0083_entry, 83u, 649u, 0x08952CC0u>(ctx, &aot_mem) && ctx.pc == 0x08A430B4u) goto L_08A430B4;
    return;
L_08A430B4:
    { const bool branch_taken = ctx.gpr[2] == 0u;
    // nop
      if (branch_taken) {
          goto L_08A4316C;
      }
      goto L_08A430BC;
    }
L_08A430BC:
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(40), 0u);
    ctx.set_gpr(2, rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(44)));
    ctx.set_gpr(20, rt.memory().aot_load32(ctx.gpr[2] + static_cast<std::uint32_t>(8)));
    { const bool branch_taken = ctx.gpr[20] != 0u;
    // nop
      if (branch_taken) {
          goto L_08A430D8;
      }
      goto L_08A430D0;
    }
L_08A430D0:
    ctx.set_gpr(2, 2228u << 16u);
    ctx.set_gpr(20, rt.memory().aot_load32(ctx.gpr[2] + static_cast<std::uint32_t>(-1368)));
    goto L_08A430D8;
L_08A430D8:
    ctx.set_gpr(4, ctx.gpr[20] + 0u);
    ctx.set_gpr(5, 2229u << 16u);
    ctx.set_gpr(5, ctx.gpr[5] + static_cast<std::uint32_t>(22172));
    ctx.set_gpr(6, 0u + static_cast<std::uint32_t>(17));
    ctx.set_gpr(31, 0x08A430F0u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0004_entry, 4u, 543u, 0x088169A8u>(ctx, &aot_mem) && ctx.pc == 0x08A430F0u) goto L_08A430F0;
    return;
L_08A430F0:
    { const bool branch_taken = ctx.gpr[2] != 0u;
    // nop
      if (branch_taken) {
          goto L_08A4316C;
      }
      goto L_08A430F8;
    }
L_08A430F8:
    ctx.set_gpr(4, ctx.gpr[18] + 0u);
    ctx.set_gpr(5, 0u + static_cast<std::uint32_t>(7));
    ctx.set_gpr(6, ctx.gpr[20] + 0u);
    ctx.set_gpr(7, ctx.gpr[29] + static_cast<std::uint32_t>(40));
    ctx.set_gpr(8, 0u + 0u);
    ctx.set_gpr(9, 0u + 0u);
    ctx.set_gpr(31, 0x08A43118u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0083_entry, 83u, 663u, 0x08952DD8u>(ctx, &aot_mem) && ctx.pc == 0x08A43118u) goto L_08A43118;
    return;
L_08A43118:
    { const bool branch_taken = ctx.gpr[2] == 0u;
    // nop
      if (branch_taken) {
          goto L_08A4316C;
      }
      goto L_08A43120;
    }
L_08A43120:
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(36), 0u);
    ctx.set_gpr(4, ctx.gpr[20] + 0u);
    ctx.set_gpr(5, 2229u << 16u);
    ctx.set_gpr(5, ctx.gpr[5] + static_cast<std::uint32_t>(22192));
    ctx.set_gpr(6, ctx.gpr[29] + static_cast<std::uint32_t>(36));
    ctx.set_gpr(31, 0x08A4313Cu);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0004_entry, 4u, 427u, 0x08816084u>(ctx, &aot_mem) && ctx.pc == 0x08A4313Cu) goto L_08A4313C;
    return;
L_08A4313C:
    ctx.set_gpr(3, 0u + static_cast<std::uint32_t>(1));
    { const bool branch_taken = ctx.gpr[2] != ctx.gpr[3];
    // nop
      if (branch_taken) {
          goto L_08A4316C;
      }
      goto L_08A43148;
    }
L_08A43148:
    ctx.set_gpr(5, rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(36)));
    { const bool branch_taken = static_cast<std::int32_t>(ctx.gpr[5]) < 0;
    // nop
      if (branch_taken) {
          goto L_08A4316C;
      }
      goto L_08A43154;
    }
L_08A43154:
    ctx.set_gpr(6, rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(40)));
    { const bool branch_taken = static_cast<std::int32_t>(ctx.gpr[6]) < 0;
    // nop
      if (branch_taken) {
          goto L_08A4316C;
      }
      goto L_08A43160;
    }
L_08A43160:
    ctx.set_gpr(4, ctx.gpr[19] + 0u);
    ctx.set_gpr(31, 0x08A4316Cu);
    // nop
    goto L_08A439B4;
L_08A4316C:
    ctx.set_gpr(17, ctx.gpr[17] + static_cast<std::uint32_t>(1));
    goto L_08A43170;
L_08A43170:
    ctx.set_gpr(2, static_cast<std::int32_t>(ctx.gpr[17]) < static_cast<std::int32_t>(ctx.gpr[16]) ? 1u : 0u);
    { const bool branch_taken = ctx.gpr[2] != 0u;
    // nop
      if (branch_taken) {
          goto L_08A4309C;
      }
      goto L_08A4317C;
    }
L_08A4317C:
    ctx.set_gpr(8, 0u + static_cast<std::uint32_t>(1));
    rt.memory().aot_store32(ctx.gpr[19] + static_cast<std::uint32_t>(20), ctx.gpr[8]);
    ctx.set_gpr(4, ctx.gpr[18] + 0u);
    ctx.set_gpr(5, 0u + static_cast<std::uint32_t>(7));
    ctx.set_gpr(6, 2229u << 16u);
    ctx.set_gpr(6, ctx.gpr[6] + static_cast<std::uint32_t>(22212));
    ctx.set_gpr(7, ctx.gpr[19] + static_cast<std::uint32_t>(20));
    ctx.set_gpr(9, 0u + 0u);
    ctx.set_gpr(31, 0x08A431A4u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0157_entry, 157u, 576u, 0x08A7B4F8u>(ctx, &aot_mem) && ctx.pc == 0x08A431A4u) goto L_08A431A4;
    return;
L_08A431A4:
    ctx.set_gpr(3, rt.memory().aot_load32(ctx.gpr[19] + static_cast<std::uint32_t>(20)));
    ctx.set_gpr(4, ctx.gpr[3] + static_cast<std::uint32_t>(-1));
    rt.memory().aot_store32(ctx.gpr[19] + static_cast<std::uint32_t>(20), ctx.gpr[4]);
    ctx.set_gpr(3, static_cast<std::uint32_t>(static_cast<std::int32_t>(ctx.gpr[4]) >> 1u));
    ctx.set_gpr(4, ctx.gpr[4] | ctx.gpr[3]);
    rt.memory().aot_store32(ctx.gpr[19] + static_cast<std::uint32_t>(20), ctx.gpr[4]);
    ctx.set_gpr(3, static_cast<std::uint32_t>(static_cast<std::int32_t>(ctx.gpr[4]) >> 2u));
    ctx.set_gpr(4, ctx.gpr[4] | ctx.gpr[3]);
    rt.memory().aot_store32(ctx.gpr[19] + static_cast<std::uint32_t>(20), ctx.gpr[4]);
    ctx.set_gpr(3, static_cast<std::uint32_t>(static_cast<std::int32_t>(ctx.gpr[4]) >> 4u));
    ctx.set_gpr(4, ctx.gpr[4] | ctx.gpr[3]);
    rt.memory().aot_store32(ctx.gpr[19] + static_cast<std::uint32_t>(20), ctx.gpr[4]);
    ctx.set_gpr(3, static_cast<std::uint32_t>(static_cast<std::int32_t>(ctx.gpr[4]) >> 8u));
    ctx.set_gpr(4, ctx.gpr[4] | ctx.gpr[3]);
    rt.memory().aot_store32(ctx.gpr[19] + static_cast<std::uint32_t>(20), ctx.gpr[4]);
    ctx.set_gpr(3, static_cast<std::uint32_t>(static_cast<std::int32_t>(ctx.gpr[4]) >> 16u));
    ctx.set_gpr(3, ctx.gpr[4] | ctx.gpr[3]);
    rt.memory().aot_store32(ctx.gpr[19] + static_cast<std::uint32_t>(20), ctx.gpr[3]);
    ctx.set_gpr(3, ctx.gpr[3] + static_cast<std::uint32_t>(1));
    rt.memory().aot_store32(ctx.gpr[19] + static_cast<std::uint32_t>(20), ctx.gpr[3]);
    ctx.set_gpr(4, rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(44)));
    { const bool branch_taken = ctx.gpr[4] == 0u;
    // nop
      if (branch_taken) {
          goto L_08A43208;
      }
      goto L_08A43200;
    }
L_08A43200:
    ctx.set_gpr(31, 0x08A43208u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0014_entry, 14u, 257u, 0x0883D454u>(ctx, &aot_mem) && ctx.pc == 0x08A43208u) goto L_08A43208;
    return;
L_08A43208:
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
L_08A4322C:
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
    ctx.set_gpr(2, rt.memory().aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(8)));
    ctx.set_gpr(17, rt.memory().aot_load32(ctx.gpr[2] + static_cast<std::uint32_t>(8)));
    ctx.set_gpr(20, 0u + 0u);
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_08A4330C;
      }
      goto L_08A43268;
    }
L_08A43268:
    ctx.set_gpr(2, rt.memory().aot_load32(ctx.gpr[21] + static_cast<std::uint32_t>(8)));
    ctx.set_gpr(5, ctx.gpr[20] << 2u);
    ctx.set_gpr(2, rt.memory().aot_load32(ctx.gpr[2] + static_cast<std::uint32_t>(16)));
    ctx.set_gpr(2, ctx.gpr[2] + ctx.gpr[5]);
    ctx.set_gpr(16, rt.memory().aot_load32(ctx.gpr[2] + static_cast<std::uint32_t>(0)));
    ctx.set_gpr(4, rt.memory().aot_load32(ctx.gpr[21] + static_cast<std::uint32_t>(16)));
    ctx.set_gpr(2, rt.memory().aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(8)));
    { const bool branch_taken = ctx.gpr[2] == 0u;
    // nop
      if (branch_taken) {
          goto L_08A432B4;
      }
      goto L_08A4328C;
    }
L_08A4328C:
    { const bool branch_taken = static_cast<std::int32_t>(ctx.gpr[20]) < 0;
    // nop
      if (branch_taken) {
          goto L_08A432B4;
      }
      goto L_08A43294;
    }
L_08A43294:
    ctx.set_gpr(1, static_cast<std::int32_t>(ctx.gpr[20]) < static_cast<std::int32_t>(ctx.gpr[2]) ? 1u : 0u);
    { const bool branch_taken = ctx.gpr[1] == 0u;
    // nop
      if (branch_taken) {
          goto L_08A432B4;
      }
      goto L_08A432A0;
    }
L_08A432A0:
    ctx.set_gpr(2, 2229u << 16u);
    ctx.set_gpr(3, rt.memory().aot_load32(ctx.gpr[2] + static_cast<std::uint32_t>(22236)));
    ctx.set_gpr(2, rt.memory().aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(16)));
    ctx.set_gpr(2, ctx.gpr[2] + ctx.gpr[5]);
    rt.memory().aot_store32(ctx.gpr[2] + static_cast<std::uint32_t>(0), ctx.gpr[3]);
    goto L_08A432B4;
L_08A432B4:
    ctx.set_gpr(22, rt.memory().aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(8)));
    ctx.set_gpr(19, 0u + 0u);
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_08A432FC;
      }
      goto L_08A432C4;
    }
L_08A432C4:
    ctx.set_gpr(3, ctx.gpr[19] << 2u);
    ctx.set_gpr(2, rt.memory().aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(16)));
    ctx.set_gpr(2, ctx.gpr[2] + ctx.gpr[3]);
    ctx.set_gpr(18, rt.memory().aot_load32(ctx.gpr[2] + static_cast<std::uint32_t>(0)));
    ctx.set_gpr(4, ctx.gpr[21] + 0u);
    ctx.set_gpr(31, 0x08A432E0u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0081_entry, 81u, 41u, 0x0894835Cu>(ctx, &aot_mem) && ctx.pc == 0x08A432E0u) goto L_08A432E0;
    return;
L_08A432E0:
    ctx.set_gpr(4, ctx.gpr[2] + 0u);
    ctx.set_gpr(5, ctx.gpr[18] + 0u);
    ctx.set_gpr(25, rt.memory().aot_load32(ctx.gpr[2] + static_cast<std::uint32_t>(0)));
    ctx.set_gpr(25, rt.memory().aot_load32(ctx.gpr[25] + static_cast<std::uint32_t>(144)));
    jump_target = ctx.gpr[25];
    ctx.set_gpr(31, 0x08A432F8u);
    // nop
    ctx.pc = jump_target;
    if (rt.invoke_chained_call(ctx, &aot_mem) && ctx.pc == 0x08A432F8u) goto L_08A432F8;
    return;
L_08A432F8:
    ctx.set_gpr(19, ctx.gpr[19] + static_cast<std::uint32_t>(1));
    goto L_08A432FC;
L_08A432FC:
    ctx.set_gpr(2, static_cast<std::int32_t>(ctx.gpr[19]) < static_cast<std::int32_t>(ctx.gpr[22]) ? 1u : 0u);
    { const bool branch_taken = ctx.gpr[2] != 0u;
    // nop
      if (branch_taken) {
          goto L_08A432C4;
      }
      goto L_08A43308;
    }
L_08A43308:
    ctx.set_gpr(20, ctx.gpr[20] + static_cast<std::uint32_t>(1));
    goto L_08A4330C;
L_08A4330C:
    ctx.set_gpr(2, static_cast<std::int32_t>(ctx.gpr[20]) < static_cast<std::int32_t>(ctx.gpr[17]) ? 1u : 0u);
    { const bool branch_taken = ctx.gpr[2] != 0u;
    // nop
      if (branch_taken) {
          goto L_08A43268;
      }
      goto L_08A43318;
    }
L_08A43318:
    ctx.set_gpr(4, ctx.gpr[21] + 0u);
    ctx.set_gpr(31, 0x08A43324u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0080_entry, 80u, 426u, 0x08945EA4u>(ctx, &aot_mem) && ctx.pc == 0x08A43324u) goto L_08A43324;
    return;
L_08A43324:
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
L_08A43350:
    ctx.set_gpr(29, ctx.gpr[29] + static_cast<std::uint32_t>(-48));
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(28), ctx.gpr[31]);
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(24), ctx.gpr[20]);
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(20), ctx.gpr[19]);
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(16), ctx.gpr[18]);
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(12), ctx.gpr[17]);
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(8), ctx.gpr[16]);
    ctx.set_gpr(20, ctx.gpr[4] + 0u);
    ctx.set_gpr(19, ctx.gpr[5] + 0u);
    ctx.set_gpr(5, rt.memory().aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(20)));
    ctx.set_gpr(2, ctx.gpr[5] + static_cast<std::uint32_t>(-1));
    ctx.set_gpr(3, ~(ctx.gpr[2] | 0u));
    ctx.set_gpr(2, ctx.gpr[19] + ctx.gpr[5]);
    ctx.set_gpr(2, ctx.gpr[2] + static_cast<std::uint32_t>(-1));
    ctx.set_gpr(2, ctx.gpr[3] & ctx.gpr[2]);
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(44), ctx.gpr[2]);
    ctx.set_gpr(4, rt.memory().aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(12)));
    ctx.set_gpr(5, ctx.gpr[29] + static_cast<std::uint32_t>(44));
    ctx.set_gpr(6, 0u + 0u);
    ctx.set_gpr(31, 0x08A433A4u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0105_entry, 105u, 481u, 0x089AA5CCu>(ctx, &aot_mem) && ctx.pc == 0x08A433A4u) goto L_08A433A4;
    return;
L_08A433A4:
    ctx.set_gpr(18, ctx.gpr[2] + 0u);
    ctx.set_gpr(3, 0u + static_cast<std::uint32_t>(-1));
    { const bool branch_taken = ctx.gpr[2] != ctx.gpr[3];
    // nop
      if (branch_taken) {
          goto L_08A433D0;
      }
      goto L_08A433B4;
    }
L_08A433B4:
    ctx.set_gpr(4, ctx.gpr[20] + 0u);
    ctx.set_gpr(5, ctx.gpr[19] + 0u);
    ctx.set_gpr(31, 0x08A433C4u);
    // nop
    goto L_08A435F8;
L_08A433C4:
    ctx.set_gpr(2, rt.memory().aot_load32(ctx.gpr[20] + static_cast<std::uint32_t>(8)));
    ctx.set_gpr(2, rt.memory().aot_load32(ctx.gpr[2] + static_cast<std::uint32_t>(8)));
    ctx.set_gpr(18, ctx.gpr[2] + static_cast<std::uint32_t>(-1));
    goto L_08A433D0;
L_08A433D0:
    ctx.set_gpr(2, rt.memory().aot_load32(ctx.gpr[20] + static_cast<std::uint32_t>(16)));
    ctx.set_gpr(17, ctx.gpr[18] << 2u);
    ctx.set_gpr(2, rt.memory().aot_load32(ctx.gpr[2] + static_cast<std::uint32_t>(16)));
    ctx.set_gpr(2, ctx.gpr[2] + ctx.gpr[17]);
    ctx.set_gpr(16, rt.memory().aot_load32(ctx.gpr[2] + static_cast<std::uint32_t>(0)));
    ctx.set_gpr(2, rt.memory().aot_load32(ctx.gpr[20] + static_cast<std::uint32_t>(8)));
    ctx.set_gpr(2, rt.memory().aot_load32(ctx.gpr[2] + static_cast<std::uint32_t>(16)));
    ctx.set_gpr(2, ctx.gpr[2] + ctx.gpr[17]);
    ctx.set_gpr(2, rt.memory().aot_load32(ctx.gpr[2] + static_cast<std::uint32_t>(0)));
    ctx.set_gpr(3, rt.memory().aot_load32(ctx.gpr[2] + static_cast<std::uint32_t>(8)));
    ctx.set_gpr(2, static_cast<std::int32_t>(ctx.gpr[16]) < static_cast<std::int32_t>(ctx.gpr[3]) ? 1u : 0u);
    { const bool branch_taken = ctx.gpr[2] != 0u;
    // nop
      if (branch_taken) {
          goto L_08A43418;
      }
      goto L_08A43404;
    }
L_08A43404:
    ctx.set_gpr(6, ctx.gpr[3] + static_cast<std::uint32_t>(1));
    ctx.set_gpr(4, ctx.gpr[20] + 0u);
    ctx.set_gpr(5, ctx.gpr[19] + 0u);
    ctx.set_gpr(31, 0x08A43418u);
    // nop
    goto L_08A439B4;
L_08A43418:
    ctx.set_gpr(2, rt.memory().aot_load32(ctx.gpr[20] + static_cast<std::uint32_t>(8)));
    ctx.set_gpr(2, rt.memory().aot_load32(ctx.gpr[2] + static_cast<std::uint32_t>(16)));
    ctx.set_gpr(2, ctx.gpr[2] + ctx.gpr[17]);
    ctx.set_gpr(2, rt.memory().aot_load32(ctx.gpr[2] + static_cast<std::uint32_t>(0)));
    ctx.set_gpr(3, ctx.gpr[16] << 2u);
    ctx.set_gpr(2, rt.memory().aot_load32(ctx.gpr[2] + static_cast<std::uint32_t>(16)));
    ctx.set_gpr(2, ctx.gpr[2] + ctx.gpr[3]);
    ctx.set_gpr(2, rt.memory().aot_load32(ctx.gpr[2] + static_cast<std::uint32_t>(0)));
    ctx.set_gpr(5, ctx.gpr[16] + static_cast<std::uint32_t>(1));
    ctx.set_gpr(4, rt.memory().aot_load32(ctx.gpr[20] + static_cast<std::uint32_t>(16)));
    ctx.set_gpr(3, rt.memory().aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(8)));
    { const bool branch_taken = ctx.gpr[3] == 0u;
    // nop
      if (branch_taken) {
          goto L_08A4346C;
      }
      goto L_08A4344C;
    }
L_08A4344C:
    { const bool branch_taken = static_cast<std::int32_t>(ctx.gpr[18]) < 0;
    // nop
      if (branch_taken) {
          goto L_08A4346C;
      }
      goto L_08A43454;
    }
L_08A43454:
    ctx.set_gpr(1, static_cast<std::int32_t>(ctx.gpr[18]) < static_cast<std::int32_t>(ctx.gpr[3]) ? 1u : 0u);
    { const bool branch_taken = ctx.gpr[1] == 0u;
    // nop
      if (branch_taken) {
          goto L_08A4346C;
      }
      goto L_08A43460;
    }
L_08A43460:
    ctx.set_gpr(3, rt.memory().aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(16)));
    ctx.set_gpr(3, ctx.gpr[3] + ctx.gpr[17]);
    rt.memory().aot_store32(ctx.gpr[3] + static_cast<std::uint32_t>(0), ctx.gpr[5]);
    goto L_08A4346C;
L_08A4346C:
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
L_08A43490:
    ctx.set_gpr(29, ctx.gpr[29] + static_cast<std::uint32_t>(-32));
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(12), ctx.gpr[31]);
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(8), ctx.gpr[17]);
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(4), ctx.gpr[16]);
    ctx.set_gpr(17, ctx.gpr[4] + 0u);
    ctx.set_gpr(16, ctx.gpr[5] + 0u);
    ctx.set_gpr(5, rt.memory().aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(20)));
    ctx.set_gpr(2, ctx.gpr[5] + static_cast<std::uint32_t>(-1));
    ctx.set_gpr(3, ~(ctx.gpr[2] | 0u));
    ctx.set_gpr(2, ctx.gpr[6] + ctx.gpr[5]);
    ctx.set_gpr(2, ctx.gpr[2] + static_cast<std::uint32_t>(-1));
    ctx.set_gpr(2, ctx.gpr[3] & ctx.gpr[2]);
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(28), ctx.gpr[2]);
    ctx.set_gpr(4, rt.memory().aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(12)));
    ctx.set_gpr(5, ctx.gpr[29] + static_cast<std::uint32_t>(28));
    ctx.set_gpr(6, 0u + 0u);
    ctx.set_gpr(31, 0x08A434D8u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0105_entry, 105u, 481u, 0x089AA5CCu>(ctx, &aot_mem) && ctx.pc == 0x08A434D8u) goto L_08A434D8;
    return;
L_08A434D8:
    ctx.set_gpr(10, rt.memory().aot_load32(ctx.gpr[17] + static_cast<std::uint32_t>(8)));
    ctx.set_gpr(3, ctx.gpr[2] << 2u);
    ctx.set_gpr(4, rt.memory().aot_load32(ctx.gpr[10] + static_cast<std::uint32_t>(16)));
    ctx.set_gpr(4, ctx.gpr[4] + ctx.gpr[3]);
    ctx.set_gpr(8, rt.memory().aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(0)));
    ctx.set_gpr(7, rt.memory().aot_load32(ctx.gpr[8] + static_cast<std::uint32_t>(8)));
    ctx.set_gpr(4, 0u + 0u);
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_08A43520;
      }
      goto L_08A434FC;
    }
L_08A434FC:
    ctx.set_gpr(6, ctx.gpr[4] << 2u);
    ctx.set_gpr(5, rt.memory().aot_load32(ctx.gpr[8] + static_cast<std::uint32_t>(16)));
    ctx.set_gpr(5, ctx.gpr[5] + ctx.gpr[6]);
    ctx.set_gpr(5, rt.memory().aot_load32(ctx.gpr[5] + static_cast<std::uint32_t>(0)));
    { const bool branch_taken = ctx.gpr[16] != ctx.gpr[5];
    // nop
      if (branch_taken) {
          goto L_08A4351C;
      }
      goto L_08A43514;
    }
L_08A43514:
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_08A43530;
      }
      goto L_08A4351C;
    }
L_08A4351C:
    ctx.set_gpr(4, ctx.gpr[4] + static_cast<std::uint32_t>(1));
    goto L_08A43520;
L_08A43520:
    ctx.set_gpr(5, static_cast<std::int32_t>(ctx.gpr[4]) < static_cast<std::int32_t>(ctx.gpr[7]) ? 1u : 0u);
    { const bool branch_taken = ctx.gpr[5] != 0u;
    // nop
      if (branch_taken) {
          goto L_08A434FC;
      }
      goto L_08A4352C;
    }
L_08A4352C:
    ctx.set_gpr(4, 0u + static_cast<std::uint32_t>(-1));
    goto L_08A43530;
L_08A43530:
    ctx.set_gpr(5, rt.memory().aot_load32(ctx.gpr[17] + static_cast<std::uint32_t>(16)));
    ctx.set_gpr(6, ctx.gpr[2] << 2u);
    ctx.set_gpr(5, rt.memory().aot_load32(ctx.gpr[5] + static_cast<std::uint32_t>(16)));
    ctx.set_gpr(5, ctx.gpr[5] + ctx.gpr[6]);
    ctx.set_gpr(9, rt.memory().aot_load32(ctx.gpr[5] + static_cast<std::uint32_t>(0)));
    ctx.set_gpr(5, rt.memory().aot_load32(ctx.gpr[10] + static_cast<std::uint32_t>(16)));
    ctx.set_gpr(5, ctx.gpr[5] + ctx.gpr[6]);
    ctx.set_gpr(7, rt.memory().aot_load32(ctx.gpr[5] + static_cast<std::uint32_t>(0)));
    ctx.set_gpr(6, rt.memory().aot_load32(ctx.gpr[7] + static_cast<std::uint32_t>(8)));
    { const bool branch_taken = ctx.gpr[6] == 0u;
    // nop
      if (branch_taken) {
          goto L_08A435AC;
      }
      goto L_08A4355C;
    }
L_08A4355C:
    ctx.set_gpr(5, ctx.gpr[9] + static_cast<std::uint32_t>(-1));
    { const bool branch_taken = static_cast<std::int32_t>(ctx.gpr[5]) < 0;
    // nop
      if (branch_taken) {
          goto L_08A435AC;
      }
      goto L_08A43568;
    }
L_08A43568:
    ctx.set_gpr(1, static_cast<std::int32_t>(ctx.gpr[5]) < static_cast<std::int32_t>(ctx.gpr[6]) ? 1u : 0u);
    { const bool branch_taken = ctx.gpr[1] == 0u;
    // nop
      if (branch_taken) {
          goto L_08A435AC;
      }
      goto L_08A43574;
    }
L_08A43574:
    { const bool branch_taken = static_cast<std::int32_t>(ctx.gpr[4]) < 0;
    // nop
      if (branch_taken) {
          goto L_08A435AC;
      }
      goto L_08A4357C;
    }
L_08A4357C:
    ctx.set_gpr(1, static_cast<std::int32_t>(ctx.gpr[4]) < static_cast<std::int32_t>(ctx.gpr[6]) ? 1u : 0u);
    { const bool branch_taken = ctx.gpr[1] == 0u;
    // nop
      if (branch_taken) {
          goto L_08A435AC;
      }
      goto L_08A43588;
    }
L_08A43588:
    ctx.set_gpr(8, rt.memory().aot_load32(ctx.gpr[7] + static_cast<std::uint32_t>(16)));
    ctx.set_gpr(5, ctx.gpr[9] << 2u);
    ctx.set_gpr(7, ctx.gpr[5] + ctx.gpr[8]);
    ctx.set_gpr(6, rt.memory().aot_load32(ctx.gpr[7] + static_cast<std::uint32_t>(-4)));
    ctx.set_gpr(4, ctx.gpr[4] << 2u);
    ctx.set_gpr(5, ctx.gpr[8] + ctx.gpr[4]);
    ctx.set_gpr(4, rt.memory().aot_load32(ctx.gpr[5] + static_cast<std::uint32_t>(0)));
    rt.memory().aot_store32(ctx.gpr[7] + static_cast<std::uint32_t>(-4), ctx.gpr[4]);
    rt.memory().aot_store32(ctx.gpr[5] + static_cast<std::uint32_t>(0), ctx.gpr[6]);
    goto L_08A435AC;
L_08A435AC:
    ctx.set_gpr(6, ctx.gpr[9] + static_cast<std::uint32_t>(-1));
    ctx.set_gpr(5, rt.memory().aot_load32(ctx.gpr[17] + static_cast<std::uint32_t>(16)));
    ctx.set_gpr(4, rt.memory().aot_load32(ctx.gpr[5] + static_cast<std::uint32_t>(8)));
    { const bool branch_taken = ctx.gpr[4] == 0u;
    // nop
      if (branch_taken) {
          goto L_08A435E0;
      }
      goto L_08A435C0;
    }
L_08A435C0:
    { const bool branch_taken = static_cast<std::int32_t>(ctx.gpr[2]) < 0;
    // nop
      if (branch_taken) {
          goto L_08A435E0;
      }
      goto L_08A435C8;
    }
L_08A435C8:
    ctx.set_gpr(1, static_cast<std::int32_t>(ctx.gpr[2]) < static_cast<std::int32_t>(ctx.gpr[4]) ? 1u : 0u);
    { const bool branch_taken = ctx.gpr[1] == 0u;
    // nop
      if (branch_taken) {
          goto L_08A435E0;
      }
      goto L_08A435D4;
    }
L_08A435D4:
    ctx.set_gpr(4, rt.memory().aot_load32(ctx.gpr[5] + static_cast<std::uint32_t>(16)));
    ctx.set_gpr(3, ctx.gpr[4] + ctx.gpr[3]);
    rt.memory().aot_store32(ctx.gpr[3] + static_cast<std::uint32_t>(0), ctx.gpr[6]);
    goto L_08A435E0;
L_08A435E0:
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
L_08A435F8:
    ctx.set_gpr(29, ctx.gpr[29] + static_cast<std::uint32_t>(-48));
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(28), ctx.gpr[31]);
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(24), ctx.gpr[19]);
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(20), ctx.gpr[18]);
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(16), ctx.gpr[17]);
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(12), ctx.gpr[16]);
    ctx.set_gpr(19, ctx.gpr[4] + 0u);
    ctx.set_gpr(7, rt.memory().aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(20)));
    ctx.set_gpr(3, ctx.gpr[7] + static_cast<std::uint32_t>(-1));
    ctx.set_gpr(6, ~(ctx.gpr[3] | 0u));
    ctx.set_gpr(3, ctx.gpr[5] + ctx.gpr[7]);
    ctx.set_gpr(3, ctx.gpr[3] + static_cast<std::uint32_t>(-1));
    ctx.set_gpr(18, ctx.gpr[6] & ctx.gpr[3]);
    ctx.set_gpr(6, rt.memory().aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(12)));
    ctx.set_gpr(5, rt.memory().aot_load32(ctx.gpr[6] + static_cast<std::uint32_t>(8)));
    ctx.set_gpr(7, 0u + 0u);
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_08A43664;
      }
      goto L_08A43640;
    }
L_08A43640:
    ctx.set_gpr(4, ctx.gpr[7] << 2u);
    ctx.set_gpr(3, rt.memory().aot_load32(ctx.gpr[6] + static_cast<std::uint32_t>(16)));
    ctx.set_gpr(3, ctx.gpr[3] + ctx.gpr[4]);
    ctx.set_gpr(3, rt.memory().aot_load32(ctx.gpr[3] + static_cast<std::uint32_t>(0)));
    { const bool branch_taken = ctx.gpr[18] != ctx.gpr[3];
    // nop
      if (branch_taken) {
          goto L_08A43660;
      }
      goto L_08A43658;
    }
L_08A43658:
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_08A43674;
      }
      goto L_08A43660;
    }
L_08A43660:
    ctx.set_gpr(7, ctx.gpr[7] + static_cast<std::uint32_t>(1));
    goto L_08A43664;
L_08A43664:
    ctx.set_gpr(3, static_cast<std::int32_t>(ctx.gpr[7]) < static_cast<std::int32_t>(ctx.gpr[5]) ? 1u : 0u);
    { const bool branch_taken = ctx.gpr[3] != 0u;
    // nop
      if (branch_taken) {
          goto L_08A43640;
      }
      goto L_08A43670;
    }
L_08A43670:
    ctx.set_gpr(7, 0u + static_cast<std::uint32_t>(-1));
    goto L_08A43674;
L_08A43674:
    ctx.set_gpr(3, 0u + static_cast<std::uint32_t>(-1));
    { const bool branch_taken = ctx.gpr[7] != ctx.gpr[3];
    // nop
      if (branch_taken) {
          goto L_08A43768;
      }
      goto L_08A43680;
    }
L_08A43680:
    ctx.set_gpr(4, ctx.gpr[19] + 0u);
    ctx.set_gpr(31, 0x08A4368Cu);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0081_entry, 81u, 41u, 0x0894835Cu>(ctx, &aot_mem) && ctx.pc == 0x08A4368Cu) goto L_08A4368C;
    return;
L_08A4368C:
    ctx.set_gpr(4, ctx.gpr[2] + 0u);
    ctx.set_gpr(31, 0x08A43698u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0061_entry, 61u, 111u, 0x088F8A08u>(ctx, &aot_mem) && ctx.pc == 0x08A43698u) goto L_08A43698;
    return;
L_08A43698:
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(44), ctx.gpr[2]);
    ctx.set_gpr(4, rt.memory().aot_load32(ctx.gpr[19] + static_cast<std::uint32_t>(8)));
    ctx.set_gpr(5, ctx.gpr[2] + 0u);
    ctx.set_gpr(31, 0x08A436ACu);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0081_entry, 81u, 299u, 0x089494E0u>(ctx, &aot_mem) && ctx.pc == 0x08A436ACu) goto L_08A436AC;
    return;
L_08A436AC:
    ctx.set_gpr(17, rt.memory().aot_load32(ctx.gpr[19] + static_cast<std::uint32_t>(12)));
    ctx.set_gpr(16, rt.memory().aot_load32(ctx.gpr[17] + static_cast<std::uint32_t>(8)));
    ctx.set_gpr(3, rt.memory().aot_load32(ctx.gpr[17] + static_cast<std::uint32_t>(12)));
    ctx.set_gpr(1, static_cast<std::int32_t>(ctx.gpr[16]) < static_cast<std::int32_t>(ctx.gpr[3]) ? 1u : 0u);
    { const bool branch_taken = ctx.gpr[1] == 0u;
    // nop
      if (branch_taken) {
          goto L_08A436D8;
      }
      goto L_08A436C4;
    }
L_08A436C4:
    ctx.set_gpr(3, rt.memory().aot_load32(ctx.gpr[17] + static_cast<std::uint32_t>(8)));
    ctx.set_gpr(3, ctx.gpr[3] + static_cast<std::uint32_t>(1));
    rt.memory().aot_store32(ctx.gpr[17] + static_cast<std::uint32_t>(8), ctx.gpr[3]);
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_08A436EC;
      }
      goto L_08A436D8;
    }
L_08A436D8:
    ctx.set_gpr(5, ctx.gpr[16] + static_cast<std::uint32_t>(1));
    ctx.set_gpr(4, ctx.gpr[17] + 0u);
    ctx.set_gpr(6, 0u + static_cast<std::uint32_t>(4));
    ctx.set_gpr(31, 0x08A436ECu);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0066_entry, 66u, 795u, 0x0890FB1Cu>(ctx, &aot_mem) && ctx.pc == 0x08A436ECu) goto L_08A436EC;
    return;
L_08A436EC:
    ctx.set_gpr(4, ctx.gpr[16] << 2u);
    ctx.set_gpr(3, rt.memory().aot_load32(ctx.gpr[17] + static_cast<std::uint32_t>(16)));
    ctx.set_gpr(3, ctx.gpr[3] + ctx.gpr[4]);
    rt.memory().aot_store32(ctx.gpr[3] + static_cast<std::uint32_t>(0), ctx.gpr[18]);
    ctx.set_gpr(17, rt.memory().aot_load32(ctx.gpr[19] + static_cast<std::uint32_t>(16)));
    ctx.set_gpr(16, rt.memory().aot_load32(ctx.gpr[17] + static_cast<std::uint32_t>(8)));
    ctx.set_gpr(3, rt.memory().aot_load32(ctx.gpr[17] + static_cast<std::uint32_t>(12)));
    ctx.set_gpr(1, static_cast<std::int32_t>(ctx.gpr[16]) < static_cast<std::int32_t>(ctx.gpr[3]) ? 1u : 0u);
    { const bool branch_taken = ctx.gpr[1] == 0u;
    // nop
      if (branch_taken) {
          goto L_08A43728;
      }
      goto L_08A43714;
    }
L_08A43714:
    ctx.set_gpr(3, rt.memory().aot_load32(ctx.gpr[17] + static_cast<std::uint32_t>(8)));
    ctx.set_gpr(3, ctx.gpr[3] + static_cast<std::uint32_t>(1));
    rt.memory().aot_store32(ctx.gpr[17] + static_cast<std::uint32_t>(8), ctx.gpr[3]);
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_08A4373C;
      }
      goto L_08A43728;
    }
L_08A43728:
    ctx.set_gpr(5, ctx.gpr[16] + static_cast<std::uint32_t>(1));
    ctx.set_gpr(4, ctx.gpr[17] + 0u);
    ctx.set_gpr(6, 0u + static_cast<std::uint32_t>(4));
    ctx.set_gpr(31, 0x08A4373Cu);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0066_entry, 66u, 795u, 0x0890FB1Cu>(ctx, &aot_mem) && ctx.pc == 0x08A4373Cu) goto L_08A4373C;
    return;
L_08A4373C:
    ctx.set_gpr(3, 2229u << 16u);
    ctx.set_gpr(5, rt.memory().aot_load32(ctx.gpr[3] + static_cast<std::uint32_t>(22240)));
    ctx.set_gpr(4, ctx.gpr[16] << 2u);
    ctx.set_gpr(3, rt.memory().aot_load32(ctx.gpr[17] + static_cast<std::uint32_t>(16)));
    ctx.set_gpr(3, ctx.gpr[3] + ctx.gpr[4]);
    rt.memory().aot_store32(ctx.gpr[3] + static_cast<std::uint32_t>(0), ctx.gpr[5]);
    ctx.set_gpr(4, rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(44)));
    { const bool branch_taken = ctx.gpr[4] == 0u;
    // nop
      if (branch_taken) {
          goto L_08A43768;
      }
      goto L_08A43760;
    }
L_08A43760:
    ctx.set_gpr(31, 0x08A43768u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0014_entry, 14u, 257u, 0x0883D454u>(ctx, &aot_mem) && ctx.pc == 0x08A43768u) goto L_08A43768;
    return;
L_08A43768:
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
L_08A43788:
    ctx.set_gpr(29, ctx.gpr[29] + static_cast<std::uint32_t>(-32));
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(28), ctx.gpr[31]);
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(24), ctx.gpr[21]);
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(20), ctx.gpr[20]);
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(16), ctx.gpr[19]);
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(12), ctx.gpr[18]);
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(8), ctx.gpr[17]);
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(4), ctx.gpr[16]);
    ctx.set_gpr(20, ctx.gpr[4] + 0u);
    ctx.set_gpr(19, ctx.gpr[5] + 0u);
    ctx.set_gpr(16, ctx.gpr[6] + 0u);
    ctx.set_gpr(18, ctx.gpr[7] + 0u);
    ctx.set_gpr(6, rt.memory().aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(20)));
    ctx.set_gpr(3, ctx.gpr[6] + static_cast<std::uint32_t>(-1));
    ctx.set_gpr(4, ~(ctx.gpr[3] | 0u));
    ctx.set_gpr(3, ctx.gpr[16] + ctx.gpr[6]);
    ctx.set_gpr(3, ctx.gpr[3] + static_cast<std::uint32_t>(-1));
    ctx.set_gpr(16, ctx.gpr[4] & ctx.gpr[3]);
    ctx.set_gpr(17, rt.memory().aot_load32(ctx.gpr[5] + static_cast<std::uint32_t>(8)));
    ctx.set_gpr(1, ctx.gpr[17] < ctx.gpr[18] ? 1u : 0u);
    { const bool branch_taken = ctx.gpr[1] == 0u;
    // nop
      if (branch_taken) {
          goto L_08A438D4;
      }
      goto L_08A437E0;
    }
L_08A437E0:
    ctx.set_gpr(3, rt.memory().aot_load32(ctx.gpr[19] + static_cast<std::uint32_t>(8)));
    ctx.set_gpr(3, static_cast<std::int32_t>(ctx.gpr[18]) < static_cast<std::int32_t>(ctx.gpr[3]) ? 1u : 0u);
    { const bool branch_taken = ctx.gpr[3] != 0u;
    // nop
      if (branch_taken) {
          goto L_08A43804;
      }
      goto L_08A437F0;
    }
L_08A437F0:
    ctx.set_gpr(4, ctx.gpr[19] + 0u);
    ctx.set_gpr(5, ctx.gpr[18] + 0u);
    ctx.set_gpr(6, 0u + static_cast<std::uint32_t>(4));
    ctx.set_gpr(31, 0x08A43804u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0066_entry, 66u, 785u, 0x0890FA2Cu>(ctx, &aot_mem) && ctx.pc == 0x08A43804u) goto L_08A43804;
    return;
L_08A43804:
    { const bool branch_taken = static_cast<std::int32_t>(ctx.gpr[18]) < 0;
    // nop
      if (branch_taken) {
          goto L_08A4383C;
      }
      goto L_08A4380C;
    }
L_08A4380C:
    ctx.set_gpr(3, rt.memory().aot_load32(ctx.gpr[19] + static_cast<std::uint32_t>(12)));
    ctx.set_gpr(1, static_cast<std::int32_t>(ctx.gpr[3]) < static_cast<std::int32_t>(ctx.gpr[18]) ? 1u : 0u);
    { const bool branch_taken = ctx.gpr[1] != 0u;
    // nop
      if (branch_taken) {
          goto L_08A43828;
      }
      goto L_08A4381C;
    }
L_08A4381C:
    rt.memory().aot_store32(ctx.gpr[19] + static_cast<std::uint32_t>(8), ctx.gpr[18]);
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_08A4383C;
      }
      goto L_08A43828;
    }
L_08A43828:
    ctx.set_gpr(4, ctx.gpr[19] + 0u);
    ctx.set_gpr(5, ctx.gpr[18] + 0u);
    ctx.set_gpr(6, 0u + static_cast<std::uint32_t>(4));
    ctx.set_gpr(31, 0x08A4383Cu);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0066_entry, 66u, 795u, 0x0890FB1Cu>(ctx, &aot_mem) && ctx.pc == 0x08A4383Cu) goto L_08A4383C;
    return;
L_08A4383C:
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_08A438C0;
      }
      goto L_08A43844;
    }
L_08A43844:
    ctx.set_gpr(4, ctx.gpr[16] + 0u);
    ctx.set_gpr(31, 0x08A43850u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0153_entry, 153u, 382u, 0x08A6A1ECu>(ctx, &aot_mem) && ctx.pc == 0x08A43850u) goto L_08A43850;
    return;
L_08A43850:
    ctx.set_gpr(21, ctx.gpr[2] + 0u);
    ctx.set_gpr(4, ctx.gpr[20] + 0u);
    ctx.set_gpr(31, 0x08A43860u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0081_entry, 81u, 41u, 0x0894835Cu>(ctx, &aot_mem) && ctx.pc == 0x08A43860u) goto L_08A43860;
    return;
L_08A43860:
    ctx.set_gpr(4, ctx.gpr[2] + 0u);
    ctx.set_gpr(5, ctx.gpr[21] + 0u);
    ctx.set_gpr(6, 0u + static_cast<std::uint32_t>(16));
    ctx.set_gpr(25, rt.memory().aot_load32(ctx.gpr[2] + static_cast<std::uint32_t>(0)));
    ctx.set_gpr(25, rt.memory().aot_load32(ctx.gpr[25] + static_cast<std::uint32_t>(96)));
    jump_target = ctx.gpr[25];
    ctx.set_gpr(31, 0x08A4387Cu);
    // nop
    ctx.pc = jump_target;
    if (rt.invoke_chained_call(ctx, &aot_mem) && ctx.pc == 0x08A4387Cu) goto L_08A4387C;
    return;
L_08A4387C:
    ctx.set_gpr(4, ctx.gpr[2] + 0u);
    ctx.set_gpr(5, ctx.gpr[16] + 0u);
    ctx.set_gpr(31, 0x08A4388Cu);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0153_entry, 153u, 383u, 0x08A6A208u>(ctx, &aot_mem) && ctx.pc == 0x08A4388Cu) goto L_08A4388C;
    return;
L_08A4388C:
    ctx.set_gpr(3, rt.memory().aot_load32(ctx.gpr[19] + static_cast<std::uint32_t>(8)));
    { const bool branch_taken = ctx.gpr[3] == 0u;
    // nop
      if (branch_taken) {
          goto L_08A438BC;
      }
      goto L_08A43898;
    }
L_08A43898:
    { const bool branch_taken = static_cast<std::int32_t>(ctx.gpr[17]) < 0;
    // nop
      if (branch_taken) {
          goto L_08A438BC;
      }
      goto L_08A438A0;
    }
L_08A438A0:
    ctx.set_gpr(1, static_cast<std::int32_t>(ctx.gpr[17]) < static_cast<std::int32_t>(ctx.gpr[3]) ? 1u : 0u);
    { const bool branch_taken = ctx.gpr[1] == 0u;
    // nop
      if (branch_taken) {
          goto L_08A438BC;
      }
      goto L_08A438AC;
    }
L_08A438AC:
    ctx.set_gpr(4, ctx.gpr[17] << 2u);
    ctx.set_gpr(3, rt.memory().aot_load32(ctx.gpr[19] + static_cast<std::uint32_t>(16)));
    ctx.set_gpr(3, ctx.gpr[3] + ctx.gpr[4]);
    rt.memory().aot_store32(ctx.gpr[3] + static_cast<std::uint32_t>(0), ctx.gpr[2]);
    goto L_08A438BC;
L_08A438BC:
    ctx.set_gpr(17, ctx.gpr[17] + static_cast<std::uint32_t>(1));
    goto L_08A438C0;
L_08A438C0:
    ctx.set_gpr(3, ctx.gpr[17] < ctx.gpr[18] ? 1u : 0u);
    { const bool branch_taken = ctx.gpr[3] != 0u;
    // nop
      if (branch_taken) {
          goto L_08A43844;
      }
      goto L_08A438CC;
    }
L_08A438CC:
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_08A4398C;
      }
      goto L_08A438D4;
    }
L_08A438D4:
    ctx.set_gpr(1, ctx.gpr[18] < ctx.gpr[17] ? 1u : 0u);
    { const bool branch_taken = ctx.gpr[1] == 0u;
    // nop
      if (branch_taken) {
          goto L_08A4398C;
      }
      goto L_08A438E0;
    }
L_08A438E0:
    ctx.set_gpr(16, ctx.gpr[18] + 0u);
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_08A43924;
      }
      goto L_08A438EC;
    }
L_08A438EC:
    ctx.set_gpr(3, ctx.gpr[16] << 2u);
    ctx.set_gpr(2, rt.memory().aot_load32(ctx.gpr[19] + static_cast<std::uint32_t>(16)));
    ctx.set_gpr(2, ctx.gpr[2] + ctx.gpr[3]);
    ctx.set_gpr(21, rt.memory().aot_load32(ctx.gpr[2] + static_cast<std::uint32_t>(0)));
    ctx.set_gpr(4, ctx.gpr[20] + 0u);
    ctx.set_gpr(31, 0x08A43908u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0081_entry, 81u, 41u, 0x0894835Cu>(ctx, &aot_mem) && ctx.pc == 0x08A43908u) goto L_08A43908;
    return;
L_08A43908:
    ctx.set_gpr(4, ctx.gpr[2] + 0u);
    ctx.set_gpr(5, ctx.gpr[21] + 0u);
    ctx.set_gpr(25, rt.memory().aot_load32(ctx.gpr[2] + static_cast<std::uint32_t>(0)));
    ctx.set_gpr(25, rt.memory().aot_load32(ctx.gpr[25] + static_cast<std::uint32_t>(144)));
    jump_target = ctx.gpr[25];
    ctx.set_gpr(31, 0x08A43920u);
    // nop
    ctx.pc = jump_target;
    if (rt.invoke_chained_call(ctx, &aot_mem) && ctx.pc == 0x08A43920u) goto L_08A43920;
    return;
L_08A43920:
    ctx.set_gpr(16, ctx.gpr[16] + static_cast<std::uint32_t>(1));
    goto L_08A43924;
L_08A43924:
    ctx.set_gpr(3, ctx.gpr[16] < ctx.gpr[17] ? 1u : 0u);
    { const bool branch_taken = ctx.gpr[3] != 0u;
    // nop
      if (branch_taken) {
          goto L_08A438EC;
      }
      goto L_08A43930;
    }
L_08A43930:
    { const bool branch_taken = static_cast<std::int32_t>(ctx.gpr[18]) < 0;
    // nop
      if (branch_taken) {
          goto L_08A43968;
      }
      goto L_08A43938;
    }
L_08A43938:
    ctx.set_gpr(3, rt.memory().aot_load32(ctx.gpr[19] + static_cast<std::uint32_t>(12)));
    ctx.set_gpr(1, static_cast<std::int32_t>(ctx.gpr[3]) < static_cast<std::int32_t>(ctx.gpr[18]) ? 1u : 0u);
    { const bool branch_taken = ctx.gpr[1] != 0u;
    // nop
      if (branch_taken) {
          goto L_08A43954;
      }
      goto L_08A43948;
    }
L_08A43948:
    rt.memory().aot_store32(ctx.gpr[19] + static_cast<std::uint32_t>(8), ctx.gpr[18]);
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_08A43968;
      }
      goto L_08A43954;
    }
L_08A43954:
    ctx.set_gpr(4, ctx.gpr[19] + 0u);
    ctx.set_gpr(5, ctx.gpr[18] + 0u);
    ctx.set_gpr(6, 0u + static_cast<std::uint32_t>(4));
    ctx.set_gpr(31, 0x08A43968u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0066_entry, 66u, 795u, 0x0890FB1Cu>(ctx, &aot_mem) && ctx.pc == 0x08A43968u) goto L_08A43968;
    return;
L_08A43968:
    ctx.set_gpr(3, rt.memory().aot_load32(ctx.gpr[19] + static_cast<std::uint32_t>(8)));
    ctx.set_gpr(3, static_cast<std::int32_t>(ctx.gpr[18]) < static_cast<std::int32_t>(ctx.gpr[3]) ? 1u : 0u);
    { const bool branch_taken = ctx.gpr[3] != 0u;
    // nop
      if (branch_taken) {
          goto L_08A4398C;
      }
      goto L_08A43978;
    }
L_08A43978:
    ctx.set_gpr(4, ctx.gpr[19] + 0u);
    ctx.set_gpr(5, ctx.gpr[18] + 0u);
    ctx.set_gpr(6, 0u + static_cast<std::uint32_t>(4));
    ctx.set_gpr(31, 0x08A4398Cu);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0066_entry, 66u, 785u, 0x0890FA2Cu>(ctx, &aot_mem) && ctx.pc == 0x08A4398Cu) goto L_08A4398C;
    return;
L_08A4398C:
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
L_08A439B4:
    ctx.set_gpr(29, ctx.gpr[29] + static_cast<std::uint32_t>(-32));
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(12), ctx.gpr[31]);
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(8), ctx.gpr[18]);
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(4), ctx.gpr[17]);
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(0), ctx.gpr[16]);
    ctx.set_gpr(18, ctx.gpr[4] + 0u);
    ctx.set_gpr(17, ctx.gpr[5] + 0u);
    ctx.set_gpr(16, ctx.gpr[6] + 0u);
    ctx.set_gpr(5, rt.memory().aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(20)));
    ctx.set_gpr(2, ctx.gpr[5] + static_cast<std::uint32_t>(-1));
    ctx.set_gpr(3, ~(ctx.gpr[2] | 0u));
    ctx.set_gpr(2, ctx.gpr[17] + ctx.gpr[5]);
    ctx.set_gpr(2, ctx.gpr[2] + static_cast<std::uint32_t>(-1));
    ctx.set_gpr(2, ctx.gpr[3] & ctx.gpr[2]);
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(28), ctx.gpr[2]);
    ctx.set_gpr(4, rt.memory().aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(12)));
    ctx.set_gpr(5, ctx.gpr[29] + static_cast<std::uint32_t>(28));
    ctx.set_gpr(6, 0u + 0u);
    ctx.set_gpr(31, 0x08A43A04u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0105_entry, 105u, 481u, 0x089AA5CCu>(ctx, &aot_mem) && ctx.pc == 0x08A43A04u) goto L_08A43A04;
    return;
L_08A43A04:
    ctx.set_gpr(3, 0u + static_cast<std::uint32_t>(-1));
    { const bool branch_taken = ctx.gpr[2] != ctx.gpr[3];
    // nop
      if (branch_taken) {
          goto L_08A43A2C;
      }
      goto L_08A43A10;
    }
L_08A43A10:
    ctx.set_gpr(4, ctx.gpr[18] + 0u);
    ctx.set_gpr(5, ctx.gpr[17] + 0u);
    ctx.set_gpr(31, 0x08A43A20u);
    // nop
    goto L_08A435F8;
L_08A43A20:
    ctx.set_gpr(2, rt.memory().aot_load32(ctx.gpr[18] + static_cast<std::uint32_t>(8)));
    ctx.set_gpr(2, rt.memory().aot_load32(ctx.gpr[2] + static_cast<std::uint32_t>(8)));
    ctx.set_gpr(2, ctx.gpr[2] + static_cast<std::uint32_t>(-1));
    goto L_08A43A2C;
L_08A43A2C:
    ctx.set_gpr(4, rt.memory().aot_load32(ctx.gpr[18] + static_cast<std::uint32_t>(8)));
    ctx.set_gpr(3, ctx.gpr[2] << 2u);
    ctx.set_gpr(2, rt.memory().aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(16)));
    ctx.set_gpr(2, ctx.gpr[2] + ctx.gpr[3]);
    ctx.set_gpr(5, rt.memory().aot_load32(ctx.gpr[2] + static_cast<std::uint32_t>(0)));
    ctx.set_gpr(4, ctx.gpr[18] + 0u);
    ctx.set_gpr(6, ctx.gpr[17] + 0u);
    ctx.set_gpr(7, ctx.gpr[16] + 0u);
    ctx.set_gpr(31, 0x08A43A54u);
    // nop
    goto L_08A43788;
L_08A43A54:
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
L_08A43A70:
    ctx.set_gpr(29, ctx.gpr[29] + static_cast<std::uint32_t>(-16));
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(12), ctx.gpr[31]);
    ctx.set_gpr(2, ctx.gpr[4] + 0u);
    ctx.set_gpr(4, rt.memory().aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(12)));
    ctx.set_gpr(8, rt.memory().aot_load32(ctx.gpr[2] + static_cast<std::uint32_t>(8)));
    ctx.set_gpr(25, rt.memory().aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(0)));
    ctx.set_gpr(25, rt.memory().aot_load32(ctx.gpr[25] + static_cast<std::uint32_t>(92)));
    jump_target = ctx.gpr[25];
    ctx.set_gpr(31, 0x08A43A94u);
    // nop
    ctx.pc = jump_target;
    if (rt.invoke_chained_call(ctx, &aot_mem) && ctx.pc == 0x08A43A94u) goto L_08A43A94;
    return;
L_08A43A94:
    ctx.set_gpr(2, 0u + static_cast<std::uint32_t>(1));
    ctx.set_gpr(31, rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(12)));
    ctx.set_gpr(29, ctx.gpr[29] + static_cast<std::uint32_t>(16));
    jump_target = ctx.gpr[31];
    // nop
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_08A43AA8:
    ctx.set_gpr(29, ctx.gpr[29] + static_cast<std::uint32_t>(-16));
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(12), ctx.gpr[31]);
    ctx.set_gpr(2, ctx.gpr[4] + 0u);
    ctx.set_gpr(4, rt.memory().aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(12)));
    ctx.set_gpr(10, rt.memory().aot_load32(ctx.gpr[2] + static_cast<std::uint32_t>(8)));
    ctx.set_gpr(25, rt.memory().aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(0)));
    ctx.set_gpr(25, rt.memory().aot_load32(ctx.gpr[25] + static_cast<std::uint32_t>(96)));
    jump_target = ctx.gpr[25];
    ctx.set_gpr(31, 0x08A43ACCu);
    // nop
    ctx.pc = jump_target;
    if (rt.invoke_chained_call(ctx, &aot_mem) && ctx.pc == 0x08A43ACCu) goto L_08A43ACC;
    return;
L_08A43ACC:
    ctx.set_gpr(2, 0u + static_cast<std::uint32_t>(1));
    ctx.set_gpr(31, rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(12)));
    ctx.set_gpr(29, ctx.gpr[29] + static_cast<std::uint32_t>(16));
    jump_target = ctx.gpr[31];
    // nop
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_08A43AE0:
    ctx.set_gpr(29, ctx.gpr[29] + static_cast<std::uint32_t>(-16));
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(12), ctx.gpr[31]);
    ctx.set_gpr(2, ctx.gpr[4] + 0u);
    ctx.set_gpr(4, rt.memory().aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(12)));
    ctx.set_gpr(8, rt.memory().aot_load32(ctx.gpr[2] + static_cast<std::uint32_t>(8)));
    ctx.set_gpr(25, rt.memory().aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(0)));
    ctx.set_gpr(25, rt.memory().aot_load32(ctx.gpr[25] + static_cast<std::uint32_t>(100)));
    jump_target = ctx.gpr[25];
    ctx.set_gpr(31, 0x08A43B04u);
    // nop
    ctx.pc = jump_target;
    if (rt.invoke_chained_call(ctx, &aot_mem) && ctx.pc == 0x08A43B04u) goto L_08A43B04;
    return;
L_08A43B04:
    ctx.set_gpr(31, rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(12)));
    ctx.set_gpr(29, ctx.gpr[29] + static_cast<std::uint32_t>(16));
    jump_target = ctx.gpr[31];
    // nop
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_08A43B14:
    ctx.set_gpr(29, ctx.gpr[29] + static_cast<std::uint32_t>(-16));
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(12), ctx.gpr[31]);
    ctx.set_gpr(2, ctx.gpr[4] + 0u);
    ctx.set_gpr(4, rt.memory().aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(12)));
    ctx.set_gpr(10, rt.memory().aot_load32(ctx.gpr[2] + static_cast<std::uint32_t>(8)));
    ctx.set_gpr(25, rt.memory().aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(0)));
    ctx.set_gpr(25, rt.memory().aot_load32(ctx.gpr[25] + static_cast<std::uint32_t>(104)));
    jump_target = ctx.gpr[25];
    ctx.set_gpr(31, 0x08A43B38u);
    // nop
    ctx.pc = jump_target;
    if (rt.invoke_chained_call(ctx, &aot_mem) && ctx.pc == 0x08A43B38u) goto L_08A43B38;
    return;
L_08A43B38:
    ctx.set_gpr(31, rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(12)));
    ctx.set_gpr(29, ctx.gpr[29] + static_cast<std::uint32_t>(16));
    jump_target = ctx.gpr[31];
    // nop
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_08A43B48:
    ctx.set_gpr(29, ctx.gpr[29] + static_cast<std::uint32_t>(-16));
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(12), ctx.gpr[31]);
    ctx.set_gpr(2, ctx.gpr[4] + 0u);
    ctx.set_gpr(4, rt.memory().aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(12)));
    ctx.set_gpr(10, rt.memory().aot_load32(ctx.gpr[2] + static_cast<std::uint32_t>(8)));
    ctx.set_gpr(25, rt.memory().aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(0)));
    ctx.set_gpr(25, rt.memory().aot_load32(ctx.gpr[25] + static_cast<std::uint32_t>(108)));
    jump_target = ctx.gpr[25];
    ctx.set_gpr(31, 0x08A43B6Cu);
    // nop
    ctx.pc = jump_target;
    if (rt.invoke_chained_call(ctx, &aot_mem) && ctx.pc == 0x08A43B6Cu) goto L_08A43B6C;
    return;
L_08A43B6C:
    ctx.set_gpr(31, rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(12)));
    ctx.set_gpr(29, ctx.gpr[29] + static_cast<std::uint32_t>(16));
    jump_target = ctx.gpr[31];
    // nop
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_08A43B7C:
    ctx.set_gpr(29, ctx.gpr[29] + static_cast<std::uint32_t>(-32));
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(28), ctx.gpr[31]);
    ctx.set_gpr(3, rt.memory().aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(12)));
    ctx.set_gpr(2, rt.memory().aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(8)));
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(0), ctx.gpr[2]);
    ctx.set_gpr(4, ctx.gpr[3] + 0u);
    ctx.set_gpr(25, rt.memory().aot_load32(ctx.gpr[3] + static_cast<std::uint32_t>(0)));
    ctx.set_gpr(25, rt.memory().aot_load32(ctx.gpr[25] + static_cast<std::uint32_t>(112)));
    jump_target = ctx.gpr[25];
    ctx.set_gpr(31, 0x08A43BA4u);
    // nop
    ctx.pc = jump_target;
    if (rt.invoke_chained_call(ctx, &aot_mem) && ctx.pc == 0x08A43BA4u) goto L_08A43BA4;
    return;
L_08A43BA4:
    ctx.set_gpr(31, rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(28)));
    ctx.set_gpr(29, ctx.gpr[29] + static_cast<std::uint32_t>(32));
    jump_target = ctx.gpr[31];
    // nop
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_08A43BB4:
    ctx.set_gpr(2, 0u + 0u);
    ctx.set_gpr(3, 0u + 0u);
    jump_target = ctx.gpr[31];
    // nop
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_08A43BC4:
    ctx.set_gpr(29, ctx.gpr[29] + static_cast<std::uint32_t>(-16));
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(12), ctx.gpr[31]);
    ctx.set_gpr(4, rt.memory().aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(12)));
    ctx.set_gpr(31, 0x08A43BD8u);
    // nop
    goto L_08A42948;
L_08A43BD8:
    ctx.set_gpr(31, rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(12)));
    ctx.set_gpr(29, ctx.gpr[29] + static_cast<std::uint32_t>(16));
    jump_target = ctx.gpr[31];
    // nop
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_08A43BE8:
    ctx.set_gpr(29, ctx.gpr[29] + static_cast<std::uint32_t>(-16));
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(12), ctx.gpr[31]);
    ctx.set_gpr(31, 0x08A43BF8u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0149_entry, 149u, 217u, 0x08A590A8u>(ctx, &aot_mem) && ctx.pc == 0x08A43BF8u) goto L_08A43BF8;
    return;
L_08A43BF8:
    ctx.set_gpr(31, rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(12)));
    ctx.set_gpr(29, ctx.gpr[29] + static_cast<std::uint32_t>(16));
    jump_target = ctx.gpr[31];
    // nop
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_08A43C08:
    ctx.set_gpr(29, ctx.gpr[29] + static_cast<std::uint32_t>(-32));
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(28), ctx.gpr[31]);
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(24), ctx.gpr[19]);
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(20), ctx.gpr[18]);
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(16), ctx.gpr[17]);
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(12), ctx.gpr[16]);
    ctx.set_gpr(16, ctx.gpr[4] + 0u);
    ctx.set_gpr(18, rt.memory().aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(64)));
    ctx.set_gpr(17, rt.memory().aot_load32(ctx.gpr[18] + static_cast<std::uint32_t>(8)));
    ctx.set_gpr(19, 0u + 0u);
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_08A43C5C;
      }
      goto L_08A43C38;
    }
L_08A43C38:
    ctx.set_gpr(3, ctx.gpr[19] << 2u);
    ctx.set_gpr(2, rt.memory().aot_load32(ctx.gpr[18] + static_cast<std::uint32_t>(16)));
    ctx.set_gpr(2, ctx.gpr[2] + ctx.gpr[3]);
    ctx.set_gpr(4, rt.memory().aot_load32(ctx.gpr[2] + static_cast<std::uint32_t>(0)));
    { const bool branch_taken = ctx.gpr[4] == 0u;
    // nop
      if (branch_taken) {
          goto L_08A43C58;
      }
      goto L_08A43C50;
    }
L_08A43C50:
    ctx.set_gpr(31, 0x08A43C58u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0014_entry, 14u, 257u, 0x0883D454u>(ctx, &aot_mem) && ctx.pc == 0x08A43C58u) goto L_08A43C58;
    return;
L_08A43C58:
    ctx.set_gpr(19, ctx.gpr[19] + static_cast<std::uint32_t>(1));
    goto L_08A43C5C;
L_08A43C5C:
    ctx.set_gpr(2, static_cast<std::int32_t>(ctx.gpr[19]) < static_cast<std::int32_t>(ctx.gpr[17]) ? 1u : 0u);
    { const bool branch_taken = ctx.gpr[2] != 0u;
    // nop
      if (branch_taken) {
          goto L_08A43C38;
      }
      goto L_08A43C68;
    }
L_08A43C68:
    ctx.set_gpr(4, rt.memory().aot_load32(ctx.gpr[18] + static_cast<std::uint32_t>(8)));
    ctx.set_gpr(5, 0u + 0u);
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_08A43C8C;
      }
      goto L_08A43C78;
    }
L_08A43C78:
    ctx.set_gpr(3, ctx.gpr[5] << 2u);
    ctx.set_gpr(2, rt.memory().aot_load32(ctx.gpr[18] + static_cast<std::uint32_t>(16)));
    ctx.set_gpr(2, ctx.gpr[2] + ctx.gpr[3]);
    rt.memory().aot_store32(ctx.gpr[2] + static_cast<std::uint32_t>(0), 0u);
    ctx.set_gpr(5, ctx.gpr[5] + static_cast<std::uint32_t>(1));
    goto L_08A43C8C;
L_08A43C8C:
    ctx.set_gpr(2, static_cast<std::int32_t>(ctx.gpr[5]) < static_cast<std::int32_t>(ctx.gpr[4]) ? 1u : 0u);
    { const bool branch_taken = ctx.gpr[2] != 0u;
    // nop
      if (branch_taken) {
          goto L_08A43C78;
      }
      goto L_08A43C98;
    }
L_08A43C98:
    rt.memory().aot_store32(ctx.gpr[18] + static_cast<std::uint32_t>(8), 0u);
    ctx.set_gpr(18, rt.memory().aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(68)));
    ctx.set_gpr(17, rt.memory().aot_load32(ctx.gpr[18] + static_cast<std::uint32_t>(8)));
    ctx.set_gpr(19, 0u + 0u);
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_08A43CD4;
      }
      goto L_08A43CB0;
    }
L_08A43CB0:
    ctx.set_gpr(3, ctx.gpr[19] << 2u);
    ctx.set_gpr(2, rt.memory().aot_load32(ctx.gpr[18] + static_cast<std::uint32_t>(16)));
    ctx.set_gpr(2, ctx.gpr[2] + ctx.gpr[3]);
    ctx.set_gpr(4, rt.memory().aot_load32(ctx.gpr[2] + static_cast<std::uint32_t>(0)));
    { const bool branch_taken = ctx.gpr[4] == 0u;
    // nop
      if (branch_taken) {
          goto L_08A43CD0;
      }
      goto L_08A43CC8;
    }
L_08A43CC8:
    ctx.set_gpr(31, 0x08A43CD0u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0014_entry, 14u, 257u, 0x0883D454u>(ctx, &aot_mem) && ctx.pc == 0x08A43CD0u) goto L_08A43CD0;
    return;
L_08A43CD0:
    ctx.set_gpr(19, ctx.gpr[19] + static_cast<std::uint32_t>(1));
    goto L_08A43CD4;
L_08A43CD4:
    ctx.set_gpr(2, static_cast<std::int32_t>(ctx.gpr[19]) < static_cast<std::int32_t>(ctx.gpr[17]) ? 1u : 0u);
    { const bool branch_taken = ctx.gpr[2] != 0u;
    // nop
      if (branch_taken) {
          goto L_08A43CB0;
      }
      goto L_08A43CE0;
    }
L_08A43CE0:
    ctx.set_gpr(4, rt.memory().aot_load32(ctx.gpr[18] + static_cast<std::uint32_t>(8)));
    ctx.set_gpr(5, 0u + 0u);
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_08A43D04;
      }
      goto L_08A43CF0;
    }
L_08A43CF0:
    ctx.set_gpr(3, ctx.gpr[5] << 2u);
    ctx.set_gpr(2, rt.memory().aot_load32(ctx.gpr[18] + static_cast<std::uint32_t>(16)));
    ctx.set_gpr(2, ctx.gpr[2] + ctx.gpr[3]);
    rt.memory().aot_store32(ctx.gpr[2] + static_cast<std::uint32_t>(0), 0u);
    ctx.set_gpr(5, ctx.gpr[5] + static_cast<std::uint32_t>(1));
    goto L_08A43D04;
L_08A43D04:
    ctx.set_gpr(2, static_cast<std::int32_t>(ctx.gpr[5]) < static_cast<std::int32_t>(ctx.gpr[4]) ? 1u : 0u);
    { const bool branch_taken = ctx.gpr[2] != 0u;
    // nop
      if (branch_taken) {
          goto L_08A43CF0;
      }
      goto L_08A43D10;
    }
L_08A43D10:
    rt.memory().aot_store32(ctx.gpr[18] + static_cast<std::uint32_t>(8), 0u);
    ctx.set_gpr(4, ctx.gpr[16] + 0u);
    ctx.set_gpr(25, rt.memory().aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(0)));
    ctx.set_gpr(25, rt.memory().aot_load32(ctx.gpr[25] + static_cast<std::uint32_t>(88)));
    jump_target = ctx.gpr[25];
    ctx.set_gpr(31, 0x08A43D28u);
    // nop
    ctx.pc = jump_target;
    if (rt.invoke_chained_call(ctx, &aot_mem) && ctx.pc == 0x08A43D28u) goto L_08A43D28;
    return;
L_08A43D28:
    ctx.set_gpr(4, ctx.gpr[2] + 0u);
    ctx.set_gpr(5, 0u + static_cast<std::uint32_t>(1));
    ctx.set_gpr(31, 0x08A43D38u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0080_entry, 80u, 118u, 0x089448B4u>(ctx, &aot_mem) && ctx.pc == 0x08A43D38u) goto L_08A43D38;
    return;
L_08A43D38:
    { const bool branch_taken = ctx.gpr[2] != 0u;
    // nop
      if (branch_taken) {
          goto L_08A43D54;
      }
      goto L_08A43D40;
    }
L_08A43D40:
    ctx.set_gpr(4, ctx.gpr[16] + 0u);
    ctx.set_gpr(25, rt.memory().aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(0)));
    ctx.set_gpr(25, rt.memory().aot_load32(ctx.gpr[25] + static_cast<std::uint32_t>(200)));
    jump_target = ctx.gpr[25];
    ctx.set_gpr(31, 0x08A43D54u);
    // nop
    ctx.pc = jump_target;
    if (rt.invoke_chained_call(ctx, &aot_mem) && ctx.pc == 0x08A43D54u) goto L_08A43D54;
    return;
L_08A43D54:
    ctx.set_gpr(4, ctx.gpr[16] + 0u);
    ctx.set_gpr(31, 0x08A43D60u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0145_entry, 145u, 225u, 0x08A491B0u>(ctx, &aot_mem) && ctx.pc == 0x08A43D60u) goto L_08A43D60;
    return;
L_08A43D60:
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
L_08A43D80:
    ctx.set_gpr(2, 2246u << 16u);
    ctx.set_gpr(2, rt.memory().aot_load32(ctx.gpr[2] + static_cast<std::uint32_t>(-24180)));
    jump_target = ctx.gpr[31];
    // nop
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_08A43D90:
    ctx.set_gpr(29, ctx.gpr[29] + static_cast<std::uint32_t>(-16));
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(12), ctx.gpr[31]);
    ctx.set_gpr(3, 2246u << 16u);
    ctx.set_gpr(3, rt.memory().aot_load32(ctx.gpr[3] + static_cast<std::uint32_t>(-21828)));
    { const bool branch_taken = ctx.gpr[3] != 0u;
    // nop
      if (branch_taken) {
          goto L_08A43E04;
      }
      goto L_08A43DA8;
    }
L_08A43DA8:
    ctx.set_gpr(31, 0x08A43DB0u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0078_entry, 78u, 216u, 0x0893CDDCu>(ctx, &aot_mem) && ctx.pc == 0x08A43DB0u) goto L_08A43DB0;
    return;
L_08A43DB0:
    ctx.set_gpr(4, rt.memory().aot_load32(ctx.gpr[2] + static_cast<std::uint32_t>(0)));
    ctx.set_gpr(31, 0x08A43DBCu);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0078_entry, 78u, 199u, 0x0893CC68u>(ctx, &aot_mem) && ctx.pc == 0x08A43DBCu) goto L_08A43DBC;
    return;
L_08A43DBC:
    ctx.set_gpr(4, ctx.gpr[2] + 0u);
    ctx.set_gpr(31, 0x08A43DC8u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0043_entry, 43u, 45u, 0x088B0444u>(ctx, &aot_mem) && ctx.pc == 0x08A43DC8u) goto L_08A43DC8;
    return;
L_08A43DC8:
    ctx.set_gpr(3, 2246u << 16u);
    rt.memory().aot_store32(ctx.gpr[3] + static_cast<std::uint32_t>(-21828), ctx.gpr[2]);
    ctx.set_gpr(4, ctx.gpr[2] + 0u);
    ctx.set_gpr(5, 0u + static_cast<std::uint32_t>(1));
    ctx.set_gpr(25, rt.memory().aot_load32(ctx.gpr[2] + static_cast<std::uint32_t>(0)));
    ctx.set_gpr(25, rt.memory().aot_load32(ctx.gpr[25] + static_cast<std::uint32_t>(136)));
    jump_target = ctx.gpr[25];
    ctx.set_gpr(31, 0x08A43DE8u);
    // nop
    ctx.pc = jump_target;
    if (rt.invoke_chained_call(ctx, &aot_mem) && ctx.pc == 0x08A43DE8u) goto L_08A43DE8;
    return;
L_08A43DE8:
    ctx.set_gpr(2, 2246u << 16u);
    ctx.set_gpr(4, rt.memory().aot_load32(ctx.gpr[2] + static_cast<std::uint32_t>(-21828)));
    ctx.set_gpr(5, 0u + 0u);
    ctx.set_gpr(25, rt.memory().aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(0)));
    ctx.set_gpr(25, rt.memory().aot_load32(ctx.gpr[25] + static_cast<std::uint32_t>(100)));
    jump_target = ctx.gpr[25];
    ctx.set_gpr(31, 0x08A43E04u);
    // nop
    ctx.pc = jump_target;
    if (rt.invoke_chained_call(ctx, &aot_mem) && ctx.pc == 0x08A43E04u) goto L_08A43E04;
    return;
L_08A43E04:
    ctx.set_gpr(3, 2246u << 16u);
    ctx.set_gpr(3, rt.memory().aot_load32(ctx.gpr[3] + static_cast<std::uint32_t>(-21824)));
    { const bool branch_taken = ctx.gpr[3] != 0u;
    // nop
      if (branch_taken) {
          goto L_08A43E54;
      }
      goto L_08A43E14;
    }
L_08A43E14:
    ctx.set_gpr(31, 0x08A43E1Cu);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0078_entry, 78u, 216u, 0x0893CDDCu>(ctx, &aot_mem) && ctx.pc == 0x08A43E1Cu) goto L_08A43E1C;
    return;
L_08A43E1C:
    ctx.set_gpr(4, rt.memory().aot_load32(ctx.gpr[2] + static_cast<std::uint32_t>(0)));
    ctx.set_gpr(31, 0x08A43E28u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0078_entry, 78u, 199u, 0x0893CC68u>(ctx, &aot_mem) && ctx.pc == 0x08A43E28u) goto L_08A43E28;
    return;
L_08A43E28:
    ctx.set_gpr(4, ctx.gpr[2] + 0u);
    ctx.set_gpr(31, 0x08A43E34u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0047_entry, 47u, 194u, 0x088C11E0u>(ctx, &aot_mem) && ctx.pc == 0x08A43E34u) goto L_08A43E34;
    return;
L_08A43E34:
    ctx.set_gpr(3, 2246u << 16u);
    rt.memory().aot_store32(ctx.gpr[3] + static_cast<std::uint32_t>(-21824), ctx.gpr[2]);
    ctx.set_gpr(4, ctx.gpr[2] + 0u);
    ctx.set_gpr(5, 0u + static_cast<std::uint32_t>(1));
    ctx.set_gpr(25, rt.memory().aot_load32(ctx.gpr[2] + static_cast<std::uint32_t>(0)));
    ctx.set_gpr(25, rt.memory().aot_load32(ctx.gpr[25] + static_cast<std::uint32_t>(136)));
    jump_target = ctx.gpr[25];
    ctx.set_gpr(31, 0x08A43E54u);
    // nop
    ctx.pc = jump_target;
    if (rt.invoke_chained_call(ctx, &aot_mem) && ctx.pc == 0x08A43E54u) goto L_08A43E54;
    return;
L_08A43E54:
    ctx.set_gpr(3, 2246u << 16u);
    ctx.set_gpr(3, rt.memory().aot_load32(ctx.gpr[3] + static_cast<std::uint32_t>(-21820)));
    { const bool branch_taken = ctx.gpr[3] != 0u;
    // nop
      if (branch_taken) {
          goto L_08A43EA4;
      }
      goto L_08A43E64;
    }
L_08A43E64:
    ctx.set_gpr(31, 0x08A43E6Cu);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0078_entry, 78u, 216u, 0x0893CDDCu>(ctx, &aot_mem) && ctx.pc == 0x08A43E6Cu) goto L_08A43E6C;
    return;
L_08A43E6C:
    ctx.set_gpr(4, rt.memory().aot_load32(ctx.gpr[2] + static_cast<std::uint32_t>(0)));
    ctx.set_gpr(31, 0x08A43E78u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0078_entry, 78u, 199u, 0x0893CC68u>(ctx, &aot_mem) && ctx.pc == 0x08A43E78u) goto L_08A43E78;
    return;
L_08A43E78:
    ctx.set_gpr(4, ctx.gpr[2] + 0u);
    ctx.set_gpr(31, 0x08A43E84u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0047_entry, 47u, 194u, 0x088C11E0u>(ctx, &aot_mem) && ctx.pc == 0x08A43E84u) goto L_08A43E84;
    return;
L_08A43E84:
    ctx.set_gpr(3, 2246u << 16u);
    rt.memory().aot_store32(ctx.gpr[3] + static_cast<std::uint32_t>(-21820), ctx.gpr[2]);
    ctx.set_gpr(4, ctx.gpr[2] + 0u);
    ctx.set_gpr(5, 0u + 0u);
    ctx.set_gpr(25, rt.memory().aot_load32(ctx.gpr[2] + static_cast<std::uint32_t>(0)));
    ctx.set_gpr(25, rt.memory().aot_load32(ctx.gpr[25] + static_cast<std::uint32_t>(136)));
    jump_target = ctx.gpr[25];
    ctx.set_gpr(31, 0x08A43EA4u);
    // nop
    ctx.pc = jump_target;
    if (rt.invoke_chained_call(ctx, &aot_mem) && ctx.pc == 0x08A43EA4u) goto L_08A43EA4;
    return;
L_08A43EA4:
    ctx.set_gpr(3, 2246u << 16u);
    ctx.set_gpr(3, rt.memory().aot_load32(ctx.gpr[3] + static_cast<std::uint32_t>(-21804)));
    { const bool branch_taken = ctx.gpr[3] != 0u;
    // nop
      if (branch_taken) {
          goto L_08A43F04;
      }
      goto L_08A43EB4;
    }
L_08A43EB4:
    ctx.set_gpr(31, 0x08A43EBCu);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0078_entry, 78u, 216u, 0x0893CDDCu>(ctx, &aot_mem) && ctx.pc == 0x08A43EBCu) goto L_08A43EBC;
    return;
L_08A43EBC:
    ctx.set_gpr(4, rt.memory().aot_load32(ctx.gpr[2] + static_cast<std::uint32_t>(0)));
    ctx.set_gpr(31, 0x08A43EC8u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0078_entry, 78u, 199u, 0x0893CC68u>(ctx, &aot_mem) && ctx.pc == 0x08A43EC8u) goto L_08A43EC8;
    return;
L_08A43EC8:
    ctx.set_gpr(4, ctx.gpr[2] + 0u);
    ctx.set_gpr(31, 0x08A43ED4u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0047_entry, 47u, 618u, 0x088C368Cu>(ctx, &aot_mem) && ctx.pc == 0x08A43ED4u) goto L_08A43ED4;
    return;
L_08A43ED4:
    ctx.set_gpr(4, 2246u << 16u);
    ctx.set_gpr(4, ctx.gpr[4] + static_cast<std::uint32_t>(-21804));
    ctx.set_gpr(5, ctx.gpr[2] + 0u);
    ctx.set_gpr(31, 0x08A43EE8u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0085_entry, 85u, 67u, 0x0895853Cu>(ctx, &aot_mem) && ctx.pc == 0x08A43EE8u) goto L_08A43EE8;
    return;
L_08A43EE8:
    ctx.set_gpr(2, 2246u << 16u);
    ctx.set_gpr(4, rt.memory().aot_load32(ctx.gpr[2] + static_cast<std::uint32_t>(-21804)));
    ctx.set_gpr(5, 0u + 0u);
    ctx.set_gpr(25, rt.memory().aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(0)));
    ctx.set_gpr(25, rt.memory().aot_load32(ctx.gpr[25] + static_cast<std::uint32_t>(136)));
    jump_target = ctx.gpr[25];
    ctx.set_gpr(31, 0x08A43F04u);
    // nop
    ctx.pc = jump_target;
    if (rt.invoke_chained_call(ctx, &aot_mem) && ctx.pc == 0x08A43F04u) goto L_08A43F04;
    return;
L_08A43F04:
    ctx.set_gpr(31, rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(12)));
    ctx.set_gpr(29, ctx.gpr[29] + static_cast<std::uint32_t>(16));
    jump_target = ctx.gpr[31];
    // nop
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_08A43F14:
    ctx.set_gpr(29, ctx.gpr[29] + static_cast<std::uint32_t>(-16));
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(12), ctx.gpr[31]);
    ctx.set_gpr(2, 2246u << 16u);
    ctx.set_gpr(4, rt.memory().aot_load32(ctx.gpr[2] + static_cast<std::uint32_t>(-21828)));
    { const bool branch_taken = ctx.gpr[4] == 0u;
    // nop
      if (branch_taken) {
          goto L_08A43F58;
      }
      goto L_08A43F2C;
    }
L_08A43F2C:
    ctx.set_gpr(2, rt.memory().aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(4)));
    ctx.set_gpr(2, ctx.gpr[2] + static_cast<std::uint32_t>(-1));
    rt.memory().aot_store32(ctx.gpr[4] + static_cast<std::uint32_t>(4), ctx.gpr[2]);
    ctx.set_gpr(2, ctx.gpr[2] << 10u);
    ctx.set_gpr(2, ctx.gpr[2] >> 10u);
    { const bool branch_taken = ctx.gpr[2] != 0u;
    // nop
      if (branch_taken) {
          goto L_08A43F50;
      }
      goto L_08A43F48;
    }
L_08A43F48:
    ctx.set_gpr(31, 0x08A43F50u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0080_entry, 80u, 556u, 0x089467C8u>(ctx, &aot_mem) && ctx.pc == 0x08A43F50u) goto L_08A43F50;
    return;
L_08A43F50:
    ctx.set_gpr(2, 2246u << 16u);
    rt.memory().aot_store32(ctx.gpr[2] + static_cast<std::uint32_t>(-21828), 0u);
    goto L_08A43F58;
L_08A43F58:
    ctx.set_gpr(2, 2246u << 16u);
    ctx.set_gpr(4, rt.memory().aot_load32(ctx.gpr[2] + static_cast<std::uint32_t>(-21824)));
    { const bool branch_taken = ctx.gpr[4] == 0u;
    // nop
      if (branch_taken) {
          goto L_08A43F94;
      }
      goto L_08A43F68;
    }
L_08A43F68:
    ctx.set_gpr(2, rt.memory().aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(4)));
    ctx.set_gpr(2, ctx.gpr[2] + static_cast<std::uint32_t>(-1));
    rt.memory().aot_store32(ctx.gpr[4] + static_cast<std::uint32_t>(4), ctx.gpr[2]);
    ctx.set_gpr(2, ctx.gpr[2] << 10u);
    ctx.set_gpr(2, ctx.gpr[2] >> 10u);
    { const bool branch_taken = ctx.gpr[2] != 0u;
    // nop
      if (branch_taken) {
          goto L_08A43F8C;
      }
      goto L_08A43F84;
    }
L_08A43F84:
    ctx.set_gpr(31, 0x08A43F8Cu);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0080_entry, 80u, 556u, 0x089467C8u>(ctx, &aot_mem) && ctx.pc == 0x08A43F8Cu) goto L_08A43F8C;
    return;
L_08A43F8C:
    ctx.set_gpr(2, 2246u << 16u);
    rt.memory().aot_store32(ctx.gpr[2] + static_cast<std::uint32_t>(-21824), 0u);
    goto L_08A43F94;
L_08A43F94:
    ctx.set_gpr(2, 2246u << 16u);
    ctx.set_gpr(4, rt.memory().aot_load32(ctx.gpr[2] + static_cast<std::uint32_t>(-21820)));
    { const bool branch_taken = ctx.gpr[4] == 0u;
    // nop
      if (branch_taken) {
          goto L_08A43FD0;
      }
      goto L_08A43FA4;
    }
L_08A43FA4:
    ctx.set_gpr(2, rt.memory().aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(4)));
    ctx.set_gpr(2, ctx.gpr[2] + static_cast<std::uint32_t>(-1));
    rt.memory().aot_store32(ctx.gpr[4] + static_cast<std::uint32_t>(4), ctx.gpr[2]);
    ctx.set_gpr(2, ctx.gpr[2] << 10u);
    ctx.set_gpr(2, ctx.gpr[2] >> 10u);
    { const bool branch_taken = ctx.gpr[2] != 0u;
    // nop
      if (branch_taken) {
          goto L_08A43FC8;
      }
      goto L_08A43FC0;
    }
L_08A43FC0:
    ctx.set_gpr(31, 0x08A43FC8u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0080_entry, 80u, 556u, 0x089467C8u>(ctx, &aot_mem) && ctx.pc == 0x08A43FC8u) goto L_08A43FC8;
    return;
L_08A43FC8:
    ctx.set_gpr(2, 2246u << 16u);
    rt.memory().aot_store32(ctx.gpr[2] + static_cast<std::uint32_t>(-21820), 0u);
    goto L_08A43FD0;
L_08A43FD0:
    ctx.set_gpr(4, 2246u << 16u);
    ctx.set_gpr(4, ctx.gpr[4] + static_cast<std::uint32_t>(-21804));
    ctx.set_gpr(5, 0u + 0u);
    ctx.set_gpr(31, 0x08A43FE4u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0085_entry, 85u, 61u, 0x089584C4u>(ctx, &aot_mem) && ctx.pc == 0x08A43FE4u) goto L_08A43FE4;
    return;
L_08A43FE4:
    ctx.set_gpr(31, rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(12)));
    ctx.set_gpr(29, ctx.gpr[29] + static_cast<std::uint32_t>(16));
    jump_target = ctx.gpr[31];
    // nop
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_08A43FF4:
    ctx.set_gpr(29, ctx.gpr[29] + static_cast<std::uint32_t>(-64));
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(12), ctx.gpr[31]);
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(8), ctx.gpr[16]);
    ctx.pc = 0x08A44000u; return;
}

void recomp_unit_0143(Runtime &rt, AllegrexContext &ctx) {
    auto aot_mem = rt.memory().aot_fast_view();
    recomp_unit_0143_entry(rt, ctx, 0u, aot_mem);
}

void register_generated_unit_143(Runtime &runtime) {
    runtime.register_generated_unit(143u, 0x08A40000u, 16384u, &recomp_unit_0143, &recomp_unit_0143_entry);
    runtime.register_function(0x08A40000u, &recomp_unit_0143, "recomp_unit_0143");
    runtime.register_function(0x08A4000Cu, &recomp_unit_0143, "recomp_unit_0143");
    runtime.register_function(0x08A40018u, &recomp_unit_0143, "recomp_unit_0143");
    runtime.register_function(0x08A40024u, &recomp_unit_0143, "recomp_unit_0143");
    runtime.register_function(0x08A40040u, &recomp_unit_0143, "recomp_unit_0143");
    runtime.register_function(0x08A4004Cu, &recomp_unit_0143, "recomp_unit_0143");
    runtime.register_function(0x08A40058u, &recomp_unit_0143, "recomp_unit_0143");
    runtime.register_function(0x08A40064u, &recomp_unit_0143, "recomp_unit_0143");
    runtime.register_function(0x08A40078u, &recomp_unit_0143, "recomp_unit_0143");
    runtime.register_function(0x08A40080u, &recomp_unit_0143, "recomp_unit_0143");
    runtime.register_function(0x08A40098u, &recomp_unit_0143, "recomp_unit_0143");
    runtime.register_function(0x08A400A4u, &recomp_unit_0143, "recomp_unit_0143");
    runtime.register_function(0x08A400B0u, &recomp_unit_0143, "recomp_unit_0143");
    runtime.register_function(0x08A400BCu, &recomp_unit_0143, "recomp_unit_0143");
    runtime.register_function(0x08A400D8u, &recomp_unit_0143, "recomp_unit_0143");
    runtime.register_function(0x08A400E4u, &recomp_unit_0143, "recomp_unit_0143");
    runtime.register_function(0x08A400F0u, &recomp_unit_0143, "recomp_unit_0143");
    runtime.register_function(0x08A400FCu, &recomp_unit_0143, "recomp_unit_0143");
    runtime.register_function(0x08A40104u, &recomp_unit_0143, "recomp_unit_0143");
    runtime.register_function(0x08A40118u, &recomp_unit_0143, "recomp_unit_0143");
    runtime.register_function(0x08A40124u, &recomp_unit_0143, "recomp_unit_0143");
    runtime.register_function(0x08A4012Cu, &recomp_unit_0143, "recomp_unit_0143");
    runtime.register_function(0x08A40130u, &recomp_unit_0143, "recomp_unit_0143");
    runtime.register_function(0x08A40148u, &recomp_unit_0143, "recomp_unit_0143");
    runtime.register_function(0x08A4014Cu, &recomp_unit_0143, "recomp_unit_0143");
    runtime.register_function(0x08A40164u, &recomp_unit_0143, "recomp_unit_0143");
    runtime.register_function(0x08A40188u, &recomp_unit_0143, "recomp_unit_0143");
    runtime.register_function(0x08A40198u, &recomp_unit_0143, "recomp_unit_0143");
    runtime.register_function(0x08A401B0u, &recomp_unit_0143, "recomp_unit_0143");
    runtime.register_function(0x08A401CCu, &recomp_unit_0143, "recomp_unit_0143");
    runtime.register_function(0x08A401ECu, &recomp_unit_0143, "recomp_unit_0143");
    runtime.register_function(0x08A40210u, &recomp_unit_0143, "recomp_unit_0143");
    runtime.register_function(0x08A40220u, &recomp_unit_0143, "recomp_unit_0143");
    runtime.register_function(0x08A40238u, &recomp_unit_0143, "recomp_unit_0143");
    runtime.register_function(0x08A4026Cu, &recomp_unit_0143, "recomp_unit_0143");
    runtime.register_function(0x08A402A0u, &recomp_unit_0143, "recomp_unit_0143");
    runtime.register_function(0x08A402B0u, &recomp_unit_0143, "recomp_unit_0143");
    runtime.register_function(0x08A402B8u, &recomp_unit_0143, "recomp_unit_0143");
    runtime.register_function(0x08A402C4u, &recomp_unit_0143, "recomp_unit_0143");
    runtime.register_function(0x08A402D4u, &recomp_unit_0143, "recomp_unit_0143");
    runtime.register_function(0x08A402E8u, &recomp_unit_0143, "recomp_unit_0143");
    runtime.register_function(0x08A40300u, &recomp_unit_0143, "recomp_unit_0143");
    runtime.register_function(0x08A40308u, &recomp_unit_0143, "recomp_unit_0143");
    runtime.register_function(0x08A40318u, &recomp_unit_0143, "recomp_unit_0143");
    runtime.register_function(0x08A4032Cu, &recomp_unit_0143, "recomp_unit_0143");
    runtime.register_function(0x08A40344u, &recomp_unit_0143, "recomp_unit_0143");
    runtime.register_function(0x08A40364u, &recomp_unit_0143, "recomp_unit_0143");
    runtime.register_function(0x08A40398u, &recomp_unit_0143, "recomp_unit_0143");
    runtime.register_function(0x08A403B0u, &recomp_unit_0143, "recomp_unit_0143");
    runtime.register_function(0x08A403B8u, &recomp_unit_0143, "recomp_unit_0143");
    runtime.register_function(0x08A403D0u, &recomp_unit_0143, "recomp_unit_0143");
    runtime.register_function(0x08A403ECu, &recomp_unit_0143, "recomp_unit_0143");
    runtime.register_function(0x08A40404u, &recomp_unit_0143, "recomp_unit_0143");
    runtime.register_function(0x08A40424u, &recomp_unit_0143, "recomp_unit_0143");
    runtime.register_function(0x08A40464u, &recomp_unit_0143, "recomp_unit_0143");
    runtime.register_function(0x08A40470u, &recomp_unit_0143, "recomp_unit_0143");
    runtime.register_function(0x08A40484u, &recomp_unit_0143, "recomp_unit_0143");
    runtime.register_function(0x08A4048Cu, &recomp_unit_0143, "recomp_unit_0143");
    runtime.register_function(0x08A40498u, &recomp_unit_0143, "recomp_unit_0143");
    runtime.register_function(0x08A404B4u, &recomp_unit_0143, "recomp_unit_0143");
    runtime.register_function(0x08A404BCu, &recomp_unit_0143, "recomp_unit_0143");
    runtime.register_function(0x08A404E8u, &recomp_unit_0143, "recomp_unit_0143");
    runtime.register_function(0x08A40504u, &recomp_unit_0143, "recomp_unit_0143");
    runtime.register_function(0x08A40550u, &recomp_unit_0143, "recomp_unit_0143");
    runtime.register_function(0x08A4055Cu, &recomp_unit_0143, "recomp_unit_0143");
    runtime.register_function(0x08A40570u, &recomp_unit_0143, "recomp_unit_0143");
    runtime.register_function(0x08A4058Cu, &recomp_unit_0143, "recomp_unit_0143");
    runtime.register_function(0x08A40594u, &recomp_unit_0143, "recomp_unit_0143");
    runtime.register_function(0x08A405A0u, &recomp_unit_0143, "recomp_unit_0143");
    runtime.register_function(0x08A405BCu, &recomp_unit_0143, "recomp_unit_0143");
    runtime.register_function(0x08A405D0u, &recomp_unit_0143, "recomp_unit_0143");
    runtime.register_function(0x08A405ECu, &recomp_unit_0143, "recomp_unit_0143");
    runtime.register_function(0x08A405F4u, &recomp_unit_0143, "recomp_unit_0143");
    runtime.register_function(0x08A4060Cu, &recomp_unit_0143, "recomp_unit_0143");
    runtime.register_function(0x08A40618u, &recomp_unit_0143, "recomp_unit_0143");
    runtime.register_function(0x08A40620u, &recomp_unit_0143, "recomp_unit_0143");
    runtime.register_function(0x08A40644u, &recomp_unit_0143, "recomp_unit_0143");
    runtime.register_function(0x08A40668u, &recomp_unit_0143, "recomp_unit_0143");
    runtime.register_function(0x08A4068Cu, &recomp_unit_0143, "recomp_unit_0143");
    runtime.register_function(0x08A40694u, &recomp_unit_0143, "recomp_unit_0143");
    runtime.register_function(0x08A406C8u, &recomp_unit_0143, "recomp_unit_0143");
    runtime.register_function(0x08A406E0u, &recomp_unit_0143, "recomp_unit_0143");
    runtime.register_function(0x08A406FCu, &recomp_unit_0143, "recomp_unit_0143");
    runtime.register_function(0x08A4070Cu, &recomp_unit_0143, "recomp_unit_0143");
    runtime.register_function(0x08A40724u, &recomp_unit_0143, "recomp_unit_0143");
    runtime.register_function(0x08A40730u, &recomp_unit_0143, "recomp_unit_0143");
    runtime.register_function(0x08A4073Cu, &recomp_unit_0143, "recomp_unit_0143");
    runtime.register_function(0x08A40748u, &recomp_unit_0143, "recomp_unit_0143");
    runtime.register_function(0x08A40754u, &recomp_unit_0143, "recomp_unit_0143");
    runtime.register_function(0x08A40764u, &recomp_unit_0143, "recomp_unit_0143");
    runtime.register_function(0x08A4077Cu, &recomp_unit_0143, "recomp_unit_0143");
    runtime.register_function(0x08A4078Cu, &recomp_unit_0143, "recomp_unit_0143");
    runtime.register_function(0x08A40798u, &recomp_unit_0143, "recomp_unit_0143");
    runtime.register_function(0x08A407A4u, &recomp_unit_0143, "recomp_unit_0143");
    runtime.register_function(0x08A407BCu, &recomp_unit_0143, "recomp_unit_0143");
    runtime.register_function(0x08A407C8u, &recomp_unit_0143, "recomp_unit_0143");
    runtime.register_function(0x08A407E4u, &recomp_unit_0143, "recomp_unit_0143");
    runtime.register_function(0x08A407FCu, &recomp_unit_0143, "recomp_unit_0143");
    runtime.register_function(0x08A4081Cu, &recomp_unit_0143, "recomp_unit_0143");
    runtime.register_function(0x08A40858u, &recomp_unit_0143, "recomp_unit_0143");
    runtime.register_function(0x08A40870u, &recomp_unit_0143, "recomp_unit_0143");
    runtime.register_function(0x08A40878u, &recomp_unit_0143, "recomp_unit_0143");
    runtime.register_function(0x08A40884u, &recomp_unit_0143, "recomp_unit_0143");
    runtime.register_function(0x08A4089Cu, &recomp_unit_0143, "recomp_unit_0143");
    runtime.register_function(0x08A408B8u, &recomp_unit_0143, "recomp_unit_0143");
    runtime.register_function(0x08A408D0u, &recomp_unit_0143, "recomp_unit_0143");
    runtime.register_function(0x08A408D8u, &recomp_unit_0143, "recomp_unit_0143");
    runtime.register_function(0x08A408F0u, &recomp_unit_0143, "recomp_unit_0143");
    runtime.register_function(0x08A4090Cu, &recomp_unit_0143, "recomp_unit_0143");
    runtime.register_function(0x08A40924u, &recomp_unit_0143, "recomp_unit_0143");
    runtime.register_function(0x08A40938u, &recomp_unit_0143, "recomp_unit_0143");
    runtime.register_function(0x08A40958u, &recomp_unit_0143, "recomp_unit_0143");
    runtime.register_function(0x08A4097Cu, &recomp_unit_0143, "recomp_unit_0143");
    runtime.register_function(0x08A409A0u, &recomp_unit_0143, "recomp_unit_0143");
    runtime.register_function(0x08A409B0u, &recomp_unit_0143, "recomp_unit_0143");
    runtime.register_function(0x08A409C8u, &recomp_unit_0143, "recomp_unit_0143");
    runtime.register_function(0x08A409E8u, &recomp_unit_0143, "recomp_unit_0143");
    runtime.register_function(0x08A409F8u, &recomp_unit_0143, "recomp_unit_0143");
    runtime.register_function(0x08A40A10u, &recomp_unit_0143, "recomp_unit_0143");
    runtime.register_function(0x08A40A30u, &recomp_unit_0143, "recomp_unit_0143");
    runtime.register_function(0x08A40A40u, &recomp_unit_0143, "recomp_unit_0143");
    runtime.register_function(0x08A40A58u, &recomp_unit_0143, "recomp_unit_0143");
    runtime.register_function(0x08A40A74u, &recomp_unit_0143, "recomp_unit_0143");
    runtime.register_function(0x08A40A7Cu, &recomp_unit_0143, "recomp_unit_0143");
    runtime.register_function(0x08A40A88u, &recomp_unit_0143, "recomp_unit_0143");
    runtime.register_function(0x08A40A90u, &recomp_unit_0143, "recomp_unit_0143");
    runtime.register_function(0x08A40AA8u, &recomp_unit_0143, "recomp_unit_0143");
    runtime.register_function(0x08A40ABCu, &recomp_unit_0143, "recomp_unit_0143");
    runtime.register_function(0x08A40ACCu, &recomp_unit_0143, "recomp_unit_0143");
    runtime.register_function(0x08A40AD4u, &recomp_unit_0143, "recomp_unit_0143");
    runtime.register_function(0x08A40ADCu, &recomp_unit_0143, "recomp_unit_0143");
    runtime.register_function(0x08A40AE8u, &recomp_unit_0143, "recomp_unit_0143");
    runtime.register_function(0x08A40AF4u, &recomp_unit_0143, "recomp_unit_0143");
    runtime.register_function(0x08A40B04u, &recomp_unit_0143, "recomp_unit_0143");
    runtime.register_function(0x08A40B10u, &recomp_unit_0143, "recomp_unit_0143");
    runtime.register_function(0x08A40B1Cu, &recomp_unit_0143, "recomp_unit_0143");
    runtime.register_function(0x08A40B2Cu, &recomp_unit_0143, "recomp_unit_0143");
    runtime.register_function(0x08A40B38u, &recomp_unit_0143, "recomp_unit_0143");
    runtime.register_function(0x08A40B44u, &recomp_unit_0143, "recomp_unit_0143");
    runtime.register_function(0x08A40B54u, &recomp_unit_0143, "recomp_unit_0143");
    runtime.register_function(0x08A40B60u, &recomp_unit_0143, "recomp_unit_0143");
    runtime.register_function(0x08A40B6Cu, &recomp_unit_0143, "recomp_unit_0143");
    runtime.register_function(0x08A40B7Cu, &recomp_unit_0143, "recomp_unit_0143");
    runtime.register_function(0x08A40B88u, &recomp_unit_0143, "recomp_unit_0143");
    runtime.register_function(0x08A40B94u, &recomp_unit_0143, "recomp_unit_0143");
    runtime.register_function(0x08A40BA4u, &recomp_unit_0143, "recomp_unit_0143");
    runtime.register_function(0x08A40BB0u, &recomp_unit_0143, "recomp_unit_0143");
    runtime.register_function(0x08A40BBCu, &recomp_unit_0143, "recomp_unit_0143");
    runtime.register_function(0x08A40BCCu, &recomp_unit_0143, "recomp_unit_0143");
    runtime.register_function(0x08A40BD8u, &recomp_unit_0143, "recomp_unit_0143");
    runtime.register_function(0x08A40BE4u, &recomp_unit_0143, "recomp_unit_0143");
    runtime.register_function(0x08A40BF4u, &recomp_unit_0143, "recomp_unit_0143");
    runtime.register_function(0x08A40C00u, &recomp_unit_0143, "recomp_unit_0143");
    runtime.register_function(0x08A40C0Cu, &recomp_unit_0143, "recomp_unit_0143");
    runtime.register_function(0x08A40C1Cu, &recomp_unit_0143, "recomp_unit_0143");
    runtime.register_function(0x08A40C28u, &recomp_unit_0143, "recomp_unit_0143");
    runtime.register_function(0x08A40C34u, &recomp_unit_0143, "recomp_unit_0143");
    runtime.register_function(0x08A40C44u, &recomp_unit_0143, "recomp_unit_0143");
    runtime.register_function(0x08A40C50u, &recomp_unit_0143, "recomp_unit_0143");
    runtime.register_function(0x08A40C5Cu, &recomp_unit_0143, "recomp_unit_0143");
    runtime.register_function(0x08A40C6Cu, &recomp_unit_0143, "recomp_unit_0143");
    runtime.register_function(0x08A40C78u, &recomp_unit_0143, "recomp_unit_0143");
    runtime.register_function(0x08A40C84u, &recomp_unit_0143, "recomp_unit_0143");
    runtime.register_function(0x08A40C94u, &recomp_unit_0143, "recomp_unit_0143");
    runtime.register_function(0x08A40CA0u, &recomp_unit_0143, "recomp_unit_0143");
    runtime.register_function(0x08A40CACu, &recomp_unit_0143, "recomp_unit_0143");
    runtime.register_function(0x08A40CBCu, &recomp_unit_0143, "recomp_unit_0143");
    runtime.register_function(0x08A40CC8u, &recomp_unit_0143, "recomp_unit_0143");
    runtime.register_function(0x08A40CD4u, &recomp_unit_0143, "recomp_unit_0143");
    runtime.register_function(0x08A40CE4u, &recomp_unit_0143, "recomp_unit_0143");
    runtime.register_function(0x08A40CF0u, &recomp_unit_0143, "recomp_unit_0143");
    runtime.register_function(0x08A40CFCu, &recomp_unit_0143, "recomp_unit_0143");
    runtime.register_function(0x08A40D0Cu, &recomp_unit_0143, "recomp_unit_0143");
    runtime.register_function(0x08A40D18u, &recomp_unit_0143, "recomp_unit_0143");
    runtime.register_function(0x08A40D24u, &recomp_unit_0143, "recomp_unit_0143");
    runtime.register_function(0x08A40D34u, &recomp_unit_0143, "recomp_unit_0143");
    runtime.register_function(0x08A40D40u, &recomp_unit_0143, "recomp_unit_0143");
    runtime.register_function(0x08A40D4Cu, &recomp_unit_0143, "recomp_unit_0143");
    runtime.register_function(0x08A40D5Cu, &recomp_unit_0143, "recomp_unit_0143");
    runtime.register_function(0x08A40D68u, &recomp_unit_0143, "recomp_unit_0143");
    runtime.register_function(0x08A40D74u, &recomp_unit_0143, "recomp_unit_0143");
    runtime.register_function(0x08A40D84u, &recomp_unit_0143, "recomp_unit_0143");
    runtime.register_function(0x08A40D90u, &recomp_unit_0143, "recomp_unit_0143");
    runtime.register_function(0x08A40D9Cu, &recomp_unit_0143, "recomp_unit_0143");
    runtime.register_function(0x08A40DACu, &recomp_unit_0143, "recomp_unit_0143");
    runtime.register_function(0x08A40DB8u, &recomp_unit_0143, "recomp_unit_0143");
    runtime.register_function(0x08A40DC4u, &recomp_unit_0143, "recomp_unit_0143");
    runtime.register_function(0x08A40DD4u, &recomp_unit_0143, "recomp_unit_0143");
    runtime.register_function(0x08A40DE0u, &recomp_unit_0143, "recomp_unit_0143");
    runtime.register_function(0x08A40DECu, &recomp_unit_0143, "recomp_unit_0143");
    runtime.register_function(0x08A40DFCu, &recomp_unit_0143, "recomp_unit_0143");
    runtime.register_function(0x08A40E08u, &recomp_unit_0143, "recomp_unit_0143");
    runtime.register_function(0x08A40E14u, &recomp_unit_0143, "recomp_unit_0143");
    runtime.register_function(0x08A40E24u, &recomp_unit_0143, "recomp_unit_0143");
    runtime.register_function(0x08A40E30u, &recomp_unit_0143, "recomp_unit_0143");
    runtime.register_function(0x08A40E3Cu, &recomp_unit_0143, "recomp_unit_0143");
    runtime.register_function(0x08A40E4Cu, &recomp_unit_0143, "recomp_unit_0143");
    runtime.register_function(0x08A40E58u, &recomp_unit_0143, "recomp_unit_0143");
    runtime.register_function(0x08A40E64u, &recomp_unit_0143, "recomp_unit_0143");
    runtime.register_function(0x08A40E74u, &recomp_unit_0143, "recomp_unit_0143");
    runtime.register_function(0x08A40E80u, &recomp_unit_0143, "recomp_unit_0143");
    runtime.register_function(0x08A40E8Cu, &recomp_unit_0143, "recomp_unit_0143");
    runtime.register_function(0x08A40E9Cu, &recomp_unit_0143, "recomp_unit_0143");
    runtime.register_function(0x08A40EA8u, &recomp_unit_0143, "recomp_unit_0143");
    runtime.register_function(0x08A40EB4u, &recomp_unit_0143, "recomp_unit_0143");
    runtime.register_function(0x08A40EC4u, &recomp_unit_0143, "recomp_unit_0143");
    runtime.register_function(0x08A40ED0u, &recomp_unit_0143, "recomp_unit_0143");
    runtime.register_function(0x08A40EDCu, &recomp_unit_0143, "recomp_unit_0143");
    runtime.register_function(0x08A40EECu, &recomp_unit_0143, "recomp_unit_0143");
    runtime.register_function(0x08A40EF8u, &recomp_unit_0143, "recomp_unit_0143");
    runtime.register_function(0x08A40F04u, &recomp_unit_0143, "recomp_unit_0143");
    runtime.register_function(0x08A40F14u, &recomp_unit_0143, "recomp_unit_0143");
    runtime.register_function(0x08A40F20u, &recomp_unit_0143, "recomp_unit_0143");
    runtime.register_function(0x08A40F2Cu, &recomp_unit_0143, "recomp_unit_0143");
    runtime.register_function(0x08A40F3Cu, &recomp_unit_0143, "recomp_unit_0143");
    runtime.register_function(0x08A40F48u, &recomp_unit_0143, "recomp_unit_0143");
    runtime.register_function(0x08A40F54u, &recomp_unit_0143, "recomp_unit_0143");
    runtime.register_function(0x08A40F64u, &recomp_unit_0143, "recomp_unit_0143");
    runtime.register_function(0x08A40F70u, &recomp_unit_0143, "recomp_unit_0143");
    runtime.register_function(0x08A40F7Cu, &recomp_unit_0143, "recomp_unit_0143");
    runtime.register_function(0x08A40F8Cu, &recomp_unit_0143, "recomp_unit_0143");
    runtime.register_function(0x08A40F98u, &recomp_unit_0143, "recomp_unit_0143");
    runtime.register_function(0x08A40FA4u, &recomp_unit_0143, "recomp_unit_0143");
    runtime.register_function(0x08A40FB4u, &recomp_unit_0143, "recomp_unit_0143");
    runtime.register_function(0x08A40FC0u, &recomp_unit_0143, "recomp_unit_0143");
    runtime.register_function(0x08A40FCCu, &recomp_unit_0143, "recomp_unit_0143");
    runtime.register_function(0x08A40FDCu, &recomp_unit_0143, "recomp_unit_0143");
    runtime.register_function(0x08A40FE8u, &recomp_unit_0143, "recomp_unit_0143");
    runtime.register_function(0x08A40FF4u, &recomp_unit_0143, "recomp_unit_0143");
    runtime.register_function(0x08A41004u, &recomp_unit_0143, "recomp_unit_0143");
    runtime.register_function(0x08A41010u, &recomp_unit_0143, "recomp_unit_0143");
    runtime.register_function(0x08A4101Cu, &recomp_unit_0143, "recomp_unit_0143");
    runtime.register_function(0x08A4102Cu, &recomp_unit_0143, "recomp_unit_0143");
    runtime.register_function(0x08A41038u, &recomp_unit_0143, "recomp_unit_0143");
    runtime.register_function(0x08A41044u, &recomp_unit_0143, "recomp_unit_0143");
    runtime.register_function(0x08A41054u, &recomp_unit_0143, "recomp_unit_0143");
    runtime.register_function(0x08A41060u, &recomp_unit_0143, "recomp_unit_0143");
    runtime.register_function(0x08A4106Cu, &recomp_unit_0143, "recomp_unit_0143");
    runtime.register_function(0x08A4107Cu, &recomp_unit_0143, "recomp_unit_0143");
    runtime.register_function(0x08A41088u, &recomp_unit_0143, "recomp_unit_0143");
    runtime.register_function(0x08A41094u, &recomp_unit_0143, "recomp_unit_0143");
    runtime.register_function(0x08A410A4u, &recomp_unit_0143, "recomp_unit_0143");
    runtime.register_function(0x08A410B0u, &recomp_unit_0143, "recomp_unit_0143");
    runtime.register_function(0x08A410BCu, &recomp_unit_0143, "recomp_unit_0143");
    runtime.register_function(0x08A410CCu, &recomp_unit_0143, "recomp_unit_0143");
    runtime.register_function(0x08A410D8u, &recomp_unit_0143, "recomp_unit_0143");
    runtime.register_function(0x08A410E4u, &recomp_unit_0143, "recomp_unit_0143");
    runtime.register_function(0x08A410ECu, &recomp_unit_0143, "recomp_unit_0143");
    runtime.register_function(0x08A41100u, &recomp_unit_0143, "recomp_unit_0143");
    runtime.register_function(0x08A41110u, &recomp_unit_0143, "recomp_unit_0143");
    runtime.register_function(0x08A4113Cu, &recomp_unit_0143, "recomp_unit_0143");
    runtime.register_function(0x08A41154u, &recomp_unit_0143, "recomp_unit_0143");
    runtime.register_function(0x08A41168u, &recomp_unit_0143, "recomp_unit_0143");
    runtime.register_function(0x08A41174u, &recomp_unit_0143, "recomp_unit_0143");
    runtime.register_function(0x08A41180u, &recomp_unit_0143, "recomp_unit_0143");
    runtime.register_function(0x08A411D0u, &recomp_unit_0143, "recomp_unit_0143");
    runtime.register_function(0x08A411ECu, &recomp_unit_0143, "recomp_unit_0143");
    runtime.register_function(0x08A411F8u, &recomp_unit_0143, "recomp_unit_0143");
    runtime.register_function(0x08A4122Cu, &recomp_unit_0143, "recomp_unit_0143");
    runtime.register_function(0x08A41248u, &recomp_unit_0143, "recomp_unit_0143");
    runtime.register_function(0x08A4125Cu, &recomp_unit_0143, "recomp_unit_0143");
    runtime.register_function(0x08A41268u, &recomp_unit_0143, "recomp_unit_0143");
    runtime.register_function(0x08A4129Cu, &recomp_unit_0143, "recomp_unit_0143");
    runtime.register_function(0x08A412A8u, &recomp_unit_0143, "recomp_unit_0143");
    runtime.register_function(0x08A412ACu, &recomp_unit_0143, "recomp_unit_0143");
    runtime.register_function(0x08A412B4u, &recomp_unit_0143, "recomp_unit_0143");
    runtime.register_function(0x08A412C0u, &recomp_unit_0143, "recomp_unit_0143");
    runtime.register_function(0x08A412DCu, &recomp_unit_0143, "recomp_unit_0143");
    runtime.register_function(0x08A412ECu, &recomp_unit_0143, "recomp_unit_0143");
    runtime.register_function(0x08A412FCu, &recomp_unit_0143, "recomp_unit_0143");
    runtime.register_function(0x08A4130Cu, &recomp_unit_0143, "recomp_unit_0143");
    runtime.register_function(0x08A41318u, &recomp_unit_0143, "recomp_unit_0143");
    runtime.register_function(0x08A4131Cu, &recomp_unit_0143, "recomp_unit_0143");
    runtime.register_function(0x08A41320u, &recomp_unit_0143, "recomp_unit_0143");
    runtime.register_function(0x08A4132Cu, &recomp_unit_0143, "recomp_unit_0143");
    runtime.register_function(0x08A4133Cu, &recomp_unit_0143, "recomp_unit_0143");
    runtime.register_function(0x08A41348u, &recomp_unit_0143, "recomp_unit_0143");
    runtime.register_function(0x08A4134Cu, &recomp_unit_0143, "recomp_unit_0143");
    runtime.register_function(0x08A41364u, &recomp_unit_0143, "recomp_unit_0143");
    runtime.register_function(0x08A41378u, &recomp_unit_0143, "recomp_unit_0143");
    runtime.register_function(0x08A413B4u, &recomp_unit_0143, "recomp_unit_0143");
    runtime.register_function(0x08A413CCu, &recomp_unit_0143, "recomp_unit_0143");
    runtime.register_function(0x08A413ECu, &recomp_unit_0143, "recomp_unit_0143");
    runtime.register_function(0x08A41400u, &recomp_unit_0143, "recomp_unit_0143");
    runtime.register_function(0x08A41414u, &recomp_unit_0143, "recomp_unit_0143");
    runtime.register_function(0x08A41424u, &recomp_unit_0143, "recomp_unit_0143");
    runtime.register_function(0x08A41438u, &recomp_unit_0143, "recomp_unit_0143");
    runtime.register_function(0x08A4144Cu, &recomp_unit_0143, "recomp_unit_0143");
    runtime.register_function(0x08A4145Cu, &recomp_unit_0143, "recomp_unit_0143");
    runtime.register_function(0x08A41470u, &recomp_unit_0143, "recomp_unit_0143");
    runtime.register_function(0x08A41484u, &recomp_unit_0143, "recomp_unit_0143");
    runtime.register_function(0x08A41498u, &recomp_unit_0143, "recomp_unit_0143");
    runtime.register_function(0x08A414ACu, &recomp_unit_0143, "recomp_unit_0143");
    runtime.register_function(0x08A414BCu, &recomp_unit_0143, "recomp_unit_0143");
    runtime.register_function(0x08A414D0u, &recomp_unit_0143, "recomp_unit_0143");
    runtime.register_function(0x08A414E4u, &recomp_unit_0143, "recomp_unit_0143");
    runtime.register_function(0x08A414F8u, &recomp_unit_0143, "recomp_unit_0143");
    runtime.register_function(0x08A41508u, &recomp_unit_0143, "recomp_unit_0143");
    runtime.register_function(0x08A4151Cu, &recomp_unit_0143, "recomp_unit_0143");
    runtime.register_function(0x08A41530u, &recomp_unit_0143, "recomp_unit_0143");
    runtime.register_function(0x08A41548u, &recomp_unit_0143, "recomp_unit_0143");
    runtime.register_function(0x08A41550u, &recomp_unit_0143, "recomp_unit_0143");
    runtime.register_function(0x08A41564u, &recomp_unit_0143, "recomp_unit_0143");
    runtime.register_function(0x08A4156Cu, &recomp_unit_0143, "recomp_unit_0143");
    runtime.register_function(0x08A41580u, &recomp_unit_0143, "recomp_unit_0143");
    runtime.register_function(0x08A41594u, &recomp_unit_0143, "recomp_unit_0143");
    runtime.register_function(0x08A415A8u, &recomp_unit_0143, "recomp_unit_0143");
    runtime.register_function(0x08A415BCu, &recomp_unit_0143, "recomp_unit_0143");
    runtime.register_function(0x08A415D8u, &recomp_unit_0143, "recomp_unit_0143");
    runtime.register_function(0x08A415ECu, &recomp_unit_0143, "recomp_unit_0143");
    runtime.register_function(0x08A41600u, &recomp_unit_0143, "recomp_unit_0143");
    runtime.register_function(0x08A41614u, &recomp_unit_0143, "recomp_unit_0143");
    runtime.register_function(0x08A4162Cu, &recomp_unit_0143, "recomp_unit_0143");
    runtime.register_function(0x08A41634u, &recomp_unit_0143, "recomp_unit_0143");
    runtime.register_function(0x08A41648u, &recomp_unit_0143, "recomp_unit_0143");
    runtime.register_function(0x08A41650u, &recomp_unit_0143, "recomp_unit_0143");
    runtime.register_function(0x08A41664u, &recomp_unit_0143, "recomp_unit_0143");
    runtime.register_function(0x08A41678u, &recomp_unit_0143, "recomp_unit_0143");
    runtime.register_function(0x08A4168Cu, &recomp_unit_0143, "recomp_unit_0143");
    runtime.register_function(0x08A416A0u, &recomp_unit_0143, "recomp_unit_0143");
    runtime.register_function(0x08A416B4u, &recomp_unit_0143, "recomp_unit_0143");
    runtime.register_function(0x08A416C8u, &recomp_unit_0143, "recomp_unit_0143");
    runtime.register_function(0x08A416D8u, &recomp_unit_0143, "recomp_unit_0143");
    runtime.register_function(0x08A416ECu, &recomp_unit_0143, "recomp_unit_0143");
    runtime.register_function(0x08A416FCu, &recomp_unit_0143, "recomp_unit_0143");
    runtime.register_function(0x08A41710u, &recomp_unit_0143, "recomp_unit_0143");
    runtime.register_function(0x08A41720u, &recomp_unit_0143, "recomp_unit_0143");
    runtime.register_function(0x08A4172Cu, &recomp_unit_0143, "recomp_unit_0143");
    runtime.register_function(0x08A41734u, &recomp_unit_0143, "recomp_unit_0143");
    runtime.register_function(0x08A41748u, &recomp_unit_0143, "recomp_unit_0143");
    runtime.register_function(0x08A41758u, &recomp_unit_0143, "recomp_unit_0143");
    runtime.register_function(0x08A41764u, &recomp_unit_0143, "recomp_unit_0143");
    runtime.register_function(0x08A4178Cu, &recomp_unit_0143, "recomp_unit_0143");
    runtime.register_function(0x08A417ACu, &recomp_unit_0143, "recomp_unit_0143");
    runtime.register_function(0x08A417BCu, &recomp_unit_0143, "recomp_unit_0143");
    runtime.register_function(0x08A417C4u, &recomp_unit_0143, "recomp_unit_0143");
    runtime.register_function(0x08A417D4u, &recomp_unit_0143, "recomp_unit_0143");
    runtime.register_function(0x08A417F0u, &recomp_unit_0143, "recomp_unit_0143");
    runtime.register_function(0x08A417F8u, &recomp_unit_0143, "recomp_unit_0143");
    runtime.register_function(0x08A41800u, &recomp_unit_0143, "recomp_unit_0143");
    runtime.register_function(0x08A41810u, &recomp_unit_0143, "recomp_unit_0143");
    runtime.register_function(0x08A4182Cu, &recomp_unit_0143, "recomp_unit_0143");
    runtime.register_function(0x08A41834u, &recomp_unit_0143, "recomp_unit_0143");
    runtime.register_function(0x08A4183Cu, &recomp_unit_0143, "recomp_unit_0143");
    runtime.register_function(0x08A4184Cu, &recomp_unit_0143, "recomp_unit_0143");
    runtime.register_function(0x08A41868u, &recomp_unit_0143, "recomp_unit_0143");
    runtime.register_function(0x08A41870u, &recomp_unit_0143, "recomp_unit_0143");
    runtime.register_function(0x08A41878u, &recomp_unit_0143, "recomp_unit_0143");
    runtime.register_function(0x08A41888u, &recomp_unit_0143, "recomp_unit_0143");
    runtime.register_function(0x08A418A4u, &recomp_unit_0143, "recomp_unit_0143");
    runtime.register_function(0x08A418ACu, &recomp_unit_0143, "recomp_unit_0143");
    runtime.register_function(0x08A418B4u, &recomp_unit_0143, "recomp_unit_0143");
    runtime.register_function(0x08A418C4u, &recomp_unit_0143, "recomp_unit_0143");
    runtime.register_function(0x08A418E0u, &recomp_unit_0143, "recomp_unit_0143");
    runtime.register_function(0x08A418E8u, &recomp_unit_0143, "recomp_unit_0143");
    runtime.register_function(0x08A418F0u, &recomp_unit_0143, "recomp_unit_0143");
    runtime.register_function(0x08A41900u, &recomp_unit_0143, "recomp_unit_0143");
    runtime.register_function(0x08A4191Cu, &recomp_unit_0143, "recomp_unit_0143");
    runtime.register_function(0x08A41924u, &recomp_unit_0143, "recomp_unit_0143");
    runtime.register_function(0x08A4192Cu, &recomp_unit_0143, "recomp_unit_0143");
    runtime.register_function(0x08A4193Cu, &recomp_unit_0143, "recomp_unit_0143");
    runtime.register_function(0x08A41958u, &recomp_unit_0143, "recomp_unit_0143");
    runtime.register_function(0x08A41960u, &recomp_unit_0143, "recomp_unit_0143");
    runtime.register_function(0x08A41968u, &recomp_unit_0143, "recomp_unit_0143");
    runtime.register_function(0x08A41978u, &recomp_unit_0143, "recomp_unit_0143");
    runtime.register_function(0x08A41994u, &recomp_unit_0143, "recomp_unit_0143");
    runtime.register_function(0x08A4199Cu, &recomp_unit_0143, "recomp_unit_0143");
    runtime.register_function(0x08A419A4u, &recomp_unit_0143, "recomp_unit_0143");
    runtime.register_function(0x08A419B4u, &recomp_unit_0143, "recomp_unit_0143");
    runtime.register_function(0x08A419D0u, &recomp_unit_0143, "recomp_unit_0143");
    runtime.register_function(0x08A419D8u, &recomp_unit_0143, "recomp_unit_0143");
    runtime.register_function(0x08A419E0u, &recomp_unit_0143, "recomp_unit_0143");
    runtime.register_function(0x08A419F0u, &recomp_unit_0143, "recomp_unit_0143");
    runtime.register_function(0x08A41A0Cu, &recomp_unit_0143, "recomp_unit_0143");
    runtime.register_function(0x08A41A14u, &recomp_unit_0143, "recomp_unit_0143");
    runtime.register_function(0x08A41A1Cu, &recomp_unit_0143, "recomp_unit_0143");
    runtime.register_function(0x08A41A2Cu, &recomp_unit_0143, "recomp_unit_0143");
    runtime.register_function(0x08A41A48u, &recomp_unit_0143, "recomp_unit_0143");
    runtime.register_function(0x08A41A50u, &recomp_unit_0143, "recomp_unit_0143");
    runtime.register_function(0x08A41A58u, &recomp_unit_0143, "recomp_unit_0143");
    runtime.register_function(0x08A41A68u, &recomp_unit_0143, "recomp_unit_0143");
    runtime.register_function(0x08A41A84u, &recomp_unit_0143, "recomp_unit_0143");
    runtime.register_function(0x08A41A8Cu, &recomp_unit_0143, "recomp_unit_0143");
    runtime.register_function(0x08A41A94u, &recomp_unit_0143, "recomp_unit_0143");
    runtime.register_function(0x08A41AA4u, &recomp_unit_0143, "recomp_unit_0143");
    runtime.register_function(0x08A41AC0u, &recomp_unit_0143, "recomp_unit_0143");
    runtime.register_function(0x08A41AC8u, &recomp_unit_0143, "recomp_unit_0143");
    runtime.register_function(0x08A41AD0u, &recomp_unit_0143, "recomp_unit_0143");
    runtime.register_function(0x08A41AE0u, &recomp_unit_0143, "recomp_unit_0143");
    runtime.register_function(0x08A41AFCu, &recomp_unit_0143, "recomp_unit_0143");
    runtime.register_function(0x08A41B04u, &recomp_unit_0143, "recomp_unit_0143");
    runtime.register_function(0x08A41B0Cu, &recomp_unit_0143, "recomp_unit_0143");
    runtime.register_function(0x08A41B1Cu, &recomp_unit_0143, "recomp_unit_0143");
    runtime.register_function(0x08A41B38u, &recomp_unit_0143, "recomp_unit_0143");
    runtime.register_function(0x08A41B40u, &recomp_unit_0143, "recomp_unit_0143");
    runtime.register_function(0x08A41B48u, &recomp_unit_0143, "recomp_unit_0143");
    runtime.register_function(0x08A41B58u, &recomp_unit_0143, "recomp_unit_0143");
    runtime.register_function(0x08A41B74u, &recomp_unit_0143, "recomp_unit_0143");
    runtime.register_function(0x08A41B7Cu, &recomp_unit_0143, "recomp_unit_0143");
    runtime.register_function(0x08A41B84u, &recomp_unit_0143, "recomp_unit_0143");
    runtime.register_function(0x08A41B94u, &recomp_unit_0143, "recomp_unit_0143");
    runtime.register_function(0x08A41BB0u, &recomp_unit_0143, "recomp_unit_0143");
    runtime.register_function(0x08A41BB8u, &recomp_unit_0143, "recomp_unit_0143");
    runtime.register_function(0x08A41BC0u, &recomp_unit_0143, "recomp_unit_0143");
    runtime.register_function(0x08A41BD0u, &recomp_unit_0143, "recomp_unit_0143");
    runtime.register_function(0x08A41BECu, &recomp_unit_0143, "recomp_unit_0143");
    runtime.register_function(0x08A41BF4u, &recomp_unit_0143, "recomp_unit_0143");
    runtime.register_function(0x08A41BFCu, &recomp_unit_0143, "recomp_unit_0143");
    runtime.register_function(0x08A41C0Cu, &recomp_unit_0143, "recomp_unit_0143");
    runtime.register_function(0x08A41C28u, &recomp_unit_0143, "recomp_unit_0143");
    runtime.register_function(0x08A41C30u, &recomp_unit_0143, "recomp_unit_0143");
    runtime.register_function(0x08A41C38u, &recomp_unit_0143, "recomp_unit_0143");
    runtime.register_function(0x08A41C48u, &recomp_unit_0143, "recomp_unit_0143");
    runtime.register_function(0x08A41C64u, &recomp_unit_0143, "recomp_unit_0143");
    runtime.register_function(0x08A41C6Cu, &recomp_unit_0143, "recomp_unit_0143");
    runtime.register_function(0x08A41C74u, &recomp_unit_0143, "recomp_unit_0143");
    runtime.register_function(0x08A41C84u, &recomp_unit_0143, "recomp_unit_0143");
    runtime.register_function(0x08A41CA0u, &recomp_unit_0143, "recomp_unit_0143");
    runtime.register_function(0x08A41CA8u, &recomp_unit_0143, "recomp_unit_0143");
    runtime.register_function(0x08A41CB0u, &recomp_unit_0143, "recomp_unit_0143");
    runtime.register_function(0x08A41CC0u, &recomp_unit_0143, "recomp_unit_0143");
    runtime.register_function(0x08A41CDCu, &recomp_unit_0143, "recomp_unit_0143");
    runtime.register_function(0x08A41CE4u, &recomp_unit_0143, "recomp_unit_0143");
    runtime.register_function(0x08A41CECu, &recomp_unit_0143, "recomp_unit_0143");
    runtime.register_function(0x08A41CFCu, &recomp_unit_0143, "recomp_unit_0143");
    runtime.register_function(0x08A41D18u, &recomp_unit_0143, "recomp_unit_0143");
    runtime.register_function(0x08A41D20u, &recomp_unit_0143, "recomp_unit_0143");
    runtime.register_function(0x08A41D28u, &recomp_unit_0143, "recomp_unit_0143");
    runtime.register_function(0x08A41D38u, &recomp_unit_0143, "recomp_unit_0143");
    runtime.register_function(0x08A41D54u, &recomp_unit_0143, "recomp_unit_0143");
    runtime.register_function(0x08A41D5Cu, &recomp_unit_0143, "recomp_unit_0143");
    runtime.register_function(0x08A41D64u, &recomp_unit_0143, "recomp_unit_0143");
    runtime.register_function(0x08A41D74u, &recomp_unit_0143, "recomp_unit_0143");
    runtime.register_function(0x08A41D90u, &recomp_unit_0143, "recomp_unit_0143");
    runtime.register_function(0x08A41D98u, &recomp_unit_0143, "recomp_unit_0143");
    runtime.register_function(0x08A41DA0u, &recomp_unit_0143, "recomp_unit_0143");
    runtime.register_function(0x08A41DB0u, &recomp_unit_0143, "recomp_unit_0143");
    runtime.register_function(0x08A41DCCu, &recomp_unit_0143, "recomp_unit_0143");
    runtime.register_function(0x08A41DD4u, &recomp_unit_0143, "recomp_unit_0143");
    runtime.register_function(0x08A41DDCu, &recomp_unit_0143, "recomp_unit_0143");
    runtime.register_function(0x08A41DECu, &recomp_unit_0143, "recomp_unit_0143");
    runtime.register_function(0x08A41E08u, &recomp_unit_0143, "recomp_unit_0143");
    runtime.register_function(0x08A41E10u, &recomp_unit_0143, "recomp_unit_0143");
    runtime.register_function(0x08A41E18u, &recomp_unit_0143, "recomp_unit_0143");
    runtime.register_function(0x08A41E28u, &recomp_unit_0143, "recomp_unit_0143");
    runtime.register_function(0x08A41E44u, &recomp_unit_0143, "recomp_unit_0143");
    runtime.register_function(0x08A41E4Cu, &recomp_unit_0143, "recomp_unit_0143");
    runtime.register_function(0x08A41E54u, &recomp_unit_0143, "recomp_unit_0143");
    runtime.register_function(0x08A41E64u, &recomp_unit_0143, "recomp_unit_0143");
    runtime.register_function(0x08A41E80u, &recomp_unit_0143, "recomp_unit_0143");
    runtime.register_function(0x08A41E88u, &recomp_unit_0143, "recomp_unit_0143");
    runtime.register_function(0x08A41E90u, &recomp_unit_0143, "recomp_unit_0143");
    runtime.register_function(0x08A41EA0u, &recomp_unit_0143, "recomp_unit_0143");
    runtime.register_function(0x08A41EBCu, &recomp_unit_0143, "recomp_unit_0143");
    runtime.register_function(0x08A41EC4u, &recomp_unit_0143, "recomp_unit_0143");
    runtime.register_function(0x08A41ECCu, &recomp_unit_0143, "recomp_unit_0143");
    runtime.register_function(0x08A41EDCu, &recomp_unit_0143, "recomp_unit_0143");
    runtime.register_function(0x08A41EF8u, &recomp_unit_0143, "recomp_unit_0143");
    runtime.register_function(0x08A41F00u, &recomp_unit_0143, "recomp_unit_0143");
    runtime.register_function(0x08A41F08u, &recomp_unit_0143, "recomp_unit_0143");
    runtime.register_function(0x08A41F18u, &recomp_unit_0143, "recomp_unit_0143");
    runtime.register_function(0x08A41F34u, &recomp_unit_0143, "recomp_unit_0143");
    runtime.register_function(0x08A41F3Cu, &recomp_unit_0143, "recomp_unit_0143");
    runtime.register_function(0x08A41F44u, &recomp_unit_0143, "recomp_unit_0143");
    runtime.register_function(0x08A41F54u, &recomp_unit_0143, "recomp_unit_0143");
    runtime.register_function(0x08A41F70u, &recomp_unit_0143, "recomp_unit_0143");
    runtime.register_function(0x08A41F78u, &recomp_unit_0143, "recomp_unit_0143");
    runtime.register_function(0x08A41F80u, &recomp_unit_0143, "recomp_unit_0143");
    runtime.register_function(0x08A41F90u, &recomp_unit_0143, "recomp_unit_0143");
    runtime.register_function(0x08A41FACu, &recomp_unit_0143, "recomp_unit_0143");
    runtime.register_function(0x08A41FB4u, &recomp_unit_0143, "recomp_unit_0143");
    runtime.register_function(0x08A41FBCu, &recomp_unit_0143, "recomp_unit_0143");
    runtime.register_function(0x08A41FCCu, &recomp_unit_0143, "recomp_unit_0143");
    runtime.register_function(0x08A41FE8u, &recomp_unit_0143, "recomp_unit_0143");
    runtime.register_function(0x08A41FF0u, &recomp_unit_0143, "recomp_unit_0143");
    runtime.register_function(0x08A41FF8u, &recomp_unit_0143, "recomp_unit_0143");
    runtime.register_function(0x08A42008u, &recomp_unit_0143, "recomp_unit_0143");
    runtime.register_function(0x08A42024u, &recomp_unit_0143, "recomp_unit_0143");
    runtime.register_function(0x08A4202Cu, &recomp_unit_0143, "recomp_unit_0143");
    runtime.register_function(0x08A42034u, &recomp_unit_0143, "recomp_unit_0143");
    runtime.register_function(0x08A42044u, &recomp_unit_0143, "recomp_unit_0143");
    runtime.register_function(0x08A42060u, &recomp_unit_0143, "recomp_unit_0143");
    runtime.register_function(0x08A42068u, &recomp_unit_0143, "recomp_unit_0143");
    runtime.register_function(0x08A42070u, &recomp_unit_0143, "recomp_unit_0143");
    runtime.register_function(0x08A42080u, &recomp_unit_0143, "recomp_unit_0143");
    runtime.register_function(0x08A4209Cu, &recomp_unit_0143, "recomp_unit_0143");
    runtime.register_function(0x08A420A4u, &recomp_unit_0143, "recomp_unit_0143");
    runtime.register_function(0x08A420ACu, &recomp_unit_0143, "recomp_unit_0143");
    runtime.register_function(0x08A420BCu, &recomp_unit_0143, "recomp_unit_0143");
    runtime.register_function(0x08A420D8u, &recomp_unit_0143, "recomp_unit_0143");
    runtime.register_function(0x08A420E0u, &recomp_unit_0143, "recomp_unit_0143");
    runtime.register_function(0x08A420E8u, &recomp_unit_0143, "recomp_unit_0143");
    runtime.register_function(0x08A420F4u, &recomp_unit_0143, "recomp_unit_0143");
    runtime.register_function(0x08A42108u, &recomp_unit_0143, "recomp_unit_0143");
    runtime.register_function(0x08A42120u, &recomp_unit_0143, "recomp_unit_0143");
    runtime.register_function(0x08A42130u, &recomp_unit_0143, "recomp_unit_0143");
    runtime.register_function(0x08A42140u, &recomp_unit_0143, "recomp_unit_0143");
    runtime.register_function(0x08A42150u, &recomp_unit_0143, "recomp_unit_0143");
    runtime.register_function(0x08A42160u, &recomp_unit_0143, "recomp_unit_0143");
    runtime.register_function(0x08A42170u, &recomp_unit_0143, "recomp_unit_0143");
    runtime.register_function(0x08A42180u, &recomp_unit_0143, "recomp_unit_0143");
    runtime.register_function(0x08A42194u, &recomp_unit_0143, "recomp_unit_0143");
    runtime.register_function(0x08A421A4u, &recomp_unit_0143, "recomp_unit_0143");
    runtime.register_function(0x08A421B8u, &recomp_unit_0143, "recomp_unit_0143");
    runtime.register_function(0x08A421C8u, &recomp_unit_0143, "recomp_unit_0143");
    runtime.register_function(0x08A421E4u, &recomp_unit_0143, "recomp_unit_0143");
    runtime.register_function(0x08A42220u, &recomp_unit_0143, "recomp_unit_0143");
    runtime.register_function(0x08A42234u, &recomp_unit_0143, "recomp_unit_0143");
    runtime.register_function(0x08A42244u, &recomp_unit_0143, "recomp_unit_0143");
    runtime.register_function(0x08A42260u, &recomp_unit_0143, "recomp_unit_0143");
    runtime.register_function(0x08A4227Cu, &recomp_unit_0143, "recomp_unit_0143");
    runtime.register_function(0x08A4228Cu, &recomp_unit_0143, "recomp_unit_0143");
    runtime.register_function(0x08A422D4u, &recomp_unit_0143, "recomp_unit_0143");
    runtime.register_function(0x08A422DCu, &recomp_unit_0143, "recomp_unit_0143");
    runtime.register_function(0x08A422E8u, &recomp_unit_0143, "recomp_unit_0143");
    runtime.register_function(0x08A42318u, &recomp_unit_0143, "recomp_unit_0143");
    runtime.register_function(0x08A4232Cu, &recomp_unit_0143, "recomp_unit_0143");
    runtime.register_function(0x08A42334u, &recomp_unit_0143, "recomp_unit_0143");
    runtime.register_function(0x08A42340u, &recomp_unit_0143, "recomp_unit_0143");
    runtime.register_function(0x08A4234Cu, &recomp_unit_0143, "recomp_unit_0143");
    runtime.register_function(0x08A42354u, &recomp_unit_0143, "recomp_unit_0143");
    runtime.register_function(0x08A42364u, &recomp_unit_0143, "recomp_unit_0143");
    runtime.register_function(0x08A42370u, &recomp_unit_0143, "recomp_unit_0143");
    runtime.register_function(0x08A42384u, &recomp_unit_0143, "recomp_unit_0143");
    runtime.register_function(0x08A42390u, &recomp_unit_0143, "recomp_unit_0143");
    runtime.register_function(0x08A423A4u, &recomp_unit_0143, "recomp_unit_0143");
    runtime.register_function(0x08A423ACu, &recomp_unit_0143, "recomp_unit_0143");
    runtime.register_function(0x08A423C0u, &recomp_unit_0143, "recomp_unit_0143");
    runtime.register_function(0x08A423C8u, &recomp_unit_0143, "recomp_unit_0143");
    runtime.register_function(0x08A423DCu, &recomp_unit_0143, "recomp_unit_0143");
    runtime.register_function(0x08A423E8u, &recomp_unit_0143, "recomp_unit_0143");
    runtime.register_function(0x08A423FCu, &recomp_unit_0143, "recomp_unit_0143");
    runtime.register_function(0x08A42400u, &recomp_unit_0143, "recomp_unit_0143");
    runtime.register_function(0x08A42410u, &recomp_unit_0143, "recomp_unit_0143");
    runtime.register_function(0x08A4243Cu, &recomp_unit_0143, "recomp_unit_0143");
    runtime.register_function(0x08A42464u, &recomp_unit_0143, "recomp_unit_0143");
    runtime.register_function(0x08A4246Cu, &recomp_unit_0143, "recomp_unit_0143");
    runtime.register_function(0x08A42478u, &recomp_unit_0143, "recomp_unit_0143");
    runtime.register_function(0x08A42484u, &recomp_unit_0143, "recomp_unit_0143");
    runtime.register_function(0x08A4248Cu, &recomp_unit_0143, "recomp_unit_0143");
    runtime.register_function(0x08A42498u, &recomp_unit_0143, "recomp_unit_0143");
    runtime.register_function(0x08A424A0u, &recomp_unit_0143, "recomp_unit_0143");
    runtime.register_function(0x08A424ACu, &recomp_unit_0143, "recomp_unit_0143");
    runtime.register_function(0x08A424B4u, &recomp_unit_0143, "recomp_unit_0143");
    runtime.register_function(0x08A424D4u, &recomp_unit_0143, "recomp_unit_0143");
    runtime.register_function(0x08A42504u, &recomp_unit_0143, "recomp_unit_0143");
    runtime.register_function(0x08A4251Cu, &recomp_unit_0143, "recomp_unit_0143");
    runtime.register_function(0x08A42534u, &recomp_unit_0143, "recomp_unit_0143");
    runtime.register_function(0x08A42550u, &recomp_unit_0143, "recomp_unit_0143");
    runtime.register_function(0x08A42594u, &recomp_unit_0143, "recomp_unit_0143");
    runtime.register_function(0x08A4259Cu, &recomp_unit_0143, "recomp_unit_0143");
    runtime.register_function(0x08A425A0u, &recomp_unit_0143, "recomp_unit_0143");
    runtime.register_function(0x08A425B4u, &recomp_unit_0143, "recomp_unit_0143");
    runtime.register_function(0x08A425BCu, &recomp_unit_0143, "recomp_unit_0143");
    runtime.register_function(0x08A425D8u, &recomp_unit_0143, "recomp_unit_0143");
    runtime.register_function(0x08A425E8u, &recomp_unit_0143, "recomp_unit_0143");
    runtime.register_function(0x08A42634u, &recomp_unit_0143, "recomp_unit_0143");
    runtime.register_function(0x08A4263Cu, &recomp_unit_0143, "recomp_unit_0143");
    runtime.register_function(0x08A42648u, &recomp_unit_0143, "recomp_unit_0143");
    runtime.register_function(0x08A42678u, &recomp_unit_0143, "recomp_unit_0143");
    runtime.register_function(0x08A4268Cu, &recomp_unit_0143, "recomp_unit_0143");
    runtime.register_function(0x08A42694u, &recomp_unit_0143, "recomp_unit_0143");
    runtime.register_function(0x08A426A0u, &recomp_unit_0143, "recomp_unit_0143");
    runtime.register_function(0x08A426ACu, &recomp_unit_0143, "recomp_unit_0143");
    runtime.register_function(0x08A426B4u, &recomp_unit_0143, "recomp_unit_0143");
    runtime.register_function(0x08A426C4u, &recomp_unit_0143, "recomp_unit_0143");
    runtime.register_function(0x08A426D0u, &recomp_unit_0143, "recomp_unit_0143");
    runtime.register_function(0x08A426E4u, &recomp_unit_0143, "recomp_unit_0143");
    runtime.register_function(0x08A426F0u, &recomp_unit_0143, "recomp_unit_0143");
    runtime.register_function(0x08A42700u, &recomp_unit_0143, "recomp_unit_0143");
    runtime.register_function(0x08A42708u, &recomp_unit_0143, "recomp_unit_0143");
    runtime.register_function(0x08A42718u, &recomp_unit_0143, "recomp_unit_0143");
    runtime.register_function(0x08A42720u, &recomp_unit_0143, "recomp_unit_0143");
    runtime.register_function(0x08A42730u, &recomp_unit_0143, "recomp_unit_0143");
    runtime.register_function(0x08A4273Cu, &recomp_unit_0143, "recomp_unit_0143");
    runtime.register_function(0x08A42750u, &recomp_unit_0143, "recomp_unit_0143");
    runtime.register_function(0x08A42754u, &recomp_unit_0143, "recomp_unit_0143");
    runtime.register_function(0x08A42764u, &recomp_unit_0143, "recomp_unit_0143");
    runtime.register_function(0x08A42790u, &recomp_unit_0143, "recomp_unit_0143");
    runtime.register_function(0x08A427C0u, &recomp_unit_0143, "recomp_unit_0143");
    runtime.register_function(0x08A427CCu, &recomp_unit_0143, "recomp_unit_0143");
    runtime.register_function(0x08A427D4u, &recomp_unit_0143, "recomp_unit_0143");
    runtime.register_function(0x08A427E0u, &recomp_unit_0143, "recomp_unit_0143");
    runtime.register_function(0x08A427E8u, &recomp_unit_0143, "recomp_unit_0143");
    runtime.register_function(0x08A427F8u, &recomp_unit_0143, "recomp_unit_0143");
    runtime.register_function(0x08A42800u, &recomp_unit_0143, "recomp_unit_0143");
    runtime.register_function(0x08A42820u, &recomp_unit_0143, "recomp_unit_0143");
    runtime.register_function(0x08A42830u, &recomp_unit_0143, "recomp_unit_0143");
    runtime.register_function(0x08A42838u, &recomp_unit_0143, "recomp_unit_0143");
    runtime.register_function(0x08A42844u, &recomp_unit_0143, "recomp_unit_0143");
    runtime.register_function(0x08A42850u, &recomp_unit_0143, "recomp_unit_0143");
    runtime.register_function(0x08A42858u, &recomp_unit_0143, "recomp_unit_0143");
    runtime.register_function(0x08A42870u, &recomp_unit_0143, "recomp_unit_0143");
    runtime.register_function(0x08A42878u, &recomp_unit_0143, "recomp_unit_0143");
    runtime.register_function(0x08A42890u, &recomp_unit_0143, "recomp_unit_0143");
    runtime.register_function(0x08A42898u, &recomp_unit_0143, "recomp_unit_0143");
    runtime.register_function(0x08A428B8u, &recomp_unit_0143, "recomp_unit_0143");
    runtime.register_function(0x08A428E8u, &recomp_unit_0143, "recomp_unit_0143");
    runtime.register_function(0x08A42904u, &recomp_unit_0143, "recomp_unit_0143");
    runtime.register_function(0x08A42914u, &recomp_unit_0143, "recomp_unit_0143");
    runtime.register_function(0x08A42930u, &recomp_unit_0143, "recomp_unit_0143");
    runtime.register_function(0x08A42948u, &recomp_unit_0143, "recomp_unit_0143");
    runtime.register_function(0x08A4296Cu, &recomp_unit_0143, "recomp_unit_0143");
    runtime.register_function(0x08A42978u, &recomp_unit_0143, "recomp_unit_0143");
    runtime.register_function(0x08A42990u, &recomp_unit_0143, "recomp_unit_0143");
    runtime.register_function(0x08A429A8u, &recomp_unit_0143, "recomp_unit_0143");
    runtime.register_function(0x08A429B8u, &recomp_unit_0143, "recomp_unit_0143");
    runtime.register_function(0x08A429D0u, &recomp_unit_0143, "recomp_unit_0143");
    runtime.register_function(0x08A42A00u, &recomp_unit_0143, "recomp_unit_0143");
    runtime.register_function(0x08A42A14u, &recomp_unit_0143, "recomp_unit_0143");
    runtime.register_function(0x08A42A28u, &recomp_unit_0143, "recomp_unit_0143");
    runtime.register_function(0x08A42A40u, &recomp_unit_0143, "recomp_unit_0143");
    runtime.register_function(0x08A42A48u, &recomp_unit_0143, "recomp_unit_0143");
    runtime.register_function(0x08A42A4Cu, &recomp_unit_0143, "recomp_unit_0143");
    runtime.register_function(0x08A42A58u, &recomp_unit_0143, "recomp_unit_0143");
    runtime.register_function(0x08A42A68u, &recomp_unit_0143, "recomp_unit_0143");
    runtime.register_function(0x08A42A7Cu, &recomp_unit_0143, "recomp_unit_0143");
    runtime.register_function(0x08A42A88u, &recomp_unit_0143, "recomp_unit_0143");
    runtime.register_function(0x08A42A8Cu, &recomp_unit_0143, "recomp_unit_0143");
    runtime.register_function(0x08A42A94u, &recomp_unit_0143, "recomp_unit_0143");
    runtime.register_function(0x08A42A9Cu, &recomp_unit_0143, "recomp_unit_0143");
    runtime.register_function(0x08A42AB0u, &recomp_unit_0143, "recomp_unit_0143");
    runtime.register_function(0x08A42AC4u, &recomp_unit_0143, "recomp_unit_0143");
    runtime.register_function(0x08A42AD8u, &recomp_unit_0143, "recomp_unit_0143");
    runtime.register_function(0x08A42AF4u, &recomp_unit_0143, "recomp_unit_0143");
    runtime.register_function(0x08A42B08u, &recomp_unit_0143, "recomp_unit_0143");
    runtime.register_function(0x08A42B10u, &recomp_unit_0143, "recomp_unit_0143");
    runtime.register_function(0x08A42B1Cu, &recomp_unit_0143, "recomp_unit_0143");
    runtime.register_function(0x08A42B28u, &recomp_unit_0143, "recomp_unit_0143");
    runtime.register_function(0x08A42B3Cu, &recomp_unit_0143, "recomp_unit_0143");
    runtime.register_function(0x08A42B4Cu, &recomp_unit_0143, "recomp_unit_0143");
    runtime.register_function(0x08A42B5Cu, &recomp_unit_0143, "recomp_unit_0143");
    runtime.register_function(0x08A42B64u, &recomp_unit_0143, "recomp_unit_0143");
    runtime.register_function(0x08A42B74u, &recomp_unit_0143, "recomp_unit_0143");
    runtime.register_function(0x08A42B88u, &recomp_unit_0143, "recomp_unit_0143");
    runtime.register_function(0x08A42B9Cu, &recomp_unit_0143, "recomp_unit_0143");
    runtime.register_function(0x08A42BB0u, &recomp_unit_0143, "recomp_unit_0143");
    runtime.register_function(0x08A42BC4u, &recomp_unit_0143, "recomp_unit_0143");
    runtime.register_function(0x08A42BD4u, &recomp_unit_0143, "recomp_unit_0143");
    runtime.register_function(0x08A42BE4u, &recomp_unit_0143, "recomp_unit_0143");
    runtime.register_function(0x08A42BF4u, &recomp_unit_0143, "recomp_unit_0143");
    runtime.register_function(0x08A42C00u, &recomp_unit_0143, "recomp_unit_0143");
    runtime.register_function(0x08A42C04u, &recomp_unit_0143, "recomp_unit_0143");
    runtime.register_function(0x08A42C28u, &recomp_unit_0143, "recomp_unit_0143");
    runtime.register_function(0x08A42C38u, &recomp_unit_0143, "recomp_unit_0143");
    runtime.register_function(0x08A42C4Cu, &recomp_unit_0143, "recomp_unit_0143");
    runtime.register_function(0x08A42C5Cu, &recomp_unit_0143, "recomp_unit_0143");
    runtime.register_function(0x08A42C84u, &recomp_unit_0143, "recomp_unit_0143");
    runtime.register_function(0x08A42C90u, &recomp_unit_0143, "recomp_unit_0143");
    runtime.register_function(0x08A42C98u, &recomp_unit_0143, "recomp_unit_0143");
    runtime.register_function(0x08A42CA4u, &recomp_unit_0143, "recomp_unit_0143");
    runtime.register_function(0x08A42CB0u, &recomp_unit_0143, "recomp_unit_0143");
    runtime.register_function(0x08A42CC4u, &recomp_unit_0143, "recomp_unit_0143");
    runtime.register_function(0x08A42CDCu, &recomp_unit_0143, "recomp_unit_0143");
    runtime.register_function(0x08A42CF0u, &recomp_unit_0143, "recomp_unit_0143");
    runtime.register_function(0x08A42D04u, &recomp_unit_0143, "recomp_unit_0143");
    runtime.register_function(0x08A42D18u, &recomp_unit_0143, "recomp_unit_0143");
    runtime.register_function(0x08A42D28u, &recomp_unit_0143, "recomp_unit_0143");
    runtime.register_function(0x08A42D3Cu, &recomp_unit_0143, "recomp_unit_0143");
    runtime.register_function(0x08A42D4Cu, &recomp_unit_0143, "recomp_unit_0143");
    runtime.register_function(0x08A42D5Cu, &recomp_unit_0143, "recomp_unit_0143");
    runtime.register_function(0x08A42D9Cu, &recomp_unit_0143, "recomp_unit_0143");
    runtime.register_function(0x08A42DB4u, &recomp_unit_0143, "recomp_unit_0143");
    runtime.register_function(0x08A42DC0u, &recomp_unit_0143, "recomp_unit_0143");
    runtime.register_function(0x08A42DD4u, &recomp_unit_0143, "recomp_unit_0143");
    runtime.register_function(0x08A42DDCu, &recomp_unit_0143, "recomp_unit_0143");
    runtime.register_function(0x08A42DECu, &recomp_unit_0143, "recomp_unit_0143");
    runtime.register_function(0x08A42DF0u, &recomp_unit_0143, "recomp_unit_0143");
    runtime.register_function(0x08A42DFCu, &recomp_unit_0143, "recomp_unit_0143");
    runtime.register_function(0x08A42E04u, &recomp_unit_0143, "recomp_unit_0143");
    runtime.register_function(0x08A42E14u, &recomp_unit_0143, "recomp_unit_0143");
    runtime.register_function(0x08A42E28u, &recomp_unit_0143, "recomp_unit_0143");
    runtime.register_function(0x08A42E44u, &recomp_unit_0143, "recomp_unit_0143");
    runtime.register_function(0x08A42E54u, &recomp_unit_0143, "recomp_unit_0143");
    runtime.register_function(0x08A42E58u, &recomp_unit_0143, "recomp_unit_0143");
    runtime.register_function(0x08A42E64u, &recomp_unit_0143, "recomp_unit_0143");
    runtime.register_function(0x08A42E7Cu, &recomp_unit_0143, "recomp_unit_0143");
    runtime.register_function(0x08A42E8Cu, &recomp_unit_0143, "recomp_unit_0143");
    runtime.register_function(0x08A42E9Cu, &recomp_unit_0143, "recomp_unit_0143");
    runtime.register_function(0x08A42EC4u, &recomp_unit_0143, "recomp_unit_0143");
    runtime.register_function(0x08A42EE4u, &recomp_unit_0143, "recomp_unit_0143");
    runtime.register_function(0x08A42EF8u, &recomp_unit_0143, "recomp_unit_0143");
    runtime.register_function(0x08A42F04u, &recomp_unit_0143, "recomp_unit_0143");
    runtime.register_function(0x08A42F20u, &recomp_unit_0143, "recomp_unit_0143");
    runtime.register_function(0x08A42F30u, &recomp_unit_0143, "recomp_unit_0143");
    runtime.register_function(0x08A42F40u, &recomp_unit_0143, "recomp_unit_0143");
    runtime.register_function(0x08A42F54u, &recomp_unit_0143, "recomp_unit_0143");
    runtime.register_function(0x08A42F74u, &recomp_unit_0143, "recomp_unit_0143");
    runtime.register_function(0x08A42F88u, &recomp_unit_0143, "recomp_unit_0143");
    runtime.register_function(0x08A42FA8u, &recomp_unit_0143, "recomp_unit_0143");
    runtime.register_function(0x08A42FC8u, &recomp_unit_0143, "recomp_unit_0143");
    runtime.register_function(0x08A42FD8u, &recomp_unit_0143, "recomp_unit_0143");
    runtime.register_function(0x08A42FE8u, &recomp_unit_0143, "recomp_unit_0143");
    runtime.register_function(0x08A43000u, &recomp_unit_0143, "recomp_unit_0143");
    runtime.register_function(0x08A43008u, &recomp_unit_0143, "recomp_unit_0143");
    runtime.register_function(0x08A43018u, &recomp_unit_0143, "recomp_unit_0143");
    runtime.register_function(0x08A4302Cu, &recomp_unit_0143, "recomp_unit_0143");
    runtime.register_function(0x08A43058u, &recomp_unit_0143, "recomp_unit_0143");
    runtime.register_function(0x08A43060u, &recomp_unit_0143, "recomp_unit_0143");
    runtime.register_function(0x08A4306Cu, &recomp_unit_0143, "recomp_unit_0143");
    runtime.register_function(0x08A43078u, &recomp_unit_0143, "recomp_unit_0143");
    runtime.register_function(0x08A4308Cu, &recomp_unit_0143, "recomp_unit_0143");
    runtime.register_function(0x08A4309Cu, &recomp_unit_0143, "recomp_unit_0143");
    runtime.register_function(0x08A430B4u, &recomp_unit_0143, "recomp_unit_0143");
    runtime.register_function(0x08A430BCu, &recomp_unit_0143, "recomp_unit_0143");
    runtime.register_function(0x08A430D0u, &recomp_unit_0143, "recomp_unit_0143");
    runtime.register_function(0x08A430D8u, &recomp_unit_0143, "recomp_unit_0143");
    runtime.register_function(0x08A430F0u, &recomp_unit_0143, "recomp_unit_0143");
    runtime.register_function(0x08A430F8u, &recomp_unit_0143, "recomp_unit_0143");
    runtime.register_function(0x08A43118u, &recomp_unit_0143, "recomp_unit_0143");
    runtime.register_function(0x08A43120u, &recomp_unit_0143, "recomp_unit_0143");
    runtime.register_function(0x08A4313Cu, &recomp_unit_0143, "recomp_unit_0143");
    runtime.register_function(0x08A43148u, &recomp_unit_0143, "recomp_unit_0143");
    runtime.register_function(0x08A43154u, &recomp_unit_0143, "recomp_unit_0143");
    runtime.register_function(0x08A43160u, &recomp_unit_0143, "recomp_unit_0143");
    runtime.register_function(0x08A4316Cu, &recomp_unit_0143, "recomp_unit_0143");
    runtime.register_function(0x08A43170u, &recomp_unit_0143, "recomp_unit_0143");
    runtime.register_function(0x08A4317Cu, &recomp_unit_0143, "recomp_unit_0143");
    runtime.register_function(0x08A431A4u, &recomp_unit_0143, "recomp_unit_0143");
    runtime.register_function(0x08A43200u, &recomp_unit_0143, "recomp_unit_0143");
    runtime.register_function(0x08A43208u, &recomp_unit_0143, "recomp_unit_0143");
    runtime.register_function(0x08A4322Cu, &recomp_unit_0143, "recomp_unit_0143");
    runtime.register_function(0x08A43268u, &recomp_unit_0143, "recomp_unit_0143");
    runtime.register_function(0x08A4328Cu, &recomp_unit_0143, "recomp_unit_0143");
    runtime.register_function(0x08A43294u, &recomp_unit_0143, "recomp_unit_0143");
    runtime.register_function(0x08A432A0u, &recomp_unit_0143, "recomp_unit_0143");
    runtime.register_function(0x08A432B4u, &recomp_unit_0143, "recomp_unit_0143");
    runtime.register_function(0x08A432C4u, &recomp_unit_0143, "recomp_unit_0143");
    runtime.register_function(0x08A432E0u, &recomp_unit_0143, "recomp_unit_0143");
    runtime.register_function(0x08A432F8u, &recomp_unit_0143, "recomp_unit_0143");
    runtime.register_function(0x08A432FCu, &recomp_unit_0143, "recomp_unit_0143");
    runtime.register_function(0x08A43308u, &recomp_unit_0143, "recomp_unit_0143");
    runtime.register_function(0x08A4330Cu, &recomp_unit_0143, "recomp_unit_0143");
    runtime.register_function(0x08A43318u, &recomp_unit_0143, "recomp_unit_0143");
    runtime.register_function(0x08A43324u, &recomp_unit_0143, "recomp_unit_0143");
    runtime.register_function(0x08A43350u, &recomp_unit_0143, "recomp_unit_0143");
    runtime.register_function(0x08A433A4u, &recomp_unit_0143, "recomp_unit_0143");
    runtime.register_function(0x08A433B4u, &recomp_unit_0143, "recomp_unit_0143");
    runtime.register_function(0x08A433C4u, &recomp_unit_0143, "recomp_unit_0143");
    runtime.register_function(0x08A433D0u, &recomp_unit_0143, "recomp_unit_0143");
    runtime.register_function(0x08A43404u, &recomp_unit_0143, "recomp_unit_0143");
    runtime.register_function(0x08A43418u, &recomp_unit_0143, "recomp_unit_0143");
    runtime.register_function(0x08A4344Cu, &recomp_unit_0143, "recomp_unit_0143");
    runtime.register_function(0x08A43454u, &recomp_unit_0143, "recomp_unit_0143");
    runtime.register_function(0x08A43460u, &recomp_unit_0143, "recomp_unit_0143");
    runtime.register_function(0x08A4346Cu, &recomp_unit_0143, "recomp_unit_0143");
    runtime.register_function(0x08A43490u, &recomp_unit_0143, "recomp_unit_0143");
    runtime.register_function(0x08A434D8u, &recomp_unit_0143, "recomp_unit_0143");
    runtime.register_function(0x08A434FCu, &recomp_unit_0143, "recomp_unit_0143");
    runtime.register_function(0x08A43514u, &recomp_unit_0143, "recomp_unit_0143");
    runtime.register_function(0x08A4351Cu, &recomp_unit_0143, "recomp_unit_0143");
    runtime.register_function(0x08A43520u, &recomp_unit_0143, "recomp_unit_0143");
    runtime.register_function(0x08A4352Cu, &recomp_unit_0143, "recomp_unit_0143");
    runtime.register_function(0x08A43530u, &recomp_unit_0143, "recomp_unit_0143");
    runtime.register_function(0x08A4355Cu, &recomp_unit_0143, "recomp_unit_0143");
    runtime.register_function(0x08A43568u, &recomp_unit_0143, "recomp_unit_0143");
    runtime.register_function(0x08A43574u, &recomp_unit_0143, "recomp_unit_0143");
    runtime.register_function(0x08A4357Cu, &recomp_unit_0143, "recomp_unit_0143");
    runtime.register_function(0x08A43588u, &recomp_unit_0143, "recomp_unit_0143");
    runtime.register_function(0x08A435ACu, &recomp_unit_0143, "recomp_unit_0143");
    runtime.register_function(0x08A435C0u, &recomp_unit_0143, "recomp_unit_0143");
    runtime.register_function(0x08A435C8u, &recomp_unit_0143, "recomp_unit_0143");
    runtime.register_function(0x08A435D4u, &recomp_unit_0143, "recomp_unit_0143");
    runtime.register_function(0x08A435E0u, &recomp_unit_0143, "recomp_unit_0143");
    runtime.register_function(0x08A435F8u, &recomp_unit_0143, "recomp_unit_0143");
    runtime.register_function(0x08A43640u, &recomp_unit_0143, "recomp_unit_0143");
    runtime.register_function(0x08A43658u, &recomp_unit_0143, "recomp_unit_0143");
    runtime.register_function(0x08A43660u, &recomp_unit_0143, "recomp_unit_0143");
    runtime.register_function(0x08A43664u, &recomp_unit_0143, "recomp_unit_0143");
    runtime.register_function(0x08A43670u, &recomp_unit_0143, "recomp_unit_0143");
    runtime.register_function(0x08A43674u, &recomp_unit_0143, "recomp_unit_0143");
    runtime.register_function(0x08A43680u, &recomp_unit_0143, "recomp_unit_0143");
    runtime.register_function(0x08A4368Cu, &recomp_unit_0143, "recomp_unit_0143");
    runtime.register_function(0x08A43698u, &recomp_unit_0143, "recomp_unit_0143");
    runtime.register_function(0x08A436ACu, &recomp_unit_0143, "recomp_unit_0143");
    runtime.register_function(0x08A436C4u, &recomp_unit_0143, "recomp_unit_0143");
    runtime.register_function(0x08A436D8u, &recomp_unit_0143, "recomp_unit_0143");
    runtime.register_function(0x08A436ECu, &recomp_unit_0143, "recomp_unit_0143");
    runtime.register_function(0x08A43714u, &recomp_unit_0143, "recomp_unit_0143");
    runtime.register_function(0x08A43728u, &recomp_unit_0143, "recomp_unit_0143");
    runtime.register_function(0x08A4373Cu, &recomp_unit_0143, "recomp_unit_0143");
    runtime.register_function(0x08A43760u, &recomp_unit_0143, "recomp_unit_0143");
    runtime.register_function(0x08A43768u, &recomp_unit_0143, "recomp_unit_0143");
    runtime.register_function(0x08A43788u, &recomp_unit_0143, "recomp_unit_0143");
    runtime.register_function(0x08A437E0u, &recomp_unit_0143, "recomp_unit_0143");
    runtime.register_function(0x08A437F0u, &recomp_unit_0143, "recomp_unit_0143");
    runtime.register_function(0x08A43804u, &recomp_unit_0143, "recomp_unit_0143");
    runtime.register_function(0x08A4380Cu, &recomp_unit_0143, "recomp_unit_0143");
    runtime.register_function(0x08A4381Cu, &recomp_unit_0143, "recomp_unit_0143");
    runtime.register_function(0x08A43828u, &recomp_unit_0143, "recomp_unit_0143");
    runtime.register_function(0x08A4383Cu, &recomp_unit_0143, "recomp_unit_0143");
    runtime.register_function(0x08A43844u, &recomp_unit_0143, "recomp_unit_0143");
    runtime.register_function(0x08A43850u, &recomp_unit_0143, "recomp_unit_0143");
    runtime.register_function(0x08A43860u, &recomp_unit_0143, "recomp_unit_0143");
    runtime.register_function(0x08A4387Cu, &recomp_unit_0143, "recomp_unit_0143");
    runtime.register_function(0x08A4388Cu, &recomp_unit_0143, "recomp_unit_0143");
    runtime.register_function(0x08A43898u, &recomp_unit_0143, "recomp_unit_0143");
    runtime.register_function(0x08A438A0u, &recomp_unit_0143, "recomp_unit_0143");
    runtime.register_function(0x08A438ACu, &recomp_unit_0143, "recomp_unit_0143");
    runtime.register_function(0x08A438BCu, &recomp_unit_0143, "recomp_unit_0143");
    runtime.register_function(0x08A438C0u, &recomp_unit_0143, "recomp_unit_0143");
    runtime.register_function(0x08A438CCu, &recomp_unit_0143, "recomp_unit_0143");
    runtime.register_function(0x08A438D4u, &recomp_unit_0143, "recomp_unit_0143");
    runtime.register_function(0x08A438E0u, &recomp_unit_0143, "recomp_unit_0143");
    runtime.register_function(0x08A438ECu, &recomp_unit_0143, "recomp_unit_0143");
    runtime.register_function(0x08A43908u, &recomp_unit_0143, "recomp_unit_0143");
    runtime.register_function(0x08A43920u, &recomp_unit_0143, "recomp_unit_0143");
    runtime.register_function(0x08A43924u, &recomp_unit_0143, "recomp_unit_0143");
    runtime.register_function(0x08A43930u, &recomp_unit_0143, "recomp_unit_0143");
    runtime.register_function(0x08A43938u, &recomp_unit_0143, "recomp_unit_0143");
    runtime.register_function(0x08A43948u, &recomp_unit_0143, "recomp_unit_0143");
    runtime.register_function(0x08A43954u, &recomp_unit_0143, "recomp_unit_0143");
    runtime.register_function(0x08A43968u, &recomp_unit_0143, "recomp_unit_0143");
    runtime.register_function(0x08A43978u, &recomp_unit_0143, "recomp_unit_0143");
    runtime.register_function(0x08A4398Cu, &recomp_unit_0143, "recomp_unit_0143");
    runtime.register_function(0x08A439B4u, &recomp_unit_0143, "recomp_unit_0143");
    runtime.register_function(0x08A43A04u, &recomp_unit_0143, "recomp_unit_0143");
    runtime.register_function(0x08A43A10u, &recomp_unit_0143, "recomp_unit_0143");
    runtime.register_function(0x08A43A20u, &recomp_unit_0143, "recomp_unit_0143");
    runtime.register_function(0x08A43A2Cu, &recomp_unit_0143, "recomp_unit_0143");
    runtime.register_function(0x08A43A54u, &recomp_unit_0143, "recomp_unit_0143");
    runtime.register_function(0x08A43A70u, &recomp_unit_0143, "recomp_unit_0143");
    runtime.register_function(0x08A43A94u, &recomp_unit_0143, "recomp_unit_0143");
    runtime.register_function(0x08A43AA8u, &recomp_unit_0143, "recomp_unit_0143");
    runtime.register_function(0x08A43ACCu, &recomp_unit_0143, "recomp_unit_0143");
    runtime.register_function(0x08A43AE0u, &recomp_unit_0143, "recomp_unit_0143");
    runtime.register_function(0x08A43B04u, &recomp_unit_0143, "recomp_unit_0143");
    runtime.register_function(0x08A43B14u, &recomp_unit_0143, "recomp_unit_0143");
    runtime.register_function(0x08A43B38u, &recomp_unit_0143, "recomp_unit_0143");
    runtime.register_function(0x08A43B48u, &recomp_unit_0143, "recomp_unit_0143");
    runtime.register_function(0x08A43B6Cu, &recomp_unit_0143, "recomp_unit_0143");
    runtime.register_function(0x08A43B7Cu, &recomp_unit_0143, "recomp_unit_0143");
    runtime.register_function(0x08A43BA4u, &recomp_unit_0143, "recomp_unit_0143");
    runtime.register_function(0x08A43BB4u, &recomp_unit_0143, "recomp_unit_0143");
    runtime.register_function(0x08A43BC4u, &recomp_unit_0143, "recomp_unit_0143");
    runtime.register_function(0x08A43BD8u, &recomp_unit_0143, "recomp_unit_0143");
    runtime.register_function(0x08A43BE8u, &recomp_unit_0143, "recomp_unit_0143");
    runtime.register_function(0x08A43BF8u, &recomp_unit_0143, "recomp_unit_0143");
    runtime.register_function(0x08A43C08u, &recomp_unit_0143, "recomp_unit_0143");
    runtime.register_function(0x08A43C38u, &recomp_unit_0143, "recomp_unit_0143");
    runtime.register_function(0x08A43C50u, &recomp_unit_0143, "recomp_unit_0143");
    runtime.register_function(0x08A43C58u, &recomp_unit_0143, "recomp_unit_0143");
    runtime.register_function(0x08A43C5Cu, &recomp_unit_0143, "recomp_unit_0143");
    runtime.register_function(0x08A43C68u, &recomp_unit_0143, "recomp_unit_0143");
    runtime.register_function(0x08A43C78u, &recomp_unit_0143, "recomp_unit_0143");
    runtime.register_function(0x08A43C8Cu, &recomp_unit_0143, "recomp_unit_0143");
    runtime.register_function(0x08A43C98u, &recomp_unit_0143, "recomp_unit_0143");
    runtime.register_function(0x08A43CB0u, &recomp_unit_0143, "recomp_unit_0143");
    runtime.register_function(0x08A43CC8u, &recomp_unit_0143, "recomp_unit_0143");
    runtime.register_function(0x08A43CD0u, &recomp_unit_0143, "recomp_unit_0143");
    runtime.register_function(0x08A43CD4u, &recomp_unit_0143, "recomp_unit_0143");
    runtime.register_function(0x08A43CE0u, &recomp_unit_0143, "recomp_unit_0143");
    runtime.register_function(0x08A43CF0u, &recomp_unit_0143, "recomp_unit_0143");
    runtime.register_function(0x08A43D04u, &recomp_unit_0143, "recomp_unit_0143");
    runtime.register_function(0x08A43D10u, &recomp_unit_0143, "recomp_unit_0143");
    runtime.register_function(0x08A43D28u, &recomp_unit_0143, "recomp_unit_0143");
    runtime.register_function(0x08A43D38u, &recomp_unit_0143, "recomp_unit_0143");
    runtime.register_function(0x08A43D40u, &recomp_unit_0143, "recomp_unit_0143");
    runtime.register_function(0x08A43D54u, &recomp_unit_0143, "recomp_unit_0143");
    runtime.register_function(0x08A43D60u, &recomp_unit_0143, "recomp_unit_0143");
    runtime.register_function(0x08A43D80u, &recomp_unit_0143, "recomp_unit_0143");
    runtime.register_function(0x08A43D90u, &recomp_unit_0143, "recomp_unit_0143");
    runtime.register_function(0x08A43DA8u, &recomp_unit_0143, "recomp_unit_0143");
    runtime.register_function(0x08A43DB0u, &recomp_unit_0143, "recomp_unit_0143");
    runtime.register_function(0x08A43DBCu, &recomp_unit_0143, "recomp_unit_0143");
    runtime.register_function(0x08A43DC8u, &recomp_unit_0143, "recomp_unit_0143");
    runtime.register_function(0x08A43DE8u, &recomp_unit_0143, "recomp_unit_0143");
    runtime.register_function(0x08A43E04u, &recomp_unit_0143, "recomp_unit_0143");
    runtime.register_function(0x08A43E14u, &recomp_unit_0143, "recomp_unit_0143");
    runtime.register_function(0x08A43E1Cu, &recomp_unit_0143, "recomp_unit_0143");
    runtime.register_function(0x08A43E28u, &recomp_unit_0143, "recomp_unit_0143");
    runtime.register_function(0x08A43E34u, &recomp_unit_0143, "recomp_unit_0143");
    runtime.register_function(0x08A43E54u, &recomp_unit_0143, "recomp_unit_0143");
    runtime.register_function(0x08A43E64u, &recomp_unit_0143, "recomp_unit_0143");
    runtime.register_function(0x08A43E6Cu, &recomp_unit_0143, "recomp_unit_0143");
    runtime.register_function(0x08A43E78u, &recomp_unit_0143, "recomp_unit_0143");
    runtime.register_function(0x08A43E84u, &recomp_unit_0143, "recomp_unit_0143");
    runtime.register_function(0x08A43EA4u, &recomp_unit_0143, "recomp_unit_0143");
    runtime.register_function(0x08A43EB4u, &recomp_unit_0143, "recomp_unit_0143");
    runtime.register_function(0x08A43EBCu, &recomp_unit_0143, "recomp_unit_0143");
    runtime.register_function(0x08A43EC8u, &recomp_unit_0143, "recomp_unit_0143");
    runtime.register_function(0x08A43ED4u, &recomp_unit_0143, "recomp_unit_0143");
    runtime.register_function(0x08A43EE8u, &recomp_unit_0143, "recomp_unit_0143");
    runtime.register_function(0x08A43F04u, &recomp_unit_0143, "recomp_unit_0143");
    runtime.register_function(0x08A43F14u, &recomp_unit_0143, "recomp_unit_0143");
    runtime.register_function(0x08A43F2Cu, &recomp_unit_0143, "recomp_unit_0143");
    runtime.register_function(0x08A43F48u, &recomp_unit_0143, "recomp_unit_0143");
    runtime.register_function(0x08A43F50u, &recomp_unit_0143, "recomp_unit_0143");
    runtime.register_function(0x08A43F58u, &recomp_unit_0143, "recomp_unit_0143");
    runtime.register_function(0x08A43F68u, &recomp_unit_0143, "recomp_unit_0143");
    runtime.register_function(0x08A43F84u, &recomp_unit_0143, "recomp_unit_0143");
    runtime.register_function(0x08A43F8Cu, &recomp_unit_0143, "recomp_unit_0143");
    runtime.register_function(0x08A43F94u, &recomp_unit_0143, "recomp_unit_0143");
    runtime.register_function(0x08A43FA4u, &recomp_unit_0143, "recomp_unit_0143");
    runtime.register_function(0x08A43FC0u, &recomp_unit_0143, "recomp_unit_0143");
    runtime.register_function(0x08A43FC8u, &recomp_unit_0143, "recomp_unit_0143");
    runtime.register_function(0x08A43FD0u, &recomp_unit_0143, "recomp_unit_0143");
    runtime.register_function(0x08A43FE4u, &recomp_unit_0143, "recomp_unit_0143");
    runtime.register_function(0x08A43FF4u, &recomp_unit_0143, "recomp_unit_0143");
}
} // namespace psprecomp
