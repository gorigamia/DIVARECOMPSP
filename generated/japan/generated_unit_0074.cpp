#include "psprecomp/runtime.hpp"
#include "generated_units.hpp"
#include <bit>
#include <cmath>
#include <cstdint>
#include <limits>

namespace psprecomp {
static const std::uint16_t kEntryIds_recomp_unit_0074[4095] = {
    1, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 2, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 3, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 4, 0, 0, 5, 0, 0, 6, 0, 7, 0, 8, 0, 0, 9, 0, 0, 0, 0, 10, 0, 0, 0, 0, 0, 11, 0, 0,
    12, 0, 0, 0, 0, 0, 0, 13, 0, 14, 0, 0, 15, 0, 16, 0, 0, 17, 0, 0, 18, 0, 0, 0, 0, 0, 0, 19, 0, 0, 0, 0,
    20, 0, 21, 0, 22, 23, 0, 0, 24, 0, 0, 25, 0, 0, 26, 0, 0, 27, 0, 0, 0, 28, 0, 0, 0, 29, 0, 0, 30, 0, 0, 0,
    0, 31, 0, 32, 0, 0, 33, 0, 34, 0, 0, 35, 0, 0, 36, 0, 0, 0, 0, 0, 0, 37, 0, 0, 0, 0, 0, 0, 0, 0, 38, 0,
    0, 0, 39, 0, 0, 0, 40, 0, 0, 0, 41, 0, 0, 0, 42, 0, 43, 0, 44, 0, 0, 45, 0, 46, 0, 0, 47, 48, 0, 0, 49, 0,
    0, 0, 50, 0, 0, 51, 0, 52, 0, 0, 53, 0, 54, 55, 0, 0, 0, 0, 0, 0, 0, 0, 56, 0, 0, 0, 57, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 58, 0, 59, 0, 0, 0, 0, 60, 61, 0, 0, 0, 0, 0, 0,
    0, 62, 0, 0, 0, 63, 0, 0, 0, 0, 64, 0, 65, 66, 0, 0, 0, 0, 67, 0, 0, 0, 0, 0, 68, 0, 0, 0, 69, 0, 0, 70,
    0, 0, 0, 0, 71, 0, 0, 0, 0, 72, 73, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 74, 0, 75, 0, 0,
    0, 0, 0, 76, 0, 0, 0, 77, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 78, 0, 0, 79, 0, 0, 0, 80, 0,
    0, 0, 0, 0, 81, 0, 0, 0, 82, 0, 0, 83, 0, 0, 0, 0, 0, 0, 0, 0, 0, 84, 0, 0, 0, 0, 85, 0, 86, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 87, 0, 0, 88, 0, 0, 89, 0, 0, 90, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 91, 92, 0, 0, 93,
    0, 94, 95, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 96, 0, 0, 97, 0, 0, 98, 0, 0, 99, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 100, 0, 101, 0, 0, 0, 0, 0, 0, 0, 102, 0, 0, 0, 0, 0, 0, 0, 0, 103, 104, 0, 0, 105, 0, 0, 0,
    0, 0, 0, 0, 0, 106, 0, 0, 0, 0, 0, 0, 0, 107, 0, 108, 0, 0, 109, 0, 0, 0, 0, 110, 0, 0, 0, 111, 0, 0, 112, 0,
    0, 113, 0, 0, 0, 0, 0, 114, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 115, 0, 116, 0, 0, 0, 0, 117, 0, 0, 0, 118, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 119, 0, 120, 0, 0, 0, 121, 0, 0, 122, 0, 0, 0, 0, 123, 0, 0, 0, 0, 0, 0, 124, 0, 0, 0,
    0, 125, 0, 0, 0, 0, 126, 0, 0, 0, 127, 0, 0, 0, 128, 0, 0, 129, 0, 130, 0, 0, 0, 0, 0, 0, 131, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 132, 0, 0, 133, 0, 0, 0, 134, 0, 0, 0, 0, 135, 0, 0, 0, 0, 0, 0, 136, 0, 137, 0, 0, 0, 138, 0, 0,
    0, 139, 0, 0, 140, 0, 0, 0, 0, 141, 0, 142, 0, 143, 0, 144, 0, 0, 145, 0, 0, 0, 146, 0, 0, 147, 0, 148, 0, 0, 149, 0,
    150, 0, 0, 0, 0, 151, 0, 0, 0, 0, 152, 0, 0, 0, 153, 0, 0, 0, 0, 154, 0, 0, 0, 0, 0, 155, 156, 0, 157, 0, 0, 158,
    0, 0, 0, 159, 0, 0, 0, 0, 0, 160, 161, 0, 162, 0, 0, 0, 0, 0, 163, 0, 0, 164, 165, 0, 0, 0, 0, 0, 166, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 167, 0, 0, 0, 168, 0, 0, 0, 0, 169, 0, 0, 0, 0, 0, 0, 170, 0, 171, 0, 0, 0,
    172, 0, 0, 0, 173, 0, 174, 0, 0, 0, 0, 0, 0, 0, 175, 0, 0, 0, 176, 0, 0, 0, 0, 0, 0, 177, 0, 0, 0, 0, 0, 0,
    0, 178, 0, 0, 0, 179, 0, 0, 0, 0, 180, 0, 0, 0, 0, 0, 0, 181, 0, 0, 182, 0, 0, 0, 183, 0, 0, 0, 184, 0, 185, 0,
    0, 0, 0, 186, 0, 0, 0, 187, 0, 0, 0, 188, 0, 0, 0, 0, 189, 0, 0, 0, 190, 0, 0, 0, 191, 0, 192, 0, 0, 193, 0, 0,
    194, 0, 0, 0, 0, 0, 0, 195, 0, 196, 0, 0, 0, 197, 0, 0, 0, 0, 198, 0, 0, 0, 0, 0, 199, 0, 0, 0, 0, 0, 0, 0,
    0, 200, 0, 201, 0, 202, 0, 0, 0, 203, 0, 204, 0, 0, 0, 0, 0, 0, 205, 0, 0, 206, 0, 0, 207, 208, 0, 0, 209, 0, 0, 0,
    0, 0, 0, 210, 0, 0, 211, 0, 0, 212, 0, 0, 0, 0, 0, 0, 213, 0, 0, 214, 0, 215, 0, 0, 216, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 217, 0, 0, 0, 0, 218, 0, 0, 219, 0, 0, 0, 0, 0, 0, 0, 220, 0, 0, 0, 221, 0, 222, 0, 0, 0, 0, 0, 223, 0,
    0, 0, 224, 0, 0, 0, 0, 225, 0, 226, 0, 0, 0, 0, 0, 227, 0, 0, 0, 228, 0, 0, 229, 0, 230, 0, 231, 232, 233, 0, 0, 0,
    0, 0, 234, 0, 0, 0, 0, 0, 235, 0, 0, 0, 236, 0, 0, 0, 0, 0, 0, 0, 0, 0, 237, 0, 0, 238, 0, 0, 0, 0, 0, 0,
    0, 239, 240, 0, 241, 0, 0, 242, 0, 0, 0, 0, 0, 0, 243, 0, 0, 0, 0, 244, 0, 0, 0, 0, 0, 0, 245, 0, 0, 246, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 247, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 248, 0, 0, 249, 0, 0, 250, 0, 0, 251, 0, 0, 0,
    0, 252, 0, 0, 253, 0, 0, 0, 0, 254, 0, 255, 0, 0, 256, 0, 0, 257, 0, 0, 258, 0, 259, 0, 0, 260, 0, 0, 0, 0, 261, 0,
    0, 262, 0, 0, 0, 0, 0, 263, 0, 0, 264, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 265, 0, 0, 266, 0, 0, 267, 0, 268,
    0, 0, 269, 0, 0, 270, 0, 0, 271, 0, 272, 0, 273, 0, 0, 274, 0, 0, 0, 0, 275, 0, 0, 276, 0, 0, 277, 0, 0, 278, 0, 0,
    279, 0, 280, 0, 0, 281, 0, 0, 282, 0, 0, 0, 0, 0, 283, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 284, 0, 0, 0, 0, 0, 285,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 286, 0, 0, 0, 0, 0, 287, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 288, 0, 0, 0, 289,
    0, 0, 0, 290, 0, 0, 0, 0, 291, 0, 0, 0, 292, 0, 0, 0, 293, 0, 0, 0, 294, 0, 0, 0, 0, 0, 0, 295, 0, 0, 0, 296,
    0, 0, 297, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 298, 0, 0, 299, 0, 0, 0, 0, 300, 0, 0, 0, 0, 301, 0, 0, 0,
    0, 302, 0, 0, 303, 0, 0, 0, 0, 0, 304, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 305, 0, 306, 0, 307, 0, 0, 0, 308, 0, 0,
    0, 309, 0, 310, 0, 0, 0, 311, 0, 312, 0, 313, 314, 0, 0, 0, 0, 0, 0, 0, 315, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 316,
    0, 0, 317, 0, 0, 0, 0, 318, 0, 0, 0, 0, 319, 0, 0, 0, 0, 320, 0, 0, 321, 0, 0, 0, 0, 322, 0, 0, 323, 0, 0, 324,
    0, 0, 0, 0, 0, 325, 0, 0, 0, 326, 0, 0, 0, 0, 0, 0, 0, 327, 0, 0, 328, 0, 0, 0, 0, 0, 0, 0, 0, 329, 0, 330,
    0, 0, 0, 0, 331, 0, 0, 0, 332, 0, 0, 0, 333, 0, 0, 334, 0, 0, 0, 0, 0, 0, 0, 0, 0, 335, 0, 0, 0, 0, 0, 0,
    336, 0, 0, 0, 0, 0, 0, 0, 0, 337, 0, 0, 338, 0, 0, 0, 0, 339, 0, 0, 0, 0, 340, 0, 0, 0, 0, 341, 0, 0, 342, 0,
    343, 0, 0, 0, 0, 344, 0, 0, 345, 0, 0, 346, 0, 0, 0, 0, 0, 0, 0, 0, 347, 0, 348, 0, 0, 349, 0, 0, 0, 0, 0, 0,
    0, 0, 350, 0, 0, 0, 0, 0, 351, 0, 0, 0, 0, 0, 0, 352, 0, 0, 353, 0, 0, 0, 0, 354, 0, 0, 0, 0, 355, 0, 0, 0,
    0, 356, 0, 0, 357, 0, 0, 358, 0, 0, 359, 0, 0, 360, 0, 0, 361, 0, 362, 0, 0, 0, 363, 0, 364, 0, 0, 0, 0, 0, 0, 0,
    365, 0, 0, 0, 0, 0, 366, 0, 367, 0, 0, 0, 0, 368, 0, 0, 0, 0, 0, 0, 0, 0, 369, 0, 0, 370, 0, 0, 0, 0, 0, 371,
    0, 0, 372, 0, 0, 0, 0, 0, 0, 373, 374, 0, 0, 0, 0, 375, 376, 0, 0, 0, 0, 0, 377, 0, 0, 0, 0, 378, 0, 0, 379, 0,
    0, 0, 380, 0, 0, 0, 381, 382, 0, 0, 0, 0, 0, 383, 0, 0, 0, 384, 0, 0, 385, 0, 0, 0, 0, 386, 0, 0, 387, 0, 0, 388,
    0, 0, 389, 0, 0, 390, 0, 0, 0, 0, 0, 391, 0, 392, 0, 0, 0, 393, 0, 0, 394, 0, 0, 395, 0, 0, 396, 0, 0, 0, 0, 0,
    0, 0, 0, 397, 0, 0, 0, 0, 0, 0, 398, 0, 0, 399, 0, 0, 400, 0, 0, 401, 0, 0, 0, 402, 0, 403, 0, 0, 0, 0, 0, 404,
    0, 405, 0, 0, 406, 0, 407, 0, 0, 408, 0, 0, 409, 0, 0, 410, 0, 0, 411, 0, 0, 412, 0, 0, 413, 414, 0, 0, 0, 0, 0, 415,
    0, 0, 0, 0, 0, 416, 0, 417, 0, 418, 0, 419, 0, 0, 0, 420, 0, 0, 0, 421, 0, 0, 0, 422, 0, 0, 0, 0, 0, 0, 423, 0,
    0, 424, 0, 0, 0, 0, 425, 0, 0, 0, 426, 0, 0, 0, 0, 0, 427, 0, 0, 0, 428, 0, 0, 0, 0, 429, 0, 0, 0, 430, 0, 0,
    0, 0, 431, 0, 0, 0, 432, 0, 0, 0, 0, 0, 0, 0, 0, 433, 0, 434, 0, 0, 0, 0, 0, 0, 435, 0, 0, 0, 0, 0, 0, 436,
    0, 0, 437, 0, 438, 0, 0, 0, 0, 0, 439, 0, 0, 0, 0, 0, 0, 0, 0, 0, 440, 0, 0, 441, 0, 0, 0, 442, 0, 443, 444, 0,
    0, 0, 0, 0, 0, 0, 0, 445, 0, 446, 0, 0, 447, 0, 0, 448, 0, 0, 449, 0, 0, 450, 0, 0, 451, 0, 452, 0, 0, 0, 0, 0,
    453, 0, 0, 0, 0, 0, 0, 0, 0, 0, 454, 0, 0, 0, 455, 0, 0, 0, 0, 0, 0, 0, 0, 456, 0, 457, 0, 0, 458, 0, 0, 459,
    0, 0, 0, 0, 0, 0, 0, 460, 0, 0, 0, 0, 0, 461, 0, 0, 0, 462, 0, 0, 0, 0, 463, 0, 0, 0, 0, 0, 0, 0, 464, 0,
    0, 0, 0, 0, 465, 0, 0, 0, 0, 0, 0, 0, 466, 0, 467, 0, 0, 0, 0, 468, 0, 0, 0, 0, 0, 0, 0, 469, 0, 470, 0, 0,
    0, 0, 0, 471, 0, 472, 473, 0, 0, 0, 0, 474, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 475, 0, 0, 476, 0, 477, 0, 0,
    478, 0, 0, 0, 479, 0, 0, 0, 0, 0, 480, 0, 481, 0, 0, 0, 0, 0, 482, 0, 0, 0, 0, 0, 483, 0, 0, 0, 0, 0, 0, 0,
    0, 484, 0, 485, 0, 0, 0, 0, 0, 0, 486, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 487, 0, 0, 488, 0, 0, 489, 0, 0, 0, 0,
    0, 0, 0, 490, 0, 0, 0, 0, 491, 492, 0, 0, 493, 0, 0, 0, 0, 494, 0, 0, 495, 0, 0, 496, 0, 0, 0, 0, 0, 497, 0, 0,
    0, 0, 0, 498, 0, 0, 499, 0, 0, 500, 0, 501, 0, 0, 0, 0, 0, 0, 502, 0, 0, 0, 0, 0, 503, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 504, 0, 0, 0, 0, 0, 0, 505, 0, 0, 506, 0, 507, 0, 508, 0, 509, 0, 510, 0, 0, 0, 0, 0, 0, 511, 0, 0, 0, 512,
    0, 0, 513, 0, 514, 0, 0, 515, 0, 0, 516, 0, 0, 517, 0, 0, 518, 0, 0, 519, 0, 0, 0, 520, 0, 0, 521, 522, 0, 523, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 524, 0, 0, 525, 0, 0, 526, 0, 527, 0, 0, 0, 0, 0, 528, 0, 529, 0, 0,
    530, 0, 531, 0, 532, 533, 0, 0, 0, 0, 0, 0, 0, 534, 0, 0, 535, 0, 0, 536, 0, 0, 537, 0, 0, 538, 0, 0, 539, 0, 0, 540,
    0, 0, 0, 0, 0, 0, 0, 541, 0, 0, 0, 0, 0, 542, 0, 0, 0, 0, 0, 0, 0, 543, 0, 0, 0, 0, 0, 0, 0, 544, 0, 545,
    0, 0, 0, 0, 546, 0, 547, 0, 0, 548, 0, 549, 0, 0, 550, 0, 0, 0, 0, 0, 0, 0, 0, 551, 0, 0, 0, 0, 0, 552, 0, 0,
    0, 553, 0, 0, 0, 0, 554, 0, 0, 0, 555, 0, 0, 0, 0, 0, 0, 556, 0, 0, 0, 0, 0, 557, 0, 0, 0, 0, 0, 558, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 559, 0, 0, 560, 0, 0, 561, 0, 562, 0, 0, 0, 0, 0, 563, 0, 564, 0, 0, 565,
    0, 0, 0, 0, 0, 0, 0, 0, 566, 0, 0, 0, 0, 0, 0, 567, 0, 0, 568, 0, 0, 0, 0, 569, 0, 0, 0, 0, 0, 570, 0, 0,
    0, 0, 0, 571, 0, 0, 572, 0, 0, 0, 0, 0, 573, 0, 0, 0, 0, 0, 574, 0, 0, 0, 0, 575, 0, 0, 0, 0, 0, 576, 0, 0,
    577, 0, 0, 0, 578, 0, 0, 579, 0, 0, 0, 0, 0, 580, 0, 0, 0, 0, 581, 0, 0, 0, 0, 0, 0, 0, 582, 0, 0, 583, 0, 0,
    0, 0, 0, 584, 0, 0, 0, 0, 585, 0, 0, 586, 0, 0, 0, 587, 0, 0, 0, 0, 588, 0, 0, 0, 0, 0, 589, 0, 0, 0, 0, 0,
    590, 0, 0, 0, 0, 0, 0, 591, 0, 0, 592, 0, 0, 0, 0, 0, 593, 0, 0, 0, 594, 0, 0, 595, 0, 0, 0, 596, 0, 597, 0, 0,
    598, 0, 0, 0, 599, 0, 0, 0, 0, 600, 0, 0, 0, 0, 0, 601, 0, 0, 0, 0, 0, 0, 602, 0, 0, 0, 0, 0, 603, 0, 604, 0,
    0, 605, 0, 606, 0, 0, 607, 0, 0, 0, 608, 0, 0, 0, 0, 609, 0, 0, 0, 0, 0, 610, 0, 0, 0, 0, 0, 0, 611, 0, 0, 0,
    0, 612, 0, 0, 0, 0, 613, 0, 0, 0, 614, 0, 0, 0, 0, 0, 615, 0, 0, 0, 0, 0, 0, 616, 0, 0, 617, 0, 0, 0, 0, 0,
    0, 618, 0, 0, 0, 619, 0, 0, 0, 620, 0, 621, 0, 0, 0, 622, 0, 0, 623, 0, 0, 0, 624, 0, 0, 625, 0, 0, 0, 0, 626, 0,
    0, 0, 0, 627, 0, 0, 628, 0, 629, 0, 630, 0, 0, 631, 0, 632, 0, 0, 633, 0, 0, 0, 634, 0, 635, 0, 0, 0, 636, 0, 637, 0,
    0, 638, 0, 0, 639, 0, 0, 640, 0, 0, 0, 0, 0, 641, 0, 0, 0, 642, 0, 0, 643, 0, 644, 0, 0, 0, 0, 0, 645, 0, 0, 0,
    0, 0, 646, 0, 0, 647, 0, 0, 0, 0, 648, 0, 0, 0, 649, 0, 0, 0, 0, 0, 650, 0, 0, 651, 0, 0, 0, 0, 652, 0, 0, 0,
    653, 0, 0, 0, 0, 0, 654, 0, 0, 655, 0, 0, 0, 656, 0, 0, 0, 657, 0, 0, 0, 0, 0, 0, 0, 658, 0, 0, 659, 0, 0, 0,
    660, 0, 0, 0, 0, 0, 661, 0, 0, 0, 662, 0, 0, 663, 0, 0, 0, 664, 0, 0, 665, 0, 0, 666, 0, 0, 667, 0, 0, 668, 0, 669,
    670, 0, 671, 0, 0, 672, 0, 0, 673, 0, 0, 0, 674, 0, 0, 675, 0, 0, 0, 0, 0, 0, 0, 676, 0, 677, 0, 0, 0, 0, 678, 0,
    0, 0, 0, 0, 679, 0, 0, 0, 0, 0, 680, 0, 0, 0, 0, 0, 681, 0, 0, 682, 0, 0, 0, 683, 0, 0, 684, 0, 0, 685, 0, 0,
    686, 0, 0, 0, 687, 0, 0, 688, 0, 689, 0, 0, 690, 0, 0, 691, 0, 0, 692, 0, 0, 693, 0, 0, 0, 0, 0, 694, 0, 0, 0, 695,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 696, 0, 697, 0, 698, 0, 0, 699, 0, 0, 700, 0, 0, 0, 0, 0, 701, 0, 0, 0, 702, 0,
    703, 0, 0, 0, 0, 704, 0, 0, 705, 0, 706, 0, 0, 707, 0, 0, 708, 0, 0, 0, 0, 0, 709, 0, 0, 0, 710, 0, 711, 0, 0, 0,
    0, 712, 0, 0, 713, 0, 714, 0, 0, 715, 0, 0, 716, 0, 0, 0, 0, 0, 717, 0, 0, 0, 718, 0, 719, 720, 0, 0, 0, 0, 0, 721,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 722, 0, 0, 723, 0, 0, 724, 0, 725, 0, 0, 726, 0, 0, 0, 727, 0, 0, 728, 0, 729, 0,
    0, 730, 0, 0, 0, 731, 0, 732, 0, 733, 0, 0, 0, 734, 0, 735, 0, 0, 736, 0, 0, 737, 0, 0, 738, 0, 0, 739, 0, 0, 740, 0,
    0, 741, 742, 0, 0, 743, 744, 0, 0, 0, 0, 0, 0, 0, 0, 745, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 746, 0, 0, 0,
    747, 0, 0, 0, 0, 0, 748, 0, 0, 0, 0, 0, 0, 0, 0, 749, 0, 0, 0, 0, 0, 750, 0, 751, 752, 0, 0, 0, 0, 753, 0, 754,
    755, 0, 0, 0, 0, 756, 0, 757, 758, 0, 0, 0, 0, 759, 0, 760, 761, 0, 0, 0, 0, 762, 0, 763, 764, 0, 0, 0, 0, 765, 0, 766,
    767, 0, 0, 0, 0, 768, 0, 769, 770, 0, 0, 0, 0, 771, 0, 772, 773, 0, 0, 0, 0, 774, 0, 775, 776, 0, 0, 0, 0, 777, 0, 778,
    779, 0, 0, 0, 0, 780, 0, 781, 782, 0, 0, 0, 0, 783, 0, 784, 785, 0, 0, 0, 0, 786, 0, 787, 788, 0, 0, 0, 0, 789, 0, 790,
    791, 0, 792, 0, 0, 793, 0, 0, 0, 0, 794, 795, 0, 0, 0, 0, 0, 796, 0, 797, 0, 0, 0, 0, 0, 798, 0, 799, 0, 0, 800, 0,
    0, 0, 0, 801, 0, 802, 0, 0, 803, 0, 0, 0, 0, 804, 0, 805, 0, 0, 806, 0, 0, 0, 0, 807, 0, 808, 809, 810, 0, 811, 0, 0,
    0, 0, 0, 812, 0, 813, 0, 0, 814, 0, 0, 0, 0, 815, 0, 816, 0, 0, 817, 0, 0, 0, 0, 818, 0, 819, 0, 0, 820, 0, 0, 0,
    0, 821, 0, 822, 823, 824, 0, 0, 0, 0, 825, 0, 0, 0, 826, 0, 827, 0, 0, 0, 0, 0, 0, 828, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 829, 0, 0, 830, 0, 0, 831, 0, 0, 0, 0, 0, 0, 0, 0, 832, 0, 0, 0, 0, 0, 833, 0, 0, 0, 0, 0, 0, 834, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 835, 0, 0, 0, 0, 836, 0, 0, 0, 837, 0, 0, 838, 0, 839, 0, 0,
    0, 0, 840, 0, 0, 0, 0, 841, 0, 0, 0, 0, 0, 0, 842, 0, 0, 0, 843, 0, 0, 0, 0, 0, 844, 845, 0, 846, 0, 0, 0, 0,
    0, 847, 0, 0, 848, 849, 850, 0, 0, 851, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 852, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 853, 0, 0, 0, 0, 0, 0, 854, 0, 0, 0, 0, 0, 855, 0, 0, 0, 0, 0, 856, 857, 0, 858, 0, 0, 0, 0, 0, 859, 0, 0,
    860, 0, 0, 0, 0, 0, 0, 861, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 862, 0, 0, 863, 0, 0, 0, 864, 0, 865, 0,
    866, 0, 0, 0, 867, 0, 868, 0, 0, 0, 0, 0, 869, 0, 870, 0, 0, 0, 0, 0, 871, 0, 872, 0, 0, 0, 0, 0, 873, 0, 874, 0,
    0, 0, 0, 0, 875, 0, 0, 0, 0, 0, 876, 0, 0, 0, 0, 0, 877, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 878, 0, 0, 0, 0, 0, 879, 0, 0, 0, 0, 0, 880, 0, 0, 0, 0, 0, 881, 0, 0, 0, 0, 0, 882, 0, 0,
    0, 0, 0, 883, 0, 0, 0, 0, 0, 884, 0, 0, 0, 0, 0, 885, 0, 0, 0, 0, 0, 886, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    887, 0, 888, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 889, 0, 0, 0, 0, 890, 0, 0, 891, 0, 0, 0, 892, 0, 893, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 894, 0,
    895, 0, 0, 0, 896, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 897, 0, 0, 0, 898, 0, 899, 0, 0, 0, 0, 900, 0, 0, 0, 0,
    901, 0, 0, 0, 0, 0, 0, 0, 0, 0, 902, 0, 0, 0, 0, 0, 903, 0, 0, 0, 0, 0, 904, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 905, 0, 906, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 907, 0, 0, 0, 0, 0, 0, 0, 0, 908, 0, 0, 0, 909, 0, 910, 0,
    0, 0, 0, 0, 911, 0, 0, 912, 0, 0, 913, 0, 0, 914, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 915, 0, 916, 0,
    0, 0, 0, 0, 0, 0, 0, 917, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 918, 0, 0, 0, 0, 0, 919, 920, 0, 921, 0,
    0, 922, 0, 0, 0, 923, 0, 924, 0, 0, 925, 0, 0, 926, 0, 0, 0, 0, 927, 0, 0, 0, 928, 0, 0, 0, 0, 0, 929, 0, 930,
};
void recomp_unit_0074_entry(Runtime &rt, AllegrexContext &ctx, std::uint16_t direct_entry_id, GuestMemory::AotFastView &aot_mem) {
    std::uint32_t jump_target = 0u;
    std::uint32_t local_transfers = 0u;
    std::uint32_t local_pc = ctx.pc;
    std::uint32_t entry_id = direct_entry_id;
LOCAL_DISPATCH:
    {
    if (entry_id == 0u) {
        const std::uint32_t entry_delta = local_pc - 0x0892C000u;
        entry_id = (entry_delta < 16380u && (entry_delta & 3u) == 0u) ? kEntryIds_recomp_unit_0074[entry_delta >> 2u] : 0u;
    }
    switch (entry_id) {
    case 1u: goto L_0892C000;
    case 2u: goto L_0892C030;
    case 3u: goto L_0892C060;
    case 4u: goto L_0892C094;
    case 5u: goto L_0892C0A0;
    case 6u: goto L_0892C0AC;
    case 7u: goto L_0892C0B4;
    case 8u: goto L_0892C0BC;
    case 9u: goto L_0892C0C8;
    case 10u: goto L_0892C0DC;
    case 11u: goto L_0892C0F4;
    case 12u: goto L_0892C100;
    case 13u: goto L_0892C11C;
    case 14u: goto L_0892C124;
    case 15u: goto L_0892C130;
    case 16u: goto L_0892C138;
    case 17u: goto L_0892C144;
    case 18u: goto L_0892C150;
    case 19u: goto L_0892C16C;
    case 20u: goto L_0892C180;
    case 21u: goto L_0892C188;
    case 22u: goto L_0892C190;
    case 23u: goto L_0892C194;
    case 24u: goto L_0892C1A0;
    case 25u: goto L_0892C1AC;
    case 26u: goto L_0892C1B8;
    case 27u: goto L_0892C1C4;
    case 28u: goto L_0892C1D4;
    case 29u: goto L_0892C1E4;
    case 30u: goto L_0892C1F0;
    case 31u: goto L_0892C204;
    case 32u: goto L_0892C20C;
    case 33u: goto L_0892C218;
    case 34u: goto L_0892C220;
    case 35u: goto L_0892C22C;
    case 36u: goto L_0892C238;
    case 37u: goto L_0892C254;
    case 38u: goto L_0892C278;
    case 39u: goto L_0892C288;
    case 40u: goto L_0892C298;
    case 41u: goto L_0892C2A8;
    case 42u: goto L_0892C2B8;
    case 43u: goto L_0892C2C0;
    case 44u: goto L_0892C2C8;
    case 45u: goto L_0892C2D4;
    case 46u: goto L_0892C2DC;
    case 47u: goto L_0892C2E8;
    case 48u: goto L_0892C2EC;
    case 49u: goto L_0892C2F8;
    case 50u: goto L_0892C308;
    case 51u: goto L_0892C314;
    case 52u: goto L_0892C31C;
    case 53u: goto L_0892C328;
    case 54u: goto L_0892C330;
    case 55u: goto L_0892C334;
    case 56u: goto L_0892C358;
    case 57u: goto L_0892C368;
    case 58u: goto L_0892C3C4;
    case 59u: goto L_0892C3CC;
    case 60u: goto L_0892C3E0;
    case 61u: goto L_0892C3E4;
    case 62u: goto L_0892C404;
    case 63u: goto L_0892C414;
    case 64u: goto L_0892C428;
    case 65u: goto L_0892C430;
    case 66u: goto L_0892C434;
    case 67u: goto L_0892C448;
    case 68u: goto L_0892C460;
    case 69u: goto L_0892C470;
    case 70u: goto L_0892C47C;
    case 71u: goto L_0892C490;
    case 72u: goto L_0892C4A4;
    case 73u: goto L_0892C4A8;
    case 74u: goto L_0892C4EC;
    case 75u: goto L_0892C4F4;
    case 76u: goto L_0892C50C;
    case 77u: goto L_0892C51C;
    case 78u: goto L_0892C55C;
    case 79u: goto L_0892C568;
    case 80u: goto L_0892C578;
    case 81u: goto L_0892C590;
    case 82u: goto L_0892C5A0;
    case 83u: goto L_0892C5AC;
    case 84u: goto L_0892C5D4;
    case 85u: goto L_0892C5E8;
    case 86u: goto L_0892C5F0;
    case 87u: goto L_0892C61C;
    case 88u: goto L_0892C628;
    case 89u: goto L_0892C634;
    case 90u: goto L_0892C640;
    case 91u: goto L_0892C66C;
    case 92u: goto L_0892C670;
    case 93u: goto L_0892C67C;
    case 94u: goto L_0892C684;
    case 95u: goto L_0892C688;
    case 96u: goto L_0892C6B8;
    case 97u: goto L_0892C6C4;
    case 98u: goto L_0892C6D0;
    case 99u: goto L_0892C6DC;
    case 100u: goto L_0892C714;
    case 101u: goto L_0892C71C;
    case 102u: goto L_0892C73C;
    case 103u: goto L_0892C760;
    case 104u: goto L_0892C764;
    case 105u: goto L_0892C770;
    case 106u: goto L_0892C794;
    case 107u: goto L_0892C7B4;
    case 108u: goto L_0892C7BC;
    case 109u: goto L_0892C7C8;
    case 110u: goto L_0892C7DC;
    case 111u: goto L_0892C7EC;
    case 112u: goto L_0892C7F8;
    case 113u: goto L_0892C804;
    case 114u: goto L_0892C81C;
    case 115u: goto L_0892C848;
    case 116u: goto L_0892C850;
    case 117u: goto L_0892C864;
    case 118u: goto L_0892C874;
    case 119u: goto L_0892C89C;
    case 120u: goto L_0892C8A4;
    case 121u: goto L_0892C8B4;
    case 122u: goto L_0892C8C0;
    case 123u: goto L_0892C8D4;
    case 124u: goto L_0892C8F0;
    case 125u: goto L_0892C904;
    case 126u: goto L_0892C918;
    case 127u: goto L_0892C928;
    case 128u: goto L_0892C938;
    case 129u: goto L_0892C944;
    case 130u: goto L_0892C94C;
    case 131u: goto L_0892C968;
    case 132u: goto L_0892C990;
    case 133u: goto L_0892C99C;
    case 134u: goto L_0892C9AC;
    case 135u: goto L_0892C9C0;
    case 136u: goto L_0892C9DC;
    case 137u: goto L_0892C9E4;
    case 138u: goto L_0892C9F4;
    case 139u: goto L_0892CA04;
    case 140u: goto L_0892CA10;
    case 141u: goto L_0892CA24;
    case 142u: goto L_0892CA2C;
    case 143u: goto L_0892CA34;
    case 144u: goto L_0892CA3C;
    case 145u: goto L_0892CA48;
    case 146u: goto L_0892CA58;
    case 147u: goto L_0892CA64;
    case 148u: goto L_0892CA6C;
    case 149u: goto L_0892CA78;
    case 150u: goto L_0892CA80;
    case 151u: goto L_0892CA94;
    case 152u: goto L_0892CAA8;
    case 153u: goto L_0892CAB8;
    case 154u: goto L_0892CACC;
    case 155u: goto L_0892CAE4;
    case 156u: goto L_0892CAE8;
    case 157u: goto L_0892CAF0;
    case 158u: goto L_0892CAFC;
    case 159u: goto L_0892CB0C;
    case 160u: goto L_0892CB24;
    case 161u: goto L_0892CB28;
    case 162u: goto L_0892CB30;
    case 163u: goto L_0892CB48;
    case 164u: goto L_0892CB54;
    case 165u: goto L_0892CB58;
    case 166u: goto L_0892CB70;
    case 167u: goto L_0892CBA8;
    case 168u: goto L_0892CBB8;
    case 169u: goto L_0892CBCC;
    case 170u: goto L_0892CBE8;
    case 171u: goto L_0892CBF0;
    case 172u: goto L_0892CC00;
    case 173u: goto L_0892CC10;
    case 174u: goto L_0892CC18;
    case 175u: goto L_0892CC38;
    case 176u: goto L_0892CC48;
    case 177u: goto L_0892CC64;
    case 178u: goto L_0892CC84;
    case 179u: goto L_0892CC94;
    case 180u: goto L_0892CCA8;
    case 181u: goto L_0892CCC4;
    case 182u: goto L_0892CCD0;
    case 183u: goto L_0892CCE0;
    case 184u: goto L_0892CCF0;
    case 185u: goto L_0892CCF8;
    case 186u: goto L_0892CD0C;
    case 187u: goto L_0892CD1C;
    case 188u: goto L_0892CD2C;
    case 189u: goto L_0892CD40;
    case 190u: goto L_0892CD50;
    case 191u: goto L_0892CD60;
    case 192u: goto L_0892CD68;
    case 193u: goto L_0892CD74;
    case 194u: goto L_0892CD80;
    case 195u: goto L_0892CD9C;
    case 196u: goto L_0892CDA4;
    case 197u: goto L_0892CDB4;
    case 198u: goto L_0892CDC8;
    case 199u: goto L_0892CDE0;
    case 200u: goto L_0892CE04;
    case 201u: goto L_0892CE0C;
    case 202u: goto L_0892CE14;
    case 203u: goto L_0892CE24;
    case 204u: goto L_0892CE2C;
    case 205u: goto L_0892CE48;
    case 206u: goto L_0892CE54;
    case 207u: goto L_0892CE60;
    case 208u: goto L_0892CE64;
    case 209u: goto L_0892CE70;
    case 210u: goto L_0892CE8C;
    case 211u: goto L_0892CE98;
    case 212u: goto L_0892CEA4;
    case 213u: goto L_0892CEC0;
    case 214u: goto L_0892CECC;
    case 215u: goto L_0892CED4;
    case 216u: goto L_0892CEE0;
    case 217u: goto L_0892CF08;
    case 218u: goto L_0892CF1C;
    case 219u: goto L_0892CF28;
    case 220u: goto L_0892CF48;
    case 221u: goto L_0892CF58;
    case 222u: goto L_0892CF60;
    case 223u: goto L_0892CF78;
    case 224u: goto L_0892CF88;
    case 225u: goto L_0892CF9C;
    case 226u: goto L_0892CFA4;
    case 227u: goto L_0892CFBC;
    case 228u: goto L_0892CFCC;
    case 229u: goto L_0892CFD8;
    case 230u: goto L_0892CFE0;
    case 231u: goto L_0892CFE8;
    case 232u: goto L_0892CFEC;
    case 233u: goto L_0892CFF0;
    case 234u: goto L_0892D008;
    case 235u: goto L_0892D020;
    case 236u: goto L_0892D030;
    case 237u: goto L_0892D058;
    case 238u: goto L_0892D064;
    case 239u: goto L_0892D084;
    case 240u: goto L_0892D088;
    case 241u: goto L_0892D090;
    case 242u: goto L_0892D09C;
    case 243u: goto L_0892D0B8;
    case 244u: goto L_0892D0CC;
    case 245u: goto L_0892D0E8;
    case 246u: goto L_0892D0F4;
    case 247u: goto L_0892D120;
    case 248u: goto L_0892D14C;
    case 249u: goto L_0892D158;
    case 250u: goto L_0892D164;
    case 251u: goto L_0892D170;
    case 252u: goto L_0892D184;
    case 253u: goto L_0892D190;
    case 254u: goto L_0892D1A4;
    case 255u: goto L_0892D1AC;
    case 256u: goto L_0892D1B8;
    case 257u: goto L_0892D1C4;
    case 258u: goto L_0892D1D0;
    case 259u: goto L_0892D1D8;
    case 260u: goto L_0892D1E4;
    case 261u: goto L_0892D1F8;
    case 262u: goto L_0892D204;
    case 263u: goto L_0892D21C;
    case 264u: goto L_0892D228;
    case 265u: goto L_0892D25C;
    case 266u: goto L_0892D268;
    case 267u: goto L_0892D274;
    case 268u: goto L_0892D27C;
    case 269u: goto L_0892D288;
    case 270u: goto L_0892D294;
    case 271u: goto L_0892D2A0;
    case 272u: goto L_0892D2A8;
    case 273u: goto L_0892D2B0;
    case 274u: goto L_0892D2BC;
    case 275u: goto L_0892D2D0;
    case 276u: goto L_0892D2DC;
    case 277u: goto L_0892D2E8;
    case 278u: goto L_0892D2F4;
    case 279u: goto L_0892D300;
    case 280u: goto L_0892D308;
    case 281u: goto L_0892D314;
    case 282u: goto L_0892D320;
    case 283u: goto L_0892D338;
    case 284u: goto L_0892D364;
    case 285u: goto L_0892D37C;
    case 286u: goto L_0892D3A8;
    case 287u: goto L_0892D3C0;
    case 288u: goto L_0892D3EC;
    case 289u: goto L_0892D3FC;
    case 290u: goto L_0892D40C;
    case 291u: goto L_0892D420;
    case 292u: goto L_0892D430;
    case 293u: goto L_0892D440;
    case 294u: goto L_0892D450;
    case 295u: goto L_0892D46C;
    case 296u: goto L_0892D47C;
    case 297u: goto L_0892D488;
    case 298u: goto L_0892D4BC;
    case 299u: goto L_0892D4C8;
    case 300u: goto L_0892D4DC;
    case 301u: goto L_0892D4F0;
    case 302u: goto L_0892D504;
    case 303u: goto L_0892D510;
    case 304u: goto L_0892D528;
    case 305u: goto L_0892D554;
    case 306u: goto L_0892D55C;
    case 307u: goto L_0892D564;
    case 308u: goto L_0892D574;
    case 309u: goto L_0892D584;
    case 310u: goto L_0892D58C;
    case 311u: goto L_0892D59C;
    case 312u: goto L_0892D5A4;
    case 313u: goto L_0892D5AC;
    case 314u: goto L_0892D5B0;
    case 315u: goto L_0892D5D0;
    case 316u: goto L_0892D5FC;
    case 317u: goto L_0892D608;
    case 318u: goto L_0892D61C;
    case 319u: goto L_0892D630;
    case 320u: goto L_0892D644;
    case 321u: goto L_0892D650;
    case 322u: goto L_0892D664;
    case 323u: goto L_0892D670;
    case 324u: goto L_0892D67C;
    case 325u: goto L_0892D694;
    case 326u: goto L_0892D6A4;
    case 327u: goto L_0892D6C4;
    case 328u: goto L_0892D6D0;
    case 329u: goto L_0892D6F4;
    case 330u: goto L_0892D6FC;
    case 331u: goto L_0892D710;
    case 332u: goto L_0892D720;
    case 333u: goto L_0892D730;
    case 334u: goto L_0892D73C;
    case 335u: goto L_0892D764;
    case 336u: goto L_0892D780;
    case 337u: goto L_0892D7A4;
    case 338u: goto L_0892D7B0;
    case 339u: goto L_0892D7C4;
    case 340u: goto L_0892D7D8;
    case 341u: goto L_0892D7EC;
    case 342u: goto L_0892D7F8;
    case 343u: goto L_0892D800;
    case 344u: goto L_0892D814;
    case 345u: goto L_0892D820;
    case 346u: goto L_0892D82C;
    case 347u: goto L_0892D850;
    case 348u: goto L_0892D858;
    case 349u: goto L_0892D864;
    case 350u: goto L_0892D888;
    case 351u: goto L_0892D8A0;
    case 352u: goto L_0892D8BC;
    case 353u: goto L_0892D8C8;
    case 354u: goto L_0892D8DC;
    case 355u: goto L_0892D8F0;
    case 356u: goto L_0892D904;
    case 357u: goto L_0892D910;
    case 358u: goto L_0892D91C;
    case 359u: goto L_0892D928;
    case 360u: goto L_0892D934;
    case 361u: goto L_0892D940;
    case 362u: goto L_0892D948;
    case 363u: goto L_0892D958;
    case 364u: goto L_0892D960;
    case 365u: goto L_0892D980;
    case 366u: goto L_0892D998;
    case 367u: goto L_0892D9A0;
    case 368u: goto L_0892D9B4;
    case 369u: goto L_0892D9D8;
    case 370u: goto L_0892D9E4;
    case 371u: goto L_0892D9FC;
    case 372u: goto L_0892DA08;
    case 373u: goto L_0892DA24;
    case 374u: goto L_0892DA28;
    case 375u: goto L_0892DA3C;
    case 376u: goto L_0892DA40;
    case 377u: goto L_0892DA58;
    case 378u: goto L_0892DA6C;
    case 379u: goto L_0892DA78;
    case 380u: goto L_0892DA88;
    case 381u: goto L_0892DA98;
    case 382u: goto L_0892DA9C;
    case 383u: goto L_0892DAB4;
    case 384u: goto L_0892DAC4;
    case 385u: goto L_0892DAD0;
    case 386u: goto L_0892DAE4;
    case 387u: goto L_0892DAF0;
    case 388u: goto L_0892DAFC;
    case 389u: goto L_0892DB08;
    case 390u: goto L_0892DB14;
    case 391u: goto L_0892DB2C;
    case 392u: goto L_0892DB34;
    case 393u: goto L_0892DB44;
    case 394u: goto L_0892DB50;
    case 395u: goto L_0892DB5C;
    case 396u: goto L_0892DB68;
    case 397u: goto L_0892DB8C;
    case 398u: goto L_0892DBA8;
    case 399u: goto L_0892DBB4;
    case 400u: goto L_0892DBC0;
    case 401u: goto L_0892DBCC;
    case 402u: goto L_0892DBDC;
    case 403u: goto L_0892DBE4;
    case 404u: goto L_0892DBFC;
    case 405u: goto L_0892DC04;
    case 406u: goto L_0892DC10;
    case 407u: goto L_0892DC18;
    case 408u: goto L_0892DC24;
    case 409u: goto L_0892DC30;
    case 410u: goto L_0892DC3C;
    case 411u: goto L_0892DC48;
    case 412u: goto L_0892DC54;
    case 413u: goto L_0892DC60;
    case 414u: goto L_0892DC64;
    case 415u: goto L_0892DC7C;
    case 416u: goto L_0892DC94;
    case 417u: goto L_0892DC9C;
    case 418u: goto L_0892DCA4;
    case 419u: goto L_0892DCAC;
    case 420u: goto L_0892DCBC;
    case 421u: goto L_0892DCCC;
    case 422u: goto L_0892DCDC;
    case 423u: goto L_0892DCF8;
    case 424u: goto L_0892DD04;
    case 425u: goto L_0892DD18;
    case 426u: goto L_0892DD28;
    case 427u: goto L_0892DD40;
    case 428u: goto L_0892DD50;
    case 429u: goto L_0892DD64;
    case 430u: goto L_0892DD74;
    case 431u: goto L_0892DD88;
    case 432u: goto L_0892DD98;
    case 433u: goto L_0892DDBC;
    case 434u: goto L_0892DDC4;
    case 435u: goto L_0892DDE0;
    case 436u: goto L_0892DDFC;
    case 437u: goto L_0892DE08;
    case 438u: goto L_0892DE10;
    case 439u: goto L_0892DE28;
    case 440u: goto L_0892DE50;
    case 441u: goto L_0892DE5C;
    case 442u: goto L_0892DE6C;
    case 443u: goto L_0892DE74;
    case 444u: goto L_0892DE78;
    case 445u: goto L_0892DE9C;
    case 446u: goto L_0892DEA4;
    case 447u: goto L_0892DEB0;
    case 448u: goto L_0892DEBC;
    case 449u: goto L_0892DEC8;
    case 450u: goto L_0892DED4;
    case 451u: goto L_0892DEE0;
    case 452u: goto L_0892DEE8;
    case 453u: goto L_0892DF00;
    case 454u: goto L_0892DF28;
    case 455u: goto L_0892DF38;
    case 456u: goto L_0892DF5C;
    case 457u: goto L_0892DF64;
    case 458u: goto L_0892DF70;
    case 459u: goto L_0892DF7C;
    case 460u: goto L_0892DF9C;
    case 461u: goto L_0892DFB4;
    case 462u: goto L_0892DFC4;
    case 463u: goto L_0892DFD8;
    case 464u: goto L_0892DFF8;
    case 465u: goto L_0892E010;
    case 466u: goto L_0892E030;
    case 467u: goto L_0892E038;
    case 468u: goto L_0892E04C;
    case 469u: goto L_0892E06C;
    case 470u: goto L_0892E074;
    case 471u: goto L_0892E08C;
    case 472u: goto L_0892E094;
    case 473u: goto L_0892E098;
    case 474u: goto L_0892E0AC;
    case 475u: goto L_0892E0E0;
    case 476u: goto L_0892E0EC;
    case 477u: goto L_0892E0F4;
    case 478u: goto L_0892E100;
    case 479u: goto L_0892E110;
    case 480u: goto L_0892E128;
    case 481u: goto L_0892E130;
    case 482u: goto L_0892E148;
    case 483u: goto L_0892E160;
    case 484u: goto L_0892E184;
    case 485u: goto L_0892E18C;
    case 486u: goto L_0892E1A8;
    case 487u: goto L_0892E1D4;
    case 488u: goto L_0892E1E0;
    case 489u: goto L_0892E1EC;
    case 490u: goto L_0892E20C;
    case 491u: goto L_0892E220;
    case 492u: goto L_0892E224;
    case 493u: goto L_0892E230;
    case 494u: goto L_0892E244;
    case 495u: goto L_0892E250;
    case 496u: goto L_0892E25C;
    case 497u: goto L_0892E274;
    case 498u: goto L_0892E28C;
    case 499u: goto L_0892E298;
    case 500u: goto L_0892E2A4;
    case 501u: goto L_0892E2AC;
    case 502u: goto L_0892E2C8;
    case 503u: goto L_0892E2E0;
    case 504u: goto L_0892E308;
    case 505u: goto L_0892E324;
    case 506u: goto L_0892E330;
    case 507u: goto L_0892E338;
    case 508u: goto L_0892E340;
    case 509u: goto L_0892E348;
    case 510u: goto L_0892E350;
    case 511u: goto L_0892E36C;
    case 512u: goto L_0892E37C;
    case 513u: goto L_0892E388;
    case 514u: goto L_0892E390;
    case 515u: goto L_0892E39C;
    case 516u: goto L_0892E3A8;
    case 517u: goto L_0892E3B4;
    case 518u: goto L_0892E3C0;
    case 519u: goto L_0892E3CC;
    case 520u: goto L_0892E3DC;
    case 521u: goto L_0892E3E8;
    case 522u: goto L_0892E3EC;
    case 523u: goto L_0892E3F4;
    case 524u: goto L_0892E434;
    case 525u: goto L_0892E440;
    case 526u: goto L_0892E44C;
    case 527u: goto L_0892E454;
    case 528u: goto L_0892E46C;
    case 529u: goto L_0892E474;
    case 530u: goto L_0892E480;
    case 531u: goto L_0892E488;
    case 532u: goto L_0892E490;
    case 533u: goto L_0892E494;
    case 534u: goto L_0892E4B4;
    case 535u: goto L_0892E4C0;
    case 536u: goto L_0892E4CC;
    case 537u: goto L_0892E4D8;
    case 538u: goto L_0892E4E4;
    case 539u: goto L_0892E4F0;
    case 540u: goto L_0892E4FC;
    case 541u: goto L_0892E51C;
    case 542u: goto L_0892E534;
    case 543u: goto L_0892E554;
    case 544u: goto L_0892E574;
    case 545u: goto L_0892E57C;
    case 546u: goto L_0892E590;
    case 547u: goto L_0892E598;
    case 548u: goto L_0892E5A4;
    case 549u: goto L_0892E5AC;
    case 550u: goto L_0892E5B8;
    case 551u: goto L_0892E5DC;
    case 552u: goto L_0892E5F4;
    case 553u: goto L_0892E604;
    case 554u: goto L_0892E618;
    case 555u: goto L_0892E628;
    case 556u: goto L_0892E644;
    case 557u: goto L_0892E65C;
    case 558u: goto L_0892E674;
    case 559u: goto L_0892E6B0;
    case 560u: goto L_0892E6BC;
    case 561u: goto L_0892E6C8;
    case 562u: goto L_0892E6D0;
    case 563u: goto L_0892E6E8;
    case 564u: goto L_0892E6F0;
    case 565u: goto L_0892E6FC;
    case 566u: goto L_0892E720;
    case 567u: goto L_0892E73C;
    case 568u: goto L_0892E748;
    case 569u: goto L_0892E75C;
    case 570u: goto L_0892E774;
    case 571u: goto L_0892E78C;
    case 572u: goto L_0892E798;
    case 573u: goto L_0892E7B0;
    case 574u: goto L_0892E7C8;
    case 575u: goto L_0892E7DC;
    case 576u: goto L_0892E7F4;
    case 577u: goto L_0892E800;
    case 578u: goto L_0892E810;
    case 579u: goto L_0892E81C;
    case 580u: goto L_0892E834;
    case 581u: goto L_0892E848;
    case 582u: goto L_0892E868;
    case 583u: goto L_0892E874;
    case 584u: goto L_0892E88C;
    case 585u: goto L_0892E8A0;
    case 586u: goto L_0892E8AC;
    case 587u: goto L_0892E8BC;
    case 588u: goto L_0892E8D0;
    case 589u: goto L_0892E8E8;
    case 590u: goto L_0892E900;
    case 591u: goto L_0892E91C;
    case 592u: goto L_0892E928;
    case 593u: goto L_0892E940;
    case 594u: goto L_0892E950;
    case 595u: goto L_0892E95C;
    case 596u: goto L_0892E96C;
    case 597u: goto L_0892E974;
    case 598u: goto L_0892E980;
    case 599u: goto L_0892E990;
    case 600u: goto L_0892E9A4;
    case 601u: goto L_0892E9BC;
    case 602u: goto L_0892E9D8;
    case 603u: goto L_0892E9F0;
    case 604u: goto L_0892E9F8;
    case 605u: goto L_0892EA04;
    case 606u: goto L_0892EA0C;
    case 607u: goto L_0892EA18;
    case 608u: goto L_0892EA28;
    case 609u: goto L_0892EA3C;
    case 610u: goto L_0892EA54;
    case 611u: goto L_0892EA70;
    case 612u: goto L_0892EA84;
    case 613u: goto L_0892EA98;
    case 614u: goto L_0892EAA8;
    case 615u: goto L_0892EAC0;
    case 616u: goto L_0892EADC;
    case 617u: goto L_0892EAE8;
    case 618u: goto L_0892EB04;
    case 619u: goto L_0892EB14;
    case 620u: goto L_0892EB24;
    case 621u: goto L_0892EB2C;
    case 622u: goto L_0892EB3C;
    case 623u: goto L_0892EB48;
    case 624u: goto L_0892EB58;
    case 625u: goto L_0892EB64;
    case 626u: goto L_0892EB78;
    case 627u: goto L_0892EB8C;
    case 628u: goto L_0892EB98;
    case 629u: goto L_0892EBA0;
    case 630u: goto L_0892EBA8;
    case 631u: goto L_0892EBB4;
    case 632u: goto L_0892EBBC;
    case 633u: goto L_0892EBC8;
    case 634u: goto L_0892EBD8;
    case 635u: goto L_0892EBE0;
    case 636u: goto L_0892EBF0;
    case 637u: goto L_0892EBF8;
    case 638u: goto L_0892EC04;
    case 639u: goto L_0892EC10;
    case 640u: goto L_0892EC1C;
    case 641u: goto L_0892EC34;
    case 642u: goto L_0892EC44;
    case 643u: goto L_0892EC50;
    case 644u: goto L_0892EC58;
    case 645u: goto L_0892EC70;
    case 646u: goto L_0892EC88;
    case 647u: goto L_0892EC94;
    case 648u: goto L_0892ECA8;
    case 649u: goto L_0892ECB8;
    case 650u: goto L_0892ECD0;
    case 651u: goto L_0892ECDC;
    case 652u: goto L_0892ECF0;
    case 653u: goto L_0892ED00;
    case 654u: goto L_0892ED18;
    case 655u: goto L_0892ED24;
    case 656u: goto L_0892ED34;
    case 657u: goto L_0892ED44;
    case 658u: goto L_0892ED64;
    case 659u: goto L_0892ED70;
    case 660u: goto L_0892ED80;
    case 661u: goto L_0892ED98;
    case 662u: goto L_0892EDA8;
    case 663u: goto L_0892EDB4;
    case 664u: goto L_0892EDC4;
    case 665u: goto L_0892EDD0;
    case 666u: goto L_0892EDDC;
    case 667u: goto L_0892EDE8;
    case 668u: goto L_0892EDF4;
    case 669u: goto L_0892EDFC;
    case 670u: goto L_0892EE00;
    case 671u: goto L_0892EE08;
    case 672u: goto L_0892EE14;
    case 673u: goto L_0892EE20;
    case 674u: goto L_0892EE30;
    case 675u: goto L_0892EE3C;
    case 676u: goto L_0892EE5C;
    case 677u: goto L_0892EE64;
    case 678u: goto L_0892EE78;
    case 679u: goto L_0892EE90;
    case 680u: goto L_0892EEA8;
    case 681u: goto L_0892EEC0;
    case 682u: goto L_0892EECC;
    case 683u: goto L_0892EEDC;
    case 684u: goto L_0892EEE8;
    case 685u: goto L_0892EEF4;
    case 686u: goto L_0892EF00;
    case 687u: goto L_0892EF10;
    case 688u: goto L_0892EF1C;
    case 689u: goto L_0892EF24;
    case 690u: goto L_0892EF30;
    case 691u: goto L_0892EF3C;
    case 692u: goto L_0892EF48;
    case 693u: goto L_0892EF54;
    case 694u: goto L_0892EF6C;
    case 695u: goto L_0892EF7C;
    case 696u: goto L_0892EFA8;
    case 697u: goto L_0892EFB0;
    case 698u: goto L_0892EFB8;
    case 699u: goto L_0892EFC4;
    case 700u: goto L_0892EFD0;
    case 701u: goto L_0892EFE8;
    case 702u: goto L_0892EFF8;
    case 703u: goto L_0892F000;
    case 704u: goto L_0892F014;
    case 705u: goto L_0892F020;
    case 706u: goto L_0892F028;
    case 707u: goto L_0892F034;
    case 708u: goto L_0892F040;
    case 709u: goto L_0892F058;
    case 710u: goto L_0892F068;
    case 711u: goto L_0892F070;
    case 712u: goto L_0892F084;
    case 713u: goto L_0892F090;
    case 714u: goto L_0892F098;
    case 715u: goto L_0892F0A4;
    case 716u: goto L_0892F0B0;
    case 717u: goto L_0892F0C8;
    case 718u: goto L_0892F0D8;
    case 719u: goto L_0892F0E0;
    case 720u: goto L_0892F0E4;
    case 721u: goto L_0892F0FC;
    case 722u: goto L_0892F128;
    case 723u: goto L_0892F134;
    case 724u: goto L_0892F140;
    case 725u: goto L_0892F148;
    case 726u: goto L_0892F154;
    case 727u: goto L_0892F164;
    case 728u: goto L_0892F170;
    case 729u: goto L_0892F178;
    case 730u: goto L_0892F184;
    case 731u: goto L_0892F194;
    case 732u: goto L_0892F19C;
    case 733u: goto L_0892F1A4;
    case 734u: goto L_0892F1B4;
    case 735u: goto L_0892F1BC;
    case 736u: goto L_0892F1C8;
    case 737u: goto L_0892F1D4;
    case 738u: goto L_0892F1E0;
    case 739u: goto L_0892F1EC;
    case 740u: goto L_0892F1F8;
    case 741u: goto L_0892F204;
    case 742u: goto L_0892F208;
    case 743u: goto L_0892F214;
    case 744u: goto L_0892F218;
    case 745u: goto L_0892F23C;
    case 746u: goto L_0892F270;
    case 747u: goto L_0892F280;
    case 748u: goto L_0892F298;
    case 749u: goto L_0892F2BC;
    case 750u: goto L_0892F2D4;
    case 751u: goto L_0892F2DC;
    case 752u: goto L_0892F2E0;
    case 753u: goto L_0892F2F4;
    case 754u: goto L_0892F2FC;
    case 755u: goto L_0892F300;
    case 756u: goto L_0892F314;
    case 757u: goto L_0892F31C;
    case 758u: goto L_0892F320;
    case 759u: goto L_0892F334;
    case 760u: goto L_0892F33C;
    case 761u: goto L_0892F340;
    case 762u: goto L_0892F354;
    case 763u: goto L_0892F35C;
    case 764u: goto L_0892F360;
    case 765u: goto L_0892F374;
    case 766u: goto L_0892F37C;
    case 767u: goto L_0892F380;
    case 768u: goto L_0892F394;
    case 769u: goto L_0892F39C;
    case 770u: goto L_0892F3A0;
    case 771u: goto L_0892F3B4;
    case 772u: goto L_0892F3BC;
    case 773u: goto L_0892F3C0;
    case 774u: goto L_0892F3D4;
    case 775u: goto L_0892F3DC;
    case 776u: goto L_0892F3E0;
    case 777u: goto L_0892F3F4;
    case 778u: goto L_0892F3FC;
    case 779u: goto L_0892F400;
    case 780u: goto L_0892F414;
    case 781u: goto L_0892F41C;
    case 782u: goto L_0892F420;
    case 783u: goto L_0892F434;
    case 784u: goto L_0892F43C;
    case 785u: goto L_0892F440;
    case 786u: goto L_0892F454;
    case 787u: goto L_0892F45C;
    case 788u: goto L_0892F460;
    case 789u: goto L_0892F474;
    case 790u: goto L_0892F47C;
    case 791u: goto L_0892F480;
    case 792u: goto L_0892F488;
    case 793u: goto L_0892F494;
    case 794u: goto L_0892F4A8;
    case 795u: goto L_0892F4AC;
    case 796u: goto L_0892F4C4;
    case 797u: goto L_0892F4CC;
    case 798u: goto L_0892F4E4;
    case 799u: goto L_0892F4EC;
    case 800u: goto L_0892F4F8;
    case 801u: goto L_0892F50C;
    case 802u: goto L_0892F514;
    case 803u: goto L_0892F520;
    case 804u: goto L_0892F534;
    case 805u: goto L_0892F53C;
    case 806u: goto L_0892F548;
    case 807u: goto L_0892F55C;
    case 808u: goto L_0892F564;
    case 809u: goto L_0892F568;
    case 810u: goto L_0892F56C;
    case 811u: goto L_0892F574;
    case 812u: goto L_0892F58C;
    case 813u: goto L_0892F594;
    case 814u: goto L_0892F5A0;
    case 815u: goto L_0892F5B4;
    case 816u: goto L_0892F5BC;
    case 817u: goto L_0892F5C8;
    case 818u: goto L_0892F5DC;
    case 819u: goto L_0892F5E4;
    case 820u: goto L_0892F5F0;
    case 821u: goto L_0892F604;
    case 822u: goto L_0892F60C;
    case 823u: goto L_0892F610;
    case 824u: goto L_0892F614;
    case 825u: goto L_0892F628;
    case 826u: goto L_0892F638;
    case 827u: goto L_0892F640;
    case 828u: goto L_0892F65C;
    case 829u: goto L_0892F688;
    case 830u: goto L_0892F694;
    case 831u: goto L_0892F6A0;
    case 832u: goto L_0892F6C4;
    case 833u: goto L_0892F6DC;
    case 834u: goto L_0892F6F8;
    case 835u: goto L_0892F73C;
    case 836u: goto L_0892F750;
    case 837u: goto L_0892F760;
    case 838u: goto L_0892F76C;
    case 839u: goto L_0892F774;
    case 840u: goto L_0892F788;
    case 841u: goto L_0892F79C;
    case 842u: goto L_0892F7B8;
    case 843u: goto L_0892F7C8;
    case 844u: goto L_0892F7E0;
    case 845u: goto L_0892F7E4;
    case 846u: goto L_0892F7EC;
    case 847u: goto L_0892F804;
    case 848u: goto L_0892F810;
    case 849u: goto L_0892F814;
    case 850u: goto L_0892F818;
    case 851u: goto L_0892F824;
    case 852u: goto L_0892F85C;
    case 853u: goto L_0892F884;
    case 854u: goto L_0892F8A0;
    case 855u: goto L_0892F8B8;
    case 856u: goto L_0892F8D0;
    case 857u: goto L_0892F8D4;
    case 858u: goto L_0892F8DC;
    case 859u: goto L_0892F8F4;
    case 860u: goto L_0892F900;
    case 861u: goto L_0892F91C;
    case 862u: goto L_0892F954;
    case 863u: goto L_0892F960;
    case 864u: goto L_0892F970;
    case 865u: goto L_0892F978;
    case 866u: goto L_0892F980;
    case 867u: goto L_0892F990;
    case 868u: goto L_0892F998;
    case 869u: goto L_0892F9B0;
    case 870u: goto L_0892F9B8;
    case 871u: goto L_0892F9D0;
    case 872u: goto L_0892F9D8;
    case 873u: goto L_0892F9F0;
    case 874u: goto L_0892F9F8;
    case 875u: goto L_0892FA10;
    case 876u: goto L_0892FA28;
    case 877u: goto L_0892FA40;
    case 878u: goto L_0892FA94;
    case 879u: goto L_0892FAAC;
    case 880u: goto L_0892FAC4;
    case 881u: goto L_0892FADC;
    case 882u: goto L_0892FAF4;
    case 883u: goto L_0892FB0C;
    case 884u: goto L_0892FB24;
    case 885u: goto L_0892FB3C;
    case 886u: goto L_0892FB54;
    case 887u: goto L_0892FC00;
    case 888u: goto L_0892FC08;
    case 889u: goto L_0892FC3C;
    case 890u: goto L_0892FC50;
    case 891u: goto L_0892FC5C;
    case 892u: goto L_0892FC6C;
    case 893u: goto L_0892FC74;
    case 894u: goto L_0892FCF8;
    case 895u: goto L_0892FD00;
    case 896u: goto L_0892FD10;
    case 897u: goto L_0892FD40;
    case 898u: goto L_0892FD50;
    case 899u: goto L_0892FD58;
    case 900u: goto L_0892FD6C;
    case 901u: goto L_0892FD80;
    case 902u: goto L_0892FDA8;
    case 903u: goto L_0892FDC0;
    case 904u: goto L_0892FDD8;
    case 905u: goto L_0892FE08;
    case 906u: goto L_0892FE10;
    case 907u: goto L_0892FE3C;
    case 908u: goto L_0892FE60;
    case 909u: goto L_0892FE70;
    case 910u: goto L_0892FE78;
    case 911u: goto L_0892FE90;
    case 912u: goto L_0892FE9C;
    case 913u: goto L_0892FEA8;
    case 914u: goto L_0892FEB4;
    case 915u: goto L_0892FEF0;
    case 916u: goto L_0892FEF8;
    case 917u: goto L_0892FF1C;
    case 918u: goto L_0892FF54;
    case 919u: goto L_0892FF6C;
    case 920u: goto L_0892FF70;
    case 921u: goto L_0892FF78;
    case 922u: goto L_0892FF84;
    case 923u: goto L_0892FF94;
    case 924u: goto L_0892FF9C;
    case 925u: goto L_0892FFA8;
    case 926u: goto L_0892FFB4;
    case 927u: goto L_0892FFC8;
    case 928u: goto L_0892FFD8;
    case 929u: goto L_0892FFF0;
    case 930u: goto L_0892FFF8;
    default:
        if (local_transfers == 0u) rt.unsupported(ctx.pc, 0u, "invalid internal function entry");
        else ctx.pc = local_pc;
        return;
    }
    }
L_0892C000:
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
L_0892C030:
    ctx.set_gpr(3, rt.memory().aot_load32(ctx.gpr[5] + static_cast<std::uint32_t>(188)));
    ctx.set_gpr(3, ctx.gpr[3] + static_cast<std::uint32_t>(1));
    rt.memory().aot_store32(ctx.gpr[5] + static_cast<std::uint32_t>(188), ctx.gpr[3]);
    ctx.set_gpr(3, rt.memory().aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(28)));
    ctx.set_gpr(4, ctx.gpr[3] + static_cast<std::uint32_t>(3));
    ctx.set_gpr(3, 0u + static_cast<std::uint32_t>(-4));
    ctx.set_gpr(4, ctx.gpr[4] & ctx.gpr[3]);
    ctx.set_gpr(3, rt.memory().aot_load32(ctx.gpr[5] + static_cast<std::uint32_t>(192)));
    ctx.set_gpr(3, ctx.gpr[3] + ctx.gpr[4]);
    rt.memory().aot_store32(ctx.gpr[5] + static_cast<std::uint32_t>(192), ctx.gpr[3]);
    jump_target = ctx.gpr[31];
    // nop
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_0892C060:
    ctx.set_gpr(29, ctx.gpr[29] + static_cast<std::uint32_t>(-48));
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(28), ctx.gpr[31]);
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(24), ctx.gpr[20]);
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(20), ctx.gpr[19]);
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(16), ctx.gpr[18]);
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(12), ctx.gpr[17]);
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(8), ctx.gpr[16]);
    ctx.set_gpr(18, ctx.gpr[4] + 0u);
    ctx.set_gpr(17, ctx.gpr[5] + 0u);
    ctx.set_gpr(3, rt.memory().aot_load32(ctx.gpr[5] + static_cast<std::uint32_t>(96)));
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(44), ctx.gpr[3]);
    { const bool branch_taken = ctx.gpr[3] == 0u;
    // nop
      if (branch_taken) {
          goto L_0892C0A0;
      }
      goto L_0892C094;
    }
L_0892C094:
    ctx.set_gpr(2, rt.memory().aot_load32(ctx.gpr[3] + static_cast<std::uint32_t>(4)));
    ctx.set_gpr(2, ctx.gpr[2] + static_cast<std::uint32_t>(1));
    rt.memory().aot_store32(ctx.gpr[3] + static_cast<std::uint32_t>(4), ctx.gpr[2]);
    goto L_0892C0A0;
L_0892C0A0:
    ctx.set_gpr(4, rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(44)));
    { const bool branch_taken = ctx.gpr[4] != 0u;
    // nop
      if (branch_taken) {
          goto L_0892C0C8;
      }
      goto L_0892C0AC;
    }
L_0892C0AC:
    { const bool branch_taken = ctx.gpr[4] == 0u;
    // nop
      if (branch_taken) {
          goto L_0892C0BC;
      }
      goto L_0892C0B4;
    }
L_0892C0B4:
    ctx.set_gpr(31, 0x0892C0BCu);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0014_entry, 14u, 257u, 0x0883D454u>(ctx, &aot_mem) && ctx.pc == 0x0892C0BCu) goto L_0892C0BC;
    return;
L_0892C0BC:
    ctx.set_gpr(2, ctx.gpr[18] + 0u);
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_0892C334;
      }
      goto L_0892C0C8;
    }
L_0892C0C8:
    ctx.set_gpr(4, ctx.gpr[18] + 0u);
    ctx.set_gpr(25, rt.memory().aot_load32(ctx.gpr[18] + static_cast<std::uint32_t>(0)));
    ctx.set_gpr(25, rt.memory().aot_load32(ctx.gpr[25] + static_cast<std::uint32_t>(88)));
    jump_target = ctx.gpr[25];
    ctx.set_gpr(31, 0x0892C0DCu);
    // nop
    ctx.pc = jump_target;
    if (rt.invoke_chained_call(ctx, &aot_mem) && ctx.pc == 0x0892C0DCu) goto L_0892C0DC;
    return;
L_0892C0DC:
    ctx.set_gpr(16, rt.memory().aot_load32(ctx.gpr[2] + static_cast<std::uint32_t>(12)));
    ctx.set_gpr(4, rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(44)));
    ctx.set_gpr(2, rt.memory().aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(8)));
    ctx.set_gpr(1, static_cast<std::int32_t>(ctx.gpr[16]) < static_cast<std::int32_t>(ctx.gpr[2]) ? 1u : 0u);
    { const bool branch_taken = ctx.gpr[1] != 0u;
    // nop
      if (branch_taken) {
          goto L_0892C150;
      }
      goto L_0892C0F4;
    }
L_0892C0F4:
    ctx.set_gpr(5, ctx.gpr[16] + static_cast<std::uint32_t>(1));
    ctx.set_gpr(31, 0x0892C100u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0081_entry, 81u, 312u, 0x089495E8u>(ctx, &aot_mem) && ctx.pc == 0x0892C100u) goto L_0892C100;
    return;
L_0892C100:
    ctx.set_gpr(20, rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(44)));
    ctx.set_gpr(19, ctx.gpr[16] << 2u);
    ctx.set_gpr(2, rt.memory().aot_load32(ctx.gpr[20] + static_cast<std::uint32_t>(16)));
    ctx.set_gpr(2, ctx.gpr[2] + ctx.gpr[19]);
    ctx.set_gpr(4, rt.memory().aot_load32(ctx.gpr[2] + static_cast<std::uint32_t>(0)));
    { const bool branch_taken = ctx.gpr[4] == 0u;
    // nop
      if (branch_taken) {
          goto L_0892C124;
      }
      goto L_0892C11C;
    }
L_0892C11C:
    ctx.set_gpr(31, 0x0892C124u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0014_entry, 14u, 257u, 0x0883D454u>(ctx, &aot_mem) && ctx.pc == 0x0892C124u) goto L_0892C124;
    return;
L_0892C124:
    ctx.set_gpr(2, rt.memory().aot_load32(ctx.gpr[20] + static_cast<std::uint32_t>(8)));
    { const bool branch_taken = ctx.gpr[2] == 0u;
    // nop
      if (branch_taken) {
          goto L_0892C150;
      }
      goto L_0892C130;
    }
L_0892C130:
    { const bool branch_taken = static_cast<std::int32_t>(ctx.gpr[16]) < 0;
    // nop
      if (branch_taken) {
          goto L_0892C150;
      }
      goto L_0892C138;
    }
L_0892C138:
    ctx.set_gpr(1, static_cast<std::int32_t>(ctx.gpr[16]) < static_cast<std::int32_t>(ctx.gpr[2]) ? 1u : 0u);
    { const bool branch_taken = ctx.gpr[1] == 0u;
    // nop
      if (branch_taken) {
          goto L_0892C150;
      }
      goto L_0892C144;
    }
L_0892C144:
    ctx.set_gpr(2, rt.memory().aot_load32(ctx.gpr[20] + static_cast<std::uint32_t>(16)));
    ctx.set_gpr(2, ctx.gpr[2] + ctx.gpr[19]);
    rt.memory().aot_store32(ctx.gpr[2] + static_cast<std::uint32_t>(0), 0u);
    goto L_0892C150;
L_0892C150:
    ctx.set_gpr(2, rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(44)));
    ctx.set_gpr(20, ctx.gpr[16] << 2u);
    ctx.set_gpr(2, rt.memory().aot_load32(ctx.gpr[2] + static_cast<std::uint32_t>(16)));
    ctx.set_gpr(2, ctx.gpr[2] + ctx.gpr[20]);
    ctx.set_gpr(19, rt.memory().aot_load32(ctx.gpr[2] + static_cast<std::uint32_t>(0)));
    { const bool branch_taken = ctx.gpr[19] == 0u;
    // nop
      if (branch_taken) {
          goto L_0892C190;
      }
      goto L_0892C16C;
    }
L_0892C16C:
    ctx.set_gpr(4, ctx.gpr[19] + 0u);
    ctx.set_gpr(2, 2245u << 16u);
    ctx.set_gpr(5, rt.memory().aot_load32(ctx.gpr[2] + static_cast<std::uint32_t>(28824)));
    ctx.set_gpr(31, 0x0892C180u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0080_entry, 80u, 857u, 0x08947F8Cu>(ctx, &aot_mem) && ctx.pc == 0x0892C180u) goto L_0892C180;
    return;
L_0892C180:
    { const bool branch_taken = ctx.gpr[2] == 0u;
    // nop
      if (branch_taken) {
          goto L_0892C190;
      }
      goto L_0892C188;
    }
L_0892C188:
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_0892C194;
      }
      goto L_0892C190;
    }
L_0892C190:
    ctx.set_gpr(19, 0u + 0u);
    goto L_0892C194;
L_0892C194:
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(40), ctx.gpr[19]);
    { const bool branch_taken = ctx.gpr[19] == 0u;
    // nop
      if (branch_taken) {
          goto L_0892C1AC;
      }
      goto L_0892C1A0;
    }
L_0892C1A0:
    ctx.set_gpr(2, rt.memory().aot_load32(ctx.gpr[19] + static_cast<std::uint32_t>(4)));
    ctx.set_gpr(2, ctx.gpr[2] + static_cast<std::uint32_t>(1));
    rt.memory().aot_store32(ctx.gpr[19] + static_cast<std::uint32_t>(4), ctx.gpr[2]);
    goto L_0892C1AC;
L_0892C1AC:
    ctx.set_gpr(2, rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(40)));
    { const bool branch_taken = ctx.gpr[2] != 0u;
    // nop
      if (branch_taken) {
          goto L_0892C238;
      }
      goto L_0892C1B8;
    }
L_0892C1B8:
    ctx.set_gpr(4, rt.memory().aot_load32(ctx.gpr[17] + static_cast<std::uint32_t>(320)));
    ctx.set_gpr(31, 0x0892C1C4u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0058_entry, 58u, 119u, 0x088ECA5Cu>(ctx, &aot_mem) && ctx.pc == 0x0892C1C4u) goto L_0892C1C4;
    return;
L_0892C1C4:
    ctx.set_gpr(4, ctx.gpr[29] + static_cast<std::uint32_t>(40));
    ctx.set_gpr(5, ctx.gpr[2] + 0u);
    ctx.set_gpr(31, 0x0892C1D4u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0085_entry, 85u, 67u, 0x0895853Cu>(ctx, &aot_mem) && ctx.pc == 0x0892C1D4u) goto L_0892C1D4;
    return;
L_0892C1D4:
    ctx.set_gpr(19, rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(40)));
    ctx.set_gpr(17, rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(44)));
    { const bool branch_taken = ctx.gpr[19] == 0u;
    // nop
      if (branch_taken) {
          goto L_0892C1F0;
      }
      goto L_0892C1E4;
    }
L_0892C1E4:
    ctx.set_gpr(2, rt.memory().aot_load32(ctx.gpr[19] + static_cast<std::uint32_t>(4)));
    ctx.set_gpr(2, ctx.gpr[2] + static_cast<std::uint32_t>(1));
    rt.memory().aot_store32(ctx.gpr[19] + static_cast<std::uint32_t>(4), ctx.gpr[2]);
    goto L_0892C1F0;
L_0892C1F0:
    ctx.set_gpr(2, rt.memory().aot_load32(ctx.gpr[17] + static_cast<std::uint32_t>(16)));
    ctx.set_gpr(2, ctx.gpr[2] + ctx.gpr[20]);
    ctx.set_gpr(4, rt.memory().aot_load32(ctx.gpr[2] + static_cast<std::uint32_t>(0)));
    { const bool branch_taken = ctx.gpr[4] == 0u;
    // nop
      if (branch_taken) {
          goto L_0892C20C;
      }
      goto L_0892C204;
    }
L_0892C204:
    ctx.set_gpr(31, 0x0892C20Cu);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0014_entry, 14u, 257u, 0x0883D454u>(ctx, &aot_mem) && ctx.pc == 0x0892C20Cu) goto L_0892C20C;
    return;
L_0892C20C:
    ctx.set_gpr(2, rt.memory().aot_load32(ctx.gpr[17] + static_cast<std::uint32_t>(8)));
    { const bool branch_taken = ctx.gpr[2] == 0u;
    // nop
      if (branch_taken) {
          goto L_0892C238;
      }
      goto L_0892C218;
    }
L_0892C218:
    { const bool branch_taken = static_cast<std::int32_t>(ctx.gpr[16]) < 0;
    // nop
      if (branch_taken) {
          goto L_0892C238;
      }
      goto L_0892C220;
    }
L_0892C220:
    ctx.set_gpr(1, static_cast<std::int32_t>(ctx.gpr[16]) < static_cast<std::int32_t>(ctx.gpr[2]) ? 1u : 0u);
    { const bool branch_taken = ctx.gpr[1] == 0u;
    // nop
      if (branch_taken) {
          goto L_0892C238;
      }
      goto L_0892C22C;
    }
L_0892C22C:
    ctx.set_gpr(2, rt.memory().aot_load32(ctx.gpr[17] + static_cast<std::uint32_t>(16)));
    ctx.set_gpr(2, ctx.gpr[2] + ctx.gpr[20]);
    rt.memory().aot_store32(ctx.gpr[2] + static_cast<std::uint32_t>(0), ctx.gpr[19]);
    goto L_0892C238;
L_0892C238:
    ctx.set_gpr(2, rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(40)));
    ctx.set_gpr(5, rt.memory().aot_load32(ctx.gpr[2] + static_cast<std::uint32_t>(8)));
    ctx.set_gpr(2, 0u + static_cast<std::uint32_t>(-1));
    rt.memory().aot_store32(ctx.gpr[18] + static_cast<std::uint32_t>(12), ctx.gpr[2]);
    ctx.set_gpr(6, 0u + 0u);
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_0892C2EC;
      }
      goto L_0892C254;
    }
L_0892C254:
    ctx.set_gpr(4, rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(40)));
    ctx.set_gpr(3, ctx.gpr[6] << 2u);
    ctx.set_gpr(2, rt.memory().aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(16)));
    ctx.set_gpr(2, ctx.gpr[2] + ctx.gpr[3]);
    ctx.set_gpr(16, rt.memory().aot_load32(ctx.gpr[2] + static_cast<std::uint32_t>(0)));
    ctx.set_gpr(3, rt.memory().aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(40)));
    ctx.set_gpr(2, rt.memory().aot_load32(ctx.gpr[18] + static_cast<std::uint32_t>(40)));
    { const bool branch_taken = ctx.gpr[3] != ctx.gpr[2];
    // nop
      if (branch_taken) {
          goto L_0892C2E8;
      }
      goto L_0892C278;
    }
L_0892C278:
    ctx.set_gpr(3, rt.memory().aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(28)));
    ctx.set_gpr(2, rt.memory().aot_load32(ctx.gpr[18] + static_cast<std::uint32_t>(28)));
    { const bool branch_taken = ctx.gpr[3] != ctx.gpr[2];
    // nop
      if (branch_taken) {
          goto L_0892C2E8;
      }
      goto L_0892C288;
    }
L_0892C288:
    ctx.set_gpr(3, rt.memory().aot_load8(ctx.gpr[16] + static_cast<std::uint32_t>(52)));
    ctx.set_gpr(2, rt.memory().aot_load8(ctx.gpr[18] + static_cast<std::uint32_t>(52)));
    { const bool branch_taken = ctx.gpr[3] != ctx.gpr[2];
    // nop
      if (branch_taken) {
          goto L_0892C2E8;
      }
      goto L_0892C298;
    }
L_0892C298:
    ctx.set_gpr(3, rt.memory().aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(48)));
    ctx.set_gpr(2, rt.memory().aot_load32(ctx.gpr[18] + static_cast<std::uint32_t>(48)));
    { const bool branch_taken = ctx.gpr[3] != ctx.gpr[2];
    // nop
      if (branch_taken) {
          goto L_0892C2E8;
      }
      goto L_0892C2A8;
    }
L_0892C2A8:
    ctx.set_gpr(3, rt.memory().aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(44)));
    ctx.set_gpr(2, rt.memory().aot_load32(ctx.gpr[18] + static_cast<std::uint32_t>(44)));
    { const bool branch_taken = ctx.gpr[3] != ctx.gpr[2];
    // nop
      if (branch_taken) {
          goto L_0892C2E8;
      }
      goto L_0892C2B8;
    }
L_0892C2B8:
    { const bool branch_taken = ctx.gpr[4] == 0u;
    // nop
      if (branch_taken) {
          goto L_0892C2C8;
      }
      goto L_0892C2C0;
    }
L_0892C2C0:
    ctx.set_gpr(31, 0x0892C2C8u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0014_entry, 14u, 257u, 0x0883D454u>(ctx, &aot_mem) && ctx.pc == 0x0892C2C8u) goto L_0892C2C8;
    return;
L_0892C2C8:
    ctx.set_gpr(4, rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(44)));
    { const bool branch_taken = ctx.gpr[4] == 0u;
    // nop
      if (branch_taken) {
          goto L_0892C2DC;
      }
      goto L_0892C2D4;
    }
L_0892C2D4:
    ctx.set_gpr(31, 0x0892C2DCu);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0014_entry, 14u, 257u, 0x0883D454u>(ctx, &aot_mem) && ctx.pc == 0x0892C2DCu) goto L_0892C2DC;
    return;
L_0892C2DC:
    ctx.set_gpr(2, ctx.gpr[16] + 0u);
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_0892C334;
      }
      goto L_0892C2E8;
    }
L_0892C2E8:
    ctx.set_gpr(6, ctx.gpr[6] + static_cast<std::uint32_t>(1));
    goto L_0892C2EC;
L_0892C2EC:
    ctx.set_gpr(2, static_cast<std::int32_t>(ctx.gpr[6]) < static_cast<std::int32_t>(ctx.gpr[5]) ? 1u : 0u);
    { const bool branch_taken = ctx.gpr[2] != 0u;
    // nop
      if (branch_taken) {
          goto L_0892C254;
      }
      goto L_0892C2F8;
    }
L_0892C2F8:
    ctx.set_gpr(4, rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(40)));
    ctx.set_gpr(5, ctx.gpr[18] + 0u);
    ctx.set_gpr(31, 0x0892C308u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0081_entry, 81u, 299u, 0x089494E0u>(ctx, &aot_mem) && ctx.pc == 0x0892C308u) goto L_0892C308;
    return;
L_0892C308:
    ctx.set_gpr(4, rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(40)));
    { const bool branch_taken = ctx.gpr[4] == 0u;
    // nop
      if (branch_taken) {
          goto L_0892C31C;
      }
      goto L_0892C314;
    }
L_0892C314:
    ctx.set_gpr(31, 0x0892C31Cu);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0014_entry, 14u, 257u, 0x0883D454u>(ctx, &aot_mem) && ctx.pc == 0x0892C31Cu) goto L_0892C31C;
    return;
L_0892C31C:
    ctx.set_gpr(4, rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(44)));
    { const bool branch_taken = ctx.gpr[4] == 0u;
    // nop
      if (branch_taken) {
          goto L_0892C330;
      }
      goto L_0892C328;
    }
L_0892C328:
    ctx.set_gpr(31, 0x0892C330u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0014_entry, 14u, 257u, 0x0883D454u>(ctx, &aot_mem) && ctx.pc == 0x0892C330u) goto L_0892C330;
    return;
L_0892C330:
    ctx.set_gpr(2, ctx.gpr[18] + 0u);
    goto L_0892C334;
L_0892C334:
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
L_0892C358:
    ctx.set_gpr(2, 2245u << 16u);
    ctx.set_gpr(2, rt.memory().aot_load32(ctx.gpr[2] + static_cast<std::uint32_t>(29148)));
    jump_target = ctx.gpr[31];
    // nop
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_0892C368:
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
    ctx.set_gpr(21, ctx.gpr[5] + 0u);
    ctx.set_gpr(3, rt.memory().aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(28)));
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(60), ctx.gpr[3]);
    ctx.set_gpr(22, 0u + 0u);
    ctx.set_gpr(23, rt.memory().aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(24)));
    ctx.set_gpr(20, rt.memory().aot_load32(ctx.gpr[5] + static_cast<std::uint32_t>(300)));
    ctx.set_gpr(19, rt.memory().aot_load32(ctx.gpr[5] + static_cast<std::uint32_t>(296)));
    ctx.set_gpr(18, rt.memory().aot_load32(ctx.gpr[5] + static_cast<std::uint32_t>(308)));
    ctx.set_gpr(17, rt.memory().aot_load32(ctx.gpr[5] + static_cast<std::uint32_t>(312)));
    ctx.set_gpr(30, rt.memory().aot_load32(ctx.gpr[5] + static_cast<std::uint32_t>(304)));
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_0892C460;
      }
      goto L_0892C3C4;
    }
L_0892C3C4:
    { const bool branch_taken = ctx.gpr[17] != 0u;
    // nop
      if (branch_taken) {
          goto L_0892C414;
      }
      goto L_0892C3CC;
    }
L_0892C3CC:
    ctx.set_gpr(3, rt.memory().aot_load32(ctx.gpr[21] + static_cast<std::uint32_t>(192)));
    ctx.set_gpr(2, ctx.gpr[20] + ctx.gpr[18]);
    ctx.set_gpr(1, static_cast<std::int32_t>(ctx.gpr[3]) < static_cast<std::int32_t>(ctx.gpr[2]) ? 1u : 0u);
    { const bool branch_taken = ctx.gpr[1] == 0u;
    // nop
      if (branch_taken) {
          goto L_0892C3E4;
      }
      goto L_0892C3E0;
    }
L_0892C3E0:
    ctx.set_gpr(20, ctx.gpr[3] - ctx.gpr[18]);
    goto L_0892C3E4;
L_0892C3E4:
    ctx.set_gpr(4, rt.memory().aot_load32(ctx.gpr[21] + static_cast<std::uint32_t>(132)));
    ctx.set_gpr(5, ctx.gpr[30] + 0u);
    ctx.set_gpr(6, ctx.gpr[20] + 0u);
    ctx.set_gpr(7, 0u + static_cast<std::uint32_t>(1));
    ctx.set_gpr(25, rt.memory().aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(0)));
    ctx.set_gpr(25, rt.memory().aot_load32(ctx.gpr[25] + static_cast<std::uint32_t>(108)));
    jump_target = ctx.gpr[25];
    ctx.set_gpr(31, 0x0892C404u);
    // nop
    ctx.pc = jump_target;
    if (rt.invoke_chained_call(ctx, &aot_mem) && ctx.pc == 0x0892C404u) goto L_0892C404;
    return;
L_0892C404:
    { const std::int64_t product = static_cast<std::int64_t>(static_cast<std::int32_t>(ctx.gpr[20])) * static_cast<std::int64_t>(static_cast<std::int32_t>(ctx.gpr[2])); ctx.lo = static_cast<std::uint32_t>(product); ctx.hi = static_cast<std::uint32_t>(static_cast<std::uint64_t>(product) >> 32u); }
    ctx.set_gpr(2, ctx.lo);
    ctx.set_gpr(18, ctx.gpr[18] + ctx.gpr[2]);
    ctx.set_gpr(17, ctx.gpr[20] + 0u);
    goto L_0892C414;
L_0892C414:
    ctx.set_gpr(2, rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(60)));
    ctx.set_gpr(16, ctx.gpr[2] - ctx.gpr[22]);
    ctx.set_gpr(1, static_cast<std::int32_t>(ctx.gpr[16]) < static_cast<std::int32_t>(ctx.gpr[17]) ? 1u : 0u);
    { const bool branch_taken = ctx.gpr[1] == 0u;
    // nop
      if (branch_taken) {
          goto L_0892C430;
      }
      goto L_0892C428;
    }
L_0892C428:
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_0892C434;
      }
      goto L_0892C430;
    }
L_0892C430:
    ctx.set_gpr(16, ctx.gpr[17] + 0u);
    goto L_0892C434;
L_0892C434:
    ctx.set_gpr(5, ctx.gpr[30] + ctx.gpr[19]);
    ctx.set_gpr(4, ctx.gpr[23] + 0u);
    ctx.set_gpr(6, ctx.gpr[16] + 0u);
    ctx.set_gpr(31, 0x0892C448u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0003_entry, 3u, 662u, 0x08812B08u>(ctx, &aot_mem) && ctx.pc == 0x0892C448u) goto L_0892C448;
    return;
L_0892C448:
    ctx.set_gpr(23, ctx.gpr[23] + ctx.gpr[16]);
    ctx.set_gpr(3, ctx.gpr[19] + ctx.gpr[16]);
    { const std::int32_t dividend = static_cast<std::int32_t>(ctx.gpr[3]); const std::int32_t divisor = static_cast<std::int32_t>(ctx.gpr[20]); if (divisor == 0) { ctx.lo = dividend >= 0 ? 0xFFFFFFFFu : 1u; ctx.hi = static_cast<std::uint32_t>(dividend); } else if (dividend == static_cast<std::int32_t>(0x80000000u) && divisor == -1) { ctx.lo = 0x80000000u; ctx.hi = 0u; } else { ctx.lo = static_cast<std::uint32_t>(dividend / divisor); ctx.hi = static_cast<std::uint32_t>(dividend % divisor); } }
    ctx.set_gpr(19, ctx.hi);
    ctx.set_gpr(17, ctx.gpr[17] - ctx.gpr[16]);
    ctx.set_gpr(22, ctx.gpr[22] + ctx.gpr[16]);
    goto L_0892C460;
L_0892C460:
    ctx.set_gpr(3, rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(60)));
    ctx.set_gpr(3, static_cast<std::int32_t>(ctx.gpr[22]) < static_cast<std::int32_t>(ctx.gpr[3]) ? 1u : 0u);
    { const bool branch_taken = ctx.gpr[3] != 0u;
    // nop
      if (branch_taken) {
          goto L_0892C3C4;
      }
      goto L_0892C470;
    }
L_0892C470:
    ctx.set_gpr(5, ctx.gpr[19] + 0u);
    { const bool branch_taken = static_cast<std::int32_t>(ctx.gpr[20]) <= 0;
    // nop
      if (branch_taken) {
          goto L_0892C490;
      }
      goto L_0892C47C;
    }
L_0892C47C:
    ctx.set_gpr(4, ctx.gpr[19] + static_cast<std::uint32_t>(3));
    ctx.set_gpr(3, 0u + static_cast<std::uint32_t>(-4));
    ctx.set_gpr(3, ctx.gpr[4] & ctx.gpr[3]);
    { const std::int32_t dividend = static_cast<std::int32_t>(ctx.gpr[3]); const std::int32_t divisor = static_cast<std::int32_t>(ctx.gpr[20]); if (divisor == 0) { ctx.lo = dividend >= 0 ? 0xFFFFFFFFu : 1u; ctx.hi = static_cast<std::uint32_t>(dividend); } else if (dividend == static_cast<std::int32_t>(0x80000000u) && divisor == -1) { ctx.lo = 0x80000000u; ctx.hi = 0u; } else { ctx.lo = static_cast<std::uint32_t>(dividend / divisor); ctx.hi = static_cast<std::uint32_t>(dividend % divisor); } }
    ctx.set_gpr(19, ctx.hi);
    goto L_0892C490;
L_0892C490:
    ctx.set_gpr(3, ctx.gpr[19] - ctx.gpr[5]);
    ctx.set_gpr(17, ctx.gpr[17] - ctx.gpr[3]);
    ctx.set_gpr(1, static_cast<std::int32_t>(ctx.gpr[19]) < static_cast<std::int32_t>(ctx.gpr[5]) ? 1u : 0u);
    { const bool branch_taken = ctx.gpr[1] == 0u;
    // nop
      if (branch_taken) {
          goto L_0892C4A8;
      }
      goto L_0892C4A4;
    }
L_0892C4A4:
    ctx.set_gpr(17, 0u + 0u);
    goto L_0892C4A8;
L_0892C4A8:
    rt.memory().aot_store32(ctx.gpr[21] + static_cast<std::uint32_t>(300), ctx.gpr[20]);
    rt.memory().aot_store32(ctx.gpr[21] + static_cast<std::uint32_t>(296), ctx.gpr[19]);
    rt.memory().aot_store32(ctx.gpr[21] + static_cast<std::uint32_t>(308), ctx.gpr[18]);
    rt.memory().aot_store32(ctx.gpr[21] + static_cast<std::uint32_t>(312), ctx.gpr[17]);
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
L_0892C4EC:
    jump_target = ctx.gpr[31];
    // nop
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_0892C4F4:
    ctx.set_gpr(29, ctx.gpr[29] + static_cast<std::uint32_t>(-16));
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(12), ctx.gpr[31]);
    ctx.set_gpr(25, rt.memory().aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(0)));
    ctx.set_gpr(25, rt.memory().aot_load32(ctx.gpr[25] + static_cast<std::uint32_t>(136)));
    jump_target = ctx.gpr[25];
    ctx.set_gpr(31, 0x0892C50Cu);
    // nop
    ctx.pc = jump_target;
    if (rt.invoke_chained_call(ctx, &aot_mem) && ctx.pc == 0x0892C50Cu) goto L_0892C50C;
    return;
L_0892C50C:
    ctx.set_gpr(31, rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(12)));
    ctx.set_gpr(29, ctx.gpr[29] + static_cast<std::uint32_t>(16));
    jump_target = ctx.gpr[31];
    // nop
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_0892C51C:
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
    ctx.set_gpr(20, ctx.gpr[5] + 0u);
    ctx.set_gpr(4, ctx.gpr[20] + 0u);
    ctx.set_gpr(5, rt.memory().aot_load32(ctx.gpr[21] + static_cast<std::uint32_t>(40)));
    ctx.set_gpr(31, 0x0892C55Cu);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0072_entry, 72u, 61u, 0x08924400u>(ctx, &aot_mem) && ctx.pc == 0x0892C55Cu) goto L_0892C55C;
    return;
L_0892C55C:
    ctx.set_gpr(19, ctx.gpr[2] + 0u);
    { const bool branch_taken = ctx.gpr[19] != 0u;
    // nop
      if (branch_taken) {
          goto L_0892C578;
      }
      goto L_0892C568;
    }
L_0892C568:
    ctx.set_gpr(3, 0u + static_cast<std::uint32_t>(1));
    rt.memory().aot_store8(ctx.gpr[20] + static_cast<std::uint32_t>(316), static_cast<std::uint8_t>(ctx.gpr[3]));
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_0892C688;
      }
      goto L_0892C578;
    }
L_0892C578:
    rt.memory().aot_store32(ctx.gpr[21] + static_cast<std::uint32_t>(36), ctx.gpr[19]);
    ctx.set_gpr(4, ctx.gpr[19] + 0u);
    ctx.set_gpr(2, 2245u << 16u);
    ctx.set_gpr(5, rt.memory().aot_load32(ctx.gpr[2] + static_cast<std::uint32_t>(27024)));
    ctx.set_gpr(31, 0x0892C590u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0080_entry, 80u, 857u, 0x08947F8Cu>(ctx, &aot_mem) && ctx.pc == 0x0892C590u) goto L_0892C590;
    return;
L_0892C590:
    ctx.set_gpr(2, 0u < ctx.gpr[2] ? 1u : 0u);
    ctx.set_gpr(2, ctx.gpr[2] ^ 1u);
    { const bool branch_taken = ctx.gpr[2] == 0u;
    // nop
      if (branch_taken) {
          goto L_0892C5D4;
      }
      goto L_0892C5A0;
    }
L_0892C5A0:
    ctx.set_gpr(2, rt.memory().aot_load8(ctx.gpr[20] + static_cast<std::uint32_t>(204)));
    { const bool branch_taken = ctx.gpr[2] == 0u;
    // nop
      if (branch_taken) {
          goto L_0892C5D4;
      }
      goto L_0892C5AC;
    }
L_0892C5AC:
    ctx.set_gpr(3, rt.memory().aot_load32(ctx.gpr[21] + static_cast<std::uint32_t>(28)));
    ctx.set_gpr(2, rt.memory().aot_load16(ctx.gpr[19] + static_cast<std::uint32_t>(20)));
    { const std::int32_t dividend = static_cast<std::int32_t>(ctx.gpr[3]); const std::int32_t divisor = static_cast<std::int32_t>(ctx.gpr[2]); if (divisor == 0) { ctx.lo = dividend >= 0 ? 0xFFFFFFFFu : 1u; ctx.hi = static_cast<std::uint32_t>(dividend); } else if (dividend == static_cast<std::int32_t>(0x80000000u) && divisor == -1) { ctx.lo = 0x80000000u; ctx.hi = 0u; } else { ctx.lo = static_cast<std::uint32_t>(dividend / divisor); ctx.hi = static_cast<std::uint32_t>(dividend % divisor); } }
    ctx.set_gpr(6, ctx.lo);
    ctx.set_gpr(4, ctx.gpr[19] + 0u);
    ctx.set_gpr(5, rt.memory().aot_load32(ctx.gpr[21] + static_cast<std::uint32_t>(24)));
    ctx.set_gpr(25, rt.memory().aot_load32(ctx.gpr[19] + static_cast<std::uint32_t>(0)));
    ctx.set_gpr(25, rt.memory().aot_load32(ctx.gpr[25] + static_cast<std::uint32_t>(220)));
    jump_target = ctx.gpr[25];
    ctx.set_gpr(31, 0x0892C5D4u);
    // nop
    ctx.pc = jump_target;
    if (rt.invoke_chained_call(ctx, &aot_mem) && ctx.pc == 0x0892C5D4u) goto L_0892C5D4;
    return;
L_0892C5D4:
    ctx.set_gpr(4, ctx.gpr[19] + 0u);
    ctx.set_gpr(2, 2245u << 16u);
    ctx.set_gpr(5, rt.memory().aot_load32(ctx.gpr[2] + static_cast<std::uint32_t>(27024)));
    ctx.set_gpr(31, 0x0892C5E8u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0080_entry, 80u, 857u, 0x08947F8Cu>(ctx, &aot_mem) && ctx.pc == 0x0892C5E8u) goto L_0892C5E8;
    return;
L_0892C5E8:
    { const bool branch_taken = ctx.gpr[2] == 0u;
    // nop
      if (branch_taken) {
          goto L_0892C688;
      }
      goto L_0892C5F0;
    }
L_0892C5F0:
    ctx.set_gpr(17, rt.memory().aot_load16(ctx.gpr[19] + static_cast<std::uint32_t>(20)));
    ctx.set_gpr(2, rt.memory().aot_load32(ctx.gpr[21] + static_cast<std::uint32_t>(28)));
    { const std::int32_t dividend = static_cast<std::int32_t>(ctx.gpr[2]); const std::int32_t divisor = static_cast<std::int32_t>(ctx.gpr[17]); if (divisor == 0) { ctx.lo = dividend >= 0 ? 0xFFFFFFFFu : 1u; ctx.hi = static_cast<std::uint32_t>(dividend); } else if (dividend == static_cast<std::int32_t>(0x80000000u) && divisor == -1) { ctx.lo = 0x80000000u; ctx.hi = 0u; } else { ctx.lo = static_cast<std::uint32_t>(dividend / divisor); ctx.hi = static_cast<std::uint32_t>(dividend % divisor); } }
    ctx.set_gpr(22, ctx.lo);
    ctx.set_gpr(23, rt.memory().aot_load32(ctx.gpr[21] + static_cast<std::uint32_t>(24)));
    ctx.set_gpr(18, 0u + 0u);
    ctx.set_gpr(4, ctx.gpr[19] + 0u);
    ctx.set_gpr(2, 2245u << 16u);
    ctx.set_gpr(5, rt.memory().aot_load32(ctx.gpr[2] + static_cast<std::uint32_t>(26984)));
    ctx.set_gpr(31, 0x0892C61Cu);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0080_entry, 80u, 857u, 0x08947F8Cu>(ctx, &aot_mem) && ctx.pc == 0x0892C61Cu) goto L_0892C61C;
    return;
L_0892C61C:
    ctx.set_gpr(16, ctx.gpr[2] & 255u);
    { const bool branch_taken = ctx.gpr[16] == 0u;
    // nop
      if (branch_taken) {
          goto L_0892C634;
      }
      goto L_0892C628;
    }
L_0892C628:
    ctx.set_gpr(18, rt.memory().aot_load8(ctx.gpr[19] + static_cast<std::uint32_t>(56)));
    ctx.set_gpr(3, rt.memory().aot_load8(ctx.gpr[21] + static_cast<std::uint32_t>(52)));
    rt.memory().aot_store8(ctx.gpr[19] + static_cast<std::uint32_t>(56), static_cast<std::uint8_t>(ctx.gpr[3]));
    goto L_0892C634;
L_0892C634:
    ctx.set_gpr(21, 0u + 0u);
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_0892C670;
      }
      goto L_0892C640;
    }
L_0892C640:
    { const std::int64_t product = static_cast<std::int64_t>(static_cast<std::int32_t>(ctx.gpr[21])) * static_cast<std::int64_t>(static_cast<std::int32_t>(ctx.gpr[17])); ctx.lo = static_cast<std::uint32_t>(product); ctx.hi = static_cast<std::uint32_t>(static_cast<std::uint64_t>(product) >> 32u); }
    ctx.set_gpr(2, ctx.lo);
    ctx.set_gpr(5, ctx.gpr[23] + ctx.gpr[2]);
    ctx.set_gpr(4, ctx.gpr[19] + 0u);
    ctx.set_gpr(6, ctx.gpr[5] + 0u);
    ctx.set_gpr(7, ctx.gpr[20] + 0u);
    ctx.set_gpr(8, rt.memory().aot_load8(ctx.gpr[20] + static_cast<std::uint32_t>(204)));
    ctx.set_gpr(25, rt.memory().aot_load32(ctx.gpr[19] + static_cast<std::uint32_t>(0)));
    ctx.set_gpr(25, rt.memory().aot_load32(ctx.gpr[25] + static_cast<std::uint32_t>(216)));
    jump_target = ctx.gpr[25];
    ctx.set_gpr(31, 0x0892C66Cu);
    // nop
    ctx.pc = jump_target;
    if (rt.invoke_chained_call(ctx, &aot_mem) && ctx.pc == 0x0892C66Cu) goto L_0892C66C;
    return;
L_0892C66C:
    ctx.set_gpr(21, ctx.gpr[21] + static_cast<std::uint32_t>(1));
    goto L_0892C670;
L_0892C670:
    ctx.set_gpr(3, static_cast<std::int32_t>(ctx.gpr[21]) < static_cast<std::int32_t>(ctx.gpr[22]) ? 1u : 0u);
    { const bool branch_taken = ctx.gpr[3] != 0u;
    // nop
      if (branch_taken) {
          goto L_0892C640;
      }
      goto L_0892C67C;
    }
L_0892C67C:
    { const bool branch_taken = ctx.gpr[16] == 0u;
    // nop
      if (branch_taken) {
          goto L_0892C688;
      }
      goto L_0892C684;
    }
L_0892C684:
    rt.memory().aot_store8(ctx.gpr[19] + static_cast<std::uint32_t>(56), static_cast<std::uint8_t>(ctx.gpr[18]));
    goto L_0892C688;
L_0892C688:
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
L_0892C6B8:
    rt.memory().aot_store32(ctx.gpr[4] + static_cast<std::uint32_t>(48), ctx.gpr[5]);
    jump_target = ctx.gpr[31];
    // nop
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_0892C6C4:
    ctx.set_gpr(2, rt.memory().aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(48)));
    jump_target = ctx.gpr[31];
    // nop
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_0892C6D0:
    ctx.set_gpr(2, rt.memory().aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(28)));
    jump_target = ctx.gpr[31];
    // nop
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_0892C6DC:
    ctx.set_gpr(29, ctx.gpr[29] + static_cast<std::uint32_t>(-32));
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(28), ctx.gpr[31]);
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(24), ctx.gpr[20]);
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(20), ctx.gpr[19]);
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(16), ctx.gpr[18]);
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(12), ctx.gpr[17]);
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(8), ctx.gpr[16]);
    ctx.set_gpr(20, ctx.gpr[4] + 0u);
    ctx.set_gpr(19, ctx.gpr[5] + 0u);
    ctx.set_gpr(4, rt.memory().aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(36)));
    ctx.set_gpr(2, 2245u << 16u);
    ctx.set_gpr(5, rt.memory().aot_load32(ctx.gpr[2] + static_cast<std::uint32_t>(27024)));
    ctx.set_gpr(31, 0x0892C714u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0080_entry, 80u, 857u, 0x08947F8Cu>(ctx, &aot_mem) && ctx.pc == 0x0892C714u) goto L_0892C714;
    return;
L_0892C714:
    { const bool branch_taken = ctx.gpr[2] == 0u;
    // nop
      if (branch_taken) {
          goto L_0892C770;
      }
      goto L_0892C71C;
    }
L_0892C71C:
    ctx.set_gpr(18, rt.memory().aot_load32(ctx.gpr[20] + static_cast<std::uint32_t>(36)));
    ctx.set_gpr(4, rt.memory().aot_load16(ctx.gpr[18] + static_cast<std::uint32_t>(20)));
    ctx.set_gpr(3, rt.memory().aot_load32(ctx.gpr[20] + static_cast<std::uint32_t>(28)));
    { const std::int32_t dividend = static_cast<std::int32_t>(ctx.gpr[3]); const std::int32_t divisor = static_cast<std::int32_t>(ctx.gpr[4]); if (divisor == 0) { ctx.lo = dividend >= 0 ? 0xFFFFFFFFu : 1u; ctx.hi = static_cast<std::uint32_t>(dividend); } else if (dividend == static_cast<std::int32_t>(0x80000000u) && divisor == -1) { ctx.lo = 0x80000000u; ctx.hi = 0u; } else { ctx.lo = static_cast<std::uint32_t>(dividend / divisor); ctx.hi = static_cast<std::uint32_t>(dividend % divisor); } }
    ctx.set_gpr(16, ctx.lo);
    ctx.set_gpr(17, 0u + 0u);
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_0892C764;
      }
      goto L_0892C73C;
    }
L_0892C73C:
    ctx.set_gpr(3, ctx.gpr[17] << 2u);
    ctx.set_gpr(2, rt.memory().aot_load32(ctx.gpr[20] + static_cast<std::uint32_t>(24)));
    ctx.set_gpr(5, ctx.gpr[2] + ctx.gpr[3]);
    ctx.set_gpr(4, ctx.gpr[19] + 0u);
    ctx.set_gpr(6, ctx.gpr[18] + 0u);
    ctx.set_gpr(25, rt.memory().aot_load32(ctx.gpr[19] + static_cast<std::uint32_t>(0)));
    ctx.set_gpr(25, rt.memory().aot_load32(ctx.gpr[25] + static_cast<std::uint32_t>(108)));
    jump_target = ctx.gpr[25];
    ctx.set_gpr(31, 0x0892C760u);
    // nop
    ctx.pc = jump_target;
    if (rt.invoke_chained_call(ctx, &aot_mem) && ctx.pc == 0x0892C760u) goto L_0892C760;
    return;
L_0892C760:
    ctx.set_gpr(17, ctx.gpr[17] + static_cast<std::uint32_t>(1));
    goto L_0892C764;
L_0892C764:
    ctx.set_gpr(3, static_cast<std::int32_t>(ctx.gpr[17]) < static_cast<std::int32_t>(ctx.gpr[16]) ? 1u : 0u);
    { const bool branch_taken = ctx.gpr[3] != 0u;
    // nop
      if (branch_taken) {
          goto L_0892C73C;
      }
      goto L_0892C770;
    }
L_0892C770:
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
L_0892C794:
    ctx.set_gpr(29, ctx.gpr[29] + static_cast<std::uint32_t>(-16));
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(12), ctx.gpr[31]);
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(8), ctx.gpr[16]);
    ctx.set_gpr(16, ctx.gpr[4] + 0u);
    ctx.set_gpr(4, 2228u << 16u);
    ctx.set_gpr(4, ctx.gpr[4] + static_cast<std::uint32_t>(-11348));
    ctx.set_gpr(31, 0x0892C7B4u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0081_entry, 81u, 869u, 0x0894BF18u>(ctx, &aot_mem) && ctx.pc == 0x0892C7B4u) goto L_0892C7B4;
    return;
L_0892C7B4:
    ctx.set_gpr(31, 0x0892C7BCu);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0082_entry, 82u, 28u, 0x0894C1E0u>(ctx, &aot_mem) && ctx.pc == 0x0892C7BCu) goto L_0892C7BC;
    return;
L_0892C7BC:
    ctx.set_gpr(4, ctx.gpr[16] + 0u);
    ctx.set_gpr(31, 0x0892C7C8u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0067_entry, 67u, 71u, 0x089104BCu>(ctx, &aot_mem) && ctx.pc == 0x0892C7C8u) goto L_0892C7C8;
    return;
L_0892C7C8:
    ctx.set_gpr(31, rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(12)));
    ctx.set_gpr(16, rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(8)));
    ctx.set_gpr(29, ctx.gpr[29] + static_cast<std::uint32_t>(16));
    jump_target = ctx.gpr[31];
    // nop
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_0892C7DC:
    ctx.set_gpr(29, ctx.gpr[29] + static_cast<std::uint32_t>(-16));
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(12), ctx.gpr[31]);
    ctx.set_gpr(31, 0x0892C7ECu);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0078_entry, 78u, 215u, 0x0893CDCCu>(ctx, &aot_mem) && ctx.pc == 0x0892C7ECu) goto L_0892C7EC;
    return;
L_0892C7EC:
    ctx.set_gpr(4, rt.memory().aot_load32(ctx.gpr[2] + static_cast<std::uint32_t>(0)));
    ctx.set_gpr(31, 0x0892C7F8u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0078_entry, 78u, 199u, 0x0893CC68u>(ctx, &aot_mem) && ctx.pc == 0x0892C7F8u) goto L_0892C7F8;
    return;
L_0892C7F8:
    ctx.set_gpr(4, ctx.gpr[2] + 0u);
    ctx.set_gpr(31, 0x0892C804u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0058_entry, 58u, 569u, 0x088EF0FCu>(ctx, &aot_mem) && ctx.pc == 0x0892C804u) goto L_0892C804;
    return;
L_0892C804:
    ctx.set_gpr(3, 2245u << 16u);
    rt.memory().aot_store32(ctx.gpr[3] + static_cast<std::uint32_t>(30800), ctx.gpr[2]);
    ctx.set_gpr(31, rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(12)));
    ctx.set_gpr(29, ctx.gpr[29] + static_cast<std::uint32_t>(16));
    jump_target = ctx.gpr[31];
    // nop
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_0892C81C:
    ctx.set_gpr(29, ctx.gpr[29] + static_cast<std::uint32_t>(-16));
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(12), ctx.gpr[31]);
    ctx.set_gpr(2, 2245u << 16u);
    ctx.set_gpr(4, rt.memory().aot_load32(ctx.gpr[2] + static_cast<std::uint32_t>(30800)));
    ctx.set_gpr(2, rt.memory().aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(4)));
    ctx.set_gpr(2, ctx.gpr[2] + static_cast<std::uint32_t>(-1));
    rt.memory().aot_store32(ctx.gpr[4] + static_cast<std::uint32_t>(4), ctx.gpr[2]);
    ctx.set_gpr(2, ctx.gpr[2] << 10u);
    ctx.set_gpr(2, ctx.gpr[2] >> 10u);
    { const bool branch_taken = ctx.gpr[2] != 0u;
    // nop
      if (branch_taken) {
          goto L_0892C850;
      }
      goto L_0892C848;
    }
L_0892C848:
    ctx.set_gpr(31, 0x0892C850u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0080_entry, 80u, 556u, 0x089467C8u>(ctx, &aot_mem) && ctx.pc == 0x0892C850u) goto L_0892C850;
    return;
L_0892C850:
    ctx.set_gpr(2, 2245u << 16u);
    rt.memory().aot_store32(ctx.gpr[2] + static_cast<std::uint32_t>(30800), 0u);
    ctx.set_gpr(4, 0u + 0u);
    ctx.set_gpr(31, 0x0892C864u);
    // nop
    goto L_0892CD40;
L_0892C864:
    ctx.set_gpr(31, rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(12)));
    ctx.set_gpr(29, ctx.gpr[29] + static_cast<std::uint32_t>(16));
    jump_target = ctx.gpr[31];
    // nop
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_0892C874:
    ctx.set_gpr(29, ctx.gpr[29] + static_cast<std::uint32_t>(-32));
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(12), ctx.gpr[31]);
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(8), ctx.gpr[18]);
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(4), ctx.gpr[17]);
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(0), ctx.gpr[16]);
    ctx.set_gpr(18, ctx.gpr[4] + 0u);
    ctx.set_gpr(17, ctx.gpr[5] + 0u);
    ctx.set_gpr(16, ctx.gpr[6] + 0u);
    ctx.set_gpr(31, 0x0892C89Cu);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0058_entry, 58u, 599u, 0x088EF3B0u>(ctx, &aot_mem) && ctx.pc == 0x0892C89Cu) goto L_0892C89C;
    return;
L_0892C89C:
    { const bool branch_taken = ctx.gpr[17] == 0u;
    // nop
      if (branch_taken) {
          goto L_0892C94C;
      }
      goto L_0892C8A4;
    }
L_0892C8A4:
    ctx.set_gpr(2, 2245u << 16u);
    ctx.set_gpr(4, rt.memory().aot_load32(ctx.gpr[2] + static_cast<std::uint32_t>(30800)));
    ctx.set_gpr(31, 0x0892C8B4u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0081_entry, 81u, 41u, 0x0894835Cu>(ctx, &aot_mem) && ctx.pc == 0x0892C8B4u) goto L_0892C8B4;
    return;
L_0892C8B4:
    ctx.set_gpr(4, ctx.gpr[2] + 0u);
    ctx.set_gpr(31, 0x0892C8C0u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0058_entry, 58u, 547u, 0x088EEEC8u>(ctx, &aot_mem) && ctx.pc == 0x0892C8C0u) goto L_0892C8C0;
    return;
L_0892C8C0:
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(28), ctx.gpr[2]);
    ctx.set_gpr(4, ctx.gpr[2] + 0u);
    ctx.set_gpr(5, ctx.gpr[18] + 0u);
    ctx.set_gpr(31, 0x0892C8D4u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0080_entry, 80u, 351u, 0x08945908u>(ctx, &aot_mem) && ctx.pc == 0x0892C8D4u) goto L_0892C8D4;
    return;
L_0892C8D4:
    ctx.set_gpr(2, rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(28)));
    rt.memory().aot_store32(ctx.gpr[2] + static_cast<std::uint32_t>(16), ctx.gpr[16]);
    rt.memory().aot_store32(ctx.gpr[2] + static_cast<std::uint32_t>(12), ctx.gpr[17]);
    ctx.set_gpr(2, 2245u << 16u);
    ctx.set_gpr(4, rt.memory().aot_load32(ctx.gpr[2] + static_cast<std::uint32_t>(30804)));
    { const bool branch_taken = ctx.gpr[4] == 0u;
    // nop
      if (branch_taken) {
          goto L_0892C904;
      }
      goto L_0892C8F0;
    }
L_0892C8F0:
    ctx.set_gpr(5, 0u + static_cast<std::uint32_t>(1));
    ctx.set_gpr(25, rt.memory().aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(0)));
    ctx.set_gpr(25, rt.memory().aot_load32(ctx.gpr[25] + static_cast<std::uint32_t>(132)));
    jump_target = ctx.gpr[25];
    ctx.set_gpr(31, 0x0892C904u);
    // nop
    ctx.pc = jump_target;
    if (rt.invoke_chained_call(ctx, &aot_mem) && ctx.pc == 0x0892C904u) goto L_0892C904;
    return;
L_0892C904:
    ctx.set_gpr(5, rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(28)));
    ctx.set_gpr(2, 2245u << 16u);
    ctx.set_gpr(4, rt.memory().aot_load32(ctx.gpr[2] + static_cast<std::uint32_t>(30800)));
    ctx.set_gpr(31, 0x0892C918u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0081_entry, 81u, 299u, 0x089494E0u>(ctx, &aot_mem) && ctx.pc == 0x0892C918u) goto L_0892C918;
    return;
L_0892C918:
    ctx.set_gpr(3, 2245u << 16u);
    ctx.set_gpr(4, rt.memory().aot_load32(ctx.gpr[3] + static_cast<std::uint32_t>(30804)));
    { const bool branch_taken = ctx.gpr[4] == 0u;
    // nop
      if (branch_taken) {
          goto L_0892C938;
      }
      goto L_0892C928;
    }
L_0892C928:
    ctx.set_gpr(25, rt.memory().aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(0)));
    ctx.set_gpr(25, rt.memory().aot_load32(ctx.gpr[25] + static_cast<std::uint32_t>(124)));
    jump_target = ctx.gpr[25];
    ctx.set_gpr(31, 0x0892C938u);
    // nop
    ctx.pc = jump_target;
    if (rt.invoke_chained_call(ctx, &aot_mem) && ctx.pc == 0x0892C938u) goto L_0892C938;
    return;
L_0892C938:
    ctx.set_gpr(4, rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(28)));
    { const bool branch_taken = ctx.gpr[4] == 0u;
    // nop
      if (branch_taken) {
          goto L_0892C94C;
      }
      goto L_0892C944;
    }
L_0892C944:
    ctx.set_gpr(31, 0x0892C94Cu);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0014_entry, 14u, 257u, 0x0883D454u>(ctx, &aot_mem) && ctx.pc == 0x0892C94Cu) goto L_0892C94C;
    return;
L_0892C94C:
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
L_0892C968:
    ctx.set_gpr(29, ctx.gpr[29] + static_cast<std::uint32_t>(-32));
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(12), ctx.gpr[31]);
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(8), ctx.gpr[17]);
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(4), ctx.gpr[16]);
    ctx.set_gpr(17, ctx.gpr[4] + 0u);
    ctx.set_gpr(16, ctx.gpr[5] + 0u);
    ctx.set_gpr(3, 2245u << 16u);
    ctx.set_gpr(3, rt.memory().aot_load32(ctx.gpr[3] + static_cast<std::uint32_t>(30800)));
    { const bool branch_taken = ctx.gpr[3] != 0u;
    // nop
      if (branch_taken) {
          goto L_0892C99C;
      }
      goto L_0892C990;
    }
L_0892C990:
    rt.memory().aot_store32(ctx.gpr[17] + static_cast<std::uint32_t>(0), 0u);
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_0892CB58;
      }
      goto L_0892C99C;
    }
L_0892C99C:
    ctx.set_gpr(2, 2245u << 16u);
    ctx.set_gpr(4, rt.memory().aot_load32(ctx.gpr[2] + static_cast<std::uint32_t>(30804)));
    { const bool branch_taken = ctx.gpr[4] == 0u;
    // nop
      if (branch_taken) {
          goto L_0892C9C0;
      }
      goto L_0892C9AC;
    }
L_0892C9AC:
    ctx.set_gpr(5, 0u + static_cast<std::uint32_t>(1));
    ctx.set_gpr(25, rt.memory().aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(0)));
    ctx.set_gpr(25, rt.memory().aot_load32(ctx.gpr[25] + static_cast<std::uint32_t>(132)));
    jump_target = ctx.gpr[25];
    ctx.set_gpr(31, 0x0892C9C0u);
    // nop
    ctx.pc = jump_target;
    if (rt.invoke_chained_call(ctx, &aot_mem) && ctx.pc == 0x0892C9C0u) goto L_0892C9C0;
    return;
L_0892C9C0:
    ctx.set_gpr(2, 2245u << 16u);
    ctx.set_gpr(4, rt.memory().aot_load32(ctx.gpr[2] + static_cast<std::uint32_t>(30800)));
    ctx.set_gpr(2, 2245u << 16u);
    ctx.set_gpr(5, rt.memory().aot_load32(ctx.gpr[2] + static_cast<std::uint32_t>(29116)));
    ctx.set_gpr(6, ctx.gpr[16] + 0u);
    ctx.set_gpr(31, 0x0892C9DCu);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0081_entry, 81u, 381u, 0x08949B00u>(ctx, &aot_mem) && ctx.pc == 0x0892C9DCu) goto L_0892C9DC;
    return;
L_0892C9DC:
    { const bool branch_taken = ctx.gpr[2] != 0u;
    // nop
      if (branch_taken) {
          goto L_0892CA10;
      }
      goto L_0892C9E4;
    }
L_0892C9E4:
    ctx.set_gpr(3, 2245u << 16u);
    ctx.set_gpr(4, rt.memory().aot_load32(ctx.gpr[3] + static_cast<std::uint32_t>(30804)));
    { const bool branch_taken = ctx.gpr[4] == 0u;
    // nop
      if (branch_taken) {
          goto L_0892CA04;
      }
      goto L_0892C9F4;
    }
L_0892C9F4:
    ctx.set_gpr(25, rt.memory().aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(0)));
    ctx.set_gpr(25, rt.memory().aot_load32(ctx.gpr[25] + static_cast<std::uint32_t>(124)));
    jump_target = ctx.gpr[25];
    ctx.set_gpr(31, 0x0892CA04u);
    // nop
    ctx.pc = jump_target;
    if (rt.invoke_chained_call(ctx, &aot_mem) && ctx.pc == 0x0892CA04u) goto L_0892CA04;
    return;
L_0892CA04:
    rt.memory().aot_store32(ctx.gpr[17] + static_cast<std::uint32_t>(0), 0u);
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_0892CB58;
      }
      goto L_0892CA10;
    }
L_0892CA10:
    ctx.set_gpr(3, rt.memory().aot_load32(ctx.gpr[2] + static_cast<std::uint32_t>(8)));
    ctx.set_gpr(2, 0u + static_cast<std::uint32_t>(-2));
    ctx.set_gpr(16, ctx.gpr[3] & ctx.gpr[2]);
    { const bool branch_taken = ctx.gpr[16] == 0u;
    // nop
      if (branch_taken) {
          goto L_0892CA2C;
      }
      goto L_0892CA24;
    }
L_0892CA24:
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_0892CA34;
      }
      goto L_0892CA2C;
    }
L_0892CA2C:
    ctx.set_gpr(16, 2225u << 16u);
    ctx.set_gpr(16, ctx.gpr[16] + static_cast<std::uint32_t>(8240));
    goto L_0892CA34;
L_0892CA34:
    { const bool branch_taken = ctx.gpr[16] != 0u;
    // nop
      if (branch_taken) {
          goto L_0892CA48;
      }
      goto L_0892CA3C;
    }
L_0892CA3C:
    ctx.set_gpr(2, 0u + 0u);
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_0892CA94;
      }
      goto L_0892CA48;
    }
L_0892CA48:
    ctx.set_gpr(2, 2245u << 16u);
    ctx.set_gpr(2, rt.memory().aot_load32(ctx.gpr[2] + static_cast<std::uint32_t>(30776)));
    { const bool branch_taken = ctx.gpr[2] != 0u;
    // nop
      if (branch_taken) {
          goto L_0892CA80;
      }
      goto L_0892CA58;
    }
L_0892CA58:
    ctx.set_gpr(4, 0u + static_cast<std::uint32_t>(16));
    ctx.set_gpr(31, 0x0892CA64u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0072_entry, 72u, 788u, 0x089277A0u>(ctx, &aot_mem) && ctx.pc == 0x0892CA64u) goto L_0892CA64;
    return;
L_0892CA64:
    { const bool branch_taken = ctx.gpr[2] == 0u;
    // nop
      if (branch_taken) {
          goto L_0892CA78;
      }
      goto L_0892CA6C;
    }
L_0892CA6C:
    ctx.set_gpr(4, ctx.gpr[2] + 0u);
    ctx.set_gpr(31, 0x0892CA78u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0072_entry, 72u, 762u, 0x089275E8u>(ctx, &aot_mem) && ctx.pc == 0x0892CA78u) goto L_0892CA78;
    return;
L_0892CA78:
    ctx.set_gpr(3, 2245u << 16u);
    rt.memory().aot_store32(ctx.gpr[3] + static_cast<std::uint32_t>(30776), ctx.gpr[2]);
    goto L_0892CA80;
L_0892CA80:
    ctx.set_gpr(2, 2245u << 16u);
    ctx.set_gpr(4, rt.memory().aot_load32(ctx.gpr[2] + static_cast<std::uint32_t>(30776)));
    ctx.set_gpr(5, ctx.gpr[16] + 0u);
    ctx.set_gpr(31, 0x0892CA94u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0072_entry, 72u, 784u, 0x08927768u>(ctx, &aot_mem) && ctx.pc == 0x0892CA94u) goto L_0892CA94;
    return;
L_0892CA94:
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(28), ctx.gpr[2]);
    ctx.set_gpr(2, 2245u << 16u);
    ctx.set_gpr(4, rt.memory().aot_load32(ctx.gpr[2] + static_cast<std::uint32_t>(30804)));
    { const bool branch_taken = ctx.gpr[4] == 0u;
    // nop
      if (branch_taken) {
          goto L_0892CAB8;
      }
      goto L_0892CAA8;
    }
L_0892CAA8:
    ctx.set_gpr(25, rt.memory().aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(0)));
    ctx.set_gpr(25, rt.memory().aot_load32(ctx.gpr[25] + static_cast<std::uint32_t>(124)));
    jump_target = ctx.gpr[25];
    ctx.set_gpr(31, 0x0892CAB8u);
    // nop
    ctx.pc = jump_target;
    if (rt.invoke_chained_call(ctx, &aot_mem) && ctx.pc == 0x0892CAB8u) goto L_0892CAB8;
    return;
L_0892CAB8:
    ctx.set_gpr(3, rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(28)));
    rt.memory().aot_store32(ctx.gpr[17] + static_cast<std::uint32_t>(0), ctx.gpr[3]);
    ctx.set_gpr(4, 0u + 0u);
    { const bool branch_taken = ctx.gpr[3] == 0u;
    // nop
      if (branch_taken) {
          goto L_0892CAE8;
      }
      goto L_0892CACC;
    }
L_0892CACC:
    ctx.set_gpr(2, ctx.gpr[3] & 1u);
    ctx.set_gpr(2, ctx.gpr[2] ^ 1u);
    ctx.set_gpr(2, ctx.gpr[2] < static_cast<std::uint32_t>(1) ? 1u : 0u);
    ctx.set_gpr(2, ctx.gpr[2] ^ 1u);
    { const bool branch_taken = ctx.gpr[2] == 0u;
    // nop
      if (branch_taken) {
          goto L_0892CAE8;
      }
      goto L_0892CAE4;
    }
L_0892CAE4:
    ctx.set_gpr(4, 0u + static_cast<std::uint32_t>(1));
    goto L_0892CAE8;
L_0892CAE8:
    { const bool branch_taken = ctx.gpr[4] == 0u;
    // nop
      if (branch_taken) {
          goto L_0892CAFC;
      }
      goto L_0892CAF0;
    }
L_0892CAF0:
    ctx.set_gpr(2, rt.memory().aot_load32(ctx.gpr[3] + static_cast<std::uint32_t>(-4)));
    ctx.set_gpr(2, ctx.gpr[2] + static_cast<std::uint32_t>(1));
    rt.memory().aot_store32(ctx.gpr[3] + static_cast<std::uint32_t>(-4), ctx.gpr[2]);
    goto L_0892CAFC;
L_0892CAFC:
    ctx.set_gpr(4, 0u + 0u);
    ctx.set_gpr(3, rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(28)));
    { const bool branch_taken = ctx.gpr[3] == 0u;
    // nop
      if (branch_taken) {
          goto L_0892CB28;
      }
      goto L_0892CB0C;
    }
L_0892CB0C:
    ctx.set_gpr(2, ctx.gpr[3] & 1u);
    ctx.set_gpr(2, ctx.gpr[2] ^ 1u);
    ctx.set_gpr(2, ctx.gpr[2] < static_cast<std::uint32_t>(1) ? 1u : 0u);
    ctx.set_gpr(2, ctx.gpr[2] ^ 1u);
    { const bool branch_taken = ctx.gpr[2] == 0u;
    // nop
      if (branch_taken) {
          goto L_0892CB28;
      }
      goto L_0892CB24;
    }
L_0892CB24:
    ctx.set_gpr(4, 0u + static_cast<std::uint32_t>(1));
    goto L_0892CB28;
L_0892CB28:
    { const bool branch_taken = ctx.gpr[4] == 0u;
    // nop
      if (branch_taken) {
          goto L_0892CB54;
      }
      goto L_0892CB30;
    }
L_0892CB30:
    ctx.set_gpr(5, ctx.gpr[3] + static_cast<std::uint32_t>(-8));
    ctx.set_gpr(2, rt.memory().aot_load32(ctx.gpr[3] + static_cast<std::uint32_t>(-4)));
    ctx.set_gpr(2, ctx.gpr[2] + static_cast<std::uint32_t>(-1));
    rt.memory().aot_store32(ctx.gpr[3] + static_cast<std::uint32_t>(-4), ctx.gpr[2]);
    { const bool branch_taken = ctx.gpr[2] != 0u;
    // nop
      if (branch_taken) {
          goto L_0892CB54;
      }
      goto L_0892CB48;
    }
L_0892CB48:
    ctx.set_gpr(4, rt.memory().aot_load32(ctx.gpr[5] + static_cast<std::uint32_t>(0)));
    ctx.set_gpr(31, 0x0892CB54u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0085_entry, 85u, 887u, 0x0895BD2Cu>(ctx, &aot_mem) && ctx.pc == 0x0892CB54u) goto L_0892CB54;
    return;
L_0892CB54:
    ctx.set_gpr(2, 0u + 0u);
    goto L_0892CB58;
L_0892CB58:
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
L_0892CB70:
    ctx.set_gpr(29, ctx.gpr[29] + static_cast<std::uint32_t>(-16));
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(12), ctx.gpr[31]);
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(8), ctx.gpr[18]);
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(4), ctx.gpr[17]);
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(0), ctx.gpr[16]);
    ctx.set_gpr(18, ctx.gpr[4] + 0u);
    ctx.set_gpr(17, ctx.gpr[5] + 0u);
    ctx.set_gpr(16, ctx.gpr[6] + 0u);
    rt.memory().aot_store32(ctx.gpr[5] + static_cast<std::uint32_t>(0), 0u);
    rt.memory().aot_store32(ctx.gpr[6] + static_cast<std::uint32_t>(0), 0u);
    ctx.set_gpr(3, 2245u << 16u);
    ctx.set_gpr(3, rt.memory().aot_load32(ctx.gpr[3] + static_cast<std::uint32_t>(30800)));
    { const bool branch_taken = ctx.gpr[3] == 0u;
    // nop
      if (branch_taken) {
          goto L_0892CC48;
      }
      goto L_0892CBA8;
    }
L_0892CBA8:
    ctx.set_gpr(2, 2245u << 16u);
    ctx.set_gpr(4, rt.memory().aot_load32(ctx.gpr[2] + static_cast<std::uint32_t>(30804)));
    { const bool branch_taken = ctx.gpr[4] == 0u;
    // nop
      if (branch_taken) {
          goto L_0892CBCC;
      }
      goto L_0892CBB8;
    }
L_0892CBB8:
    ctx.set_gpr(5, 0u + static_cast<std::uint32_t>(1));
    ctx.set_gpr(25, rt.memory().aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(0)));
    ctx.set_gpr(25, rt.memory().aot_load32(ctx.gpr[25] + static_cast<std::uint32_t>(132)));
    jump_target = ctx.gpr[25];
    ctx.set_gpr(31, 0x0892CBCCu);
    // nop
    ctx.pc = jump_target;
    if (rt.invoke_chained_call(ctx, &aot_mem) && ctx.pc == 0x0892CBCCu) goto L_0892CBCC;
    return;
L_0892CBCC:
    ctx.set_gpr(2, 2245u << 16u);
    ctx.set_gpr(4, rt.memory().aot_load32(ctx.gpr[2] + static_cast<std::uint32_t>(30800)));
    ctx.set_gpr(2, 2245u << 16u);
    ctx.set_gpr(5, rt.memory().aot_load32(ctx.gpr[2] + static_cast<std::uint32_t>(28892)));
    ctx.set_gpr(6, ctx.gpr[18] + 0u);
    ctx.set_gpr(31, 0x0892CBE8u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0081_entry, 81u, 359u, 0x089499ACu>(ctx, &aot_mem) && ctx.pc == 0x0892CBE8u) goto L_0892CBE8;
    return;
L_0892CBE8:
    { const bool branch_taken = ctx.gpr[2] != 0u;
    // nop
      if (branch_taken) {
          goto L_0892CC18;
      }
      goto L_0892CBF0;
    }
L_0892CBF0:
    ctx.set_gpr(3, 2245u << 16u);
    ctx.set_gpr(4, rt.memory().aot_load32(ctx.gpr[3] + static_cast<std::uint32_t>(30804)));
    { const bool branch_taken = ctx.gpr[4] == 0u;
    // nop
      if (branch_taken) {
          goto L_0892CC10;
      }
      goto L_0892CC00;
    }
L_0892CC00:
    ctx.set_gpr(25, rt.memory().aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(0)));
    ctx.set_gpr(25, rt.memory().aot_load32(ctx.gpr[25] + static_cast<std::uint32_t>(124)));
    jump_target = ctx.gpr[25];
    ctx.set_gpr(31, 0x0892CC10u);
    // nop
    ctx.pc = jump_target;
    if (rt.invoke_chained_call(ctx, &aot_mem) && ctx.pc == 0x0892CC10u) goto L_0892CC10;
    return;
L_0892CC10:
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_0892CC48;
      }
      goto L_0892CC18;
    }
L_0892CC18:
    ctx.set_gpr(3, rt.memory().aot_load32(ctx.gpr[2] + static_cast<std::uint32_t>(12)));
    rt.memory().aot_store32(ctx.gpr[17] + static_cast<std::uint32_t>(0), ctx.gpr[3]);
    ctx.set_gpr(3, rt.memory().aot_load32(ctx.gpr[2] + static_cast<std::uint32_t>(16)));
    rt.memory().aot_store32(ctx.gpr[16] + static_cast<std::uint32_t>(0), ctx.gpr[3]);
    ctx.set_gpr(3, 2245u << 16u);
    ctx.set_gpr(4, rt.memory().aot_load32(ctx.gpr[3] + static_cast<std::uint32_t>(30804)));
    { const bool branch_taken = ctx.gpr[4] == 0u;
    // nop
      if (branch_taken) {
          goto L_0892CC48;
      }
      goto L_0892CC38;
    }
L_0892CC38:
    ctx.set_gpr(25, rt.memory().aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(0)));
    ctx.set_gpr(25, rt.memory().aot_load32(ctx.gpr[25] + static_cast<std::uint32_t>(124)));
    jump_target = ctx.gpr[25];
    ctx.set_gpr(31, 0x0892CC48u);
    // nop
    ctx.pc = jump_target;
    if (rt.invoke_chained_call(ctx, &aot_mem) && ctx.pc == 0x0892CC48u) goto L_0892CC48;
    return;
L_0892CC48:
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
L_0892CC64:
    ctx.set_gpr(29, ctx.gpr[29] + static_cast<std::uint32_t>(-16));
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(12), ctx.gpr[31]);
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(8), ctx.gpr[16]);
    ctx.set_gpr(16, ctx.gpr[4] + 0u);
    ctx.set_gpr(3, 2245u << 16u);
    ctx.set_gpr(3, rt.memory().aot_load32(ctx.gpr[3] + static_cast<std::uint32_t>(30800)));
    { const bool branch_taken = ctx.gpr[3] == 0u;
    // nop
      if (branch_taken) {
          goto L_0892CD2C;
      }
      goto L_0892CC84;
    }
L_0892CC84:
    ctx.set_gpr(2, 2245u << 16u);
    ctx.set_gpr(4, rt.memory().aot_load32(ctx.gpr[2] + static_cast<std::uint32_t>(30804)));
    { const bool branch_taken = ctx.gpr[4] == 0u;
    // nop
      if (branch_taken) {
          goto L_0892CCA8;
      }
      goto L_0892CC94;
    }
L_0892CC94:
    ctx.set_gpr(5, 0u + static_cast<std::uint32_t>(1));
    ctx.set_gpr(25, rt.memory().aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(0)));
    ctx.set_gpr(25, rt.memory().aot_load32(ctx.gpr[25] + static_cast<std::uint32_t>(132)));
    jump_target = ctx.gpr[25];
    ctx.set_gpr(31, 0x0892CCA8u);
    // nop
    ctx.pc = jump_target;
    if (rt.invoke_chained_call(ctx, &aot_mem) && ctx.pc == 0x0892CCA8u) goto L_0892CCA8;
    return;
L_0892CCA8:
    ctx.set_gpr(2, 2245u << 16u);
    ctx.set_gpr(4, rt.memory().aot_load32(ctx.gpr[2] + static_cast<std::uint32_t>(30800)));
    ctx.set_gpr(2, 2245u << 16u);
    ctx.set_gpr(5, rt.memory().aot_load32(ctx.gpr[2] + static_cast<std::uint32_t>(28892)));
    ctx.set_gpr(6, ctx.gpr[16] + 0u);
    ctx.set_gpr(31, 0x0892CCC4u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0081_entry, 81u, 359u, 0x089499ACu>(ctx, &aot_mem) && ctx.pc == 0x0892CCC4u) goto L_0892CCC4;
    return;
L_0892CCC4:
    ctx.set_gpr(5, ctx.gpr[2] + 0u);
    { const bool branch_taken = ctx.gpr[5] != 0u;
    // nop
      if (branch_taken) {
          goto L_0892CCF8;
      }
      goto L_0892CCD0;
    }
L_0892CCD0:
    ctx.set_gpr(3, 2245u << 16u);
    ctx.set_gpr(4, rt.memory().aot_load32(ctx.gpr[3] + static_cast<std::uint32_t>(30804)));
    { const bool branch_taken = ctx.gpr[4] == 0u;
    // nop
      if (branch_taken) {
          goto L_0892CCF0;
      }
      goto L_0892CCE0;
    }
L_0892CCE0:
    ctx.set_gpr(25, rt.memory().aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(0)));
    ctx.set_gpr(25, rt.memory().aot_load32(ctx.gpr[25] + static_cast<std::uint32_t>(124)));
    jump_target = ctx.gpr[25];
    ctx.set_gpr(31, 0x0892CCF0u);
    // nop
    ctx.pc = jump_target;
    if (rt.invoke_chained_call(ctx, &aot_mem) && ctx.pc == 0x0892CCF0u) goto L_0892CCF0;
    return;
L_0892CCF0:
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_0892CD2C;
      }
      goto L_0892CCF8;
    }
L_0892CCF8:
    ctx.set_gpr(2, 2245u << 16u);
    ctx.set_gpr(4, rt.memory().aot_load32(ctx.gpr[2] + static_cast<std::uint32_t>(30800)));
    ctx.set_gpr(6, 0u + 0u);
    ctx.set_gpr(31, 0x0892CD0Cu);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0081_entry, 81u, 346u, 0x08949868u>(ctx, &aot_mem) && ctx.pc == 0x0892CD0Cu) goto L_0892CD0C;
    return;
L_0892CD0C:
    ctx.set_gpr(3, 2245u << 16u);
    ctx.set_gpr(4, rt.memory().aot_load32(ctx.gpr[3] + static_cast<std::uint32_t>(30804)));
    { const bool branch_taken = ctx.gpr[4] == 0u;
    // nop
      if (branch_taken) {
          goto L_0892CD2C;
      }
      goto L_0892CD1C;
    }
L_0892CD1C:
    ctx.set_gpr(25, rt.memory().aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(0)));
    ctx.set_gpr(25, rt.memory().aot_load32(ctx.gpr[25] + static_cast<std::uint32_t>(124)));
    jump_target = ctx.gpr[25];
    ctx.set_gpr(31, 0x0892CD2Cu);
    // nop
    ctx.pc = jump_target;
    if (rt.invoke_chained_call(ctx, &aot_mem) && ctx.pc == 0x0892CD2Cu) goto L_0892CD2C;
    return;
L_0892CD2C:
    ctx.set_gpr(31, rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(12)));
    ctx.set_gpr(16, rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(8)));
    ctx.set_gpr(29, ctx.gpr[29] + static_cast<std::uint32_t>(16));
    jump_target = ctx.gpr[31];
    // nop
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_0892CD40:
    ctx.set_gpr(29, ctx.gpr[29] + static_cast<std::uint32_t>(-16));
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(12), ctx.gpr[31]);
    { const bool branch_taken = ctx.gpr[4] == 0u;
    // nop
      if (branch_taken) {
          goto L_0892CDA4;
      }
      goto L_0892CD50;
    }
L_0892CD50:
    ctx.set_gpr(3, 2245u << 16u);
    ctx.set_gpr(3, rt.memory().aot_load32(ctx.gpr[3] + static_cast<std::uint32_t>(30804)));
    { const bool branch_taken = ctx.gpr[3] != 0u;
    // nop
      if (branch_taken) {
          goto L_0892CE14;
      }
      goto L_0892CD60;
    }
L_0892CD60:
    ctx.set_gpr(31, 0x0892CD68u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0078_entry, 78u, 215u, 0x0893CDCCu>(ctx, &aot_mem) && ctx.pc == 0x0892CD68u) goto L_0892CD68;
    return;
L_0892CD68:
    ctx.set_gpr(4, rt.memory().aot_load32(ctx.gpr[2] + static_cast<std::uint32_t>(0)));
    ctx.set_gpr(31, 0x0892CD74u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0078_entry, 78u, 199u, 0x0893CC68u>(ctx, &aot_mem) && ctx.pc == 0x0892CD74u) goto L_0892CD74;
    return;
L_0892CD74:
    ctx.set_gpr(4, ctx.gpr[2] + 0u);
    ctx.set_gpr(31, 0x0892CD80u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0057_entry, 57u, 386u, 0x088E9CF8u>(ctx, &aot_mem) && ctx.pc == 0x0892CD80u) goto L_0892CD80;
    return;
L_0892CD80:
    ctx.set_gpr(3, 2245u << 16u);
    rt.memory().aot_store32(ctx.gpr[3] + static_cast<std::uint32_t>(30804), ctx.gpr[2]);
    ctx.set_gpr(4, ctx.gpr[2] + 0u);
    ctx.set_gpr(25, rt.memory().aot_load32(ctx.gpr[2] + static_cast<std::uint32_t>(0)));
    ctx.set_gpr(25, rt.memory().aot_load32(ctx.gpr[25] + static_cast<std::uint32_t>(92)));
    jump_target = ctx.gpr[25];
    ctx.set_gpr(31, 0x0892CD9Cu);
    // nop
    ctx.pc = jump_target;
    if (rt.invoke_chained_call(ctx, &aot_mem) && ctx.pc == 0x0892CD9Cu) goto L_0892CD9C;
    return;
L_0892CD9C:
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_0892CE14;
      }
      goto L_0892CDA4;
    }
L_0892CDA4:
    ctx.set_gpr(3, 2245u << 16u);
    ctx.set_gpr(4, rt.memory().aot_load32(ctx.gpr[3] + static_cast<std::uint32_t>(30804)));
    { const bool branch_taken = ctx.gpr[4] == 0u;
    // nop
      if (branch_taken) {
          goto L_0892CE14;
      }
      goto L_0892CDB4;
    }
L_0892CDB4:
    ctx.set_gpr(5, 0u + static_cast<std::uint32_t>(1));
    ctx.set_gpr(25, rt.memory().aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(0)));
    ctx.set_gpr(25, rt.memory().aot_load32(ctx.gpr[25] + static_cast<std::uint32_t>(132)));
    jump_target = ctx.gpr[25];
    ctx.set_gpr(31, 0x0892CDC8u);
    // nop
    ctx.pc = jump_target;
    if (rt.invoke_chained_call(ctx, &aot_mem) && ctx.pc == 0x0892CDC8u) goto L_0892CDC8;
    return;
L_0892CDC8:
    ctx.set_gpr(2, 2245u << 16u);
    ctx.set_gpr(4, rt.memory().aot_load32(ctx.gpr[2] + static_cast<std::uint32_t>(30804)));
    ctx.set_gpr(25, rt.memory().aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(0)));
    ctx.set_gpr(25, rt.memory().aot_load32(ctx.gpr[25] + static_cast<std::uint32_t>(96)));
    jump_target = ctx.gpr[25];
    ctx.set_gpr(31, 0x0892CDE0u);
    // nop
    ctx.pc = jump_target;
    if (rt.invoke_chained_call(ctx, &aot_mem) && ctx.pc == 0x0892CDE0u) goto L_0892CDE0;
    return;
L_0892CDE0:
    ctx.set_gpr(3, 2245u << 16u);
    ctx.set_gpr(4, rt.memory().aot_load32(ctx.gpr[3] + static_cast<std::uint32_t>(30804)));
    ctx.set_gpr(3, rt.memory().aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(4)));
    ctx.set_gpr(3, ctx.gpr[3] + static_cast<std::uint32_t>(-1));
    rt.memory().aot_store32(ctx.gpr[4] + static_cast<std::uint32_t>(4), ctx.gpr[3]);
    ctx.set_gpr(3, ctx.gpr[3] << 10u);
    ctx.set_gpr(3, ctx.gpr[3] >> 10u);
    { const bool branch_taken = ctx.gpr[3] != 0u;
    // nop
      if (branch_taken) {
          goto L_0892CE0C;
      }
      goto L_0892CE04;
    }
L_0892CE04:
    ctx.set_gpr(31, 0x0892CE0Cu);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0080_entry, 80u, 556u, 0x089467C8u>(ctx, &aot_mem) && ctx.pc == 0x0892CE0Cu) goto L_0892CE0C;
    return;
L_0892CE0C:
    ctx.set_gpr(3, 2245u << 16u);
    rt.memory().aot_store32(ctx.gpr[3] + static_cast<std::uint32_t>(30804), 0u);
    goto L_0892CE14;
L_0892CE14:
    ctx.set_gpr(31, rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(12)));
    ctx.set_gpr(29, ctx.gpr[29] + static_cast<std::uint32_t>(16));
    jump_target = ctx.gpr[31];
    // nop
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_0892CE24:
    jump_target = ctx.gpr[31];
    // nop
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_0892CE2C:
    ctx.set_gpr(29, ctx.gpr[29] + static_cast<std::uint32_t>(-32));
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(12), ctx.gpr[31]);
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(8), ctx.gpr[16]);
    ctx.set_gpr(16, ctx.gpr[4] + 0u);
    ctx.set_gpr(2, rt.memory().aot_load8(ctx.gpr[4] + static_cast<std::uint32_t>(44)));
    { const bool branch_taken = ctx.gpr[2] == 0u;
    // nop
      if (branch_taken) {
          goto L_0892CE54;
      }
      goto L_0892CE48;
    }
L_0892CE48:
    ctx.set_gpr(2, 0u + 0u);
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_0892CF08;
      }
      goto L_0892CE54;
    }
L_0892CE54:
    ctx.set_gpr(2, 0u + static_cast<std::uint32_t>(8));
    { const bool branch_taken = ctx.gpr[5] != ctx.gpr[2];
    // nop
      if (branch_taken) {
          goto L_0892CE64;
      }
      goto L_0892CE60;
    }
L_0892CE60:
    ctx.set_gpr(5, rt.memory().aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(20)));
    goto L_0892CE64;
L_0892CE64:
    ctx.set_gpr(1, ctx.gpr[5] < static_cast<std::uint32_t>(7) ? 1u : 0u);
    { const bool branch_taken = ctx.gpr[1] == 0u;
    // nop
      if (branch_taken) {
          goto L_0892CE98;
      }
      goto L_0892CE70;
    }
L_0892CE70:
    ctx.set_gpr(3, 2225u << 16u);
    ctx.set_gpr(3, ctx.gpr[3] + static_cast<std::uint32_t>(32564));
    ctx.set_gpr(2, ctx.gpr[5] << 2u);
    ctx.set_gpr(2, ctx.gpr[2] + ctx.gpr[3]);
    ctx.set_gpr(2, rt.memory().aot_load32(ctx.gpr[2] + static_cast<std::uint32_t>(0)));
    jump_target = ctx.gpr[2];
    // nop
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_0892CE8C:
    ctx.set_gpr(2, 0u + static_cast<std::uint32_t>(1));
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_0892CF08;
      }
      goto L_0892CE98;
    }
L_0892CE98:
    ctx.set_gpr(2, 0u + static_cast<std::uint32_t>(1));
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_0892CF08;
      }
      goto L_0892CEA4;
    }
L_0892CEA4:
    ctx.set_gpr(3, rt.memory().aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(12)));
    ctx.set_gpr(2, 0u + static_cast<std::uint32_t>(-2));
    ctx.set_gpr(4, ctx.gpr[3] & ctx.gpr[2]);
    ctx.set_gpr(5, ctx.gpr[29] + static_cast<std::uint32_t>(28));
    ctx.set_gpr(6, ctx.gpr[29] + static_cast<std::uint32_t>(24));
    ctx.set_gpr(31, 0x0892CEC0u);
    // nop
    goto L_0892CB70;
L_0892CEC0:
    ctx.set_gpr(2, rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(28)));
    { const bool branch_taken = ctx.gpr[2] != 0u;
    // nop
      if (branch_taken) {
          goto L_0892CEE0;
      }
      goto L_0892CECC;
    }
L_0892CECC:
    ctx.set_gpr(31, 0x0892CED4u);
    // nop
    goto L_0892CE24;
L_0892CED4:
    ctx.set_gpr(2, 0u + static_cast<std::uint32_t>(1));
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_0892CF08;
      }
      goto L_0892CEE0;
    }
L_0892CEE0:
    rt.memory().aot_store32(ctx.gpr[16] + static_cast<std::uint32_t>(56), 0u);
    ctx.set_gpr(2, rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(28)));
    rt.memory().aot_store32(ctx.gpr[16] + static_cast<std::uint32_t>(48), ctx.gpr[2]);
    ctx.set_gpr(2, rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(24)));
    rt.memory().aot_store32(ctx.gpr[16] + static_cast<std::uint32_t>(52), ctx.gpr[2]);
    ctx.set_gpr(2, 0u + static_cast<std::uint32_t>(1));
    rt.memory().aot_store8(ctx.gpr[16] + static_cast<std::uint32_t>(44), static_cast<std::uint8_t>(ctx.gpr[2]));
    ctx.set_gpr(2, rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(28)));
    rt.memory().aot_store32(ctx.gpr[16] + static_cast<std::uint32_t>(24), ctx.gpr[2]);
    ctx.set_gpr(2, 0u + 0u);
    goto L_0892CF08;
L_0892CF08:
    ctx.set_gpr(31, rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(12)));
    ctx.set_gpr(16, rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(8)));
    ctx.set_gpr(29, ctx.gpr[29] + static_cast<std::uint32_t>(32));
    jump_target = ctx.gpr[31];
    // nop
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_0892CF1C:
    rt.memory().aot_store8(ctx.gpr[4] + static_cast<std::uint32_t>(44), static_cast<std::uint8_t>(0u));
    jump_target = ctx.gpr[31];
    // nop
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_0892CF28:
    ctx.set_gpr(29, ctx.gpr[29] + static_cast<std::uint32_t>(-16));
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(12), ctx.gpr[31]);
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(8), ctx.gpr[17]);
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(4), ctx.gpr[16]);
    ctx.set_gpr(17, ctx.gpr[4] + 0u);
    ctx.set_gpr(16, ctx.gpr[6] + 0u);
    ctx.set_gpr(31, 0x0892CF48u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0070_entry, 70u, 228u, 0x0891D098u>(ctx, &aot_mem) && ctx.pc == 0x0892CF48u) goto L_0892CF48;
    return;
L_0892CF48:
    ctx.set_gpr(4, ctx.gpr[16] + 0u);
    ctx.set_gpr(5, ctx.gpr[28] + static_cast<std::uint32_t>(-32696));
    ctx.set_gpr(31, 0x0892CF58u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0004_entry, 4u, 480u, 0x08816610u>(ctx, &aot_mem) && ctx.pc == 0x0892CF58u) goto L_0892CF58;
    return;
L_0892CF58:
    { const bool branch_taken = ctx.gpr[2] != 0u;
    // nop
      if (branch_taken) {
          goto L_0892CF88;
      }
      goto L_0892CF60;
    }
L_0892CF60:
    ctx.set_gpr(4, ctx.gpr[17] + 0u);
    ctx.set_gpr(5, 0u + 0u);
    ctx.set_gpr(25, rt.memory().aot_load32(ctx.gpr[17] + static_cast<std::uint32_t>(0)));
    ctx.set_gpr(25, rt.memory().aot_load32(ctx.gpr[25] + static_cast<std::uint32_t>(92)));
    jump_target = ctx.gpr[25];
    ctx.set_gpr(31, 0x0892CF78u);
    // nop
    ctx.pc = jump_target;
    if (rt.invoke_chained_call(ctx, &aot_mem) && ctx.pc == 0x0892CF78u) goto L_0892CF78;
    return;
L_0892CF78:
    ctx.set_gpr(2, ctx.gpr[2] ^ 0u);
    ctx.set_gpr(2, ctx.gpr[2] < static_cast<std::uint32_t>(1) ? 1u : 0u);
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_0892CFD8;
      }
      goto L_0892CF88;
    }
L_0892CF88:
    ctx.set_gpr(4, ctx.gpr[16] + 0u);
    ctx.set_gpr(5, 2228u << 16u);
    ctx.set_gpr(5, ctx.gpr[5] + static_cast<std::uint32_t>(-11484));
    ctx.set_gpr(31, 0x0892CF9Cu);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0004_entry, 4u, 480u, 0x08816610u>(ctx, &aot_mem) && ctx.pc == 0x0892CF9Cu) goto L_0892CF9C;
    return;
L_0892CF9C:
    { const bool branch_taken = ctx.gpr[2] != 0u;
    // nop
      if (branch_taken) {
          goto L_0892CFCC;
      }
      goto L_0892CFA4;
    }
L_0892CFA4:
    ctx.set_gpr(4, ctx.gpr[17] + 0u);
    ctx.set_gpr(5, 0u + static_cast<std::uint32_t>(4));
    ctx.set_gpr(25, rt.memory().aot_load32(ctx.gpr[17] + static_cast<std::uint32_t>(0)));
    ctx.set_gpr(25, rt.memory().aot_load32(ctx.gpr[25] + static_cast<std::uint32_t>(92)));
    jump_target = ctx.gpr[25];
    ctx.set_gpr(31, 0x0892CFBCu);
    // nop
    ctx.pc = jump_target;
    if (rt.invoke_chained_call(ctx, &aot_mem) && ctx.pc == 0x0892CFBCu) goto L_0892CFBC;
    return;
L_0892CFBC:
    ctx.set_gpr(2, ctx.gpr[2] ^ 0u);
    ctx.set_gpr(2, ctx.gpr[2] < static_cast<std::uint32_t>(1) ? 1u : 0u);
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_0892CFD8;
      }
      goto L_0892CFCC;
    }
L_0892CFCC:
    ctx.set_gpr(2, 0u + 0u);
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_0892CFF0;
      }
      goto L_0892CFD8;
    }
L_0892CFD8:
    { const bool branch_taken = ctx.gpr[2] == 0u;
    // nop
      if (branch_taken) {
          goto L_0892CFE8;
      }
      goto L_0892CFE0;
    }
L_0892CFE0:
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_0892CFEC;
      }
      goto L_0892CFE8;
    }
L_0892CFE8:
    ctx.set_gpr(17, 0u + 0u);
    goto L_0892CFEC;
L_0892CFEC:
    ctx.set_gpr(2, ctx.gpr[17] + 0u);
    goto L_0892CFF0;
L_0892CFF0:
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
L_0892D008:
    ctx.set_gpr(29, ctx.gpr[29] + static_cast<std::uint32_t>(-16));
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(12), ctx.gpr[31]);
    ctx.set_gpr(25, rt.memory().aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(0)));
    ctx.set_gpr(25, rt.memory().aot_load32(ctx.gpr[25] + static_cast<std::uint32_t>(96)));
    jump_target = ctx.gpr[25];
    ctx.set_gpr(31, 0x0892D020u);
    // nop
    ctx.pc = jump_target;
    if (rt.invoke_chained_call(ctx, &aot_mem) && ctx.pc == 0x0892D020u) goto L_0892D020;
    return;
L_0892D020:
    ctx.set_gpr(31, rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(12)));
    ctx.set_gpr(29, ctx.gpr[29] + static_cast<std::uint32_t>(16));
    jump_target = ctx.gpr[31];
    // nop
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_0892D030:
    ctx.set_gpr(29, ctx.gpr[29] + static_cast<std::uint32_t>(-16));
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(12), ctx.gpr[31]);
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(8), ctx.gpr[18]);
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(4), ctx.gpr[17]);
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(0), ctx.gpr[16]);
    ctx.set_gpr(18, ctx.gpr[4] + 0u);
    ctx.set_gpr(17, ctx.gpr[6] + 0u);
    ctx.set_gpr(2, rt.memory().aot_load8(ctx.gpr[4] + static_cast<std::uint32_t>(44)));
    { const bool branch_taken = ctx.gpr[2] != 0u;
    // nop
      if (branch_taken) {
          goto L_0892D064;
      }
      goto L_0892D058;
    }
L_0892D058:
    ctx.set_gpr(2, 0u + static_cast<std::uint32_t>(-1));
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_0892D0CC;
      }
      goto L_0892D064;
    }
L_0892D064:
    { const std::int64_t product = static_cast<std::int64_t>(static_cast<std::int32_t>(ctx.gpr[17])) * static_cast<std::int64_t>(static_cast<std::int32_t>(ctx.gpr[7])); ctx.lo = static_cast<std::uint32_t>(product); ctx.hi = static_cast<std::uint32_t>(static_cast<std::uint64_t>(product) >> 32u); }
    ctx.set_gpr(16, ctx.lo);
    ctx.set_gpr(3, rt.memory().aot_load32(ctx.gpr[18] + static_cast<std::uint32_t>(56)));
    ctx.set_gpr(2, rt.memory().aot_load32(ctx.gpr[18] + static_cast<std::uint32_t>(52)));
    ctx.set_gpr(2, ctx.gpr[2] - ctx.gpr[3]);
    ctx.set_gpr(1, static_cast<std::int32_t>(ctx.gpr[2]) < static_cast<std::int32_t>(ctx.gpr[16]) ? 1u : 0u);
    { const bool branch_taken = ctx.gpr[1] == 0u;
    // nop
      if (branch_taken) {
          goto L_0892D088;
      }
      goto L_0892D084;
    }
L_0892D084:
    ctx.set_gpr(16, ctx.gpr[2] + 0u);
    goto L_0892D088;
L_0892D088:
    { const bool branch_taken = static_cast<std::int32_t>(ctx.gpr[16]) > 0;
    // nop
      if (branch_taken) {
          goto L_0892D09C;
      }
      goto L_0892D090;
    }
L_0892D090:
    ctx.set_gpr(2, 0u + 0u);
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_0892D0CC;
      }
      goto L_0892D09C;
    }
L_0892D09C:
    ctx.set_gpr(2, rt.memory().aot_load32(ctx.gpr[18] + static_cast<std::uint32_t>(48)));
    ctx.set_gpr(2, ctx.gpr[2] + ctx.gpr[3]);
    ctx.set_gpr(4, ctx.gpr[5] + 0u);
    ctx.set_gpr(5, ctx.gpr[2] + 0u);
    ctx.set_gpr(6, ctx.gpr[16] + 0u);
    ctx.set_gpr(31, 0x0892D0B8u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0003_entry, 3u, 662u, 0x08812B08u>(ctx, &aot_mem) && ctx.pc == 0x0892D0B8u) goto L_0892D0B8;
    return;
L_0892D0B8:
    ctx.set_gpr(2, rt.memory().aot_load32(ctx.gpr[18] + static_cast<std::uint32_t>(56)));
    ctx.set_gpr(2, ctx.gpr[2] + ctx.gpr[16]);
    rt.memory().aot_store32(ctx.gpr[18] + static_cast<std::uint32_t>(56), ctx.gpr[2]);
    { const std::int32_t dividend = static_cast<std::int32_t>(ctx.gpr[16]); const std::int32_t divisor = static_cast<std::int32_t>(ctx.gpr[17]); if (divisor == 0) { ctx.lo = dividend >= 0 ? 0xFFFFFFFFu : 1u; ctx.hi = static_cast<std::uint32_t>(dividend); } else if (dividend == static_cast<std::int32_t>(0x80000000u) && divisor == -1) { ctx.lo = 0x80000000u; ctx.hi = 0u; } else { ctx.lo = static_cast<std::uint32_t>(dividend / divisor); ctx.hi = static_cast<std::uint32_t>(dividend % divisor); } }
    ctx.set_gpr(2, ctx.lo);
    goto L_0892D0CC;
L_0892D0CC:
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
L_0892D0E8:
    ctx.set_gpr(2, 0u + static_cast<std::uint32_t>(-1));
    jump_target = ctx.gpr[31];
    // nop
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_0892D0F4:
    ctx.set_gpr(29, ctx.gpr[29] + static_cast<std::uint32_t>(-64));
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(40), ctx.gpr[6]);
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(44), ctx.gpr[7]);
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(48), ctx.gpr[8]);
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(52), ctx.gpr[9]);
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(56), ctx.gpr[10]);
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(60), ctx.gpr[11]);
    ctx.set_gpr(2, 0u + static_cast<std::uint32_t>(-1));
    ctx.set_gpr(29, ctx.gpr[29] + static_cast<std::uint32_t>(64));
    jump_target = ctx.gpr[31];
    // nop
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_0892D120:
    ctx.set_gpr(29, ctx.gpr[29] + static_cast<std::uint32_t>(-64));
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(40), ctx.gpr[6]);
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(44), ctx.gpr[7]);
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(48), ctx.gpr[8]);
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(52), ctx.gpr[9]);
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(56), ctx.gpr[10]);
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(60), ctx.gpr[11]);
    ctx.set_gpr(2, 0u + static_cast<std::uint32_t>(-1));
    ctx.set_gpr(29, ctx.gpr[29] + static_cast<std::uint32_t>(64));
    jump_target = ctx.gpr[31];
    // nop
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_0892D14C:
    ctx.set_gpr(2, 0u + 0u);
    jump_target = ctx.gpr[31];
    // nop
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_0892D158:
    ctx.set_gpr(2, rt.memory().aot_load8(ctx.gpr[4] + static_cast<std::uint32_t>(44)));
    { const bool branch_taken = ctx.gpr[2] != 0u;
    // nop
      if (branch_taken) {
          goto L_0892D170;
      }
      goto L_0892D164;
    }
L_0892D164:
    ctx.set_gpr(2, 0u + static_cast<std::uint32_t>(-1));
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_0892D1A4;
      }
      goto L_0892D170;
    }
L_0892D170:
    ctx.set_gpr(3, rt.memory().aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(56)));
    ctx.set_gpr(2, rt.memory().aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(52)));
    ctx.set_gpr(2, ctx.gpr[2] - ctx.gpr[3]);
    { const bool branch_taken = static_cast<std::int32_t>(ctx.gpr[2]) > 0;
    // nop
      if (branch_taken) {
          goto L_0892D190;
      }
      goto L_0892D184;
    }
L_0892D184:
    ctx.set_gpr(2, 0u + static_cast<std::uint32_t>(-1));
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_0892D1A4;
      }
      goto L_0892D190;
    }
L_0892D190:
    ctx.set_gpr(2, rt.memory().aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(48)));
    ctx.set_gpr(2, ctx.gpr[3] + ctx.gpr[2]);
    ctx.set_gpr(2, static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int8_t>(rt.memory().aot_load8(ctx.gpr[2] + static_cast<std::uint32_t>(0))))));
    ctx.set_gpr(3, ctx.gpr[3] + static_cast<std::uint32_t>(1));
    rt.memory().aot_store32(ctx.gpr[4] + static_cast<std::uint32_t>(56), ctx.gpr[3]);
    goto L_0892D1A4;
L_0892D1A4:
    jump_target = ctx.gpr[31];
    // nop
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_0892D1AC:
    ctx.set_gpr(2, 0u + static_cast<std::uint32_t>(-1));
    jump_target = ctx.gpr[31];
    // nop
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_0892D1B8:
    ctx.set_gpr(2, rt.memory().aot_load8(ctx.gpr[4] + static_cast<std::uint32_t>(44)));
    { const bool branch_taken = ctx.gpr[2] != 0u;
    // nop
      if (branch_taken) {
          goto L_0892D1D0;
      }
      goto L_0892D1C4;
    }
L_0892D1C4:
    ctx.set_gpr(2, 0u + 0u);
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_0892D274;
      }
      goto L_0892D1D0;
    }
L_0892D1D0:
    { const bool branch_taken = ctx.gpr[5] != 0u;
    // nop
      if (branch_taken) {
          goto L_0892D1E4;
      }
      goto L_0892D1D8;
    }
L_0892D1D8:
    ctx.set_gpr(2, 0u + 0u);
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_0892D274;
      }
      goto L_0892D1E4;
    }
L_0892D1E4:
    ctx.set_gpr(7, rt.memory().aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(52)));
    ctx.set_gpr(3, rt.memory().aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(56)));
    ctx.set_gpr(2, static_cast<std::int32_t>(ctx.gpr[3]) < static_cast<std::int32_t>(ctx.gpr[7]) ? 1u : 0u);
    { const bool branch_taken = ctx.gpr[2] != 0u;
    // nop
      if (branch_taken) {
          goto L_0892D204;
      }
      goto L_0892D1F8;
    }
L_0892D1F8:
    ctx.set_gpr(2, 0u + 0u);
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_0892D274;
      }
      goto L_0892D204;
    }
L_0892D204:
    ctx.set_gpr(8, 0u + 0u);
    ctx.set_gpr(6, ctx.gpr[6] + static_cast<std::uint32_t>(-1));
    ctx.set_gpr(2, ctx.gpr[6] + ctx.gpr[3]);
    ctx.set_gpr(2, static_cast<std::int32_t>(ctx.gpr[2]) < static_cast<std::int32_t>(ctx.gpr[7]) ? 1u : 0u);
    { const bool branch_taken = ctx.gpr[2] != 0u;
    // nop
      if (branch_taken) {
          goto L_0892D25C;
      }
      goto L_0892D21C;
    }
L_0892D21C:
    ctx.set_gpr(6, ctx.gpr[7] - ctx.gpr[3]);
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_0892D25C;
      }
      goto L_0892D228;
    }
L_0892D228:
    ctx.set_gpr(3, rt.memory().aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(56)));
    ctx.set_gpr(2, rt.memory().aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(48)));
    ctx.set_gpr(2, ctx.gpr[3] + ctx.gpr[2]);
    ctx.set_gpr(3, rt.memory().aot_load8(ctx.gpr[2] + static_cast<std::uint32_t>(0)));
    ctx.set_gpr(2, ctx.gpr[5] + ctx.gpr[8]);
    rt.memory().aot_store8(ctx.gpr[2] + static_cast<std::uint32_t>(0), static_cast<std::uint8_t>(ctx.gpr[3]));
    ctx.set_gpr(8, ctx.gpr[8] + static_cast<std::uint32_t>(1));
    ctx.set_gpr(2, rt.memory().aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(56)));
    ctx.set_gpr(2, ctx.gpr[2] + static_cast<std::uint32_t>(1));
    rt.memory().aot_store32(ctx.gpr[4] + static_cast<std::uint32_t>(56), ctx.gpr[2]);
    ctx.set_gpr(2, 0u + static_cast<std::uint32_t>(10));
    { const bool branch_taken = ctx.gpr[3] == ctx.gpr[2];
    // nop
      if (branch_taken) {
          goto L_0892D268;
      }
      goto L_0892D25C;
    }
L_0892D25C:
    ctx.set_gpr(2, static_cast<std::int32_t>(ctx.gpr[8]) < static_cast<std::int32_t>(ctx.gpr[6]) ? 1u : 0u);
    { const bool branch_taken = ctx.gpr[2] != 0u;
    // nop
      if (branch_taken) {
          goto L_0892D228;
      }
      goto L_0892D268;
    }
L_0892D268:
    ctx.set_gpr(2, ctx.gpr[5] + ctx.gpr[8]);
    rt.memory().aot_store8(ctx.gpr[2] + static_cast<std::uint32_t>(0), static_cast<std::uint8_t>(0u));
    ctx.set_gpr(2, ctx.gpr[5] + 0u);
    goto L_0892D274;
L_0892D274:
    jump_target = ctx.gpr[31];
    // nop
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_0892D27C:
    ctx.set_gpr(2, 0u + static_cast<std::uint32_t>(-1));
    jump_target = ctx.gpr[31];
    // nop
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_0892D288:
    ctx.set_gpr(2, 0u + static_cast<std::uint32_t>(2));
    { const bool branch_taken = ctx.gpr[6] == ctx.gpr[2];
    // nop
      if (branch_taken) {
          goto L_0892D2D0;
      }
      goto L_0892D294;
    }
L_0892D294:
    ctx.set_gpr(2, 0u + static_cast<std::uint32_t>(1));
    { const bool branch_taken = ctx.gpr[6] == ctx.gpr[2];
    // nop
      if (branch_taken) {
          goto L_0892D2BC;
      }
      goto L_0892D2A0;
    }
L_0892D2A0:
    { const bool branch_taken = ctx.gpr[6] == 0u;
    // nop
      if (branch_taken) {
          goto L_0892D2B0;
      }
      goto L_0892D2A8;
    }
L_0892D2A8:
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_0892D2DC;
      }
      goto L_0892D2B0;
    }
L_0892D2B0:
    rt.memory().aot_store32(ctx.gpr[4] + static_cast<std::uint32_t>(56), ctx.gpr[5]);
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_0892D2DC;
      }
      goto L_0892D2BC;
    }
L_0892D2BC:
    ctx.set_gpr(2, rt.memory().aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(56)));
    ctx.set_gpr(2, ctx.gpr[2] + ctx.gpr[5]);
    rt.memory().aot_store32(ctx.gpr[4] + static_cast<std::uint32_t>(56), ctx.gpr[2]);
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_0892D2DC;
      }
      goto L_0892D2D0;
    }
L_0892D2D0:
    ctx.set_gpr(2, rt.memory().aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(52)));
    ctx.set_gpr(2, ctx.gpr[2] + ctx.gpr[5]);
    rt.memory().aot_store32(ctx.gpr[4] + static_cast<std::uint32_t>(56), ctx.gpr[2]);
    goto L_0892D2DC;
L_0892D2DC:
    ctx.set_gpr(3, rt.memory().aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(56)));
    { const bool branch_taken = static_cast<std::int32_t>(ctx.gpr[3]) >= 0;
    // nop
      if (branch_taken) {
          goto L_0892D2F4;
      }
      goto L_0892D2E8;
    }
L_0892D2E8:
    ctx.set_gpr(2, 0u + static_cast<std::uint32_t>(-1));
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_0892D300;
      }
      goto L_0892D2F4;
    }
L_0892D2F4:
    ctx.set_gpr(2, rt.memory().aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(52)));
    ctx.set_gpr(2, static_cast<std::int32_t>(ctx.gpr[2]) < static_cast<std::int32_t>(ctx.gpr[3]) ? 1u : 0u);
    ctx.set_gpr(2, 0u - ctx.gpr[2]);
    goto L_0892D300;
L_0892D300:
    jump_target = ctx.gpr[31];
    // nop
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_0892D308:
    ctx.set_gpr(2, rt.memory().aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(56)));
    jump_target = ctx.gpr[31];
    // nop
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_0892D314:
    ctx.set_gpr(2, 0u + static_cast<std::uint32_t>(-1));
    jump_target = ctx.gpr[31];
    // nop
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_0892D320:
    ctx.set_gpr(29, ctx.gpr[29] + static_cast<std::uint32_t>(-16));
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(12), ctx.gpr[31]);
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(8), ctx.gpr[16]);
    ctx.set_gpr(16, ctx.gpr[4] + 0u);
    ctx.set_gpr(31, 0x0892D338u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0080_entry, 80u, 398u, 0x08945BF8u>(ctx, &aot_mem) && ctx.pc == 0x0892D338u) goto L_0892D338;
    return;
L_0892D338:
    ctx.set_gpr(2, 2232u << 16u);
    ctx.set_gpr(2, ctx.gpr[2] + static_cast<std::uint32_t>(-4296));
    rt.memory().aot_store32(ctx.gpr[16] + static_cast<std::uint32_t>(0), ctx.gpr[2]);
    rt.memory().aot_store32(ctx.gpr[16] + static_cast<std::uint32_t>(88), 0u);
    rt.memory().aot_store32(ctx.gpr[16] + static_cast<std::uint32_t>(152), 0u);
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
L_0892D364:
    ctx.set_gpr(29, ctx.gpr[29] + static_cast<std::uint32_t>(-16));
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(12), ctx.gpr[31]);
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(8), ctx.gpr[16]);
    ctx.set_gpr(16, ctx.gpr[4] + 0u);
    ctx.set_gpr(31, 0x0892D37Cu);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0080_entry, 80u, 410u, 0x08945D68u>(ctx, &aot_mem) && ctx.pc == 0x0892D37Cu) goto L_0892D37C;
    return;
L_0892D37C:
    ctx.set_gpr(2, 2232u << 16u);
    ctx.set_gpr(2, ctx.gpr[2] + static_cast<std::uint32_t>(-4296));
    rt.memory().aot_store32(ctx.gpr[16] + static_cast<std::uint32_t>(0), ctx.gpr[2]);
    rt.memory().aot_store32(ctx.gpr[16] + static_cast<std::uint32_t>(88), 0u);
    rt.memory().aot_store32(ctx.gpr[16] + static_cast<std::uint32_t>(152), 0u);
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
L_0892D3A8:
    ctx.set_gpr(29, ctx.gpr[29] + static_cast<std::uint32_t>(-16));
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(12), ctx.gpr[31]);
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(8), ctx.gpr[16]);
    ctx.set_gpr(16, ctx.gpr[4] + 0u);
    ctx.set_gpr(31, 0x0892D3C0u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0080_entry, 80u, 399u, 0x08945C64u>(ctx, &aot_mem) && ctx.pc == 0x0892D3C0u) goto L_0892D3C0;
    return;
L_0892D3C0:
    ctx.set_gpr(2, 2232u << 16u);
    ctx.set_gpr(2, ctx.gpr[2] + static_cast<std::uint32_t>(-4296));
    rt.memory().aot_store32(ctx.gpr[16] + static_cast<std::uint32_t>(0), ctx.gpr[2]);
    rt.memory().aot_store32(ctx.gpr[16] + static_cast<std::uint32_t>(88), 0u);
    rt.memory().aot_store32(ctx.gpr[16] + static_cast<std::uint32_t>(152), 0u);
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
L_0892D3EC:
    ctx.set_gpr(29, ctx.gpr[29] + static_cast<std::uint32_t>(-16));
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(12), ctx.gpr[31]);
    ctx.set_gpr(31, 0x0892D3FCu);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0080_entry, 80u, 424u, 0x08945E94u>(ctx, &aot_mem) && ctx.pc == 0x0892D3FCu) goto L_0892D3FC;
    return;
L_0892D3FC:
    ctx.set_gpr(31, rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(12)));
    ctx.set_gpr(29, ctx.gpr[29] + static_cast<std::uint32_t>(16));
    jump_target = ctx.gpr[31];
    // nop
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_0892D40C:
    ctx.set_gpr(29, ctx.gpr[29] + static_cast<std::uint32_t>(-16));
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(12), ctx.gpr[31]);
    ctx.set_gpr(4, ctx.gpr[5] + ctx.gpr[4]);
    ctx.set_gpr(31, 0x0892D420u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0003_entry, 3u, 487u, 0x0881201Cu>(ctx, &aot_mem) && ctx.pc == 0x0892D420u) goto L_0892D420;
    return;
L_0892D420:
    ctx.set_gpr(31, rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(12)));
    ctx.set_gpr(29, ctx.gpr[29] + static_cast<std::uint32_t>(16));
    jump_target = ctx.gpr[31];
    // nop
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_0892D430:
    ctx.set_gpr(29, ctx.gpr[29] + static_cast<std::uint32_t>(-16));
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(12), ctx.gpr[31]);
    ctx.set_gpr(31, 0x0892D440u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0003_entry, 3u, 489u, 0x08812048u>(ctx, &aot_mem) && ctx.pc == 0x0892D440u) goto L_0892D440;
    return;
L_0892D440:
    ctx.set_gpr(31, rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(12)));
    ctx.set_gpr(29, ctx.gpr[29] + static_cast<std::uint32_t>(16));
    jump_target = ctx.gpr[31];
    // nop
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_0892D450:
    ctx.set_gpr(29, ctx.gpr[29] + static_cast<std::uint32_t>(-16));
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(12), ctx.gpr[31]);
    ctx.set_gpr(5, rt.memory().aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(92)));
    ctx.set_gpr(25, rt.memory().aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(0)));
    ctx.set_gpr(25, rt.memory().aot_load32(ctx.gpr[25] + static_cast<std::uint32_t>(92)));
    jump_target = ctx.gpr[25];
    ctx.set_gpr(31, 0x0892D46Cu);
    // nop
    ctx.pc = jump_target;
    if (rt.invoke_chained_call(ctx, &aot_mem) && ctx.pc == 0x0892D46Cu) goto L_0892D46C;
    return;
L_0892D46C:
    ctx.set_gpr(31, rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(12)));
    ctx.set_gpr(29, ctx.gpr[29] + static_cast<std::uint32_t>(16));
    jump_target = ctx.gpr[31];
    // nop
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_0892D47C:
    ctx.set_gpr(2, rt.memory().aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(124)));
    jump_target = ctx.gpr[31];
    // nop
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_0892D488:
    ctx.set_gpr(29, ctx.gpr[29] + static_cast<std::uint32_t>(-32));
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(28), ctx.gpr[31]);
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(24), ctx.gpr[19]);
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(20), ctx.gpr[18]);
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(16), ctx.gpr[17]);
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(12), ctx.gpr[16]);
    ctx.set_gpr(19, ctx.gpr[4] + 0u);
    ctx.set_gpr(18, ctx.gpr[5] + 0u);
    ctx.set_gpr(17, ctx.gpr[6] + 0u);
    ctx.set_gpr(16, ctx.gpr[7] + 0u);
    ctx.set_gpr(2, rt.memory().aot_load8(ctx.gpr[4] + static_cast<std::uint32_t>(84)));
    { const bool branch_taken = ctx.gpr[2] == 0u;
    // nop
      if (branch_taken) {
          goto L_0892D510;
      }
      goto L_0892D4BC;
    }
L_0892D4BC:
    ctx.set_gpr(2, rt.memory().aot_load32(ctx.gpr[19] + static_cast<std::uint32_t>(144)));
    { const bool branch_taken = static_cast<std::int32_t>(ctx.gpr[2]) <= 0;
    // nop
      if (branch_taken) {
          goto L_0892D504;
      }
      goto L_0892D4C8;
    }
L_0892D4C8:
    ctx.set_gpr(5, 0u + 0u);
    ctx.set_gpr(25, rt.memory().aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(0)));
    ctx.set_gpr(25, rt.memory().aot_load32(ctx.gpr[25] + static_cast<std::uint32_t>(412)));
    jump_target = ctx.gpr[25];
    ctx.set_gpr(31, 0x0892D4DCu);
    // nop
    ctx.pc = jump_target;
    if (rt.invoke_chained_call(ctx, &aot_mem) && ctx.pc == 0x0892D4DCu) goto L_0892D4DC;
    return;
L_0892D4DC:
    ctx.set_gpr(4, ctx.gpr[19] + 0u);
    ctx.set_gpr(25, rt.memory().aot_load32(ctx.gpr[19] + static_cast<std::uint32_t>(0)));
    ctx.set_gpr(25, rt.memory().aot_load32(ctx.gpr[25] + static_cast<std::uint32_t>(464)));
    jump_target = ctx.gpr[25];
    ctx.set_gpr(31, 0x0892D4F0u);
    // nop
    ctx.pc = jump_target;
    if (rt.invoke_chained_call(ctx, &aot_mem) && ctx.pc == 0x0892D4F0u) goto L_0892D4F0;
    return;
L_0892D4F0:
    ctx.set_gpr(4, 2228u << 16u);
    ctx.set_gpr(4, ctx.gpr[4] + static_cast<std::uint32_t>(-11068));
    ctx.set_gpr(5, ctx.gpr[2] + 0u);
    ctx.set_gpr(31, 0x0892D504u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0084_entry, 84u, 456u, 0x08955F2Cu>(ctx, &aot_mem) && ctx.pc == 0x0892D504u) goto L_0892D504;
    return;
L_0892D504:
    ctx.set_gpr(2, 0u + static_cast<std::uint32_t>(1));
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_0892D5B0;
      }
      goto L_0892D510;
    }
L_0892D510:
    rt.memory().aot_store32(ctx.gpr[19] + static_cast<std::uint32_t>(124), ctx.gpr[18]);
    rt.memory().aot_store32(ctx.gpr[19] + static_cast<std::uint32_t>(100), ctx.gpr[17]);
    rt.memory().aot_store8(ctx.gpr[19] + static_cast<std::uint32_t>(136), static_cast<std::uint8_t>(ctx.gpr[16]));
    ctx.set_gpr(5, 0u + 0u);
    ctx.set_gpr(31, 0x0892D528u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0075_entry, 75u, 282u, 0x08932008u>(ctx, &aot_mem) && ctx.pc == 0x0892D528u) goto L_0892D528;
    return;
L_0892D528:
    ctx.set_gpr(2, 0u < ctx.gpr[16] ? 1u : 0u);
    ctx.set_gpr(2, ctx.gpr[2] ^ 1u);
    rt.memory().aot_store8(ctx.gpr[19] + static_cast<std::uint32_t>(205), static_cast<std::uint8_t>(ctx.gpr[2]));
    rt.memory().aot_store32(ctx.gpr[19] + static_cast<std::uint32_t>(128), ctx.gpr[18]);
    ctx.set_gpr(2, ctx.gpr[18] + ctx.gpr[17]);
    rt.memory().aot_store32(ctx.gpr[19] + static_cast<std::uint32_t>(132), ctx.gpr[2]);
    ctx.set_gpr(4, ctx.gpr[19] + 0u);
    ctx.set_gpr(25, rt.memory().aot_load32(ctx.gpr[19] + static_cast<std::uint32_t>(0)));
    ctx.set_gpr(25, rt.memory().aot_load32(ctx.gpr[25] + static_cast<std::uint32_t>(256)));
    jump_target = ctx.gpr[25];
    ctx.set_gpr(31, 0x0892D554u);
    // nop
    ctx.pc = jump_target;
    if (rt.invoke_chained_call(ctx, &aot_mem) && ctx.pc == 0x0892D554u) goto L_0892D554;
    return;
L_0892D554:
    { const bool branch_taken = ctx.gpr[2] == 0u;
    // nop
      if (branch_taken) {
          goto L_0892D584;
      }
      goto L_0892D55C;
    }
L_0892D55C:
    { const bool branch_taken = ctx.gpr[16] == 0u;
    // nop
      if (branch_taken) {
          goto L_0892D574;
      }
      goto L_0892D564;
    }
L_0892D564:
    ctx.set_gpr(2, 0u + static_cast<std::uint32_t>(12289));
    rt.memory().aot_store32(ctx.gpr[19] + static_cast<std::uint32_t>(76), ctx.gpr[2]);
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_0892D5A4;
      }
      goto L_0892D574;
    }
L_0892D574:
    ctx.set_gpr(2, 0u + static_cast<std::uint32_t>(12288));
    rt.memory().aot_store32(ctx.gpr[19] + static_cast<std::uint32_t>(76), ctx.gpr[2]);
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_0892D5A4;
      }
      goto L_0892D584;
    }
L_0892D584:
    { const bool branch_taken = ctx.gpr[16] == 0u;
    // nop
      if (branch_taken) {
          goto L_0892D59C;
      }
      goto L_0892D58C;
    }
L_0892D58C:
    ctx.set_gpr(2, 0u + static_cast<std::uint32_t>(4097));
    rt.memory().aot_store32(ctx.gpr[19] + static_cast<std::uint32_t>(76), ctx.gpr[2]);
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_0892D5A4;
      }
      goto L_0892D59C;
    }
L_0892D59C:
    ctx.set_gpr(2, 0u + static_cast<std::uint32_t>(4096));
    rt.memory().aot_store32(ctx.gpr[19] + static_cast<std::uint32_t>(76), ctx.gpr[2]);
    goto L_0892D5A4;
L_0892D5A4:
    ctx.set_gpr(31, 0x0892D5ACu);
    // nop
    goto L_0892E2C8;
L_0892D5AC:
    ctx.set_gpr(2, 0u + 0u);
    goto L_0892D5B0;
L_0892D5B0:
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
L_0892D5D0:
    ctx.set_gpr(29, ctx.gpr[29] + static_cast<std::uint32_t>(-16));
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(12), ctx.gpr[31]);
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(8), ctx.gpr[18]);
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(4), ctx.gpr[17]);
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(0), ctx.gpr[16]);
    ctx.set_gpr(18, ctx.gpr[4] + 0u);
    ctx.set_gpr(17, ctx.gpr[5] + 0u);
    ctx.set_gpr(16, 0u + 0u);
    ctx.set_gpr(2, rt.memory().aot_load8(ctx.gpr[4] + static_cast<std::uint32_t>(84)));
    { const bool branch_taken = ctx.gpr[2] == 0u;
    // nop
      if (branch_taken) {
          goto L_0892D650;
      }
      goto L_0892D5FC;
    }
L_0892D5FC:
    ctx.set_gpr(2, rt.memory().aot_load32(ctx.gpr[18] + static_cast<std::uint32_t>(144)));
    { const bool branch_taken = static_cast<std::int32_t>(ctx.gpr[2]) <= 0;
    // nop
      if (branch_taken) {
          goto L_0892D644;
      }
      goto L_0892D608;
    }
L_0892D608:
    ctx.set_gpr(5, 0u + 0u);
    ctx.set_gpr(25, rt.memory().aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(0)));
    ctx.set_gpr(25, rt.memory().aot_load32(ctx.gpr[25] + static_cast<std::uint32_t>(412)));
    jump_target = ctx.gpr[25];
    ctx.set_gpr(31, 0x0892D61Cu);
    // nop
    ctx.pc = jump_target;
    if (rt.invoke_chained_call(ctx, &aot_mem) && ctx.pc == 0x0892D61Cu) goto L_0892D61C;
    return;
L_0892D61C:
    ctx.set_gpr(4, ctx.gpr[18] + 0u);
    ctx.set_gpr(25, rt.memory().aot_load32(ctx.gpr[18] + static_cast<std::uint32_t>(0)));
    ctx.set_gpr(25, rt.memory().aot_load32(ctx.gpr[25] + static_cast<std::uint32_t>(464)));
    jump_target = ctx.gpr[25];
    ctx.set_gpr(31, 0x0892D630u);
    // nop
    ctx.pc = jump_target;
    if (rt.invoke_chained_call(ctx, &aot_mem) && ctx.pc == 0x0892D630u) goto L_0892D630;
    return;
L_0892D630:
    ctx.set_gpr(4, 2228u << 16u);
    ctx.set_gpr(4, ctx.gpr[4] + static_cast<std::uint32_t>(-10960));
    ctx.set_gpr(5, ctx.gpr[2] + 0u);
    ctx.set_gpr(31, 0x0892D644u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0084_entry, 84u, 456u, 0x08955F2Cu>(ctx, &aot_mem) && ctx.pc == 0x0892D644u) goto L_0892D644;
    return;
L_0892D644:
    ctx.set_gpr(2, 0u + static_cast<std::uint32_t>(1));
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_0892D764;
      }
      goto L_0892D650;
    }
L_0892D650:
    ctx.set_gpr(1, 28672u << 16u);
    ctx.set_gpr(1, ctx.gpr[1] | 1u);
    ctx.set_gpr(1, ctx.gpr[17] < ctx.gpr[1] ? 1u : 0u);
    { const bool branch_taken = ctx.gpr[1] == 0u;
    // nop
      if (branch_taken) {
          goto L_0892D670;
      }
      goto L_0892D664;
    }
L_0892D664:
    ctx.set_gpr(2, rt.memory().aot_load32(ctx.gpr[18] + static_cast<std::uint32_t>(124)));
    { const bool branch_taken = ctx.gpr[2] == 0u;
    // nop
      if (branch_taken) {
          goto L_0892D67C;
      }
      goto L_0892D670;
    }
L_0892D670:
    ctx.set_gpr(2, 0u + static_cast<std::uint32_t>(1));
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_0892D764;
      }
      goto L_0892D67C;
    }
L_0892D67C:
    ctx.set_gpr(2, 2245u << 16u);
    ctx.set_gpr(4, rt.memory().aot_load32(ctx.gpr[2] + static_cast<std::uint32_t>(31440)));
    ctx.set_gpr(25, rt.memory().aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(0)));
    ctx.set_gpr(25, rt.memory().aot_load32(ctx.gpr[25] + static_cast<std::uint32_t>(104)));
    jump_target = ctx.gpr[25];
    ctx.set_gpr(31, 0x0892D694u);
    // nop
    ctx.pc = jump_target;
    if (rt.invoke_chained_call(ctx, &aot_mem) && ctx.pc == 0x0892D694u) goto L_0892D694;
    return;
L_0892D694:
    ctx.set_gpr(2, ctx.gpr[2] + static_cast<std::uint32_t>(-1));
    ctx.set_gpr(3, ~(ctx.gpr[2] | 0u));
    ctx.set_gpr(2, ctx.gpr[17] + ctx.gpr[2]);
    ctx.set_gpr(17, ctx.gpr[3] & ctx.gpr[2]);
    goto L_0892D6A4;
L_0892D6A4:
    ctx.set_gpr(2, 2245u << 16u);
    ctx.set_gpr(4, rt.memory().aot_load32(ctx.gpr[2] + static_cast<std::uint32_t>(31440)));
    ctx.set_gpr(5, 0u + 0u);
    ctx.set_gpr(6, ctx.gpr[17] + 0u);
    ctx.set_gpr(25, rt.memory().aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(0)));
    ctx.set_gpr(25, rt.memory().aot_load32(ctx.gpr[25] + static_cast<std::uint32_t>(72)));
    jump_target = ctx.gpr[25];
    ctx.set_gpr(31, 0x0892D6C4u);
    // nop
    ctx.pc = jump_target;
    if (rt.invoke_chained_call(ctx, &aot_mem) && ctx.pc == 0x0892D6C4u) goto L_0892D6C4;
    return;
L_0892D6C4:
    ctx.set_gpr(3, 0u + static_cast<std::uint32_t>(-1));
    { const bool branch_taken = ctx.gpr[2] != ctx.gpr[3];
    // nop
      if (branch_taken) {
          goto L_0892D73C;
      }
      goto L_0892D6D0;
    }
L_0892D6D0:
    ctx.set_gpr(7, ctx.gpr[16] + 0u);
    ctx.set_gpr(16, ctx.gpr[16] + static_cast<std::uint32_t>(1));
    ctx.set_gpr(4, ctx.gpr[18] + 0u);
    ctx.set_gpr(5, ctx.gpr[17] + 0u);
    ctx.set_gpr(6, 0u + static_cast<std::uint32_t>(3));
    ctx.set_gpr(25, rt.memory().aot_load32(ctx.gpr[18] + static_cast<std::uint32_t>(0)));
    ctx.set_gpr(25, rt.memory().aot_load32(ctx.gpr[25] + static_cast<std::uint32_t>(500)));
    jump_target = ctx.gpr[25];
    ctx.set_gpr(31, 0x0892D6F4u);
    // nop
    ctx.pc = jump_target;
    if (rt.invoke_chained_call(ctx, &aot_mem) && ctx.pc == 0x0892D6F4u) goto L_0892D6F4;
    return;
L_0892D6F4:
    { const bool branch_taken = ctx.gpr[2] != 0u;
    // nop
      if (branch_taken) {
          goto L_0892D6A4;
      }
      goto L_0892D6FC;
    }
L_0892D6FC:
    ctx.set_gpr(2, rt.memory().aot_load32(ctx.gpr[18] + static_cast<std::uint32_t>(140)));
    ctx.set_gpr(2, ctx.gpr[2] & 256u);
    ctx.set_gpr(2, 0u < ctx.gpr[2] ? 1u : 0u);
    { const bool branch_taken = ctx.gpr[2] == 0u;
    // nop
      if (branch_taken) {
          goto L_0892D730;
      }
      goto L_0892D710;
    }
L_0892D710:
    ctx.set_gpr(2, rt.memory().aot_load32(ctx.gpr[18] + static_cast<std::uint32_t>(144)));
    ctx.set_gpr(2, static_cast<std::int32_t>(ctx.gpr[2]) < 3 ? 1u : 0u);
    { const bool branch_taken = ctx.gpr[2] != 0u;
    // nop
      if (branch_taken) {
          goto L_0892D730;
      }
      goto L_0892D720;
    }
L_0892D720:
    ctx.set_gpr(4, 0u + 0u);
    ctx.set_gpr(5, ctx.gpr[18] + 0u);
    ctx.set_gpr(31, 0x0892D730u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0078_entry, 78u, 173u, 0x0893CAD8u>(ctx, &aot_mem) && ctx.pc == 0x0892D730u) goto L_0892D730;
    return;
L_0892D730:
    ctx.set_gpr(2, 0u + static_cast<std::uint32_t>(1));
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_0892D764;
      }
      goto L_0892D73C;
    }
L_0892D73C:
    ctx.set_gpr(3, 0u + static_cast<std::uint32_t>(1));
    rt.memory().aot_store8(ctx.gpr[18] + static_cast<std::uint32_t>(137), static_cast<std::uint8_t>(ctx.gpr[3]));
    ctx.set_gpr(4, ctx.gpr[18] + 0u);
    ctx.set_gpr(5, ctx.gpr[2] + 0u);
    ctx.set_gpr(6, ctx.gpr[17] + 0u);
    ctx.set_gpr(7, 0u + 0u);
    ctx.set_gpr(25, rt.memory().aot_load32(ctx.gpr[18] + static_cast<std::uint32_t>(0)));
    ctx.set_gpr(25, rt.memory().aot_load32(ctx.gpr[25] + static_cast<std::uint32_t>(216)));
    jump_target = ctx.gpr[25];
    ctx.set_gpr(31, 0x0892D764u);
    // nop
    ctx.pc = jump_target;
    if (rt.invoke_chained_call(ctx, &aot_mem) && ctx.pc == 0x0892D764u) goto L_0892D764;
    return;
L_0892D764:
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
L_0892D780:
    ctx.set_gpr(29, ctx.gpr[29] + static_cast<std::uint32_t>(-16));
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(12), ctx.gpr[31]);
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(8), ctx.gpr[17]);
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(4), ctx.gpr[16]);
    ctx.set_gpr(16, ctx.gpr[4] + 0u);
    ctx.set_gpr(17, ctx.gpr[5] + 0u);
    ctx.set_gpr(2, rt.memory().aot_load8(ctx.gpr[4] + static_cast<std::uint32_t>(84)));
    { const bool branch_taken = ctx.gpr[2] == 0u;
    // nop
      if (branch_taken) {
          goto L_0892D7F8;
      }
      goto L_0892D7A4;
    }
L_0892D7A4:
    ctx.set_gpr(2, rt.memory().aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(144)));
    { const bool branch_taken = static_cast<std::int32_t>(ctx.gpr[2]) <= 0;
    // nop
      if (branch_taken) {
          goto L_0892D7EC;
      }
      goto L_0892D7B0;
    }
L_0892D7B0:
    ctx.set_gpr(5, 0u + 0u);
    ctx.set_gpr(25, rt.memory().aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(0)));
    ctx.set_gpr(25, rt.memory().aot_load32(ctx.gpr[25] + static_cast<std::uint32_t>(412)));
    jump_target = ctx.gpr[25];
    ctx.set_gpr(31, 0x0892D7C4u);
    // nop
    ctx.pc = jump_target;
    if (rt.invoke_chained_call(ctx, &aot_mem) && ctx.pc == 0x0892D7C4u) goto L_0892D7C4;
    return;
L_0892D7C4:
    ctx.set_gpr(4, ctx.gpr[16] + 0u);
    ctx.set_gpr(25, rt.memory().aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(0)));
    ctx.set_gpr(25, rt.memory().aot_load32(ctx.gpr[25] + static_cast<std::uint32_t>(464)));
    jump_target = ctx.gpr[25];
    ctx.set_gpr(31, 0x0892D7D8u);
    // nop
    ctx.pc = jump_target;
    if (rt.invoke_chained_call(ctx, &aot_mem) && ctx.pc == 0x0892D7D8u) goto L_0892D7D8;
    return;
L_0892D7D8:
    ctx.set_gpr(4, 2228u << 16u);
    ctx.set_gpr(4, ctx.gpr[4] + static_cast<std::uint32_t>(-10840));
    ctx.set_gpr(5, ctx.gpr[2] + 0u);
    ctx.set_gpr(31, 0x0892D7ECu);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0084_entry, 84u, 456u, 0x08955F2Cu>(ctx, &aot_mem) && ctx.pc == 0x0892D7ECu) goto L_0892D7EC;
    return;
L_0892D7EC:
    ctx.set_gpr(2, 0u + static_cast<std::uint32_t>(1));
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_0892D888;
      }
      goto L_0892D7F8;
    }
L_0892D7F8:
    { const bool branch_taken = ctx.gpr[6] == 0u;
    // nop
      if (branch_taken) {
          goto L_0892D820;
      }
      goto L_0892D800;
    }
L_0892D800:
    ctx.set_gpr(1, 28672u << 16u);
    ctx.set_gpr(1, ctx.gpr[1] | 1u);
    ctx.set_gpr(1, ctx.gpr[17] < ctx.gpr[1] ? 1u : 0u);
    { const bool branch_taken = ctx.gpr[1] == 0u;
    // nop
      if (branch_taken) {
          goto L_0892D820;
      }
      goto L_0892D814;
    }
L_0892D814:
    ctx.set_gpr(2, rt.memory().aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(124)));
    { const bool branch_taken = ctx.gpr[2] == 0u;
    // nop
      if (branch_taken) {
          goto L_0892D82C;
      }
      goto L_0892D820;
    }
L_0892D820:
    ctx.set_gpr(2, 0u + static_cast<std::uint32_t>(1));
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_0892D888;
      }
      goto L_0892D82C;
    }
L_0892D82C:
    ctx.set_gpr(3, ctx.gpr[17] + static_cast<std::uint32_t>(7));
    ctx.set_gpr(2, 0u + static_cast<std::uint32_t>(-8));
    ctx.set_gpr(17, ctx.gpr[3] & ctx.gpr[2]);
    ctx.set_gpr(4, ctx.gpr[6] + 0u);
    ctx.set_gpr(5, ctx.gpr[17] + 0u);
    ctx.set_gpr(25, rt.memory().aot_load32(ctx.gpr[6] + static_cast<std::uint32_t>(0)));
    ctx.set_gpr(25, rt.memory().aot_load32(ctx.gpr[25] + static_cast<std::uint32_t>(92)));
    jump_target = ctx.gpr[25];
    ctx.set_gpr(31, 0x0892D850u);
    // nop
    ctx.pc = jump_target;
    if (rt.invoke_chained_call(ctx, &aot_mem) && ctx.pc == 0x0892D850u) goto L_0892D850;
    return;
L_0892D850:
    { const bool branch_taken = ctx.gpr[2] != 0u;
    // nop
      if (branch_taken) {
          goto L_0892D864;
      }
      goto L_0892D858;
    }
L_0892D858:
    ctx.set_gpr(2, 0u + static_cast<std::uint32_t>(1));
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_0892D888;
      }
      goto L_0892D864;
    }
L_0892D864:
    ctx.set_gpr(7, 0u + static_cast<std::uint32_t>(1));
    rt.memory().aot_store8(ctx.gpr[16] + static_cast<std::uint32_t>(137), static_cast<std::uint8_t>(ctx.gpr[7]));
    ctx.set_gpr(4, ctx.gpr[16] + 0u);
    ctx.set_gpr(5, ctx.gpr[2] + 0u);
    ctx.set_gpr(6, ctx.gpr[17] + 0u);
    ctx.set_gpr(25, rt.memory().aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(0)));
    ctx.set_gpr(25, rt.memory().aot_load32(ctx.gpr[25] + static_cast<std::uint32_t>(216)));
    jump_target = ctx.gpr[25];
    ctx.set_gpr(31, 0x0892D888u);
    // nop
    ctx.pc = jump_target;
    if (rt.invoke_chained_call(ctx, &aot_mem) && ctx.pc == 0x0892D888u) goto L_0892D888;
    return;
L_0892D888:
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
L_0892D8A0:
    ctx.set_gpr(29, ctx.gpr[29] + static_cast<std::uint32_t>(-16));
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(12), ctx.gpr[31]);
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(8), ctx.gpr[16]);
    ctx.set_gpr(16, ctx.gpr[4] + 0u);
    ctx.set_gpr(2, rt.memory().aot_load8(ctx.gpr[4] + static_cast<std::uint32_t>(84)));
    { const bool branch_taken = ctx.gpr[2] == 0u;
    // nop
      if (branch_taken) {
          goto L_0892D910;
      }
      goto L_0892D8BC;
    }
L_0892D8BC:
    ctx.set_gpr(2, rt.memory().aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(144)));
    { const bool branch_taken = static_cast<std::int32_t>(ctx.gpr[2]) <= 0;
    // nop
      if (branch_taken) {
          goto L_0892D904;
      }
      goto L_0892D8C8;
    }
L_0892D8C8:
    ctx.set_gpr(5, 0u + 0u);
    ctx.set_gpr(25, rt.memory().aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(0)));
    ctx.set_gpr(25, rt.memory().aot_load32(ctx.gpr[25] + static_cast<std::uint32_t>(412)));
    jump_target = ctx.gpr[25];
    ctx.set_gpr(31, 0x0892D8DCu);
    // nop
    ctx.pc = jump_target;
    if (rt.invoke_chained_call(ctx, &aot_mem) && ctx.pc == 0x0892D8DCu) goto L_0892D8DC;
    return;
L_0892D8DC:
    ctx.set_gpr(4, ctx.gpr[16] + 0u);
    ctx.set_gpr(25, rt.memory().aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(0)));
    ctx.set_gpr(25, rt.memory().aot_load32(ctx.gpr[25] + static_cast<std::uint32_t>(464)));
    jump_target = ctx.gpr[25];
    ctx.set_gpr(31, 0x0892D8F0u);
    // nop
    ctx.pc = jump_target;
    if (rt.invoke_chained_call(ctx, &aot_mem) && ctx.pc == 0x0892D8F0u) goto L_0892D8F0;
    return;
L_0892D8F0:
    ctx.set_gpr(4, 2228u << 16u);
    ctx.set_gpr(4, ctx.gpr[4] + static_cast<std::uint32_t>(-10720));
    ctx.set_gpr(5, ctx.gpr[2] + 0u);
    ctx.set_gpr(31, 0x0892D904u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0084_entry, 84u, 456u, 0x08955F2Cu>(ctx, &aot_mem) && ctx.pc == 0x0892D904u) goto L_0892D904;
    return;
L_0892D904:
    ctx.set_gpr(2, 0u + static_cast<std::uint32_t>(1));
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_0892D9A0;
      }
      goto L_0892D910;
    }
L_0892D910:
    ctx.set_gpr(3, rt.memory().aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(124)));
    { const bool branch_taken = ctx.gpr[3] == 0u;
    // nop
      if (branch_taken) {
          goto L_0892D998;
      }
      goto L_0892D91C;
    }
L_0892D91C:
    ctx.set_gpr(2, rt.memory().aot_load8(ctx.gpr[16] + static_cast<std::uint32_t>(137)));
    { const bool branch_taken = ctx.gpr[2] == 0u;
    // nop
      if (branch_taken) {
          goto L_0892D998;
      }
      goto L_0892D928;
    }
L_0892D928:
    ctx.set_gpr(2, rt.memory().aot_load8(ctx.gpr[16] + static_cast<std::uint32_t>(136)));
    { const bool branch_taken = ctx.gpr[2] == 0u;
    // nop
      if (branch_taken) {
          goto L_0892D948;
      }
      goto L_0892D934;
    }
L_0892D934:
    ctx.set_gpr(4, ctx.gpr[3] + 0u);
    ctx.set_gpr(31, 0x0892D940u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0073_entry, 73u, 435u, 0x08929EBCu>(ctx, &aot_mem) && ctx.pc == 0x0892D940u) goto L_0892D940;
    return;
L_0892D940:
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_0892D980;
      }
      goto L_0892D948;
    }
L_0892D948:
    ctx.set_gpr(25, rt.memory().aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(0)));
    ctx.set_gpr(25, rt.memory().aot_load32(ctx.gpr[25] + static_cast<std::uint32_t>(244)));
    jump_target = ctx.gpr[25];
    ctx.set_gpr(31, 0x0892D958u);
    // nop
    ctx.pc = jump_target;
    if (rt.invoke_chained_call(ctx, &aot_mem) && ctx.pc == 0x0892D958u) goto L_0892D958;
    return;
L_0892D958:
    { const bool branch_taken = ctx.gpr[2] == 0u;
    // nop
      if (branch_taken) {
          goto L_0892D980;
      }
      goto L_0892D960;
    }
L_0892D960:
    ctx.set_gpr(2, 2245u << 16u);
    ctx.set_gpr(4, rt.memory().aot_load32(ctx.gpr[2] + static_cast<std::uint32_t>(31440)));
    ctx.set_gpr(5, rt.memory().aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(124)));
    ctx.set_gpr(6, rt.memory().aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(100)));
    ctx.set_gpr(25, rt.memory().aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(0)));
    ctx.set_gpr(25, rt.memory().aot_load32(ctx.gpr[25] + static_cast<std::uint32_t>(76)));
    jump_target = ctx.gpr[25];
    ctx.set_gpr(31, 0x0892D980u);
    // nop
    ctx.pc = jump_target;
    if (rt.invoke_chained_call(ctx, &aot_mem) && ctx.pc == 0x0892D980u) goto L_0892D980;
    return;
L_0892D980:
    rt.memory().aot_store32(ctx.gpr[16] + static_cast<std::uint32_t>(124), 0u);
    rt.memory().aot_store32(ctx.gpr[16] + static_cast<std::uint32_t>(100), 0u);
    rt.memory().aot_store8(ctx.gpr[16] + static_cast<std::uint32_t>(137), static_cast<std::uint8_t>(0u));
    ctx.set_gpr(2, 0u + 0u);
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_0892D9A0;
      }
      goto L_0892D998;
    }
L_0892D998:
    rt.memory().aot_store8(ctx.gpr[16] + static_cast<std::uint32_t>(137), static_cast<std::uint8_t>(0u));
    ctx.set_gpr(2, 0u + static_cast<std::uint32_t>(1));
    goto L_0892D9A0;
L_0892D9A0:
    ctx.set_gpr(31, rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(12)));
    ctx.set_gpr(16, rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(8)));
    ctx.set_gpr(29, ctx.gpr[29] + static_cast<std::uint32_t>(16));
    jump_target = ctx.gpr[31];
    // nop
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_0892D9B4:
    ctx.set_gpr(29, ctx.gpr[29] + static_cast<std::uint32_t>(-16));
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(12), ctx.gpr[31]);
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(8), ctx.gpr[17]);
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(4), ctx.gpr[16]);
    ctx.set_gpr(17, ctx.gpr[4] + 0u);
    ctx.set_gpr(16, ctx.gpr[6] + 0u);
    ctx.set_gpr(2, rt.memory().aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(100)));
    { const bool branch_taken = ctx.gpr[2] == 0u;
    // nop
      if (branch_taken) {
          goto L_0892D9E4;
      }
      goto L_0892D9D8;
    }
L_0892D9D8:
    ctx.set_gpr(2, 0u + static_cast<std::uint32_t>(-1));
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_0892DA40;
      }
      goto L_0892D9E4;
    }
L_0892D9E4:
    ctx.set_gpr(2, 2245u << 16u);
    ctx.set_gpr(4, rt.memory().aot_load32(ctx.gpr[2] + static_cast<std::uint32_t>(31440)));
    ctx.set_gpr(25, rt.memory().aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(0)));
    ctx.set_gpr(25, rt.memory().aot_load32(ctx.gpr[25] + static_cast<std::uint32_t>(72)));
    jump_target = ctx.gpr[25];
    ctx.set_gpr(31, 0x0892D9FCu);
    // nop
    ctx.pc = jump_target;
    if (rt.invoke_chained_call(ctx, &aot_mem) && ctx.pc == 0x0892D9FCu) goto L_0892D9FC;
    return;
L_0892D9FC:
    ctx.set_gpr(3, 0u + static_cast<std::uint32_t>(-1));
    { const bool branch_taken = ctx.gpr[2] == ctx.gpr[3];
    // nop
      if (branch_taken) {
          goto L_0892DA40;
      }
      goto L_0892DA08;
    }
L_0892DA08:
    ctx.set_gpr(3, rt.memory().aot_load32(ctx.gpr[17] + static_cast<std::uint32_t>(104)));
    ctx.set_gpr(3, ctx.gpr[3] + ctx.gpr[16]);
    rt.memory().aot_store32(ctx.gpr[17] + static_cast<std::uint32_t>(104), ctx.gpr[3]);
    ctx.set_gpr(3, rt.memory().aot_load32(ctx.gpr[17] + static_cast<std::uint32_t>(128)));
    ctx.set_gpr(1, ctx.gpr[2] < ctx.gpr[3] ? 1u : 0u);
    { const bool branch_taken = ctx.gpr[1] == 0u;
    // nop
      if (branch_taken) {
          goto L_0892DA28;
      }
      goto L_0892DA24;
    }
L_0892DA24:
    rt.memory().aot_store32(ctx.gpr[17] + static_cast<std::uint32_t>(128), ctx.gpr[2]);
    goto L_0892DA28;
L_0892DA28:
    ctx.set_gpr(4, ctx.gpr[2] + ctx.gpr[16]);
    ctx.set_gpr(3, rt.memory().aot_load32(ctx.gpr[17] + static_cast<std::uint32_t>(132)));
    ctx.set_gpr(1, ctx.gpr[3] < ctx.gpr[4] ? 1u : 0u);
    { const bool branch_taken = ctx.gpr[1] == 0u;
    // nop
      if (branch_taken) {
          goto L_0892DA40;
      }
      goto L_0892DA3C;
    }
L_0892DA3C:
    rt.memory().aot_store32(ctx.gpr[17] + static_cast<std::uint32_t>(132), ctx.gpr[4]);
    goto L_0892DA40;
L_0892DA40:
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
L_0892DA58:
    ctx.set_gpr(29, ctx.gpr[29] + static_cast<std::uint32_t>(-16));
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(12), ctx.gpr[31]);
    ctx.set_gpr(2, rt.memory().aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(100)));
    { const bool branch_taken = ctx.gpr[2] == 0u;
    // nop
      if (branch_taken) {
          goto L_0892DA78;
      }
      goto L_0892DA6C;
    }
L_0892DA6C:
    ctx.set_gpr(2, 0u + static_cast<std::uint32_t>(1));
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_0892DAB4;
      }
      goto L_0892DA78;
    }
L_0892DA78:
    ctx.set_gpr(2, rt.memory().aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(104)));
    ctx.set_gpr(1, ctx.gpr[6] < ctx.gpr[2] ? 1u : 0u);
    { const bool branch_taken = ctx.gpr[1] == 0u;
    // nop
      if (branch_taken) {
          goto L_0892DA98;
      }
      goto L_0892DA88;
    }
L_0892DA88:
    ctx.set_gpr(2, ctx.gpr[2] - ctx.gpr[6]);
    rt.memory().aot_store32(ctx.gpr[4] + static_cast<std::uint32_t>(104), ctx.gpr[2]);
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_0892DA9C;
      }
      goto L_0892DA98;
    }
L_0892DA98:
    rt.memory().aot_store32(ctx.gpr[4] + static_cast<std::uint32_t>(104), 0u);
    goto L_0892DA9C;
L_0892DA9C:
    ctx.set_gpr(2, 2245u << 16u);
    ctx.set_gpr(4, rt.memory().aot_load32(ctx.gpr[2] + static_cast<std::uint32_t>(31440)));
    ctx.set_gpr(25, rt.memory().aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(0)));
    ctx.set_gpr(25, rt.memory().aot_load32(ctx.gpr[25] + static_cast<std::uint32_t>(76)));
    jump_target = ctx.gpr[25];
    ctx.set_gpr(31, 0x0892DAB4u);
    // nop
    ctx.pc = jump_target;
    if (rt.invoke_chained_call(ctx, &aot_mem) && ctx.pc == 0x0892DAB4u) goto L_0892DAB4;
    return;
L_0892DAB4:
    ctx.set_gpr(31, rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(12)));
    ctx.set_gpr(29, ctx.gpr[29] + static_cast<std::uint32_t>(16));
    jump_target = ctx.gpr[31];
    // nop
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_0892DAC4:
    ctx.set_gpr(2, rt.memory().aot_load8(ctx.gpr[4] + static_cast<std::uint32_t>(136)));
    jump_target = ctx.gpr[31];
    // nop
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_0892DAD0:
    ctx.set_gpr(29, ctx.gpr[29] + static_cast<std::uint32_t>(-16));
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(12), ctx.gpr[31]);
    ctx.set_gpr(5, rt.memory().aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(124)));
    { const bool branch_taken = ctx.gpr[5] == 0u;
    // nop
      if (branch_taken) {
          goto L_0892DAF0;
      }
      goto L_0892DAE4;
    }
L_0892DAE4:
    ctx.set_gpr(6, rt.memory().aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(100)));
    { const bool branch_taken = ctx.gpr[6] != 0u;
    // nop
      if (branch_taken) {
          goto L_0892DAFC;
      }
      goto L_0892DAF0;
    }
L_0892DAF0:
    ctx.set_gpr(2, 0u + 0u);
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_0892DB34;
      }
      goto L_0892DAFC;
    }
L_0892DAFC:
    ctx.set_gpr(2, rt.memory().aot_load8(ctx.gpr[4] + static_cast<std::uint32_t>(136)));
    { const bool branch_taken = ctx.gpr[2] == 0u;
    // nop
      if (branch_taken) {
          goto L_0892DB14;
      }
      goto L_0892DB08;
    }
L_0892DB08:
    ctx.set_gpr(2, 0u + 0u);
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_0892DB34;
      }
      goto L_0892DB14;
    }
L_0892DB14:
    ctx.set_gpr(2, 2245u << 16u);
    ctx.set_gpr(4, rt.memory().aot_load32(ctx.gpr[2] + static_cast<std::uint32_t>(31440)));
    ctx.set_gpr(25, rt.memory().aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(0)));
    ctx.set_gpr(25, rt.memory().aot_load32(ctx.gpr[25] + static_cast<std::uint32_t>(132)));
    jump_target = ctx.gpr[25];
    ctx.set_gpr(31, 0x0892DB2Cu);
    // nop
    ctx.pc = jump_target;
    if (rt.invoke_chained_call(ctx, &aot_mem) && ctx.pc == 0x0892DB2Cu) goto L_0892DB2C;
    return;
L_0892DB2C:
    ctx.set_gpr(2, 0u < ctx.gpr[2] ? 1u : 0u);
    ctx.set_gpr(2, ctx.gpr[2] ^ 1u);
    goto L_0892DB34;
L_0892DB34:
    ctx.set_gpr(31, rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(12)));
    ctx.set_gpr(29, ctx.gpr[29] + static_cast<std::uint32_t>(16));
    jump_target = ctx.gpr[31];
    // nop
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_0892DB44:
    ctx.set_gpr(2, rt.memory().aot_load8(ctx.gpr[4] + static_cast<std::uint32_t>(137)));
    jump_target = ctx.gpr[31];
    // nop
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_0892DB50:
    rt.memory().aot_store8(ctx.gpr[4] + static_cast<std::uint32_t>(137), static_cast<std::uint8_t>(ctx.gpr[5]));
    jump_target = ctx.gpr[31];
    // nop
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_0892DB5C:
    ctx.set_gpr(2, 0u + static_cast<std::uint32_t>(1));
    jump_target = ctx.gpr[31];
    // nop
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_0892DB68:
    ctx.set_gpr(29, ctx.gpr[29] + static_cast<std::uint32_t>(-16));
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(12), ctx.gpr[31]);
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(8), ctx.gpr[17]);
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(4), ctx.gpr[16]);
    ctx.set_gpr(17, ctx.gpr[4] + 0u);
    ctx.set_gpr(16, ctx.gpr[7] + 0u);
    ctx.set_gpr(1, ctx.gpr[6] < static_cast<std::uint32_t>(6) ? 1u : 0u);
    { const bool branch_taken = ctx.gpr[1] == 0u;
    // nop
      if (branch_taken) {
          goto L_0892DC60;
      }
      goto L_0892DB8C;
    }
L_0892DB8C:
    ctx.set_gpr(3, 2225u << 16u);
    ctx.set_gpr(3, ctx.gpr[3] + static_cast<std::uint32_t>(32592));
    ctx.set_gpr(2, ctx.gpr[6] << 2u);
    ctx.set_gpr(2, ctx.gpr[2] + ctx.gpr[3]);
    ctx.set_gpr(2, rt.memory().aot_load32(ctx.gpr[2] + static_cast<std::uint32_t>(0)));
    jump_target = ctx.gpr[2];
    // nop
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_0892DBA8:
    ctx.set_gpr(2, 0u + 0u);
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_0892DC64;
      }
      goto L_0892DBB4;
    }
L_0892DBB4:
    ctx.set_gpr(2, 0u + 0u);
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_0892DC64;
      }
      goto L_0892DBC0;
    }
L_0892DBC0:
    ctx.set_gpr(2, 0u + 0u);
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_0892DC64;
      }
      goto L_0892DBCC;
    }
L_0892DBCC:
    ctx.set_gpr(25, rt.memory().aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(0)));
    ctx.set_gpr(25, rt.memory().aot_load32(ctx.gpr[25] + static_cast<std::uint32_t>(312)));
    jump_target = ctx.gpr[25];
    ctx.set_gpr(31, 0x0892DBDCu);
    // nop
    ctx.pc = jump_target;
    if (rt.invoke_chained_call(ctx, &aot_mem) && ctx.pc == 0x0892DBDCu) goto L_0892DBDC;
    return;
L_0892DBDC:
    { const bool branch_taken = ctx.gpr[2] != 0u;
    // nop
      if (branch_taken) {
          goto L_0892DC3C;
      }
      goto L_0892DBE4;
    }
L_0892DBE4:
    ctx.set_gpr(4, ctx.gpr[17] + 0u);
    ctx.set_gpr(5, 0u + 0u);
    ctx.set_gpr(25, rt.memory().aot_load32(ctx.gpr[17] + static_cast<std::uint32_t>(0)));
    ctx.set_gpr(25, rt.memory().aot_load32(ctx.gpr[25] + static_cast<std::uint32_t>(272)));
    jump_target = ctx.gpr[25];
    ctx.set_gpr(31, 0x0892DBFCu);
    // nop
    ctx.pc = jump_target;
    if (rt.invoke_chained_call(ctx, &aot_mem) && ctx.pc == 0x0892DBFCu) goto L_0892DBFC;
    return;
L_0892DBFC:
    { const bool branch_taken = ctx.gpr[2] != 0u;
    // nop
      if (branch_taken) {
          goto L_0892DC24;
      }
      goto L_0892DC04;
    }
L_0892DC04:
    ctx.set_gpr(4, 0u + 0u);
    ctx.set_gpr(31, 0x0892DC10u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0075_entry, 75u, 26u, 0x08930330u>(ctx, &aot_mem) && ctx.pc == 0x0892DC10u) goto L_0892DC10;
    return;
L_0892DC10:
    { const bool branch_taken = ctx.gpr[2] != 0u;
    // nop
      if (branch_taken) {
          goto L_0892DC24;
      }
      goto L_0892DC18;
    }
L_0892DC18:
    ctx.set_gpr(4, 0u + static_cast<std::uint32_t>(1));
    ctx.set_gpr(31, 0x0892DC24u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0075_entry, 75u, 26u, 0x08930330u>(ctx, &aot_mem) && ctx.pc == 0x0892DC24u) goto L_0892DC24;
    return;
L_0892DC24:
    ctx.set_gpr(1, static_cast<std::int32_t>(ctx.gpr[16]) < 3 ? 1u : 0u);
    { const bool branch_taken = ctx.gpr[1] == 0u;
    // nop
      if (branch_taken) {
          goto L_0892DC3C;
      }
      goto L_0892DC30;
    }
L_0892DC30:
    ctx.set_gpr(2, 0u + static_cast<std::uint32_t>(1));
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_0892DC64;
      }
      goto L_0892DC3C;
    }
L_0892DC3C:
    ctx.set_gpr(2, 0u + 0u);
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_0892DC64;
      }
      goto L_0892DC48;
    }
L_0892DC48:
    ctx.set_gpr(2, 0u + static_cast<std::uint32_t>(1));
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_0892DC64;
      }
      goto L_0892DC54;
    }
L_0892DC54:
    ctx.set_gpr(2, 0u + 0u);
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_0892DC64;
      }
      goto L_0892DC60;
    }
L_0892DC60:
    ctx.set_gpr(2, 0u + 0u);
    goto L_0892DC64;
L_0892DC64:
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
L_0892DC7C:
    ctx.set_gpr(29, ctx.gpr[29] + static_cast<std::uint32_t>(-16));
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(12), ctx.gpr[31]);
    ctx.set_gpr(2, 2245u << 16u);
    ctx.set_gpr(2, rt.memory().aot_load32(ctx.gpr[2] + static_cast<std::uint32_t>(30812)));
    { const bool branch_taken = ctx.gpr[2] == 0u;
    // nop
      if (branch_taken) {
          goto L_0892DCA4;
      }
      goto L_0892DC94;
    }
L_0892DC94:
    jump_target = ctx.gpr[2];
    ctx.set_gpr(31, 0x0892DC9Cu);
    // nop
    ctx.pc = jump_target;
    if (rt.invoke_chained_call(ctx, &aot_mem) && ctx.pc == 0x0892DC9Cu) goto L_0892DC9C;
    return;
L_0892DC9C:
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_0892DCAC;
      }
      goto L_0892DCA4;
    }
L_0892DCA4:
    ctx.set_gpr(31, 0x0892DCACu);
    // nop
    goto L_0892DB68;
L_0892DCAC:
    ctx.set_gpr(31, rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(12)));
    ctx.set_gpr(29, ctx.gpr[29] + static_cast<std::uint32_t>(16));
    jump_target = ctx.gpr[31];
    // nop
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_0892DCBC:
    ctx.set_gpr(29, ctx.gpr[29] + static_cast<std::uint32_t>(-16));
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(12), ctx.gpr[31]);
    ctx.set_gpr(31, 0x0892DCCCu);
    // nop
    goto L_0892E0AC;
L_0892DCCC:
    ctx.set_gpr(31, rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(12)));
    ctx.set_gpr(29, ctx.gpr[29] + static_cast<std::uint32_t>(16));
    jump_target = ctx.gpr[31];
    // nop
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_0892DCDC:
    ctx.set_gpr(29, ctx.gpr[29] + static_cast<std::uint32_t>(-16));
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(12), ctx.gpr[31]);
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(8), ctx.gpr[16]);
    ctx.set_gpr(16, ctx.gpr[4] + 0u);
    ctx.set_gpr(5, 0u + 0u);
    ctx.set_gpr(31, 0x0892DCF8u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0075_entry, 75u, 282u, 0x08932008u>(ctx, &aot_mem) && ctx.pc == 0x0892DCF8u) goto L_0892DCF8;
    return;
L_0892DCF8:
    ctx.set_gpr(4, ctx.gpr[16] + 0u);
    ctx.set_gpr(31, 0x0892DD04u);
    // nop
    goto L_0892E1A8;
L_0892DD04:
    ctx.set_gpr(31, rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(12)));
    ctx.set_gpr(16, rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(8)));
    ctx.set_gpr(29, ctx.gpr[29] + static_cast<std::uint32_t>(16));
    jump_target = ctx.gpr[31];
    // nop
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_0892DD18:
    ctx.set_gpr(3, rt.memory().aot_load8(ctx.gpr[28] + static_cast<std::uint32_t>(-32672)));
    rt.memory().aot_store8(ctx.gpr[4] + static_cast<std::uint32_t>(204), static_cast<std::uint8_t>(ctx.gpr[3]));
    jump_target = ctx.gpr[31];
    // nop
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_0892DD28:
    ctx.set_gpr(29, ctx.gpr[29] + static_cast<std::uint32_t>(-16));
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(12), ctx.gpr[31]);
    ctx.set_gpr(25, rt.memory().aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(0)));
    ctx.set_gpr(25, rt.memory().aot_load32(ctx.gpr[25] + static_cast<std::uint32_t>(496)));
    jump_target = ctx.gpr[25];
    ctx.set_gpr(31, 0x0892DD40u);
    // nop
    ctx.pc = jump_target;
    if (rt.invoke_chained_call(ctx, &aot_mem) && ctx.pc == 0x0892DD40u) goto L_0892DD40;
    return;
L_0892DD40:
    ctx.set_gpr(31, rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(12)));
    ctx.set_gpr(29, ctx.gpr[29] + static_cast<std::uint32_t>(16));
    jump_target = ctx.gpr[31];
    // nop
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_0892DD50:
    ctx.set_gpr(29, ctx.gpr[29] + static_cast<std::uint32_t>(-16));
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(12), ctx.gpr[31]);
    ctx.set_gpr(4, 0u + static_cast<std::uint32_t>(7));
    ctx.set_gpr(31, 0x0892DD64u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0078_entry, 78u, 199u, 0x0893CC68u>(ctx, &aot_mem) && ctx.pc == 0x0892DD64u) goto L_0892DD64;
    return;
L_0892DD64:
    ctx.set_gpr(31, rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(12)));
    ctx.set_gpr(29, ctx.gpr[29] + static_cast<std::uint32_t>(16));
    jump_target = ctx.gpr[31];
    // nop
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_0892DD74:
    ctx.set_gpr(29, ctx.gpr[29] + static_cast<std::uint32_t>(-16));
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(12), ctx.gpr[31]);
    ctx.set_gpr(4, 0u + static_cast<std::uint32_t>(5));
    ctx.set_gpr(31, 0x0892DD88u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0078_entry, 78u, 199u, 0x0893CC68u>(ctx, &aot_mem) && ctx.pc == 0x0892DD88u) goto L_0892DD88;
    return;
L_0892DD88:
    ctx.set_gpr(31, rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(12)));
    ctx.set_gpr(29, ctx.gpr[29] + static_cast<std::uint32_t>(16));
    jump_target = ctx.gpr[31];
    // nop
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_0892DD98:
    ctx.set_gpr(29, ctx.gpr[29] + static_cast<std::uint32_t>(-16));
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(12), ctx.gpr[31]);
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(8), ctx.gpr[17]);
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(4), ctx.gpr[16]);
    ctx.set_gpr(16, ctx.gpr[4] + 0u);
    ctx.set_gpr(3, 2245u << 16u);
    ctx.set_gpr(17, rt.memory().aot_load32(ctx.gpr[3] + static_cast<std::uint32_t>(30824)));
    { const bool branch_taken = ctx.gpr[17] == ctx.gpr[16];
    // nop
      if (branch_taken) {
          goto L_0892DE10;
      }
      goto L_0892DDBC;
    }
L_0892DDBC:
    { const bool branch_taken = ctx.gpr[17] == 0u;
    // nop
      if (branch_taken) {
          goto L_0892DE08;
      }
      goto L_0892DDC4;
    }
L_0892DDC4:
    ctx.set_gpr(2, 2245u << 16u);
    rt.memory().aot_store32(ctx.gpr[2] + static_cast<std::uint32_t>(30824), 0u);
    ctx.set_gpr(4, ctx.gpr[17] + 0u);
    ctx.set_gpr(25, rt.memory().aot_load32(ctx.gpr[17] + static_cast<std::uint32_t>(0)));
    ctx.set_gpr(25, rt.memory().aot_load32(ctx.gpr[25] + static_cast<std::uint32_t>(104)));
    jump_target = ctx.gpr[25];
    ctx.set_gpr(31, 0x0892DDE0u);
    // nop
    ctx.pc = jump_target;
    if (rt.invoke_chained_call(ctx, &aot_mem) && ctx.pc == 0x0892DDE0u) goto L_0892DDE0;
    return;
L_0892DDE0:
    ctx.set_gpr(3, rt.memory().aot_load32(ctx.gpr[17] + static_cast<std::uint32_t>(4)));
    ctx.set_gpr(3, ctx.gpr[3] + static_cast<std::uint32_t>(-1));
    rt.memory().aot_store32(ctx.gpr[17] + static_cast<std::uint32_t>(4), ctx.gpr[3]);
    ctx.set_gpr(3, ctx.gpr[3] << 10u);
    ctx.set_gpr(3, ctx.gpr[3] >> 10u);
    { const bool branch_taken = ctx.gpr[3] != 0u;
    // nop
      if (branch_taken) {
          goto L_0892DE08;
      }
      goto L_0892DDFC;
    }
L_0892DDFC:
    ctx.set_gpr(4, ctx.gpr[17] + 0u);
    ctx.set_gpr(31, 0x0892DE08u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0080_entry, 80u, 556u, 0x089467C8u>(ctx, &aot_mem) && ctx.pc == 0x0892DE08u) goto L_0892DE08;
    return;
L_0892DE08:
    ctx.set_gpr(3, 2245u << 16u);
    rt.memory().aot_store32(ctx.gpr[3] + static_cast<std::uint32_t>(30824), ctx.gpr[16]);
    goto L_0892DE10;
L_0892DE10:
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
L_0892DE28:
    ctx.set_gpr(29, ctx.gpr[29] + static_cast<std::uint32_t>(-32));
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(12), ctx.gpr[31]);
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(8), ctx.gpr[17]);
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(4), ctx.gpr[16]);
    ctx.set_gpr(17, ctx.gpr[4] + 0u);
    ctx.set_gpr(16, ctx.gpr[5] + 0u);
    ctx.set_gpr(2, 2245u << 16u);
    ctx.set_gpr(2, rt.memory().aot_load32(ctx.gpr[2] + static_cast<std::uint32_t>(30824)));
    { const bool branch_taken = ctx.gpr[2] == 0u;
    // nop
      if (branch_taken) {
          goto L_0892DEE0;
      }
      goto L_0892DE50;
    }
L_0892DE50:
    ctx.set_gpr(4, rt.memory().aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(0)));
    { const bool branch_taken = ctx.gpr[4] == 0u;
    // nop
      if (branch_taken) {
          goto L_0892DE74;
      }
      goto L_0892DE5C;
    }
L_0892DE5C:
    ctx.set_gpr(25, rt.memory().aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(0)));
    ctx.set_gpr(25, rt.memory().aot_load32(ctx.gpr[25] + static_cast<std::uint32_t>(456)));
    jump_target = ctx.gpr[25];
    ctx.set_gpr(31, 0x0892DE6Cu);
    // nop
    ctx.pc = jump_target;
    if (rt.invoke_chained_call(ctx, &aot_mem) && ctx.pc == 0x0892DE6Cu) goto L_0892DE6C;
    return;
L_0892DE6C:
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_0892DE78;
      }
      goto L_0892DE74;
    }
L_0892DE74:
    ctx.set_gpr(2, 0u + static_cast<std::uint32_t>(-1));
    goto L_0892DE78;
L_0892DE78:
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(28), ctx.gpr[2]);
    ctx.set_gpr(2, 2245u << 16u);
    ctx.set_gpr(4, rt.memory().aot_load32(ctx.gpr[2] + static_cast<std::uint32_t>(30824)));
    ctx.set_gpr(5, ctx.gpr[17] + 0u);
    ctx.set_gpr(6, ctx.gpr[29] + static_cast<std::uint32_t>(28));
    ctx.set_gpr(25, rt.memory().aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(0)));
    ctx.set_gpr(25, rt.memory().aot_load32(ctx.gpr[25] + static_cast<std::uint32_t>(120)));
    jump_target = ctx.gpr[25];
    ctx.set_gpr(31, 0x0892DE9Cu);
    // nop
    ctx.pc = jump_target;
    if (rt.invoke_chained_call(ctx, &aot_mem) && ctx.pc == 0x0892DE9Cu) goto L_0892DE9C;
    return;
L_0892DE9C:
    { const bool branch_taken = ctx.gpr[2] != 0u;
    // nop
      if (branch_taken) {
          goto L_0892DEE0;
      }
      goto L_0892DEA4;
    }
L_0892DEA4:
    ctx.set_gpr(2, rt.memory().aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(0)));
    { const bool branch_taken = ctx.gpr[2] == 0u;
    // nop
      if (branch_taken) {
          goto L_0892DEBC;
      }
      goto L_0892DEB0;
    }
L_0892DEB0:
    ctx.set_gpr(2, 0u + 0u);
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_0892DEE8;
      }
      goto L_0892DEBC;
    }
L_0892DEBC:
    ctx.set_gpr(4, rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(28)));
    ctx.set_gpr(31, 0x0892DEC8u);
    // nop
    goto L_0892E534;
L_0892DEC8:
    rt.memory().aot_store32(ctx.gpr[16] + static_cast<std::uint32_t>(0), ctx.gpr[2]);
    { const bool branch_taken = ctx.gpr[2] == 0u;
    // nop
      if (branch_taken) {
          goto L_0892DEE0;
      }
      goto L_0892DED4;
    }
L_0892DED4:
    ctx.set_gpr(2, 0u + 0u);
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_0892DEE8;
      }
      goto L_0892DEE0;
    }
L_0892DEE0:
    rt.memory().aot_store32(ctx.gpr[16] + static_cast<std::uint32_t>(0), 0u);
    ctx.set_gpr(2, 0u + static_cast<std::uint32_t>(1));
    goto L_0892DEE8;
L_0892DEE8:
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
L_0892DF00:
    ctx.set_gpr(29, ctx.gpr[29] + static_cast<std::uint32_t>(-32));
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(12), ctx.gpr[31]);
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(8), ctx.gpr[17]);
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(4), ctx.gpr[16]);
    ctx.set_gpr(17, ctx.gpr[4] + 0u);
    ctx.set_gpr(16, ctx.gpr[5] + 0u);
    ctx.set_gpr(2, 2245u << 16u);
    ctx.set_gpr(2, rt.memory().aot_load32(ctx.gpr[2] + static_cast<std::uint32_t>(30824)));
    { const bool branch_taken = ctx.gpr[2] != 0u;
    // nop
      if (branch_taken) {
          goto L_0892DFC4;
      }
      goto L_0892DF28;
    }
L_0892DF28:
    ctx.set_gpr(2, 0u + static_cast<std::uint32_t>(4096));
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(28), ctx.gpr[2]);
    ctx.set_gpr(31, 0x0892DF38u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0064_entry, 64u, 444u, 0x08905FF0u>(ctx, &aot_mem) && ctx.pc == 0x0892DF38u) goto L_0892DF38;
    return;
L_0892DF38:
    ctx.set_gpr(4, rt.memory().aot_load32(ctx.gpr[2] + static_cast<std::uint32_t>(64)));
    ctx.set_gpr(5, 0u + static_cast<std::uint32_t>(2));
    ctx.set_gpr(6, 2228u << 16u);
    ctx.set_gpr(6, ctx.gpr[6] + static_cast<std::uint32_t>(-10620));
    ctx.set_gpr(7, ctx.gpr[29] + static_cast<std::uint32_t>(28));
    ctx.set_gpr(8, rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(28)));
    ctx.set_gpr(9, 0u + 0u);
    ctx.set_gpr(31, 0x0892DF5Cu);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0083_entry, 83u, 663u, 0x08952DD8u>(ctx, &aot_mem) && ctx.pc == 0x0892DF5Cu) goto L_0892DF5C;
    return;
L_0892DF5C:
    ctx.set_gpr(31, 0x0892DF64u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0078_entry, 78u, 219u, 0x0893CE0Cu>(ctx, &aot_mem) && ctx.pc == 0x0892DF64u) goto L_0892DF64;
    return;
L_0892DF64:
    ctx.set_gpr(4, rt.memory().aot_load32(ctx.gpr[2] + static_cast<std::uint32_t>(0)));
    ctx.set_gpr(31, 0x0892DF70u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0078_entry, 78u, 199u, 0x0893CC68u>(ctx, &aot_mem) && ctx.pc == 0x0892DF70u) goto L_0892DF70;
    return;
L_0892DF70:
    ctx.set_gpr(4, ctx.gpr[2] + 0u);
    ctx.set_gpr(31, 0x0892DF7Cu);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0058_entry, 58u, 654u, 0x088EF8B8u>(ctx, &aot_mem) && ctx.pc == 0x0892DF7Cu) goto L_0892DF7C;
    return;
L_0892DF7C:
    ctx.set_gpr(3, 2245u << 16u);
    rt.memory().aot_store32(ctx.gpr[3] + static_cast<std::uint32_t>(30824), ctx.gpr[2]);
    ctx.set_gpr(4, ctx.gpr[2] + 0u);
    ctx.set_gpr(5, rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(28)));
    ctx.set_gpr(25, rt.memory().aot_load32(ctx.gpr[2] + static_cast<std::uint32_t>(0)));
    ctx.set_gpr(25, rt.memory().aot_load32(ctx.gpr[25] + static_cast<std::uint32_t>(96)));
    jump_target = ctx.gpr[25];
    ctx.set_gpr(31, 0x0892DF9Cu);
    // nop
    ctx.pc = jump_target;
    if (rt.invoke_chained_call(ctx, &aot_mem) && ctx.pc == 0x0892DF9Cu) goto L_0892DF9C;
    return;
L_0892DF9C:
    ctx.set_gpr(2, 2245u << 16u);
    ctx.set_gpr(4, rt.memory().aot_load32(ctx.gpr[2] + static_cast<std::uint32_t>(30824)));
    ctx.set_gpr(25, rt.memory().aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(0)));
    ctx.set_gpr(25, rt.memory().aot_load32(ctx.gpr[25] + static_cast<std::uint32_t>(100)));
    jump_target = ctx.gpr[25];
    ctx.set_gpr(31, 0x0892DFB4u);
    // nop
    ctx.pc = jump_target;
    if (rt.invoke_chained_call(ctx, &aot_mem) && ctx.pc == 0x0892DFB4u) goto L_0892DFB4;
    return;
L_0892DFB4:
    ctx.set_gpr(2, 2245u << 16u);
    ctx.set_gpr(4, rt.memory().aot_load32(ctx.gpr[2] + static_cast<std::uint32_t>(30824)));
    ctx.set_gpr(31, 0x0892DFC4u);
    // nop
    goto L_0892DD98;
L_0892DFC4:
    ctx.set_gpr(4, ctx.gpr[16] + 0u);
    ctx.set_gpr(25, rt.memory().aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(0)));
    ctx.set_gpr(25, rt.memory().aot_load32(ctx.gpr[25] + static_cast<std::uint32_t>(456)));
    jump_target = ctx.gpr[25];
    ctx.set_gpr(31, 0x0892DFD8u);
    // nop
    ctx.pc = jump_target;
    if (rt.invoke_chained_call(ctx, &aot_mem) && ctx.pc == 0x0892DFD8u) goto L_0892DFD8;
    return;
L_0892DFD8:
    ctx.set_gpr(3, 2245u << 16u);
    ctx.set_gpr(4, rt.memory().aot_load32(ctx.gpr[3] + static_cast<std::uint32_t>(30824)));
    ctx.set_gpr(5, ctx.gpr[17] + 0u);
    ctx.set_gpr(6, ctx.gpr[2] + 0u);
    ctx.set_gpr(25, rt.memory().aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(0)));
    ctx.set_gpr(25, rt.memory().aot_load32(ctx.gpr[25] + static_cast<std::uint32_t>(124)));
    jump_target = ctx.gpr[25];
    ctx.set_gpr(31, 0x0892DFF8u);
    // nop
    ctx.pc = jump_target;
    if (rt.invoke_chained_call(ctx, &aot_mem) && ctx.pc == 0x0892DFF8u) goto L_0892DFF8;
    return;
L_0892DFF8:
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
L_0892E010:
    ctx.set_gpr(29, ctx.gpr[29] + static_cast<std::uint32_t>(-16));
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(12), ctx.gpr[31]);
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(8), ctx.gpr[16]);
    ctx.set_gpr(16, ctx.gpr[4] + 0u);
    ctx.set_gpr(2, 2245u << 16u);
    ctx.set_gpr(4, rt.memory().aot_load32(ctx.gpr[2] + static_cast<std::uint32_t>(30824)));
    { const bool branch_taken = ctx.gpr[4] == 0u;
    // nop
      if (branch_taken) {
          goto L_0892E094;
      }
      goto L_0892E030;
    }
L_0892E030:
    { const bool branch_taken = ctx.gpr[5] == 0u;
    // nop
      if (branch_taken) {
          goto L_0892E074;
      }
      goto L_0892E038;
    }
L_0892E038:
    ctx.set_gpr(4, ctx.gpr[5] + 0u);
    ctx.set_gpr(25, rt.memory().aot_load32(ctx.gpr[5] + static_cast<std::uint32_t>(0)));
    ctx.set_gpr(25, rt.memory().aot_load32(ctx.gpr[25] + static_cast<std::uint32_t>(456)));
    jump_target = ctx.gpr[25];
    ctx.set_gpr(31, 0x0892E04Cu);
    // nop
    ctx.pc = jump_target;
    if (rt.invoke_chained_call(ctx, &aot_mem) && ctx.pc == 0x0892E04Cu) goto L_0892E04C;
    return;
L_0892E04C:
    ctx.set_gpr(3, 2245u << 16u);
    ctx.set_gpr(4, rt.memory().aot_load32(ctx.gpr[3] + static_cast<std::uint32_t>(30824)));
    ctx.set_gpr(5, ctx.gpr[16] + 0u);
    ctx.set_gpr(6, ctx.gpr[2] + 0u);
    ctx.set_gpr(25, rt.memory().aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(0)));
    ctx.set_gpr(25, rt.memory().aot_load32(ctx.gpr[25] + static_cast<std::uint32_t>(128)));
    jump_target = ctx.gpr[25];
    ctx.set_gpr(31, 0x0892E06Cu);
    // nop
    ctx.pc = jump_target;
    if (rt.invoke_chained_call(ctx, &aot_mem) && ctx.pc == 0x0892E06Cu) goto L_0892E06C;
    return;
L_0892E06C:
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_0892E08C;
      }
      goto L_0892E074;
    }
L_0892E074:
    ctx.set_gpr(5, ctx.gpr[16] + 0u);
    ctx.set_gpr(6, 0u + static_cast<std::uint32_t>(-1));
    ctx.set_gpr(25, rt.memory().aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(0)));
    ctx.set_gpr(25, rt.memory().aot_load32(ctx.gpr[25] + static_cast<std::uint32_t>(128)));
    jump_target = ctx.gpr[25];
    ctx.set_gpr(31, 0x0892E08Cu);
    // nop
    ctx.pc = jump_target;
    if (rt.invoke_chained_call(ctx, &aot_mem) && ctx.pc == 0x0892E08Cu) goto L_0892E08C;
    return;
L_0892E08C:
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_0892E098;
      }
      goto L_0892E094;
    }
L_0892E094:
    ctx.set_gpr(2, 0u + static_cast<std::uint32_t>(1));
    goto L_0892E098;
L_0892E098:
    ctx.set_gpr(31, rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(12)));
    ctx.set_gpr(16, rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(8)));
    ctx.set_gpr(29, ctx.gpr[29] + static_cast<std::uint32_t>(16));
    jump_target = ctx.gpr[31];
    // nop
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_0892E0AC:
    ctx.set_gpr(29, ctx.gpr[29] + static_cast<std::uint32_t>(-16));
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(12), ctx.gpr[31]);
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(8), ctx.gpr[18]);
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(4), ctx.gpr[17]);
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(0), ctx.gpr[16]);
    ctx.set_gpr(17, ctx.gpr[4] + 0u);
    ctx.set_gpr(2, 2245u << 16u);
    ctx.set_gpr(4, rt.memory().aot_load32(ctx.gpr[2] + static_cast<std::uint32_t>(30816)));
    ctx.set_gpr(18, rt.memory().aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(4)));
    ctx.set_gpr(16, ctx.gpr[18] + 0u);
    ctx.set_gpr(1, static_cast<std::int32_t>(ctx.gpr[18]) < 256 ? 1u : 0u);
    { const bool branch_taken = ctx.gpr[1] == 0u;
    // nop
      if (branch_taken) {
          goto L_0892E0F4;
      }
      goto L_0892E0E0;
    }
L_0892E0E0:
    ctx.set_gpr(5, ctx.gpr[17] + 0u);
    ctx.set_gpr(31, 0x0892E0ECu);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0078_entry, 78u, 1023u, 0x0893FCB8u>(ctx, &aot_mem) && ctx.pc == 0x0892E0ECu) goto L_0892E0EC;
    return;
L_0892E0EC:
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_0892E148;
      }
      goto L_0892E0F4;
    }
L_0892E0F4:
    ctx.set_gpr(5, 0u + 0u);
    ctx.set_gpr(31, 0x0892E100u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0078_entry, 78u, 1016u, 0x0893FC6Cu>(ctx, &aot_mem) && ctx.pc == 0x0892E100u) goto L_0892E100;
    return;
L_0892E100:
    ctx.set_gpr(16, ctx.gpr[2] + 0u);
    ctx.set_gpr(2, 0u + static_cast<std::uint32_t>(-1));
    { const bool branch_taken = ctx.gpr[16] != ctx.gpr[2];
    // nop
      if (branch_taken) {
          goto L_0892E130;
      }
      goto L_0892E110;
    }
L_0892E110:
    ctx.set_gpr(16, ctx.gpr[18] + 0u);
    ctx.set_gpr(2, 2245u << 16u);
    ctx.set_gpr(4, rt.memory().aot_load32(ctx.gpr[2] + static_cast<std::uint32_t>(30816)));
    ctx.set_gpr(5, ctx.gpr[17] + 0u);
    ctx.set_gpr(31, 0x0892E128u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0078_entry, 78u, 1023u, 0x0893FCB8u>(ctx, &aot_mem) && ctx.pc == 0x0892E128u) goto L_0892E128;
    return;
L_0892E128:
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_0892E148;
      }
      goto L_0892E130;
    }
L_0892E130:
    ctx.set_gpr(2, 2245u << 16u);
    ctx.set_gpr(2, rt.memory().aot_load32(ctx.gpr[2] + static_cast<std::uint32_t>(30816)));
    ctx.set_gpr(3, ctx.gpr[16] << 2u);
    ctx.set_gpr(2, rt.memory().aot_load32(ctx.gpr[2] + static_cast<std::uint32_t>(0)));
    ctx.set_gpr(2, ctx.gpr[2] + ctx.gpr[3]);
    rt.memory().aot_store32(ctx.gpr[2] + static_cast<std::uint32_t>(0), ctx.gpr[17]);
    goto L_0892E148;
L_0892E148:
    ctx.set_gpr(4, ctx.gpr[17] + 0u);
    ctx.set_gpr(5, ctx.gpr[16] + 0u);
    ctx.set_gpr(25, rt.memory().aot_load32(ctx.gpr[17] + static_cast<std::uint32_t>(0)));
    ctx.set_gpr(25, rt.memory().aot_load32(ctx.gpr[25] + static_cast<std::uint32_t>(460)));
    jump_target = ctx.gpr[25];
    ctx.set_gpr(31, 0x0892E160u);
    // nop
    ctx.pc = jump_target;
    if (rt.invoke_chained_call(ctx, &aot_mem) && ctx.pc == 0x0892E160u) goto L_0892E160;
    return;
L_0892E160:
    ctx.set_gpr(2, 2245u << 16u);
    ctx.set_gpr(2, rt.memory().aot_load32(ctx.gpr[2] + static_cast<std::uint32_t>(30820)));
    ctx.set_gpr(2, rt.memory().aot_load32(ctx.gpr[2] + static_cast<std::uint32_t>(4)));
    rt.memory().aot_store32(ctx.gpr[17] + static_cast<std::uint32_t>(80), ctx.gpr[2]);
    ctx.set_gpr(2, 2245u << 16u);
    ctx.set_gpr(4, rt.memory().aot_load32(ctx.gpr[2] + static_cast<std::uint32_t>(30820)));
    ctx.set_gpr(5, ctx.gpr[17] + 0u);
    ctx.set_gpr(31, 0x0892E184u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0078_entry, 78u, 1023u, 0x0893FCB8u>(ctx, &aot_mem) && ctx.pc == 0x0892E184u) goto L_0892E184;
    return;
L_0892E184:
    ctx.set_gpr(31, 0x0892E18Cu);
    // nop
    goto L_0892E2C8;
L_0892E18C:
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
L_0892E1A8:
    ctx.set_gpr(29, ctx.gpr[29] + static_cast<std::uint32_t>(-16));
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(12), ctx.gpr[31]);
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(8), ctx.gpr[18]);
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(4), ctx.gpr[17]);
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(0), ctx.gpr[16]);
    ctx.set_gpr(18, ctx.gpr[4] + 0u);
    ctx.set_gpr(2, 2245u << 16u);
    ctx.set_gpr(2, rt.memory().aot_load32(ctx.gpr[2] + static_cast<std::uint32_t>(30816)));
    ctx.set_gpr(16, rt.memory().aot_load32(ctx.gpr[2] + static_cast<std::uint32_t>(4)));
    ctx.set_gpr(31, 0x0892E1D4u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0064_entry, 64u, 444u, 0x08905FF0u>(ctx, &aot_mem) && ctx.pc == 0x0892E1D4u) goto L_0892E1D4;
    return;
L_0892E1D4:
    ctx.set_gpr(2, rt.memory().aot_load8(ctx.gpr[2] + static_cast<std::uint32_t>(0)));
    { const bool branch_taken = ctx.gpr[2] == 0u;
    // nop
      if (branch_taken) {
          goto L_0892E230;
      }
      goto L_0892E1E0;
    }
L_0892E1E0:
    ctx.set_gpr(17, 0u + 0u);
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_0892E224;
      }
      goto L_0892E1EC;
    }
L_0892E1EC:
    ctx.set_gpr(2, 2245u << 16u);
    ctx.set_gpr(2, rt.memory().aot_load32(ctx.gpr[2] + static_cast<std::uint32_t>(30816)));
    ctx.set_gpr(3, ctx.gpr[17] << 2u);
    ctx.set_gpr(2, rt.memory().aot_load32(ctx.gpr[2] + static_cast<std::uint32_t>(0)));
    ctx.set_gpr(2, ctx.gpr[2] + ctx.gpr[3]);
    ctx.set_gpr(4, rt.memory().aot_load32(ctx.gpr[2] + static_cast<std::uint32_t>(0)));
    { const bool branch_taken = ctx.gpr[4] == 0u;
    // nop
      if (branch_taken) {
          goto L_0892E220;
      }
      goto L_0892E20C;
    }
L_0892E20C:
    ctx.set_gpr(5, ctx.gpr[18] + 0u);
    ctx.set_gpr(25, rt.memory().aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(0)));
    ctx.set_gpr(25, rt.memory().aot_load32(ctx.gpr[25] + static_cast<std::uint32_t>(504)));
    jump_target = ctx.gpr[25];
    ctx.set_gpr(31, 0x0892E220u);
    // nop
    ctx.pc = jump_target;
    if (rt.invoke_chained_call(ctx, &aot_mem) && ctx.pc == 0x0892E220u) goto L_0892E220;
    return;
L_0892E220:
    ctx.set_gpr(17, ctx.gpr[17] + static_cast<std::uint32_t>(1));
    goto L_0892E224;
L_0892E224:
    ctx.set_gpr(2, static_cast<std::int32_t>(ctx.gpr[17]) < static_cast<std::int32_t>(ctx.gpr[16]) ? 1u : 0u);
    { const bool branch_taken = ctx.gpr[2] != 0u;
    // nop
      if (branch_taken) {
          goto L_0892E1EC;
      }
      goto L_0892E230;
    }
L_0892E230:
    ctx.set_gpr(4, ctx.gpr[18] + 0u);
    ctx.set_gpr(25, rt.memory().aot_load32(ctx.gpr[18] + static_cast<std::uint32_t>(0)));
    ctx.set_gpr(25, rt.memory().aot_load32(ctx.gpr[25] + static_cast<std::uint32_t>(456)));
    jump_target = ctx.gpr[25];
    ctx.set_gpr(31, 0x0892E244u);
    // nop
    ctx.pc = jump_target;
    if (rt.invoke_chained_call(ctx, &aot_mem) && ctx.pc == 0x0892E244u) goto L_0892E244;
    return;
L_0892E244:
    ctx.set_gpr(17, ctx.gpr[2] + 0u);
    { const bool branch_taken = static_cast<std::int32_t>(ctx.gpr[17]) < 0;
    // nop
      if (branch_taken) {
          goto L_0892E274;
      }
      goto L_0892E250;
    }
L_0892E250:
    ctx.set_gpr(1, static_cast<std::int32_t>(ctx.gpr[17]) < static_cast<std::int32_t>(ctx.gpr[16]) ? 1u : 0u);
    { const bool branch_taken = ctx.gpr[1] == 0u;
    // nop
      if (branch_taken) {
          goto L_0892E274;
      }
      goto L_0892E25C;
    }
L_0892E25C:
    ctx.set_gpr(2, 2245u << 16u);
    ctx.set_gpr(4, rt.memory().aot_load32(ctx.gpr[2] + static_cast<std::uint32_t>(30816)));
    ctx.set_gpr(5, ctx.gpr[17] + 0u);
    ctx.set_gpr(6, 0u + 0u);
    ctx.set_gpr(31, 0x0892E274u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0078_entry, 78u, 1033u, 0x0893FDBCu>(ctx, &aot_mem) && ctx.pc == 0x0892E274u) goto L_0892E274;
    return;
L_0892E274:
    ctx.set_gpr(3, 2245u << 16u);
    ctx.set_gpr(4, rt.memory().aot_load32(ctx.gpr[3] + static_cast<std::uint32_t>(30820)));
    ctx.set_gpr(3, rt.memory().aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(4)));
    ctx.set_gpr(5, rt.memory().aot_load32(ctx.gpr[18] + static_cast<std::uint32_t>(80)));
    { const bool branch_taken = static_cast<std::int32_t>(ctx.gpr[5]) < 0;
    // nop
      if (branch_taken) {
          goto L_0892E2AC;
      }
      goto L_0892E28C;
    }
L_0892E28C:
    ctx.set_gpr(1, static_cast<std::int32_t>(ctx.gpr[5]) < static_cast<std::int32_t>(ctx.gpr[3]) ? 1u : 0u);
    { const bool branch_taken = ctx.gpr[1] == 0u;
    // nop
      if (branch_taken) {
          goto L_0892E2AC;
      }
      goto L_0892E298;
    }
L_0892E298:
    ctx.set_gpr(6, 0u + static_cast<std::uint32_t>(1));
    ctx.set_gpr(31, 0x0892E2A4u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0078_entry, 78u, 1033u, 0x0893FDBCu>(ctx, &aot_mem) && ctx.pc == 0x0892E2A4u) goto L_0892E2A4;
    return;
L_0892E2A4:
    ctx.set_gpr(31, 0x0892E2ACu);
    // nop
    goto L_0892E2C8;
L_0892E2AC:
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
L_0892E2C8:
    ctx.set_gpr(3, 2245u << 16u);
    ctx.set_gpr(3, rt.memory().aot_load32(ctx.gpr[3] + static_cast<std::uint32_t>(30820)));
    ctx.set_gpr(10, rt.memory().aot_load32(ctx.gpr[3] + static_cast<std::uint32_t>(4)));
    ctx.set_gpr(8, 0u + 0u);
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_0892E340;
      }
      goto L_0892E2E0;
    }
L_0892E2E0:
    ctx.set_gpr(8, 0u + static_cast<std::uint32_t>(1));
    ctx.set_gpr(10, ctx.gpr[10] + static_cast<std::uint32_t>(-1));
    ctx.set_gpr(3, 2245u << 16u);
    ctx.set_gpr(3, rt.memory().aot_load32(ctx.gpr[3] + static_cast<std::uint32_t>(30820)));
    ctx.set_gpr(4, rt.memory().aot_load32(ctx.gpr[3] + static_cast<std::uint32_t>(0)));
    ctx.set_gpr(9, ctx.gpr[10] + static_cast<std::uint32_t>(-1));
    ctx.set_gpr(3, ctx.gpr[9] << 2u);
    ctx.set_gpr(7, ctx.gpr[4] + ctx.gpr[3]);
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_0892E338;
      }
      goto L_0892E308;
    }
L_0892E308:
    ctx.set_gpr(6, rt.memory().aot_load32(ctx.gpr[7] + static_cast<std::uint32_t>(4)));
    ctx.set_gpr(5, rt.memory().aot_load32(ctx.gpr[6] + static_cast<std::uint32_t>(76)));
    ctx.set_gpr(4, rt.memory().aot_load32(ctx.gpr[7] + static_cast<std::uint32_t>(0)));
    ctx.set_gpr(3, rt.memory().aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(76)));
    ctx.set_gpr(1, static_cast<std::int32_t>(ctx.gpr[5]) < static_cast<std::int32_t>(ctx.gpr[3]) ? 1u : 0u);
    { const bool branch_taken = ctx.gpr[1] == 0u;
    // nop
      if (branch_taken) {
          goto L_0892E330;
      }
      goto L_0892E324;
    }
L_0892E324:
    rt.memory().aot_store32(ctx.gpr[7] + static_cast<std::uint32_t>(0), ctx.gpr[6]);
    rt.memory().aot_store32(ctx.gpr[7] + static_cast<std::uint32_t>(4), ctx.gpr[4]);
    ctx.set_gpr(8, 0u + 0u);
    goto L_0892E330;
L_0892E330:
    ctx.set_gpr(9, ctx.gpr[9] + static_cast<std::uint32_t>(-1));
    ctx.set_gpr(7, ctx.gpr[7] + static_cast<std::uint32_t>(-4));
    goto L_0892E338;
L_0892E338:
    { const bool branch_taken = static_cast<std::int32_t>(ctx.gpr[9]) >= 0;
    // nop
      if (branch_taken) {
          goto L_0892E308;
      }
      goto L_0892E340;
    }
L_0892E340:
    { const bool branch_taken = ctx.gpr[8] != 0u;
    // nop
      if (branch_taken) {
          goto L_0892E350;
      }
      goto L_0892E348;
    }
L_0892E348:
    { const bool branch_taken = static_cast<std::int32_t>(ctx.gpr[10]) > 0;
    // nop
      if (branch_taken) {
          goto L_0892E2E0;
      }
      goto L_0892E350;
    }
L_0892E350:
    ctx.set_gpr(3, 2245u << 16u);
    ctx.set_gpr(3, rt.memory().aot_load32(ctx.gpr[3] + static_cast<std::uint32_t>(30820)));
    ctx.set_gpr(4, rt.memory().aot_load32(ctx.gpr[3] + static_cast<std::uint32_t>(4)));
    ctx.set_gpr(7, rt.memory().aot_load32(ctx.gpr[3] + static_cast<std::uint32_t>(0)));
    ctx.set_gpr(9, 0u + 0u);
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_0892E37C;
      }
      goto L_0892E36C;
    }
L_0892E36C:
    ctx.set_gpr(3, rt.memory().aot_load32(ctx.gpr[7] + static_cast<std::uint32_t>(0)));
    rt.memory().aot_store32(ctx.gpr[3] + static_cast<std::uint32_t>(80), ctx.gpr[9]);
    ctx.set_gpr(9, ctx.gpr[9] + static_cast<std::uint32_t>(1));
    ctx.set_gpr(7, ctx.gpr[7] + static_cast<std::uint32_t>(4));
    goto L_0892E37C;
L_0892E37C:
    ctx.set_gpr(3, static_cast<std::int32_t>(ctx.gpr[9]) < static_cast<std::int32_t>(ctx.gpr[4]) ? 1u : 0u);
    { const bool branch_taken = ctx.gpr[3] != 0u;
    // nop
      if (branch_taken) {
          goto L_0892E36C;
      }
      goto L_0892E388;
    }
L_0892E388:
    jump_target = ctx.gpr[31];
    // nop
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_0892E390:
    ctx.set_gpr(2, 0u + 0u);
    jump_target = ctx.gpr[31];
    // nop
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_0892E39C:
    ctx.set_gpr(2, 0u + 0u);
    jump_target = ctx.gpr[31];
    // nop
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_0892E3A8:
    ctx.set_gpr(6, rt.memory().aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(124)));
    { const bool branch_taken = ctx.gpr[6] == 0u;
    // nop
      if (branch_taken) {
          goto L_0892E3E8;
      }
      goto L_0892E3B4;
    }
L_0892E3B4:
    ctx.set_gpr(3, rt.memory().aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(100)));
    { const bool branch_taken = ctx.gpr[3] == 0u;
    // nop
      if (branch_taken) {
          goto L_0892E3E8;
      }
      goto L_0892E3C0;
    }
L_0892E3C0:
    ctx.set_gpr(2, ctx.gpr[5] < ctx.gpr[6] ? 1u : 0u);
    { const bool branch_taken = ctx.gpr[2] != 0u;
    // nop
      if (branch_taken) {
          goto L_0892E3E8;
      }
      goto L_0892E3CC;
    }
L_0892E3CC:
    ctx.set_gpr(2, ctx.gpr[6] + ctx.gpr[3]);
    ctx.set_gpr(1, ctx.gpr[5] < ctx.gpr[2] ? 1u : 0u);
    { const bool branch_taken = ctx.gpr[1] == 0u;
    // nop
      if (branch_taken) {
          goto L_0892E3E8;
      }
      goto L_0892E3DC;
    }
L_0892E3DC:
    ctx.set_gpr(2, 0u + static_cast<std::uint32_t>(1));
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_0892E3EC;
      }
      goto L_0892E3E8;
    }
L_0892E3E8:
    ctx.set_gpr(2, 0u + 0u);
    goto L_0892E3EC;
L_0892E3EC:
    jump_target = ctx.gpr[31];
    // nop
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_0892E3F4:
    ctx.set_gpr(29, ctx.gpr[29] + static_cast<std::uint32_t>(-32));
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(28), ctx.gpr[31]);
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(24), ctx.gpr[19]);
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(20), ctx.gpr[18]);
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(16), ctx.gpr[17]);
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(12), ctx.gpr[16]);
    ctx.set_gpr(16, ctx.gpr[4] + 0u);
    ctx.set_gpr(2, 2245u << 16u);
    ctx.set_gpr(3, rt.memory().aot_load32(ctx.gpr[2] + static_cast<std::uint32_t>(30820)));
    ctx.set_gpr(2, rt.memory().aot_load32(ctx.gpr[3] + static_cast<std::uint32_t>(4)));
    ctx.set_gpr(3, rt.memory().aot_load32(ctx.gpr[3] + static_cast<std::uint32_t>(0)));
    ctx.set_gpr(19, ctx.gpr[2] + static_cast<std::uint32_t>(-1));
    ctx.set_gpr(2, ctx.gpr[19] << 2u);
    ctx.set_gpr(18, ctx.gpr[3] + ctx.gpr[2]);
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_0892E488;
      }
      goto L_0892E434;
    }
L_0892E434:
    ctx.set_gpr(17, rt.memory().aot_load32(ctx.gpr[18] + static_cast<std::uint32_t>(0)));
    { const bool branch_taken = ctx.gpr[17] == 0u;
    // nop
      if (branch_taken) {
          goto L_0892E480;
      }
      goto L_0892E440;
    }
L_0892E440:
    ctx.set_gpr(4, ctx.gpr[17] + 0u);
    ctx.set_gpr(31, 0x0892E44Cu);
    // nop
    goto L_0892EADC;
L_0892E44C:
    { const bool branch_taken = ctx.gpr[2] == 0u;
    // nop
      if (branch_taken) {
          goto L_0892E480;
      }
      goto L_0892E454;
    }
L_0892E454:
    ctx.set_gpr(4, ctx.gpr[17] + 0u);
    ctx.set_gpr(5, ctx.gpr[16] + 0u);
    ctx.set_gpr(25, rt.memory().aot_load32(ctx.gpr[17] + static_cast<std::uint32_t>(0)));
    ctx.set_gpr(25, rt.memory().aot_load32(ctx.gpr[25] + static_cast<std::uint32_t>(472)));
    jump_target = ctx.gpr[25];
    ctx.set_gpr(31, 0x0892E46Cu);
    // nop
    ctx.pc = jump_target;
    if (rt.invoke_chained_call(ctx, &aot_mem) && ctx.pc == 0x0892E46Cu) goto L_0892E46C;
    return;
L_0892E46C:
    { const bool branch_taken = ctx.gpr[2] == 0u;
    // nop
      if (branch_taken) {
          goto L_0892E480;
      }
      goto L_0892E474;
    }
L_0892E474:
    ctx.set_gpr(2, ctx.gpr[17] + 0u);
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_0892E494;
      }
      goto L_0892E480;
    }
L_0892E480:
    ctx.set_gpr(19, ctx.gpr[19] + static_cast<std::uint32_t>(-1));
    ctx.set_gpr(18, ctx.gpr[18] + static_cast<std::uint32_t>(-4));
    goto L_0892E488;
L_0892E488:
    { const bool branch_taken = static_cast<std::int32_t>(ctx.gpr[19]) >= 0;
    // nop
      if (branch_taken) {
          goto L_0892E434;
      }
      goto L_0892E490;
    }
L_0892E490:
    ctx.set_gpr(2, 0u + 0u);
    goto L_0892E494;
L_0892E494:
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
L_0892E4B4:
    ctx.set_gpr(2, 0u + static_cast<std::uint32_t>(1));
    jump_target = ctx.gpr[31];
    // nop
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_0892E4C0:
    ctx.set_gpr(2, 0u + 0u);
    jump_target = ctx.gpr[31];
    // nop
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_0892E4CC:
    ctx.set_gpr(2, 0u + static_cast<std::uint32_t>(-1));
    jump_target = ctx.gpr[31];
    // nop
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_0892E4D8:
    ctx.set_gpr(2, rt.memory().aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(72)));
    jump_target = ctx.gpr[31];
    // nop
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_0892E4E4:
    rt.memory().aot_store32(ctx.gpr[4] + static_cast<std::uint32_t>(72), ctx.gpr[5]);
    jump_target = ctx.gpr[31];
    // nop
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_0892E4F0:
    ctx.set_gpr(2, ctx.gpr[4] + static_cast<std::uint32_t>(8));
    jump_target = ctx.gpr[31];
    // nop
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_0892E4FC:
    ctx.set_gpr(29, ctx.gpr[29] + static_cast<std::uint32_t>(-16));
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(12), ctx.gpr[31]);
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(8), ctx.gpr[16]);
    ctx.set_gpr(16, ctx.gpr[4] + 0u);
    ctx.set_gpr(4, ctx.gpr[16] + static_cast<std::uint32_t>(8));
    ctx.set_gpr(6, 0u + static_cast<std::uint32_t>(63));
    ctx.set_gpr(31, 0x0892E51Cu);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0004_entry, 4u, 574u, 0x08816B28u>(ctx, &aot_mem) && ctx.pc == 0x0892E51Cu) goto L_0892E51C;
    return;
L_0892E51C:
    rt.memory().aot_store8(ctx.gpr[16] + static_cast<std::uint32_t>(71), static_cast<std::uint8_t>(0u));
    ctx.set_gpr(31, rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(12)));
    ctx.set_gpr(16, rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(8)));
    ctx.set_gpr(29, ctx.gpr[29] + static_cast<std::uint32_t>(16));
    jump_target = ctx.gpr[31];
    // nop
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_0892E534:
    ctx.set_gpr(2, 2245u << 16u);
    ctx.set_gpr(2, rt.memory().aot_load32(ctx.gpr[2] + static_cast<std::uint32_t>(30816)));
    ctx.set_gpr(3, ctx.gpr[4] << 2u);
    ctx.set_gpr(2, rt.memory().aot_load32(ctx.gpr[2] + static_cast<std::uint32_t>(0)));
    ctx.set_gpr(2, ctx.gpr[2] + ctx.gpr[3]);
    ctx.set_gpr(2, rt.memory().aot_load32(ctx.gpr[2] + static_cast<std::uint32_t>(0)));
    jump_target = ctx.gpr[31];
    // nop
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_0892E554:
    ctx.set_gpr(29, ctx.gpr[29] + static_cast<std::uint32_t>(-160));
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(12), ctx.gpr[31]);
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(8), ctx.gpr[17]);
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(4), ctx.gpr[16]);
    ctx.set_gpr(17, ctx.gpr[4] + 0u);
    ctx.set_gpr(16, ctx.gpr[5] + 0u);
    ctx.set_gpr(31, 0x0892E574u);
    // nop
    goto L_0892EADC;
L_0892E574:
    { const bool branch_taken = ctx.gpr[2] == 0u;
    // nop
      if (branch_taken) {
          goto L_0892E65C;
      }
      goto L_0892E57C;
    }
L_0892E57C:
    ctx.set_gpr(4, ctx.gpr[17] + 0u);
    ctx.set_gpr(25, rt.memory().aot_load32(ctx.gpr[17] + static_cast<std::uint32_t>(0)));
    ctx.set_gpr(25, rt.memory().aot_load32(ctx.gpr[25] + static_cast<std::uint32_t>(320)));
    jump_target = ctx.gpr[25];
    ctx.set_gpr(31, 0x0892E590u);
    // nop
    ctx.pc = jump_target;
    if (rt.invoke_chained_call(ctx, &aot_mem) && ctx.pc == 0x0892E590u) goto L_0892E590;
    return;
L_0892E590:
    { const bool branch_taken = ctx.gpr[2] == 0u;
    // nop
      if (branch_taken) {
          goto L_0892E65C;
      }
      goto L_0892E598;
    }
L_0892E598:
    ctx.set_gpr(4, 0u + static_cast<std::uint32_t>(168));
    ctx.set_gpr(31, 0x0892E5A4u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0094_entry, 94u, 75u, 0x0897C4D8u>(ctx, &aot_mem) && ctx.pc == 0x0892E5A4u) goto L_0892E5A4;
    return;
L_0892E5A4:
    { const bool branch_taken = ctx.gpr[2] == 0u;
    // nop
      if (branch_taken) {
          goto L_0892E5B8;
      }
      goto L_0892E5AC;
    }
L_0892E5AC:
    ctx.set_gpr(4, ctx.gpr[2] + 0u);
    ctx.set_gpr(31, 0x0892E5B8u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0094_entry, 94u, 65u, 0x0897C3ECu>(ctx, &aot_mem) && ctx.pc == 0x0892E5B8u) goto L_0892E5B8;
    return;
L_0892E5B8:
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(156), ctx.gpr[2]);
    ctx.set_gpr(3, rt.memory().aot_load32(ctx.gpr[17] + static_cast<std::uint32_t>(124)));
    rt.memory().aot_store32(ctx.gpr[2] + static_cast<std::uint32_t>(0), ctx.gpr[3]);
    ctx.set_gpr(3, rt.memory().aot_load32(ctx.gpr[17] + static_cast<std::uint32_t>(100)));
    ctx.set_gpr(2, rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(156)));
    rt.memory().aot_store32(ctx.gpr[2] + static_cast<std::uint32_t>(4), ctx.gpr[3]);
    ctx.set_gpr(4, ctx.gpr[17] + 0u);
    ctx.set_gpr(31, 0x0892E5DCu);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0081_entry, 81u, 30u, 0x089482C8u>(ctx, &aot_mem) && ctx.pc == 0x0892E5DCu) goto L_0892E5DC;
    return;
L_0892E5DC:
    ctx.set_gpr(4, ctx.gpr[29] + static_cast<std::uint32_t>(28));
    ctx.set_gpr(5, 2228u << 16u);
    ctx.set_gpr(5, ctx.gpr[5] + static_cast<std::uint32_t>(-10596));
    ctx.set_gpr(6, ctx.gpr[2] + 0u);
    ctx.set_gpr(31, 0x0892E5F4u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0004_entry, 4u, 423u, 0x08815FF4u>(ctx, &aot_mem) && ctx.pc == 0x0892E5F4u) goto L_0892E5F4;
    return;
L_0892E5F4:
    ctx.set_gpr(4, rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(156)));
    ctx.set_gpr(5, ctx.gpr[29] + static_cast<std::uint32_t>(28));
    ctx.set_gpr(31, 0x0892E604u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0094_entry, 94u, 71u, 0x0897C468u>(ctx, &aot_mem) && ctx.pc == 0x0892E604u) goto L_0892E604;
    return;
L_0892E604:
    ctx.set_gpr(4, ctx.gpr[17] + 0u);
    ctx.set_gpr(25, rt.memory().aot_load32(ctx.gpr[17] + static_cast<std::uint32_t>(0)));
    ctx.set_gpr(25, rt.memory().aot_load32(ctx.gpr[25] + static_cast<std::uint32_t>(464)));
    jump_target = ctx.gpr[25];
    ctx.set_gpr(31, 0x0892E618u);
    // nop
    ctx.pc = jump_target;
    if (rt.invoke_chained_call(ctx, &aot_mem) && ctx.pc == 0x0892E618u) goto L_0892E618;
    return;
L_0892E618:
    ctx.set_gpr(4, rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(156)));
    ctx.set_gpr(5, ctx.gpr[2] + 0u);
    ctx.set_gpr(31, 0x0892E628u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0094_entry, 94u, 73u, 0x0897C4A0u>(ctx, &aot_mem) && ctx.pc == 0x0892E628u) goto L_0892E628;
    return;
L_0892E628:
    ctx.set_gpr(4, ctx.gpr[16] + 0u);
    ctx.set_gpr(5, ctx.gpr[29] + static_cast<std::uint32_t>(156));
    ctx.set_gpr(6, 2200u << 16u);
    ctx.set_gpr(6, ctx.gpr[6] + static_cast<std::uint32_t>(-14984));
    ctx.set_gpr(7, 0u + 0u);
    ctx.set_gpr(31, 0x0892E644u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0067_entry, 67u, 28u, 0x08910268u>(ctx, &aot_mem) && ctx.pc == 0x0892E644u) goto L_0892E644;
    return;
L_0892E644:
    ctx.set_gpr(4, ctx.gpr[16] + 0u);
    ctx.set_gpr(5, ctx.gpr[2] + 0u);
    ctx.set_gpr(6, 0u + static_cast<std::uint32_t>(1));
    ctx.set_gpr(7, ctx.gpr[29] + static_cast<std::uint32_t>(156));
    ctx.set_gpr(31, 0x0892E65Cu);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0066_entry, 66u, 837u, 0x0890FF10u>(ctx, &aot_mem) && ctx.pc == 0x0892E65Cu) goto L_0892E65C;
    return;
L_0892E65C:
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
L_0892E674:
    ctx.set_gpr(29, ctx.gpr[29] + static_cast<std::uint32_t>(-32));
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(28), ctx.gpr[31]);
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(24), ctx.gpr[20]);
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(20), ctx.gpr[19]);
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(16), ctx.gpr[18]);
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(12), ctx.gpr[17]);
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(8), ctx.gpr[16]);
    ctx.set_gpr(16, ctx.gpr[4] + 0u);
    ctx.set_gpr(3, 2245u << 16u);
    ctx.set_gpr(3, rt.memory().aot_load32(ctx.gpr[3] + static_cast<std::uint32_t>(30816)));
    ctx.set_gpr(17, rt.memory().aot_load32(ctx.gpr[3] + static_cast<std::uint32_t>(4)));
    ctx.set_gpr(19, rt.memory().aot_load32(ctx.gpr[3] + static_cast<std::uint32_t>(0)));
    ctx.set_gpr(20, 0u + 0u);
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_0892E6F0;
      }
      goto L_0892E6B0;
    }
L_0892E6B0:
    ctx.set_gpr(18, rt.memory().aot_load32(ctx.gpr[19] + static_cast<std::uint32_t>(0)));
    { const bool branch_taken = ctx.gpr[18] == 0u;
    // nop
      if (branch_taken) {
          goto L_0892E6E8;
      }
      goto L_0892E6BC;
    }
L_0892E6BC:
    ctx.set_gpr(4, ctx.gpr[18] + 0u);
    ctx.set_gpr(31, 0x0892E6C8u);
    // nop
    goto L_0892EADC;
L_0892E6C8:
    { const bool branch_taken = ctx.gpr[2] == 0u;
    // nop
      if (branch_taken) {
          goto L_0892E6E8;
      }
      goto L_0892E6D0;
    }
L_0892E6D0:
    ctx.set_gpr(4, ctx.gpr[18] + 0u);
    ctx.set_gpr(5, ctx.gpr[16] + 0u);
    ctx.set_gpr(25, rt.memory().aot_load32(ctx.gpr[18] + static_cast<std::uint32_t>(0)));
    ctx.set_gpr(25, rt.memory().aot_load32(ctx.gpr[25] + static_cast<std::uint32_t>(488)));
    jump_target = ctx.gpr[25];
    ctx.set_gpr(31, 0x0892E6E8u);
    // nop
    ctx.pc = jump_target;
    if (rt.invoke_chained_call(ctx, &aot_mem) && ctx.pc == 0x0892E6E8u) goto L_0892E6E8;
    return;
L_0892E6E8:
    ctx.set_gpr(20, ctx.gpr[20] + static_cast<std::uint32_t>(1));
    ctx.set_gpr(19, ctx.gpr[19] + static_cast<std::uint32_t>(4));
    goto L_0892E6F0;
L_0892E6F0:
    ctx.set_gpr(3, static_cast<std::int32_t>(ctx.gpr[20]) < static_cast<std::int32_t>(ctx.gpr[17]) ? 1u : 0u);
    { const bool branch_taken = ctx.gpr[3] != 0u;
    // nop
      if (branch_taken) {
          goto L_0892E6B0;
      }
      goto L_0892E6FC;
    }
L_0892E6FC:
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
L_0892E720:
    ctx.set_gpr(29, ctx.gpr[29] + static_cast<std::uint32_t>(-16));
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(12), ctx.gpr[31]);
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(8), ctx.gpr[16]);
    ctx.set_gpr(16, ctx.gpr[4] + 0u);
    ctx.set_gpr(3, rt.memory().aot_load8(ctx.gpr[4] + static_cast<std::uint32_t>(84)));
    { const bool branch_taken = ctx.gpr[3] != 0u;
    // nop
      if (branch_taken) {
          goto L_0892E7C8;
      }
      goto L_0892E73C;
    }
L_0892E73C:
    ctx.set_gpr(5, 0u + 0u);
    ctx.set_gpr(31, 0x0892E748u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0075_entry, 75u, 282u, 0x08932008u>(ctx, &aot_mem) && ctx.pc == 0x0892E748u) goto L_0892E748;
    return;
L_0892E748:
    rt.memory().aot_store32(ctx.gpr[16] + static_cast<std::uint32_t>(104), 0u);
    ctx.set_gpr(3, rt.memory().aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(140)));
    ctx.set_gpr(3, ctx.gpr[3] & 8u);
    { const bool branch_taken = ctx.gpr[3] == 0u;
    // nop
      if (branch_taken) {
          goto L_0892E774;
      }
      goto L_0892E75C;
    }
L_0892E75C:
    ctx.set_gpr(4, ctx.gpr[16] + 0u);
    ctx.set_gpr(5, 0u + static_cast<std::uint32_t>(1));
    ctx.set_gpr(25, rt.memory().aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(0)));
    ctx.set_gpr(25, rt.memory().aot_load32(ctx.gpr[25] + static_cast<std::uint32_t>(276)));
    jump_target = ctx.gpr[25];
    ctx.set_gpr(31, 0x0892E774u);
    // nop
    ctx.pc = jump_target;
    if (rt.invoke_chained_call(ctx, &aot_mem) && ctx.pc == 0x0892E774u) goto L_0892E774;
    return;
L_0892E774:
    ctx.set_gpr(3, 0u + static_cast<std::uint32_t>(1));
    rt.memory().aot_store8(ctx.gpr[16] + static_cast<std::uint32_t>(84), static_cast<std::uint8_t>(ctx.gpr[3]));
    rt.memory().aot_store32(ctx.gpr[16] + static_cast<std::uint32_t>(116), 0u);
    ctx.set_gpr(3, rt.memory().aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(100)));
    { const bool branch_taken = ctx.gpr[3] != 0u;
    // nop
      if (branch_taken) {
          goto L_0892E7C8;
      }
      goto L_0892E78C;
    }
L_0892E78C:
    ctx.set_gpr(3, rt.memory().aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(112)));
    { const bool branch_taken = ctx.gpr[3] == 0u;
    // nop
      if (branch_taken) {
          goto L_0892E7C8;
      }
      goto L_0892E798;
    }
L_0892E798:
    ctx.set_gpr(4, ctx.gpr[16] + 0u);
    ctx.set_gpr(5, 0u + static_cast<std::uint32_t>(16));
    ctx.set_gpr(25, rt.memory().aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(0)));
    ctx.set_gpr(25, rt.memory().aot_load32(ctx.gpr[25] + static_cast<std::uint32_t>(92)));
    jump_target = ctx.gpr[25];
    ctx.set_gpr(31, 0x0892E7B0u);
    // nop
    ctx.pc = jump_target;
    if (rt.invoke_chained_call(ctx, &aot_mem) && ctx.pc == 0x0892E7B0u) goto L_0892E7B0;
    return;
L_0892E7B0:
    ctx.set_gpr(4, ctx.gpr[16] + 0u);
    ctx.set_gpr(5, ctx.gpr[2] + 0u);
    ctx.set_gpr(25, rt.memory().aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(0)));
    ctx.set_gpr(25, rt.memory().aot_load32(ctx.gpr[25] + static_cast<std::uint32_t>(144)));
    jump_target = ctx.gpr[25];
    ctx.set_gpr(31, 0x0892E7C8u);
    // nop
    ctx.pc = jump_target;
    if (rt.invoke_chained_call(ctx, &aot_mem) && ctx.pc == 0x0892E7C8u) goto L_0892E7C8;
    return;
L_0892E7C8:
    ctx.set_gpr(31, rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(12)));
    ctx.set_gpr(16, rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(8)));
    ctx.set_gpr(29, ctx.gpr[29] + static_cast<std::uint32_t>(16));
    jump_target = ctx.gpr[31];
    // nop
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_0892E7DC:
    ctx.set_gpr(29, ctx.gpr[29] + static_cast<std::uint32_t>(-16));
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(12), ctx.gpr[31]);
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(8), ctx.gpr[16]);
    ctx.set_gpr(16, ctx.gpr[4] + 0u);
    ctx.set_gpr(31, 0x0892E7F4u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0075_entry, 75u, 322u, 0x08932390u>(ctx, &aot_mem) && ctx.pc == 0x0892E7F4u) goto L_0892E7F4;
    return;
L_0892E7F4:
    ctx.set_gpr(2, rt.memory().aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(100)));
    { const bool branch_taken = ctx.gpr[2] == 0u;
    // nop
      if (branch_taken) {
          goto L_0892E81C;
      }
      goto L_0892E800;
    }
L_0892E800:
    ctx.set_gpr(4, ctx.gpr[16] + 0u);
    ctx.set_gpr(5, rt.memory().aot_load8(ctx.gpr[16] + static_cast<std::uint32_t>(84)));
    ctx.set_gpr(31, 0x0892E810u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0075_entry, 75u, 282u, 0x08932008u>(ctx, &aot_mem) && ctx.pc == 0x0892E810u) goto L_0892E810;
    return;
L_0892E810:
    rt.memory().aot_store32(ctx.gpr[16] + static_cast<std::uint32_t>(104), 0u);
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_0892E834;
      }
      goto L_0892E81C;
    }
L_0892E81C:
    ctx.set_gpr(4, ctx.gpr[16] + 0u);
    ctx.set_gpr(5, 0u + static_cast<std::uint32_t>(1));
    ctx.set_gpr(25, rt.memory().aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(0)));
    ctx.set_gpr(25, rt.memory().aot_load32(ctx.gpr[25] + static_cast<std::uint32_t>(272)));
    jump_target = ctx.gpr[25];
    ctx.set_gpr(31, 0x0892E834u);
    // nop
    ctx.pc = jump_target;
    if (rt.invoke_chained_call(ctx, &aot_mem) && ctx.pc == 0x0892E834u) goto L_0892E834;
    return;
L_0892E834:
    ctx.set_gpr(31, rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(12)));
    ctx.set_gpr(16, rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(8)));
    ctx.set_gpr(29, ctx.gpr[29] + static_cast<std::uint32_t>(16));
    jump_target = ctx.gpr[31];
    // nop
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_0892E848:
    ctx.set_gpr(29, ctx.gpr[29] + static_cast<std::uint32_t>(-16));
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(12), ctx.gpr[31]);
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(8), ctx.gpr[18]);
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(4), ctx.gpr[17]);
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(0), ctx.gpr[16]);
    ctx.set_gpr(16, ctx.gpr[4] + 0u);
    ctx.set_gpr(31, 0x0892E868u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0075_entry, 75u, 322u, 0x08932390u>(ctx, &aot_mem) && ctx.pc == 0x0892E868u) goto L_0892E868;
    return;
L_0892E868:
    ctx.set_gpr(3, rt.memory().aot_load8(ctx.gpr[16] + static_cast<std::uint32_t>(84)));
    { const bool branch_taken = ctx.gpr[3] == 0u;
    // nop
      if (branch_taken) {
          goto L_0892EAC0;
      }
      goto L_0892E874;
    }
L_0892E874:
    rt.memory().aot_store8(ctx.gpr[16] + static_cast<std::uint32_t>(84), static_cast<std::uint8_t>(0u));
    ctx.set_gpr(2, rt.memory().aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(140)));
    ctx.set_gpr(2, ctx.gpr[2] & 1024u);
    ctx.set_gpr(2, 0u < ctx.gpr[2] ? 1u : 0u);
    { const bool branch_taken = ctx.gpr[2] != 0u;
    // nop
      if (branch_taken) {
          goto L_0892E950;
      }
      goto L_0892E88C;
    }
L_0892E88C:
    ctx.set_gpr(4, ctx.gpr[16] + 0u);
    ctx.set_gpr(25, rt.memory().aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(0)));
    ctx.set_gpr(25, rt.memory().aot_load32(ctx.gpr[25] + static_cast<std::uint32_t>(352)));
    jump_target = ctx.gpr[25];
    ctx.set_gpr(31, 0x0892E8A0u);
    // nop
    ctx.pc = jump_target;
    if (rt.invoke_chained_call(ctx, &aot_mem) && ctx.pc == 0x0892E8A0u) goto L_0892E8A0;
    return;
L_0892E8A0:
    ctx.set_gpr(1, ctx.gpr[2] < static_cast<std::uint32_t>(2) ? 1u : 0u);
    { const bool branch_taken = ctx.gpr[1] != 0u;
    // nop
      if (branch_taken) {
          goto L_0892E950;
      }
      goto L_0892E8AC;
    }
L_0892E8AC:
    ctx.set_gpr(2, rt.memory().aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(144)));
    ctx.set_gpr(2, static_cast<std::int32_t>(ctx.gpr[2]) < 3 ? 1u : 0u);
    { const bool branch_taken = ctx.gpr[2] != 0u;
    // nop
      if (branch_taken) {
          goto L_0892E91C;
      }
      goto L_0892E8BC;
    }
L_0892E8BC:
    ctx.set_gpr(4, ctx.gpr[16] + 0u);
    ctx.set_gpr(25, rt.memory().aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(0)));
    ctx.set_gpr(25, rt.memory().aot_load32(ctx.gpr[25] + static_cast<std::uint32_t>(464)));
    jump_target = ctx.gpr[25];
    ctx.set_gpr(31, 0x0892E8D0u);
    // nop
    ctx.pc = jump_target;
    if (rt.invoke_chained_call(ctx, &aot_mem) && ctx.pc == 0x0892E8D0u) goto L_0892E8D0;
    return;
L_0892E8D0:
    ctx.set_gpr(18, ctx.gpr[2] + 0u);
    ctx.set_gpr(4, ctx.gpr[16] + 0u);
    ctx.set_gpr(25, rt.memory().aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(0)));
    ctx.set_gpr(25, rt.memory().aot_load32(ctx.gpr[25] + static_cast<std::uint32_t>(456)));
    jump_target = ctx.gpr[25];
    ctx.set_gpr(31, 0x0892E8E8u);
    // nop
    ctx.pc = jump_target;
    if (rt.invoke_chained_call(ctx, &aot_mem) && ctx.pc == 0x0892E8E8u) goto L_0892E8E8;
    return;
L_0892E8E8:
    ctx.set_gpr(17, ctx.gpr[2] + 0u);
    ctx.set_gpr(4, ctx.gpr[16] + 0u);
    ctx.set_gpr(25, rt.memory().aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(0)));
    ctx.set_gpr(25, rt.memory().aot_load32(ctx.gpr[25] + static_cast<std::uint32_t>(352)));
    jump_target = ctx.gpr[25];
    ctx.set_gpr(31, 0x0892E900u);
    // nop
    ctx.pc = jump_target;
    if (rt.invoke_chained_call(ctx, &aot_mem) && ctx.pc == 0x0892E900u) goto L_0892E900;
    return;
L_0892E900:
    ctx.set_gpr(4, 2228u << 16u);
    ctx.set_gpr(4, ctx.gpr[4] + static_cast<std::uint32_t>(-10588));
    ctx.set_gpr(5, ctx.gpr[18] + 0u);
    ctx.set_gpr(6, ctx.gpr[17] + 0u);
    ctx.set_gpr(7, ctx.gpr[2] + 0u);
    ctx.set_gpr(31, 0x0892E91Cu);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0084_entry, 84u, 441u, 0x08955DC4u>(ctx, &aot_mem) && ctx.pc == 0x0892E91Cu) goto L_0892E91C;
    return;
L_0892E91C:
    ctx.set_gpr(2, rt.memory().aot_load8(ctx.gpr[28] + static_cast<std::uint32_t>(-32197)));
    { const bool branch_taken = ctx.gpr[2] != 0u;
    // nop
      if (branch_taken) {
          goto L_0892E950;
      }
      goto L_0892E928;
    }
L_0892E928:
    ctx.set_gpr(2, 0u + static_cast<std::uint32_t>(1));
    rt.memory().aot_store8(ctx.gpr[28] + static_cast<std::uint32_t>(-32197), static_cast<std::uint8_t>(ctx.gpr[2]));
    ctx.set_gpr(2, rt.memory().aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(144)));
    ctx.set_gpr(2, static_cast<std::int32_t>(ctx.gpr[2]) < 3 ? 1u : 0u);
    { const bool branch_taken = ctx.gpr[2] != 0u;
    // nop
      if (branch_taken) {
          goto L_0892E950;
      }
      goto L_0892E940;
    }
L_0892E940:
    ctx.set_gpr(4, 2228u << 16u);
    ctx.set_gpr(4, ctx.gpr[4] + static_cast<std::uint32_t>(-10492));
    ctx.set_gpr(31, 0x0892E950u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0084_entry, 84u, 441u, 0x08955DC4u>(ctx, &aot_mem) && ctx.pc == 0x0892E950u) goto L_0892E950;
    return;
L_0892E950:
    ctx.set_gpr(2, rt.memory().aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(196)));
    { const bool branch_taken = ctx.gpr[2] == 0u;
    // nop
      if (branch_taken) {
          goto L_0892EA84;
      }
      goto L_0892E95C;
    }
L_0892E95C:
    ctx.set_gpr(2, rt.memory().aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(144)));
    ctx.set_gpr(2, static_cast<std::int32_t>(ctx.gpr[2]) < 3 ? 1u : 0u);
    { const bool branch_taken = ctx.gpr[2] != 0u;
    // nop
      if (branch_taken) {
          goto L_0892EA84;
      }
      goto L_0892E96C;
    }
L_0892E96C:
    ctx.set_gpr(31, 0x0892E974u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0084_entry, 84u, 548u, 0x0895654Cu>(ctx, &aot_mem) && ctx.pc == 0x0892E974u) goto L_0892E974;
    return;
L_0892E974:
    ctx.set_gpr(2, static_cast<std::int32_t>(ctx.gpr[2]) < 5 ? 1u : 0u);
    { const bool branch_taken = ctx.gpr[2] != 0u;
    // nop
      if (branch_taken) {
          goto L_0892EA84;
      }
      goto L_0892E980;
    }
L_0892E980:
    ctx.set_gpr(2, rt.memory().aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(144)));
    ctx.set_gpr(2, static_cast<std::int32_t>(ctx.gpr[2]) < 3 ? 1u : 0u);
    { const bool branch_taken = ctx.gpr[2] != 0u;
    // nop
      if (branch_taken) {
          goto L_0892E9D8;
      }
      goto L_0892E990;
    }
L_0892E990:
    ctx.set_gpr(4, ctx.gpr[16] + 0u);
    ctx.set_gpr(25, rt.memory().aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(0)));
    ctx.set_gpr(25, rt.memory().aot_load32(ctx.gpr[25] + static_cast<std::uint32_t>(464)));
    jump_target = ctx.gpr[25];
    ctx.set_gpr(31, 0x0892E9A4u);
    // nop
    ctx.pc = jump_target;
    if (rt.invoke_chained_call(ctx, &aot_mem) && ctx.pc == 0x0892E9A4u) goto L_0892E9A4;
    return;
L_0892E9A4:
    ctx.set_gpr(17, ctx.gpr[2] + 0u);
    ctx.set_gpr(4, ctx.gpr[16] + 0u);
    ctx.set_gpr(25, rt.memory().aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(0)));
    ctx.set_gpr(25, rt.memory().aot_load32(ctx.gpr[25] + static_cast<std::uint32_t>(456)));
    jump_target = ctx.gpr[25];
    ctx.set_gpr(31, 0x0892E9BCu);
    // nop
    ctx.pc = jump_target;
    if (rt.invoke_chained_call(ctx, &aot_mem) && ctx.pc == 0x0892E9BCu) goto L_0892E9BC;
    return;
L_0892E9BC:
    ctx.set_gpr(4, 2228u << 16u);
    ctx.set_gpr(4, ctx.gpr[4] + static_cast<std::uint32_t>(-10336));
    ctx.set_gpr(5, ctx.gpr[17] + 0u);
    ctx.set_gpr(6, ctx.gpr[2] + 0u);
    ctx.set_gpr(7, rt.memory().aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(196)));
    ctx.set_gpr(31, 0x0892E9D8u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0084_entry, 84u, 441u, 0x08955DC4u>(ctx, &aot_mem) && ctx.pc == 0x0892E9D8u) goto L_0892E9D8;
    return;
L_0892E9D8:
    ctx.set_gpr(4, ctx.gpr[16] + 0u);
    ctx.set_gpr(5, 0u + 0u);
    ctx.set_gpr(25, rt.memory().aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(0)));
    ctx.set_gpr(25, rt.memory().aot_load32(ctx.gpr[25] + static_cast<std::uint32_t>(412)));
    jump_target = ctx.gpr[25];
    ctx.set_gpr(31, 0x0892E9F0u);
    // nop
    ctx.pc = jump_target;
    if (rt.invoke_chained_call(ctx, &aot_mem) && ctx.pc == 0x0892E9F0u) goto L_0892E9F0;
    return;
L_0892E9F0:
    ctx.set_gpr(31, 0x0892E9F8u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0064_entry, 64u, 444u, 0x08905FF0u>(ctx, &aot_mem) && ctx.pc == 0x0892E9F8u) goto L_0892E9F8;
    return;
L_0892E9F8:
    ctx.set_gpr(2, rt.memory().aot_load8(ctx.gpr[2] + static_cast<std::uint32_t>(134)));
    { const bool branch_taken = ctx.gpr[2] == 0u;
    // nop
      if (branch_taken) {
          goto L_0892EA84;
      }
      goto L_0892EA04;
    }
L_0892EA04:
    ctx.set_gpr(31, 0x0892EA0Cu);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0064_entry, 64u, 444u, 0x08905FF0u>(ctx, &aot_mem) && ctx.pc == 0x0892EA0Cu) goto L_0892EA0C;
    return;
L_0892EA0C:
    ctx.set_gpr(2, rt.memory().aot_load8(ctx.gpr[2] + static_cast<std::uint32_t>(132)));
    { const bool branch_taken = ctx.gpr[2] != 0u;
    // nop
      if (branch_taken) {
          goto L_0892EA84;
      }
      goto L_0892EA18;
    }
L_0892EA18:
    ctx.set_gpr(2, rt.memory().aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(144)));
    ctx.set_gpr(2, static_cast<std::int32_t>(ctx.gpr[2]) < 3 ? 1u : 0u);
    { const bool branch_taken = ctx.gpr[2] != 0u;
    // nop
      if (branch_taken) {
          goto L_0892EA70;
      }
      goto L_0892EA28;
    }
L_0892EA28:
    ctx.set_gpr(4, ctx.gpr[16] + 0u);
    ctx.set_gpr(25, rt.memory().aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(0)));
    ctx.set_gpr(25, rt.memory().aot_load32(ctx.gpr[25] + static_cast<std::uint32_t>(464)));
    jump_target = ctx.gpr[25];
    ctx.set_gpr(31, 0x0892EA3Cu);
    // nop
    ctx.pc = jump_target;
    if (rt.invoke_chained_call(ctx, &aot_mem) && ctx.pc == 0x0892EA3Cu) goto L_0892EA3C;
    return;
L_0892EA3C:
    ctx.set_gpr(17, ctx.gpr[2] + 0u);
    ctx.set_gpr(4, ctx.gpr[16] + 0u);
    ctx.set_gpr(25, rt.memory().aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(0)));
    ctx.set_gpr(25, rt.memory().aot_load32(ctx.gpr[25] + static_cast<std::uint32_t>(456)));
    jump_target = ctx.gpr[25];
    ctx.set_gpr(31, 0x0892EA54u);
    // nop
    ctx.pc = jump_target;
    if (rt.invoke_chained_call(ctx, &aot_mem) && ctx.pc == 0x0892EA54u) goto L_0892EA54;
    return;
L_0892EA54:
    ctx.set_gpr(4, 2228u << 16u);
    ctx.set_gpr(4, ctx.gpr[4] + static_cast<std::uint32_t>(-10264));
    ctx.set_gpr(5, ctx.gpr[17] + 0u);
    ctx.set_gpr(6, ctx.gpr[2] + 0u);
    ctx.set_gpr(7, rt.memory().aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(196)));
    ctx.set_gpr(31, 0x0892EA70u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0084_entry, 84u, 441u, 0x08955DC4u>(ctx, &aot_mem) && ctx.pc == 0x0892EA70u) goto L_0892EA70;
    return;
L_0892EA70:
    ctx.set_gpr(4, ctx.gpr[16] + 0u);
    ctx.set_gpr(25, rt.memory().aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(0)));
    ctx.set_gpr(25, rt.memory().aot_load32(ctx.gpr[25] + static_cast<std::uint32_t>(420)));
    jump_target = ctx.gpr[25];
    ctx.set_gpr(31, 0x0892EA84u);
    // nop
    ctx.pc = jump_target;
    if (rt.invoke_chained_call(ctx, &aot_mem) && ctx.pc == 0x0892EA84u) goto L_0892EA84;
    return;
L_0892EA84:
    ctx.set_gpr(4, ctx.gpr[16] + 0u);
    ctx.set_gpr(25, rt.memory().aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(0)));
    ctx.set_gpr(25, rt.memory().aot_load32(ctx.gpr[25] + static_cast<std::uint32_t>(268)));
    jump_target = ctx.gpr[25];
    ctx.set_gpr(31, 0x0892EA98u);
    // nop
    ctx.pc = jump_target;
    if (rt.invoke_chained_call(ctx, &aot_mem) && ctx.pc == 0x0892EA98u) goto L_0892EA98;
    return;
L_0892EA98:
    ctx.set_gpr(3, rt.memory().aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(140)));
    ctx.set_gpr(3, ctx.gpr[3] & 8u);
    { const bool branch_taken = ctx.gpr[3] == 0u;
    // nop
      if (branch_taken) {
          goto L_0892EAC0;
      }
      goto L_0892EAA8;
    }
L_0892EAA8:
    ctx.set_gpr(4, ctx.gpr[16] + 0u);
    ctx.set_gpr(5, 0u + 0u);
    ctx.set_gpr(25, rt.memory().aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(0)));
    ctx.set_gpr(25, rt.memory().aot_load32(ctx.gpr[25] + static_cast<std::uint32_t>(276)));
    jump_target = ctx.gpr[25];
    ctx.set_gpr(31, 0x0892EAC0u);
    // nop
    ctx.pc = jump_target;
    if (rt.invoke_chained_call(ctx, &aot_mem) && ctx.pc == 0x0892EAC0u) goto L_0892EAC0;
    return;
L_0892EAC0:
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
L_0892EADC:
    ctx.set_gpr(2, rt.memory().aot_load8(ctx.gpr[4] + static_cast<std::uint32_t>(84)));
    jump_target = ctx.gpr[31];
    // nop
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_0892EAE8:
    ctx.set_gpr(29, ctx.gpr[29] + static_cast<std::uint32_t>(-32));
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(12), ctx.gpr[31]);
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(8), ctx.gpr[16]);
    ctx.set_gpr(16, ctx.gpr[4] + 0u);
    ctx.set_gpr(3, ctx.gpr[5] & 255u);
    { const bool branch_taken = ctx.gpr[3] != 0u;
    // nop
      if (branch_taken) {
          goto L_0892EBA8;
      }
      goto L_0892EB04;
    }
L_0892EB04:
    ctx.set_gpr(2, rt.memory().aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(140)));
    ctx.set_gpr(2, ctx.gpr[2] & 16u);
    { const bool branch_taken = ctx.gpr[2] == 0u;
    // nop
      if (branch_taken) {
          goto L_0892EB2C;
      }
      goto L_0892EB14;
    }
L_0892EB14:
    ctx.set_gpr(4, ctx.gpr[16] + static_cast<std::uint32_t>(88));
    ctx.set_gpr(5, 0u + 0u);
    ctx.set_gpr(31, 0x0892EB24u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0085_entry, 85u, 61u, 0x089584C4u>(ctx, &aot_mem) && ctx.pc == 0x0892EB24u) goto L_0892EB24;
    return;
L_0892EB24:
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_0892EC58;
      }
      goto L_0892EB2C;
    }
L_0892EB2C:
    ctx.set_gpr(3, rt.memory().aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(88)));
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(28), ctx.gpr[3]);
    { const bool branch_taken = ctx.gpr[3] == 0u;
    // nop
      if (branch_taken) {
          goto L_0892EB48;
      }
      goto L_0892EB3C;
    }
L_0892EB3C:
    ctx.set_gpr(2, rt.memory().aot_load32(ctx.gpr[3] + static_cast<std::uint32_t>(4)));
    ctx.set_gpr(2, ctx.gpr[2] + static_cast<std::uint32_t>(1));
    rt.memory().aot_store32(ctx.gpr[3] + static_cast<std::uint32_t>(4), ctx.gpr[2]);
    goto L_0892EB48;
L_0892EB48:
    ctx.set_gpr(4, ctx.gpr[16] + static_cast<std::uint32_t>(88));
    ctx.set_gpr(5, 0u + 0u);
    ctx.set_gpr(31, 0x0892EB58u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0085_entry, 85u, 61u, 0x089584C4u>(ctx, &aot_mem) && ctx.pc == 0x0892EB58u) goto L_0892EB58;
    return;
L_0892EB58:
    ctx.set_gpr(4, rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(28)));
    { const bool branch_taken = ctx.gpr[4] == 0u;
    // nop
      if (branch_taken) {
          goto L_0892EB8C;
      }
      goto L_0892EB64;
    }
L_0892EB64:
    ctx.set_gpr(5, 0u + static_cast<std::uint32_t>(1));
    ctx.set_gpr(25, rt.memory().aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(0)));
    ctx.set_gpr(25, rt.memory().aot_load32(ctx.gpr[25] + static_cast<std::uint32_t>(132)));
    jump_target = ctx.gpr[25];
    ctx.set_gpr(31, 0x0892EB78u);
    // nop
    ctx.pc = jump_target;
    if (rt.invoke_chained_call(ctx, &aot_mem) && ctx.pc == 0x0892EB78u) goto L_0892EB78;
    return;
L_0892EB78:
    ctx.set_gpr(4, rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(28)));
    ctx.set_gpr(25, rt.memory().aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(0)));
    ctx.set_gpr(25, rt.memory().aot_load32(ctx.gpr[25] + static_cast<std::uint32_t>(96)));
    jump_target = ctx.gpr[25];
    ctx.set_gpr(31, 0x0892EB8Cu);
    // nop
    ctx.pc = jump_target;
    if (rt.invoke_chained_call(ctx, &aot_mem) && ctx.pc == 0x0892EB8Cu) goto L_0892EB8C;
    return;
L_0892EB8C:
    ctx.set_gpr(4, rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(28)));
    { const bool branch_taken = ctx.gpr[4] == 0u;
    // nop
      if (branch_taken) {
          goto L_0892EC58;
      }
      goto L_0892EB98;
    }
L_0892EB98:
    ctx.set_gpr(31, 0x0892EBA0u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0014_entry, 14u, 257u, 0x0883D454u>(ctx, &aot_mem) && ctx.pc == 0x0892EBA0u) goto L_0892EBA0;
    return;
L_0892EBA0:
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_0892EC58;
      }
      goto L_0892EBA8;
    }
L_0892EBA8:
    ctx.set_gpr(2, 0u + static_cast<std::uint32_t>(1));
    { const bool branch_taken = ctx.gpr[3] != ctx.gpr[2];
    // nop
      if (branch_taken) {
          goto L_0892EC58;
      }
      goto L_0892EBB4;
    }
L_0892EBB4:
    ctx.set_gpr(31, 0x0892EBBCu);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0064_entry, 64u, 444u, 0x08905FF0u>(ctx, &aot_mem) && ctx.pc == 0x0892EBBCu) goto L_0892EBBC;
    return;
L_0892EBBC:
    ctx.set_gpr(2, rt.memory().aot_load8(ctx.gpr[2] + static_cast<std::uint32_t>(22)));
    { const bool branch_taken = ctx.gpr[2] != 0u;
    // nop
      if (branch_taken) {
          goto L_0892EC58;
      }
      goto L_0892EBC8;
    }
L_0892EBC8:
    ctx.set_gpr(2, rt.memory().aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(140)));
    ctx.set_gpr(2, ctx.gpr[2] & 16u);
    { const bool branch_taken = ctx.gpr[2] == 0u;
    // nop
      if (branch_taken) {
          goto L_0892EBF8;
      }
      goto L_0892EBD8;
    }
L_0892EBD8:
    ctx.set_gpr(31, 0x0892EBE0u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0064_entry, 64u, 444u, 0x08905FF0u>(ctx, &aot_mem) && ctx.pc == 0x0892EBE0u) goto L_0892EBE0;
    return;
L_0892EBE0:
    ctx.set_gpr(5, rt.memory().aot_load32(ctx.gpr[2] + static_cast<std::uint32_t>(56)));
    ctx.set_gpr(4, ctx.gpr[16] + static_cast<std::uint32_t>(88));
    ctx.set_gpr(31, 0x0892EBF0u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0085_entry, 85u, 61u, 0x089584C4u>(ctx, &aot_mem) && ctx.pc == 0x0892EBF0u) goto L_0892EBF0;
    return;
L_0892EBF0:
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_0892EC58;
      }
      goto L_0892EBF8;
    }
L_0892EBF8:
    ctx.set_gpr(2, rt.memory().aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(88)));
    { const bool branch_taken = ctx.gpr[2] != 0u;
    // nop
      if (branch_taken) {
          goto L_0892EC58;
      }
      goto L_0892EC04;
    }
L_0892EC04:
    ctx.set_gpr(4, ctx.gpr[16] + 0u);
    ctx.set_gpr(31, 0x0892EC10u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0081_entry, 81u, 41u, 0x0894835Cu>(ctx, &aot_mem) && ctx.pc == 0x0892EC10u) goto L_0892EC10;
    return;
L_0892EC10:
    ctx.set_gpr(4, ctx.gpr[2] + 0u);
    ctx.set_gpr(31, 0x0892EC1Cu);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0057_entry, 57u, 386u, 0x088E9CF8u>(ctx, &aot_mem) && ctx.pc == 0x0892EC1Cu) goto L_0892EC1C;
    return;
L_0892EC1C:
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(24), ctx.gpr[2]);
    ctx.set_gpr(4, ctx.gpr[2] + 0u);
    ctx.set_gpr(25, rt.memory().aot_load32(ctx.gpr[2] + static_cast<std::uint32_t>(0)));
    ctx.set_gpr(25, rt.memory().aot_load32(ctx.gpr[25] + static_cast<std::uint32_t>(92)));
    jump_target = ctx.gpr[25];
    ctx.set_gpr(31, 0x0892EC34u);
    // nop
    ctx.pc = jump_target;
    if (rt.invoke_chained_call(ctx, &aot_mem) && ctx.pc == 0x0892EC34u) goto L_0892EC34;
    return;
L_0892EC34:
    ctx.set_gpr(4, ctx.gpr[16] + static_cast<std::uint32_t>(88));
    ctx.set_gpr(5, rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(24)));
    ctx.set_gpr(31, 0x0892EC44u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0085_entry, 85u, 61u, 0x089584C4u>(ctx, &aot_mem) && ctx.pc == 0x0892EC44u) goto L_0892EC44;
    return;
L_0892EC44:
    ctx.set_gpr(4, rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(24)));
    { const bool branch_taken = ctx.gpr[4] == 0u;
    // nop
      if (branch_taken) {
          goto L_0892EC58;
      }
      goto L_0892EC50;
    }
L_0892EC50:
    ctx.set_gpr(31, 0x0892EC58u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0014_entry, 14u, 257u, 0x0883D454u>(ctx, &aot_mem) && ctx.pc == 0x0892EC58u) goto L_0892EC58;
    return;
L_0892EC58:
    ctx.set_gpr(2, 0u + 0u);
    ctx.set_gpr(31, rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(12)));
    ctx.set_gpr(16, rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(8)));
    ctx.set_gpr(29, ctx.gpr[29] + static_cast<std::uint32_t>(32));
    jump_target = ctx.gpr[31];
    // nop
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_0892EC70:
    ctx.set_gpr(29, ctx.gpr[29] + static_cast<std::uint32_t>(-16));
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(12), ctx.gpr[31]);
    ctx.set_gpr(3, rt.memory().aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(140)));
    ctx.set_gpr(3, ctx.gpr[3] & 8u);
    { const bool branch_taken = ctx.gpr[3] == 0u;
    // nop
      if (branch_taken) {
          goto L_0892ECA8;
      }
      goto L_0892EC88;
    }
L_0892EC88:
    ctx.set_gpr(4, rt.memory().aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(88)));
    { const bool branch_taken = ctx.gpr[4] == 0u;
    // nop
      if (branch_taken) {
          goto L_0892ECA8;
      }
      goto L_0892EC94;
    }
L_0892EC94:
    ctx.set_gpr(5, 0u + static_cast<std::uint32_t>(1));
    ctx.set_gpr(25, rt.memory().aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(0)));
    ctx.set_gpr(25, rt.memory().aot_load32(ctx.gpr[25] + static_cast<std::uint32_t>(132)));
    jump_target = ctx.gpr[25];
    ctx.set_gpr(31, 0x0892ECA8u);
    // nop
    ctx.pc = jump_target;
    if (rt.invoke_chained_call(ctx, &aot_mem) && ctx.pc == 0x0892ECA8u) goto L_0892ECA8;
    return;
L_0892ECA8:
    ctx.set_gpr(31, rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(12)));
    ctx.set_gpr(29, ctx.gpr[29] + static_cast<std::uint32_t>(16));
    jump_target = ctx.gpr[31];
    // nop
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_0892ECB8:
    ctx.set_gpr(29, ctx.gpr[29] + static_cast<std::uint32_t>(-16));
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(12), ctx.gpr[31]);
    ctx.set_gpr(3, rt.memory().aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(140)));
    ctx.set_gpr(3, ctx.gpr[3] & 8u);
    { const bool branch_taken = ctx.gpr[3] == 0u;
    // nop
      if (branch_taken) {
          goto L_0892ECF0;
      }
      goto L_0892ECD0;
    }
L_0892ECD0:
    ctx.set_gpr(4, rt.memory().aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(88)));
    { const bool branch_taken = ctx.gpr[4] == 0u;
    // nop
      if (branch_taken) {
          goto L_0892ECF0;
      }
      goto L_0892ECDC;
    }
L_0892ECDC:
    ctx.set_gpr(5, 0u + static_cast<std::uint32_t>(1));
    ctx.set_gpr(25, rt.memory().aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(0)));
    ctx.set_gpr(25, rt.memory().aot_load32(ctx.gpr[25] + static_cast<std::uint32_t>(132)));
    jump_target = ctx.gpr[25];
    ctx.set_gpr(31, 0x0892ECF0u);
    // nop
    ctx.pc = jump_target;
    if (rt.invoke_chained_call(ctx, &aot_mem) && ctx.pc == 0x0892ECF0u) goto L_0892ECF0;
    return;
L_0892ECF0:
    ctx.set_gpr(31, rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(12)));
    ctx.set_gpr(29, ctx.gpr[29] + static_cast<std::uint32_t>(16));
    jump_target = ctx.gpr[31];
    // nop
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_0892ED00:
    ctx.set_gpr(29, ctx.gpr[29] + static_cast<std::uint32_t>(-16));
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(12), ctx.gpr[31]);
    ctx.set_gpr(3, rt.memory().aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(140)));
    ctx.set_gpr(3, ctx.gpr[3] & 8u);
    { const bool branch_taken = ctx.gpr[3] == 0u;
    // nop
      if (branch_taken) {
          goto L_0892ED34;
      }
      goto L_0892ED18;
    }
L_0892ED18:
    ctx.set_gpr(4, rt.memory().aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(88)));
    { const bool branch_taken = ctx.gpr[4] == 0u;
    // nop
      if (branch_taken) {
          goto L_0892ED34;
      }
      goto L_0892ED24;
    }
L_0892ED24:
    ctx.set_gpr(25, rt.memory().aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(0)));
    ctx.set_gpr(25, rt.memory().aot_load32(ctx.gpr[25] + static_cast<std::uint32_t>(124)));
    jump_target = ctx.gpr[25];
    ctx.set_gpr(31, 0x0892ED34u);
    // nop
    ctx.pc = jump_target;
    if (rt.invoke_chained_call(ctx, &aot_mem) && ctx.pc == 0x0892ED34u) goto L_0892ED34;
    return;
L_0892ED34:
    ctx.set_gpr(31, rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(12)));
    ctx.set_gpr(29, ctx.gpr[29] + static_cast<std::uint32_t>(16));
    jump_target = ctx.gpr[31];
    // nop
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_0892ED44:
    ctx.set_gpr(29, ctx.gpr[29] + static_cast<std::uint32_t>(-16));
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(12), ctx.gpr[31]);
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(8), ctx.gpr[16]);
    ctx.set_gpr(16, ctx.gpr[5] + 0u);
    ctx.set_gpr(2, rt.memory().aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(140)));
    ctx.set_gpr(2, ctx.gpr[2] & 8u);
    { const bool branch_taken = ctx.gpr[2] == 0u;
    // nop
      if (branch_taken) {
          goto L_0892ED80;
      }
      goto L_0892ED64;
    }
L_0892ED64:
    ctx.set_gpr(4, rt.memory().aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(88)));
    { const bool branch_taken = ctx.gpr[4] == 0u;
    // nop
      if (branch_taken) {
          goto L_0892ED80;
      }
      goto L_0892ED70;
    }
L_0892ED70:
    ctx.set_gpr(25, rt.memory().aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(0)));
    ctx.set_gpr(25, rt.memory().aot_load32(ctx.gpr[25] + static_cast<std::uint32_t>(124)));
    jump_target = ctx.gpr[25];
    ctx.set_gpr(31, 0x0892ED80u);
    // nop
    ctx.pc = jump_target;
    if (rt.invoke_chained_call(ctx, &aot_mem) && ctx.pc == 0x0892ED80u) goto L_0892ED80;
    return;
L_0892ED80:
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
L_0892ED98:
    rt.memory().aot_store32(ctx.gpr[4] + static_cast<std::uint32_t>(96), ctx.gpr[5]);
    ctx.set_gpr(2, 0u + 0u);
    jump_target = ctx.gpr[31];
    // nop
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_0892EDA8:
    ctx.set_gpr(2, rt.memory().aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(96)));
    jump_target = ctx.gpr[31];
    // nop
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_0892EDB4:
    rt.memory().aot_store32(ctx.gpr[4] + static_cast<std::uint32_t>(92), ctx.gpr[5]);
    ctx.set_gpr(2, 0u + 0u);
    jump_target = ctx.gpr[31];
    // nop
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_0892EDC4:
    ctx.set_gpr(2, rt.memory().aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(92)));
    jump_target = ctx.gpr[31];
    // nop
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_0892EDD0:
    ctx.set_gpr(2, rt.memory().aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(100)));
    jump_target = ctx.gpr[31];
    // nop
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_0892EDDC:
    ctx.set_gpr(2, rt.memory().aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(104)));
    jump_target = ctx.gpr[31];
    // nop
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_0892EDE8:
    ctx.set_gpr(2, rt.memory().aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(100)));
    { const bool branch_taken = ctx.gpr[2] == 0u;
    // nop
      if (branch_taken) {
          goto L_0892EDFC;
      }
      goto L_0892EDF4;
    }
L_0892EDF4:
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_0892EE00;
      }
      goto L_0892EDFC;
    }
L_0892EDFC:
    ctx.set_gpr(2, rt.memory().aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(104)));
    goto L_0892EE00;
L_0892EE00:
    jump_target = ctx.gpr[31];
    // nop
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_0892EE08:
    ctx.set_gpr(2, 0u + static_cast<std::uint32_t>(1));
    jump_target = ctx.gpr[31];
    // nop
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_0892EE14:
    ctx.set_gpr(2, rt.memory().aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(108)));
    jump_target = ctx.gpr[31];
    // nop
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_0892EE20:
    rt.memory().aot_store32(ctx.gpr[4] + static_cast<std::uint32_t>(108), ctx.gpr[5]);
    ctx.set_gpr(2, 0u + 0u);
    jump_target = ctx.gpr[31];
    // nop
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_0892EE30:
    ctx.set_gpr(2, rt.memory().aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(112)));
    jump_target = ctx.gpr[31];
    // nop
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_0892EE3C:
    ctx.set_gpr(29, ctx.gpr[29] + static_cast<std::uint32_t>(-16));
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(12), ctx.gpr[31]);
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(8), ctx.gpr[16]);
    ctx.set_gpr(16, ctx.gpr[4] + 0u);
    rt.memory().aot_store32(ctx.gpr[4] + static_cast<std::uint32_t>(112), ctx.gpr[5]);
    rt.memory().aot_store32(ctx.gpr[4] + static_cast<std::uint32_t>(116), 0u);
    ctx.set_gpr(31, 0x0892EE5Cu);
    // nop
    goto L_0892EADC;
L_0892EE5C:
    { const bool branch_taken = ctx.gpr[2] == 0u;
    // nop
      if (branch_taken) {
          goto L_0892EEA8;
      }
      goto L_0892EE64;
    }
L_0892EE64:
    ctx.set_gpr(3, rt.memory().aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(104)));
    ctx.set_gpr(2, rt.memory().aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(112)));
    ctx.set_gpr(1, ctx.gpr[3] < ctx.gpr[2] ? 1u : 0u);
    { const bool branch_taken = ctx.gpr[1] == 0u;
    // nop
      if (branch_taken) {
          goto L_0892EEA8;
      }
      goto L_0892EE78;
    }
L_0892EE78:
    ctx.set_gpr(4, ctx.gpr[16] + 0u);
    ctx.set_gpr(5, 0u + static_cast<std::uint32_t>(16));
    ctx.set_gpr(25, rt.memory().aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(0)));
    ctx.set_gpr(25, rt.memory().aot_load32(ctx.gpr[25] + static_cast<std::uint32_t>(92)));
    jump_target = ctx.gpr[25];
    ctx.set_gpr(31, 0x0892EE90u);
    // nop
    ctx.pc = jump_target;
    if (rt.invoke_chained_call(ctx, &aot_mem) && ctx.pc == 0x0892EE90u) goto L_0892EE90;
    return;
L_0892EE90:
    ctx.set_gpr(4, ctx.gpr[16] + 0u);
    ctx.set_gpr(5, ctx.gpr[2] + 0u);
    ctx.set_gpr(25, rt.memory().aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(0)));
    ctx.set_gpr(25, rt.memory().aot_load32(ctx.gpr[25] + static_cast<std::uint32_t>(144)));
    jump_target = ctx.gpr[25];
    ctx.set_gpr(31, 0x0892EEA8u);
    // nop
    ctx.pc = jump_target;
    if (rt.invoke_chained_call(ctx, &aot_mem) && ctx.pc == 0x0892EEA8u) goto L_0892EEA8;
    return;
L_0892EEA8:
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
L_0892EEC0:
    ctx.set_gpr(2, rt.memory().aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(120)));
    jump_target = ctx.gpr[31];
    // nop
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_0892EECC:
    rt.memory().aot_store32(ctx.gpr[4] + static_cast<std::uint32_t>(120), ctx.gpr[5]);
    ctx.set_gpr(2, 0u + 0u);
    jump_target = ctx.gpr[31];
    // nop
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_0892EEDC:
    ctx.set_gpr(2, 0u + 0u);
    jump_target = ctx.gpr[31];
    // nop
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_0892EEE8:
    ctx.set_gpr(2, 0u + 0u);
    jump_target = ctx.gpr[31];
    // nop
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_0892EEF4:
    ctx.set_gpr(3, rt.memory().aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(100)));
    { const bool branch_taken = ctx.gpr[3] == 0u;
    // nop
      if (branch_taken) {
          goto L_0892EF10;
      }
      goto L_0892EF00;
    }
L_0892EF00:
    ctx.set_gpr(2, rt.memory().aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(180)));
    ctx.set_gpr(2, ctx.gpr[3] - ctx.gpr[2]);
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_0892EF1C;
      }
      goto L_0892EF10;
    }
L_0892EF10:
    ctx.set_gpr(3, rt.memory().aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(108)));
    ctx.set_gpr(2, rt.memory().aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(180)));
    ctx.set_gpr(2, ctx.gpr[3] - ctx.gpr[2]);
    goto L_0892EF1C;
L_0892EF1C:
    jump_target = ctx.gpr[31];
    // nop
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_0892EF24:
    ctx.set_gpr(2, rt.memory().aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(164)));
    jump_target = ctx.gpr[31];
    // nop
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_0892EF30:
    ctx.set_gpr(2, rt.memory().aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(180)));
    jump_target = ctx.gpr[31];
    // nop
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_0892EF3C:
    ctx.set_gpr(2, rt.memory().aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(168)));
    jump_target = ctx.gpr[31];
    // nop
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_0892EF48:
    ctx.set_gpr(2, rt.memory().aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(184)));
    jump_target = ctx.gpr[31];
    // nop
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_0892EF54:
    ctx.set_gpr(29, ctx.gpr[29] + static_cast<std::uint32_t>(-16));
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(12), ctx.gpr[31]);
    ctx.set_gpr(25, rt.memory().aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(0)));
    ctx.set_gpr(25, rt.memory().aot_load32(ctx.gpr[25] + static_cast<std::uint32_t>(380)));
    jump_target = ctx.gpr[25];
    ctx.set_gpr(31, 0x0892EF6Cu);
    // nop
    ctx.pc = jump_target;
    if (rt.invoke_chained_call(ctx, &aot_mem) && ctx.pc == 0x0892EF6Cu) goto L_0892EF6C;
    return;
L_0892EF6C:
    ctx.set_gpr(31, rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(12)));
    ctx.set_gpr(29, ctx.gpr[29] + static_cast<std::uint32_t>(16));
    jump_target = ctx.gpr[31];
    // nop
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_0892EF7C:
    ctx.set_gpr(29, ctx.gpr[29] + static_cast<std::uint32_t>(-16));
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(12), ctx.gpr[31]);
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(8), ctx.gpr[17]);
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(4), ctx.gpr[16]);
    ctx.set_gpr(17, ctx.gpr[4] + 0u);
    ctx.set_gpr(16, ctx.gpr[5] + 0u);
    ctx.set_gpr(5, ctx.gpr[16] & 1u);
    ctx.set_gpr(3, rt.memory().aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(140)));
    ctx.set_gpr(3, ctx.gpr[3] & 1u);
    { const bool branch_taken = ctx.gpr[5] == ctx.gpr[3];
    // nop
      if (branch_taken) {
          goto L_0892F000;
      }
      goto L_0892EFA8;
    }
L_0892EFA8:
    ctx.set_gpr(31, 0x0892EFB0u);
    // nop
    goto L_0892EADC;
L_0892EFB0:
    { const bool branch_taken = ctx.gpr[2] == 0u;
    // nop
      if (branch_taken) {
          goto L_0892F000;
      }
      goto L_0892EFB8;
    }
L_0892EFB8:
    ctx.set_gpr(3, rt.memory().aot_load32(ctx.gpr[17] + static_cast<std::uint32_t>(180)));
    { const bool branch_taken = ctx.gpr[3] != 0u;
    // nop
      if (branch_taken) {
          goto L_0892F000;
      }
      goto L_0892EFC4;
    }
L_0892EFC4:
    ctx.set_gpr(3, rt.memory().aot_load32(ctx.gpr[17] + static_cast<std::uint32_t>(144)));
    { const bool branch_taken = static_cast<std::int32_t>(ctx.gpr[3]) <= 0;
    // nop
      if (branch_taken) {
          goto L_0892EFF8;
      }
      goto L_0892EFD0;
    }
L_0892EFD0:
    ctx.set_gpr(4, ctx.gpr[17] + 0u);
    ctx.set_gpr(5, 0u + 0u);
    ctx.set_gpr(25, rt.memory().aot_load32(ctx.gpr[17] + static_cast<std::uint32_t>(0)));
    ctx.set_gpr(25, rt.memory().aot_load32(ctx.gpr[25] + static_cast<std::uint32_t>(412)));
    jump_target = ctx.gpr[25];
    ctx.set_gpr(31, 0x0892EFE8u);
    // nop
    ctx.pc = jump_target;
    if (rt.invoke_chained_call(ctx, &aot_mem) && ctx.pc == 0x0892EFE8u) goto L_0892EFE8;
    return;
L_0892EFE8:
    ctx.set_gpr(4, 2228u << 16u);
    ctx.set_gpr(4, ctx.gpr[4] + static_cast<std::uint32_t>(-10220));
    ctx.set_gpr(31, 0x0892EFF8u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0084_entry, 84u, 456u, 0x08955F2Cu>(ctx, &aot_mem) && ctx.pc == 0x0892EFF8u) goto L_0892EFF8;
    return;
L_0892EFF8:
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_0892F0E4;
      }
      goto L_0892F000;
    }
L_0892F000:
    ctx.set_gpr(4, ctx.gpr[16] & 2048u);
    ctx.set_gpr(3, rt.memory().aot_load32(ctx.gpr[17] + static_cast<std::uint32_t>(140)));
    ctx.set_gpr(3, ctx.gpr[3] & 2048u);
    { const bool branch_taken = ctx.gpr[4] == ctx.gpr[3];
    // nop
      if (branch_taken) {
          goto L_0892F070;
      }
      goto L_0892F014;
    }
L_0892F014:
    ctx.set_gpr(4, ctx.gpr[17] + 0u);
    ctx.set_gpr(31, 0x0892F020u);
    // nop
    goto L_0892EADC;
L_0892F020:
    { const bool branch_taken = ctx.gpr[2] == 0u;
    // nop
      if (branch_taken) {
          goto L_0892F070;
      }
      goto L_0892F028;
    }
L_0892F028:
    ctx.set_gpr(3, rt.memory().aot_load32(ctx.gpr[17] + static_cast<std::uint32_t>(180)));
    { const bool branch_taken = ctx.gpr[3] != 0u;
    // nop
      if (branch_taken) {
          goto L_0892F070;
      }
      goto L_0892F034;
    }
L_0892F034:
    ctx.set_gpr(3, rt.memory().aot_load32(ctx.gpr[17] + static_cast<std::uint32_t>(144)));
    { const bool branch_taken = static_cast<std::int32_t>(ctx.gpr[3]) <= 0;
    // nop
      if (branch_taken) {
          goto L_0892F068;
      }
      goto L_0892F040;
    }
L_0892F040:
    ctx.set_gpr(4, ctx.gpr[17] + 0u);
    ctx.set_gpr(5, 0u + 0u);
    ctx.set_gpr(25, rt.memory().aot_load32(ctx.gpr[17] + static_cast<std::uint32_t>(0)));
    ctx.set_gpr(25, rt.memory().aot_load32(ctx.gpr[25] + static_cast<std::uint32_t>(412)));
    jump_target = ctx.gpr[25];
    ctx.set_gpr(31, 0x0892F058u);
    // nop
    ctx.pc = jump_target;
    if (rt.invoke_chained_call(ctx, &aot_mem) && ctx.pc == 0x0892F058u) goto L_0892F058;
    return;
L_0892F058:
    ctx.set_gpr(4, 2228u << 16u);
    ctx.set_gpr(4, ctx.gpr[4] + static_cast<std::uint32_t>(-10096));
    ctx.set_gpr(31, 0x0892F068u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0084_entry, 84u, 456u, 0x08955F2Cu>(ctx, &aot_mem) && ctx.pc == 0x0892F068u) goto L_0892F068;
    return;
L_0892F068:
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_0892F0E4;
      }
      goto L_0892F070;
    }
L_0892F070:
    ctx.set_gpr(4, ctx.gpr[16] & 4096u);
    ctx.set_gpr(3, rt.memory().aot_load32(ctx.gpr[17] + static_cast<std::uint32_t>(140)));
    ctx.set_gpr(3, ctx.gpr[3] & 4096u);
    { const bool branch_taken = ctx.gpr[4] == ctx.gpr[3];
    // nop
      if (branch_taken) {
          goto L_0892F0E0;
      }
      goto L_0892F084;
    }
L_0892F084:
    ctx.set_gpr(4, ctx.gpr[17] + 0u);
    ctx.set_gpr(31, 0x0892F090u);
    // nop
    goto L_0892EADC;
L_0892F090:
    { const bool branch_taken = ctx.gpr[2] == 0u;
    // nop
      if (branch_taken) {
          goto L_0892F0E0;
      }
      goto L_0892F098;
    }
L_0892F098:
    ctx.set_gpr(3, rt.memory().aot_load32(ctx.gpr[17] + static_cast<std::uint32_t>(180)));
    { const bool branch_taken = ctx.gpr[3] != 0u;
    // nop
      if (branch_taken) {
          goto L_0892F0E0;
      }
      goto L_0892F0A4;
    }
L_0892F0A4:
    ctx.set_gpr(3, rt.memory().aot_load32(ctx.gpr[17] + static_cast<std::uint32_t>(144)));
    { const bool branch_taken = static_cast<std::int32_t>(ctx.gpr[3]) <= 0;
    // nop
      if (branch_taken) {
          goto L_0892F0D8;
      }
      goto L_0892F0B0;
    }
L_0892F0B0:
    ctx.set_gpr(4, ctx.gpr[17] + 0u);
    ctx.set_gpr(5, 0u + 0u);
    ctx.set_gpr(25, rt.memory().aot_load32(ctx.gpr[17] + static_cast<std::uint32_t>(0)));
    ctx.set_gpr(25, rt.memory().aot_load32(ctx.gpr[25] + static_cast<std::uint32_t>(412)));
    jump_target = ctx.gpr[25];
    ctx.set_gpr(31, 0x0892F0C8u);
    // nop
    ctx.pc = jump_target;
    if (rt.invoke_chained_call(ctx, &aot_mem) && ctx.pc == 0x0892F0C8u) goto L_0892F0C8;
    return;
L_0892F0C8:
    ctx.set_gpr(4, 2228u << 16u);
    ctx.set_gpr(4, ctx.gpr[4] + static_cast<std::uint32_t>(-9968));
    ctx.set_gpr(31, 0x0892F0D8u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0084_entry, 84u, 456u, 0x08955F2Cu>(ctx, &aot_mem) && ctx.pc == 0x0892F0D8u) goto L_0892F0D8;
    return;
L_0892F0D8:
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_0892F0E4;
      }
      goto L_0892F0E0;
    }
L_0892F0E0:
    rt.memory().aot_store32(ctx.gpr[17] + static_cast<std::uint32_t>(140), ctx.gpr[16]);
    goto L_0892F0E4;
L_0892F0E4:
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
L_0892F0FC:
    ctx.set_gpr(29, ctx.gpr[29] + static_cast<std::uint32_t>(-32));
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(28), ctx.gpr[31]);
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(24), ctx.gpr[20]);
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(20), ctx.gpr[19]);
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(16), ctx.gpr[18]);
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(12), ctx.gpr[17]);
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(8), ctx.gpr[16]);
    ctx.set_gpr(19, ctx.gpr[4] + 0u);
    ctx.set_gpr(18, ctx.gpr[5] + 0u);
    { const bool branch_taken = ctx.gpr[18] != 0u;
    // nop
      if (branch_taken) {
          goto L_0892F134;
      }
      goto L_0892F128;
    }
L_0892F128:
    ctx.set_gpr(2, 0u + 0u);
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_0892F218;
      }
      goto L_0892F134;
    }
L_0892F134:
    ctx.set_gpr(2, static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int8_t>(rt.memory().aot_load8(ctx.gpr[18] + static_cast<std::uint32_t>(0))))));
    { const bool branch_taken = ctx.gpr[2] != 0u;
    // nop
      if (branch_taken) {
          goto L_0892F208;
      }
      goto L_0892F140;
    }
L_0892F140:
    ctx.set_gpr(31, 0x0892F148u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0004_entry, 4u, 508u, 0x08816764u>(ctx, &aot_mem) && ctx.pc == 0x0892F148u) goto L_0892F148;
    return;
L_0892F148:
    ctx.set_gpr(2, ctx.gpr[19] + ctx.gpr[2]);
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_0892F218;
      }
      goto L_0892F154;
    }
L_0892F154:
    ctx.set_gpr(17, ctx.gpr[18] + 0u);
    ctx.set_gpr(16, ctx.gpr[19] + 0u);
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_0892F1BC;
      }
      goto L_0892F164;
    }
L_0892F164:
    ctx.set_gpr(4, static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int8_t>(ctx.gpr[3]))));
    ctx.set_gpr(31, 0x0892F170u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0003_entry, 3u, 448u, 0x08811CB4u>(ctx, &aot_mem) && ctx.pc == 0x0892F170u) goto L_0892F170;
    return;
L_0892F170:
    { const bool branch_taken = ctx.gpr[2] == 0u;
    // nop
      if (branch_taken) {
          goto L_0892F1A4;
      }
      goto L_0892F178;
    }
L_0892F178:
    ctx.set_gpr(4, static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int8_t>(rt.memory().aot_load8(ctx.gpr[17] + static_cast<std::uint32_t>(0))))));
    ctx.set_gpr(31, 0x0892F184u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0005_entry, 5u, 201u, 0x08818AE8u>(ctx, &aot_mem) && ctx.pc == 0x0892F184u) goto L_0892F184;
    return;
L_0892F184:
    ctx.set_gpr(20, ctx.gpr[2] + 0u);
    ctx.set_gpr(4, static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int8_t>(rt.memory().aot_load8(ctx.gpr[16] + static_cast<std::uint32_t>(0))))));
    ctx.set_gpr(31, 0x0892F194u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0005_entry, 5u, 201u, 0x08818AE8u>(ctx, &aot_mem) && ctx.pc == 0x0892F194u) goto L_0892F194;
    return;
L_0892F194:
    { const bool branch_taken = ctx.gpr[20] == ctx.gpr[2];
    // nop
      if (branch_taken) {
          goto L_0892F1B4;
      }
      goto L_0892F19C;
    }
L_0892F19C:
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_0892F1D4;
      }
      goto L_0892F1A4;
    }
L_0892F1A4:
    ctx.set_gpr(3, static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int8_t>(rt.memory().aot_load8(ctx.gpr[17] + static_cast<std::uint32_t>(0))))));
    ctx.set_gpr(2, static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int8_t>(rt.memory().aot_load8(ctx.gpr[16] + static_cast<std::uint32_t>(0))))));
    { const bool branch_taken = ctx.gpr[3] != ctx.gpr[2];
    // nop
      if (branch_taken) {
          goto L_0892F1D4;
      }
      goto L_0892F1B4;
    }
L_0892F1B4:
    ctx.set_gpr(17, ctx.gpr[17] + static_cast<std::uint32_t>(1));
    ctx.set_gpr(16, ctx.gpr[16] + static_cast<std::uint32_t>(1));
    goto L_0892F1BC;
L_0892F1BC:
    ctx.set_gpr(3, static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int8_t>(rt.memory().aot_load8(ctx.gpr[17] + static_cast<std::uint32_t>(0))))));
    { const bool branch_taken = ctx.gpr[3] == 0u;
    // nop
      if (branch_taken) {
          goto L_0892F1D4;
      }
      goto L_0892F1C8;
    }
L_0892F1C8:
    ctx.set_gpr(2, static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int8_t>(rt.memory().aot_load8(ctx.gpr[16] + static_cast<std::uint32_t>(0))))));
    { const bool branch_taken = ctx.gpr[2] != 0u;
    // nop
      if (branch_taken) {
          goto L_0892F164;
      }
      goto L_0892F1D4;
    }
L_0892F1D4:
    ctx.set_gpr(2, static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int8_t>(rt.memory().aot_load8(ctx.gpr[17] + static_cast<std::uint32_t>(0))))));
    { const bool branch_taken = ctx.gpr[2] != 0u;
    // nop
      if (branch_taken) {
          goto L_0892F1EC;
      }
      goto L_0892F1E0;
    }
L_0892F1E0:
    ctx.set_gpr(2, ctx.gpr[19] + 0u);
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_0892F218;
      }
      goto L_0892F1EC;
    }
L_0892F1EC:
    ctx.set_gpr(2, static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int8_t>(rt.memory().aot_load8(ctx.gpr[16] + static_cast<std::uint32_t>(0))))));
    { const bool branch_taken = ctx.gpr[2] != 0u;
    // nop
      if (branch_taken) {
          goto L_0892F204;
      }
      goto L_0892F1F8;
    }
L_0892F1F8:
    ctx.set_gpr(2, 0u + 0u);
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_0892F218;
      }
      goto L_0892F204;
    }
L_0892F204:
    ctx.set_gpr(19, ctx.gpr[19] + static_cast<std::uint32_t>(1));
    goto L_0892F208;
L_0892F208:
    ctx.set_gpr(2, static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int8_t>(rt.memory().aot_load8(ctx.gpr[19] + static_cast<std::uint32_t>(0))))));
    { const bool branch_taken = ctx.gpr[2] != 0u;
    // nop
      if (branch_taken) {
          goto L_0892F154;
      }
      goto L_0892F214;
    }
L_0892F214:
    ctx.set_gpr(2, 0u + 0u);
    goto L_0892F218;
L_0892F218:
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
L_0892F23C:
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
    ctx.set_gpr(5, rt.memory().aot_load32(ctx.gpr[5] + static_cast<std::uint32_t>(36)));
    { const bool branch_taken = ctx.gpr[5] == 0u;
    // nop
      if (branch_taken) {
          goto L_0892F280;
      }
      goto L_0892F270;
    }
L_0892F270:
    ctx.set_gpr(25, rt.memory().aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(0)));
    ctx.set_gpr(25, rt.memory().aot_load32(ctx.gpr[25] + static_cast<std::uint32_t>(332)));
    jump_target = ctx.gpr[25];
    ctx.set_gpr(31, 0x0892F280u);
    // nop
    ctx.pc = jump_target;
    if (rt.invoke_chained_call(ctx, &aot_mem) && ctx.pc == 0x0892F280u) goto L_0892F280;
    return;
L_0892F280:
    ctx.set_gpr(5, rt.memory().aot_load32(ctx.gpr[20] + static_cast<std::uint32_t>(40)));
    ctx.set_gpr(4, ctx.gpr[21] + 0u);
    ctx.set_gpr(25, rt.memory().aot_load32(ctx.gpr[21] + static_cast<std::uint32_t>(0)));
    ctx.set_gpr(25, rt.memory().aot_load32(ctx.gpr[25] + static_cast<std::uint32_t>(348)));
    jump_target = ctx.gpr[25];
    ctx.set_gpr(31, 0x0892F298u);
    // nop
    ctx.pc = jump_target;
    if (rt.invoke_chained_call(ctx, &aot_mem) && ctx.pc == 0x0892F298u) goto L_0892F298;
    return;
L_0892F298:
    ctx.set_gpr(2, rt.memory().aot_load32(ctx.gpr[20] + static_cast<std::uint32_t>(68)));
    ctx.set_gpr(3, 0u + static_cast<std::uint32_t>(-2));
    ctx.set_gpr(18, ctx.gpr[2] & ctx.gpr[3]);
    ctx.set_gpr(2, rt.memory().aot_load32(ctx.gpr[20] + static_cast<std::uint32_t>(76)));
    ctx.set_gpr(17, ctx.gpr[2] & ctx.gpr[3]);
    ctx.set_gpr(2, rt.memory().aot_load32(ctx.gpr[20] + static_cast<std::uint32_t>(84)));
    ctx.set_gpr(16, ctx.gpr[2] & ctx.gpr[3]);
    { const bool branch_taken = ctx.gpr[18] == 0u;
    // nop
      if (branch_taken) {
          goto L_0892F4C4;
      }
      goto L_0892F2BC;
    }
L_0892F2BC:
    ctx.set_gpr(19, 0u + 0u);
    ctx.set_gpr(4, ctx.gpr[18] + 0u);
    ctx.set_gpr(5, 2228u << 16u);
    ctx.set_gpr(5, ctx.gpr[5] + static_cast<std::uint32_t>(-9836));
    ctx.set_gpr(31, 0x0892F2D4u);
    // nop
    goto L_0892F0FC;
L_0892F2D4:
    { const bool branch_taken = ctx.gpr[2] == 0u;
    // nop
      if (branch_taken) {
          goto L_0892F2E0;
      }
      goto L_0892F2DC;
    }
L_0892F2DC:
    ctx.set_gpr(19, ctx.gpr[19] | 2u);
    goto L_0892F2E0;
L_0892F2E0:
    ctx.set_gpr(4, ctx.gpr[18] + 0u);
    ctx.set_gpr(5, 2228u << 16u);
    ctx.set_gpr(5, ctx.gpr[5] + static_cast<std::uint32_t>(-9828));
    ctx.set_gpr(31, 0x0892F2F4u);
    // nop
    goto L_0892F0FC;
L_0892F2F4:
    { const bool branch_taken = ctx.gpr[2] == 0u;
    // nop
      if (branch_taken) {
          goto L_0892F300;
      }
      goto L_0892F2FC;
    }
L_0892F2FC:
    ctx.set_gpr(19, ctx.gpr[19] | 4u);
    goto L_0892F300;
L_0892F300:
    ctx.set_gpr(4, ctx.gpr[18] + 0u);
    ctx.set_gpr(5, 2228u << 16u);
    ctx.set_gpr(5, ctx.gpr[5] + static_cast<std::uint32_t>(-9820));
    ctx.set_gpr(31, 0x0892F314u);
    // nop
    goto L_0892F0FC;
L_0892F314:
    { const bool branch_taken = ctx.gpr[2] == 0u;
    // nop
      if (branch_taken) {
          goto L_0892F320;
      }
      goto L_0892F31C;
    }
L_0892F31C:
    ctx.set_gpr(19, ctx.gpr[19] | 1u);
    goto L_0892F320;
L_0892F320:
    ctx.set_gpr(4, ctx.gpr[18] + 0u);
    ctx.set_gpr(5, 2228u << 16u);
    ctx.set_gpr(5, ctx.gpr[5] + static_cast<std::uint32_t>(-9808));
    ctx.set_gpr(31, 0x0892F334u);
    // nop
    goto L_0892F0FC;
L_0892F334:
    { const bool branch_taken = ctx.gpr[2] == 0u;
    // nop
      if (branch_taken) {
          goto L_0892F340;
      }
      goto L_0892F33C;
    }
L_0892F33C:
    ctx.set_gpr(19, ctx.gpr[19] | 32u);
    goto L_0892F340;
L_0892F340:
    ctx.set_gpr(4, ctx.gpr[18] + 0u);
    ctx.set_gpr(5, 2228u << 16u);
    ctx.set_gpr(5, ctx.gpr[5] + static_cast<std::uint32_t>(-9796));
    ctx.set_gpr(31, 0x0892F354u);
    // nop
    goto L_0892F0FC;
L_0892F354:
    { const bool branch_taken = ctx.gpr[2] == 0u;
    // nop
      if (branch_taken) {
          goto L_0892F360;
      }
      goto L_0892F35C;
    }
L_0892F35C:
    ctx.set_gpr(19, ctx.gpr[19] | 8u);
    goto L_0892F360;
L_0892F360:
    ctx.set_gpr(4, ctx.gpr[18] + 0u);
    ctx.set_gpr(5, 2228u << 16u);
    ctx.set_gpr(5, ctx.gpr[5] + static_cast<std::uint32_t>(-9784));
    ctx.set_gpr(31, 0x0892F374u);
    // nop
    goto L_0892F0FC;
L_0892F374:
    { const bool branch_taken = ctx.gpr[2] == 0u;
    // nop
      if (branch_taken) {
          goto L_0892F380;
      }
      goto L_0892F37C;
    }
L_0892F37C:
    ctx.set_gpr(19, ctx.gpr[19] | 16u);
    goto L_0892F380;
L_0892F380:
    ctx.set_gpr(4, ctx.gpr[18] + 0u);
    ctx.set_gpr(5, 2228u << 16u);
    ctx.set_gpr(5, ctx.gpr[5] + static_cast<std::uint32_t>(-9768));
    ctx.set_gpr(31, 0x0892F394u);
    // nop
    goto L_0892F0FC;
L_0892F394:
    { const bool branch_taken = ctx.gpr[2] == 0u;
    // nop
      if (branch_taken) {
          goto L_0892F3A0;
      }
      goto L_0892F39C;
    }
L_0892F39C:
    ctx.set_gpr(19, ctx.gpr[19] | 256u);
    goto L_0892F3A0;
L_0892F3A0:
    ctx.set_gpr(4, ctx.gpr[18] + 0u);
    ctx.set_gpr(5, 2228u << 16u);
    ctx.set_gpr(5, ctx.gpr[5] + static_cast<std::uint32_t>(-9736));
    ctx.set_gpr(31, 0x0892F3B4u);
    // nop
    goto L_0892F0FC;
L_0892F3B4:
    { const bool branch_taken = ctx.gpr[2] == 0u;
    // nop
      if (branch_taken) {
          goto L_0892F3C0;
      }
      goto L_0892F3BC;
    }
L_0892F3BC:
    ctx.set_gpr(19, ctx.gpr[19] | 128u);
    goto L_0892F3C0;
L_0892F3C0:
    ctx.set_gpr(4, ctx.gpr[18] + 0u);
    ctx.set_gpr(5, 2228u << 16u);
    ctx.set_gpr(5, ctx.gpr[5] + static_cast<std::uint32_t>(-9712));
    ctx.set_gpr(31, 0x0892F3D4u);
    // nop
    goto L_0892F0FC;
L_0892F3D4:
    { const bool branch_taken = ctx.gpr[2] == 0u;
    // nop
      if (branch_taken) {
          goto L_0892F3E0;
      }
      goto L_0892F3DC;
    }
L_0892F3DC:
    ctx.set_gpr(19, ctx.gpr[19] | 64u);
    goto L_0892F3E0;
L_0892F3E0:
    ctx.set_gpr(4, ctx.gpr[18] + 0u);
    ctx.set_gpr(5, 2228u << 16u);
    ctx.set_gpr(5, ctx.gpr[5] + static_cast<std::uint32_t>(-9688));
    ctx.set_gpr(31, 0x0892F3F4u);
    // nop
    goto L_0892F0FC;
L_0892F3F4:
    { const bool branch_taken = ctx.gpr[2] == 0u;
    // nop
      if (branch_taken) {
          goto L_0892F400;
      }
      goto L_0892F3FC;
    }
L_0892F3FC:
    ctx.set_gpr(19, ctx.gpr[19] | 512u);
    goto L_0892F400;
L_0892F400:
    ctx.set_gpr(4, ctx.gpr[18] + 0u);
    ctx.set_gpr(5, 2228u << 16u);
    ctx.set_gpr(5, ctx.gpr[5] + static_cast<std::uint32_t>(-9664));
    ctx.set_gpr(31, 0x0892F414u);
    // nop
    goto L_0892F0FC;
L_0892F414:
    { const bool branch_taken = ctx.gpr[2] == 0u;
    // nop
      if (branch_taken) {
          goto L_0892F420;
      }
      goto L_0892F41C;
    }
L_0892F41C:
    ctx.set_gpr(19, ctx.gpr[19] | 1024u);
    goto L_0892F420;
L_0892F420:
    ctx.set_gpr(4, ctx.gpr[18] + 0u);
    ctx.set_gpr(5, 2228u << 16u);
    ctx.set_gpr(5, ctx.gpr[5] + static_cast<std::uint32_t>(-9636));
    ctx.set_gpr(31, 0x0892F434u);
    // nop
    goto L_0892F0FC;
L_0892F434:
    { const bool branch_taken = ctx.gpr[2] == 0u;
    // nop
      if (branch_taken) {
          goto L_0892F440;
      }
      goto L_0892F43C;
    }
L_0892F43C:
    ctx.set_gpr(19, ctx.gpr[19] | 2048u);
    goto L_0892F440;
L_0892F440:
    ctx.set_gpr(4, ctx.gpr[18] + 0u);
    ctx.set_gpr(5, 2228u << 16u);
    ctx.set_gpr(5, ctx.gpr[5] + static_cast<std::uint32_t>(-9620));
    ctx.set_gpr(31, 0x0892F454u);
    // nop
    goto L_0892F0FC;
L_0892F454:
    { const bool branch_taken = ctx.gpr[2] == 0u;
    // nop
      if (branch_taken) {
          goto L_0892F460;
      }
      goto L_0892F45C;
    }
L_0892F45C:
    ctx.set_gpr(19, ctx.gpr[19] | 4096u);
    goto L_0892F460;
L_0892F460:
    ctx.set_gpr(4, ctx.gpr[18] + 0u);
    ctx.set_gpr(5, 2228u << 16u);
    ctx.set_gpr(5, ctx.gpr[5] + static_cast<std::uint32_t>(-9600));
    ctx.set_gpr(31, 0x0892F474u);
    // nop
    goto L_0892F0FC;
L_0892F474:
    { const bool branch_taken = ctx.gpr[2] == 0u;
    // nop
      if (branch_taken) {
          goto L_0892F480;
      }
      goto L_0892F47C;
    }
L_0892F47C:
    ctx.set_gpr(19, ctx.gpr[19] | 8192u);
    goto L_0892F480;
L_0892F480:
    ctx.set_gpr(31, 0x0892F488u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0064_entry, 64u, 444u, 0x08905FF0u>(ctx, &aot_mem) && ctx.pc == 0x0892F488u) goto L_0892F488;
    return;
L_0892F488:
    ctx.set_gpr(2, rt.memory().aot_load32(ctx.gpr[2] + static_cast<std::uint32_t>(48)));
    { const bool branch_taken = ctx.gpr[21] != ctx.gpr[2];
    // nop
      if (branch_taken) {
          goto L_0892F4AC;
      }
      goto L_0892F494;
    }
L_0892F494:
    ctx.set_gpr(3, ctx.gpr[19] & 1u);
    ctx.set_gpr(2, rt.memory().aot_load32(ctx.gpr[21] + static_cast<std::uint32_t>(140)));
    ctx.set_gpr(2, ctx.gpr[2] & 1u);
    { const bool branch_taken = ctx.gpr[3] == ctx.gpr[2];
    // nop
      if (branch_taken) {
          goto L_0892F4AC;
      }
      goto L_0892F4A8;
    }
L_0892F4A8:
    ctx.set_gpr(19, ctx.gpr[19] ^ 1u);
    goto L_0892F4AC;
L_0892F4AC:
    ctx.set_gpr(4, ctx.gpr[21] + 0u);
    ctx.set_gpr(5, ctx.gpr[19] + 0u);
    ctx.set_gpr(25, rt.memory().aot_load32(ctx.gpr[21] + static_cast<std::uint32_t>(0)));
    ctx.set_gpr(25, rt.memory().aot_load32(ctx.gpr[25] + static_cast<std::uint32_t>(360)));
    jump_target = ctx.gpr[25];
    ctx.set_gpr(31, 0x0892F4C4u);
    // nop
    ctx.pc = jump_target;
    if (rt.invoke_chained_call(ctx, &aot_mem) && ctx.pc == 0x0892F4C4u) goto L_0892F4C4;
    return;
L_0892F4C4:
    { const bool branch_taken = ctx.gpr[17] == 0u;
    // nop
      if (branch_taken) {
          goto L_0892F56C;
      }
      goto L_0892F4CC;
    }
L_0892F4CC:
    ctx.set_gpr(18, rt.memory().aot_load32(ctx.gpr[21] + static_cast<std::uint32_t>(148)));
    ctx.set_gpr(4, ctx.gpr[17] + 0u);
    ctx.set_gpr(5, 2228u << 16u);
    ctx.set_gpr(5, ctx.gpr[5] + static_cast<std::uint32_t>(-9588));
    ctx.set_gpr(31, 0x0892F4E4u);
    // nop
    goto L_0892F0FC;
L_0892F4E4:
    { const bool branch_taken = ctx.gpr[2] == 0u;
    // nop
      if (branch_taken) {
          goto L_0892F4F8;
      }
      goto L_0892F4EC;
    }
L_0892F4EC:
    ctx.set_gpr(18, 0u + 0u);
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_0892F568;
      }
      goto L_0892F4F8;
    }
L_0892F4F8:
    ctx.set_gpr(4, ctx.gpr[17] + 0u);
    ctx.set_gpr(5, 2228u << 16u);
    ctx.set_gpr(5, ctx.gpr[5] + static_cast<std::uint32_t>(-9576));
    ctx.set_gpr(31, 0x0892F50Cu);
    // nop
    goto L_0892F0FC;
L_0892F50C:
    { const bool branch_taken = ctx.gpr[2] == 0u;
    // nop
      if (branch_taken) {
          goto L_0892F520;
      }
      goto L_0892F514;
    }
L_0892F514:
    ctx.set_gpr(18, 0u + static_cast<std::uint32_t>(1));
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_0892F568;
      }
      goto L_0892F520;
    }
L_0892F520:
    ctx.set_gpr(4, ctx.gpr[17] + 0u);
    ctx.set_gpr(5, 2228u << 16u);
    ctx.set_gpr(5, ctx.gpr[5] + static_cast<std::uint32_t>(-9560));
    ctx.set_gpr(31, 0x0892F534u);
    // nop
    goto L_0892F0FC;
L_0892F534:
    { const bool branch_taken = ctx.gpr[2] == 0u;
    // nop
      if (branch_taken) {
          goto L_0892F548;
      }
      goto L_0892F53C;
    }
L_0892F53C:
    ctx.set_gpr(18, 0u + static_cast<std::uint32_t>(2));
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_0892F568;
      }
      goto L_0892F548;
    }
L_0892F548:
    ctx.set_gpr(4, ctx.gpr[17] + 0u);
    ctx.set_gpr(5, 2228u << 16u);
    ctx.set_gpr(5, ctx.gpr[5] + static_cast<std::uint32_t>(-9540));
    ctx.set_gpr(31, 0x0892F55Cu);
    // nop
    goto L_0892F0FC;
L_0892F55C:
    { const bool branch_taken = ctx.gpr[2] == 0u;
    // nop
      if (branch_taken) {
          goto L_0892F568;
      }
      goto L_0892F564;
    }
L_0892F564:
    ctx.set_gpr(18, 0u + static_cast<std::uint32_t>(3));
    goto L_0892F568;
L_0892F568:
    rt.memory().aot_store32(ctx.gpr[21] + static_cast<std::uint32_t>(148), ctx.gpr[18]);
    goto L_0892F56C;
L_0892F56C:
    { const bool branch_taken = ctx.gpr[16] == 0u;
    // nop
      if (branch_taken) {
          goto L_0892F614;
      }
      goto L_0892F574;
    }
L_0892F574:
    ctx.set_gpr(17, rt.memory().aot_load32(ctx.gpr[21] + static_cast<std::uint32_t>(144)));
    ctx.set_gpr(4, ctx.gpr[16] + 0u);
    ctx.set_gpr(5, 2228u << 16u);
    ctx.set_gpr(5, ctx.gpr[5] + static_cast<std::uint32_t>(-9524));
    ctx.set_gpr(31, 0x0892F58Cu);
    // nop
    goto L_0892F0FC;
L_0892F58C:
    { const bool branch_taken = ctx.gpr[2] == 0u;
    // nop
      if (branch_taken) {
          goto L_0892F5A0;
      }
      goto L_0892F594;
    }
L_0892F594:
    ctx.set_gpr(17, 0u + 0u);
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_0892F610;
      }
      goto L_0892F5A0;
    }
L_0892F5A0:
    ctx.set_gpr(4, ctx.gpr[16] + 0u);
    ctx.set_gpr(5, 2228u << 16u);
    ctx.set_gpr(5, ctx.gpr[5] + static_cast<std::uint32_t>(-9512));
    ctx.set_gpr(31, 0x0892F5B4u);
    // nop
    goto L_0892F0FC;
L_0892F5B4:
    { const bool branch_taken = ctx.gpr[2] == 0u;
    // nop
      if (branch_taken) {
          goto L_0892F5C8;
      }
      goto L_0892F5BC;
    }
L_0892F5BC:
    ctx.set_gpr(17, 0u + static_cast<std::uint32_t>(1));
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_0892F610;
      }
      goto L_0892F5C8;
    }
L_0892F5C8:
    ctx.set_gpr(4, ctx.gpr[16] + 0u);
    ctx.set_gpr(5, 2228u << 16u);
    ctx.set_gpr(5, ctx.gpr[5] + static_cast<std::uint32_t>(-9496));
    ctx.set_gpr(31, 0x0892F5DCu);
    // nop
    goto L_0892F0FC;
L_0892F5DC:
    { const bool branch_taken = ctx.gpr[2] == 0u;
    // nop
      if (branch_taken) {
          goto L_0892F5F0;
      }
      goto L_0892F5E4;
    }
L_0892F5E4:
    ctx.set_gpr(17, 0u + static_cast<std::uint32_t>(2));
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_0892F610;
      }
      goto L_0892F5F0;
    }
L_0892F5F0:
    ctx.set_gpr(4, ctx.gpr[16] + 0u);
    ctx.set_gpr(5, 2228u << 16u);
    ctx.set_gpr(5, ctx.gpr[5] + static_cast<std::uint32_t>(-9480));
    ctx.set_gpr(31, 0x0892F604u);
    // nop
    goto L_0892F0FC;
L_0892F604:
    { const bool branch_taken = ctx.gpr[2] == 0u;
    // nop
      if (branch_taken) {
          goto L_0892F610;
      }
      goto L_0892F60C;
    }
L_0892F60C:
    ctx.set_gpr(17, 0u + static_cast<std::uint32_t>(3));
    goto L_0892F610;
L_0892F610:
    rt.memory().aot_store32(ctx.gpr[21] + static_cast<std::uint32_t>(144), ctx.gpr[17]);
    goto L_0892F614;
L_0892F614:
    ctx.set_gpr(3, rt.memory().aot_load32(ctx.gpr[20] + static_cast<std::uint32_t>(56)));
    ctx.set_gpr(2, 0u + static_cast<std::uint32_t>(-2));
    ctx.set_gpr(4, ctx.gpr[3] & ctx.gpr[2]);
    { const bool branch_taken = ctx.gpr[4] == 0u;
    // nop
      if (branch_taken) {
          goto L_0892F65C;
      }
      goto L_0892F628;
    }
L_0892F628:
    ctx.set_gpr(5, 2228u << 16u);
    ctx.set_gpr(5, ctx.gpr[5] + static_cast<std::uint32_t>(-9464));
    ctx.set_gpr(31, 0x0892F638u);
    // nop
    goto L_0892F0FC;
L_0892F638:
    { const bool branch_taken = ctx.gpr[2] == 0u;
    // nop
      if (branch_taken) {
          goto L_0892F65C;
      }
      goto L_0892F640;
    }
L_0892F640:
    ctx.set_gpr(2, rt.memory().aot_load32(ctx.gpr[21] + static_cast<std::uint32_t>(140)));
    ctx.set_gpr(5, ctx.gpr[2] | 4096u);
    ctx.set_gpr(4, ctx.gpr[21] + 0u);
    ctx.set_gpr(25, rt.memory().aot_load32(ctx.gpr[21] + static_cast<std::uint32_t>(0)));
    ctx.set_gpr(25, rt.memory().aot_load32(ctx.gpr[25] + static_cast<std::uint32_t>(360)));
    jump_target = ctx.gpr[25];
    ctx.set_gpr(31, 0x0892F65Cu);
    // nop
    ctx.pc = jump_target;
    if (rt.invoke_chained_call(ctx, &aot_mem) && ctx.pc == 0x0892F65Cu) goto L_0892F65C;
    return;
L_0892F65C:
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
L_0892F688:
    ctx.set_gpr(2, rt.memory().aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(128)));
    jump_target = ctx.gpr[31];
    // nop
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_0892F694:
    ctx.set_gpr(2, rt.memory().aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(132)));
    jump_target = ctx.gpr[31];
    // nop
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_0892F6A0:
    ctx.set_gpr(29, ctx.gpr[29] + static_cast<std::uint32_t>(-16));
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(12), ctx.gpr[31]);
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(8), ctx.gpr[17]);
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(4), ctx.gpr[16]);
    ctx.set_gpr(17, ctx.gpr[4] + 0u);
    ctx.set_gpr(25, rt.memory().aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(0)));
    ctx.set_gpr(25, rt.memory().aot_load32(ctx.gpr[25] + static_cast<std::uint32_t>(404)));
    jump_target = ctx.gpr[25];
    ctx.set_gpr(31, 0x0892F6C4u);
    // nop
    ctx.pc = jump_target;
    if (rt.invoke_chained_call(ctx, &aot_mem) && ctx.pc == 0x0892F6C4u) goto L_0892F6C4;
    return;
L_0892F6C4:
    ctx.set_gpr(16, ctx.gpr[2] + 0u);
    ctx.set_gpr(4, ctx.gpr[17] + 0u);
    ctx.set_gpr(25, rt.memory().aot_load32(ctx.gpr[17] + static_cast<std::uint32_t>(0)));
    ctx.set_gpr(25, rt.memory().aot_load32(ctx.gpr[25] + static_cast<std::uint32_t>(400)));
    jump_target = ctx.gpr[25];
    ctx.set_gpr(31, 0x0892F6DCu);
    // nop
    ctx.pc = jump_target;
    if (rt.invoke_chained_call(ctx, &aot_mem) && ctx.pc == 0x0892F6DCu) goto L_0892F6DC;
    return;
L_0892F6DC:
    ctx.set_gpr(2, ctx.gpr[16] - ctx.gpr[2]);
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
L_0892F6F8:
    ctx.set_gpr(29, ctx.gpr[29] + static_cast<std::uint32_t>(-48));
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(28), ctx.gpr[31]);
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(24), ctx.gpr[22]);
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(20), ctx.gpr[21]);
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(16), ctx.gpr[20]);
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(12), ctx.gpr[19]);
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(8), ctx.gpr[18]);
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(4), ctx.gpr[17]);
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(0), ctx.gpr[16]);
    ctx.set_gpr(20, ctx.gpr[4] + 0u);
    ctx.set_gpr(19, ctx.gpr[5] + 0u);
    ctx.set_gpr(21, ctx.gpr[6] + 0u);
    ctx.set_gpr(18, ctx.gpr[7] + 0u);
    ctx.set_gpr(16, 0u + 0u);
    ctx.set_gpr(4, ctx.gpr[18] + 0u);
    ctx.set_gpr(31, 0x0892F73Cu);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0079_entry, 79u, 414u, 0x08941DB0u>(ctx, &aot_mem) && ctx.pc == 0x0892F73Cu) goto L_0892F73C;
    return;
L_0892F73C:
    ctx.set_gpr(22, ctx.gpr[2] + 0u);
    rt.memory().aot_store8(ctx.gpr[20] + static_cast<std::uint32_t>(0), static_cast<std::uint8_t>(0u));
    ctx.set_gpr(17, 0u + 0u);
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_0892F818;
      }
      goto L_0892F750;
    }
L_0892F750:
    ctx.set_gpr(4, ctx.gpr[18] + 0u);
    ctx.set_gpr(5, ctx.gpr[17] + 0u);
    ctx.set_gpr(31, 0x0892F760u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0079_entry, 79u, 426u, 0x08941E48u>(ctx, &aot_mem) && ctx.pc == 0x0892F760u) goto L_0892F760;
    return;
L_0892F760:
    ctx.set_gpr(2, ctx.gpr[21] & ctx.gpr[2]);
    { const bool branch_taken = ctx.gpr[2] == 0u;
    // nop
      if (branch_taken) {
          goto L_0892F814;
      }
      goto L_0892F76C;
    }
L_0892F76C:
    { const bool branch_taken = ctx.gpr[16] == 0u;
    // nop
      if (branch_taken) {
          goto L_0892F788;
      }
      goto L_0892F774;
    }
L_0892F774:
    ctx.set_gpr(6, ctx.gpr[19] + static_cast<std::uint32_t>(-1));
    ctx.set_gpr(4, ctx.gpr[20] + 0u);
    ctx.set_gpr(5, ctx.gpr[28] + static_cast<std::uint32_t>(-32708));
    ctx.set_gpr(31, 0x0892F788u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0004_entry, 4u, 530u, 0x088168E4u>(ctx, &aot_mem) && ctx.pc == 0x0892F788u) goto L_0892F788;
    return;
L_0892F788:
    ctx.set_gpr(4, ctx.gpr[29] + static_cast<std::uint32_t>(44));
    ctx.set_gpr(5, ctx.gpr[18] + 0u);
    ctx.set_gpr(6, ctx.gpr[17] + 0u);
    ctx.set_gpr(31, 0x0892F79Cu);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0079_entry, 79u, 415u, 0x08941DC0u>(ctx, &aot_mem) && ctx.pc == 0x0892F79Cu) goto L_0892F79C;
    return;
L_0892F79C:
    ctx.set_gpr(3, rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(44)));
    ctx.set_gpr(2, 0u + static_cast<std::uint32_t>(-2));
    ctx.set_gpr(5, ctx.gpr[3] & ctx.gpr[2]);
    ctx.set_gpr(6, ctx.gpr[19] + static_cast<std::uint32_t>(-1));
    ctx.set_gpr(4, ctx.gpr[20] + 0u);
    ctx.set_gpr(31, 0x0892F7B8u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0004_entry, 4u, 530u, 0x088168E4u>(ctx, &aot_mem) && ctx.pc == 0x0892F7B8u) goto L_0892F7B8;
    return;
L_0892F7B8:
    ctx.set_gpr(4, 0u + 0u);
    ctx.set_gpr(3, rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(44)));
    { const bool branch_taken = ctx.gpr[3] == 0u;
    // nop
      if (branch_taken) {
          goto L_0892F7E4;
      }
      goto L_0892F7C8;
    }
L_0892F7C8:
    ctx.set_gpr(2, ctx.gpr[3] & 1u);
    ctx.set_gpr(2, ctx.gpr[2] ^ 1u);
    ctx.set_gpr(2, ctx.gpr[2] < static_cast<std::uint32_t>(1) ? 1u : 0u);
    ctx.set_gpr(2, ctx.gpr[2] ^ 1u);
    { const bool branch_taken = ctx.gpr[2] == 0u;
    // nop
      if (branch_taken) {
          goto L_0892F7E4;
      }
      goto L_0892F7E0;
    }
L_0892F7E0:
    ctx.set_gpr(4, 0u + static_cast<std::uint32_t>(1));
    goto L_0892F7E4;
L_0892F7E4:
    { const bool branch_taken = ctx.gpr[4] == 0u;
    // nop
      if (branch_taken) {
          goto L_0892F810;
      }
      goto L_0892F7EC;
    }
L_0892F7EC:
    ctx.set_gpr(5, ctx.gpr[3] + static_cast<std::uint32_t>(-8));
    ctx.set_gpr(2, rt.memory().aot_load32(ctx.gpr[3] + static_cast<std::uint32_t>(-4)));
    ctx.set_gpr(2, ctx.gpr[2] + static_cast<std::uint32_t>(-1));
    rt.memory().aot_store32(ctx.gpr[3] + static_cast<std::uint32_t>(-4), ctx.gpr[2]);
    { const bool branch_taken = ctx.gpr[2] != 0u;
    // nop
      if (branch_taken) {
          goto L_0892F810;
      }
      goto L_0892F804;
    }
L_0892F804:
    ctx.set_gpr(4, rt.memory().aot_load32(ctx.gpr[5] + static_cast<std::uint32_t>(0)));
    ctx.set_gpr(31, 0x0892F810u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0085_entry, 85u, 887u, 0x0895BD2Cu>(ctx, &aot_mem) && ctx.pc == 0x0892F810u) goto L_0892F810;
    return;
L_0892F810:
    ctx.set_gpr(16, ctx.gpr[16] + static_cast<std::uint32_t>(1));
    goto L_0892F814;
L_0892F814:
    ctx.set_gpr(17, ctx.gpr[17] + static_cast<std::uint32_t>(1));
    goto L_0892F818;
L_0892F818:
    ctx.set_gpr(2, static_cast<std::int32_t>(ctx.gpr[17]) < static_cast<std::int32_t>(ctx.gpr[22]) ? 1u : 0u);
    { const bool branch_taken = ctx.gpr[2] != 0u;
    // nop
      if (branch_taken) {
          goto L_0892F750;
      }
      goto L_0892F824;
    }
L_0892F824:
    ctx.set_gpr(2, ctx.gpr[19] + ctx.gpr[20]);
    rt.memory().aot_store8(ctx.gpr[2] + static_cast<std::uint32_t>(-1), static_cast<std::uint8_t>(0u));
    ctx.set_gpr(2, ctx.gpr[20] + 0u);
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
L_0892F85C:
    ctx.set_gpr(29, ctx.gpr[29] + static_cast<std::uint32_t>(-32));
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(12), ctx.gpr[31]);
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(8), ctx.gpr[17]);
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(4), ctx.gpr[16]);
    ctx.set_gpr(16, ctx.gpr[4] + 0u);
    ctx.set_gpr(17, ctx.gpr[5] + 0u);
    ctx.set_gpr(4, ctx.gpr[29] + static_cast<std::uint32_t>(28));
    ctx.set_gpr(5, ctx.gpr[7] + 0u);
    ctx.set_gpr(31, 0x0892F884u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0079_entry, 79u, 387u, 0x08941BFCu>(ctx, &aot_mem) && ctx.pc == 0x0892F884u) goto L_0892F884;
    return;
L_0892F884:
    ctx.set_gpr(3, rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(28)));
    ctx.set_gpr(2, 0u + static_cast<std::uint32_t>(-2));
    ctx.set_gpr(5, ctx.gpr[3] & ctx.gpr[2]);
    ctx.set_gpr(6, ctx.gpr[17] + static_cast<std::uint32_t>(-1));
    ctx.set_gpr(4, ctx.gpr[16] + 0u);
    ctx.set_gpr(31, 0x0892F8A0u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0004_entry, 4u, 574u, 0x08816B28u>(ctx, &aot_mem) && ctx.pc == 0x0892F8A0u) goto L_0892F8A0;
    return;
L_0892F8A0:
    ctx.set_gpr(2, ctx.gpr[17] + ctx.gpr[16]);
    rt.memory().aot_store8(ctx.gpr[2] + static_cast<std::uint32_t>(-1), static_cast<std::uint8_t>(0u));
    ctx.set_gpr(4, 0u + 0u);
    ctx.set_gpr(3, rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(28)));
    { const bool branch_taken = ctx.gpr[3] == 0u;
    // nop
      if (branch_taken) {
          goto L_0892F8D4;
      }
      goto L_0892F8B8;
    }
L_0892F8B8:
    ctx.set_gpr(2, ctx.gpr[3] & 1u);
    ctx.set_gpr(2, ctx.gpr[2] ^ 1u);
    ctx.set_gpr(2, ctx.gpr[2] < static_cast<std::uint32_t>(1) ? 1u : 0u);
    ctx.set_gpr(2, ctx.gpr[2] ^ 1u);
    { const bool branch_taken = ctx.gpr[2] == 0u;
    // nop
      if (branch_taken) {
          goto L_0892F8D4;
      }
      goto L_0892F8D0;
    }
L_0892F8D0:
    ctx.set_gpr(4, 0u + static_cast<std::uint32_t>(1));
    goto L_0892F8D4;
L_0892F8D4:
    { const bool branch_taken = ctx.gpr[4] == 0u;
    // nop
      if (branch_taken) {
          goto L_0892F900;
      }
      goto L_0892F8DC;
    }
L_0892F8DC:
    ctx.set_gpr(5, ctx.gpr[3] + static_cast<std::uint32_t>(-8));
    ctx.set_gpr(2, rt.memory().aot_load32(ctx.gpr[3] + static_cast<std::uint32_t>(-4)));
    ctx.set_gpr(2, ctx.gpr[2] + static_cast<std::uint32_t>(-1));
    rt.memory().aot_store32(ctx.gpr[3] + static_cast<std::uint32_t>(-4), ctx.gpr[2]);
    { const bool branch_taken = ctx.gpr[2] != 0u;
    // nop
      if (branch_taken) {
          goto L_0892F900;
      }
      goto L_0892F8F4;
    }
L_0892F8F4:
    ctx.set_gpr(4, rt.memory().aot_load32(ctx.gpr[5] + static_cast<std::uint32_t>(0)));
    ctx.set_gpr(31, 0x0892F900u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0085_entry, 85u, 887u, 0x0895BD2Cu>(ctx, &aot_mem) && ctx.pc == 0x0892F900u) goto L_0892F900;
    return;
L_0892F900:
    ctx.set_gpr(2, ctx.gpr[16] + 0u);
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
L_0892F91C:
    ctx.set_gpr(29, ctx.gpr[29] + static_cast<std::uint32_t>(-560));
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(124), ctx.gpr[31]);
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(120), ctx.gpr[30]);
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(116), ctx.gpr[23]);
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(112), ctx.gpr[22]);
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(108), ctx.gpr[21]);
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(104), ctx.gpr[20]);
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(100), ctx.gpr[19]);
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(96), ctx.gpr[18]);
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(92), ctx.gpr[17]);
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(88), ctx.gpr[16]);
    ctx.set_gpr(21, ctx.gpr[4] + 0u);
    { const bool branch_taken = ctx.gpr[5] == 0u;
    // nop
      if (branch_taken) {
          goto L_0892F978;
      }
      goto L_0892F954;
    }
L_0892F954:
    ctx.set_gpr(2, static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int8_t>(rt.memory().aot_load8(ctx.gpr[5] + static_cast<std::uint32_t>(0))))));
    { const bool branch_taken = ctx.gpr[2] == 0u;
    // nop
      if (branch_taken) {
          goto L_0892F978;
      }
      goto L_0892F960;
    }
L_0892F960:
    ctx.set_gpr(4, 2228u << 16u);
    ctx.set_gpr(4, ctx.gpr[4] + static_cast<std::uint32_t>(-15032));
    ctx.set_gpr(31, 0x0892F970u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0081_entry, 81u, 869u, 0x0894BF18u>(ctx, &aot_mem) && ctx.pc == 0x0892F970u) goto L_0892F970;
    return;
L_0892F970:
    ctx.set_gpr(31, 0x0892F978u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0082_entry, 82u, 28u, 0x0894C1E0u>(ctx, &aot_mem) && ctx.pc == 0x0892F978u) goto L_0892F978;
    return;
L_0892F978:
    ctx.set_gpr(31, 0x0892F980u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0064_entry, 64u, 444u, 0x08905FF0u>(ctx, &aot_mem) && ctx.pc == 0x0892F980u) goto L_0892F980;
    return;
L_0892F980:
    ctx.set_gpr(2, rt.memory().aot_load32(ctx.gpr[2] + static_cast<std::uint32_t>(36)));
    ctx.set_gpr(2, 0u < ctx.gpr[2] ? 1u : 0u);
    { const bool branch_taken = ctx.gpr[2] == 0u;
    // nop
      if (branch_taken) {
          goto L_0892F9F8;
      }
      goto L_0892F990;
    }
L_0892F990:
    ctx.set_gpr(31, 0x0892F998u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0054_entry, 54u, 753u, 0x088DFE40u>(ctx, &aot_mem) && ctx.pc == 0x0892F998u) goto L_0892F998;
    return;
L_0892F998:
    ctx.set_gpr(6, rt.memory().aot_load32(ctx.gpr[21] + static_cast<std::uint32_t>(140)));
    ctx.set_gpr(4, ctx.gpr[29] + static_cast<std::uint32_t>(304));
    ctx.set_gpr(5, 0u + static_cast<std::uint32_t>(256));
    ctx.set_gpr(7, ctx.gpr[2] + 0u);
    ctx.set_gpr(31, 0x0892F9B0u);
    // nop
    goto L_0892F6F8;
L_0892F9B0:
    ctx.set_gpr(31, 0x0892F9B8u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0054_entry, 54u, 761u, 0x088DFEF8u>(ctx, &aot_mem) && ctx.pc == 0x0892F9B8u) goto L_0892F9B8;
    return;
L_0892F9B8:
    ctx.set_gpr(4, ctx.gpr[29] + static_cast<std::uint32_t>(240));
    ctx.set_gpr(5, 0u + static_cast<std::uint32_t>(64));
    ctx.set_gpr(6, rt.memory().aot_load32(ctx.gpr[21] + static_cast<std::uint32_t>(148)));
    ctx.set_gpr(7, ctx.gpr[2] + 0u);
    ctx.set_gpr(31, 0x0892F9D0u);
    // nop
    goto L_0892F85C;
L_0892F9D0:
    ctx.set_gpr(31, 0x0892F9D8u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0054_entry, 54u, 757u, 0x088DFE9Cu>(ctx, &aot_mem) && ctx.pc == 0x0892F9D8u) goto L_0892F9D8;
    return;
L_0892F9D8:
    ctx.set_gpr(4, ctx.gpr[29] + static_cast<std::uint32_t>(176));
    ctx.set_gpr(5, 0u + static_cast<std::uint32_t>(64));
    ctx.set_gpr(6, rt.memory().aot_load32(ctx.gpr[21] + static_cast<std::uint32_t>(144)));
    ctx.set_gpr(7, ctx.gpr[2] + 0u);
    ctx.set_gpr(31, 0x0892F9F0u);
    // nop
    goto L_0892F85C;
L_0892F9F0:
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_0892FA40;
      }
      goto L_0892F9F8;
    }
L_0892F9F8:
    ctx.set_gpr(4, ctx.gpr[29] + static_cast<std::uint32_t>(304));
    ctx.set_gpr(5, 2228u << 16u);
    ctx.set_gpr(5, ctx.gpr[5] + static_cast<std::uint32_t>(-13304));
    ctx.set_gpr(6, rt.memory().aot_load32(ctx.gpr[21] + static_cast<std::uint32_t>(140)));
    ctx.set_gpr(31, 0x0892FA10u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0004_entry, 4u, 423u, 0x08815FF4u>(ctx, &aot_mem) && ctx.pc == 0x0892FA10u) goto L_0892FA10;
    return;
L_0892FA10:
    ctx.set_gpr(4, ctx.gpr[29] + static_cast<std::uint32_t>(240));
    ctx.set_gpr(5, 2228u << 16u);
    ctx.set_gpr(5, ctx.gpr[5] + static_cast<std::uint32_t>(-13304));
    ctx.set_gpr(6, rt.memory().aot_load32(ctx.gpr[21] + static_cast<std::uint32_t>(148)));
    ctx.set_gpr(31, 0x0892FA28u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0004_entry, 4u, 423u, 0x08815FF4u>(ctx, &aot_mem) && ctx.pc == 0x0892FA28u) goto L_0892FA28;
    return;
L_0892FA28:
    ctx.set_gpr(4, ctx.gpr[29] + static_cast<std::uint32_t>(176));
    ctx.set_gpr(5, 2228u << 16u);
    ctx.set_gpr(5, ctx.gpr[5] + static_cast<std::uint32_t>(-13304));
    ctx.set_gpr(6, rt.memory().aot_load32(ctx.gpr[21] + static_cast<std::uint32_t>(144)));
    ctx.set_gpr(31, 0x0892FA40u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0004_entry, 4u, 423u, 0x08815FF4u>(ctx, &aot_mem) && ctx.pc == 0x0892FA40u) goto L_0892FA40;
    return;
L_0892FA40:
    ctx.set_gpr(30, rt.memory().aot_load32(ctx.gpr[21] + static_cast<std::uint32_t>(200)));
    ctx.set_gpr(2, rt.memory().aot_load32(ctx.gpr[21] + static_cast<std::uint32_t>(196)));
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(172), ctx.gpr[2]);
    ctx.set_gpr(2, rt.memory().aot_load32(ctx.gpr[21] + static_cast<std::uint32_t>(192)));
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(168), ctx.gpr[2]);
    ctx.set_gpr(2, rt.memory().aot_load32(ctx.gpr[21] + static_cast<std::uint32_t>(188)));
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(164), ctx.gpr[2]);
    ctx.set_gpr(2, rt.memory().aot_load32(ctx.gpr[21] + static_cast<std::uint32_t>(184)));
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(160), ctx.gpr[2]);
    ctx.set_gpr(20, rt.memory().aot_load32(ctx.gpr[21] + static_cast<std::uint32_t>(180)));
    ctx.set_gpr(19, rt.memory().aot_load32(ctx.gpr[21] + static_cast<std::uint32_t>(176)));
    ctx.set_gpr(18, rt.memory().aot_load32(ctx.gpr[21] + static_cast<std::uint32_t>(172)));
    ctx.set_gpr(17, rt.memory().aot_load32(ctx.gpr[21] + static_cast<std::uint32_t>(168)));
    ctx.set_gpr(16, rt.memory().aot_load32(ctx.gpr[21] + static_cast<std::uint32_t>(164)));
    ctx.set_gpr(22, rt.memory().aot_load32(ctx.gpr[21] + static_cast<std::uint32_t>(160)));
    ctx.set_gpr(23, rt.memory().aot_load32(ctx.gpr[21] + static_cast<std::uint32_t>(156)));
    ctx.set_gpr(4, ctx.gpr[21] + 0u);
    ctx.set_gpr(25, rt.memory().aot_load32(ctx.gpr[21] + static_cast<std::uint32_t>(0)));
    ctx.set_gpr(25, rt.memory().aot_load32(ctx.gpr[25] + static_cast<std::uint32_t>(320)));
    jump_target = ctx.gpr[25];
    ctx.set_gpr(31, 0x0892FA94u);
    // nop
    ctx.pc = jump_target;
    if (rt.invoke_chained_call(ctx, &aot_mem) && ctx.pc == 0x0892FA94u) goto L_0892FA94;
    return;
L_0892FA94:
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(156), ctx.gpr[2]);
    ctx.set_gpr(4, ctx.gpr[21] + 0u);
    ctx.set_gpr(25, rt.memory().aot_load32(ctx.gpr[21] + static_cast<std::uint32_t>(0)));
    ctx.set_gpr(25, rt.memory().aot_load32(ctx.gpr[25] + static_cast<std::uint32_t>(336)));
    jump_target = ctx.gpr[25];
    ctx.set_gpr(31, 0x0892FAACu);
    // nop
    ctx.pc = jump_target;
    if (rt.invoke_chained_call(ctx, &aot_mem) && ctx.pc == 0x0892FAACu) goto L_0892FAAC;
    return;
L_0892FAAC:
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(152), ctx.gpr[2]);
    ctx.set_gpr(4, ctx.gpr[21] + 0u);
    ctx.set_gpr(25, rt.memory().aot_load32(ctx.gpr[21] + static_cast<std::uint32_t>(0)));
    ctx.set_gpr(25, rt.memory().aot_load32(ctx.gpr[25] + static_cast<std::uint32_t>(328)));
    jump_target = ctx.gpr[25];
    ctx.set_gpr(31, 0x0892FAC4u);
    // nop
    ctx.pc = jump_target;
    if (rt.invoke_chained_call(ctx, &aot_mem) && ctx.pc == 0x0892FAC4u) goto L_0892FAC4;
    return;
L_0892FAC4:
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(148), ctx.gpr[2]);
    ctx.set_gpr(4, ctx.gpr[21] + 0u);
    ctx.set_gpr(25, rt.memory().aot_load32(ctx.gpr[21] + static_cast<std::uint32_t>(0)));
    ctx.set_gpr(25, rt.memory().aot_load32(ctx.gpr[25] + static_cast<std::uint32_t>(344)));
    jump_target = ctx.gpr[25];
    ctx.set_gpr(31, 0x0892FADCu);
    // nop
    ctx.pc = jump_target;
    if (rt.invoke_chained_call(ctx, &aot_mem) && ctx.pc == 0x0892FADCu) goto L_0892FADC;
    return;
L_0892FADC:
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(144), ctx.gpr[2]);
    ctx.set_gpr(4, ctx.gpr[21] + 0u);
    ctx.set_gpr(25, rt.memory().aot_load32(ctx.gpr[21] + static_cast<std::uint32_t>(0)));
    ctx.set_gpr(25, rt.memory().aot_load32(ctx.gpr[25] + static_cast<std::uint32_t>(212)));
    jump_target = ctx.gpr[25];
    ctx.set_gpr(31, 0x0892FAF4u);
    // nop
    ctx.pc = jump_target;
    if (rt.invoke_chained_call(ctx, &aot_mem) && ctx.pc == 0x0892FAF4u) goto L_0892FAF4;
    return;
L_0892FAF4:
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(140), ctx.gpr[2]);
    ctx.set_gpr(4, ctx.gpr[21] + 0u);
    ctx.set_gpr(25, rt.memory().aot_load32(ctx.gpr[21] + static_cast<std::uint32_t>(0)));
    ctx.set_gpr(25, rt.memory().aot_load32(ctx.gpr[25] + static_cast<std::uint32_t>(400)));
    jump_target = ctx.gpr[25];
    ctx.set_gpr(31, 0x0892FB0Cu);
    // nop
    ctx.pc = jump_target;
    if (rt.invoke_chained_call(ctx, &aot_mem) && ctx.pc == 0x0892FB0Cu) goto L_0892FB0C;
    return;
L_0892FB0C:
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(136), ctx.gpr[2]);
    ctx.set_gpr(4, ctx.gpr[21] + 0u);
    ctx.set_gpr(25, rt.memory().aot_load32(ctx.gpr[21] + static_cast<std::uint32_t>(0)));
    ctx.set_gpr(25, rt.memory().aot_load32(ctx.gpr[25] + static_cast<std::uint32_t>(404)));
    jump_target = ctx.gpr[25];
    ctx.set_gpr(31, 0x0892FB24u);
    // nop
    ctx.pc = jump_target;
    if (rt.invoke_chained_call(ctx, &aot_mem) && ctx.pc == 0x0892FB24u) goto L_0892FB24;
    return;
L_0892FB24:
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(132), ctx.gpr[2]);
    ctx.set_gpr(4, ctx.gpr[21] + 0u);
    ctx.set_gpr(25, rt.memory().aot_load32(ctx.gpr[21] + static_cast<std::uint32_t>(0)));
    ctx.set_gpr(25, rt.memory().aot_load32(ctx.gpr[25] + static_cast<std::uint32_t>(408)));
    jump_target = ctx.gpr[25];
    ctx.set_gpr(31, 0x0892FB3Cu);
    // nop
    ctx.pc = jump_target;
    if (rt.invoke_chained_call(ctx, &aot_mem) && ctx.pc == 0x0892FB3Cu) goto L_0892FB3C;
    return;
L_0892FB3C:
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(128), ctx.gpr[2]);
    ctx.set_gpr(4, ctx.gpr[21] + 0u);
    ctx.set_gpr(25, rt.memory().aot_load32(ctx.gpr[21] + static_cast<std::uint32_t>(0)));
    ctx.set_gpr(25, rt.memory().aot_load32(ctx.gpr[25] + static_cast<std::uint32_t>(456)));
    jump_target = ctx.gpr[25];
    ctx.set_gpr(31, 0x0892FB54u);
    // nop
    ctx.pc = jump_target;
    if (rt.invoke_chained_call(ctx, &aot_mem) && ctx.pc == 0x0892FB54u) goto L_0892FB54;
    return;
L_0892FB54:
    ctx.set_gpr(3, rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(160)));
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(0), ctx.gpr[3]);
    ctx.set_gpr(3, rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(164)));
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(4), ctx.gpr[3]);
    ctx.set_gpr(3, rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(168)));
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(8), ctx.gpr[3]);
    ctx.set_gpr(3, rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(172)));
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(12), ctx.gpr[3]);
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(16), ctx.gpr[30]);
    ctx.set_gpr(3, rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(156)));
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(20), ctx.gpr[3]);
    ctx.set_gpr(3, rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(152)));
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(24), ctx.gpr[3]);
    ctx.set_gpr(3, rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(148)));
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(28), ctx.gpr[3]);
    ctx.set_gpr(3, rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(144)));
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(32), ctx.gpr[3]);
    ctx.set_gpr(3, rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(140)));
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(36), ctx.gpr[3]);
    ctx.set_gpr(3, rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(136)));
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(40), ctx.gpr[3]);
    ctx.set_gpr(3, rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(132)));
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(44), ctx.gpr[3]);
    ctx.set_gpr(3, rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(128)));
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(48), ctx.gpr[3]);
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(52), ctx.gpr[2]);
    ctx.set_gpr(2, ctx.gpr[29] + static_cast<std::uint32_t>(304));
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(56), ctx.gpr[2]);
    ctx.set_gpr(2, ctx.gpr[29] + static_cast<std::uint32_t>(240));
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(60), ctx.gpr[2]);
    ctx.set_gpr(2, ctx.gpr[29] + static_cast<std::uint32_t>(176));
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(64), ctx.gpr[2]);
    ctx.set_gpr(4, 2228u << 16u);
    ctx.set_gpr(4, ctx.gpr[4] + static_cast<std::uint32_t>(-9452));
    ctx.set_gpr(5, ctx.gpr[23] + 0u);
    ctx.set_gpr(6, ctx.gpr[22] + 0u);
    ctx.set_gpr(7, ctx.gpr[16] + 0u);
    ctx.set_gpr(8, ctx.gpr[17] + 0u);
    ctx.set_gpr(9, ctx.gpr[18] + 0u);
    ctx.set_gpr(10, ctx.gpr[19] + 0u);
    ctx.set_gpr(11, ctx.gpr[20] + 0u);
    ctx.set_gpr(31, 0x0892FC00u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0081_entry, 81u, 869u, 0x0894BF18u>(ctx, &aot_mem) && ctx.pc == 0x0892FC00u) goto L_0892FC00;
    return;
L_0892FC00:
    ctx.set_gpr(31, 0x0892FC08u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0082_entry, 82u, 28u, 0x0894C1E0u>(ctx, &aot_mem) && ctx.pc == 0x0892FC08u) goto L_0892FC08;
    return;
L_0892FC08:
    ctx.set_gpr(31, rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(124)));
    ctx.set_gpr(30, rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(120)));
    ctx.set_gpr(23, rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(116)));
    ctx.set_gpr(22, rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(112)));
    ctx.set_gpr(21, rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(108)));
    ctx.set_gpr(20, rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(104)));
    ctx.set_gpr(19, rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(100)));
    ctx.set_gpr(18, rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(96)));
    ctx.set_gpr(17, rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(92)));
    ctx.set_gpr(16, rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(88)));
    ctx.set_gpr(29, ctx.gpr[29] + static_cast<std::uint32_t>(560));
    jump_target = ctx.gpr[31];
    // nop
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_0892FC3C:
    ctx.set_gpr(29, ctx.gpr[29] + static_cast<std::uint32_t>(-48));
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(44), ctx.gpr[31]);
    ctx.set_gpr(5, ctx.gpr[4] + 0u);
    { const bool branch_taken = ctx.gpr[5] == 0u;
    // nop
      if (branch_taken) {
          goto L_0892FC74;
      }
      goto L_0892FC50;
    }
L_0892FC50:
    ctx.set_gpr(2, static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int8_t>(rt.memory().aot_load8(ctx.gpr[5] + static_cast<std::uint32_t>(0))))));
    { const bool branch_taken = ctx.gpr[2] == 0u;
    // nop
      if (branch_taken) {
          goto L_0892FC74;
      }
      goto L_0892FC5C;
    }
L_0892FC5C:
    ctx.set_gpr(4, 2228u << 16u);
    ctx.set_gpr(4, ctx.gpr[4] + static_cast<std::uint32_t>(-15032));
    ctx.set_gpr(31, 0x0892FC6Cu);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0081_entry, 81u, 869u, 0x0894BF18u>(ctx, &aot_mem) && ctx.pc == 0x0892FC6Cu) goto L_0892FC6C;
    return;
L_0892FC6C:
    ctx.set_gpr(31, 0x0892FC74u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0082_entry, 82u, 28u, 0x0894C1E0u>(ctx, &aot_mem) && ctx.pc == 0x0892FC74u) goto L_0892FC74;
    return;
L_0892FC74:
    ctx.set_gpr(2, 2245u << 16u);
    ctx.set_gpr(2, rt.memory().aot_load32(ctx.gpr[2] + static_cast<std::uint32_t>(30856)));
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(0), ctx.gpr[2]);
    ctx.set_gpr(2, 2245u << 16u);
    ctx.set_gpr(2, rt.memory().aot_load32(ctx.gpr[2] + static_cast<std::uint32_t>(30860)));
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(4), ctx.gpr[2]);
    ctx.set_gpr(2, 2245u << 16u);
    ctx.set_gpr(2, rt.memory().aot_load32(ctx.gpr[2] + static_cast<std::uint32_t>(30864)));
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(8), ctx.gpr[2]);
    ctx.set_gpr(2, 2245u << 16u);
    ctx.set_gpr(2, rt.memory().aot_load32(ctx.gpr[2] + static_cast<std::uint32_t>(30868)));
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(12), ctx.gpr[2]);
    ctx.set_gpr(2, 2245u << 16u);
    ctx.set_gpr(2, rt.memory().aot_load32(ctx.gpr[2] + static_cast<std::uint32_t>(30872)));
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(16), ctx.gpr[2]);
    ctx.set_gpr(4, 2228u << 16u);
    ctx.set_gpr(4, ctx.gpr[4] + static_cast<std::uint32_t>(-8368));
    ctx.set_gpr(2, 2245u << 16u);
    ctx.set_gpr(5, rt.memory().aot_load32(ctx.gpr[2] + static_cast<std::uint32_t>(30828)));
    ctx.set_gpr(2, 2245u << 16u);
    ctx.set_gpr(6, rt.memory().aot_load32(ctx.gpr[2] + static_cast<std::uint32_t>(30832)));
    ctx.set_gpr(2, 2245u << 16u);
    ctx.set_gpr(7, rt.memory().aot_load32(ctx.gpr[2] + static_cast<std::uint32_t>(30836)));
    ctx.set_gpr(2, 2245u << 16u);
    ctx.set_gpr(8, rt.memory().aot_load32(ctx.gpr[2] + static_cast<std::uint32_t>(30840)));
    ctx.set_gpr(2, 2245u << 16u);
    ctx.set_gpr(9, rt.memory().aot_load32(ctx.gpr[2] + static_cast<std::uint32_t>(30844)));
    ctx.set_gpr(2, 2245u << 16u);
    ctx.set_gpr(10, rt.memory().aot_load32(ctx.gpr[2] + static_cast<std::uint32_t>(30848)));
    ctx.set_gpr(2, 2245u << 16u);
    ctx.set_gpr(11, rt.memory().aot_load32(ctx.gpr[2] + static_cast<std::uint32_t>(30852)));
    ctx.set_gpr(31, 0x0892FCF8u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0081_entry, 81u, 869u, 0x0894BF18u>(ctx, &aot_mem) && ctx.pc == 0x0892FCF8u) goto L_0892FCF8;
    return;
L_0892FCF8:
    ctx.set_gpr(31, 0x0892FD00u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0082_entry, 82u, 28u, 0x0894C1E0u>(ctx, &aot_mem) && ctx.pc == 0x0892FD00u) goto L_0892FD00;
    return;
L_0892FD00:
    ctx.set_gpr(31, rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(44)));
    ctx.set_gpr(29, ctx.gpr[29] + static_cast<std::uint32_t>(48));
    jump_target = ctx.gpr[31];
    // nop
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_0892FD10:
    ctx.set_gpr(29, ctx.gpr[29] + static_cast<std::uint32_t>(-112));
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(44), ctx.gpr[31]);
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(40), ctx.gpr[22]);
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(36), ctx.gpr[21]);
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(32), ctx.gpr[20]);
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(28), ctx.gpr[19]);
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(24), ctx.gpr[18]);
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(20), ctx.gpr[17]);
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(16), ctx.gpr[16]);
    ctx.set_gpr(21, ctx.gpr[4] + 0u);
    { const bool branch_taken = ctx.gpr[5] == 0u;
    // nop
      if (branch_taken) {
          goto L_0892FD58;
      }
      goto L_0892FD40;
    }
L_0892FD40:
    ctx.set_gpr(4, 2228u << 16u);
    ctx.set_gpr(4, ctx.gpr[4] + static_cast<std::uint32_t>(-7824));
    ctx.set_gpr(31, 0x0892FD50u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0081_entry, 81u, 869u, 0x0894BF18u>(ctx, &aot_mem) && ctx.pc == 0x0892FD50u) goto L_0892FD50;
    return;
L_0892FD50:
    ctx.set_gpr(31, 0x0892FD58u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0082_entry, 82u, 28u, 0x0894C1E0u>(ctx, &aot_mem) && ctx.pc == 0x0892FD58u) goto L_0892FD58;
    return;
L_0892FD58:
    ctx.set_gpr(4, ctx.gpr[21] + 0u);
    ctx.set_gpr(25, rt.memory().aot_load32(ctx.gpr[21] + static_cast<std::uint32_t>(0)));
    ctx.set_gpr(25, rt.memory().aot_load32(ctx.gpr[25] + static_cast<std::uint32_t>(464)));
    jump_target = ctx.gpr[25];
    ctx.set_gpr(31, 0x0892FD6Cu);
    // nop
    ctx.pc = jump_target;
    if (rt.invoke_chained_call(ctx, &aot_mem) && ctx.pc == 0x0892FD6Cu) goto L_0892FD6C;
    return;
L_0892FD6C:
    ctx.set_gpr(4, ctx.gpr[29] + static_cast<std::uint32_t>(48));
    ctx.set_gpr(5, ctx.gpr[2] + 0u);
    ctx.set_gpr(6, 0u + static_cast<std::uint32_t>(19));
    ctx.set_gpr(31, 0x0892FD80u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0004_entry, 4u, 574u, 0x08816B28u>(ctx, &aot_mem) && ctx.pc == 0x0892FD80u) goto L_0892FD80;
    return;
L_0892FD80:
    rt.memory().aot_store8(ctx.gpr[29] + static_cast<std::uint32_t>(67), static_cast<std::uint8_t>(0u));
    ctx.set_gpr(20, rt.memory().aot_load32(ctx.gpr[21] + static_cast<std::uint32_t>(200)));
    ctx.set_gpr(19, rt.memory().aot_load32(ctx.gpr[21] + static_cast<std::uint32_t>(196)));
    ctx.set_gpr(18, rt.memory().aot_load32(ctx.gpr[21] + static_cast<std::uint32_t>(184)));
    ctx.set_gpr(17, rt.memory().aot_load32(ctx.gpr[21] + static_cast<std::uint32_t>(180)));
    ctx.set_gpr(4, ctx.gpr[21] + 0u);
    ctx.set_gpr(25, rt.memory().aot_load32(ctx.gpr[21] + static_cast<std::uint32_t>(0)));
    ctx.set_gpr(25, rt.memory().aot_load32(ctx.gpr[25] + static_cast<std::uint32_t>(336)));
    jump_target = ctx.gpr[25];
    ctx.set_gpr(31, 0x0892FDA8u);
    // nop
    ctx.pc = jump_target;
    if (rt.invoke_chained_call(ctx, &aot_mem) && ctx.pc == 0x0892FDA8u) goto L_0892FDA8;
    return;
L_0892FDA8:
    ctx.set_gpr(16, ctx.gpr[2] + 0u);
    ctx.set_gpr(4, ctx.gpr[21] + 0u);
    ctx.set_gpr(25, rt.memory().aot_load32(ctx.gpr[21] + static_cast<std::uint32_t>(0)));
    ctx.set_gpr(25, rt.memory().aot_load32(ctx.gpr[25] + static_cast<std::uint32_t>(320)));
    jump_target = ctx.gpr[25];
    ctx.set_gpr(31, 0x0892FDC0u);
    // nop
    ctx.pc = jump_target;
    if (rt.invoke_chained_call(ctx, &aot_mem) && ctx.pc == 0x0892FDC0u) goto L_0892FDC0;
    return;
L_0892FDC0:
    ctx.set_gpr(22, ctx.gpr[2] + 0u);
    ctx.set_gpr(4, ctx.gpr[21] + 0u);
    ctx.set_gpr(25, rt.memory().aot_load32(ctx.gpr[21] + static_cast<std::uint32_t>(0)));
    ctx.set_gpr(25, rt.memory().aot_load32(ctx.gpr[25] + static_cast<std::uint32_t>(356)));
    jump_target = ctx.gpr[25];
    ctx.set_gpr(31, 0x0892FDD8u);
    // nop
    ctx.pc = jump_target;
    if (rt.invoke_chained_call(ctx, &aot_mem) && ctx.pc == 0x0892FDD8u) goto L_0892FDD8;
    return;
L_0892FDD8:
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(0), ctx.gpr[2]);
    ctx.set_gpr(4, 2228u << 16u);
    ctx.set_gpr(4, ctx.gpr[4] + static_cast<std::uint32_t>(-7744));
    ctx.set_gpr(5, ctx.gpr[29] + static_cast<std::uint32_t>(48));
    ctx.set_gpr(6, ctx.gpr[17] + 0u);
    ctx.set_gpr(7, ctx.gpr[18] + 0u);
    ctx.set_gpr(8, ctx.gpr[19] + 0u);
    ctx.set_gpr(9, ctx.gpr[20] + 0u);
    ctx.set_gpr(10, ctx.gpr[16] + 0u);
    ctx.set_gpr(11, ctx.gpr[22] + 0u);
    ctx.set_gpr(31, 0x0892FE08u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0081_entry, 81u, 869u, 0x0894BF18u>(ctx, &aot_mem) && ctx.pc == 0x0892FE08u) goto L_0892FE08;
    return;
L_0892FE08:
    ctx.set_gpr(31, 0x0892FE10u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0082_entry, 82u, 28u, 0x0894C1E0u>(ctx, &aot_mem) && ctx.pc == 0x0892FE10u) goto L_0892FE10;
    return;
L_0892FE10:
    ctx.set_gpr(31, rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(44)));
    ctx.set_gpr(22, rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(40)));
    ctx.set_gpr(21, rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(36)));
    ctx.set_gpr(20, rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(32)));
    ctx.set_gpr(19, rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(28)));
    ctx.set_gpr(18, rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(24)));
    ctx.set_gpr(17, rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(20)));
    ctx.set_gpr(16, rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(16)));
    ctx.set_gpr(29, ctx.gpr[29] + static_cast<std::uint32_t>(112));
    jump_target = ctx.gpr[31];
    // nop
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_0892FE3C:
    ctx.set_gpr(29, ctx.gpr[29] + static_cast<std::uint32_t>(-48));
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(44), ctx.gpr[31]);
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(40), ctx.gpr[20]);
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(36), ctx.gpr[19]);
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(32), ctx.gpr[18]);
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(28), ctx.gpr[17]);
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(24), ctx.gpr[16]);
    { const bool branch_taken = ctx.gpr[4] == 0u;
    // nop
      if (branch_taken) {
          goto L_0892FE78;
      }
      goto L_0892FE60;
    }
L_0892FE60:
    ctx.set_gpr(4, 2228u << 16u);
    ctx.set_gpr(4, ctx.gpr[4] + static_cast<std::uint32_t>(-7712));
    ctx.set_gpr(31, 0x0892FE70u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0081_entry, 81u, 869u, 0x0894BF18u>(ctx, &aot_mem) && ctx.pc == 0x0892FE70u) goto L_0892FE70;
    return;
L_0892FE70:
    ctx.set_gpr(31, 0x0892FE78u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0082_entry, 82u, 28u, 0x0894C1E0u>(ctx, &aot_mem) && ctx.pc == 0x0892FE78u) goto L_0892FE78;
    return;
L_0892FE78:
    ctx.set_gpr(2, 2245u << 16u);
    ctx.set_gpr(19, rt.memory().aot_load32(ctx.gpr[2] + static_cast<std::uint32_t>(30856)));
    ctx.set_gpr(2, 2245u << 16u);
    ctx.set_gpr(20, rt.memory().aot_load32(ctx.gpr[2] + static_cast<std::uint32_t>(30852)));
    ctx.set_gpr(31, 0x0892FE90u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0093_entry, 93u, 698u, 0x0897B4C0u>(ctx, &aot_mem) && ctx.pc == 0x0892FE90u) goto L_0892FE90;
    return;
L_0892FE90:
    ctx.set_gpr(18, ctx.gpr[2] + 0u);
    ctx.set_gpr(31, 0x0892FE9Cu);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0093_entry, 93u, 699u, 0x0897B4D0u>(ctx, &aot_mem) && ctx.pc == 0x0892FE9Cu) goto L_0892FE9C;
    return;
L_0892FE9C:
    ctx.set_gpr(17, ctx.gpr[2] + 0u);
    ctx.set_gpr(31, 0x0892FEA8u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0093_entry, 93u, 700u, 0x0897B4E0u>(ctx, &aot_mem) && ctx.pc == 0x0892FEA8u) goto L_0892FEA8;
    return;
L_0892FEA8:
    ctx.set_gpr(16, ctx.gpr[2] + 0u);
    ctx.set_gpr(31, 0x0892FEB4u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0093_entry, 93u, 699u, 0x0897B4D0u>(ctx, &aot_mem) && ctx.pc == 0x0892FEB4u) goto L_0892FEB4;
    return;
L_0892FEB4:
    ctx.set_gpr(10, ctx.gpr[2] - ctx.gpr[19]);
    ctx.set_gpr(2, 2245u << 16u);
    ctx.set_gpr(2, rt.memory().aot_load32(ctx.gpr[2] + static_cast<std::uint32_t>(30872)));
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(0), ctx.gpr[2]);
    ctx.set_gpr(4, 2228u << 16u);
    ctx.set_gpr(4, ctx.gpr[4] + static_cast<std::uint32_t>(-7632));
    ctx.set_gpr(5, ctx.gpr[18] + 0u);
    ctx.set_gpr(6, ctx.gpr[17] + 0u);
    ctx.set_gpr(7, ctx.gpr[16] + 0u);
    ctx.set_gpr(8, ctx.gpr[20] + 0u);
    ctx.set_gpr(9, ctx.gpr[19] + 0u);
    ctx.set_gpr(2, 2245u << 16u);
    ctx.set_gpr(11, rt.memory().aot_load32(ctx.gpr[2] + static_cast<std::uint32_t>(30868)));
    ctx.set_gpr(31, 0x0892FEF0u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0081_entry, 81u, 869u, 0x0894BF18u>(ctx, &aot_mem) && ctx.pc == 0x0892FEF0u) goto L_0892FEF0;
    return;
L_0892FEF0:
    ctx.set_gpr(31, 0x0892FEF8u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0082_entry, 82u, 28u, 0x0894C1E0u>(ctx, &aot_mem) && ctx.pc == 0x0892FEF8u) goto L_0892FEF8;
    return;
L_0892FEF8:
    ctx.set_gpr(31, rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(44)));
    ctx.set_gpr(20, rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(40)));
    ctx.set_gpr(19, rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(36)));
    ctx.set_gpr(18, rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(32)));
    ctx.set_gpr(17, rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(28)));
    ctx.set_gpr(16, rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(24)));
    ctx.set_gpr(29, ctx.gpr[29] + static_cast<std::uint32_t>(48));
    jump_target = ctx.gpr[31];
    // nop
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_0892FF1C:
    ctx.set_gpr(29, ctx.gpr[29] + static_cast<std::uint32_t>(-96));
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(28), ctx.gpr[31]);
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(24), ctx.gpr[20]);
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(20), ctx.gpr[19]);
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(16), ctx.gpr[18]);
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(12), ctx.gpr[17]);
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(8), ctx.gpr[16]);
    ctx.set_gpr(5, ctx.gpr[4] + 0u);
    ctx.set_gpr(3, 2245u << 16u);
    ctx.set_gpr(3, rt.memory().aot_load32(ctx.gpr[3] + static_cast<std::uint32_t>(30816)));
    ctx.set_gpr(17, rt.memory().aot_load32(ctx.gpr[3] + static_cast<std::uint32_t>(4)));
    ctx.set_gpr(19, rt.memory().aot_load32(ctx.gpr[3] + static_cast<std::uint32_t>(0)));
    { const bool branch_taken = ctx.gpr[5] != 0u;
    // nop
      if (branch_taken) {
          goto L_0892FF70;
      }
      goto L_0892FF54;
    }
L_0892FF54:
    ctx.set_gpr(4, ctx.gpr[29] + static_cast<std::uint32_t>(32));
    ctx.set_gpr(5, 2228u << 16u);
    ctx.set_gpr(5, ctx.gpr[5] + static_cast<std::uint32_t>(-7600));
    ctx.set_gpr(6, 0u + static_cast<std::uint32_t>(63));
    ctx.set_gpr(31, 0x0892FF6Cu);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0004_entry, 4u, 574u, 0x08816B28u>(ctx, &aot_mem) && ctx.pc == 0x0892FF6Cu) goto L_0892FF6C;
    return;
L_0892FF6C:
    ctx.set_gpr(5, ctx.gpr[29] + static_cast<std::uint32_t>(32));
    goto L_0892FF70;
L_0892FF70:
    { const bool branch_taken = ctx.gpr[5] == 0u;
    // nop
      if (branch_taken) {
          goto L_0892FF9C;
      }
      goto L_0892FF78;
    }
L_0892FF78:
    ctx.set_gpr(3, static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int8_t>(rt.memory().aot_load8(ctx.gpr[5] + static_cast<std::uint32_t>(0))))));
    { const bool branch_taken = ctx.gpr[3] == 0u;
    // nop
      if (branch_taken) {
          goto L_0892FF9C;
      }
      goto L_0892FF84;
    }
L_0892FF84:
    ctx.set_gpr(4, 2228u << 16u);
    ctx.set_gpr(4, ctx.gpr[4] + static_cast<std::uint32_t>(-15032));
    ctx.set_gpr(31, 0x0892FF94u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0081_entry, 81u, 869u, 0x0894BF18u>(ctx, &aot_mem) && ctx.pc == 0x0892FF94u) goto L_0892FF94;
    return;
L_0892FF94:
    ctx.set_gpr(31, 0x0892FF9Cu);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0082_entry, 82u, 28u, 0x0894C1E0u>(ctx, &aot_mem) && ctx.pc == 0x0892FF9Cu) goto L_0892FF9C;
    return;
L_0892FF9C:
    ctx.set_gpr(20, 0u + 0u);
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          (void)rt.invoke_chained_direct<&recomp_unit_0075_entry, 75u, 3u, 0x08930018u>(ctx, &aot_mem); return;
      }
      goto L_0892FFA8;
    }
L_0892FFA8:
    ctx.set_gpr(18, rt.memory().aot_load32(ctx.gpr[19] + static_cast<std::uint32_t>(0)));
    { const bool branch_taken = ctx.gpr[18] == 0u;
    // nop
      if (branch_taken) {
          (void)rt.invoke_chained_direct<&recomp_unit_0075_entry, 75u, 2u, 0x08930010u>(ctx, &aot_mem); return;
      }
      goto L_0892FFB4;
    }
L_0892FFB4:
    ctx.set_gpr(4, ctx.gpr[18] + 0u);
    ctx.set_gpr(25, rt.memory().aot_load32(ctx.gpr[18] + static_cast<std::uint32_t>(0)));
    ctx.set_gpr(25, rt.memory().aot_load32(ctx.gpr[25] + static_cast<std::uint32_t>(464)));
    jump_target = ctx.gpr[25];
    ctx.set_gpr(31, 0x0892FFC8u);
    // nop
    ctx.pc = jump_target;
    if (rt.invoke_chained_call(ctx, &aot_mem) && ctx.pc == 0x0892FFC8u) goto L_0892FFC8;
    return;
L_0892FFC8:
    ctx.set_gpr(16, ctx.gpr[2] + 0u);
    ctx.set_gpr(4, ctx.gpr[18] + 0u);
    ctx.set_gpr(31, 0x0892FFD8u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0081_entry, 81u, 30u, 0x089482C8u>(ctx, &aot_mem) && ctx.pc == 0x0892FFD8u) goto L_0892FFD8;
    return;
L_0892FFD8:
    ctx.set_gpr(4, 2228u << 16u);
    ctx.set_gpr(4, ctx.gpr[4] + static_cast<std::uint32_t>(-7584));
    ctx.set_gpr(5, ctx.gpr[16] + 0u);
    ctx.set_gpr(6, ctx.gpr[2] + 0u);
    ctx.set_gpr(31, 0x0892FFF0u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0081_entry, 81u, 869u, 0x0894BF18u>(ctx, &aot_mem) && ctx.pc == 0x0892FFF0u) goto L_0892FFF0;
    return;
L_0892FFF0:
    ctx.set_gpr(31, 0x0892FFF8u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0082_entry, 82u, 28u, 0x0894C1E0u>(ctx, &aot_mem) && ctx.pc == 0x0892FFF8u) goto L_0892FFF8;
    return;
L_0892FFF8:
    ctx.set_gpr(4, ctx.gpr[18] + 0u);
    ctx.set_gpr(5, 0u + 0u);
    ctx.pc = 0x08930000u; return;
}

void recomp_unit_0074(Runtime &rt, AllegrexContext &ctx) {
    auto aot_mem = rt.memory().aot_fast_view();
    recomp_unit_0074_entry(rt, ctx, 0u, aot_mem);
}

void register_generated_unit_74(Runtime &runtime) {
    runtime.register_generated_unit(74u, 0x0892C000u, 16384u, &recomp_unit_0074, &recomp_unit_0074_entry);
    runtime.register_function(0x0892C000u, &recomp_unit_0074, "recomp_unit_0074");
    runtime.register_function(0x0892C030u, &recomp_unit_0074, "recomp_unit_0074");
    runtime.register_function(0x0892C060u, &recomp_unit_0074, "recomp_unit_0074");
    runtime.register_function(0x0892C094u, &recomp_unit_0074, "recomp_unit_0074");
    runtime.register_function(0x0892C0A0u, &recomp_unit_0074, "recomp_unit_0074");
    runtime.register_function(0x0892C0ACu, &recomp_unit_0074, "recomp_unit_0074");
    runtime.register_function(0x0892C0B4u, &recomp_unit_0074, "recomp_unit_0074");
    runtime.register_function(0x0892C0BCu, &recomp_unit_0074, "recomp_unit_0074");
    runtime.register_function(0x0892C0C8u, &recomp_unit_0074, "recomp_unit_0074");
    runtime.register_function(0x0892C0DCu, &recomp_unit_0074, "recomp_unit_0074");
    runtime.register_function(0x0892C0F4u, &recomp_unit_0074, "recomp_unit_0074");
    runtime.register_function(0x0892C100u, &recomp_unit_0074, "recomp_unit_0074");
    runtime.register_function(0x0892C11Cu, &recomp_unit_0074, "recomp_unit_0074");
    runtime.register_function(0x0892C124u, &recomp_unit_0074, "recomp_unit_0074");
    runtime.register_function(0x0892C130u, &recomp_unit_0074, "recomp_unit_0074");
    runtime.register_function(0x0892C138u, &recomp_unit_0074, "recomp_unit_0074");
    runtime.register_function(0x0892C144u, &recomp_unit_0074, "recomp_unit_0074");
    runtime.register_function(0x0892C150u, &recomp_unit_0074, "recomp_unit_0074");
    runtime.register_function(0x0892C16Cu, &recomp_unit_0074, "recomp_unit_0074");
    runtime.register_function(0x0892C180u, &recomp_unit_0074, "recomp_unit_0074");
    runtime.register_function(0x0892C188u, &recomp_unit_0074, "recomp_unit_0074");
    runtime.register_function(0x0892C190u, &recomp_unit_0074, "recomp_unit_0074");
    runtime.register_function(0x0892C194u, &recomp_unit_0074, "recomp_unit_0074");
    runtime.register_function(0x0892C1A0u, &recomp_unit_0074, "recomp_unit_0074");
    runtime.register_function(0x0892C1ACu, &recomp_unit_0074, "recomp_unit_0074");
    runtime.register_function(0x0892C1B8u, &recomp_unit_0074, "recomp_unit_0074");
    runtime.register_function(0x0892C1C4u, &recomp_unit_0074, "recomp_unit_0074");
    runtime.register_function(0x0892C1D4u, &recomp_unit_0074, "recomp_unit_0074");
    runtime.register_function(0x0892C1E4u, &recomp_unit_0074, "recomp_unit_0074");
    runtime.register_function(0x0892C1F0u, &recomp_unit_0074, "recomp_unit_0074");
    runtime.register_function(0x0892C204u, &recomp_unit_0074, "recomp_unit_0074");
    runtime.register_function(0x0892C20Cu, &recomp_unit_0074, "recomp_unit_0074");
    runtime.register_function(0x0892C218u, &recomp_unit_0074, "recomp_unit_0074");
    runtime.register_function(0x0892C220u, &recomp_unit_0074, "recomp_unit_0074");
    runtime.register_function(0x0892C22Cu, &recomp_unit_0074, "recomp_unit_0074");
    runtime.register_function(0x0892C238u, &recomp_unit_0074, "recomp_unit_0074");
    runtime.register_function(0x0892C254u, &recomp_unit_0074, "recomp_unit_0074");
    runtime.register_function(0x0892C278u, &recomp_unit_0074, "recomp_unit_0074");
    runtime.register_function(0x0892C288u, &recomp_unit_0074, "recomp_unit_0074");
    runtime.register_function(0x0892C298u, &recomp_unit_0074, "recomp_unit_0074");
    runtime.register_function(0x0892C2A8u, &recomp_unit_0074, "recomp_unit_0074");
    runtime.register_function(0x0892C2B8u, &recomp_unit_0074, "recomp_unit_0074");
    runtime.register_function(0x0892C2C0u, &recomp_unit_0074, "recomp_unit_0074");
    runtime.register_function(0x0892C2C8u, &recomp_unit_0074, "recomp_unit_0074");
    runtime.register_function(0x0892C2D4u, &recomp_unit_0074, "recomp_unit_0074");
    runtime.register_function(0x0892C2DCu, &recomp_unit_0074, "recomp_unit_0074");
    runtime.register_function(0x0892C2E8u, &recomp_unit_0074, "recomp_unit_0074");
    runtime.register_function(0x0892C2ECu, &recomp_unit_0074, "recomp_unit_0074");
    runtime.register_function(0x0892C2F8u, &recomp_unit_0074, "recomp_unit_0074");
    runtime.register_function(0x0892C308u, &recomp_unit_0074, "recomp_unit_0074");
    runtime.register_function(0x0892C314u, &recomp_unit_0074, "recomp_unit_0074");
    runtime.register_function(0x0892C31Cu, &recomp_unit_0074, "recomp_unit_0074");
    runtime.register_function(0x0892C328u, &recomp_unit_0074, "recomp_unit_0074");
    runtime.register_function(0x0892C330u, &recomp_unit_0074, "recomp_unit_0074");
    runtime.register_function(0x0892C334u, &recomp_unit_0074, "recomp_unit_0074");
    runtime.register_function(0x0892C358u, &recomp_unit_0074, "recomp_unit_0074");
    runtime.register_function(0x0892C368u, &recomp_unit_0074, "recomp_unit_0074");
    runtime.register_function(0x0892C3C4u, &recomp_unit_0074, "recomp_unit_0074");
    runtime.register_function(0x0892C3CCu, &recomp_unit_0074, "recomp_unit_0074");
    runtime.register_function(0x0892C3E0u, &recomp_unit_0074, "recomp_unit_0074");
    runtime.register_function(0x0892C3E4u, &recomp_unit_0074, "recomp_unit_0074");
    runtime.register_function(0x0892C404u, &recomp_unit_0074, "recomp_unit_0074");
    runtime.register_function(0x0892C414u, &recomp_unit_0074, "recomp_unit_0074");
    runtime.register_function(0x0892C428u, &recomp_unit_0074, "recomp_unit_0074");
    runtime.register_function(0x0892C430u, &recomp_unit_0074, "recomp_unit_0074");
    runtime.register_function(0x0892C434u, &recomp_unit_0074, "recomp_unit_0074");
    runtime.register_function(0x0892C448u, &recomp_unit_0074, "recomp_unit_0074");
    runtime.register_function(0x0892C460u, &recomp_unit_0074, "recomp_unit_0074");
    runtime.register_function(0x0892C470u, &recomp_unit_0074, "recomp_unit_0074");
    runtime.register_function(0x0892C47Cu, &recomp_unit_0074, "recomp_unit_0074");
    runtime.register_function(0x0892C490u, &recomp_unit_0074, "recomp_unit_0074");
    runtime.register_function(0x0892C4A4u, &recomp_unit_0074, "recomp_unit_0074");
    runtime.register_function(0x0892C4A8u, &recomp_unit_0074, "recomp_unit_0074");
    runtime.register_function(0x0892C4ECu, &recomp_unit_0074, "recomp_unit_0074");
    runtime.register_function(0x0892C4F4u, &recomp_unit_0074, "recomp_unit_0074");
    runtime.register_function(0x0892C50Cu, &recomp_unit_0074, "recomp_unit_0074");
    runtime.register_function(0x0892C51Cu, &recomp_unit_0074, "recomp_unit_0074");
    runtime.register_function(0x0892C55Cu, &recomp_unit_0074, "recomp_unit_0074");
    runtime.register_function(0x0892C568u, &recomp_unit_0074, "recomp_unit_0074");
    runtime.register_function(0x0892C578u, &recomp_unit_0074, "recomp_unit_0074");
    runtime.register_function(0x0892C590u, &recomp_unit_0074, "recomp_unit_0074");
    runtime.register_function(0x0892C5A0u, &recomp_unit_0074, "recomp_unit_0074");
    runtime.register_function(0x0892C5ACu, &recomp_unit_0074, "recomp_unit_0074");
    runtime.register_function(0x0892C5D4u, &recomp_unit_0074, "recomp_unit_0074");
    runtime.register_function(0x0892C5E8u, &recomp_unit_0074, "recomp_unit_0074");
    runtime.register_function(0x0892C5F0u, &recomp_unit_0074, "recomp_unit_0074");
    runtime.register_function(0x0892C61Cu, &recomp_unit_0074, "recomp_unit_0074");
    runtime.register_function(0x0892C628u, &recomp_unit_0074, "recomp_unit_0074");
    runtime.register_function(0x0892C634u, &recomp_unit_0074, "recomp_unit_0074");
    runtime.register_function(0x0892C640u, &recomp_unit_0074, "recomp_unit_0074");
    runtime.register_function(0x0892C66Cu, &recomp_unit_0074, "recomp_unit_0074");
    runtime.register_function(0x0892C670u, &recomp_unit_0074, "recomp_unit_0074");
    runtime.register_function(0x0892C67Cu, &recomp_unit_0074, "recomp_unit_0074");
    runtime.register_function(0x0892C684u, &recomp_unit_0074, "recomp_unit_0074");
    runtime.register_function(0x0892C688u, &recomp_unit_0074, "recomp_unit_0074");
    runtime.register_function(0x0892C6B8u, &recomp_unit_0074, "recomp_unit_0074");
    runtime.register_function(0x0892C6C4u, &recomp_unit_0074, "recomp_unit_0074");
    runtime.register_function(0x0892C6D0u, &recomp_unit_0074, "recomp_unit_0074");
    runtime.register_function(0x0892C6DCu, &recomp_unit_0074, "recomp_unit_0074");
    runtime.register_function(0x0892C714u, &recomp_unit_0074, "recomp_unit_0074");
    runtime.register_function(0x0892C71Cu, &recomp_unit_0074, "recomp_unit_0074");
    runtime.register_function(0x0892C73Cu, &recomp_unit_0074, "recomp_unit_0074");
    runtime.register_function(0x0892C760u, &recomp_unit_0074, "recomp_unit_0074");
    runtime.register_function(0x0892C764u, &recomp_unit_0074, "recomp_unit_0074");
    runtime.register_function(0x0892C770u, &recomp_unit_0074, "recomp_unit_0074");
    runtime.register_function(0x0892C794u, &recomp_unit_0074, "recomp_unit_0074");
    runtime.register_function(0x0892C7B4u, &recomp_unit_0074, "recomp_unit_0074");
    runtime.register_function(0x0892C7BCu, &recomp_unit_0074, "recomp_unit_0074");
    runtime.register_function(0x0892C7C8u, &recomp_unit_0074, "recomp_unit_0074");
    runtime.register_function(0x0892C7DCu, &recomp_unit_0074, "recomp_unit_0074");
    runtime.register_function(0x0892C7ECu, &recomp_unit_0074, "recomp_unit_0074");
    runtime.register_function(0x0892C7F8u, &recomp_unit_0074, "recomp_unit_0074");
    runtime.register_function(0x0892C804u, &recomp_unit_0074, "recomp_unit_0074");
    runtime.register_function(0x0892C81Cu, &recomp_unit_0074, "recomp_unit_0074");
    runtime.register_function(0x0892C848u, &recomp_unit_0074, "recomp_unit_0074");
    runtime.register_function(0x0892C850u, &recomp_unit_0074, "recomp_unit_0074");
    runtime.register_function(0x0892C864u, &recomp_unit_0074, "recomp_unit_0074");
    runtime.register_function(0x0892C874u, &recomp_unit_0074, "recomp_unit_0074");
    runtime.register_function(0x0892C89Cu, &recomp_unit_0074, "recomp_unit_0074");
    runtime.register_function(0x0892C8A4u, &recomp_unit_0074, "recomp_unit_0074");
    runtime.register_function(0x0892C8B4u, &recomp_unit_0074, "recomp_unit_0074");
    runtime.register_function(0x0892C8C0u, &recomp_unit_0074, "recomp_unit_0074");
    runtime.register_function(0x0892C8D4u, &recomp_unit_0074, "recomp_unit_0074");
    runtime.register_function(0x0892C8F0u, &recomp_unit_0074, "recomp_unit_0074");
    runtime.register_function(0x0892C904u, &recomp_unit_0074, "recomp_unit_0074");
    runtime.register_function(0x0892C918u, &recomp_unit_0074, "recomp_unit_0074");
    runtime.register_function(0x0892C928u, &recomp_unit_0074, "recomp_unit_0074");
    runtime.register_function(0x0892C938u, &recomp_unit_0074, "recomp_unit_0074");
    runtime.register_function(0x0892C944u, &recomp_unit_0074, "recomp_unit_0074");
    runtime.register_function(0x0892C94Cu, &recomp_unit_0074, "recomp_unit_0074");
    runtime.register_function(0x0892C968u, &recomp_unit_0074, "recomp_unit_0074");
    runtime.register_function(0x0892C990u, &recomp_unit_0074, "recomp_unit_0074");
    runtime.register_function(0x0892C99Cu, &recomp_unit_0074, "recomp_unit_0074");
    runtime.register_function(0x0892C9ACu, &recomp_unit_0074, "recomp_unit_0074");
    runtime.register_function(0x0892C9C0u, &recomp_unit_0074, "recomp_unit_0074");
    runtime.register_function(0x0892C9DCu, &recomp_unit_0074, "recomp_unit_0074");
    runtime.register_function(0x0892C9E4u, &recomp_unit_0074, "recomp_unit_0074");
    runtime.register_function(0x0892C9F4u, &recomp_unit_0074, "recomp_unit_0074");
    runtime.register_function(0x0892CA04u, &recomp_unit_0074, "recomp_unit_0074");
    runtime.register_function(0x0892CA10u, &recomp_unit_0074, "recomp_unit_0074");
    runtime.register_function(0x0892CA24u, &recomp_unit_0074, "recomp_unit_0074");
    runtime.register_function(0x0892CA2Cu, &recomp_unit_0074, "recomp_unit_0074");
    runtime.register_function(0x0892CA34u, &recomp_unit_0074, "recomp_unit_0074");
    runtime.register_function(0x0892CA3Cu, &recomp_unit_0074, "recomp_unit_0074");
    runtime.register_function(0x0892CA48u, &recomp_unit_0074, "recomp_unit_0074");
    runtime.register_function(0x0892CA58u, &recomp_unit_0074, "recomp_unit_0074");
    runtime.register_function(0x0892CA64u, &recomp_unit_0074, "recomp_unit_0074");
    runtime.register_function(0x0892CA6Cu, &recomp_unit_0074, "recomp_unit_0074");
    runtime.register_function(0x0892CA78u, &recomp_unit_0074, "recomp_unit_0074");
    runtime.register_function(0x0892CA80u, &recomp_unit_0074, "recomp_unit_0074");
    runtime.register_function(0x0892CA94u, &recomp_unit_0074, "recomp_unit_0074");
    runtime.register_function(0x0892CAA8u, &recomp_unit_0074, "recomp_unit_0074");
    runtime.register_function(0x0892CAB8u, &recomp_unit_0074, "recomp_unit_0074");
    runtime.register_function(0x0892CACCu, &recomp_unit_0074, "recomp_unit_0074");
    runtime.register_function(0x0892CAE4u, &recomp_unit_0074, "recomp_unit_0074");
    runtime.register_function(0x0892CAE8u, &recomp_unit_0074, "recomp_unit_0074");
    runtime.register_function(0x0892CAF0u, &recomp_unit_0074, "recomp_unit_0074");
    runtime.register_function(0x0892CAFCu, &recomp_unit_0074, "recomp_unit_0074");
    runtime.register_function(0x0892CB0Cu, &recomp_unit_0074, "recomp_unit_0074");
    runtime.register_function(0x0892CB24u, &recomp_unit_0074, "recomp_unit_0074");
    runtime.register_function(0x0892CB28u, &recomp_unit_0074, "recomp_unit_0074");
    runtime.register_function(0x0892CB30u, &recomp_unit_0074, "recomp_unit_0074");
    runtime.register_function(0x0892CB48u, &recomp_unit_0074, "recomp_unit_0074");
    runtime.register_function(0x0892CB54u, &recomp_unit_0074, "recomp_unit_0074");
    runtime.register_function(0x0892CB58u, &recomp_unit_0074, "recomp_unit_0074");
    runtime.register_function(0x0892CB70u, &recomp_unit_0074, "recomp_unit_0074");
    runtime.register_function(0x0892CBA8u, &recomp_unit_0074, "recomp_unit_0074");
    runtime.register_function(0x0892CBB8u, &recomp_unit_0074, "recomp_unit_0074");
    runtime.register_function(0x0892CBCCu, &recomp_unit_0074, "recomp_unit_0074");
    runtime.register_function(0x0892CBE8u, &recomp_unit_0074, "recomp_unit_0074");
    runtime.register_function(0x0892CBF0u, &recomp_unit_0074, "recomp_unit_0074");
    runtime.register_function(0x0892CC00u, &recomp_unit_0074, "recomp_unit_0074");
    runtime.register_function(0x0892CC10u, &recomp_unit_0074, "recomp_unit_0074");
    runtime.register_function(0x0892CC18u, &recomp_unit_0074, "recomp_unit_0074");
    runtime.register_function(0x0892CC38u, &recomp_unit_0074, "recomp_unit_0074");
    runtime.register_function(0x0892CC48u, &recomp_unit_0074, "recomp_unit_0074");
    runtime.register_function(0x0892CC64u, &recomp_unit_0074, "recomp_unit_0074");
    runtime.register_function(0x0892CC84u, &recomp_unit_0074, "recomp_unit_0074");
    runtime.register_function(0x0892CC94u, &recomp_unit_0074, "recomp_unit_0074");
    runtime.register_function(0x0892CCA8u, &recomp_unit_0074, "recomp_unit_0074");
    runtime.register_function(0x0892CCC4u, &recomp_unit_0074, "recomp_unit_0074");
    runtime.register_function(0x0892CCD0u, &recomp_unit_0074, "recomp_unit_0074");
    runtime.register_function(0x0892CCE0u, &recomp_unit_0074, "recomp_unit_0074");
    runtime.register_function(0x0892CCF0u, &recomp_unit_0074, "recomp_unit_0074");
    runtime.register_function(0x0892CCF8u, &recomp_unit_0074, "recomp_unit_0074");
    runtime.register_function(0x0892CD0Cu, &recomp_unit_0074, "recomp_unit_0074");
    runtime.register_function(0x0892CD1Cu, &recomp_unit_0074, "recomp_unit_0074");
    runtime.register_function(0x0892CD2Cu, &recomp_unit_0074, "recomp_unit_0074");
    runtime.register_function(0x0892CD40u, &recomp_unit_0074, "recomp_unit_0074");
    runtime.register_function(0x0892CD50u, &recomp_unit_0074, "recomp_unit_0074");
    runtime.register_function(0x0892CD60u, &recomp_unit_0074, "recomp_unit_0074");
    runtime.register_function(0x0892CD68u, &recomp_unit_0074, "recomp_unit_0074");
    runtime.register_function(0x0892CD74u, &recomp_unit_0074, "recomp_unit_0074");
    runtime.register_function(0x0892CD80u, &recomp_unit_0074, "recomp_unit_0074");
    runtime.register_function(0x0892CD9Cu, &recomp_unit_0074, "recomp_unit_0074");
    runtime.register_function(0x0892CDA4u, &recomp_unit_0074, "recomp_unit_0074");
    runtime.register_function(0x0892CDB4u, &recomp_unit_0074, "recomp_unit_0074");
    runtime.register_function(0x0892CDC8u, &recomp_unit_0074, "recomp_unit_0074");
    runtime.register_function(0x0892CDE0u, &recomp_unit_0074, "recomp_unit_0074");
    runtime.register_function(0x0892CE04u, &recomp_unit_0074, "recomp_unit_0074");
    runtime.register_function(0x0892CE0Cu, &recomp_unit_0074, "recomp_unit_0074");
    runtime.register_function(0x0892CE14u, &recomp_unit_0074, "recomp_unit_0074");
    runtime.register_function(0x0892CE24u, &recomp_unit_0074, "recomp_unit_0074");
    runtime.register_function(0x0892CE2Cu, &recomp_unit_0074, "recomp_unit_0074");
    runtime.register_function(0x0892CE48u, &recomp_unit_0074, "recomp_unit_0074");
    runtime.register_function(0x0892CE54u, &recomp_unit_0074, "recomp_unit_0074");
    runtime.register_function(0x0892CE60u, &recomp_unit_0074, "recomp_unit_0074");
    runtime.register_function(0x0892CE64u, &recomp_unit_0074, "recomp_unit_0074");
    runtime.register_function(0x0892CE70u, &recomp_unit_0074, "recomp_unit_0074");
    runtime.register_function(0x0892CE8Cu, &recomp_unit_0074, "recomp_unit_0074");
    runtime.register_function(0x0892CE98u, &recomp_unit_0074, "recomp_unit_0074");
    runtime.register_function(0x0892CEA4u, &recomp_unit_0074, "recomp_unit_0074");
    runtime.register_function(0x0892CEC0u, &recomp_unit_0074, "recomp_unit_0074");
    runtime.register_function(0x0892CECCu, &recomp_unit_0074, "recomp_unit_0074");
    runtime.register_function(0x0892CED4u, &recomp_unit_0074, "recomp_unit_0074");
    runtime.register_function(0x0892CEE0u, &recomp_unit_0074, "recomp_unit_0074");
    runtime.register_function(0x0892CF08u, &recomp_unit_0074, "recomp_unit_0074");
    runtime.register_function(0x0892CF1Cu, &recomp_unit_0074, "recomp_unit_0074");
    runtime.register_function(0x0892CF28u, &recomp_unit_0074, "recomp_unit_0074");
    runtime.register_function(0x0892CF48u, &recomp_unit_0074, "recomp_unit_0074");
    runtime.register_function(0x0892CF58u, &recomp_unit_0074, "recomp_unit_0074");
    runtime.register_function(0x0892CF60u, &recomp_unit_0074, "recomp_unit_0074");
    runtime.register_function(0x0892CF78u, &recomp_unit_0074, "recomp_unit_0074");
    runtime.register_function(0x0892CF88u, &recomp_unit_0074, "recomp_unit_0074");
    runtime.register_function(0x0892CF9Cu, &recomp_unit_0074, "recomp_unit_0074");
    runtime.register_function(0x0892CFA4u, &recomp_unit_0074, "recomp_unit_0074");
    runtime.register_function(0x0892CFBCu, &recomp_unit_0074, "recomp_unit_0074");
    runtime.register_function(0x0892CFCCu, &recomp_unit_0074, "recomp_unit_0074");
    runtime.register_function(0x0892CFD8u, &recomp_unit_0074, "recomp_unit_0074");
    runtime.register_function(0x0892CFE0u, &recomp_unit_0074, "recomp_unit_0074");
    runtime.register_function(0x0892CFE8u, &recomp_unit_0074, "recomp_unit_0074");
    runtime.register_function(0x0892CFECu, &recomp_unit_0074, "recomp_unit_0074");
    runtime.register_function(0x0892CFF0u, &recomp_unit_0074, "recomp_unit_0074");
    runtime.register_function(0x0892D008u, &recomp_unit_0074, "recomp_unit_0074");
    runtime.register_function(0x0892D020u, &recomp_unit_0074, "recomp_unit_0074");
    runtime.register_function(0x0892D030u, &recomp_unit_0074, "recomp_unit_0074");
    runtime.register_function(0x0892D058u, &recomp_unit_0074, "recomp_unit_0074");
    runtime.register_function(0x0892D064u, &recomp_unit_0074, "recomp_unit_0074");
    runtime.register_function(0x0892D084u, &recomp_unit_0074, "recomp_unit_0074");
    runtime.register_function(0x0892D088u, &recomp_unit_0074, "recomp_unit_0074");
    runtime.register_function(0x0892D090u, &recomp_unit_0074, "recomp_unit_0074");
    runtime.register_function(0x0892D09Cu, &recomp_unit_0074, "recomp_unit_0074");
    runtime.register_function(0x0892D0B8u, &recomp_unit_0074, "recomp_unit_0074");
    runtime.register_function(0x0892D0CCu, &recomp_unit_0074, "recomp_unit_0074");
    runtime.register_function(0x0892D0E8u, &recomp_unit_0074, "recomp_unit_0074");
    runtime.register_function(0x0892D0F4u, &recomp_unit_0074, "recomp_unit_0074");
    runtime.register_function(0x0892D120u, &recomp_unit_0074, "recomp_unit_0074");
    runtime.register_function(0x0892D14Cu, &recomp_unit_0074, "recomp_unit_0074");
    runtime.register_function(0x0892D158u, &recomp_unit_0074, "recomp_unit_0074");
    runtime.register_function(0x0892D164u, &recomp_unit_0074, "recomp_unit_0074");
    runtime.register_function(0x0892D170u, &recomp_unit_0074, "recomp_unit_0074");
    runtime.register_function(0x0892D184u, &recomp_unit_0074, "recomp_unit_0074");
    runtime.register_function(0x0892D190u, &recomp_unit_0074, "recomp_unit_0074");
    runtime.register_function(0x0892D1A4u, &recomp_unit_0074, "recomp_unit_0074");
    runtime.register_function(0x0892D1ACu, &recomp_unit_0074, "recomp_unit_0074");
    runtime.register_function(0x0892D1B8u, &recomp_unit_0074, "recomp_unit_0074");
    runtime.register_function(0x0892D1C4u, &recomp_unit_0074, "recomp_unit_0074");
    runtime.register_function(0x0892D1D0u, &recomp_unit_0074, "recomp_unit_0074");
    runtime.register_function(0x0892D1D8u, &recomp_unit_0074, "recomp_unit_0074");
    runtime.register_function(0x0892D1E4u, &recomp_unit_0074, "recomp_unit_0074");
    runtime.register_function(0x0892D1F8u, &recomp_unit_0074, "recomp_unit_0074");
    runtime.register_function(0x0892D204u, &recomp_unit_0074, "recomp_unit_0074");
    runtime.register_function(0x0892D21Cu, &recomp_unit_0074, "recomp_unit_0074");
    runtime.register_function(0x0892D228u, &recomp_unit_0074, "recomp_unit_0074");
    runtime.register_function(0x0892D25Cu, &recomp_unit_0074, "recomp_unit_0074");
    runtime.register_function(0x0892D268u, &recomp_unit_0074, "recomp_unit_0074");
    runtime.register_function(0x0892D274u, &recomp_unit_0074, "recomp_unit_0074");
    runtime.register_function(0x0892D27Cu, &recomp_unit_0074, "recomp_unit_0074");
    runtime.register_function(0x0892D288u, &recomp_unit_0074, "recomp_unit_0074");
    runtime.register_function(0x0892D294u, &recomp_unit_0074, "recomp_unit_0074");
    runtime.register_function(0x0892D2A0u, &recomp_unit_0074, "recomp_unit_0074");
    runtime.register_function(0x0892D2A8u, &recomp_unit_0074, "recomp_unit_0074");
    runtime.register_function(0x0892D2B0u, &recomp_unit_0074, "recomp_unit_0074");
    runtime.register_function(0x0892D2BCu, &recomp_unit_0074, "recomp_unit_0074");
    runtime.register_function(0x0892D2D0u, &recomp_unit_0074, "recomp_unit_0074");
    runtime.register_function(0x0892D2DCu, &recomp_unit_0074, "recomp_unit_0074");
    runtime.register_function(0x0892D2E8u, &recomp_unit_0074, "recomp_unit_0074");
    runtime.register_function(0x0892D2F4u, &recomp_unit_0074, "recomp_unit_0074");
    runtime.register_function(0x0892D300u, &recomp_unit_0074, "recomp_unit_0074");
    runtime.register_function(0x0892D308u, &recomp_unit_0074, "recomp_unit_0074");
    runtime.register_function(0x0892D314u, &recomp_unit_0074, "recomp_unit_0074");
    runtime.register_function(0x0892D320u, &recomp_unit_0074, "recomp_unit_0074");
    runtime.register_function(0x0892D338u, &recomp_unit_0074, "recomp_unit_0074");
    runtime.register_function(0x0892D364u, &recomp_unit_0074, "recomp_unit_0074");
    runtime.register_function(0x0892D37Cu, &recomp_unit_0074, "recomp_unit_0074");
    runtime.register_function(0x0892D3A8u, &recomp_unit_0074, "recomp_unit_0074");
    runtime.register_function(0x0892D3C0u, &recomp_unit_0074, "recomp_unit_0074");
    runtime.register_function(0x0892D3ECu, &recomp_unit_0074, "recomp_unit_0074");
    runtime.register_function(0x0892D3FCu, &recomp_unit_0074, "recomp_unit_0074");
    runtime.register_function(0x0892D40Cu, &recomp_unit_0074, "recomp_unit_0074");
    runtime.register_function(0x0892D420u, &recomp_unit_0074, "recomp_unit_0074");
    runtime.register_function(0x0892D430u, &recomp_unit_0074, "recomp_unit_0074");
    runtime.register_function(0x0892D440u, &recomp_unit_0074, "recomp_unit_0074");
    runtime.register_function(0x0892D450u, &recomp_unit_0074, "recomp_unit_0074");
    runtime.register_function(0x0892D46Cu, &recomp_unit_0074, "recomp_unit_0074");
    runtime.register_function(0x0892D47Cu, &recomp_unit_0074, "recomp_unit_0074");
    runtime.register_function(0x0892D488u, &recomp_unit_0074, "recomp_unit_0074");
    runtime.register_function(0x0892D4BCu, &recomp_unit_0074, "recomp_unit_0074");
    runtime.register_function(0x0892D4C8u, &recomp_unit_0074, "recomp_unit_0074");
    runtime.register_function(0x0892D4DCu, &recomp_unit_0074, "recomp_unit_0074");
    runtime.register_function(0x0892D4F0u, &recomp_unit_0074, "recomp_unit_0074");
    runtime.register_function(0x0892D504u, &recomp_unit_0074, "recomp_unit_0074");
    runtime.register_function(0x0892D510u, &recomp_unit_0074, "recomp_unit_0074");
    runtime.register_function(0x0892D528u, &recomp_unit_0074, "recomp_unit_0074");
    runtime.register_function(0x0892D554u, &recomp_unit_0074, "recomp_unit_0074");
    runtime.register_function(0x0892D55Cu, &recomp_unit_0074, "recomp_unit_0074");
    runtime.register_function(0x0892D564u, &recomp_unit_0074, "recomp_unit_0074");
    runtime.register_function(0x0892D574u, &recomp_unit_0074, "recomp_unit_0074");
    runtime.register_function(0x0892D584u, &recomp_unit_0074, "recomp_unit_0074");
    runtime.register_function(0x0892D58Cu, &recomp_unit_0074, "recomp_unit_0074");
    runtime.register_function(0x0892D59Cu, &recomp_unit_0074, "recomp_unit_0074");
    runtime.register_function(0x0892D5A4u, &recomp_unit_0074, "recomp_unit_0074");
    runtime.register_function(0x0892D5ACu, &recomp_unit_0074, "recomp_unit_0074");
    runtime.register_function(0x0892D5B0u, &recomp_unit_0074, "recomp_unit_0074");
    runtime.register_function(0x0892D5D0u, &recomp_unit_0074, "recomp_unit_0074");
    runtime.register_function(0x0892D5FCu, &recomp_unit_0074, "recomp_unit_0074");
    runtime.register_function(0x0892D608u, &recomp_unit_0074, "recomp_unit_0074");
    runtime.register_function(0x0892D61Cu, &recomp_unit_0074, "recomp_unit_0074");
    runtime.register_function(0x0892D630u, &recomp_unit_0074, "recomp_unit_0074");
    runtime.register_function(0x0892D644u, &recomp_unit_0074, "recomp_unit_0074");
    runtime.register_function(0x0892D650u, &recomp_unit_0074, "recomp_unit_0074");
    runtime.register_function(0x0892D664u, &recomp_unit_0074, "recomp_unit_0074");
    runtime.register_function(0x0892D670u, &recomp_unit_0074, "recomp_unit_0074");
    runtime.register_function(0x0892D67Cu, &recomp_unit_0074, "recomp_unit_0074");
    runtime.register_function(0x0892D694u, &recomp_unit_0074, "recomp_unit_0074");
    runtime.register_function(0x0892D6A4u, &recomp_unit_0074, "recomp_unit_0074");
    runtime.register_function(0x0892D6C4u, &recomp_unit_0074, "recomp_unit_0074");
    runtime.register_function(0x0892D6D0u, &recomp_unit_0074, "recomp_unit_0074");
    runtime.register_function(0x0892D6F4u, &recomp_unit_0074, "recomp_unit_0074");
    runtime.register_function(0x0892D6FCu, &recomp_unit_0074, "recomp_unit_0074");
    runtime.register_function(0x0892D710u, &recomp_unit_0074, "recomp_unit_0074");
    runtime.register_function(0x0892D720u, &recomp_unit_0074, "recomp_unit_0074");
    runtime.register_function(0x0892D730u, &recomp_unit_0074, "recomp_unit_0074");
    runtime.register_function(0x0892D73Cu, &recomp_unit_0074, "recomp_unit_0074");
    runtime.register_function(0x0892D764u, &recomp_unit_0074, "recomp_unit_0074");
    runtime.register_function(0x0892D780u, &recomp_unit_0074, "recomp_unit_0074");
    runtime.register_function(0x0892D7A4u, &recomp_unit_0074, "recomp_unit_0074");
    runtime.register_function(0x0892D7B0u, &recomp_unit_0074, "recomp_unit_0074");
    runtime.register_function(0x0892D7C4u, &recomp_unit_0074, "recomp_unit_0074");
    runtime.register_function(0x0892D7D8u, &recomp_unit_0074, "recomp_unit_0074");
    runtime.register_function(0x0892D7ECu, &recomp_unit_0074, "recomp_unit_0074");
    runtime.register_function(0x0892D7F8u, &recomp_unit_0074, "recomp_unit_0074");
    runtime.register_function(0x0892D800u, &recomp_unit_0074, "recomp_unit_0074");
    runtime.register_function(0x0892D814u, &recomp_unit_0074, "recomp_unit_0074");
    runtime.register_function(0x0892D820u, &recomp_unit_0074, "recomp_unit_0074");
    runtime.register_function(0x0892D82Cu, &recomp_unit_0074, "recomp_unit_0074");
    runtime.register_function(0x0892D850u, &recomp_unit_0074, "recomp_unit_0074");
    runtime.register_function(0x0892D858u, &recomp_unit_0074, "recomp_unit_0074");
    runtime.register_function(0x0892D864u, &recomp_unit_0074, "recomp_unit_0074");
    runtime.register_function(0x0892D888u, &recomp_unit_0074, "recomp_unit_0074");
    runtime.register_function(0x0892D8A0u, &recomp_unit_0074, "recomp_unit_0074");
    runtime.register_function(0x0892D8BCu, &recomp_unit_0074, "recomp_unit_0074");
    runtime.register_function(0x0892D8C8u, &recomp_unit_0074, "recomp_unit_0074");
    runtime.register_function(0x0892D8DCu, &recomp_unit_0074, "recomp_unit_0074");
    runtime.register_function(0x0892D8F0u, &recomp_unit_0074, "recomp_unit_0074");
    runtime.register_function(0x0892D904u, &recomp_unit_0074, "recomp_unit_0074");
    runtime.register_function(0x0892D910u, &recomp_unit_0074, "recomp_unit_0074");
    runtime.register_function(0x0892D91Cu, &recomp_unit_0074, "recomp_unit_0074");
    runtime.register_function(0x0892D928u, &recomp_unit_0074, "recomp_unit_0074");
    runtime.register_function(0x0892D934u, &recomp_unit_0074, "recomp_unit_0074");
    runtime.register_function(0x0892D940u, &recomp_unit_0074, "recomp_unit_0074");
    runtime.register_function(0x0892D948u, &recomp_unit_0074, "recomp_unit_0074");
    runtime.register_function(0x0892D958u, &recomp_unit_0074, "recomp_unit_0074");
    runtime.register_function(0x0892D960u, &recomp_unit_0074, "recomp_unit_0074");
    runtime.register_function(0x0892D980u, &recomp_unit_0074, "recomp_unit_0074");
    runtime.register_function(0x0892D998u, &recomp_unit_0074, "recomp_unit_0074");
    runtime.register_function(0x0892D9A0u, &recomp_unit_0074, "recomp_unit_0074");
    runtime.register_function(0x0892D9B4u, &recomp_unit_0074, "recomp_unit_0074");
    runtime.register_function(0x0892D9D8u, &recomp_unit_0074, "recomp_unit_0074");
    runtime.register_function(0x0892D9E4u, &recomp_unit_0074, "recomp_unit_0074");
    runtime.register_function(0x0892D9FCu, &recomp_unit_0074, "recomp_unit_0074");
    runtime.register_function(0x0892DA08u, &recomp_unit_0074, "recomp_unit_0074");
    runtime.register_function(0x0892DA24u, &recomp_unit_0074, "recomp_unit_0074");
    runtime.register_function(0x0892DA28u, &recomp_unit_0074, "recomp_unit_0074");
    runtime.register_function(0x0892DA3Cu, &recomp_unit_0074, "recomp_unit_0074");
    runtime.register_function(0x0892DA40u, &recomp_unit_0074, "recomp_unit_0074");
    runtime.register_function(0x0892DA58u, &recomp_unit_0074, "recomp_unit_0074");
    runtime.register_function(0x0892DA6Cu, &recomp_unit_0074, "recomp_unit_0074");
    runtime.register_function(0x0892DA78u, &recomp_unit_0074, "recomp_unit_0074");
    runtime.register_function(0x0892DA88u, &recomp_unit_0074, "recomp_unit_0074");
    runtime.register_function(0x0892DA98u, &recomp_unit_0074, "recomp_unit_0074");
    runtime.register_function(0x0892DA9Cu, &recomp_unit_0074, "recomp_unit_0074");
    runtime.register_function(0x0892DAB4u, &recomp_unit_0074, "recomp_unit_0074");
    runtime.register_function(0x0892DAC4u, &recomp_unit_0074, "recomp_unit_0074");
    runtime.register_function(0x0892DAD0u, &recomp_unit_0074, "recomp_unit_0074");
    runtime.register_function(0x0892DAE4u, &recomp_unit_0074, "recomp_unit_0074");
    runtime.register_function(0x0892DAF0u, &recomp_unit_0074, "recomp_unit_0074");
    runtime.register_function(0x0892DAFCu, &recomp_unit_0074, "recomp_unit_0074");
    runtime.register_function(0x0892DB08u, &recomp_unit_0074, "recomp_unit_0074");
    runtime.register_function(0x0892DB14u, &recomp_unit_0074, "recomp_unit_0074");
    runtime.register_function(0x0892DB2Cu, &recomp_unit_0074, "recomp_unit_0074");
    runtime.register_function(0x0892DB34u, &recomp_unit_0074, "recomp_unit_0074");
    runtime.register_function(0x0892DB44u, &recomp_unit_0074, "recomp_unit_0074");
    runtime.register_function(0x0892DB50u, &recomp_unit_0074, "recomp_unit_0074");
    runtime.register_function(0x0892DB5Cu, &recomp_unit_0074, "recomp_unit_0074");
    runtime.register_function(0x0892DB68u, &recomp_unit_0074, "recomp_unit_0074");
    runtime.register_function(0x0892DB8Cu, &recomp_unit_0074, "recomp_unit_0074");
    runtime.register_function(0x0892DBA8u, &recomp_unit_0074, "recomp_unit_0074");
    runtime.register_function(0x0892DBB4u, &recomp_unit_0074, "recomp_unit_0074");
    runtime.register_function(0x0892DBC0u, &recomp_unit_0074, "recomp_unit_0074");
    runtime.register_function(0x0892DBCCu, &recomp_unit_0074, "recomp_unit_0074");
    runtime.register_function(0x0892DBDCu, &recomp_unit_0074, "recomp_unit_0074");
    runtime.register_function(0x0892DBE4u, &recomp_unit_0074, "recomp_unit_0074");
    runtime.register_function(0x0892DBFCu, &recomp_unit_0074, "recomp_unit_0074");
    runtime.register_function(0x0892DC04u, &recomp_unit_0074, "recomp_unit_0074");
    runtime.register_function(0x0892DC10u, &recomp_unit_0074, "recomp_unit_0074");
    runtime.register_function(0x0892DC18u, &recomp_unit_0074, "recomp_unit_0074");
    runtime.register_function(0x0892DC24u, &recomp_unit_0074, "recomp_unit_0074");
    runtime.register_function(0x0892DC30u, &recomp_unit_0074, "recomp_unit_0074");
    runtime.register_function(0x0892DC3Cu, &recomp_unit_0074, "recomp_unit_0074");
    runtime.register_function(0x0892DC48u, &recomp_unit_0074, "recomp_unit_0074");
    runtime.register_function(0x0892DC54u, &recomp_unit_0074, "recomp_unit_0074");
    runtime.register_function(0x0892DC60u, &recomp_unit_0074, "recomp_unit_0074");
    runtime.register_function(0x0892DC64u, &recomp_unit_0074, "recomp_unit_0074");
    runtime.register_function(0x0892DC7Cu, &recomp_unit_0074, "recomp_unit_0074");
    runtime.register_function(0x0892DC94u, &recomp_unit_0074, "recomp_unit_0074");
    runtime.register_function(0x0892DC9Cu, &recomp_unit_0074, "recomp_unit_0074");
    runtime.register_function(0x0892DCA4u, &recomp_unit_0074, "recomp_unit_0074");
    runtime.register_function(0x0892DCACu, &recomp_unit_0074, "recomp_unit_0074");
    runtime.register_function(0x0892DCBCu, &recomp_unit_0074, "recomp_unit_0074");
    runtime.register_function(0x0892DCCCu, &recomp_unit_0074, "recomp_unit_0074");
    runtime.register_function(0x0892DCDCu, &recomp_unit_0074, "recomp_unit_0074");
    runtime.register_function(0x0892DCF8u, &recomp_unit_0074, "recomp_unit_0074");
    runtime.register_function(0x0892DD04u, &recomp_unit_0074, "recomp_unit_0074");
    runtime.register_function(0x0892DD18u, &recomp_unit_0074, "recomp_unit_0074");
    runtime.register_function(0x0892DD28u, &recomp_unit_0074, "recomp_unit_0074");
    runtime.register_function(0x0892DD40u, &recomp_unit_0074, "recomp_unit_0074");
    runtime.register_function(0x0892DD50u, &recomp_unit_0074, "recomp_unit_0074");
    runtime.register_function(0x0892DD64u, &recomp_unit_0074, "recomp_unit_0074");
    runtime.register_function(0x0892DD74u, &recomp_unit_0074, "recomp_unit_0074");
    runtime.register_function(0x0892DD88u, &recomp_unit_0074, "recomp_unit_0074");
    runtime.register_function(0x0892DD98u, &recomp_unit_0074, "recomp_unit_0074");
    runtime.register_function(0x0892DDBCu, &recomp_unit_0074, "recomp_unit_0074");
    runtime.register_function(0x0892DDC4u, &recomp_unit_0074, "recomp_unit_0074");
    runtime.register_function(0x0892DDE0u, &recomp_unit_0074, "recomp_unit_0074");
    runtime.register_function(0x0892DDFCu, &recomp_unit_0074, "recomp_unit_0074");
    runtime.register_function(0x0892DE08u, &recomp_unit_0074, "recomp_unit_0074");
    runtime.register_function(0x0892DE10u, &recomp_unit_0074, "recomp_unit_0074");
    runtime.register_function(0x0892DE28u, &recomp_unit_0074, "recomp_unit_0074");
    runtime.register_function(0x0892DE50u, &recomp_unit_0074, "recomp_unit_0074");
    runtime.register_function(0x0892DE5Cu, &recomp_unit_0074, "recomp_unit_0074");
    runtime.register_function(0x0892DE6Cu, &recomp_unit_0074, "recomp_unit_0074");
    runtime.register_function(0x0892DE74u, &recomp_unit_0074, "recomp_unit_0074");
    runtime.register_function(0x0892DE78u, &recomp_unit_0074, "recomp_unit_0074");
    runtime.register_function(0x0892DE9Cu, &recomp_unit_0074, "recomp_unit_0074");
    runtime.register_function(0x0892DEA4u, &recomp_unit_0074, "recomp_unit_0074");
    runtime.register_function(0x0892DEB0u, &recomp_unit_0074, "recomp_unit_0074");
    runtime.register_function(0x0892DEBCu, &recomp_unit_0074, "recomp_unit_0074");
    runtime.register_function(0x0892DEC8u, &recomp_unit_0074, "recomp_unit_0074");
    runtime.register_function(0x0892DED4u, &recomp_unit_0074, "recomp_unit_0074");
    runtime.register_function(0x0892DEE0u, &recomp_unit_0074, "recomp_unit_0074");
    runtime.register_function(0x0892DEE8u, &recomp_unit_0074, "recomp_unit_0074");
    runtime.register_function(0x0892DF00u, &recomp_unit_0074, "recomp_unit_0074");
    runtime.register_function(0x0892DF28u, &recomp_unit_0074, "recomp_unit_0074");
    runtime.register_function(0x0892DF38u, &recomp_unit_0074, "recomp_unit_0074");
    runtime.register_function(0x0892DF5Cu, &recomp_unit_0074, "recomp_unit_0074");
    runtime.register_function(0x0892DF64u, &recomp_unit_0074, "recomp_unit_0074");
    runtime.register_function(0x0892DF70u, &recomp_unit_0074, "recomp_unit_0074");
    runtime.register_function(0x0892DF7Cu, &recomp_unit_0074, "recomp_unit_0074");
    runtime.register_function(0x0892DF9Cu, &recomp_unit_0074, "recomp_unit_0074");
    runtime.register_function(0x0892DFB4u, &recomp_unit_0074, "recomp_unit_0074");
    runtime.register_function(0x0892DFC4u, &recomp_unit_0074, "recomp_unit_0074");
    runtime.register_function(0x0892DFD8u, &recomp_unit_0074, "recomp_unit_0074");
    runtime.register_function(0x0892DFF8u, &recomp_unit_0074, "recomp_unit_0074");
    runtime.register_function(0x0892E010u, &recomp_unit_0074, "recomp_unit_0074");
    runtime.register_function(0x0892E030u, &recomp_unit_0074, "recomp_unit_0074");
    runtime.register_function(0x0892E038u, &recomp_unit_0074, "recomp_unit_0074");
    runtime.register_function(0x0892E04Cu, &recomp_unit_0074, "recomp_unit_0074");
    runtime.register_function(0x0892E06Cu, &recomp_unit_0074, "recomp_unit_0074");
    runtime.register_function(0x0892E074u, &recomp_unit_0074, "recomp_unit_0074");
    runtime.register_function(0x0892E08Cu, &recomp_unit_0074, "recomp_unit_0074");
    runtime.register_function(0x0892E094u, &recomp_unit_0074, "recomp_unit_0074");
    runtime.register_function(0x0892E098u, &recomp_unit_0074, "recomp_unit_0074");
    runtime.register_function(0x0892E0ACu, &recomp_unit_0074, "recomp_unit_0074");
    runtime.register_function(0x0892E0E0u, &recomp_unit_0074, "recomp_unit_0074");
    runtime.register_function(0x0892E0ECu, &recomp_unit_0074, "recomp_unit_0074");
    runtime.register_function(0x0892E0F4u, &recomp_unit_0074, "recomp_unit_0074");
    runtime.register_function(0x0892E100u, &recomp_unit_0074, "recomp_unit_0074");
    runtime.register_function(0x0892E110u, &recomp_unit_0074, "recomp_unit_0074");
    runtime.register_function(0x0892E128u, &recomp_unit_0074, "recomp_unit_0074");
    runtime.register_function(0x0892E130u, &recomp_unit_0074, "recomp_unit_0074");
    runtime.register_function(0x0892E148u, &recomp_unit_0074, "recomp_unit_0074");
    runtime.register_function(0x0892E160u, &recomp_unit_0074, "recomp_unit_0074");
    runtime.register_function(0x0892E184u, &recomp_unit_0074, "recomp_unit_0074");
    runtime.register_function(0x0892E18Cu, &recomp_unit_0074, "recomp_unit_0074");
    runtime.register_function(0x0892E1A8u, &recomp_unit_0074, "recomp_unit_0074");
    runtime.register_function(0x0892E1D4u, &recomp_unit_0074, "recomp_unit_0074");
    runtime.register_function(0x0892E1E0u, &recomp_unit_0074, "recomp_unit_0074");
    runtime.register_function(0x0892E1ECu, &recomp_unit_0074, "recomp_unit_0074");
    runtime.register_function(0x0892E20Cu, &recomp_unit_0074, "recomp_unit_0074");
    runtime.register_function(0x0892E220u, &recomp_unit_0074, "recomp_unit_0074");
    runtime.register_function(0x0892E224u, &recomp_unit_0074, "recomp_unit_0074");
    runtime.register_function(0x0892E230u, &recomp_unit_0074, "recomp_unit_0074");
    runtime.register_function(0x0892E244u, &recomp_unit_0074, "recomp_unit_0074");
    runtime.register_function(0x0892E250u, &recomp_unit_0074, "recomp_unit_0074");
    runtime.register_function(0x0892E25Cu, &recomp_unit_0074, "recomp_unit_0074");
    runtime.register_function(0x0892E274u, &recomp_unit_0074, "recomp_unit_0074");
    runtime.register_function(0x0892E28Cu, &recomp_unit_0074, "recomp_unit_0074");
    runtime.register_function(0x0892E298u, &recomp_unit_0074, "recomp_unit_0074");
    runtime.register_function(0x0892E2A4u, &recomp_unit_0074, "recomp_unit_0074");
    runtime.register_function(0x0892E2ACu, &recomp_unit_0074, "recomp_unit_0074");
    runtime.register_function(0x0892E2C8u, &recomp_unit_0074, "recomp_unit_0074");
    runtime.register_function(0x0892E2E0u, &recomp_unit_0074, "recomp_unit_0074");
    runtime.register_function(0x0892E308u, &recomp_unit_0074, "recomp_unit_0074");
    runtime.register_function(0x0892E324u, &recomp_unit_0074, "recomp_unit_0074");
    runtime.register_function(0x0892E330u, &recomp_unit_0074, "recomp_unit_0074");
    runtime.register_function(0x0892E338u, &recomp_unit_0074, "recomp_unit_0074");
    runtime.register_function(0x0892E340u, &recomp_unit_0074, "recomp_unit_0074");
    runtime.register_function(0x0892E348u, &recomp_unit_0074, "recomp_unit_0074");
    runtime.register_function(0x0892E350u, &recomp_unit_0074, "recomp_unit_0074");
    runtime.register_function(0x0892E36Cu, &recomp_unit_0074, "recomp_unit_0074");
    runtime.register_function(0x0892E37Cu, &recomp_unit_0074, "recomp_unit_0074");
    runtime.register_function(0x0892E388u, &recomp_unit_0074, "recomp_unit_0074");
    runtime.register_function(0x0892E390u, &recomp_unit_0074, "recomp_unit_0074");
    runtime.register_function(0x0892E39Cu, &recomp_unit_0074, "recomp_unit_0074");
    runtime.register_function(0x0892E3A8u, &recomp_unit_0074, "recomp_unit_0074");
    runtime.register_function(0x0892E3B4u, &recomp_unit_0074, "recomp_unit_0074");
    runtime.register_function(0x0892E3C0u, &recomp_unit_0074, "recomp_unit_0074");
    runtime.register_function(0x0892E3CCu, &recomp_unit_0074, "recomp_unit_0074");
    runtime.register_function(0x0892E3DCu, &recomp_unit_0074, "recomp_unit_0074");
    runtime.register_function(0x0892E3E8u, &recomp_unit_0074, "recomp_unit_0074");
    runtime.register_function(0x0892E3ECu, &recomp_unit_0074, "recomp_unit_0074");
    runtime.register_function(0x0892E3F4u, &recomp_unit_0074, "recomp_unit_0074");
    runtime.register_function(0x0892E434u, &recomp_unit_0074, "recomp_unit_0074");
    runtime.register_function(0x0892E440u, &recomp_unit_0074, "recomp_unit_0074");
    runtime.register_function(0x0892E44Cu, &recomp_unit_0074, "recomp_unit_0074");
    runtime.register_function(0x0892E454u, &recomp_unit_0074, "recomp_unit_0074");
    runtime.register_function(0x0892E46Cu, &recomp_unit_0074, "recomp_unit_0074");
    runtime.register_function(0x0892E474u, &recomp_unit_0074, "recomp_unit_0074");
    runtime.register_function(0x0892E480u, &recomp_unit_0074, "recomp_unit_0074");
    runtime.register_function(0x0892E488u, &recomp_unit_0074, "recomp_unit_0074");
    runtime.register_function(0x0892E490u, &recomp_unit_0074, "recomp_unit_0074");
    runtime.register_function(0x0892E494u, &recomp_unit_0074, "recomp_unit_0074");
    runtime.register_function(0x0892E4B4u, &recomp_unit_0074, "recomp_unit_0074");
    runtime.register_function(0x0892E4C0u, &recomp_unit_0074, "recomp_unit_0074");
    runtime.register_function(0x0892E4CCu, &recomp_unit_0074, "recomp_unit_0074");
    runtime.register_function(0x0892E4D8u, &recomp_unit_0074, "recomp_unit_0074");
    runtime.register_function(0x0892E4E4u, &recomp_unit_0074, "recomp_unit_0074");
    runtime.register_function(0x0892E4F0u, &recomp_unit_0074, "recomp_unit_0074");
    runtime.register_function(0x0892E4FCu, &recomp_unit_0074, "recomp_unit_0074");
    runtime.register_function(0x0892E51Cu, &recomp_unit_0074, "recomp_unit_0074");
    runtime.register_function(0x0892E534u, &recomp_unit_0074, "recomp_unit_0074");
    runtime.register_function(0x0892E554u, &recomp_unit_0074, "recomp_unit_0074");
    runtime.register_function(0x0892E574u, &recomp_unit_0074, "recomp_unit_0074");
    runtime.register_function(0x0892E57Cu, &recomp_unit_0074, "recomp_unit_0074");
    runtime.register_function(0x0892E590u, &recomp_unit_0074, "recomp_unit_0074");
    runtime.register_function(0x0892E598u, &recomp_unit_0074, "recomp_unit_0074");
    runtime.register_function(0x0892E5A4u, &recomp_unit_0074, "recomp_unit_0074");
    runtime.register_function(0x0892E5ACu, &recomp_unit_0074, "recomp_unit_0074");
    runtime.register_function(0x0892E5B8u, &recomp_unit_0074, "recomp_unit_0074");
    runtime.register_function(0x0892E5DCu, &recomp_unit_0074, "recomp_unit_0074");
    runtime.register_function(0x0892E5F4u, &recomp_unit_0074, "recomp_unit_0074");
    runtime.register_function(0x0892E604u, &recomp_unit_0074, "recomp_unit_0074");
    runtime.register_function(0x0892E618u, &recomp_unit_0074, "recomp_unit_0074");
    runtime.register_function(0x0892E628u, &recomp_unit_0074, "recomp_unit_0074");
    runtime.register_function(0x0892E644u, &recomp_unit_0074, "recomp_unit_0074");
    runtime.register_function(0x0892E65Cu, &recomp_unit_0074, "recomp_unit_0074");
    runtime.register_function(0x0892E674u, &recomp_unit_0074, "recomp_unit_0074");
    runtime.register_function(0x0892E6B0u, &recomp_unit_0074, "recomp_unit_0074");
    runtime.register_function(0x0892E6BCu, &recomp_unit_0074, "recomp_unit_0074");
    runtime.register_function(0x0892E6C8u, &recomp_unit_0074, "recomp_unit_0074");
    runtime.register_function(0x0892E6D0u, &recomp_unit_0074, "recomp_unit_0074");
    runtime.register_function(0x0892E6E8u, &recomp_unit_0074, "recomp_unit_0074");
    runtime.register_function(0x0892E6F0u, &recomp_unit_0074, "recomp_unit_0074");
    runtime.register_function(0x0892E6FCu, &recomp_unit_0074, "recomp_unit_0074");
    runtime.register_function(0x0892E720u, &recomp_unit_0074, "recomp_unit_0074");
    runtime.register_function(0x0892E73Cu, &recomp_unit_0074, "recomp_unit_0074");
    runtime.register_function(0x0892E748u, &recomp_unit_0074, "recomp_unit_0074");
    runtime.register_function(0x0892E75Cu, &recomp_unit_0074, "recomp_unit_0074");
    runtime.register_function(0x0892E774u, &recomp_unit_0074, "recomp_unit_0074");
    runtime.register_function(0x0892E78Cu, &recomp_unit_0074, "recomp_unit_0074");
    runtime.register_function(0x0892E798u, &recomp_unit_0074, "recomp_unit_0074");
    runtime.register_function(0x0892E7B0u, &recomp_unit_0074, "recomp_unit_0074");
    runtime.register_function(0x0892E7C8u, &recomp_unit_0074, "recomp_unit_0074");
    runtime.register_function(0x0892E7DCu, &recomp_unit_0074, "recomp_unit_0074");
    runtime.register_function(0x0892E7F4u, &recomp_unit_0074, "recomp_unit_0074");
    runtime.register_function(0x0892E800u, &recomp_unit_0074, "recomp_unit_0074");
    runtime.register_function(0x0892E810u, &recomp_unit_0074, "recomp_unit_0074");
    runtime.register_function(0x0892E81Cu, &recomp_unit_0074, "recomp_unit_0074");
    runtime.register_function(0x0892E834u, &recomp_unit_0074, "recomp_unit_0074");
    runtime.register_function(0x0892E848u, &recomp_unit_0074, "recomp_unit_0074");
    runtime.register_function(0x0892E868u, &recomp_unit_0074, "recomp_unit_0074");
    runtime.register_function(0x0892E874u, &recomp_unit_0074, "recomp_unit_0074");
    runtime.register_function(0x0892E88Cu, &recomp_unit_0074, "recomp_unit_0074");
    runtime.register_function(0x0892E8A0u, &recomp_unit_0074, "recomp_unit_0074");
    runtime.register_function(0x0892E8ACu, &recomp_unit_0074, "recomp_unit_0074");
    runtime.register_function(0x0892E8BCu, &recomp_unit_0074, "recomp_unit_0074");
    runtime.register_function(0x0892E8D0u, &recomp_unit_0074, "recomp_unit_0074");
    runtime.register_function(0x0892E8E8u, &recomp_unit_0074, "recomp_unit_0074");
    runtime.register_function(0x0892E900u, &recomp_unit_0074, "recomp_unit_0074");
    runtime.register_function(0x0892E91Cu, &recomp_unit_0074, "recomp_unit_0074");
    runtime.register_function(0x0892E928u, &recomp_unit_0074, "recomp_unit_0074");
    runtime.register_function(0x0892E940u, &recomp_unit_0074, "recomp_unit_0074");
    runtime.register_function(0x0892E950u, &recomp_unit_0074, "recomp_unit_0074");
    runtime.register_function(0x0892E95Cu, &recomp_unit_0074, "recomp_unit_0074");
    runtime.register_function(0x0892E96Cu, &recomp_unit_0074, "recomp_unit_0074");
    runtime.register_function(0x0892E974u, &recomp_unit_0074, "recomp_unit_0074");
    runtime.register_function(0x0892E980u, &recomp_unit_0074, "recomp_unit_0074");
    runtime.register_function(0x0892E990u, &recomp_unit_0074, "recomp_unit_0074");
    runtime.register_function(0x0892E9A4u, &recomp_unit_0074, "recomp_unit_0074");
    runtime.register_function(0x0892E9BCu, &recomp_unit_0074, "recomp_unit_0074");
    runtime.register_function(0x0892E9D8u, &recomp_unit_0074, "recomp_unit_0074");
    runtime.register_function(0x0892E9F0u, &recomp_unit_0074, "recomp_unit_0074");
    runtime.register_function(0x0892E9F8u, &recomp_unit_0074, "recomp_unit_0074");
    runtime.register_function(0x0892EA04u, &recomp_unit_0074, "recomp_unit_0074");
    runtime.register_function(0x0892EA0Cu, &recomp_unit_0074, "recomp_unit_0074");
    runtime.register_function(0x0892EA18u, &recomp_unit_0074, "recomp_unit_0074");
    runtime.register_function(0x0892EA28u, &recomp_unit_0074, "recomp_unit_0074");
    runtime.register_function(0x0892EA3Cu, &recomp_unit_0074, "recomp_unit_0074");
    runtime.register_function(0x0892EA54u, &recomp_unit_0074, "recomp_unit_0074");
    runtime.register_function(0x0892EA70u, &recomp_unit_0074, "recomp_unit_0074");
    runtime.register_function(0x0892EA84u, &recomp_unit_0074, "recomp_unit_0074");
    runtime.register_function(0x0892EA98u, &recomp_unit_0074, "recomp_unit_0074");
    runtime.register_function(0x0892EAA8u, &recomp_unit_0074, "recomp_unit_0074");
    runtime.register_function(0x0892EAC0u, &recomp_unit_0074, "recomp_unit_0074");
    runtime.register_function(0x0892EADCu, &recomp_unit_0074, "recomp_unit_0074");
    runtime.register_function(0x0892EAE8u, &recomp_unit_0074, "recomp_unit_0074");
    runtime.register_function(0x0892EB04u, &recomp_unit_0074, "recomp_unit_0074");
    runtime.register_function(0x0892EB14u, &recomp_unit_0074, "recomp_unit_0074");
    runtime.register_function(0x0892EB24u, &recomp_unit_0074, "recomp_unit_0074");
    runtime.register_function(0x0892EB2Cu, &recomp_unit_0074, "recomp_unit_0074");
    runtime.register_function(0x0892EB3Cu, &recomp_unit_0074, "recomp_unit_0074");
    runtime.register_function(0x0892EB48u, &recomp_unit_0074, "recomp_unit_0074");
    runtime.register_function(0x0892EB58u, &recomp_unit_0074, "recomp_unit_0074");
    runtime.register_function(0x0892EB64u, &recomp_unit_0074, "recomp_unit_0074");
    runtime.register_function(0x0892EB78u, &recomp_unit_0074, "recomp_unit_0074");
    runtime.register_function(0x0892EB8Cu, &recomp_unit_0074, "recomp_unit_0074");
    runtime.register_function(0x0892EB98u, &recomp_unit_0074, "recomp_unit_0074");
    runtime.register_function(0x0892EBA0u, &recomp_unit_0074, "recomp_unit_0074");
    runtime.register_function(0x0892EBA8u, &recomp_unit_0074, "recomp_unit_0074");
    runtime.register_function(0x0892EBB4u, &recomp_unit_0074, "recomp_unit_0074");
    runtime.register_function(0x0892EBBCu, &recomp_unit_0074, "recomp_unit_0074");
    runtime.register_function(0x0892EBC8u, &recomp_unit_0074, "recomp_unit_0074");
    runtime.register_function(0x0892EBD8u, &recomp_unit_0074, "recomp_unit_0074");
    runtime.register_function(0x0892EBE0u, &recomp_unit_0074, "recomp_unit_0074");
    runtime.register_function(0x0892EBF0u, &recomp_unit_0074, "recomp_unit_0074");
    runtime.register_function(0x0892EBF8u, &recomp_unit_0074, "recomp_unit_0074");
    runtime.register_function(0x0892EC04u, &recomp_unit_0074, "recomp_unit_0074");
    runtime.register_function(0x0892EC10u, &recomp_unit_0074, "recomp_unit_0074");
    runtime.register_function(0x0892EC1Cu, &recomp_unit_0074, "recomp_unit_0074");
    runtime.register_function(0x0892EC34u, &recomp_unit_0074, "recomp_unit_0074");
    runtime.register_function(0x0892EC44u, &recomp_unit_0074, "recomp_unit_0074");
    runtime.register_function(0x0892EC50u, &recomp_unit_0074, "recomp_unit_0074");
    runtime.register_function(0x0892EC58u, &recomp_unit_0074, "recomp_unit_0074");
    runtime.register_function(0x0892EC70u, &recomp_unit_0074, "recomp_unit_0074");
    runtime.register_function(0x0892EC88u, &recomp_unit_0074, "recomp_unit_0074");
    runtime.register_function(0x0892EC94u, &recomp_unit_0074, "recomp_unit_0074");
    runtime.register_function(0x0892ECA8u, &recomp_unit_0074, "recomp_unit_0074");
    runtime.register_function(0x0892ECB8u, &recomp_unit_0074, "recomp_unit_0074");
    runtime.register_function(0x0892ECD0u, &recomp_unit_0074, "recomp_unit_0074");
    runtime.register_function(0x0892ECDCu, &recomp_unit_0074, "recomp_unit_0074");
    runtime.register_function(0x0892ECF0u, &recomp_unit_0074, "recomp_unit_0074");
    runtime.register_function(0x0892ED00u, &recomp_unit_0074, "recomp_unit_0074");
    runtime.register_function(0x0892ED18u, &recomp_unit_0074, "recomp_unit_0074");
    runtime.register_function(0x0892ED24u, &recomp_unit_0074, "recomp_unit_0074");
    runtime.register_function(0x0892ED34u, &recomp_unit_0074, "recomp_unit_0074");
    runtime.register_function(0x0892ED44u, &recomp_unit_0074, "recomp_unit_0074");
    runtime.register_function(0x0892ED64u, &recomp_unit_0074, "recomp_unit_0074");
    runtime.register_function(0x0892ED70u, &recomp_unit_0074, "recomp_unit_0074");
    runtime.register_function(0x0892ED80u, &recomp_unit_0074, "recomp_unit_0074");
    runtime.register_function(0x0892ED98u, &recomp_unit_0074, "recomp_unit_0074");
    runtime.register_function(0x0892EDA8u, &recomp_unit_0074, "recomp_unit_0074");
    runtime.register_function(0x0892EDB4u, &recomp_unit_0074, "recomp_unit_0074");
    runtime.register_function(0x0892EDC4u, &recomp_unit_0074, "recomp_unit_0074");
    runtime.register_function(0x0892EDD0u, &recomp_unit_0074, "recomp_unit_0074");
    runtime.register_function(0x0892EDDCu, &recomp_unit_0074, "recomp_unit_0074");
    runtime.register_function(0x0892EDE8u, &recomp_unit_0074, "recomp_unit_0074");
    runtime.register_function(0x0892EDF4u, &recomp_unit_0074, "recomp_unit_0074");
    runtime.register_function(0x0892EDFCu, &recomp_unit_0074, "recomp_unit_0074");
    runtime.register_function(0x0892EE00u, &recomp_unit_0074, "recomp_unit_0074");
    runtime.register_function(0x0892EE08u, &recomp_unit_0074, "recomp_unit_0074");
    runtime.register_function(0x0892EE14u, &recomp_unit_0074, "recomp_unit_0074");
    runtime.register_function(0x0892EE20u, &recomp_unit_0074, "recomp_unit_0074");
    runtime.register_function(0x0892EE30u, &recomp_unit_0074, "recomp_unit_0074");
    runtime.register_function(0x0892EE3Cu, &recomp_unit_0074, "recomp_unit_0074");
    runtime.register_function(0x0892EE5Cu, &recomp_unit_0074, "recomp_unit_0074");
    runtime.register_function(0x0892EE64u, &recomp_unit_0074, "recomp_unit_0074");
    runtime.register_function(0x0892EE78u, &recomp_unit_0074, "recomp_unit_0074");
    runtime.register_function(0x0892EE90u, &recomp_unit_0074, "recomp_unit_0074");
    runtime.register_function(0x0892EEA8u, &recomp_unit_0074, "recomp_unit_0074");
    runtime.register_function(0x0892EEC0u, &recomp_unit_0074, "recomp_unit_0074");
    runtime.register_function(0x0892EECCu, &recomp_unit_0074, "recomp_unit_0074");
    runtime.register_function(0x0892EEDCu, &recomp_unit_0074, "recomp_unit_0074");
    runtime.register_function(0x0892EEE8u, &recomp_unit_0074, "recomp_unit_0074");
    runtime.register_function(0x0892EEF4u, &recomp_unit_0074, "recomp_unit_0074");
    runtime.register_function(0x0892EF00u, &recomp_unit_0074, "recomp_unit_0074");
    runtime.register_function(0x0892EF10u, &recomp_unit_0074, "recomp_unit_0074");
    runtime.register_function(0x0892EF1Cu, &recomp_unit_0074, "recomp_unit_0074");
    runtime.register_function(0x0892EF24u, &recomp_unit_0074, "recomp_unit_0074");
    runtime.register_function(0x0892EF30u, &recomp_unit_0074, "recomp_unit_0074");
    runtime.register_function(0x0892EF3Cu, &recomp_unit_0074, "recomp_unit_0074");
    runtime.register_function(0x0892EF48u, &recomp_unit_0074, "recomp_unit_0074");
    runtime.register_function(0x0892EF54u, &recomp_unit_0074, "recomp_unit_0074");
    runtime.register_function(0x0892EF6Cu, &recomp_unit_0074, "recomp_unit_0074");
    runtime.register_function(0x0892EF7Cu, &recomp_unit_0074, "recomp_unit_0074");
    runtime.register_function(0x0892EFA8u, &recomp_unit_0074, "recomp_unit_0074");
    runtime.register_function(0x0892EFB0u, &recomp_unit_0074, "recomp_unit_0074");
    runtime.register_function(0x0892EFB8u, &recomp_unit_0074, "recomp_unit_0074");
    runtime.register_function(0x0892EFC4u, &recomp_unit_0074, "recomp_unit_0074");
    runtime.register_function(0x0892EFD0u, &recomp_unit_0074, "recomp_unit_0074");
    runtime.register_function(0x0892EFE8u, &recomp_unit_0074, "recomp_unit_0074");
    runtime.register_function(0x0892EFF8u, &recomp_unit_0074, "recomp_unit_0074");
    runtime.register_function(0x0892F000u, &recomp_unit_0074, "recomp_unit_0074");
    runtime.register_function(0x0892F014u, &recomp_unit_0074, "recomp_unit_0074");
    runtime.register_function(0x0892F020u, &recomp_unit_0074, "recomp_unit_0074");
    runtime.register_function(0x0892F028u, &recomp_unit_0074, "recomp_unit_0074");
    runtime.register_function(0x0892F034u, &recomp_unit_0074, "recomp_unit_0074");
    runtime.register_function(0x0892F040u, &recomp_unit_0074, "recomp_unit_0074");
    runtime.register_function(0x0892F058u, &recomp_unit_0074, "recomp_unit_0074");
    runtime.register_function(0x0892F068u, &recomp_unit_0074, "recomp_unit_0074");
    runtime.register_function(0x0892F070u, &recomp_unit_0074, "recomp_unit_0074");
    runtime.register_function(0x0892F084u, &recomp_unit_0074, "recomp_unit_0074");
    runtime.register_function(0x0892F090u, &recomp_unit_0074, "recomp_unit_0074");
    runtime.register_function(0x0892F098u, &recomp_unit_0074, "recomp_unit_0074");
    runtime.register_function(0x0892F0A4u, &recomp_unit_0074, "recomp_unit_0074");
    runtime.register_function(0x0892F0B0u, &recomp_unit_0074, "recomp_unit_0074");
    runtime.register_function(0x0892F0C8u, &recomp_unit_0074, "recomp_unit_0074");
    runtime.register_function(0x0892F0D8u, &recomp_unit_0074, "recomp_unit_0074");
    runtime.register_function(0x0892F0E0u, &recomp_unit_0074, "recomp_unit_0074");
    runtime.register_function(0x0892F0E4u, &recomp_unit_0074, "recomp_unit_0074");
    runtime.register_function(0x0892F0FCu, &recomp_unit_0074, "recomp_unit_0074");
    runtime.register_function(0x0892F128u, &recomp_unit_0074, "recomp_unit_0074");
    runtime.register_function(0x0892F134u, &recomp_unit_0074, "recomp_unit_0074");
    runtime.register_function(0x0892F140u, &recomp_unit_0074, "recomp_unit_0074");
    runtime.register_function(0x0892F148u, &recomp_unit_0074, "recomp_unit_0074");
    runtime.register_function(0x0892F154u, &recomp_unit_0074, "recomp_unit_0074");
    runtime.register_function(0x0892F164u, &recomp_unit_0074, "recomp_unit_0074");
    runtime.register_function(0x0892F170u, &recomp_unit_0074, "recomp_unit_0074");
    runtime.register_function(0x0892F178u, &recomp_unit_0074, "recomp_unit_0074");
    runtime.register_function(0x0892F184u, &recomp_unit_0074, "recomp_unit_0074");
    runtime.register_function(0x0892F194u, &recomp_unit_0074, "recomp_unit_0074");
    runtime.register_function(0x0892F19Cu, &recomp_unit_0074, "recomp_unit_0074");
    runtime.register_function(0x0892F1A4u, &recomp_unit_0074, "recomp_unit_0074");
    runtime.register_function(0x0892F1B4u, &recomp_unit_0074, "recomp_unit_0074");
    runtime.register_function(0x0892F1BCu, &recomp_unit_0074, "recomp_unit_0074");
    runtime.register_function(0x0892F1C8u, &recomp_unit_0074, "recomp_unit_0074");
    runtime.register_function(0x0892F1D4u, &recomp_unit_0074, "recomp_unit_0074");
    runtime.register_function(0x0892F1E0u, &recomp_unit_0074, "recomp_unit_0074");
    runtime.register_function(0x0892F1ECu, &recomp_unit_0074, "recomp_unit_0074");
    runtime.register_function(0x0892F1F8u, &recomp_unit_0074, "recomp_unit_0074");
    runtime.register_function(0x0892F204u, &recomp_unit_0074, "recomp_unit_0074");
    runtime.register_function(0x0892F208u, &recomp_unit_0074, "recomp_unit_0074");
    runtime.register_function(0x0892F214u, &recomp_unit_0074, "recomp_unit_0074");
    runtime.register_function(0x0892F218u, &recomp_unit_0074, "recomp_unit_0074");
    runtime.register_function(0x0892F23Cu, &recomp_unit_0074, "recomp_unit_0074");
    runtime.register_function(0x0892F270u, &recomp_unit_0074, "recomp_unit_0074");
    runtime.register_function(0x0892F280u, &recomp_unit_0074, "recomp_unit_0074");
    runtime.register_function(0x0892F298u, &recomp_unit_0074, "recomp_unit_0074");
    runtime.register_function(0x0892F2BCu, &recomp_unit_0074, "recomp_unit_0074");
    runtime.register_function(0x0892F2D4u, &recomp_unit_0074, "recomp_unit_0074");
    runtime.register_function(0x0892F2DCu, &recomp_unit_0074, "recomp_unit_0074");
    runtime.register_function(0x0892F2E0u, &recomp_unit_0074, "recomp_unit_0074");
    runtime.register_function(0x0892F2F4u, &recomp_unit_0074, "recomp_unit_0074");
    runtime.register_function(0x0892F2FCu, &recomp_unit_0074, "recomp_unit_0074");
    runtime.register_function(0x0892F300u, &recomp_unit_0074, "recomp_unit_0074");
    runtime.register_function(0x0892F314u, &recomp_unit_0074, "recomp_unit_0074");
    runtime.register_function(0x0892F31Cu, &recomp_unit_0074, "recomp_unit_0074");
    runtime.register_function(0x0892F320u, &recomp_unit_0074, "recomp_unit_0074");
    runtime.register_function(0x0892F334u, &recomp_unit_0074, "recomp_unit_0074");
    runtime.register_function(0x0892F33Cu, &recomp_unit_0074, "recomp_unit_0074");
    runtime.register_function(0x0892F340u, &recomp_unit_0074, "recomp_unit_0074");
    runtime.register_function(0x0892F354u, &recomp_unit_0074, "recomp_unit_0074");
    runtime.register_function(0x0892F35Cu, &recomp_unit_0074, "recomp_unit_0074");
    runtime.register_function(0x0892F360u, &recomp_unit_0074, "recomp_unit_0074");
    runtime.register_function(0x0892F374u, &recomp_unit_0074, "recomp_unit_0074");
    runtime.register_function(0x0892F37Cu, &recomp_unit_0074, "recomp_unit_0074");
    runtime.register_function(0x0892F380u, &recomp_unit_0074, "recomp_unit_0074");
    runtime.register_function(0x0892F394u, &recomp_unit_0074, "recomp_unit_0074");
    runtime.register_function(0x0892F39Cu, &recomp_unit_0074, "recomp_unit_0074");
    runtime.register_function(0x0892F3A0u, &recomp_unit_0074, "recomp_unit_0074");
    runtime.register_function(0x0892F3B4u, &recomp_unit_0074, "recomp_unit_0074");
    runtime.register_function(0x0892F3BCu, &recomp_unit_0074, "recomp_unit_0074");
    runtime.register_function(0x0892F3C0u, &recomp_unit_0074, "recomp_unit_0074");
    runtime.register_function(0x0892F3D4u, &recomp_unit_0074, "recomp_unit_0074");
    runtime.register_function(0x0892F3DCu, &recomp_unit_0074, "recomp_unit_0074");
    runtime.register_function(0x0892F3E0u, &recomp_unit_0074, "recomp_unit_0074");
    runtime.register_function(0x0892F3F4u, &recomp_unit_0074, "recomp_unit_0074");
    runtime.register_function(0x0892F3FCu, &recomp_unit_0074, "recomp_unit_0074");
    runtime.register_function(0x0892F400u, &recomp_unit_0074, "recomp_unit_0074");
    runtime.register_function(0x0892F414u, &recomp_unit_0074, "recomp_unit_0074");
    runtime.register_function(0x0892F41Cu, &recomp_unit_0074, "recomp_unit_0074");
    runtime.register_function(0x0892F420u, &recomp_unit_0074, "recomp_unit_0074");
    runtime.register_function(0x0892F434u, &recomp_unit_0074, "recomp_unit_0074");
    runtime.register_function(0x0892F43Cu, &recomp_unit_0074, "recomp_unit_0074");
    runtime.register_function(0x0892F440u, &recomp_unit_0074, "recomp_unit_0074");
    runtime.register_function(0x0892F454u, &recomp_unit_0074, "recomp_unit_0074");
    runtime.register_function(0x0892F45Cu, &recomp_unit_0074, "recomp_unit_0074");
    runtime.register_function(0x0892F460u, &recomp_unit_0074, "recomp_unit_0074");
    runtime.register_function(0x0892F474u, &recomp_unit_0074, "recomp_unit_0074");
    runtime.register_function(0x0892F47Cu, &recomp_unit_0074, "recomp_unit_0074");
    runtime.register_function(0x0892F480u, &recomp_unit_0074, "recomp_unit_0074");
    runtime.register_function(0x0892F488u, &recomp_unit_0074, "recomp_unit_0074");
    runtime.register_function(0x0892F494u, &recomp_unit_0074, "recomp_unit_0074");
    runtime.register_function(0x0892F4A8u, &recomp_unit_0074, "recomp_unit_0074");
    runtime.register_function(0x0892F4ACu, &recomp_unit_0074, "recomp_unit_0074");
    runtime.register_function(0x0892F4C4u, &recomp_unit_0074, "recomp_unit_0074");
    runtime.register_function(0x0892F4CCu, &recomp_unit_0074, "recomp_unit_0074");
    runtime.register_function(0x0892F4E4u, &recomp_unit_0074, "recomp_unit_0074");
    runtime.register_function(0x0892F4ECu, &recomp_unit_0074, "recomp_unit_0074");
    runtime.register_function(0x0892F4F8u, &recomp_unit_0074, "recomp_unit_0074");
    runtime.register_function(0x0892F50Cu, &recomp_unit_0074, "recomp_unit_0074");
    runtime.register_function(0x0892F514u, &recomp_unit_0074, "recomp_unit_0074");
    runtime.register_function(0x0892F520u, &recomp_unit_0074, "recomp_unit_0074");
    runtime.register_function(0x0892F534u, &recomp_unit_0074, "recomp_unit_0074");
    runtime.register_function(0x0892F53Cu, &recomp_unit_0074, "recomp_unit_0074");
    runtime.register_function(0x0892F548u, &recomp_unit_0074, "recomp_unit_0074");
    runtime.register_function(0x0892F55Cu, &recomp_unit_0074, "recomp_unit_0074");
    runtime.register_function(0x0892F564u, &recomp_unit_0074, "recomp_unit_0074");
    runtime.register_function(0x0892F568u, &recomp_unit_0074, "recomp_unit_0074");
    runtime.register_function(0x0892F56Cu, &recomp_unit_0074, "recomp_unit_0074");
    runtime.register_function(0x0892F574u, &recomp_unit_0074, "recomp_unit_0074");
    runtime.register_function(0x0892F58Cu, &recomp_unit_0074, "recomp_unit_0074");
    runtime.register_function(0x0892F594u, &recomp_unit_0074, "recomp_unit_0074");
    runtime.register_function(0x0892F5A0u, &recomp_unit_0074, "recomp_unit_0074");
    runtime.register_function(0x0892F5B4u, &recomp_unit_0074, "recomp_unit_0074");
    runtime.register_function(0x0892F5BCu, &recomp_unit_0074, "recomp_unit_0074");
    runtime.register_function(0x0892F5C8u, &recomp_unit_0074, "recomp_unit_0074");
    runtime.register_function(0x0892F5DCu, &recomp_unit_0074, "recomp_unit_0074");
    runtime.register_function(0x0892F5E4u, &recomp_unit_0074, "recomp_unit_0074");
    runtime.register_function(0x0892F5F0u, &recomp_unit_0074, "recomp_unit_0074");
    runtime.register_function(0x0892F604u, &recomp_unit_0074, "recomp_unit_0074");
    runtime.register_function(0x0892F60Cu, &recomp_unit_0074, "recomp_unit_0074");
    runtime.register_function(0x0892F610u, &recomp_unit_0074, "recomp_unit_0074");
    runtime.register_function(0x0892F614u, &recomp_unit_0074, "recomp_unit_0074");
    runtime.register_function(0x0892F628u, &recomp_unit_0074, "recomp_unit_0074");
    runtime.register_function(0x0892F638u, &recomp_unit_0074, "recomp_unit_0074");
    runtime.register_function(0x0892F640u, &recomp_unit_0074, "recomp_unit_0074");
    runtime.register_function(0x0892F65Cu, &recomp_unit_0074, "recomp_unit_0074");
    runtime.register_function(0x0892F688u, &recomp_unit_0074, "recomp_unit_0074");
    runtime.register_function(0x0892F694u, &recomp_unit_0074, "recomp_unit_0074");
    runtime.register_function(0x0892F6A0u, &recomp_unit_0074, "recomp_unit_0074");
    runtime.register_function(0x0892F6C4u, &recomp_unit_0074, "recomp_unit_0074");
    runtime.register_function(0x0892F6DCu, &recomp_unit_0074, "recomp_unit_0074");
    runtime.register_function(0x0892F6F8u, &recomp_unit_0074, "recomp_unit_0074");
    runtime.register_function(0x0892F73Cu, &recomp_unit_0074, "recomp_unit_0074");
    runtime.register_function(0x0892F750u, &recomp_unit_0074, "recomp_unit_0074");
    runtime.register_function(0x0892F760u, &recomp_unit_0074, "recomp_unit_0074");
    runtime.register_function(0x0892F76Cu, &recomp_unit_0074, "recomp_unit_0074");
    runtime.register_function(0x0892F774u, &recomp_unit_0074, "recomp_unit_0074");
    runtime.register_function(0x0892F788u, &recomp_unit_0074, "recomp_unit_0074");
    runtime.register_function(0x0892F79Cu, &recomp_unit_0074, "recomp_unit_0074");
    runtime.register_function(0x0892F7B8u, &recomp_unit_0074, "recomp_unit_0074");
    runtime.register_function(0x0892F7C8u, &recomp_unit_0074, "recomp_unit_0074");
    runtime.register_function(0x0892F7E0u, &recomp_unit_0074, "recomp_unit_0074");
    runtime.register_function(0x0892F7E4u, &recomp_unit_0074, "recomp_unit_0074");
    runtime.register_function(0x0892F7ECu, &recomp_unit_0074, "recomp_unit_0074");
    runtime.register_function(0x0892F804u, &recomp_unit_0074, "recomp_unit_0074");
    runtime.register_function(0x0892F810u, &recomp_unit_0074, "recomp_unit_0074");
    runtime.register_function(0x0892F814u, &recomp_unit_0074, "recomp_unit_0074");
    runtime.register_function(0x0892F818u, &recomp_unit_0074, "recomp_unit_0074");
    runtime.register_function(0x0892F824u, &recomp_unit_0074, "recomp_unit_0074");
    runtime.register_function(0x0892F85Cu, &recomp_unit_0074, "recomp_unit_0074");
    runtime.register_function(0x0892F884u, &recomp_unit_0074, "recomp_unit_0074");
    runtime.register_function(0x0892F8A0u, &recomp_unit_0074, "recomp_unit_0074");
    runtime.register_function(0x0892F8B8u, &recomp_unit_0074, "recomp_unit_0074");
    runtime.register_function(0x0892F8D0u, &recomp_unit_0074, "recomp_unit_0074");
    runtime.register_function(0x0892F8D4u, &recomp_unit_0074, "recomp_unit_0074");
    runtime.register_function(0x0892F8DCu, &recomp_unit_0074, "recomp_unit_0074");
    runtime.register_function(0x0892F8F4u, &recomp_unit_0074, "recomp_unit_0074");
    runtime.register_function(0x0892F900u, &recomp_unit_0074, "recomp_unit_0074");
    runtime.register_function(0x0892F91Cu, &recomp_unit_0074, "recomp_unit_0074");
    runtime.register_function(0x0892F954u, &recomp_unit_0074, "recomp_unit_0074");
    runtime.register_function(0x0892F960u, &recomp_unit_0074, "recomp_unit_0074");
    runtime.register_function(0x0892F970u, &recomp_unit_0074, "recomp_unit_0074");
    runtime.register_function(0x0892F978u, &recomp_unit_0074, "recomp_unit_0074");
    runtime.register_function(0x0892F980u, &recomp_unit_0074, "recomp_unit_0074");
    runtime.register_function(0x0892F990u, &recomp_unit_0074, "recomp_unit_0074");
    runtime.register_function(0x0892F998u, &recomp_unit_0074, "recomp_unit_0074");
    runtime.register_function(0x0892F9B0u, &recomp_unit_0074, "recomp_unit_0074");
    runtime.register_function(0x0892F9B8u, &recomp_unit_0074, "recomp_unit_0074");
    runtime.register_function(0x0892F9D0u, &recomp_unit_0074, "recomp_unit_0074");
    runtime.register_function(0x0892F9D8u, &recomp_unit_0074, "recomp_unit_0074");
    runtime.register_function(0x0892F9F0u, &recomp_unit_0074, "recomp_unit_0074");
    runtime.register_function(0x0892F9F8u, &recomp_unit_0074, "recomp_unit_0074");
    runtime.register_function(0x0892FA10u, &recomp_unit_0074, "recomp_unit_0074");
    runtime.register_function(0x0892FA28u, &recomp_unit_0074, "recomp_unit_0074");
    runtime.register_function(0x0892FA40u, &recomp_unit_0074, "recomp_unit_0074");
    runtime.register_function(0x0892FA94u, &recomp_unit_0074, "recomp_unit_0074");
    runtime.register_function(0x0892FAACu, &recomp_unit_0074, "recomp_unit_0074");
    runtime.register_function(0x0892FAC4u, &recomp_unit_0074, "recomp_unit_0074");
    runtime.register_function(0x0892FADCu, &recomp_unit_0074, "recomp_unit_0074");
    runtime.register_function(0x0892FAF4u, &recomp_unit_0074, "recomp_unit_0074");
    runtime.register_function(0x0892FB0Cu, &recomp_unit_0074, "recomp_unit_0074");
    runtime.register_function(0x0892FB24u, &recomp_unit_0074, "recomp_unit_0074");
    runtime.register_function(0x0892FB3Cu, &recomp_unit_0074, "recomp_unit_0074");
    runtime.register_function(0x0892FB54u, &recomp_unit_0074, "recomp_unit_0074");
    runtime.register_function(0x0892FC00u, &recomp_unit_0074, "recomp_unit_0074");
    runtime.register_function(0x0892FC08u, &recomp_unit_0074, "recomp_unit_0074");
    runtime.register_function(0x0892FC3Cu, &recomp_unit_0074, "recomp_unit_0074");
    runtime.register_function(0x0892FC50u, &recomp_unit_0074, "recomp_unit_0074");
    runtime.register_function(0x0892FC5Cu, &recomp_unit_0074, "recomp_unit_0074");
    runtime.register_function(0x0892FC6Cu, &recomp_unit_0074, "recomp_unit_0074");
    runtime.register_function(0x0892FC74u, &recomp_unit_0074, "recomp_unit_0074");
    runtime.register_function(0x0892FCF8u, &recomp_unit_0074, "recomp_unit_0074");
    runtime.register_function(0x0892FD00u, &recomp_unit_0074, "recomp_unit_0074");
    runtime.register_function(0x0892FD10u, &recomp_unit_0074, "recomp_unit_0074");
    runtime.register_function(0x0892FD40u, &recomp_unit_0074, "recomp_unit_0074");
    runtime.register_function(0x0892FD50u, &recomp_unit_0074, "recomp_unit_0074");
    runtime.register_function(0x0892FD58u, &recomp_unit_0074, "recomp_unit_0074");
    runtime.register_function(0x0892FD6Cu, &recomp_unit_0074, "recomp_unit_0074");
    runtime.register_function(0x0892FD80u, &recomp_unit_0074, "recomp_unit_0074");
    runtime.register_function(0x0892FDA8u, &recomp_unit_0074, "recomp_unit_0074");
    runtime.register_function(0x0892FDC0u, &recomp_unit_0074, "recomp_unit_0074");
    runtime.register_function(0x0892FDD8u, &recomp_unit_0074, "recomp_unit_0074");
    runtime.register_function(0x0892FE08u, &recomp_unit_0074, "recomp_unit_0074");
    runtime.register_function(0x0892FE10u, &recomp_unit_0074, "recomp_unit_0074");
    runtime.register_function(0x0892FE3Cu, &recomp_unit_0074, "recomp_unit_0074");
    runtime.register_function(0x0892FE60u, &recomp_unit_0074, "recomp_unit_0074");
    runtime.register_function(0x0892FE70u, &recomp_unit_0074, "recomp_unit_0074");
    runtime.register_function(0x0892FE78u, &recomp_unit_0074, "recomp_unit_0074");
    runtime.register_function(0x0892FE90u, &recomp_unit_0074, "recomp_unit_0074");
    runtime.register_function(0x0892FE9Cu, &recomp_unit_0074, "recomp_unit_0074");
    runtime.register_function(0x0892FEA8u, &recomp_unit_0074, "recomp_unit_0074");
    runtime.register_function(0x0892FEB4u, &recomp_unit_0074, "recomp_unit_0074");
    runtime.register_function(0x0892FEF0u, &recomp_unit_0074, "recomp_unit_0074");
    runtime.register_function(0x0892FEF8u, &recomp_unit_0074, "recomp_unit_0074");
    runtime.register_function(0x0892FF1Cu, &recomp_unit_0074, "recomp_unit_0074");
    runtime.register_function(0x0892FF54u, &recomp_unit_0074, "recomp_unit_0074");
    runtime.register_function(0x0892FF6Cu, &recomp_unit_0074, "recomp_unit_0074");
    runtime.register_function(0x0892FF70u, &recomp_unit_0074, "recomp_unit_0074");
    runtime.register_function(0x0892FF78u, &recomp_unit_0074, "recomp_unit_0074");
    runtime.register_function(0x0892FF84u, &recomp_unit_0074, "recomp_unit_0074");
    runtime.register_function(0x0892FF94u, &recomp_unit_0074, "recomp_unit_0074");
    runtime.register_function(0x0892FF9Cu, &recomp_unit_0074, "recomp_unit_0074");
    runtime.register_function(0x0892FFA8u, &recomp_unit_0074, "recomp_unit_0074");
    runtime.register_function(0x0892FFB4u, &recomp_unit_0074, "recomp_unit_0074");
    runtime.register_function(0x0892FFC8u, &recomp_unit_0074, "recomp_unit_0074");
    runtime.register_function(0x0892FFD8u, &recomp_unit_0074, "recomp_unit_0074");
    runtime.register_function(0x0892FFF0u, &recomp_unit_0074, "recomp_unit_0074");
    runtime.register_function(0x0892FFF8u, &recomp_unit_0074, "recomp_unit_0074");
}
} // namespace psprecomp
